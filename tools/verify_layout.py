"""Cross-verify class header layout against constructor disassembly.

Usage: py_exec_file this_script.py
Then call verify_class("ClassName", ctor_addr)
"""
import idautils, ida_funcs, ida_xref, ida_name, ida_bytes, ida_ua, idaapi

def verify_class(cls_name, ctor_addr):
    """Parse constructor writes and print field layout."""
    print("=" * 60)
    print("CLASS: %s | Constructor: 0x%X" % (cls_name, ctor_addr))
    print("=" * 60)
    
    func = ida_funcs.get_func(ctor_addr)
    if not func:
        print("ERROR: No function at 0x%X" % ctor_addr)
        return
    
    items = ida_funcs.get_func(ctor_addr)
    end = items.end_ea
    
    # Parse all writes: mov [reg+offset], value
    writes = []
    ea = ctor_addr
    while ea < end:
        insn = ida_ua.insn_t()
        length = ida_ua.decode_insn(insn, ea)
        if length == 0:
            ea += 1
            continue
        
        mnem = insn.get_canon_mnem()
        if mnem in ('mov', 'movzx'):
            # Check if dest is [reg+offset]
            op = insn.ops[0]
            if op.type == ida_ua.o_displ:
                offset = op.addr  # displacement
                size = 4  # default DWORD
                if op.dtype == ida_ua.dt_byte:
                    size = 1
                elif op.dtype == ida_ua.dt_word:
                    size = 2
                
                # Try to get the immediate value
                val = None
                val_str = None
                if insn.ops[1].type == ida_ua.o_imm:
                    val = insn.ops[1].value
                    val_str = "0x%X" % insn.ops[1].value
                elif insn.ops[1].type == ida_ua.o_reg:
                    # Register write - try to get its value from nearby
                    reg = ida_ua.print_operand(ea, 1)
                    # Check if it's xor reg,reg (zero)
                    prev_ea = ida_bytes.prev_head(ea, 0)
                    if prev_ea != idaapi.BADADDR:
                        prev_insn = ida_ua.insn_t()
                        ida_ua.decode_insn(prev_insn, prev_ea)
                        pm = prev_insn.get_canon_mnem()
                        if pm == 'xor' or pm == 'mov':
                            # Check if the register was zeroed
                            prev_dest = ida_ua.print_operand(prev_ea, 0)
                            prev_src = ida_ua.print_operand(prev_ea, 1)
                            if prev_dest == reg and prev_src == reg:
                                val_str = "0 (xor %s,%s)" % (reg, reg)
                                val = 0
                    if val is None:
                        val_str = "(%s)" % reg
                
                writes.append((offset, size, val_str or "?", ea))
        
        elif mnem == 'call':
            # Function call - initializes multiple bytes
            call_target = insn.ops[0].addr
            call_name = ida_name.get_ea_name(call_target) or "sub_%X" % call_target
            # Check if lea ecx, [reg+offset] preceded this
            prev_ea = ida_bytes.prev_head(ea, 0)
            prev2_ea = ida_bytes.prev_head(prev_ea, 0)
            p_insn = ida_ua.insn_t()
            ida_ua.decode_insn(p_insn, prev_ea)
            if p_insn.get_canon_mnem() == 'lea':
                op0 = p_insn.ops[1]
                if op0.type == ida_ua.o_displ:
                    writes.append((op0.addr, 0x14, "Init(%s)" % call_name, ea))
        
        ea += length
    
    # Sort by offset
    writes.sort(key=lambda w: w[0])
    
    # Print
    print("%6s %4s %-50s @ 0x%X" % ("Offset", "Size", "Value", ctor_addr))
    print("-" * 80)
    
    prev_end = 0  # Adjust for base class: ObjectClass has +0x24 from Abstract
    base_offset = 0
    
    # Try to find the base class constructor call
    for w in writes:
        if 'Init' in str(w[2]):
            base_offset = w[0]  # First Init call is usually the first member
    
    for off, size, val, ea in writes:
        gap = ""
        if off > prev_end and prev_end > 0:
            gap = " [gap: %d bytes 0x%X-0x%X]" % (off - prev_end, prev_end, off - 1)
        print("0x%04X %4d %-50s %s" % (off, size, val, gap))
        if size > 0:
            prev_end = off + size
    
    print("-" * 80)
    print("Last offset + size: 0x%X (%d bytes total after base)" % (prev_end, prev_end))
    print("")

# Quick spot-check for known classes
print("ObjectClass constructor 0x5F3900:")
verify_class("ObjectClass", 0x5F3900)
