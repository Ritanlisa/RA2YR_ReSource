#!/usr/bin/env python3
"""G42.17b: duplicate-member cleanup (member_supply wave-11 collateral) +
vtable1 gap report.  Scans e4 class headers for same-name members declared
twice (C2040/C2371 family, e.g. AircraftClass q1B0 char[4]@229 vs
unsigned char@694) and drops the later duplicate (first = original order).

Usage: [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = "--apply" in sys.argv

MEMBER = re.compile(r'^\s*[\w:\s\*&\[]+\b([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;'
                    r'\s*(?://\s*(0x[0-9A-Fa-f]+).*)?\r?\n?$')
n = 0
files = 0
for p in sorted((ROOT / "src/e4/classes").glob("*_e4.hpp")):
    with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
        lines = f.read().splitlines(keepends=True)
    seen = {}
    drop = []
    for i, ln in enumerate(lines):
        m = MEMBER.match(ln.rstrip("\r\n"))
        if not m or not m.group(3):
            continue
        name, off = m.group(1), m.group(3)
        key = (name, off)
        if key in seen:
            drop.append(i)
            print(f"  dup {p.name}:{i+1} {name} {off or ''} (first @{seen[key]+1})")
        else:
            seen[key] = i
    if drop:
        files += 1
        for i in reversed(drop):
            del lines[i]
            n += 1
        if APPLY:
            with open(p, "w", encoding="utf-8", newline="") as f:
                f.write("".join(lines))
print(f"duplicate members dropped: {n} in {files} files "
      f"{'(written)' if APPLY else '(DRY)'}")
