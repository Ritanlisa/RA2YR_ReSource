#!/usr/bin/env python3
"""G41.30: unify corpus DEF signatures with their class-header DECLs.

The arity extension (fix_c2660_max_arity) extended decls only; defs kept
older param lists (different types AND counts) -> C2511 (no matching
overload) plus C2671/C2352 cascade noise from broken overload resolution.

Unification rule per (Class, Method) pair where the DECL has >= params
than the DEF:
  - DEF  := its own params + plain fillers `void *aN` up to decl count
  - DECL := the DEF's param list verbatim, plus defaulted fillers
           `void *aN = 0` up to the same count
(the decl's own types are discarded -- they were never in sync with the
def; the def is the compiled truth its body was written against)

Defs are located corpus-wide (src/e4/*_e4.cpp, src/_gap2/*.cpp) via
single-line heads with brace on the same or the following line.

Usage: python tools/csp_export/fix_def_decl_arity_unify.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv

# RC4 idempotency fix: the param capture used to be [^;{}]*, which swallows
# a trailing `// comment` -- decl lines like
#   `int ddtor(int a2, int a3)  // ctx (was X, void *a2_1 = 0, void *a3_1 = 0);`
# then parsed the COMMENT text as parameters, so every run appended two more
# filler params to the def (5 -> 7 -> 9 ... runaway, the classic
# [repaired-variadic] repeat-append pathology).  The tempered capture
# ((?:(?!//)[^;{}])*) stops at the comment opening.
DEF_RE = re.compile(
    r'^([A-Za-z_][\w:<>,\s\*&]*?[\s\*])((?:[A-Za-z_]\w*::)+~?[A-Za-z_]\w*)'
    r'\(((?:(?!//)[^;{}])*)\)\s*(\{)?\s*(?://.*)?$')
DECL_RE = re.compile(
    r'^(\s*)([A-Za-z_][\w:<>,\s\*&]*?[\s\*])~?([A-Za-z_]\w*)'
    r'\(((?:(?!//)[^;{}])*)\)\s*;(\s*(?://.*)?)$')


def split_params(ps):
    ps = ps.strip()
    if not ps or ps == 'void':
        return []
    return [p.strip() for p in re.split(r',(?![^()]*\))', ps)]


def strip_default(p):
    return re.sub(r'\s*=\s*[^,]*$', '', p).strip()


def param_name(p):
    p = strip_default(p)
    m = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])?$', p)
    return m.group(1) if m else None


def norm_params(ps):
    """RC4 idempotency guard: whitespace/default-normalized param tokens."""
    return [re.sub(r'\s+', ' ', strip_default(p)).strip() for p in ps]


def main():
    # 1. collect def signature map
    defs = {}
    def_files = {}
    for p in list((ROOT / 'src' / 'e4').glob('*.cpp')) + list((ROOT / 'src' / '_gap2').glob('*.cpp')):
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        for i, l in enumerate(lines):
            dm = DEF_RE.match(l.strip())
            if not dm:
                continue
            qual = dm.group(2)
            cls = qual.rsplit('::', 1)[0]
            name = qual.rsplit('::', 1)[1]
            defs[(cls, name)] = (p, i, split_params(dm.group(3)), dm)
            def_files.setdefault(p, [])

    # 2. walk headers; retitle decls below their defs
    n_decl = n_def = 0
    for p in sorted((ROOT / 'src' / 'e4' / 'classes').glob('*_e4.hpp')):
        if p.name.startswith('_'):
            continue
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        cls = None
        changed = False
        for i, l in enumerate(lines):
            sm = re.match(r'\s*struct\s+(\w+)\s*\{', l)
            if sm:
                cls = sm.group(1)
            dm = DECL_RE.match(l)
            if not dm or not cls:
                continue
            key = (cls, dm.group(3))
            if key not in defs:
                continue
            dp, di, dparams, ddm = defs[key]
            cparams = split_params(dm.group(4))
            if len(cparams) < len(dparams):
                continue
            # unify: decl := def params + defaulted fillers to cparams count
            # T4c fix: taken anchors on the DEF only.  The old set also took
            # the decl's current filler names -- but the rewrite DISCARDS
            # the decl's params (decl := def + fillers), so the old filler
            # name was avoid-then-freed every pass and the drawn name
            # alternated a2_1 <-> a2_2 forever (period-2, S5 never converged
            # on ~105 flat headers even after the def-side was stable).
            taken = {param_name(x) for x in dparams if param_name(x)}

            def filler(j):
                # RC4 idempotency: ONE name sequence shared by decl+def
                # (the old code drew separate names per side, so a second
                # run saw decl/def name drift and churned again).
                base = 'a%d' % (j + 1)
                nm = base
                k = 1
                while nm in taken:
                    nm = '%s_%d' % (base, k)
                    k += 1
                taken.add(nm)
                return 'void *%s' % nm

            shared_fill = [filler(j) for j in range(len(dparams), len(cparams))]
            fill_decl = [f + ' = 0' for f in shared_fill]
            fill_def = list(shared_fill)
            new_decl_ps = dparams + fill_decl
            # RC4 idempotency guard: skip pairs the corpus already unified
            # (same count, same normalized params) -- the old code rewrote
            # the decl unconditionally, so every re-run was a diff.
            if norm_params(cparams) == norm_params(new_decl_ps):
                continue
            # decl ret type := def ret type (C2556 return-mismatch family)
            lines[i] = '%s%s%s(%s);%s' % (dm.group(1), ddm.group(1), dm.group(3),
                                          ', '.join(new_decl_ps), dm.group(5) or '')
            n_decl += 1
            changed = True
            # extend the def in its file (deferred write below)
            def_files[dp].append((di, fill_def, ddm))
        if changed and APPLY:
            p.write_text('\n'.join(lines), encoding='utf-8')

    for p, items in def_files.items():
        if not items:
            continue
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        for di, fill_def, ddm in items:
            l = lines[di]
            head = DEF_RE.match(l.strip())
            if not head:
                continue
            # locate balanced param parens in the ORIGINAL line; keep the tail
            o = l.index('(')
            depth = 0
            for j in range(o, len(l)):
                if l[j] == '(':
                    depth += 1
                elif l[j] == ')':
                    depth -= 1
                    if depth == 0:
                        close = j
                        break
            else:
                continue
            ps = split_params(l[o + 1:close]) + fill_def
            lines[di] = l[:o] + '(' + ', '.join(ps) + ')' + l[close + 1:]
        n_def += 1
        if APPLY:
            p.write_text('\n'.join(lines), encoding='utf-8')
    print('decls unified: %d, def files extended: %d %s'
          % (n_decl, n_def, '(written)' if APPLY else '(DRY)'))


if __name__ == '__main__':
    main()
