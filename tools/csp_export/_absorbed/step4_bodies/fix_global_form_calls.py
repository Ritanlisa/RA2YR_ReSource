#!/usr/bin/env python3
"""G42.9a: global-form call rewrites (agent-4 C2352-ii, truth-anchored).

Cache truth (0x6C8C40 / 0x4BBC90) shows NO this for these "methods" -- they
are globals the corpus renders as Cls::Name static calls:
    Timer::GetTicks(&v1)   -> TimerGetTicks()     [global exists @init_stubs:54]
    DDraw::GetStatus()     -> DDraw_GetStatus()   [needs extern supply]

Also supplies both externs into e4_protos.h (self-wrapped namespace block).

Usage: [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = "--apply" in sys.argv

SUPPLY = """
// G42.9: global-form supplies (cache truth 0x6C8C40 / 0x4BBC90: no this)
extern int TimerGetTicks();  // 0x6C8C40
extern int DDraw_GetStatus();  // 0x4BBC90
"""

REWRITES = [
    ("Timer::GetTicks", "TimerGetTicks"),
    ("DDraw::GetStatus", "DDraw_GetStatus"),
]


def balanced_call_rewrite(txt, old, new):
    """Replace Cls::Name(<args>) -> new() dropping args (truth: 0 params)."""
    out = []
    pos = 0
    pat = re.compile(r'\b' + re.escape(old) + r'\s*\(')
    n = 0
    while True:
        m = pat.search(txt, pos)
        if not m:
            out.append(txt[pos:])
            break
        open_i = m.end() - 1
        depth = 0
        end_i = -1
        for j in range(open_i, len(txt)):
            c = txt[j]
            if c == '(':
                depth += 1
            elif c == ')':
                depth -= 1
                if depth == 0:
                    end_i = j
                    break
        if end_i < 0:
            out.append(txt[pos:m.end()])
            pos = m.end()
            continue
        out.append(txt[pos:m.start()])
        out.append(new + '()')
        pos = end_i + 1
        n += 1
    return ''.join(out), n


total = 0
touched = 0
for p in sorted((ROOT / "src").rglob("*.cpp")):
    if "_generated" in str(p) or "raw_decomp" in str(p):
        continue
    with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
        txt = f.read()
    orig = txt
    for old, new in REWRITES:
        txt, n = balanced_call_rewrite(txt, old, new)
        total += n
    if txt != orig:
        touched += 1
        if APPLY:
            with open(p, "w", encoding="utf-8", errors='replace', newline="") as f:
                f.write(txt)

print(f"call rewrites: {total} in {touched} files {'(written)' if APPLY else '(DRY)'}")

# extern supply into e4_protos.h (self-wrapped namespace block at EOF)
pp = ROOT / "src/e4/e4_protos.h"
with open(pp, "r", encoding="utf-8", errors="replace", newline="") as f:
    cur = f.read()
if "extern int TimerGetTicks();" not in cur:
    block = "\n// G42.9 global-form supplies\nnamespace gamemd {" + SUPPLY + "}\n"
    if APPLY:
        with open(pp, "a", encoding="utf-8", errors='replace', newline="") as f:
            f.write(block)
    print("e4_protos externs: +2", "(written)" if APPLY else "(DRY)")
else:
    print("e4_protos externs: already present")
