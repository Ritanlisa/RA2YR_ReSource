#!/usr/bin/env python3
"""r8_show.py ADDR [maxinsn] -- compact orig/ours disasm + emitted C++ dump."""
import glob
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "decomp_sys"))
sys.path.insert(0, ROOT)
from tools.codegen_match import diffasm as dmod  # noqa: E402

CENSUS = os.path.join(ROOT, ".omo", "decomp_batch", "r8_ng_census")


def find_part(addr):
    tag = addr[2:].upper()
    for pd in sorted(glob.glob(os.path.join(CENSUS, "p*", "part_*"))):
        if os.path.exists(os.path.join(pd, "orig_%s.json" % tag)):
            return pd
    return None


def main():
    addr = sys.argv[1].lower()
    maxi = int(sys.argv[2]) if len(sys.argv) > 2 else 90
    pd = find_part(addr)
    if not pd:
        raise SystemExit("no artifacts for %s" % addr)
    tag = addr[2:].upper()
    so, _ = dmod.load_orig_side(os.path.join(pd, "orig_%s.json" % tag))
    sb, _ = dmod.load_obj_side(os.path.join(pd, "ours_%s.json" % tag))
    a, b = so.normalize(), sb.normalize()
    print("== %s  orig %d insn  ours %d insn" % (addr, len(a), len(b)))
    n = max(len(a), len(b))
    for k in range(min(n, maxi)):
        oa = a[k]["disasm"] if k < len(a) else ""
        ob = b[k]["disasm"] if k < len(b) else ""
        mark = " " if (k < len(a) and k < len(b)
                       and dmod.Side.masked_equal(a[k], b[k])) else "!"
        print("%s %-46s | %s" % (mark, oa, ob))
    if n > maxi:
        print("  ... (%d more)" % (n - maxi))
    # emitted body
    v = json.load(open(os.path.join(HERE, "r8_ng_census_verdicts.json"),
                       encoding="utf-8"))[addr]
    unit = v.get("unit")
    if unit:
        cpp = os.path.join(pd, unit + ".cpp")
        if os.path.exists(cpp):
            txt = open(cpp, encoding="utf-8").read()
            m = re.search(r"\n[^\n]*\b%s\s*\([^;]*?\)\s*\n?\{" %
                          re.escape(v.get("emitted", "").split("::")[-1]),
                          txt)
            if m:
                start = m.start()
                depth = 0
                i = txt.index("{", start)
                j = i
                while j < len(txt):
                    if txt[j] == "{":
                        depth += 1
                    elif txt[j] == "}":
                        depth -= 1
                        if depth == 0:
                            break
                    j += 1
                print("== emitted %s ==" % v.get("emitted"))
                print(txt[start:j + 1][:6000])


if __name__ == "__main__":
    main()
