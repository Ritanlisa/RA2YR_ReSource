#!/usr/bin/env python3
"""
check_all_members.py — Thin CMake wrapper for fix_member_access.py --check.

Usage:
  python tools/check_all_members.py src/ app/
"""

import subprocess
import sys
import os

def main():
    if len(sys.argv) < 2:
        print("Usage: python check_all_members.py <dir1> [dir2 ...]", file=sys.stderr)
        sys.exit(2)

    script_dir = os.path.dirname(os.path.abspath(__file__))
    checker = os.path.join(script_dir, "fix_member_access.py")

    result = subprocess.run(
        [sys.executable, checker, "--check"] + sys.argv[1:],
        capture_output=False,  # passthrough output
    )
    sys.exit(result.returncode)

if __name__ == '__main__':
    main()
