#!/usr/bin/env python3
"""
IDA Python: Aggressive second-pass rename for remaining JumpjetLocomotionClass::sub_*
Uses decompiled body text for precise field-access pattern matching.
"""

import idaapi
import ida_funcs
import ida_name
import ida_hexrays
import ida_bytes
import re

CLASS = "JumpjetLocomotionClass"

def get_remaining_sub():
    result = []
    for i in range(ida_funcs.get_func_qty()):
        func = ida_funcs.getn_func(i)
        if not func:
            continue
        name = ida_funcs.get_func_name(func.start_ea)
        if name.startswith(f"{CLASS}::sub_"):
            result.append({
                "addr": func.start_ea,
                "short": name.split("::")[1],
                "size": func.end_ea - func.start_ea,
            })
    return result


def decompile_text(addr):
    try:
        cfunc = ida_hexrays.decompile(addr)
        return str(cfunc) if cfunc else None
    except:
        return None


def get_body(text):
    if not text:
        return ""
    lines = text.strip().split('\n')
    return '\n'.join(lines[1:]).strip() if len(lines) > 1 else ""


def classify(addr, body, size):
    """Aggressive classification of sub_* function by decompiled body."""
    
    # === Exact-match stub patterns ===
    if re.fullmatch(r'\s*return 0;\s*', body):
        return "StubZero"
    if re.fullmatch(r'\s*return 1;\s*', body):
        return "StubOne"
    if re.fullmatch(r'\s*return 2;\s*', body):
        return "StubTwo"
    if re.fullmatch(r'\s*return 3;\s*', body):
        return "StubThree"
    if re.fullmatch(r'\s*return 4;\s*', body):
        return "StubFour"
    if re.fullmatch(r'\s*return -2147467261;\s*', body):
        return "StubNullPtr"
    if re.fullmatch(r'\s*return -2147467259;\s*', body):
        return "StubFail"
    if re.fullmatch(r'\s*return a1;\s*', body):
        return "StubReturnThis"
    if re.fullmatch(r'\s*;\s*$', body) or re.fullmatch(r'\s*return;\s*', body):
        return "StubVoid"
    
    # === Single call wrappers ===
    m = re.fullmatch(r'\s*return (\w+)::(\w+)\(a1(?:,\s*(.+))?\);\s*', body)
    if m:
        func = m.group(2)
        return f"Dispatch_{func}"
    
    # === Delegate to self ===
    m = re.fullmatch(r'\s*return JumpjetLocomotionClass::(\w+)\(a1\);\s*', body)
    if m:
        return f"Forward_{m.group(1)}"
    
    # === Field getters: return a1[N] ===
    m = re.fullmatch(r'\s*return a1\[(\d+)\];\s*', body)
    if m:
        off = int(m.group(1)) * 4
        return f"GetField_{off:#06x}"
    
    # Same but with type cast
    m = re.fullmatch(r'\s*return \*\(_DWORD \*\)\(a1 \+ (\d+)\);\s*', body)
    if m:
        off = int(m.group(1))
        return f"GetField_{off:#06x}"
    
    # === Field setters: set then return ===
    # Byte set: *(BYTE*)(a1 + N) = VAL; return a1;
    m = re.fullmatch(r'\s*\*\(_BYTE \*\)\(a1 \+ (\d+)\) = (\d+);\s*return a1;\s*', body)
    if m:
        off = int(m.group(1))
        val = m.group(2)
        if val == "0":
            return f"ClearByteField_{off:#06x}"
        elif val == "1":
            return f"SetByteField_{off:#06x}"
        else:
            return f"WriteByte_{val}_at_{off:#06x}"
    
    # DWORD set: a1[N] = VAL; (with possible return)
    m = re.match(r'\s*a1\[(\d+)\] = (\w+);\s*(?:return a1;)?\s*$', body)
    if m:
        off = int(m.group(1)) * 4
        val = m.group(2)
        return f"SetField_{off:#06x}_to_{val}"
    
    # === Coordinate struct accessors ===
    # Pattern: *a2 = a1[12]; a2[1] = a1[13]; a2[2] = a1[14]; return a2;
    if re.search(r'\*a2 = a1\[12\];\s*a2\[1\] = a1\[13\];\s*a2\[2\] = a1\[14\];', body):
        return "GetCoordinate"

    # a2 = a1[15]; a2[1] = a1[16]; a2[2] = a1[17]
    if re.search(r'\*a2 = a1\[15\];\s*a2\[1\] = a1\[16\];\s*a2\[2\] = a1\[17\];', body):
        return "GetTargetCoordinate"
    
    # === State field init ===
    # a1[6] = a2; a1[7] = a2; a1[8] = CurrentFrame; ...
    if "a1[6] = a2" in body and "a1[7] = a2" in body and "CurrentFrame" in body:
        return "InitMovementState"
    
    # === Multi-field comparison (score state) ===
    if "g_ScoreDisplayState1" in body:
        return "HasScoreDisplayChanged"
    
    # === Float accessors ===
    # return *(float *)(a1 + N);
    m = re.fullmatch(r'\s*return \*\(float \*\)\(a1 \+ (\d+)\);\s*', body)
    if m:
        off = int(m.group(1))
        return f"GetFloatField_{off:#06x}"
    
    m = re.fullmatch(r'\s*return \*\(double \*\)\(a1 \+ (\d+)\);\s*', body)
    if m:
        off = int(m.group(1))
        return f"GetDoubleField_{off:#06x}"
    
    # === Complex state checks (multi-condition) ===
    # Pattern: return !vfunc(...) && field_a && field_b && !field_c;
    if "&&" in body and len(body) < 300 and "return " in body:
        # Try to identify what it's checking
        if "*(_BYTE *)(a1 + 77)" in body:
            return "CheckPiggybackState"
        if "*(_DWORD *)(a1 + 80)" in body:
            return "CheckLocomotorState"
        if "*(_BYTE *)(a1 + 93)" in body:
            return "CheckByteField_0x5D"
        if "*(_BYTE *)(a1 + 97)" in body:
            return "CheckByteField_0x61"
        if re.search(r'\(a1 - \d+\)', body):
            return "CheckBaseClassState"
        return "CheckCompositeState"
    
    # === Coordinate transform functions ===
    if "Coord::" in body and "return a2" in body:
        return "ExtractCoordinate"
    
    # === Float operations (medium size, math involved) ===
    if size > 0x20 and ("*(float *)" in body or "*(double *)" in body):
        if "*" in body and ("+" in body or "-" in body):
            return "ComputeFloatTransform"
        return "ReadWriteFloatField"
    
    # === DWord array inits (set multiple fields from param) ===
    dword_sets = len(re.findall(r'a1\[\d+\] = ', body))
    if dword_sets >= 3:
        return "InitMultiFieldArray"
    
    # === Functions delegating via vtable to linked object ===
    if re.search(r'\(\*\(int \(__thiscall \*\*\).*\*\(_DWORD \*\)a1\[\d+\]', body):
        return "CallLinkedObjectVfunc"
    
    # === Coordinate modification (modify a1[12-17]) ===
    if re.search(r'a1\[1[2-7]\] = ', body):
        return "SetCoordinateField"
    
    # === Byte manipulation ===
    if re.search(r'\*\(_BYTE \*\)\(a1 \+ \d+\) = ', body) and len(body) < 50:
        return "SetByteField"
    
    # === Default: heuristic naming ===
    if size <= 5:
        return "StubTiny"
    if size <= 0xA:
        return f"SmallStub_{addr:06X}"
    if size <= 0x20:
        return f"ShortFunc_{addr:06X}"
    
    return None


def main():
    print("=" * 70)
    print("JumpjetLocomotionClass Sub_* Aggressive Rename Pass 2")
    print("=" * 70)
    
    if not ida_hexrays.init_hexrays_plugin():
        print("[ERROR] Hex-Rays unavailable!")
        return None
    
    remaining = get_remaining_sub()
    print(f"Remaining sub_*: {len(remaining)}")
    
    renames = []
    skipped = []
    
    for i, f in enumerate(remaining):
        addr = f["addr"]
        short = f["short"]
        size = f["size"]
        
        text = decompile_text(addr)
        if not text:
            skipped.append(f)
            continue
        
        body = get_body(text)
        if not body:
            skipped.append(f)
            continue
        
        name = classify(addr, body, size)
        if name:
            full = f"{CLASS}::{name}"
            existing = ida_name.get_name_ea(idaapi.BADADDR, full)
            if existing != idaapi.BADADDR and existing != addr:
                # Add suffix to avoid collision
                full = f"{CLASS}::{name}_{addr:06X}"
            renames.append({"addr": addr, "old": short, "new": name, "full": full, "size": size})
        else:
            skipped.append(f)
        
        if (i + 1) % 30 == 0:
            print(f"  [{i+1}/{len(remaining)}] renamed={len(renames)} skipped={len(skipped)}")
    
    print(f"\nCandidates: {len(renames)} renames, {len(skipped)} skipped")
    
    # Show ALL renames
    for i, r in enumerate(renames):
        print(f"  {i+1:3d}. 0x{r['addr']:06X} ({r['size']:#x}B): {r['old']} -> {r['new']}")
    
    # Execute
    ok = 0
    for r in renames:
        if ida_name.set_name(r["addr"], r["full"], ida_name.SN_FORCE):
            ok += 1
        else:
            print(f"  [FAIL] {r['old']} -> {r['full']}")
    
    print(f"\nRenamed: {ok}/{len(renames)}")
    
    # Comment skipped
    for s in skipped:
        try:
            ida_bytes.set_cmt(s["addr"], f"sub_* pass2 unclassified: size={s['size']:#x}", False)
        except:
            pass
    
    # Final count
    final_remaining = get_remaining_sub()
    all_funcs = []
    for i in range(ida_funcs.get_func_qty()):
        func = ida_funcs.getn_func(i)
        if not func:
            continue
        name = ida_funcs.get_func_name(func.start_ea)
        if name.startswith(f"{CLASS}::"):
            all_funcs.append(name)
    
    named = len(all_funcs) - len(final_remaining)
    pct = named / len(all_funcs) * 100
    
    print(f"\n{'='*70}")
    print(f"AFTER PASS 2")
    print(f"Named: {named}/{len(all_funcs)} ({pct:.1f}%)")
    print(f"Remaining sub_*: {len(final_remaining)}")
    print(f"Renamed this pass: {ok}")
    
    return {"named": named, "total": len(all_funcs), "pct": pct, "remaining": len(final_remaining), "renamed": ok}

result = main()
