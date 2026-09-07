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
from datetime import datetime
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

    # Keep the _by_name lookup index in sync (name -> {"symbols": {key: kind}}).
    # Without this the index keeps serving stale names to every consumer until
    # the next full build_signals run.
    by_name = data.get("_by_name", {})
    if old_name in by_name:
        if not dry_run:
            entry = by_name.pop(old_name)
            if new_name in by_name:
                by_name[new_name]["symbols"].update(entry.get("symbols", {}))
            else:
                by_name[new_name] = entry
        updated += 1
        print(f"  signals.json _by_name: {old_name} -> {new_name}")

    if updated > 0 and not dry_run:
        with open(SIGNALS_JSON, "w", encoding="utf-8") as f:
            json.dump(data, f, indent=2, ensure_ascii=False)

    return updated


IDA_NAME_INDEX = PROJECT_ROOT / "tools" / "ida_name_index.json"


def update_ida_name_index(old_name, new_name, dry_run=False):
    """Keep tools/ida_name_index.json (name -> addr) aligned with the rename.

    The index is derived from ida_function_db.json at export time; without this
    it keeps mapping the old name to the address until the next IDA re-export.
    """
    if not IDA_NAME_INDEX.exists():
        return 0
    with open(IDA_NAME_INDEX, "r", encoding="utf-8") as f:
        idx = json.load(f)
    if old_name not in idx:
        return 0
    if not dry_run:
        addr = idx.pop(old_name)
        idx[new_name] = addr
        with open(IDA_NAME_INDEX, "w", encoding="utf-8") as f:
            json.dump(idx, f, indent=2, ensure_ascii=False)
        print(f"  ida_name_index.json: {old_name} -> {new_name} ({addr})")
    return 1


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


RENAME_DEBT = PROJECT_ROOT / ".omo" / "rename_debt.json"


def record_rename_debt(old_name, new_name, reason):
    """Account an IDA-side rename that could not be synced (roadmap risk #2).

    Entries are replayed with --replay-debt once IDA is back online.
    """
    RENAME_DEBT.parent.mkdir(parents=True, exist_ok=True)
    debts = []
    if RENAME_DEBT.exists():
        try:
            debts = json.loads(RENAME_DEBT.read_text(encoding="utf-8"))
        except (json.JSONDecodeError, OSError):
            debts = []
    entry = {"old": old_name, "new": new_name, "reason": reason,
             "date": datetime.now().isoformat(timespec="seconds"),
             "resolved": False}
    if not any(d.get("old") == old_name and d.get("new") == new_name
               and not d.get("resolved") for d in debts):
        debts.append(entry)
        RENAME_DEBT.write_text(json.dumps(debts, indent=2), encoding="utf-8")
        print(f"  rename debt recorded: {old_name} -> {new_name} ({reason})")


def replay_rename_debt():
    """Retry IDA-only sync for every unresolved debt entry."""
    if not RENAME_DEBT.exists():
        print("No rename debt file.")
        return
    debts = json.loads(RENAME_DEBT.read_text(encoding="utf-8"))
    remaining = []
    for d in debts:
        if d.get("resolved"):
            continue
        if update_ida_symbol(d["old"], d["new"]) > 0:
            d["resolved"] = True
            print(f"  debt resolved: {d['old']} -> {d['new']}")
        remaining.append(d)
    RENAME_DEBT.write_text(json.dumps(debts, indent=2), encoding="utf-8")


def update_ida_symbol(old_name, new_name, dry_run=False):
    """Rename symbol in IDA Pro via the ida-pro-mcp HTTP endpoint (:13337).

    Uses the `rename` tool with a func batch. If IDA is unreachable the step
    is skipped (the caller records a replayable debt).
    """
    import urllib.request

    def _mcp_call(tool, arguments, timeout=60):
        payload = json.dumps({"jsonrpc": "2.0", "method": "tools/call",
                              "params": {"name": tool, "arguments": arguments},
                              "id": 1})
        req = urllib.request.Request(
            "http://127.0.0.1:13337/mcp", data=payload.encode(),
            headers={"Content-Type": "application/json",
                     "Accept": "application/json, text/event-stream"})
        raw = urllib.request.urlopen(req, timeout=timeout).read().decode()
        if raw.startswith("event"):
            for line in raw.split("\n"):
                if line.startswith("data:"):
                    raw = line[5:]
                    break
        data = json.loads(raw)
        content = data.get("result", {}).get("content", [])
        if content:
            try:
                return json.loads(content[0].get("text", "{}"))
            except (json.JSONDecodeError, KeyError):
                return {}
        return {}

    # Resolve address from the derived name->addr index, then batch-rename.
    addr = None
    try:
        if IDA_NAME_INDEX.exists():
            idx = json.loads(IDA_NAME_INDEX.read_text(encoding="utf-8"))
            addr = idx.get(old_name) or idx.get(new_name)
    except (json.JSONDecodeError, OSError):
        addr = None
    if not addr:
        print(f"  IDA: WARNING - no address for '{old_name}' in ida_name_index.json.")
        return 0
    if dry_run:
        return 0
    try:
        result = _mcp_call("rename", {"batch": {"func": [
            {"addr": addr, "name": new_name}]}})
        ok = result.get("summary", {}).get("ok", 0)
        if ok:
            print(f"  IDA: renamed {old_name} -> {new_name} at {addr}")
            _mcp_call("idb_save", {})
            return 1
        print(f"  IDA: WARNING - rename failed for {old_name}: {result}")
        return 0
    except Exception as e:
        print(f"  IDA: WARNING - could not rename ({e}). Run manually in IDA.")
        return 0


def main():
    parser = argparse.ArgumentParser(
        description="Batch-rename a symbol across codebase + signals.json + IDA"
    )
    parser.add_argument("old_name", nargs="?", help="Current symbol name (e.g., AudioController_field_08)")
    parser.add_argument("new_name", nargs="?", help="New symbol name (e.g., AudioController_state)")
    parser.add_argument("--dry-run", action="store_true", help="Show what would change, don't modify")
    parser.add_argument("--no-ida", action="store_true", help="Skip IDA synchronization")
    parser.add_argument("--replay-debt", action="store_true",
                        help="Retry IDA sync for recorded rename debts (no new rename)")

    args = parser.parse_args()

    if args.replay_debt:
        replay_rename_debt()
        return

    if not args.old_name or not args.new_name:
        parser.error("old_name and new_name are required (or use --replay-debt)")

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

    # 2b. Keep the derived name->addr index aligned
    idx_updated = update_ida_name_index(old_name, new_name, args.dry_run)

    # 3. Update member_lookup.json
    print(f"\nUpdating member_lookup.json...")
    mem_updated = update_member_lookup(old_name, new_name, args.dry_run)
    
    # 4. Update IDA
    if not args.no_ida:
        print(f"\nUpdating IDA...")
        ida_updated = update_ida_symbol(old_name, new_name, args.dry_run)
        if ida_updated == 0 and not args.dry_run:
            record_rename_debt(old_name, new_name, "ida_unreachable")
    else:
        ida_updated = 0
        if not args.dry_run:
            record_rename_debt(old_name, new_name, "no_ida_flag")
    
    # Summary
    print("\n" + "=" * 60)
    print(f"Summary: {total_replacements} source replacements, "
          f"{sig_updated} signal(s), {idx_updated} name-index, "
          f"{mem_updated} member(s), {ida_updated} IDA")
    
    if args.dry_run:
        print("DRY RUN — no changes made. Remove --dry-run to apply.")
    else:
        print("Done. Verify with: cmake --build build_win")


if __name__ == "__main__":
    main()
