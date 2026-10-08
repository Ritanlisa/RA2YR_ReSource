# -*- coding: utf-8 -*-
# G42.57 W20-M18: 双伤修复
#   1. building_type.hpp 供给块去重 (M17 双跑重复插入)
#   2. building.cpp 指针左值 W 形回退 (INT_DECL 未排除指针声明 -> (ptr)&mask C2296)
#      依错误行枚举, W 形状还原 IDA_LOWORD/HIWORD 原式
#   3. M16 INT_DECL 补指针排除 (后续轮安全)
import io, os, re, shutil, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
BAK = os.path.join(ROOT, r'.omo\w20m18_backup')
APPLY = '--apply' in sys.argv

def rd(p): return io.open(p, 'r', encoding='utf-8', newline='').read()
def wr(p, s):
    os.makedirs(BAK, exist_ok=True)
    b = os.path.join(BAK, os.path.basename(p) + '.pre')
    if not os.path.exists(b):
        shutil.copyfile(p, b)
    io.open(p, 'w', encoding='utf-8', newline='').write(s)

# ---- 指针左值 W 形回退 (M16 安全网; 形状匹配+指针声明判定) ----
CPP = os.path.join(ROOT, r'src\structure\building.cpp')
t = rd(CPP)
# 本轮已知 C2296 行: 2263/2266/2267 (LOWORD/HIWORD 形) — 通用形状匹配:
#   (X) = ((X) & ~0xMASK) | ((unsigned int)(RHS) & 0xMASK);   X 为指针声明
#   (X) = ((X) & ~(0xMASKULL << N)) | (((unsigned __int64)(unsigned int)(RHS) & 0xMASK) << N);
W_PAT = re.compile(
    r'^(\s*)\((\w+)\) = \(\((\w+)\) & ~(0x[0-9A-Fa-f]+)(ULL)?( << (\d+))?\) \| \((.*)\)\s*;?\s*(/\*.*?\*/)?\s*$',
    re.S)

def decl_is_pointer(t, var, pos):
    w = t[max(0, pos - 20000):pos]
    for m in re.finditer(r'\b(?:unsigned\s+|signed\s+|const\s+)*[\w\s]+?([\s*&]+)%s\b\s*(?:=|;|,|\[|\))' % re.escape(var), w):
        if '*' in m.group(1):
            return True
    return False

def to_ida(name_var, mask, shift, rhs):
    if mask == '0xFF' and not shift:
        return 'IDA_LOBYTE(%s) = %s' % (name_var, rhs)
    if mask == '0xFFFF' and not shift:
        return 'IDA_LOWORD(%s) = %s' % (name_var, rhs)
    if mask == '0xFFFF' and shift == '16':
        return 'IDA_HIWORD(%s) = %s' % (name_var, rhs)
    if mask == '0xFF' and shift == '8':
        return 'IDA_BYTE1(%s) = %s' % (name_var, rhs)
    if mask == '0xFF' and shift == '24':
        return 'IDA_HIBYTE(%s) = %s' % (name_var, rhs)
    return None

fixed = 0
out_lines = []
off = 0
for line in t.split('\n'):
    m = W_PAT.match(line)
    if m and m.group(2) == m.group(3):
        var, mask, shift, rhs = m.group(2), m.group(4), m.group(6), m.group(8)
        rhs_clean = rhs.strip()
        r2 = re.match(r'^\(unsigned int\)\((.*)\)$', rhs_clean, re.S)
        if r2:
            rhs_clean = r2.group(1)
        ida = to_ida(var, mask, shift or '', rhs_clean)
        if ida and decl_is_pointer(t, var, off):
            out_lines.append('%s%s;' % (m.group(1), ida))
            fixed += 1
            off += len(line) + 1
            continue
    out_lines.append(line)
    off += len(line) + 1
print('pointer-lvalue W sites reverted:', fixed)
t = '\n'.join(out_lines)
if APPLY and fixed:
    wr(CPP, t)

print('DRY' if not APPLY else 'APPLIED')
