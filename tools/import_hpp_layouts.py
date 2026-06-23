#!/usr/bin/env python3
"""
import_hpp_layouts.py  --  Phase A of the "authoritative member-offset source".

Parses class/struct layouts from src/**/*.hpp, computes their MSVC6 (4-byte
packed) ABI layout using `_field_NNN` / `alignmentPaddingNNN` name-embedded
offset anchors as binary-truth pins, emits C `struct` declarations and (when run
inside IDA) declares them into the local type library, reads them back via the
type system, validates anchored offsets, saves the IDB, and dumps:

    tools/class_layouts.json   -- IDA-read-back layouts  (consumed by build_signals.py, Phase B)
    tools/layout_report.json   -- per-class status / failures / anchor checks

Run standalone (no IDA)         ->  parse + compute + emit C, write class_layouts.json
                                    from the *computed* layout + write the C blob to disk.
Run inside IDA (py_exec_file)   ->  additionally declare into IDA, read back, validate,
                                    idb_save, and overwrite class_layouts.json with the
                                    IDA-read-back layout (authoritative).

Design notes (see .omo/notepads/execution-flow-cfg/learnings.md):
 * The hpp is a *lossy* reconstruction: deep classes (e.g. TechnoClass) are a few
   dozen bytes short of the real binary. The `_field_NNN` anchors encode the REAL
   binary offsets; we snap the running offset FORWARD to each anchor (never
   shrink) so anchored members + class size match the binary, while members
   between anchors are placed by size (approximate, re-synced at the next anchor).
 * Emitted structs use `#pragma pack(push,1)` + explicit gap padding before every
   member, so IDA reproduces the computed offsets byte-for-byte with zero
   alignment ambiguity.
 * Pointers are emitted as `void *` (4 bytes) for layout; the real C++ type string
   is preserved in class_layouts.json["<Class>"]["offsets"][off]["cpp_type"] for
   Phase B.
"""

import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
PROJECT_ROOT = os.path.dirname(HERE)
SRC = os.path.join(PROJECT_ROOT, "src")
OUT_LAYOUTS = os.path.join(HERE, "class_layouts.json")
OUT_REPORT = os.path.join(HERE, "layout_report.json")
OUT_CBLOB = os.path.join(HERE, "class_layouts.h")

# ---------------------------------------------------------------------------
# primitive type sizes: (size, align)  -- align capped at 4 (MSVC6 /Zp4 reality)
# ---------------------------------------------------------------------------
PRIM = {
    "char": (1, 1), "signed char": (1, 1), "unsigned char": (1, 1), "bool": (1, 1),
    "int8_t": (1, 1), "uint8_t": (1, 1), "int8": (1, 1), "uint8": (1, 1), "byte": (1, 1),
    "BYTE": (1, 1), "BOOLEAN": (1, 1),
    "short": (2, 2), "unsigned short": (2, 2), "int16_t": (2, 2), "uint16_t": (2, 2),
    "int16": (2, 2), "uint16": (2, 2), "word": (2, 2), "WORD": (2, 2), "wchar_t": (2, 2),
    "WCHAR": (2, 2), "short int": (2, 2),
    "int": (4, 4), "unsigned int": (4, 4), "unsigned": (4, 4), "long": (4, 4),
    "unsigned long": (4, 4), "signed int": (4, 4), "long int": (4, 4),
    "int32_t": (4, 4), "uint32_t": (4, 4), "int32": (4, 4), "uint32": (4, 4),
    "dword": (4, 4), "DWORD": (4, 4), "float": (4, 4), "HRESULT": (4, 4),
    "ULONG": (4, 4), "LONG": (4, 4), "UINT": (4, 4), "BOOL": (4, 4), "COLORREF": (4, 4),
    "double": (8, 4), "int64_t": (8, 4), "uint64_t": (8, 4), "int64": (8, 4),
    "uint64": (8, 4), "__int64": (8, 4), "long long": (8, 4), "LONGLONG": (8, 4),
}

# IDA C type name for each primitive (size-faithful)
PRIM_IDA = {
    "char": "char", "signed char": "signed char", "unsigned char": "unsigned char",
    "bool": "bool", "int8_t": "char", "uint8_t": "unsigned char", "int8": "char",
    "uint8": "unsigned char", "byte": "unsigned char", "BYTE": "unsigned char",
    "BOOLEAN": "unsigned char",
    "short": "short", "unsigned short": "unsigned short", "int16_t": "short",
    "uint16_t": "unsigned short", "int16": "short", "uint16": "unsigned short",
    "word": "unsigned short", "WORD": "unsigned short", "wchar_t": "wchar_t",
    "WCHAR": "wchar_t", "short int": "short",
    "int": "int", "unsigned int": "unsigned int", "unsigned": "unsigned int",
    "long": "int", "unsigned long": "unsigned int", "signed int": "int",
    "long int": "int", "int32_t": "int", "uint32_t": "unsigned int",
    "int32": "int", "uint32": "unsigned int", "dword": "unsigned int",
    "DWORD": "unsigned int", "float": "float", "HRESULT": "int", "ULONG": "unsigned int",
    "LONG": "int", "UINT": "unsigned int", "BOOL": "int", "COLORREF": "unsigned int",
    "double": "double", "int64_t": "__int64", "uint64_t": "unsigned __int64",
    "int64": "__int64", "uint64": "unsigned __int64", "__int64": "__int64",
    "long long": "__int64", "LONGLONG": "__int64",
}

# Curated value-struct sizes (verified against hpp + IDA ctor evidence).
# These override computed sizes for nested value members and are declared first.
LEAF_STRUCTS = {
    # name : (size, align)
    "CellStruct": (4, 2), "Point2D": (8, 4), "CoordStruct": (12, 4),
    "RectangleStruct": (16, 4), "ColorStruct": (3, 1), "RGBClass": (3, 1),
    "TimerStruct": (12, 4), "Matrix3D": (48, 4),
    "AudioController": (20, 4), "ProgressTimer": (8, 4),
    "RepeatableTimerStruct": (16, 4), "DirStruct": (4, 4), "FacingStruct": (4, 4),
    "FlashData": (8, 4), "PassengersClass": (8, 4), "VeterancyStruct": (4, 4),
    "RecoilData": (32, 4), "TurretControl": (16, 4), "TransitionTimer": (12, 4),
    "OwnedTiberiumStruct": (16, 4), "MissionControlData": (32, 4),
    # containers (layout independent of <T>)
    "DynamicVectorClass": (24, 4),   # gamemd virtual VectorClass<T>(16) + Count + CapInc
    "VectorClass": (12, 4),          # ra2::game non-virtual: Items + Count + Capacity
    "IndexBitfield": (4, 4),         # single T* pointer
    "noinit_t": (1, 1),
}

# Known template containers -> resolved leaf-struct name (layout T-independent)
TEMPLATE_MAP = {
    "DynamicVectorClass": "DynamicVectorClass",
    "VectorClass": "VectorClass",
    "TypeList": "DynamicVectorClass",     # TypeList<T> : DynamicVectorClass<T>
    "CounterClass": "DynamicVectorClass",
    "IndexBitfield": "IndexBitfield",
    "IndexClass": "VectorClass",
}

# enum underlying-type default size
ENUM_DEFAULT = (4, 4)

# anchor regex: trailing hex (>=2 digits) on a field/padding/align style name.
ANCHOR_RE = re.compile(
    r"(?:field_(?:[A-Za-z]+_)?|[Pp]adding|[Aa]lign(?:ment)?[A-Za-z]*?_?|Field|_)"
    r"([0-9A-Fa-f]{2,4})$"
)

# keywords that begin a non-member statement
SKIP_PREFIX = ("public:", "private:", "protected:", "using ", "using\t",
               "typedef ", "friend ", "static ", "enum ", "struct ", "class ",
               "union ", "template", "virtual ", "inline ", "constexpr ",
               "explicit ", "operator", "~")


def align_up(off, a):
    return (off + a - 1) // a * a


def strip_comments(text):
    out = []
    i, n = 0, len(text)
    while i < n:
        c = text[i]
        if c == "/" and i + 1 < n and text[i + 1] == "/":
            j = text.find("\n", i)
            i = n if j < 0 else j
        elif c == "/" and i + 1 < n and text[i + 1] == "*":
            j = text.find("*/", i + 2)
            i = n if j < 0 else j + 2
        elif c in '"\'':
            q = c
            out.append(c)
            i += 1
            while i < n:
                out.append(text[i])
                if text[i] == "\\" and i + 1 < n:
                    out.append(text[i + 1])
                    i += 2
                    continue
                if text[i] == q:
                    i += 1
                    break
                i += 1
        else:
            out.append(c)
            i += 1
    return "".join(out)


CLASS_RE = re.compile(
    r"\b(class|struct)\s+([A-Za-z_]\w*)\s*(final\s*)?(?::\s*([^{;]*?))?\s*\{")


def find_matching_brace(text, open_idx):
    depth = 0
    i = open_idx
    n = len(text)
    while i < n:
        c = text[i]
        if c == "{":
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0:
                return i
        i += 1
    return -1


def parse_bases(base_str):
    """Return list of base class names (skip access keywords, COM detection elsewhere)."""
    if not base_str:
        return []
    bases = []
    for part in base_str.split(","):
        part = part.strip()
        part = re.sub(r"\b(public|protected|private|virtual)\b", " ", part).strip()
        part = part.split("<")[0].strip()      # drop template args
        part = part.replace("::", " ").split()  # last token = name
        if part:
            bases.append(part[-1])
    return bases


def parse_members(body):
    """Yield (typestr, name, [dims]) for member-variable declarations at depth 1."""
    members = []
    i, n, depth = 0, len(body), 0
    buf = []
    while i < n:
        c = body[i]
        if c == "{":
            # could be: nested type def / method body / member initializer {...}
            stmt = "".join(buf).strip()
            if "(" in stmt or re.match(r"^\s*(struct|class|union|enum)\b", stmt):
                # skip the whole braced block
                end = find_matching_brace(body, i)
                if end < 0:
                    break
                i = end + 1
                # consume trailing ';'
                while i < n and body[i] in " \t\r\n":
                    i += 1
                if i < n and body[i] == ";":
                    i += 1
                buf = []
                continue
            else:
                # member initializer brace e.g. "= {" -- skip to matching brace, keep buf
                end = find_matching_brace(body, i)
                if end < 0:
                    break
                i = end + 1
                continue
        elif c == ";":
            stmt = "".join(buf).strip()
            buf = []
            i += 1
            m = _parse_member_stmt(stmt)
            if m:
                members.append(m)
            continue
        elif c == "}":
            depth -= 1
            buf = []
            i += 1
            continue
        buf.append(c)
        i += 1
    return members


def _parse_member_stmt(stmt):
    if not stmt:
        return None
    s = stmt.strip()
    low = s
    for p in SKIP_PREFIX:
        if low.startswith(p):
            return None
    if "(" in s:          # method / function pointer -> skip (reported as gap)
        return None
    if ":" in s and "::" not in s.replace("::", ""):
        # bitfield "x : 3" -> not supported in these layouts
        if re.search(r":\s*\d+\s*$", s):
            return None
    # strip initializer
    s = re.split(r"(?<![<>=!])=(?!=)", s, maxsplit=1)[0].strip()
    s = s.rstrip(";").strip()
    if not s:
        return None
    # array dims
    dims = [d for d in re.findall(r"\[([^\]]*)\]", s)]
    s_nodims = re.sub(r"\[[^\]]*\]", "", s).strip()
    # name = last identifier
    mm = re.search(r"([A-Za-z_]\w*)\s*$", s_nodims)
    if not mm:
        return None
    name = mm.group(1)
    typestr = s_nodims[:mm.start(1)].strip()
    if not typestr or typestr in ("return", "const", "mutable"):
        return None
    # evaluate dims
    counts = []
    for d in dims:
        d = d.strip()
        if d == "":
            return None  # unsized array -> can't lay out
        try:
            counts.append(int(d, 0))
        except Exception:
            return None  # symbolic dim -> bail
    return (typestr, name, counts)


def anchor_of(name):
    m = ANCHOR_RE.search(name)
    if not m:
        return None
    try:
        return int(m.group(1), 16)
    except Exception:
        return None


def clean_type(t):
    t = t.strip()
    t = re.sub(r"\b(const|volatile|mutable|typename|struct|class|enum)\b", " ", t)
    t = t.replace("ra2::game::", "").replace("gamemd::", "").replace("ra2::", "")
    t = re.sub(r"^\s*::\s*", "", t)
    t = re.sub(r"\s+", " ", t).strip()
    return t


def resolve_type(typestr, registry, enums):
    """Return dict {size, align, ida_decl_base, cpp_type, kind} or None if unresolved."""
    raw = typestr.strip()
    t = clean_type(typestr)
    # pointer (one or more '*'), possibly with const
    if "*" in t:
        return {"size": 4, "align": 4, "ida": "void *", "cpp": raw, "kind": "ptr"}
    # reference -> treat like pointer (rare as member)
    if t.endswith("&"):
        return {"size": 4, "align": 4, "ida": "void *", "cpp": raw, "kind": "ref"}
    # template
    if "<" in t:
        base = t.split("<")[0].strip()
        mapped = TEMPLATE_MAP.get(base)
        if mapped and mapped in LEAF_STRUCTS:
            sz, al = LEAF_STRUCTS[mapped]
            return {"size": sz, "align": al, "ida": mapped, "cpp": raw, "kind": "udt"}
        return None
    # primitive
    if t in PRIM:
        sz, al = PRIM[t]
        return {"size": sz, "align": al, "ida": PRIM_IDA[t], "cpp": raw, "kind": "prim"}
    # curated leaf struct
    if t in LEAF_STRUCTS:
        sz, al = LEAF_STRUCTS[t]
        return {"size": sz, "align": al, "ida": t, "cpp": raw, "kind": "udt"}
    # enum
    if t in enums:
        sz, al = enums[t]
        return {"size": sz, "align": al, "ida": PRIM_IDA["int"] if sz == 4 else PRIM_IDA["unsigned char"], "cpp": raw, "kind": "enum"}
    # known class/struct in registry -> embed by value (size resolved during layout)
    if t in registry:
        return {"size": None, "align": 4, "ida": t, "cpp": raw, "kind": "class"}
    return None


# ---------------------------------------------------------------------------
# hpp scan
# ---------------------------------------------------------------------------
def scan_hpp():
    registry = {}   # name -> {kind, bases, members:[(typestr,name,counts)], file}
    enums = {}      # name -> (size, align)
    files = []
    for root, _dirs, fns in os.walk(SRC):
        for fn in fns:
            if fn.endswith(".hpp"):
                files.append(os.path.join(root, fn))
    for path in files:
        try:
            with open(path, encoding="utf-8", errors="replace") as f:
                text = f.read()
        except Exception:
            continue
        text = strip_comments(text)
        # enums
        for em in re.finditer(r"\benum\s+class\s+([A-Za-z_]\w*)\s*:\s*([A-Za-z_ ]+)", text):
            ut = clean_type(em.group(2))
            sz = PRIM.get(ut, (4, 4))[0]
            enums.setdefault(em.group(1), (sz, sz if sz <= 4 else 4))
        for em in re.finditer(r"\benum\s+class\s+([A-Za-z_]\w*)\s*\{", text):
            enums.setdefault(em.group(1), ENUM_DEFAULT)
        for em in re.finditer(r"\benum\s+([A-Za-z_]\w*)\s*\{", text):
            enums.setdefault(em.group(1), ENUM_DEFAULT)
        # classes / structs
        for cm in CLASS_RE.finditer(text):
            kind, name, _final, bases = cm.group(1), cm.group(2), cm.group(3), cm.group(4)
            open_idx = text.index("{", cm.start())
            end = find_matching_brace(text, open_idx)
            if end < 0:
                continue
            body = text[open_idx + 1:end]
            members = parse_members(body)
            polymorphic = bool(re.search(r"\bvirtual\b", body))
            base_list = parse_bases(bases)
            # first definition wins (forward decls have no body/members already filtered)
            existing = registry.get(name)
            if existing and existing["members"] and not members:
                continue
            registry[name] = {
                "kind": kind, "bases": base_list, "members": members,
                "file": os.path.relpath(path, PROJECT_ROOT).replace("\\", "/"),
                "polymorphic": polymorphic,
            }
    return registry, enums


# COM interface bases that contribute a vtable pointer each (MI root).
COM_BASES = {"IPersistStream", "IRTTITypeInfo", "INoticeSink", "INoticeSource",
             "IUnknown", "IStream", "IPersist"}


def is_com_root(name, info):
    return all(b in COM_BASES for b in info["bases"]) and len(info["bases"]) > 0


# ---------------------------------------------------------------------------
# layout
# ---------------------------------------------------------------------------
def compute_layout(name, registry, enums, sizes, cache, stack):
    """Return (size, fields, warnings, ok). fields = list of dicts in order.
       sizes caches computed sizes. cache caches full results."""
    if name in cache:
        return cache[name]
    if name in stack:
        # cyclic -> treat as opaque pointer-size to break cycle
        return (4, [], ["cycle:%s" % name], False)
    stack = stack | {name}
    if name in LEAF_STRUCTS and name not in registry:
        sz, _al = LEAF_STRUCTS[name]
        res = (sz, [], [], True)
        cache[name] = res
        return res
    info = registry.get(name)
    if not info:
        return (None, [], ["no-hpp:%s" % name], False)

    warnings = []
    fields = []
    off = 0
    cls_align = 1
    ok = True

    # --- base / vtable ---
    if is_com_root(name, info):
        nvt = len(info["bases"])
        for k in range(nvt):
            fields.append({"off": off, "name": "__vftable_%d" % k, "size": 4,
                           "align": 4, "ida": "void *", "cpp": "void *", "kind": "vtbl"})
            off += 4
        cls_align = max(cls_align, 4)
    else:
        # single inheritance: embed first non-COM base
        base_name = None
        for b in info["bases"]:
            if b not in COM_BASES:
                base_name = b
                break
        if base_name:
            bsz, _bf, bw, bok = compute_layout(base_name, registry, enums, sizes, cache, stack)
            warnings += ["base:" + w for w in bw]
            if bsz is None:
                return (None, [], warnings + ["base-unresolved:%s" % base_name], False)
            fields.append({"off": 0, "name": "__base", "size": bsz, "align": 4,
                           "ida": base_name, "cpp": base_name, "kind": "base"})
            off = bsz
            cls_align = max(cls_align, 4)
        elif info["polymorphic"]:
            # standalone polymorphic class (e.g. gamemd VectorClass) -> 1 vtable ptr
            fields.append({"off": 0, "name": "__vftable", "size": 4, "align": 4,
                           "ida": "void *", "cpp": "void *", "kind": "vtbl"})
            off = 4
            cls_align = max(cls_align, 4)

    # --- own members (anchor-pinned, forward-only) ---
    for (typestr, mname, counts) in info["members"]:
        rt = resolve_type(typestr, registry, enums)
        if rt is None:
            return (None, fields, warnings + ["unresolved-type:%s %s" % (typestr, mname)], False)
        if rt["size"] is None:  # embedded class by value
            esz, _ef, ew, eok = compute_layout(rt["ida"], registry, enums, sizes, cache, stack)
            warnings += ["memb:" + w for w in ew]
            if esz is None:
                return (None, fields, warnings + ["member-class-unresolved:%s" % rt["ida"]], False)
            rt = dict(rt)
            rt["size"] = esz
        count = 1
        for c in counts:
            count *= c
        total = rt["size"] * count
        a = rt["align"]
        off = align_up(off, a)
        anc = anchor_of(mname)
        if anc is not None:
            if anc > off:
                off = anc            # forward snap (insert gap)
            elif anc < off:
                warnings.append("anchor-back:%s 0x%X<0x%X" % (mname, anc, off))
        fields.append({"off": off, "name": mname, "size": rt["size"], "count": count,
                       "total": total, "align": a, "ida": rt["ida"], "cpp": rt["cpp"],
                       "kind": rt["kind"]})
        off += total
        cls_align = max(cls_align, a)

    size = align_up(off, cls_align)
    res = (size, fields, warnings, ok)
    cache[name] = res
    sizes[name] = size
    return res


# ---------------------------------------------------------------------------
# C emit (pack(1) + explicit gaps -> deterministic offsets)
# ---------------------------------------------------------------------------
def emit_c_struct(name, size, fields):
    lines = ["#pragma pack(push,1)", "struct %s {" % name]
    run = 0
    gi = 0
    for f in fields:
        off = f["off"]
        if off > run:
            lines.append("    char __pad_%X[%d];" % (run, off - run))
            gi += 1
            run = off
        if f["kind"] == "base":
            lines.append("    struct %s __base;" % f["ida"])
            run = off + f["size"]
        elif f["kind"] in ("udt",):
            cnt = f.get("count", 1)
            arr = "[%d]" % cnt if cnt != 1 else ""
            lines.append("    struct %s %s%s;" % (f["ida"], f["name"], arr))
            run = off + f["total"]
        elif f["kind"] == "vtbl":
            lines.append("    void *%s;" % f["name"])
            run = off + 4
        else:
            cnt = f.get("count", 1)
            arr = "[%d]" % cnt if cnt != 1 else ""
            lines.append("    %s %s%s;" % (f["ida"], f["name"], arr))
            run = off + f.get("total", f["size"])
    if size > run:
        lines.append("    char __pad_%X[%d];" % (run, size - run))
    lines.append("};")
    lines.append("#pragma pack(pop)")
    return "\n".join(lines)


def topo_order(registry, enums, sizes, cache):
    """Compute layouts in dependency order; return ordered list of (name, size, fields)
       for classes that resolved, plus a dict of failures."""
    ordered = []
    failures = {}
    done = set()

    def deps(name):
        info = registry.get(name)
        ds = []
        if not info:
            return ds
        for b in info["bases"]:
            if b not in COM_BASES:
                ds.append(b)
        for (typestr, _mn, _c) in info["members"]:
            rt = resolve_type(typestr, registry, enums)
            if rt and rt["kind"] == "class":
                ds.append(rt["ida"])
            elif rt and rt["kind"] == "udt" and rt["ida"] in registry:
                ds.append(rt["ida"])
        return ds

    visiting = set()

    def visit(name):
        if name in done or name in failures:
            return
        if name in visiting:
            return
        visiting.add(name)
        for d in deps(name):
            visit(d)
        visiting.discard(name)
        size, fields, warns, ok = compute_layout(name, registry, enums, sizes, cache, set())
        if not ok or size is None:
            failures[name] = warns
            return
        # curated value structs are declared via _leaf_struct_decls(), not emitted here
        if name in LEAF_STRUCTS:
            done.add(name)
            return
        ordered.append((name, size, fields, warns))
        done.add(name)

    for nm in list(registry.keys()):
        visit(nm)
    return ordered, failures


# ---------------------------------------------------------------------------
# main
# ---------------------------------------------------------------------------
def run(in_ida):
    registry, enums = scan_hpp()
    sizes, cache = {}, {}
    ordered, failures = topo_order(registry, enums, sizes, cache)

    # Build computed layouts dict (used standalone + as fallback)
    layouts = {}
    for (name, size, fields, warns) in ordered:
        offmap = {}
        member_by_name = {}
        for f in fields:
            if f["kind"] in ("vtbl",):
                continue
            if f["kind"] == "base":
                continue
            offmap[str(f["off"])] = {
                "ida_name": f["name"],
                "type": f["cpp"],
                "size": f.get("total", f["size"]),
            }
            member_by_name[f["name"]] = f["off"]
        parent = None
        for b in registry[name]["bases"]:
            if b not in COM_BASES:
                parent = b
                break
        layouts[name] = {
            "size": size,
            "parent": parent,
            "offsets": offmap,
            "_member_by_name": member_by_name,
            "warnings": warns[:20],
            "source": "computed",
        }

    # Emit C blob
    cblob = []
    for (name, size, fields, _w) in ordered:
        cblob.append(emit_c_struct(name, size, fields))
    with open(OUT_CBLOB, "w", encoding="utf-8") as f:
        f.write("/* auto-generated by import_hpp_layouts.py -- do not edit */\n")
        f.write("\n\n".join(cblob))

    report = {
        "total_classes_parsed": len(registry),
        "enums": len(enums),
        "resolved": len(ordered),
        "failed": len(failures),
        "failures": {k: v[:6] for k, v in sorted(failures.items())},
        "in_ida": in_ida,
    }

    if in_ida:
        ida_layouts = declare_into_ida(ordered, registry, enums, layouts, report)
        layouts = ida_layouts

    with open(OUT_LAYOUTS, "w", encoding="utf-8") as f:
        json.dump(layouts, f, indent=1, ensure_ascii=False)
    with open(OUT_REPORT, "w", encoding="utf-8") as f:
        json.dump(report, f, indent=1, ensure_ascii=False)

    print("parsed=%d resolved=%d failed=%d enums=%d" %
          (len(registry), len(ordered), len(failures), len(enums)))
    bc = layouts.get("BuildingClass")
    if bc:
        t = bc["offsets"].get("1312")
        print("BuildingClass size=%s  offset1312=%s" % (bc.get("size"), t))
    return report


def declare_into_ida(ordered, registry, enums, computed_layouts, report):
    """Declare each struct into IDA, read back, validate anchors, idb_save."""
    import idaapi  # noqa
    import ida_typeinf
    import idc

    # clean up experiment junk
    for junk in ("OMOTestBase", "OMOTestDerived", "OMOTestPack4", "OMOTestNoPack"):
        try:
            ida_typeinf.del_named_type(None, junk, ida_typeinf.NTF_TYPE)
        except Exception:
            pass

    declared, declare_fail = [], {}
    # leaf structs first (curated value structs); pointers are void* so no fwd decls needed
    leaf_decls = _leaf_struct_decls()
    for nm, decl in leaf_decls:
        try:
            idc.parse_decls(decl, 0)
        except Exception as e:  # noqa
            declare_fail[nm] = "leaf-exc:%r" % e

    # ordered structs
    for (name, size, fields, _w) in ordered:
        decl = emit_c_struct(name, size, fields)
        try:
            idc.parse_decls(decl + "\n", 0)
            declared.append(name)
        except Exception as e:  # noqa
            declare_fail[name] = "decl-exc:%r" % e

    # read back via type_inspect equivalent
    ida_layouts = {}
    anchor_mismatch = {}
    for (name, size, fields, warns) in ordered:
        info = _inspect_type(name)
        parent = None
        for b in registry[name]["bases"]:
            if b not in COM_BASES:
                parent = b
                break
        if info is None:
            # fall back to computed
            ida_layouts[name] = computed_layouts[name]
            ida_layouts[name]["source"] = "computed-fallback"
            continue
        offmap = {}
        member_by_name = {}
        # map cpp types from computed fields by member name
        cpp_by_name = {}
        for f in fields:
            if f["kind"] not in ("vtbl", "base"):
                cpp_by_name[f["name"]] = f["cpp"]
        for m in info["members"]:
            mname = m["name"]
            if mname.startswith("__pad") or mname.startswith("__vftable") or mname == "__base":
                continue
            off = int(m["offset"], 16) if isinstance(m["offset"], str) else int(m["offset"])
            offmap[str(off)] = {
                "ida_name": mname,
                "type": cpp_by_name.get(mname, m.get("type", "")),
                "size": m.get("size"),
            }
            member_by_name[mname] = off
        ida_layouts[name] = {
            "size": info["size"], "parent": parent, "offsets": offmap,
            "_member_by_name": member_by_name, "warnings": warns[:20],
            "source": "ida",
        }
        # anchor validation: every member whose name encodes an offset must land there
        for mname, off in member_by_name.items():
            anc = anchor_of(mname)
            if anc is not None and anc != off and "padding" not in mname.lower() and "align" not in mname.lower():
                anchor_mismatch.setdefault(name, []).append("%s exp0x%X got0x%X" % (mname, anc, off))

    report["declared"] = len(declared)
    report["declare_fail"] = declare_fail
    report["anchor_mismatch"] = {k: v[:8] for k, v in anchor_mismatch.items()}

    try:
        idaapi.save_database(idaapi.get_path(idaapi.PATH_TYPE_IDB), 0)
    except Exception:
        try:
            import ida_loader
            ida_loader.save_database(idc.get_idb_path(), 0)
        except Exception as e:  # noqa
            report["idb_save_error"] = repr(e)

    return ida_layouts


def _leaf_struct_decls():
    """Explicit pack(1) decls for curated value structs (so embedding resolves)."""
    d = []
    d.append(("CellStruct", "#pragma pack(push,1)\nstruct CellStruct { short X; short Y; };\n#pragma pack(pop)"))
    d.append(("Point2D", "#pragma pack(push,1)\nstruct Point2D { int X; int Y; };\n#pragma pack(pop)"))
    d.append(("CoordStruct", "#pragma pack(push,1)\nstruct CoordStruct { int X; int Y; int Z; };\n#pragma pack(pop)"))
    d.append(("RectangleStruct", "#pragma pack(push,1)\nstruct RectangleStruct { int X; int Y; int Width; int Height; };\n#pragma pack(pop)"))
    d.append(("ColorStruct", "#pragma pack(push,1)\nstruct ColorStruct { unsigned char R; unsigned char G; unsigned char B; };\n#pragma pack(pop)"))
    d.append(("RGBClass", "#pragma pack(push,1)\nstruct RGBClass { unsigned char X; unsigned char Y; unsigned char Z; };\n#pragma pack(pop)"))
    d.append(("TimerStruct", "#pragma pack(push,1)\nstruct TimerStruct { int StartTime; int __padding; int TimeLeft; };\n#pragma pack(pop)"))
    d.append(("Matrix3D", "#pragma pack(push,1)\nstruct Matrix3D { float Data[12]; };\n#pragma pack(pop)"))
    d.append(("AudioController", "#pragma pack(push,1)\nstruct AudioController { unsigned int f0; unsigned int f4; unsigned int f8; unsigned int fC; unsigned int f10; };\n#pragma pack(pop)"))
    d.append(("ProgressTimer", "#pragma pack(push,1)\nstruct ProgressTimer { int Value; int Timer; };\n#pragma pack(pop)"))
    d.append(("RepeatableTimerStruct", "#pragma pack(push,1)\nstruct RepeatableTimerStruct { unsigned int data[4]; };\n#pragma pack(pop)"))
    d.append(("DirStruct", "#pragma pack(push,1)\nstruct DirStruct { unsigned int Raw; };\n#pragma pack(pop)"))
    d.append(("FacingStruct", "#pragma pack(push,1)\nstruct FacingStruct { unsigned int Raw; };\n#pragma pack(pop)"))
    d.append(("FlashData", "#pragma pack(push,1)\nstruct FlashData { int DurationRemaining; unsigned char FlashingNow; char p[3]; };\n#pragma pack(pop)"))
    d.append(("PassengersClass", "#pragma pack(push,1)\nstruct PassengersClass { int NumPassengers; void *FirstPassenger; };\n#pragma pack(pop)"))
    d.append(("VeterancyStruct", "#pragma pack(push,1)\nstruct VeterancyStruct { float Veterancy; };\n#pragma pack(pop)"))
    d.append(("TurretControl", "#pragma pack(push,1)\nstruct TurretControl { unsigned int data[4]; };\n#pragma pack(pop)"))
    d.append(("RecoilData", "#pragma pack(push,1)\nstruct RecoilData { unsigned int Turret[4]; float TravelPerFrame; float TravelSoFar; unsigned int State; int TravelFramesLeft; };\n#pragma pack(pop)"))
    d.append(("TransitionTimer", "#pragma pack(push,1)\nstruct TransitionTimer { unsigned int data[3]; };\n#pragma pack(pop)"))
    d.append(("OwnedTiberiumStruct", "#pragma pack(push,1)\nstruct OwnedTiberiumStruct { float Amount1; float Amount2; float Amount3; float Amount4; };\n#pragma pack(pop)"))
    d.append(("IndexBitfield", "#pragma pack(push,1)\nstruct IndexBitfield { void *Items; };\n#pragma pack(pop)"))
    d.append(("VectorClass", "#pragma pack(push,1)\nstruct VectorClass { void *Items; int Count; int Capacity; };\n#pragma pack(pop)"))
    d.append(("DynamicVectorClass", "#pragma pack(push,1)\nstruct DynamicVectorClass { void *__vftable; void *Items; int Capacity; unsigned char IsInitialized; unsigned char IsAllocated; char __p[2]; int Count; int CapacityIncrement; };\n#pragma pack(pop)"))
    d.append(("MissionControlData", "#pragma pack(push,1)\nstruct MissionControlData { int ArrayIndex; unsigned char NoThreat; unsigned char Zombie; unsigned char Recruitable; unsigned char Paralyzed; unsigned char Retaliate; unsigned char Scatter; char __p[2]; double Rate; double AARate; };\n#pragma pack(pop)"))
    return d


def _inspect_type(name):
    """Return {size, members:[{name, offset, size, type}]} for a declared type, or None."""
    import ida_typeinf
    tif = ida_typeinf.tinfo_t()
    if not tif.get_named_type(None, name):
        return None
    if not tif.is_udt():
        return None
    udt = ida_typeinf.udt_type_data_t()
    if not tif.get_udt_details(udt):
        return None
    members = []
    for i in range(udt.size()):
        m = udt[i]
        members.append({
            "name": m.name,
            "offset": m.offset // 8,    # bit offset -> byte
            "size": m.size // 8 if m.size else (m.type.get_size() if m.type else 0),
            "type": m.type.dstr() if m.type else "",
        })
    return {"size": tif.get_size(), "members": members}


if __name__ == "__main__":
    _in_ida = False
    try:
        import idaapi  # noqa
        _in_ida = True
    except Exception:
        _in_ida = False
    run(_in_ida)
