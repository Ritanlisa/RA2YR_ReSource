#!/usr/bin/env python3
"""Restore def-head-glued dispatch lines from ida_cache truth.

Damage: a call-target resolution fixer replaced fn-ptr DISPATCH CALL lines
with the target's own signature text (`char VectorClass::_vt02(void
*this, ...)`) — a def head glued mid-body: no `;`, no `{`, followed by an
unrelated statement. Compile-illegal and semantically dead (the dispatch
vanished).

Detection: a bare `Ret Cls::Mth(params)` line (no `;`, no trailing `{`)
whose next non-empty line is NOT `{` — i.e. a def head that never opens a
body. Repair: restore the ida_cache original at the line's /*0xADDR*/
anchor; if the line itself carries no anchor, use the anchor on the
nearest of the 2 preceding lines and re-extract the statement that
PRECEDES that anchor's statement (the dispatch lives just before the
anchored line). Token-mapped; this-arithmetic rescaled by the enclosing
fn's this-type.

Scope: e4, _gap2, system/gap2* corpora. Line-scoped, idempotent.
Usage: python tools/csp_export/fix_glued_defheads.py [--apply]
"""
import glob
import json
import bisect
import os
import re
import sys

APPLY = '--apply' in sys.argv
SAMPLE = os.environ.get('SAMPLE')
BAD = re.compile(r'^\s*[A-Za-z_][\w:<>,\s\*&]*?\b\w+::~?\w+\s*\([^;{)]*\)\s*$')
ANCHOR = re.compile(r'/\*0x([0-9a-fA-F]+)\*/')

TOKEN_MAP = [
    (re.compile(r'\b__thiscall\s+'), ''),
    (re.compile(r'\b_DWORD\b'), 'unsigned int'),
    (re.compile(r'\b_BYTE\b'), 'unsigned char'),
    (re.compile(r'\b_WORD\b'), 'unsigned short'),
    (re.compile(r'\b_QWORD\b'), 'unsigned long long'),
]

s = json.load(open('signals.json', encoding='utf-8'))
STARTS = sorted(int(a, 16) for a, sym in s['symbols'].items()
                if isinstance(sym, dict) and sym.get('kind') == 'function')
_cache = {}


def enc(a):
    i = bisect.bisect_right(STARTS, a) - 1
    st = STARTS[i] if i >= 0 else a
    if st in _cache:
        return _cache[st]
    d = ''
    for cand in ('.omo/ida_cache/func_0x%08X.json' % st,
                 '.omo/ida_cache/func_0x%X.json' % st):
        if os.path.exists(cand):
            d = json.load(open(cand, encoding='utf-8')).get('decompiled', '')
            break
    _cache[st] = d
    return d


def stmt_before_anchor(pseudo, anchor_hex):
    """The statement IMMEDIATELY PRECEDING the anchored one (the dispatch
    lives just before the anchored `return`). Boundary: semicolons at
    paren-depth<=0 — three of them walking backward delimit
    [prev-stmt-start, prev-stmt-end(=s2)]."""
    if not pseudo:
        return None
    i = pseudo.lower().find('/*0x' + anchor_hex.lower() + '*/')
    if i <= 0:
        return None
    depth = 0
    semis = []
    k = i
    while k > 0:
        ch = pseudo[k]
        if ch == ')':
            depth += 1
        elif ch == '(':
            depth -= 1
        elif ch == ';' and depth <= 0:
            semis.append(k)
            if len(semis) >= 2:
                # prev statement ends at semis[1]; find its start:
                # continue back until the next boundary (semi/brace at
                # depth<=0)
                d2 = 0
                k2 = semis[1] - 1
                start = 0
                while k2 > 0:
                    c2 = pseudo[k2]
                    if c2 == ')':
                        d2 += 1
                    elif c2 == '(':
                        if d2 == 0:
                            start = k2 + 1
                            break
                        d2 -= 1
                    elif c2 == ';' and d2 <= 0:
                        start = k2 + 1
                        break
                    elif c2 in '{}' and d2 <= 0:
                        start = k2 + 1
                        break
                    k2 -= 1
                seg = pseudo[start:semis[1] + 1]
                seg = re.sub(r'/\*0x[0-9a-fA-F]+\*/', '', seg)
                seg = re.sub(r'\s+', ' ', seg).strip()
                return (seg + ';') if seg else None
        k -= 1
    return None


stats = {'restored': 0, 'no-orig': 0, 'commented': 0}
files_changed = 0
shown = [0]
for p in (glob.glob('src/e4/*.cpp') + glob.glob('src/_gap2/*.cpp')
          + glob.glob('src/system/gap2*.cpp')):
    lines = open(p, encoding='utf-8', errors='replace').read().split('\n')
    changed = False
    fn_addr = None
    for i, ln in enumerate(lines):
        # track the enclosing def's fn address (// 0xADDR comment lines)
        am0 = re.match(r'^//\s*0x([0-9a-fA-F]+)\s*$', ln.strip())
        if am0:
            fn_addr = int(am0.group(1), 16)
            continue
        # unwrap a previous pass's comment marker for re-adjudication
        um = re.match(r'^(\s*)// glued-defhead: (.*)$', ln)
        if um:
            ln = um.group(1) + um.group(2)
        else:
            if not BAD.match(ln) or ln.rstrip().endswith(';'):
                continue
        if not BAD.match(ln) or ln.rstrip().endswith(';'):
            continue
        j = i + 1
        while j < len(lines) and not lines[j].strip():
            j += 1
        if j < len(lines) and lines[j].lstrip().startswith('{'):
            continue                       # legit def head
        # anchor on this line, or on the next 2 lines (statement tail)
        anchor = None
        for k in (i, i + 1, i + 2):
            if k < len(lines):
                am = ANCHOR.search(lines[k])
                if am:
                    anchor = am
                    break
        if not anchor:
            stats['no-orig'] += 1
            continue
        # precise restore: walk-back ONLY when the anchor's bisect-enclosing
        # fn == the corpus def's own fn addr (otherwise the anchor belongs
        # to a different function and back-extraction grabs foreign text)
        enc_addr = None
        if fn_addr:
            import bisect as _b
            i2 = _b.bisect_right(STARTS, int(anchor.group(1), 16)) - 1
            enc_addr = STARTS[i2] if i2 >= 0 else None
        orig = None
        if fn_addr and enc_addr == fn_addr:
            orig = stmt_before_anchor(enc(fn_addr), anchor.group(1))
            if orig and ('**' not in orig):
                # not a dispatch — a wrong grab; refuse
                orig = None
        if orig:
            for tm, rep in TOKEN_MAP:
                orig = tm.sub(rep, orig)
            # rescale bare this-arithmetic by the def fn's this-type
            dec = enc(fn_addr)
            m2 = re.search(r'\(([^)]*)\)', dec.split('{')[0])
            first = (m2.group(1).split(',')[0] if m2 else '').strip()
            factor = 1 if re.search(r'\b(int|unsigned int|long)\b(?!.*\*)',
                                    first) else 4
            orig = re.sub(r'\*\s*this\s*\+\s*(\d+)\b',
                          lambda m: '*(unsigned int *)this + %d'
                          % (int(m.group(1)) * factor), orig)
            indent = ln[:len(ln) - len(ln.lstrip())]
            new = indent + orig
            stats['restored'] += 1
        else:
            # comment out — compile heals; the lost dispatch stays a
            # recorded exec-flow FAIL until a per-case restore pass.
            indent = ln[:len(ln) - len(ln.lstrip())]
            new = indent + '// glued-defhead: ' + ln.strip()
            stats['commented'] += 1
        if new != ln:
            lines[i] = new
            changed = True
            if SAMPLE and shown[0] < 8:
                shown[0] += 1
                print('--- %s:%d' % (p, i + 1))
                print('OLD: ' + ln.strip()[:120])
                print('NEW: ' + new.strip()[:120])
    if changed:
        files_changed += 1
        if APPLY:
            open(p, 'w', encoding='utf-8', newline='').write('\n'.join(lines))
print('files:', files_changed)
print(stats)
if not APPLY:
    print('(dry run -- pass --apply)')
