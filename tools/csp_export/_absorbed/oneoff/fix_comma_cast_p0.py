#!/usr/bin/env python3
"""G42.10 P0: bare comma-cast corruption cleanup (G37-era spliced params).

Form: `*(TYPE, TYPE name)(expr)` / `(TYPE, TYPE name)this` — a parameter
declaration spliced into a cast's type parens (G37 fixer battery artifact,
commit 07f25216 family).  Never legal C++; the `, TYPE name` segment is
dropped, restoring `*(TYPE)(expr)`.

Discriminator: comma followed by `TYPE NAME` then `)` immediately before
`(` or `this` — legal fn-ptr param lists never end `NAME)(` there.

Usage: [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = "--apply" in sys.argv

# cast type part must contain a pointer star; spliced segment is `TYPE NAME`
PAT = re.compile(
    r'\(([^()]*\*[^()]*?)\s*'
    r'(?:,\s*(?:unsigned\s+|signed\s+)?(?:int|char|void|short|long|__int64|bool)\s+'
    r'[A-Za-z_]\w*\s*)+\)(?=\s*(?:\(|this))')

n = 0
touched = {}
for p in sorted((ROOT / "src").rglob("*.cpp")):
    if "_generated" in str(p) or "raw_decomp" in str(p):
        continue
    try:
        with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
            txt = f.read()
    except OSError:
        continue
    new, k = PAT.subn(r'(\1)', txt)
    if k:
        touched[str(p)] = new
        n += k
        for m in list(PAT.finditer(txt))[:2]:
            print(f"  {p.name}: ...{txt[max(0,m.start()-20):m.end()+20][:90]}")
print(f"comma-casts repaired: {n} in {len(touched)} files "
      f"{'(written)' if APPLY else '(DRY)'}")
if APPLY:
    for path, txt in touched.items():
        with open(path, "w", encoding="utf-8", newline="") as f:
            f.write(txt)
