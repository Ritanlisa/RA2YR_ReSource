#!/usr/bin/env python3
"""G42.18b: remove BAD wraps from the ns repair -- pairs whose inserted
closer is immediately followed by another `}` (the early-close variant:
the def already lived inside a namespace whose opener was fine but whose
body was pre-terminated BEFORE the def; wrapping nested a second namespace
inside the real one -> double close -> C2059/C2143 ×53 TUs).

Those blocks are restored verbatim; correctly-wrapped blocks (no trailing
`}`) stay.  The early-close variant goes back to the round-4 ledger.

Usage: [--apply]
"""
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = "--apply" in sys.argv
OPEN = "namespace gamemd {  // G42.18 ns repair\n"
CLOSE = "}  // G42.18 ns repair\n"

n = 0
files = 0
for p in sorted((ROOT / "src/e4").glob("*.cpp")):
    with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
        lines = f.read().splitlines(keepends=True)
    changed = False
    out = []
    i = 0
    while i < len(lines):
        if lines[i] == OPEN:
            # find the paired closer
            j = i + 1
            while j < len(lines) and lines[j] != CLOSE:
                j += 1
            if j < len(lines):
                nxt = lines[j + 1].strip() if j + 1 < len(lines) else ''
                if nxt.startswith('}'):
                    # bad wrap: drop opener and closer, keep body verbatim
                    out.extend(lines[i + 1:j])
                    i = j + 1
                    n += 1
                    changed = True
                    continue
        out.append(lines[i])
        i += 1
    if changed:
        files += 1
        if APPLY:
            with open(p, "w", encoding="utf-8", newline="") as f:
                f.write("".join(out))
print(f"bad wraps removed: {n} in {files} files "
      f"{'(written)' if APPLY else '(DRY)'}")
