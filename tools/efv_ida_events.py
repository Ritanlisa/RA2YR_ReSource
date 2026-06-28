#!/usr/bin/env python3
"""
efv_ida_events.py — Extract canonical execution-flow events from an IDA CFG.

Task T8 of the execution-flow-cfg pipeline. T7's `efv_ida_cfg.build_ida_cfg`
produces a `efv_model.CFG` whose every block's `ordered_events` list holds RAW
Hex-Rays pseudocode statement *strings* (in source order), including the
synthesised branch tests (`"if (<cond>)"`, `"while (<cond>)"`,
`"for-cond (<cond>)"`, `"switch (<sel>)"`), `"return ..."`, `"goto LABEL"`, and
verbatim plain statements. This module runs a leaf extractor over each of those
raw fragments and REPLACES the block's `ordered_events` with the canonical
event strings (`efv_model` grammar): member READ/WRITE, vtable CALL, named CALL,
global READ/WRITE, RET.

------------------------------------------------------------------------------
LEAF EXTRACTION — PORTED, NOT REINVENTED (root cause of the old tool was its
                  STRUCTURE walk, NOT its leaf extraction)
------------------------------------------------------------------------------
The old `verify_execution_flow.py`'s `make_ida_leaf` / `_IDA_*` regexes /
`detect_this_type` / `_this_mult` / `_cast_byte_off` / `_resolve_call` /
`_resolve_global` / `_is_write` / `_order_hits` are the CORRECT, battle-tested
event-extraction logic. They are REUSED here verbatim by IMPORT (that file is a
REVERSE-pipeline protected file and is NEVER modified). The only change is that
the event strings are constructed with the `efv_model` builders
(`read_member` / `write_member` / `call_direct` / `call_virtual` /
`read_global` / `write_global` / `RET`) instead of being hand-spelled — the
builders emit byte-identical strings, so the encoding stays comparable across
the whole CFG rewrite, with a single canonical source of truth for the grammar.

------------------------------------------------------------------------------
EVENT SEMANTICS (per the decisions.md / T5 contract)
------------------------------------------------------------------------------
  member  READ/WRITE(member,N)  N = byte offset, computed PER-ACCESS:
                                 - `*(this + k)` (no cast) -> k × this-mult
                                   (this-mult from `detect_this_type`:
                                    _DWORD/int=4, _WORD=2, _BYTE=1).
                                 - `*((_CAST *)this + k)`  -> k × sizeof(_CAST)
                                   (`+k` after the cast: width scales offset).
                                 - `*(_CAST *)(this + k)`  -> k (literal byte
                                   offset: `+k` is byte arithmetic inside the
                                   parens; the cast is read-WIDTH only, NOT a
                                   multiplier). This last rule fixes the T8
                                   x4 over-scaling of `_DWORD`-paren accesses.
  vtable  CALL(vfptr+N)         from `(*(*this + N))(...)` dispatch.
  named   CALL(0xADDR)          resolved via functions.json / signals.json;
                                CRT / intrinsics / keywords / casts are skipped.
  global  READ/WRITE(global,0xADDR)  from MEMORY[0x..] / dword_.. / g_.. / a
                                data-section `*(T*)0x..`.
  RET                           from a `return` statement.

CHAINED ACCESS: `Type->Member` decompiles as a `this`-relative read that loads
the pointer into a temporary (`v3 = *(this + 328)` -> READ(member,1312)) followed
by a deref OF THE TEMPORARY (`*(v3 + 5806)`). Only the `this`-relative read is an
event; the temporary deref is NOT in the vocabulary (no regex matches `*(v3+N)`),
so it is dropped — exactly as on the C++ side (`this->Type` counts, the trailing
`->Member` on the temporary does not). Local-temporary assignments (`v2 = ...`,
`v10 = v2`) likewise produce no event, but the `this`-relative member / global
reads on their RIGHT-HAND SIDE DO.

Public API:
    extract_events_into(cfg, this_type, maps=None) -> cfg   (mutates in place)
    build_events_cfg(pseudocode_text, maps=None)    -> cfg   (build + extract)
    get_maps()                                      -> shared Maps (cached)
"""

import os
import sys

_HERE = os.path.dirname(os.path.abspath(__file__))
if _HERE not in sys.path:
    sys.path.insert(0, _HERE)

# Canonical event builders (T5 grammar). MUST use these — never hand-spell event
# strings — so the encoding stays identical across producers.
from efv_model import (
    read_member,
    write_member,
    call_direct,
    call_virtual,
    read_global,
    write_global,
    RET,
)

# T7's structural CFG builder (used by build_events_cfg + the self-test).
from efv_ida_cfg import build_ida_cfg

# PROVEN leaf-extraction logic, imported verbatim from the original verifier.
# `verify_execution_flow.py` is a REVERSE-pipeline protected file: imported,
# never modified. It has no import-time side effects (loaders are functions,
# `main()` is guarded by `if __name__ == "__main__"`), so importing is safe.
from verify_execution_flow import (
    # this-pointer typing + member stride
    detect_this_type,
    _this_mult,
    _cast_byte_off,
    # write/read discrimination + position-ordered de-dup
    _is_write,
    _order_hits,
    # name / global address resolution
    _resolve_call,
    _resolve_global,
    # member-access regexes
    _IDA_BYTE_CAST,
    _IDA_DW_CAST,
    _IDA_CAST_PAREN,
    _IDA_SIMPLE,
    # vtable dispatch
    _IDA_VTABLE,
    _IDA_VTABLE_LOCAL,
    # named calls
    _IDA_QUAL_CALL,
    _IDA_SIMPLE_CALL,
    # globals
    _IDA_G_GLOBAL,
    _IDA_DWORD_GLOBAL,
    _IDA_MEMORY,
    _IDA_PTR_ADDR,
    # return
    _RETURN_RE,
    # data-section window for raw `*(T*)0xADDR` globals
    DATA_SECTION_START,
    DATA_SECTION_END,
    # symbol-table container + loaders
    Maps,
    load_all_maps,
)

__all__ = [
    "extract_events_into",
    "build_events_cfg",
    "make_ida_leaf",
    "get_maps",
]


# ============================================================
# Shared symbol maps (loaded once, cached)
# ============================================================

_MAPS = None


def get_maps():
    """Lazily build and cache the shared `Maps` (functions.json + signals.json
    + globals + member layout + vtable indices). Loading is heavy, so callers
    that process many functions should pass the returned object explicitly to
    `extract_events_into` to avoid rebuilding it."""
    global _MAPS
    if _MAPS is None:
        _MAPS = load_all_maps()
    return _MAPS


# ============================================================
# IDA leaf extractor (PORTED — builds events via efv_model builders)
# ============================================================

def make_ida_leaf(this_type, M):
    """Return `leaf(fragment_text) -> list[event_str]`.

    A faithful port of `verify_execution_flow.make_ida_leaf`: same regexes,
    same `this`-mult / cast-offset / write-detection / call+global resolution
    / position-ordered de-dup. The ONLY difference is that event strings are
    produced by the `efv_model` builders (byte-identical output), so the canonical
    grammar has a single source of truth.

    `M` is a `verify_execution_flow.Maps`. `this_type` is the IDA `this` pointer
    type (e.g. `"int"` / `"_DWORD"` / `"_BYTE"`) detected by `detect_this_type`.
    """
    mult = _this_mult(this_type)

    def leaf(text):
        hits = []  # (start, end_of_span, event_str)

        # --- members: cast forms first, then the bare `*(this + N)` form ---
        for m in _IDA_BYTE_CAST.finditer(text):
            off = _cast_byte_off(m.group(1), int(m.group(2)))
            ev = write_member(off) if _is_write(text, m.end()) else read_member(off)
            hits.append((m.start(), m.end(), ev))
        for m in _IDA_DW_CAST.finditer(text):
            off = int(m.group(2)) * 4
            ev = write_member(off) if _is_write(text, m.end()) else read_member(off)
            hits.append((m.start(), m.end(), ev))
        for m in _IDA_CAST_PAREN.finditer(text):
            # `*(_CAST *)(this + N)`: the `+ N` is applied to `this` INSIDE the
            # parens (byte / scalar-integer arithmetic on the object base), and
            # the OUTER cast (`_DWORD`/`_WORD`/`_BYTE`/int) only selects the READ
            # WIDTH — it does NOT scale the member byte offset. So the byte
            # offset is the literal N (PER-ACCESS), regardless of the cast width.
            # An optional inner `(char *)this + N` is likewise byte arithmetic ->
            # still N. This differs from the `_IDA_BYTE_CAST`/`_IDA_DW_CAST` form
            # `*((_CAST *)this + N)` where the `+ N` is applied AFTER the cast and
            # the cast width DOES scale the offset (handled above).
            #
            # Bug fixed (T8, found by T13/G4): the shared verify_execution_flow
            # `_cast_byte_off(outer_cast, N)` multiplied by the OUTER cast width,
            # so ClearSuperWeaponAnim 0x451690's `*(_DWORD *)(this + 1532)` /
            # `*(_DWORD *)(this + 540)` were mis-scaled x4 -> 6128 / 2160 instead
            # of the real 1532 / 540. We override the leaf here (efv_ida_events is
            # the local copy) rather than touch the protected verifier file.
            off = int(m.group(3))
            ev = write_member(off) if _is_write(text, m.end()) else read_member(off)
            hits.append((m.start(), m.end(), ev))
        for m in _IDA_SIMPLE.finditer(text):
            off = int(m.group(1)) * mult
            ev = write_member(off) if _is_write(text, m.end()) else read_member(off)
            hits.append((m.start(), m.end(), ev))

        # --- vtable dispatch `(*(*this + N))(...)` -> CALL(vfptr+N) ---
        for m in _IDA_VTABLE.finditer(text):
            hits.append((m.start(), m.end(), call_virtual(int(m.group(1)))))
        # --- vtable dispatch via local var `(vN + N))(this)` -> CALL(vfptr+N) ---
        for m in _IDA_VTABLE_LOCAL.finditer(text):
            hits.append((m.start(), m.end(), call_virtual(int(m.group(2)))))

        # --- named calls (qualified Class::Method first, then PascalCase) ---
        for m in _IDA_QUAL_CALL.finditer(text):
            addr = _resolve_call(m.group(1), M)
            if addr:
                hits.append((m.start(), m.end(), call_direct(addr)))
        for m in _IDA_SIMPLE_CALL.finditer(text):
            addr = _resolve_call(m.group(1), M)
            if addr:
                hits.append((m.start(), m.end(), call_direct(addr)))

        # --- globals: g_Name, dword_/byte_/.., MEMORY[0x..], `*(T*)0x..` ---
        for m in _IDA_G_GLOBAL.finditer(text):
            addr = _resolve_global(m.group(1), M)
            if addr is not None:
                ev = write_global(addr) if _is_write(text, m.end()) else read_global(addr)
                hits.append((m.start(), m.end(), ev))
        for m in _IDA_DWORD_GLOBAL.finditer(text):
            try:
                addr = int(m.group(1), 16)
            except ValueError:
                continue
            ev = write_global(addr) if _is_write(text, m.end()) else read_global(addr)
            hits.append((m.start(), m.end(), ev))
        for m in _IDA_MEMORY.finditer(text):
            addr = int(m.group(1), 16)
            ev = write_global(addr) if _is_write(text, m.end()) else read_global(addr)
            hits.append((m.start(), m.end(), ev))
        for m in _IDA_PTR_ADDR.finditer(text):
            addr = int(m.group(1), 16)
            if DATA_SECTION_START <= addr <= DATA_SECTION_END:
                ev = write_global(addr) if _is_write(text, m.end()) else read_global(addr)
                hits.append((m.start(), m.end(), ev))

        # --- return ---
        for m in _RETURN_RE.finditer(text):
            hits.append((m.start(), m.end(), RET))

        # position-ordered, overlap-de-duped (longest span wins at a start)
        return _order_hits(hits)

    return leaf


# ============================================================
# CFG event extraction (the public entry point)
# ============================================================

def extract_events_into(cfg, this_type, maps=None):
    """Replace every block's RAW pseudocode `ordered_events` (placeholders from
    T7) with the extracted CANONICAL events, in source order, IN PLACE.

    For each block, the leaf extractor is run over each raw fragment and the
    per-fragment events are concatenated in the fragment's original order. The
    synthesised condition markers (`"if (<cond>)"`, `"while (<cond>)"`,
    `"for-cond (<cond>)"`, `"switch (<sel>)"`) contribute their condition's
    own reads / calls (the keyword itself is lower-case and in the skip set, so
    it never produces a spurious CALL); structural-only fragments (`"goto L"`,
    `"default"`, bare temporary assignments) yield no events.

    Returns the same `cfg` object (mutated).
    """
    if maps is None:
        maps = get_maps()
    leaf = make_ida_leaf(this_type, maps)
    for block in cfg:
        events = []
        for fragment in block.ordered_events:
            events.extend(leaf(fragment))
        # `ordered_events` is a declared slot on efv_model.Block -> assignable.
        block.ordered_events = events
    return cfg


def build_events_cfg(pseudocode_text, maps=None):
    """Convenience: build the structural CFG (T7) from Hex-Rays pseudocode,
    detect the `this` type, and extract canonical events into it (T8). Returns
    a ready-to-match `efv_model.CFG`."""
    this_type = detect_this_type(pseudocode_text or "")
    cfg = build_ida_cfg(pseudocode_text)
    return extract_events_into(cfg, this_type, maps=maps)


# ============================================================
# CLI / self-test
# ============================================================

def _load_pseudocode(path):
    import json
    with open(path, "r", encoding="utf-8") as f:
        raw = f.read()
    try:
        data = json.loads(raw)
        return data.get("decompiled") or data.get("code") or "", data.get("name")
    except json.JSONDecodeError:
        return raw, None


def _selftest():
    """Self-test on BuildingClass::GetPowerOutput (0x44E7B0): confirm the CFG's
    events include READ(member,1312) (Type), CALL(vfptr+468), CALL(0x..) for
    GetHealthRatio & RoundToInt, and RET. Writes evidence and returns 0/1."""
    cache = os.path.join(_HERE, "..", ".omo", "ida_cache", "func_0x44E7B0.json")
    cache = os.path.normpath(cache)
    if not os.path.exists(cache):
        print("SELF-TEST SKIPPED: cache not found:", cache, file=sys.stderr)
        return 0

    text, name = _load_pseudocode(cache)
    maps = get_maps()
    this_type = detect_this_type(text)
    cfg = build_ida_cfg(text)
    extract_events_into(cfg, this_type, maps=maps)

    lines = []
    lines.append("=== T8 efv_ida_events self-test ===")
    lines.append("function : {} (0x44E7B0)".format(name or "BuildingClass::GetPowerOutput"))
    lines.append("this type: {}*  (mult={})".format(this_type, _this_mult(this_type)))
    lines.append("CFG      : entry={} blocks={}".format(cfg.entry_id, len(cfg)))
    lines.append("")
    lines.append("--- per-block canonical events (DFS pre-order) ---")

    flat = []
    for bid in cfg.traverse(order="dfs"):
        b = cfg.get_block(bid)
        evs = list(b.ordered_events)
        flat.extend(evs)
        succ = b.successors
        if evs:
            lines.append("  block {:>2} -> {} : {}".format(bid, succ, evs))
        else:
            lines.append("  block {:>2} -> {} : (no events)".format(bid, succ))

    lines.append("")
    lines.append("--- flattened event list ({}) ---".format(len(flat)))
    for e in flat:
        lines.append("    " + e)

    # Resolve the two expected direct-call addresses by name for a precise check.
    gh = (maps.name_to_addr.get("BuildingClass::GetHealthRatio")
          or maps.sig_name_to_addr.get("BuildingClass::GetHealthRatio"))
    rt = (maps.name_to_addr.get("Math::RoundToInt")
          or maps.sig_name_to_addr.get("Math::RoundToInt"))

    checks = []
    checks.append(("READ(member,1312) present (Type @ *(this+328)*4)",
                   "READ(member,1312)" in flat))
    checks.append(("CALL(vfptr+468) present (virtual IsPoweredOff-style dispatch)",
                   "CALL(vfptr+468)" in flat))
    checks.append(("RET present (>=1 return)",
                   "RET" in flat))
    checks.append(("RET count == 3 (two early returns + final return)",
                   flat.count("RET") == 3))
    if gh:
        checks.append(("CALL(0x{:X}) BuildingClass::GetHealthRatio present".format(gh),
                       call_direct(gh) in flat))
    else:
        checks.append(("BuildingClass::GetHealthRatio resolves to an address",
                       False))
    if rt:
        checks.append(("CALL(0x{:X}) Math::RoundToInt present".format(rt),
                       call_direct(rt) in flat))
    else:
        checks.append(("Math::RoundToInt resolves to an address", False))
    # At least two distinct direct CALLs (the two named callees).
    direct_calls = sorted({e for e in flat
                           if e.startswith("CALL(0x")})
    checks.append(("two distinct direct CALL(0x..) (GetHealthRatio + RoundToInt)",
                   len(direct_calls) >= 2))
    # No raw fragment text survived (every event matches the canonical grammar).
    import re as _re
    grammar = _re.compile(
        r'^(?:CALL\(0x[0-9A-F]+\)|CALL\(vfptr\+\d+\)|'
        r'READ\(member,\d+\)|WRITE\(member,\d+\)|'
        r'READ\(global,0x[0-9A-F]+\)|WRITE\(global,0x[0-9A-F]+\)|RET)$')
    all_canonical = all(grammar.match(e) for e in flat)
    checks.append(("all emitted events match the canonical grammar (no raw text left)",
                   all_canonical))

    lines.append("")
    lines.append("--- resolved direct calls ---")
    lines.append("  BuildingClass::GetHealthRatio -> {}".format(
        "0x{:X}".format(gh) if gh else "UNRESOLVED"))
    lines.append("  Math::RoundToInt              -> {}".format(
        "0x{:X}".format(rt) if rt else "UNRESOLVED"))
    lines.append("  distinct direct CALLs in CFG  -> {}".format(direct_calls))

    lines.append("")
    lines.append("--- checks ---")
    ok = True
    for desc, passed in checks:
        ok = ok and passed
        lines.append("  [{}] {}".format("PASS" if passed else "FAIL", desc))
    lines.append("")
    lines.append("RESULT: {}".format("ALL PASS" if ok else "FAILURES PRESENT"))

    report = "\n".join(lines)
    print(report)

    ev_dir = os.path.normpath(os.path.join(_HERE, "..", ".omo", "evidence"))
    os.makedirs(ev_dir, exist_ok=True)
    ev_path = os.path.join(ev_dir, "task-8-events.txt")
    with open(ev_path, "w", encoding="utf-8") as f:
        f.write(report + "\n")
    print("\nEvidence written:", ev_path, file=sys.stderr)
    return 0 if ok else 1


def _main(argv):
    if not argv or argv[0] in ("--selftest", "-t"):
        return _selftest()
    # Dump canonical events for an arbitrary cache JSON / raw pseudocode file.
    text, name = _load_pseudocode(argv[0])
    cfg = build_events_cfg(text)
    print("function:", name or "(unknown)")
    print("CFG entry={} blocks={}".format(cfg.entry_id, len(cfg)))
    for b in cfg:
        print("  block {} -> {} : {}".format(b.id, b.successors, b.ordered_events))
    return 0


if __name__ == "__main__":
    sys.exit(_main(sys.argv[1:]))
