#!/usr/bin/env python3
"""Build vtable_offsets.json by cross-referencing header annotations with IDA binary vtable dump.

Parses two annotation formats:
  1. `// [N] 0xADDR Description` — on line BEFORE virtual declaration
  2. `// 0xADDR` — inline on SAME line as virtual declaration

Priority: inline > previous-line annotation > declaration-order fallback.
"""
import re, json, sys, os
from pathlib import Path

PROJECT_ROOT = Path(__file__).resolve().parent.parent
OUTPUT_PATH = PROJECT_ROOT / "tools" / "vtable_offsets.json"
IDA_DUMP_PATH = PROJECT_ROOT / "tools" / "_ida_dump.json"


def load_ida_dump():
    if not IDA_DUMP_PATH.exists():
        print(f"WARNING: {IDA_DUMP_PATH} not found. No IDA cross-reference possible.")
        return {}
    with open(IDA_DUMP_PATH, encoding='utf-8') as f:
        return json.load(f)


def extract_code_name(line):
    """Extract the C++ method name from a virtual declaration line."""
    m = re.search(r'virtual\s+(?:[\w:<>,*\s&]+)\s+([~\w]+|operator\s*\S+)\s*\(', line)
    if m:
        name = m.group(1)
        if name not in ('virtual', 'int', 'bool', 'void', 'float', 'double', 'char',
                       'short', 'long', 'unsigned', 'BYTE', 'WORD', 'DWORD', 'HRESULT',
                       'uint8_t', 'uint16_t', 'uint32_t', 'struct', 'class'):
            return name
    m2 = re.search(r'virtual\s+(~\w+)\s*\(', line)
    if m2:
        return m2.group(1)
    return None


def resolve_addr(addr, ida_dump):
    """Look up an address in the IDA dump and return byte_offset."""
    for key in (hex(addr), f"0x{addr:X}", f"0x{addr:08X}"):
        entry = ida_dump.get(key)
        if entry:
            return entry['byte_offset']
    return None


def parse_annotations_from_header(rel_path, class_name, ida_dump):
    """Parse a header file, extracting virtual declarations and their binary addresses."""
    full_path = PROJECT_ROOT / rel_path
    if not full_path.exists():
        return {}

    with open(full_path, encoding='utf-8', errors='replace') as f:
        lines = f.readlines()

    # Find class body bounds
    in_class = False
    brace_depth = 0
    class_start = 0
    class_end = len(lines)
    
    class_name_short = class_name.split('::')[-1]
    for i, line in enumerate(lines):
        if not in_class:
            if re.match(r'^\s*(?:class|struct)\s+' + re.escape(class_name_short) + r'\b', line.strip()):
                in_class = True
                brace_depth = line.count('{') - line.count('}')
                class_start = i
        else:
            brace_depth += line.count('{') - line.count('}')
            if brace_depth <= 0:
                class_end = i + 1
                break

    # Extract virtual declarations with annotation addresses
    entries = {}
    prev_annot_addr = None
    prev_annot_text = ""
    
    for i in range(class_start, class_end):
        line = lines[i]
        stripped = line.strip()
        
        # Check for `// [N] 0xADDR ...` annotation
        annot_m = re.search(r'//\s*\[(\d+)\]\s*(0x[0-9A-Fa-f]+)\s+(.*)', stripped)
        if annot_m:
            prev_annot_addr = int(annot_m.group(2), 16)
            prev_annot_text = annot_m.group(3).strip()
            continue  # Don't process as virtual
        
        if 'virtual' not in stripped or '(' not in stripped:
            continue
        
        code_name = extract_code_name(stripped)
        if not code_name:
            prev_annot_addr = None
            prev_annot_text = ""
            continue
        
        found = False
        
        # Check if annotation address matches the code_name
        annot_matches = False
        if prev_annot_addr:
            # Check if annotation text contains the code_name (fuzzy match)
            if code_name.lower() in prev_annot_text.lower():
                annot_matches = True
            else:
                # Also check if IDA name matches
                bo = resolve_addr(prev_annot_addr, ida_dump)
                if bo is not None:
                    # The annotation resolves but check if it's really our method
                    for key in (hex(prev_annot_addr), f"0x{prev_annot_addr:X}", f"0x{prev_annot_addr:08X}"):
                        entry = ida_dump.get(key)
                        if entry and code_name.lower() in entry.get('ida_name', '').lower():
                            annot_matches = True
                            break
        
        # Priority 1: matching annotation
        if prev_annot_addr and annot_matches:
            bo = resolve_addr(prev_annot_addr, ida_dump)
            if bo is not None:
                entries[code_name] = bo
                found = True
        
        # Priority 2: inline `// 0xADDR` on same line
        if not found:
            inline_m = re.search(r'//\s*(0x[0-9A-Fa-f]+)', stripped)
            if inline_m:
                addr = int(inline_m.group(1), 16)
                bo = resolve_addr(addr, ida_dump)
                if bo is not None:
                    entries[code_name] = bo
                    found = True
        
        # Priority 3: non-matching annotation (best available)
        if not found and prev_annot_addr:
            bo = resolve_addr(prev_annot_addr, ida_dump)
            if bo is not None:
                entries[code_name] = bo
                found = True
        
        # Priority 4: direct byte offset from annotation (surface.hpp style: // [N] 0xXX)
        if not found and prev_annot_addr and prev_annot_addr <= 0xFFFF:
            entries[code_name] = prev_annot_addr
            found = True
        
        prev_annot_addr = None
        prev_annot_text = ""
    
    return entries


def build_offsets(ida_dump):
    header_files = {
        'src/object/object.hpp': 'ObjectClass',
        'src/render/surface.hpp': 'SurfaceClass',
        'src/core/vector.hpp': 'VectorClass',
        'src/ui/command_class.hpp': 'CommandClass',
    }

    result = {}
    stats = {'total': 0, 'resolved': 0}

    for rel_path, class_name in header_files.items():
        entries = parse_annotations_from_header(rel_path, class_name, ida_dump)
        if entries:
            result[class_name] = entries
            stats['total'] += len(entries)
            stats['resolved'] += len(entries)
            print(f"  {class_name}: {len(entries)} methods")

    return result, stats


def main():
    ida_dump = load_ida_dump()
    print(f"IDA dump entries: {len(ida_dump)}")

    offsets, stats = build_offsets(ida_dump)
    print(f"\nStats: total={stats['total']} resolved={stats['resolved']}")

    known = {
        ('ObjectClass', 'Disappear'): 440,
        ('ObjectClass', 'GetMapCoords'): 660,
        ('ObjectClass', 'IsActive'): 288,
        ('ObjectClass', 'HasC4'): 328,
        ('ObjectClass', 'UnInit'): 468,
        ('ObjectClass', 'MarkForRedraw'): 528,
    }
    print("\nVerification:")
    all_ok = True
    for (cls, method), expected in known.items():
        actual = offsets.get(cls, {}).get(method)
        status = "OK" if actual == expected else "FAIL"
        if actual != expected:
            all_ok = False
        print(f"  [{status}] {cls}::{method} = {actual} (expected {expected})")

    with open(OUTPUT_PATH, 'w', encoding='utf-8') as f:
        json.dump(offsets, f, indent=2, sort_keys=True)

    print(f"\nWrote {OUTPUT_PATH}")
    if not all_ok:
        print("ERROR: Some known values do not match!")
        sys.exit(1)


if __name__ == '__main__':
    main()
