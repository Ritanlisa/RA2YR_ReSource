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
from tempfile import NamedTemporaryFile

PROJECT_ROOT = Path(__file__).resolve().parent.parent
SRC_DIR = PROJECT_ROOT / "src"
SIGNALS_JSON = PROJECT_ROOT / "signals.json"
MEMBER_LOOKUP_JSON = PROJECT_ROOT / "tools" / "member_lookup.json"
CLASS_LAYOUTS_JSON = PROJECT_ROOT / "tools" / "class_layouts.json"


def find_files_with_symbol(symbol_name):
    """Find source files containing a complete symbol or its class-local form."""
    pattern = _symbol_pattern(symbol_name)
    qualified = "::" in symbol_name
    class_name, member_name = (symbol_name.rsplit("::", 1)
                               if qualified else (None, None))
    member_pattern = _symbol_pattern(member_name) if qualified else None
    class_re = (re.compile(r"(?:class|struct)\s+" + re.escape(class_name) + r"\b")
                if qualified else None)
    matches = []
    for ext in ("*.hpp", "*.cpp"):
        for fp in SRC_DIR.rglob(ext):
            try:
                content = fp.read_text(encoding="utf-8", errors="replace")
            except OSError:
                continue
            if pattern.search(content):
                matches.append(fp)
                continue
            if qualified and class_re.search(content) and member_pattern.search(content):
                matches.append(fp)
    return matches


def _replace_class_member_lines(text, class_name, old_member, new_member):
    """Rename a member's unqualified spelling only inside its class body."""
    if not class_name or not old_member or old_member == new_member:
        return text, 0
    member_pattern = _symbol_pattern(old_member)
    lines = text.splitlines(keepends=True)
    depth = 0
    classes = []
    count = 0
    out = []
    class_re = re.compile(r'^\s*(?:class|struct)\s+([A-Za-z_]\w*)')
    for line in lines:
        match = class_re.match(line)
        if match and "{" in line:
            classes.append((match.group(1), depth + line.count("{") - line.count("}")))
        active = any(name == class_name and depth >= start for name, start in classes)
        if active:
            line, n = member_pattern.subn(new_member, line)
            count += n
        out.append(line)
        depth += line.count("{") - line.count("}")
        classes = [(name, start) for name, start in classes if depth >= start]
    return "".join(out), count


def replace_in_file(filepath, old_name, new_name, dry_run=False):
    """Replace a complete C++ symbol and its class-local declaration spelling."""
    content = filepath.read_text(encoding="utf-8", errors="replace")
    pattern = _symbol_pattern(old_name)
    new_content, count = pattern.subn(new_name, content)
    if "::" in old_name:
        class_name, old_member = old_name.rsplit("::", 1)
        new_member = new_name.rsplit("::", 1)[-1] if "::" in new_name else new_name
        new_content, local_count = _replace_class_member_lines(
            new_content, class_name, old_member, new_member)
        count += local_count
    if not dry_run and count > 0:
        filepath.write_text(new_content, encoding="utf-8", newline="\n")
    return count


def _write_json_atomic(path, data, indent=2):
    """Write canonical LF/indent=2 JSON without partial-file exposure."""
    path = Path(path)
    payload = json.dumps(data, indent=indent, ensure_ascii=False) + "\n"
    with NamedTemporaryFile("w", encoding="utf-8", newline="\n",
                            dir=str(path.parent), delete=False) as tmp:
        tmp.write(payload)
        temp_name = tmp.name
    os.replace(temp_name, path)


def update_signals_json(old_name, new_name, dry_run=False):
    """Update canonical symbols, globals and derived name indexes."""
    if not SIGNALS_JSON.exists():
        print("  WARNING: signals.json not found, skipping")
        return {"symbols": 0, "globals": 0, "by_name": 0, "member_indexes": 0}
    data = json.loads(SIGNALS_JSON.read_text(encoding="utf-8"))
    counts = {"symbols": 0, "globals": 0, "by_name": 0, "member_indexes": 0}
    class_name, old_member = (old_name.rsplit("::", 1)
                               if "::" in old_name else (None, old_name))
    new_member = new_name.rsplit("::", 1)[-1] if "::" in new_name else new_name

    symbols = data.get("symbols", {})
    for addr_str, sym in list(symbols.items()):
        if isinstance(sym, dict) and sym.get("name") == old_name:
            if not dry_run:
                sym["name"] = new_name
                if addr_str == old_name:
                    symbols[new_name] = symbols.pop(addr_str)
            counts["symbols"] += 1
            print(f"  signals.json: {addr_str} -> {new_name}")

    globals_section = data.get("globals", {})
    if old_name in globals_section:
        if not dry_run:
            globals_section[new_name] = globals_section.pop(old_name)
        counts["globals"] += 1
        print(f"  signals.json globals: {old_name} -> {new_name}")
    for addr_str, gsym in globals_section.items():
        if isinstance(gsym, dict) and gsym.get("name") == old_name:
            if not dry_run:
                gsym["name"] = new_name
            counts["globals"] += 1

    by_name = data.get("_by_name", {})
    if old_name in by_name:
        if not dry_run:
            entry = by_name.pop(old_name)
            dest = by_name.setdefault(new_name, {"symbols": {}})
            dest.setdefault("symbols", {}).update(entry.get("symbols", {}))
        counts["by_name"] += 1
        print(f"  signals.json _by_name: {old_name} -> {new_name}")

    if class_name:
        classes = data.get("classes", {}).get(class_name, {})
        offsets = classes.get("offsets", {}) if isinstance(classes, dict) else {}
        member_index = data.get("_member_by_name", {}).get(class_name, {})
        for info in offsets.values():
            if isinstance(info, dict) and info.get("ida_name") == old_member:
                if not dry_run:
                    info["ida_name"] = new_member
                counts["member_indexes"] += 1
        if old_member in member_index:
            if not dry_run:
                member_index[new_member] = member_index.pop(old_member)
            counts["member_indexes"] += 1

    total = sum(counts.values())
    if total and not dry_run:
        _write_json_atomic(SIGNALS_JSON, data)
    return counts



IDA_NAME_INDEX = PROJECT_ROOT / "tools" / "ida_name_index.json"


def update_ida_name_index(old_name, new_name, dry_run=False):
    """Keep tools/ida_name_index.json aligned with a rename."""
    if not IDA_NAME_INDEX.exists():
        return 0
    idx = json.loads(IDA_NAME_INDEX.read_text(encoding="utf-8"))
    if old_name not in idx:
        return 0
    addr = idx[old_name]
    if new_name in idx and idx[new_name] != addr:
        raise ValueError(f"ida_name_index collision: {new_name} -> {idx[new_name]} vs {addr}")
    if not dry_run:
        idx.pop(old_name, None)
        idx[new_name] = addr
        _write_json_atomic(IDA_NAME_INDEX, idx)
        print(f"  ida_name_index.json: {old_name} -> {new_name} ({addr})")
    return 1


def update_member_lookup(old_name, new_name, dry_run=False):
    """Update legacy member names, optionally restricted to a class."""
    if not MEMBER_LOOKUP_JSON.exists():
        return 0
    data = json.loads(MEMBER_LOOKUP_JSON.read_text(encoding="utf-8"))
    class_name = None
    member_name = old_name
    if "::" in old_name:
        class_name, member_name = old_name.rsplit("::", 1)
    new_member = new_name.rsplit("::", 1)[-1]
    updated = 0
    for cls_name, members in data.items():
        if class_name and cls_name != class_name:
            continue
        if not isinstance(members, dict):
            continue
        for offset_str, member in list(members.items()):
            if isinstance(member, dict) and member.get("name") == member_name:
                if not dry_run:
                    member["name"] = new_member
                updated += 1
                print(f"  member_lookup.json: {cls_name}+{offset_str} -> {new_member}")
    if updated > 0 and not dry_run:
        _write_json_atomic(MEMBER_LOOKUP_JSON, data)
    return updated


def update_class_layouts(old_name, new_name, dry_run=False):
    """Keep class_layouts.json's offset names and reverse indexes aligned."""
    if "::" not in old_name or not CLASS_LAYOUTS_JSON.exists():
        return 0
    class_name, old_member = old_name.rsplit("::", 1)
    new_member = new_name.rsplit("::", 1)[-1]
    data = json.loads(CLASS_LAYOUTS_JSON.read_text(encoding="utf-8"))
    cls = data.get(class_name)
    if not isinstance(cls, dict):
        return 0
    updated = 0
    for info in cls.get("offsets", {}).values():
        if isinstance(info, dict) and info.get("ida_name") == old_member:
            if not dry_run:
                info["ida_name"] = new_member
            updated += 1
    reverse = cls.get("_member_by_name", {})
    if old_member in reverse:
        if not dry_run:
            reverse[new_member] = reverse.pop(old_member)
        updated += 1
    if updated and not dry_run:
        _write_json_atomic(CLASS_LAYOUTS_JSON, data)
    return updated


RENAME_DEBT = PROJECT_ROOT / ".omo" / "rename_debt.json"


def _validate_name_pair(old_name, new_name):
    """Validate names before any source or metadata write.

    C++ scope separators are part of the symbol and must never be parsed as
    batch delimiters. Reject whitespace/control-bearing names and no-ops early.
    """
    for label, name in (("old_name", old_name), ("new_name", new_name)):
        if not isinstance(name, str) or not name:
            raise ValueError(f"{label} must be a non-empty string")
        if name != name.strip():
            raise ValueError(f"{label} must not have surrounding whitespace")
        if any(ord(ch) < 32 for ch in name):
            raise ValueError(f"{label} contains a control character")
    if old_name == new_name:
        raise ValueError("old_name and new_name are the same")


def _symbol_pattern(name):
    """Match a complete C++ symbol without treating `::` as a delimiter."""
    return re.compile(r"(?<![A-Za-z0-9_])" + re.escape(name) +
                      r"(?![A-Za-z0-9_])")


def _source_match_count(old_name, new_name):
    """Count exactly what replace_in_file will replace, including class-local declarations."""
    total = 0
    files = []
    for ext in ("*.hpp", "*.cpp"):
        for fp in SRC_DIR.rglob(ext):
            try:
                text = fp.read_text(encoding="utf-8", errors="replace")
            except OSError:
                continue
            pattern = _symbol_pattern(old_name)
            _, count = pattern.subn(new_name, text)
            if "::" in old_name:
                class_name, old_member = old_name.rsplit("::", 1)
                new_member = new_name.rsplit("::", 1)[-1]
                replaced = pattern.sub(new_name, text)
                _, local_count = _replace_class_member_lines(
                    replaced, class_name, old_member, new_member)
                count += local_count
            if count:
                total += count
                files.append((fp, count))
    return total, files


def _metadata_entities(old_name):
    """Return canonical entities currently named old_name."""
    if not SIGNALS_JSON.exists():
        return []
    data = json.loads(SIGNALS_JSON.read_text(encoding="utf-8"))
    entities = []
    for addr, sym in data.get("symbols", {}).items():
        if isinstance(sym, dict) and sym.get("name") == old_name:
            entities.append(("symbols", addr, sym.get("kind")))
    globals_section = data.get("globals", {})
    if old_name in globals_section:
        entities.append(("globals", old_name, "global"))
    if old_name in data.get("_by_name", {}):
        for addr, kind in data["_by_name"][old_name].get("symbols", {}).items():
            entities.append(("_by_name", addr, kind))
    return entities


def _member_lookup_matches(old_name):
    if not MEMBER_LOOKUP_JSON.exists():
        return []
    data = json.loads(MEMBER_LOOKUP_JSON.read_text(encoding="utf-8"))
    matches = []
    for cls_name, members in data.items():
        if not isinstance(members, dict):
            continue
        for offset, member in members.items():
            if isinstance(member, dict) and member.get("name") == old_name:
                matches.append((cls_name, offset))
    return matches


def _preflight(old_name, new_name):
    _validate_name_pair(old_name, new_name)
    source_count, source_files = _source_match_count(old_name, new_name)
    entities = _metadata_entities(old_name)
    member_name = old_name.rsplit("::", 1)[-1]
    member_matches = _member_lookup_matches(member_name)
    if "::" in old_name:
        class_name = old_name.rsplit("::", 1)[0]
        class_matches = [m for m in member_matches if m[0] == class_name]
        if class_matches:
            member_matches = class_matches
    if source_count == 0 and not entities and not member_matches:
        raise ValueError(f"symbol not found: {old_name}")
    # A bare name with multiple member owners is ambiguous. Qualified names
    # retain their C++ scope and are the safe form for class members.
    if "::" not in old_name and len({m[0] for m in member_matches}) > 1:
        owners = ", ".join(sorted({m[0] for m in member_matches})[:5])
        raise ValueError(
            f"ambiguous bare member '{old_name}' (owners: {owners}); "
            "use a fully-qualified C++ name")
    if "::" not in old_name and not entities and source_count > 1:
        raise ValueError(
            f"ambiguous bare symbol '{old_name}' ({source_count} source matches); "
            "use a fully-qualified C++ name")

    conflicts = []
    if SIGNALS_JSON.exists():
        data = json.loads(SIGNALS_JSON.read_text(encoding="utf-8"))
        for addr, sym in data.get("symbols", {}).items():
            if isinstance(sym, dict) and sym.get("name") == new_name:
                if not any(e[1] == addr for e in entities):
                    conflicts.append(f"signals.symbols:{addr}")
        by_name = data.get("_by_name", {})
        if new_name in by_name and old_name != new_name:
            old_addrs = {e[1] for e in entities if e[0] == "_by_name"}
            new_addrs = set(by_name[new_name].get("symbols", {}))
            if not new_addrs.issubset(old_addrs):
                conflicts.append("signals._by_name")
        globals_section = data.get("globals", {})
        if new_name in globals_section and old_name != new_name:
            conflicts.append("signals.globals")
    if IDA_NAME_INDEX.exists():
        idx = json.loads(IDA_NAME_INDEX.read_text(encoding="utf-8"))
        if new_name in idx and old_name in idx and idx[new_name] != idx[old_name]:
            conflicts.append("ida_name_index")
    if "::" in old_name:
        class_name = old_name.rsplit("::", 1)[0]
        new_member = new_name.rsplit("::", 1)[-1]
        for owner, _offset in _member_lookup_matches(new_member):
            if owner == class_name and new_member != member_name:
                conflicts.append(f"member_lookup:{class_name}::{new_member}")
        layout = json.loads(CLASS_LAYOUTS_JSON.read_text(encoding="utf-8")) if CLASS_LAYOUTS_JSON.exists() else {}
        reverse = ((layout.get(class_name) or {}).get("_member_by_name") or {})
        if new_member in reverse and new_member != member_name:
            conflicts.append(f"class_layouts:{class_name}::{new_member}")
    if conflicts:
        raise ValueError("rename target collision: " + ", ".join(conflicts))
    return {"source_matches": source_count,
            "source_files": len(source_files),
            "metadata_entities": len(entities),
            "member_matches": len(member_matches),
            "qualified": "::" in old_name}


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
    try:
        plan = _preflight(old_name, new_name)
    except ValueError as exc:
        print(f"ERROR: {exc}")
        sys.exit(2)

    print(f"\n{'[DRY RUN] ' if args.dry_run else ''}Renaming: {old_name} -> {new_name}")
    print("=" * 60)
    print("Preflight:", json.dumps(plan, ensure_ascii=False, sort_keys=True))

    # 1. Find all files containing the complete symbol
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
    sig_counts = update_signals_json(old_name, new_name, args.dry_run)

    # 2b. Keep the derived name->addr index aligned
    idx_updated = update_ida_name_index(old_name, new_name, args.dry_run)

    # 3. Update member_lookup.json (legacy lookup uses unqualified names)
    print(f"\nUpdating member_lookup.json...")
    mem_updated = update_member_lookup(old_name, new_name, args.dry_run)
    layout_updated = update_class_layouts(old_name, new_name, args.dry_run)

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

    result = {"ok": True, "exit": 0,
              "source_replacements": total_replacements,
              "signals": sig_counts, "name_index": idx_updated,
              "member_lookup": mem_updated, "class_layouts": layout_updated,
              "ida": ida_updated,
              "dry_run": args.dry_run, "qualified": plan["qualified"]}
    print("\nRENAME_RESULT: " + json.dumps(result, ensure_ascii=False, sort_keys=True))
    if args.dry_run:
        print("DRY RUN — no changes made. Remove --dry-run to apply.")
    else:
        print("Done. Verify with: cmake --build build_win")


if __name__ == "__main__":
    main()
