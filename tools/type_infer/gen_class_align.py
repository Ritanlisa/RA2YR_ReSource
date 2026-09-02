#!/usr/bin/env python3
"""gen_class_align.py — legacy↔RTTI 类名对齐表生成器（OO 路线图缺口 1）。

问题（2026-09-02 审计）：
  引擎内两套类命名体系是**不相交的图节点**——
    legacy:  class_layouts.json (1,033) + member_types.json (1,002)
             —— header 派生的干净 C++ 名（TechnoClass、VectorClass）
    rtti:    rtti_hierarchy.json (988) —— 二进制真值，模板类是 MSVC
             修饰名（?$DynamicVectorClass@PAVAircraftClass@@）
  精确交集仅 211。meet() 的 RTTI 让位是"盲让"（不知道两个名字是否
  同类就投降），T9b 成员锚是"直命中"（修饰名查 legacy 表必 miss）。

本脚本用**通用规则**（无硬编码地址/类名）推导恒等映射：
  A exact        : RTTI 名本身 ∈ canon 命名空间
  B template_base: ?$Base@Args 的 Base ∈ canon（Args 保留为证据）
  B+ arg_suffix  : 模板参数修饰码 → header 像素类型后缀（@G=unsigned
                   short → _ushort 等，MSVC 修饰码表驱动，命中即恒等）
  C suffix       : X ≡ XClass 双向后缀变体（含模板基名）
  S self_vtable  : 自有 vtable 的 RTTI 类是独立二进制身份——canon =
                   自身（无 header 对应也入库，绝不折叠到他类）

**已证伪并移除的规则 D（alias_audit，2026-09-02 复核）**：符号审计的
668 别名表是"vtable 槽位 IDA 命名多数投票"的产物——命名体系桥接，
不是恒等映射。全量核验：177 条 alias_audit 折叠的键 100% 拥有自己的
vtable（如 AllToCheerCommandClass/BeaconPlacementCommandClass 等 31 个
独立命令类被并进 CreateTeamCommand；Base64Pipe/Base64Straw/CacheStraw
被并进 Delegate）。vtable 是类的二进制身份，键自有 vtable 而目标不
共享 → 必为不同类。

canon 命名空间 = class_layouts ∪ member_types 的类名全集（header 知识）
∪ self_vtable 独立类。

输出 anchors/class_name_align.json：
  rtti_to_canon   : 恒等映射 + 规则 provenance（引擎 _to_lattice_type
                    单钩点归一 + lattice 层次图边映射共用）
  canon_to_rtti   : 反向（多实例 → canon 联合，模板参数精度按路线图
                    既定取舍折叠到族）
  rtti_direct_canon: RTTI 直接继承边映射到 canon 命名空间（自环删除，
                    多实例父列表并集）
  unresolved_rtti : 带族分类（template-instance-no-base / unknown），
                    供人工补 header 后重跑

用法: python tools/type_infer/gen_class_align.py [--report]
"""
import argparse
import json
import os
import re
import sys
from collections import defaultdict

_HERE = os.path.dirname(os.path.abspath(__file__))
PROJ = os.path.dirname(os.path.dirname(_HERE))

CLASS_LAYOUTS = os.path.join(PROJ, "tools", "class_layouts.json")
MEMBER_TYPES = os.path.join(PROJ, "anchors", "member_types.json")
RTTI_HIER = os.path.join(PROJ, "anchors", "rtti_hierarchy.json")
VT_CLASS = os.path.join(PROJ, "anchors", "rtti_vtable_class.json")
OUT_PATH = os.path.join(PROJ, "anchors", "class_name_align.json")

# ?$Base@MangledArgs@@ → Base（MSVC 模板实例修饰）
_RE_TPL = re.compile(r"^\?\$(\w+)@")

# B+: 模板参数修饰码 → header 侧像素/整数类型后缀候选
# （MSVC 修饰码：E=unsigned char, G=unsigned short, I=unsigned int,
#   H=int, J=long；header 命名约定 _ushort/_u8 等小写缩写）
_TPL_ARG_SUFFIX = {
    "G": ("_ushort", "_word", "_u16"),
    "E": ("_uchar", "_byte", "_u8"),
    "I": ("_uint", "_dword", "_u32"),
    "H": ("_int", "_i32"),
    "J": ("_long", "_i64"),
}
_RE_TPL_SCALAR_ARG = re.compile(r"^\?\$(\w+)@([EGHIJ])$")


def _load(path, what):
    if not os.path.exists(path):
        print(f"WARN: {what} missing: {path}", file=sys.stderr)
        return None
    with open(path, encoding="utf-8") as f:
        return json.load(f)


def _template_base(name: str):
    m = _RE_TPL.match(name or "")
    return m.group(1) if m else None


def build():
    layouts = _load(CLASS_LAYOUTS, "class_layouts") or {}
    member_types = _load(MEMBER_TYPES, "member_types") or {}
    rtti_hier = _load(RTTI_HIER, "rtti_hierarchy") or {}
    vt_class_raw = _load(VT_CLASS, "rtti_vtable_class") or {}

    legacy_layouts = set(layouts)
    legacy_mt = set()
    for key in member_types:
        cls = key.rpartition("+")[0]
        if cls and cls != "?":
            legacy_mt.add(cls)
    canon_ns = legacy_layouts | legacy_mt

    rtti_classes = list(rtti_hier.get("classes", ()))
    rtti_direct = rtti_hier.get("direct", {})

    # vtable 所有权：RTTI 类名 → 是否拥有自己的 vtable（S 规则判据）
    vtable_owners = {info.get("class", "") for info in vt_class_raw.get("vtables", {}).values()}

    rtti_to_canon = {}   # rtti -> {canon, rule, tpl_base}
    rule_counts = defaultdict(int)

    def resolve(rtti_name: str):
        """规则 A→B→B+→C 逐级解析。"""
        if rtti_name in canon_ns:
            return rtti_name, "exact"
        base = _template_base(rtti_name)
        for cand, rule in ((rtti_name, "exact"), (base, "template_base")):
            if cand is None:
                continue
            if cand in canon_ns:
                return cand, rule
            # B+: 模板标量参数修饰码 → header 后缀（?$X@G → X_ushort）
            m = _RE_TPL_SCALAR_ARG.match(rtti_name)
            if m and m.group(2) in _TPL_ARG_SUFFIX:
                for suf in _TPL_ARG_SUFFIX[m.group(2)]:
                    if m.group(1) + suf in canon_ns:
                        return m.group(1) + suf, "arg_suffix"
            # C: 后缀变体（双向；只对非模板基名做加后缀，避免 ?$X@Y+Class 噪声）
            if not cand.startswith("?$"):
                if cand + "Class" in canon_ns:
                    return cand + "Class", rule + "+suffix"
            if cand.endswith("Class") and cand[: -len("Class")] in canon_ns:
                return cand[: -len("Class")], rule + "+suffix"
        return None, None

    # ── A/B/B+/C: 全量 RTTI 类 ──
    for r in sorted(rtti_classes):
        canon, rule = resolve(r)
        if canon is not None:
            rtti_to_canon[r] = {
                "canon": canon, "rule": rule,
                "tpl_base": _template_base(r),
            }
            rule_counts[rule] += 1

    # ── S: 自有 vtable 的未解析 RTTI 类 = 独立二进制身份 ──
    # （规则 D 证伪后接住原先被错误折叠的 177 类；vtable 所有权是
    #   rtti_vtable_class 的二进制真值——每个 vtable 唯一属一类）
    for r in sorted(rtti_classes):
        if r in rtti_to_canon:
            continue
        if r in vtable_owners:
            rtti_to_canon[r] = {"canon": r, "rule": "self_vtable", "tpl_base": None}
            rule_counts["self_vtable"] += 1

    # ── 反向索引 ──
    canon_to_rtti = defaultdict(list)
    for r, info in rtti_to_canon.items():
        canon_to_rtti[info["canon"]].append(r)
    canon_to_rtti = {k: sorted(v) for k, v in sorted(canon_to_rtti.items())}

    # ── RTTI 直接继承边映射到 canon ──
    rtti_direct_canon = defaultdict(set)
    for child, parents in rtti_direct.items():
        c_canon = rtti_to_canon.get(child, {}).get("canon", child)
        for p in parents:
            p_canon = rtti_to_canon.get(p, {}).get("canon", p)
            if p_canon != c_canon:  # 自环（同族模板实例互指）删除
                rtti_direct_canon[c_canon].add(p_canon)
    rtti_direct_canon = {k: sorted(v) for k, v in sorted(rtti_direct_canon.items())}

    # ── 未解析残部 + 族分类 ──
    unresolved = []
    for r in sorted(set(rtti_classes) - set(rtti_to_canon)):
        fam = _template_base(r)
        unresolved.append({
            "name": r,
            "family": fam or r,
            "kind": "template-instance-no-base" if fam else "unknown",
        })

    fam_cnt = defaultdict(int)
    for u in unresolved:
        fam_cnt[u["family"]] += 1

    out = {
        "meta": {
            "generated_by": "tools/type_infer/gen_class_align.py",
            "canonical_namespace": "class_layouts ∪ member_types classes",
            "rules": ["A exact", "B template_base", "B+ arg_suffix",
                      "C suffix", "S self_vtable"],
            "counts": {
                "canon_namespace": len(canon_ns),
                "rtti_classes": len(rtti_classes),
                "resolved": len(rtti_to_canon),
                "resolved_pct": round(100.0 * len(rtti_to_canon) / max(1, len(rtti_classes)), 1),
                "unresolved": len(unresolved),
                "canon_classes_with_rtti": len(canon_to_rtti),
                "by_rule": dict(sorted(rule_counts.items())),
                "unresolved_top_families": dict(sorted(fam_cnt.items(), key=lambda x: -x[1])[:12]),
            },
        },
        "rtti_to_canon": dict(sorted(rtti_to_canon.items())),
        "canon_to_rtti": canon_to_rtti,
        "rtti_direct_canon": rtti_direct_canon,
        "unresolved_rtti": unresolved,
    }
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--report", action="store_true", help="打印人类可读报告")
    args = ap.parse_args()

    out = build()
    with open(OUT_PATH, "w", encoding="utf-8") as f:
        json.dump(out, f, ensure_ascii=False, indent=1)
    c = out["meta"]["counts"]
    print(f"wrote {OUT_PATH}")
    print(f"  canon ns: {c['canon_namespace']} | rtti: {c['rtti_classes']} | "
          f"resolved: {c['resolved']} ({c['resolved_pct']}%) | unresolved: {c['unresolved']}")
    print(f"  by_rule: {c['by_rule']}")
    if args.report:
        print("\nunresolved top families:")
        for fam, n in c["unresolved_top_families"].items():
            print(f"  {fam}: {n}")
        print("\nmulti-instance canon (模板折叠点, 前 12):")
        multi = {k: v for k, v in out["canon_to_rtti"].items() if len(v) > 1}
        for k, v in list(sorted(multi.items()))[:12]:
            print(f"  {k}: {len(v)} instances")
        print(f"  ... 共 {len(multi)} 个 canon 有多实例")


if __name__ == "__main__":
    main()
