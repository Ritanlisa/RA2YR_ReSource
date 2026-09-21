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
        'DWORD':'unsigned long','WORD':'unsigned short','BYTE':'unsigned char',
        'byte':'unsigned char',
        # Windows/CRT handles and scalar typedefs -> concrete C types (the
        # headers pulled in below define the original names; mapping keeps
        # member/param emission compilable without relying on include order)
        'HANDLE':'void*','HWND':'void*','HIMC':'void*','HDC':'void*','HBITMAP':'void*',
        'HICON':'void*','HINSTANCE':'void*','HMODULE':'void*','HCURSOR':'void*',
        'HPALETTE':'void*','HRGN':'void*','HFONT':'void*','HACCEL':'void*',
        'HKL':'void*','HGDIOBJ':'void*','HGLOBAL':'void*','HRSRC':'void*',
        'HMENU':'void*','HBRUSH':'void*','HPEN':'void*','FILE':'void',
        'LONG':'long','LONGLONG':'long long','ULONG':'unsigned long',
        'ULONGLONG':'unsigned long long','HRESULT':'long','ATOM':'unsigned short',
        'COLORREF':'unsigned int','WPARAM':'unsigned int','LPARAM':'long',
        'LRESULT':'long','SIZE_T':'unsigned int','PVOID':'void*','LPVOID':'void*'}

# Windows/CRT names provided by <unknwn.h>'s include chain -- never forward-
# declare these as structs (C2371 typedef redefinition), and trust completeness.
EXTERN_TYPE_NAMES = {'GUID', '_GUID', 'LARGE_INTEGER', 'ULARGE_INTEGER', 'VARIANT',
                     'BSTR', 'FILE', 'va_list', 'IUnknown', 'IClassFactory',
                     'IMalloc', 'ISMalloc'}

# Win32 text macros that would expand inside member/method names and wreck the
# declaration (CreateDialog -> CreateDialogA extraction etc.)
WIN32_MACROS = {'CreateDialog', 'DialogBox', 'DrawText', 'DrawTextEx', 'GetObject',
                'SendMessage', 'LoadIcon', 'LoadCursor', 'LoadBitmap', 'LoadImage',
                'LoadLibrary', 'GetMessage', 'PeekMessage', 'DispatchMessage',
                'PostMessage', 'SetWindowText', 'GetWindowText', 'GetClassName',
                'DeleteFile', 'CopyFile', 'MoveFile', 'SetProp', 'GetProp',
                'RemoveProp', 'FindResource', 'LoadResource', 'LockResource',
                'GetWindowLong', 'SetWindowLong', 'GetWindowWord', 'MessageBeep',
                'ExitWindows', 'Yield', 'SelectObject', 'NULL'}
WIN32_MACRO_PREFIXES = ('CreateDialog', 'DialogBox', 'DrawText', 'GetMessage',
                        'PeekMessage', 'PostMessage', 'SendMessage', 'LoadIcon',
                        'LoadCursor', 'LoadBitmap', 'LoadImage', 'SetProp',
                        'GetProp', 'FindResource', 'SetWindowLong')

def cpptype(t, default='void*'):
    if not t:
        return default
    t = t.strip()
    if t in ('unknown', 'unknown *', 'void *unknown'):
        return 'void*'
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

PLACEHOLDER_RE = re.compile(r'^(vtable\d*|vt_?\d+|.*_field_0x[0-9A-Fa-f]+.*|field_.*|__pad.*|__align.*|align_.*|q[0-9A-F]{3}.*)$')
# member_lookup src markers written by later evidence campaigns (ctor write-map
# adjudications, e.g. G16 focus/owner) -- these OUTRANK no-evidence member_types
# names, which are CSP-era bulk-sync residue (audit 2026-09-21: 8,771 no-evidence
# mt offsets, 453 name conflicts, 176 sitting on adjudicated offsets).
ADJUDICATED_SRC_RE = re.compile(r'adjudic|ctor[-_]adjud|g1[5-9]|write[-_]map', re.I)


def _is_placeholder(n):
    return bool(PLACEHOLDER_RE.match(n or ''))


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
    mlc = ml_chain_offsets(cc)
    for o, m in mlc.items():
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
    mt_override = mt_by_cls.get(cc, {})
    for o in sorted(members):
        m = members[o]
        mo = mt_override.get(o) or {}
        mlm = mlc.get(o) or {}
        mt_has_ev = bool(mo.get('evidence'))
        ml_adjudicated = bool(ADJUDICATED_SRC_RE.match(mlm.get('src') or ''))
        # ---- name adjudication (4-tier precedence, mechanical) ----
        # 1. member_types WITH evidence  = binary truth (member_set channel)
        # 2. member_lookup ADJUDICATED   = later evidence campaign result
        # 3. semantic name beats placeholder (either direction)
        # 4. fill order (db > til layouts > mt > mbn > ml) stands on ties
        nm = m['name']
        if mo.get('name') and mt_has_ev:
            nm = mo['name']
        elif ml_adjudicated and mlm.get('name'):
            nm = mlm['name']
        elif mo.get('name'):
            if _is_placeholder(nm) and not _is_placeholder(mo['name']):
                nm = mo['name']
            elif not _is_placeholder(mo['name']) and not _is_placeholder(nm):
                nm = mo['name']  # both semantic: mt (CSP base) stands
        # ---- byte-noise filter: unnamed/unadjudicated unaligned offsets are
        # type_map byte-granularity observation residue, never a real member;
        # the padding fill reconstructs the gap ----
        if (o % 4 and (not nm or _is_placeholder(nm)) and not mt_has_ev
                and not ml_adjudicated and not in_vptr(o)):
            continue
        if in_vptr(o):
            k = vptr_offs.index(o) if o in vptr_offs else None
            if k is None:
                continue  # strictly inside a vptr slot: drop
            n = 'vtable%d' % (k + 1)
            if n not in used:
                used.add(n)
                out.append((o, 'void*', n, 4, ''))
            continue
        t = mo.get('type') if (mo.get('type') and mt_has_ev) else ''
        if not t:
            t = m['type']
        if not t and m['obs']:
            clsobs = [x for x in m['obs'] if re.match(r'^[A-Za-z_]\w*$', x or '')]
            if clsobs:
                t = (canon(clsobs[0]) or clsobs[0]) + '*'
        if not t:
            t = size_type(m['size'])
        t = cpptype(t, size_type(m['size']))
        n = nm or ''
        if n and not PLACEHOLDER_RE.match(n):
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
        sz = mo.get('size') if mt_has_ev else m['size']
        if n in {e[2] for e in out}:
            base = n
            n2, i = base + '_d', 2
            allnames = used | {e[2] for e in out}
            while n2 in allnames:
                n2 = '%s_%d' % (base, i)
                i += 1
            n = n2
        used.add(n)
        out.append((o, t, n, sz, m['name'] or ''))
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
canon_keys = sorted(canon_of)
by_ident = {}
for _cc in canon_keys:
    _src = canon_of.get(_cc, _cc)
    by_ident[ident(_src, _src)] = _cc

# names owned by the repo's gamemd math/enum headers (authoritative defs) and
# by system headers -- canon classes colliding with them are suppressed.
mathenums_names = set()
for _h in ('src/core/math.hpp', 'src/core/enums.hpp'):
    try:
        for _ln in (ROOT / _h).read_text(encoding='utf-8', errors='replace').splitlines():
            _m = re.match(r'\s*(?:struct|enum class)\s+(\w+)', _ln)
            if _m:
                mathenums_names.add(_m.group(1))
            _m = re.match(r'\s*using\s+(\w+)\s*=', _ln)
            if _m:
                mathenums_names.add(_m.group(1))
    except OSError:
        pass
emitted_ident = {}
_ident_counts = {}
for cc in canon_keys:
    _n = ident(canon_of.get(cc, cc), canon_of.get(cc, cc))
    if _n in mathenums_names:
        emitted_ident[cc] = None  # math/enums headers own the name
        continue
    _c = _ident_counts.get(_n, 0)
    _ident_counts[_n] = _c + 1
    emitted_ident[cc] = _n if _c == 0 else '%s_%d' % (_n, _c + 1)
for cc in [c for c, v in emitted_ident.items() if v in EXTERN_TYPE_NAMES]:
    emitted_ident[cc] = None  # Windows/CRT headers own the name (GUID etc.)
all_idents = {v for v in emitted_ident.values() if v}

# base resolution, computed ONCE and shared by the topo graph and the emitter
# (split resolution was the C2504 root cause: the graph and the emitter
# disagreed on transformed names, so base edges went missing)
DROP_BASES = {'IUnknown'}  # real COM root: pure virtuals -> abstract C2259 /
                           # AddRef/Release override-mismatch C2555
bases_map = {}
for cc in canon_keys:
    if emitted_ident.get(cc) is None:
        continue
    _e = db.get(canon_of.get(cc, cc), {})
    bs = []
    for b in (_e.get('direct_bases') or []):
        cb = canon(b) or b
        dep = by_ident.get(ident(cb, cb))
        bn = (emitted_ident.get(dep) if dep else None) or ident(cb, cb)
        if bn in DROP_BASES or cb in DROP_BASES:
            continue
        if dep is not None and emitted_ident.get(dep) is None:
            continue  # suppressed base (system-header-owned name)
        if bn not in all_idents and bn not in mathenums_names \
                and ident(cb, cb) not in all_idents and cb not in mathenums_names:
            continue  # unresolvable base: ref edges are not load-bearing here
        bs.append(bn)
    bases_map[cc] = bs

# undefined bases referenced by emittable classes -> minimal vfptr holders
# (t14 minimal-struct precedent: offset 0 of a polymorphic object is provably
# a vptr; nothing else is invented)
undefined_refs = set()
for cc, bs in bases_map.items():
    for bn in bs:
        if bn not in all_idents and bn not in mathenums_names:
            undefined_refs.add(bn)
minimal_defs = sorted(undefined_refs)

# Topological order (Kahn, sorted-name tiebreak for determinism): every base
# must be COMPLETE at its derived class's definition point.
name2cc = {}
for cc, nm in emitted_ident.items():
    if nm:
        name2cc[nm] = cc
deps = {}
for cc, bs in bases_map.items():
    ds = set()
    for bn in bs:
        dep = name2cc.get(bn)
        if dep and dep != cc:
            ds.add(dep)
    deps[cc] = ds
emis_order = []
ready = sorted(cc for cc in canon_keys
               if emitted_ident.get(cc) and not deps.get(cc))
scheduled = set(ready)
emitted_set = set()  # POPPED only; the heap pops in name order, so gating on
                     # scheduled-instead-of-popped lets a late-named base be
                     # emitted after an early-named dependent (C2504)
import heapq as _heapq
_heapq.heapify(ready)
dependents = {}
for cc, ds in deps.items():
    for d in ds:
        dependents.setdefault(d, []).append(cc)
while ready:
    cc = _heapq.heappop(ready)
    emis_order.append(cc)
    emitted_set.add(cc)
    for nxt in sorted(dependents.get(cc, [])):
        if nxt not in scheduled and deps[nxt] <= emitted_set:
            scheduled.add(nxt)
            _heapq.heappush(ready, nxt)
for cc in canon_keys:
    if emitted_ident.get(cc) and cc not in emitted_set:
        emis_order.append(cc)  # defensive: cycles fall back to name order

# ---- unknown-type handling (mechanical, zero-invention) ----
# classes.hpp includes the repo's gamemd math/enum headers (non-generated),
# forward-declares every unresolved referenced type as `struct X;`
# (sufficient for pointers/params/returns), and degrades by-value members of
# unresolved types to size-faithful char arrays (member NAME + offset kept;
# semantic type stays in csp_canon_members.json).
def base_of(t):
    t = t.strip().split('<')[0]
    return re.sub(r'\*+$', '', t).strip()

known_names = set(PRIM.values()) | {'IUnknown', '_GUID', 'LARGE_INTEGER',
                                    'wchar_t', 'va_list', 'string'}
for _h in ('src/core/math.hpp', 'src/core/enums.hpp'):
    try:
        for _ln in (ROOT / _h).read_text(encoding='utf-8', errors='replace').splitlines():
            _m = re.match(r'\s*(?:struct|enum class)\s+(\w+)', _ln)
            if _m:
                known_names.add(_m.group(1))
            _m = re.match(r'\s*using\s+(\w+)\s*=', _ln)
            if _m:
                known_names.add(_m.group(1))
    except OSError:
        pass
for _cc in canon_keys:
    known_names.add(ident(canon_of.get(_cc, _cc), canon_of.get(_cc, _cc)))

def _collect_type_tokens(type_str, sink):
    for piece in str(type_str or '').split(','):
        b = base_of(piece)
        if b and b not in known_names and re.match(r'^[A-Za-z_]\w*$', b):
            sink.add(b)

fwd_decls = set()
for _cc in emis_order:
    _members, _ = build_members(_cc)
    for (_o, _t, _n, _sz, _orig) in _members:
        _collect_type_tokens(_t, fwd_decls)
    for _ai in sorted(cls_methods.get(_cc, {})):
        _s = cls_methods[_cc][_ai]
        _collect_type_tokens(_s['ret'], fwd_decls)
        for (_pt, _pn) in _s['params']:
            _collect_type_tokens(_pt, fwd_decls)
for _ai in sorted(free_funcs):
    _s = free_funcs[_ai]
    _collect_type_tokens(_s['ret'], fwd_decls)
    for (_pt, _pn) in _s['params']:
        _collect_type_tokens(_pt, fwd_decls)
fwd_decls -= known_names
fwd_decls -= EXTERN_TYPE_NAMES

lines = ['// GENERATED by tools/csp_export/gen_cpp_canon.py - mechanical CSP->C++ transcription.',
         '// Source of truth: CSP outputs (class_db/class_layouts/member_types/csp_functions).',
         '// DO NOT hand-edit; regenerate instead. Non-virtual decls with // vt+NNN slot comments.',
         '#pragma once', '',
         '#include <cstdint>',
         '#include <unknwn.h>',
         '#include "core/math.hpp"',
         '#include "core/enums.hpp"', '']
# forward-declare canon classes ONLY (references -- not just inheritance -- may
# point at a later-defined class; topo order covers base edges only). Windows/
# CRT typedef names (GUID/UINT/LCID/...) must NEVER be forward-declared as
# structs (C2371): they are used verbatim and resolved by the include chain.
lines.append('// forward declarations (mechanical: all canon classes + unresolved types)')
for _n in sorted(all_idents):
    lines.append('struct %s;' % _n)
lines.append('')
if minimal_defs:
    lines.append('// minimal vfptr-holder definitions for referenced-but-undefined bases')
    lines.append('// (mechanical, t14 minimal-struct precedent)')
    for _n in minimal_defs:
        lines.append('struct %s { void* vfptr; };' % _n)
    lines.append('')
lines.append('namespace gamemd {')
lines.append('')

# completeness at emission point: primitives + math/enums names + classes whose
# FULL definition has already been emitted (fwd decls are incomplete types).
complete_names = (set(PRIM.values()) | mathenums_names | set(EXTERN_TYPE_NAMES) | {
    '_GUID', 'LARGE_INTEGER', 'wchar_t', 'va_list'})
# COM interfaces are abstract: a by-value member can never be emitted (C2259)
# -- exclude from completeness so the char-array fallback handles them.
complete_names -= {'IUnknown', 'IClassFactory', 'IMalloc', 'ISMalloc'}
defined_idents = set()
emittable = complete_names | all_idents | set(minimal_defs)


def safe_type(t, byval_default='int'):
    """Degrade referenced-but-unknown types at the use site: pointers -> void*,
    values -> byval_default. Unknown names include Windows/CRT typedefs that
    must not be forward-declared, so this is the compile-safe fallback."""
    tb = base_of(t)
    if not tb:
        return t
    if tb in emittable or tb in defined_idents:
        return t
    return 'void*' if '*' in t else byval_default
emitted = 0
method_names = {}
for cc in emis_order:
    if emitted_ident.get(cc) is None:
        continue  # collides with authoritative math/enums names
    src_cls = canon_of.get(cc, cc)
    e = db.get(src_cls, {})
    lay = layouts.get(src_cls, {})
    bases = bases_map.get(cc, [])
    total = lay.get('size') or e.get('size') or 0
    members, _ = build_members(cc)
    lines.append('// === %s  size=%s  src=%s ===' % (cc, total or '?', src_cls))
    hdr = 'struct ' + emitted_ident[cc]
    if bases:
        hdr += ' : ' + ', '.join('public ' + b for b in bases)
    lines.append(hdr + ' {')
    for (o, t, n, sz, orig) in members:
        cmt = '  // 0x%X' % o + (' (was %s)' % orig if orig and orig != n else '')
        if n in known_names or n in WIN32_MACROS:
            n = n + '_m'  # member/type or Win32-macro name collision
        tb = base_of(t)
        if '*' not in t and '<' not in t and tb not in complete_names \
                and tb not in defined_idents:
            # by-value member of a not-yet-defined (fwd-declared only) type:
            # size-faithful char-array fallback (member NAME/offset preserved;
            # semantic type lives in csp_canon_members.json).
            lines.append('    char %s[%d];%s' % (n, sz or 1, cmt))
        else:
            lines.append('    %s %s;%s' % (safe_type(t, 'int'), n, cmt))
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
        if mn in WIN32_MACROS or mn.startswith(WIN32_MACRO_PREFIXES):
            mn = mn + '_f'
        ps = ', '.join('%s %s' % (safe_type(t, 'int'), n) for t, n in s['params'])
        slots = e.get('methods', {}).get('0x%08X' % ai, {}).get('vtable_slots') or []
        sc = '  // 0x%X' % ai + (' vt+%d' % (slots[0]['slot'] * 4) if slots else '') + ' sig=' + s['src']
        if mn == emitted_ident[cc]:
            # constructor-shaped entry: no return type (C2533)
            lines.append('    %s(%s);%s' % (mn, ps, sc))
        else:
            lines.append('    %s %s(%s);%s' % (safe_type(s['ret'], 'int'), mn, ps, sc))
    lines.append('};')
    defined_idents.add(emitted_ident[cc])
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
