#!/usr/bin/env python3
"""
auto_annotate_addresses.py — Add // 0xADDR comments to function declarations 
in .hpp files by matching against functions.json.

Matching strategies (tried in order):
  1. Constructor matching: ClassName(args) → call.class_name == call.method_name
  2. Destructor matching: ~ClassName() → call.method_name ∈ {ddtor, DTOR, SDDTOR, Destruct}
  3. Class + method exact: ClassName::method → (class_name, method_name) lookup
  4. Method-only unique: method_name has exactly one class match in functions.json
  5. Fuzzy class matching: class name appears as substring of functions.json class_name
  6. Global function: function_name → global_lookup

Usage:
  python tools/auto_annotate_addresses.py --dry-run   (preview only)
  python tools/auto_annotate_addresses.py              (apply changes)
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

# Files/directories to skip
SKIP_PATTERNS = [
    "_funcs.hpp",           # generated files
    "subs",                 # generated sub_* files
    "_generated",           # generated directory
]

# Keywords before function name (return type components)
PRE_NAME_KEYWORDS = {
    "virtual", "static", "constexpr", "inline", "explicit", "friend",
    "const", "volatile", "mutable", "override", "noexcept", "final",
    "__stdcall", "__fastcall", "__cdecl", "__thiscall", "__declspec",
    "extern",
}

# Lines that are definitely NOT function declarations
RE_NOT_FUNC = re.compile(
    r"^\s*(?://|#|/\*|\*|\}|\s*$|using\s|namespace\s|template\s|typedef\s|extern\s)"
)

# Address annotation patterns
RE_ADDR_TAIL = re.compile(r"//\s*0x([0-9A-Fa-f]+)")
RE_ADDR_IDA = re.compile(r"//\s*IDA:\s*0x([0-9A-Fa-f]+)")

# Member offset patterns (NOT addresses — skip these)
RE_MEMBER_OFFSET = re.compile(r"/\*\s*0x[0-9A-Fa-f]+\s*\*/")
RE_OFFSET_COMMENT = re.compile(r"//\s*\+0x[0-9A-Fa-f]+")

# Constructor declaration: ClassName(…) or ClassName(Type1 a1, …);
RE_CTOR_DECL = re.compile(
    r"^\s+([A-Z]\w+)\([^)]*\)\s*(?:const\s*)?;\s*(?://.*)?$"
)

# Destructor declaration: ~ClassName(); already matched by RE_FUNC_PATTERN
RE_DTOR_NAME = re.compile(r"~(\w+)")

# ── Utility Functions ──────────────────────────────────────────────────────

def is_skip_file(filepath: Path) -> bool:
    """Check if a file should be skipped."""
    name = filepath.name.lower()
    for pat in SKIP_PATTERNS:
        if pat.lower() in name:
            return True
    # Also skip if path contains _generated
    parts = filepath.parts
    return any("_generated" in p.lower() for p in parts)


def has_address_annotation(line: str) -> bool:
    """Check if a line already has an address annotation."""
    if RE_MEMBER_OFFSET.search(line) or RE_OFFSET_COMMENT.search(line):
        return False  # These are member offsets, not addresses
    
    m = RE_ADDR_TAIL.search(line)
    if m and int(m.group(1), 16) >= MIN_ADDR_VALUE:
        return True
    m = RE_ADDR_IDA.search(line)
    if m and int(m.group(1), 16) >= MIN_ADDR_VALUE:
        return True
    return False


# Regex for function declaration pattern (used for detection + name extraction)
RE_FUNC_PATTERN = re.compile(
    r"^\s*(?:(?:virtual|static|constexpr|inline|explicit|friend)\s+)*"
    r"(?:[\w:<>&,*\s]+)\s+"  # return type (greedy)
    r"(~?[\w]+|operator\s*\S+)"  # function name (captured) 
    r"\s*\([^)]*\)"  # params
    r"\s*(?:const\s*)?"
    r"(?:override\s*)?"
    r"(?:noexcept\s*)?"
    r"(?:=\s*(?:0|default|delete)\s*)?"
)

def is_func_declaration(line: str) -> bool:
    """Heuristic: does this line look like a function declaration?"""
    if RE_NOT_FUNC.match(line):
        return False
    if "(" not in line or ")" not in line:
        return False
    
    # Skip lines with member offset patterns
    if RE_MEMBER_OFFSET.search(line) or RE_OFFSET_COMMENT.search(line):
        return False
    
    stripped = line.split("//")[0].rstrip()
    if not stripped.endswith((";", "{", "}")):
        return False
    
    # Remove trailing ; { } and try matching
    before_term = re.sub(r'[;{}]\s*$', '', stripped).strip()
    
    # Skip pure member variable declarations (no meaningful parens)
    if "(" not in before_term:
        return False
    
    return bool(RE_FUNC_PATTERN.match(before_term))


def is_ctor_declaration(line: str) -> tuple:
    """Check if line is a constructor declaration (no return type).
    Returns (class_name, line) or (None, None)."""
    m = RE_CTOR_DECL.match(line)
    if not m:
        return None, None
    
    class_name = m.group(1)
    
    # Filter out obvious non-constructors
    # Keywords that indicate this is NOT a constructor
    non_ctor = {"virtual", "static", "constexpr", "inline", "explicit", "friend",
                "return", "if", "while", "for", "switch", "case", "goto",
                "class", "struct", "enum", "union", "namespace", "typedef"}
    if class_name in non_ctor:
        return None, None
    
    # Skip lines that look like inline method calls with bodies
    # Check for common patterns: Grow(), Shrink(), Clear(), Rebuild(), RebuildTo()
    # These are typically template/inline methods, not constructors
    common_methods = {"grow", "shrink", "clear", "rebuild", "rebuildto", 
                      "addref", "release", "queryinterface", "clone",
                      "push", "pop", "top", "front", "back", "size", "empty",
                      "begin", "end", "insert", "erase", "find", "contains",
                      "reserve", "capacity", "data"}
    if class_name.lower() in common_methods:
        return None, None
    
    # Also skip function calls like GameDelete(ptr), GetRect(&buf)
    # that look like constructors but have args that look like variables
    after_paren = line[line.index("(")+1:]
    close_paren = after_paren.index(")")
    args_str = after_paren[:close_paren].strip()
    # If args contain operators or look like function calls, skip
    if args_str and any(op in args_str for op in ["->", ".", "=", "+", "-", "*", "/", "&", "|"]):
        return None, None
    
    return class_name, line


def extract_func_name(line: str) -> str:
    """Extract the function name from a declaration line.
    Returns the function name (e.g., 'GetClassID', '~ClassName', 'operator<') or None."""
    # Remove trailing comment
    before_comment = line.split("//")[0].rstrip()
    # Remove trailing ; { }
    before_comment = re.sub(r'[;{}]\s*$', '', before_comment).strip()
    # Remove = 0, = default, = delete
    before_comment = re.sub(r'\s*=\s*(?:0|default|delete)\s*$', '', before_comment).strip()
    
    # Remove trailing noexcept, override, const qualifiers
    while True:
        m = re.search(r'\s+(noexcept|override|const|final)\s*$', before_comment)
        if not m:
            break
        before_comment = before_comment[:m.start()].strip()
    
    # Remove __stdcall etc.
    before_comment = re.sub(r'\s+(?:__stdcall|__fastcall|__cdecl|__thiscall)\s*', ' ', before_comment)
    
    # Find function name: last word/operator before (
    m = re.search(r'(~?\w+(?:\s*::\s*\w+)?|operator\s*\S+)\s*\(', before_comment)
    if m:
        name = m.group(1).strip()
        # Remove namespace qualifiers
        if "::" in name:
            name = name.split("::")[-1]
        return name
    return None


def is_forward_declaration(line: str) -> bool:
    """Check if this is a forward declaration (class/struct without body)."""
    stripped = line.strip()
    return bool(re.match(r'^\s*(?:class|struct)\s+\w+\s*;', stripped))


# ── Build Lookup Tables ────────────────────────────────────────────────────

def build_lookup(functions_json_path: Path) -> tuple:
    """Build lookup tables from functions.json.
    Returns (class_method_lookup, global_lookup, ctor_lookup, dtor_lookup, method_to_classes).
    """
    with open(functions_json_path, "r", encoding="utf-8") as f:
        data = json.load(f)
    
    class_method_lookup = {}   # (class_name, method_name) -> address
    global_lookup = {}         # name -> address
    ctor_lookup = {}           # class_name -> address  (mn == cn)
    dtor_lookup = {}           # class_name -> address  (mn is ddtor/DTOR/etc)
    method_to_classes = defaultdict(list)  # method_name -> [(class_name, address), ...]
    
    dtor_names = {"ddtor", "dtor", "sddtor", "destruct", 
                  "scalar deleting destructor", "vector deleting destructor"}
    
    for entry in data["functions"]:
        addr = entry.get("address", "")
        call = entry.get("call", {})
        name = entry.get("name", "")
        
        cn = (call.get("class_name") or "").strip()
        mn = (call.get("method_name") or "").strip()
        
        if cn and mn:
            key = (cn.lower(), mn.lower())
            if key not in class_method_lookup:
                class_method_lookup[key] = addr
            
            # Track method name → classes mapping (for method-only matching)
            method_to_classes[mn.lower()].append((cn, addr))
            
            # Constructor: method_name == class_name
            if mn == cn:
                ctor_lookup[cn.lower()] = addr
            
            # Destructor
            if mn.lower() in dtor_names:
                dtor_lookup[cn.lower()] = addr
        
        if name and not cn:
            # Global function
            n = name.lower()
            if n not in global_lookup:
                global_lookup[n] = addr
    
    return class_method_lookup, global_lookup, ctor_lookup, dtor_lookup, method_to_classes


# ── Parse Class Context ─────────────────────────────────────────────────────

def parse_class_context(lines):
    """
    Parse lines to build a map: line_index -> (class_name, parent_class_names)
    Handles nested classes, multi-line class definitions, and namespace blocks.
    Returns line_to_class dict.
    """
    classes_ = []
    stack = []  # (class_name, start_line)
    
    i = 0
    while i < len(lines):
        stripped = lines[i].strip()
        
        # Skip comments and preprocessor
        if stripped.startswith("//") or stripped.startswith("#"):
            i += 1
            continue
        
        # Detect class/struct openings (possibly multi-line: "class Foo\n  : public Bar\n{")
        class_match = re.match(r'(?:class|struct)\s+(\w+)', stripped)
        if class_match:
            class_name = class_match.group(1)
            # Skip forward declarations: "class Foo;" (no body)
            if stripped.rstrip().endswith(";"):
                i += 1
                continue
            # Find the opening brace — might be on this line or a later one
            if "{" in stripped:
                # Brace on same line
                open_count = stripped.count("{")
                close_count = stripped.count("}")
                if open_count > close_count:
                    stack.append((class_name, i))
            else:
                # Look ahead for the {
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
        
        # Track brace balance
        open_count = stripped.count("{")
        close_count = stripped.count("}")
        
        for _ in range(close_count):
            if stack:
                cn, start = stack.pop()
                classes_.append((start, i, cn, [s[0] for s in stack]))
        
        i += 1
    
    # Classes not closed (implicit close at end of file)
    while stack:
        cn, start = stack.pop()
        classes_.append((start, len(lines) - 1, cn, [s[0] for s in stack]))
    
    # Build line -> class list map
    line_to_class = defaultdict(list)
    for start, end, cn, parents in classes_:
        for li in range(start, end + 1):
            line_to_class[li].append((cn, parents))
    
    return line_to_class


def get_class_name_at_line(line_to_class, line_idx):
    """Get the innermost class name at a given line (0-indexed)."""
    classes = line_to_class.get(line_idx, [])
    if not classes:
        return None
    # Innermost = deepest nesting (most parents)
    deepest = max(classes, key=lambda x: len(x[1]))
    return deepest[0]


# ── Fuzzy Matching Helpers ──────────────────────────────────────────────────

def fuzzy_class_match(hpp_class: str, json_classes: list) -> str:
    """
    Try to match an hpp class name against a list of functions.json class names.
    Returns the best matching class name or None.
    
    Strategies (tried in order):
    1. Exact match (case-insensitive)
    2. hpp_class is a substring of json_class (e.g., "Infantry" → "InfantryClass")
    3. json_class is a substring of hpp_class
    4. hpp_class + "Class" matches json_class
    """
    hpp_lower = hpp_class.lower()
    
    # Strategy 1: exact match
    exact_matches = [cn for cn, _ in json_classes if cn.lower() == hpp_lower]
    if len(exact_matches) == 1:
        return exact_matches[0]
    
    # Strategy 2: hpp_class is substring of json_class
    substr_matches = [(cn, addr) for cn, addr in json_classes 
                      if hpp_lower in cn.lower() and cn.lower() != hpp_lower]
    if len(substr_matches) == 1:
        return substr_matches[0][0]
    
    # Strategy 3: json_class is substring of hpp_class
    rev_substr = [(cn, addr) for cn, addr in json_classes
                  if cn.lower() in hpp_lower and cn.lower() != hpp_lower]
    if len(rev_substr) == 1:
        return rev_substr[0][0]
    
    # Strategy 4: hpp_class + "Class" matches
    suffix_match = [(cn, addr) for cn, addr in json_classes
                    if cn.lower() == hpp_lower + "class"]
    if len(suffix_match) == 1:
        return suffix_match[0][0]
    
    # Strategy 5: hpp_class without "Class" suffix matches
    if hpp_lower.endswith("class") and len(hpp_lower) > 5:
        base = hpp_lower[:-5]
        base_matches = [(cn, addr) for cn, addr in json_classes if cn.lower() == base]
        if len(base_matches) == 1:
            return base_matches[0][0]
    
    return None


# ── Main Annotation Logic ──────────────────────────────────────────────────

def annotate_file(filepath: Path, class_method_lookup: dict, global_lookup: dict,
                  ctor_lookup: dict, dtor_lookup: dict,
                  method_to_classes: dict,
                  dry_run: bool = False) -> list:
    """
    Annotate a single .hpp file. Returns list of change descriptions.
    """
    if is_skip_file(filepath):
        return []
    
    try:
        original = filepath.read_text(encoding="utf-8-sig")
    except Exception as e:
        return [f"ERROR reading {filepath}: {e}"]
    
    lines = original.splitlines()
    changes = []
    new_lines = list(lines)
    
    # Parse class context
    line_to_class = parse_class_context(lines)
    
    # Collect per-file stats for reporting
    match_types = defaultdict(int)
    
    # Scan for function declarations
    for i, line in enumerate(lines):
        # Skip if already has address annotation
        if has_address_annotation(line):
            continue
        
        addr = None
        label = ""
        
        # ── Strategy 1: Constructor matching ──
        ctor_class, _ = is_ctor_declaration(line)
        if ctor_class:
            if ctor_class.lower() in ctor_lookup:
                addr = ctor_lookup[ctor_class.lower()]
                label = f"ctor:{ctor_class}"
        
        # ── Strategy 2: Regular function declarations (including destructors) ──
        if not addr:
            if not is_func_declaration(line):
                continue
            if is_forward_declaration(line):
                continue
            
            func_name = extract_func_name(line)
            if not func_name:
                continue
            
            class_name = get_class_name_at_line(line_to_class, i)
            
            # ── Strategy 2a: Destructor matching ──
            if func_name.startswith("~"):
                dtor_class = func_name[1:]  # strip ~
                if dtor_class.lower() in dtor_lookup:
                    addr = dtor_lookup[dtor_class.lower()]
                    label = f"dtor:{dtor_class}"
            
            # ── Strategy 2b: Class + method exact match ──
            if not addr and class_name:
                key = (class_name.lower(), func_name.lower())
                if key in class_method_lookup:
                    addr = class_method_lookup[key]
                    label = "class_method"
            
            # ── Strategy 2c: Method-only unique match ──
            if not addr:
                candidates = method_to_classes.get(func_name.lower(), [])
                if len(candidates) == 1:
                    addr = candidates[0][1]
                    label = f"method_only:{candidates[0][0]}"
            
            # ── Strategy 2d: Fuzzy class matching ──
            if not addr and class_name and func_name.lower() in method_to_classes:
                candidates = method_to_classes[func_name.lower()]
                if len(candidates) > 1:
                    matched_class = fuzzy_class_match(class_name, candidates)
                    if matched_class:
                        # Find the address for the matched class
                        for cn, a in candidates:
                            if cn == matched_class:
                                addr = a
                                label = f"fuzzy:{class_name}→{matched_class}"
                                break
            
            # ── Strategy 2e: Global function lookup ──
            if not addr:
                key = func_name.lower()
                if key in global_lookup:
                    addr = global_lookup[key]
                    label = "global"
        
        if not addr:
            continue
        
        # Add annotation
        stripped = lines[i].rstrip()
        # Check that we're not adding a duplicate trailing annotation
        annotation = f"  // {addr}"
        new_lines[i] = stripped + annotation
        changes.append(f"  L{i+1}: {label} -> {addr}")
        match_types[label.split(":")[0]] += 1
    
    if changes and not dry_run:
        new_content = "\n".join(new_lines)
        # Preserve trailing newline
        if original.endswith("\n"):
            new_content += "\n"
        filepath.write_text(new_content, encoding="utf-8")
    
    return changes


def main():
    parser = argparse.ArgumentParser(description="Auto-annotate function addresses in .hpp files")
    parser.add_argument("--dry-run", action="store_true", help="Preview changes without applying")
    parser.add_argument("--verbose", "-v", action="store_true", help="Show per-file details")
    parser.add_argument("--file", "-f", type=str, help="Process a single file (relative to src/)")
    args = parser.parse_args()
    
    # Build lookups
    print("Building lookup tables from functions.json...")
    class_method_lookup, global_lookup, ctor_lookup, dtor_lookup, method_to_classes = \
        build_lookup(FUNCTIONS_JSON)
    print(f"  Class methods: {len(class_method_lookup)}")
    print(f"  Global functions: {len(global_lookup)}")
    print(f"  Constructors: {len(ctor_lookup)}")
    print(f"  Destructors: {len(dtor_lookup)}")
    print(f"  Unique method names: {sum(1 for v in method_to_classes.values() if len(v) == 1)} / {len(method_to_classes)} total")
    
    # Get files to process
    if args.file:
        files = [SRC_DIR / args.file]
    else:
        files = sorted(SRC_DIR.rglob("*.hpp"))
    
    # Filter out skip files
    files = [f for f in files if not is_skip_file(f)]
    print(f"Processing {len(files)} .hpp files...")
    
    total_changes = 0
    files_changed = 0
    all_match_types = defaultdict(int)
    
    for fp in files:
        changes = annotate_file(fp, class_method_lookup, global_lookup,
                               ctor_lookup, dtor_lookup, method_to_classes,
                               dry_run=args.dry_run)
        if changes:
            files_changed += 1
            total_changes += len(changes)
            if args.verbose or args.dry_run:
                rel = fp.relative_to(Path("."))
                print(f"\n{rel} ({len(changes)} annotations):")
                for c in changes:
                    print(c)
    
    mode = "Would add" if args.dry_run else "Added"
    print(f"\n{mode} {total_changes} address annotations across {files_changed} files.")
    
    if args.dry_run:
        print("\nRun without --dry-run to apply changes.")


if __name__ == "__main__":
    main()
