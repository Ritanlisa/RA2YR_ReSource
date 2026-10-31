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

FAMILIES = ["C1", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "C10", "C11", "C15", "C18"]
FAMILY_DESC = {
    "C1": "member access (offset, obs_w<=member_w)",
    "C2": "this passing (arg class ⊑ callee this-class)",
    "C3": "vtable slot membership",
    "C4": "ctor/dtor vtable install @this+0 (EXACT)",
    "C5": "operator new size (EXACT)",
    "C6": "vtable identity slot count (EXACT)",
    "C7": "param/return variance",
    "C8": "global object identity",
    "C9": "vtable slot ownership (F is a slot target of C => F.this is C or a descendant)",
    "C10": "call-graph subtype propagation (caller.this passed as callee.this => callee class is an ancestor)",
    "C11": "member-chain typing (this->member@NN: subobject class is a descendant of the member static type)",
    "C18": "binary offset-signature match (class member offsets observed in its own functions)",
    "C15": "static vtable ownership (unique minimal owner => EXACT; ambiguous => narrowing mask)",
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
def build_universe(use_evidence=True, prune_dead=False):
    db = jload("anchors/class_db.json")["classes"]
    if prune_dead:
        _dead = set(jload("anchors/dead_classes.json", []) or [])
        _before = len(db)
        db = {k: v for k, v in db.items() if k not in _dead}
        print("[universe] pruned dead classes: %d -> %d" % (_before, len(db)), flush=True)
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
    ap.add_argument("--no-name-pins", action="store_true",
                    help="disable name/proto-this derived class pins")
    ap.add_argument("--prune-dead", action="store_true",
                    help="从候选宇宙剔除零引用死类（anchors/dead_classes.json）")
    ap.add_argument("--proven-universe", dest="proven_universe", action="store_true",
                    default=True,
                    help="proven universe（默认开）：无布局且无二进制证据的幻影类从"
                         "所有族掩码与候选枚举中剔除（掩码级，祖先类保留）。")
    ap.add_argument("--no-proven-universe", dest="proven_universe", action="store_false",
                    help="禁用 proven universe——回归基线口径。")
    ap.add_argument("--dump-domains", action="store_true",
                    help="写出每簇候选域大小（判断多少簇真正被证据确定）")
    ap.add_argument("--strict-c1", action="store_true",
                    help="C1 严格模式：稀疏布局不再「未知放行」，所有类都必须真正"
                         "覆盖被访问的字节区间。用于检验 K 是否被万能空类支配。")
    ap.add_argument("--no-families", default="")
    ap.add_argument("--max-pair-improve", type=int, default=40000)
    ap.add_argument("--extra-callargs", nargs="?",
                    const="anchors/supplementary_call_args.json",
                    default="anchors/supplementary_call_args.json", metavar="PATH",
                    help="补充 CALL_ARG 边文件（调用点实参 → 被调方 this），缺省启用；"
                         "与 raw 既有边按 (addr, to) 去重后原样追加，下游零特判。")
    ap.add_argument("--no-extra-callargs", action="store_true",
                    help="禁用 --extra-callargs（回归基线口径）。")
    ap.add_argument("--evidence", choices=("none", "spec", "spec+proto"), default="spec",
                    help="none=不用访问证据（HEAD 基线口径）; "
                         "spec=仅 anchors/layout_evidence.json (ctor_types/vtable_install)，"
                         "默认（非循环口径）; "
                         "spec+proto=叠加 proto-this 通道——与 C2 FUNC_PARAM 掩码同源"
                         "（函数原型已类型化的 this 声明），用 proto 派生类验证 proto 布局"
                         "属循环论证，仅作备选口径报告。")
    args = ap.parse_args()

    t_start = time.time()
    U = build_universe(use_evidence=(args.evidence != "none"), prune_dead=getattr(args, "prune_dead", False))
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

    # ---------------- 补充 CALL_ARG 边（--extra-callargs / --no-extra-callargs） ----------------
    # 与既有边按 (addr, to) 去重后**原样追加**进 raw——下游（touch / C2 / C7 / C10 /
    # merge 候选 / 赋值）看到的即合并后的完整列表，不做任何特判。
    # addr 归一化为整数比较（"0x00401019" 与 "0x401019" 视为同址）。
    if args.no_extra_callargs:
        print("[extra] disabled (--no-extra-callargs)", flush=True)
    else:
        _xj = jload(args.extra_callargs)
        if not _xj:
            print("[extra] file not found: %s (skipped)" % args.extra_callargs, flush=True)
        else:
            _xed = _xj.get("edges") or []

            def _dkey(_e):
                _a = hx(_e.get("addr"))
                return ((_a if _a is not None else _e.get("addr")), _e.get("to"))

            _seen = set()
            for _e in raw:
                _seen.add(_dkey(_e))
            _append = []
            for _e in _xed:
                _k = _dkey(_e)
                if _k in _seen:
                    continue
                _seen.add(_k)
                _append.append(_e)
            raw.extend(_append)
            print("[extra] loaded=%d appended=%d duplicates=%d"
                  % (len(_xed), len(_append), len(_xed) - len(_append)), flush=True)

    protos = jload("anchors/ida_function_protos.json", {})
    faddrs = sorted(int(a, 16) for a in protos)
    print("[data] raw edges=%d functions=%d" % (len(raw), len(protos)), flush=True)

    # ---------------- 函数声明类（提前定义：proto 证据通道与 C2 共用） ----------------
    owner_of_fn = {}
    _NO_NAME_PINS = "--no-name-pins" in sys.argv
    if _NO_NAME_PINS:
        print("[names] name-derived class pins DISABLED", flush=True)
    for a, v in ({} if _NO_NAME_PINS else protos).items():
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
    # X159: 地址级剔除（基址寄存器已不是 this 别名）——粒度精确，不误删同偏移合法访问
    dropped_addr = set()
    for _a in (corr.get("dropped_member_access_addr") or []):
        try:
            dropped_addr.add("0x%08X" % int(str(_a), 16))
        except ValueError:
            pass
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
        if e.get("addr") and ("0x%08X" % int(str(e["addr"]), 16)) in dropped_addr:
            continue          # 基址寄存器当时不是 this（X159 地址级剔除）
        # 成员链实体（this->member@0xNN）的 obs 偏移是**相对该子对象**的，
        # 正是子对象自己的成员 —— 此前整类丢弃，白白损失 1,499 个实体的证据。
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

    print("[entities][dbg] by prefix: %s" % dict(collections.Counter(k.split(":")[0] for k in ents)), flush=True)
    print("[entities] total=%d with_obs=%d obs>=2=%d"
          % (len(ents), sum(1 for r in ents.values() if r["obs"]),
             sum(1 for r in ents.values() if len(r["obs"]) >= 2)), flush=True)

    fam = {f: {} for f in FAMILIES}
    exact = collections.defaultdict(list)
    c1_gaps = []                                # C1 无解（布局缺口），不丢实体

    # ---- 继承链成员展开（结构性修复）----
    # class_layouts 里 61% 的派生类**只列自身成员**，不含基类成员：
    # OverlayClass 缺 45 个、HouseClass 缺 [0,4,8,12,33]、InfantryClass 334 而
    # 基类 FootClass 384。C1 因此把合法的继承访问当成反证（578 个假冲突）。
    _parents = {}
    try:
        _raw_layouts = jload("tools/class_layouts.json", {}) or {}
        for _cn, _rec in _raw_layouts.items():
            if isinstance(_rec, dict) and _rec.get("parent"):
                _ci = resolve(_cn)
                _pi = resolve(_rec["parent"])
                if _ci is not None and _pi is not None and _ci != _pi:
                    _parents[_ci] = _pi
    except Exception:
        _parents = {}
    _inherit_added = 0
    _depth_cache = {}
    def _chain(ci):
        out = []; seen = set(); cur = ci; d = 0
        while cur in _parents and cur not in seen and d < 16:
            seen.add(cur); cur = _parents[cur]; out.append(cur); d += 1
        return out
    for _ci in range(n):
        for _anc in _chain(_ci):
            if not U["has_layout"][_anc]:
                continue
            for _o, _w in U["members"][_anc].items():
                if _o not in U["members"][_ci]:
                    U["members"][_ci][_o] = _w
                    _inherit_added += 1
    print("[layouts] inheritance flattening: %d parent links, %d inherited members added"
          % (len(_parents), _inherit_added), flush=True)

    # ---- A：proven universe（幻影类剔除）----
    # 人肉鉴定只考虑二进制里真实存在的类；「无布局且无二进制证据」的幻影类
    # 对 C1 恒为 FULL 放行（has_layout=False → 稀疏掩码放行），坐在每一个域里
    # 抬高全部域宽。实现为掩码级剔除（不重排宇宙数组，避免重编号涟漪）：
    # cluster_domains 求交时统一与 proven 掩码相交，候选枚举因此见不到幻影类。
    # 保留判据（任一成立）：
    #   (1) tools/class_layouts.json 有含成员的布局记录；
    #   (2) 二进制身份 = identified 集（extent/ctor 装表/structural truth）+
    #       singleton_types 存储锚定；
    #   (3) anchors/layout_evidence.json 记录了 extra_offsets（并入 identified）；
    #   (4) anchors/vtable_slot_authority.json 里拥有 vtable。
    # 层次保护：kept 类的祖先（_parents 链 + rtti_base_arrays + class_db
    # full_ancestors，传递闭包）一律保留，否则 anc/desc 展开断链。
    _proven_mask = FULL
    proven_keep = None
    if getattr(args, "proven_universe", True):
        _keep = set(identified)
        for _rec in (jload("anchors/singleton_types.json", {}) or {}).values():
            _ci = resolve((_rec or {}).get("type"))
            if _ci is not None:
                _keep.add(_ci)
        _lay_prov = jload("tools/class_layouts.json", {}) or {}
        _laycls = {r for r, rec in _lay_prov.items()
                   if isinstance(rec, dict) and (rec.get("offsets") or {})}
        _align_prov = jload("anchors/class_name_align.json", {}) or {}
        _r2c_prov = {k: v["canon"] for k, v in
                     (_align_prov.get("rtti_to_canon") or {}).items()}
        for _i, _c in enumerate(names):
            _recs = [_c] + [r for r in (U["db"][_c].get("rtti_names") or []) if r != _c]
            for _r in _recs:
                if _r in _laycls or (_r in _r2c_prov and _r2c_prov[_r] in _laycls):
                    _keep.add(_i)
                    break
        for _cls in (jload("anchors/vtable_slot_authority.json", {}) or {}):
            _ci = resolve(_cls)
            if _ci is not None:
                _keep.add(_ci)
        # 祖先保留（多源直接祖先 → 传递闭包）
        _rtti_base_prov = jload("anchors/rtti_base_arrays.json", {}) or {}
        _anc_direct = {}
        for _i, _c in enumerate(names):
            _rec = U["db"][_c]
            _anc = set()
            for _a in _rec.get("full_ancestors") or []:
                _j = resolve(_a)
                if _j is not None:
                    _anc.add(_j)
            _rns = [_c] + [r for r in (_rec.get("rtti_names") or []) if r != _c]
            for _rn in _rns:
                for _a in _rtti_base_prov.get(_rn) or []:
                    _j = resolve(_a)
                    if _j is not None:
                        _anc.add(_j)
                for _src in [_rn] + ([_r2c_prov[_rn]] if _rn in _r2c_prov else []):
                    _lr = _lay_prov.get(_src)
                    _p = _lr.get("parent") if isinstance(_lr, dict) else None
                    if _p:
                        _j = resolve(_p)
                        if _j is not None:
                            _anc.add(_j)
            if _anc:
                _anc_direct[_i] = _anc
        _stack = list(_keep)
        while _stack:
            _i = _stack.pop()
            for _j in _anc_direct.get(_i, ()):
                if _j not in _keep:
                    _keep.add(_j)
                    _stack.append(_j)
        proven_keep = _keep
        _proven_mask = 0
        for _i in proven_keep:
            _proven_mask |= (1 << _i)
    _n_phantom = n - (_proven_mask.bit_count() if proven_keep is not None else n)
    print("[universe] proven=%d dropped_phantom=%d (no_layout_no_proof)"
          % (n - _n_phantom, _n_phantom), flush=True)
    _proven_cell = [_proven_mask]      # 单元格：K 对照（was）时临时置 FULL 重解

    def _pfm(m):
        """proven 掩码过滤。FULL（未知/无证据）保持 FULL——与真·宇宙剔除同口径：
        未知 = kept 宇宙上的任意类 = 自由簇，不进覆盖问题；只有具体掩码才剥幻影位。"""
        _p = _proven_cell[0]
        if _p == FULL or m == FULL:
            return m
        return m & _p

    # ---- 二进制身份锚定的成员表补全（非循环）----
    # 身份只来自二进制：ctor vtable 装表 / vtable 槽位归属 / 全局单例。
    # 一旦身份确定，该类所有函数在 this 上的访问偏移就是**该类的真实成员**，
    # 把它们并入成员表，C1 才有判别力（此前只有残缺的声明成员表，847/1,282
    # 个类被当成"稀疏=放行"，C1 一条都没钉住）。
    _id_funcs = collections.defaultdict(set)
    for _a, _cn in (jload("anchors/ctor_types.json", {}) or {}).items():
        _ci = resolve(_cn); _fa = hx(_a)
        if _ci is not None and _fa is not None:
            _id_funcs[_ci].add(_fa)
    for _a, _cn in ((jload("anchors/structural_truth.json", {}) or {})
                    .get("vtable_install") or {}).items():
        _ci = resolve(_cn); _fa = hx(_a)
        if _ci is not None and _fa is not None:
            _id_funcs[_ci].add(_fa)
    _auth = jload("anchors/vtable_slot_authority.json", {}) or {}
    for _cn, _rec in (_auth.get("classes") or {}).items():
        _ci = resolve(_cn)
        if _ci is None:
            continue
        for _sl in (_rec.get("slots") or []):
            if isinstance(_sl, dict) and _sl.get("addr"):
                _fa = hx(str(_sl["addr"]))
                if _fa is not None:
                    _id_funcs[_ci].add(_fa)
    _fn_obs = collections.defaultdict(list)
    for _e in raw:
        if _e.get("type") != "MEMBER_ACCESS":
            continue
        _b = _e.get("base")
        if not (isinstance(_b, str) and _b.endswith(":this")):
            continue
        _fa = hx(_b.split(":")[0])
        if _fa is None:
            continue
        if _e.get("addr") and ("0x%08X" % int(str(_e["addr"]), 16)) in dropped_addr:
            continue
        try:
            _o = int(_e.get("offset") or 0)
        except (TypeError, ValueError):
            continue
        _w = _e.get("width")
        _w = int(_w) if isinstance(_w, (int, float)) and _w > 0 else 4
        _fn_obs[_fa].append((_o, _w))
    _vfslots = {}
    try:
        _vfslots = jload(".omo/x443/vfptr_slots.json", {}) or {}
    except Exception:
        _vfslots = {}
    _bin_added = 0
    _bin_classes = 0
    for _ci, _fns in _id_funcs.items():
        _add = {}
        for _fa in _fns:
            for (_o, _w) in _fn_obs.get(_fa, ()):
                if _o > 0x10000:
                    continue          # 远超对象体的偏移属成员链，跳过
                _add[_o] = max(_add.get(_o, 0), _w)
        _vfn = resolve(_cn) if False else None
        if _add:
            _bin_classes += 1
        for _o, _w in _add.items():
            if _o not in U["members"][_ci]:
                U["members"][_ci][_o] = _w
                _bin_added += 1
    # 自身 vfptr 槽（多继承 0/4/8/12）：来自 ctor 装表序列的前导连续区
    for _cn, _offs in (_vfslots or {}).items():
        _ci = resolve(_cn)
        if _ci is None:
            continue
        for _o in _offs:
            if _o <= 0x20 and _o not in U["members"][_ci]:
                U["members"][_ci][_o] = 4
                _bin_added += 1
    print("[layouts] binary-identity member completion: %d classes, %d members added"
          % (_bin_classes, _bin_added), flush=True)

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

    _size_ok_cache = {}

    def c1_size_mask(need):
        """对象尺寸硬下界：类的 effective_size 必须 >= 已观测到的最大访问末端。
        手工逆向时这是第一条排除规则（访问到 +0x500 的对象不可能是 40 字节的类），
        而基线 C1 对稀疏布局类无条件放行，让任意小类都能"覆盖"任意大的偏移。"""
        m = _size_ok_cache.get(need)
        if m is None:
            m = 0
            for _i in range(n):
                _sz = U["eff_size"][_i]
                if not _sz or int(_sz) >= need:
                    m |= (1 << _i)      # 尺寸未知的类不排除
            _size_ok_cache[need] = m
        return m

    def c1_mask(obs):
        """C1：dense 类必须覆盖每个被访问的字节区间；稀疏类只做"未知放行"。
        另加尺寸硬下界：类必须装得下观测到的最大偏移。"""
        key = tuple(sorted(obs))
        m = c1_cache.get(key)
        if m is None:
            m = FULL
            _need = 0
            for (o, w) in key:
                _ww = w if w else 4
                m &= c1_ok_mask(o, _ww)
                if o + _ww > _need:
                    _need = o + _ww
                if not m:
                    break
            if m and _need:
                m &= c1_size_mask(_need)
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
        if (not _NO_NAME_PINS) and pr and pr[1] == "__thiscall" and pr[2] and "this" in pr[2][0]:
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
        # 虚调用要求接收者**必须是多态类**（有 vtable）——无 vtable 信息的类不能当接收者。
        # 基线把 unknown_slot 无条件并进来，等于给每个接收者域白加全部无布局类。
        return slot_mask.get(slot, 0)

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
        _c5_exact = 0
        _c5_fallback = 0
        for fn, site, size, dest in facts["alloc_sites"]:
            eid = "N:%X" % site
            # 分配尺寸是二进制事实：精确匹配优先；无布局的类不借此白拿通行证
            m = size_mask(size)
            if not m:
                m = unknown_size          # 尺寸表本身失真时才退回通配
                _c5_fallback += 1
            else:
                _c5_exact += 1
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
                    # `new` 之后紧跟、且返回值寄存器一致的那个 ctor，就是被构造的类。
                    # 不再要求 ctor 类尺寸 == 分配尺寸：尺寸表本身失真（CCFileClass 声明 84
                    # 却写 +100），这条等式会挡掉绝大多数真实分配点（实测只连上 6/842）。
                    t_eid = "T:%X" % tgt
                    _c5_ctor_hits = [ci for ci, _s in exact.get(t_eid, ())]
                    if _c5_ctor_hits and not any(
                            _ci != _c5_ctor_hits[0] for _ci, _s in exact.get(eid, ())):
                        for ci in _c5_ctor_hits:
                            exact[eid].append((ci, "C5:alloc-ctor"))
                            exact_count["C5"] = exact_count.get("C5", 0) + 1
                            census["C5"] += 1
                            size_obs[ci][size] += 1
                        c5_link.append((eid, t_eid))
                    break
    print("[C5] alloc size exact=%d fallback=%d" % (_c5_exact, _c5_fallback), flush=True)
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

    # ---------------- C15：静态 vtable 归属（唯一最小 owner → EXACT）----------------
    # 纯二进制证据（anchors/vtable_slot_authority.json，.rdata 实测，不用函数名）：
    # 函数 F 出现在类集合 S 的 vtable 上（按槽位地址去重）。最小 owner 定义：
    # c ∈ S 是最小的当且仅当不存在 d ∈ S (d≠c) 使 c ∈ ancestors(d)
    # （祖先链 = class_layouts.json 的 parent 链，20 级上限；不在 layouts 里的
    # 类无祖先，仍可作最小 owner）。
    #   |min(S)| == 1 → 该类即 F 的类（EXACT，复用 C4 的 exact[eid] 通道）
    #   |min(S)| > 1  → COMDAT 折叠共享实现 / 多继承：仅注册族掩码收窄（3 值语义）
    # 顺序约束：C4/C8 既有 EXACT 优先——T:F 已有身份则跳过（skipped_ctor_conflict）。
    # 本块必须位于等式合并之前：root_exact 需含 C15 身份，合并器才能拒绝把两个
    # EXACT 类不相交的实体并进同一簇（否则 exact_conflict 簇会逃过冲突消解）。
    c15_owner = collections.defaultdict(int)
    for _cls, _rec in (jload("anchors/vtable_slot_authority.json", {}) or {}).items():
        _ci = resolve(_cls)
        if _ci is None:
            continue
        for _sv in (_rec.get("slots") or {}).values():
            _fa = hx((_sv or {}).get("addr"))
            if _fa is not None:
                c15_owner[_fa] |= (1 << _ci)
    _c15_anc_cache = {}

    def _c15_ancestors(ci):
        """class_layouts parent 链（不含自身），20 级上限；无链类 = 无祖先。"""
        out = _c15_anc_cache.get(ci)
        if out is None:
            out = set()
            cur = ci
            for _ in range(20):
                cur = _parents.get(cur)
                if cur is None or cur in out:
                    break
                out.add(cur)
            _c15_anc_cache[ci] = out
        return out

    c15_exact_n = c15_amb_n = c15_skipped_ctor = c15_not_entity = 0
    c15_no_minimal = c15_pool_exact = 0
    for _fa, _om in sorted(c15_owner.items()):
        _lst = [i for i in range(n) if (_om >> i) & 1]
        _minimal = [c for c in _lst
                    if not any(c in _c15_ancestors(d) for d in _lst if d != c)]
        if not _minimal:
            c15_no_minimal += 1        # 祖先链成环等脏数据：无可判定 owner，跳过
            continue
        if len(_minimal) > 1:
            c15_amb_n += 1
            _eid = "T:%X" % _fa
            if _eid in ents:
                _mamb = 0
                for c in _minimal:
                    _mamb |= (1 << c)
                fam["C15"][_eid] = fam["C15"].get(_eid, FULL) & _mamb
                census["C15"] += 1
            continue
        c15_pool_exact += 1
        _eid = "T:%X" % _fa
        if _eid not in ents:
            c15_not_entity += 1       # C4 同款守卫：只标注已有观测的实体
            continue
        if exact.get(_eid):
            c15_skipped_ctor += 1     # C4/C8 既有身份优先，不覆盖
            continue
        exact[_eid].append((_minimal[0], "C15:vtable-owner"))
        exact_count["C15"] += 1
        census["C15"] += 1
        c15_exact_n += 1
    print("[C15] vtable-owner exact=%d ambiguous=%d entities=%d "
          "(pool_exact=%d skipped_ctor_conflict=%d not_entity=%d no_minimal=%d)"
          % (c15_exact_n, c15_amb_n, len(fam["C15"]), c15_pool_exact,
             c15_skipped_ctor, c15_not_entity, c15_no_minimal), flush=True)

    # ---------------- C11b：成员链类型导出 ----------------
    # M 实体 = 容器的 this->member(NN)。容器类被 C4/C15 钉住时，该成员的**声明类型**
    # 就是子对象的类（人眼分析用的正是这条：AircraftClass+0x6C4 -> AircraftTypeClass）。
    # 类型来源：class_layouts 成员 type + member_types.json 的 Class+0xNN 记录。
    _c11b_exact = _c11b_containers = _c11b_unres = _c11b_nocont = 0
    _decl11b = {}
    try:
        _lay11b = jload("tools/class_layouts.json", {}) or {}
        _mt11b = jload("anchors/member_types.json", {}) or {}
        def _strip11b(t):
            t = re.sub(r"\bconst\b", "", str(t or "")).replace("*", "").replace("&", "").strip()
            if "<" in t:
                t = t.split("<")[0].strip()
            return t
        for _cn11b, _rec11b in _lay11b.items():
            _ci11b = resolve(_cn11b)
            if _ci11b is None or not isinstance(_rec11b, dict):
                continue
            for _o11b, _m11b in (_rec11b.get("offsets") or {}).items():
                _ti11b = resolve(_strip11b((_m11b or {}).get("type")))
                if _ti11b is not None:
                    _decl11b[(_ci11b, int(_o11b))] = _ti11b
        _rx11b = re.compile(r"^(.*)\+0[xX]([0-9A-Fa-f]+)$")
        for _k11b, _v11b in _mt11b.items():
            _mm11b = _rx11b.match(_k11b)
            if not _mm11b:
                continue
            _ci11b = resolve(_mm11b.group(1))
            _ti11b = resolve(_strip11b((_v11b or {}).get("type")))
            if _ci11b is not None and _ti11b is not None:
                _decl11b.setdefault((_ci11b, int(_mm11b.group(2), 16)), _ti11b)
    except Exception:
        _decl11b = {}
    _fn_exact_c = {}
    for _eidc, _lstc in exact.items():
        if not _eidc.startswith("T:"):
            continue
        _setc = {_ci for _ci, _s in _lstc}
        if len(_setc) == 1:
            _fn_exact_c[_eidc] = next(iter(_setc))
    for _eidc in list(ents.keys()):
        if not _eidc.startswith("M:"):
            continue
        _pc = _eidc.split(":")
        if len(_pc) != 4 or _pc[2] != "this":
            continue
        _cic = _fn_exact_c.get("T:" + _pc[1])
        if _cic is None:
            _c11b_nocont += 1
            continue
        _c11b_containers += 1
        try:
            _oc = int(_pc[3], 16)
        except ValueError:
            try:
                _oc = int(_pc[3])
            except ValueError:
                continue
        _tic = _decl11b.get((_cic, _oc))
        if _tic is None:
            _c11b_unres += 1
            continue
        if exact.get(_eidc) and any(_ci != _tic for _ci, _s in exact[_eidc]):
            continue
        exact[_eidc].append((_tic, "C11b:member-type"))
        exact_count["C11"] += 1
        census["C11"] += 1
        _c11b_exact += 1
    print("[C11b] member-type exact=%d (containers=%d unresolved_type=%d no_container=%d)"
          % (_c11b_exact, _c11b_containers, _c11b_unres, _c11b_nocont), flush=True)

    # ---------------- C18：二进制偏移签名匹配 ----------------
    # 只用汇编事实：一个类自己那些已确认函数在 this 上访问的 (offset,width) 集合，
    # 就是该类在二进制里的成员签名。若某簇的观测集被**恰好一个**类的签名覆盖，
    # 该簇的类即为那个类。不依赖 IDA 类型、不依赖成员名、不依赖函数名。
    _c18_exact = _c18_tried = _c18_amb = 0
    _sig18 = collections.defaultdict(set)
    for _e18 in raw:
        if _e18.get("type") != "MEMBER_ACCESS":
            continue
        _b18 = _e18.get("base")
        if not (isinstance(_b18, str) and _b18.endswith(":this")):
            continue
        _f18 = hx(_b18.split(":")[0])
        if _f18 is None:
            continue
        try:
            _o18 = int(_e18.get("offset") or 0)
        except (TypeError, ValueError):
            continue
        _w18 = _e18.get("width")
        _w18 = int(_w18) if isinstance(_w18, (int, float)) and _w18 > 0 else 4
        _sig18[_f18].add((_o18, _w18))
    _cls_sig18 = collections.defaultdict(set)
    for _eid18, _lst18 in exact.items():
        if not _eid18.startswith("T:"):
            continue
        _cset18 = {_ci for _ci, _src in _lst18}
        if len(_cset18) != 1:
            continue
        _f18 = hx(_eid18[2:])
        if _f18 is None:
            continue
        _cls_sig18[next(iter(_cset18))] |= _sig18.get(_f18, set())
    _cls_big18 = {_ci: _s for _ci, _s in _cls_sig18.items() if len(_s) >= 5}
    print("[C18] binary offset signatures: classes=%d (>=5 offsets)" % len(_cls_big18), flush=True)

    def _cov18(_s, _obs):
        for (_o, _w) in _obs:
            if not any(_a <= _o and _o + _w <= _a + _b for (_a, _b) in _s):
                return False
        return True

    for _eid18 in list(ents.keys()):
        _obs18 = ents[_eid18].get("obs") or set()
        if len(_obs18) < 2:
            continue
        _c18_tried += 1
        _hit18 = [_ci for _ci, _s in _cls_big18.items() if _cov18(_s, _obs18)]
        if not _hit18:
            continue
        _mask18 = 0
        for _ci in _hit18:
            _mask18 |= (1 << _ci)
        fam["C18"][_eid18] = fam["C18"].get(_eid18, FULL) & _mask18
        if len(_hit18) != 1:
            _c18_amb += 1
            continue
        if exact.get(_eid18) and any(_ci != _hit18[0] for _ci, _src in exact[_eid18]):
            continue
        exact[_eid18].append((_hit18[0], "C18:binary-signature"))
        exact_count["C18"] = exact_count.get("C18", 0) + 1
        census["C18"] = census.get("C18", 0) + 1
        _c18_exact += 1
    print("[C18] binary-signature exact=%d (tried=%d ambiguous=%d)"
          % (_c18_exact, _c18_tried, _c18_amb), flush=True)

    # C18b：多类覆盖时取**唯一最小签名**（拟合最紧的那个类）。
    # 防误判门：观测 >= 3 条且最大偏移 >= 0x40 —— 只看 +0..+16 的簇任何小类都能覆盖，
    # 那是假精度，不许钉。
    _c18b_exact = _c18b_amb = 0
    for _eid18b in list(ents.keys()):
        if exact.get(_eid18b):
            continue
        _obs18b = ents[_eid18b].get("obs") or set()
        if len(_obs18b) < 3:
            continue
        if max(_o for (_o, _w) in _obs18b) < 0x40:
            continue
        _hit18b = [(_ci, len(_s)) for _ci, _s in _cls_big18.items() if _cov18(_s, _obs18b)]
        if len(_hit18b) < 2:
            continue
        _hit18b.sort(key=lambda x: x[1])
        if _hit18b[0][1] < _hit18b[1][1]:
            exact[_eid18b].append((_hit18b[0][0], "C18b:minimal-signature"))
            exact_count["C18"] = exact_count.get("C18", 0) + 1
            census["C18"] = census.get("C18", 0) + 1
            _c18b_exact += 1
        else:
            _c18b_amb += 1
    print("[C18b] minimal-signature exact=%d (tied=%d)" % (_c18b_exact, _c18b_amb), flush=True)

    # C18c：级联——用刚定类的函数扩充签名表，再跑一轮唯一覆盖。
    # 签名仍然只由汇编的 (offset,width) 构成，新定类的函数把它们自己的访问并进所属类。
    _c18c_rounds = []
    for _r18 in range(3):
        _cls_sig18 = collections.defaultdict(set)
        for _eid18c, _lst18c in exact.items():
            if not _eid18c.startswith("T:"):
                continue
            _cset18c = {_ci for _ci, _src in _lst18c}
            if len(_cset18c) != 1:
                continue
            _f18c = hx(_eid18c[2:])
            if _f18c is None:
                continue
            _cls_sig18[next(iter(_cset18c))] |= _sig18.get(_f18c, set())
        _cls_big18 = {_ci: _s for _ci, _s in _cls_sig18.items() if len(_s) >= 5}
        _c18c_n = 0
        for _eid18c in list(ents.keys()):
            if exact.get(_eid18c):
                continue
            _obs18c = ents[_eid18c].get("obs") or set()
            if len(_obs18c) < 3 or max(_o for (_o, _w) in _obs18c) < 0x40:
                continue
            _hit18c = [_ci for _ci, _s in _cls_big18.items() if _cov18(_s, _obs18c)]
            if len(_hit18c) == 1:
                exact[_eid18c].append((_hit18c[0], "C18c:cascade"))
                exact_count["C18"] = exact_count.get("C18", 0) + 1
                census["C18"] = census.get("C18", 0) + 1
                _c18c_n += 1
        _c18c_rounds.append(_c18c_n)
        if not _c18c_n:
            break
    print("[C18c] cascade exact per round=%s (classes in signature table=%d)"
          % (_c18c_rounds, len(_cls_big18)), flush=True)

    # ---------------- C19：构造调用给出源实体的类 ----------------
    # 汇编事实：`lea ecx,[ebp-18]; call Foo::Foo` / `mov ecx,ebx; call Foo::Foo`
    # —— 被构造对象的类就是 Foo。C4 已用装表把 Foo 的 ctor 钉死，这里反向把
    # **传给它的 this 源实体**定为 Foo。
    # 防误判：源若正是本函数自己的 this（T:fn），那是派生类构造里"传自身给基类 ctor"，
    # 对象真实类是派生类，不能记成基类 —— 跳过。
    _c19_exact = _c19_skip_self = _c19_noent = 0
    _ctor_exact19 = {}
    for _eid19, _lst19 in exact.items():
        if not _eid19.startswith("T:"):
            continue
        _s19 = {_ci for _ci, _src in _lst19 if str(_src).startswith("C4")}
        if len(_s19) == 1:
            _ctor_exact19[_eid19] = next(iter(_s19))
    for _e19 in raw:
        if _e19.get("type") != "CALL_ARG":
            continue
        _to19 = str(_e19.get("to") or "")
        if not _to19.endswith(":this"):
            continue
        _c19 = _ctor_exact19.get("T:" + ("%X" % hx(_to19.split(":")[0]))) if hx(_to19.split(":")[0]) is not None else None
        if _c19 is None:
            continue
        _fr19 = str(_e19.get("from") or "")
        try:
            _a19 = int(str(_e19.get("addr")), 16)
        except (TypeError, ValueError):
            continue
        _fn19 = fn_at(_a19)
        if _fr19.endswith(":this"):
            _src19 = ent_id(_fr19)
        elif ".member(" in _fr19:
            _src19 = ent_id(_fr19, _fn19)
        elif _fr19 in REGS or _fr19.startswith("stack_+"):
            _src19 = ent_id(_fr19, _fn19)
        else:
            continue
        if not _src19 or _src19 not in ents:
            _c19_noent += 1
            continue
        if _fn19 is not None and _src19 == "T:%X" % _fn19:
            _c19_skip_self += 1
            continue
        if exact.get(_src19) and any(_ci != _c19 for _ci, _src in exact[_src19]):
            continue
        if any(_ci == _c19 for _ci, _src in exact.get(_src19, ())):
            continue
        exact[_src19].append((_c19, "C19:ctor-arg"))
        exact_count["C19"] = exact_count.get("C19", 0) + 1
        census["C19"] = census.get("C19", 0) + 1
        _c19_exact += 1
    print("[C19] ctor-argument exact=%d (skip_self=%d not_entity=%d ctor_pool=%d)"
          % (_c19_exact, _c19_skip_self, _c19_noent, len(_ctor_exact19)), flush=True)

    # ---------------- C21：单函数自己的访问集合 vs 类布局 ----------------
    # C18 用的是「整簇观测并集」，会把同簇里多个函数的访问混在一起，掩盖单函数的指纹。
    # 这里对**每个函数**单独取它在 this 上的 (offset,width) 集合，要求某个类的布局
    # 逐个精确覆盖（成员宽度够），且只被**一个**类覆盖 -> 该函数的类即那个类。
    # 门槛：>=3 个访问且最大偏移 >=0x40（避免只看 +0..+16 的万能小类）。
    _c21_exact = _c21_amb = _c21_none = 0
    _lay21 = {}
    for _i21 in range(n):
        _mm21 = U["members"][_i21]
        if _mm21 and len(_mm21) >= 5:
            _lay21[_i21] = _mm21
    for _fn21, _obs21 in _sig18.items():
        if len(_obs21) < 3 or max(_o for (_o, _w) in _obs21) < 0x40:
            continue
        _eid21 = "T:%X" % _fn21
        if _eid21 not in ents or exact.get(_eid21):
            continue
        _hits21 = [_ci for _ci, _mm in _lay21.items()
                   if all(_mm.get(_o, 0) >= _w for (_o, _w) in _obs21)]
        if len(_hits21) == 1:
            exact[_eid21].append((_hits21[0], "C21:fn-layout"))
            exact_count["C21"] = exact_count.get("C21", 0) + 1
            census["C21"] = census.get("C21", 0) + 1
            _c21_exact += 1
        elif _hits21:
            _c21_amb += 1
        else:
            _c21_none += 1
    print("[C21] per-function layout exact=%d (ambiguous=%d no_match=%d layouts=%d)"
          % (_c21_exact, _c21_amb, _c21_none, len(_lay21)), flush=True)

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

    # ---- C20：ECX 即 this（同一对象）----
    # 汇编事实：接收 this 的函数在入口处 ecx 就是 this；该函数内所有以 ecx 为源的
    # 寄存器实体（R:<fn>:ecx）聚合的正是同一个对象。把它与本函数的 T:<fn> 并簇。
    # 判定表 anchors/fn_takes_this.json = 入口在读 ECX 前未写过 ECX 的函数集合（纯汇编）。
    _c20_n = 0
    try:
        _takes_this20 = jload("anchors/fn_takes_this.json", {}) or {}
    except Exception:
        _takes_this20 = {}
    for _fn20s, _t20 in _takes_this20.items():
        if not _t20:
            continue
        _a20 = hx(_fn20s[2:]) if str(_fn20s).lower().startswith('0x') else hx(_fn20s)
        if _a20 is None:
            continue
        _r20 = "R:%X:ecx" % _a20
        _t_eid20 = "T:%X" % _a20
        if _r20 in ents and _t_eid20 in ents:
            un(_r20, _t_eid20, "ecx_is_this")
            _c20_n += 1
    _dbg_r = sum(1 for k in _takes_this20 if ("R:%s:ecx" % ("%X" % int(str(k), 16))) in ents)
    _dbg_t = sum(1 for k in _takes_this20 if ("T:%s" % ("%X" % int(str(k), 16))) in ents)
    _sample_r = [k for k in list(_takes_this20)[:5]]
    print("[C20][dbg] takes_this=%d  R-in-ents=%d  T-in-ents=%d  sample_keys=%s  r_keys_sample=%s"
          % (len(_takes_this20), _dbg_r, _dbg_t, _sample_r[:3],
             [("R:%s:ecx" % ("%X" % int(str(k), 16))) for k in _sample_r[:3]]), flush=True)
    print("[C20] ecx==this unions: %d (functions taking this=%d)"
          % (_c20_n, sum(1 for v in _takes_this20.values() if v)), flush=True)

    # ---- C17：洁净寄存器 = 函数 this（同一对象的等式）----
    # facts.reg_links = [site, reg, src, clean]；clean=True 表示该寄存器的到达定义
    # 未经跨调用/控制流汇合，即在此点它装的就是 src 那个对象。当 src 正是本函数的
    # this（T:<fn>）时，R:<fn>:<reg> 与 T:<fn> 是同一对象 -> 并入同簇。
    _c17_n = 0
    if facts:
        for _lk17 in (facts.get("reg_links") or ()):
            try:
                _site17, _reg17, _src17, _clean17 = _lk17[0], _lk17[1], _lk17[2], _lk17[3]
            except (IndexError, TypeError):
                continue
            if not _clean17 or not isinstance(_src17, str) or not _src17.startswith("T:"):
                continue
            _reid17 = "R:%s:%s" % (_src17[2:], _reg17)
            if _reid17 in ents and _src17 in ents:
                un(_reid17, _src17, "reg_same_object")
                _c17_n += 1
    print("[C17] clean register == function this unions: %d" % _c17_n, flush=True)

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

    # ---- 布局补全：用「已二进制定类」簇的观测补全该类的成员表 ----
    # 身份来自 C4/C15（装表/槽位），簇内观测来自同一对象 -> 这些偏移就是该类的真实成员。
    # 实测：986 条观测的大簇，最好的类也只覆盖 302 条 —— 声明布局缺了约 70% 的真实成员，
    # C1/C18 的判别力因此被系统性削弱。
    _lay_add = 0
    _lay_cls = set()
    for _cl in clusters:
        _exs = _cl.get("exact") or {}
        if len(_exs) != 1:
            continue
        _ci = next(iter(_exs))
        _lay_cls.add(_ci)
        for (_o, _w) in (_cl.get("obs") or ()):
            if _o not in U["members"][_ci]:
                U["members"][_ci][_o] = _w
                _lay_add += 1
    if _lay_add:
        for _i in range(n):
            if not U["has_layout"][_i]:
                continue
            _iv = []
            for _off, _w2 in U["members"][_i].items():
                _ww = _w2 if isinstance(_w2, int) and _w2 > 0 else 4
                _iv.append((_off, _off + _ww))
            _iv.sort()
            _mg = []
            for _a, _b in _iv:
                if _mg and _a <= _mg[-1][1]:
                    if _b > _mg[-1][1]:
                        _mg[-1] = (_mg[-1][0], _b)
                else:
                    _mg.append((_a, _b))
            intervals[_i] = _mg
        c1_cache.clear()
        c1_range_cache.clear()
    print("[layouts] cluster-obs completion: %d members added across %d classes"
          % (_lay_add, len(_lay_cls)), flush=True)
    ALL_EXACT_CLASSES = {ci for cl in clusters for ci in cl["exact"]}

    # ---------------- 求解 ----------------
    _c1_exempt = set()    # 冲突消解台账：C1 证据被驳倒的簇 root（簇局部豁免）

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
            if cl.get("root") in _c1_exempt:
                m_c1 = FULL     # 冲突消解：该簇的 C1 证据已被驳倒（见消解台账）
            m_c1 = _pfm(m_c1)   # proven universe：幻影类从 C1 掩码剔除
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
                masks[f] = _pfm(mf) if hit else FULL   # proven universe：逐族剔除
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
            "dom_sizes": {(cl.get("root") if isinstance(cl, dict) else str(cl)): m.bit_count()
                          for (cl, m) in constrained},
            "dom_names": {(cl.get("root") if isinstance(cl, dict) else str(cl)):
                          [names[i] for i in range(n) if (m >> i) & 1][:64]
                          for (cl, m) in constrained if 0 < m.bit_count() <= 64},
            "dom_ents": {(cl.get("root") if isinstance(cl, dict) else str(cl)):
                         list(cl.get("ents") or [])[:6]
                         for (cl, m) in constrained if 0 < m.bit_count() <= 64},
            "cluster_obs": {(cl.get("root") if isinstance(cl, dict) else str(cl)):
                            sorted(cl.get("obs") or [])
                            for (cl, m) in constrained},
            "assign_map": {((_cl.get("root") if isinstance(_cl, dict) else str(_cl))): _c
                           for _cl, _c in (assign or {}).items()},
            "constrained_sample": [type(constrained[0][0]).__name__ if constrained else "none",
                                   (constrained[0][0] if constrained else None)],
        }

    # ---------------- C9：vtable 槽位归属（函数 -> 拥有它的类）----------------
    # 二进制事实：若函数 F 出现在类 C 的某个 vtable 槽上，则 F 的 this 必为
    # C 或其后代。这是**正向**槽位证据（C3 只检查"接收者类拥有该槽"，未反查
    # "该函数属于哪个类的槽"）。实测在域 7-64 的宽簇里有 315/1350 命中。
    _AUTH_PATH = os.path.join(ROOT, "anchors", "vtable_slot_authority.json")
    _ALIGN_PATH = os.path.join(ROOT, "anchors", "class_name_align.json")
    c9_owner = {}
    if os.path.exists(_AUTH_PATH):
        _auth = jload(_AUTH_PATH)
        _align = (jload(_ALIGN_PATH, {}) or {}).get("rtti_to_canon") or {}
        for _cls, _v in _auth.items():
            _k = _cls[1:] if _cls.startswith(".") else _cls
            _canon = (_align.get(_k) or {}).get("canon") or _cls
            _ci = resolve(_canon)
            if _ci is None:
                continue
            for _idx, _s in (_v.get("slots") or {}).items():
                _a = (_s or {}).get("addr")
                if not _a:
                    continue
                try:
                    _fa = int(str(_a), 16)
                except ValueError:
                    continue
                c9_owner[_fa] = c9_owner.get(_fa, 0) | (1 << _ci)
        for _eid in list(ents.keys()):
            if not _eid.startswith("T:"):
                continue
            try:
                _fn = int(_eid[2:], 16)
            except ValueError:
                continue
            _m9 = c9_owner.get(_fn)
            if not _m9:
                continue
            _allowed9 = 0
            for _ci9 in range(n):
                if (_m9 >> _ci9) & 1:
                    _allowed9 |= allowed_of(_ci9)
            if _allowed9:
                fam["C9"][_eid] = fam["C9"].get(_eid, FULL) & _allowed9
                census["C9"] += 1
        # C9 是二进制事实（该函数确实被登记在那些类的 vtable 槽上）；
        # C2 的 pin 来自函数名/原型推断。二者不相交时以 C9 为准，丢弃 C2 pin。
        c2_refuted_by_slot = 0
        for _eid9, _m9v in list(fam["C9"].items()):
            _m2v = fam["C2"].get(_eid9)
            if _m2v is None:
                continue
            if (_m2v & _m9v) == 0:
                fam["C2"][_eid9] = FULL
                c2_pin_log.setdefault(_eid9, []).append(["refuted_by_slot_owner", "", ""])
                c2_refuted_by_slot += 1
        print("[C9] C2 pins refuted by slot ownership: %d" % c2_refuted_by_slot, flush=True)

        # C9 自身的边界：若某实体的 C9 掩码与 C1（成员访问）完全不相交，
        # 说明该函数的 vtable 槽归属来自错误分表（实测 20/15544）。此时
        # 保留成员证据、丢弃 C9（二进制分表比"访问偏移"更易出错）。
        c9_dropped = 0
        def _member_covers(ci, o, w):
            mem = U["members"][ci] or {}
            for off, mw in mem.items():
                if off <= o and (mw is None or o + w <= off + (mw or 4)):
                    return True
            return False
        for _eid9b in list(fam["C9"].keys()):
            _m9b = fam["C9"][_eid9b]
            _obs = (ents.get(_eid9b) or {}).get("obs") or set()
            if not _obs:
                continue
            # 只要该掩码里**存在**一个类能覆盖全部观测，就保留（掩码本身是并集语义）
            _ok9 = any(
                all(_member_covers(ci, o, (w or 4)) for (o, w) in _obs)
                for ci in range(n) if (_m9b >> ci) & 1
            )
            if not _ok9:
                del fam["C9"][_eid9b]
                c9_dropped += 1
        print("[C9] dropped (owner class lacks the observed members): %d" % c9_dropped, flush=True)

        # C9 若与其他所有族（C2..C8）的交集为空，说明它与既有证据直接冲突，
        # 此时丢弃 C9（保留其他族）。这是 C9 的最后一道自洽门。
        c9_dropped2 = 0
        for _eid in list(fam["C9"].keys()):
            _mm = fam["C9"][_eid]
            for _f9 in FAMILIES:
                if _f9 in ("C1", "C9"):
                    continue
                _o9 = fam[_f9].get(_eid)
                if _o9 is not None:
                    _mm &= _o9
            if _mm == 0:
                del fam["C9"][_eid]
                c9_dropped2 += 1
        print("[C9] dropped (empty intersection with other families): %d" % c9_dropped2, flush=True)

    # ---------------- C11：成员链三向类型约束 ----------------
    # 对 this->member@NN 生成的子对象实体 M，三者互为约束：
    #   容器类 c_C  ·  该 offset 的成员类型 pair[(c_C, NN)]  ·  子对象类 c_M
    # C++ 语义：成员静态类型是上界，故 c_M ⊑ pair[(c_C, NN)]（祖先或同类）。
    _member_pairs = {}
    _n_layout_pairs11 = 0
    _n_mt_pairs11 = 0
    try:
        _layouts11 = jload("tools/class_layouts.json", {}) or {}
        _mt11 = jload("anchors/member_types.json", {}) or {}
        def _nm11(t):
            t = re.sub(r"\bconst\b", "", str(t or "")).replace("*", "").replace("&", "").strip()
            return t
        def _rs11(n):
            if n in _layouts11:
                return n
            b = n.split("<")[0].strip()
            return b if b in _layouts11 else None
        for _cn, _rec11 in _layouts11.items():
            for _off11, _m11 in ((_rec11.get("offsets") or {}) if isinstance(_rec11, dict) else {}).items():
                _tn = _rs11(_nm11((_m11 or {}).get("type")))
                _ci11 = resolve(_cn); _ti11 = resolve(_tn) if _tn else None
                if _ci11 is not None and _ti11 is not None:
                    _member_pairs[(_ci11, int(_off11))] = _ti11
                    _n_layout_pairs11 += 1
        _n_after_layouts11 = len(_member_pairs)
        # 键解析容错：+0x / +0X 前缀、大小写十六进制、模板名（.* 贪婪已覆盖 @/$）
        _rx11 = re.compile(r"^(.*)\+0[xX]([0-9A-Fa-f]+)$")
        for _k11, _v11 in _mt11.items():
            _mm11 = _rx11.match(_k11)
            if not _mm11:
                continue
            _ci11 = resolve(_mm11.group(1))
            _tn = _rs11(_nm11((_v11 or {}).get("type")))
            _ti11 = resolve(_tn) if _tn else None
            if _ci11 is not None and _ti11 is not None:
                _member_pairs.setdefault((_ci11, int(_mm11.group(2), 16)), _ti11)
        _n_mt_pairs11 = len(_member_pairs) - _n_after_layouts11
    except Exception:
        _member_pairs = {}

    # ---- B：二进制派生成员类型 ----
    # 人肉鉴定依据「+0xNN 处存的是 X 类」。声明侧（layouts/member_types）之外，
    # 从事实侧补全：容器函数有 C15/C4 EXACT 类（exact["T:fn"] 唯一且同源），
    # 且该 M 子对象实体的族掩码交集为单类（= class(M) 被既有证据精确钉死）
    # → (容器类, offset) -> 子对象类 是二进制事实。
    # 仅 this 链（M:<fn>:this:<off>）——参数链偏移相对形参对象，不并入容器成员表。
    # 注：M 子对象实体从不携带也从不并入 exact[] 身份（实测 3,669 个 M 实体
    # 0 个与 exact 载体同簇），故「class(M) 本身精确」的可用口径 = 族掩码单点域。
    # ---- B：二进制派生成员类型 ----
    # 人肉鉴定依据「+0xNN 处存的是 X 类」。声明侧（layouts/member_types）之外，
    # 从事实侧补全：容器函数有 C15/C4 EXACT 类（exact["T:fn"] 唯一且同源），且
    # class(M) 被既有证据唯一钉死。class(M) 的可用机械口径（按序尝试）：
    #   (d) M 实体所属簇的全族掩码交集为单类；
    #   (c) 子对象观测的 C1 布局覆盖唯一。
    # 仅 this 链——参数链偏移相对形参对象，不并入容器成员表。
    # ⚠ 实测（2026-10-30）：M 实体进 C11 时**零类证据**——exact[] 只挂 T:/G:、
    # 各族掩码不写 M:、C1 覆盖从不成单点（3,457 个 M:this 中 0 命中）。M 的类
    # 只能由 C11 传播（消费 member_pairs）导出，故本通道目前结构性为空
    # （binary_derived=0）；保留实现：未来任何族开始给 M: 实体供证据时自动生效。
    _n_binary_pairs11 = 0
    _fn_exact11 = {}
    for _a11, _lst11 in exact.items():
        if not _a11.startswith("T:"):
            continue
        _cls11 = set()
        for _ci11, _s11 in _lst11:
            if _s11.startswith(("C4", "C15")):
                _cls11.add(_ci11)
        if len(_cls11) == 1:
            _fn_exact11[_a11] = next(iter(_cls11))
    _clu_of_ent11 = {}
    for _cl11x in clusters:
        for _e11x in _cl11x.get("ents") or ():
            _clu_of_ent11[_e11x] = _cl11x
    for _eid11b in ents:
        if not _eid11b.startswith("M:"):
            continue
        _p11b = _eid11b.split(":")
        if len(_p11b) != 4 or _p11b[2] != "this":
            continue
        _cc11b = _fn_exact11.get("T:%s" % _p11b[1])
        if _cc11b is None:
            continue
        _clu11 = _clu_of_ent11.get(_eid11b)
        _obs11 = sorted(_clu11.get("obs") or set()) if _clu11 else []
        _mm11s = FULL
        _hit11 = False
        for _e11y in (_clu11.get("ents") or ()) if _clu11 else ():
            for _f11x in FAMILIES:
                if _f11x in ("C1", "C11"):
                    continue
                _x11 = fam[_f11x].get(_e11y)
                if _x11 is not None:
                    _mm11s &= _x11
                    _hit11 = True
        _c1m11 = c1_mask(_obs11) if _obs11 else FULL
        _cls_cd = _mm11s.bit_length() - 1 if (_hit11 and 0 != _mm11s != FULL
                                              and _mm11s.bit_count() == 1) else None
        _cls_c1 = _c1m11.bit_length() - 1 if (_obs11 and 0 != _c1m11 != FULL
                                              and _c1m11.bit_count() == 1) else None
        try:
            _off11b = int(_p11b[3], 16)
        except ValueError:
            try:
                _off11b = int(_p11b[3])
            except ValueError:
                continue
        for _src_cls in (_cls_cd, _cls_c1):
            if _src_cls is None:
                continue
            if (_cc11b, _off11b) not in _member_pairs:
                _member_pairs[(_cc11b, _off11b)] = _src_cls
                _n_binary_pairs11 += 1
    print("[C11] member-type sources: layouts=%d member_types=%d binary_derived=%d total=%d"
          % (_n_layout_pairs11, _n_mt_pairs11, _n_binary_pairs11, len(_member_pairs)),
          flush=True)
    print("[C11] class-typed member evidence: %d (class,offset) pairs, %d classes"
          % (len(_member_pairs), len({c for c, _ in _member_pairs})), flush=True)

    _desc_c11 = {}
    def _desc_mask11(ci):
        m = _desc_c11.get(ci)
        if m is None:
            m = 1 << ci
            for d in U["desc"][ci]:
                m |= (1 << d)
            _desc_c11[ci] = m
        return m

    _m_links = []          # (M 实体, 容器实体, offset)
    for _eid11 in ents:
        if not _eid11.startswith("M:"):
            continue
        _p11 = _eid11.split(":")
        if len(_p11) != 4:
            continue
        try:
            _off11 = int(_p11[3], 16)
        except ValueError:
            try:
                _off11 = int(_p11[3])
            except ValueError:
                continue
        _w11 = _p11[2]
        _cont = ("P:%s:param%s" % (_p11[1], _w11[1:])) if _w11.startswith("p") else ("T:%s" % _p11[1])
        if _cont in ents:
            _m_links.append((_eid11, _cont, _off11))
    print("[C11] member-chain links (M -> container): %d" % len(_m_links), flush=True)

    if _m_links:
        _dom11 = {}
        for _e11 in set([x[0] for x in _m_links] + [x[1] for x in _m_links]):
            _m11 = FULL
            for _f11 in FAMILIES:
                if _f11 == "C11":
                    continue
                _fm11 = fam[_f11].get(_e11)
                if _fm11 is not None:
                    _m11 &= _fm11
            _dom11[_e11] = _m11
        _c11_steps = 0
        for _round in range(8):
            _chg = 0
            for _mk, _ck, _off in _m_links:
                _dm = _dom11.get(_mk, FULL)
                _dc = _dom11.get(_ck, FULL)
                # 子对象必须是容器该成员静态类型的后代（或同类）
                _allowed_m = 0
                _has_ev = False
                _x = _dc
                while _x:
                    _b = _x & -_x; _x ^= _b
                    _ci = _b.bit_length() - 1
                    _t = _member_pairs.get((_ci, _off))
                    if _t is None:
                        continue
                    _has_ev = True
                    _allowed_m |= _desc_mask11(_t)
                if _has_ev:
                    _nm = _dm & _allowed_m
                    if _nm != _dm and _nm != 0:
                        _dom11[_mk] = _nm; _dm = _nm; _chg += 1
                # 反向：容器必须有一个候选类，其该成员类型能与子对象候选相容
                _allowed_c = 0
                _x = _dc
                while _x:
                    _b = _x & -_x; _x ^= _b
                    _ci = _b.bit_length() - 1
                    _t = _member_pairs.get((_ci, _off))
                    if _t is None:
                        _allowed_c |= _b        # 无证据的类不排除（稀疏布局）
                    elif (_desc_mask11(_t) & _dm):
                        _allowed_c |= _b
                _nc = _dc & _allowed_c
                if _nc != _dc and _nc != 0:
                    _dom11[_ck] = _nc; _chg += 1
            _c11_steps += _chg
            if not _chg:
                break
        _c11_empty = 0
        for _e11, _mm in _dom11.items():
            if _mm == 0:
                _c11_empty += 1
                continue
            if _mm != FULL:
                fam["C11"][_e11] = fam["C11"].get(_e11, FULL) & _mm
        print("[C11] propagated (%d narrowing steps), entities constrained: %d, emptied: %d"
              % (_c11_steps, len(fam["C11"]), _c11_empty), flush=True)

    # ---------------- C10：调用图子类型约束（AC-3 传播到不动点）----------------
    # 用户裁定：函数名默认是错的，不能作为类身份锚。
    # 唯一可靠的调用语义是：若 caller 把自己的 this 传给 callee 作为 this，
    # 则 class(callee) 必须是 class(caller) 的**祖先或同类**（子类型关系）。
    # 以二进制锚（C4 装表 / C9 槽位 / C8 全局）为种子，在 7,113 条 this 传递边
    # 上做弧相容传播，直到不再收窄。这是一次性求解的一部分，不改变任何证据。
    _anc_mask_cache = {}
    _desc_mask_cache = {}
    def _anc_mask(ci):
        m = _anc_mask_cache.get(ci)
        if m is None:
            m = 1 << ci
            for a in U["anc"][ci]:
                m |= (1 << a)
            _anc_mask_cache[ci] = m
        return m
    def _desc_mask(ci):
        m = _desc_mask_cache.get(ci)
        if m is None:
            m = 1 << ci
            for d in U["desc"][ci]:
                m |= (1 << d)
            _desc_mask_cache[ci] = m
        return m

    # 域→祖先/后代并集缓存（纯性能：边数扩大后逐位循环是热点；语义与内联展开一致）
    _anc_union_cache = {}
    _desc_union_cache = {}
    def _anc_union(m):
        r = _anc_union_cache.get(m)
        if r is None:
            r = 0
            _x = m
            while _x:
                _b = _x & -_x; _x ^= _b
                r |= _anc_mask(_b.bit_length() - 1)
            _anc_union_cache[m] = r
        return r
    def _desc_union(m):
        r = _desc_union_cache.get(m)
        if r is None:
            r = 0
            _x = m
            while _x:
                _b = _x & -_x; _x ^= _b
                r |= _desc_mask(_b.bit_length() - 1)
            _desc_union_cache[m] = r
        return r

    # 洁净寄存器到达定义（facts.reg_links = [addr, reg, src, clean]）
    _clean_reg = {}
    _site_src = {}   # (调用点, 寄存器) -> 该点寄存器的到达定义来源实体
    if facts:
        for _lk in (facts.get("reg_links") or ()):
            try:
                _clean_reg[(int(_lk[0]), _lk[1])] = bool(_lk[3])
                if len(_lk) >= 3 and _lk[2]:
                    _site_src[(int(_lk[0]), _lk[1])] = _lk[2]
            except (IndexError, TypeError, ValueError):
                pass
    # 边源扩展（X520 CHANGE B）：此前只收能落到 ents 实体上的源（G:/M:），
    # 污染寄存器边被显式丢弃、洁净寄存器边/栈槽则在实体成员检查处静默死亡
    # （R:/S: 实体从不入 ents）。现把寄存器/栈槽/全局源全部纳入为**连接点**：
    # 所有边仍只是**子类型约束** class(callee) ⊒ class(caller)，绝不并实体/等式。
    # 分类口径：
    #   clean_reg : 洁净寄存器到达定义（:this 直传同桶；V: 槽体维持基线剔除）
    #   dirty_reg : 寄存器到达定义跨 call / 经控制流汇合 —— 纳入，仍只作子类型约束
    #   global    : offset / dword_ / off_ / g_ / stru_ 前缀 → G: 实体
    #   stack     : stack_+0xNN → S: 实体（按指令地址作用域化）
    #   .member(  : 成员链实体归 C11，此处跳过不重复约束
    _GLOBAL_PREF = ("offset ", "dword_", "off_", "g_", "stru_")
    _c10_n_clean = _c10_n_dirty = _c10_n_global = _c10_n_stack = 0
    _c16_param_edges = 0      # C16：目标为被调方参数的 this 传递边（只进 Phase 2）
    _c10_nodes = set()                # G:/S: 连接点实体（可不在 ents；不并簇）
    _call_edges = []
    _call_edges_p1 = []               # Phase 1：洁净寄存器边
    _call_edges_p2 = []               # Phase 2：dirty/global/stack 边（只增不减）
    for _e in raw:
        if _e.get("type") != "CALL_ARG":
            continue
        _fr, _to = _e.get("from"), _e.get("to")
        if not (isinstance(_fr, str) and isinstance(_to, str)):
            continue
        _is_param_target = "::param" in _to
        if not (_to.endswith(":this") or _is_param_target):
            continue
        _ce = ent_id(_to)
        if not (_ce and _ce in ents):
            continue
        if _is_param_target:
            _c16_param_edges += 1
        # ---- Phase 1 判定 = 改前（HEAD）C10 的精确边语义 ----
        #   :this 直传 → ent_id(_fr)；其余源按指令地址作用域化 ent_id(_fr, fn)，
        #   dirty（clean flag False）丢弃；**双端都必须在 ents** 才保留。
        #   （R:/S: 实体从不入 ents → 基线实际只收 T:/M:/G: 落 ents 的边。）
        _cc_leg = None
        if _is_param_target:
            pass                  # C16：参数目标不进 Phase 1（p1 必须与 HEAD 逐边一致）
        elif _fr.endswith(":this"):
            _cc_leg = ent_id(_fr)
        else:
            try:
                _ea_leg = int(str(_e.get("addr")), 16)
            except (TypeError, ValueError):
                _ea_leg = None
            if _ea_leg is not None and _clean_reg.get((_ea_leg, _fr)) is not False:
                _cc_leg = ent_id(_fr, fn_at(_ea_leg))
        if _cc_leg and _cc_leg in ents and _cc_leg != _ce:
            # 基线边：改前 C10 本就保留（T:/M:/G:/P: 等落 ents 且非 dirty）→ Phase 1，
            # 语义照旧。此处先于新分类返回，保证 p1 集合与 HEAD 逐边一致。
            _call_edges.append((_cc_leg, _ce))
            _call_edges_p1.append((_cc_leg, _ce))
            continue
        # ---- 新分类（X520 CHANGE B）：寄存器/栈槽/全局源全部纳入为连接点 ----
        if ".member(" in _fr:
            continue                  # C11 已覆盖成员链，重复约束无增益
        _cc, _kind = None, None
        if _fr.endswith(":this"):
            _cc, _kind = ent_id(_fr), "clean"
        elif _fr in REGS:
            # 调用方的 this 以**寄存器**形式出现（ecx/esi/...）。
            # 优先用该调用点上寄存器的**到达定义来源**（facts.reg_links）：
            # 同一点上它装的就是那个对象，比整函数聚合的 R:<fn>:<reg> 精确得多。
            try:
                _ea = int(str(_e.get("addr")), 16)
            except (TypeError, ValueError):
                continue
            _srcreg = _site_src.get((_ea, _fr))
            if _srcreg and _srcreg in ents:
                _cc = _srcreg
                _kind = "clean"
            else:
                _cc = ent_id(_fr, fn_at(_ea))
                _kind = "dirty" if _clean_reg.get((_ea, _fr)) is False else "clean"
        elif _fr.startswith(_GLOBAL_PREF):
            if _fr.startswith("offset "):
                _cc = ent_id(_fr)                   # ent_id 内部走 global_addr(s[7:])
            else:
                _ga = global_addr(_fr)
                _cc = ("G:%X" % _ga) if _ga is not None else None
            _kind = "global"
        elif _fr.startswith("stack_+"):
            try:
                _ea = int(str(_e.get("addr")), 16)
            except (TypeError, ValueError):
                continue
            _cc = ent_id(_fr, fn_at(_ea))           # S:%X:<slot>
            _kind = "stack"
        else:
            continue
        if not (_cc and _cc != _ce):
            continue
        if _cc not in ents:
            if _cc.startswith("V:"):
                continue      # vtable_slot 实体被 touch 有意排除；且 V:N 把所有类
                              # 的同号槽收进一个枢纽（slot 语义只在同一 vtable 内
                              # 成立），跨类连接会注入错误约束——维持基线剔除
            # R:/S:/G: 连接点：只参与子类型传播，不进 ents/fam/簇（不并实体）
            _c10_nodes.add(_cc)
        _call_edges.append((_cc, _ce))
        _call_edges_p2.append((_cc, _ce))         # 新增边（Phase 2，只增不减）
        if _kind == "clean":
            _c10_n_clean += 1
        elif _kind == "dirty":
            _c10_n_dirty += 1
        elif _kind == "global":
            _c10_n_global += 1
        else:
            _c10_n_stack += 1
    print("[C10] edges: clean_reg=%d dirty_reg=%d global=%d stack=%d total=%d "
          "(p1_baseline=%d p2_new=%d)"
          % (_c10_n_clean, _c10_n_dirty, _c10_n_global, _c10_n_stack,
             len(_call_edges), len(_call_edges_p1), len(_call_edges_p2)), flush=True)

    print("[C16] param edges=%d (this-target edges=%d)"
          % (_c16_param_edges, len(_call_edges) - _c16_param_edges), flush=True)

    if _call_edges:
        # 除 C10 外全部族的合并域（初始证据；C10 跳过避免自污染）
        def _c10_base_dom(_edges):
            _d = {}
            for _eid in set([a for a, _ in _edges] + [b for _, b in _edges]):
                _m = FULL
                for _f in FAMILIES:
                    if _f == "C10":
                        continue
                    _fm = fam[_f].get(_eid)
                    if _fm is not None:
                        _m &= _fm
                _d[_eid] = _m
            return _d

        # AC-3 传播到不动点；_skip_empty=True 时拒绝把非空域清空的更新
        #（Phase 2 只增不减：dirty/global/stack 边不得抹掉 Phase 1 已建立的约束）
        def _c10_propagate(_edges, _dom, _skip_empty):
            _steps = _skipped = 0
            for _round in range(12):
                _chg = 0
                for _cc, _ce in _edges:
                    _mc = _dom.get(_cc, FULL)
                    _me = _dom.get(_ce, FULL)
                    # callee 必须是 caller 的祖先（或同类）
                    _allowed_e = _anc_union(_mc)
                    _new_e = _me & _allowed_e
                    if _new_e != _me:
                        if _skip_empty and _new_e == 0:
                            _skipped += 1
                        else:
                            _dom[_ce] = _new_e; _chg += 1
                            _me = _new_e
                    # 反向：caller 必须是 callee 的后代（或同类）
                    _allowed_c = _desc_union(_me)
                    _new_c = _mc & _allowed_c
                    if _new_c != _mc:
                        if _skip_empty and _new_c == 0:
                            _skipped += 1
                        else:
                            _dom[_cc] = _new_c; _chg += 1
                _steps += _chg
                if not _chg:
                    break
            return _steps, _skipped

        # ---- Phase 1：基线边（HEAD 语义逐字复刻，空域守卫不变）----
        _dom1 = _c10_base_dom(_call_edges_p1)
        _p1_steps, _p1_skipped = _c10_propagate(_call_edges_p1, _dom1, _skip_empty=False)
        _c10_p1_constrained = _c10_p1_emptied = 0
        _p1_committed = {}
        for _eid, _m in _dom1.items():
            if _eid not in ents:
                continue      # R:/S:/G: 连接点只作传播中介，不写族表、不进簇、不计数
            if _m == 0:
                # 传播把域清空 = 该实体的调用边互相矛盾（假边/错误锚），
                # 不写入 C10（保留其它族证据），并计数。
                _c10_p1_emptied += 1
                continue
            if _m != FULL:
                fam["C10"][_eid] = fam["C10"].get(_eid, FULL) & _m
                _p1_committed[_eid] = _m
                _c10_p1_constrained += 1
        print("[C10] phase1 edges=%d constrained=%d emptied=%d"
              % (len(_call_edges_p1), _c10_p1_constrained, _c10_p1_emptied), flush=True)

        # ---- Phase 2：新增边 dirty/global/stack/连接点（从 Phase-1 域出发，只增不减）----
        _dom2 = dict(_dom1)
        for _eid, _m in _c10_base_dom(_call_edges_p2).items():
            if _eid not in _dom2:
                _dom2[_eid] = _m
        _p2_steps, _p2_skipped = _c10_propagate(_call_edges_p2, _dom2, _skip_empty=True)
        _c10_p2_added = 0
        for _eid, _m in _dom2.items():
            if _eid not in ents:
                continue
            if _m == 0:
                continue          # Phase-1 已清空的实体保持不受约束，Phase 2 不复活
            if _m != FULL:
                _had = _eid in _p1_committed and _p1_committed[_eid] == _m
                fam["C10"][_eid] = fam["C10"].get(_eid, FULL) & _m
                if not _had:
                    _c10_p2_added += 1
        print("[C10] phase2 edges=%d added_constraints=%d skipped_empty=%d"
              % (len(_call_edges_p2), _c10_p2_added, _p2_skipped), flush=True)
        print("[C10] total entities constrained=%d" % len(fam["C10"]), flush=True)

        # C1 证据剔除（X159 地址级）后若出现孤立冲突：该簇的观测不足以支持任何类，
        # 按"证据不足"处理——把它从约束集合中移出（记入 free），而不是留作冲突。
        _obs_dropped = set()
        for _e in raw:
            if _e.get("type") != "MEMBER_ACCESS":
                continue
            if _e.get("addr") and ("0x%08X" % int(str(_e["addr"]), 16)) in dropped_addr:
                _obs_dropped.add(str(_e.get("base")))
        print("[C1] entities with dropped observations: %d" % len(_obs_dropped), flush=True)
        print("[C9] evidence=%d entities=%d (slot-owner functions: %d)"
              % (census["C9"], len(fam["C9"]), len(c9_owner)), flush=True)

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
            ents_touched = len(fam[f]) + (exact_count[f] if f in ("C4", "C8", "C15") else 0)
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

    # ---------------- 冲突消解（weakest-evidence drop，X520 CHANGE A）----------------
    # 模型：本求解器回答「一致约束集下的最少类数」。簇交域为空 = 约束集含矛盾
    # 证据，解未定义——把矛盾继续留在结果里是 bug 不是诚实。处置：对该簇按
    # provenance 强弱丢弃最弱贡献族的掩码（CSP 等价于「该证据被驳倒」），
    # 重算交域直到非空；每次丢弃逐条记入 anchors/minclass_conflict_resolution.json
    # 台账（可审计、可回滚）。只动本簇的实体掩码——簇按并查集划分实体，互不泄漏。
    # 消解后仍有冲突 → 求解未定义，硬失败退出。
    _PROV_RANK = ("C4", "C9", "C8", "C5", "C6", "C3", "C1", "C11", "C10", "C2", "C7", "C15")
    _res_ledger = []
    _res_rounds = 0
    while True:
        res_probe = solve(all_fams)
        _empt = [d for d in res_probe["conflicted"] if "empty_domain" in d[4]]
        if not _empt or _res_rounds >= 64:
            break                       # 无可消解冲突 / 防御上限
        _res_rounds += 1
        _n_drops = 0
        for _cl, _m0, _ex, _exs, _fl in _empt:
            # 与 cluster_domains 同口径的该簇各族掩码（C1 始终参与）
            _fmasks = {"C1": (c1_mask(_cl["obs"]) if _cl["obs"] else FULL)}
            for _f in all_fams:
                if _f == "C1":
                    continue
                _mf, _hit = FULL, False
                for _eid in _cl["ents"]:
                    _x = fam[_f].get(_eid)
                    if _x is not None:
                        _mf &= _x
                        _hit = True
                _fmasks[_f] = _mf if _hit else FULL
            _inter = FULL
            for _f in all_fams:
                _inter &= _fmasks[_f]
            while not _inter:
                # 贡献族 = 掩码非 FULL 者；按 provenance 丢最弱（排名越后越弱）
                _contrib = [_f for _f in all_fams if _fmasks[_f] != FULL]
                if not _contrib:
                    break               # 全 FULL 交域不可能为空——防御
                _weak = max(_contrib,
                            key=lambda f: (_PROV_RANK.index(f) if f in _PROV_RANK
                                           else len(_PROV_RANK)))
                if _weak == "C1":
                    # C1 掩码由簇 obs 直接推导（c1_mask），不经 fam["C1"]——
                    # 簇局部豁免是「丢弃该簇 C1 证据」的唯一正确实现
                    _c1_exempt.add(_cl.get("root"))
                else:
                    for _eid in _cl["ents"]:        # 仅本簇实体 → 簇局部生效
                        if _eid in fam[_weak]:
                            fam[_weak][_eid] = FULL
                _fmasks[_weak] = FULL
                _inter = FULL
                for _f in all_fams:
                    _inter &= _fmasks[_f]
                _res_ledger.append({
                    "cluster": _cl.get("root"),
                    "dropped_family": _weak,
                    "remaining_families": [_f for _f in all_fams
                                           if _fmasks[_f] != FULL],
                    "domain_after": _inter.bit_count(),
                    "class_after": (names[_inter.bit_length() - 1]
                                    if _inter and _inter.bit_count() == 1 else None),
                })
                _n_drops += 1
        print("[conflict-resolve] round=%d empty_clusters=%d drops=%d"
              % (_res_rounds, len(_empt), _n_drops), flush=True)

    res = res_probe          # 循环退出时 res_probe 即最新丢弃后的求解结果，勿重复求解
    _unresolved = res["n_conflicts"]
    _lpath = os.path.join(ROOT, "anchors/minclass_conflict_resolution.json")
    with io.open(_lpath, "w", encoding="utf-8") as fh:
        json.dump(_res_ledger, fh, ensure_ascii=False, indent=1)
    print("[conflicts] unresolved=%d resolved=%d ledger=anchors/minclass_conflict_resolution.json"
          % (_unresolved, len(_res_ledger)), flush=True)
    if _unresolved:
        print("[conflicts] FATAL: %d conflicts remain after weakest-evidence drop "
              "(solve undefined)" % _unresolved, flush=True)
        sys.exit(2)

    # ---------------- 赋值规则：most-specific compatible class ----------------
    # K 由覆盖求解确定（chosen 不动）；这里只重选每簇的**报告类**。
    # 规则（EXACT 身份恒最优先）：
    #   0) EXACT（ctor/vtable/global 二进制身份）→ 恒保留；
    #   1) 簇无观测 → most-special 无意义（退化为"全宇宙最小类"，如 size=4 的
    #      ILocomotion 吸走全部无证据簇）→ 保留覆盖赋值（no_obs_kept）；
    #   2) 有观测簇的资格 = 候选按 C1 同款字节区间语义（covers()）覆盖**全部**
    #      观测；无一全覆盖 → 保留覆盖赋值（no_cover_kept）；
    #   3) 排序 = 成员精确命中数降序（成员表恰有该偏移且宽度 >= 观测宽度；
    #      仅被宽成员/外层数组"区间罩住"不算命中）→ eff_size 升序（0/None=+inf）
    #      → 成员数升序 → 字典序（确定性 tie-break）。
    def _exact_ci_of(_cl):
        _exs = {}
        for _ci, _ss in (_cl.get("exact") or {}).items():
            _kept = [s for s in (_ss or [])
                     if not (s.startswith("C4") and "C4" not in all_fams)
                     and not (s.startswith("C8") and "C8" not in all_fams)]
            if _kept:
                _exs[_ci] = _kept
        return next(iter(_exs)) if len(_exs) == 1 else None

    _strict_cov_cache = {}

    def _strict_cov_mask(o, w):
        """C1 同款 covers() 语义的严格覆盖掩码（不限 dense；跨簇缓存）。"""
        key = (o, w)
        msk = _strict_cov_cache.get(key)
        if msk is None:
            msk = 0
            for ci in range(n):
                if covers(ci, o, w):
                    msk |= (1 << ci)
            _strict_cov_cache[key] = msk
        return msk

    _old_assign = dict(res.get("assign") or {})
    _new_assign, _changed, _exact_kept = {}, 0, 0
    _chain_picks = 0
    _no_obs_kept, _no_cover_kept = 0, 0
    _ex_root, _ex_old, _ex_new = None, None, None
    for _ci_cl, (_cl, _m) in enumerate(res["constrained"]):
        _obs = sorted(_cl.get("obs") or set())
        _prev = _old_assign.get(_ci_cl)
        _exci = _exact_ci_of(_cl)
        if _exci is not None and (_m >> _exci) & 1:
            _pick = _exci
            _exact_kept += 1
        elif not _obs:
            _pick = _prev                    # 无观测：保留覆盖赋值
            _no_obs_kept += 1
        else:
            _elig = _m
            for (_o, _w) in _obs:
                _elig &= _strict_cov_mask(_o, _w if _w else 4)
                if not _elig:
                    break
            if not _elig:
                _pick = _prev                # 无候选全覆盖：保留覆盖赋值
                _no_cover_kept += 1
            else:
                _obs_l = [(_o, (_w if _w else 4)) for (_o, _w) in _obs]

                def _rank(_ci, _obs_l=_obs_l):
                    _mem = U["members"][_ci] or {}
                    _hits = 0
                    for (o, w) in _obs_l:
                        _mw = _mem.get(o)
                        if isinstance(_mw, int) and _mw >= w:
                            _hits += 1
                    _sz = U["eff_size"][_ci]
                    return (-_hits, int(_sz) if _sz else float("inf"),
                            len(_mem), names[_ci])

                _cands = [i for i in range(n) if (_elig >> i) & 1]
                # 链上取最大派生：若候选集构成一条继承链（存在一个元素是其余全部的后代），
                # 对象的最可能类就是链上最派生者 —— 拓扑事实，与名字/IDA 类型无关。
                _maxi = None
                for _ci in _cands:
                    if all(_ci == _cj or _cj in U["anc"][_ci] for _cj in _cands):
                        _maxi = _ci
                        break
                if _maxi is not None:
                    _pick = _maxi
                    _chain_picks += 1
                else:
                    _pick = min(_cands, key=_rank)
        if _pick is None:
            continue
        _new_assign[_ci_cl] = _pick
        if _prev != _pick:
            _changed += 1
            if _ex_new is None and _obs:     # top_example 必须是有观测簇
                _ex_root = (_cl.get("root") if isinstance(_cl, dict) else str(_cl))
                _ex_old, _ex_new = _prev, _pick
    print("[assign] chain-maximal picks=%d" % _chain_picks, flush=True)
    print("[assign] most-specific: changed=%d exact_kept=%d no_obs_kept=%d "
          "no_cover_kept=%d top_example=%s->%s"
          % (_changed, _exact_kept, _no_obs_kept, _no_cover_kept,
             _ex_root if _ex_root is not None else "none",
             ("%s->%s" % (names[_ex_old] if _ex_old is not None else "?",
                          names[_ex_new] if _ex_new is not None else "?"))
             if _ex_new is not None else "none"), flush=True)
    res["assign"] = _new_assign
    res["assign_map"] = {((_cl.get("root") if isinstance(_cl, dict) else str(_cl))): _c
                         for _cl, _c in _new_assign.items()}

    K, K_upper, LB = res["k"], res["k_upper"], res["lower_bound"]
    chosen, constrain, assign = res["chosen"], res["constrained"], res["assign"]
    if proven_keep is not None:
        # A：proven universe 的 K 对照——同一约束集，关掉掩码过滤重解一次。
        # fam 掩码本身从未被过滤（过滤只在 cluster_domains 求交处），
        # 故关掉即真实还原未剔除口径。
        _proven_cell[0] = FULL
        _res_was = solve(all_fams)
        _proven_cell[0] = _proven_mask
        _k_was = _res_was["k"]
    else:
        _k_was = None
    print("\n== FINAL ==")
    print("K_min=%d  K_upper(=K+conflicts)=%d  lower_bound=%d  constrained=%d free=%d "
          "conflicts=%d c1_gaps=%d exact_conflicts=%d unassigned=%d"
          % (K, K_upper, LB, len(constrain), res["free"], res["n_conflicts"],
             res["c1_gaps"], res["exact_conflicts"], len(constrain) - len(assign)),
          flush=True)
    if _k_was is not None:
        print("[universe] K_min with proven universe=%d (was %d)" % (K, _k_was),
              flush=True)
    # 覆盖口径：域大小=1 的簇数 / 受约束簇数；forced/narrow/wide 与 assignments
    # 写出器同阈值（=1 / 2..8 / >8）。
    _cov = collections.Counter()
    _uniq = 0
    for (_cl, _m) in constrain:
        _s = _m.bit_count()
        if _s == 1:
            _uniq += 1
            _cov["forced"] += 1
        elif _s <= 8:
            _cov["narrow"] += 1
        else:
            _cov["wide"] += 1
    _tot = len(constrain)
    print("[coverage] unique=%d total=%d pct=%.1f%%   (pct = unique-domain clusters / "
          "constrained clusters)  forced=%d narrow=%d wide=%d"
          % (_uniq, _tot, (100.0 * _uniq / _tot) if _tot else 0.0,
             _cov["forced"], _cov["narrow"], _cov["wide"]), flush=True)

    # 赋值释义：K 由覆盖求解确定；每簇报告类 = most-specific compatible class
    #（见上方 most-specific 规则），域内最特异布局胜出，EXACT 身份恒保留。
    assign = dict(_new_assign)

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
    if getattr(args, "dump_domains", False):
        dpath = os.path.join(ROOT, "anchors/minclass_domains.json")
        with io.open(dpath, "w", encoding="utf-8") as fh:
            json.dump(res["dom_sizes"], fh, ensure_ascii=False)
        print("[out] %s" % dpath, flush=True)
        apath = os.path.join(ROOT, "anchors/minclass_assignments.json")
        _asg = {}
        _ents = res.get("dom_ents") or {}
        # most-specific 赋值落到该文件（assign_map 键 = str(constrained 下标)）
        _roots_aw = [(c.get("root") if isinstance(c, dict) else str(c))
                     for (c, _m) in (res.get("constrained") or [])]
        _cls_by_root = {}
        for _kk, _cc in (res.get("assign_map") or {}).items():
            try:
                _ii = int(_kk)
            except (TypeError, ValueError):
                continue
            if 0 <= _ii < len(_roots_aw) and _cc is not None and 0 <= _cc < n:
                _cls_by_root[_roots_aw[_ii]] = names[_cc]
        for cl, nm in (res.get("dom_names") or {}).items():
            _asg[cl] = {"candidates": nm,
                        "ents": _ents.get(cl, []),
                        "class": _cls_by_root.get(cl),
                        "confidence": ("forced" if len(nm) == 1 else
                                       ("narrow" if len(nm) <= 8 else "wide"))}
        with io.open(apath, "w", encoding="utf-8") as fh:
            json.dump(_asg, fh, ensure_ascii=False, indent=0)
        print("[out] %s (%d assignments, forced=%d narrow=%d)"
              % (apath, len(_asg),
                 sum(1 for v in _asg.values() if v["confidence"] == "forced"),
                 sum(1 for v in _asg.values() if v["confidence"] == "narrow")), flush=True)
    # ---- 由解直接读出类布局（内容是解的输出，不是输入）----
    _assign = res.get("assign_map") or {}
    _obs = res.get("cluster_obs") or {}
    _roots = [(c.get("root") if isinstance(c, dict) else str(c))
              for (c, _m) in (res.get("constrained") or [])]
    # 只从「二进制锚支持」的簇派生（否则宽类会把无证据簇的观测吸进自己的布局）
    _bin_ctor = collections.defaultdict(set)
    for _a, _c in (jload("anchors/ctor_types.json", {}) or {}).items():
        try:
            _bin_ctor[int(_a, 16)].add(str(_c).replace("??_7", "").rstrip("@").split("::")[-1])
        except ValueError:
            pass
    for _a, _c in ((jload("anchors/structural_truth.json", {}) or {}).get("vtable_install") or {}).items():
        try:
            _bin_ctor[int(_a, 16)].add(str(_c).replace("??_7", "").rstrip("@").split("::")[-1])
        except ValueError:
            pass
    _bin_slot = collections.defaultdict(set)
    for _cls, _v in (jload("anchors/vtable_slot_authority.json", {}) or {}).items():
        for _ix, _sl in (_v.get("slots") or {}).items():
            _ad = (_sl or {}).get("addr")
            if not _ad:
                continue
            try:
                _bin_slot[int(str(_ad), 16)].add(_cls)
            except ValueError:
                pass

    def _bin_supported(_cls, _ents):
        for _e in _ents or []:
            if not _e.startswith("T:"):
                continue
            try:
                _fnx = int(_e[2:], 16)
            except ValueError:
                continue
            for _c in _bin_ctor.get(_fnx, ()):
                if _cls == _c or _cls.startswith(_c) or _c.startswith(_cls):
                    return True
            for _c in _bin_slot.get(_fnx, ()):
                if _cls == _c or _cls.startswith(_c) or _c.startswith(_cls):
                    return True
        return False

    _derived = {}
    for _k, _ci in _assign.items():
        try:
            _idx = int(_k)
        except (TypeError, ValueError):
            continue
        if not (0 <= _idx < len(_roots)):
            continue
        _root = _roots[_idx]
        if _ci is None or _ci < 0 or _ci >= n:
            continue
        _cname = names[_ci]
        if not _bin_supported(_cname, (res.get("dom_ents") or {}).get(_root, [])):
            continue
        _d = _derived.setdefault(_cname, {"members": set(), "clusters": 0})
        _d["clusters"] += 1
        for _o, _w in (_obs.get(_root) or []):
            _o = int(_o); _w = int(_w or 4)
            if _o > 4096:
                continue      # 伪偏移（提取噪声），不进入派生布局
            _d["members"].add((_o, _w))
    _dl = {}
    for _cname, _d in _derived.items():
        _ms = sorted(_d["members"])
        _dl[_cname] = {
            "member_count": len(_ms),
            "extent": (max(o + w for o, w in _ms) if _ms else 0),
            "clusters": _d["clusters"],
            "members": [[o, w] for o, w in _ms],
        }
    # 导出逐簇分配（供二进制锚过滤后的重新派生）
    _clusters = {}
    for _k, _ci in _assign.items():
        try:
            _idx = int(_k)
        except (TypeError, ValueError):
            continue
        if not (0 <= _idx < len(_roots)):
            continue
        if _ci is None or _ci < 0 or _ci >= n:
            continue
        _r = _roots[_idx]
        _clusters[_r] = {"class": names[_ci],
                         "obs": [[int(o), int(w or 4)] for o, w in (_obs.get(_r) or [])],
                         "ents": list((res.get("dom_ents") or {}).get(_r, []))}
    _cpath = os.path.join(ROOT, "anchors/minclass_clusters.json")
    with io.open(_cpath, "w", encoding="utf-8") as fh:
        json.dump(_clusters, fh, ensure_ascii=False, indent=0)
    print("[out] %s (%d clusters)" % (_cpath, len(_clusters)), flush=True)

    _dpath = os.path.join(ROOT, "anchors/derived_layouts.json")
    with io.open(_dpath, "w", encoding="utf-8") as fh:
        json.dump(_dl, fh, ensure_ascii=False, indent=0)
    print("[out] %s (%d classes, members derived from the solution)" % (_dpath, len(_dl)), flush=True)

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






