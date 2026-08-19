#!/usr/bin/env python3
"""verify_decls.py — Count and verify all generated declarations.

Counts:
 - Functions: `// IDA: 0x` lines across all 7 _funcs.hpp files
 - Globals:   `extern ` lines across all 6 globals_*.hpp files

Asserts both counts within expected ranges, saves evidence.
"""
from __future__ import annotations

import re
import sys
from pathlib import Path


SRC_DIR = Path(__file__).resolve().parent.parent / "src"
EVIDENCE_DIR = Path(__file__).resolve().parent.parent / ".omo" / "evidence"
EVIDENCE_FILE = EVIDENCE_DIR / "task-30-coverage.txt"

# ── ranges ──────────────────────────────────────────────────────────
FUNC_MIN, FUNC_MAX = 8000, 8600
GLOBAL_MIN, GLOBAL_MAX = 1250, 1400


def count_pattern(glob_pattern: str, regex: str) -> int:
    """Return total regex matches across all files matching glob_pattern."""
    total = 0
    for fpath in SRC_DIR.rglob(glob_pattern):
        text = fpath.read_text(encoding="utf-8")
        total += len(re.findall(regex, text, re.MULTILINE))
    return total


def main() -> int:
    # ── counts ───────────────────────────────────────────────────
    func_count = count_pattern("*_funcs.hpp", r"// IDA: 0x")
    global_count = count_pattern("globals_*.hpp", r"^extern ")

    # ── report ───────────────────────────────────────────────────
    lines: list[str] = [
        f"Functions  : {func_count:>6}  (expected {FUNC_MIN}-{FUNC_MAX})",
        f"Globals    : {global_count:>6}  (expected {GLOBAL_MIN}-{GLOBAL_MAX})",
        "",
    ]

    ok = True

    if FUNC_MIN <= func_count <= FUNC_MAX:
        lines.append(f"[PASS] Function count {func_count} in [{FUNC_MIN}, {FUNC_MAX}]")
    else:
        lines.append(f"[FAIL] Function count {func_count} NOT in [{FUNC_MIN}, {FUNC_MAX}]")
        ok = False

    if GLOBAL_MIN <= global_count <= GLOBAL_MAX:
        lines.append(f"[PASS] Global count {global_count} in [{GLOBAL_MIN}, {GLOBAL_MAX}]")
    else:
        lines.append(f"[FAIL] Global count {global_count} NOT in [{GLOBAL_MIN}, {GLOBAL_MAX}]")
        ok = False

    # ── output ───────────────────────────────────────────────────
    report = "\n".join(lines)
    print(report)

    # save evidence
    EVIDENCE_DIR.mkdir(parents=True, exist_ok=True)
    EVIDENCE_FILE.write_text(report + "\n", encoding="utf-8")
    print(f"\nEvidence saved: {EVIDENCE_FILE}")

    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
