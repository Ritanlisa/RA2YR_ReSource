#!/usr/bin/env python3
"""Column-anchored cast insertion for pointer-form operator errors.

Covers the operator families the C2440/C2664 fixers do not:
  C2446  "op": 没有从"T1"到"T2"的转换      -> wrap (T2)( right operand )
  C2296  "op": 无效，因为左操作数的类型为"T" -> wrap (unsigned int)( left )
  C2036  "void *": 未知的大小               -> wrap (unsigned int)( left )
  C2110  "+": 不能添加两个指针              -> wrap (unsigned int)( left )
  C2100  无法取消引用类型为"T"的操作数       -> *X -> *((T*)(X))
  C2109  下标要求数组或指针类型              -> X[i] -> ((unsigned int*)(X))[i]

All edits are column-anchored from MSVC (line, col) diagnostics; only the
error line is rewritten. MSVC columns land on the operand near the
operator (usually RHS start), so op matching is a proximity match.

Usage: python tools/csp_export/fix_ptr_forms_v2.py <error-log> [--apply]
"""
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
LQ, RQ = chr(0x201C), chr(0x201D)
VALID_T = re.compile(r'^[A-Za-z_][\w\s\*&:<>\[\]]*$')
STATS = defaultdict(int)

ERR = re.compile(
    r'^(?:\d+>)?(?:[A-Za-z]:[\\/](?:RA2YR_ReSource[\\/])?)?'
    r'([^\s(]+?)\((\d+),(\d+)\): error (C\d+): (.*)$', re.M)


def _in_str(s, i):
    return s[:i].count('"') % 2 == 1


def _split_stmt(line):
    idx = line.find('//')
    while idx > 0 and _in_str(line, idx):
        idx = line.find('//', idx + 1)
    if idx >= 0:
        return line[:idx], line[idx:]
    return line, ''


def _find_op(code, col0):
    """Nearest operator whose end is just left of the diag column."""
    best, best_d = None, 99
    for m in re.finditer(r'(?<![=!<>])(==|!=|<=|>=|>>|<<|<|>|[-+*/%&|^])',
                         code):
        d = (col0 - 1) - m.end()
        if 0 <= d <= 8 and d < best_d:
            best, best_d = m, d
        elif abs(m.start() + 1 - col0) <= 3 and best_d > 3:
            best, best_d = m, 3
    return best


def _lhs(code, pos):
    """Return (operand_text, start_index) left of pos, space-trimmed."""
    while pos > 0 and code[pos - 1] == ' ':
        pos -= 1
    i = pos
    while i > 0 and (code[i - 1].isalnum() or code[i - 1] in '_.$->]'):
        i -= 1
    if i < pos and code[pos - 1] == ')':
        depth = 0
        j = pos - 1
        while j >= 0:
            if code[j] == ')':
                depth += 1
            elif code[j] == '(':
                depth -= 1
                if depth == 0:
                    k = j - 1
                    while k > 0 and (code[k].isalnum() or code[k] == '_'):
                        k -= 1
                    return code[k + 1:pos], k + 1
            j -= 1
    return code[i:pos], i


def _rhs(code, pos):
    n = len(code)
    while pos < n and code[pos] == ' ':
        pos += 1
    j = pos
    while j < n and (code[j].isalnum() or code[j] in '_.$->'):
        j += 1
    if j < n and code[j] == '(':
        depth = 0
        while j < n:
            if code[j] == '(':
                depth += 1
            elif code[j] == ')':
                depth -= 1
                if depth == 0:
                    j += 1
                    break
            j += 1
    elif j < n and code[j] == '[':
        depth = 0
        while j < n:
            if code[j] == '[':
                depth += 1
            elif code[j] == ']':
                depth -= 1
                if depth == 0:
                    j += 1
                    break
            j += 1
    return code[pos:j], pos, j


def fix_line(line, col, code_err, msg):
    code, comment = _split_stmt(line.rstrip('\r\n'))
    if code_err == 'C2446':
        m = re.search(r'从[' + LQ + RQ + r']([^' + RQ + '\n]+)[' + LQ + RQ +
                      r'](?:转换为|到)[' + LQ + RQ + r']([^' + RQ + '\n]+)',
                      msg)
        if not m:
            return None
        t2 = m.group(2).strip()
        if not VALID_T.match(t2):
            return None
        op = _find_op(code, col)
        if not op:
            return None
        rhs, s, e = _rhs(code, op.end())
        if not rhs:
            return None
        STATS['C2446'] += 1
        return code[:s] + '(%s)(%s)' % (t2, rhs) + code[e:] + comment
    if code_err in ('C2296', 'C2110', 'C2036'):
        # double math sites (volume sliders etc.) mean the DECL is wrong,
        # not the operator form -- casting there corrupts valid code
        if re.search(r'\d\s*\.\s*\d', code):
            STATS['skip-float'] += 1
            return None
        op = _find_op(code, col)
        if not op:
            return None
        lhs, s = _lhs(code, op.start())
        if not lhs:
            return None
        STATS[code_err] += 1
        return (code[:s] + '(unsigned int)(%s)' % lhs + code[op.start():]
                + comment)
    if code_err == 'C2100':
        i = code.find('*', max(0, col - 2))
        if i < 0:
            return None
        rhs, s, e = _rhs(code, i + 1)
        if not rhs:
            return None
        STATS['C2100'] += 1
        return code[:s] + '(unsigned int *)(%s)' % rhs + code[e:] + comment
    if code_err == 'C2109':
        best, best_s = None, -1
        for m in re.finditer(r'([\w.$>\]]+)\s*\[', code):
            if m.start() + 1 <= col <= m.end() + 6 and m.start() > best_s:
                # 2D chains: X[i][j] -- the subscript head is fine, the
                # scalar is the index; casting X breaks the chain
                tail = code[m.end():]
                if re.match(r'[^\]]*\]\s*\[', tail):
                    STATS['skip-2d'] += 1
                    continue
                best, best_s = m, m.start()
        if not best:
            return None
        head = best.group(1)
        s = best.start(1)
        STATS['C2109'] += 1
        return (code[:s] + '((unsigned int *)(' + head + '))'
                + code[best.end(1):] + comment)
    return None


def main():
    APPLY = '--apply' in sys.argv
    LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)
    if not LOG:
        print('usage: fix_ptr_forms_v2.py <error-log> [--apply]')
        return
    TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace')
    sites = defaultdict(list)
    # cascade lines: co-located name-resolution errors mean the operator
    # error is downstream noise -- casting there corrupts valid code
    # (menu_select g_palette lesson, G37 r2)
    cascade = set()
    for f, ln, col, code, msg in ERR.findall(TXT):
        if code in ('C2065', 'C2039', 'C2027', 'C2653'):
            f2 = f.replace('\\', '/')
            mm = re.search(r'src/(.*)$', f2)
            if mm:
                cascade.add(('src/' + mm.group(1), ln))
    # mechanical corpus only: hand-translated legacy files must not be
    # cast-patched from cascade diagnostics
    def in_corpus(rel):
        return (rel.startswith('src/e4/') or rel.startswith('src/_gap2/')
                or re.search(r'(gap2_defs|gap2_global|subs_\d|_bodies)',
                             rel) is not None)
    for f, ln, col, code, msg in ERR.findall(TXT):
        f2 = f.replace('\\', '/')
        mm = re.search(r'src/(.*)$', f2)
        if not mm:
            continue
        rel = 'src/' + mm.group(1)
        if not rel.endswith('.cpp') or not in_corpus(rel):
            continue
        if (rel, ln) in cascade:
            STATS['skip-cascade'] += 1
            continue
        sites[rel].append((int(ln), int(col), code, msg))
    n_files = 0
    for rel, lst in sorted(sites.items()):
        p = ROOT / rel
        if not p.exists():
            continue
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        changed = False
        for ln, col, code, msg in sorted(lst, key=lambda t: -t[0]):
            if ln - 1 >= len(lines):
                continue
            new = fix_line(lines[ln - 1], col, code, msg)
            if new is not None and new != lines[ln - 1]:
                lines[ln - 1] = new
                changed = True
        if changed:
            n_files += 1
            if APPLY:
                p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
    print('files changed:', n_files)
    for k, v in sorted(STATS.items()):
        print('  %-12s %d' % (k, v))
    if not APPLY:
        print('(dry run -- pass --apply)')


if __name__ == '__main__':
    main()
