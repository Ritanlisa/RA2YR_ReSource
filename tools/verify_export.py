#!/usr/bin/env python3
"""Verify IDA function DB export."""

import json
import os
import sys

TOOLS_DIR = os.path.dirname(os.path.abspath(__file__))

def verify_function_db():
    path = os.path.join(TOOLS_DIR, "ida_function_db.json")
    with open(path, "r", encoding="utf-8") as f:
        db = json.load(f)
    
    print(f"=== Function DB ===")
    print(f"Total entries: {len(db)}")
    addrs = sorted(db.keys())
    print(f"Addr range: {addrs[0]} - {addrs[-1]}")
    
    # Check for key fields
    sample = db[addrs[0]]
    required_fields = ["name", "signature", "param_count", "param_types", 
                       "return_type", "callees", "callers", "segment", 
                       "size", "is_thiscall"]
    for field in required_fields:
        present = field in sample
        print(f"  Field '{field}': {'OK' if present else 'MISSING!'}")
    
    # Show rich entries
    for addr in ["0x7BC2B0", "0x401000", "0x401080", "0x7BAEB0", "0x4BBCA0"]:
        if addr in db:
            e = db[addr]
            print(f"\n--- {addr} ({e['name']}) ---")
            print(f"  signature: {e['signature'][:150]}")
            print(f"  params ({e['param_count']}): {e['param_types'][:4]}")
            print(f"  return: {e['return_type']}")
            print(f"  size: {e['size']} bytes")
            print(f"  segment: {e['segment']}")
            print(f"  thiscall: {e['is_thiscall']}")
            print(f"  callees ({len(e['callees'])}): {[c['name'] for c in e['callees'][:8]]}")
            print(f"  callers ({len(e['callers'])}): {[c['name'] for c in e['callers'][:8]]}")
    
    # Counts
    stats = {
        "total": len(db),
        "thiscall": sum(1 for v in db.values() if v["is_thiscall"]),
        "no_type": sum(1 for v in db.values() if v["signature"] == "unknown"),
        "has_callees": sum(1 for v in db.values() if v["callees"]),
        "has_callers": sum(1 for v in db.values() if v["callers"]),
        "member_funcs": sum(1 for v in db.values() if "::" in v["name"]),
        "global_funcs": sum(1 for v in db.values() if "::" not in v["name"]),
    }
    print(f"\n=== Summary ===")
    for k, v in stats.items():
        print(f"  {k}: {v}")
    
    # Verify >= 13000 threshold
    if len(db) >= 13000:
        print(f"\nSUCCESS: {len(db)} >= 13,000 named functions exported")
    else:
        print(f"\nFAILED: only {len(db)} < 13,000")
        return False
    
    return True


def verify_name_index():
    path = os.path.join(TOOLS_DIR, "ida_name_index.json")
    with open(path, "r", encoding="utf-8") as f:
        ni = json.load(f)
    
    print(f"\n=== Name Index ===")
    print(f"Entries: {len(ni)}")
    
    test_names = ["Math::RoundToInt", "ClipLine", "DSurface::Blit", 
                  "XSurface::SetPixel", "BuildingLightClass::Draw_Start"]
    for name in test_names:
        addr = ni.get(name, "NOT FOUND")
        print(f"  {name} -> {addr}")
    
    # Check lookup speed
    import time
    t0 = time.time()
    for _ in range(1000):
        _ = ni.get("Math::RoundToInt")
    elapsed = (time.time() - t0) * 1000
    print(f"  1000 lookups: {elapsed:.1f}ms")
    
    return True


def verify_callee_index():
    path = os.path.join(TOOLS_DIR, "ida_callee_index.json")
    with open(path, "r", encoding="utf-8") as f:
        ci = json.load(f)
    
    print(f"\n=== Callee Index ===")
    print(f"Unique callees: {len(ci)}")
    
    total_refs = sum(len(v) for v in ci.values())
    print(f"Total references: {total_refs}")
    
    # Show some entries
    for name in ["Math::RoundToInt", "DSurface::GetPixel", "XSurface::Lock",
                 "WWDebugString", "INIClass::GetString"]:
        callers = ci.get(name, [])
        print(f"  {name}: {len(callers)} callers")
        if callers:
            print(f"    Samples: {callers[:5]} ...")
    
    return True


def verify_consistency():
    """Cross-validate that name_index and function_db are consistent."""
    print(f"\n=== Cross-Validation ===")
    
    with open(os.path.join(TOOLS_DIR, "ida_name_index.json"), "r") as f:
        ni = json.load(f)
    with open(os.path.join(TOOLS_DIR, "ida_function_db.json"), "r") as f:
        db = json.load(f)
    
    # Check random subset: name_index[name] exists in function_db
    mismatches = []
    checked = 0
    for name, addr in list(ni.items())[:5000]:
        checked += 1
        if addr not in db:
            mismatches.append((name, addr))
        elif db[addr]["name"] != name:
            mismatches.append((name, addr, db[addr]["name"]))
    
    if mismatches:
        print(f"  MISMATCHES: {len(mismatches)}/{checked}")
        for m in mismatches[:5]:
            print(f"    {m}")
    else:
        print(f"  All {checked} entries consistent between name_index and function_db")
    
    return len(mismatches) == 0


if __name__ == "__main__":
    ok1 = verify_function_db()
    ok2 = verify_name_index()
    ok3 = verify_callee_index()
    ok4 = verify_consistency()
    
    if all([ok1, ok2, ok3, ok4]):
        print(f"\n{'='*60}")
        print(f"ALL VERIFICATIONS PASSED")
        print(f"{'='*60}")
        sys.exit(0)
    else:
        print(f"\n{'='*60}")
        print(f"SOME VERIFICATIONS FAILED")
        print(f"{'='*60}")
        sys.exit(1)
