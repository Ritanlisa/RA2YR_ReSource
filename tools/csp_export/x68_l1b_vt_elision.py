#!/usr/bin/env python3
"""X68 Lane 2 — literal-vt install elision, star-deref object-form extension.

Extends the accepted X38/X66/X67 elision channel to LHS star-deref forms the
X67 vocabulary banked as charset/residue/paren:

  *(T *)(RECV + N)        = <literal vt>     (arith-paren)
  *(T *)&RECV->Member[N]  = <literal vt>     (amp-member)
  *(T *)&RECV->Member     = <literal vt>
  *(T *)(RECV)            = <literal vt>     (paren-noarith)
  *(&RECV->Member)        = <literal vt>

Receiver identity rule (L474 discipline): RECV base = `this` / named identifier
(param/global) -> ELIDE (ctor-context vptr install, X11 basis, same envelope as
the accepted 2,282+105 sites). RECV base = `v<N>` raw local -> BANK (local
identity/alias unproven; raw local arrays cannot be made polymorphic by the
compiler without type restructure).

RHS gate unchanged from X67: exactly one literal vt symbol wrapped in any
cast/paren chain, no arithmetic (G1). Trailing `// comment` tolerated and kept
verbatim. Marker: `/* X11: vtable install elided (X68 <kind>, RHS <vt>) */`.

Usage: python x68_l1b_vt_elision.py            # dry run
       python x68_l1b_vt_elision.py --apply
"""
import re, sys, os, json
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, '..', '..'))
SRC = os.path.join(ROOT, 'src')
APPLY = '--apply' in sys.argv
LEDGER = os.path.join(HERE, 'x68_l1b_ledger.json')

VT_RE = re.compile(r'(?:vt_[A-Za-z_]\w*|[A-Za-z_]\w*_(?:vftable|Vtable\d*))')
RHSCHARSET_OK = re.compile(r'^[A-Za-z0-9_&()\s\*]+$')
CAST_RE = re.compile(r'\([A-Za-z_][A-Za-z_0-9\s\*]*\)')

# whole-line statement: lead lhs = rhs ; [anchor] [//comment] [cr]
LINE_RE = re.compile(
    r'^(?P<lead>\s*)(?P<lhs>[^=;\r]+?)\s*=\s*(?P<rhs>[^;\r]+?)\s*;'
    r'(?P<tail>(?P<anchor>\s*/\*0x[0-9A-Fa-f]{6}\*/)?(?P<comment>\s*//[^*\r]*)?)[ \t]*(?P<cr>\r)?$')

# LHS star forms (after leading whitespace), cast-stripped later
STAR_ARITH = re.compile(r'^\*\s*(?:\([\w\s\*]+\)\s*)?\(\s*([A-Za-z_]\w*)\s*\+\s*\w+\s*\)$')
STAR_AMP = re.compile(r'^\*\s*(?:\([\w\s\*]+\)\s*)?&\s*([A-Za-z_]\w*)((?:->|\.|,)[\w\.\[\],\->]*)$')
STAR_PAREN = re.compile(r'^\*\s*(?:\([\w\s\*]+\)\s*)?\(\s*([A-Za-z_]\w*)\s*\)$')
STAR_AMP_PAREN = re.compile(r'^\*\s*\(\s*&\s*([A-Za-z_]\w*)(?:[\w\.\[\],\->]*)\s*\)$')
RAW_GLOBAL_RE = re.compile(r'^(?:byte|word|dword|qword|unk)_[0-9A-Fa-f]+')


def parse_rhs(rhs):
    if '=' in rhs or not RHSCHARSET_OK.match(rhs):
        return None
    ms = list(VT_RE.finditer(rhs))
    if len(ms) != 1:
        return None
    vt = ms[0].group(0)
    skel = (rhs[:ms[0].start()] + rhs[ms[0].end():]).strip()
    prev = None
    while prev != skel:
        prev = skel
        skel = CAST_RE.sub('', skel)
        skel = re.sub(r'\([&\s]*\)', '', skel)
        skel = skel.replace('()', '')
    if not re.fullmatch(r'[&\s]*', skel):
        return None
    return vt


def recv_kind(base):
    if base is None:
        return None
    if base == 'this' or re.match(r'^a[A-Z_]?P?\w*$', base) or not re.match(r'^v\d+$', base):
        # named/this receiver (corpus locals are v<N>; everything else named)
        if re.match(r'^v\d+$', base):
            return 'vlocal'
        return 'named'
    return 'vlocal'


def parse_lhs(lhs):
    s = lhs.strip()
    # iteratively strip cast-shaped groups (keep (&...) heads)
    changed = True
    while changed:
        changed = False
        s2 = re.sub(r'\(\s*[\w]+\s*\*+\s*\)', '', s)
        if s2 != s:
            s = s2
            changed = True
    s = s.strip()
    m = STAR_ARITH.match(s)
    if m:
        k = recv_kind(m.group(1))
        return ('star-arith-named' if k == 'named' else 'star-arith-vlocal'), s
    m = STAR_AMP.match(s)
    if m:
        k = recv_kind(m.group(1))
        if RAW_GLOBAL_RE.match(m.group(1)):
            return None, 'raw-global-deref'
        return ('star-amp-named' if k == 'named' else 'star-amp-vlocal'), s
    m = STAR_PAREN.match(s)
    if m:
        k = recv_kind(m.group(1))
        return ('star-paren-named' if k == 'named' else 'star-paren-vlocal'), s
    m = STAR_AMP_PAREN.match(s)
    if m:
        k = recv_kind(m.group(1))
        return ('star-amp-named' if k == 'named' else 'star-amp-vlocal'), s
    return None, 'unmatched'


def main():
    stats = Counter()
    banked = []
    per_file = {}
    nfiles = 0
    for dirpath, dirs, files in os.walk(SRC):
        for fn in sorted(files):
            if not fn.endswith('.cpp'):
                continue
            p = os.path.join(dirpath, fn)
            nfiles += 1
            try:
                lines = open(p, encoding='utf-8', errors='replace', newline='').read().split('\n')
            except OSError:
                continue
            hits = []
            for i, ln in enumerate(lines):
                if 'X11: vtable install elided' in ln:
                    continue
                if '&' not in ln and 'vfptr' not in ln and 'vtable' not in ln:
                    continue
                if '=' not in ln:
                    continue
                m = LINE_RE.match(ln)
                if not m:
                    continue
                lhs = m.group('lhs')
                rhs = m.group('rhs')
                vt = parse_rhs(rhs)
                if not vt:
                    continue  # x67 census owns nonliteral RHS reporting
                kind, info = parse_lhs(lhs)
                if kind is None:
                    stats['lhs-bank:' + info] += 1
                    banked.append([os.path.relpath(p, ROOT), i + 1, info, ln.strip()[:110]])
                    continue
                if kind.endswith('vlocal'):
                    stats['lhs-bank:' + kind] += 1
                    banked.append([os.path.relpath(p, ROOT), i + 1, kind, ln.strip()[:110]])
                    continue
                stats['kind:' + kind] += 1
                hits.append((i, kind, vt, m))
            if hits:
                per_file[p] = hits
                stats['sites'] += len(hits)

    print('files scanned:', nfiles)
    print('ELIDABLE SITES:', stats['sites'])
    for k, v in sorted(stats.items()):
        if k.startswith('kind:'):
            print('  ', k, v)
    print('BANKED:', len(banked))
    for k, v in sorted(stats.items()):
        if k.startswith('lhs-bank:'):
            print('  ', k, v)
    print('\nsamples (first 12):')
    n = 0
    for p, hits in sorted(per_file.items()):
        for i, kind, vt, m in hits:
            print('  %s:%d [%s] vt=%s | %s' % (
                os.path.relpath(p, ROOT), i + 1, kind, vt, m.group(0).strip()[:110]))
            n += 1
            if n >= 12:
                break
        if n >= 12:
            break

    if not APPLY:
        print('\nDRY RUN (use --apply)')
        json.dump({'stats': dict(stats), 'banked': banked}, open(LEDGER, 'w'), indent=1)
        return

    n_lines = 0
    ledger = []
    for p, hits in sorted(per_file.items()):
        lines = open(p, encoding='utf-8', errors='replace', newline='').read().split('\n')
        for i, kind, vt, m in hits:
            anchor = (m.group('anchor') or '').strip()
            comment = (m.group('comment') or '').strip()
            cr = m.group('cr') or ''
            marker = ('/* X11: vtable install elided (X68 %s, RHS %s) */' % (kind, vt)
                      + (('  ' + anchor) if anchor else '')
                      + (('  ' + comment) if comment else '')
                      + cr)
            ledger.append({'file': os.path.relpath(p, ROOT), 'line': i + 1,
                           'kind': kind, 'vt': vt,
                           'before': lines[i].rstrip('\r'), 'after': (m.group('lead') + marker).rstrip('\r')})
            lines[i] = m.group('lead') + marker
            n_lines += 1
        open(p, 'w', encoding='utf-8', errors='replace', newline='').write('\n'.join(lines))
    print('APPLIED: %d lines in %d files' % (n_lines, len(per_file)))
    json.dump({'stats': dict(stats), 'banked': banked, 'applied': ledger},
              open(LEDGER, 'w'), indent=1)


if __name__ == '__main__':
    main()
