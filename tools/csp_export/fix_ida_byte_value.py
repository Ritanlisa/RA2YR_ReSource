#!/usr/bin/env python3
"""IDA_BYTE[N](x) 类型感知值语义清除 (G42.57 W20-M12/M12b)。

语义律: 整数标量 x 的 IDA_BYTEn(x) == 小端字节 n == (x >> 8n) & 0xFF。
安全类: 纯标识符(同 TU 整型声明, 非指针) / *(u32 cast)解引用 / 显式数组基下标。
保留: char/成员无型/complex 实参 (字节地址语义, 记账 keep)。

守卫 (M12b 教训): #define 行绝对不碰 (首版吃过宏定义名 -> C2005/C2007 毒化)。

用法: python tools/csp_export/fix_ida_byte_value.py [--apply]
DRY 默认; 备份 -> .omo/w20m12_backup/。
"""
import io
import os
import re
import shutil
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
BAK = ROOT / '.omo' / 'w20m12_backup'
APPLY = '--apply' in sys.argv

CALL = re.compile(r'\bIDA_BYTE([0-4])\(')
ARITH = re.compile(
    r'\((?:const |unsigned |signed )*(?:char|int|short|long|uint8_t|unsigned int|unsigned __int64|void)\s*\*+\s*\)\s*[A-Za-z_][\w]*\s*(?:\+\+|--|\+\s*\d|\-\s*\d)')
TAIL_ANCHOR = re.compile(r'\s*/\*0x[0-9A-Fa-f]+\*/\s*$')
INT_DECL = r'\b(?:unsigned\s+|signed\s+)*(?:__int64|int|long|short)\s+%s\b\s*(?::[^;\n]*)?(?:=|;|,|\[|\))'

from collections import Counter
stats = Counter()
keep_log = []
files_changed = []

for dirpath, _, fs in os.walk(ROOT / 'src'):
    if 'raw_decomp' in dirpath:
        continue
    for fn in fs:
        if not fn.endswith(('.cpp', '.hpp', '.h')):
            continue
        p = Path(dirpath) / fn
        t = io.open(p, 'r', encoding='utf-8', newline='').read()
        if 'IDA_BYTE' not in t:
            continue
        out = []
        pos = 0
        nfix = 0
        while True:
            m = CALL.search(t, pos)
            if not m:
                out.append(t[pos:])
                break
            ls = t.rfind('\n', 0, m.start()) + 1
            if t[ls:m.start()].strip().startswith('#'):
                out.append(t[pos:m.end()])   # M12b: #define 行守卫
                pos = m.end()
                continue
            j = t.find('(', m.end() - 1)
            depth, k = 1, j + 1
            while k < len(t) and depth:
                if t[k] == '(':
                    depth += 1
                elif t[k] == ')':
                    depth -= 1
                k += 1
            if depth:
                out.append(t[pos:m.end()])
                pos = m.end()
                continue
            n, arg = m.group(1), t[j + 1:k - 1].strip()
            repl = None
            if re.match(r'^[A-Za-z_]\w*$', arg):
                if re.search(INT_DECL % re.escape(arg), t[max(0, m.start() - 20000):m.start()]):
                    sh = int(n) * 8
                    repl = '(((%s) >> %d) & 0xFF)' % (arg, sh) if sh else '((%s) & 0xFF)' % arg
                    stats['A-plain-int'] += 1
                else:
                    stats['keep-plain-unknown'] += 1
            elif arg.startswith('*(') and re.search(r'(unsigned int|unsigned long|int) \*', arg):
                sh = int(n) * 8
                inner = arg[1:]
                repl = '((%s) >> %d) & 0xFF' % (inner, sh) if sh else '(%s) & 0xFF' % inner
                stats['B-deref-u32'] += 1
            elif re.match(r'^\(\(unsigned (?:int|long) \*\)&[A-Za-z_][\w]*\)\[\d+\]$', arg):
                sh = int(n) * 8
                repl = '((%s) >> %d) & 0xFF' % (arg, sh) if sh else '(%s) & 0xFF' % arg
                stats['B2-castidx-u32'] += 1
            else:
                stats['keep'] += 1
            if repl:
                out.append(t[pos:m.start()])
                out.append(repl)
                nfix += 1
            else:
                out.append(t[pos:k])
            pos = k
        if nfix:
            files_changed.append((str(p), nfix))
            if APPLY:
                os.makedirs(BAK, exist_ok=True)
                b = BAK / (fn + '.pre')
                if not b.exists():
                    shutil.copyfile(p, b)
                io.open(p, 'w', encoding='utf-8', newline='').write(''.join(out))

print('fixed:', sum(n for _, n in files_changed), 'across', len(files_changed), 'files')
print(dict(stats))
if keep_log:
    print('keep samples:', keep_log[:5])
