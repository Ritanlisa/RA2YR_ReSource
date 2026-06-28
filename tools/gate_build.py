#!/usr/bin/env python3
"""Run gates, print only violations to stderr. Exit 1 if any gate fails.
Wrapping avoids MSBuild's verbose command dump on failure."""
import subprocess, sys, os
REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
r = subprocess.run([sys.executable, os.path.join(REPO, 'tools', 'run_all_gates.py')],
                   cwd=REPO, capture_output=True, text=True)
if r.stderr:
    sys.stderr.write(r.stderr)
if r.stdout:
    sys.stderr.write(r.stdout)
sys.exit(r.returncode)
