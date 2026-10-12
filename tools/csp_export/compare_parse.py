#!/usr/bin/env python3
"""compare_parse.py -- REVERSE 对拍账 (plan task 20 / T12).

Separates CODE completion from BEHAVIOR completion and certifies a frozen
Inject/Replace cohort against comparisonResult.log.

Four-section compare 口径 (mirror of gen_reverse_hooks.py flush_full; the
same definitions are embedded machine-readable in the cohort manifest
"rules" block):

  Different  function with >=1 logged call whose RE return != original.
              A function lands here on ANY single mismatch (has_diff).
  Captures   Capture-mode hook records. Input/output observation ONLY --
              no comparison is performed. NEVER counted as Same.
  Same       Inject/Replace hook, >=1 logged call, zero mismatches among
              the LOGGED calls. Coverage is the first <=50 calls per
              function (write_entry drops call n>50), so Same means
              "matched on the sampled calls", not exhaustive verification.
  NoneCalls  marker never invoked in the run (ctr==0). No behavioral
              evidence at all.

Dual-account rules (functions.json-era fields now live in signals.json):

  completed (signals) = CODE-level completeness only. completed=true is
              NEVER read as Same. Historical completed (12,679 at the time
              of writing) carries zero behavioral weight.
  done (signals)      = BEHAVIORAL completion. May only be set on
              cohort members whose log section is Same, after this
              parser certifies the run. Order is fixed:
              compile -> verify(exec-flow) -> compare(runtime) -> complete.
  Captures / NoneCalls / zero-call functions are never Same, no matter
              what metadata says.

Usage:
  python tools/csp_export/compare_parse.py --build-cohort [--out PATH]
      Scan src/ + app/ REVERSE markers with the exact gen_reverse_hooks
      regex, join signals.json + anchors/backfill_manifest.json +
      idempotent_results.json, hash the target binaries, and freeze the
      active Inject/Replace cohort manifest.

  python tools/csp_export/compare_parse.py [--log PATH] [--cohort PATH]
      [--out PATH] [--report-only] [--label STR]
      Parse the four sections, assert every cohort member resolves to
      Same/Different/None, join code/verify/complete records, and exit
      with a verdict. Fail-closed by default.

Exit codes (also in manifest rules block):
  0  CERTIFIED        all four sections parsed; cohort non-empty and fully
                      in Same; every Same member has code+verify+complete
                      records; done-order clean.
  2  MANIFEST/USAGE   cohort manifest missing/corrupt, signals/backfill
                      unreadable, bad arguments.
  3  EVIDENCE-INSUFFICIENT  log missing/empty, section headers missing
                      (truncated), no behavioral sections content (e.g.
                      only Captures and/or NoneCalls), empty cohort
                      (vacuous certification), cohort member zero-call.
  4  COMPARISON-MISMATCH    cohort member in Different (RE != original).
  5  ACCOUNTING-VIOLATION   Same member lacking code/verify/complete
                      record; done=true without Same; log entries outside
                      the manifest population (stale log/manifest);
                      malformed entries.
"""
import argparse
import datetime
import hashlib
import json
import os
import re
import subprocess
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_ROOT = os.path.abspath(os.path.join(SCRIPT_DIR, os.pardir, os.pardir))

SIGNALS = os.path.join(PROJECT_ROOT, "signals.json")
BACKFILL = os.path.join(PROJECT_ROOT, "anchors", "backfill_manifest.json")
IDEM_RESULTS = os.path.join(PROJECT_ROOT, "injectFunctionTest",
                            "idempotent_results.json")
DEFAULT_COHORT = os.path.join(SCRIPT_DIR, "cohort_manifest.json")
DEFAULT_GAME_DIR = os.environ.get("RA2MD_DIR", "D:/RA2MD")
DEFAULT_LOGS = [
    os.path.join(DEFAULT_GAME_DIR, "comparisonResult.log"),
    os.path.join(PROJECT_ROOT, "injectFunctionTest", "comparisonResult.log"),
    os.path.join(PROJECT_ROOT, "comparisonResult.log"),
]

# Byte-for-byte the marker regex gen_reverse_hooks.find_markers uses:
# unquoted third args (e.g. REVERSE(0x52F620, "...", false)) do NOT match
# and are invisible to the generator -- the manifest mirrors that.
MARKER_RE = re.compile(
    r'REVERSE\(\s*(0x[0-9A-Fa-f]+)\s*,\s*"([^"]*)"\s*,\s*"([^"]*)"\s*\)',
    re.I)
MODES = ("None", "Replace", "Inject", "Capture")

SECTION_RE = re.compile(
    r"^=+\s*(Different Compares|Captures|Same Compares|None Calls)\s*=+$")
# Function headers: [sig-0xADDR]. Call sections print the address with no
# padding (os<<hex), the NoneCalls section prints 0x%08X; normalize both.
ENTRY_RE = re.compile(r"^\[(.+)-0x([0-9A-Fa-f]+)\]\s*$")
CALL_RE = re.compile(r"^Call (\d+): (.*?)\(\)<-0x([0-9A-Fa-f]+)")
RET_DIFF_RE = re.compile(r"Return: hook=.*!= original=")
RET_SAME_RE = re.compile(r"Return: hook=original=")

PER_FUNC_CALL_CAP = 50          # write_entry: n>50 dropped
SECTION_ORDER = ["Different", "Captures", "Same", "NoneCalls"]
SECTION_TITLES = {
    "Different": "Different Compares", "Captures": "Captures",
    "Same": "Same Compares", "NoneCalls": "None Calls"}

RULES = {
    "sections": {
        "Different": ("function with >=1 logged call whose RE return != "
                      "original; lands here on ANY single mismatch"),
        "Captures": ("Capture-mode hook records; input/output observation "
                     "only, NO comparison -- never counted as Same"),
        "Same": ("Inject/Replace hook, >=1 logged call, zero mismatches "
                 "among logged calls; coverage = first <=50 calls per "
                 "function (write_entry cap)"),
        "NoneCalls": "marker never invoked in the run; no behavioral evidence",
    },
    "completed_is_not_same": True,
    "done_requires": "cohort member AND log section Same AND this parser exit 0",
    "order": "compile -> verify(exec-flow) -> compare(runtime) -> complete",
    "join_for_same_member": {
        "code_record": "backfill status in {direct, renamed} with body_file",
        "verify_record": ("signals note contains verify PASS, or "
                          "verified_after_reopen=true"),
        "complete_record": "signals completed=true",
    },
    "exit_codes": {"0": "CERTIFIED", "2": "MANIFEST/USAGE",
                   "3": "EVIDENCE-INSUFFICIENT",
                   "4": "COMPARISON-MISMATCH", "5": "ACCOUNTING-VIOLATION"},
}


def utcnow():
    return datetime.datetime.now(datetime.timezone.utc).strftime(
        "%Y-%m-%dT%H:%M:%SZ")


def addr_norm(raw):
    try:
        return "0x%08X" % int(str(raw), 16)
    except (TypeError, ValueError):
        return None


def lookup_by_addr(mapping, a):
    """Address-form tolerant dict lookup: signals/backfill keys are
    minimal lowercase hex ('0x401000'), manifests are 0x%08X; accept
    both directions."""
    if not a:
        return {}
    for k in (a, a.lower(), a.upper()):
        if k in mapping:
            return mapping[k]
    try:
        ai = int(str(a), 16)
    except ValueError:
        return {}
    for k in ("0x%X" % ai, "0x%x" % ai, "0x%08X" % ai, "0x%08x" % ai):
        if k in mapping:
            return mapping[k]
    return {}


def sha256_file(path):
    h = hashlib.sha256()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def describe_binary(path):
    if not path or not os.path.isfile(path):
        return {"path": path, "exists": False}
    st = os.stat(path)
    return {"path": path, "exists": True, "size": st.st_size,
            "sha256": sha256_file(path),
            "mtime_utc": datetime.datetime.fromtimestamp(
                st.st_mtime, datetime.timezone.utc).strftime(
                    "%Y-%m-%dT%H:%M:%SZ")}


def git_head():
    try:
        out = subprocess.run(
            ["git", "rev-parse", "HEAD"], cwd=PROJECT_ROOT,
            capture_output=True, text=True, timeout=15)
        if out.returncode == 0:
            return out.stdout.strip()
    except Exception:
        pass
    return None


def git_dirty_relevant():
    """True when src/, app/ or injectFunctionTest/ differ from HEAD."""
    try:
        out = subprocess.run(
            ["git", "status", "--porcelain", "--", "src", "app",
             "injectFunctionTest"], cwd=PROJECT_ROOT,
            capture_output=True, text=True, timeout=30)
        if out.returncode == 0:
            return bool(out.stdout.strip())
    except Exception:
        pass
    return None


# ---------------------------------------------------------------- markers

def scan_reverse_markers():
    """Mirror gen_reverse_hooks.find_markers scanning (src/ + app/, quoted
    modes only, comment-line markers skipped). Returns (markers,
    invisible) where markers carry normalized modes and invisible holds
    REVERSE( occurrences the generator regex cannot see."""
    markers, invisible = [], []
    seen = {}
    for d in ("src", "app"):
        top = os.path.join(PROJECT_ROOT, d)
        if not os.path.isdir(top):
            continue
        for root, _dirs, files in os.walk(top):
            for fn in files:
                if not fn.endswith((".cpp", ".hpp", ".h")):
                    continue
                fp = os.path.join(root, fn)
                with open(fp, errors="ignore") as f:
                    c = f.read()
                rel = os.path.relpath(fp, PROJECT_ROOT).replace("\\", "/")
                for m in MARKER_RE.finditer(c):
                    addr_raw = m.group(1).lower()
                    mode = m.group(3)
                    if mode not in MODES:
                        mode = "None"        # generator normalization
                    line_no = c[:m.start()].count("\n") + 1
                    ls = c.rfind("\n", 0, m.start()) + 1
                    line = c[ls:m.end()]
                    if line.lstrip().startswith("//"):
                        continue
                    if addr_raw in seen:
                        prev = seen[addr_raw]
                        markers.append({
                            "addr": addr_norm(addr_raw), "mode": mode,
                            "desc": m.group(2), "file": rel,
                            "line": line_no,
                            "error": "duplicate REVERSE(%s) -- already in "
                                     "%s:%d (generator ERRORs on this)"
                                     % (addr_raw, prev[0], prev[1])})
                        continue
                    seen[addr_raw] = (rel, line_no)
                    markers.append({"addr": addr_norm(addr_raw),
                                    "mode": mode, "desc": m.group(2),
                                    "file": rel, "line": line_no})
                # unquoted-mode / malformed REVERSE( occurrences
                for m in re.finditer(
                        r"REVERSE\(\s*(0x[0-9A-Fa-f]+)\s*,", c, re.I):
                    if MARKER_RE.search(c[m.start():m.start() + 400]):
                        continue   # a full quoted marker starts here
                    line_no = c[:m.start()].count("\n") + 1
                    ls = c.rfind("\n", 0, m.start()) + 1
                    if c[ls:m.end()].lstrip().startswith("//"):
                        continue
                    invisible.append({"addr": addr_norm(m.group(1)),
                                      "file": rel, "line": line_no,
                                      "raw": c[ls:c.find("\n", m.start())
                                              ].strip()[:120]})
    return markers, invisible


def load_json(path):
    with open(path, encoding="utf-8") as f:
        return json.load(f)


def resolve_idempotent(sym, idem_auto):
    """Simplified mirror of gen_reverse_hooks.resolve_idempotent priority:
    manual signals value, else auto analysis (TRUE only)."""
    manual = sym.get("idempotent")
    if manual is not None:
        return bool(manual), "manual"
    a = addr_norm(sym.get("address", ""))
    if not a:
        return None, "none"
    bare = a.replace("0x", "", 1).upper().zfill(8)
    for key in (bare, a, a.upper()):
        if key in idem_auto:
            return idem_auto[key] == "TRUE", "auto"
    return None, "none"


def hook_size_via_capstone(addr, exe_path):
    """Mirror gen_reverse_hooks.validate_hook_size (first N insns summing
    to >=5 bytes). Returns int or None."""
    try:
        import capstone
    except ImportError:
        return None
    if not exe_path or not os.path.isfile(exe_path):
        return None
    base = 0x400000
    rva = int(addr, 16) - base
    if rva < 0:
        return None
    import struct
    try:
        with open(exe_path, "rb") as f:
            f.seek(0x3C)
            pe_off = struct.unpack("<I", f.read(4))[0]
            f.seek(pe_off + 6)
            ns = struct.unpack("<H", f.read(2))[0]
            f.seek(pe_off + 0x18 + 0xE0)
            sec = None
            for _ in range(ns):
                sn = f.read(8).rstrip(b"\x00").decode()
                vs = struct.unpack("<I", f.read(4))[0]
                vr = struct.unpack("<I", f.read(4))[0]
                fs = struct.unpack("<I", f.read(4))[0]
                fo = struct.unpack("<I", f.read(4))[0]
                f.seek(12, 1)
                if vr <= rva < vr + vs:
                    sec = {"fo": fo, "vr": vr}
                    break
            if not sec:
                return None
            f.seek(sec["fo"] + (rva - sec["vr"]))
            code = f.read(32)
    except Exception:
        return None
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    total = 0
    for insn in md.disasm(code, int(addr, 16)):
        total += insn.size
        if total >= 5:
            return total
    return total or None


# ------------------------------------------------------- cohort manifest

def build_cohort(out_path, game_dir):
    signals = load_json(SIGNALS)
    syms = signals.get("symbols", {})
    backfill = load_json(BACKFILL)
    idem_auto = load_json(IDEM_RESULTS) if os.path.isfile(IDEM_RESULTS) else {}

    markers, invisible = scan_reverse_markers()
    exe_candidates = [os.path.join(game_dir, "gamemd.exe"),
                      "H:/RA2MD/gamemd.exe"]
    exe_path = next((p for p in exe_candidates if os.path.isfile(p)), None)

    cohort, captures, nones, dup_errors = [], [], [], []
    for m in markers:
        if m.get("error"):
            dup_errors.append(m)
            continue
        a = m["addr"]
        sym = lookup_by_addr(syms, a)
        entry = {
            "addr": a, "mode": m["mode"], "desc": m["desc"],
            "marker_file": m["file"], "marker_line": m["line"],
            "name": sym.get("name") or m["desc"],
            "convention": sym.get("call_convention"),
            "return_type": sym.get("return_type"),
            "params": sym.get("params"),
            "signals": {"completed": sym.get("completed", False),
                        "translated": sym.get("translated", False),
                        "done": sym.get("done", False),
                        "note": sym.get("note")},
        }
        bm = lookup_by_addr(backfill, a)
        entry["backfill"] = ({"status": bm.get("status"),
                              "body_file": bm.get("body_file")}
                             if bm else None)
        if m["mode"] in ("Inject", "Replace"):
            idem, src = resolve_idempotent(
                {"address": a, "idempotent": sym.get("idempotent")},
                idem_auto)
            entry["idempotent"] = idem
            entry["idempotent_source"] = src
            hs = hook_size_via_capstone(a, exe_path)
            entry["hook_size"] = hs
            entry["hook_size_source"] = (
                "capstone:" + exe_path if hs is not None else "unavailable")
            gate_ok = bool(sym.get("completed"))
            entry["generation_gate"] = {
                "requires": "signals completed=true (gen_reverse_hooks "
                            "ERRORs otherwise)", "ok": gate_ok}
            if not gate_ok:
                entry["generation_gate"]["error"] = (
                    "mode=%s but signals.completed=false -- hook DLL cannot "
                    "be generated" % m["mode"])
            cohort.append(entry)
        elif m["mode"] == "Capture":
            captures.append(entry)
        else:
            nones.append({"addr": a, "name": entry["name"],
                          "file": m["file"], "line": m["line"]})

    fn_syms = [s for s in syms.values()
               if isinstance(s, dict) and s.get("kind") == "function"]
    bf_counts = {}
    for e in backfill.values():
        st = e.get("status", "?")
        bf_counts[st] = bf_counts.get(st, 0) + 1

    manifest = {
        "schema": "reverse-cohort/v1",
        "fixture": False,
        "generated_utc": utcnow(),
        "git_head": git_head(),
        "tree_dirty_relevant": git_dirty_relevant(),
        "generator_mirror": {
            "marker_regex": MARKER_RE.pattern,
            "scan_dirs": ["src", "app"],
            "comment_line_markers_skipped": True,
            "unquoted_mode_args_invisible": True,
            "log_sections": SECTION_ORDER,
            "per_function_call_cap": PER_FUNC_CALL_CAP,
        },
        "binaries": {
            "gamemd_exe": describe_binary(exe_path),
            "hook_dll": describe_binary(
                os.path.join(game_dir, "hook_dll.dll")),
            "syringe_exe": describe_binary(
                os.path.join(game_dir, "Syringe.exe")),
            "exe_map": describe_binary(os.path.join(
                PROJECT_ROOT, "decompile-results", "gamemd.exe.map")),
        },
        "counts": {"cohort": len(cohort), "capture_hooks": len(captures),
                   "none_markers": len(nones),
                   "invisible_markers": len(invisible),
                   "duplicate_markers": len(dup_errors)},
        "cohort": cohort,
        "capture_hooks": captures,
        "none_markers": nones,
        "invisible_markers": invisible,
        "duplicate_markers": dup_errors,
        "accounting_snapshot": {
            "signals": {
                "functions": len(fn_syms),
                "completed_true": sum(1 for s in fn_syms if s.get("completed")),
                "translated_true": sum(1 for s in fn_syms if s.get("translated")),
                "done_true": sum(1 for s in fn_syms if s.get("done")),
            },
            "backfill": {"total": len(backfill), "by_status": bf_counts},
        },
        "rules": RULES,
    }
    with open(out_path, "w", encoding="utf-8", newline="\n") as f:
        json.dump(manifest, f, indent=1, ensure_ascii=True)
        f.write("\n")
    return manifest


# ------------------------------------------------------------ log parse

def parse_log(path):
    """Parse the four sections. Returns dict with sections (per-function),
    structural flags and malformed list. Never raises on content; all
    structural problems become flags consumed by certify()."""
    raw = open(path, "rb").read()
    text = raw.decode("utf-8", errors="replace").replace("\r\n", "\n")
    result = {
        "log": path, "bytes": len(raw),
        "sha256": hashlib.sha256(raw).hexdigest(),
        "mtime_utc": (datetime.datetime.fromtimestamp(
            os.stat(path).st_mtime, datetime.timezone.utc)
            .strftime("%Y-%m-%dT%H:%M:%SZ") if os.path.exists(path) else None),
        "sections_found": [],
        "section_order_ok": True,
        "entries": {},          # addr -> entry record
        "malformed": [],
        "empty": not text.strip(),
    }
    if result["empty"]:
        return result

    section = None
    seen_order = []
    cur = None
    for lineno, line in enumerate(text.split("\n"), 1):
        sm = SECTION_RE.match(line.strip())
        if sm:
            title = sm.group(1)
            section = next(k for k, t in SECTION_TITLES.items()
                           if t == title)
            result["sections_found"].append(section)
            seen_order.append(section)
            cur = None
            continue
        if section is None:
            continue
        em = ENTRY_RE.match(line.strip())
        if em:
            sig, addr = em.group(1), addr_norm(em.group(2))
            if addr is None:
                result["malformed"].append(
                    {"line": lineno, "kind": "bad-header",
                     "text": line.strip()[:120]})
                cur = None
                continue
            key = addr
            if key in result["entries"]:
                result["malformed"].append(
                    {"line": lineno, "kind": "duplicate-function",
                     "addr": addr,
                     "first_section": result["entries"][key]["section"],
                     "second_section": section})
            cur = {"addr": addr, "sig": sig, "section": section,
                   "calls": 0, "mismatches": 0, "matches": 0,
                   "capture_returns": 0, "first_mismatch_call": None,
                   "max_call_no": 0}
            result["entries"][key] = cur
            continue
        if cur is None or section == "NoneCalls":
            continue
        cm = CALL_RE.match(line)
        if cm:
            cur["calls"] += 1
            cur["max_call_no"] = max(cur["max_call_no"], int(cm.group(1)))
            continue
        if RET_DIFF_RE.search(line):
            cur["mismatches"] += 1
            if cur["first_mismatch_call"] is None:
                cur["first_mismatch_call"] = cur["max_call_no"]
        elif RET_SAME_RE.search(line):
            cur["matches"] += 1
        elif "Return:" in line and "hook=" not in line:
            cur["capture_returns"] += 1

    order = [s for s in SECTION_ORDER if s in seen_order]
    if seen_order != order:
        result["section_order_ok"] = False
    # per-writer invariants: writer partitions hooked functions by
    # has_diff / is_cap; a "Same" entry with mismatch lines, an entry
    # with a header but zero Call lines, or Return lines not matching
    # the Call count are impossible output.
    for e in result["entries"].values():
        e["capped_50"] = e["max_call_no"] >= PER_FUNC_CALL_CAP
        if e["section"] == "Same" and e["mismatches"]:
            result["malformed"].append(
                {"kind": "same-with-mismatch", "addr": e["addr"]})
        if e["section"] != "NoneCalls" and e["calls"] == 0:
            result["malformed"].append(
                {"kind": "entry-without-calls", "addr": e["addr"],
                 "section": e["section"]})
        if e["section"] in ("Same", "Different") and \
                e["matches"] + e["mismatches"] != e["calls"]:
            result["malformed"].append(
                {"kind": "return-count-mismatch", "addr": e["addr"],
                 "section": e["section"], "calls": e["calls"],
                 "returns": e["matches"] + e["mismatches"]})
        if e["section"] == "Captures" and \
                e["capture_returns"] != e["calls"]:
            result["malformed"].append(
                {"kind": "capture-return-count-mismatch", "addr": e["addr"],
                 "calls": e["calls"],
                 "returns": e["capture_returns"]})
    return result


# ------------------------------------------------------------- certify

def section_counts(parsed):
    counts = {s: 0 for s in SECTION_ORDER}
    for e in parsed["entries"].values():
        counts[e["section"]] += 1
    return counts


def verify_record_ok(sym):
    note = (sym.get("note") or "")
    if sym.get("verified_after_reopen"):
        return True, "verified_after_reopen"
    low = note.lower()
    if "verify" in low and "pass" in low:
        return True, "note:verify-pass"
    return False, None


def certify(manifest, parsed, signals, backfill, report_only, label):
    syms = signals.get("symbols", {})
    cohort = manifest.get("cohort", [])
    population = {}
    for key, sec_name in (("cohort", "cohort"), ("capture_hooks", "capture"),
                          ("none_markers", "none")):
        for e in manifest.get(key, []):
            population[addr_norm(e.get("addr")) or e.get("addr")] = sec_name

    counts = section_counts(parsed)
    entries = parsed["entries"]
    account = {
        "label": label,
        "generated_utc": utcnow(),
        "report_only": report_only,
        "log": {k: parsed[k] for k in
                ("log", "bytes", "sha256", "mtime_utc", "empty",
                 "sections_found", "section_order_ok", "malformed")},
        "cohort_manifest": {
            "path": manifest.get("_path"),
            "git_head": manifest.get("git_head"),
            "generated_utc": manifest.get("generated_utc"),
            "fixture": manifest.get("fixture", False),
            "counts": manifest.get("counts"),
            "binaries": manifest.get("binaries"),
        },
        "sections": {s: {"count": counts[s]} for s in SECTION_ORDER},
        "coverage_note": ("Same/Different reflect at most the first %d "
                          "calls per function (write_entry cap); calls "
                          "beyond the cap are never logged"
                          % PER_FUNC_CALL_CAP),
        "cohort_account": {},
        "unknown_log_entries": [],
        "join_summary": {},
        "violations": [],
        "errors": [],
    }

    def violation(code, rule, addr=None, detail=""):
        account["violations"].append(
            {"code": code, "rule": rule, "addr": addr, "detail": detail})

    # unknown entries (outside manifest population)
    for a, e in sorted(entries.items()):
        if a not in population:
            account["unknown_log_entries"].append({"addr": a, "sig": e["sig"],
                                                   "section": e["section"]})

    # per-cohort-member assertion
    for m in cohort:
        a = addr_norm(m.get("addr")) or m.get("addr")
        sym = lookup_by_addr(syms, a)
        e = entries.get(a)
        sec = e["section"] if e else "Missing"
        rec = {
            "addr": a, "name": m.get("name"), "mode": m.get("mode"),
            "section": sec, "calls": e["calls"] if e else 0,
            "mismatches": e["mismatches"] if e else 0,
            "capped_50": e["capped_50"] if e else False,
            "signals_completed": m.get("signals", {}).get("completed"),
            "signals_done": m.get("signals", {}).get("done"),
            "backfill_status": (m.get("backfill") or {}).get("status"),
        }
        if sec == "Same":
            # code record: live backfill status is authoritative; the
            # frozen manifest copy is the fallback if the tree moved on
            live_bm = lookup_by_addr(backfill, a)
            bm_rec = live_bm or (m.get("backfill") or {})
            rec["backfill_status"] = bm_rec.get("status")
            j_code = (bm_rec.get("status") in ("direct", "renamed")
                      and bool(bm_rec.get("body_file")))
            j_verify, j_verify_src = verify_record_ok(m.get("signals", {}))
            # completed may have flipped since the manifest froze; use the
            # live signals value for the complete record
            j_complete = bool(sym.get("completed"))
            rec["join"] = {"code_record": j_code, "verify_record": j_verify,
                           "verify_record_source": j_verify_src,
                           "complete_record": j_complete,
                           "signals_translated": sym.get("translated"),
                           "signals_done_live": sym.get("done", False)}
            rec["done_eligible"] = bool(
                j_code and j_verify and j_complete
                and not sym.get("done", False))
        account["cohort_account"][a] = rec

    ca = account["cohort_account"]
    account["join_summary"] = {
        "cohort_total": len(cohort),
        "same": sum(1 for r in ca.values() if r["section"] == "Same"),
        "different": sum(1 for r in ca.values() if r["section"] == "Different"),
        "nonecalls": sum(1 for r in ca.values() if r["section"] == "NoneCalls"),
        "missing": sum(1 for r in ca.values() if r["section"] == "Missing"),
    }

    if report_only:
        # structural problems still fail: an unreadable or headerless
        # log must never be reported as a parse success
        if parsed["empty"]:
            account["errors"].append("log file is empty")
            account["verdict"] = "REJECTED(EVIDENCE-INSUFFICIENT)"
            return account, 3
        missing_headers = [s for s in SECTION_ORDER
                           if s not in parsed["sections_found"]]
        if missing_headers:
            account["errors"].append(
                "log truncated: missing section header(s): %s"
                % ", ".join(SECTION_TITLES[s] for s in missing_headers))
            account["verdict"] = "REJECTED(EVIDENCE-INSUFFICIENT)"
            return account, 3
        account["verdict"] = "REPORT-ONLY (no assertions)"
        return account, 0

    # ---- structural / evidence gate (exit 3) -------------------------
    if parsed["empty"]:
        account["errors"].append("log file is empty")
        return account, 3
    missing_headers = [s for s in SECTION_ORDER
                       if s not in parsed["sections_found"]]
    if missing_headers:
        account["errors"].append(
            "log truncated: missing section header(s): %s"
            % ", ".join(SECTION_TITLES[s] for s in missing_headers))
        return account, 3
    if not parsed["section_order_ok"]:
        account["errors"].append("section headers out of writer order")
        return account, 3
    if parsed["malformed"]:
        account["errors"].append("%d malformed entr(y/ies)" %
                                 len(parsed["malformed"]))
    if not cohort:
        account["errors"].append(
            "cohort manifest has ZERO active Inject/Replace hooks -- a "
            "certified run is vacuous; add REVERSE(...,\"Inject\") markers "
            "first (see docs: comparison workflow)")
        return account, 3
    behavioral = counts["Different"] + counts["Same"]
    if behavioral == 0 and (counts["Captures"] or counts["NoneCalls"]):
        account["errors"].append(
            "evidence insufficient: log contains only Captures/NoneCalls "
            "(%d captures, %d none) -- no Inject/Replace comparison "
            "happened" % (counts["Captures"], counts["NoneCalls"]))
        return account, 3

    # ---- cohort resolution -------------------------------------------
    exit_code = 0
    for a, r in sorted(ca.items()):
        e = entries.get(a)
        if r["section"] == "Different":
            violation(4, "cohort-member-different", a,
                      "%d mismatched call(s)%s"
                      % (r["mismatches"],
                         ", first at call %s" % e["first_mismatch_call"]
                         if e and e.get("first_mismatch_call") else ""))
        elif r["section"] == "NoneCalls":
            violation(3, "cohort-member-zero-call", a,
                      "hook never invoked in this run")
        elif r["section"] == "Missing":
            violation(5, "cohort-member-missing-from-log", a,
                      "log predates the hook or stale log")
        elif r["section"] == "Captures":
            violation(5, "cohort-member-in-captures", a,
                      "Inject/Replace manifest member logged as Capture -- "
                      "manifest/log binary mismatch")
        elif r["section"] == "Same":
            j = r.get("join", {})
            if not j.get("complete_record"):
                violation(5, "same-without-complete-record", a,
                          "signals.completed=false for a Same cohort member")
            if not j.get("code_record"):
                violation(5, "same-without-code-record", a,
                          "backfill status=%r lacks an in-tree body"
                          % r.get("backfill_status"))
            if not j.get("verify_record"):
                violation(5, "same-without-verify-record", a,
                          "no exec-flow verify PASS record (note/"
                          "verified_after_reopen) -- order compile->verify->"
                          "compare->complete violated")
            if r.get("signals_done_live"):
                pass  # already done; fine as long as section is Same
    # unknown log entries = stale log or stale manifest
    if account["unknown_log_entries"]:
        violation(5, "log-entries-outside-manifest", None,
                  "%d entr(y/ies) at addresses absent from the frozen "
                  "manifest population" % len(account["unknown_log_entries"]))
    # done-order violations across the whole Same section
    for a, e in sorted(entries.items()):
        if e["section"] != "Same":
            continue
        sym = lookup_by_addr(syms, a)
        if sym.get("done") and a not in ca:
            violation(5, "done-without-cohort", a,
                      "signals.done=true but function is not a cohort "
                      "member -- done may only be set on active Inject/"
                      "Replace Same members")
    # malformed -> accounting violation
    for mm in parsed["malformed"]:
        violation(5, "malformed-entry", mm.get("addr"), mm.get("kind"))

    if any(v["code"] == 3 for v in account["violations"]):
        exit_code = 3
    if any(v["code"] == 4 for v in account["violations"]):
        exit_code = 4
    if any(v["code"] == 5 for v in account["violations"]):
        exit_code = 5
    if account["errors"] and exit_code == 0:
        exit_code = 5
    account["verdict"] = ("CERTIFIED" if exit_code == 0 else
                          "REJECTED(%s)" % RULES["exit_codes"][str(exit_code)])
    return account, exit_code


# ---------------------------------------------------------------- main

def main(argv=None):
    ap = argparse.ArgumentParser(
        description="REVERSE comparison accounting (T12): four-section "
                    "comparisonResult.log parse + frozen cohort "
                    "certification. Fail-closed.")
    ap.add_argument("--build-cohort", action="store_true",
                    help="scan REVERSE markers and freeze the cohort "
                         "manifest instead of parsing a log")
    ap.add_argument("--out", help="write the JSON account/manifest here")
    ap.add_argument("--log",
                    help="comparisonResult.log path (default: first "
                         "existing of %s)" % " > ".join(DEFAULT_LOGS))
    ap.add_argument("--cohort", default=DEFAULT_COHORT,
                    help="frozen cohort manifest (default %(default)s)")
    ap.add_argument("--game-dir", default=DEFAULT_GAME_DIR,
                    help="game directory for EXE/DLL hashing "
                         "(default %(default)s)")
    ap.add_argument("--report-only", action="store_true",
                    help="emit the four-section census without cohort "
                         "assertions (still fails on unreadable/"
                         "headerless logs)")
    ap.add_argument("--label", default="run",
                    help="label recorded in the account JSON")
    args = ap.parse_args(argv)

    if args.build_cohort:
        out = args.out or DEFAULT_COHORT
        manifest = build_cohort(out, args.game_dir)
        gate_bad = [e for e in manifest["cohort"]
                    if not e["generation_gate"]["ok"]]
        summary = {
            "ok": not gate_bad and not manifest["duplicate_markers"],
            "built": out, "git_head": manifest["git_head"],
            "generated_utc": manifest["generated_utc"],
            "counts": manifest["counts"],
            "binaries": {k: v.get("sha256")
                         for k, v in manifest["binaries"].items()},
            "generation_gate_violations": [
                e["addr"] for e in gate_bad],
            "duplicate_markers": [
                d["addr"] for d in manifest["duplicate_markers"]],
            "accounting_snapshot": manifest["accounting_snapshot"],
        }
        print(json.dumps(summary, indent=1, ensure_ascii=True))
        return 0 if summary["ok"] else 2

    # ---- parse mode
    log_path = args.log
    if not log_path:
        log_path = next((p for p in DEFAULT_LOGS if os.path.isfile(p)), None)
    if not log_path or not os.path.isfile(log_path):
        account = {"label": args.label, "ok": False,
                   "errors": ["comparisonResult.log not found (tried: %s)"
                              % ", ".join(args.log and [args.log]
                                          or DEFAULT_LOGS)],
                   "verdict": "REJECTED(EVIDENCE-INSUFFICIENT)"}
        _emit(account, args.out)
        return 3
    if not os.path.isfile(args.cohort):
        account = {"label": args.label, "ok": False,
                   "errors": ["cohort manifest not found: %s -- run with "
                              "--build-cohort first" % args.cohort],
                   "verdict": "REJECTED(MANIFEST/USAGE)"}
        _emit(account, args.out)
        return 2
    try:
        manifest = load_json(args.cohort)
        manifest["_path"] = os.path.abspath(args.cohort)
        if manifest.get("schema") != "reverse-cohort/v1":
            raise ValueError("schema mismatch: %r" % manifest.get("schema"))
        signals = load_json(SIGNALS)
        backfill = load_json(BACKFILL)
        parsed = parse_log(log_path)
    except (OSError, ValueError, json.JSONDecodeError) as exc:
        account = {"label": args.label, "ok": False,
                   "errors": ["manifest/metadata load failed: %s" % exc],
                   "verdict": "REJECTED(MANIFEST/USAGE)"}
        _emit(account, args.out)
        return 2

    account, code = certify(manifest, parsed, signals, backfill,
                            args.report_only, args.label)
    account["ok"] = code == 0
    _emit(account, args.out)
    return code


def _emit(payload, out_path=None):
    text = json.dumps(payload, indent=1, ensure_ascii=True)
    print(text)
    if out_path and out_path != "-":
        os.makedirs(os.path.dirname(os.path.abspath(out_path)), exist_ok=True)
        with open(out_path, "w", encoding="utf-8", newline="\n") as f:
            f.write(text + "\n")


if __name__ == "__main__":
    sys.exit(main())
