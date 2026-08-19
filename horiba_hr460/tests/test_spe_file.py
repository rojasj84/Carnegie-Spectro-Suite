"""
Tests for Princeton Instruments SPE file reader and writer.
"""

import os
import unittest
import tempfile
import numpy as np
from horiba_hr460.core.spe_file import read_spe, write_spe, SpeFile


class TestSpeFile(unittest.TestCase):

    def setUp(self):
        self.sample_spe = os.path.join(
            os.path.dirname(__file__), "..", "..", "HR460-PICCD", "q.spe"
        )

    def test_read_existing_spe(self):
        if not os.path.exists(self.sample_spe):
            self.skipTest(f"Sample SPE not found at {self.sample_spe}")

        spe = read_spe(self.sample_spe)
        self.assertGreater(spe.xdim, 0)
        self.assertGreater(spe.num_frames, 0)
        self.assertIsNotNone(spe.data)
        self.assertEqual(len(spe.data.flat), spe.xdim * spe.ydim * spe.num_frames)

    def test_write_and_read_roundtrip(self):
        test_data = np.linspace(100.0, 5000.0, 1024, dtype=np.float32)
        with tempfile.NamedTemporaryFile("wb", delete=False, suffix=".spe") as tmp:
            tmp_path = tmp.name

        try:
            write_spe(tmp_path, test_data, exposure_time=2.5)
            spe = read_spe(tmp_path)
            self.assertEqual(spe.xdim, 1024)
            self.assertEqual(spe.ydim, 1)
            self.assertEqual(spe.num_frames, 1)
            self.assertAlmostEqual(spe.exposure_time, 2.5, places=2)
            np.testing.assert_allclose(spe.data, test_data, rtol=1e-5)
        finally:
            if os.path.exists(tmp_path):
                os.remove(tmp_path)

    def test_ascii_export(self):
        test_data = np.array([10.0, 20.0, 30.0], dtype=np.float32)
        spe = SpeFile(data=test_data, xdim=3, ydim=1, num_frames=1, exposure_time=1.0)
        
        with tempfile.NamedTemporaryFile("w", delete=False, suffix=".dat") as tmp:
            tmp_path = tmp.name

        try:
            spe.to_ascii(tmp_path, x_axis=np.array([500.0, 501.0, 502.0]))
            loaded = np.loadtxt(tmp_path)
            self.assertEqual(loaded.shape, (3, 2))
            self.assertAlmostEqual(loaded[0, 0], 500.0)
            self.assertAlmostEqual(loaded[0, 1], 10.0)
        finally:
            if os.path.exists(tmp_path):
                os.remove(tmp_path)


if __name__ == "__main__":
    unittest.main()
