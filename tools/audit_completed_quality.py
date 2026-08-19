#!/usr/bin/env python3
"""
audit_completed_quality.py — Quality audit of ALL completed=true functions.

READ-ONLY assessment. Runs the project's three quality gates against every
function flagged `completed=true` in signals.json (the canonical completed-flag
source — 502 functions), regardless of git status. The gates are normally
git-diff scoped; this tool bypasses that by feeding each completed function's
body text directly into the gate detection logic.

Gates:
  B.2  (check_translated_functions.py) — stub / comment-shell detection, C++ casts,
       pointer arithmetic, non-array operator[], cast-then-call, goto.
  B.5  (check_pointer_arithmetic.py)   — IDA artifacts (vN/field_N/dword_N/sub_N),
       (T*)0xNNNN, ptr-arithmetic, cast-index, array-div, hex-ptr, C++ casts, goto.
  exec-flow (verify_execution_flow.py) — CFG / event-flow bijection vs IDA. Only
       runs for functions that HAVE an IDA cache entry (.omo/ida_cache/).

Matching: each completed function (addr, name) is located in src/**/*.cpp and
app/**/*.cpp by (1) the `// 0xADDR` annotation immediately preceding its
definition, then (2) fully-qualified Class::Method name, then (3) unique simple
name. Functions with no cpp body (inline-in-hpp, virtual=0, constexpr, or simply
unimplemented) are reported as not-assessable, NOT as gate failures.

Output: .omo/completed_quality_audit.json + a stdout summary.
No source files are modified.

Usage:
    python tools/audit_completed_quality.py
    python tools/audit_completed_quality.py --no-exec-flow   # skip CFG gate (fast)
"""

import argparse
import datetime
import json
import os
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path

PROJECT_ROOT = Path(__file__).resolve().parent.parent
TOOLS_DIR = PROJECT_ROOT / "tools"
SRC_DIR = PROJECT_ROOT / "src"
APP_DIR = PROJECT_ROOT / "app"
SIGNALS_JSON = PROJECT_ROOT / "signals.json"
IDA_CACHE_DIR = PROJECT_ROOT / ".omo" / "ida_cache"
OUT_JSON = PROJECT_ROOT / ".omo" / "completed_quality_audit.json"

# Make sibling gate modules importable and resolve relative "signals.json".
if str(TOOLS_DIR) not in sys.path:
    sys.path.insert(0, str(TOOLS_DIR))
os.chdir(PROJECT_ROOT)

import check_translated_functions as b2          # noqa: E402
import check_pointer_arithmetic as b5            # noqa: E402

# B.5 reproduces the gate's standalone skip-file rule (informational only here).
_B5_SKIP_DIRS = ['_generated/', 'menu_globals_gen']
_B5_SKIP_GLOBS = ['subs_', 'sub_stubs.cpp']

# annotation address comment:  // 0xADDR   |  // IDA 0xADDR  |  // IDA: 0xADDR
_RE_ADDR_COMMENT = re.compile(r'//\s*(?:IDA:?\s+)?0x([0-9A-Fa-f]{5,8})\b')
# qualified name in a signature:  RetType Class::Method(
_RE_QUAL_NAME = re.compile(r'\b([A-Za-z_]\w*)::(~?[A-Za-z_]\w*)\s*\(')


# ════════════════════════════════════════════════════════════════════
# Phase 1 — load the 502 completed functions
# ════════════════════════════════════════════════════════════════════

def load_completed():
    with open(SIGNALS_JSON, encoding="utf-8") as f:
        data = json.load(f)
    out = []
    for addr_str, sym in (data.get("symbols", {}) or {}).items():
        if not isinstance(sym, dict):
            continue
        if sym.get("kind") != "function":
            continue
        if sym.get("completed") is not True:
            continue
        name = sym.get("name", "")
        if not addr_str.lower().startswith("0x"):
            continue
        try:
            addr_int = int(addr_str, 16)
        except ValueError:
            continue
        out.append({
            "addr_str": addr_str,
            "addr_int": addr_int,
            "name": name,
            "call_convention": sym.get("call_convention"),
            "translated": sym.get("translated"),
            "done": sym.get("done"),
            "idempotent": sym.get("idempotent"),
        })
    return out


# ════════════════════════════════════════════════════════════════════
# Phase 2 — index every cpp function body (sig + lines) + its // 0xADDR
# ════════════════════════════════════════════════════════════════════

def _cpp_files():
    """All cpp under src/ and app/, with byte-identical duplicates removed.

    The repo carries byte-identical copies of the EXE entry sources under both
    `src/app/` and `app/` (e.g. game_loop.cpp, cmdline.cpp). Indexing both would
    create cosmetic same-address ambiguity with no verdict difference, so we keep
    the first occurrence of each distinct content hash."""
    import hashlib
    raw = sorted(SRC_DIR.glob("**/*.cpp"))
    if APP_DIR.exists():
        raw.extend(sorted(APP_DIR.glob("**/*.cpp")))
    seen = set()
    files = []
    for p in raw:
        try:
            h = hashlib.md5(p.read_bytes()).hexdigest()
        except OSError:
            continue
        if h in seen:
            continue
        seen.add(h)
        files.append(p)
    return files


# Constructor / destructor cpp-syntax aliases (functions.json uses Construct /
# Constructor / Destruct / Destructor / Destroy; cpp uses ClassName / ~ClassName).
def _alias_quals(name):
    if "::" not in name:
        return []
    cls, meth = name.split("::", 1)
    out = []
    if meth in ("Construct", "Constructor"):
        out.append(f"{cls}::{cls}")
    if meth in ("Destruct", "Destructor", "Destroy"):
        out.append(f"{cls}::~{cls}")
    return out


def _qual_name_of(sig_text):
    """(qualified 'Class::Method', simple 'Method') from a signature, via B.2 first."""
    simple = b2._extract_func_name(sig_text)
    flat = sig_text.replace("\n", " ").replace("\r", " ")
    # take the LAST Class::Method before the first '(' of the definition
    m = None
    for m in _RE_QUAL_NAME.finditer(flat):
        pass
    if m:
        return f"{m.group(1)}::{m.group(2)}", (simple or m.group(2))
    return None, simple


def build_cpp_index():
    """Returns (by_addr, by_qual, by_simple, records).

    Each record: {file, start_line(1based brace), end_line, sig_text, body_lines,
    body_line_nums, addr(int|None), qual(str|None), simple(str)}.
    by_addr: addr_int -> [records]; by_qual: 'Class::Method' -> [records];
    by_simple: 'Method' -> [records].
    """
    records = []
    by_addr = defaultdict(list)
    by_qual = defaultdict(list)
    by_simple = defaultdict(list)

    for cppf in _cpp_files():
        try:
            with open(cppf, "r", encoding="utf-8", errors="replace") as f:
                lines = f.readlines()
        except OSError:
            continue
        rel = str(cppf.relative_to(PROJECT_ROOT)).replace("\\", "/")

        for start1, end1, sig_text, body_lines, body_line_nums in b2.extract_functions(lines):
            brace_line1 = start1  # 1-based line of opening brace
            # Compute the TRUE 0-based first signature line so we only inspect the
            # contiguous comment header directly above THIS function (no creep into
            # a neighbouring function -> no cross-function annotation grabbing).
            sig_nl = sig_text.count("\n")
            sig_start_0 = (brace_line1 - 1) - (sig_nl - 1) if sig_nl >= 1 else (brace_line1 - 1)
            addr = None
            ln0 = sig_start_0 - 1
            steps = 0
            while ln0 >= 0 and steps < 12:
                text = lines[ln0]
                stripped = text.strip()
                if not stripped:                       # blank — keep going up
                    ln0 -= 1
                    steps += 1
                    continue
                if (stripped.startswith("//") or stripped.startswith("/*")
                        or stripped.startswith("*")):  # comment header line
                    m = _RE_ADDR_COMMENT.search(text)
                    if m:
                        try:
                            addr = int(m.group(1), 16)
                        except ValueError:
                            addr = None
                        break
                    ln0 -= 1
                    steps += 1
                    continue
                break  # real code line -> end of header, no annotation found

            qual, simple = _qual_name_of(sig_text)
            rec = {
                "file": rel,
                "start_line": brace_line1,
                "end_line": end1,
                "sig_text": sig_text,
                "body_lines": body_lines,
                "body_line_nums": body_line_nums,
                "addr": addr,
                "qual": qual,
                "simple": simple,
            }
            records.append(rec)
            if addr is not None:
                by_addr[addr].append(rec)
            if qual:
                by_qual[qual].append(rec)
            if simple:
                by_simple[simple].append(rec)

    return by_addr, by_qual, by_simple, records


def match_body(fn, by_addr, by_qual, by_simple):
    """Locate the cpp record for a completed function. Returns (rec, how) or (None, reason)."""
    a = fn["addr_int"]
    name = fn["name"]
    # 1) address annotation (exact)
    if a in by_addr:
        recs = by_addr[a]
        if len(recs) == 1:
            return recs[0], "addr"
        for r in recs:               # disambiguate same-addr cpp defs by name
            if r["qual"] == name:
                return r, "addr+qual"
        for r in recs:               # ...or by ctor/dtor alias
            if r["qual"] in _alias_quals(name):
                return r, "addr+alias"
        # the address is annotated on >1 DIFFERENT cpp function and none matches
        # this name -> we cannot reliably locate THE body (annotation collision /
        # mis-annotation). Do NOT audit an unrelated body; mark not-assessable.
        cand = ",".join(str(r["qual"]) for r in recs)
        return None, "ambiguous_addr(%d): %s" % (len(recs), cand)
    # 2) fully-qualified name
    if name in by_qual:
        recs = by_qual[name]
        if len(recs) == 1:
            return recs[0], "qual"
        return recs[0], "qual(ambiguous:%d)" % len(recs)
    # 3) ctor/dtor alias name
    for al in _alias_quals(name):
        if al in by_qual:
            recs = by_qual[al]
            if len(recs) == 1:
                return recs[0], "alias"
    # 4) unique simple name (last resort)
    simple = name.split("::")[-1] if "::" in name else name
    if simple in by_simple:
        recs = by_simple[simple]
        if len(recs) == 1:
            return recs[0], "simple"
        return None, "simple_ambiguous(%d)" % len(recs)
    return None, "no_cpp_body"


# ════════════════════════════════════════════════════════════════════
# Phase 3+4 — run gates on a located body
# ════════════════════════════════════════════════════════════════════

def run_b2(rec):
    """B.2: stub detection + body violations. Returns dict."""
    body_lines = rec["body_lines"]
    body_line_nums = rec["body_line_nums"]
    sig_text = rec["sig_text"]
    is_stub, stub_reason = b2._check_stub(body_lines, body_line_nums, sig_text)
    viols = b2._check_body_for_violations(
        body_lines, body_line_nums, body_line_nums[0], sig_text)
    viol_list = [{"line": ln, "category": cat, "detail": det} for (ln, cat, det) in viols]
    passed = (not is_stub) and (len(viol_list) == 0)
    return {
        "applicable": True,
        "pass": passed,
        "is_stub": is_stub,
        "stub_reason": stub_reason if is_stub else None,
        "violations": viol_list,
    }


def run_b5(rec):
    """B.5: per-line regex detection on the body. Returns dict."""
    numbered = list(zip(rec["body_line_nums"], rec["body_lines"]))
    viols = b5.check_lines(numbered)
    viol_list = []
    for (ln, text, desc, match) in viols:
        viol_list.append({"line": ln, "desc": desc, "match": match})
    norm = rec["file"]
    skip_file = any(p in norm for p in _B5_SKIP_DIRS) or \
        any(g in norm.rsplit("/", 1)[-1] for g in _B5_SKIP_GLOBS)
    return {
        "applicable": True,
        "pass": len(viol_list) == 0,
        "violations": viol_list,
        "skip_file": skip_file,
    }


def cache_has(addr_int):
    return (IDA_CACHE_DIR / f"func_0x{addr_int:X}.json").exists()


def run_exec_flow(fn, M, signals, efv_main):
    """exec-flow CFG gate. Only call when cache exists. Returns dict."""
    addr = fn["addr_int"]
    name = fn["name"]
    ida_decomp, cached_name = efv_main.load_ida_cache(addr)
    if not ida_decomp or not ida_decomp.strip():
        return {"applicable": False, "cached": False, "reason": "empty_cache"}
    try:
        passed, info = efv_main.verify_single_function(
            addr, name, name, M, ida_decomp, verbose=False, signals=signals)
    except Exception as exc:  # tool error -> not a translation fail
        return {"applicable": False, "cached": True, "reason": "execflow_error: %s" % exc}

    # If exec-flow never located the C++ source, it returns before computing
    # step3_0 — distinguish that (matcher miss) from a genuine mismatch.
    located = ("step3_0_ok" in info) or info.get("reject")
    if not located:
        return {"applicable": False, "cached": True, "reason": "execflow_no_body"}

    reason = None
    if not passed:
        if info.get("reject"):
            reason = "reject: %s" % info.get("reason")
        elif info.get("step3_0_ok") is False:
            reason = "step3_0_missing: %d external op(s)" % len(info.get("step3_0_missing", []))
        else:
            reason = "structural_mismatch"
    return {
        "applicable": True,
        "cached": True,
        "pass": bool(passed),
        "reason": reason,
    }


# ════════════════════════════════════════════════════════════════════
# Orchestration
# ════════════════════════════════════════════════════════════════════

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--no-exec-flow", action="store_true",
                    help="skip the exec-flow CFG gate (faster)")
    args = ap.parse_args()

    completed = load_completed()
    print(f"Loaded {len(completed)} completed=true functions from signals.json")

    by_addr, by_qual, by_simple, records = build_cpp_index()
    print(f"Indexed {len(records)} cpp function bodies "
          f"({len(by_addr)} with // 0xADDR annotations)")

    # exec-flow setup (once)
    M = None
    ef_signals = None
    efv_main = None
    if not args.no_exec_flow:
        try:
            import verify_execution_flow as efv_main  # noqa: F811
            M = efv_main.load_all_maps()
            ef_signals = efv_main._load_efv()["cpp_events"].get_signals()
            print("exec-flow maps loaded (IDA cache:",
                  len(list(IDA_CACHE_DIR.glob("func_*.json"))), "entries)")
        except Exception as exc:
            print(f"WARNING: exec-flow unavailable ({exc}); skipping that gate",
                  file=sys.stderr)
            efv_main = None

    results = []
    vtype = Counter()
    b2_checked = b2_fail = 0
    b5_checked = b5_fail = 0
    ef_cached = ef_checked = ef_fail = 0
    no_body = 0
    assessable = pass_all = fail_any = 0

    for fn in completed:
        rec, how = match_body(fn, by_addr, by_qual, by_simple)
        entry = {
            "addr": fn["addr_str"],
            "name": fn["name"],
            "call_convention": fn["call_convention"],
            "idempotent": fn["idempotent"],
            "match": how,
        }
        if rec is None:
            entry["body_found"] = False
            entry["reason"] = how
            entry["assessable"] = False
            no_body += 1
            results.append(entry)
            continue

        entry["body_found"] = True
        entry["file"] = rec["file"]
        entry["start_line"] = rec["start_line"]
        entry["assessable"] = True

        # ── B.2 ──
        r2 = run_b2(rec)
        b2_checked += 1
        if not r2["pass"]:
            b2_fail += 1
            if r2["is_stub"]:
                vtype["b2:stub"] += 1
            for v in r2["violations"]:
                vtype[f"b2:{v['category']}"] += 1

        # ── B.5 ──
        r5 = run_b5(rec)
        b5_checked += 1
        if not r5["pass"]:
            b5_fail += 1
            for v in r5["violations"]:
                vtype[f"b5:{v['desc']}"] += 1

        # ── exec-flow ──
        ref = {"applicable": False, "cached": False, "reason": "exec_flow_disabled"}
        if efv_main is not None and cache_has(fn["addr_int"]):
            ef_cached += 1
            ref = run_exec_flow(fn, M, ef_signals, efv_main)
            if ref.get("applicable"):
                ef_checked += 1
                if not ref.get("pass"):
                    ef_fail += 1
                    vtype["exec_flow:mismatch"] += 1
        elif efv_main is not None:
            ref = {"applicable": False, "cached": False, "reason": "no_ida_cache"}

        entry["gates"] = {"b2": r2, "b5": r5, "exec_flow": ref}

        ef_ok = (not ref.get("applicable")) or ref.get("pass")
        overall = r2["pass"] and r5["pass"] and ef_ok
        entry["overall_pass"] = overall
        assessable += 1
        if overall:
            pass_all += 1
        else:
            fail_any += 1
        results.append(entry)

    summary = {
        "total_completed": len(completed),
        "assessable_with_cpp_body": assessable,
        "not_assessable_no_cpp_body": no_body,
        "pass_all_applicable_gates": pass_all,
        "fail_any_gate": fail_any,
        "gates": {
            "b2": {"checked": b2_checked, "pass": b2_checked - b2_fail, "fail": b2_fail},
            "b5": {"checked": b5_checked, "pass": b5_checked - b5_fail, "fail": b5_fail},
            "exec_flow": {
                "cached_completed": ef_cached,
                "checked": ef_checked,
                "pass": ef_checked - ef_fail,
                "fail": ef_fail,
            },
        },
        "violation_type_breakdown": dict(sorted(vtype.items(), key=lambda kv: -kv[1])),
    }

    out = {
        "generated": datetime.datetime.now().isoformat(),
        "source": "signals.json (completed=true)",
        "gates_run": ["B.2", "B.5"] + ([] if efv_main is None else ["exec-flow"]),
        "summary": summary,
        "functions": results,
    }
    OUT_JSON.parent.mkdir(parents=True, exist_ok=True)
    with open(OUT_JSON, "w", encoding="utf-8") as f:
        json.dump(out, f, indent=2, ensure_ascii=False)

    # ── stdout summary ──
    print("\n" + "=" * 64)
    print("COMPLETED-FUNCTION QUALITY AUDIT")
    print("=" * 64)
    print(f"Total completed=true:            {len(completed)}")
    print(f"  with cpp body (assessable):    {assessable}")
    print(f"  no cpp body (skipped):         {no_body}")
    print(f"  PASS all applicable gates:     {pass_all}")
    print(f"  FAIL >=1 gate:                 {fail_any}")
    print("-" * 64)
    print(f"B.2  checked {b2_checked:>4}  pass {b2_checked-b2_fail:>4}  FAIL {b2_fail:>4}")
    print(f"B.5  checked {b5_checked:>4}  pass {b5_checked-b5_fail:>4}  FAIL {b5_fail:>4}")
    print(f"exec checked {ef_checked:>4}  pass {ef_checked-ef_fail:>4}  FAIL {ef_fail:>4}"
          f"   (cached completed: {ef_cached})")
    print("-" * 64)
    print("Violation-type breakdown:")
    for k, v in summary["violation_type_breakdown"].items():
        print(f"  {v:>5}  {k}")
    print("-" * 64)
    fails = [e for e in results if e.get("assessable") and not e.get("overall_pass")]
    fails.sort(key=lambda e: e.get("name", ""))
    print(f"Failing functions ({len(fails)}):")
    for e in fails[:80]:
        gv = e["gates"]
        tags = []
        if not gv["b2"]["pass"]:
            if gv["b2"]["is_stub"]:
                tags.append(f"B2-stub({gv['b2']['stub_reason']})")
            if gv["b2"]["violations"]:
                cats = Counter(v["category"] for v in gv["b2"]["violations"])
                tags.append("B2[" + ",".join(f"{c}x{n}" for c, n in cats.items()) + "]")
        if not gv["b5"]["pass"]:
            cats = Counter(v["desc"] for v in gv["b5"]["violations"])
            tags.append("B5[" + ",".join(f"{c}x{n}" for c, n in cats.items()) + "]")
        ef = gv["exec_flow"]
        if ef.get("applicable") and not ef.get("pass"):
            tags.append(f"EF[{ef.get('reason')}]")
        print(f"  {e['addr']} {e['name']}  @ {e.get('file')}:{e.get('start_line')}")
        print(f"      {' | '.join(tags)}")
    if len(fails) > 80:
        print(f"  ... and {len(fails)-80} more (see {OUT_JSON.relative_to(PROJECT_ROOT)})")
    print("-" * 64)
    print(f"Full report: {OUT_JSON.relative_to(PROJECT_ROOT)}")


if __name__ == "__main__":
    main()
