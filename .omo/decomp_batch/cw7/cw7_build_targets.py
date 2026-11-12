#!/usr/bin/env python3
"""cw7_build_targets.py -- CW7 live-wall target builder (read-only on ledger).

Builds:
  cw7_cf_census.json   current CF census (latest results.jsonl record per addr)
  cw7_w1_c2440.json   C2440 current CF minus bad-snapshot evidence
  cw7_w2_c2109.json   C2109 current CF minus evidence
  cw7_w3_c2296.json   C2296 + C2106 current CF minus evidence
  cw7_samples.json    stratified 5-per-family probe sample
"""
import json
import os
import re
from collections import Counter

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
STATE = os.path.join(ROOT, ".omo", "agents", "decomp_batch")
PREP = os.path.join(ROOT, ".omo", "decomp_batch", "cw6_prep")
OUT = os.path.join(ROOT, ".omo", "decomp_batch", "cw7")
os.makedirs(OUT, exist_ok=True)

ledger = json.load(open(os.path.join(ROOT, ".omo", "codegen_match",
                                     "status.json"), encoding="utf-8"))
last = {}
for line in open(os.path.join(STATE, "results.jsonl"), encoding="utf-8"):
    line = line.strip()
    if not line:
        continue
    try:
        r = json.loads(line)
    except ValueError:
        continue
    a = (r.get("addr") or "").lower()
    if a:
        last[a] = r

bad = json.load(open(os.path.join(PREP, "bad_snapshot.json"),
                     encoding="utf-8"))
evidence = {e["addr"].lower() for e in bad["cf"]}


def first_code(rec):
    note = rec.get("note") or ""
    msg = rec.get("msg") or ""
    m = re.search(r"(C\d{4})", note + " " + msg)
    return m.group(1) if m else "NONE"


cf = {}
for a, v in ledger.items():
    if v.get("status") != "COMPILE_FAIL":
        continue
    r = last.get(a, {})
    cf[a] = {
        "addr": a,
        "name": v.get("name") or r.get("name") or a,
        "orig_name": v.get("orig_name") or r.get("name"),
        "unit": r.get("unit") or "",
        "layer": r.get("layer") or r.get("_layer") or "",
        "code": first_code(r),
        "gen": r.get("gen") or r.get("_gen") or "",
        "evidence": a in evidence,
        "msg": (r.get("msg") or r.get("note") or "")[:200],
        "file": r.get("file") or "",
        "line": r.get("line"),
    }

# attach workorder metadata (form/gen/layer) where available
wo = json.load(open(os.path.join(STATE, "cw6_live_workorder.json"),
                    encoding="utf-8"))
meta = {}
for bucket in ("live_rows", "refail_rows", "g5_live_rows", "c2440_live_rows"):
    for r in wo.get(bucket, []):
        a = r["addr"].lower()
        m = meta.setdefault(a, {})
        for k in ("form", "gen", "layer", "code", "name", "unit"):
            if r.get(k) and not m.get(k):
                m[k] = r[k]
        m.setdefault("buckets", []).append(bucket)
for a, m in meta.items():
    if a in cf:
        cf[a].setdefault("form", m.get("form", ""))
        if not cf[a]["gen"]:
            cf[a]["gen"] = m.get("gen", "")
        if not cf[a]["unit"]:
            cf[a]["unit"] = m.get("unit", "")
        if not cf[a]["layer"]:
            cf[a]["layer"] = m.get("layer", "")
        cf[a]["buckets"] = m["buckets"]
    else:
        cf.setdefault("_meta_only", {})[a] = m

json.dump(cf, open(os.path.join(OUT, "cw7_cf_census.json"), "w",
                   encoding="utf-8"), ensure_ascii=False, indent=1)


def dump(name, rows):
    json.dump(rows, open(os.path.join(OUT, name), "w", encoding="utf-8"),
              ensure_ascii=False, indent=1)
    print(name, len(rows))


def rows_for(codes):
    out = []
    for a, r in cf.items():
        if a.startswith("_"):
            continue
        if r["code"] in codes and not r["evidence"]:
            out.append(r)
    out.sort(key=lambda r: r["addr"])
    return out


w1 = rows_for({"C2440"})
w2 = rows_for({"C2109"})
w3 = rows_for({"C2296", "C2106"})
dump("cw7_w1_c2440.json", w1)
dump("cw7_w2_c2109.json", w2)
dump("cw7_w3_c2296.json", w3)

print("CF census:", len([a for a in cf if not a.startswith("_")]),
      "evidence:", sum(1 for a, r in cf.items()
                       if not a.startswith("_") and r["evidence"]))
print("codes:", Counter(r["code"] for a, r in cf.items()
                        if not a.startswith("_")).most_common(15))
print("W1 forms:", Counter(r.get("form") for r in w1).most_common())
print("W2 forms:", Counter(r.get("form") for r in w2).most_common())
print("W3 forms:", Counter(r.get("form") for r in w3).most_common())

# stratified sample: 5 per family, spread over (code, form) buckets
samples = {}
for fam, rows in (("W1", w1), ("W2", w2), ("W3", w3)):
    seen = {}
    picked = []
    for r in rows:
        key = (r["code"], r.get("form") or "")
        if key in seen:
            continue
        seen[key] = 1
        picked.append(r)
        if len(picked) == 5:
            break
    if len(picked) < 5:
        for r in rows:
            if r not in picked:
                picked.append(r)
            if len(picked) == 5:
                break
    samples[fam] = [{"addr": r["addr"], "code": r["code"],
                     "form": r.get("form"), "name": r["name"],
                     "msg": r["msg"]} for r in picked]
    print(fam, "sample:", [(r["addr"], r["code"], r.get("form")) for r in picked])
json.dump(samples, open(os.path.join(OUT, "cw7_samples.json"), "w",
                        encoding="utf-8"), ensure_ascii=False, indent=1)
