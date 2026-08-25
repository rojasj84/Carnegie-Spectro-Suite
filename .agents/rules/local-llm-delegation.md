# Workspace Rule: Local 14B LLM Delegation Guidelines

When delegating coding or analysis tasks to the local offline LLM (`qwen2.5-coder:14b` via Ollama / `local-llm` MCP tool / `offline-llm` skill):

## 1. High-Confidence Delegation Areas (Offload to 14B)
- **Binary Format Parsing & Buffer Handling**: Checking struct packing/unpacking, endianness, truncated buffer reads, and boundary checks.
- **Data Model Serialization & Atomic I/O**: Generating/verifying dataclasses, JSON schemas, atomic file writes (`tempfile` + `os.replace`), and dictionary unpacking fallbacks.
- **Test Generation & Mocks**: Generating parameterized `pytest` suites, mock hardware responses, and edge-case inputs.
- **Hardware Driver Safety & Lifecycle**: Adding timeouts, retry backoffs with exponential delay, context managers (`__enter__`/`__exit__`), and hardware limit checks.
- **Boilerplate & Typing**: Generating type hints, docstrings, and standard library wrapper boilerplate.

## 2. Forbidden / High-Risk Delegation Areas (Do NOT rely on 14B alone)
- **Physics Equations & Symbolic Algebra**: The 14B model is prone to hallucinating invalid algebraic reductions in physical formulas (e.g. Raman shift, dispersion geometry).
- **Framework Architectural Swaps**: Avoid asking open-ended UI refactorings without explicitly enforcing framework constraints (e.g. Tkinter vs PyQt).
- **Multi-Window Array Dispersion Heuristics**: Verify any mathematical suggestions for interpolation grids or spectral stitching against domain physics.

## 3. Recommended Parameters
- Model: `qwen2.5-coder:14b`
- Temperature: `0.1` (deterministic code analysis)
- System Prompt: Specify explicit focus areas (e.g., *"Focus strictly on binary struct parsing correctness, error handling, and type safety"*).
