#!/usr/bin/env python3
"""X67 L1 — direct-vtable-install elision, vocabulary extension (X38/X66 channel).

Extends the accepted X38/X66 elision vocabulary (105 sites) to the full literal
vtable-address install population measured in X67 P0 (4,593 raw hits):

  LHS forms : RECV.slot | *ptr | *(T*)expr | (T)RECV.slot | bare global slot
  RHS forms : &vt_X | &X_vftable | &X_VtableN wrapped in any cast/paren chain
              (pure address, zero arithmetic)
  Statement : whole-line single statement + optional /*0xADDR*/ anchor (G4 kept)

Guards (fail-loud BANK):
  G1  RHS = pure literal vtable address (charset gate: [A-Za-z0-9_&()\s*] only;
      any arithmetic/comma/call-arg => BANK computed-RHS)
  G2  LHS residue after cast-strip: no '(' no '&' no ','; single dotted/arrow
      chain or star-deref; control-keyword heads (return/if/for/...) BANK;
      bare-name local assigns (vptr identity into local slot post-ctor, alias
      equivalence unproven) BANK as local-value-assign
  G3  whole-line single statement (multi-; lines don't match -> BANK)
  G4  anchor comment preserved verbatim
  G5  bare raw-.data-global LHS (dword_/word_/byte_/qword_/unk_ + [N] arrays)
      -> BANK (no compiler mechanism covers a raw data slot; hazard documented)
  G6  for/if/while context lines structurally excluded (multi-; no-match)

Rewrite: whole line -> lead + `/* X11: vtable install elided (X67 <lhs>, RHS <vt>) */` + anchor.
Idempotent by construction (marker contains no `= &` shape).

Usage: python x67_l1_vt_elision.py            # dry run
       python x67_l1_vt_elision.py --apply
"""
import re, sys, os, json
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
SRC = os.path.join(ROOT, 'src')
APPLY = '--apply' in sys.argv
LEDGER = os.path.join(HERE, 'x67_l1_ledger.json')

VT_RE = re.compile(r'(?:vt_[A-Za-z_]\w*|[A-Za-z_]\w*_(?:vftable|Vtable\d*))')
RHSCHARSET_OK = re.compile(r'^[A-Za-z0-9_&()\s\*]+$')
LINE_RE = re.compile(
    r'^(?P<lead>\s*)(?P<lhs>[^=;\r]+?)\s*=\s*(?P<rhs>[^;\r]+?)\s*;'
    r'(?P<anchor>\s*/\*0x[0-9A-Fa-f]{6}\*/)?[ \t]*(?P<cr>\r)?$')
CAST_RE = re.compile(r'\([A-Za-z_][A-Za-z_0-9\s\*]*\)')
RESIDUE_OK = re.compile(r'(?:\*+\s*)?[A-Za-z_][A-Za-z0-9_\.\[\]\->\s]*')
KEYWORDS = {'return', 'if', 'else', 'while', 'for', 'do', 'switch', 'case',
            'goto', 'break', 'continue', 'delete', 'new', 'throw', 'sizeof'}
RAW_GLOBAL_RE = re.compile(r'^(?:byte|word|dword|qword|unk)_[0-9A-Fa-f]+')


def parse_rhs(rhs):
    """Return vt symbol if RHS is a pure literal vtable address, else None.

    Method: exactly one VT symbol; remove it; iteratively strip cast-shaped
    paren groups and empty/&-only groups; leftover must be only '&' and
    whitespace. Charset gate already excludes arithmetic/comma/call-args."""
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


def parse_lhs(lhs):
    """Classify LHS; return (kind, residue) or (None, reason)."""
    s = lhs.strip()
    # `*&expr` lvalue-identity idiom == writing through expr
    had_identity = False
    if s.startswith('*&'):
        s = s[2:].strip()
        had_identity = True
    if not re.fullmatch(r'[A-Za-z0-9_\*\(\)\[\]\.\->\s]+', s):
        return None, 'charset'
    changed = True
    while changed:
        changed = False
        s2 = CAST_RE.sub('', s)
        if s2 != s:
            s = s2
            changed = True
    s = s.strip()
    if '(' in s:
        return None, 'paren-lhs'
    if '&' in s or ',' in s:
        return None, 'amp/comma-lhs'
    if not RESIDUE_OK.fullmatch(s):
        return None, 'residue-shape'
    first = re.match(r'[A-Za-z_]\w*', s)
    if first and first.group(0) in KEYWORDS:
        return None, 'keyword-head'
    if '*' in s or had_identity:
        base = s.lstrip('*').strip()
        if RAW_GLOBAL_RE.match(base):
            return None, 'raw-global-deref'
        return 'star-deref', s
    if RAW_GLOBAL_RE.match(s):
        return None, 'raw-global-slot'
    if '[' in s and RAW_GLOBAL_RE.match(re.split(r'[\.\[]', s)[0]):
        return None, 'raw-global-array'
    if '->' in s or '.' in s:
        return 'recv-slot', s
    return 'bare-name', s


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
                if '/* X11: vtable install elided' in ln:
                    continue
                if '&' not in ln or '=' not in ln:
                    continue
                m = LINE_RE.match(ln)
                if not m:
                    continue
                lhs = m.group('lhs')
                rhs = m.group('rhs')
                vt = parse_rhs(rhs)
                if not vt:
                    # only count if a vt symbol is actually present (else not our population)
                    if VT_RE.search(rhs):
                        stats['rhs-nonliteral-bank'] += 1
                        banked.append([os.path.relpath(p, ROOT), i + 1, 'rhs-nonliteral', ln.strip()[:110]])
                    continue
                kind, info = parse_lhs(lhs)
                if kind == 'bare-name':
                    # G2b: local vptr-identity assign post-ctor; alias equivalence
                    # unproven -> BANK with evidence (X67 P0 decision)
                    stats['lhs-bank:local-value-assign'] += 1
                    banked.append([os.path.relpath(p, ROOT), i + 1, 'local-value-assign', ln.strip()[:110]])
                    continue
                if kind is None:
                    stats['lhs-bank:' + info] += 1
                    banked.append([os.path.relpath(p, ROOT), i + 1, 'lhs-' + info, ln.strip()[:110]])
                    continue
                stats['lhs-kind:' + kind] += 1
                hits.append((i, kind, vt, m))
            if hits:
                per_file[p] = hits
                stats['sites'] += len(hits)

    print('files scanned:', nfiles)
    print('ELIDABLE SITES:', stats['sites'])
    for k, v in sorted(stats.items()):
        if k.startswith('lhs-kind'):
            print('  ', k, v)
    print('BANKED:', len(banked))
    for k, v in sorted(stats.items()):
        if k.startswith(('lhs-bank', 'rhs-')):
            print('  ', k, v)
    print('\nsamples (first 15):')
    n = 0
    for p, hits in sorted(per_file.items()):
        for i, kind, vt, m in hits:
            print('  %s:%d [%s] vt=%s | %s' % (
                os.path.relpath(p, ROOT), i + 1, kind, vt, m.group(0).strip()[:110]))
            n += 1
            if n >= 15:
                break
        if n >= 15:
            break
    print('\nbank samples (first 12):')
    for b in banked[:12]:
        print('  BANK %s:%s %s %s' % tuple(b))

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
            cr = m.group('cr') or ''
            marker = ('/* X11: vtable install elided (X67 %s, RHS %s) */' % (kind, vt)
                      + (('  ' + anchor) if anchor else '') + cr)
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
