#!/usr/bin/env python3
"""Type-aware C2440 fixer: insert explicit C-style casts for assignments.

IDA Hex-Rays pseudocode relies on C-style implicit pointer/int conversions
that MSVC C++ rejects. For every C2440 "=" / "return" / "初始化" error this
rewrites the offending statement to cast the RHS to the wanted type:

    v1 = expr;        ->  v1 = (T2)(expr);
    return expr;      ->  return (T2)(expr);

Multi-line statements are joined to one line. The trailing `;` terminates
the statement: anything after it on the last line (// or block comments
carrying IDA /*0xADDR*/ anchors) is re-emitted after the rewritten `;`.
Cast insertion is statement-local: it cannot break other uses of the same
local variable (unlike retyping the declaration).

Usage: python tools/csp_export/fix_c2440_casts.py <error-log> [--apply]
"""
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

LQ, RQ = chr(0x201C), chr(0x201D)
TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''

ERR = re.compile(
    re.escape('D:\\RA2YR_ReSource\\src\\') +
    r'([^\(\n]+)\((\d+),(\d+)\): error C2440: [' + LQ + RQ + ']'
    r'(?:=|return|初始化|函数初始化|强制转换)[' + LQ + RQ + r']: [^\n]*'
    r'从[' + LQ + RQ + r']([^' + RQ + r'\n]+)[' + RQ + ']转换为[' + LQ + RQ + r']([^' + RQ + r'\n]+)[' + RQ + ']')

VALID_T = re.compile(r'^[A-Za-z_][\w\s\*:<>,&]*$')
CTRL = re.compile(r'^(if|else|for|while|switch|do|case|default|break|'
                  r'continue|goto)\b')
HEAD_OK = re.compile(r'^(return\b|[\*\&\w\[\]>.\-:\s]+=[^=])')

sites = defaultdict(set)    # file -> {(line, to_type)}
for m in ERR.finditer(TXT):
    f, ln, t2 = m.group(1), int(m.group(2)), m.group(5).strip()
    if not VALID_T.match(t2):
        continue
    sites[f.replace('/', '\\')].add((ln, t2))


def line_code_comment(s):
    """Split a line into (code, //comment) — code keeps /* */ blocks."""
    j = s.find('//')
    if j < 0:
        return s, ''
    return s[:j], s[j:]


def cut_at_semicolon(code):
    """Cut code after the first top-level ';' — returns (code_upto_semi,
    trailing_text). Block comments are skipped when hunting the ';'."""
    out = []
    i = 0
    n = len(code)
    depth = 0
    while i < n:
        if code.startswith('/*', i):
            j = code.find('*/', i + 2)
            i = n if j < 0 else j + 2
            continue
        ch = code[i]
        if ch in '([{':
            depth += 1
        elif ch in ')]}':
            depth -= 1
        elif ch == ';' and depth <= 0:
            out.append(code[:i + 1])
            return ''.join(out), code[i + 1:]
        i += 1
    return code, ''


def find_statement(lines, idx):
    """Expand from the error line to the statement span [start, end]
    (0-based, inclusive). Backward walk stops at control-flow heads and
    block edges; forward walk stops at the top-level ';'."""
    start = idx
    guard = 0
    while start > 0 and guard < 20:
        code, _c = line_code_comment(lines[start - 1])
        prev = code.strip()
        if prev == '' or prev.endswith(';') or prev.endswith('}') \
                or prev.endswith('{') or prev.startswith('#') \
                or (prev.endswith(')') and CTRL.match(prev)):
            break
        start -= 1
        guard += 1
    head = lines[start].strip()
    if CTRL.match(head):
        return None
    end = start
    depth = 0
    done = False
    guard = 0
    while end < len(lines) and guard < 40:
        code, _c = line_code_comment(lines[end])
        for ch in code:
            if ch in '([{':
                depth += 1
            elif ch in ')]}':
                depth -= 1
            elif ch == ';' and depth <= 0:
                done = True
                break
        if done:
            break
        end += 1
        guard += 1
    if not done:
        return None
    return start, end


def build_cast(stmt, t2):
    """Return replacement statement text, or None if not applicable."""
    stmt = re.sub(r'\s+', ' ', stmt).strip()
    if not HEAD_OK.match(stmt):
        return None
    if re.search(r'\(\s*' + re.escape(t2.split()[0]),
                 stmt.split('=')[-1][:len(t2) + 4]):
        return None
    m2 = re.match(r'^(return)\s+(.*);$', stmt)
    if m2:
        return 'return (%s)(%s);' % (t2, m2.group(2))
    depth = 0
    eq = -1
    for i, ch in enumerate(stmt):
        if ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
        elif ch == '=' and depth == 0:
            if i > 0 and stmt[i - 1] in '=!<>+-*/%&|^':
                continue
            eq = i
            break
    if eq < 0:
        return None
    lhs = stmt[:eq].strip()
    expr = stmt[eq + 1:].strip()
    if expr.endswith(';'):
        expr = expr[:-1].rstrip()
    if not expr or not lhs:
        return None
    if not re.match(r'^[\*\&\w\[\]>.\-:\s]+$', lhs):
        return None
    return '%s = (%s)(%s);' % (lhs, t2, expr)


total = applied = 0
for f, lst in sorted(sites.items()):
    p = SRC / f
    if not p.exists():
        continue
    try:
        lines = p.read_text(encoding='latin-1', errors='replace').split('\n')
    except OSError:
        continue
    edits = []
    claimed = set()
    for (ln, t2) in sorted(lst, reverse=True):
        total += 1
        if ln - 1 >= len(lines) or ln - 1 in claimed:
            continue
        span = find_statement(lines, ln - 1)
        if not span:
            continue
        start, end = span
        if any(k in claimed for k in range(start, end + 1)):
            continue
        # join statement code; cut the end line at the terminating ';'
        parts = []
        for k in range(start, end + 1):
            code, _c = line_code_comment(lines[k])
            if k == end:
                code, _tail = cut_at_semicolon(code)
                if not code.rstrip().endswith(';'):
                    code = code.rstrip() + ';'
            parts.append(code.strip())
        raw = ' '.join(p0 for p0 in parts if p0)
        new = build_cast(raw, t2)
        if not new:
            continue
        # trailing anchor comment of the end line (// form) survives
        _c0, cmt = line_code_comment(lines[end])
        edits.append((start, end, new, cmt.strip()))
        for k in range(start, end + 1):
            claimed.add(k)
        applied += 1
    if edits and APPLY:
        for (start, end, new, cmt) in sorted(edits, reverse=True):
            indent = re.match(r'\s*', lines[start]).group(0)
            repl = [indent + new]
            if cmt:
                repl.append(indent + cmt)
            lines[start:end + 1] = repl
        p.write_text('\n'.join(lines), encoding='latin-1', errors='replace')

print('C2440 sites: %d, statements rewritten: %d' % (total, applied))
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
