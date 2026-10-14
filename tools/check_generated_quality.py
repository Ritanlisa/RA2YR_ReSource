#!/usr/bin/env python3
"""generated-quality gate (X6 rework of RC2, project-optimization #9).

Independent quality gate over generated/mechanical code in src/**. It is
deliberately INDEPENDENT of src/core/ida_compat.h: the /FI-injected shim can
make dirty tokens compile silently, so this gate flags them from first
principles without consulting (or being excused by) any shim vocabulary.
No e4 exemption, no hpp-only scope, no env bypass, and -- since the X6 rework
(user ruling Q3, 2026-10-12) -- NO ratchet/baseline: zero tolerance on every
HARD category.

HARD text categories (exit 0 requires 0):
  IDA-BYTE        \\bIDA_BYTE[0-8]?\\(          shim-vocabulary call
  IDA-MACRO       \\bIDA_LOWORD\\b|\\bIDA_HIWORD\\b|__PAIR
  QMEMCPY         \\bqmemcpy\\b
  MEMORY-REF      \\bMEMORY\\[
  RAW-PTR-CAST    \\((?:char|uint8_t|_BYTE|_DWORD)\\s*\\*\\)
  MALFORMED-DEF   \\bint (sub_[0-9A-F]+)\\s*\\(  DEFINITION heads only
                  (decl/def split: walk to the statement-final token after
                  the parameter list; ';'/','/'('/'=' -> declaration,
                  '{' -> definition).  Declaration-file prototypes
                  (e.g. src/_generated/global_funcs_decls.hpp) are NOT
                  counted as MALFORMED-DEF -- they are reported under
                  MALFORMED-DECL (INFO).  X4 leftover I101/I102.)

INFO text categories (counted and printed, never fail):
  PLACEHOLDER     ->q[0-9A-F]{3}\\b | ->u32_ | ->field_  (Q5: placeholder
                  names are deferred to Step 6)
  MALFORMED-DECL  the declaration half of the MALFORMED split

Vtable section (X11 authority + ledger; user ruling 2026-10-13):
  explicit vtable-pointer stores are illegal -- the compiler must emit the
  vtable from the class's virtual declarations.  `vfptr =` literally will
  NOT reach 0 (I126-I133): the residual sites are non-vtable writes with
  binary-backed reasons recorded in the X11 ledger.  This section therefore
  scores vtable hygiene by anchors/vtable_authority.json + that ledger:
    VT-INSTALL      (HARD) a store whose VALUE is a vtable address
                    (backtick vftable / vt_|__vt_ / X_vftable symbols,
                    off_HEX or 0xHEX present in the authority vtable set).
                    Detected on any LHS shape -- X11 enumerated four spellings
                    for elision, but the operation, not the spelling, is what
                    the ruling bans.  Target 0.
    VT-UNACCOUNTED  (HARD) explicit vptr-store site (the SITE_RE population
                    the ledger was built from) with NO ledger row: no
                    binary-backed reason on record -> fail-loud.  If the
                    site is legitimate, regenerate the ledger with
                    `python tools/csp_export/lower_vtables.py --classify`
                    (binary evidence decides the family).
    VT-LEDGER-KEEP  (INFO) site covered by a ledger row; counted, sampled
                    and included in the JSON -- reported, never silent.
  The ledger is machine-local evidence
  (`.omo/evidence/optimization/x11/x11_vfptr_ledger.jsonl`); when vptr
  sites exist but the ledger is absent the gate exits 2 (cannot score
  honestly).

Naming-pollution categories (cross-table, computed from the member tables;
a table that does not exist contributes nothing and is reported as absent).
INFO since Step 6 owns names (Q5): XTABLE-CONFLICT / XTABLE-DUAL-SEMANTIC /
SEMANTIC-OVERWRITTEN / PROVENANCE-MISSING are counted and printed with their
table stats but never fail the gate.  A table that exists but is unreadable
still exits 2 (fail closed, never silently excused).

Tables read (only if present):
  tools/member_lookup.json       {"Class": {"<dec offset>": {"name": ...}}}
  anchors/csp_canon_members.json {"Class": {"members": {"<dec>": {...}}}}
  anchors/member_types.json      {"Class+0xHEX": {"name": ...}}

Placeholder-name test for table entries keeps a single source of truth with
the RC1 generator (tools/csp_export/gen_cpp_canon.py PLACEHOLDER_RE): copy
the pattern verbatim and keep the two in sync.

Output: `FAIL: file:line: CATEGORY -- source lines` for hard violations
(display capped via GQ_SHOW, counts always complete); `INFO:` sample lines +
full counts for INFO categories; summary to stderr; machine-readable
`--json PATH` (schema generated-quality-report/v2).

Exit 0 = zero hard violations.  Exit 1 = hard violations.
Exit 2 = usage or environment error (authority/table unreadable, ledger
required but absent, tables present but extraction yields zero entries).
"""
import argparse
import bisect
import json
import os
import re
import sys
import time

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DEFAULT_PATHS = ["src/"]
SCHEMA = "generated-quality-report/v2"
MEMBER_LOOKUP = os.path.join(REPO, "tools", "member_lookup.json")
CANON_MEMBERS = os.path.join(REPO, "anchors", "csp_canon_members.json")
MEMBER_TYPES = os.path.join(REPO, "anchors", "member_types.json")
NAME_PROVENANCE = os.path.join(REPO, "anchors", "name_provenance.json")
VT_AUTHORITY = os.path.join(REPO, "anchors", "vtable_authority.json")
VT_LEDGER = os.path.join(REPO, ".omo", "evidence", "optimization", "x11",
                         "x11_vfptr_ledger.jsonl")
# canon authority table (highest naming authority; gen_cpp_canon output)
AUTHORITY_TABLE = "csp_canon_members"
SKIP_DIRS = {".git", ".omo", "build_win", "build_linux", "build_hook",
             "build_hook_release", "decompile-results", "gate_clang_cache",
             "node_modules"}
# .inc is scanned too: the X11 ledger (the vtable section's evidence base)
# covers .inc sites, and the mechanical corpus treats .inc as source text.
SRC_EXTS = (".cpp", ".hpp", ".h", ".cc", ".hh", ".inc")
VT_EXTS = SRC_EXTS
MAX_SHOW = int(os.environ.get("GQ_SHOW", "200"))
INFO_SHOW = int(os.environ.get("GQ_INFO_SHOW", "20"))

# X6 hard text patterns (RC2 spec, minus PLACEHOLDER -> INFO)
HARD_TEXT_PATTERNS = [
    ("IDA-BYTE", re.compile(r"\bIDA_BYTE[0-8]?\(")),
    ("IDA-MACRO", re.compile(r"\bIDA_LOWORD\b|\bIDA_HIWORD\b|__PAIR")),
    ("QMEMCPY", re.compile(r"\bqmemcpy\b")),
    ("MEMORY-REF", re.compile(r"\bMEMORY\[")),
    ("RAW-PTR-CAST", re.compile(r"\((?:char|uint8_t|_BYTE|_DWORD)\s*\*\)")),
]
INFO_TEXT_PATTERNS = [
    ("PLACEHOLDER", re.compile(r"->q[0-9A-F]{3}\b|->u32_|->field_")),
]
# malformed sub_ definition head (decl/def split below decides the category)
MALFORMED_RE = re.compile(r"\bint (sub_[0-9A-F]+)\s*\(")
HARD_CATS = {c for c, _ in HARD_TEXT_PATTERNS} | {"MALFORMED-DEF",
                                                  "VT-INSTALL",
                                                  "VT-UNACCOUNTED"}

# vtable site enumeration -- verbatim mirror of
# tools/csp_export/lower_vtables.py SITE_RE (keep in sync: it defines the
# population the X11 ledger was built from).
VT_SITE_RE = re.compile(
    r'\b(?:vfptr\d*|vtable\d*)\s*=(?!=)'
    r'|\*\s*\(\s*(?:unsigned\s+int|_DWORD|int)\s*\*\s*\)\s*'
    r'(?:this(?:\s*\+\s*0)?|this\s*->\s*(?:vfptr\d*|vtable\d*))\s*=(?!=)'
    r'|\*\s*&\s*(?:this\s*->\s*)?(?:vfptr\d*|vtable\d*)\s*=(?!=)'
)
# strict value-start grammar for "stores a vtable": after the assignment '=',
# skip casts / '&' / '*' prefixes, then require a vtable value token and
# nothing but ';'/')' after it:
#   [X::]`vftable' | `vtable'      (optionally class-qualified)
#   vt_x | _vt_x | __vt_x          (X11-generated symbols)
#   X_vftable                      (gen_vtable_symbols flat names)
#   off_HEX                        (HEX must be an authority vtable address)
#   0xHEX                          (must be an authority vtable address)
# This is the authority-backed install detector: any store whose value IS a
# vtable address is an explicit vtable operation (the X11 ruling bans them).
_VT_LEAD = (r"(?:\s*\(\s*[A-Za-z_][\w\s]*?\*+\s*\)\s*"      # (Type *)
            r"|\s*\(\s*[A-Za-z_][\w\s]*?\s*\)\s*"           # (unsigned int)
            r"|\s*&\s*|\s*\*\s*)*")
_VT_TOKEN = (r"("
             r"(?:[A-Za-z_]\w*(?:\s*<[^;{}]*>)?\s*::\s*)*"
             r"(?:`vftable\'|`vtable\')"
             r"|(?:__?)?vt_[A-Za-z_]\w*"
             r"|[A-Za-z_]\w*_vftable"
             r"|off_([0-9A-Fa-f]{6,8})"
             r"|0x([0-9A-Fa-f]{5,8})"
             r")")
VT_VALUE_START_RE = re.compile(_VT_LEAD + _VT_TOKEN + r"\s*[;)]?\s*$")
VT_ASSIGN_RE = re.compile(r"(?<![=!<>+\-*/%&|^])=(?!=)")
VT_ADDR_RE = re.compile(r"/\*\s*(0x[0-9A-Fa-f]+)\s*\*/")
VT_RAW_SPELL_RE = re.compile(
    r'\*\s*\(\s*(?:unsigned\s+int|_DWORD|int)\s*\*\s*\)')
VT_SLOT_SPELL_RE = re.compile(r'\b(vfptr\d*|vtable\d*)\s*=(?!=)')

# table-entry placeholder test -- keep in sync with the RC1 generator:
# tools/csp_export/gen_cpp_canon.py PLACEHOLDER_RE (copied verbatim)
PLACEHOLDER_NAME_RE = re.compile(
    r'^(vtable\d*|vt_?\d+|.*_field_0x[0-9A-Fa-f]+.*|field_.*|__pad.*|'
    r'__align.*|align_.*|q[0-9A-F]{3}.*|u(?:8|16|32|64)_[0-9A-F]+)$')


def is_placeholder_name(name):
    return bool(PLACEHOLDER_NAME_RE.match(name or ""))


def is_semantic_name(name):
    return bool(name) and not is_placeholder_name(name)


# ------------------------------------------------------- comment stripping
# reuse the T3 gate's proven stripper (identical 1:1 line semantics)
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
try:
    from check_pointer_arithmetic import strip_to_code  # noqa: E402
except ImportError as e:  # pragma: no cover
    print(f"ERROR: cannot import strip_to_code from check_pointer_arithmetic "
          f"({e}) -- fail closed", file=sys.stderr)
    sys.exit(2)


def iter_source_files(roots, exts=SRC_EXTS):
    """Walk roots for C/C++ sources.  src/_generated IS scanned (no
    exemptions); non-source dirs (build outputs / evidence stores /
    reference dumps) are not walked."""
    for root in roots:
        rp = root.replace("\\", "/").rstrip("/")
        ap = rp if os.path.isabs(rp) else os.path.join(REPO, rp)
        if os.path.isfile(ap):
            if ap.endswith(exts):
                yield ap
            continue
        if not os.path.isdir(ap):
            print(f"WARNING: path not found: {root}", file=sys.stderr)
            continue
        for dirpath, dirnames, filenames in os.walk(ap):
            dirnames[:] = [d for d in dirnames if d not in SKIP_DIRS]
            for fn in sorted(filenames):
                if fn.endswith(exts):
                    yield os.path.join(dirpath, fn)


# ------------------------------------------------- malformed decl/def split
def _classify_sub_occurrence(joined, m):
    """Walk from the matched '(' to the first statement-final token after
    the parameter list closes.  Returns 'def' (next token '{'),
    'decl' (next token ';'/','/'('/'=' or '}'), or 'unclassified'."""
    i = m.end() - 1          # position of '('
    depth = 0
    n = len(joined)
    while i < n:
        c = joined[i]
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
            if depth == 0:
                j = i + 1
                while j < n:
                    cj = joined[j]
                    if cj in " \t\r\n":
                        j += 1
                        continue
                    if joined.startswith("//", j):
                        k = joined.find("\n", j)
                        j = n if k < 0 else k + 1
                        continue
                    if joined.startswith("/*", j):
                        k = joined.find("*/", j + 2)
                        j = n if k < 0 else k + 2
                        continue
                    if cj == "{":
                        return "def"
                    if cj in ";,=}":
                        return "decl"
                    return "unclassified"
                return "unclassified"
        elif c == "{":
            return "unclassified"
        i += 1
    return "unclassified"


def scan_file(ap):
    """Return (hard_vios, info_vios, mstats) for one file.  Each vios entry
    is (line_no, category, code_line); mstats counts the MALFORMED split."""
    try:
        with open(ap, "rb") as f:
            data = f.read()
        text = data.decode("utf-8", errors="replace")
    except OSError as e:
        return [(0, "READ-ERROR", str(e))], [], {"def": 0, "decl": 0,
                                                 "unclassified": 0}
    lines = strip_to_code(text)
    hard = []
    info = []
    for idx, ln in enumerate(lines):
        if len(ln) < 4:
            continue
        for cat, pat in HARD_TEXT_PATTERNS:
            for _m in pat.findall(ln):
                hard.append((idx + 1, cat, ln.strip()[:160]))
        for cat, pat in INFO_TEXT_PATTERNS:
            for _m in pat.findall(ln):
                info.append((idx + 1, cat, ln.strip()[:160]))

    mstats = {"def": 0, "decl": 0, "unclassified": 0}
    joined = "\n".join(lines)
    line_starts = [0]
    for ln in lines:
        line_starts.append(line_starts[-1] + len(ln) + 1)
    for m in MALFORMED_RE.finditer(joined):
        lig = bisect.bisect_right(line_starts, m.start())     # 1-based line
        kind = _classify_sub_occurrence(joined, m)
        src = lines[lig - 1].strip()[:160] if 0 < lig <= len(lines) else ""
        if kind == "def":
            mstats["def"] += 1
            hard.append((lig, "MALFORMED-DEF", src))
        elif kind == "decl":
            mstats["decl"] += 1
            info.append((lig, "MALFORMED-DECL", src))
        else:
            # fail closed: an unclassifiable occurrence counts as a def
            mstats["unclassified"] += 1
            hard.append((lig, "MALFORMED-DEF", src))
    return hard, info, mstats


def rel(ap):
    return os.path.relpath(ap, REPO).replace("\\", "/")


# ---------------------------------------------------------------- naming
def _member_pairs_hook(pairs):
    """Streaming reduction: inner member dicts collapse to their name so the
    500MB+ member_lookup parse stays memory-bounded (~156MB measured)."""
    d = dict(pairs)
    if "name" in d and len(d) <= 6:
        return d.get("name")
    if "members" in d and set(d) <= {"size", "members"}:
        return d["members"]
    return d


def load_member_lookup():
    with open(MEMBER_LOOKUP, "r", encoding="utf-8") as f:
        raw = json.load(f, object_pairs_hook=_member_pairs_hook)
    out = {}
    unparsed = 0
    for cls, members in raw.items():
        if not isinstance(members, dict):
            continue
        m = {}
        for off, name in members.items():
            try:
                m[int(off)] = name if isinstance(name, str) else None
            except (TypeError, ValueError):
                unparsed += 1
        out[cls] = m
    return out, unparsed


def load_canon_members():
    with open(CANON_MEMBERS, "r", encoding="utf-8") as f:
        raw = json.load(f)
    out = {}
    unparsed = 0
    for cls, body in raw.items():
        members = body.get("members", {}) if isinstance(body, dict) else None
        if not isinstance(members, dict):
            continue
        m = {}
        for off, ent in members.items():
            try:
                name = ent.get("name") if isinstance(ent, dict) else ent
                m[int(off)] = name if isinstance(name, str) else None
            except (TypeError, ValueError):
                unparsed += 1
        out[cls] = m
    return out, unparsed


_MT_KEY_RE = re.compile(r"^(.+)\+0x([0-9A-Fa-f]+)$")


def load_member_types():
    with open(MEMBER_TYPES, "r", encoding="utf-8") as f:
        raw = json.load(f)
    out = {}
    unparsed = 0
    for key, ent in raw.items():
        m = _MT_KEY_RE.match(key)
        name = ent.get("name") if isinstance(ent, dict) else ent
        if not m or not isinstance(name, str):
            unparsed += 1
            continue
        out.setdefault(m.group(1), {})[int(m.group(2), 16)] = name
    return out, unparsed


def load_name_provenance():
    """Returns (set_of_names, note). Accepted shapes:
    {"names": [..]} | {"provenance": {name: record}} | [str] | [{"name":..}]
    | N1 authority {"members"/"functions"/"variables": {key: {"name": ..}}}
    Unrecognized/unreadable -> raise ValueError (caller exits 2)."""
    with open(NAME_PROVENANCE, "r", encoding="utf-8") as f:
        raw = json.load(f)
    names = set()
    if isinstance(raw, dict) and isinstance(raw.get("names"), list):
        items = raw["names"]
    elif isinstance(raw, dict) and isinstance(raw.get("provenance"), dict):
        items = list(raw["provenance"].keys())
    elif isinstance(raw, list):
        items = raw
    elif isinstance(raw, dict) and any(
            isinstance(raw.get(k), dict)
            for k in ("members", "functions", "variables", "classes")):
        # N1 provenance authority (gen_name_provenance.py): per-entity
        # records carrying the winning semantic name.
        items = []
        for sec in ("members", "functions", "variables", "classes"):
            sect = raw.get(sec)
            if not isinstance(sect, dict):
                continue
            for rec in sect.values():
                if isinstance(rec, dict) and isinstance(rec.get("name"), str):
                    items.append(rec)
                elif isinstance(rec, str):
                    items.append(rec)
    else:
        raise ValueError(f"unrecognized top-level shape: {type(raw).__name__}")
    for it in items:
        if isinstance(it, str):
            names.add(it)
        elif isinstance(it, dict) and isinstance(it.get("name"), str):
            names.add(it["name"])
    return names, f"{len(names)} provenance names"


def scan_naming():
    """Cross-table naming pollution scan. Returns (counts, table_stats, notes,
    hard_errors). Tables that do not exist are absent (never fatal); tables
    that exist but fail to load are hard errors (fail closed)."""
    counts = {"XTABLE-CONFLICT": 0, "XTABLE-DUAL-SEMANTIC": 0,
              "SEMANTIC-OVERWRITTEN": 0, "PROVENANCE-MISSING": 0}
    table_stats = {}
    notes = []
    hard_errors = []
    loaded = {}

    loaders = [
        ("member_lookup", MEMBER_LOOKUP, load_member_lookup),
        ("csp_canon_members", CANON_MEMBERS, load_canon_members),
        ("member_types", MEMBER_TYPES, load_member_types),
    ]
    for tname, tpath, loader in loaders:
        if not os.path.isfile(tpath):
            notes.append(f"table absent (skipped): {tname}")
            continue
        try:
            data, unparsed = loader()
        except (OSError, ValueError) as e:
            hard_errors.append(f"table {tname} present but unreadable: {e}")
            continue
        entries = sum(len(v) for v in data.values())
        if entries == 0:
            hard_errors.append(
                f"table {tname} present but extracted 0 entries -- fail "
                f"closed (format drift?)")
            continue
        ph = sum(1 for v in data.values() for n in v.values()
                 if is_placeholder_name(n))
        table_stats[tname] = {
            "path": rel(tpath), "classes": len(data), "entries": entries,
            "placeholder": ph,
            "placeholder_pct": round(100.0 * ph / entries, 2) if entries else 0.0,
            "unparsed_keys": unparsed,
        }
        loaded[tname] = data

    if hard_errors:
        return counts, table_stats, notes, hard_errors
    if not loaded:
        notes.append("no naming tables present -- naming section skipped")
        return counts, table_stats, notes, hard_errors

    ml = loaded.get("member_lookup")
    cn = loaded.get("csp_canon_members")
    mt = loaded.get("member_types")

    # (class, offset) -> {table: name}; only overlaps matter, so iterate the
    # smaller tables and probe the bigger ones (measured ~seconds).
    overlaps = {}

    if cn is not None:
        for cls, members in cn.items():
            for off, name in members.items():
                if name is None:
                    continue
                other = (ml or {}).get(cls, {}).get(off)
                other2 = (mt or {}).get(cls, {}).get(off)
                if other is not None or other2 is not None:
                    slot = {}
                    slot["csp_canon_members"] = name
                    if other is not None:
                        slot["member_lookup"] = other
                    if other2 is not None:
                        slot["member_types"] = other2
                    overlaps[(cls, off)] = slot
    if ml is not None and mt is not None:
        # ml x mt pair not yet covered where canon absent
        for cls, members in mt.items():
            ml_m = ml.get(cls)
            if ml_m is None:
                continue
            for off, name in members.items():
                if name is None:
                    continue
                other = ml_m.get(off)
                if other is not None and (cls, off) not in overlaps:
                    overlaps[(cls, off)] = {"member_types": name,
                                            "member_lookup": other}

    for (cls, off), slot in overlaps.items():
        if len(slot) < 2:
            continue
        names = list(slot.values())
        has_ph = any(is_placeholder_name(n) for n in names)
        sems = {n for n in names if is_semantic_name(n)}
        if has_ph and sems:
            counts["XTABLE-CONFLICT"] += 1
        if len(sems) >= 2:
            counts["XTABLE-DUAL-SEMANTIC"] += 1
        auth = slot.get(AUTHORITY_TABLE)
        if auth is not None and is_placeholder_name(auth) and sems \
                and auth not in sems:
            counts["SEMANTIC-OVERWRITTEN"] += 1

    # provenance
    if os.path.isfile(NAME_PROVENANCE):
        try:
            names, note = load_name_provenance()
        except (OSError, ValueError) as e:
            hard_errors.append(
                f"{rel(NAME_PROVENANCE)} present but unreadable/unrecognized: "
                f"{e} -- fail closed (update check_generated_quality.py "
                f"provenance loader or finalize the N1 schema)")
            return counts, table_stats, notes, hard_errors
        notes.append(f"name_provenance: {note}")
        for tname, data in loaded.items():
            for members in data.values():
                for n in members.values():
                    if is_semantic_name(n) and n not in names:
                        counts["PROVENANCE-MISSING"] += 1
    else:
        notes.append("anchors/name_provenance.json absent -- "
                     "PROVENANCE-MISSING check skipped (N1 pending)")

    return counts, table_stats, notes, hard_errors


# ---------------------------------------------------------------- vtable
def load_vtable_authority():
    """Returns (vt_bases set, n_vtables).  Fail closed on missing/empty."""
    try:
        with open(VT_AUTHORITY, "r", encoding="utf-8") as f:
            raw = json.load(f)
    except FileNotFoundError:
        raise ValueError(f"authority missing: {rel(VT_AUTHORITY)} "
                         f"(regenerate with tools/csp_export/"
                         f"vtable_authority.py)")
    except (OSError, ValueError) as e:
        raise ValueError(f"authority unreadable: {e}")
    vt = raw.get("vtables") if isinstance(raw, dict) else None
    if not isinstance(vt, dict) or not vt:
        raise ValueError(f"authority has no vtable table -- fail closed")
    vt_bases = set()
    for k in vt:
        try:
            vt_bases.add(int(k, 16))
        except ValueError:
            continue
    for rec in (raw.get("classes") or {}).values():
        for va in (rec.get("vtables") or []):
            try:
                vt_bases.add(int(va, 16))
            except (TypeError, ValueError):
                continue
    if not vt_bases:
        raise ValueError(f"authority vtable set empty -- fail closed")
    return vt_bases, len(vt)


def load_vtable_ledger(path):
    """Returns (rows, by_addr, by_line).  Rows: dicts with normalized 'file'.
    Missing file -> (None, None, None).  Unreadable -> ValueError."""
    if not os.path.isfile(path):
        return None, None, None
    rows = []
    by_addr = {}
    by_line = {}
    try:
        with open(path, "r", encoding="utf-8") as f:
            for line in f:
                line = line.strip()
                if not line:
                    continue
                r = json.loads(line)
                if not isinstance(r, dict) or not r.get("file"):
                    continue
                r["file"] = r["file"].replace("\\", "/")
                rows.append(r)
                if r.get("addr"):
                    try:
                        by_addr[(r["file"], int(r["addr"], 16))] = r
                    except (TypeError, ValueError):
                        pass
                if isinstance(r.get("line"), int):
                    by_line[(r["file"], r["line"])] = r
    except (OSError, ValueError) as e:
        raise ValueError(f"ledger unreadable: {e}")
    return rows, by_addr, by_line


def _vt_spelling(code):
    if VT_RAW_SPELL_RE.search(code):
        return "raw-offset0"
    m = VT_SLOT_SPELL_RE.search(code)
    return m.group(1) if m else "other"


def _vt_value_kind(rhs, vt_bases):
    """Return the vtable-value kind of an assignment RHS that IS a vtable
    address expression, or None.  See the VT_VALUE_START_RE grammar."""
    m = VT_VALUE_START_RE.match(rhs.strip())
    if not m:
        return None
    tok = m.group(1)
    if tok.startswith("off_"):
        return "B-off-vt" if int(m.group(2), 16) in vt_bases else None
    if tok.startswith("0x"):
        return "C-hex-vt" if int(m.group(3), 16) in vt_bases else None
    if tok.endswith("`vftable'") or tok.endswith("`vtable'"):
        return "A-backtick"
    if "vt_" in tok:
        return "A-vt-sym"
    return "A-vftable"


def scan_vtable(roots, vt_bases, ledger_path):
    """Scan explicit vtable operations:
      installs   -- every store whose value IS an authority vtable address
                    (any LHS shape; X11 spelled four forms, the authority
                    decides -- a store of a vtable value is the operation
                    the user ruling bans);
      sites      -- the SITE_RE-shaped vptr-store population (the population
                    the X11 ledger was built from) for ledger accounting.
    Ledger coverage is decided addr-first (binary anchor), then
    line+spelling.  Returns a result dict (see main() for schema)."""
    rows, by_addr, by_line = load_vtable_ledger(ledger_path)
    sites = []
    installs = []
    for fp in iter_source_files(roots, exts=VT_EXTS):
        try:
            with open(fp, "rb") as f:
                text = f.read().decode("utf-8", errors="replace")
        except OSError:
            continue
        raw_lines = text.split("\n")
        stripped = strip_to_code(text)
        r = rel(fp)
        for i, raw in enumerate(raw_lines):
            code = raw.split("//", 1)[0]
            st = stripped[i] if i < len(stripped) else ""
            # ---- authority-backed install detection (any LHS shape)
            assign = VT_ASSIGN_RE.search(code)
            if assign and VT_ASSIGN_RE.search(st):
                rhs = code[assign.end():].split(";", 1)[0]
                kind = _vt_value_kind(rhs, vt_bases)
                if kind:
                    am = VT_ADDR_RE.search(raw)
                    installs.append({
                        "file": r, "line": i + 1,
                        "addr": int(am.group(1), 16) if am else None,
                        "spelling": _vt_spelling(code), "kind": kind,
                        "text": raw.rstrip()[:200],
                    })
            # ---- SITE_RE population (ledger accounting)
            if not (VT_SITE_RE.search(code) and VT_SITE_RE.search(st)):
                continue            # not code / not a vptr-store site
            am = VT_ADDR_RE.search(raw)
            addr = int(am.group(1), 16) if am else None
            spelling = _vt_spelling(code)
            site = {"file": r, "line": i + 1, "addr": addr,
                    "spelling": spelling, "text": raw.rstrip()[:200]}
            row = None
            match_how = None
            if addr is not None and rows is not None:
                row = by_addr.get((r, addr))
                if row is not None:
                    match_how = "addr"
            if row is None and rows is not None:
                cand = by_line.get((r, i + 1))
                if cand is not None and cand.get("spelling") == spelling \
                        and (addr is None or not cand.get("addr")):
                    row = cand
                    match_how = "line"
            if row is not None:
                site["ledger_family"] = row.get("family")
                site["ledger_reason"] = row.get("action_reason")
                site["match_how"] = match_how
            sites.append(site)

    install_keys = {(s["file"], s["line"]) for s in installs}
    unaccounted = [s for s in sites if "ledger_family" not in s
                   and (s["file"], s["line"]) not in install_keys]
    covered = [s for s in sites if "ledger_family" in s]
    by_spelling = {}
    for s in sites:
        by_spelling[s["spelling"]] = by_spelling.get(s["spelling"], 0) + 1
    by_kind = {}
    for s in installs:
        by_kind[s["kind"]] = by_kind.get(s["kind"], 0) + 1
    fams = {}
    for s in covered:
        k = s.get("ledger_family") or "?"
        fams[k] = fams.get(k, 0) + 1
    return {
        "sites_total": len(sites),
        "by_spelling": dict(sorted(by_spelling.items())),
        "install": installs,
        "install_by_kind": dict(sorted(by_kind.items())),
        "unaccounted": unaccounted,
        "covered": covered,
        "covered_by_family": dict(sorted(fams.items())),
        "ledger_rows": len(rows) if rows is not None else 0,
        "ledger_present": rows is not None,
        "matched_by_addr": sum(1 for s in covered
                               if s.get("match_how") == "addr"),
        "matched_by_line": sum(1 for s in covered
                               if s.get("match_how") == "line"),
        "ledger_path": rel(os.path.abspath(ledger_path)),
    }


def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("paths", nargs="*", default=None,
                    help="files or directories to scan (default: src/)")
    ap.add_argument("--json", dest="json_out", default=None,
                    help="write machine-readable summary to PATH")
    ap.add_argument("--skip-naming", action="store_true",
                    help="skip the naming-pollution section (iteration aid; "
                         "acceptance runs must not skip)")
    ap.add_argument("--naming-only", action="store_true",
                    help="run only the naming-pollution section")
    ap.add_argument("--skip-vtable", action="store_true",
                    help="skip the vtable section (iteration aid; acceptance "
                         "runs must not skip)")
    ap.add_argument("--vt-ledger", default=VT_LEDGER,
                    help="X11 vtable ledger path (default: the X11 evidence)")
    args = ap.parse_args()

    roots = args.paths if args.paths else DEFAULT_PATHS
    t0 = time.time()

    # skipped sections are recorded loudly -- never a silent escape
    sections_skipped = []
    if args.skip_naming:
        sections_skipped.append("naming")
    if args.skip_vtable or args.naming_only:
        sections_skipped.append("vtable")
    if args.naming_only:
        sections_skipped.append("text")
    if sections_skipped:
        print(f"WARNING: generated-quality: section(s) skipped: "
              f"{sections_skipped} -- acceptance runs must not skip",
              file=sys.stderr)

    hard_rows = []          # (rel, line, cat, text)
    info_rows = []
    files_scanned = 0
    malformed_total = {"def": 0, "decl": 0, "unclassified": 0}

    # ---- text scan
    if not args.naming_only:
        for fp in iter_source_files(roots):
            files_scanned += 1
            hard, info, mstats = scan_file(fp)
            r = rel(fp)
            for ln, cat, txt in hard:
                hard_rows.append((r, ln, cat, txt))
            for ln, cat, txt in info:
                info_rows.append((r, ln, cat, txt))
            for k in malformed_total:
                malformed_total[k] += mstats[k]

    # ---- naming scan (INFO counts; fail closed on unreadable tables)
    naming_counts, table_stats, naming_notes, hard_errors = {}, {}, [], []
    if not args.skip_naming:
        naming_counts, table_stats, naming_notes, hard_errors = scan_naming()
        if hard_errors:
            for m in hard_errors:
                print(f"ERROR: generated-quality: {m}", file=sys.stderr)
            sys.exit(2)
    else:
        naming_notes.append("naming section skipped (--skip-naming)")

    # ---- vtable section (X11 authority + ledger; hard on installs and
    # unaccounted sites)
    vt = None
    if not args.naming_only and not args.skip_vtable:
        try:
            vt_bases, n_auth = load_vtable_authority()
        except ValueError as e:
            print(f"ERROR: generated-quality: vtable authority: {e}",
                  file=sys.stderr)
            sys.exit(2)
        vt = scan_vtable(roots, vt_bases, os.path.abspath(args.vt_ledger))
        if not vt["ledger_present"] and vt["sites_total"] > 0:
            print(f"ERROR: generated-quality: {vt['sites_total']} vptr-store "
                  f"site(s) found but the X11 ledger is absent "
                  f"({vt['ledger_path']}) -- cannot score vtable hygiene "
                  f"honestly; regenerate with `python "
                  f"tools/csp_export/lower_vtables.py --classify`",
                  file=sys.stderr)
            sys.exit(2)
        for s in vt["install"]:
            hard_rows.append((s["file"], s["line"], "VT-INSTALL",
                              s["text"]))
        for s in vt["unaccounted"]:
            hard_rows.append((s["file"], s["line"], "VT-UNACCOUNTED",
                              s["text"]))
        for s in vt["covered"][:INFO_SHOW]:
            info_rows.append((s["file"], s["line"], "VT-LEDGER-KEEP",
                              f"[{s.get('ledger_family')}] {s['text']}"))

    elapsed = time.time() - t0

    # ---- aggregate
    fail_by_cat = {}
    for _r, _ln, cat, _txt in hard_rows:
        fail_by_cat[cat] = fail_by_cat.get(cat, 0) + 1
    info_by_cat = {}
    for _r, _ln, cat, _txt in info_rows:
        info_by_cat[cat] = info_by_cat.get(cat, 0) + 1
    if vt is not None:
        info_by_cat["VT-LEDGER-KEEP"] = len(vt["covered"])
    for cat, n in naming_counts.items():
        if n:
            info_by_cat[cat] = info_by_cat.get(cat, 0) + n
    fail_by_cat = {k: fail_by_cat[k] for k in sorted(fail_by_cat)}
    info_by_cat = {k: info_by_cat[k] for k in sorted(info_by_cat)}
    fail_total = sum(fail_by_cat.values())
    read_errors = fail_by_cat.get("READ-ERROR", 0)

    # ---- display
    shown = 0
    for r, ln, cat, txt in hard_rows:
        if shown >= MAX_SHOW:
            break
        print(f"FAIL: {r}:{ln}: {cat} -- {txt}")
        shown += 1
    if len(hard_rows) > shown:
        print(f"... {len(hard_rows) - shown} more hard violation(s) "
              f"suppressed (GQ_SHOW={MAX_SHOW})")
    ishown = 0
    for r, ln, cat, txt in info_rows:
        if ishown >= INFO_SHOW:
            break
        print(f"INFO: {r}:{ln}: {cat} -- {txt}")
        ishown += 1
    if vt is not None:
        print(f"INFO: vtable: {vt['sites_total']} explicit vptr-store "
              f"site(s) scanned; {len(vt['covered'])} covered by the X11 "
              f"ledger ({vt['covered_by_family']}; addr {vt['matched_by_addr']}"
              f" / line {vt['matched_by_line']}) -- reported, not silent")
    for m in naming_notes:
        print(f"note: {m}", file=sys.stderr)

    print(f"generated-quality: scanned {files_scanned} files in "
          f"{elapsed:.1f}s | FAIL total {fail_total} | by category: "
          f"{fail_by_cat} | INFO total {sum(info_by_cat.values())} | "
          f"INFO by category: {info_by_cat} | malformed split: "
          f"{malformed_total} | naming counts: {naming_counts} | table "
          f"stats: {json.dumps(table_stats, sort_keys=True)}",
          file=sys.stderr)

    summary = {
        "schema": SCHEMA,
        "paths": roots,
        "sections_skipped": sections_skipped,
        "files_scanned": files_scanned,
        "fail_total": fail_total,
        "fail_by_category": fail_by_cat,
        "info_total": sum(info_by_cat.values()),
        "info_by_category": info_by_cat,
        "malformed_split": malformed_total,
        "read_errors": read_errors,
        "naming_counts": naming_counts,
        "naming_table_stats": table_stats,
        "naming_notes": naming_notes,
        "vtable": None if vt is None else {
            "sites_total": vt["sites_total"],
            "by_spelling": vt["by_spelling"],
            "install": len(vt["install"]),
            "install_by_kind": vt["install_by_kind"],
            "unaccounted": len(vt["unaccounted"]),
            "covered": len(vt["covered"]),
            "covered_by_family": vt["covered_by_family"],
            "ledger_rows": vt["ledger_rows"],
            "ledger_present": vt["ledger_present"],
            "matched_by_addr": vt["matched_by_addr"],
            "matched_by_line": vt["matched_by_line"],
            "ledger_path": vt["ledger_path"],
            # full per-site lists (no cap): X7's work list must not be sampled
            "install_rows": vt["install"],
            "unaccounted_rows": vt["unaccounted"],
        },
        "elapsed_s": round(elapsed, 1),
        "failed": bool(fail_total),
    }

    rc = 0
    if fail_total:
        print(f"FAIL: generated-quality: {fail_total} hard violation(s) "
              f"(zero tolerance, X6/Q3) -- {fail_by_cat}; "
              f"{read_errors} read error(s)", file=sys.stderr)
        rc = 1
    else:
        print(f"OK: generated-quality: 0 hard violations "
              f"({sum(info_by_cat.values())} INFO occurrence(s) reported: "
              f"Step-6 names / ledger-covered sites)", file=sys.stderr)

    if args.json_out:
        jp = args.json_out if os.path.isabs(args.json_out) \
            else os.path.join(REPO, args.json_out)
        os.makedirs(os.path.dirname(jp), exist_ok=True)
        with open(jp, "w", encoding="utf-8") as f:
            json.dump(summary, f, indent=1)
    sys.exit(rc)


if __name__ == "__main__":
    main()
