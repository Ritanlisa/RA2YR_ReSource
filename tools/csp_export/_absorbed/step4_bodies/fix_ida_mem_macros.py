# -*- coding: utf-8 -*-
# G42.57 W20-M16: IDA_LOBYTE/LOWORD/HIWORD/BYTE*/WORD*/LODWORD/HIDWORD 值语义消除
#   读形: IDA_LOBYTE(x)     -> ((x) & 0xFF) / WORD1 -> (((x)>>16)&0xFFFF) ...
#   写形: IDA_LOBYTE(x) = E -> (x) = ((x) & ~0xFF) | ((E) & 0xFF)   (整型左值)
#   安全类: 纯标识符(同 TU 有整型声明) / *(u32/int cast)解引用 / 显式下标数组元素
#   保留: 未知类型成员/complex (字节地址语义, 记账)
#   M12 教训: #define 行绝对不碰
# DRY 默认; --apply 落盘 (备份 .omo/w20m16_backup/)。
import io
import os
import re
import shutil
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
BAK = os.path.join(ROOT, r'.omo\w20m16_backup')
APPLY = '--apply' in sys.argv

MAC = re.compile(r'\bIDA_(LOBYTE|HIBYTE|LOWORD|HIWORD|WORD0|WORD1|BYTE0|BYTE1|BYTE2|BYTE3|BYTE4|BYTE5|BYTE6|BYTE7|BYTE8|LODWORD|HIDWORD)\s*\(')

SPEC = {
    'LOBYTE': (0, 8, 0xFF), 'HIBYTE': (24, 8, 0xFF),
    'LOWORD': (0, 16, 0xFFFF), 'HIWORD': (16, 16, 0xFFFF),
    'WORD0': (0, 16, 0xFFFF), 'WORD1': (16, 16, 0xFFFF),
    'BYTE0': (0, 8, 0xFF), 'BYTE1': (8, 8, 0xFF), 'BYTE2': (16, 8, 0xFF),
    'BYTE3': (24, 8, 0xFF), 'BYTE4': (32, 8, 0xFF), 'BYTE5': (40, 8, 0xFF),
    'BYTE6': (48, 8, 0xFF), 'BYTE7': (56, 8, 0xFF), 'BYTE8': (64, 8, 0xFF),
}
INT_DECL = r'\b(?:unsigned\s+|signed\s+)*(?:__int64|int|long|short)\s+%s\b\s*(?::[^;\n]*)?(?:=|;|,|\[|\))'

def bal_attr(t, i):
    """t[i] at MACRO match start -> (name, argstr, end) paren-balanced"""
    m = MAC.match(t, i)
    j = t.find('(', m.end() - 1)
    depth, k = 1, j + 1
    while k < len(t) and depth:
        if t[k] == '(':
            depth += 1
        elif t[k] == ')':
            depth -= 1
        k += 1
    if depth:
        return None
    return m.group(1), t[j + 1:k - 1].strip(), k

def read_expr(name, arg):
    if name in ('LODWORD', 'HIDWORD'):
        sh = 0 if name == 'LODWORD' else 32
        return '((unsigned int)((unsigned __int64)(%s) >> %d))' % (arg, sh) if sh else '((unsigned int)(%s))' % arg
    sh, w, mask = SPEC[name]
    if sh:
        return '(((unsigned int)(%s) >> %d) & 0x%X)' % (arg, sh, mask)
    return '((unsigned int)(%s) & 0x%X)' % (arg, mask)

def write_expr(name, arg, rhs):
    if name in ('LODWORD',):
        return '(%s) = (unsigned int)(%s)' % (arg, rhs)
    if name in ('HIDWORD',):
        return '(%s) = ((%s) & 0xFFFFFFFFULL) | ((unsigned __int64)(unsigned int)(%s) << 32)' % (arg, arg, rhs)
    sh, w, mask = SPEC[name]
    if sh == 0:
        return '(%s) = ((%s) & ~0x%X) | ((unsigned int)(%s) & 0x%X)' % (arg, arg, mask, rhs, mask)
    return '(%s) = ((%s) & ~(0x%XULL << %d)) | (((unsigned __int64)(unsigned int)(%s) & 0x%X) << %d)' % (arg, arg, mask, sh, rhs, mask, sh)

stats = Counter()
keep = []
files = []
src = os.path.join(ROOT, 'src')
for dirpath, _, fs in os.walk(src):
    if 'raw_decomp' in dirpath:
        continue
    for fn in fs:
        if not fn.endswith(('.cpp', '.hpp', '.h')):
            continue
        p = os.path.join(dirpath, fn)
        t = io.open(p, 'r', encoding='utf-8', errors='replace', newline='').read()
        if 'IDA_' not in t:
            continue
        out = []
        pos = 0
        nfix = 0
        cur_line_start = 0
        while True:
            m = MAC.search(t, pos)
            if not m:
                out.append(t[pos:])
                break
            # 行首判定 (跳过 #define 行)
            ls = t.rfind('\n', 0, m.start()) + 1
            prefix = t[ls:m.start()].strip()
            r = bal_attr(t, m.start())
            if prefix.startswith('#') or not r:
                out.append(t[pos:m.end()])
                pos = m.end()
                continue
            name, arg, end = r
            repl = None
            is_plain = re.match(r'^[A-Za-z_]\w*$', arg)
            is_deref = bool(re.match(r'^\*\((?:unsigned |signed )*(?:__int64|int|long|short)\s*\*\)', arg))
            is_idx = bool(re.match(r'^\(\([A-Za-z_][\w ]*\*\)[^()]+\)\[\d+\]$', arg)) or re.match(r'^[A-Za-z_]\w*\[\d+\]$', arg)
            if is_plain and re.search(INT_DECL % re.escape(arg), t[max(0, m.start() - 6000):m.start()]):
                k2 = end
                while k2 < len(t) and t[k2] in ' \t':
                    k2 += 1
                in_parens = t.count('(', ls, k2) != t.count(')', ls, k2)
                if t[k2] == '=' and t[k2 + 1:k2 + 2] != '=' and not in_parens:
                    e2 = t.find(';', k2)
                    rhs = t[k2 + 1:e2].strip()
                    repl_w = write_expr(name, arg, rhs) + ';'
                    out.append(t[pos:m.start()])
                    out.append(repl_w)
                    pos = e2 + 1
                    nfix += 1
                    stats['W-plain'] += 1
                    continue
                repl = read_expr(name, arg)
                stats['R-plain'] += 1
            elif is_deref or is_idx:
                k2 = end
                while k2 < len(t) and t[k2] in ' \t':
                    k2 += 1
                in_parens = t.count('(', ls, k2) != t.count(')', ls, k2)
                if t[k2] == '=' and t[k2 + 1:k2 + 2] != '=' and not in_parens:
                    e2 = t.find(';', k2)
                    rhs = t[k2 + 1:e2].strip()
                    out.append(t[pos:m.start()])
                    out.append(write_expr(name, arg, rhs) + ';')
                    pos = e2 + 1
                    nfix += 1
                    stats['W-cast'] += 1
                    continue
                repl = read_expr(name, arg)
                stats['R-cast'] += 1
            else:
                stats['keep'] += 1
                keep.append((fn, name, arg[:36]))
            if repl:
                out.append(t[pos:m.start()])
                out.append(repl)
                nfix += 1
            else:
                out.append(t[pos:end])
            pos = end
        if nfix:
            files.append((p, nfix))
            if APPLY:
                os.makedirs(BAK, exist_ok=True)
                b = os.path.join(BAK, fn + '.pre')
                if not os.path.exists(b):
                    shutil.copyfile(p, b)
                io.open(p, 'w', encoding='utf-8', errors='replace', newline='').write(''.join(out))

print('fixed:', sum(n for _, n in files), 'across', len(files), 'files')
print(dict(stats))
print('--- keep samples ---')
for f, n, a in keep[:8]:
    print('  %s IDA_%s(%s...)' % (f, n, a))
