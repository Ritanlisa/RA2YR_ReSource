#!/usr/bin/env python3
"""
load_signals.py — Query helper for signals.json.

Usage:
    from load_signals import Signals
    s = Signals("signals.json")
    s.lookup("UnitClass::Deployed")   # → {"kind":"member","type":"bool",...}
    s.is_pointer("UnitClass::Type")   # → True
    s.is_array("g_MixerBuffer1")      # → True
    s.function_at("0x401000")         # → {"name":"AudioMixer::Init",...}
"""

import json
from pathlib import Path


class Signals:
    """Load and query signals.json."""

    def __init__(self, path="signals.json"):
        with open(path, encoding="utf-8") as f:
            self._data = json.load(f)
        self._symbols = self._data.get("symbols", {})
        self._by_name = self._data.get("_by_name", {})
        # T1/T2 class-layout sections (see .omo/notepads/execution-flow-cfg/learnings.md):
        #   classes          = {Class: {offsets:{offStr:{ida_name,type,size,...}}, size, parent}}
        #   _member_by_name  = {Class: {member_name: byte_offset}}
        self._classes = self._data.get("classes", {})
        self._member_by_name = self._data.get("_member_by_name", {})
        # T1-scale slice-1: top-level name->addr global map (built from
        # src/**/globals*.hpp `extern T name; // data: 0xADDR`). Self-contained
        # so a consumer can resolve a named global from signals.json alone
        # (the verifier's global_to_addr equivalent).
        self._globals = self._data.get("globals", {})

    def lookup(self, name_or_key: str) -> dict | None:
        """
        Look up a symbol by name (for members/globals) or address (for functions).

        For functions keyed by address, pass the hex address like "0x401000".
        For members, pass the full key like "UnitClass::Deployed".
        For globals, pass the name like "g_ScenarioClass".

        Returns the symbol dict or None if not found.
        """
        # Direct lookup
        if name_or_key in self._symbols:
            return self._symbols[name_or_key]

        # Try _by_name
        if name_or_key in self._by_name:
            info = self._by_name[name_or_key]
            # Return the first symbol entry
            for canonical_key in info.get("symbols", {}):
                return self._symbols.get(canonical_key)

        return None

    def function_at(self, addr: str) -> dict | None:
        """Look up a function by its hex address."""
        return self._symbols.get(addr)

    def member_of(self, class_name: str, member_name: str) -> dict | None:
        """Look up a member of a specific class."""
        key = f"{class_name}::{member_name}"
        return self._symbols.get(key)

    # ------------------------------------------------------------------
    # T4 — class member-offset queries (read T1/T2 classes/_member_by_name)
    # ------------------------------------------------------------------

    def member_offset(self, cls: str, name: str) -> int | None:
        """
        Byte offset of member `name` in class `cls`, with inheritance fallback.

        Looks up _member_by_name[cls][name]; if missing, walks the parent
        chain (classes[cls].parent -> ...). Returns None if not found anywhere.

        e.g. member_offset("BuildingClass", "HasPower") -> 1632
             member_offset("BuildingClass", "Type")     -> 1312
        """
        cur = cls
        seen = set()
        while cur and cur not in seen:
            seen.add(cur)
            members = self._member_by_name.get(cur)
            if members and name in members:
                return members[name]
            info = self._classes.get(cur)
            cur = info.get("parent") if info else None
        return None

    def offset_member(self, cls: str, off: int) -> dict | None:
        """
        Member at byte offset `off` in class `cls`, with inheritance fallback.

        Returns {"ida_name", "type", "size"} or None. Looks up
        classes[cls].offsets[str(off)]; if missing, walks the parent chain.

        e.g. offset_member("BuildingClass", 1312)
             -> {"ida_name": "Type", "type": "BuildingTypeClass*", "size": 4}
        """
        key = str(off)
        cur = cls
        seen = set()
        while cur and cur not in seen:
            seen.add(cur)
            info = self._classes.get(cur)
            if info:
                entry = info.get("offsets", {}).get(key)
                if entry is not None:
                    return {
                        "ida_name": entry.get("ida_name"),
                        "type": entry.get("type"),
                        "size": entry.get("size"),
                    }
                cur = info.get("parent")
            else:
                cur = None
        return None

    def class_layout(self, cls: str) -> dict | None:
        """
        Full stored layout dict for class `cls`, or None if unknown.

        Returns the classes[cls] entry: {offsets, size, parent, ...}.
        No inheritance flattening — own/absolute offsets as stored.
        """
        return self._classes.get(cls)

    def global_addr(self, name: str) -> int | None:
        """
        Data-section address (int) of a named global, or None if unknown.

        Reads the top-level `globals` section first (name -> "0xADDR"); falls
        back to the `symbols` entry (kind == "global") so older signals.json
        files without a `globals` section still resolve.

        e.g. global_addr("MapClass_Instance") -> 0x87F7E8  (if header-named)
        """
        v = self._globals.get(name)
        if v is not None:
            try:
                return int(v, 16) if isinstance(v, str) else int(v)
            except (TypeError, ValueError):
                return None
        sym = self._symbols.get(name)
        if isinstance(sym, dict) and sym.get("kind") == "global":
            a = sym.get("address")
            try:
                return int(a, 16) if isinstance(a, str) and a.startswith("0x") else int(a)
            except (TypeError, ValueError):
                return None
        return None

    @property
    def globals(self) -> dict:
        """The raw top-level name->addr global map (addresses as '0xADDR' strings)."""
        return self._globals

    def is_pointer(self, name_or_key: str) -> bool | None:
        """Check if a symbol is a pointer type. Returns None if not found."""
        entry = self.lookup(name_or_key)
        if entry:
            return entry.get("is_pointer", False)
        return None

    def is_array(self, name_or_key: str) -> bool | None:
        """Check if a symbol is an array type. Returns None if not found."""
        entry = self.lookup(name_or_key)
        if entry:
            return entry.get("is_array", False)
        return None

    def kind(self, name_or_key: str) -> str | None:
        """Get the kind of a symbol (function/member/global)."""
        entry = self.lookup(name_or_key)
        if entry:
            return entry.get("kind")
        return None

    @property
    def stats(self) -> dict:
        """Return count statistics."""
        kinds = {"function": 0, "member": 0, "global": 0}
        for v in self._symbols.values():
            k = v.get("kind", "unknown")
            kinds[k] = kinds.get(k, 0) + 1
        kinds["total"] = len(self._symbols)
        return kinds

    def __len__(self):
        return len(self._symbols)

    def __contains__(self, key):
        return key in self._symbols or key in self._by_name

    def __repr__(self):
        s = self.stats
        return (
            f"<Signals: {s['total']} symbols "
            f"({s['function']} funcs, {s['member']} members, {s['global']} globals)>"
        )


if __name__ == "__main__":
    # Quick smoke test
    s = Signals()
    print(s)
    print()

    # Test lookups
    for name in ["AudioMixer::Init", "ObjectClass::Deployed", "ObjectClass::objectTypeFlags"]:
        entry = s.lookup(name)
        if entry:
            print(f"  {name}: kind={entry['kind']}, type={entry.get('type','?')}, "
                  f"is_ptr={entry.get('is_pointer')}, is_arr={entry.get('is_array')}")
        else:
            print(f"  {name}: NOT FOUND")

    print()
    # Test function at address
    func = s.function_at("0x401000")
    if func:
        print(f"  @0x401000: {func['name']} ({func['call_convention']})")

    print()
    # Test is_pointer / is_array
    tests = [("ObjectClass::nextObject", True), ("ObjectClass::objectTypeFlags", False)]
    for name, expect_ptr in tests:
        result = s.is_pointer(name)
        status = "OK" if result == expect_ptr else "FAIL"
        print(f"  {status} is_pointer({name}) = {result} (expected {expect_ptr})")
