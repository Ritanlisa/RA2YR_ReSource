#!/usr/bin/env python3
"""generated-quality gate (RC2, project-optimization plan #9).

Independent quality gate over generated/mechanical code in src/**. It is
deliberately INDEPENDENT of src/core/ida_compat.h: the /FI-injected shim can
make dirty tokens compile silently, so this gate flags them from first
principles without consulting (or being excused by) any shim vocabulary.
No e4 exemption, no hpp-only scope, no env bypass.

Text categories (line-level; comments and string/char literal contents are
stripped first, so pseudocode kept in comments does not count):

  IDA-BYTE        \\bIDA_BYTE[0-8]?\\(           shim-vocabulary call
  IDA-MACRO       \\bIDA_LOWORD\\b|\\bIDA_HIWORD\\b|__PAIR
  QMEMCPY         \\bqmemcpy\\b
  MEMORY-REF      \\bMEMORY\\[
  PLACEHOLDER     ->q[0-9A-F]{3}\\b | ->u32_ | ->field_
  MALFORMED-DEF   \\bint (sub_[0-9A-F]+)\\s*\\(  malformed definition head
  RAW-PTR-CAST    \\((?:char|uint8_t|_BYTE|_DWORD)\\s*\\*\\)

Naming-pollution categories (cross-table, computed from the member tables;
a table that does not exist contributes nothing and is reported as absent):

  XTABLE-CONFLICT        same (class, offset) is a placeholder name in one
                         table and a semantic name in another
  XTABLE-DUAL-SEMANTIC   same (class, offset) carries two DIFFERENT semantic
                         names across tables (authority disagreement)
  SEMANTIC-OVERWRITTEN   the canon authority table (csp_canon_members) holds
                         a placeholder while another table holds a semantic
                         name for the same (class, offset) -- the overwrite
                         pollution chain (sync_canon_from_til / --align-ml)
  PROVENANCE-MISSING     a semantic name is absent from
                         anchors/name_provenance.json; the whole check is
                         SKIPPED while that file does not exist (N1 owns it).
                         If the file exists but is unreadable or has an
                         unrecognized schema -> exit 2 (fail closed, never
                         silently excused).

Tables read (only if present):
  tools/member_lookup.json       {"Class": {"<dec offset>": {"name": ...}}}
  anchors/csp_canon_members.json {"Class": {"members": {"<dec>": {...}}}}
  anchors/member_types.json      {"Class+0xHEX": {"name": ...}}

Placeholder-name test for table entries keeps a single source of truth with
the RC1 generator (tools/csp_export/gen_cpp_canon.py PLACEHOLDER_RE): copy
the pattern verbatim and keep the two in sync.

Fail-closed ratchet: tools/quality_gate_baseline.json (machine-local, same
.gitignore policy as ptr_gate_baseline.json) records per-file per-category
text counts plus naming counts frozen at baseline creation. Enforcement:
  - new file with any violation                -> FAIL
  - existing file, any category count increase -> FAIL
  - naming count increase (or a previously-skipped category turning nonzero)-> FAIL
  - count decreases (fixes land)               -> allowed; tighten the
    baseline explicitly with --update-baseline (records git HEAD).

Output: FAIL: file:line: CATEGORY -- source lines (display capped, counts
always complete), summary to stderr, machine-readable --json PATH
(schema generated-quality-report/v1, includes current baseline counts).
Exit 0 = pass / bootstrap / --update-baseline.  Exit 1 = violations.
Exit 2 = usage or environment error (baseline unreadable, table present but
unreadable, tables present but extraction yields zero entries).
"""
import argparse
import datetime
import hashlib
import json
import os
import re
import subprocess
import sys
import time

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DEFAULT_PATHS = ["src/"]
BASELINE_PATH = os.path.join(REPO, "tools", "quality_gate_baseline.json")
SCHEMA = "quality-gate-baseline/v1"
SUMMARY_SCHEMA = "generated-quality-report/v1"
MEMBER_LOOKUP = os.path.join(REPO, "tools", "member_lookup.json")
CANON_MEMBERS = os.path.join(REPO, "anchors", "csp_canon_members.json")
MEMBER_TYPES = os.path.join(REPO, "anchors", "member_types.json")
NAME_PROVENANCE = os.path.join(REPO, "anchors", "name_provenance.json")
# canon authority table (highest naming authority; gen_cpp_canon output)
AUTHORITY_TABLE = "csp_canon_members"
SKIP_DIRS = {".git", ".omo", "build_win", "build_linux", "build_hook",
             "build_hook_release", "decompile-results", "gate_clang_cache",
             "node_modules"}
SRC_EXTS = (".cpp", ".hpp", ".h", ".cc", ".hh")
MAX_SHOW = int(os.environ.get("GQ_SHOW", "200"))

# RC2 text patterns (plan #9 spec, verbatim)
PATTERNS = [
    ("IDA-BYTE", re.compile(r"\bIDA_BYTE[0-8]?\(")),
    ("IDA-MACRO", re.compile(r"\bIDA_LOWORD\b|\bIDA_HIWORD\b|__PAIR")),
    ("QMEMCPY", re.compile(r"\bqmemcpy\b")),
    ("MEMORY-REF", re.compile(r"\bMEMORY\[")),
    ("PLACEHOLDER", re.compile(r"->q[0-9A-F]{3}\b|->u32_|->field_")),
    ("MALFORMED-DEF", re.compile(r"\bint (sub_[0-9A-F]+)\s*\(")),
    ("RAW-PTR-CAST", re.compile(r"\((?:char|uint8_t|_BYTE|_DWORD)\s*\*\)")),
]

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


def iter_source_files(roots):
    """Walk roots for C/C++ sources. Unlike the ptr gate, src/_generated is
    NOT excluded: RC2 covers all of src/** (plan MUST-NOT: no exemptions)."""
    for root in roots:
        rp = root.replace("\\", "/").rstrip("/")
        ap = rp if os.path.isabs(rp) else os.path.join(REPO, rp)
        if os.path.isfile(ap):
            if ap.endswith(SRC_EXTS):
                yield ap
            continue
        if not os.path.isdir(ap):
            print(f"WARNING: path not found: {root}", file=sys.stderr)
            continue
        for dirpath, dirnames, filenames in os.walk(ap):
            dirnames[:] = [d for d in dirnames if d not in SKIP_DIRS]
            for fn in sorted(filenames):
                if fn.endswith(SRC_EXTS):
                    yield os.path.join(dirpath, fn)


def scan_file(ap):
    try:
        with open(ap, "rb") as f:
            data = f.read()
        text = data.decode("utf-8", errors="replace")
    except OSError as e:
        return [(0, "READ-ERROR", str(e))]
    lines = strip_to_code(text)
    vios = []
    for idx, ln in enumerate(lines):
        if len(ln) < 4:
            continue
        for cat, pat in PATTERNS:
            for _m in pat.findall(ln):
                vios.append((idx + 1, cat, ln.strip()[:160]))
    return vios


def rel(ap):
    return os.path.relpath(ap, REPO).replace("\\", "/")


def sha256_file(ap):
    h = hashlib.sha256()
    try:
        with open(ap, "rb") as f:
            for chunk in iter(lambda: f.read(1 << 22), b""):
                h.update(chunk)
    except OSError:
        return "unreadable"
    return h.hexdigest()


def git_head():
    try:
        r = subprocess.run(["git", "rev-parse", "HEAD"],
                           capture_output=True, text=True, cwd=REPO)
        return r.stdout.strip()[:16]
    except Exception:
        return "unknown"


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

    def build_overlap():
        overlaps.clear()
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

    build_overlap()

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


# ---------------------------------------------------------------- baseline
def load_baseline(path):
    try:
        with open(path, "r", encoding="utf-8") as f:
            m = json.load(f)
    except FileNotFoundError:
        return None
    except (OSError, ValueError) as e:
        print(f"ERROR: baseline unreadable ({e}) -- fail closed",
              file=sys.stderr)
        sys.exit(2)
    if m.get("schema") != SCHEMA:
        print(f"ERROR: baseline schema mismatch: {m.get('schema')!r} != "
              f"{SCHEMA!r} -- fail closed", file=sys.stderr)
        sys.exit(2)
    return m


def write_baseline(path, text_stats, naming_counts, naming_tables):
    man = {
        "schema": SCHEMA,
        "created_at": datetime.datetime.now(
            datetime.timezone.utc).isoformat(timespec="seconds"),
        "git_head": git_head(),
        "note": ("RC2 ratchet high-water mark over generated/mechanical "
                 "code. New files / category count increases / naming count "
                 "increases FAIL. Tighten with --update-baseline after "
                 "fixes land (T5 regen / N1 naming rounds)."),
        "text": {"files": text_stats},
        "naming": {"counts": naming_counts, "tables": naming_tables},
    }
    tmp = path + ".tmp"
    with open(tmp, "w", encoding="utf-8") as f:
        json.dump(man, f, indent=0, sort_keys=True)
    os.replace(tmp, path)


def _text_stats(per_file):
    stats = {}
    for fp, vios in per_file.items():
        cats = {}
        for _ln, cat, _txt in vios:
            cats[cat] = cats.get(cat, 0) + 1
        stats[rel(fp)] = {"sha256": sha256_file(fp), "total": len(vios),
                          "cats": cats}
    return stats


def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("paths", nargs="*", default=None,
                    help="files or directories to scan (default: src/)")
    ap.add_argument("--json", dest="json_out", default=None,
                    help="write machine-readable summary to PATH")
    ap.add_argument("--baseline", default=BASELINE_PATH)
    ap.add_argument("--update-baseline", action="store_true",
                    help="rewrite the ratchet baseline from current counts")
    ap.add_argument("--skip-naming", action="store_true",
                    help="skip the naming-pollution section (iteration aid)")
    ap.add_argument("--naming-only", action="store_true",
                    help="run only the naming-pollution section")
    args = ap.parse_args()
    baseline_path = os.path.abspath(args.baseline)

    roots = args.paths if args.paths else DEFAULT_PATHS
    t0 = time.time()

    # ---- text scan
    per_file = {}
    by_cat = {}
    files_scanned = 0
    if not args.naming_only:
        for fp in iter_source_files(roots):
            files_scanned += 1
            vios = scan_file(fp)
            if vios:
                per_file[fp] = vios
                for _ln, cat, _txt in vios:
                    by_cat[cat] = by_cat.get(cat, 0) + 1
    text_total = sum(len(v) for v in per_file.values())

    # ---- naming scan
    naming_counts, table_stats, naming_notes, hard_errors = {}, {}, [], []
    if not args.skip_naming:
        naming_counts, table_stats, naming_notes, hard_errors = scan_naming()
        if hard_errors:
            for m in hard_errors:
                print(f"ERROR: generated-quality: {m}", file=sys.stderr)
            sys.exit(2)
    else:
        naming_notes.append("naming section skipped (--skip-naming)")

    elapsed = time.time() - t0

    # ---- update-baseline mode
    if args.update_baseline:
        write_baseline(baseline_path, _text_stats(per_file),
                       naming_counts, table_stats)
        print(f"generated-quality: baseline written: {len(per_file)} files, "
              f"{text_total} text violations {dict(sorted(by_cat.items()))}; "
              f"naming {naming_counts}")
        sys.exit(0)

    baseline = load_baseline(baseline_path)

    # ---- bootstrap
    if baseline is None:
        write_baseline(baseline_path, _text_stats(per_file),
                       naming_counts, table_stats)
        print("generated-quality: NO BASELINE -- bootstrapping ratchet at "
              "current counts. Review tools/quality_gate_baseline.json in "
              "the commit that introduces it.", file=sys.stderr)
        print(f"generated-quality: baseline initialized: {len(per_file)} "
              f"files, {text_total} text violations -- future increases "
              f"FAIL; naming counts {naming_counts}")
        sys.exit(0)

    # ---- enforcement: text
    base_files = baseline.get("text", {}).get("files", {})
    new_vios = []
    regressed = set()
    improved = 0
    for fp, vios in per_file.items():
        r = rel(fp)
        rec = base_files.get(r)
        counts = {}
        for _ln, cat, _txt in vios:
            counts[cat] = counts.get(cat, 0) + 1
        if rec is None:
            new_vios.extend((r, ln, cat, txt) for ln, cat, txt in vios)
            regressed.add(r)
            continue
        got_worse = any(cnt > rec.get("cats", {}).get(cat, 0)
                        for cat, cnt in counts.items())
        if counts and not got_worse \
                and sum(counts.values()) < rec.get("total", 0):
            improved += 1
        if got_worse:
            regressed.add(r)
            new_vios.extend((r, ln, cat, txt) for ln, cat, txt in vios)

    read_errors = by_cat.get("READ-ERROR", 0)

    # ---- enforcement: naming
    base_naming = baseline.get("naming", {}).get("counts", {})
    naming_regressions = []
    for cat, cur in naming_counts.items():
        base = base_naming.get(cat)
        if base is None:
            if cur > 0:
                naming_regressions.append(
                    f"{cat}: {cur} (category absent from baseline)")
        elif cur > base:
            naming_regressions.append(f"{cat}: {cur} > baseline {base}")

    # ---- output
    shown = 0
    for r, ln, cat, txt in new_vios:
        if shown >= MAX_SHOW:
            break
        print(f"FAIL: {r}:{ln}: {cat} -- {txt}")
        shown += 1
    if len(new_vios) > shown:
        print(f"... {len(new_vios) - shown} more new violation(s) suppressed "
              f"(GQ_SHOW={MAX_SHOW})")
    for m in naming_regressions:
        print(f"FAIL: naming: {m}")
    for note in naming_notes:
        print(f"note: {note}", file=sys.stderr)

    print(f"generated-quality: scanned {files_scanned} files in "
          f"{elapsed:.1f}s | files with violations: {len(per_file)} | "
          f"text total {text_total} | by category: "
          f"{dict(sorted(by_cat.items()))} | regressed files: "
          f"{len(regressed)} | improved: {improved} | naming counts: "
          f"{naming_counts} | table stats: "
          f"{json.dumps(table_stats, sort_keys=True)}", file=sys.stderr)

    baseline_counts = {
        "text_total": sum(f.get("total", 0)
                          for f in base_files.values()),
        "text_by_category": {},
        "naming": base_naming,
    }
    for rec in base_files.values():
        for cat, n in rec.get("cats", {}).items():
            baseline_counts["text_by_category"][cat] = \
                baseline_counts["text_by_category"].get(cat, 0) + n

    summary = {
        "schema": SUMMARY_SCHEMA,
        "paths": roots,
        "files_scanned": files_scanned,
        "files_with_violations": len(per_file),
        "text_total": text_total,
        "text_by_category": dict(sorted(by_cat.items())),
        "new_violations": len(new_vios),
        "regressed_files": len(regressed),
        "improved_files": improved,
        "read_errors": read_errors,
        "naming_counts": naming_counts,
        "naming_table_stats": table_stats,
        "naming_regressions": naming_regressions,
        "naming_notes": naming_notes,
        "baseline_counts": baseline_counts,
        "elapsed_s": round(elapsed, 1),
        "fail": False,
    }

    rc = 0
    if new_vios or read_errors:
        summary["fail"] = True
        print(f"FAIL: generated-quality: {len(new_vios)} new text "
              f"violation(s) beyond ratchet in {len(regressed)} file(s); "
              f"{read_errors} read error(s)", file=sys.stderr)
        rc = 1
    if naming_regressions:
        summary["fail"] = True
        print(f"FAIL: generated-quality: {len(naming_regressions)} naming "
              f"regression(s) beyond baseline", file=sys.stderr)
        rc = 1
    if rc == 0:
        print(f"OK: generated-quality: no new violations vs ratchet "
              f"(baseline: text {baseline_counts['text_total']}, naming "
              f"{base_naming})")

    if args.json_out:
        jp = args.json_out if os.path.isabs(args.json_out) \
            else os.path.join(REPO, args.json_out)
        os.makedirs(os.path.dirname(jp), exist_ok=True)
        with open(jp, "w", encoding="utf-8") as f:
            json.dump(summary, f, indent=1)
    sys.exit(rc)


if __name__ == "__main__":
    main()
