#!/usr/bin/env python3
"""//DUPDEF 注释尸块全树清除 (G42.57 W20-M10, 用户指令: 不留 stub 尸块)。

形态: `//DUPDEF ...` 整行注释 (G42.33 ph5 把重复 raw 定义注释掉的尸块)
      + 配套横幅 `// 0xADDR (DUPDEF second raw def ...)`
全部为整行注释 -> 删除零编译影响。

用法: python tools/csp_export/fix_dupdef_corpses.py [--apply]
DRY 默认; 备份 -> .omo/w20m10_backup/。
"""
import io
import os
import re
import shutil
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
BAK = ROOT / '.omo' / 'w20m10_backup'
APPLY = '--apply' in sys.argv

dup_line = re.compile(r'^\s*//DUPDEF')
dup_banner = re.compile(r'^\s*//\s*0x[0-9A-Fa-f]+\s*\(DUPDEF[^)\n]*\)\s*$')

total_lines = 0
files = []
src = ROOT / 'src'
for dirpath, _, fs in os.walk(src):
    if 'raw_decomp' in dirpath:
        continue
    for fn in fs:
        if not fn.endswith(('.cpp', '.hpp', '.h')):
            continue
        p = Path(dirpath) / fn
        t = io.open(p, 'r', encoding='utf-8', newline='').read()
        lines = t.split('\n')
        keep = [ln for ln in lines
                if not (dup_line.match(ln) or dup_banner.match(ln))]
        killed = len(lines) - len(keep)
        if killed:
            files.append((str(p), killed))
            total_lines += killed
            if APPLY:
                os.makedirs(BAK, exist_ok=True)
                b = BAK / (fn + '.pre')
                if not b.exists():
                    shutil.copyfile(p, b)
                io.open(p, 'w', encoding='utf-8', newline='').write('\n'.join(keep))

print('dupdef corpses removed: %d lines across %d files' % (total_lines, len(files)))
