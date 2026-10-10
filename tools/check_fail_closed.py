#!/usr/bin/env python3
"""fail-closed gate: protected paths, brace residual, cache sanity, baseline.

T3 (project-optimization): the gate suite must fail closed BEFORE generate /
compile when trust artifacts are damaged. This gate runs four independent
checks and exits 1 if ANY of them fails:

1. protected-manifest  tools/protected_paths.json (schema
   protected-paths-manifest/v1): every protected file must exist, its
   SHA-256 must match the manifest (approved state), every file currently
   under a protected dir must be manifested (no unmanifested additions),
   `git status --porcelain` must show no uncommitted modification to any
   protected path. Files listed under archived[] are exempt with a recorded
   reason (recreating one without a manifest update = FAIL).
2. brace-residual      every src cpp/hpp (minus _generated) must end at
   block depth {0,1,2} -- same HARD GATE semantics as
   tools/csp_export/run_all_steps.py::assert_braces_balanced, reusing
   _blockspan.block_walker (block-comment aware).
3. cache-sanity        .omo/verify_auto_cache.json entries must have the
   documented shape {k:16hex, f:[sha1,sha1], v:1}; gate_clang_cache
   entries must parse and carry the documented lists. Malformed trust
   artifacts FAIL (staleness is NOT a failure -- the consumers compare
   keys themselves; corruption is).
4. baseline-manifest   .omo/evidence/optimization/baseline/manifest.json
   must exist, parse, and carry schema optimization-baseline-manifest/v1
   with the required top-level sections (T1 evidence root).

Output: PASS/FAIL line per check with details; machine-readable summary
via --json PATH. Exit 0 only if all checks pass.
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
MANIFEST_PATH = os.path.join(REPO, "tools", "protected_paths.json")
BASELINE_EVIDENCE = os.path.join(REPO, ".omo", "evidence", "optimization",
                                 "baseline", "manifest.json")
VERIFY_CACHE = os.path.join(REPO, ".omo", "verify_auto_cache.json")
CLANG_CACHE_DIR = os.path.join(REPO, ".omo", "cache", "gate_clang")
BRACE_EXPECTED_DEPTHS = (0, 1, 2)
SUMMARY_SCHEMA = "fail-closed-report/v1"

_HEX16 = re.compile(r"^[0-9a-f]{16}$")
_SHA1 = re.compile(r"^[0-9a-f]{40}$")


def sha256_file(ap):
    h = hashlib.sha256()
    try:
        with open(ap, "rb") as f:
            for chunk in iter(lambda: f.read(1 << 22), b""):
                h.update(chunk)
    except OSError:
        return None
    return h.hexdigest()


# ---------------------------------------------------------------- check 1
def check_protected(manifest_path):
    fails = []
    notes = []
    try:
        with open(manifest_path, "r", encoding="utf-8") as f:
            man = json.load(f)
    except FileNotFoundError:
        return [f"protected manifest missing: {manifest_path} -- regenerate "
                f"it from the approved HEAD state before building (see file "
                f"docstring; gitignoring tools/*.json is repo policy, so the "
                f"manifest is machine-local and must exist on every host "
                f"that runs gates)"], notes
    except (OSError, ValueError) as e:
        return [f"protected manifest unreadable: {e}"], notes
    if man.get("schema") != "protected-paths-manifest/v1":
        fails.append(f"protected manifest schema mismatch: "
                     f"{man.get('schema')!r} != 'protected-paths-manifest/v1'")

    hashes = man.get("hashes", {})
    archived = {a.get("path"): a.get("reason", "") for a in man.get("archived", [])}
    watch = list(man.get("protected_files", [])) + \
        [p for d in man.get("protected_dirs", [])
         for p in hashes if p.startswith(d.rstrip("/") + "/")]

    # existence + hash
    for p in sorted(set(watch)):
        ap = os.path.join(REPO, p)
        if not os.path.isfile(ap):
            if p in archived:
                notes.append(f"archived-missing (ok): {p} -- {archived[p]}")
            else:
                fails.append(f"protected file MISSING: {p}")
            continue
        cur = sha256_file(ap)
        if p not in hashes:
            fails.append(f"protected file present but UNMANIFESTED: {p} "
                         f"(update tools/protected_paths.json in the same commit)")
        elif cur != hashes[p]:
            fails.append(f"protected file HASH MISMATCH: {p} "
                         f"(content changed without manifest update)")

    # no unmanifested additions inside protected dirs
    for d in man.get("protected_dirs", []):
        dp = os.path.join(REPO, d)
        for dirpath, dirnames, filenames in os.walk(dp):
            dirnames[:] = [x for x in dirnames if x not in (".git",)]
            for fn in filenames:
                relp = os.path.relpath(os.path.join(dirpath, fn),
                                       REPO).replace("\\", "/")
                if relp not in hashes:
                    fails.append(f"unmanifested file in protected dir: {relp}")

    # worktree must be clean on every watched path
    if watch:
        try:
            r = subprocess.run(
                ["git", "status", "--porcelain", "--"] + sorted(set(watch)),
                capture_output=True, text=True, cwd=REPO)
            for line in (r.stdout or "").splitlines():
                if line.strip():
                    fails.append(f"uncommitted change to protected path: "
                                 f"{line.strip()}")
        except Exception as e:
            fails.append(f"git status failed: {e}")

    return fails, notes


# ---------------------------------------------------------------- check 2
def check_braces():
    sys.path.insert(0, os.path.join(REPO, "tools", "csp_export"))
    try:
        from _blockspan import block_walker
    except ImportError as e:
        return [f"cannot import _blockspan: {e}"], []
    fails = []
    src = os.path.join(REPO, "src")
    for dirpath, dirnames, filenames in os.walk(src):
        dirnames[:] = [d for d in dirnames if d != "_generated"]
        for fn in sorted(filenames):
            if not fn.endswith((".cpp", ".hpp")):
                continue
            ap = os.path.join(dirpath, fn)
            try:
                with open(ap, "rb") as f:
                    lines = f.read().decode("latin-1", errors="replace").split("\n")
            except OSError:
                continue
            d = sum(block_walker(lines))
            if d not in BRACE_EXPECTED_DEPTHS:
                relp = os.path.relpath(ap, REPO).replace("\\", "/")
                fails.append(f"brace residual: depth={d:+d} {relp}")
    return fails, []


# ---------------------------------------------------------------- check 3
def check_caches():
    fails = []
    notes = []

    # verify_auto_cache.json: {addr: {"k": 16hex, "f": [sha1, sha1], "v": 1}}
    try:
        with open(VERIFY_CACHE, "r", encoding="utf-8") as f:
            vc = json.load(f)
    except FileNotFoundError:
        notes.append("verify_auto_cache.json absent (first run will create)")
        vc = {}
    except (OSError, ValueError) as e:
        fails.append(f"verify_auto_cache.json UNREADABLE (corrupt): {e}")
        vc = None
    if isinstance(vc, dict):
        malformed = 0
        for addr, ent in vc.items():
            f_ = ent.get("f") if isinstance(ent, dict) else None
            # f[0] may legitimately be the 'x' sentinel from _cpp_fn_hash
            # (C++ function not located at verify time -> never matches a
            # real fingerprint -> entry always re-verifies: safe, not corrupt)
            f_ok = (
                isinstance(f_, list) and len(f_) == 2
                and all(_SHA1.match(str(x)) for x in f_)
            ) or (
                isinstance(f_, list) and len(f_) == 2
                and f_[0] == 'x' and _SHA1.match(str(f_[1]))
            )
            if not (isinstance(ent, dict)
                    and _HEX16.match(str(ent.get("k", "")))
                    and f_ok
                    and ent.get("v") == 1):
                malformed += 1
        if malformed:
            fails.append(f"verify_auto_cache.json: {malformed} malformed "
                         f"entrie(s) (corrupt trust artifact)")
        else:
            notes.append(f"verify_auto_cache.json: {len(vc)} entries, "
                         f"0 malformed")
    elif vc is not None:
        fails.append("verify_auto_cache.json: top level is not an object")

    # gate_clang_cache: every entry parses; carries 'all' + 'hpp_impl' lists
    if not os.path.isdir(CLANG_CACHE_DIR):
        notes.append("gate_clang_cache absent (cold cache)")
    else:
        checked = malformed = 0
        for root, _dirs, files in os.walk(CLANG_CACHE_DIR):
            for fn in files:
                if not fn.endswith(".json"):
                    continue
                checked += 1
                p = os.path.join(root, fn)
                try:
                    with open(p, "r", encoding="utf-8") as f:
                        pay = json.load(f)
                    if not (isinstance(pay, dict)
                            and isinstance(pay.get("all"), list)
                            and isinstance(pay.get("hpp_impl"), list)):
                        malformed += 1
                except (OSError, ValueError):
                    malformed += 1
                if malformed > 20:
                    break
            if malformed > 20:
                break
        if malformed:
            fails.append(f"gate_clang_cache: {malformed}+ malformed entrie(s)")
        else:
            notes.append(f"gate_clang_cache: {checked} entries, 0 malformed")

    return fails, notes


# ---------------------------------------------------------------- check 4
def check_baseline_evidence():
    fails = []
    notes = []
    try:
        with open(BASELINE_EVIDENCE, "r", encoding="utf-8") as f:
            man = json.load(f)
    except FileNotFoundError:
        return [f"T1 baseline manifest missing: {BASELINE_EVIDENCE}"], notes
    except (OSError, ValueError) as e:
        return [f"T1 baseline manifest unreadable: {e}"], notes
    if man.get("schema") != "optimization-baseline-manifest/v1":
        fails.append(f"T1 baseline schema mismatch: {man.get('schema')!r}")
    for key in ("git", "inputs", "timestamp_utc"):
        if key not in man:
            fails.append(f"T1 baseline manifest missing section: {key}")
    n_in = len(man.get("inputs", {}))
    notes.append(f"T1 baseline manifest: {n_in} recorded inputs")
    return fails, notes


def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--manifest", default=MANIFEST_PATH,
                    help="protected-path manifest to validate")
    ap.add_argument("--json", dest="json_out", default=None,
                    help="write machine-readable summary to PATH")
    ap.add_argument("--skip-braces", action="store_true",
                    help="skip brace walk (slow on very large trees)")
    args = ap.parse_args()

    t0 = time.time()
    checks = []

    fails, notes = check_protected(os.path.abspath(args.manifest))
    checks.append(("protected-manifest", fails, notes))

    if args.skip_braces:
        checks.append(("brace-residual", [], ["SKIPPED (--skip-braces)"]))
    else:
        fails, notes = check_braces()
        checks.append(("brace-residual", fails, notes))

    fails, notes = check_caches()
    checks.append(("cache-sanity", fails, notes))

    fails, notes = check_baseline_evidence()
    checks.append(("baseline-manifest", fails, notes))

    total_fails = 0
    for name, fails_, notes_ in checks:
        if fails_:
            total_fails += len(fails_)
            print(f"FAIL: fail-closed/{name}: {len(fails_)} problem(s)")
            for m in fails_[:50]:
                print(f"  {m}")
            if len(fails_) > 50:
                print(f"  ... {len(fails_) - 50} more")
        else:
            print(f"PASS: fail-closed/{name}")
        for m in notes_:
            print(f"  note: {m}")

    summary = {
        "schema": SUMMARY_SCHEMA,
        "checks": {name: {"fail_count": len(f_), "notes": n_}
                   for name, f_, n_ in checks},
        "total_failures": total_fails,
        "fail": total_fails > 0,
        "elapsed_s": round(time.time() - t0, 1),
    }
    if args.json_out:
        jp = args.json_out if os.path.isabs(args.json_out) \
            else os.path.join(REPO, args.json_out)
        with open(jp, "w", encoding="utf-8") as f:
            json.dump(summary, f, indent=1)

    if total_fails:
        print(f"FAIL: fail-closed gate: {total_fails} problem(s) -- "
              f"fail closed BEFORE generate/compile", file=sys.stderr)
        sys.exit(1)
    print("OK: fail-closed gate: all checks pass")
    sys.exit(0)


if __name__ == "__main__":
    main()
