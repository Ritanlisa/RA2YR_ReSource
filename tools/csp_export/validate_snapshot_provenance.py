#!/usr/bin/env python3
"""validate_snapshot_provenance.py — typed IDA snapshot provenance validator (T7).

Fail-closed validation of the `decompile-results/full_export/` snapshot before
any consumer (T4c step3 / T8 / T10) may treat it as the current-binary
reference. All generation is BLOCKED on any hard-hash mismatch: this tool is
read-only by construction and exits nonzero before callers would generate.

Provenance model (schema snapshot-provenance/v1):
  hard hashes (mismatch -> exit 1, no generation):
    - exe        : sha256 of the IDA input binary (identity of the binary)
    - snapshot   : per-file sha256 over the whole export tree
    - tools      : sha256 of exporter/sync/validator scripts (version pin)
    - schema     : structural fingerprint of index.json + counts > 0
  evolution-tracked (mismatch -> recorded drift, exit unchanged):
    - idb        : .i64 evolves every session by design (naming/til writes);
                   binary identity is guaranteed by the exe hash, and IDB
                   drift is the very trigger for a live re-export. Escalate
                   to hard failure only with --strict-idb.

Modes:
  --record    (re)write decompile-results/full_export/provenance_manifest.json
  --validate  check current disk state against the manifest (default mode)
  --tamper KEY validate against a tampered COPY of the manifest (QA helper;
               KEY = exe|idb|snapshot|tools|schema; the real manifest on disk
               is never modified). Writes the tampered copy under .omo/tmp/.
Exit codes: 0 pass | 1 hard provenance mismatch | 2 environment error.

Offline behaviour: validation is fully offline-capable (files on disk); live
IDA session identity is recorded when reachable (authority=live) and absent
when not (authority=snapshot). A stale snapshot is never silently consumed:
hard-hash mismatch always fails closed.
"""
import argparse
import hashlib
import json
import os
import shutil
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SNAP_ROOT = ROOT / "decompile-results" / "full_export"
MANIFEST = SNAP_ROOT / "provenance_manifest.json"
TAMPER_DIR = ROOT / ".omo" / "tmp"

SCHEMA = "snapshot-provenance/v1"

TOOL_REL_PATHS = [
    "tools/type_infer/ida_full_export.py",
    "tools/csp_export/sync_ida_cache.py",
    "tools/csp_export/validate_snapshot_provenance.py",
]

sys.path.insert(0, str(ROOT / "tools" / "type_infer"))


def sha256_file(p: Path, chunk=1 << 20) -> str:
    h = hashlib.sha256()
    with open(p, "rb") as f:
        while True:
            b = f.read(chunk)
            if not b:
                break
            h.update(b)
    return h.hexdigest()


def probe_ida(timeout=10):
    """Return server_health dict or None when the MCP layer is unreachable."""
    try:
        from ida_apply_t14 import call
        return call("server_health", {}, timeout=timeout)
    except Exception:
        return None


def schema_fingerprint():
    """Structural fingerprint of the export schema (no body content)."""
    idx_p = SNAP_ROOT / "index.json"
    if not idx_p.exists():
        raise FileNotFoundError(str(idx_p))
    idx = json.loads(idx_p.read_text(encoding="utf-8", errors="replace"))
    src_files = sorted((SNAP_ROOT / "src").glob("*.cpp")) if (SNAP_ROOT / "src").exists() else []
    inc_files = sorted((SNAP_ROOT / "include").glob("*.hpp")) if (SNAP_ROOT / "include").exists() else []
    globals_p = SNAP_ROOT / "globals.hpp"
    globals_count = 0
    if globals_p.exists():
        globals_count = sum(1 for ln in globals_p.read_text(
            encoding="utf-8", errors="replace").splitlines()
            if ln.startswith("extern "))
    fp = {
        "index_entry_count": len(idx),
        "src_file_count": len(src_files),
        "include_file_count": len(inc_files),
        "globals_hpp_present": globals_p.exists(),
        "globals_extern_count": globals_count,
        "block_head_grammar": "sync_ida_cache/1",
    }
    canon = json.dumps(fp, sort_keys=True, separators=(",", ":")).encode()
    return {"fields": fp, "sha256": hashlib.sha256(canon).hexdigest()}


def collect_snapshot_hashes():
    files = {}
    total = 0
    for p in sorted(SNAP_ROOT.rglob("*")):
        if not p.is_file() or p.name == "provenance_manifest.json":
            continue
        rel = p.relative_to(SNAP_ROOT).as_posix()
        files[rel] = sha256_file(p)
        total += p.stat().st_size
    return files, total


def build_manifest():
    health = probe_ida()
    exe_path = Path(health["input_path"]) if health else None
    if exe_path is None or not exe_path.exists():
        # fall back to the last recorded input path, else the known input
        cand = ROOT / "decompile-results" / ".last_ida_input_path"
        if cand.exists():
            exe_path = Path(cand.read_text(encoding="utf-8").strip())
        else:
            exe_path = Path(r"C:\Program Files (x86)\Mental Omega\gamemd.exe")
    if not exe_path.exists():
        raise FileNotFoundError(f"IDA input EXE not found: {exe_path}")
    idb_path = Path(health["idb_path"]) if health else (ROOT / "decompile-results" / "gamemd.exe.i64")

    snap_files, snap_total = collect_snapshot_hashes()
    tools = {rel: sha256_file(ROOT / rel) for rel in TOOL_REL_PATHS}
    idb = {"path": str(idb_path), "sha256": sha256_file(idb_path),
           "size": idb_path.stat().st_size} if idb_path.exists() else None

    m = {
        "schema": SCHEMA,
        "recorded_at": time.strftime("%Y-%m-%dT%H:%M:%S"),
        "exe": {
            "ida_input_path": str(exe_path),
            "sha256": sha256_file(exe_path),
            "size": exe_path.stat().st_size,
            "note": ("binary identity of the IDA session that produced the "
                     "snapshot; runtime test target D:/RA2MD/gamemd.exe is a "
                     "DIFFERENT binary and is NOT part of snapshot identity"),
        },
        "exe_runtime_reference": _runtime_exe_record(),
        "idb": idb,
        "idb_policy": ("evolution-tracked: IDB legitimately changes every "
                       "session (naming/til); drift is recorded, not fatal "
                       "unless --strict-idb; binary identity = exe hash"),
        "snapshot": {"root": str(SNAP_ROOT.relative_to(ROOT)),
                     "file_count": len(snap_files),
                     "total_bytes": snap_total,
                     "files": snap_files},
        "tools": tools,
        "schema_fingerprint": schema_fingerprint(),
        "live_session_at_record": health,
    }
    (ROOT / "decompile-results" / ".last_ida_input_path").write_text(
        str(exe_path), encoding="utf-8")
    return m


def _runtime_exe_record():
    p = Path(r"D:\RA2MD\gamemd.exe")
    if not p.exists():
        return {"path": str(p), "present": False}
    return {"path": str(p), "present": True, "sha256": sha256_file(p),
            "size": p.stat().st_size,
            "note": "runtime-only reference; excluded from hard checks"}


def validate(manifest, strict_idb=False, require_online=False):
    """Return (exit_code, findings dict). No writes anywhere."""
    findings = {"checks": [], "hard_fail": False, "drift": {}}

    def check(name, ok, detail="", hard=True):
        findings["checks"].append({"check": name, "ok": bool(ok),
                                   "detail": detail, "hard": hard})
        if not ok and hard:
            findings["hard_fail"] = True

    # 0. schema recognized
    check("manifest_schema", manifest.get("schema") == SCHEMA,
          f"schema={manifest.get('schema')!r}")

    # 1. exe identity
    exe_path = Path(manifest["exe"]["ida_input_path"])
    if not exe_path.exists():
        check("exe_present", False, f"missing: {exe_path}")
    else:
        cur = sha256_file(exe_path)
        check("exe_sha256", cur == manifest["exe"]["sha256"],
              f"manifest={manifest['exe']['sha256'][:16]}.. current={cur[:16]}..")

    # 2. snapshot tree integrity
    snap_files, snap_total = collect_snapshot_hashes()
    man_files = manifest["snapshot"]["files"]
    missing = sorted(set(man_files) - set(snap_files))
    extra = sorted(set(snap_files) - set(man_files))
    changed = sorted(k for k in set(man_files) & set(snap_files)
                     if man_files[k] != snap_files[k])
    check("snapshot_files_complete", not missing and not extra,
          f"missing={len(missing)} extra={len(extra)} "
          f"({(missing + extra)[:5]})")
    check("snapshot_content_unchanged", not changed,
          f"changed={len(changed)} ({changed[:5]})")
    check("snapshot_file_count",
          manifest["snapshot"]["file_count"] == len(man_files),
          f"manifest={manifest['snapshot']['file_count']} "
          f"listed={len(man_files)}")

    # 3. tools pinned
    for rel, want in manifest["tools"].items():
        p = ROOT / rel
        cur = sha256_file(p) if p.exists() else None
        check(f"tool:{rel}", cur == want,
              "missing" if cur is None else
              ("" if cur == want else f"want={want[:12]}.. cur={cur[:12]}.."))

    # 4. schema fingerprint
    try:
        cur_schema = schema_fingerprint()
        check("schema_fingerprint",
              cur_schema["sha256"] == manifest["schema_fingerprint"]["sha256"],
              f"manifest={manifest['schema_fingerprint']['sha256'][:16]}.. "
              f"current={cur_schema['sha256'][:16]}.. "
              f"fields={cur_schema['fields']}")
    except Exception as e:
        check("schema_fingerprint", False, f"error: {e}")

    # 5. IDB evolution (tracked, non-fatal by default)
    idb_rec = manifest.get("idb")
    if idb_rec:
        p = Path(idb_rec["path"])
        if p.exists():
            cur = sha256_file(p)
            if cur != idb_rec["sha256"]:
                findings["drift"]["idb"] = {
                    "recorded": idb_rec["sha256"], "current": cur,
                    "policy": "recorded (expected evolution)" if not strict_idb
                              else "HARD FAIL (--strict-idb)"}
                check("idb_sha256", False, findings["drift"]["idb"]["policy"],
                      hard=strict_idb)
            else:
                check("idb_sha256", True, "unchanged", hard=strict_idb)
        else:
            check("idb_present", False, f"missing: {p}", hard=strict_idb)

    # 6. live session identity (informational; drives authority selection)
    health = probe_ida()
    if health:
        findings["authority"] = "live"
        findings["live_session"] = health
        same_input = (Path(health.get("input_path", "")).resolve()
                      == exe_path.resolve()) if exe_path.exists() else False
        check("live_ida_input_matches_manifest_exe", same_input,
              f"live={health.get('input_path')!r} "
              f"manifest={str(exe_path)!r}")
    else:
        findings["authority"] = "snapshot"
        findings["live_session"] = None
        check("live_ida_reachable", True,
              "offline: snapshot-only consumption (hard checks above still "
              "enforced)", hard=False)

    if require_online and findings["authority"] != "live":
        check("require_online", False, "IDA MCP unreachable but --require-online set")
        findings["hard_fail"] = True

    exit_code = (1 if findings["hard_fail"] else 0)
    return exit_code, findings


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--record", action="store_true",
                    help="(re)write the provenance manifest")
    ap.add_argument("--validate", action="store_true", default=True)
    ap.add_argument("--tamper", choices=("exe", "idb", "snapshot", "tools",
                                         "schema"),
                    help="QA: validate against a tampered COPY of the manifest")
    ap.add_argument("--strict-idb", action="store_true")
    ap.add_argument("--require-online", action="store_true")
    ap.add_argument("--json-out", default="")
    args = ap.parse_args()

    if args.record:
        m = build_manifest()
        MANIFEST.write_text(json.dumps(m, ensure_ascii=False, indent=1),
                            encoding="utf-8")
        print(f"recorded: {MANIFEST}")
        print(f"  exe  {m['exe']['sha256'][:16]}.. <- {m['exe']['ida_input_path']}")
        print(f"  idb  {(m['idb'] or {}).get('sha256', '')[:16]}..")
        print(f"  snap {m['snapshot']['file_count']} files / "
              f"{m['snapshot']['total_bytes']} bytes")
        print(f"  schema {m['schema_fingerprint']['sha256'][:16]}..")
        return 0

    if not MANIFEST.exists():
        print(f"FAIL(exit 2): manifest missing: {MANIFEST} — run --record first")
        return 2
    manifest = json.loads(MANIFEST.read_text(encoding="utf-8"))

    if args.tamper:
        TAMPER_DIR.mkdir(parents=True, exist_ok=True)
        p = TAMPER_DIR / f"provenance_manifest.tampered_{args.tamper}.json"
        m2 = json.loads(json.dumps(manifest))  # deep copy; disk untouched
        if args.tamper == "exe":
            m2["exe"]["sha256"] = "0" * 64
        elif args.tamper == "idb" and m2.get("idb"):
            m2["idb"]["sha256"] = "0" * 64
        elif args.tamper == "snapshot":
            first = sorted(m2["snapshot"]["files"])[0]
            m2["snapshot"]["files"][first] = "0" * 64
        elif args.tamper == "tools":
            first = sorted(m2["tools"])[0]
            m2["tools"][first] = "0" * 64
        elif args.tamper == "schema":
            m2["schema_fingerprint"]["sha256"] = "0" * 64
        p.write_text(json.dumps(m2, ensure_ascii=False, indent=1),
                     encoding="utf-8")
        manifest = m2
        print(f"tampered copy written (real manifest untouched): {p}")

    rc, findings = validate(manifest, strict_idb=args.strict_idb,
                            require_online=args.require_online)
    print(json.dumps(findings, ensure_ascii=False, indent=1))
    if args.json_out:
        Path(args.json_out).parent.mkdir(parents=True, exist_ok=True)
        Path(args.json_out).write_text(json.dumps(
            {"exit_code": rc, "tamper_key": args.tamper,
             "manifest": str(MANIFEST), **findings},
            ensure_ascii=False, indent=1), encoding="utf-8")
    if rc == 0:
        print(f"PASS: provenance matched (authority={findings['authority']})")
    elif findings["hard_fail"]:
        print("FAIL(exit 1): hard provenance mismatch — generation blocked")
    else:
        print(f"exit {rc}")
    return rc


if __name__ == "__main__":
    sys.exit(main())
