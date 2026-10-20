#!/usr/bin/env python3
"""x92_evidence.py -- Gap2Recv relocation evidence table (X92 W1).

Builds, for every synthetic `Gap2Recv_<HEX>` receiver class in
src/_gap2/gap2_global_decls.hpp, the evidence needed to decide whether its
member function can be relocated to a real class:

  address / signals.name / backfill.cls / backfill.status /
  call-site receiver types / synthetic first-param type /
  raw_decomp `this=` / csp BACKFILL cls / body-layout compatibility /
  confidence / action

Confidence (task rules + a body-layout guard):
  HIGH   backfill.cls real AND every direct call site passes a pointer of
         that class (or a derived class), OR the function is thiscall with
         that class and has no direct call sites; AND the body's used
         `this->member` accesses match the target class layout (no missing /
         out-of-range / differently-named members) and `this` is not cast to
         an unrelated class.
  MEDIUM backfill.cls real but call sites are ambiguous / absent with an
         unverified receiver, or the body layout only partially matches.
  LOW    no real class evidence (backfill null, sub_*, no-body, or
         needs-retranslation).

Outputs (read-only):
  .omo/x92_evidence.json
  .omo/x92_evidence.md

Usage:
  python tools/x92_evidence.py [--root DIR]
"""
import argparse
import json
import os
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]

EXCLUDE_DIRS = ('src/_gap2/', 'src/csp_canon/', 'src/raw_decomp/', 'src/_generated/')
EXCLUDE_FILES = ('src/e4/classes/_fwd_e4.hpp', 'src/e4/classes/_tree_full_e4.hpp',
                 'src/e4/classes/_tree_alias_e4.hpp', 'src/e4/e4_protos.h')
SRC_EXT = ('.cpp', '.hpp', '.h', '.c', '.inl')


def read_text(p):
    return p.read_text(encoding='utf-8', errors='ignore')


def clean_type(t):
    t = re.sub(r'\b(const|volatile|class|struct|typename)\b', '', t or '')
    t = t.replace('*', '')
    return re.sub(r'\s+', ' ', t).strip()


def norm_name(n):
    return re.sub(r'[^a-z0-9]', '', (n or '').lower())


def parse_synthetic_members(decls, cls):
    m = re.search(r'struct\s+' + re.escape(cls) + r'\s*\{(.*?)\n\s*\};', decls, re.S)
    if not m:
        return []
    out = []
    for line in m.group(1).splitlines():
        line = line.strip()
        mm = re.match(r'([A-Za-z_][\w:<>,\s\*]*?)\s+([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;\s*(?://\s*(.*))?$', line)
        if not mm:
            continue
        typ, name, arr, comment = mm.group(1).strip(), mm.group(2), mm.group(3), (mm.group(4) or '')
        if '(' in typ:
            continue
        off = None
        cm = re.search(r'0x([0-9A-Fa-f]+)', comment)
        if cm:
            off = int(cm.group(1), 16)
        else:
            mdec = re.match(r'^M(\d+)$', name)
            mhex = re.match(r'^(?:u(?:8|16|32)|q|ptr_|alignmentPadding)([0-9A-Fa-f]+)$', name)
            if mdec:
                off = int(mdec.group(1))          # decimal byte offset
            elif mhex:
                off = int(mhex.group(1), 16)
        out.append({'type': typ, 'name': name, 'off': off})
    return out


def parse_definition_blocks(defs):
    """Return [{cls, method, params, addr, start, end, body}] for every
    Gap2Recv_<X>::Method definition in gap2_global_defs.cpp."""
    lines = defs.splitlines()
    sig_re = re.compile(r'\b(Gap2Recv_[0-9A-Fa-f]+)::([A-Za-z_]\w*)\s*\(([^)]*)\)')
    out = []
    for i, l in enumerate(lines):
        m = sig_re.search(l)
        if not m:
            continue
        # strip comment/string for brace counting
        def code(s):
            s = re.sub(r'//[^\n]*', '', s)
            s = re.sub(r'/\*.*?\*/', '', s)
            s = re.sub(r"'[^'\n]*'", '', s)
            s = re.sub(r'"[^"\n]*"', '', s)
            return s
        brace_line = None
        for j in range(i, min(len(lines), i + 8)):
            if '{' in code(lines[j]):
                brace_line = j
                break
        if brace_line is None:
            continue
        depth = 0
        end = None
        for j in range(brace_line, len(lines)):
            for ch in code(lines[j]):
                if ch == '{':
                    depth += 1
                elif ch == '}':
                    depth -= 1
                    if depth == 0:
                        end = j
                        break
            if end is not None:
                break
        addr = None
        for j in range(i, max(-1, i - 6), -1):
            cm = re.match(r'\s*//\s*0x([0-9A-Fa-f]{6,8})\s*$', lines[j])
            if cm:
                addr = int(cm.group(1), 16)
                break
        if addr is None:
            suff = m.group(1).split('_')[1]
            addr = int(suff, 16)
        body = '\n'.join(lines[i:(end + 1) if end is not None else i + 1])
        out.append({'cls': m.group(1), 'method': m.group(2), 'params': m.group(3).strip(),
                    'addr': '0x' + format(addr, 'x'), 'start': i + 1,
                    'end': (end + 1) if end is not None else None,
                    'body': body})
    return out


def build_call_index(root, method_names):
    """One combined-regex scan over the compiled source set.  Returns
    {method: [(file, line, form, receiver_type, raw)]}."""
    alt = '|'.join(re.escape(n) for n in sorted(method_names, key=len, reverse=True))
    call_re = re.compile(r'(?<![\w:])((' + alt + r'))\s*\(')
    name_set = set(method_names)
    files = []
    for p in sorted((root / 'src').rglob('*')):
        if p.suffix.lower() not in SRC_EXT:
            continue
        rel = p.relative_to(root).as_posix()
        if any(rel.startswith(d) for d in EXCLUDE_DIRS) or rel in EXCLUDE_FILES:
            continue
        files.append(p)
    sites = defaultdict(list)
    nseen = 0

    def find_decl(lines, idx, ident, lo=0):
        pat = re.compile(r'\b([A-Za-z_]\w*(?:::[A-Za-z_]\w*)?)\s*(?:<[^;{}]*>)?\s*\*\s*\b' + re.escape(ident) + r'\b')
        for j in range(idx, max(lo - 1, idx - 160), -1):
            m = pat.search(lines[j])
            if m:
                return clean_type(m.group(1))
        return None

    def enclosing_class(lines, idx, lo=0):
        pat = re.compile(r'\b([A-Za-z_]\w*(?:::[A-Za-z_]\w*)?)::([A-Za-z_]\w*)\s*\(')
        for j in range(idx, max(lo - 1, idx - 200), -1):
            m = pat.search(lines[j])
            if m:
                return m.group(1)
        return None

    def balanced_args(s, start):
        depth, i, instr = 0, start, None
        while i < len(s):
            c = s[i]
            if instr:
                if c == '\\':
                    i += 2
                    continue
                if c == instr:
                    instr = None
            elif c in '"\'':
                instr = c
            elif c in '([{':
                depth += 1
            elif c in ')]}':
                depth -= 1
                if depth == 0:
                    return s[start + 1:i]
            i += 1
        return None

    def split_args(args):
        depth, instr, cur, parts = 0, None, [], []
        for c in args:
            if instr:
                if c == instr:
                    instr = None
                cur.append(c)
                continue
            if c in '"\'':
                instr = c
            elif c in '([{':
                depth += 1
            elif c in ')]}':
                depth -= 1
            elif c == ',' and depth == 0:
                parts.append(''.join(cur).strip())
                cur = []
                continue
            cur.append(c)
        tail = ''.join(cur).strip()
        if tail:
            parts.append(tail)
        return parts

    def first_arg(args):
        parts = split_args(args)
        return parts[0] if parts else ''

    def arg_count(args):
        return len(split_args(args))

    cast_re = re.compile(r'^\(\s*([A-Za-z_]\w*(?:::[A-Za-z_]\w*)?)\s*\*\s*\)')

    for p in files:
        try:
            text = read_text(p)
        except OSError:
            continue
        if not any(n in text for n in name_set):
            continue
        nseen += 1
        lines = text.splitlines()
        rel = p.relative_to(root).as_posix()
        for i, l in enumerate(lines):
            for m in call_re.finditer(l):
                method = m.group(2) if (m.lastindex or 0) >= 2 else m.group(1)
                if method not in name_set:
                    continue
                pre = l[:m.start()]
                if '//' in pre:
                    continue
                before = l[max(0, m.start() - 80):m.start()]
                if re.search(r'::\s*$', before) or re.search(r'\b(?:class|struct)\s+$', before):
                    continue
                stripped = l.strip()
                if re.match(r'^[A-Za-z_~].*\b' + re.escape(method) + r'\s*\([^;]*\)\s*[;{]', stripped) \
                        and '->' not in before and '.' not in before and not re.search(r'(?:=|return|\(|,)\s*$', before):
                    continue
                args = balanced_args(l, m.end() - 1)
                if args is None:
                    continue
                argc = arg_count(args)
                if before.rstrip().endswith('->'):
                    recv = before.rstrip()[:-2].strip().split()[-1]
                    t = enclosing_class(lines, i) if recv == 'this' else find_decl(lines, i, recv)
                    form = 'member'
                elif before.rstrip().endswith('.'):
                    recv = before.rstrip()[:-1].strip().split()[-1]
                    t = find_decl(lines, i, recv)
                    form = 'dot'
                else:
                    fa = first_arg(args)
                    cm = cast_re.match(fa)
                    if cm:
                        t = clean_type(cm.group(1))
                    elif fa == 'this':
                        t = enclosing_class(lines, i)
                    elif re.match(r'^[A-Za-z_]\w*$', fa):
                        t = find_decl(lines, i, fa)
                    else:
                        t = None
                    form = 'free'
                if t in ('return', 'if', 'while', 'for', 'sizeof', 'void', 'int', 'char', 'bool'):
                    t = None
                sites[method].append((rel, i + 1, form, t or '?', l.strip()[:200], argc))
    return sites, nseen


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--root', default=str(ROOT))
    args = ap.parse_args()
    root = Path(args.root).resolve()

    decls = read_text(root / 'src/_gap2/gap2_global_decls.hpp')
    defs = read_text(root / 'src/_gap2/gap2_global_defs.cpp')
    signals = json.loads(read_text(root / 'signals.json'))
    syms = signals.get('symbols', {})
    layouts = json.loads(read_text(root / 'tools/class_layouts.json'))
    ml = json.loads(read_text(root / 'tools/member_lookup.json'))
    hier = json.loads(read_text(root / 'anchors/rtti_hierarchy.json'))
    direct = hier.get('direct', {})

    classes = sorted(set(re.findall(r'struct\s+(Gap2Recv_[0-9A-Fa-f]+)\s*\{', decls)),
                     key=lambda s: int(s.split('_')[1], 16))
    blocks = parse_definition_blocks(defs)
    block_by_cls = {b['cls']: b for b in blocks}

    # raw_decomp this= evidence
    raw_this = {}
    raw_re = re.compile(r'//\s*=+\s*0x([0-9A-Fa-f]{6,8})\s+(\S+)\s+this=([A-Za-z_]\w*)')
    for p in (root / 'src/raw_decomp').glob('*.c'):
        for m in raw_re.finditer(read_text(p)):
            raw_this[int(m.group(1), 16)] = {'name': m.group(2), 'this': m.group(3)}
    # csp_canon BACKFILL cls evidence
    csp_cls = {}
    back_re = re.compile(r'//\s*=+\s*BACKFILL\s+0x([0-9A-Fa-f]{6,8})\s+(\S+)\s+cls=([A-Za-z_]\w*)')
    for p in (root / 'src/csp_canon/bodies').glob('*.inc'):
        for m in back_re.finditer(read_text(p)):
            csp_cls[int(m.group(1), 16)] = m.group(3)

    method_names = set(b['method'] for b in blocks)
    for c in classes:
        n = syms.get('0x' + format(int(c.split('_')[1], 16), 'x'), {}).get('name') or ''
        if '::' in n:
            method_names.add(n.split('::')[-1])
    sites, nfiles = build_call_index(root, method_names)

    def ancestors(c):
        out, cur = set(), c
        while cur and cur not in out:
            out.add(cur)
            ps = direct.get(cur) or []
            cur = ps[0] if ps else None
        return out

    def compatible_type(recv, target):
        if not recv or recv == '?':
            return False
        return recv == target or target in ancestors(recv)

    def layout_members(cls):
        """Absolute offsets (incl. parent chain) from class_layouts + ml."""
        out, seen, cur = {}, set(), cls
        while cur and cur not in seen and cur in layouts:
            seen.add(cur)
            v = layouts[cur]
            for k, val in (v.get('offsets') or {}).items():
                try:
                    off = int(k)
                except Exception:
                    continue
                if off not in out:
                    out[off] = {'name': val.get('ida_name') or val.get('name'),
                                'type': val.get('type'), 'src': 'layouts'}
            cur = v.get('parent')
        size = layouts.get(cls, {}).get('size')
        if cls in ml:
            for k, val in ml[cls].items():
                try:
                    off = int(str(k), 0)
                except Exception:
                    continue
                if off not in out and isinstance(val, dict):
                    out[off] = {'name': val.get('name'), 'type': val.get('type'), 'src': 'ml'}
        return out, size

    rows = []
    for cls in classes:
        inv_addr = int(cls.split('_')[1], 16)
        block = block_by_cls.get(cls)
        addr = int(block['addr'], 16) if block else inv_addr
        key = '0x' + format(addr, 'x')
        sig = syms.get(key, {})
        bf = sig.get('backfill') or {}
        bf_cls = bf.get('cls')
        if bf_cls and (bf_cls.startswith('sub_') or bf_cls in ('', 'None', 'unknown')):
            bf_cls = None
        bf_status = bf.get('status')
        method = block['method'] if block else None
        params = block['params'] if block else ''
        call_sites = sites.get(method, []) if method else []

        # synthetic explicit parameter types (top-level split)
        param_types = []
        if params.strip():
            depth, cur, parts = 0, [], []
            for ch in params:
                if ch in '(<[':
                    depth += 1
                elif ch in ')>]':
                    depth -= 1
                if ch == ',' and depth == 0:
                    parts.append(''.join(cur))
                    cur = []
                    continue
                cur.append(ch)
            parts.append(''.join(cur))
            for p in parts:
                param_types.append(p.strip())
        first_param = param_types[0] if param_types else None
        nparams = len(param_types)

        # call-site arity: free calls carry the receiver as arg1; member calls don't
        def arity_ok(s):
            if s[2] == 'free':
                return s[5] == nparams + 1
            if s[2] in ('member', 'dot'):
                return s[5] == nparams
            return False
        arity_all = all(arity_ok(s) for s in call_sites) if call_sites else False

        # body layout compatibility against bf_cls
        layout = {'checked': 0, 'name_match': 0, 'offset_other_name': 0,
                  'placeholder': 0, 'no_member_at_offset': 0, 'unknown_offset': 0,
                  'out_of_size': 0, 'this_casts': [], 'details': []}
        if block and bf_cls:
            used = set(re.findall(r'this->([A-Za-z_]\w*)', block['body']))
            mem, size = layout_members(bf_cls)
            for x in parse_synthetic_members(decls, cls):
                if x['name'] not in used:
                    continue
                layout['checked'] += 1
                off = x['off']
                if off is None:
                    if any(norm_name(v.get('name')) == norm_name(x['name']) for v in mem.values()):
                        layout['name_match'] += 1
                    else:
                        layout['unknown_offset'] += 1
                        layout['details'].append([x['name'], None, 'no-name-hit'])
                    continue
                if size and off >= size:
                    layout['out_of_size'] += 1
                    layout['details'].append([x['name'], off, 'out-of-size'])
                    continue
                v = mem.get(off)
                if v is None:
                    layout['no_member_at_offset'] += 1
                    layout['details'].append([x['name'], off, 'no-member'])
                elif norm_name(v.get('name')) == norm_name(x['name']):
                    layout['name_match'] += 1
                elif re.match(r'^(M\d+|Tactical_field_|RadarClass_field_|field_|__pad_|q[0-9A-F]+$|u(8|16|32)_|ptr_)',
                              v.get('name') or ''):
                    layout['placeholder'] += 1
                else:
                    layout['offset_other_name'] += 1
                    layout['details'].append([x['name'], off, 'other=' + str(v.get('name'))])
            layout['this_casts'] = sorted(set(re.findall(r'\(\s*([A-Za-z_]\w*)\s*\*\s*\)\s*this\b', block['body'])))
            layout['this_ptr_arith'] = len(re.findall(r'\(\s*\w+\s*\*\s*\)\s*this\s*\+', block['body']))
        layout_ok = (layout['checked'] == 0 or (
            layout['no_member_at_offset'] == 0 and layout['unknown_offset'] == 0 and
            layout['out_of_size'] == 0 and layout['offset_other_name'] == 0)) and \
            not layout['this_casts'] and layout.get('this_ptr_arith', 0) == 0

        # call-site band
        recv_types = sorted(set(s[3] for s in call_sites))
        raw = (raw_this.get(addr) or {}).get('this')
        raw_conflict = bool(raw and bf_cls and not (
            raw == bf_cls or bf_cls in ancestors(raw) or raw in ancestors(bf_cls)))
        if not call_sites:
            calls_band = 'none'
        elif bf_cls and arity_all and all(compatible_type(s[3], bf_cls) for s in call_sites):
            calls_band = 'all-match'
        elif bf_cls and any(compatible_type(s[3], bf_cls) for s in call_sites):
            calls_band = 'mixed'
        else:
            calls_band = 'mismatch'

        # confidence
        if not block:
            confidence = 'LOW'
            action = 'BANK (declaration only, no body)'
        elif not bf_cls or bf_status in ('no-body', 'needs-retranslation'):
            confidence = 'LOW'
            action = 'BANK (no direct class evidence)'
        elif raw_conflict:
            confidence = 'MEDIUM'
            action = f'VERIFY raw this={raw} vs backfill {bf_cls}'
        elif calls_band == 'all-match' and layout_ok:
            confidence = 'HIGH'
            action = f'RELOCATE -> {bf_cls}'
        elif calls_band == 'all-match':
            confidence = 'MEDIUM'
            action = f'CHECK body layout vs {bf_cls}'
        elif calls_band == 'none' and layout_ok and sig.get('call_convention') == 'thiscall' and not layout['this_casts']:
            confidence = 'HIGH'
            action = f'RELOCATE -> {bf_cls} (thiscall, no direct call site)'
        elif calls_band in ('mixed', 'none') and layout_ok:
            confidence = 'MEDIUM'
            action = f'VERIFY receiver vs {bf_cls}'
        else:
            confidence = 'MEDIUM'
            action = f'VERIFY (calls={calls_band}, layout_ok={layout_ok})'

        rows.append({
            'Gap2Recv': cls,
            'address': key,
            'signals_name': sig.get('name'),
            'backfill_cls': bf_cls,
            'backfill_status': bf_status,
            'call_site_types': recv_types,
            'call_sites': len(call_sites),
            'call_band': calls_band,
            'call_arity_ok': arity_all if call_sites else None,
            'synthetic_first_param': first_param,
            'synthetic_params': params,
            'raw_this': (raw_this.get(addr) or {}).get('this'),
            'csp_backfill_cls': csp_cls.get(addr),
            'method': method,
            'layout_checked': layout['checked'],
            'layout_name_match': layout['name_match'],
            'layout_placeholder': layout['placeholder'],
            'layout_missing': layout['no_member_at_offset'] + layout['unknown_offset'] + layout['out_of_size'],
            'layout_other_name': layout['offset_other_name'],
            'this_casts': layout['this_casts'],
            'confidence': confidence,
            'action': action,
            'has_body': bool(block),
            'signals_cc': sig.get('call_convention'),
            'signals_completed': sig.get('completed'),
            'signals_translated': sig.get('translated'),
        })

    out = root / '.omo'
    out.mkdir(exist_ok=True)
    (out / 'x92_evidence.json').write_text(json.dumps(rows, indent=1), encoding='utf-8')
    md = ['# X92 W1 - Gap2Recv relocation evidence table', '',
          f'Generated from `src/_gap2/gap2_global_decls.hpp` ({len(classes)} classes), '
          f'`signals.json`, `src/raw_decomp`, `src/csp_canon/bodies`, and {nfiles} '
          'compiled source files for call sites.', '',
          '| Gap2Recv | address | signals.name | backfill.cls | backfill.status | '
          'call-site receiver types | synthetic first param | raw this= | layout match | confidence | action |',
          '|---|---|---|---|---|---|---|---|---|---|---|']
    for r in rows:
        layout = f"{r['layout_name_match']}/{r['layout_checked']}" if r['layout_checked'] else '-'
        md.append('| {Gap2Recv} | {address} | {signals_name} | {backfill_cls} | {backfill_status} | '
                  '{call_site_types} | {synthetic_first_param} | {raw_this} | {layout} | {confidence} | {action} |'.format(
                      **{**r, 'call_site_types': ', '.join(r['call_site_types']) or '-',
                         'layout': layout,
                         'signals_name': r['signals_name'] or '-',
                         'backfill_cls': r['backfill_cls'] or '-',
                         'backfill_status': r['backfill_status'] or '-',
                         'synthetic_first_param': r['synthetic_first_param'] or '-',
                         'raw_this': r['raw_this'] or '-',
                         'action': r['action']}))
    (out / 'x92_evidence.md').write_text('\n'.join(md) + '\n', encoding='utf-8')

    bands = Counter(r['confidence'] for r in rows)
    print(f'classes: {len(classes)}  bodies: {sum(1 for r in rows if r["has_body"])}  '
          f'call-site files: {nfiles}')
    print(f'HIGH={bands["HIGH"]}  MEDIUM={bands["MEDIUM"]}  LOW={bands["LOW"]}')
    print('backfill real class:', sum(1 for r in rows if r['backfill_cls']))
    print('wrote .omo/x92_evidence.json and .omo/x92_evidence.md')


if __name__ == '__main__':
    main()
