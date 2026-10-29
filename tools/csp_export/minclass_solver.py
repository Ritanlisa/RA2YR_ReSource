#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""minclass_solver.py —— 最小类数 CSP 求解器（约束族 C1-C8）。

候选集合（类宇宙）
    anchors/class_db.json   1,597 类：继承真值 / vtable 集合 / vtable_slot_count / size / ctors
    tools/class_layouts.json 1,282 类：扁平成员表 {offset: size}（C1 宽度相容判据）
    anchors/vtable_slot_authority.json 954 类 / 13,204 槽位（C3、C6）
    anchors/layout_evidence.json 二进制访问证据（gen_layout_evidence.py 产物）：
        每类 observed_extent（访问范围，尺寸下界）+ 观测 (offset,width) 成员。
        effective_size = max(declared_size, observed_extent)；C1 密度门与 C5 用
        effective_size，declared_size 仅保留为参考。observed_extent 不是 sizeof——
        sizeof 唯一精确来源是 C5 (operator new)。

约束族（每族给出"该实体允许的类集合"或 EXACT 单类）
    C1 成员访问     : 类必须在每个被访问偏移上都有成员；宽度相容按 obs_w <= member_w
    C2 this 传递    : thiscall 的 this 实参类 ⊑ 被调方声明的 this 类；函数自身 this 同规
    C3 虚表槽位     : obj->vtable[k] 的接收者类必须拥有槽位 k（无槽位数据的类=未知，放行）
    C4 ctor/dtor 装表 (EXACT) : 在 [this+0] 装入 vtable 的函数，其 this 的类 == 该 vtable 的类
    C5 分配长度 (EXACT)       : operator new N 产生的对象 effective_size(class) == N
    C6 虚表槽位数 (EXACT)     : 已知 vtable 身份的对象，class.vtable_slot_count == N
    C7 参数/返回方差          : 形参声明类 / 调用点实参类约束实体；T ⊑ U 方差校验
    C8 全局对象身份           : 全局地址按值类对象 / 装了 vtable / 名字证据 → 该类

求解
    实体 = MEMBER_ACCESS base ∪ FUNC_PARAM 端点 ∪ CALL_ARG 目标 ∪ CALL_VTABLE receiver ∪ new 站点
    等式 = FUNC_PARAM / CALL_ARG 具名实体 / 寄存器到达定义（CFG must 分析） / new→ctor
    簇域 = C1(簇内观测并集) ∩ 各族掩码 ∩ EXACT
    目标 = 最少不同类数：贪心集合覆盖 + 局部改进（去冗余 + 2 换 1），附不相交域打包下界
    空域绝不静默丢弃：全部进 anchors/minclass_conflicts.json（best-effort 域仍参与覆盖）

用法
    python tools/csp_export/minclass_solver.py
    python tools/csp_export/minclass_solver.py --no-reg-flow
    python tools/csp_export/minclass_solver.py --build-facts   # 从 full_export 重建二进制事实缓存
    python tools/csp_export/minclass_solver.py --evidence spec         # 仅 layout_evidence.json（默认，非循环）
    python tools/csp_export/minclass_solver.py --evidence spec+proto   # 叠加 proto-this 通道（备选，循环口径）

等式合并策略（proven-same-object，2026-10-29 收紧）
    跨帧合并的唯一合法目标是"同一调用点的实参值 = 形参槽位在该点的值"。
    被调方形参实体（T:<callee> / P:<callee>:k）被所有调用点共享，是多态汇合点；
    把多个调用点的实参实体并进同一汇合点会把无关对象粘成一簇
    （X152: 105 个 C2 空域冲突簇中 71% 是此伪影，如 G:87E790 同时钉到
    AudioStream+CoordBounds）。收紧后：
      - 多源汇合点（>1 个不同来源实体）一律拒绝合并（multi_caller_join）
      - 单源汇合点仍按来源种类门控：
          T:/P:（调用方自身的 this/形参）→ 允许（逐站同一对象）
          G:（全局）→ 仅当 C8 ctor/vtable-install 证明其类时允许（global_unproven）
          M:<fn>:this:<off>（成员链）→ 仅当 member_types.json 解析出成员类时
            允许（member_chain_unproven）
          R:（寄存器）→ 仅当到达定义不跨 call / 不经控制流汇合时允许
            （reg_flow_tainted；重定义由数据流 kill 语义天然排除）
          其它 → 拒绝（unproven_kind）
      - 同帧等式（FUNC_PARAM: this/形参 ↔ 本函数寄存器）与 new→ctor 保持不变
    每个被拒合并按原因计数（rejected_merges），与合并 census 一同打印并落盘。
"""
import argparse
import bisect
import collections
import glob
import io
import json
import os
import sys
import re
import time

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

FAMILIES = ["C1", "C2", "C3", "C4", "C5", "C6", "C7", "C8"]
FAMILY_DESC = {
    "C1": "member access (offset, obs_w<=member_w)",
    "C2": "this passing (arg class ⊑ callee this-class)",
    "C3": "vtable slot membership",
    "C4": "ctor/dtor vtable install @this+0 (EXACT)",
    "C5": "operator new size (EXACT)",
    "C6": "vtable identity slot count (EXACT)",
    "C7": "param/return variance",
    "C8": "global object identity",
}

REGS = {"eax", "ebx", "ecx", "edx", "esi", "edi", "ebp", "esp"}
DATA_LO, DATA_HI = 0x812000, 0xB7A000          # .data（AGENTS.md）

FACTS_PATH = "anchors/minclass_binary_facts.json"
FACTS_SRC = "decompile-results/full_export/src/*.cpp"


def jload(path, default=None):
    p = path if os.path.isabs(path) else os.path.join(ROOT, path)
    if not os.path.exists(p):
        return default
    with io.open(p, encoding="utf-8") as fh:
        return json.load(fh)


def hx(v, default=None):
    if isinstance(v, int):
        return v
    if not isinstance(v, str):
        return default
    s = v.strip().lower()
    if s.startswith("0x"):
        s = s[2:]
    try:
        return int(s, 16)
    except ValueError:
        return default


class UF:
    def __init__(self):
        self.p = {}

    def find(self, x):
        p = self.p
        if x not in p:
            p[x] = x
            return x
        r = x
        while p[r] != r:
            r = p[r]
        while p[x] != r:
            p[x], x = r, p[x]
        return r

    def union(self, a, b):
        ra, rb = self.find(a), self.find(b)
        if ra == rb:
            return False
        if ra > rb:
            ra, rb = rb, ra
        self.p[rb] = ra
        return True


# ==========================================================================
# 1. 类宇宙
# ==========================================================================
def build_universe(use_evidence=True):
    db = jload("anchors/class_db.json")["classes"]
    lay = jload("tools/class_layouts.json")
    align = jload("anchors/class_name_align.json", {})
    malias = jload("anchors/mangled_alias.json", {})
    r2c = {k: v["canon"] for k, v in (align.get("rtti_to_canon") or {}).items()}

    names = list(db.keys())
    idx = {nm: i for i, nm in enumerate(names)}
    n = len(names)

    alias = {}
    for k in names:
        alias[k] = k
    for rn, rec in (align.get("rtti_to_canon") or {}).items():
        c = rec.get("canon")
        if c in idx and rn not in alias:
            alias[rn] = c
    for k, v in (malias or {}).items():
        if isinstance(v, str) and v in idx and k not in alias:
            alias[k] = v
        elif isinstance(v, dict):
            for cand in ("canon", "canonical", "name"):
                if v.get(cand) in idx and k not in alias:
                    alias[k] = v[cand]
                    break

    def resolve(name):
        if not isinstance(name, str):
            return None
        s = name.strip()
        if not s:
            return None
        if s in idx:
            return idx[s]
        if s in alias:
            return idx[alias[s]]
        t = s
        for _ in range(8):
            if t in idx:
                return idx[t]
            if t in alias:
                return idx[alias[t]]
            if t.endswith("@"):
                t = t[:-1]
                continue
            break
        if s.startswith("?$"):
            base = s[2:].split("@", 1)[0]
            if base in idx:
                return idx[base]
        return None

    members = [dict() for _ in range(n)]
    layout_size = [None] * n
    has_layout = [False] * n
    for i, c in enumerate(names):
        recs = [c] + [r for r in (db[c].get("rtti_names") or []) if r != c]
        cand = [r for r in recs if r in lay] + \
               [r2c[r] for r in recs if r in r2c and r2c[r] in lay]
        best = None
        for r in cand:
            o = lay[r].get("offsets") or {}
            if best is None or len(o) > len(best[1]):
                best = (r, o, lay[r].get("size"))
        if best:
            has_layout[i] = True
            if isinstance(best[2], int):
                layout_size[i] = best[2]
            for k, rec in (best[1] or {}).items():
                try:
                    off = int(str(k), 10)
                except ValueError:
                    continue
                w = rec.get("size") if isinstance(rec, dict) else None
                members[i][off] = int(w) if isinstance(w, int) and w > 0 else None

    # ---- 模板实例继承基模板的 offset 0（vfptr）----
    # 实测：全部 125 个 VectorClass_* 实例的布局缺 offset 0，而其基模板 VectorClass
    # 有 (0,4)；于是 C2 唯一钉到的类被 C1 以"缺 offset 0"排除，制造 290 个假冲突。
    # 只补 offset 0（多态对象首成员），不搬其它成员，避免掩盖真实布局错误。
    _idx_by_name = {nm: i for i, nm in enumerate(names)}
    n_tmpl0 = 0
    for i, c in enumerate(names):
        if "_" not in c or 0 in members[i]:
            continue
        parts = c.split("_")
        base_i = None
        for k in range(len(parts) - 1, 0, -1):
            pfx = "_".join(parts[:k])
            if pfx in _idx_by_name:
                base_i = _idx_by_name[pfx]
                break
        if base_i is None or 0 not in members[base_i]:
            continue
        members[i][0] = members[base_i][0]
        n_tmpl0 += 1
    print("[layout] template instances given base offset0 (vfptr): %d" % n_tmpl0, flush=True)

    size = [None] * n
    for i in range(n):
        s = layout_size[i]
        if s is None:
            s = db[names[i]].get("size")
        size[i] = int(s) if isinstance(s, int) else None

    # ---- 二进制访问证据（observed extent 是尺寸下界，非 sizeof）----
    eff_size = list(size)
    n_ev = 0
    ev_root = ((jload("anchors/layout_evidence.json", {}) or {}).get("classes") or {}) \
        if use_evidence else {}
    for cls, rec in ev_root.items():
        i = resolve(cls)
        if i is None:
            continue
        ext = rec.get("observed_extent")
        if not isinstance(ext, int) or ext <= 0:
            continue
        n_ev += 1
        for ent in rec.get("extra_offsets") or []:
            try:
                off = int(ent["off"])
                w = int(ent.get("width") or 4)
            except (KeyError, TypeError, ValueError):
                continue
            if w <= 0:
                continue
            prev = members[i].get(off)
            members[i][off] = w if not isinstance(prev, int) or prev <= 0 else max(prev, w)
        cur = eff_size[i]
        eff_size[i] = ext if cur is None else max(cur, ext)

    rtti_base = jload("anchors/rtti_base_arrays.json", {})
    anc = [set([i]) for i in range(n)]
    for i, c in enumerate(names):
        for a in db[c].get("full_ancestors") or []:
            j = resolve(a)
            if j is not None:
                anc[i].add(j)
        for rn in (db[c].get("rtti_names") or []) + [c]:
            for a in rtti_base.get(rn) or []:
                j = resolve(a)
                if j is not None:
                    anc[i].add(j)
        for r in [c] + list(db[c].get("rtti_names") or []) + \
                 [r2c[x] for x in (db[c].get("rtti_names") or []) if x in r2c]:
            rec = lay.get(r)
            p = rec.get("parent") if isinstance(rec, dict) else None
            j = resolve(p) if p else None
            if j is not None:
                anc[i].add(j)
    changed = True
    while changed:
        changed = False
        for i in range(n):
            add = set()
            for a in anc[i]:
                if a != i:
                    add |= anc[a]
            if not add <= anc[i]:
                anc[i] |= add
                changed = True
    desc = [set() for _ in range(n)]
    for i in range(n):
        for a in anc[i]:
            desc[a].add(i)

    # MI 边自检：rtti_base_arrays 的多基链必须完整进入 desc。
    # X152 曾怀疑 Surface→DSurface 缺失导致"存在公共后代却判空域"——在此可观测。
    def _has_desc(base, dc):
        ib, idc = resolve(base), resolve(dc)
        return bool(ib is not None and idc is not None and idc in desc[ib])

    mi_probe = {("%s->%s" % (b, d)): _has_desc(b, d)
                for (b, d) in (("Surface", "DSurface"), ("XSurface", "DSurface"),
                               ("ObjectClass", "UnitClass"),
                               ("AbstractClass", "TechnoClass"))}

    vtables = [set() for _ in range(n)]
    slot_count = [None] * n
    for i, c in enumerate(names):
        for va in (db[c].get("vtables") or {}):
            v = hx(va)
            if v is not None:
                vtables[i].add(v)
        sc = db[c].get("vtable_slot_count")
        if isinstance(sc, int):
            slot_count[i] = sc

    auth = jload("anchors/vtable_slot_authority.json", {})
    slot_set = [None] * n
    auth_hit = 0
    for k, rec in auth.items():
        i = resolve(k)
        if i is None:
            continue
        auth_hit += 1
        ss = set()
        for sk in (rec.get("slots") or {}):
            try:
                ss.add(int(sk))
            except (TypeError, ValueError):
                pass
        slot_set[i] = ss if slot_set[i] is None else (slot_set[i] | ss)
        sc = rec.get("slot_count")
        if isinstance(sc, int):
            slot_count[i] = sc          # authority（二进制 .rdata 实测）优先于 class_db
        v = hx(rec.get("vtable"))
        if v is not None:
            vtables[i].add(v)

    # ---- 二进制 vtable 范围证据（.rdata text-run 实测，2026-10-29）----
    # anchors/vtable_extent_evidence.json: 每类 primary vtable 的真实槽位数
    # （从 ??_7/??_R4 符号地址起连续 .text 指针计数，RTTI COL 边界止）。
    # slot_set |= {0..extent-1}（C3 成员资格）；slot_count = extent（C6，
    # 二进制实测优先于 authority 的 claimed 计数）。
    ext_ev = jload("anchors/vtable_extent_evidence.json", {}) or {}
    n_ext = 0
    for cls, pc in (ext_ev.get("per_class") or {}).items():
        i = resolve(cls)
        if i is None:
            continue
        pri = pc.get("primary")
        if not pri:
            continue
        ext = pri.get("extent")
        if not isinstance(ext, int) or ext <= 0:
            continue
        n_ext += 1
        ss = slot_set[i] if slot_set[i] is not None else set()
        ss |= set(range(ext))
        slot_set[i] = ss
        slot_count[i] = ext

    return {
        "db": db, "names": names, "idx": idx, "resolve": resolve, "n": n,
        "members": members, "has_layout": has_layout, "size": size,
        "eff_size": eff_size, "n_evidence": n_ev,
        "anc": anc, "desc": desc, "vtables": vtables, "slot_count": slot_count,
        "slot_set": slot_set, "n_layout": sum(1 for x in has_layout if x),
        "n_auth": auth_hit, "n_extent": n_ext,
        "n_desc_edges": sum(len(d) for d in desc), "desc_mi_probe": mi_probe,
    }


# ==========================================================================
# 2. 二进制事实（C4/C5/C6/C8 与寄存器等式链）
# ==========================================================================
RE_FN = re.compile(r"^// ([^\n]+)\n// addr=0x([0-9A-Fa-f]+) size=0x([0-9A-Fa-f]+)$", re.M)
RE_PROTO = re.compile(r"^// proto: (.*)$", re.M)
RE_LINE = re.compile(r"^//   ([0-9a-f]{6,8}): (.*)$", re.M)
RE_MOVVT = re.compile(
    r"mov\s+(?:dword ptr )?\[([a-z]{2,3})(?:\+([0-9A-Fa-f]+h?))?\],\s*offset (\?\?_7\S+)$")
RE_MOVVT_G = re.compile(
    r"mov\s+(?:dword ptr )?\[([^\]]+)\],\s*offset (\?\?_7\S+)$")
RE_MOVRR = re.compile(r"mov\s+([a-z]{2,3}),\s*([a-z]{2,3})$")
RE_WRREG = re.compile(
    r"(?:mov|xor|add|sub|lea|pop|inc|dec|and|or|shl|shr|sar|imul|neg|not)\s+([a-z]{2,3})\b")
RE_JMP = re.compile(r"^(j[a-z]+|loop[a-z]*)\s+(?:short\s+|near\s+)?([A-Za-z_][\w]*)$")
RE_LABEL = re.compile(r"^(?:loc|def|unk)_([0-9A-Fa-f]{6,8})$")
RE_RET = re.compile(r"^retn?\b")


def vt_sym_to_name(sym):
    s = sym[4:] if sym.startswith("??_7") else sym
    s = re.sub(r"(_\d+)?6B@$", "", s)
    return s


def build_cfg(lines):
    """lines: [(addr, ins)] → (blocks: [(start, [(addr,ins)])], succ: {start: [start]})."""
    if not lines:
        return [], {}
    addrs = [a for a, _ in lines]
    aset = set(addrs)
    succ_i = {}
    targets = set()
    for i, (a, ins) in enumerate(lines):
        nxt = addrs[i + 1] if i + 1 < len(lines) else None
        m = RE_JMP.match(ins)
        if m:
            tgt = m.group(2)
            lm = RE_LABEL.match(tgt)
            s = set()
            if lm:
                t = int(lm.group(1), 16)
                if t in aset:
                    s.add(t)
                    targets.add(t)
            if not ins.startswith("jmp") and nxt is not None:
                s.add(nxt)
            succ_i[a] = s
        elif RE_RET.match(ins) or ins.startswith("jmp"):
            succ_i[a] = set()
        else:
            succ_i[a] = {nxt} if nxt is not None else set()
    leaders = {addrs[0]} | targets
    for i, (a, ins) in enumerate(lines):
        if (RE_JMP.match(ins) or ins.startswith("call") or RE_RET.match(ins)) \
                and i + 1 < len(lines):
            leaders.add(addrs[i + 1])
    blocks = []
    cur = []
    for a, ins in lines:
        if a in leaders and cur:
            blocks.append(cur)
            cur = []
        cur.append((a, ins))
    if cur:
        blocks.append(cur)
    start2idx = {b[0][0]: i for i, b in enumerate(blocks)}
    succ = {}
    for b in blocks:
        last_a = b[-1][0]
        succ[b[0][0]] = [start2idx[x] for x in succ_i.get(last_a, ()) if x in start2idx]
    return blocks, succ


def merge_state(a, b):
    """寄存器状态汇合。值为 (entity_id, clean) 元组或 None：
    两路同源但洁净度不一 → 保留源、置污染；异源或单侧无定义 → None。"""
    if a is None:
        return dict(b) if b else {}
    if b is None:
        return dict(a)
    out = {}
    for r in set(a) | set(b):
        va, vb = a.get(r), b.get(r)
        if va == vb:
            out[r] = va
        elif va is not None and vb is not None and va[0] == vb[0]:
            out[r] = (va[0], False)
        else:
            out[r] = None
    return out


def transfer(st, ins, addr):
    """就地更新寄存器状态（值为 (entity_id, clean) 元组或 None）"""
    if ins.startswith("call"):
        for r in ("eax", "ecx", "edx"):
            st[r] = None
        for r, v in st.items():
            # 跨 call 仍存活的到达定义（callee-saved 寄存器）→ 污染（等式规则 3）
            if v is not None and v[1]:
                st[r] = (v[0], False)
        return
    m = RE_MOVRR.match(ins)
    if m:
        d, s = m.group(1), m.group(2)
        st[d] = st.get(s)
        return
    m = re.match(r"mov\s+([a-z]{2,3}),\s*offset\s+([A-Za-z_0-9]+)$", ins)
    if m:
        st[m.group(1)] = None
        return
    m = RE_WRREG.match(ins)
    if m:
        st[m.group(1)] = None


def parse_export(interest):
    """interest: {(call_addr, reg)} —— 需要解析来源的 CALL_ARG 站点"""
    files = sorted(glob.glob(os.path.join(ROOT, FACTS_SRC)))
    if not files:
        return None
    interest_by_addr = collections.defaultdict(set)
    for (a, r) in interest:
        interest_by_addr[a].add(r)
    interest_addrs = sorted(interest_by_addr)
    allocs, installs, ginst, ctor_raw, sym2addr, reg_links = [], [], [], [], {}, []
    t0 = time.time()
    for path in files:
        txt = io.open(path, encoding="utf-8", errors="replace", newline="").read().replace("\r\n", "\n")
        for b in re.split(r"^// =+$", txt, flags=re.M):
            m = RE_FN.search(b)
            if not m:
                continue
            name = m.group(1).strip()
            fn = int(m.group(2), 16)
            sym2addr[name] = fn
            sym2addr[name.replace("::", "__")] = fn
            pm = RE_PROTO.search(b)
            proto = pm.group(1) if pm else ""
            lines = []
            for lm in RE_LINE.finditer(b):
                ins = lm.group(2).split(";", 1)[0].strip()
                lines.append((int(lm.group(1), 16), ins))
            if not lines:
                continue
            # ---- operator new / malloc 站点 ----
            for i, (a, ins) in enumerate(lines):
                if not ins.startswith("call "):
                    continue
                tgt = ins[5:].strip()
                if not ("YAPAXI" in tgt or tgt == "_malloc" or "??_U" in tgt):
                    continue
                size = None
                if i > 0:
                    prev = lines[i - 1][1]
                    mm = re.match(r"push\s+([0-9A-Fa-f]+h?)$", prev)
                    if mm:
                        sv = mm.group(1)
                        size = int(sv[:-1], 16) if sv.endswith("h") else int(sv, 10)
                    else:
                        mm = re.match(r"push\s+([a-z]{2,3})$", prev)
                        if mm:
                            reg = mm.group(1)
                            for j in range(i - 2, max(-1, i - 10), -1):
                                ins2 = lines[j][1]
                                m2 = re.match(r"mov\s+%s,\s*([0-9A-Fa-f]+h?)$" % reg, ins2)
                                if not m2:
                                    m2 = re.match(r"lea\s+%s,\s*\[([0-9A-Fa-f]+h?)\]$" % reg, ins2)
                                if m2:
                                    sv = m2.group(1)
                                    try:
                                        size = int(sv[:-1], 16) if sv.endswith("h") else int(sv, 10)
                                    except ValueError:
                                        size = None
                                    break
                                if re.match(r"mov\s+%s\b" % reg, ins2):
                                    break
                if size is None or not (0 < size <= 0x40000):
                    continue
                dest = None
                for j in range(i + 1, min(i + 6, len(lines))):
                    mm = re.match(r"mov\s+([a-z]{2,3}),\s*eax$", lines[j][1])
                    if mm:
                        dest = mm.group(1)
                        break
                allocs.append((fn, a, size, dest))
            # ---- vtable 安装（保守 ecx 别名追踪）----
            aliases = {"ecx"} if "__thiscall" in proto else set()
            prev_mov_ecx = None
            for a, ins in lines:
                if ins.startswith("call"):
                    if prev_mov_ecx:
                        ctor_raw.append((fn, a, prev_mov_ecx[1], ins[5:].strip()))
                    prev_mov_ecx = None
                    aliases -= {"eax", "ecx", "edx"}
                    continue
                mm = RE_MOVVT.match(ins)
                if mm:
                    reg, off, sym = mm.group(1), mm.group(2), mm.group(3)
                    o = 0
                    if off:
                        o = int(off[:-1], 16) if off.endswith("h") else int(off, 16)
                    if reg in aliases:
                        installs.append((fn, a, o, vt_sym_to_name(sym)))
                    prev_mov_ecx = None
                    continue
                mm = RE_MOVVT_G.match(ins)
                if mm:
                    dst, sym = mm.group(1).strip(), mm.group(2)
                    if not re.match(r"^[a-z]{2,3}(?:\+.*)?$", dst):
                        ginst.append((fn, a, dst, vt_sym_to_name(sym)))
                    prev_mov_ecx = None
                    continue
                mm = RE_MOVRR.match(ins)
                if mm:
                    d, s = mm.group(1), mm.group(2)
                    if s in aliases:
                        aliases.add(d)
                    else:
                        aliases.discard(d)
                    prev_mov_ecx = (a, s) if d == "ecx" else None
                    continue
                mm = RE_WRREG.match(ins)
                if mm:
                    aliases.discard(mm.group(1))
                prev_mov_ecx = None
            # ---- 寄存器到达定义（仅对该函数内的 CALL_ARG 站点做）----
            # interest 以 (addr,reg) 给出；用全局地址区间判定本函数是否命中
            _i = bisect.bisect_left(interest_addrs, lines[0][0])
            hits = _i < len(interest_addrs) and interest_addrs[_i] <= lines[-1][0]
            if hits:
                blocks, succ = build_cfg(lines)
                if blocks:
                    npred = collections.Counter()
                    for sis in succ.values():
                        for si in sis:
                            npred[si] += 1
                    in_state = [None] * len(blocks)
                    in_state[0] = ({"ecx": ("T:%X" % fn, True)}
                                   if "__thiscall" in proto else {})
                    work = [0]
                    while work:
                        bi = work.pop()
                        st = dict(in_state[bi]) if in_state[bi] else {}
                        for (a, ins) in blocks[bi]:
                            transfer(st, ins, a)
                        for si in succ.get(blocks[bi][0][0], ()):
                            merged = merge_state(in_state[si], st)
                            if merged and npred.get(si, 0) >= 2:
                                # 控制流汇合点：任何穿越它的到达定义 → 污染（等式规则 3）
                                merged = {r: ((v[0], False) if v else v)
                                          for r, v in merged.items()}
                            if in_state[si] is None or merged != in_state[si]:
                                in_state[si] = merged
                                work.append(si)
                    # 回放块，在 interest 站点记录唯一到达值 + 洁净标志
                    for bi, blk in enumerate(blocks):
                        st = dict(in_state[bi]) if in_state[bi] else {}
                        for (a, ins) in blk:
                            regs = interest_by_addr.get(a)
                            if regs:
                                for reg in sorted(regs):
                                    v = st.get(reg)
                                    if v is not None and v[0] is not None:
                                        reg_links.append(
                                            (a, reg, v[0], 1 if v[1] else 0))
                            transfer(st, ins, a)
    # ---- 解析 call 目标 ----
    ctor_calls = []
    for fn, a, reg, tgt in ctor_raw:
        t = sym2addr.get(tgt)
        if t is None:
            mm = re.match(r"^(?:sub_)?([0-9A-Fa-f]{6,8})$", tgt)
            if mm:
                t = int(mm.group(1), 16)
        if t is not None:
            ctor_calls.append((fn, a, reg, t))
    return {
        "meta": {
            "generated_by": "minclass_solver.py --build-facts",
            "source": FACTS_SRC, "files": len(files),
        },
        "alloc_sites": allocs,
        "this_installs": installs,
        "global_installs": ginst,
        "ctor_calls": ctor_calls,
        "reg_links": reg_links,
    }


def load_or_build_facts(rebuild, interest):
    path = os.path.join(ROOT, FACTS_PATH)
    if os.path.exists(path) and not rebuild:
        d = jload(FACTS_PATH)
        if d:
            return d
    d = parse_export(interest)
    if d is None:
        return None
    with io.open(path, "w", encoding="utf-8") as fh:
        json.dump(d, fh, ensure_ascii=False, separators=(",", ":"))
    return d


# ==========================================================================
# 3. 实体命名
# ==========================================================================
GLOBAL_NAME2ADDR = None


def global_addr(tok):
    global GLOBAL_NAME2ADDR
    tok = tok.strip()
    if tok.startswith("0x"):
        a = hx(tok)
        return a if a is not None and DATA_LO <= a < DATA_HI else None
    m = re.search(r"([0-9A-Fa-f]{6,8})$", tok)
    if m and re.search(r"(dword|byte|word|stru|off|qword|flt)_", tok):
        a = int(m.group(1), 16)
        if DATA_LO <= a < DATA_HI:
            return a
    if GLOBAL_NAME2ADDR is None:
        GLOBAL_NAME2ADDR = {}
        for p in ("anchors/ida_global_types.json", "anchors/global_types.json"):
            d = jload(p, {}) or {}
            for a, rec in d.items():
                aa = hx(a)
                nm = (rec or {}).get("name")
                if aa is not None and nm and DATA_LO <= aa < DATA_HI and nm not in GLOBAL_NAME2ADDR:
                    GLOBAL_NAME2ADDR[nm] = aa
    return GLOBAL_NAME2ADDR.get(tok)


def ent_id(raw, fn=None):
    if not isinstance(raw, str):
        return None
    s = raw.strip()
    if s in REGS:
        return ("R:%X:%s" % (fn, s)) if fn is not None else None
    if s.startswith("stack_+"):
        return ("S:%X:%s" % (fn, s[6:])) if fn is not None else None
    if s.startswith("vtable_slot_"):
        a = hx(s[len("vtable_slot_"):].split(":")[0])
        return ("V:%X" % a) if a is not None else None
    if s.startswith("offset "):
        g = global_addr(s[7:].strip())
        return ("G:%X" % g) if g is not None else None
    if s.startswith("0x") or re.match(r"^[0-9A-Fa-f]{6,8}:", s):
        a = hx(s.split(":")[0])
        if a is None:
            return None
        if ".member(" in s:
            off = s.split(".member(", 1)[1].rstrip(")")
            which = "this"
            if "::param" in s:
                which = "p" + s.split("::param", 1)[1].split(".")[0]
            return "M:%X:%s:%s" % (a, which, off)
        if s.endswith(":this"):
            return "T:%X" % a
        if "::param" in s:
            return "P:%X:%s" % (a, s.split("::param", 1)[1])
    return None


# ==========================================================================
# 4. 主流程
# ==========================================================================
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--build-facts", action="store_true")
    ap.add_argument("--no-reg-flow", action="store_true")
    ap.add_argument("--strict-c1", action="store_true",
                    help="C1 严格模式：稀疏布局不再「未知放行」，所有类都必须真正"
                         "覆盖被访问的字节区间。用于检验 K 是否被万能空类支配。")
    ap.add_argument("--no-families", default="")
    ap.add_argument("--max-pair-improve", type=int, default=40000)
    ap.add_argument("--evidence", choices=("none", "spec", "spec+proto"), default="spec",
                    help="none=不用访问证据（HEAD 基线口径）; "
                         "spec=仅 anchors/layout_evidence.json (ctor_types/vtable_install)，"
                         "默认（非循环口径）; "
                         "spec+proto=叠加 proto-this 通道——与 C2 FUNC_PARAM 掩码同源"
                         "（函数原型已类型化的 this 声明），用 proto 派生类验证 proto 布局"
                         "属循环论证，仅作备选口径报告。")
    args = ap.parse_args()

    t_start = time.time()
    U = build_universe(use_evidence=(args.evidence != "none"))
    names, idx, resolve, n = U["names"], U["idx"], U["resolve"], U["n"]
    FULL = (1 << n) - 1
    print("[universe] classes=%d with_layout=%d authority_joined=%d sizes=%d slot_count=%d "
          "evidence_classes=%d desc_edges=%d"
          % (n, U["n_layout"], U["n_auth"], sum(1 for s in U["size"] if s is not None),
             sum(1 for s in U["slot_count"] if s is not None), U["n_evidence"],
             U["n_desc_edges"]), flush=True)
    if not all(U["desc_mi_probe"].values()):
        print("[universe][warn] desc MI probe incomplete: %s"
              % U["desc_mi_probe"], flush=True)
    else:
        print("[universe] desc MI probe ok: %s" % U["desc_mi_probe"], flush=True)
    eff_bump = sum(1 for i in range(n) if U["eff_size"][i] is not None
                   and U["size"][i] is not None and U["eff_size"][i] > U["size"][i])
    print("[evidence] extent>declared: %d classes (effective_size = max(declared, observed_extent))"
          % eff_bump, flush=True)

    raw = jload("tools/type_infer/constraints/raw_constraints.json")["constraints"]
    protos = jload("anchors/ida_function_protos.json", {})
    faddrs = sorted(int(a, 16) for a in protos)
    print("[data] raw edges=%d functions=%d" % (len(raw), len(protos)), flush=True)

    # ---------------- 函数声明类（提前定义：proto 证据通道与 C2 共用） ----------------
    owner_of_fn = {}
    for a, v in protos.items():
        nm = (v or {}).get("name") or ""
        if "::" in nm:
            ci = resolve(nm.split("::")[0])
            if ci is not None:
                owner_of_fn[int(a, 16)] = (ci, nm)
    allowed_cache = {}

    def allowed_of(ci):
        m = allowed_cache.get(ci)
        if m is None:
            m = 1 << ci
            for d in U["desc"][ci]:
                m |= (1 << d)
            allowed_cache[ci] = m
        return m

    def parse_proto(proto):
        if not proto:
            return None
        m = re.match(r"^(.*?)\s*(__\w+)\s*\((.*)\)\s*$", proto)
        if not m:
            return None
        ret, cc, argstr = m.group(1).strip(), m.group(2), m.group(3).strip()
        params = [p.strip() for p in argstr.split(",")] if argstr else []
        return ret, cc, params

    def type_class(t):
        if not isinstance(t, str) or "*" not in t:
            return None
        s = re.sub(r"\b(const|volatile|struct|class)\b", " ", t)
        s = s.replace("*", " ").replace("&", " ")
        s = re.sub(r"\[[^\]]*\]", " ", s)
        toks = [x for x in re.split(r"\s+", s) if x]
        for tok in reversed(toks):
            ci = resolve(tok)
            if ci is not None:
                return ci
        return None

    # ---------------- proto-this 证据通道（--evidence spec+proto） ----------------
    # 与 C2 FUNC_PARAM 掩码同一来源：函数原型里已类型化的 this 声明
    # （源自 CSP/binary 锚回写的 til）。把每个原型 this 类的 this 访问并入
    # observed 成员表与 effective_size（同一滤噪规则）。仅扩展证据，不改声明。
    if args.evidence == "spec+proto":
        n_proto_fn = 0
        proto_sites = collections.defaultdict(list)      # ci -> [(off, w, addr)]
        for a, v in protos.items():
            pr = parse_proto((v or {}).get("proto"))
            if not pr or pr[1] != "__thiscall" or not pr[2] or "this" not in pr[2][0]:
                continue
            ci_this = type_class(pr[2][0])
            if ci_this is None:
                continue
            fa = hx(a)
            if fa is None:
                continue
            n_proto_fn += 1
            proto_sites[ci_this].append((fa, None))
        fn_access = collections.defaultdict(list)        # fn -> [(off, w)]
        for e in raw:
            if e.get("type") != "MEMBER_ACCESS":
                continue
            b = e.get("base")
            if not (isinstance(b, str) and b.endswith(":this")):
                continue
            fa = hx(b.split(":")[0])
            if fa is None:
                continue
            try:
                o = int(e.get("offset") or 0)
            except (TypeError, ValueError):
                continue
            w = e.get("width")
            w = int(w) if isinstance(w, (int, float)) and w > 0 else 4
            fn_access[fa].append((o, w))
        added_classes = 0
        added_sites = 0
        for ci_this, fns in proto_sites.items():
            offs_all = collections.defaultdict(list)
            for fa, _x in fns:
                offs_all[fa] = fn_access.get(fa, [])
            merged = collections.defaultdict(int)
            for fa, lst in offs_all.items():
                for (o, w) in lst:
                    if o > 4096 and not any(abs(o - o2) <= 64 for o2 in
                                            [x for (x, _w) in lst if x <= 4096]):
                        near = False
                        for fa2, lst2 in offs_all.items():
                            if fa2 == fa:
                                continue
                            if any(o2 <= 4096 and abs(o - o2) <= 64 for (o2, _w) in lst2):
                                near = True
                                break
                        if not near:
                            continue
                    merged[o] = max(merged[o], w)
            if not merged:
                continue
            added_classes += 1
            ext = 0
            for o, w in merged.items():
                prev = U["members"][ci_this].get(o)
                U["members"][ci_this][o] = w if not isinstance(prev, int) or prev <= 0 \
                    else max(prev, w)
                added_sites += 1
                ext = max(ext, o + w)
            cur = U["eff_size"][ci_this]
            U["eff_size"][ci_this] = ext if cur is None else max(cur, ext)
        print("[evidence] proto-this channel: typed_fns=%d classes_extended=%d sites=%d"
              % (n_proto_fn, added_classes, added_sites), flush=True)

    def fn_at(a):
        if not faddrs or a is None:
            return None
        i = bisect.bisect_right(faddrs, a) - 1
        return faddrs[i] if i >= 0 else None

    # ---------------- 实体与观测 ----------------
    census = {f: 0 for f in FAMILIES}
    exact_count = {f: 0 for f in FAMILIES}
    ents = collections.defaultdict(lambda: {"obs": set(), "raw": set()})

    def touch(eid, raw_id):
        if eid is None or eid.startswith(("R:", "S:", "V:")):
            return None
        ents[eid]["raw"].add(raw_id)
        return eid

    # ---- 证据修正（anchors/minclass_evidence_corrections.json，二进制取证）----
    # false_this_protos : 原型 this 类被二进制证伪的函数（this 接收者虚调用
    #                     槽位超出该类 primary vtable 实测范围）→ 跳过其
    #                     FUNC_PARAM self-pin 与 M: 成员链解析。
    # relocated_vtable_receivers : CALL_VTABLE 接收者实为成员子对象 → 改挂实体。
    # dropped_vtable_edges : 接收者寄存器链与 this 无关且不可解析 → 丢弃边。
    corr = jload("anchors/minclass_evidence_corrections.json", {}) or {}
    false_proto_fns = set()
    for k in (corr.get("false_this_protos") or {}):
        a = hx(k)
        if a is not None:
            false_proto_fns.add(a)
    reloc_recv = {}
    for k, v in (corr.get("relocated_vtable_receivers") or {}).items():
        a = hx(k)
        if a is not None and isinstance(v, dict) and v.get("receiver"):
            reloc_recv[a] = v["receiver"]
    dropped_edges = set()
    for k in (corr.get("dropped_vtable_edges") or {}):
        a = hx(k)
        if a is not None:
            dropped_edges.add(a)
    dropped_obs = {}
    for k, v in (corr.get("dropped_member_access") or {}).items():
        a = hx(k)
        if a is None or not isinstance(v, dict):
            continue
        offs = v.get("offsets") or []
        if offs:
            dropped_obs[a] = set(int(x) for x in offs)
    print("[corr] false_protos=%d relocated=%d dropped_edges=%d"
          % (len(false_proto_fns), len(reloc_recv), len(dropped_edges)),
          flush=True)

    # ---- 规则 P：类二进制身份门（name-derived pin 不是证据）----
    # 二进制身份 = RTTI primary vtable（vtable_extent_evidence）或
    # ctor/vtable-install 锚（ctor_types / structural_truth）。二者皆无的类
    # 是命名轮发明名，其 C2 pin 与真类 pin 相交为空时制造假冲突。
    identified = set()
    for _cls, _pc in ((jload("anchors/vtable_extent_evidence.json", {}) or {})
                      .get("per_class") or {}).items():
        if _pc.get("primary"):
            _ci = resolve(_cls)
            if _ci is not None:
                identified.add(_ci)
    for _a, _cn in (jload("anchors/ctor_types.json", {}) or {}).items():
        _ci = resolve(_cn)
        if _ci is not None:
            identified.add(_ci)
    for _a, _cn in ((jload("anchors/structural_truth.json", {}) or {})
                    .get("vtable_install") or {}).items():
        _ci = resolve(_cn)
        if _ci is not None:
            identified.add(_ci)
    # 规则 P 修正：非多态类可以既无 RTTI 表也无 ctor 锚，但只要有**真实成员访问**
    # 就是二进制存在的类（ScenarioClass/TacticalClass/RulesClass/Cell 等 419 个）。
    # 把「零证据」才算虚构，否则会丢掉 2,460 条合法 pin（实测）。
    _ev_cls = (jload("anchors/layout_evidence.json", {}) or {}).get("classes") or {}
    for _cn, _rec in _ev_cls.items():
        if (_rec.get("extra_offsets") or []):
            _ci = resolve(_cn)
            if _ci is not None:
                identified.add(_ci)
    unidentified_pins = collections.Counter()

    def pin_class_identified(ci):
        return ci in identified



    for e in raw:
        if e.get("type") != "MEMBER_ACCESS":
            continue
        eid = ent_id(e.get("base"))
        if eid is None:
            continue
        try:
            o = int(e.get("offset") or 0)
        except (TypeError, ValueError):
            continue
        w = e.get("width")
        w = int(w) if isinstance(w, (int, float)) and w > 0 else None
        touch(eid, e.get("base"))
        if eid.startswith("T:"):
            _fa = hx(eid[2:])
            if _fa is not None and o in dropped_obs.get(_fa, ()):
                continue      # 该访问已被二进制取证证伪（非 this）
        if eid.startswith("M:"):
            # 成员链实体 (this->member@0xNN)：obs 偏移是**相对成员子对象**的，
            # 拿去要求基类布局是把两套坐标系混用（ProgressTimer 的 108/808/1684
            # 就是这么来的）。成员类未知时 C1 无从判定，跳过。
            continue
        ents[eid]["obs"].add((o, w))
        census["C1"] += 1

    for e in raw:
        t = e.get("type")
        if t == "FUNC_PARAM":
            fr = e.get("from")
            a = hx(str(fr).split(":")[0]) if ":this" in str(fr) else None
            touch(ent_id(fr, a), fr)
        elif t == "CALL_ARG":
            a = hx(e.get("addr")) or 0
            touch(ent_id(e.get("to")), e.get("to"))
            touch(ent_id(e.get("from"), fn_at(a)), e.get("from"))
        elif t == "CALL_VTABLE":
            a = hx(e.get("addr")) or 0
            touch(ent_id(e.get("receiver"), fn_at(a)), e.get("receiver"))
            touch(ent_id(e.get("to")), e.get("to"))
        elif t == "RETURN":
            touch(ent_id(e.get("to")), e.get("to"))

    interest = set()
    for e in raw:
        if e.get("type") != "CALL_ARG":
            continue
        fr = e.get("from")
        if isinstance(fr, str) and fr in REGS:
            a = hx(e.get("addr")) or 0
            if a:
                interest.add((a, fr))

    facts = load_or_build_facts(args.build_facts, interest)
    # reg_links v2: [addr, reg, src, clean]（clean=不跨 call / 不经控制流汇合）
    site_reg = {}
    facts_v1 = False
    if facts:
        for lk in facts.get("reg_links", ()):
            if len(lk) >= 4:
                site_reg[(lk[0], lk[1])] = (lk[2], bool(lk[3]))
            else:
                facts_v1 = True
                site_reg[(lk[0], lk[1])] = (lk[2], True)
    if facts_v1:
        print("[warn] facts reg_links 为 v1（无 taint 标志）——建议 --build-facts 重建",
              flush=True)
    if facts:
        for fn, site, size, dest in facts["alloc_sites"]:
            touch("N:%X" % site, "new@%X" % site)
    else:
        print("[warn] binary facts missing: C4/C5/C6/reg-flow degrade", flush=True)

    print("[entities] total=%d with_obs=%d obs>=2=%d"
          % (len(ents), sum(1 for r in ents.values() if r["obs"]),
             sum(1 for r in ents.values() if len(r["obs"]) >= 2)), flush=True)

    fam = {f: {} for f in FAMILIES}
    exact = collections.defaultdict(list)
    c1_gaps = []                                # C1 无解（布局缺口），不丢实体

    # ---------------- C1：成员偏移 ----------------
    # C1 密度门：布局只覆盖 >=70% dword 的类视为"完整"，缺失偏移可判负；
    # 稀疏布局（观测得到的成员表）缺失偏移不算反证 —— 实测证明多数布局是稀疏的：
    # TechnoClass 1312B 只有 257 个成员（78%），AnimClass 6324B 只有 65 个（4%）。
    dense = [False] * n
    for i in range(n):
        if not U["has_layout"][i]:
            continue
        sz = U["eff_size"][i]                # effective_size（含 observed extent 下界）
        if not sz or sz < 8:
            continue
        dense[i] = (len(U["members"][i]) * 4) >= 0.7 * sz
    dense_list = [i for i in range(n) if dense[i]]
    dense_mask = 0
    sparse_mask = 0
    for i in range(n):
        if dense[i]:
            dense_mask |= (1 << i)
        else:
            sparse_mask |= (1 << i)
    print("[C1] layout density gate: dense=%d sparse=%d (threshold 70%% dword coverage)"
          % (len(dense_list), n - len(dense_list)), flush=True)

    # C1 用字节覆盖模型：把每个成员展开成 [off, off+width) 区间并合并。
    # 这样 "dword 读 4 个连续 bool"（合法）不会被误判为宽度冲突；
    # 而 "byte 读 int 成员" 也天然合法（区间被覆盖）。
    intervals = [[] for _ in range(n)]
    for i in range(n):
        if not U["has_layout"][i]:
            continue
        iv = []
        for off, w in U["members"][i].items():
            ww = w if isinstance(w, int) and w > 0 else 4
            iv.append((off, off + ww))
        iv.sort()
        merged = []
        for a, b in iv:
            if merged and a <= merged[-1][1]:
                if b > merged[-1][1]:
                    merged[-1] = (merged[-1][0], b)
            else:
                merged.append((a, b))
        intervals[i] = merged

    def covers(ci, o, w):
        for (a, b) in intervals[ci]:
            if a <= o and o + w <= b:
                return True
            if a > o:
                return False
        return False

    c1_cache = {}
    c1_range_cache = {}

    def c1_ok_mask(o, w):
        key = (o, w)
        m = c1_range_cache.get(key)
        if m is None:
            # --strict-c1：稀疏布局不再放行，所有类都必须真正覆盖被访问的字节区间。
            # 这是检验 K 是否被「万能空类」支配的开关（Math 覆盖 968 簇就是该漏洞）。
            m = 0 if "--strict-c1" in sys.argv else sparse_mask
            for ci in dense_list:
                if covers(ci, o, w):
                    m |= (1 << ci)
            c1_range_cache[key] = m
        return m

    def c1_mask(obs):
        """C1：dense 类必须覆盖每个被访问的字节区间；稀疏类只做"未知放行"。"""
        key = tuple(sorted(obs))
        m = c1_cache.get(key)
        if m is None:
            m = FULL
            for (o, w) in key:
                m &= c1_ok_mask(o, w if w else 4)
                if not m:
                    break
            c1_cache[key] = m
        return m

    def c1_width_conflict(ci, obs):
        """exact 类与观测的字节区间矛盾（只对 dense 布局成立；稀疏=布局缺口）"""
        if not dense[ci]:
            return []
        return [[o, w] for (o, w) in obs if not covers(ci, o, w if w else 4)]

        # ---- 规则 H：调用方多样性证伪被调方原型 ----
    # 同一被调方的 this 寄存器收到 >=3 个不同来源实体、且这些来源的
    # self-pin 类两两无公共后代 -> 没有任何类能同时充当这些对象的类，
    # 被调方原型 this 类被证伪（与 false_proto 同等处理）。
    self_pin_cls = {}          # entity id -> class index (direct proto evidence)
    for _e2 in raw:
        if _e2.get("type") != "FUNC_PARAM":
            continue
        _fr2 = _e2.get("from")
        if not (isinstance(_fr2, str) and _fr2.endswith(":this")):
            continue
        _a2 = hx(_fr2.split(":")[0])
        if _a2 is None or _a2 in false_proto_fns:
            continue
        _pr2 = parse_proto((protos.get("0x%08X" % _a2)
                            or protos.get("0x%x" % _a2) or {}).get("proto"))
        _ci2 = None
        if _pr2 and _pr2[1] == "__thiscall" and _pr2[2] and "this" in _pr2[2][0]:
            _ci2 = type_class(_pr2[2][0])
        if _ci2 is None and _a2 in owner_of_fn:
            _ci2 = owner_of_fn[_a2][0]      # 名字派生（与 C2 分支一致）
        if _ci2 is not None and pin_class_identified(_ci2):
            self_pin_cls["T:%X" % _a2] = _ci2
    reg_sources = collections.defaultdict(set)
    for _e in raw:
        if _e.get("type") != "CALL_ARG":
            continue
        _fr, _to = _e.get("from"), _e.get("to")
        if not (isinstance(_fr, str) and isinstance(_to, str)):
            continue
        if _fr not in REGS or not _to.endswith(":this"):
            continue
        _callee = hx(_to.split(":")[0])
        if _callee is None:
            continue
        _sr = site_reg.get((hx(_e.get("addr")) or 0, _fr))
        if _sr and _sr[1] and _sr[0] in ents:
            reg_sources[_callee].add(_sr[0])
    ruleh_falsified = {}
    for _callee, _srcs in reg_sources.items():
        if len(_srcs) < 3:
            continue
        clss = list(dict.fromkeys(self_pin_cls[s] for s in _srcs
                                  if s in self_pin_cls))
        if len(clss) < 3:
            continue
        disjoint = True
        for _i in range(len(clss)):
            for _j in range(_i + 1, len(clss)):
                if allowed_of(clss[_i]) & allowed_of(clss[_j]):
                    disjoint = False
                    break
            if not disjoint:
                break
        if disjoint and _callee not in false_proto_fns:
            false_proto_fns.add(_callee)
            ruleh_falsified[_callee] = [names[c] for c in clss[:6]]
    if ruleh_falsified:
        print("[ruleH] callee protos falsified by caller diversity: %d (%s)"
              % (len(ruleh_falsified),
                 ", ".join("%s<-%s" % (hex(k), v[0])
                           for k, v in list(ruleh_falsified.items())[:6])),
              flush=True)
# ---------------- C2：this 传递 ----------------
    c2_pin_log = {}
    name_proto_disagree = set()
    rule_s2_records = []
    c2_kind_mask = collections.defaultdict(dict)

    def c2_kind_hit(eid, kind, allowed):
        km = c2_kind_mask[eid]
        if allowed is not None:
            if kind == "self":
                km[kind] = ((km.get(kind) if km.get(kind) is not None
                             else FULL) & allowed)
            else:
                km.setdefault(kind, []).append(allowed)
    for e in raw:
        if e.get("type") != "CALL_ARG":
            continue
        fr, to = e.get("from"), e.get("to")
        if not (isinstance(fr, str) and isinstance(to, str)):
            continue
        if fr.startswith("vtable_slot_") or to.startswith("vtable_slot_"):
            continue
        if not to.endswith(":this"):
            continue
        callee = hx(to.split(":")[0])
        if callee is None or callee not in owner_of_fn:
            continue
        if callee in false_proto_fns:
            continue          # 被调方原型 this 类已被二进制证伪
        if not pin_class_identified(owner_of_fn[callee][0]):
            unidentified_pins[names[owner_of_fn[callee][0]]] += 1
            continue          # 规则 P：被调方类无二进制身份，pin 非证据
        if fr in REGS:
            # 寄存器实参：经洁净到达定义解析回调用方 this 实体后直接钉 C2
            # （约束通道，非合并——不再依赖跨帧等式传播）
            sr = site_reg.get((hx(e.get("addr")) or 0, fr))
            if sr and sr[1] and sr[0] in ents:
                c2_kind_hit(sr[0], "reg", allowed_of(owner_of_fn[callee][0]))
                fam["C2"][sr[0]] = fam["C2"].get(sr[0], FULL) & allowed_of(owner_of_fn[callee][0])
                c2_pin_log.setdefault(sr[0], []).append(
                    ["reg", "0x%08X" % callee, names[owner_of_fn[callee][0]]])
                census["C2"] += 1
            continue
        target = ent_id(fr, fn_at(hx(e.get("addr")) or 0))
        if target is None or target not in ents:
            continue
        c2_kind_hit(target, "edge", allowed_of(owner_of_fn[callee][0]))
        fam["C2"][target] = fam["C2"].get(target, FULL) & allowed_of(owner_of_fn[callee][0])
        c2_pin_log.setdefault(target, []).append(
            ["edge", "0x%08X" % callee, names[owner_of_fn[callee][0]]])
        census["C2"] += 1
    for e in raw:
        if e.get("type") != "FUNC_PARAM":
            continue
        fr = e.get("from")
        if not (isinstance(fr, str) and fr.endswith(":this")):
            continue
        a = hx(fr.split(":")[0])
        if a is None:
            continue
        if a in false_proto_fns:
            continue          # 该函数原型 this 类已被二进制证伪（corrections）
        target = ent_id(fr)
        if target not in ents:
            continue
        m = FULL
        pr = parse_proto((protos.get("0x%08X" % a) or protos.get("0x%x" % a) or {}).get("proto"))
        ci_this = None
        if pr and pr[1] == "__thiscall" and pr[2] and "this" in pr[2][0]:
            ci_this = type_class(pr[2][0])
        if ci_this is not None and not pin_class_identified(ci_this):
            unidentified_pins[names[ci_this]] += 1
            ci_this = None    # 规则 P：proto 类无二进制身份
        if ci_this is not None:
            # proto 的 this 类型是二进制直接证据：优先于名字派生的 owner。
            # 二者不兼容时（实测 931 个函数，名字多把方法错挂到 AbstractClass 等
            # 宽类上）取 proto，避免 allowed_of(owner) ∩ allowed_of(proto) = ∅
            # 把整个实体判成冲突。
            m &= allowed_of(ci_this)
            if a in owner_of_fn and owner_of_fn[a][0] != ci_this:
                name_proto_disagree.add(a)
        elif a in owner_of_fn:
            if pin_class_identified(owner_of_fn[a][0]):
                m &= allowed_of(owner_of_fn[a][0])
            else:
                unidentified_pins[names[owner_of_fn[a][0]]] += 1
        if m != FULL:
            c2_kind_hit(target, "self", m)
            fam["C2"][target] = fam["C2"].get(target, FULL) & m
            c2_pin_log.setdefault(target, []).append(
                ["self", "0x%08X" % a,
                 names[owner_of_fn[a][0]] if a in owner_of_fn else "(unknown)"])
            census["C2"] += 1
    print("[C2] evidence=%d entities=%d name_proto_disagree=%d (proto this preferred)"
          % (census["C2"], len(fam["C2"]), len(name_proto_disagree)), flush=True)
    if unidentified_pins:
        print("[C2] rule-P unidentified-class pins skipped: %d (%s)"
              % (sum(unidentified_pins.values()),
                 ", ".join("%s=%d" % kv
                           for kv in unidentified_pins.most_common(12))), flush=True)

    # ---- 规则 G/J：实体级 C2 域修正 ----
    # G: 实体同时持有 self-pin（直接证据，且未被规则 S 证伪）与 reg/edge-pin
    #    （经由被调方原型，两跳推导），二者类不相交时至多一个为真 -> 保留
    #    self-pin 域，丢弃 reg/edge 域（计数并记录）。
    # J: 实体仅有 edge-pin 且来自 >=2 个不相交类 = 多态汇合槽（同一内存槽
    #    在不同程序点持有不同对象）；单变量域取各边域的并（每条边的约束
    #    仍按其站点成立），交集语义对汇合槽是过约束。
    rule_g_drops = 0
    rule_j_unions = 0
    for _eid, _m in list(fam["C2"].items()):
        if _m:
            continue
        _km = c2_kind_mask.get(_eid)
        if not _km:
            continue
        if _km.get("self"):
            fam["C2"][_eid] = _km["self"]
            rule_g_drops += 1
            continue
        _u = 0
        for _k, _l in _km.items():
            if _k == "self" or not _l:
                continue
            for _mm in _l:
                _u |= _mm
        if _u:
            fam["C2"][_eid] = _u
            rule_j_unions += 1
    if rule_g_drops or rule_j_unions:
        print("[ruleGJ] reg/edge pins dropped by self-pin: %d; "
              "junction unions: %d" % (rule_g_drops, rule_j_unions), flush=True)



    # ---------------- C3：虚表槽位（3 值：满足 ∪ 未知）----------------
    slot_mask = collections.defaultdict(int)
    for i in range(n):
        ss = U["slot_set"][i]
        if ss is not None and len(ss) >= 0:
            for s in ss:
                slot_mask[s] |= (1 << i)
    c3_known = collections.defaultdict(int)
    for i in range(n):
        if U["slot_set"][i] is not None:
            c3_known["any"] |= (1 << i)
    unknown_slot = FULL & ~c3_known["any"]

    def c3_mask(slot):
        return slot_mask.get(slot, 0) | unknown_slot

    c3_garbage_slots = collections.Counter()
    for e in raw:
        if e.get("type") != "CALL_VTABLE":
            continue
        recv = e.get("receiver")
        try:
            slot = int(e.get("vtable_slot"))
        except (TypeError, ValueError):
            continue
        if not (0 <= slot <= 400):
            # 提取伪影（如 0x4000000000000001）：物理不可能的槽位，丢弃并计数
            c3_garbage_slots[slot] += 1
            continue
        site = hx(e.get("addr")) or 0
        if site in dropped_edges:
            continue
        if site in reloc_recv:
            recv = reloc_recv[site]
        target = ent_id(recv, fn_at(site)) if recv else None
        if target is None or target not in ents:
            continue
        fam["C3"][target] = fam["C3"].get(target, FULL) & c3_mask(slot)
        census["C3"] += 1
    if c3_garbage_slots:
        print("[C3] garbage slots dropped: %s"
              % dict(c3_garbage_slots), flush=True)
    print("[C3] evidence=%d entities=%d" % (census["C3"], len(fam["C3"])), flush=True)
    # ---- 规则 S2：C3 二进制证据驳回 C2 pin ----
    # 实体的 C2 族域与 C3 域（虚表槽位实测）交为空 -> 钉住族中每个类都缺
    # 某个被调槽位，即该类不可能是接收者类；C2 pin（til/proto 推导）被
    # 二进制证据驳回 -> 丢弃 C2 pin，保留 C3。
    rule_s2_drops = 0
    for _eid, _m in list(fam["C2"].items()):
        if not _m:
            continue
        _c3 = fam["C3"].get(_eid)
        if _c3 is None:
            continue
        if _m & _c3:
            continue
        dropped_pins = c2_pin_log.get(_eid, [])[:4]
        fam["C2"][_eid] = FULL
        rule_s2_drops += 1
        c2_pin_log.pop(_eid, None)
        rule_s2_records.append({"entity": _eid,
                                "pin_classes": [names[i] for i in range(n)
                                                if (_m >> i) & 1][:8],
                                "c3_classes": _c3.bit_count()})
    if rule_s2_drops:
        print("[ruleS2] C2 pins refuted by C3 dropped: %d" % rule_s2_drops,
              flush=True)

    # ---------------- C4：ctor/dtor 装表 EXACT ----------------
    src = collections.defaultdict(lambda: {"export": set(), "committed": set()})
    for a, cname in (jload("anchors/ctor_types.json", {}) or {}).items():
        ci = resolve(cname)
        aa = hx(a)
        if ci is not None and aa is not None:
            src[aa]["committed"].add(ci)
    for a, cname in ((jload("anchors/structural_truth.json", {}) or {}).get("vtable_install") or {}).items():
        ci = resolve(cname)
        aa = hx(a)
        if ci is not None and aa is not None:
            src[aa]["committed"].add(ci)
    if facts:
        for fn, site, off, sym in facts["this_installs"]:
            if off != 0:
                continue
            ci = resolve(sym)
            if ci is not None:
                src[fn]["export"].add(ci)
    c4_disagree = []
    for aa, rec in src.items():
        ex, cm = rec["export"], rec["committed"]
        pick = ex if len(ex) == 1 else (cm if len(ex) == 0 and len(cm) == 1 else None)
        if pick is None:
            if len(ex | cm) > 1:
                c4_disagree.append({"func": "0x%08X" % aa,
                                    "export": [names[c] for c in sorted(ex)],
                                    "committed": [names[c] for c in sorted(cm)]})
            continue
        eid = "T:%X" % aa
        if eid in ents:
            ci = next(iter(pick))
            exact[eid].append((ci, "C4"))
            exact_count["C4"] += 1
            census["C4"] += 1
    print("[C4] exact this=%d source_disagreements=%d" % (exact_count["C4"], len(c4_disagree)),
          flush=True)

    # ---------------- C5：operator new 长度 EXACT ----------------
    c5_link = []
    size_obs = collections.defaultdict(collections.Counter)
    size_mask_cache = {}

    def size_mask(sz):
        m = size_mask_cache.get(sz)
        if m is None:
            m = 0
            for i in range(n):
                if U["eff_size"][i] == sz:
                    m |= (1 << i)
            size_mask_cache[sz] = m
        return m

    def known_size(ci):
        s = U["eff_size"][ci]
        return s

    if facts:
        unknown_size = 0
        for i in range(n):
            if U["size"][i] is None:
                unknown_size |= (1 << i)
        ctor_calls = collections.defaultdict(list)
        for fn, a, reg, tgt in facts["ctor_calls"]:
            ctor_calls[fn].append((a, tgt, reg))
        for lst in ctor_calls.values():
            lst.sort()
        for fn, site, size, dest in facts["alloc_sites"]:
            eid = "N:%X" % site
            m = size_mask(size) | unknown_size
            if m and m != FULL:
                fam["C5"][eid] = fam["C5"].get(eid, FULL) & m
                census["C5"] += 1
            if not dest:
                continue
            for (ca, tgt, reg) in ctor_calls.get(fn, ()):
                if ca <= site:
                    continue
                if ca - site > 0x200:
                    break
                if reg == dest:
                    # 只有"直接 ctor 的类尺寸 == 分配尺寸"时才是 most-derived（否则是基类 ctor）
                    t_eid = "T:%X" % tgt
                    for ci, _s in exact.get(t_eid, ()):
                        if known_size(ci) == size:
                            c5_link.append((eid, t_eid))
                            size_obs[ci][size] += 1
                    break
    print("[C5] alloc_sites=%d size_validated_links=%d classes_with_size_evidence=%d"
          % (len((facts or {}).get("alloc_sites", [])), len(c5_link), len(size_obs)), flush=True)

    # ---------------- C6：vtable 身份 → 槽位数 EXACT（3 值）----------------
    sc_mask_cache = {}

    def sc_mask(sc):
        m = sc_mask_cache.get(sc)
        if m is None:
            m = 0
            for i in range(n):
                if U["slot_count"][i] == sc:
                    m |= (1 << i)
            sc_mask_cache[sc] = m
        return m

    known_sc = 0
    for i in range(n):
        if U["slot_count"][i] is not None:
            known_sc |= (1 << i)
    unknown_sc = FULL & known_sc
    if facts:
        # X154: 派生类构造会先装基类 vtable、后装派生类 vtable（MSVC 语义）。
        # 逐条 install 施加 C6 会把"先装的基类槽数"当成对象的槽数，与 C4 钉出的
        # 派生类互相矛盾（实测 24 个冲突）。对象的运行时类 = **最后一次**在
        # offset 0 安装的 vtable，故按 (fn, off) 取 site 最大者。
        _final_install = {}
        for fn, site, off, sym in facts["this_installs"]:
            if off != 0:
                continue
            key = fn
            cur = _final_install.get(key)
            if cur is None or site > cur[0]:
                _final_install[key] = (site, sym)
        for fn, (site, sym) in _final_install.items():
            ci = resolve(sym)
            if ci is None:
                continue
            eid = "T:%X" % fn
            if eid not in ents:
                continue
            sc = U["slot_count"][ci]
            if sc is None:
                continue
            m = sc_mask(sc) | unknown_sc
            if m != FULL:
                fam["C6"][eid] = fam["C6"].get(eid, FULL) & m
                census["C6"] += 1
    print("[C6] evidence=%d entities=%d" % (census["C6"], len(fam["C6"])), flush=True)

    # X155: 二进制装表（C4/C6）反驳 C2 的名字型 pin。
    # 实测最后 16 个冲突全是这种：实体在函数里装了 vtable（C4 EXACT），而 C2 的
    # pin 来自**命名轮发明的类名**（TeamTypeVector / SmudgeTypeList / …），
    # 两者槽数不同 → 空域。装表是二进制事实，名字不是，故丢弃该 pin。
    c2_refuted_by_install = 0
    if facts:
        _final2 = {}
        for fn, site, off, sym in facts["this_installs"]:
            if off != 0:
                continue
            cur = _final2.get(fn)
            if cur is None or site > cur[0]:
                _final2[fn] = (site, sym)
        for fn, (site, sym) in _final2.items():
            ci = resolve(sym)
            if ci is None:
                continue
            eid = "T:%X" % fn
            m2 = fam["C2"].get(eid)
            if m2 is None:
                continue
            if not ((m2 >> ci) & 1):
                # C2 的 mask 不包含装表类 → 名字 pin 被二进制反驳
                fam["C2"][eid] = FULL
                c2_pin_log.setdefault(eid, []).append(["refuted_by_install", sym, names[ci]])
                c2_refuted_by_install += 1
    print("[C2] pins refuted by binary vtable install: %d" % c2_refuted_by_install, flush=True)

    # ---------------- C7：参数/返回方差 ----------------
    for a, v in protos.items():
        pr = parse_proto((v or {}).get("proto"))
        if not pr:
            continue
        ret, cc, params = pr
        if cc != "__thiscall" or not params or "this" not in params[0]:
            continue
        aa = hx(a)
        for k, ptxt in enumerate(params[1:]):
            ci = type_class(ptxt)
            if ci is None:
                continue
            eid = "P:%X:%d" % (aa, k)
            if eid not in ents:
                continue
            fam["C7"][eid] = fam["C7"].get(eid, FULL) & allowed_of(ci)
            census["C7"] += 1

    callargs = jload("anchors/ida_call_args.json", {}) or {}
    viol = []
    arg_type_pairs = 0
    for ea, rec in callargs.items():
        fn = hx((rec or {}).get("fn"))
        if fn is None:
            continue
        v = protos.get("0x%08X" % fn) or protos.get("0x%x" % fn)
        pr = parse_proto((v or {}).get("proto"))
        cc, params = (pr[1], pr[2]) if pr else ("", [])
        shift = 1 if (cc == "__thiscall" and params and "this" in params[0]) else 0
        for arg in (rec or {}).get("args") or []:
            i = arg.get("i")
            if not isinstance(i, int):
                continue
            tc = type_class(arg.get("type"))
            if tc is None:
                continue
            # C7b 只做方差校验（T ⊑ U），不把多站点的实参类型累积成域：
            # 同一形参在不同调用点静态类型不同是常态，累积会产生假冲突。
            arg_type_pairs += 1
            pi = i + shift
            if pi < len(params):
                uc = type_class(params[pi])
                if uc is not None and uc not in U["anc"][tc]:
                    viol.append({"call": "0x%08X" % (hx(ea) or 0),
                                 "callee": "0x%08X" % fn, "arg_i": i,
                                 "arg_class": names[tc], "param_class": names[uc]})
    print("[C7] evidence=%d entities=%d arg_type_pairs=%d variance_violations=%d"
          % (census["C7"], len(fam["C7"]), arg_type_pairs, len(viol)), flush=True)

    # ---------------- C8：全局对象身份 ----------------
    gtypes = jload("anchors/ida_global_types.json", {}) or {}
    singl = jload("anchors/singleton_types.json", {}) or {}
    gcast = jload("anchors/global_cast_types.json", {}) or {}

    def global_class(addr):
        for key in ("0x%08X" % addr, "0x%x" % addr):
            for src_d in (gtypes, singl):
                rec = src_d.get(key)
                if not rec:
                    continue
                t = rec.get("type") or ""
                if "*" in t:
                    return None
                ci = resolve(t.strip())
                if ci is not None:
                    return ci
        return None

    # C6 数据一致性：class_db.vtable_slot_count vs authority.slot_count
    sc_disagree = []
    auth_raw = jload("anchors/vtable_slot_authority.json", {}) or {}
    for cc, rec in auth_raw.items():
        ci = resolve(cc)
        if ci is None:
            continue
        a_sc = rec.get("slot_count")
        d_sc = U["db"][names[ci]].get("vtable_slot_count")
        if isinstance(a_sc, int) and isinstance(d_sc, int) and a_sc != d_sc:
            sc_disagree.append({"class": names[ci], "class_db": d_sc, "authority": a_sc,
                                "vtable": rec.get("vtable")})
    print("[C6] slot_count class_db vs authority disagreements=%d" % len(sc_disagree), flush=True)

    c8_entities = set()
    c8_cast_dropped = []
    c8_gtype = {}
    for eid in list(ents):
        if not eid.startswith("G:"):
            continue
        ci = global_class(int(eid[2:], 16))
        if ci is not None:
            if not pin_class_identified(ci):
                continue          # 规则 P 同源：无名分 invented 类不构成证据
            c8_gtype[eid] = ci
            exact[eid].append((ci, "C8:global-type"))
            census["C8"] += 1
            exact_count["C8"] += 1
            c8_entities.add(eid)
    for nm, rec in gcast.items():
        ci = resolve((rec or {}).get("type"))
        addr = global_addr(nm)
        if ci is not None and addr is not None:
            eid = "G:%X" % addr
            if eid not in ents:
                continue
            if not pin_class_identified(ci):
                unidentified_pins[names[ci]] += 1
                continue          # cast 到无身份类 = 命名轮噪声
            if eid in c8_gtype and c8_gtype[eid] != ci:
                # 名称证据与 cast 多数派冲突：名称证据胜出（AGENTS 裁决）
                c8_cast_dropped.append({"global": eid,
                                        "kept": names[c8_gtype[eid]],
                                        "dropped": names[ci]})
                continue
            exact[eid].append((ci, "C8:cast-type"))
            census["C8"] += 1
            exact_count["C8"] += 1
            c8_entities.add(eid)
    for fn, site, dst, sym in (facts or {}).get("global_installs", []):
        ci = resolve(sym)
        g = global_addr(dst)
        if ci is not None and g is not None:
            eid = "G:%X" % g
            if eid in ents:
                exact[eid].append((ci, "C8:vtable-install"))
                census["C8"] += 1
                exact_count["C8"] += 1
                c8_entities.add(eid)
    print("[C8] evidence=%d entities=%d (global vtable installs=%d)"
          % (census["C8"], len(c8_entities), len((facts or {}).get("global_installs", []))),
          flush=True)

    # ---------------- 等式（union-find + 证据审计） ----------------
    uf = UF()
    ch_stats = collections.defaultdict(lambda: {"unions": 0, "exact_conflicts": 0,
                                                "examples": []})
    root_exact = {}
    for eid, lst in exact.items():
        root_exact.setdefault(uf.find(eid), set()).update(ci for ci, _s in lst)
    root_self_cls = collections.defaultdict(set)
    for _eid, _ci in self_pin_cls.items():
        root_self_cls[uf.find(_eid)].add(_ci)


    def un(a, b, channel):
        if a is None or b is None:
            return False
        ra, rb = uf.find(a), uf.find(b)
        if ra == rb:
            return False
        ea, eb = root_exact.get(ra, set()), root_exact.get(rb, set())
        if ea and eb and ea.isdisjoint(eb):
            st = ch_stats[channel]
            st["exact_conflicts"] += 1
            if len(st["examples"]) < 6:
                st["examples"].append({"a": a, "b": b,
                                       "a_classes": [names[c] for c in sorted(ea)],
                                       "b_classes": [names[c] for c in sorted(eb)]})
            return False          # EXACT 硬约束：不合并，记录矛盾证据
        _cra, _crb = root_self_cls.get(ra, set()), root_self_cls.get(rb, set())
        uf.union(a, b)
        nr = uf.find(a)
        root_exact[nr] = ea | eb
        if _cra or _crb:
            root_self_cls[nr] = _cra | _crb
        ch_stats[channel]["unions"] += 1
        return True

    def is_arg_target(to):
        return isinstance(to, str) and (to.endswith(":this") or "::param" in to) \
            and not to.startswith("vtable_slot_")

    for e in raw:
        if e.get("type") != "FUNC_PARAM":
            continue
        fr = e.get("from")
        a = hx(str(fr).split(":")[0]) if isinstance(fr, str) else None
        un(ent_id(fr, a), ent_id(e.get("to"), a), "func_param")

    # ---- 跨帧等式候选收集（proven-same-object 收紧，X152） ----
    # 唯一目标形态：调用点实参值 → 被调方共享形参实体（T:<callee> / P:<callee>:k）。
    # 被调方形参被所有调用点共享 = 多态汇合点；把 >1 个不同来源实体并进去
    # 会把无关对象粘成一簇（X152: C2 空域冲突簇的 71% 由此产生）。
    cands = []                                    # (channel, from_eid, to_eid, kind, clean, site)
    target_froms = collections.defaultdict(set)   # to_entity -> {distinct from entities}
    if facts:
        for e in raw:
            if e.get("type") != "CALL_ARG" or not is_arg_target(e.get("to")):
                continue
            fr = e.get("from")
            if not isinstance(fr, str) or fr.startswith("stack_+"):
                continue
            a = hx(e.get("addr")) or 0
            te = ent_id(e.get("to"))
            if te is None:
                continue
            if fr in REGS:
                if args.no_reg_flow:
                    continue
                sr = site_reg.get((a, fr))
                if sr and sr[0]:
                    cands.append(("reg_def", sr[0], te, sr[0][0], bool(sr[1]), a))
                    target_froms[te].add(sr[0])
                continue
            fe = ent_id(fr, fn_at(a))
            if fe is None:
                continue                          # 实体不可解析——原本也不产生合并
            cands.append(("callarg_direct", fe, te, fe[0], True, a))
            target_froms[te].add(fe)

    rejected_merges = collections.Counter()
    rejected_examples = collections.defaultdict(list)

    def reject(reason, detail):
        rejected_merges[reason] += 1
        lst = rejected_examples[reason]
        if len(lst) < 6:
            lst.append(detail)

    def global_proven(fe):
        """C8 ctor/vtable-install 证明的全局类（等式规则 2）：
        vtable-install（facts 扫描 mov [g_X], offset ??_7Class）或
        singleton_types（构造存储锚定 = ctor 证明）。"""
        if any(s == "C8:vtable-install" for _ci, s in exact.get(fe, ())):
            return True
        try:
            ga = int(fe[2:], 16)
        except ValueError:
            return False
        return any(("%s" % k) in ("0x%08X" % ga, "0x%x" % ga) or hx(k) == ga
                   for k in singl)

    mtypes = jload("anchors/member_types.json", {}) or {}

    def member_chain_class(fe):
        """M:<fn>:this:<off> → 成员类（等式规则 1）；无法解析 → None"""
        try:
            fn = int(fe[2:].split(":", 1)[0], 16)
            which = fe.split(":")[2]
            off = int(fe.rsplit(":", 1)[1])
        except (ValueError, IndexError):
            return None
        if which != "this":
            return None
        if fn in false_proto_fns:
            return None       # 外围函数类归属被证伪，成员链不可信
        own = owner_of_fn.get(fn)
        if own is None:
            return None
        cn = names[own[0]]
        for fmt in ("%s+0x%X" % (cn, off), "%s+0x%x" % (cn, off)):
            rec = mtypes.get(fmt)
            if rec:
                return type_class(rec.get("type") or "")
        return None

    root_self_cls.clear()
    print("[dbg] self_pin_cls=%d" % len(self_pin_cls), flush=True)
    for _probe in ("T:41D540", "T:41DC80", "T:544CB0", "T:547020"):
        _r = uf.find(_probe)
        print("[dbg] %s root=%s cls=%s selfkey=%s" %
              (_probe, _r, [names[c] for c in root_self_cls.get(_r, ())],
                _probe in self_pin_cls), flush=True)
    for _eid, _ci in self_pin_cls.items():
        root_self_cls[uf.find(_eid)].add(_ci)
    multi_joins = sum(1 for s in target_froms.values() if len(s) > 1)
    for channel, fe, te, kind, clean, site in cands:
        detail = {"channel": channel, "from": fe, "to": te, "site": "0x%X" % site}
        if len(target_froms[te]) > 1:
            reject("multi_caller_join", detail)   # 多态汇合点：非同一对象
            continue
        if channel == "reg_def":
            if not clean:
                reject("reg_flow_tainted", detail)  # 跨 call / 控制流汇合
                continue
        elif kind == "G":
            if not global_proven(fe):
                reject("global_unproven", detail)
                continue
        elif kind == "M":
            if member_chain_class(fe) is None:
                reject("member_chain_unproven", detail)
                continue
        elif kind not in ("T", "P"):
            reject("unproven_kind", detail)
            continue
        _ra, _rb = uf.find(fe), uf.find(te)
        _ca, _cb = root_self_cls.get(_ra, set()), root_self_cls.get(_rb, set())
        _incomp = False
        for _x in _ca:
            for _y in _cb:
                if not (allowed_of(_x) & allowed_of(_y)):
                    _incomp = True
                    break
            if _incomp:
                break
        if _incomp:
            # 规则 M：两侧 self-pin 类无公共后代 -> same-object 主张被证伪
            reject("self_pin_incompatible",
                   {"channel": channel, "from": fe, "to": te,
                    "cls": sorted(names[c] for c in (_ca | _cb))[:4]})
            continue
        un(fe, te, channel)

    for a_eid, b_eid in c5_link:
        un(a_eid, b_eid, "new_ctor")

    print("[merge-census] candidates=%d (callarg_direct=%d reg_def=%d) "
          "targets=%d multi_source_joins=%d"
          % (len(cands), sum(1 for c in cands if c[0] == "callarg_direct"),
             sum(1 for c in cands if c[0] == "reg_def"),
             len(target_froms), multi_joins), flush=True)
    print("[merge-rejects] " + ("  ".join("%s=%d" % kv for kv in sorted(rejected_merges.items()))
                                or "(none)"), flush=True)
    print("[equality] " + "  ".join(
        "%s=%d(exact-rej %d)" % (k, v["unions"], v["exact_conflicts"])
        for k, v in sorted(ch_stats.items())), flush=True)

    # ---------------- 簇 ----------------
    groups = collections.defaultdict(list)
    for eid in ents:
        groups[uf.find(eid)].append(eid)
    clusters = []
    for root, members in groups.items():
        obs = set()
        exs = {}
        for m in members:
            obs |= ents[m]["obs"]
            for ci, s in exact.get(m, ()):
                exs.setdefault(ci, []).append(s)
        clusters.append({"root": root, "ents": members, "obs": obs,
                         "exact": exs})
    print("[clusters] %d (entities %d)" % (len(clusters), len(ents)), flush=True)
    ALL_EXACT_CLASSES = {ci for cl in clusters for ci in cl["exact"]}

    # ---------------- 求解 ----------------
    def cluster_domains(enabled, apply_c1=True):
        """返回 [(cluster, domain, exact_ci, exact_src, flags)]。

        语义层级（硬→软）：
          1) EXACT（C4/C8）决定类；族侧矛盾/宽度冲突只作为 flags 诊断记录，
             不销毁簇（否则 K 会因"簇被移除"而假性下降）。
          2) 无 EXACT 时，各族域求交；交为空 → flags 记录，域退化为非空族域的并
             （best-effort，仍参与覆盖，绝不静默丢实体）。
        """
        out = []
        for cl in clusters:
            m_c1 = c1_mask(cl["obs"]) if (cl["obs"] and apply_c1) else FULL
            m = m_c1
            masks = {"C1": m_c1}
            for f in enabled:
                if f == "C1":
                    continue
                mf = FULL
                hit = False
                for eid in cl["ents"]:
                    fm = fam[f].get(eid)
                    if fm is not None:
                        mf &= fm
                        hit = True
                masks[f] = mf if hit else FULL
                m &= masks[f]
            exs = {}
            for ci, ss in cl["exact"].items():
                kept = []
                for s in ss:
                    if s.startswith("C4") and "C4" not in enabled:
                        continue
                    if s.startswith("C8") and "C8" not in enabled:
                        continue
                    kept.append(s)
                if kept:
                    exs[ci] = kept
            exact_ci = None
            exact_src = []
            flags = {}
            if len(exs) == 1:
                exact_ci = next(iter(exs))
                exact_src = [(names[exact_ci], s) for s in exs[exact_ci]]
                if cl["obs"]:
                    wconf = c1_width_conflict(exact_ci, cl["obs"])
                    if wconf:
                        flags["width_conflict"] = wconf
                contra = [f for f in enabled
                          if f != "C1" and masks.get(f, FULL) and not (masks[f] >> exact_ci) & 1]
                if (masks["C1"] >> exact_ci) & 1 == 0 and cl["obs"] and "width_conflict" not in flags:
                    contra.append("C1(missing-offset)")
                if contra:
                    flags["exact_contradicts_family"] = contra
                out.append((cl, 1 << exact_ci, exact_ci, exact_src, flags))
                continue
            if len(exs) > 1:
                srcs = [(names[ci], s) for ci, ss in exs.items() for s in ss]
                domain = 0
                for ci in exs:
                    domain |= (1 << ci)
                flags["exact_conflict"] = sorted(names[ci] for ci in exs)
                out.append((cl, domain or FULL, None, srcs, flags))
                continue
            if m:
                out.append((cl, m, None, [], flags))
                continue
            # 无 EXACT 且交为空
            fallback = 0
            for f, mf in masks.items():
                if mf and mf != FULL:
                    fallback |= mf
            if "C1" in masks and not m_c1 and cl["obs"]:
                flags["c1_gap"] = True
            else:
                flags["empty_domain"] = True
            out.append((cl, fallback or FULL, None, [], flags))
        return out

    def greedy(dom_list):
        nc = len(dom_list)
        cover_of = collections.defaultdict(set)
        cls_of_cluster = []
        for ci_cl, (cl, m) in enumerate(dom_list):
            mm = m
            lst = []
            while mm:
                b = mm & -mm
                i = b.bit_length() - 1
                lst.append(i)
                cover_of[i].add(ci_cl)
                mm ^= b
            cls_of_cluster.append(lst)
        uncovered = set(range(nc))
        counts = {i: len(s) for i, s in cover_of.items()}
        # 特异性偏好：优先选择"被单点域/EXACT 强制过"的类，避免稀疏布局的
        # 宽域类（如 Options）吃掉成千上万个无信息簇，导致赋值不可解释。
        support = collections.Counter()
        for (cl, m) in dom_list:
            if m.bit_count() == 1:
                support[m.bit_length() - 1] += 1
        for ci in ALL_EXACT_CLASSES:
            support[ci] += 1
        chosen, assign = [], {}
        while uncovered:
            best, bestn, bestsup = -1, 0, -1
            for i, c in counts.items():
                if c > bestn or (c == bestn and c > 0 and support.get(i, 0) > bestsup):
                    best, bestn, bestsup = i, c, support.get(i, 0)
            if best < 0 or bestn == 0:
                break
            take = cover_of[best] & uncovered
            for cl in take:
                assign[cl] = best
                for c in cls_of_cluster[cl]:
                    if counts.get(c, 0) > 0:
                        counts[c] -= 1
            counts[best] = -1
            chosen.append(best)
            uncovered -= take
        return chosen, cover_of, uncovered, assign

    def improve(dom_list, chosen, cover_of, max_pairs):
        doms = [m for (_, m) in dom_list]
        chosen = list(chosen)
        replaced = 0

        def make_index():
            idx_ = collections.defaultdict(list)
            for c in chosen:
                for cl in cover_of[c]:
                    idx_[cl].append(c)
            return idx_

        idx = make_index()
        changed = True
        while changed:
            changed = False
            for c in sorted(chosen, key=lambda x: len(cover_of.get(x, ()))):
                if all(len(idx.get(cl, ())) >= 2 for cl in cover_of.get(c, ())):
                    chosen.remove(c)
                    for cl in cover_of.get(c, ()):
                        idx[cl].remove(c)
                    replaced += 1
                    changed = True
                    break
        n_pairs = 0
        while n_pairs < max_pairs:
            idx = make_index()
            excl1 = collections.defaultdict(list)
            pair2 = collections.defaultdict(list)
            for cl, cs in idx.items():
                if len(cs) == 1:
                    excl1[cs[0]].append(cl)
                elif len(cs) == 2:
                    pair2[(min(cs), max(cs))].append(cl)
            mergeable = [c for c in chosen
                         if any(doms[cl].bit_count() > 1 for cl in cover_of.get(c, ()))]
            improved = False
            for ii in range(len(mergeable)):
                if improved or n_pairs >= max_pairs:
                    break
                a = mergeable[ii]
                for b in mergeable[ii + 1:]:
                    n_pairs += 1
                    if n_pairs >= max_pairs:
                        break
                    excl = excl1.get(a, []) + excl1.get(b, []) + \
                        pair2.get((min(a, b), max(a, b)), [])
                    if not excl:
                        chosen.remove(b)
                        replaced += 1
                        improved = True
                        break
                    excl.sort(key=lambda cl: doms[cl].bit_count())
                    inter = doms[excl[0]]
                    for cl in excl[1:]:
                        inter &= doms[cl]
                        if not inter:
                            break
                    inter &= ~(1 << a) & ~(1 << b)
                    if not inter:
                        continue
                    cand = inter.bit_length() - 1
                    chosen = [x for x in chosen if x not in (a, b)] + [cand]
                    replaced += 1
                    improved = True
                    break
            if not improved:
                break
        return chosen, replaced

    def lower_bound(dom_list):
        idxs = sorted(range(len(dom_list)), key=lambda i: dom_list[i][1].bit_count())
        picked_union = 0
        lb = 0
        for i in idxs:
            m = dom_list[i][1]
            if m and not (m & picked_union):
                picked_union |= m
                lb += 1
        return lb

    HARD_FLAGS = ("exact_conflict", "empty_domain")

    def solve(enabled):
        doms = cluster_domains([x for x in enabled if x != "C1"])
        conflicted = [d for d in doms if any(k in d[4] for k in HARD_FLAGS)]
        clean = [d for d in doms if not any(k in d[4] for k in HARD_FLAGS)]
        diag_flagged = sum(1 for d in doms if d[4] and d not in conflicted)
        # 规格口径：冲突簇移出赋值（进 conflicts 报告），K 只在可满足簇上求解。
        constrained = [(cl, m) for (cl, m, exci, exsrc, fl) in clean if m != FULL]
        free = len(doms) - len(constrained) - len(conflicted)
        chosen, cover_of, unc, assign = greedy(constrained)
        k0 = len(chosen)
        chosen, merges = improve(constrained, chosen, cover_of, args.max_pair_improve)
        k = len(chosen)
        k_solvable = k
        # 每个冲突簇至少还需要一个类 → K_upper（保守上界，不是同一优化问题）
        k_upper = k + len(conflicted)
        # 硬下界：单点域去重 + 不相交域打包
        pinned_classes = {m.bit_length() - 1 for (cl, m) in constrained if m.bit_count() == 1}
        forced = set()
        for cl, m, exci, exsrc, flags in doms:
            if exci is not None:
                forced.add(exci)
            elif m and m.bit_count() == 1:
                forced.add(m.bit_length() - 1)
        lb = max(lower_bound(constrained), len(pinned_classes))
        bad_cover = sum(1 for (cl, m) in constrained
                        if not any((m >> c) & 1 for c in chosen))
        gaps = sum(1 for d in clean if "c1_gap" in d[4])
        bad_exact = sum(1 for d in conflicted
                        if "exact_conflict" in d[4] or "width_conflict" in d[4]
                        or "exact_contradicts_family" in d[4])
        flagged = [d for d in doms if d[4]]
        return {
            "conflicted": conflicted, "constrained": constrained,
            "free": free, "chosen": chosen, "k": k, "k_solvable": k_solvable,
            "k_upper": k_upper,
            "k_greedy": k0, "lower_bound": lb, "merges": merges, "assign": assign,
            "c1_gaps": gaps, "exact_conflicts": bad_exact,
            "n_conflicts": len(conflicted), "pinned_classes": len(pinned_classes),
            "forced_classes": len(forced), "bad_cover": bad_cover,
            "flagged": flagged, "diag_flagged": diag_flagged,
        }

    family_table = []
    enabled = []
    prev_k = None
    prev_pin = None
    for f in FAMILIES:
        enabled.append(f)
        t0 = time.time()
        res = solve(enabled)
        dt = time.time() - t0
        if f == "C1":
            ents_touched = sum(1 for r in ents.values() if r["obs"])
        else:
            ents_touched = len(fam[f]) + (exact_count[f] if f in ("C4", "C8") else 0)
        pinned = sum(1 for (cl, m) in res["constrained"] if m.bit_count() == 1)
        k_total = res["k"]                          # 全簇（含冲突 best-effort）覆盖
        family_table.append({
            "family": f, "desc": FAMILY_DESC[f], "evidence": census[f],
            "entities_touched": ents_touched,
            "clusters_constrained": len(res["constrained"]),
            "clusters_pinned": pinned, "clusters_free": res["free"],
            "pinned_classes": res["pinned_classes"],
            "forced_classes": res["forced_classes"],
            "conflicts": res["n_conflicts"], "c1_gaps": res["c1_gaps"],
            "K": res["k"], "K_upper": res["k_upper"], "K_total": k_total,
            "K_greedy": res["k_greedy"],
            "delta_forced": (res["forced_classes"] - prev_pin) if prev_pin is not None
            else res["forced_classes"],
            "delta_K": (k_total - prev_k) if prev_k is not None else k_total,
            "lower_bound": res["lower_bound"], "merges": res["merges"],
            "bad_cover": res["bad_cover"],
            "solve_s": round(dt, 1),
        })
        prev_k = k_total
        prev_pin = res["forced_classes"]
        print("[%s] evid=%d ents=%d constrained=%d pinned=%d/%dcls free=%d | K=%d "
              "LB=%d (greedy %d merges %d bad_cover %d) conflicts=%d gaps=%d | %.1fs"
              % (f, census[f], ents_touched, len(res["constrained"]), pinned,
                 res["forced_classes"], res["free"], res["k"], res["lower_bound"],
                 res["k_greedy"], res["merges"], res["bad_cover"], res["n_conflicts"],
                 res["c1_gaps"], dt), flush=True)

    # ---------------- 最终解 ----------------
    all_fams = [f for f in FAMILIES if f not in (args.no_families or "").split(",")]
    res = solve(all_fams)
    K, K_upper, LB = res["k"], res["k_upper"], res["lower_bound"]
    chosen, constrain, assign = res["chosen"], res["constrained"], res["assign"]
    print("\n== FINAL ==")
    print("K_min=%d  K_upper(=K+conflicts)=%d  lower_bound=%d  constrained=%d free=%d "
          "conflicts=%d c1_gaps=%d exact_conflicts=%d unassigned=%d"
          % (K, K_upper, LB, len(constrain), res["free"], res["n_conflicts"],
             res["c1_gaps"], res["exact_conflicts"], len(constrain) - len(assign)),
          flush=True)

    # 赋值释义：K 由覆盖求解确定；每个簇在"已选类 ∩ 域"里选支持度最高者，
    # 避免宽域稀疏类（Options）把无信息簇全部吞掉，使每类实体数不可解释。
    support2 = collections.Counter()
    cover_sz = collections.Counter()
    for (cl, m) in constrain:
        if m.bit_count() == 1:
            support2[m.bit_length() - 1] += 1
    for ci in ALL_EXACT_CLASSES:
        support2[ci] += 1
    for c in chosen:
        cover_sz[c] = sum(1 for (cl, m) in constrain if (m >> c) & 1)
    assign = {}
    for ci_cl, (cl, m) in enumerate(constrain):
        c = max((x for x in chosen if (m >> x) & 1),
                key=lambda x: (support2[x], -cover_sz[x], -x), default=None)
        if c is not None:
            assign[ci_cl] = c

    per_class = collections.defaultdict(lambda: {"clusters": 0, "entities": 0,
                                                 "families": collections.Counter()})
    for ci_cl, c in assign.items():
        rec = per_class[names[c]]
        rec["clusters"] += 1
        rec["entities"] += len(constrain[ci_cl][0]["ents"])
        for eid in constrain[ci_cl][0]["ents"]:
            for f in all_fams:
                if f != "C1" and eid in fam[f]:
                    rec["families"][f] += 1
            if eid in exact:
                rec["families"]["EXACT"] += 1
    class_counts = [{"class": nm, "clusters": r["clusters"], "entities": r["entities"],
                     "families": dict(r["families"])}
                    for nm, r in sorted(per_class.items(), key=lambda kv: -kv[1]["clusters"])]
    print("chosen classes=%d (multi-cluster=%d)" % (len(class_counts),
                                                    sum(1 for x in class_counts if x["clusters"] > 1)),
          flush=True)

    # ---------------- 诊断：严格 C1（"必须有成员"）无匹配 ----------------
    # 这是原型报告 2,048 个实体无布局匹配的复现与归因：严格语义下无解 ≠ 类不存在，
    # 而是 (a) 布局表稀疏（观测所得），(b) 成员链/形参的类未知，(c) 偏移是伪偏移。
    strict_cache = {}
    all_cov_cache = {}
    starts = [[a for (a, b) in intervals[i]] for i in range(n)]

    def covers_all(ci, o, w):
        iv = intervals[ci]
        st = starts[ci]
        if not iv:
            return False
        k = bisect.bisect_right(st, o) - 1
        if k < 0:
            return False
        a, b = iv[k]
        return a <= o and o + w <= b

    def all_cov_mask(o, w):
        key = (o, w)
        m = all_cov_cache.get(key)
        if m is None:
            m = 0
            for ci in range(n):
                if covers_all(ci, o, w):
                    m |= (1 << ci)
            all_cov_cache[key] = m
        return m

    def c1_strict(obs):
        """严格 C1：类必须覆盖每个被访问的字节区间（不区分布局密度）"""
        key = tuple(sorted(obs))
        m = strict_cache.get(key)
        if m is None:
            m = FULL
            for (o, w) in key:
                m &= all_cov_mask(o, w if w else 4)
                if not m:
                    break
            strict_cache[key] = m
        return m

    # 原型 v2 的严格规则复现：布局存在 + 所有偏移存在 + 宽度完全相等
    # （这是原型报告 2,048 个实体"无布局匹配"的口径；用于归因，不参与求解）
    off_eq = collections.defaultdict(int)
    ow_eq = collections.defaultdict(int)
    for i in range(n):
        if not U["has_layout"][i]:
            continue
        for off, w in U["members"][i].items():
            if w is None:
                continue
            off_eq[off] |= (1 << i)
            ow_eq[(off, w)] |= (1 << i)
    proto_cache = {}

    def proto_rule_mask(obs):
        key = tuple(obs)
        m = proto_cache.get(key)
        if m is None:
            m = FULL
            for (o, w) in key:
                if w is None:
                    m &= off_eq.get(o, 0)
                else:
                    m &= ow_eq.get((o, w), 0)
                if not m:
                    break
            proto_cache[key] = m
        return m

    proto_stats = collections.Counter()
    proto_examples = []
    for eid, rec in ents.items():
        obs = rec["obs"]
        if len(obs) < 2:
            continue
        proto_stats["entities_ge2"] += 1
        if proto_rule_mask(obs):
            proto_stats["matched_strict"] += 1
            continue
        # 归因
        wrelax = 0
        for (o, w) in obs:
            base = off_eq.get(o, 0)
            if w is None:
                wrelax |= base
            else:
                allowed = 0
                for mw in (1, 2, 4, 8, 16):
                    if mw >= w:
                        allowed |= ow_eq.get((o, mw), 0)
                wrelax |= allowed
        # 是否存在"仅宽度不同"的类
        cand = FULL
        for (o, w) in obs:
            base = off_eq.get(o, 0)
            cand &= base
            if not cand:
                break
        if cand:
            cause = "width_mismatch_only"
        elif any(o > 4096 for o, w in obs):
            cause = "suspicious_large_offset"
        elif eid.startswith("M:"):
            cause = "member_chain_unknown_class"
        elif eid.startswith("P:"):
            cause = "param_unknown_class"
        elif eid.startswith("G:"):
            cause = "global_unknown_class"
        else:
            cause = "no_class_has_all_offsets_sparse_layout"
        proto_stats[cause] += 1
        if len(proto_examples) < 24:
            proto_examples.append({"entity": eid, "obs": sorted(obs)[:10], "cause": cause})
    print("[diag] prototype_rule: entities(>=2 obs)=%d matched=%d no_match=%d %s"
          % (proto_stats["entities_ge2"], proto_stats["matched_strict"],
             proto_stats["entities_ge2"] - proto_stats["matched_strict"],
             {k: v for k, v in proto_stats.items()
              if k not in ("entities_ge2", "matched_strict")}), flush=True)

    nomatch = []
    by_cause = collections.Counter()
    strict_nomatch = 0
    for cl in clusters:
        if not cl["obs"]:
            continue
        if c1_strict(cl["obs"]):
            continue
        strict_nomatch += 1
        if cl["exact"]:
            cause = "exact_class_layout_gap"
        elif any(e.startswith("M:") for e in cl["ents"]):
            cause = "member_chain_unknown_class"
        elif any(e.startswith("P:") for e in cl["ents"]):
            cause = "param_unknown_class"
        elif all(len(ents[e]["obs"]) <= 2 for e in cl["ents"]):
            cause = "sparse_obs_lt2"
        else:
            cause = "no_class_has_all_offsets"
        # 超大偏移（> size）多半是伪偏移（地址/常量被当成 offset）
        if any(o > 4096 for o, w in cl["obs"]):
            cause = "suspicious_large_offset"
        by_cause[cause] += 1
        if len(nomatch) < 400:
            nomatch.append({"cluster": cl["root"], "entities": cl["ents"][:6],
                            "obs": sorted(cl["obs"])[:12],
                            "exact": [names[c] for c in cl["exact"]][:4], "cause": cause})
    print("[diag] strict_C1_no_match=%d %s" % (strict_nomatch, dict(by_cause)),
          flush=True)

    # ---------------- 写盘 ----------------
    def rec_conflict(cl, m, exci, exsrc, flags):
        per = {}
        masks_f = {}
        m_c1 = c1_mask(cl["obs"]) if cl["obs"] else FULL
        per["C1"] = m_c1.bit_count()
        masks_f["C1"] = m_c1
        c2_names = None
        for f in all_fams:
            if f == "C1":
                continue
            mm = FULL
            hit = False
            for eid in cl["ents"]:
                fm = fam[f].get(eid)
                if fm is not None:
                    mm &= fm
                    hit = True
            per[f] = mm.bit_count() if hit else n
            masks_f[f] = mm if hit else FULL
            if f == "C2" and hit and 1 <= mm.bit_count() <= 8:
                c2_names = [names[i] for i in range(n) if (mm >> i) & 1]
        rec = {
            "cluster": cl["root"], "entities": cl["ents"][:8],
            "n_entities": len(cl["ents"]), "obs": sorted(cl["obs"])[:16],
            "exact": exsrc[:6], "flags": flags,
            "family_domain_sizes": per,
            "reason": ("exact_conflict" if "exact_conflict" in flags else
                       ("exact_contradicts_family" if "exact_contradicts_family" in flags else
                        ("exact_width_conflict" if "width_conflict" in flags else "empty_domain"))),
        }
        if per.get("C2") == 0:
            dbg = []
            for eid in cl["ents"][:4]:
                m2 = fam["C2"].get(eid)
                dbg.append([eid, None if m2 is None else m2.bit_count(),
                            None if m2 is None else [names[i] for i in range(n) if (m2 >> i) & 1][:6]])
            rec_dbg = dbg
        pins = []
        for eid in cl["ents"]:
            pins.extend(c2_pin_log.get(eid, [])[:6])
        if pins:
            rec["c2_pins"] = pins[:12]
        if per.get("C2") == 0:
            rec["c2_mask_debug"] = rec_dbg
        if c2_names:
            rec["c2_pinned"] = c2_names
            # 哪些族把钉住类排除在域外（"still binds" 的精确口径）
            excl = [f for f in all_fams
                    if any(not (masks_f.get(f, FULL) >> i) & 1
                           for i in range(n) if (names[i] in c2_names))]
            if excl:
                rec["pinned_excluded_by"] = excl
        return rec

    table_out = [{k: v for k, v in row.items() if k != "solve_s"} for row in family_table]
    conflict_report = {
        "meta": {
            "generated_by": "tools/csp_export/minclass_solver.py",
            "families": all_fams, "reg_flow": not args.no_reg_flow,
            "evidence_mode": args.evidence,
            "evidence_note": ("default=spec（非循环口径）；spec+proto 为循环备选口径"),
            "merge_policy": "proven-same-object (X152)",
            "rejected_merges": dict(rejected_merges),
            "ruleGJ": {"reg_drops": rule_g_drops, "junction_unions": rule_j_unions},
            "ruleS2": {"c2_drops": rule_s2_drops,
                       "records": rule_s2_records[:80]},
            "c8_cast_dropped": c8_cast_dropped[:50],
            "K": K, "K_upper": K_upper, "lower_bound": LB,
            "constrained_clusters": len(constrain), "free_clusters": res["free"],
            "conflicts": res["n_conflicts"], "c1_gaps": res["c1_gaps"],
            "universe": n, "entities": len(ents),
        },
        "family_table": table_out,
        "conflicts": [rec_conflict(*c) for c in res["conflicted"]],
        "diagnostics": {
            "no_layout_match": {"count": sum(by_cause.values()),
                                "by_cause": dict(by_cause), "samples": nomatch},
            "prototype_rule_c1": {
                "description": "prototype v2 rule: layout exists AND every offset exists "
                               "AND width strictly equal (entity level, obs>=2)",
                "entities_ge2": proto_stats["entities_ge2"],
                "matched_strict": proto_stats["matched_strict"],
                "no_match": proto_stats["entities_ge2"] - proto_stats["matched_strict"],
                "by_cause": {k: v for k, v in proto_stats.items()
                             if k not in ("entities_ge2", "matched_strict")},
                "samples": proto_examples,
            },
            "c4_source_disagreements": c4_disagree[:300],
            "c6_slot_count_disagreements": sc_disagree[:300],
            "c7_variance_violations": viol[:500],
            "c7_variance_violation_count": len(viol),
            "equality_channels": {k: {"unions": v["unions"],
                                      "exact_conflicts": v["exact_conflicts"],
                                      "examples": v["examples"]}
                                  for k, v in sorted(ch_stats.items())},
            "merge_census": {
                "policy": "proven-same-object (X152)",
                "candidates": len(cands),
                "callarg_direct": sum(1 for c in cands if c[0] == "callarg_direct"),
                "reg_def": sum(1 for c in cands if c[0] == "reg_def"),
                "param_targets": len(target_froms),
                "multi_source_joins": multi_joins,
            },
            "rejected_merges": {
                "counts": dict(rejected_merges),
                "examples": {k: v for k, v in rejected_examples.items()},
            },
        },
    }
    cpath = os.path.join(ROOT, "anchors/minclass_conflicts.json")
    with io.open(cpath, "w", encoding="utf-8") as fh:
        json.dump(conflict_report, fh, ensure_ascii=False, indent=1)
    print("[out] %s (%.1f KB)" % (cpath, os.path.getsize(cpath) / 1024.0), flush=True)

    result = {
        "meta": {"generated_by": "tools/csp_export/minclass_solver.py",
                 "families": all_fams, "reg_flow": not args.no_reg_flow,
                 "evidence_mode": args.evidence,
                 "evidence_note": ("default=spec（非循环口径：仅 layout_evidence/ctor_types/"
                                   "vtable_install）；spec+proto 用 proto 派生类验证 proto "
                                   "布局，与 C2 掩码同源，属循环口径，仅作备选报告"),
                 "merge_policy": "proven-same-object (X152)",
                 "rejected_merges": dict(rejected_merges),
                 "K_min": K, "K_upper": K_upper, "lower_bound": LB,
                 "constrained_clusters": len(constrain), "free_clusters": res["free"],
                 "conflicts": res["n_conflicts"], "c1_gaps": res["c1_gaps"],
                 "entities": len(ents), "universe": n},
        "family_table": table_out,
        "chosen_classes": class_counts,
    }
    rpath = os.path.join(ROOT, "anchors/minclass_result.json")
    with io.open(rpath, "w", encoding="utf-8") as fh:
        json.dump(result, fh, ensure_ascii=False, indent=1)
    print("[out] %s (%.1f KB)" % (rpath, os.path.getsize(rpath) / 1024.0), flush=True)
    print("[time] %.1fs" % (time.time() - t_start), flush=True)

    print("\n| family | evidence | entities | constrained | forced_cls | K | K_upper | dForced | LB | conflicts | C1 gaps |")
    print("|---|---|---|---|---|---|---|---|---|---|---|")
    for row in family_table:
        print("| %s | %d | %d | %d | %d | %d | %d | %+d | %d | %d | %d |"
              % (row["family"], row["evidence"], row["entities_touched"],
                 row["clusters_constrained"], row["forced_classes"], row["K"],
                 row["K_upper"], row["delta_forced"], row["lower_bound"],
                 row["conflicts"], row["c1_gaps"]))


if __name__ == "__main__":
    main()






