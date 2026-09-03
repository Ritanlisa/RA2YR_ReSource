#!/usr/bin/env python3
"""t14_pool_extender.py — 离线扩展 this 真值池（快照汇编挖掘, 无需 IDA）。

通道 1 vtable 安装自证: 导出快照的汇编里 `mov dword ptr [esi], offset
??_7Class@@6B@` = 该函数向 this 安装类 Class 的 vtable → ctor/dtor,
this = Class（含 MI 次表 [reg+N]——只用主表 [reg] 判 this, 次表做
交叉验证）。MSVC 修饰名经 class_name_align 归一到 canon。

通道 2 vtable 槽位归属: class_db[c].methods（vtable 槽位成员）里尚未
定型的 thiscall 函数 → this = 包含类全集的最深公共祖先（dispatch
语义: 接收者可能是任一包含类, may-hold = 公共祖先）。

输出 .omo/t14_extra_pool.json: {addr_norm: {"class": canon, "source":
"vtable_install"|"vtable_slot", "evidence": ...}} — t14_mass_type 自动
合并（优先级低于 ctor_types, 高于 type_map 传播级）。
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

_RE_VT_INSTALL = re.compile(
    r"\w+:\s+mov (?:dword ptr )?\[([a-z]{2,3})(\+[0-9A-Fa-fh]+)?\], "
    r"offset (\?\?_7\S+|@?\S+?@@6B@?)")
_RE_ADDR_LINE = re.compile(r"^// addr=0x([0-9A-Fa-f]{8})")
# vtable 符号: ??_7<Class>@@6B@ 或 ??_7<Class>@@6B@_<N> (MI 次表)
_RE_VT_SYM = re.compile(r"^\?\?_7(.+?)@@6B@")

# CRT/标准库类排除（不属于游戏对象模型）
_RE_CRT = re.compile(r"^(std::| ATL::|Concurrency::|type_info|bad_)")


def demangle_to_canon(sym: str, r2c: dict, canon_ns: set):
    """vtable 符号的类部分 → canon。??_7X@@6B@ → X。"""
    m = _RE_VT_SYM.match(sym)
    if not m:
        return None
    cls = m.group(1)
    if _RE_CRT.match(cls):
        return None
    if cls in canon_ns:
        return cls
    return r2c.get(cls)


def main():
    align = json.load(open(os.path.join(
        PROJ, "anchors", "class_name_align.json"), encoding="utf-8"))
    r2c = {k: v["canon"] for k, v in align["rtti_to_canon"].items()}
    canon_ns = set(align["canon_to_rtti"]) | set(r2c.values())
    db = json.load(open(os.path.join(PROJ, "anchors", "class_db.json"),
                        encoding="utf-8"))["classes"]

    # ── 通道 3: 委托构造/析构 —— 函数把入口 ecx(this) 溢出到 R, 后续
    # `mov ecx, R` + `call <ctor/dtor>` → this = 该类。两行窗口验证
    # 调用点的 ecx 确实是溢出别名（区别于工厂: 工厂以 new 返回值 eax
    # 为 ecx 调 ctor）。调用目标经 name→addr 解析（refs 名或 sub_ 操作数）。
    ct_class = {}  # ctor addr -> canon
    for k, cls in json.load(open(os.path.join(
            PROJ, "anchors", "ctor_types.json"), encoding="utf-8")).items():
        try:
            ct_class[int(k, 16)] = r2c.get(cls, cls)
        except ValueError:
            continue
    name_to_addr = {}
    fcache = os.path.join(PROJ, ".omo", "full_export_funcs.json")
    if os.path.exists(fcache):
        for f in json.load(open(fcache, encoding="utf-8")):
            try:
                name_to_addr[f.get("name", "")] = int(f["addr"], 16)
            except (ValueError, KeyError):
                pass

    deleg = defaultdict(set)
    n_files3 = 0
    for fn in os.listdir(SNAP):
        if not fn.endswith(".cpp"):
            continue
        n_files3 += 1
        cur = None
        ln_count = 0
        spilled = None      # this 别名寄存器
        last_ecx_load = None  # 最近一条 `mov ecx, R` 的 R
        with open(os.path.join(SNAP, fn), encoding="utf-8") as f:
            for ln in f:
                m = _RE_ADDR_LINE.match(ln)
                if m:
                    cur = m.group(1).upper()
                    ln_count = 0
                    spilled = None
                    last_ecx_load = None
                    continue
                if cur is None:
                    continue
                ln_count += 1
                ms = re.search(r":\s+mov ([a-z]{2,3}), ecx\b", ln)
                if ms and ln_count <= 30 and spilled is None:
                    spilled = ms.group(1)
                    continue
                me = re.search(r":\s+mov ecx, ([a-z]{2,3})\b", ln)
                if me:
                    last_ecx_load = me.group(1)
                    continue
                mc = re.search(r":\s+call (?:ds:)?([\w:]+)", ln)
                if mc and spilled and last_ecx_load == spilled:
                    tgt_name = mc.group(1)
                    tgt = name_to_addr.get(tgt_name)
                    if tgt is None:
                        mr = re.search(r"; -> (sub_[0-9A-Fa-f]+)", ln)
                        tgt = name_to_addr.get(mr.group(1)) if mr else None
                    if tgt is not None and tgt in ct_class:
                        deleg[cur].add(ct_class[tgt])
                        last_ecx_load = None
    print(f"通道3 委托构造候选: {len(deleg)} (入池在 existing 就绪后)")

    # ── 通道 1: 离线扫汇编 ──
    installs = defaultdict(lambda: defaultdict(int))  # addr -> class -> count
    n_files = 0
    for fn in os.listdir(SNAP):
        if not fn.endswith(".cpp"):
            continue
        n_files += 1
        cur_addr = None
        with open(os.path.join(SNAP, fn), encoding="utf-8") as f:
            for ln in f:
                m = _RE_ADDR_LINE.match(ln)
                if m:
                    cur_addr = m.group(1).upper()
                    continue
                if cur_addr is None or "offset " not in ln:
                    continue
                dm = _RE_VT_INSTALL.search(ln)
                if not dm:
                    continue
                reg, disp, sym = dm.group(1), dm.group(2), dm.group(3)
                canon = demangle_to_canon(sym.rstrip(";,"), r2c, canon_ns)
                if not canon:
                    continue
                # 主表 ([reg] 无位移) 权重 3, 次表 1
                installs[cur_addr][canon] += 3 if disp is None else 1
    print(f"扫描 {n_files} 个桶文件: {len(installs)} 个函数含 vtable 安装")

    # ── 通道 2: vtable 槽位归属（针对 thiscall 未定型函数）──
    # 包含类 → 槽位地址
    slot_classes = defaultdict(set)  # addr -> {classes}
    for cls, rec in db.items():
        for a in (rec.get("methods") or {}):
            slot_classes[a.upper()].add(cls)

    # 现有真值池（避免重复/降级）
    existing = {}
    tm = json.load(open(os.path.join(PROJ, "type_map.json"),
                        encoding="utf-8"))["type_map"]
    for var, info in tm.items():
        if var.endswith(":this"):
            t = info.get("type", "")
            if t and t not in ("int", "float", "char*", "VOID_PTR", ""):
                existing[var[:-5].upper().replace("0X", "0x")] = t
    ct = json.load(open(os.path.join(PROJ, "anchors", "ctor_types.json"),
                        encoding="utf-8"))
    for k in ct:
        existing[k.upper()] = "ctor"

    def ancestors_of(c):
        rec = db.get(c) or {}
        return set(rec.get("full_ancestors") or [c]) | {c}

    pool = {}
    n_vt = n_slot = n_deleg = 0
    # 通道 3 入池（existing 已就绪）
    for addr, classes in deleg.items():
        if addr in existing or len(classes) != 1:
            continue
        pool[addr] = {"class": next(iter(classes)),
                      "source": "delegating_ctor",
                      "evidence": sorted(classes)}
        n_deleg += 1
    # 通道 1 入池
    for addr, cls_counts in installs.items():
        if addr in existing:
            continue
        best = max(sorted(cls_counts), key=lambda c: cls_counts[c])
        pool[addr] = {"class": best, "source": "vtable_install",
                      "evidence": dict(cls_counts)}
        n_vt += 1
    # 通道 2: 未入池且不在 existing 的槽位函数
    for addr, classes in slot_classes.items():
        if addr in existing or addr in pool:
            continue
        # 最深公共祖先: 全部包含类的祖先集交集
        common = None
        for c in classes:
            anc = ancestors_of(c)
            common = anc if common is None else (common & anc)
        if not common:
            continue
        # 交集中最深者（被其他包含类的祖先集包含最多的）
        best = max(sorted(common),
                   key=lambda c: sum(1 for x in common if x in ancestors_of(c)))
        pool[addr] = {"class": best, "source": "vtable_slot",
                      "evidence": sorted(classes)[:6]}
        n_slot += 1

    json.dump(pool, open(OUT_POOL, "w", encoding="utf-8"),
              ensure_ascii=False, indent=0)
    print(f"扩展池: {len(pool)} (install={n_vt}, slot={n_slot}, deleg={n_deleg})")
    print(f"  通道1 类分布 top: "
          f"{Counter(v['class'] for v in pool.values() if v['source']=='vtable_install').most_common(6)}")


if __name__ == "__main__":
    main()
