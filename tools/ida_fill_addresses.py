#!/usr/bin/env python3
"""
ida_fill_addresses.py — Fill missing // 0xADDR annotations using IDA MCP name lookup.

Phase 1: Try enhanced functions.json matching (broader fuzzy strategies)
Phase 2: Generate IDA query list for unmatched functions
Phase 3: Apply IDA-returned addresses back to .hpp files

Usage:
  python tools/ida_fill_addresses.py --dry-run          (preview)
  python tools/ida_fill_addresses.py --extract-queries   (generate queries.json for IDA)
  python tools/ida_fill_addresses.py --apply-results results.json  (apply IDA results)
"""

import argparse
import json
import re
import sys
from collections import defaultdict
from pathlib import Path

# ── Constants ──────────────────────────────────────────────────────────────
SRC_DIR = Path("src")
FUNCTIONS_JSON = Path("injectFunctionTest/functions.json")
MIN_ADDR_VALUE = 0x10000

SKIP_PATTERNS = ["_funcs.hpp", "subs", "_generated"]

RE_ADDR_TAIL = re.compile(r"//\s*0x([0-9A-Fa-f]+)")
RE_ADDR_IDA = re.compile(r"//\s*IDA:\s*0x([0-9A-Fa-f]+)")
RE_MEMBER_OFFSET = re.compile(r"/\*\s*0x[0-9A-Fa-f]+\s*\*/")
RE_OFFSET_COMMENT = re.compile(r"//\s*\+0x[0-9A-Fa-f]+")

RE_NOT_FUNC = re.compile(
    r"^\s*(?://|#|/\*|\*|\}|\s*$|using\s|namespace\s|template\s|typedef\s|extern\s)"
)

RE_FUNC_PATTERN = re.compile(
    r"^\s*(?:(?:virtual|static|constexpr|inline|explicit|friend)\s+)*"
    r"(?:[\w:<>&,*\s]+)\s+"
    r"(~?[\w]+|operator\s*\S+)"
    r"\s*\([^)]*\)"
    r"\s*(?:const\s*)?"
    r"(?:override\s*)?"
    r"(?:noexcept\s*)?"
    r"(?:=\s*(?:0|default|delete)\s*)?"
)

# ── Utility ────────────────────────────────────────────────────────────────

def is_skip_file(fp: Path) -> bool:
    name = fp.name.lower()
    for pat in SKIP_PATTERNS:
        if pat.lower() in name:
            return True
    return any("_generated" in p.lower() for p in fp.parts)


def has_address_annotation(line: str) -> bool:
    if RE_MEMBER_OFFSET.search(line) or RE_OFFSET_COMMENT.search(line):
        return False
    m = RE_ADDR_TAIL.search(line)
    if m and int(m.group(1), 16) >= MIN_ADDR_VALUE:
        return True
    m = RE_ADDR_IDA.search(line)
    if m and int(m.group(1), 16) >= MIN_ADDR_VALUE:
        return True
    return False


def extract_func_name(line: str) -> str:
    before_comment = line.split("//")[0].rstrip()
    before_comment = re.sub(r'[;{}]\s*$', '', before_comment).strip()
    before_comment = re.sub(r'\s*=\s*(?:0|default|delete)\s*$', '', before_comment).strip()
    while True:
        m = re.search(r'\s+(noexcept|override|const|final)\s*$', before_comment)
        if not m:
            break
        before_comment = before_comment[:m.start()].strip()
    before_comment = re.sub(r'\s+(?:__stdcall|__fastcall|__cdecl|__thiscall)\s*', ' ', before_comment)
    m = re.search(r'(~?\w+(?:\s*::\s*\w+)?|operator\s*\S+)\s*\(', before_comment)
    if m:
        name = m.group(1).strip()
        if "::" in name:
            name = name.split("::")[-1]
        return name
    return None


def parse_class_context(lines):
    """Parse class/struct context from file lines."""
    classes_ = []
    stack = []
    i = 0
    while i < len(lines):
        stripped = lines[i].strip()
        if stripped.startswith("//") or stripped.startswith("#"):
            i += 1
            continue
        class_match = re.match(r'(?:class|struct)\s+(\w+)', stripped)
        if class_match:
            class_name = class_match.group(1)
            if stripped.rstrip().endswith(";"):
                i += 1
                continue
            if "{" in stripped:
                open_count = stripped.count("{")
                close_count = stripped.count("}")
                if open_count > close_count:
                    stack.append((class_name, i))
            else:
                for j in range(i + 1, min(i + 10, len(lines))):
                    ahead = lines[j].strip()
                    if ahead.startswith("//") or ahead.startswith("#"):
                        continue
                    if "{" in ahead:
                        open_count = ahead.count("{")
                        close_count = ahead.count("}")
                        if open_count > close_count:
                            stack.append((class_name, j))
                        break
        open_count = stripped.count("{")
        close_count = stripped.count("}")
        for _ in range(close_count):
            if stack:
                cn, start = stack.pop()
                classes_.append((start, i, cn, [s[0] for s in stack]))
        i += 1
    while stack:
        cn, start = stack.pop()
        classes_.append((start, len(lines) - 1, cn, [s[0] for s in stack]))
    line_to_class = defaultdict(list)
    for start, end, cn, parents in classes_:
        for li in range(start, end + 1):
            line_to_class[li].append((cn, parents))
    return line_to_class


def get_class_name_at_line(line_to_class, line_idx):
    classes = line_to_class.get(line_idx, [])
    if not classes:
        return None
    deepest = max(classes, key=lambda x: len(x[1]))
    return deepest[0]


# ── Build Enhanced Lookup ──────────────────────────────────────────────────

def build_enhanced_lookup(json_path: Path) -> dict:
    """Build all possible name→address mappings from functions.json."""
    with open(json_path, "r", encoding="utf-8") as f:
        data = json.load(f)

    lookup = {
        "class_method": {},       # (class_lower, method_lower) -> addr
        "method_only": defaultdict(list),  # method_lower -> [(class_name, addr), ...]
        "global": {},             # name_lower -> addr
        "ctor": {},               # class_lower -> addr
        "dtor": {},               # class_lower -> addr
        "name_to_addr": {},       # full_name_lower -> addr (for global functions)
    }

    dtor_names = {"ddtor", "dtor", "sddtor", "destruct",
                  "scalar deleting destructor", "vector deleting destructor"}

    for entry in data["functions"]:
        addr = entry.get("address", "")
        full_name = entry.get("name", "")
        call = entry.get("call", {})
        cn = (call.get("class_name") or "").strip()
        mn = (call.get("method_name") or "").strip()

        if cn and mn:
            key = (cn.lower(), mn.lower())
            if key not in lookup["class_method"]:
                lookup["class_method"][key] = addr
            lookup["method_only"][mn.lower()].append((cn, addr))
            if mn == cn:
                lookup["ctor"][cn.lower()] = addr
            if mn.lower() in dtor_names:
                lookup["dtor"][cn.lower()] = addr

        if full_name:
            n = full_name.lower()
            if n not in lookup["name_to_addr"]:
                lookup["name_to_addr"][n] = addr
            if not cn:
                if n not in lookup["global"]:
                    lookup["global"][n] = addr

    return lookup


# ── Phase 1: Enhanced Matching ─────────────────────────────────────────────

def fuzzy_class_match(hpp_class: str, candidates: list) -> str:
    """Match hpp_class against list of (class_name, addr) tuples."""
    hpp_lower = hpp_class.lower()
    for cn, addr in candidates:
        if cn.lower() == hpp_lower:
            return cn
    # Substring matching
    substr = [(cn, addr) for cn, addr in candidates if hpp_lower in cn.lower()]
    if len(substr) == 1:
        return substr[0][0]
    rev = [(cn, addr) for cn, addr in candidates if cn.lower() in hpp_lower]
    if len(rev) == 1:
        return rev[0][0]
    # hpp + "Class" suffix
    suffix = [(cn, addr) for cn, addr in candidates if cn.lower() == hpp_lower + "class"]
    if len(suffix) == 1:
        return suffix[0][0]
    # hpp without "Class" suffix
    if hpp_lower.endswith("class"):
        base = hpp_lower[:-5]
        base_matches = [(cn, addr) for cn, addr in candidates if cn.lower() == base]
        if len(base_matches) == 1:
            return base_matches[0][0]
    return None


def try_match_function(line: str, class_name: str, lookup: dict) -> tuple:
    """Try to match a function declaration to an address.
    Returns (address, label) or (None, None)."""
    func_name = extract_func_name(line)
    if not func_name:
        return None, None

    fn_lower = func_name.lower()

    # 1. Constructor
    if class_name and class_name.lower() == fn_lower:
        if class_name.lower() in lookup["ctor"]:
            return lookup["ctor"][class_name.lower()], "ctor"

    # 2. Destructor
    if func_name.startswith("~"):
        dtor_class = func_name[1:]
        if dtor_class.lower() in lookup["dtor"]:
            return lookup["dtor"][dtor_class.lower()], "dtor"

    # 3. Class + method exact
    if class_name:
        key = (class_name.lower(), fn_lower)
        if key in lookup["class_method"]:
            return lookup["class_method"][key], "class_method"

    # 4. Method-only unique
    candidates = lookup["method_only"].get(fn_lower, [])
    if len(candidates) == 1:
        return candidates[0][1], f"method_only:{candidates[0][0]}"

    # 5. Fuzzy class matching
    if class_name and len(candidates) > 1:
        matched = fuzzy_class_match(class_name, candidates)
        if matched:
            for cn, addr in candidates:
                if cn == matched:
                    return addr, f"fuzzy:{class_name}->{matched}"

    # 6. Global function lookup
    if fn_lower in lookup["global"]:
        return lookup["global"][fn_lower], "global"

    # 7. Full name lookup (for names like "SessionClass::SetInstance")
    if class_name:
        full_name = f"{class_name.lower()}::{fn_lower}"
        if full_name in lookup["name_to_addr"]:
            return lookup["name_to_addr"][full_name], "full_name_class"

    # 8. Substring full name search
    if fn_lower in lookup["name_to_addr"]:
        return lookup["name_to_addr"][fn_lower], "name_exact"

    return None, None


# ── Phase 2: Extract Unmatched Functions ───────────────────────────────────

def extract_unmatched(lookup: dict) -> list:
    """Extract all unmatched function declarations from .hpp files.
    Returns list of {file, line, class_name, func_name, declaration}."""
    unmatched = []
    files = sorted(SRC_DIR.rglob("*.hpp"))
    files = [f for f in files if not is_skip_file(f)]

    for fp in files:
        try:
            lines = fp.read_text(encoding="utf-8-sig").splitlines()
        except Exception:
            continue

        line_to_class = parse_class_context(lines)

        for i, line in enumerate(lines):
            if has_address_annotation(line):
                continue
            if RE_MEMBER_OFFSET.search(line) or RE_OFFSET_COMMENT.search(line):
                continue
            if RE_NOT_FUNC.match(line):
                continue
            stripped = line.split("//")[0].rstrip()
            if not stripped.endswith((";", "{", "}")):
                continue
            if "(" not in line or ")" not in line:
                continue
            before_term = re.sub(r'[;{}]\s*$', '', stripped).strip()
            if "(" not in before_term:
                continue
            if not RE_FUNC_PATTERN.match(before_term):
                continue

            func_name = extract_func_name(line)
            if not func_name:
                continue

            class_name = get_class_name_at_line(line_to_class, i)
            addr, label = try_match_function(line, class_name, lookup)

            if addr:
                # Matched! We'll record it for applying
                unmatched.append({
                    "file": str(fp),
                    "line": i + 1,  # 1-based
                    "class_name": class_name,
                    "func_name": func_name,
                    "declaration": line.strip()[:150],
                    "address": addr,
                    "match_type": label,
                    "status": "matched_functions_json",
                })
            else:
                unmatched.append({
                    "file": str(fp),
                    "line": i + 1,
                    "class_name": class_name,
                    "func_name": func_name,
                    "declaration": line.strip()[:150],
                    "address": None,
                    "match_type": None,
                    "status": "needs_ida",
                })

    return unmatched


# ── Phase 3: Apply Results ─────────────────────────────────────────────────

def apply_results(results_file: Path, dry_run: bool = False):
    """Read results JSON and add // 0xADDR annotations to .hpp files."""
    with open(results_file, "r", encoding="utf-8") as f:
        results = json.load(f)

    # Group by file
    by_file = defaultdict(list)
    for r in results:
        if r.get("address"):
            by_file[r["file"]].append(r)

    total_applied = 0
    for filepath_str, entries in by_file.items():
        filepath = Path(filepath_str)
        if not filepath.exists():
            print(f"WARNING: file not found: {filepath}")
            continue

        try:
            original = filepath.read_text(encoding="utf-8-sig")
        except Exception as e:
            print(f"ERROR reading {filepath}: {e}")
            continue

        lines = original.splitlines()
        new_lines = list(lines)

        # Sort by line number descending to avoid offset shifts
        entries.sort(key=lambda e: e["line"], reverse=True)

        file_changes = 0
        for entry in entries:
            line_idx = entry["line"] - 1  # 0-based
            if line_idx >= len(new_lines):
                continue
            line = new_lines[line_idx]
            if has_address_annotation(line):
                continue  # already annotated
            addr = entry["address"]
            addr_hex = f"0x{addr[2:].upper()}" if addr.startswith("0x") else addr.upper()
            new_lines[line_idx] = line.rstrip() + f"  // {addr_hex}"
            file_changes += 1

        if file_changes > 0 and not dry_run:
            new_content = "\n".join(new_lines)
            if original.endswith("\n"):
                new_content += "\n"
            filepath.write_text(new_content, encoding="utf-8")
            print(f"  {filepath.name}: added {file_changes} annotations")
            total_applied += file_changes
        elif file_changes > 0:
            print(f"  [DRY-RUN] {filepath.name}: would add {file_changes} annotations")
            total_applied += file_changes

    mode = "Would apply" if dry_run else "Applied"
    print(f"\n{mode} {total_applied} address annotations across {len(by_file)} files.")


# ── Main ───────────────────────────────────────────────────────────────────

def main():
    parser = argparse.ArgumentParser(description="IDA-based address filler for .hpp files")
    parser.add_argument("--dry-run", action="store_true", help="Preview changes only")
    parser.add_argument("--extract-queries", action="store_true",
                        help="Extract unmatched functions → queries.json for IDA batch lookup")
    parser.add_argument("--apply-results", type=str, help="Apply address results from JSON file")
    parser.add_argument("--output", type=str, default="tools/ida_queries.json",
                        help="Output file for --extract-queries")
    args = parser.parse_args()

    if args.apply_results:
        apply_results(Path(args.apply_results), dry_run=args.dry_run)
        return

    # Build lookup
    print("Building enhanced lookup from functions.json...")
    lookup = build_enhanced_lookup(FUNCTIONS_JSON)
    print(f"  Class methods: {len(lookup['class_method'])}")
    print(f"  Global functions: {len(lookup['global'])}")
    print(f"  Constructors: {len(lookup['ctor'])}")
    print(f"  Destructors: {len(lookup['dtor'])}")

    # Extract unmatched
    print("\nExtracting unmatched function declarations...")
    unmatched = extract_unmatched(lookup)

    matched = [u for u in unmatched if u["status"] == "matched_functions_json"]
    needs_ida = [u for u in unmatched if u["status"] == "needs_ida"]

    print(f"  Matched via functions.json: {len(matched)}")
    print(f"  Needs IDA lookup: {len(needs_ida)}")
    print(f"  Total unmatched: {len(unmatched)}")

    # Show sample
    print(f"\nSample matched (first 10):")
    for u in matched[:10]:
        print(f"  {Path(u['file']).name}:{u['line']} [{u['class_name']}] {u['func_name']}() -> {u['address']} ({u['match_type']})")

    print(f"\nSample needs IDA (first 10):")
    for u in needs_ida[:10]:
        print(f"  {Path(u['file']).name}:{u['line']} [{u['class_name']}] {u['func_name']}()")

    if args.extract_queries:
        # Write queries for IDA batch processing
        queries = []
        seen = set()
        for u in needs_ida:
            key = (u["func_name"].lower(), (u["class_name"] or "").lower())
            if key in seen:
                continue
            seen.add(key)
            queries.append({
                "func_name": u["func_name"],
                "class_name": u["class_name"],
                "file": u["file"],
                "line": u["line"],
            })
        with open(args.output, "w", encoding="utf-8") as f:
            json.dump(queries, f, indent=2)
        print(f"\nWrote {len(queries)} unique queries to {args.output}")

    # If not extracting queries, apply matched results directly
    if not args.extract_queries:
        # Merge: apply matched + keep needs_ida for later
        all_results = matched  # Only apply matched ones
        if all_results:
            print(f"\nApplying {len(all_results)} matched annotations...")
            # Save to temp file and apply
            temp_file = Path("tools/_temp_results.json")
            with open(temp_file, "w", encoding="utf-8") as f:
                json.dump(all_results, f, indent=2)
            apply_results(temp_file, dry_run=args.dry_run)
            if not args.dry_run:
                temp_file.unlink(missing_ok=True)
            print(f"\nRemaining {len(needs_ida)} functions need IDA lookup.")
            print(f"Run with --extract-queries to generate queries.json for IDA batch processing.")


if __name__ == "__main__":
    main()
