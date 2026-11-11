#!/usr/bin/env python3
"""r8_addr_probe.py -- measure address-canonical data-key normalization.

The verdict compares data refs as DATA:<orig name-or-addr> vs
DATA:<obj reloc key>.  When signals.json has no name for an original
address, the orig key is a bare address while the obj key is the IDA
plate spelling (`dword_8205D0` == address 0x8205D0) -- same location,
different spelling.  This probe re-normalizes BOTH sides' DATA keys to
the numeric address (via IDA-plate parse or signals name->addr) and
re-runs the compare over the census artifacts.  Pure measurement: does
not modify the tools.
"""
import collections
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

CENSUS = os.path.join(ROOT, ".omo", "decomp_batch", "r8_ng_census2")

PLATE = re.compile(r"^(?:stru|dword|word|byte|qword|flt|dbl|unk|off)_([0-9A-Fa-f]{6,8})$")
DATA_KEY = re.compile(r"DATA:([^\s\]]+)")


def _name_map():
    sig = json.load(open(os.path.join(ROOT, "signals.json"),
                         encoding="utf-8"))
    m = {}
    for name, a in (sig.get("globals") or {}).items():
        try:
            m[name] = int(a, 16)
        except (TypeError, ValueError):
            pass
    # simulate r8_add_str_globals: IDA string labels become named globals
    lit = json.load(open(os.path.join(ROOT, "anchors",
                                      "string_literals.json"),
                         encoding="utf-8"))
    for name, e in lit.items():
        if name in m:
            continue
        try:
            m[name] = int(e.get("addr", ""), 16)
        except (TypeError, ValueError):
            continue
    return m


NAME2ADDR = _name_map()


def canon_key(k):
    m = PLATE.match(k)
    if m:
        return "0x%X" % int(m.group(1), 16)
    if k in NAME2ADDR:
        return "0x%X" % NAME2ADDR[k]
    und = dmod.undecorate(k)
    if und in NAME2ADDR:
        return "0x%X" % NAME2ADDR[und]
    return k


def canon_canon(s):
    return DATA_KEY.sub(lambda m: "DATA:" + canon_key(m.group(1)), s)


def main():
    verdicts = json.load(open(os.path.join(CENSUS, "verdicts.json"),
                              encoding="utf-8"))
    idx = {}
    for pd in glob.glob(os.path.join(CENSUS, "p*", "part_*")):
        for oa in glob.glob(os.path.join(pd, "orig_*.json")):
            idx[os.path.basename(oa)[5:-5].lower()] = pd
    conv = collections.Counter()
    flips = []
    changed_keys = collections.Counter()
    for addr, v in verdicts.items():
        if v.get("verdict") != "MISMATCH":
            continue
        pd = idx.get(addr[2:])
        if not pd:
            continue
        tag = addr[2:].upper()
        so, _ = dmod.load_orig_side(os.path.join(pd, "orig_%s.json" % tag))
        sb, _ = dmod.load_obj_side(os.path.join(pd, "ours_%s.json" % tag))
        a, b = so.normalize(), sb.normalize()
        ok = len(a) == len(b)
        firstdiff = None
        if ok:
            for i in range(len(a)):
                aa = dict(a[i])
                bb = dict(b[i])
                aa["canon"] = canon_canon(aa["canon"])
                bb["canon"] = canon_canon(bb["canon"])
                if not dmod.Side.masked_equal(aa, bb):
                    ok = False
                    firstdiff = (aa["canon"], bb["canon"])
                    break
        if ok:
            conv["MATCH_after_addr"] += 1
            flips.append((addr, v.get("name"), v.get("pathology")))
        else:
            conv["still_mismatch"] += 1
            if firstdiff:
                ka = DATA_KEY.findall(firstdiff[0])
                kb = DATA_KEY.findall(firstdiff[1])
                for x, y in zip(ka, kb):
                    if x != y:
                        changed_keys[(x, y)] += 1
    print(dict(conv))
    print("flips:")
    for f in flips:
        print("  ", f)
    print("top DATA key diffs (unresolved):")
    for k, n in changed_keys.most_common(15):
        print("  %3d  %s  vs  %s" % (n, k[0], k[1]))


if __name__ == "__main__":
    main()
