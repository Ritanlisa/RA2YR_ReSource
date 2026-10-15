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
    # X28: legacy pass first, then the completion pass (read-fresh) handles
    # the def-side lag + def>decl shapes.  In apply mode the completion runs
    # twice: round 1 extends defs to the max arity any decl of the same
    # (class, method) requests; round 2 repairs the pairs whose defs grew.
    _legacy_main()
    if APPLY:
        x28_complete(True)
        x28_complete(True)
    else:
        x28_complete(False)


def _legacy_main():
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
            # X28: cast-artifact def params (`(int)(TechnoClass * aP1)`) must
            # not be copied into the DECL -- as a parameter they parse as a
            # function type (C2091 'function returning function').
            if any(_hazard_param(p) for p in dparams):
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
            # X28: the completion pass (x28_complete) unifies by COUNT+TYPE
            # with def-verbatim params kept on either side (param NAMES are
            # free for overload matching).  Do not re-churn those pairs into
            # this pass's name-normalized form -- it would strip the
            # ` = 0` defaults the completion pass adds for smaller-arity
            # call sites and fight the completion to non-convergence.
            if len(cparams) == len(dparams) and all(
                    _type_sig(cparams[k]) == _type_sig(dparams[k])
                    for k in range(len(cparams))):
                continue
            # X25 dedup: the rewrite can make this decl line IDENTICAL to
            # another decl of the same class already in the file (Buffer
            # Init / Hash Reset / XSurface WalkLine were produced exactly
            # this way -- C2535/C2572 x6).  When the unify target signature
            # already exists on another decl line of the same class, drop
            # this line instead of writing the duplicate.
            new_text = '%s%s%s(%s);' % (dm.group(1), ddm.group(1),
                                        dm.group(3), ', '.join(new_decl_ps))
            dup_elsewhere = False
            other_cls = None
            for j, l2 in enumerate(lines):
                if j == i or l2 is None:
                    continue
                sm2 = re.match(r'\s*struct\s+(\w+)\s*\{', l2)
                if sm2:
                    other_cls = sm2.group(1)
                    continue
                if l2.strip() == '};':
                    other_cls = None
                    continue
                dm2 = DECL_RE.match(l2.strip())
                if dm2 and other_cls == cls \
                        and dm2.group(3) == dm.group(3) \
                        and norm_params(split_params(dm2.group(4))) \
                        == norm_params(new_decl_ps):
                    dup_elsewhere = True
                    break
            if dup_elsewhere:
                lines[i] = None  # dropped below; signature already present
                n_decl += 1
                changed = True
                continue
            # decl ret type := def ret type (C2556 return-mismatch family)
            lines[i] = '%s%s%s(%s);%s' % (dm.group(1), ddm.group(1), dm.group(3),
                                          ', '.join(new_decl_ps), dm.group(5) or '')
            n_decl += 1
            changed = True
            # extend the def in its file (deferred write below)
            def_files[dp].append((di, fill_def, ddm))
        if changed and APPLY:
            p.write_text('\n'.join(l for l in lines if l is not None),
                         encoding='utf-8')

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


# ---------------------------------------------------------------------------
# X28 completion: close the def-side lag the legacy rule leaves behind.
#
# The legacy rule rewrites DECLs to (def params + fillers) but registers the
# matching DEF extension only when it actually rewrites the decl line; for
# pairs whose decl already had the target shape (typically decl = def + one
# defaulted filler, e.g. `int Dtor(void *a1 = 0);` vs def `int Dtor()`), the
# norm-equality skip exits BEFORE the def extension -> the def keeps its short
# param list forever.  MSVC: a def whose param list does not match any
# declaration is not matched to the member; it falls back to "static" error
# recovery -> C2511 + one C2671 per `this->` line in the body (X28 finding).
#
# Completion rules (params only; return types untouched):
#   * decl count > def count, prefix types agree  -> extend DEF with the
#     decl's trailing params (defaults stripped).  Body untouched.
#   * def count > decl count, prefix types agree  -> extend DECL with the
#     def's trailing params (+ ` = 0` defaults so smaller-arity call sites
#     keep compiling).  Def untouched.
#   * prefix types disagree (receiver-as-first-param static-form defs)
#     -> deferred/reported (X28: static-form family, needs the C2352 axis).
# Param NAMES are free for overload matching (MSVC: name-only differences are
# not an error), so appended names may be renamed on body collision.
# ---------------------------------------------------------------------------

X28_DEF_RE = DEF_RE
X28_DECL_RE = DECL_RE


def _strip_default(p):
    return re.sub(r'\s*=\s*[^,]*$', '', p).strip()


def _type_sig(p):
    p = _strip_default(p)
    p = re.sub(r'\[[^\]]*\]\s*$', '', p).strip()
    p = re.sub(r'\b([A-Za-z_]\w*)\s*$', '', p).strip()
    p = re.sub(r'\s+', ' ', p).strip()
    # X28: SOCKET is typedef'd `unsigned int` in this corpus (e4_protos.h /
    # winsock UINT_PTR); the micro-hygiene pass normalizes decls to
    # `unsigned int` while defs may keep `SOCKET` -- equivalence keeps this
    # pass from "reverting" that normalization back to SOCKET.
    return re.sub(r'\bSOCKET\b', 'unsigned int', p)


def _param_name(p):
    p = _strip_default(p)
    m = re.search(r'\(\s*\*\s*([A-Za-z_]\w*)\s*\)', p)   # fn-ptr param name
    if m:
        return m.group(1)
    m = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])?$', p)
    return m.group(1) if m else None


def _rename_param(p, newname):
    """Rename the param's identifier (last occurrence of its name)."""
    old = _param_name(p)
    if not old:
        return p
    i = p.rfind(old)
    return p[:i] + newname + p[i + len(old):]


def _unique_name(base, taken, body=''):
    cand = base + '_x'
    k = 1
    while cand in taken or (body and re.search(r'\b%s\b' % re.escape(cand),
                                              body)):
        cand = '%s_x%d' % (base, k)
        k += 1
    return cand


def _hazard_param(p):
    """True for cast-artifact param text (`(int)(X * aP1)`) that must not be
    copied into a DECL (parses as a function-type parameter -> C2091)."""
    p = _strip_default(p)
    return bool(re.match(r'^\(', p)) and not re.search(r'\(\s*\*', p)


def _def_body_text(lines, di):
    """Text from the def line to its balanced closing brace (best effort)."""
    depth = 0
    started = False
    out = []
    for i in range(di, min(di + 6000, len(lines))):
        l = lines[i]
        out.append(l)
        if not started:
            if '{' in l:
                started = True
                depth = l.count('{') - l.count('}')
        else:
            depth += l.count('{') - l.count('}')
        if started and depth <= 0:
            break
    return '\n'.join(out)


def _rewrite_params(line, params):
    """Replace the top-level (...) param list of a def/decl line."""
    o = line.index('(')
    depth = 0
    close = None
    for j in range(o, len(line)):
        if line[j] == '(':
            depth += 1
        elif line[j] == ')':
            depth -= 1
            if depth == 0:
                close = j
                break
    if close is None:
        return None
    return line[:o] + '(' + ', '.join(params) + ')' + line[close + 1:]


def _sig_key(line):
    """Class-scope declaration identity: line minus default-value tokens and
    whitespace.  Two decl lines with the same key are the SAME declaration
    (defaults do not distinguish signatures) -> C2535 if both present."""
    s = re.sub(r'//.*', '', line)
    s = re.sub(r'\s*=\s*[^,()]*', '', s)
    return re.sub(r'\s+', ' ', s).strip()


def _same_class_sig_exists(lines, i, cls, new_text):
    """True if another line inside the SAME `struct cls { ... }` block has the
    same signature key as new_text (with unchanged lines only)."""
    cur = None
    for j, l2 in enumerate(lines):
        sm = re.match(r'\s*struct\s+(\w+)\s*\{', l2)
        if sm:
            cur = sm.group(1)
            continue
        if re.match(r'^\s*\};', l2):
            cur = None
            continue
        if j == i or cur != cls:
            continue
        if _sig_key(l2) == _sig_key(new_text):
            return True
    return False


def x28_complete(apply):
    defs = {}
    for p in list((ROOT / 'src' / 'e4').glob('*.cpp')) + \
            list((ROOT / 'src' / '_gap2').glob('*.cpp')):
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        for i, l in enumerate(lines):
            dm = X28_DEF_RE.match(l.strip())
            if not dm:
                continue
            q = dm.group(2)
            cls, name = q.rsplit('::', 1)
            if (cls, name) not in defs:
                defs[(cls, name)] = (p, i)
    n_def_ext = n_decl_ext = n_deferred = n_dupdanger = n_multidecl = 0
    def_writes = {}     # def file -> {line_idx: new_line}
    decl_writes = {}    # header   -> {line_idx: new_line}
    # X28 safety: extending a decl that shares its (class, name) with another
    # decl line can create C2535 (same signature) or C2668 (default-argument
    # ambiguity against a sibling overload).  Only single-declaration names
    # are extended; multi-decl (overload) names are skipped untouched.
    decl_count = {}     # (file, cls, name) -> count
    for hp in sorted((ROOT / 'src' / 'e4' / 'classes').glob('*_e4.hpp')):
        if hp.name.startswith('_'):
            continue
        try:
            lines = hp.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        cls = None
        for i, l in enumerate(lines):
            sm = re.match(r'\s*struct\s+(\w+)\s*\{', l)
            if sm:
                cls = sm.group(1)
            if re.match(r'^\s*\};', l):
                cls = None
            dm = X28_DECL_RE.match(l)
            if not dm or not cls:
                continue
            decl_count[(hp, cls, dm.group(3))] = \
                decl_count.get((hp, cls, dm.group(3)), 0) + 1
        cls = None
        for i, l in enumerate(lines):
            sm = re.match(r'\s*struct\s+(\w+)\s*\{', l)
            if sm:
                cls = sm.group(1)
            if re.match(r'^\s*\};', l):
                cls = None
            dm = X28_DECL_RE.match(l)
            if not dm or not cls:
                continue
            key = (cls, dm.group(3))
            if key not in defs:
                continue
            if decl_count.get((hp, cls, dm.group(3)), 0) > 1:
                n_multidecl += 1
                continue
            dp, di = defs[key]
            try:
                dlines = dp.read_text(encoding='utf-8',
                                       errors='replace').split('\n')
            except OSError:
                continue
            if di >= len(dlines):
                continue
            dhead = X28_DEF_RE.match(dlines[di].strip())
            if not dhead:
                continue
            dps = split_params(dhead.group(3))
            cps = split_params(dm.group(4))
            if not dps and not cps:
                continue
            nmin = min(len(dps), len(cps))
            prefix_ok = all(_type_sig(dps[k]) == _type_sig(cps[k])
                            for k in range(nmin))
            if len(dps) == len(cps) and prefix_ok:
                continue
            if len(cps) > len(dps) and prefix_ok:
                body = _def_body_text(dlines, di)
                taken = {_param_name(x) for x in dps if _param_name(x)}
                extras = []
                for p in cps[len(dps):]:
                    pt = _strip_default(p)
                    nm = _param_name(pt)
                    if nm and (nm in taken or
                               re.search(r'\b%s\b' % re.escape(nm), body)):
                        cand = _unique_name(nm, taken, body)
                        pt = _rename_param(pt, cand)
                        taken.add(cand)
                    elif nm:
                        taken.add(nm)
                    extras.append(pt)
                new_line = _rewrite_params(dlines[di], dps + extras)
                if new_line and new_line != dlines[di]:
                    def_writes.setdefault(dp, {})[di] = new_line
                    n_def_ext += 1
            elif len(dps) > len(cps) and prefix_ok:
                if any(_hazard_param(p) for p in dps):
                    n_deferred += 1
                    continue
                taken = {_param_name(x) for x in cps if _param_name(x)}
                extras = []
                for p in dps[len(cps):]:
                    pt = p
                    nm = _param_name(pt)
                    if nm and nm in taken:
                        pt = _rename_param(pt, _unique_name(nm, taken))
                        nm = _param_name(pt)
                    if nm:
                        taken.add(nm)
                    extras.append(pt + ' = 0')
                new_params = cps + extras
                new_text = '%s%s%s(%s);%s' % (
                    dm.group(1), dm.group(2), dm.group(3),
                    ', '.join(new_params), dm.group(5) or '')
                decl_writes.setdefault(hp, {})[i] = (new_text, cls)
                n_decl_ext += 1
            else:
                n_deferred += 1

    total = n_def_ext + n_decl_ext
    print('X28 complete: def-ext %d, decl-ext %d, deferred(prefix-mismatch) '
          '%d, multi-decl-skip %d %s' % (n_def_ext, n_decl_ext, n_deferred,
                                         n_multidecl,
                                         '(DRY)' if not apply else ''))
    if not apply or not total:
        return
    files = set(def_writes) | set(decl_writes)
    for p in files:
        try:
            lines = p.read_text(encoding='utf-8',
                                errors='replace').split('\n')
        except OSError:
            continue
        edits = {}
        edits.update(def_writes.get(p, {}))
        for idx, (txt, _cls) in decl_writes.get(p, {}).items():
            edits[idx] = txt
        for i in edits:
            if 0 <= i < len(lines):
                lines[i] = edits[i]
        p.write_text('\n'.join(lines), encoding='utf-8')
    print('X28 complete: wrote %d file(s)' % len(files))


if __name__ == '__main__':
    main()
