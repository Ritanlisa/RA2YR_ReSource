#!/usr/bin/env python3
"""
check_pointer_arithmetic.py — Fast regex enforcement for coding standards (B.5 gate).

SCOPE (changed 2026-06-24):
  This gate now checks ONLY function implementations modified by `git diff HEAD`,
  matching how B.2 (check_translated_functions.py) scopes its checks. It no longer
  walks the whole tree via os.walk. Rationale: untranslated stub files
  (subs_*.cpp / sub_stubs.cpp, Task 17/18) contain ~10,000 IDA artifacts
  (dword_N/sub_N) that are translation-phase placeholders, NOT bugs. Scanning them
  blocked the build. The DETECTION patterns below are unchanged — only the SCOPE
  is narrowed to git-diff-tracked .cpp function bodies.

What gets checked:
  - Only .cpp files that appear in `git diff HEAD -- src/ app/`
  - Only functions whose line range intersects the changed lines (brace-balanced)
  - Stub / generated files are skipped: subs_*.cpp, sub_stubs.cpp, _generated/, menu_globals_gen
  - .hpp files are NEVER checked (cpp implementations only)

Detection (UNCHANGED — supplements .clang-tidy):

  1. C++ casts: static_cast, dynamic_cast, reinterpret_cast  (C-style casts ONLY)
  2. Pointer arithmetic on class instances  (member access must use . / ->)
  3. IDA decompiler artifact detection (vN, field_N, dword_N, sub_N)
  4. goto statements (forbidden)

Coding convention: C-style casts ONLY — (Type)expr or Type(expr).
Member access convention: use . and -> only. No pointer arithmetic for member access.
Operator[] is only allowed on explicitly declared arrays (int a[10], int a[]).
Raw pointers (int* p) must NEVER use p[i], even when i is a variable.

True violations (class member access via pointer arithmetic):
  (uint8_t*)this + N           ->  &this->memberAtOffset(N)
  *(int*)((uint8_t*)ptr + N)   ->  ptr->member_name
  ((int*)this)[N]              ->  this->member_name
  typeData[N/4]                ->  type->member_name
  (TYPE*)0xNNNN                ->  named global variable

Legitimate (not violations):
  *(uint16_t*)(buf + N)        — binary header parsing (buf is byte array)
  (uint16_t*)data + N          — cipher/memory operations
  arr[i]                       — array subscript (explicitly declared array)
  ptr->member                  — proper member access
  g_mixPool[i]                 — class object operator[] (not pointer)

Exit code:
  0 = no modified .cpp functions violate (or nothing to check)
  1 = at least one modified function violates

Usage:
    python tools/check_pointer_arithmetic.py            # git-diff mode (src/ app/)
    python tools/check_pointer_arithmetic.py src/ app/  # dir args ignored, git-diff mode
    python tools/check_pointer_arithmetic.py FILE.cpp   # check ALL functions in FILE (test mode)
"""

import sys
import os
import re
import fnmatch
import subprocess

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

# ── Skipped file patterns ──
# Directory substring matches (generated trees) + filename globs (translation-phase stubs).
SKIP_DIR_PATTERNS = ['_generated/', 'menu_globals_gen']
SKIP_FILE_GLOBS = ['subs_*.cpp', 'sub_stubs.cpp']


def _should_skip(filepath):
    """Check if a file should be skipped (generated trees + untranslated stub files)."""
    norm = filepath.replace('\\', '/')
    for pat in SKIP_DIR_PATTERNS:
        if pat in norm:
            return True
    basename = norm.rsplit('/', 1)[-1]
    for glob in SKIP_FILE_GLOBS:
        if fnmatch.fnmatch(basename, glob):
            return True
    return False


# ═══════════════════════════════════════════════════
# Phase 1: git diff parsing  (scope, mirrors B.2)
# ═══════════════════════════════════════════════════

def _parse_git_diff():
    """Run git diff and return dict: {filepath: set of changed line numbers}.

    Uses --unified=0 to get minimal output. Parses @@ headers to find which
    lines in the current working tree were changed. Scoped to src/ and app/
    to match B.2 (check_translated_functions.py).
    """
    repo_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    try:
        result = subprocess.run(
            ['git', 'diff', 'HEAD', '--unified=0', '--', 'src/', 'app/'],
            capture_output=True, text=True, encoding='utf-8', errors='replace',
            cwd=repo_root
        )
    except Exception:
        print("ERROR: git diff failed", file=sys.stderr)
        sys.exit(2)

    if result.returncode != 0:
        print(f"ERROR: git diff returned {result.returncode}", file=sys.stderr)
        if result.stderr.strip():
            print(result.stderr, file=sys.stderr)
        sys.exit(2)

    output = result.stdout
    if not output.strip():
        return {}

    changed = {}  # filepath → set of line numbers
    current_file = None
    lines = output.split('\n')
    i = 0
    while i < len(lines):
        line = lines[i]

        # File header: diff --git a/path b/path
        if line.startswith('diff --git'):
            parts = line.split()
            if len(parts) >= 4:
                b_path = parts[3]  # b/src/structure/unit.cpp
                current_file = b_path[2:] if b_path.startswith('b/') else b_path
            i += 1
            continue

        # Hunk header: @@ -old_start,old_count +new_start,new_count @@
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


# ═══════════════════════════════════════════════════
# Phase 2: Function boundary extraction  (mirrors B.2)
# ═══════════════════════════════════════════════════

# ── Non-function-definition first words ──
_NON_FUNC_FIRST_WORDS = {
    'if', 'for', 'while', 'switch', 'catch', 'return',
    'class', 'struct', 'namespace', 'enum', 'extern', 'template',
    'typedef', 'using', 'sizeof', 'assert', 'new', 'delete',
    'else', 'do', 'goto', 'case', 'default',
}


def _is_func_header(code):
    """Check if a line of code looks like a function definition header."""
    if not code:
        return False
    if code.startswith('//') or code.startswith('/*') or code.startswith('*'):
        return False
    if code.startswith('#'):
        return False
    # Reject constructor initializer-list lines
    if code[0] in ',:':
        return False
    if '(' not in code or ')' not in code:
        return False
    if code.rstrip().endswith(';'):
        return False
    # First word must not be a control-flow / declaration keyword
    m = re.match(r'^\s*(\w+)', code)
    if m and m.group(1) in _NON_FUNC_FIRST_WORDS:
        return False
    # Heuristic: part before outermost ( needs space or :: (return type + func name)
    before_paren = code.split('(')[0].strip()
    if ' ' not in before_paren and '::' not in before_paren:
        if not before_paren.startswith('~'):
            return False
    return True


def extract_functions(lines):
    """Extract function boundaries from source lines.

    Yields: (start_1based, end_1based, sig_text, body_lines, body_line_nums)
    where start/end span the brace-delimited body and body_line_nums are 1-based.
    """
    i = 0
    n = len(lines)
    while i < n:
        stripped = lines[i].strip()
        code = stripped.split('//')[0].strip()

        if not code or code.startswith('//') or code.startswith('#') or \
           code.startswith('/*') or code.startswith('*'):
            i += 1
            continue

        brace_line = -1
        sig_start = i

        if _is_func_header(code) and '{' in code:
            brace_line = i
        elif _is_func_header(code):
            sig_end = i
            for j in range(i + 1, min(i + 5, n)):
                ns = lines[j].strip().split('//')[0].strip()
                if ns == '{':
                    brace_line = j
                    break
                if ';' in ns and '(' not in ns:
                    break
                if _is_func_header(ns) or ns == '{':
                    brace_line = j
                    break
                sig_end = j
            if brace_line < 0:
                i = sig_end + 1
                continue
        else:
            i += 1
            continue

        # Extract body by counting braces
        depth = 0
        body_raw_lines = []
        body_line_nums = []

        for j in range(brace_line, n):
            line = lines[j]
            code_line_only = line.split('//')[0]
            body_raw_lines.append(line)
            body_line_nums.append(j + 1)
            for ch in code_line_only:
                if ch == '{':
                    depth += 1
                elif ch == '}':
                    depth -= 1
                    if depth == 0:
                        sig_lines = lines[sig_start:brace_line + 1]
                        sig_text = ''.join(sig_lines)
                        yield (brace_line + 1, j + 1,
                               sig_text, body_raw_lines, body_line_nums)
                        i = j + 1
                        break
            if depth == 0:
                i = j + 1
                break
        else:
            i = brace_line + 1
            continue


# ═══════════════════════════════════════════════════
# Phase 3: Per-line violation checks  (detection UNCHANGED)
# ═══════════════════════════════════════════════════

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


def check_lines(numbered_lines):
    """Scan (line_no, line_text) pairs for violations.

    Detection logic is identical to the previous whole-file scan; only the input
    is now restricted to the body lines of git-modified functions.

    Returns list of (line_no, text, desc, match).
    """
    violations = []
    for line_no, line in numbered_lines:
        if is_comment_or_empty(line):
            continue
        if is_string_literal_line(line):
            continue

        # Only search code part (before // comment)
        code_part = line.split('//')[0]

        # ── Check C++ casts ──
        m = _RE_STATIC_CAST.search(code_part)
        if m:
            violations.append((line_no, line.rstrip(), 'static_cast', m.group(0)))
            continue

        m = _RE_DYNAMIC_CAST.search(code_part)
        if m:
            violations.append((line_no, line.rstrip(), 'dynamic_cast', m.group(0)))
            continue

        m = _RE_REINTERPRET_CAST.search(code_part)
        if m:
            violations.append((line_no, line.rstrip(), 'reinterpret_cast', m.group(0)))
            continue

        # ── Check goto statements (forbidden) ──
        m = _RE_GOTO.search(code_part)
        if m:
            violations.append((line_no, line.rstrip(), 'goto statement (forbidden)', m.group(0)))
            continue

        # ── Check pointer arithmetic patterns ──
        matched = False
        for compiled_re, desc in PATTERNS:
            m = compiled_re.search(code_part)
            if m:
                violations.append((line_no, line.rstrip(), desc, m.group(0)))
                matched = True
                break  # one violation per line
        if matched:
            continue

        # ── Check IDA decompiler artifacts ──
        for compiled_re, desc in IDA_ARTIFACT_PATTERNS:
            m = compiled_re.search(code_part)
            if m:
                violations.append((line_no, line.rstrip(), desc, m.group(0)))
                break  # one violation per line

    return violations


def check_file_functions(filepath, changed_lines):
    """Check only functions in filepath whose line range intersects changed_lines.

    Returns list of (line_no, text, desc, match).
    """
    try:
        with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
            lines = f.readlines()
    except Exception:
        return []

    violations = []
    for func_start, func_end, sig_text, body_lines, body_line_nums in extract_functions(lines):
        func_range = set(range(func_start, func_end + 1))
        if not (func_range & changed_lines):
            continue
        numbered = list(zip(body_line_nums, body_lines))
        violations.extend(check_lines(numbered))
    return violations


# ═══════════════════════════════════════════════════
# Phase 4: Fix suggestions  (UNCHANGED)
# ═══════════════════════════════════════════════════

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
    basename = os.path.splitext(os.path.basename(filepath))[0]  # 'unit'
    # Heuristic: capitalize first letter, add 'Class' suffix
    # For compound names like building_type → BuildingTypeClass
    parts = basename.split('_')
    guessed = ''.join(p.capitalize() for p in parts) + 'Class'
    return guessed


# ═══════════════════════════════════════════════════
# Phase 5: Orchestration
# ═══════════════════════════════════════════════════

def main():
    args = sys.argv[1:]
    repo_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

    # Positional .cpp file args → check ALL functions in those files (test mode).
    # Directory args (e.g. run_all_gates.py passes "src/ app/") are ignored:
    # we always scope to git-diff, mirroring B.2.
    explicit_files = [a for a in args if a.endswith('.cpp')]

    if explicit_files:
        changed_files = {}
        for f in explicit_files:
            abs_path = os.path.join(repo_root, f) if not os.path.isabs(f) else f
            if os.path.isfile(abs_path):
                with open(abs_path, 'r', encoding='utf-8', errors='replace') as fh:
                    line_count = len(fh.readlines())
                # Mark every line as "changed" so all functions are checked
                changed_files[f.replace('\\', '/')] = set(range(1, line_count + 1))
            else:
                print(f"WARNING: Skipping '{f}' — not found", file=sys.stderr)
    else:
        # Git-diff mode: only functions modified in src/ app/
        changed_files = _parse_git_diff()

    if not changed_files:
        print("No modified .cpp functions to check.")
        sys.exit(0)

    violation_count = 0
    files_checked = 0

    for rel_path, changed_line_set in sorted(changed_files.items()):
        # Only .cpp implementations — never .hpp
        if not rel_path.endswith('.cpp'):
            continue
        # Skip generated trees + untranslated stub files
        if _should_skip(rel_path):
            continue

        abs_path = rel_path if os.path.isabs(rel_path) else os.path.join(repo_root, rel_path)
        if not os.path.isfile(abs_path):
            continue

        files_checked += 1
        violations = check_file_functions(abs_path, changed_line_set)
        for line_no, line_text, desc, match in violations:
            snippet = match if match else line_text.strip()
            if len(snippet) > 120:
                snippet = snippet[:117] + '...'
            fix = _get_fix_suggestion(desc, match, abs_path)
            print(f"{abs_path}:{line_no}: error: {desc}: {snippet} {fix}")
            violation_count += 1

    if violation_count > 0:
        print(f"\n{violation_count} error(s) in {files_checked} modified file(s) scanned.")
        sys.exit(1)
    else:
        print(f"{files_checked} modified file(s) scanned, 0 errors.")
        sys.exit(0)


if __name__ == '__main__':
    main()
