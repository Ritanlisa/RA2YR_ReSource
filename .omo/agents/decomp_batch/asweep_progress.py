#!/usr/bin/env python3
"""asweep_progress.py -- cumulative ledger over the A-layer sweep batch.

Reads .omo/agents/decomp_batch/batch_asweep_A.json (the static sweep set) and
results.jsonl (last record wins per address) and prints:

  * decided / total of the sweep set
  * MATCH / MISMATCH / COMPILE_FAIL + compile rate and match rates
  * MISMATCH pathology histogram (branch_order / const_fold / ... are the
    next MATCH-conversion targets at this layer)

Deterministic, read-only.
"""
import json
import os
import sys
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
STATE = os.path.join(ROOT, ".omo", "agents", "decomp_batch")
BATCH = os.path.join(STATE, "batch_asweep_A.json")
RESULTS = os.path.join(STATE, "results.jsonl")


def main():
    sweep = [e["addr"].lower()
             for e in json.load(open(BATCH, encoding="utf-8"))]
    sset = set(sweep)
    last = {}
    if os.path.exists(RESULTS):
        with open(RESULTS, encoding="utf-8") as f:
            for line in f:
                line = line.strip()
                if not line:
                    continue
                try:
                    r = json.loads(line)
                except ValueError:
                    continue
                a = (r.get("addr") or "").lower()
                if a in sset and r.get("verdict"):
                    last[a] = r

    vc = Counter(r["verdict"] for r in last.values())
    pc = Counter(r.get("pathology") for r in last.values()
                 if r.get("pathology"))
    ran = sum(vc.values())
    decided = vc.get("MATCH", 0) + vc.get("MISMATCH", 0)
    total = len(sweep)
    print("A-SWEEP  decided %d/%d (%.1f%%)  remaining %d"
          % (ran, total, 100.0 * ran / max(1, total), total - ran))
    print("  verdicts: MATCH=%d MISMATCH=%d COMPILE_FAIL=%d other=%d"
          % (vc.get("MATCH", 0), vc.get("MISMATCH", 0),
             vc.get("COMPILE_FAIL", 0),
             ran - vc.get("MATCH", 0) - vc.get("MISMATCH", 0)
             - vc.get("COMPILE_FAIL", 0)))
    print("  compile-rate(ran)=%.1f%%  match/ran=%.1f%%  match/decided=%.1f%%"
          "  match/total-pool=%.1f%%"
          % (100.0 * decided / max(1, ran),
             100.0 * vc.get("MATCH", 0) / max(1, ran),
             100.0 * vc.get("MATCH", 0) / max(1, decided),
             100.0 * vc.get("MATCH", 0) / max(1, total)))
    if pc:
        print("  pathology: %s"
              % " / ".join("%s %d" % kv for kv in pc.most_common()))
    return 0


if __name__ == "__main__":
    sys.exit(main())
