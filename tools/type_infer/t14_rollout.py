#!/usr/bin/env python3
"""t14_rollout.py — T14 批量铺开: 全类 this 类型回写 IDA。

在 ida_apply_t14.py（试点验证过的单类回写器）之上加两道规模化工能:

  1. **vtable 双门控**: 只应用同时满足 (a) IDA 命名 Class::Method、
     (b) 函数地址 ∈ class_db[Class].methods（vtable 槽位成员）的函数。
     单 IDA 名门会被审计发现的 425 个错名污染（错名函数的 this 会被
     设成错误类, 反编译静默劣化）; vtable 槽位成员资格是二进制真值。
  2. **断点续跑**: 进度 checkpoint（.omo/t14_rollout_state.json），可中断
     重跑; 每 SAVE_EVERY 个类 idb_save 一次防止中途丢失。

流程: 全量 method 函数一次拉取（分页）→ 按类分组 → 双门控过滤 →
原型导出（export_funcs 上限 10/次）→ 逐类 50-批应用。

用法:
  python tools/type_infer/t14_rollout.py [--dry-run] [--max-classes N]
"""
import argparse
import json
import os
import re
import sys
import time

_HERE = os.path.dirname(os.path.abspath(__file__))
PROJ = os.path.dirname(os.path.dirname(_HERE))
sys.path.insert(0, _HERE)

from ida_apply_t14 import call, rewrite_this  # noqa: E402

CLASS_DB_PATH = os.path.join(PROJ, "anchors", "class_db.json")
STATE_PATH = os.path.join(PROJ, ".omo", "t14_rollout_state.json")
REPORT_PATH = os.path.join(PROJ, ".omo", "t14_rollout_report.json")
SAVE_EVERY = 30
_RE_CLASS = re.compile(r"^([A-Za-z_][A-Za-z0-9_]*)::")
_RE_INTERNAL_ID = re.compile(r"#\d+")


METHODS_CACHE = os.path.join(PROJ, ".omo", "t14_methods_cache.json")


def fetch_all_methods(use_cache: bool = True) -> list[dict]:
    """分页拉取 IDA 全部 `X::Y` 命名函数（磁盘缓存，断点续跑免重付 ~9min）。

    服务端每响应硬顶 10 条且 next_offset 语义不可靠（跳 count 不跳页），
    故按实际返回数步进 offset，直到空页。"""
    if use_cache and os.path.exists(METHODS_CACHE):
        cached = json.load(open(METHODS_CACHE, encoding="utf-8"))
        if cached:
            print(f"  方法列表缓存命中: {len(cached)}", flush=True)
            return cached
    out, offset = [], 0
    while True:
        r = call("func_query", {"queries": [
            {"name_regex": "::", "count": 10, "offset": offset,
             "sort_by": "addr"}]})
        d = r[0] if isinstance(r, list) else r
        page = d.get("data", [])
        if not page:
            break
        out.extend(page)
        offset += len(page)
        if offset % 500 == 0:
            print(f"  ...已拉取 {len(out)} 个方法", flush=True)
    if out:
        json.dump(out, open(METHODS_CACHE, "w", encoding="utf-8"),
                  ensure_ascii=False)
    return out


def export_protos(addrs: list[str]) -> dict[str, dict]:
    byaddr = {}
    for i in range(0, len(addrs), 10):
        chunk = addrs[i:i + 10]
        try:
            p = call("export_funcs", {"addrs": chunk, "format": "json"})
        except RuntimeError as e:
            print(f"  export 失败 @{i}: {e}", flush=True)
            continue
        for f in p.get("functions", []):
            na = _norm_addr(f["addr"])
            if na:
                byaddr[na] = f
    return byaddr


def name_anon_params(proto: str) -> str:
    """非 this 匿名参数补合成名（`_BYTE *)` → `_BYTE *aN)`）。

    MCP 类型落盘的隐性规则：非 this 参数不命名时解析报 ok 但静默
    不持久化（0x424b50 A/B 实证：无名 `_BYTE *` 丢失、`_BYTE *a2` 落盘）。
    """
    start = proto.find("(")
    if start < 0 or not proto.endswith(")"):
        return proto
    head = proto[: start + 1]
    body = proto[start + 1: -1]
    parts, cur, depth = [], "", 0
    for ch in body:
        if ch == "," and depth == 0:
            parts.append(cur)
            cur = ""
            continue
        if ch in "(<[":
            depth += 1
        elif ch in ")>]":
            depth -= 1
        cur += ch
    if cur.strip():
        parts.append(cur)
    fixed = []
    for idx, part in enumerate(parts):
        p = part.strip()
        if not p:
            continue
        if p.endswith("*this") or p.endswith("&this") or p == "void":
            fixed.append(p)
        elif p.endswith("*") or p.endswith("&"):
            fixed.append(f"{p} a{idx}")
        else:
            fixed.append(p)
    return f"{head}{', '.join(fixed)})"


def _norm_addr(a: str) -> str:
    """地址归一为 8 位补零小写（func_query 回 0x414bb0、class_db 键是
    0x00414BB0——本日第三次地址格式踩坑，统一 int 归一）。"""
    try:
        return f"0x{int(a, 16):08x}"
    except (ValueError, TypeError):
        return ""


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--max-classes", type=int, default=0)
    ap.add_argument("--only-class", default="")
    ap.add_argument("--retype", action="store_true",
                    help="强制重 set 已定型函数（struct 重建后旧 ordinal 引用"
                         "需重解析——declare_type 替换不迁移存量签名引用）")
    args = ap.parse_args()

    health = call("server_health", {})
    print(f"IDB: {health.get('idb_path')} | hexrays: {health.get('hexrays_ready')}",
          flush=True)

    db = json.load(open(CLASS_DB_PATH, encoding="utf-8"))["classes"]
    # 门控集合: 类名 → vtable 槽位函数地址集（小写归一）
    allowed = {}
    for cname, rec in db.items():
        if not re.match(r"^[A-Za-z_][A-Za-z0-9_]*$", cname):
            continue  # mangled/@ 修饰类名不适合 IDA :: 前缀匹配
        slots = rec.get("methods") or {}
        if slots:
            allowed[cname] = {_norm_addr(a) for a in slots if _norm_addr(a)}
    print(f"class_db 可门控类: {len(allowed)}", flush=True)

    state = {"done_classes": [], "applied": 0, "fail": 0, "skip_done": 0,
             "skip_shape": 0, "skip_gate": 0, "skip_no_struct": 0}
    if os.path.exists(STATE_PATH):
        state = json.load(open(STATE_PATH, encoding="utf-8"))
        state.setdefault("skip_no_struct", 0)
        print(f"断点续跑: 已完成 {len(state['done_classes'])} 类, "
              f"applied={state['applied']}", flush=True)
    done = set(state["done_classes"])

    # struct 预过滤: 仅 IDB 中存在同名 UDT 的类才可能持久化（无 struct 类
    # 的编辑解析报 ok 但静默蒸发——AddTeamCommand 4/4 两轮回验实证）。
    # 这些类是 struct 补全工作包（增量→绝对偏移映射 + declare_type）的对象。
    struct_classes = set()
    cand_names = sorted(
        c for c, rec in db.items()
        if re.match(r"^[A-Za-z_][A-Za-z0-9_]*$", c) and (rec.get("methods") or {}))
    for i in range(0, len(cand_names), 50):
        r = call("type_inspect", {"queries": [{"name": c} for c in
                                              cand_names[i:i + 50]]})
        for item in (r if isinstance(r, list) else []):
            if item.get("exists") and item.get("is_udt") \
                    and (item.get("size") or 0) > 8:
                struct_classes.add(item["name"])
    print(f"IDB struct 预过滤: {len(struct_classes)}/{len(cand_names)} 类可应用",
          flush=True)

    t0 = time.time()
    methods = fetch_all_methods()
    print(f"IDA 命名方法总数 (:: 风格): {len(methods)}", flush=True)
    # 下划线风格（Task 19 ::→_ 产物）定向补拉: 每 struct 类一次精确查询
    n_us = 0
    for cls in sorted(struct_classes):
        r = call("func_query", {"queries": [
            {"name_regex": f"^{re.escape(cls)}_", "count": 0, "sort_by": "addr"}]})
        d = r[0] if isinstance(r, list) else r
        for f in d.get("data", []):
            if re.match(rf"^{re.escape(cls)}_\w+$", f.get("name", "")):
                methods.append(f)
                n_us += 1
    print(f"IDA 命名方法总数 (含 _ 风格补拉): {len(methods)} (+{n_us})", flush=True)

    # 双门控分组（+struct 门）。两种 IDA 命名风格:
    #   `Class::Method` 与 `Class_Method`（Task 19 的 ::→_ 产物——假阳性由
    #   vtable 门控兜底：非该类槽位成员的下划线名一律剔除）
    by_class = {}
    for m in methods:
        name = m.get("name", "")
        mm = _RE_CLASS.match(name)
        cls = mm.group(1) if mm else None
        if cls is None:
            mu = re.match(r"^([A-Za-z_]\w*)_(\w+)$", name)
            if mu and mu.group(1) in allowed and mu.group(1) in struct_classes:
                cls = mu.group(1)
        if cls is None:
            continue
        if cls not in allowed:
            continue
        if cls not in struct_classes:
            state["skip_no_struct"] += 1
            continue
        a = _norm_addr(m["addr"])
        if not a or a not in allowed[cls]:
            state["skip_gate"] += 1  # IDA 名与 vtable 真值不符——审计错名保护
            continue
        by_class.setdefault(cls, {})[a] = name

    print(f"双门控后: {len(by_class)} 类, "
          f"{sum(len(v) for v in by_class.values())} 函数 "
          f"(门控剔除 {state['skip_gate']})", flush=True)

    # 已完成类剔除
    todo = [c for c in sorted(by_class) if c not in done]
    if args.only_class:
        todo = [c for c in todo if c == args.only_class]
    if args.max_classes:
        todo = todo[: args.max_classes]
    print(f"待处理: {len(todo)} 类", flush=True)

    since_save = 0
    per_class_stats = {}
    for ci, cls in enumerate(todo):
        targets = by_class[cls]
        protos = export_protos(list(targets))
        edits = []
        for a, name in sorted(targets.items()):
            p = protos.get(a)
            if not p:
                state["skip_shape"] += 1
                continue
            proto = (p.get("prototype") or "").strip()
            if not proto:
                state["skip_shape"] += 1
                continue
            if f"{cls} *this" in proto and not args.retype:
                state["skip_done"] += 1
                continue
            new_proto = rewrite_this(proto, cls)
            if new_proto is None:
                state["skip_shape"] += 1
                continue
            if _RE_INTERNAL_ID.search(new_proto):
                # this 位的 #NNN 已被改写消除；残留的是其他参数位的
                # 内部 ID（#375 *）——类型解析器无法重解析，跳过
                state["skip_shape"] += 1
                continue
            named = new_proto.replace("__thiscall(", f"__thiscall {name}(", 1)
            edits.append({"addr": p["addr"], "ty": name_anon_params(named),
                          "expect": a})

        ok = fail = 0
        if edits and not args.dry_run:
            pending = list(edits)
            for attempt in range(2):
                if not pending:
                    break
                for i in range(0, len(pending), 50):
                    chunk = pending[i:i + 50]
                    try:
                        res = call("type_apply_batch", {"batch": {
                            "edits": [{k: v for k, v in e.items() if k != "expect"}
                                      for e in chunk]}})
                    except RuntimeError as ex:
                        fail += len(chunk)
                        print(f"  BATCH FAIL {cls}: {ex}", flush=True)
                        continue
                    items = res.get("results", []) if isinstance(res, dict) else res
                    if isinstance(items, list):
                        for it in items:
                            if it.get("ok"):
                                ok += 1
                            else:
                                fail += 1
                # 回验（解析 ok ≠ 持久化——首轮铺开 570 "ok" 蒸发的教训）
                verify = export_protos(
                    [e.get("expect") or e["addr"] for e in pending])
                lost = [e for e in pending
                        if f"{cls} *this" not in
                        ((verify.get(e.get("expect") or e["addr"]) or {})
                         .get("prototype") or "")]
                if not lost:
                    break
                print(f"  回验: {cls} {len(lost)}/{len(pending)} 未落盘（"
                      f"{'重试' if attempt == 0 else '放弃'}）", flush=True)
                ok -= len(lost)
                fail += len(lost) if attempt == 1 else 0
                pending = lost

        state["applied"] += ok
        state["fail"] += fail
        per_class_stats[cls] = {"candidates": len(targets), "edits": len(edits),
                                "ok": ok, "fail": fail}
        state["done_classes"].append(cls)
        json.dump(state, open(STATE_PATH, "w", encoding="utf-8"),
                  ensure_ascii=False)
        since_save += 1
        if not args.dry_run and (since_save >= SAVE_EVERY or ci == len(todo) - 1):
            if state["fail"] == 0 or since_save >= SAVE_EVERY * 4:
                call("idb_save", {})
                since_save = 0
        print(f"[{ci+1}/{len(todo)}] {cls}: {len(targets)} cand, "
              f"{len(edits)} edits, ok={ok} fail={fail} "
              f"(累计 applied={state['applied']}, {time.time()-t0:.0f}s)",
              flush=True)

    if not args.dry_run:
        call("idb_save", {})
        print("idb_save 完成", flush=True)

    json.dump({"state": state, "per_class": per_class_stats},
              open(REPORT_PATH, "w", encoding="utf-8"), ensure_ascii=False, indent=1)
    print(f"报告: {REPORT_PATH}", flush=True)
    print(f"终态: applied={state['applied']} fail={state['fail']} "
          f"skip_done={state['skip_done']} skip_shape={state['skip_shape']} "
          f"skip_gate={state['skip_gate']}", flush=True)


if __name__ == "__main__":
    main()
