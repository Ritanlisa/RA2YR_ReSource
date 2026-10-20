#!/usr/bin/env python3
"""X90 W1: compile-legalize `MEMORY[0xADDR].?[N]` residuals.

The 09-28 typed export renders an unresolved member of an absolute-address
object as `MEMORY[0xADDR].?[N]` (the `?` is the unknown member token).  For
`MEMORY` (declared `#define MEMORY ((unsigned char*)nullptr)`) the byte
address is exactly `ADDR + N`, so the token-only rewrite

    MEMORY[0xADDR].?[N]   ->  MEMORY[0xADDR + N]
    MEMORY[0xADDR].?      ->  MEMORY[0xADDR]

is address- and width-exact (the surrounding `*(T*)&...` casts keep the
access width).  No cast is inserted, no declaration/layout changes.

Usage:
    python tools/csp_export/x90_fix_qmark.py            # dry census
    python tools/csp_export/x90_fix_qmark.py --apply    # write
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
EVID = ROOT / '.omo' / 'evidence' / 'optimization' / 'x90'

PAT_IDX = re.compile(r'MEMORY\[(0x[0-9A-Fa-f]+)\]\.\?\[(\d+)\]')
PAT_BARE = re.compile(r'MEMORY\[(0x[0-9A-Fa-f]+)\]\.\?(?!\s*\[)')
# code region on a line: before // or /* (good enough: token never appears in
# a string in this corpus; comment text must not be rewritten)
CUT = re.compile(r'//|/\*')


def rewrite_line(line):
    cut = CUT.search(line)
    head, tail = (line[:cut.start()], line[cut.start():]) if cut else (line, '')
    head, n1 = PAT_IDX.subn(lambda m: 'MEMORY[%s + %s]' % (m.group(1), m.group(2)), head)
    head, n2 = PAT_BARE.subn(lambda m: 'MEMORY[%s]' % m.group(1), head)
    return head + tail, n1 + n2


def main():
    EVID.mkdir(parents=True, exist_ok=True)
    sites = []
    changed = []
    for p in sorted((ROOT / 'src').rglob('*.cpp')):
        raw = p.read_bytes()
        try:
            txt = raw.decode('utf-8')
        except UnicodeDecodeError:
            continue
        if '.?' not in txt:
            continue
        lines = txt.split('\n')
        out = []
        nfile = 0
        for i, ln in enumerate(lines, 1):
            new, n = rewrite_line(ln)
            if n:
                nfile += n
                sites.append({'file': str(p.relative_to(ROOT)).replace('\\', '/'),
                              'line': i, 'before': ln.strip()[:200],
                              'after': new.strip()[:200]})
            out.append(new)
        if nfile:
            changed.append((p, nfile))
            if APPLY:
                p.write_bytes('\n'.join(out).encode('utf-8'))
    print('sites=%d files=%d apply=%s' % (len(sites), len(changed), APPLY))
    for c, n in changed:
        print('  %-64s %d' % (c.relative_to(ROOT), n))
    import json
    (EVID / ('x90_w1_qmark_%s.json' % ('apply' if APPLY else 'census'))).write_text(
        json.dumps(sites, ensure_ascii=False, indent=1), encoding='utf-8')
    if not APPLY:
        print('DRY -- pass --apply to write')


if __name__ == '__main__':
    main()
