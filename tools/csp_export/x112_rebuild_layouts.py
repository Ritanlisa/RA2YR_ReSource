#!/usr/bin/env python3
"""X112 W1 (v2): rebuild true class layouts from IDA-cache binary evidence.

Evidence chain per member:
  IDA cache expression -> this-relative offset (byte arithmetic / array stride)
  -> capstone decode at the statement anchor (width + direct displacement match)
  -> optional til/member_lookup name.

Body names are corrected through the SAME anchor: the generated body and the
IDA cache share `/*0xADDR*/` anchors, so `this->u32_2028` (body, mis-scaled
array index) maps to `this->scenario[24]` (cache) at the same anchor.

Output: anchors/class_layouts_rebuilt.json  (sidecar; til untouched)
"""
import json, re, sys, collections
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
SC = ROOT / '.omo' / 'x112_scratch'

CACHE = json.load(open(SC / 'cache_evidence.json', encoding='utf-8'))
BODY_ANCHORS = json.load(open(SC / 'body_anchor_map.json', encoding='utf-8'))
BODY_EV = json.load(open(SC / 'body_evidence.json', encoding='utf-8'))
PARSED = json.load(open(SC / 'c2039_parsed.json', encoding='utf-8'))
TIL = json.load(open(ROOT / '.omo/evidence/optimization/x60/x60_til.json', encoding='utf-8'))
TILT = json.load(open(ROOT / '.omo/evidence/optimization/x60/x60_til_types.json', encoding='utf-8'))
CL = json.load(open(ROOT / 'tools/class_layouts.json', encoding='utf-8'))
ML = json.load(open(ROOT / 'tools/member_lookup.json', encoding='utf-8'))
VT = json.load(open(ROOT / 'anchors/vtable_authority.json', encoding='utf-8'))['classes']

MANDATORY = ['AudioSettings', 'BuildingPlacement', 'ColorListClass']
N_TARGET = 50
c39 = collections.Counter(dict(PARSED['by_class']))
c39names = collections.defaultdict(list)
for cls, name, n in PARSED['members']:
    c39names[cls.split('::')[-1]].append([name, n])

PLACEHOLDER = re.compile(
    r'^(?:__?pad\w*|_?pad_\w*|vfptr\d*|vtable\d*|vt_\w+|unknown\w*|'
    r'm_[0-9A-Fa-f]+|\w*_field_\w+|field_\w+|\w*_field_0x[0-9A-Fa-f]+)$')
METHODS = {}

def parse_off(nm):
    for rx in (r'^u(?:8|16|32|64)_([0-9A-Fa-f]+)$', r'^ptr_([0-9A-Fa-f]+)$',
               r'^q([0-9A-Fa-f]{2,6})$', r'^m_([0-9A-Fa-f]{1,6})$',
               r'_field_0x([0-9A-Fa-f]+)$', r'_field_([0-9A-Fa-f]{2,6})$',
               r'^__pad_?([0-9A-Fa-f]+)$'):
        m = re.match(rx, nm)
        if m:
            return int(m.group(1), 16)
    return None

def til_members(cls):
    e = TIL.get(cls) or {}
    out = {}
    for m in e.get('members') or []:
        n = m.get('name') or ''
        if not n:
            continue
        ty = (TILT.get(cls, {}) or {}).get(n, {}).get('type') or ''
        out[int(m['off'])] = {'name': n, 'size': int(m['size']), 'type': ty}
    return out, int(e.get('size') or 0)

def ml_members(cls):
    out = {}
    e = ML.get(cls) or {}
    if not isinstance(e, dict):
        return out
    for k, v in e.items():
        if not isinstance(v, dict):
            continue
        try:
            off = int(str(k), 0)
        except ValueError:
            continue
        n = v.get('name') or ''
        if n:
            out[off] = {'name': n, 'size': int(v.get('size') or 0), 'type': v.get('type') or ''}
    return out

def class_methods(cls):
    if cls in METHODS:
        return METHODS[cls]
    names = set()
    for fn in ('src/e4/classes/%s_e4.hpp' % cls,
               'src/e4/classes/_tree_full_e4.hpp',
               'src/_gap2/gap2_global_decls.hpp'):
        p = ROOT / fn
        if not p.exists():
            continue
        txt = p.read_text(encoding='utf-8', errors='replace')
        m = re.search(r'\b(?:struct|class)\s+' + re.escape(cls) + r'\s*(?::[^\{]*)?\{', txt)
        if not m:
            continue
        depth, i = 1, m.end()
        while i < len(txt) and depth:
            if txt[i] == '{':
                depth += 1
            elif txt[i] == '}':
                depth -= 1
            i += 1
        for mm in re.finditer(r'\b([A-Za-z_]\w*)\s*\(', txt[m.end():i]):
            names.add(mm.group(1))
    METHODS[cls] = names
    return names

def type_width_basic(ty):
    ty = ' '.join((ty or '').split())
    if ty.endswith('*'):
        return 4
    return {'char': 1, 'unsigned char': 1, 'signed char': 1, 'bool': 1,
            'short': 2, 'unsigned short': 2, 'wchar_t': 2,
            'int': 4, 'unsigned int': 4, 'long': 4, 'unsigned long': 4,
            'float': 4, 'double': 8, 'long long': 8,
            'unsigned long long': 8}.get(ty, 0)

def vtable_min(cls):
    e = VT.get(cls)
    if not e or not (e.get('slots') or []):
        return 0
    return max(int(s.get('byte', 0)) for s in e['slots']) + 4

def is_array_type(ty):
    return bool(re.match(r'^(.*?)\[\s*(\d+)\s*\]$', ty or ''))

def array_elem_w(ty, cl):
    m = re.match(r'^(.*?)\[\s*(\d+)\s*\]$', ty or '')
    if not m:
        return 0, 0
    base, n = m.group(1).strip(), int(m.group(2))
    w = {'char': 1, 'unsigned char': 1, 'signed char': 1, '_BYTE': 1,
         'short': 2, 'unsigned short': 2, '_WORD': 2, 'wchar_t': 2,
         'int': 4, 'unsigned int': 4, '_DWORD': 4, 'float': 4, 'long': 4,
         'double': 8, '__int64': 8, 'long long': 8, 'unsigned long long': 8}.get(base)
    if w is None and base in cl:
        w = int((cl.get(base) or {}).get('size') or 0) or 4
    return w or 4, n

def choose_targets():
    ranked = []
    for cls, n in c39.items():
        if cls in MANDATORY or (cls not in TIL and cls not in CL):
            continue
        ev = BODY_ANCHORS.get(cls) or {}
        covered = 0
        for name, cnt in c39names.get(cls, []):
            # coverage = the name appears in a class body line (anchor-pairable),
            # regardless of whether its (possibly mis-scaled) suffix parses
            if any(name in names for names in ev.values()):
                covered += cnt
        tsz = int((TIL.get(cls) or {}).get('size') or 0) or None
        maxoff = -1
        ce = CACHE.get(cls) or {}
        for o in ce.get('offsets') or {}:
            maxoff = max(maxoff, int(o))
        undershoot = (tsz is None) or (maxoff + 1 > tsz)
        carrier_txt = ''
        for fn in ('src/e4/classes/%s_e4.hpp' % cls,
                   'src/e4/classes/_tree_full_e4.hpp',
                   'src/_gap2/gap2_global_decls.hpp'):
            p = ROOT / fn
            if p.exists():
                carrier_txt += p.read_text(encoding='utf-8', errors='replace')
        carrier = bool(re.search(r'\b(?:struct|class)\s+' + re.escape(cls) + r'\b', carrier_txt))
        if covered > 0 and carrier:
            ranked.append((covered, n, cls, undershoot))
    ranked.sort(key=lambda x: (-x[0], -x[1], x[2]))
    targets = list(MANDATORY)
    for covered, n, cls, under in ranked:
        if len(targets) >= N_TARGET:
            break
        if under and cls not in targets:
            targets.append(cls)
    # fill to exactly 50 with name-mismatch classes (covered C2039, carrier)
    for covered, n, cls, under in ranked:
        if len(targets) >= N_TARGET:
            break
        if cls not in targets:
            targets.append(cls)
    return targets

def build(cls):
    ce = CACHE.get(cls) or {}
    offs = dict(ce.get('offsets') or {})
    # X112: merge body-anchor evidence, but only entries whose anchor instruction
    # directly decodes to the name's offset (direct>0).  This recovers offsets
    # expressed by dynamic-index addressing in the cache (`(T*)this + v + N`)
    # without ever trusting a mis-scaled generated-body name.
    for name, slot in (BODY_EV.get(cls) or {}).items():
        for off_s, d in (slot.get('offsets') or {}).items():
            if not d.get('direct'):
                continue
            ws = d.get('widths') or {}
            if not ws or int(off_s) > 0x400000:
                continue
            e = offs.setdefault(off_s, {'widths': {}, 'names': {},
                                        'exprs': [], 'anchors': [], 'arrays': []})
            for w, c in ws.items():
                e['widths'][str(w)] = int(e['widths'].get(str(w), 0)) + int(c)
            e['names'][name] = int(e['names'].get(name, 0)) + 1
            for a in (d.get('anchors') or [])[:4]:
                if a not in e['anchors']:
                    e['anchors'].append(a)
    by_anchor = ce.get('by_anchor') or {}
    tmem, tsz = til_members(cls)
    mmem = ml_members(cls)
    methods = class_methods(cls)
    # --- array members: ONLY til-typed arrays are modelled as arrays.  Raw
    # indexed access without a til array type (e.g. `this->m_1[3]` on a stub til)
    # is emitted as scalars at the accessed offsets; inventing an extent from
    # index arithmetic produced overlapping pseudo-arrays and broke idempotence.
    arrays = {}
    for off_s, e in offs.items():
        off = int(off_s)
        if not (e.get('arrays') or []):
            continue
        tm = tmem.get(off)
        if tm and is_array_type(tm['type']):
            ew, n = array_elem_w(tm['type'], CL)
            arrays[off] = {'size': max(tm['size'], n * ew), 'type': tm['type'],
                           'elem_w': ew}
    # --- scalar candidates
    required = set()
    for name, cnt in c39names.get(cls, []):
        o = parse_off(name)
        if o is not None:
            required.add(o)
    scal = {}
    for off_s, e in offs.items():
        off = int(off_s)
        if any(a <= off < a + v['size'] for a, v in arrays.items()):
            continue
        ws = {int(w): c for w, c in (e.get('widths') or {}).items() if int(w) in (1, 2, 4, 8)}
        if ws:
            w = max(ws, key=lambda k: (ws[k], k))
        else:
            w = 0
            for nm in e.get('names') or {}:
                m = re.match(r'^u(8|16|32|64)_', nm)
                if m:
                    w = {'8': 1, '16': 2, '32': 4, '64': 8}[m.group(1)]
                    break
            if not w and off in tmem:
                w = tmem[off]['size'] if tmem[off]['size'] in (1, 2, 4, 8) else 1
            if not w and off in mmem:
                w = mmem[off]['size'] if mmem[off]['size'] in (1, 2, 4, 8) else 1
            w = w or 1
        scal[off] = w
    # raw indexed access with no til array type: scalar at the ACCESSED offset
    # (element width), never a synthesized array
    for off_s, e in offs.items():
        off = int(off_s)
        if not (e.get('arrays') or []):
            continue
        if off in arrays:
            continue
        for a in e.get('arrays') or []:
            try:
                ao, ew = int(a[4]), int(a[1])
            except (IndexError, TypeError, ValueError):
                continue
            if ew in (1, 2, 4, 8, 12, 16):
                scal[ao] = ew if ew in (1, 2, 4, 8) else 4
    # --- merge + overlap trim
    base = {}
    for off, a in arrays.items():
        base[off] = a['size']
    for off, w in scal.items():
        base.setdefault(off, w)
    for off in list(base):
        if off in arrays:
            continue
        for aoff, a in arrays.items():
            if aoff < off < aoff + a['size']:
                del base[off]
                break
    ordered = sorted(base)
    keep = {}
    for off in ordered:
        w = base[off]
        nxt = next((o2 for o2 in ordered if o2 > off), None)
        if nxt is not None and off + w > nxt:
            if off in required:
                w = max(1, min(w, nxt - off))
            elif nxt - off in (1, 2, 4, 8):
                w = nxt - off
            else:
                continue
        keep[off] = w
    # --- names
    used_names = set()
    members = []
    for off in sorted(keep):
        w = keep[off]
        arr = arrays.get(off)
        name = source = None
        tm = tmem.get(off)
        mm = mmem.get(off)
        if (mm and mm['name'] and mm['name'] not in methods
                and not re.match(r'^(?:vfptr|vtable|vt_|__pad|_pad|unknown)', mm['name'])):
            # member_lookup is the single naming authority (including
            # `Class_field_0xNN` and `m_N` names that bodies already use)
            name, source = mm['name'], 'member_lookup'
        if name is None and tm and tm['name'] and not tm['name'].startswith(('__pad', '_pad')) and tm['name'] not in methods:
            name, source = tm['name'], 'til'
        if name is None:
            for nm in (offs.get(str(off)) or {}).get('names') or {}:
                if nm and not PLACEHOLDER.match(nm) and nm not in methods:
                    name, source = nm, 'cache'
                    break
        if name is None:
            hits = collections.Counter()
            for anc, names in (BODY_ANCHORS.get(cls) or {}).items():
                if anc not in by_anchor:
                    continue
                for nm in names:
                    if parse_off(nm) == off:
                        hits[nm] += 1
            if hits:
                name, source = hits.most_common(1)[0][0], 'body'
        if name is None:
            name, source = 'q%03X' % off, 'derived'
        b = name
        k = 2
        while name in used_names:
            name = '%s_%d' % (b, k)
            k += 1
        used_names.add(name)
        if arr:
            ty = arr['type']
            if not re.match(r'^(char|unsigned char|short|unsigned short|int|unsigned int|long long|unsigned long long)\[', ty):
                ty = ('char[%d]' % arr['size']) if arr['elem_w'] == 1 else ('unsigned int[%d]' % (arr['size'] // 4))
            members.append({'off': off, 'width': arr['size'], 'type': ty, 'name': name,
                            'source': source, 'array': True,
                            'evidence': (offs.get(str(off)) or {}).get('anchors', [])[:4]})
        else:
            ty = None
            if name.startswith('ptr_'):
                ty = 'void *'
            if ty is None:
                for src in (mm, tm):
                    if src and src.get('type') and type_width_basic(src['type']) == w:
                        ty = src['type']
                        break
            if ty is None:
                ty = {1: 'unsigned char', 2: 'unsigned short', 4: 'unsigned int',
                      8: 'unsigned long long'}.get(w, 'unsigned char')
            members.append({'off': off, 'width': w, 'type': ty, 'name': name,
                            'source': source,
                            'evidence': (offs.get(str(off)) or {}).get('anchors', [])[:4]})
    # pointer-typed members are 4 bytes even when the decompiler only touched a
    # byte of them; widen before size/overlap finalization (mojibake width 1 on
    # a `ptr_*` name was turning pointers into bytes and minting ptr↔int
    # conversions in the AST gate).
    for m in members:
        if not m.get('array') and str(m.get('type') or '').rstrip().endswith('*') and m['width'] < 4:
            m['width'] = 4
    end = max((m['off'] + m['width'] for m in members), default=0)
    size = max(end, vtable_min(cls), 4)
    size = (size + 3) & ~3

    def member_expr(acc):
        off = acc['off']
        for aoff, a in arrays.items():
            if aoff <= off < aoff + a['size']:
                mem = next((m for m in members if m['off'] == aoff), None)
                if mem:
                    ew = a['elem_w'] or 1
                    return '%s[%d]' % (mem['name'], (off - aoff) // ew)
                return None
        mem = next((m for m in members if m['off'] == off), None)
        if mem:
            return mem['name']
        for m in members:
            if m['off'] < off < m['off'] + m['width']:
                return m['name']
        return None

    # --- anchor-driven body renames
    anchor_map = {}
    for anc, cacc in by_anchor.items():
        vals = []
        seen = set()
        for a in cacc:
            r = member_expr(a)
            if r and (a['off'], r) not in seen:
                seen.add((a['off'], r))
                vals.append({'off': a['off'], 'repl': r})
        if vals:
            anchor_map[anc] = vals
    expr_map = {}
    unresolved_anchor = []
    for anc, names in (BODY_ANCHORS.get(cls) or {}).items():
        cacc = by_anchor.get(anc) or []
        seen = set()
        cacc = [x for x in cacc if not ((x['off'], x['expr']) in seen or seen.add((x['off'], x['expr'])))]
        used = set()
        for nm in names:
            ob = parse_off(nm)
            if ob is None:
                continue
            for j, a in enumerate(cacc):
                if j not in used and a['off'] == ob:
                    repl = member_expr(a)
                    if repl:
                        expr_map.setdefault(nm, {})[anc] = repl
                        used.add(j)
                    break
        rest_c = [j for j in range(len(cacc)) if j not in used]
        rest_n = [nm for nm in names if not (nm in expr_map and anc in expr_map[nm])]
        for nm, j in zip(rest_n, rest_c):
            repl = member_expr(cacc[j])
            if repl:
                expr_map.setdefault(nm, {})[anc] = repl
                used.add(j)
        for nm in names:
            if nm in expr_map and anc in expr_map[nm]:
                continue
            ob = parse_off(nm)
            if ob is not None:
                mem = next((m for m in members if m['off'] == ob), None)
                if mem:
                    expr_map.setdefault(nm, {})[anc] = mem['name']
                    continue
            unresolved_anchor.append([nm, anc])
    for name, cnt in c39names.get(cls, []):
        if name in expr_map:
            continue
        ob = parse_off(name)
        if ob is not None:
            mem = next((m for m in members if m['off'] == ob), None)
            if mem:
                expr_map.setdefault(name, {})['*'] = mem['name']

    def resolved(nm):
        if nm in expr_map and expr_map[nm]:
            return True
        return any(m['name'] == nm for m in members)

    tot = 0
    still = []
    for nm, cnt in c39names.get(cls, []):
        if resolved(nm):
            tot += cnt
        else:
            still.append([nm, cnt, parse_off(nm)])
    return {
        'class': cls,
        'computed_size': size,
        'til_size': tsz or None,
        'class_layouts_size': int((CL.get(cls) or {}).get('size') or 0) or None,
        'vtable_min': vtable_min(cls),
        'members': members,
        'expr_map': {k: dict(sorted(v.items())) for k, v in sorted(expr_map.items())},
        'anchor_map': anchor_map,
        'unresolved': unresolved_anchor[:40],
        'c2039_before': c39.get(cls, 0),
        'c2039_predicted_resolved': tot,
        'c2039_still': still,
        'evidence': {'cache_offsets': len(offs), 'array_bases': len(arrays),
                     'body_anchors': len(BODY_ANCHORS.get(cls) or {})},
    }

def build_alias(base, alias):
    """Destructor-shim classes (_Destru) are the same object; reuse the base
    layout and map the alias body anchors onto it (same binary offsets)."""
    members = base['members']
    size = base['computed_size']
    arrays = {}
    for m in members:
        if m.get('array') and re.match(r'^(.*?)\[(\d+)\]$', m['type']):
            ty = m['type']
            arr = re.match(r'^(.*?)\[(\d+)\]$', ty)
            ew, n = array_elem_w(ty, CL)
            arrays[m['off']] = {'size': m['width'], 'type': ty, 'elem_w': ew}

    def m_expr(acc):
        off = acc['off']
        for aoff, a in arrays.items():
            if aoff <= off < aoff + a['size']:
                mem = next((m for m in members if m['off'] == aoff), None)
                if mem:
                    return '%s[%d]' % (mem['name'], (off - aoff) // (a['elem_w'] or 1))
        mem = next((m for m in members if m['off'] == off), None)
        if mem:
            return mem['name']
        for m in members:
            if m['off'] < off < m['off'] + m['width']:
                return m['name']
        return None

    by_anchor = ((CACHE.get(alias) or {}).get('by_anchor') or {})
    expr_map = {}
    anchor_map = {}
    for anc, names in (BODY_ANCHORS.get(alias) or {}).items():
        cacc = by_anchor.get(anc) or []
        seen = set()
        cacc = [x for x in cacc if not ((x['off'], x['expr']) in seen or seen.add((x['off'], x['expr'])))]
        vals = []
        for a in cacc:
            r = m_expr(a)
            if r:
                vals.append({'off': a['off'], 'repl': r})
        if vals:
            anchor_map[anc] = vals
        used = set()
        for nm in names:
            ob = parse_off(nm)
            if ob is not None:
                for j, a in enumerate(cacc):
                    if j not in used and a['off'] == ob:
                        r = m_expr(a)
                        if r:
                            expr_map.setdefault(nm, {})[anc] = r
                            used.add(j)
                        break
        rest_c = [j for j in range(len(cacc)) if j not in used]
        rest_n = [nm for nm in names if not (nm in expr_map and anc in expr_map[nm])]
        for nm, j in zip(rest_n, rest_c):
            r = m_expr(cacc[j])
            if r:
                expr_map.setdefault(nm, {})[anc] = r
    tot = 0
    still = []
    have_offs = {m['off'] for m in members}
    for nm, cnt in c39names.get(alias, []):
        ob = parse_off(nm)
        ok = (ob in have_offs) if ob is not None else (nm in expr_map)
        if ok:
            tot += cnt
        else:
            still.append([nm, cnt, ob])
    return {
        'class': alias,
        'computed_size': size,
        'til_size': int((TIL.get(alias) or {}).get('size') or 0) or None,
        'class_layouts_size': int((CL.get(alias) or {}).get('size') or 0) or None,
        'vtable_min': base.get('vtable_min', 0),
        'members': members,
        'expr_map': {k: dict(sorted(v.items())) for k, v in sorted(expr_map.items())},
        'anchor_map': anchor_map,
        'unresolved': [],
        'c2039_before': c39.get(alias, 0),
        'c2039_predicted_resolved': tot,
        'c2039_still': still,
        'alias_of': base['class'],
        'evidence': {'cache_offsets': len((CACHE.get(alias) or {}).get('offsets') or {}),
                     'body_anchors': len(BODY_ANCHORS.get(alias) or {})},
    }

def main():
    targets = choose_targets()
    out = {'meta': {
        'task': 'X112 W1 — binary layout reconstruction (sidecar; til untouched)',
        'generated_by': 'tools/csp_export/x112_rebuild_layouts.py (v2 cache/anchor)',
        'exe': r'D:\RA2MD\gamemd.exe',
        'exe_sha256': '7b8a068535d6af06845edf95ae829b113d00c02909330e16f197426cd7db94b6',
        'selection': 'mandatory 3 + top covered C2039 among carrier classes whose '
                     'max cache offset exceeds the til size',
        'evidence': ['IDA cache this-relative expressions (byte arithmetic/array stride)',
                     'capstone decode at the IDA statement anchor',
                     'anchor pairing with generated bodies',
                     'vtable slot count (anchors/vtable_authority.json)'],
        'til_is_authority': False,
        'targets': targets,
    }, 'classes': {}}
    tb = tr = 0
    for cls in targets:
        r = build(cls)
        out['classes'][cls] = r
        tb += r['c2039_before']
        tr += r['c2039_predicted_resolved']
        print('%-28s size %-8s (til %-7s) mem=%3d renames=%3d C2039 %4d -> %4d' % (
            cls, hex(r['computed_size']), r['til_size'], len(r['members']),
            len(r['expr_map']), r['c2039_before'], r['c2039_predicted_resolved']))
    out['meta']['c2039_before'] = tb
    out['meta']['c2039_predicted_resolved'] = tr
    # _Destru shim classes are the same object as their base: alias the layout
    made = []
    for cls in list(out['classes']):
        alias = cls + '_Destru'
        if alias in out['classes'] or alias not in CL:
            continue
        made.append(alias)
        out['classes'][alias] = build_alias(out['classes'][cls], alias)
    if made:
        out['meta']['aliases'] = made
        print('aliases:', ', '.join(made))
    dst = ROOT / 'anchors' / 'class_layouts_rebuilt.json'
    dst.write_text(json.dumps(out, indent=1, ensure_ascii=False), encoding='utf-8')
    print('wrote', dst, 'C2039 %d -> predicted %d' % (tb, tr))

if __name__ == '__main__':
    main()
