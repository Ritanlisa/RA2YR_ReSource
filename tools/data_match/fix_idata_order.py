#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""fix_idata_order.py -- deterministic INT/IAT order fixer (final build-recipe
step for byte-exact .idata alignment with the original gamemd.exe).

Why this exists
---------------
The original gamemd.exe was linked in 2001 with LINK 6.00.8447 running against
a 2001-era MSVCRT.DLL whose qsort is the old middle-pivot CRT implementation
(see idata_final.md).  Today's msvcrt.dll carries the VC7 median-of-3 qsort, so
re-linking reproduces every .idata component exactly (descriptors, DLL name
strings, hint/name pool, hint values, layout order) EXCEPT the INT/IAT slot
order: the linker's qsort permutation differs.

This tool rewrites the INT and IAT slot arrays of a freshly linked binary to
the ORIGINAL's observed order, using the original's INT order as the target
(orig_imports.json).  The two arrays are identical for an unbound PE, so both
are written.  This yields a slot-for-slot identical .idata (371/371), and with
a byte-identical hint/name pool + descriptors the .idata bytes match the
original 1:1 (only absolute RVAs depend on the rest of the binary layout).

Usage:
  python tools/data_match/fix_idata_order.py <target.exe> [--orig <orig_imports.json>] [--check]
    --check : do not write, only report the current slot-order match
"""
import json
import os
import struct
import sys

W1 = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", ".."))
sys.path.insert(0, W1)

from compare_imports import parse, sections, rva2off  # noqa: E402

ORIG = os.path.join(ROOT, ".omo", "agents", "datamatch", "orig_imports.json")


def ident(f):
    if f.get("mode", "NAME") == "ORD" or "ordinal" in f:
        return ("O", int(f["ordinal"]))
    return ("N", f["name"])


def build_slot_values(orig_desc, tgt_desc):
    """Map the original's INT order onto the target's own slot values."""
    tgt_map = {}
    for f in tgt_desc["funcs"]:
        tgt_map[ident(f)] = f
    values = []
    for f in orig_desc["funcs"]:
        key = ident(f)
        if key not in tgt_map:
            raise KeyError("%s: import %s missing in target" % (orig_desc["dll"], key))
        tf = tgt_map[key]
        if key[0] == "O":
            values.append(0x80000000 | (key[1] & 0xFFFF))
        else:
            values.append(tf["hn_rva"])
    return values


def slot_order(desc):
    return [ident(f) for f in desc["funcs"]]


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    if not args:
        print("usage: fix_idata_order.py <target.exe> [--orig file] [--check]")
        return 2
    target = args[0]
    orig_path = ORIG
    if "--orig" in sys.argv:
        orig_path = sys.argv[sys.argv.index("--orig") + 1]
    check = "--check" in sys.argv

    orig = json.load(open(orig_path, encoding="utf-8"))
    tgt = parse(target)
    b = bytearray(tgt["bytes"])
    secs = sections(bytes(b))

    orig_by_dll = {d["dll"]: d for d in orig["descs"]}
    tgt_by_dll = {d["dll"]: d for d in tgt["descs"]}

    hit = tot = 0
    missing = [d for d in orig_by_dll if d not in tgt_by_dll]
    if missing:
        print("ERROR: target lacks DLL(s):", missing)
        return 1

    for dll, od in orig_by_dll.items():
        td = tgt_by_dll[dll]
        obs = slot_order(od)
        cur = slot_order(td)
        ok = sum(1 for a, x in zip(cur, obs) if a == x)
        hit += ok
        tot += len(obs)
        if not check:
            vals = build_slot_values(od, td)
            int_off = rva2off(secs, td["int_rva"])
            iat_off = rva2off(secs, td["ft_rva"])
            if int_off is None or iat_off is None:
                print("ERROR: %s INT/IAT not mapped" % dll)
                return 1
            for i, v in enumerate(vals):
                struct.pack_into("<I", b, int_off + 4 * i, v)
                struct.pack_into("<I", b, iat_off + 4 * i, v)
            # null terminator slot
            struct.pack_into("<I", b, int_off + 4 * len(vals), 0)
            struct.pack_into("<I", b, iat_off + 4 * len(vals), 0)
        print("%-14s slot-order match %d/%d" % (dll, ok, len(obs)))

    print("TOTAL slot-order match: %d/%d" % (hit, tot))
    if check:
        return 0 if hit == tot else 1

    out = target
    open(out, "wb").write(b)
    # verify after writing
    tgt2 = parse(out)
    tgt2_by = {d["dll"]: d for d in tgt2["descs"]}
    hit2 = tot2 = 0
    for dll, od in orig_by_dll.items():
        obs = slot_order(od)
        cur = slot_order(tgt2_by[dll])
        hit2 += sum(1 for a, x in zip(cur, obs) if a == x)
        tot2 += len(obs)
    print("AFTER FIX: %d/%d  (written to %s)" % (hit2, tot2, out))
    return 0 if hit2 == tot2 else 1


if __name__ == "__main__":
    sys.exit(main())
