#!/usr/bin/env python3
"""parallel_run.py -- part-level parallel driver for the DECOMP pipeline.

Thin CLI wrapper around batch_run.run_part_parallel (the single parallel
implementation): one part = one chunk of addresses (default 20) = exactly
the work unit of batch_run.run_part.

What is parallel:

  * WORKERS (persistent processes, default 8): the whole per-part chain --
    pseudo fetch, decompile passes, emission, checker, era cl.exe compiles,
    COFF extraction, diffasm.  Nothing in there is shared.
  * PARENT (single thread, strict part order): results.jsonl append,
    ledger record, part_report.json, batch_report.json.  No concurrent
    ledger writes -> no torn status.json.

Process-level caches (signals maps, registry, full_export index, solver
domains, member_lookup) are paid once per worker, not once per part.

Determinism: a part's artifacts are a pure function of its address list;
the parent commits in part-index order, so ledger/results bytes are
identical to a serial batch_run run.

Usage:
  python tools/decomp_sys/parallel_run.py \
      --parts-dir .omo/decomp_batch/s3b_f2/parts --max 5 --workers 8 \
      --out .omo/decomp_batch/s3b_f2_par --no-ledger

  python tools/decomp_sys/parallel_run.py --batch batch.json --chunk 20 \
      --workers 12 --out .omo/decomp_batch/run_par
"""
import argparse
import glob as globmod
import json
import os
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)
sys.path.insert(0, ROOT)
sys.path.insert(0, os.path.join(ROOT, "tools", "codegen_match"))

OUT_DEFAULT = os.path.join(ROOT, ".omo", "decomp_batch", "par_run")


# ---------------------------------------------------------------- parts

def parts_from_batch(batch_path, chunk):
    with open(batch_path, encoding="utf-8") as f:
        entries = json.load(f)
    addrs = []
    batch_src = {}
    for e in entries:
        a = e["addr"].lower()
        if a in batch_src:
            continue
        addrs.append(a)
        batch_src[a] = e.get("family") or e.get("batch") or "batch"
    parts = []
    for i in range(0, len(addrs), chunk):
        chunk_addrs = addrs[i:i + chunk]
        parts.append((chunk_addrs, {a: batch_src[a] for a in chunk_addrs}))
    return parts


def parts_from_dir(dir_path, pattern="*.json"):
    files = sorted(globmod.glob(os.path.join(dir_path, pattern)))
    parts = []
    for p in files:
        with open(p, encoding="utf-8") as f:
            entries = json.load(f)
        addrs = []
        batch_src = {}
        for e in entries:
            a = e["addr"].lower()
            if a in batch_src:
                continue
            addrs.append(a)
            batch_src[a] = e.get("family") or e.get("batch") or "batch"
        parts.append((addrs, batch_src))
    return parts


# ---------------------------------------------------------------- driver

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--batch", default=None)
    ap.add_argument("--parts-dir", default=None)
    ap.add_argument("--pattern", default="*.json",
                    help="glob inside --parts-dir (default *.json)")
    ap.add_argument("--chunk", type=int, default=20)
    ap.add_argument("--workers", type=int, default=8)
    ap.add_argument("--max", type=int, default=0, help="max parts")
    ap.add_argument("--out", default=OUT_DEFAULT)
    ap.add_argument("--resume", action="store_true")
    ap.add_argument("--no-ledger", action="store_true")
    ap.add_argument("--no-results", action="store_true",
                    help="skip the results.jsonl append (timing runs)")
    ap.add_argument("--dry", action="store_true",
                    help="only print the part plan")
    ap.add_argument("--part-tag", default="p%03d/part_00",
                    help="per-part dir template relative to --out "
                         "(default p<pct>03d/part_00; use part_<pct>02d to "
                         "mirror a single batch_run part exactly)")
    args = ap.parse_args()

    if args.parts_dir:
        parts = parts_from_dir(args.parts_dir, args.pattern)
    elif args.batch:
        parts = parts_from_batch(args.batch, args.chunk)
    else:
        ap.error("give --batch or --parts-dir")
    if args.max:
        parts = parts[:args.max]
    if not parts:
        print("[plan] no parts")
        return 0

    import batch_run

    if args.resume:
        done = batch_run.load_done()
        kept = []
        for addrs, src in parts:
            left = [a for a in addrs if a not in done]
            if left:
                kept.append((left, {a: src[a] for a in left}))
        print("[resume] %d/%d parts still have undecided addrs"
              % (len(kept), len(parts)))
        parts = kept
    if not parts:
        print("[plan] nothing to do")
        return 0

    out_root = os.path.abspath(args.out)
    os.makedirs(out_root, exist_ok=True)
    jobs = []
    for i, (addrs, batch_src) in enumerate(parts):
        pdir = os.path.join(out_root, args.part_tag % i)
        jobs.append((i, addrs, batch_src, pdir))

    total_fns = sum(len(j[1]) for j in jobs)
    print("[plan] %d parts / %d fns, workers=%d -> %s"
          % (len(jobs), total_fns, args.workers, out_root))
    if args.dry:
        for j in jobs:
            print("  part %03d: %2d fns -> %s" % (j[0], len(j[1]), j[3]))
        return 0

    t_start = time.time()
    all_results, check_viol_total = batch_run.run_part_parallel(
        jobs, workers=args.workers,
        write_results=not args.no_results,
        write_ledger=not args.no_ledger)
    wall = time.time() - t_start

    merged = dict(batch_run.load_done()) if args.resume else {}
    merged.update(all_results)
    summary = batch_run.summarize(merged)
    summary["rule_violation_fns"] = check_viol_total
    summary["parts"] = len(jobs)
    summary["workers"] = max(1, args.workers)
    summary["wall_secs"] = round(wall, 1)
    print("=" * 70)
    print(json.dumps(summary, indent=1))
    with open(os.path.join(out_root, "batch_report.json"), "w",
              encoding="utf-8") as f:
        json.dump({"summary": summary,
                   "results": list(merged.values())},
                  f, indent=1, ensure_ascii=False)
    print("report -> %s" % os.path.join(out_root, "batch_report.json"))
    return 0


if __name__ == "__main__":
    sys.exit(main())
