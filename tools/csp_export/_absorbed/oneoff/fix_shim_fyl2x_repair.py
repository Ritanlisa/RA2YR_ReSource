#!/usr/bin/env python3
"""G42.12b: FYL2X shim repair -- the round-2 verified definitions assumed
<cmath> visibility; the /FI chain in clean TUs (app/, _generated/) does not
pull it, so `log2` broke 159 previously-clean TUs (g134 census catch).

Fix: guard the inline with the standard header include.

Usage: [--apply]
"""
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = "--apply" in sys.argv
p = ROOT / "src/core/ida_compat.h"
with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
    txt = f.read()

OLD = "inline double IDA___FYL2X__(double y, double x) { return y * log2(x); }"
NEW = ("#include <cmath>\n"
       "inline double IDA___FYL2X__(double y, double x) "
       "{ return y * std::log2(x); }")
if OLD not in txt:
    print("anchor not found -- already fixed or moved")
    sys.exit(1)
if APPLY:
    with open(p, "w", encoding="utf-8", newline="") as f:
        f.write(txt.replace(OLD, NEW, 1))
print("FYL2X shim: +<cmath> +std:: qualification", "(written)" if APPLY else "(DRY)")
