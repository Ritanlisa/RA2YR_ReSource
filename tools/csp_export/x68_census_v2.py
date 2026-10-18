# -*- coding: utf-8 -*-
"""X68 census v2 — refined direct-vtable-op inventory + zero-proof instrument.

Refines the X67 census with evidence-based splits:
  * skips X11-elided marker lines (X67 + X68)
  * `vt_slot_NN(` member-call lines are NOT raw vtable ops (compiler-form calls;
    the corpus's slot-addressed virtual-call convention) - excluded unless the
    line also touches a real vtable symbol
  * computed-RHS assigns to vfptr/vtableN-named fields split by RHS content:
      - RHS carries a vtable symbol        -> internal-arithmetic (BANK)
      - RHS numeric literal in vtable range-> literal install (must be elided; flagged)
      - otherwise                          -> name-collision (reclassified: not a
                                              vtable op; binary evidence x68 R2 plan)
Usage: python x68_census_v2.py [--json OUT]
"""
import re, sys, io, os, json, collections

try:
    sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8', errors='replace')
except AttributeError:
    pass

ROOT = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..'))
SRC = os.path.join(ROOT, 'src')

# a REAL vtable symbol touch (vt_slot_ is the eliminated call form, not a symbol)
VT_SYM = re.compile(r'\bvt_(?!slot_)\w+|[A-Za-z_0-9]\w*_vftable|\w+_[Vv]table\d\b')
VF_ASSIGNS = re.compile(r'->\s*(?:vfptr\d*|vtable\d+)\s*=')
VF_IDX = re.compile(r'->\s*(?:vfptr\d*|vtable\d*)\s*\[')
LPVTBL = re.compile(r'->\s*lpVtbl\s*->')
VTDISPATCH = re.compile(r'&\s*[\w\.\[\]\->]+->vfptr\d*\s*->')
NUM_RANGE = re.compile(r'\b0x([0-9A-Fa-f]{6,8})\b')

hits = collections.defaultdict(list)
nfiles = 0
for dirpath, dirs, files in os.walk(SRC):
    dirs[:] = [d for d in dirs if d != 'injectFunctionTest']
    for fn in files:
        if not fn.endswith(('.cpp', '.hpp')):
            continue
        path = os.path.join(dirpath, fn)
        nfiles += 1
        try:
            fh = open(path, encoding='utf-8', errors='replace')
        except OSError:
            continue
        with fh as f:
            for i, line in enumerate(f, 1):
                if 'X11: vtable install elided' in line:
                    continue  # eliminated form (marker proves elision)
                has_vt = bool(VT_SYM.search(line))
                if LPVTBL.search(line):
                    hits['F11-com-lpVtbl'].append((path, i, line.rstrip()[:200]))
                    continue
                if VTDISPATCH.search(line):
                    hits['F6-vfptr-dispatch'].append((path, i, line.rstrip()[:200]))
                    continue
                if VF_ASSIGNS.search(line):
                    # split: what's on the RHS? (strip the /*0xADDR*/ anchor first)
                    eq = line.find('=') + 1
                    rhs = re.sub(r'/\*0x[0-9A-Fa-f]{6}\*/', '', line[eq:])
                    if VT_SYM.search(rhs):
                        hits['F34-internal-arithmetic'].append((path, i, line.rstrip()[:200]))
                    else:
                        # standalone numeric literal only (strip casts/parens/whitespace)
                        skel = re.sub(r'[\(\)\s]', '', rhs).rstrip(';')
                        m = re.fullmatch(r'(?:\w+\*|\w+)?0x([0-9A-Fa-f]{6,8})|\(?\w+\)?', skel)
                        lit = None
                        m2 = re.fullmatch(r'(?:[A-Za-z_][\w\*]*\*?)0x([0-9A-Fa-f]{6,8})', skel)
                        if m2:
                            lit = int(m2.group(1), 16)
                        else:
                            m3 = re.fullmatch(r'(?:[A-Za-z_][\w\*]*\*?)(\d{9,10})', skel)
                            if m3:
                                lit = int(m3.group(1))
                        if lit is not None and 0x700000 <= lit <= 0x8C0000:
                            hits['F34-literal-install-UNELIDED'].append((path, i, line.rstrip()[:200]))
                        else:
                            hits['F34-name-collision'].append((path, i, line.rstrip()[:200]))
                    continue
                if VF_IDX.search(line):
                    if VT_SYM.search(line):
                        hits['F12-vfptr-idx-vt'].append((path, i, line.rstrip()[:200]))
                    else:
                        # raw vfptr[N] without vt symbol: installs of register values,
                        # jump-table reads with dynamic index, vptr value reads
                        hits['F12-vfptr-idx-raw'].append((path, i, line.rstrip()[:200]))
                    continue
                if has_vt and re.search(r'=\s*[^=].*&', line):
                    st = line.strip()
                    # dispatch through a local-held vtable pointer: (**)-cast call forms
                    if re.search(r'\(\*\*\)\s*\(|\(\w+\s*\(\*\*\)\s*\(', line) or \
                       re.search(r'\(\s*\*\s*\(int\s*\(\*\*\)\s*\(', line):
                        hits['F0-dispatch-local-vptr'].append((path, i, line.rstrip()[:200]))
                        continue
                    # p_vtableN-named locals (name-collision family; binary evidence:
                    # 0x4089c7 mov esi,[edi] = list walk, no vtable)
                    if 'p_vtable' in line:
                        hits['F34-name-collision'].append((path, i, line.rstrip()[:200]))
                        continue
                    # assignment carrying a real vt symbol address
                    hits['F1-install-or-vtref'].append((path, i, line.rstrip()[:200]))
                    continue
                if has_vt and ('vfptr' in line or 'vtable' in line):
                    st = line.strip()
                    # non-operation text: preprocessor, comments, pure declarations,
                    # parameter lists named p_vtableN (no assignment, no call parens on them)
                    if st.startswith(('#', '//', '/*', '*')):
                        continue
                    if not re.search(r'=\s*[^=]', line):
                        # declaration / signature line (no assignment)
                        if re.search(r'[\w\*]\s*p_vtable\w*\s*[,;)]', line) or line.rstrip().endswith((';', ',', '{')):
                            continue
                    hits['F0-vt-other'].append((path, i, line.rstrip()[:200]))

total = 0
print('files scanned:', nfiles)
print('\n== REFINED CENSUS ==')
for fid in sorted(hits, key=lambda k: -len(hits[k])):
    print('  %-32s %5d' % (fid, len(hits[fid])))
    total += len(hits[fid])
print('  %-32s %5d' % ('TOTAL', total))

bank_classes = ('F11-com-lpVtbl', 'F6-vfptr-dispatch', 'F34-internal-arithmetic',
                'F12-vfptr-idx-vt', 'F12-vfptr-idx-raw', 'F0-dispatch-local-vptr',
                'F1-install-or-vtref')
reclass = len(hits.get('F34-name-collision', [])) + len(hits.get('F0-vt-other', []))
mustzero = len(hits.get('F34-literal-install-UNELIDED', []))
banked = sum(len(hits.get(k, [])) for k in bank_classes)
print('\n== SPLIT ==')
print('  reclassified name-collision (not vtable ops):', reclass)
print('  banked/requirement-conflict (documented):    ', banked)
print('  literal-install UNELIDED (must be 0):        ', mustzero)

out = os.path.join(ROOT, '.omo/evidence/optimization/x68/census_v2.json')
json.dump({k: [[os.path.relpath(p, ROOT), i, s] for p, i, s in v]
           for k, v in hits.items()}, open(out, 'w', encoding='utf-8'), indent=1)
print('saved', os.path.relpath(out, ROOT))
