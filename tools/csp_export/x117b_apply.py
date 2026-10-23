#!/usr/bin/env python3
"""X117B -- batched application + measurement of the X117 CSP->declaration join.

The X117 report (`anchors/x117_locals_join.json`, produced by
`tools/csp_export/x117_join_locals.py --report`) lists every generic local
declaration whose SSA value CSP resolved (`int v5` -> `Foo *v5`,
`unsigned int v3` -> `int v3`).  This driver applies those retypes in
measured batches and records the per-batch effect, using the same clang-cl
surface as `tools/x105_uncapped.py` (`-fsyntax-only -ferror-limit=0`).

Modes
-----
    python tools/csp_export/x117b_apply.py --plan
    python tools/csp_export/x117b_apply.py --apply-batch B03
    python tools/csp_export/x117b_apply.py --measure-pre  B03
    python tools/csp_export/x117b_apply.py --measure-post B03
    python tools/csp_export/x117b_apply.py --rollback B03
    python tools/csp_export/x117b_apply.py --ledger

Every applied batch keeps a byte copy of each touched TU under
`.omo/x117b/keep/<batch>/`; a rollback restores exactly those files.
Only type tokens of *size-preserving* declarations are rewritten: the
replacement text comes from the X117 artifact, through libclang byte spans
(`x117_join_locals.ast_retype`), never by regex substitution.
"""
import argparse
import json
import re
import shutil
import subprocess
import sys
import time
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "tools"))
sys.path.insert(0, str(ROOT / "tools" / "csp_export"))

import x105_uncapped as x105          # noqa: E402  (shared clang surface)
import x117_join_locals as x117       # noqa: E402  (byte-span retype engine)

ART = ROOT / "anchors" / "x117_locals_join.json"
WORK = ROOT / ".omo" / "x117b"
PLAN = WORK / "plan.json"
STATE = WORK / "state.json"
CAND_JSON = WORK / "candidates.json"

BAD_KEYS = ("dot", "subscript", "arith", "incdec", "cast-int", "other")
# phrases counted separately on the per-TU diagnostics
PHRASES = {
    "no-member": "no member named",
    "member-base": "member reference base type",
    "cannot-convert": "cannot convert",
    "cannot-initialize": "cannot initialize",
    "no-matching-function": "no matching function",
    "no-matching-constructor": "no matching constructor",
    "too-many-args": "too many arguments",
    "too-few-args": "too few arguments",
    "undeclared": "use of undeclared identifier",
    "unknown-type": "unknown type name",
    "invalid-operands": "invalid operands",
    "incompatible": "incompatible",
}


# ------------------------------------------------------------------ plan
def load_candidates():
    art = json.load(open(ART, encoding="utf-8"))
    rows = []
    for fa in sorted(art["functions"]):
        fn = art["functions"][fa]
        for name in sorted(fn["lvars"]):
            info = fn["lvars"][name]
            if info.get("action") != "retype":
                continue
            st = info.get("use_stats") or {}
            bad = sum(st.get(k, 0) for k in BAD_KEYS)
            rows.append({
                "fa": fa, "func": fn["name"], "file": fn["file"],
                "line": info["line"], "name": name,
                "old": info["decl_type"], "new": info["new_type"],
                "reason": info["reason"], "safe": bool(info.get("use_safe")),
                "arrow": st.get("arrow", 0), "bad": bad,
                "stats": st,
            })
    return rows


def _pack_by_file(rows, cap):
    """Pack whole files (ordered by name) into batches of <= cap entries."""
    by_file = defaultdict(list)
    for r in rows:
        by_file[r["file"]].append(r)
    batches, cur, n = [], [], 0
    for f in sorted(by_file):
        grp = by_file[f]
        if cur and n + len(grp) > cap:
            batches.append(cur)
            cur, n = [], 0
        # a single oversized file is split at cap
        if len(grp) > cap:
            if cur:
                batches.append(cur)
                cur, n = [], 0
            for i in range(0, len(grp), cap):
                batches.append(grp[i:i + cap])
            continue
        cur.extend(grp)
        n += len(grp)
    if cur:
        batches.append(cur)
    return batches


def build_plan(cap):
    cands = load_candidates()
    WORK.mkdir(parents=True, exist_ok=True)
    CAND_JSON.write_text(json.dumps(cands, indent=0), encoding="utf-8")

    int_rows = [r for r in cands if r["reason"] == "int->int"]
    ptr_rows = [r for r in cands if r["reason"] == "int->class*"]

    groups = [
        ("A", "int->int", int_rows),
        ("B", "ptr-safe", [r for r in ptr_rows if r["safe"]]),
        ("C", "ptr-arrow-clean",
         [r for r in ptr_rows if not r["safe"] and r["arrow"] > 0 and r["bad"] == 0]),
        ("D", "ptr-arrow-mixed",
         [r for r in ptr_rows if not r["safe"] and r["arrow"] > 0 and r["bad"] > 0]),
        ("E", "ptr-arrow-zero",
         [r for r in ptr_rows if r["arrow"] == 0]),
    ]
    batches = []
    for tag, label, rows in groups:
        chunks = _pack_by_file(rows, cap)
        for i, chunk in enumerate(chunks, 1):
            files = sorted({r["file"] for r in chunk})
            batches.append({
                "id": "%s%02d" % (tag, i),
                "label": label,
                "kind": "int->int" if tag == "A" else "int->class*",
                "entries": chunk,
                "files": files,
                "n": len(chunk),
            })
    plan = {
        "generated": time.strftime("%Y-%m-%dT%H:%M:%S"),
        "artifact": str(ART.relative_to(ROOT)).replace("\\", "/"),
        "cap": cap,
        "total_candidates": len(cands),
        "batches": batches,
    }
    PLAN.write_text(json.dumps(plan, indent=1), encoding="utf-8")
    print("plan: %d candidates in %d batches -> %s" %
          (len(cands), len(batches), PLAN))
    for b in batches:
        print("  %-4s %-16s %5d decls  %3d files" %
              (b["id"], b["label"], b["n"], len(b["files"])))
    return plan


def get_batch(plan, bid):
    for b in plan["batches"]:
        if b["id"] == bid:
            return b
    sys.exit("unknown batch %r" % bid)


def build_subset(old_id, new_id, files, picks=None):
    """Append a pruned copy of `old_id` restricted to `files` / `picks`."""
    plan = json.load(open(PLAN, encoding="utf-8"))
    ob = get_batch(plan, old_id)
    keep = {f.strip() for f in files if f.strip()}
    if picks:
        sel = {tuple(p.split(":", 1)) for p in picks}
        entries = [e for e in ob["entries"] if (e["fa"], e["name"]) in sel]
    else:
        entries = [e for e in ob["entries"] if e["file"] in keep]
    if not entries:
        sys.exit("subset %s: no entries selected" % new_id)
    nb = {
        "id": new_id,
        "label": ob["label"] + "-pruned",
        "kind": ob["kind"],
        "entries": entries,
        "files": sorted({e["file"] for e in entries}),
        "n": len(entries),
        "pruned_from": old_id,
    }
    plan["batches"] = [b for b in plan["batches"] if b["id"] != new_id]
    plan["batches"].append(nb)
    PLAN.write_text(json.dumps(plan, indent=1), encoding="utf-8")
    print("subset %s <- %s: %d/%d decls in %d files" %
          (new_id, old_id, len(entries), ob["n"], len(nb["files"])))


# ------------------------------------------------------------------ state
def load_state():
    if STATE.exists():
        return json.load(open(STATE, encoding="utf-8"))
    return {"applied": [], "rolled_back": [], "touched_files": []}


def save_state(st):
    st["touched_files"] = sorted(set(st["touched_files"]))
    STATE.write_text(json.dumps(st, indent=1), encoding="utf-8")


def _rel(p):
    return str(Path(p).resolve().relative_to(ROOT)).replace("\\", "/")


def _backup(files, bid):
    keep = WORK / "keep" / bid
    saved = []
    for f in files:
        src = ROOT / f
        dst = keep / f
        dst.parent.mkdir(parents=True, exist_ok=True)
        if not dst.exists():
            shutil.copy2(src, dst)
        saved.append(f)
    return saved


def rollback(bid):
    keep = WORK / "keep" / bid
    if not keep.exists():
        sys.exit("no backup for batch %r" % bid)
    files = [str(p.relative_to(keep)).replace("\\", "/")
             for p in keep.rglob("*") if p.is_file()]
    for f in files:
        shutil.copy2(keep / f, ROOT / f)
    print("rollback %s: restored %d files" % (bid, len(files)))
    st = load_state()
    st["rolled_back"] = sorted(set(st["rolled_back"] + [bid]))
    if bid in st["applied"]:
        st["applied"].remove(bid)
    save_state(st)
    return files


# ------------------------------------------------------------------ apply
def apply_batch(bid):
    plan = json.load(open(PLAN, encoding="utf-8"))
    b = get_batch(plan, bid)
    edits = defaultdict(dict)
    for e in b["entries"]:
        p = ROOT / e["file"]
        if e["reason"] == "int->class*":
            # a class retype is only legal when the target class is visible
            # in this TU; member access additionally needs the definition.
            spec = {"new": e["new"],
                    "vis": "complete" if e["arrow"] > 0 else "declared"}
        else:
            spec = e["new"]
        edits[p][(e["line"], e["name"])] = spec
    files = sorted(_rel(p) for p in edits)
    st = load_state()
    if bid in st["applied"]:
        print("batch %s already applied; skipping" % bid)
        return
    _backup(files, bid)
    t0 = time.time()
    applied, missed = x117.ast_retype(dict(edits), dry_run=False, jobs=8,
                                      check_visibility=True)
    dt = time.time() - t0
    miss_kinds = Counter(m[3].split(":")[0] for m in missed)
    rec = {
        "batch": bid, "label": b["label"], "kind": b["kind"],
        "candidates": b["n"], "files": len(files),
        "applied": applied, "missed": len(missed),
        "missed_kinds": dict(miss_kinds), "missed_rows": missed[:80],
        "wall_s": round(dt, 1),
        "timestamp": time.strftime("%Y-%m-%dT%H:%M:%S"),
    }
    (WORK / ("applied_%s.json" % bid)).write_text(
        json.dumps(rec, indent=1), encoding="utf-8")
    print("applied %s: %d/%d edits in %d files (%.1fs), missed %d %s" %
          (bid, applied, b["n"], len(files), dt, len(missed),
           dict(miss_kinds)))
    for m in missed[:10]:
        print("  missed:", m)
    st["applied"] = sorted(set(st["applied"] + [bid]))
    st["touched_files"] = sorted(set(st["touched_files"] + files))
    save_state(st)
    return rec


# ------------------------------------------------------------------ measure
VIS_ERR = re.compile(
    r"error: (?:unknown type name|incomplete type|"
    r"member access into incomplete type) '([A-Za-z_][\w:]*)'")


def prune_bad_types(bid, jobs, timeout):
    """Revert retypes whose target class is not visible at the decl location.

    The X117 visibility gate is spelling/definition based and therefore
    namespace-blind (`gamemd::Foo` seen from `ra2::game` compiles as an
    unknown type name).  clang itself is the authority: compile the touched
    TUs, and for every type-visibility diagnostic on a line we just retyped,
    put the original integer spelling back.  Repeats up to 3 rounds.
    """
    plan = json.load(open(PLAN, encoding="utf-8"))
    b = get_batch(plan, bid)
    rec_p = WORK / ("applied_%s.json" % bid)
    if not rec_p.exists():
        sys.exit("batch %s not applied" % bid)
    rec = json.load(open(rec_p, encoding="utf-8"))
    missed = {(m[0].replace("\\", "/"), int(m[1]), m[2])
              for m in rec.get("missed_rows", [])
              if len(m) >= 3 and isinstance(m[1], int)}
    todo = defaultdict(list)
    for e in b["entries"]:
        key = (str(ROOT / e["file"]).replace("\\", "/"), e["line"], e["name"])
        alt = (e["file"], e["line"], e["name"])
        if key in missed or alt in missed:
            continue
        todo[e["file"]].append(e)
    rows = []
    files = sorted(todo)
    env = x105.vcvars_env()
    from concurrent.futures import ThreadPoolExecutor, as_completed
    for rnd in range(3):
        if not files:
            break
        bad = {}
        with ThreadPoolExecutor(max_workers=jobs) as ex:
            futs = {ex.submit(_run_tu, f, env, timeout,
                              "prune%d_%s" % (rnd + 1, bid)): f for f in files}
            for fut in as_completed(futs):
                r = fut.result()
                by_line = {e["line"]: e for e in todo[r["tu"]]}
                text = (WORK / "clang" / ("prune%d_%s" % (rnd + 1, bid)) /
                        (r["tu"].replace("/", "__") + ".log")).read_text(
                            encoding="utf-8", errors="replace")
                for line in text.splitlines():
                    m = x105.ERR_RE.match(line)
                    if not m:
                        continue
                    f, ln, msg = m.group(1), int(m.group(2)), m.group(4)
                    if x105.classify_loc(f, r["tu"]) != "own":
                        continue
                    e = by_line.get(ln)
                    if not e:
                        continue
                    vm = VIS_ERR.search("error: " + msg)
                    if not vm:
                        continue
                    bad[(e["file"], e["line"], e["name"])] = {
                        "file": e["file"], "line": e["line"], "name": e["name"],
                        "new": e["new"], "old": e["old"],
                        "diag": msg, "type": vm.group(1)}
        if not bad:
            print("prune %s round %d: no visibility diagnostics" % (bid, rnd + 1))
            break
        edits = defaultdict(dict)
        for (_f, _l, _n), r in bad.items():
            edits[ROOT / r["file"]][(r["line"], r["name"])] = r["old"]
        applied, missed2 = x117.ast_retype(dict(edits), dry_run=False, jobs=8)
        print("prune %s round %d: reverting %d retypes (%d edits)" %
              (bid, rnd + 1, len(bad), applied))
        rows.extend(bad.values())
        for r in bad.values():
            todo[r["file"]] = [e for e in todo[r["file"]]
                               if e["name"] != r["name"] or e["line"] != r["line"]]
        files = sorted(f for f in todo if todo[f])
    out = WORK / ("prune_%s.json" % bid)
    out.write_text(json.dumps(rows, indent=1), encoding="utf-8")
    print("prune %s: %d retypes reverted -> %s" % (bid, len(rows), out))
    return rows


def apply_entries(picks, tag):
    """Re-apply selected (FUNC:VAR) entries with the visibility gate."""
    plan = json.load(open(PLAN, encoding="utf-8"))
    sel = {tuple(p.split(":", 1)) for p in picks if p.strip()}
    edits = defaultdict(dict)
    rows = []
    for b in plan["batches"]:
        for e in b["entries"]:
            if (e["fa"], e["name"]) not in sel:
                continue
            key = (e["line"], e["name"])
            if key in edits[ROOT / e["file"]]:
                continue
            spec = ({"new": e["new"],
                     "vis": "complete" if e["arrow"] > 0 else "declared"}
                    if e["reason"] == "int->class*" else e["new"])
            edits[ROOT / e["file"]][key] = spec
            rows.append({"batch": b["id"], "fa": e["fa"], "file": e["file"],
                         "line": e["line"], "name": e["name"], "new": e["new"]})
    if not edits:
        sys.exit("apply-entries: no matches")
    applied, missed = x117.ast_retype(dict(edits), dry_run=False, jobs=8,
                                      check_visibility=True)
    out = WORK / ("reapply_%s.json" % tag)
    out.write_text(json.dumps({"rows": rows, "applied": applied,
                              "missed": missed}, indent=1), encoding="utf-8")
    print("reapply %s: %d rows, %d edits applied, %d missed -> %s" %
          (tag, len(rows), applied, len(missed), out))
    for m in missed[:10]:
        print("  missed:", m)


def revert_entries(picks, tag):
    """Revert selected applied retypes (FUNC:VAR) to their original type."""
    plan = json.load(open(PLAN, encoding="utf-8"))
    sel = {tuple(p.split(":", 1)) for p in picks if p.strip()}
    edits = defaultdict(dict)
    rows = []
    for b in plan["batches"]:
        for e in b["entries"]:
            if (e["fa"], e["name"]) not in sel:
                continue
            edits[ROOT / e["file"]][(e["line"], e["name"])] = e["old"]
            rows.append({"batch": b["id"], "fa": e["fa"], "file": e["file"],
                         "line": e["line"], "name": e["name"],
                         "old": e["old"], "new": e["new"]})
    if not edits:
        sys.exit("revert-entries: no matches")
    applied, missed = x117.ast_retype(dict(edits), dry_run=False, jobs=8)
    out = WORK / ("revert_%s.json" % tag)
    out.write_text(json.dumps({"rows": rows, "applied": applied,
                               "missed": missed}, indent=1), encoding="utf-8")
    print("revert %s: %d rows, %d edits applied, %d missed -> %s" %
          (tag, len(rows), applied, len(missed), out))
    for m in missed[:10]:
        print("  missed:", m)
    return rows


def _tu_log_path(tag, tu):
    p = WORK / "clang" / tag / (tu.replace("/", "__") + ".log")
    p.parent.mkdir(parents=True, exist_ok=True)
    return p


def _run_tu(tu, env, timeout, tag):
    args = [x105.CLANGCL, "/nologo"] + x105.DISPLAY_FLAGS + [str(ROOT / tu)]
    t0 = time.time()
    try:
        p = subprocess.run(args, capture_output=True, env=env, timeout=timeout,
                           cwd=str(ROOT))
        rc, text = p.returncode, (p.stderr + p.stdout).decode("utf-8", "replace")
    except subprocess.TimeoutExpired as e:
        rc = -9
        text = "TIMEOUT after %ss\n" % timeout + (
            (e.stderr or b"").decode("utf-8", "replace"))
    _tu_log_path(tag, tu).write_text(text, encoding="utf-8")
    return parse_tu(tu, rc, text, round(time.time() - t0, 2))


def parse_tu(tu, rc, text, wall):
    total = own = 0
    cats = Counter()
    phrases = Counter()
    first = []
    for line in text.splitlines():
        m = x105.ERR_RE.match(line)
        if not m:
            continue
        f, _ln, msg = m.group(1), int(m.group(2)), m.group(4)
        total += 1
        low = msg.lower()
        cats[x105.classify(msg)] += 1
        for k, ph in PHRASES.items():
            if ph in low:
                phrases[k] += 1
        if x105.classify_loc(f, tu) == "own":
            own += 1
            if len(first) < 5:
                first.append("%s(%d): %s" % (Path(f).name, _ln, msg))
    return {"tu": tu, "rc": rc, "wall_s": wall, "total": total, "own": own,
            "cats": dict(cats), "phrases": dict(phrases), "first": first}


def measure(tag, files, jobs, timeout):
    files = sorted(set(files))
    if not files:
        sys.exit("no files to measure")
    env = x105.vcvars_env()
    from concurrent.futures import ThreadPoolExecutor
    t0 = time.time()
    rows = []
    with ThreadPoolExecutor(max_workers=jobs) as ex:
        futs = {ex.submit(_run_tu, f, env, timeout, tag): f for f in files}
        done = 0
        from concurrent.futures import as_completed
        for f in as_completed(futs):
            rows.append(f.result())
            done += 1
            if done % 50 == 0:
                print("  measured %d/%d (%.0fs)" % (done, len(files),
                                                    time.time() - t0), flush=True)
    rows.sort(key=lambda r: r["tu"])
    agg = {
        "tag": tag, "tus": len(rows), "wall_s": round(time.time() - t0, 1),
        "total": sum(r["total"] for r in rows),
        "own": sum(r["own"] for r in rows),
        "cats": dict(sum((Counter(r["cats"]) for r in rows), Counter())),
        "phrases": dict(sum((Counter(r["phrases"]) for r in rows), Counter())),
        "unparseable": [r["tu"] for r in rows if r["rc"] not in (0, 1)],
        "tus_rows": rows,
    }
    out = WORK / ("measure_%s.json" % tag)
    out.write_text(json.dumps(agg, indent=1), encoding="utf-8")
    print("measure %-10s TUs=%-4d total=%-7d own=%-7d wall=%.0fs -> %s" %
          (tag, agg["tus"], agg["total"], agg["own"], agg["wall_s"], out))
    print("  phrases:", json.dumps(agg["phrases"]))
    return agg


def measure_batch(bid, phase, jobs, timeout):
    plan = json.load(open(PLAN, encoding="utf-8"))
    b = get_batch(plan, bid)
    st = load_state()
    files = set(b["files"])
    for aid in st["applied"]:
        if aid == bid:
            continue
        files |= set(get_batch(plan, aid)["files"])
    # keep the measurement order deterministic
    return measure("%s_%s" % (bid, phase), sorted(files), jobs, timeout)


# ------------------------------------------------------------------ x113
def x113_apply(bid):
    log = WORK / ("x113_%s.log" % bid)
    t0 = time.time()
    with open(log, "w", encoding="utf-8") as fh:
        r = subprocess.run([sys.executable, "-X", "utf8",
                            str(ROOT / "tools/csp_export/x113_canon_members.py"),
                            "--apply"], cwd=str(ROOT), stdout=fh,
                           stderr=subprocess.STDOUT)
    tail = []
    try:
        lines = open(log, encoding="utf-8", errors="replace").read().splitlines()
        tail = lines[-8:]
    except OSError:
        pass
    print("x113 --apply after %s: rc=%s (%.0fs) %s" %
          (bid, r.returncode, time.time() - t0, log))
    for ln in tail:
        print("  " + ln)


# ------------------------------------------------------------------ ledger
def ledger():
    plan = json.load(open(PLAN, encoding="utf-8"))
    st = load_state()
    print("batch  label            n     applied  files  reason")
    print("-" * 78)
    for b in plan["batches"]:
        rec_p = WORK / ("applied_%s.json" % b["id"])
        rec = json.load(open(rec_p, encoding="utf-8")) if rec_p.exists() else {}
        status = ("rolled-back" if b["id"] in st["rolled_back"]
                  else "applied" if b["id"] in st["applied"] else "pending")
        print("%-5s  %-16s %5d  %7s  %5d  %s" %
              (b["id"], b["label"], b["n"], rec.get("applied", "-"),
               len(b["files"]), status))
    print("\napplied batches:", ", ".join(st["applied"]) or "-")
    print("rolled back    :", ", ".join(st["rolled_back"]) or "-")
    print("touched files  :", len(st["touched_files"]))


# ------------------------------------------------------------------ main
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--plan", action="store_true")
    ap.add_argument("--cap", type=int, default=700)
    ap.add_argument("--apply-batch", default=None)
    ap.add_argument("--prune", default=None)
    ap.add_argument("--measure-batch", default=None)
    ap.add_argument("--measure-pre", default=None)
    ap.add_argument("--measure-post", default=None)
    ap.add_argument("--rollback", default=None)
    ap.add_argument("--x113", default=None)
    ap.add_argument("--apply-entries", default=None,
                    help="comma-separated FUNC:VAR entries to (re)apply")
    ap.add_argument("--apply-tag", default="entries")
    ap.add_argument("--revert-entries", default=None,
                    help="comma-separated FUNC:VAR applied retypes to revert")
    ap.add_argument("--revert-tag", default="entries")
    ap.add_argument("--subset", default=None, help="OLD:NEW pruned copy")
    ap.add_argument("--subset-files", default=None)
    ap.add_argument("--subset-entries", default=None,
                    help="comma-separated FUNC:VAR picks (overrides files)")
    ap.add_argument("--measure", default=None, help="TAG (with --files)")
    ap.add_argument("--files", default=None, help="comma-separated TU list")
    ap.add_argument("--jobs", type=int, default=12)
    ap.add_argument("--timeout", type=int, default=600)
    ap.add_argument("--ledger", action="store_true")
    a = ap.parse_args()
    WORK.mkdir(parents=True, exist_ok=True)
    if a.plan:
        build_plan(a.cap)
    if a.apply_entries:
        apply_entries([p.strip() for p in a.apply_entries.split(",")],
                      a.apply_tag)
    if a.revert_entries:
        revert_entries([p.strip() for p in a.revert_entries.split(",")],
                       a.revert_tag)
    if a.subset:
        old_id, _, new_id = a.subset.partition(":")
        build_subset(
            old_id, new_id,
            [f.strip() for f in (a.subset_files or "").split(",")],
            [p.strip() for p in (a.subset_entries or "").split(",") if p.strip()])
    if a.measure_pre:
        measure_batch(a.measure_pre, "pre", a.jobs, a.timeout)
    if a.apply_batch:
        apply_batch(a.apply_batch)
    if a.prune:
        prune_bad_types(a.prune, a.jobs, a.timeout)
    if a.measure_post:
        measure_batch(a.measure_post, "post", a.jobs, a.timeout)
    if a.x113:
        x113_apply(a.x113)
    if a.rollback:
        rollback(a.rollback)
    if a.measure:
        files = [f.strip() for f in (a.files or "").split(",") if f.strip()]
        measure(a.measure, files, a.jobs, a.timeout)
    if a.ledger:
        ledger()


if __name__ == "__main__":
    main()
