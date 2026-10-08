#!/usr/bin/env python3
"""canon 成员降级引擎 v1 (G42.57 W20, 用户指令: ptr[const]/vftable/IDA宏 全清)。

T1: vftable 自派发 -> 命名虚方法
    (*(SIG **)(*(unsigned int *)this + OFF))(ARGS)  =>  this->NAME(ARGS[1:])
    接收者=this (def 行类名); 槽名=canon_types.vtable_name_for(cls, OFF)
T2: ((unsigned int *)this)[N] 读 -> this->member (类成员表 4N 命中且非指针型)
T3: IDA_ 宏 (成员实参) -> 值语义 (成员类型表判定整型)

未解析 -> keep 账 (原因标注)。
用法: python tools/csp_export/canon_member_lowering.py [--apply]
"""
import io
import os
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools' / 'csp_export'))
import canon_types  # noqa: E402

BAK = ROOT / '.omo' / 'w20m20_lower_backup'
APPLY = '--apply' in sys.argv

T = canon_types.load()

DISPATCH = re.compile(
    r'\(\s*\*\s*\(([\w\s:*&]+?)\s*\*\*\s*\)\s*\(\s*\*\s*\(unsigned int\s*\*\)\s*this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)\s*\)\s*\(')
IDX = re.compile(r'\(\s*\(\s*unsigned int\s*\*\s*\)\s*this\s*\)\s*\[\s*(\d+)\s*\]')
MAC = re.compile(r'\bIDA_(LOBYTE|HIBYTE|LOWORD|HIWORD|WORD0|WORD1|BYTE0|BYTE1|BYTE2|BYTE3|BYTE4|BYTE5|BYTE6|BYTE7|BYTE8|LODWORD|HIDWORD)\s*\(')
SPEC = {'LOBYTE': (0, 0xFF), 'HIBYTE': (24, 0xFF), 'LOWORD': (0, 0xFFFF),
        'HIWORD': (16, 0xFFFF), 'WORD0': (0, 0xFFFF), 'WORD1': (16, 0xFFFF),
        'BYTE0': (0, 0xFF), 'BYTE1': (8, 0xFF), 'BYTE2': (16, 0xFF),
        'BYTE3': (24, 0xFF), 'BYTE4': (32, 0xFF), 'BYTE5': (40, 0xFF),
        'BYTE6': (48, 0xFF), 'BYTE7': (56, 0xFF), 'BYTE8': (64, 0xFF)}

DEF_CLS = re.compile(r'^[\w:<>,*&\s]+?\b(\w+)::\w+\s*\(')


def member_view_rewrite(t, cls, pos, end):
    """((unsigned int *)this)[N] -> this->member (整型成员) ; 返回 (repl, None) or (None, tail)"""
    m = IDX.match(t, pos)
    if not m:
        return None, None
    off = int(m.group(1)) * 4
    hit = canon_types.member_for(cls, off)
    if not hit:
        return None, None
    _, nm, ty = hit
    if '*' in ty:
        return None, None   # 指针型成员不做 u32 读改写 (语义敏感, 记账)
    return 'this->%s' % nm, None


stats = Counter()
ledger = []
files_changed = []

for dirpath, _, fs in os.walk(ROOT / 'src'):
    s = str(dirpath)
    if 'raw_decomp' in s or 'csp_canon' in s or '_generated' in s:
        continue
    for fn in fs:
        if not fn.endswith('.cpp'):
            continue
        p = Path(dirpath) / fn
        t = io.open(p, 'r', encoding='utf-8', newline='').read()
        lines = t.split('\n')
        # def 行 -> 类名区段
        cur_cls = None
        seg_bounds = []
        for i, ln in enumerate(lines):
            dm = re.match(r'^[\w:<>,*&\s]+?\b(\w+)::\w+\s*\(', ln.strip())
            if dm:
                cur_cls = dm.group(1).lower()
            seg_bounds.append(cur_cls)
        out = []
        pos = 0
        nfix = 0
        # 逐行处理 (保持行结构; 跨行派发不v1)
        for i, ln in enumerate(lines):
            cls = seg_bounds[i] or ''
            new_ln = ln
            # T1 this 派发
            while True:
                m = DISPATCH.search(new_ln)
                if not m:
                    break
                off = int(m.group(2), 0)
                hit = canon_types.vtable_name_for(cls, off) if cls else None
                if not hit:
                    ledger.append((fn, 'T1-novt', off, cls or '?'))
                    stats['keep-T1'] += 1
                    break
                vcls, vname = hit
                # 括号平衡取全调用
                j = new_ln.find(')', m.end())
                # 调用参数在 m.end() 之后到平衡 ')': 简化 v1 — 单行平衡
                depth, k = 1, m.end()
                while k < len(new_ln) and depth:
                    if new_ln[k] == '(':
                        depth += 1
                    elif new_ln[k] == ')':
                        depth -= 1
                    k += 1
                if depth:
                    ledger.append((fn, 'T1-multiline', off, cls))
                    stats['keep-T1'] += 1
                    break
                args = new_ln[m.end():k - 1].strip()
                args2 = re.sub(r'^this\s*,\s*', '', args)
                new_ln = new_ln[:m.start()] + 'this->%s(%s)' % (
                    vname.split('::')[-1], args2) + new_ln[k:]
                nfix += 1
                stats['T1-vdispatch'] += 1
            # T2 this[N]
            while True:
                m = IDX.search(new_ln)
                if not m:
                    break
                off = int(m.group(1)) * 4
                hit = canon_types.member_for(cls, off) if cls else None
                if not hit or '*' in (hit[2] or ''):
                    ledger.append((fn, 'T2', off, cls or '?'))
                    stats['keep-T2'] += 1
                    break
                new_ln = new_ln[:m.start()] + 'this->%s' % hit[1] + new_ln[m.end():]
                nfix += 1
                stats['T2-idx'] += 1
            out.append(new_ln)
        t2 = '\n'.join(out)
        if t2 != t:
            files_changed.append(str(p))
            if APPLY:
                os.makedirs(BAK, exist_ok=True)
                b = BAK / (fn + '.pre')
                if not b.exists():
                    io.open(b, 'w', encoding='utf-8', newline='').write(t)
                io.open(p, 'w', encoding='utf-8', newline='').write(t2)

print('T1 vdispatch: %d, T2 idx: %d, keeps: %d' % (
    stats['T1-vdispatch'], stats['T2-idx'], stats['keep-T1'] + stats['keep-T2']))
print('files changed:', len(files_changed))
for f in files_changed[:10]:
    print('  ', f)
