#!/usr/bin/env python3
"""run_census.py -- full-pool census driver (2026-11-11).

Runs the stratified census batches (batch_census_{A,B,C,D,X}.json, produced by
batch_select5.py) through batch_run.py in 20-function parts and COMMITS each
part before starting the next one (quota-interruption survival, per task
discipline).

Per part:
  * part batch file  .omo/decomp_batch/<run>/parts/<L>_pXX.json
  * part output dir  .omo/decomp_batch/<run>/<L>/pXX/   (part_00/...)
  * run log          <partdir>/run.log
  * commit           <partdir> + part batch + results.jsonl + ledger
  * timing           .omo/decomp_batch/<run>/timings.jsonl

Resume: a part whose part_report.json exists is skipped (cached).  A crashed
part is retried once; 3 consecutive failures abort the run.

Usage:
  python tools/decomp_sys/run_census.py --run census
  python tools/decomp_sys/run_census.py --run census --layers C,D
  python tools/decomp_sys/run_census.py --run census --no-commit   # smoke
"""
import argparse
import json
import os
import subprocess
import sys
import time
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
STATE = os.path.join(ROOT, ".omo", "agents", "decomp_batch")
RESULTS = os.path.join(STATE, "results.jsonl")
LEDGER = os.path.join(ROOT, ".omo", "codegen_match", "status.json")
BATCH_RUN = os.path.join(HERE, "batch_run.py")


def sh(args, **kw):
    return subprocess.call(args, cwd=ROOT, **kw)


def commit_part(paths, msg):
    add = ["git", "add", "-f", "--"] + paths
    if sh(add, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL) != 0:
        return ("add", 1)
    rc = sh(["git", "commit", "-m", msg, "--"] + paths,
            stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    return ("commit", rc)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--run", default="census",
                    help="out dir name under .omo/decomp_batch/")
    ap.add_argument("--tag", default="census",
                    help="batch file tag (batch_<tag>_<L>.json)")
    ap.add_argument("--layers", default="A,B,C,D,X")
    ap.add_argument("--chunk", type=int, default=20)
    ap.add_argument("--no-commit", action="store_true")
    ap.add_argument("--timeout", type=int, default=1800,
                    help="per-part timeout seconds (default 1800)")
    args = ap.parse_args()

    outroot = os.path.join(ROOT, ".omo", "decomp_batch", args.run)
    partsdir = os.path.join(outroot, "parts")
    os.makedirs(partsdir, exist_ok=True)
    timings = os.path.join(outroot, "timings.jsonl")

    # full plan: layers in order, parts of 20, addresses already easy->hard
    plan = []
    for L in [x.strip() for x in args.layers.split(",") if x.strip()]:
        path = os.path.join(STATE, "batch_%s_%s.json" % (args.tag, L))
        if not os.path.exists(path):
            print("[skip] no batch file for layer %s" % L)
            continue
        entries = json.load(open(path, encoding="utf-8"))
        for i in range(0, len(entries), args.chunk):
            plan.append((L, i // args.chunk, entries[i:i + args.chunk]))

    todo = []
    for L, pi, ents in plan:
        pdir = os.path.join(outroot, L, "p%02d" % pi)
        if os.path.exists(os.path.join(pdir, "part_00", "part_report.json")):
            continue
        todo.append((L, pi, ents))
    print("[plan] %d parts total, %d to run (%d functions)"
          % (len(plan), len(todo), sum(len(e) for _, _, e in todo)))

    fails = 0
    for idx, (L, pi, ents) in enumerate(todo):
        tag = "%s_p%02d" % (L, pi)
        pdir = os.path.join(outroot, L, "p%02d" % pi)
        part_file = os.path.join(partsdir, tag + ".json")
        with open(part_file, "w", encoding="utf-8") as f:
            json.dump(ents, f, ensure_ascii=False, indent=1)
        os.makedirs(pdir, exist_ok=True)
        log_path = os.path.join(pdir, "run.log")
        cmd = [sys.executable, BATCH_RUN, "--batch", part_file,
               "--out", pdir, "--chunk", str(args.chunk), "--resume"]
        print("[part %d/%d] %s (%d fns) ..." %
              (idx + 1, len(todo), tag, len(ents)), flush=True)
        t0 = time.time()
        ok = False
        for attempt in (1, 2):
            with open(log_path, "w", encoding="utf-8") as lf:
                try:
                    rc = subprocess.call(cmd, cwd=ROOT, stdout=lf,
                                         stderr=subprocess.STDOUT,
                                         timeout=args.timeout)
                except subprocess.TimeoutExpired:
                    rc = -9
            ok = (rc == 0 and os.path.exists(os.path.join(
                pdir, "part_00", "part_report.json")))
            if ok:
                break
            print("  attempt %d rc=%s" % (attempt, rc), flush=True)
        dt = time.time() - t0
        rec = {"layer": L, "part": pi, "n": len(ents),
               "seconds": round(dt, 1), "ok": ok}
        if ok:
            rep = json.load(open(os.path.join(
                pdir, "part_00", "part_report.json"), encoding="utf-8"))
            rec["verdicts"] = rep["summary"]["verdicts"]
        with open(timings, "a", encoding="utf-8") as f:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")

        if ok:
            fails = 0
            if not args.no_commit:
                vc = rec.get("verdicts") or {}
                msg = ("decomp_sys census %s: %s %d fns -- %s"
                       % (args.run, tag, len(ents),
                          " ".join("%s=%d" % kv
                                   for kv in sorted(vc.items()))))
                kind, rc2 = commit_part(
                    [pdir, part_file, RESULTS, LEDGER, timings], msg)
                print("  %s rc=%s  %.1fs  %s"
                      % ("commit" if kind == "commit" else "git-add", rc2,
                         dt, vc), flush=True)
            else:
                print("  ok %.1fs %s" % (dt, rec.get("verdicts")), flush=True)
        else:
            fails += 1
            print("  FAIL %.1fs (%d consecutive)" % (dt, fails), flush=True)
            if fails >= 3:
                print("[abort] 3 consecutive part failures", flush=True)
                return 2
    print("[done] all parts processed")
    return 0


if __name__ == "__main__":
    sys.exit(main())
