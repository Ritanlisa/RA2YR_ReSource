#!/usr/bin/env python3
"""run_parts_r5.py <batchfile> <outroot> <lo> <hi> <n> -- generic R5 chunk
driver (no commits here; the caller decides commit discipline)."""
import json
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))


def main():
    batch = sys.argv[1]
    outroot_rel = sys.argv[2]
    lo = int(sys.argv[3])
    hi = int(sys.argv[4])
    n = int(sys.argv[5])
    addrs = [e["addr"].lower() for e in json.load(open(batch, encoding="utf-8"))]
    outroot = os.path.join(ROOT, outroot_rel)
    os.makedirs(outroot, exist_ok=True)
    for i in range(lo, hi + 1):
        part = addrs[i * n:(i + 1) * n]
        if not part:
            continue
        out = os.path.join(outroot, "p%02d" % i)
        cmd = [sys.executable, os.path.join(ROOT, "tools", "decomp_sys",
                                            "batch_run.py")] + part + \
              ["--out", out, "--chunk", str(n)]
        print("PART %d: %d fns -> %s" % (i, len(part), out))
        rc = subprocess.call(cmd, cwd=ROOT)
        print("PART %d rc=%d" % (i, rc))
    return 0


if __name__ == "__main__":
    sys.exit(main())
