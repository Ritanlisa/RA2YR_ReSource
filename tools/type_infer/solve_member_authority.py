#!/usr/bin/env python3
"""X3: CSP 成员布局求解器 — MEMBER_ACCESS/PTR_ARITH 消费 + 成员权威表 + Q2 完整性检查。

任务上下文（.omo/plans/project-optimization.md X3; 用户裁决 Q1/Q2）:
  - Q1: gamemd.exe 二进制为唯一可信数据源 → X2 提取的 MEMBER_ACCESS/PTR_ARITH
    约束是成员布局的真值证据。本器在 CSP 引擎（type_map.json）之上求解
    每 (class, offset) → {size, type}，产出单一权威 anchors/member_authority.json。
  - Q2: 成员表不命中 = CSP 缺陷（非残差）。枚举类指针成员访问总体
    （(a) MEMBER_ACCESS / (b) ASSIGN member 变量 / (c) PTR_ARITH walked），
    每 (class, offset) 必须命中权威表；不命中 → 缺陷清单（驱动 X2 覆盖扩展
    或成员表修复）。

模式:
  --gate    GO/NO-GO 小规模类解析证明（不写权威表）:
            MA base=<func>:this 经 this 域解析类（type_map → ctor → structural），
            报告解析率 + 抽样切片。解析率低于阈值 → exit 1 并打印
            [BLOCKED: ...]（构建在沙上之前停止）。
  (默认)    全量求解 → anchors/member_authority.json + 证据报告。

类解析通道（全部确定性/二进制锚定，无投票/统计——2026-09-03 裁决）:
  ① type_map `<func>:this`（CSP 引擎 this 域解析结果——lattice 传播 + 锚定）
  ② anchors/ctor_types.json（vtable 安装二进制自证）
  ③ anchors/structural_truth.json（vtable_install / slot_this / this_pass）
  通道间类不一致且互为无关（lattice 非子类型）→ 记入冲突清单。

权威表组成（证据分层）:
  - member_access: MEMBER_ACCESS 行（X2 直接访问通道；width 有真值）
  - assign_this:   ASSIGN `<func>:this.member(0xN)` 变量（既有提取器成员访问）
  - assign_param0: ASSIGN `<func>::param0.member(0xN)` 变量
  类型: CSP 引擎对成员变量解出的 lattice 类型优先（多值经 lattice 合并），
  无则宽度推导原语（1→uint8_t / 2→uint16_t / 4→uint32_t）。

Q2 判定基线:
  - (a) MA 行: 类解析率（解析失败 = 缺陷 ii）+ 权威表自洽（构造性命中）。
  - (b) ASSIGN member: 对 binary_access 核心（MA 通道）命中率 —— 不命中 =
        X2 访问通道覆盖缺口（缺陷清单，驱动 X2 扩展）。
  - (c) PA walked: 对权威表（MA ∪ ASSIGN）命中/不命中 —— 不命中 =
        权威/extraction 缺口（缺陷 i：二进制 walk 证明成员存在，表中没有）。

命令:
  python tools/type_infer/solve_member_authority.py --gate
  python tools/type_infer/solve_member_authority.py
"""
import argparse
import hashlib
import json
import os
import re
import sys
import time
from collections import Counter, defaultdict

# ── repo paths ─────────────────────────────────────────────────────────────
_HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(_HERE))
CDIR = os.path.join(ROOT, "tools", "type_infer", "constraints")
RAW_JSON = os.path.join(CDIR, "raw_constraints.json")
RAW_RTTI = os.path.join(CDIR, "raw_constraints.rtti.json")
CALL_GRAPH = os.path.join(CDIR, "call_graph.json")
TYPE_MAP = os.path.join(ROOT, "type_map.json")
AUTHORITY = os.path.join(ROOT, "anchors", "member_authority.json")
EVID_DIR = os.path.join(ROOT, ".omo", "evidence", "optimization", "x3")
CLASS_LAYOUTS = os.path.join(ROOT, "tools", "class_layouts.json")
MEMBER_TYPES = os.path.join(ROOT, "anchors", "member_types.json")
CTOR_TYPES = os.path.join(ROOT, "anchors", "ctor_types.json")
STRUCTURAL = os.path.join(ROOT, "anchors", "structural_truth.json")
ALIGN = os.path.join(ROOT, "anchors", "class_name_align.json")

_PSEUDO = frozenset({"VOID_PTR", "TOP", "BOTTOM", "int", "float", "char*", "bool"})
# 格内标量具体度（lattice.py _PSEUDO_SPECIFICITY 同序）——确定性合并用
_PSEUDO_SPEC = {"int": 0, "float": 1, "char*": 2, "bool": 3}
_WIDTH_PRIM = {1: "uint8_t", 2: "uint16_t", 4: "uint32_t"}
# 类型 → 隐含字节宽（无 MA width 时 fallback）
_TYPE_IMPLIED_SIZE = {
    "bool": 1, "uint8_t": 1, "char": 1, "BYTE": 1,
    "uint16_t": 2, "short": 2, "WORD": 2,
    "int": 4, "uint32_t": 4, "float": 4, "char*": 4, "DWORD": 4,
}

_RE_THIS_MEMBER = re.compile(r"^(0x[0-9A-Fa-f]{8}):this\.member\(0x([0-9a-fA-F]+)\)$")
_RE_P0_MEMBER = re.compile(r"^(0x[0-9A-Fa-f]{8})::param0\.member\(0x([0-9a-fA-F]+)\)$")
_RE_MT_KEY = re.compile(r"^(.+)\+0x([0-9A-Fa-f]+)$")

DEFAULT_GATE_THRESHOLD = 0.80


def _iso(ts=None):
    return time.strftime("%Y-%m-%dT%H:%M:%S", time.localtime(ts if ts is not None else time.time()))


def sha256_file(path):
    h = hashlib.sha256()
    with open(path, "rb") as f:
        while True:
            b = f.read(1 << 22)
            if not b:
                break
            h.update(b)
    return h.hexdigest()


def log(*a):
    print(*a, flush=True)


class Solver:
    def __init__(self, constraints_path, evidence_dir):
        self.evidence_dir = evidence_dir
        os.makedirs(evidence_dir, exist_ok=True)
        log(f"[x3] loading constraints: {os.path.basename(constraints_path)}")
        with open(constraints_path, "r", encoding="utf-8") as f:
            data = json.load(f)
        self.constraints = data["constraints"]
        self.constraints_path = constraints_path
        kc = Counter(c.get("type") for c in self.constraints)
        self.kind_counts = {k: v for k, v in sorted(kc.items())}
        log(f"[x3] constraints: {len(self.constraints)} kinds={self.kind_counts}")
        self.ma_rows = [c for c in self.constraints if c.get("type") == "MEMBER_ACCESS"]
        self.pa_rows = [c for c in self.constraints if c.get("type") == "PTR_ARITH"]
        log(f"[x3] MEMBER_ACCESS={len(self.ma_rows)} PTR_ARITH={len(self.pa_rows)}")

        log("[x3] loading type_map / call_graph / anchors")
        with open(TYPE_MAP, "r", encoding="utf-8") as f:
            self.tm = json.load(f)["type_map"]
        with open(CALL_GRAPH, "r", encoding="utf-8") as f:
            self.call_graph = json.load(f).get("graph", {})
        with open(CLASS_LAYOUTS, "r", encoding="utf-8") as f:
            self.class_layouts = json.load(f)
        with open(MEMBER_TYPES, "r", encoding="utf-8") as f:
            self.member_types = json.load(f)
        with open(CTOR_TYPES, "r", encoding="utf-8") as f:
            self.ctor_types = json.load(f)
        with open(STRUCTURAL, "r", encoding="utf-8") as f:
            self.structural = json.load(f)
        with open(ALIGN, "r", encoding="utf-8") as f:
            align = json.load(f)
        self.r2c = align.get("rtti_to_canon", {})

        # lattice（层次/子类型）——只用确定性结构信息
        sys.path.insert(0, ROOT)
        from tools.type_infer.lattice import TypeLattice, VOID_PTR
        self.lattice = TypeLattice(CLASS_LAYOUTS)
        self._VOID_PTR = VOID_PTR
        self.valid_classes = set(self.lattice._ancestors.keys())
        log(f"[x3] valid classes (lattice): {len(self.valid_classes)}"
            f" class_layouts: {len(self.class_layouts)}")

        # 解析缓存
        self._func_cls_cache = {}
        self._func_conf_cache = {}
        self._var_cls_cache = {}
        self.resolution_stats = Counter()
        self.resolution_conflicts = []  # (func, {channel: class}) 互斥类

    # ── class resolution ──────────────────────────────────────────────────
    def canon_class(self, t):
        """type_map/member 类型名 → canon 类名（合法类集合内）；非类 → None。"""
        if not t or t in _PSEUDO or t in ("TOP", "BOTTOM"):
            return None
        if t in self.valid_classes:
            return t
        v = self.r2c.get(t)
        if isinstance(v, dict):
            c = v.get("canon")
            if c in self.valid_classes:
                return c
        return None

    def _ctor_lookup(self, iv):
        for cand in (f"0x{iv:x}", f"0x{iv:08x}"):
            v = self.ctor_types.get(cand)
            if v is not None:
                return v
        return None

    def _struct_lookup(self, iv):
        for ch in ("vtable_install", "slot_this", "this_pass"):
            m = self.structural.get(ch, {})
            for cand in (f"0x{iv:x}", f"0x{iv:08x}"):
                v = m.get(cand)
                if v is not None:
                    return ch, v
        return None, None

    def _pick_by_hierarchy(self, cands):
        """多个候选类（各通道）→ 确定性选择 + 冲突判定。

        互为子类型（同一条链）→ 取最深（ancestors 集最大；平票名字典序）。
        完全无关 → 记录冲突；选择仍确定性：深者优先，平票字典序。
        """
        cs = sorted(set(cands))
        if len(cs) == 1:
            return cs[0], False
        # 检查是否全部同链（存在一个最深者，其余均为其祖先）
        best = max(cs, key=lambda c: (len(self.lattice.ancestors_of(c)), c))
        all_anc = all(
            (c == best) or (c in self.lattice.ancestors_of(best))
            for c in cs)
        return best, (not all_anc)

    def _merge_member_classes(self, classes):
        """成员级多类证据合并（lattice 语义，确定性）。

        同链 → 最深（meet 语义：更具体证据胜出）。
        跨分支无关类 → lattice join 折迭（LCA 超类型——join 语义：存储接收
        多类值则持有公共祖先）；join == VOID_PTR（平行根）时保留最深并标冲突。
        """
        cs = sorted(set(classes))
        if len(cs) == 1:
            return cs[0], None
        best = max(cs, key=lambda c: (len(self.lattice.ancestors_of(c)), c))
        if all((c == best) or (c in self.lattice.ancestors_of(best)) for c in cs):
            return best, {"kind": "class_chain_multiple", "candidates": cs}
        t = cs[0]
        for c in cs[1:]:
            t = self.lattice.join(t, c)
        if t == self._VOID_PTR:
            return best, {"kind": "class_branches_unrelated", "candidates": cs,
                          "lca": "VOID_PTR"}
        return t, {"kind": "class_branches_lca", "candidates": cs, "lca": t}

    def resolve_func(self, fh):
        """函数 this 域类解析。返回 (class|None, channel)；结果缓存。"""
        if fh in self._func_cls_cache:
            return self._func_cls_cache[fh]
        cands = {}
        t = self.tm.get(fh + ":this")
        if t:
            self._func_conf_cache[fh] = t.get("confidence", "?")
            c = self.canon_class(t.get("type"))
            if c:
                cands["type_map"] = c
        else:
            self._func_conf_cache[fh] = "?"
        try:
            iv = int(fh, 16)
        except ValueError:
            iv = None
        if iv is not None:
            v = self._ctor_lookup(iv)
            if v:
                c = self.canon_class(v)
                if c:
                    cands["ctor"] = c
            ch, v = self._struct_lookup(iv)
            if v:
                c = self.canon_class(v)
                if c:
                    cands.setdefault(ch, c)
        if not cands:
            self._func_cls_cache[fh] = (None, None)
            return (None, None)
        cls, conflict = self._pick_by_hierarchy(cands.values())
        if conflict:
            self.resolution_conflicts.append(
                {"kind": "func", "key": fh, "channels": dict(sorted(cands.items())),
                 "chosen": cls})
        if "type_map" in cands:
            chan = "type_map"
        else:
            chan = sorted(cands)[0]
        self._func_cls_cache[fh] = (cls, chan)
        return (cls, chan)

    def resolve_var(self, var_name):
        """变量（如 `<func>::param0`）类解析：type_map 直接查。"""
        if var_name in self._var_cls_cache:
            return self._var_cls_cache[var_name]
        e = self.tm.get(var_name)
        c = self.canon_class(e.get("type")) if e else None
        self._var_cls_cache[var_name] = c
        return c

    # ── authority build ───────────────────────────────────────────────────
    def build_authority(self):
        members = {}  # (cls, off) -> entry

        def get_entry(cls, off):
            e = members.get((cls, off))
            if e is None:
                e = {
                    "class": cls, "offset": off,
                    "source_counts": Counter(),
                    "widths": Counter(),
                    "type_evidence": Counter(),
                    "funcs": set(),
                    "func_conf": Counter(),
                    "samples": [],
                }
                members[(cls, off)] = e
            return e

        def note_func(e, fh):
            e["funcs"].add(fh)
            e["func_conf"][self._func_conf_cache.get(fh, "?")] += 1

        # ── (a) MEMBER_ACCESS ──
        ma_unresolved = defaultdict(list)  # func -> [addrs]
        ma_rows_resolved = 0
        for c in self.ma_rows:
            fh = c["base"].split(":")[0]
            cls, chan = self.resolve_func(fh)
            if not cls:
                if len(ma_unresolved[fh]) < 6:
                    ma_unresolved[fh].append(c["addr"])
                continue
            ma_rows_resolved += 1
            off = int(c["offset"])
            e = get_entry(cls, off)
            e["source_counts"]["member_access"] += 1
            e["widths"][int(c["width"])] += 1
            note_func(e, fh)
            if len(e["samples"]) < 6:
                e["samples"].append({"func": fh, "addr": c["addr"], "w": int(c["width"]),
                                     "src": "member_access"})
            # lattice type via the member var (if the old channel typed it)
            mv = self.tm.get(f"{fh}:this.member(0x{off:x})")
            if mv and mv.get("type"):
                e["type_evidence"][mv["type"]] += 1

        # ── (b) ASSIGN member vars（去重：每变量名计一次）──
        b_this_seen = set()
        b_p0_seen = set()
        b_this_unresolved = defaultdict(int)   # func -> distinct count
        b_p0_unresolved = defaultdict(int)
        b_rows_this = b_rows_p0 = 0
        for c in self.constraints:
            if c.get("type") != "ASSIGN":
                continue
            for side in ("from", "to"):
                v = c.get(side)
                if not v:
                    continue
                m = _RE_THIS_MEMBER.match(v)
                if m:
                    b_rows_this += 1
                    if v in b_this_seen:
                        continue
                    b_this_seen.add(v)
                    fh, off = m.group(1), int(m.group(2), 16)
                    cls, chan = self.resolve_func(fh)
                    if not cls:
                        b_this_unresolved[fh] += 1
                        continue
                    e = get_entry(cls, off)
                    e["source_counts"]["assign_this"] += 1
                    note_func(e, fh)
                    mv = self.tm.get(v)
                    if mv and mv.get("type"):
                        e["type_evidence"][mv["type"]] += 1
                    if len(e["samples"]) < 6:
                        e["samples"].append({"func": fh, "addr": c.get("addr", ""),
                                             "src": "assign_this"})
                    continue
                m = _RE_P0_MEMBER.match(v)
                if m:
                    b_rows_p0 += 1
                    if v in b_p0_seen:
                        continue
                    b_p0_seen.add(v)
                    fh, off = m.group(1), int(m.group(2), 16)
                    cls = self.resolve_var(fh + "::param0")
                    if not cls:
                        b_p0_unresolved[fh] += 1
                        continue
                    e = get_entry(cls, off)
                    e["source_counts"]["assign_param0"] += 1
                    note_func(e, fh)
                    mv = self.tm.get(v)
                    if mv and mv.get("type"):
                        e["type_evidence"][mv["type"]] += 1
                    if len(e["samples"]) < 6:
                        e["samples"].append({"func": fh, "addr": c.get("addr", ""),
                                             "src": "assign_param0"})

        self.ma_unresolved = ma_unresolved
        self.ma_rows_resolved = ma_rows_resolved
        self.b_stats = {
            "rows_this": b_rows_this, "rows_p0": b_rows_p0,
            "distinct_this": len(b_this_seen), "distinct_p0": len(b_p0_seen),
            "p0_unresolved_distinct": sum(b_p0_unresolved.values()),
            "p0_unresolved_funcs": len(b_p0_unresolved),
            "this_unresolved_distinct": sum(b_this_unresolved.values()),
            "this_unresolved_funcs": len(b_this_unresolved),
        }
        self.b_this_seen = b_this_seen
        self.b_p0_seen = b_p0_seen
        self.b_this_unresolved = b_this_unresolved
        self.b_p0_unresolved = b_p0_unresolved
        self.members = members
        log(f"[x3] authority members (pre-merge): {len(members)}")

    # ── type/size finalize ────────────────────────────────────────────────
    def finalize_member(self, e):
        """(class, offset) 条目 → {size, type, ...}（确定性合并）。"""
        cls = e["class"]
        widths = e["widths"]
        max_w = max(widths) if widths else None
        # ── 类型合并（lattice 语义优先；标量让位类——引擎 meet 语义）──
        ev = e["type_evidence"]
        classes = sorted({t for t in ev if self.canon_class(t)})
        pseudos = sorted({t for t in ev if t in _PSEUDO_SPEC})
        chosen = None
        src = None
        conflict = None
        if classes:
            chosen, conflict = self._merge_member_classes(classes)
            src = "lattice"
        elif pseudos:
            chosen = max(pseudos, key=lambda t: (_PSEUDO_SPEC[t], t))
            src = "lattice"
            if len(pseudos) > 1:
                conflict = {"kind": "pseudo_mixed", "candidates": pseudos}
        elif max_w is not None:
            chosen = _WIDTH_PRIM.get(max_w)
            src = "width" if chosen else None
        # 类+标量共存（lattice 让位合并会静默取类）——报告可见化（非过滤）
        strong_ps = sorted(t for t in ev if t in _PSEUDO_SPEC)
        if classes and strong_ps:
            flag = {"classes": classes, "pseudos": strong_ps}
            if conflict is None:
                conflict = {"kind": "class_pseudo_coexist", **flag}
            else:
                conflict.setdefault("class_pseudo_coexist", flag)
        # ── size ──
        size = max_w
        size_src = "width" if max_w is not None else None
        if size is None and chosen is not None:
            implied = _TYPE_IMPLIED_SIZE.get(chosen)
            if implied is not None or (chosen and self.canon_class(chosen)):
                size = implied if implied is not None else 4
                size_src = "type_implied"
        # ── width/type 一致性（仅 width > 类型隐含宽 = 超宽访问 → 冲突；
        #    width < 隐含宽 = 子宽读（读 int 的低字节等）属正常，不 flag）──
        wt_conflict = None
        if max_w is not None and chosen is not None:
            if self.canon_class(chosen) or chosen == "char*":
                implied = 4
            else:
                implied = _TYPE_IMPLIED_SIZE.get(chosen)
            if implied is not None and max_w > implied:
                wt_conflict = {"width": max_w, "type_implied": implied, "type": chosen}
        # ── 未对齐宽访问（width>=2 且 offset % width != 0）——非对象基址
        #    的强信号（如字节流/字符串扫描被 class_regs 误判成员）──
        unaligned = None
        if max_w is not None and max_w >= 2 and e["offset"] % max_w != 0:
            widths_unaligned = sorted(w for w in widths if w >= 2 and e["offset"] % w != 0)
            if widths_unaligned:
                unaligned = {"offset": e["offset"], "widths": widths_unaligned}
        # ── confidence ──
        if e["source_counts"].get("member_access", 0) > 0:
            conf = "binary_access"
        elif e["source_counts"].get("assign_this", 0) > 0 or \
                e["source_counts"].get("assign_param0", 0) > 0:
            conf = "binary_addr"
        else:
            conf = "unknown"
        out = {
            "class": cls,
            "offset": e["offset"],
            "offset_hex": f"0x{e['offset']:X}",
            "size": size,
            "size_source": size_src,
            "type": chosen,
            "type_source": src,
            "type_evidence": {k: ev[k] for k in sorted(ev)},
            "widths": {str(k): widths[k] for k in sorted(widths)},
            "access_count": sum(e["source_counts"].values()),
            "source_counts": {k: e["source_counts"][k] for k in sorted(e["source_counts"])},
            "sources": sorted(e["source_counts"].keys()),
            "confidence": conf,
            "this_confidence": {k: e["func_conf"][k] for k in sorted(e["func_conf"])},
            "func_count": len(e["funcs"]),
        }
        if conflict:
            out["type_conflict"] = conflict
        if wt_conflict:
            out["width_type_conflict"] = wt_conflict
        if unaligned:
            out["unaligned_wide_access"] = unaligned
        out["samples"] = e["samples"][:4]
        return out

    # ── Q2: population (c) PA walks ───────────────────────────────────────
    def walk_population(self):
        from tools.type_infer.scope_vars import build_scoped_index, _scope_one_var
        ssa = build_scoped_index(self.constraints, self.call_graph,
                                 extra_func_addrs=None)
        func_addrs = ssa["func_addrs"]
        writes = ssa["writes"]
        walks = []          # (cls, off, op, reg, addr)
        stride = Counter()
        from_cls_scale = Counter()
        no_type = 0
        comp_reg = 0
        negative = 0
        for c in self.pa_rows:
            imm = c.get("imm")
            if not isinstance(imm, int):
                comp_reg += 1          # 寄存器复合（add R1,R2 / lea [B+R2]）——离线不可解
                continue
            op = c["op"]
            a = int(c["addr"], 16)
            nm = _scope_one_var(c["from"], a, func_addrs, writes)
            e = self.tm.get(nm)
            t = e.get("type") if e else None
            cls = self.canon_class(t) if t else None
            if op == "SCALE":
                stride[imm] += 1
                if cls:
                    from_cls_scale[cls] += 1
                continue
            if not cls:
                no_type += 1
                continue
            off = imm if op == "ADD" else -imm
            if off < 0:
                negative += 1
                continue
            walks.append((cls, off, op, c["from"], c["addr"], nm))
        self.walk_stats = {
            "walks": len(walks), "scale_rows": sum(stride.values()),
            "scale_from_class": sum(from_cls_scale.values()),
            "no_class_type": no_type, "compound_reg": comp_reg,
            "negative_dropped": negative,
        }
        self.walk_stride = stride
        return walks

    # ── coverage / reconciliation ─────────────────────────────────────────
    def table_baselines(self):
        cl = self.class_layouts
        mt_map = {}
        for k, v in self.member_types.items():
            m = _RE_MT_KEY.match(k)
            if m:
                mt_map[(m.group(1), int(m.group(2), 16))] = v
        total = with_cl = with_mt = union = 0
        missing = []
        cl_size = {}
        cl_offs = set()
        for cls, info in cl.items():
            if isinstance(info.get("size"), int):
                cl_size[cls] = info["size"]
            for o, d in (info.get("offsets") or {}).items():
                try:
                    oi = int(o)
                except (ValueError, TypeError):
                    continue
                total += 1
                cl_offs.add((cls, oi))
                has_cl = bool((d or {}).get("type"))
                v = mt_map.get((cls, oi))
                has_mt = bool(v and v.get("type"))
                if has_cl:
                    with_cl += 1
                if has_mt:
                    with_mt += 1
                if has_cl or has_mt:
                    union += 1
                else:
                    missing.append((cls, oi))
        return {
            "class_layouts": {"offsets": total, "own_type": with_cl,
                              "own_type_pct": round(with_cl / total, 4) if total else 0},
            "member_types": {"covered": with_mt,
                             "covered_pct": round(with_mt / total, 4) if total else 0},
            "union": {"covered": union,
                      "covered_pct": round(union / total, 4) if total else 0,
                      "missing": len(missing)},
        }, missing, mt_map, cl_size, cl_offs

    def fam(self, t):
        """类型 → 比较族（一致性对拍用；类保持类名 canon）。

        类指针 → ("class", canon)；char*/void* 独立族；整型全族归一；
        其余原样。仅用于对拍报告，不影响权威表类型。
        """
        if not t:
            return None
        s = t.strip()
        for p in ("const ", "class ", "struct "):
            if s.startswith(p):
                s = s[len(p):]
        is_ptr = s.endswith("*")
        s2 = s.rstrip("*").strip()
        c = self.canon_class(s2)
        if c:
            return ("class", c)
        if s2 in ("void",) or (is_ptr and s2 == "void"):
            return ("voidptr",)
        if is_ptr and s2 in ("char", "unsigned char", "signed char"):
            return ("char*",)
        if s2 in ("char", "unsigned char", "signed char"):
            return ("int",)
        if s2 in ("float", "double"):
            return ("float",)
        if s2 in ("bool", "BOOL"):
            return ("bool",)
        if s2 in ("int", "int32_t", "uint32_t", "int16_t", "uint16_t",
                  "int8_t", "uint8_t", "unsigned int", "unsigned short",
                  "short", "long", "unsigned long",
                  "DWORD", "WORD", "BYTE", "_DWORD", "_BYTE", "_WORD",
                  "signed int", "__int8", "__int16", "__int32",
                  "unsigned __int8", "unsigned __int16", "unsigned __int32",
                  "unsigned __int64", "__int64"):
            return ("int",)
        if is_ptr:
            return ("ptr", s2)
        return ("other", s2)

    # ── main flows ────────────────────────────────────────────────────────
    def run_gate(self, threshold):
        t0 = time.time()
        funcs = sorted({c["base"].split(":")[0] for c in self.ma_rows})
        ch = Counter()
        unresolved = []
        for fh in funcs:
            cls, chan = self.resolve_func(fh)
            if cls:
                ch[chan] += 1
            else:
                unresolved.append(fh)
        rows_res = rows_unres = 0
        for c in self.ma_rows:
            fh = c["base"].split(":")[0]
            cls, _ = self.resolve_func(fh)
            if cls:
                rows_res += 1
            else:
                rows_unres += 1
        # 切片：均布 400 函数（确定性）
        step = max(1, len(funcs) // 400)
        slice_f = funcs[::step][:400]
        s_res = sum(1 for f in slice_f if self.resolve_func(f)[0])
        out = {
            "task": "X3 GO/NO-GO class resolution gate",
            "time": _iso(), "source": os.path.basename(self.constraints_path),
            "ma_rows": len(self.ma_rows), "ma_funcs": len(funcs),
            "func_resolution": {
                "resolved": len(funcs) - len(unresolved),
                "unresolved": len(unresolved),
                "rate": round((len(funcs) - len(unresolved)) / len(funcs), 4)
                if funcs else 0,
                "by_channel": {k: ch[k] for k in sorted(ch)},
            },
            "row_resolution": {
                "resolved": rows_res, "unresolved": rows_unres,
                "rate": round(rows_res / len(self.ma_rows), 4) if self.ma_rows else 0,
            },
            "slice_400_funcs": {
                "tested": len(slice_f), "resolved": s_res,
                "rate": round(s_res / len(slice_f), 4) if slice_f else 0,
                "step": step,
            },
            "threshold": threshold,
            "examples_unresolved": [
                {"func": f, "this_type": (self.tm.get(f + ":this") or {}).get("type")}
                for f in unresolved[:20]
            ],
            "wall_sec": round(time.time() - t0, 1),
        }
        go = out["row_resolution"]["rate"] >= threshold
        out["verdict"] = "GO" if go else "NO-GO"
        p = os.path.join(self.evidence_dir, "x3_gate_class_resolution.json")
        with open(p, "w", encoding="utf-8") as f:
            json.dump(out, f, ensure_ascii=False, indent=2, sort_keys=True)
        log(f"[x3] gate: funcs {out['func_resolution']['resolved']}/{len(funcs)}"
            f" rate={out['func_resolution']['rate']:.3f};"
            f" rows rate={out['row_resolution']['rate']:.3f};"
            f" slice rate={out['slice_400_funcs']['rate']:.3f} → {out['verdict']}")
        log(f"[x3] gate evidence: {p}")
        return go, out

    def run_full(self):
        t0 = time.time()
        self.build_authority()
        members = self.members
        walks = self.walk_population()

        # ── Q2 checks ──
        q2 = self._q2(members, walks)

        # ── finalize entries (sorted) ──
        entries = []
        for (cls, off) in sorted(members):
            entries.append(self.finalize_member(members[(cls, off)]))
        log(f"[x3] finalized entries: {len(entries)}")

        # ── coverage / reconciliation ──
        baseline, missing422, mt_map, cl_size, cl_offs = self.table_baselines()
        cov = self._coverage(entries, baseline, missing422, mt_map, cl_size, cl_offs)

        # ── emit authority ──
        meta = {
            "task": "X3 member_authority — binary-solved member layout",
            "generated_by": "tools/type_infer/solve_member_authority.py",
            # NOTE: no wall-clock field — authority byte-determinism is a
            # required property (sha256 double-run must be identical);
            # generation timestamps live in the evidence report instead.
            "inputs": {
                "constraints": {"path": os.path.relpath(self.constraints_path, ROOT),
                                "sha256": sha256_file(self.constraints_path),
                                "kinds": self.kind_counts},
                "type_map": {"sha256": sha256_file(TYPE_MAP)},
            },
            "resolution": {
                "ma_rows": len(self.ma_rows), "ma_rows_resolved": self.ma_rows_resolved,
                "ma_rows_unresolved": len(self.ma_rows) - self.ma_rows_resolved,
                "ma_unresolved_funcs": len(self.ma_unresolved),
                "resolution_conflicts": len(self.resolution_conflicts),
            },
            "composition": {
                "member_access": sum(1 for e in entries
                                     if "member_access" in e["sources"]),
                "assign_this_only": sum(1 for e in entries
                                        if e["sources"] == ["assign_this"]),
                "assign_param0_only": sum(1 for e in entries
                                          if e["sources"] == ["assign_param0"]),
                "total": len(entries),
            },
            "walk_population_stats": self.walk_stats,
            "scale_stride_histogram": {str(k): self.walk_stride[k]
                                       for k in sorted(self.walk_stride)},
            "coverage_summary": {
                "classes": len({e["class"] for e in entries}),
                "offsets": len(entries),
                "type_lattice": sum(1 for e in entries if e["type_source"] == "lattice"),
                "type_width": sum(1 for e in entries if e["type_source"] == "width"),
                "type_none": sum(1 for e in entries if e["type"] is None),
                "binary_access": sum(1 for e in entries
                                     if e["confidence"] == "binary_access"),
                "binary_addr": sum(1 for e in entries
                                   if e["confidence"] == "binary_addr"),
            },
        }
        out = {"meta": meta, "members": {}}
        for e in entries:
            out["members"][f"{e['class']}+{e['offset_hex']}"] = e

        # ── write authority (deterministic: sort_keys + indent) ──
        auth_tmp = AUTHORITY + ".x3tmp"
        with open(auth_tmp, "w", encoding="utf-8") as f:
            json.dump(out, f, ensure_ascii=False, indent=1, sort_keys=True)
        os.replace(auth_tmp, AUTHORITY)
        auth_sha = sha256_file(AUTHORITY)
        log(f"[x3] wrote {AUTHORITY} sha256={auth_sha[:16]} size={os.path.getsize(AUTHORITY)}")

        # ── reports ──
        rep = {
            "meta": {"time": _iso(), "authority_sha256": auth_sha,
                     "wall_sec": round(time.time() - t0, 1)},
            "coverage": cov,
            "q2": q2,
        }
        p = os.path.join(self.evidence_dir, "x3_solve_report.json")
        with open(p, "w", encoding="utf-8") as f:
            json.dump(rep, f, ensure_ascii=False, indent=2, sort_keys=True)
        log(f"[x3] report: {p}")
        return auth_sha, cov, q2

    # ── Q2 completeness ───────────────────────────────────────────────────
    def _q2(self, members, walks):
        access_core = {k for k, e in members.items()
                       if e["source_counts"].get("member_access", 0) > 0}
        auth_keys = set(members.keys())

        # (b) hits vs core（按变量名去重——每 distinct (func,member) 计一次）
        b_miss_this = defaultdict(lambda: {"count": 0, "sites": []})
        b_miss_p0 = defaultdict(lambda: {"count": 0, "sites": []})
        seen_b = set()
        for c in self.constraints:
            if c.get("type") != "ASSIGN":
                continue
            for side in ("from", "to"):
                v = c.get(side)
                if not v or v in seen_b:
                    continue
                m = _RE_THIS_MEMBER.match(v)
                if m:
                    seen_b.add(v)
                    fh, off = m.group(1), int(m.group(2), 16)
                    cls, _ = self.resolve_func(fh)
                    if not cls:
                        continue
                    if (cls, off) not in access_core:
                        d = b_miss_this[(cls, off)]
                        d["count"] += 1
                        if len(d["sites"]) < 4:
                            d["sites"].append({"func": fh, "addr": c.get("addr", "")})
                    continue
                m = _RE_P0_MEMBER.match(v)
                if m:
                    seen_b.add(v)
                    fh, off = m.group(1), int(m.group(2), 16)
                    cls = self.resolve_var(fh + "::param0")
                    if not cls:
                        continue
                    if (cls, off) not in access_core:
                        d = b_miss_p0[(cls, off)]
                        d["count"] += 1
                        if len(d["sites"]) < 4:
                            d["sites"].append({"func": fh, "addr": c.get("addr", ""),
                                               "via": "param0"})

        # (c) walks vs authority
        c_miss = defaultdict(lambda: {"count": 0, "sites": []})
        c_hit = 0
        for (cls, off, op, reg, addr, nm) in walks:
            if (cls, off) in auth_keys:
                c_hit += 1
            else:
                d = c_miss[(cls, off)]
                d["count"] += 1
                if len(d["sites"]) < 4:
                    d["sites"].append({"func_guess": nm.split("::")[0],
                                       "addr": addr, "op": op, "reg": reg})

        # (a) unresolved rows per func
        a_unres = []
        for fh in sorted(self.ma_unresolved, key=lambda x: (-len(self.ma_unresolved[x]), x)):
            th = (self.tm.get(fh + ":this") or {}).get("type")
            a_unres.append({"func": fh, "this_type": th,
                            "rows": len(self.ma_unresolved[fh]),
                            "addrs": self.ma_unresolved[fh][:4]})

        def _misslist(d):
            return [
                {"class": k[0], "offset": k[1], "offset_hex": f"0x{k[1]:X}",
                 "count": v["count"], "sites": v["sites"]}
                for k, v in sorted(d.items(), key=lambda kv: (-kv[1]["count"], kv[0]))
            ]

        b_miss_list = _misslist(b_miss_this)
        b_miss_p0_list = _misslist(b_miss_p0)
        c_miss_list = _misslist(c_miss)

        # 完整缺陷清单落盘（报告内截断 2000；全量供 X2 扩展/表修复驱动）
        full_dumps = {
            "x3_q2_miss_authority_gap_walk.json": c_miss_list,
            "x3_q2_extension_candidates_assign_this.json": b_miss_list,
            "x3_q2_extension_candidates_assign_param0.json": b_miss_p0_list,
            "x3_q2_class_unresolved_ma.json": a_unres,
        }
        for fname, dat in full_dumps.items():
            p = os.path.join(self.evidence_dir, fname)
            with open(p, "w", encoding="utf-8") as f:
                json.dump(dat, f, ensure_ascii=False, indent=1, sort_keys=True)
            log(f"[x3] full dump: {fname} ({len(dat)} entries)")

        b_this_miss_n = sum(v["count"] for v in b_miss_this.values())
        b_p0_miss_n = sum(v["count"] for v in b_miss_p0.values())
        walks_n = len(walks)
        q2 = {
            "populations": {
                "a_member_access": {
                    "rows": len(self.ma_rows),
                    "rows_resolved_class": self.ma_rows_resolved,
                    "rows_unresolved_class": len(self.ma_rows) - self.ma_rows_resolved,
                    "unresolved_funcs": len(self.ma_unresolved),
                    "class_miss_rate": round((len(self.ma_rows) - self.ma_rows_resolved)
                                             / max(1, len(self.ma_rows)), 4),
                    "membership": "by construction (authority built from this channel)",
                },
                "b_assign_this": {
                    "distinct_vars": self.b_stats["distinct_this"],
                    "rows": self.b_stats["rows_this"],
                    "class_unresolved": self.b_stats["this_unresolved_distinct"],
                    "class_unresolved_funcs": self.b_stats["this_unresolved_funcs"],
                    "vs_access_core": {
                        "tested": self.b_stats["distinct_this"]
                        - self.b_stats["this_unresolved_distinct"],
                        "hit": self.b_stats["distinct_this"]
                        - self.b_stats["this_unresolved_distinct"] - b_this_miss_n,
                        "miss": b_this_miss_n,
                        "miss_distinct_pairs": len(b_miss_list),
                        "miss_rate": round(b_this_miss_n / max(
                            1, self.b_stats["distinct_this"]
                            - self.b_stats["this_unresolved_distinct"]), 4),
                    },
                },
                "b_assign_param0": {
                    "distinct_vars": self.b_stats["distinct_p0"],
                    "rows": self.b_stats["rows_p0"],
                    "class_unresolved": self.b_stats["p0_unresolved_distinct"],
                    "class_unresolved_funcs": self.b_stats["p0_unresolved_funcs"],
                    "vs_access_core": {
                        "tested": self.b_stats["distinct_p0"]
                        - self.b_stats["p0_unresolved_distinct"],
                        "hit": self.b_stats["distinct_p0"]
                        - self.b_stats["p0_unresolved_distinct"] - b_p0_miss_n,
                        "miss": b_p0_miss_n,
                        "miss_distinct_pairs": len(b_miss_p0_list),
                        "miss_rate": round(b_p0_miss_n / max(
                            1, self.b_stats["distinct_p0"]
                            - self.b_stats["p0_unresolved_distinct"]), 4),
                    },
                },
                "c_ptr_arith_walks": {
                    "walks_class_resolved": walks_n,
                    "hit": c_hit,
                    "miss": walks_n - c_hit,
                    "miss_distinct_pairs": len(c_miss),
                    "miss_rate": round((walks_n - c_hit) / max(1, walks_n), 4),
                    **self.walk_stats,
                },
            },
            "miss_list": {
                "(i)_authority_gap_walk": c_miss_list[:2000],
                "(ii)_class_unresolved_ma_funcs": a_unres[:2000],
            },
            "extension_candidates_x2_core_gap_assign_this": b_miss_list[:2000],
            "extension_candidates_x2_core_gap_assign_param0": b_miss_p0_list[:2000],
            "miss_list_total": {
                "authority_gap_walk_pairs": len(c_miss_list),
                "authority_gap_walk_rows": walks_n - c_hit,
                "class_unresolved_ma_funcs": len(a_unres),
                "class_unresolved_ma_rows": len(self.ma_rows) - self.ma_rows_resolved,
                "x2_core_gap_assign_this_pairs": len(b_miss_list),
                "x2_core_gap_assign_this_accesses": b_this_miss_n,
                "x2_core_gap_assign_param0_pairs": len(b_miss_p0_list),
                "x2_core_gap_assign_param0_accesses": b_p0_miss_n,
            },
            "full_lists": sorted(full_dumps.keys()),
            "truncation_note": "in-report lists capped at 2000; full lists dumped "
                               "to evidence dir files (see full_lists)",
        }
        log(f"[x3] Q2: MA class miss rows={q2['populations']['a_member_access']['rows_unresolved_class']}"
            f" ({q2['populations']['a_member_access']['class_miss_rate']:.1%});"
            f" walk miss={q2['populations']['c_ptr_arith_walks']['miss']}"
            f" ({q2['populations']['c_ptr_arith_walks']['miss_rate']:.1%});"
            f" assign-this core-gap={b_this_miss_n} pairs={len(b_miss_list)}")
        return q2

    # ── coverage / reconciliation ─────────────────────────────────────────
    def _coverage(self, entries, baseline, missing422, mt_map, cl_size, cl_offs):
        member_keys = {(e["class"], e["offset"]): e for e in entries}
        # 422 缺口闭合
        closure_access = closure_any = 0
        for (cls, off) in missing422:
            e = member_keys.get((cls, off))
            if e and e["type"]:
                closure_any += 1
                if e["confidence"] == "binary_access":
                    closure_access += 1
        # 对拍 member_types（冲突分桶：class_vs_class / pun_same_size /
        # size_mismatch —— 4/4 或 1/1 的标量-指针互解属该代码库常态 pun）
        _SIZE_OF_FAM = {"class": 4, "voidptr": 4, "int": 4, "float": 4,
                        "char*": 4, "bool": 1}
        agree = conflict = new_only = unclassified = 0
        conflict_buckets = Counter()
        conflict_hist = Counter()
        conflicts = []

        def _fam_label(f):
            if f is None:
                return "?"
            return f[0] + (":" + f[1] if f[0] == "class" else "")

        for (cls, off), e in sorted(member_keys.items()):
            v = mt_map.get((cls, off))
            if not v or not v.get("type"):
                new_only += 1  # 表无（或未类型化）此 (class, offset)
                continue
            fa, fb = self.fam(e["type"]), self.fam(v.get("type"))
            if fa is None or fb is None:
                unclassified += 1
            elif fa == fb:
                agree += 1
            else:
                conflict += 1
                sa, sb = _SIZE_OF_FAM.get(fa[0]), _SIZE_OF_FAM.get(fb[0])
                if fa[0] == "class" and fb[0] == "class":
                    bucket = "class_vs_class"
                elif sa is not None and sb is not None and sa == sb:
                    bucket = "pun_same_size"
                else:
                    bucket = "size_mismatch_or_other"
                conflict_buckets[bucket] += 1
                conflict_hist[f"{_fam_label(fa)}|{_fam_label(fb)}"] += 1
                if len(conflicts) < 60:
                    conflicts.append({"class": cls, "offset_hex": f"0x{off:X}",
                                      "authority": e["type"], "member_types": v.get("type"),
                                      "bucket": bucket})
        conflict_hist_top = [
            {"pair": k, "count": n}
            for k, n in sorted(conflict_hist.items(), key=lambda kv: (-kv[1], kv[0]))[:30]
        ]
        table_only = 0
        for (cls, off) in mt_map:
            if (cls, off) not in member_keys:
                table_only += 1
        # 权威 vs class_layouts
        cl_agree = cl_new = cl_size_conflict = cl_table_larger = 0
        size_conflicts = []
        for (cls, off), e in sorted(member_keys.items()):
            if (cls, off) in cl_offs:
                cl_agree += 1
            else:
                cl_new += 1
            if e["size"] is not None and cls in cl_size:
                info = (self.class_layouts.get(cls, {}).get("offsets") or {}).get(str(off))
                if info and isinstance(info.get("size"), int):
                    if e["size"] > info["size"]:
                        cl_size_conflict += 1
                        if len(size_conflicts) < 60:
                            size_conflicts.append({"class": cls, "offset_hex": f"0x{off:X}",
                                                   "authority_size": e["size"],
                                                   "class_layouts_size": info["size"]})
                    elif e["size"] < info["size"]:
                        cl_table_larger += 1  # 子宽访问（读成员低字节等）——非冲突
        # extent（按 entry confidence 分桶；class_layouts size 可能部分建模）
        extent_total = 0
        extent_by_conf = Counter()
        extent = []
        for (cls, off), e in sorted(member_keys.items()):
            if cls in cl_size and off >= cl_size[cls]:
                extent_total += 1
                extent_by_conf[e["confidence"]] += 1
                if len(extent) < 200:
                    extent.append({"class": cls, "offset_hex": f"0x{off:X}",
                                   "offset": off, "class_layouts_size": cl_size[cls],
                                   "type": e["type"], "confidence": e["confidence"]})
        # width/type 冲突（仅 width > 类型隐含宽） / type_conflict / 未对齐宽访问
        wt = [e for e in entries if e.get("width_type_conflict")]
        tc = [e for e in entries if e.get("type_conflict")]
        unal = [e for e in entries if e.get("unaligned_wide_access")]
        cp = []
        for e in tc:
            c = e["type_conflict"]
            if c.get("kind") == "class_pseudo_coexist" or "class_pseudo_coexist" in c:
                cp.append(e)
        # 继承 sanity（lattice 视图；X3 未改层次，报告现状）
        inh = self._inheritance_check()
        return {
            "authority": {
                "classes": len({e["class"] for e in entries}),
                "offsets": len(entries),
                "type_lattice": sum(1 for e in entries if e["type_source"] == "lattice"),
                "type_width_only": sum(1 for e in entries if e["type_source"] == "width"),
                "type_none": sum(1 for e in entries if e["type"] is None),
                "binary_access": sum(1 for e in entries
                                     if e["confidence"] == "binary_access"),
                "binary_addr": sum(1 for e in entries
                                   if e["confidence"] == "binary_addr"),
            },
            "tables_baseline_class_layouts_domain": baseline,
            "gap_422_closure": {
                "missing_total": len(missing422),
                "closed_with_type_any_channel": closure_any,
                "closed_with_type_access_core": closure_access,
                "still_missing": len(missing422) - closure_any,
                "samples_still_missing": [
                    {"class": c, "offset_hex": f"0x{o:X}"} for (c, o) in missing422[:30]
                    if (c, o) not in member_keys or not member_keys[(c, o)]["type"]],
            },
            "reconciliation_member_types": {
                "authority_entries": len(entries),
                "agree": agree, "conflict": conflict, "new_only_vs_table": new_only,
                "unclassified": unclassified,
                "table_only_entries": table_only,
                "conflict_buckets": {k: conflict_buckets[k]
                                     for k in sorted(conflict_buckets)},
                "conflict_family_histogram_top": conflict_hist_top,
                "conflict_samples": conflicts,
            },
            "reconciliation_class_layouts": {
                "both": cl_agree, "authority_new": cl_new,
                "size_conflicts": cl_size_conflict,
                "size_conflict_samples": size_conflicts,
                "table_size_larger": cl_table_larger,
                "table_size_larger_note": "authority access width < table member "
                                          "size (sub-width read) — informational only",
            },
            "extent_violations": {
                "count": extent_total,
                "by_confidence": {k: extent_by_conf[k] for k in sorted(extent_by_conf)},
                "note": "offset >= class_layouts size — suspects: wrong class "
                        "resolution OR under-sized table (class_layouts size may "
                        "be partial); review list, not auto-defects",
                "samples": extent[:100],
            },
            "width_type_conflicts": {
                "count": len(wt),
                "note": "flag = max access width > type-implied size (sub-width "
                        "reads are NOT flagged)",
                "samples": wt[:60]},
            "type_conflicts": {"count": len(tc),
                               "class_pseudo_coexist": len(cp),
                               "samples": tc[:60]},
            "unaligned_wide_access": {
                "count": len(unal),
                "note": "width>=2 access at offset % width != 0 — strong signal "
                        "of non-object base (string/buffer scan) misfiled as "
                        "member by the extractor's class_regs window",
                "samples": unal[:60]},
            "resolution_conflicts": {"count": len(self.resolution_conflicts),
                                     "samples": self.resolution_conflicts[:60]},
            "inheritance": inh,
        }

    def _inheritance_check(self):
        parents = {}
        for cls in self.valid_classes:
            p = self.lattice.parent_of(cls)
            if p:
                parents[cls] = p
        # 环检测（防御性；lattice 已防环，此处报告真实状态）
        cycles = 0
        seen_done = set()
        for cls in sorted(parents):
            path = set()
            cur = cls
            while cur and cur not in seen_done:
                if cur in path:
                    cycles += 1
                    break
                path.add(cur)
                cur = parents.get(cur)
            seen_done |= path
        broken = sum(1 for cls, p in parents.items()
                     if p not in self.valid_classes and p not in self.class_layouts)
        roots = sum(1 for cls in self.valid_classes if not self.lattice.parent_of(cls))
        return {"classes": len(self.valid_classes), "with_parent": len(parents),
                "roots": roots, "cycles": cycles, "broken_parent_refs": broken,
                "source": "lattice hierarchy (RTTI truth + class_layouts fallback)"}


def pick_constraints(gate_mode):
    """gate: 优先有 MA 的文件（rtti 或已提升的 json）；full: 必须 json 已提升。"""
    def kinds(p):
        try:
            with open(p, "r", encoding="utf-8") as f:
                data = json.load(f)
            kc = Counter(c.get("type") for c in data.get("constraints", []))
            return kc
        except Exception:
            return Counter()
    if gate_mode:
        # 轻量计数：避免双载入（这里直接全载一次并复用）
        for p in (RAW_JSON, RAW_RTTI):
            if os.path.exists(p):
                kc = kinds(p)
                if kc.get("MEMBER_ACCESS", 0) > 0:
                    return p, kc
        raise SystemExit("[x3] ERROR: no constraints file with MEMBER_ACCESS found")
    kc = kinds(RAW_JSON)
    if kc.get("MEMBER_ACCESS", 0) <= 0:
        raise SystemExit(
            "[x3] ERROR: raw_constraints.json has no MEMBER_ACCESS — "
            "run promote first: python tools/csp_export/promote_constraints.py")
    return RAW_JSON, kc


def main():
    ap = argparse.ArgumentParser(description="X3 member authority solver")
    ap.add_argument("--gate", action="store_true")
    ap.add_argument("--threshold", type=float, default=DEFAULT_GATE_THRESHOLD)
    ap.add_argument("--evidence-dir", default=EVID_DIR)
    ap.add_argument("--constraints", default=None,
                    help="override constraints path (debug)")
    args = ap.parse_args()

    if args.constraints:
        path = args.constraints
        kc = Counter()
        with open(path, "r", encoding="utf-8") as f:
            for c in json.load(f).get("constraints", []):
                kc[c.get("type")] += 1
        if kc.get("MEMBER_ACCESS", 0) <= 0:
            raise SystemExit("[x3] ERROR: override file lacks MEMBER_ACCESS")
        constraint_path, kind_counts = path, kc
    else:
        constraint_path, kind_counts = pick_constraints(args.gate)

    solver = Solver(constraint_path, args.evidence_dir)
    if args.gate:
        go, out = solver.run_gate(args.threshold)
        if not go:
            log(f"[BLOCKED: class-resolution rate "
                f"{out['row_resolution']['rate']:.1%} < threshold "
                f"{args.threshold:.0%} — see {args.evidence_dir}]")
            return 1
        return 0

    auth_sha, cov, q2 = solver.run_full()
    log(f"[x3] DONE authority_sha256={auth_sha}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
