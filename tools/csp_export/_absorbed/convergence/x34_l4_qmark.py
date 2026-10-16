#!/usr/bin/env python3
"""X34 L4 — D-A5 '?' member supply (dot-form globals, binary/til-verified).

Mechanism (evidence: .omo/evidence/optimization/x34/l4_registry.json + D census A5):
  e4 bodies contain literal '?' member accesses on global receivers:
      *(int *)&stru_A8EB00.?[364]           (C2059/C2109 at ~800 lines)
  Two verified decode channels:
  C1  stru_A8EB00 (IDA-level '?', til type TechnoTypeClass): the unnamed byte
      member sits at +0xE4; abs byte offset = 0xE4 + N. Binary-verified at
      N in {216, 361, 364, 416, 1436, 1444} (tags 0x733516/0x46649b/0x438f75/
      0x517138 -> [0xa8ecc8]/[0xa8ed4d]/[0xa8ed50]/[0xa8ed84]/[0xa8f180]/[0xa8f188]).
  C2  emitter-level losses: full_export snapshot keeps the typed member at the
      same statement tag; (recv, member, N) -> offset via IDA til tables.
  Rewrite:  RECV.? / RECV.?[N]  ->  DataGlobal_<ADDR>[<abs>]   (byte-exact;
      surrounding cast chains/BYTE macros are preserved verbatim -> zero new
      casts; value-form sites with wide elems are NOT rewritten).

Also supplies the 8 missing byte-blob externs into src/e4/e4_globals.hpp
(additive; DataGlobal_A8EB00 already exists) and refreshes the derived
e4_globals_decls.hpp via tools/csp_export/gen_e4_globals_decls.py.

Residual (336 sites, not touched): value-form wide-elem (210, needs dword-view
supply = L5 lane), member-unmined (126, statement-buffer alignment gap).

Usage: python x34_l4_qmark.py           # dry run
       python x34_l4_qmark.py --apply   # write
Idempotence: pattern disappears after rewrite (2nd run -> 0 writes).
"""
import subprocess
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
REG = ROOT / '.omo' / 'evidence' / 'optimization' / 'x34' / 'l4_registry.json'
APPLY = '--apply' in sys.argv
report = []

import json
plan = json.load(open(REG, encoding='utf-8'))['sites']
ok = [s for s in plan if isinstance(s['verdict'], list) and s['verdict'][0] == 'blob']
print('planned blob sites:', len(ok))

# group by file
by_file = {}
for s in ok:
    by_file.setdefault(s['file'], []).append(s)

changed_files = 0
changed_sites = 0
for rel, sites in sorted(by_file.items()):
    p = ROOT / rel
    lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    # per-line replacements, validated against current text
    per_line = {}
    for s in sites:
        per_line.setdefault(s['line'], []).append(s)
    wrote = 0
    for lineno, ss in sorted(per_line.items(), key=lambda kv: -kv[0]):
        idx = lineno - 1
        ln = lines[idx]
        orig = ln
        for s in sorted(ss, key=lambda x: -len(x['text'])):
            recv = s['recv']
            if s['sub'] is None:
                old = '%s.?' % recv
            else:
                old = '%s.?[%d]' % (recv, s['sub'])
            new = '%s[%d]' % (s['verdict'][1], s['verdict'][2])
            if old not in ln:
                continue  # already applied or shifted; counted as noop
            ln = ln.replace(old, new)
        if ln != orig:
            lines[idx] = ln
            wrote += 1
    if not wrote:
        report.append('NOOP %s (0 rewrites = already applied)' % rel)
        continue
    report.append('PLAN %s: %d lines' % (rel, wrote) if not APPLY else
                  'WROTE %s: %d lines' % (rel, wrote))
    changed_files += 1
    changed_sites += wrote
    if APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')

# ---- blob supply ------------------------------------------------------------
p = ROOT / 'src/e4/e4_globals.hpp'
txt = p.read_text(encoding='utf-8', errors='replace')
NEW_BLOBS = [
    ('DataGlobal_817318', 256), ('DataGlobal_818E00', 888), ('DataGlobal_81AF8C', 888),
    ('DataGlobal_820320', 888), ('DataGlobal_82BA00', 6040), ('DataGlobal_842DCC', 6040),
    ('DataGlobal_8B3DC0', 1728), ('DataGlobal_B0E840', 6040),
]
missing = [b for b in NEW_BLOBS if ('extern unsigned char %s[%d];' % b) not in txt]
if not missing:
    report.append('NOOP e4_globals.hpp (all blobs present)')
else:
    anchor = 'extern unsigned char DataGlobal_A8EB00[45660];'
    idx = txt.find(anchor)
    if idx < 0:
        report.append('SKIP e4_globals.hpp: anchor DataGlobal_A8EB00 not found')
    else:
        ins = ''.join('extern unsigned char %s[%d];  // X34-L4 %s byte view (til-verified)\n'
                      % (b, sz, b.split('_')[1]) for b, sz in missing)
        report.append('PLAN e4_globals.hpp: +%d blob externs' % len(missing) if not APPLY
                      else 'WROTE e4_globals.hpp: +%d blob externs' % len(missing))
        if APPLY:
            p.write_text(txt[:idx] + ins + txt[idx:], encoding='utf-8', errors='replace')

# ---- derived decls header ----------------------------------------------------
if APPLY:
    r = subprocess.run([sys.executable, str(ROOT / 'tools/csp_export/gen_e4_globals_decls.py'), '--apply'],
                       cwd=str(ROOT), capture_output=True, text=True, encoding='utf-8', errors='replace')
    tail = (r.stdout or r.stderr).strip().split('\n')[-3:]
    report.append('gen_e4_globals_decls: ' + ' | '.join(tail))

print('\n'.join(report))
print('summary: %d files / %d site-rewrites %s' % (
    changed_files, changed_sites, '(DRY)' if not APPLY else '(APPLIED)'))
print('DRY RUN (use --apply)' if not APPLY else 'APPLIED')
