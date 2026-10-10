#!/usr/bin/env python3
"""G42.17c: ProgressTimer cross-universe dual definition (macro guard).

src/fundamentals.hpp:28 carries the semantic core definition (Value/Timer +
symbol-anchored methods); e4/classes/ProgressTimer_e4.hpp:8 carries the flat
member mirror -- TUs seeing both get C2011 -> ProgressTimer invalid ->
C2027/C2079 cascade (AircraftClass family).  Core wins in mixed TUs.

Usage: [--apply]
"""
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = "--apply" in sys.argv
MACRO = "GAMEMD_CORE_OWNS_PROGRESSTIMER"

p1 = ROOT / "src/fundamentals.hpp"
lines = p1.read_text(encoding="utf-8", errors="replace").split("\n")
hits = [i for i, ln in enumerate(lines) if ln.rstrip() == "struct ProgressTimer"]
if len(hits) != 1:
    print("ABORT fundamentals anchor", hits)
    sys.exit(1)
i = hits[0]
if MACRO not in p1.read_text(encoding="utf-8", errors="replace"):
    lines.insert(i, "#define %s 1  // G42.17c: e4 flat def yields\n" % MACRO)
    if APPLY:
        p1.write_text("\n".join(lines), encoding="utf-8", errors='replace', newline="")
    print("fundamentals.hpp: +macro", "(written)" if APPLY else "(DRY)")

p2 = ROOT / "src/e4/classes/ProgressTimer_e4.hpp"
lines = p2.read_text(encoding="utf-8", errors="replace").split("\n")
if MACRO not in lines[0] and not any(MACRO in ln for ln in lines):
    s = [i for i, ln in enumerate(lines) if ln.rstrip() == "struct ProgressTimer {"]
    e = [i for i, ln in enumerate(lines) if ln.rstrip() == "};"]
    if not s:
        print("ABORT e4 anchor")
        sys.exit(1)
    s0 = s[0]
    e0 = min(x for x in e if x > s0)
    lines.insert(s0, "#ifndef %s  // G42.17c: core owns in mixed TUs" % MACRO)
    lines.insert(e0 + 2, "#endif  // %s" % MACRO)
    if APPLY:
        p2.write_text("\n".join(lines), encoding="utf-8", errors='replace', newline="")
    print("ProgressTimer_e4.hpp: wrapped", "(written)" if APPLY else "(DRY)")
