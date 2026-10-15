#!/usr/bin/env python3
"""X30 Stage 2 — additive-union carrier/type regeneration from the X29 type_map.

The X29 engine (B10d) re-typed 19,289 vars in `type_map.json`; this generator
materialises those types into the CARRIERS the bodies compile against:

  * `src/e4/classes/_tree_full_e4.hpp`   (tree-owned flat defs)
  * `src/e4/classes/*_e4.hpp`            (2,265 flat class carriers)
  * `src/_gap2/gap2_global_decls.hpp`    (529 synthetic Gap2Recv_* receivers)

ADDITIVE-UNION discipline (L299 / I250): regeneration NEVER shrinks a carrier.
For every struct on disk today:
  1. RETYPE a member in place when the (class,offset) atom in the X29 type_map
     supplies a better kind (scalar/blob -> pointer-family; blob -> scalar;
     void* -> concrete class*).  Rank gate: DIRECT_PROP or better.  vptr slots
     (offset 0 / vfptr-ish names) are never touched.  Pointer members are never
     degraded to scalars.
  2. SUPPLY members the table has but the carrier misses (canon
     csp_canon_members.json, name-keyed), typed by the X29 atom first, canon
     mapping second.  Members are only added, never removed.
  3. SUPPLY (receivers only, --log) the C2039 (class,member) names the bodies
     actually use for Gap2Recv_*/E4Recv_* receivers, typed by the owner
     function's type_map atoms (owner-class keying).
  4. TREE-ADD (--log) classes the C2027/C2039 log mines that no carrier defines
     yet — appended to _tree_full_e4.hpp with canon members + X29 types.

Post-condition per file: the parsed member set of every pre-existing struct is
a SUBSET of the new one (abort, no write, if violated).

Idempotent: a second --apply produces 0 writes (retype converges, supply is
name-keyed).

Usage:
  python tools/csp_export/gen_x30_merge.py [--apply] [--scope carriers|all]
      [--log <msvc build log>] [--plan <out.json>] [--report <out.txt>]
"""
import json
import re
import sys
import collections
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
E4C = SRC / 'e4' / 'classes'
GAP2_DECLS = SRC / '_gap2' / 'gap2_global_decls.hpp'
TREE_FULL = E4C / '_tree_full_e4.hpp'

APPLY = '--apply' in sys.argv
SCOPE = 'all'
if '--scope' in sys.argv:
    SCOPE = sys.argv[sys.argv.index('--scope') + 1]
LOG = None
if '--log' in sys.argv:
    LOG = sys.argv[sys.argv.index('--log') + 1]
PLAN_OUT = None
if '--plan' in sys.argv:
    PLAN_OUT = sys.argv[sys.argv.index('--plan') + 1]
REPORT = None
if '--report' in sys.argv:
    REPORT = sys.argv[sys.argv.index('--report') + 1]

# --------------------------------------------------------------------------
# type tables
# --------------------------------------------------------------------------
SCALAR_RE = re.compile(
    r'^(?:unsigned |signed )?(?:int|char|short|long|__int\d+)$'
    r'|^(?:u?int(?:8|16|32|64)_t)$'
    r'|^(?:bool|float|double|BOOL|size_t|DWORD|WORD|BYTE)$')
KNOWN_SCALAR = {
    'int', 'bool', 'float', 'double', 'char', 'unsigned char', 'signed char',
    'unsigned int', 'unsigned short', 'short', 'unsigned long', 'long',
    'unsigned long long', 'long long', '__int64', 'unsigned __int64',
    'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t',
    'int8_t', 'int16_t', 'int32_t', 'int64_t', 'BOOL', 'size_t',
}
RANK = {'ANCHORED': 3, 'DIRECT_PROP': 2, 'CHAIN_PROP': 1, 'ORPHAN': 0}
GOOD_RANK = 2          # DIRECT_PROP or better


def is_scalar(t):
    return bool(t) and (t in KNOWN_SCALAR or SCALAR_RE.match(str(t)))


CLS_RE = re.compile(r'^[A-Za-z_]\w*$')


def is_cls(t):
    return (bool(t) and t not in KNOWN_SCALAR and t not in ('VOID_PTR', 'TOP')
            and CLS_RE.match(str(t)))


def is_ptrfam(t):
    if not t:
        return False
    t = str(t)
    return t == 'VOID_PTR' or t.endswith('*') or is_cls(t)


def engine_to_cpp(t):
    if t == 'VOID_PTR':
        return 'void*'
    if is_cls(t):
        return str(t) + '*'
    return str(t)


def norm_type(t):
    return re.sub(r'\s+', ' ', (t or '').strip())


def compact(t):
    return re.sub(r'\s+', '', t or '')


def kind_c(t):
    """classify a C++ type spelling"""
    t = compact(t)
    if not t:
        return 'none'
    if t == 'void*':
        return 'voidptr'
    if re.match(r'^char\[\d*\]$', t) or re.match(r'^unsignedchar\[\d*\]$', t):
        return 'blob'
    if t.endswith('*'):
        return 'ptr'
    if t.endswith('[]'):
        return 'blob'
    if t in KNOWN_SCALAR or SCALAR_RE.match(t):
        return 'scalar'
    return 'other'


print('loading type_map.json ...', flush=True)
TM = json.loads((ROOT / 'type_map.json').read_text(encoding='utf-8'))['type_map']

# fn -> this class
cls_of = {}
fn_this = {}
for k, v in TM.items():
    if k.endswith(':this'):
        t = (v or {}).get('type')
        if is_cls(t):
            cls_of[k[:-5]] = str(t)
        fn_this[k[:-5]] = t

# atoms: (class, off) -> dict(type=chosen, rank, types Counter)
_pat = re.compile(
    r'^(0x[0-9A-Fa-f]+)(?:::|:)(this|param\d+)\.member\((0x[0-9A-Fa-f]+)\)$')
atoms = collections.defaultdict(collections.Counter)
atom_rank = collections.defaultdict(lambda: -1)
atom_trank = collections.defaultdict(collections.Counter)   # per-type max rank
for k, v in TM.items():
    if '.member(' not in k:
        continue
    m = _pat.match(k)
    if not m:
        continue
    fn, which, offs = m.group(1), m.group(2), int(m.group(3), 16)
    if which == 'this':
        c = cls_of.get(fn)
    else:
        pv = TM.get('%s::%s' % (fn, which))
        pt = (pv or {}).get('type')
        c = str(pt) if is_cls(pt) else None
    if not c:
        continue
    t = (v or {}).get('type')
    if not t or t in ('TOP', 'unknown'):
        continue
    atoms[(c, offs)][str(t)] += 1
    r = RANK.get((v or {}).get('confidence', 'ORPHAN'), 0)
    if r > atom_rank[(c, offs)]:
        atom_rank[(c, offs)] = r
    if r > atom_trank[(c, offs)][str(t)]:
        atom_trank[(c, offs)][str(t)] = r


def chosen_type(cls, off):
    """Rank-weighted majority: score = max_rank(type) * count(type).
    Ties prefer pointer-family (evidence-backed promotions), then name."""
    cnt = atoms.get((cls, off))
    if not cnt:
        return None, -1
    rk_all = atom_rank[(cls, off)]
    tr = atom_trank[(cls, off)]
    best = None
    for t, n in cnt.items():
        score = (tr.get(t, 0) * n, 1 if is_ptrfam(t) else 0, n, t)
        if best is None or score > best:
            best = score
    return best[3], rk_all


# fn-level atoms (unresolved receivers keying): fn -> {off: (type, rank)}
fn_atoms = collections.defaultdict(dict)
for k, v in TM.items():
    m = re.match(r'^(0x[0-9A-Fa-f]+):this\.member\((0x[0-9A-Fa-f]+)\)$', k)
    if not m:
        continue
    fn_atoms[m.group(1)][int(m.group(2), 16)] = (
        (v or {}).get('type'),
        RANK.get((v or {}).get('confidence', 'ORPHAN'), 0))

print('loading canon + member_lookup ...', flush=True)
canon = json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                   .read_text(encoding='utf-8'))
try:
    ml = json.loads((ROOT / 'tools' / 'member_lookup.json')
                    .read_text(encoding='utf-8'))
except OSError:
    ml = {}

# --------------------------------------------------------------------------
# e4-universe type visibility: a retype/supply type T* is only safe when T is
# declared somewhere in the e4 carrier set; tree-universe templates/enums/
# aliases (TREE_SPECIAL) must never be refined to bare T* (X27's void*
# two-universe fallback; C2955/C4430 incidents).
# --------------------------------------------------------------------------
print('building visibility + tree-special sets ...', flush=True)
VISIBLE = set()
_VPAT = re.compile(r'^\s*(?:struct|class)\s+(\w+)\s*[;{]', re.M)
for _p in ([E4C / '_fwd_e4.hpp', GAP2_DECLS] + sorted(E4C.glob('*_e4.hpp'))):
    try:
        _t = _p.read_bytes().decode('utf-8', errors='replace')
    except OSError:
        continue
    VISIBLE |= set(_VPAT.findall(_t))

_ENUM_RE = re.compile(r'^[ \t]*enum(?:\s+class)?\s+([A-Za-z_]\w*)', re.M)
_ALIAS_RE = re.compile(r'^[ \t]*using\s+([A-Za-z_]\w*)\s*=', re.M)
_TMPL_RE = re.compile(
    r'^template[^\n]*\n[ \t]*(?:class|struct)\s+([A-Za-z_]\w*)', re.M)
_FTMPL_RE = re.compile(r'^template[^\n]*\n[ \t]*[A-Za-z_][\w\s\*<>,:&]*?'
                       r'\b([A-Za-z_]\w*)\s*\(', re.M)
TREE_SPECIAL = set()
for _p in sorted(SRC.rglob('*.hpp')):
    _s = str(_p)
    if 'e4' in _s or 'csp_canon' in _s or '_generated' in _s:
        continue
    try:
        _t = _p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    if 'namespace ra2' in _t or 'namespace gamemd' not in _t:
        continue
    TREE_SPECIAL |= set(_ENUM_RE.findall(_t))
    TREE_SPECIAL |= set(_ALIAS_RE.findall(_t))
    TREE_SPECIAL |= set(_TMPL_RE.findall(_t))
    TREE_SPECIAL |= {n for n in _FTMPL_RE.findall(_t) if not n.isupper()}


def guard_type(ty_c):
    """Degrade a `T*` whose T is not safely usable in the e4 universe."""
    ty_c = (ty_c or '').strip()
    m = re.match(r'^([A-Za-z_]\w*)\s*\*+$', ty_c)
    if not m:
        return ty_c
    base = m.group(1)
    if base in TREE_SPECIAL or base not in VISIBLE:
        return 'void*'
    return ty_c

# --------------------------------------------------------------------------
# canon member -> C++ type (mirrors gen_tree_full.cpptype degradation)
# --------------------------------------------------------------------------
PRIM = {'unsigned int', 'int', 'unsigned short', 'short', 'unsigned char',
        'signed char', 'char', 'bool', 'float', 'double', 'unsigned long',
        'long', 'unsigned long long', 'long long', 'void', 'int32_t',
        'uint32_t', 'int16_t', 'uint16_t', 'int64_t', 'uint64_t', 'int8_t',
        'uint8_t'}


def canon_cpptype(t, size):
    t = (t or '').strip()
    if not t:
        return 'unsigned int' if (size or 4) >= 4 else 'unsigned char'
    m = re.match(r'^(.*?)\s*\*+$', t)
    if m:
        base = m.group(1).strip()
        if base in PRIM or base in canon:
            return re.sub(r'\s*\*+\s*$', '*', t)
        return 'void' + t[len(m.group(1)):]
    if t in PRIM:
        return t
    # bare class name = by-value struct in canon -> layout blob
    return 'char[%d]' % max(1, size or 1)


# --------------------------------------------------------------------------
# struct parsing
# --------------------------------------------------------------------------
STRUCT_OPEN = re.compile(r'^\s*struct\s+(\w+)\s*\{\s*$')
STRUCT_OPEN_ANY = re.compile(r'^\s*struct\s+(\w+)\s*\{')
IDENT_RE = re.compile(r'\b([A-Za-z_]\w*)\b')
METHOD_RE = re.compile(r'\b([A-Za-z_]\w*)\s*\(')


def strip_comments(line):
    """remove // and /* */ comments (used for declaration-shape checks)."""
    out = []
    i = 0
    n = len(line)
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


def parse_member(line):
    """Return (indent, type, name, array, comment) or None.

    X30: the shape checks run on the DECLARATION ONLY (comments stripped) —
    a '(' inside a trailing `// ... (note)` must not hide a member, or the
    dedupe misses it and supply re-adds it (C2086/C2371 duplicate cascade)."""
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
                                    'template', 'return', 'static')):
        return None
    arr = ''
    ma = re.search(r'\[\s*\d*\s*\]\s*$', core)
    if ma:
        arr = ma.group(0).replace(' ', '')
        core = core[:ma.start()].strip()
        if not core:
            return None
    mn = re.search(r'([A-Za-z_]\w*)\s*\**\s*$', core)
    if not mn:
        return None
    name = mn.group(1)
    ty = core[:mn.start()].rstrip()
    # stars attached to the name belong to the type
    tail = core[mn.start():]
    stars = tail[len(name):].replace(' ', '')
    ty = (ty + stars).strip()
    if not ty:
        return None
    # reject control keywords pretending to be types
    if ty.split()[0] in ('return', 'else', 'case', 'goto', 'if', 'while',
                         'switch', 'for', 'do'):
        return None
    indent = line[:len(line) - len(line.lstrip())]
    return (indent, norm_type(ty), name, arr, comment)


def parse_structs(text):
    """[(name, open_line, close_line, [(line_no, indent, type, name, arr,
    comment, raw)])] — 0-based line indexes; bodies only (depth-0 struct)."""
    lines = text.split('\n')
    out = []
    i = 0
    n = len(lines)
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
                members.append((j, pm[0], pm[1], pm[2], pm[3], pm[4],
                                lines[j]))
            j += 1
        out.append((name, i, j, members))
        i = j + 1 if j < n else n
    return out, lines


def struct_identifiers(lines, open_i, close_i):
    ids = set()
    for k in range(open_i + 1, close_i):
        ln = lines[k]
        for mm in METHOD_RE.finditer(ln):
            ids.add(mm.group(1))
        pm = parse_member(ln)
        if pm:
            ids.add(pm[2])
    return ids


# --------------------------------------------------------------------------
# per-struct merge
# --------------------------------------------------------------------------
def member_size(ty, arr):
    """declared byte size of a member (best effort)."""
    if arr:
        m = re.match(r'\[\s*(\d+)\s*\]', arr)
        return int(m.group(1)) if m else 4
    c = compact(ty)
    if c.endswith('*') or c.endswith('**'):
        return 4
    if c in ('bool', 'char', 'unsignedchar', 'signedchar', 'uint8_t',
             'int8_t', 'BYTE'):
        return 1
    if c in ('short', 'unsignedshort', 'int16_t', 'uint16_t', 'WORD'):
        return 2
    if c in ('double', 'unsignedlonglong', 'longlong', '__int64',
             'unsigned__int64', 'int64_t', 'uint64_t'):
        return 8
    return 4


def supply_list(cls, have_names, fn_key, site_shape_map):
    """Members to supply for cls given existing names.  Returns ordered list
    of (name, off, ty, src); `have_names` is updated in place."""
    out = []
    ce = canon.get(cls)
    if ce:
        for off_s, mm in (ce.get('members') or {}).items():
            try:
                off = int(str(off_s), 0)
            except ValueError:
                continue
            nm = (mm.get('name') or '').strip()
            if not nm or not CLS_RE.match(nm):
                continue
            if nm in have_names or nm == cls:
                continue
            if nm in VISIBLE or nm in TREE_SPECIAL:
                continue  # a member must not shadow a type name (C2327)
            if re.match(r'^(vfptr\d*|vtable\d+|vt_\d+)$', nm):
                continue
            nt, rk = chosen_type(cls, off)
            if nt is not None and rk >= GOOD_RANK and (
                    is_ptrfam(nt) or is_scalar(nt)):
                ty_c = engine_to_cpp(nt)
                src = 'type_map'
            else:
                ty_c = canon_cpptype(mm.get('type'), mm.get('size'))
                src = 'canon'
            ty_c = guard_type(ty_c)
            ms = re.match(r'^([A-Za-z_]\w*)\s*\*+$', ty_c)
            if ms and ms.group(1) in have_names:
                ty_c = 'void*'   # X30 shadow guard (C2327)
            if compact(ty_c) in ('x',) or 'ARRAY' in ty_c:
                continue
            if ty_c.startswith('char['):
                continue  # blob supply adds nothing the body can use
            have_names.add(nm)
            out.append((nm, off, ty_c, src))

    # receiver log supply (names the bodies actually use)
    for nm in sorted(log_names_by_cls.get(cls, set())):
        if nm in have_names or nm == cls or not CLS_RE.match(nm):
            continue
        if nm in VISIBLE or nm in TREE_SPECIAL:
            continue  # a member must not shadow a type name (C2327)
        if site_shape_map.get((cls, nm)) == 'method':
            continue  # calling the name; a data member cannot help
        off = decode_offset_name(nm)
        if off is None:
            for _off_s, _ent in (ml.get(cls) or {}).items():
                if isinstance(_ent, dict) and _ent.get('name') == nm:
                    try:
                        off = int(str(_off_s), 0)
                    except (TypeError, ValueError):
                        off = None
                    break
        ty_c = None
        src = None
        # X30 idempotence: the atom table is the same authority the retype
        # pass uses — consult it FIRST so a supplied member lands with its
        # final type in one pass (otherwise run 2 re-types the supply).
        if off is not None:
            nt2, rk2 = chosen_type(cls, off)
            if (nt2 is not None and rk2 >= GOOD_RANK
                    and (is_ptrfam(nt2) or is_scalar(nt2))):
                ty_c = engine_to_cpp(nt2)
                src = 'type_map'
        if ty_c is None and fn_key and off is not None:
            at = fn_atoms.get(fn_key, {}).get(off)
            if at and at[0] and (is_ptrfam(at[0]) or is_scalar(at[0])):
                ty_c = engine_to_cpp(at[0])
                src = 'fn-atom'
        if ty_c is None and off is not None:
            ent = (ml.get(cls) or {}).get(str(off))
            if ent and ent.get('type'):
                t = str(ent['type'])
                ty_c = t if (t.endswith('*') or is_scalar(t)) else t
                if t != 'VOID_PTR' and not t.endswith('*') and is_cls(t):
                    ty_c = t + '*'
                elif t == 'VOID_PTR':
                    ty_c = 'void*'
                src = 'member_lookup'
        if ty_c is None:
            ty_c = 'unsigned int'
            src = 'default'
        ty_c = guard_type(ty_c)
        ms = re.match(r'^([A-Za-z_]\w*)\s*\*+$', ty_c)
        if ms and ms.group(1) in have_names:
            ty_c = 'void*'   # X30 shadow guard (C2327)
        have_names.add(nm)
        out.append((nm, off if off is not None else -1, ty_c, src))
    return out


def supply_decl(nm, off, ty, src):
    """Render one supply declaration line.  `ty` may carry an ml array form
    (`char[36]`) — render as a proper array declaration.  Anything that is
    not a safe identifier-type falls back to `unsigned int` (fail-safe)."""
    marr = re.match(r'^([A-Za-z_]\w*)\s*\[(\d+)\]$', ty)
    if marr:
        base = '%s %s[%s];' % (marr.group(1), nm, marr.group(2))
    else:
        if not re.match(r'^[A-Za-z_][\w ]*\*?$', ty):
            ty = 'unsigned int'
        base = '%s %s;' % (ty, nm)
    if off is not None and off >= 0:
        return '    %s  // 0x%X [X30:%s]' % (base, off, src)
    return '    %s  // [X30:%s]' % (base, src)


def plan_struct(cls, members, identifiers, log_names, fn_key, site_shape):
    """Return (retype_edits, supply_lines) — retype_edits: list of
    (line_idx, new_line_text); supply_lines: list of (name, off, type, src)."""
    retype = []
    have_names = set(identifiers)

    # ---- 1. retype in place
    for (li, indent, ty, name, arr, comment, raw) in members:
        off = None
        mo = re.search(r'0x([0-9A-Fa-f]+)', comment or '')
        if mo:
            off = int(mo.group(1), 16)
        if off is None:
            continue
        if off == 0:
            continue
        if re.match(r'^(vfptr\d*|vtable\d+|vt_\d+)$', name):
            continue
        if name.startswith('__pad') or name.startswith('alignmentPadding'):
            continue
        nt, rk = chosen_type(cls, off)
        if nt is None or rk < GOOD_RANK:
            continue
        if not is_ptrfam(nt) and not is_scalar(nt):
            continue
        new_t = engine_to_cpp(nt)
        cur_c = compact(ty + arr)
        new_c = compact(new_t)
        if cur_c == new_c:
            continue
        kc, kn = kind_c(ty + arr), kind_c(new_t)
        sz = member_size(ty, arr)
        # X30 visibility gate: never refine void* -> bare template/enum/alias
        # (X27's two-universe fallback must survive); degrade any other
        # un-declared class pointer to void* (C4430/C2143 syntax incidents).
        mt = re.match(r'^([A-Za-z_]\w*)\s*\*+$', new_t)
        if mt:
            base = mt.group(1)
            if base in TREE_SPECIAL:
                if kc == 'voidptr':
                    continue  # keep the X27 fallback
                new_t = 'void*'
            elif base not in VISIBLE:
                new_t = 'void*'
            elif base in identifiers:
                # X30 shadow guard: `void* AbstractClass;` member shadows the
                # type name inside this class — `AbstractClass*` here would be
                # C2327 (not a type name).  Degrade to void*.
                new_t = 'void*'
            new_c = compact(new_t)
            kn = kind_c(new_t)
            if cur_c == new_c:
                continue
        admit = False
        if kc in ('scalar', 'blob', 'other') and kn in ('voidptr', 'ptr',
                                                        'class'):
            # pointer retype gates: 4-aligned slot, >=4-byte slot, and a
            # multi-byte blob is an array-by-value (never collapse to a
            # single pointer)
            if off % 4 == 0 and sz >= 4 and (kc != 'blob' or sz == 4):
                admit = True
        elif kc == 'blob' and kn == 'scalar':
            if off % 4 == 0:
                admit = True
        elif kc == 'voidptr' and kn == 'ptr':
            if off % 4 == 0:
                admit = True   # void* -> concrete class*
        if not admit:
            continue
        old_decl = raw[len(indent):].rstrip()
        new_decl = '%s %s;' % (new_t, name)
        if comment:
            new_decl += '  ' + comment + ' [X30:type_map]'
        else:
            new_decl += '  // [X30:type_map]'
        raw2 = indent + new_decl
        retype.append((li, raw2))

    # ---- 2+3. supply (canon + receiver-log), shared with tree-add
    supply = supply_list(cls, have_names, fn_key, site_shape)

    return retype, supply


def decode_offset_name(nm):
    m = re.match(r'^q([0-9A-F]{2,4})$', nm)
    if m:
        return int(m.group(1), 16)
    m = re.match(r'^u(?:8|16|32|64)_([0-9A-F]+)$', nm)
    if m:
        return int(m.group(1), 16)
    m = re.match(r'^ptr_([0-9A-F]+)$', nm)
    if m:
        return int(m.group(1), 16)
    m = re.match(r'^__pad_([0-9A-F]+)$', nm)
    if m:
        return int(m.group(1), 16)
    m = re.match(r'^M(\d+)$', nm)
    if m:
        return int(m.group(1), 10)
    m = re.match(r'^vtable(\d+)$', nm)
    if m:
        n = int(m.group(1))
        return 0 if n == 0 else (n - 1) * 4
    m = re.match(r'^m_([0-9A-F]+)$', nm)
    if m:
        return int(m.group(1), 16)
    # X30: name-encoded offsets (`DSurface_field_0x20`, `X_field_2A4`)
    m = re.match(r'^\w*field_0x([0-9A-Fa-f]+)$', nm)
    if m:
        return int(m.group(1), 16)
    m = re.match(r'^\w*_field_([0-9A-Fa-f]{2,4})$', nm)
    if m:
        return int(m.group(1), 16)
    return None


# --------------------------------------------------------------------------
# log mining
# --------------------------------------------------------------------------
log_pairs = collections.Counter()      # (cls, member) C2039
log_site = {}                          # (cls, member) -> (file, line0)
log_c2027_names = set()
log_text = ''
if LOG:
    log_text = Path(LOG).read_bytes().decode('utf-8', errors='replace')
    _lp = re.compile(r'([A-Za-z0-9_\-\.\\/:]+\.cpp)\((\d+),\d*\): error '
                     r'C2039: ["\u201c](\w+)["\u201d]: .{0,60}?gamemd::(\w+)')
    for m in _lp.finditer(log_text):
        key = (m.group(4), m.group(3))
        log_pairs[key] += 1
        log_site.setdefault(key, (m.group(1), int(m.group(2)) - 1))
    for m in re.finditer(
            r'error C2027: .{0,30}?gamemd::(\w+)', log_text):
        log_c2027_names.add(m.group(1))

log_names_by_cls = collections.defaultdict(set)
for (cls, mem) in log_pairs:
    log_names_by_cls[cls].add(mem)   # X30: all classes, not just receivers

# site shape: is the member used as a call? (calling it would need a method
# decl, which a data member cannot provide)
_site_cache = {}


def site_shape_of(cls, mem):
    pf = log_site.get((cls, mem))
    if not pf:
        return 'unknown'
    f, l0 = pf
    p = Path(f)
    if not p.is_absolute():
        p = ROOT / f
    try:
        if p not in _site_cache:
            _site_cache[p] = p.read_bytes().decode('utf-8',
                                                   errors='replace').split('\n')
        lines = _site_cache[p]
        if 0 <= l0 < len(lines):
            ln = lines[l0]
            mm = re.search(r'\b%s\b(\s*[\(\[]?)' % re.escape(mem), ln)
            if mm and mm.group(1).lstrip().startswith('('):
                return 'method'
            if mm:
                return 'data'
    except OSError:
        pass
    return 'unknown'


site_shape = {}
for (cls, mem) in log_pairs:
    site_shape[(cls, mem)] = site_shape_of(cls, mem)


def fn_key_of(cls):
    m = re.match(r'^(?:Gap2|E4)Recv_([0-9A-Fa-f]+)$', cls)
    if not m:
        return None
    try:
        addr = int(m.group(1), 16)
    except ValueError:
        return None
    return '0x%08X' % addr


# --------------------------------------------------------------------------
# main pass
# --------------------------------------------------------------------------
FILES = []
FILES.append(TREE_FULL)
FILES += [p for p in sorted(E4C.glob('*_e4.hpp')) if p != TREE_FULL]
if SCOPE in ('all', 'receivers'):
    FILES.append(GAP2_DECLS)

STATS = collections.Counter()
PLAN = {'retypes': [], 'supplies': [], 'receiver_supplies': [],
        'tree_adds': [], 'files': {}}
CHANGED_FILES = []

for path in FILES:
    raw_bytes = path.read_bytes()
    try:
        text = raw_bytes.decode('utf-8')
        codec = 'utf-8'
    except UnicodeDecodeError:
        text = raw_bytes.decode('latin-1')
        codec = 'latin-1'
    structs, lines = parse_structs(text)
    if not structs:
        continue
    STATS['structs_before_all'] += len(structs)
    STATS['members_before_all'] += sum(len(s[3]) for s in structs)
    edits = []      # (line_idx, new_text)
    inserts = []    # (close_line_idx, [texts])
    file_stat = collections.Counter()
    for (cls, open_i, close_i, members) in structs:
        if close_i >= len(lines):
            continue
        ids = struct_identifiers(lines, open_i, close_i)
        rt, sup = plan_struct(cls, members, ids,
                              log_names_by_cls, fn_key_of(cls), site_shape)
        for (li, txt) in rt:
            edits.append((li, txt))
            file_stat['retype'] += 1
            PLAN['retypes'].append({'file': str(path), 'cls': cls,
                                    'line': li + 1, 'old': lines[li].strip(),
                                    'new': txt.strip()})
        if sup:
            add = []
            for (nm, off, ty, src) in sup:
                add.append(supply_decl(nm, off, ty, src))
                if src == 'default':
                    PLAN['receiver_supplies'].append(
                        {'file': str(path), 'cls': cls, 'member': nm,
                         'off': off, 'type': ty, 'src': src})
                else:
                    PLAN['supplies'].append(
                        {'file': str(path), 'cls': cls, 'member': nm,
                         'off': off, 'type': ty, 'src': src})
            inserts.append((close_i, add))
            file_stat['supply'] += len(add)
    if not edits and not inserts:
        continue
    # apply bottom-up: A SINGLE descending pass over inserts+replaces, so no
    # operation shifts another operation's original line index.
    ops = []
    for (close_i, add) in inserts:
        ops.append((close_i, 0, add))
    for (li, txt) in edits:
        ops.append((li, 1, txt))
    ops.sort(key=lambda x: (-x[0], x[1]))
    new_lines = list(lines)
    for (idx, kind, payload) in ops:
        if kind == 0:
            new_lines[idx:idx] = payload
        else:
            new_lines[idx] = payload
    new_text = '\n'.join(new_lines)
    # post-verify: no member drop, no struct drop
    old_s = {s[0]: {m[3] for m in s[3]} for s in structs}
    structs2, _ = parse_structs(new_text)
    new_s = {s[0]: {m[3] for m in s[3]} for s in structs2}
    file_stat['structs_before'] = len(structs)
    file_stat['structs_after'] = len(structs2)
    file_stat['members_before'] = sum(len(s[3]) for s in structs)
    file_stat['members_after'] = sum(len(s[3]) for s in structs2)
    if (file_stat['structs_after'] < file_stat['structs_before']
            or file_stat['members_after'] < file_stat['members_before']):
        print('ABORT: shrink detected in %s' % path)
        sys.exit(2)
    for sname, mems in old_s.items():
        if sname not in new_s:
            (ROOT / '.omo/evidence/optimization/x30/abort_dump.txt'
             ).write_bytes(new_text.encode('utf-8', errors='replace'))
            print('ABORT: struct dropped: %s in %s' % (sname, path))
            sys.exit(2)
        lost = mems - new_s[sname]
        if lost:
            print('ABORT: members dropped in %s::%s: %s'
                  % (path.name, sname, sorted(lost)[:5]))
            sys.exit(2)
    PLAN['files'][str(path)] = dict(file_stat)
    STATS.update(file_stat)
    STATS['files_changed'] += 1
    CHANGED_FILES.append(str(path))
    if APPLY:
        path.write_bytes(new_text.encode(codec))

# --------------------------------------------------------------------------
# tree-add (mined need classes appended to _tree_full_e4.hpp)
# --------------------------------------------------------------------------
if SCOPE in ('all', 'tree-add') and LOG:
    tf_text = TREE_FULL.read_bytes().decode('utf-8', errors='replace')
    structs_tf, tf_lines = parse_structs(tf_text)
    have = {s[0] for s in structs_tf}
    # X30: a class defined ANYWHERE in src (hh/hpp/cpp, struct OR class
    # keyword) must not be re-added, else decl-authority C2011 conflicts
    # (the _w14_nocarrier / Voxel_e4.cpp duplicate-definition incident).
    _DEF = re.compile(r'^\s*(?:struct|class)\s+(\w+)\s*\{', re.M)
    for p in SRC.rglob('*'):
        if p.suffix not in ('.hpp', '.hh', '.cpp', '.h', '.c'):
            continue
        try:
            t = p.read_bytes().decode('utf-8', errors='replace')
        except OSError:
            continue
        have |= set(_DEF.findall(t))
    # also fwd decls count as having (a full def elsewhere? no: fwd in
    # tree_full means the def is expected here) -- treat fwd as absent
    PERSIST = ('CellCoord', 'Random', 'DeleteAndZero', 'WinAPI', 'INIClass',
               'CCFileClass', 'HouseClass', 'BuildingClass', 'TechnoClass',
               'ObjectClass', 'AnimClass', 'UnitClass', 'LoadOptions',
               'LightConvertClass', 'FileClass', 'TacticalMap', 'FactoryClass',
               'ConnectionClass', 'InfantryClass', 'AircraftClass',
               'HashTable', 'VectorClass', 'State', 'ShapeButtonClass',
               'DynamicVectorClass')
    need = set(log_c2027_names)
    for (cls, mem) in log_pairs:
        need.add(cls)
    targets = sorted(n for n in need
                     if n in canon and n not in have
                     and not n.isupper() and CLS_RE.match(n))
    for n in PERSIST:
        if (n in canon and n not in have and n not in targets
                and CLS_RE.match(n)):
            targets.append(n)
    targets = sorted(set(targets))
    new_block = []
    VEC_TMPL = {'VectorClass', 'DynamicVectorClass'}
    VEC_GUARD = ('#if !defined(GAMEMD_TREE_UNIVERSE) && '
                 '!defined(GAMEMD_E4_VECTOR_TREE_TRUTH)')
    STATIC_DECLS = {
        'WinAPI': ['static int Wrapper(int a2);'],
        'HashTable': [
            'static int Lookup(void *aP0, const char **aP1, unsigned int *aP2);',
            'static int Grow(void *aP0);',
            'static int Rebuild2(void *aP0);',
            'static int Clear(int aP0);',
            'static int RemoveHashTableEntry(void *aP0, int aP2);',
            'static int FindWOLHashTableEntry(void *aP0, const char **aP1, unsigned int *aP2);',
            'static int CleanupAndResize(void *aP0);',
            'static int RebuildEx(void *aP0);',
            'static int FindString(void *aP0, const char *aP1, unsigned int *aP2);',
        ],
    }
    for n in targets:
        new_block.append('struct %s;' % n)
    if targets:
        new_block.append('')
    for cls_name in targets:
        ent = canon.get(cls_name) or {}
        mems = ent.get('members') or {}
        lim = ent.get('size') or 0
        body = ['    void* vfptr;']
        used = {'vfptr'}
        for off_s in sorted(mems, key=lambda x: int(str(x), 0)):
            o0 = int(str(off_s), 0)
            if lim and o0 >= lim:
                continue
            mm = mems[off_s]
            nm = mm.get('name') or ('q%03X' % o0)
            if nm in used or nm.startswith('__pad') or not CLS_RE.match(nm):
                continue
            used.add(nm)
            nt, rk = chosen_type(cls_name, o0)
            if nt is not None and rk >= GOOD_RANK and is_ptrfam(nt):
                ty_c = engine_to_cpp(nt)
            else:
                ty_c = canon_cpptype(mm.get('type'), mm.get('size') or 4)
            ty_c = guard_type(ty_c)
            if ty_c.startswith('char['):
                body.append('    %s %s[%s];  // 0x%X'
                            % ('char', nm, ty_c[5:-1], o0))
            else:
                body.append('    %s %s;  // 0x%X' % (ty_c, nm, o0))
        # X30: same supply rules as existing structs (canon incl. pads +
        # receiver-log names) so one pass reaches the fixpoint
        for (nm, off, ty_c, src) in supply_list(cls_name, used,
                                                fn_key_of(cls_name),
                                                site_shape):
            body.append(supply_decl(nm, off, ty_c, src))
        if cls_name in VEC_TMPL:
            new_block.append(VEC_GUARD)
        new_block.append('struct %s {' % cls_name)
        new_block += body
        for extra in STATIC_DECLS.get(cls_name, ()):
            new_block.append('    ' + extra)
        new_block.append('};')
        if cls_name in VEC_TMPL:
            new_block.append('#endif')
        new_block.append('')
        PLAN['tree_adds'].append({'cls': cls_name,
                                  'members': len(body) - 1})
    if new_block:
        # insert before the final namespace close
        idx = None
        for k in range(len(tf_lines) - 1, -1, -1):
            if tf_lines[k].strip() == '} // namespace gamemd':
                idx = k
                break
        if idx is not None:
            merged = (tf_lines[:idx] + ['// ==== X30 additive-union tree '
                                        'class supply ===='] + new_block
                      + tf_lines[idx:])
            new_text = '\n'.join(merged)
            structs3, _ = parse_structs(new_text)
            old_s = {s[0]: {m[3] for m in s[3]} for s in structs_tf}
            new_s = {s[0]: {m[3] for m in s[3]} for s in structs3}
            ok = all(sn in new_s and old_s[sn] <= new_s[sn] for sn in old_s)
            if not ok:
                print('ABORT: tree-add would drop content')
                sys.exit(2)
            STATS['tree_add_classes'] = len(targets)
            if APPLY:
                TREE_FULL.write_bytes(new_text.encode('utf-8'))
            else:
                STATS['tree_add_classes_dry'] = len(targets)

# --------------------------------------------------------------------------
# report
# --------------------------------------------------------------------------
out = []
out.append('X30 merge %s' % ('APPLIED' if APPLY else 'DRY RUN'))
out.append('files changed: %d' % STATS.get('files_changed', 0))
out.append('retype edits: %d' % STATS.get('retype', 0))
out.append('supply members: %d' % STATS.get('supply', 0))
out.append('tree-add classes: %d'
           % STATS.get('tree_add_classes',
                       STATS.get('tree_add_classes_dry', 0)))
out.append('structs before/after: %d / %d'
           % (STATS.get('structs_before', 0), STATS.get('structs_after', 0)))
out.append('members before/after: %d / %d'
           % (STATS.get('members_before', 0), STATS.get('members_after', 0)))
out.append('CORPUS structs before: %d  members before: %d'
           % (STATS.get('structs_before_all', 0),
              STATS.get('members_before_all', 0)))
top = collections.Counter()
for f, st in PLAN['files'].items():
    top[Path(f).name] = st.get('retype', 0) + st.get('supply', 0)
out.append('top files by edits:')
for f, n in top.most_common(25):
    out.append('  %4d %s' % (n, f))
report = '\n'.join(out)
print(report)
if PLAN_OUT:
    Path(PLAN_OUT).write_text(json.dumps(PLAN, indent=1, ensure_ascii=False),
                              encoding='utf-8')
if REPORT:
    Path(REPORT).write_text(report, encoding='utf-8')
