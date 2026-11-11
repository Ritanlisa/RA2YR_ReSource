#!/usr/bin/env python3
"""run_wall310_r6.py [lo] [hi] -- 310 compile-wall rerun (R6 type layer),
one commit per part of 20."""
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
OUTROOT = os.path.join(ROOT, ".omo", "decomp_batch", "r6_wall310")
BATCH = os.path.join(HERE, "r6_wall310_batch.json")


def sh(args, check=False):
    r = subprocess.run(args, cwd=ROOT, capture_output=True, text=True)
    if check and r.returncode != 0:
        raise SystemExit("FAILED %s\n%s\n%s" % (args, r.stdout, r.stderr))
    return r


def main():
    lo = int(sys.argv[1]) if len(sys.argv) > 1 else 0
    hi = int(sys.argv[2]) if len(sys.argv) > 2 else 15
    n = 20
    import json
    addrs = [e["addr"].lower() for e in json.load(open(BATCH, encoding="utf-8"))]
    os.makedirs(OUTROOT, exist_ok=True)
    for i in range(lo, hi + 1):
        part = addrs[i * n:(i + 1) * n]
        if not part:
            continue
        out = os.path.join(OUTROOT, "p%02d" % i)
        cmd = [sys.executable, os.path.join(ROOT, "tools", "decomp_sys",
                                            "batch_run.py")] + part + \
              ["--out", out, "--chunk", str(n)]
        print("PART %d: %d fns" % (i, len(part)), flush=True)
        rc = subprocess.call(cmd, cwd=ROOT)
        print("PART %d rc=%d" % (i, rc), flush=True)
        add = ["git", "add", "-f",
               ".omo/codegen_match/status.json",
               ".omo/agents/decomp_batch/results.jsonl",
               out]
        sh(add)
        st = sh(["git", "status", "--porcelain"])
        if not st.stdout.strip():
            print("PART %d: nothing staged?" % i)
            continue
        msg = ("decomp_sys r6: type-layer wall310 rerun part %02d/%02d checkpoint"
               % (i, hi))
        c = sh(["git", "commit", "-m", msg])
        print("PART %d commit: %s" % (i, c.stdout.strip().splitlines()[0]
                                      if c.stdout.strip() else c.stderr[:120]),
              flush=True)


if __name__ == "__main__":
    sys.exit(main())
