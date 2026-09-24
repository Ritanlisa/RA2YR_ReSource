#!/usr/bin/env python3
"""Step-4 CSP data supply: register canon members that the binary code
accesses but the member tables miss (user directive: missing CSP data gets
supplied, not skipped).

For every function span, build the CSP type environment (build_types), then
for each offset-access pattern with a class-typed receiver whose (cls, off)
is absent from the canon member table, register a width-typed filler member:

    *(T *)(this + N)          -> size from T
    *((T *)this + N)          -> size from T, offset scaled
    *(T *)(vN + N)            -> typed-local receiver
    this + N                  -> bare address-of (u32 filler)

Evidence: 'offset access in 0xFUNC (step-4 supply)'. Single-threaded on
purpose: the member registry is process-global state.

Usage: python tools/csp_export/register_offset_members.py [--apply]
"""
import re
import sys
import json
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import normalize_blocks as NB
from _blockspan import brace_delta
from _members import _load, member_name

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv

R_DEREF = re.compile(
    r'\*\(\s*([A-Za-z_][\w\s\*]*?)\s*\*\s*\)\s*\(?\s*(this|[a-z]\w*)\s*\)?\s*\+\s*'
    r'(0x[0-9A-Fa-f]+|\d+)\s*\)')
R_INDEX = re.compile(
    r'\*\(\s*\(\s*([A-Za-z_][\w\s\*]*?)\s*\*\s*\)(this|[a-z]\w*)\s*\+\s*'
    r'(0x[0-9A-Fa-f]+|\d+)\s*\)')
BARE_THIS = re.compile(r'(?<![\w\*&])this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)'
                       r'(?!\s*\))')
# cast-inside form `*((_DWORD *)this + N)` — byte offset = N * width;
# previously unscanned, so these offsets never registered (building.cpp
# R_THIS2 mass precedent)
R_THIS2_SCAN = re.compile(
    r'\*\(\s*\(\s*(_DWORD|_BYTE|_WORD|_QWORD|char|unsigned char|short|'
    r'unsigned short|int|unsigned int|long|float|BOOL|double)\s*\*\s*\)'
    r'\s*\(?\s*(this|[a-z]\w*)\s*\)?\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)')
CAST_WIDTH = {'_DWORD': 4, 'int': 4, 'unsigned int': 4, 'long': 4,
              'unsigned long': 4, 'float': 4, 'BOOL': 4, '_QWORD': 8,
              'double': 8, 'long long': 8, '_BYTE': 1, 'char': 1,
              'unsigned char': 1, '_WORD': 2, 'short': 2,
              'unsigned short': 2}

R_BARE_DEREF = re.compile(
    r'\*\(\s*(this|[a-z]\w*)\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)')
ADDR = re.compile(
    r'^//\s*(?:IDA[:\s]\s*)?0x([0-9A-Fa-f]{6,8})(?:\s*:|\s*\(|\s*$)')
DEF_Q = re.compile(r'([A-Za-z_]\w*)::\s*~?[A-Za-z_]\w*\s*\(')

WIDTH_T = {'unsigned char': 1, 'unsigned short': 2, 'unsigned int': 4,
           'unsigned long long': 8, 'float': 4, 'double': 8, 'BOOL': 4}
C_TYPE = {'_BYTE': 'unsigned char', 'char': 'char',
          'unsigned char': 'unsigned char',
          '_WORD': 'unsigned short', 'short': 'short',
          'unsigned short': 'unsigned short',
          '_DWORD': 'unsigned int', 'int': 'int',
          'unsigned int': 'unsigned int', 'long': 'unsigned int',
          'unsigned long': 'unsigned int', 'BOOL': 'BOOL',
          'float': 'float', '_QWORD': 'unsigned long long',
          '__int64': 'unsigned long long',
          'unsigned __int64': 'unsigned long long', 'double': 'double'}
NAME_PFX = {1: 'u8', 2: 'u16', 4: 'u32', 8: 'u64'}

mt, ml, sg = _load()
mbn = sg.setdefault('_member_by_name', {})
pending = {}
upgrades = {}
FILLER = re.compile(r'^u(?:8|16|32|64|ptr)_[0-9A-F]+$')

# usage-driven prune: keep only filler members actually referenced in src
# (`->u32_1C` etc.) plus all semantic entries. Historical unbounded
# registration grew these tables to 582MB/286MB — every pipeline stage
# (canon gen, census, EVERY verify) re-parses them, so dead fillers cost
# minutes per stage. --prune-unused applies; runs automatically on APPLY.
if '--prune-unused' in sys.argv or APPLY:
    used = set()
    for _p in SRC.rglob('*.cpp'):
        try:
            _t = _p.read_text(encoding='latin-1', errors='replace')
        except OSError:
            continue
        for _m in re.finditer(
                r'->\s*(u(?:8|16|32|64)|ptr)_[0-9A-F]+\b', _t):
            used.add(_m.group(0)[2:])
    pruned_dead = 0
    for cls in list(ml.keys()):
        members = ml[cls]
        for off in list(members.keys()):
            e = members[off]
            if not isinstance(e, dict):
                continue
            nm = e.get('name', '')
            if FILLER.match(nm) and nm not in used:
                del members[off]
                mt.pop('%s+0x%s' % (cls, off), None)
                mbn.get(cls, {}).pop(nm, None)
                pruned_dead += 1
    if APPLY and pruned_dead:
        import os as _os
        (ROOT / 'tools' / 'member_lookup.json').write_text(
            json.dumps(ml, separators=(',', ':'), ensure_ascii=False),
            encoding='utf-8')
        (ROOT / 'anchors' / 'member_types.json').write_text(
            json.dumps(mt, separators=(',', ':'), ensure_ascii=False),
            encoding='utf-8')
        _tmp = ROOT / 'signals.json.tmp'
        _tmp.write_text(json.dumps(sg, separators=(',', ':'),
                                   ensure_ascii=False), encoding='utf-8')
        _os.replace(_tmp, ROOT / 'signals.json')
    print('unused fillers pruned:', pruned_dead)

# class layout sizes for the registration bound
CLS_SIZE = {}
try:
    _layouts = json.loads((ROOT / 'tools' / 'class_layouts.json')
                          .read_text(encoding='utf-8'))
    for _c, _v in _layouts.items():
        if isinstance(_v, dict) and _v.get('size'):
            CLS_SIZE[_c] = _v['size']
except OSError:
    pass

# hygiene: drop step-4 filler members at/beyond the class size (legacy of
# unbounded registration; they re-register under the bound when in range)
if '--purge-oob' in sys.argv or APPLY:
    purged_oob = 0
    for cls in list(ml.keys()):
        lim = CLS_SIZE.get(cls)
        if lim is None:
            continue
        members = ml[cls]
        for off in list(members.keys()):
            e = members[off]
            if not isinstance(e, dict):
                continue
            if FILLER.match(e.get('name', '')) and int(off) >= lim:
                del members[off]
                mt.pop('%s+0x%s' % (cls, off), None)
                mbn.get(cls, {}).pop(e.get('name', ''), None)
                purged_oob += 1
    if APPLY and purged_oob:
        import os as _os
        (ROOT / 'tools' / 'member_lookup.json').write_text(
            json.dumps(ml, indent=1, ensure_ascii=False) + '\n',
            encoding='utf-8')
        (ROOT / 'anchors' / 'member_types.json').write_text(
            json.dumps(mt, indent=1, ensure_ascii=False) + '\n',
            encoding='utf-8')
        _tmp = ROOT / 'signals.json.tmp'
        _tmp.write_text(json.dumps(sg, indent=2, ensure_ascii=False) + '\n',
                        encoding='utf-8')
        _os.replace(_tmp, ROOT / 'signals.json')
    print('oob fillers purged:', purged_oob)

# Sync classes that live only in member_lookup into member_types. G32:
# OFF by default -- it re-materializes millions of dense entries every run
# (the 698MB table bloat). Run explicitly with --sync-ml when ml gained
# genuinely new classes.
synced = 0
DO_SYNC = '--sync-ml' in sys.argv
OLD_FILLER = re.compile(r'^(?:[A-Za-z_]\w*_field_0x[0-9A-F]+|q[0-9A-F]{1,3}|\w+_\w[0-9A-F]{2})$')
for cls, members in (ml.items() if DO_SYNC else []):
    if not members:
        continue
    for off, ent in members.items():
        key = '%s+0x%s' % (cls, off)
        if not ent or not ent.get('name'):
            continue
        old = mt.get(key)
        if old and not OLD_FILLER.match(old.get('name', '')):
            continue
        mt[key] = {'name': ent.get('name'), 'type': ent.get('type'),
                   'size': ent.get('size', 4), 'confidence': 'ANCHORED',
                   'evidence': 'member_lookup sync (step-4 supply)'}
        synced += 1


def upgrade(cls, off, fn):
    """Replace a width-filler with the CSP member-value class type."""
    ent = (ml.get(cls) or {}).get(str(off))
    if not ent or not FILLER.match(ent.get('name', '')):
        return
    vkey = '%s:this.member(0x%X)' % (fn, off)
    vt = (NB.tmap.get(vkey) or {}).get('type')
    if not (vt and NB.is_cls(vt)):
        return
    old = ent['name']
    new = 'ptr_%X' % off
    ent['name'] = new
    ent['type'] = vt + ' *'
    ent['evidence'] = (ent.get('evidence') or '') + \
        '; upgraded from CSP member-value channel'
    mt['%s+0x%X' % (cls, off)] = {
        'name': new, 'type': vt + ' *', 'size': 4,
        'confidence': 'ANCHORED',
        'evidence': 'CSP member-value type in %s' % fn}
    cm = mbn.setdefault(cls, {})
    cm.pop(old, None)
    cm[new] = off
    upgrades['%s+0x%X' % (cls, off)] = True


def reg(cls, off, ctype):
    # registration bound: an offset at/beyond the class layout size cannot
    # be a member of it (unbounded registration once bloated member_types
    # into a 2M-line classes.hpp). Classes without layout data get a hard
    # 64 KiB sanity cap.
    lim = CLS_SIZE.get(cls)
    if lim is None:
        lim = 0x10000
    if off >= lim:
        return
    key = '%s+0x%X' % (cls, off)
    # CSP member-value type channel: `0xFN:this.member(0xOFF)` says the
    # VALUE stored at OFF is a class pointer -> member type `T *`
    vkey = '%s:this.member(0x%X)' % (fn_tag, off)
    vt = (NB.tmap.get(vkey) or {}).get('type')
    if vt and NB.is_cls(vt):
        ctype = vt + ' *'
        size = 4
        name = 'ptr_%X' % off
    else:
        size = WIDTH_T.get(ctype, 4)
        name = '%s_%X' % (NAME_PFX.get(size, 'u32'), off)
    pending[key] = True
    members = ml.setdefault(cls, {})
    members[str(off)] = {'name': name, 'type': ctype, 'size': size,
                         'src': 'step-4 offset-access supply'}
    mt[key] = {'name': name, 'type': ctype, 'size': size,
               'confidence': 'ANCHORED',
               'evidence': 'offset access in %s (step-4 supply)' % fn_tag}
    mbn.setdefault(cls, {})[name] = off


fn_tag = '0x00000000'
tot_reg = 0
tot_sites = 0
for p in sorted(SRC.rglob('*.cpp')):
    if '_generated' in str(p):
        continue
    try:
        lines = p.read_text(encoding='latin-1').split('\n')
    except OSError:
        continue
    i = 0
    while i < len(lines):
        a = ADDR.match(lines[i].strip())
        if not a or '(' in lines[i]:
            i += 1
            continue
        j = i + 1
        while j < len(lines) and '(' not in lines[j]:
            j += 1
        if j >= len(lines):
            i += 1
            continue
        # G32: bounded scan — next annotation boundary (mirrors fix_addr);
        # demanding a perfect close let functions in imbalance-carrier files
        # escape registration entirely.
        nb = j + 1
        while nb < len(lines):
            s2 = lines[nb].strip()
            if s2.startswith('//') and re.match(
                    r'^//\s*(?:IDA[:\s]\s*)?0x[0-9A-Fa-f]{6,8}', s2):
                break
            nb += 1
        depth, started, k = 0, False, j
        while k < nb:
            d = brace_delta(lines[k])
            if d:
                started = True
            if started:
                depth += d
                if depth <= 0:
                    break
            k += 1
        if not started:
            i += 1
            continue
        addr = int(a.group(1), 16)
        fn_tag = '0x%08X' % addr
        cls = None
        dm = DEF_Q.search(lines[j])
        if dm:
            cls = dm.group(1)
        seg = '\n'.join(lines[j:k + 1])
        env = NB.build_types(seg, cls, addr)[0]
        this_cls = env.get('this')
        before = len(pending)
        for m in R_DEREF.finditer(seg):
            t_cast, recv, off = m.group(1).strip(), m.group(2), int(m.group(3), 0)
            c = this_cls if recv == 'this' else env.get(recv)
            if not c:
                continue
            if member_name(c, off) is None:
                reg(c, off, C_TYPE.get(t_cast.split()[0], 'unsigned int'))
            elif recv == 'this' or env.get(recv):
                upgrade(c, off, fn_tag)
        for m in R_INDEX.finditer(seg):
            t_cast, recv, off = m.group(1).strip(), m.group(2), int(m.group(3), 0)
            c = this_cls if recv == 'this' else env.get(recv)
            if not c:
                continue
            w = WIDTH_T.get(C_TYPE.get(t_cast.split()[0], 'unsigned int'), 4)
            o2 = off * w
            if member_name(c, o2) is None:
                reg(c, o2, C_TYPE.get(t_cast.split()[0], 'unsigned int'))
        for m in R_BARE_DEREF.finditer(seg):
            recv, raw = m.group(1), int(m.group(2), 0)
            # bare deref on untyped (_DWORD*) receiver: dword units
            for off in (raw * 4, raw):
                c = this_cls if recv == 'this' else env.get(recv)
                if not c:
                    break
                if member_name(c, off) is None:
                    reg(c, off, 'unsigned int')
                break
        for m in R_THIS2_SCAN.finditer(seg):
            t_cast, recv, raw = m.group(1), m.group(2), int(m.group(3), 0)
            c = this_cls if recv == 'this' else env.get(recv)
            if not c:
                continue
            off = raw * CAST_WIDTH.get(t_cast, 4)
            if member_name(c, off) is None:
                reg(c, off, C_TYPE.get(t_cast.split()[0], 'unsigned int'))
        if this_cls:
            for m in BARE_THIS.finditer(seg):
                raw = int(m.group(1), 0)
                off = raw * 4
                if member_name(this_cls, off) is None:
                    reg(this_cls, off, 'unsigned int')
        tot_sites += 1
        if len(pending) > before:
            tot_reg += len(pending) - before
        i = k + 1

print('functions scanned:', tot_sites)
print('ml->mt sync entries:', synced)
print('members to register:', len(pending))
print('members to upgrade:', len(upgrades))

if '--align-ml' in sys.argv:
    # name-align member_lookup to the canon table (the rewriter emits canon
    # names into cpp; the verifier resolves via ml — they must agree)
    import json as _json
    canon = _json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                        .read_text(encoding='utf-8'))
    aligned = 0
    for cls, cc in canon.items():
        members = ml.setdefault(cls, {})
        names = mbn.setdefault(cls, {})
        for off, info in (cc.get('members') or {}).items():
            nm = info.get('name')
            if not nm:
                continue
            ent = members.get(off)
            if ent is None:
                members[off] = {'name': nm, 'type': info.get('type'),
                                'size': info.get('size', 4)}
                names[nm] = int(off)
                aligned += 1
            elif ent.get('name') != nm:
                old = ent.get('name')
                ent['name'] = nm
                names.pop(old, None)
                names[nm] = int(off)
                aligned += 1
    print('ml names aligned to canon:', aligned)
    if APPLY and aligned:
        import json as _json
        (ROOT / 'tools' / 'member_lookup.json').write_text(
            _json.dumps(ml, indent=1, ensure_ascii=False) + '\n',
            encoding='utf-8')
        import os as _os
        tmp = ROOT / 'signals.json.tmp'
        tmp.write_text(_json.dumps(sg, indent=2, ensure_ascii=False) + '\n',
                       encoding='utf-8')
        _os.replace(tmp, ROOT / 'signals.json')
        print('ml+signals written')

if APPLY and (pending or upgrades or (synced and DO_SYNC)):
    import json
    (ROOT / 'anchors' / 'member_types.json').write_text(
        json.dumps(mt, indent=1, ensure_ascii=False) + '\n', encoding='utf-8')
    (ROOT / 'tools' / 'member_lookup.json').write_text(
        json.dumps(ml, indent=1, ensure_ascii=False) + '\n', encoding='utf-8')
    import os
    tmp = ROOT / 'signals.json.tmp'
    tmp.write_text(json.dumps(sg, indent=2, ensure_ascii=False) + '\n',
                   encoding='utf-8')
    os.replace(tmp, ROOT / 'signals.json')
    print('APPLIED to member_types.json + member_lookup.json + signals.json')
else:
    print('DRY RUN (use --apply)')
