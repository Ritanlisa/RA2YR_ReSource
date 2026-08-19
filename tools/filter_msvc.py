#!/usr/bin/env python3
"""
filter_msvc.py — MSVC compiler wrapper that suppresses errors from baseline code.

Usage (as CMAKE_CXX_COMPILER_LAUNCHER):
    python tools/filter_msvc.py cl.exe /c foo.cpp ...

This script:
1. Runs `git diff auto-fill-baseline --unified=0` to find changed lines
2. Invokes the real MSVC compiler with all arguments
3. Parses MSVC error/warning messages (file(line): error/warning CXXXX: msg)
4. Suppresses errors from lines NOT changed since baseline
5. Returns 0 if all reported errors were suppressed (baseline-only errors)
6. Returns the compiler's exit code otherwise

MSVC error format:
    path\to\file.cpp(123): error C2065: 'foo': undeclared identifier
    path\to\file.cpp(456): warning C4100: 'bar': unreferenced formal parameter
"""

import subprocess
import sys
import os
import re

# Regex for MSVC error/warning lines: file(line): severity code: message
_MSVC_ERR_RE = re.compile(
    r'^(.+?)\((\d+)(?:,\d+)?\)\s*:\s*(error|fatal error|warning)\s+(C\d+|LNK\d+)\s*:\s*(.*)$',
    re.IGNORECASE
)

BASELINE_TAG = "auto-fill-baseline"


def _get_changed_lines():
    """Run git diff against baseline tag, return {filepath_normalized: set(line_nums)}."""
    repo_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    try:
        result = subprocess.run(
            ['git', 'diff', BASELINE_TAG, '--unified=0', '--', 'src/', 'app/'],
            capture_output=True, text=True, encoding='utf-8', errors='replace',
            cwd=repo_root
        )
    except Exception:
        # If git fails, don't filter anything — pass all errors through
        return None

    if result.returncode != 0:
        return None

    output = result.stdout
    if not output.strip():
        return {}

    changed = {}
    current_file = None
    lines = output.split('\n')
    i = 0
    while i < len(lines):
        line = lines[i]

        if line.startswith('diff --git'):
            parts = line.split()
            if len(parts) >= 4:
                b_path = parts[3]
                current_file = b_path[2:] if b_path.startswith('b/') else b_path
                current_file = os.path.normpath(current_file)
            i += 1
            continue

        if line.startswith('@@') and current_file:
            m = re.match(r'@@ -(\d+)(?:,(\d+))? \+(\d+)(?:,(\d+))? @@', line)
            if m:
                new_start = int(m.group(3))
                new_count = int(m.group(4)) if m.group(4) else 1
                if current_file not in changed:
                    changed[current_file] = set()
                if new_count > 0:
                    for ln in range(new_start, new_start + new_count):
                        changed[current_file].add(ln)
            i += 1
            continue

        i += 1

    return changed


def _normalize_path(filepath, repo_root):
    """Normalize a filepath to match git diff format (forward slashes, relative to repo)."""
    try:
        abs_path = os.path.abspath(filepath)
        rel_path = os.path.relpath(abs_path, repo_root)
        return rel_path.replace('\\', '/')
    except (ValueError, OSError):
        return filepath.replace('\\', '/')


def _parse_and_filter(line, changed_lines, repo_root):
    """Parse MSVC error line, return None if it should be suppressed (baseline code).
    Returns the original line if it's from modified code or can't be parsed."""
    m = _MSVC_ERR_RE.match(line.strip())
    if not m:
        # Not an error/warning line — pass through unchanged
        return line

    filepath = m.group(1)
    line_num = m.group(2)

    if changed_lines is None:
        # git diff failed — pass all through
        return line

    norm_path = _normalize_path(filepath, repo_root)

    try:
        ln = int(line_num)
    except ValueError:
        return line

    if norm_path in changed_lines and ln in changed_lines[norm_path]:
        # This line is in the diff — it's our error, show it
        return line

    # This error is from baseline (unchanged) code — suppress it
    return None


def _write_line(stream, text):
    """Write a line to stream, handling encoding safely."""
    try:
        stream.write(text + '\n')
    except UnicodeEncodeError:
        stream.buffer.write((text + '\n').encode('utf-8', errors='replace'))


def main():
    if len(sys.argv) < 2:
        print("Usage: filter_msvc.py <compiler> [args...]", file=sys.stderr)
        sys.exit(1)

    compiler = sys.argv[1]
    compiler_args = sys.argv[2:]

    repo_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

    # Get changed lines from baseline
    changed_lines = _get_changed_lines()
    if changed_lines is not None and not changed_lines:
        # Empty diff means no changes since baseline — suppress ALL errors
        changed_lines = {}  # Will match nothing

    # Invoke the real compiler
    try:
        result = subprocess.run(
            [compiler] + compiler_args,
            capture_output=True, text=True,
            encoding='gbk', errors='replace'
        )
    except FileNotFoundError:
        print(f"filter_msvc: compiler not found: {compiler}", file=sys.stderr)
        sys.exit(1)
    except Exception as e:
        print(f"filter_msvc: failed to run compiler: {e}", file=sys.stderr)
        sys.exit(1)

    # Filter stdout and stderr
    filtered_stdout_lines = []
    filtered_stderr_lines = []
    suppressed_error_count = 0
    kept_error_count = 0

    for line in result.stdout.split('\n'):
        filtered = _parse_and_filter(line, changed_lines, repo_root)
        if filtered is not None:
            filtered_stdout_lines.append(filtered)
        else:
            suppressed_error_count += 1

    for line in result.stderr.split('\n'):
        filtered = _parse_and_filter(line, changed_lines, repo_root)
        if filtered is not None:
            filtered_stderr_lines.append(filtered)
            kept_error_count += 1
        else:
            suppressed_error_count += 1

    # Output filtered results
    if filtered_stdout_lines:
        for line in filtered_stdout_lines:
            _write_line(sys.stdout, line)

    if filtered_stderr_lines:
        for line in filtered_stderr_lines:
            _write_line(sys.stderr, line)

    if suppressed_error_count > 0:
        print(f"filter_msvc: suppressed {suppressed_error_count} baseline error(s)/warning(s)", file=sys.stderr)

    # Determine exit code:
    # - If compiler succeeded (0): pass through 0
    # - If compiler failed but ALL errors were suppressed: return 0 (baseline-only errors)
    # - If compiler failed and we kept some errors: return compiler's exit code
    if result.returncode == 0:
        sys.exit(0)
    elif kept_error_count == 0:
        # All errors were from baseline code — suppress the failure
        print("filter_msvc: all compilation errors were from baseline (unchanged) code — suppressing failure",
              file=sys.stderr)
        sys.exit(0)
    else:
        sys.exit(result.returncode)


if __name__ == '__main__':
    main()
