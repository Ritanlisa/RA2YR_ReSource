#!/usr/bin/env python3
"""
T3 v2: Extract extern global variable declarations with // data: annotations
Handles:
  - extern Type name; // data: 0xADDR
  - extern Type (*name)(...); // data: 0xADDR  (function pointers)
  - // data: 0xADDR: name  followed by  extern Type name;  (cmdline.hpp pattern)
"""
import re, json, os
from pathlib import Path

ROOT = Path(__file__).parent.parent
OUT = ROOT / "anchors" / "global_types.json"

TARGET_FILES = [
    "src/structure/globals_structure.hpp",
    "src/core/globals_core.hpp",
    "src/entity/globals_entity.hpp",
    "src/system/globals_system.hpp",
    "src/object/globals_object.hpp",
    "src/render/globals_render.hpp",
    "src/app/cmdline.hpp",
]

# Regex 1: Standard extern with inline // data: annotation
INLINE_RE = re.compile(
    r'^\s*extern\s+(.+?)\s*;'
    r'\s*//\s*data:\s*(0x[0-9A-Fa-f]{2,8})\b',
    re.IGNORECASE
)

# Regex 2: Comment-line pattern (cmdline.hpp)
#   // data: 0xADDR: variableName
COMMENT_DATA_RE = re.compile(
    r'^\s*//\s*data:\s*(0x[0-9A-Fa-f]{2,8})\s*:\s*(\w+)',
    re.IGNORECASE
)

# Regex 3: extern line without inline data (for cmdline pairing)
EXTERN_NO_DATA_RE = re.compile(
    r'^\s*extern\s+(.+?)\s*;'
)


def extract_name_from_type(type_str):
    """Extract variable name from type declaration."""
    s = type_str.strip()

    # Case 1: Function pointer: Type (*name)(params)
    fp_match = re.match(r'^(.+?)\s*\(\*\s*(\w+)\s*\)\s*\(.*\)\s*$', s)
    if fp_match:
        clean_type = fp_match.group(1).strip() + ' (*)()'
        var_name = fp_match.group(2)
        return clean_type, var_name

    # Case 2: Array: Type name[size]
    arr_match = re.match(r'^(.+?)\s+(\w+)\s*(\[.*\])\s*$', s)
    if arr_match:
        clean_type = arr_match.group(1).strip()
        var_name = arr_match.group(2)
        return clean_type, var_name

    # Case 3: Simple: Type name
    simple_match = re.match(r'^(.+?)\s+(\w+)\s*$', s)
    if simple_match:
        clean_type = simple_match.group(1).strip()
        var_name = simple_match.group(2)
        return clean_type, var_name

    return None, None


def parse_file(filepath):
    """Parse one file, return list of {type, name, addr} dicts."""
    entries = []
    with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
        lines = f.readlines()

    i = 0
    while i < len(lines):
        line = lines[i]

        # Try inline pattern first
        m = INLINE_RE.search(line)
        if m:
            raw_type = m.group(1).strip()
            addr = m.group(2).upper()
            clean_type, var_name = extract_name_from_type(raw_type)
            if clean_type and var_name:
                entries.append({
                    "type": re.sub(r'\s+', ' ', clean_type),
                    "name": var_name,
                    "addr": addr,
                    "confidence": "ANCHORED"
                })
            i += 1
            continue

        # Try comment-line pattern
        cm = COMMENT_DATA_RE.search(line)
        if cm:
            addr = cm.group(1).upper()
            expected_name = cm.group(2)
            if i + 1 < len(lines):
                next_line = lines[i + 1]
                em = EXTERN_NO_DATA_RE.search(next_line)
                if em and 'extern' in next_line:
                    raw_type = em.group(1).strip()
                    clean_type, var_name = extract_name_from_type(raw_type)
                    if clean_type and var_name and var_name == expected_name:
                        entries.append({
                            "type": re.sub(r'\s+', ' ', clean_type),
                            "name": var_name,
                            "addr": addr,
                            "confidence": "ANCHORED"
                        })
                        i += 2
                        continue
            i += 1
            continue

        i += 1

    return entries


def main():
    all_entries = {}
    for rel in TARGET_FILES:
        fp = ROOT / rel
        if not fp.exists():
            print(f"[WARN] File not found: {fp}")
            continue
        entries = parse_file(fp)
        for e in entries:
            addr = e["addr"]
            norm_addr = f"0x{int(addr, 16):X}"
            all_entries[norm_addr] = {
                "type": e["type"],
                "name": e["name"],
                "confidence": e["confidence"]
            }

    sorted_entries = dict(sorted(all_entries.items(), key=lambda x: int(x[0], 16)))

    os.makedirs(OUT.parent, exist_ok=True)
    with open(OUT, 'w', encoding='utf-8') as f:
        json.dump(sorted_entries, f, indent=2, ensure_ascii=False)

    print(f"[OK] {len(sorted_entries)} entries -> {OUT}")

    # Verify: count missed
    data_re = re.compile(r'//\s*data:\s*(0x[0-9A-Fa-f]{2,8})', re.I)
    captured = set(sorted_entries.keys())
    missed = 0
    for rel in TARGET_FILES:
        fp = ROOT / rel
        if not fp.exists():
            continue
        with open(fp, 'r', encoding='utf-8', errors='replace') as f:
            for line_no, line in enumerate(f, 1):
                m = data_re.search(line)
                if m:
                    addr = f"0x{int(m.group(1), 16):X}"
                    if addr not in captured:
                        missed += 1
                        if missed <= 15:
                            # Show what was missed
                            print(f"  MISS: {rel}:{line_no} [{addr}] {line.strip()[:120]}")
    if missed:
        print(f"[WARN] {missed} data-annotated lines not captured")
    else:
        print(f"[OK] All data-annotated lines captured")


if __name__ == "__main__":
    main()
