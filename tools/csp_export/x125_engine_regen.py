#!/usr/bin/env python3
"""x125_engine_regen.py — engine rerun driver with sha256 idempotence gate.

Part of the X125 W1 reproducibility package (docs/csp_regen.md).  The type
inference engine (`python -m tools.type_infer.engine`) consumes tracked
anchors + local artifacts (raw_constraints.json, csp_functions.json) and
writes type_map.json / top_causes.json / contradictions.md into the repo
root (gitignored, regenerable).  Determinism is the contract: two runs on
identical inputs must produce byte-identical outputs.

Modes:
  --record   store the CURRENT type_map.json sha256 as the baseline
             (.omo/x125/engine_sha_baseline.json)
  (default)  rerun the engine (subprocess, streaming stderr to console),
             then compare the fresh sha256 against the baseline.
  --no-run   only compare the CURRENT file sha against the baseline
             (fast gate, no engine invocation).

Exit codes: 0 = match (or recorded); 1 = mismatch / missing baseline.
"""
import argparse
import hashlib
import json
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
TYPE_MAP = ROOT / "type_map.json"
BASELINE = ROOT / ".omo" / "x125" / "engine_sha_baseline.json"


def sha256(path):
    h = hashlib.sha256()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest().upper()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--record", action="store_true")
    ap.add_argument("--no-run", action="store_true")
    args = ap.parse_args()

    if args.record:
        if not TYPE_MAP.exists():
            print("type_map.json missing; run the engine first", file=sys.stderr)
            sys.exit(1)
        BASELINE.parent.mkdir(parents=True, exist_ok=True)
        sha = sha256(TYPE_MAP)
        BASELINE.write_text(json.dumps(
            {"type_map_sha256": sha, "size": TYPE_MAP.stat().st_size},
            indent=1), encoding="utf-8")
        print("recorded baseline:", sha)
        return

    if not BASELINE.exists():
        print("no baseline; run with --record first", file=sys.stderr)
        sys.exit(1)
    base = json.loads(BASELINE.read_text(encoding="utf-8"))

    if not args.no_run:
        print("running engine: python -m tools.type_infer.engine ...")
        r = subprocess.run([sys.executable, "-m", "tools.type_infer.engine"],
                           cwd=str(ROOT))
        if r.returncode != 0:
            print("engine FAILED rc=%d" % r.returncode, file=sys.stderr)
            sys.exit(1)

    fresh = sha256(TYPE_MAP)
    ok = fresh == base["type_map_sha256"]
    print(json.dumps({
        "baseline": base["type_map_sha256"],
        "fresh": fresh,
        "match": ok,
    }, indent=1))
    sys.exit(0 if ok else 1)


if __name__ == "__main__":
    main()
