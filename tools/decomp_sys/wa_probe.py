#!/usr/bin/env python3
"""wa_probe.py -- W-A constant-family PROBE (2026-11-12).

Probe mode only: trials are compiled/extracted/byte-compared exactly like the
batch channel, but NOTHING is written to the codegen ledger and no `part`
commit is made -- CW5 owns the batch channel while this runs.

For every sampled D_CONST_FOLD / D_CONST_FP / D_IMM function:
  1. locate the emitted function block in the recorded part dir
  2. confirm the baseline is MISMATCH against the stored orig artifact
  3. generate source-form variants (wa_variants.py) from the function's own
     IDA disassembly + the linked image's .rdata values
  4. checker-gate each variant (must not add violations)
  5. faithful-context recompile (part include tree copied verbatim), extract
     the function from the COFF unit, diffasm byte-compare
  6. first MATCH wins; every variant outcome is recorded

Usage:
  python tools/decomp_sys/wa_probe.py --select          # write wa_batch.json
  python tools/decomp_sys/wa_probe.py --run             # run all parts
  python tools/decomp_sys/wa_probe.py --report          # aggregate
  python tools/decomp_sys/wa_probe.py --run --max 10
"""
import argparse
import json
import os
import random
import re
import shutil
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)
sys.path.insert(0, ROOT)

import batch_run                                       # noqa: E402
import checker                                         # noqa: E402
import decompile                                       # noqa: E402
import pseudo                                          # noqa: E402
import wa_variants as WV                               # noqa: E402
import run_cw4                                          # noqa: E402
from registry_ext import Registry                      # noqa: E402
from tools.codegen_match import diffasm as dmod        # noqa: E402

STATE = os.path.join(ROOT, ".omo", "agents", "decomp_batch")
OUT = os.path.join(STATE, "wa_probe")
BUCKETS = ("D_CONST_FOLD", "D_CONST_FP", "D_IMM")
RESULTS = os.path.join(OUT, "results.jsonl")


# ------------------------------------------------------------------ selection

def load_rows():
    return json.load(open(os.path.join(STATE, "w_census_rows.json"),
                          encoding="utf-8"))


def _valid(row):
    pdir = os.path.join(ROOT, row["part_dir"])
    tag = row["addr"][2:].upper()
    return (row.get("artifact_verdict") == "MISMATCH"
            and os.path.isdir(pdir)
            and os.path.exists(os.path.join(pdir, "orig_%s.json" % tag))
            and os.path.exists(os.path.join(pdir, "ours_%s.json" % tag)))


def select(n, seed=20261112, buckets=BUCKETS):
    rows = load_rows()
    rng = random.Random(seed)
    picked = []
    for b in buckets:
        xs = [r for r in rows if r.get("cls") == b and _valid(r)]
        xs.sort(key=lambda r: r["addr"])
        take = xs if len(xs) <= n else rng.sample(xs, n)
        for r in take:
            r = dict(r)
            r["bucket"] = b
            picked.append(r)
        print("[select] %-12s pool=%4d take=%d" % (b, len(xs), len(take)))
    os.makedirs(OUT, exist_ok=True)
    path = os.path.join(OUT, "wa_batch.json")
    with open(path, "w", encoding="utf-8") as f:
        json.dump(picked, f, indent=1, ensure_ascii=False)
    print("[select] %d rows -> %s" % (len(picked), path))
    return picked


# ---------------------------------------------------------------- trial driver

def patch_include_externs(tdir, cpp_name, globals_):
    """Append `extern T name;` for the variant's introduced data symbols."""
    if not globals_:
        return True
    cpp = open(os.path.join(tdir, cpp_name), encoding="utf-8",
               errors="replace").read()
    m = re.search(r'#include\s+"([^"]+\.hpp)"', cpp)
    if not m:
        return False
    hpp = os.path.join(tdir, "include", m.group(1))
    if not os.path.exists(hpp):
        return False
    text = open(hpp, encoding="utf-8", errors="replace").read()
    adds = []
    for name in sorted(globals_):
        ty = globals_[name]
        if re.search(r"\b%s\b" % re.escape(name), text):
            continue
        adds.append("extern %s %s;" % (ty, name))
    if not adds:
        return True
    end = text.rfind("#endif")
    if end < 0:
        text = text + "\n" + "\n".join(adds) + "\n"
    else:
        text = text[:end] + "\n".join(adds) + "\n\n" + text[end:]
    with open(hpp, "w", encoding="utf-8", newline="\n") as f:
        f.write(text)
    return True


def run_one(row, outdir, reg):
    addr = row["addr"]
    tag = addr[2:].upper()
    part_dir = os.path.join(ROOT, row["part_dir"])
    rec = {"addr": addr, "name": row.get("name"), "bucket": row.get("bucket"),
           "family": row.get("cls"), "detail": row.get("detail"),
           "verdict": "NO_HIT", "accepted": None, "variants": [],
           "baseline": None}
    unit_file, cpp_text, blk = None, None, None
    for fn in sorted(os.listdir(part_dir)):
        if not fn.endswith(".cpp"):
            continue
        txt = open(os.path.join(part_dir, fn), encoding="utf-8",
                   errors="replace").read()
        b = run_cw4.find_block(txt, tag)
        if b:
            unit_file, cpp_text, blk = fn, txt, b
            break
    if not blk:
        rec["verdict"] = "SKIP_NO_BLOCK"
        return rec
    cls, method = run_cw4.head_ident(blk["head"])
    if not method:
        rec["verdict"] = "SKIP_NO_HEAD"
        return rec
    rec.update(cls=cls, method=method, unit=os.path.splitext(unit_file)[0],
               head=blk["head"])
    orig_path = os.path.join(part_dir, "orig_%s.json" % tag)
    ours_path = os.path.join(part_dir, "ours_%s.json" % tag)
    try:
        base_art = json.load(open(ours_path, encoding="utf-8"))
        ok0, first0 = run_cw4._compare(orig_path, base_art)
    except Exception as e:                              # noqa: BLE001
        rec["verdict"] = "SKIP_BAD_ARTIFACT"
        rec["note"] = str(e)[:160]
        return rec
    rec["baseline"] = "MATCH" if ok0 else "MISMATCH"
    rec["baseline_first_diff"] = run_cw4._first_diff_dict(first0)
    if ok0:
        rec["verdict"] = "BASELINE_MATCH"
        return rec
    # Faithful-context guard: the recorded part snapshot must still compile.
    # Stale parts (hpp regenerated after the artifact was stored) would turn
    # every variant into COMPILE_FAIL for reasons unrelated to the variant.
    vdir = os.path.join(outdir, "v_" + tag)
    if os.path.isdir(vdir):
        shutil.rmtree(vdir)
    os.makedirs(vdir)
    src_inc0 = os.path.join(part_dir, "include")
    if os.path.isdir(src_inc0):
        shutil.copytree(src_inc0, os.path.join(vdir, "include"))
    vunit0 = os.path.join(vdir, unit_file)
    with open(vunit0, "w", encoding="utf-8", newline="\n") as f:
        f.write(cpp_text)
    cr0 = decompile.era_compile(vunit0, vdir)
    if cr0.returncode != 0:
        err = (cr0.stdout + cr0.stderr).strip().splitlines()
        rec["verdict"] = "SKIP_STALE_CONTEXT"
        rec["note"] = "; ".join(x for x in err if "error" in x.lower())[:220]
        shutil.rmtree(vdir, ignore_errors=True)
        return rec
    shutil.rmtree(vdir, ignore_errors=True)
    # variant generation from the function's own disasm + emitted body
    try:
        ex = pseudo.fetch(addr)
        disasm = ex.disasm_lines or []
    except Exception as e:                              # noqa: BLE001
        rec["verdict"] = "SKIP_NO_EXPORT"
        rec["note"] = str(e)[:160]
        return rec
    body_text = blk["body"]
    meta = {"disasm": disasm, "family": row.get("cls"),
            "head_ret": run_cw4.head_ret_type(blk["head"])}
    variants = WV.generate(body_text.split("\n"), meta)
    rec["n_variants"] = len(variants)
    if not variants:
        rec["verdict"] = "NO_VARIANT"
        return rec
    rec["variant_ids"] = [v.vid for v in variants]
    # rule baseline
    hpp = os.path.join(part_dir, "include",
                       os.path.splitext(unit_file)[0] + ".hpp")
    members = run_cw4.parse_hpp_members(hpp, cls) if cls else set()
    _params, ct = run_cw4.head_params(blk["head"], reg)
    try:
        base_viol = len(checker.check_function(cls, body_text, ct, members)
                        .violations)
    except Exception:                                   # noqa: BLE001
        base_viol = 0
    # trial dir
    tdir = os.path.join(outdir, "t_" + tag)
    if os.path.isdir(tdir):
        shutil.rmtree(tdir)
    os.makedirs(tdir)
    src_inc = os.path.join(part_dir, "include")
    if os.path.isdir(src_inc):
        shutil.copytree(src_inc, os.path.join(tdir, "include"))
    tunit = os.path.join(tdir, unit_file)
    accepted = None
    for v in variants:
        vbody = "\n".join(v.lines) + "\n"
        try:
            vrep = checker.check_function(cls, vbody, ct, members)
            nviol = len(vrep.violations)
        except Exception:                               # noqa: BLE001
            nviol = 0
        vrec = {"vid": v.vid, "kind": v.kind, "desc": v.desc,
                "checker": ("clean" if nviol <= base_viol
                            else "NEW_VIOLATION:%d" % (nviol - base_viol))}
        if nviol > base_viol:
            vrec["result"] = "REJECTED_RULE"
            rec["variants"].append(vrec)
            continue
        new_cpp = (cpp_text[:blk["start"]] +
                   blk["block"][:blk["bo"]] + vbody +
                   blk["block"][blk["be"]:] + cpp_text[blk["end"]:])
        # fresh copy of the include tree per variant (externs may differ)
        if os.path.isdir(os.path.join(tdir, "include")):
            shutil.rmtree(os.path.join(tdir, "include"))
        shutil.copytree(src_inc, os.path.join(tdir, "include"))
        with open(tunit, "w", encoding="utf-8", newline="\n") as f:
            f.write(new_cpp)
        if not patch_include_externs(tdir, unit_file, v.globals):
            vrec["result"] = "PATCH_FAIL"
            rec["variants"].append(vrec)
            continue
        t0 = time.time()
        cr = decompile.era_compile(tunit, tdir)
        vrec["seconds"] = round(time.time() - t0, 2)
        if cr.returncode != 0:
            err = (cr.stdout + cr.stderr).strip().splitlines()
            vrec["result"] = "COMPILE_FAIL"
            vrec["error"] = "; ".join(x for x in err
                                      if "error" in x.lower())[:220]
            rec["variants"].append(vrec)
            continue
        obj = os.path.join(tdir, os.path.splitext(unit_file)[0] + ".obj")
        try:
            art = batch_run.extract_fn_from_obj(obj, cls, method)
        except (SystemExit, Exception) as e:            # noqa: BLE001
            vrec["result"] = "EXTRACT_FAIL"
            vrec["error"] = str(e)[:200]
            rec["variants"].append(vrec)
            continue
        try:
            ok, first = run_cw4._compare(orig_path, art)
        except Exception as e:                          # noqa: BLE001
            vrec["result"] = "DIFF_FAIL"
            vrec["error"] = str(e)[:200]
            rec["variants"].append(vrec)
            continue
        if ok:
            vrec["result"] = "MATCH"
            rec["variants"].append(vrec)
            accepted = (v, vbody, art)
            break
        vrec["result"] = "MISMATCH"
        vrec["first_diff"] = run_cw4._first_diff_dict(first)
        vrec["ours_size"] = art["size"]
        rec["variants"].append(vrec)
    if accepted:
        v, vbody, art = accepted
        rec.update(verdict="MATCH", accepted=v.vid,
                   accepted_kind=v.kind, accepted_desc=v.desc,
                   ours_size=art["size"])
        rec["accepted_body"] = vbody.rstrip("\n")
    if os.environ.get("WA_KEEP") != "1":
        shutil.rmtree(tdir, ignore_errors=True)
    return rec


# ------------------------------------------------------------------ aggregate

def summarize(results):
    vc, hits, tries = {}, {}, {}
    for r in results:
        vc[r["verdict"]] = vc.get(r["verdict"], 0) + 1
        key = r.get("bucket") or "?"
        tries[key] = tries.get(key, 0) + 1
        if r["verdict"] == "MATCH":
            hits[key] = hits.get(key, 0) + 1
    return {"verdicts": vc, "by_bucket_total": tries, "by_bucket_hits": hits}


def run(args):
    os.makedirs(OUT, exist_ok=True)
    rows = json.load(open(args.batch or
                          os.path.join(OUT, "wa_batch.json"),
                          encoding="utf-8"))
    if args.addrs:
        want = set(x.strip().lower() for x in args.addrs.split(","))
        rows = [r for r in rows if r["addr"].lower() in want]
    if args.max:
        rows = rows[:args.max]
    reg = Registry.get()
    results = []
    t_all = time.time()
    for i, row in enumerate(rows):
        print("[%d/%d] %s %-10s %s ..."
              % (i + 1, len(rows), row["addr"], row.get("bucket"),
                 (row.get("name") or "")[:34]), flush=True)
        try:
            r = run_one(row, OUT, reg)
        except Exception as e:                          # noqa: BLE001
            import traceback
            r = {"addr": row.get("addr"), "bucket": row.get("bucket"),
                 "verdict": "INTERNAL_ERROR",
                 "note": "%s: %s" % (type(e).__name__, e),
                 "tb": traceback.format_exc()[-800:]}
        results.append(r)
        print("   %-12s %s" %
              (r["verdict"], r.get("accepted") or
               ",".join("%s=%s" % (v["vid"], v["result"])
                        for v in r.get("variants", []))[:140]), flush=True)
    dt = time.time() - t_all
    summary = summarize(results)
    os.makedirs(OUT, exist_ok=True)
    with open(os.path.join(OUT, "part_report.json"), "w",
              encoding="utf-8") as f:
        json.dump({"summary": summary, "seconds": round(dt, 1),
                   "results": results}, f, indent=1, ensure_ascii=False)
    with open(RESULTS, "a", encoding="utf-8") as f:
        for r in results:
            f.write(json.dumps(r, ensure_ascii=False) + "\n")
    print("[done] %d rows %.0fs %s" % (len(results), dt, summary["verdicts"]))
    return 0


def report(args):
    sel = args.report or os.path.join(OUT, "part_report.json")
    paths = [p for p in sel.split(",") if p]
    agg = {}
    va = {}
    total = hits = 0
    verdicts = {}

    def bump(d, k, n=1):
        d[k] = d.get(k, 0) + n

    for p in paths:
        rep = json.load(open(p, encoding="utf-8"))
        for r in rep["results"]:
            total += 1
            bump(verdicts, r["verdict"])
            if r["verdict"] == "MATCH":
                hits += 1
            key = r.get("bucket") or "?"
            a = agg.setdefault(key, {"n": 0, "hit": 0, "novar": 0})
            a["n"] += 1
            if r["verdict"] == "MATCH":
                a["hit"] += 1
            if r["verdict"] == "NO_VARIANT":
                a["novar"] += 1
            for v in r.get("variants", []):
                bump(va, (v["vid"], v["result"]))
    print(json.dumps({"total": total, "hits": hits,
                      "hit_rate_pct": round(100.0 * hits / max(1, total), 1),
                      "verdicts": verdicts}, indent=1))
    print("\n%-14s %5s %5s %7s %6s" % ("bucket", "n", "hit", "rate", "novar"))
    for b in sorted(agg):
        a = agg[b]
        print("%-14s %5d %5d %6.1f%% %5d"
              % (b, a["n"], a["hit"], 100.0 * a["hit"] / max(1, a["n"]),
                 a["novar"]))
    print("\nvariant outcomes:")
    for (vid, res), n in sorted(va.items()):
        print("  %-22s %-16s %d" % (vid, res, n))
    if args.md:
        lines = ["## W-A probe aggregate\n",
                 "| metric | value |", "|---|---:|",
                 "| trialed | %d |" % total,
                 "| MATCH | **%d** |" % hits,
                 "| hit rate | **%.1f%%** |"
                 % (100.0 * hits / max(1, total))]
        for k in sorted(verdicts):
            lines.append("| verdict %s | %d |" % (k, verdicts[k]))
        lines.append("\n| bucket | n | hit | rate | no-variant |")
        lines.append("|---|---:|---:|---:|---:|")
        for b in sorted(agg):
            a = agg[b]
            lines.append("| %s | %d | %d | %.1f%% | %d |"
                         % (b, a["n"], a["hit"],
                            100.0 * a["hit"] / max(1, a["n"]), a["novar"]))
        lines.append("\n| variant | outcome | n |")
        lines.append("|---|---|---:|")
        for (vid, res), n in sorted(va.items()):
            lines.append("| %s | %s | %d |" % (vid, res, n))
        with open(args.md, "w", encoding="utf-8", newline="\n") as f:
            f.write("\n".join(lines) + "\n")
        print("\nmd -> %s" % args.md)
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--select", action="store_true")
    ap.add_argument("--n", type=int, default=20)
    ap.add_argument("--seed", type=int, default=20261112)
    ap.add_argument("--buckets", default=",".join(BUCKETS))
    ap.add_argument("--batch", default=None)
    ap.add_argument("--run", action="store_true")
    ap.add_argument("--max", type=int, default=0)
    ap.add_argument("--addrs", default=None)
    ap.add_argument("--report", nargs="?", const="", default=None)
    ap.add_argument("--md", default=None)
    args = ap.parse_args()
    if args.select:
        select(args.n, args.seed, tuple(args.buckets.split(",")))
        return 0
    if args.run:
        return run(args)
    if args.report is not None:
        if args.report == "":
            args.report = None
        return report(args)
    ap.print_help()
    return 0


if __name__ == "__main__":
    sys.exit(main())
