#!/usr/bin/env python3
"""
check_all_members.py — Scan all .cpp files for raw pointer access violations.

Usage:
  python tools/check_all_members.py src/ app/

Iterates all .cpp files under the given directories, runs
fix_member_access.py --check on each, and aggregates results.
Exit code 0 if all files clean, 1 if any violations.
"""

import subprocess
import sys
import os
import glob


def find_cpp_files(directories):
    """Find all .cpp files recursively under given directories."""
    files = []
    for d in directories:
        if not os.path.isdir(d):
            print(f"WARNING: directory not found: {d}", file=sys.stderr)
            continue
        pattern = os.path.join(d, "**", "*.cpp")
        for f in glob.glob(pattern, recursive=True):
            files.append(os.path.abspath(f))
    return sorted(set(files))


def main():
    if len(sys.argv) < 2:
        print("Usage: python check_all_members.py <dir1> [dir2 ...]", file=sys.stderr)
        sys.exit(2)

    script_dir = os.path.dirname(os.path.abspath(__file__))
    checker_path = os.path.join(script_dir, "fix_member_access.py")

    directories = sys.argv[1:]
    files = find_cpp_files(directories)

    print(f"Scanning {len(files)} .cpp files in {', '.join(directories)}...")
    print()

    failed = []
    passed = 0

    for f in files:
        result = subprocess.run(
            [sys.executable, checker_path, "--check", f],
            capture_output=True, text=True, timeout=30
        )
        if result.returncode != 0:
            failed.append(f)
            # Print the violation details (stdout from checker)
            output = result.stdout.strip()
            if output:
                print(output)
        else:
            passed += 1
            # Only print OK for verbose, otherwise just count
            # print(f"  OK: {f}")

    print(f"\n{'=' * 60}")
    print(f"Passed: {passed}")
    print(f"Failed: {len(failed)}")

    if failed:
        print(f"\nERROR: {len(failed)} file(s) have raw pointer access violations:")
        for f in failed:
            print(f"  {f}")
        sys.exit(1)
    else:
        print("OK: All files clean — no raw pointer access violations")
        sys.exit(0)


if __name__ == "__main__":
    main()
