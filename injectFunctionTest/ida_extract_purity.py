#!/usr/bin/env python3
"""
IDA extraction: Phase 1 — direct .data read/write per function.

Run inside IDA Pro via ida-pro-mcp py_exec_file.
Iterates all 17K functions, decodes instructions, extracts:
  - Direct .data reads  (immediate address operand → mov eax, [0x8B410C])
  - Direct .data writes (immediate address operand → mov [0x8B5020], eax)
  - Direct call targets
  - Indirect call flag
  - Parameter count + has_pointer_param (from tinfo_t)

Output: purity_effects.json (committed to git)
"""

import json
import time
import sys
from collections import defaultdict

import idautils
import ida_funcs
import ida_ua
import ida_segment
import ida_name
import ida_typeinf
import ida_nalt
import idaapi

# ============================================================
# Configuration
# ============================================================

OUTPUT_PATH = r"D:\RA2YR_ReSource\injectFunctionTest\purity_effects.json"
CHECKPOINT_EVERY = 1000   # Save progress every N functions
DRY_RUN_COUNT = 0         # Set to N to test only first N functions (0 = all)         # Set to N to test only first N functions (0 = all)

# ============================================================
# .data segment range
# ============================================================

def get_data_range():
    """Get .data segment start/end addresses."""
    seg = ida_segment.get_segm_by_name(".data")
    if seg is None:
        print("ERROR: .data segment not found")
        return 0, 0
    return seg.start_ea, seg.end_ea


DATA_START, DATA_END = get_data_range()
print(f".data range: 0x{DATA_START:08X} - 0x{DATA_END:08X}")


def is_data_addr(addr):
    """Check if an absolute address falls in the .data section."""
    return DATA_START <= addr < DATA_END


# ============================================================
# Instruction classification
# ============================================================

# Mnemonics that write to operand 0
WRITE_MNEMS = {
    "mov", "movsx", "movzx", "movsd", "movss",
    "fst", "fstp", "fist", "fistp",
    "cmovz", "cmovnz", "cmove", "cmovne",
    "cmovg", "cmovl", "cmova", "cmovb",
    "cmovs", "cmovns", "cmovp", "cmovnp",
    "cmovo", "cmovno", "cmovc", "cmovnc",
    "cmovbe", "cmovae",
    "pop", "fld", "fild",
}

# Mnemonics that read-modify-write operand 0
RMW_MNEMS = {
    "add", "sub", "and", "or", "xor", "adc", "sbb",
    "inc", "dec", "not", "neg",
    "shl", "shr", "sal", "sar", "rol", "ror", "rcl", "rcr",
    "imul", "idiv", "div", "mul",
    "xchg", "bts", "btr", "btc",
    "fadd", "fsub", "fmul", "fdiv",
}

# Mnemonics that only read memory
READ_MNEMS = {
    "cmp", "test", "push",
    "fcom", "fcomp", "fcompp", "ftst", "fxam",
    "fldcw", "fstcw", "fstenv", "fldenv",
}

# Mnemonics that never access memory via their operands
# (control flow, address computation only)
SKIP_MNEMS = {
    "lea", "call", "jmp", "jz", "jnz", "je", "jne",
    "jg", "jl", "jge", "jle", "ja", "jb", "jae", "jbe",
    "jo", "jno", "js", "jns", "jp", "jnp", "jcxz", "jecxz",
    "loop", "loope", "loopne",
}


def classify_mem_access(mnem, op_idx):
    """Classify a memory operand access as 'R' (read), 'W' (write), 'RW', or None."""
    if mnem in SKIP_MNEMS:
        return None

    if op_idx == 0:
        if mnem in WRITE_MNEMS:
            return "W"
        if mnem in RMW_MNEMS:
            return "RW"
        # Conservative: assume write if not explicitly read-only
        if mnem in READ_MNEMS:
            return "R"
        return "W"  # default: op0 is destination

    # op_idx > 0: source operand
    return "R"


def extract_data_addrs(func_ea):
    """Extract direct .data read/write addresses from a function's instructions."""
    func = ida_funcs.get_func(func_ea)
    if not func:
        return [], [], [], False, False, False

    reads_set = set()
    writes_set = set()
    direct_calls = []
    has_indirect_call = False
    has_vtable_call = False
    has_any_call = False

    ea = func.start_ea
    end = func.end_ea

    while ea < end:
        insn = ida_ua.insn_t()
        sz = ida_ua.decode_insn(insn, ea)
        if sz == 0:
            ea += 1
            continue

        mnem = insn.get_canon_mnem()

        # Check for call instructions
        if mnem == "call":
            has_any_call = True
            op0 = insn.ops[0]
            if op0.type in (ida_ua.o_near, ida_ua.o_far):
                # Direct call
                tgt = op0.addr
                if tgt and tgt != ea:
                    direct_calls.append(tgt)
            else:
                # Indirect call (call [reg], call [reg+off], call eax, etc.)
                has_indirect_call = True
                # Check if it's a vtable call (call [reg+constant])
                if op0.type == ida_ua.o_displ:
                    has_vtable_call = True

        # Check memory operands for .data access
        for i, op in enumerate(insn.ops):
            # Only check o_mem (direct memory reference with absolute address)
            if op.type == ida_ua.o_mem:
                addr = op.addr
                if is_data_addr(addr):
                    access = classify_mem_access(mnem, i)
                    if access is None:
                        continue
                    if "R" in access:
                        reads_set.add(addr)
                    if "W" in access:
                        writes_set.add(addr)

            # Also check o_displ — some compilers use [base+disp]
            # Only count if base register is absent (absolute address via
            # displacement with no base register — rare on x86)
            elif op.type == ida_ua.o_displ:
                addr = op.addr
                # o_displ with a valid address AND no base register →
                # essentially an absolute reference
                # On x86, this typically has reg=0 or specific encoding
                if addr != idaapi.BADADDR and is_data_addr(addr):
                    # Check if there's a non-zero base register
                    # (op.reg, op.specflag1, etc.)
                    # For safety, check if the operand really has no register
                    if op.reg == 0 and op.specflag1 == 0:
                        access = classify_mem_access(mnem, i)
                        if access is None:
                            continue
                        if "R" in access:
                            reads_set.add(addr)
                        if "W" in access:
                            writes_set.add(addr)

        ea += sz

    reads = sorted(reads_set)
    writes = sorted(writes_set)
    direct_calls = sorted(set(direct_calls))

    return reads, writes, direct_calls, has_indirect_call, has_vtable_call, has_any_call


# ============================================================
# Parameter info extraction
# ============================================================

def get_param_info(func_ea):
    """Get parameter count and whether any param is a pointer type."""
    try:
        tif = ida_typeinf.tinfo_t()
        if not ida_nalt.get_tinfo(tif, func_ea):
            return 0, False

        fd = ida_typeinf.func_type_data_t()
        if not tif.get_func_details(fd):
            return 0, False

        param_count = len(fd)
        has_ptr = False
        for pinfo in fd:
            if not hasattr(pinfo, 'type'):
                continue
            ptype = pinfo.type
            if ptype.is_ptr():
                has_ptr = True
                break

        return param_count, has_ptr
    except Exception:
        return 0, False


# ============================================================
# Main extraction loop
# ============================================================

def extract_all():
    """Iterate all functions, extract per-function data effects."""
    funcs = {}
    total = 0
    skipped = 0
    with_any_call = 0
    with_direct_call = 0
    with_indirect = 0
    with_vtable = 0
    with_data_read = 0
    with_data_write = 0
    with_both = 0
    leaf_no_data = 0
    true_leaf = 0
    has_ptr_param_count = 0

    t_start = time.time()

    for ea in idautils.Functions():
        total += 1
        if DRY_RUN_COUNT and total > DRY_RUN_COUNT:
            break

        name = ida_name.get_ea_name(ea)
        func = ida_funcs.get_func(ea)
        sz = func.size() if func else 0

        reads, writes, direct_calls, has_indirect, has_vtable, has_any_call = \
            extract_data_addrs(ea)

        param_count, has_ptr = get_param_info(ea)

        # Build entry
        entry = {"n": name, "sz": sz}

        if reads:
            entry["r"] = [f"0x{a:08X}" for a in reads]
        if writes:
            entry["w"] = [f"0x{a:08X}" for a in writes]
        if direct_calls:
            entry["cd"] = [f"0x{a:08X}" for a in direct_calls]
        if has_indirect:
            entry["ci"] = True
        if has_vtable:
            entry["cv"] = True
        if has_any_call:
            entry["hc"] = True
        if param_count > 0:
            entry["pc"] = param_count
        if has_ptr:
            entry["pp"] = True

        funcs[f"{ea:08X}"] = entry

        # Statistics
        if not has_any_call:
            true_leaf += 1
        if has_indirect:
            with_indirect += 1
        if has_vtable:
            with_vtable += 1
        if has_any_call:
            with_any_call += 1
        if direct_calls:
            with_direct_call += 1
        if reads:
            with_data_read += 1
        if writes:
            with_data_write += 1
        if reads and writes:
            with_both += 1
        if not reads and not writes and not has_any_call:
            leaf_no_data += 1
        if has_ptr:
            has_ptr_param_count += 1
        if ea % 100000 == 0:
            skipped += 1

        if total % CHECKPOINT_EVERY == 0:
            elapsed = time.time() - t_start
            rate = total / elapsed if elapsed > 0 else 0
            print(f"  {total} functions ({rate:.0f}/s)...", end="\r")

    elapsed = time.time() - t_start
    print(f"\nDone: {total} functions in {elapsed:.1f}s ({total/elapsed:.0f}/s)")

    # Assembly output
    output = {
        "meta": {
            "binary": "gamemd.exe",
            "base": "0x400000",
            "data_start": f"0x{DATA_START:08X}",
            "data_end": f"0x{DATA_END:08X}",
            "total": total,
            "date": time.strftime("%Y-%m-%d"),
        },
        "funcs": funcs,
    }

    with open(OUTPUT_PATH, "w", encoding="utf-8") as f:
        json.dump(output, f, indent=2, ensure_ascii=False)

    # Statistics report
    print(f"\n{'='*60}")
    print(f"PURITY EXTRACTION STATISTICS")
    print(f"{'='*60}")
    print(f"Total functions scanned:         {total:>8}")
    print(f"  True leaf (no calls):          {true_leaf:>8} ({true_leaf*100/max(total,1):.1f}%)")
    print(f"  Leaf, no .data access:         {leaf_no_data:>8} ({leaf_no_data*100/max(total,1):.1f}%)")
    print(f"  Has calls (any):               {with_any_call:>8} ({with_any_call*100/max(total,1):.1f}%)")
    print(f"  Has direct calls:              {with_direct_call:>8}")
    print(f"  Has indirect calls:            {with_indirect:>8} ({with_indirect*100/max(total,1):.1f}%)")
    print(f"  Has vtable calls:              {with_vtable:>8} ({with_vtable*100/max(total,1):.1f}%)")
    print(f"  Has pointer params:            {has_ptr_param_count:>8} ({has_ptr_param_count*100/max(total,1):.1f}%)")
    print(f"  Direct .data reads only:       {with_data_read:>8} ({with_data_read*100/max(total,1):.1f}%)")
    print(f"  Direct .data writes only:      {with_data_write:>8} ({with_data_write*100/max(total,1):.1f}%)")
    print(f"  Both .data read AND write:     {with_both:>8} ({with_both*100/max(total,1):.1f}%)")
    print(f"Output: {OUTPUT_PATH}")
    print(f"Size: {sum(1 for _ in open(OUTPUT_PATH,'rb')):,} bytes")


# ============================================================
# Entry point
# ============================================================

if __name__ == "__main__":
    extract_all()
