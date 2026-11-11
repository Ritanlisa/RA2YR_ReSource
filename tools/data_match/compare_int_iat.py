#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""compare_int_iat.py -- compare the ORIGINAL gamemd.exe INT and IAT slot orders.

For an unbound PE the IAT slots hold the same hint/name RVAs (or ordinals) as
the INT, so both arrays can be mapped onto the per-DLL hint/name pool order.
If INT and IAT orders differ, the two qsort input arrays were composed
differently (e.g. different /OPT:REF-dropped extras).

Usage: python tools/data_match/compare_int_iat.py [exe]
"""
import json
import struct
import sys

sys.path.insert(0, "tools/data_match")
from extract_imports import sections, rva2off  # noqa: E402


def main():
    path = sys.argv[1] if len(sys.argv) > 1 else r"D:\RA2MD\gamemd.exe"
    b = open(path, "rb").read()
    secs = sections(b)
    orig = json.load(open(r".omo/agents/datamatch/orig_imports.json", encoding="utf-8"))
    for det in orig["descs"]:
        dll = det["dll"]
        n = len(det["funcs"])
        # pool order: hint/name offset ascending; ordinal entries have no pool slot
        hn = [f for f in det["funcs"] if "hn_off" in f]
        hn_sorted = sorted(hn, key=lambda f: f["hn_off"])
        pool_idx = {}
        for i, f in enumerate(hn_sorted):
            pool_idx[f["hn_rva"]] = i
        # INT values
        int_off = rva2off(secs, det["int_rva"])
        int_vals = [struct.unpack_from("<I", b, int_off + 4 * i)[0] for i in range(n + 1)]
        # IAT values
        iat_off = rva2off(secs, det["ft_rva"])
        iat_vals = [struct.unpack_from("<I", b, iat_off + 4 * i)[0] for i in range(n + 1)]
        int_order = [pool_idx.get(v, "X:%08x" % v) for v in int_vals]
        iat_order = [pool_idx.get(v, "X:%08x" % v) for v in iat_vals]
        same = int_order == iat_order
        print("%-14s n=%-3d INT==IAT: %s" % (dll, n, same))
        if not same:
            diffs = [i for i, (a, c) in enumerate(zip(int_order, iat_order)) if a != c]
            print("   diff_at:", diffs[:30])
            print("   INT[:12]:", int_order[:12])
            print("   IAT[:12]:", iat_order[:12])
            print("   INT[-6:]:", int_order[-6:])
            print("   IAT[-6:]:", iat_order[-6:])


if __name__ == "__main__":
    main()
