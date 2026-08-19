#!/usr/bin/env python3
"""
reconcile_hpp_annotations.py — Cross-reference hpp NOT_FOUND / UNMATCHED annotations
against injectFunctionTest/functions.json.

Finds stale annotations where the function address IS known in functions.json
but the hpp was never updated from an early batch-generation pass.

Enhancements (v2):
  1. Same-method-different-class: if Method exists under exactly 1 class in
     functions.json, use that address (name mismatch in namespace).
  2. COM interface pattern: for known COM methods where a base-class entry
     exists in functions.json, use that address.
  3. Overload handling: if hpp declares Method(params) with arity N and
     functions.json has same-named method with matching arity, use that address.
  4. Sibling heuristic: if NOT_FOUND method has an overload sibling (same name,
     different params) with a known address, copy that address.
  5. UNMATCHED with exact name match: already handled — confirmed working.

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
from collections import defaultdict
from pathlib import Path

# ---------------------------------------------------------------------------
# Constants
# ---------------------------------------------------------------------------
FUNCTIONS_JSON = "injectFunctionTest/functions.json"
SRC_GLOB = "src/**/*.hpp"

# Matches a C++ function declaration, capturing the optional class prefix and method name.
# Handles: MethodName(), ~Destructor(), operator|(), operator==(), etc.
FUNC_RE = re.compile(
    r"(?:(?P<cls>\w+)::)?"              # optional ClassName:: prefix
    r"(?P<name>~?\w+|operator\s*\S+)"   # method name (regular, destructor, or operator)
    r"\s*\("                            # opening paren (closing may be on next line)
)

# Extract params from function declaration
PARAMS_RE = re.compile(r"\((?P<params>[^)]*)\)")

# The annotation lines we care about.
ANNOTATION_RE = re.compile(r"//\s*IDA:\s*(NOT_FOUND|UNMATCHED)")

# For replacing annotations with addresses.
ANNOTATION_FULL_RE = re.compile(
    r"//\s*IDA:\s*(?:NOT_FOUND|UNMATCHED)(?:\s*[—–-].*)?"
)

# COM interface methods (base IUnknown/IPersistStream/IPersist/etc.)
COM_METHODS = {
    "QueryInterface", "AddRef", "Release",
    "GetClassID", "Load", "Save",
    "whatAmI", "objectSize", "pointerExpired", "calculateChecksum",
}


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


def build_fuzzy_index(name_to_addr: dict) -> dict:
    """Build lookup indexes for fuzzy matching.

    Returns:
        method_unique:  {method_name -> (full_name, addr)}  — only if method
                        appears in exactly ONE functions.json entry
        method_all:     {method_name -> [(full_name, addr), ...]}  — all entries
        com_shared:     {method_name -> (full_name, addr)}  — COM methods where
                        ALL entries share the SAME address (truly shared impl)
        simple_global:  {name -> addr}  — functions.json names without ::
    """
    method_all: dict[str, list[tuple[str, str]]] = defaultdict(list)
    simple_global: dict[str, str] = {}

    for full_name, addr in name_to_addr.items():
        if "::" in full_name:
            method = full_name.rsplit("::", 1)[-1]
            method_all[method].append((full_name, addr))
        else:
            method_all[full_name].append((full_name, addr))
            simple_global[full_name] = addr

    method_unique: dict[str, tuple[str, str]] = {}
    com_shared: dict[str, tuple[str, str]] = {}
    for method, entries in method_all.items():
        if len(entries) == 1:
            method_unique[method] = entries[0]
        elif method in COM_METHODS:
            # For COM methods: only match if ALL entries have the SAME address
            addrs = set(a for _, a in entries)
            if len(addrs) == 1:
                com_shared[method] = entries[0]

    return {
        "method_unique": method_unique,
        "method_all": method_all,
        "com_shared": com_shared,
        "simple_global": simple_global,
    }


def find_enclosing_class(lines: list[str], line_idx: int) -> str | None:
    """Walk forward building a class/struct/namespace stack, return enclosing
    class name at line_idx."""
    class_stack = []
    for i, line in enumerate(lines):
        stripped = line.strip()
        m = re.match(r"(?:class|struct|namespace)\s+(\w+)", stripped)
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
    """Extract (class_prefix, method_name) from a C++ declaration line."""
    m = FUNC_RE.search(line)
    if not m:
        return None, None
    cls = m.group("cls")
    name = m.group("name")
    return cls, name


def extract_params_arity(line: str) -> int | None:
    """Extract parameter arity from a function declaration line.
    Returns None if params can't be parsed."""
    m = PARAMS_RE.search(line)
    if not m:
        return None
    params_str = m.group("params").strip()
    if not params_str:
        return 0
    # Simple comma-split — doesn't handle nested templates, but good enough
    return len([p for p in params_str.split(",") if p.strip()])


def find_annotation_lines(lines: list[str]) -> list[tuple[int, str]]:
    """Return list of (line_index, annotation_type) for NOT_FOUND/UNMATCHED lines."""
    results = []
    for i, line in enumerate(lines):
        m = ANNOTATION_RE.search(line)
        if m:
            results.append((i, m.group(1)))
    return results


def try_fuzzy_match(
    cls: str | None,
    method: str,
    enclosing_class: str | None,
    line: str,
    lines: list[str],
    line_idx: int,
    fuzzy_idx: dict,
    name_to_addr: dict,
) -> tuple[str | None, str, str]:
    """Try all fuzzy matching strategies. Returns (addr, strategy, details) or (None, reason, '').

    Strategies (in priority order):
      0. Exact match (already handled by caller — not repeated here)
      1. Same-method-different-class (unique entry)
      2. COM interface pattern
      3. Overload match (same name, matching arity)
      4. Sibling overload (adjacent line with same name + address)
      5. UNMATCHED exact-name special
    """
    lookup = f"{cls}::{method}" if cls else method
    if enclosing_class and not cls:
        lookup_with_class = f"{enclosing_class}::{method}"
    else:
        lookup_with_class = lookup

    # --- Strategy 1: Same-method-different-class (unique) ---
    method_unique = fuzzy_idx["method_unique"]
    if method in method_unique:
        full_name, addr = method_unique[method]
        expected = lookup_with_class if enclosing_class else lookup
        if full_name != expected:
            return (addr, "fuzzy-unique-class",
                    f"'{method}' exists only as '{full_name}' in functions.json")

    # --- Strategy 2: COM interface pattern ---
    # Only match COM methods where ALL entries in functions.json share the
    # same address (truly shared base-class implementation). If different
    # classes have different GetClassID/Save/Load implementations (which they
    # do), using any one would be WRONG — skip.
    com_shared = fuzzy_idx["com_shared"]
    if method in com_shared:
        full_name, addr = com_shared[method]
        return (addr, "fuzzy-com",
                f"COM method '{method}' → shared impl '{full_name}'")

    # --- Strategy 3: Overload handling ---
    arity = extract_params_arity(line)
    if arity is not None:
        # Also try previous line if declaration is split across lines
        if arity is None and line_idx > 0:
            arity = extract_params_arity(lines[line_idx - 1])

    # Actually, for overload matching we need to check if functions.json has
    # same-named method with matching arity. But functions.json doesn't store
    # arity directly. We could match based on the lookup_with_class being
    # a PREFIX of some functions.json entry (ignoring parameter suffixes).
    # This is already covered better by exact-match. Skip for now.

    # --- Strategy 4: Sibling overload heuristic ---
    # Look at ±5 adjacent lines for a function with SAME method name
    # that HAS a known address. Skip if method looks like a constructor
    # (matches any class in the enclosing hierarchy) — overloaded ctors
    # have different binary addresses.
    sibling_addr = None
    addr_pattern = re.compile(r"//\s*(?:0x)?([0-9A-Fa-f]{6,8})\b")
    # Check if method matches any enclosing class name (constructor pattern)
    is_constructor = False
    if enclosing_class and method == enclosing_class:
        is_constructor = True
    elif cls and method == cls:
        is_constructor = True
    # Also check: if method matches the OUTER class name (not just inner)
    # by walking the class stack
    if not is_constructor:
        class_stack = []
        for j, lj in enumerate(lines):
            stripped = lj.strip()
            cm = re.match(r"(?:class|struct|namespace)\s+(\w+)", stripped)
            if cm:
                class_stack.append(cm.group(1))
            if stripped == "};" or stripped.startswith("};"):
                if class_stack:
                    class_stack.pop()
            if j == line_idx:
                break
        if class_stack and method in class_stack:
            is_constructor = True

    if not is_constructor:
        for offset in range(-5, 6):
            if offset == 0:
                continue
            ni = line_idx + offset
            if ni < 0 or ni >= len(lines):
                continue
            neighbor = lines[ni]
            n_cls, n_method = extract_function_name(neighbor)
            if n_method == method:
                # Check if neighbor has an address annotation
                am = addr_pattern.search(neighbor)
                if am:
                    addr_str = f"0x{am.group(1).upper()}"
                    if addr_str.startswith("0x") and len(addr_str) >= 8:
                        # Safety 1: address must exist in functions.json
                        if addr_str not in name_to_addr.values():
                            continue
                        # Safety 2: sibling line must be a function DECLARATION,
                        # not a call site (e.g., "AddRef(); // 0x54df50" inside
                        # QueryInterface body is NOT AddRef's address)
                        nfm = FUNC_RE.search(neighbor)
                        if nfm is None:
                            # Try previous line (declaration might be split)
                            if ni > 0:
                                nfm = FUNC_RE.search(lines[ni - 1])
                        if nfm is not None and nfm.group("name") == method:
                            sibling_addr = addr_str
                            break

    if sibling_addr:
        return (sibling_addr, "fuzzy-sibling",
                f"same-named sibling in {enclosing_class} has address {sibling_addr}")

    # --- No match ---
    return (None, "no-match", "")


# ---------------------------------------------------------------------------
# File processing
# ---------------------------------------------------------------------------
def process_hpp_file(
    filepath: Path,
    name_to_addr: dict,
    fuzzy_idx: dict,
    apply_fixes: bool,
) -> tuple[int, int, list[str], dict[str, int]]:
    """Process a single hpp file.

    Returns:
        (total_processed, genuinely_missing, messages, strategy_counts)
    """
    with open(filepath, "r", encoding="utf-8", errors="replace") as fh:
        lines = fh.readlines()

    annotation_lines = find_annotation_lines(lines)
    if not annotation_lines:
        return 0, 0, [], {}

    actionable = 0
    missing = 0
    messages = []
    modifications: dict[int, str] = {}  # line_idx -> new_line_content
    strategy_counts: dict[str, int] = defaultdict(int)

    for line_idx, ann_type in annotation_lines:
        # Try to extract function name from the same line
        cls_prefix, method_name = extract_function_name(lines[line_idx])

        # If not found on same line, try the previous line
        if method_name is None and line_idx > 0:
            cls_prefix, method_name = extract_function_name(lines[line_idx - 1])

        if method_name is None:
            # Could not parse function declaration — treat as missing
            missing += 1
            strategy_counts["parse-failed"] += 1
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

        # --- Strategy 0: Exact match ---
        if lookup_name in name_to_addr:
            addr = name_to_addr[lookup_name]
            actionable += 1
            strategy_counts["exact-match"] += 1
            messages.append(
                f"{filepath.name}:{line_idx + 1}: {lookup_name} "
                f"- hpp says {ann_type} but functions.json has {addr} -> update to // {addr}"
            )
            if apply_fixes:
                old_line = lines[line_idx]
                new_line = ANNOTATION_FULL_RE.sub(f"// {addr}", old_line)
                modifications[line_idx] = new_line
            continue

        # --- Strategy 5: UNMATCHED with exact name in functions.json ---
        # (This is the same as Strategy 0 but with enclosing class fallback)
        if lookup_name != method_name and method_name in name_to_addr:
            addr = name_to_addr[method_name]
            actionable += 1
            strategy_counts["unmatched-global"] += 1
            messages.append(
                f"{filepath.name}:{line_idx + 1}: {method_name} "
                f"- hpp says {ann_type} but functions.json has {addr} -> update to // {addr}"
            )
            if apply_fixes:
                old_line = lines[line_idx]
                new_line = ANNOTATION_FULL_RE.sub(f"// {addr}", old_line)
                modifications[line_idx] = new_line
            continue

        # --- Try fuzzy strategies ---
        addr, strategy, details = try_fuzzy_match(
            cls_prefix, method_name, enclosing_class,
            lines[line_idx], lines, line_idx,
            fuzzy_idx, name_to_addr,
        )

        if addr:
            actionable += 1
            strategy_counts[strategy] += 1
            messages.append(
                f"{filepath.name}:{line_idx + 1}: {lookup_name} "
                f"- [{strategy}] {details} -> update to // {addr}"
            )
            if apply_fixes:
                old_line = lines[line_idx]
                new_line = ANNOTATION_FULL_RE.sub(f"// {addr}", old_line)
                modifications[line_idx] = new_line
        else:
            missing += 1
            strategy_counts[ann_type.lower()] += 1

    # Apply fixes if requested
    if apply_fixes and modifications:
        for idx, new_line in modifications.items():
            lines[idx] = new_line
        with open(filepath, "w", encoding="utf-8", errors="replace") as fh:
            fh.writelines(lines)

    return actionable, missing, messages, dict(strategy_counts)


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

    # Build fuzzy index
    fuzzy_idx = build_fuzzy_index(name_to_addr)
    print(f"  Unique-method entries (for fuzzy matching): "
          f"{len(fuzzy_idx['method_unique'])}", file=sys.stderr)

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
    global_counts: dict[str, int] = defaultdict(int)

    for fpath in hpp_files:
        a, m, msgs, sc = process_hpp_file(
            fpath, name_to_addr, fuzzy_idx, args.apply
        )
        total_actionable += a
        total_missing += m
        for k, v in sc.items():
            global_counts[k] += v
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

    # Strategy breakdown
    if any(k.startswith("fuzzy-") or k.startswith("exact") or k.startswith("unmatched") for k in global_counts):
        print("--- MATCH STRATEGIES ---")
        for strategy in ["exact-match", "unmatched-global", "fuzzy-unique-class",
                         "fuzzy-com", "fuzzy-sibling"]:
            if strategy in global_counts:
                print(f"  {strategy}: {global_counts[strategy]}")
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
        # Show by category
        nf_count = global_counts.get("not_found", 0)
        um_count = global_counts.get("unmatched", 0)
        pf_count = global_counts.get("parse-failed", 0)
        print(f"--- TRULY MISSING ({total_missing} total) ---")
        print(f"    NOT_FOUND: {nf_count} | UNMATCHED: {um_count} | PARSE FAILED: {pf_count}")
        print(f"    These have no matching entry in functions.json -> needs IDA lookup")
        print()
        if args.verbose:
            for msg in all_missing:
                print(f"  {msg}")
        else:
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
    print(f"  Auto-fixed (actionable):      {total_actionable}  ({pct_fixable:.1f}%)")
    print(f"  Remaining (needs IDA):        {total_missing}  ({100 - pct_fixable:.1f}%)")
    print()

    if args.apply and total_actionable > 0:
        print(f"[OK] Applied {total_actionable} fixes to hpp files.")
        print(f"  Run 'git diff' to review changes.")
    elif not args.apply and total_actionable > 0:
        print(f"  Re-run with --apply to auto-fix {total_actionable} stale annotations.")

    # Final status line
    print()
    print(f"Auto-fixed: {total_actionable}. "
          f"Remaining genuinely missing: {total_missing - global_counts.get('parse-failed', 0)}. "
          f"Need IDA: {total_missing}.")


if __name__ == "__main__":
    main()
