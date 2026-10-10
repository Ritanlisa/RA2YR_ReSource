# -*- coding: utf-8 -*-
# G42.57 W20-M19b: M16 多行语句缺分号修复 (31 站)
#   W 形起句 + 跨行括号平衡回 0 处无 ';' -> 补 ';'
import io
import os
import re
import shutil
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
BAK = ROOT / '.omo' / 'w20m19_backup'
APPLY = '--apply' in sys.argv

START = re.compile(r'^\s*\(\w+\) = \(\(\w+\) & ~0x[0-9A-Fa-f]+')
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
        i = 0
        while i < len(lines):
            if START.match(lines[i].rstrip()):
                # 跨行括号平衡
                depth = 0
                j = i
                done = False
                while j < len(lines) and j < i + 12:
                    for ch in lines[j]:
                        if ch == '(':
                            depth += 1
                        elif ch == ')':
                            depth -= 1
                            if depth == 0:
                                done = True
                                break
                    if done:
                        break
                    j += 1
                if done:
                    # 语句收口行: 找末个 ')' 后是否已有 ';'
                    seg = lines[j]
                    k = seg.rfind(')')
                    tail = seg[k + 1:]
                    if ';' not in tail:
                        m = re.match(r'^(.*\))(\s*/\*.*)?$', seg.rstrip())
                        if m:
                            lines[j] = m.group(1) + ';' + (m.group(2) or '')
                            changed += 1
                    i = j + 1
                    continue
            i += 1
        if changed:
            files.append((str(p), changed))
            total += changed
            if APPLY:
                os.makedirs(BAK, exist_ok=True)
                b = BAK / (fn + '.pre19b')
                if not b.exists():
                    shutil.copyfile(p, b)
                io.open(p, 'w', encoding='utf-8', errors='replace', newline='').write('\n'.join(lines))

print('multi-line semicolons restored: %d across %d files' % (total, len(files)))
