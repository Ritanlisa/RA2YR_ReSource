#!/usr/bin/env python3
"""t14_apply_sigs.py — CSP 推导的 return/param 类型写回 IDA 签名。

与 t14_mass_type（this 通道）配套, 补齐函数签名的另外两段:
  - return: type_map `0xADDR.return` 类类型 → 替换原型返回段
  - param:  type_map `0xADDR::paramN` 类类型 → 替换对应参数段

应用策略（用户架构裁决: CSP 输出是二值的, 无距离折扣）:
  被约束蕴含的具体类类型 → 应用（与 mass_type 的 truth-wins 一致:
  CSP 是唯一权威, 覆盖 IDA 现有标注）; TOP 已在加载时排除（格自己的
  矛盾裁决, 非过滤器）。T10 置信度仅作为报告注记保留, 不参与判定。
  struct 门(>=4) 是 IDA 落盘的机械前提, 非认识论门槛。

用法: python tools/type_infer/t14_apply_sigs.py [--dry-run]
"""
import argparse
import json
import os
import re
import sys

_HERE = os.path.dirname(os.path.abspath(__file__))
PROJ = os.path.dirname(os.path.dirname(_HERE))
sys.path.insert(0, _HERE)

from ida_apply_t14 import call  # noqa: E402
from t14_rollout import export_protos, name_anon_params, _norm_addr  # noqa: E402

STATE = os.path.join(PROJ, ".omo", "t14_apply_sigs_state.json")
# 仅事实性识别: ? 前缀 = 编译器修饰名（CRT/内部件的确定性标识）;
# 模糊前缀猜测已撤除（会误拦真游戏函数, 同架构裁决）
_RE_CRT = re.compile(r"^\?")


def load_csp_sigs():
    tm = json.load(open(os.path.join(PROJ, "type_map.json"),
                        encoding="utf-8"))["type_map"]
    rets, params = {}, {}
    for var, info in tm.items():
        t = info.get("type", "")
        conf = info.get("confidence", "")
        if not t or t in ("int", "float", "char*", "VOID_PTR", "TOP", ""):
            continue
        if var.endswith(".return"):
            rets[_norm_addr(var[:-7])] = t
        else:
            m = re.match(r"^(0x[0-9A-Fa-f]{8})::param(\d+)$", var)
            if m:
                params.setdefault(_norm_addr(m.group(1)),
                                  {})[int(m.group(2))] = t
    return rets, params


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    rets, params = load_csp_sigs()
    print(f"CSP 目标(置信度门后): return {len(rets)} | param {len(params)} 函数")

    alias = json.load(open(os.path.join(PROJ, "anchors",
                         "mangled_alias.json"), encoding="utf-8")) \
        if os.path.exists(os.path.join(PROJ, "anchors",
                         "mangled_alias.json")) else {}

    involved = sorted({alias.get(t, t) for t in rets.values()}
                      | {alias.get(t, t) for d in params.values()
                         for t in d.values()})
    struct_ok = set()
    for i in range(0, len(involved), 50):
        r = call("type_inspect", {"queries": [{"name": c} for c in
                                              involved[i:i + 50]]})
        for item in (r if isinstance(r, list) else []):
            if item.get("exists") and item.get("is_udt") \
                    and (item.get("size") or 0) >= 4:
                struct_ok.add(item["name"])
    print(f"struct 门: {len(struct_ok)}/{len(involved)}")

    fns_cache = os.path.join(PROJ, ".omo", "full_export_funcs.json")
    name_by_addr = {}
    if os.path.exists(fns_cache):
        for f in json.load(open(fns_cache, encoding="utf-8")):
            na = _norm_addr(f["addr"])
            if na:
                name_by_addr[na] = f.get("name", "")

    st = {"done": [], "applied": 0, "fail": 0, "skip": 0}
    if os.path.exists(STATE):
        st = json.load(open(STATE, encoding="utf-8"))
    done = set(st["done"])
    targets = sorted(a for a in set(rets) | set(params)
                     if a and a not in done)
    print(f"待处理: {len(targets)}")

    n_edits = 0
    for base in range(0, len(targets), 60):
        chunk = targets[base:base + 60]
        protos = export_protos(chunk)
        edits = []
        for a in chunk:
            p = protos.get(a)
            if not p:
                st["skip"] += 1
                continue
            proto = (p.get("prototype") or "").strip()
            nm = name_by_addr.get(a) or p.get("name") or ""
            if not proto or "(" not in proto or _RE_CRT.match(nm) \
                    or not all(re.match(r"^[A-Za-z_]\w*$", s)
                               for s in nm.split("::")):
                st["skip"] += 1
                continue
            ret_t = alias.get(rets.get(a, ""), rets.get(a, ""))
            if ret_t and ret_t not in struct_ok:
                ret_t = ""
            par_t = {k: alias.get(v, v)
                     for k, v in (params.get(a) or {}).items()
                     if alias.get(v, v) in struct_ok}
            new_proto = proto
            # 返回段: truth-wins（CSP 权威）——保留 CC, 带名声明
            # （无名函数声明不可解析; `__thiscall (` 带空格亦不可）
            if ret_t:
                ret_cur = new_proto.split("(")[0].strip()
                cc_m = re.search(r"(__\w*call|__userpurge|__usercall)", ret_cur)
                cc_s = cc_m.group(1) if cc_m else ""
                head = f"{ret_t} * {cc_s} {nm}" if cc_s else f"{ret_t} * {nm}"
                new_proto = head + new_proto[len(ret_cur):].lstrip()
            # 参数段: truth-wins
            if par_t:
                m = re.match(r"^(.*?\()(.*)\)$", new_proto, re.S)
                if m:
                    head, body = m.group(1), m.group(2)
                    parts = [x.strip() for x in body.split(",")] \
                        if body.strip() and body.strip() != "void" else []
                    changed = False
                    off = 1 if "__thiscall" in head else 0
                    for idx, t in par_t.items():
                        pi = idx + off
                        if pi < len(parts):
                            parts[pi] = f"{t} *aP{pi}"
                            changed = True
                    if changed:
                        new_proto = head + ", ".join(parts) + ")"
            if new_proto == proto:
                st["skip"] += 1
                continue
            # 擦洗 + 命名
            new_proto = re.sub(r"#[\d]+(?:\s*\*)+", "void *", new_proto)
            new_proto = re.sub(r"\s*__(?:userpurge|usercall)\b", "", new_proto)
            new_proto = re.sub(r"@<[\w:]+>\s*", "", new_proto)
            if nm and "__thiscall(" in new_proto:
                new_proto = new_proto.replace("__thiscall(",
                                              f"__thiscall {nm}(", 1)
            edits.append({"addr": p["addr"], "ty": name_anon_params(new_proto)})
        if edits and not args.dry_run:
            for i in range(0, len(edits), 50):
                try:
                    res = call("type_apply_batch", {"batch": {
                        "edits": edits[i:i + 50]}})
                    items = res.get("results", []) if isinstance(res, dict) \
                        else res
                    for it in (items if isinstance(items, list) else []):
                        if it.get("ok"):
                            st["applied"] += 1
                        else:
                            st["fail"] += 1
                except RuntimeError:
                    st["fail"] += len(edits[i:i + 50])
        n_edits += len(edits)
        for a in chunk:
            done.add(a)
        st["done"] = sorted(done)
        json.dump(st, open(STATE, "w", encoding="utf-8"))

    if not args.dry_run and st["applied"]:
        call("idb_save", {})
        print("idb_save 完成")
    print(f"终态: edits={n_edits} applied={st['applied']} "
          f"fail={st['fail']} skip={st['skip']}")


if __name__ == "__main__":
    main()
