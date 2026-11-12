#!/usr/bin/env python3
"""cw6_regress.py -- CW6 zero-regression check (read-only, no ledger writes).

Samples N addresses from the PRE-CW6 ledger OK set (3,906) and re-runs the
full conversion+byte-compare chain with the CURRENT HEAD pipeline.  Expect
N/N MATCH.  batch_run.run_part has no ledger side effects.

Usage: python .omo/decomp_batch/cw6_prep/cw6_regress.py [--sample 30] [--seed 20261112]
"""
import argparse
import collections
import json
import os
import random
import sys

HERE = os.path.abspath(os.path.dirname(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "decomp_sys"))
sys.path.insert(0, ROOT)

import batch_run                                     # noqa: E402
import pseudo                                        # noqa: E402
from registry_ext import Registry                    # noqa: E402

PRE = os.path.join(ROOT, ".omo", "decomp_batch", "cw6_pre_ledger.json")
OUT = os.path.join(ROOT, ".omo", "decomp_batch", "cw6_prep", "cw6_regress_out")
EVID = os.path.join(ROOT, ".omo", "decomp_batch", "cw6_prep", "cw6_regress.json")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--sample", type=int, default=30)
    ap.add_argument("--seed", type=int, default=20261112)
    args = ap.parse_args()

    pre = json.load(open(PRE, encoding="utf-8"))
    ok = sorted([a for a, v in pre.items() if v.get("status") == "OK"])
    print("[regress] pre-CW6 ledger OK = %d" % len(ok))

    rng = random.Random(args.seed)
    sample = sorted(rng.sample(ok, min(args.sample, len(ok))))
    reg = Registry.get()
    idx = pseudo.load_index()
    os.makedirs(OUT, exist_ok=True)
    results, _ = batch_run.run_part(sample, {}, OUT, reg, idx)

    verdicts = {a: results[a]["verdict"] for a in sample}
    vc = collections.Counter(verdicts.values())
    not_match = {a: {"verdict": v, "note": results[a].get("note"),
                     "first_diff": results[a].get("first_diff"),
                     "pathology": results[a].get("pathology")}
                 for a, v in verdicts.items() if v != "MATCH"}
    print("[regress] verdicts:", dict(vc))
    for a, v in not_match.items():
        print("  NOT MATCH:", a, v["verdict"], v.get("pathology"),
              (v.get("note") or "")[:160])

    ev = {"pre_ok": len(ok), "sample": args.sample, "seed": args.seed,
          "verdicts": dict(vc), "not_match": not_match, "addrs": sample}
    json.dump(ev, open(EVID, "w", encoding="utf-8"), ensure_ascii=False, indent=1)
    print("[regress] evidence ->", EVID)
    return 0 if not not_match else 1


if __name__ == "__main__":
    sys.exit(main())
