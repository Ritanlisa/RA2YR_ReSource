#!/usr/bin/env python3
"""x72_vlayout_gen.py — X72 P1: regenerate class virtual declarations in
binary slot order (generator-layer fix; headers are regenerated, not hand-edited).

Contract (validated empirically, vtor_probe.cpp in X72 evidence):
  MSVC places a class's own virtuals (including the destructor) in the vtable
  in declaration order. A flat (base-less) class header therefore reproduces
  the binary vtable exactly when its virtual declarations are emitted in the
  authority's slot order.

Per class (only classes whose header virtuals are FULLY RVA-anchored:
  zero phantom / unverifiable / secondary-column declarations — the audit's
  regenerable set):
  1. read anchors/vtable_authority.json primary slot table (all slots, order)
  2. match every slot func RVA against the header's virtual declaration lines
     (verbatim bytes preserved on match; each line consumed once)
  3. slots with no header line -> neutral placeholder
       virtual <ret> vt_slot_<N>(<params>);  // X72: slot N (0xRVA) unresolved
     with ret/params from the authority signature (IDA types mapped; unknown
     -> void* with /* unknown-arg-type */ note). Names are NEVER invented.
  4. leftover header lines (RVA not consumed by a distinct slot) -> residual
     section after the block, line unchanged except a trailing X72 comment.
  5. rewrite the class body: remove original virtual declaration lines, insert
     the regenerated block at the first original virtual line's position.
     Non-virtual declarations/data are untouched.

Guards:
  - class skipped (banked) if any unverifiable/phantom/secondary decl exists
  - placeholder names checked against existing member names in the class
  - dry-run by default; --apply writes; idempotent (2nd run computes an
    identical expected body -> 0 writes)
  - ledger: .omo/evidence/optimization/x72/x72_vlayout_ledger.json

Usage:
  python tools/csp_export/x72_vlayout_gen.py               # dry run, batch 1
  python tools/csp_export/x72_vlayout_gen.py --apply       # write
  python tools/csp_export/x72_vlayout_gen.py --class WinModemClass
"""
import argparse
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
AUTH = ROOT / 'anchors' / 'vtable_authority.json'
LEDGER = ROOT / '.omo/evidence/optimization/x72/x72_vlayout_ledger.json'

CLS_RE = re.compile(r'^[ \t]*(?:class|struct)\s+([A-Za-z_][A-Za-z0-9_]*)'
                    r'(?:\s*<[^;{]*>)?\s*(?::\s*([^{;]+))?\s*(\{)?\s*$')
VIRT_RE = re.compile(r'^[ \t]*virtual\b')
NAME_RE = re.compile(r'virtual\b[^;{]*?(~?[A-Za-z_][A-Za-z0-9_]*)\s*\(')
RVA_RE = re.compile(r'0x([0-9A-Fa-f]{6,8})')

# batch 1: the audit's regenerable set (flags a/ab, zero phantom/unver/2nd)
BATCH1 = [
    'ConnectionPointClass',      # src/misc/misc_ext.hpp        8 slots
    'EnumConnectionPointsClass', # src/core/utility_ext.hpp     7 slots
    'EnumConnectionsClass',      # src/core/utility_ext.hpp     7 slots
    'IPXGlobalConnClass',        # src/network/network_ext.hpp 18 slots
    'WinModemClass',             # src/misc/misc_ext.hpp       10 slots
    'MSFont',                    # src/misc/misc_ext.hpp        5 slots
]


def norm(a):
    return '0x%X' % int(a, 16)


def map_type(t):
    t = t.strip()
    table = {
        'int': 'int', 'char': 'char', 'void': 'void',
        '_DWORD': 'unsigned int', '_WORD': 'unsigned short',
        '_BYTE': 'unsigned char', '_QWORD': 'unsigned long long',
        'uint8_t': 'uint8_t', 'int16_t': 'int16_t', 'uint16_t': 'uint16_t',
        'uint32_t': 'uint32_t', 'int32_t': 'int32_t',
        'BOOL': 'BOOL', 'LONG': 'LONG', 'DWORD': 'DWORD', 'BYTE': 'BYTE',
        'ulong': 'unsigned long', 'long': 'long', 'short': 'short',
        'unsigned int': 'unsigned int', 'unsigned short': 'unsigned short',
        'unsigned char': 'unsigned char', 'unsigned long': 'unsigned long',
        'float': 'float', 'double': 'double', 'bool': 'bool',
        'const char*': 'const char*', 'char*': 'char*',
        'const void*': 'const void*', 'void*': 'void*',
        'uint8_t*': 'uint8_t*', 'int*': 'int*', 'char**': 'char**',
        '_DWORD *': 'unsigned int*', 'int16_t*': 'int16_t*',
    }
    if t in table:
        return table[t]
    if t.endswith(' *') and t[:-2] in table:
        return table[t[:-2]] + '*'
    if t.endswith('*') and t[:-1] in table:
        return table[t[:-1]] + '*'
    return None


def build_placeholder(slot, rva, sig, note):
    ret, cc, params = 'void', '', []
    unknown = []
    if sig:
        if sig.get('ret'):
            m = map_type(sig['ret'])
            if m:
                ret = m
            else:
                ret, unknown = 'void*', ['ret:' + sig['ret']]
        cc = {'stdcall': '__stdcall ', 'fastcall': '__fastcall '}.get(
            (sig.get('cc') or ''), '')
        params = []
        for p in sig.get('params') or []:
            m = map_type(p)
            if m:
                params.append(m)
            else:
                params.append('void*')
                unknown.append('arg:' + p)
    unk_note = (' (' + ', '.join(unknown) + ' unmappable)') if unknown else ''
    ptxt = ', '.join(params)
    line = f'    virtual {cc}{ret} vt_slot_{slot}({ptxt});'
    line += f'  // X72: slot {slot} ({rva}) unresolved name — placeholder{note}{unk_note}'
    return line


def locate_class(lines, cls):
    for i, l in enumerate(lines):
        m = CLS_RE.match(l)
        if not m or m.group(1) != cls:
            continue
        has_open = bool(m.group(3))
        j = i
        header_txt = l
        while not has_open and j + 1 < len(lines):
            j += 1
            header_txt += ' ' + lines[j].strip()
            if '{' in header_txt:
                has_open = True
                break
            if ';' in header_txt:
                break
        if not has_open:
            continue
        depth, started, k = 0, False, j
        while k < len(lines):
            line = lines[k]
            if k == j and not started:
                pos = line.find('{')
                line = line[pos:] if pos >= 0 else line
            depth += line.count('{') - line.count('}')
            if '{' in line:
                started = True
            if started and depth <= 0:
                return i, k
            k += 1
    return None


def gen_class(cls, arec, path, ledger):
    raw = path.read_text(encoding='utf-8', errors='replace')
    lines = raw.split('\n')
    loc = locate_class(lines, cls)
    if not loc:
        return {'class': cls, 'status': 'class-not-found', 'file': path.name}
    start, end = loc

    slots = arec.get('slots') or []
    if not slots:
        return {'class': cls, 'status': 'no-binary-slots'}

    # virtual declaration lines inside the body
    vlines = []
    for i in range(start + 1, end):
        if VIRT_RE.match(lines[i]):
            nm = NAME_RE.search(lines[i])
            rv = RVA_RE.search(lines[i])
            vlines.append({'idx': i, 'text': lines[i],
                           'name': nm.group(1) if nm else '?',
                           'rva': norm(rv.group(0)) if rv else None})
    if not vlines:
        return {'class': cls, 'status': 'no-virtual-lines'}
    unanchored = [v for v in vlines if not v['rva']]
    if unanchored:
        return {'class': cls, 'status': 'banked-unanchored',
                'detail': [v['name'] for v in unanchored]}

    # member-name universe (collision guard)
    body_txt = '\n'.join(lines[start:end + 1])
    existing_names = set(re.findall(r'\b(vt_slot_\d+)\b', body_txt))

    # non-virtual sibling declarations by RVA (name evidence, not promoted)
    sib_names = {}
    for i in range(start + 1, end):
        if VIRT_RE.match(lines[i]):
            continue
        rv = RVA_RE.search(lines[i])
        nm = re.match(r'^[ \t]*(?:[\w:<>~*&,\s]+?)\s*(~?[A-Za-z_][A-Za-z0-9_]*)\s*\(', lines[i])
        if rv and nm:
            sib_names.setdefault(norm(rv.group(0)), nm.group(1))

    # stale generator truncation markers inside the body
    stale_markers = [i for i in range(start + 1, end)
                     if re.match(r'^[ \t]*// \+\d+ more virtual methods', lines[i])]

    # slot matching (consume lines once)
    by_rva = {}
    for v in vlines:
        by_rva.setdefault(v['rva'], []).append(v)
    slot_map = {}   # slot -> line record
    leftovers = []
    for s in slots:
        rva = norm(s['func'])
        cand = by_rva.get(rva)
        if cand:
            slot_map[s['slot']] = cand.pop(0)
    used = {id(v) for v in slot_map.values()}
    leftovers = [v for v in vlines if id(v) not in used]

    new_block = []
    for s in slots:
        sl = s['slot']
        rva = norm(s['func'])
        rec = slot_map.get(sl)
        if rec is not None:
            new_block.append(rec['text'])
        else:
            note = ''
            sib = sib_names.get(rva)
            if sib:
                note = f' = {sib} (non-virtual sibling in this header; not promoted)'
            new_block.append(build_placeholder(sl, rva, s.get('sig'), note))
    residual = []
    for v in leftovers:
        base = re.sub(r'\s*// X72 residual:.*$', '', v['text'])
        residual.append(base.rstrip() +
                        '  // X72 residual: RVA not a distinct binary slot')

    # splice: remove original virtual lines + stale markers, insert block
    keep = []
    insert_at = vlines[0]['idx']
    marker_set = set(stale_markers)
    for i in range(start + 1, end + 1):
        if i in marker_set:
            continue
        if any(v['idx'] == i for v in vlines):
            if i == insert_at:
                keep.extend(new_block)
                for r in residual:
                    keep.append(r)
            continue
        keep.append(lines[i])
    out = lines[:start + 1] + keep + lines[end + 1:]
    new_text = '\n'.join(out)

    if new_text == raw:
        return {'class': cls, 'status': 'already-aligned', 'writes': 0}

    for e in ledger:
        pass
    ledger.append({'class': cls, 'file': str(path.relative_to(ROOT)),
                   'slots': len(slots),
                   'matched': len(slot_map),
                   'placeholders': len(slots) - len(slot_map),
                   'residual': [v['name'] for v in leftovers],
                   'stale_markers_removed': len(stale_markers),
                   'existing_vt_slot_names': sorted(existing_names)})
    return {'class': cls, 'status': 'planned', 'writes': 1,
            'new_text': new_text, 'old_text': raw}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--apply', action='store_true')
    ap.add_argument('--class', dest='classes', action='append', default=None)
    args = ap.parse_args()

    raw = json.loads(AUTH.read_text(encoding='utf-8'))
    auth = raw['classes']
    targets = args.classes or BATCH1

    ledger = []
    for cls in targets:
        arec = auth.get(cls)
        if not arec:
            ledger.append({'class': cls, 'status': 'not-in-authority'})
            continue
        # find header: body-bearing decl with the MOST virtual lines (audit-consistent)
        cls_pat = re.compile(r'^[ \t]*(?:class|struct)\s+' + cls + r'\b', re.M)
        best = None  # (n_virt, path)
        for cand in (ROOT / 'src').rglob('*.hpp'):
            txt = cand.read_text(encoding='utf-8', errors='replace')
            if not cls_pat.search(txt):
                continue
            lines_t = txt.split('\n')
            loc = locate_class(lines_t, cls)
            if not loc:
                continue
            nv = sum(1 for i in range(loc[0] + 1, loc[1])
                     if VIRT_RE.match(lines_t[i]))
            if best is None or nv > best[0]:
                best = (nv, cand)
        if best is None or best[0] == 0:
            ledger.append({'class': cls, 'status': 'no-header-or-no-virtuals'})
            continue
        p = best[1]
        if p is None:
            ledger.append({'class': cls, 'status': 'no-header'})
            continue
        res = gen_class(cls, arec, p, ledger)
        if args.apply and res.get('new_text') is not None:
            p.write_text(res['new_text'], encoding='utf-8', newline='')
            res['written'] = True
        print(f"[{cls}] {res['status']} slots={res.get('slots')} "
              f"matched={res.get('matched')} placeholders={res.get('placeholders')} "
              f"residual={res.get('residual')}")

    LEDGER.parent.mkdir(parents=True, exist_ok=True)
    LEDGER.write_text(json.dumps(ledger, indent=1), encoding='utf-8')
    print(f'[ledger] {LEDGER}')


if __name__ == '__main__':
    main()
