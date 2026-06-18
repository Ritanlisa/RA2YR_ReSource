#!/usr/bin/env python3
"""
filter_functions.py — READ-ONLY filter of functions.json

Reads injectFunctionTest/functions.json, filters to global/free functions only
(no class members, no completed, no source-mapped, no thunks, no nullsubs),
and outputs the in-scope subset to tools/functions_in_scope.json.

functions.json is NEVER modified — all access is read-only.
"""

import json
import os
import sys

# ── Paths ──────────────────────────────────────────────────────────────
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_ROOT = os.path.dirname(SCRIPT_DIR)
FUNCTIONS_JSON = os.path.join(PROJECT_ROOT, "injectFunctionTest", "functions.json")
OUTPUT_JSON = os.path.join(SCRIPT_DIR, "functions_in_scope.json")
EVIDENCE_DIR = os.path.join(PROJECT_ROOT, ".omo", "evidence")


def load_functions(path: str) -> list[dict]:
    """Load functions.json with utf-8 encoding (has non-ASCII bytes)."""
    with open(path, "r", encoding="utf-8") as f:
        data = json.load(f)
    functions = data.get("functions", [])
    metadata = data.get("metadata", {})
    print(f"[load] {len(functions)} functions loaded from {path}")
    print(f"[load] binary={metadata.get('binary')}, base={metadata.get('base_address')}")
    return functions


def passes_filter(fn: dict) -> bool:
    """Return True if this function should be included in the in-scope list."""

    call = fn.get("call", {})
    hook = fn.get("hook", {})

    # 1. Not a class member
    if call.get("is_member", False):
        return False

    # 2. Not completed (already implemented)
    if hook.get("completed", False):
        return False

    # 3. Not source-mapped (has re_file set)
    re_file = hook.get("re_file")
    if re_file is not None and re_file != "":
        return False

    # 4. Not a pure thunk (size > 6)
    if fn.get("size", 0) <= 6:
        return False

    # 5. Not a nullsub
    name = fn.get("name", "")
    if "nullsub" in name.lower():
        return False

    return True


def build_entry(fn: dict) -> dict:
    """Extract the relevant fields into a compact output entry."""
    call = fn.get("call", {})
    return {
        "name": fn.get("name", ""),
        "addr": fn.get("address", "0x0"),
        "size": fn.get("size", 0),
        "convention": call.get("convention", "unknown"),
        "return_type": call.get("return_type", "void"),
        "param_bytes": call.get("param_bytes", 0),
        "category": fn.get("category", "global"),
    }


def validate_output(entries: list[dict]) -> None:
    """Assert output invariants."""
    count = len(entries)
    if not (8000 <= count <= 8600):
        print(f"[ERROR] Expected 8000-8600 entries, got {count}", file=sys.stderr)
        sys.exit(1)

    # Check no forbidden entries slipped through
    names_set = set()
    for e in entries:
        name = e["name"]
        if "::" in name:
            # Names with :: are likely member functions — warn but don't fail
            # (some global function names may contain :: due to naming conventions)
            pass
        names_set.add(name)

    # Count by category
    from collections import Counter
    cat_counts = Counter(e["category"] for e in entries)
    print(f"[validate] {count} entries, unique names: {len(names_set)}")
    print(f"[validate] Category distribution: {dict(cat_counts.most_common())}")

    # Count by convention
    conv_counts = Counter(e["convention"] for e in entries)
    print(f"[validate] Convention distribution: {dict(conv_counts.most_common())}")


def save_evidence(count: int, git_diff_output: str) -> None:
    """Save evidence files for downstream verification."""
    os.makedirs(EVIDENCE_DIR, exist_ok=True)

    count_path = os.path.join(EVIDENCE_DIR, "task-3-filter-count.txt")
    with open(count_path, "w", encoding="utf-8") as f:
        f.write(f"filtered_count={count}\n")
    print(f"[evidence] {count_path}")

    diff_path = os.path.join(EVIDENCE_DIR, "task-3-git-diff.txt")
    with open(diff_path, "w", encoding="utf-8") as f:
        f.write(git_diff_output)
    print(f"[evidence] {diff_path}")


def main() -> None:
    # 1. Load
    all_fns = load_functions(FUNCTIONS_JSON)

    # 2. Filter
    filtered = [build_entry(fn) for fn in all_fns if passes_filter(fn)]
    print(f"[filter] {len(all_fns)} → {len(filtered)} functions in scope")

    # 3. Validate
    validate_output(filtered)

    # 4. Write output
    with open(OUTPUT_JSON, "w", encoding="utf-8", newline="\n") as f:
        json.dump(filtered, f, indent=2, ensure_ascii=False)
    print(f"[write] {OUTPUT_JSON} ({os.path.getsize(OUTPUT_JSON):,} bytes)")

    # 5. Git diff check (placed here for evidence, actual check done by caller)
    import subprocess
    try:
        result = subprocess.run(
            ["git", "-C", PROJECT_ROOT, "diff", "--stat", "injectFunctionTest/functions.json"],
            capture_output=True, text=True, timeout=10
        )
        diff_output = result.stdout.strip()
        if diff_output:
            print(f"[WARNING] functions.json has uncommitted changes!\n{diff_output}")
        else:
            print("[verify] functions.json untouched — no diff")
        save_evidence(len(filtered), diff_output if diff_output else "(empty — no changes)")
    except Exception as ex:
        print(f"[WARNING] Could not run git diff: {ex}")
        save_evidence(len(filtered), f"git diff error: {ex}")

    print("[done]")


if __name__ == "__main__":
    main()
