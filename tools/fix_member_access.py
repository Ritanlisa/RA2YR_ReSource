#!/usr/bin/env python3
"""
fix_member_access.py - Check/fix .cpp files for forbidden patterns.

Rules:
  1. Pointer arithmetic via byte/int cast: (uint8_t*)VAR + N, (uintptr_t)VAR + N
  2. Array-index on cast pointer: ((TYPE*)VAR)[N], VAR[N/D]
  3. C++ casts: static_cast, reinterpret_cast, dynamic_cast
  4. Hex literal pointers: (TYPE*)0xNNNN

Modes:
  --check <paths>       Scan for violations (default)
  --fix-casts <paths>   Batch convert C++ casts to C-style
  --file-list <paths>   List files that would be checked

Usage:
  python tools/fix_member_access.py --check src/ app/
  python tools/fix_member_access.py --fix-casts src/ app/
"""

import re
import sys
import os
import argparse
from typing import List, Tuple, Dict

# ---- Targeted violation patterns ----

# Pattern 1: Byte/int-cast pointer arithmetic
_RE_PTR_ARITH = re.compile(
    r'\(\s*(?:(?:const\s+)?uint8_t|char)\s*\*\s*\)\s*\w+\s*\+\s*\d+'
    r'|\(\s*\w+\s*\*\s*\)\s*\(\s*\((?:uintptr_t|size_t|intptr_t)\)\s*\w+\s*\)\s*\+\s*\d+'
)

# Pattern 2a: Cast + array index: ((int*)this)[47]
_RE_CAST_INDEX = re.compile(
    r'\(\s*\(\s*(?:int|uint32_t|uint16_t|uint8_t|float|double'
    r'|char|short|byte|DWORD|WORD|BYTE|void)\s*\*\s*\)\s*\w+\s*\)\s*\[\s*\d+'
)

# Pattern 2b: Array-div offset: typeData[2048/4]
_RE_ARRAY_DIV = re.compile(
    r'\b\w+\s*\[\s*\d+\s*/\s*[1248]\s*\]'
)

# Pattern 3: C++ casts (forbidden; use C-style)
_RE_CPP_CAST = re.compile(
    r'\b(static_cast|reinterpret_cast|dynamic_cast)\s*<'
)

# Pattern 4: Hex literal pointer: (TYPE*)0xNNNN
_RE_HEX_PTR = re.compile(
    r'\(\s*(?:uint8_t|char|int|uint32_t|float|void|DWORD|BYTE)\s*\*\s*\)\s*0x[0-9A-Fa-f]{4,}'
    r'|\*\s*\(\s*(?:int|uint32_t|float)\s*\*\s*\)\s*\(\s*0x[0-9A-Fa-f]{4,}'
)


def _strip_comments(line: str) -> str:
    code = line.split('//')[0]
    code = re.sub(r'/\*.*?\*/', '', code)
    return code


def check_line(code: str) -> List[str]:
    violations = []

    m = _RE_PTR_ARITH.search(code)
    if m:
        violations.append(f"ptr-arithmetic: {m.group().strip()[:60]} {_fix_ptr_arith(m.group())}")

    if not m:
        m = _RE_CAST_INDEX.search(code)
        if m:
            violations.append(f"cast-index: {m.group().strip()[:60]} {_fix_cast_index(m.group())}")
        else:
            m = _RE_ARRAY_DIV.search(code)
            if m:
                violations.append(f"array-div: {m.group().strip()[:60]} → use ->member access instead of array-div subscript")

    m = _RE_CPP_CAST.search(code)
    if m:
        violations.append(f"C++-cast ({m.group(1)}): {code.strip()[:70]} → use C-style cast: (type)(expr)")

    m = _RE_HEX_PTR.search(code)
    if m:
        addr_match = re.search(r'0x[0-9A-Fa-f]+', m.group())
        addr = addr_match.group(0) if addr_match else ''
        violations.append(f"hex-ptr: {m.group().strip()[:60]} → use named global variable instead. Check src/**/globals_*.hpp{(' (IDA: ' + addr + ')') if addr else ''}")

    return violations


def _fix_ptr_arith(match_text: str) -> str:
    """Generate fix suggestion for ptr-arithmetic violation."""
    m = re.search(r'\(\s*(?:const\s+)?(?:uint8_t|char)\s*\*\s*\)\s*(\w+)\s*\+\s*(\d+)', match_text)
    if m:
        var_name = m.group(1)
        offset = m.group(2)
        if var_name == 'this':
            return f'→ use this->memberName instead. Run: lookup_member.py <ClassName> {offset}'
        else:
            return f'→ use {var_name}->memberName instead. Run: lookup_member.py <ClassName> {offset}'
    return '→ use ->member access instead of pointer arithmetic'


def _fix_cast_index(match_text: str) -> str:
    """Generate fix suggestion for cast-index violation."""
    m = re.search(r'\(\s*\(\s*\w+\s*\*\s*\)\s*(\w+)\s*\)\s*\[\s*(\d+)', match_text)
    if m:
        var_name = m.group(1)
        idx = int(m.group(2))
        byte_offset = idx * 4
        if var_name == 'this':
            return f'→ use this->memberName instead. Run: lookup_member.py <ClassName> {byte_offset}'
        else:
            return f'→ use {var_name}->memberName instead. Run: lookup_member.py <ClassName> {byte_offset}'
    return '→ use ->member access instead of pointer subscript'


def check_file(file_path: str) -> List[Tuple[str, int, str]]:
    violations = []
    with open(file_path, 'r', encoding='utf-8', errors='replace') as f:
        lines = f.readlines()

    for i, line in enumerate(lines, 1):
        stripped = line.lstrip()
        if stripped.startswith('//') or stripped.startswith('/*') or stripped.startswith('*'):
            continue
        if stripped.startswith('#'):
            continue
        if stripped.startswith('"') and not any(c in stripped for c in '=;()'):
            continue

        code = _strip_comments(line)
        for desc in check_line(code):
            violations.append((file_path, i, desc))

    return violations


def find_cpp_files(paths: List[str]) -> List[str]:
    files = []
    for p in paths:
        if os.path.isfile(p) and p.endswith('.cpp'):
            files.append(os.path.abspath(p))
        elif os.path.isdir(p):
            for root, dirs, filenames in os.walk(p):
                dirs[:] = [dn for dn in dirs if dn != '_generated']
                for fn in filenames:
                    if fn.endswith('.cpp'):
                        files.append(os.path.abspath(os.path.join(root, fn)))
    return sorted(set(files))


def convert_cpp_casts(content: str) -> str:
    """Convert all C++ casts in content to C-style.
    Handles simple types only (no nested <>)."""
    lines = content.splitlines(keepends=True)
    result_lines = []

    for line in lines:
        stripped = line.lstrip()
        if stripped.startswith('//') or stripped.startswith('/*') or stripped.startswith('*'):
            result_lines.append(line)
            continue
        if stripped.startswith('#'):
            result_lines.append(line)
            continue

        code = line.split('//')[0]
        comment = ''
        if '//' in line:
            idx = line.index('//')
            code = line[:idx]
            comment = line[idx:]

        modified = code
        pattern = r'\b(static_cast|reinterpret_cast|dynamic_cast)\s*<\s*([^<>]+?)\s*>\s*\('

        def repl(m):
            cast_kw = m.group(1)
            type_str = m.group(2).strip()
            paren_start = m.end() - 1

            depth = 0
            paren_end = paren_start
            for i in range(paren_start, len(modified)):
                if modified[i] == '(':
                    depth += 1
                elif modified[i] == ')':
                    depth -= 1
                    if depth == 0:
                        paren_end = i
                        break

            if paren_end == paren_start:
                return m.group(0)

            expr = modified[paren_start + 1:paren_end]
            return f'({type_str})({expr})'

        modified = re.sub(pattern, repl, modified)
        result_lines.append(modified + comment)

    return ''.join(result_lines)


def fix_casts_in_file(file_path: str) -> int:
    with open(file_path, 'r', encoding='utf-8', errors='replace') as f:
        original = f.read()

    modified = convert_cpp_casts(original)

    if modified != original:
        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(modified)

    orig = len(re.findall(r'\b(?:static_cast|reinterpret_cast|dynamic_cast)\s*<[^<>]+?>\s*\(', original))
    new = len(re.findall(r'\b(?:static_cast|reinterpret_cast|dynamic_cast)\s*<[^<>]+?>\s*\(', modified))
    return orig - new


def main():
    parser = argparse.ArgumentParser(
        description='Check/fix .cpp files for forbidden pointer arithmetic and C++ casts'
    )
    parser.add_argument('paths', nargs='+', help='Files or directories')
    parser.add_argument('--check', action='store_true', default=True,
                        help='Check mode (default)')
    parser.add_argument('--fix-casts', action='store_true',
                        help='Batch convert C++ casts to C-style')
    parser.add_argument('--file-list', action='store_true',
                        help='List .cpp files that would be checked')
    args = parser.parse_args()

    files = find_cpp_files(args.paths)

    if args.file_list:
        for f in files:
            print(f)
        return 0

    if not files:
        print("No .cpp files found.", file=sys.stderr)
        return 2

    if args.fix_casts:
        total = 0
        changed = 0
        for fp in files:
            c = fix_casts_in_file(fp)
            if c > 0:
                total += c
                changed += 1
                print(f"  Fixed {c} casts in {os.path.basename(fp)}")
        print(f"\n  Done: {total} casts fixed in {changed} files")
        return 0

    all_violations = []
    for f in files:
        v = check_file(f)
        all_violations.extend(v)

    if all_violations:
        by_type: Dict[str, int] = {}
        for _, _, desc in all_violations:
            key = desc.split(':')[0]
            by_type[key] = by_type.get(key, 0) + 1

        # Per-line violations (with fix suggestions embedded in the desc string)
        for fp, ln, desc in all_violations:
            try:
                rel = os.path.relpath(fp)
            except ValueError:
                rel = fp
            print(f"{rel}:{ln}: error: {desc}")

        print(f"\n  FAIL: {len(files)} files scanned, "
              f"{len(set(f[0] for f in all_violations))} files with violations")
        for k, v in sorted(by_type.items()):
            print(f"  {k}: {v}")
        print(f"  TOTAL: {len(all_violations)}")
        print()

        by_file: Dict[str, List] = {}
        for fp, ln, desc in all_violations:
            by_file.setdefault(fp, []).append((ln, desc))

        print("  Top files:")
        for fp in sorted(by_file.keys(), key=lambda f: -len(by_file[f]))[:15]:
            entries = by_file[fp]
            try:
                rel = os.path.relpath(fp)
            except ValueError:
                rel = fp
            tc: Dict[str, int] = {}
            for _, d in entries:
                k = d.split(':')[0]
                tc[k] = tc.get(k, 0) + 1
            summary = ', '.join(f'{k}:{v}' for k, v in sorted(tc.items()))
            print(f"    {rel}  ({len(entries)}: {summary})")

        print(f"\n  FIX: python tools/fix_member_access.py --fix-casts src/ app/")
        print(f"  FIX: Manually convert remaining ptr-arithmetic to ->member access")
        sys.exit(1)
    else:
        print(f"  OK: {len(files)} files scanned - 0 violations")
        sys.exit(0)


if __name__ == '__main__':
    sys.exit(main())
