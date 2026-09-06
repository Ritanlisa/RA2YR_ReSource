"""Unwrap IDA pseudocode blocks (user decision v2, 2026-09-06):
the `#if 0` wrapper is removed — the original decompiled code becomes the
live function body. Baseline compile errors are explicitly accepted.
Also removes the now-meaningless stub-return lines below each block.

Only touches blocks carrying the session marker line, so pre-existing
unrelated `#if 0` regions are left alone.

Usage: python tools/unwrap_if0_blocks.py [--apply] [--file PATH]
"""
import argparse
import pathlib
import re
import sys

INSIDE = '// [IDA decompile] original pseudocode - translation pending (final goal)'
STUB_RE = re.compile(r'^\s*(?:return (?:false|\{\}); )?// TODO stub - translate quarantined IDA block above\s*$')


def unwrap(lines):
    out = []
    i = 0
    blocks = 0
    stubs = 0
    while i < len(lines):
        if lines[i].rstrip('\r') == '#if 0' and i + 1 < len(lines) and lines[i + 1].rstrip('\r') == INSIDE:
            j = i + 1
            while j < len(lines) and lines[j].rstrip('\r') != '#endif':
                j += 1
            # emit marker + block content; drop #if 0 and #endif lines
            out.append(INSIDE)
            for k in range(i + 2, j):
                out.append(lines[k])
            blocks += 1
            i = j + 1
            # swallow an immediately following stub-return line (+ blank)
            while i < len(lines) and (STUB_RE.match(lines[i].rstrip('\r')) or lines[i].strip() == ''):
                if STUB_RE.match(lines[i].rstrip('\r')):
                    stubs += 1
                    i += 1
                    break
                i += 1
            continue
        out.append(lines[i])
        i += 1
    return out, blocks, stubs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--apply', action='store_true')
    ap.add_argument('--file', default=None)
    args = ap.parse_args()
    if args.file:
        targets = [pathlib.Path(args.file)]
    else:
        targets = [p for p in pathlib.Path('src').rglob('*.cpp')
                   if INSIDE in p.read_text(encoding='latin-1')]
    tb = ts = 0
    for p in sorted(targets):
        lines = p.read_bytes().decode('latin-1').split('\n')
        out, blocks, stubs = unwrap(lines)
        if blocks and args.apply:
            p.write_bytes('\n'.join(out).encode('latin-1'))
        if blocks:
            print(f"{p}: {blocks} unwrapped, {stubs} stubs removed")
        tb += blocks
        ts += stubs
    print(f"\n[{'APPLIED' if args.apply else 'DRY-RUN'}] blocks: {tb}, stubs: {ts}")
    sys.exit(0)


if __name__ == '__main__':
    main()
