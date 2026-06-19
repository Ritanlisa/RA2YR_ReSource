#!/usr/bin/env python3
"""
normalize_addresses.py — Audit, fix, and match address annotations in .hpp files.

Three modes:
  --check   Scan .hpp for address annotation anomalies (read-only)
  --fix     Auto-fix anomalies (move before-func → line-tail, dedup, normalize case)
  --match   Extract addresses from .hpp → match functions.json → set translated=true

Stdlib only. No external dependencies.
"""

import argparse
import json
import os
import re
import shutil
import sys
from collections import defaultdict
from pathlib import Path

# ── Constants ──────────────────────────────────────────────────────────────

SRC_DIR = Path("src")
FUNCTIONS_JSON = Path("injectFunctionTest/functions.json")
BACKUP_DIR = Path("tools/backups")
REVERSE_HPP = Path("src/core/reverse_marker.hpp")

# Regex patterns
RE_ADDR_TAIL = re.compile(r"//\s*0x([0-9A-Fa-f]+)")  # trailing // 0xADDR
RE_ADDR_IDA = re.compile(r"//\s*IDA:\s*0x([0-9A-Fa-f]+)")  # _funcs.hpp format
RE_ADDR_STANDALONE = re.compile(
    r"^\s*//\s*0x([0-9A-Fa-f]+)\s*(?:\[.*\])?\s*$"
)  # standalone // 0xADDR
RE_LOWERCASE_HEX = re.compile(r"//\s*(?:IDA:\s*)?0x([0-9A-Fa-f]*[a-f][0-9A-Fa-f]*)")
# For dedup: strip trailing // 0xADDR comment (including any annotation text after the hex)
RE_ADDR_COMMENT_END = re.compile(r"\s*//\s*0x[A-Fa-f0-9]+.*$")

# Function declaration detection — matches lines that look like C++ func decls
RE_FUNC_LIKE = re.compile(
    r"^\s*(?:(?:virtual|static|constexpr|inline|explicit|friend)\s+)*"
    r"(?:[\w:]+\s+)*"  # return type
    r"(?:[\w:]+)"  # function name (or class::method)
    r"\s*\([^)]*\)"  # params
    r"\s*(?:const\s*)?"
    r"(?:override\s*)?"
    r"(?:noexcept\s*)?"
    r"(?:=\s*(?:0|default|delete)\s*)?"
    r"\s*(?:;|\{|$)"  # terminator
)

# Lines that are definitely NOT function declarations
RE_NOT_FUNC = re.compile(
    r"^\s*(?://|#|/\*|\*|\}|\s*$|using\s|namespace\s|template\s|typedef\s|extern\s)"
)

# Member offset patterns (NOT addresses — skip these)
RE_MEMBER_OFFSET = re.compile(r"/\*\s*0x[0-9A-Fa-f]+\s*\*/")
RE_OFFSET_COMMENT = re.compile(r"//\s*\+0x[0-9A-Fa-f]+")

# REVERSE macro pattern
RE_REVERSE_MACRO = re.compile(r"REVERSE\s*\(")


# Minimum address value to be treated as a function/data address (not struct offset).
# gamemd.exe functions start at 0x401000; struct member offsets max ~0x3000.
MIN_ADDR_VALUE = 0x10000

# ── Utility Functions ──────────────────────────────────────────────────────


def is_valid_addr(hex_str: str) -> bool:
    """Check if a hex string looks like a function/data address (not a struct offset)."""
    try:
        val = int(hex_str, 16)
        return val >= MIN_ADDR_VALUE
    except ValueError:
        return False


def is_standalone_addr(line: str) -> bool:
    """Check if line is a standalone // 0xADDR comment (no code before)."""
    m = RE_ADDR_STANDALONE.match(line)
    if m:
        return is_valid_addr(m.group(1))
    return False


def extract_addr_from_line(line: str):
    """Extract (raw_addr_str, formatted_addr) from a line, or (None, None).
    Only returns addresses >= MIN_ADDR_VALUE."""
    m = RE_ADDR_TAIL.search(line)
    if m:
        raw = m.group(1)
        if is_valid_addr(raw):
            return raw, raw.upper()
    return None, None


def extract_ida_addr(line: str):
    """Extract address from IDA comment format. Only returns addresses >= MIN_ADDR_VALUE."""
    m = RE_ADDR_IDA.search(line)
    if m:
        raw = m.group(1)
        if is_valid_addr(raw):
            return raw, raw.upper()
    return None, None


def has_lowercase_hex(line: str) -> bool:
    """Check if line has lowercase hex digits in an address annotation."""
    # Ignore member offset patterns
    if RE_MEMBER_OFFSET.search(line) or RE_OFFSET_COMMENT.search(line):
        return False
    # Find address annotations and check case
    for pattern in [RE_ADDR_TAIL, RE_ADDR_IDA]:
        m = pattern.search(line)
        if m:
            raw = m.group(1)
            if not is_valid_addr(raw):
                continue
            if raw != raw.upper():
                return True
    return False


def is_func_declaration(line: str) -> bool:
    """Heuristic: does this line look like a function declaration?
    Excludes member variable declarations with offset comments."""
    if RE_NOT_FUNC.match(line):
        return False
    if "(" not in line or ")" not in line:
        return False
    # Skip lines that look like member vars: "type name; // 0xNN" with small hex
    # These typically have short hex offsets (<= 0xFFF) and no function-call parens context
    stripped = line.split("//")[0].rstrip()
    if not stripped.endswith((";", "{", "}")):
        return False
    # Skip pure member variable declarations (no parens before the ; in meaningful way)
    # Simple check: if it ends with `;` and the content before `//` has no `(` with
    # actual parameter context, it might be a member var.
    if stripped.endswith(";"):
        before_semi = stripped[:-1].strip()
        # If the line has parenthesized content that looks like params, it's a func
        # Otherwise it might be a member var like `int m_Foo; // 0xNN`
        if "(" in before_semi:
            return bool(RE_FUNC_LIKE.match(line))
        else:
            return False
    return bool(RE_FUNC_LIKE.match(line))


def has_inline_body(line: str) -> bool:
    """Check if a func declaration line has an inline body { ... }."""
    before_comment = line.split("//")[0]
    return "{" in before_comment and "}" in before_comment


def is_auto_generated_file(filepath: Path) -> bool:
    """Check if a file is auto-generated (_funcs.hpp, subs*.cpp headers)."""
    name = filepath.name
    # _funcs.hpp files have "Auto-generated" in their header
    if name.endswith("_funcs.hpp"):
        return True
    return False


# ── Check Mode ─────────────────────────────────────────────────────────────


def check_file(filepath: Path) -> list:
    """
    Scan a single .hpp file and return list of violation dicts.
    Each violation: {file, line, type, detail}
    """
    violations = []
    try:
        lines = filepath.read_text(encoding="utf-8-sig").splitlines()
    except Exception as e:
        violations.append(
            {
                "file": str(filepath),
                "line": 0,
                "type": "read_error",
                "detail": str(e),
            }
        )
        return violations

    # Track addresses for duplicate detection: addr → [(line_no, text)]
    addr_map = defaultdict(list)

    # First pass: collect all addresses
    for i, line in enumerate(lines, 1):
        raw, formatted = extract_addr_from_line(line)
        if raw:
            # Skip member offset patterns
            if RE_MEMBER_OFFSET.search(line) or RE_OFFSET_COMMENT.search(line):
                continue
            addr_map[formatted].append((i, line.strip()))

        # Also check IDA format
        raw_ida, formatted_ida = extract_ida_addr(line)
        if raw_ida:
            addr_map[formatted_ida].append((i, line.strip()))

    # Second pass: detect per-line violations
    for i, line in enumerate(lines, 1):
        stripped = line.strip()

        # Skip member offset lines (not address annotations)
        if RE_MEMBER_OFFSET.search(line) or RE_OFFSET_COMMENT.search(line):
            continue

        # --- address_before_func ---
        # Standalone // 0xADDR followed by a function declaration on next line
        if is_standalone_addr(line):
            if i < len(lines):
                next_line = lines[i]  # 0-indexed
                if is_func_declaration(next_line):
                    violations.append(
                        {
                            "file": str(filepath),
                            "line": i,
                            "type": "address_before_func",
                            "detail": f"address line before func decl at line {i+1}: {next_line.strip()[:80]}",
                        }
                    )

        # --- lowercase_hex ---
        # Skip auto-generated files — they'd just get regenerated
        if not is_auto_generated_file(filepath) and has_lowercase_hex(line):
            raw, _ = extract_addr_from_line(line)
            if not raw:
                _, raw = extract_ida_addr(line)
            violations.append(
                {
                    "file": str(filepath),
                    "line": i,
                    "type": "lowercase_hex",
                    "detail": f"lowercase hex in address: 0x{raw}" if raw else line.strip()[:80],
                }
            )

        # --- inline_body_with_address ---
        if has_inline_body(line) and RE_ADDR_TAIL.search(line):
            violations.append(
                {
                    "file": str(filepath),
                    "line": i,
                    "type": "inline_body_with_address",
                    "detail": stripped[:120],
                }
            )

        # --- reverse_in_hpp ---
        if RE_REVERSE_MACRO.search(line):
            # Skip reverse_marker.hpp itself (the macro definition)
            if REVERSE_HPP.resolve() != filepath.resolve():
                violations.append(
                    {
                        "file": str(filepath),
                        "line": i,
                        "type": "reverse_in_hpp",
                        "detail": stripped[:120],
                    }
                )

    # --- duplicate addresses ---
    # Only count // 0xADDR format (not // IDA: 0xADDR) for duplicate detection.
    # // IDA: format is intentionally used for derived classes sharing base class
    # vtable addresses — preserving address info without triggering false duplicates.
    for addr, occurrences in addr_map.items():
        non_ida = [(ln, txt) for ln, txt in occurrences if "ida:" not in txt.lower()]
        if len(non_ida) > 1:
            lines_str = ", ".join(f"L{ln}" for ln, _ in non_ida)
            violations.append(
                {
                    "file": str(filepath),
                    "line": non_ida[0][0],
                    "type": "duplicate_address",
                    "detail": f"0x{addr} appears {len(non_ida)} times (non-IDA): {lines_str}",
                }
            )

    # --- missing_address on func declarations ---
    # Only check files that have at least one address annotation (otherwise
    # flagging every un-annotated function in a clean header is noisy noise).
    # Skip auto-generated files — they have addresses in IDA: format built-in.
    has_any_addr = any(
        (RE_ADDR_TAIL.search(l) and is_valid_addr(RE_ADDR_TAIL.search(l).group(1)))
        or (RE_ADDR_IDA.search(l) and is_valid_addr(RE_ADDR_IDA.search(l).group(1)))
        or is_standalone_addr(l)
        for l in lines
    )
    if has_any_addr and not is_auto_generated_file(filepath):
        for i, line in enumerate(lines, 1):
            if not is_func_declaration(line):
                continue
            if RE_ADDR_TAIL.search(line) or RE_ADDR_IDA.search(line):
                continue
            # Check if previous line has a standalone address
            has_prev_addr = False
            if i > 1:
                prev = lines[i - 2]  # 0-indexed
                if is_standalone_addr(prev):
                    has_prev_addr = True
            if not has_prev_addr:
                violations.append(
                    {
                        "file": str(filepath),
                        "line": i,
                        "type": "missing_address",
                        "detail": line.strip()[:120],
                    }
                )

    return violations


def run_check(paths: list = None, verbose: bool = False) -> dict:
    """Run --check on all .hpp files. Returns counts per violation type."""
    if paths is None:
        paths = sorted(SRC_DIR.rglob("*.hpp"))

    all_violations = []
    for fp in paths:
        file_violations = check_file(fp)
        all_violations.extend(file_violations)

    # Group by type
    by_type = defaultdict(list)
    for v in all_violations:
        by_type[v["type"]].append(v)

    # Print results
    print(f"Scanned {len(paths)} .hpp files")
    print(f"Found {len(all_violations)} total anomalies\n")

    type_labels = {
        "address_before_func": "Address before function declaration (should be on same line)",
        "inline_body_with_address": "Inline body with address annotation",
        "duplicate_address": "Duplicate address annotations",
        "reverse_in_hpp": "REVERSE() macro in header file",
        "lowercase_hex": "Lowercase hex in address annotation",
        "missing_address": "Function declaration without address annotation",
        "read_error": "File read errors",
    }

    for vtype in sorted(by_type.keys()):
        items = by_type[vtype]
        label = type_labels.get(vtype, vtype)
        print(f"[{vtype}] — {len(items)} occurrences — {label}")
        if verbose:
            for item in items[:20]:  # limit output
                print(f"  {item['file']}:{item['line']}: {item['detail']}")
            if len(items) > 20:
                print(f"  ... and {len(items) - 20} more")
        print()

    # Summary
    print("─" * 60)
    for vtype in sorted(by_type.keys()):
        print(f"  {vtype:30s}: {len(by_type[vtype]):5d}")
    print(f"  {'TOTAL':30s}: {len(all_violations):5d}")

    return by_type


# ── Fix Mode ───────────────────────────────────────────────────────────────


def fix_file(filepath: Path, dry_run: bool = False) -> list:
    """
    Apply fixes to a single .hpp file. Returns list of fix descriptions.
    Fixes applied:
      1. Move standalone // 0xADDR line to tail of next func declaration
      2. Deduplicate: keep first occurrence of each address
      3. Normalize hex to uppercase
    Skips auto-generated files (_funcs.hpp etc.)
    """
    if is_auto_generated_file(filepath):
        return []

    try:
        original = filepath.read_text(encoding="utf-8-sig")
    except Exception as e:
        return [f"ERROR reading {filepath}: {e}"]

    lines = original.splitlines()
    changes = []
    new_lines = list(lines)

    # ── Step 1: Collect all addresses in the file ──
    # addr_positions: list of (line_idx, raw_addr, formatted_addr, is_standalone)
    # Only addresses >= MIN_ADDR_VALUE (skip struct member offsets)
    addr_positions = []
    for i, line in enumerate(lines):
        if RE_MEMBER_OFFSET.search(line) or RE_OFFSET_COMMENT.search(line):
            continue
        standalone = is_standalone_addr(line)
        raw, formatted = extract_addr_from_line(line)
        if raw:
            addr_positions.append((i, raw, formatted, standalone))
        else:
            raw_ida, formatted_ida = extract_ida_addr(line)
            if raw_ida:
                addr_positions.append((i, raw_ida, formatted_ida, standalone))

    # ── Step 2: Fix lowercase hex (only for addresses >= MIN_ADDR_VALUE) ──
    for i, line in enumerate(new_lines):
        if not has_lowercase_hex(line):
            continue
        # Find the hex value and uppercase it
        for pattern in [RE_ADDR_TAIL, RE_ADDR_IDA]:
            m = pattern.search(line)
            if m:
                raw = m.group(1)
                if not is_valid_addr(raw):
                    continue
                if raw != raw.upper():
                    new_line = line.replace(f"0x{raw}", f"0x{raw.upper()}", 1)
                    changes.append(
                        f"  L{i+1}: uppercase hex {line.strip()[:80]}"
                    )
                    new_lines[i] = new_line
                    break  # Only fix one address per line

    # ── Step 3: Move standalone addresses to tail of next func decl ──
    indices_to_remove = set()
    for idx, raw, formatted, standalone in addr_positions:
        if not standalone:
            continue
        # Check if next line is a function declaration
        if idx + 1 < len(lines) and is_func_declaration(lines[idx + 1]):
            next_line = new_lines[idx + 1]
            # Don't add if next line already has an address
            if RE_ADDR_TAIL.search(next_line) or RE_ADDR_IDA.search(next_line):
                continue
            # Append address to next line
            addr_str = f" // 0x{formatted}"
            new_lines[idx + 1] = next_line.rstrip() + addr_str
            indices_to_remove.add(idx)
            changes.append(
                f"  L{idx+1}→L{idx+2}: moved // 0x{formatted} to func tail"
            )

    # Remove the now-empty standalone address lines (in reverse order)
    for idx in sorted(indices_to_remove, reverse=True):
        del new_lines[idx]

    # ── Step 4: Deduplicate addresses ──
    # When the same address appears on multiple lines (e.g., base class + derived),
    # convert duplicate // 0xADDR to // IDA: 0xADDR format (preserves address info
    # without triggering duplicate_address anomaly in --check).
    # Only the first occurrence retains its // 0xADDR annotation.
    addr_seen = {}  # formatted_addr → first_line_idx
    for i, line in enumerate(new_lines):
        raw, formatted = extract_addr_from_line(line)
        if not raw:
            raw_ida, formatted_ida = extract_ida_addr(line)
            if raw_ida:
                formatted = formatted_ida
                raw = raw_ida
            else:
                continue
        if formatted in addr_seen:
            # Convert // 0xADDR to // IDA: 0xADDR for the duplicate line
            # Only transform if it's currently in the plain // 0xADDR format (not already IDA:)
            if not RE_ADDR_IDA.search(line):
                new_line = RE_ADDR_TAIL.sub(
                    lambda m: f" // IDA: 0x{m.group(1).upper()}", line, count=1
                )
                if new_line != line:
                    new_lines[i] = new_line
                    changes.append(
                        f"  L{i+1}: converted duplicate 0x{formatted} to // IDA: 0x{formatted} (first at L{addr_seen[formatted]+1})"
                    )
        else:
            addr_seen[formatted] = i

    # ── Step 5: Rebuild content ──
    new_content = "\n".join(new_lines) + "\n"

    if not changes:
        return []

    if dry_run:
        for c in changes:
            print(c)
        return changes

    # Backup
    rel_path = filepath.relative_to(Path.cwd())
    backup_path = BACKUP_DIR / rel_path
    backup_path.parent.mkdir(parents=True, exist_ok=True)
    shutil.copy2(filepath, backup_path)

    # Write
    filepath.write_text(new_content, encoding="utf-8")
    for c in changes:
        print(c)
    print(f"  → wrote {filepath} (backup: {backup_path})")

    return changes


def run_fix(paths: list = None, dry_run: bool = False):
    """Run --fix on all .hpp files."""
    if dry_run:
        print("=== DRY RUN — no files will be modified ===\n")

    if paths is None:
        paths = sorted(SRC_DIR.rglob("*.hpp"))

    total_changes = 0
    files_changed = 0

    for fp in paths:
        changes = fix_file(fp, dry_run=dry_run)
        if changes:
            files_changed += 1
            total_changes += len(changes)

    print(f"\n{'Would fix' if dry_run else 'Fixed'} {total_changes} issues in {files_changed} files")


# ── Match Mode ─────────────────────────────────────────────────────────────


def extract_hpp_addresses(paths: list = None) -> list:
    """
    Extract {file, line, address, declaration} pairs from all .hpp files.
    Returns list of dicts.
    """
    if paths is None:
        paths = sorted(SRC_DIR.rglob("*.hpp"))

    results = []
    for fp in paths:
        try:
            lines = fp.read_text(encoding="utf-8-sig").splitlines()
        except Exception:
            continue

        for i, line in enumerate(lines, 1):
            # Try tail format first
            raw, formatted = extract_addr_from_line(line)
            if raw:
                # Skip member offset patterns
                if RE_MEMBER_OFFSET.search(line) or RE_OFFSET_COMMENT.search(line):
                    continue
                results.append(
                    {
                        "file": str(fp),
                        "line": i,
                        "address": f"0x{formatted}",
                        "declaration": line.strip()[:200],
                    }
                )
                continue

            # Try IDA format
            raw_ida, formatted_ida = extract_ida_addr(line)
            if raw_ida:
                results.append(
                    {
                        "file": str(fp),
                        "line": i,
                        "address": f"0x{formatted_ida}",
                        "declaration": line.strip()[:200],
                    }
                )

    return results


def run_match(paths: list = None, json_path: Path = None, dry_run: bool = False):
    """
    Extract addresses from .hpp, match against functions.json,
    set hook.translated=true and hook.re_file for matches.
    """
    if json_path is None:
        json_path = FUNCTIONS_JSON

    print(f"Loading functions.json from {json_path}...")
    with open(json_path, "r", encoding="utf-8") as f:
        data = json.load(f)

    funcs = data.get("functions", [])
    print(f"  {len(funcs)} entries loaded")

    # Build address→index map (conservative: skip ambiguous)
    addr_index = {}
    addr_count = defaultdict(int)
    for idx, entry in enumerate(funcs):
        addr = entry.get("address", "")
        if addr:
            addr_index[addr] = idx
            addr_count[addr] += 1

    # Mark ambiguous addresses
    ambiguous = {a for a, c in addr_count.items() if c > 1}
    print(f"  {len(ambiguous)} ambiguous addresses (multiple entries)")

    # Extract .hpp addresses
    print(f"\nExtracting addresses from .hpp files...")
    hpp_entries = extract_hpp_addresses(paths)
    print(f"  {len(hpp_entries)} address annotations found")

    # Match
    matched = 0
    new_translated = 0
    conflicts = 0
    skipped_ambiguous = 0
    not_found = 0

    for entry in hpp_entries:
        addr = entry["address"]
        if addr in ambiguous:
            skipped_ambiguous += 1
            continue
        if addr not in addr_index:
            not_found += 1
            continue

        idx = addr_index[addr]
        func_entry = funcs[idx]
        hook = func_entry.get("hook", {})

        # Don't overwrite existing manual translated=true
        if hook.get("translated", False):
            matched += 1
            continue

        # Check for conflicting re_file
        existing_re_file = hook.get("re_file")
        if existing_re_file and existing_re_file != entry["file"]:
            conflicts += 1
            continue

        # Apply match
        hook["translated"] = True
        hook["re_file"] = entry["file"]
        func_entry["hook"] = hook
        matched += 1
        new_translated += 1

    print(f"\n=== Match Results ===")
    print(f"  Total .hpp addresses:     {len(hpp_entries):5d}")
    print(f"  Matched:                   {matched:5d}")
    print(f"  Newly set translated=true: {new_translated:5d}")
    print(f"  Conflicts (different file):{conflicts:5d}")
    print(f"  Skipped (ambiguous addr):  {skipped_ambiguous:5d}")
    print(f"  Not found in functions.json:{not_found:5d}")

    if not dry_run and new_translated > 0:
        print(f"\nWriting updated functions.json...")
        with open(json_path, "w", encoding="utf-8") as f:
            json.dump(data, f, indent=2)
        print("  Done.")
    elif dry_run:
        print("\n=== DRY RUN — functions.json not modified ===")


# ── Main ───────────────────────────────────────────────────────────────────


def main():
    parser = argparse.ArgumentParser(
        description="Normalize address annotations in .hpp files"
    )
    parser.add_argument(
        "--check", action="store_true", help="Audit .hpp for address anomalies (read-only)"
    )
    parser.add_argument(
        "--fix", action="store_true", help="Auto-fix anomalies in .hpp files"
    )
    parser.add_argument(
        "--match", action="store_true", help="Extract addresses → match functions.json → set translated=true"
    )
    parser.add_argument(
        "--dry-run",
        action="store_true",
        help="Preview changes without modifying files (for --fix and --match)",
    )
    parser.add_argument(
        "--verbose", "-v", action="store_true", help="Show individual violations (--check)"
    )
    parser.add_argument(
        "--files",
        nargs="*",
        help="Specific .hpp files to process (default: all src/**/*.hpp)",
    )
    parser.add_argument(
        "--json",
        type=Path,
        default=FUNCTIONS_JSON,
        help="Path to functions.json (default: injectFunctionTest/functions.json)",
    )

    args = parser.parse_args()

    # Validate: must specify exactly one mode
    modes = [args.check, args.fix, args.match]
    if sum(modes) != 1:
        parser.error("Exactly one of --check, --fix, or --match must be specified")

    # Resolve paths
    if args.files:
        paths = [Path(f) for f in args.files]
    else:
        paths = sorted(SRC_DIR.rglob("*.hpp"))

    if not paths:
        print("No .hpp files found.")
        sys.exit(1)

    # Change to project root (where src/ and tools/ live)
    script_dir = Path(__file__).resolve().parent
    project_root = script_dir.parent
    os.chdir(project_root)

    # Relativize paths
    paths = [p.resolve() for p in paths]

    if args.check:
        run_check(paths, verbose=args.verbose)
    elif args.fix:
        run_fix(paths, dry_run=args.dry_run)
    elif args.match:
        run_match(paths, json_path=args.json, dry_run=args.dry_run)


if __name__ == "__main__":
    main()
