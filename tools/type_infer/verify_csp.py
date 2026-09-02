#!/usr/bin/env python3
"""verify_csp.py — CSP 阶段全通道只读验证器（收尾固化，可重复执行）。

七个通道 + 判定汇总（全部只读，不写任何文件）：
  C1 fixer 幂等     : fix_csp_votes.py --dry-run 在当前数据上零待修项
  C2 CC 真值        : vtable/ctor 成员在 csp_functions 中必须 thiscall
  C3 投票真值       : thiscall+vtable 函数的 this 票与包含 vtable 类兼容。
                      双口径：strict（等价/继承/Class 变体，无别名表——
                      规则 D 证伪后的正确口径）与 legacy（叠加 668 别名）。
                      strict 错误 = 真残留；alias-only 通过 = 别名表遗留
                      风险（应转 R2 truth-override）
  C4 装饰残留       : _csp/_Destru/_N/[N] 后缀在类名/参数/返回中为零
  C5 owner 完整性   : thiscall+真值函数 owner 非 unknown 且有 this 参数
  C6 命名空间一致性 : inferred_real_class 基名对 canon/RTTI 命名空间的
                      覆盖分布（flattened 模板名单独分类）
  C7 return_type    : 分布统计（当前全 void——已知缺口，B10 后改善）

用法: python tools/type_infer/verify_csp.py [--verbose]
退出码: 0 = 全过；1 = 存在 strict 失败项。
"""
import argparse
import json
import os
import re
import subprocess
import sys
from collections import Counter, defaultdict

_HERE = os.path.dirname(os.path.abspath(__file__))
PROJ = os.path.dirname(os.path.dirname(_HERE))
sys.path.insert(0, os.path.dirname(_HERE))  # tools/ —— type_infer 包根

CSP_PATH = os.path.join(PROJ, "tools", "csp", "full_report", "csp_functions.json")
VT_CLASS_PATH = os.path.join(PROJ, "anchors", "rtti_vtable_class.json")
VT_SIG_PATH = os.path.join(_HERE, "anchors", "vtable_signatures.json")
CTOR_PATH = os.path.join(PROJ, "anchors", "ctor_types.json")
ALIGN_PATH = os.path.join(PROJ, "anchors", "class_name_align.json")
ALIAS_PATH = os.path.join(PROJ, ".omo", "evidence", "alias-map-668.json")
FIXER = os.path.join(_HERE, "fix_csp_votes.py")

_RE_DECOR = re.compile(r"(_csp|_Destru|_\d+|\[\d+\])+$")
_RE_ADDR_FRAG = re.compile(r"_(\d{5,})+$")
# IDA 自动名的 `_XXXXXX` 是名字本体（与 fixer R1e 同一豁免）
_RE_IDA_AUTO = re.compile(
    r"^(sub_|nullsub_|j_|loc_|locret_|byte_|word_|dword_|qword_|off_|unk_|asc_|stru_|flt_)",
    re.IGNORECASE)


def norm_cluster(name):
    return _RE_DECOR.sub("", str(name or "").strip())


def load_truth():
    with open(VT_CLASS_PATH, encoding="utf-8") as f:
        vt_class = {int(k, 16): v["class"] for k, v in
                    json.load(f)["vtables"].items() if v.get("class")}
    with open(VT_SIG_PATH, encoding="utf-8") as f:
        vt_sigs = json.load(f)["signatures"]
    func_vt = defaultdict(set)      # func addr -> {truth class names}
    func_vt_addr = defaultdict(set)  # func addr -> {vtable addrs}
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
    ap.add_argument("--verbose", action="store_true")
    args = ap.parse_args()

    results = {}

    # ── C1 fixer 幂等 ──
    r = subprocess.run([sys.executable, FIXER, "--dry-run"],
                       capture_output=True, text=True, cwd=PROJ)
    pending = [ln for ln in r.stdout.splitlines() if ln.strip().startswith("[")]
    results["C1_fixer_idempotent"] = {
        "pass": not pending, "pending_fixes": len(pending)}
    if pending and args.verbose:
        results["C1_fixer_idempotent"]["samples"] = pending[:10]

    from type_infer.lattice import TypeLattice
    lat = TypeLattice()
    func_vt, func_vt_addr = load_truth()
    with open(CTOR_PATH, encoding="utf-8") as f:
        ctor_cls = {int(k, 16): v for k, v in json.load(f).items()}
    with open(CSP_PATH, encoding="utf-8") as f:
        funcs = json.load(f)["functions"]
    aliases = json.load(open(ALIAS_PATH, encoding="utf-8")) if os.path.exists(ALIAS_PATH) else {}
    ida_to_rtti = defaultdict(set)
    for rk, ids in aliases.items():
        for i in ids:
            ida_to_rtti[i].add(rk)

    align = json.load(open(ALIGN_PATH, encoding="utf-8"))
    r2c = {k: v["canon"] for k, v in align["rtti_to_canon"].items()}
    canon_ns = (set(align["canon_to_rtti"])
                | {v["canon"] for v in align["rtti_to_canon"].values()})

    def compat_strict(vote, truth_set):
        v = norm_cluster(vote)
        for t in {norm_cluster(x) for x in truth_set}:
            if v == t or v == t + "Class" or t == v + "Class":
                return True
            if t in lat.ancestors_of(v) or v in lat.ancestors_of(t):
                return True
        return False

    def compat_legacy(vote, truth_set):
        if compat_strict(vote, truth_set):
            return True
        v = norm_cluster(vote)
        for t in {norm_cluster(x) for x in truth_set}:
            if t in aliases.get(v, ()) or v in ida_to_rtti.get(t, ()):
                return True
            # 别名表键是 RTTI 修饰名——vote 是其别名值时也算
            if v in aliases.get(t, ()):
                return True
        return False

    cc_bad = vote_strict_bad = alias_only = decorated = owner_bad = 0
    info_overload_idx = 0
    info_unresolvable_owner = 0
    decor_samples = []
    ns_dist = Counter()
    ret_dist = Counter()
    anchor_loadable = 0
    valid_classes = set(lat._ancestors.keys())

    for addr, e in funcs.items():
        try:
            fa = int(addr, 16)
        except ValueError:
            continue
        truth = func_vt.get(fa)
        backed = bool(truth) or fa in ctor_cls

        # C2 CC 真值
        if backed and e.get("calling_convention") != "thiscall":
            cc_bad += 1

        # C5 owner 完整性（join 不可解的多 vtable 共享函数按设计可为
        # unknown——信息项不计失败）
        ccls = e.get("inferred_real_class", "")
        if backed and e.get("calling_convention") == "thiscall":
            if ccls in ("", "unknown") or not any(
                    p.get("name") == "this" for p in e.get("params", [])):
                if truth:
                    joined = None
                    for t in sorted(truth):
                        tt = norm_cluster(t)
                        joined = tt if joined is None else lat.join(joined, tt)
                    if joined in (None, "void*", 2) or not isinstance(joined, str):
                        info_unresolvable_owner += 1
                    else:
                        owner_bad += 1
                else:
                    owner_bad += 1  # ctor 真值单类必可解

        # C4 装饰残留（类名/参数/返回 + 方法名地址碎片）。
        # 小数字后缀（`_0`..`_4`）是求解器重载消歧索引，按设计保留——
        # 计入 informational，不算失败。
        def _decor_ok(s):
            if not s:
                return True
            b = str(s).rstrip("*").strip()
            return norm_cluster(b) == b
        nm = str(e.get("inferred_name") or "")
        addr_frag = bool(_RE_ADDR_FRAG.search(nm)) and not _RE_IDA_AUTO.match(nm)
        if (not _decor_ok(ccls) or addr_frag
                or not _decor_ok(e.get("return_type", ""))
                or any(not _decor_ok(p.get("real_type", "")) for p in e.get("params", []))):
            decorated += 1
            if len(decor_samples) < 5:
                decor_samples.append((addr, ccls, nm))
        if re.search(r"_\d{1,4}(::|$)", nm):
            info_overload_idx += 1

        # C3 投票真值（strict/legacy 双口径）
        if (e.get("calling_convention") == "thiscall" and ccls
                and ccls != "unknown" and truth):
            vt_vote = None
            for p in e.get("params", []):
                if p.get("name") == "this":
                    m = re.match(r"^Class_([0-9A-F]+)$", p.get("csp_type", "") or "")
                    if m:
                        vt_vote = int(m.group(1), 16)
                    break
            if vt_vote is None or vt_vote not in func_vt_addr.get(fa, ()):
                s_ok = compat_strict(ccls, truth)
                l_ok = compat_legacy(ccls, truth)
                if not s_ok:
                    if l_ok:
                        alias_only += 1
                    else:
                        vote_strict_bad += 1

        # C6 命名空间一致性（全部有类名的函数）
        if ccls and ccls != "unknown":
            base = norm_cluster(ccls).rstrip("*").strip()
            if base in canon_ns:
                ns_dist["canon_hit"] += 1
            elif base in r2c or base in align["rtti_to_canon"]:
                ns_dist["rtti_raw_hit"] += 1
            elif re.search(r"_(PAV|PBV|PAU|PBU|V[A-Z]|[EI])", base) and "_" in base:
                ns_dist["flattened_template"] += 1
            else:
                ns_dist["unknown"] += 1
            if base in valid_classes:
                anchor_loadable += 1

        # C7 return_type
        rt = str(e.get("return_type", "") or "void")
        ret_dist["void" if rt in ("", "void") else ("class_like" if rt.rstrip("*") not in
             ("void", "int", "bool", "unknown", "?") else "scalar")] += 1

    results["C2_cc_truth"] = {"pass": cc_bad == 0, "violations": cc_bad}
    results["C3_vote_truth"] = {
        "pass": vote_strict_bad == 0,
        "strict_errors": vote_strict_bad,
        "alias_only_passes": alias_only,
        "note": "alias_only = 仅靠已证伪的 668 别名表通过的投票（应转 R2）",
    }
    results["C4_decoration"] = {
        "pass": decorated == 0, "residuals": decorated, "samples": decor_samples,
        "info_overload_index_kept": info_overload_idx}
    results["C5_owner_complete"] = {
        "pass": owner_bad == 0, "missing": owner_bad,
        "info_unresolvable_join": info_unresolvable_owner}
    results["C6_namespace"] = {
        "pass": True, "distribution": dict(ns_dist),
        "engine_anchor_loadable": anchor_loadable}
    results["C7_return_type"] = {"pass": True, "distribution": dict(ret_dist),
                                 "note": "全 void 为已知缺口；B10/B10b 重提取后由 type_map 回填"}

    print(f"CSP verification ({len(funcs)} functions)")
    all_pass = True
    for k, v in results.items():
        ok = v.get("pass", True)
        all_pass &= ok
        print(f"  {'PASS' if ok else 'FAIL'} {k}: " + json.dumps(
            {kk: vv for kk, vv in v.items() if kk != "pass" and kk != "samples"},
            ensure_ascii=False))
        if not ok and v.get("samples"):
            for s in v["samples"]:
                print(f"        {s}")
    print("VERDICT:", "ALL PASS" if all_pass else "FAILURES PRESENT")
    sys.exit(0 if all_pass else 1)


if __name__ == "__main__":
    main()
