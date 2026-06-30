#!/usr/bin/env python3
"""
IDAPython script: Extract vtable signatures (T2), disassembly constraints (T4),
and call graph (T5) from gamemd.exe.i64.

Runs inside IDA Pro via ida-pro-mcp_py_exec_file.
Outputs:
  - tools/type_infer/anchors/vtable_signatures.json
  - tools/type_infer/constraints/raw_constraints.json
  - tools/type_infer/constraints/call_graph.json

T2: Scan .rdata for consecutive function pointers → group into vtables → match to class names
T4: For every .text function, extract type constraints from disassembly patterns
T5: Build caller→callee adjacency list (direct + vtable edges)
"""

import json, os, time, re
from collections import defaultdict

import idaapi, idautils, idc, ida_funcs, ida_bytes, ida_xref, ida_ua
import ida_segment, ida_name, ida_nalt, ida_idp

OUTPUT_DIR = r"D:\RA2YR_ReSource\tools\type_infer"
TEXT_START = 0x401000
TEXT_END = 0x7E1000
RDATA_START = 0x7E1608
RDATA_END = 0x812000
MIN_VTABLE_ENTRIES = 3  # Minimum entries to consider as vtable

# ============================================================
# T2: VTABLE SIGNATURES
# ============================================================

def in_text_section(val):
    """Check if a dword value is a valid function pointer in .text."""
    if val < TEXT_START or val >= TEXT_END:
        return False
    func = ida_funcs.get_func(val)
    return func is not None and func.start_ea == val

def scan_vtables():
    """Scan .rdata for consecutive function pointers, grouping into vtables."""
    print("[T2] Scanning .rdata [{:#x} - {:#x}]...".format(RDATA_START, RDATA_END))
    
    vtables = []
    ea = RDATA_START
    scanned = 0
    null_gap_count = 0
    non_text_count = 0
    
    while ea < RDATA_END - 4:
        val = ida_bytes.get_dword(ea)
        scanned += 1
        
        if in_text_section(val):
            # Found start of a potential vtable
            vtable_start = ea
            entries = []
            scan_ea = ea
            
            while scan_ea < RDATA_END:
                v = ida_bytes.get_dword(scan_ea)
                if in_text_section(v):
                    entries.append((scan_ea, v))
                    scan_ea += 4
                else:
                    break
            
            if len(entries) >= MIN_VTABLE_ENTRIES:
                vtables.append({
                    "start": vtable_start,
                    "end": scan_ea,
                    "size": len(entries),
                    "entries": [e[1] for e in entries]
                })
                if len(vtables) % 100 == 0:
                    print("[T2]   Found {} vtables so far (at {:#x}, {} entries)...".format(
                        len(vtables), vtable_start, len(entries)))
            
            ea = scan_ea
            continue
        elif val == 0:
            null_gap_count += 1
        else:
            non_text_count += 1
        
        ea += 4
    
    print("[T2] Scanned {} dwords: {} vtables, {} nulls, {} non-text".format(
        scanned, len(vtables), null_gap_count, non_text_count))
    return vtables

def demangle_vtable_name(name_ea, raw_name):
    """Demangle MSVC vtable name to extract class name."""
    # Try full demangle first
    try:
        demangled = ida_name.get_demangled_name(name_ea, ida_name.DQT_FULLY_DEMANGLED)
        if not demangled:
            demangled = idc.demangle_name(raw_name, idc.get_inf_attr(idc.INF_SHORT_DN))
    except:
        demangled = None
    
    if demangled:
        # Pattern: "const ClassName::`vftable'" or "const ClassName::`vftable'{for ...}"
        m = re.search(r"const\s+(.+?)::`vftable'", demangled)
        if m:
            return m.group(1)
        # Pattern: "ClassName::`vftable'"
        m = re.search(r"^(.+?)::`vftable'", demangled)
        if m:
            return m.group(1)
    
    # Manual demangle: ??_7ClassName@@6B@ → ClassName
    if raw_name.startswith("??_7") and "@@6B" in raw_name:
        inner = raw_name[4:]  # Remove "??_7"
        # Remove "@@" suffix variations
        inner = inner.split("@@")[0]
        if inner:
            # Handle template names with $
            return inner
    
    return None

def match_vtables_to_classes(vtables):
    """Match vtables to class names using IDA names in .rdata section."""
    print("[T2] Matching vtables to class names...")
    
    # Build index: .rdata address → (name, demangled_class)
    rdata_entries = {}
    for name_ea, name in idautils.Names():
        seg = ida_segment.getseg(name_ea)
        if seg and ida_segment.get_segm_name(seg) == '.rdata':
            rdata_entries[name_ea] = name
    
    # Also check for RTTI Complete Object Locator names (??_R0?AVClassName@@@8)
    # These are at vtable_start - 4 typically
    rtti_map = {}
    for name_ea, name in rdata_entries.items():
        if name.startswith("??_R0?AV") or ".?AV" in name:
            try:
                demangled = idc.demangle_name(name, idc.get_inf_attr(idc.INF_SHORT_DN))
                if demangled:
                    # "class ClassName * __ptr64 `RTTI Type Descriptor'" → ClassName
                    m = re.search(r"(?:class|struct)\s+(\S+)\s+(?:\*|&)", demangled)
                    if m:
                        rtti_map[name_ea] = m.group(1)
            except:
                pass
    
    vtable_signatures = {}
    matched = 0
    unmatched = 0
    
    for vt in vtables:
        start_addr = vt["start"]
        class_name = None
        
        # Method 1: Direct vtable symbol at this address
        if start_addr in rdata_entries:
            raw_name = rdata_entries[start_addr]
            class_name = demangle_vtable_name(start_addr, raw_name)
            if class_name:
                pass  # Found!
        
        # Method 2: RTTI Complete Object Locator at vtable_start - 4
        if not class_name and (start_addr - 4) in rtti_map:
            class_name = rtti_map[start_addr - 4]
        
        # Method 3: Check neighboring addresses for RTTI
        if not class_name:
            for offset in [-4, -8, -12, 4, 8]:
                check_addr = start_addr + offset
                if check_addr in rtti_map:
                    class_name = rtti_map[check_addr]
                    break
        
        if class_name:
            matched += 1
        else:
            unmatched += 1
        
        # Generate signature entries
        vtable_key_prefix = class_name if class_name else f"vtable_0x{start_addr:08X}"
        
        for i, func_addr in enumerate(vt["entries"]):
            func_name = ida_funcs.get_func_name(func_addr)
            if not func_name:
                func_name = f"sub_{func_addr:X}" if ida_funcs.get_func(func_addr) else f"??_0x{func_addr:X}"
            
            key = f"{vtable_key_prefix}::vt+{i*4}"
            vtable_signatures[key] = {
                "addr": f"0x{func_addr:08X}",
                "cc": "thiscall",
                "vtable_base": f"0x{start_addr:08X}",
                "slot": i,
                "byte_offset": i * 4,
                "func_name": func_name
            }
    
    print("[T2] Matched: {}, Unmatched: {}, Total signatures: {}".format(
        matched, unmatched, len(vtable_signatures)))
    return vtable_signatures

# ============================================================
# T4: DISASSEMBLY CONSTRAINTS
# ============================================================

# Patterns for detecting member access and vtable dispatch
RE_MEMBER_LOAD = re.compile(r'\[ecx\+([0-9A-Fa-f]+)h?\]', re.IGNORECASE)
RE_VTABLE_CALL = re.compile(r'\[(\w{2,3})\+([0-9A-Fa-f]+)h?\]', re.IGNORECASE)
RE_STACK_ACCESS = re.compile(r'\[(?:esp|ebp)[+\-]([0-9A-Fa-f]+)h?\]', re.IGNORECASE)

_X86_REG_NAMES = frozenset({
    'eax', 'ebx', 'ecx', 'edx', 'esi', 'edi', 'ebp', 'esp',
    'al', 'ah', 'bl', 'bh', 'cl', 'ch', 'dl', 'dh',
    'ax', 'bx', 'cx', 'dx', 'si', 'di', 'bp', 'sp',
})

def extract_instruction_constraints(func_ea, func_name):
    """Extract type-relevant constraints from instructions in a function."""
    constraints = []
    
    func = ida_funcs.get_func(func_ea)
    if not func:
        return constraints
    
    ea = func.start_ea
    end = func.end_ea
    fstart = func.start_ea
    is_thiscall = '::' in func_name
    
    # Track last instruction for return value analysis
    prev_ea = idaapi.BADADDR
    prev_mnem = ""
    prev_operands = []
    
    while ea < end:
        mnem = idc.print_insn_mnem(ea)
        op0 = idc.print_operand(ea, 0)
        # Check if operand 1 exists by trying to print it
        try:
            op1 = idc.print_operand(ea, 1)
        except:
            op1 = ""
        
        constraint = None
        
        # --- this.member(OFFSET) → register ---
        if mnem in ('mov', 'movzx', 'movsx') and op1 and is_thiscall:
            m = RE_MEMBER_LOAD.search(op1)
            if m:
                offset = int(m.group(1), 16)
                constraint = {
                    "from": f"{func_name}.this.member({offset:#x})",
                    "to": op0,
                    "type": "ASSIGN",
                    "addr": f"0x{ea:08X}",
                    "details": f"mov {op0}, [ecx+{offset:#x}]"
                }
        
        # --- register → register (propagation chain) ---
        # NOTE: uses 'if' (not 'elif') so reg→reg is captured in all functions,
        # including thiscall where the previous 'if' catches mov for member access.
        if mnem == 'mov' and op0 and op1:
            from_reg = op1.strip().lower()
            to_reg = op0.strip().lower()
            if from_reg in _X86_REG_NAMES and to_reg in _X86_REG_NAMES:
                constraint = {
                    "from": from_reg,
                    "to": to_reg,
                    "type": "ASSIGN",
                    "addr": f"0x{ea:08X}",
                    "details": f"mov {to_reg}, {from_reg}"
                }
        
        # --- register → this.member(OFFSET) ---
        if mnem == 'mov' and op0 and is_thiscall:
            m = RE_MEMBER_LOAD.search(op0)
            if m:
                offset = int(m.group(1), 16)
                constraint = {
                    "from": op1,
                    "to": f"{func_name}.this.member({offset:#x})",
                    "type": "ASSIGN",
                    "addr": f"0x{ea:08X}",
                    "details": f"mov [ecx+{offset:#x}], {op1}"
                }
        
        # --- CALL (direct + vtable dispatch) ---
        elif mnem == 'call':
            # Use instruction decoder to get exact target from operand
            insn = ida_ua.insn_t()
            if ida_ua.decode_insn(insn, ea) and insn.ops[0].type != ida_ua.o_void:
                call_op = insn.ops[0]
                
                # Direct call: o_near (7) or o_far (6)
                if call_op.type in (ida_ua.o_near, ida_ua.o_far):
                    target_ea = call_op.addr
                    func_at_target = ida_funcs.get_func(target_ea)
                    if func_at_target and func_at_target.start_ea == target_ea:
                        callee_name = ida_funcs.get_func_name(target_ea)
                        if callee_name:
                            constraint = {
                                "from": f"0x{ea:08X}_call",
                                "to": f"0x{target_ea:08X}",
                                "type": "CALL",
                                "addr": f"0x{ea:08X}",
                                "callee_name": callee_name,
                                "details": f"call {callee_name}"
                            }
                        else:
                            constraint = {
                                "from": f"0x{ea:08X}_call",
                                "to": f"0x{target_ea:08X}",
                                "type": "CALL",
                                "addr": f"0x{ea:08X}",
                                "callee_name": f"sub_{target_ea:X}",
                                "details": f"call sub_{target_ea:X}"
                            }
                
                # Indirect/vtable dispatch: o_displ(4), o_mem(2), o_phrase(3)
                elif call_op.type in (ida_ua.o_displ, ida_ua.o_mem, ida_ua.o_phrase):
                    # Use print_operand to get textual representation
                    call_text = idc.print_operand(ea, 0)
                    m = RE_VTABLE_CALL.search(call_text)
                    if m:
                        reg = m.group(1).lower()
                        offset = int(m.group(2), 16)
                        slot = offset // 4
                        constraint = {
                            "from": f"0x{ea:08X}_call",
                            "to": f"vtable_slot_{slot:#x}",
                            "type": "CALL_VTABLE",
                            "addr": f"0x{ea:08X}",
                            "details": f"call [{reg}+{offset:#x}] (slot {slot})",
                            "vtable_reg": reg,
                            "vtable_offset": offset,
                            "vtable_slot": slot
                        }
        
        # --- RETURN value constraint ---
        elif mnem in ('ret', 'retn'):
            if prev_mnem in ('mov', 'movzx', 'movsx') and 'eax' in prev_operands[0].lower():
                constraint = {
                    "from": f"0x{ea:08X}_RET",
                    "to": f"{func_name}.return",
                    "type": "RETURN",
                    "addr": f"0x{ea:08X}",
                    "details": f"returns via eax (from {prev_operands[0]})"
                }
            elif prev_mnem in ('xor', 'sub') and len(prev_operands) >= 2 and 'eax' in prev_operands[0].lower() and prev_operands[0] == prev_operands[-1]:
                # xor eax, eax → return 0
                constraint = {
                    "from": f"0x{ea:08X}_RET",
                    "to": f"{func_name}.return",
                    "type": "RETURN",
                    "addr": f"0x{ea:08X}",
                    "details": f"returns via eax (zeroed with {prev_mnem})"
                }
            elif prev_mnem in ('pop',) and 'eax' in prev_operands[0].lower():
                constraint = {
                    "from": f"0x{ea:08X}_RET",
                    "to": f"{func_name}.return",
                    "type": "RETURN",
                    "addr": f"0x{ea:08X}",
                    "details": f"returns via eax (popped)"
                }
            # Catch: immediate before ret but separated by one instruction
            elif idaapi.BADADDR != prev_ea:
                prev2_ea = idc.prev_head(prev_ea, fstart)
                if prev2_ea != idaapi.BADADDR:
                    prev2_mnem = idc.print_insn_mnem(prev2_ea)
                    prev2_op0 = idc.print_operand(prev2_ea, 0)
                    if prev2_mnem in ('mov', 'movzx', 'movsx') and 'eax' in prev2_op0.lower():
                        constraint = {
                            "from": f"0x{ea:08X}_RET",
                            "to": f"{func_name}.return",
                            "type": "RETURN",
                            "addr": f"0x{ea:08X}",
                            "details": f"returns via eax (mov at {prev2_ea:#x})"
                        }
        
        # --- LEA stack variable ---
        elif mnem == 'lea' and op1:
            m = RE_STACK_ACCESS.search(op1)
            if m:
                constraint = {
                    "from": op1,
                    "to": op0,
                    "type": "STACK_VAR",
                    "addr": f"0x{ea:08X}",
                    "details": f"lea {op0}, {op1}"
                }
        
        if constraint:
            constraints.append(constraint)
        
        # Track last non-nop instruction
        if mnem not in ('nop', 'int3'):
            prev_ea = ea
            prev_mnem = mnem
            prev_operands = [op0]
            if op1:
                prev_operands.append(op1)
        
        nxt = idc.next_head(ea, end)
        if nxt == idaapi.BADADDR or nxt <= ea:
            break
        ea = nxt
    
    return constraints

def extract_all_constraints():
    """Extract constraints from all .text functions."""
    print("[T4] Extracting disassembly constraints...")
    
    all_constraints = []
    func_count = 0
    skipped_non_text = 0
    total_processed = 0
    constraint_count = 0
    
    all_funcs = list(idautils.Functions())
    total_funcs = len(all_funcs)
    print("[T4] {} functions in database".format(total_funcs))
    
    for func_ea in all_funcs:
        seg = ida_segment.getseg(func_ea)
        if not seg or ida_segment.get_segm_name(seg) != '.text':
            skipped_non_text += 1
            continue
        
        func_name = ida_funcs.get_func_name(func_ea)
        if not func_name:
            func_name = f"sub_{func_ea:X}"
        
        constraints = extract_instruction_constraints(func_ea, func_name)
        all_constraints.extend(constraints)
        
        func_count += 1
        constraint_count += len(constraints)
        
        if func_count % 5000 == 0:
            print("[T4]   {}/{} .text functions, {} constraints so far...".format(
                func_count, total_funcs - skipped_non_text, constraint_count))
    
    print("[T4] Extracted {} constraints from {} .text functions (skipped {} non-.text)".format(
        constraint_count, func_count, skipped_non_text))
    return all_constraints

# ============================================================
# T5: CALL GRAPH
# ============================================================

def get_callees_from_function(func_ea):
    """Get all callees from a function using instruction-level scanning.
    Returns list of (target_str, call_type) tuples.
    For direct calls: ("0xADDR", "direct")
    For vtable calls: ("vtable_slot_N", "vtable")
    """
    callees = []
    seen = set()
    
    func = ida_funcs.get_func(func_ea)
    if not func:
        return callees
    
    ea = func.start_ea
    end = func.end_ea
    
    while ea < end:
        if ida_idp.is_call_insn(ea):
            # Use instruction decoder for exact target address
            insn = ida_ua.insn_t()
            if ida_ua.decode_insn(insn, ea) and insn.ops[0].type != ida_ua.o_void:
                call_op = insn.ops[0]
                
                # Direct call: o_near (7) or o_far (6)
                if call_op.type in (ida_ua.o_near, ida_ua.o_far):
                    target = call_op.addr
                    func_at_tgt = ida_funcs.get_func(target)
                    if func_at_tgt and func_at_tgt.start_ea == target:
                        key = f"0x{target:08X}"
                        if key not in seen:
                            seen.add(key)
                            callees.append((key, "direct"))
                
                # Indirect/vtable dispatch: o_displ(4), o_mem(2), o_phrase(3)
                elif call_op.type in (ida_ua.o_displ, ida_ua.o_mem, ida_ua.o_phrase):
                    call_text = idc.print_operand(ea, 0)
                    m = RE_VTABLE_CALL.search(call_text)
                    if m:
                        offset = int(m.group(2), 16)
                        slot = offset // 4
                        key = f"vtable_slot_{slot:#x}"
                        if key not in seen:
                            seen.add(key)
                            callees.append((key, "vtable"))
        
        nxt = idc.next_head(ea, end)
        if nxt == idaapi.BADADDR or nxt <= ea:
            break
        ea = nxt
    
    return callees

def build_call_graph():
    """Build caller→callee adjacency list for all .text functions."""
    print("[T5] Building call graph...")
    
    call_graph = {}
    processed = 0
    total_edges = 0
    skipped_non_text = 0
    
    all_funcs = list(idautils.Functions())
    total_funcs = len(all_funcs)
    
    for func_ea in all_funcs:
        seg = ida_segment.getseg(func_ea)
        if not seg or ida_segment.get_segm_name(seg) != '.text':
            skipped_non_text += 1
            continue
        
        callees = get_callees_from_function(func_ea)
        
        if callees:
            caller_key = f"0x{func_ea:08X}"
            call_graph[caller_key] = []
            for target_str, call_type in callees:
                call_graph[caller_key].append({"to": target_str, "type": call_type})
                total_edges += 1
        
        processed += 1
        if processed % 5000 == 0:
            print("[T5]   {}/{} callers, {} edges...".format(
                processed, total_funcs - skipped_non_text, total_edges))
    
    print("[T5] Built call graph: {} callers, {} edges ({} non-.text skipped)".format(
        len(call_graph), total_edges, skipped_non_text))
    return call_graph

# ============================================================
# MAIN
# ============================================================

def main():
    start_time = time.time()
    
    os.makedirs(os.path.join(OUTPUT_DIR, "anchors"), exist_ok=True)
    os.makedirs(os.path.join(OUTPUT_DIR, "constraints"), exist_ok=True)
    
    # ---- T2: Vtable Signatures ----
    print("=" * 60)
    print("T2: Extracting vtable signatures from .rdata...")
    print("=" * 60)
    
    vtables = scan_vtables()
    vtable_sigs = match_vtables_to_classes(vtables)
    
    t2_path = os.path.join(OUTPUT_DIR, "anchors", "vtable_signatures.json")
    with open(t2_path, 'w') as f:
        json.dump({
            "description": "Vtable function pointer signatures extracted from .rdata",
            "binary": "gamemd.exe",
            "base_address": "0x400000",
            "total_vtables": len(vtables),
            "total_signatures": len(vtable_sigs),
            "signatures": vtable_sigs
        }, f, indent=2)
    t2_size = os.path.getsize(t2_path)
    print("[T2] Saved {} signatures ({:.1f} KB) → {}".format(
        len(vtable_sigs), t2_size / 1024.0, t2_path))
    
    # ---- T4: Raw Constraints ----
    print("\n" + "=" * 60)
    print("T4: Extracting disassembly constraints...")
    print("=" * 60)
    
    constraints = extract_all_constraints()
    
    t4_path = os.path.join(OUTPUT_DIR, "constraints", "raw_constraints.json")
    with open(t4_path, 'w') as f:
        json.dump({
            "description": "Type constraints extracted from disassembly",
            "binary": "gamemd.exe",
            "total_constraints": len(constraints),
            "constraints": constraints
        }, f, indent=2)
    t4_size = os.path.getsize(t4_path)
    print("[T4] Saved {} constraints ({:.1f} KB) → {}".format(
        len(constraints), t4_size / 1024.0, t4_path))
    
    # ---- T5: Call Graph ----
    print("\n" + "=" * 60)
    print("T5: Building call graph...")
    print("=" * 60)
    
    call_graph = build_call_graph()
    
    t5_path = os.path.join(OUTPUT_DIR, "constraints", "call_graph.json")
    with open(t5_path, 'w') as f:
        json.dump({
            "description": "Caller -> callee graph extracted from instruction analysis",
            "binary": "gamemd.exe",
            "total_callers": len(call_graph),
            "graph": call_graph
        }, f, indent=2)
    t5_size = os.path.getsize(t5_path)
    print("[T5] Saved call graph ({:.1f} KB) → {}".format(
        t5_size / 1024.0, t5_path))
    
    elapsed = time.time() - start_time
    print("\n" + "=" * 60)
    print("EXTRACTION COMPLETE in {:.1f}s".format(elapsed))
    print("  T2 — vtable signatures:  {}".format(len(vtable_sigs)))
    print("  T4 — constraints:        {}".format(len(constraints)))
    print("  T5 — call graph nodes:   {}".format(len(call_graph)))
    print("=" * 60)

if __name__ == '__main__':
    main()
