#!/usr/bin/env python3
"""Run ALL build gates IN PARALLEL. Print only violations. Exit 1 if any fails.

T3 (project-optimization): the failure summary previously hardcoded "3 gates"
while the suite declared 4. The count is now derived from the declared gate
list and from the gates that actually executed (a gate that never reports --
e.g. executor crash -- counts as failed, fail closed). `--json PATH` writes a
machine-readable summary (schema gate-summary/v1). Raw FAIL lines from each
gate are preserved on stderr.
"""
import argparse
import json
import subprocess
import sys
import os
from concurrent.futures import ThreadPoolExecutor, as_completed

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SUMMARY_SCHEMA = "gate-summary/v1"

def run_gate(name, args):
    r = subprocess.run([sys.executable] + args, cwd=REPO, capture_output=True, text=True)
    if r.returncode != 0:
        out = (r.stdout or '') + (r.stderr or '')
        for line in out.split('\n'):
            s = line.strip()
            if 'FAIL' in s and s:
                sys.stderr.write(line + '\n')
    return (name, r.returncode)

gates = [
    # fail-closed FIRST conceptually (protected paths / brace / cache /
    # baseline evidence): block generate+compile on damaged trust artifacts.
    ("fail-closed",    ["tools/check_fail_closed.py"]),
    ("code-standards", ["tools/check_translated_functions.py"]),
    ("ida-artifact",   ["tools/check_pointer_arithmetic.py", "src/", "app/"]),
    ("oo-translation", ["tools/check_oo_translation.py"]),
    # exec-flow worker count: measured per-worker steady RSS is ~2.5GB
    # (signals.json + member_lookup.json parsed per spawn worker), so 4
    # workers = ~10GB, inside the 12GB memory discipline on the 32GB box.
    # Measured cold-run (12.7k functions, 2026-09-25): full pool ~T_full with
    # 4 workers -- see .omo/verify_profile_report.md.
    ("exec-flow",      ["tools/verify_execution_flow.py", "--auto",
                        "--workers", "4"]),
]

def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--json", dest="json_out", default=None,
                    help="write machine-readable summary to PATH")
    ap.add_argument("--skip-gate", action="append", default=[],
                    help="skip a named gate (dev iteration only; summary "
                         "records it as skipped, never as passed)")
    args = ap.parse_args()

    active = [(n, a) for n, a in gates if n not in args.skip_gate]
    skipped = [n for n, _ in gates if n in args.skip_gate]

    results = {}
    with ThreadPoolExecutor(max_workers=3) as pool:
        futures = {pool.submit(run_gate, name, a): name for name, a in active}
        for f in as_completed(futures):
            name, rc = f.result()
            results[name] = rc

    # fail closed: a gate that never reported counts as failed
    missing = [name for name, _ in active if name not in results]
    failed = sum(1 for r in results.values() if r != 0) + len(missing)
    executed = len(results)

    if args.skip_gate and os.environ.get("RA2_SKIP_GATES") is None \
            and not os.environ.get("RA2_SKIP_GATE_ACK"):
        print(f"WARNING: {len(skipped)} gate(s) skipped via --skip-gate: "
              f"{skipped} -- acceptance runs must not skip gates",
              file=sys.stderr)

    if failed:
        sys.stderr.write(f'{failed}/{executed} gates FAILED '
                         f'({len(active)} declared, {len(missing)} did not report)\n')
    else:
        sys.stderr.write(f'ALL {executed}/{len(active)} gates PASS\n')

    if args.json_out:
        jp = args.json_out if os.path.isabs(args.json_out) \
            else os.path.join(REPO, args.json_out)
        with open(jp, "w", encoding="utf-8") as f:
            json.dump({
                "schema": SUMMARY_SCHEMA,
                "gates_declared": len(gates),
                "gates_active": len(active),
                "gates_executed": executed,
                "gates_skipped": skipped,
                "gates_did_not_report": missing,
                "failed": failed,
                "results": results,
                "fail": failed > 0,
            }, f, indent=1)
    sys.exit(1 if failed else 0)

if __name__ == "__main__":
    main()
