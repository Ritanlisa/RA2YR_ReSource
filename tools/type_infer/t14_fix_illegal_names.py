#!/usr/bin/env python3
"""t14_fix_illegal_names.py — 非法声明字符函数名合法化 + this 定型 + 四方同步。

517 个真值池函数的 IDA 名含 `[N]`/`<>@`（如 `AITriggerTypeClass[40]::
ClearBuffer`——IDA 从邻近数据数组污染来的自动名）, 无法出现在 C 声明里,
导致 type_apply 全部失败。

处置（最小语义漂移 + 管道合规）:
  1. 名字合法化: `[40]` → `_40`, 其余非法字符 → `_`（保留可区分性）
  2. 一次 set_type 同时完成 改名 + this 定型（ty 带新名）
  3. 同步 signals.json（symbols[addr].name + _by_name 重建）——
     symbols-locked 1:1:1 纪律（AGENTS.md）; src/ 树不涉及（未翻译函数
     不出现在源码中, 实测确认后跳过）

用法: python tools/type_infer/t14_fix_illegal_names.py [--dry-run]
"""
import argparse
import json
import os
import re
import sys

_HERE = os.path.dirname(os.path.abspath(__file__))
PROJ = os.path.dirname(os.path.dirname(_HERE))
sys.path.insert(0, _HERE)

from ida_apply_t14 import call, rewrite_this  # noqa: E402
from t14_mass_type import load_truth  # noqa: E402
from t14_rollout import export_protos, name_anon_params, _norm_addr  # noqa: E402

SIGNALS = os.path.join(PROJ, "signals.json")
_RE_ILLEGAL = re.compile(r"[\[\]<>@]")


def sanitize(name: str) -> str:
    name = re.sub(r"\[(\d+)\]", r"_\1", name)
    name = _RE_ILLEGAL.sub("_", name)
    return name


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    truth = load_truth(1)
    cache = json.load(open(os.path.join(PROJ, ".omo", "full_export_funcs.json"),
                           encoding="utf-8"))
    targets = [(f["addr"], f["name"]) for f in cache
               if _RE_ILLEGAL.search(f.get("name", ""))
               and _norm_addr(f["addr"]) in truth]
    print(f"非法名真值函数: {len(targets)}")

    # src/ 树涉及检查——出现在源码中的名字按 rename_symbol 纪律同步替换
    src_files = {}
    for root, _, files in os.walk(os.path.join(PROJ, "src")):
        for fn in files:
            if fn.endswith((".hpp", ".cpp")):
                src_files[os.path.join(root, fn)] = None
    old_new = {nm: sanitize(nm) for _, nm in targets}
    n_src = 0
    for fp in src_files:
        try:
            txt = open(fp, encoding="utf-8", errors="replace").read()
        except OSError:
            continue
        new_txt = txt
        for old, new in old_new.items():
            if old in new_txt:
                new_txt = re.sub(r"\b" + re.escape(old) + r"\b", new, new_txt)
        if new_txt != txt:
            if not args.dry_run:
                open(fp, "w", encoding="utf-8", newline="").write(new_txt)
            n_src += 1
    print(f"src/ 树同步替换: {n_src} 个文件")

    protos = export_protos([a for a, _ in targets])
    renames = []  # (addr, old, new, ty)
    for addr, nm in targets:
        na = _norm_addr(addr)
        cls, src = truth[na]
        p = protos.get(na)
        if not p:
            continue
        proto = (p.get("prototype") or "").strip()
        if f"{cls} *this" in proto:
            continue  # 已定型（名字仍非法——仍需改名）
        if "__thiscall(" in proto:
            np = rewrite_this(proto, cls)
        else:
            ret = re.sub(r"__\w+call|__pascal", "", proto.split("(")[0]).strip() \
                or "int"
            np = f"{ret} __thiscall({cls} *this)"
        if np is None:
            continue
        np = re.sub(r"^(.*?)\s+__(?:std|cd|fast|this|userpurge|user)call\s+__thiscall",
                    r"\1 __thiscall", np)
        np = re.sub(r"@<\w+>\s*", "", np)
        np = re.sub(r"#[\d]+ \*?(?=[,)])", "void *", np)
        np = re.sub(r"(?<![\w])#[\d]+(?=[,)])", "int", np)
        new_name = sanitize(nm)
        named = np.replace("__thiscall(", f"__thiscall {new_name}(", 1)
        renames.append((addr, nm, new_name, name_anon_params(named)))

    print(f"待处理: {len(renames)} (改名+定型)")
    ok = fail = 0
    if not args.dry_run:
        for i in range(0, len(renames), 50):
            chunk = renames[i:i + 50]
            try:
                res = call("type_apply_batch", {"batch": {"edits": [
                    {"addr": r[0], "ty": r[3]} for r in chunk]}})
                items = res.get("results", []) if isinstance(res, dict) else res
                for it in (items if isinstance(items, list) else []):
                    if it.get("ok"):
                        ok += 1
                    else:
                        fail += 1
                        print(f"  FAIL {it.get('edit',{}).get('addr')}: "
                              f"{str(it.get('error'))[:90]}")
            except RuntimeError as e:
                fail += len(chunk)
                print(f"  BATCH FAIL: {e}")
        print(f"set_type: ok={ok} fail={fail}")

        # signals.json 同步
        sig = json.load(open(SIGNALS, encoding="utf-8"))
        syms = sig["symbols"]
        by_name = sig.get("_by_name", {})
        n_sync = 0
        for addr, old, new, _ty in renames:
            key = f"0x{int(addr, 16):x}"
            if key in syms and syms[key].get("name") == old:
                syms[key]["name"] = new
                by_name.pop(old, None)
                by_name[new] = key
                n_sync += 1
        sig["_by_name"] = by_name
        with open(SIGNALS, "w", encoding="utf-8") as f:
            json.dump(sig, f, ensure_ascii=False, indent=1)
        print(f"signals.json 同步: {n_sync}")
        call("idb_save", {})
        print("idb_save 完成")
    else:
        for r in renames[:5]:
            print(f"  [dry] {r[0]}: {r[1]} -> {r[2]}")
        print("dry-run: 未写入")


if __name__ == "__main__":
    main()
