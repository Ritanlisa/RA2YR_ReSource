#!/usr/bin/env python3
"""G42.4 wave-4 closer: macro-guard cross-universe dual definitions.

load_options.cpp includes core/load_options.hpp (rich 31-method class,
line 39) AND e4/classes/LoadOptions_e4.hpp (flat data class, line 13, via
SaveLoadDialog_e4.hpp) -> C2011 invalidates the type -> 15+ C2027 in that TU.

Surgery: core header sets GAMEMD_CORE_OWNS_LOADOPTIONS before its class def;
the e4 flat def is wrapped in #ifndef so it yields whenever the core def is
already visible (include order in load_options.cpp puts core first).
Pure e4 TUs never see the macro -> flat def stays.

Usage: [--apply]
"""
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = "--apply" in sys.argv


def rd(p):
    with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
        return f.read().splitlines(keepends=True)


def wr(p, lines):
    with open(p, "w", encoding="utf-8", newline="") as f:
        f.write("".join(lines))


# 1. core header: set the ownership macro
p1 = ROOT / "src/core/load_options.hpp"
lines = rd(p1)
hits = [i for i, ln in enumerate(lines) if ln.rstrip("\r\n ") == "class LoadOptions {"]
if len(hits) != 1:
    print(f"ABORT core class def found {len(hits)}")
    sys.exit(1)
i = hits[0]
print(f"{'EDIT' if APPLY else 'DRY '} core/load_options.hpp:{i+1} + ownership macro")
if APPLY:
    lines.insert(i, "#define GAMEMD_CORE_OWNS_LOADOPTIONS 1  // G42.4: e4 flat def yields\n")
    wr(p1, lines)

# 2. e4 flat header: wrap class def
p2 = ROOT / "src/e4/classes/LoadOptions_e4.hpp"
lines = rd(p2)
start = [i for i, ln in enumerate(lines) if ln.rstrip("\r\n ") == "struct LoadOptions {"]
end = [i for i, ln in enumerate(lines) if ln.rstrip("\r\n ") == "};"]
if len(start) != 1 or not end or end[0] < start[0]:
    print(f"ABORT e4 flat span start={len(start)} ")
    sys.exit(1)
s, e = start[0], min(x for x in end if x > start[0])
print(f"{'EDIT' if APPLY else 'DRY '} e4/classes/LoadOptions_e4.hpp:{s+1}-{e+1} wrap #ifndef")
if APPLY:
    indent = " " * (len(lines[s]) - len(lines[s].lstrip()))
    lines.insert(s, "#ifndef GAMEMD_CORE_OWNS_LOADOPTIONS  // G42.4: core owns in mixed TUs\n")
    lines.insert(e + 2, "#endif  // GAMEMD_CORE_OWNS_LOADOPTIONS\n")
    wr(p2, lines)

print("done" if APPLY else "dry-run ok; pass --apply")
