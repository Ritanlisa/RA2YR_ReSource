#!/usr/bin/env python3
"""cw3_baseline.py -- no-account baseline rerun of the CW3 batch.

Runs the SAME 1,180 B/C/D addresses through batch_run.run_part with the
ledger and results.jsonl sinks disabled, so the pre-CW3 code state can be
measured without touching the decision account.  Used to separate CW3's
own conversions from the stale-ledger conversions (census snapshot was
pre-CW2).

Usage:
  python .omo/agents/decomp_batch/cw3_baseline.py --out <dir> --json <file>
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

batch_run.append_results = lambda results: None
batch_run.record_ledger = lambda results: None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", required=True)
    ap.add_argument("--json", required=True)
    ap.add_argument("--chunk", type=int, default=20)
    ap.add_argument("--start", type=int, default=0)
    args = ap.parse_args()

    entries = json.load(open(os.path.join(
        ROOT, ".omo", "agents", "decomp_batch", "batch_cw3_bcd.json"),
        encoding="utf-8"))
    entries = entries[args.start:]
    reg = Registry.get()
    idx = pseudo.load_index()
    acc = {}
    if os.path.exists(args.json):
        acc = json.load(open(args.json, encoding="utf-8"))
    for i in range(0, len(entries), args.chunk):
        part = entries[i:i + args.chunk]
        addrs = [e["addr"] for e in part]
        pout = os.path.join(args.out, "p%02d" % ((args.start + i) //
                                                 args.chunk))
        if os.path.exists(os.path.join(pout, "part_00", "part_report.json")):
            continue
        results, _cv = batch_run.run_part(addrs, {}, pout, reg, idx)
        for a, r in results.items():
            acc[a] = {"verdict": r.get("verdict"),
                      "note": (r.get("note") or "")[:220],
                      "pathology": r.get("pathology")}
        with open(args.json, "w", encoding="utf-8") as f:
            json.dump(acc, f, indent=1, ensure_ascii=False)
        print("[%d/%d] %s" % (i // args.chunk + 1,
                              (len(entries) + args.chunk - 1) // args.chunk,
                              {a: acc[a]["verdict"] for a in addrs}),
              flush=True)
    print("[done] %d verdicts -> %s" % (len(acc), args.json))
    return 0


if __name__ == "__main__":
    sys.exit(main())
