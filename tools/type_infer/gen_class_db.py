#!/usr/bin/env python3
"""gen_class_db.py — OO 重建路线图 Step 2: 类数据库落单一 JSON。

把分散在 7 个数据源的类知识合并为 anchors/class_db.json，每类一记录：
  - rtti    : 原始 RTTI 名（经缺口 1 对齐折叠到 canon）+ vtable 地址 +
              构造函数（vtable 安装者）+ MI 直接基类 + 全祖先
  - layout  : sizeof + 成员偏移/名/类型（class_layouts ∪ member_types
              按偏移合并）+ **观测成员类型**（type_map 中
              `0xFUNC:this.member(0xOFF)` 变量的类型按 this 类聚合 join
              ——T9c 通道的数据库级物化，静态 header 之外的运行时证据）
  - methods : vtable 槽位成员（含继承实现，标注 slot 归属）+ CSP thiscall
              归属 + 返回类型（.return 变量，缺口 2 B10c 产物）
  - singletons : 构造存储锚定的全局实例
  - stats   : type_map 中以该类定型的变量数 + 置信度分布

canon 命名空间 = class_name_align 的 canon ∪ class_layouts ∪ member_types
（未解析 RTTI 类如 GScreen 保留原名入库——有真值无 header）。

用法: python tools/type_infer/gen_class_db.py [--report]
"""
import argparse
import json
import os
import sys
from collections import defaultdict

_HERE = os.path.dirname(os.path.abspath(__file__))
PROJ = os.path.dirname(os.path.dirname(_HERE))
sys.path.insert(0, PROJ)

SOURCES = {
    "class_layouts": os.path.join(PROJ, "tools", "class_layouts.json"),
    "rtti_hierarchy": os.path.join(PROJ, "anchors", "rtti_hierarchy.json"),
    "rtti_vtable_class": os.path.join(PROJ, "anchors", "rtti_vtable_class.json"),
    "vtable_signatures": os.path.join(_HERE, "anchors", "vtable_signatures.json"),
    "member_types": os.path.join(PROJ, "anchors", "member_types.json"),
    "ctor_types": os.path.join(PROJ, "anchors", "ctor_types.json"),
    "singleton_types": os.path.join(PROJ, "anchors", "singleton_types.json"),
    "class_name_align": os.path.join(PROJ, "anchors", "class_name_align.json"),
    "csp_functions": os.path.join(PROJ, "tools", "csp", "full_report", "csp_functions.json"),
    "type_map": os.path.join(PROJ, "type_map.json"),
}
OUT_PATH = os.path.join(PROJ, "anchors", "class_db.json")

_SCALARS = ("int", "float", "char*", "void*", "VOID_PTR", "TOP", "")


def _load(path):
    if not os.path.exists(path):
        print(f"WARN: missing source {path}", file=sys.stderr)
        return None
    with open(path, encoding="utf-8") as f:
        return json.load(f)


def build():
    layouts = _load(SOURCES["class_layouts"]) or {}
    rtti_hier = _load(SOURCES["rtti_hierarchy"]) or {}
    vt_class_raw = (_load(SOURCES["rtti_vtable_class"]) or {}).get("vtables", {})
    vt_sigs = (_load(SOURCES["vtable_signatures"]) or {}).get("signatures", {})
    member_types = _load(SOURCES["member_types"]) or {}
    ctor_types = _load(SOURCES["ctor_types"]) or {}
    singleton_types = _load(SOURCES["singleton_types"]) or {}
    align = _load(SOURCES["class_name_align"]) or {}
    csp_funcs = (_load(SOURCES["csp_functions"]) or {}).get("functions", {})
    type_map = (_load(SOURCES["type_map"]) or {}).get("type_map", {})

    r2c = {k: v["canon"] for k, v in align.get("rtti_to_canon", {}).items()}
    direct_canon = align.get("rtti_direct_canon", {})

    # ── 类注册表：canon 全集 ──
    mt_classes = set()
    for key in member_types:
        cls = key.rpartition("+")[0]
        if cls and cls != "?":
            mt_classes.add(cls)
    classes = set(layouts) | mt_classes | set(align.get("canon_to_rtti", {}))
    # 未解析 RTTI 类（GScreen 等）：有真值无 header，保留原名
    unresolved_rtti = {u["name"] for u in align.get("unresolved_rtti", [])}
    classes |= unresolved_rtti
    classes.discard("?")

    db = {c: {} for c in sorted(classes)}

    # ── rtti 节 ──
    canon_to_rtti = align.get("canon_to_rtti", {})
    for canon, insts in canon_to_rtti.items():
        db[canon]["rtti_names"] = insts
    for name in unresolved_rtti:
        db[name]["rtti_names"] = [name]
    for child, parents in direct_canon.items():
        db.setdefault(child, {})["direct_bases"] = parents
        for p in parents:
            db.setdefault(p, {})
    # 全祖先（canon 空间闭包）
    known = set(direct_canon) | {p for ps in direct_canon.values() for p in ps}

    def ancestors(c, stack=frozenset()):
        if c not in stack:
            for b in direct_canon.get(c, ()):
                if b in known or b in db:
                    yield from ancestors(b, stack | {c})
        yield c

    for c in list(db):
        if c in direct_canon:
            db[c]["full_ancestors"] = sorted(set(ancestors(c)))

    # class_layouts 单亲回退（RTTI 未覆盖的非多态类）
    for cls, info in layouts.items():
        p = info.get("parent")
        if p and "direct_bases" not in db.get(cls, {}):
            db[cls]["direct_bases"] = [p]

    # vtable 地址 → canon 类
    vt_addr_to_canon = {}
    for addr, info in vt_class_raw.items():
        cls = info.get("class")
        if not cls:
            continue
        canon = r2c.get(cls, cls)
        vt_addr_to_canon[int(addr, 16)] = canon
        db[canon].setdefault("vtables", {})[addr] = {
            "col_offset": info.get("col_offset", 0),
        }

    # vtable 槽位 → 方法记录
    methods_by_addr = defaultdict(lambda: defaultdict(dict))
    slot_members = defaultdict(list)  # canon -> [(addr, slot, vtable)]
    for _key, sig in vt_sigs.items():
        try:
            vt_base = int(sig["vtable_base"], 16)
        except (KeyError, ValueError):
            continue
        canon = vt_addr_to_canon.get(vt_base)
        if canon is None:
            continue
        addr = sig.get("addr", "")
        slot = sig.get("slot")
        slot_members[canon].append((addr, slot, sig.get("vtable_base")))
        m = methods_by_addr[addr]
        m.setdefault("vtable_slots", []).append(
            {"vtable": sig.get("vtable_base"), "slot": slot})
        if sig.get("cc"):
            m["cc"] = sig["cc"]
        if sig.get("func_name"):
            m["name"] = sig["func_name"]
    for canon, lst in slot_members.items():
        db[canon]["vtable_slot_count"] = len(lst)

    # 构造函数（vtable 安装者）
    for addr, cls in ctor_types.items():
        canon = r2c.get(cls, cls)
        db.setdefault(canon, {}).setdefault("ctors", []).append(addr)

    # 单例全局
    for addr, info in singleton_types.items():
        cls = info.get("type", "")
        canon = r2c.get(cls, cls)
        db.setdefault(canon, {}).setdefault("singletons", []).append(
            {"addr": addr, "name": info.get("name", "")})

    # ── layout 节：成员合并 ──
    for cls, info in layouts.items():
        rec = db.setdefault(cls, {})
        if info.get("size"):
            rec["size"] = info["size"]
        members = {}
        for off_s, m in (info.get("offsets") or {}).items():
            members[int(off_s)] = {
                "name": m.get("ida_name", ""),
                "type": m.get("type", ""),
                "size": m.get("size"),
                "evidence": ["class_layouts"],
            }
        rec["members"] = members
    for key, m in member_types.items():
        cls, _, off_s = key.rpartition("+")
        if not cls or cls == "?":
            continue
        try:
            off = int(off_s, 16)
        except ValueError:
            continue
        rec = db.setdefault(cls, {})
        members = rec.setdefault("members", {})
        e = members.get(off)
        if e is None:
            members[off] = {
                "name": m.get("name", ""),
                "type": m.get("type", ""),
                "confidence": m.get("confidence", ""),
                "evidence": ["member_types"],
            }
        else:
            # 两源并存：member_types 名/类型优先（header 语义名），保留 size
            if m.get("name"):
                e["name"] = m["name"]
            if m.get("type"):
                e["type"] = m["type"]
            if m.get("confidence"):
                e["confidence"] = m["confidence"]
            e.setdefault("evidence", []).append("member_types")

    # ── 观测成员类型：type_map 的 this/param0.member 聚合 ──
    import re
    _re_mem = re.compile(
        r"^(0x[0-9A-Fa-f]{8}):(this|::param0)\.member\(0x([0-9A-Fa-f]+)\)$")
    base_type_cache = {}
    obs = defaultdict(lambda: defaultdict(list))  # canon -> off -> [types]
    for var, info in type_map.items():
        m = _re_mem.match(var)
        if not m:
            continue
        base = f"{m.group(1)}:{'this' if m.group(2) == 'this' else '::param0'}"
        bt = base_type_cache.get(base)
        if bt is None:
            bt = type_map.get(base, {}).get("type", "")
            base_type_cache[base] = bt
        if not bt or bt in _SCALARS:
            continue
        t = info.get("type", "")
        if t and t not in _SCALARS:
            obs[bt][int(m.group(3), 16)].append(t)
    obs_count = 0
    for cls, by_off in obs.items():
        rec = db.get(cls)
        if rec is None:
            continue  # 非类域观察（struct 名等）——不入库
        members = rec.setdefault("members", {})
        for off, types in by_off.items():
            uniq = sorted(set(types))
            e = members.get(off)
            if e is None:
                members[off] = {"observed_types": uniq, "evidence": ["type_map_observed"]}
            else:
                e["observed_types"] = uniq
                e.setdefault("evidence", []).append("type_map_observed")
            obs_count += 1

    # ── 返回类型（缺口 2 产物）──
    for var, info in type_map.items():
        if not var.endswith(".return"):
            continue
        t = info.get("type", "")
        if t in _SCALARS:
            continue
        addr = var[:-7]
        m = methods_by_addr.get(addr)
        if m is not None:
            m["return_type"] = t
            m["return_confidence"] = info.get("confidence", "")

    # ── CSP thiscall 归属 + 参数类型 ──
    csp_owner = 0
    for addr_s, sig in csp_funcs.items():
        if sig.get("calling_convention") != "thiscall":
            continue
        params = sig.get("params", [])
        if not params:
            continue
        base = str(params[0].get("real_type", "")).rstrip("*").strip()
        if base.endswith("_csp"):
            base = base[: -len("_csp")]
        if not base or base in ("unknown", "?"):
            continue
        canon = r2c.get(base, base)
        if canon not in db:
            continue
        addr = sig.get("address", addr_s)
        m = methods_by_addr[addr]
        m.setdefault("csp_owner", canon)
        m["cc"] = "thiscall"
        m["name"] = m.get("name") or sig.get("inferred_name", "")
        csp_owner += 1
        db[canon].setdefault("csp_methods", 0)
        db[canon]["csp_methods"] = db[canon].get("csp_methods", 0) + 1

    # 方法挂回类（vtable 归属为准；CSP-only 方法挂 owner）
    for canon, lst in slot_members.items():
        rec = db[canon]
        rec["methods"] = {
            addr: methods_by_addr[addr]
            for addr, _, _ in lst if addr in methods_by_addr
        }
    for addr, m in methods_by_addr.items():
        owner = m.get("csp_owner")
        if owner and owner in db and addr not in db[owner].get("methods", {}):
            db[owner].setdefault("methods", {})[addr] = m

    # ── stats：type_map 变量数 + 置信度 ──
    stats = defaultdict(lambda: {"count": 0, "conf": defaultdict(int)})
    for info in type_map.values():
        t = info.get("type", "")
        if t and t not in _SCALARS:
            stats[t]["count"] += 1
            stats[t]["conf"][info.get("confidence", "")] += 1
    for cls, s in stats.items():
        if cls in db:
            db[cls]["type_stats"] = {
                "var_count": s["count"],
                "confidence": dict(s["conf"]),
            }

    # ── 校验报告 ──
    checks = {}
    bad_vt = [c for c, r in db.items() if "vtables" in r and not r.get("rtti_names")]
    checks["vtable_no_rtti"] = len(bad_vt)
    no_layout = [c for c, r in db.items()
                 if "rtti_names" in r and "members" not in r and "size" not in r]
    checks["rtti_no_header_layout"] = len(no_layout)
    over = []
    for c, r in db.items():
        size = r.get("size")
        if size:
            for off, m in r.get("members", {}).items():
                msz = m.get("size") or 4
                if off + (msz if isinstance(msz, int) else 4) > size:
                    over.append(f"{c}+{off:#x}")
                    break
    checks["member_overrun_size"] = len(over)

    counts = {
        "classes": len(db),
        "with_rtti": sum(1 for r in db.values() if r.get("rtti_names")),
        "with_vtable": sum(1 for r in db.values() if r.get("vtables")),
        "with_layout": sum(1 for r in db.values() if r.get("members")),
        "with_methods": sum(1 for r in db.values() if r.get("methods")),
        "with_observed_member_types": sum(
            1 for r in db.values()
            if any("observed_types" in m for m in r.get("members", {}).values())),
        "with_singletons": sum(1 for r in db.values() if r.get("singletons")),
        "with_type_stats": sum(1 for r in db.values() if r.get("type_stats")),
        "observed_member_entries": obs_count,
        "methods_total": len(methods_by_addr),
        "csp_owned_methods": csp_owner,
        "checks": checks,
    }
    return {"meta": {"generated_by": "tools/type_infer/gen_class_db.py",
                     "sources": {k: os.path.relpath(v, PROJ) for k, v in SOURCES.items()},
                     "counts": counts},
            "classes": db}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--report", action="store_true")
    args = ap.parse_args()
    out = build()
    with open(OUT_PATH, "w", encoding="utf-8") as f:
        json.dump(out, f, ensure_ascii=False, indent=1)
    size_mb = os.path.getsize(OUT_PATH) / 1e6
    print(f"wrote {OUT_PATH} ({size_mb:.1f} MB)")
    c = out["meta"]["counts"]
    for k, v in c.items():
        print(f"  {k}: {v}")
    if args.report:
        tc = sorted(
            ((n, r["type_stats"]["var_count"]) for n, r in out["classes"].items()
             if r.get("type_stats")),
            key=lambda x: -x[1])[:15]
        print("\ntype_stats top 15:")
        for n, v in tc:
            print(f"  {n}: {v}")


if __name__ == "__main__":
    main()
