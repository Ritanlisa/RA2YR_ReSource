#!/usr/bin/env python3
"""run_cw4.py -- CW4 shape-layer auto-trial driver (2026-11-12).

Method (work order report_shape_census.md §5):
  For every A-layer MISMATCH function, generate a bounded set of
  equivalent source-form variants (cw4_variants.py), compile each one,
  extract the function from the COFF unit and byte-compare against the
  original binary.  The first MATCH is accepted and recorded together
  with the transform id -- that record is what feeds generator rules
  back into decompile.py / passes.py ("从试错反哺生成器").

Faithfulness: the trial reuses the ORIGINAL asweep part unit (same .cpp /
include/*.hpp context that produced the recorded MISMATCH) and only
replaces the target function's body text.  Baseline verdicts are read
from the stored ours_*.json, so no baseline recompiles are needed.

Accounting (CW4 does NOT write the codegen ledger; that stays with the
CW3/batch channel): per-part report + cw4_results.jsonl + timings.
Every part is committed before the next one starts (quota survival).

Usage:
  python tools/decomp_sys/run_cw4.py --select pilot
  python tools/decomp_sys/run_cw4.py --run cw4_pilot --batch <batch.json>
  python tools/decomp_sys/run_cw4.py --select all
  python tools/decomp_sys/run_cw4.py --run cw4_all --batch <batch.json>
  python tools/decomp_sys/run_cw4.py --report cw4_pilot
"""
import argparse
import json
import os
import random
import re
import shutil
import subprocess
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)
sys.path.insert(0, ROOT)

import batch_run                                       # noqa: E402
import checker                                         # noqa: E402
import decompile                                       # noqa: E402
import cw4_variants as CV                              # noqa: E402
from registry_ext import Registry                      # noqa: E402
from tools.codegen_match import diffasm as dmod        # noqa: E402

STATE = os.path.join(ROOT, ".omo", "agents", "decomp_batch")
ASWEEP = os.path.join(ROOT, ".omo", "decomp_batch", "asweep", "A")
RUNROOT = os.path.join(ROOT, ".omo", "decomp_batch")
RESULTS = os.path.join(STATE, "cw4_results.jsonl")


# ------------------------------------------------------------------ selection

def load_rows():
    fam = json.load(open(os.path.join(STATE, "shape_families.json"),
                         encoding="utf-8"))["rows"]
    idx = json.load(open(os.path.join(STATE, "shape_census_index.json"),
                         encoding="utf-8"))
    by_addr = {r["addr"].lower(): r for r in idx}
    rows = []
    for r in fam:
        a = r["addr"].lower()
        ix = by_addr.get(a) or {}
        rows.append({
            "addr": a,
            "name": r.get("name"),
            "family": r.get("family"),
            "path": r.get("path"),
            "size": r.get("size"),
            "part": r.get("part"),
            "unit": ix.get("unit"),
            "emitted": ix.get("emitted"),
            "first_diff": ix.get("first_diff"),
            "ours_size": ix.get("ours_size"),
        })
    return rows


def _bucket(rows, n, pred, rng):
    pool = [r for r in rows if pred(r)]
    if len(pool) <= n:
        return pool
    return rng.sample(pool, n)


def select_pilot(out_path):
    rows = load_rows()
    rng = random.Random(20261112)
    picked = []
    seen = set()

    def take(n, pred):
        for r in _bucket(rows, n, pred, rng):
            if r["addr"] in seen:
                continue
            seen.add(r["addr"])
            picked.append(r)

    # ROI order: W3 (if/else direction) dominates; then W6 micro, W5 order,
    # const-expression, W7 loop; plus a STRUCTURAL if/else probe.
    take(100, lambda r: r["family"] == "JCC_INVERT")
    take(15, lambda r: r["family"] == "JCC_INVERT_PLUS")
    take(20, lambda r: r["family"] == "TWO_FOUR_INSNS")
    take(10, lambda r: r["family"] == "ONE_INSN")
    take(12, lambda r: r["family"] == "TOKEN_MISMATCH")
    take(8, lambda r: r["family"] == "ROTATE_EXACT")
    take(5, lambda r: r["family"] == "REORDER")
    take(8, lambda r: r["family"] == "JCC_LAYOUT_PLUS")
    take(15, lambda r: r["family"] == "STRUCTURAL" and
         r["path"] in ("branch_order", "const_fold", "ret_norm",
                       "regalloc", "eval_order", "codegen_shape"))
    take(7, lambda r: r["path"] == "const_fold")
    take(10, lambda r: r["path"] == "branch_polarity")
    picked = picked[:200]
    with open(out_path, "w", encoding="utf-8") as f:
        json.dump(picked, f, indent=1, ensure_ascii=False)
    print("[select] pilot %d functions -> %s" % (len(picked), out_path))
    fam = {}
    for r in picked:
        fam[r["family"]] = fam.get(r["family"], 0) + 1
    print("[select] families:", json.dumps(fam, sort_keys=True))
    return picked


def select_all(out_path, exclude_path=None):
    rows = load_rows()
    exclude = set()
    if exclude_path and os.path.exists(exclude_path):
        for r in json.load(open(exclude_path, encoding="utf-8")):
            exclude.add(r["addr"])
    picked = [r for r in rows if r["addr"] not in exclude]
    with open(out_path, "w", encoding="utf-8") as f:
        json.dump(picked, f, indent=1, ensure_ascii=False)
    print("[select] all %d functions (excluded %d) -> %s"
          % (len(picked), len(exclude), out_path))


# --------------------------------------------------------------- unit patching

def find_block(cpp_text, tag):
    """Locate the emitted function block containing `fn 0x<tag>`."""
    i = cpp_text.find("fn 0x%s" % tag)
    if i < 0:
        return None
    start = cpp_text.rfind("// GENERATED", 0, i)
    if start < 0:
        return None
    nxt = cpp_text.find("// GENERATED", i)
    end = nxt if nxt >= 0 else len(cpp_text)
    block = cpp_text[start:end]
    bo = block.find("\n{\n")
    if bo < 0:
        return None
    be = block.rstrip().rfind("\n}")
    if be < 0 or be <= bo:
        return None
    body = block[bo + 3:be + 1]
    if not body.endswith("\n"):
        body += "\n"
    return {"start": start, "end": end, "bo": bo + 3, "be": be + 1,
            "block": block, "body": body,
            "head": block[:bo].split("\n")[-1].strip()}


def head_ident(head):
    """(cls|None, method) from an emitted function head line."""
    i = head.find("(")
    if i < 0:
        return None, None
    pre = head[:i].rstrip()
    m = re.search(r"(?:([A-Za-z_]\w*)::)?(~?[A-Za-z_]\w*)$", pre)
    if not m:
        return None, None
    return m.group(1), m.group(2)


def head_ret_type(head):
    """Return-type spelling from an emitted function head line."""
    i = head.find("(")
    if i < 0:
        return "int"
    pre = head[:i].rstrip()
    m = re.search(r"(?:([A-Za-z_]\w*)::)?(~?[A-Za-z_]\w*)$", pre)
    ret = pre[:m.start()].strip() if m else pre
    ret = re.sub(r"\b__(?:stdcall|cdecl|fastcall|thiscall)\b", "", ret)
    return ret.strip() or "int"


def parse_hpp_members(hpp_path, cls):
    """Member-name set of `cls` as declared in the pilot hpp."""
    if not os.path.exists(hpp_path):
        return None
    text = open(hpp_path, encoding="utf-8", errors="replace").read()
    m = re.search(r"\b(?:class|struct)\s+%s\b[^\{]*\{" % re.escape(cls), text)
    if not m:
        return None
    depth = 1
    i = m.end()
    start = i
    while i < len(text) and depth:
        if text[i] == "{":
            depth += 1
        elif text[i] == "}":
            depth -= 1
        i += 1
    body = text[start:i - 1]
    members = set()
    for ln in body.split("\n"):
        if "(" in ln or ";" not in ln:
            continue
        mm = re.match(r"^\s+[A-Za-z_][\w \t\*]*?"
                      r"\b([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;", ln)
        if mm:
            members.add(mm.group(1))
    return members


def head_params(head, reg):
    """[(type, name)] parsed from the emitted head; class-typed name set."""
    i = head.find("(")
    j = head.rfind(")")
    if i < 0 or j < 0:
        return [], set()
    args = head[i + 1:j].strip()
    out = []
    if args:
        for a in args.split(","):
            a = a.strip()
            mm = re.match(r"^(.*?)([A-Za-z_]\w*)$", a)
            if mm:
                out.append((mm.group(1).strip(), mm.group(2)))
    ct = {"this"}
    for t, n in out:
        base = t.replace("*", "").replace("const", "").strip()
        if base in reg.classes:
            ct.add(n)
    return out, ct


# ---------------------------------------------------------------- trial runner

def _compare(orig_path, ours_art):
    sa, _ = dmod.load_orig_side(orig_path)
    sb = dmod.Side("ours", bytes.fromhex(ours_art["bytes_hex"]), 0,
                   ours_art["size"], "obj",
                   relocs={rl["off"]: {"type": rl["type"],
                                       "key": rl["sym_key"]}
                           for rl in ours_art["relocs"]})
    return dmod.compare(sa, sb, verbose=False)


def _first_diff_dict(first):
    if first and first[0] and first[1]:
        return {"orig": "+%d %s" % (first[0]["off"], first[0]["disasm"]),
                "ours": "+%d %s" % (first[1]["off"], first[1]["disasm"])}
    return None


def run_one(row, outdir, reg, keep_trials=False):
    addr = row["addr"]
    tag = addr[2:].upper()
    part_dir = os.path.join(ASWEEP, row["part"], "part_00")
    rec = {"addr": addr, "name": row.get("name"), "family": row.get("family"),
           "path": row.get("path"), "verdict": "NO_HIT", "accepted": None,
           "variants": [], "baseline": None}
    if not os.path.isdir(part_dir):
        rec.update(verdict="SKIP_NO_PART")
        return rec
    # locate the emitted block
    unit_file = None
    cpp_text = None
    blk = None
    for fn in sorted(os.listdir(part_dir)):
        if not fn.endswith(".cpp"):
            continue
        txt = open(os.path.join(part_dir, fn), encoding="utf-8",
                   errors="replace").read()
        b = find_block(txt, tag)
        if b:
            unit_file = fn
            cpp_text = txt
            blk = b
            break
    if not blk:
        rec.update(verdict="SKIP_NO_BLOCK")
        return rec
    cls, method = head_ident(blk["head"])
    if not method:
        rec.update(verdict="SKIP_NO_HEAD")
        return rec
    rec.update(cls=cls, method=method, unit=os.path.splitext(unit_file)[0],
               head=blk["head"])
    # baseline verdict from the stored artifacts (no recompile)
    orig_path = os.path.join(part_dir, "orig_%s.json" % tag)
    ours_path = os.path.join(part_dir, "ours_%s.json" % tag)
    if not (os.path.exists(orig_path) and os.path.exists(ours_path)):
        rec.update(verdict="SKIP_NO_ARTIFACT")
        return rec
    try:
        base_art = json.load(open(ours_path, encoding="utf-8"))
        ok0, first0 = _compare(orig_path, base_art)
    except Exception as e:                              # noqa: BLE001
        rec.update(verdict="SKIP_BAD_ARTIFACT", note=str(e)[:160])
        return rec
    rec["baseline"] = "MATCH" if ok0 else "MISMATCH"
    rec["baseline_first_diff"] = _first_diff_dict(first0)
    if ok0:
        # already matching in this context -- nothing to trial
        rec.update(verdict="BASELINE_MATCH")
        return rec
    # candidate generation
    body_text = blk["body"]
    meta = {"family": row.get("family"), "path": row.get("path"),
            "head_ret": head_ret_type(blk["head"])}
    variants = CV.generate(CV._split_lines(body_text), meta)
    if not variants:
        rec.update(verdict="NO_VARIANT")
        return rec
    rec["variants_generated"] = [v.vid for v in variants]
    # rule-compliance baseline (six rules: variants must not change it)
    hpp = os.path.join(part_dir, "include",
                       os.path.splitext(unit_file)[0] + ".hpp")
    members = parse_hpp_members(hpp, cls) if cls else set()
    _params, ct = head_params(blk["head"], reg)
    try:
        base_rep = checker.check_function(cls, body_text, ct, members)
        base_viol = len(base_rep.violations)
    except Exception:                                   # noqa: BLE001
        base_viol = 0
    # trial directory for this function
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
        vrep = None
        try:
            vrep = checker.check_function(cls, vbody, ct, members)
        except Exception:                               # noqa: BLE001
            vrep = None
        nviol = len(vrep.violations) if vrep is not None else 0
        vrec = {"vid": v.vid, "kind": v.kind, "desc": v.desc,
                "checker": ("clean" if nviol <= base_viol
                            else "NEW_VIOLATION:%d" % (nviol - base_viol))}
        if nviol > base_viol:
            vrec["result"] = "REJECTED_RULE"
            rec["variants"].append(vrec)
            continue
        new_cpp = (cpp_text[:blk["start"]] +
                   blk["block"][:blk["bo"]] + vbody +
                   blk["block"][blk["be"]:] +
                   cpp_text[blk["end"]:])
        with open(tunit, "w", encoding="utf-8", newline="\n") as f:
            f.write(new_cpp)
        t0 = time.time()
        cr = decompile.era_compile(tunit, tdir)
        vrec["seconds"] = round(time.time() - t0, 2)
        if cr.returncode != 0:
            err = (cr.stdout + cr.stderr).strip().splitlines()
            vrec["result"] = "COMPILE_FAIL"
            vrec["error"] = "; ".join(x for x in err
                                      if "error" in x.lower())[:200]
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
            ok, first = _compare(orig_path, art)
        except Exception as e:                          # noqa: BLE001
            vrec["result"] = "DIFF_FAIL"
            vrec["error"] = str(e)[:200]
            rec["variants"].append(vrec)
            continue
        if ok:
            vrec["result"] = "MATCH"
            vrec["ours_size"] = art["size"]
            rec["variants"].append(vrec)
            accepted = (v, vbody, art)
            break
        vrec["result"] = "MISMATCH"
        vrec["first_diff"] = _first_diff_dict(first)
        vrec["ours_size"] = art["size"]
        rec["variants"].append(vrec)
    if not keep_trials:
        shutil.rmtree(tdir, ignore_errors=True)
    if accepted:
        v, vbody, art = accepted
        rec.update(verdict="MATCH", accepted=v.vid, accepted_kind=v.kind,
                   accepted_desc=v.desc, ours_size=art["size"])
        rec["accepted_body"] = vbody.rstrip("\n")
        adir = os.path.join(outdir, "accepted")
        os.makedirs(adir, exist_ok=True)
        new_cpp = (cpp_text[:blk["start"]] +
                   blk["block"][:blk["bo"]] + vbody +
                   blk["block"][blk["be"]:] +
                   cpp_text[blk["end"]:])
        with open(os.path.join(adir, "%s_%s.cpp" % (tag, v.vid)), "w",
                  encoding="utf-8", newline="\n") as f:
            f.write(new_cpp)
    else:
        rec["verdict"] = "NO_HIT"
    return rec


# ------------------------------------------------------------------ part loop

def summarize(results):
    vc = {}
    hits = {}
    tries = {}
    for r in results:
        vc[r["verdict"]] = vc.get(r["verdict"], 0) + 1
        key = r.get("family") or "?"
        tries[key] = tries.get(key, 0) + 1
        if r["verdict"] == "MATCH":
            hits[key] = hits.get(key, 0) + 1
    return {"verdicts": vc, "by_family_total": tries, "by_family_hits": hits}


def commit_part(paths, msg):
    add = ["git", "add", "-f", "--"] + paths
    if subprocess.call(add, cwd=ROOT, stdout=subprocess.DEVNULL,
                       stderr=subprocess.DEVNULL) != 0:
        return ("add", 1)
    rc = subprocess.call(["git", "commit", "-m", msg, "--"] + paths,
                         cwd=ROOT, stdout=subprocess.DEVNULL,
                         stderr=subprocess.DEVNULL)
    return ("commit", rc)


def run(args):
    rows = json.load(open(args.batch, encoding="utf-8"))
    if args.max:
        rows = rows[:args.max]
    outroot = os.path.join(RUNROOT, args.run)
    partsdir = os.path.join(outroot, "parts")
    os.makedirs(partsdir, exist_ok=True)
    timings = os.path.join(outroot, "timings.jsonl")
    reg = Registry.get()
    plan = [(i // args.chunk, rows[i:i + args.chunk])
            for i in range(0, len(rows), args.chunk)]
    print("[plan] %d functions -> %d parts of %d"
          % (len(rows), len(plan), args.chunk))
    todo = []
    for pi, ents in plan:
        if pi < args.start_part:
            continue
        pdir = os.path.join(outroot, "p%03d" % pi)
        if os.path.exists(os.path.join(pdir, "part_report.json")):
            continue
        todo.append((pi, ents))
    if args.max_parts:
        todo = todo[:args.max_parts]
    print("[plan] %d parts to run" % len(todo))
    fails = 0
    for idx, (pi, ents) in enumerate(todo):
        tag = "%s_p%03d" % (args.tag, pi)
        pdir = os.path.join(outroot, "p%03d" % pi)
        os.makedirs(pdir, exist_ok=True)
        part_file = os.path.join(partsdir, tag + ".json")
        with open(part_file, "w", encoding="utf-8") as f:
            json.dump(ents, f, indent=1, ensure_ascii=False)
        print("[part %d/%d] %s (%d fns) ..."
              % (idx + 1, len(todo), tag, len(ents)), flush=True)
        t0 = time.time()
        results = []
        for row in ents:
            try:
                r = run_one(row, pdir, reg)
            except Exception as e:                      # noqa: BLE001
                r = {"addr": row.get("addr"), "family": row.get("family"),
                     "path": row.get("path"), "verdict": "INTERNAL_ERROR",
                     "note": "%s: %s" % (type(e).__name__, e)}
            results.append(r)
            print("  %-10s %-22s %-12s %s"
                  % (r["addr"], (r.get("name") or "")[:22],
                     r["verdict"],
                     r.get("accepted") or
                     ",".join("%s=%s" % (v["vid"], v["result"])
                              for v in r.get("variants", []))[:110]),
                  flush=True)
        dt = time.time() - t0
        summary = summarize(results)
        with open(os.path.join(pdir, "part_report.json"), "w",
                  encoding="utf-8") as f:
            json.dump({"summary": summary, "results": results}, f,
                      indent=1, ensure_ascii=False)
        with open(RESULTS, "a", encoding="utf-8") as f:
            for r in results:
                f.write(json.dumps(r, ensure_ascii=False) + "\n")
        rec = {"part": pi, "n": len(ents), "seconds": round(dt, 1),
               "summary": summary}
        with open(timings, "a", encoding="utf-8") as f:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")
        ok = summary["verdicts"].get("INTERNAL_ERROR", 0) == 0
        if not ok:
            fails += 1
        print("  part done %.1fs %s" % (dt, summary["verdicts"]), flush=True)
        if not args.no_commit:
            msg = ("decomp_sys cw4 %s %d fns -- %s"
                   % (tag, len(ents),
                      " ".join("%s=%d" % kv
                               for kv in sorted(summary["verdicts"].items()))))
            paths = [os.path.join(pdir, "part_report.json"), part_file,
                     RESULTS, timings]
            acc = os.path.join(pdir, "accepted")
            if os.path.isdir(acc):
                paths.append(acc)
            kind, rc2 = commit_part(paths, msg)
            print("  %s rc=%s" % (kind, rc2), flush=True)
        if fails >= 3:
            print("[abort] 3 consecutive part failures", flush=True)
            return 2
    print("[done] all parts processed")
    return 0


# --------------------------------------------------------------------- report

def report(args):
    outroots = [os.path.join(RUNROOT, x) for x in args.report.split(",")]
    agg = {}
    variant_agg = {}
    total = 0
    hits = 0
    verdicts = {}

    def bump(d, k, n=1):
        d[k] = d.get(k, 0) + n

    for outroot in outroots:
        for d in sorted(os.listdir(outroot)):
            p = os.path.join(outroot, d, "part_report.json")
            if not os.path.exists(p):
                continue
            rep = json.load(open(p, encoding="utf-8"))
            for r in rep["results"]:
                total += 1
                bump(verdicts, r["verdict"])
                if r["verdict"] == "MATCH":
                    hits += 1
                for fam in {(r.get("family") or "?"),
                            "path:" + (r.get("path") or "?")}:
                    a = agg.setdefault(fam, {"n": 0, "hit": 0, "novar": 0})
                    a["n"] += 1
                    if r["verdict"] == "MATCH":
                        a["hit"] += 1
                    if r["verdict"] == "NO_VARIANT":
                        a["novar"] += 1
                for v in r.get("variants", []):
                    key = (v["vid"], v["result"])
                    bump(variant_agg, key)
    summary = {"total": total, "hits": hits,
               "hit_rate_pct": round(100.0 * hits / max(1, total), 1),
               "verdicts": verdicts}
    print(json.dumps(summary, indent=1))
    print("\n%--16s %5s %5s %6s %6s" % ("class", "n", "hit", "rate", "novar"))
    for fam in sorted(agg):
        a = agg[fam]
        print("%-18s %5d %5d %5.1f%% %5d"
              % (fam, a["n"], a["hit"],
                 100.0 * a["hit"] / max(1, a["n"]), a["novar"]))
    print("\nvariant outcomes:")
    for (vid, res), n in sorted(variant_agg.items()):
        print("  %-24s %-14s %d" % (vid, res, n))
    if args.md:
        lines = []
        lines.append("## CW4 aggregate (`%s`)\n" % args.report)
        lines.append("| metric | value |")
        lines.append("|---|---:|")
        lines.append("| trialed functions | %d |" % total)
        lines.append("| MATCH (variant accepted) | **%d** |" % hits)
        lines.append("| hit rate | **%.1f%%** |"
                     % (100.0 * hits / max(1, total)))
        for k in sorted(verdicts):
            lines.append("| verdict %s | %d |" % (k, verdicts[k]))
        lines.append("\n| class (family / path) | n | hit | rate | no-variant |")
        lines.append("|---|---:|---:|---:|---:|")
        for fam in sorted(agg):
            a = agg[fam]
            lines.append("| %s | %d | %d | %.1f%% | %d |"
                         % (fam, a["n"], a["hit"],
                            100.0 * a["hit"] / max(1, a["n"]),
                            a["novar"]))
        lines.append("\n| variant | outcome | n |")
        lines.append("|---|---|---:|")
        for (vid, res), n in sorted(variant_agg.items()):
            lines.append("| %s | %s | %d |" % (vid, res, n))
        with open(args.md, "w", encoding="utf-8", newline="\n") as f:
            f.write("\n".join(lines) + "\n")
        print("\nmd -> %s" % args.md)
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--select", choices=["pilot", "all"], default=None)
    ap.add_argument("--exclude", default=None)
    ap.add_argument("--out-batch", default=None)
    ap.add_argument("--run", default=None)
    ap.add_argument("--batch", default=None)
    ap.add_argument("--tag", default="cw4")
    ap.add_argument("--chunk", type=int, default=20)
    ap.add_argument("--start-part", type=int, default=0)
    ap.add_argument("--max-parts", type=int, default=0)
    ap.add_argument("--max", type=int, default=0)
    ap.add_argument("--no-commit", action="store_true")
    ap.add_argument("--report", default=None)
    ap.add_argument("--md", default=None)
    args = ap.parse_args()
    if args.select:
        out = args.out_batch or os.path.join(
            STATE, "cw4_pilot.json" if args.select == "pilot"
            else "cw4_all.json")
        if args.select == "pilot":
            select_pilot(out)
        else:
            select_all(out, args.exclude)
        return 0
    if args.report:
        return report(args)
    if not args.run or not args.batch:
        ap.error("--run and --batch required")
    return run(args)


if __name__ == "__main__":
    sys.exit(main())
