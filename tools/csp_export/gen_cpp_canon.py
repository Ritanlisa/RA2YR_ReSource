#!/usr/bin/env python3
"""Step-2 mechanical exporter: CSP outputs -> canonical C++ declarations.

Pure algorithm. No per-symbol manual handling. Deterministic.

Outputs:
  src/csp_canon/classes.hpp
  src/csp_canon/functions.hpp
  src/csp_canon/globals.hpp
  anchors/csp_canon_manifest.json   per-addr provenance
"""
import json, re
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).resolve().parents[2]
OUT = ROOT / 'src' / 'csp_canon'
OUT.mkdir(parents=True, exist_ok=True)

def J(p):
    return json.loads(Path(p).read_text(encoding='utf-8'))

print('loading CSP layer...', flush=True)
db = J(ROOT / 'anchors/class_db.json')['classes']
layouts = J(ROOT / 'tools/class_layouts.json')
align = J(ROOT / 'anchors/class_name_align.json')
mtypes = J(ROOT / 'anchors/member_types.json')
cspf = J(ROOT / 'tools/csp/full_report/csp_functions.json')['functions']
globals_ = J(ROOT / 'anchors/global_types.json')
signals = J(ROOT / 'signals.json')['symbols']
try:
    alias = J(ROOT / 'anchors/mangled_alias.json')
except Exception:
    alias = {}

rtti2canon = align.get('rtti_to_canon', {})

KEYWORDS = {'int','char','bool','void','float','double','long','short','unsigned','signed',
            'class','struct','union','enum','const','static','virtual','public','private',
            'protected','return','if','else','for','while','do','switch','case','default',
            'break','continue','new','delete','this','template','typename','namespace','using',
            'operator','sizeof','typedef','true','false','nullptr','auto','register','goto'}

def canon(cls):
    if not cls:
        return None
    v = rtti2canon.get(cls)
    if isinstance(v, dict):
        return v.get('canon') or cls
    if isinstance(v, list) and v:
        return v[0] or cls
    if isinstance(v, str):
        return v
    return cls

def ident(name, fallback):
    if not name:
        return fallback
    if name in alias and isinstance(alias[name], str):
        name = alias[name]
    n = re.sub(r'[^A-Za-z0-9_]', '_', name)
    n = re.sub(r'_+', '_', n).strip('_')
    if not n:
        return fallback
    if n[0].isdigit():
        n = 'N' + n
    if n in KEYWORDS:
        n = n + '_'
    return n

PRIM = {'_DWORD':'unsigned int','_WORD':'unsigned short','_BYTE':'unsigned char',
        '_QWORD':'unsigned long long','int':'int','unsigned int':'unsigned int',
        'unsigned __int8':'unsigned char','unsigned __int16':'unsigned short',
        'unsigned __int64':'unsigned long long','__int8':'signed char','__int16':'short',
        '__int64':'long long','char':'char','BOOL':'int','bool':'bool','void':'void',
        'float':'float','double':'double','_BOOL':'bool','unsigned char':'unsigned char',
        'short':'short','long long':'long long','uint8_t':'unsigned char',
        'uint16_t':'unsigned short','uint32_t':'unsigned int','ULONG':'unsigned long',
        'DWORD':'unsigned long','WORD':'unsigned short','BYTE':'unsigned char'}

def cpptype(t, default='void*'):
    if not t:
        return default
    t = t.strip()
    if t in PRIM:
        return PRIM[t]
    m = re.match(r'^(.*?)\s*\*+$', t)
    if m:
        base = m.group(1).strip()
        stars = t[len(m.group(1)):]
        if base in PRIM:
            return PRIM[base] + stars
        cb = canon(base)
        if cb and re.match(r'^[A-Za-z_]\w*$', cb):
            return cb + stars
        if re.match(r'^[A-Za-z_]\w*$', base or ''):
            return base + stars
        return default
    cb = canon(t)
    if cb and re.match(r'^[A-Za-z_]\w*$', cb):
        return cb
    return default

def size_type(sz):
    return {1:'unsigned char',2:'unsigned short',4:'unsigned int',
            8:'unsigned long long'}.get(sz, 'unsigned char')

all_classes = set(db.keys()) | set(layouts.keys())
canon_of = {}
for c in all_classes:
    cc = canon(c) or c
    canon_of.setdefault(cc, c)

# old member_lookup loaded for union (offset completeness)
member_lookup = J(ROOT / 'tools/member_lookup.json')

def ml_chain_offsets(cc):
    """Union of member_lookup offsets over cls + ancestors (mechanical)."""
    offs = {}
    seq = [cc] + [canon(a) or a for a in ((db.get(cc) or {}).get('full_ancestors') or [])]
    for c in seq:
        for off, m in (member_lookup.get(c) or {}).items():
            try:
                o = int(off)
            except ValueError:
                continue
            if isinstance(m, dict) and o not in offs:
                offs[o] = m
    return offs

mt_by_cls = defaultdict(dict)
for k, v in mtypes.items():
    if '+' not in k:
        continue
    cls, off = k.rsplit('+', 1)
    m = re.match(r'^0x([0-9A-Fa-f]+)$', off)
    if not m:
        continue
    cc = canon(cls) or cls
    try:
        mt_by_cls[cc][int(m.group(1), 16)] = v
    except ValueError:
        continue

print('resolving signatures...', flush=True)
func_sig = {}
for a, rec in cspf.items():
    try:
        ai = int(a, 16)
    except ValueError:
        continue
    params = []
    for p in rec.get('params', []):
        if p.get('name') == 'this':
            continue
        params.append((cpptype(p.get('real_type') or p.get('csp_type'), 'int'),
                       ident(p.get('name') or '', 'a%d' % len(params))))
    func_sig[ai] = {'ret': cpptype(rec.get('return_type'), 'void'),
                    'cc': rec.get('calling_convention', 'thiscall'),
                    'params': params,
                    'name': rec.get('inferred_name') or rec.get('original_name') or '',
                    'cls': canon(rec.get('inferred_real_class')) if rec.get('inferred_real_class') else None,
                    'src': 'csp'}

for a, rec in signals.items():
    if not isinstance(rec, dict) or not rec.get('name'):
        continue
    try:
        ai = int(a, 16)
    except ValueError:
        continue
    if ai in func_sig:
        continue
    params = []
    for i, p in enumerate(rec.get('params', []) or []):
        if isinstance(p, str):
            params.append((cpptype(p, 'int'), 'a%d' % i))
            continue
        if not isinstance(p, dict):
            continue
        params.append((cpptype(p.get('type'), 'int'), ident(p.get('name') or '', 'a%d' % i)))
    s = {'ret': cpptype(rec.get('return_type'), 'void'),
         'cc': rec.get('call_convention', 'cdecl'),
         'params': params, 'name': rec.get('name') or '', 'cls': None,
         'src': 'ida-proto'}
    nm = s['name']
    if '::' in nm:
        c = nm.split('::')[0]
        s['cls'] = canon(c) or c
    func_sig[ai] = s

n_csp = sum(1 for v in func_sig.values() if v['src'] == 'csp')
print('signatures:', len(func_sig), '(csp:', n_csp, ')', flush=True)

known_cls = set(canon_of) | set(db) | set(layouts)
cls_methods = defaultdict(dict)
free_funcs = {}
for ai, s in func_sig.items():
    cls = s.get('cls')
    if cls and cls in known_cls:
        cls_methods[cls][ai] = s
        continue
    nm = s.get('name') or ''
    if '::' in nm:
        c = canon(nm.split('::')[0]) or nm.split('::')[0]
        if c in known_cls:
            cls_methods[c][ai] = s
            continue
    free_funcs[ai] = s

def build_members(cc):
    src_cls = canon_of.get(cc, cc)
    e = db.get(src_cls, {})
    lay = layouts.get(src_cls, {})
    vptr_offs = sorted({int(v.get('col_offset', 0)) for v in (e.get('vtables') or {}).values()})
    in_vptr = lambda o: any(v <= o < v + 4 for v in vptr_offs)
    members = {}
    for off, m in (e.get('members') or {}).items():
        try:
            o = int(off)
        except ValueError:
            continue
        members[o] = {'name': m.get('name') or '', 'type': m.get('type') or '',
                      'size': m.get('size') or 4, 'obs': m.get('observed_types') or []}
    for off, m in (lay.get('offsets') or {}).items():
        try:
            o = int(off)
        except ValueError:
            continue
        cur = members.get(o)
        if cur is None:
            members[o] = {'name': m.get('ida_name') or '', 'type': '',
                          'size': m.get('size') or 4, 'obs': []}
        elif not cur['name'] and m.get('ida_name'):
            cur['name'] = m['ida_name']
    for off, v in mt_by_cls.get(cc, {}).items():
        cur = members.get(off)
        if cur is None:
            members[off] = {'name': v.get('name') or '', 'type': v.get('type') or '',
                            'size': 4, 'obs': []}
        else:
            if not cur['type'] and v.get('type'):
                cur['type'] = v['type']
            if not cur.get('name') and v.get('name'):
                cur['name'] = v['name']
    mbn = lay.get('_member_by_name') or {}
    for n, o in mbn.items():
        if isinstance(o, int) and o in members and not members[o]['name']:
            members[o]['name'] = n
    # UNION old member_lookup chain offsets (offset completeness; no silent gaps)
    for o, m in ml_chain_offsets(cc).items():
        if o in members:
            cur = members[o]
            if not cur['name'] and m.get('name'):
                cur['name'] = m.get('name')
            if not cur['type'] and m.get('type'):
                cur['type'] = m.get('type')
        else:
            members[o] = {'name': m.get('name') or '', 'type': m.get('type') or '',
                          'size': 4, 'obs': []}
    total = lay.get('size') or e.get('size') or 0
    out = []
    used = set()
    for o in sorted(members):
        m = members[o]
        if in_vptr(o):
            k = vptr_offs.index(o) if o in vptr_offs else None
            if k is None:
                continue  # strictly inside a vptr slot: drop
            n = 'vtable%d' % (k + 1)
            if n not in used:
                used.add(n)
                out.append((o, 'void*', n, 4, ''))
            continue
        m = members[o]
        t = m['type']
        if not t and m['obs']:
            clsobs = [x for x in m['obs'] if re.match(r'^[A-Za-z_]\w*$', x or '')]
            if clsobs:
                t = (canon(clsobs[0]) or clsobs[0]) + '*'
        if not t:
            t = size_type(m['size'])
        t = cpptype(t, size_type(m['size']))
        n = m['name'] or ''
        if n and not re.match(r'^(vtable\d*|vt_?\d+|field_.*|__pad.*)$', n):
            n = ident(n, '')
        else:
            n = ''
        if not n or n in used:
            base = 'q%03X' % o
            n2, i = base, 2
            while n2 in used:
                n2 = base + '_' + str(i)
                i += 1
            n = n2
        used.add(n)
        out.append((o, t, n, m['size'], m['name'] or ''))
    padded = []
    prev_end = 0
    for (o, t, n, sz, orig) in out:
        if o > prev_end and total:
            padded.append((prev_end, 'unsigned char', '__pad_%03X' % prev_end,
                           o - prev_end, ''))
        padded.append((o, t, n, sz, orig))
        prev_end = max(prev_end, o + (sz or 4))
    if total and prev_end < total:
        padded.append((prev_end, 'unsigned char', '__pad_%03X' % prev_end,
                       total - prev_end, ''))
    return padded, total

print('emitting classes...', flush=True)
lines = ['// GENERATED by tools/csp_export/gen_cpp_canon.py - mechanical CSP->C++ transcription.',
         '// Source of truth: CSP outputs (class_db/class_layouts/member_types/csp_functions).',
         '// DO NOT hand-edit; regenerate instead. Non-virtual decls with // vt+NNN slot comments.',
         '#pragma once', '', 'namespace gamemd {', '']
emitted = 0
method_names = {}
for cc in sorted(canon_of):
    src_cls = canon_of.get(cc, cc)
    e = db.get(src_cls, {})
    lay = layouts.get(src_cls, {})
    bases = []
    for b in (e.get('direct_bases') or []):
        cb = canon(b) or b
        bases.append(ident(cb, cb))
    total = lay.get('size') or e.get('size') or 0
    members, _ = build_members(cc)
    lines.append('// === %s  size=%s  src=%s ===' % (cc, total or '?', src_cls))
    hdr = 'struct ' + ident(cc, cc)
    if bases:
        hdr += ' : ' + ', '.join('public ' + b for b in bases)
    lines.append(hdr + ' {')
    for (o, t, n, sz, orig) in members:
        cmt = '  // 0x%X' % o + (' (was %s)' % orig if orig and orig != n else '')
        lines.append('    %s %s;%s' % (t, n, cmt))
    for ai in sorted(cls_methods.get(cc, {})):
        s = cls_methods[cc][ai]
        raw = s['name'] or 'vtfn'
        mn = raw.split('::')[-1] if '::' in raw else raw
        mn = ident(mn, 'vtfn')
        key = (cc, mn)
        cnt = method_names.get(key, 0)
        method_names[key] = cnt + 1
        if cnt:
            mn = '%s_%d' % (mn, cnt + 1)
        ps = ', '.join('%s %s' % (t, n) for t, n in s['params'])
        slots = e.get('methods', {}).get('0x%08X' % ai, {}).get('vtable_slots') or []
        sc = '  // 0x%X' % ai + (' vt+%d' % (slots[0]['slot'] * 4) if slots else '') + ' sig=' + s['src']
        lines.append('    %s %s(%s);%s' % (s['ret'], mn, ps, sc))
    lines.append('};')
    lines.append('')
    emitted += 1
lines.append('} // namespace gamemd')
(OUT / 'classes.hpp').write_text('\n'.join(lines), encoding='utf-8')
print('classes emitted:', emitted)

fl = ['// GENERATED canonical free-function signatures (mechanical).',
      '// sig=csp -> CSP solved; sig=ida-proto -> IDA prototype (unanchored).',
      '#pragma once', '', '#include "classes.hpp"', '', 'namespace gamemd {', '']
for ai in sorted(free_funcs):
    s = free_funcs[ai]
    raw = s['name'] or 'fn_%X' % ai
    nm = raw.split('::')[-1] if '::' in raw else raw
    nm = ident(nm, 'fn_%X' % ai)
    ps = ', '.join('%s %s' % (t, n) for t, n in s['params'])
    fl.append('%s %s(%s);  // 0x%X sig=%s' % (s['ret'], nm, ps, ai, s['src']))
fl.append('')
fl.append('} // namespace gamemd')
(OUT / 'functions.hpp').write_text('\n'.join(fl), encoding='utf-8')
print('free functions emitted:', len(free_funcs))

gl = ['// GENERATED canonical global declarations (mechanical, from global_types.json).',
      '#pragma once', '', 'namespace gamemd {', '']
n_g = 0
for a, g in sorted(globals_.items(), key=lambda kv: int(kv[0], 16)):
    try:
        ai = int(a, 16)
    except ValueError:
        continue
    n = ident(g.get('name') or '', 'g_%X' % ai)
    t = cpptype(g.get('type'), 'unsigned int')
    gl.append('extern %s %s;  // 0x%X conf=%s' % (t, n, ai, g.get('confidence', '')))
    n_g += 1
gl.append('')
gl.append('} // namespace gamemd')
(OUT / 'globals.hpp').write_text('\n'.join(gl), encoding='utf-8')
print('globals emitted:', n_g)

man = {}
for ai, s in func_sig.items():
    man['0x%08X' % ai] = {'name': s['name'], 'sig': s['src'], 'cls': s.get('cls')}
Path(ROOT / 'anchors/csp_canon_manifest.json').write_text(
    json.dumps(man, indent=1, ensure_ascii=False), encoding='utf-8')
print('manifest written:', len(man))

# members table for the step-4 rewriter (mechanical consumer)
mtab = {}
for cc in sorted(canon_of):
    src_cls = canon_of.get(cc, cc)
    lay = layouts.get(src_cls, {})
    total = lay.get('size') or db.get(src_cls, {}).get('size') or 0
    mem, _tot = build_members(cc)
    mtab[cc] = {'size': total,
                'members': {str(o): {'name': n, 'type': t, 'size': sz}
                            for (o, t, n, sz, _orig) in mem}}
Path(ROOT / 'anchors/csp_canon_members.json').write_text(
    json.dumps(mtab, indent=0, ensure_ascii=False), encoding='utf-8')
print('members table written:', len(mtab))
print('DONE')
