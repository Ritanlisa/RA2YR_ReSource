#!/usr/bin/env python3
"""PRE_BUILD gate: run_all_gates.py, print only FAIL lines on failure, exit with gate code."""
import subprocess, sys, os
REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
if os.environ.get('RA2_SKIP_GATES'):
    # opt-out for mechanical redo loops: step5's own compile gate +
    # 60-sample verify gate own acceptance there; the pool-wide
    # verify --auto (12.7k functions, hours) cannot run per-iteration.
    print('gate_prebuild: RA2_SKIP_GATES set -- gates skipped', file=sys.stderr)
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
