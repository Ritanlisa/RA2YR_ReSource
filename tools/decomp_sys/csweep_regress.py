#!/usr/bin/env python3
"""csweep_regress.py -- zero-regression checkpoint sampler for the C-layer sweep.

Samples N addresses from the PRE-SWEEP ledger OK set (recorded once in
.omo/decomp_batch/csweep/baseline.json) and reruns them through the full
batch_run.run_part chain (same generator / era compiler / diffasm as the
sweep itself).  Ledger and results.jsonl are NOT written (run_part has no
side effects; only the probe out dir is produced).

Exit 0 iff every sampled historical MATCH function still byte-matches.

Usage:
  python tools/decomp_sys/csweep_regress.py --sample 30 --tag k2000
"""
import argparse
import json
import os
import random
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)
sys.path.insert(0, ROOT)

import batch_run                                       # noqa: E402
import pseudo                                          # noqa: E402
from registry_ext import Registry                      # noqa: E402

BASE = os.path.join(ROOT, ".omo", "decomp_batch", "csweep", "baseline.json")
OUT = os.path.join(ROOT, ".omo", "decomp_batch", "csweep", "regress")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--sample", type=int, default=30)
    ap.add_argument("--seed", type=int, default=20261112)
    ap.add_argument("--tag", default="checkpoint")
    args = ap.parse_args()

    base = json.load(open(BASE, encoding="utf-8"))
    ok = list(base["ok_addrs"])
    ok.sort()
    rng = random.Random(args.seed)
    sample = rng.sample(ok, min(args.sample, len(ok)))
    sample.sort()
    print("[regress] pre-sweep OK pool = %d, sample = %d (seed %d)"
          % (len(ok), len(sample), args.seed), flush=True)

    out = os.path.join(OUT, args.tag)
    os.makedirs(out, exist_ok=True)
    reg = Registry.get()
    idx = pseudo.load_index()
    t0 = time.time()
    results, _cv = batch_run.run_part(sample, {}, out, reg, idx)
    dt = time.time() - t0
    verdicts = {a: results[a]["verdict"] for a in sample}
    vc = {}
    for v in verdicts.values():
        vc[v] = vc.get(v, 0) + 1
    not_match = {a: v for a, v in verdicts.items() if v != "MATCH"}
    print("[regress] verdicts %s  %.1fs" % (vc, dt), flush=True)
    for a, v in not_match.items():
        print("  NOT MATCH: %s %s %s"
              % (a, v, results[a].get("note")), flush=True)

    ev = {"tag": args.tag, "pre_ok": len(ok), "sample": args.sample,
          "seed": args.seed, "seconds": round(dt, 1), "verdicts": vc,
          "not_match": not_match, "addrs": sample,
          "time": time.strftime("%Y-%m-%d %H:%M:%S")}
    evp = os.path.join(OUT, "regress_%s.json" % args.tag)
    with open(evp, "w", encoding="utf-8") as f:
        json.dump(ev, f, indent=1, ensure_ascii=False)
    print("[regress] evidence -> %s" % evp, flush=True)
    return 0 if not not_match else 1


if __name__ == "__main__":
    sys.exit(main())
