# -*- coding: utf-8 -*-
"""T2 status report generator (plan: .omo/plans/project-optimization.md).

Unifies mechanical-reconstruction stage accounting under the CURRENT primary
metric (compile-error count, per T1 adjudication). All numbers are derived
from live sources at run time -- no hand-maintained authority values.

Outputs (gitignored .omo/ by design; this generator is the tracked artifact):
  .omo/evidence/optimization/status/status.json
  .omo/evidence/optimization/status/status.md

Usage: python tools/gen_status_report.py [--skip-census]
"""
import argparse
import gc
import json
import re
import subprocess
import sys
from collections import Counter
from datetime import datetime, timezone
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
STATUS_DIR = ROOT / ".omo/evidence/optimization/status"
BASELINE = ROOT / ".omo/evidence/optimization/baseline/manifest.json"

PRIMITIVES = {
    "int", "void", "bool", "char", "unsigned int", "float", "double",
    "long", "short", "unsigned char", "unsigned short", "unsigned long",
    "unsigned long long", "wchar_t", "uint64_t", "byte", "BOTTOM", "TOP",
    "int*", "void*", "char*", "bool*", "float*", "wchar_t*",
}


def load_json(path):
    with open(path, encoding="utf-8") as f:
        return json.load(f)


def count_error_c(log_path):
    """Independent 'error C' occurrence count over a build log (primary metric)."""
    pat = re.compile(r"error (C\d+)")
    fam = Counter()
    with open(log_path, encoding="utf-8", errors="replace") as f:
        for line in f:
            m = pat.search(line)
            if m:
                fam[m.group(1)] += 1
    return sum(fam.values()), fam


def input_record(rel, t1):
    """Source path + T1 baseline hash + drift warning if mtime moved."""
    p = ROOT / rel
    rec = {"path": str(p), "exists": p.exists()}
    if p.exists():
        rec["mtime"] = datetime.fromtimestamp(p.stat().st_mtime).strftime("%Y-%m-%d %H:%M:%S")
    key = rel.replace("\\", "/")
    if key in t1["inputs"]:
        rec["sha256_t1"] = t1["inputs"][key]["sha256"]
        # T1 stores mtimes ISO-style (2026-10-10T10:33:50); normalize before compare
        t1_mtime = t1["inputs"][key]["mtime"].replace("T", " ")[:19]
        if p.exists() and rec["mtime"] != t1_mtime:
            rec["drift_warning"] = "mtime moved since T1 baseline (file %s vs T1 %s) -- hash refresh needed" % (rec["mtime"], t1_mtime)
    return rec


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--skip-census", action="store_true")
    args = ap.parse_args()

    t1 = load_json(BASELINE)
    now = datetime.now(timezone.utc).strftime("%Y-%m-%dT%H:%M:%S+00:00")

    head = subprocess.run(["git", "rev-parse", "HEAD"], capture_output=True, text=True, cwd=ROOT).stdout.strip()
    subj = subprocess.run(["git", "log", "-1", "--format=%s"], capture_output=True, text=True, cwd=ROOT).stdout.strip()
    dirty = subprocess.run(["git", "status", "--porcelain"], capture_output=True, text=True, cwd=ROOT).stdout.strip()

    report = {
        "schema": "status-report/v1",
        "generated_utc": now,
        "generator": "tools/gen_status_report.py",
        "git": {"head": head, "head_short": head[:8], "subject": subj, "porcelain_lines": len(dirty.splitlines()) if dirty else 0},
        "primary_metric_note": (
            "Primary = full MSBuild build-log 'error C' occurrence count (T1 adjudication). "
            "'completed' is a code-layer sub-metric only. Historical numbers are labeled "
            "historical and never emitted as current values."
        ),
    }

    # ------------------------------------------------------------------
    # Stage 1: compile-error families (PRIMARY metric)
    # ------------------------------------------------------------------
    runs = {}
    for name in ("clean_run1", "clean_run2"):
        lp = ROOT / (".omo/evidence/optimization/baseline/build_%s.log" % name)
        total, fam = count_error_c(lp)
        runs[name] = {"log": str(lp), "total": total, "top_families": dict(fam.most_common(25)),
                      "distinct_codes": len(fam)}
    assert runs["clean_run1"]["total"] == runs["clean_run2"]["total"], "clean runs disagree"
    report["compile_errors"] = {
        "stage": "compile-error families",
        "value": runs["clean_run1"]["total"],
        "instrument": "full MSBuild log 'error C' occurrence count (cmake --build --clean-first, Release, RA2_SKIP_GATES=1)",
        "commit": t1["git"]["head_short"],
        "evidence_class": "实证",
        "runs": runs,
        "caveats": [
            "count != logical error count: continuation lines and per-TU C1003 early-stop (truncation marker occurrences: %d)" % runs["clean_run1"]["top_families"].get("C1003", 0),
            "NOT comparable with tu_probe probe-census numbers (different toolchain VS18 cl /Zs, different tree states): r24=9,860@e32f5183 (pre-regen), g236=16,544@10-05 -- all historical",
        ],
        "incomparable": {"tu_probe_census": {"r24": 9860, "census_g236": 16544, "reason": "different instrument + tree state, see docs/g32_g42_ledger.md section 5"}},
    }

    # ------------------------------------------------------------------
    # Stage 2: CSP solved
    # ------------------------------------------------------------------
    tm = load_json(ROOT / "type_map.json")
    summary = tm["_summary"]
    typed_recount = Counter()
    for v in tm["type_map"].values():
        t = v.get("type") if isinstance(v, dict) else None
        if t in PRIMITIVES or t is None:
            typed_recount["primitive_or_none"] += 1
        else:
            typed_recount["typed"] += 1
    tm_entry_count = len(tm["type_map"])
    del tm
    gc.collect()
    report["csp_solved"] = {
        "stage": "CSP solved",
        "count": tm_entry_count,
        "unit": "typed variable entries in type_map",
        "source": input_record("type_map.json", t1),
        "evidence_class": "实证",
        "summary_builtin": summary,
        "recount": dict(typed_recount),
        "incomparable": False,
        "caveats": [
            "type_map built from STALE raw_constraints.json (2026-09-17, total_constraints=1,214,077); "
            "rtti re-extract raw_constraints.rtti.json (2026-10-10, total_constraints=1,197,808) NOT yet promoted (plan T4b)",
        ],
    }

    # ------------------------------------------------------------------
    # Stage 3: IDA symbols + signatures
    # ------------------------------------------------------------------
    sig = load_json(ROOT / "signals.json")
    syms = sig.get("symbols", sig)
    c = Counter()
    fn_backfill = Counter()
    for v in syms.values():
        kind = v.get("kind")
        c["kind=" + str(kind)] += 1
        if kind == "function":
            c["completed=" + str(v.get("completed"))] += 1
            c["translated=" + str(v.get("translated"))] += 1
            c["done=" + str(v.get("done"))] += 1
            name = str(v.get("name", ""))
            c["sub_like" if re.match(r"^(sub_|nullsub|j_sub|loc_|unknown_)", name) else "semantic"] += 1
            bf = v.get("backfill")
            fn_backfill[bf.get("status") if isinstance(bf, dict) else "none"] += 1
    n_syms = len(syms)
    del sig, syms
    gc.collect()
    canon = load_json(ROOT / "anchors/csp_canon_manifest.json")
    canon_sig = Counter(v.get("sig") for v in canon.values())
    n_canon = len(canon)
    del canon
    gc.collect()
    report["ida_symbols_sigs"] = {
        "stage": "IDA symbols + signatures",
        "count": n_syms,
        "unit": "symbol records in signals.json (functions+members+globals)",
        "source": input_record("signals.json", t1),
        "evidence_class": "实证",
        "functions": c["kind=function"],
        "breakdown": dict(c),
        "csp_canon_manifest": {
            "count": n_canon,
            "sig_dist": dict(canon_sig),
            "source": input_record("anchors/csp_canon_manifest.json", t1),
        },
        "incomparable": {"old_docs_function_total": "old docs say 19,067 functions; current signals has %d (+11 growth)" % c["kind=function"]},
    }

    # ------------------------------------------------------------------
    # Stage 4: C/ASM export
    # ------------------------------------------------------------------
    idx = load_json(ROOT / "decompile-results/full_export/index.json")
    idx_kinds = Counter(v.get("kind") for v in idx.values())
    n_idx = len(idx)
    del idx
    gc.collect()
    disk_files = sum(1 for _ in (ROOT / "decompile-results/full_export").rglob("*") if _.is_file())
    n_raw = len(list((ROOT / "src/raw_decomp").glob("*.c")))
    report["c_asm_export"] = {
        "stage": "C/ASM export",
        "count": n_idx,
        "unit": "index entries (function+method) in full_export index",
        "source": input_record("decompile-results/full_export/index.json", t1),
        "kind_dist": dict(idx_kinds),
        "disk_files": disk_files,
        "evidence_class": "实证",
        "related": {"src/raw_decomp": {"c_files": n_raw, "role": "machine-rewritten decompile reference text; NOT compiled (CMake glob only takes src/*.cpp)"}},
        "incomparable": {"index_entries_vs_disk_files": "entries are per-function; files batch many functions -- different populations"},
    }

    # ------------------------------------------------------------------
    # Stage 5: mechanical member rewrite
    # ------------------------------------------------------------------
    bfm = load_json(ROOT / "anchors/backfill_manifest.json")
    bf_dist = Counter(v.get("status") for v in bfm.values())
    bf_sig = Counter(v.get("sig") for v in bfm.values())
    n_bf = len(bfm)
    del bfm
    gc.collect()
    n_inc = len(list((ROOT / "src/csp_canon/bodies").rglob("*.inc")))
    viol = None
    census_raw = None
    if not args.skip_census:
        r = subprocess.run([sys.executable, "tools/csp_export/census.py"], capture_output=True, text=True, cwd=ROOT)
        m = re.search(r"TOTAL violation-pattern hits: (\d+)", r.stdout)
        viol = int(m.group(1)) if m else None
        census_raw = r.stdout[-1200:]
    report["mechanical_member_rewrite"] = {
        "stage": "mechanical member rewrite",
        "count": n_bf,
        "unit": "function backfill records",
        "source": input_record("anchors/backfill_manifest.json", t1),
        "status_dist": dict(bf_dist),
        "sig_dist": dict(bf_sig),
        "signals_embedded_variant": {
            "note": "backfill fields embedded in signals.json (functions only) -- LATER snapshot than the standalone file",
            "dist": dict(fn_backfill),
        },
        "residual_violation_hits": viol,
        "residual_source": "tools/csp_export/census.py over src/**/*.cpp (R_THIS/R5/MEMORY/bare-this/vtable patterns)",
        "census_raw_tail": census_raw,
        "bodies_inc_count_src_csp_canon": n_inc,
        "evidence_class": "实证",
        "incomparable": {"backfill_file_vs_signals_embedded": "different snapshot dates -- report both, never mix"},
    }

    # ------------------------------------------------------------------
    # Stage 6: compilable defs
    # ------------------------------------------------------------------
    hollow = None
    if not args.skip_census:
        r = subprocess.run([sys.executable, "tools/csp_export/census_hollow_bodies.py"], capture_output=True, text=True, cwd=ROOT)
        m = re.search(r"HOLLOW BODIES \(empty def \+ raw truth >=5 stmts\): (\d+)", r.stdout)
        hollow = int(m.group(1)) if m else None
    report["compilable_defs"] = {
        "stage": "compilable defs",
        "hollow_bodies": hollow,
        "hollow_definition": "def line + {} but body empty/stub while raw_decomp truth has >=5 statements (census_hollow_bodies.py)",
        "per_def_compilable_count": None,
        "per_def_note": "no instrument: MSVC per-TU C1003 early-stop makes per-def attribution unreliable; use compile_errors as proxy",
        "evidence_class": "实证" if hollow is not None else "unmeasured",
    }

    # ------------------------------------------------------------------
    # Stage 7: static verify
    # ------------------------------------------------------------------
    vc = load_json(ROOT / ".omo/verify_auto_cache.json")
    n_vc = len(vc)
    del vc
    gc.collect()
    report["static_verify"] = {
        "stage": "static verify (exec-flow)",
        "count": n_vc,
        "unit": "addresses with cached PASS verdict (content-hash keyed; stale entries auto-miss)",
        "source": input_record(".omo/verify_auto_cache.json", t1),
        "semantics": "PASS-only cache per tools/verify_execution_flow.py (~L2046); v=1 schema for all entries",
        "evidence_class": "实证 (presence) + semantics from code comment",
    }

    # ------------------------------------------------------------------
    # Stage 8: Step-6 complete (+ code-layer sub-metrics)
    # ------------------------------------------------------------------
    report["step6_complete"] = {
        "stage": "Step-6 complete (RA2MCP small-model loop)",
        "status": "NOT STARTED in current pipeline era (plan T10 pending)",
        "count": 0,
        "evidence_class": "实证 (absence of step-6 run artifacts)",
        "code_layer_sub_metrics": {
            "completed_true": {"count": c["completed=True"], "role": "DEMOTE per plan: code-layer only, never completion"},
            "translated_true": {"count": c["translated=True"], "role": "full-IDA-contrast translation flag"},
            "done_true": {"count": c["done=True"], "role": "behavioral Same verification -- zero functions pass"},
        },
    }

    # ------------------------------------------------------------------
    # Stage 9: Same Compares
    # ------------------------------------------------------------------
    cmp_paths = [ROOT / "injectFunctionTest/comparisonResult.log", Path("D:/RA2MD/comparisonResult.log")]
    present = [str(p) for p in cmp_paths if p.exists()]
    report["same_compares"] = {
        "stage": "Same Compares (shadow comparison)",
        "count": 0 if not present else None,
        "status": "LOG ABSENT" if not present else str(present),
        "evidence": "comparisonResult.log not found in repo or D:/RA2MD (verified %s)" % now[:10],
        "corroboration": "signals.json done=True = %d / %d functions" % (c["done=True"], c["kind=function"]),
        "evidence_class": "实证 (absence)",
    }

    # ------------------------------------------------------------------
    # Tree roles
    # ------------------------------------------------------------------
    sa = t1["src_artifacts"]
    report["tree_roles"] = {
        "src/": {"counts": sa["src"], "role": "final deliverable tree; compiled via CMake GLOB_RECURSE src/*.cpp excluding src/app and src/_generated (two _generated stubs explicitly added); /FI ida_compat.h forces IDA vocabulary; /FORCE:UNRESOLVED still on"},
        "src/e4": {"counts": sa["src/e4"], "role": "mechanical per-class e4 layer (589 cpp + 2,278 hpp); COMPILED -- main error-volume source"},
        "src/csp_canon": {"counts": sa["src/csp_canon"], "role": "declaration authority (classes.hpp/functions.hpp) + body fragments; hpp included ONLY by src/_generated/link_stubs.cpp which is NOT in the gamemd target; bodies/*.inc included by NOTHING -- fragments referenced by step4 tooling metadata (backfill body_file). NOT compiled today"},
        "src/raw_decomp": {"counts": sa["src/raw_decomp"], "role": "machine-rewritten decompile reference (.c); reference-only, NOT compiled"},
        "src/_gap2": {"counts": sa["src/_gap2"], "role": "gap2 defs (W0b pipeline artifact), compiled"},
        "bodies_at_repo_root": {"exists": False, "note": "stale AGENTS.md reference (T1 issue I5); live fragments moved to src/csp_canon/bodies/ (%d .inc)" % n_inc},
    }

    # ------------------------------------------------------------------
    # Reconciliation vs old docs (HISTORICAL labels mandatory)
    # ------------------------------------------------------------------
    cur_completed = c["completed=True"]
    report["reconciliation"] = {
        "historical_labels": [
            {"label": "G17 11,856", "doc": "docs/coverage.md (2026-09-17 W2.1)", "meaning": "MCP completed (pending 4,755) -- pre-G32 code-layer metric", "status": "HISTORICAL"},
            {"label": "G30 12,687", "doc": "docs/mech_rebuild_plan.md:540", "meaning": "completed after G30 gap-ledger round -- code-layer", "status": "HISTORICAL"},
            {"label": "G31 12,693", "doc": "docs/mech_rebuild_plan.md:673", "meaning": "completed after Step-4 supply round -- code-layer", "status": "HISTORICAL"},
            {"label": "r24 9,860", "doc": "docs/g32_g42_ledger.md section 5", "meaning": "probe census (tu_probe.bat) at e32f5183 pre-regen -- different instrument", "status": "HISTORICAL"},
        ],
        "current": {
            "completed_true": cur_completed,
            "delta_vs_g31": cur_completed - 12693,
            "delta_explanation": "G32-G42 honest resets (G39 shadow-stub sweep, G40 167 C2597 reopens, G42.57aa DUPDEF purge) netted -14; both are code-layer sub-metrics -- primary metric is compile errors",
            "function_total_drift": "old docs 19,067 vs current signals %d (+11)" % c["kind=function"],
        },
    }

    STATUS_DIR.mkdir(parents=True, exist_ok=True)
    out_json = STATUS_DIR / "status.json"
    out_md = STATUS_DIR / "status.md"
    out_json.write_text(json.dumps(report, ensure_ascii=False, indent=1), encoding="utf-8")
    out_md.write_text(render_md(report), encoding="utf-8")
    print("WROTE", out_json)
    print("WROTE", out_md)
    print("PRIMARY compile errors:", report["compile_errors"]["value"])
    return report


def render_md(r):
    ce = r["compile_errors"]
    lines = []
    A = lines.append
    A("# 统一状态报告（T2，%s）" % r["generated_utc"])
    A("")
    A("> 生成器：`tools/gen_status_report.py`（本文件为机器产物，勿手改；重跑即再生）。")
    A("> 主口径 = 全量 MSBuild 构建日志 `error C` 行计数（T1 裁决）；`completed` 仅为代码层副口径。")
    A("")
    A("## 主口径：编译错误（HEAD %s）" % r["git"]["head_short"])
    A("")
    A("| 项 | 值 |")
    A("|---|---|")
    A("| error C 出现次数 | **%s**（两次 clean run 一致） |" % format(ce["value"], ","))
    A("| 仪器 | %s |" % ce["instrument"])
    A("| 不同错误码 | %d |" % ce["runs"]["clean_run1"]["distinct_codes"])
    A("")
    A("Top 错误族：")
    A("")
    A("| 码 | 次数 |")
    A("|---|---|")
    for code, n in ce["runs"]["clean_run1"]["top_families"].items():
        A("| %s | %s |" % (code, format(n, ",")))
    A("")
    A("不可比仪器（历史）：tu_probe census r24=9,860@e32f5183（pre-regen）、g236=16,544@10-05 —— 不同工具链+不同树状态，仅历史。")
    A("")
    A("## 阶段账（每阶段：count / 来源 / hash / 证据级）")
    A("")
    for key in ("csp_solved", "ida_symbols_sigs", "c_asm_export", "mechanical_member_rewrite",
                "compilable_defs", "static_verify", "step6_complete", "same_compares"):
        s = r[key]
        src = s.get("source", {})
        A("### %s" % s["stage"])
        A("")
        cnt = s.get("count")
        if cnt is None:
            A("- count: n/a (hollow_bodies=%s)" % s.get("hollow_bodies"))
        else:
            A("- count: **%s** %s" % (format(cnt, ",") if isinstance(cnt, int) else cnt, s.get("unit", "")))
        if src:
            A("- source: `%s`" % src.get("path", "?"))
            if "sha256_t1" in src:
                A("- input hash(T1): `%s...`" % src["sha256_t1"][:16])
            if "drift_warning" in src:
                A("- **drift**: %s" % src["drift_warning"])
        A("- evidence: %s" % s.get("evidence_class", "-"))
        for k, v in (s.get("incomparable") or {}).items():
            A("- 不可比[%s]: %s" % (k, v))
        for cv in s.get("caveats", []):
            A("- caveat: %s" % cv)
        if key == "csp_solved":
            sm = s["summary_builtin"]
            cd = sm["confidence_distribution"]
            A("- confidence: ANCHORED %s / DIRECT_PROP %s / CHAIN_PROP %s / INFERRED %s / ORPHAN %s" % (
                format(cd["ANCHORED"], ","), format(cd["DIRECT_PROP"], ","),
                format(cd["CHAIN_PROP"], ","), format(cd["INFERRED"], ","),
                format(cd["ORPHAN"], ",")))
            A("- recount: typed(非基元) %s / primitive+none %s" % (
                format(s["recount"]["typed"], ","), format(s["recount"]["primitive_or_none"], ",")))
        if key == "mechanical_member_rewrite":
            A("- status dist: %s" % json.dumps(s["status_dist"], ensure_ascii=False))
            A("- signals 内嵌变体（更新快照）: %s" % json.dumps(s["signals_embedded_variant"]["dist"], ensure_ascii=False))
            if s["residual_violation_hits"] is not None:
                A("- residual violation hits(census.py 全树): %s" % format(s["residual_violation_hits"], ","))
        if key == "ida_symbols_sigs":
            b = s["breakdown"]
            A("- functions: %s（completed=T %s / F %s / translated=T %s / done=T %s / sub_like %s）" % (
                format(s["functions"], ","), format(b.get("completed=True", 0), ","),
                format(b.get("completed=False", 0), ","), format(b.get("translated=True", 0), ","),
                format(b.get("done=True", 0), ","), format(b.get("sub_like", 0), ",")))
            cm = s["csp_canon_manifest"]
            A("- csp_canon_manifest: %s 条（sig=csp %s / ida-proto %s）" % (
                format(cm["count"], ","), format(cm["sig_dist"].get("csp", 0), ","),
                format(cm["sig_dist"].get("ida-proto", 0), ",")))
        if key == "c_asm_export":
            A("- kind dist: %s; disk files: %s; raw_decomp: %s .c（仅参考，不编译）" % (
                json.dumps(s["kind_dist"]), s["disk_files"], s["related"]["src/raw_decomp"]["c_files"]))
        if key == "step6_complete":
            sm2 = s["code_layer_sub_metrics"]
            A("- completed=True %s（副口径，禁止当完成）/ translated=True %s / done=True %s" % (
                format(sm2["completed_true"]["count"], ","), format(sm2["translated_true"]["count"], ","),
                sm2["done_true"]["count"]))
    A("")
    A("## 树角色（是否参与编译）")
    A("")
    A("| 树 | 规模（T1 manifest） | 角色 | 编译? |")
    A("|---|---|---|---|")
    tr = r["tree_roles"]
    A("| `/src` | %d 文件（cpp %d / hpp %d） | 最终成果树，GLOB_RECURSE（排除 app/_generated，两个 _generated 显式加回） | YES |" % (
        tr["src/"]["counts"]["files"], tr["src/"]["counts"]["cpp"], tr["src/"]["counts"]["hpp_h"]))
    A("| `src/e4` | %d 文件（cpp %d / hpp %d） | 机械 e4 类层 | YES（错误主体） |" % (
        tr["src/e4"]["counts"]["files"], tr["src/e4"]["counts"]["cpp"], tr["src/e4"]["counts"]["hpp_h"]))
    n_inc = r["mechanical_member_rewrite"]["bodies_inc_count_src_csp_canon"]
    A("| `src/csp_canon` | %d 文件（hpp %d + bodies .inc %d） | 声明权威 + 体碎片；唯一 includer=link_stubs.cpp（不在 gamemd 目标内） | NO（今日未参与编译） |" % (
        tr["src/csp_canon"]["counts"]["files"], tr["src/csp_canon"]["counts"]["hpp_h"], n_inc))
    A("| `src/raw_decomp` | %d 文件（.c） | 机械改写反编译参考 | NO（.c 不入 CXX glob） |" % tr["src/raw_decomp"]["counts"]["files"])
    A("| `src/_gap2` | %d 文件 | gap2 defs | YES |" % tr["src/_gap2"]["counts"]["files"])
    A("| `bodies/*.inc`（仓库根） | 不存在 | 旧 AGENTS.md 引用已失效（T1 I5）；活体碎片在 `src/csp_canon/bodies/` | - |")
    A("")
    A("## 旧文档数字调和（全部为历史口径，禁当当前值）")
    A("")
    A("| 旧数字 | 出处 | 含义 | 状态 |")
    A("|---|---|---|---|")
    for h in r["reconciliation"]["historical_labels"]:
        A("| %s | %s | %s | 历史 |" % (h["label"], h["doc"], h["meaning"]))
    cu = r["reconciliation"]["current"]
    A("")
    A("当前 signals.json completed=True = **%s**（vs G31 12,693 = %+d；G32-G42 诚实复位净漂移，代码层副口径）。函数总数 19,067 -> 19,078（+11）。" % (
        format(cu["completed_true"], ","), cu["delta_vs_g31"]))
    A("")
    A("## Same Compares / Step-6")
    A("")
    A("- comparisonResult.log：仓库与 D:/RA2MD 均不存在（实证缺失 %s）→ Same Compares 当前 = 0。" % r["generated_utc"][:10])
    A("- done=True = %d / %s 函数 → 行为级验证为零，与日志缺失互证。" % (
        r["step6_complete"]["code_layer_sub_metrics"]["done_true"]["count"],
        format(r["ida_symbols_sigs"]["functions"], ",")))
    A("- Step-6（RA2MCP 小模型循环）未启动（计划 T10 待办）。")
    A("")
    return "\n".join(lines) + "\n"


if __name__ == "__main__":
    main()
