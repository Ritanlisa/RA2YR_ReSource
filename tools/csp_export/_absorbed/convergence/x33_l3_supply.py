#!/usr/bin/env python3
"""X33 L3 — supply wave (D-A9 proto + WinAPI::Wrapper rename per g57w20m7 ruling
+ G41.46 include-supply rerun). One-shot, idempotence-guarded.

L3a  e4_protos.h: extern proto for sub_7DC720 (53 C3861 / 20 TU; decl twins
     already exist at stream_ext.hpp:13 + misc_ext.hpp:56 -- same signature
     int(int), legal redeclaration).
L3b  WinAPI::Wrapper( -> sub_7DC720( in e4 bodies (user ruling g57w20m7
     recorded at stream_ext.hpp:12: the WinAPI pseudo-class is abolished;
     free-function default name is canonical). 29 C2027 rows + caps-hidden.
L3c  rerun G41.46 fix_c2027_include_supply.py with the fresh census
     (.omo/tu_errors.json from x33_build_L2 log): 80 includes / 52 TUs.

Usage: python x33_l3_supply.py [--apply]
"""
import subprocess
import sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv
report = []

# ---- L3a: proto supply ----
p = ROOT / 'src/e4/e4_protos.h'
txt = p.read_text(encoding='utf-8', errors='replace')
NEEDLE = 'sub_7DC720'
if NEEDLE in txt:
    report.append('NOOP e4_protos.h (proto present)')
else:
    anchor = 'extern void sub_4085E0(unsigned int * a1, int a2, int a3);'
    lines = txt.split('\n')
    idx = next((i for i, ln in enumerate(lines) if anchor in ln), None)
    if idx is None:
        report.append('SKIP e4_protos.h: anchor not found')
    else:
        lines.insert(idx, 'extern int sub_7DC720(int a1);  // X33-L3 0x7DC720 (53 C3861/20TU; decl twins stream_ext.hpp:13/misc_ext.hpp:56; ruling g57w20m7)')
        report.append(f'PLAN insert e4_protos.h:{idx+1} sub_7DC720 proto')
        if APPLY:
            p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
            report[-1] = 'WROTE e4_protos.h sub_7DC720 proto'

# ---- L3b: WinAPI::Wrapper rename ----
import io
n_files = n_sites = 0
for f in sorted((ROOT / 'src/e4').glob('*.cpp')):
    txt = f.read_text(encoding='utf-8', errors='replace')
    n = txt.count('WinAPI::Wrapper(')
    if not n:
        continue
    if not APPLY:
        report.append(f'PLAN rename {f.name}: {n} sites')
        n_sites += n
        n_files += 1
        continue
    f.write_text(txt.replace('WinAPI::Wrapper(', 'sub_7DC720('),
                 encoding='utf-8', errors='replace')
    report.append(f'WROTE {f.name} ({n} renames)')
    n_sites += n
    n_files += 1
if not APPLY and n_files:
    report.append(f'PLAN rename total: {n_sites} sites in {n_files} files')

# ---- L3c: G41.46 rerun ----
fixer = ROOT / 'tools/csp_export/_absorbed/step2_decl/fix_c2027_include_supply.py'
args = [sys.executable, str(fixer)] + (['--apply'] if APPLY else [])
r = subprocess.run(args, cwd=str(ROOT), capture_output=True, text=True,
                   encoding='utf-8', errors='replace')
report.append('G41.46 ' + ('APPLY' if APPLY else 'DRY') + ' output:')
report.extend('  ' + l for l in (r.stdout or r.stderr).strip().split('\n')[:8])

print('\n'.join(report))
print('DRY RUN (use --apply)' if not APPLY else 'APPLIED')
