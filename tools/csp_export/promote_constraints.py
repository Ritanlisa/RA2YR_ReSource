#!/usr/bin/env python3
"""T4b: 约束提升 + 校验 + 引擎重跑链（计划 project-optimization.md #6）。

唯一新建项之二（复用原则 1：检索确认 286 脚本中无等价物——T4a 驱动
明确把 promote 留给本件，ida_extract.py L5678-5680 注释中的"人工校验后
重命名"步骤由此自动化）。

流程（单命令完成, 中间不留半态）:
  1) 结构校验 .rtti.json（fail closed, 触碰任何产物之前）:
     a. JSON 可载（json.load 全量解析）;
     b. 头部 total_constraints == len(constraints) 且 > 0;
     c. 五类必需约束计数全部 > 0: TYPE_SEED/ASSIGN/CALL_ARG/RETURN_TO/CALL_VTABLE;
     d. 与现行 .json 逐类计数 diff, 总量偏差 > --max-total-deviation (默认
        0.30) 视为错文件/损坏, FAIL;
     e. call_graph.rtti.json 同校验（JSON 可载 + graph 非空）, 见下"代际一致"。
  2) 备份: .json → .prev.json（原子: tmp + fsync + os.replace）。
  3) 原子替换: .rtti.json → .json（copy 到同目录 tmp + fsync + os.replace;
     .rtti.json 保留——同代二次提升的幂等性 QA 需要重读同字节）。
  4) 写 promote manifest (.omo/promote_constraints_manifest.json):
     双 SHA-256（rtti 源 + 提升后 .json）/ 计数 / 时间 / 引擎与通道结果。
  5) 串联引擎重跑: python -m tools.type_infer.engine (cwd=仓库根) →
     type_map 通道计数 (stack/param/this + total + TOP) →
     python tools/type_infer/verify_csp.py 必须 exit 0。

代际一致裁决（对字面 spec 的显式扩展, 非静默偏离）:
  engine.py L52-53 同时消费 raw_constraints.json 与 call_graph.json,
  两者由同一提取批次写出（ida_extract.py L5683/L5705）, 属同一代际。
  只提升 raw_constraints 会造成"新约束 + 旧调用图"的混合代际输入,
  属计划明令禁止的静默半态。故默认两件一起提升（与 09-17 人工提升
  惯例一致: raw_constraints.prev.json 与 call_graph.prev.json mtime
  同为 18:34:10）; --constraints-only 可显式只动 raw_constraints。

幂等语义:
  - .json 哈希 == .rtti.json 哈希 → 跳过备份/替换;
  - 引擎跳过条件 = 无需替换 且 现存 manifest 记录的 rtti 哈希/允许的
    call_graph 哈希与当前一致 且 type_map 哈希与 manifest 记录一致
    （防"已提升未重跑"崩溃半态: 若 type_map 不匹配 → 强制重跑引擎）;
  - 同 .rtti.json 二次提升: 产物字节不变, 仅 manifest 时间戳刷新。

回滚语义:
  - 引擎失败(returncode!=0 / 日志无 Done 标记): .json 从 .prev 原子恢复,
    type_map/contradictions/top_causes 从引擎前快照恢复, exit 2;
  - verify_csp 失败: 状态保留（引擎成功 = type_map 与已提升约束一致,
    回滚约束反而制造 type_map 不一致的真半态）, 显式 FAIL + exit 3。

用法:
  python tools/csp_export/promote_constraints.py
  python tools/csp_export/promote_constraints.py --constraints-only
  python tools/csp_export/promote_constraints.py --rtti <QA截断副本路径>

退出码: 0=PASS; 1=结构校验失败(未触碰任何产物); 2=引擎失败(已回滚);
        3=verify_csp 失败(状态保留, 显式 fail)。
"""
import argparse
import gc
import hashlib
import json
import os
import re
import shutil
import subprocess
import sys
import time
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
CDIR = ROOT / "tools" / "type_infer" / "constraints"
RAW_JSON = CDIR / "raw_constraints.json"
RAW_RTTI = CDIR / "raw_constraints.rtti.json"
RAW_PREV = CDIR / "raw_constraints.prev.json"
CG_JSON = CDIR / "call_graph.json"
CG_RTTI = CDIR / "call_graph.rtti.json"
CG_PREV = CDIR / "call_graph.prev.json"

TYPE_MAP = ROOT / "type_map.json"
CONTRADICT = ROOT / "contradictions.md"
TOP_CAUSES = ROOT / "top_causes.json"
MANIFEST = ROOT / ".omo" / "promote_constraints_manifest.json"
EVIDENCE_DIR = ROOT / ".omo" / "evidence"
ENGINE_LOG_DIR = ROOT / ".omo" / "evidence" / "optimization" / "t4b"
BACKUP_DIR = ROOT / ".omo" / "t4b_backups"

REQUIRED_TYPES = ("TYPE_SEED", "ASSIGN", "CALL_ARG", "RETURN_TO", "CALL_VTABLE")
ISO_FMT = "%Y-%m-%dT%H:%M:%S"
CHUNK = 1 << 22


class ValidationFailure(Exception):
    pass


def iso(ts: float = None) -> str:
    return time.strftime(ISO_FMT, time.localtime(ts if ts is not None else time.time()))


def sha256_file(path: Path) -> str:
    h = hashlib.sha256()
    with open(path, "rb") as f:
        while True:
            b = f.read(CHUNK)
            if not b:
                break
            h.update(b)
    return h.hexdigest()


def file_stat(path: Path):
    if not path.exists():
        return None
    st = path.stat()
    return {"path": str(path), "size": st.st_size,
            "mtime_iso": iso(st.st_mtime), "sha256": sha256_file(path)}


def atomic_copy(src: Path, dst: Path) -> None:
    """同目录 tmp 写入 + fsync + os.replace = 原子落地。"""
    tmp = dst.with_name(dst.name + ".t4b_tmp")
    with open(src, "rb") as fi, open(tmp, "wb") as fo:
        while True:
            b = fi.read(CHUNK)
            if not b:
                break
            fo.write(b)
        fo.flush()
        os.fsync(fo.fileno())
    os.replace(tmp, dst)


def load_constraints(path: Path) -> dict:
    """全量 JSON 解析 + 结构校验 + 五类计数。失败 raise ValidationFailure。"""
    try:
        with open(path, "r", encoding="utf-8") as f:
            data = json.load(f)
    except Exception as e:
        raise ValidationFailure(f"{path.name}: JSON 解析失败: {type(e).__name__}: {e}")
    if not isinstance(data, dict):
        raise ValidationFailure(f"{path.name}: 顶层不是对象")
    total_header = data.get("total_constraints")
    cons = data.get("constraints")
    if not isinstance(total_header, int) or total_header <= 0:
        raise ValidationFailure(f"{path.name}: total_constraints 缺失/非正 ({total_header!r})")
    if not isinstance(cons, list):
        raise ValidationFailure(f"{path.name}: constraints 不是列表")
    if len(cons) != total_header:
        raise ValidationFailure(
            f"{path.name}: total_constraints={total_header} != len(constraints)={len(cons)}")
    counts = Counter()
    malformed = 0
    for c in cons:
        if isinstance(c, dict) and isinstance(c.get("type"), str):
            counts[c["type"]] += 1
        else:
            malformed += 1
    if malformed:
        raise ValidationFailure(f"{path.name}: {malformed} 条约束缺 type 字段")
    missing = [t for t in REQUIRED_TYPES if counts.get(t, 0) <= 0]
    if missing:
        raise ValidationFailure(f"{path.name}: 必需约束类型计数为零: {missing}")
    return {"total": total_header, "type_counts": dict(counts)}


def load_call_graph(path: Path) -> dict:
    try:
        with open(path, "r", encoding="utf-8") as f:
            data = json.load(f)
    except Exception as e:
        raise ValidationFailure(f"{path.name}: JSON 解析失败: {type(e).__name__}: {e}")
    graph = data.get("graph") if isinstance(data, dict) else None
    if not isinstance(graph, dict) or len(graph) <= 0:
        raise ValidationFailure(f"{path.name}: graph 缺失或为空")
    return {"callers": len(graph)}


def read_contradictions_total():
    """contradictions.md 头部的 **Total contradictions**: N（engine T11 关闭,
    该值恒 0——与 type_map TOP 计数的差额即未判 TOP, I14 显式记账）。"""
    if not CONTRADICT.exists():
        return None
    try:
        head = CONTRADICT.read_text(encoding="utf-8", errors="replace")[:2000]
        m = re.search(r"\*\*Total contradictions\*\*: (\d+)", head)
        return int(m.group(1)) if m else None
    except OSError:
        return None


def channel_counts(type_map_path: Path) -> dict:
    """type_map 通道键计数（与 step1_csp.py 同口径）+ total + TOP。"""
    with open(type_map_path, "r", encoding="utf-8") as f:
        tm = json.load(f)["type_map"]
    stack = sum(1 for k in tm if "::stack_+" in k)
    param = sum(1 for k in tm if "::param" in k)
    this = sum(1 for k in tm if k.count(":") == 1 and k.endswith(":this"))
    top = sum(1 for v in tm.values() if v.get("type") == "TOP")
    out = {"total": len(tm), "stack": stack, "param": param, "this": this, "top": top}
    del tm
    gc.collect()
    return out


def write_evidence(name: str, payload: dict) -> Path:
    EVIDENCE_DIR.mkdir(parents=True, exist_ok=True)
    p = EVIDENCE_DIR / name
    p.write_text(json.dumps(payload, ensure_ascii=False, indent=2), encoding="utf-8")
    print(f"[t4b] evidence: {p}")
    return p


def git_head():
    try:
        return subprocess.run(["git", "rev-parse", "--short", "HEAD"],
                              capture_output=True, text=True, cwd=str(ROOT),
                              timeout=10).stdout.strip()
    except Exception:
        return None


def main() -> int:
    ap = argparse.ArgumentParser(description="T4b: 约束提升 + 校验 + 引擎重跑链")
    ap.add_argument("--rtti", default=str(RAW_RTTI),
                    help="raw_constraints 源覆盖（QA: 指向截断副本验证 fail-closed）")
    ap.add_argument("--cg-rtti", default=str(CG_RTTI), help="call_graph 源覆盖")
    ap.add_argument("--constraints-only", action="store_true",
                    help="只提升 raw_constraints, 不动 call_graph（破坏代际一致, 不建议）")
    ap.add_argument("--max-total-deviation", type=float, default=0.30,
                    help="新旧行约束总量相对偏差上限 (默认 0.30, 超出视为错文件)")
    ap.add_argument("--engine-timeout", type=int, default=7200,
                    help="引擎重跑超时秒数 (默认 7200)")
    ap.add_argument("--evidence-suffix", default="",
                    help="证据文件名后缀（多 run 留档, T4a I20 教训）")
    args = ap.parse_args()

    t0 = time.time()
    suffix = args.evidence_suffix
    ev_fail = {
        "task": "T4b promote_constraints",
        "started": iso(t0), "git_head": git_head(),
        "rtti_arg": args.rtti, "constraints_only": args.constraints_only,
    }

    raw_rtti = Path(args.rtti)
    cg_rtti = Path(args.cg_rtti)

    # ── 运行前状态快照（纯只读, 失败也不触碰）──────────────────────────
    try:
        pre = {
            "raw_json": file_stat(RAW_JSON), "raw_rtti": file_stat(raw_rtti),
            "raw_prev": file_stat(RAW_PREV),
            "cg_json": file_stat(CG_JSON), "cg_rtti": file_stat(cg_rtti),
            "cg_prev": file_stat(CG_PREV),
            "type_map": file_stat(TYPE_MAP),
        }
    except Exception as e:
        ev_fail["failures"] = [f"运行前快照失败: {e}"]
        ev_fail["verdict"] = "FAIL"
        ev_fail["wall_sec"] = round(time.time() - t0, 1)
        write_evidence(f"task-4b-promote-error{suffix}.json", ev_fail)
        return 1
    ev_fail["pre_state"] = pre

    if pre["raw_rtti"] is None:
        ev_fail["failures"] = [f"源缺失: {raw_rtti}"]
        ev_fail["verdict"] = "FAIL"
        write_evidence(f"task-4b-promote-error{suffix}.json", ev_fail)
        print(f"[t4b] FAIL: 源缺失 {raw_rtti}", file=sys.stderr)
        return 1

    # ── 1) 结构校验（全部通过前不触碰任何产物）────────────────────────
    failures = []
    try:
        new_c = load_constraints(raw_rtti)
        print(f"[t4b] .rtti 校验 OK: total={new_c['total']}")
    except ValidationFailure as e:
        ev_fail["failures"] = [str(e)]
        ev_fail["verdict"] = "FAIL"
        ev_fail["wall_sec"] = round(time.time() - t0, 1)
        write_evidence(f"task-4b-promote-error{suffix}.json", ev_fail)
        print(f"[t4b] FAIL(结构校验): {e}", file=sys.stderr)
        return 1

    new_g = None
    if not args.constraints_only:
        if pre["cg_rtti"] is None:
            ev_fail["failures"] = [f"call_graph 源缺失: {cg_rtti}"]
            ev_fail["verdict"] = "FAIL"
            ev_fail["wall_sec"] = round(time.time() - t0, 1)
            write_evidence(f"task-4b-promote-error{suffix}.json", ev_fail)
            return 1
        try:
            new_g = load_call_graph(cg_rtti)
            print(f"[t4b] call_graph.rtti 校验 OK: callers={new_g['callers']}")
        except ValidationFailure as e:
            ev_fail["failures"] = [str(e)]
            ev_fail["verdict"] = "FAIL"
            ev_fail["wall_sec"] = round(time.time() - t0, 1)
            write_evidence(f"task-4b-promote-error{suffix}.json", ev_fail)
            print(f"[t4b] FAIL(结构校验): {e}", file=sys.stderr)
            return 1

    # 旧代计数 diff（旧 .json 若损坏不阻塞——提升本身就是替换它的机会）
    old_c, diff = None, {"note": "旧 .json 无法解析, 记录跳过（提升将替换之）"}
    if pre["raw_json"] is not None:
        try:
            old_c = load_constraints(RAW_JSON)
        except ValidationFailure as e:
            diff = {"note": f"旧 .json 解析失败: {e}"}
    if old_c is not None:
        dev = abs(new_c["total"] - old_c["total"]) / old_c["total"]
        diff = {
            "total": {"old": old_c["total"], "new": new_c["total"],
                      "delta": new_c["total"] - old_c["total"],
                      "deviation": round(dev, 4)},
            "types": {t: {"old": old_c["type_counts"].get(t, 0),
                          "new": new_c["type_counts"].get(t, 0)}
                      for t in sorted(set(old_c["type_counts"]) | set(new_c["type_counts"]))},
        }
        if dev > args.max_total_deviation:
            failures.append(
                f"约束总量偏差 {dev:.1%} 超过上限 {args.max_total_deviation:.0%} "
                f"(old={old_c['total']}, new={new_c['total']}) — 疑似错文件")
    print(f"[t4b] 新旧 diff: total {diff.get('total', {}).get('old')}→{diff.get('total', {}).get('new')}")

    if failures:
        ev_fail["failures"] = failures
        ev_fail["verdict"] = "FAIL"
        ev_fail["wall_sec"] = round(time.time() - t0, 1)
        write_evidence(f"task-4b-promote-error{suffix}.json", ev_fail)
        print("[t4b] FAIL(校验):", *failures, sep="\n  - ", file=sys.stderr)
        return 1

    # T4a 产物的 CC 离线回归（记录性, 非门控——结构门控为计划 spec 红线）
    cc_check = None
    try:
        r = subprocess.run(
            [sys.executable, str(ROOT / "tools" / "type_infer" / "verify_extract_output.py"),
             "--cc", str(ROOT / ".omo" / "extracted_cc.json")],
            capture_output=True, text=True, timeout=600, cwd=str(ROOT))
        cc_tail = (r.stdout or "").strip().splitlines()
        cc_check = {"returncode": r.returncode,
                    "line": next((ln for ln in cc_tail if ln.startswith("[CC]")), None)}
    except Exception as e:
        cc_check = {"error": f"{type(e).__name__}: {e}"}
    print(f"[t4b] CC 离线回归(记录): {cc_check}")

    # ── 2/3) 备份 + 原子替换 ──────────────────────────────────────────
    raw_needs = pre["raw_json"] is None or pre["raw_json"]["sha256"] != pre["raw_rtti"]["sha256"]
    cg_needs = (not args.constraints_only) and (
        pre["cg_json"] is None or pre["cg_json"]["sha256"] != pre["cg_rtti"]["sha256"])
    promoted = []

    def do_promote(json_p: Path, rtti_p: Path, prev_p: Path, tag: str):
        """备份(原子) → 提升(原子) → 哈希校验。失败即抛。"""
        if pre[f"{tag}_json"] is not None:
            atomic_copy(json_p, prev_p)
            got = sha256_file(prev_p)
            if got != pre[f"{tag}_json"]["sha256"]:
                raise ValidationFailure(f"{tag} 备份哈希不符: {prev_p.name}")
        atomic_copy(rtti_p, json_p)
        got = sha256_file(json_p)
        if got != pre[f"{tag}_rtti"]["sha256"]:
            raise ValidationFailure(f"{tag} 提升后哈希不符")
        promoted.append(tag)

    try:
        if raw_needs:
            do_promote(RAW_JSON, raw_rtti, RAW_PREV, "raw")
            print("[t4b] raw_constraints 已提升 (.prev 保留旧代)")
        else:
            print("[t4b] raw_constraints 哈希已一致, 跳过替换")
        if cg_needs:
            do_promote(CG_JSON, cg_rtti, CG_PREV, "cg")
            print("[t4b] call_graph 已提升 (.prev 保留旧代)")
        elif not args.constraints_only:
            print("[t4b] call_graph 哈希已一致, 跳过替换")
    except (ValidationFailure, OSError) as e:
        # 提升阶段失败: 尽力恢复 .json, fail closed
        rb = []
        for tag, jp, pp in (("raw", RAW_JSON, RAW_PREV), ("cg", CG_JSON, CG_PREV)):
            if tag in promoted and pp.exists():
                atomic_copy(pp, jp)
                rb.append(tag)
        ev_fail["failures"] = [f"提升失败: {e}"]
        ev_fail["rolled_back"] = rb
        ev_fail["verdict"] = "FAIL"
        ev_fail["wall_sec"] = round(time.time() - t0, 1)
        write_evidence(f"task-4b-promote-error{suffix}.json", ev_fail)
        print(f"[t4b] FAIL(提升): {e} (已回滚: {rb})", file=sys.stderr)
        return 1

    # ── 4) manifest 骨架（引擎结果出来后补全落盘）────────────────────
    manifest = {
        "task": "T4b promote_constraints",
        "timestamp": iso(),
        "git_head": git_head(),
        "constraints": {
            "rtti": pre["raw_rtti"], "promoted": file_stat(RAW_JSON),
            "prev": file_stat(RAW_PREV), "diff_vs_prev": diff,
            "type_counts": new_c["type_counts"],
        },
        "call_graph": (
            {"rtti": pre["cg_rtti"], "promoted": file_stat(CG_JSON),
             "prev": file_stat(CG_PREV), "callers": new_g["callers"]}
            if not args.constraints_only else {"skipped": "constraints-only"}),
        "cc_offline_check": cc_check,
        "engine": {},
        "verify_csp": {},
    }

    # ── 引擎是否需要重跑（幂等判定）──────────────────────────────────
    engine_needed = raw_needs or cg_needs
    rerun_reason = "代际更新（.json 与 .rtti 哈希不一致）→ 引擎重跑" if engine_needed else None
    skip_reason = None
    prev_manifest = None
    if MANIFEST.exists() and not engine_needed:
        try:
            prev_manifest = json.loads(MANIFEST.read_text(encoding="utf-8"))
        except Exception:
            prev_manifest = None
        same_gen = (
            prev_manifest is not None
            and (prev_manifest.get("constraints", {}).get("rtti", {}) or {}).get("sha256")
                == pre["raw_rtti"]["sha256"]
            and (args.constraints_only
                 or (prev_manifest.get("call_graph", {}) or {}).get("rtti", {}).get("sha256")
                 == pre["cg_rtti"]["sha256"])
            and pre["type_map"] is not None
            and (prev_manifest.get("engine", {}) or {}).get("type_map_sha256")
                == pre["type_map"]["sha256"]
        )
        if same_gen:
            skip_reason = ("同代重入: .json==.rtti 哈希一致且 type_map 与 manifest "
                           "记录一致 → 引擎跳过（幂等）")
        else:
            engine_needed = True
            rerun_reason = ("manifest 缺失/记录与当前产物不一致（疑似提升-引擎间崩溃"
                            "半态）→ 强制引擎重跑")

    manifest["engine"]["needed"] = engine_needed
    manifest["engine"]["skip_reason"] = skip_reason
    if engine_needed:
        manifest["engine"]["rerun_reason"] = rerun_reason

    if not engine_needed:
        prev_eng = (prev_manifest or {}).get("engine", {})
        prev_cc = prev_eng.get("channel_counts")
        top_count = prev_eng.get("type_map_top_count")
        contrad = prev_eng.get("contradictions_reported")
        if top_count is None or not (prev_cc or {}).get("post"):
            cc = channel_counts(TYPE_MAP)
            top_count = top_count if top_count is not None else cc["top"]
            prev_cc = prev_cc or {"post": cc}
        if contrad is None:
            contrad = read_contradictions_total()
        manifest["engine"].update({
            "ran": False, "note": skip_reason,
            "type_map_sha256": pre["type_map"]["sha256"],
            "channel_counts": {"post": prev_cc["post"]},
            "type_map_top_count": top_count,
            "contradictions_reported": contrad,
        })
        MANIFEST.parent.mkdir(parents=True, exist_ok=True)
        MANIFEST.write_text(json.dumps(manifest, ensure_ascii=False, indent=2),
                            encoding="utf-8")
        ev_pass = dict(manifest)
        ev_pass["wall_sec"] = round(time.time() - t0, 1)
        ev_pass["verdict"] = "PASS"
        write_evidence(f"task-4b-promote-pass{suffix}.json", ev_pass)
        print(f"[t4b] PASS(幂等, 引擎跳过, wall={ev_pass['wall_sec']}s)")
        return 0

    # ── 5) 引擎重跑（先快照可回滚产物）───────────────────────────────
    BACKUP_DIR.mkdir(parents=True, exist_ok=True)
    engine_pre_hashes = {}
    pre_backups = {}
    for p in (TYPE_MAP, CONTRADICT, TOP_CAUSES):
        if p.exists():
            engine_pre_hashes[p.name] = sha256_file(p)
            bak = BACKUP_DIR / f"{p.name}.pre_engine.bak"
            atomic_copy(p, bak)
            pre_backups[p.name] = bak
    pre_channels = channel_counts(TYPE_MAP) if TYPE_MAP.exists() else None

    ENGINE_LOG_DIR.mkdir(parents=True, exist_ok=True)
    log_path = ENGINE_LOG_DIR / f"engine_{time.strftime('%Y%m%d_%H%M%S')}.log"
    t_eng = time.time()
    eng_rc, eng_err = None, None
    try:
        with open(log_path, "w", encoding="utf-8") as logf:
            proc = subprocess.run(
                [sys.executable, "-m", "tools.type_infer.engine"],
                cwd=str(ROOT), stdout=logf, stderr=subprocess.STDOUT,
                timeout=args.engine_timeout)
        eng_rc = proc.returncode
    except subprocess.TimeoutExpired as e:
        eng_err = f"引擎超时 (>{args.engine_timeout}s): {type(e).__name__}"
    except OSError as e:
        eng_err = f"引擎启动失败: {type(e).__name__}: {e}"
    eng_wall = round(time.time() - t_eng, 1)
    log_tail = log_path.read_text(encoding="utf-8", errors="replace").strip().splitlines()[-8:]
    manifest["engine"].update({
        "ran": True, "returncode": eng_rc, "wall_sec": eng_wall,
        "log": str(log_path), "log_tail": log_tail,
        "timeout_sec": args.engine_timeout,
    })
    if eng_err:
        manifest["engine"]["error"] = eng_err
    print(f"[t4b] 引擎重跑完成 rc={eng_rc} wall={eng_wall}s log={log_path.name}")

    if eng_err or eng_rc != 0 or not any("Done." in ln for ln in log_tail):
        # 引擎失败 → 回滚约束 + 回滚引擎产物, 不留"已提升未重跑"半态
        rb = list(rolled_back)
        for tag, jp, pp in (("raw", RAW_JSON, RAW_PREV), ("cg", CG_JSON, CG_PREV)):
            if tag in promoted and pp.exists():
                atomic_copy(pp, jp)
                rb.append(f"{tag}(restore)")
        for name, bak in pre_backups.items():
            p = ROOT / name
            if engine_pre_hashes.get(name) and sha256_file(p) != engine_pre_hashes[name]:
                atomic_copy(bak, p)
                rb.append(f"{name}(restore)")
        manifest["engine"]["rolled_back"] = rb
        manifest["verdict"] = "FAIL"
        MANIFEST.write_text(json.dumps(manifest, ensure_ascii=False, indent=2),
                            encoding="utf-8")
        ev_fail2 = dict(manifest)
        ev_fail2["failures"] = [eng_err or
                                f"引擎失败 rc={eng_rc} (已全部回滚: {rb})"]
        ev_fail2["rolled_back"] = rb
        ev_fail2["wall_sec"] = round(time.time() - t0, 1)
        write_evidence(f"task-4b-promote-fail{suffix}.json", ev_fail2)
        print("[t4b] FAIL(引擎) — 已回滚:", rb, file=sys.stderr)
        return 2

    # 通道计数 + TOP 复验（I14: 引擎重跑后 type_map TOP 必须显式记账）
    post_channels = channel_counts(TYPE_MAP)
    contrad_reported = read_contradictions_total()
    manifest["engine"].update({
        "type_map_sha256": sha256_file(TYPE_MAP),
        "channel_counts": {"pre": pre_channels, "post": post_channels},
        "type_map_top_count": post_channels["top"],
        "contradictions_reported": contrad_reported,
    })
    print(f"[t4b] 通道计数 pre={pre_channels}")
    print(f"[t4b] 通道计数 post={post_channels}")
    print(f"[t4b] I14 记账: type_map TOP={post_channels['top']}, "
          f"contradictions.md 报告={contrad_reported} (T11 关闭, 差额为未判 TOP)")

    # ── verify_csp（七通道, 必须 exit 0）─────────────────────────────
    t_v = time.time()
    v_rc, v_err = None, None
    v_out = ""
    try:
        vr = subprocess.run(
            [sys.executable, str(ROOT / "tools" / "type_infer" / "verify_csp.py")],
            capture_output=True, text=True, timeout=1800, cwd=str(ROOT))
        v_rc, v_out = vr.returncode, vr.stdout or ""
    except subprocess.TimeoutExpired as e:
        v_err = f"verify_csp 超时: {type(e).__name__}"
    except OSError as e:
        v_err = f"verify_csp 启动失败: {type(e).__name__}: {e}"
    v_tail = v_out.strip().splitlines()[-12:]
    manifest["verify_csp"] = {
        "returncode": v_rc, "wall_sec": round(time.time() - t_v, 1),
        "verdict_line": next((ln for ln in v_tail if ln.startswith("VERDICT")), None),
        "tail": v_tail,
    }
    if v_err:
        manifest["verify_csp"]["error"] = v_err
    print(f"[t4b] verify_csp rc={v_rc}")

    if v_err or v_rc != 0:
        # 状态保留（回滚约束会制造 type_map 不一致的真半态）, 显式 fail
        manifest["verdict"] = "FAIL"
        MANIFEST.write_text(json.dumps(manifest, ensure_ascii=False, indent=2),
                            encoding="utf-8")
        ev_fail3 = dict(manifest)
        ev_fail3["failures"] = [v_err or
                                "verify_csp.py exit!=0 (状态保留, 未回滚 — 见脚本回滚语义)"]
        ev_fail3["wall_sec"] = round(time.time() - t0, 1)
        write_evidence(f"task-4b-promote-fail{suffix}.json", ev_fail3)
        print("[t4b] FAIL(verify_csp) — 状态保留, 显式失败", file=sys.stderr)
        return 3

    # ── PASS: 清理引擎前快照（回滚点不再需要）────────────────────────
    for bak in pre_backups.values():
        try:
            bak.unlink()
        except OSError:
            pass
    manifest["verdict"] = "PASS"
    MANIFEST.parent.mkdir(parents=True, exist_ok=True)
    MANIFEST.write_text(json.dumps(manifest, ensure_ascii=False, indent=2),
                        encoding="utf-8")
    ev_pass = dict(manifest)
    ev_pass["wall_sec"] = round(time.time() - t0, 1)
    write_evidence(f"task-4b-promote-pass{suffix}.json", ev_pass)
    print(f"[t4b] PASS (wall={ev_pass['wall_sec']}s, "
          f"type_map={post_channels['total']}, top={post_channels['top']})")
    return 0


if __name__ == "__main__":
    sys.exit(main())
