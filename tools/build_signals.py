#!/usr/bin/env python3
"""
build_signals.py — Generate signals.json by merging:
  1. Manual state from injectFunctionTest/functions.json
  2. Member type info from tools/member_lookup.json
  3. Global variable declarations from src/**/globals_*.hpp

Output: signals.json at project root.

Usage:
    python tools/build_signals.py
    python tools/build_signals.py --regen-compat   # refresh tools/member_lookup.json
                                                    # from signals.json `classes`
                                                    # (non-destructive compat output)
"""

import json
import re
import os
import sys
from datetime import datetime, timezone
from pathlib import Path

PROJECT_ROOT = Path(__file__).resolve().parent.parent

# Make sibling tool modules importable regardless of how this script is launched.
sys.path.insert(0, str(Path(__file__).resolve().parent))
FUNCTIONS_JSON = PROJECT_ROOT / "injectFunctionTest" / "functions.json"
MEMBER_LOOKUP = PROJECT_ROOT / "tools" / "member_lookup.json"
SIGNALS_JSON = PROJECT_ROOT / "signals.json"

# IDA-sourced per-class member layout cache.
# This file is the raw output of ida-pro-mcp `type_inspect(name, include_members=true)`
# for classes declared into the IDB as `__cppobj` structs. Offsets here are the
# AUTHORITATIVE flattened byte offsets from IDA's type system (NOT member_lookup.json,
# whose offsets are incomplete/misaligned). The IDA MCP uses an SSE streamable transport
# that is impractical to drive from a plain stdlib script, so we consume this committed
# cache instead. To regenerate: declare the class chain via declare_type (deps-first),
# then call type_inspect for each class and store the results under "classes".
IDA_CLASS_CACHE = PROJECT_ROOT / "tools" / "ida_class_layouts.json"


# ─── Step 1: Load functions.json ───────────────────────────────────────────────

def load_functions():
    """Extract function entries from functions.json, keyed by address."""
    with open(FUNCTIONS_JSON, encoding="utf-8") as f:
        data = json.load(f)

    funcs = {}
    for func in data["functions"]:
        addr = func["address"]
        call = func.get("call", {})
        hook = func.get("hook", {})

        funcs[addr] = {
            "name": func["name"],
            "kind": "function",
            "address": addr,
            "return_type": call.get("return_type", "void"),
            "call_convention": call.get("convention", "unknown"),
            "params": call.get("params", []),
            "completed": hook.get("completed", False),
            "translated": hook.get("translated", False),
        }
    return funcs


# ─── Step 2a: Load member_lookup.json ──────────────────────────────────────────

def load_members():
    """Convert member_lookup.json into ClassName::MemberName entries."""
    with open(MEMBER_LOOKUP, encoding="utf-8") as f:
        data = json.load(f)

    members = {}  # key = "ClassName::MemberName"
    for class_name, offsets in data.items():
        for offset_str, info in offsets.items():
            name = info["name"]
            type_str = info.get("type", "void")
            key = f"{class_name}::{name}"

            is_pointer = "*" in type_str
            is_array = False  # member_lookup doesn't encode arrays

            members[key] = {
                "name": key,
                "kind": "member",
                "class": class_name,
                "offset": int(offset_str),
                "type": type_str,
                "is_pointer": is_pointer,
                "is_array": is_array,
            }
    return members


# ─── Step 2b: Parse globals_*.hpp ──────────────────────────────────────────────

# Matches: extern ... ; // data: 0xADDR
_GLOBAL_LINE_RE = re.compile(
    r"extern\s+(.+?);\s*//\s*data:\s*(0x[0-9A-Fa-f]+)"
)

# Extracts: name from declaration (last identifier before '[' or end)
_NAME_FROM_DECL_RE = re.compile(r"(\w+)\s*(?:\[[^\]]*\])?\s*$")


def _extract_name_and_type(decl: str):
    """
    Given a declaration like 'void (*First)()' or 'uint32_t g_Buffer[32]',
    return (type_str, name).

    Strategy:
    1. Try function-pointer pattern:  type (*name)(args...)
    2. Fallback: find the last C identifier before optional [...]
    """
    decl = decl.strip()

    # 1. Function pointer pattern: "return_type (*name)(params)"
    fp_match = re.match(r"(.+)\(\*(\w+)\)\(.*\)", decl)
    if fp_match:
        prefix = fp_match.group(1).rstrip()
        name = fp_match.group(2)
        type_str = f"{prefix} (*)" if prefix else "void (*)"
        return (type_str, name)

    # 2. Standard pattern: last identifier before optional [...]
    m = _NAME_FROM_DECL_RE.search(decl)
    if not m:
        return (decl, "unknown")

    name = m.group(1)
    name_end = m.start(1)
    type_str = decl[:name_end].rstrip() if name_end > 0 else decl
    return (type_str, name)


def parse_globals():
    """Scan globals_*.hpp files for extern declarations with data: addresses."""
    globals_list = []

    for hpp_file in PROJECT_ROOT.glob("src/**/globals_*.hpp"):
        with open(hpp_file, encoding="utf-8", errors="replace") as f:
            for line in f:
                line = line.strip()
                m = _GLOBAL_LINE_RE.search(line)
                if not m:
                    continue

                decl = m.group(1).strip()
                address = m.group(2)

                # Detect array from declaration
                is_array = bool(re.search(r"\[[^\]]*\]", decl))
                # Remove array suffix for type extraction
                decl_for_type = re.sub(r"\[[^\]]*\]", "", decl).strip()

                type_str, name = _extract_name_and_type(decl_for_type)
                is_pointer = "*" in type_str

                # Reconstruct full type with array
                if is_array:
                    array_suffix = re.search(r"\[[^\]]*\]", decl)
                    full_type = f"{type_str}{array_suffix.group(0)}"
                else:
                    full_type = type_str

                globals_list.append(
                    {
                        "name": name,
                        "kind": "global",
                        "address": address,
                        "type": full_type,
                        "is_pointer": is_pointer,
                        "is_array": is_array,
                    }
                )

    return globals_list


# ─── Step 3-4: Merge & build indexes ───────────────────────────────────────────

def build_signals(functions, members, globals_list):
    """
    Merge functions, members, globals into unified symbols dict.
    Build _by_name index for fast lookups.
    """
    symbols = {}
    by_name = {}

    def _index(kind_name, canonical_key, kind_label):
        if kind_name not in by_name:
            by_name[kind_name] = {"symbols": {}}
        by_name[kind_name]["symbols"][canonical_key] = kind_label

    # --- Functions ---
    for addr, func in functions.items():
        symbols[addr] = func
        _index(func["name"], addr, "function")

    # --- Members ---
    for key, member in members.items():
        # Skip if this name already exists as a function (function takes priority)
        # But only if the function key would collide; member keys are "Class::Member"
        symbols[key] = member
        _index(key, key, "member")

    # --- Globals ---
    for g in globals_list:
        key = g["name"]
        if key in symbols:
            # Don't overwrite; globals have lower priority
            continue
        symbols[key] = g
        _index(key, key, "global")

    return symbols, by_name


# ─── Step 3a2: top-level `globals` name→addr section ────────────────────────────
#
# The verifier resolves a `READ/WRITE(global,0xADDR)` event by mapping a named
# global -> its data-section address (`verify_execution_flow.Maps.global_to_addr`,
# `_resolve_global`). Today the only source the verifier reads is the raw
# globals_*.hpp scan; signals.json carried globals ONLY inside `symbols` (keyed by
# NAME, so the verifier's `load_signals` addr-filter skips them). This section makes
# signals.json a SELF-CONTAINED name->addr global map (same set the verifier's
# `load_globals_map` builds), so any consumer (load_signals.Signals.global_addr)
# can resolve a named global from signals.json alone.
#
# Scope/limitation (by design): ONLY globals that have an `extern T name;
# // data: 0xADDR` annotation in a src/**/globals*.hpp header are captured.
# Truly-unnamed binary globals, or globals named only via a `// IDA: 0xADDR -- Name`
# comment in a .cpp (e.g. MapClass_Instance @ 0x87F7E8 in core/globals.cpp), are NOT
# in a header and therefore remain unresolved (a documented, out-of-scope gap that
# needs RE-naming into a header).

def build_globals_section(globals_list):
    """Return {globalName: "0xADDR"} from the parsed globals_*.hpp externs.

    First occurrence of a name wins (deterministic, mirrors the symbols merge).
    """
    globals_map = {}
    for g in globals_list:
        name = g.get("name")
        addr = g.get("address")
        if not name or not addr or name in globals_map:
            continue
        globals_map[name] = addr
    return globals_map


# ─── Step 3b: IDA per-class member layout (classes + _member_by_name) ──────────

def load_ida_class_layouts():
    """
    Load the IDA-sourced class layout cache (raw type_inspect output).

    Returns a dict {ClassName: type_inspect_result} or None if the cache is
    missing / unreadable / empty. Never raises — callers degrade gracefully.
    """
    if not IDA_CLASS_CACHE.exists():
        return None
    try:
        with open(IDA_CLASS_CACHE, encoding="utf-8") as f:
            data = json.load(f)
    except (OSError, ValueError):
        return None
    classes = data.get("classes") if isinstance(data, dict) else None
    if not classes:
        return None
    return classes


def _offset_to_int(off):
    """Accept hex strings ('0x520'), decimal strings, or ints."""
    if isinstance(off, int):
        return off
    s = str(off).strip()
    return int(s, 16) if s.lower().startswith("0x") else int(s)


def build_classes(ida_classes):
    """
    Build the `classes` and `_member_by_name` sections from IDA type_inspect output.

    type_inspect does NOT auto-flatten inheritance: a base class is reported as a
    single member with an empty name whose `type` is another class present in the
    cache. We flatten recursively so each class exposes the full absolute-offset
    layout (inherited members included).

    classes:          {ClassName: {"offsets": {str(byteOffset): {"ida_name","type","size"}},
                                    "size": int, "parent": str|None}}
    _member_by_name:  {ClassName: {memberName: byteOffset(int)}}
    """
    classes_out = {}
    member_by_name = {}

    def flatten(class_name, base_offset, seen):
        """Yield (abs_offset, ida_name, type, size) leaves, recursing into base classes."""
        result = ida_classes.get(class_name)
        if not result or class_name in seen:
            return
        seen = seen | {class_name}
        for m in result.get("members", []):
            abs_off = base_offset + _offset_to_int(m.get("offset", 0))
            mname = m.get("name", "") or ""
            mtype = m.get("type", "")
            # A base class appears as an unnamed member whose type is another
            # declared class — recurse to flatten its members at this offset.
            if mname == "" and mtype in ida_classes:
                yield from flatten(mtype, abs_off, seen)
            else:
                yield (abs_off, mname, mtype, m.get("size", 0))

    def parent_of(result):
        for m in result.get("members", []):
            if (m.get("name", "") or "") == "" and m.get("type") in ida_classes:
                return m.get("type")
        return None

    for class_name, result in ida_classes.items():
        if not isinstance(result, dict) or not result.get("exists", True):
            continue
        offsets = {}
        names = {}
        for abs_off, mname, mtype, msize in flatten(class_name, 0, frozenset()):
            offsets[str(abs_off)] = {
                "ida_name": mname,
                "type": mtype,
                "size": msize,
            }
            if mname:
                names[mname] = abs_off
        classes_out[class_name] = {
            "offsets": offsets,
            "size": result.get("size", 0),
            "parent": parent_of(result),
        }
        member_by_name[class_name] = names

    return classes_out, member_by_name


# ─── Compat regeneration: signals.json `classes` → tools/member_lookup.json ─────
#
# member_lookup.json is the LEGACY per-class offset table consumed (today) by
# tools/lookup_member.py and tools/pre_translate.py (schema below). Its starter
# classes are stale/incomplete (e.g. BuildingClass stops at offset 1080 — a copy
# of TechnoClass's inherited members, missing HasPower@1632 and every other
# BuildingClass-own field). signals.json `classes` now carries the FULL, named,
# offset-accurate layout for those classes (T1 IDA cache + T2 hpp member maps).
#
# This regenerator NON-DESTRUCTIVELY refreshes ONLY the classes present in
# signals.json `classes` (the 6 starter classes today), rewriting each into the
# SAME schema member_lookup.json already uses:
#
#     { ClassName: { "<decimalByteOffset>": { "name": str, "type": str } } }
#
# Every OTHER class entry is left byte-identical. Top-level class ordering is
# preserved. The optional `inherited_from` field (display-only, read via .get()
# by lookup_member.py) is carried over verbatim when the OLD entry had it at the
# same class+offset, so provenance is never lost.

def regen_compat_member_lookup(signals_path=None, member_lookup_path=None):
    """Refresh tools/member_lookup.json from signals.json `classes` (non-destructive).

    Reads the existing member_lookup.json and the existing signals.json, replaces
    each class that signals.json describes with a freshly-derived
    {offsetStr: {name, type[, inherited_from]}} map (sorted by numeric offset),
    and leaves every other class untouched. Writes the result back to
    member_lookup.json.

    Returns a stats dict:
        {"refreshed": [classnames...], "skipped_unnamed": int,
         "per_class": {cls: {"before": n, "after": n}}, "total_classes": n}

    Raises FileNotFoundError if signals.json or member_lookup.json is missing.
    """
    signals_path = Path(signals_path) if signals_path else SIGNALS_JSON
    member_lookup_path = Path(member_lookup_path) if member_lookup_path else MEMBER_LOOKUP

    if not signals_path.exists():
        raise FileNotFoundError(
            f"{signals_path} not found — run `python tools/build_signals.py` first "
            "to generate signals.json before --regen-compat."
        )
    if not member_lookup_path.exists():
        raise FileNotFoundError(
            f"{member_lookup_path} not found — nothing to refresh (expected the "
            "existing legacy member_lookup.json to merge into)."
        )

    with open(signals_path, encoding="utf-8") as f:
        signals = json.load(f)
    with open(member_lookup_path, encoding="utf-8") as f:
        member_lookup = json.load(f)

    classes = signals.get("classes") or {}

    stats = {
        "refreshed": [],
        "skipped_unnamed": 0,
        "per_class": {},
        "total_classes": len(member_lookup),
    }

    for cls_name, layout in classes.items():
        offsets = (layout or {}).get("offsets") or {}
        old_entry = member_lookup.get(cls_name, {})
        before_n = len(old_entry) if isinstance(old_entry, dict) else 0

        new_entry = {}
        # Sort by numeric byte offset for a clean, deterministic, diff-friendly map.
        for off_str in sorted(offsets, key=lambda k: int(k)):
            info = offsets[off_str]
            # signals.json names members under `ida_name`; member_lookup uses `name`.
            name = info.get("ida_name") or info.get("name")
            if not name:
                # Unnamed padding slot — has no member identity in the legacy table.
                stats["skipped_unnamed"] += 1
                continue
            member = {"name": name, "type": info.get("type", "void")}
            # Preserve display-only provenance if the old entry had it here.
            old_at = old_entry.get(off_str) if isinstance(old_entry, dict) else None
            if isinstance(old_at, dict) and old_at.get("inherited_from"):
                member["inherited_from"] = old_at["inherited_from"]
            new_entry[off_str] = member

        member_lookup[cls_name] = new_entry
        stats["refreshed"].append(cls_name)
        stats["per_class"][cls_name] = {"before": before_n, "after": len(new_entry)}

    stats["total_classes"] = len(member_lookup)

    with open(member_lookup_path, "w", encoding="utf-8") as f:
        json.dump(member_lookup, f, indent=2, ensure_ascii=False)
        f.write("\n")

    return stats


def _run_regen_compat():
    """CLI entry for `--regen-compat`: refresh member_lookup.json from signals.json."""
    print("Regenerating tools/member_lookup.json from signals.json `classes` "
          "(non-destructive) ...")
    stats = regen_compat_member_lookup()
    for cls in stats["refreshed"]:
        pc = stats["per_class"][cls]
        print(f"  refreshed {cls}: {pc['before']} → {pc['after']} members")
    print(f"  → {len(stats['refreshed'])} class(es) refreshed; "
          f"{stats['total_classes']} total classes preserved; "
          f"{stats['skipped_unnamed']} unnamed slot(s) skipped")
    print(f"  → wrote {MEMBER_LOOKUP}")
    print("Done!")


def main():
    print("Step 1: Loading functions.json ...")
    functions = load_functions()
    print(f"  → {len(functions)} functions")

    print("Step 2a: Loading member_lookup.json ...")
    members = load_members()
    print(f"  → {len(members)} members across 33 classes")

    print("Step 2b: Scanning globals_*.hpp ...")
    globals_list = parse_globals()
    print(f"  → {len(globals_list)} globals")

    print("Step 3: Merging ...")
    symbols, by_name = build_signals(functions, members, globals_list)

    globals_section = build_globals_section(globals_list)
    print(f"  → globals name→addr section: {len(globals_section)} entries")

    # Dedup: functions keyed by address and members keyed by name are separate keyspaces.
    # by_name may have both: e.g. "ObjectClass::GetType" could appear in both.
    total = len(symbols)
    func_count = sum(1 for v in symbols.values() if v["kind"] == "function")
    member_count = sum(1 for v in symbols.values() if v["kind"] == "member")
    global_count = sum(1 for v in symbols.values() if v["kind"] == "global")
    print(f"  → {total} total symbols ({func_count} functions, {member_count} members, {global_count} globals)")

    print("Step 3b: Building IDA class layouts (classes + _member_by_name) ...")
    ida_classes = load_ida_class_layouts()
    if ida_classes is None:
        print(f"  ! WARNING: IDA class layout cache unavailable ({IDA_CLASS_CACHE.name}); "
              "emitting empty classes/_member_by_name sections.")
        classes_out, member_by_name = {}, {}
    else:
        classes_out, member_by_name = build_classes(ida_classes)
        bc = classes_out.get("BuildingClass", {}).get("offsets", {})
        bc1312 = bc.get("1312")
        print(f"  → {len(classes_out)} classes; "
              f"BuildingClass[1312] = {bc1312 if bc1312 else 'MISSING'}")

        # T2: override the 6 starter classes' opaque-body layouts with the full
        # hpp-derived member maps (cumulative MSVC-6 offsets, anchor-validated,
        # BuildingClass cross-checked vs ctor 0x43B740). size/parent stay from cache.
        try:
            from class_members import build_hpp_classes
            hpp_classes, hpp_mbn, hpp_report = build_hpp_classes(ida_classes)
            for cname, layout in hpp_classes.items():
                classes_out[cname] = layout
                member_by_name[cname] = hpp_mbn[cname]
            print("\n".join(hpp_report))
            hp = member_by_name.get("BuildingClass", {}).get("HasPower")
            io = member_by_name.get("BuildingClass", {}).get("IsOverpowered")
            print(f"  → T2: BuildingClass::HasPower = "
                  f"{('0x%X (%d)' % (hp, hp)) if hp is not None else 'MISSING'}; "
                  f"IsOverpowered = {('0x%X (%d)' % (io, io)) if io is not None else 'MISSING'}")
        except Exception as exc:  # noqa: BLE001 — degrade gracefully, never crash the build
            print(f"  ! WARNING: T2 hpp member computation failed ({exc}); "
                  "keeping T1 opaque-body class layouts.")

        # T1-scale slice-1: extend coverage to the CORE Object/Type/House hierarchies
        # (~30 classes) via the pure-python anchor-validated layout engine.  The 6
        # starter classes above are NOT recomputed (their flattened offsets are reused
        # as the inheritance base); each new class is tagged faithful/best-effort.
        try:
            from class_members import build_extended_classes
            ext_classes, ext_mbn, ext_report = build_extended_classes(
                ida_classes, hpp_classes, hpp_mbn)
            for cname, layout in ext_classes.items():
                classes_out[cname] = layout
                member_by_name[cname] = ext_mbn[cname]
            print("\n".join(ext_report))
            n_faith = sum(1 for c in ext_classes.values() if c["hpp_layout_faithful"])
            print(f"  → T1-scale: {len(ext_classes)} extended classes "
                  f"({n_faith} faithful, {len(ext_classes) - n_faith} best-effort)")
        except Exception as exc:  # noqa: BLE001 — degrade gracefully, never crash the build
            print(f"  ! WARNING: T1-scale extended-class computation failed ({exc}).")

        # Golden #3 (GetPowerFrame): OVERLAY the IDA-validated BINARY offsets that
        # BuildingClass::GetPowerFrame (0x4566B0) reads through its Type pointer onto
        # the computed BuildingTypeClass layout.  Type-class hpp layout is non-byte-
        # faithful, so these 7 offsets come from the binary (ConstructFull 0x45DD90
        # defaults + INI reader 0x460BEA) and are AUTHORITATIVE — they override any
        # computed entry at the same offset so the golden keeps resolving.
        try:
            from class_members import build_buildingtype_class
            btc_entry, btc_names = build_buildingtype_class()
            computed = classes_out.get("BuildingTypeClass")
            if computed:
                for off, info in btc_entry["offsets"].items():
                    computed["offsets"][off] = info          # authoritative override
                member_by_name.setdefault("BuildingTypeClass", {}).update(btc_names)
                computed["binary_validated_members"] = sorted(btc_names)
                print("  → golden#3: overlaid %d binary-validated BuildingTypeClass "
                      "members onto the computed layout" % len(btc_names))
            else:
                classes_out["BuildingTypeClass"] = btc_entry
                member_by_name["BuildingTypeClass"] = btc_names
                print("  → golden#3: BuildingTypeClass modelled with %d binary-validated "
                      "members (GetPowerFrame 0x4566B0)" % len(btc_names))
        except Exception as exc:  # noqa: BLE001 — degrade gracefully, never crash the build
            print(f"  ! WARNING: BuildingTypeClass modelling failed ({exc}).")

    print("Step 4: Writing signals.json ...")
    output = {
        "version": 2,
        "binary": "gamemd.exe",
        "base_address": "0x400000",
        "generated": datetime.now(timezone.utc).isoformat(),
        "symbols": symbols,
        "_by_name": by_name,
        "globals": globals_section,
        "classes": classes_out,
        "_member_by_name": member_by_name,
    }

    output_path = PROJECT_ROOT / "signals.json"
    with open(output_path, "w", encoding="utf-8") as f:
        json.dump(output, f, indent=2, ensure_ascii=False)

    size_mb = output_path.stat().st_size / (1024 * 1024)
    print(f"  → {output_path} ({size_mb:.1f} MB)")
    print("Done!")


if __name__ == "__main__":
    if "--regen-compat" in sys.argv[1:]:
        _run_regen_compat()
    else:
        main()
