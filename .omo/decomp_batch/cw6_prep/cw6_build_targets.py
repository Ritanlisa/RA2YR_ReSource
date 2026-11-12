#!/usr/bin/env python3
"""Build the CW6 stale target batch (947 items) from cw6_prep/plan.json.

Read-only w.r.t. the pipeline; writes:
  .omo/decomp_batch/cw6_stale_targets.json   (batch_run --batch input)
  .omo/decomp_batch/cw6_pre_ledger.json      (pre-run ledger snapshot)
"""
import collections
import json
import os

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
PLAN = os.path.join(ROOT, ".omo", "decomp_batch", "cw6_prep", "plan.json")
OUT = os.path.join(ROOT, ".omo", "decomp_batch", "cw6_stale_targets.json")
PRE = os.path.join(ROOT, ".omo", "decomp_batch", "cw6_pre_ledger.json")
LEDGER = os.path.join(ROOT, ".omo", "codegen_match", "status.json")
RESULTS = os.path.join(ROOT, ".omo", "agents", "decomp_batch", "results.jsonl")


def main():
    plan = json.load(open(PLAN, encoding="utf-8"))
    stale = [x for x in plan if x["_status"] in ("stale_cw3", "stale_cw5")]
    assert len(stale) == 947, len(stale)
    out = []
    for x in sorted(stale, key=lambda r: (r["layer"], r["addr"])):
        out.append({
            "addr": x["addr"],
            "family": "%s|%s" % (x["_status"], x["_fix"]),
            "name": x["emitted"] or x["name"],
            "_layer": x["layer"],
            "_code": x["code"],
            "_gen": x["gen"],
            "_status": x["_status"],
            "_fix": x["_fix"],
            "_form": x.get("_form"),
            "_unit": x.get("unit"),
        })
    json.dump(out, open(OUT, "w", encoding="utf-8"), ensure_ascii=False, indent=1)
    print("wrote", OUT, len(out))
    print("layers", collections.Counter(x["_layer"] for x in out))
    print("codes", collections.Counter(x["_code"] for x in out).most_common(8))

    led = json.load(open(LEDGER, encoding="utf-8"))
    json.dump(led, open(PRE, "w", encoding="utf-8"), ensure_ascii=False, indent=1)
    print("ledger", collections.Counter(v.get("status") for v in led.values()))
    n = sum(1 for _ in open(RESULTS, encoding="utf-8"))
    print("results.jsonl lines", n)


if __name__ == "__main__":
    main()
