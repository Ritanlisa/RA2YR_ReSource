#!/usr/bin/env python3
"""Run ALL build gates independently, aggregate results. Exit 1 if any fails."""
import subprocess, sys, os
REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
def run(name, args):
    r = subprocess.run([sys.executable] + args, cwd=REPO, capture_output=True, text=True)
    status = "PASS" if r.returncode == 0 else f"FAIL (exit {r.returncode})"
    print(f"GATE {name}: {status}")
    if r.returncode != 0 and (r.stdout or r.stderr):
        print(r.stdout[-2000:] if r.stdout else r.stderr[-2000:])
    return r.returncode
results = [
    run("code-standards", ["tools/check_translated_functions.py"]),
    run("ida-artifact",   ["tools/check_pointer_arithmetic.py", "src/", "app/"]),
    run("exec-flow",      ["tools/verify_execution_flow.py", "--auto"]),
]
failed = sum(1 for r in results if r != 0)
print(f"\n{failed}/3 gates FAILED" if failed else "\nALL GATES PASSED")
sys.exit(1 if failed else 0)
