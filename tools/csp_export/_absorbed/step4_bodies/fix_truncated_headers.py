#!/usr/bin/env python3
"""G41.27: repair headers left structurally truncated (unbalanced braces).

A generated header whose writer died mid-write (observed:
VectorClass_flat_e4.hpp -- 2 opens, 0 closes) leaves the parser inside a
struct body; every subsequent `namespace` token in the TU then fires
C2059/C2334 (the 1,643-error C2059-namespace family in r65).

Mechanical repair: walk the file tracking brace depth over code (comments,
string/char literals stripped); if EOF depth > 0, append `};` once for the
innermost struct/class scope and `}` for each remaining enclosing scope
(namespace), each on its own line. Excess closers (depth < 0) are reported
only -- never auto-fixed (those need human/arheological eyes).

Usage: python tools/csp_export/fix_truncated_headers.py [--dry]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
DRY = '--dry' in sys.argv

LINE_COMMENT = re.compile(r'//[^\n]*')
BLOCK_COMMENT = re.compile(r'/\*.*?\*/', re.S)
STR = re.compile(r'"(?:[^"\\\n]|\\.)*"', re.S)
CHR = re.compile(r"'(?:[^'\\\n]|\\.)*'", re.S)


def strip_noncode(txt: str) -> str:
    txt = BLOCK_COMMENT.sub(' ', txt)
    txt = LINE_COMMENT.sub(' ', txt)
    txt = STR.sub('""', txt)
    txt = CHR.sub("''", txt)
    return txt


def scope_stack(txt: str):
    """Return list of (kind, name) for scopes open at EOF, innermost last."""
    stack = []
    for m in re.finditer(r'\b(namespace)\s+(\w+)?|\b(struct|class)\s+(\w+)?', txt):
        yield m
    return stack


def repair(p: Path) -> str | None:
    txt = p.read_text(encoding='utf-8', errors='replace')
    nc = strip_noncode(txt)
    depth = nc.count('{') - nc.count('}')
    if depth <= 0:
        return None
    # Reconstruct what each open brace belonged to (innermost last).
    opens = []
    code = nc
    # walk chars pairing braces
    stack = []
    for i, ch in enumerate(code):
        if ch == '{':
            stack.append(i)
        elif ch == '}' and stack:
            stack.pop()
    if len(stack) != depth:
        return None  # paranoid: depth mismatch, do not touch
    # For each unmatched open position, look back in the ORIGINAL text for
    # the nearest preceding struct/class/namespace keyword by column ratio:
    # simpler and robust -- the last unmatched open is the innermost scope.
    # Map code index back to original text index: both derive from same
    # offsets only if stripping is length-preserving. Make it so.
    pres = BLOCK_COMMENT.sub(lambda m: ' ' * len(m.group(0)), txt)
    pres = LINE_COMMENT.sub(lambda m: ' ' * len(m.group(0)), pres)
    pres = STR.sub(lambda m: m.group(0)[:1] + ' ' * (len(m.group(0)) - 2) + m.group(0)[-1:], pres)
    pres = CHR.sub(lambda m: m.group(0)[:1] + ' ' * (len(m.group(0)) - 2) + m.group(0)[-1:], pres)
    stack = []
    kinds = []
    for i, ch in enumerate(pres):
        if ch == '{':
            head = pres[max(0, i - 200):i]
            kw = None
            for k in re.finditer(r'\b(namespace)\s+(\w+)|\b(struct|class)\s+(\w+)', head):
                kw = k
            if kw:
                kinds.append((kw.group(1) or kw.group(3), kw.group(2) or kw.group(4)))
            else:
                kinds.append(('scope', None))
            stack.append(i)
        elif ch == '}' and stack:
            stack.pop()
            if kinds:
                kinds.pop()
    if not kinds:
        return None
    add = []
    # close innermost first: struct/class -> `};`, namespace/scope -> `}`
    for kind, name in reversed(kinds):
        if kind in ('struct', 'class'):
            add.append('};  // fix_truncated_headers: restored closer')
        else:
            add.append('}  // fix_truncated_headers: restored closer'
                       + (f' // {kind} {name}' if name else ''))
    if not txt.endswith('\n'):
        txt += '\n'
    txt += '\n'.join(add) + '\n'
    return txt


def main():
    n_fix = 0
    for p in sorted(ROOT.glob('src/**/*.h*')):
        if 'build' in p.parts or not p.is_file():
            continue
        try:
            new = repair(p)
        except OSError:
            continue
        if new is None:
            continue
        print(('DRY would fix ' if DRY else 'fixed ') + str(p))
        if not DRY:
            p.write_text(new, encoding='utf-8', errors='replace')
        n_fix += 1
    print('repaired:', n_fix)


if __name__ == '__main__':
    main()
