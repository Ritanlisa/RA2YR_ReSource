#!/usr/bin/env python3
"""X4: wire the global free-function supply library with COMPLETE prototypes.

`src/_generated/global_funcs.hpp` held 6,221 free-function declarations
with ZERO includers anywhere -- the C3861 bare-name mass (C+D+F buckets)
resolves through it.  Its signatures are collapsed primitives (`int f();`)
while corpus calls pass real args.

G42.16 historically papered over this by deriving a variadic variant
(`RET NAME(...);` -- "absorbs any call arity").  X4 (禁 `...`; Q4) removes
that fallback: this stage now derives `global_funcs_decls.hpp` where every
declaration is COMPLETE -- parameter list resolved through
`signature_authority.py` (signals.json authority first; typed-snapshot
decompile fill for the authority's empty-params gap; Q4 ledger for the
residual).  No `...` emission path exists any more.

X25 (2026-10-15): two fixes for the C2065/C2182 error flood at HEAD
------------------------------------------------------------------
(a) `src/_generated/global_funcs.hpp` was deleted by X12c (74cfd3f3,
    dead-header sweep) while this stage kept calling it -- every chain run
    crashed with FileNotFoundError.  The generator is now SELF-HOSTING:
    when the upstream library is absent it re-derives its output from its
    own frozen emission (`RET NAME(params);  // 0xADDR sig=...`, which is
    parseable), so this stage is an idempotent in-place transform.

(b) The X4 emission carried two parse blockers into every consumer
    (589 e4 TUs via e4_globals.hpp; MSVC error cap C1003 at 100/TU):
      1. raw IDA register annotations in parameter NAMES (`a1@<ebx>`,
         `a2@<st0>`) -- invalid C++ tokens (C2018/C2062/C7568/C2182);
      2. class-typed parameters/returns (`ObjectClass *p_this`) that are
         declared in namespace gamemd by the e4 flat universe but were
         emitted UNQUALIFIED at global scope (C2065 x66/TU until the cap).
    The emission now (1) strips `@<...>` annotations and (2) qualifies
    tokens that name classes of the e4 flat universe as `gamemd::X` --
    TYPE positions only; parameter NAMES are detected per parameter
    (last top-level identifier / fn-ptr paren name / default-arg and
    array-suffix aware) and left untouched (C2751: cannot qualify a
    parameter name).  Both transforms are idempotent.

Output: src/_generated/global_funcs_decls.hpp (regenerated; wired into
e4_globals.hpp).

Usage: [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = "--apply" in sys.argv
SRC = ROOT / "src/_generated/global_funcs.hpp"
DST = ROOT / "src/_generated/global_funcs_decls.hpp"
OLD = ROOT / "src/_generated/global_funcs_variad.hpp"
WIRE = ROOT / "src/e4/e4_globals.hpp"
REPORT = ROOT / ".omo" / "unresolved_reports" / "x4_gf_wire.unresolved.json"

DECL = re.compile(r'^([\w:\s\*<&>]+?)\b([A-Za-z_]\w*)\s*\([^;()]*\)\s*;'
                  r'\s*(?://\s*(0x[0-9A-Fa-f]+).*)?$')

# ---------------------------------------------------------------------------
# X25 transform: sanitize IDA annotations + qualify gamemd-universe classes
# ---------------------------------------------------------------------------
_AT_RE = re.compile(r'@<[^>]*>')
_FPTR_NAME = re.compile(r'\(\s*[^()]*?\*\s*(\w+)\s*\)')

# classes declared in namespace gamemd by the e4 flat universe (the single
# source of truth for what `gamemd::X` can resolve in e4 TUs).  Loaded once.
_G = None
# Win32 / CRT / scalar pseudo types that must never be qualified
_DENY = {'HWND', 'HANDLE', 'DWORD', 'UINT', 'LPVOID', 'BOOL', 'BYTE', 'WORD',
         'LONG', 'WPARAM', 'LPARAM', 'LPSTR', 'LPCSTR', 'LCID', 'HKEY',
         'HINSTANCE', 'LRESULT', 'VARTYPE', 'DWORD_PTR', 'LCTYPE', 'LPCCH',
         'LPCWCH', 'LPWSTR', 'LPCWSTR', 'FILE', 'LPSTREAM', 'SOCKET'}

X25_HEADER_PREFIXES = (
    '// X4: COMPLETE', '// global_funcs.hpp via', '// (signature authority',
    '// X25: IDA @<reg>', '// class tokens qualified', '// input library deleted',
    '// Variadic emission path', '#pragma once')


def _gamemd_classes():
    global _G
    if _G is None:
        _G = set()
        for hp in (ROOT / 'src/e4/classes/_tree_full_e4.hpp',
                   ROOT / 'src/e4/classes/_fwd_e4.hpp',
                   ROOT / 'src/e4/classes/_fwd_tree_e4.hpp'):
            try:
                t = hp.read_text(encoding='utf-8', errors='replace')
            except OSError:
                continue
            for m in re.finditer(r'\b(?:struct|class)\s+(\w+)', t):
                _G.add(m.group(1))
    return _G


def _qualify_tokens(seg, skip):
    G = _gamemd_classes()

    def rep(m):
        n = m.group(1)
        if n in G and n not in _DENY and n not in skip:
            return 'gamemd::' + n
        return n
    return re.sub(r'(?<![:\w])(\w+)(?![:\w])', rep, seg)


def _split_top(params):
    out, depth, cur = [], 0, ''
    for ch in params:
        if ch in '([<':
            depth += 1
        elif ch in ')]>':
            depth -= 1
        if ch == ',' and depth == 0:
            out.append(cur)
            cur = ''
        else:
            cur += ch
    out.append(cur)
    return out


def _param_name(p):
    """The parameter NAME to leave unqualified, or None (nameless type)."""
    p = p.split('=', 1)[0]          # strip default
    p = p.strip()
    if not p:
        return None
    m = _FPTR_NAME.search(p)        # fn-ptr: (*name) / (* name)
    if m:
        return m.group(1)
    depth = 0
    last = None
    for i, ch in enumerate(p):
        if ch in '([<':
            depth += 1
        elif ch in ')]>':
            depth -= 1
        elif depth == 0 and (ch.isalnum() or ch == '_'):
            if i == 0 or not (p[i - 1].isalnum() or p[i - 1] == '_'):
                m2 = re.match(r'\w+', p[i:])
                last = (m2.group(0), i + len(m2.group(0)))
    if not last:
        return None
    tail = p[last[1]:].strip()
    if tail == '' or tail.startswith('['):
        return last[0]
    return None


def x25_sanitize_line(ln):
    """Sanitize + qualify one emission line (idempotent)."""
    s = ln.rstrip(' \t\r')
    if not s or s.startswith('//') or s.startswith('#') or '(' not in s:
        return s
    if '@<' in s:
        s = _AT_RE.sub('', s)
    m = re.match(r'^(\s*)([^()]*)\(([^()]*(?:\([^()]*\)[^()]*)*)\)(.*)$', s)
    if not m:
        return s
    indent, head, params, tail = m.groups()
    head2 = _qualify_tokens(head, set())
    new_ps = []
    for p in _split_top(params):
        nm = _param_name(p)
        new_ps.append(_qualify_tokens(p, {nm} if nm else set()))
    return '%s%s(%s)%s' % (indent, head2, ','.join(new_ps), tail)


print('global_funcs library:', SRC, '(present)' if SRC.exists() else
      '(ABSENT -- X25 self-hosting mode)')

report = None
n_resolved = 0
out_lines = []
if SRC.exists():
    # legacy path: derive complete prototypes from the collapsed library
    sys.path.insert(0, str(Path(__file__).resolve().parent))
    from signature_authority import Authority  # noqa: E402
    # MSVC treats these CRT-intrinsic spellings specially -- an ellipsis
    # declaration C2059s and poisons every includer (g135 diagnosis); they
    # are also skipped here for the same reason (no declaration possible).
    INTRINSIC_BAD = {"_toupper", "_tolower"}
    decls = []
    for ln in SRC.read_text(encoding="utf-8", errors="replace").split("\n"):
        s = ln.strip()
        if not s or s.startswith("//") or s.startswith("#"):
            continue
        m = DECL.match(s)
        if not m:
            continue
        ret, name = m.group(1).strip(), m.group(2)
        addr = m.group(3)
        if ret in ("#pragma",) or name in INTRINSIC_BAD:
            continue
        decls.append((ret, name, addr))
    print("declarations parsed:", len(decls))

    au = Authority(ROOT)
    report = {"resolved_signals": 0, "resolved_ida": 0, "resolved_empty": 0,
              "unresolved": {}, "source": str(SRC.relative_to(ROOT))}
    for ret, name, addr in decls:
        r = au.resolve(name=name, addr=addr)
        if r is None or r.params is None:
            report["unresolved"]["%s|%s" % (name, addr or "")] = {
                "name": name, "addr": addr,
                "reason": "no signals entry and no ida_cache decompile"}
            continue
        prov = r.provenance
        report["resolved_%s" % ("signals" if prov == "signals" else
                                "ida" if prov == "ida" else "empty")] += 1
        ann = ("  // %s" % (addr if addr is not None else r.addr or "")
               ) if (addr or r.addr) else ""
        sig = "sig=%s" % prov
        out_lines.append("%s %s(%s);%s %s" % (ret or "int", name, r.params,
                                              ann, sig))
    n_resolved = len(out_lines)
    n_unres = len(report["unresolved"])
    print("resolved: signals=%d ida=%d empty=%d; unresolved=%d"
          % (report["resolved_signals"], report["resolved_ida"],
             report["resolved_empty"], n_unres))
    if n_unres:
        print("!! [x4] %d declaration(s) unresolvable -- Q4 ledger required:"
              % n_unres)
        for k in sorted(report["unresolved"])[:10]:
            print("    |", k)
else:
    # X25 self-hosting: re-derive from the frozen emission.  Non-emission
    # lines (header comment, pragma) are dropped here and re-emitted below.
    if not DST.exists():
        print("FATAL: neither %s nor %s exists" % (SRC, DST))
        sys.exit(2)
    for ln in DST.read_text(encoding='utf-8',
                            errors='replace').split('\n'):
        s = ln.rstrip(' \t\r')
        if s and not s.startswith('//') and not s.startswith('#'):
            out_lines.append(s)
    print("self-host: %d emission line(s)" % len(out_lines))

# X25: apply the sanitize + qualify transform to every emission line
n_at = n_q = 0
for i, ln in enumerate(out_lines):
    new = x25_sanitize_line(ln)
    if new != ln:
        n_at += ln.count('@<')
        n_q += 1
        out_lines[i] = new

print('x25 transform: %d line(s) rewritten (%d @<> annotations stripped)'
      % (n_q, n_at))

if APPLY:
    with open(DST, "w", encoding="utf-8", errors="replace", newline="\n") as f:
        f.write("// X4: COMPLETE free-function prototypes derived from\n")
        f.write("// global_funcs.hpp via tools/csp_export/_absorbed/step4_bodies/"
                "fix_gf_wire.py\n")
        f.write("// (signature authority: signals.json -> ida_cache fill).\n")
        f.write("// X25: IDA @<reg> annotations stripped; gamemd-universe\n")
        f.write("// class tokens qualified as gamemd::X (parseable in e4 TUs);\n")
        f.write("// input library deleted by X12c -- self-hosting transform.\n")
        f.write("// Variadic emission path removed per plan X4 (禁 `...`; Q4).\n")
        f.write("#pragma once\n\n")
        for l in out_lines:
            if any(l.startswith(p) for p in X25_HEADER_PREFIXES):
                continue
            f.write(l + "\n")
    print("written:", DST)
    if OLD.exists():
        OLD.unlink()
        print("removed stale:", OLD)

    cur = WIRE.read_text(encoding="utf-8", errors="replace")
    tag = 'global_funcs_decls.hpp'
    old_tag = 'global_funcs_variad.hpp'
    if old_tag in cur:
        cur = cur.replace(old_tag, tag)
        WIRE.write_text(cur, encoding="utf-8", errors="replace")
        print("include updated in e4_globals.hpp (variad -> decls)")
    elif tag not in cur:
        with open(WIRE, "a", encoding="utf-8", errors="replace", newline="\n") as f:
            f.write("\n// X4: complete global-func supply wiring (was G42.16 "
                    "variadic)\n")
            f.write('#include "_generated/global_funcs_decls.hpp"\n')
        print("wired into e4_globals.hpp")
    else:
        print("already wired")

    if report is not None:
        REPORT.parent.mkdir(parents=True, exist_ok=True)
        REPORT.write_text(json.dumps(report, indent=1, ensure_ascii=False,
                                     sort_keys=True), encoding="utf-8")
else:
    print("(dry run)")
