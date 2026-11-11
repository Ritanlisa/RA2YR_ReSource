#!/usr/bin/env python3
"""r8_mechcensus.py -- mechanism census over the NG census (conversion side).

For each MISMATCH address: run decompile.run_function and record
  * sig (cls/method/cc/ret/params)
  * used_globals entries with type char[] (IDA string labels)
  * view entries: arrays with non-char elem, scalars with ptr/窄 types
  * note kinds
Aggregates the counts so fixes can be prioritized by coverage.
"""
import collections
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "decomp_sys"))
sys.path.insert(0, ROOT)
sys.path.insert(0, os.path.join(ROOT, "tools", "codegen_match"))

import decompile  # noqa: E402
import pseudo  # noqa: E402
from registry_ext import Registry  # noqa: E402
from passes import ClassView  # noqa: E402


def main():
    verdicts = json.load(open(os.path.join(HERE, "r8_ng_census_verdicts.json"),
                              encoding="utf-8"))
    reg = Registry.get()
    idx = pseudo.load_index()
    rows = {}
    for addr, v in sorted(verdicts.items()):
        if v["verdict"] != "MISMATCH":
            continue
        rec = {"pathology": v.get("pathology"), "name": v.get("name"),
               "orig_size": v.get("orig_size"),
               "ours_size": v.get("ours_size")}
        try:
            views = ClassView()
            ctx, unit = decompile.run_function(addr, reg, views, idx)
        except BaseException as e:  # noqa: BLE001
            rec["error"] = "%s: %s" % (type(e).__name__, e)
            rows[addr] = rec
            continue
        rec["cc"] = ctx.sig.get("cc")
        rec["free"] = bool(ctx.sig.get("free"))
        rec["cls"] = ctx.sig.get("cls")
        rec["cls_src"] = ctx.sig.get("cls_src")
        rec["ret"] = ctx.sig.get("ret")
        rec["params"] = ctx.sig.get("params")
        rec["notes"] = [n["kind"] for n in ctx.notes]
        rec["notes_text"] = ["%s: %s" % (n["kind"], n["text"][:120])
                             for n in ctx.notes]
        cls = ctx.sig.get("cls")
        rec["string_labels"] = [n for n, t in (ctx.used_globals or {}).items()
                                if t == "char[]"]
        sc = views.scalars.get(cls, {})
        ar = views.arrays.get(cls, {})
        rec["arrays"] = {("0x%X" % o): {"name": a.get("name"),
                                        "elem": a.get("elem"),
                                        "count": a.get("count")}
                         for o, a in ar.items()}
        rec["scalars"] = {}
        for o, roles in sc.items():
            rec["scalars"]["0x%X" % o] = {
                k: [x.get("name"), x.get("type"), x.get("width"),
                    x.get("src")]
                for k, x in roles.items()}
        rows[addr] = rec
    with open(os.path.join(HERE, "r8_mechcensus.json"), "w",
              encoding="utf-8") as f:
        json.dump(rows, f, indent=1, ensure_ascii=False)

    c = collections.Counter()
    for r in rows.values():
        if r.get("error"):
            c["ERROR"] += 1
            continue
        if r["string_labels"]:
            c["string_label"] += 1
        for kind in r["notes"]:
            c["note:" + kind] += 1
        for o, a in (r.get("arrays") or {}).items():
            c["arr_elem:" + str(a.get("elem"))] += 1
        for o, roles in (r.get("scalars") or {}).items():
            for k, x in roles.items():
                c["scalar_src:" + str(x[3])] += 1
                c["scalar_w:" + str(x[2])] += 1
    print("rows", len(rows))
    for k, n in c.most_common(60):
        print("%5d  %s" % (n, k))


if __name__ == "__main__":
    main()
