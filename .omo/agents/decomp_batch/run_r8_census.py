#!/usr/bin/env python3
"""run_r8_census.py [lo] [hi] -- R8 NG 321 fresh pathology census.

Reads r8_ng_census_batch.json (ledger NG snapshot), runs batch_run on parts
of 20 with --no-ledger (ledger purity: census must not mutate the status
file), then merges every part_report into r8_ng_census_verdicts.json.
"""
import json
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
OUTROOT = os.path.join(ROOT, ".omo", "decomp_batch", "r8_ng_census")
BATCH = os.path.join(HERE, "r8_ng_census_batch.json")
N = 20


def main():
    lo = int(sys.argv[1]) if len(sys.argv) > 1 else 0
    hi = int(sys.argv[2]) if len(sys.argv) > 2 else 99
    addrs = [e["addr"].lower() for e in json.load(open(BATCH, encoding="utf-8"))]
    nparts = (len(addrs) + N - 1) // N
    hi = min(hi, nparts - 1)
    os.makedirs(OUTROOT, exist_ok=True)
    for i in range(lo, hi + 1):
        part = addrs[i * N:(i + 1) * N]
        if not part:
            continue
        out = os.path.join(OUTROOT, "p%02d" % i)
        cmd = [sys.executable, os.path.join(ROOT, "tools", "decomp_sys",
                                            "batch_run.py")] + part + \
              ["--out", out, "--chunk", str(N), "--no-ledger"]
        print("PART %d/%d: %d fns" % (i, nparts - 1, len(part)), flush=True)
        rc = subprocess.call(cmd, cwd=ROOT)
        print("PART %d rc=%d" % (i, rc), flush=True)
    # merge
    merged = {}
    for i in range(nparts):
        rp = os.path.join(OUTROOT, "p%02d" % i, "part_report.json")
        if not os.path.exists(rp):
            continue
        d = json.load(open(rp, encoding="utf-8"))
        for r in d["results"]:
            merged[r["addr"].lower()] = r
    with open(os.path.join(HERE, "r8_ng_census_verdicts.json"), "w",
              encoding="utf-8") as f:
        json.dump(merged, f, indent=1, ensure_ascii=False)
    print("merged %d verdicts" % len(merged))


if __name__ == "__main__":
    sys.exit(main())
