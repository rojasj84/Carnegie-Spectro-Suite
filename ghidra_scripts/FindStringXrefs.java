import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

public class FindStringXrefs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String needle = getScriptArgs()[0];
        DataIterator it = currentProgram.getListing().getDefinedData(true);
        while (it.hasNext()) {
            Data d = it.next();
            if (d.hasStringValue()) {
                String val = d.getDefaultValueRepresentation();
                if (val != null && val.contains(needle)) {
                    Address addr = d.getAddress();
                    println("STRING @ " + addr + " : " + val);
                    ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(addr);
                    while (refs.hasNext()) {
                        Reference r = refs.next();
                        Address from = r.getFromAddress();
                        Function f = currentProgram.getFunctionManager().getFunctionContaining(from);
                        println("  XREF from " + from + " in function " + (f != null ? f.getName() + " @ " + f.getEntryPoint() : "???"));
                    }
                }
            }
        }
    }
}
