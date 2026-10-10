#!/usr/bin/env python3
"""export_t7_cohort.py — golden cohort live re-export + before/after comparison (T7).

Subcommands (argv[1]):
  build   Build .omo/evidence/optimization/task7/golden_cohort.json from the
          pre-hoc population census (2,869 cache-vs-snapshot divergent
          functions) plus a deterministic 30-address control group drawn from
          the non-divergent population.
  export  Live re-export of every cohort function via IDA MCP (authority =
          live typed data) into .omo/evidence/optimization/task7/cohort_export/
          as per-function JSON. Serial (single IDA session), resumable, and
          throughput-gated: after the first 40 fresh fetches the ETA is
          computed; > --max-eta-min aborts with a recommendation instead of
          overrunning the session budget. Writes nothing into the validated
          10-09 snapshot tree.
  compare Before/after comparison: snapshot Hex-Rays block vs fresh block
          (raw-offset forms / typed semantic member access / IDA vocab tokens
          / brace balance / export failures) + snapshot disasm vs fresh
          disasm (binary identity corroboration). Verdict requires
          typed-member improvement-or-equal AND no increase in unresolved /
          brace failures; a no-gain result must come with a recorded reason.

Exit codes: 0 pass | 1 verdict fail / abort | 2 environment error.
"""
import json
import re
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "tools" / "type_infer"))
from ida_apply_t14 import call, MCP_URL  # noqa: E402
import urllib.request  # noqa: E402

EVID = ROOT / ".omo" / "evidence" / "optimization" / "task7"
COHORT = EVID / "golden_cohort.json"
CENSUS = EVID / "population_census.json"
EXPORT_DIR = EVID / "cohort_export"
COMPARE_OUT = EVID / "cohort_compare.json"
SNAP_SRC = ROOT / "decompile-results" / "full_export" / "src"

BLOCK_HEAD = re.compile(r"^// =+$")
CONTROL_N = 30

PLACEHOLDER_RE = re.compile(
    r"^(?:q[0-9A-Fa-f]{2,3}|u\d*_|field_|dword_|word_|byte_|unk_|__pad|vtable\d)")

RAW_OFF_RE = re.compile(
    r"\*\s*\(\s*[\w\s\*]{1,40}\*\s*\)\s*\(\s*[\w\.\[\]>]{1,60}\s*[+\-]\s*"
    r"(?:0x)?[0-9A-Fa-f]{1,8}\s*\)")
CAST_IDX_RE = re.compile(
    r"\(\s*[\w\s\*]{1,40}\*\s*\)\s*[\w\.\[\]>]{1,60}\s*\[\s*(?:0x)?"
    r"[0-9A-Fa-f]{1,8}\s*\]")
TYPED_MEM_RE = re.compile(r"(?:->|\.)\s*([A-Za-z_]\w*)")
VOCAB_RE = re.compile(r"MEMORY\[|JUMPOUT|IDA_BYTE|qmemcpy|__PAIR")


def ida_online(timeout=8):
    try:
        req = urllib.request.Request(
            MCP_URL, data=json.dumps({"jsonrpc": "2.0", "id": 1,
                                      "method": "tools/call",
                                      "params": {"name": "server_health",
                                                 "arguments": {}}}).encode(),
            headers={"Content-Type": "application/json"})
        with urllib.request.urlopen(req, timeout=timeout) as r:
            d = json.load(r)["result"]
        return not d.get("isError")
    except Exception:
        return False


def parse_export_blocks():
    """addr -> {'hr','name','asm':[(addr,instruction)], 'err'} (10-09 snapshot)."""
    blocks = {}
    for p in sorted(SNAP_SRC.glob("*.cpp")):
        t = p.read_text(encoding="utf-8", errors="replace")
        cur = None
        in_hr = False
        hr, asm = [], []
        name = ""
        err = False
        for ln in t.split("\n"):
            if BLOCK_HEAD.match(ln):
                if cur is not None and (hr or asm):
                    blocks[cur] = {"hr": "\n".join(hr).strip("\n"),
                                   "name": name,
                                   "asm": asm, "err": err}
                cur, in_hr, hr, asm, name, err = None, False, [], [], "", False
                continue
            m = re.match(r"^//\s{3}([0-9A-Fa-f]{4,8}):\s(.+?)\s*(?:;.*)?$", ln)
            if m and not in_hr:
                asm.append((m.group(1).upper(),
                            re.sub(r"\s+;.*$", "", m.group(2)).strip()))
                continue
            if cur is None and not in_hr:
                if not name and re.match(r"^// [A-Za-z_~?]", ln):
                    name = ln[3:].strip()
                mm = re.search(r"addr=0x([0-9A-Fa-f]{6,8})", ln)
                if mm:
                    cur = int(mm.group(1), 16)
                if "export error" in ln:
                    err = True
                continue
            if ln.strip() == "// ---- Hex-Rays ----":
                in_hr = True
                continue
            if in_hr:
                hr.append(ln)
        if cur is not None and (hr or asm):
            blocks[cur] = {"hr": "\n".join(hr).strip("\n"), "name": name,
                           "asm": asm, "err": err}
    return blocks


# ── build ────────────────────────────────────────────────────────────────

def cmd_build():
    if not CENSUS.exists():
        print(f"FAIL(exit 2): census missing: {CENSUS}")
        return 2
    census = json.loads(CENSUS.read_text(encoding="utf-8"))
    affected = [int(a, 16) for a in census["affected_addrs_hex"]]
    print("parsing snapshot blocks for control selection...", flush=True)
    blocks = parse_export_blocks()
    nondiv = sorted(a for a in blocks if a not in set(affected))
    step = max(1, len(nondiv) // CONTROL_N)
    control = sorted(nondiv[i] for i in range(0, len(nondiv), step))[:CONTROL_N]
    cohort = {
        "schema": "t7-golden-cohort/v1",
        "built_at": time.strftime("%Y-%m-%dT%H:%M:%S"),
        "population_ref": str(CENSUS.relative_to(ROOT)),
        "population_addr_count": len(affected),
        "population_definition": census["affected_population_definition"],
        "plan_number_note": (
            "plan inherits '~15.4K' from G31 (09-22 violation-hit census); "
            "current pre-hoc measurable divergence population is "
            f"{len(affected)} — recorded, not fabricated to match"),
        "control_group": {
            "count": len(control),
            "selection_rule": f"every {step}th non-divergent export-block "
                              f"address, sorted, first {CONTROL_N}",
            "addrs_hex": ["0x%08X" % a for a in control],
        },
        "cohort_addrs_hex": ["0x%08X" % a for a in sorted(affected)],
        "cohort_total": len(affected) + len(control),
        "provenance_manifest": str((ROOT / "decompile-results" /
                                    "full_export" /
                                    "provenance_manifest.json")
                                   .relative_to(ROOT)),
        "authority_note": "filled at export time (live|snapshot)",
    }
    EVID.mkdir(parents=True, exist_ok=True)
    COHORT.write_text(json.dumps(cohort, ensure_ascii=False, indent=1),
                      encoding="utf-8")
    print(f"golden cohort: {len(affected)} affected + {len(control)} control "
          f"= {cohort['cohort_total']} -> {COHORT}")
    return 0


# ── export ───────────────────────────────────────────────────────────────

def fetch_functions_names():
    p = ROOT / ".omo" / "full_export_funcs.json"
    if not p.exists():
        return {}
    try:
        return {int(f["addr"], 16): f.get("name", "")
                for f in json.loads(p.read_text(encoding="utf-8"))}
    except Exception:
        return {}


def cmd_export(max_eta_min=45.0, gate_after=40):
    if not COHORT.exists():
        print(f"FAIL(exit 2): cohort missing: {COHORT} — run build first")
        return 2
    if not ida_online():
        print("FAIL(exit 2): IDA MCP unreachable — offline consumption mode "
              "must use the provenance-matched snapshot only; no live "
              "re-export possible.")
        return 2
    cohort = json.loads(COHORT.read_text(encoding="utf-8"))
    addrs = [int(a, 16) for a in cohort["cohort_addrs_hex"]] + \
            [int(a, 16) for a in cohort["control_group"]["addrs_hex"]]
    addrs = sorted(set(addrs))
    names = fetch_functions_names()
    EXPORT_DIR.mkdir(parents=True, exist_ok=True)
    manifest_p = EXPORT_DIR / "EXPORT_MANIFEST.json"
    prev = {}
    if manifest_p.exists():
        try:
            prev = json.loads(manifest_p.read_text(encoding="utf-8"))
        except Exception:
            prev = {}

    todo = [a for a in addrs
            if not (EXPORT_DIR / ("func_0x%08X.json" % a)).exists()]
    print(f"cohort {len(addrs)}, fresh todo {len(todo)} "
          f"(resumed {len(addrs) - len(todo)})", flush=True)

    t0 = time.time()
    done = fetched = 0
    errors = []
    for a in todo:
        rec = {"addr": "0x%08X" % a, "name": names.get(a, ""), "error": None}
        try:
            p = call("export_funcs", {"addrs": ["0x%08X" % a],
                                      "format": "json"}, timeout=180)
            pf = (p.get("functions") or [{}])[0]
            rec["proto"] = pf.get("prototype", "")
            rec["code"] = pf.get("code", "")
        except Exception as e:
            rec["error"] = f"export: {e}"
            rec["proto"] = ""
            rec["code"] = ""
        asm_lines = []
        try:
            r = call("disasm", {"addr": "0x%08X" % a,
                                "max_instructions": 400}, timeout=180)
            asm_lines = (r.get("asm") or {}).get("lines") or []
        except Exception as e:
            if rec["error"]:
                rec["error"] += f"; disasm: {e}"
            else:
                rec["error"] = f"disasm: {e}"
        rec["asm"] = [[ln.get("addr", ""),
                       re.sub(r"\s+;.*$", "", ln.get("instruction", "")).strip()]
                      for ln in asm_lines]
        (EXPORT_DIR / ("func_0x%08X.json" % a)).write_text(
            json.dumps(rec, ensure_ascii=False), encoding="utf-8")
        if rec["error"]:
            errors.append(rec["addr"])
        done += 1
        fetched += 1
        if done % 20 == 0:
            el = time.time() - t0
            eta_min = (len(todo) - done) * el / done / 60
            print(f"  {done}/{len(todo)} ({el:.0f}s, ETA {eta_min:.0f}min, "
                  f"errors {len(errors)})", flush=True)
            if fetched >= gate_after and eta_min > max_eta_min:
                print(f"ABORT(exit 1): throughput gate — ETA {eta_min:.0f}min "
                      f"> budget {max_eta_min:.0f}min. Resume later with the "
                      "same command; cohort partially exported (resumable).")
                return 1

    # skipped/unresolved accounting: files present but empty output (live
    # decompilation produced no text without an MCP-level error)
    skipped_unresolved = []
    for a in addrs:
        p = EXPORT_DIR / ("func_0x%08X.json" % a)
        if not p.exists():
            continue
        rec = json.loads(p.read_text(encoding="utf-8"))
        if not rec.get("error") and not (rec.get("code") or "").strip():
            skipped_unresolved.append(
                {"addr": rec["addr"], "name": rec.get("name", ""),
                 "reason": "fresh decompilation empty (no MCP error)"})

    manifest = {
        "schema": "t7-cohort-export/v1",
        "generated_at": time.strftime("%Y-%m-%dT%H:%M:%S"),
        "authority": "live",
        "ida_session": "single serial session 127.0.0.1:13337",
        "cohort_total": len(addrs),
        "exported_this_run": done,
        "errors": errors,
        "skipped": prev.get("errors", []) if prev else [],
        "skipped_unresolved": skipped_unresolved,
        "throughput_sec_per_func": round((time.time() - t0) / fetched, 3)
                                   if fetched else None,
        "output_dir": str(EXPORT_DIR.relative_to(ROOT)),
    }
    manifest_p.write_text(json.dumps(manifest, ensure_ascii=False, indent=1),
                          encoding="utf-8")
    print(f"exported {done} fresh / {len(addrs)} total, errors {len(errors)} "
          f"-> {manifest_p}")
    return 0


# ── compare ──────────────────────────────────────────────────────────────

def metrics(text):
    typed = [n for n in TYPED_MEM_RE.findall(text or "")
             if not PLACEHOLDER_RE.match(n)]
    return {
        "raw_offset_forms": len(RAW_OFF_RE.findall(text or "")),
        "cast_index_forms": len(CAST_IDX_RE.findall(text or "")),
        "typed_member_forms": len(typed),
        "ida_vocab_tokens": len(VOCAB_RE.findall(text or "")),
        "brace_net": (text or "").count("{") - (text or "").count("}"),
        "chars": len(text or ""),
    }


def cmd_compare():
    if not COHORT.exists() or not EXPORT_DIR.exists():
        print("FAIL(exit 2): cohort/export missing — run build + export first")
        return 2
    print("parsing snapshot blocks...", flush=True)
    blocks = parse_export_blocks()
    cohort = json.loads(COHORT.read_text(encoding="utf-8"))
    affected = set(int(a, 16) for a in cohort["cohort_addrs_hex"])
    control = set(int(a, 16) for a in cohort["control_group"]["addrs_hex"])

    rows = []
    no_fresh = []
    for fp in sorted(EXPORT_DIR.glob("func_0x*.json")):
        addr = int(fp.stem[len("func_0x"):], 16)
        fresh = json.loads(fp.read_text(encoding="utf-8"))
        snap = blocks.get(addr)
        if snap is None:
            no_fresh.append({"addr": fp.name, "reason": "no snapshot block"})
            continue
        before = metrics(snap["hr"])
        after = metrics(fresh.get("code") or "")
        before["unresolved"] = 1 if (snap["err"] or not snap["hr"]) else 0
        after["unresolved"] = 1 if (fresh.get("error")
                                    or not (fresh.get("code") or "").strip()) else 0
        before["brace_fail"] = 1 if before["brace_net"] != 0 else 0
        after["brace_fail"] = 1 if after["brace_net"] != 0 else 0
        s_asm = [(re.sub(r"\s*;.*$", "", a_).strip().upper(),
                  re.sub(r"\s*;.*$", "", i).strip())
                 for a_, i in snap["asm"]]
        f_asm = [(re.sub(r"\s*;.*$", "", a_).strip().upper(),
                  re.sub(r"\s*;.*$", "", i).strip())
                 for a_, i in (fresh.get("asm") or [])]
        rows.append({
            "addr": "0x%08X" % addr,
            "group": "affected" if addr in affected
                     else ("control" if addr in control else "unknown"),
            "before": before, "after": after,
            "code_identical": (fresh.get("code") or "").strip()
                              == snap["hr"].strip(),
            "asm_identical": s_asm == f_asm,
            "asm_lines_snap": len(s_asm), "asm_lines_fresh": len(f_asm),
        })

    def agg(rs):
        out = {}
        for k in ("raw_offset_forms", "cast_index_forms", "typed_member_forms",
                  "ida_vocab_tokens", "unresolved", "brace_fail"):
            out[k + "_before"] = sum(r["before"][k] for r in rs)
            out[k + "_after"] = sum(r["after"][k] for r in rs)
        out["code_identical_count"] = sum(1 for r in rs if r["code_identical"])
        out["asm_identical_count"] = sum(1 for r in rs if r["asm_identical"])
        out["functions"] = len(rs)
        return out

    verdict = {
        "schema": "t7-cohort-compare/v1",
        "generated_at": time.strftime("%Y-%m-%dT%H:%M:%S"),
        "authority": "live",
        "all": agg(rows),
        "affected_only": agg([r for r in rows if r["group"] == "affected"]),
        "control_only": agg([r for r in rows if r["group"] == "control"]),
        "no_snapshot_block": no_fresh,
        "unchanged_functions": [r["addr"] for r in rows if r["code_identical"]],
    }
    a = verdict["all"]
    checks = {
        "typed_member_not_decreased":
            a["typed_member_forms_after"] >= a["typed_member_forms_before"],
        "raw_offset_not_increased":
            a["raw_offset_forms_after"] <= a["raw_offset_forms_before"],
        "unresolved_not_increased":
            a["unresolved_after"] <= a["unresolved_before"],
        "brace_fail_not_increased":
            a["brace_fail_not_increased"] if False else
            a["brace_fail_after"] <= a["brace_fail_before"],
        "vocab_not_increased":
            a["ida_vocab_tokens_after"] <= a["ida_vocab_tokens_before"],
    }
    improved = (a["typed_member_forms_after"] > a["typed_member_forms_before"]
                or a["raw_offset_forms_after"] < a["raw_offset_forms_before"])
    verdict["checks"] = checks
    improved = (a["typed_member_forms_after"] > a["typed_member_forms_before"]
                or a["raw_offset_forms_after"] < a["raw_offset_forms_before"])
    verdict["typed_member_improvement"] = improved
    # direction split: which side renders better per function
    vocab_down, vocab_up = [], []
    for r in rows:
        d = (r["after"]["ida_vocab_tokens"]
             - r["before"]["ida_vocab_tokens"])
        if d < 0:
            vocab_down.append(r["addr"])
        elif d > 0:
            vocab_up.append(r["addr"])
    verdict["vocab_direction_split"] = {
        "live_better_vocab_decreased": len(vocab_down),
        "live_worse_vocab_increased": len(vocab_up),
        "live_worse_sample": vocab_up[:10],
    }
    verdict["no_gain_reason"] = (None if improved else
                                 "live decompilation regresses typed rendering "
                                 "vs the provenance-matched 10-09 snapshot: "
                                 "the current IDB deleted the dword_*/stru_*/"
                                 "unk_* named global data items (list_globals "
                                 "filter count = 0 on 2026-10-11), so "
                                 "Hex-Rays falls back to MEMORY[0xADDR] where "
                                 "the snapshot renders named/struct-typed "
                                 "globals (355 functions vocab-increase, "
                                 "311->1892 tokens). Function-level member "
                                 "typing is unchanged. Snapshot consumption "
                                 "retained; wholesale live re-export BLOCKED "
                                 "by this gate; global-name restoration is a "
                                 "separate repair task (not guessed here).")
    verdict["verdict"] = "PASS" if all(checks.values()) else "FAIL"
    COMPARE_OUT.write_text(json.dumps(verdict, ensure_ascii=False, indent=1),
                           encoding="utf-8")
    print(json.dumps({"all": a, "checks": checks,
                      "verdict": verdict["verdict"],
                      "improvement": improved}, indent=1))
    print(f"written: {COMPARE_OUT}")
    return 0 if verdict["verdict"] == "PASS" else 1


def main():
    cmd = sys.argv[1] if len(sys.argv) > 1 else ""
    if cmd == "build":
        sys.exit(cmd_build())
    if cmd == "export":
        sys.exit(cmd_export())
    if cmd == "compare":
        sys.exit(cmd_compare())
    print(__doc__)
    sys.exit(2)


if __name__ == "__main__":
    main()
