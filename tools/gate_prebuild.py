#!/usr/bin/env python3
"""PRE_BUILD gate: run_all_gates.py, print only FAIL lines on failure, exit with gate code."""
import subprocess, sys, os
REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
r = subprocess.run([sys.executable, os.path.join(REPO, 'tools', 'run_all_gates.py')],
                   cwd=REPO, capture_output=True, text=True)
if r.returncode != 0:
    lines = ((r.stderr or '') + (r.stdout or '')).split('\n')
    for line in lines:
        s = line.strip()
        if s and 'FAIL' in s:
            print(s, file=sys.stderr)
    sys.exit(r.returncode)
