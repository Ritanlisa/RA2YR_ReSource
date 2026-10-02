#!/usr/bin/env python3
"""G42.30a: C2511/C2671 decl-def alignment (agent-E spec 3).

C2671 is 100% the recovery cascade of C2511 (def fails to bind to its hpp
decl -> MSVC treats the def as static -> every `this` use fires C2671;
56/56 TU co-occurrence in round-5). Fixing the C2511 shape clears both.

C2511 fires AT the definition; the def head params are re-materialized
from ida_cache truth (balanced-sig, multi-line safe), with the body's
aN/aP first-use names kept positionally (wave-28 fallback). The decl in
Cls_e4.hpp is synced to the same list -- NOT E4Recv-only (wave-27 gap).

Usage: [--apply]
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
CEN = ROOT / '.omo/tu_errors_g139.json'
CACHE = ROOT / '.omo/ida_cache'
E4C = ROOT / 'src/e4/classes'

Q1, Q2 = chr(0x201C), chr(0x201D)
QT = '[' + Q1 + Q2 + chr(34) + ']'
C2511 = re.compile(r'^(.+?)\((\d+)\): error C2511: ' + QT +
                   r'.*?([A-Za-z_]\w*(?:::[~A-Za-z_]\w*)+)\s*\((.*)\)' + QT)

NORM = (('_DWORD', 'unsigned int'), ('_QWORD', 'unsigned long long'),
        ('_WORD', 'unsigned short'), ('_BYTE', 'unsigned char'),
        ('__int64', 'long long'), ('_BOOL4', 'int'),
        ('u_short', 'unsigned short'), ('u_char', 'unsigned char'),
        ('u_int', 'unsigned int'))


def norm_ida(t):
    for a, b in NORM:
        t = re.sub(r'\b%s\b' % a, b, t)
    return t


def cache_params(addr):
    for cand in ('func_0x%08X.json' % int(addr, 16),
                 'func_0x%X.json' % int(addr, 16)):
        p = CACHE / cand
        if p.exists():
            try:
                dec = json.load(open(p, encoding='utf-8')).get('decompiled', '')
            except Exception:
                return None
            if not dec:
                return None
            zone = dec.split('{', 1)[0]
            start = zone.find('(')
            if start < 0:
                return None
            depth = 0
            for i in range(start, len(zone)):
                if zone[i] == '(':
                    depth += 1
                elif zone[i] == ')':
                    depth -= 1
                    if depth == 0:
                        inner = ' '.join(zone[start + 1:i].split())
                        parts, d, cur = [], 0, ''
                        for ch in inner:
                            if ch in '([':
                                d += 1
                            elif ch in ')]':
                                d -= 1
                            if ch == ',' and d == 0:
                                parts.append(cur.strip())
                                cur = ''
                            else:
                                cur += ch
                        if cur.strip():
                            parts.append(cur.strip())
                        return [norm_ida(x) for x in parts
                                if not re.search(r'\bthis\s*$', x)]
    return None


def body_param_names(lines, head_i):
    """aN/aP identifiers in first-use order within the def body."""
    body = '\n'.join(lines[head_i:head_i + 400])
    seen = []
    for m in re.finditer(r'\b(a\d+|aP\d+)\b', body):
        if m.group(1) not in seen:
            seen.append(m.group(1))
    return seen


MARKER = re.compile(r'^//\s*(0x[0-9A-Fa-f]{5,8})')

stats = Counter()
census = json.load(open(CEN, encoding='utf-8'))
sites = []
for tu, errs in census.items():
    for e in errs:
        m = C2511.match(e)
        if m:
            sites.append((m.group(1), int(m.group(2)), m.group(3)))
print('C2511 def sites:', len(sites))

def_edits = {}
decl_edits = {}
for f, li, qname in sites:
    qname = re.sub(r'^gamemd::', '', qname)
    p = Path(f)
    try:
        lines = def_edits.setdefault(str(p), p.read_text(
            encoding='utf-8', errors='replace').split('\n'))
    except OSError:
        continue
    if li - 1 >= len(lines):
        stats['line-oob'] += 1
        continue
    head = lines[li - 1]
    hm = re.match(r'^(\s*.*?\b' + re.escape(qname) + r')\((.*)\)\s*\{?\s*$', head)
    if not hm:
        stats['head-shape'] += 1
        continue
    # marker -> addr
    addr = None
    for k in range(li - 2, max(0, li - 400), -1):
        mm = MARKER.match(lines[k].strip())
        if mm:
            addr = mm.group(1)
            break
    truth = cache_params(addr) if addr else None
    if not truth:
        stats['no-truth'] += 1
        continue
    # body-name positional override (same count); when the body references
    # MORE names than truth provides, append vague int params (compile-gate
    # honest: param-shape debt) instead of leaving dangling identifiers.
    bnames = body_param_names(lines, li - 1)
    if len(bnames) == len(truth):
        final = []
        for t, n in zip(truth, bnames):
            tm = re.match(r'^(.*?)(\b\w+)?$', t)
            # replace trailing identifier with the body name
            t2 = re.sub(r'\b([A-Za-z_]\w*)\s*$', n, t)
            if t2 == t and not re.search(r'[＊\*]\s*$', t):
                t2 = t + (' ' if t[-1] not in ' *' else '') + n
            final.append(t2)
        truth = final
        stats['body-name-override'] += 1
    elif len(bnames) > len(truth):
        have = {re.sub(r'^.*?([A-Za-z_]\w*)$', r'\1', t) for t in truth}
        for n in bnames:
            if n not in have:
                truth = truth + ['int %s' % n]
                have.add(n)
        stats['body-name-append'] += 1
    want = ', '.join(truth)
    if hm.group(2).strip() == want:
        stats['already'] += 1
        continue
    brace = ' {' if re.search(r'\{\s*$', head) else ''
    lines[li - 1] = hm.group(1) + '(' + want + ')' + brace
    stats['def-aligned'] += 1
    # decl sync in Cls_e4.hpp (any class -- wave-27 gap)
    if '::' in qname:
        cls = qname.rsplit('::', 1)[0]
        meth = qname.rsplit('::', 1)[1]
        hp = E4C / ('%s_e4.hpp' % cls)
        if not hp.exists():
            stats['decl-no-hpp'] += 1
            continue
        hl = decl_edits.setdefault(str(hp), hp.read_text(
            encoding='utf-8', errors='replace').split('\n'))
        for j, ln in enumerate(hl):
            dm = re.match(r'^(\s*.*?\b~?' + re.escape(meth) +
                          r')\((.*)\)\s*;', ln)
            if dm and not dm.group(0).lstrip().startswith('//'):
                hl[j] = dm.group(1) + '(' + want + ');'
                stats['decl-synced'] += 1
                break
        else:
            stats['decl-not-found'] += 1

print('stats:', dict(stats.most_common()))
if APPLY:
    for path, lines in list(def_edits.items()) + list(decl_edits.items()):
        Path(path).write_text('\n'.join(lines), encoding='utf-8')
    print('written:', len(set(def_edits) | set(decl_edits)), 'files')
else:
    print('(dry -- pass --apply)')
