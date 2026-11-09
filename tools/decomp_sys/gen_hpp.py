#!/usr/bin/env python3
"""gen_hpp.py -- DECOMP-1 hpp generator (user rules 1/2: symbols live in hpp,
implementations live in same-name cpp).

Per-class hpp generation from tools/decomp_sys/registry.py output:

  class X : public Y {
  public:
      <member declarations with absolute-offset comments>   // rule 1: symbols
      <method declarations (declaration only)>              // rule 2: no bodies
  };

Emission policy (mechanical, era-VC6-safe):
  * own region only: [parent_size, size) per chain member
  * byte-noise filter: unnamed/unsemantic offsets at unaligned positions drop
  * overlap clamp: width clamped to next member start and to class size
  * misaligned wide members (o % align != 0) or class-typed by-value members
    emit as char arrays carrying the evidence type in a /* comment */
  * int-family spellings default to signed (signed_default_ledger policy);
    ledger RET:/P: entities may flip a proto spelling
  * template families emit the representative slot table + family census

Usage:
  python tools/decomp_sys/gen_hpp.py TechnoClass VectorClass CellClass \
      --outdir src/decomp_out
  python tools/decomp_sys/gen_hpp.py --pilot          # the 3 pilot classes
"""
import argparse
import json
import os
import re
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
sys.path.insert(0, os.path.dirname(__file__))
from registry import OUT_JSON, is_placeholder  # noqa: E402

COMMON_NAME = "decomp_common.hpp"

# ------------------------------------------------------------ type vocabulary

PRIM_SPELL = {
    # IDA vocabulary
    "_DWORD": "unsigned int", "DWORD": "unsigned long", "_WORD": "unsigned short",
    "WORD": "unsigned short", "_BYTE": "unsigned char", "BYTE": "unsigned char",
    "_QWORD": "__int64", "BOOL": "int", "CHAR": "char", "UCHAR": "unsigned char",
    "ULONG": "unsigned long", "LONG": "long", "UINT": "unsigned int",
    "INT": "int", "VOID": "void", "_BOOL": "bool", "HRESULT": "long",
    "LPSTR": "char*", "LPCSTR": "const char*",
    # fixed-width -> era-safe spellings (no long long in VC6)
    "int": "int", "signed int": "int", "unsigned int": "unsigned int",
    "uint32_t": "unsigned int", "int32_t": "int", "unsigned": "unsigned int",
    "short": "short", "int16_t": "short", "unsigned short": "unsigned short",
    "uint16_t": "unsigned short", "short int": "short",
    "unsigned short int": "unsigned short",
    "char": "char", "int8_t": "signed char", "uint8_t": "unsigned char",
    "unsigned char": "unsigned char", "signed char": "signed char",
    "bool": "bool",
    "float": "float", "double": "double",
    "long": "long", "unsigned long": "unsigned long", "long int": "long",
    "unsigned long int": "unsigned long",
    "__int64": "__int64", "int64_t": "__int64",
    "uint64_t": "unsigned __int64", "unsigned __int64": "unsigned __int64",
    "void": "void",
}

UNIT = {
    "double": 8, "__int64": 8, "unsigned __int64": 8,
    "float": 4, "int": 4, "unsigned int": 4, "long": 4, "unsigned long": 4,
    "short": 2, "unsigned short": 2,
    "char": 1, "signed char": 1, "unsigned char": 1, "bool": 1,
}

SIGN_PAIRS = {
    ("int", "unsigned int"), ("short", "unsigned short"),
    ("char", "unsigned char"), ("signed char", "unsigned char"),
}


def is_ptr(ty):
    return bool(ty) and ty.rstrip().endswith("*")


def ptr_depth(ty):
    return ty.count("*")


class Speller:
    """Type-string -> era C++ spelling against the registry class universe."""

    def __init__(self, classes):
        self.classes = classes
        self.fwd = set()        # class names needing forward declaration
        self.notes = []         # divergences worth reporting

    def spell_ptr(self, ty, fallback="void*"):
        base = ty.replace("*", "").strip()
        spelled = self.spell_scalar(base)
        if spelled is None:
            if base in self.classes:
                self.fwd.add(base)
                spelled = base
            elif re.match(r"^[A-Za-z_]\w*$", base):
                # unknown named type: keep the name, fwd-declare as class
                self.fwd.add(base)
                spelled = base
            else:
                return fallback
        return spelled + "*" * ptr_depth(ty)

    def spell_scalar(self, ty):
        """Primitive spelling or None (class/unknown)."""
        t = (ty or "").strip()
        if t in PRIM_SPELL:
            return PRIM_SPELL[t]
        m = re.match(r"^(int|short|char|long)$", t)
        if m:
            return t
        return None

    def spell(self, ty, width=None, default="int"):
        """Spell a type for a member/param. Returns (spelled, is_class)."""
        t = (ty or "").strip()
        if not t or t in ("unknown", "unknown *", "void *unknown"):
            t = default
        if is_ptr(t):
            return self.spell_ptr(t), False
        sc = self.spell_scalar(t)
        if sc is not None:
            return sc, False
        if t in self.classes:
            return t, True
        m = re.match(r"^(unsigned ?|signed ?)?int(\d+_t)?$", t)
        if m:
            return "int" if not m.group(1) or m.group(1).strip() == "signed" else "unsigned int", False
        # unknown token: byte-array carrier when width known, else default
        return default, False


def unit_of(spelled, is_class):
    if is_class:
        return None            # by-value class -> char array carrier
    if spelled.endswith("*"):
        return 4
    return UNIT.get(spelled, 4)


def align_of(spelled):
    if spelled.endswith("*"):
        return 4
    return UNIT.get(spelled, 1)


def ledger_flip(spelled, ent, ledger):
    """Apply signed_default_ledger chosen spelling when entity matches."""
    if not ent:
        return spelled
    e = ledger.get(ent)
    if not e:
        return spelled
    dflt, chosen = e.get("default"), e.get("chosen")
    if dflt == spelled and chosen != spelled:
        if tuple(sorted((dflt, chosen))) in SIGN_PAIRS:
            return chosen
    return spelled


# ------------------------------------------------------------ proto parsing

PROTO_RE = re.compile(r"^(?P<ret>[^(]*)\((?P<params>.*)\)\s*$")


def parse_proto(proto):
    """'int __thiscall(X *this, char *s)' -> (ret, [(type, is_this), ...])"""
    if not proto:
        return None, []
    cc = "__thiscall"
    p = proto.strip()
    for c in ("__thiscall", "__stdcall", "__cdecl", "__fastcall"):
        p = p.replace(c, " ")
    m = PROTO_RE.search(p)
    if not m:
        return None, []
    ret = m.group("ret").strip() or "int"
    params = []
    ps = m.group("params").strip()
    if ps:
        for part in ps.split(","):
            part = part.strip()
            if not part:
                continue
            is_this = part.endswith("this") or part == "this"
            params.append((part, is_this))
    return ret, params


def param_type_of(part):
    """'TechnoClass *this' -> 'TechnoClass*'; 'int' -> 'int'; 'char *s' -> 'char*'"""
    tokens = part.replace("*", " * ").split()
    ty_tokens = []
    name = None
    for tk in tokens:
        if tk == "*":
            ty_tokens.append("*")
        elif re.match(r"^[A-Za-z_]\w*$", tk):
            if name is None and ty_tokens and not ty_tokens[-1] == "*":
                # first identifier could be type; decide by position later
                ty_tokens.append(tk)
            elif name is None:
                ty_tokens.append(tk)
            else:
                name = tk  # unreachable-safe
        else:
            pass
    # last identifier is the name if there are >=2 identifiers
    ids = [t for t in ty_tokens if t != "*"]
    if len(ids) >= 2:
        name = ids[-1]
        # remove the name from type tokens (its last identifier position)
        out, dropped = [], False
        for t in reversed(ty_tokens):
            if not dropped and t == name:
                dropped = True
                continue
            out.append(t)
        ty_tokens = list(reversed(out))
    ty = " ".join(t for t in ty_tokens if t != "*")
    if "*" in ty_tokens:
        ty = ty.strip() + "*"
    return ty.strip()


# ------------------------------------------------------------ member emission

def chain_of(reg, cls):
    """Primary parent chain root-first (layout parents only)."""
    C = reg["classes"]
    out = []
    cur = cls
    guard = 0
    while cur in C and guard < 48:
        out.append(cur)
        cur = C[cur]["parent"]
        if not cur:
            break
        guard += 1
    return list(reversed(out))


def emit_members(rec, psize, sp, ledger, log):
    """Own-region member lines for one class. Returns (lines, covered_spans)."""
    size = rec["size"]
    offs = sorted(int(o) for o in rec["members"] if psize <= int(o) < size)
    # drop byte-noise: unnamed/placeholder at unaligned offsets
    kept = []
    for o in offs:
        m = rec["members"][str(o)]
        nm = m.get("name")
        noisy = (nm is None or is_placeholder(nm)) and (o % 4 != 0)
        if noisy:
            log["byte_noise_dropped"] += 1
            continue
        kept.append(o)
    # overlap clamp
    spans = []
    for i, o in enumerate(kept):
        m = rec["members"][str(o)]
        w = int(m.get("width") or 4)
        nxt = kept[i + 1] if i + 1 < len(kept) else size
        end = min(o + w, nxt, size)
        if end <= o:
            log["zero_width_dropped"] += 1
            continue
        spans.append((o, end - o, m))
    lines = []
    cursor = psize
    used_names = set()
    for o, w, m in spans:
        if o > cursor:
            lines.append("    char __pad_%03X[%d];  // gap" % (cursor, o - cursor))
        name = m.get("name")
        if not name or is_placeholder(name):
            # covered span without a semantic name: byte filler
            lines.append("    char __pad_%03X[%d];  // span (unnamed, w=%d)"
                         % (o, w, w))
            log["unnamed_span_filler"] += 1
            cursor = o + w
            continue
        # dedup semantic names within the class (multi-source collisions)
        base, short = name, name
        i = 2
        while short in used_names:
            short = "%s_%d" % (base, i)
            i += 1
        if short != base:
            log["member_name_dedup"] += 1
        used_names.add(short)
        ty_raw = m.get("type")
        spelled, is_class = sp.spell(ty_raw, width=w)
        # by-value class -> char array carrier
        if is_class:
            lines.append("    char %s[%d];  /* %s */  // 0x%03X"
                         % (short, w, ty_raw, o))
            log["class_byval_carrier"] += 1
        else:
            unit = unit_of(spelled, False)
            if spelled.endswith("*"):
                unit = 4
            need = align_of(spelled)
            if o % need != 0 or (w % unit):
                # misaligned wide scalar or ragged width: char carrier
                lines.append("    char %s[%d];  /* %s */  // 0x%03X"
                             % (short, w, spelled, o))
                log["misalign_carrier"] += 1
            elif w > unit:
                lines.append("    %s %s[%d];  // 0x%03X"
                             % (spelled, short, w // unit, o))
            else:
                lines.append("    %s %s;  // 0x%03X" % (spelled, short, o))
        cursor = o + w
    if cursor < size:
        lines.append("    char __pad_%03X[%d];  // tail gap"
                     % (cursor, size - cursor))
    return lines, spans


def emit_methods(rec, sp, ledger, log):
    """Own-slot method declaration lines (rule 2: declarations only)."""
    own0 = rec["own_slot_start"]
    used = set()
    lines = []
    for s in rec["slots"]:
        if s["slot"] < own0:
            continue
        raw = s.get("name") or ""
        short = raw.split("::")[-1] if "::" in raw else raw
        short = re.sub(r"[^A-Za-z0-9_]", "_", short)
        if not re.match(r"^[A-Za-z_]\w*$", short or ""):
            short = "vt_slot_%03d" % s["slot"]
        base = short
        i = 2
        while short in used:
            short = "%s_%d" % (base, i)
            i += 1
        used.add(short)
        ret, params = parse_proto(s.get("proto"))
        addr = "0x%x" % int(s.get("addr") or "0", 16)
        ret_spelled, _ = sp.spell(ret, default="int")
        ret_spelled = ledger_flip(ret_spelled, "RET:" + addr[2:], ledger)
        pl = []
        ai = 0
        for part, is_this in params:
            if is_this:
                continue
            pty = param_type_of(part)
            p_spelled, _ = sp.spell(pty, default="int")
            p_spelled = ledger_flip(p_spelled, "P:%s:%d" % (addr[2:], ai), ledger)
            pl.append("%s a%d" % (p_spelled, ai))
            ai += 1
        lines.append("    %s %s(%s);  // slot %d @ %s"
                     % (ret_spelled, short, ", ".join(pl), s["slot"], addr))
    return lines


# ------------------------------------------------------------ header emission

def gen_single_class_hpp(reg, cls, sp, log):
    """One class = one hpp (rule 1). Parent chain arrives via #include of the
    parent's hpp; each file carries its own guard, so multi-target TUs do not
    redefine shared ancestors."""
    C = reg["classes"]
    if cls not in C:
        raise SystemExit("ERROR: class %s not in registry" % cls)
    rec = C[cls]
    if not rec["size"]:
        raise SystemExit("ERROR: %s has no size in registry" % cls)
    parent = rec["parent"] if rec["parent"] in C else None
    psize = C[parent]["size"] if parent else 0
    guard = "DECOMP_OUT_" + re.sub(r"[^A-Za-z0-9]", "_", cls).upper() + "_HPP"

    body = []
    if rec.get("family"):
        f = rec["family"]
        body.append(
            "// template family: %d instantiations collapsed to canon '%s' "
            "(representative %s, vtable %s); slot table below is the "
            "representative's" % (f["instantiations"], cls,
                                  f["representative"], rec["vtable"]))
    hdr = "class %s" % cls
    if parent:
        hdr += " : public %s" % parent
    body.append(hdr + " {")
    body.append("public:")
    mlines, _ = emit_members(rec, psize, sp, reg["ledger"], log)
    body.extend(mlines)
    own = [s for s in rec["slots"] if s["slot"] >= rec["own_slot_start"]]
    if own:
        body.append("    // ---- methods (vtable authority; declarations only)")
        body.extend(emit_methods(rec, sp, reg["ledger"], log))
    body.append("};  // sizeof(%s) == %d (0x%X)"
                % (cls, rec["size"], rec["size"]))
    body.append("")

    # forward declarations: everything referenced by THIS class's members and
    # methods (including classes defined later in other units -- forward
    # declaration is legal and required for chain forward pointers)
    fwd = sorted(sp.fwd)
    head = [
        "// GENERATED by tools/decomp_sys/gen_hpp.py -- DO NOT EDIT.",
        "// registry: derived_layouts (solver spans) > csp_canon_members",
        "//           > member_types(evidence) > member_lookup > class_layouts",
        "// signedness: anchors/signed_default_ledger.json policy (signed default)",
        "// rule 1: symbols live in hpp; rule 2: declarations only, bodies in cpp",
        "#ifndef %s" % guard,
        "#define %s" % guard,
        "",
        '#include "%s"' % COMMON_NAME,
    ]
    if parent:
        head.append('#include "%s.hpp"  // %s (%d bytes)'
                    % (file_stem(parent), parent, C[parent]["size"]))
    head.append("")
    if fwd:
        head.append("// forward declarations")
        head += ["class %s;" % f for f in fwd]
        head.append("")
    tail = ["#endif  // %s" % guard, ""]
    return "\n".join(head + body + tail), rec["size"]


def gen_common():
    return "\n".join([
        "// GENERATED by tools/decomp_sys/gen_hpp.py -- shared decomp_out base.",
        "// compile-time layout verification macro (negative array on mismatch)",
        "#ifndef DECOMP_COMMON_HPP",
        "#define DECOMP_COMMON_HPP",
        "",
        "#define DECOMP_SIZECHECK(tag, T, expected) \\",
        "    typedef char tag##SizeCheck_[(sizeof(T) == (expected)) ? 1 : -1]",
        "",
        "#endif  // DECOMP_COMMON_HPP",
        "",
    ])


def file_stem(cls):
    s = re.sub(r"(?<!^)([A-Z])", r"_\1", cls).lower()
    return re.sub(r"__+", "_", s)


# ------------------------------------------------------------ driver

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("classes", nargs="*", help="canon class names")
    ap.add_argument("--pilot", action="store_true",
                    help="generate the 3 pilot classes + compile driver")
    ap.add_argument("--outdir", default=os.path.join(ROOT, "src", "decomp_out"))
    ap.add_argument("--registry", default=OUT_JSON)
    args = ap.parse_args()

    with open(args.registry, encoding="utf-8") as f:
        reg = json.load(f)

    targets = list(args.classes)
    if args.pilot:
        targets += ["TechnoClass", "VectorClass", "CellClass"]
    if not targets:
        ap.error("no classes given (use --pilot or pass names)")

    os.makedirs(args.outdir, exist_ok=True)
    with open(os.path.join(args.outdir, COMMON_NAME), "w",
              encoding="utf-8", newline="\n") as f:
        f.write(gen_common())

    from collections import Counter
    log = Counter()

    all_sizes = []
    written = {}   # cls -> path (chain classes emitted once, shared)
    for cls in targets:
        chain = chain_of(reg, cls)
        for cname in chain:
            if cname in written:
                continue
            sp = Speller(reg["classes"])  # per-class forward-decl scope
            text, size = gen_single_class_hpp(reg, cname, sp, log)
            path = os.path.join(args.outdir, file_stem(cname) + ".hpp")
            with open(path, "w", encoding="utf-8", newline="\n") as f:
                f.write(text)
            written[cname] = path
            all_sizes.append((cname, size))
        print("target %s: %d classes in chain" % (cls, len(chain)))

    for cname, path in sorted(written.items()):
        print("wrote %s" % path)

    # compile driver: includes leaf targets only (chains arrive transitively);
    # size checks for every emitted class
    drv = [
        "// GENERATED pilot compile driver -- era VC6 verification",
        '#include "%s"' % COMMON_NAME,
    ]
    for cls in targets:
        drv.append('#include "%s.hpp"' % file_stem(cls))
    drv.append("")
    seen = set()
    for cname, size in all_sizes:
        if cname in seen:
            continue
        seen.add(cname)
        drv.append("DECOMP_SIZECHECK(%s, %s, %d);" % (cname, cname, size))
    drv.append("")
    drv_path = os.path.join(args.outdir, "pilot_compile.cpp")
    with open(drv_path, "w", encoding="utf-8", newline="\n") as f:
        f.write("\n".join(drv) + "\n")
    print("wrote %s (%d size checks)" % (drv_path, len(seen)))
    print("emission log:", dict(log))
    return 0


if __name__ == "__main__":
    sys.exit(main())
