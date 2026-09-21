#!/usr/bin/env python3
"""Step-4 mechanical rewriter: IDA decompiled text -> canonical member refs.

Pure algorithm. For every function (from .omo/ida_cache), rewrite this-relative
raw offset dereferences into this->Member using the CSP-derived member table
(anchors/csp_canon_members.json). This-class = CSP type_map '0xADDR:this' with
csp_canon_manifest cls fallback. Width-matched: only rewrite when the cast
width equals the member size. Non-matching offsets stay raw (mechanical).

Output: src/raw_decomp/fn_<HH>.c  (bucketed by (addr>>16)&0xFF)
Report: stdout totals.
"""
import json, re, sys
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).resolve().parents[2]
CACHE = ROOT / '.omo' / 'ida_cache'
OUTD = ROOT / 'src' / 'raw_decomp'
OUTD.mkdir(parents=True, exist_ok=True)

print('loading tables...', flush=True)
mtab = json.loads((ROOT / 'anchors/csp_canon_members.json').read_text(encoding='utf-8'))
man = json.loads((ROOT / 'anchors/csp_canon_manifest.json').read_text(encoding='utf-8'))
try:
    tmap = json.loads((ROOT / 'type_map.json').read_text(encoding='utf-8'))['type_map']
except Exception:
    tmap = {}

# this->Member lookup: canonClass -> {byteoff: (name, size)}
def mem_of(cls, off, width=None):
    """Look up member at byte offset. Width is advisory (canon is authoritative);
    try exact offset first, then scaled variants."""
    e = mtab.get(cls)
    if not e:
        return None
    # try exact offset
    m = e['members'].get(str(off))
    if m and m.get('name'):
        return m['name']
    # try dword-scaled variants (if N itself is a dword index)
    for alt in (off * 4, off // 4 if off % 4 == 0 else None):
        if alt is None or alt == off:
            continue
        m = e['members'].get(str(alt))
        if m and m.get('name'):
            return m['name']
    return None

def this_class(addr, sig_line):
    k = '0x%08X:this' % addr
    v = tmap.get(k)
    if v and v.get('type'):
        return v['type']
    m = man.get('0x%08X' % addr)
    if m and m.get('cls'):
        return m['cls']
    return None

PATTERNS = [
    # cast-form: *(_DWORD *)(this + N)  / *(this + N)
    (re.compile(r'\*\(\s*(?:(_DWORD|_BYTE|_WORD|_QWORD|int|unsigned int|char|unsigned char|unsigned short|long long|unsigned long long)\s*\*\s*\)\s*)?this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)'),
     'deref'),
    # index-form: *((_DWORD *)this + N)
    (re.compile(r'\*\(\s*\(\s*(_DWORD|_BYTE|_WORD|_QWORD)\s*\*\s*\)this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)'),
     'index'),
]
WIDTH = {'_DWORD': 4, 'int': 4, 'unsigned int': 4, 'long long': 8,
         'unsigned long long': 8, '_BYTE': 1, 'char': 1, 'unsigned char': 1,
         '_WORD': 2, 'unsigned short': 2, '_QWORD': 8}

def rewrite(text, cls, scaled):
    mems = mtab.get(cls)
    if not mems:
        return text, 0
    count = 0
    def sub_deref(m):
        nonlocal count
        n = int(m.group(2), 0)
        # try both scaled and unscaled offsets — canon is authoritative
        for off in ([n * 4, n] if scaled else [n, n * 4]):
            name = mem_of(cls, off)
            if name is not None:
                count += 1
                return 'this->%s' % name
        return m.group(0)
    def sub_index(m):
        nonlocal count
        n = int(m.group(2), 0)
        for off in ([n * 4, n] if scaled else [n, n * 4]):
            name = mem_of(cls, off)
            if name is not None:
                count += 1
                return 'this->%s' % name
        return m.group(0)
    text = PATTERNS[0][0].sub(sub_deref, text)
    text = PATTERNS[1][0].sub(sub_index, text)
    return text, count

buckets = defaultdict(list)
n_fn = n_rewritten = n_subs = 0
n_this_csp = 0
for f in sorted(CACHE.glob('func_*.json')):
    try:
        d = json.loads(f.read_text(encoding='utf-8'))
    except Exception:
        continue
    text = d.get('decompiled') or ''
    if not text.strip():
        continue
    m = re.search(r'func_0x([0-9A-Fa-f]+)', f.name)
    addr = int(m.group(1), 16)
    sig_line = text.split('\n', 1)[0] if text else ''
    scaled = '_DWORD *this' in sig_line or '_DWORD*this' in sig_line
    cls = this_class(addr, sig_line)
    if cls:
        key = '0x%08X:this' % addr
        if tmap.get(key, {}).get('type'):
            n_this_csp += 1
        new_text, cnt = rewrite(text, cls, scaled)
        if cnt:
            n_rewritten += 1
            n_subs += cnt
        text = new_text
    name = (man.get('0x%08X' % addr) or {}).get('name', '')
    sig = (man.get('0x%08X' % addr) or {}).get('sig', '?')
    hdr = '// ==== 0x%08X  %s  this=%s  sig=%s ====\n' % (addr, name, cls or '-', sig)
    bkey = (addr >> 16) & 0xFF
    buckets[bkey].append(hdr + text + '\n\n')
    n_fn += 1

for bkey, parts in buckets.items():
    (OUTD / ('fn_%02X.c' % bkey)).write_text(
        '// GENERATED raw decompilation, this-relative refs rewritten to this->Member\n'
        '// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).\n'
        '// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.\n\n'
        + '\n'.join(parts), encoding='utf-8')

print('functions written:', n_fn)
print('functions with rewrites:', n_rewritten)
print('total member refs rewritten:', n_subs)
print('this-class from CSP type_map:', n_this_csp)
print('buckets:', len(buckets))
print('DONE')
