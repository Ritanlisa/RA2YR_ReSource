#!/usr/bin/env python3
"""t14_apply_sigs.py — CSP 推导的 return/param 类型写回 IDA 签名。

与 t14_mass_type（this 通道）配套, 补齐函数签名的另外两段:
  - return: type_map `0xADDR.return` 类类型 → 替换原型返回段
  - param:  type_map `0xADDR::paramN` 类类型 → 替换对应参数段

置信度门（准确性优先, 采纳用户架构裁决）:
  return: ANCHORED + DIRECT_PROP（单跳传播, 证据链短）
  param:  ANCHORED + DIRECT_PROP（param 多为 CHAIN_PROP 长链, 只取短链）
  TOP 一律排除; 仅当现有段为平凡形态（int/void/_DWORD*/void* 等）时替换
  ——不覆盖 IDA 已有的更具体类型; struct 门(>=4) + 别名 + 擦洗同 mass_type。

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
_RET_GATE = {"ANCHORED", "DIRECT_PROP"}
_PARAM_GATE = {"ANCHORED", "DIRECT_PROP"}
_TRIVIAL_RET = {"int", "void", "_DWORD", "char", "unsigned", "bool",
                "BOOL", "UINT", "long", "short", "_BYTE", "_WORD", "_BOOL"}
_RE_TRIVIAL_PARAM = re.compile(
    r"^(_DWORD \*?|void \*|int \*?|char \*|unsigned[^()]*\*?|_BYTE \*?|_WORD \*?)$")
_RE_CRT = re.compile(r"^(\?|__|std_|_STD|_Crt|_Init|Iostream|ios_|Winmain)", re.I)


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
            if conf in _RET_GATE:
                rets[_norm_addr(var[:-7])] = t
        else:
            m = re.match(r"^(0x[0-9A-Fa-f]{8})::param(\d+)$", var)
            if m and conf in _PARAM_GATE:
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
            # 返回段: 仅平凡形态时替换
            if ret_t:
                ret_cur = new_proto.split("(")[0].strip()
                ret_clean = re.sub(r"@<[\w:]+>|__\w*call|__userpurge", "",
                                   ret_cur).strip()
                if ret_clean in _TRIVIAL_RET:
                    new_proto = f"{ret_t} * " + new_proto[len(ret_cur):].lstrip()
            # 参数段: 仅平凡指针形态时替换
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
                        if pi < len(parts) and _RE_TRIVIAL_PARAM.match(parts[pi]):
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
