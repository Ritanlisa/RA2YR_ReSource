#!/usr/bin/env python3
"""X60 P0 audit — CORRUPT FLAT CARRIER LAYOUTS (read-only).

Detects, per flat carrier struct in:
  * src/e4/classes/*_e4.hpp
  * src/e4/classes/_tree_full_e4.hpp
  * src/_gap2/gap2_global_decls.hpp

the six defect classes defined by the orchestrator:
  D1 descending-order      members with offsets declared in non-ascending order
  D2 duplicate/overlap     two members at the same offset / intersecting ranges
  D3 no-offset             members without any offset evidence
  D4 cross-class           semantic member name that is authority-proof for
                           ANOTHER class but not for this one (contamination)
  D5 misaligned            pointer member at off%4!=0; 4-byte scalar at off%2!=0
  D6 sizeof mismatch       carrier's true C++ sizeof (declaration order) vs
                           authority size (csp_canon_members.json)

Emits .omo/evidence/optimization/x60/x60_audit.json + stdout tables.
Read-only: writes nothing under src/.
"""
import json
import re
import sys
import collections
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
E4C = SRC / 'e4' / 'classes'
OUT_DIR = ROOT / '.omo' / 'evidence' / 'optimization' / 'x60'

FILES = [E4C / '_tree_full_e4.hpp']
FILES += sorted(p for p in E4C.glob('*_e4.hpp') if p != E4C / '_tree_full_e4.hpp')
GAP2 = SRC / '_gap2' / 'gap2_global_decls.hpp'
if GAP2.exists():
    FILES.append(GAP2)

# ------------------------------------------------------------------ authority
print('loading authority tables ...', flush=True)
canon = json.loads((ROOT / 'anchors' / 'csp_canon_members.json').read_text(encoding='utf-8'))
ml = json.loads((ROOT / 'tools' / 'member_lookup.json').read_text(encoding='utf-8'))

# semantic-name -> set(class) index (offset-decodable supply names excluded)
DECODABLE = re.compile(
    r'^(?:q[0-9A-Fa-f]{2,6}|u(?:8|16|32|64)_[0-9A-Fa-f]+|ptr_[0-9A-Fa-f]+'
    r'|__pad_[0-9A-Fa-f]+|field_[0-9A-Fa-f]{1,6}|\w*_field_[0-9A-Fa-f]{2,6}'
    r'|M\d+|vfptr\d*|vtable\d*|vt_\w+|unknown_?\d*)$')

name_cls = collections.defaultdict(set)          # semantic name -> {class}
for c, e in canon.items():
    for m in (e.get('members') or {}).values():
        nm = (m or {}).get('name') or ''
        if nm and not DECODABLE.match(nm):
            name_cls[nm].add(c)
# member_lookup til-sync entries are til-derived truth: weight them as authority
# for the class they belong to (they also fill name->class).
for c, e in ml.items():
    if not isinstance(e, dict):
        continue
    for v in e.values():
        if isinstance(v, dict) and str(v.get('src', '')).startswith('til-sync'):
            nm = (v or {}).get('name') or ''
            if nm and not DECODABLE.match(nm):
                name_cls[nm].add(c)

AUTH_SIZE = {}
for c, e in canon.items():
    try:
        s = int(e.get('size') or 0)
    except (TypeError, ValueError):
        s = 0
    if s > 0:
        AUTH_SIZE[c] = s

# ------------------------------------------------------------------ parsing
STRUCT_OPEN = re.compile(r'^\s*struct\s+(\w+)\s*\{\s*$')
IDENT_TAIL = re.compile(r'([A-Za-z_]\w*)\s*\**\s*$')


def strip_comments(line):
    out = []
    i, n = 0, len(line)
    while i < n:
        if line.startswith('//', i):
            break
        if line.startswith('/*', i):
            j = line.find('*/', i + 2)
            if j < 0:
                break
            i = j + 2
            continue
        out.append(line[i])
        i += 1
    return ''.join(out)


def member_size(ty, arr):
    c = re.sub(r'\s+', '', ty)
    if arr:
        m = re.match(r'\[(\d+)\]', arr)
        n = int(m.group(1)) if m else 1
        elem = 4
        if c.rstrip('0123456789') in ('char[', 'unsignedchar[', 'signedchar['):
            elem = 1
        if 'short' in c or 'WORD' in c:
            elem = 2
        if 'longlong' in c or '__int64' in c or 'double' in c:
            elem = 8
        return elem * n
    if c.endswith('*'):
        return 4
    if c in ('bool', 'char', 'unsignedchar', 'signedchar', 'uint8_t', 'int8_t', 'BYTE'):
        return 1
    if c in ('short', 'unsignedshort', 'int16_t', 'uint16_t', 'WORD', 'wchar_t'):
        return 2
    if c in ('double', 'unsignedlonglong', 'longlong', '__int64',
             'unsigned__int64', 'int64_t', 'uint64_t'):
        return 8
    return 4


def parse_member(line):
    """(type, name, array, comment, offset) or None. Offset from comment hex
    or offset-decodable name; None when neither supplies one."""
    s = line.rstrip('\n')
    decl = strip_comments(s).rstrip()
    if '(' in decl or '=' in decl or '#' in decl:
        return None
    if not decl.endswith(';'):
        return None
    mcom = re.search(r'//|/\*', s)
    comment = s[mcom.start():].strip() if mcom else ''
    core = decl[:-1].strip()
    if not core or core.startswith(('//', 'typedef', 'using', 'friend',
                                    'public', 'private', 'protected',
                                    'template', 'return', 'static', 'goto')):
        return None
    arr = ''
    ma = re.search(r'\[\s*(\d*)\s*\]\s*$', core)
    if ma:
        arr = '[%s]' % (ma.group(1) or '')
        core = core[:ma.start()].strip()
        if not core:
            return None
    mn = re.search(r'([A-Za-z_]\w*)\s*\**\s*$', core)
    if not mn:
        return None
    name = mn.group(1)
    ty = core[:mn.start()].rstrip()
    tail = core[mn.start():]
    stars = tail[len(name):].replace(' ', '')
    ty = (ty + stars).strip()
    if not ty:
        return None
    if ty.split()[0] in ('return', 'else', 'case', 'goto', 'if', 'while',
                         'switch', 'for', 'do'):
        return None
    ty = re.sub(r'\s+', ' ', ty)
    off = None
    mo = re.search(r'0x([0-9A-Fa-f]+)', comment or '')
    if mo:
        off = int(mo.group(1), 16)
    else:
        m1 = re.match(r'^q([0-9A-Fa-f]{2,6})$', name)
        if m1:
            off = int(m1.group(1), 16)
        else:
            m2 = re.match(r'^u(?:8|16|32|64)_([0-9A-Fa-f]+)$', name)
            if m2:
                off = int(m2.group(1), 16)
            else:
                m3 = re.match(r'^(?:ptr|__pad)_([0-9A-Fa-f]+)$', name)
                if m3:
                    off = int(m3.group(1), 16)
                else:
                    m4 = re.match(r'^(?:\w*_)?field_([0-9A-Fa-f]{1,6})$', name)
                    if m4:
                        off = int(m4.group(1), 16)
                    else:
                        m5 = re.match(r'^M(\d+)$', name)
                        if m5:
                            off = int(m5.group(1), 10)
    return (ty, name, arr, comment, off)


def parse_structs(text):
    """[(name, [(type, name, arr, comment, off)])] — depth-0 flat structs."""
    lines = text.split('\n')
    out = []
    i, n = 0, len(lines)
    while i < n:
        m = STRUCT_OPEN.match(lines[i])
        if not m:
            i += 1
            continue
        name = m.group(1)
        depth = 1
        j = i + 1
        members = []
        while j < n and depth > 0:
            depth += lines[j].count('{') - lines[j].count('}')
            if depth <= 0:
                break
            pm = parse_member(lines[j])
            if pm:
                members.append(pm)
            j += 1
        out.append((name, members))
        i = j + 1 if j < n else n
    return out


# ------------------------------------------------------------------ audit
AUD = {'meta': {'files': [str(f) for f in FILES]},
       'structs': [], 'by_file': {}}
G = collections.Counter()

for path in FILES:
    try:
        text = path.read_bytes().decode('utf-8')
    except UnicodeDecodeError:
        text = path.read_bytes().decode('latin-1')
    structs = parse_structs(text)
    fs = collections.Counter()
    for (cls, members) in structs:
        rec = {'file': path.name, 'cls': cls, 'n_members': len(members)}
        offs_seq = [(ty, nm, arr, off) for (ty, nm, arr, _c, off) in members
                    if off is not None]
        rec['n_off'] = len(offs_seq)
        rec['n_nooff'] = len(members) - len(offs_seq)

        # D1 descending
        desc = sum(1 for a, b in zip(offs_seq, offs_seq[1:])
                   if b[3] < a[3])
        rec['descending_steps'] = desc
        if desc:
            fs['D1_structs'] += 1
            G['D1_structs'] += 1

        # D2 duplicate / overlap (by byte range)
        ranges = []
        for (ty, nm, arr, off) in offs_seq:
            sz = member_size(ty, arr)
            ranges.append((off, off + max(sz, 1), nm, ty))
        dups = overlap = 0
        for i in range(len(ranges)):
            for j in range(i + 1, len(ranges)):
                if ranges[i][0] == ranges[j][0]:
                    dups += 1
                elif ranges[i][0] < ranges[j][1] and ranges[j][0] < ranges[i][1]:
                    overlap += 1
        rec['dup_offsets'] = dups
        rec['overlap_ranges'] = overlap
        if dups:
            fs['D2_dup_structs'] += 1
            G['D2_dup_structs'] += 1
            G['D2_dup_pairs'] += dups
        if overlap:
            fs['D2_overlap_structs'] += 1
            G['D2_overlap_structs'] += 1
            G['D2_overlap_pairs'] += overlap

        # D3 no-offset
        if rec['n_nooff']:
            fs['D3_structs'] += 1
            G['D3_structs'] += 1
            G['D3_members'] += rec['n_nooff']
            rec['nooff_names'] = [nm for (ty, nm, arr, c, off) in members
                                  if off is None][:12]

        # D4 cross-class contamination (semantic names only)
        contam = []
        for (ty, nm, arr, c, off) in members:
            if DECODABLE.match(nm):
                continue
            others = name_cls.get(nm)
            if others and cls not in others:
                contam.append({'name': nm, 'authority_classes': sorted(others)[:4]})
        rec['contaminated'] = contam
        if contam:
            fs['D4_structs'] += 1
            G['D4_structs'] += 1
            G['D4_members'] += len(contam)

        # D5 misaligned
        mis = []
        for (ty, nm, arr, off) in offs_seq:
            c = re.sub(r'\s+', '', ty)
            if off == 0:
                continue
            if arr:
                continue
            if c.endswith('*') and off % 4 != 0:
                mis.append({'name': nm, 'off': off, 'why': 'ptr not 4-aligned'})
            elif c in ('int', 'unsignedint', 'long', 'unsignedlong', 'float',
                       'uint32_t', 'int32_t', 'BOOL', 'DWORD') and off % 4 != 0:
                mis.append({'name': nm, 'off': off, 'why': '4-byte not 4-aligned'})
            elif c in ('double', 'longlong', 'unsignedlonglong', '__int64',
                       'int64_t', 'uint64_t') and off % 8 != 0:
                mis.append({'name': nm, 'off': off, 'why': '8-byte not 8-aligned'})
        rec['misaligned'] = mis
        if mis:
            fs['D5_structs'] += 1
            G['D5_structs'] += 1
            G['D5_members'] += len(mis)

        # D6 sizeof: true C++ sizeof (declaration order, natural alignment)
        cpp_size = 0
        max_align = 1
        for (ty, nm, arr, c, off) in members:
            sz = member_size(ty, arr)
            al = min(sz, 8) if sz else 4
            max_align = max(max_align, al)
            cpp_size = (cpp_size + al - 1) // al * al + sz
        cpp_size = (cpp_size + max_align - 1) // max_align * max_align
        rec['cpp_sizeof'] = cpp_size
        auth = AUTH_SIZE.get(cls, 0)
        rec['auth_size'] = auth
        if auth and auth != cpp_size:
            rec['sizeof_delta'] = cpp_size - auth
            fs['D6_structs'] += 1
            G['D6_structs'] += 1

        AUD['structs'].append(rec)

    AUD['by_file'][path.name] = dict(fs)

OUT_DIR.mkdir(parents=True, exist_ok=True)
(OUT_DIR / 'x60_audit.json').write_text(
    json.dumps(AUD, indent=1, ensure_ascii=False), encoding='utf-8')

print('=== X60 AUDIT (read-only) ===')
print('files scanned: %d  structs: %d' % (len(FILES), len(AUD['structs'])))
print()
print('GLOBAL defect counts:')
for k in ('D1_structs', 'D2_dup_structs', 'D2_dup_pairs', 'D2_overlap_structs',
          'D2_overlap_pairs', 'D3_structs', 'D3_members', 'D4_structs',
          'D4_members', 'D5_structs', 'D5_members', 'D6_structs'):
    print('  %-22s %d' % (k, G.get(k, 0)))
print()
print('top files by D1 (descending-order structs):')
top = sorted(AUD['by_file'].items(), key=lambda kv: -kv[1].get('D1_structs', 0))
for f, fs in top[:20]:
    if fs.get('D1_structs'):
        print('  %4d %s' % (fs['D1_structs'], f))
print()
print('top files by D4 (contaminated structs):')
top = sorted(AUD['by_file'].items(), key=lambda kv: -kv[1].get('D4_structs', 0))
for f, fs in top[:20]:
    if fs.get('D4_structs'):
        print('  %4d %s' % (fs['D4_structs'], f))
