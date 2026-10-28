#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""gen_layout_evidence.py —— 二进制访问证据 → anchors/layout_evidence.json。

目的
    minclass 求解器的候选集合被 tools/class_layouts.json 的声明尺寸拖累：
    大量类声明过小（例 AudioController 20B，而成员函数 this 访问达 0x17C），
    使 C1（成员访问）在 C2（this 传递）钉住唯一类时把该类排除 → 空域冲突。
    本生成器从 raw_constraints.json 的 MEMBER_ACCESS 边提取二进制访问证据，
    产出"观测范围"（observed extent，仅是尺寸下界，不是 sizeof）。

证据通道（优先级递减，函数级归属）
    1. ctor_types      anchors/ctor_types.json            (rank-3 二进制自证)
    2. vtable_install  anchors/structural_truth.json      (rank-3，仅补 1/2 未覆盖函数)
    函数归属冲突（同一函数双通道类名不同，canon 化后仍不同）→ 取 ctor_types，计数入 meta。

滤噪（bogus-offset filter）
    offset > 4096 且同函数/同类不存在任何 offset<=4096 的合法访问落在其 ±64B 内
    → 丢弃，逐条记录进 dropped。
    注：>4096 的噪声带自身常紧密成簇（0x5518-0x5568、0x3f050-0x3f070），
    邻接判定必须以 <=4096 的合法访问区为参照（"与合法访问区断连"），
    否则噪声互相"作证"而漏滤。实测该口径复现 43 sites / 5 classes。

输出 anchors/layout_evidence.json
    meta      : 计数、通道统计、测量复现（555/151 对等）、dropped
    classes   : {类: {declared_size, observed_extent, extent_source,
                      extra_offsets:[{off,width,count}], samples:[func...]}}
    observed_extent = max(offset+width)；是对象尺寸的**下界**——对象可以比任何
    被访问偏移更大；sizeof 唯一精确来源仍是 C5 (operator new)。

用法
    python tools/csp_export/gen_layout_evidence.py [--out anchors/layout_evidence.json]
"""
import argparse
import collections
import io
import json
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
BOGUS_OFF = 4096
BOGUS_WIN = 64


def jload(path, dflt=None):
    p = path if os.path.isabs(path) else os.path.join(ROOT, path)
    if not os.path.exists(p):
        return dflt
    with io.open(p, encoding="utf-8") as fh:
        return json.load(fh)


def build_canon():
    """类名 canon 化：DB 名 → alias → 剥 @ → ?$Base@ 模板基名。"""
    db = jload("anchors/class_db.json", {}) or {}
    names = set((db.get("classes") or db).keys()) if db else set()
    align = jload("anchors/class_name_align.json", {}) or {}
    malias = jload("anchors/mangled_alias.json", {}) or {}
    alias = {}
    for rn, rec in (align.get("rtti_to_canon") or {}).items():
        c = rec.get("canon") if isinstance(rec, dict) else None
        if isinstance(c, str) and c in names:
            alias.setdefault(rn, c)
    for k, v in (malias or {}).items():
        if isinstance(v, str) and v in names:
            alias.setdefault(k, v)
        elif isinstance(v, dict):
            for key in ("canon", "canonical", "name"):
                if v.get(key) in names:
                    alias.setdefault(k, v[key])
                    break

    def canon(name):
        if not isinstance(name, str) or not name.strip():
            return None
        s = name.strip()
        if s in names:
            return s
        if s in alias:
            return alias[s]
        t = s
        for _ in range(8):
            if t in names:
                return t
            if t in alias:
                return alias[t]
            if t.endswith("@"):
                t = t[:-1]
                continue
            break
        if s.startswith("?$"):
            base = s[2:].split("@", 1)[0]
            if base in names:
                return base
        return None

    return canon


def declared_size_of(cls, lay, dbcls):
    r = lay.get(cls)
    if r and isinstance(r.get("size"), int):
        return r["size"]
    d = dbcls.get(cls)
    if isinstance(d, dict) and isinstance(d.get("size"), int):
        return d["size"]
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", default="anchors/layout_evidence.json")
    args = ap.parse_args()

    raw = jload("tools/type_infer/constraints/raw_constraints.json")["constraints"]
    ct = jload("anchors/ctor_types.json", {}) or {}
    stt = (jload("anchors/structural_truth.json", {}) or {}).get("vtable_install") or {}
    lay = jload("tools/class_layouts.json", {}) or {}
    dbcls = (jload("anchors/class_db.json", {}) or {}).get("classes") or {}
    canon = build_canon()

    # ---- 函数归属（ctor 优先，vt 兜底） ----
    fn2cls = {}          # fn(int) -> (canon_class, channel)
    disagree = 0
    canon_miss = 0
    for k, v in ct.items():
        c = canon(v)
        if c is None:
            canon_miss += 1
            continue
        fn2cls[int(k, 16)] = (c, "ctor_types")
    for k, v in stt.items():
        a = int(k, 16)
        c = canon(v)
        if c is None:
            canon_miss += 1
            continue
        if a in fn2cls:
            if fn2cls[a][0] != c:
                disagree += 1        # ctor_types 优先
            continue
        fn2cls[a] = (c, "vtable_install")
    print("[map] ctor=%d vt_total=%d fn2cls=%d (vt-only=%d disagree=%d canon_miss=%d)"
          % (len(ct), len(stt), len(fn2cls),
             sum(1 for _, ch in fn2cls.values() if ch == "vtable_install"),
             disagree, canon_miss), flush=True)

    # ---- this 访问站点 ----
    fn_sites = collections.defaultdict(list)      # fn -> [(off, w, site_addr)]
    for e in raw:
        if e.get("type") != "MEMBER_ACCESS":
            continue
        b = e.get("base")
        if not (isinstance(b, str) and b.endswith(":this")):
            continue
        a = int(b.split(":")[0], 16)
        if a not in fn2cls:
            continue
        try:
            o = int(e.get("offset") or 0)
        except (TypeError, ValueError):
            continue
        w = e.get("width")
        w = int(w) if isinstance(w, (int, float)) and w > 0 else 4
        fn_sites[a].append((o, w, e.get("addr")))

    # ---- 滤噪 + 类级聚合 ----
    dropped = []
    cls_sites = collections.defaultdict(lambda: collections.defaultdict(
        lambda: {"width": 0, "count": 0, "funcs": set(), "channels": set()}))
    cls_decl = {}
    n_pairs = set()
    gap_pairs = set()
    n_sites_genuine = 0
    n_sites_bogus = 0
    for a in sorted(fn_sites):
        cls, channel = fn2cls[a]
        sites = fn_sites[a]
        ds = declared_size_of(cls, lay, dbcls)
        if ds is not None:
            n_pairs.add((cls, a))
        offs = [o for (o, w, sa) in sites]
        for (o, w, sa) in sites:
            if ds is not None and o + w > ds:
                gap_pairs.add((cls, a))
            if o > BOGUS_OFF:
                # 与 <=4096 合法访问区断连判定：同函数优先，再查同类其它函数
                legit = [o2 for o2 in offs if o2 <= BOGUS_OFF]
                near = any(abs(o - o2) <= BOGUS_WIN for o2 in legit)
                if not near:
                    for a2, lst2 in fn_sites.items():
                        if fn2cls[a2][0] != cls or a2 == a:
                            continue
                        if any(o2 <= BOGUS_OFF and abs(o - o2) <= BOGUS_WIN
                               for (o2, w2, s2) in lst2):
                            near = True
                            break
                if not near:
                    n_sites_bogus += 1
                    dropped.append({"class": cls, "func": "0x%X" % a,
                                    "off": o, "width": w, "site": sa,
                                    "reason": "offset>4096 and no legit(<=4096) "
                                              "access within 64B on same func/class"})
                    continue
            rec = cls_sites[cls][o]
            rec["width"] = max(rec["width"], w)
            rec["count"] += 1
            rec["funcs"].add(a)
            rec["channels"].add(channel)
            if ds is None or o + w > ds:
                pass
            n_sites_genuine += 1 if (ds is not None and o <= BOGUS_OFF and o + w > ds) else 0
        if ds is not None:
            cls_decl.setdefault(cls, ds)

    # ---- 产出 ----
    classes = {}
    for cls, offmap in cls_sites.items():
        eids = sorted({a for rec in offmap.values() for a in rec["funcs"]})
        ext = max(o + rec["width"] for o, rec in offmap.items())
        extra = [{"off": o,
                  "width": rec["width"],
                  "count": rec["count"],
                  "channels": sorted(rec["channels"])}
                 for o, rec in sorted(offmap.items())]
        classes[cls] = {
            "declared_size": cls_decl.get(cls),
            "observed_extent": ext,
            "extent_source": sorted({ch for rec in offmap.values()
                                     for ch in rec["channels"]}),
            "extra_offsets": extra,
            "samples": ["0x%X" % a for a in eids],
        }

    gap_ext = {}
    for a, sites in fn_sites.items():
        cls = fn2cls[a][0]
        ds = cls_decl.get(cls)
        if ds is None:
            continue
        offs = [o for (o, w, sa) in sites]
        for (o, w, sa) in sites:
            if o + w > ds and o <= BOGUS_OFF:
                gap_ext[cls] = max(gap_ext.get(cls, 0), o + w)
    gap_classes = sorted(gap_ext,
                         key=lambda c: -(gap_ext[c] - (cls_decl.get(c) or 0)))
    top15 = [{"class": c, "declared": cls_decl.get(c), "extent": gap_ext[c],
              "gap": gap_ext[c] - (cls_decl.get(c) or 0)} for c in gap_classes[:15]]

    # 测量复现（与诊断口径一致：仅 ctor_types 通道，declared 已知）
    ct_only_fn = {int(k, 16) for k in ct if canon(ct[k]) is not None}
    m_pairs = set()
    m_gap_pairs = set()
    m_sites = 0
    m_cls = set()
    m_bogus = 0
    m_bogus_cls = set()
    for a, sites in fn_sites.items():
        cls = fn2cls[a][0]
        ds = cls_decl.get(cls)
        if ds is None or a not in ct_only_fn:
            continue
        m_pairs.add((cls, a))
        offs = [o for (o, w, sa) in sites]
        for (o, w, sa) in sites:
            if o + w > ds:
                m_gap_pairs.add((cls, a))
                if o <= BOGUS_OFF:
                    m_sites += 1
                    m_cls.add(cls)
                else:
                    legit = [o2 for o2 in offs if o2 <= BOGUS_OFF]
                    if not any(abs(o - o2) <= BOGUS_WIN for o2 in legit):
                        m_bogus += 1
                        m_bogus_cls.add(cls)
    meta = {
        "generated_by": "tools/csp_export/gen_layout_evidence.py",
        "evidence_channels": ["ctor_types", "vtable_install(fallback)"],
        "functions_mapped": len(fn2cls),
        "canon_unresolved": canon_miss,
        "channel_disagreements_ctor_wins": disagree,
        "classes_with_evidence": len(classes),
        "access_pairs_total": len(n_pairs),
        "gap_pairs": len(gap_pairs),
        "genuine_gap_sites": n_sites_genuine,
        "genuine_gap_classes": len(gap_ext),
        "bogus_sites_dropped": len(dropped),
        "bogus_classes": sorted({d["class"] for d in dropped}),
        "measurement_ctor_only": {
            "pairs": len(m_pairs),
            "gap_pairs": len(m_gap_pairs),
            "genuine_sites": m_sites,
            "genuine_classes": len(m_cls),
            "bogus_sites": m_bogus,
            "bogus_classes": sorted(m_bogus_cls),
            "note": "诊断口径 (555 pairs / 151 gap / 962 sites+69 cls / 43 bogus+5 cls) 复现见此",
        },
        "extent_semantics": "observed_extent is a LOWER BOUND on object size, "
                            "not sizeof; only C5 (operator new) is exact",
    }
    out = {"meta": meta, "top15_gap": top15,
           "classes": classes, "dropped_sites": dropped}
    op = args.out if os.path.isabs(args.out) else os.path.join(ROOT, args.out)
    with io.open(op, "w", encoding="utf-8") as fh:
        json.dump(out, fh, ensure_ascii=False, indent=1)
    print("[out] %s (%.1f KB)" % (op, os.path.getsize(op) / 1024.0), flush=True)
    print("[stats] classes=%d genuine_sites=%d/%d_cls bogus_dropped=%d/%d_cls"
          % (len(classes), n_sites_genuine, len(gap_ext), len(dropped), len({d["class"] for d in dropped})),
          flush=True)
    print("[top15 gap]", flush=True)
    for t in top15:
        print("  %-28s declared=%-6s extent=%-5d gap=%d"
              % (t["class"], t["declared"], t["extent"], t["gap"]), flush=True)


if __name__ == "__main__":
    main()


