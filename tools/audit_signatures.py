#!/usr/bin/env python3
"""audit_signatures.py - READ-ONLY parameter-signature audit across 3 sources.

A function symbol is not complete with a NAME alone: C++ overloading means the
parameter signature is part of the identity. This tool assesses how complete and
correct the symbol table's parameter signatures are by cross-comparing:

  1. tools/ida_function_db.json          - IDA truth (param_types, is_thiscall)
  2. injectFunctionTest/functions.json   - the symbol table (call.params)
  3. src/**/*.hpp                         - C++ declaration param lists (// 0xADDR)

It REPORTS discrepancy counts only. It modifies NOTHING (assessment only).

------------------------------------------------------------------------------
Normalization / comparison rules (per user spec)
------------------------------------------------------------------------------
  * thiscall: if IDA `is_thiscall`, the FIRST IDA param (the implicit `this`) is
    dropped before comparison. functions.json and hpp member declarations do NOT
    list `this`, so they are used as-is. (Empirically verified: for thiscall
    functions present in both sources, json param count == IDA count-1 in 5348
    cases vs == IDA count in only 1251.)

  * basic types are compared by SIZE FAMILY (not by exact spelling), because:
      - IDA cannot know signedness, so it emits `_DWORD`/`int` interchangeably
        for the same 4-byte slot (`_DWORD` -> {int, uint32_t, long, ...}).
      - signedness/typedef spelling is ABI-irrelevant; SIZE is what matters.
    Buckets: B1 (1B: char/bool/__int8/_BYTE/byte), B2 (2B: short/_WORD/wchar_t),
    B4 (4B: int/long/_DWORD/BOOL/DWORD), B8 (8B: __int64/_QWORD), F4 (float),
    F8 (double). A basic-vs-basic SIZE difference (e.g. char vs int) is a REAL
    error -> BASIC_MISMATCH.

  * pointers are GENERIC: any `T*`/`void*`/`_DWORD*`/`ClassName*`/`T&` matches any
    other pointer. Per the function-level verdict, all pointers are treated as
    equal. When two pointers differ ONLY in pointee type, the function is
    classified POINTER_ONLY_DIFF (acceptable), distinct from a hard MATCH.

  * param COUNT: after dropping `this`, the counts must match. A count difference
    is flagged COUNT_MISMATCH (often an IDA mis-parse of variadics/inlined args,
    sometimes a real signature gap) -- reported separately from BASIC_MISMATCH.

Function-level classification (priority order), comparing a C++ source vs IDA:
  MISSING          : C++ source has no params, but IDA (after this-drop) has >=1
  COUNT_MISMATCH   : param counts differ
  BASIC_MISMATCH   : a basic-vs-basic size differs, OR a pointer-vs-value clash
  POINTER_ONLY_DIFF: only differ in pointer pointee types (acceptable)
  MATCH            : all params agree

Output:
  * stdout human summary (or --json for machine-readable to stdout)
  * .omo/signature_audit.json : per-category counts + 20 samples per category

Usage:
  python tools/audit_signatures.py            # human report + writes json
  python tools/audit_signatures.py --json     # machine json to stdout + writes json
  python tools/audit_signatures.py --selftest # run normalization self-tests
  python tools/audit_signatures.py --no-write  # do not write .omo json
"""
import json
import os
import re
import sys
from pathlib import Path
from collections import Counter

ROOT = Path(__file__).resolve().parent.parent
IDA_DB = ROOT / "tools" / "ida_function_db.json"
FUNCS_JSON = ROOT / "injectFunctionTest" / "functions.json"
HPP_DIRS = ["src", "include/gamemd", "app"]
OUT_JSON = ROOT / ".omo" / "signature_audit.json"

# ----------------------------------------------------------------------------
# Address normalization (consistent lowercase 0x<hex>, no padding)
# ----------------------------------------------------------------------------

def norm_addr(addr):
    if addr is None:
        return ""
    a = str(addr).strip()
    if not a:
        return ""
    try:
        # int(x, 16) accepts an optional 0x prefix, covering both spellings.
        return "0x%x" % int(a, 16)
    except ValueError:
        # not a hex literal -> fall back to lowercase
        return a.lower()


# ----------------------------------------------------------------------------
# Type bucketing
# ----------------------------------------------------------------------------

# Size-family buckets keyed by lowercased base type spelling.
_SIZE_BUCKET = {
    # 1-byte
    "char": "B1", "signed char": "B1", "unsigned char": "B1",
    "__int8": "B1", "unsigned __int8": "B1", "int8_t": "B1", "uint8_t": "B1",
    "_byte": "B1", "byte": "B1", "bool": "B1", "_bool": "B1",
    # 2-byte
    "short": "B2", "short int": "B2", "signed short": "B2",
    "unsigned short": "B2", "unsigned short int": "B2",
    "__int16": "B2", "unsigned __int16": "B2", "int16_t": "B2", "uint16_t": "B2",
    "_word": "B2", "word": "B2", "wchar_t": "B2",
    # 4-byte
    "int": "B4", "signed int": "B4", "unsigned int": "B4",
    "unsigned": "B4", "signed": "B4",
    "__int32": "B4", "unsigned __int32": "B4", "int32_t": "B4", "uint32_t": "B4",
    "_dword": "B4", "dword": "B4",
    "long": "B4", "long int": "B4", "signed long": "B4",
    "unsigned long": "B4", "unsigned long int": "B4",
    # 8-byte
    "__int64": "B8", "unsigned __int64": "B8", "int64_t": "B8", "uint64_t": "B8",
    "long long": "B8", "unsigned long long": "B8",
    "_qword": "B8", "qword": "B8",
    # float / double
    "float": "F4", "double": "F8", "long double": "F8",
    # void (by value -> 0-param marker)
    "void": "VOID",
}

# WinAPI typedefs are case-sensitive (BOOL=4B int, bool=1B). Resolve BEFORE
# lowercasing so BOOL and bool do not collide.
_WINAPI_BUCKET = {
    "BOOL": "B4", "DWORD": "B4", "DWORD32": "B4", "UINT": "B4", "INT": "B4",
    "LONG": "B4", "ULONG": "B4", "HRESULT": "B4", "BOOLEAN": "B1",
    "WORD": "B2", "USHORT": "B2", "SHORT": "B2", "WCHAR": "B2",
    "BYTE": "B1", "UCHAR": "B1", "CHAR": "B1",
    "FLOAT": "F4", "DOUBLE": "F8",
}

# Single-word tokens that are part of a type (never a variable name).
_TYPE_WORDS = set()
for _k in _SIZE_BUCKET:
    for _w in _k.split():
        _TYPE_WORDS.add(_w)
_TYPE_WORDS |= {w.lower() for w in _WINAPI_BUCKET}
_TYPE_WORDS |= {"const", "volatile", "struct", "class", "enum", "register",
                "__int8", "__int16", "__int32", "__int64",
                "_byte", "_word", "_dword", "_qword"}

_QUAL_RE = re.compile(r'\b(const|volatile|struct|class|enum|register|__unaligned)\b')


def _clean_base(t):
    """Strip qualifiers + collapse whitespace from a non-pointer base type."""
    t = _QUAL_RE.sub("", t)
    t = re.sub(r'\s+', ' ', t).strip()
    return t


def base_bucket(base):
    """Map a cleaned non-pointer base type string to a size bucket or 'OTHER'.

    Returns one of B1/B2/B4/B8/F4/F8/VOID/OTHER, or None for empty.
    """
    base = _clean_base(base)
    if not base:
        return None
    # case-sensitive WinAPI first (BOOL vs bool)
    for tok, b in _WINAPI_BUCKET.items():
        if base == tok:
            return b
    low = base.lower()
    if low in _SIZE_BUCKET:
        return _SIZE_BUCKET[low]
    return "OTHER"


def _pointee_key(param):
    """For a pointer param, return a normalized pointee key.

    A basic pointee collapses to its size bucket (so `int*` == `_DWORD*`); a
    non-basic pointee uses its cleaned lowercase name (so `int*` != `HouseClass*`).
    Used ONLY to distinguish MATCH from POINTER_ONLY_DIFF; the function verdict
    still treats all pointers as equal for the headline MATCH/MISMATCH axis.
    """
    p = param.strip()
    head = re.split(r'[*&]', p, maxsplit=1)[0]
    head = _clean_base(head)
    # drop trailing identifier if any (e.g. "const char * Source" -> head "char")
    b = base_bucket(head)
    if b and b != "OTHER":
        return b
    # OTHER: collapse pointer depth-insensitive name
    return head.lower() or "void"


def classify_param(param):
    """Classify ONE parameter string into a comparison token.

    Returns a tuple:
      ('PTR', pointee_key)          for pointer / reference params
      ('VAL', bucket)               for by-value params (bucket in B*/F*/OTHER)
      None                          for empty / a lone 'void'
    Handles both IDA ('int * this', '_DWORD * arg1', '#377 * this') and C++
    ('int a1', 'const char* p0', 'HouseClass *pHouse') spellings.
    """
    p = param.strip()
    if not p:
        return None
    # arrays decay to pointers
    if '[' in p:
        return ('PTR', _pointee_key(p))
    if '*' in p or '&' in p:
        return ('PTR', _pointee_key(p))
    # by-value: strip a trailing identifier (variable name)
    p2 = _QUAL_RE.sub("", p)
    p2 = re.sub(r'\s+', ' ', p2).strip()
    words = p2.split()
    if not words:
        return None
    if len(words) > 1:
        last = words[-1]
        if last.lower() not in _TYPE_WORDS and last not in _WINAPI_BUCKET:
            words = words[:-1]
    base = " ".join(words)
    b = base_bucket(base)
    if b is None or b == "VOID":
        return None  # lone 'void' -> no param
    return ('VAL', b)


# ----------------------------------------------------------------------------
# Per-source parameter extraction
# ----------------------------------------------------------------------------

def ida_params(entry):
    """Return normalized [token] for an IDA entry, dropping `this` if thiscall.

    token = classify_param(...) result; None tokens (void) are filtered.
    """
    pts = entry.get("param_types") or []
    if entry.get("is_thiscall") and pts:
        pts = pts[1:]  # drop implicit this (positionally, regardless of its name)
    toks = []
    for pt in pts:
        t = classify_param(pt)
        if t is not None:
            toks.append(t)
    return toks


def json_params(entry):
    """Return normalized [token] for a functions.json entry (already this-free)."""
    call = entry.get("call") or {}
    params = call.get("params")
    if params is None:
        return None  # no param data at all
    toks = []
    conv = (call.get("convention") or "").lower()
    for i, p in enumerate(params):
        if isinstance(p, dict):
            ty = p.get("type", "")
            nm = p.get("name", "")
        else:
            ty = str(p)
            nm = ""
        # defensive: if a json thiscall ever listed an explicit `this` first, drop it
        if i == 0 and conv == "thiscall" and nm in ("this", "this_"):
            continue
        t = classify_param(ty)
        if t is not None:
            toks.append(t)
    return toks


# --- hpp declaration param extraction (// 0xADDR annotations) ---

_ADDR_RE = re.compile(r'//\s*(?:IDA[:\s]+)?(0x[0-9A-Fa-f]{5,8})')


def _split_top_level_commas(s):
    parts, depth, cur = [], 0, ""
    for ch in s:
        if ch in "<([{":
            depth += 1
            cur += ch
        elif ch in ">)]}":
            depth -= 1
            cur += ch
        elif ch == "," and depth == 0:
            parts.append(cur)
            cur = ""
        else:
            cur += ch
    if cur.strip():
        parts.append(cur)
    return [p.strip() for p in parts if p.strip()]


_BLOCK_COMMENT_RE = re.compile(r'/\*.*?\*/')


def _strip_block_comments(s):
    """Remove same-line C-style /* ... */ comments.

    CRITICAL: the bulk `_funcs.hpp` declarations encode the parameter list as a
    placeholder comment, e.g.  `char* Foo(/* param_bytes: 0 */) noexcept;` .
    After stripping, that becomes `char* Foo()` -> 0 params, which is the honest
    reading (these decls carry an aggregate byte-count comment, NOT per-param
    types). Without this strip, `/* param_bytes */` is mis-read as a parameter."""
    return _BLOCK_COMMENT_RE.sub("", s)


def _logical_decl(lines, idx):
    """Build the declaration text (before the // line-comment) for line idx
    (0-based), joining preceding lines only to balance an unclosed '('.

    Block comments are stripped from every line touched. If the annotated line's
    code has no ')' at all, it is NOT a param-list tail -> returned as-is (so a
    bare/commented-out annotation never steals a neighbouring decl's params)."""
    pre = _strip_block_comments(lines[idx].split("//", 1)[0])
    if ")" not in pre:
        return pre  # no param list ends on this line
    if pre.count("(") == pre.count(")"):
        return pre
    # closing paren present but unbalanced -> params span previous lines
    buf = pre
    j = idx - 1
    steps = 0
    while j >= 0 and steps < 8 and buf.count("(") != buf.count(")"):
        prev = _strip_block_comments(lines[j].split("//", 1)[0])
        buf = prev + " " + buf
        j -= 1
        steps += 1
    return buf


def _extract_param_group(decl):
    """Return the inner text of the function's parameter list, or None.

    Finds the LAST balanced (...) group and requires a word/identifier char
    immediately before its '(' (so `if (...)` style is rejected)."""
    # locate last ')'
    end = decl.rfind(")")
    if end < 0:
        return None
    depth = 0
    start = -1
    for k in range(end, -1, -1):
        c = decl[k]
        if c == ")":
            depth += 1
        elif c == "(":
            depth -= 1
            if depth == 0:
                start = k
                break
    if start < 0:
        return None
    # char before '(' must be an identifier-ish char (function name / dtor / template)
    j = start - 1
    while j >= 0 and decl[j] == " ":
        j -= 1
    if j < 0 or not re.match(r'[\w:>~\]]', decl[j]):
        return None
    return decl[start + 1:end]


def extract_hpp_params(directories):
    """Scan hpp files for `// 0xADDR` annotated function declarations.

    Returns:
      hpp_par : {addr: [token,...]}   addresses with a parseable param list
      hpp_seen: set(addr)             all addresses with a // 0xADDR annotation
                                       (incl. comment-only anchors w/o a decl)
    On addr collision (same addr annotated twice) the FIRST decl-with-params wins.
    """
    hpp_par = {}
    hpp_seen = set()
    for d in directories:
        base = ROOT / d
        if not base.exists():
            continue
        for hpp in base.rglob("*.hpp"):
            try:
                lines = hpp.read_text(encoding="utf-8", errors="replace").splitlines()
            except Exception:
                continue
            for i, line in enumerate(lines):
                m = _ADDR_RE.search(line)
                if not m:
                    continue
                addr = norm_addr(m.group(1))
                hpp_seen.add(addr)
                if addr in hpp_par:
                    continue
                decl = _logical_decl(lines, i)
                inner = _extract_param_group(decl)
                if inner is None:
                    continue  # comment-only anchor or non-decl line
                toks = []
                for p in _split_top_level_commas(inner):
                    t = classify_param(p)
                    if t is not None:
                        toks.append(t)
                hpp_par[addr] = toks
    return hpp_par, hpp_seen


# ----------------------------------------------------------------------------
# Comparison
# ----------------------------------------------------------------------------

def compare(src_toks, ida_toks):
    """Classify a C++ source param list vs IDA's (both already normalized).

    src_toks may be None (no param data => MISSING handled by caller).
    Returns (verdict, reason) where verdict in
      MATCH / POINTER_ONLY_DIFF / COUNT_MISMATCH / BASIC_MISMATCH.
    """
    if len(src_toks) != len(ida_toks):
        return ("COUNT_MISMATCH",
                f"src={len(src_toks)} ida={len(ida_toks)}")
    pointee_diff = False
    for k, (s, ig) in enumerate(zip(src_toks, ida_toks)):
        scat, sval = s
        icat, ival = ig
        if scat != icat:
            # pointer-vs-value category clash = real error
            return ("BASIC_MISMATCH",
                    f"param{k}: {scat}({sval}) vs {icat}({ival}) [ptr/value clash]")
        if scat == "VAL":
            # both by-value: basic-vs-basic size difference is a real error
            if sval == "OTHER" or ival == "OTHER":
                continue  # by-value UDT vs scalar is ambiguous -> tolerate
            if sval != ival:
                return ("BASIC_MISMATCH",
                        f"param{k}: {sval} vs {ival}")
        else:  # both PTR
            if sval != ival:
                pointee_diff = True
    if pointee_diff:
        return ("POINTER_ONLY_DIFF", "pointer pointee types differ")
    return ("MATCH", "")


# ----------------------------------------------------------------------------
# Audit driver
# ----------------------------------------------------------------------------

CATS = ["MATCH", "POINTER_ONLY_DIFF", "COUNT_MISMATCH", "BASIC_MISMATCH", "MISSING"]


def _audit_source(ida_map, fnmap_or_hppmap, get_src_toks, names):
    """Run the per-function classification for one C++ source vs IDA.

    get_src_toks(addr) -> (present:bool, toks:list|None)
    Returns dict: counts + samples per category + 'no_data' (addr in IDA but the
    C++ source has no entry at all).
    """
    counts = Counter()
    samples = {c: [] for c in CATS}
    no_data = 0
    legit_empty = 0  # src empty AND ida 0-param (correctly void) -> a MATCH variant
    for addr, ie in ida_map.items():
        itoks = ida_params(ie)
        present, stoks = get_src_toks(addr)
        if not present:
            no_data += 1
            continue
        if stoks is None or len(stoks) == 0:
            if len(itoks) == 0:
                counts["MATCH"] += 1
                legit_empty += 1
                continue
            counts["MISSING"] += 1
            if len(samples["MISSING"]) < 20:
                samples["MISSING"].append({
                    "addr": addr,
                    "ida_name": ie.get("name", ""),
                    "ida_params": ie.get("param_types", []),
                    "is_thiscall": bool(ie.get("is_thiscall")),
                    "src_name": names.get(addr, ""),
                })
            continue
        verdict, reason = compare(stoks, itoks)
        counts[verdict] += 1
        if verdict != "MATCH" and len(samples[verdict]) < 20:
            samples[verdict].append({
                "addr": addr,
                "ida_name": ie.get("name", ""),
                "ida_params": ie.get("param_types", []),
                "is_thiscall": bool(ie.get("is_thiscall")),
                "src_name": names.get(addr, ""),
                "src_tokens": [f"{c}:{v}" for c, v in stoks],
                "ida_tokens": [f"{c}:{v}" for c, v in itoks],
                "reason": reason,
            })
    return {
        "counts": {c: counts.get(c, 0) for c in CATS},
        "with_data": sum(counts.get(c, 0) for c in CATS),
        "no_data": no_data,
        "legit_empty_void": legit_empty,
        "samples": samples,
    }


def audit():
    print("Loading data sources...", file=sys.stderr)
    ida_raw = json.loads(IDA_DB.read_text(encoding="utf-8"))
    ida_map = {norm_addr(a): e for a, e in ida_raw.items()}

    fj_raw = json.loads(FUNCS_JSON.read_text(encoding="utf-8"))
    fj_entries = fj_raw.get("functions", [])
    fj_map = {}
    fj_names = {}
    for e in fj_entries:
        a = norm_addr(e.get("address"))
        fj_map[a] = e
        fj_names[a] = e.get("name", "")

    hpp_par, hpp_seen = extract_hpp_params(HPP_DIRS)

    print(f"  ida_function_db:   {len(ida_map):,} entries", file=sys.stderr)
    print(f"  functions.json:    {len(fj_map):,} entries "
          f"({sum(1 for e in fj_entries if (e.get('call') or {}).get('params'))} with params)",
          file=sys.stderr)
    print(f"  hpp annotations:   {len(hpp_seen):,} addrs "
          f"({len(hpp_par):,} with a parseable decl param list)", file=sys.stderr)

    # IDA thiscall stats
    ida_thiscall = sum(1 for e in ida_map.values() if e.get("is_thiscall"))

    # --- functions.json vs IDA (primary) ---
    def json_get(addr):
        e = fj_map.get(addr)
        if e is None:
            return (False, None)
        return (True, json_params(e))

    json_res = _audit_source(ida_map, fj_map, json_get, fj_names)

    # --- hpp vs IDA (secondary, only over addrs that have hpp param data) ---
    def hpp_get(addr):
        if addr not in hpp_par:
            return (False, None)
        return (True, hpp_par[addr])

    hpp_res = _audit_source(ida_map, hpp_par, hpp_get, fj_names)

    # hpp-annotated-but-no-decl (comment anchors): addr in hpp_seen, in IDA, no params
    hpp_anchor_no_params = sum(
        1 for a in hpp_seen if a in ida_map and a not in hpp_par)

    report = {
        "totals": {
            "functions_json_entries": len(fj_map),
            "functions_json_with_params": sum(
                1 for e in fj_entries if (e.get("call") or {}).get("params")),
            "ida_entries_with_signature_data": len(ida_map),
            "ida_thiscall": ida_thiscall,
            "hpp_annotated_addrs": len(hpp_seen),
            "hpp_with_param_decl": len(hpp_par),
            "hpp_anchor_no_params_inIDA": hpp_anchor_no_params,
        },
        "functions_json_vs_ida": {
            "compared": json_res["with_data"],
            "ida_funcs_absent_from_json": json_res["no_data"],
            "legit_empty_void_matches": json_res["legit_empty_void"],
            "counts": json_res["counts"],
        },
        "hpp_vs_ida": {
            "compared": hpp_res["counts"]["MATCH"] + hpp_res["counts"]["POINTER_ONLY_DIFF"]
                        + hpp_res["counts"]["COUNT_MISMATCH"] + hpp_res["counts"]["BASIC_MISMATCH"]
                        + hpp_res["counts"]["MISSING"],
            "hpp_decls_absent_from_ida": hpp_res["no_data"],
            "counts": hpp_res["counts"],
        },
        "scope_assessment": {
            # the real signature-sync workload (functions.json side)
            "json_real_errors_BASIC": json_res["counts"]["BASIC_MISMATCH"],
            "json_count_mismatch_possible_misparse": json_res["counts"]["COUNT_MISMATCH"],
            "json_missing_params": json_res["counts"]["MISSING"],
            "json_acceptable_pointer_only": json_res["counts"]["POINTER_ONLY_DIFF"],
            "json_clean_match": json_res["counts"]["MATCH"],
        },
        "samples": {
            "functions_json_vs_ida": {
                c: json_res["samples"][c] for c in
                ["BASIC_MISMATCH", "COUNT_MISMATCH", "MISSING", "POINTER_ONLY_DIFF"]
            },
            "hpp_vs_ida": {
                c: hpp_res["samples"][c] for c in
                ["BASIC_MISMATCH", "COUNT_MISMATCH", "MISSING", "POINTER_ONLY_DIFF"]
            },
        },
    }
    return report


def print_human(r):
    t = r["totals"]
    j = r["functions_json_vs_ida"]
    h = r["hpp_vs_ida"]
    s = r["scope_assessment"]
    print("=" * 68)
    print("  SIGNATURE AUDIT (READ-ONLY) - param signatures vs IDA")
    print("=" * 68)
    print("\n-- Data sources --")
    print(f"  IDA entries (signature data):  {t['ida_entries_with_signature_data']:,}"
          f"  ({t['ida_thiscall']:,} thiscall)")
    print(f"  functions.json entries:        {t['functions_json_entries']:,}"
          f"  ({t['functions_json_with_params']:,} with call.params)")
    print(f"  hpp // 0xADDR annotations:     {t['hpp_annotated_addrs']:,}"
          f"  ({t['hpp_with_param_decl']:,} with a parseable param decl)")

    print("\n-- functions.json params  vs  IDA (primary) --")
    print(f"  compared (json has param data & in IDA): {j['compared']:,}")
    print(f"  IDA funcs absent from functions.json:    {j['ida_funcs_absent_from_json']:,}")
    c = j["counts"]
    tot = max(1, j["compared"])
    for cat in CATS:
        print(f"    {cat:<18} {c[cat]:>7,}  ({c[cat]/tot*100:5.1f}%)")
    print(f"    (of MATCH, {j['legit_empty_void_matches']:,} are correctly-empty void funcs)")

    print("\n-- hpp params  vs  IDA (secondary) --")
    print(f"  compared (hpp has param decl & in IDA):  {h['compared']:,}")
    ch = h["counts"]
    toth = max(1, h["compared"])
    for cat in CATS:
        print(f"    {cat:<18} {ch[cat]:>7,}  ({ch[cat]/toth*100:5.1f}%)")

    print("\n-- Scope of signature-sync work (functions.json side) --")
    print(f"  Clean MATCH:                       {s['json_clean_match']:,}")
    print(f"  Acceptable POINTER_ONLY_DIFF:      {s['json_acceptable_pointer_only']:,}")
    print(f"  MISSING (no params, IDA has some): {s['json_missing_params']:,}")
    print(f"  COUNT_MISMATCH (poss. IDA misparse):{s['json_count_mismatch_possible_misparse']:,}")
    print(f"  BASIC_MISMATCH (REAL errors):      {s['json_real_errors_BASIC']:,}")

    # a few samples of the real errors
    bm = r["samples"]["functions_json_vs_ida"]["BASIC_MISMATCH"]
    if bm:
        print("\n-- Sample BASIC_MISMATCH (functions.json vs IDA) --")
        for x in bm[:10]:
            print(f"  {x['addr']} {x['ida_name']}")
            print(f"     json={x['src_tokens']}  ida={x['ida_tokens']}  [{x['reason']}]")


# ----------------------------------------------------------------------------
# Self-tests (anchor the normalization rules)
# ----------------------------------------------------------------------------

def _selftest():
    fails = []
    n = [0]

    def ck(cond, msg):
        n[0] += 1
        if not cond:
            fails.append(msg)

    # classify_param basics
    ck(classify_param("int a1") == ("VAL", "B4"), "int->B4")
    ck(classify_param("unsigned int x") == ("VAL", "B4"), "uint->B4")
    ck(classify_param("char c") == ("VAL", "B1"), "char->B1")
    ck(classify_param("bool b") == ("VAL", "B1"), "bool->B1")
    ck(classify_param("short s") == ("VAL", "B2"), "short->B2")
    ck(classify_param("__int64 q") == ("VAL", "B8"), "i64->B8")
    ck(classify_param("float f") == ("VAL", "F4"), "float->F4")
    ck(classify_param("double d") == ("VAL", "F8"), "double->F8")
    ck(classify_param("_DWORD arg1") == ("VAL", "B4"), "_DWORD->B4")
    ck(classify_param("_BYTE x") == ("VAL", "B1"), "_BYTE->B1")
    ck(classify_param("BOOL ok") == ("VAL", "B4"), "BOOL->B4 (4-byte WinAPI)")
    ck(classify_param("DWORD n") == ("VAL", "B4"), "DWORD->B4")
    ck(classify_param("void") is None, "lone void -> None")
    # pointers -> generic PTR (pointee key for POINTER_ONLY_DIFF only)
    ck(classify_param("int * this")[0] == "PTR", "int* ptr")
    ck(classify_param("_DWORD * arg1")[0] == "PTR", "_DWORD* ptr")
    ck(classify_param("const char* p0")[0] == "PTR", "const char* ptr")
    ck(classify_param("void ** Block")[0] == "PTR", "void** ptr")
    ck(classify_param("HouseClass& h")[0] == "PTR", "ref -> ptr")
    ck(classify_param("#377 * this")[0] == "PTR", "IDA #ref* ptr")
    # int* and _DWORD* share pointee bucket; HouseClass* differs
    ck(classify_param("int* a")[1] == classify_param("_DWORD* b")[1],
       "int* pointee == _DWORD* pointee")
    ck(classify_param("int* a")[1] != classify_param("HouseClass* h")[1],
       "int* pointee != HouseClass* pointee")
    # by-value UDT -> OTHER
    ck(classify_param("Point p") == ("VAL", "OTHER"), "Point->OTHER")

    # ida_params drops this for thiscall
    e_tc = {"is_thiscall": True, "param_types": ["int * this", "char a2", "int a3"]}
    ck(ida_params(e_tc) == [("VAL", "B1"), ("VAL", "B4")],
       "thiscall drops this -> [char,int]")
    e_tc0 = {"is_thiscall": True, "param_types": ["void * this"]}
    ck(ida_params(e_tc0) == [], "thiscall this-only -> 0 params")
    e_fc = {"is_thiscall": False, "param_types": ["int* p0", "int p1"]}
    ck(ida_params(e_fc) == [("PTR", "B4"), ("VAL", "B4")],
       "non-thiscall keeps all")

    # compare verdicts
    ida = [("VAL", "B4"), ("PTR", "B4")]
    ck(compare([("VAL", "B4"), ("PTR", "houseclass")], ida)[0] == "POINTER_ONLY_DIFF",
       "pointer pointee diff -> POINTER_ONLY_DIFF")
    ck(compare([("VAL", "B4"), ("PTR", "B4")], ida)[0] == "MATCH", "exact -> MATCH")
    ck(compare([("VAL", "B1"), ("PTR", "B4")], ida)[0] == "BASIC_MISMATCH",
       "char vs int -> BASIC_MISMATCH")
    ck(compare([("VAL", "B4")], ida)[0] == "COUNT_MISMATCH",
       "count diff -> COUNT_MISMATCH")
    ck(compare([("PTR", "B4"), ("PTR", "B4")], ida)[0] == "BASIC_MISMATCH",
       "ptr-vs-value clash -> BASIC_MISMATCH")
    ck(compare([("VAL", "OTHER"), ("PTR", "B4")], ida)[0] == "MATCH",
       "OTHER-vs-basic tolerated -> MATCH")

    # hpp param group extraction
    ig = _extract_param_group("void* GetValue(int a1);  ")
    ck(ig == "int a1", f"extract param group: {ig!r}")
    ig2 = _extract_param_group("int __cdecl MainGameFrame(void)")
    ck(ig2 == "void", f"void param group: {ig2!r}")
    ck(_extract_param_group("extern int& CurrentFrame;") is None,
       "non-decl -> None")
    # block-comment param placeholder (the _funcs.hpp pattern) -> 0 params
    decl_ph = _strip_block_comments("char* LoadAudioFile(/* param_bytes: 0 */) noexcept;")
    ck(_extract_param_group(decl_ph) == "",
       f"comment-placeholder param list -> empty: {decl_ph!r}")
    # real typed anchor decl survives the strip
    ig3 = _extract_param_group(_strip_block_comments(
        "void* ClipRectIntersection(int a1, int a2, int a3);  "))
    ck(ig3 == "int a1, int a2, int a3", f"typed anchor decl: {ig3!r}")

    if fails:
        print("SELFTEST FAILED:")
        for f in fails:
            print("  -", f)
        return 1
    print(f"SELFTEST OK ({n[0]} checks passed)")
    return 0


def main():
    if "--selftest" in sys.argv:
        sys.exit(_selftest())
    report = audit()
    if "--no-write" not in sys.argv:
        OUT_JSON.parent.mkdir(parents=True, exist_ok=True)
        OUT_JSON.write_text(json.dumps(report, indent=2), encoding="utf-8")
        print(f"\nWrote {OUT_JSON.relative_to(ROOT)}", file=sys.stderr)
    if "--json" in sys.argv:
        print(json.dumps(report, indent=2))
    else:
        print_human(report)


if __name__ == "__main__":
    main()
