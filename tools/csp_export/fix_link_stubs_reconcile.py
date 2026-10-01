#!/usr/bin/env python3
"""Reconcile src/_generated/link_stubs.cpp stub signatures with CURRENT
header declarations.  (see docstring tail for error families covered)

Usage: python tools/csp_export/fix_link_stubs_reconcile.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
TARGET = ROOT / 'src' / '_generated' / 'link_stubs.cpp'
MARK = '// link stub (no binary body yet)'

CLS_HEAD_RE = re.compile(
    r'^\s*(?:class|struct)\s+([A-Za-z_]\w*)\s*(?::[^;{]*)?$')
MEMBER_RE = re.compile(
    r'^\s*(?:(?:virtual|static|explicit|inline|constexpr|override|final)\s+)*'
    r'([A-Za-z_][\w:]*(?:<[^<>]*>)?(?:\s+[\w:<>,\s\*&\(\)]*?[\s\*&])?)?'
    r'(?<![\w:])(~?[A-Za-z_]\w*)\s*\((.*?)\)\s*'
    r'(?:const\s*)?(?:override\s*)?(?:final\s*)?'
    r'(noexcept(?:\s*\([^)]*\))?)?\s*(?:=\s*0\s*)?;\s*$')

BARE_TYPES = {
    'void', 'int', 'char', 'bool', 'short', 'long', 'float', 'double',
    'unsigned', 'signed', 'const', 'struct', 'class', 'enum', 'wchar_t',
    'auto', 'byte',
}


def strip_line_comment(s):
    return re.sub(r'//.*$', '', s)


def _include_closure(tu_path):
    """All src/ headers transitively reachable from the TU's `#include "..."`
    lines -- the class universe this TU actually compiles against."""
    seen = set()
    stack = [tu_path]
    while stack:
        p = stack.pop()
        if p in seen:
            continue
        seen.add(p)
        try:
            text = p.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        for m in re.finditer(r'#include\s+"([^"]+)"', text):
            q = (ROOT / 'src' / m.group(1)).resolve()
            if q.exists() and q.suffix in ('.hpp', '.h'):
                stack.append(q)
    return seen


def scan_decls(universe=None):
    """(Class, member) -> [overload dicts]; class-body scan with multi-line
    decl accumulation. `universe` restricts the scan to those exact files
    (the TU's include closure) -- prevents cross-universe contamination
    (e4 flat classes vs legacy headers, G33 dual-universe ruling)."""
    index = {}
    for p in sorted(ROOT.glob('src/**/*.hpp')):
        if 'build' in p.parts or not p.is_file():
            continue
        if universe is not None and p.resolve() not in universe:
            continue
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        depth = 0
        cls = None
        cls_depth = None
        pending_cls = None
        acc = None  # accumulating a multi-line member decl
        for raw in lines:
            s = strip_line_comment(raw)
            opens = s.count('{')
            closes = s.count('}')
            if acc is not None and cls:
                acc += ' ' + s.strip()
                if ';' in s:
                    mm = MEMBER_RE.match(acc.strip().rstrip(';') + ';')
                    if mm:
                        _record(index, cls, mm, p)
                    acc = None
                elif '{' in s or '}' in s:
                    acc = None  # not a decl after all
                continue
            # class head at ANY depth (namespace nesting shifts the level);
            # a bare `class X;` fwd decl never opens a body, so only a
            # pending head followed by `{` (same or later line) commits.
            hm = CLS_HEAD_RE.match(s.strip())
            if hm and opens == 0:
                pending_cls = hm.group(1)
                cls_depth = None
            if hm and opens > 0:
                cls = hm.group(1)
                cls_depth = depth + 1
            elif pending_cls and opens > 0 and closes == 0:
                cls = pending_cls
                cls_depth = depth + 1
                pending_cls = None
            if cls and cls_depth is not None and depth == cls_depth \
                    and opens == 0 and closes == 0:
                mm = MEMBER_RE.match(s.rstrip())
                if mm:
                    _record(index, cls, mm, p)
                    continue
                stripped = s.strip()
                if stripped and '(' in stripped and not stripped.endswith(';') \
                        and not stripped.endswith('{'):
                    acc = stripped  # maybe multi-line decl
                    continue
            depth += opens - closes
            if cls_depth is not None and depth < cls_depth:
                cls = None
                cls_depth = None
                pending_cls = None
    return index


def _record(index, cls, mm, p):
    ret = (mm.group(1) or '').strip()
    # decls indexed from class bodies may carry storage/class keywords the
    # DEFINITION must not repeat (MSVC C2723/C2382 face)
    while True:
        w = ret.split(None, 1)
        if w and w[0] in ('static', 'virtual', 'explicit', 'inline',
                          'constexpr'):
            ret = w[1] if len(w) > 1 else ''
        else:
            break
    name = mm.group(2)
    params = (mm.group(3) or '').strip()
    noex = (mm.group(4) or '').strip()
    is_ctor = (name == cls)
    if not ret and not is_ctor and not name.startswith('~'):
        return  # unparsed shape; do not index garbage
    key = (cls, name)
    rec = {
        'ret': '' if (is_ctor or name.startswith('~')) else ret,
        'params': params, 'noexcept': noex,
        'file': str(p.relative_to(ROOT)),
    }
    index.setdefault(key, []).append(rec)


def _pick(overloads, stub_params):
    """Pick the overload whose param shape best matches the stub's."""
    def score(d):
        dp = [x.strip() for x in re.split(r',(?![^()]*\))', d['params'])
              if x.strip() and x.strip() != 'void']
        sp = [x.strip() for x in re.split(r',(?![^()]*\))', stub_params)
              if x.strip() and x.strip() != 'void']
        if len(dp) != len(sp):
            return -abs(len(dp) - len(sp)) * 10
        s = 0
        for a, b in zip(dp, sp):
            ta = re.sub(r'\b(a?\d+|pID|self)\b', '', a)
            tb = re.sub(r'\b(a?\d+)\b', '', b)
            ca = re.sub(r'[^a-z]', '', ta.lower())
            cb = re.sub(r'[^a-z]', '', tb.lower())
            common = 0
            for wdn in ('noinit', 'char', 'int', 'void', 'bool', 'const',
                        'unsigned', 'short', 'long', 'float', 'double'):
                if (wdn in ca) == (wdn in cb) and wdn in ca:
                    common += 1
            s += common
        return s
    return max(overloads, key=score)


def name_params(params):
    params = params.strip()
    if not params or params == 'void':
        return ''
    out = []
    ai = 0
    for p in re.split(r',(?![^()]*\))', params):
        p = p.strip()
        if not p:
            continue
        m = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])?$', p)
        hasname = (m is not None and m.group(1) not in BARE_TYPES
                   and not p.rstrip().endswith('*') and not p.rstrip().endswith('&'))
        if hasname:
            out.append(p)
        else:
            out.append(p + (' a%d' % ai))
        ai += 1
    return ', '.join(out)


_CLASS_DEF_FILE = None


def _missing_include(cls, universe):
    """Header in the LEGACY universe (src/**.hpp minus e4/csp_canon/
    _generated) that fully defines `class cls` but is not in `universe`;
    return its src-relative include path or None."""
    global _CLASS_DEF_FILE
    if _CLASS_DEF_FILE is None:
        _CLASS_DEF_FILE = {}
        pat = re.compile(r'^\s*(?:class|struct)\s+([A-Za-z_]\w*)[^;{]*$')
        for p in ROOT.glob('src/**/*.hpp'):
            rp = str(p.relative_to(ROOT)).replace(chr(92), '/')
            if rp.startswith(('src/e4/', 'src/csp_canon/',
                              'src/_generated/', 'src/_gap2/')):
                continue
            try:
                for ln in p.read_text(encoding='utf-8',
                                      errors='replace').split('\n'):
                    m = pat.match(ln)
                    if m:
                        _CLASS_DEF_FILE.setdefault(m.group(1), rp)
            except OSError:
                continue
    rp = _CLASS_DEF_FILE.get(cls)
    if not rp:
        return None
    if (ROOT / rp).resolve() in universe:
        return None
    return rp


def main():
    universe = _include_closure(TARGET)
    print('TU include closure:', len(universe), 'headers')
    index = scan_decls(universe)
    print('decl index size:', len(index))
    lines = TARGET.read_text(encoding='utf-8', errors='replace').split('\n')
    fixed = nodcl = dupes = 0
    out = []
    samples = []
    seen_defs = set()
    needed_includes = set()
    i = 0
    while i < len(lines):
        ln = lines[i]
        if MARK in ln and i + 1 < len(lines):
            body = lines[i + 1].strip()
            if body.startswith('//'):
                out.append(ln)
                out.append(lines[i + 1])
                i += 2
                continue
            dm = re.match(
                r'(?:(.+?)\s+)?((?:[A-Za-z_]\w*::)+~?[A-Za-z_]\w*)\(([^;{}]*)\)'
                r'(?:\s*noexcept(?:\s*\([^)]*\))?)?\s*(\{.*)$',
                body)
            if dm:
                qname = dm.group(2)
                parts = qname.split('::')
                cls = parts[-2] if len(parts) >= 2 else None
                member = parts[-1]
                bodytxt = dm.group(4).strip()
                overloads = index.get((cls, member))
                if not overloads:
                    # a legacy-universe header may fully define the class
                    # without being in the TU's closure -> supply include
                    # instead of dropping a still-needed stub
                    inc = _missing_include(cls, universe)
                    if inc:
                        needed_includes.add(inc)
                    else:
                        out.append(ln)
                        out.append('//NODCL member not in any current header: '
                                   + body)
                        nodcl += 1
                        i += 2
                        continue
                    overloads = [{
                        'ret': '', 'params': dm.group(3) or '',
                        'noexcept': '', 'file': inc}]
                d = _pick(overloads, dm.group(3) or '')
                params = name_params(d['params'])
                ret = (' ' + d['ret'] + ' ') if d['ret'] else ''
                noex = (' ' + d['noexcept']) if d['noexcept'] else ''
                newdef = '%s%s(%s)%s %s' % (ret, qname, params, noex, bodytxt)
                sigkey = (qname, params)
                if sigkey in seen_defs:
                    out.append(ln)
                    out.append('//DUPSTUB duplicate of an earlier stub: '
                               + body)
                    dupes += 1
                    i += 2
                    continue
                seen_defs.add(sigkey)
                if newdef.strip() != body:
                    fixed += 1
                    if len(samples) < 8:
                        samples.append('  was: ' + body[:80])
                        samples.append('  now: ' + newdef[:80])
                out.append(ln)
                out.append(newdef)
                i += 2
                continue
        out.append(ln)
        i += 1
    if needed_includes:
        last_inc = max((j for j, l in enumerate(out)
                        if l.startswith('#include "')), default=-1)
        add = sorted('#include "%s"' % rp for rp in needed_includes)
        print('supplying includes:', *add)
        out[last_inc + 1:last_inc + 1] = add
    print('\n'.join(samples))
    print("stub defs reconciled:", fixed, " NODCL commented:", nodcl, " DUPSTUB:", dupes)
    if APPLY:
        TARGET.write_text('\n'.join(out), encoding='utf-8')
        print('written')
    else:
        print('DRYRUN -- pass --apply')


if __name__ == '__main__':
    main()
