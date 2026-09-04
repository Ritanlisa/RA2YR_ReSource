#!/usr/bin/env python3
"""t14_pool_extender.py — 离线结构真值挖掘（CSP 架构合规版）。

架构裁决后的重写（2026-09-04, 替代权重/窗口启发式版）:
  通道 1 vtable 安装自证: 仅取**主表安装**（`mov [reg], offset vt`,
    无位移——this+0 处的对象自身 vtable）; this = 主表类的 LCA。
    多个互不相关的主表类 = COMDAT 折叠同码 → 弃（唯一性不可判）。
    次表安装（[reg+N]）是基类子对象/成员对象, 对 this 无判别力, 不参与。
  通道 2 vtable 槽位归属: this = 全部包含类祖先集交集的**唯一最小元**
    （真 LCA）; 交集有多个不可比最小元 = 不可判 → 弃。
  （原通道 3 委托构造窗口启发式已撤除——非精确数据流。）

所有判定为确定性集合运算, 无计数/权重/窗口/argmax。
输出 .omo/t14_extra_pool.json, 经 anchors/structural_truth.json 喂引擎。
"""
import json
import os
import re
import sys
from collections import Counter, defaultdict

_HERE = os.path.dirname(os.path.abspath(__file__))
PROJ = os.path.dirname(os.path.dirname(_HERE))
sys.path.insert(0, _HERE)

SNAP = os.path.join(PROJ, "decompile-results", "full_export", "src")
OUT_POOL = os.path.join(PROJ, ".omo", "t14_extra_pool.json")

# 仅匹配主表安装: [reg] 无位移
_RE_VT_PRIMARY = re.compile(
    r"\w+:\s+mov (?:dword ptr )?\[([a-z]{2,3})\], "
    r"offset (\?\?_7\S+|@?\S+?@@6B@?)")
_RE_ADDR_LINE = re.compile(r"^// addr=0x([0-9A-Fa-f]{8})")
_RE_VT_SYM = re.compile(r"^\?\?_7(.+?)@@6B@")
_RE_CRT = re.compile(r"^(std::| ATL::|Concurrency::|type_info|bad_)")


def demangle_to_canon(sym, r2c, canon_ns):
    m = _RE_VT_SYM.match(sym)
    if not m:
        return None
    cls = m.group(1)
    if _RE_CRT.match(cls):
        return None
    if cls in canon_ns:
        return cls
    return r2c.get(cls)


def unique_lca(classes, ancestors_of):
    """类集合的唯一最小公共祖先; 多个不可比最小元 → None（不可判）。"""
    common = None
    for c in classes:
        anc = ancestors_of(c)
        common = anc if common is None else (common & anc)
    if not common:
        return None
    minimals = [m for m in common
                if not any(x != m and m in ancestors_of(x)
                           for x in common)]
    return minimals[0] if len(minimals) == 1 else None


def main():
    align = json.load(open(os.path.join(
        PROJ, "anchors", "class_name_align.json"), encoding="utf-8"))
    r2c = {k: v["canon"] for k, v in align["rtti_to_canon"].items()}
    canon_ns = set(align["canon_to_rtti"]) | set(r2c.values())
    db = json.load(open(os.path.join(PROJ, "anchors", "class_db.json"),
                        encoding="utf-8"))["classes"]

    def ancestors_of(c):
        rec = db.get(c) or {}
        return set(rec.get("full_ancestors") or [c]) | {c}

    # ── 通道 1: 主表安装扫描 ──
    primaries = defaultdict(set)  # addr -> {canon classes}
    for fn in os.listdir(SNAP):
        if not fn.endswith(".cpp"):
            continue
        cur = None
        with open(os.path.join(SNAP, fn), encoding="utf-8") as f:
            for ln in f:
                m = _RE_ADDR_LINE.match(ln)
                if m:
                    cur = m.group(1).upper()
                    continue
                if cur is None or "offset " not in ln:
                    continue
                dm = _RE_VT_PRIMARY.search(ln)
                if not dm:
                    continue
                # 排除次表: 操作数显式带位移在正则里已不匹配
                canon = demangle_to_canon(dm.group(2).rstrip(";,"), r2c,
                                          canon_ns)
                if canon:
                    primaries[cur].add(canon)
    print(f"通道1 主表安装: {len(primaries)} 函数")

    # ── 通道 2: vtable 槽位归属数据 ──
    slot_classes = defaultdict(set)
    for cls, rec in db.items():
        for a in (rec.get("methods") or {}):
            slot_classes[f"0x{int(a, 16):08X}"].add(cls)

    # 现有真值（去重, 不重复入池）
    existing = set()
    tm = json.load(open(os.path.join(PROJ, "type_map.json"),
                        encoding="utf-8"))["type_map"]
    for var, info in tm.items():
        if var.endswith(":this"):
            t = info.get("type", "")
            if t and t not in ("int", "float", "char*", "VOID_PTR", "TOP", ""):
                existing.add(f"0x{int(var[:-5], 16):08X}")
    for k in json.load(open(os.path.join(
            PROJ, "anchors", "ctor_types.json"), encoding="utf-8")):
        existing.add(f"0x{int(k, 16):08X}")

    pool = {}
    n_vt = n_fold = n_slot = n_amb = 0
    # 通道 1 入池: 主表类集合的 LCA
    for addr, classes in primaries.items():
        if addr in existing:
            continue
        if len(classes) == 1:
            pool[addr] = {"class": next(iter(classes)),
                          "source": "vtable_install",
                          "evidence": sorted(classes)}
            n_vt += 1
        else:
            lca = unique_lca(classes, ancestors_of)
            if lca:
                pool[addr] = {"class": lca, "source": "vtable_install",
                              "evidence": sorted(classes)}
                n_vt += 1
            else:
                n_fold += 1  # COMDAT 折叠/无公共祖先 → 不可判
    # 通道 2 入池: 包含类的唯一最小公共祖先
    for addr, classes in slot_classes.items():
        if addr in existing or addr in pool:
            continue
        lca = unique_lca(classes, ancestors_of)
        if lca:
            pool[addr] = {"class": lca, "source": "vtable_slot",
                          "evidence": sorted(classes)[:6]}
            n_slot += 1
        else:
            n_amb += 1

    json.dump(pool, open(OUT_POOL, "w", encoding="utf-8"),
              ensure_ascii=False, indent=0)
    print(f"扩展池: {len(pool)} (install={n_vt}, slot={n_slot}; "
          f"弃: 折叠/无公共祖先={n_fold}, 多最小元不可判={n_amb})")


if __name__ == "__main__":
    main()
