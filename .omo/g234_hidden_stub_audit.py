#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""G42.50 hidden-stub audit: functions whose TREE body is trivial while the
IDA truth is substantial.  Also: #if 0 blocks, empty bodies, stub-ish text.

Fingerprint = statements (;) + branch keywords (if/for/while/switch/case).
Trivial tree (<=3) vs real truth (>=8) => hidden stub."""
import io
import glob
import json
import re
from collections import Counter
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
import json as _j
_BY_NAME = _j.loads(io.open(str(ROOT / 'signals.json'), encoding='utf-8', errors='replace').read())['_by_name']
CACHE = ROOT / '.omo/ida_cache'
MARKER = re.compile(r'^\s*//\s*0x([0-9A-Fa-f]{6,8})\s*$')
DEF = re.compile(r'^\S[^\n{;]*?\b([A-Za-z_~]\w*(?:::[A-Za-z_~]\w*)+)'
                 r'\s*\([^;]*$|^\S[^\n{;]*?\b([A-Za-z_~]\w*)\s*\([^;]*$')
STUBISH = re.compile(r'TODO|FIXME|not implemented|unimplemented|placeholder'
                     r'|WIP|stub', re.I)


def fp(text):
    n = 0
    n += len(re.findall(r';', text))
    n += len(re.findall(r'\b(if|for|while|switch|case|goto)\b', text))
    return n


def cache_text(a):
    for nm in ('func_0x%08X.json' % a, 'func_0x%X.json' % a):
        p = CACHE / nm
        if p.exists():
            try:
                d = json.loads(io.open(p, encoding='utf-8',
                                       errors='replace').read())
                return d.get('decompiled') or ''
            except Exception:
                return ''
    return ''


def body_span(lines, i):
    """def line index -> (open, close) brace span."""
    o = i
    while o < len(lines) and '{' not in lines[o]:
        if ';' in lines[o]:
            return None
        o += 1
    if o >= len(lines):
        return None
    depth = 0
    for c in range(o, len(lines)):
        s = lines[c]
        depth += s.count('{') - s.count('}')
        if depth == 0 and c > o:
            return (o, c)
        if depth == 0 and c == o and s.count('{') > 0 and '}' in s:
            return (o, c)
    return None


hidden = []
empty_bodies = []
stub_text = []
n_fn = 0
for p in sorted(glob.glob(str(ROOT / 'src' / '**' / '*.cpp'), recursive=True)):
    raw = io.open(p, encoding='utf-8', errors='replace').read()
    lines = raw.split('\n')
    # #if 0 blocks
    for m in re.finditer(r'#if 0', raw):
        stub_text.append((p, raw[:m.start()].count('\n') + 1, '#if 0'))
    last_addr = None
    i = 0
    while i < len(lines):
        mm = MARKER.match(lines[i])
        if mm:
            last_addr = int(mm.group(1), 16)
            i += 1
            continue
        dm = DEF.match(lines[i])
        if dm and not lines[i].lstrip().startswith('//'):
            # attribution: def-line // 0xADDR > signals by name > marker
            # only if no def intervened (reset per def)
            am = re.search(r'//\s*0x([0-9A-Fa-f]{6,8})', lines[i])
            fn_addr = None
            if am:
                fn_addr = int(am.group(1), 16)
            else:
                nm = dm.group(1) or dm.group(2)
                ent = _BY_NAME.get(nm) or _BY_NAME.get(nm.split('::')[-1])
                if isinstance(ent, dict):
                    sym = ent.get("symbols") or {}
                if isinstance(sym, dict):
                    aa = []
                    for x in sym:
                        try:
                            aa.append(int(x, 16))
                        except ValueError:
                            pass
                else:
                    aa = []
                    if len(aa) == 1:
                        fn_addr = aa[0]
            if fn_addr is None:
                fn_addr = last_addr
            last_addr = None      # never leak across defs
            sp = body_span(lines, i)
            if sp:
                body = '\n'.join(lines[sp[0]:sp[1] + 1])
                n_fn += 1
                tf = fp(body)
                if STUBISH.search(body):
                    stub_text.append((p, i + 1, 'text'))
                if tf <= 1 and len(body.strip()) <= 6:
                    empty_bodies.append((p, i + 1,
                                         lines[i].strip()[:60]))
                if fn_addr and tf <= 3:
                    ct = cache_text(fn_addr)
                    if ct:
                        cf = fp(ct)
                        if cf >= 8:
                            hidden.append((p, i + 1, tf, cf,
                                           lines[i].strip()[:64],
                                           hex(fn_addr)))
                i = sp[1] + 1
                continue
        i += 1

print('functions scanned:', n_fn)
print('HIDDEN STUBS (trivial tree vs real truth):', len(hidden))
for h in hidden[:40]:
    print('  %-44s L%-6d tree_fp=%-3d truth_fp=%-3d 0x%s' %
          (Path(h[0]).name, h[1], h[2], h[3], h[5]))
    print('      ', h[4])
print('EMPTY bodies:', len(empty_bodies))
for e in empty_bodies[:20]:
    print('  %-44s L%d %s' % (Path(e[0]).name, e[1], e[2]))
print('stub-text / #if0 hits:', len(stub_text))
for s in stub_text[:15]:
    print('  %-44s L%d %s' % (Path(s[0]).name, s[1], s[2]))
json.dump({'hidden': hidden, 'empty': empty_bodies,
           'text': stub_text},
          open(ROOT / '.omo/g234_audit.json', 'w'), indent=0)
