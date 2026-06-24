#!/usr/bin/env python3
"""
resolve_ida_notfound.py — Cross-reference hpp NOT_FOUND/UNMATCHED annotations
against IDA ground-truth function index, auto-fix when possible.

Loads the IDA name→address index (exported from IDA MCP), builds fuzzy
indexes, then matches each NOT_FOUND/UNMATCHED annotation.

Strategies (in priority order):
  1. EXACT: hpp lookup_name appears verbatim in IDA index
  2. METHOD_UNIQUE: method-only name appears under exactly ONE class in IDA
  3. METHOD_CLASS_MATCH: method-only name appears under multiple classes,
     but the hpp enclosing class matches ONE of them
  4. CASE_INSENSITIVE: case-insensitive exact match on method-only name
  5. Still unresolved → leave as is

Usage:
    python tools/resolve_ida_notfound.py           # dry-run
    python tools/resolve_ida_notfound.py --apply   # apply fixes
    python tools/resolve_ida_notfound.py --verbose # show all entries
"""

import argparse
import json
import re
import sys
from collections import defaultdict
from pathlib import Path


# ---------------------------------------------------------------------------
# Constants
# ---------------------------------------------------------------------------
IDA_INDEX = ".omo/ida_function_index.json"
SRC_GLOB = "src/**/*.hpp"

# Common method names that are too generic for case-insensitive unique matching.
# These are typically container methods, accessors, or generic operations that
# exist in many unrelated classes — matching them case-insensitively causes
# false positives (e.g., `begin()` → `MovementAI::Begin`).
CI_UNIQUE_BLOCKLIST: set[str] = {
    "begin", "end", "ptr", "read", "write", "size", "get", "set",
    "init", "clear", "reset", "open", "close", "start", "stop",
    "load", "save", "lock", "unlock", "add", "remove", "insert",
    "delete", "find", "sort", "check", "test", "run", "create",
    "destroy", "enable", "disable", "push", "pop", "next", "prev",
    "step", "skip", "peek", "seek", "flush", "fill", "copy",
    "move", "swap", "back", "front", "top", "first", "last",
    "name", "type", "data", "value", "key", "index", "count",
    "length", "empty", "full", "valid", "done", "ready", "active",
    "alloc", "free", "release", "acquire", "attach", "detach",
    "connect", "disconnect", "bind", "listen", "accept", "send",
    "recv", "update", "draw", "render", "paint", "refresh",
    "show", "hide", "dump", "debug", "trace", "log", "print",
    "format", "parse", "scan", "hash", "cmp", "eq", "lt", "gt",
    "min", "max", "abs", "clamp", "lerp",
}

# Matches a C++ function declaration
FUNC_RE = re.compile(
    r"(?:(?P<cls>\w+)::)?"              # optional ClassName:: prefix
    r"(?P<name>~?\w+|operator\s*\S+)"   # method name
    r"\s*\("
)

# The annotation lines we care about
ANNOTATION_RE = re.compile(r"//\s*IDA:\s*(NOT_FOUND|UNMATCHED)")
ANNOTATION_FULL_RE = re.compile(
    r"//\s*IDA:\s*(?:NOT_FOUND|UNMATCHED)(?:\s*[—–-].*)?"
)


# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------
def load_ida_index(root: Path) -> dict[str, str]:
    """Load IDA name→address index from exported JSON."""
    path = root / IDA_INDEX
    if not path.exists():
        print(f"ERROR: {path} not found. Run IDA MCP export first.", file=sys.stderr)
        sys.exit(1)
    with open(path, "r", encoding="utf-8") as fh:
        data = json.load(fh)
    name_to_addr: dict[str, str] = {}
    for f in data.get("functions", []):
        name = f["name"]
        addr = f["addr"]
        if name not in name_to_addr:
            name_to_addr[name] = addr
    return name_to_addr


def build_ida_fuzzy(name_to_addr: dict[str, str]) -> dict:
    """Build fuzzy lookup indexes from IDA name→address map."""
    # Build (exact, lower) indexes
    name_lower: dict[str, list[tuple[str, str]]] = defaultdict(list)
    for name, addr in name_to_addr.items():
        name_lower[name.lower()].append((name, addr))

    # Unique lower: only if exactly 1 name maps to this lowercase
    name_lower_unique: dict[str, tuple[str, str]] = {}
    for low, entries in name_lower.items():
        if len(entries) == 1:
            name_lower_unique[low] = entries[0]

    # Method-only index: {method → [(full_name, addr), ...]}
    method_all: dict[str, list[tuple[str, str]]] = defaultdict(list)
    method_lower_all: dict[str, list[tuple[str, str]]] = defaultdict(list)
    for name, addr in name_to_addr.items():
        if "::" in name:
            meth = name.rsplit("::", 1)[-1]
            method_all[meth].append((name, addr))
            method_lower_all[meth.lower()].append((name, addr))

    # Method unique (exact case): method appears under exactly 1 class
    method_unique: dict[str, tuple[str, str]] = {}
    for meth, entries in method_all.items():
        if len(entries) == 1:
            method_unique[meth] = entries[0]

    # Method unique (case-insensitive): lowercase method appears under exactly 1 class
    method_lower_unique: dict[str, tuple[str, str]] = {}
    for low, entries in method_lower_all.items():
        if len(entries) == 1:
            method_lower_unique[low] = entries[0]

    return {
        "name_to_addr": name_to_addr,
        "name_lower": name_lower,
        "name_lower_unique": name_lower_unique,
        "method_all": method_all,
        "method_lower_all": method_lower_all,
        "method_unique": method_unique,
        "method_lower_unique": method_lower_unique,
    }


def extract_function_name(line: str) -> tuple[str | None, str | None]:
    """Extract (class_prefix, method_name) from a C++ declaration line."""
    m = FUNC_RE.search(line)
    if not m:
        return None, None
    return m.group("cls"), m.group("name")


def find_enclosing_class(lines: list[str], line_idx: int) -> str | None:
    """Walk lines building a class/struct/namespace stack, return enclosing class."""
    class_stack = []
    for i, line in enumerate(lines):
        stripped = line.strip()
        m = re.match(r"(?:class|struct|namespace)\s+(\w+)", stripped)
        if m:
            class_stack.append(m.group(1))
        if stripped == "};" or stripped.startswith("};"):
            if class_stack:
                class_stack.pop()
        if i == line_idx:
            return class_stack[-1] if class_stack else None
    return None


def find_annotation_lines(lines: list[str]) -> list[tuple[int, str]]:
    """Return list of (line_index, annotation_type) for NOT_FOUND/UNMATCHED."""
    results = []
    for i, line in enumerate(lines):
        m = ANNOTATION_RE.search(line)
        if m:
            results.append((i, m.group(1)))
    return results


# ---------------------------------------------------------------------------
# Matching logic
# ---------------------------------------------------------------------------
def _match_class_context(
    method_name: str,
    class_ctx: str,
    method_entries: list[tuple[str, str]],
    case_sensitive: bool,
) -> tuple[str | None, str | None, str]:
    """Try to find a unique match in method_entries using class context.

    Tries multiple strategies:
      - exact class match: ClassName::Method
      - prefix match: ClassName*::Method (e.g., HashTable matches HashTableClass)
      - case-insensitive variants
    """
    if not class_ctx:
        return None, None, ""

    def class_matches(entry_name: str, ctx: str, ci: bool) -> bool:
        """Check if entry_name's class part matches ctx."""
        entry_class = entry_name.split("::", 1)[0]
        if ci:
            return entry_class.lower() == ctx.lower()
        return entry_class == ctx

    def class_prefix_matches(entry_name: str, ctx: str, ci: bool) -> bool:
        entry_class = entry_name.split("::", 1)[0]
        if ci:
            return entry_class.lower().startswith(ctx.lower())
        return entry_class.startswith(ctx)

    # Try exact class match first
    matching = [(n, a) for n, a in method_entries
                if class_matches(n, class_ctx, not case_sensitive)]
    if len(matching) == 1:
        return (matching[0][1], matching[0][0],
                f"'{method_name}' → '{matching[0][0]}' (class '{class_ctx}' exact)")
    elif len(matching) > 1:
        return (matching[0][1], matching[0][0],
                f"'{method_name}' → {len(matching)} overloads in '{class_ctx}', using '{matching[0][0]}'")

    # Try prefix match
    matching = [(n, a) for n, a in method_entries
                if class_prefix_matches(n, class_ctx, not case_sensitive)]
    if len(matching) == 1:
        return (matching[0][1], matching[0][0],
                f"'{method_name}' → '{matching[0][0]}' (class prefix '{class_ctx}*')")
    elif len(matching) > 1 and len(matching) <= 5:
        # Still ambiguous but small enough to try exact prefix
        return None, None, ""

    return None, None, ""


def try_ida_match(
    cls_prefix: str | None,
    method_name: str,
    enclosing_class: str | None,
    ida_idx: dict,
) -> tuple[str | None, str, str]:
    """Try all strategies to match a function to an IDA entry.

    Returns: (addr, strategy_name, details)
            or (None, "no-match", reason)
    """
    name_to_addr = ida_idx["name_to_addr"]
    name_lower_unique = ida_idx["name_lower_unique"]
    method_unique = ida_idx["method_unique"]
    method_lower_unique = ida_idx["method_lower_unique"]
    method_all = ida_idx["method_all"]
    method_lower_all = ida_idx["method_lower_all"]

    # Determine class context (from inline prefix or enclosing class)
    class_ctx = cls_prefix or enclosing_class

    # Build lookup_name variants
    lookup_variants = []
    if cls_prefix:
        lookup_variants.append(f"{cls_prefix}::{method_name}")
    if enclosing_class and enclosing_class != cls_prefix:
        lookup_variants.append(f"{enclosing_class}::{method_name}")
    # Strip 'gamemd::' and 'ra2::game::' namespace prefixes
    for lv in list(lookup_variants):
        for ns in ("gamemd::", "ra2::game::"):
            if lv.startswith(ns):
                lookup_variants.append(lv[len(ns):])
    if method_name not in {v.rsplit("::", 1)[-1] if "::" in v else v for v in lookup_variants}:
        lookup_variants.append(method_name)

    # Strategy 1: Exact match (try all variants)
    for lv in lookup_variants:
        if lv in name_to_addr:
            return (name_to_addr[lv], "ida-exact",
                    f"'{lv}' matches IDA entry verbatim")

    # Strategy 2: Method-only unique (exact case)
    if method_name in method_unique:
        full_name, addr = method_unique[method_name]
        return (addr, "ida-method-unique",
                f"'{method_name}' exists only as '{full_name}' in IDA")

    # Strategy 3: Method-only with class context match (exact case)
    if method_name in method_all:
        addr, matched, detail = _match_class_context(
            method_name, class_ctx, method_all[method_name], case_sensitive=True)
        if addr:
            return (addr, "ida-class-match", detail)

    # Strategy 4: Case-insensitive method unique
    # SKIP if method name is in blocklist (too generic, high false-positive risk)
    mlow = method_name.lower()
    if mlow not in CI_UNIQUE_BLOCKLIST and mlow in method_lower_unique:
        full_name, addr = method_lower_unique[mlow]
        return (addr, "ida-method-ci-unique",
                f"'{method_name}' (ci) matches only '{full_name}' in IDA")

    # Strategy 5: Case-insensitive exact match (full name variants)
    for lv in lookup_variants:
        ll = lv.lower()
        if ll in name_lower_unique:
            full_name, addr = name_lower_unique[ll]
            return (addr, "ida-full-ci-unique",
                    f"'{lv}' (ci) matches only '{full_name}' in IDA")

    # Strategy 6: Case-insensitive method with class context
    if mlow in method_lower_all:
        addr, matched, detail = _match_class_context(
            method_name, class_ctx, method_lower_all[mlow], case_sensitive=False)
        if addr:
            return (addr, "ida-ci-class-match", detail)

    return (None, "no-ida-match", f"'{method_name}' not in IDA index")


# ---------------------------------------------------------------------------
# File processing
# ---------------------------------------------------------------------------
def process_hpp_file(
    filepath: Path,
    ida_idx: dict,
    apply_fixes: bool,
) -> tuple[int, int, list[str], dict[str, int]]:
    with open(filepath, "r", encoding="utf-8", errors="replace") as fh:
        lines = fh.readlines()

    annotation_lines = find_annotation_lines(lines)
    if not annotation_lines:
        return 0, 0, [], {}

    fixed = 0
    missing = 0
    messages = []
    modifications: dict[int, str] = {}
    strategy_counts: dict[str, int] = defaultdict(int)

    for line_idx, ann_type in annotation_lines:
        cls_prefix, method_name = extract_function_name(lines[line_idx])

        # Try previous line if not found on same line
        if method_name is None and line_idx > 0:
            cls_prefix, method_name = extract_function_name(lines[line_idx - 1])

        if method_name is None:
            missing += 1
            strategy_counts["parse-failed"] += 1
            messages.append(
                f"{filepath.name}:{line_idx + 1}: [PARSE FAILED]")
            continue

        enclosing_class = find_enclosing_class(lines, line_idx)

        addr, strategy, details = try_ida_match(
            cls_prefix, method_name, enclosing_class, ida_idx
        )

        if addr:
            fixed += 1
            strategy_counts[strategy] += 1
            messages.append(
                f"  [{strategy}] {filepath.name}:{line_idx + 1}: "
                f"{details} → {addr}"
            )
            if apply_fixes:
                old_line = lines[line_idx]
                new_line = ANNOTATION_FULL_RE.sub(f"// {addr}", old_line)
                modifications[line_idx] = new_line
        else:
            missing += 1
            strategy_counts[f"remaining-{ann_type.lower()}"] += 1

    if apply_fixes and modifications:
        for idx, new_line in modifications.items():
            lines[idx] = new_line
        with open(filepath, "w", encoding="utf-8", errors="replace") as fh:
            fh.writelines(lines)

    return fixed, missing, messages, dict(strategy_counts)


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------
def main() -> None:
    parser = argparse.ArgumentParser(
        description="Resolve hpp NOT_FOUND/UNMATCHED annotations using IDA index"
    )
    parser.add_argument("--apply", action="store_true",
                        help="Apply fixes to hpp files")
    parser.add_argument("--verbose", action="store_true",
                        help="Show all entries")
    parser.add_argument("--files", nargs="*",
                        help="Process specific hpp files")
    args = parser.parse_args()

    root = Path(__file__).resolve().parent.parent

    print("Loading IDA index...", file=sys.stderr)
    name_to_addr = load_ida_index(root)
    print(f"  Loaded {len(name_to_addr)} function names", file=sys.stderr)

    ida_idx = build_ida_fuzzy(name_to_addr)
    print(f"  Unique method names (exact): {len(ida_idx['method_unique'])}", file=sys.stderr)
    print(f"  Unique method names (ci):    {len(ida_idx['method_lower_unique'])}", file=sys.stderr)
    print(f"  Unique full names (ci):      {len(ida_idx['name_lower_unique'])}", file=sys.stderr)
    print(file=sys.stderr)

    # Find hpp files
    if args.files:
        hpp_files = [root / f for f in args.files]
    else:
        hpp_files = sorted(root.glob(SRC_GLOB))

    total_fixed = 0
    total_remaining = 0
    all_fixed: list[str] = []
    global_counts: dict[str, int] = defaultdict(int)

    for fpath in hpp_files:
        f, r, msgs, sc = process_hpp_file(fpath, ida_idx, args.apply)
        total_fixed += f
        total_remaining += r
        for k, v in sc.items():
            global_counts[k] += v
        all_fixed.extend(msgs)

    # Report
    print("=" * 70)
    print(f"IDA NOT_FOUND RESOLUTION REPORT  ({'APPLIED' if args.apply else 'DRY-RUN'})")
    print("=" * 70)
    print()

    # Strategy breakdown
    print("--- MATCH STRATEGIES ---")
    for strat in ["ida-exact", "ida-method-unique", "ida-class-match",
                  "ida-class-match-ambig", "ida-method-ci-unique",
                  "ida-full-ci-unique", "ida-ci-class-match",
                  "ida-ci-class-match-ambig"]:
        if strat in global_counts:
            print(f"  {strat}: {global_counts[strat]}")
    print(f"  parse-failed: {global_counts.get('parse-failed', 0)}")
    print(f"  remaining-NOT_FOUND: {global_counts.get('remaining-not_found', 0)}")
    print(f"  remaining-UNMATCHED: {global_counts.get('remaining-unmatched', 0)}")
    print()

    # Fixed list
    if all_fixed:
        n_show = len(all_fixed) if args.verbose else min(50, len(all_fixed))
        print(f"--- FIXED ({total_fixed} total) ---")
        for msg in all_fixed[:n_show]:
            print(msg)
        if not args.verbose and len(all_fixed) > 50:
            print(f"  ... and {len(all_fixed) - 50} more")
        print()

    # Summary
    total = total_fixed + total_remaining
    print("=" * 70)
    print("SUMMARY")
    print("=" * 70)
    print(f"  Total annotations:      {total}")
    print(f"  Fixed by IDA match:     {total_fixed}")
    print(f"  Still genuinely missing: {total_remaining - global_counts.get('parse-failed', 0)}")
    print(f"  Parse failures:         {global_counts.get('parse-failed', 0)}")
    print()

    if args.apply and total_fixed > 0:
        print(f"[OK] Applied {total_fixed} fixes.")
    elif not args.apply and total_fixed > 0:
        print(f"  Re-run with --apply to fix {total_fixed} annotations.")

    # Final line
    print(f"\nFixed by IDA exact/match: {total_fixed}. "
          f"Still genuinely missing: {total_remaining - global_counts.get('parse-failed', 0)}.")


if __name__ == "__main__":
    main()
