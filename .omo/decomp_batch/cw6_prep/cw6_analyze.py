#!/usr/bin/env python3
"""CW6 harvest analysis: stale CF re-run conversion accounting (read-only).

Reads:
  .omo/decomp_batch/cw6_run/p*/part_00/part_report.json   (per-item verdicts)
  .omo/decomp_batch/cw6_stale_targets.json                (stale 947 batch)
  .omo/decomp_batch/cw6_pre_ledger.json / status.json     (ledger delta)
Writes .omo/decomp_batch/cw6_prep/cw6_result.json
"""
import collections
import json
import os
import re

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
RUN = os.path.join(ROOT, ".omo", "decomp_batch", "cw6_run")
TARGETS = os.path.join(ROOT, ".omo", "decomp_batch", "cw6_stale_targets.json")
PRE = os.path.join(ROOT, ".omo", "decomp_batch", "cw6_pre_ledger.json")
LEDGER = os.path.join(ROOT, ".omo", "codegen_match", "status.json")
OUT = os.path.join(ROOT, ".omo", "decomp_batch", "cw6_prep", "cw6_result.json")

ERR_RE = re.compile(r"error (C\d{4})")


RUN_DIRS = [RUN] + [os.path.join(os.path.dirname(RUN), n)
                    for n in ("cw6_dup0", "cw6_dup1", "cw6_dup2")]


def load_items():
    items = {}
    parts = []
    for run in RUN_DIRS:
        if not os.path.isdir(run):
            continue
        for name in sorted(os.listdir(run)):
            if not re.fullmatch(r"p\d+", name):
                continue
            rep = os.path.join(run, name, "part_00", "part_report.json")
            if not os.path.exists(rep):
                print("MISSING part report:", run, name)
                continue
            d = json.load(open(rep, encoding="utf-8"))
            parts.append((run + "/" + name, d.get("summary", {})))
            for r in d.get("results", []):
                # dup-resolve reruns supersede the DUP_SKIP records
                prev = items.get(r["addr"].lower())
                if (prev and prev.get("verdict") == "DUP_SKIP"
                        and r.get("verdict") != "DUP_SKIP"):
                    items[r["addr"].lower()] = r
                elif r["addr"].lower() not in items:
                    items[r["addr"].lower()] = r
    return items, parts


def main():
    targets = json.load(open(TARGETS, encoding="utf-8"))
    by_addr = {t["addr"].lower(): t for t in targets}
    items, parts = load_items()

    missing = [a for a in by_addr if a not in items]
    extra = [a for a in items if a not in by_addr]

    # per-item outcome
    vcount = collections.Counter()
    per_family = collections.defaultdict(collections.Counter)
    per_code = collections.defaultdict(collections.Counter)
    per_gen = collections.defaultdict(collections.Counter)
    still_cf = []
    dup = []
    matchers = []
    for a, t in by_addr.items():
        r = items.get(a)
        v = (r or {}).get("verdict") or "NO_RECORD"
        vcount[v] += 1
        per_family[t["family"]][v] += 1
        per_code[t["_code"]][v] += 1
        per_gen[t["_gen"]][v] += 1
        if v == "COMPILE_FAIL":
            m = ERR_RE.search(r.get("note") or "")
            still_cf.append({
                "addr": a, "code_new": m.group(1) if m else None,
                "code_old": t["_code"], "family": t["family"],
                "layer": t["_layer"], "unit": t.get("_unit"),
                "name": r.get("emitted") or r.get("name"),
                "msg": (r.get("note") or "")[:300],
            })
        elif v == "DUP_SKIP":
            dup.append({"addr": a, "code_old": t["_code"],
                        "family": t["family"], "note": r.get("note")})
        elif v == "MATCH":
            matchers.append({"addr": a, "name": r.get("emitted"),
                             "family": t["family"], "code_old": t["_code"],
                             "clean": r.get("clean"),
                             "rule_violations": r.get("rule_violations"),
                             "this_as_id": r.get("this_as_id")})

    pre = json.load(open(PRE, encoding="utf-8"))
    post = json.load(open(LEDGER, encoding="utf-8"))
    pre_c = collections.Counter(v.get("status") for v in pre.values())
    post_c = collections.Counter(v.get("status") for v in post.values())

    # ledger movement restricted to the 947 targets
    tgt_move = collections.Counter()
    for a in by_addr:
        s0 = (pre.get(a) or {}).get("status")
        s1 = (post.get(a) or {}).get("status")
        tgt_move[(s0, s1)] += 1
    # outside the target set: must not move (zero collateral)
    outside = []
    for a, v in pre.items():
        if a in by_addr:
            continue
        s1 = (post.get(a) or {}).get("status")
        if s1 != v.get("status"):
            outside.append({"addr": a, "before": v.get("status"), "after": s1})

    still_cf_codes = collections.Counter(x["code_new"] for x in still_cf)
    res = {
        "targets": len(by_addr),
        "records": len(items),
        "missing_records": missing,
        "extra_records": extra,
        "verdicts": dict(vcount),
        "compiled": vcount["MATCH"] + vcount["MISMATCH"],
        "compile_rate_pct": round(100.0 * (vcount["MATCH"] + vcount["MISMATCH"]) / len(by_addr), 1),
        "match_rate_pct": round(100.0 * vcount["MATCH"] / len(by_addr), 1),
        "per_family": {k: dict(v) for k, v in sorted(per_family.items())},
        "per_old_code": {k: dict(v) for k, v in sorted(per_code.items())},
        "per_gen": {k: dict(v) for k, v in sorted(per_gen.items())},
        "ledger_before": dict(pre_c),
        "ledger_after": dict(post_c),
        "ledger_move_targets": {"%s->%s" % k: v for k, v in sorted(tgt_move.items(), key=lambda kv: str(kv[0]))},
        "ledger_move_outside": outside,
        "still_cf": still_cf,
        "still_cf_codes": dict(still_cf_codes.most_common()),
        "dup_skip": dup,
        "matches": matchers,
        "parts": len(parts),
        "part_seconds": round(sum(p[1].get("total", 0) and 0 for p in parts), 1),
    }
    json.dump(res, open(OUT, "w", encoding="utf-8"), ensure_ascii=False, indent=1)

    print("targets", len(by_addr), "records", len(items))
    print("verdicts", dict(vcount))
    print("compiled %d (%.1f%%)  MATCH %d (%.1f%%)"
          % (res["compiled"], res["compile_rate_pct"],
             vcount["MATCH"], res["match_rate_pct"]))
    print("ledger before", dict(pre_c))
    print("ledger after ", dict(post_c))
    print("outside-target moves", len(outside))
    for x in outside[:10]:
        print("  OUTSIDE MOVE", x)
    print("still CF new codes", dict(still_cf_codes.most_common()))
    print("DUP_SKIP", len(dup), dup)
    print("-> %s" % OUT)


if __name__ == "__main__":
    main()
