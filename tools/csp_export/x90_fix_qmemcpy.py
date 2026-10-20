#!/usr/bin/env python3
"""X90 W3: qmemcpy -> memcpy (RC1 sanctioned equivalent).

`tools/csp_export/_ida_vocab.py` already defines the authoritative mapping
`rewrite_qmemcpy` (qmemcpy(dst, src, n) == memcpy(dst, src, n)); newly
generated bodies use it.  Legacy bodies that predate that pass still carry
the banned spelling.  This post-pass applies the same generator rule to the
tree.  Token-only, identical semantics.

Usage:
    python tools/csp_export/x90_fix_qmemcpy.py            # dry
    python tools/csp_export/x90_fix_qmemcpy.py --apply
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
EVID = ROOT / '.omo' / 'evidence' / 'optimization' / 'x90'
PAT = re.compile(r'\bqmemcpy\s*\(')
CUT = re.compile(r'//|/\*')


def rewrite_line(line):
    cut = CUT.search(line)
    head, tail = (line[:cut.start()], line[cut.start():]) if cut else (line, '')
    head, n = PAT.subn('memcpy(', head)
    return head + tail, n


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
        if 'qmemcpy' not in txt:
            continue
        out = []
        nfile = 0
        for i, ln in enumerate(txt.split('\n'), 1):
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
    (EVID / ('x90_w3_qmemcpy_%s.json' % ('apply' if APPLY else 'dry'))).write_text(
        json.dumps(sites, ensure_ascii=False, indent=1), encoding='utf-8')
    if not APPLY:
        print('DRY -- pass --apply to write')


if __name__ == '__main__':
    main()
