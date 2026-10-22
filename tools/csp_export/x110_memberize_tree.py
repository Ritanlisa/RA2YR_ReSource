#!/usr/bin/env python3
"""X110 W2 driver: run the x83 emitter post-pass over generated TU bodies.

Unlike the legacy site-by-site apply (compiler worklist), this is the
generator's own deterministic rule applied to every body line: a qualified
call `Class::Method(a0, rest)` to a carrier-declared NON-STATIC member is the
IDA static-call form of a thiscall; the receiver is a0.

Safety guard (X110): only memberize when a0 is provably receiver-shaped:
  * `this`
  * a pointer cast `(T *)expr`
  * a pointer-typed local/parameter (declared `T *name` in the function)
This refuses e.g. `HouseTypeClass::Find(&g_INI_Key_Civilian)` where a0 is a
string global, and `Network::GetQueueCount(&unk_A8E9C0)` where a0 is a byte
array. Those are CSP ownership/signature defects, not call-form defects.

Usage:
  python tools/csp_export/x110_memberize_tree.py [--apply] [--scope e4,gap2,menu]
Writes nothing without --apply. Idempotent: second run reports 0 writes.
"""
import re
import sys
from pathlib import Path

ROOT = Path(r"D:\RA2YR_ReSource")
sys.path.insert(0, str(ROOT / "tools/csp_export"))
import x83_memberize_calls as x83

APPLY = "--apply" in sys.argv
ALLOW_OVL = "--allow-overloads" in sys.argv
NO_ARGCHECK = "--no-argcheck" in sys.argv
WORKLIST = None
if "--worklist" in sys.argv:
    import json
    WORKLIST = set()
    for it in json.loads(Path(sys.argv[sys.argv.index("--worklist") + 1]).read_text(encoding="utf-8")):
        if isinstance(it, list):
            WORKLIST.add((it[0].replace("\\", "/"), int(it[1])))
        else:
            WORKLIST.add((it["file"].replace("\\", "/"), int(it["line"])))

SCOPES = ["e4", "gap2", "menu"]
if "--scope" in sys.argv:
    SCOPES = sys.argv[sys.argv.index("--scope") + 1].split(",")

DECLS = x83.load_decls(refresh=True)
CALL = re.compile(r'(?<![\w:>.])([A-Za-z_]\w*)\s*::\s*([A-Za-z_]\w*)\s*\(')
DECL_PTR = re.compile(r'\b([A-Za-z_]\w*)\s*(?:\*+\s*)([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*(?:[;,=)])')

def files():
    out = []
    if "e4" in SCOPES:
        out += sorted((ROOT / "src/e4").glob("*.cpp"))
    if "gap2" in SCOPES:
        out += sorted((ROOT / "src/_gap2").glob("*.cpp"))
        out += sorted((ROOT / "src").glob("*/gap2_defs*.cpp"))
    if "menu" in SCOPES:
        out += sorted((ROOT / "src").glob("*/menu_globals_gen.cpp"))
    return out

def enclosing_start(lines, ln):
    # nearest function marker / previous line that closes a body
    for j in range(ln, max(-1, ln - 500), -1):
        s = lines[j]
        if re.match(r"^\s*//\s*0x[0-9A-Fa-f]{6,8}\s*$", s):
            return j
        if s.strip() == "}" and j < ln - 1:
            return j
    return max(0, ln - 200)

def ptr_locals(lines, ln):
    """names declared as pointer types in the enclosing function."""
    start = enclosing_start(lines, ln)
    names = set()
    for s in lines[start:ln + 1]:
        code = s.split("//")[0]
        for m in DECL_PTR.finditer(code):
            ty, nm = m.group(1), m.group(2)
            if ty in ("return", "if", "while", "for", "else", "sizeof"):
                continue
            names.add(nm)
        # parameter list of the definition header
    return names

def receiver_ok(arg0, lines, ln):
    a = arg0.strip()
    if a == "this" or a.startswith("this->"):
        return True
    if a.startswith("*"):
        return True
    # pointer cast: (T *)expr / (T*)expr   (reject (int), (T) value casts)
    if re.match(r"^\(\s*(?:const\s+)?[A-Za-z_]\w*(?:::\w+)*\s*\*+\s*\)", a):
        return True
    if re.match(r"^[A-Za-z_]\w*$", a):
        return a in ptr_locals(lines, ln)
    return False

def _split_top(s):
    out, depth, cur = [], 0, []
    for ch in s:
        if ch in "(<[{":
            depth += 1
        elif ch in ")>]}":
            depth -= 1
        if ch == "," and depth == 0:
            out.append("".join(cur)); cur = []
        else:
            cur.append(ch)
    if "".join(cur).strip():
        out.append("".join(cur))
    return [x.strip() for x in out if x.strip()]

def required_args(params):
    """count of declared params without default value ('void' -> 0)."""
    if not params or params.strip() == "void":
        return 0
    n = 0
    for p in _split_top(params):
        if "=" in p:
            continue
        n += 1
    return n

def overloaded(cls, meth):
    if (cls, meth) in _OVL:
        return _OVL[(cls, meth)]
    n = 0
    for p in (ROOT / "src/e4/classes").glob("*.hpp"):
        try:
            t = p.read_text(encoding="utf-8", errors="replace")
        except OSError:
            continue
        # only inside the class's body
        m = re.search(r"\b(?:struct|class)\s+" + re.escape(cls) + r"\s*(?::[^\{]*)?\{", t)
        if not m:
            continue
        depth = 1; i = m.end()
        while i < len(t) and depth:
            if t[i] == "{": depth += 1
            elif t[i] == "}": depth -= 1
            i += 1
        body = t[m.end():i]
        n += len(re.findall(r"\b" + re.escape(meth) + r"\s*\(", body))
    _OVL[(cls, meth)] = n > 1
    return _OVL[(cls, meth)]

_OVL = {}

def rewrite_line(line, lines, ln):
    end = x83._code_end(line)
    out, last, n = [], 0, 0
    for m in CALL.finditer(line[:end]):
        cls, meth = m.group(1), m.group(2)
        d = DECLS.get(cls, {}).get(meth)
        if not d or d.get("static"):
            continue
        if not ALLOW_OVL and overloaded(cls, meth):
            continue
        before = line[max(0, m.start() - 8):m.start()]
        if re.search(r"(sizeof\s*\(?|\&\s*)$", before):
            continue
        opened = line.find("(", m.start())
        parsed = x83._split_args(line[:end], opened)
        if not parsed:
            continue
        args, close = parsed
        if not args:
            continue
        need = required_args(d.get("params") or "")
        if not NO_ARGCHECK and len(args) - 1 < need:
            continue
        if not receiver_ok(args[0], lines, ln):
            continue
        rest = ", ".join(args[1:])
        repl = "(%s)->%s(%s)" % (args[0], meth, rest)
        out.append(line[last:m.start()])
        out.append(repl)
        last = close + 1
        n += 1
    if not n:
        return line, 0
    out.append(line[last:])
    return "".join(out), n

total_sites = changed_files = 0
for p in files():
    raw = p.read_bytes()
    text = raw.decode("latin-1")
    lines = text.split("\n")
    nfile = 0
    for i in range(len(lines)):
        if "::" not in lines[i] or "(" not in lines[i]:
            continue
        if WORKLIST is not None:
            rel = str(p).replace(str(ROOT) + "\\", "").replace("\\", "/")
            if (rel, i + 1) not in WORKLIST:
                continue
        # skip definition headers: ret Cls::M(...) followed by {
        if re.match(r"^\s*(?:virtual\s+)?[A-Za-z_][\w:<>,\s\*&]*?\b([A-Za-z_]\w*)::([A-Za-z_]\w*)\s*\(", lines[i]):
            j = i + 1
            while j < len(lines) and not lines[j].strip():
                j += 1
            if j < len(lines) and lines[j].strip().startswith("{"):
                continue
        new, k = rewrite_line(lines[i], lines, i)
        if k:
            lines[i] = new
            nfile += k
    if nfile:
        changed_files += 1
        total_sites += nfile
        print("%-55s %4d" % (str(p).replace(str(ROOT) + "\\", ""), nfile))
        if APPLY:
            # preserve EOL/style: latin-1 byte round-trip
            p.write_bytes("\n".join(lines).encode("latin-1"))

print("TOTAL sites:", total_sites, "files:", changed_files,
      "APPLIED" if APPLY else "DRY RUN")
