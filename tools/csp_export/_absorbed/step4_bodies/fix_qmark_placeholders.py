#!/usr/bin/env python3
"""G41.27: mechanically compile-legalize `.`?`/`->?` member placeholders.

The 09-28 typed export rendered unknown-member accesses as `.?` / `->?`
(member name unresolvable at export time); the text is also baked into
ida_cache, so both sides of the verifier see the same tokens (symmetric
unresolved events -- covered by the G41.19 wildcard exemption once the
C++ side resolves to a concrete global/member event).

Rewrites (code regions only; comments/strings untouched):

  IDENT.?[N]    -> ((unsigned int *)&IDENT)[N]     global dword lane
  IDENT.?  (assignment context) -> ((unsigned int *)&IDENT)[0]
  IDENT.?  (other) -> ((char *)&IDENT)             pointer-preserving
  IDENT->?[N]   -> ((unsigned int *)IDENT)[N]
  IDENT->?      -> ((unsigned int *)IDENT)[0]      lvalue-safe install lane
  EXPR.? / EXPR->? (receiver ends `)`/`]`) -> receiver kept, `?` dropped

Usage: python tools/csp_export/fix_qmark_placeholders.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv

ID = r'[A-Za-z_]\w*'
BR = r'(\[(?:[^\[\]]|\[[^\]]*\])*\])'
PAT_IDX_DOT = re.compile(r'\b(' + ID + r')\.\?' + BR)
PAT_IDX_ARROW = re.compile(r'\b(' + ID + r')->\?' + BR)
PAT_BARE_DOT = re.compile(r'\b(' + ID + r')\.\?(?!\s*\[)')
PAT_BARE_ARROW = re.compile(r'\b(' + ID + r')->\?(?!\s*\[)')
# expression receiver (ends in `]` = array element object, `)` = pointer expr)
PAT_EXPRIDX_DOT = re.compile(r'([\]])\s*\.\?\s*' + BR)
PAT_EXPRIDX_ARROW = re.compile(r'([\]\)])\s*->\?\s*' + BR)
ASSIGN_AHEAD = re.compile(r'[^=!<>+\-*/%&|^]=[^=]')


def code_regions(line: str):
    """Yield (start, end) spans of line that are code (not comment/string)."""
    regions = []
    i, n = 0, len(line)
    start = 0
    in_str = in_chr = False
    while i < n:
        c = line[i]
        if in_str:
            if c == '\\':
                i += 2
                continue
            if c == '"':
                in_str = False
        elif in_chr:
            if c == '\\':
                i += 2
                continue
            if c == "'":
                in_chr = False
        elif c == '"':
            in_str = True
        elif c == "'":
            in_chr = True
        elif c == '/' and i + 1 < n and line[i + 1] == '/':
            regions.append((start, i))
            return regions
        elif c == '/' and i + 1 < n and line[i + 1] == '*':
            regions.append((start, i))
            j = line.find('*/', i + 2)
            if j < 0:
                return regions
            start = j + 2
            i = j + 2
            continue
        i += 1
    regions.append((start, n))
    return regions


def walk_back_receiver(seg: str, pos: int):
    """Walk back from `pos` (marker start) over a balanced primary
    expression. Returns receiver start index, or None if unbounded."""
    i = pos - 1
    depth = 0
    while i >= 0:
        c = seg[i]
        if c in ')]':
            depth += 1
        elif c in '([':
            if depth == 0:
                return None
            depth -= 1
        elif depth > 0:
            pass  # inside brackets: literals, names, anything
        elif c.isalnum() or c in '_':
            pass  # identifier / literal char at top level
        else:
            break  # operator/space/comma: receiver boundary
        i -= 1
    return i + 1


def fix_expr_indexed(seg: str, stats):
    """`RECV.?[N]` / `RECV->?[N]` where RECV is a bracketed expression."""
    out = seg
    for pat, isarrow in ((r'\.\?', False), (r'->\?', True)):
        while True:
            m = re.search(pat + r'(\[[^\]\[]*\])', out)
            if not m:
                break
            recv_start = walk_back_receiver(out, m.start())
            if recv_start is None:
                # cannot bound receiver: drop the `?` only (marker head kept
                # out of the replacement by splicing past it)
                out = out[:m.start()] + out[m.start() + (3 if isarrow else 2):]
                stats['expridx_unbounded'] += 1
                continue
            recv = out[recv_start:m.start()]
            idx = m.group(1)
            if isarrow and recv.rstrip().endswith(')'):
                new = '((unsigned int *)%s)%s' % (recv, idx)
            else:
                new = '((unsigned int *)&%s)%s' % (recv, idx)
            out = out[:recv_start] + new + out[m.end():]
            stats['expridx_fixed'] += 1
    return out


def fix_line(line: str, stats):
    out = []
    last = 0
    for a, b in code_regions(line):
        seg = line[a:b]
        # order: indexed before bare (lookahead guards already handle)

        def idx_dot(m):
            stats['idx_dot'] += 1
            return '((unsigned int *)&%s)%s' % (m.group(1), m.group(2))

        def idx_arrow(m):
            stats['idx_arrow'] += 1
            return '((unsigned int *)%s)%s' % (m.group(1), m.group(2))

        def bare_dot(m):
            ahead = seg[m.end():m.end() + 4]
            if ASSIGN_AHEAD.match(ahead):
                stats['bare_dot_assign'] += 1
                return '((unsigned int *)&%s)[0]' % m.group(1)
            stats['bare_dot'] += 1
            return '((char *)&%s)' % m.group(1)

        def bare_arrow(m):
            stats['bare_arrow'] += 1
            return '((unsigned int *)%s)[0]' % m.group(1)

        def expridx_dot(m):
            stats['expridx_dot'] += 1
            return m.group(0)

        def expridx_arrow(m):
            stats['expridx_arrow'] += 1
            return m.group(0)

        seg = PAT_IDX_DOT.sub(idx_dot, seg)
        seg = PAT_IDX_ARROW.sub(idx_arrow, seg)
        seg = PAT_BARE_ARROW.sub(bare_arrow, seg)
        seg = PAT_BARE_DOT.sub(bare_dot, seg)
        seg = fix_expr_indexed(seg, stats)
        # expression receivers: `]?` / `)?` forms
        seg2 = re.sub(r'([\]\)])\s*\.\?(?!\s*\[)', r'\1', seg)
        if seg2 != seg:
            stats['expr_dot'] += 1
            seg = seg2
        seg2 = re.sub(r'([\]\)])\s*->\?(?!\s*\[)', r'\1', seg)
        if seg2 != seg:
            stats['expr_arrow'] += 1
            seg = seg2
        out.append(line[last:a])
        out.append(seg)
        last = b
    out.append(line[last:])
    return ''.join(out)


def main():
    stats = dict(idx_dot=0, idx_arrow=0, bare_dot=0, bare_dot_assign=0,
                 bare_arrow=0, expr_dot=0, expr_arrow=0, expridx_fixed=0,
                 expridx_unbounded=0)
    leftover = 0
    files = 0
    for p in sorted(ROOT.glob('src/**/*.cpp')):
        if 'build' in p.parts or not p.is_file():
            continue
        try:
            txt = p.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        if '.?' not in txt and '->?' not in txt:
            continue
        lines = txt.split('\n')
        new = [fix_line(l, stats) for l in lines]
        joined = '\n'.join(new)
        if joined != txt:
            files += 1
            if APPLY:
                p.write_text(joined, encoding='utf-8', errors='replace')
        for m in re.finditer(r'\.\?|->\?', re.sub(r'//[^\n]*', '', joined)):
            leftover += 1
    print(stats, 'files:', files, 'leftover(raw):', leftover)
    if not APPLY:
        print('DRY -- pass --apply to write')


if __name__ == '__main__':
    main()
