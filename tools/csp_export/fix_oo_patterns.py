#!/usr/bin/env python3
"""OO-ification fixer for the four late violation families of the OO gate.

Targets src/e4/*.cpp only and reduces these check_oo_translation.py families:

  1. VFTABLE   - pure vtable-install statements (`X = (int)&Cls_vftable;`)
                 are deleted: in the OO rebuild the compiler emits vptr setup,
                 hand-written installs are IDA ctor artifacts.
  2. OPNEW     - `v = RA2_OPNEW(size)` becomes a typed `new Cls` when the
                 type is inferable from context (Cls::Constructor(v) call,
                 cast type, or declared var type); otherwise it is rewritten
                 to plain `operator new(size)` per the OO-ification contract.
  3. THIS_ARITH- `this + N` byte-offset artifacts become member access via
                 the e4 flat class headers (`&this->Member`, `this->Member`,
                 or exact `*(unsigned T *)&this->Member` when the access size
                 differs from the member size).  Member resolution:
                 class hpp > anchors/csp_canon_members.json >
                 tools/member_lookup.json, with nearest-spanning-member +
                 byte-delta fallback for offsets inside padding.
  4. LABEL_REF - safe structural gotos only:
                   T1  bare `goto L;` immediately before `L:`      -> deleted
                   T2  `if (c) goto L;  <straight region>  L:`    ->
                       `if (!(c)) { <region> }`            (single ref,
                                                            same depth, no
                                                            decls/case/break)
                   MB  `goto L;` whose innermost exited block is breakable
                       and only closes separate it from `L:`    -> `break;`
                   MD  bare `goto L;` crossing only non-breakable blocks
                       (if/else scopes) -> deleted (control reaches L anyway)
                   plus dead-label cleanup (unreferenced `LABEL_N:` defs).

Complex cross-jumps (Hex-Rays branch-sharing gotos) are left untouched on
purpose - they need per-function CFG adjudication, not a mechanical rewrite.

Usage:
  python tools/csp_export/fix_oo_patterns.py             # dry run (default)
  python tools/csp_export/fix_oo_patterns.py --apply
  python tools/csp_export/fix_oo_patterns.py --apply --file AbstractClass

Idempotent: every transform consumes the pattern it matches, so a second run
reports zero changes.
"""
import argparse
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
E4 = ROOT / 'src' / 'e4'
HPP_DIR = E4 / 'classes'
CANON_P = ROOT / 'anchors' / 'csp_canon_members.json'
MLOOKUP_P = ROOT / 'tools' / 'member_lookup.json'

ADDR = re.compile(r'^//\s*0x[0-9A-Fa-f]{6,8}\s*$')


# ---------------------------------------------------------------- member maps

def hpp_type_size(ty):
    ty = ty.strip()
    if ty.endswith('*'):
        return 4
    m = re.search(r'\[(0x[0-9A-Fa-f]+|\d+)\]$', ty)
    if m:
        n = int(m.group(1), 0)
        return n * hpp_type_size(ty[:m.start()])
    base = ty.split()[-1] if ty.split() else ty
    return {
        'char': 1, 'bool': 1, 'unsigned char': 1, 'signed char': 1,
        'uint8_t': 1, 'int8_t': 1, 'BYTE': 1, 'BOOLEAN': 1,
        'short': 2, 'unsigned short': 2, 'int16_t': 2, 'uint16_t': 2,
        'WORD': 2, 'wchar_t': 2,
        'int': 4, 'unsigned int': 4, 'uint32_t': 4, 'int32_t': 4,
        'long': 4, 'unsigned long': 4, 'DWORD': 4, 'float': 4,
        'BOOL': 4, 'HANDLE': 4, 'HWND': 4, 'HMODULE': 4, 'HINSTANCE': 4,
        'long long': 8, 'unsigned long long': 8, 'uint64_t': 8,
        'int64_t': 8, 'double': 8, 'LONGLONG': 8,
    }.get(base, 4)


def load_hpp_members():
    """class -> sorted list of (offset, name, size, type)."""
    tables = {}
    for p in sorted(HPP_DIR.glob('*_e4.hpp')):
        cls = p.name[:-len('_e4.hpp')]
        rows = {}
        for ln in p.read_text(encoding='utf-8', errors='replace').split('\n'):
            m = re.match(r'\s*(.+?)\s+(\w+)(\[[^\]]*\])?;\s*//\s*0x([0-9A-Fa-f]+)\s*$', ln)
            if not m:
                continue
            off = int(m.group(4), 16)
            name = m.group(2)
            if not name.isidentifier():
                continue
            ty = (m.group(1) + (m.group(3) or '')).strip()
            rows[off] = (name, ty)
        if rows:
            mems = []
            offs = sorted(rows)
            for i, off in enumerate(offs):
                name, ty = rows[off]
                size = (offs[i + 1] - off) if i + 1 < len(offs) else hpp_type_size(ty)
                mems.append((off, name, size, ty))
            tables[cls] = mems
    return tables


def load_json_member_tables():
    """anchors/csp_canon_members.json + tools/member_lookup.json fallbacks."""
    extra = {}
    if CANON_P.exists():
        try:
            canon = json.loads(CANON_P.read_text(encoding='utf-8'))
        except (OSError, ValueError):
            canon = {}
        for cls, ent in canon.items():
            if not isinstance(ent, dict) or '::' in cls or '?' in cls:
                continue
            size_cap = ent.get('size') or 0
            for off_s, m in (ent.get('members') or {}).items():
                try:
                    off = int(off_s)
                except (TypeError, ValueError):
                    continue
                name = m.get('name') or ''
                if not name.isidentifier() or (size_cap and off >= size_cap):
                    continue
                cls_rows = extra.setdefault(cls, {})
                cls_rows.setdefault(off, (name, int(m.get('size') or 4),
                                          m.get('type') or ''))
    if MLOOKUP_P.exists():
        try:
            ml = json.loads(MLOOKUP_P.read_text(encoding='utf-8'))
        except (OSError, ValueError):
            ml = {}
        for cls, mems in ml.items():
            if not isinstance(mems, dict):
                continue
            for off_s, m in mems.items():
                try:
                    off = int(off_s)
                except (TypeError, ValueError):
                    continue
                name = (m.get('name') or '').split('[')[0]
                if not name.isidentifier():
                    continue
                cls_rows = extra.setdefault(cls, {})
                cls_rows.setdefault(off, (name, hpp_type_size(m.get('type') or 'int'),
                                          m.get('type') or ''))
    return extra


class MemberMap:
    """Merged offset -> (name, size, type) with nearest-preceding fallback."""

    def __init__(self, rows):
        self.rows = sorted(rows.items())

    def resolve(self, off):
        """-> (name, delta, member_size) or None. delta = off - member off."""
        if not self.rows or off < self.rows[0][0]:
            return None
        lo, hi = 0, len(self.rows) - 1
        while lo < hi:
            mid = (lo + hi + 1) // 2
            if self.rows[mid][0] <= off:
                lo = mid
            else:
                hi = mid - 1
        base_off, (name, size, _ty) = self.rows[lo]
        return (name, off - base_off, size)


# ------------------------------------------------------------------ lexing

def strip_comments(line):
    s = re.sub(r'/\*.*?\*/', '', line)
    s = re.sub(r'"(?:\\.|[^"\\])*"', 'S', s)
    s = re.sub(r"'(?:\\.|[^'\\])*'", 'C', s)
    s = re.sub(r'//.*', '', s)
    return s


def brace_depths(clean):
    depth = [0] * (len(clean) + 1)
    close_open = {}
    stack = []
    for i, l in enumerate(clean):
        depth[i + 1] = depth[i]
        for ch in l:
            if ch == '{':
                stack.append(i)
                depth[i + 1] += 1
            elif ch == '}':
                if stack:
                    close_open.setdefault(i, []).append(stack.pop())
                    depth[i + 1] -= 1
    return depth, close_open


SIGDEF = re.compile(
    r'^\s*[A-Za-z_][\w:<>,\*&\s]*?\b(\w+)\s*\(([^;{]*)\)\s*(?:/\*.*?\*/\s*)?$')
CTRL_HEADS = {'if', 'for', 'while', 'switch', 'return', 'else', 'do', 'sizeof'}


def find_functions(lines, clean):
    """-> list of (start, end, cls) function segments."""
    funcs = []
    i = 0
    n = len(lines)
    while i < n:
        if ADDR.match(lines[i].strip()):
            i += 1
            continue
        m = SIGDEF.match(lines[i])
        if m and m.group(1) not in CTRL_HEADS:
            opened = None
            for k in (i + 1, i + 2):
                if k < n and clean[k].strip().startswith('{'):
                    opened = k
                    break
            if opened is not None:
                d = 0
                end = None
                for k in range(opened, n):
                    d += clean[k].count('{') - clean[k].count('}')
                    if d <= 0:
                        end = k
                        break
                if end is not None:
                    cm = re.search(r'(\w+)::\w+\s*\(', lines[i])
                    cls = cm.group(1) if cm else None
                    if cls is None:
                        tm = re.search(r'(\w+)\s*\*+\s*this\b', m.group(2))
                        cls = tm.group(1) if tm else None
                    funcs.append((i, end, cls))
                    i = end + 1
                    continue
        i += 1
    return funcs


# ------------------------------------------------------ THIS_ARITH rewriting

TSIZE = {
    '_DWORD': 4, '_QWORD': 8, '_WORD': 2, '_BYTE': 1,
    'int': 4, 'unsigned int': 4, 'unsigned long': 4, 'long': 4,
    'unsigned': 4, 'void': 4, 'float': 4, 'char': 1,
    'unsigned char': 1, 'signed char': 1, 'short': 2, 'unsigned short': 2,
    'unsigned __int8': 1, 'unsigned __int16': 2, '__int8': 1, '__int16': 2,
    'bool': 1, 'size_t': 4,
}
UCAST = {1: 'unsigned char', 2: 'unsigned short',
         4: 'unsigned int', 8: 'unsigned long long'}

DEREF_RE = re.compile(
    r'\*\s*\(\s*\(\s*([\w ]+?)\s*\*+\s*\)\s*this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)'
    r'|\*\s*\(\s*([\w ]+?)\s*\*+\s*\)\s*\(\s*this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)'
    r'|\*\s*\(\s*this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)')
ADDR_RE = re.compile(
    r'\(\s*\(\s*([\w ]+?)\s*\*+\s*\)\s*this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)'
    r'|\(\s*([\w ]+?)\s*\*+\s*\)\s*this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)'
    r'|\(\s*this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)')
THIS_HINT = re.compile(r'\bthis\s*\+\s*(0x[0-9A-Fa-f]+|\d+)')
BARE_THIS = re.compile(r'\bthis\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\b')


def member_form(mmem, off, stats):
    """-> (name, delta, member_size) for byte offset, or None (skip counted)."""
    if mmem is None:
        stats['this_skip_no_map'] += 1
        return None
    r = mmem.resolve(off)
    if r is None:
        stats['this_skip_no_member'] += 1
        return None
    stats['this_resolved'] += 1
    return r


def rewrite_this_arith(line, mmem, stats):
    changed = [False]

    def deref_repl(m):
        if m.group(1) is not None:
            ty, num = m.group(1), m.group(2)
        elif m.group(3) is not None:
            ty, num = m.group(3), m.group(4)
        else:
            ty, num = 'void', m.group(5)
        S = TSIZE.get(ty.strip(), 4)
        off = S * int(num, 0)
        r = member_form(mmem, off, stats)
        if r is None:
            return m.group(0)
        name, delta, msize = r
        changed[0] = True
        if delta == 0 and msize == S:
            return 'this->%s' % name
        if delta == 0:
            return '*(%s *)&this->%s' % (UCAST.get(S, 'unsigned int'), name)
        return '*(%s *)((char *)&this->%s + %d)' % (
            UCAST.get(S, 'unsigned int'), name, delta)

    line = DEREF_RE.sub(deref_repl, line)

    def addr_repl(m):
        if m.group(1) is not None:
            ty, num = m.group(1), m.group(2)
        elif m.group(3) is not None:
            ty, num = m.group(3), m.group(4)
        else:
            ty, num = None, m.group(5)
        S = TSIZE.get((ty or 'void').strip(), 4)
        r = member_form(mmem, S * int(num, 0), stats)
        if r is None:
            return m.group(0)
        name, delta, _msize = r
        changed[0] = True
        if delta == 0:
            if ty:
                return '(%s *)&this->%s' % (ty.strip(), name)
            return '&this->%s' % name
        if ty:
            return '(%s *)((char *)&this->%s + %d)' % (ty.strip(), name, delta)
        return '((char *)&this->%s + %d)' % (name, delta)

    line = ADDR_RE.sub(addr_repl, line)

    def bare_repl(m):
        r = member_form(mmem, int(m.group(1), 0), stats)
        if r is None:
            return m.group(0)
        name, delta, _msize = r
        changed[0] = True
        if delta == 0:
            return '&this->%s' % name
        return '((char *)&this->%s + %d)' % (name, delta)

    line = BARE_THIS.sub(bare_repl, line)
    return line if changed[0] else None


# ------------------------------------------------------------- OPNEW rewriting

OPNEW_STMT = re.compile(
    r'^(\s*)([\w\[\]]+)\s*=\s*(?:\(\s*([\w:]+)\s*\*+\s*\)\s*)?'
    r'RA2_OPNEW\s*\(([^;]*?)\)\s*;\s*(/\*0x[0-9a-fA-F]+\*/)?\s*$')
CTOR_CALL = re.compile(r'(\w+)::Constructor\s*\(\s*(?:&\s*)?([A-Za-z_]\w*)')
DECL = re.compile(
    r'^\s*(?:unsigned\s+|signed\s+|const\s+|struct\s+)*(\w[\w:<>]*)\s*(?:\*+\s*)?(\w+)\s*(?:=.*)?;\s*$')
BASIC_TYPES = {'void', '_DWORD', '_BYTE', '_WORD', '_QWORD', 'int', 'unsigned int',
               'char', 'unsigned char', 'short', 'long', 'bool', 'float', 'double',
               'size_t', 'HWND', 'HANDLE', 'HINSTANCE', 'HMODULE', 'UINT', 'DWORD',
               'LPVOID', 'LPCTSTR', 'LPCSTR', 'LPSTR', 'BOOL', 'WCHAR', 'TCHAR'}


def rewrite_opnew(lines, li, m, fend, known_classes, stats):
    var, cast, size = m.group(2), m.group(3), m.group(4).strip()
    ty = None
    for k in range(li + 1, min(li + 60, fend + 1)):
        cm = CTOR_CALL.search(lines[k])
        if cm and cm.group(2) == var:
            ty = cm.group(1)
            break
    if ty is None and cast and cast in known_classes:
        ty = cast
    if ty is None:
        for k in range(li - 1, max(0, li - 45), -1):
            if ADDR.match(lines[k].strip()):
                break
            dm = DECL.match(lines[k])
            if dm and dm.group(2) == var:
                t = dm.group(1)
                if t in known_classes and t not in BASIC_TYPES:
                    ty = t
                break
    tail = (' ' + m.group(5)) if m.group(5) else ''
    if ty is not None:
        stats['opnew_typed'] += 1
        cast_txt = ('(%s *)' % cast) if cast else ''
        return '%s%s = %snew %s;%s' % (m.group(1), var, cast_txt, ty, tail)
    stats['opnew_operator_fallback'] += 1
    return '%s%s = %soperator new(%s);%s' % (
        m.group(1), var, ('(%s *)' % cast) if cast else '', size, tail)


# ----------------------------------------------------------- VFTABLE deletion

PURE_VT = re.compile(
    r'^\s*(?!if\s*\(|for\s*\(|while\s*\(|switch\s*\(|return\b)'
    r'[^=]+=\s*(?:\(\s*(?:const\s+)?[\w:<>\s]+\*\s*\)\s*)*'
    r'\(*\s*&\s*\w+_vftable\s*\)*\s*;\s*(?:/\*0x[0-9a-fA-F]+\*/\s*)?$')


# ------------------------------------------------------------- LABEL rewrites

GOTO_RE = re.compile(r'\bgoto\s+(LABEL_\d+)\s*;')
LBLDEF_RE = re.compile(r'^(\s*)(LABEL_\d+)\s*:\s*$')
IFGOTO1 = re.compile(r'^(\s*)if\s*\((.+)\)\s*goto\s+(LABEL_\d+)\s*;\s*(/\*.*?\*/\s*)?$')
IFHEAD = re.compile(r'^(\s*)if\s*\((.+)\)\s*(?:/\*.*?\*/\s*)?$')
GOTOONLY = re.compile(r'^\s*goto\s+(LABEL_\d+)\s*;\s*(?:/\*.*?\*/\s*)?$')
DECL_IN_REGION = re.compile(
    r'^\s*[A-Za-z_][\w:<>\s\*&]*[\s\*&][A-Za-z_]\w*\s*(=[^=]|\[|;)')


def label_transforms(lines, clean, depth, close_open, fstart, fend, stats):
    """Line-ops for LABEL_REF in one function: ('del'|'text'|'indent', ...)."""
    ops = []
    labels = {}
    gotos = []
    for i in range(fstart, fend + 1):
        m = LBLDEF_RE.match(lines[i])
        if m:
            labels.setdefault(m.group(2), []).append(i)
            continue
        m = GOTO_RE.search(lines[i])
        if m:
            gotos.append((m.group(1), i))
    if not labels or not gotos:
        return ops

    def straight_region(a, b):
        for k in range(a, b):
            t = clean[k].strip()
            if not t:
                continue
            if re.match(r'(case\s|default:)', t):
                return False
            if LBLDEF_RE.match(lines[k]):
                return False
            if DECL_IN_REGION.match(lines[k]):
                return False
            if re.search(r'\b(break|continue)\b', t):
                return False
        return True

    for name, gi in gotos:
        defs = labels.get(name, [])
        fwd = [x for x in defs if x > gi]
        li = fwd[0] if fwd else None
        refs = [g for g, n2 in gotos if n2 == name]
        if li is None:
            continue
        d0 = depth[gi + 1]
        inner = None
        for j in range(gi + 1, li):
            if depth[j + 1] < d0:
                inner = j
                break
        if inner is None:
            # same block: T2 (if-invert) / T1 (adjacent dead goto)
            if len(refs) != 1 or len(defs) != 1:
                continue
            cond = None
            gline = gi
            head_indent = None
            m1 = IFGOTO1.match(lines[gi])
            if m1 and 'else' not in clean[gi]:
                cond = m1.group(2)
                head_indent = m1.group(1)
            nxt = gi + 1
            if cond is None and 'else' not in clean[gi]:
                mh = IFHEAD.match(lines[gi])
                if mh and gi + 1 <= fend and GOTO_RE.search(lines[gi + 1]) \
                        and GOTOONLY.match(lines[gi + 1]) \
                        and 'else' not in clean[gi + 1]:
                    cond = mh.group(2)
                    head_indent = mh.group(1)
                    gline = gi + 1
                    nxt = gi + 2
            if cond is not None and depth[gi] == depth[li] \
                    and straight_region(nxt, li):
                stats['label_t2'] += 1
                if gline == gi:
                    ops.append((gi, 'text', '%sif (!(%s)) {' % (head_indent, cond)))
                else:
                    ops.append((gi, 'text',
                                '%sif (!(%s)) {' % (head_indent, cond)))
                    ops.append((gline, 'del', None))
                for k in range(nxt, li):
                    ops.append((k, 'indent', None))
                lab_indent = re.match(r'^(\s*)', lines[li]).group(1)
                ops.append((li, 'text', lab_indent + '}'))
                continue
            if GOTOONLY.match(lines[gi]):
                k = gi + 1
                while k < fend and not clean[k].strip():
                    k += 1
                if k == li:
                    stats['label_t1'] += 1
                    ops.append((gi, 'del', None))
            continue
        # crossed a block close: MB-break / MD-delete
        rest = [clean[k].strip() for k in range(inner + 1, li)]
        only_closes = all((not r) or r.startswith('}') for r in rest)
        if not only_closes:
            stats['label_skip_stmts_after'] += 1
            continue
        openers = [o for o in close_open.get(inner, []) if o <= gi]
        opener = max(openers) if openers else None
        head = ''
        if opener is not None:
            seg = []
            k = opener
            while k >= fstart and len(seg) < 5:
                seg.insert(0, clean[k].strip())
                if re.search(r'[;{}]', clean[k]):
                    break
                k -= 1
            head = ' '.join(s for s in seg if s and s != '{')
        do_while = bool(re.search(r'\}\s*while\b', clean[inner]))
        breakable = do_while or bool(re.search(r'\b(for|while|switch|do)\b[^;{}]*$', head))
        if breakable:
            stats['label_mb_break'] += 1
            ops.append((gi, 'text', GOTO_RE.sub('break;', lines[gi])))
        elif GOTOONLY.match(lines[gi]) and depth[li] == depth[inner + 1]:
            stats['label_md_delete'] += 1
            ops.append((gi, 'del', None))
        else:
            stats['label_skip_unsafe'] += 1
    return ops


# ------------------------------------------------------------------ per file

def process_file(p, hpp_tables, extra_tables, known_classes, apply, stats):
    raw = p.read_bytes().decode('utf-8', errors='replace')
    crlf = '\r\n' in raw
    lines = raw.replace('\r\n', '\n').split('\n')
    clean = [strip_comments(l) for l in lines]
    depth, close_open = brace_depths(clean)
    funcs = find_functions(lines, clean)

    memmaps = {}

    def map_for(cls):
        if cls not in memmaps:
            rows = {}
            for off, name, size, _ty in hpp_tables.get(cls, []):
                rows[off] = (name, size, '')
            for off, (name, size, ty) in extra_tables.get(cls, {}).items():
                rows.setdefault(off, (name, size, ty))
            memmaps[cls] = MemberMap(rows) if rows else None
        return memmaps[cls]

    text_ops = {}
    dels = set()
    indents = set()

    for (fs, fe, cls) in funcs:
        mmem = map_for(cls) if cls else None
        for i in range(fs, fe + 1):
            ln = lines[i]
            if ADDR.match(ln.strip()):
                continue
            if THIS_HINT.search(ln) and not re.search(r'"[^"]*this\s*\+\s*\d', ln):
                if mmem is None:
                    stats['this_skip_no_map'] += 1
                    stats['this_lines_nocls'] += 1
                else:
                    new = rewrite_this_arith(ln, mmem, stats)
                    if new is not None:
                        text_ops[i] = new
                        ln = new
                        stats['this_lines'] += 1
            if 'RA2_OPNEW' in ln:
                m = OPNEW_STMT.match(ln)
                if m:
                    new = rewrite_opnew(lines, i, m, fe, known_classes, stats)
                    text_ops[i] = new
                    ln = new
                else:
                    new = ln.replace('RA2_OPNEW(', 'operator new(')
                    if new != ln:
                        stats['opnew_operator_fallback'] += 1
                        text_ops[i] = new
                        ln = new
            cur = text_ops.get(i, ln)
            if '_vftable' in cur and PURE_VT.match(cur):
                text_ops.pop(i, None)
                indents.discard(i)
                dels.add(i)
                stats['vftable_deleted'] += 1

        for (i, op, payload) in label_transforms(lines, clean, depth,
                                                 close_open, fs, fe, stats):
            if op == 'del':
                text_ops.pop(i, None)
                indents.discard(i)
                dels.add(i)
            elif op == 'indent':
                if i not in text_ops and i not in dels:
                    indents.add(i)
            else:
                if i in dels:
                    continue
                indents.discard(i)
                text_ops[i] = payload

        # dead-label cleanup on post-transform text
        cur_lines = ['' if i in dels else text_ops.get(i, lines[i])
                     for i in range(fs, fe + 1)]
        cur_clean = [strip_comments(l) for l in cur_lines]
        live = set()
        for l in cur_clean:
            for m in GOTO_RE.finditer(l):
                live.add(m.group(1))
        for k, l in enumerate(cur_lines):
            m = LBLDEF_RE.match(l)
            if m and m.group(2) not in live:
                idx = fs + k
                text_ops.pop(idx, None)
                indents.discard(idx)
                dels.add(idx)
                stats['label_dead_removed'] += 1

    if not text_ops and not dels and not indents:
        return False

    out = []
    for i, ln in enumerate(lines):
        if i in dels:
            continue
        t = text_ops.get(i, ln)
        if i in indents and t.strip():
            t = '  ' + t
        out.append(t)

    if apply:
        text = '\n'.join(out)
        if crlf:
            text = text.replace('\n', '\r\n')
        p.write_bytes(text.encode('utf-8'))
    return True


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--apply', action='store_true',
                    help='write changes (default dry run)')
    ap.add_argument('--file', default='', help='substring filter on file name')
    args = ap.parse_args()

    print('loading member tables...')
    hpp_tables = load_hpp_members()
    extra_tables = load_json_member_tables()
    known_classes = set(hpp_tables) | set(extra_tables)
    print('  hpp classes: %d, fallback classes: %d'
          % (len(hpp_tables), len(extra_tables)))

    stats = Counter()
    files_changed = 0
    for p in sorted(E4.glob('*.cpp')):
        if args.file and args.file not in p.name:
            continue
        if process_file(p, hpp_tables, extra_tables, known_classes,
                        args.apply, stats):
            files_changed += 1

    print()
    print('mode: %s' % ('APPLY' if args.apply else 'DRY-RUN'))
    print('files with fixes: %d' % files_changed)
    print('--- fix counts')
    for k in ('vftable_deleted', 'opnew_typed', 'opnew_operator_fallback',
              'this_lines', 'this_resolved',
              'label_t1', 'label_t2', 'label_mb_break', 'label_md_delete',
              'label_dead_removed'):
        print('  %-26s %6d' % (k, stats.get(k, 0)))
    print('--- skips')
    for k in ('this_skip_no_map', 'this_skip_no_member', 'this_lines_nocls',
              'label_skip_stmts_after', 'label_skip_unsafe'):
        print('  %-26s %6d' % (k, stats.get(k, 0)))
    if not args.apply:
        print()
        print('dry run only; rerun with --apply to write changes')


if __name__ == '__main__':
    main()
