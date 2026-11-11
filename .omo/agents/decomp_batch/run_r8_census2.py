#!/usr/bin/env python3
"""run_r8_census2.py [--workers N] [--out NAME] [--batch FILE]

R8 fresh pathology census over the 321 ledger-NG snapshot, PARALLEL parts.

Each part is an isolated batch_run invocation (own out dir, own cl cwd), so
parts can run concurrently.  `--no-ledger` keeps status.json pure; the merge
step writes <out>/verdicts.json and prints the pathology table.
"""
import argparse
import collections
import json
import os
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
N = 20


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--workers", type=int, default=6)
    ap.add_argument("--out", default="r8_ng_census2")
    ap.add_argument("--batch", default=os.path.join(
        HERE, "r8_ng_census_batch.json"))
    ap.add_argument("--lo", type=int, default=0)
    ap.add_argument("--hi", type=int, default=99)
    args = ap.parse_args()

    outroot = os.path.join(ROOT, ".omo", "decomp_batch", args.out)
    os.makedirs(outroot, exist_ok=True)
    addrs = [e["addr"].lower() for e in json.load(open(args.batch,
                                                       encoding="utf-8"))]
    nparts = (len(addrs) + N - 1) // N
    hi = min(args.hi, nparts - 1)

    def one(i):
        part = addrs[i * N:(i + 1) * N]
        out = os.path.join(outroot, "p%02d" % i)
        if os.path.exists(os.path.join(out, "part_report.json")):
            print("PART %02d cached" % i, flush=True)
            return i
        cmd = [sys.executable, os.path.join(ROOT, "tools", "decomp_sys",
                                           "batch_run.py")] + part + \
              ["--out", out, "--chunk", str(N), "--no-ledger"]
        print("PART %02d start (%d fns)" % (i, len(part)), flush=True)
        rc = subprocess.call(cmd, cwd=ROOT, stdout=subprocess.DEVNULL,
                             stderr=subprocess.DEVNULL)
        print("PART %02d rc=%d" % (i, rc), flush=True)
        return i

    with ThreadPoolExecutor(max_workers=args.workers) as ex:
        list(ex.map(one, range(args.lo, hi + 1)))

    merged = {}
    import glob
    for rp in sorted(glob.glob(os.path.join(outroot, "p*", "part_*",
                                            "part_report.json"))):
        d = json.load(open(rp, encoding="utf-8"))
        for r in d["results"]:
            merged[r["addr"].lower()] = r
    with open(os.path.join(outroot, "verdicts.json"), "w",
              encoding="utf-8") as f:
        json.dump(merged, f, indent=1, ensure_ascii=False)

    vc = collections.Counter(r["verdict"] for r in merged.values())
    print("merged %d verdicts" % len(merged))
    print(dict(vc))
    pa = collections.Counter(r.get("pathology") for r in merged.values()
                             if r.get("verdict") == "MISMATCH")
    for k, n in pa.most_common():
        print("  %-18s %3d" % (k, n))
    miss = [r for r in merged.values() if r.get("verdict") == "MISMATCH"]
    mrate = 100.0 * vc.get("MATCH", 0) / max(1, vc.get("MATCH", 0) + len(miss))
    print("match-rate of decided: %.1f%%" % mrate)
    return 0


if __name__ == "__main__":
    sys.exit(main())
