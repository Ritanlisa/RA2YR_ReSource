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
# X20: qualified cast atom + extended width table + element-width helper
# (consumed by the extended cast/index/chains forms).
_Q = r'(?:(?:const|volatile)\s+)*'
CTYQ = _Q + '(?:' + CTY + r')'
_XW = {'wchar_t': 2, 'LONG': 4, 'ULONG': 4, 'DWORD': 4, 'UINT': 4,
       'WORD': 2, 'BYTE': 1, 'int8_t': 1, 'uint8_t': 1, 'int16_t': 2,
       'uint16_t': 2, 'int32_t': 4, 'uint32_t': 4, 'int64_t': 8,
       'uint64_t': 8, 'size_t': 4, 'long long': 8}


def _cast_elem_width(cty, stars):
    """element byte-width of a cast type: `(T *)` -> sizeof(T) (qualifier-
    stripped lookup, X19 §5.2d table), `(T **)` -> 4 (pointee is a
    pointer)."""
    if stars >= 2:
        return 4
    t = re.sub(r'(?:const|volatile)\s+', '', cty).strip()
    if t in WIDTHS:
        return WIDTHS[t]
    return _XW.get(t, 4)


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


# ---------------------------------------------------- X5b disp-window check
# A single source statement can carry several member accesses but is anchored
# by ONE `/*0xADDR*/` site (the last instruction of the statement). The
# nearest-preceding-disp check (back_disp) therefore sees only ONE of them and
# false-refuses the others (measured: 330/1,526 F-PTHIS disp-mismatch sites
# have their offset present among the statement's own disps). Rescue: accept
# when the claimed offset appears among the memory-op displacements of the
# statement window [previous anchor, site] (GP-register bases only).
def _prev_anchor_addr(ctx, pos):
    """nearest /*0xADDR*/ before `pos` in the span (0 when none)."""
    i = ctx.seg.rfind('/*0x', 0, pos)
    if i < 0:
        return None
    m = re.match(r'/\*0x([0-9A-Fa-f]{6,8})\*/', ctx.seg[i:i + 14])
    return int(m.group(1), 16) if m else None


def _off_in_stmt_window(site, off, prev):
    dis = func_disasm(site)
    if not dis:
        return False
    idx = _dis_index(dis, site)
    if idx >= len(dis):
        idx = len(dis) - 1
    if idx < 0:
        return False
    n = 0
    for i in range(idx, -1, -1):
        a, txt = dis[i]
        if prev is not None and a <= prev:
            break
        if a > site:
            continue
        base, d, hi = _disp_of_memop(txt)
        if base and base not in ('esp', 'ebp') and d == off:
            return True
        n += 1
        if n > 120:
            break
    return False


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


# X5b: names that are NOT real classes (keywords / primitives / parser junk
# that crept into mtab+DECL and made _known_class accept them).
_X5B_NONCLASS = frozenset((
    'return', 'char', 'void', 'int', 'long', 'short', 'float', 'double',
    'bool', 'unsigned', 'signed', 'unknown', 'size_t', 'wchar_t',
    '_byte', '_word', '_dword', '_qword', '__int8', '__int16', '__int32',
    '__int64', 'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t', 'int8_t',
    'int16_t', 'int32_t', 'int64_t', 'unsigned int', 'unsigned char',
    'unsigned short', 'unsigned long', 'long long', 'unsigned long long',
    'unsigned __int64', 'auto', 'register', 'static', 'const', 'volatile',
    'if', 'for', 'while', 'do', 'else', 'switch', 'case', 'break',
    'continue', 'goto', 'class', 'struct', 'union', 'enum', 'template',
    'typename', 'namespace', 'new', 'delete', 'try', 'catch', 'throw',
    'operator', 'sizeof', 'typedef', 'extern', 'inline', 'virtual',
    'public', 'private', 'protected', 'friend', 'using', 'this',
))


# X5b: scalar global types (GTYPES) -- a global of one of these types holds a
# value, so `g->member` reads through it; the abs-symbol replacement is only
# sound for object/array or untyped hosts.
_SCALAR_TY = re.compile(
    r'^(?:u?int(?:8|16|32|64)_t|int|unsigned(?:\s+(?:int|short|char|long))?|'
    r'signed\s+(?:int|char|short|long)|char|short|long|float|double|bool|'
    r'BOOL|_BYTE|_WORD|_DWORD|_QWORD|byte|word|dword|size_t|unknown)\s*\*?\s*$')


def _known_class(c):
    """A usable receiver class name (X5b: junk pseudo-classes excluded).

    The class universe carries parser/data artifacts (`return`, `char`,
    `uint64_t`, `unknown`, ... -- e.g. member_lookup['return'] has 302
    entries with src 'X5 cast (cls return)'), admitted because mtab/DECL
    contain same-named pseudo entries. Converting against them fabricates
    names from a non-class; they must stay fail-loud (CSP/decl defect)."""
    if not c:
        return False
    lc = c.lower()
    if lc in _X5B_NONCLASS or c in ('VOID_PTR', 'TOP'):
        return False
    return c in CDB or lc in MTABI or lc in DECL


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
                # X20/I193: IDA renders MSVC-mangled special names as
                # `` `vftable' `` / `` `scalar deleting destructor' `` -- the
                # apostrophe sits right after an identifier char and is NOT a
                # char-literal opener.  Opening state 4 here used to mask the
                # REST OF THE SPAN (no EOL reset below), silently disabling
                # every handler after the first such token (measured:
                # gap2_global_defs.cpp = 0 conversions over 5,600 lines,
                # 300 gate hits untouched).  Opening quote of a real literal
                # is preceded by non-identifier (space/operator/paren).
                if i > 0 and (seg[i - 1].isalnum() or seg[i - 1] == '_'):
                    out.append(c)
                    i += 1
                    continue
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
            if c == '\n':
                # X20: parity with the gate's strip_to_code -- an unterminated
                # literal resets at EOL instead of poisoning the rest of the
                # span.
                st = 0
                out.append(' ')
                i += 1
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
            if c == '\n':
                st = 0
                out.append(' ')
                i += 1
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

    def recv_class(self, recv, pos=None):
        if recv in ('this', '*this'):
            return self.env.get('this') or self.cls
        if recv in self.env:
            return self.env[recv]
        ep = self.env.get('_x5b_pos')
        if ep:
            lst = ep.get(recv)
            if lst:
                if pos is None:
                    return lst[-1][1]
                ln = self.line_of(pos) - self.base_line
                best = None
                for l2, t2 in lst:
                    if l2 <= ln:
                        best = t2
                if best:
                    return best
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
    cls = ctx.recv_class(recv, pos)
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


# ------------------------------------------------- X14 return-type closure
# The X14 CSP pass typed the receivers of resolved class-pointer returns
# (`v4 = PlacementList::FindByID(...)` -> v4 : BuildingClass). The forms
# below close the remaining constant-offset accesses on those class-typed
# bases: bare local indexing (`v4[328]`), member-value chains
# (`*(T *)(v4[135] + 90196)`) and vptr-slot dispatch (`(*v4 + 104)(...)`).

_PTRW = {'unsigned int': 4, 'int': 4, '_DWORD': 4, 'uint32_t': 4, 'long': 4,
         'unsigned long': 4, 'float': 4, 'BOOL': 4, 'DWORD': 4, 'void': 4,
         'unsigned char': 1, 'char': 1, '_BYTE': 1, 'uint8_t': 1, 'bool': 1,
         'unsigned short': 2, 'short': 2, '_WORD': 2, 'uint16_t': 2,
         'wchar_t': 2}


def _decl_ptr_width(seg, var):
    """byte width of `Type *var`'s pointee (None if no pointer decl).
    Matches local declarations (line-anchored) and function parameters."""
    rx = re.compile(
        r'(?:^\s*|(?<=[(,]))(?:struct\s+|union\s+|const\s+)*'
        r'(unsigned\s+(?:int|char|short|long)|int|_DWORD|_BYTE|_WORD|'
        r'uint\w+_t|char|short|long|float|double|bool|BOOL|DWORD)\s*\*+\s*'
        + re.escape(var) + r'\b', re.M)
    m = rx.search(seg)
    if not m:
        return None
    return _PTRW.get(re.sub(r'\s+', ' ', m.group(1)).strip())


_SIG_FUNCS = None


def _func_addr_from_markers(seg):
    """X14: containing-function address recovered from the first /*0xADDR*/
    site marker of a span (unannotated defs carry no function address; the
    defsite typing channel needs it)."""
    global _SIG_FUNCS
    m = re.search(r'/\*0x([0-9A-Fa-f]{6,8})\*/', seg)
    if not m:
        return 0
    site = int(m.group(1), 16)
    if _SIG_FUNCS is None:
        import bisect  # noqa: F401
        addrs = []
        for _k, _v in (_J(ROOT / 'signals.json').get('symbols') or {}).items():
            if _v.get('kind') == 'function':
                try:
                    addrs.append(int(_v['address'], 16))
                except (ValueError, TypeError):
                    pass
        addrs.sort()
        _SIG_FUNCS = addrs
    import bisect
    i = bisect.bisect_right(_SIG_FUNCS, site) - 1
    return _SIG_FUNCS[i] if i >= 0 else 0


def off_member_name(cls, off):
    """declared/authority member name at absolute offset `off` (chain)."""
    for c in chain(cls):
        d = MTABI.get(c.lower())
        if d and off in d and d[off][0]:
            return d[off][0]
        d2 = DECL.get(c.lower())
        if d2 and off in d2 and d2[off][0]:
            return d2[off][0]
    return None


def off_member_class(cls, off):
    """class pointee of the member at `off` (MTAB declared type first, then
    binary access authority). None when the member is not a class pointer."""
    cands = []
    for c in chain(cls):
        d = MTABI.get(c.lower())
        if d and off in d and d[off][1]:
            cands.append((d[off][1], d[off][2]))
            break
    a = AUTH.get((cls.lower(), off))
    if a:
        cands.append(((a.get('type') or ''), (a.get('size') or 0)))
    for t, sz in cands:
        if not t:
            continue
        if sz not in (None, 0, 4) and '*' not in t:
            continue
        c2 = re.sub(r'^(?:const\s+)?(?:struct\s+|union\s+|class\s+)?',
                    '', t).rstrip('*& ').strip()
        if not re.match(r'^[A-Za-z_]\w*$', c2):
            continue
        if _known_class(c2):
            return c2
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
        cls = ctx.recv_class(recv, pos)
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


def parse_fp_expr(expr, ctx, pos=None):
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
        cls0 = ctx.recv_class(recv, pos)
        t = member_type_str(cls0, base) if cls0 else None
        if t:
            t2 = t.rstrip('* ').strip()
            if _known_class(t2):
                return '%s->%s' % (recv, base), t2, None, None, '->'
        return None, None, None, None, None
    mm = re.match(r'^(this|[A-Za-z_]\w*)\s*$', s)
    if mm:
        recv = mm.group(1)
        return recv, ctx.recv_class(recv, pos), None, None, '->'
    mm = re.match(r'^(this|[A-Za-z_]\w*|' + GLOB + r')\s*(->|\.)(.+)$', s)
    if mm:
        recv, sep0, tail = mm.group(1), mm.group(2), mm.group(3)
        base = tail.split('[')[0].split('->')[0]
        idx = re.search(r'\[([^\]]*)\]', tail)
        off = None
        cls = ctx.recv_class(recv, pos)
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
        # X14: vptr-deref dispatch `(*recv + SLOT)` on a class-typed receiver
        # is a thiscall dispatch even when the cast spells `int (**)(...)`
        # (the mechanical render drops __thiscall); the class+slot lookup
        # below is the real gate.
        vptr_form = bool(re.match(
            r'^\*\s*\(?\s*[A-Za-z_]\w*\s*\)?\s*$', expr.strip()))
        if bad_span(seg, m) or (
                '__thiscall' not in seg[max(0, m.start() - 220):m.start()]
                and not vptr_form):
            pos = m.end()
            continue
        slot = int(m.group('slot'), 0)
        obj, cls, base_off, base_name, sep = parse_fp_expr(expr, ctx,
                                                             m.start())
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
                       ctx.recv_class(member.split('->')[0], pos),
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
            # X20: a chained member (`this->a->b`) is NOT resolvable by
            # name_expr_offset -- it resolves the BASE name's offset and
            # would silently DROP the chain (measured: the chain form's
            # `(unsigned int *)&this->q104->q29C` became `&this->q104`).
            # Fail loud instead.
            if '->' in member.split('->', 1)[-1]:
                ledger_add('F-CASTA', ctx, pos, m.group(0), None, None,
                           'member-chain')
                continue
            r = name_expr_offset(member, ctx, pos, cast_type=cty)
            if r is None or r[0] != 'ok':
                ledger_add('F-CASTD', ctx, pos, m.group(0),
                           ctx.recv_class(member.split('->')[0], pos),
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
        # X20/I189: positional lookups (site_of/line_of/recv_class/_x5b_pos)
        # must see the CURRENT text at the next pattern iteration -- a stale
        # ctx.seg resolved wrong-line anchors (bare path -> wrong member
        # names, e.g. `*(this + 24)` read the previous line's 0x4ba5c1
        # anchor instead of its own 0x4ba5c4).
        ctx.seg = seg
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
        ledger_add('F-PAD', ctx, pos, m.group(0),
                   ctx.recv_class(recv, pos),
                   None, 'var-index-or-bad-name')
        return None
    cls = ctx.recv_class(recv, pos)
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
            # X5b: a scalar/pointer-TYPED global's `recv->member` reads
            # THROUGH the value (`*(value + off)`), while the absolute symbol
            # at `addr(recv) + off` is a different location. Replacing the
            # member read with that symbol drops/redirects a dereference
            # (measured: DSurface_Alternate->DSurface_field_0x0 + 31 was a
            # vtable call; the symbol replacement read [ptr+7Ch] instead of
            # [[ptr]+7Ch]). Only object/array or untyped IDA-style hosts may
            # use the address-based replacement.
            gt = GTYPES.get('0x%X' % base_addr)
            if isinstance(gt, dict):
                ty = str(gt.get('type') or '').strip()
                if ty.endswith('*') or _SCALAR_TY.match(ty):
                    ledger_add('F-PAD', ctx, pos, m.group(0), recv, off,
                               'host-scalar')
                    return None
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
        # X20/I189: positional lookups (site_of/line_of/recv_class/_x5b_pos)
        # must see the CURRENT text at the next pattern iteration -- a stale
        # ctx.seg resolved wrong-line anchors (bare path -> wrong member
        # names, e.g. `*(this + 24)` read the previous line's 0x4ba5c1
        # anchor instead of its own 0x4ba5c4).
        ctx.seg = seg
    return seg, n


CASTA = re.compile(
    r'\(\s*(' + CTY + r')\s*\*+\s*\)\s*(?P<opar>\(\s*)?&\s*'
    r'(?P<mem>' + MEMBER_EXPR + r')')


# X20: `(T *)((int)&x)` -- an int round-trip inserted by the old renderer;
# on 32-bit the truncation is value-identical, so the cast drops:
# `(T *)(int)&x` -> `(T *)&x` (X19 nested-recast-int family; removes the
# PTR2INT `(int)&` hit).
RECAST = re.compile(
    r'\(\s*(?P<cty>' + CTYQ + r')\s*(?P<st>\*+)\s*\)\s*'
    r'(?P<o1>\()\s*(?P<o2>\()?\s*'
    r'(?:unsigned\s+|signed\s+)?'
    r'(?:int|__int32|long|DWORD|UINT|ULONG|UINT_PTR|DWORD_PTR|intptr_t)'
    r'\s*\)\s*(?=&)')


def h_recast(seg, ctx):
    n = 0
    mask = mask_text(seg)
    out = []
    last = 0
    for m in RECAST.finditer(mask):
        if bad_span(seg, m):
            continue
        gd = m.groupdict()
        # `(T *)(int)&x`   -> `(T *)&x`
        # `(T *)((int)&x)` -> `(T *)(&x)`   (the wrapper open is STRUCTURAL
        # -- dropping it left a dangling close paren; X20 QC caught 47)
        repl = '(%s%s)%s' % (gd['cty'], gd['st'], '(' if gd['o2'] else '')
        if repl == seg[m.start():m.end()]:
            continue
        out.append(seg[last:m.start()])
        out.append(repl)
        last = m.end()
        n += 1
        STATS['F-RECAST/int-drop'] += 1
    out.append(seg[last:])
    return ''.join(out), n


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
        # X20: a chained member (`this->a->b`) is NOT resolvable by
        # name_expr_offset -- it resolves the BASE name's offset and would
        # silently DROP the chain (measured: the chain form's
        # `(unsigned int *)&this->q104->q29C` became `&this->q104`).
        # Fail loud instead.
        if '->' in member.split('->', 1)[-1]:
            ledger_add('F-CASTA', ctx, pos, m.group(0), None, None,
                       'member-chain')
            continue
        r = name_expr_offset(member, ctx, pos, cast_type=cty)
        if r is None or r[0] != 'ok':
            ledger_add('F-CASTA', ctx, pos, m.group(0),
                       ctx.recv_class(member.split('->')[0], pos),
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


# ------------------------------------------------- X20 form extensions
# X19-certified shape families (x19_summary §2.2) that the X5/X14 tables did
# not reach: multi-star casts (`(char **)this + 5`), qualified casts
# (`(volatile LONG *)this + 8`, `(const char *)this + 9`), deref of the
# bare-this paren form (`*(this + N)` -- disasm-rescued offset), member-value
# chains (`(T*)(this->M + N)` -> pointee class member), and `this + N` in
# value/argument contexts (`v6 = this + 28;`, `f(this + 4, ...)`) that the
# original bare guards excluded.  (Helpers _Q/CTYQ/_XW/_cast_elem_width are
# defined next to CTY at the top of the file.)
THIS_FORMS = [
    ('deref1', re.compile(
        r'\*\s*\(\s*(?P<cty>' + CTYQ + r')\s*(?P<st>\*+)\s*\)\s*'
        r'\(\s*this\s*\+\s*(?P<num>' + NUM + r')\s*\)')),
    ('deref2', re.compile(
        r'\*\s*\(\s*\(\s*(?P<cty>' + CTYQ + r')\s*(?P<st>\*+)\s*\)\s*'
        r'this\s*\+\s*(?P<num>' + NUM + r')\s*\)')),
    ('cast1', re.compile(
        r'\(\s*(?P<cty>' + CTYQ + r')\s*(?P<st>\*+)\s*\)\s*'
        r'\(\s*this\s*\+\s*(?P<num>' + NUM + r')\s*\)')),
    ('cast2', re.compile(
        r'\(\s*(?P<cty>' + CTYQ + r')\s*(?P<st>\*+)\s*\)\s*'
        r'\(\s*\(\s*char\s*\*\s*\)\s*this\s*\+\s*(?P<num>' + NUM + r')\s*\)')),
    ('cast3', re.compile(
        r'\(\s*(?P<cty>' + CTYQ + r')\s*(?P<st>\*+)\s*\)\s*'
        r'this\s*\+\s*(?P<num>' + NUM + r')')),
    ('deref-bare', re.compile(
        r'(?<![\w\*])\*\s*\(\s*this\s*\+\s*(?P<num>' + NUM + r')\s*\)')),
    ('chain', re.compile(
        r'(?<![\w>])\(\s*(?P<amp>(?:\*&\s*)?)this\s*->\s*'
        r'(?P<mem>[A-Za-z_]\w*)\s*\+\s*(?P<num>' + NUM + r')\s*\)')),
    ('bare', re.compile(
        # X20: value/argument contexts (`this + N;` / `this + N,` / `this +
        # N)`) are now claimed (X19 §2.2 'bare-this-arith'); arithmetic
        # continuations stay excluded (re-scaling a member address by the
        # member's own type changes the byte math) and `[` stays excluded.
        r'(?<![\w\*])\bthis\s*\+\s*(?P<num>' + NUM + r')(?!\d)'
        r'(?!\s*[\[+\-*/%&|^<>=])')),
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
            gd = m.groupdict()
            if kind == 'chain':
                # X20: `(T *)(this->M + N)` -- a byte walk of the member's
                # VALUE.  Rewrite `&this->M->PM` where PM is the pointee
                # class's member at byte N (same value, typed); fail loud
                # when the member's class or PM is not provable.
                mem = gd['mem']
                num = int(gd['num'], 0)
                cls = ctx.recv_class('this', pos)
                pm = how2 = None
                if cls is not None:
                    bo = decl_off_by_name(cls, mem)
                    if bo is not None:
                        pcls = off_member_class(cls, bo)
                        if pcls:
                            pm, how2 = resolve_member(pcls, num, None)
                if not pm:
                    ledger_add('F-THIS', ctx, pos, m.group(0), cls, num,
                               'chain-not-resolved')
                    continue
                nxt = mask[m.end():m.end() + 4].lstrip()
                if nxt[:1] in ('+', '-', '*', '/', '%', '&', '|', '^'):
                    # a following arithmetic would re-scale the member
                    # address by PM's own type -- keep fail loud
                    ledger_add('F-THIS', ctx, pos, m.group(0), cls, num,
                               'arith-continuation')
                    continue
                out.append(seg[last:pos])
                out.append('&this->%s->%s' % (mem, pm))
                last = m.end()
                n += 1
                STATS['F-THIS/%s/%s' % (kind, how2)] += 1
                continue
            cty = gd.get('cty')
            stars = len(gd.get('st') or '*')
            num = int(gd['num'], 0)
            if kind == 'bare':
                off = num
            elif kind == 'deref-bare':
                off = None            # disasm rescue only (fail loud)
            elif kind in ('deref2', 'cast3'):
                # no-paren cast forms: N counts ELEMENTS of the pointee
                # (binary `(char **)this + 5` -> +0x14 = 5x4; verified)
                off = num * _cast_elem_width(cty, stars)
            else:
                off = num             # deref1/cast1/cast2: paren == bytes
            # disasm verification for the this+N forms
            site = ctx.site_of(pos)
            if site and kind in ('bare', 'deref-bare'):
                d = inst_disp(site)
                if d and not d[1]:
                    off = d[0]
                else:
                    bd = back_disp(site)
                    if bd:
                        off = bd[0]
            if off is None:
                ledger_add('F-THIS', ctx, pos, m.group(0), None, None,
                           'noff')
                continue
            cls = ctx.recv_class('this', pos)
            if cls is None:
                ledger_add('F-THIS', ctx, pos, m.group(0), None, off,
                           'noclass')
                continue
            cty_r = cty if kind not in ('bare', 'deref-bare') else None
            nm, how = resolve_member(cls, off, cast_type=cty_r)
            if not nm:
                ledger_add('F-THIS', ctx, pos, m.group(0), cls, off, how)
                continue
            if kind == 'cast3':
                # X20: `(T *)this + N` has no closing delimiter -- a following
                # arithmetic term re-scales the member address by the member's
                # own type (or is outright illegal on pointers).  Refuse:
                #   `(char *)this + 124 + 2 * a2` was rewritten into
                #   `&this->M124 + 2 * a2` (scale + syntax hazard).
                nxt = mask[m.end():m.end() + 4].lstrip()
                c0 = nxt[:1]
                if c0 in ('*', '/', '%', '&', '|', '^'):
                    ledger_add('F-THIS', ctx, pos, m.group(0), cls, off,
                               'arith-continuation')
                    continue
                if c0 in ('+', '-', '['):
                    if _x5b_member_width(cls, nm) != \
                            _cast_elem_width(cty, stars):
                        ledger_add('F-THIS', ctx, pos, m.group(0), cls, off,
                                   'arith-width')
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
        # X20/I189: positional lookups (site_of/line_of/recv_class/_x5b_pos)
        # must see the CURRENT text at the next pattern iteration -- a stale
        # ctx.seg resolved wrong-line anchors (bare path -> wrong member
        # names, e.g. `*(this + 24)` read the previous line's 0x4ba5c1
        # anchor instead of its own 0x4ba5c4).
        ctx.seg = seg
    return seg, n


PTHIS_FORMS = [
    ('deref1', re.compile(
        r'\*\s*\(\s*(?P<cty>' + CTYQ + r')\s*(?P<st>\*+)\s*\)\s*\(\s*'
        r'(?:\(\s*char\s*\*\s*\)\s*)?(?P<recv>[a-z]\w*)\s*\+\s*'
        r'(?P<num>' + NUM + r')\s*\)')),
    ('deref2', re.compile(
        r'\*\s*\(\s*\(\s*(?P<cty>' + CTYQ + r')\s*(?P<st>\*+)\s*\)\s*'
        r'(?P<recv>[a-z]\w*)\s*\+\s*(?P<num>' + NUM + r')\s*\)')),
    ('cast1', re.compile(
        r'\(\s*(?P<cty>' + CTYQ + r')\s*(?P<st>\*+)\s*\)\s*\(\s*'
        r'(?:\(\s*char\s*\*\s*\)\s*)?(?P<recv>[a-z]\w*)\s*\+\s*'
        r'(?P<num>' + NUM + r')\s*\)')),
    ('cast2', re.compile(
        r'\(\s*(?P<cty>' + CTYQ + r')\s*(?P<st>\*+)\s*\)\s*'
        r'(?P<recv>[a-z]\w*)\s*\+\s*(?P<num>' + NUM + r')')),
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
            gd = m.groupdict()
            cty, recv = gd['cty'], gd['recv']
            if recv == 'this':
                continue
            raw = int(gd['num'], 0)
            if kind in ('deref2', 'cast2'):
                off = raw * _cast_elem_width(cty, len(gd.get('st') or '*'))
            else:
                off = raw
            cls = ctx.recv_class(recv, pos)
            if cls is None:
                ledger_add('F-PTHIS', ctx, pos, m.group(0), None, off,
                           'noclass')
                continue
            # disasm cross-check: mismatch -> fail loud (no silent guess).
            # X5b: a statement-wide anchor may differ from the nearest single
            # disp on multi-access lines -- rescue when the offset is present
            # among the statement window's own disps.
            site = ctx.site_of(pos)
            if site:
                bd = back_disp(site)
                if bd and bd[0] != off:
                    if not _off_in_stmt_window(site, off,
                                               _prev_anchor_addr(ctx, pos)):
                        ledger_add('F-PTHIS', ctx, pos, m.group(0), cls, off,
                                   'disp-mismatch:%d' % bd[0])
                        continue
            nm, how = resolve_member(cls, off, cast_type=cty)
            if not nm:
                ledger_add('F-PTHIS', ctx, pos, m.group(0), cls, off, how)
                continue
            if not _x5b_arith_ok(ctx, m.end(), cls, nm, cty):
                ledger_add('F-PTHIS', ctx, pos, m.group(0), cls, off,
                           'arith-width')
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
        # X20/I189: positional lookups (site_of/line_of/recv_class/_x5b_pos)
        # must see the CURRENT text at the next pattern iteration -- a stale
        # ctx.seg resolved wrong-line anchors (bare path -> wrong member
        # names, e.g. `*(this + 24)` read the previous line's 0x4ba5c1
        # anchor instead of its own 0x4ba5c4).
        ctx.seg = seg
    return seg, n


PINDEX = re.compile(
    r'\(\s*\(\s*(?P<cty>' + CTYQ + r')\s*(?P<st>\*+)\s*\)\s*'
    r'(?P<recv>[A-Za-z_]\w*)\s*\)\s*\[\s*(?P<num>' + NUM + r')\s*\]')
PINDEX2 = re.compile(
    r'\(\s*(?P<cty>' + CTYQ + r')\s*(?P<st>\*+)\s*\)\s*'
    r'(?P<recv>[A-Za-z_]\w*)\s*\[\s*(?P<num>' + NUM + r')\s*\]')


def h_index(seg, ctx):
    n = 0
    for pat in (PINDEX, PINDEX2):
        mask = mask_text(seg)
        out = []
        last = 0
        for m in pat.finditer(mask):
            if bad_span(seg, m):
                continue
            gd = m.groupdict()
            cty, recv = gd['cty'], gd['recv']
            idx = int(gd['num'], 0)
            off = idx * _cast_elem_width(cty, len(gd.get('st') or '*'))
            cls = ctx.recv_class(recv, m.start())
            if cls is None:
                ledger_add('F-INDEX', ctx, m.start(), m.group(0), None, off,
                           'noclass')
                continue
            nm, how = resolve_member(cls, off, cast_type=cty)
            if not nm:
                ledger_add('F-INDEX', ctx, m.start(), m.group(0), cls, off,
                           how)
                continue
            if not _x14_arith_ptr_ok(ctx, m.end(), cls, nm, cty):
                # X5b: `(T *)recv[N] + K` -- renaming to a member of a
                # different width changes the scale of the following + K;
                # X14: scale also changes when the member is not a pointer
                # of the same pointee width (filler scalars refused).
                ledger_add('F-INDEX', ctx, m.start(), m.group(0), cls, off,
                           'arith-width')
                continue
            out.append(seg[last:m.start()])
            out.append('%s->%s' % (recv, nm))
            last = m.end()
            n += 1
            STATS['F-INDEX/' + how] += 1
        out.append(seg[last:])
        seg = ''.join(out)
        # X20/I189: positional lookups (site_of/line_of/recv_class/_x5b_pos)
        # must see the CURRENT text at the next pattern iteration -- a stale
        # ctx.seg resolved wrong-line anchors (bare path -> wrong member
        # names, e.g. `*(this + 24)` read the previous line's 0x4ba5c1
        # anchor instead of its own 0x4ba5c4).
        ctx.seg = seg
    return seg, n


# X14: bare local-pointer index on a class-typed base: `recv[N]` -> recv->M.
# (The cast-wrapped shapes `((T *)recv)[N]` / `(T *)recv[N]` stay F-INDEX's.)
BIDX = re.compile(r'(?<![\w.>])\b([A-Za-z_]\w*)\s*\[\s*(\d+)\s*\]')

_DECL_WORD = re.compile(
    r'^(?:u?int(?:8|16|32|64)_t|int|unsigned(?:\s+(?:int|short|char|long))?|'
    r'signed(?:\s+(?:int|short|char|long))?|char|short|long|float|double|bool|'
    r'BOOL|DWORD|_DWORD|_BYTE|_WORD|wchar_t|size_t|void)$', re.I)


def _in_own_decl(seg, m, recv):
    """True when `recv[...]` at m is the array-bound of recv's own
    declaration (`Type recv[N];`), never an index access.
    X15: locals reuse names across scopes inside one function (IDA naming);
    `_decl_ptr_width` scans the whole body and found a `Type *recv` decl of a
    DIFFERENT scope, so F-BIDX rewrote `int16_t v45[2];` into
    `int16_t v45->u32_8;` -- never touch a decl site."""
    ls = seg.rfind('\n', 0, m.start()) + 1
    le = seg.find('\n', m.start())
    if le < 0:
        le = len(seg)
    line = seg[ls:le]
    pre = line[:m.start() - ls]
    if not pre or pre.rstrip().endswith(
            ('(', ',', '=', '+', '-', '/', '|', '&', '!', '>', '<', ';',
             '{', '}', '?', ':')):
        return False
    pm = re.match(
        r'^\s*(?:(?:struct|union|const|static|unsigned|signed|class)\s+)*'
        r'([A-Za-z_]\w*(?:\s*::\s*[A-Za-z_]\w*)?)\s*'
        r'\*?\s*&?\s*$', pre)
    if not pm:
        return False
    word = pm.group(1).strip().split('::')[-1]
    if not _DECL_WORD.match(word) and not _known_class(word):
        return False
    rest = line[m.end() - ls:].lstrip()
    return (not rest) or rest[0] in ';,=['


def h_bidx(seg, ctx):
    n = 0
    mask = mask_text(seg)
    out = []
    last = 0
    for m in BIDX.finditer(mask):
        if bad_span(seg, m):
            continue
        recv, N = m.group(1), int(m.group(2))
        if _in_own_decl(seg, m, recv):
            continue
        pre = seg[max(0, m.start() - 24):m.start()].rstrip()
        if pre.endswith(')') or pre.endswith('*'):
            # cast-wrapped index reach (F-INDEX/F-PTHIS domain)
            continue
        nxt = seg[m.end():m.end() + 4].lstrip()
        if nxt and nxt[0] in '+-':
            # arithmetic continuation: scale would change (handled by
            # F-BCHAIN / F-PTHIS on the typed member form)
            continue
        cls = ctx.recv_class(recv, m.start())
        if cls is None:
            if _decl_ptr_width(seg, recv):
                ledger_add('F-BIDX', ctx, m.start(), m.group(0), None,
                           None, 'noclass')
            continue
        w = _decl_ptr_width(seg, recv)
        if not w:
            ledger_add('F-BIDX', ctx, m.start(), m.group(0), cls, None,
                       'no-width')
            continue
        off = N * w
        site = ctx.site_of(m.start())
        if site:
            bd = back_disp(site)
            if bd and bd[0] != off and not _off_in_stmt_window(
                    site, off, _prev_anchor_addr(ctx, m.start())):
                ledger_add('F-BIDX', ctx, m.start(), m.group(0), cls, off,
                           'disp-mismatch:%d' % bd[0])
                continue
        nm, how = resolve_member(cls, off)
        if not nm:
            ledger_add('F-BIDX', ctx, m.start(), m.group(0), cls, off, how)
            continue
        repl = '%s->%s' % (recv, nm)
        if repl == seg[m.start():m.end()]:
            continue
        out.append(seg[last:m.start()])
        out.append(repl)
        last = m.end()
        n += 1
        STATS['F-BIDX/' + how] += 1
    out.append(seg[last:])
    return ''.join(out), n


# X14: member-value chain: `*(T *)(recv[N] + K)` / `(T *)(recv[N] + K)` ->
# recv->M->M2 / &recv->M->M2, where M is class-typed at offset N*w and M2 is
# the member at K of M's class.
BCHAIN = re.compile(
    r'(?P<deref>\*\s*)?\(\s*(?:const\s+)?(?P<cty>' + CTY +
    r')\s*\*+\s*\)\s*\(\s*(?P<recv>[A-Za-z_]\w*)\s*\[\s*(?P<n>\d+)\s*\]'
    r'\s*\+\s*(?P<k>\d+)\s*\)')


def h_bchain(seg, ctx):
    n = 0
    mask = mask_text(seg)
    out = []
    last = 0
    for m in BCHAIN.finditer(mask):
        if bad_span(seg, m):
            continue
        recv = m.group('recv')
        cls = ctx.recv_class(recv, m.start())
        if cls is None:
            ledger_add('F-BCHAIN', ctx, m.start(), m.group(0), None, None,
                       'noclass')
            continue
        w = _decl_ptr_width(seg, recv)
        if not w:
            ledger_add('F-BCHAIN', ctx, m.start(), m.group(0), cls, None,
                       'no-width')
            continue
        off1 = int(m.group('n')) * w
        k = int(m.group('k'))
        site = ctx.site_of(m.start())
        if site:
            bd = back_disp(site)
            if bd and bd[0] != off1 and not _off_in_stmt_window(
                    site, off1, _prev_anchor_addr(ctx, m.start())):
                ledger_add('F-BCHAIN', ctx, m.start(), m.group(0), cls, off1,
                           'disp-mismatch:%d' % bd[0])
                continue
        nm1, how1 = resolve_member(cls, off1)
        if not nm1:
            ledger_add('F-BCHAIN', ctx, m.start(), m.group(0), cls, off1,
                       how1)
            continue
        d2 = off_member_class(cls, off1)
        if not d2:
            ledger_add('F-BCHAIN', ctx, m.start(), m.group(0), cls, off1,
                       'chain-not-class')
            continue
        nm2, how2 = resolve_member(d2, k)
        if not nm2:
            ledger_add('F-BCHAIN', ctx, m.start(), m.group(0), d2, k, how2)
            continue
        if m.group('deref'):
            repl = '%s->%s->%s' % (recv, nm1, nm2)
        else:
            repl = '&%s->%s->%s' % (recv, nm1, nm2)
        if repl == seg[m.start():m.end()]:
            continue
        out.append(seg[last:m.start()])
        out.append(repl)
        last = m.end()
        n += 1
        STATS['F-BCHAIN/' + how2] += 1
    out.append(seg[last:])
    return ''.join(out), n


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
    ('F-BCHAIN', h_bchain),
    ('F-BIDX', h_bidx),
    ('F-I2P', h_int2ptr),
    ('F-RECAST', h_recast),
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


# ---------------------------------------------------- X5b env enrichment
# The Step-4 corpus writes many assignments in shapes the shared env scan
# (normalize_blocks.build_types, ASSIGN_ANY `[a-z]\w* =`) cannot see:
#   1. register aliases with underscore names:  `_ESI = this;`
#   2. load-truncation write forms: `(*((unsigned int *)&(v2))) = expr;`
#      (and the paren-less variant `*((unsigned int *)&(v2)) = expr;`)
# Both are mechanical identities of `var := expr` and are the missing link
# for a large share of the X5 `noclass` ledger (measured 2026-10-13: 763
# distinct `_REG = this` sites + mech-write member/cast assignments).
# Channels applied (same semantics as the shared builder, widened intake):
#   this | ident copy | (T *) cast of known class | this->M / V->M member
#   class type | tmap defsite register key (NB.tmap `{func}::<reg>_v{site}`).
X5B_MECH_A = re.compile(
    r'\(\s*\*\s*\(\s*\(\s*(?:unsigned\s+int|int|_DWORD|uint32_t)\s*\*+\s*\)'
    r'\s*&\s*\(\s*([A-Za-z_]\w*)\s*\)\s*\)\s*\)\s*=')
X5B_MECH_B = re.compile(
    r'\*\s*\(\s*\(\s*(?:unsigned\s+int|int|_DWORD|uint32_t)\s*\*+\s*\)'
    r'\s*&\s*\(\s*([A-Za-z_]\w*)\s*\)\s*\)\s*=')
_RE_ASSIGN_ANY = re.compile(r'(?<![\w.>])([A-Za-z_]\w*)\s*=(?!=)\s*(.+)$')
_RE_CTRL_LINE = re.compile(r'^(?:if|while|for|switch|else|return|do|case)\b')
_RE_SITE_TAIL = re.compile(r'/\*0x([0-9A-Fa-f]{6,8})\*/\s*$')


def _x5b_assignments(seg):
    """[(var, rhs_text, site_or_None, line_idx)] over plain + mech write forms."""
    out = []
    for li, ln in enumerate(seg.split('\n')):
        s = ln.strip()
        if not s or s.startswith('//') or s.startswith('*'):
            continue
        sm = _RE_SITE_TAIL.search(ln)
        site = int(sm.group(1), 16) if sm else None
        m = X5B_MECH_A.search(ln)
        if not m:
            m = X5B_MECH_B.search(ln)
        if m:
            out.append((m.group(1), ln[m.end():], site, li))
            continue
        if _RE_CTRL_LINE.match(s):
            continue
        m = _RE_ASSIGN_ANY.search(ln)
        if m:
            out.append((m.group(1), m.group(2), site, li))
    return out


def _x5b_member_class(rc, mname):
    """declared class of member `mname` in rc's chain, or None."""
    if not rc:
        return None
    t = member_type_str(rc, mname)
    if not t:
        return None
    base = re.sub(r'^(?:const\s+)?(?:struct\s+|class\s+|union\s+)?', '',
                  t).split('*')[0].strip()
    return base if _known_class(base) else None


_DECL_W = {'unsigned int': 4, 'int': 4, 'long': 4, 'float': 4, 'BOOL': 4,
           'DWORD': 4, 'unsigned char': 1, 'char': 1, 'bool': 1,
           'unsigned short': 2, 'short': 2, 'wchar_t': 2,
           'double': 8, '__int64': 8, 'unsigned __int64': 8}


def _x5b_member_width(cls, name):
    """byte width implied by the member name/filler or its declaration
    (None = unknown). Used to refuse conversions that would change the scale
    of a following `+ / - / [` arithmetic."""
    if not name:
        return None
    m = re.match(r'^u(8|16|32|64)_', name)
    if m:
        return int(m.group(1)) // 8
    if re.match(r'^ptr_|^vfptr', name):
        return 4
    if re.match(r'^q[0-9A-Fa-f]+$|^m_[0-9A-Fa-f]+$', name):
        return 4
    if re.match(r'^__pad_', name):
        m = re.search(r'_([0-9A-Fa-f]+)$', name)
        return None
    w = member_size(cls, name)
    if w:
        return w
    t = member_type_str(cls, name)
    if t:
        t = t.strip()
        if t.endswith('*') or t.endswith('&'):
            return 4
        base = re.sub(r'^(?:const\s+)?(?:struct\s+|union\s+|class\s+)?', '',
                      t).split('*')[0].strip()
        if base in _DECL_W:
            return _DECL_W[base]
    return None


def _x5b_arith_ok(ctx, end_pos, cls, nm, cty):
    """True when replacing the matched cast expression with the member form
    does not change the scale of a following + / - / [ (the member's width
    must equal the cast type's width).  X20: `* / % & | ^` continuations are
    never legal on the pointer expression produced by the replacement --
    refuse (measured: `(char *)v6 + 8 * i` -> `&v6->q008 * i` manglings)."""
    nxt = ctx.seg[end_pos:end_pos + 4].lstrip()
    if not nxt:
        return True
    if nxt[0] in '*/%&|^':
        return False
    if nxt[0] not in '+-[':
        return True
    cw = _cast_elem_width(cty, 1)
    return _x5b_member_width(cls, nm) == cw


def _pointee_width(t):
    """byte width of the pointee of a declared pointer type, or None."""
    t = re.sub(r'^(?:const\s+)?(?:struct\s+|union\s+|class\s+)?', '',
               (t or '').strip())
    stars = len(t) - len(t.rstrip('*& '))
    if stars == 0:
        return None
    base = t.rstrip('*& ').strip()
    if stars >= 2:
        return 4
    if base in _DECL_W:
        return _DECL_W[base]
    return 4  # class / unknown pointee -> 4-byte pointer slot


def _x14_arith_ptr_ok(ctx, end_pos, cls, nm, cty):
    """F-INDEX variant (X14 audit): `(T *)recv[N] + K` scales K by sizeof(T);
    the converted form `recv->M + K` scales by sizeof(*M) only when M is a
    POINTER of that pointee width. A scalar member would silently change the
    scale (measured: `(unsigned int *)v9[50] + 176` with a u32 filler)."""
    nxt = ctx.seg[end_pos:end_pos + 4].lstrip()
    if not nxt or nxt[0] not in '+-[':
        return True
    t = member_type_str(cls, nm)
    if not t or '*' not in t:
        return False
    cw = WIDTHS.get(cty.strip(), 4)
    return _pointee_width(t) == cw


def _x5b_enrich_env(seg, env, cls, addr):
    """Position-aware receiver typing for the X5b intake forms.

    All value-derived types land in `env['_x5b_pos']`:
        var -> [(line_idx, type), ...]  (line_idx = 0-based within seg)
    A use at seg-line L resolves to the LAST entry with line_idx <= L -- the
    assignment dominating the site. Flat (function-wide) typing is WRONG for
    the corpus' reused locals: `v2 = this->occupant` (int) near the top and
    `v2 = this->lineTrailer` (TemporalClass*) 300 lines later are different
    objects; the earlier use site must not inherit the later class (measured:
    a flat version converted `((unsigned char*)v2 + 16)` at the occupant use
    site against TemporalClass -> wrong receiver).
    """
    assigns = _x5b_assignments(seg)
    if not assigns:
        return
    ai = '0x%08X' % addr if addr else None
    pos = env.setdefault('_x5b_pos', {})

    def get(var, li):
        lst = pos.get(var)
        if lst:
            best = None
            for l2, t2 in lst:
                if l2 <= li:
                    best = t2
            if best:
                return best
        return env.get(var)

    def has_at(var, li):
        return any(l2 == li for l2, _ in pos.get(var, ()))

    def put(var, li, t):
        lst = pos.setdefault(var, [])
        if (li, t) not in lst:
            lst.append((li, t))
            return True
        return False

    for _ in range(3):
        grew = False
        for var, rhs, site, li in assigns:
            if var == 'this' or has_at(var, li):
                continue
            rhs0 = re.sub(r'/\*[^*]*\*/\s*$', '', rhs).strip()
            rhs0 = rhs0.rstrip(';').strip()
            if not rhs0:
                continue
            if rhs0 == 'this':
                if cls:
                    grew |= put(var, li, cls)
                continue
            if re.fullmatch(r'[A-Za-z_]\w*', rhs0):
                t = get(rhs0, li)
                if t:
                    grew |= put(var, li, t)
                    continue
            m = re.match(r'^\(\s*([A-Za-z_]\w*)\s*\*+\s*\)', rhs0)
            if m and _known_class(m.group(1)):
                grew |= put(var, li, m.group(1))
                continue
            m = re.fullmatch(r'(this|[A-Za-z_]\w*)->([A-Za-z_]\w*)', rhs0)
            if m:
                r0, mem = m.group(1), m.group(2)
                rc = (env.get('this') or cls) if r0 == 'this' else get(r0, li)
                t = _x5b_member_class(rc, mem)
                if t:
                    grew |= put(var, li, t)
                    continue
            # X14: index read of a class-typed base: `var = recv[N]` — the
            # member at N*w is class-typed -> var holds that class pointer.
            m = re.fullmatch(r'([A-Za-z_]\w*)\s*\[\s*(\d+)\s*\]', rhs0)
            if m:
                r0, n0 = m.group(1), int(m.group(2))
                rc = get(r0, li)
                if rc and _known_class(rc):
                    w0 = _decl_ptr_width(seg, r0)
                    if w0:
                        off0 = n0 * w0
                        if off_member_name(rc, off0):
                            t0 = off_member_class(rc, off0)
                            if t0:
                                grew |= put(var, li, t0)
                                continue
            if site and ai:
                for reg in ('eax', 'ecx', 'edx', 'ebx', 'esi', 'edi',
                            'al', 'bl', 'cl', 'dl'):
                    done = False
                    for fmt in ('0x%X', '0x%06X', '0x%07X', '0x%08X'):
                        e = NB.tmap.get(ai + '::' + reg + '_v' +
                                        (fmt % site)) or {}
                        t = e.get('type')
                        if t and NB.is_cls(t) and _known_class(t):
                            grew |= put(var, li, t)
                            done = True
                            break
                    if done:
                        break
        if not grew:
            break


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
        if _RE_CTRL_LINE.match(ln.strip()):
            # X5b: `return result;` etc. must not parse as `TYPE name` --
            # that bug typed `result`/`Block` as pseudo-class `return`
            # (member_lookup['return'] carries 302 such supplies)
            continue
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
    # X5b: widen the intake (underscore register aliases + mechanical write
    # forms) and run the same receiver-typing channels over it.
    _x5b_enrich_env(seg, env, cls, addr)
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
    shift = 0   # X20: a handler may LEGITIMATELY collapse a multi-line
                # statement into one line (F-FPTR/F-CASTD/chain do).  The
                # span list was computed on the original text -- keep later
                # span indices aligned with the live line table.
    for (addr, ann_i, def_i, end_i) in spans:
        def_i += shift
        end_i += shift
        if def_i >= len(lines) or end_i >= len(lines) or def_i > end_i:
            continue
        cls = None
        dm = DEF_Q.search(lines[def_i])
        if dm:
            cls = dm.group(1)
        seg = '\n'.join(lines[def_i:end_i + 1])
        # X14: unannotated defs (gap2 style) carry no function address; the
        # defsite typing channel needs it — recover it from the first site
        # marker via the signals function table.
        addr_eff = addr or _func_addr_from_markers(seg)
        env = build_env(seg, cls, addr_eff)
        cls_eff = env.get('this') or cls
        ctx = Ctx(cls_eff, addr_eff, env, rel, seg, def_i + 1, includes)
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
            new_lines = seg.split('\n')
            shift += len(new_lines) - (end_i - def_i + 1)
            lines[def_i:end_i + 1] = new_lines
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
