#!/usr/bin/env python3
"""lower_vtables.py — X11 vtable-store lowering (classify + elide).

User ruling (2026-10-13): explicit vtable-pointer operations are illegal; the
vtable must be emitted by the compiler from the class's virtual declarations.
This tool finds every `vfptr = ...` textual site in `src/`, classifies it with
* binary evidence (gamemd.exe .rdata/.text read at the site's /*0xADDR*/) and
* the X11 vtable authority (anchors/vtable_authority.json),
then elides the provable vtable-install statements (via tools/csp_export/
_vtelide.py) and writes a fail-loud ledger for every site (elided or kept).

Subcommands
  --classify          build/refresh the ledger only (no tree writes)
  --apply [--dry]     elide install statements (idempotent); ledger alongside

Outputs
  .omo/evidence/optimization/x11/x11_vfptr_ledger.jsonl   (per-site)
  .omo/evidence/optimization/x11/x11_vfptr_summary.json   (counts)

Classification families
  install            binary writes a known vtable address into [obj+0] (or a
                     stack temp) -> ELIDE
  install-corrupted  binary is an install but the tree RHS was zeroed by
                     fix_c30a_repair's historical VTFT->0 rewrite -> ELIDE
  install-text       RHS names a vtable symbol but the site address does not
                     resolve to an instruction -> ELIDE (text-proven)
  copy               binary copies a value already loaded from memory (vptr
                     copy / out-param write) -> KEEP + ledger
  misnamed           binary writes a non-vtable value; the `vfptr` spelling is
                     a member-name defect, not a vtable operation -> KEEP
  usage              not a store at all (read/compare/etc.) -> KEEP
  unknown            no binary evidence and no vtable symbol in text -> KEEP
"""
import argparse
import hashlib
import json
import re
import struct
import sys
from collections import Counter
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[1]
sys.path.insert(0, str(HERE))
from _vtelide import (LHS, STMT_RE, STMT_ZERO_RE, GUARD_BEFORE,  # noqa: E402
                      class_hint_from_value, elide_vtable_install_lines,
                      _prev_is_control)

try:
    from _write_retry import robust_write  # noqa: E402
except Exception:
    def robust_write(p, text, tries=5):
        import time
        for k in range(tries):
            try:
                p.write_text(text, encoding='utf-8', newline='')
                return True
            except PermissionError:
                time.sleep(0.5 * (k + 1))
        return False

EXE = Path(r'D:\RA2MD\gamemd.exe')
EV = ROOT / '.omo/evidence/optimization/x11'
LEDGER = EV / 'x11_vfptr_ledger.jsonl'
SUMMARY = EV / 'x11_vfptr_summary.json'


# --------------------------------------------------------------------- PE read
class PE:
    def __init__(self, path=EXE):
        self.data = path.read_bytes()
        d = self.data
        e = struct.unpack_from('<I', d, 0x3C)[0]
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
                                      vsize=vsize, rawptr=rawptr, rawsize=rawsize))
            s += 40

    def va2off(self, va):
        for sec in self.sections:
            if sec['va'] <= va < sec['va'] + max(sec['vsize'], sec['rawsize']):
                d = va - sec['va']
                return sec['rawptr'] + d if d < sec['rawsize'] else None
        return None

    def bytes_at(self, va, n):
        o = self.va2off(va)
        return b'' if o is None else self.data[o:o + n]

    def u32(self, va):
        b = self.bytes_at(va, 4)
        return struct.unpack('<I', b)[0] if len(b) == 4 else None

    def in_text(self, va):
        return any(s['name'] == '.text' and s['va'] <= va < s['va'] + s['vsize']
                   for s in self.sections)

    def in_rdata(self, va):
        return any(s['name'] in ('.rdata', '.data') and s['va'] <= va < s['va'] + s['vsize']
                   for s in self.sections)


# ------------------------------------------------------------------ site scan
# The ruling covers the *operation*, not one spelling: explicit stores that
# write a vtable address into an object's offset-0 slot appear as
#   obj.f vfptr = ...   |  obj->vfptrN = ...  |  obj->vtableN = ...
#   *(unsigned int *)this = &vt_X          (raw offset-0 deref)
#   *(unsigned int *)this->vtable1 = &vt_X (raw through the placeholder name)
SITE_RE = re.compile(
    r'\b(?:vfptr\d*|vtable\d*)\s*=(?!=)'
    r'|\*\s*\(\s*(?:unsigned\s+int|_DWORD|int)\s*\*\s*\)\s*'
    r'(?:this(?:\s*\+\s*0)?|this\s*->\s*(?:vfptr\d*|vtable\d*))\s*=(?!=)'
    r'|\*\s*&\s*(?:this\s*->\s*)?(?:vfptr\d*|vtable\d*)\s*=(?!=)'
)


def spelling_of(line):
    if re.search(r'\*\s*\(\s*(?:unsigned\s+int|_DWORD|int)\s*\*\s*\)', line):
        return 'raw-offset0'
    m = re.search(r'\b(vfptr\d*|vtable\d*)\s*=(?!=)', line)
    return m.group(1) if m else 'other'


def scan_sites():
    sites = []
    for ext in ('*.cpp', '*.hpp', '*.h', '*.inc'):
        for p in sorted((ROOT / 'src').rglob(ext)):
            rel = str(p.relative_to(ROOT)).replace('\\', '/')
            try:
                txt = p.read_text(encoding='utf-8', errors='replace')
            except OSError:
                continue
            for i, line in enumerate(txt.split('\n'), 1):
                if SITE_RE.search(line):
                    m = re.search(r'/\*\s*(0x[0-9A-Fa-f]+)\s*\*/', line)
                    sites.append({'file': rel, 'line': i, 'addr': m.group(1) if m else None,
                                  'text': line.rstrip(), 'spelling': spelling_of(line)})
    return sites


def load_env():
    auth = json.loads((ROOT / 'anchors/vtable_authority.json').read_text(encoding='utf-8'))
    vt_bases = set(int(k, 16) for k in auth['vtables'])
    align = json.loads((ROOT / 'anchors/class_name_align.json').read_text(encoding='utf-8'))
    r2c = {k: v['canon'] for k, v in align['rtti_to_canon'].items()}
    signals = json.loads((ROOT / 'signals.json').read_text(encoding='utf-8'))['symbols']
    fn_starts = sorted(int(k, 16) for k, v in signals.items() if v.get('kind') == 'function')
    fn_name = {int(k, 16): (v.get('name') or '') for k, v in signals.items()
               if v.get('kind') == 'function'}
    vt_class = {}
    for k, rec in auth['vtables'].items():
        vt_class[int(k, 16)] = rec.get('class_rtti')
    return auth, vt_bases, r2c, signals, fn_starts, fn_name, vt_class


def classify(pe, md, sites, vt_bases, r2c, fn_starts, fn_name, vt_class):
    import bisect
    import capstone

    def containing_fn(a):
        i = bisect.bisect_right(fn_starts, a) - 1
        return (fn_starts[i], fn_name.get(fn_starts[i], '')) if i >= 0 else (None, '')

    def trace_reg(insns, addr, reg, depth=0, seen=None):
        if depth > 4:
            return None
        seen = seen or set()
        if reg in seen:
            return None
        seen.add(reg)
        for prev in reversed([x for x in insns if x.address < addr]):
            ops = prev.operands
            if not ops or ops[0].type != capstone.x86.X86_OP_REG or ops[0].reg != reg:
                continue
            if len(ops) < 2:
                return ('other', 0)
            s = ops[1]
            if s.type == capstone.x86.X86_OP_IMM:
                if s.imm == 0 and prev.mnemonic in ('xor', 'sub'):
                    return ('zero', 0)
                return ('imm', s.imm)
            if s.type == capstone.x86.X86_OP_REG:
                r = trace_reg(insns, prev.address, s.reg, depth + 1, seen)
                return r if r is not None else ('reg-copy', 0)
            if s.type == capstone.x86.X86_OP_MEM:
                return ('mem', 0)
            return ('other', 0)
        return None

    out = []
    for r in sites:
        rec = dict(r)
        rec['family'] = None
        rec['fn'] = ''
        rec['vt_class'] = None
        rec['bin'] = None
        addr = r.get('addr')
        if addr:
            a = int(addr, 16)
            fa, fname = containing_fn(a)
            rec['fn'] = fname
            rec['fn_addr'] = ('0x%X' % fa) if fa else None
            data = pe.bytes_at(a - 96, 176)
            insns = list(md.disasm(data, a - 96))
            ins = next((x for x in insns if x.address == a), None)
            if ins is not None:
                info = {'mnem': ins.mnemonic, 'op': ins.op_str}
                ops = ins.operands
                if len(ops) >= 2 and ops[0].type == capstone.x86.X86_OP_MEM:
                    m = ops[0].mem
                    info['dest_base'] = ins.reg_name(m.base) if m.base else ''
                    info['dest_disp'] = m.disp
                    val = None
                    s = ops[1]
                    if s.type == capstone.x86.X86_OP_IMM:
                        val = ('imm', s.imm)
                    elif s.type == capstone.x86.X86_OP_REG:
                        val = trace_reg(insns, a, s.reg) or ('unresolved', 0)
                    else:
                        val = ('other', 0)
                    info['val_kind'], info['val'] = val
                    if val[0] == 'imm' and val[1] in vt_bases:
                        rec['family'] = 'install'
                        rec['vt_class'] = vt_class.get(val[1])
                    elif val[0] == 'zero' or (val[0] == 'imm' and val[1] == 0):
                        rec['family'] = 'zero'
                    elif val[0] == 'mem':
                        rec['family'] = 'copy'
                    else:
                        rec['family'] = 'misnamed'
                else:
                    rec['family'] = 'usage'
                rec['bin'] = info
        if rec['family'] is None:
            # no addr / addr drift: fall back to text evidence
            hint = None
            m = STMT_RE.match(r['text'].split('//')[0])
            if m:
                hint = class_hint_from_value(m.group(3))
            rec['family'] = 'install-text' if hint else ('unknown' if addr else 'no-addr')
            if hint:
                rec['vt_class'] = hint
        out.append(rec)
    return out


# ------------------------------------------------------------ declaration gate
def decl_check():
    sys.path.insert(0, str(HERE))
    from _decl_scan import PP, defs_ns_in_text
    pp = PP(ROOT / 'src')

    def virtual_names(body):
        names = []
        for m in re.finditer(r'\bvirtual\s+~([A-Za-z_]\w*)\s*\(', body):
            names.append('~' + m.group(1))
        for m in re.finditer(r'\bvirtual\b([^;{}]*?)\b([A-Za-z_]\w*)\s*\(', body):
            names.append(m.group(2))
        for m in re.finditer(r'\boverride\b', body):
            names.append('override')
        return names

    cache = {}

    def check(rel, cls):
        key = (rel, cls)
        if key in cache:
            return cache[key]
        res = {'tu_visible': False, 'carrier': None, 'n_virtual': 0}
        try:
            defs, _ns, _ent = pp.active_defs_full(rel)
        except Exception:
            defs = {}
        for name in (cls, cls.rsplit('_', 1)[0] if cls.endswith(('_uint', '_ushort')) else cls):
            for f, body in (defs.get(name) or {}).items():
                vn = virtual_names(body)
                if vn:
                    res = {'tu_visible': True, 'carrier': f, 'n_virtual': len(vn)}
                    cache[key] = res
                    return res
        cache[key] = res
        return res

    return check


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--classify', action='store_true')
    ap.add_argument('--apply', action='store_true')
    ap.add_argument('--dry', action='store_true')
    ap.add_argument('--no-decl-check', action='store_true')
    args = ap.parse_args()

    import capstone
    pe = PE()
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    md.detail = True
    auth, vt_bases, r2c, signals, fn_starts, fn_name, vt_class = load_env()

    sites = scan_sites()
    rows = classify(pe, md, sites, vt_bases, r2c, fn_starts, fn_name, vt_class)

    # declaration gate for install rows (effective TU decl)
    if not args.no_decl_check:
        check = decl_check()
        for r in rows:
            if r['family'].startswith('install'):
                cls = r.get('vt_class')
                canon = r2c.get(cls or '', cls) if cls else None
                rel = r['file'].replace('src/', '', 1)
                res = check(rel, canon) if canon else {'tu_visible': False, 'carrier': None, 'n_virtual': 0}
                r['decl_tu_visible'] = res['tu_visible']
                r['decl_carrier'] = res['carrier']
                r['decl_n_virtual'] = res['n_virtual']

    # ---------------- ledger
    EV.mkdir(parents=True, exist_ok=True)
    lines = []
    for r in sorted(rows, key=lambda x: (x['file'], x['line'])):
        lines.append(json.dumps(r, ensure_ascii=False, sort_keys=True))
    robust_write(LEDGER, '\n'.join(lines) + '\n')

    # ---------------- action decision (ledger is authoritative for --apply)
    elide_fams = {'install', 'install-corrupted', 'install-text'}
    for r in rows:
        fam = r['family']
        reason = None
        if fam in elide_fams:
            reason = 'binary-install'
        else:
            body = r['text'].split('//')[0]
            m = STMT_RE.match(body)
            if m and class_hint_from_value(m.group(3)):
                reason = 'text-install'
            else:
                m2 = STMT_ZERO_RE.match(body)
                if m2 and m2.group(4):
                    ai = int(m2.group(4), 16)
                    if r.get('addr') and int(r['addr'], 16) == ai:
                        # same-address zero form: binary decides
                        if fam == 'zero':
                            reason = None
                # else keep
        r['action'] = 'elide' if reason else 'keep'
        r['action_reason'] = reason or fam

    # ---------------- ledger
    EV.mkdir(parents=True, exist_ok=True)
    lines = []
    for r in sorted(rows, key=lambda x: (x['file'], x['line'])):
        lines.append(json.dumps(r, ensure_ascii=False, sort_keys=True))
    robust_write(LEDGER, '\n'.join(lines) + '\n')

    fam = Counter(r['family'] for r in rows)
    spell = Counter(r.get('spelling') for r in rows)
    vfptr_sites = [r for r in rows if (r.get('spelling') or '').startswith('vfptr')]
    vfptr_elide = [r for r in vfptr_sites if r['action'] == 'elide']
    act = Counter(r['action'] for r in rows)
    summary = {
        'sites_total': len(rows),
        'families': dict(fam),
        'spelling': dict(spell),
        'actions': dict(act),
        'elidable': act.get('elide', 0),
        'kept': act.get('keep', 0),
        'vfptr_spelling_total': len(vfptr_sites),
        'vfptr_spelling_elidable': len(vfptr_elide),
        'install_decl_tu_visible': sum(1 for r in rows if r['family'].startswith('install')
                                       and r.get('decl_tu_visible')),
        'install_decl_gap': sum(1 for r in rows if r['family'].startswith('install')
                                and not r.get('decl_tu_visible')),
    }
    print(json.dumps(summary, indent=1))
    robust_write(SUMMARY, json.dumps(summary, indent=1, ensure_ascii=False))

    if not args.apply:
        return

    # ---------------- apply: elide per file (ledger-driven, line-exact)
    by_file = {}
    for r in rows:
        if r['action'] == 'elide':
            by_file.setdefault(r['file'], []).append(r)

    n_files = 0
    n_elided = 0
    n_skipped = 0
    skip_reasons = Counter()
    for rel, rs in sorted(by_file.items()):
        p = ROOT / rel
        txt = p.read_text(encoding='utf-8', errors='replace')
        lines = txt.split('\n')
        only = set()
        extra = set()
        for r in rs:
            idx = r['line'] - 1
            if idx >= len(lines):
                n_skipped += 1
                skip_reasons['line-oob'] += 1
                continue
            body = lines[idx].split('//')[0]
            if _prev_is_control(lines, idx):
                n_skipped += 1
                skip_reasons['control-body-unhandled'] += 1
                continue
            m = STMT_RE.match(body)
            m2 = STMT_ZERO_RE.match(body)
            if m and class_hint_from_value(m.group(3)):
                only.add(r['line'])
            elif m2:
                mm = re.search(r'/\*\s*(0x[0-9A-Fa-f]+)\s*\*/', lines[idx])
                if mm:
                    extra.add(int(mm.group(1), 16))
                only.add(r['line'])
            elif m:
                only.add(r['line'])
            else:
                n_skipped += 1
                skip_reasons['no-regex'] += 1
        if only:
            new_txt, n, _notes = elide_vtable_install_lines(
                txt, only_lines=only, extra_addrs=extra)
            if n:
                if args.dry:
                    print('DRY', rel, n)
                else:
                    ok = robust_write(p, new_txt)
                    if not ok:
                        print('FAIL write', rel)
                n_files += 1
                n_elided += n
    print('files:', n_files, 'elided:', n_elided, 'DRY' if args.dry else 'APPLIED')
    if n_skipped:
        print('skipped (ledger rows not elided):', n_skipped, dict(skip_reasons))


if __name__ == '__main__':
    main()
