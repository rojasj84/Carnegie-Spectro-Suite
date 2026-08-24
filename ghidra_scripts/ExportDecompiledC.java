import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.PrintWriter;
import java.io.File;

public class ExportDecompiledC extends GhidraScript {
    @Override
    public void run() throws Exception {
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        
        String outPath = "decompiled_" + currentProgram.getName() + ".c";
        if (getScriptArgs().length > 0) {
            outPath = getScriptArgs()[0];
        }
        
        File outFile = new File(outPath);
        PrintWriter writer = new PrintWriter(outFile);
        
        println("Decompiling " + currentProgram.getName() + " -> " + outFile.getAbsolutePath());
        
        FunctionIterator iter = currentProgram.getFunctionManager().getFunctions(true);
        int count = 0;
        while (iter.hasNext()) {
            Function func = iter.next();
            try {
                DecompileResults res = decomp.decompileFunction(func, 30, monitor);
                if (res != null && res.decompileCompleted() && res.getDecompiledFunction() != null) {
                    writer.println("/* ================================================================");
                    writer.println(" * Function: " + func.getName());
                    writer.println(" * Address:  " + func.getEntryPoint());
                    writer.println(" * ================================================================ */");
                    writer.println(res.getDecompiledFunction().getC());
                    writer.println();
                    count++;
                }
            } catch (Exception e) {
                writer.println("// Error decompiling: " + func.getName() + ": " + e.getMessage());
            }
        }
        writer.close();
        println("Successfully decompiled " + count + " functions to " + outFile.getAbsolutePath());
    }
}
