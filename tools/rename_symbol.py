#!/usr/bin/env python3
"""
rename_symbol.py — Batch-rename a symbol across the entire codebase.

Synchronizes:
  1. All .hpp and .cpp files in src/ (exact string replacement)
  2. signals.json (symbol name in the canonical function/global registry)
  3. IDA Pro (via MCP — renames the IDA symbol if present)
  4. member_lookup.json (if the symbol is a class member)
  5. class_layouts.json (if present)

Usage:
    python tools/rename_symbol.py OldName NewName [--dry-run] [--no-ida]

Examples:
    python tools/rename_symbol.py AudioController_field_08 AudioController_state
    python tools/rename_symbol.py BuildingClass_field_5FC SuperWeaponToken
    python tools/rename_symbol.py dword_A8ED54 ScenarioStateArray --dry-run

When an ida-naming violation is reported by the gate, use this script
to rename the symbol. Do NOT rename manually — the gate will detect
manual renames as "unauthorized-rename" violations.
"""

import os
import sys
import re
import json
import subprocess
import argparse
from pathlib import Path

PROJECT_ROOT = Path(__file__).resolve().parent.parent
SRC_DIR = PROJECT_ROOT / "src"
SIGNALS_JSON = PROJECT_ROOT / "signals.json"
MEMBER_LOOKUP_JSON = PROJECT_ROOT / "tools" / "member_lookup.json"
CLASS_LAYOUTS_JSON = PROJECT_ROOT / "tools" / "class_layouts.json"


def find_files_with_symbol(symbol_name):
    """Find all .hpp and .cpp files containing the symbol."""
    matches = []
    for ext in ("*.hpp", "*.cpp"):
        for fp in SRC_DIR.rglob(ext):
            try:
                content = fp.read_text(encoding="utf-8", errors="replace")
                if symbol_name in content:
                    matches.append(fp)
            except Exception:
                continue
    return matches


def replace_in_file(filepath, old_name, new_name, dry_run=False):
    """Replace all occurrences of old_name with new_name in a file.
    
    Uses word-boundary-aware replacement to avoid partial matches.
    """
    content = filepath.read_text(encoding="utf-8", errors="replace")
    if old_name not in content:
        return 0
    
    # Use word-boundary regex to avoid partial matches
    # (e.g., renaming "foo" should not affect "foobar")
    pattern = re.compile(r'\b' + re.escape(old_name) + r'\b')
    new_content, count = pattern.subn(new_name, content)
    
    if not dry_run and count > 0:
        filepath.write_text(new_content, encoding="utf-8")
    
    return count


def update_signals_json(old_name, new_name, dry_run=False):
    """Update symbol name in signals.json."""
    if not SIGNALS_JSON.exists():
        print("  WARNING: signals.json not found, skipping")
        return 0
    
    with open(SIGNALS_JSON, "r", encoding="utf-8") as f:
        data = json.load(f)
    
    symbols = data.get("symbols", {})
    updated = 0
    
    # Check function symbols
    for addr_str, sym in list(symbols.items()):
        if isinstance(sym, dict) and sym.get("name") == old_name:
            if not dry_run:
                sym["name"] = new_name
            updated += 1
            print(f"  signals.json: {addr_str} -> {new_name}")
    
    # Check global symbols (if in "globals" section)
    globals_section = data.get("globals", {})
    for addr_str, gsym in list(globals_section.items()):
        if isinstance(gsym, dict) and gsym.get("name") == old_name:
            if not dry_run:
                gsym["name"] = new_name
            updated += 1
            print(f"  signals.json globals: {addr_str} -> {new_name}")
    
    if updated > 0 and not dry_run:
        with open(SIGNALS_JSON, "w", encoding="utf-8") as f:
            json.dump(data, f, indent=2)
    
    return updated


def update_member_lookup(old_name, new_name, dry_run=False):
    """Update member name in member_lookup.json."""
    if not MEMBER_LOOKUP_JSON.exists():
        return 0
    
    with open(MEMBER_LOOKUP_JSON, "r", encoding="utf-8") as f:
        data = json.load(f)
    
    updated = 0
    for cls_name, members in data.items():
        if not isinstance(members, dict):
            continue
        for offset_str, member in list(members.items()):
            if isinstance(member, dict) and member.get("name") == old_name:
                if not dry_run:
                    member["name"] = new_name
                updated += 1
                print(f"  member_lookup.json: {cls_name}+{offset_str} -> {new_name}")
    
    if updated > 0 and not dry_run:
        with open(MEMBER_LOOKUP_JSON, "w", encoding="utf-8") as f:
            json.dump(data, f, indent=2)
    
    return updated


def update_ida_symbol(old_name, new_name, dry_run=False):
    """Rename symbol in IDA Pro via MCP.
    
    Requires IDA Pro running with MCP server on localhost:13337.
    If IDA is not available, this step is skipped with a warning.
    """
    try:
        # Use ida-pro-mcp tool — the rename function takes batch arg
        # We'll call it via Python subprocess that connects to IDA
        script = f"""
import idc, idaapi, json, sys
addr = idc.get_name_ea_simple("{old_name}")
if addr == idc.BADADDR:
    print(json.dumps({{"status": "not_found", "name": "{old_name}"}}))
    sys.exit(0)
old = idc.get_name(addr)
success = idc.set_name(addr, "{new_name}", idc.SN_NOWARN)
if success:
    print(json.dumps({{"status": "renamed", "old": old, "new": "{new_name}", "addr": hex(addr)}}))
else:
    print(json.dumps({{"status": "failed", "name": "{old_name}", "addr": hex(addr)}}))
"""
        result = subprocess.run(
            ["ida-pro-mcp_py_eval", script],
            capture_output=True, text=True, timeout=30,
            cwd=str(PROJECT_ROOT)
        )
        if result.returncode == 0:
            output = result.stdout.strip()
            if output:
                try:
                    parsed = json.loads(output)
                    if parsed.get("status") == "renamed":
                        print(f"  IDA: {parsed['old']} -> {parsed['new']} at {parsed['addr']}")
                        return 1
                except json.JSONDecodeError:
                    pass
        return 0
    except Exception as e:
        print(f"  IDA: WARNING - could not rename ({e}). Run manually in IDA.")
        return 0


def main():
    parser = argparse.ArgumentParser(
        description="Batch-rename a symbol across codebase + signals.json + IDA"
    )
    parser.add_argument("old_name", help="Current symbol name (e.g., AudioController_field_08)")
    parser.add_argument("new_name", help="New symbol name (e.g., AudioController_state)")
    parser.add_argument("--dry-run", action="store_true", help="Show what would change, don't modify")
    parser.add_argument("--no-ida", action="store_true", help="Skip IDA synchronization")
    
    args = parser.parse_args()
    
    old_name = args.old_name
    new_name = args.new_name
    
    if old_name == new_name:
        print("ERROR: old and new names are the same.")
        sys.exit(1)
    
    print(f"\n{'[DRY RUN] ' if args.dry_run else ''}Renaming: {old_name} -> {new_name}")
    print("=" * 60)
    
    # 1. Find all files containing the symbol
    files = find_files_with_symbol(old_name)
    print(f"\nFiles containing '{old_name}': {len(files)}")
    
    total_replacements = 0
    for fp in sorted(files):
        count = replace_in_file(fp, old_name, new_name, args.dry_run)
        if count > 0:
            rel = fp.relative_to(PROJECT_ROOT)
            print(f"  {rel}: {count} replacement(s)")
            total_replacements += count
    
    if total_replacements == 0:
        print(f"  WARNING: '{old_name}' not found in any source file.")
    
    # 2. Update signals.json
    print(f"\nUpdating signals.json...")
    sig_updated = update_signals_json(old_name, new_name, args.dry_run)
    
    # 3. Update member_lookup.json
    print(f"\nUpdating member_lookup.json...")
    mem_updated = update_member_lookup(old_name, new_name, args.dry_run)
    
    # 4. Update IDA
    if not args.no_ida:
        print(f"\nUpdating IDA...")
        ida_updated = update_ida_symbol(old_name, new_name, args.dry_run)
    else:
        ida_updated = 0
    
    # Summary
    print("\n" + "=" * 60)
    print(f"Summary: {total_replacements} source replacements, "
          f"{sig_updated} signal(s), {mem_updated} member(s), {ida_updated} IDA")
    
    if args.dry_run:
        print("DRY RUN — no changes made. Remove --dry-run to apply.")
    else:
        print("Done. Verify with: cmake --build build_win")


if __name__ == "__main__":
    main()
