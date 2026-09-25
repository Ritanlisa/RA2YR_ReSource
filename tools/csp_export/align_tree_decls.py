#!/usr/bin/env python3
"""Reconcile tree header declarations with tree cpp definition lines.

The redo retyped def lines from the fresh typed export (return/param
channels), while tree headers still carry the old declarations -> C2556 /
C2371 / C2372 / C2562 / C2511 mismatch families. The def line is the
export authority; this rewrites the TREE DECLARATION to match.

Scope: member defs `RET Cls::Mth(params)` in tree cpps (src/ minus e4/,
_generated, csp_canon) vs `RET Mth(params);` decls in the SAME universe's
hpp files. Mismatch -> replace decl return+params (address comment kept).

Usage: python tools/csp_export/align_tree_decls.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv

DEF_RE = re.compile(
    r'^(?P<ret>[A-Za-z_][\w\s\*<>,:&]*?)\s+'
    r'(?P<cls>[A-Za-z_]\w*)::(?P<mth>~?[A-Za-z_]\w*)\s*'
    r'\((?P<params>[^)]*)\)\s*(?:const\s*)?(?:\{\s*)?(?://[^\n]*)?$',
    re.M)
DECL_RE = re.compile(
    r'^(?P<ret>[A-Za-z_][\w\s\*<>,:&]*?)\s+'
    r'(?P<mth>~?[A-Za-z_]\w*)\s*\((?P<params>[^)]*)\)\s*(?P<const>const\s*)?;'
    r'(?P<cmt>[^\n]*)$', re.M)


def norm_params(s):
    toks = ' '.join(s.split())
    toks = re.sub(r'\s*,\s*', ', ', toks)
    return toks


def is_universe(p):
    s = str(p)
    if '--e4' in sys.argv:
        return 'e4' in p.parts and '_generated' not in s
    return ('e4' not in p.parts and '_generated' not in s
            and 'csp_canon' not in s)


# ---- collect defs (universe cpps) and decls (universe hpps) ----
defs = {}       # (cls, mth, norm_params) -> set(ret, )
decl_sites = {}  # (cls, mth) -> list of (hpp path, span, groupdict)
for p in sorted(SRC.rglob('*.cpp')):
    if not is_universe(p):
        continue
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    for m in DEF_RE.finditer(txt):
        if m.group('ret').strip() in ('return', 'else', 'case', 'if', 'while',
                                      'switch', 'for'):
            continue
        key = (m.group('cls'), m.group('mth'), norm_params(m.group('params')))
        defs.setdefault(key, set()).add(' '.join(m.group('ret').split()))

hpp_texts = {}
for p in sorted(SRC.rglob('*.hpp')):
    if not is_universe(p):
        continue
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    # enclosing class per decl: track last `class|struct X` before the decl
    cls_spans = [(m.group(1), m.start())
                 for m in re.finditer(
                     r'^[ \t]*(?:class|struct)\s+([A-Za-z_]\w*)', txt, re.M)]
    for m in DECL_RE.finditer(txt):
        cls = None
        for cn, cs in cls_spans:
            if cs < m.start():
                cls = cn
            else:
                break
        if cls is None:
            continue
        decl_sites.setdefault((cls, m.group('mth')), []).append(
            (p, m.span(), m.groupdict()))

mismatch = rewritten = 0
FORCE = '--force' in sys.argv
# (cls, mth) -> def signature authority (first unambiguous def wins)
sig_of = {}
for (cls, mth, params), rets in defs.items():
    if len(rets) != 1:
        continue
    sig_of.setdefault((cls, mth), (next(iter(rets)), params))

for (cls, mth, params), rets in defs.items():
    if len(rets) != 1:
        continue
    ret = next(iter(rets))
    sites = decl_sites.get((cls, mth))
    if not sites:
        continue
    if FORCE:
        sig = sig_of.get((cls, mth))
        if sig:
            ret, params = sig
    for path, (a, b), gd in sites:
        want = ('%s %s(%s)%s;' % (ret, mth, norm_params(params),
                                  ' const' if gd['const'] else ''))
        have_ret = ' '.join(gd['ret'].split())
        have_params = norm_params(gd['params'])
        want_params = norm_params(params)
        if have_ret == ret and (have_params == want_params
                                or have_params.replace(' ', '')
                                == want_params.replace(' ', '')):
            continue
        if not FORCE and not (have_params == want_params
                              or have_params.replace(' ', '')
                              == want_params.replace(' ', '')):
            continue                      # non-force: params must line up
        txt = hpp_texts.get(str(path))
        if txt is None:
            txt = path.read_text(encoding='latin-1', errors='replace')
        old = txt[a:b]
        cmt = gd['cmt'] or ''
        new = want + cmt
        hpp_texts[str(path)] = txt[:a] + new + txt[b:]
        txt = hpp_texts[str(path)]
        rewritten += 1
    mismatch += 1

if APPLY:
    for sp, txt in hpp_texts.items():
        Path(sp).write_bytes(txt.encode('latin-1', errors='replace'))
print(f'signature drift: {mismatch} defs, {rewritten} decls rewritten')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
