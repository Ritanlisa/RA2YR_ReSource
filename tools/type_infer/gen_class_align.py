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
  B template_base: ?$Base@Args@@ 的 Base ∈ canon（Args 保留为证据）
  C suffix       : X ≡ XClass 双向后缀变体（含模板基名）
  D alias_audit  : 符号审计的 668 别名对（二进制证据：vtable 成员
                   资格 + IDA 名交叉），目标经 A/B/C 归一到 canon
  E transitive   : D 目标本身是 RTTI 名时接力解析

canon 命名空间 = class_layouts ∪ member_types 的类名全集（header 知识）。

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
ALIAS_AUDIT = os.path.join(PROJ, ".omo", "evidence", "alias-map-668.json")
OUT_PATH = os.path.join(PROJ, "anchors", "class_name_align.json")

# ?$Base@MangledArgs@@ → Base（MSVC 模板实例修饰）
_RE_TPL = re.compile(r"^\?\$(\w+)@")


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
    alias_audit = _load(ALIAS_AUDIT, "alias audit") or {}

    legacy_layouts = set(layouts)
    legacy_mt = set()
    for key in member_types:
        cls = key.rpartition("+")[0]
        if cls and cls != "?":
            legacy_mt.add(cls)
    canon_ns = legacy_layouts | legacy_mt

    rtti_classes = list(rtti_hier.get("classes", ()))
    rtti_direct = rtti_hier.get("direct", {})

    rtti_to_canon = {}   # rtti -> {canon, rule, tpl_base}
    rule_counts = defaultdict(int)

    def resolve(rtti_name: str):
        """规则 A→B→C 逐级解析（不含审计别名 D——其目标需先经 A/B/C）。"""
        if rtti_name in canon_ns:
            return rtti_name, "exact"
        base = _template_base(rtti_name)
        for cand, rule in ((rtti_name, "exact"), (base, "template_base")):
            if cand is None:
                continue
            if cand in canon_ns:
                return cand, rule
            # C: 后缀变体（双向；只对非模板基名做加后缀，避免 ?$X@Y+Class 噪声）
            if not cand.startswith("?$"):
                if cand + "Class" in canon_ns:
                    return cand + "Class", rule + "+suffix"
            if cand.endswith("Class") and cand[: -len("Class")] in canon_ns:
                return cand[: -len("Class")], rule + "+suffix"
        return None, None

    # ── A/B/C: 全量 RTTI 类 ──
    for r in sorted(rtti_classes):
        canon, rule = resolve(r)
        if canon is not None:
            rtti_to_canon[r] = {
                "canon": canon, "rule": rule,
                "tpl_base": _template_base(r),
            }
            rule_counts[rule] += 1

    # ── D/E: 审计别名（目标递归归一）──
    def resolve_via_audit(rtti_name: str, depth: int = 0):
        if rtti_name in rtti_to_canon or depth > 4:
            return False
        for target in alias_audit.get(rtti_name, ()):
            canon, rule = resolve(target)
            if canon is None and target not in canon_ns:
                # E: 目标本身是 RTTI 名 → 接力
                if resolve_via_audit(target, depth + 1):
                    canon = rtti_to_canon[target]["canon"]
                    rule = "transitive"
            if canon is not None:
                rtti_to_canon[rtti_name] = {
                    "canon": canon, "rule": "alias_audit" if depth == 0 else rule,
                    "tpl_base": _template_base(rtti_name),
                }
                rule_counts["alias_audit"] += 1
                return True
        return False

    for r in sorted(rtti_classes):
        resolve_via_audit(r)

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
            "rules": ["A exact", "B template_base", "C suffix", "D alias_audit",
                      "E transitive"],
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
