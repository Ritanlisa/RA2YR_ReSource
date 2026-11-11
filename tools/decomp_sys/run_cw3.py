#!/usr/bin/env python3
"""run_cw3.py -- CW3 B/C/D compile-wall rerun driver (2026-11-12).

Runs the frozen CW3 batch (batch_cw3_bcd.json, 1,180 B/C/D COMPILE_FAIL
addresses from the CW2-era census) through batch_run.py in 20-function
parts and COMMITS each part before starting the next one (quota-interruption
survival + per-part audit trail).

Per part:
  * part batch file  .omo/decomp_batch/cw3_run/parts/cw3_pXX.json
  * part output dir  .omo/decomp_batch/cw3_run/pXX/  (part_00/...)
  * run log          <partdir>/run.log
  * commit           <partdir> + part batch + results.jsonl + ledger + timings
  * timing           .omo/decomp_batch/cw3_run/timings.jsonl

Resume: a part whose part_report.json exists is skipped (cached).
A crashed part is retried twice; 3 consecutive failures abort the run.

Usage:
  python tools/decomp_sys/run_cw3.py
  python tools/decomp_sys/run_cw3.py --no-commit --max-parts 1    # smoke
  python tools/decomp_sys/run_cw3.py --start-part 10
"""
import argparse
import json
import os
import subprocess
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
STATE = os.path.join(ROOT, ".omo", "agents", "decomp_batch")
RESULTS = os.path.join(STATE, "results.jsonl")
LEDGER = os.path.join(ROOT, ".omo", "codegen_match", "status.json")
BATCH = os.path.join(STATE, "batch_cw3_bcd.json")
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
    ap.add_argument("--run", default="cw3_run")
    ap.add_argument("--tag", default="cw3")
    ap.add_argument("--chunk", type=int, default=20)
    ap.add_argument("--timeout", type=int, default=1800)
    ap.add_argument("--retries", type=int, default=3)
    ap.add_argument("--no-commit", action="store_true")
    ap.add_argument("--start-part", type=int, default=0)
    ap.add_argument("--max-parts", type=int, default=0)
    args = ap.parse_args()

    outroot = os.path.join(ROOT, ".omo", "decomp_batch", args.run)
    partsdir = os.path.join(outroot, "parts")
    os.makedirs(partsdir, exist_ok=True)
    timings = os.path.join(outroot, "timings.jsonl")

    entries = json.load(open(BATCH, encoding="utf-8"))
    plan = []
    for i in range(0, len(entries), args.chunk):
        plan.append((i // args.chunk, entries[i:i + args.chunk]))
    print("[plan] %d functions -> %d parts of %d"
          % (len(entries), len(plan), args.chunk))

    todo = []
    for pi, ents in plan:
        if pi < args.start_part:
            continue
        pdir = os.path.join(outroot, "p%02d" % pi)
        if os.path.exists(os.path.join(pdir, "part_00", "part_report.json")):
            continue
        todo.append((pi, ents))
    if args.max_parts:
        todo = todo[:args.max_parts]
    print("[plan] %d parts to run" % len(todo))

    fails = 0
    for idx, (pi, ents) in enumerate(todo):
        tag = "%s_p%02d" % (args.tag, pi)
        pdir = os.path.join(outroot, "p%02d" % pi)
        part_file = os.path.join(partsdir, tag + ".json")
        with open(part_file, "w", encoding="utf-8") as f:
            json.dump(ents, f, ensure_ascii=False, indent=1)
        os.makedirs(pdir, exist_ok=True)
        log_path = os.path.join(pdir, "run.log")
        cmd = [sys.executable, BATCH_RUN, "--batch", part_file,
               "--out", pdir, "--chunk", str(args.chunk)]
        print("[part %d/%d] %s (%d fns) ..."
              % (idx + 1, len(todo), tag, len(ents)), flush=True)
        t0 = time.time()
        ok = False
        for attempt in range(1, args.retries + 1):
            with open(log_path, "a" if attempt > 1 else "w",
                      encoding="utf-8") as lf:
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
            print("  attempt %d rc=%s (retry in 15s)" % (attempt, rc),
                  flush=True)
            time.sleep(15)
        dt = time.time() - t0
        rec = {"part": pi, "n": len(ents), "seconds": round(dt, 1),
               "ok": ok}
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
                msg = ("decomp_sys %s %s %d fns -- %s"
                       % (args.tag, tag, len(ents),
                          " ".join("%s=%d" % kv
                                   for kv in sorted(vc.items()))))
                kind, rc2 = commit_part(
                    [pdir, part_file, RESULTS, LEDGER, timings], msg)
                print("  %s rc=%s  %.1fs  %s"
                      % (kind, rc2, dt, vc), flush=True)
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
