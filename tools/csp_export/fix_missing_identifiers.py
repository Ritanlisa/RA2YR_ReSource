#!/usr/bin/env python3
"""C2065/C3861 identifier supply from canonical truth (G41.45).

The two 'unknown identifier' families: the corpus bodies reference names
that lack any visible declaration in their TU. Ground truth resolution:

  C2065 'X': undeclared identifier
  C3861 'X': identifier not found

For each unique failing name X:
  1. signals._by_name[X] with a function entry  -> a real binary function:
     supply `RET X(PARAMS);` into the module's protos header, with the
     signature rendered from the ida_cache decompiled first line (same
     transforms as supply_missing_bodies: CC strip, explicit-this drop for
     member render, #N type ids, IDA vocab).
  2. signals globals[X] (data) -> supply `extern TYPE X;` (type from the
     def_types map of gen_ida_globals when present, else void*).
  3. neither -> report (left for class-member or CRT gaps).

Only names NOT already declared anywhere in src/**.{hpp,h} are supplied.
Supply file: src/e4/e4_missing_names.h (aggregated, include-guarded,
consumed via e4_protos-style include from the failing TUs' module header
is NOT attempted -- instead the file is force-registered by appending an
include to every failing TU's module protos file is complex; simpler: emit
declarations into src/e4/e4_missing_names.h and append
`#include "e4/e4_missing_names.h"` to src/e4/e4_globals_decls.hpp which
the e4 corpus already includes widely).

Idempotent: names already in the supply file are skipped. Dry run by
default; --apply writes.

Usage: python tools/csp_export/fix_missing_identifiers.py <census_log> [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)
CACHE = ROOT / '.omo' / 'ida_cache'
SUPPLY = ROOT / 'src' / 'e4' / 'e4_missing_names.h'
HOOK = ROOT / 'src' / 'e4' / 'e4_globals_decls.hpp'

C2065_RE = re.compile(r'error C2065: ["\u201c]([^"\u201d]+)["\u201d]')
C3861_RE = re.compile(r'error C3861: ["\u201c]([^"\u201d]+)["\u201d]')

CC_KW = {'__thiscall', '__stdcall', '__cdecl', '__fastcall'}
USER_CC_RE = re.compile(r'__(?:userpurge|usercall)(?:@<[^>]*>)?\s*')
IDA_VOCAB_RE = re.compile(
    r'\b(BYTE[0-8]|WORD[0-7]|LOWORD|HIWORD|LOBYTE|HIBYTE|LODWORD|HIDWORD|'
    r'SHIWORD|SLOBYTE|SHLOBYTE|SLODWORD|SHIDWORD|SWORD0|SWORD1|SWORD2|'
    r'SWORD3|SWWORD|__PAIR16__|__PAIR32__|__PAIR64__)\(')
TYPE_ID = re.compile(r'([ \s(\*&<>,]|^)#(\d+)')


def cache_render_sig(addr):
    """(qualname, ret, params) from the cache's first sig line, or None."""
    cp = CACHE / ('func_0x%X.json' % addr)
    if not cp.exists():
        return None
    try:
        txt = json.load(open(cp, encoding='utf-8')).get('decompiled', '')
    except (OSError, json.JSONDecodeError):
        return None
    sig_line = next((ln for ln in txt.split('\n')
                     if '(' in ln and ')' in ln), None)
    if not sig_line:
        return None
    sig_line = USER_CC_RE.sub('', sig_line.strip())
    op = sig_line.index('(')
    cl = sig_line.rindex(')')
    if cl < op:
        return None
    head = sig_line[:op].strip()
    raw = sig_line[op + 1:cl].strip()
    toks = head.split()
    if not toks:
        return None
    qname = toks[-1]
    rest = []
    for t in toks[:-1]:
        s = t.lstrip('*')
        if s in CC_KW:
            rest.append('*' * (len(t) - len(s)))
        else:
            rest.append(t)
    ret = ' '.join(rest).strip()
    pl = [p.strip() for p in re.split(r',(?![^()]*\))', raw) if p.strip()]
    # member first-param this -> drop (the corpus calls X::method(obj,...)
    # style stays legal only for statics; render as-is with typed this --
    # safest faithful form: keep ALL params including this (static-call
    # convention the corpus uses), types verbatim.
    params = ', '.join(pl)
    if params == 'void':
        params = ''
    # type-id + vocab hygiene
    ret = TYPE_ID.sub(lambda m: m.group(1) + 'void', ret)
    params = TYPE_ID.sub(lambda m: m.group(1) + 'void', params)
    return qname, ret, params


def main():
    names = {}
    for ln in open(LOG, encoding='utf-8', errors='replace'):
        m = C2065_RE.search(ln) or C3861_RE.search(ln)
        if m:
            names[m.group(1)] = names.get(m.group(1), 0) + 1
    names = {k: v for k, v in names.items()
             if re.match(r'^[A-Za-z_]\w*$', k)}
    print('unique unknown identifiers:', len(names),
          ' total mentions:', sum(names.values()))

    SIG = json.load(open(ROOT / 'signals.json', encoding='utf-8'))
    BN = SIG.get('_by_name', {})

    # names already declared anywhere
    declared = set()
    for p in list((ROOT / 'src').rglob('*.hpp')) + list((ROOT / 'src').rglob('*.h')):
        try:
            declared |= set(re.findall(r'\b([A-Za-z_]\w*)\s*\(', p.read_text(
                encoding='utf-8', errors='replace')))
        except OSError:
            continue

    already = set()
    if SUPPLY.exists():
        already = set(re.findall(r'\b([A-Za-z_]\w*)\s*\(', SUPPLY.read_text(
            encoding='utf-8', errors='replace')))

    out_fn, out_gv, miss = [], [], []
    for name, cnt in sorted(names.items(), key=lambda x: -x[1]):
        if name in declared or name in already:
            continue
        e = BN.get(name)
        addr = None
        if e:
            for a, kind in (e.get('symbols') or {}).items():
                if kind == 'function':
                    addr = int(a, 16)
                    break
        if addr:
            r = cache_render_sig(addr)
            if r and r[0].split('::')[-1] == name:
                _, ret, params = r
                out_fn.append('// %d mention(s)\n%s%s(%s);' % (
                    cnt, (ret + ' ') if ret else '', name, params))
                continue
        g = (SIG.get('globals') or {})
        if name in g:
            out_gv.append('extern void* %s;  // data symbol (type pending)' % name)
            continue
        miss.append((name, cnt))

    print('function decls to supply:', len(out_fn))
    print('data externs to supply:', len(out_gv))
    print('unresolvable (no signals/cache):', len(miss))
    for n, c in miss[:12]:
        print('   miss %-36s x%d' % (n, c))

    if APPLY:
        body = ['// GENERATED missing-identifier supplies (fix_missing_identifiers.py)',
                '// Truth: signals._by_name -> ida_cache signature render.',
                '#pragma once', '']
        if out_fn:
            body.append('// ---- functions ----')
            body += out_fn
            body.append('')
        if out_gv:
            body.append('// ---- data ----')
            body += out_gv
            body.append('')
        SUPPLY.write_text('\n'.join(body), encoding='utf-8')
        hk = HOOK.read_text(encoding='utf-8', errors='replace') \
            if HOOK.exists() else ''
        if 'e4_missing_names.h' not in hk:
            last_inc = max((m.end() for m in
                            re.finditer(r'#include\s+"[^"]+"\s*\n', hk)),
                           default=None)
            if last_inc:
                hk = hk[:last_inc] + '#include "e4/e4_missing_names.h"\n' + hk[last_inc:]
                HOOK.write_text(hk, encoding='utf-8')
        print('written %s (+hook include)' % SUPPLY.name)
    else:
        print('DRYRUN -- pass --apply')


if __name__ == '__main__':
    main()
