#!/usr/bin/env python3
"""x51-L1: inline-asm annotation brace-kill fix.

Root cause: single-line `__asm { BODY; ANN }` — MSVC inline asm treats ';' as an
end-of-line comment, so `; ANN }` comments out the closing brace. The asm block
never closes; the parser stays in asm mode and every subsequent C++ line until
the next stray '}' raises C2400 ('opcode' inline asm syntax error) / C2059 /
C2143 cascades.

Fix (byte-safe, line-local, comment-preserving):
    __asm { BODY; ANN } TAIL   ->   __asm { BODY } /*; ANN*​/ TAIL
The annotation was never functional (a comment); moving it outside the braces
preserves semantics AND the IDA evidence text (jumptable / FPU size hint).

Whitelist guard: only rewrites when the post-';' text matches the known
annotation vocabulary (census 2026-10-17: double x79 / float x7 / int x2 /
'- internal hardware ...' x16 / 'jumptable ... case N' x8 = 112 sites).
Never touches multi-line asm blocks (brace must be on the same line as `__asm {`).

Usage: python x51_asm_annotation.py [--apply]   (dry = default)
Output: ledger JSON next to this script. 2nd run = 0 ops (idempotent).
"""
import argparse, json, re, io
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
SRC = ROOT / 'src'
EVID = ROOT / '.omo' / 'evidence' / 'optimization' / 'x51'

# single-line asm block: __asm { ...no braces, no newline...; ANN }   (ANN = no braces)
BLOCK_RE = re.compile(r'(__asm\s*\{)([^{}\n]*);([^{}\n]*?)(\})')
# annotation vocabulary (post-';' text, stripped)
ANN_RE = re.compile(
    r'^(double|float|int|short|char|byte|word|dword|'
    r'- internal hardware\b.*|jumptable\b.*)$', re.S)


def fix_line(line):
    """Rewrite every whitelisted `; ANN }` occurrence on this line. Returns (newline, n)."""
    out = []
    pos = 0
    n = 0
    while True:
        m = BLOCK_RE.search(line, pos)
        if not m:
            out.append(line[pos:])
            break
        ann = m.group(3).strip()
        if not ANN_RE.match(ann):
            out.append(line[pos:m.end()])   # keep verbatim, advance past
            pos = m.end()
            continue
        body = m.group(2).rstrip()
        repl = f'{m.group(1)}{body} {m.group(4)} /*; {ann}*/'
        out.append(line[pos:m.start()])
        out.append(repl)
        pos = m.end()
        n += 1
    return ''.join(out), n


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--apply', action='store_true')
    args = ap.parse_args()

    ops = []
    files = sorted(SRC.rglob('*.cpp'))
    for p in files:
        try:
            txt = io.open(p, encoding='utf-8', errors='strict').read()
        except (OSError, UnicodeDecodeError):
            continue
        lines = txt.split('\n')
        new_lines = []
        changed = 0
        for i, ln in enumerate(lines, 1):
            new, n = fix_line(ln)
            if n:
                ops.append({'file': str(p.relative_to(ROOT)), 'line': i,
                            'before': ln.strip()[:200], 'after': new.strip()[:200]})
                changed += n
                new_lines.append(new)
            else:
                new_lines.append(ln)
        if changed and args.apply:
            io.open(p, 'w', encoding='utf-8', newline='').write('\n'.join(new_lines))

    ledger = {
        'mode': 'apply' if args.apply else 'dry',
        'ops': len(ops),
        'files': len({o['file'] for o in ops}),
        'items': ops,
    }
    out = EVID / ('x51_l1_ledger_apply.json' if args.apply else 'x51_l1_ledger_dry.json')
    out.write_text(json.dumps(ledger, ensure_ascii=False, indent=1), encoding='utf-8')
    print(f"x51-L1 asm-annotation: mode={ledger['mode']} ops={ledger['ops']} files={ledger['files']}")
    for o in ops[:5]:
        print(f"  {o['file']}:{o['line']}: {o['before'][:90]}")
    if len(ops) > 5:
        print(f'  ... +{len(ops)-5} more')


if __name__ == '__main__':
    main()
