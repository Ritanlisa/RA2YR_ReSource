#!/usr/bin/env python3
"""
FULL CSP PIPELINE:
1. ida_extract.py — extract constraints, run CSP, inject types + sigs
2. complete_match — rename Class_N → known names from csp_class_name_map
3. reapply_sigs — re-apply func sigs using renamed types
"""

import json, os, sys, re as _re, inspect, traceback
from collections import defaultdict, Counter, deque

# ═══════════════════════════════════════════════════════════════
# IMPORT IDA MODULES (these only work inside IDA)
# ═══════════════════════════════════════════════════════════════
import ida_typeinf, idaapi, idc, ida_funcs, ida_segment, idautils, ida_name
import ida_bytes, ida_xref, ida_ua, ida_nalt, ida_idp

from tools.type_infer.scope_vars import build_scoped_index, build_adjacency

ROOT = r"D:\RA2YR_ReSource"
if ROOT not in sys.path:
    sys.path.insert(0, ROOT)

TEXT_START, TEXT_END = 0x401000, 0x7E1000
RDATA_START, RDATA_END = 0x7E1608, 0x812000

# ═══════════════════════════════════════════════════════════════
# STEP 1: Run extracted ida_extract pipeline
# ═══════════════════════════════════════════════════════════════
def step1_ida_extract():
    print("="*60)
    print("STEP 1: IDA EXTRACT + CSP SOLVER")
    print("="*60)
    
    # [A] Scan vtables
    print("\n[1A] Scanning vtables...")
    def in_text(val):
        return TEXT_START <= val < TEXT_END and ida_funcs.get_func(val) is not None
    
    vtables = []
    ea = RDATA_START
    while ea < RDATA_END - 4:
        val = ida_bytes.get_dword(ea)
        if in_text(val):
            vt_start, entries = ea, []
            while ea < RDATA_END and in_text(ida_bytes.get_dword(ea)):
                entries.append(ida_bytes.get_dword(ea))
                ea += 4
            if len(entries) >= 3:
                vtables.append({"start": vt_start, "entries": entries})
        else:
            ea += 4
    print(f"  Found {len(vtables)} vtables")
    
    vm_sets = {vt["start"]: set(range(len(vt["entries"]))) for vt in vtables}
    
    # [B] Extract constraints
    print("\n[1B] Extracting constraints...")
    RE_MEMBER = _re.compile(r'\[ecx\+([0-9A-Fa-f]+)h?\]', _re.IGNORECASE)
    RE_VT_CALL = _re.compile(r'\[(\w{2,3})\+([0-9A-Fa-f]+)h?\]', _re.IGNORECASE)
    X86_REGS = frozenset({'eax','ebx','ecx','edx','esi','edi','ebp','esp','al','ah','bl','bh','cl','ch','dl','dh','ax','bx','cx','dx','si','di','bp','sp'})
    
    constraints = []
    
    def scan_call_args(call_ea, fstart, callee_addr_str, is_thiscall, callee_name):
        edges = []
        ea = idc.prev_head(call_ea, fstart)
        params, this_src = [], None
        scanned = 0
        while ea != idaapi.BADADDR and scanned < 8:
            mnem, op0, op1 = idc.print_insn_mnem(ea), idc.print_operand(ea, 0), idc.print_operand(ea, 1)
            if mnem in ('call', 'ret', 'retn') or mnem.startswith('j'):
                break
            if mnem == 'push' and op0.strip().lower() in X86_REGS:
                params.append((op0.strip().lower(), len(params)))
            elif mnem == 'mov' and is_thiscall and op0.strip().lower() == 'ecx':
                v = op1.strip().lower()
                if v in X86_REGS:
                    this_src = v
            ea = idc.prev_head(ea, fstart)
            scanned += 1
        
        if is_thiscall and this_src:
            edges.append({"from": this_src, "to": f"{callee_addr_str}::this", "type": "CALL_ARG", "addr": f"0x{call_ea:X}", "callee_name": callee_name})
        for src, idx in params:
            edges.append({"from": src, "to": f"{callee_addr_str}::param{idx}", "type": "CALL_ARG", "addr": f"0x{call_ea:X}", "callee_name": callee_name})
        edges.append({"from": f"{callee_addr_str}.return", "to": "eax", "type": "RETURN_TO", "addr": f"0x{call_ea:X}", "callee_name": callee_name})
        return edges
    
    for func_ea in idautils.Functions():
        seg = ida_segment.getseg(func_ea)
        if not seg or ida_segment.get_segm_name(seg) != '.text':
            continue
        func_name = ida_funcs.get_func_name(func_ea) or f"sub_{func_ea:X}"
        func_addr_str = f"0x{func_ea:08X}"
        is_this = '::' in func_name
        
        if is_this:
            constraints.append({"from": f"{func_addr_str}::this", "to": "ecx", "type": "FUNC_PARAM", "addr": func_addr_str})
        for i in range(6 if is_this else 8):
            constraints.append({"from": f"{func_addr_str}::param{i}", "to": f"stack_+{4+i*4:#x}", "type": "FUNC_PARAM", "addr": func_addr_str})
        
        ea, func_end = func_ea, ida_funcs.get_func(func_ea).end_ea
        while ea < func_end:
            mnem, op0, op1 = idc.print_insn_mnem(ea), idc.print_operand(ea, 0), idc.print_operand(ea, 1)
            
            if mnem in ('mov', 'movzx', 'movsx') and is_this:
                m = RE_MEMBER.search(op1) or RE_MEMBER.search(op0)
                if m:
                    off = int(m.group(1), 16)
                    target = op0 if RE_MEMBER.search(op1) else f"{func_name}.this.member({off:#x})"
                    src = f"{func_name}.this.member({off:#x})" if RE_MEMBER.search(op1) else op1
                    constraints.append({"from": src, "to": target, "type": "ASSIGN", "addr": f"0x{ea:X}"})
            
            if mnem == 'mov' and op0.strip().lower() in X86_REGS and op1.strip().lower() in X86_REGS:
                constraints.append({"from": op1.strip().lower(), "to": op0.strip().lower(), "type": "ASSIGN", "addr": f"0x{ea:X}"})
            
            if mnem == 'call':
                insn = ida_ua.insn_t()
                if ida_ua.decode_insn(insn, ea) and insn.ops[0].type in (ida_ua.o_near, ida_ua.o_far):
                    tgt = insn.ops[0].addr
                    if ida_funcs.get_func(tgt):
                        tgt_str = f"0x{tgt:08X}"
                        callee_name = ida_funcs.get_func_name(tgt) or f"sub_{tgt:X}"
                        constraints.append({"from": f"0x{ea:08X}_call", "to": tgt_str, "type": "CALL", "addr": f"0x{ea:X}", "callee_name": callee_name})
                        constraints.extend(scan_call_args(ea, func_ea, tgt_str, '::' in callee_name, callee_name))
                elif insn.ops[0].type in (ida_ua.o_displ, ida_ua.o_mem, ida_ua.o_phrase):
                    m = RE_VT_CALL.search(idc.print_operand(ea, 0))
                    if m:
                        slot = int(m.group(2), 16) // 4
                        constraints.append({"from": f"0x{ea:08X}_call", "to": f"vtable_slot_{slot:#x}", "type": "CALL_VTABLE", "addr": f"0x{ea:X}", "vtable_reg": m.group(1).lower(), "vtable_slot": slot})
            
            ea = idc.next_head(ea, func_end)
            if ea == idaapi.BADADDR:
                break
    
    print(f"  Constraints: {len(constraints)}")
    
    # [C] Build call graph
    print("\n[1C] Building call graph...")
    call_graph = {}
    for func_ea in idautils.Functions():
        seg = ida_segment.getseg(func_ea)
        if not seg or ida_segment.get_segm_name(seg) != '.text':
            continue
        callees = []
        ea, func_end = func_ea, ida_funcs.get_func(func_ea).end_ea
        while ea < func_end:
            if ida_idp.is_call_insn(ea):
                insn = ida_ua.insn_t()
                if ida_ua.decode_insn(insn, ea) and insn.ops[0].type in (ida_ua.o_near, ida_ua.o_far):
                    tgt = insn.ops[0].addr
                    if ida_funcs.get_func(tgt):
                        callees.append({"to": f"0x{tgt:08X}", "type": "direct"})
            ea = idc.next_head(ea, func_end)
            if ea == idaapi.BADADDR:
                break
        if callees:
            call_graph[f"0x{func_ea:08X}"] = callees
    print(f"  Call graph: {len(call_graph)} callers")
    
    # [D] CSP Solver
    print("\n[1D] Running CSP solver...")
    ssa = build_scoped_index(constraints, call_graph)
    st = ssa["scoped_to_name"]
    adj = build_adjacency(constraints, ssa)
    
    var_features = defaultdict(dict)
    dfg, op_eax = defaultdict(set), {}
    for ci, c in enumerate(constraints):
        sf, sto = st[ci]
        if c["type"] == "RETURN_TO" and "??2" in c.get("callee_name", ""):
            op_eax[sto] = int(c["addr"], 16)
        dfg[sf].add(sto)
    
    new_ptr = dict(op_eax)
    q = deque(new_ptr)
    while q:
        cur = q.popleft()
        a = new_ptr[cur]
        for nxt in dfg.get(cur, ()):
            if nxt not in new_ptr:
                new_ptr[nxt] = a
                q.append(nxt)
    
    for var, addr in new_ptr.items():
        if addr:
            var_features[var]['has_new'] = True
    
    vm_sets_local = {}  # unused in this version
    for ci, c in enumerate(constraints):
        if c["type"] == "CALL_VTABLE":
            var = st[ci][0]
            slot_raw = c.get("vtable_slot")
            if slot_raw is not None:
                used_slot = int(slot_raw)
                var_features[var].setdefault('slots', set()).add(used_slot)
    
    RE_M = _re.compile(r"\.this\.member\((0x[0-9a-fA-F]+)\)")
    for ci, c in enumerate(constraints):
        for f in ("from", "to"):
            m = RE_M.search(c.get(f, ""))
            if m:
                var_features[st[ci][0]].setdefault('offsets', set()).add(int(m.group(1), 16))
    
    group_map = defaultdict(lambda: {'vars': [], 'slots': set()})
    for var, feats in var_features.items():
        sig = (frozenset(feats.get('vtables', set())), frozenset(feats.get('offsets', set())))
        group_map[sig]['vars'].append(var)
        group_map[sig]['slots'].update(feats.get('slots', set()))
    
    groups = []
    for sig, data in group_map.items():
        vts, offs = sig
        groups.append({'vtables': set(vts), 'slots': data['slots'], 'offsets': set(offs),
                       'max_off': max(offs) if offs else 0, 'vars': data['vars']})
    
    n = len(groups)
    g_data = [(g['vtables'], g['slots'], g['offsets'], g['max_off']) for g in groups]
    conflict = [set() for _ in range(n)]
    for i in range(n):
        vt_i, sl_i, off_i, mo_i = g_data[i]
        for j in range(i + 1, n):
            vt_j, sl_j, off_j, mo_j = g_data[j]
            edge = False
            if vt_i and vt_j and vt_i != vt_j:
                edge = True
            elif off_i != off_j and not (vt_i and vt_j and vt_i == vt_j):
                edge = True
            if edge:
                conflict[i].add(j)
                conflict[j].add(i)
    
    colors = [-1] * n
    sat = [set() for _ in range(n)]
    for idx in range(n):
        c = 0
        while c in sat[idx]:
            c += 1
        colors[idx] = c
        for nb in conflict[idx]:
            if colors[nb] == -1:
                sat[nb].add(c)
    
    final_N = max(colors) + 1 if n > 0 else 0
    print(f"  Minimum N: {final_N}")
    
    final_classes = {}
    for i, c in enumerate(colors):
        cls_name = f"Class_{c}"
        if cls_name not in final_classes:
            final_classes[cls_name] = {'vtables': set(), 'slots': set(), 'offsets': set(), 'vars': []}
        final_classes[cls_name]['vars'].extend(groups[i]['vars'])
        final_classes[cls_name]['vtables'].update(groups[i]['vtables'])
        final_classes[cls_name]['slots'].update(groups[i]['slots'])
        final_classes[cls_name]['offsets'].update(groups[i]['offsets'])
    
    # Propagate
    var_to_class = {}
    for cls_name, info in final_classes.items():
        for v in info['vars']:
            var_to_class[v] = cls_name
    
    full_adj = defaultdict(set)
    for u in adj:
        for v in adj[u]:
            full_adj[u].add(v)
            full_adj[v].add(u)
    for ci, c in enumerate(constraints):
        if c.get('type') in ('CALL_ARG', 'RETURN_TO'):
            u, v = st[ci][0], st[ci][1]
            full_adj[u].add(v)
            full_adj[v].add(u)
    
    q = deque(var_to_class.keys())
    while q:
        curr = q.popleft()
        for nb in full_adj.get(curr, set()):
            if nb not in var_to_class:
                var_to_class[nb] = var_to_class[curr]
                q.append(nb)
    
    # Build func sigs
    func_sigs = defaultdict(lambda: {'params': {}, 'return': 'void', 'owner': 'unknown'})
    for var, cls in var_to_class.items():
        if '::param' in var:
            parts = var.split('::')
            if len(parts) >= 2 and parts[1].replace('param', '').isdigit():
                func_sigs[parts[0]]['params'][parts[1]] = cls
                if parts[1] == 'param0':
                    func_sigs[parts[0]]['owner'] = cls
        elif '::return' in var:
            parts = var.split('::')
            if len(parts) >= 2:
                func_sigs[parts[0]]['return'] = cls
    
    print(f"  Inferred {len(func_sigs)} func sigs")
    
    # [E] Generate header and inject types
    print("\n[1E] Injecting types into IDA...")
    til = idaapi.cvar.idati
    
    for cls_name, info in final_classes.items():
        offsets = sorted(info['offsets'])
        udt = ida_typeinf.udt_type_data_t()
        
        curr = 4 if info['vtables'] else 0
        if info['vtables']:
            m = ida_typeinf.udt_member_t()
            m.name = "vtable"
            m.offset = 0
            m.size = 4
            udt.push_back(m)
        
        for off in offsets:
            if off < curr:
                continue
            if off > curr:
                m = ida_typeinf.udt_member_t()
                m.name = f"pad_{curr:X}"
                m.offset = curr
                m.size = off - curr
                udt.push_back(m)
            m = ida_typeinf.udt_member_t()
            m.name = f"member_{off:X}"
            m.offset = off
            m.size = 4
            udt.push_back(m)
            curr = off + 4
        
        if udt.size() > 0:
            tif = ida_typeinf.tinfo_t()
            if tif.create_udt(udt, ida_typeinf.BTF_STRUCT):
                tif.set_named_type(til, cls_name, ida_typeinf.NTF_REPLACE)
    
    print(f"  Injected {len(final_classes)} classes")
    
    # [F] Apply function signatures
    print("\n[1F] Applying function signatures...")
    
    def get_tinfo(type_cls):
        tif = ida_typeinf.tinfo_t()
        if isinstance(type_cls, str) and type_cls.startswith("Class_"):
            if tif.get_named_type(til, type_cls):
                return tif
        tif.create_simple_type(ida_typeinf.BTF_INT32)
        return tif
    
    typed = 0
    for func_addr_str, sig in func_sigs.items():
        try:
            func_addr = int(func_addr_str, 16)
        except:
            continue
        func = idaapi.get_func(func_addr)
        if not func:
            continue
        
        try:
            ftd = ida_typeinf.func_type_data_t()
            ftd.rettype = get_tinfo("int")
            ftd.cc = ida_typeinf.CM_CC_FASTCALL
            
            max_idx = -1
            for p in sig['params']:
                try:
                    idx = int(p.replace('param', ''))
                    max_idx = max(max_idx, idx)
                except:
                    pass
            
            for i in range(max_idx + 1):
                arg = ida_typeinf.funcarg_t()
                arg.type = get_tinfo(sig['params'].get(f"param{i}", "int"))
                arg.name = "this" if i == 0 and sig.get('owner') != 'unknown' else f"a{i+1}"
                ftd.push_back(arg)
            
            tif = ida_typeinf.tinfo_t()
            tif.create_func(ftd)
            if idaapi.apply_tinfo(func_addr, tif, idaapi.TINFO_DEFINITE):
                typed += 1
        except:
            pass
    
    print(f"  Applied signatures to {typed} functions")
    return final_classes, func_sigs, var_to_class

# ═══════════════════════════════════════════════════════════════
# STEP 2: Rename Class_N → KnownName (no-delete approach)
# ═══════════════════════════════════════════════════════════════
def step2_rename(zt_classes):
    print("="*60)
    print("STEP 2: RENAME CLASS_N → KNOWN NAMES")
    print("="*60)
    
    # Load name map
    ROOT = r"D:\RA2YR_ReSource"
    csp_map = json.load(open(os.path.join(ROOT, "tools/csp/csp_class_name_map.json"), encoding="utf-8"))
    signals = json.load(open(os.path.join(ROOT, "signals.json"), encoding="utf-8"))
    vcm = json.load(open(os.path.join(ROOT, "tools/csp/vtable_class_map.json"), encoding="utf-8"))
    
    vt_to_class = {}
    for vt_addr, info in vcm.items():
        cls = info['class'] if isinstance(info, dict) else info
        vt_to_class[vt_addr] = cls
    
    til = idaapi.cvar.idati
    
    # Build var-name evidence from CSP classes
    var_votes = defaultdict(lambda: defaultdict(float))
    
    for csp_id, info in zt_classes.items():
        for var_name in info.get("vars", []):
            parts = var_name.split("::")
            if len(parts) >= 2:
                cls_candidate = parts[0]
                if cls_candidate.startswith("0x") or cls_candidate == "DListNode":
                    continue
                weight = 3 if "Class" in cls_candidate else 1
                var_votes[csp_id][cls_candidate] += weight
    
    # Vtable evidence
    for csp_id, info in zt_classes.items():
        for vt in info.get("vtables", []):
            vt_str = f"0x{int(vt):X}" if isinstance(vt, int) else vt
            if vt_str in vt_to_class:
                var_votes[csp_id][vt_to_class[vt_str]] += 5
    
    # Function this-pointer evidence
    signals_syms = signals.get("symbols", {})
    func_to_class = {}
    for addr, info in signals_syms.items():
        name = info.get("name", "")
        if "::" in name:
            func_to_class[addr] = name.split("::")[0]
    
    for func_ea in idautils.Functions():
        seg = ida_segment.getseg(func_ea)
        if not seg or ida_segment.get_segm_name(seg) != '.text':
            continue
        func_addr = f"0x{func_ea:08X}"
        func_type = idc.get_type(func_ea)
        if not func_type:
            continue
        refs = _re.findall(r'(Class_\d+)\s*\*', func_type)
        if not refs:
            continue
        known = func_to_class.get(func_addr)
        if not known:
            continue
        var_votes[refs[0]][known] += 2
        for ref in refs[1:]:
            var_votes[ref][known] += 0.5
    
    # Resolve names: unambiguous + inheritance tiebreaker
    rename_map = {}
    for csp_id, votes in sorted(var_votes.items(), key=lambda x: -sum(x[1].values())):
        if not votes:
            continue
        sorted_v = sorted(votes.items(), key=lambda x: -x[1])
        top_name, top_w = sorted_v[0]
        if len(sorted_v) == 1 or top_w >= sorted_v[1][1] * 1.5:
            rename_map[csp_id] = top_name
        else:
            specific = [n for n, w in sorted_v if n not in {'AbstractClass', 'ObjectClass', 'TechnoTypeClass', 'AbstractTypeClass'}]
            rename_map[csp_id] = specific[0] if specific else top_name
    
    print(f"  Classes to rename: {len(rename_map)}")
    
    # Rename: try set_named_type (preserves ordinal) first, fallback to delete+recreate
    renamed = 0
    skipped = 0
    til = idaapi.cvar.idati
    
    for csp_id, new_name in sorted(rename_map.items(), key=lambda x: -sum(var_votes[x[0]].values())):
        ordinal = ida_typeinf.get_type_ordinal(til, csp_id)
        if ordinal <= 0:
            continue
        if ida_typeinf.get_type_ordinal(til, new_name) > 0:
            skipped += 1
            continue
        
        # Try: set the type's name via set_numbered_type with NTF_REPLACE
        # This is the ordinal-preserving approach
        tif = ida_typeinf.tinfo_t()
        if tif.get_numbered_type(til, ordinal):
            # Get the UDT data
            udt = ida_typeinf.udt_type_data_t()
            if tif.get_udt_details(udt):
                # Create new type with new name at same ordinal
                new_tif = ida_typeinf.tinfo_t()
                if new_tif.create_udt(udt, ida_typeinf.BTF_STRUCT):
                    # Apply with new name via set_named_type
                    # This replaces at the same ordinal
                    new_tif.set_named_type(til, new_name, ida_typeinf.NTF_REPLACE)
                    renamed += 1
                    continue
        
        # Fallback: delete+recreate (ordinal WILL change, but it's the only way)
        decl = idc.print_decls(str(ordinal), 0)
        if not decl or "WARNING" in str(decl):
            skipped += 1
            continue
        new_decl = decl.replace(csp_id, new_name)
        ida_typeinf.del_numbered_type(til, ordinal)
        idc.parse_decls(new_decl, 0)
        if ida_typeinf.get_type_ordinal(til, new_name) > 0:
            renamed += 1
        else:
            skipped += 1
    
    print(f"  Renamed: {renamed}, Skipped: {skipped}")
    return rename_map

# ═══════════════════════════════════════════════════════════════
# STEP 3: Re-apply function signatures using renamed types
# ═══════════════════════════════════════════════════════════════
def step3_reapply_sigs():
    print("="*60)
    print("STEP 3: RE-APPLY FUNCTION SIGNATURES")
    print("="*60)
    
    ROOT = r"D:\RA2YR_ReSource"
    zt_sigs = json.load(open(os.path.join(ROOT, "tools/csp/zero_trust_func_sigs.json"), encoding="utf-8"))
    signals = json.load(open(os.path.join(ROOT, "signals.json"), encoding="utf-8"))
    syms = signals.get("symbols", {})
    til = idaapi.cvar.idati
    
    def make_tinfo(type_str):
        """Create tinfo_t for a type name string (may be Class_N or known name)."""
        tif = ida_typeinf.tinfo_t()
        if not type_str or type_str == 'void':
            tif.create_simple_type(ida_typeinf.BTF_VOID)
        elif type_str == 'int' or type_str == 'signed int':
            tif.create_simple_type(ida_typeinf.BTF_INT32)
        elif type_str == 'char' or type_str == 'bool':
            tif.create_simple_type(ida_typeinf.BTF_INT8)
        elif type_str == 'short':
            tif.create_simple_type(ida_typeinf.BTF_INT16)
        elif type_str == 'long long':
            tif.create_simple_type(ida_typeinf.BTF_INT64)
        elif type_str == 'float':
            tif.create_simple_type(ida_typeinf.BTF_FLOAT)
        elif type_str == 'double':
            tif.create_simple_type(ida_typeinf.BTF_DOUBLE)
        elif tif.get_named_type(til, type_str):
            # Type exists in Local Types (might be renamed Class_N!)
            pass
        else:
            tif.create_simple_type(ida_typeinf.BTF_INT32)
        return tif
    
    func_to_class = {}
    for addr, info in syms.items():
        name = info.get("name", "")
        if "::" in name:
            func_to_class[addr] = name.split("::")[0]
    
    updated_csp = 0
    updated_all = 0
    
    # Re-apply CSP sigs from zero_trust_func_sigs (these use Class_N names)
    for func_addr_str, sig in zt_sigs.items():
        try:
            func_addr = int(func_addr_str, 16)
        except:
            continue
        func = idaapi.get_func(func_addr)
        if not func:
            continue
        
        try:
            ftd = ida_typeinf.func_type_data_t()
            ftd.rettype = make_tinfo(sig.get('return', 'int'))
            ftd.cc = ida_typeinf.CM_CC_THISCALL
            
            params = sig.get('params', [])
            for i, ptype in enumerate(params):
                arg = ida_typeinf.funcarg_t()
                arg.type = make_tinfo(ptype)
                arg.name = "this" if i == 0 else f"a{i}"
                ftd.push_back(arg)
            
            tif = ida_typeinf.tinfo_t()
            if tif.create_func(ftd):
                if idaapi.apply_tinfo(func_addr, tif, idaapi.TINFO_DEFINITE):
                    updated_csp += 1
        except:
            pass
    
    # Apply sigs to ALL named methods (ClassName::Method format)
    for func_ea in idautils.Functions():
        seg = ida_segment.getseg(func_ea)
        if not seg or ida_segment.get_segm_name(seg) != '.text':
            continue
        
        func_addr = f"0x{func_ea:08X}"
        if func_addr in zt_sigs:
            continue  # already handled above
        
        fn = idc.get_func_name(func_ea) or ""
        if '::' not in fn:
            continue
        
        cls_name = fn.split('::')[0]
        
        ftd = ida_typeinf.func_type_data_t()
        ftd.rettype = make_tinfo('int')
        ftd.cc = ida_typeinf.CM_CC_THISCALL
        
        # Add this pointer
        cls_tif = ida_typeinf.tinfo_t()
        if cls_tif.get_named_type(til, cls_name):
            ptr_tif = ida_typeinf.tinfo_t()
            ptr_tif.create_ptr(cls_tif)
            arg = ida_typeinf.funcarg_t()
            arg.type = ptr_tif
            arg.name = "this"
            ftd.push_back(arg)
        else:
            arg = ida_typeinf.funcarg_t()
            arg.type = make_tinfo('void')
            arg.name = "this"
            ftd.push_back(arg)
        
        tif = ida_typeinf.tinfo_t()
        if tif.create_func(ftd):
            if idaapi.apply_tinfo(func_ea, tif, idaapi.TINFO_DEFINITE):
                updated_all += 1
    
    print(f"  CSP sigs re-applied: {updated_csp}")
    print(f"  All-method sigs applied: {updated_all}")
    
    # Final verification
    h = 0
    for ea in idautils.Functions():
        seg = ida_segment.getseg(ea)
        if seg and ida_segment.get_segm_name(seg) == '.text':
            tp = idc.get_type(ea)
            if tp and '#' in tp:
                h += 1
    print(f"  Broken refs: {h}")
    
    for ea in [0x401000, 0x5D6540, 0x44E440, 0x4BB0D0]:
        fn = idc.get_func_name(ea)
        tp = idc.get_type(ea)
        print(f"  0x{ea:X} {fn}: {tp}")

# ═══════════════════════════════════════════════════════════════
# MAIN
# ═══════════════════════════════════════════════════════════════
if __name__ == '__main__':
    print("=" * 60)
    print("FULL CSP PIPELINE")
    print("=" * 60)
    
    # Step 1
    final_classes, func_sigs, var_to_class = step1_ida_extract()
    
    # Step 2
    rename_map = step2_rename(final_classes)
    
    # Step 3
    step3_reapply_sigs()
    
    print("\n" + "=" * 60)
    print("PIPELINE COMPLETE")
    print("=" * 60)
