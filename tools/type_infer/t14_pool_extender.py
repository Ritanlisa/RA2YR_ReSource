#!/usr/bin/env python3
"""t14_pool_extender.py — 离线结构真值挖掘（CSP 架构合规版）。

架构裁决后的重写（2026-09-04, 替代权重/窗口启发式版）:
  通道 1 vtable 安装自证: 仅取**主表安装**（`mov [reg], offset vt`,
    无位移——this+0 处的对象自身 vtable）; this = 主表类的 LCA。
    多个互不相关的主表类 = COMDAT 折叠同码 → 弃（唯一性不可判）。
    次表安装（[reg+N]）是基类子对象/成员对象, 对 this 无判别力, 不参与。
  通道 2 vtable 槽位归属: this = 全部包含类祖先集交集的**唯一最小元**
    （真 LCA）; 交集有多个不可比最小元 = 不可判 → 弃。
  （原通道 3 委托构造窗口启发式已撤除——非精确数据流。）

所有判定为确定性集合运算, 无计数/权重/窗口/argmax。
输出 .omo/t14_extra_pool.json, 经 anchors/structural_truth.json 喂引擎。
"""
import json
import os
import re
import sys
from collections import Counter, defaultdict

_HERE = os.path.dirname(os.path.abspath(__file__))
PROJ = os.path.dirname(os.path.dirname(_HERE))
sys.path.insert(0, _HERE)

SNAP = os.path.join(PROJ, "decompile-results", "full_export", "src")
OUT_POOL = os.path.join(PROJ, ".omo", "t14_extra_pool.json")

# 仅匹配主表安装: [reg] 无位移
_RE_VT_PRIMARY = re.compile(
    r"\w+:\s+mov (?:dword ptr )?\[([a-z]{2,3})\], "
    r"offset (\?\?_7\S+|@?\S+?@@6B@?)")
_RE_ADDR_LINE = re.compile(r"^// addr=0x([0-9A-Fa-f]{8})")
_RE_VT_SYM = re.compile(r"^\?\?_7(.+?)@@6B@")
_RE_CRT = re.compile(r"^(std::| ATL::|Concurrency::|type_info|bad_)")


def demangle_to_canon(sym, r2c, canon_ns):
    m = _RE_VT_SYM.match(sym)
    if not m:
        return None
    cls = m.group(1)
    if _RE_CRT.match(cls):
        return None
    if cls in canon_ns:
        return cls
    return r2c.get(cls)


def unique_lca(classes, ancestors_of):
    """类集合的唯一最小公共祖先; 多个不可比最小元 → None（不可判）。"""
    common = None
    for c in classes:
        anc = ancestors_of(c)
        common = anc if common is None else (common & anc)
    if not common:
        return None
    minimals = [m for m in common
                if not any(x != m and m in ancestors_of(x)
                           for x in common)]
    return minimals[0] if len(minimals) == 1 else None


def main():
    align = json.load(open(os.path.join(
        PROJ, "anchors", "class_name_align.json"), encoding="utf-8"))
    r2c = {k: v["canon"] for k, v in align["rtti_to_canon"].items()}
    canon_ns = set(align["canon_to_rtti"]) | set(r2c.values())
    db = json.load(open(os.path.join(PROJ, "anchors", "class_db.json"),
                        encoding="utf-8"))["classes"]

    def ancestors_of(c):
        rec = db.get(c) or {}
        return set(rec.get("full_ancestors") or [c]) | {c}

    # ── 通道 1: 主表安装扫描 + 保守寄存器追踪 ──
    # 仅当安装目标寄存器可证明别名入口 this(ecx) 时才算自证:
    #   mov R, ecx → R 加入别名集; R 的任何其它写（mov R,X / lea / xor…
    #   以及 call 后的 caller-saved eax/ecx/edx 失效）→ R 移出。
    # 分支路径上的写在地址序下同样视为失效（保守: 宁弃证据不纳假证）。
    # 19 个 TOP 冲突的汇编实证: 安装目标多为新分配成员([eax])、栈出参
    # ([esi]=arg) 等, 与 this 无关。
    CALLER_SAVED = {"eax", "ecx", "edx"}
    _RE_MOV_R = re.compile(
        r"\w+:\s+(mov|lea|xor|or|and|add|sub|imul|cdq|pop)\s+(\w+),")
    _RE_CALL = re.compile(r"\w+:\s+call\b")
    primaries = defaultdict(set)  # addr -> {canon classes}
    cur = None
    aliases = set()
    for fn in sorted(os.listdir(SNAP)):
        if not fn.endswith(".cpp"):
            continue
        with open(os.path.join(SNAP, fn), encoding="utf-8") as f:
            for ln in f:
                m = _RE_ADDR_LINE.match(ln)
                if m:
                    cur = m.group(1).upper()
                    aliases = {"ecx"}  # 入口 this
                    continue
                if cur is None:
                    continue
                # vtable 安装: [R] 且 R ∈ 别名集 → this 自证
                dm = _RE_VT_PRIMARY.search(ln)
                if dm and dm.group(1) in aliases:
                    canon = demangle_to_canon(dm.group(2).rstrip(";,"),
                                              r2c, canon_ns)
                    if canon:
                        primaries[cur].add(canon)
                    continue
                # call: caller-saved 失效
                if _RE_CALL.search(ln):
                    aliases -= CALLER_SAVED
                    continue
                # 寄存器写: mov R, ecx → 获得别名; 其它写 → 失去
                wm = _RE_MOV_R.search(ln)
                if wm:
                    op, dst = wm.group(1), wm.group(2).lower()
                    if dst not in ("esp", "ebp"):
                        if op == "mov" and dst in aliases:
                            pass  # mov R, ecx 保留
                        elif op == "mov":
                            # 判定源: 纯 ecx → 别名传递; 否则失效
                            src_m = re.search(r",\s*(\w+)\s*$",
                                              ln.split(";", 1)[0])
                            if src_m and src_m.group(1).lower() in aliases:
                                aliases.add(dst)
                            else:
                                aliases.discard(dst)
                        else:
                            aliases.discard(dst)
                        if op == "mov":
                            src_m = re.search(r",\s*(\w+)\s*$",
                                              ln.split(";", 1)[0])
                            if src_m and src_m.group(1).lower() == "ecx" \
                                    and dst not in ("esp", "ebp"):
                                aliases.add(dst)
    print(f"通道1 主表安装(寄存器验证): {len(primaries)} 函数")

    # ── 通道 2: vtable 槽位归属数据 ──
    slot_classes = defaultdict(set)
    for cls, rec in db.items():
        for a in (rec.get("methods") or {}):
            slot_classes[f"0x{int(a, 16):08X}"].add(cls)

    # 现有真值（去重, 不重复入池）
    existing = set()
    tm = json.load(open(os.path.join(PROJ, "type_map.json"),
                        encoding="utf-8"))["type_map"]
    for var, info in tm.items():
        if var.endswith(":this"):
            t = info.get("type", "")
            if t and t not in ("int", "float", "char*", "VOID_PTR", "TOP", ""):
                existing.add(f"0x{int(var[:-5], 16):08X}")
    for k in json.load(open(os.path.join(
            PROJ, "anchors", "ctor_types.json"), encoding="utf-8")):
        existing.add(f"0x{int(k, 16):08X}")

    pool = {}
    n_vt = n_fold = n_slot = n_amb = 0
    # 通道 1 入池: 主表类集合的 LCA
    for addr, classes in primaries.items():
        if addr in existing:
            continue
        if len(classes) == 1:
            pool[addr] = {"class": next(iter(classes)),
                          "source": "vtable_install",
                          "evidence": sorted(classes)}
            n_vt += 1
        else:
            lca = unique_lca(classes, ancestors_of)
            if lca:
                pool[addr] = {"class": lca, "source": "vtable_install",
                              "evidence": sorted(classes)}
                n_vt += 1
            else:
                n_fold += 1  # COMDAT 折叠/无公共祖先 → 不可判
    # 通道 2 入池: 包含类的唯一最小公共祖先
    for addr, classes in slot_classes.items():
        if addr in existing or addr in pool:
            continue
        lca = unique_lca(classes, ancestors_of)
        if lca:
            pool[addr] = {"class": lca, "source": "vtable_slot",
                          "evidence": sorted(classes)[:6]}
            n_slot += 1
        else:
            n_amb += 1

    json.dump(pool, open(OUT_POOL, "w", encoding="utf-8"),
              ensure_ascii=False, indent=0)
    print(f"扩展池: {len(pool)} (install={n_vt}, slot={n_slot}; "
          f"弃: 折叠/无公共祖先={n_fold}, 多最小元不可判={n_amb})")


if __name__ == "__main__":
    main()
