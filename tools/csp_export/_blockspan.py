#!/usr/bin/env python3
"""Generic pending-block span helper -- THE single implementation.

Every consumer (MCP server: replace_body / harvest / pending index / audit
skip; generators: lower_temp_decls / normalize_blocks / fix_addr_violations)
imports `block_span` from here instead of re-implementing brace counting.

v2 block shape (after migrate_blocks_v2): the INSIDE_MARKER sits inside the
function body, so brace counting starts at depth 1 and the span ends at the
function's own closing brace.

`find_marker(lines, hint_idx)` locates the marker near a pending entry.
"""
import re

INSIDE_MARKER = ("// [IDA decompile] original pseudocode - translation "
                 "pending (final goal)")


def block_walker(lines):
    """Yield net brace delta per line, stateful across /* */ block comments
    (assembly dumps live in block comments and must not count)."""
    inblk = False
    for ln in lines:
        if inblk:
            if '*/' in ln:
                ln = ln.split('*/', 1)[1]
                inblk = False
            else:
                yield 0
                continue
        delta = 0
        i = 0
        n = len(ln)
        instr = None
        while i < n:
            c = ln[i]
            if inblk:
                if ln.startswith('*/', i):
                    inblk = False
                    i += 2
                    continue
                i += 1
                continue
            if instr:
                if c == '\\':
                    i += 2
                    continue
                if c == instr:
                    instr = None
                i += 1
                continue
            if c == '"':
                instr = '"'
                i += 1
                continue
            if c == "'":
                instr = "'"
                i += 1
                continue
            if ln.startswith('/*', i):
                inblk = True
                i += 2
                continue
            if c == '/' and i + 1 < n and ln[i + 1] == '/':
                break
            if c == '{':
                delta += 1
            elif c == '}':
                delta -= 1
            i += 1
        yield delta


def find_marker(lines, hint_idx, window=40):
    lo = max(0, hint_idx - 1)
    for i in range(lo, min(hint_idx + window, len(lines))):
        if lines[i].rstrip('\r') == INSIDE_MARKER:
            return i
    return -1


def brace_delta(ln):
    """Net brace count of one source line, ignoring braces inside string or
    char literals and after // (braces in literals/comments previously
    derailed every depth-based span scan)."""
    delta = 0
    i = 0
    n = len(ln)
    instr = None
    while i < n:
        c = ln[i]
        if instr:
            if c == '\\':
                i += 2
                continue
            if c == instr:
                instr = None
            i += 1
            continue
        if c == '"' or c == "'":
            instr = c
            i += 1
            continue
        if c == '/' and i + 1 < n and ln[i + 1] == '/':
            break
        if c == '{':
            delta += 1
        elif c == '}':
            delta -= 1
        i += 1
    return delta


def has_open(ln):
    """True if the line (literals/comments stripped) still contains '{'."""
    return '{' in strip_code(ln)[1]


def strip_code(ln):
    """Return (code_without_comments, code_without_strings) views of ln."""
    out = []
    i = 0
    n = len(ln)
    instr = None
    while i < n:
        c = ln[i]
        if instr:
            if c == '\\':
                out.append(ln[i:i + 2])
                i += 2
                continue
            if c == instr:
                instr = None
            i += 1
            continue
        if c == '"' or c == "'":
            instr = c
            i += 1
            continue
        if c == '/' and i + 1 < n and ln[i + 1] == '/':
            break
        out.append(c)
        i += 1
    code = ''.join(out)
    return code, re.sub(r'"(?:[^"\\]|\\.)*"|\'(?:[^\'\\]|\\.)*\'', '""', code)


def block_span(lines, marker_idx, hard_cap=20000):
    """Return (body_lo, close_idx): body lines are marker_idx+1 .. close-1,
    where close_idx is the function's own closing brace line. depth starts
    at 1 because the function's `{` is above the marker."""
    depth = 1
    k = marker_idx
    hi = min(len(lines), marker_idx + hard_cap)
    while k < hi:
        depth += brace_delta(lines[k])
        if depth <= 0 and k > marker_idx:
            return marker_idx + 1, k
        k += 1
    return marker_idx + 1, -1


def skip_pending(lines, i):
    """Audit/skip walkers: return the index just past the pending block."""
    _, close = block_span(lines, i)
    return (close + 1) if close > 0 else i + 1
