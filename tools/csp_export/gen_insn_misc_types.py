#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
gen_insn_misc_types.py — 指令级类型证据提取（离线：快照反汇编 + 二进制，无 IDA）

证据类 A（严格）：字符串字面量返回
    `mov eax, offset <真字符串>` 后 ≤2 条不碰 eax 的指令内出现 retn
    ⇒ 函数返回 char *。offset 目标读 D:/RA2MD/gamemd.exe 字节验证
    （≥2 个可打印字符 0x20..0x7E + 结尾 0）。
    实体: RET:%X（fn 地址大写无 0x）；至少一个字符串 ret 即输出 {char *}。

证据类 B（启发式）：跳表/枚举用法
    `cmp reg, N; ja/jbe <default>; jmp ds:jpt_XXXX[reg*4]`
    ⇒ reg 的值是小范围枚举索引（0..N）⇒ {int, unsigned int}（不猜具体枚举名）。
    reg def 回溯一级：
      mov reg, [base+off]  (base≠ebp/esp) → M:%X:this:0x%X
      mov reg, [ebp±X]/[esp±X]            → S:%X:+0x%X   (engine canonical stack_+0x%X)
      其他（寄存器透传/调整/查表/全局）      → 弃
输出:
    .omo/insn_misc/part_a_strict.json   （A 部分 evidence 列表）
    .omo/insn_misc/part_b_heur.json     （B 部分 evidence 列表）
    anchors/insn_misc_types.json        （合并 + meta）

类型拼写: "char *"（anchors 证据语料主流拼写：ida_call_args 14K / cast_edges 1K /
ida_lvars 4K；type_universe.json 中 'char*' 与 'char *' 并存，二者皆合法）。
"""
import json
import os
import re
import sys
import struct
import collections
import datetime

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
sys.path.insert(0, os.path.join(ROOT, '.omo', 'agents', 'vtext'))
import peparse  # noqa: E402  (PE 节映射：D:/RA2MD/gamemd.exe)

SNAP_DIR = os.path.join(ROOT, 'decompile-results', 'full_export')
INDEX = os.path.join(SNAP_DIR, 'index.json')
STR_LITS = os.path.join(ROOT, 'anchors', 'string_literals.json')
WORKDIR = os.path.join(ROOT, '.omo', 'insn_misc')
OUT_MERGED = os.path.join(ROOT, 'anchors', 'insn_misc_types.json')

TYPE_CHARPTR = 'char *'
TYPE_INTS = ['int', 'unsigned int']

# ----------------------------------------------------------------------------
# 快照解析
# ----------------------------------------------------------------------------
RX_LINE = re.compile(r'^//\s+([0-9a-fA-F]{6,8}):\s*(.*)$')
RX_LABEL = re.compile(r'^//\s+([A-Za-z_][A-Za-z0-9_]*)\s*:\s*$')
RX_BLOCK_ADDR = re.compile(r'^// addr=0x([0-9A-Fa-f]+)', re.M)


def parse_blocks(text):
    """yield (fn_addr:int, [(addr:int|None, text:str|None), ...]) — None=标签行"""
    for blk in re.split(r'(?=^// =====)', text, flags=re.M):
        m = RX_BLOCK_ADDR.search(blk)
        if not m:
            continue
        faddr = int(m.group(1), 16)
        lines = []
        for ln in blk.splitlines():
            mm = RX_LINE.match(ln)
            if mm:
                lines.append((int(mm.group(1), 16), mm.group(2).strip()))
                continue
            lm = RX_LABEL.match(ln)
            if lm:
                lines.append((None, None))
        yield faddr, lines


def load_addr2file():
    """index.json addr→file 去重：优先 _addr_*.cpp（同函数双组织时取一份）"""
    idx = json.load(open(INDEX, encoding='utf-8'))
    addr2file = {}
    n_dup = 0
    for k, v in idx.items():
        try:
            a = int(k, 16)
        except ValueError:
            continue
        if not isinstance(v, dict) or not v.get('file'):
            continue
        f = v['file']
        if a in addr2file:
            n_dup += 1
            if '_addr_' in f and '_addr_' not in addr2file[a]:
                addr2file[a] = f
        else:
            addr2file[a] = f
    return addr2file, n_dup


# ----------------------------------------------------------------------------
# 类 A：mov eax, offset <str> ; (≤2 条不碰 eax) ; retn
# ----------------------------------------------------------------------------
RX_MOV_OFF = re.compile(r'^mov\s+eax,\s+offset\s+([^\s;]+)')


def scan_class_a(blocks_by_file, addr2file, pedata):
    data, base, sections = pedata
    strlits = json.load(open(STR_LITS, encoding='utf-8'))

    def verify_string(va):
        """二进制字节验证：≥2 可打印(0x20..0x7E) + 结尾 0。返回 (ok, s)"""
        off = peparse.rva_to_off(data, base, sections, va)
        if off is None:
            return False, None
        raw = data[off:off + 512]
        z = raw.find(b'\x00')
        if z < 2:
            return False, None
        body = raw[:z]
        if not all(0x20 <= b <= 0x7E for b in body):
            return False, None
        return True, body.decode('ascii')

    per_fn = {}          # fn_addr -> {'sites': [...], 'strings': [...]}
    stats = collections.Counter()
    unresolved_syms = collections.Counter()
    for path, faddr, lines in iter_functions(blocks_by_file, addr2file):
        ins = [(a, t) for a, t in lines if t is not None]
        for i, (ia, it) in enumerate(ins):
            m = RX_MOV_OFF.match(it)
            if not m:
                continue
            stats['mov_eax_offset'] += 1
            # 后视：≤2 条不碰 eax 的指令，然后 retn
            j, skipped = i + 1, 0
            hit = False
            while j < len(ins) and skipped <= 2:
                a2, t2 = ins[j]
                if t2.startswith('retn') or t2 == 'ret':
                    hit = True
                    break
                if re.match(r'^(call|jmp|j\w+|loop|retf|ret|int3|iret)\b', t2):
                    break  # 控制流打断
                if 'eax' in t2:
                    break  # 碰 eax
                skipped += 1
                j += 1
            if not hit:
                continue
            stats['mov_offset_ret'] += 1
            sym = m.group(1).rstrip(';')
            ent = strlits.get(sym)
            if ent is None:
                stats['sym_unresolved'] += 1
                unresolved_syms[sym] += 1
                continue
            try:
                va = int(ent['addr'], 16)
            except (KeyError, ValueError):
                stats['sym_bad_addr'] += 1
                continue
            ok, s = verify_string(va)
            if not ok:
                stats['binary_verify_fail'] += 1
                continue
            stats['verified'] += 1
            rec = per_fn.setdefault(faddr, {'sites': [], 'strings': []})
            rec['sites'].append('0x%X@0x%X' % (ia, va))
            rec['strings'].append(s)

    evidence = []
    for faddr in sorted(per_fn):
        rec = per_fn[faddr]
        ent = 'RET:%X' % faddr
        strs = rec['strings']
        evidence.append({
            'ent': ent,
            'types': [TYPE_CHARPTR],
            'via': 'mov eax,offset <str>; ret x%d (%s; binary-verified "%s"%s)' % (
                len(strs), ','.join(rec['sites'][:3]), strs[0][:32],
                ('' if len(set(strs)) == 1 else ' (+%d more)' % (len(set(strs)) - 1))),
        })
    stats['functions'] = len(per_fn)
    return evidence, stats, unresolved_syms


# ----------------------------------------------------------------------------
# 类 B：cmp reg,N; ja/jbe; jmp ds:jpt_X[reg*4]
# ----------------------------------------------------------------------------
RX_JMP_JPT = re.compile(
    r'^jmp\s+(?:(?:dword\s+ptr\s+)?(?:ds:)?)?'
    r'(?:[\w.$@]+(?:[+-][0-9A-Fa-f]+h?)?)?\[(\w+)\*4\]')
RX_CMP = re.compile(r'^cmp\s+(\w+)\s*,\s*(0x[0-9A-Fa-f]+|[0-9A-Fa-f]+h|\d+)\b')
RX_JA = re.compile(r'^(?:ja|jbe)\b')
RX_MOV_MEM = re.compile(
    r'^mov\s+(\w+)\s*,\s*\[(\w+)(?:([+-])([0-9A-Fa-f]+h?))?\]$')

# 寄存器族映射（8/16/32 位子寄存器归属）
REG_FAM = {}
for full, parts in {
    'eax': ['al', 'ah', 'ax', 'eax'], 'ebx': ['bl', 'bh', 'bx', 'ebx'],
    'ecx': ['cl', 'ch', 'cx', 'ecx'], 'edx': ['dl', 'dh', 'dx', 'edx'],
    'esi': ['si', 'esi'], 'edi': ['di', 'edi'], 'ebp': ['bp', 'ebp'],
    'esp': ['sp', 'esp'],
}.items():
    for p in parts:
        REG_FAM[p] = full
CALLER_SAVED = {'eax', 'ecx', 'edx'}

# 目标寄存器提取（写操作）— 长助记符在前（防止 'mov' 前缀吞掉 'movsx'/'movsxd'）
RX_WRITES = re.compile(
    r'^(movsxd|movsx|movzx|mov|lea|pop|xor|add|sub|adc|sbb|and|or|not|neg|inc|dec|imul|xchg|set\w+|cqo|cdq)\b')


def writes_reg(text, fam):
    """指令是否写 fam 族寄存器（保守近似）"""
    m = RX_WRITES.match(text)
    if not m:
        return False
    mn = m.group(1)
    if mn in ('cqo', 'cdq'):
        return fam in ('eax', 'edx')
    ops = [o.strip() for o in text.split(';', 1)[0][len(mn):].strip().split(',')]
    dst = ops[0] if ops else ''
    dst = dst.split()[0] if dst else ''
    if REG_FAM.get(dst) == fam:
        return True
    if mn == 'xchg' and len(ops) > 1 and REG_FAM.get(ops[1].split()[0]) == fam:
        return True
    return False


def parse_imm(s):
    s = s.strip()
    try:
        if s.startswith('0x') or s.startswith('0X'):
            return int(s, 16)
        if s.endswith('h') or s.endswith('H'):
            return int(s[:-1], 16)
        return int(s, 10)
    except ValueError:
        return None


def scan_class_b(blocks_by_file, addr2file):
    per_ent = {}  # ent -> {'faddr','types','sites':[...]}
    stats = collections.Counter()
    discard = collections.Counter()
    other_jmp_forms = collections.Counter()

    for path, faddr, lines in iter_functions(blocks_by_file, addr2file):
        ins = [(a, t) for a, t in lines if t is not None]
        n = len(ins)
        for i, (ia, it) in enumerate(ins):
            mj = RX_JMP_JPT.match(it)
            if not mj:
                # 记录未匹配的 *4] 跳转形态（观测口径）
                if it.startswith('jmp') and '*4]' in it:
                    other_jmp_forms[re.sub(r'[0-9A-Fa-f]{4,}', '#', it.split(';')[0])] += 1
                continue
            stats['jmp_jpt'] += 1
            reg = REG_FAM.get(mj.group(1))
            if reg is None:
                stats['idx_reg_unknown'] += 1
                continue
            # 窗口：jmp 前 ≤4 条指令内找 cmp reg,N + 其后的 ja/jbe
            win = ins[max(0, i - 4):i]
            cmp_pos = None
            cmp_n = None
            for k, (wa, wt) in enumerate(win):
                mc = RX_CMP.match(wt)
                if mc and REG_FAM.get(mc.group(1)) == reg:
                    cmp_pos = k
                    cmp_n = parse_imm(mc.group(2))
                    break
            if cmp_pos is None:
                stats['no_cmp_in_window'] += 1
                continue
            has_ja = any(RX_JA.match(wt) for _, wt in win[cmp_pos + 1:])
            if not has_ja:
                stats['no_ja_after_cmp'] += 1
                continue
            stats['cmp_ja_ok'] += 1
            if cmp_n is None or not (0 <= cmp_n <= 0xFFFF):
                stats['cmp_n_unparsed'] += 1
                cmp_n = -1
            # def 回溯一级：从 cmp 位置向后扫，找最近写 reg 的指令
            gi = i - (len(win) - cmp_pos)  # cmp 在 ins 中的下标
            def_txt = None
            for k in range(gi - 1, max(-1, gi - 16), -1):
                da, dt = ins[k]
                if dt.startswith('retn') or dt == 'ret' or re.match(r'^jmp\b', dt):
                    break  # 基本块边界（无条件跳转/返回）
                if dt.startswith('call'):
                    if reg in CALLER_SAVED:
                        def_txt = ('call', dt)
                        break
                    continue  # call 不写 esi/edi/ebx/ebp
                if writes_reg(dt, reg):
                    def_txt = ('def', dt)
                    break
            if def_txt is None:
                discard['def_not_found'] += 1
                continue
            kind, dtxt = def_txt
            if kind == 'call':
                discard['def_is_call_result'] += 1
                continue
            # 分类 def
            mm = RX_MOV_MEM.match(dtxt.split(';')[0].strip())
            if mm and REG_FAM.get(mm.group(1)) == reg:
                basereg = REG_FAM.get(mm.group(2))
                off = 0
                if mm.group(4) is not None:
                    off = parse_imm(mm.group(4))
                    if off is None:
                        discard['def_off_unparsed'] += 1
                        continue
                    if mm.group(3) == '-':
                        off = -off
                if basereg in ('ebp', 'esp'):
                    if basereg == 'ebp':
                        # ebp 帧指针守卫：函数内在此之前存在非规范写 ebp
                        # （≠ 'mov ebp, esp' 标准序言；push ebp 不算写）⇒ ebp 已被
                        # 改作数据指针（如 SuperClass::Launch: mov ebp,[ebx+28h]），
                        # [ebp+X] 不是栈槽 → 弃
                        clob = False
                        for _, dt0 in ins[:i]:
                            if writes_reg(dt0, 'ebp') and \
                                    not re.match(r'^mov\s+ebp,\s*esp\b', dt0):
                                clob = True
                                break
                        if clob:
                            discard['def_frame_ptr_clobbered'] += 1
                            continue
                    # engine canonical stack_+0xN；保留符号区分槽位（负=ebp 相对局部变量约定）
                    ent = ('S:%X:+0x%X' % (faddr, off)) if off >= 0 else \
                          ('S:%X:-0x%X' % (faddr, -off))
                    via_def = dtxt.split(';')[0].strip()
                elif basereg is not None:
                    if off < 0:
                        discard['def_neg_member_off'] += 1
                        continue
                    ent = 'M:%X:this:0x%X' % (faddr, off)
                    via_def = dtxt.split(';')[0].strip()
                else:
                    discard['def_base_unparsed'] += 1
                    continue
            else:
                if re.match(r'^mov\s+\w+\s*,\s*\w+\s*$', dtxt.split(';')[0].strip()):
                    discard['def_reg_passthrough'] += 1
                elif 'h]' in dtxt or '*4]' in dtxt or '*8]' in dtxt or '*2]' in dtxt or '*1]' in dtxt:
                    discard['def_scaled_or_global'] += 1
                else:
                    discard['def_other'] += 1
                continue
            rec = per_ent.setdefault(ent, {
                'faddr': faddr, 'types': list(TYPE_INTS), 'sites': []})
            rec['sites'].append(
                'jpt_0x%X idx=%s cmp=%s def="%s"' % (
                    ia, mj.group(1), cmp_n, via_def[:48]))

    evidence = []
    for ent in sorted(per_ent):
        rec = per_ent[ent]
        evidence.append({
            'ent': ent,
            'types': rec['types'],
            'via': 'switch index enum-use x%d in fn 0x%X (%s)' % (
                len(rec['sites']), rec['faddr'], '; '.join(rec['sites'][:3])),
        })
    stats['entities'] = len(per_ent)
    stats['m_entities'] = sum(1 for e in per_ent if e.startswith('M:'))
    stats['s_entities'] = sum(1 for e in per_ent if e.startswith('S:'))
    return evidence, stats, discard, other_jmp_forms


# ----------------------------------------------------------------------------
# 驱动
# ----------------------------------------------------------------------------
def iter_functions(blocks_by_file, addr2file):
    """只产出 canonical 文件中的函数块（同函数双文件组织去重）"""
    for path, blocks in blocks_by_file.items():
        for faddr, lines in blocks:
            if addr2file.get(faddr) == path:
                yield path, faddr, lines


def main():
    os.makedirs(WORKDIR, exist_ok=True)
    print('[1] loading index + string literals + PE ...')
    addr2file, n_dup = load_addr2file()
    print('    index addrs: %d (dups resolved: %d)' % (len(addr2file), n_dup))
    pedata = peparse.parse_pe()
    print('    PE loaded: %d bytes, base 0x%X, %d sections' % (
        len(pedata[0]), pedata[1], len(pedata[2])))

    print('[2] parsing snapshot blocks ...')
    by_file = collections.defaultdict(list)
    files_needed = set(addr2file.values())
    n_parsed = 0
    for fname in sorted(files_needed):
        p = os.path.join(SNAP_DIR, fname)
        if not os.path.isfile(p):
            continue
        try:
            text = open(p, encoding='utf-8', errors='ignore').read()
        except OSError:
            continue
        for faddr, lines in parse_blocks(text):
            by_file[fname].append((faddr, lines))
        n_parsed += 1
    n_blocks = sum(len(v) for v in by_file.values())
    print('    parsed %d files, %d function blocks' % (n_parsed, n_blocks))

    print('[3] class A: string-literal returns (strict) ...')
    ev_a, st_a, unres = scan_class_a(by_file, addr2file, pedata)
    for k in sorted(st_a):
        print('    A/%s: %d' % (k, st_a[k]))

    print('[4] class B: jump-table enum use (heuristic) ...')
    ev_b, st_b, disc, forms = scan_class_b(by_file, addr2file)
    for k in sorted(st_b):
        print('    B/%s: %d' % (k, st_b[k]))
    for k, v in sorted(disc.items()):
        print('    B/discard/%s: %d' % (k, v))
    for k, v in forms.most_common(8):
        print('    B/other_jmp_form %r: %d' % (k, v))

    print('[5] writing outputs ...')
    meta = {
        'generated': datetime.datetime.now().isoformat(timespec='seconds'),
        'generator': 'tools/csp_export/gen_insn_misc_types.py',
        'inputs': {
            'snapshot': 'decompile-results/full_export (index.json dedup, prefer _addr_*.cpp)',
            'binary': peparse.EXE,
            'string_symbols': 'anchors/string_literals.json',
            'pe_mapping': '.omo/agents/vtext/peparse.py',
            'snapshot_files_parsed': n_parsed,
            'snapshot_blocks': n_blocks,
            'index_addrs': len(addr2file),
        },
        'strict_evidence_class': {
            'pattern': 'mov eax, offset <str> ; (<=2 insns not touching eax) ; retn',
            'verification': 'binary byte check at offset target: >=2 printable (0x20-0x7E) + NUL',
            'entity': 'RET:%X (fn addr, uppercase, no 0x)',
            'types': [TYPE_CHARPTR],
            'note': 'at least one verified string-ret => {char *}; multiple string rets stronger, single entity per function',
            'type_spelling_note': "char * chosen: dominant spelling in anchors evidence corpus (ida_call_args 14132, cast_edges 1036, ida_lvars 4054); both 'char*' and 'char *' exist in type_universe.json",
            'stats': dict(st_a),
            'unresolved_symbols_top': unres.most_common(20),
        },
        'heur_evidence_class': {
            'pattern': 'cmp reg,N ; ja/jbe ; jmp ds:jpt_XXXX[reg*4] (<=4 insn window)',
            'meaning': 'reg holds small-range enum index (0..N) => int family; concrete enum name NOT derivable from jump table',
            'def_backtrack': 'one level from cmp: mov reg,[base+off] (base!=ebp/esp) -> M:%X:this:0x%X ; mov reg,[ebp+-X]/[esp+-X] -> S:%X:+0x%X ; register passthrough / adjustments / call results / global table lookups -> discarded',
            'types': list(TYPE_INTS),
            'stats': dict(st_b),
            'discards': dict(disc),
        },
    }
    part_a = {'meta_class': meta['strict_evidence_class'], 'evidence': ev_a}
    part_b = {'meta_class': meta['heur_evidence_class'], 'evidence': ev_b}
    json.dump(part_a, open(os.path.join(WORKDIR, 'part_a_strict.json'), 'w', encoding='utf-8'),
              ensure_ascii=False, indent=1)
    json.dump(part_b, open(os.path.join(WORKDIR, 'part_b_heur.json'), 'w', encoding='utf-8'),
              ensure_ascii=False, indent=1)
    merged = {'meta': meta, 'strict_evidence': ev_a, 'heur_evidence': ev_b}
    json.dump(merged, open(OUT_MERGED, 'w', encoding='utf-8'), ensure_ascii=False, indent=1)
    print('    %s: %d strict / %d heur' % (OUT_MERGED, len(ev_a), len(ev_b)))
    print('    %s, %s' % (os.path.join(WORKDIR, 'part_a_strict.json'),
                          os.path.join(WORKDIR, 'part_b_heur.json')))
    print('DONE')


if __name__ == '__main__':
    main()
