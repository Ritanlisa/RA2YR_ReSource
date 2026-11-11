#!/usr/bin/env python3
"""Build the R6 batches: wall310 (r5 COMPILE_FAIL set) + regression ref copy."""
import json, os, shutil

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))

v = json.load(open(os.path.join(HERE, "r5_wall385_verdicts_final.json"),
                   encoding="utf-8"))
fails = sorted(a.lower() for a, st in v.items() if st == "COMPILE_FAIL")
json.dump([{"addr": a} for a in fails],
          open(os.path.join(HERE, "r6_wall310_batch.json"), "w"), indent=1)
print("wall310:", len(fails))

# regression ledger: reuse the r5 batch as-is (same 359)
src = os.path.join(HERE, "r5_regression_batch.json")
dst = os.path.join(HERE, "r6_regression_batch.json")
if os.path.exists(src) and not os.path.exists(dst):
    shutil.copy(src, dst)
n = len(json.load(open(dst, encoding="utf-8")))
print("regression:", n)
