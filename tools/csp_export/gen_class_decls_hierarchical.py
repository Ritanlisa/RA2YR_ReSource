#!/usr/bin/env python3
"""gen_class_decls_hierarchical.py — 层级类声明生成器 v2（class + 继承）。

继承边优先级（全部确定性证据）:
  1. layouts.parent（146, ctor 验证, rank-3）
  2. RTTI direct（rtti_hierarchy['direct'], rank-3 二进制真值; 键经
     canon_to_rtti 反查 + 修饰名归一）
  3. 无边 → flat class

MI（多 direct）: 声明全部基类 `class X : public A, public B {...}`，
IDA/MSVC 规则自动布局；驱动侧 size 对账失败 → 回退 flat（驱动处理）。

own 成员: [max(基类 layouts size), size) 区间的 layouts offsets,
游标自愈由驱动按父类 til 实际 size 二次修正（本生成器按计划值）。

IDA C 解析器对齐规则（沉淀）: 非4对齐 char[N] / 大块拆 960 /
casefold uniq / 保留字 _flag / 空 class size 1 放行。
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
LAYOUTS = ROOT / 'tools' / 'class_layouts.json'
MEMBER_TYPES = ROOT / 'anchors' / 'member_types.json'
RTTI_H = ROOT / 'anchors' / 'rtti_hierarchy.json'
ALIGN = ROOT / 'anchors' / 'class_name_align.json'
OUT = ROOT / '.omo' / 'class_decls_hier.json'

RESERVED = {'flat', 'near', 'far', 'huge', 'interrupt', 'cdecl', 'pascal',
            'stdcall', 'fastcall', 'thiscall', 'asm', 'dllexport', 'property'}
SPLIT = 960
DECO = re.compile(r'^\?\$?([A-Za-z_]\w*)')


def legal_name(n):
    n = re.sub(r'\W', '_', n or '')
    if not n or n[0].isdigit():
        n = 'f_' + n
    if n.casefold() in RESERVED:
        n += '_flag'
    return n


class Uniq:
    def __init__(self):
        self.seen = set()

    def __call__(self, n):
        base, i = n, 2
        key = n.casefold()
        while key in self.seen:
            n = '%s_%d' % (base, i)
            key = n.casefold()
            i += 1
        self.seen.add(key)
        return n


def norm_rtti_name(n):
    """RTTI 修饰名 → 可比对的朴素名（?$BlitPlain@E → BlitPlain; 保留原名）。"""
    m = DECO.match(n or '')
    return m.group(1) if m else n


def member_lines(offs, start, end, uniq):
    lines = []
    cursor = start
    for off, name, size in offs:
        if off < cursor or off >= end:
            continue
        if off > cursor:
            gap = off - cursor
            while gap > 0:
                take = min(gap, SPLIT)
                lines.append('  char __pad_%X[%d];' % (cursor, take))
                cursor += take
                gap -= take
        nm = uniq(legal_name(name))
        sz = size if size and size > 0 else 4
        if sz == 4 and off % 4 == 0:
            lines.append('  int %s;' % nm)
        elif sz % 4 == 0 and off % 4 == 0 and sz <= 256:
            lines.append('  int %s[%d];' % (nm, sz // 4))
        else:
            lines.append('  char %s[%d];' % (nm, sz))
        cursor = off + sz
    while cursor < end:
        gap = end - cursor
        take = min(gap, SPLIT)
        lines.append('  char __tail_%X[%d];' % (cursor, take))
        cursor += take
    return lines


def main():
    only = ''
    if '--only' in sys.argv:
        only = sys.argv[sys.argv.index('--only') + 1]
    layouts = json.load(open(LAYOUTS, encoding='utf-8'))
    mt = json.load(open(MEMBER_TYPES, encoding='utf-8'))
    rtti_direct = (json.load(open(RTTI_H, encoding='utf-8'))
                   .get('direct') or {})
    align = json.load(open(ALIGN, encoding='utf-8'))
    c2r = align.get('canon_to_rtti') or {}

    mt_by = {}
    for k, v in mt.items():
        c, _, o = k.rpartition('+')
        if c:
            try:
                mt_by.setdefault(c, {})[int(o, 16)] = v
            except ValueError:
                pass

    usable = {c: i for c, i in layouts.items() if i.get('size')}
    classes = [only] if only else sorted(usable)

    # 继承边解析（每类: bases 列表 or []）
    edges = {}
    edge_src = {}
    for cls in classes:
        info = usable[cls]
        p = info.get('parent')
        if p and p in usable:
            edges[cls] = [p]
            edge_src[cls] = 'layouts'
            continue
        # RTTI direct 是 MI mixin 子对象列表（TechnoClass ->
        # [Flasher, Radio, Stage]），非主链 —— 只用于验证注释，不补边。
        # 主链唯一权威 = layouts.parent（ctor 验证, own 起点铁律）。

    infos = {}
    for cls in classes:
        info = usable[cls]
        own = []
        for o_s, m in sorted((info.get('offsets') or {}).items(),
                             key=lambda x: int(x[0])):
            o = int(o_s)
            mm = (mt_by.get(cls) or {}).get(o) or {}
            name = m.get('ida_name') or mm.get('name') or ('f_%X' % o)
            sz = m.get('size') or mm.get('size') or 4
            own.append((o, name, int(sz) if isinstance(sz, int) and sz > 0
                        else 4))
        own.sort()
        infos[cls] = {'size': info['size'], 'own': own}

    # 拓扑序（继承图, 环检测 → 断边扁平）
    order = []
    state = {}

    def visit(cls, stack):
        if state.get(cls) == 2:
            return True
        if cls in stack or cls not in infos:
            return False
        info = infos[cls]
        stack.add(cls)
        ok = True
        for b in edges.get(cls, []):
            if not visit(b, stack):
                ok = False
                break
        stack.discard(cls)
        if not ok:
            edges[cls] = []
            edge_src[cls] = 'cycle-cut'
            ok = True
        state[cls] = 2
        order.append(cls)
        return True

    for cls in classes:
        if cls in infos and state.get(cls) != 2:
            visit(cls, set())

    out = []
    n_hier = n_mi = n_flat = 0
    for cls in order:
        info = infos[cls]
        bases = edges.get(cls, [])
        uniq = Uniq()
        if bases:
            # own 区 = [父 size, 本类 size)：member_lines 的 start 参数
            # 天然过滤基类区观测成员（layouts.offsets 是全对象绝对坐标,
            # 含基类区成员 —— min < parent_size 是常态不是冲突）
            base_end = usable[bases[0]]['size']
            lines = member_lines(info['own'], base_end, info['size'], uniq)
            btxt = 'public ' + bases[0]
            decl = 'class %s : %s {\npublic:\n%s\n};' % (cls, btxt,
                                                         '\n'.join(lines))
            mode = 'mi' if len(bases) > 1 else 'hier'
            if mode == 'mi':
                n_mi += 1
            else:
                n_hier += 1
            out.append({'cls': cls, 'decl': decl, 'size': info['size'],
                        'mode': mode, 'bases': bases,
                        'base_end': base_end})
        else:
            lines = member_lines(info['own'], 0, info['size'], uniq)
            decl = 'class %s {\npublic:\n%s\n};' % (cls, '\n'.join(lines))
            out.append({'cls': cls, 'decl': decl, 'size': info['size'],
                        'mode': 'flat'})
            n_flat += 1

    json.dump(out, open(OUT, 'w'))
    print('classes:', len(out), '| hier:', n_hier, '| MI:', n_mi,
          '| flat:', n_flat, '->', OUT.name)


if __name__ == '__main__':
    main()
