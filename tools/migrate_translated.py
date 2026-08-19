#!/usr/bin/env python3
"""
Migration script for functions.json: adds 'translated' and 'named' fields to hook objects.

Usage:
    python tools/migrate_translated.py

What it does:
1. Scans src/*.cpp for real function implementations (not stubs/TODO)
2. Updates injectFunctionTest/functions.json:
   - hook.named = true/false (based on function name)
   - hook.translated = true/false (based on src/ scan)

Detection of "real" implementations:
- Function body has >= 5 effective lines (non-empty, non-brace, non-comment-only)
- No stub/TODO/PENDING markers in body
- Not a trivial getter/setter with just a single return

Memory: loads ~16MB JSON (~60-80MB parsed). Works on 32GB machines.
"""

import json
import os
import re
import sys
from pathlib import Path

PROJECT_ROOT = Path(__file__).resolve().parent.parent
SRC_DIR = PROJECT_ROOT / "src"
FUNCTIONS_JSON = PROJECT_ROOT / "injectFunctionTest" / "functions.json"
BACKUP_JSON = PROJECT_ROOT / "injectFunctionTest" / "functions.json.bak"

# ── Stub detection patterns ──────────────────────────────────────
STUB_KEYWORDS = re.compile(
    r'\bTODO\b|\bSTUB\b|\bFIXME\b|\bPENDING\b|\bplaceholder\b',
    re.IGNORECASE
)

# Lines that are pure stubs (single statement, no real logic)
STUB_RETURN_LINE = re.compile(
    r'^\s*return\s+(0|false|true|nullptr|0\.0f?|""|L""|=\s*\w+)\s*;\s*$'
)

# ── Function definition detection ────────────────────────────────
# Matches lines like:  void ClassName::method(params) const {
# or:  REVERSE(0xADDR, "...", "mode")\n  ReturnType funcName(params) {
CONTROL_KEYWORDS = {
    'if', 'while', 'for', 'switch', 'catch', 'else', 'do',
    'case', 'default', 'typedef', 'using', 'namespace',
    'class', 'struct', 'enum', 'union', 'template', 'extern',
    'goto', 'return', 'break', 'continue',
}

def is_signature_start(line: str) -> bool:
    """Check if a line starts a function signature (has '(' but no '{' on same line,
    or has both if single-line signature). Skips comments, preprocessor, control flow."""
    stripped = line.strip()
    if not stripped:
        return False
    if stripped.startswith('//') or stripped.startswith('/*') or stripped.startswith('*'):
        return False
    if stripped.startswith('#'):
        return False
    if '(' not in stripped:
        return False
    # Skip control flow keywords
    first_word = stripped.split()[0] if stripped.split() else ""
    first_word = first_word.rstrip(':;')
    if first_word in CONTROL_KEYWORDS:
        return False
    # Must have a word-like token before '(' (not just a macro/expr)
    paren_idx = stripped.find('(')
    if paren_idx <= 0:
        return False
    before_paren = stripped[:paren_idx].rstrip()
    if not before_paren:
        return False
    last_word = before_paren.split()[-1] if before_paren.split() else ""
    # Must be a valid identifier
    if not re.match(r'^[\w:]+$', last_word):
        return False
    # Skip single-word lines that are function calls, not definitions
    # Heuristic: function definitions have return type before name (2+ words before '(')
    words_before = before_paren.split()
    if len(words_before) < 2:
        return False
    return True


def extract_func_name(sig_lines: list[str]) -> str | None:
    """Extract function name from signature lines.
    Finds the word right before '(' in the combined signature.
    """
    combined = ' '.join(l.strip() for l in sig_lines)
    # Remove REVERSE() macro if present (it contains '(' too — find the right '(')
    # Strip REVERSE(0xADDR, "...", "...")
    combined = re.sub(r'REVERSE\s*\([^)]*\)', '', combined)
    # Find main '(' that starts parameters (the first '(' after removing REVERSE)
    paren_pos = combined.find('(')
    if paren_pos <= 0:
        return None
    before_paren = combined[:paren_pos].strip()
    # Last word before '(' is the function name
    words = before_paren.split()
    if not words:
        return None
    name = words[-1]
    # Clean up: remove leading * for function pointers, & for references
    name = name.lstrip('*&')
    # Must be a valid C++ function identifier (may contain ::)
    if not re.match(r'^[\w:]+$', name):
        return None
    if len(name) <= 2:
        return None
    return name


def count_effective_lines(body_lines: list[str]) -> int:
    """Count lines that contain actual code (not braces, not empty, not pure comments)."""
    count = 0
    for line in body_lines:
        stripped = line.strip()
        if not stripped:
            continue
        if stripped in ('{', '}'):
            continue
        if stripped.startswith('//') or stripped.startswith('/*') or stripped == '*':
            continue
        count += 1
    return count


def has_stub_markers(body_lines: list[str]) -> bool:
    """Check if body contains stub/TODO/PENDING markers."""
    for line in body_lines:
        if STUB_KEYWORDS.search(line):
            return True
        # Also check for "return 0; // ..." stub pattern
        if STUB_RETURN_LINE.match(line):
            # Only flag if this is the ONLY effective line
            pass
    # Check if all effective lines are just return stubs
    effective = [l for l in body_lines 
                 if l.strip() and l.strip() not in ('{', '}') 
                 and not l.strip().startswith('//')]
    if len(effective) <= 1 and effective:
        if STUB_RETURN_LINE.match(effective[0]):
            return True
    return False


def extract_functions_from_file(filepath: Path) -> list[tuple[str, bool]]:
    """
    Parse a .cpp file and extract function names with real/stub classification.
    Handles both single-line signatures (void foo() {) and multi-line:
      ReturnType funcName(
          param1,
          param2)
      {
    Returns list of (function_name, is_real) tuples.
    """
    try:
        with open(filepath, 'r', encoding='utf-8') as f:
            lines = f.readlines()
    except Exception:
        return []

    results = []
    i = 0
    n = len(lines)

    while i < n:
        line = lines[i]

        # Step 1: Find a potential function signature start
        if not is_signature_start(line):
            i += 1
            continue

        # Step 2: Accumulate signature lines until we find '{'
        sig_lines = []
        found_brace = False
        brace_line_idx = -1

        for j in range(i, min(i + 20, n)):  # max 20 lines for signature
            sig_lines.append(lines[j])
            if '{' in lines[j]:
                found_brace = True
                brace_line_idx = j
                break

        if not found_brace:
            i += 1
            continue

        # Step 3: Extract function name from signature lines
        func_name = extract_func_name(sig_lines)
        if func_name is None:
            i = brace_line_idx + 1
            continue

        # Step 4: Track function body (brace depth)
        brace_line = lines[brace_line_idx]
        brace_col = brace_line.find('{')
        after_brace = brace_line[brace_col + 1:].strip()
        body_lines = []
        if after_brace and after_brace != '}':
            body_lines.append(after_brace)

        depth = 1
        j = brace_line_idx + 1
        while j < min(brace_line_idx + 500, n) and depth > 0:
            l = lines[j]
            for ch in l:
                if ch == '{':
                    depth += 1
                elif ch == '}':
                    depth -= 1
                    if depth == 0:
                        close_idx = l.find('}')
                        before_close = l[:close_idx].strip()
                        if before_close:
                            body_lines.append(before_close)
                        break
            if depth == 0:
                body_lines.append(l)  # include closing brace line for stub detection
                i = j + 1
                break
            body_lines.append(l)
            j += 1
        else:
            # Unclosed brace or too long — skip past candidate
            i = brace_line_idx + 1
            continue

        # Step 5: Classify the function
        effective = count_effective_lines(body_lines)
        is_stub = has_stub_markers(body_lines)
        is_real = (effective >= 5 and not is_stub)

        results.append((func_name, is_real))

    return results


def scan_all_sources(src_dir: Path) -> set[str]:
    """Scan all .cpp files in src_dir and return set of translated function names."""
    translated = set()
    cpp_files = sorted(src_dir.rglob("*.cpp"))

    print(f"Scanning {len(cpp_files)} .cpp files for real implementations...")

    for fp in cpp_files:
        funcs = extract_functions_from_file(fp)
        real_funcs = [name for name, is_real in funcs if is_real]
        if real_funcs:
            rel = fp.relative_to(PROJECT_ROOT)
            print(f"  {rel}: {len(real_funcs)} real / {len(funcs)} total")
            translated.update(real_funcs)

    return translated


def migrate_functions_json(json_path: Path, translated_set: set[str]) -> dict:
    """Load functions.json, add named/translated fields, return updated data."""
    print(f"\nLoading {json_path}...")
    with open(json_path, 'r', encoding='utf-8') as f:
        data = json.load(f)

    functions = data.get("functions", [])
    total = len(functions)
    named_count = 0
    translated_count = 0

    print(f"Processing {total} function entries...")

    for func in functions:
        name = func.get("name", "")
        hook = func.get("hook", {})

        # Compute named: not sub_ and not nullsub_
        is_named = not name.startswith("sub_") and not name.startswith("nullsub")
        hook["named"] = is_named
        if is_named:
            named_count += 1

        # Compute translated: name is in scanned set
        is_translated = name in translated_set
        hook["translated"] = is_translated
        if is_translated:
            translated_count += 1

    print(f"  named=true: {named_count}")
    print(f"  translated=true: {translated_count}")
    print(f"  translated/named ratio: {translated_count}/{named_count} ({100*translated_count/max(1,named_count):.1f}%)")

    return data


def verify(data: dict) -> bool:
    """Verify all entries have translated and named fields."""
    functions = data.get("functions", [])
    missing = []
    for i, func in enumerate(functions):
        hook = func.get("hook", {})
        if "translated" not in hook:
            missing.append(f"entry {i} ({func.get('name', '?')}): missing 'translated'")
        if "named" not in hook:
            missing.append(f"entry {i} ({func.get('name', '?')}): missing 'named'")
    if missing:
        print(f"\nVERIFICATION FAILED: {len(missing)} entries missing fields:")
        for m in missing[:10]:
            print(f"  {m}")
        return False
    print(f"\nVERIFICATION PASSED: all {len(functions)} entries have 'translated' and 'named' fields")
    return True


def main():
    print("=" * 60)
    print("functions.json migration: adding 'translated' + 'named' fields")
    print("=" * 60)

    # Step 1: Scan sources
    print("\n[Step 1] Scanning src/ for translated functions...")
    translated_set = scan_all_sources(SRC_DIR)
    print(f"\nTotal translated function names found: {len(translated_set)}")

    # Step 2: Load and migrate functions.json
    print(f"\n[Step 2] Migrating functions.json...")
    data = migrate_functions_json(FUNCTIONS_JSON, translated_set)

    # Step 3: Verify
    print(f"\n[Step 3] Verifying...")
    if not verify(data):
        print("ERROR: Verification failed. Aborting write.")
        sys.exit(1)

    # Step 4: Backup and write
    print(f"\n[Step 4] Writing updated functions.json...")
    if BACKUP_JSON.exists():
        print(f"  Removing old backup: {BACKUP_JSON}")
        os.remove(BACKUP_JSON)
    os.rename(FUNCTIONS_JSON, BACKUP_JSON)
    print(f"  Backup saved to: {BACKUP_JSON}")

    with open(FUNCTIONS_JSON, 'w', encoding='utf-8') as f:
        json.dump(data, f, indent=2, ensure_ascii=False)

    file_size = FUNCTIONS_JSON.stat().st_size
    print(f"  Written: {FUNCTIONS_JSON} ({file_size / 1024 / 1024:.1f} MB)")
    print("\nDone! Migration complete.")


if __name__ == "__main__":
    main()
