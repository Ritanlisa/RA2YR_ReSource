#!/usr/bin/env python3
"""run_one_part.py <i> [--n 20] -- run ONE chunk of batch400 through batch_run.

Each invocation is a checkpoint: batch_run writes part_report.json + appends
results.jsonl + flushes the ledger, so a kill loses at most this chunk.
"""
import json
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
BATCH = os.path.join(HERE, "batch400.json")
OUTROOT = os.path.join(ROOT, ".omo", "decomp_batch", "r3_400")


def main():
    i = int(sys.argv[1])
    n = int(sys.argv[2]) if len(sys.argv) > 2 else 20
    addrs = [e["addr"].lower() for e in
             json.load(open(BATCH, encoding="utf-8"))]
    part = addrs[i * n:(i + 1) * n]
    if not part:
        print("empty part %d" % i)
        return 1
    out = os.path.join(OUTROOT, "p%02d" % i)
    cmd = [sys.executable, os.path.join(ROOT, "tools", "decomp_sys",
                                        "batch_run.py")] + part + \
          ["--out", out, "--chunk", str(n)]
    print("PART %d: %d fns -> %s" % (i, len(part), out))
    rc = subprocess.call(cmd, cwd=ROOT)
    return rc


if __name__ == "__main__":
    sys.exit(main())
