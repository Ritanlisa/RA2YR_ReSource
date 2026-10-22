#!/usr/bin/env python3
"""X60 — flat carrier layout normalizer (regenerator).

Rebuilds the flat member region of every carrier struct so that:
  R1  members are declared in ASCENDING true-offset order with explicit
      `char __pad_N[N];` fills;
  R2  every member carries its TRUE offset (authority-backed);
  R3  no two members occupy the same bytes (deduped);
  R4  cross-class contaminated members are removed (semantic name proven to
      belong to another class and not to this one);
  R5  C++ sizeof == authoritative size (til class_layouts; canon fallback),
      tail padded; members beyond the authoritative size are dropped;
  R6  misaligned members are re-modeled per the authority: dropped when the
      authority proves different content at those bytes, demoted to a 1-byte
      `unsigned char` view when they sit inside authority padding.

Method declarations, guard macros, namespace frames and all non-member
lines are preserved verbatim.  Authority:
  1. .omo/evidence/optimization/x60/x60_til.json (+ x60_til_types.json)
     — live til dump (2026-10-17), the binary truth;
  2. anchors/csp_canon_members.json — fallback (size + members).

Usage:
  python tools/csp_export/gen_x60_carrier_layout.py            # dry run
  python tools/csp_export/gen_x60_carrier_layout.py --apply [--limit N]
  python tools/csp_export/gen_x60_carrier_layout.py --files a_e4.hpp,b_e4.hpp --apply
"""
import argparse
import json
import re
import sys
import collections
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
E4C = SRC / 'e4' / 'classes'
GAP2 = SRC / '_gap2' / 'gap2_global_decls.hpp'
EV = ROOT / '.omo' / 'evidence' / 'optimization' / 'x60'
TREE_FULL = E4C / '_tree_full_e4.hpp'

ap = argparse.ArgumentParser()
ap.add_argument('--apply', action='store_true')
ap.add_argument('--limit', type=int, default=0, help='max files per apply batch')
ap.add_argument('--files', default='', help='comma-separated file names to restrict to')
ap.add_argument('--plan', default=str(EV / 'x60_plan.json'))
ap.add_argument('--layout-sidecar', default='',
                help='X112: JSON sidecar of binary-rebuilt layouts; overrides the '
                     'til authority for the classes it contains (til untouched)')
ap.add_argument('--sidecar-only', action='store_true',
                help='X112: only rewrite structs present in the sidecar; leave every '
                     'other struct byte-identical')
ARGS = ap.parse_args()

# ------------------------------------------------------------------ authority
TIL = json.loads((EV / 'x60_til.json').read_text(encoding='utf-8'))
SIDECAR = {}
if ARGS.layout_sidecar:
    _sp = Path(ARGS.layout_sidecar)
    if not _sp.is_absolute():
        _sp = ROOT / _sp
    if _sp.exists():
        SIDECAR = json.loads(_sp.read_text(encoding='utf-8'))
    else:
        print('ABORT: layout sidecar not found: %s' % _sp)
        sys.exit(2)
try:
    TILT = json.loads((EV / 'x60_til_types.json').read_text(encoding='utf-8'))
except OSError:
    TILT = {}
CANON = json.loads((ROOT / 'anchors' / 'csp_canon_members.json').read_text(encoding='utf-8'))
ML = json.loads((ROOT / 'tools' / 'member_lookup.json').read_text(encoding='utf-8'))

DECODABLE = re.compile(
    r'^(?:q[0-9A-Fa-f]{2,6}|u(?:8|16|32|64)_[0-9A-Fa-f]+|ptr_[0-9A-Fa-f]+'
    r'|__pad_[0-9A-Fa-f]+|field_[0-9A-Fa-f]{1,6}|\w*_field_[0-9A-Fa-f]{2,6}'
    r'|M\d+|vfptr\d*|vtable\d*|vt_\w+|unknown_?\d*)$')

# semantic name -> classes that authoritatively own it
name_owner = collections.defaultdict(set)
for c, e in CANON.items():
    for m in (e.get('members') or {}).values():
        nm = (m or {}).get('name') or ''
        if nm and not DECODABLE.match(nm):
            name_owner[nm].add(c)
for c, e in ML.items():
    if not isinstance(e, dict):
        continue
    for v in e.values():
        if isinstance(v, dict) and str(v.get('src', '')).startswith('til-sync'):
            nm = (v or {}).get('name') or ''
            if nm and not DECODABLE.match(nm):
                name_owner[nm].add(c)


def authority(cls):
    """(size, slots=[(off, size, name|'', type|'')]) — til first, canon fallback.

    X112: when a binary-rebuilt sidecar class entry exists it is the authority
    (the til for that class is a proven stub; the sidecar was rebuilt from
    capstone-verified this-relative accesses).
    """
    se = (SIDECAR.get('classes') or {}).get(cls)
    if se:
        size = int(se.get('computed_size') or 0)
        slots = []
        for m in se.get('members') or []:
            off = int(m.get('off') or 0)
            sz = int(m.get('width') or m.get('size') or 0)
            nm = m.get('name') or ''
            ty = m.get('type') or ''
            if size > 0 and sz > 0 and off >= 0 and off + sz <= size:
                slots.append((off, sz, nm, ty))
        if size > 0 and slots:
            slots.sort()
            return size, slots
    t = TIL.get(cls)
    if t:
        slots = [(int(m['off']), int(m['size']), m.get('name') or '',
                  (TILT.get(cls, {}).get(m.get('name') or '', {}) or {}).get('type', ''))
                 for m in t['members'] if int(m['size']) > 0]
        slots.sort()
        return int(t['size']), slots
    ce = CANON.get(cls)
    if ce:
        try:
            size = int(ce.get('size') or 0)
        except (TypeError, ValueError):
            size = 0
        if size > 0:
            slots = []
            for k, m in (ce.get('members') or {}).items():
                try:
                    off = int(str(k), 0)
                except ValueError:
                    continue
                nm = (m or {}).get('name') or ''
                sz = int((m or {}).get('size') or 4)
                if not nm or sz <= 0 or off < 0 or off + sz > size:
                    continue
                slots.append((off, sz, nm, (m or {}).get('type') or ''))
            slots.sort()
            return size, slots
    return 0, []


# ------------------------------------------------------------------ refcounts
RC_PATH = EV / 'x60_refcounts.json'
if RC_PATH.exists():
    REFCOUNT = {k: int(v) for k, v in
                json.loads(RC_PATH.read_text(encoding='utf-8')).items()}
else:
    print('building member reference counts (one pass) ...', flush=True)
    REFCOUNT = collections.Counter()
    cpps = list((SRC / 'e4').rglob('*.cpp'))
    if GAP2.exists():
        cpps.append(GAP2)
    tok = re.compile(r'[A-Za-z_]\w*')
    for p in cpps:
        try:
            text = p.read_bytes().decode('latin-1')
        except OSError:
            continue
        REFCOUNT.update(tok.findall(text))
    REFCOUNT = dict(REFCOUNT)
    RC_PATH.write_text(json.dumps(REFCOUNT), encoding='utf-8')

# ------------------------------------------------------------------ type help
IDA_TYPE_NORM = [
    (re.compile(r'\bunsigned\s+__int8\b'), 'unsigned char'),
    (re.compile(r'\bsigned\s+__int8\b'), 'char'),
    (re.compile(r'\bunsigned\s+__int16\b'), 'unsigned short'),
    (re.compile(r'\bsigned\s+__int16\b'), 'short'),
    (re.compile(r'\bunsigned\s+__int32\b'), 'unsigned int'),
    (re.compile(r'\bsigned\s+__int32\b'), 'int'),
    (re.compile(r'\bunsigned\s+__int64\b'), 'unsigned long long'),
    (re.compile(r'\b__int64\b'), 'long long'),
    (re.compile(r'\b__int16\b'), 'short'),
    (re.compile(r'\b__int32\b'), 'int'),
    (re.compile(r'\b__int8\b'), 'char'),
    (re.compile(r'\b_DWORD\b'), 'unsigned int'),
    (re.compile(r'\b_WORD\b'), 'unsigned short'),
    (re.compile(r'\b_BYTE\b'), 'unsigned char'),
    (re.compile(r'\b_QWORD\b'), 'unsigned long long'),
    (re.compile(r'\bBOOL\b'), 'int'),
]


def norm_ida_type(t):
    t = ' '.join((t or '').split())
    for rx, rep in IDA_TYPE_NORM:
        t = rx.sub(rep, t)
    return t


def type_width(ty):
    c = re.sub(r'\s+', '', ty or '')
    if not c:
        return 0
    if c.endswith('*'):
        return 4
    if c in ('bool', 'char', 'unsignedchar', 'signedchar', 'uint8_t', 'int8_t'):
        return 1
    if c in ('short', 'unsignedshort', 'int16_t', 'uint16_t', 'wchar_t'):
        return 2
    if c in ('double', 'unsignedlonglong', 'longlong', 'int64_t', 'uint64_t'):
        return 8
    return 4


def cp_type(t, size):
    """til member type -> C spelling; class pointers degrade to void* when the
    pointee has no carrier-visible declaration (X30 guard_type rule)."""
    t = norm_ida_type(t)
    m = re.match(r'^(.*?)\s*\[\s*(\d+)\s*\]$', t)
    if m:
        base = cp_type(m.group(1), 0)
        return '%s[%s]' % (base, m.group(2))
    if t.endswith('*') or t.endswith('&'):
        base = t[:-1].strip()
        if base and re.match(r'^[A-Za-z_]\w*$', base) and \
                base not in ('void', 'char', 'int', 'unsigned', 'short', 'long') \
                and not re.match(r'^(?:const|unsigned|signed|float|double|bool)$', base):
            # class pointer: safe only when declared somewhere in e4 carriers
            vis = base in TIL or (CANON.get(base) or {}).get('size')
            if not vis:
                return 'void*'
        # multi-word builtins keep their space: `unsigned int *`, not
        # `unsignedint *` (X116: sidecar pointer types hit this path)
        return re.sub(r'\s+', ' ', t.replace('*', ' * ')).strip()
    if re.match(r'^[A-Za-z_][\w ]*$', t):
        return t
    return 'char[%d]' % max(1, size or 1)


# ------------------------------------------------------------------ parsing
STRUCT_OPEN = re.compile(r'^(\s*)struct\s+(\w+)\s*\{\s*$')
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


def parse_member(line):
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
    ma = re.search(r'\[\s*(0[xX][0-9A-Fa-f]+|\d*)\s*\]\s*$', core)
    if ma:
        b = ma.group(1)
        if b:
            arr = '[%d]' % (int(b, 0))
        else:
            arr = '[]'
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
    if arr == '[]':
        return None
    off = None
    mo = re.search(r'0x([0-9A-Fa-f]+)', comment or '')
    if mo:
        off = int(mo.group(1), 16)
    else:
        for rx, base in ((r'^q([0-9A-Fa-f]{2,6})$', 16),
                         (r'^u(?:8|16|32|64)_([0-9A-Fa-f]+)$', 16),
                         (r'^(?:ptr|__pad)_([0-9A-Fa-f]+)$', 16),
                         (r'^(?:\w*_)?field_([0-9A-Fa-f]{1,6})$', 16)):
            m2 = re.match(rx, name)
            if m2:
                off = int(m2.group(1), base)
                break
        else:
            m3 = re.match(r'^M(\d+)$', name)
            if m3:
                off = int(m3.group(1), 10)
    size = type_width(ty)
    if arr:
        ma2 = re.match(r'\[(\d+)\]', arr)
        size = size * (int(ma2.group(1)) if ma2 else 0)
    return {'ty': ty, 'name': name, 'arr': arr, 'comment': comment,
            'off': off, 'size': size}


METHOD_NAME_RE = re.compile(r'\b([A-Za-z_]\w*)\s*\(')


def parse_method_names(lines, others):
    """Identifiers used as methods in the preserved non-member lines."""
    names = set()
    for j in others:
        decl = strip_comments(lines[j])
        if '(' not in decl:
            continue
        for m in METHOD_NAME_RE.finditer(decl):
            names.add(m.group(1))
    return names


def parse_file_structs(text):
    """[(name, open_idx, close_idx, member_recs, other_line_idxs)]"""
    lines = text.split('\n')
    out = []
    i, n = 0, len(lines)
    while i < n:
        m = STRUCT_OPEN.match(lines[i])
        if not m:
            i += 1
            continue
        name = m.group(2)
        depth = 1
        j = i + 1
        members, others = [], []
        while j < n and depth > 0:
            depth += lines[j].count('{') - lines[j].count('}')
            if depth <= 0:
                break
            pm = parse_member(lines[j])
            if pm:
                members.append(pm)
            elif lines[j].strip():
                others.append(j)
            j += 1
        out.append({'name': name, 'open': i, 'close': j,
                    'members': members, 'others': others})
        i = j + 1 if j < n else n
    return out, lines


# ------------------------------------------------------------------ layout
def build_layout(cls, members, stats, method_names=frozenset()):
    """Return (new_member_lines, notes) applying rules R1-R6."""
    size, slots = authority(cls)
    if size <= 0:
        return None, [{'op': 'skipped_no_authority'}], None
    # authority STARTS are real-named slots only; til __pad_* slots are pure
    # filler space (same as gaps) and must never act as member anchors, or
    # gap-fill pads flip-flop against them on re-runs
    slot_at = {off: (sz, nm, ty) for (off, sz, nm, ty) in slots
               if nm and not nm.startswith('__pad')}
    slot_ranges = sorted(slots)  # ascending

    def slot_covering(off):
        for (so, ssz, snm, sty) in slot_ranges:
            if so <= off < so + ssz:
                return (so, ssz, snm, sty)
        return None

    # 1. classify carrier members
    by_off = collections.defaultdict(list)
    for mrec in members:
        by_off[mrec['off'] if mrec['off'] is not None else -1].append(mrec)

    placed = {}     # off -> dict(ty,name,arr,note)  (final members)
    notes = []
    contaminated_drops = []

    for mrec in members:
        nm = mrec['name']
        off = mrec['off']
        # authority-protection: a member already sitting on an authority slot
        # start is layout-proven regardless of the name-veto index (prevents
        # til-supplied names from flip-flopping against the cross-class veto)
        on_slot_start = off is not None and off in slot_at
        if not on_slot_start:
            owners = name_owner.get(nm)
            if owners and cls not in owners and not DECODABLE.match(nm):
                # R4: proven other-class member
                notes.append({'op': 'drop_contaminated', 'name': nm, 'off': off,
                              'authority_classes': sorted(owners)[:4]})
                contaminated_drops.append((nm, off))
                stats['drop_contaminated'] += 1
                continue
        if off is None:
            # R2: try authority by name (offset 0 is a valid resolution)
            found = None
            ent = (TILT.get(cls, {}) or {}).get(nm)
            if ent:
                found = int(ent['off'])
            if found is None:
                ce = (CANON.get(cls, {}) or {}).get('members') or {}
                for k, mm in ce.items():
                    if (mm or {}).get('name') == nm:
                        try:
                            found = int(str(k), 0)
                        except ValueError:
                            found = None
                        break
            if found is None:
                for k, v in (ML.get(cls) or {}).items():
                    if isinstance(v, dict) and v.get('name') == nm:
                        try:
                            found = int(str(k), 0)
                        except ValueError:
                            found = None
                        break
            if found is None:
                notes.append({'op': 'drop_no_offset', 'name': nm})
                stats['drop_no_offset'] += 1
                continue
            off = found
            mrec = dict(mrec, off=off)

        if off < 0 or off >= size:
            notes.append({'op': 'drop_beyond_size', 'name': nm, 'off': off})
            stats['drop_beyond_size'] += 1
            continue
        slot = slot_at.get(off)
        cov = slot_covering(off)
        # X112: for a sidecar class the binary-rebuilt slot is the single
        # authority (name AND type AND width).  Any carrier member sitting on
        # that offset is dropped so slot emission declares it verbatim; this
        # also prevents a stale stub-til type (e.g. `unsigned char ptr_8`)
        # from overriding the rebuilt pointer type.
        if (SIDECAR.get('classes') or {}).get(cls) and slot is not None:
            notes.append({'op': 'drop_sidecar_slot', 'name': nm, 'off': off,
                          'kept': slot[1]})
            stats['drop_sidecar_slot'] += 1
            continue
        if slot is None and cov is not None and cov[2] and not cov[2].startswith('__pad'):
            # inside a real authority member -> lie vs binary
            notes.append({'op': 'drop_overlap_real', 'name': nm, 'off': off,
                          'slot': cov[2]})
            stats['drop_overlap_real'] += 1
            continue
        # pad-resident or slot-start member
        msize = mrec['size'] or type_width(mrec['ty'])
        # array alignment uses the ELEMENT width; __pad_* are byte views by
        # construction and are never demoted/truncated
        ma_el = re.match(r'\[(\d+)\]', mrec['arr'] or '')
        elem_w = type_width(mrec['ty']) if ma_el else msize
        aligned = (off % max(elem_w, 1)) == 0
        placed.setdefault(off, []).append((mrec, aligned, bool(slot is not None)))

    # 2. dedupe per offset (R3)
    final = {}
    for off, cands in placed.items():
        if len(cands) > 1:
            def score(t):
                mrec, aligned, at_slot = t
                s = REFCOUNT.get(mrec['name'], 0)
                if mrec['name'] == slot_at.get(off, (0, '', ''))[1]:
                    s += 10 ** 9
                if not DECODABLE.match(mrec['name']):
                    s += 10 ** 6
                if aligned:
                    s += 10 ** 3
                return (s, mrec['name'])
            cands.sort(key=score, reverse=True)
            for loser in cands[1:]:
                notes.append({'op': 'drop_duplicate', 'name': loser[0]['name'],
                              'off': off, 'kept': cands[0][0]['name']})
                stats['drop_duplicate'] += 1
        final[off] = cands[0]

    # 2b. duplicate-name guard (C++ forbids two members with one name):
    # keep the candidate sitting on its authority-by-name slot, drop others
    auth_name_off = {}
    for nm, ent in (TILT.get(cls, {}) or {}).items():
        try:
            auth_name_off[nm] = int(ent['off'])
        except (KeyError, TypeError, ValueError):
            pass
    if not auth_name_off:
        for k, mm in ((CANON.get(cls, {}) or {}).get('members') or {}).items():
            nm = (mm or {}).get('name')
            if nm:
                try:
                    auth_name_off.setdefault(nm, int(str(k), 0))
                except ValueError:
                    pass
    by_name = collections.defaultdict(list)
    for off, (mrec, aligned, at_slot) in final.items():
        by_name[mrec['name']].append(off)
    for nm, offs in by_name.items():
        if len(offs) < 2:
            continue
        auth_off = auth_name_off.get(nm)
        keep = None
        if auth_off is not None and auth_off in offs:
            keep = auth_off
        if keep is None:
            keep = sorted(offs)[0]
        for off in offs:
            if off != keep:
                notes.append({'op': 'drop_dup_name', 'name': nm, 'off': off,
                              'kept_off': keep})
                stats['drop_dup_name'] += 1
                del final[off]
    # names whose authority slot is a REAL til slot elsewhere: drop the
    # carrier claim so the slot emission can carry the name (C2369 guard)
    for off in list(final.keys()):
        nm = final[off][0]['name']
        auth_off = auth_name_off.get(nm)
        if (auth_off is not None and auth_off != off and auth_off in slot_at):
            notes.append({'op': 'drop_dup_name', 'name': nm, 'off': off,
                          'kept_off': auth_off, 'why': 'authority-slot'})
            stats['drop_dup_name'] += 1
            del final[off]
    # a data member must not shadow a method (C2365/C2064: call sites break)
    for off in list(final.keys()):
        nm = final[off][0]['name']
        if nm in method_names:
            notes.append({'op': 'drop_name_is_method', 'name': nm, 'off': off})
            stats['drop_name_is_method'] += 1
            del final[off]

    # 3. emit ascending with pads (R1) + demotion (R6) + tail pad (R5)
    #    merged-event walk: pads are pure gap-fill, so members carved inside
    #    an authority pad keep their offsets (a whole-pad emission here would
    #    swallow them).
    out_lines = []
    used_slot_names = {final[o][0]['name'] for o in final} | set(method_names)
    used_pad_names = {final[o][0]['name'] for o in final} | set(method_names)

    def pad_name(off):
        nm = '__pad_%X' % off
        while nm in used_pad_names:
            nm += 'g'
        used_pad_names.add(nm)
        return nm

    events = sorted(set(list(final.keys()) +
                        [s[0] for s in slot_ranges if s[2] and
                         not s[2].startswith('__pad')]))
    cur = 0
    for ev in events:
        if ev < cur:
            continue
        if ev > cur:
            out_lines.append(render_member('pad', cur, ev - cur, pad_name(cur)))
            cur = ev
        if ev in final:
            mrec, aligned, at_slot = final[ev]
            msize = mrec['size'] or type_width(mrec['ty'])
            # fit limit: next real slot start beyond this member, else class size
            limit = size
            for (so, ssz, snm, sty) in slot_ranges:
                if so > ev and snm and not snm.startswith('__pad'):
                    limit = so
                    break
            ty = mrec['ty']
            arr = mrec['arr']
            ma2 = re.match(r'\[(\d+)\]', arr or '')
            total = msize
            if ma2:
                total = type_width(ty) * int(ma2.group(1))
            slot_sz = slot_at.get(ev, (0, '', ''))[0]
            if at_slot and slot_sz and total != slot_sz:
                # R6/til-wins: the member sits on an authority slot whose true
                # width differs from the carrier claim -> adopt the til width.
                t_ent = (TILT.get(cls, {}) or {}).get(mrec['name']) or {}
                t_ty = norm_ida_type(t_ent.get('type') or '')
                tyc = cp_type(t_ty, slot_sz) if t_ty else ''
                ma3 = re.match(r'^(.*?)\[(\d+)\]$', tyc)
                ok = False
                if ma3:
                    ok = type_width(ma3.group(1)) * int(ma3.group(2)) == slot_sz
                elif tyc.endswith('*'):
                    ok = slot_sz == 4
                else:
                    ok = type_width(tyc) == slot_sz
                if not ok:
                    tyc = {1: 'unsigned char', 2: 'unsigned short',
                           4: 'unsigned int', 8: 'unsigned long long'}.get(
                               slot_sz, 'char[%d]' % slot_sz)
                notes.append({'op': 'retype_to_slot', 'name': mrec['name'],
                              'off': ev, 'was': mrec['ty'], 'now': tyc,
                              'slot_size': slot_sz})
                stats['retype_to_slot'] += 1
                ty = tyc
                arr = ''
                total = slot_sz
                aligned = (ev % max(total, 1)) == 0
            if not aligned and not at_slot and not mrec['name'].startswith('__pad'):
                # R6 demotion: 1-byte view inside authority padding
                if total > 1:
                    notes.append({'op': 'demote_unaligned', 'name': mrec['name'],
                                  'off': ev, 'was': ty})
                    stats['demote_unaligned'] += 1
                ty = 'unsigned char'
                arr = ''
                total = 1
            elif ev + total > limit:
                notes.append({'op': 'truncate_to_fit', 'name': mrec['name'],
                              'off': ev, 'was_size': total, 'limit': limit - ev})
                stats['truncate_to_fit'] += 1
                if limit - ev <= 0:
                    continue
                ty = 'char'
                arr = '[%d]' % (limit - ev)
                total = limit - ev
            out_lines.append(render_member('member', ev, (ty, mrec['name'], arr)))
            cur = ev + total
        else:
            ssz, snm, sty = slot_at[ev]
            if snm in used_slot_names:
                # name already carried by another member (C2369 guard):
                # the slot's bytes stay padding
                out_lines.append(render_member('pad', ev, ssz, pad_name(ev)))
                cur = ev + ssz
                continue
            tyc = cp_type(sty, ssz) if sty else ''
            ma3 = re.match(r'^(.*?)\[(\d+)\]$', tyc)
            tsize = 0
            if ma3:
                tsize = type_width(ma3.group(1)) * int(ma3.group(2))
            elif tyc.endswith('*'):
                tsize = 4
            else:
                tsize = type_width(tyc)
            if not tyc or tsize != ssz:
                tyc = 'char[%d]' % ssz
            out_lines.append(render_member('member', ev, (tyc, snm, '')))
            used_slot_names.add(snm)
            cur = ev + ssz
    if cur < size:
        out_lines.append(render_member('pad', cur, size - cur, pad_name(cur)))
        cur = size
    # packed-layout detection: any member whose offset violates its natural
    # alignment means the binary was compiled with #pragma pack(P); find the
    # minimal P in {1,2,4} reproducing the til exactly.  Tail rounding above
    # the authoritative size (C++ rounds sizeof up to max member alignment)
    # forces pack(1) — our explicit pads already carry every offset.
    pack_p = None
    max_align = 1
    for ln in out_lines:
        mo = re.search(r'//\s*0x([0-9A-Fa-f]+)\s*$', ln)
        if not mo:
            continue
        total, align = None, None
        decl = ln.split('//')[0].strip()
        if decl.endswith(';'):
            decl = decl[:-1].strip()
            ma = re.match(r'^(.*?)\s*\[(\d+)\]$', decl)
            if ma:
                base_decl, n = ma.group(1), int(ma.group(2))
                stars = base_decl.count('*')
                toks = [t for t in base_decl.split() if t != '*']
                base = ' '.join(t for t in toks if t in
                                ('unsigned', 'signed', 'long', 'short', 'int',
                                 'char', 'double', 'float', 'bool'))
                elem = 4 if stars else type_width(base)
                total, align = elem * n, min(max(elem, 1), 8)
            else:
                nm = re.search(r'([A-Za-z_]\w*)\s*\**\s*$', decl)
                if nm:
                    ty = decl[:nm.start()] + decl[nm.start() + len(nm.group(1)):]
                    total = type_width(ty.strip())
                    align = min(max(total, 1), 8)
        if not total or not align:
            continue
        off = int(mo.group(1), 16)
        max_align = max(max_align, align)
        if off % align != 0 and pack_p is None:
            for p in (1, 2, 4):
                if off % min(align, p) == 0:
                    pack_p = p
                    break
    if pack_p is None:
        rounded = (size + max_align - 1) // max_align * max_align
        if rounded != size:
            pack_p = 1  # tail-rounding guard: sizeof must equal til size
    return out_lines, notes, pack_p


def render_member(kind, off, payload, padnm=None):
    if kind == 'pad':
        return '    char %s[%d];  // 0x%X' % (padnm or ('__pad_%X' % off),
                                              payload, off)
    ty, nm, arr = payload
    # array-form types (`char[36]`) must attach the brackets to the NAME
    ma = re.match(r'^(.*?)\[(\d+)\]$', ty)
    if ma:
        return '    %s %s[%s];  // 0x%X' % (ma.group(1), nm, ma.group(2), off)
    line = '    %s %s%s;  // 0x%X' % (ty, nm, arr, off)
    return line


# ------------------------------------------------------------------ main
FILES = [TREE_FULL]
FILES += sorted(p for p in E4C.glob('*_e4.hpp') if p != TREE_FULL)
if GAP2.exists():
    FILES.append(GAP2)
if ARGS.files:
    want = set(ARGS.files.split(','))
    FILES = [p for p in FILES if p.name in want]

PLAN = {'files': {}, 'stats': collections.Counter()}
touched = []
for path in FILES:
    try:
        text = path.read_bytes().decode('utf-8')
        codec = 'utf-8'
    except UnicodeDecodeError:
        text = path.read_bytes().decode('latin-1')
        codec = 'latin-1'
    structs, lines = parse_file_structs(text)
    if not structs:
        continue
    fops = []
    new_lines = list(lines)
    edits = []   # (open_idx, close_idx, [new body lines])
    for st in structs:
        if ARGS.sidecar_only and st['name'] not in (SIDECAR.get('classes') or {}):
            continue
        st_stats = collections.Counter()
        layout, notes, pack_p = build_layout(
            st['name'], st['members'], st_stats,
            parse_method_names(lines, st['others']))
        if layout is None:
            fops.append({'struct': st['name'], 'skipped': notes})
            PLAN['stats']['structs_skipped_no_authority'] += 1
            continue
        body = list(layout)
        # regenerate the pack wrapper (existing pragma lines are dropped so
        # re-runs cannot duplicate them)
        if pack_p:
            body.insert(0, '#pragma pack(push, %d)  // X60: binary-packed layout' % pack_p)
            PLAN['stats']['packed_structs'] = PLAN['stats'].get('packed_structs', 0) + 1
        for o in st['others']:
            if lines[o].lstrip().startswith('#pragma pack('):
                continue
            body.append(lines[o])
        if pack_p:
            body.append('#pragma pack(pop)')
        if lines[st['open'] + 1:st['close']] == body:
            continue  # already normalized (byte-identical body)
        edits.append((st['open'], st['close'], body, st, notes, dict(st_stats)))
    if not edits:
        PLAN['files'][path.name] = {'ops': fops}
        continue
    for (oi, ci, body, st, notes, st_stats) in sorted(edits, key=lambda x: -x[0]):
        new_lines[oi + 1:ci] = body
        fops.append({'struct': st['name'], 'members_before': len(st['members']),
                     'members_after': len(body), 'notes': notes,
                     'stats': st_stats})
        for k, v in st_stats.items():
            PLAN['stats'][k] += v
        PLAN['stats']['structs_normalized'] += 1
    new_text = '\n'.join(new_lines)
    # post-verify: method/other lines all preserved
    lost = [l for l in lines if l not in new_lines and
            (l.strip().endswith(';') and '(' in l)]
    if lost:
        print('ABORT: method lines lost in %s: %r' % (path.name, lost[:3]))
        sys.exit(2)
    PLAN['files'][path.name] = {'ops': fops, 'codec': codec}
    touched.append((path, new_text, codec))

if ARGS.apply:
    written = 0
    for (path, new_text, codec) in touched:
        if ARGS.limit and written >= ARGS.limit:
            break
        path.write_bytes(new_text.encode(codec))
        written += 1
    print('APPLIED: %d files written' % written)
else:
    print('DRY RUN: %d files would change' % len(touched))

s = PLAN['stats']
print('structs normalized: %d  skipped(no authority): %d' % (
    s.get('structs_normalized', 0), s.get('structs_skipped_no_authority', 0)))
for k in ('drop_contaminated', 'drop_no_offset', 'drop_beyond_size',
          'drop_overlap_real', 'drop_duplicate', 'demote_unaligned',
          'truncate_to_fit'):
    print('  %-20s %d' % (k, s.get(k, 0)))
Path(ARGS.plan).write_text(json.dumps(PLAN, indent=1, ensure_ascii=False),
                           encoding='utf-8')
print('plan -> %s' % ARGS.plan)
