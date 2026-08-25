import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.address.Address;
import java.io.PrintWriter;
import java.io.File;

public class DumpDisasm extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] allArgs = getScriptArgs();
        String outPath = allArgs[0];
        String[] names = new String[allArgs.length - 1];
        for (int i = 1; i < allArgs.length; i++) {
            names[i - 1] = allArgs[i];
        }
        PrintWriter writer = new PrintWriter(new File(outPath));

        for (String name : names) {
            Function[] funcs = getGlobalFunctions(name).toArray(new Function[0]);
            if (funcs.length == 0) {
                writer.println("=== FUNCTION NOT FOUND: " + name + " ===");
                continue;
            }
            for (Function func : funcs) {
                writer.println("=== " + func.getName() + " @ " + func.getEntryPoint() + " ===");
                Address start = func.getEntryPoint();
                Address end = func.getBody().getMaxAddress();
                InstructionIterator iter = currentProgram.getListing().getInstructions(start, true);
                while (iter.hasNext()) {
                    Instruction instr = iter.next();
                    if (instr.getAddress().compareTo(end) > 0) break;
                    writer.println(instr.getAddress() + "  " + instr.toString());
                }
                writer.println();
            }
        }
        writer.close();
        println("Wrote disassembly to " + outPath);
    }
}
