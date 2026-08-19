#!/usr/bin/env python3
"""Run ALL build gates IN PARALLEL. Print only violations. Exit 1 if any fails."""
import subprocess, sys, os
from concurrent.futures import ThreadPoolExecutor, as_completed

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

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
    ("code-standards", ["tools/check_translated_functions.py"]),
    ("ida-artifact",   ["tools/check_pointer_arithmetic.py", "src/", "app/"]),
    ("exec-flow",      ["tools/verify_execution_flow.py", "--auto"]),
]

results = {}
with ThreadPoolExecutor(max_workers=3) as pool:
    futures = {pool.submit(run_gate, name, args): name for name, args in gates}
    for f in as_completed(futures):
        name, rc = f.result()
        results[name] = rc

failed = sum(1 for r in results.values() if r != 0)
if failed:
    sys.stderr.write(f'{failed}/3 gates FAILED\n')
sys.exit(1 if failed else 0)
