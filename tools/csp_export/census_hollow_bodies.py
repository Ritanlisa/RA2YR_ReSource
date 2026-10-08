# -*- coding: utf-8 -*-
# G42.57 W20-M14: 全树空心体普查 (用户使命: 完整可用的反编译 C++ 项目)
#   空心定义 = 函数有 def 行 + { } 但体内容 (剥注释/空白后) 为空或仅存根性语句
#   交叉真值 = raw_decomp 同地址有非平凡体 (语句数 >= 空心体阈值)
#   输出: 按 TU 汇总的空心清单 + 地址 (供批量移植队列)
import io, os, re, sys
from pathlib import Path
from collections import Counter

ROOT = Path(__file__).resolve().parents[2]
DEF_RE = re.compile(r'^([A-Za-z_][\w:<>,*&\s]*?)\b([A-Za-z_]\w*)\s*\(([^;]*)\)\s*(?:const\s*)?$')
ANCHOR = re.compile(r'/\*\s*0x([0-9A-Fa-f]{6,8})\s*\*/')

def strip_comments(t):
    t = re.sub(r'/\*.*?\*/', '', t, flags=re.S)
    t = re.sub(r'//[^\n]*', '', t)
    return t

def _defline(lines, brace_i):
    for back in range(1, 6):
        if brace_i - back < 0:
            break
        s = lines[brace_i - back].strip()
        if s and not s.startswith('//') and not s.startswith('#'):
            return s
    return ''

def raw_stmt_count(addr6):
    """raw_decomp 里该地址函数的语句行数 (粗测: 分号计数)"""
    global RAWIDX
    hits = RAWIDX.get(addr6)
    if not hits:
        return 0
    best = 0
    for path, ln in hits[:2]:
        try:
            lines = io.open(os.path.join(ROOT, path), encoding='utf-8', errors='replace').read().split('\n')
        except Exception:
            continue
        # 从 header 行向下取体 (到下一个 ==== header)
        j = ln
        body = []
        while j < len(lines) and j < ln + 400:
            if j > ln + 3 and lines[j].startswith('// ===='):
                break
            body.append(lines[j])
            j += 1
        n = ''.join(body).count(';')
        best = max(best, n)
    return best

# 索引 raw_decomp
RAWIDX = {}
rd_dir = os.path.join(ROOT, 'src', 'raw_decomp')
for fn in os.listdir(rd_dir):
    if not fn.endswith('.c'):
        continue
    p = os.path.join('src', 'raw_decomp', fn)
    for i, line in enumerate(io.open(os.path.join(rd_dir, fn), encoding='utf-8', errors='replace')):
        m = re.search(r'====\s*0x0?([0-9A-Fa-f]{6,8})\s', line)
        if m:
            RAWIDX.setdefault(m.group(1).lstrip('0').upper(), []).append((p, i))

hollow = []
tu_stat = Counter()
for dirpath, _, fs in os.walk(str(ROOT / 'src')):
    if 'raw_decomp' in dirpath:
        continue
    for fn in fs:
        if not fn.endswith('.cpp'):
            continue
        p = os.path.join(dirpath, fn)
        rel = str(p).replace(str(ROOT) + os.sep, '')
        lines = io.open(p, encoding='utf-8', errors='replace').read().split('\n')
        i = 0
        while i < len(lines):
            line = lines[i]
            s = line.strip()
            is_def = (
                s.endswith(')') and not s.endswith(';') and '(' in s
                and not s.startswith('//') and not s.startswith('#')
                and not s.startswith('}') and not s.startswith('{')
                and ('::' in s or s.startswith('extern ') or ' (' in s or '\t(' in s)
            )
            if is_def:
                # 向后找 { (允许空行/注释行)
                k = i + 1
                found = False
                while k < len(lines) and k <= i + 4:
                    s2 = lines[k].strip()
                    if s2 == '{':
                        found = True
                        break
                    if s2 and not s2.startswith('//'):
                        break
                    k += 1
                if found:
                    i = k
                    line = lines[i]
                    s = '{'
                    addr = None
                    for back in range(1, 9):
                        if i - back < 0:
                            break
                        m = ANCHOR.search(lines[i - back]) or ANCHOR.search(lines[i - back])
                        if m:
                            addr = m.group(1).lstrip('0').upper()
                            break
                    depth = 1
                    j = i + 1
                    body = []
                    while j < len(lines) and depth:
                        for ch in lines[j]:
                            if ch == '{':
                                depth += 1
                            elif ch == '}':
                                depth -= 1
                                if not depth:
                                    break
                        body.append(lines[j])
                        j += 1
                    core = strip_comments('\n'.join(body)).strip()
                    if core == '':
                        rc = raw_stmt_count(addr) if addr else 0
                        if rc >= 5:
                            m2 = DEF_RE.match(lines[i - 1].strip() if False else s if False else _defline(lines, i))
                            name = m2.group(2) if m2 else lines[i - 1].strip()[:50]
                            hollow.append((rel, i + 1, name, addr, rc))
                            tu_stat[rel] += 1
                    i = j
                    continue
            i += 1

print('HOLLOW BODIES (empty def + raw truth >=5 stmts):', len(hollow))
for rel, ln, name, addr, rc in hollow:
    print('  %s:%d  %s  @0x%s  (raw %d stmts)' % (rel, ln, name, addr or '??????', rc))
print('--- by TU ---')
for rel, n in tu_stat.most_common(15):
    print('  %4d  %s' % (n, rel))
