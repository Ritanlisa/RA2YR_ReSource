#!/usr/bin/env python3
"""X34 L4 hotfix: DataGlobal_820320 name collision (pre-existing [4] scalar blob
at e4_globals.hpp:3444 vs our new [888]). Revert the 2 sites + drop the new
extern; family goes back to residual. Idempotent."""
import subprocess
import sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv
report = []

# 1) revert the two site rewrites
for rel, lineno, old_frag in [
    ('src/e4/Skirmish_e4.cpp', 428, '&DataGlobal_820320[516]'),
    ('src/e4/SuperWeaponTypeClass_e4.cpp', 584, '&DataGlobal_820320[476]'),
]:
    p = ROOT / rel
    lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    idx = lineno - 1
    if old_frag not in lines[idx]:
        report.append('NOOP %s:%d (fragment absent)' % (rel, lineno))
        continue
    recv_old = old_frag.replace('&DataGlobal_820320[516]', '&stru_820320.?[12]').replace(
        '&DataGlobal_820320[476]', '&stru_820320.?[143]')
    report.append('PLAN revert %s:%d' % (rel, lineno))
    if APPLY:
        lines[idx] = lines[idx].replace(old_frag, recv_old)
        p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
        report[-1] = 'WROTE revert %s:%d' % (rel, lineno)

# 2) drop the colliding extern from e4_globals.hpp
p = ROOT / 'src/e4/e4_globals.hpp'
lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
hits = [i for i, ln in enumerate(lines) if 'extern unsigned char DataGlobal_820320[888];' in ln]
if not hits:
    report.append('NOOP e4_globals.hpp (colliding extern absent)')
else:
    report.append('PLAN drop e4_globals.hpp:%d colliding extern' % (hits[0] + 1))
    if APPLY:
        for i in sorted(hits, reverse=True):
            del lines[i]
        p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
        report[-1] = 'WROTE e4_globals.hpp extern dropped'

# 3) refresh derived decls header
if APPLY:
    r = subprocess.run([sys.executable, str(ROOT / 'tools/csp_export/gen_e4_globals_decls.py'), '--apply'],
                       cwd=str(ROOT), capture_output=True, text=True, encoding='utf-8', errors='replace')
    report.append('gen_e4_globals_decls refreshed')

print('\n'.join(report))
print('DRY (use --apply)' if not APPLY else 'APPLIED')
