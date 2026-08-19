#!/usr/bin/env python3
"""
ida_lookup_addresses.py — Look up function addresses via IDA MCP for .hpp declarations
that couldn't be matched against functions.json.

Uses IDA Pro MCP (127.0.0.1:13337) to search for functions by name patterns:
  - Member functions: ClassName::MethodName
  - Global functions: FuncName (exact then fuzzy)

Conservative: only assigns address when IDA returns exactly 1 match.

Usage:
  python tools/ida_lookup_addresses.py --dry-run          (preview)
  python tools/ida_lookup_addresses.py --gen-script        (generate IDA Python batch script)
  python tools/ida_lookup_addresses.py --apply-results results.json  (apply IDA results)
  python tools/ida_lookup_addresses.py                     (full pipeline: gen → run → apply)
"""

import argparse
import json
import re
import sys
import time
from collections import defaultdict
from pathlib import Path

# ── Constants ──────────────────────────────────────────────────────────────
SRC_DIR = Path("src")
FUNCTIONS_JSON = Path("injectFunctionTest/functions.json")
QUERIES_FILE = Path("tools/ida_queries.json")
RESULTS_FILE = Path("tools/ida_results.json")
IDA_SCRIPT = Path("tools/_ida_batch_lookup.py")
MIN_ADDR_VALUE = 0x10000

SKIP_PATTERNS = ["_funcs.hpp", "subs", "_generated", "menu_globals_gen.cpp"]

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


# ── Extract queries ────────────────────────────────────────────────────────

def extract_queries(lookup: dict = None) -> list:
    """
    Extract all unmatched function declarations from .hpp files.
    Returns list of {file, line, class_name, func_name, declaration, ida_patterns}.
    
    Unlike ida_fill_addresses.py, this also tries the enhanced functions.json
    matching first, then generates IDA patterns for remaining.
    """
    # Try functions.json matching first via ida_fill_addresses logic
    if lookup is None:
        lookup = _build_lookup_from_json()
    
    matched, unmatched = _extract_and_match(lookup)
    print(f"  Matched via functions.json enhanced: {len(matched)}")
    print(f"  Needs IDA lookup: {len(unmatched)}")
    
    return unmatched


def _build_lookup_from_json() -> dict:
    with open(FUNCTIONS_JSON, "r", encoding="utf-8") as f:
        data = json.load(f)
    
    lookup = {
        "class_method": {},
        "method_only": defaultdict(list),
        "global": {},
        "ctor": {},
        "dtor": {},
        "name_to_addr": {},
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


def _extract_and_match(lookup: dict) -> tuple:
    """Extract unmatched functions and try to match via functions.json.
    Returns (matched_list, unmatched_list)."""
    matched = []
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
            addr, label = _try_match(line, class_name, lookup)
            
            entry = {
                "file": str(fp),
                "line": i + 1,
                "class_name": class_name,
                "func_name": func_name,
                "declaration": line.strip()[:150],
            }
            
            if addr:
                entry["address"] = addr
                entry["match_type"] = label
                matched.append(entry)
            else:
                # Generate IDA patterns
                patterns = _generate_ida_patterns(class_name, func_name)
                entry["ida_patterns"] = patterns
                unmatched.append(entry)
    
    return matched, unmatched


def _try_match(line: str, class_name: str, lookup: dict) -> tuple:
    """Try enhanced matching via functions.json. Returns (addr, label) or (None, None)."""
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
        matched = _fuzzy_class_match(class_name, candidates)
        if matched:
            for cn, addr in candidates:
                if cn == matched:
                    return addr, f"fuzzy:{class_name}->{matched}"
    
    # 6. Global function
    if fn_lower in lookup["global"]:
        return lookup["global"][fn_lower], "global"
    
    # 7. Full name match
    if class_name:
        full = f"{class_name.lower()}::{fn_lower}"
        if full in lookup["name_to_addr"]:
            return lookup["name_to_addr"][full], "full_name"
    
    if fn_lower in lookup["name_to_addr"]:
        return lookup["name_to_addr"][fn_lower], "name_exact"
    
    return None, None


def _fuzzy_class_match(hpp_class: str, candidates: list) -> str:
    hpp_lower = hpp_class.lower()
    for cn, addr in candidates:
        if cn.lower() == hpp_lower:
            return cn
    substr = [(cn, addr) for cn, addr in candidates if hpp_lower in cn.lower()]
    if len(substr) == 1:
        return substr[0][0]
    rev = [(cn, addr) for cn, addr in candidates if cn.lower() in hpp_lower]
    if len(rev) == 1:
        return rev[0][0]
    suffix = [(cn, addr) for cn, addr in candidates if cn.lower() == hpp_lower + "class"]
    if len(suffix) == 1:
        return suffix[0][0]
    if hpp_lower.endswith("class"):
        base = hpp_lower[:-5]
        base_matches = [(cn, addr) for cn, addr in candidates if cn.lower() == base]
        if len(base_matches) == 1:
            return base_matches[0][0]
    return None


def _generate_ida_patterns(class_name: str, func_name: str) -> list:
    """
    Generate candidate IDA name patterns for lookup.
    Returns list of (pattern_type, search_name).
    """
    patterns = []
    
    if func_name.startswith("~"):
        # Destructor
        dtor_class = func_name[1:]
        patterns.append(("member", f"{dtor_class}::scalar_deleting_destructor"))
        patterns.append(("member", f"{dtor_class}::vector_deleting_destructor"))
        patterns.append(("member", f"{dtor_class}::ddtor"))
        patterns.append(("member", f"{dtor_class}::DTOR"))
    elif class_name:
        # Member function
        patterns.append(("member", f"{class_name}::{func_name}"))
        # Also try method-only (in case IDA doesn't use :: naming)
        patterns.append(("global", func_name))
    else:
        # Global function — first try exact name
        patterns.append(("global", func_name))
        # Then try splitting camelCase into ClassName::MethodName
        # (e.g., SessionClassSetInstance -> SessionClass::SetInstance)
        patterns.extend(_split_camel_case(func_name))
    
    return patterns


def _split_camel_case(name: str) -> list:
    """
    Try splitting a CamelCase global function name into ClassName::MethodName.
    Only returns patterns when the split produces a known class.
    """
    # Load known class names from functions.json
    # (cached for performance)
    known_classes = _get_known_classes()
    
    results = []
    # Find all positions where lowercase→uppercase transition occurs
    # and the prefix before the transition is a known class
    transitions = []
    for i in range(1, len(name)):
        if name[i].isupper() and name[i-1].islower():
            transitions.append(i)
    
    for t in transitions:
        prefix = name[:t]
        suffix = name[t:]
        if prefix.lower() in known_classes:
            results.append(("member", f"{prefix}::{suffix}"))
    
    # Also try with "Class" suffix
    for t in transitions:
        prefix = name[:t] + "Class"
        suffix = name[t:]
        if prefix.lower() in known_classes:
            results.append(("member", f"{prefix}::{suffix}"))
    
    return results


_known_classes_cache = None

def _get_known_classes() -> set:
    global _known_classes_cache
    if _known_classes_cache is not None:
        return _known_classes_cache
    
    _known_classes_cache = set()
    try:
        with open(FUNCTIONS_JSON, "r", encoding="utf-8") as f:
            data = json.load(f)
        for entry in data["functions"]:
            cn = (entry.get("call", {}).get("class_name") or "").strip()
            if cn:
                _known_classes_cache.add(cn.lower())
        for entry in data["functions"]:
            name = entry.get("name", "")
            if "::" in name:
                _known_classes_cache.add(name.split("::")[0].lower())
    except Exception:
        pass
    return _known_classes_cache


# ── Generate IDA Batch Script ──────────────────────────────────────────────

def generate_ida_script(queries: list, output_path: Path):
    """
    Generate an IDA Python script that performs batch name lookups.
    Writes results to a JSON file in the project directory.
    """
    
    # Deduplicate patterns for efficiency
    pattern_to_queries = defaultdict(list)
    for idx, q in enumerate(queries):
        for pat_type, pat_name in q.get("ida_patterns", []):
            pattern_to_queries[pat_name].append(idx)
    
    # Prepare JSON input
    patterns_list = list(pattern_to_queries.keys())
    
    script = f'''"""
IDA batch function lookup — auto-generated by tools/ida_lookup_addresses.py
"""
import json
import ida_name
import ida_funcs
import ida_idaapi

RESULTS_PATH = r"{RESULTS_FILE.resolve()}"
QUERIES_PATH = r"{QUERIES_FILE.resolve()}"

# Read input queries
with open(QUERIES_PATH, "r", encoding="utf-8") as f:
    queries = json.load(f)

results = []
found_count = 0
not_found_count = 0

for idx, q in enumerate(queries):
    if idx % 500 == 0:
        print(f"  Progress: {{idx}}/{{len(queries)}}...")
    
    class_name = q.get("class_name")
    func_name = q.get("func_name")
    patterns = q.get("ida_patterns", [])
    
    matched_addr = None
    matched_pattern = None
    
    for pat_type, pat_name in patterns:
        addr = ida_name.get_name_ea(ida_idaapi.BADADDR, pat_name)
        if addr == ida_idaapi.BADADDR:
            continue
        # Verify it's a function
        func = ida_funcs.get_func(addr)
        if not func:
            continue
        # Check address is in valid range
        if addr < 0x401000:
            continue
        
        matched_addr = f"0x{{addr:X}}"
        matched_pattern = pat_name
        break
    
    result = {{
        "file": q["file"],
        "line": q["line"],
        "class_name": class_name,
        "func_name": func_name,
        "declaration": q.get("declaration", ""),
        "address": matched_addr,
        "ida_match": matched_pattern,
    }}
    results.append(result)
    
    if matched_addr:
        found_count += 1
    else:
        not_found_count += 1

# Write results
with open(RESULTS_PATH, "w", encoding="utf-8") as f:
    json.dump({{
        "found": found_count,
        "not_found": not_found_count,
        "total": len(queries),
        "results": results,
    }}, f, indent=2)

print(f"\\nDone! Found: {{found_count}}, Not found: {{not_found_count}}, Total: {{len(queries)}}")
print(f"Results written to: {{RESULTS_PATH}}")
'''
    
    with open(output_path, "w", encoding="utf-8") as f:
        f.write(script)
    
    print(f"Generated IDA batch script: {output_path}")
    print(f"  {len(patterns_list)} unique patterns to search")
    print(f"  {len(queries)} queries total")


# ── Apply Results ──────────────────────────────────────────────────────────

def apply_results(results_file: Path, dry_run: bool = False):
    """Read results JSON and add // 0xADDR annotations to .hpp files."""
    with open(results_file, "r", encoding="utf-8") as f:
        data = json.load(f)
    
    results = data.get("results", [])
    found = [r for r in results if r.get("address")]
    
    print(f"Total results: {len(results)}")
    print(f"Found addresses: {len(found)}")
    
    # Group by file
    by_file = defaultdict(list)
    for r in found:
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
        
        # Collect existing addresses to detect duplicates
        existing_addrs = set()
        for line in new_lines:
            m = RE_ADDR_TAIL.search(line)
            if m and int(m.group(1), 16) >= MIN_ADDR_VALUE:
                existing_addrs.add(m.group(1).upper())
            m = RE_ADDR_IDA.search(line)
            if m and int(m.group(1), 16) >= MIN_ADDR_VALUE:
                existing_addrs.add(m.group(1).upper())
        
        # Sort by line number descending to avoid offset shifts
        entries.sort(key=lambda e: e["line"], reverse=True)
        
        file_changes = 0
        for entry in entries:
            line_idx = entry["line"] - 1  # 0-based
            if line_idx >= len(new_lines):
                continue
            line = new_lines[line_idx]
            if has_address_annotation(line):
                continue
            
            addr = entry["address"]
            addr_hex = f"0x{addr[2:].upper()}" if addr.startswith("0x") else addr.upper()
            addr_plain = addr_hex[2:]
            
            # Use // IDA: format if address already exists in file (shared)
            if addr_plain in existing_addrs:
                annotation = f"  // IDA: {addr_hex}"
                tag = " (shared)"
            else:
                annotation = f"  // {addr_hex}"
                tag = ""
                existing_addrs.add(addr_plain)
            
            new_lines[line_idx] = line.rstrip() + annotation
            file_changes += 1
        
        if file_changes > 0:
            if not dry_run:
                new_content = "\n".join(new_lines)
                if original.endswith("\n"):
                    new_content += "\n"
                filepath.write_text(new_content, encoding="utf-8")
            print(f"  {filepath.name}: {'[DRY] ' if dry_run else ''}{file_changes} annotations")
            total_applied += file_changes
    
    mode = "Would apply" if dry_run else "Applied"
    print(f"\n{mode} {total_applied} address annotations across {len(by_file)} files.")
    
    # Stats
    if data.get("not_found", 0) > 0:
        print(f"  {data['not_found']} functions not found in IDA (need manual or enhanced matching)")


# ── Main ───────────────────────────────────────────────────────────────────

def main():
    parser = argparse.ArgumentParser(description="IDA-based address lookup for .hpp files")
    parser.add_argument("--dry-run", action="store_true", help="Preview changes only")
    parser.add_argument("--gen-script", action="store_true",
                        help="Generate IDA Python batch script (for manual execution)")
    parser.add_argument("--apply-results", type=str,
                        help="Apply address results from JSON file")
    parser.add_argument("--skip-ida", action="store_true",
                        help="Skip IDA MCP execution (only extract queries + apply functions.json matches)")
    parser.add_argument("--output", type=str, default="tools/ida_results.json",
                        help="Output/results file path")
    args = parser.parse_args()
    
    # Ensure we're in project root
    script_dir = Path(__file__).resolve().parent
    project_root = script_dir.parent
    import os
    os.chdir(project_root)
    
    if args.apply_results:
        apply_results(Path(args.apply_results), dry_run=args.dry_run)
        return
    
    # Build lookup
    print("Building lookup from functions.json...")
    lookup = _build_lookup_from_json()
    
    # Extract unmatched
    print("Extracting unmatched function declarations...")
    matched, unmatched = _extract_and_match(lookup)
    
    # Apply functions.json matches directly
    if matched and not args.dry_run:
        temp_file = Path("tools/_temp_ida_matched.json")
        with open(temp_file, "w", encoding="utf-8") as f:
            json.dump({"found": len(matched), "not_found": 0, "total": len(matched),
                       "results": matched}, f, indent=2)
        apply_results(temp_file, dry_run=False)
        temp_file.unlink(missing_ok=True)
    elif matched:
        temp_file = Path("tools/_temp_ida_matched.json")
        with open(temp_file, "w", encoding="utf-8") as f:
            json.dump({"found": len(matched), "not_found": 0, "total": len(matched),
                       "results": matched}, f, indent=2)
        apply_results(temp_file, dry_run=True)
        temp_file.unlink(missing_ok=True)
    
    if not unmatched:
        print("\nAll functions matched via functions.json — no IDA lookup needed.")
        return
    
    # Save queries for IDA use
    with open(QUERIES_FILE, "w", encoding="utf-8") as f:
        json.dump(unmatched, f, indent=2)
    print(f"\nWrote {len(unmatched)} queries to {QUERIES_FILE}")
    
    # Generate IDA batch script
    generate_ida_script(unmatched, IDA_SCRIPT)
    
    if args.gen_script:
        print(f"\nIDA script generated: {IDA_SCRIPT}")
        print("Run it in IDA via: ida-pro-mcp_py_exec_file with file_path=" + str(IDA_SCRIPT.resolve()))
        return
    
    if args.skip_ida:
        print("\nSkipping IDA MCP execution (--skip-ida).")
        print(f"Run the generated script manually in IDA, then:")
        print(f"  python tools/ida_lookup_addresses.py --apply-results {RESULTS_FILE}")
        return
    
    print("\n" + "=" * 60)
    print("Ready for IDA MCP execution.")
    print(f"Run the IDA script via MCP, then apply results:")
    print(f"  python tools/ida_lookup_addresses.py --apply-results {RESULTS_FILE}")
    print("=" * 60)


if __name__ == "__main__":
    main()
