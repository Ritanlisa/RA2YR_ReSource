#!/usr/bin/env python3
"""scan_existing_defs.py — Scan src/**/*.cpp and src/**/*.hpp for global variable
definitions and extern declarations. Build auto-exclude set for duplicate prevention.

Output: tools/existing_defs.json — JSON array of {name, file, is_definition, address_comment}

Usage: python tools/scan_existing_defs.py [--verbose]
"""

import json
import os
import re
import sys
from pathlib import Path


# ── Regex patterns (non-VERBOSE for simplicity) ──────────────────────────────

# Definition with `= value;` — captures name from `Type name = ...;`
# Matches: Type name = value;  (name NOT followed by '(')
PAT_DEF_WITH_INIT = re.compile(
    r"^\s*"
    r"(?:static\s+|const\s+|constexpr\s+)*"
    r"\S[\s\S]*?"                            # type (non-whitespace start, lazy to name)
    r"\b([a-zA-Z_]\w{0,200})"               # group 1 = name
    r"\s*=\s*"
    r"[^;]*;"
)

# Simple declaration without `=`: `Type name;`
# Excludes extern and function declarations
PAT_DEF_NO_INIT = re.compile(
    r"^\s*"
    r"(?!extern\b)"
    r"(?:static\s+|const\s+|constexpr\s+)*"
    r"\S[\s\S]*?"                            # type
    r"\b([a-zA-Z_]\w{0,200})"               # group 1 = name
    r"\s*;"
)

# Extern declaration: `extern type name;`
PAT_EXTERN = re.compile(
    r"^\s*"
    r"extern\s+"
    r'(?!\"C\"\s)'
    r"[^()\"']*?"                            # type (no parens, no quotes)
    r"\b([a-zA-Z_]\w{0,200})"               # group 1 = name
    r"\s*;"
)

# Address comment extractor: `// 0xADDR` or `// IDA: 0xADDR` anywhere in comment
# Matches: `// 0xA8ED80`, `// IDA: 0xA8ED80`, `// IDA: 0xA8ED80 -- description`
ADDR_RE = re.compile(r"//\s*(?:IDA:\s*)?0x([0-9A-Fa-f]{5,8})\b")

# Function signature: name( ... ) { or name( ... );
FUNC_SIG_RE = re.compile(r"\b([a-zA-Z_]\w*)\s*\([^)]*\)\s*(?:const\s*)?(?:;|\{)")

# Function pointer: (*name)( ... ) = ...;
FUNC_PTR_RE = re.compile(r"\(\s*\*\s*([a-zA-Z_]\w*)\s*\)\s*\([^)]*\)\s*=")

# Member assignment: ->name = or .name =
MEMBER_ASSIGN_RE = re.compile(r"(?:->|\.)\s*([a-zA-Z_]\w*)\s*=")

# Lines that are never variable declarations
SKIP_PATTERNS = [
    re.compile(r"^\s*//"),
    re.compile(r"^\s*#"),
    re.compile(r"^\s*\*"),
    re.compile(r"^\s*namespace\b"),
    re.compile(r"^\s*using\b"),
    re.compile(r"^\s*typedef\b"),
    re.compile(r"^\s*struct\b"),
    re.compile(r"^\s*class\b"),
    re.compile(r"^\s*enum\b"),
    re.compile(r"^\s*template\b"),
    re.compile(r"^\s*return\b"),
    re.compile(r"^\s*if\b"),
    re.compile(r"^\s*else\b"),
    re.compile(r"^\s*for\b"),
    re.compile(r"^\s*while\b"),
    re.compile(r"^\s*switch\b"),
    re.compile(r"^\s*case\b"),
    re.compile(r"^\s*default\b"),
    re.compile(r"^\s*goto\b"),
    re.compile(r"^\s*break\b"),
    re.compile(r"^\s*continue\b"),
    re.compile(r"^\s*delete\b"),
    re.compile(r"^\s*new\b"),
    re.compile(r"^\s*\{"),
    re.compile(r"^\s*\}"),
    re.compile(r"^\s*$"),
    re.compile(r"^\s*(?:virtual|inline|explicit)\b"),
    re.compile(r"^\s*(?:public|private|protected)\s*:"),
]

RESERVED_NAMES = {
    "if", "else", "for", "while", "return", "void", "int", "bool", "char",
    "float", "double", "short", "long", "unsigned", "signed", "auto",
    "const", "static", "extern", "volatile", "register", "sizeof",
    "struct", "class", "enum", "union", "typedef", "namespace", "using",
    "template", "typename", "virtual", "override", "final", "noexcept",
    "public", "private", "protected", "friend", "operator", "explicit",
    "new", "delete", "this", "nullptr", "true", "false", "constexpr",
    "include", "define", "ifdef", "ifndef", "endif", "pragma",
    "case", "default", "switch", "break", "continue", "goto",
}


def is_skip_line(line: str) -> bool:
    for pat in SKIP_PATTERNS:
        if pat.match(line):
            return True
    return False


def extract_addr(line: str) -> str | None:
    m = ADDR_RE.search(line)
    return "0x" + m.group(1).upper() if m else None


def collect_lines(filepath: Path) -> list[str]:
    try:
        return filepath.read_text(encoding="utf-8").split("\n")
    except UnicodeDecodeError:
        return []


def scan_file(filepath: Path) -> list[dict]:
    results = []
    lines = collect_lines(filepath)
    relpath = str(filepath.relative_to(Path(__file__).parent.parent))
    is_hpp = filepath.suffix == ".hpp"

    for i, line in enumerate(lines):
        stripped = line.strip()
        if is_skip_line(line):
            continue

        # ── Extern declarations (both .cpp and .hpp) ──
        if "extern" in stripped:
            m = PAT_EXTERN.match(line)
            if m:
                name = m.group(1)
                if name in RESERVED_NAMES:
                    continue
                addr = extract_addr(line) or (extract_addr(lines[i - 1]) if i > 0 else None)
                results.append({
                    "name": name, "file": relpath,
                    "is_definition": False, "address_comment": addr,
                })
                continue

        # ── .hpp files: only extern declarations above ──
        if is_hpp:
            continue

        # ── Definition with `=` ──
        if "=" in stripped and ";" in stripped:
            m = PAT_DEF_WITH_INIT.match(line)
            if m:
                name = m.group(1)
                if name in RESERVED_NAMES:
                    continue

                # Exclude member assignments
                mm = MEMBER_ASSIGN_RE.search(line)
                if mm and mm.group(1) == name:
                    continue

                # Exclude function definitions unless function pointer
                fm = FUNC_SIG_RE.search(line)
                if fm and not FUNC_PTR_RE.search(line):
                    continue

                addr = extract_addr(line) or (extract_addr(lines[i - 1]) if i > 0 else None)
                results.append({
                    "name": name, "file": relpath,
                    "is_definition": True, "address_comment": addr,
                })
                continue

        # ── Simple declaration without `=` ──
        if ";" in stripped and "=" not in stripped:
            m = PAT_DEF_NO_INIT.match(line)
            if m:
                name = m.group(1)
                if name in RESERVED_NAMES:
                    continue
                if FUNC_SIG_RE.search(line):
                    continue
                addr = extract_addr(line) or (extract_addr(lines[i - 1]) if i > 0 else None)
                results.append({
                    "name": name, "file": relpath,
                    "is_definition": True, "address_comment": addr,
                })

    return results


def main():
    src_root = Path(__file__).parent.parent / "src"
    if not src_root.exists():
        print(f"Error: src directory not found at {src_root}", file=sys.stderr)
        sys.exit(1)

    verbose = "--verbose" in sys.argv

    cpp_files = sorted(src_root.rglob("*.cpp"))
    hpp_files = sorted(src_root.rglob("*.hpp"))
    all_files = cpp_files + hpp_files

    if verbose:
        print(f"Scanning {len(cpp_files)} .cpp files + {len(hpp_files)} .hpp files")

    all_results = []
    for fpath in all_files:
        entries = scan_file(fpath)
        if verbose and entries and len(entries) > 2:
            rel = fpath.relative_to(src_root.parent)
            defs_n = sum(1 for e in entries if e["is_definition"])
            ext_n = sum(1 for e in entries if not e["is_definition"])
            parts = []
            if defs_n:
                parts.append(f"{defs_n} defs")
            if ext_n:
                parts.append(f"{ext_n} externs")
            print(f"  {rel}: {', '.join(parts)}")

        all_results.extend(entries)

    # Deduplicate by name: prefer .cpp definitions over .hpp externs, keep first otherwise
    seen = {}
    for entry in all_results:
        name = entry["name"]
        if name not in seen:
            seen[name] = entry
        elif entry["is_definition"] and not seen[name]["is_definition"]:
            seen[name] = entry

    unique_results = sorted(seen.values(), key=lambda x: x["name"])

    if verbose:
        print(f"\nTotal raw matches: {len(all_results)}")
        print(f"Duplicates removed: {len(all_results) - len(unique_results)}")
        print(f"Unique entries:     {len(unique_results)}")

    out_path = Path(__file__).parent / "existing_defs.json"
    out_path.write_text(json.dumps(unique_results, indent=2), encoding="utf-8")

    defs = [r for r in unique_results if r["is_definition"]]
    externs = [r for r in unique_results if not r["is_definition"]]
    with_addr = [r for r in unique_results if r["address_comment"]]

    print(f"\n{'='*60}")
    print(f"Scan Results: existing_defs.json")
    print(f"{'='*60}")
    print(f"Total unique entries: {len(unique_results)}")
    print(f"  Definitions:         {len(defs)}")
    print(f"  Extern declarations: {len(externs)}")
    print(f"  With address comment:{len(with_addr)}")
    print(f"\nOutput: {out_path}")

    known_check = ["g_DDraw_Active", "CurrentFrame", "RulesClass_Instance"]
    print(f"\nKnown globals check:")
    all_ok = True
    for name in known_check:
        if name in seen:
            entry = seen[name]
            addr = entry["address_comment"] or "(none)"
            ftype = "def" if entry["is_definition"] else "extern"
            print(f"  [OK] {name} ({ftype}, {entry['file']}, addr={addr})")
        else:
            print(f"  [MISSING] {name}")
            all_ok = False

    if len(unique_results) >= 600:
        print(f"\n[OK] Count check passed ({len(unique_results)} >= 600)")
    else:
        print(f"\n[WARN] Count check: only {len(unique_results)} found (target >= 600)")
        all_ok = False

    return 0 if all_ok else 1


if __name__ == "__main__":
    sys.exit(main())
