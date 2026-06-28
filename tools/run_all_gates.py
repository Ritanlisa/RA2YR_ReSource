#!/usr/bin/env python3
"""Run ALL build gates. Print only violations. Exit 1 if any fails."""
import subprocess, sys, os
REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
def run(name, args):
    r = subprocess.run([sys.executable] + args, cwd=REPO, capture_output=True, text=True)
    if r.returncode != 0:
        out = (r.stdout or '') + (r.stderr or '')
        for line in out.split('\n'):
            s = line.strip()
            if 'FAIL' in s and s:
                sys.stderr.write(line + '\n')
    return r.returncode
results = [
    run("code-standards", ["tools/check_translated_functions.py"]),
    run("ida-artifact",   ["tools/check_pointer_arithmetic.py", "src/", "app/"]),
    run("exec-flow",      ["tools/verify_execution_flow.py", "--auto"]),
]
failed = sum(1 for r in results if r != 0)
if failed:
    sys.stderr.write(f'{failed}/3 gates FAILED\n')
sys.exit(1 if failed else 0)
