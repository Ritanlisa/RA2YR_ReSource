#!/usr/bin/env python3
"""t14_mass_type.py — 全量 this 类型批量回写（真值池全覆盖）。

背景（2026-09-03 用户驳回 1,062 函数版导出）:
  T14 rollout 只覆盖 IDA 命名 + vtable 双门控的 1,062 函数, 但真值池实际有
  ~10K: ctor_types.json 1,254 个 vtable 安装者（sub_4A0380 → EnumConnections
  Class 实证漏网）+ type_map 9,634 个 this 类定型（8,294 ANCHORED）。

真值合并优先级: ctor_types (rank3, 二进制) > type_map ANCHORED >
DIRECT_PROP > CHAIN_PROP/INFERRED。全部经 canon 命名空间（struct 已按
同空间声明——t14_structs 972 类, 无 struct 的类回写不落盘, 跳过并计数）。

用法:
  python tools/type_infer/t14_mass_type.py [--dry-run] [--min-conf ANCHORED]
"""
import argparse
import json
import os
import re
import sys
import time

_HERE = os.path.dirname(os.path.abspath(__file__))
PROJ = os.path.dirname(os.path.dirname(_HERE))
sys.path.insert(0, _HERE)

from ida_apply_t14 import call, rewrite_this  # noqa: E402
from t14_rollout import _norm_addr, export_protos, name_anon_params  # noqa: E402

STATE = os.path.join(PROJ, ".omo", "t14_mass_type_state.json")
_RE_IDA_AUTO = re.compile(
    r"^(sub_|nullsub_|j_|loc_|locret_|byte_|word_|dword_|qword_|off_|unk_|asc_|stru_|flt_)",
    re.IGNORECASE)



def load_truth():
    """函数地址 → (canon 类名, 来源)。

    优先级: ctor_types (rank3) > 扩展池 vtable_install/vtable_slot
    (汇编自证/槽位归属, 覆盖传播级) > type_map 按置信度。
    """
    truth = {}
    tm = json.load(open(os.path.join(PROJ, "type_map.json"),
                        encoding="utf-8"))["type_map"]
    for var, info in tm.items():
        if not (var.endswith(":this")):
            continue
        t = info.get("type", "")
        if not t or t in ("int", "float", "char*", "VOID_PTR", "TOP", ""):
            continue
        conf = info.get("confidence", "")  # 仅作报告注记, 不参与判定
        addr = var[:-5]  # strip ':this'
        truth[_norm_addr(addr)] = (t, f"type_map:{conf}")
    # 扩展池（t14_pool_extender 离线产出）——汇编自证优先于传播
    extra_path = os.path.join(PROJ, ".omo", "t14_extra_pool.json")
    if os.path.exists(extra_path):
        for a, e in json.load(open(extra_path, encoding="utf-8")).items():
            na = _norm_addr(a)
            if na:
                truth[na] = (e["class"], f"extra:{e['source']}")
    ct = json.load(open(os.path.join(PROJ, "anchors", "ctor_types.json"),
                        encoding="utf-8"))
    align = json.load(open(os.path.join(PROJ, "anchors", "class_name_align.json"),
                           encoding="utf-8"))
    r2c = {k: v["canon"] for k, v in align["rtti_to_canon"].items()}
    for k, cls in ct.items():
        a = _norm_addr(k)
        canon = r2c.get(cls, cls)
        truth[a] = (canon, "ctor_vtable_install")  # rank3 覆盖
    return truth


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--limit", type=int, default=0)
    args = ap.parse_args()

    truth = load_truth()
    alias_path = os.path.join(PROJ, "anchors", "mangled_alias.json")
    alias = json.load(open(alias_path, encoding="utf-8"))         if os.path.exists(alias_path) else {}
    print(f"真值池: {len(truth)} 函数 (alias {len(alias)})")

    # struct 门（无 struct 不落盘）——探测全部涉及的类（修饰名先别名化）
    involved = sorted({alias.get(c, c) for c, _ in truth.values()})
    struct_ok = set()
    for i in range(0, len(involved), 50):
        r = call("type_inspect", {"queries": [{"name": c} for c in
                                              involved[i:i + 50]]})
        for item in (r if isinstance(r, list) else []):
            if item.get("exists") and item.get("is_udt") \
                    and (item.get("size") or 0) >= 4:
                struct_ok.add(item["name"])
    print(f"struct 门: {len(struct_ok)}/{len(involved)} 类可落盘")

    # 函数名缓存（回写的 ty 需要函数名）
    fns_cache = os.path.join(PROJ, ".omo", "full_export_funcs.json")
    name_by_addr = {}
    if os.path.exists(fns_cache):
        for f in json.load(open(fns_cache, encoding="utf-8")):
            na = _norm_addr(f["addr"])
            if na:
                name_by_addr[na] = f.get("name", "")

    st = {"done": [], "applied": 0, "fail": 0, "skip_noproto": 0,
          "skip_shape": 0, "skip_nostruct": 0, "skip_done": 0}
    if os.path.exists(STATE):
        st = json.load(open(STATE, encoding="utf-8"))
        # 清理越界错位键（通道④键规范化修复前的产物, 202 个）
        st["done"] = [d for d in st["done"] if int(d, 16) <= 0x7E1000]
        print(f"断点续跑: {len(st['done'])} 已处理")
    done = set(st["done"])

    truth = {a: (alias.get(c, c), s) for a, (c, s) in truth.items()}
    targets = sorted(
        (a for a, (c, _) in truth.items() if a and c in struct_ok and a not in done))
    if args.limit:
        targets = targets[: args.limit]
    print(f"待处理: {len(targets)}")

    t0 = time.time()
    B = 60
    fail_samples = []
    for base in range(0, len(targets), B):
        chunk = targets[base:base + B]
        protos = export_protos(chunk)
        edits = []
        for a in chunk:
            cls, src = truth[a]
            p = protos.get(a)
            if not p:
                st["skip_noproto"] += 1
                done.add(a)
                continue
            proto = (p.get("prototype") or "").strip()
            if not proto:
                st["skip_shape"] += 1
                done.add(a)
                continue
            if f"{cls} *this" in proto:
                st["skip_done"] += 1
                done.add(a)
                continue
            # 已定型为其他类: CSP+二进制真值是唯一权威（load_truth 优先级
            # ctor > vtable_install > type_map 传播）——冲突时重定型为真值。
            # 调用方投票通道已按架构裁决移除（统计推断无矛盾信号, 不可接受）
            cur_m = re.search(r"\((\w+) \*this", proto)
            if cur_m and cur_m.group(1) != cls:
                st["retruth"] = st.get("retruth", 0) + 1
            if "__thiscall(" not in proto:
                # thiscall 无 this 参形态（`char()`）: 真值在池（vtable/ctor
                # 自证）, 按真值构造全签名——返回类型沿用原型的
                ret = re.sub(r"__\w+call|__pascal", "",
                             proto.split("(")[0]).strip() or "int"
                new_proto = f"{ret} __thiscall({cls} *this)"
            else:
                new_proto = rewrite_this(proto, cls)
                if new_proto is None:
                    st["skip_shape"] += 1
                    done.add(a)
                    continue
            if new_proto is None:
                st["skip_shape"] += 1
                done.add(a)
                continue
            # 返回段清洗: 双调用约定/寄存器注解（`__userpurge@<al>`、
            # `@<edx:eax>`、紧贴形 `__userpurge__thiscall`）都会被拒绝
            new_proto = re.sub(r"\s*__(?:userpurge|usercall)\b", "", new_proto)
            new_proto = re.sub(
                r"^(.*?)\s+__\w*call\s+__thiscall", r"\1 __thiscall",
                new_proto)
            new_proto = re.sub(r"@<[\w:]+>\s*", "", new_proto)
            new_proto = re.sub(r"(?<![\s(])__thiscall", " __thiscall",
                               new_proto)
            # #NNN 内部 ID 擦洗（内部 ID 无法在导出物中呈现, 无信息损失）:
            # 指针形 `#375 *` → `void *`, 裸形 `#376` → `int`（参数位与返回位）
            new_proto = re.sub(r"#[\d]+(?:\s*\*)+", "void *", new_proto)
            new_proto = re.sub(r"(?<![\w])#[\d]+(?=[,)])", "int", new_proto)
            new_proto = re.sub(r"^#\d+ \*", "void *", new_proto)
            new_proto = re.sub(r"^#\d+(?=\s)", "int", new_proto)
            # CRT/库类防御（调用方投票可能漏入）
            if re.match(r"^(std::|ATL::|Concurrency|VirtualProcessor|facet)",
                        new_proto):
                st["skip_shape"] += 1
                done.add(a)
                continue
            # 函数名保持原样——改名会破坏 symbols-locked 的 signals.json
            # 1:1:1 同步（AGENTS.md 管道保护）, 类前缀留给 rename_symbol.py
            nm = name_by_addr.get(a) or p.get("name") or f"sub_{a}"
            if nm.startswith("?") or re.match(
                    r"^(std_|_STD|__|_Crt|_Init|Iostream|ios_|Winmain)", nm) \
                    or not all(re.match(r"^[A-Za-z_]\w*$", seg)
                               for seg in nm.split("::")):
                # CRT/库内部件与非法声明名（`VtableStub::477740` 数字段）
                st["skip_shape"] += 1
                done.add(a)
                continue
            if re.search(r"[\[\]<>@]", nm):
                # 名字含非法声明字符（`AITriggerTypeClass[40]::X`）→ 无名
                # 声明（只设类型, 不触碰名字）
                edits.append({"addr": p["addr"], "ty": name_anon_params(new_proto),
                              "expect": a})
            else:
                named = new_proto.replace("__thiscall(", f"__thiscall {nm}(", 1)
                edits.append({"addr": p["addr"], "ty": name_anon_params(named),
                              "expect": a})
        if edits and not args.dry_run:
            for i in range(0, len(edits), 50):
                sub = edits[i:i + 50]
                try:
                    res = call("type_apply_batch", {"batch": {
                        "edits": [{k: v for k, v in e.items() if k != "expect"}
                                  for e in sub]}})
                    items = res.get("results", []) if isinstance(res, dict) else res
                    for it in (items if isinstance(items, list) else []):
                        if it.get("ok"):
                            st["applied"] += 1
                        else:
                            st["fail"] += 1
                            if len(fail_samples) < 10:
                                fail_samples.append((
                                    str(it.get("edit", {}).get("ty", ""))[:90],
                                    str(it.get("error", ""))[:90]))
                except RuntimeError:
                    st["fail"] += len(sub)
        elif edits:
            st["applied"] += 0
        for a in chunk:
            done.add(a)
        st["done"] = sorted(done)
        json.dump(st, open(STATE, "w", encoding="utf-8"))
        n = base + len(chunk)
        if n % 600 < B:
            el = time.time() - t0
            print(f"  {n}/{len(targets)} applied={st['applied']} "
                  f"fail={st['fail']} ({el:.0f}s)", flush=True)

    if not args.dry_run:
        call("idb_save", {})
        print("idb_save 完成")
    print(f"终态: applied={st['applied']} fail={st['fail']} "
          f"skip(noproto/shape/done/nostruct)={st['skip_noproto']}/"
          f"{st['skip_shape']}/{st['skip_done']}/{st['skip_nostruct']}")
    for ty, err in fail_samples:
        print(f"  FAIL ty={ty}\n       err={err}")


if __name__ == "__main__":
    main()
