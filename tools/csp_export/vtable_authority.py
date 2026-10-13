#!/usr/bin/env python3
"""vtable_authority.py — X11 vtable authority builder (CSP-side).

Builds the binary-anchored vtable authority for gamemd.exe:

  per vtable VA : owning class (RTTI), slot -> function identity (binary read),
                  source cross-checks (vtable_signatures / class_db / signals),
                  conflicts (claimed vs binary).
  per class     : primary + secondary vtables, inheritance chain, per-slot
                  origin = declared | override | inherited (binary comparison
                  along the chain — no voting, no statistics).

The binary (D:\\RA2MD\\gamemd.exe) is the only trusted source: every slot is
read from .rdata and verified, every conflict is reported (never silently
preferred).

Outputs (deterministic — no timestamps in the data):
  anchors/vtable_authority.json     the authority
  .omo/x11/authority_report.json    coverage + conflicts + stats

Usage:
  python tools/csp_export/vtable_authority.py            # build + write
  python tools/csp_export/vtable_authority.py --check    # build, compare, no write
"""
import argparse
import hashlib
import json
import struct
import sys
from collections import Counter, defaultdict
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[1]
EXE = Path(r'D:\RA2MD\gamemd.exe')
OUT_AUTH = ROOT / 'anchors' / 'vtable_authority.json'
OUT_REPORT = ROOT / '.omo' / 'x11' / 'authority_report.json'
try:
    from _write_retry import robust_write  # noqa: E402
except Exception:  # pragma: no cover
    def robust_write(p, text, tries=5):
        import time
        for k in range(tries):
            try:
                p.write_text(text, encoding='utf-8', newline='')
                return True
            except PermissionError:
                time.sleep(0.5 * (k + 1))
        return False


# --------------------------------------------------------------------- PE read
class PE:
    def __init__(self, path=EXE):
        self.data = path.read_bytes()
        d = self.data
        assert d[:2] == b'MZ'
        e = struct.unpack_from('<I', d, 0x3C)[0]
        assert d[e:e + 4] == b'PE\0\0'
        coff = e + 4
        nsec, = struct.unpack_from('<H', d, coff + 2)
        opt_size, = struct.unpack_from('<H', d, coff + 16)
        opt = coff + 20
        self.image_base, = struct.unpack_from('<I', d, opt + 28)
        self.sections = []
        s = opt + opt_size
        for _ in range(nsec):
            name = d[s:s + 8].rstrip(b'\0').decode('latin-1')
            vsize, va, rawsize, rawptr = struct.unpack_from('<IIII', d, s + 8)
            self.sections.append(dict(name=name, va=self.image_base + va,
                                      vsize=vsize, rawptr=rawptr,
                                      rawsize=rawsize))
            s += 40

    def va2off(self, va):
        for sec in self.sections:
            if sec['va'] <= va < sec['va'] + max(sec['vsize'], sec['rawsize']):
                delta = va - sec['va']
                return sec['rawptr'] + delta if delta < sec['rawsize'] else None
        return None

    def u32(self, va):
        o = self.va2off(va)
        if o is None or o + 4 > len(self.data):
            return None
        return struct.unpack_from('<I', self.data, o)[0]

    def bytes_at(self, va, n):
        o = self.va2off(va)
        if o is None:
            return b''
        return self.data[o:o + n]

    def in_text(self, va):
        return any(s['name'] == '.text' and s['va'] <= va < s['va'] + s['vsize']
                   for s in self.sections)

    def in_rdata(self, va):
        return any(s['name'] in ('.rdata', '.data') and s['va'] <= va < s['va'] + s['vsize']
                   for s in self.sections)


def sha16(p):
    return hashlib.sha256(Path(p).read_bytes()).hexdigest()[:16]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--check', action='store_true', help='no write; report only')
    args = ap.parse_args()

    pe = PE()

    # ------------------------------------------------------------ source loads
    rtti = json.loads((ROOT / 'anchors/rtti_vtable_class.json').read_text(encoding='utf-8'))
    rtti_vt = {int(k, 16): v for k, v in rtti['vtables'].items()}
    sig = json.loads((ROOT / 'tools/type_infer/anchors/vtable_signatures.json').read_text(encoding='utf-8'))
    cdb = json.loads((ROOT / 'anchors/class_db.json').read_text(encoding='utf-8'))['classes']
    ctor_types = json.loads((ROOT / 'anchors/ctor_types.json').read_text(encoding='utf-8'))
    align = json.loads((ROOT / 'anchors/class_name_align.json').read_text(encoding='utf-8'))
    signals = json.loads((ROOT / 'signals.json').read_text(encoding='utf-8'))
    sym = signals['symbols']
    hierarchy = json.loads((ROOT / 'anchors/rtti_hierarchy.json').read_text(encoding='utf-8'))

    rtti_to_canon = {k: v['canon'] for k, v in (align.get('rtti_to_canon') or {}).items()}

    def canon_of(rtti_name):
        if not rtti_name:
            return None
        return rtti_to_canon.get(rtti_name) or rtti_name

    def fn_name(addr):
        rec = (sym.get('0x%X' % addr) or sym.get('0x%08X' % addr)
               or sym.get('0X%08X' % addr) or sym.get('0X%X' % addr))
        if rec:
            return rec.get('name') or ''
        return ''

    def fn_sig(addr):
        rec = (sym.get('0x%X' % addr) or sym.get('0x%08X' % addr)
               or sym.get('0X%08X' % addr) or sym.get('0X%X' % addr))
        if not rec:
            return None
        return {'ret': rec.get('return_type') or '', 'cc': rec.get('call_convention') or '',
                'params': [p.get('type') if isinstance(p, dict) else str(p)
                           for p in (rec.get('params') or [])]}

    # ------------------------------------------------------- vtable universe
    vt_claims = defaultdict(dict)        # va -> {slot: {'addr','sources'}}
    vt_class = {}                        # va -> rtti class
    vt_col = {}                          # va -> col_offset
    for va, rec in rtti_vt.items():
        vt_class[va] = rec.get('class')
        vt_col[va] = rec.get('col_offset', 0)
    for key, rec in sig['signatures'].items():
        va = int(rec['vtable_base'], 16)
        slot = rec['slot']
        e = vt_claims[va].setdefault(slot, {'addr': int(rec['addr'], 16), 'sources': []})
        e['sources'].append('vtable_signatures')
        if e['addr'] != int(rec['addr'], 16):
            e['conflict_claim'] = int(rec['addr'], 16)
    for cls, rec in cdb.items():
        for maddr, m in (rec.get('methods') or {}).items():
            for vs in (m.get('vtable_slots') or []):
                va = int(vs['vtable'], 16)
                slot = vs['slot']
                e = vt_claims[va].setdefault(slot, {'addr': int(maddr, 16), 'sources': []})
                e['sources'].append('class_db:' + cls)
                if e['addr'] != int(maddr, 16):
                    e.setdefault('conflict_claim', []).append(int(maddr, 16))

    # ------------------------------------------------------------ binary verify
    all_bases = sorted(set(vt_claims) | set(vt_class))

    def next_base(va):
        import bisect
        i = bisect.bisect_right(all_bases, va)
        return all_bases[i] if i < len(all_bases) else None

    vtables = {}
    conflicts = []
    for va in all_bases:
        claims = vt_claims.get(va, {})
        rec = {'class_rtti': vt_class.get(va), 'col_offset': vt_col.get(va, 0),
               'col_va': '0x%X' % pe.u32(va - 4) if pe.u32(va - 4) else None,
               'slots': [], 'slot_count': 0, 'verified': 0, 'conflicts': [],
               'unclaimed_text_slots': []}
        rec['in_rdata'] = bool(pe.in_rdata(va))
        for slot in sorted(claims):
            c = claims[slot]
            actual = pe.u32(va + slot * 4)
            ent = {'slot': slot, 'byte': slot * 4,
                   'claimed': '0x%08X' % c['addr'],
                   'func': ('0x%08X' % actual) if actual is not None else None,
                   'sources': sorted(set(c['sources']))}
            if actual == c['addr']:
                ent['verified'] = True
                rec['verified'] += 1
            else:
                ent['verified'] = False
                rec['conflicts'].append({'slot': slot,
                                         'claimed': '0x%08X' % c['addr'],
                                         'actual': ('0x%08X' % actual) if actual is not None else None})
                conflicts.append({'vtable': '0x%X' % va, 'slot': slot,
                                  'claimed': '0x%08X' % c['addr'],
                                  'actual': ('0x%08X' % actual) if actual is not None else None,
                                  'class_rtti': vt_class.get(va)})
            a = actual if actual is not None else c['addr']
            ent['name'] = fn_name(a)
            ent['sig'] = fn_sig(a)
            rec['slots'].append(ent)
        if claims:
            mx = max(claims)
            rec['slot_count'] = mx + 1
            # unclaimed continuation: binary text pointers beyond the claimed max,
            # bounded by the next known vtable base (its COL lives at next-4).
            nxt = next_base(va)
            limit = (nxt - 4 - va) // 4 if (nxt and (nxt - 4 - va) % 4 == 0 and nxt - 4 > va) else 512
            limit = max(limit, mx + 1)
            n2 = mx + 1
            while n2 < limit:
                v = pe.u32(va + n2 * 4)
                if v is None or not pe.in_text(v):
                    break
                rec['unclaimed_text_slots'].append({'slot': n2, 'func': '0x%08X' % v,
                                                    'name': fn_name(v),
                                                    'sig': fn_sig(v)})
                n2 += 1
        vtables['0x%X' % va] = rec

    # ------------------------------------- ctor installer -> vtable derivation
    # ctor_types (fn addr -> class): disassemble the installer head and find the
    # vtable install (`mov [reg], imm(rdata)`). Binary-derived, cross-checks RTTI.
    import capstone
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    md.detail = True

    def installer_vt(addr):
        try:
            data = pe.bytes_at(addr, 400)
        except Exception:
            return None
        if not data:
            return None
        for ins in md.disasm(data, addr):
            if ins.mnemonic != 'mov' or len(ins.operands) < 2:
                continue
            d0, s1 = ins.operands[0], ins.operands[1]
            if d0.type != capstone.x86.X86_OP_MEM:
                continue
            if d0.mem.disp != 0 or not (d0.mem.base and not d0.mem.index):
                continue
            if s1.type == capstone.x86.X86_OP_IMM and pe.in_rdata(s1.imm):
                return s1.imm
            if ins.mnemonic == 'mov' and s1.type == capstone.x86.X86_OP_REG:
                # mov reg, imm ; mov [base], reg  (look back 6 insns)
                pass
        # second pass: register-carried install
        recent_imm = None
        for ins in md.disasm(data, addr):
            if ins.mnemonic == 'mov' and len(ins.operands) == 2:
                d0, s1 = ins.operands[0], ins.operands[1]
                if d0.type == capstone.x86.X86_OP_REG and s1.type == capstone.x86.X86_OP_IMM \
                        and pe.in_rdata(s1.imm):
                    recent_imm = (d0.reg, s1.imm)
                elif d0.type == capstone.x86.X86_OP_MEM and d0.mem.disp == 0 and \
                        s1.type == capstone.x86.X86_OP_REG and recent_imm and \
                        s1.reg == recent_imm[0]:
                    return recent_imm[1]
        return None

    ctor_vt = {}
    ctor_match = 0
    ctor_mismatch = []
    for addr_s, cls in sorted(ctor_types.items()):
        try:
            a = int(addr_s, 16)
        except ValueError:
            continue
        vt = installer_vt(a)
        if vt is None:
            continue
        ctor_vt[canon_of(cls) or cls] = vt
        # cross-check: if the class has RTTI vtables, installer vt should be one
        rtti_vts = [va for va, r in vtables.items() if r.get('class_rtti')
                    and (canon_of(r['class_rtti']) == (canon_of(cls) or cls))]
        if rtti_vts and ('0x%X' % vt) not in rtti_vts:
            ctor_mismatch.append({'class': cls, 'installer': '0x%X' % a,
                                  'installer_vt': '0x%X' % vt, 'rtti_vts': rtti_vts[:4]})
        elif rtti_vts:
            ctor_match += 1

    # ---- vtable universe extension: ctor-derived tables not in RTTI/signatures
    for cls, vt in sorted(ctor_vt.items()):
        key = '0x%X' % vt
        if key in vtables:
            continue
        nxt = next_base(vt)
        limit = (nxt - 4 - vt) // 4 if (nxt and (nxt - 4 - vt) % 4 == 0 and nxt - 4 > vt) else 512
        rec = {'class_rtti': None, 'class_canon': cls, 'col_offset': None,
               'col_va': '0x%X' % pe.u32(vt - 4) if pe.u32(vt - 4) else None,
               'slots': [], 'slot_count': 0, 'verified': 0, 'conflicts': [],
               'unclaimed_text_slots': [], 'in_rdata': bool(pe.in_rdata(vt)),
               'source': 'ctor_install_derived'}
        n2 = 0
        while n2 < limit:
            v = pe.u32(vt + n2 * 4)
            if v is None or not pe.in_text(v):
                break
            rec['slots'].append({'slot': n2, 'byte': n2 * 4, 'claimed': None,
                                 'func': '0x%08X' % v, 'sources': ['ctor_install_derived'],
                                 'verified': True, 'name': fn_name(v), 'sig': fn_sig(v)})
            rec['unclaimed_text_slots'].append(rec['slots'][-1])
            n2 += 1
        rec['slot_count'] = len(rec['slots'])
        vtables[key] = rec


    # ------------------------------------------------------------- class index
    def primary_vt(cls):
        out = []
        for va_s, rec in vtables.items():
            owner = (canon_of(rec['class_rtti']) if rec.get('class_rtti')
                     else rec.get('class_canon'))
            if owner == cls:
                out.append(int(va_s, 16))
        out.sort()
        prim = [v for v in out if vtables['0x%X' % v]['col_offset'] == 0]
        if not prim:
            d = [v for v in out if vtables['0x%X' % v]['col_offset'] is None]
            prim = d
        return (prim[0] if prim else (out[0] if out else None)), out

    all_classes = set(canon_of(v) for v in vt_class.values() if v) | set(ctor_vt)
    classes = {}
    for cls in sorted(all_classes):
        prim, allv = primary_vt(cls)
        crec = cdb.get(cls) or {}
        chain = [c for c in (crec.get('full_ancestors') or []) if c != cls]
        # full_ancestors sometimes holds rtti names; canon-align
        chain = [canon_of(c) or c for c in chain]
        entry = {'rtti_name': None, 'vtables': ['0x%X' % v for v in allv],
                 'primary': ('0x%X' % prim) if prim else None,
                 'col_offsets': sorted(str(vtables['0x%X' % v]['col_offset']) for v in allv),
                 'chain': chain,
                 'ctor_installer': None, 'slots': []}
        vt_owner = None
        for rn, c2 in vt_class.items():
            if canon_of(rn) == cls:
                entry['rtti_name'] = rn
                break
        # ctor installer (binary-anchored: ctor_types)
        inst = [a for a, c in ctor_types.items() if (canon_of(c) or c) == cls]
        if inst:
            inst.sort(key=lambda s: int(s, 16))
            entry['ctor_installer'] = '0x%X' % int(inst[0], 16)
        if ctor_vt.get(cls):
            entry['ctor_installer_vt'] = '0x%X' % ctor_vt[cls]
        # slots with origin along the chain (primary vtable only)
        if prim:
            prec = vtables['0x%X' % prim]
            parent_slot = {}
            for anc in chain:
                av, _ = primary_vt(anc)
                if not av:
                    continue
                arec = vtables['0x%X' % av]
                for ent in arec['slots']:
                    if ent['verified'] and ent['slot'] not in parent_slot:
                        parent_slot[ent['slot']] = (anc, ent)
            for ent in prec['slots']:
                sl = dict(ent)
                if not ent['verified']:
                    sl['origin'] = 'conflict'
                else:
                    f = int(ent['func'], 16)
                    anc_hit = parent_slot.get(ent['slot'])
                    if anc_hit is None:
                        sl['origin'] = 'declared'
                    else:
                        anc, aent = anc_hit
                        if int(aent['func'], 16) == f:
                            sl['origin'] = 'inherited'
                            sl['from'] = anc
                        else:
                            sl['origin'] = 'override'
                            sl['from'] = anc
                            sl['parent_func'] = aent['func']
                entry['slots'].append(sl)
        classes[cls] = entry

    # ------------------------------------------------------------------- stats
    n_slots = sum(len(v['slots']) for v in vtables.values())
    n_verified = sum(v['verified'] for v in vtables.values())
    n_unclaimed = sum(len(v['unclaimed_text_slots']) for v in vtables.values())
    origins = Counter()
    for c in classes.values():
        for s in c['slots']:
            origins[s.get('origin')] += 1
    stats = {
        'vtables': len(vtables),
        'vtables_with_class': sum(1 for v in vtables.values() if v.get('class_rtti')),
        'vtables_ctor_derived': sum(1 for v in vtables.values() if v.get('source') == 'ctor_install_derived'),
        'slots_total': n_slots,
        'slots_verified_binary': n_verified,
        'slot_conflicts': len(conflicts),
        'unclaimed_text_slots': n_unclaimed,
        'classes': len(classes),
        'classes_with_primary': sum(1 for c in classes.values() if c['primary']),
        'origins': dict(origins),
        'ctor_installers_known': sum(1 for c in classes.values() if c['ctor_installer']),
        'ctor_installer_vt_match': ctor_match,
        'ctor_installer_vt_mismatch': len(ctor_mismatch),
        'secondary_vtable_classes': sum(1 for c in classes.values() if len(c['col_offsets']) > 1),
    }

    auth = {
        'meta': {
            'generated_by': 'tools/csp_export/vtable_authority.py',
            'exe': str(EXE),
            'exe_sha256': hashlib.sha256(EXE.read_bytes()).hexdigest(),
            'sources': {
                'anchors/rtti_vtable_class.json': sha16(ROOT / 'anchors/rtti_vtable_class.json'),
                'tools/type_infer/anchors/vtable_signatures.json': sha16(ROOT / 'tools/type_infer/anchors/vtable_signatures.json'),
                'anchors/class_db.json': sha16(ROOT / 'anchors/class_db.json'),
                'anchors/ctor_types.json': sha16(ROOT / 'anchors/ctor_types.json'),
                'anchors/rtti_hierarchy.json': sha16(ROOT / 'anchors/rtti_hierarchy.json'),
                'signals.json': sha16(ROOT / 'signals.json'),
            },
            'slot_source': 'gamemd.exe .rdata read at va + slot*4',
        },
        'stats': stats,
        'classes': classes,
        'vtables': vtables,
    }

    report = {'stats': stats,
              'conflicts': conflicts[:2000],
              'conflict_count': len(conflicts),
              'ctor_installer_mismatches': ctor_mismatch,
              'unclaimed_by_vtable': {k: v['unclaimed_text_slots']
                                      for k, v in vtables.items() if v['unclaimed_text_slots']}}

    print(json.dumps(stats, indent=1))
    if args.check:
        cur = json.loads(OUT_AUTH.read_text(encoding='utf-8')) if OUT_AUTH.exists() else None
        same = cur is not None and json.dumps(cur, sort_keys=True) == json.dumps(auth, sort_keys=True)
        print('CHECK: existing authority identical:', same)
        return
    OUT_REPORT.parent.mkdir(parents=True, exist_ok=True)
    robust_write(OUT_AUTH, json.dumps(auth, indent=1, ensure_ascii=False))
    robust_write(OUT_REPORT, json.dumps(report, indent=1, ensure_ascii=False))
    print('written:', OUT_AUTH)
    print('written:', OUT_REPORT)


if __name__ == '__main__':
    main()
