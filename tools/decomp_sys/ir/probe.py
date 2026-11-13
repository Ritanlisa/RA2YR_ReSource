#!/usr/bin/env python3
"""probe.py -- IR value-layer probe (does NOT write the ledger).

Experiment shape (matching the request):

    40 value-layer NG functions  (ledger pathology in const_fold /
    extern_reloc / cc_mismatch / width_mismatch / ret_norm / signedness)
        -> normal text pipeline (baseline compile + diffasm verdict)
        -> parse emitted body -> bind against the function's disassembly
        -> rewrite correctable literal / subscript / member / global nodes
        -> emit IR cpp -> compile -> diffasm
        -> count MATCH flips and report per-transform / per-family hit rate

Everything is written under ``.omo/agents/ir_build/probe`` (gitignored
experiment artifacts).  The ledger is never touched; ``src/`` and the text
pipeline are never modified.
"""
import argparse
import hashlib
import json
import os
import re
import sys
import traceback
from collections import Counter, defaultdict, OrderedDict

HERE = os.path.dirname(os.path.abspath(__file__))
DECOMP = os.path.abspath(os.path.join(HERE, ".."))
ROOT = os.path.abspath(os.path.join(DECOMP, "..", ".."))
if DECOMP not in sys.path:
    sys.path.insert(0, DECOMP)
if ROOT not in sys.path:
    sys.path.insert(0, ROOT)

import decompile                      # noqa: E402
import pseudo                         # noqa: E402
import batch_run                      # noqa: E402
from registry_ext import Registry     # noqa: E402
from passes import ClassView          # noqa: E402
from ir import parser as ir_parser    # noqa: E402
from ir import bind as ir_bind        # noqa: E402
from ir import rewrite as ir_rewrite  # noqa: E402

OUT_ROOT = os.path.join(ROOT, ".omo", "agents", "ir_build")
PROBE_DIR = os.path.join(OUT_ROOT, "probe")

FAMILIES = OrderedDict([
    ("const_fold", 12),
    ("extern_reloc", 8),
    ("width_mismatch", 8),
    ("signedness", 5),
    ("ret_norm", 4),
    ("cc_mismatch", 3),
])
FAMILY_KEY = {
    "const_fold": "const_fold",
    "extern_reloc": "extern_reloc",
    "width_mismatch": "width_mismatch",
    "signedness": "signedness",
    "ret_norm": "ret_norm",
    "cc_mismatch": "cc_mismatch",
}


def _addr_key(a):
    return a.lower().replace("0x", "").lstrip("0").upper()


def load_ledger(path, attempts=8, delay=2.0):
    """Read the ledger tolerantly: a concurrent batch writer rewrites it in
    place, so a read can catch a torn/partial file."""
    import time
    last = None
    for i in range(attempts):
        try:
            with open(path, encoding="utf-8") as f:
                return json.load(f)
        except (OSError, ValueError) as e:
            last = e
            if i + 1 < attempts:
                time.sleep(delay)
    raise last


def select_addresses(ledger, backups=6):
    """Deterministic md5-ordered sample per pathology family (+ backups)."""
    byfam = defaultdict(list)
    for a, v in ledger.items():
        if v.get("status") != "NG":
            continue
        m = re.search(r"MISMATCH/(\w+)", v.get("note") or "")
        if not m:
            continue
        fam = m.group(1)
        if fam not in FAMILY_KEY:
            continue
        byfam[fam].append((hashlib.md5(a.lower().encode()).hexdigest(), a, v))
    out = []
    for fam, quota in FAMILIES.items():
        rows = sorted(byfam.get(fam) or [])
        for h, a, v in rows[:quota + backups]:
            out.append({"addr": a, "fam": fam, "quota": quota,
                        "ledger_name": v.get("name"),
                        "ledger_diff": v.get("first_diff")})
    return out


def load_name_addr():
    p = os.path.join(ROOT, "anchors", "ida_global_types.json")
    name_addr = {}
    if not os.path.exists(p):
        return name_addr
    data = json.load(open(p, encoding="utf-8"))
    for a, rec in data.items():
        if not isinstance(rec, dict):
            continue
        nm = rec.get("name")
        if not nm or not a.lower().startswith("0x"):
            continue
        try:
            name_addr.setdefault(nm, int(a, 16))
        except ValueError:
            pass
    return name_addr


def find_unit_hpp(part_dir, unit):
    p = os.path.join(part_dir, "include", unit + ".hpp")
    return p if os.path.exists(p) else None


def baseline_cpp_for(part_dir, addr, unit):
    """The cpp the baseline compiled for this function (unit or isolated).

    ``batch_run`` compiles one cpp per unit; when a unit fails, the fallback
    writes a per-function cpp ``<unit>_<addr>.cpp`` with its **own** isolated
    hpp.  The IR cpp must include the same hpp or the struct layout/typing
    under test silently changes.
    """
    tag = addr.lower().replace("0x", "")
    cands = [os.path.join(part_dir, "%s_%s.cpp" % (unit, tag)),
             os.path.join(part_dir, unit + ".cpp")]
    for cpp in cands:
        if os.path.exists(cpp):
            try:
                txt = open(cpp, encoding="utf-8", errors="replace").read(2000)
            except OSError:
                continue
            m = re.search(r'#include "([^"]+\.hpp)"', txt)
            if m:
                return cpp, os.path.splitext(m.group(1))[0]
    return None, unit



def ensure_decls(hpp_path, decls):
    if not decls:
        return
    txt = open(hpp_path, encoding="utf-8", errors="replace").read() \
        if hpp_path and os.path.exists(hpp_path) else ""
    missing = [d for d in decls if d not in txt]
    if not missing:
        return
    with open(hpp_path, "a", encoding="utf-8", newline="\n") as f:
        f.write("\n// ---- ir.probe value-layer declarations\n")
        for d in missing:
            f.write(d + "\n")


def parse_failure_text(body, e):
    pos = e.pos if e.pos is not None else 0
    return {"kind": e.kind, "msg": str(e),
            "context": body[max(0, pos - 40):pos + 60]}


def ir_transform(addr, reg, idx, part_dir, name_addr, member_cache, hpp_name):
    """Run parse -> bind -> rewrite on the emitted body.  Returns a dict."""
    rec = {"addr": addr, "parse": None, "edits": [], "decls": [],
           "bind": {}, "body_before": None, "body_after": None,
           "category": None}
    ex = pseudo.fetch(addr)
    ctx, unit = decompile.run_function(addr, reg, ClassView(), idx)
    rec["unit"] = unit
    rec["cls"] = ctx.sig.get("cls")
    rec["method"] = ctx.sig.get("method")
    body = "\n".join(ctx.lines)
    rec["body_before"] = body
    try:
        stmts = ir_parser.parse_statements(body)
    except ir_parser.ParseError as e:
        rec["parse"] = "fail"
        rec["parse_error"] = parse_failure_text(body, e)
        return rec, ctx
    rec["parse"] = "ok"
    hpp = find_unit_hpp(part_dir, hpp_name)
    mm = member_cache.get(hpp_name)
    if mm is None:
        mm = {}
        if hpp:
            mm = ir_bind.parse_hpp_layout(
                open(hpp, encoding="utf-8", errors="replace").read())
        member_cache[hpp_name] = mm
    rep = ir_bind.bind(stmts, body, ex.disasm_lines, member_map=mm,
                       class_name=ctx.sig.get("cls"),
                       used_globals=ctx.used_globals,
                       reader=ir_bind.DataReader(), name_addr=name_addr)
    rec["bind"] = rep.summary()
    new_body, edits, decls = ir_rewrite.rewrite(rep, body)
    rec["edits"] = [{"cat": e.category,
                     "old": body[e.start:e.end][:160],
                     "new": e.text[:200]} for e in edits]
    rec["decls"] = decls
    rec["body_after"] = new_body
    rec["categories"] = sorted(set(e.category for e in edits))
    if rec["categories"]:
        rec["category"] = "+".join(rec["categories"])
    ctx.lines = new_body.splitlines()
    return rec, ctx


def compile_ir(rec, ctx, part_dir, orig_art, reg, idx, hpp_name):
    """Emit the IR cpp, compile it, extract the function and diffasm-compare."""
    addr = rec["addr"]
    unit = rec["unit"]
    cls = ctx.sig.get("cls")
    method = ctx.sig.get("method")
    tag = _addr_key(addr)
    base = "%s_ir_%s" % (re.sub(r"[^A-Za-z0-9_]", "_", unit), tag)
    cpp = os.path.join(part_dir, base + ".cpp")
    with open(cpp, "w", encoding="utf-8", newline="\n") as f:
        f.write(decompile.emit_cpp(ctx, unit, hpp_name=hpp_name) + "\n")
    hpp = find_unit_hpp(part_dir, hpp_name)
    ensure_decls(hpp, rec.get("decls") or [])
    cr = decompile.era_compile(cpp, part_dir)
    if cr.returncode != 0:
        err = [x for x in (cr.stdout + cr.stderr).splitlines()
               if "error" in x.lower()]
        rec["ir_verdict"] = "COMPILE_FAIL"
        rec["ir_note"] = ("; ".join(err)[:300] or
                          "cl rc=%d" % cr.returncode)
        return
    obj = cpp[:-4] + ".obj"
    try:
        ours = batch_run.extract_fn_from_obj(obj, cls, method)
    except SystemExit as e:
        rec["ir_verdict"] = "OBJ_EXTRACT_FAIL"
        rec["ir_note"] = str(e)[:300]
        return
    from tools.codegen_match import diffasm as dmod
    sa, _ = dmod.load_orig_side(orig_art)
    sb = dmod.Side("ours", bytes.fromhex(ours["bytes_hex"]), 0,
                   ours["size"], "obj",
                   relocs={r["off"]: {"type": r["type"],
                                      "key": r["sym_key"]}
                           for r in ours["relocs"]})
    ok, first = dmod.compare(sa, sb, verbose=False)
    rec["ir_size"] = ours["size"]
    if ok:
        rec["ir_verdict"] = "MATCH"
        rec["ir_note"] = "%dB" % ours["size"]
    else:
        rec["ir_verdict"] = "MISMATCH"
        if first and first[0] and first[1]:
            rec["ir_first_diff"] = {
                "orig": "+%d %s" % (first[0]["off"], first[0]["disasm"]),
                "ours": "+%d %s" % (first[1]["off"], first[1]["disasm"])}
            rec["ir_pathology"] = batch_run.classify_diff(first)
        rec["ir_note"] = "orig %dB ours %dB" % (sa.size, ours["size"])


def run_baseline(addrs, out_dir=PROBE_DIR):
    os.makedirs(out_dir, exist_ok=True)
    reg = Registry.get()
    idx = pseudo.load_index()
    part_dir = os.path.join(out_dir, "part_00")
    print("=== baseline: %d functions ===" % len(addrs))
    results, _cv = batch_run.run_part([a.lower() for a in addrs], {},
                                      part_dir, reg, idx)
    return {r["addr"].lower(): r for r in results.values()}, part_dir


def run_ir(addrs, part_dir, baseline_by_addr, checkpoint=None):
    reg = Registry.get()
    idx = pseudo.load_index()
    name_addr = load_name_addr()
    member_cache = {}
    recs = []
    for addr in addrs:
        al = addr.lower()
        base = baseline_by_addr.get(al) or {}
        rec = {"addr": al, "baseline": base.get("verdict"),
               "baseline_pathology": base.get("pathology"),
               "baseline_first_diff": base.get("first_diff"),
               "emitted": base.get("emitted"), "unit": base.get("unit"),
               "ir_verdict": "SKIP", "ir_note": "baseline not MISMATCH"}
        recs.append(rec)
        if base.get("verdict") != "MISMATCH":
            continue
        tag = _addr_key(al)
        orig_art = os.path.join(part_dir, "orig_%s.json" % tag)
        if not os.path.exists(orig_art):
            rec["ir_note"] = "no orig artifact"
            continue
        try:
            base_cpp, hpp_name = baseline_cpp_for(part_dir, al, rec.get("unit"))
            rec["baseline_cpp"] = base_cpp
            rec["hpp_name"] = hpp_name
            rec2, ctx = ir_transform(al, reg, idx, part_dir, name_addr,
                                     member_cache, hpp_name)
        except Exception:
            rec["ir_verdict"] = "TRANSFORM_FAIL"
            rec["ir_note"] = traceback.format_exc(limit=2).splitlines()[-1]
            continue
        rec.update({k: v for k, v in rec2.items()
                    if k in ("parse", "bind", "edits", "decls", "categories",
                             "category", "parse_error", "body_before",
                             "body_after")})
        if rec2["parse"] != "ok":
            rec["ir_verdict"] = "PARSE_FAIL"
            rec["ir_note"] = (rec2.get("parse_error") or {}).get("msg", "")
            continue
        if not rec2["edits"]:
            rec["ir_verdict"] = "NO_EDITS"
            rec["ir_note"] = "binding produced no correctable rewrite"
            continue
        try:
            compile_ir(rec, ctx, part_dir, orig_art, reg, idx,
                       rec.get("hpp_name") or rec.get("unit"))
        except Exception:
            rec["ir_verdict"] = "COMPILE_FAIL"
            rec["ir_note"] = traceback.format_exc(limit=2).splitlines()[-1]
        print("[ir] %-10s %-14s %-14s %s" % (
            al, rec["baseline"], rec["ir_verdict"],
            ("+" + rec["category"]) if rec.get("category") else ""))
        if checkpoint:
            checkpoint(recs)
    return recs


def summarize(report):
    ir = report["ir"]
    base_ng = [r for r in ir if r["baseline"] == "MISMATCH"]
    flipped = [r for r in base_ng if r["ir_verdict"] == "MATCH"]
    tried = [r for r in base_ng if r["ir_verdict"] in
             ("MATCH", "MISMATCH", "COMPILE_FAIL")]
    byfam = Counter()
    fam_flip = Counter()
    for r in base_ng:
        f = r.get("baseline_pathology") or "?"
        byfam[f] += 1
        if r["ir_verdict"] == "MATCH":
            fam_flip[f] += 1
    cats = Counter()
    for r in base_ng:
        for c in (r.get("categories") or []):
            cats[c] += 1
    cat_flip = Counter()
    for r in flipped:
        for c in (r.get("categories") or []):
            cat_flip[c] += 1
    return {
        "selected": len(ir),
        "baseline_ng": len(base_ng),
        "baseline_other": len(ir) - len(base_ng),
        "ir_tried": len(tried),
        "flips": len(flipped),
        "flip_rate_of_baseline_ng_pct": round(100.0 * len(flipped) /
                                             max(1, len(base_ng)), 1),
        "flip_rate_of_tried_pct": round(100.0 * len(flipped) /
                                       max(1, len(tried)), 1),
        "by_family": dict(byfam),
        "family_flips": dict(fam_flip),
        "edit_categories": dict(cats),
        "category_flips": dict(cat_flip),
        "verdicts": dict(Counter(r["ir_verdict"] for r in ir)),
    }


def write_markdown(report, path):
    s = summarize(report)
    lines = []
    A = lines.append
    A("# IR 值层旁挂原型 —— 40 件值层 NG 实测")
    A("")
    A("日期：2026-11-13 · 工具：`tools/decomp_sys/ir/{parser,bind,rewrite}.py`")
    A("")
    A("## 结果")
    A("")
    A("| 指标 | 数值 |")
    A("|---|---|")
    A("| 候选选择 | %d（按病理族配额，md5 确定性抽样） |" % s["selected"])
    A("| 基线复跑仍为 NG | %d |" % s["baseline_ng"])
    A("| IR 实际跑通（编译+对拍） | %d |" % s["ir_tried"])
    A("| **翻 MATCH** | **%d** |" % s["flips"])
    A("| 命中率（占基线 NG） | **%.1f%%** |" % s["flip_rate_of_baseline_ng_pct"])
    A("| 命中率（占实际跑通） | %.1f%% |" % s["flip_rate_of_tried_pct"])
    A("")
    A("## 分族")
    A("")
    A("| 病理 | 基线 NG | IR 翻 MATCH | 命中率 |")
    A("|---|---|---|---|")
    for fam, n in sorted(s["by_family"].items(), key=lambda kv: -kv[1]):
        fl = s["family_flips"].get(fam, 0)
        A("| %s | %d | %d | %.1f%% |" % (fam, n, fl,
                                         100.0 * fl / max(1, n)))
    A("")
    A("## 变换使用与命中")
    A("")
    A("| 变换 | 应用函数数 | 翻 MATCH |")
    A("|---|---|---|")
    for c, n in sorted(s["edit_categories"].items(), key=lambda kv: -kv[1]):
        A("| %s | %d | %d |" % (c, n, s["category_flips"].get(c, 0)))
    A("")
    A("## 逐函数明细")
    A("")
    A("| # | 地址 | 基线病理 | 基线首差 | IR verdict | IR 首差 | 变换 |")
    A("|---|---|---|---|---|---|---|")
    for i, r in enumerate(report["ir"], 1):
        bd = (r.get("baseline_first_diff") or {}).get("orig") or ""
        idd = (r.get("ir_first_diff") or {}).get("ours") or ""
        A("| %d | %s | %s | %s | %s | %s | %s |" % (
            i, r["addr"], r.get("baseline_pathology") or "-",
            bd.replace("|", "/")[:60],
            r.get("ir_verdict") or "-", idd.replace("|", "/")[:60],
            r.get("category") or "-"))
    A("")
    A("## 说明")
    A("")
    A("- probe 模式：只写 `.omo/agents/ir_build/`，不写 ledger、不改 `src/`、")
    A("  不改 `tools/decomp_sys/decompile.py` / `passes.py`。")
    A("- 基线 = 当前 HEAD 的文本管线（`batch_run.run_part`，无 ledger 写入）。")
    A("- IR 路径 = 同一管线输出 → parse → bind → rewrite → 单函数 cpp → era cl →")
    A("  COFF 抽取 → diffasm。")
    A("- `NO_EDITS` = 绑定没有产生 correctable 重写（多为结构层/类型层病理，")
    A("  值层没有可回收事实）。")
    with open(path, "w", encoding="utf-8", newline="\n") as f:
        f.write("\n".join(lines) + "\n")
    return s


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--addrs", nargs="*", default=None)
    ap.add_argument("--limit", type=int, default=40)
    ap.add_argument("--out", default=PROBE_DIR)
    ap.add_argument("--no-ir", action="store_true")
    ap.add_argument("--from-selection", default=None)
    args = ap.parse_args()

    if args.addrs:
        sel = [{"addr": a.lower(), "fam": "manual", "quota": len(args.addrs)}
               for a in args.addrs]
        candidates = [e["addr"] for e in sel]
        chosen = candidates
    elif args.from_selection and os.path.exists(args.from_selection):
        sel = json.load(open(args.from_selection, encoding="utf-8"))
        candidates = [e["addr"] for e in sel]
        chosen = candidates[:args.limit]
    else:
        ledger = load_ledger(os.path.join(ROOT, ".omo", "codegen_match",
                                          "status.json"))
        sel = select_addresses(ledger)
        candidates = [e["addr"] for e in sel]
        chosen = None

    os.makedirs(OUT_ROOT, exist_ok=True)
    with open(os.path.join(OUT_ROOT, "selection.json"), "w",
              encoding="utf-8") as f:
        json.dump(sel, f, ensure_ascii=False, indent=1)

    baseline, part_dir = run_baseline(candidates, args.out)
    if chosen is None:
        # choose the per-family quota among candidates whose fresh baseline
        # is still NG (ledger may be stale); fill shortfalls in family order
        chosen = []
        for fam, quota in FAMILIES.items():
            fam_entries = [e for e in sel if e.get("fam") == fam]
            ng = [e["addr"] for e in fam_entries
                  if (baseline.get(e["addr"].lower()) or {}).get("verdict")
                  == "MISMATCH"]
            chosen.extend(ng[:quota])
            if len(ng) < quota:
                rest = [e["addr"] for e in fam_entries if e["addr"] not in ng]
                chosen.extend(rest[:quota - len(ng)])
        if args.limit:
            chosen = chosen[:args.limit]
    print("chosen %d / candidates %d" % (len(chosen), len(candidates)))

    report = {"baseline": [baseline.get(a.lower()) for a in candidates],
              "chosen": chosen, "ir": []}

    def _checkpoint(recs):
        report["ir"] = recs
        with open(os.path.join(args.out, "probe_report.partial.json"), "w",
                  encoding="utf-8") as f:
            json.dump(report, f, ensure_ascii=False, indent=1)

    if not args.no_ir:
        report["ir"] = run_ir(chosen, part_dir, baseline,
                              checkpoint=_checkpoint)
    with open(os.path.join(args.out, "probe_report.json"), "w",
              encoding="utf-8") as f:
        json.dump(report, f, ensure_ascii=False, indent=1)
    s = write_markdown(report, os.path.join(OUT_ROOT, "probe_report.md"))
    print(json.dumps(s, indent=1, ensure_ascii=False))
    return 0


if __name__ == "__main__":
    sys.exit(main())
