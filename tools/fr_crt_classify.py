#!/usr/bin/env python3
"""Classify CRT/thunk/library exclusions from functions.json.
Improved CRT detection: exact function name matching, no false positives on game logic."""

import json
import re
import os
from datetime import datetime

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
FUNCTIONS_JSON = os.path.join(SCRIPT_DIR, "..", "injectFunctionTest", "functions.json")
OUTPUT_JSON = os.path.join(SCRIPT_DIR, "fr_crt_exclusions.json")
EVIDENCE_TXT = os.path.join(SCRIPT_DIR, "..", ".omo", "evidence", "fr-task-3-exclusions.txt")

# --- Exact CRT/library function names (MSVC6 runtime) ---
# Only functions WITHOUT "::" (no class namespace) are checked.
# Game methods like ObjectClass::FreeResources will NOT match.

CRT_EXACT_NAMES = {
    # Memory operations
    "memcpy", "memset", "memmove", "memcmp", "memchr",
    "_memcpy", "_memset", "_memmove", "_memcmp", "_memcpy_0",
    # String operations
    "strcpy", "strncpy", "strcat", "strncat",
    "strcmp", "strncmp", "strlen", "strchr", "strrchr", "strstr", "strtok",
    "_strcpy", "_strncpy", "_strcmp", "_strlen",
    "strcmpi", "stricmp", "__strcmpi",
    # Heap
    "malloc", "free", "calloc", "realloc",
    "_malloc", "_free", "_calloc", "_realloc",
    "__nh_malloc", "__heap_alloc",
    "new", "delete",
    "??2@YAPAXI@Z", "??3@YAXPAX@Z",
    # CRT init/exit
    "atexit", "_atexit", "__onexit",
    "_initterm", "__initterm", "___onexitinit",
    # Exception handling
    "_CxxThrowException", "__CxxThrowException", "__CxxThrowException_8",
    "_except_handler3", "_except_handler4",
    "__except_handler3", "__except_handler4",
    "__seh_longjmp_unwind", "__seh_longjmp_unwind_4",
    # SEH
    "__SEH_prolog", "__SEH_epilog",
    # Stack
    "_chkstk", "__chkstk",
    "_alloca_probe", "__alloca_probe",
    # Security
    "@__security_check_cookie_4", "@__security_check_cookie",
    "__security_check_cookie", "__report_gsfailure",
    # Math compiler intrinsics
    "__CIpow", "__CIsin", "__CIcos", "__CItan",
    "__CIatan", "__CIatan2", "__CIlog", "__CIlog10", "__CIexp", "__CIsqrt",
    "_CIpow", "_CIsin", "_CIcos",
    "__ftol2", "_ftol2", "__ftol2_sse",
    "_dtol", "__dtold", "___dtold", "_ltod",
    # Integer arithmetic helpers
    "__allmul", "__alldiv", "__aulldiv", "__aullrem", "__allrem",
    "__allshl", "__allshr", "__aulldiv", "__aullshr",
    # CRT locale/time/internal
    "__cfltcvt_init", "__cfltcvt_init_13",
    "__freebuf", "__free_osfhnd",
    "__free_lc_time", "__free_lc_lconv",
    "__get_lc_time", "__get_lc_lconv",
    "__toupper", "__tolower", "__ioterm",
    "___setargv",
    "___sbh_free_block", "___sbh_alloc_block", "___sbh_heap_check",
    "___crtLCMapStringA", "___crtLCMapStringW",
    "___crtGetStringTypeA", "___crtGetStringTypeW",
    "___crtGetEnvironmentStringsA",
    "___crtCompareStringA", "___crtsetenv",
    "___crtMessageBoxA", "___crtGetLocaleInfoW", "___crtGetLocaleInfoA",
    "___inc_tmpoff", "___strgtold12",
    "__input", "__output", "__winput", "__woutput", "__winitenv",
    "__expandtime",
    # Pure virtual / RTC
    "_purecall", "__purecall",
    "_RTC_CheckEsp", "_RTC_InitBase", "_RTC_Shutdown",
    # Frame handler / FP
    "__CxxFrameHandler", "__CxxFrameHandler3",
    "__fctrl_used", "_controlfp",
}

# --- Prefix / Contains blacklists ---
BLACKLIST_PREFIXES = ["??_", "__", "_CI", "_EH", "_except"]
BLACKLIST_CONTAINS = ["nullsub", "_thunk", "j_nullsub"]

def is_small_thunk(entry):
    return entry.get("size", 999) <= 6

def has_blacklist_name(entry):
    name = entry.get("name", "")
    return any(p in name for p in BLACKLIST_CONTAINS)

def starts_with_blacklist_prefix(entry):
    name = entry.get("name", "")
    return any(name.startswith(p) for p in BLACKLIST_PREFIXES)

def is_exact_crt_name(entry):
    """Exact CRT name match. Only matches functions WITHOUT '::' (no class namespace)."""
    name = entry.get("name", "")
    if "::" in name:
        return False
    return name in CRT_EXACT_NAMES

def is_crt_like(entry):
    """Heuristic: CRT-like substrings for functions without class namespace."""
    name = entry.get("name", "")
    if "::" in name:
        return False
    crt_substrings = [
        "___crt", "___sbh_", "__free_", "__get_lc_", "__cfltcvt",
        "__expandtime", "__input", "__output", "__winput", "__woutput",
        "___strgtold", "___inc_tmp", "__ioterm", "__winitenv",
    ]
    return any(sub in name for sub in crt_substrings)

def get_reason_key(reason):
    return reason.split("(")[0].strip()

def main():
    print(f"Loading {FUNCTIONS_JSON}...")
    with open(FUNCTIONS_JSON, "r", encoding="utf-8") as f:
        data = json.load(f)

    funcs = data["functions"]
    total = len(funcs)
    print(f"Total functions: {total}")

    by_addr = {}

    for entry in funcs:
        addr = entry.get("address", "?")
        name = entry.get("name", "")
        size = entry.get("size", 0)
        reasons = []

        if is_small_thunk(entry):
            reasons.append(f"small_thunk (size={size})")
        if has_blacklist_name(entry):
            reasons.append("blacklist_name")
        if starts_with_blacklist_prefix(entry):
            matched = [p for p in BLACKLIST_PREFIXES if name.startswith(p)]
            reasons.append(f"name_prefix ({matched[0]})")
        if is_exact_crt_name(entry):
            reasons.append("crt_exact")
        if is_crt_like(entry):
            reasons.append("crt_like")

        if reasons:
            if addr in by_addr:
                existing = set(by_addr[addr]["reasons"])
                existing.update(reasons)
                by_addr[addr]["reasons"] = list(existing)
            else:
                by_addr[addr] = {"addr": addr, "name": name, "size": size, "reasons": reasons}

    excluded = list(by_addr.values())
    excluded_count = len(excluded)

    # Reason breakdown
    reason_counts = {}
    by_reason = {}
    for e in excluded:
        for r in e["reasons"]:
            rk = get_reason_key(r)
            reason_counts[rk] = reason_counts.get(rk, 0) + 1
            by_reason.setdefault(rk, []).append(e)

    # Samples
    samples = []
    seen_names = set()
    for rk in sorted(by_reason.keys()):
        for e in by_reason[rk]:
            name = e.get("name", "")
            if len(samples) < 50 and name not in seen_names:
                samples.append({"addr": e["addr"], "name": name, "size": e["size"], "reason": rk})
                seen_names.add(name)

    # Output
    output = {
        "metadata": {
            "generated": datetime.now().isoformat(),
            "source": "functions.json",
            "total_functions": total,
            "excluded_count": excluded_count,
            "exclusion_rate": f"{excluded_count/total*100:.2f}%",
        },
        "reason_breakdown": {k: len(v) for k, v in by_reason.items()},
        "excluded_addresses": sorted([e["addr"] for e in excluded]),
        "details": sorted(excluded, key=lambda x: x["addr"]),
        "samples": sorted(samples, key=lambda x: (x["reason"], x["name"]))
    }

    os.makedirs(os.path.dirname(OUTPUT_JSON), exist_ok=True)
    with open(OUTPUT_JSON, "w", encoding="utf-8") as f:
        json.dump(output, f, indent=2, ensure_ascii=False)

    # Evidence file
    os.makedirs(os.path.dirname(EVIDENCE_TXT), exist_ok=True)
    with open(EVIDENCE_TXT, "w", encoding="utf-8") as f:
        f.write(f"FR Task 3: CRT/Thunk/Library Exclusions Classification\n")
        f.write(f"{'='*60}\n")
        f.write(f"Source: {FUNCTIONS_JSON}\n")
        f.write(f"Total functions: {total}\n")
        f.write(f"Excluded: {excluded_count} ({excluded_count/total*100:.2f}%)\n\n")
        f.write(f"Reason breakdown:\n")
        for rk in sorted(by_reason.keys(), key=lambda x: -len(by_reason[x])):
            f.write(f"  {rk}: {len(by_reason[rk])}\n")
        f.write(f"\n--- Sample entries by reason ---\n")
        for rk in sorted(by_reason.keys()):
            f.write(f"\n[{rk}] (first 8):\n")
            for e in by_reason[rk][:8]:
                f.write(f"  {e['addr']}: {e['name']} (size={e['size']})\n")
        # False positive check
        f.write(f"\n--- Game-logic false positive check ---\n")
        game_suspects = [e for e in excluded
                         if "::" in e.get("name", "")
                         and len(e["reasons"]) == 1
                         and get_reason_key(e["reasons"][0]) == "small_thunk"]
        f.write(f"Entries with '::' excluded ONLY by small_thunk: {len(game_suspects)}\n")
        for e in game_suspects[:20]:
            f.write(f"  {e['addr']}: {e['name']} (size={e['size']})\n")
        if len(game_suspects) > 20:
            f.write(f"  ... and {len(game_suspects) - 20} more\n")
        crt_entries = [e for e in excluded if any(get_reason_key(r) == "crt_exact" for r in e["reasons"])]
        f.write(f"\nCRT exact matches: {len(crt_entries)}\n")

    print(f"\n=== Classification Complete ===")
    print(f"Total: {total}")
    print(f"Excluded: {excluded_count} ({excluded_count/total*100:.2f}%)")
    for rk in sorted(by_reason.keys(), key=lambda x: -len(by_reason[x])):
        print(f"  {rk}: {len(by_reason[rk])}")
    print(f"\nOutput: {OUTPUT_JSON}")
    print(f"Evidence: {EVIDENCE_TXT}")

if __name__ == "__main__":
    main()
