#!/usr/bin/env python3
"""canon member lowering v2 (X5): ALL illegal member-access forms -> p->member.

Authority-driven conversion of the mechanical tree's member-access artifacts,
sourced from anchors/member_authority.json (class,offset -> type,size) plus the
class declarations (member names), with a fail-loud ledger for every miss.

Forms handled (all -> typed member access, no casts kept):

  F-QMARK   `this->?` / `recv->?` / `GLOBAL.?[N]`     (site disasm offset ->
            declared/authority member; global-host forms resolve to the symbol
            at the absolute address the binary actually referenced)
  F-FPTR    `(*(SIG (__thiscall **)(..))(EXPR + SLOT))(args)`  -> RECV->Method(args)
            (slot name from the vtable/class method tables; slot fillers are
            registered through the shared _vtable channel)
  F-SUB     `Cls::Method((Cls *)&recv->X, rest)`      -> Cls::Method(&recv->MEMBER, rest)
            (member ensured through _members.ensure_member: the callsite IS
            evidence the object at that offset is a Cls)
  F-CASTD   `*(T *)&recv->X` / `(*((T *)&(recv->X)))` -> recv->MEMBER
  F-PAD     `recv->__pad_XX[Y]` / `recv->m_XX[Y]` / `recv->__pad_XX`
            -> recv->MEMBER at (XX + Y) [disasm-verified when anchored]
  F-CASTA   `(T *)&recv->X`                           -> &recv->MEMBER
  F-THIS    `*(T *)(this + N)` / `*((T *)this + N)` / `(T *)(this + N)` /
            bare `this + N`                           -> this->MEMBER / &this->MEMBER
  F-INDEX   `((T *)recv)[N]` / `(T *)recv[N]`         -> recv->MEMBER
  F-I2P     `(T *)<literal>` (compare context)        -> literal (cast dropped)

Resolution order for (class, offset) -> name:
  1. declared name in the class chain (canon member table / e4 decls / hand
     decls; ancestors via class_db.full_ancestors)
  2. authority (class, offset) type/size -> width/class-typed filler member
     registered through the shared registry (member_types + member_lookup +
     signals._member_by_name) -- the same three stores register_offset_members
     and _members.ensure_member maintain
  3. miss -> fail-loud ledger entry (class/offset/site), the form is NOT
     converted and NOT silently guessed

Usage:
  python tools/csp_export/canon_member_lowering.py                 # dry census
  python tools/csp_export/canon_member_lowering.py --apply         # apply
  python tools/csp_export/canon_member_lowering.py --file e4/AudioClass_e4.cpp
  python tools/csp_export/canon_member_lowering.py --forms F-PAD,F-THIS

Artifacts (evidence/optimization/x5):
  x5_census.json / x5_apply_stats.json  stats + capped (20k) ledger
  x5_ledger_full_{census,apply}.jsonl   FULL deduped ledger (uncapped)
  x5_ledger_summary_{census,apply}.json reason (x form) counts
"""
import io
import json
import os
import re
import sys
import time
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools' / 'csp_export'))

APPLY = '--apply' in sys.argv
ONLY_FILE = None
if '--file' in sys.argv:
    ONLY_FILE = sys.argv[sys.argv.index('--file') + 1].replace('\\', '/')
ONLY_FORMS = None
if '--forms' in sys.argv:
    ONLY_FORMS = set(sys.argv[sys.argv.index('--forms') + 1].split(','))
EVID = ROOT / '.omo' / 'evidence' / 'optimization' / 'x5'
EVID.mkdir(parents=True, exist_ok=True)
X5DIR = ROOT / '.omo' / 'x5'

SKIP_PARTS = ('raw_decomp', 'csp_canon', '_generated')
NUM = r'(?:0x[0-9A-Fa-f]+|\d+)'
ID = r'[A-Za-z_]\w*'
GLOB = r'(?:g_|dword_|stru_|byte_|word_|flt_|dbl_|DataGlobal_|g_abs_)[A-Za-z0-9_]*'
# offset-encoded member names: __pad_XX, m_XX, q0XX/qXX, u32_XX, ptr_XX,
# tail_XX, <Cls>_field_0xNN (all suffix-hex = byte offset; index adds bytes)
PADN = (r'(?:__pad_[0-9A-Fa-f]+|m_[0-9A-Fa-f]+|q[0-9A-Fa-f]{2,4}|'
        r'u(?:8|16|32|64)_[0-9A-Fa-f]+|ptr_[0-9A-Fa-f]+|__?tail_[0-9A-Fa-f]+|'
        r'[A-Za-z_]\w*_field_0x[0-9A-Fa-f]+)')
# cast type atom (primitive or class, optionally qualified)
CTY = (r'(?:unsigned\s+(?:int|short|char|long)|signed\s+(?:int|short|char)|'
       r'int|char|short|long|float|double|bool|BOOL|void|_BYTE|_WORD|_DWORD|'
       r'_QWORD|__int8|__int16|__int32|__int64|uint8_t|uint16_t|uint32_t|'
       r'int8_t|int16_t|int32_t|size_t|[A-Za-z_]\w*(?:::\w+)*)')
MEMBER_EXPR = (r'(?<![\w.>])(?:this|[A-Za-z_]\w*)->(?:[\w]+(?:\[[^\]]*\])?(?:->\w+)*)')

# ---------------------------------------------------------------- data load
print('loading tables...', flush=True)


def _J(p):
    return json.loads(Path(p).read_text(encoding='utf-8'))


AUTH_RAW = _J(ROOT / 'anchors' / 'member_authority.json')['members']
AUTH = {}
AUTH_META = AUTH_RAW.get('meta') if isinstance(AUTH_RAW.get('meta'), dict) else {}
for _k, _v in AUTH_RAW.items():
    if not isinstance(_v, dict):
        continue
    _cls = _v.get('class')
    _off = _v.get('offset')
    if _cls is None or _off is None:
        continue
    AUTH[(str(_cls).lower(), int(_off))] = _v

MTAB = _J(ROOT / 'anchors' / 'csp_canon_members.json')
CDB = _J(ROOT / 'anchors' / 'class_db.json')['classes']
ANC = {}
for _c, _v in CDB.items():
    _fa = [a for a in (_v or {}).get('full_ancestors') or []
           if isinstance(a, str) and a != _c]
    if _fa:
        ANC[_c.lower()] = _fa


def _parse_decl_members(path, skip=()):
    """class/struct body -> {cls_lower: {off: (name, decl_type)}} from
    `// 0xNN` / `// +0xNN` offset comments."""
    out = {}
    try:
        t = path.read_text(encoding='latin-1', errors='replace')
    except OSError:
        return out
    for m in re.finditer(r'(?:class|struct)\s+(\w+)\s*(?::[^{;]*)?\{', t):
        cls = m.group(1).lower()
        if cls in skip:
            continue
        depth, k = 1, m.end()
        while depth and k < len(t):
            if t[k] == '{':
                depth += 1
            elif t[k] == '}':
                depth -= 1
            k += 1
        body = t[m.end():k]
        d = out.setdefault(cls, {})
        for ln in body.split('\n'):
            if ';' not in ln or '(' in ln.split('//')[0]:
                continue
            om = re.search(r'//\s*\+?\s*0x([0-9A-Fa-f]+)', ln)
            if not om:
                continue
            decl = ln.split('//')[0].strip().rstrip(';').strip()
            if not decl or decl.startswith('#'):
                continue
            nm = re.match(
                r'(?:struct\s+|union\s+|const\s+|static\s+)*[\w:<>,*&\s]*?'
                r'\b(\w+)\s*(?:\[[^\]]*\])?\s*$', decl)
            if not nm:
                continue
            d.setdefault(int(om.group(1), 16), (nm.group(1), decl))
    return out


DECL = {}
for _p in sorted((ROOT / 'src' / 'e4' / 'classes').glob('*.hpp')):
    for _c, _d in _parse_decl_members(_p).items():
        DECL.setdefault(_c, {}).update(_d)
for _p in sorted((ROOT / 'src').rglob('*.hpp')):
    _s = str(_p).replace('\\', '/')
    if any(x in _s for x in ('csp_canon', 'raw_decomp', '_generated',
                             '/e4/')):
        continue
    for _c, _d in _parse_decl_members(_p).items():
        _tgt = DECL.setdefault(_c, {})
        for _o, _nv in _d.items():
            _tgt.setdefault(_o, _nv)

# MTAB offsets are strings -> ints; names win over decls
MTABI = {}
for _c, _e in MTAB.items():
    _cl = _c.lower()
    _d = {}
    for _o, _m in ((_e or {}).get('members') or {}).items():
        try:
            _oi = int(_o)
        except (TypeError, ValueError):
            continue
        _d[_oi] = (_m.get('name') or '', _m.get('type') or '',
                   _m.get('size') or 4)
    MTABI[_cl] = _d

# global symbol tables: addr <-> name (multi-name; home file tracked so the
# emitted symbol is one the TU can actually see)
SYM2ADDR = {}
ADDR2SYM = {}
ADDR2SYMS = {}


def _reg_sym(name, addr, home=''):
    if not name:
        return
    SYM2ADDR.setdefault(name, addr)
    ADDR2SYM.setdefault(addr, name)
    lst = ADDR2SYMS.setdefault(addr, [])
    if all(n != name for n, _h in lst):
        lst.append((name, home))


for _n, _a in (_J(ROOT / 'signals.json').get('globals') or {}).items():
    try:
        _ai = int(_a, 16) if isinstance(_a, str) else int(_a)
    except (TypeError, ValueError):
        continue
    _reg_sym(_n, _ai)
for _p in sorted((ROOT / 'src').rglob('*.hpp')):
    _s = str(_p).replace('\\', '/')
    if any(x in _s for x in ('raw_decomp',)):
        continue
    _rel = str(_p.relative_to(ROOT)).replace('\\', '/')
    try:
        _t = _p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    for _ln in _t.split('\n'):
        _m = re.search(r'//\s*data:\s*0x([0-9A-Fa-f]{6,8})', _ln)
        if not _m:
            continue
        _nm = re.match(r'(?:extern\s+)?[\w:<>\*&\s]+?[\s\*]([A-Za-z_]\w*)'
                       r'\s*(?:=|;|\[)', _ln.strip())
        if _nm:
            _reg_sym(_nm.group(1), int(_m.group(1), 16), _rel)
# IDA auto-naming convention: dword_87F7E8 lives at 0x87F7E8
for _p in sorted((ROOT / 'src').rglob('*.h')):
    _rel = str(_p.relative_to(ROOT)).replace('\\', '/')
    try:
        _t = _p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    for _ln in _t.split('\n'):
        _m = re.match(r'\s*extern\s+[\w\s\*]+?\b((?:dword|byte|word|stru|flt|'
                      r'dbl|off)_([0-9A-Fa-f]{6,8}))\s*(?:=|;)', _ln)
        if _m:
            _reg_sym(_m.group(1), int(_m.group(2), 16), _rel)


def pick_symbol(addr, includes):
    """best visible symbol for an absolute address."""
    lst = ADDR2SYMS.get(addr)
    if not lst:
        return None
    for nm, home in lst:
        if home and home in includes:
            return nm
    return lst[0][0]

# CSP global types: addr -> {type,name} (pointee class for global receivers)
GTYPES = _J(ROOT / 'anchors' / 'global_types.json')
GTYPE_BY_NAME = {}
for _a, _e in GTYPES.items():
    if not isinstance(_e, dict):
        continue
    try:
        _ai = int(_a, 16)
    except (TypeError, ValueError):
        continue
    _nm = _e.get('name')
    _ty = _e.get('type')
    if _nm and _nm in SYM2ADDR:
        GTYPE_BY_NAME[_nm] = (_ty or '', _ai)

# site disasm oracle (built by .omo/evidence/optimization/x5/build_site_oracle.py)
SITE = {}
_fp = X5DIR / 'site_disp.json'
if _fp.exists():
    SITE = json.loads(_fp.read_text(encoding='utf-8'))
FUNC_IDX = {}
_fp = X5DIR / 'func_index.json'
if _fp.exists():
    FUNC_IDX = json.loads(_fp.read_text(encoding='utf-8'))
_FDIS_CACHE = {}
_FUNC_KEYS = None


def func_disasm(addr):
    """[(site_addr, text)] for the function containing `addr` (export disasm).

    cache key = function start address: an export file can hold hundreds of
    functions (BuildingClass.cpp = 297), so a file-keyed cache returns the
    first-queried function's segment for every later query -- silently
    degrading every back_disp/inst_disp fallback to a wrong instruction
    window (found via the X5 building.cpp F-SUB miss forensics)."""
    global _FUNC_KEYS
    if not SITE or not FUNC_IDX:
        return []
    if _FUNC_KEYS is None:
        _FUNC_KEYS = sorted((int(k, 16), k) for k in FUNC_IDX)
    a = int(addr)
    import bisect
    i = bisect.bisect_right([k for k, _ in _FUNC_KEYS], a) - 1
    if i < 0:
        return []
    key = _FUNC_KEYS[i][1]
    if key is None:
        return []
    if key in _FDIS_CACHE:
        return _FDIS_CACHE[key]
    fi = FUNC_IDX[key]
    f = fi['file']
    out = []
    try:
        t = (ROOT / f).read_text(encoding='utf-8', errors='replace')
    except OSError:
        _FDIS_CACHE[key] = out
        return out
    i = t.find('addr=0x%08X' % int(key, 16))
    if i < 0:
        i = t.find('addr=0x' + key)
    if i < 0:
        _FDIS_CACHE[key] = []
        return []
    seg = t[i:i + 200000]
    for ln in seg.split('\n'):
        m = re.match(r'^//\s+([0-9A-Fa-f]{4,8}):\s(.*)$', ln)
        if m:
            out.append((int(m.group(1), 16), m.group(2)))
        elif '---- Hex-Rays ----' in ln:
            break
    _FDIS_CACHE[key] = out
    return out


def _disp_of_memop(txt):
    m = re.search(r'\[\s*([a-z]{2,3})((?:\s*[+\-]\s*[0-9A-Fa-f]+h?)'
                  r'(?:\s*[+\-]\s*[a-z]{2,3}(?:\s*\*\s*\d+)?)?'
                  r')\s*\]', txt, re.I)
    if not m:
        return None, None, False
    base = m.group(1).lower()
    rest = m.group(2)
    has_index = bool(re.search(r'[a-z]{2,3}\s*\*\s*\d+', rest, re.I))
    dm = re.search(r'([+\-])\s*([0-9A-Fa-f]+)h?\b', rest)
    v = None
    if dm:
        v = int(dm.group(2), 16)
        if dm.group(1) == '-':
            v = -v
    return base, v, has_index


def _dis_index(dis, a):
    for i, (ia, _t) in enumerate(dis):
        if ia == a:
            return i
    for i, (ia, _t) in enumerate(dis):
        if ia > a:
            return i
    return len(dis)


def site_abs_symbol(site, base_addr, span=0x20000):
    """global symbol referenced by an instruction near `site`, whose address
    lies in [base_addr, base_addr+span] -- the absolute-address access form
    (`mov ecx, dword_A8ED84` for `GLOBAL.?[N]`)."""
    dis = func_disasm(site)
    if not dis:
        return None
    idx = _dis_index(dis, site)
    for i in range(min(idx, len(dis) - 1), max(0, idx - 40) - 1, -1):
        ia, txt = dis[i]
        for m in re.finditer(r'\b([A-Za-z_]\w*)\b', txt):
            nm = m.group(1)
            a = SYM2ADDR.get(nm)
            if a is not None and base_addr <= a <= base_addr + span:
                return nm
    return None


def back_disp(addr, max_back=40):
    """Offset of the member access anchored at `addr` (export disasm).

    - instruction at the anchor carries the displacement -> exact
    - anchor is a call: the thiscall receiver/arg is in ecx -- nearest
      preceding write to ecx is the object load (lea ecx, [X+DISP])
    - otherwise: nearest preceding non-stack memory op with a displacement
    Returns (disp, site) or None."""
    dis = func_disasm(addr)
    if not dis:
        return None
    a = int(addr)
    idx = _dis_index(dis, a)
    if idx < len(dis) and dis[idx][0] == a:
        _b, v, hi = _disp_of_memop(dis[idx][1])
        if v is not None and not hi:
            return v, a
    is_call = idx < len(dis) and dis[idx][1].startswith('call')
    if is_call:
        # thiscall receiver chain: ecx <- REG <- [this+DISP]
        reg = 'ecx'
        for _hop in range(4):
            found = None
            for i in range(idx - 1, max(0, idx - max_back) - 1, -1):
                ia, txt = dis[i]
                m = re.match(r'(?:lea|mov)\s+' + reg + r'\s*,\s*(.+)$', txt)
                if not m:
                    continue
                found = (i, ia, txt, m.group(1).split(';')[0].strip())
                break
            if not found:
                return None
            i, ia, txt, src = found
            m2 = re.fullmatch(r'([a-z]{2,3})', src)
            if m2 and m2.group(1) not in ('esp', 'ebp'):
                reg = m2.group(1)
                idx = i
                continue
            base, v, hi = _disp_of_memop(txt)
            if base in ('esp', 'ebp') or hi:
                return None
            if v is not None:
                return v, ia
            if base:
                return 0, ia   # ecx = [reg] -> member at offset 0
            return None
        return None
    for i in range(idx - 1, max(0, idx - max_back) - 1, -1):
        ia, txt = dis[i]
        if txt.startswith(('call ', 'jmp ', 'ret', 'jz', 'jnz', 'jl', 'jle',
                           'jg', 'jge', 'ja', 'jb', 'jbe', 'jae', 'jns',
                           'js ', 'loop')):
            continue
        base, v, hi = _disp_of_memop(txt)
        if base in ('esp', 'ebp') or hi or v is None:
            continue
        return v, ia
    return None


def inst_disp(addr):
    """(disp, has_index) of the instruction at `addr` (export disasm)."""
    e = SITE.get('%08X' % int(addr))
    if not e or 'd' not in e:
        return None
    return e['d'], bool(e.get('i'))


# --------------------------------------------------------------- registry
import _members  # noqa: E402


SUPPLIED = {}   # (cls_lower, off) -> (name, ctype) supplied this run


def supply_member(cls, off, ctype, size, evidence, name=None):
    """Register a member in the shared three stores (idempotent)."""
    if name is None:
        name = ctype + '_' + format(off, 'X') if '*' not in ctype and \
            re.match(r'^[A-Z]\w*$', ctype) else None
    if name is None:
        w = size or 4
        pfx = {1: 'u8', 2: 'u16', 4: 'u32', 8: 'u64'}.get(w, 'u32')
        name = '%s_%X' % (pfx, off)
    SUPPLIED.setdefault((cls.lower(), off), (name, ctype))
    if _REG is not None:
        # keep the live registry view in sync (the next iteration / process
        # must see the supplied name through the registry layer)
        _REG.setdefault(cls.lower(), {}).setdefault(off, (name, ctype))
    if not APPLY:
        return name
    ml = _members._load()[1]
    ent = (ml.setdefault(cls, {})).get(str(off))
    if ent and ent.get('name'):
        return ent['name']
    ml[cls][str(off)] = {'name': name, 'type': ctype, 'size': size or 4,
                         'src': evidence}
    _members._mt['%s+0x%X' % (cls, off)] = {
        'name': name, 'type': ctype, 'size': size or 4,
        'confidence': 'ANCHORED', 'evidence': evidence}
    (_members._sg.setdefault('_member_by_name', {})
     .setdefault(cls, {}))[name] = off
    _members._dirty = True
    return name


def chain(cls):
    seen = [cls]
    for a in ANC.get(cls.lower(), []):
        if a not in seen:
            seen.append(a)
    return seen


PH_NAME = re.compile(
    r'^(?:__pad_|q[0-9A-Fa-f]{2,4}$|m_[0-9A-Fa-f]+$|u(?:8|16|32|64)_[0-9A-Fa-f]+$|'
    r'ptr_[0-9A-Fa-f]+$|.*_field_0x[0-9A-Fa-f]+$|tail_[0-9A-Fa-f]+$|'
    r'vfptr\d*$|vtable\d+$|sub_[0-9A-Fa-f]+$|g_[0-9A-Fa-f]{6,8}$)')


def _is_ph_name(nm):
    return bool(nm) and bool(PH_NAME.match(nm))


_REG = None


def _refresh_name_layer():
    """drop the registry snapshot so the next decl_name rebuilds it from the
    live member_lookup (sees ensure_member-supplied names)."""
    global _REG
    _REG = None


def _registry():
    """member_lookup registry as a name layer (persists X5 supplies across
    runs -- without it, supplied names are invisible to the next run and the
    lowering churns names instead of converging)."""
    global _REG
    if _REG is None:
        _REG = {}
        try:
            ml = _members._load()[1] or {}
        except Exception:
            ml = {}
        for c, members in ml.items():
            d = _REG.setdefault(c.lower(), {})
            for o, e in (members or {}).items():
                if not isinstance(e, dict) or not e.get('name'):
                    continue
                try:
                    oi = int(o)
                except (TypeError, ValueError):
                    continue
                d.setdefault(oi, (e['name'], e.get('type') or ''))
    return _REG


def decl_name(cls, off):
    best = None
    for c in chain(cls):
        cl = c.lower()
        for d in (MTABI.get(cl), DECL.get(cl), _registry().get(cl)):
            if d and off in d and d[off][0]:
                nm, ty = d[off][0], d[off][1]
                if not _is_ph_name(nm):
                    return nm, ty
                if best is None:
                    best = (nm, ty)
    if best is None:
        for c in chain(cls):
            s = SUPPLIED.get((c.lower(), off))
            if s:
                return s[0], s[1]
    return best if best else (None, None)


def _alias_names(name):
    """IDA-til spelling -> canon spelling (vfptr/vfptrN -> vtableN)."""
    yield name
    m = re.fullmatch(r'vfptr(\d*)', name)
    if m:
        k = int(m.group(1) or '0') + 1
        yield 'vtable%d' % k


def decl_off_by_name(cls, name):
    """name -> offset over the same three stores decl_name reads (MTABI /
    DECL / registry). Registry symmetry matters: names supplied by earlier X5
    runs (e.g. AudioClass u32_F8) live only in member_lookup; without this
    layer the name->offset direction missed them and fell through to the
    disasm heuristic."""
    for nm in _alias_names(name):
        for c in chain(cls):
            cl = c.lower()
            for d in (MTABI.get(cl), DECL.get(cl), _registry().get(cl)):
                if not d:
                    continue
                for o, v in d.items():
                    if v[0] == nm:
                        return o
    return None


def auth_entry(cls, off):
    for c in chain(cls):
        e = AUTH.get((c.lower(), off))
        if e:
            return e
    return None


PRIM_T = ('int', 'char', 'float', 'double', 'short', 'long', 'unsigned',
          'bool', 'BOOL', 'uint8_t', 'uint16_t', 'uint32_t', 'int8_t',
          'int16_t', 'int32_t', 'void', 'size_t')


def _plan_name(cls, off, cast_type):
    """would-be name + ctype + size (no registry write)."""
    e = auth_entry(cls, off)
    if e:
        ty = e.get('type')
        size = e.get('size')
        if ty:
            base = str(ty).rstrip('* ').strip()
            if '*' in str(ty):
                return ('ptr_%X' % off, base + ' *', 4, 'auth')
            if re.match(r'^[A-Za-z_]\w*$', base) and base not in PRIM_T:
                return (base + '_' + format(off, 'X'), base, size or 4, 'auth')
            if re.match(r'^[A-Za-z_]\w*$', base):
                w = size or 4
                pfx = {1: 'u8', 2: 'u16', 4: 'u32', 8: 'u64'}.get(w, 'u32')
                return ('%s_%X' % (pfx, off), base, w, 'auth')
        if size:
            pfx = {1: 'u8', 2: 'u16', 4: 'u32', 8: 'u64'}.get(size, 'u32')
            return ('%s_%X' % (pfx, off), 'unsigned int', size, 'auth-width')
    if cast_type:
        base = cast_type.rstrip('* ').strip()
        if re.match(r'^[A-Z]\w*$', base):
            return (base + '_' + format(off, 'X'), base, 4, 'cast')
        w = WIDTHS.get(base, 4)
        pfx = {1: 'u8', 2: 'u16', 4: 'u32', 8: 'u64'}.get(w, 'u32')
        return ('%s_%X' % (pfx, off), base, w, 'cast')
    return (None, None, None, 'auth-miss')


def resolve_member(cls, off, cast_type=None, site=None, dry=False):
    """(name, how) for (cls, off) or (None, reason)."""
    if cls is None:
        return None, 'no-class'
    nm, _ty = decl_name(cls, off)
    if nm:
        return nm, 'decl'
    name, ctype, size, how = _plan_name(cls, off, cast_type)
    if name is None:
        return None, how
    if dry:
        return name, how + '-dry'
    nm2 = supply_member(cls, off, ctype, size,
                        'X5 %s (cls %s)' % (how, cls), name=name)
    if nm2:
        return nm2, how
    return None, how + '-nosupply'


# --------------------------------------------------------------- receivers
GLOB_PT = {}   # global name -> pointee class (CSP name-derived)


def _known_class(c):
    return bool(c) and (c in CDB or c.lower() in MTABI or c.lower() in DECL)


def is_global(name):
    """global-object receiver: IDA-style prefix or a known global symbol."""
    return bool(re.match(r'^' + GLOB + r'$', name)) or name in SYM2ADDR


def _class_from_csp_name(nm, ty):
    """pointer-typed CSP global whose name carries the pointee class."""
    if not (ty or '').strip().endswith('*'):
        return None
    s = re.sub(r'^(?:g_abs_|DataGlobal_|g_|dword_|stru_|byte_|word_)', '', nm)
    for suf in ('_Instance', '_Player', '_Singleton', '_Ptr', '_Host',
                '_Manager', '_Config', '_State', '_Class'):
        if s.endswith(suf):
            s = s[:-len(suf)]
            break
    else:
        return None
    s = re.sub(r'^(?:g_abs_|DataGlobal_|g_)', '', s)
    s = re.sub(r'[0-9A-F]{6,8}$', '', s)
    return s if _known_class(s) else None


def global_class(name):
    """class of the object a global receiver denotes (value or pointee)."""
    addr = SYM2ADDR.get(name)
    if addr is not None:
        e = GTYPES.get('0x%X' % addr)
        if isinstance(e, dict):
            ty = (e.get('type') or '').strip()
            base = ty.rstrip('* ').strip()
            if ty.endswith('*') and _known_class(base):
                return base
            c = _class_from_csp_name(e.get('name') or '', ty)
            if c:
                return c
    e = GTYPE_BY_NAME.get(name)
    if e:
        ty, _a = e
        base = (ty or '').rstrip('* ').strip()
        if _known_class(base):
            return base
    return None


# ------------------------------------------------------------- text utils
def mask_text(seg):
    """Same-length mask: comment/string content -> spaces."""
    out = []
    i = 0
    n = len(seg)
    st = 0
    while i < n:
        c = seg[i]
        if st == 0:
            if c == '/' and i + 1 < n and seg[i + 1] == '/':
                st = 1
                out.append(' ')
                i += 1
                continue
            if c == '/' and i + 1 < n and seg[i + 1] == '*':
                st = 2
                out.append(' ')
                i += 1
                continue
            if c == '"':
                st = 3
                out.append(' ')
                i += 1
                continue
            if c == "'":
                st = 4
                out.append(' ')
                i += 1
                continue
            out.append(c)
            i += 1
        elif st == 1:
            out.append(' ')
            if c == '\n':
                st = 0
            i += 1
        elif st == 2:
            out.append(' ')
            if c == '*' and i + 1 < n and seg[i + 1] == '/':
                out.append(' ')
                i += 2
                st = 0
                continue
            i += 1
        elif st == 3:
            if c == '\\':
                out.append(' ')
                out.append(' ')
                i += 2
                continue
            out.append(' ')
            if c == '"':
                st = 0
            i += 1
        else:
            if c == '\\':
                out.append(' ')
                out.append(' ')
                i += 2
                continue
            out.append(' ')
            if c == "'":
                st = 0
            i += 1
    return ''.join(out)


def sub_span(seg, m, repl):
    """replace seg[m.start():m.end()] with repl (m from masked seg)."""
    return seg[:m.start()] + repl + seg[m.end():]


def split_args2(argtext):
    """top-level comma split; `->` is an operator, not a bracket (the shared
    _vtable.split_args miscounts `>` in `->` as a closing bracket)."""
    args = []
    d = 0
    cur = []
    i = 0
    n = len(argtext)
    while i < n:
        ch = argtext[i]
        if ch in ('"', "'"):
            q = ch
            cur.append(ch)
            i += 1
            while i < n:
                cur.append(argtext[i])
                if argtext[i] == '\\':
                    i += 1
                    if i < n:
                        cur.append(argtext[i])
                elif argtext[i] == q:
                    break
                i += 1
            i += 1
            continue
        if ch in '(<[':
            d += 1
        elif ch in ')>]':
            if ch == '>' and i > 0 and argtext[i - 1] == '-':
                pass   # arrow operator
            else:
                d -= 1
        if ch == ',' and d == 0:
            args.append(''.join(cur).strip())
            cur = []
            i += 1
            continue
        cur.append(ch)
        i += 1
    tail = ''.join(cur).strip()
    if tail:
        args.append(tail)
    return args


def bad_span(seg, m):
    return '/*' in seg[m.start():m.end()] or '//' in seg[m.start():m.end()]


# --------------------------------------------------------------- context
class Ctx:
    def __init__(self, cls, addr, env, file, seg, base_line, includes=()):
        self.cls = cls
        self.addr = addr
        self.env = env
        self.file = file
        self.seg = seg
        self.base_line = base_line   # 1-based line of seg[0]
        self.includes = set(includes)

    def line_of(self, pos):
        return self.base_line + self.seg.count('\n', 0, pos)

    def site_of(self, pos):
        """nearest /*0xADDR*/ anchor on the same line."""
        ls = self.seg.rfind('\n', 0, pos) + 1
        le = self.seg.find('\n', pos)
        if le < 0:
            le = len(self.seg)
        m = re.search(r'/\*0x([0-9A-Fa-f]{6,8})\*/', self.seg[ls:le])
        if m:
            return int(m.group(1), 16)
        return None

    def recv_class(self, recv):
        if recv in ('this', '*this'):
            return self.env.get('this') or self.cls
        if recv in self.env:
            return self.env[recv]
        if is_global(recv):
            return global_class(recv)
        if recv in self.env.get('__locals__', ()):
            return None   # untyped local shadowing a member name: fail loud
        # bare member reference: `Type`, `DamageFireAnims` inside a method --
        # the member's declared class types the receiver
        cls = self.env.get('this') or self.cls
        if cls:
            for c in chain(cls):
                d = MTABI.get(c.lower())
                if d:
                    for o, v in d.items():
                        if v[0] == recv and v[1]:
                            t = v[1].rstrip('* ').strip()
                            if _known_class(t):
                                return t
                d = DECL.get(c.lower())
                if d:
                    for o, v in d.items():
                        if v[0] == recv and v[1]:
                            m2 = re.match(r'^(.*?)\b' + re.escape(recv) + r'\b',
                                         v[1])
                            if m2:
                                t = m2.group(1).rstrip('* ').strip()
                                if _known_class(t):
                                    return t
        return None


LEDGER = []
STATS = Counter()
SUPPLIED = Counter()


def ledger_add(form, ctx, pos, expr, cls, off, reason):
    LEDGER.append({
        'form': form, 'file': ctx.file, 'line': ctx.line_of(pos),
        'site': ('0x%08X' % ctx.site_of(pos)) if ctx.site_of(pos) else None,
        'expr': expr[:160], 'class': cls, 'offset': off, 'reason': reason})
    STATS[form + '/ledger'] += 1
    STATS['ledger/' + reason] += 1


def name_expr_offset(expr, ctx, pos, cast_type=None, addr_ctx=False):
    """MEMBER_EXPR -> (recv, member_name, off, name) or None.

    off resolution: offset-encoded name -> decl name -> site disasm."""
    m = re.match(r'^(this|[A-Za-z_]\w*)->(.+)$', expr)
    if not m:
        return None
    recv, tail = m.group(1), m.group(2)
    base = tail.split('[')[0].split('->')[0]
    idx = None
    im = re.search(r'\[([^\]]*)\]', tail)
    if im:
        idx = im.group(1).strip()
    cls = ctx.recv_class(recv)
    off = None
    if re.match(r'^' + PADN + r'$', base):
        off = _pad_offset(base, None)
        if off is not None and idx is not None:
            if re.fullmatch(r'\d+', idx):
                off = off + int(idx)
            else:
                return ('varidx', recv, base, cls, off)
    elif idx is not None:
        # indexed base member: element size from the declared member size
        o2 = decl_off_by_name(cls, base) if cls else None
        esz = member_size(cls, base) if cls else None
        if o2 is not None and esz and re.fullmatch(r'\d+', idx):
            off = o2 + int(idx) * esz
    if off is None and cls:
        o2 = decl_off_by_name(cls, base)
        if o2 is not None:
            off = o2
    if off is None:
        site = ctx.site_of(pos)
        if site:
            bd = back_disp(site)
            if bd:
                off = bd[0]
    if cls is None:
        return ('noclass', recv, base, None, off)
    if off is None:
        return ('noff', recv, base, cls, None)
    return ('ok', recv, base, cls, off)


def member_size(cls, name):
    """declared size of member `name` in cls chain (MTAB size)."""
    for c in chain(cls):
        d = MTABI.get(c.lower())
        if d:
            for o, v in d.items():
                if v[0] == name and v[2]:
                    return v[2]
    return None


def member_type_str(cls, name):
    """declared type string of member `name` in cls chain."""
    for c in chain(cls):
        d = MTABI.get(c.lower())
        if d:
            for o, v in d.items():
                if v[0] == name and v[1]:
                    return v[1]
        d = DECL.get(c.lower())
        if d:
            for o, v in d.items():
                if v[0] == name and v[1]:
                    m2 = re.match(r'^(.*?)\b' + re.escape(name) + r'\b', v[1])
                    if m2:
                        return m2.group(1).strip()
    return None


# --------------------------------------------------------------- handlers
def h_qmark(seg, ctx):
    pat = re.compile(r'(?P<recv>(?<![\w.>])(?:this|[A-Za-z_]\w*)|' + GLOB +
                     r')\s*(?P<op>->|\.)\s*\?(?P<idx>\s*\[[^\]]*\])?')
    n = 0
    mask = mask_text(seg)
    out = []
    last = 0
    for m in pat.finditer(mask):
        if bad_span(seg, m):
            continue
        recv, op, idx = m.group('recv'), m.group('op'), m.group('idx')
        pos = m.start()
        site = ctx.site_of(pos)
        cls = ctx.recv_class(recv)
        off = None
        # single-`?` line: instruction at the site is the access itself
        line = seg[seg.rfind('\n', 0, pos) + 1:
                   seg.find('\n', pos) if seg.find('\n', pos) > 0 else len(seg)]
        nq = line.count('?')
        if site:
            d = inst_disp(site)
            if d and not d[1] and nq <= 1:
                off = d[0]
            if off is None:
                bd = back_disp(site)
                if bd:
                    off = bd[0]
        if off is None and is_global(recv):
            # global host: the binary references an absolute symbol at/near
            # the host -- that symbol IS the accessed member
            base = SYM2ADDR.get(recv)
            if base is not None:
                sym = None
                if idx and re.fullmatch(r'\d+', idx.strip('[] ')):
                    sym = pick_symbol(base + int(idx.strip('[] ')),
                                      ctx.includes)
                if sym is None and site:
                    sym = site_abs_symbol(site, base)
                if sym:
                    out.append(seg[last:pos])
                    out.append(sym)
                    last = m.end()
                    n += 1
                    STATS['F-QMARK/globalsym'] += 1
                    continue
        if off is None:
            ledger_add('F-QMARK', ctx, pos, m.group(0), cls, None,
                       'offset-unresolved')
            continue
        nm, how = resolve_member(cls, off, site=site)
        if not nm:
            ledger_add('F-QMARK', ctx, pos, m.group(0), cls, off, how)
            continue
        repl = '%s%s%s' % (recv, op, nm)
        if repl == seg[pos:m.end()]:
            continue
        out.append(seg[last:pos])
        out.append(repl)
        last = m.end()
        n += 1
        STATS['F-QMARK/' + how] += 1
    out.append(seg[last:])
    return ''.join(out), n


FP_OPEN = re.compile(
    r'\*\*\)\s*\((?P<sigargs>[^()]*)\)\s*\)\s*\(\s*(?P<expr>.*?)\s*\+\s*'
    r'(?P<slot>0x[0-9A-Fa-f]+|\d+)\s*\)\s*\)\s*\(')


def _sig_class(sigargs):
    """first parameter type of the dispatch signature, when it names a class."""
    if not sigargs:
        return None
    first = sigargs.split(',')[0].strip()
    m = re.match(r'^(?:struct\s+|const\s+)?([A-Za-z_]\w*)\s*\*+\s*$', first)
    if not m:
        return None
    c = m.group(1)
    if c in ('void', 'int', 'char', 'unsigned', 'long', 'short', 'float',
             'double', 'BOOL'):
        return None
    return c if (c in CDB or c.lower() in MTABI or c.lower() in DECL) else None


def parse_fp_expr(expr, ctx):
    """-> (obj_text, obj_cls, base_off, base_name, sep) or (None,...).

    sep is the receiver separator to emit: '->' pointer, '.' value."""
    s = expr.strip()
    for _ in range(3):
        m = re.match(r'^\*+\s*\(\s*' + CTY + r'\s*\*+\s*\)\s*(.+)$', s)
        if m:
            s = m.group(1).strip()
            continue
        if s.startswith('*') and not s.startswith('**'):
            s = s[1:].strip()
            continue
        break
    s = s.strip('() ')
    # address-of member receiver: &recv->M -- the member VALUE is the object
    mm = re.match(r'^&\s*(this|[A-Za-z_]\w*)->(\w+)\s*$', s)
    if mm:
        recv, base = mm.group(1), mm.group(2)
        cls0 = ctx.recv_class(recv)
        t = member_type_str(cls0, base) if cls0 else None
        if t:
            t2 = t.rstrip('* ').strip()
            if _known_class(t2):
                return '%s->%s' % (recv, base), t2, None, None, '->'
        return None, None, None, None, None
    mm = re.match(r'^(this|[A-Za-z_]\w*)\s*$', s)
    if mm:
        recv = mm.group(1)
        return recv, ctx.recv_class(recv), None, None, '->'
    mm = re.match(r'^(this|[A-Za-z_]\w*|' + GLOB + r')\s*(->|\.)(.+)$', s)
    if mm:
        recv, sep0, tail = mm.group(1), mm.group(2), mm.group(3)
        base = tail.split('[')[0].split('->')[0]
        idx = re.search(r'\[([^\]]*)\]', tail)
        off = None
        cls = ctx.recv_class(recv)
        if idx is not None:
            if re.match(r'^' + PADN + r'$', base):
                off = _pad_offset(base, None)
                if off is not None and re.fullmatch(r'\d+', idx.group(1)):
                    off = off + int(idx.group(1))
                else:
                    off = None
            elif cls:
                o2 = decl_off_by_name(cls, base)
                esz = member_size(cls, base)
                if o2 is not None and esz and \
                        re.fullmatch(r'\d+', idx.group(1)):
                    off = o2 + int(idx.group(1)) * esz
        else:
            if re.match(r'^' + PADN + r'$', base):
                off = _pad_offset(base, None)
            if off is None and cls:
                off = decl_off_by_name(cls, base)
        sep = '.' if (sep0 == '.' and is_global(recv)) else '->'
        if off == 0 or off is None:
            # vptr member of the receiver object itself
            return recv, cls, off, None, sep
        # object lives at recv + off: name it
        nm, how = resolve_member(cls, off)
        if nm:
            return recv, cls, off, nm, sep
        return None, None, off, None, sep
    mm = re.match(r'^(' + GLOB + r')\s*$', s)
    if mm:
        g = mm.group(1)
        return g, global_class(g), None, None, None
    return None, None, None, None, None


def h_fptr(seg, ctx):
    n = 0
    mask = mask_text(seg)
    pos = 0
    while True:
        m = FP_OPEN.search(mask, pos)
        if not m:
            break
        expr = m.group('expr')
        if bad_span(seg, m) or '__thiscall' not in seg[max(0, m.start() - 220):m.start()]:
            pos = m.end()
            continue
        slot = int(m.group('slot'), 0)
        obj, cls, base_off, base_name, sep = parse_fp_expr(expr, ctx)
        if cls is None:
            cls = _sig_class(m.group('sigargs'))
        if obj is None or cls is None:
            ledger_add('F-FPTR', ctx, m.start(), seg[m.start():m.end()],
                       cls, slot, 'receiver-unresolved')
            pos = m.end()
            continue
        try:
            import _vtable
            meth = _vtable.slot_name(cls, slot)
        except Exception:
            meth = None
        if not meth:
            ledger_add('F-FPTR', ctx, m.start(), seg[m.start():m.end()],
                       cls, slot, 'slot-unresolved')
            pos = m.end()
            continue
        call_open = m.end() - 1
        depth, k = 0, call_open
        while k < len(seg):
            if seg[k] == '(':
                depth += 1
            elif seg[k] == ')':
                depth -= 1
                if depth == 0:
                    break
            k += 1
        if k >= len(seg):
            ledger_add('F-FPTR', ctx, m.start(), seg[m.start():m.end()],
                       cls, slot, 'unbalanced')
            pos = m.end()
            continue
        args = seg[call_open + 1:k]
        argl = split_args2(args)
        obj_txt = obj
        if base_off and base_name:
            obj_txt = '%s->%s' % (obj, base_name)
        addr_arg = False
        if argl:
            first = argl[0].strip().strip('() ')
            drop = False
            for cand in (obj_txt, obj):
                if first == cand or first == '&' + cand:
                    drop = True
                    addr_arg = first.startswith('&')
                    break
            if not drop and base_off is not None and \
                    re.match(r'^&?(this|[A-Za-z_]\w*)->', first):
                rr = name_expr_offset(first.lstrip('&'), ctx, m.start())
                if rr and rr[0] == 'ok' and rr[4] == base_off:
                    drop = True
                    addr_arg = first.startswith('&')
            if drop:
                argl = argl[1:]
        if sep == '.' or addr_arg or \
                (sep is None and re.match(r'^' + GLOB + r'$', obj)):
            op = '.'
        else:
            op = '->'
        new = '%s%s%s(%s)' % (obj_txt, op, meth, ', '.join(argl))
        head = seg.rfind('(*(', 0, m.start())
        start = head if head >= 0 and seg[head:m.start()].count('(') >= \
            seg[head:m.start()].count(')') else m.start()
        seg = seg[:start] + new + seg[k + 1:]
        mask = mask_text(seg)
        pos = start + len(new)
        n += 1
        STATS['F-FPTR/ok'] += 1
    return seg, n


SUB_PAT = re.compile(
    r'\b([A-Za-z_]\w*)::([A-Za-z_]\w*)\s*\(\s*\(\s*(' + CTY + r')\s*\*\s*\)'
    r'\s*(?P<opar>\(\s*)?&\s*(?P<mem>' + MEMBER_EXPR + r')')


def _match_end(seg, m):
    """end of a member-cast match: consume one `)` when the pattern ate an
    opening paren (the `(&member)` wrapper)."""
    e = m.end()
    if m.groupdict().get('opar') and seg[e:e + 1] == ')':
        e += 1
    return e


def h_staticsub(seg, ctx):
    n = 0
    mask = mask_text(seg)
    out = []
    last = 0
    for m in SUB_PAT.finditer(mask):
        if bad_span(seg, m):
            continue
        call_cls, _meth, _cty, member = m.group(1), m.group(2), \
            m.group(3), m.group('mem')
        pos = m.start()
        r = name_expr_offset(member, ctx, pos, cast_type=call_cls)
        if r is None or r[0] != 'ok':
            ledger_add('F-SUB', ctx, pos, m.group(0),
                       ctx.recv_class(member.split('->')[0]),
                       r[4] if r else None,
                       r[0] if r else 'parse')
            continue
        _k, recv, base, cls, off = r
        if cls is None:
            ledger_add('F-SUB', ctx, pos, m.group(0), None, off, 'noclass')
            continue
        nm = _members.ensure_member(cls, off, call_cls)
        if not nm:
            ledger_add('F-SUB', ctx, pos, m.group(0), cls, off, 'auth-miss')
            continue
        repl = '%s::%s(&%s->%s' % (call_cls, m.group(2), recv, nm)
        out.append(seg[last:pos])
        out.append(repl)
        last = _match_end(seg, m)
        n += 1
        STATS['F-SUB/ok'] += 1
    out.append(seg[last:])
    return ''.join(out), n


CASTD_PAREN = re.compile(
    r'(?:\*\s*)?\(\s*\(\s*(' + CTY + r')\s*\*+\s*\)\s*&\s*\(\s*'
    r'(?P<mem>' + MEMBER_EXPR + r')\s*\)\s*\)(?P<tail>\s*\[\s*[^\]]+\s*\])?')
CASTD_BARE = re.compile(
    r'(?:\*\s*)?\(\s*\(\s*(' + CTY + r')\s*\*+\s*\)\s*&\s*'
    r'(?P<mem>' + MEMBER_EXPR + r')')


def h_castd(seg, ctx):
    """*(T *)&recv->X  /  (*((T *)&(recv->X)))  -> recv->MEMBER"""
    n = 0
    for pat in (CASTD_PAREN, CASTD_BARE):
        mask = mask_text(seg)
        out = []
        last = 0
        for m in pat.finditer(mask):
            if bad_span(seg, m):
                continue
            cty, member = m.group(1), m.group('mem')
            tail = m.groupdict().get('tail')
            pos = m.start()
            r = name_expr_offset(member, ctx, pos, cast_type=cty)
            if r is None or r[0] != 'ok':
                ledger_add('F-CASTD', ctx, pos, m.group(0),
                           ctx.recv_class(member.split('->')[0]),
                           r[4] if r else None, r[0] if r else 'parse')
                continue
            _k, recv, base, cls, off = r
            if tail:
                # element index on the cast pointer: byte offset into the
                # member -- resolve the interior member or fail loud
                tm = re.match(r'\s*\[\s*(\d+)\s*\]', tail)
                w = WIDTHS.get(cty.strip(), 1)
                if not tm or w != 1:
                    ledger_add('F-CASTD', ctx, pos, m.group(0), cls, off,
                               'tail-index')
                    continue
                off2 = off + int(tm.group(1))
                nm2, how2 = resolve_member(cls, off2, cast_type=cty)
                if not nm2:
                    ledger_add('F-CASTD', ctx, pos, m.group(0), cls, off2,
                               'tail-auth-miss')
                    continue
                out.append(seg[last:pos])
                out.append('%s->%s' % (recv, nm2))
                last = m.end()
                n += 1
                STATS['F-CASTD/tail/' + how2] += 1
                continue
            nm, how = resolve_member(cls, off, cast_type=cty)
            if not nm:
                ledger_add('F-CASTD', ctx, pos, m.group(0), cls, off, how)
                continue
            repl = '%s->%s' % (recv, nm)
            if repl == seg[pos:m.end()]:
                continue
            out.append(seg[last:pos])
            out.append(repl)
            last = m.end()
            n += 1
            STATS['F-CASTD/' + how] += 1
        out.append(seg[last:])
        seg = ''.join(out)
    return seg, n


PAD_IDX = re.compile(
    r'(?P<recv>(?<![\w.>])(?:this|[A-Za-z_]\w*)|' + GLOB +
    r')\s*(?P<op>->|\.)\s*'
    r'(?P<name>' + PADN + r')(?!\w)\s*\[\s*(?P<idx>[^\]]+?)\s*\]')
PAD_BARE = re.compile(
    r'(?P<recv>(?<![\w.>])(?:this|[A-Za-z_]\w*)|' + GLOB +
    r')\s*(?P<op>->|\.)\s*'
    r'(?P<name>' + PADN + r')(?!\w)(?!\s*\[)')


def _pad_offset(base, idx):
    m = re.search(r'_([0-9A-Fa-f]+)$', base)
    if not m:
        m = re.fullmatch(r'q([0-9A-Fa-f]+)', base)
    if not m:
        m = re.search(r'_field_0x([0-9A-Fa-f]+)$', base)
    if not m:
        return None
    off = int(m.group(1), 16)
    if idx is not None:
        if not re.fullmatch(r'\d+', idx):
            return None
        off += int(idx)
    return off


def _pad_convert(seg, ctx, m, n, out, last, kind='idx'):
    recv, op, base, idx = m.group('recv'), m.group('op'), \
        m.group('name'), m.groupdict().get('idx')
    pos = m.start()
    off = _pad_offset(base, idx)
    if off is None:
        ledger_add('F-PAD', ctx, pos, m.group(0), ctx.recv_class(recv),
                   None, 'var-index-or-bad-name')
        return None
    cls = ctx.recv_class(recv)
    site = ctx.site_of(pos)
    d = inst_disp(site) if site else None
    cands = [off]
    if d and not d[1] and d[0] != off:
        cands.append(d[0])   # disasm fallback candidate
    if cls is not None:
        for i, cand in enumerate(cands):
            nm, how = resolve_member(cls, cand, site=site, dry=True)
            if nm:
                if kind == 'bare' and _is_ph_name(nm):
                    # placeholder -> placeholder renames are naming debt (X6),
                    # not form elimination: keep the tree stable
                    STATS['F-PAD/bare-keep-ph'] += 1
                    return None
                if i:
                    STATS['F-PAD/disasm-fallback'] += 1
                nm2, how2 = resolve_member(cls, cand, site=site)
                if nm2:
                    return '%s%s%s' % (recv, op, nm2), how2
        ledger_add('F-PAD', ctx, pos, m.group(0), cls, off,
                   'auth-miss' if len(cands) == 1 else 'both-miss')
        return None
    # global host: absolute address -> named symbol
    if is_global(recv):
        base_addr = SYM2ADDR.get(recv)
        if base_addr is not None:
            for i, cand in enumerate(cands):
                sym = pick_symbol(base_addr + cand, ctx.includes)
                if sym:
                    if i:
                        STATS['F-PAD/disasm-fallback'] += 1
                    return sym, 'globalsym'
            ledger_add('F-PAD', ctx, pos, m.group(0), recv, off,
                       'host-no-symbol')
            return None
    ledger_add('F-PAD', ctx, pos, m.group(0), None, off, 'noclass')
    return None


def h_pad(seg, ctx):
    n = 0
    for pat, kind in ((PAD_IDX, 'idx'), (PAD_BARE, 'bare')):
        mask = mask_text(seg)
        out = []
        last = 0
        for m in pat.finditer(mask):
            if bad_span(seg, m):
                continue
            r = _pad_convert(seg, ctx, m, n, out, last, kind)
            if r is None:
                continue
            nm, how = r
            if nm == seg[m.start():m.end()]:
                continue   # identity (filler name already correct)
            out.append(seg[last:m.start()])
            out.append(nm)
            last = m.end()
            n += 1
            STATS['F-PAD/' + kind + '/' + how] += 1
        out.append(seg[last:])
        seg = ''.join(out)
    return seg, n


CASTA = re.compile(
    r'\(\s*(' + CTY + r')\s*\*+\s*\)\s*(?P<opar>\(\s*)?&\s*'
    r'(?P<mem>' + MEMBER_EXPR + r')')


def h_castaddr(seg, ctx):
    """(T *)&recv->X -> &recv->MEMBER (member-cast, cast dropped)."""
    n = 0
    mask = mask_text(seg)
    out = []
    last = 0
    for m in CASTA.finditer(mask):
        if bad_span(seg, m):
            continue
        cty, member = m.group(1), m.group('mem')
        pos = m.start()
        r = name_expr_offset(member, ctx, pos, cast_type=cty)
        if r is None or r[0] != 'ok':
            ledger_add('F-CASTA', ctx, pos, m.group(0),
                       ctx.recv_class(member.split('->')[0]),
                       r[4] if r else None, r[0] if r else 'parse')
            continue
        _k, recv, base, cls, off = r
        nm, how = resolve_member(cls, off, cast_type=cty)
        if not nm:
            ledger_add('F-CASTA', ctx, pos, m.group(0), cls, off, how)
            continue
        repl = '&%s->%s' % (recv, nm)
        if repl == seg[pos:m.end()]:
            continue
        out.append(seg[last:pos])
        out.append(repl)
        last = _match_end(seg, m)
        n += 1
        STATS['F-CASTA/' + how] += 1
    out.append(seg[last:])
    return ''.join(out), n


THIS_FORMS = [
    ('deref1', re.compile(
        r'\*\s*\(\s*(' + CTY + r')\s*\*\s*\)\s*\(\s*this\s*\+\s*(' + NUM + r')\s*\)')),
    ('deref2', re.compile(
        r'\*\s*\(\s*\(\s*(' + CTY + r')\s*\*\s*\)\s*this\s*\+\s*(' + NUM + r')\s*\)')),
    ('cast1', re.compile(
        r'\(\s*(' + CTY + r')\s*\*\s*\)\s*\(\s*this\s*\+\s*(' + NUM + r')\s*\)')),
    ('cast2', re.compile(
        r'\(\s*(' + CTY + r')\s*\*\s*\)\s*\(\s*\(\s*char\s*\*\s*\)\s*this\s*\+\s*(' + NUM + r')\s*\)')),
    ('cast3', re.compile(
        r'\(\s*(' + CTY + r')\s*\*\s*\)\s*this\s*\+\s*(' + NUM + r')')),
    ('bare', re.compile(
        r'(?<![\w\*])\bthis\s*\+\s*(' + NUM + r')(?!\s*\))(?!\s*[;,\[])')),
]
WIDTHS = {'_BYTE': 1, 'char': 1, 'unsigned char': 1, '_WORD': 2,
          'short': 2, 'unsigned short': 2, '_DWORD': 4, 'int': 4,
          'unsigned int': 4, 'long': 4, 'float': 4, 'BOOL': 4,
          'double': 8, '_QWORD': 8, 'unsigned long long': 8}


def h_this_arith(seg, ctx):
    n = 0
    for kind, pat in THIS_FORMS:
        mask = mask_text(seg)
        out = []
        last = 0
        for m in pat.finditer(mask):
            if bad_span(seg, m):
                continue
            pos = m.start()
            if kind in ('deref2', 'cast3'):
                cty = m.group(1)
                off = int(m.group(2), 0) * WIDTHS.get(cty.strip(), 4)
            elif kind == 'bare':
                off = int(m.group(1), 0)
            else:
                cty = m.group(1)
                off = int(m.group(2), 0)
            # disasm verification for bare/ambiguous
            site = ctx.site_of(pos)
            if site and kind == 'bare':
                d = inst_disp(site)
                if d and not d[1]:
                    off = d[0]
                else:
                    bd = back_disp(site)
                    if bd:
                        off = bd[0]
            cls = ctx.recv_class('this')
            if cls is None:
                ledger_add('F-THIS', ctx, pos, m.group(0), None, off,
                           'noclass')
                continue
            cty = m.group(1) if kind != 'bare' else None
            nm, how = resolve_member(cls, off, cast_type=cty)
            if not nm:
                ledger_add('F-THIS', ctx, pos, m.group(0), cls, off, how)
                continue
            if kind.startswith('deref'):
                repl = 'this->%s' % nm
            else:
                repl = '&this->%s' % nm
            out.append(seg[last:pos])
            out.append(repl)
            last = m.end()
            n += 1
            STATS['F-THIS/%s/%s' % (kind, how)] += 1
        out.append(seg[last:])
        seg = ''.join(out)
    return seg, n


PTHIS_FORMS = [
    ('deref1', re.compile(
        r'\*\s*\(\s*(' + CTY + r')\s*\*+\s*\)\s*\(\s*'
        r'(?:\(\s*char\s*\*\s*\)\s*)?([a-z]\w*)\s*\+\s*(' + NUM + r')\s*\)')),
    ('deref2', re.compile(
        r'\*\s*\(\s*\(\s*(' + CTY + r')\s*\*+\s*\)\s*([a-z]\w*)\s*\+\s*'
        r'(' + NUM + r')\s*\)')),
    ('cast1', re.compile(
        r'\(\s*(' + CTY + r')\s*\*+\s*\)\s*\(\s*'
        r'(?:\(\s*char\s*\*\s*\)\s*)?([a-z]\w*)\s*\+\s*(' + NUM + r')\s*\)')),
    ('cast2', re.compile(
        r'\(\s*(' + CTY + r')\s*\*+\s*\)\s*([a-z]\w*)\s*\+\s*(' + NUM + r')')),
]


def h_pthis(seg, ctx):
    """*(T *)(p + N) / (T *)(p + N) on class-typed locals/params -> p->MEMBER."""
    n = 0
    for kind, pat in PTHIS_FORMS:
        mask = mask_text(seg)
        out = []
        last = 0
        for m in pat.finditer(mask):
            if bad_span(seg, m):
                continue
            pos = m.start()
            cty, recv = m.group(1), m.group(2)
            if recv == 'this':
                continue
            raw = int(m.group(3), 0)
            if kind in ('deref2', 'cast2'):
                off = raw * WIDTHS.get(cty.strip(), 4)
            else:
                off = raw
            cls = ctx.recv_class(recv)
            if cls is None:
                ledger_add('F-PTHIS', ctx, pos, m.group(0), None, off,
                           'noclass')
                continue
            # disasm cross-check: mismatch -> fail loud (no silent guess)
            site = ctx.site_of(pos)
            if site:
                bd = back_disp(site)
                if bd and bd[0] != off:
                    ledger_add('F-PTHIS', ctx, pos, m.group(0), cls, off,
                               'disp-mismatch:%d' % bd[0])
                    continue
            nm, how = resolve_member(cls, off, cast_type=cty)
            if not nm:
                ledger_add('F-PTHIS', ctx, pos, m.group(0), cls, off, how)
                continue
            if kind.startswith('deref'):
                repl = '%s->%s' % (recv, nm)
            else:
                repl = '&%s->%s' % (recv, nm)
            if repl == seg[pos:m.end()]:
                continue
            out.append(seg[last:pos])
            out.append(repl)
            last = m.end()
            n += 1
            STATS['F-PTHIS/%s/%s' % (kind, how)] += 1
        out.append(seg[last:])
        seg = ''.join(out)
    return seg, n


PINDEX = re.compile(
    r'\(\s*\(\s*(' + CTY + r')\s*\*\s*\)\s*([A-Za-z_]\w*)\s*\)\s*'
    r'\[\s*(' + NUM + r')\s*\]')
PINDEX2 = re.compile(
    r'\(\s*(' + CTY + r')\s*\*\s*\)\s*([A-Za-z_]\w*)\s*\[\s*(' + NUM + r')\s*\]')


def h_index(seg, ctx):
    n = 0
    for pat in (PINDEX, PINDEX2):
        mask = mask_text(seg)
        out = []
        last = 0
        for m in pat.finditer(mask):
            if bad_span(seg, m):
                continue
            cty, recv, idx = m.group(1), m.group(2), int(m.group(3), 0)
            off = idx * WIDTHS.get(cty.strip(), 4)
            cls = ctx.recv_class(recv)
            if cls is None:
                ledger_add('F-INDEX', ctx, m.start(), m.group(0), None, off,
                           'noclass')
                continue
            nm, how = resolve_member(cls, off, cast_type=cty)
            if not nm:
                ledger_add('F-INDEX', ctx, m.start(), m.group(0), cls, off,
                           how)
                continue
            out.append(seg[last:m.start()])
            out.append('%s->%s' % (recv, nm))
            last = m.end()
            n += 1
            STATS['F-INDEX/' + how] += 1
        out.append(seg[last:])
        seg = ''.join(out)
    return seg, n


I2P = re.compile(r'\(\s*(' + CTY + r')\s*\*\s*\)\s*(0[xX][0-9A-Fa-f]+|[1-9]\d*)\b')


def h_int2ptr(seg, ctx):
    n = 0
    mask = mask_text(seg)
    out = []
    last = 0
    for m in I2P.finditer(mask):
        if bad_span(seg, m):
            continue
        cty, lit = m.group(1), m.group(2)
        pos = m.start()
        val = int(lit, 16) if lit.lower().startswith('0x') else int(lit)
        if val == 0:
            continue
        # comparison context -> drop the cast (value compare)
        before = mask[max(0, pos - 16):pos]
        after = mask[m.end():m.end() + 4]
        if re.search(r'[=!]=\s*$', before) or re.match(r'^\s*[=!]=', after):
            out.append(seg[last:pos])
            out.append(lit)
            last = m.end()
            n += 1
            STATS['F-I2P/cmp'] += 1
            continue
        sym = ADDR2SYM.get(val)
        if sym and val >= 0x400000:
            out.append(seg[last:pos])
            out.append('(void *)&%s' % sym)
            last = m.end()
            n += 1
            STATS['F-I2P/sym'] += 1
            continue
        if val == 0xFFFFFFFF:
            # invalid-pointer sentinel: same bits, standard spelling
            out.append(seg[last:pos])
            out.append('(%s *)-1' % cty)
            last = m.end()
            n += 1
            STATS['F-I2P/minus1'] += 1
            continue
        ledger_add('F-I2P', ctx, pos, m.group(0), None, val,
                   'literal-kept')
    out.append(seg[last:])
    return ''.join(out), n


HANDLERS = [
    ('F-QMARK', h_qmark),
    ('F-FPTR', h_fptr),
    ('F-SUB', h_staticsub),
    ('F-CASTD', h_castd),
    ('F-PAD', h_pad),
    ('F-CASTA', h_castaddr),
    ('F-THIS', h_this_arith),
    ('F-PTHIS', h_pthis),
    ('F-INDEX', h_index),
    ('F-I2P', h_int2ptr),
]

# ------------------------------------------------------------ span scan
ADDR_LINE = re.compile(
    r'^//\s*(?:IDA[:\s]\s*)?0x([0-9A-Fa-f]{6,8})(?:\s*:|\s*\(|\s*$)')
DEF_Q = re.compile(r'\b([A-Za-z_]\w*)::\s*~?[A-Za-z_]\w*\s*\(')
INSIDE = ("// [IDA decompile] original pseudocode - translation "
          "pending (final goal)")


def brace_delta(ln):
    d = 0
    i = 0
    instr = None
    while i < len(ln):
        c = ln[i]
        if instr:
            if c == '\\':
                i += 2
                continue
            if c == instr:
                instr = None
            i += 1
            continue
        if c in '"\'':
            instr = c
            i += 1
            continue
        if c == '/' and i + 1 < len(ln) and ln[i + 1] == '/':
            break
        if c == '{':
            d += 1
        elif c == '}':
            d -= 1
        i += 1
    return d


def scan_spans(lines):
    spans = []
    i = 0
    n = len(lines)
    while i < n:
        if lines[i].rstrip('\r') == INSIDE:
            depth, started, k = 0, False, i
            while k < n:
                dd = brace_delta(lines[k])
                if dd:
                    started = True
                if started:
                    depth += dd
                    if depth <= 0:
                        break
                k += 1
            i = k + 1
            continue
        a = ADDR_LINE.match(lines[i].strip())
        if a:
            j = i + 1
            while j < n and '(' not in lines[j]:
                j += 1
            if j < n:
                nb = j + 1
                while nb < n:
                    s2 = lines[nb].strip()
                    if s2.startswith('//') and re.match(
                            r'^//\s*(?:IDA[:\s]\s*)?0x[0-9A-Fa-f]{6,8}', s2):
                        break
                    nb += 1
                depth, started, k = 0, False, j
                while k < nb:
                    dd = brace_delta(lines[k])
                    if dd:
                        started = True
                    if started:
                        depth += dd
                        if depth <= 0:
                            break
                    k += 1
                spans.append((int(a.group(1), 16), i, j, min(k, nb - 1)))
        i += 1
    # unannotated defs
    covered = [(s, e) for (_a, _i, s, e) in spans]
    for j, ln in enumerate(lines):
        if ln.strip().startswith('//') or '(' not in ln or '::' not in ln:
            continue
        if ln.rstrip().endswith(';') or not DEF_Q.search(ln):
            continue
        if any(s <= j <= e for (s, e) in covered):
            continue
        nb2 = j + 1
        while nb2 < n:
            s2 = lines[nb2].strip()
            if s2.startswith('//') and re.match(
                    r'^//\s*(?:IDA[:\s]\s*)?0x[0-9A-Fa-f]{6,8}', s2):
                break
            nb2 += 1
        depth, started, k = 0, False, j
        while k < nb2:
            dd = brace_delta(lines[k])
            if dd:
                started = True
            if started:
                depth += dd
                if depth <= 0:
                    break
            k += 1
        if started:
            end = min(k, nb2 - 1)
            spans.append((0, j, j, end))
            covered.append((j, end))
    return spans


# ------------------------------------------------------------ env builder
import normalize_blocks as NB  # noqa: E402


def build_env(seg, cls, addr):
    try:
        env = NB.build_types(seg, cls, addr or None)[0]
    except Exception:
        env = {}
    if cls and 'this' not in env:
        env['this'] = cls
    locals_ = set()
    # local declarations (any type): names that shadow member names must not
    # be mistaken for members by the bare-member receiver channel
    for ln in seg.split('\n'):
        m = re.match(r'^\s*(?:struct\s+|union\s+)?([A-Za-z_]\w*)\s+'
                     r'(\*?\s*(?:v\d+|a\d*|aP\d+|[\w]+))\s*'
                     r'(?:\[[^\]]*\])?\s*[;=]', ln)
        if m and '::' not in ln:
            nm = m.group(2).strip()
            locals_.add(nm)
            if _known_class(m.group(1)):
                env.setdefault(nm, m.group(1))
    # function parameters
    dm = re.search(r'\b\w+\s*\(([^)]*)\)', seg)
    if dm:
        for pspec in dm.group(1).split(','):
            pm = re.search(r'([A-Za-z_]\w*)\s*$', pspec.strip())
            if pm:
                locals_.add(pm.group(1))
    for m in re.finditer(
            r'\b([a-z]\w*)\s*=\s*\(\s*([A-Za-z_]\w*)\s*\*+\s*\)\s*[^;]*;', seg):
        v, t = m.group(1), m.group(2)
        if _known_class(t):
            env.setdefault(v, t)
    env['__locals__'] = locals_
    return env


# ------------------------------------------------------------------ main
def _write_retry(p, data, tries=5):
    """AV/Defender locks fresh files for seconds after a write storm (L92/L143
    family). The chain-side writers share _write_retry; manual runs of this
    tool had none."""
    for i in range(tries):
        try:
            p.write_bytes(data)
            return
        except OSError:
            if i == tries - 1:
                raise
            time.sleep(0.5 * (2 ** i))


def process_file(p, apply=None):
    if apply is None:
        apply = APPLY
    rel = str(p.relative_to(ROOT)).replace('\\', '/')
    try:
        lines = p.read_text(encoding='latin-1').split('\n')
    except OSError:
        return False
    spans = scan_spans(lines)
    if not spans:
        return False
    includes = set()
    for ln in lines[:150]:
        m = re.match(r'#include\s+"([^"]+)"', ln.strip())
        if m:
            inc = m.group(1).replace('\\', '/')
            includes.add(inc)
            if not inc.startswith('src/'):
                includes.add('src/' + inc)
    changed = False
    for (addr, ann_i, def_i, end_i) in spans:
        if def_i >= len(lines) or end_i >= len(lines) or def_i > end_i:
            continue
        cls = None
        dm = DEF_Q.search(lines[def_i])
        if dm:
            cls = dm.group(1)
        seg = '\n'.join(lines[def_i:end_i + 1])
        env = build_env(seg, cls, addr)
        cls_eff = env.get('this') or cls
        ctx = Ctx(cls_eff, addr, env, rel, seg, def_i + 1, includes)
        n_total = 0
        for _pass in range(2):
            n_pass = 0
            for fname, fn in HANDLERS:
                if ONLY_FORMS and fname not in ONLY_FORMS:
                    continue
                try:
                    newseg, cnt = fn(seg, ctx)
                except Exception as e:
                    import traceback
                    if os.environ.get('X5_DEBUG'):
                        traceback.print_exc()
                    LEDGER.append({'form': fname, 'file': rel,
                                   'line': ctx.base_line, 'site': None,
                                   'expr': '', 'class': cls_eff, 'offset': None,
                                   'reason': 'handler-exc:%s' % e})
                    STATS['ledger/handler-exc'] += 1
                    continue
                if cnt:
                    seg = newseg
                    ctx.seg = seg
                    n_pass += cnt
            n_total += n_pass
            if not n_pass:
                break
        if n_total:
            lines[def_i:end_i + 1] = seg.split('\n')
            changed = True
            STATS['functions/changed'] += 1
    if changed and apply:
        _write_retry(p, '\n'.join(lines).encode('latin-1'))
    return changed


def main():
    files = []
    for p in sorted((ROOT / 'src').rglob('*.cpp')):
        s = str(p).replace('\\', '/')
        if any(x in s for x in SKIP_PARTS):
            continue
        if ONLY_FILE and ONLY_FILE not in s:
            continue
        files.append(p)
    print('files:', len(files), '| apply:', APPLY, flush=True)
    # phase 1: supply scan -- run the full resolution over every file so all
    # member supplies are known before any conversion (a name supplied
    # anywhere resolves everywhere in the conversion phase)
    print('phase 1: supply scan...', flush=True)
    for p in files:
        try:
            process_file(p, apply=False)
        except Exception:
            pass
    print('supplied members:', len(SUPPLIED), flush=True)
    # phase 2: conversion; in --apply mode iterate to fixpoint (the registry
    # is re-read by the next pass only through member_lookup, so a second
    # application pass is needed for names supplied by late conversions)
    nch = 0
    it = 0
    while True:
        it += 1
        it_ch = 0
        for p in files:
            if process_file(p):
                it_ch += 1
        nch += it_ch
        print('apply iteration %d: %d files changed' % (it, it_ch), flush=True)
        if not APPLY or it_ch == 0 or it >= 6:
            break
        # the name layer is a snapshot of member_lookup taken at first use;
        # _members.ensure_member (F-SUB) adds entries to member_lookup but
        # not to that snapshot, so iterations after it diverge from what a
        # fresh process sees. Refresh so the in-process fixpoint == the
        # fresh-process fixpoint (2026-10-13: run N left a 20-site tail that
        # only run N+1 found).
        _refresh_name_layer()
    print('files changed:', nch)
    # ledger dedupe (same site reported by overlapping handlers)
    seen = set()
    ded = []
    for e in LEDGER:
        k = (e['form'], e['file'], e['line'], e['site'],
             e['expr'][:80], e['reason'])
        if k in seen:
            continue
        seen.add(k)
        ded.append(e)
    LEDGER[:] = ded
    tot = Counter()
    for k, v in STATS.items():
        if k.endswith('/ledger') or k.startswith('ledger/'):
            continue
        if k in ('F-PAD/bare-keep-ph', 'functions/changed'):
            continue
        tot[k.split('/')[0]] += v
    keepc = Counter()
    for k, v in STATS.items():
        if k in ('F-PAD/bare-keep-ph', 'functions/changed'):
            keepc[k] = v
    print('converted by form:', dict(sorted(tot.items())))
    print('kept/no-op counters:', dict(sorted(keepc.items())))
    print('ledger entries:', len(LEDGER))
    lr = Counter(e['reason'].split(':')[0] for e in LEDGER)
    print('ledger by reason:', dict(sorted(lr.items())))
    # full fail-loud ledger (uncapped) + post-dedupe reason summary: the
    # stats JSON below caps `ledger` at 20k entries, which is not enough to
    # account for every unconverted site (2026-10-13: ~125k standing misses)
    tag = 'apply' if APPLY else 'census'
    full = EVID / ('x5_ledger_full_%s.jsonl' % tag)
    with full.open('w', encoding='utf-8') as fh:
        for e in LEDGER:
            fh.write(json.dumps(e, ensure_ascii=False) + '\n')
    lsum = {}
    for e in LEDGER:
        r = e['reason'].split(':')[0]
        lsum[r + '/' + e['form']] = lsum.get(r + '/' + e['form'], 0) + 1
        lsum[r] = lsum.get(r, 0) + 1
    lsum['__total__'] = len(LEDGER)
    (EVID / ('x5_ledger_summary_%s.json' % tag)).write_text(
        json.dumps(lsum, indent=1, sort_keys=True), encoding='utf-8')
    print('full ledger ->', full)
    if APPLY:
        _members.save()
    out = {
        'apply': APPLY,
        'files_scanned': len(files),
        'files_changed': nch,
        'stats': dict(sorted(STATS.items())),
        'converted_by_form': dict(sorted(tot.items())),
        'kept_counters': dict(sorted(keepc.items())),
        'ledger_total_deduped': len(LEDGER),
        'ledger': LEDGER[:20000],
    }
    nm = 'x5_apply_stats.json' if APPLY else 'x5_census.json'
    (EVID / nm).write_text(json.dumps(out, indent=1, ensure_ascii=False),
                           encoding='utf-8')
    print('evidence ->', EVID / nm)


if __name__ == '__main__':
    main()
