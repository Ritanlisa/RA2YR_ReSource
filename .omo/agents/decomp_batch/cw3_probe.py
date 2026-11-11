#!/usr/bin/env python3
"""cw3_probe.py -- no-ledger compile probe for CW3 tier verification.

Runs the exact batch_run.run_part emission/compile path but disables the
ledger (status.json) and results.jsonl appends so tier experiments never
pollute the decision account.  Output is a per-address verdict + first
error note (same shape batch_run produces).

Usage:
  python .omo/agents/decomp_batch/cw3_probe.py --batch <json> --out <dir>
"""
import argparse
import json
import os
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                    "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "decomp_sys"))
sys.path.insert(0, ROOT)
sys.path.insert(0, os.path.join(ROOT, "tools", "codegen_match"))

import batch_run                                   # noqa: E402
import pseudo                                      # noqa: E402
from registry_ext import Registry                  # noqa: E402

# hard-disable both accounting sinks
batch_run.append_results = lambda results: None
batch_run.record_ledger = lambda results: None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--batch", required=True)
    ap.add_argument("--out", required=True)
    ap.add_argument("--limit", type=int, default=0)
    args = ap.parse_args()

    entries = json.load(open(args.batch, encoding="utf-8"))
    entries = [e if isinstance(e, dict) else {"addr": e, "family": "cw3"}
               for e in entries]
    if args.limit:
        entries = entries[:args.limit]
    addrs = [e["addr"].lower() for e in entries]
    src = {a.lower(): e.get("family") or "cw3" for a, e in zip(addrs, entries)}
    out = os.path.abspath(args.out)
    os.makedirs(out, exist_ok=True)

    reg = Registry.get()
    idx = pseudo.load_index()
    results, cv = batch_run.run_part(addrs, src, out, reg, idx)
    slim = {}
    for a, r in results.items():
        slim[a] = {
            "verdict": r.get("verdict"),
            "note": (r.get("note") or "")[:300],
            "pathology": r.get("pathology"),
            "emitted": r.get("emitted"),
            "cls_src": r.get("cls_src"),
        }
    printable = {"summary": batch_run.summarize(results),
                 "rule_violation_fns": cv, "results": slim}
    with open(os.path.join(out, "probe_report.json"), "w",
              encoding="utf-8") as f:
        json.dump(printable, f, indent=1, ensure_ascii=False)
    print(json.dumps(printable["summary"], indent=1))
    print("rule_violation_fns=%d" % cv)
    for a in addrs:
        r = slim.get(a.lower()) or slim.get(a)
        if r is None:
            continue
        print("%-10s %-16s %s | %s" % (a, r["verdict"], r["emitted"] or "",
                                       (r.get("note") or "").replace("\n", " ")[:160]))
    print("probe -> %s" % os.path.join(out, "probe_report.json"))
    return 0


if __name__ == "__main__":
    sys.exit(main())
