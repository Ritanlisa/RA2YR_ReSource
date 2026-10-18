#!/usr/bin/env python3
"""x72_vtable_audit.py — X72 P0: virtual-layout alignment audit (READ-ONLY).

Compares, for every class in anchors/vtable_authority.json (binary truth),
the class header's own virtual method declarations (declaration order, with
RVA comments where present) against the binary primary vtable slot table.

Bucket semantics (per X72 task):
  (a) a-count — header new-virtual set != binary declared-slot set
                (extra/phantom declarations, or uncovered declared slots)
  (b) b-order — same covered RVA set, declaration order != binary slot order
  (c) c-sig   — an override-anchored header RVA != the binary RVA at that slot
  (d) d-base  — unverifiable/phantom declarations sit BEFORE the first
                binary-anchored new virtual (implied base misplacement)
  (e) e-ok    — every declared slot covered, order correct, no phantoms
  informational: no-header (no header body found), no-table (authority has
  no claimed slots for the primary table)

Classification per header virtual:
  1. RVA in primary table  -> new (declared slot) / override (base slot)
  2. RVA in a secondary MI column of the same class -> secondary (info)
  3. RVA elsewhere (real function not in any of the class's tables) -> phantom
  4. no RVA -> unverifiable (audit-blind; never reordered by the fixer)

Addresses normalized to '0x%X' everywhere (signals.json key format).

Reads:  anchors/vtable_authority.json, signals.json, src/**/*.hpp
Writes: .omo/evidence/optimization/x72/x72_audit.json (records + fixplan sets)
"""
import argparse
import json
import re
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
AUTH = ROOT / 'anchors' / 'vtable_authority.json'
SIGNALS = ROOT / 'signals.json'

CLS_RE = re.compile(r'^[ \t]*(?:class|struct)\s+([A-Za-z_][A-Za-z0-9_]*)'
                    r'(?:\s*<[^;{]*>)?\s*(?::\s*([^{;]+))?\s*(\{)?\s*$')
VIRT_RE = re.compile(r'^[ \t]*virtual\b')
NAME_RE = re.compile(r'virtual\b[^;{]*?(~?[A-Za-z_][A-Za-z0-9_]*)\s*\(')
RVA_RE = re.compile(r'0x([0-9A-Fa-f]{6,8})')
PURE_RE = re.compile(r'=\s*0\s*')


def norm(a):
    return '0x%X' % int(a, 16)


def parse_headers():
    """{class_name: {file, line, bases, virts:[{name,rva,pure}]}} — body-bearing
    declaration with the most virtuals wins."""
    out = {}
    for p in sorted((ROOT / 'src').rglob('*.hpp')):
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').splitlines()
        except OSError:
            continue
        i, n = 0, len(lines)
        while i < n:
            m = CLS_RE.match(lines[i])
            if not m:
                i += 1
                continue
            name = m.group(1)
            has_open = bool(m.group(3))
            j = i
            header_txt = lines[i]
            while not has_open and j + 1 < n:
                j += 1
                header_txt += ' ' + lines[j].strip()
                if '{' in header_txt:
                    has_open = True
                    break
                if ';' in header_txt:
                    break
            if not has_open:
                i = j + 1
                continue
            m2 = CLS_RE.match(header_txt)
            bases = (m2.group(2) if m2 else m.group(2)) or ''
            depth, body, started, k = 0, [], False, j
            while k < n:
                line = lines[k]
                if k == j and not started:
                    pos = line.find('{')
                    line = line[pos:] if pos >= 0 else line
                depth += line.count('{') - line.count('}')
                if '{' in line:
                    started = True
                body.append(line)
                if started and depth <= 0:
                    break
                k += 1
            virts = []
            for bl in body[1:]:
                if VIRT_RE.match(bl):
                    nm = NAME_RE.search(bl)
                    rv = RVA_RE.search(bl)
                    virts.append({
                        'name': nm.group(1) if nm else '?',
                        'rva': norm(rv.group(0)) if rv else None,
                        'pure': bool(PURE_RE.search(bl)),
                        'residual': 'X72 residual' in bl,
                    })
            rec = out.get(name)
            if rec is None or len(virts) > len(rec['virts']):
                out[name] = {'file': str(p.relative_to(ROOT)), 'line': i + 1,
                             'bases': bases.strip(), 'virts': virts}
            i = (k + 1) if k > i else i + 1
    return out


def audit_class(cls, arec, hrec, all_vtables, sig_by_addr):
    slots = arec.get('slots') or []
    if not slots:
        return {'class': cls, 'bucket': 'no-table',
                'header': (hrec or {}).get('file')}
    b_total = len(slots)
    base_slots = [s for s in slots if s.get('origin') != 'declared']
    new_slots = [s for s in slots if s.get('origin') == 'declared']
    b_base = len(base_slots)
    b_new_funcs = [norm(s['func']) for s in new_slots]
    func2slot = {}
    for s in slots:
        func2slot.setdefault(norm(s['func']), []).append(s['slot'])

    # secondary columns of the same class (MI)
    sec_funcs = set()
    for vt in arec.get('vtables') or []:
        if norm(vt) == norm(arec['primary']):
            continue
        rec = all_vtables.get(vt) or {}
        for s in rec.get('slots') or []:
            if s.get('func'):
                sec_funcs.add(norm(s['func']))

    res = {'class': cls, 'header': (hrec or {}).get('file'),
           'hline': (hrec or {}).get('line'),
           'b_total': b_total, 'b_base': b_base, 'b_new': len(new_slots)}
    if hrec is None:
        res['bucket'] = 'no-header'
        return res
    virts = hrec['virts']
    res['h_virt_total'] = len(virts)

    news, overs, phantoms, secon, unver, residual = [], [], [], [], [], []
    for h in virts:
        rva = h['rva']
        if h.get('residual'):
            residual.append(h)
            continue
        if rva and rva in func2slot:
            cand = func2slot[rva]
            dslot = next((s for s in cand if s >= b_base), None)
            if dslot is not None:
                news.append((h, dslot))
            else:
                overs.append((h, cand[0]))
        elif rva and rva in sec_funcs:
            secon.append(h)
        elif rva:
            known = sig_by_addr.get(rva)
            phantoms.append({'name': h['name'], 'rva': rva,
                             'known_fn': bool(known)})
        else:
            unver.append(h)

    res.update({'n_new_hdr': len(news), 'n_override': len(overs),
                'n_phantom': len(phantoms), 'n_secondary': len(secon),
                'n_unverifiable': len(unver), 'n_residual': len(residual)})

    # (c) override RVA vs binary slot func (name-anchored same-slot conflict)
    sig_mm = []
    for h, s in overs:
        bfunc = norm(slots[s]['func'])
        if h['rva'] != bfunc:
            sig_mm.append({'name': h['name'], 'h_rva': h['rva'],
                           'slot': s, 'b_func': bfunc})
    res['n_sig_mm'] = len(sig_mm)

    by_slot = sorted(news, key=lambda t: t[1])
    covered = {h['rva'] for h, _ in news}
    b_new_set = set(b_new_funcs)
    missing = sorted(b_new_set - covered)
    res['n_missing'] = len(missing)
    slot_of = {norm(s['func']): s['slot'] for s in new_slots}
    res['missing_slots'] = [slot_of[r] for r in missing[:16]]
    order_ok = ([h['rva'] for h, _ in by_slot] ==
                [f for f in b_new_funcs if f in covered])
    res['order_ok'] = order_ok
    first_new_bin = by_slot[0][1] if by_slot else None
    res['first_new_bin_slot'] = first_new_bin
    # (d): junk decls before the first anchored new virtual
    overs_set = {id(h) for h, _ in overs}
    first_idx = next((k for k, h in enumerate(virts) if h['rva'] in covered), None)
    res['junk_before_first_new'] = 0 if first_idx is None else sum(
        1 for h in virts[:first_idx] if id(h) not in overs_set)

    # (c) name-anchored: named slot's method name present in header with a
    # DIFFERENT RVA than the binary slot function
    named_conf = []
    hdr_names = {}
    for h in virts:
        if h['name'] not in hdr_names:
            hdr_names[h['name']] = h['rva']
    for s in slots:
        info = sig_by_addr.get(norm(s['func'])) or {}
        nm = (info.get('name') or '').split('::')[-1]
        if not nm or nm not in hdr_names:
            continue
        hr = hdr_names[nm]
        if hr and hr != norm(s['func']):
            named_conf.append({'name': nm, 'slot': s['slot'],
                               'h_rva': hr, 'b_func': norm(s['func'])})
    res['n_named_conf'] = len(named_conf)

    # independent flags (buckets are not mutually exclusive in reality)
    f_a = bool(missing or phantoms or secon)
    f_b = not order_ok
    f_c = bool(named_conf)
    f_d = res['junk_before_first_new'] > 0 and bool(covered)
    res['flags'] = ''.join([c for c, f in (('a', f_a), ('b', f_b), ('c', f_c),
                                           ('d', f_d)) if f]) or 'e'
    res['bucket'] = ('no-header' if hrec is None else
                     res['flags'] if res['flags'] != 'e' else
                     ('uv-blind' if unver else 'e-ok'))
    res['sev'] = (len(missing) + len(phantoms) + len(sig_mm) + len(named_conf) +
                  (0 if order_ok else 1))
    return res


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--json', default=str(ROOT / '.omo/evidence/optimization/x72/x72_audit.json'))
    ap.add_argument('--top', type=int, default=30)
    args = ap.parse_args()

    raw = json.loads(AUTH.read_text(encoding='utf-8'))
    auth = raw['classes']
    all_vtables = raw['vtables']
    sig_by_addr = json.loads(SIGNALS.read_text(encoding='utf-8')).get('symbols') or {}

    headers = parse_headers()
    print(f'[x72] header classes parsed: {len(headers)}')
    print(f'[x72] authority classes: {len(auth)}')

    records = []
    for cls in sorted(auth):
        arec = auth[cls]
        hrec = headers.get(cls)
        if not arec.get('primary'):
            records.append({'class': cls, 'bucket': 'no-table',
                            'header': (hrec or {}).get('file')})
            continue
        records.append(audit_class(cls, arec, hrec, all_vtables, sig_by_addr))

    buckets = Counter(r['bucket'] for r in records)
    print('\n=== X72 P0 bucket table (%d authority classes) ===' % len(auth))
    for b in sorted(buckets):
        print(f'  {b:12s} {buckets.get(b, 0):5d}')
    print(f'  TOTAL        {sum(buckets.values()):5d}')

    # independent flag axes (a class may carry several)
    flag_n = Counter()
    for r in records:
        for c in (r.get('flags') or ''):
            flag_n[c] += 1
    print('\nflag axes (independent):')
    for c, lbl in [('a', 'count mismatch'), ('b', 'order inversion'),
                   ('c', 'named-slot sig conflict'), ('d', 'junk before first new')]:
        print(f'  ({c}) {lbl:26s} {flag_n.get(c, 0):5d}')

    # fix-plan partition (P1 input): classes regenerable from current evidence
    fixable = [r for r in records
               if r.get('flags') in ('a', 'b', 'ab')
               and r.get('n_phantom', 0) == 0 and r.get('n_secondary', 0) == 0
               and r.get('n_unverifiable', 0) == 0]
    banked = [r for r in records
              if r.get('flags') not in (None, 'e') and r not in fixable
              and r['bucket'] not in ('no-header', 'no-table')]
    print(f'\nfix-plan partition: regenerable-now {len(fixable)} / '
          f'banked-with-reason {len(banked)}')

    bad = [r for r in records if (r.get('flags') or 'e') != 'e'
           and r['bucket'] not in ('no-header', 'no-table')]
    print(f'\nexpectation band: {len(bad)} classes compile a vtable diverging '
          f'from the binary (mis-dispatch risk)')

    def sev(r):
        return r.get('sev', 0)
    worst = sorted(bad, key=sev, reverse=True)[:args.top]
    print(f'\n=== top-{args.top} worst offenders ===')
    hdr = (f"{'class':36s} {'bkt':8s} {'btot':>4s} {'base':>4s} {'new':>4s} "
           f"{'hdr':>4s} {'cov':>4s} {'mis':>4s} {'ph':>3s} {'uv':>4s} {'2nd':>3s}")
    print(hdr)
    for r in worst:
        print(f"{r['class'][:36]:36s} {r['bucket']:8s} {r.get('b_total',0):4d} "
              f"{r.get('b_base',0):4d} {r.get('b_new',0):4d} {r.get('h_virt_total',0):4d} "
              f"{r.get('n_new_hdr',0):4d} {r.get('n_missing',0):4d} {r.get('n_phantom',0):3d} "
              f"{r.get('n_unverifiable',0):4d} {r.get('n_secondary',0):3d}")

    outp = Path(args.json)
    outp.parent.mkdir(parents=True, exist_ok=True)
    outp.write_text(json.dumps({'records': records, 'buckets': dict(buckets),
                                'flag_axes': dict(flag_n),
                                'fix_now': [r['class'] for r in fixable]},
                               indent=1), encoding='utf-8')
    print(f'\n[written] {outp}')


if __name__ == '__main__':
    main()
