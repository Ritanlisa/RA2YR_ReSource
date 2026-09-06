"""Convert quarantined IDA pseudocode comments into `#if 0` source blocks.

User decision (2026-09-06): unfinished translations carry the ORIGINAL IDA
decompiled code in the body — not a bare stub. The pseudocode is not valid
C++ (`#374`, `__thiscall`, `_DWORD`), so it sits inside `#if 0` with the
`[IDA decompile]` marker inside the block (the representation
verify_execution_flow.py recognizes as "disabled implementation"). The
compilable stub return below it stays — the function must link.

Marker lines emitted by quarantine_ida_embeds.py are exactly `//` or
`// <text>` at column 0, directly after a `// [IDA decompile]` line. The
stub lines are indented (start with spaces), so they terminate the block.

Note: modifying such a function later re-triggers the
stub-with-disabled-implementation gate FAIL — by design; it forces the real
translation (the final goal per the user).

Usage: python tools/uncomment_ida_blocks.py [--apply] [--file PATH]
"""
import argparse
import pathlib
import sys

MARK = '// [IDA decompile]'
INSIDE = '// [IDA decompile] original pseudocode - translation pending (final goal)'


def is_embed_line(line):
    return line == '//' or line.startswith('// ')


def transform(lines):
    out = []
    i = 0
    blocks = 0
    while i < len(lines):
        line = lines[i]
        out.append(line)
        if line.rstrip('\r') == MARK:
            # gather consecutive commented embed lines
            j = i + 1
            while j < len(lines) and is_embed_line(lines[j].rstrip('\r\n')) and lines[j].startswith('//'):
                j += 1
            if j > i + 1:
                out.pop()  # drop the marker line; re-emit inside block
                out.append('#if 0')
                out.append(INSIDE)
                for k in range(i + 1, j):
                    ln = lines[k].rstrip('\r\n')
                    out.append(ln[3:] if ln.startswith('// ') else '')
                out.append('#endif')
                blocks += 1
            i = j
            continue
        i += 1
    return out, blocks


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--apply', action='store_true')
    ap.add_argument('--file', default=None)
    args = ap.parse_args()
    if args.file:
        targets = [pathlib.Path(args.file)]
    else:
        targets = [p for p in pathlib.Path('src').rglob('*.cpp')
                   if MARK in p.read_text(encoding='latin-1')]
    total = 0
    for p in sorted(targets):
        raw = p.read_bytes().decode('latin-1')
        lines = raw.split('\n')
        out, blocks = transform(lines)
        if blocks and args.apply:
            p.write_bytes('\n'.join(out).encode('latin-1'))
        if blocks:
            print(f"{p}: {blocks} blocks")
        total += blocks
    print(f"\n[{'APPLIED' if args.apply else 'DRY-RUN'}] total blocks: {total}")
    sys.exit(0)


if __name__ == '__main__':
    main()
