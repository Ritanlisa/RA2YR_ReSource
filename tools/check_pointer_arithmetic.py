#!/usr/bin/env python3
"""ida-artifact gate: raw pointer arithmetic / pointer-index / unknown-member.

T3 (project-optimization): this gate was an empty no-op. It is now a tree-wide
regex safety net over the paths given on the command line (run_all_gates.py
passes `src/ app/`). It complements -- does not replace -- the AST gate
(check_translated_functions.py), which deep-checks only functions changed vs
auto-fill-baseline. This gate's job is to make NEW artifact introduction
impossible anywhere in the tree, while exempting the KNOWN pre-existing debt
of the mechanical era (plan rule: unchanged mechanical code is gate-exempt;
full-tree re-judgment is forbidden).

Categories (line-level, comments and string/char literal contents stripped):
  THIS-ARITH   `this + N` / `this - N`                       (AGENTS.md table)
  PTR-ARITH    `(T*)expr +/- N` or `(T*)(expr +/- N)`        (AGENTS.md table)
  PTR-INDEX    `((T*)expr)[N]` / `(T*)expr[N]`               (AGENTS.md table)
  INT2PTR      `(T*)<int literal>` (non-ptr-to-ptr; `(T*)0` NULL exempt)
  PTR2INT      `(inttype)(T*)x` / `(inttype)&x`              (ptr-nonptr-conv)
  IDA-NAME     field_/dword_/word_/byte_/qword_/unk_/off_/loc_/locret_/
               stru_/flt_/dbl_/asc_/sub_/def_/gap_XXXX, qXXX, uNN_N,
               ptr_N, nullsub_N, j_sub_ placeholders      (ida-naming rule)

Legal `.` / `->` member access never matches. Bare `(int)ptrVar` is NOT
detectable by regex (needs types) -- the AST gate covers it for changed
functions.

Fail-closed ratchet: tools/ptr_gate_baseline.json records, per file, the
per-category violation count frozen at baseline creation. Enforcement:
  - new file with any violation  -> FAIL
  - existing file, count(category) > baseline(category) -> FAIL
  - count decreases (fixes land) -> silently allowed; baseline can be
    tightened with --update-baseline (explicit, recorded with git HEAD).
--strict ignores the ratchet (any violation fails) for use once the
mechanical debt is cleaned (RC2 wiring).

Output: one `FAIL: file:line: CATEGORY -- source` line per violation
(display capped, full counts always reported), summary to stderr.
Exit 0 = no new violations (or --update-baseline / first-run bootstrap).
Exit 1 = new violations beyond the ratchet / --strict violations.
Exit 2 = usage/environment error.
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
DEFAULT_PATHS = ["src/", "app/"]
BASELINE_PATH = os.path.join(REPO, "tools", "ptr_gate_baseline.json")
SCHEMA = "ptr-gate-baseline/v1"
SUMMARY_SCHEMA = "ptr-gate-report/v1"
# parity with the AST gate: generated stub layer is out of scope
SKIP_DIR_PARTS = ("_generated",)
SKIP_DIRS = {".git", ".omo", "build_win", "build_linux", "build_hook",
             "build_hook_release", "decompile-results", "gate_clang_cache",
             "node_modules"}
MAX_SHOW = int(os.environ.get("PTR_GATE_SHOW", "200"))

# ---------------------------------------------------------------- patterns
_HEX = r"[0-9A-Fa-f]+"
_HEX = r"[0-9A-Fa-f]+"
_INT_TYPES = (
    r"(?:unsigned\s+|signed\s+)?"
    r"(?:long(?:\s+(?:long|int))?\s*|short(?:\s+int)?\s*|int\s*|__int(?:8|16|32|64)\s*|char\s*|"
    r"size_t|ssize_t|DWORD|UINT|ULONG|UINT_PTR|ULONG_PTR|DWORD_PTR|"
    r"ptrdiff_t|intptr_t|uintptr_t)"
)
PATTERNS = [
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
        r"\(\s*" + _INT_TYPES + r"\s*\)\s*(?:\(\s*[\w:]+\s*\*+|&\s*[\w\>\.])")),
    ("IDA-NAME", re.compile(
        r"\b(?:field_|dword_|word_|byte_|qword_|unk_|off_|locret_|loc_|"
        r"struct_|stru_|flt_|dbl_|asc_|sub_|def_|gap_)" + _HEX + r"\b"
        r"|\bq[0-9A-F]{3,}\b"
        r"|\b(?:u8|u16|u32|u64|s8|s16|s32|s64)_\d+\b"
        r"|\bptr_\d+\b"
        r"|\bnullsub_\d+\b"
        r"|\bj_sub_" + _HEX + r"\b")),
]

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
            if ap.endswith((".cpp", ".hpp", ".h", ".cc", ".hh")):
                yield ap
            continue
        if not os.path.isdir(ap):
            print(f"WARNING: path not found: {root}", file=sys.stderr)
            continue
        for dirpath, dirnames, filenames in os.walk(ap):
            dirnames[:] = [d for d in dirnames
                           if d not in SKIP_DIRS and d not in SKIP_DIR_PARTS]
            for fn in sorted(filenames):
                if fn.endswith((".cpp", ".hpp", ".h", ".cc", ".hh")):
                    yield os.path.join(dirpath, fn)


def scan_file(ap):
    """Return list of (line_no, category, code_line) violations for one file."""
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
            hits = pat.findall(ln)
            for _m in hits:
                vios.append((idx + 1, cat, ln.strip()[:160]))
    return vios


def sha256_file(ap):
    h = hashlib.sha256()
    try:
        with open(ap, "rb") as f:
            for chunk in iter(lambda: f.read(1 << 22), b""):
                h.update(chunk)
    except OSError:
        return "unreadable"
    return h.hexdigest()


def rel(ap):
    return os.path.relpath(ap, REPO).replace("\\", "/")


def git_head():
    try:
        r = subprocess.run(["git", "rev-parse", "HEAD"],
                           capture_output=True, text=True, cwd=REPO)
        return r.stdout.strip()[:16]
    except Exception:
        return "unknown"


def _stats_for(per_file):
    stats = {}
    for fp, vios in per_file.items():
        cats = {}
        for _ln, cat, _txt in vios:
            cats[cat] = cats.get(cat, 0) + 1
        stats[rel(fp)] = {"sha256": sha256_file(fp), "total": len(vios),
                          "cats": cats}
    return stats


def load_baseline(path):
    try:
        with open(path, "r", encoding="utf-8") as f:
            m = json.load(f)
    except FileNotFoundError:
        return None
    except (OSError, ValueError) as e:
        print(f"ERROR: baseline unreadable ({e}) -- fail closed", file=sys.stderr)
        sys.exit(2)
    if m.get("schema") != SCHEMA:
        print(f"ERROR: baseline schema mismatch: {m.get('schema')!r} "
              f"!= {SCHEMA!r} -- fail closed", file=sys.stderr)
        sys.exit(2)
    return m


def write_baseline(path, files_stats):
    man = {
        "schema": SCHEMA,
        "created_at": datetime.datetime.now(
            datetime.timezone.utc).isoformat(timespec="seconds"),
        "git_head": git_head(),
        "note": ("Ratchet high-water mark of known mechanical-era artifact "
                 "debt. New files / category count increases FAIL. Tighten "
                 "with --update-baseline after fixes land."),
        "files": files_stats,
    }
    tmp = path + ".tmp"
    with open(tmp, "w", encoding="utf-8") as f:
        json.dump(man, f, indent=0, sort_keys=True)
    os.replace(tmp, path)


def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("paths", nargs="*", default=None,
                    help="files or directories to scan (default: src/ app/)")
    ap.add_argument("--strict", action="store_true",
                    help="ignore ratchet: any violation fails")
    ap.add_argument("--update-baseline", action="store_true",
                    help="rewrite the ratchet baseline from current counts "
                         "(explicit action; records git HEAD)")
    ap.add_argument("--baseline", default=BASELINE_PATH)
    ap.add_argument("--json", dest="json_out", default=None,
                    help="write machine-readable summary to PATH")
    args = ap.parse_args()
    baseline_path = os.path.abspath(args.baseline)

    roots = args.paths if args.paths else DEFAULT_PATHS
    t0 = time.time()

    all_files = list(iter_source_files(roots))
    per_file = {}
    by_cat = {}
    for fp in all_files:
        vios = scan_file(fp)
        if vios:
            per_file[fp] = vios
            for _ln, cat, _txt in vios:
                by_cat[cat] = by_cat.get(cat, 0) + 1
    total = sum(len(v) for v in per_file.values())
    elapsed = time.time() - t0

    # ---- update-baseline mode: record and exit 0 (report only)
    if args.update_baseline:
        stats = _stats_for(per_file)
        write_baseline(baseline_path, stats)
        print(f"ptr-gate: baseline written: {len(stats)} files, "
              f"{total} violations across {dict(sorted(by_cat.items()))}")
        sys.exit(0)

    baseline = load_baseline(baseline_path)

    # ---- bootstrap: no baseline yet -> create it, loud, exit 0
    if baseline is None:
        print("ptr-gate: NO BASELINE -- bootstrapping ratchet at current "
              "counts (high-water mark). Review tools/ptr_gate_baseline.json "
              "in the commit that introduces it.", file=sys.stderr)
        write_baseline(baseline_path, _stats_for(per_file))
        print(f"ptr-gate: baseline initialized: {len(per_file)} files, "
              f"{total} violations -- future increases FAIL")
        sys.exit(0)

    # ---- enforcement mode
    base_files = baseline.get("files", {})
    new_vios = []       # (rel, line, cat, text) beyond ratchet
    regressed = set()
    improved = 0
    for fp, vios in per_file.items():
        r = rel(fp)
        rec = base_files.get(r)
        counts = {}
        for _ln, cat, _txt in vios:
            counts[cat] = counts.get(cat, 0) + 1
        if rec is None:
            for ln, cat, txt in vios:
                new_vios.append((r, ln, cat, txt))
            regressed.add(r)
            continue
        got_worse = any(cnt > rec.get("cats", {}).get(cat, 0)
                        for cat, cnt in counts.items())
        if counts and not got_worse and sum(counts.values()) < rec.get("total", 0):
            improved += 1
        if got_worse:
            regressed.add(r)
            for ln, cat, txt in vios:
                new_vios.append((r, ln, cat, txt))

    read_errors = by_cat.get("READ-ERROR", 0)

    # ---- raw output (capped display, counts always complete)
    shown = 0
    for r, ln, cat, txt in new_vios:
        if shown >= MAX_SHOW:
            break
        print(f"FAIL: {r}:{ln}: {cat} -- {txt}")
        shown += 1
    if len(new_vios) > shown:
        print(f"... {len(new_vios) - shown} more new violation(s) suppressed "
              f"(PTR_GATE_SHOW={MAX_SHOW})")

    print(f"ptr-gate: scanned {len(all_files)} files in {elapsed:.1f}s | "
          f"files with violations: {len(per_file)} | total {total} "
          f"| by category: {dict(sorted(by_cat.items()))} | "
          f"ratchet-regressed files: {len(regressed)} | "
          f"files improved vs baseline: {improved}", file=sys.stderr)

    summary = {
        "schema": SUMMARY_SCHEMA,
        "paths": roots,
        "strict": bool(args.strict),
        "files_scanned": len(all_files),
        "files_with_violations": len(per_file),
        "violations_total": total,
        "by_category": dict(sorted(by_cat.items())),
        "new_violations": len(new_vios),
        "regressed_files": len(regressed),
        "improved_files": improved,
        "read_errors": read_errors,
        "elapsed_s": round(elapsed, 1),
        "fail": False,
    }

    rc = 0
    if args.strict:
        if total > 0:
            summary["fail"] = True
            print(f"FAIL: ptr-gate --strict: {total} violation(s) "
                  f"(ratchet ignored)", file=sys.stderr)
            rc = 1
    else:
        if new_vios or read_errors:
            summary["fail"] = True
            print(f"FAIL: ptr-gate: {len(new_vios)} new violation(s) beyond "
                  f"ratchet in {len(regressed)} file(s); "
                  f"{read_errors} read error(s)", file=sys.stderr)
            rc = 1
        else:
            print(f"OK: ptr-gate: no new violations vs ratchet "
                  f"({total} known debt occurrences frozen in baseline)")

    if args.json_out:
        jp = args.json_out if os.path.isabs(args.json_out) \
            else os.path.join(REPO, args.json_out)
        with open(jp, "w", encoding="utf-8") as f:
            json.dump(summary, f, indent=1)
    sys.exit(rc)


if __name__ == "__main__":
    main()
