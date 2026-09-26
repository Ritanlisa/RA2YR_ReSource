#!/usr/bin/env python3
"""PRE_BUILD gate: run_all_gates.py, print only FAIL lines on failure, exit with gate code.

RA2_SKIP_GATES=1 is for development iteration (converge_loop / supply battery).
Final acceptance builds (step5) must NOT set this variable.
"""
import subprocess, sys, os
REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
if os.environ.get('RA2_SKIP_GATES'):
    # development iteration bypass: converge_loop/supply battery need to
    # build without waiting for the full gate suite (exec-flow alone is
    # 21 minutes). Final acceptance (step5) does NOT set this variable.
    print('gate_prebuild: RA2_SKIP_GATES set (dev iteration)', file=sys.stderr)
    sys.exit(0)
r = subprocess.run([sys.executable, os.path.join(REPO, 'tools', 'run_all_gates.py')],
                   cwd=REPO, capture_output=True, text=True)
if r.returncode != 0:
    lines = ((r.stderr or '') + (r.stdout or '')).split('\n')
    for line in lines:
        s = line.strip()
        if s and 'FAIL' in s:
            print(s, file=sys.stderr)
    sys.exit(r.returncode)
