#!/usr/bin/env python3
"""Step-2 mechanical exporter: CSP outputs -> canonical C++ declarations.

Pure algorithm. No per-symbol manual handling. Deterministic.

Outputs:
  src/csp_canon/classes.hpp
  src/csp_canon/functions.hpp
  src/csp_canon/globals.hpp
  anchors/csp_canon_manifest.json   per-addr provenance
"""
import json, re, sys
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
                     'IMalloc', 'ISMalloc',
                     # stdint / CRT builtin names that must never be emitted
                     # as class declarations (C2371 redefinition / C2988)
                     'int8_t', 'int16_t', 'int32_t', 'int64_t', 'int16',
                     'int32', 'int64', 'uint8_t', 'uint16_t', 'uint32_t',
                     'uint64_t', 'uint16', 'uint32', 'uint64', 'wchar_t',
                     'type_info', 'size_t', 'ptrdiff_t', 'uintptr_t',
                     'intptr_t', 'max_align_t', 'unknown', 'non_rtti_object',
                     # Windows base typedefs (winnt.h) -- same C2371 class
                     'LPVOID', 'LPCTSTR', 'LPSTR', 'LPCSTR', 'LPWSTR',
                     'LPCWSTR', 'HANDLE', 'HWND', 'HINSTANCE', 'HMODULE',
                     'HDC', 'HBITMAP', 'HRESULT', 'DWORD', 'WORD', 'BYTE',
                     'BOOL', 'UINT', 'LONG', 'ULONG', 'SHORT', 'USHORT',
                     'CHAR', 'WCHAR', 'TCHAR', 'PVOID', 'BOOLEAN', 'FARPROC',
                     'ATOM', 'COLORREF', 'LRESULT', 'WPARAM', 'LPARAM',
                     # rpcndr.h lowercase typedef (x49: C2371 vs windows.h chain)
                     'byte'}

# Win32 text macros that would expand inside member/method names and wreck the
# declaration (CreateDialog -> CreateDialogA extraction etc.)
WIN32_MACROS = {'CreateDialog', 'DialogBox', 'DrawText', 'DrawTextEx', 'GetObject',
                'SendMessage', 'LoadIcon', 'LoadCursor', 'LoadBitmap', 'LoadImage',
                'LoadLibrary', 'GetMessage', 'PeekMessage', 'DispatchMessage',
                'PostMessage', 'SetWindowText', 'GetWindowText', 'GetClassName',
                'DeleteFile', 'CopyFile', 'MoveFile', 'SetProp', 'GetProp',
                'RemoveProp', 'FindResource', 'LoadResource', 'LockResource',
                'GetWindowLong', 'SetWindowLong', 'GetWindowWord', 'MessageBeep',
                'ExitWindows', 'Yield', 'SelectObject', 'NULL',
                'Write', 'Read', 'Close', 'Flush', 'Error', 'ErrorA'}
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

# til-seeded classes (G35.2 body-observation + ctor-map mining channel):
# these exist in the IDA til but not in layouts/db -- merge as a fifth
# source so the canon universe covers everything the til does
TIL_SEEDED = J(ROOT / 'anchors/til_seeded_classes.json')
for _c, _i in TIL_SEEDED.items():
    if _c not in layouts:
        layouts.setdefault(_c, {'size': _i.get('size') or 0,
                                'offsets': _i.get('offsets') or {},
                                'parent': None, 'til_seeded': True})
all_classes = set(db.keys()) | set(layouts.keys())
# G42.57ax guard: a class named like the enclosing namespace name-hides the
# namespace once emitted (`class gamemd;` inside `namespace gamemd` breaks
# every `gamemd::X` reference corpus-wide). Data-side purge lives in
# purge_gamemd_phantom.py; this keeps the header generator immune too.
all_classes -= {'gamemd', 'ra2'}
# classes known only through member evidence (member_types keys, synced
# member_lookup classes such as Gap2Recv_*) join the canon universe
all_classes |= {k.rsplit('+', 1)[0] for k in mtypes if '+' in k}
all_classes -= {'gamemd', 'ra2'}  # re-apply: composite mtypes keys re-seed
all_classes |= set(J(ROOT / 'tools/member_lookup.json').keys())
all_classes -= {'gamemd', 'ra2'}  # re-apply after every |= (G42.57ax)
canon_of = {}
# RC1/I13: iterate in sorted order -- `set` iteration order is PYTHONHASHSEED
# dependent, which made the setdefault first-wins attribution
# non-deterministic across processes (T4 evidence: CampaignScore flip).
for c in sorted(all_classes):
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

PLACEHOLDER_RE = re.compile(r'^(vtable\d*|vt_?\d+|.*_field_0x[0-9A-Fa-f]+.*|field_.*|__pad.*|__align.*|align_.*|q[0-9A-F]{3}.*|u(?:8|16|32|64)_[0-9A-F]+)$')
# member_lookup src markers written by later evidence campaigns (ctor write-map
# adjudications, e.g. G16 focus/owner) -- these OUTRANK no-evidence member_types
# names, which are CSP-era bulk-sync residue (audit 2026-09-21: 8,771 no-evidence
# mt offsets, 453 name conflicts, 176 sitting on adjudicated offsets).
ADJUDICATED_SRC_RE = re.compile(r'adjudic|ctor[-_]adjud|g1[5-9]|write[-_]map', re.I)

# N1: the single naming-provenance authority (anchors/name_provenance.json).
# Its ini/yrpp/step6/git-history winners rank ABOVE the 4-tier base below;
# the 4-tier base itself is unchanged for binary-evidence/auto decisions.
sys.path.insert(0, str(Path(__file__).resolve().parent))
from _provenance import (  # noqa: E402
    RANK as PROV_RANK, load_provenance as _prov_load,
    member_source_of as _prov_member,
)
_PROV = _prov_load()


def _prov_winner(cc, o):
    """Higher-than-binary provenance winner name for (cc, o) or None."""
    pv = _prov_member(_PROV, cc, o)
    if not pv:
        return None
    nm = pv.get('name') or ''
    if not nm or PLACEHOLDER_RE.match(nm):
        return None
    if PROV_RANK.get(pv.get('source'), PROV_RANK['placeholder']) \
            <= PROV_RANK['git-history']:
        return nm
    return None


def _is_placeholder(n):
    return bool(PLACEHOLDER_RE.match(n or ''))


# RC1: members emitted WITHOUT a semantic name (placeholder family, or no
# name at all) -- the generator refuses to invent `q%03X` fillers and
# reports these instead (fail loud).  Keyed (class, offset): build_members
# runs more than once per class (fwd-decl pass, emission pass, mtab pass).
unresolved_members = {}


# math.hpp-owned alias types: their CSP-merged "layouts" are call-site
# pollution (CellStruct once carried 59 members and a size of 21,576; the
# true definition is `using CellStruct = Vector2D<short>`). Emit the real
# math.hpp layout (uppercase X/Y/Z match the templates) instead of the junk.
ALIAS_LAYOUT = {
    'CellStruct': (4, [('X', 'short', 2), ('Y', 'short', 2)]),
    'Point2D': (8, [('X', 'int', 4), ('Y', 'int', 4)]),
    'CoordStruct': (12, [('X', 'int', 4), ('Y', 'int', 4), ('Z', 'int', 4)]),
}


def build_members(cc):
    src_cls = canon_of.get(cc, cc)
    if cc in ALIAS_LAYOUT:
        total, fields = ALIAS_LAYOUT[cc]
        out, o = [], 0
        for (n, t, sz) in fields:
            out.append((o, t, n, sz, ''))
            o += sz
        return out, total
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
    # G32 emission policy: pure width fillers (u8_/u16_/u32_/u64_) stay in
    # member_lookup for the rewriters/verifier but do NOT bloat the header.
    mlc = {o: m for o, m in ml_chain_offsets(cc).items()
           if not re.match(r'^u(?:8|16|32|64)_[0-9A-F]+$', (m or {}).get('name', ''))}
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
    # data-quality bound: an offset at/beyond the class layout size is CSP
    # call-site pollution, never a member (audit: 204K junk entries, e.g.
    # TActionClass size=188 carrying 2,067). Bounded out before padding so
    # no __pad gap is inflated to cover garbage either.
    if total:
        members = {o: m for o, m in members.items() if o < total}
    out = []
    out_names = set()
    used = set()
    mt_override = mt_by_cls.get(cc, {})
    for o in sorted(members):
        m = members[o]
        mo = mt_override.get(o) or {}
        mlm = mlc.get(o) or {}
        mt_has_ev = bool(mo.get('evidence'))
        ml_adjudicated = bool(ADJUDICATED_SRC_RE.match(mlm.get('src') or ''))
        # ---- name adjudication (6-tier precedence, N1 + 4-tier base) ----
        # 0. name_provenance ini/yrpp/step6/git-history winners (N1 order:
        #    INI reader key > YRpp > Step-6 > git history)
        # 1. member_types WITH evidence  = binary truth (member_set channel)
        # 2. member_lookup ADJUDICATED   = later evidence campaign result
        # 3. semantic name beats placeholder (either direction)
        # 4. fill order (db > til layouts > mt > mbn > ml) stands on ties
        nm = m['name']
        prov_named = False
        pw = _prov_winner(cc, o)
        if pw:
            nm = pw
            prov_named = True
        elif mo.get('name') and mt_has_ev:
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
        # the padding fill reconstructs the gap (provenance-named members
        # carry real evidence and are never byte noise) ----
        if (o % 4 and (not nm or _is_placeholder(nm)) and not mt_has_ev
                and not ml_adjudicated and not prov_named and not in_vptr(o)):
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
        # X75: the vptr is compiler-generated -- never render vptr vocabulary
        # into the source.  These come from data-side sup-plies; map them to the
        # X70 offset-named pointer convention (ptr_<byte-offset>).
        n = {'vfptr': 'ptr_0', 'vfptr0': 'ptr_0', 'vfptr1': 'ptr_4',
             'vfptr2': 'ptr_8', 'vfptr3': 'ptr_C'}.get(n, n)
        if n and not PLACEHOLDER_RE.match(n):
            n = ident(n, '')
        else:
            n = ''
        if n and n in used:
            # semantic-name collision (two evidence sources claim one
            # name): deterministic dedup suffix keeps the semantic root
            # (RC1: placeholder fill is forbidden)
            n2, i = n + '_d', 2
            while n2 in used or n2 in out_names:
                n2 = '%s_%d' % (n, i)
                i += 1
            n = n2
        if not n:
            # RC1 contract (plan project-optimization.md #8): NO placeholder
            # fill.  A member with no semantic name from any evidence source
            # is dropped here; the gap/padding pass below reconstructs the
            # exact layout span as anonymous __pad filler, and the fact
            # lands in the unresolved report (process exits non-zero).
            unresolved_members.setdefault(
                (cc, o), {'class': cc, 'offset': o,
                          'size': m.get('size') or 4, 'type': t,
                          'orig_name': nm or '',
                          'reason': 'no semantic member name in any source'})
            continue
        sz = mo.get('size') if mt_has_ev else m['size']
        if n in out_names:
            # G32: O(1) incremental name-set — the old `{e[2] for e in out}`
            # per-iteration rebuild was O(M^2) per class and turned dense
            # classes (10k+ registered members) into hours.
            base = n
            n2, i = base + '_d', 2
            while n2 in used or n2 in out_names:
                n2 = '%s_%d' % (base, i)
                i += 1
            n = n2
        used.add(n)
        out.append((o, t, n, sz, m['name'] or ''))
        out_names.add(n)
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
NAME_MAP = {}  # G42.57ax: {class: {til member name: cpp member name}}
_ident_counts = {}
for cc in canon_keys:
    _n = ident(canon_of.get(cc, cc), canon_of.get(cc, cc))
    if _n in mathenums_names:
        emitted_ident[cc] = None  # math/enums headers own the name
        continue
    if not re.match(r'^[A-Za-z_]\w*$', _n or ''):
        # unnameable class (e.g. the literal '?' attribution-loss bucket):
        # suppress from emission entirely -- never emit an illegal name
        emitted_ident[cc] = None
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
#
# Inheritance edge = layouts.parent ONLY (ctor-verified main chain, own-start
# invariant). db['direct_bases'] is the RTTI mixin sub-object list
# (TechnoClass -> [Flasher, Radio, Stage]) -- declaring it as public bases
# re-lays-out the object per MSVC MI rules and breaks offsets (G35.2 ruling).
DROP_BASES = {'IUnknown'}  # real COM root: pure virtuals -> abstract C2259 /
                           # AddRef/Release override-mismatch C2555
bases_map = {}
for cc in canon_keys:
    if emitted_ident.get(cc) is None:
        continue
    _src = canon_of.get(cc, cc)
    _lp = (layouts.get(_src) or {}).get('parent')
    bs = []
    if _lp:
        cb = canon(_lp) or _lp
        dep = by_ident.get(ident(cb, cb))
        bn = (emitted_ident.get(dep) if dep else None) or ident(cb, cb)
        if cb not in DROP_BASES and bn not in DROP_BASES:
            if dep is None or emitted_ident.get(dep) is not None:
                if bn in all_idents or cb in mathenums_names \
                        or ident(cb, cb) in all_idents:
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
    lines.append('class %s;' % _n)
lines.append('')
if minimal_defs:
    lines.append('// minimal vfptr-holder definitions for referenced-but-undefined bases')
    lines.append('// (mechanical, t14 minimal-struct precedent)')
    for _n in minimal_defs:
        lines.append('class %s { public: void* ptr_0; };' % _n)  # X75: vptr slot, compiler-owned name-free
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
    hdr = 'class ' + emitted_ident[cc]
    if bases:
        hdr += ' : ' + ', '.join('public ' + b for b in bases)
    hdr += ' {'
    lines.append(hdr)
    lines.append('public:')
    # own-region filter: with a resolvable base, layouts.offsets are
    # whole-object absolute coordinates INCLUDING the base-class region --
    # re-declaring inherited members in the derived class would re-layout
    # the object. Emit only [base_size, size); the base sub-object is
    # provided by the inheritance edge.
    base_end = 0
    for b in bases:
        _dep = name2cc.get(b)
        _src = canon_of.get(_dep, _dep) if _dep else None
        _bsz = (layouts.get(_src) or {}).get('size') \
            or (db.get(_src) or {}).get('size') or 0
        if not _bsz:
            base_end = 0  # base size unknown -> honest flat fallback
            break
        base_end = max(base_end, _bsz)
    emit_members = [m for m in members
                    if not base_end or m[0] >= base_end]
    # overlap dedup: member_sources (mt+ml) carry overlapping observations
    # (q-placeholder vs semantic name over the same bytes). Semantic-named
    # members claim their span first; q/placeholder members overlapping an
    # occupied span are dropped -- otherwise the sequential layout skips
    # real members and inflates sizeof.
    def _q_rank(m):
        return (m[0], 0 if (m[2] or '') and not m[2].startswith('q')
                and not m[2].startswith('u8_') and not m[2].startswith('u16_')
                and not m[2].startswith('u32_') and not m[2].startswith('ptr_')
                else 1)
    emit_members = sorted(emit_members, key=_q_rank)
    _dedup = []
    for m in emit_members:
        o, t, n, sz, orig = m
        _sz = sz or 4
        if _dedup and o < _dedup[-1][0] + (_dedup[-1][3] or 4):
            continue  # span already claimed by a higher-ranked observation
        _dedup.append(m)
    emit_members = sorted(_dedup, key=lambda m: m[0])
    _cursor = base_end
    _drift = 0
    for (o, t, n, sz, orig) in emit_members:
        cmt = '  // 0x%X' % o + (' (was %s)' % orig if orig and orig != n else '')
        # G42.57ax: record the til-name -> cpp-name rendering decision so a
        # body-side rewriter (apply_canon_names.py) can converge regenerated
        # bodies onto the gate-clean canon identifiers.
        if orig and orig != n and PLACEHOLDER_RE.match(orig):
            NAME_MAP.setdefault(cc, {})[orig] = n
        # alignment guard: mtab type strings are laid out verbatim, so a 4-byte
        # typed member at a non-4-aligned offset silently re-aligns and drifts
        # every following member. Degrade to size-faithful char[N] (same rule
        # as the IDA til hierarchical emitter); semantic type stays in
        # csp_canon_members.json.
        _sz = sz or 4
        _misaligned = (_sz == 4 and o % 4 != 0) or (_sz % 4 != 0 and o % _sz != 0)
        if _misaligned:
            t = 'unsigned char'
            sz = _sz
        # cursor simulation + explicit gap pad (keeps the C++ layout equal to
        # the observed whole-object offsets; sparse observation regions become
        # explicit padding like the til emitter's __tail)
        tb0 = base_of(t)
        _declared = '*' in t or '<' in t or (tb0 in complete_names
                                             or tb0 in defined_idents)
        _eff_align = 1 if (t in ('unsigned char', 'char')
                           or (not _declared)) else (2 if 'short' in t or
                                                     'WORD' in t or '_WORD' in t else 4)
        if total and o >= total:
            print('  OOB-MEMBER %s 0x%X >= size 0x%X (junk observation, dropped)'
                  % (cc, o, total))
            continue
        _cur2 = (_cursor + _eff_align - 1) & ~(_eff_align - 1)
        if o - _cur2 > 0x40000:
            # observation jumps >256KB: junk offset (no size guard possible
            # when the class has no declared size) -- drop, don't pad
            print('  GAP-JUMP %s 0x%X -> 0x%X (dropped)' % (cc, _cur2, o))
            continue
        if o > _cursor:  # pad from the REAL cursor: char[] pads align to 1,
            _gap = o - _cursor  # so filling [cursor, o) is always exact
            _off = _cursor
            while _gap > 0:
                _take = min(_gap, 960)
                lines.append('    char __pad_%X[%d];' % (_off, _take))
                _off += _take
                _gap -= _take
            _cursor = o
        elif o < _cursor:
            _drift += 1  # observation precedes simulated cursor: honest drift
        if n in known_names or n in WIN32_MACROS:
            n = n + '_m'  # member/type or Win32-macro name collision
        elif n in all_idents:
            # member name shadows a canon class name (ctor-address artifact
            # like `unsigned int AbstractClass;` in BombClass) -> any later
            # `AbstractClass *` member inside the same class fails C2143
            n = n + '_m'
        tb = base_of(t)
        if '*' not in t and '<' not in t and tb not in complete_names \
                and tb not in defined_idents:
            # by-value member of a not-yet-defined (fwd-declared only) type:
            # size-faithful char-array fallback (member NAME/offset preserved;
            # semantic type lives in csp_canon_members.json).
            lines.append('    char %s[%d];%s' % (n, sz or 1, cmt))
        else:
            # array-ify: a semantic-typed observation may span more than one
            # element of its declared base type (lastCommands sz=12 int32_t);
            # emitting it as a scalar leaves a hole the dedup no longer fills
            _t = safe_type(t, 'int')
            if '*' not in _t and '<' not in _t:
                # by-value semantic member: the member class's own sizeof may
                # be wrong (cascade), breaking the host layout. Layout fidelity
                # first (t14 ruling): size-faithful char array, semantic type
                # kept in the comment + mtab.
                lines.append('    char %s[%d];  /* %s */%s'
                             % (n, _sz or 1, _t, cmt))
                _cursor = o + (_sz or 4)
                continue
            _bsz = 8 if _t in ('double', 'int64_t', 'uint64_t',
                               'unsigned long long') else                 2 if _t in ('short', 'unsigned short', 'WORD') else                 1 if _t in ('bool', 'char', 'unsigned char', 'BYTE') else                 4 if '*' in _t else 4
            _esz = _sz or 4
            if total and o + _esz > total:
                # junk observation size overflowing the object: clamp to tail
                _esz = total - o
            if _esz > _bsz and _esz % _bsz == 0:
                lines.append('    %s %s[%d];%s' % (_t, n, _esz // _bsz, cmt))
            elif _esz < _bsz or _esz % _bsz != 0:
                lines.append('    char %s[%d];%s' % (n, _esz, cmt))
            else:
                lines.append('    %s %s;%s' % (_t, n, cmt))
        _cursor = o + (_sz or 4)
    if total and _cursor < total:
        _gap = total - _cursor
        _off = _cursor
        while _gap > 0:
            _take = min(_gap, 960)
            lines.append('    char __tail_%X[%d];' % (_off, _take))
            _off += _take
            _gap -= _take
    elif total and _cursor > total:
        print('  DRIFT %s: cursor 0x%X > size 0x%X' % (cc, _cursor, total))
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
        elif mn in all_idents and mn != emitted_ident[cc]:
            # method name shadows a canon class type (ctor-address artifact
            # `void AbstractClass();` in BombClass) -> later
            # `AbstractClass *` members fail C2143
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
# x49 one-definition convergence: generator-owned post-pass so a regen
# reproduces the GAMEMD_DEF_* guards + CRT-typedef fwd drops.
try:
    from gen_x49_universe_guards import (apply_classes_guards,
                                         apply_canon_extern_types)
    _x49log = []
    apply_classes_guards(path=OUT / 'classes.hpp', log=_x49log)
    apply_canon_extern_types(path=OUT / 'classes.hpp', log=_x49log)
    for _l in _x49log:
        print('[x49-regen]', _l)
except ImportError:  # standalone tool absence must not break the regen
    pass
print('classes emitted:', emitted)
Path(ROOT / 'anchors/canon_member_names.json').write_text(
    json.dumps(NAME_MAP, ensure_ascii=False), encoding='utf-8')
print('name map entries:', sum(len(v) for v in NAME_MAP.values()))

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
    mem, tot_m = build_members(cc)
    # alias classes carry their true math.hpp size (layouts/db have none)
    total = tot_m or total
    mtab[cc] = {'size': total,
                'members': {str(o): {'name': n, 'type': t, 'size': sz}
                            for (o, t, n, sz, _orig) in mem}}
Path(ROOT / 'anchors/csp_canon_members.json').write_text(
    json.dumps(mtab, indent=0, ensure_ascii=False), encoding='utf-8')
print('members table written:', len(mtab))

# RC1 contract: placeholders were refused, not emitted -- report them and
# fail loud so the pipeline cannot proceed on invented names.
if unresolved_members:
    rpt_dir = ROOT / '.omo' / 'unresolved_reports'
    rpt_dir.mkdir(parents=True, exist_ok=True)
    rpt = rpt_dir / 'gen_cpp_canon.unresolved.json'
    entries = [unresolved_members[k] for k in sorted(unresolved_members)]
    rpt.write_text(json.dumps({
        '_meta': {'generator': 'gen_cpp_canon.py',
                  'policy': 'rc1-no-placeholder-fill', 'total': len(entries)},
        'unresolved': entries}, indent=1), encoding='utf-8')
    print('UNRESOLVED REPORT: %s (%d members without semantic names; '
          'emitted as anonymous layout filler)' % (rpt, len(entries)))
    print('FAIL LOUD: exit 1 -- supply semantic names (N1 priority chain) '
          'and regenerate.')
    sys.exit(1)
print('DONE')
