#!/usr/bin/env python3
"""ida-artifact gate: raw pointer arithmetic / pointer-index / unknown-member.

X6 (project-optimization, user ruling Q3 2026-10-12): the mechanical-era
exemption ("unchanged mechanical code is gate-exempt; full-tree re-judgment is
forbidden") and the fail-closed ratchet (tools/ptr_gate_baseline.json) are
REMOVED.  This gate is zero tolerance over the whole tree: `src/` + `app/`,
INCLUDING the src/_generated stub layer (no carve-outs).  Exit 0 requires
count == 0 for every HARD category.

X22 (2026-10-14): two changes.
(1) Cast TYPE slot widened to MULTI-WORD.  The previous `[\\w:]+` class matched
    a single word, so every multi-word-typed cast (`unsigned int`,
    `unsigned char`, `signed char`, `long long`, `unsigned __int16`,
    `struct X`, `const T`) was invisible; the user-cited
    `*(unsigned int *)(v3[2] + 4 * v2 - 4) = 0;` (src/e4/AudioClass_e4.cpp:47)
    was a MISS.  See _CAST_TYPE for the replacement + soundness invariant.
(2) R0 population scope (user ruling: the gate governs ONLY the decompilation
    output).  Regenerable scaffolding that is not part of the build
    (src/_generated/link_stubs.cpp, src/csp_canon/bodies/*.inc,
    src/core/ida_compat.h) is still scanned and loudly REPORTED per class, but
    its rows do not fail the gate.  See SCOPE_CLASSES for the per-class
    evidence; --include-scaffolding restores whole-scan (pre-R0) scoring for
    audit comparisons.  A `SCOPE:` line always reports the split -- nothing is
    ever excluded silently.

HARD categories (target 0):
  THIS-ARITH   `this + N` / `this - N`                        (AGENTS.md table)
  PTR-ARITH    `(T*)expr +/- N` or `(T*)(expr +/- N)`         (AGENTS.md table)
  PTR-INDEX    `((T*)expr)[N]` / `(T*)expr[N]`                (AGENTS.md table)
  INT2PTR      `(T*)<int literal>` (non-ptr-to-ptr; `(T*)0` NULL exempt)
  PTR2INT      `(inttype)(T*)x` / `(inttype)&x`               (ptr-nonptr-conv)

INFO category (reported, never fails):
  IDA-NAME     placeholder identifiers (field_/dword_/word_/byte_/qword_/
               unk_/off_/loc_/locret_/stru_/flt_/dbl_/asc_/sub_/def_/gap_
               + qXXX/uNN_N/ptr_N/nullsub_N/j_sub_).  The user's Q5 ruling
               defers placeholder NAMES to Step 6: the gate counts and prints
               them, but their presence does NOT fail it.

Legal `.` / `->` member access never matches.  Bare `(int)ptrVar` is NOT
detectable by regex (needs types) -- the AST gate covers it for changed
functions.

Output: `FAIL: file:line: CATEGORY -- source` per hard violation (display
capped via PTR_GATE_SHOW, full counts always reported), INFO samples + totals
for the placeholder-name family, summary to stderr, machine-readable
`--json PATH` (schema ptr-gate-report/v2).

Exit 0 = zero hard violations.   Exit 1 = hard violations / read errors.
Exit 2 = usage / environment error.
"""
import argparse
import json
import os
import re
import sys
import time

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DEFAULT_PATHS = ["src/", "app/"]
# v3 (X22): hard_total now = failing population (R0 scope); the whole-scan
# count and the per-class scaffolding split are separate fields, so a v2
# consumer can always reconstruct either reading.
SUMMARY_SCHEMA = "ptr-gate-report/v3"
# Non-source directories are not walked (build outputs, evidence stores,
# reference dumps).  This is a source-scope statement, NOT an exemption:
# everything under the given roots with a source extension is scanned,
# including src/_generated.
SKIP_DIRS = {".git", ".omo", "build_win", "build_linux", "build_hook",
             "build_hook_release", "decompile-results", "gate_clang_cache",
             "node_modules"}
# .inc is scanned too (the mechanical corpus treats .inc as source text; the
# X11 vtable ledger likewise covers .inc sites) -- no extension carve-outs.
SRC_EXTS = (".cpp", ".hpp", ".h", ".cc", ".hh", ".inc")
MAX_SHOW = int(os.environ.get("PTR_GATE_SHOW", "200"))
INFO_SHOW = int(os.environ.get("PTR_GATE_INFO_SHOW", "20"))

# ---------------------------------------------------------------- patterns
_HEX = r"[0-9A-Fa-f]+"
_INT_TYPES = (
    r"(?:unsigned\s+|signed\s+)?"
    r"(?:long(?:\s+(?:long|int))?\s*|short(?:\s+int)?\s*|int\s*|__int(?:8|16|32|64)\s*|char\s*|"
    r"size_t|ssize_t|DWORD|UINT|ULONG|UINT_PTR|ULONG_PTR|DWORD_PTR|"
    r"ptrdiff_t|intptr_t|uintptr_t)"
)
# X22 (2026-10-14): cast TYPE slot.  The previous `[\w:]+` class matches ONE
# word only, so every multi-word type in a cast -- `unsigned int`,
# `unsigned char`, `signed char`, `long long`, `unsigned __int16`,
# `struct X`, `const T`, `T::U` -- was invisible to the gate (the user's
# cited `*(unsigned int *)(v3[2] + 4 * v2 - 4) = 0;`,
# src/e4/AudioClass_e4.cpp:47, was a MISS before this fix).  The slot is now
# one-or-more words; each word may carry `::`.  Soundness invariant (why the
# widening cannot invent false positives): every pattern using the slot
# requires `*+` IMMEDIATELY before the closing `)`, so only `(words*)` shapes
# can ever match -- an operand expression such as `(a * b)` or `(x * y)` has
# an operand after the star and never matches.  Fixture proof (both
# directions): .omo/evidence/optimization/x22/x22_fixture.cpp +
# x22_fixture_check.py.
_CAST_TYPE = r"[\w:]+(?:\s+[\w:]+)*"
HARD_PATTERNS = [
    ("THIS-ARITH", re.compile(
        r"\bthis\s*(?:\+|-)\s*\d")),
    ("PTR-ARITH", re.compile(
        r"\(\s*" + _CAST_TYPE + r"\s*\*+\s*\)\s*[\w\>\.\-]+\s*(?:\+|-)\s*\d")),
    ("PTR-ARITH", re.compile(
        r"\(\s*" + _CAST_TYPE + r"\s*\*+\s*\)\s*\([^()]{0,100}\b[\w\>\.\-]+\s*(?:\+|-)\s*\d")),
    ("PTR-INDEX", re.compile(
        r"\(\s*\(\s*" + _CAST_TYPE + r"\s*\*+\s*\)\s*[\w\>\.\-]+\s*\)\s*\[\s*[\w+\-/\*\s]{1,40}\]")),
    ("PTR-INDEX", re.compile(
        r"\(\s*\(\s*" + _CAST_TYPE + r"\s*\*+\s*\)\s*\(\s*[\w\>\.\-]+\s*\)\s*\)\s*\[")),
    ("PTR-INDEX", re.compile(
        r"\(\s*" + _CAST_TYPE + r"\s*\*+\s*\)\s*[\w\>\.\-]+\s*\[\s*\d")),
    ("INT2PTR", re.compile(
        r"\(\s*" + _CAST_TYPE + r"\s*\*+\s*\)\s*(?:0[xX]" + _HEX + r"|[1-9]\d*)\b")),
    ("PTR2INT", re.compile(
        # X20 precision fix (X19 §5.3): the inner alternative must be a REAL
        # `(T*)` cast -- requiring the closing `)` after the stars.  Without
        # it `(int)(g_ScoreVolume * 10.0 + 0.5)` matched `(int)(g_ScoreVolume *`
        # (a multiplication, not a cast; 127 false positives measured).
        # True positives `(int)(T*)x`, `(unsigned int)(T **)x` still match.
        # X22: the inner cast type slot is multi-word too (`(int)(unsigned
        # int *)x` used to MISS).
        r"\(\s*" + _INT_TYPES + r"\s*\)\s*(?:\(\s*" + _CAST_TYPE + r"\s*\*+\s*\)|&\s*[\w\>\.])")),
]
INFO_PATTERNS = [
    ("IDA-NAME", re.compile(
        r"\b(?:field_|dword_|word_|byte_|qword_|unk_|off_|locret_|loc_|"
        r"struct_|stru_|flt_|dbl_|asc_|sub_|def_|gap_)" + _HEX + r"\b"
        r"|\bq[0-9A-F]{3,}\b"
        r"|\b(?:u8|u16|u32|u64|s8|s16|s32|s64)_\d+\b"
        r"|\bptr_\d+\b"
        r"|\bnullsub_\d+\b"
        r"|\bj_sub_" + _HEX + r"\b")),
]
# combined view kept for importers that just want the category list
PATTERNS = HARD_PATTERNS + INFO_PATTERNS
HARD_CATS = {c for c, _ in HARD_PATTERNS}


# ------------------------------------------------------------- R0 scope (X22)
# User ruling 2026-10-14 ("only the decompilation output is governed"): the
# gate's failing population is the decompilation output -- the deliverable
# tree that the build turns into gamemd.exe.  Regenerable scaffolding that is
# NOT part of the build is still scanned and loudly REPORTED per class (a
# `SCOPE:` line + JSON "scaffolding" section; never silently dropped), but its
# rows do not fail the gate.  Per-class evidence, re-verified mechanically in
# .omo/evidence/optimization/x22/x22_scope_evidence.{py,json}:
#
#   scaffold-link-stubs  src/_generated/link_stubs.cpp
#       Not a build input: root CMakeLists.txt globs `src/*.cpp` with
#       `list(FILTER ... EXCLUDE REGEX "src/_generated/")` and re-adds ONLY
#       named_free_stubs.cpp + sub_stubs.cpp.  File header says
#       AUTO-GENERATED (regenerator: tools/gen_link_stubs.py); it is a mirror
#       of compiled bodies -- 95.8% of its pre-fix gate-hit /*0xADDR*/ addr
#       set (594/620) also occurs in non-scaffold scanned files (X22 recheck,
#       x22_scope_evidence.json; X20-R0 reported 98.2% on a wider universe).
#   scaffold-bodies-inc  src/csp_canon/bodies/*.inc
#       Never compiled: file header states "not compiled" and the repo has
#       ZERO includers of these .inc files (git-grep verified, X22 evidence);
#       regenerator: tools/csp_export/backfill_completed.py.
#   scaffold-ida-compat  src/core/ida_compat.h
#       Force-include infrastructure shim (/FI in root CMakeLists.txt), not a
#       decompilation-output unit (0 hard hits since the X20 precision fix).
#
# Everything else -- including src/_generated/named_free_stubs.cpp and
# sub_stubs.cpp (explicitly compiled) -- keeps X6 zero tolerance.
SCOPE_CLASSES = [
    ("scaffold-link-stubs",
     lambda r: r == "src/_generated/link_stubs.cpp",
     "not in CMake target (glob excludes src/_generated/, re-adds only "
     "named_free_stubs+sub_stubs); generated mirror of compiled bodies "
     "(594/620 = 95.8% pre-fix hit-addr mirror into non-scaffold files)"),
    ("scaffold-bodies-inc",
     lambda r: r.startswith("src/csp_canon/bodies/") and r.endswith(".inc"),
     "0 includers repo-wide; header 'not compiled'; regenerator "
     "tools/csp_export/backfill_completed.py"),
    ("scaffold-ida-compat",
     lambda r: r == "src/core/ida_compat.h",
     "force-include infrastructure shim (/FI in CMakeLists), not a "
     "decompilation-output unit (1 hit: the shim's own ((IdaRegVar *)v)[i])"),
]


def scope_of(rel_path):
    """Return the R0 scaffolding class of a repo-relative path, or None if the
    path belongs to the failing population (decompilation output)."""
    for cls, match, _evidence in SCOPE_CLASSES:
        if match(rel_path):
            return cls
    return None


# ------------------------------------------------------- comment stripping
def strip_to_code(text):
    """Blank out comments and string/char literal contents, preserving line
    count 1:1 so violation line numbers match the original file."""
    out = []
    buf = []
    i = 0
    n = len(text)
    state = 0  # 0 code, 1 //comment, 2 /*comment*/, 3 "str", 4 'char'
    while i < n:
        c = text[i]
        if state == 0:
            if c == "/" and i + 1 < n and text[i + 1] == "/":
                state = 1
                i += 2
                continue
            if c == "/" and i + 1 < n and text[i + 1] == "*":
                state = 2
                buf.append(" ")
                i += 2
                continue
            if c == '"':
                state = 3
                buf.append(" ")
                i += 1
                continue
            if c == "'":
                state = 4
                buf.append(" ")
                i += 1
                continue
            if c == "\n":
                out.append("".join(buf))
                buf = []
                i += 1
                continue
            buf.append(c)
            i += 1
        elif state == 1:
            if c == "\n":
                state = 0
                out.append("".join(buf))
                buf = []
            i += 1
        elif state == 2:
            if c == "*" and i + 1 < n and text[i + 1] == "/":
                state = 0
                i += 2
                buf.append(" ")
                continue
            if c == "\n":
                out.append("".join(buf))
                buf = []
            i += 1
        else:  # 3 / 4: string or char literal
            if c == "\\":
                i += 2
                continue
            if (state == 3 and c == '"') or (state == 4 and c == "'"):
                state = 0
                buf.append(" ")
                i += 1
                continue
            if c == "\n":
                # unterminated literal at EOL: reset to avoid cascade poison
                state = 0
                out.append("".join(buf))
                buf = []
            i += 1
    if buf:
        out.append("".join(buf))
    return out


def iter_source_files(roots):
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
    """Return (hard_vios, info_vios) for one file; each entry is
    (line_no, category, code_line)."""
    try:
        with open(ap, "rb") as f:
            data = f.read()
        text = data.decode("utf-8", errors="replace")
    except OSError as e:
        return [(0, "READ-ERROR", str(e))], []
    lines = strip_to_code(text)
    hard = []
    info = []
    for idx, ln in enumerate(lines):
        if len(ln) < 4:
            continue
        for cat, pat in HARD_PATTERNS:
            for _m in pat.findall(ln):
                hard.append((idx + 1, cat, ln.strip()[:160]))
        for cat, pat in INFO_PATTERNS:
            for _m in pat.findall(ln):
                info.append((idx + 1, cat, ln.strip()[:160]))
    return hard, info


def rel(ap):
    return os.path.relpath(ap, REPO).replace("\\", "/")


def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("paths", nargs="*", default=None,
                    help="files or directories to scan (default: src/ app/)")
    ap.add_argument("--json", dest="json_out", default=None,
                    help="write machine-readable summary to PATH")
    ap.add_argument("--include-scaffolding", action="store_true",
                    help="audit mode: score the whole scan (pre-R0 "
                         "semantics) -- regenerable scaffolding rows count "
                         "as failures too")
    args = ap.parse_args()

    roots = args.paths if args.paths else DEFAULT_PATHS
    t0 = time.time()

    all_files = list(iter_source_files(roots))
    info_by_cat = {}
    raw_hard_rows = []      # (rel, line, cat, text) -- whole scanned population
    info_rows = []
    read_errors = 0
    for fp in all_files:
        hard, info = scan_file(fp)
        r = rel(fp)
        for ln, cat, txt in hard:
            if cat == "READ-ERROR":
                read_errors += 1
            raw_hard_rows.append((r, ln, cat, txt))
        for ln, cat, txt in info:
            info_by_cat[cat] = info_by_cat.get(cat, 0) + 1
            info_rows.append((r, ln, cat, txt))

    # ---- R0 population scope (user ruling 2026-10-14; see SCOPE_CLASSES) --
    # Failing population = decompilation output.  Regenerable scaffolding is
    # scanned + reported per class but does not fail; --include-scaffolding
    # restores the whole-scan (pre-R0) scoring for audit comparisons.
    hard_rows = []          # (rel, line, cat, text) -- failing population
    scaffold_rows = []      # (class, rel, line, cat, text) -- reported only
    for row in raw_hard_rows:
        cls = scope_of(row[0])
        if cls is None or args.include_scaffolding:
            hard_rows.append(row)
        if cls is not None:
            scaffold_rows.append((cls,) + row)
    hard_by_cat = {}
    for _r, _ln, cat, _txt in hard_rows:
        hard_by_cat[cat] = hard_by_cat.get(cat, 0) + 1
    scaffold_by_class = {}
    for cls, sr, sln, scat, stxt in scaffold_rows:
        d = scaffold_by_class.setdefault(cls, {"rows": 0, "files": set(),
                                               "by_category": {},
                                               "samples": []})
        d["rows"] += 1
        d["files"].add(sr)
        d["by_category"][scat] = d["by_category"].get(scat, 0) + 1
        if len(d["samples"]) < 5:
            d["samples"].append(f"{sr}:{sln}: {scat} -- {stxt}")
    scaffold_report = {}
    for cls, _m, evidence in SCOPE_CLASSES:
        d = scaffold_by_class.get(cls)
        scaffold_report[cls] = {
            "rows": d["rows"] if d else 0,
            "files": len(d["files"]) if d else 0,
            "by_category": ({k: d["by_category"][k]
                             for k in sorted(d["by_category"])} if d else {}),
            "samples": d["samples"][:5] if d else [],
            "evidence": evidence,
        }
    scaffold_total = len(scaffold_rows)
    hard_total = len(hard_rows)
    info_total = len(info_rows)
    elapsed = time.time() - t0

    hard_by_cat_sorted = {k: hard_by_cat[k]
                          for k in sorted(hard_by_cat)}
    info_by_cat_sorted = {k: info_by_cat[k]
                          for k in sorted(info_by_cat)}

    # ---- display: hard violations (capped), then INFO family (capped)
    shown = 0
    for r, ln, cat, txt in hard_rows:
        if shown >= MAX_SHOW:
            break
        print(f"FAIL: {r}:{ln}: {cat} -- {txt}")
        shown += 1
    if hard_total > shown:
        print(f"... {hard_total - shown} more hard violation(s) suppressed "
              f"(PTR_GATE_SHOW={MAX_SHOW})")
    # R0 scope report -- per class, loud, every run (never silent)
    cls_bits = ", ".join(
        f"{cls}={o['rows']} row(s)/{o['files']} file(s)"
        for cls, o in scaffold_report.items())
    if args.include_scaffolding:
        print(f"SCOPE: ptr-gate: AUDIT MODE --include-scaffolding -- whole "
              f"scan {len(raw_hard_rows)} hard row(s) scored (pre-R0 "
              f"semantics). Scaffolding rows in this scan: {cls_bits} | "
              f"total {scaffold_total}")
    else:
        print(f"SCOPE: ptr-gate: R0 population = decompilation output "
              f"(user ruling 2026-10-14). Regenerable scaffolding scanned "
              f"and reported, not failing: {cls_bits} | excluded "
              f"{scaffold_total} of {len(raw_hard_rows)} scanned hard "
              f"row(s)")
    ishown = 0
    for r, ln, cat, txt in info_rows:
        if ishown >= INFO_SHOW:
            break
        print(f"INFO: {r}:{ln}: {cat} -- {txt}")
        ishown += 1
    if info_total > ishown:
        print(f"... {info_total - ishown} more INFO occurrence(s) suppressed "
              f"(PTR_GATE_INFO_SHOW={INFO_SHOW}); counted in full: "
              f"{dict(info_by_cat_sorted)}")

    print(f"ptr-gate: scanned {len(all_files)} files in {elapsed:.1f}s | "
          f"files with hard violations: "
          f"{len({r for r, _l, _c, _t in hard_rows})} | "
          f"hard total {hard_total} | hard by category: {hard_by_cat_sorted} | "
          f"scaffolding reported (not failing): {scaffold_total} "
          f"({ {c: o['rows'] for c, o in scaffold_report.items()} }) | "
          f"INFO total {info_total} | INFO by category: {info_by_cat_sorted} | "
          f"read errors: {read_errors}", file=sys.stderr)

    summary = {
        "schema": SUMMARY_SCHEMA,
        "paths": roots,
        "population": ("whole-scan (--include-scaffolding, pre-R0 audit)"
                       if args.include_scaffolding else
                       "decompilation output (R0 scope, user ruling "
                       "2026-10-14)"),
        "files_scanned": len(all_files),
        "hard_total": hard_total,
        "hard_total_whole_scan": len(raw_hard_rows),
        "hard_by_category": hard_by_cat_sorted,
        "scaffolding_total": scaffold_total,
        "scaffolding": scaffold_report,
        "info_total": info_total,
        "info_by_category": info_by_cat_sorted,
        "read_errors": read_errors,
        "elapsed_s": round(elapsed, 1),
        "failed": bool(hard_total),
    }

    rc = 0
    if hard_total:
        summary["failed"] = True
        print(f"FAIL: ptr-gate: {hard_total} hard violation(s) "
              f"(zero tolerance, X6/Q3) in "
              f"{len({r for r, _l, _c, _t in hard_rows})} file(s); "
              f"{scaffold_total} scaffolding row(s) reported-but-not-failing "
              f"(R0; see SCOPE line); "
              f"{read_errors} read error(s)", file=sys.stderr)
        rc = 1
    else:
        print(f"OK: ptr-gate: 0 hard violations "
              f"({info_total} INFO placeholder-name occurrence(s) reported, "
              f"Step-6 debt)", file=sys.stderr)

    if args.json_out:
        jp = args.json_out if os.path.isabs(args.json_out) \
            else os.path.join(REPO, args.json_out)
        os.makedirs(os.path.dirname(jp), exist_ok=True)
        with open(jp, "w", encoding="utf-8") as f:
            json.dump(summary, f, indent=1)
    sys.exit(rc)


if __name__ == "__main__":
    main()
