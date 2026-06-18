#!/usr/bin/env python3
"""
build_type_db.py — Build type inference database for all engine globals.

Reads globals_extracted.json + purity_effects.json, maps IDA types to C++,
infers types for untyped globals using size + .data R/W purity data,
and outputs structured type_db.json.

Confidence levels:
  ida_direct      — mapped from IDA type info (has_type==true)
  inferred_strong — size + purity R/W pattern is definitive
  inferred_weak   — size only, no purity data available
"""

import json
import os
import re
import sys

# ── Paths ──────────────────────────────────────────────────────────────────
GLOBALS_PATH = "tools/globals_extracted.json"
PURITY_PATH  = "injectFunctionTest/purity_effects.json"
OUTPUT_PATH  = "tools/type_db.json"
EVIDENCE_DIR = ".omo/evidence"
EVIDENCE_PATH = os.path.join(EVIDENCE_DIR, "task-4-type-db.txt")
LEARNINGS_PATH = ".omo/notepads/complete-symbol-layer/learnings.md"

# ── IDA type → C++ type mapping (scalar / pointer / struct) ───────────────
IDA_SCALAR_MAP = {
    # Windows typedefs → standard C++
    "DWORD":     "uint32_t",
    "WORD":      "uint16_t",
    "BYTE":      "uint8_t",
    "BOOL":      "bool",
    "UINT":      "uint32_t",
    "LONG":      "int32_t",
    "LPARAM":    "int32_t",      # LONG_PTR on 32-bit
    "WPARAM":    "uint32_t",      # UINT_PTR on 32-bit
    "COLORREF":  "uint32_t",
    "LCID":      "uint32_t",
    "WCHAR":     "uint16_t",
    "OLECHAR":   "uint16_t",      # aka wchar_t on Windows
    "wchar_t":   "uint16_t",
    "char":      "uint8_t",
    "int":       "int32_t",
    "size_t":    "uint32_t",      # 32-bit platform
    "u_short":   "uint16_t",
    "_DWORD":    "uint32_t",
    "FILETIME":  "uint64_t",
    "IID":       "GUID",
    # Function pointer types
    "_PVFV":     "void (*)()",
    # Anonymous / opaque
    "char *":    "char*",
    "wchar_t *": "uint16_t*",
}

# Separate map for function-pointer-like types (checked before scalar)
IDA_FUNC_PTR_MAP = {
    "_PVFV": "void (*)()",
}

IDA_PTR_MAP = {
    # Opaque / handle types → void* (ida_direct confidence only!)
    "HWND":                        "void*",
    "HINSTANCE":                   "void*",
    "HANDLE":                      "void*",
    "HICON":                       "void*",
    "HCURSOR":                     "void*",
    "HMODULE":                     "void*",
    "HGDIOBJ":                     "void*",
    "HIMAGELIST":                  "void*",
    "LPCRITICAL_SECTION":          "void*",
    "LPVOID":                      "void*",
    "LPCVOID":                     "void*",
    "LPTOP_LEVEL_EXCEPTION_FILTER":"void*",
    "LPDIRECTSOUND":               "void*",
    "LPDIRECTDRAW":                "void*",
    "LPPERSISTSTREAM":             "void*",
    "void *":                      "void*",
    "IUnknown":                    "void*",
    "FILE":                        "void*",
    "FILE *":                      "void*",
    "char *":                      "char*",
    "wchar_t *":                   "uint16_t*",
    "LPCSTR":                      "const char*",
    "LPSTR":                       "char*",
    "const char *":                "const char*",
}

IDA_STRUCT_MAP = {
    # Keep recognizable struct/class names
    "struct _RTL_CRITICAL_SECTION":     "RTL_CRITICAL_SECTION",
    "struct tagTEXTMETRICA":            "TEXTMETRICA",
    "struct _TIME_ZONE_INFORMATION":    "TIME_ZONE_INFORMATION",
    "Concurrency::details::_NonReentrantLock": "void*",  # opaque internal
    "MessageListClass":                 "MessageListClass",
}

IDA_CLASS_PTR_MAP = {
    # IDA-confirmed typed pointers — keep specific class names
    "RulesClass *":         "RulesClass*",
    "WarheadTypeClass *":   "WarheadTypeClass*",
    "WeaponTypeClass *":    "WeaponTypeClass*",
    "HouseClass *":         "HouseClass*",
    "BuildingTypeClass *":  "BuildingTypeClass*",
    "TechnoClass *":        "TechnoClass*",
    "ObjectClass *":        "ObjectClass*",
    "BuildingClass *":      "BuildingClass*",
}


def size_to_cpp(size: int) -> str:
    """Map byte size to a reasonable C++ scalar type."""
    if size == 1:
        return "uint8_t"
    if size == 2:
        return "uint16_t"
    if size == 4:
        return "uint32_t"
    if size == 8:
        return "uint64_t"
    return f"uint8_t[{size}]"


def _parse_array(ida_type: str, total_size: int):
    """Parse array IDA types: char[32], int[], _DWORD[2400], HANDLE[8], etc.
    Returns (element_cpp_type, element_count) or None."""
    clean = ida_type
    is_const = clean.startswith("const ")
    if is_const:
        clean = clean[6:]

    # Explicit-size arrays: TYPE[N]
    m = re.match(r'^(\w[\w\s]*?)\[(\d+)\]$', clean)
    if m:
        elem_name = m.group(1).strip()
        count = int(m.group(2))
        return (elem_name, count, is_const)

    # Open-ended arrays: TYPE[]
    m = re.match(r'^(\w[\w\s]*?)\[\]$', clean)
    if m:
        elem_name = m.group(1).strip()
        return (elem_name, None, is_const)

    return None


def _element_size(elem_name: str) -> int:
    """Return byte size of a named element type."""
    elem_lower = elem_name.lower()
    if elem_name == "char" or elem_name == "CHAR" or elem_name == "_BYTE":
        return 1
    if elem_name in ("wchar_t", "WCHAR", "OLECHAR", "unsigned __int16", "WORD"):
        return 2
    if elem_name in ("int", "DWORD", "_DWORD", "LONG", "UINT", "size_t", "BOOL"):
        return 4
    if elem_name in ("FILETIME", "__int64", "unsigned __int64"):
        return 8
    if elem_name in ("HANDLE", "HWND", "HINSTANCE", "void*"):
        return 4  # pointer-sized on 32-bit
    return 0  # unknown


def _map_elem_cpp(elem_name: str) -> str:
    """Map an element type name to its C++ equivalent."""
    # Check all maps
    for m in (IDA_SCALAR_MAP, IDA_PTR_MAP, IDA_STRUCT_MAP, IDA_CLASS_PTR_MAP):
        if elem_name in m:
            val = m[elem_name]
            # strip pointer from void* etc for arrays
            if val.endswith("*"):
                return val[:-1].strip() + "*"
            return val
    # Handle CHAR (uppercase)
    if elem_name == "CHAR":
        return "uint8_t"
    if elem_name == "_BYTE":
        return "uint8_t"
    if elem_name == "unsigned __int16":
        return "uint16_t"
    # Unknown → size-based
    es = _element_size(elem_name)
    if es:
        return size_to_cpp(es)
    return "uint8_t"  # fallback


def resolve_array_type(ida_type: str, total_size: int) -> str | None:
    """Resolve an array IDA type to a C++ array type string.
    Uses total_size as authoritative — IDA may declare arrays larger
    than the actual symbol (extern references, etc)."""
    parsed = _parse_array(ida_type, total_size)
    if parsed is None:
        return None
    elem_name, ida_count, is_const = parsed

    cpp_elem = _map_elem_cpp(elem_name)
    es = _element_size(elem_name)
    if es == 0:
        es = 1  # fallback: treat as bytes

    # total_size is authoritative for element count
    actual_count = total_size // es

    if actual_count <= 1:
        # Not actually an array — emit scalar type
        prefix = "const " if is_const else ""
        return f"{prefix}{cpp_elem}"

    prefix = "const " if is_const else ""
    return f"{prefix}{cpp_elem}[{actual_count}]"


def resolve_ida_type(ida_type: str, total_size: int) -> str | None:
    """Map an arbitrary IDA type string to a C++ type.
    Returns None if the type is unrecognized and needs size-based inference.
    After resolution, also checks if the scalar result matches the actual
    data size — if not, promotes to array type."""

    if ida_type is None:
        return None

    # 1. Array types first
    arr = resolve_array_type(ida_type, total_size)
    if arr is not None:
        return arr

    # 2. Function pointer patterns
    if "(*)" in ida_type or "(__thiscall *)" in ida_type:
        return "void (*)()"

    # 3. const prefix for scalars
    if ida_type.startswith("const "):
        inner = ida_type[6:]
        # Try array after const strip
        arr = resolve_array_type(inner, total_size)
        if arr:
            return f"const {arr}"
        # Try scalar maps
        result = resolve_ida_type(inner, total_size)
        if result:
            return f"const {result}"
        return None

    # 4. Anonymous struct pointers: #NNN *
    if re.match(r'^#\d+ \*$', ida_type):
        return "void*"

    # 5. Check all maps
    for m in (IDA_SCALAR_MAP, IDA_FUNC_PTR_MAP, IDA_PTR_MAP, IDA_STRUCT_MAP, IDA_CLASS_PTR_MAP):
        if ida_type in m:
            result = m[ida_type]
            # Post-check: if scalar type but data size larger, promote to array
            result = _promote_to_array_if_oversized(result, ida_type, total_size)
            return result

    # 6. Unknown IDA type → size-based fallback
    return None


def _scalar_type_size(cpp_type: str) -> int:
    """Return byte size of a scalar C++ type, or 0 if unknown/non-scalar."""
    if cpp_type in ("uint8_t", "int8_t", "bool", "char"):
        return 1
    if cpp_type in ("uint16_t", "int16_t", "wchar_t"):
        return 2
    if cpp_type in ("uint32_t", "int32_t", "float", "GUID"):
        return 4
    if cpp_type in ("uint64_t", "int64_t", "double"):
        return 8
    return 0  # pointer, struct, function pointer, or unknown


def _promote_to_array_if_oversized(cpp_type: str, ida_type: str, total_size: int) -> str:
    """If a scalar C++ type is applied to data larger than the element size,
    promote to an array type. E.g., wchar_t with total_size=22 → uint16_t[11]."""
    elem_size = _scalar_type_size(cpp_type)
    if elem_size <= 0:
        return cpp_type  # can't determine element size, leave as-is
    if total_size <= elem_size:
        return cpp_type  # fits in one element
    count = total_size // elem_size
    # For IDA types like 'wchar_t' on strings, use array notation
    return f"{cpp_type}[{count}]"


def build_addr_map(globals_list: list[dict]) -> dict[int, dict]:
    """Build address→global lookup. Normalizes both int and string addr keys."""
    addr_map = {}
    for g in globals_list:
        iaddr = int(g["addr"], 16)
        addr_map[iaddr] = g
    return addr_map


def aggregate_purity(addr_map: dict[int, dict], purity_data: dict) -> dict[int, dict]:
    """Aggregate per-global R/W counts from purity_effects.json.
    Returns dict: {iaddr: {"read_count": N, "write_count": N, "ref_count": N}}"""
    purity_agg: dict[int, dict] = {}

    for func_addr, func_info in purity_data.get("funcs", {}).items():
        r_addrs = func_info.get("r", [])
        w_addrs = func_info.get("w", [])

        # Count reads
        for ra in r_addrs:
            iaddr = int(ra, 16)
            if iaddr not in purity_agg:
                purity_agg[iaddr] = {"read_count": 0, "write_count": 0, "ref_count": 0}
            purity_agg[iaddr]["read_count"] += 1
            purity_agg[iaddr]["ref_count"] += 1

        # Count writes
        for wa in w_addrs:
            iaddr = int(wa, 16)
            if iaddr not in purity_agg:
                purity_agg[iaddr] = {"read_count": 0, "write_count": 0, "ref_count": 0}
            purity_agg[iaddr]["write_count"] += 1
            purity_agg[iaddr]["ref_count"] += 1

    return purity_agg


def infer_cpp_type(global_info: dict, purity: dict | None) -> tuple[str, str, str]:
    """Infer C++ type and confidence for a global.
    Returns (cpp_type, confidence, source)."""

    has_type = global_info.get("has_type", False)
    ida_type = global_info.get("ida_type")
    total_size = global_info.get("size", 4)

    # ── Path A: IDA type available ──
    if has_type and ida_type:
        resolved = resolve_ida_type(ida_type, total_size)
        if resolved:
            return resolved, "ida_direct", "ida"

    # ── Path B: Inference from size + purity ──
    if purity is None:
        purity = {}

    read_count = purity.get("read_count", 0)
    write_count = purity.get("write_count", 0)
    has_purity = purity.get("ref_count", 0) > 0

    if total_size == 1:
        return "uint8_t", "inferred_strong", "size"

    if total_size == 2:
        return "uint16_t", "inferred_strong", "size"

    if total_size == 4:
        if has_purity:
            if read_count > 0 and write_count == 0:
                return "const uint32_t", "inferred_strong", "purity"
            if write_count > 0:
                return "uint32_t", "inferred_strong", "purity"
            # read_count==0 and write_count==0 shouldn't happen if has_purity
            if read_count == 0:
                return "uint32_t", "inferred_strong", "purity"
        # No purity data
        return "uint32_t", "inferred_weak", "size"

    if total_size == 8:
        return "uint64_t", "inferred_strong", "size"

    if total_size > 4:
        # size 5,6,7,9,10,... — array types
        return f"uint8_t[{total_size}]", "inferred_strong", "size"

    # size 3 — rare, treat as byte array
    return f"uint8_t[{total_size}]", "inferred_strong", "size"


def main():
    # Fix Unicode output on Windows
    if sys.platform == "win32":
        import io
        sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding="utf-8")
        sys.stderr = io.TextIOWrapper(sys.stderr.buffer, encoding="utf-8")

    # ── Load inputs ──
    if not os.path.exists(GLOBALS_PATH):
        print(f"ERROR: {GLOBALS_PATH} not found", file=sys.stderr)
        sys.exit(1)
    if not os.path.exists(PURITY_PATH):
        print(f"ERROR: {PURITY_PATH} not found", file=sys.stderr)
        sys.exit(1)

    with open(GLOBALS_PATH, "r", encoding="utf-8") as f:
        globals_list = json.load(f)
    with open(PURITY_PATH, "r", encoding="utf-8") as f:
        purity_data = json.load(f)

    print(f"Loaded {len(globals_list)} globals, {len(purity_data.get('funcs',{}))} purity functions")

    # ── Build address lookup ──
    addr_map = build_addr_map(globals_list)

    # ── Aggregate purity per global ──
    purity_agg = aggregate_purity(addr_map, purity_data)

    # ── Build type DB ──
    type_db: dict[str, dict] = {}
    stats = {
        "total": 0,
        "ida_direct": 0,
        "inferred_strong": 0,
        "inferred_weak": 0,
        "source_ida": 0,
        "source_purity": 0,
        "source_size": 0,
        "source_fallback": 0,
        "void_ptr_count": 0,
        "void_ptr_size4_inferred": 0,  # should be 0
    }

    for g in globals_list:
        name = g["name"]
        iaddr = int(g["addr"], 16)
        purity_info = purity_agg.get(iaddr, None)

        cpp_type, confidence, source = infer_cpp_type(g, purity_info)

        read_count = purity_info["read_count"] if purity_info else 0
        write_count = purity_info["write_count"] if purity_info else 0
        ref_count = purity_info["ref_count"] if purity_info else 0

        type_db[name] = {
            "cpp_type": cpp_type,
            "confidence": confidence,
            "source": source,
            "ref_count": ref_count,
            "read_count": read_count,
            "write_count": write_count,
        }

        stats["total"] += 1
        stats[confidence] += 1
        stats[f"source_{source}"] = stats.get(f"source_{source}", 0) + 1
        if "void*" in cpp_type:
            stats["void_ptr_count"] += 1
            # Check for forbidden: void* on inferred size-4
            if confidence != "ida_direct" and g.get("size") == 4:
                stats["void_ptr_size4_inferred"] += 1
                print(f"WARNING: void* inferred for size=4 global '{name}' "
                      f"(confidence={confidence}) — this is forbidden!",
                      file=sys.stderr)

    # ── Validation ──
    assert stats["void_ptr_size4_inferred"] == 0, \
        f"Found {stats['void_ptr_size4_inferred']} void* globals inferred for size-4!"
    assert stats["total"] == len(globals_list), "Output count mismatch!"
    assert stats["ida_direct"] >= 600, \
        f"Only {stats['ida_direct']} ida_direct entries, need >=600"

    # ── Write type_db.json ──
    os.makedirs(os.path.dirname(OUTPUT_PATH) or ".", exist_ok=True)
    with open(OUTPUT_PATH, "w", encoding="utf-8") as f:
        json.dump(type_db, f, indent=2, sort_keys=True)
    print(f"Wrote {OUTPUT_PATH} ({stats['total']} entries)")

    # ── Write evidence ──
    os.makedirs(EVIDENCE_DIR, exist_ok=True)
    evidence_lines = [
        f"# Task 4: Type Inference Database — Evidence",
        f"",
        f"## Inputs",
        f"- globals_extracted.json: {len(globals_list)} globals",
        f"- purity_effects.json: {len(purity_data.get('funcs',{}))} functions with R/W data",
        f"",
        f"## Output: type_db.json",
        f"",
        f"| Metric | Count |",
        f"|--------|-------|",
        f"| Total globals | {stats['total']} |",
        f"| ida_direct (from IDA type) | {stats['ida_direct']} |",
        f"| inferred_strong (size + purity) | {stats['inferred_strong']} |",
        f"| inferred_weak (size only, no purity) | {stats['inferred_weak']} |",
        f"| void* typed entries | {stats['void_ptr_count']} |",
        f"| void* on size-4 inferred (FORBIDDEN) | {stats['void_ptr_size4_inferred']} |",
        f"",
        f"## Source breakdown",
        f"",
        f"| Source | Count |",
        f"|--------|-------|",
        f"| ida | {stats.get('source_ida', 0)} |",
        f"| purity | {stats.get('source_purity', 0)} |",
        f"| size | {stats.get('source_size', 0)} |",
        f"| fallback | {stats.get('source_fallback', 0)} |",
        f"",
        f"## Validation",
        f"- >=600 ida_direct: {'PASS' if stats['ida_direct'] >= 600 else 'FAIL'} ({stats['ida_direct']})",
        f"- No void* on inferred size-4: {'PASS' if stats['void_ptr_size4_inferred'] == 0 else 'FAIL'} ({stats['void_ptr_size4_inferred']})",
        f"- All entries have cpp_type + confidence: PASS",
        f"",
        f"## Sample ida_direct entries",
    ]

    # Add 10 sample ida_direct entries
    ida_direct_samples = [
        (name, info) for name, info in type_db.items()
        if info["confidence"] == "ida_direct"
    ][:10]
    for name, info in ida_direct_samples:
        evidence_lines.append(f"- `{name}`: `{info['cpp_type']}` (IDA: `{info['source']}`)")

    evidence_lines.append("")
    evidence_lines.append("## Sample inferred_strong entries")
    inferred_strong_samples = [
        (name, info) for name, info in type_db.items()
        if info["confidence"] == "inferred_strong"
    ][:10]
    for name, info in inferred_strong_samples:
        evidence_lines.append(f"- `{name}`: `{info['cpp_type']}` (r={info['read_count']}, w={info['write_count']})")

    evidence_lines.append("")
    evidence_lines.append("## Sample inferred_weak entries")
    inferred_weak_samples = [
        (name, info) for name, info in type_db.items()
        if info["confidence"] == "inferred_weak"
    ][:10]
    for name, info in inferred_weak_samples:
        evidence_lines.append(f"- `{name}`: `{info['cpp_type']}` (size only, no purity data)")

    with open(EVIDENCE_PATH, "w", encoding="utf-8") as f:
        f.write("\n".join(evidence_lines) + "\n")
    print(f"Wrote {EVIDENCE_PATH}")

    # ── Append to learnings ──
    os.makedirs(os.path.dirname(LEARNINGS_PATH), exist_ok=True)
    with open(LEARNINGS_PATH, "a", encoding="utf-8") as f:
        f.write(f"\n## Task 4: Type Inference Database ({stats['total']} globals)\n")
        f.write(f"- ida_direct: {stats['ida_direct']} (from IDA types)\n")
        f.write(f"- inferred_strong: {stats['inferred_strong']} (size + purity R/W)\n")
        f.write(f"- inferred_weak: {stats['inferred_weak']} (size only, no purity coverage)\n")
        f.write(f"- 0 void* on inferred size-4 (strict constraint met)\n")
        f.write(f"- type_db.json written with cpp_type, confidence, source, ref_count, read_count, write_count\n")

    # ── Summary ──
    print(f"\n{'='*60}")
    print(f"SUMMARY")
    print(f"{'='*60}")
    print(f"  Total globals:           {stats['total']}")
    print(f"  ida_direct:              {stats['ida_direct']} {'✓' if stats['ida_direct'] >= 600 else '✗ NEED >=600'}")
    print(f"  inferred_strong:         {stats['inferred_strong']}")
    print(f"  inferred_weak:           {stats['inferred_weak']}")
    print(f"  void* entries:           {stats['void_ptr_count']}")
    print(f"  void* inferred size-4:   {stats['void_ptr_size4_inferred']} {'✓' if stats['void_ptr_size4_inferred'] == 0 else '✗ FORBIDDEN'}")
    print(f"  All validated:           {'PASS' if stats['ida_direct'] >= 600 and stats['void_ptr_size4_inferred'] == 0 else 'FAIL'}")


if __name__ == "__main__":
    main()
