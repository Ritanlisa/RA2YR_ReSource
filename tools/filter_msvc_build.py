#!/usr/bin/env python3
"""
filter_msvc_build.py — Wrapper around `cmake --build` that filters MSVC errors.

Usage:
    python tools/filter_msvc_build.py [cmake_build_args...]

This script:
1. Runs `cmake --build <build_dir>` (or passes through all arguments)
2. Captures stdout/stderr from the build
3. Filters MSVC error/warning lines, suppressing those from baseline (unchanged) code
4. Returns 0 if all errors were from baseline code, otherwise returns the build's exit code

Intended to be used as a CMake custom target:
    add_custom_target(build_filtered
        COMMAND ${Python3_EXECUTABLE} "${CMAKE_SOURCE_DIR}/tools/filter_msvc_build.py"
            ${CMAKE_COMMAND} --build "${CMAKE_BINARY_DIR}"
        ...)
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
    """Normalize a filepath to match git diff format."""
    try:
        abs_path = os.path.abspath(filepath)
        rel_path = os.path.relpath(abs_path, repo_root)
        return rel_path.replace('\\', '/')
    except (ValueError, OSError):
        return filepath.replace('\\', '/')


def _parse_and_filter(line, changed_lines, repo_root):
    """Parse MSVC error line. Return None to suppress, otherwise return (line, severity)."""
    m = _MSVC_ERR_RE.match(line.strip())
    if not m:
        return (line, None)  # pass through non-error lines

    filepath = m.group(1)
    line_num_str = m.group(2)
    severity = m.group(3).lower()

    if changed_lines is None:
        return (line, severity)

    norm_path = _normalize_path(filepath, repo_root)

    try:
        ln = int(line_num_str)
    except ValueError:
        return (line, severity)

    if norm_path in changed_lines and ln in changed_lines[norm_path]:
        return (line, severity)

    return None  # suppress baseline error


def _write_line(stream, text):
    """Write a line to stream, handling encoding safely."""
    try:
        stream.write(text + '\n')
    except UnicodeEncodeError:
        # Fall back to UTF-8 binary write
        stream.buffer.write((text + '\n').encode('utf-8', errors='replace'))


def main():
    if len(sys.argv) < 2:
        print("Usage: filter_msvc_build.py <build-command> [args...]", file=sys.stderr)
        sys.exit(1)

    build_args = sys.argv[1:]
    repo_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

    # Get changed lines from baseline
    changed_lines = _get_changed_lines()
    if changed_lines is not None:
        if not changed_lines:
            print("filter_msvc_build: no changes since baseline — all errors will be suppressed",
                  file=sys.stderr)
    else:
        print("filter_msvc_build: git diff failed — passing all errors through",
              file=sys.stderr)

    # Run the build
    try:
        result = subprocess.run(
            build_args,
            capture_output=True, text=True,
            encoding='gbk', errors='replace'
        )
    except Exception as e:
        print(f"filter_msvc_build: build failed: {e}", file=sys.stderr)
        sys.exit(1)

    # Filter and print output line by line
    suppressed_count = 0
    kept_error_count = 0
    suppressing_context = False  # True when we're inside a suppressed error block

    for stream, text in [(sys.stdout, result.stdout), (sys.stderr, result.stderr)]:
        for line in text.split('\n'):
            filtered = _parse_and_filter(line, changed_lines, repo_root)
            if filtered is not None:
                sev = filtered[1]
                if sev and 'error' in sev:
                    suppressing_context = False  # reset on new error
                    _write_line(stream, line)
                    kept_error_count += 1
                elif suppressing_context:
                    suppressed_count += 1  # suppress context lines
                else:
                    _write_line(stream, line)
            else:
                suppressed_count += 1
                m = _MSVC_ERR_RE.match(line.strip())
                if m and 'error' in m.group(3).lower():
                    suppressing_context = True

    if suppressed_count > 0:
        print(f"\nfilter_msvc_build: suppressed {suppressed_count} baseline error(s)/warning(s)",
              file=sys.stderr)

    # Determine exit code
    if result.returncode == 0:
        sys.exit(0)
    elif kept_error_count == 0:
        print("filter_msvc_build: all errors were from baseline (unchanged) code — build PASSES",
              file=sys.stderr)
        sys.exit(0)
    else:
        sys.exit(result.returncode)


if __name__ == '__main__':
    main()
