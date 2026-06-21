#!/usr/bin/env python3
"""
check_translated_functions.py — Check only functions modified by git diff.

Workflow:
  1. git diff HEAD --unified=0 -- src/ app/ → find changed line ranges
  2. Parse .cpp files to find which functions contain those changed lines
  3. For each modified function, check all coding-standard violations
  4. Output: src/file.cpp:NNN: function_name: PASS/FAIL (reason)

Checks applied per-function:
  - ≥3 real code lines                 (stub detection)
  - Comment-to-code ratio < 50%        (comment shell)
  - 0 raw pointer patterns             (ptr-arithmetic, cast-index, array-div, hex-ptr)
  - 0 C++ casts                        (static_cast, dynamic_cast, reinterpret_cast)
  - 0 gotos                            (forbidden)
  - 0 IDA artifacts                    (vN, field_N, dword_N, sub_N)

Exit code: 0 = all modified functions pass, 1 = ≥1 function fails.
If no .cpp files modified → exit 0 (nothing to check).

Integration: Replaces check_pointer_arithmetic.py in CMakeLists.txt
             check_code_quality target.
"""

import subprocess
import sys
import os
import re

# ── Skipped file patterns ──
SKIP_PATTERNS = ['_generated/', 'menu_globals_gen']

def _should_skip(filepath):
    """Check if file should be skipped (generated files)."""
    norm = filepath.replace('\\', '/')
    for pat in SKIP_PATTERNS:
        if pat in norm:
            return True
    return False

# ── C++ cast patterns ──
_RE_STATIC_CAST    = re.compile(r'\bstatic_cast\s*<')
_RE_DYNAMIC_CAST   = re.compile(r'\bdynamic_cast\s*<')
_RE_REINTERPRET_CAST = re.compile(r'\breinterpret_cast\s*<')

# ── Pointer arithmetic patterns ──
_RE_PTR_ARITH = re.compile(
    r'\(\s*(?:(?:const\s+)?uint8_t|char)\s*\*\s*\)\s*\w+\s*\+\s*\d+'
    r'|\(\s*\w+\s*\*\s*\)\s*\(\s*\((?:uintptr_t|size_t|intptr_t)\)\s*\w+\s*\)\s*\+\s*\d+'
)

_RE_CAST_INDEX = re.compile(
    r'\(\s*\(\s*(?:int|uint32_t|uint16_t|uint8_t|float|double'
    r'|char|short|byte|DWORD|WORD|BYTE|void)\s*\*\s*\)\s*\w+\s*\)\s*\[\s*\d+'
)

_RE_ARRAY_DIV = re.compile(
    r'\b\w+\s*\[\s*\d+\s*/\s*[1248]\s*\]'
)

_RE_HEX_PTR = re.compile(
    r'\(\s*(?:uint8_t|char|int|uint32_t|float|void|DWORD|BYTE)\s*\*\s*\)\s*0x[0-9A-Fa-f]{4,}'
    r'|\*\s*\(\s*(?:int|uint32_t|float)\s*\*\s*\)\s*\(\s*0x[0-9A-Fa-f]{4,}'
)

_RE_GOTO = re.compile(r'\bgoto\s+')

PTR_PATTERNS = [
    (_RE_PTR_ARITH,   'ptr-arithmetic'),
    (_RE_CAST_INDEX,  'cast-index'),
    (_RE_ARRAY_DIV,   'array-div'),
    (_RE_HEX_PTR,     'hex-ptr'),
]

# ── IDA artifact patterns ──
_RE_VN      = re.compile(r'\bv\d+\b')
_RE_FIELD_N = re.compile(r'\bfield_[0-9A-Fa-f]+\b')
_RE_DWORD_N = re.compile(r'\bdword_[0-9A-Fa-f]+\b')
_RE_SUB_N   = re.compile(r'\bsub_[0-9A-Fa-f]+\b')

IDA_PATTERNS = [
    (_RE_VN,      'IDA artifact: vN'),
    (_RE_FIELD_N, 'IDA artifact: field_N'),
    (_RE_DWORD_N, 'IDA artifact: dword_N'),
    (_RE_SUB_N,   'IDA artifact: sub_N'),
]

# ── Stub marker pattern ──
_RE_STUB_MARKER = re.compile(r'//\s*(?:TODO|STUB|stub|FIXME)')

# ── Non-function-definition first words ──
_NON_FUNC_FIRST_WORDS = {
    'if', 'for', 'while', 'switch', 'catch', 'return',
    'class', 'struct', 'namespace', 'enum', 'extern', 'template',
    'typedef', 'using', 'sizeof', 'assert', 'new', 'delete',
    'else', 'do', 'goto', 'case', 'default',
}


# ═══════════════════════════════════════════════════
# Phase 1: git diff parsing
# ═══════════════════════════════════════════════════

def _parse_git_diff():
    """Run git diff and return dict: {filepath: set of changed line numbers}.

    Uses --unified=0 to get minimal output. Parses @@ headers to find
    which lines in the current working tree were changed.
    """
    try:
        result = subprocess.run(
            ['git', 'diff', 'HEAD', '--unified=0', '--', 'src/', 'app/'],
            capture_output=True, text=True, encoding='utf-8', errors='replace',
            cwd=os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
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

    # Parse diff output
    changed = {}  # filepath → set of line numbers
    current_file = None
    i = 0
    lines = output.split('\n')

    while i < len(lines):
        line = lines[i]

        # File header: diff --git a/path b/path
        if line.startswith('diff --git'):
            # Extract b/path (the current file)
            parts = line.split()
            if len(parts) >= 4:
                b_path = parts[3]  # b/src/structure/unit.cpp
                if b_path.startswith('b/'):
                    current_file = b_path[2:]
                else:
                    current_file = b_path
            i += 1
            continue

        # Hunk header: @@ -old_start,old_count +new_start,new_count @@
        if line.startswith('@@') and current_file:
            m = re.match(r'@@ -(\d+)(?:,(\d+))? \+(\d+)(?:,(\d+))? @@', line)
            if m:
                old_start = int(m.group(1))
                old_count = int(m.group(2)) if m.group(2) else 1
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
# Phase 2: Function boundary extraction
# ═══════════════════════════════════════════════════

def _is_comment_or_empty(line):
    """Check if a line is a comment, preprocessor directive, or empty."""
    stripped = line.strip()
    if not stripped:
        return True
    if stripped.startswith('//') or stripped.startswith('/*') or stripped.startswith('*'):
        return True
    if stripped.startswith('#include') or stripped.startswith('#pragma'):
        return True
    return False


def _is_real_code_line(line):
    """Check if a line contains actual C++ code (not comment, blank, brace-only)."""
    code = line.split('//')[0].strip()
    if not code:
        return False
    if code in ('{', '}', '};'):
        return False
    if code.startswith('#'):
        return False
    return True


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
    where body_line_nums are 1-based line numbers.
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
        body_start_col = lines[brace_line].find('{')
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


def _extract_func_name(sig_text):
    """Extract just the function name from a signature.

    Handles: type ClassName::MethodName(args), type FunctionName(args)
    """
    sig_one_line = sig_text.replace('\n', ' ').replace('\r', ' ').strip()
    # Remove trailing { and space
    sig_one_line = sig_one_line.rstrip('{').strip()

    # Find the last token before the outermost (
    # Strategy: find the name that comes right before (args)
    # For "int UnitClass::Scatter()" → "Scatter"
    # For "void Foo(Bar* p)" → "Foo"

    # Extract the part immediately before (
    m = re.search(r'(\b\w+(?:::~\w+)?)\s*\(', sig_one_line)
    if m:
        name = m.group(1)
        # Extract just the last part after ::
        if '::' in name:
            name = name.split('::')[-1]
        return name
    return 'unknown'


# ═══════════════════════════════════════════════════
# Phase 3: Per-function violation checks
# ═══════════════════════════════════════════════════

def _check_body_for_violations(body_lines, body_line_nums, func_start_line):
    """Check a function body for all violation categories.

    Returns list of (line_no, category, detail).
    """
    violations = []
    reported_lines = set()

    for idx, body_line in enumerate(body_lines):
        line_no = body_line_nums[idx]
        if _is_comment_or_empty(body_line):
            continue

        code_part = body_line.split('//')[0]

        # Check C++ casts
        if _RE_STATIC_CAST.search(code_part):
            violations.append((line_no, 'C++ cast', 'static_cast'))
            reported_lines.add(line_no)
            continue
        if _RE_DYNAMIC_CAST.search(code_part):
            violations.append((line_no, 'C++ cast', 'dynamic_cast'))
            reported_lines.add(line_no)
            continue
        if _RE_REINTERPRET_CAST.search(code_part):
            violations.append((line_no, 'C++ cast', 'reinterpret_cast'))
            reported_lines.add(line_no)
            continue

        # Check goto
        if _RE_GOTO.search(code_part):
            violations.append((line_no, 'goto', 'goto statement (forbidden)'))
            reported_lines.add(line_no)
            continue

        # Check pointer arithmetic patterns
        for compiled_re, desc in PTR_PATTERNS:
            if compiled_re.search(code_part):
                match_text = compiled_re.search(code_part).group(0)
                violations.append((line_no, 'ptr-arithmetic', match_text))
                reported_lines.add(line_no)
                break

        # Check IDA artifacts
        for compiled_re, desc in IDA_PATTERNS:
            if compiled_re.search(code_part):
                match_text = compiled_re.search(code_part).group(0)
                violations.append((line_no, 'IDA artifact', match_text))
                reported_lines.add(line_no)
                break

    return violations


def _check_stub(body_lines, body_line_nums, sig_text):
    """Check if a function is a stub or comment shell.

    Returns (is_stub: bool, reason: str or None).
    """
    real_code_lines = 0
    comment_only_lines = 0
    has_comment_only = False
    has_stub_marker = False

    for idx, body_line in enumerate(body_lines):
        line_no = body_line_nums[idx]
        code_part = body_line.split('//')[0].strip()
        comment_part = ''
        if '//' in body_line:
            comment_part = body_line.split('//', 1)[1]

        if _is_real_code_line(body_line):
            real_code_lines += 1

        stripped_comment = comment_part.strip()
        if not code_part and stripped_comment:
            has_comment_only = True
            comment_only_lines += 1

        if _RE_STUB_MARKER.search(comment_part):
            has_stub_marker = True

    # Rule 1: < 3 real code lines → stub
    if real_code_lines < 3:
        extra = ''
        if has_stub_marker:
            extra += ' (has // TODO/stub/FIXME)'
        return True, f"stub: {real_code_lines} real line(s){extra}"

    # Rule 2: comment-only lines + < 5 real → comment shell
    if has_comment_only and real_code_lines < 5:
        significant = real_code_lines + comment_only_lines
        pct = int(comment_only_lines * 100 / significant) if significant > 0 else 0
        return True, f"comment shell: {comment_only_lines}/{significant} lines = {pct}% comments, {real_code_lines} real"

    # Rule 3: comment ratio > 50%
    significant = real_code_lines + comment_only_lines
    if significant > 0:
        ratio = comment_only_lines / significant
        if ratio > 0.5:
            pct = int(ratio * 100)
            return True, f"comment shell: {comment_only_lines}/{significant} lines = {pct}% comments, {real_code_lines} real"

    return False, None


# ═══════════════════════════════════════════════════
# Phase 4: Orchestration
# ═══════════════════════════════════════════════════

def _check_function(sig_text, body_lines, body_line_nums, func_start_line):
    """Run all checks on a single function. Returns list of failure reasons."""
    failures = []

    # Check stub/comment-shell
    is_stub, stub_reason = _check_stub(body_lines, body_line_nums, sig_text)
    if is_stub:
        failures.append(stub_reason)

    # Check for coding violations
    vios = _check_body_for_violations(body_lines, body_line_nums, func_start_line)
    for line_no, category, detail in vios:
        failures.append(f"{category}: {detail}")

    return failures


def _process_file(filepath, changed_lines):
    """Check a single file for violations in changed functions.

    Returns list of output lines.
    """
    try:
        with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
            lines = f.readlines()
    except Exception as e:
        return [f"{filepath}:0: unknown: FAIL - cannot read file: {e}"]

    outputs = []
    all_pass = True

    for func_start, func_end, sig_text, body_lines, body_line_nums in extract_functions(lines):
        # Check if any changed line falls within this function
        func_line_range = set(range(func_start, func_end + 1))
        if not (func_line_range & changed_lines):
            continue

        func_name = _extract_func_name(sig_text)
        failures = _check_function(sig_text, body_lines, body_line_nums, func_start)

        if failures:
            all_pass = False
            for reason in failures:
                outputs.append(f"{filepath}:{func_start}: {func_name}: FAIL - {reason}")
        else:
            real_count = sum(1 for l in body_lines if _is_real_code_line(l))
            outputs.append(f"{filepath}:{func_start}: {func_name}: PASS - {real_count} real lines, 0 violations")

    return outputs, all_pass


def main():
    # 1. Find changed line ranges via git diff
    changed_files = _parse_git_diff()

    if not changed_files:
        print("No modified .cpp files detected - nothing to check.")
        sys.exit(0)

    # 2. Filter to .cpp files only, skip _generated/ and menu_globals_gen
    repo_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    all_pass = True
    total_checked = 0

    for rel_path, changed_line_set in sorted(changed_files.items()):
        # Only .cpp files
        if not rel_path.endswith('.cpp'):
            continue
        # Skip generated
        if _should_skip(rel_path):
            continue

        abs_path = os.path.join(repo_root, rel_path)
        if not os.path.isfile(abs_path):
            continue

        outputs, file_pass = _process_file(abs_path, changed_line_set)

        for line in outputs:
            print(line)

        if not file_pass:
            all_pass = False

        for line in outputs:
            if 'PASS' in line or 'FAIL' in line:
                total_checked += 1

    if total_checked == 0:
        print("No modified functions found in tracked .cpp files.")
        sys.exit(0)

    if not all_pass:
        print(f"\nFAIL: Some modified functions have violations.")
        sys.exit(1)
    else:
        print(f"\nOK: All {total_checked} modified function(s) pass.")
        sys.exit(0)


if __name__ == '__main__':
    main()
