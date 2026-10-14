#!/usr/bin/env python3
"""ida-artifact gate: raw pointer arithmetic / pointer-index / unknown-member.

X6 (project-optimization, user ruling Q3 2026-10-12): the mechanical-era
exemption ("unchanged mechanical code is gate-exempt; full-tree re-judgment is
forbidden") and the fail-closed ratchet (tools/ptr_gate_baseline.json) are
REMOVED.  This gate is zero tolerance over the whole tree: `src/` + `app/`,
INCLUDING the src/_generated stub layer (no carve-outs).  Exit 0 requires
count == 0 for every HARD category.

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
SUMMARY_SCHEMA = "ptr-gate-report/v2"
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
HARD_PATTERNS = [
    ("THIS-ARITH", re.compile(
        r"\bthis\s*(?:\+|-)\s*\d")),
    ("PTR-ARITH", re.compile(
        r"\(\s*[\w:]+\s*\*+\s*\)\s*[\w\>\.\-]+\s*(?:\+|-)\s*\d")),
    ("PTR-ARITH", re.compile(
        r"\(\s*[\w:]+\s*\*+\s*\)\s*\([^()]{0,100}\b[\w\>\.\-]+\s*(?:\+|-)\s*\d")),
    ("PTR-INDEX", re.compile(
        r"\(\s*\(\s*[\w:]+\s*\*+\s*\)\s*[\w\>\.\-]+\s*\)\s*\[\s*[\w+\-/\*\s]{1,40}\]")),
    ("PTR-INDEX", re.compile(
        r"\(\s*\(\s*[\w:]+\s*\*+\s*\)\s*\(\s*[\w\>\.\-]+\s*\)\s*\)\s*\[")),
    ("PTR-INDEX", re.compile(
        r"\(\s*[\w:]+\s*\*+\s*\)\s*[\w\>\.\-]+\s*\[\s*\d")),
    ("INT2PTR", re.compile(
        r"\(\s*[\w:]+\s*\*+\s*\)\s*(?:0[xX]" + _HEX + r"|[1-9]\d*)\b")),
    ("PTR2INT", re.compile(
        # X20 precision fix (X19 §5.3): the inner alternative must be a REAL
        # `(T*)` cast -- requiring the closing `)` after the stars.  Without
        # it `(int)(g_ScoreVolume * 10.0 + 0.5)` matched `(int)(g_ScoreVolume *`
        # (a multiplication, not a cast; 127 false positives measured).
        # True positives `(int)(T*)x`, `(unsigned int)(T **)x` still match.
        r"\(\s*" + _INT_TYPES + r"\s*\)\s*(?:\(\s*[\w:]+\s*\*+\s*\)|&\s*[\w\>\.])")),
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
    args = ap.parse_args()

    roots = args.paths if args.paths else DEFAULT_PATHS
    t0 = time.time()

    all_files = list(iter_source_files(roots))
    hard_by_cat = {}
    info_by_cat = {}
    hard_rows = []          # (rel, line, cat, text)
    info_rows = []
    read_errors = 0
    for fp in all_files:
        hard, info = scan_file(fp)
        r = rel(fp)
        for ln, cat, txt in hard:
            if cat == "READ-ERROR":
                read_errors += 1
            hard_by_cat[cat] = hard_by_cat.get(cat, 0) + 1
            hard_rows.append((r, ln, cat, txt))
        for ln, cat, txt in info:
            info_by_cat[cat] = info_by_cat.get(cat, 0) + 1
            info_rows.append((r, ln, cat, txt))
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
          f"INFO total {info_total} | INFO by category: {info_by_cat_sorted} | "
          f"read errors: {read_errors}", file=sys.stderr)

    summary = {
        "schema": SUMMARY_SCHEMA,
        "paths": roots,
        "files_scanned": len(all_files),
        "hard_total": hard_total,
        "hard_by_category": hard_by_cat_sorted,
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
