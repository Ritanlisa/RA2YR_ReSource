#!/usr/bin/env python3
"""sync_functions_json_names.py — Update functions.json name fields to match hpp declarations.

Reads hpp files and extracts declared function names at annotated addresses.
Then updates functions.json name field where hpp name differs from json name.
Only modifies the 'name' field — all hook.* and call.* fields preserved.
"""

import json, re, sys
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).resolve().parent.parent

# --- Address normalization ---
def normalize_addr(addr):
    if not addr:
        return ""
    a = str(addr).strip().upper()
    if a.startswith("0X"):
        a = "0X" + a[2:]
    a = a.replace("0x", "0X").upper()
    if not a.startswith("0X"):
        a = "0x" + a.lstrip("0X")
        if a.startswith("0x"):
            a = "0X" + a[2:].upper()
    hex_part = a[2:] if a.startswith("0X") else a
    hex_part = hex_part.zfill(8)
    return "0X" + hex_part


# --- Name normalization for comparison ---
def normalize_name(name):
    """Normalize a function name for comparison."""
    if not name:
        return name
    n = name
    n = n.rstrip('_')
    n = re.sub(r'_{3,}', '_', n)
    n = re.sub(r'vt\[\s*(\d+)\s*\]', r'vt_\1', n)
    return n


def names_equal(a, b):
    """Compare two names, case-insensitive after normalization."""
    if not a or not b:
        return False
    return normalize_name(a).lower() == normalize_name(b).lower()


# --- HPP extraction (DECLARED names only, no comment override) ---
def _find_enclosing_class(lines, line_no):
    """Find enclosing class/struct/namespace for a line (0-indexed)."""
    for j in range(line_no, max(0, line_no - 800), -1):
        cls_match = re.search(r'^\s*(?:class|struct|namespace)\s+(\w+)', lines[j])
        if not cls_match:
            continue
        name = cls_match.group(1)
        depth = 0
        for k in range(j, min(len(lines), line_no + 1)):
            depth += lines[k].count('{') - lines[k].count('}')
            if depth > 0:
                return name
        return None
    return None


def extract_hpp_declared_names(directories):
    """Extract address -> DECLARED function name from hpp files.
    
    Uses the actual C++ function declaration name (not comment-based overrides).
    Skips data-section annotations (// data: 0xADDR).
    """
    addr_pattern = re.compile(r'//\s*(?:IDA\s+)?(0x[0-9A-Fa-f]{5,8})')
    func_pattern = re.compile(r'(\w[\w:]*(?:<[^>]*>)?)\s*\([^)]*\)\s*(?:const\s*)?\s*;\s*//\s*0x')
    data_pattern = re.compile(r'//\s*data:\s*0x[0-9A-Fa-f]{5,8}')
    
    result = {}  # addr -> {"name": str, "files": [str]}
    
    for directory in directories:
        dirpath = ROOT / directory
        if not dirpath.exists():
            continue
        for hpp in dirpath.rglob("*.hpp"):
            try:
                with open(hpp, encoding='utf-8', errors='replace') as f:
                    lines = f.readlines()
            except Exception:
                continue
            rel = str(hpp.relative_to(ROOT))
            for lineno, line in enumerate(lines, 1):
                # Skip data section annotations
                if data_pattern.search(line):
                    continue
                m = addr_pattern.search(line)
                if not m:
                    continue
                addr = normalize_addr(m.group(1))
                
                # Extract declared function name
                name = None
                fm = func_pattern.search(line)
                if fm:
                    name = fm.group(1)
                
                # Skip if no function name found (variable/other annotation)
                if not name:
                    continue
                
                # Add class/namespace context
                if name and '::' not in name:
                    cls_name = _find_enclosing_class(lines, lineno - 1)
                    if cls_name:
                        name = f"{cls_name}::{name}"
                
                if addr not in result:
                    result[addr] = {"name": name, "files": []}
                result[addr]["files"].append(f"{rel}:{lineno}")
                # Update name if current one has :: and stored doesn't
                if name and '::' in name:
                    stored = result[addr].get("name")
                    if not stored or '::' not in stored:
                        result[addr]["name"] = name
                elif name and not result[addr]["name"]:
                    result[addr]["name"] = name
    
    return result


def main():
    print("Loading functions.json...", file=sys.stderr)
    json_path = ROOT / "injectFunctionTest" / "functions.json"
    with open(json_path, 'r', encoding='utf-8') as f:
        data = json.load(f)
    
    funcs = data["functions"]
    
    # Snapshot BEFORE
    completed_before = sum(1 for f in funcs if f.get("hook", {}).get("completed"))
    done_before = sum(1 for f in funcs if f.get("hook", {}).get("done"))
    idempotent_before = sum(1 for f in funcs if f.get("hook", {}).get("idempotent"))
    
    print(f"Before: completed={completed_before}, done={done_before}, idempotent={idempotent_before}", file=sys.stderr)
    
    # Extract hpp declared names
    print("Extracting hpp declared names...", file=sys.stderr)
    hpp_names = extract_hpp_declared_names(["src", "include/gamemd"])
    print(f"  Extracted {len(hpp_names)} unique hpp addresses with declared names", file=sys.stderr)
    
    # Build address -> json_entry index
    json_by_addr = {}
    for f in funcs:
        addr = normalize_addr(f.get("address", ""))
        if addr:
            json_by_addr[addr] = f
    
    # Compare and update
    updated = 0
    skipped_no_hpp = 0
    skipped_same = 0
    changes = []
    
    for addr, json_entry in json_by_addr.items():
        if addr not in hpp_names:
            skipped_no_hpp += 1
            continue
        
        hpp_name = hpp_names[addr]["name"]
        json_name = json_entry.get("name", "")
        
        if not hpp_name:
            continue
        
        if names_equal(json_name, hpp_name):
            skipped_same += 1
            continue
        
        # Name differs — update
        old_name = json_name
        json_entry["name"] = hpp_name
        updated += 1
        changes.append({
            "addr": addr,
            "old": old_name,
            "new": hpp_name,
            "files": hpp_names[addr]["files"]
        })
    
    print(f"\nResults:", file=sys.stderr)
    print(f"  Same name: {skipped_same}", file=sys.stderr)
    print(f"  No hpp annotation: {skipped_no_hpp}", file=sys.stderr)
    print(f"  Updated: {updated}", file=sys.stderr)
    
    # Verify hook fields unchanged
    completed_after = sum(1 for f in funcs if f.get("hook", {}).get("completed"))
    done_after = sum(1 for f in funcs if f.get("hook", {}).get("done"))
    idempotent_after = sum(1 for f in funcs if f.get("hook", {}).get("idempotent"))
    
    print(f"\nAfter: completed={completed_after}, done={done_after}, idempotent={idempotent_after}", file=sys.stderr)
    
    if completed_before != completed_after:
        print(f"ERROR: completed changed! {completed_before} -> {completed_after}", file=sys.stderr)
        sys.exit(1)
    if done_before != done_after:
        print(f"ERROR: done changed! {done_before} -> {done_after}", file=sys.stderr)
        sys.exit(1)
    if idempotent_before != idempotent_after:
        print(f"ERROR: idempotent changed! {idempotent_before} -> {idempotent_after}", file=sys.stderr)
        sys.exit(1)
    
    # Save
    print(f"\nSaving functions.json...", file=sys.stderr)
    with open(json_path, 'w', encoding='utf-8') as f:
        json.dump(data, f, indent=2)
    
    # Save change log
    changes_path = ROOT / ".omo" / "name_sync_changes.json"
    with open(changes_path, 'w', encoding='utf-8') as f:
        json.dump(changes, f, indent=2)
    
    print(f"Changes log: {changes_path}", file=sys.stderr)
    
    # Category breakdown
    class_diff = sum(1 for c in changes if '::' in c['old'] and '::' in c['new'] 
                     and c['old'].split('::')[0] != c['new'].split('::')[0])
    method_diff = sum(1 for c in changes if '::' in c['old'] and '::' in c['new'] 
                      and c['old'].split('::')[0] == c['new'].split('::')[0])
    sub_named = sum(1 for c in changes if c['old'].startswith('sub_'))
    other = len(changes) - class_diff - method_diff - sub_named
    
    print(f"\nChange categories:", file=sys.stderr)
    print(f"  class_diff: {class_diff}", file=sys.stderr)
    print(f"  method_diff: {method_diff}", file=sys.stderr)
    print(f"  sub_* -> named: {sub_named}", file=sys.stderr)
    print(f"  other: {other}", file=sys.stderr)
    
    print(f"\nDone. {updated} name(s) updated.", file=sys.stderr)


if __name__ == "__main__":
    main()
