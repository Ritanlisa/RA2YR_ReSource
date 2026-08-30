#!/usr/bin/env python3
"""gen_singleton_anchors.py — 构造存储推导的全局实例类型锚。

数据源：.omo/singleton_scan_raw.json（IDA 实测：对每个 RTTI 主 vtable 的
.text xref，形如 `mov dword ptr [G], vtable` 的构造存储 → 全局 G 是该
vtable 所属类的实例）。推导规则（通用，无硬编码地址）：

  同一全局收到多个类的构造存储（基类 ctor 先存、派生类 ctor 后存的
  初始化链）：取子类型关系的**最派生**类（is_subtype(a,b) → a）。
  两个互不相关的类存入同一全局（内存复用/名字误导）→ 歧义，跳过
  （不发明类型）。

输出：anchors/singleton_types.json（engine._load_singleton_anchors 消费）。
"""

import json
import os
import sys

_HERE = os.path.dirname(os.path.abspath(__file__))
_PROJ = os.path.dirname(os.path.dirname(_HERE))
RAW_PATH = os.path.join(_PROJ, ".omo", "singleton_scan_raw.json")
OUT_PATH = os.path.join(_PROJ, "anchors", "singleton_types.json")
RTTI_PATH = os.path.join(_PROJ, "anchors", "rtti_hierarchy.json")


def load_ancestors():
    with open(RTTI_PATH, "r", encoding="utf-8") as f:
        d = json.load(f)
    direct = d.get("direct", {})
    classes = set(d.get("classes", ())) | set(direct)

    anc = {}

    def get(cls, stack=frozenset()):
        if cls in anc:
            return anc[cls]
        result = {cls}
        if cls not in stack:
            for base in direct.get(cls, ()):
                if base in classes:
                    result |= get(base, stack | {cls})
        anc[cls] = result
        return result

    for c in classes:
        get(c)
    return anc, classes


def most_derived(classes, ancestors):
    """Pick the most derived class among ctor-store candidates.

    The most derived candidate is the subtype of every other candidate
    (base-ctor-then-derived-ctor initialization chains). No such candidate
    (unrelated pair = memory reuse / misleading name) → None.
    """
    cand = [c for c in classes if c in ancestors]
    if not cand:
        return None
    for c in cand:
        if all(o in ancestors.get(c, {c}) for o in cand if o != c):
            return c
    return None


def main():
    with open(RAW_PATH, "r", encoding="utf-8") as f:
        rows = json.load(f)
    ancestors, classes = load_ancestors()

    out = {}
    ambiguous = 0
    unknown_class = 0
    for row in rows:
        cls = most_derived(row["classes"], ancestors)
        if cls is None:
            if any(c in classes for c in row["classes"]):
                ambiguous += 1
            else:
                unknown_class += 1
            continue
        out[row["ea"]] = {"type": cls, "name": row["global"]}

    os.makedirs(os.path.dirname(OUT_PATH), exist_ok=True)
    with open(OUT_PATH, "w", encoding="utf-8") as f:
        json.dump(out, f, indent=1, sort_keys=True)
    print(f"singleton_types.json: {len(out)} anchors "
          f"(ambiguous skipped: {ambiguous}, unknown class: {unknown_class})")


if __name__ == "__main__":
    main()
