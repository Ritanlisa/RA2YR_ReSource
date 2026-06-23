#!/usr/bin/env python3
"""
check_pointer_arithmetic.py — Fast regex enforcement for coding standards.

Supplements .clang-tidy by catching patterns clang-tidy can't (or as fast redundancy):

  1. C++ casts: static_cast, dynamic_cast  (clang-tidy can't ban all usage of these)
  2. Pointer arithmetic on class instances  (redundancy with clang-tidy, but fast)
  3. IDA decompiler artifact detection (vN, field_N, dword_N, sub_N)

Coding convention: C-style casts ONLY — (Type)expr or Type(expr).
No static_cast, dynamic_cast, reinterpret_cast.

Member access convention: use . and -> only. No pointer arithmetic for member access.
Operator[] is only allowed on explicitly declared arrays (int a[10], int a[]).
Raw pointers (int* p) must NEVER use p[i], even when i is a variable.

True violations (class member access via pointer arithmetic):
  (uint8_t*)this + N           ->  &this->memberAtOffset(N)
  *(int*)((uint8_t*)ptr + N)   ->  ptr->member_name
  ((int*)this)[N]              ->  this->member_name
  typeData[N/4]                ->  type->member_name
  int* p; ... p[0]             ->  use proper member access

Legitimate (not violations):
  *(uint16_t*)(buf + N)        — binary header parsing (buf is byte array)
  (uint16_t*)data + N          — cipher/memory operations
  arr[i]                       — array subscript (explicitly declared array)
  ptr->member                  — proper member access
  g_mixPool[i]                 — class object operator[] (not pointer)

Exit code: non-zero if violations found.

Usage:
    python tools/check_pointer_arithmetic.py src/ app/
"""

import sys
import os
import re

# ── C++ cast patterns (clang-tidy supplement) ──
_RE_STATIC_CAST = re.compile(r'\bstatic_cast\s*<')
_RE_DYNAMIC_CAST = re.compile(r'\bdynamic_cast\s*<')
_RE_REINTERPRET_CAST = re.compile(r'\breinterpret_cast\s*<')

# ── Pointer arithmetic patterns (merged from fix_member_access.py) ──
# These catch ALL forms of pointer arithmetic for member access,
# including patterns the old version missed:
#   - (uint8_t*)VAR + N where VAR is any variable, not just 'this'
#   - ((int/float/double/void*)VAR)[N] — broader type coverage
#   - (TYPE*)0xNNNN — hex address arithmetic
#   - *(int*)(0xNNNN + offset) — hex pointer deref

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

# Pattern 3: Hex literal pointer: (TYPE*)0xNNNN
_RE_HEX_PTR = re.compile(
    r'\(\s*(?:uint8_t|char|int|uint32_t|float|void|DWORD|BYTE)\s*\*\s*\)\s*0x[0-9A-Fa-f]{4,}'
    r'|\*\s*\(\s*(?:int|uint32_t|float)\s*\*\s*\)\s*\(\s*0x[0-9A-Fa-f]{4,}'
)

# Pattern 4: goto statement (forbidden in this codebase)
_RE_GOTO = re.compile(r'\bgoto\s+')

# ── IDA decompiler artifact patterns ──
# These catch machine-generated identifiers that should be replaced with meaningful names.
# Pattern 5: vN — IDA temporary variables
_RE_VN = re.compile(r'\bv\d+\b')

# Pattern 6: field_N — IDA struct field markers
_RE_FIELD_N = re.compile(r'\bfield_[0-9A-Fa-f]+\b')

# Pattern 7: dword_N — IDA global variable markers
_RE_DWORD_N = re.compile(r'\bdword_[0-9A-Fa-f]+\b')

# Pattern 8: sub_N — unnamed IDA functions (code only, not comments)
# Comment lines are already filtered by is_comment_or_empty() and code_part split.
_RE_SUB_N = re.compile(r'\bsub_[0-9A-Fa-f]+\b')

PATTERNS = [
    (_RE_PTR_ARITH, 'ptr-arithmetic'),
    (_RE_CAST_INDEX, 'cast-index'),
    (_RE_ARRAY_DIV, 'array-div'),
    (_RE_HEX_PTR, 'hex-ptr'),
]

IDA_ARTIFACT_PATTERNS = [
    (_RE_VN,     'IDA artifact: vN'),
    (_RE_FIELD_N, 'IDA artifact: field_N'),
    (_RE_DWORD_N, 'IDA artifact: dword_N'),
    (_RE_SUB_N,   'IDA artifact: sub_N'),
]


def find_cpp_files(paths):
    """Find .cpp files from directories or individual file paths, excluding _generated/."""
    files = []
    for p in paths:
        if os.path.isfile(p) and p.endswith('.cpp'):
            files.append(os.path.abspath(p))
        elif os.path.isdir(p):
            for root, dirs, filenames in os.walk(p):
                dirs[:] = [dn for dn in dirs if dn != '_generated']
                for fn in filenames:
                    if fn.endswith('.cpp'):
                        files.append(os.path.join(root, fn))
    return sorted(files)


def is_comment_or_empty(line):
    """Check if a line is a comment, preprocessor directive, or empty."""
    stripped = line.strip()
    if not stripped:
        return True
    if stripped.startswith('//') or stripped.startswith('/*') or stripped.startswith('*'):
        return True
    if stripped.startswith('#include') or stripped.startswith('#pragma'):
        return True
    return False


def is_string_literal_line(line):
    """Check if a line starts with a string literal (log messages, etc)."""
    stripped = line.lstrip()
    if stripped.startswith('"') and not any(c in stripped for c in '=;()'):
        return True
    return False






def check_file(filepath):
    """Scan a file for violations. Returns list of (line_no, text, desc, match)."""
    # Skip generated files
    if '_generated' in filepath.replace('\\', '/') or 'menu_globals_gen' in filepath:
        return []

    violations = []
    try:
        with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
            lines = f.readlines()
    except Exception:
        return violations

    # ── Pass 1: existing line-level checks (casts + pointer arithmetic patterns) ──
    for i, line in enumerate(lines, 1):
        if is_comment_or_empty(line):
            continue
        if is_string_literal_line(line):
            continue

        # Only search code part (before // comment)
        code_part = line.split('//')[0]

        # ── Check C++ casts ──
        m = _RE_STATIC_CAST.search(code_part)
        if m:
            violations.append((i, line.rstrip(), 'static_cast', m.group(0)))
            continue

        m = _RE_DYNAMIC_CAST.search(code_part)
        if m:
            violations.append((i, line.rstrip(), 'dynamic_cast', m.group(0)))
            continue

        m = _RE_REINTERPRET_CAST.search(code_part)
        if m:
            violations.append((i, line.rstrip(), 'reinterpret_cast', m.group(0)))
            continue

        # ── Check goto statements (forbidden) ──
        m = _RE_GOTO.search(code_part)
        if m:
            violations.append((i, line.rstrip(), 'goto statement (forbidden)', m.group(0)))
            continue

        # ── Check pointer arithmetic patterns ──
        for compiled_re, desc in PATTERNS:
            m = compiled_re.search(code_part)
            if m:
                violations.append((i, line.rstrip(), desc, m.group(0)))
                break  # one violation per line

        # ── Check IDA decompiler artifacts ──
        for compiled_re, desc in IDA_ARTIFACT_PATTERNS:
            m = compiled_re.search(code_part)
            if m:
                violations.append((i, line.rstrip(), desc, m.group(0)))
                break  # one violation per line

    return violations


def _get_fix_suggestion(desc, match_text, filepath):
    """Generate actionable fix suggestion for a violation.

    Returns a string like '→ use this->memberName instead. Run: lookup_member.py <ClassName> 692'
    or '→ use C-style cast: (type)(expr)'.
    """
    # ── ptr-arithmetic: (char*)this + 692 or (uint8_t*)Type + 2048 ──
    if desc == 'ptr-arithmetic':
        m = re.search(r'\(\s*(?:const\s+)?(?:uint8_t|char)\s*\*\s*\)\s*(\w+)\s*\+\s*(\d+)', match_text)
        if m:
            var_name = m.group(1)
            offset = m.group(2)
            if var_name == 'this':
                cls = _guess_class_from_filepath(filepath)
                return f'→ use this->memberName instead. Run: lookup_member.py {cls} {offset}'
            else:
                cls = _guess_class_from_filepath(filepath)
                return f'→ use {var_name}->memberName instead. Run: lookup_member.py {cls} {offset}'
        return '→ use ->member access instead of pointer arithmetic'

    # ── cast-index: ((int*)this)[47] ──
    if desc == 'cast-index':
        m = re.search(r'\(\s*\(\s*\w+\s*\*\s*\)\s*(\w+)\s*\)\s*\[\s*(\d+)', match_text)
        if m:
            var_name = m.group(1)
            idx = int(m.group(2))
            cls = _guess_class_from_filepath(filepath)
            if var_name == 'this':
                return f'→ use this->memberName instead. Run: lookup_member.py {cls} {idx * 4}'
            else:
                return f'→ use {var_name}->memberName instead. Run: lookup_member.py {cls} {idx * 4}'
        return '→ use ->member access instead of pointer subscript'

    # ── array-div: typeData[2048/4] ──
    if desc == 'array-div':
        m = re.search(r'(\w+)\s*\[\s*(\d+)\s*/\s*([1248])', match_text)
        if m:
            var_name = m.group(1)
            offset = m.group(2)
            return f'→ use {var_name}->memberName instead. Run: lookup_member.py <ClassName> {offset}'
        return '→ use ->member access instead of array-div subscript'

    # ── hex-ptr: *(int*)0x87F7E8 or (TYPE*)0xNNNN ──
    if desc == 'hex-ptr':
        m = re.search(r'0x[0-9A-Fa-f]+', match_text)
        if m:
            addr = m.group(0)
            return f'→ use named global variable instead. Check src/**/globals_*.hpp (IDA: {addr})'
        return '→ use named global variable instead. Check src/**/globals_*.hpp'

    # ── C++ casts ──
    if desc == 'static_cast':
        return '→ use C-style cast: (type)(expr)'
    if desc == 'dynamic_cast':
        return '→ use C-style cast: (type)(expr)'
    if desc == 'reinterpret_cast':
        return '→ use C-style cast: (type)(expr)'

    # ── goto statement ──
    if desc.startswith('goto'):
        return '→ replace with structured control flow (if/else, while, switch)'

    # ── IDA artifacts ──
    if desc == 'IDA artifact: vN':
        return '→ replace with meaningful variable name (e.g., targetCount, cellIndex)'
    if desc == 'IDA artifact: field_N':
        return '→ use member name from class header: this->memberName'
    if desc == 'IDA artifact: dword_N':
        return '→ declare as extern with proper name: extern int g_VariableName;'
    if desc == 'IDA artifact: sub_N':
        return '→ use named function if implemented, or declare proper stub'

    return ''


def _guess_class_from_filepath(filepath):
    """Guess class name from source file path. e.g. src/structure/unit.cpp → UnitClass"""
    import os
    basename = os.path.splitext(os.path.basename(filepath))[0]  # 'unit'
    # Heuristic: capitalize first letter, add 'Class' suffix
    # For compound names like building_type → BuildingTypeClass
    parts = basename.split('_')
    guessed = ''.join(p.capitalize() for p in parts) + 'Class'
    return guessed


def main():
    if len(sys.argv) < 2:
        print("Usage: python check_pointer_arithmetic.py <dir1> [dir2 ...]", file=sys.stderr)
        sys.exit(2)

    directories = sys.argv[1:]
    cpp_files = find_cpp_files(directories)

    violation_count = 0
    files_scanned = 0

    for filepath in cpp_files:
        violations = check_file(filepath)
        if violations:
            files_scanned += 1
            for line_no, line_text, desc, match in violations:
                # Extract a concise snippet from the match / line
                snippet = match if match else line_text.strip()
                # Truncate long snippets to max ~100 chars
                if len(snippet) > 120:
                    snippet = snippet[:117] + '...'
                fix = _get_fix_suggestion(desc, match, filepath)
                print(f"{filepath}:{line_no}: error: {desc}: {snippet} {fix}")
                violation_count += 1
        else:
            # Also count successfully scanned files
            files_scanned += 1

    if violation_count > 0:
        print(f"\n{violation_count} error(s) in {files_scanned} file(s) scanned.")
        sys.exit(1)
    else:
        print(f"{files_scanned} file(s) scanned, 0 errors.")
        sys.exit(0)


if __name__ == '__main__':
    main()
