#!/usr/bin/env python3
"""fix_csp_votes.py — CSP this 投错的二进制真值修正（幂等后处理，通用规则）。

背景（2026-08-31 符号审计，.omo/evidence/symbol-audit-phase3.md）：
CSP 求解器的 this 投票存在两类问题，本脚本按 vtable 成员资格（RTTI 真值）
修正 csp_functions.json：

R1 装饰归一（数据卫生，不改语义）：簇名后缀 `_csp`、`_Destru`、`_<N>`
   （数字索引）、`[N]` 剥离后再判兼容。engine 锚加载时已剥 `_csp`，
   此处把数据文件本身也清干净。
R0 CC 真值 + owner 补全（L8/L9 修复）：vtable/ctor 成员必为 thiscall；
   owner unknown → vtable join 覆写。
R3 定义层 join 精化（L4 修复）：多 vtable 投票从单簇流行度改为包含类
   最小公共祖先（仅当前票 ∈ 包含集时）。
R2 真错误覆写：thiscall 函数的 this 投票与**全部**包含 vtable 的类
   （等价/继承/668 别名表/Class 后缀变体均不匹配）不兼容 →
   inferred_real_class / inferred_name / params[0].real_type 覆写为
   vtable 真值 join（定义层，与引擎 rtti_vtable_class 通道同法）。

已证实的真错误模式（全量扫描发现，34 项中 13 项）：
  - 模板同形混淆：Vector<IsometricTile*> 投给 DynamicVector<Object*> 方法（6 项）
  - 兄弟类混淆：PowerClass↔RadarClass（GScreen 家族兄弟）、LCW↔LCWStraw
  - 完全无关：BlowStraw 簇投给 TabClass 虚方法、Conflict_WDT 投给 Vector 方法
  - 同时发现 0x0042DDB0 的 IDA 名（Delegate::ProcessBitmapStream）也错——
    真值 Base64Pipe（已并入 symbol-audit-ida-wrong 清单备注）

用法: python tools/type_infer/fix_csp_votes.py [--dry-run]
"""
import argparse
import json
import os
import re
import sys
from collections import Counter, defaultdict

_HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(_HERE))
PROJ = os.path.dirname(os.path.dirname(_HERE))

CSP_PATH = os.path.join(PROJ, "tools", "csp", "full_report", "csp_functions.json")
VT_CLASS_PATH = os.path.join(PROJ, "anchors", "rtti_vtable_class.json")
VT_SIG_PATH = os.path.join(_HERE, "anchors", "vtable_signatures.json")
ALIAS_PATH = os.path.join(PROJ, ".omo", "evidence", "alias-map-668.json")

# R1: 簇名装饰后缀（求解器内部标记 / 析构簇 / 实例索引）
_RE_DECOR = re.compile(r"(_csp|_Destru|_\d+|\[\d+\])+$")


def norm_cluster(name):
    return _RE_DECOR.sub("", name or "").strip()


def load_truth():
    with open(VT_CLASS_PATH, encoding="utf-8") as f:
        vt_data = json.load(f)["vtables"]
    vt_class = {int(k, 16): v["class"] for k, v in vt_data.items() if v.get("class")}
    with open(VT_SIG_PATH, encoding="utf-8") as f:
        vt_sigs = json.load(f)["signatures"]
    func_vt = defaultdict(set)
    func_vt_addr = defaultdict(set)
    for info in vt_sigs.values():
        try:
            vt = int(info["vtable_base"], 16)
            fa = int(info["addr"], 16)
        except (KeyError, ValueError, TypeError):
            continue
        if vt in vt_class:
            func_vt[fa].add(vt_class[vt])
            func_vt_addr[fa].add(vt)
    return func_vt, func_vt_addr


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    from type_infer.lattice import TypeLattice
    lat = TypeLattice()
    func_vt, func_vt_addr = load_truth()

    aliases = {}
    if os.path.exists(ALIAS_PATH):
        aliases = json.load(open(ALIAS_PATH, encoding="utf-8"))
    rtti_to_ida = {k: set(v) for k, v in aliases.items()}
    ida_to_rtti = defaultdict(set)
    for r, ids in rtti_to_ida.items():
        for i in ids:
            ida_to_rtti[i].add(r)

    def compatible(vote, truth):
        """装饰归一后的投票类 vs 真值类的兼容判定（等价/继承/别名/Class 变体）"""
        v = norm_cluster(vote)
        for t in {norm_cluster(x) for x in truth}:
            if v == t or v == t + "Class" or t == v + "Class":
                return True
            if t in lat.ancestors_of(v) or v in lat.ancestors_of(t):
                return True
            if t in rtti_to_ida.get(v, ()) or v in ida_to_rtti.get(t, ()):
                return True
        return False

    with open(CSP_PATH, encoding="utf-8") as f:
        data = json.load(f)
    funcs = data["functions"]

    stats = Counter()
    fixes = []
    suffix_cleaned = 0

    # R1b 全量参数/返回类型装饰归一（同类错误清扫：_csp/_Destru/_N/[N] 后缀
    # 残留在 paramN 投票中，554 项实测）
    for addr, e in funcs.items():
        for p_ in e.get("params", []):
            rt = p_.get("real_type", "") or ""
            if rt.endswith("*"):
                base = rt[:-1].strip()
                nb = norm_cluster(base)
                if nb and nb != base:
                    p_["real_type"] = f"{nb}*"
                    stats["param_suffix_normalized"] += 1
                    fixes.append((addr, rt, f"{nb}*", "param-normalize"))
        rt = e.get("return_type", "") or ""
        if rt.endswith("*"):
            base = rt[:-1].strip()
            nb = norm_cluster(base)
            if nb and nb != base:
                e["return_type"] = f"{nb}*"
                stats["return_suffix_normalized"] += 1
                fixes.append((addr, rt, f"{nb}*", "return-normalize"))

    # ── R0/R3（P0+P1 逻辑审计修复）：vtable/ctor 成员资格 = 二进制真值 ──
    # R0: CC 真值——vtable/ctor 成员必为 thiscall（L8 修复：CC 不得由 owner
    #     推断导出 cdecl；3,672 实测）。同时修复 owner=unknown（含 param0
    #     'int' 默认填充——L9 症状）。
    # R3: 定义层 join 精化——多 vtable 函数的投票从"单簇流行度"改为包含类
    #     的最小公共祖先（L4 修复：RenderFrame→MouseClass 类不精确）。
    #     仅当 join 严格更泛化（当前票 ∈ 包含集但 != join）时覆写。
    ctor_by_upper = {k.upper(): v for k, v in json.load(
        open(os.path.join(PROJ, "anchors", "ctor_types.json"), encoding="utf-8")
    ).items()} if os.path.exists(os.path.join(PROJ, "anchors", "ctor_types.json")) else {}
    for addr, e in funcs.items():
        try:
            fa = int(addr, 16)
        except ValueError:
            continue
        truth = func_vt.get(fa)
        ctor_cls = ctor_by_upper.get(addr.upper())
        # R0a: CC 修正
        if (truth or ctor_cls) and e.get("calling_convention") != "thiscall":
            stats["cc_truth_fixed"] += 1
            if not args.dry_run:
                fixes.append((addr, e.get("calling_convention"), "thiscall", "cc-truth"))
                e["calling_convention"] = "thiscall"
        # 真值类 = vtable join（ctor 无真值类时用 ctor 类）
        joined = None
        if truth:
            joined = None
            for t in sorted(truth):
                tt = norm_cluster(t)
                joined = tt if joined is None else lat.join(joined, tt)
        elif ctor_cls:
            joined = norm_cluster(ctor_cls)
        if joined in (None, "void*", 2) or not isinstance(joined, str):
            continue
        cur = e.get("inferred_real_class", "")
        # R0b: owner unknown / 缺 param0 → 补真值
        if cur in ("", "unknown") or not any(
                p.get("name") == "this" for p in e.get("params", [])):
            stats["owner_filled"] += 1
            if not args.dry_run:
                method = (e.get("inferred_name") or e.get("original_name") or "").split("::")[-1]
                e["inferred_real_class"] = joined
                e["inferred_name"] = f"{joined}::{method}" if method else joined
                fixes.append((addr, cur or "unknown", joined, "owner-fill"))
                params = e.setdefault("params", [])
                if params and params[0].get("name") == "this":
                    params[0]["real_type"] = f"{joined}*"
                    params[0]["csp_type"] = params[0].get("csp_type") or "Class_truth"
                else:
                    params.insert(0, {"index": 0, "name": "this",
                                      "csp_type": "Class_truth",
                                      "real_type": f"{joined}*"})
            continue
        # R3: 当前票 ∈ 包含集（合法单簇）但 != join → 精化到定义层
        if truth and cur != joined and any(
                norm_cluster(t) == norm_cluster(cur) for t in truth):
            # 当前票是包含集成员——join 是定义层（更泛化的真值）
            if joined in lat.ancestors_of(norm_cluster(cur)) or joined != norm_cluster(cur):
                stats["join_refined"] += 1
                if not args.dry_run:
                    method = (e.get("inferred_name") or "").split("::")[-1]
                    e["inferred_real_class"] = joined
                    e["inferred_name"] = f"{joined}::{method}" if method else joined
                    fixes.append((addr, cur, joined, "join-refine"))
                    for p_ in e.get("params", []):
                        if p_.get("name") == "this":
                            p_["real_type"] = f"{joined}*"

    # R1d: 全量装饰归一——非 vtable 函数的 _csp/_Destru/_N/[N] 后缀
    # 也清理（此前仅 vtable-backed 函数被覆盖，64 项漏网实测）
    for addr, e in funcs.items():
        ccls0 = e.get("inferred_real_class", "")
        if ccls0 and ccls0 != "unknown":
            nv0 = norm_cluster(ccls0)
            if nv0 != ccls0 and nv0:
                stats["unbacked_decoration_normalized"] += 1
                if not args.dry_run:
                    meth0 = (e.get("inferred_name") or "").split("::", 1)
                    method0 = meth0[1] if len(meth0) == 2 else e.get("inferred_name", "")
                    e["inferred_real_class"] = nv0
                    e["inferred_name"] = f"{nv0}::{method0}" if method0 else nv0
                    fixes.append((addr, ccls0, nv0, "unbacked-normalize"))
                    for p_ in e.get("params", []):
                        if p_.get("name") == "this":
                            p_["real_type"] = f"{nv0}*"

    for addr, e in funcs.items():
        if e.get("calling_convention") != "thiscall":
            continue
        ccls = e.get("inferred_real_class", "")
        if not ccls or ccls == "unknown":
            continue
        try:
            fa = int(addr, 16)
        except ValueError:
            continue
        truth = func_vt.get(fa)
        if not truth:
            continue
        # 第一层：票选 vtable 簇地址 ∈ 函数包含 vtable 集 → 定义层合法投票
        # （类名差异仅为遗留别名/簇名，vtable 地址才是投票的证据本体）
        vt_vote = None
        for p_ in e.get("params", []):
            if p_.get("name") == "this":
                m = re.match(r"^Class_([0-9A-F]+)$", p_.get("csp_type", "") or "")
                if m:
                    vt_vote = int(m.group(1), 16)
                break
        if vt_vote is not None and vt_vote in func_vt_addr.get(fa, ()):
            stats["vtable_addr_legal"] += 1
            continue
        # R1c Class 后缀命名变体规范化（ShapeButton ≡ ShapeButtonClass）：
        # 单真值类且投票名==真值±'Class' → 统一写真值名（消除双类名残留）
        nv0 = norm_cluster(ccls)
        truths_n = sorted({norm_cluster(t) for t in truth})
        if len(truths_n) == 1 and nv0 != truths_n[0] and (
                nv0 == truths_n[0] + "Class" or truths_n[0] == nv0 + "Class"):
            stats["class_variant_canonicalized"] += 1
            if not args.dry_run:
                meth = e.get("inferred_name", "").split("::", 1)
                method = meth[1] if len(meth) == 2 else e.get("inferred_name", "")
                fixes.append((addr, ccls, truths_n[0], "class-variant"))
                e["inferred_real_class"] = truths_n[0]
                e["inferred_name"] = f"{truths_n[0]}::{method}" if method else truths_n[0]
                for p_ in e.get("params", []):
                    if p_.get("name") == "this":
                        p_["real_type"] = f"{truths_n[0]}*"
            continue
        if compatible(ccls, truth):
            # R1 数据卫生：剥离装饰后缀到规范形（真值单类时直接用真值名）
            nv = norm_cluster(ccls)
            if nv != ccls:
                stats["suffix_normalized"] += 1
                if not args.dry_run:
                    old = ccls
                    meth = e.get("inferred_name", "").split("::", 1)
                    method = meth[1] if len(meth) == 2 else e.get("inferred_name", "")
                    e["inferred_real_class"] = nv
                    e["inferred_name"] = f"{nv}::{method}" if method else nv
                    for p in e.get("params", []):
                        if p.get("name") == "this":
                            p["real_type"] = f"{nv}*"
                    suffix_cleaned += 1
                    fixes.append((addr, old, nv, "normalize"))
            continue
        # R2 真错误：覆写为真值 join（定义层）
        joined = None
        for t in sorted(truth):
            tt = norm_cluster(t)
            joined = tt if joined is None else lat.join(joined, tt)
        if joined in ("void*", None, 2):
            stats["unresolvable_join"] += 1
            continue
        stats["true_error_fixed"] += 1
        if not args.dry_run:
            meth = e.get("inferred_name", "").split("::", 1)
            method = meth[1] if len(meth) == 2 else e.get("inferred_name", "")
            fixes.append((addr, ccls, joined, "truth-override"))
            e["inferred_real_class"] = joined
            e["inferred_name"] = f"{joined}::{method}" if method else joined
            for p in e.get("params", []):
                if p.get("name") == "this":
                    p["real_type"] = f"{joined}*"

    print("CSP vote correction:")
    for k, c in stats.most_common():
        print(f"  {k}: {c}")
    for a, old, new, kind in fixes:
        print(f"  [{kind}] {a}: {old} -> {new}")

    if args.dry_run:
        print("dry-run: no write")
        return
    if not fixes and not suffix_cleaned:
        print("idempotent: nothing to fix")
        return
    bak = CSP_PATH + ".pre_vtfix.bak"
    if not os.path.exists(bak):
        import shutil
        shutil.copy2(CSP_PATH, bak)
        print(f"backup: {bak}")
    with open(CSP_PATH, "w", encoding="utf-8") as f:
        json.dump(data, f, indent=1, ensure_ascii=False)
    print(f"written: {CSP_PATH}")


if __name__ == "__main__":
    main()
