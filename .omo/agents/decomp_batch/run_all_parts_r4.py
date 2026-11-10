#!/usr/bin/env python3
"""run_all_parts_r4.py -- batch400_r4 driver: one chunk = one commit."""
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
OUTROOT = os.path.join(ROOT, ".omo", "decomp_batch", "r4_400")


def sh(args, check=False):
    r = subprocess.run(args, cwd=ROOT, capture_output=True, text=True)
    if check and r.returncode != 0:
        raise SystemExit("FAILED %s\n%s\n%s" % (args, r.stdout, r.stderr))
    return r


def main():
    lo = int(sys.argv[1]) if len(sys.argv) > 1 else 0
    hi = int(sys.argv[2]) if len(sys.argv) > 2 else 19
    n = int(sys.argv[3]) if len(sys.argv) > 3 else 20
    for i in range(lo, hi + 1):
        r = subprocess.run([sys.executable,
                            os.path.join(HERE, "run_one_part_r4.py"),
                            str(i), str(n)], cwd=ROOT)
        if r.returncode != 0:
            print("PART %d run FAILED rc=%d" % (i, r.returncode))
        add = ["git", "add", "-f",
               ".omo/codegen_match/status.json",
               ".omo/agents/decomp_batch/results.jsonl",
               os.path.join(OUTROOT, "p%02d" % i)]
        add += ["tools/decomp_sys"]
        sh(add)
        st = sh(["git", "status", "--porcelain"])
        if not st.stdout.strip():
            print("PART %d: nothing staged?" % i)
            continue
        msg = ("decomp_sys r4: batch400 part %02d/%02d checkpoint" % (i, hi))
        c = sh(["git", "commit", "-m", msg])
        print(c.stdout.strip().splitlines()[-1] if c.stdout.strip() else
              c.stderr[-300:])


if __name__ == "__main__":
    sys.exit(main())
