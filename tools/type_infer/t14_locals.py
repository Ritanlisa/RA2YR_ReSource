#!/usr/bin/env python
"""t14_locals.py — CSP 局部变量类型回写 IDA（准备端）

从 type_map.json 提取 CSP 已定型的局部变量类型（寄存器 SSA 值 + 栈槽），
按函数分组生成工作文件 .omo/t14_locals_work.json，供 IDA 侧驱动脚本
t14_locals_ida.py 消费。

桥接原理（确定性，无统计推断）：
  - SSA:   引擎节点 `eax_v0x40100A` = 寄存器 eax 在指令 0x40100A 处的值版本。
           Hex-Rays lvar 有 defea（定义地址）。两侧归一化到指令头后，
           按 (指令地址, 寄存器名) 精确匹配 —— 一对一，无投票。
  - Stack: 引擎节点 `stack_+0x14` ≡ Hex-Rays lvar.get_stkoff() == 0x14（实测相等）。

类型语义：寄存器/栈槽持有的是对象指针 → 一律应用为 `Class *`。
结构门：目标类必须在 IDB til 中存在 named struct（缺 struct 的类型跳过并计数）。
冲突语义：同一 lvar 命中多个不同类型 = 映射歧义（Hex-Rays 合并了两个不同值），
           保守跳过，不投票、不取 LCA——lattice 裁决已在 CSP 内完成。

用法：
  python tools/type_infer/t14_locals.py prep          # 生成工作文件
  python tools/type_infer/t14_locals.py status        # 查看 checkpoint 进度
"""
import json
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
WORK = ROOT / '.omo' / 't14_locals_work.json'
GATE = ROOT / '.omo' / 't14_locals_struct_gate.json'
CHECKPOINT = ROOT / '.omo' / 't14_locals_checkpoint.json'
REPORT = ROOT / '.omo' / 't14_locals_report.json'

# 32 位寄存器（可持指针）；8/16 位寄存器装不下类指针，跳过
REG32 = {'eax', 'ebx', 'ecx', 'edx', 'esi', 'edi', 'ebp', 'esp'}
SSA_RE = re.compile(r'^([a-z]+)_v(0x[0-9A-Fa-f]+)$')
STACK_RE = re.compile(r'^stack_([+-]?(?:0x[0-9A-Fa-f]+|\d+))$')

# 引擎侧的原始类型词（非类）——不回写
PRIM_TYPES = {
    'int', 'void', 'VOID_PTR', '_DWORD', 'bool', 'char', 'unsigned int',
    'long', 'short', 'float', 'double', 'BYTE', 'WORD', 'DWORD', 'QWORD',
    '__int16', '__int32', 'unsigned char', 'signed int', 'signed char',
    '_BYTE', '_WORD', '_BOOL8', '_QWORD', 'TOP', '',
}


def load_struct_gate():
    """已有 struct 的类型集合。键为剥掉尾部 `*` 后的基名。"""
    if not GATE.exists():
        raise SystemExit('struct gate missing — run the IDA-side gate probe first')
    data = json.load(open(GATE, encoding='utf-8'))
    ok = set()
    for tname in data['existing']:
        base = tname.strip().rstrip('*').strip()
        if base and base not in PRIM_TYPES:
            ok.add(base)
    return ok


def prep():
    tm = json.load(open(ROOT / 'type_map.json', encoding='utf-8'))['type_map']
    gate = load_struct_gate()

    per_func = defaultdict(lambda: {'ssa': defaultdict(dict), 'stack': {}})
    stats = defaultdict(int)
    skipped_types = defaultdict(int)

    for key, entry in tm.items():
        if '::' not in key:
            continue
        addr_s, var = key.split('::', 1)
        t = entry.get('type', '')
        if not t or t in PRIM_TYPES:
            continue
        # 指针形式 `X*` → 基名 X；基名是 prim（char*/int*…）跳过
        base = t.strip().rstrip('*').strip()
        if not base or base in PRIM_TYPES:
            stats['prim_ptr'] += 1
            continue
        if base not in gate:
            stats['no_struct'] += 1
            skipped_types[base] += 1
            continue
        if t.strip() == 'TOP':
            continue

        m = SSA_RE.match(var)
        if m:
            reg, vaddr = m.group(1), m.group(2)
            if reg not in REG32:
                stats['reg16'] += 1
                continue
            # 同一 (指令, 寄存器) 若引擎给出两个不同类型 → 内部冲突，标记 null
            slot = per_func[addr_s]['ssa'][vaddr.lower()]
            if reg in slot and slot[reg] != base:
                slot[reg] = None
            else:
                slot[reg] = base
            stats['ssa'] += 1
            continue

        m = STACK_RE.match(var)
        if m:
            off = m.group(1)
            try:
                off_val = int(off, 0)
            except ValueError:
                stats['stack_bad'] += 1
                continue
            key_hex = hex(off_val)
            cur = per_func[addr_s]['stack'].get(key_hex)
            if cur is not None and cur != base:
                per_func[addr_s]['stack'][key_hex] = None  # 冲突标记
            else:
                per_func[addr_s]['stack'][key_hex] = base
            stats['stack'] += 1
            continue

        stats['unparsed'] += 1

    # 序列化（defaultdict → 普通 dict；None 冲突项保留为 JSON null）
    out = {}
    for addr_s, payload in per_func.items():
        ssa = {a: dict(regs) for a, regs in payload['ssa'].items()}
        if not ssa and not payload['stack']:
            continue
        out[addr_s.lower()] = {'ssa': ssa, 'stack': payload['stack']}

    WORK.parent.mkdir(exist_ok=True)
    json.dump(out, open(WORK, 'w', encoding='utf-8'), separators=(',', ':'))

    hist = sorted(skipped_types.items(), key=lambda x: -x[1])[:30]
    print(f'work file: {WORK}')
    print(f'functions: {len(out)}')
    print(f'stats: {dict(stats)}')
    print(f'skipped no-struct distinct: {len(skipped_types)}')
    print('top skipped:', hist[:15])


def status():
    if CHECKPOINT.exists():
        cp = json.load(open(CHECKPOINT, encoding='utf-8'))
        done = cp.get('done', [])
        print(f"checkpoint: {len(done)} funcs done, stats: {cp.get('stats', {})}")
    else:
        print('no checkpoint yet')
    if WORK.exists():
        w = json.load(open(WORK, encoding='utf-8'))
        print(f'work file: {len(w)} functions pending total')


if __name__ == '__main__':
    cmd = sys.argv[1] if len(sys.argv) > 1 else 'prep'
    if cmd == 'prep':
        prep()
    elif cmd == 'status':
        status()
    else:
        raise SystemExit(f'unknown command {cmd}')
