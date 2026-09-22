#!/usr/bin/env python3
"""gen_e4_materialize.py — Phase E 全量落盘生成器（用户裁决 2026-09-09）。

消费 full_export v3 快照，把全部无 src 函数体的函数以「裁决 v2 pending 块」
形态物化到 src/e4/，同时：
  E2  缺失类最小声明 → src/e4/classes/*.hpp
  E3  成员函数 hpp 声明插入（既有类）+ 外层签名合成（CSP/IDA 类型）
  E4  定义占位体 → src/e4/<bucket>_e4.cpp（伪码偏移访问已重写为 ->/.）
  E1  伪码引用全局的 extern 声明 → src/e4/e4_globals.hpp

Usage:
  python tools/gen_e4_materialize.py --phase inventory     # 只做盘点报告
  python tools/gen_e4_materialize.py --phase apply         # 全部落盘
"""
import argparse
import json
import os
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SRC = ROOT / "src"
EXPORT = ROOT / "decompile-results" / "full_export"
E4 = SRC / "e4"
REPORT = ROOT / ".omo" / "e4_report.json"

MARKER = "// [IDA decompile] original pseudocode - translation pending (final goal)"
REC_HEAD = "// ======================================================================"

# ---------------------------------------------------------------- src scan
# src 已有体函数的地址集合：行首 `// 0xADDR` 注解 + 3 行内出现定义形态（含 `(` 与 `{`）。
# 行尾注解（vtable 槽位 `virtual X(); // 0xADDR`）与 `data:` 全局不算函数体。
LINE_ADDR_RE = re.compile(r"^\s*//\s*(?:IDA\s+)?0[xX]([0-9A-Fa-f]{5,8})\s*$")
# G10 修复：def 行行尾注解（`RET Cls::M(...) { // 0xADDR` 或 def 行尾注解）也是
# 已有体的证据——replace_body/舰队波维护的内联注解形态，旧扫描器不可见导致
# 544 个真体被误判 bodyless 而 e4 桶重复物化（双定义 + marker&completed 矛盾）。
DEF_INLINE_ADDR_RE = re.compile(
    r"^\s*[\w:&<>,\*\s]+\([^;]*\)\s*(?:const\s*)?\{?\s*//\s*0[xX]([0-9A-Fa-f]{5,8})\s*$")
# G11: 行尾 ';' 的纯声明（_generated/global_funcs.hpp 原型）不是有体定义——
# 曾把 12 个截断 pending 排除出 bodyless，陈旧截断块在 e4 桶永不刷新。
DEF_INLINE_DECL_RE = re.compile(
    r"^\s*[\w:&<>,\*\s]+\([^;]*\)\s*(?:const\s*)?;\s*//\s*0[xX]([0-9A-Fa-f]{5,8})\s*$")


def scan_src_addrs():
    addrs = set()
    files = 0
    for p in SRC.rglob("*"):
        if p.suffix not in (".cpp", ".hpp", ".inl"):
            continue
        if "e4" in p.parts:
            continue
        try:
            lines = p.read_text(encoding="latin-1").split("\n")
        except OSError:
            continue
        files += 1
        for i, ln in enumerate(lines):
            m = LINE_ADDR_RE.match(ln)
            if m:
                a = int(m.group(1), 16)
                if not (0x401000 <= a <= 0x7E0FFF):
                    continue
                window = lines[i + 1:i + 4]
                has_def = any("(" in w for w in window) and any(
                    w.rstrip().endswith("{") or "{" in w for w in window)
                if has_def:
                    addrs.add(a)
                continue
            m2 = DEF_INLINE_ADDR_RE.match(ln)
            if m2:
                a = int(m2.group(1), 16)
                if 0x401000 <= a <= 0x7E0FFF:
                    addrs.add(a)
    return addrs, files


# ---------------------------------------------------------------- v3 parse
class Fn:
    __slots__ = ("addr", "name", "proto", "pseudocode", "bucket")

    def __init__(self, addr, name, proto, pseudocode, bucket):
        self.addr = addr
        self.name = name
        self.proto = proto
        self.pseudocode = pseudocode
        self.bucket = bucket


def parse_v3_functions():
    fns = []
    fdir = EXPORT / "src"
    for f in sorted(fdir.glob("*.cpp")):
        bucket = f.stem
        txt = f.read_text(encoding="utf-8", errors="replace")
        # records separated by REC_HEAD
        parts = txt.split(REC_HEAD)
        for rec in parts[1:]:
            lines = rec.split("\n")
            name = addr = proto = None
            pseudo_lines = []
            in_pseudo = False
            for ln in lines:
                if addr is None and ln.startswith("// addr="):
                    m = re.search(r"0x([0-9A-Fa-f]+)", ln)
                    if m:
                        addr = int(m.group(1), 16)
                    continue
                if addr is None and ln.startswith("// "):
                    name = ln[3:].strip()
                    continue
                if proto is None and ln.startswith("// proto:"):
                    proto = ln[len("// proto:"):].strip()
                    continue
                if ln.startswith("// ---- Hex-Rays ----"):
                    in_pseudo = True
                    continue
                if ln.startswith("// ----"):
                    if in_pseudo:
                        break
                    continue
                if in_pseudo:
                    # strip trailing record separator
                    if ln.strip() == "":
                        if pseudo_lines:
                            pseudo_lines.append("")
                        continue
                    pseudo_lines.append(ln)
            if addr is None or name is None:
                continue
            # trim trailing blanks
            while pseudo_lines and pseudo_lines[-1].strip() == "":
                pseudo_lines.pop()
            if not pseudo_lines:
                pseudo_lines = ["// (no pseudocode — ASM-only function)"]
            fns.append(Fn(addr, name, proto or "", "\n".join(pseudo_lines), bucket))
    return fns


# ---------------------------------------------------------------- class inventory
CLASS_DEF_RE = re.compile(r"^\s*(?:class|struct)\s+([A-Za-z_]\w*)\b[^;=()]*$")
NS_OPEN_RE = re.compile(r"^\s*namespace\s+([A-Za-z_]\w*)\s*\{")
FWD_RE = re.compile(r"^\s*(?:class|struct)\s+([A-Za-z_]\w*)\s*;")


def scan_src_classes():
    """class name -> {path, namespace}. Definitions only (tracked via brace depth)."""
    classes = {}
    for p in sorted(SRC.rglob("*.hpp")):
        if "e4" in p.parts or "_generated" in p.parts:
            continue
        try:
            lines = p.read_text(encoding="latin-1").split("\n")
        except OSError:
            continue
        ns_stack = []  # (name, depth_at_open)
        depth = 0
        i = 0
        while i < len(lines):
            ln = lines[i]
            m = NS_OPEN_RE.match(ln)
            if m:
                ns_stack.append((m.group(1), depth))
            else:
                m2 = CLASS_DEF_RE.match(ln)
                if m2 and "{" in ln or (m2 and i + 1 < len(lines) and lines[i + 1].strip() == "{"):
                    nm = m2.group(1)
                    ns = "::".join(n for n, _ in ns_stack)
                    classes.setdefault(nm, {"path": str(p), "namespace": ns})
            depth += ln.count("{") - ln.count("}")
            while ns_stack and depth <= ns_stack[-1][1]:
                ns_stack.pop()
            i += 1
    return classes


# ---------------------------------------------------------------- offset rewrite
IDA_INT = {
    "_DWORD": ("unsigned int", 4), "_WORD": ("unsigned short", 2),
    "_BYTE": ("unsigned char", 1), "_QWORD": ("unsigned long long", 8),
    "int": ("int", 4), "char": ("char", 1), "short": ("short", 2),
    "unsigned int": ("unsigned int", 4),
}
WIDTH = {"_DWORD": 4, "_WORD": 2, "_BYTE": 1, "_QWORD": 8,
         "int": 4, "char": 1, "short": 2, "unsigned int": 4}

# 1: *((T *)this + I)  — dword-index form
RE_IDX = re.compile(
    r"\*\(\(\s*(_DWORD|_WORD|_BYTE|_QWORD)\s*\*\s*\)\s*this\s*\+\s*(\d+)\s*\)")
# 2: *(T *)(this + N)  — byte form (this is char*)
RE_BYTE = re.compile(
    r"\*\(\s*(_DWORD|_WORD|_BYTE)\s*\*\s*\)\s*\(\s*this\s*\+\s*(\d+)\s*\)")
# 3: *(T *)((char *)this + N)
RE_CHARP = re.compile(
    r"\*\(\s*(_DWORD|_WORD|_BYTE)\s*\*\s*\)\s*\(\s*\(\s*char\s*\*\s*\)\s*this\s*\+\s*(\d+)\s*\)")
# 4: (Foo *)((char *)this + N) — pointer member
RE_PTRCAST = re.compile(
    r"\(\s*[A-Za-z_]\w*\s*\*\s*\)\s*\(\s*\(\s*char\s*\*\s*\)\s*this\s*\+\s*(\d+)\s*\)")


class MemberMap:
    def __init__(self):
        cl = json.load(open(ROOT / "tools" / "class_layouts.json", encoding="utf-8"))
        self.by_class = {}
        self.parents = {}
        self.sizes = {}
        self.entries = {}   # G2: cls -> {offset: (name, size, type)}
        # G2: 容器内部布局（YRpp ArrayClasses + ctor 间距铁证：TypeList=28B）
        self.CONTAINER_SUBS = {
            4: ("Items", 4), 8: ("Capacity", 4),
            0xC: ("IsInitialized", 1), 0xD: ("IsAllocated", 1),
            0x10: ("Count", 4), 0x14: ("CapacityIncrement", 4),
            0x18: ("unknown_18", 4),
        }
        for cname, c in cl.items():
            offs = c.get("offsets") or {}
            m = {}
            em = {}
            for k, v in offs.items():
                if isinstance(v, dict) and "ida_name" in v:
                    try:
                        nm = v["ida_name"]
                        # F2 防护：非法标识符名（如 "Name[0x31]"）= 遗留垃圾，整体跳过
                        if not re.match(r"^[A-Za-z_]\w*$", nm or ""):
                            continue
                        sz = int(v.get("size", 4))
                        m[(int(k), sz)] = nm
                        em[int(k)] = (nm, sz, (v.get("type") or "").strip())
                    except (ValueError, TypeError):
                        pass
            if m:
                self.by_class[cname] = m
                self.entries[cname] = em
            p = c.get("parent")
            if p and p != cname:
                self.parents[cname] = p
            try:
                self.sizes[cname] = int(c.get("size", 0))
            except (TypeError, ValueError):
                pass
        # F1: 嵌入子对象类型证据（anchors/member_types.json，ANCHORED 级）
        try:
            self.member_types = json.load(
                open(ROOT / "anchors" / "member_types.json", encoding="utf-8"))
        except OSError:
            self.member_types = {}

    def _chain(self, cls):
        seen = set()
        while cls and cls not in seen:
            yield cls
            seen.add(cls)
            cls = self.parents.get(cls)

    def member(self, cls, offset, width):
        # F1/F2: 沿继承链查（class_layouts 偏移为对象绝对坐标）。
        # 防护：每类只接受 own 区段 [父类 size, 本类 size) 的条目——基类短偏移区
        # 的遗留错位行（TechnoTypeClass+4="IdleRate" 实证）污染解析；父类 size
        # 未知（父不在 layouts）则该类不限。own 区下方由更深的祖先权威覆盖。
        for c in self._chain(cls):
            mm = self.by_class.get(c)
            if not mm:
                continue
            parent = self.parents.get(c)
            lo = self.sizes.get(parent, 0) if parent else 0
            hi = self.sizes.get(c, 0)
            if lo <= offset and (not hi or offset < hi):
                name = mm.get((offset, width))
                if name:
                    return name
                if width == 4 and mm.get((offset, 4)):
                    return mm[(offset, 4)]
                # G2: 宽成员基址读（TypeList/WeaponStruct 首 dword = vfptr 读）
                em = self.entries.get(c) or {}
                ent = em.get(offset)
                if ent and width == 4 and ent[1] >= 4:
                    return ent[0]
        return None

    def container_sub(self, cls, offset, width):
        """G2: 容器成员内部子访问 -> Member.Sub（Items/Capacity/Count 等）。"""
        for c in self._chain(cls):
            parent = self.parents.get(c)
            lo = self.sizes.get(parent, 0) if parent else 0
            hi = self.sizes.get(c, 0)
            if not (lo <= offset and (not hi or offset < hi)):
                continue
            em = self.entries.get(c) or {}
            ent = em.get(offset)
            if ent is None:
                cand = [(o, e) for o, e in em.items() if o < offset < o + e[1]]
                if not cand:
                    continue
                o, ent = max(cand, key=lambda t: t[0])
                sub_off = offset - o
            else:
                sub_off = 0
            nm, sz, ty = ent
            if not ty:
                continue
            base = ty.split("<")[0]
            if base not in ("TypeList", "DynamicVectorClass", "VectorClass"):
                continue
            sub = self.CONTAINER_SUBS.get(sub_off)
            if sub and sub[1] == width:
                return "%s.%s" % (nm, sub[0])
        return None

    def nested(self, cls, offset, width, depth=0):
        """F2: 嵌入子对象解析。条件（全部确定性）：
        1. 链上存在成员 M 覆盖 (M.off < offset < M.off+M.size) 且 M.size >= 8
        2. member_types 给出 M 的类类型 T（ANCHORED 证据）
        3. M.size == T 的布局尺寸（排除数组——数组元素访问不可下标重写）
        然后在 T 内递归精确解析 offset - M.off。"""
        if depth >= 2:
            return None
        for c in self._chain(cls):
            mm = self.by_class.get(c)
            if not mm:
                continue
            best = None
            for (mo, msize), mname in mm.items():
                if mo < offset < mo + msize and msize >= 8:
                    if best is None or mo > best[0]:
                        best = (mo, msize, mname)
            if best:
                mo, msize, mname = best
                tinfo = self.member_types.get("%s+0x%X" % (c, mo)) or {}
                t = (tinfo.get("type") or "").replace("const ", "").strip()
                if t.endswith("*"):
                    t = t[:-1].strip()
                if t and t in self.by_class:
                    if msize == self.sizes.get(t):
                        sub = self.member(t, offset - mo, width)
                        if sub:
                            return "%s.%s" % (mname, sub)
                        sub = self.nested(t, offset - mo, width, depth + 1)
                        if sub:
                            return "%s.%s" % (mname, sub)
                return None  # 覆盖成员无类型证据——诚实放弃
        return None

    def resolve(self, cls, offset, width):
        n = self.member(cls, offset, width)
        if n:
            return n
        n = self.container_sub(cls, offset, width)
        if n:
            return n
        return self.nested(cls, offset, width)


STORE_CTX_RE = re.compile(r"\s*=(?!=)")


def rewrite_pseudocode(pseudo, cls, mmap, stats):
    if not cls:
        return pseudo

    def narrow_load(m, nm, w):
        """F3: w1/w2 读访问落在已知 4B 成员 → 显式截断形态（load only；
        store 上下文保持原始伪码——截断写会丢失高位语义）。"""
        if not nm:
            return None
        if STORE_CTX_RE.match(m.string, m.end()):
            return None
        stats["rewritten"] += 1
        stats["narrow_load"] = stats.get("narrow_load", 0) + 1
        cast = "(unsigned char)" if w == 1 else "(unsigned short)"
        return cast + "this->" + nm

    def sub_idx(m):
        w = WIDTH[m.group(1)]
        off = int(m.group(2)) * w
        nm = mmap.resolve(cls, off, w)
        if nm:
            stats["rewritten"] += 1
            return "this->" + nm
        if w in (1, 2):
            r = narrow_load(m, mmap.member(cls, off, 4), w)
            if r is not None:
                return r
        stats["unmapped"] += 1
        return m.group(0)

    def sub_off(m, group=2):
        w = WIDTH[m.group(1)]
        off = int(m.group(group))
        nm = mmap.resolve(cls, off, w)
        if nm:
            stats["rewritten"] += 1
            return "this->" + nm
        if w in (1, 2):
            r = narrow_load(m, mmap.member(cls, off, 4), w)
            if r is not None:
                return r
        stats["unmapped"] += 1
        return m.group(0)

    def sub_ptr(m):
        off = int(m.group(1))
        nm = mmap.resolve(cls, off, 4)
        if nm:
            stats["rewritten"] += 1
            return "&this->" + nm
        stats["unmapped"] += 1
        return m.group(0)

    pseudo = RE_IDX.sub(sub_idx, pseudo)
    pseudo = RE_BYTE.sub(sub_off, pseudo)
    pseudo = RE_CHARP.sub(sub_off, pseudo)
    pseudo = RE_PTRCAST.sub(sub_ptr, pseudo)
    return pseudo


# ---------------------------------------------------------------- signature synth
TRUNC_MARK = re.compile(r"\[\d+ chars total\]")

IDA_CACHE_DIR = ROOT / ".omo" / "ida_cache"


def trunc_cache_get(addr):
    """G11: v4 截断记录的 ida_cache 完整伪码（G10 起 live 回填，与导出同源渲染）。
    无缓存/空内容返回 None——调用方诚实保持截断形态。"""
    p = IDA_CACHE_DIR / ("func_0x%X.json" % addr)
    try:
        d = json.loads(p.read_text(encoding="utf-8"))
        code = d.get("decompiled") or ""
        return code if code.strip() else None
    except (OSError, ValueError):
        return None


def emit_pseudo(pseudo):
    """截断记录（export_funcs 输出上限）→ 注释化伪码 + 空体，保持括号平衡。"""
    if TRUNC_MARK.search(pseudo):
        commented = "\n".join("// " + l if l.strip() else "//" for l in pseudo.split("\n"))
        return ("// (v3 export truncated pseudocode — commented out; "
                "live version via get_context)\n" + commented + "\n"
                "// end truncated pseudocode"), True
    return pseudo, False


DECL_LINE_RE = re.compile(r"^([A-Za-z_][\w :*&<>]*)\b(__thiscall|__stdcall|__cdecl|__fastcall|__userpurge)?\s*([A-Za-z_~][\w:]*)\s*\((.*)\)\s*(?:;)?$")

TYPE_MAP = [
    (re.compile(r"#\d+"), "void"),
    (re.compile(r"\b_DWORD\b"), "unsigned int"),
    (re.compile(r"\b_BYTE\b"), "unsigned char"),
    (re.compile(r"\b_WORD\b"), "unsigned short"),
    (re.compile(r"\b_QWORD\b"), "unsigned long long"),
    # G6: 复合形态须在泛化 __intN 之前（否则产出 "unsigned signed char *" 非法类型）
    (re.compile(r"\bunsigned\s+__int8\b"), "unsigned char"),
    (re.compile(r"\bsigned\s+__int8\b"), "char"),
    (re.compile(r"\bunsigned\s+__int16\b"), "unsigned short"),
    (re.compile(r"\bunsigned\s+__int64\b"), "unsigned long long"),
    (re.compile(r"\b__int64\b"), "long long"),
    (re.compile(r"\b__int32\b"), "int"),
    (re.compile(r"\b__int16\b"), "short"),
    (re.compile(r"\b__int8\b"), "signed char"),
]


def clean_type(t):
    t = t.strip()
    for rx, rep in TYPE_MAP:
        t = rx.sub(rep, t)
    return t.strip() or "int"


def split_params(s):
    s = s.strip()
    if not s or s in ("void",):
        return []
    out, depth, cur = [], 0, ""
    for ch in s:
        if ch in "(<[":
            depth += 1
        elif ch in ")>]":
            depth -= 1
        if ch == "," and depth == 0:
            out.append(cur)
            cur = ""
        else:
            cur += ch
    if cur.strip():
        out.append(cur)
    return out


def synth_signature(fn):
    """从伪码声明行合成外层签名。返回 dict(ret, cc, cls, method, flat, params=[(type,name)],
    this_type)。G6（#56 根因）：v3 导出伪码签名常折行（首行止于 '('），旧版正则要求
    单行完整括号 → 解析失败返回 None → 自由形态丢 this + 丢全部参数。现做括号平衡
    拼接；__thiscall 首参即 this（IDA 可能命名为 Block/a1 而非 this），从参数表
    剥离并记录其类型供 owner 判定。"""
    raw = fn.pseudocode.split("\n")
    first = raw[0].strip()
    li = 1
    while first.count("(") > first.count(")") and li < len(raw) and li <= 30:
        first = first + " " + raw[li].strip()
        li += 1
    first = first.rstrip(";").strip()
    # name: last identifier-ish token before top-level '('
    m = re.match(r"^(.*?)\b([A-Za-z_~][\w]*(?:::[A-Za-z_~][\w]*)*)\s*\((.*)\)\s*$", first)
    if not m:
        return None
    ret_cc = m.group(1).strip()
    name = m.group(2)
    params_raw = m.group(3)
    cc = ""
    for c in ("__thiscall", "__stdcall", "__cdecl", "__fastcall", "__userpurge"):
        if c in ret_cc:
            cc = c
            ret_cc = ret_cc.replace(c, "").strip()
            break
    ret = clean_type(ret_cc) if ret_cc else "int"
    plist = split_params(params_raw)
    this_type = ""
    this_named = ""
    if cc == "__thiscall" and plist:
        # thiscall 首参即 this（无论 IDA 怎么命名）；指针形态记录类型
        p0 = plist[0].strip()
        pm0 = re.match(r"^(.*?)\s*([A-Za-z_]\w*)\s*$", p0)
        if pm0:
            ty0 = pm0.group(1).strip()
            tm = re.match(r"^([A-Za-z_]\w*)\s*\*+\s*$", ty0)
            if tm:
                this_type = tm.group(1)
            this_named = pm0.group(2)
            plist = plist[1:]
        elif p0 == "void":
            plist = []
    params = []
    for p in plist:
        p = p.strip()
        if not p:
            continue
        # split trailing identifier as name
        pm = re.match(r"^(.*?)([A-Za-z_]\w*)\s*$", p)
        if pm and pm.group(1).strip():
            pt, pn = clean_type(pm.group(1)), pm.group(2)
        else:
            pt, pn = clean_type(p), "a%d" % (len(params) + 1)
        if pn in ("class", "struct", "default"):  # keywords leaked as names
            pn = "a%d" % (len(params) + 1)
        params.append((pt, pn))
    cls = method = ""
    if "::" in name:
        cls, method = name.rsplit("::", 1)
    elif cc == "__thiscall" or (fn.proto and "__thiscall" in fn.proto):
        cls = "__ownerless__"
    return {"ret": ret, "cc": cc, "cls": cls, "method": method,
            "flat": name, "params": params, "this_type": this_type,
            "this_named": this_named}


IDENT_INVALID = re.compile(r"^[A-Za-z_]\w*$")

# G6 (#56): this 参数的标量类型（非类 receiver）
THIS_PRIM_TYPES = {
    "int", "char", "void", "short", "long", "unsigned", "float", "double",
    "_DWORD", "_BYTE", "_WORD", "_QWORD", "BOOL", "__int16", "__int64",
    "wchar_t", "struct", "union", "const", "unsigned",
}

_VERIFIER = None   # lazy: (verify_execution_flow, maps, efv_ida_events)


def recv_sites(pseudocode):
    """G6（Gap2Recv 机制复用）：用验证器同源 leaf（efv_ida_events——含
    _IDA_VTABLE_INDIRECT 通用间接调用形态）提取 this 相对偏移
    （READ/WRITE(member,N) / CALL(vfptr+N)）——保证 member_lookup 注册偏移
    与 verify 后续计算口径一致。"""
    global _VERIFIER
    if _VERIFIER is None:
        sys.path.insert(0, str(ROOT / "tools"))
        import verify_execution_flow as V
        import efv_ida_events as E
        _VERIFIER = (V, V.load_all_maps(), E)
    V, M, E = _VERIFIER
    this_type = V.detect_this_type(pseudocode)
    leaf = E.make_ida_leaf(this_type, M)
    members, vf = {}, set()
    for line in pseudocode.split("\n"):
        for ev in leaf(line):
            m = re.match(r"(READ|WRITE)\(member,(\d+)\)", ev)
            if m:
                members[int(m.group(2))] = 4
                continue
            m2 = re.match(r"CALL\(vfptr\+(\d+)\)", ev)
            if m2:
                vf.add(int(m2.group(1)))
    return members, vf


def qualify_ns(ns):
    if not ns:
        return []
    return ns.split("::")


# ---------------------------------------------------------------- refresh
REC_ADDR_LINE = re.compile(r"^// 0x[0-9A-Fa-f]+$")
DEF_NAME_RE = re.compile(r"([A-Za-z_~][\w:]*)\s*\(")


def scan_e4_preserved():
    """F4 refresh：src/e4 已翻译记录（// 0xADDR 块内无 MARKER）。
    返回 {addr: (filename, block_text)}。块边界 = 顶层 `// 0xADDR` 行到下一个。"""
    preserved = {}
    if not E4.exists():
        return preserved
    for p in sorted(E4.glob("*.cpp")):
        lines = p.read_text(encoding="latin-1").split("\n")
        # G2 修复：G1 收割会在 def 行与 '{' 之间维护内注解
        # （`void F()` 换行 `// 0xADDR` 换行 `{`）。判据：注解行的前一非空行
        # 是 def 头（含 '(' 且无 '{'/';'）= 内注解，不是记录头。历史文件存在
        # 括号失衡（G1 遗留），不可用深度门——否则失衡点后的已译记录全丢。
        starts = []
        for i, ln in enumerate(lines):
            if REC_ADDR_LINE.match(ln):
                # 记录头判据（正向+上下文）：
                #  a) 下一非空行以 'namespace' 开头（member/free 标准形态）；或
                #  b) 下一非空行是 def 行，且上一非空行以 '}' 收尾（上一记录闭合）
                # G10 修复：b) 的 prev 守卫扩展——文件首记录的上一非空行是
                # `#include`/`//` 注释 prelude 或文件起点（G9 波次译体大量为
                # 文件首记录，旧守卫漏识别 → refresh 重复物化毁译体）。
                # G1 内注解两种形态仍被排除：def 行后（上一行=def 头）、
                # pending 块 marker 区内（下一行='{' 非 def）。
                k = i + 1
                while k < len(lines) and not lines[k].strip():
                    k += 1
                nxt = lines[k].strip() if k < len(lines) else ""
                if nxt.startswith("namespace"):
                    starts.append(i)
                    continue
                if "(" in nxt and "{" not in nxt:
                    j = i - 1
                    while j >= 0 and not lines[j].strip():
                        j -= 1
                    prev = lines[j].strip() if j >= 0 else ""
                    if (prev.startswith("}") or prev.startswith("#")
                            or prev.startswith("//") or j < 0):
                        starts.append(i)
            # G10 修复：def 行行尾内联注解（`RET Cls::M(...) { // 0xADDR`）
            # 也是记录起点——舰队波 replace_body 维护的形态，旧扫描器不可见。
            m2 = DEF_INLINE_ADDR_RE.match(ln)
            if m2:
                starts.append(i)
        for bi, s in enumerate(starts):
            e = starts[bi + 1] if bi + 1 < len(starts) else len(lines)
            block = "\n".join(lines[s:e]).rstrip()
            addr = None
            head = lines[s].strip()
            if REC_ADDR_LINE.match(head):
                try:
                    addr = int(head[3:], 16)
                except ValueError:
                    addr = None
            else:
                m2 = DEF_INLINE_ADDR_RE.match(lines[s])
                if m2:
                    addr = int(m2.group(1), 16)
            if addr is None:
                continue
            if MARKER not in block:
                preserved[addr] = (p.name, block)
    return preserved


def preserved_names(preserved):
    """从保留块提取定义名，用于 used_names 预播种（防止重名再分配漂移）。"""
    names = {"member": set(), "free": set()}
    for _, (_fn, block) in preserved.items():
        for ln in block.split("\n"):
            if ln.startswith("namespace") or ln.startswith("//") or not ln.strip():
                continue
            m = DEF_NAME_RE.search(ln)
            if m:
                nm = m.group(1)
                if "::" in nm:
                    names["member"].add(nm)
                else:
                    names["free"].add(nm)
                break
    return names


# ---------------------------------------------------------------- apply phase
def main_apply(bodyless, fns, src_classes, refresh=False, preserved=None):
    import time
    t0 = time.time()
    os.makedirs(E4, exist_ok=True)
    (E4 / "classes").mkdir(exist_ok=True)
    preserved = preserved or {}
    if refresh:
        bodyless = [f for f in bodyless if f.addr not in preserved]
        print(f"refresh: {len(preserved)} translated e4 records preserved")

    mmap = MemberMap()
    csp = json.load(open(ROOT / "tools" / "csp" / "full_report" / "csp_functions.json",
                         encoding="utf-8"))["functions"]
    # addr -> inferred owner class (for sub_* thiscall)
    csp_owner = {}
    for a, v in csp.items():
        try:
            ai = int(str(a), 16)
        except ValueError:
            continue
        ic = v.get("inferred_real_class") or ""
        if ic and not str(v.get("original_name", "")).count("::"):
            csp_owner[ai] = ic

    stats = {"rewritten": 0, "unmapped": 0, "member_def": 0, "free_def": 0,
             "e2_classes": 0, "decl_inserted": 0, "decl_skipped": 0, "name_dedup": 0}
    recv_ml = {}                          # G6: E4Recv 合成类 -> member_lookup entry
    recv_vt = {}                          # G6: E4Recv 合成类 -> vtable_offsets entry
    hpp_inserts = defaultdict(list)     # hpp path -> [(class, decl_line, addr)]
    e2_classes = {}                     # cls -> [decl lines]
    bucket_defs = defaultdict(list)     # out cpp name -> [header lines]
    bucket_e2 = defaultdict(set)        # out cpp name -> e2 class names needed
    used_names = defaultdict(set)       # namespace -> used flat/qualified names
    if refresh:
        pn = preserved_names(preserved)
        used_names["member"] |= pn["member"]
        used_names["free"] |= pn["free"]
    globals_used = set()
    # G30 #154: MEMORY[0xADDR] forms and off-index IDA data labels
    # (dword_XXXXXX etc.) carry no gindex name -> were never declared.
    globals_addr_used = set()
    globals_label_used = set()

    # pre-load globals index
    gindex = {}
    gtxt = (EXPORT / "globals.hpp").read_text(encoding="utf-8", errors="replace")
    for gm in re.finditer(
            r"extern\s+.*?[\s\*]([A-Za-z_]\w*)\s*(?:=|;|\[)\s*(?:\[(\d+)\])?\s*;\s*//\s*0x([0-9A-Fa-f]+)",
            gtxt):
        gindex[gm.group(1)] = (int(gm.group(3), 16), int(gm.group(2) or 0))
    # targeted: collect declared names once (concat all src hpp)
    src_all = []
    for p in SRC.rglob("*.hpp"):
        if "e4" not in p.parts:
            try:
                src_all.append(p.read_text(encoding="latin-1"))
            except OSError:
                pass
    src_blob = "\n".join(src_all)
    del src_all

    def globals_type_size(gname):
        if gname.startswith("dword_"):
            return "unsigned int", 0
        if gname.startswith("word_"):
            return "unsigned short", 0
        if gname.startswith("byte_"):
            return "unsigned char", 0
        if gname.startswith("qword_"):
            return "unsigned long long", 0
        addr, size = gindex.get(gname, (0, 4))
        return None, max(size or 4, 4)

    idscan = re.compile(r"[A-Za-z_]\w*")

    for fn in bodyless:
        # G11: v4 截断伪码（[NNN chars total]）→ ida_cache 完整版置换（live 回填）；
        # 置换发生在签名合成/OO 重写之前，完整伪码同样吃成员重写。无缓存诚实截断。
        if TRUNC_MARK.search(fn.pseudocode):
            full = trunc_cache_get(fn.addr)
            if full:
                fn.pseudocode = full
                stats["trunc_repaired"] = stats.get("trunc_repaired", 0) + 1
        sig = synth_signature(fn)
        # 类归属与方法名以记录名行（fn.name = IDA label = signals 权威）为准；
        # 伪码声明行的名字可能是 T14 时代嵌入的旧类型名（如 _vt06 vs Clear）。
        owner = ""
        if "::" in fn.name:
            owner = fn.name.rsplit("::", 1)[0]
        elif sig and sig["cc"] == "__thiscall":
            owner = csp_owner.get(fn.addr, "")
        if sig and "::" in fn.name:
            sig["cls"] = fn.name.rsplit("::", 1)[0]
            sig["method"] = fn.name.rsplit("::", 1)[1]
        # Class[N] 数组污染名合法化
        if owner and not IDENT_INVALID.match(owner):
            owner = re.sub(r"\[", "_", owner).rstrip("]")
        if sig and sig["cls"] and not IDENT_INVALID.match(sig["cls"]):
            sig["cls"] = re.sub(r"\[", "_", sig["cls"]).rstrip("]")
        # G6b: IDA 将 thiscall this 参数随意命名（Block/FileName/a1 等）→ 函数体
        # 引用该名而非 this。按 ABI 首参即 this，词边界归一为 this，使 OO 重写与
        # 验证器两侧事件文法一致（记录内标识符唯一作用于该参数，归一安全）。
        if sig and sig["cc"] == "__thiscall" and sig.get("this_named") \
                and sig["this_named"] != "this":
            fn.pseudocode = re.sub(r"\b%s\b" % re.escape(sig["this_named"]),
                                   "this", fn.pseudocode)
        # G6 (#56 族 1,194)：ownerless-thiscall 曾因多行签名解析失败丢 this + 参数
        # → 自由形态不可译。现出成员形态：typed this 且类在 member_lookup → 真类；
        # 否则合成 E4Recv_<HEX> 接收者类（Gap2Recv 机制：偏移用验证器 leaf 提取，
        # member_lookup M<off> + vtable_offsets Vf<off> 注册，两侧事件按偏移会合）。
        if sig and sig["cls"] == "__ownerless__":
            tt = sig.get("this_type") or ""
            recv_cls = ""
            if tt and tt not in THIS_PRIM_TYPES and tt in mmap.by_class:
                recv_cls = tt
                stats["recv_typed"] = stats.get("recv_typed", 0) + 1
            else:
                recv_cls = "E4Recv_%X" % fn.addr
                members, vf = recv_sites(fn.pseudocode)
                if members or vf:
                    entry = {"0": {"name": "vfptr", "size": 4}}
                    for off in sorted(members):
                        entry[str(off)] = {"name": "M%d" % off, "size": members[off]}
                    recv_ml[recv_cls] = entry
                    mmap.by_class[recv_cls] = {
                        (int(k), v["size"]): v["name"] for k, v in entry.items()}
                    if vf:
                        recv_vt[recv_cls] = {"Vf%d" % o: o for o in sorted(vf)}
                stats["recv_synth"] = stats.get("recv_synth", 0) + 1
            sig["cls"] = recv_cls
            meth = sig["method"] or sig["flat"]
            if not IDENT_INVALID.match(meth or ""):
                meth = re.sub(r"[^A-Za-z0-9_]", "_", meth or "") or ("fn_0x%X" % fn.addr)
            sig["method"] = meth
            owner = recv_cls
        pseudo = rewrite_pseudocode(fn.pseudocode, owner if owner in mmap.by_class else "",
                                    mmap, stats)
        pseudo, was_truncated = emit_pseudo(pseudo)
        if was_truncated:
            stats["truncated"] = stats.get("truncated", 0) + 1
        for ident in idscan.findall(pseudo):
            if ident in gindex:
                globals_used.add(ident)
        for mm in re.finditer(r"\bMEMORY\[0x([0-9A-Fa-f]{6,8})\]", pseudo):
            globals_addr_used.add(int(mm.group(1), 16))
        for lm in re.finditer(
                r"\b((?:dword|word|byte|qword|flt|dbl|unk|stru)_[0-9A-Fa-f]{6,8})\b",
                pseudo):
            if lm.group(1) not in gindex:
                globals_label_used.add(lm.group(1))

        # 桶合并：模板实例桶（Name_arg）并入 Name；地址桶保持 _addr_XX 粒度
        if fn.bucket.startswith("_addr_"):
            file_key = "addr" + fn.bucket[len("_addr_"):]
        else:
            base_bucket = re.sub(r"^[^A-Za-z]+", "", fn.bucket) or fn.bucket
            mkey = re.match(r"[A-Za-z]+", base_bucket)
            file_key = mkey.group(0) if mkey else re.sub(r"[^A-Za-z0-9]", "", fn.bucket)
        out_name = file_key + "_e4.cpp"
        body_lines = ["// 0x%X" % fn.addr]

        if sig and sig["cls"] and sig["cls"] != "__ownerless__" and \
                IDENT_INVALID.match(sig["method"] or ""):
            cls = sig["cls"]
            method = sig["method"]
            qname = "%s::%s" % (cls, method)
            if qname in used_names["member"]:
                qname = "%s::%s_0x%X" % (cls, method, fn.addr)
                method = qname.split("::")[1]
                stats["name_dedup"] += 1
            used_names["member"].add(qname)
            params = ", ".join("%s %s" % (t, n) for t, n in sig["params"])
            if cls in src_classes:
                ns = src_classes[cls]["namespace"]
                decl = "%s %s(%s);" % (sig["ret"], method, params)
                hpp_inserts[src_classes[cls]["path"]].append((cls, decl, fn.addr))
                lines = ["// 0x%X" % fn.addr]
                for n in qualify_ns(ns):
                    lines.append("namespace %s {" % n)
                lines.append("%s %s(%s)" % (sig["ret"], qname, params))
                lines.append("{")
                lines.append(MARKER)
                lines.append(pseudo)
                lines.append("}")
                for n in reversed(qualify_ns(ns)):
                    lines.append("} // namespace %s" % n)
                lines.append("")
                bucket_defs[out_name].extend(lines)
                stats["member_def"] += 1
            else:
                # E2 minimal class in namespace gamemd
                safe_cls = re.sub(r"[^A-Za-z0-9_]", "_", cls)
                decl = "%s %s(%s);" % (sig["ret"], method, params)
                e2_classes.setdefault(safe_cls, []).append((decl, fn.addr))
                bucket_e2[out_name].add(safe_cls)
                lines = ["// 0x%X" % fn.addr, "namespace gamemd {",
                         "%s %s::%s(%s)" % (sig["ret"], safe_cls, method, params),
                         "{", MARKER, pseudo, "}", "} // namespace gamemd", ""]
                bucket_defs[out_name].extend(lines)
                stats["member_def"] += 1
        else:
            # free function form
            flat = sig["flat"] if sig else (fn.name.replace("::", "_"))
            if not IDENT_INVALID.match(flat or ""):
                flat = re.sub(r"[^A-Za-z0-9_]", "_", flat) or ("fn_0x%X" % fn.addr)
            if flat in used_names["free"]:
                flat = "%s_0x%X" % (flat, fn.addr)
                stats["name_dedup"] += 1
            used_names["free"].add(flat)
            params = ", ".join("%s %s" % (t, n) for t, n in sig["params"]) if sig else ""
            lines = ["// 0x%X" % fn.addr, "namespace gamemd {",
                     "%s %s(%s)" % (sig["ret"] if sig else "int", flat, params),
                     "{", MARKER, pseudo, "}", "} // namespace gamemd", ""]
            bucket_defs[out_name].extend(lines)
            stats["free_def"] += 1

    # ---- E1: globals declarations
    missing_globals = []
    for g in sorted(globals_used):
        if re.search(r"\b%s\b" % re.escape(g), src_blob):
            continue
        ty, size = globals_type_size(g)
        addr = gindex[g][0]
        if ty:
            missing_globals.append("extern %s %s;  // data: 0x%X" % (ty, g, addr))
        else:
            missing_globals.append("extern unsigned char %s[%d];  // data: 0x%X" % (g, size, addr))
    # G30 #154: declare MEMORY[0xADDR] / off-index label references. Resolve
    # the address to an exported name when one exists, else synthesize
    # DataGlobal_%X (house convention); label forms keep the IDA label typed
    # by prefix. The refresh dedup-by-name below keeps these idempotent.
    gaddr_name = {}
    for _gn, (_ga, _gs) in gindex.items():
        gaddr_name.setdefault(_ga, _gn)
    _LABEL_PREFIX_TYPE = (("qword_", "unsigned long long"), ("dword_", "unsigned int"),
                          ("word_", "unsigned short"), ("byte_", "unsigned char"),
                          ("flt_", "float"), ("dbl_", "double"))
    for addr in sorted(globals_addr_used):
        name = gaddr_name.get(addr) or ("DataGlobal_%X" % addr)
        if re.search(r"\b%s\b" % re.escape(name), src_blob):
            continue
        missing_globals.append("extern unsigned int %s;  // data: 0x%X" % (name, addr))
    for lbl in sorted(globals_label_used):
        if re.search(r"\b%s\b" % re.escape(lbl), src_blob):
            continue
        ty = next((t for p, t in _LABEL_PREFIX_TYPE if lbl.startswith(p)), "unsigned int")
        try:
            laddr = int(lbl.rsplit("_", 1)[1], 16)
        except ValueError:
            laddr = 0
        missing_globals.append("extern %s %s;  // data: 0x%X" % (ty, lbl, laddr))
    gh = E4 / "e4_globals.hpp"
    if refresh and gh.exists():
        new_names = set()
        for ln in missing_globals:
            gm2 = re.match(r"extern\s+.*?[\s\*]([A-Za-z_]\w*)\s*(?:=|;|\[)", ln)
            if gm2:
                new_names.add(gm2.group(1))
        for ln in gh.read_text(encoding="latin-1").split("\n"):
            gm = re.match(r"extern\s+.*;\s*//\s*data:\s*(0x[0-9A-Fa-f]+)", ln.strip())
            if gm:
                gname = re.match(r"extern\s+.*?[\s\*]([A-Za-z_]\w*)\s*(?:=|;|\[)", ln.strip())
                # dedup BY NAME: the old line-in-list check compared a bare
                # name against declaration LINES (always true), so stale
                # declarations with conflicting types were re-appended forever
                if gname and gname.group(1) not in new_names:
                    missing_globals.append(ln.strip())
        missing_globals = sorted(set(missing_globals), key=lambda s: s.lower())
    # safety net: one declaration per global name (first wins -- new-run
    # declarations are emitted before refreshed legacy lines)
    _by_name = {}
    for ln in missing_globals:
        gname = re.match(r"extern\s+.*?[\s\*]([A-Za-z_]\w*)\s*(?:=|;|\[)", ln.strip())
        if gname:
            _by_name.setdefault(gname.group(1), ln)
    missing_globals = sorted(_by_name.values(), key=lambda s: s.lower())
    gh.write_text(
        "// E1: pseudo-body referenced globals missing from src (auto-generated)\n"
        "#pragma once\n#include <cstdint>\n\n" + "\n".join(missing_globals) + "\n",
        encoding="utf-8")
    print(f"E1 globals: {len(globals_used)} referenced, {len(missing_globals)} declared missing")

    # ---- E2: minimal class declarations
    for cls, decls in sorted(e2_classes.items()):
        p = E4 / "classes" / ("%s_e4.hpp" % cls)
        lines = ["// E2 minimal declaration (auto-generated, full layout via member_lookup/til)",
                 "#pragma once", "", "namespace gamemd {", "struct %s {" % cls,
                 "    void* vfptr;  // minimal E2 declaration"]
        # G6: E4Recv 合成类的 vtable 槽位方法（变参形态——任意调用点实参可编译；
        # 事件层按 vtable_offsets 表驱动解析为 CALL(vfptr+N)，与声明无关）
        for slotname in sorted(recv_vt.get(cls, {})):
            lines.append("    int %s(int, ...);  // G6 vtable slot dispatch" % slotname)
        seen = set()
        for d, addr in decls:
            if d.split("(")[0].split()[-1] in seen:
                continue
            seen.add(d.split("(")[0].split()[-1])
            lines.append("    %s  // 0x%X" % (d, addr))
        if refresh and p.exists():
            # 保留既有声明（已翻译 cpp 块可能仍引用）
            body = p.read_text(encoding="latin-1").split("\n")
            for ln in body:
                ms = re.match(r"\s{4}(.*?);\s*//\s*0x[0-9A-Fa-f]+\s*$", ln)
                if ms:
                    mname = ms.group(1).split("(")[0].split()[-1]
                    if mname not in seen:
                        seen.add(mname)
                        lines.append(ln.rstrip())
        lines.append("};")
        lines.append("} // namespace gamemd")
        p.write_text("\n".join(lines) + "\n", encoding="utf-8")
    stats["e2_classes"] = len(e2_classes)
    print(f"E2 minimal classes: {len(e2_classes)}")

    # ---- E3: hpp declaration insertion (existing classes)
    edited_hpp = 0
    for hpp_path, items in sorted(hpp_inserts.items()):
        try:
            txt = open(hpp_path, encoding="latin-1", newline="").read()
        except OSError:
            stats["decl_skipped"] += len(items)
            continue
        by_class = defaultdict(list)
        for cls, decl, addr in items:
            by_class[cls].append((decl, addr))
        changed = False
        for cls, decls in by_class.items():
            # locate class definition line — 跳过前向声明（行尾分号）。
            # 曾因匹配 fwd decl `class X;` 后 find("{") 落到下一个类体，
            # 把声明插进错误类（house.hpp StartingTechnoStruct 实证）。
            m = None
            for cand in re.finditer(
                    r"^[ \t]*(?:class|struct)\s+%s\b[^\n]*$" % re.escape(cls),
                    txt, re.M):
                if cand.group(0).rstrip().endswith(";"):
                    continue
                m = cand
                break
            if not m:
                stats["decl_skipped"] += len(decls)
                continue
            # brace match from (possibly next) '{' — count only code braces
            # (strip line comments/char literals/string literals first)
            def _code(s):
                s = re.sub(r"//[^\n]*", "", s)
                s = re.sub(r"'[^'\n]*'", "", s)
                s = re.sub(r'"[^"\n]*"', "", s)
                return s

            start = txt.find("{", m.start())
            if start < 0:
                stats["decl_skipped"] += len(decls)
                continue
            depth, i = 0, start
            first = True
            while i < len(txt):
                nl = txt.find("\n", i)
                if nl < 0:
                    nl = len(txt)
                line = _code(txt[i:nl])
                depth += line.count("{") - line.count("}")
                if not first and depth <= 0:
                    break
                first = False
                i = nl + 1
            if depth != 0:
                stats["decl_skipped"] += len(decls)
                continue
            # i = line start whose code braces closed the class
            seg = txt[m.start():i]
            new_lines = []
            inserted = 0
            for decl, addr in decls:
                mname = decl.split("(")[0].split()[-1]
                if re.search(r"\b%s\s*\(" % re.escape(mname), seg):
                    stats["decl_skipped"] += 1
                    continue
                new_lines.append("    %s  // 0x%X" % (decl, addr))
                inserted += 1
            if not inserted:
                continue
            # find line start of closing brace
            ls = txt.rfind("\n", 0, i) + 1
            indent = re.match(r"[ \t]*", txt[ls:i]).group(0)
            block = indent + "// --- e4 declarations (BEGIN) ---\n" + \
                    "\n".join(new_lines) + "\n" + \
                    indent + "// --- e4 declarations (END) ---\n"
            txt = txt[:ls] + block + txt[ls:]
            changed = True
            stats["decl_inserted"] += inserted
        if changed:
            open(hpp_path, "w", encoding="latin-1", newline="").write(txt)
            edited_hpp += 1
    print(f"E3 hpp decls: inserted={stats['decl_inserted']} skipped={stats['decl_skipped']} "
          f"files={edited_hpp}")

    # ---- E4: bucket cpp files
    preserved_by_file = defaultdict(list)
    if refresh:
        for addr, (fn, block) in sorted(preserved.items()):
            preserved_by_file[fn].append(block)

    out_names = set(bucket_defs) | (set(preserved_by_file) if refresh else set())
    for out_name in sorted(out_names):
        p = E4 / out_name
        lines = bucket_defs.get(out_name, [])
        if not refresh and p.exists():
            existing = p.read_text(encoding="latin-1")
            addr_lines = [l for l in lines if l.startswith("// 0x")]
            dup = sum(1 for l in addr_lines if ("\n" + l + "\n") in existing)
            if dup:
                print(f"  {out_name}: {dup} already present (idempotent skip)")
                if dup == len(addr_lines):
                    continue
        # include 保留块引用的 e2 类（保守：并集全部既有 include）
        fresh_incs = {"e4/classes/%s_e4.hpp" % c for c in bucket_e2.get(out_name, ())}
        if refresh and p.exists():
            fresh_incs |= set(re.findall(r'#include "(e4/classes/[^"]+)"',
                                         p.read_text(encoding="latin-1")))
        incs = ['#include "%s"' % c for c in sorted(fresh_incs)]
        header = ["// E4 materialized pending bodies (auto-generated from full_export v3)",
                  "#include <cstdint>", '#include "e4/e4_globals.hpp"'] + incs + [""]
        body = "\n".join(lines)
        tail = ""
        if refresh and preserved_by_file.get(out_name):
            tail = ("\n" if body else "") + "\n\n".join(
                preserved_by_file[out_name]) + "\n"
            body = body + ("\n" if body and not body.endswith("\n") else "")
        p.write_text("\n".join(header) + "\n" + body + tail, encoding="utf-8")
    # ---- G6: E4Recv 合成接收者类落盘（member_lookup / vtable_offsets /
    # signals._member_by_name——与 verify / get_context / rename 消费端一致）
    if recv_ml or recv_vt:
        ml_path = ROOT / "tools" / "member_lookup.json"
        ml = json.load(open(ml_path, encoding="utf-8"))
        for c, e in recv_ml.items():
            ml[c] = e
        with open(ml_path, "w", encoding="utf-8", newline="\n") as f:
            json.dump(ml, f, indent=2, ensure_ascii=False)
        vt_path = ROOT / "tools" / "vtable_offsets.json"
        vt = json.load(open(vt_path, encoding="utf-8"))
        for c, e in recv_vt.items():
            vt[c] = e
        with open(vt_path, "w", encoding="utf-8", newline="\n") as f:
            json.dump(vt, f, indent=2, ensure_ascii=False)
        sig_path = ROOT / "signals.json"
        sdata = json.load(open(sig_path, encoding="utf-8"))
        mbn = sdata.setdefault("_member_by_name", {})
        for c, e in recv_ml.items():
            mbn[c] = {v["name"]: int(k) for k, v in e.items()}
        for attempt in range(6):
            try:
                with open(sig_path, "w", encoding="utf-8", newline="\n") as f:
                    json.dump(sdata, f, indent=2, ensure_ascii=False)
                break
            except OSError:
                time.sleep(0.2 * (attempt + 1))
        print(f"G6 recv classes: synth={len(recv_ml)} (vt={len(recv_vt)}) "
              f"typed={stats.get('recv_typed', 0)}")
    print(f"E4 buckets: {len(bucket_defs)} files, member={stats['member_def']} "
          f"free={stats['free_def']}")
    print(f"offset rewrite: {stats['rewritten']} rewritten, {stats['unmapped']} unmapped")
    print(f"elapsed {time.time()-t0:.0f}s")
    json.dump({"stats": stats, "globals_missing": len(missing_globals),
               "e2_classes": len(e2_classes), "buckets": len(bucket_defs)},
              open(REPORT, "w", encoding="utf-8"), indent=2)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--phase", default="inventory",
                    choices=["inventory", "apply", "refresh"])
    ap.add_argument("--limit", type=int, default=0, help="只处理前 N 个（测试用）")
    args = ap.parse_args()

    print("scanning src addresses ...")
    src_addrs, nfiles = scan_src_addrs()
    print(f"  {len(src_addrs)} code addrs annotated across {nfiles} files")

    print("parsing v3 export ...")
    fns = parse_v3_functions()
    print(f"  {len(fns)} functions exported")

    bodyless = [f for f in fns if f.addr not in src_addrs]
    print(f"  bodyless (no src // 0xADDR): {len(bodyless)}")

    if args.phase == "inventory":
        named = [f for f in bodyless if not re.match(r"^sub_[0-9A-Fa-f]+$", f.name.split("::")[-1])]
        sub = [f for f in bodyless if re.match(r"^sub_[0-9A-Fa-f]+$", f.name.split("::")[-1])]
        member = [f for f in named if "::" in f.name and f.proto and "thiscall" in f.proto]
        print(f"  composition: named={len(named)} sub_*={len(sub)} thiscall-member={len(member)}")
        buckets = defaultdict(int)
        for f in bodyless:
            buckets[f.bucket] += 1
        top = sorted(buckets.items(), key=lambda x: -x[1])[:15]
        print("  top buckets:", top)
        json.dump({"src_addr_count": len(src_addrs), "v3_functions": len(fns),
                   "bodyless": len(bodyless), "named": len(named), "sub_wildcard": len(sub),
                   "thiscall_member": len(member), "top_buckets": top},
                  open(REPORT, "w", encoding="utf-8"), indent=2)
        print(f"report -> {REPORT}")
        return

    src_classes = scan_src_classes()
    print(f"  src classes: {len(src_classes)}")
    preserved = {}
    if args.phase == "refresh":
        preserved = scan_e4_preserved()
        print(f"  refresh: {len(preserved)} translated e4 records preserved")
    if args.limit:
        bodyless = bodyless[:args.limit]
        print(f"  --limit {args.limit}: processing subset")
    main_apply(bodyless, fns, src_classes,
               refresh=(args.phase == "refresh"), preserved=preserved)


if __name__ == "__main__":
    main()
