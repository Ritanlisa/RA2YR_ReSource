#!/usr/bin/env python3
"""
reconcile_hpp_annotations.py — Cross-reference hpp NOT_FOUND / UNMATCHED annotations
against injectFunctionTest/functions.json.

Finds stale annotations where the function address IS known in functions.json
but the hpp was never updated from an early batch-generation pass.

Usage:
    python tools/reconcile_hpp_annotations.py           # dry-run report only
    python tools/reconcile_hpp_annotations.py --apply   # auto-fix stale annotations
    python tools/reconcile_hpp_annotations.py --verbose # show all entries
"""

import argparse
import json
import os
import re
import sys
from pathlib import Path

# ---------------------------------------------------------------------------
# Constants
# ---------------------------------------------------------------------------
FUNCTIONS_JSON = "injectFunctionTest/functions.json"
SRC_GLOB = "src/**/*.hpp"

# Matches a C++ function declaration, capturing the optional class prefix and method name.
# Handles: MethodName(), ~Destructor(), operator|(), operator==(), etc.
# Uses opening paren only (not closing) because multi-line declarations may have
# the closing paren on a different line from the annotation.
FUNC_RE = re.compile(
    r"(?:(?P<cls>\w+)::)?"              # optional ClassName:: prefix
    r"(?P<name>~?\w+|operator\s*\S+)"   # method name (regular, destructor, or operator)
    r"\s*\("                            # opening paren (closing may be on next line)
)

# The annotation lines we care about.
ANNOTATION_RE = re.compile(r"//\s*IDA:\s*(NOT_FOUND|UNMATCHED)")

# For replacing annotations with addresses.
ANNOTATION_FULL_RE = re.compile(
    r"//\s*IDA:\s*(?:NOT_FOUND|UNMATCHED)(?:\s*[—–-].*)?"
)


# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------
def load_functions_json(root: Path) -> dict:
    """Load functions.json and build name→address map."""
    path = root / FUNCTIONS_JSON
    if not path.exists():
        print(f"ERROR: {path} not found", file=sys.stderr)
        sys.exit(1)

    with open(path, "r", encoding="utf-8") as fh:
        data = json.load(fh)

    name_to_addr: dict[str, str] = {}
    for entry in data.get("functions", []):
        name = entry.get("name", "").strip()
        addr = entry.get("address", "").strip()
        if name and addr and addr.startswith("0x"):
            # Keep first occurrence (some names appear multiple times)
            if name not in name_to_addr:
                name_to_addr[name] = addr

    return name_to_addr


def find_enclosing_class(lines: list[str], line_idx: int) -> str | None:
    """Walk backwards from line_idx to find the enclosing class/struct name."""
    depth = 0
    # We start at line_idx and go backwards, but we need to account for the
    # possibility that the current line itself might end a class scope.
    # Simpler: scan forward building a context map, or scan backward counting braces.
    
    # Scan forward to build context map instead (more robust for nested classes).
    class_stack = []
    for i, line in enumerate(lines):
        stripped = line.strip()
        m = re.match(r"(?:class|struct)\s+(\w+)", stripped)
        if m:
            class_stack.append(m.group(1))
        # Count braces to detect end of class scope
        if stripped == "};" or stripped.startswith("};"):
            if class_stack:
                class_stack.pop()
        if i == line_idx:
            return class_stack[-1] if class_stack else None
    return None


def extract_function_name(line: str) -> tuple[str | None, str | None]:
    """Extract (class_prefix, method_name) from a C++ declaration line.
    
    Returns (None, None) if no function declaration found.
    """
    m = FUNC_RE.search(line)
    if not m:
        return None, None
    cls = m.group("cls")
    name = m.group("name")
    return cls, name


def find_annotation_lines(lines: list[str]) -> list[tuple[int, str]]:
    """Return list of (line_index, annotation_type) for NOT_FOUND/UNMATCHED lines."""
    results = []
    for i, line in enumerate(lines):
        m = ANNOTATION_RE.search(line)
        if m:
            results.append((i, m.group(1)))
    return results


def process_hpp_file(filepath: Path, name_to_addr: dict, apply_fixes: bool) -> tuple[int, int, list[str]]:
    """Process a single hpp file.
    
    Returns:
        (actionable_count, missing_count, fix_messages)
    """
    with open(filepath, "r", encoding="utf-8", errors="replace") as fh:
        lines = fh.readlines()

    annotation_lines = find_annotation_lines(lines)
    if not annotation_lines:
        return 0, 0, []

    actionable = 0
    missing = 0
    messages = []
    modifications: dict[int, str] = {}  # line_idx -> new_line_content

    for line_idx, ann_type in annotation_lines:
        # Try to extract function name from the same line
        cls_prefix, method_name = extract_function_name(lines[line_idx])

        # If not found on same line, try the previous line
        if method_name is None and line_idx > 0:
            cls_prefix, method_name = extract_function_name(lines[line_idx - 1])

        if method_name is None:
            # Could not parse function declaration — treat as missing
            missing += 1
            messages.append(
                f"{filepath.name}:{line_idx + 1}: [PARSE FAILED] "
                f"- could not extract function name"
            )
            continue

        # Build lookup name
        enclosing_class = find_enclosing_class(lines, line_idx)
        if cls_prefix:
            lookup_name = f"{cls_prefix}::{method_name}"
        elif enclosing_class:
            lookup_name = f"{enclosing_class}::{method_name}"
        else:
            lookup_name = method_name

        if lookup_name in name_to_addr:
            addr = name_to_addr[lookup_name]
            actionable += 1
            messages.append(
                f"{filepath.name}:{line_idx + 1}: {lookup_name} "
                f"- hpp says {ann_type} but functions.json has {addr} -> update to // {addr}"
            )
            if apply_fixes:
                old_line = lines[line_idx]
                new_line = ANNOTATION_FULL_RE.sub(f"// {addr}", old_line)
                modifications[line_idx] = new_line
        else:
            missing += 1

    # Apply fixes if requested
    if apply_fixes and modifications:
        for idx, new_line in modifications.items():
            lines[idx] = new_line
        with open(filepath, "w", encoding="utf-8", errors="replace") as fh:
            fh.writelines(lines)

    return actionable, missing, messages


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------
def main() -> None:
    parser = argparse.ArgumentParser(
        description="Reconcile hpp IDA:NOT_FOUND/UNMATCHED annotations against functions.json"
    )
    parser.add_argument(
        "--apply",
        action="store_true",
        help="Auto-fix stale annotations by replacing NOT_FOUND/UNMATCHED with actual addresses",
    )
    parser.add_argument(
        "--verbose",
        action="store_true",
        help="Show ALL entries (not just top 20 actionable + summary)",
    )
    parser.add_argument(
        "--files",
        nargs="*",
        help="Process specific hpp files (default: all src/**/*.hpp)",
    )
    args = parser.parse_args()

    root = Path(__file__).resolve().parent.parent
    
    # Load functions.json
    print("Loading functions.json...", file=sys.stderr)
    name_to_addr = load_functions_json(root)
    print(f"  Loaded {len(name_to_addr)} function addresses", file=sys.stderr)

    # Find hpp files
    if args.files:
        hpp_files = [root / f for f in args.files]
    else:
        hpp_files = sorted(root.glob(SRC_GLOB))

    # Process each file
    total_actionable = 0
    total_missing = 0
    all_actionable: list[str] = []
    all_missing: list[str] = []

    for fpath in hpp_files:
        a, m, msgs = process_hpp_file(fpath, name_to_addr, args.apply)
        total_actionable += a
        total_missing += m
        # Separate actionable and missing messages
        for msg in msgs:
            if "-> update to" in msg:
                all_actionable.append(msg)
            else:
                all_missing.append(msg)

    # Report
    print()
    print("=" * 70)
    print(f"RECONCILIATION REPORT  ({'DRY-RUN' if not args.apply else 'APPLIED'})")
    print("=" * 70)
    print()

    # Top ACTIONABLE
    if all_actionable:
        n_show = len(all_actionable) if args.verbose else min(20, len(all_actionable))
        print(f"--- ACTIONABLE ({total_actionable} total) ---")
        print(f"    These have addresses in functions.json - updating annotation to // 0xADDR")
        print()
        for msg in all_actionable[:n_show]:
            print(f"  {msg}")
        if not args.verbose and len(all_actionable) > 20:
            print(f"  ... and {len(all_actionable) - 20} more")
        print()
    else:
        print("--- ACTIONABLE: 0 ---")
        print("    No stale annotations found.")
        print()

    # TRULY MISSING (sample only if not verbose)
    if all_missing:
        print(f"--- TRULY MISSING ({total_missing} total) ---")
        print(f"    These have no matching entry in functions.json -> needs IDA lookup")
        print()
        if args.verbose:
            for msg in all_missing:
                print(f"  {msg}")
        else:
            # Show first 10
            for msg in all_missing[:10]:
                print(f"  {msg}")
            if len(all_missing) > 10:
                print(f"  ... and {len(all_missing) - 10} more (use --verbose to see all)")
        print()

    # Summary
    total = total_actionable + total_missing
    pct_fixable = (total_actionable / total * 100) if total else 0
    print("=" * 70)
    print("SUMMARY")
    print("=" * 70)
    print(f"  Total annotations scanned:    {total}")
    print(f"  ACTIONABLE (stale, fixed):    {total_actionable}  ({pct_fixable:.1f}%)")
    print(f"  TRULY MISSING (needs IDA):    {total_missing}  ({100 - pct_fixable:.1f}%)")
    print()

    if args.apply and total_actionable > 0:
        print(f"[OK] Applied {total_actionable} fixes to hpp files.")
        print(f"  Run 'git diff' to review changes.")
    elif not args.apply and total_actionable > 0:
        print(f"  Re-run with --apply to auto-fix {total_actionable} stale annotations.")


if __name__ == "__main__":
    main()
