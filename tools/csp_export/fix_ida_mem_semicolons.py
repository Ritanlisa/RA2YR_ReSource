# -*- coding: utf-8 -*-
# G42.57 W20-M19: M16 缺分号残留全树修复 (2,353 站/125 文件)
#   首轮回滚按 basename 匹配在多目录同名文件 (supplied_bodies.cpp x3 等)
#   上错配, 部分文件未被修复轮覆盖。
#   修复: W 形状行 (`(vX) = ((vX) & ~0xMASK)...`) 无尾分号 -> 在末个 ')' 后补 ';'
import io
import os
import re
import shutil
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
BAK = ROOT / '.omo' / 'w20m19_backup'
APPLY = '--apply' in sys.argv

LINE_PAT = re.compile(r'^(\s*\(\w+\) = \(\(\w+\) & ~0x[0-9A-Fa-f]+.*\))(\s*/\*.*)?$')
total = 0
files = []
for dirpath, _, fs in os.walk(ROOT / 'src'):
    if 'raw_decomp' in dirpath:
        continue
    for fn in fs:
        if not fn.endswith(('.cpp', '.hpp')):
            continue
        p = Path(dirpath) / fn
        lines = io.open(p, encoding='utf-8', errors='replace').read().split('\n')
        changed = 0
        for i, ln in enumerate(lines):
            s = ln.rstrip()
            if s.endswith(';') or not (LINE_PAT.match(s) or
                    re.match(r'^\s*\(\w+\) = \(unsigned int\)\(.*\)(\s*/\*.*)?$', s)):
                continue
            m = re.match(r'^(.*\))(\s*/\*.*)?$', s)
            if m and not m.group(1).rstrip().endswith(';'):
                lines[i] = m.group(1) + ';' + (m.group(2) or '')
                changed += 1
        if changed:
            files.append((str(p), changed))
            total += changed
            if APPLY:
                os.makedirs(BAK, exist_ok=True)
                b = BAK / (fn + '.pre')
                if not b.exists():
                    shutil.copyfile(p, b)
                io.open(p, 'w', encoding='utf-8', newline='').write('\n'.join(lines))

print('semicolons restored: %d across %d files' % (total, len(files)))
