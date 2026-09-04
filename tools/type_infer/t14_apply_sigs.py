#!/usr/bin/env python3
"""t14_apply_sigs.py — CSP 确定的 return/param 类型回写 IDA 签名。

type_map 已含 CSP 确定的类类型返回值（258）与参数位（258）, 但回写轮
只重写了 this 保留原返回/参数——本工具补齐: 对每个函数, 把 CSP 的
`.return` / `::paramN` 类类型合并进现有签名（只补空缺, 不覆盖已有
非平凡类型; TOP/标量不碰）。

与 mass_type 同规则: struct 门（>=4 已声明）、别名解析、原型擦洗
（#NNN/双CC/寄存器注解/无名参数补名）、冲突时 CSP 为权威。

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
_TRIVIAL_RET = {"int", "void", "_DWORD", "char", "unsigned", "int *",
                "_DWORD *", "char *", "void *", "bool", "BOOL", "UINT",
                "long", "short", "_BYTE", "_WORD"}


def load_csp_sigs():
    tm = json.load(open(os.path.join(PROJ, "type_map.json"),
                        encoding="utf-8"))["type_map"]
    rets, params = {}, {}
    for var, info in tm.items():
        t = info.get("type", "")
        if not t or t in ("int", "float", "char*", "VOID_PTR", "TOP", ""):
            continue
        if var.endswith(".return"):
            rets[_norm_addr(var[:-7])] = t
        else:
            m = re.match(r"^(0x[0-9A-Fa-f]{8})::param(\d+)$", var)
            if m:
                params.setdefault(_norm_addr(m.group(1)), {})[int(m.group(2))] = t
    return rets, params


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    rets, params = load_csp_sigs()
    print(f"CSP return: {len(rets)} | CSP param: {len(params)} 函数")

    alias_path = os.path.join(PROJ, "anchors", "mangled_alias.json")
    alias = json.load(open(alias_path, encoding="utf-8")) \
        if os.path.exists(alias_path) else {}

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

    st = {"done": [], "ret_applied": 0, "param_applied": 0, "skip": 0}
    if os.path.exists(STATE):
        st = json.load(open(STATE, encoding="utf-8"))
    done = set(st["done"])

    targets = sorted((a for a in set(rets) | set(params)
                      if a and a not in done))
    print(f"待处理: {len(targets)}")

    for base in range(0, len(targets), 60):
        chunk = targets[base:base + 60]
        protos = export_protos(chunk)
        edits = []
        for a in chunk:
            p = protos.get(a)
            if not p:
                continue
            proto = (p.get("prototype") or "").strip()
            if not proto or "(" not in proto:
                st["skip"] += 1
                continue
            ret_t = alias.get(rets.get(a, ""), rets.get(a, ""))
            par_t = {k: alias.get(v, v)
                     for k, v in (params.get(a) or {}).items()}
            if ret_t and ret_t not in struct_ok:
                ret_t = ""
            par_t = {k: v for k, v in par_t.items() if v in struct_ok}
            if not ret_t and not par_t:
                st["skip"] += 1
                continue
            # 返回类型: 仅当前返回为平凡形态时替换
            new_proto = proto
            if ret_t:
                ret_cur = new_proto.split("(")[0].strip()
                ret_clean = re.sub(r"@\?<[\w:]+>?|__\w*call|__userpurge",
                                   "", ret_cur).strip()
                if ret_clean in _TRIVIAL_RET or ret_clean == "":
                    ret_keep = re.sub(r"@<[\w:]+>\s*", "",
                                      ret_cur).strip()
                    new_proto = f"{ret_t} * {new_proto[len(ret_cur):].lstrip()}" \
                        if False else f"{ret_t} * " + new_proto[len(ret_cur):].lstrip()
                    st["ret_applied"] = st.get("ret_applied", 0) + (0 if args.dry_run else 0) + 1 \
                        if not args.dry_run else st.get("ret_applied", 0)
            # 参数类型: 仅当前参数为平凡指针形态时替换
            m = re.match(r"^.*?\((.*)\)$", new_proto, re.S)
            if m and par_t:
                body = m.group(1)
                parts = [x.strip() for x in body.split(",")] \
                    if body.strip() and body.strip() != "void" else []
                changed = False
                for idx, t in par_t.items():
                    if idx < len(parts) and re.match(
                            r"^(_DWORD \*?|void \*|int \*?|char \*|unsigned.*\*?)$",
                            parts[idx]):
                        star = "*" if "*" in parts[idx] else " *"
                        parts[idx] = f"{t}{star} aP{idx}"
                        changed = True
                if changed:
                    head = new_proto[: new_proto.find("(") + 1]
                    new_proto = head + ", ".join(parts) + ")"
                    if not args.dry_run:
                        pass
            if new_proto == proto:
                st["skip"] += 1
                continue
            new_proto = re.sub(r"#[\d]+(?:\s*\*)+", "void *", new_proto)
            new_proto = re.sub(r"\s*__(?:userpurge|usercall)\b", "", new_proto)
            new_proto = re.sub(r"@<[\w:]+>\s*", "", new_proto)
            nm = name_by_addr.get(a) or p.get("name") or ""
            if nm and re.match(r"^[A-Za-z_][\w:]*$", nm) \
                    and "__thiscall" in new_proto and "(" in new_proto:
                new_proto2 = new_proto.replace("__thiscall(", f"__thiscall {nm}(", 1) \
                    if "__thiscall" in new_proto else new_proto
            else:
                new_proto2 = new_proto
            ty = name_anon_params(new_proto2)
            edits.append({"addr": p["addr"], "ty": ty})
        if edits and not args.dry_run:
            for i in range(0, len(edits), 50):
                try:
                    res = call("type_apply_batch", {"batch": {
                        "edits": edits[i:i + 50]}})
                except RuntimeError:
                    continue
        for a in chunk:
            done.add(a)
        st["done"] = sorted(done)
        json.dump(st, open(STATE, "w", encoding="utf-8"))

    if not args.dry_run:
        call("idb_save", {})
        print("idb_save 完成")
    print(f"终态: edits 构造含 ret/param 补齐, skip={st['skip']}")


if __name__ == "__main__":
    main()
