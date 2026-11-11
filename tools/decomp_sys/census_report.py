#!/usr/bin/env python3
"""census_report.py -- build the full-pool census report (2026-11-11).

Reads the census batches, the append-only results ledger and the part timing
log, then emits:
  * .omo/agents/decomp_batch/report_census.md   (human report)
  * .omo/agents/decomp_batch/census_summary.json (machine summary)

Layer pooling for the extrapolation section is recomputed live: every
signals.json function is re-stratified (batch_select5.classify) and functions
already present in ledger/results are treated as decided, so the "remaining"
numbers reflect the state AFTER this census.

Usage:
  python tools/decomp_sys/census_report.py [--run census] [--tag census]
"""
import argparse
import json
import os
import re
import sys
from collections import Counter, OrderedDict, defaultdict

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.join(ROOT, ".omo", "agents", "phasea"))

import pilot_select          # noqa: E402
import batch_select5 as sel5  # noqa: E402

STATE = os.path.join(ROOT, ".omo", "agents", "decomp_batch")
RESULTS = os.path.join(STATE, "results.jsonl")
LEDGER = os.path.join(ROOT, ".omo", "codegen_match", "status.json")

VERDICTS = ["MATCH", "MISMATCH", "COMPILE_FAIL", "CONV_FAIL", "NO_CLS",
            "NO_PSEUDO", "NO_EXPORT", "DUP_SKIP", "OBJ_EXTRACT_FAIL",
            "INTERNAL_ERROR"]
LAYERS = ["A", "B", "C", "D", "X"]
LAYER_DESC = {
    "A": "leaf, size < 200B",
    "B": "leaf, 200-500B",
    "C": "call-bearing, size < 500B",
    "D": "call-bearing 500B+ / large / indirect-heavy",
    "X": "no full_export block (unstratifiable)",
}


def norm(a):
    return "0x%x" % int(a, 16)


def load_last_results():
    last = {}
    if not os.path.exists(RESULTS):
        return last
    for line in open(RESULTS, encoding="utf-8"):
        line = line.strip()
        if not line:
            continue
        try:
            r = json.loads(line)
        except ValueError:
            continue
        if r.get("addr") and r.get("verdict"):
            last[norm(r["addr"])] = r
    return last


def load_timings(path):
    per = {}
    if not os.path.exists(path):
        return per
    for line in open(path, encoding="utf-8"):
        line = line.strip()
        if not line:
            continue
        try:
            r = json.loads(line)
        except ValueError:
            continue
        per[(r["layer"], r["part"])] = r
    return per


def pct(a, b):
    return 100.0 * a / b if b else 0.0


def bucket_compile_error(note):
    if not note:
        return "unknown"
    m = re.search(r"\b(C\d{4})\b", note)
    return m.group(1) if m else note[:28]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--run", default="census")
    ap.add_argument("--tag", default="census")
    ap.add_argument("--out", default=os.path.join(
        STATE, "report_census.md"))
    args = ap.parse_args()

    batches = OrderedDict()
    for L in LAYERS:
        p = os.path.join(STATE, "batch_%s_%s.json" % (args.tag, L))
        if os.path.exists(p):
            batches[L] = json.load(open(p, encoding="utf-8"))
    if not batches:
        print("no census batch files")
        return 2

    last = load_last_results()
    timings = load_timings(os.path.join(
        ROOT, ".omo", "decomp_batch", args.run, "timings.jsonl"))

    # ---------- per-layer verdict tables over the sampled addresses
    tables = {}
    missing = {}
    for L, ents in batches.items():
        addrs = [norm(e["addr"]) for e in ents]
        rows = [last.get(a) for a in addrs]
        missing[L] = [a for a, r in zip(addrs, rows) if r is None]
        vc = Counter((r or {}).get("verdict", "UNRUN") for r in rows)
        tables[L] = vc

    def row_get(vc, k):
        return vc.get(k, 0)

    # ---------- live re-stratification -> remaining pool after census
    exports = pilot_select.parse_exports()
    sig = json.load(open(os.path.join(ROOT, "signals.json"),
                         encoding="utf-8"))
    decided = set(last)
    if os.path.exists(LEDGER):
        for a in json.load(open(LEDGER, encoding="utf-8")):
            decided.add(norm(a))
    rem = defaultdict(int)
    for addr_s, s in sig["symbols"].items():
        if s.get("kind") != "function":
            continue
        a = norm(s.get("address") or addr_s)
        if a in decided:
            continue
        ev = exports.get(int(a, 16))
        if ev is None:
            rem["X"] += 1
            continue
        nc, nds, ni = sel5.feats(ev)
        L, _ = sel5.classify(ev["size"], nc, nds, ni)
        rem[L] += 1

    # ---------- throughput
    per_layer_time = defaultdict(float)
    per_layer_parts = defaultdict(int)
    per_layer_n = defaultdict(int)
    for (L, _pi), r in timings.items():
        if not r.get("ok"):
            continue
        per_layer_time[L] += r["seconds"]
        per_layer_parts[L] += 1
        per_layer_n[L] += r["n"]
    total_time = sum(per_layer_time.values())
    total_n = sum(per_layer_n.values())
    tput = 3600.0 * total_n / total_time if total_time else 0.0

    # ---------- report
    L = []
    L.append("# 全池机械反编译普查（四层 × 2,000 抽样）")
    L.append("")
    L.append("日期：2026-11-11  ")
    L.append("产线：`tools/decomp_sys/batch_run.py`（伪码 → 转换 → era cl "
             "编译 → COFF 逐函数抽取 → 字节对拍 → 记账）  ")
    L.append("选择器：`tools/decomp_sys/batch_select5.py`（全池难度分层，"
             "已判定集合 = status.json ∪ results.jsonl 排除）  ")
    L.append("驱动：`tools/decomp_sys/run_census.py`（20 件/part，"
             "每 part 独立提交；失败不降级，全量 emit 后仅标记未匹配）")
    L.append("")
    L.append("## 0. 结论速览")
    L.append("")
    L.append("| 层 | 定义 | 抽样 | MATCH | MISMATCH | COMPILE_FAIL | "
             "CONV_FAIL | NO_CLS | NO_PSEUDO/NO_EXPORT | 末判率 MATCH/总 | "
             "编译率 | 对拍匹配率 |")
    L.append("|---|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|")
    for lyr in LAYERS:
        if lyr not in batches:
            continue
        ents = batches[lyr]
        vc = tables[lyr]
        n = len(ents)
        mat = row_get(vc, "MATCH")
        mis = row_get(vc, "MISMATCH")
        cf = row_get(vc, "COMPILE_FAIL")
        conv = row_get(vc, "CONV_FAIL")
        ncls = row_get(vc, "NO_CLS")
        nps = row_get(vc, "NO_PSEUDO") + row_get(vc, "NO_EXPORT")
        dup = row_get(vc, "DUP_SKIP")
        obje = row_get(vc, "OBJ_EXTRACT_FAIL")
        unrun = row_get(vc, "UNRUN")
        compiled = mat + mis + obje
        L.append("| %s | %s | %d | %d | %d | %d | %d | %d | %d | "
                 "%.1f%% | %.1f%% | %.1f%% |"
                 % (lyr, LAYER_DESC[lyr], n, mat, mis, cf, conv, ncls,
                    nps + dup + unrun, pct(mat, n), pct(compiled, n),
                    pct(mat, mat + mis)))
    tot = Counter()
    for lyr in LAYERS:
        if lyr in tables:
            tot.update(tables[lyr])
    n_all = sum(len(b) for b in batches.values())
    L.append("| **合计** | — | **%d** | **%d** | **%d** | **%d** | **%d** | "
             "**%d** | **%d** | **%.1f%%** | **%.1f%%** | **%.1f%%** |"
             % (n_all, tot.get("MATCH", 0), tot.get("MISMATCH", 0),
                tot.get("COMPILE_FAIL", 0), tot.get("CONV_FAIL", 0),
                tot.get("NO_CLS", 0),
                tot.get("NO_PSEUDO", 0) + tot.get("NO_EXPORT", 0),
                pct(tot.get("MATCH", 0), n_all),
                pct(tot.get("MATCH", 0) + tot.get("MISMATCH", 0), n_all),
                pct(tot.get("MATCH", 0),
                    tot.get("MATCH", 0) + tot.get("MISMATCH", 0))))
    L.append("")
    L.append("注：匹配率 = MATCH/(MATCH+MISMATCH)，表示“已进入字节对拍者”的"
             "全等率；末判率 = MATCH/抽样数，是端到端机械通过率。")
    L.append("")

    # sanity: unrun / missing addresses
    any_missing = {k: v for k, v in missing.items() if v}
    if any_missing:
        L.append("未跑地址（账本/结果缺口）：%s"
                 % {k: len(v) for k, v in any_missing.items()})
        L.append("")

    L.append("## 1. 方法与抽样口径")
    L.append("")
    L.append("- 普查前剩余未判定函数 **%d**（= 抽样后剩余 %d + 本轮 %d）；"
             "按调用/尺寸四层分层，每层先取 500（B 层物理上只有 %d 件 → "
             "由 A/C/D 按剩余池质量比例补足到 2,000）。"
             % (sum(rem.values()) + n_all, sum(rem.values()), n_all,
                len(batches.get("B", []))))
    L.append("- 采样 = 层内按难度键 `(size, calls, indirect, ds, addr)` "
             "排序后的**确定性系统（分位）抽样**，输出序 = 易→难；"
             "part 顺序即难度递增。")
    L.append("- 已判定集合 = `status.json`（1,000）∪ `results.jsonl`"
             "（949，去重后并集 1,007）；普查地址不含其中任何一件。")
    L.append("- 规则 6：转换/编译失败同样 emit 完整实现，只是 verdict "
             "为 COMPILE_FAIL / MISMATCH；无 stub 降级。")
    L.append("- X 层（无 full_export 块）%d 件单独跑，不进 2,000 口径。"
             % len(batches.get("X", [])))
    L.append("")

    # ---------- per-layer pool / quota
    L.append("### 1.1 层池与抽样量")
    L.append("")
    L.append("| 层 | 抽样 | 抽样后剩余池 | 备注 |")
    L.append("|---|---:|---:|---|")
    sampled_by = Counter()
    for lyr, ents in batches.items():
        sampled_by[lyr] = len(ents)
    for lyr in LAYERS:
        if lyr in batches:
            L.append("| %s | %d | %d | %s |"
                     % (lyr, sampled_by[lyr], rem.get(lyr, 0),
                        LAYER_DESC[lyr]))
    L.append("")

    # ---------- pathology
    L.append("## 2. 病理分布")
    L.append("")
    L.append("### 2.1 MISMATCH 首差分类（按层）")
    L.append("")
    path_by = {}
    for lyr, ents in batches.items():
        c = Counter()
        for e in ents:
            r = last.get(norm(e["addr"]))
            if r and r.get("verdict") == "MISMATCH":
                c[r.get("pathology") or "unknown"] += 1
        path_by[lyr] = c
    keys = []
    for lyr in path_by:
        for k in path_by[lyr]:
            if k not in keys:
                keys.append(k)
    keys.sort(key=lambda k: -sum(path_by[l].get(k, 0) for l in path_by))
    L.append("| pathology | " + " | ".join(
        l for l in LAYERS if l in path_by) + " |")
    L.append("|---|" + "---:|" * len([l for l in LAYERS if l in path_by]))
    for k in keys:
        if sum(path_by[l].get(k, 0) for l in path_by) == 0:
            continue
        L.append("| %s | %s |" % (k, " | ".join(
            str(path_by[l].get(k, 0)) for l in LAYERS if l in path_by)))
    L.append("")

    L.append("### 2.2 COMPILE_FAIL 首错码（按层）")
    L.append("")
    cerr = {}
    for lyr, ents in batches.items():
        c = Counter()
        for e in ents:
            r = last.get(norm(e["addr"]))
            if r and r.get("verdict") == "COMPILE_FAIL":
                c[bucket_compile_error(r.get("note"))] += 1
        cerr[lyr] = c
    ckeys = []
    for lyr in cerr:
        for k in cerr[lyr]:
            if k not in ckeys:
                ckeys.append(k)
    ckeys.sort(key=lambda k: -sum(cerr[l].get(k, 0) for l in cerr))
    L.append("| Cxxxx | " + " | ".join(
        l for l in LAYERS if l in cerr) + " |")
    L.append("|---|" + "---:|" * len([l for l in LAYERS if l in cerr]))
    for k in ckeys[:18]:
        L.append("| %s | %s |" % (k, " | ".join(
            str(cerr[l].get(k, 0)) for l in LAYERS if l in cerr)))
    L.append("")

    L.append("### 2.3 转换/归属类失败（按层）")
    L.append("")
    L.append("| 层 | NO_CLS | CONV_FAIL | NO_PSEUDO | NO_EXPORT | "
             "DUP_SKIP | OBJ_EXTRACT_FAIL |")
    L.append("|---|---:|---:|---:|---:|---:|---:|")
    for lyr in LAYERS:
        if lyr in batches:
            vc = tables[lyr]
            L.append("| %s | %d | %d | %d | %d | %d | %d |"
                     % (lyr, row_get(vc, "NO_CLS"), row_get(vc, "CONV_FAIL"),
                        row_get(vc, "NO_PSEUDO"), row_get(vc, "NO_EXPORT"),
                        row_get(vc, "DUP_SKIP"),
                        row_get(vc, "OBJ_EXTRACT_FAIL")))
    L.append("")
    L.append("### 2.4 归属形态 × verdict（为什么某些层读数为 0）")
    L.append("")
    L.append("| 层 | 形态 | 件数 | MATCH | MISMATCH | COMPILE_FAIL | "
             "NO_CLS |")
    L.append("|---|---|---:|---:|---:|---:|---:|")
    for lyr, ents in batches.items():
        agg = OrderedDict()
        for e in ents:
            r = last.get(norm(e["addr"]))
            if not r:
                continue
            cls = e.get("cls") or ""
            grp = "global(无类)" if not cls else (
                "unknown" if cls == "unknown" else "named class")
            agg.setdefault(grp, Counter())[r["verdict"]] += 1
        for grp in ("named class", "unknown", "global(无类)"):
            c = agg.get(grp)
            if not c:
                continue
            n = sum(c.values())
            L.append("| %s | %s | %d | %d | %d | %d | %d |"
                     % (lyr, grp, n, c.get("MATCH", 0), c.get("MISMATCH", 0),
                        c.get("COMPILE_FAIL", 0), c.get("NO_CLS", 0)))
    L.append("")
    L.append("### 2.5 NO_CLS 构成（全部是无类归属的全局函数）")
    L.append("")
    nc_by = Counter()
    for lyr, ents in batches.items():
        for e in ents:
            r = last.get(norm(e["addr"]))
            if not r or r["verdict"] != "NO_CLS":
                continue
            nm = e.get("name") or ""
            if nm.startswith("nullsub"):
                k = "nullsub_*"
            elif nm.startswith("sub_"):
                k = "sub_*"
            elif nm.startswith("j_"):
                k = "j_*"
            elif nm.startswith("_"):
                k = "_CRT/other"
            else:
                k = "named global helper"
            nc_by[k] += 1
    L.append("| 形态 | 件数 | 构造性含义 |")
    L.append("|---|---:|---|")
    L.append("| sub_* | %d | 未命名全局函数；`sub_XXXX` 是合法标识符，"
             "无需语义命名即可发射 |" % nc_by.get("sub_*", 0))
    L.append("| named global helper | %d | 已有语义名的全局函数 |"
             % nc_by.get("named global helper", 0))
    L.append("| _CRT/other | %d | CRT/运行时入口 |"
             % nc_by.get("_CRT/other", 0))
    L.append("| nullsub_* | %d | 空体桩 |" % nc_by.get("nullsub_*", 0))
    L.append("| j_* | %d | 跳转别名 |" % nc_by.get("j_*", 0))
    L.append("")
    L.append("> 根因：`decompile.run_function()` 在 `sig[\"cls\"] is None` "
             "时硬失败（`no registry class`）。发射器本来就有 `free` "
             "（文件级 `__cdecl`）通道，但该门在签名推导后立即拦截——"
             "这是本轮最大的单点可修面（占样本 26.8%）。")
    L.append("")

    L.append("### 2.6 编译墙位置：cpp 函数体 vs hpp 声明")
    L.append("")
    L.append("| 层 | cpp 体内错误 | hpp/include 声明错误 | hpp 占比 |")
    L.append("|---|---:|---:|---:|")
    for lyr, ents in batches.items():
        cppn = hppn = 0
        for e in ents:
            r = last.get(norm(e["addr"]))
            if not r or r.get("verdict") != "COMPILE_FAIL":
                continue
            note = r.get("note") or ""
            if re.search(r"[A-Za-z0-9_]+\.hpp\(\d+\)", note):
                hppn += 1
            else:
                cppn += 1
        L.append("| %s | %d | %d | %.0f%% |"
                 % (lyr, cppn, hppn, pct(hppn, cppn + hppn)))
    L.append("")
    L.append("> 声明侧代表例：`wchar_t * _wcschr(const wchar_t *Str p0, "
             "wchar_t p1)` —— IDA 原型参数名（`Str`/`DstCh`）被并进类型串，"
             "再拼 ` p0` → C2146 成批出现；`extern int else(int, ...);` —— "
             "控制关键字被当成被调函数名 → C2143。体侧代表例："
             "`SetString(..., DataGlobal_825BF8)` 全局以 `unsigned int` 发射、"
             "形参要求 `void *` → C2664。")
    L.append("")

    # ---------- throughput
    L.append("## 3. 吞吐率")
    L.append("")
    L.append("| 层 | parts | 函数 | 墙钟秒 | 秒/件 | 件/小时 |")
    L.append("|---|---:|---:|---:|---:|---:|")
    for lyr in LAYERS:
        if lyr not in per_layer_n:
            continue
        t = per_layer_time[lyr]
        nn = per_layer_n[lyr]
        L.append("| %s | %d | %d | %.0f | %.1f | %.0f |"
                 % (lyr, per_layer_parts[lyr], nn, t, t / max(1, nn),
                    3600.0 * nn / t if t else 0))
    L.append("| **合计** | **%d** | **%d** | **%.0f** | **%.1f** | **%.0f** |"
             % (sum(per_layer_parts.values()), total_n, total_time,
                total_time / max(1, total_n), tput))
    L.append("")
    L.append("口径：part 墙钟 = `run_census.py` 子进程调用 batch_run 的耗时"
             "（含伪码转换、发射、编译、抽取、对拍与提交前记账；不含 git "
             "commit 本身）。D 层的单件耗时受大函数/多调用支配。")
    L.append("")
    L.append("### 3.1 每 part 明细")
    L.append("")
    L.append("| 层 | part | n | 秒 | verdicts |")
    L.append("|---|---:|---:|---:|---|")
    for (lyr, pi) in sorted(timings, key=lambda x: (LAYERS.index(x[0]), x[1])):
        r = timings[(lyr, pi)]
        if not r.get("ok"):
            continue
        L.append("| %s | p%02d | %d | %.1f | %s |"
                 % (lyr, pi, r["n"], r["seconds"],
                    " ".join("%s=%d" % kv
                             for kv in sorted((r.get("verdicts") or {}).items()))))
    L.append("")

    # ---------- extrapolation
    L.append("## 4. 全池机械化：还需多少轮、终点数字")
    L.append("")
    # pooled compared-match rate: the conversion assumption for the ceiling.
    # per-layer 0/N rates (B/D) are too small-sample to extrapolate, so the
    # ceiling converts every compile/conversion wall at the CENSUS-WIDE rate.
    _mat = tot.get("MATCH", 0)
    _mis = tot.get("MISMATCH", 0)
    pooled_mrate = _mat / float(_mat + _mis) if (_mat + _mis) else 0.0
    exp_rows = []
    for lyr in LAYERS:
        if lyr not in batches:
            continue
        vc = tables[lyr]
        n = len(batches[lyr])
        mat = row_get(vc, "MATCH")
        mis = row_get(vc, "MISMATCH")
        cf = row_get(vc, "COMPILE_FAIL")
        conv = row_get(vc, "CONV_FAIL") + row_get(vc, "NO_CLS")
        nps = row_get(vc, "NO_PSEUDO") + row_get(vc, "NO_EXPORT")
        dup = row_get(vc, "DUP_SKIP") + row_get(vc, "OBJ_EXTRACT_FAIL")
        rate = mat / float(n) if n else 0.0
        cratio = (mat + mis) / float(n) if n else 0.0
        mrate = mat / float(mat + mis) if (mat + mis) else 0.0
        ceiling = mat + (cf + conv + dup) * pooled_mrate
        exp_rows.append((lyr, rem.get(lyr, 0), rate, cratio, mrate,
                         mat, ceiling, n))
    L.append("| 层 | 剩余 | 观测端到端 MATCH 率 | 编译率 | 层内对拍匹配率 | "
             "剩余预期 MATCH（观测率） | 剩余预期 MATCH（墙清零上限*） |")
    L.append("|---|---:|---:|---:|---:|---:|---:|")
    exp_total_obs = 0.0
    exp_total_ceil = 0.0
    for (lyr, rr, rate, cratio, mrate, _m, ceiling, n) in exp_rows:
        eo = rr * rate
        ec = rr * (ceiling / float(n) if n else 0.0)
        exp_total_obs += eo
        exp_total_ceil += ec
        L.append("| %s | %d | %.1f%% | %.1f%% | %.1f%% | %.0f | %.0f |"
                 % (lyr, rr, rate * 100, cratio * 100, mrate * 100, eo, ec))
    L.append("| **合计** | **%d** | — | — | — | **%.0f** | **%.0f** |"
             % (sum(r[1] for r in exp_rows), exp_total_obs, exp_total_ceil))
    L.append("")
    L.append("\\* 上限口径：把所有 `COMPILE_FAIL` / `CONV_FAIL` / `NO_CLS` / "
             "`DUP_SKIP` 视为可修复，并按**全普查对拍匹配率 %.1f%%**（%d/%d）"
             "折算；B/D 层层内匹配率为 0（样本小且全是硬件），不能直接外推。"
             % (pooled_mrate * 100, _mat, _mat + _mis))
    L.append("")
    led_map = json.load(open(LEDGER, encoding="utf-8")) \
        if os.path.exists(LEDGER) else {}
    ledger_only = set(norm(a) for a in led_map) - set(last)
    decided_now = len(last) + len(ledger_only)
    match_now = sum(1 for r in last.values()
                    if r.get("verdict") == "MATCH") + sum(
        1 for a in ledger_only
        if (led_map.get(a) or {}).get("status") == "OK")
    L.append("- 当前已判定函数（results 末值 ∪ ledger）≈ **%d**，"
             "其中 MATCH（OK）≈ **%d**。" % (decided_now, match_now))
    L.append("- 若按本次观测到的端到端通过率机械推进，剩余 %d 件预计再"
             "产出 **%.0f** 件 MATCH（端点 ≈ %d + %.0f = **%.0f**）。"
             % (sum(r[1] for r in exp_rows), exp_total_obs,
                match_now, exp_total_obs, match_now + exp_total_obs))
    L.append("- 若把本轮暴露的编译墙/转换墙全部当作可修（按全普查对拍"
             "匹配率 %.1f%% 折算上限），剩余上限约 **%.0f** 件。"
             % (pooled_mrate * 100, exp_total_ceil))
    L.append("")
    n_rem = sum(r[1] for r in exp_rows)
    if tput > 0:
        hrs = n_rem / tput
        L.append("- **机械铺满**：当前吞吐 **%.0f 件/小时**（本次 %d 件 / "
                 "%.1f 小时）。跑完剩余 %d 件约需 **%.1f 小时** = "
                 "**%.0f 个 2,000 件轮次** = %.0f 个 20 件 part。"
                 % (tput, total_n, total_time / 3600.0, n_rem, hrs,
                    n_rem / 2000.0, n_rem / 20.0))
    cf_all = tot.get("COMPILE_FAIL", 0)
    fams = len([k for k in ckeys if k.startswith("C")])
    L.append("- **质量终点**：按当前产线（不修任何墙）机械跑完全池，"
             "端到端 MATCH 还有约 **%.0f** 件，全池 MATCH 约 "
             "**%.0f / 19,078 = %.1f%%**；编译/转换墙全清的上限约 "
             "**%.0f / 19,078 = %.1f%%**。"
             % (exp_total_obs,
                match_now + exp_total_obs,
                100.0 * (match_now + exp_total_obs) / 19078.0,
                match_now + exp_total_ceil,
                100.0 * (match_now + exp_total_ceil) / 19078.0))
    L.append("- **还差几轮修复**：本轮 %d 件编译墙分布在 **%d 个首错族**"
             "（C2664/C2065/C2440/C2143/C2039/C2146/C2109/C2100…）。"
             "按 R7 实测（326 件墙一轮供给修复转化 76 件 ≈ 23%%）线性外推，"
             "清完这批墙约需 **4–6 轮**同类供给修复；但易族已被 R5–R8 清掉，"
             "长尾更慢，实际更可能是 **6–8 轮**（每轮以首错 census 分桶为目标）。"
             % (cf_all, fams))
    L.append("- **结论**：机械覆盖本身是 **1 个工作日**（≈ %.1f 小时）"
             "就能铺满的事；决定最终数字的不是轮次数量，而是编译墙的清理深度。"
             "在不修墙的前提下继续铺量，终点只有约 %.1f%%；每清掉一层墙，"
             "终点按 %.1f%% 的对拍匹配率上移。"
             % ((hrs if tput else 0.0),
                100.0 * (match_now + exp_total_obs) / 19078.0,
                pooled_mrate * 100))
    L.append("")

    # ---------- name/class dimension
    L.append("## 5. 抽样构成（命名维度，仅记录不阻塞）")
    L.append("")
    L.append("| 层 | 全局/无类名 | unknown 类 | 有名类 |")
    L.append("|---|---:|---:|---:|")
    for lyr, ents in batches.items():
        g = sum(1 for e in ents if not e.get("cls"))
        u = sum(1 for e in ents if e.get("cls") == "unknown")
        named = len(ents) - g - u
        L.append("| %s | %d | %d | %d |" % (lyr, g, u, named))
    L.append("")

    L.append("## 6. 局限")
    L.append("")
    L.append("- 通过率是**当前产线成熟度**的测量值，不是理论极限；"
             "编译墙（COMPILE_FAIL）与转换墙（NO_CLS/CONV_FAIL）"
             "是本轮暴露的主要可修面。")
    L.append("- B 层剩余池仅 84 件，抽样即全量；其读数置信度低于 A/C/D。")
    L.append("- 20 件/part 的 part 内单位合并会放大同类函数的编译耦合"
             "（一个 unit 失败 → 逐件隔离重编），吞吐口径已包含该成本。")
    L.append("- 命名质量按用户裁决搁置；本报告只按层/verdict/病理统计。")
    L.append("")

    text = "\n".join(L) + "\n"
    with open(args.out, "w", encoding="utf-8", newline="\n") as f:
        f.write(text)
    print("report -> %s" % args.out)

    summary = {
        "sampled": {L: len(b) for L, b in batches.items()},
        "verdicts": {L: dict(tables[L]) for L in tables},
        "remaining_pool": dict(rem),
        "throughput": {"n": total_n, "seconds": round(total_time, 1),
                       "fns_per_hour": round(tput, 1),
                       "parts": sum(per_layer_parts.values())},
        "extrapolation": {
            "remaining": sum(r[1] for r in exp_rows),
            "match_observed": round(exp_total_obs, 1),
            "match_ceiling": round(exp_total_ceil, 1),
            "hours_at_current_tput": round(
                sum(r[1] for r in exp_rows) / tput, 2) if tput else None,
        },
    }
    with open(os.path.join(STATE, "census_summary.json"), "w",
              encoding="utf-8") as f:
        json.dump(summary, f, indent=1, ensure_ascii=False)
    print(json.dumps(summary, indent=1, ensure_ascii=False))
    return 0


if __name__ == "__main__":
    sys.exit(main())
