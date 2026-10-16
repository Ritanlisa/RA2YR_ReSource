#!/usr/bin/env python3
"""X34 L4 hotfix2: revert the 3 plain-form clobber lines to '?' residual form.
Detector class: rewritten blob double-subscript DataGlobal_X[N][M]. Idempotent."""
import sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv
report = []

FIXES = [
    ('src/e4/addr74_e4.cpp', 1238,
     'DataGlobal_A8EB00[228][strlen(&DataGlobal_A8EB00[228][294]) + 293] == 13;',
     'stru_A8EB00.?[strlen(&stru_A8EB00.?[294]) + 293] == 13;'),
    ('src/e4/addr74_e4.cpp', 1239,
     'DataGlobal_A8EB00[228][strlen(&DataGlobal_A8EB00[228][294]) + 293] = 0 )',
     'stru_A8EB00.?[strlen(&stru_A8EB00.?[294]) + 293] = 0 )'),
    ('src/e4/SuperClass_e4.cpp', 1123,
     'DataGlobal_B0E840[3456][1] < DataGlobal_B0E840[3456]',
     'g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.?'),
]
for rel, lineno, bad, good in FIXES:
    p = ROOT / rel
    lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    idx = lineno - 1
    if bad not in lines[idx]:
        if good in lines[idx]:
            report.append('NOOP %s:%d (already reverted)' % (rel, lineno))
        else:
            report.append('SKIP %s:%d (neither form found!)' % (rel, lineno))
        continue
    report.append('PLAN revert %s:%d' % (rel, lineno))
    if APPLY:
        lines[idx] = lines[idx].replace(bad, good)
        p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
        report[-1] = 'WROTE revert %s:%d' % (rel, lineno)

print('\n'.join(report))
print('DRY (use --apply)' if not APPLY else 'APPLIED')
