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
            if not m:
                continue
            a = int(m.group(1), 16)
            if not (0x401000 <= a <= 0x7E0FFF):
                continue
            window = lines[i + 1:i + 4]
            has_def = any("(" in w for w in window) and any(
                w.rstrip().endswith("{") or "{" in w for w in window)
            if has_def:
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
        for cname, c in cl.items():
            offs = c.get("offsets") or {}
            m = {}
            for k, v in offs.items():
                if isinstance(v, dict) and "ida_name" in v:
                    try:
                        m[(int(k), int(v.get("size", 4)))] = v["ida_name"]
                    except (ValueError, TypeError):
                        pass
            if m:
                self.by_class[cname] = m

    def member(self, cls, offset, width):
        mm = self.by_class.get(cls)
        if not mm:
            return None
        name = mm.get((offset, width))
        if name:
            return name
        # member occupying exactly this offset with pointer/other 4B size
        if width == 4 and mm.get((offset, 4)):
            return mm[(offset, 4)]
        return None


def rewrite_pseudocode(pseudo, cls, mmap, stats):
    if not cls:
        return pseudo

    def sub_idx(m):
        w = WIDTH[m.group(1)]
        off = int(m.group(2)) * w
        nm = mmap.member(cls, off, w)
        if nm:
            stats["rewritten"] += 1
            return "this->" + nm
        stats["unmapped"] += 1
        return m.group(0)

    def sub_off(m, group=2):
        w = WIDTH[m.group(1)]
        off = int(m.group(group))
        nm = mmap.member(cls, off, w)
        if nm:
            stats["rewritten"] += 1
            return "*&this->" + nm if False else "this->" + nm
        stats["unmapped"] += 1
        return m.group(0)

    def sub_ptr(m):
        off = int(m.group(1))
        nm = mmap.member(cls, off, 4)
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
    """从伪码声明行合成外层签名。返回 dict(ret, cc, cls, method, flat, params=[(type,name)])."""
    first = fn.pseudocode.split("\n", 1)[0].strip()
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
    params = []
    for p in split_params(params_raw):
        p = p.strip()
        if not p:
            continue
        # split trailing identifier as name
        pm = re.match(r"^(.*?)([A-Za-z_]\w*)\s*$", p)
        if pm and pm.group(1).strip():
            pt, pn = clean_type(pm.group(1)), pm.group(2)
        else:
            pt, pn = clean_type(p), "a%d" % (len(params) + 1)
        if pn == "this":
            continue
        if pn in ("class", "struct", "default"):  # keywords leaked as names
            pn = "a%d" % (len(params) + 1)
        params.append((pt, pn))
    cls = method = ""
    if "::" in name:
        cls, method = name.rsplit("::", 1)
    elif fn.proto and "__thiscall" in fn.proto:
        cls = "__ownerless__"
    return {"ret": ret, "cc": cc, "cls": cls, "method": method,
            "flat": name, "params": params}


IDENT_INVALID = re.compile(r"^[A-Za-z_]\w*$")


def qualify_ns(ns):
    if not ns:
        return []
    return ns.split("::")


# ---------------------------------------------------------------- apply phase
def main_apply(bodyless, fns, src_classes):
    import time
    t0 = time.time()
    os.makedirs(E4, exist_ok=True)
    (E4 / "classes").mkdir(exist_ok=True)

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
    hpp_inserts = defaultdict(list)     # hpp path -> [(class, decl_line, addr)]
    e2_classes = {}                     # cls -> [decl lines]
    bucket_defs = defaultdict(list)     # out cpp name -> [header lines]
    bucket_e2 = defaultdict(set)        # out cpp name -> e2 class names needed
    used_names = defaultdict(set)       # namespace -> used flat/qualified names
    globals_used = set()

    # pre-load globals index
    gindex = {}
    gtxt = (EXPORT / "globals.hpp").read_text(encoding="utf-8", errors="replace")
    for gm in re.finditer(
            r"extern\s+[\w\s\*]+?\s+([A-Za-z_]\w*)\s*(?:\[(\d+)\])?\s*;\s*//\s*0x([0-9A-Fa-f]+)",
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
        pseudo = rewrite_pseudocode(fn.pseudocode, owner if owner in mmap.by_class else "",
                                    mmap, stats)
        pseudo, was_truncated = emit_pseudo(pseudo)
        if was_truncated:
            stats["truncated"] = stats.get("truncated", 0) + 1
        for ident in idscan.findall(pseudo):
            if ident in gindex:
                globals_used.add(ident)

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
    gh = E4 / "e4_globals.hpp"
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
        seen = set()
        for d, addr in decls:
            if d.split("(")[0].split()[-1] in seen:
                continue
            seen.add(d.split("(")[0].split()[-1])
            lines.append("    %s  // 0x%X" % (d, addr))
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
            # locate class definition line
            m = re.search(r"^[ \t]*(?:class|struct)\s+%s\b[^\n]*$" % re.escape(cls),
                          txt, re.M)
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
    for out_name, lines in sorted(bucket_defs.items()):
        p = E4 / out_name
        if p.exists():
            existing = p.read_text(encoding="latin-1")
            addr_lines = [l for l in lines if l.startswith("// 0x")]
            dup = sum(1 for l in addr_lines if ("\n" + l + "\n") in existing)
            if dup:
                print(f"  {out_name}: {dup} already present (idempotent skip)")
                if dup == len(addr_lines):
                    continue
        incs = ['#include "e4/classes/%s_e4.hpp"' % c
                for c in sorted(bucket_e2.get(out_name, ()))]
        header = ["// E4 materialized pending bodies (auto-generated from full_export v3)",
                  "#include <cstdint>", '#include "e4/e4_globals.hpp"'] + incs + [""]
        p.write_text("\n".join(header) + "\n" + "\n".join(lines), encoding="utf-8")
    print(f"E4 buckets: {len(bucket_defs)} files, member={stats['member_def']} "
          f"free={stats['free_def']}")
    print(f"offset rewrite: {stats['rewritten']} rewritten, {stats['unmapped']} unmapped")
    print(f"elapsed {time.time()-t0:.0f}s")
    json.dump({"stats": stats, "globals_missing": len(missing_globals),
               "e2_classes": len(e2_classes), "buckets": len(bucket_defs)},
              open(REPORT, "w", encoding="utf-8"), indent=2)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--phase", default="inventory", choices=["inventory", "apply"])
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
    if args.limit:
        bodyless = bodyless[:args.limit]
        print(f"  --limit {args.limit}: processing subset")
    main_apply(bodyless, fns, src_classes)


if __name__ == "__main__":
    main()
