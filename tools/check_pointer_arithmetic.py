#!/usr/bin/env python3
"""
check_pointer_arithmetic.py — Fast regex enforcement for coding standards.

Supplements .clang-tidy by catching patterns clang-tidy can't (or as fast redundancy):

  1. C++ casts: static_cast, dynamic_cast  (clang-tidy can't ban all usage of these)
  2. Pointer arithmetic on class instances  (redundancy with clang-tidy, but fast)
  3. Pointer [] operator ban               (no raw pointer subscript on non-arrays)
   4. Stub detection                        (3-rule: <3 real lines, comment-only+<5, >50% comment ratio)

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

# ── Keywords that indicate NOT a function definition ──
_NON_FUNC_FIRST_WORDS = {
    'if', 'for', 'while', 'switch', 'catch', 'return',
    'class', 'struct', 'namespace', 'enum', 'extern', 'template',
    'typedef', 'using', 'sizeof', 'assert', 'new', 'delete',
    'else', 'do', 'goto', 'case', 'default',
}

# ── Patterns for pointer variable declaration ──
# Matches: Type* name, Type * name, Type*name, auto* name, const Type* name
# Captures the variable name. Avoids matching inside template <...> by
# requiring the name to be followed by = ; , or ) (not < or >).
_RE_PTR_DECL = re.compile(
    r'(?:^|[;{,(])\s*'          # start of statement or after separator
    r'(?:const\s+)?'             # optional const
    r'(?:auto|[\w:]+)\s*'        # type name (with optional ::)
    r'\*\s*'                     # asterisk
    r'(\w+)'                     # variable name
    r'\s*[=;,)]'                 # followed by = ; , or )
)

# Matches multi-declaration: int *a, *b, *c
_RE_MULTI_PTR = re.compile(
    r',\s*\*\s*(\w+)'
)

# Matches pointer in function parameter: void Foo(int* p)
_RE_PARAM_PTR = re.compile(
    r'\(\s*(?:const\s+)?(?:auto|[\w:]+)\s*\*\s*(\w+)\s*[,)]'
)

# ── Pattern for cast + subscript: (Type*)expr[...] ──
_RE_CAST_SUBSCRIPT = re.compile(
    r'\(\s*\(\s*(?:const\s+)?[\w:]+\s*\*\s*\)\s*\w+\s*\)\s*\['
)

# ── Pattern for TODO/stub markers ──
_RE_STUB_MARKER = re.compile(
    r'//\s*(?:TODO|STUB|stub|FIXME)'
)

# ── Pointer name used with []: identifier[...] ──
# We build this dynamically after collecting pointer var names
def _build_ptr_subscript_re(ptr_names):
    """Build regex to match ptr_name[...] for given pointer names."""
    if not ptr_names:
        return None
    # Sort by length descending so longer names match first
    names = sorted(ptr_names, key=len, reverse=True)
    pattern = r'\b(' + '|'.join(re.escape(n) for n in names) + r')\s*\['
    return re.compile(pattern)


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


def _is_func_header(code):
    """Check if a line of code looks like a function definition header.
    True if: has ( and ), doesn't start with a control-flow keyword,
    and isn't a statement (doesn't end with ;).
    """
    if not code:
        return False
    if code.startswith('//') or code.startswith('/*') or code.startswith('*'):
        return False
    if code.startswith('#'):
        return False
    # Reject constructor initializer-list lines: ", Member(value)" or ": Base(value)"
    if code[0] in ',:':
        return False
    # Must have ( and )
    if '(' not in code or ')' not in code:
        return False
    # Must not end with ; (variable assignment / statement)
    if code.rstrip().endswith(';'):
        return False
    # First word must not be a control-flow / declaration keyword
    m = re.match(r'^\s*(\w+)', code)
    if m and m.group(1) in _NON_FUNC_FIRST_WORDS:
        return False
    # Reject single-identifier calls: just "Name(args)" without a return type
    # (e.g. initializer "Member(value)" — no scope resolution, no preceding type)
    # A function definition has a return type before the function name.
    # Heuristic: the part before the outermost ( should contain at least
    # one space (separating return type from function name), OR contain ::
    before_paren = code.split('(')[0].strip()
    if ' ' not in before_paren and '::' not in before_paren:
        # Single token before ( — likely a constructor call in init list,
        # not a function definition. Exception: destructors like ~Foo()
        if not before_paren.startswith('~'):
            return False
    return True


def extract_functions(lines):
    """Extract function bodies from source lines.
    
    Yields tuples: (start_line_1based, end_line_1based, 
                    sig_text, body_lines, body_line_nums_1based)
    where sig_text is the function signature line(s) before the opening brace,
    body_lines is the raw line list between { and }, and body_line_nums are
    the corresponding 1-based line numbers.
    """
    i = 0
    n = len(lines)
    while i < n:
        stripped = lines[i].strip()
        code = stripped.split('//')[0].strip()

        # Skip comments, blank lines, preprocessor
        if not code or code.startswith('//') or code.startswith('#') or \
           code.startswith('/*') or code.startswith('*'):
            i += 1
            continue

        # Find function definition candidates
        brace_line = -1
        sig_start = i

        # Case 1: { on same line as signature
        if _is_func_header(code) and '{' in code:
            brace_line = i
        # Case 2: signature line(s) followed by { on a later line
        elif _is_func_header(code):
            # Collect signature lines (may span multiple lines for long param lists)
            sig_end = i
            for j in range(i + 1, min(i + 5, n)):
                ns = lines[j].strip().split('//')[0].strip()
                if ns == '{':
                    brace_line = j
                    break
                if ';' in ns and '(' not in ns:
                    break  # Statement, not function definition
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

        # Include content AFTER { on brace_line as first body line
        post_brace = lines[brace_line][body_start_col + 1:]
        # But we track the full line for accurate reporting
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
                        # Build sig text from signature lines before brace
                        sig_lines = lines[sig_start:brace_line + 1]
                        sig_text = ''.join(sig_lines)
                        yield (brace_line + 1, j + 1,
                               sig_text, body_raw_lines, body_line_nums)
                        i = j + 1
                        break
            if depth == 0:
                # No braces found on brace_line — advance past it
                i = j + 1
                break
        else:
            # Unclosed brace — skip
            i = brace_line + 1
            continue


def _collect_pointer_vars(sig_text, body_lines):
    """Collect pointer-typed variable names from function signature and body.
    Returns set of variable names declared as pointers (Type* name).
    """
    ptrs = set()

    # Check signature for pointer parameters: void Foo(int* p, char* q)
    # Use a separate regex that handles parameter context
    param_ptrs = re.findall(
        r'(?:^|[,(])\s*(?:const\s+)?(?:auto|[\w:]+)\s*\*\s*(\w+)\s*[,)]',
        sig_text
    )
    ptrs.update(param_ptrs)

    # Check body for pointer declarations
    for line in body_lines:
        code = line.split('//')[0].strip()
        if not code:
            continue
        # Skip control flow lines
        m_first = re.match(r'^\s*(\w+)', code)
        if m_first and m_first.group(1) in ('if', 'for', 'while', 'switch', 'return', 'delete'):
            continue

        # Type* name pattern
        for m in _RE_PTR_DECL.finditer(code):
            name = m.group(1)
            if name not in ('operator', 'sizeof', 'decltype'):
                ptrs.add(name)

        # Multi-declaration: Type *a, *b, *c
        for m in _RE_MULTI_PTR.finditer(code):
            name = m.group(1)
            if name not in ('operator', 'sizeof', 'decltype'):
                ptrs.add(name)

    # 'this' is always a pointer in member functions
    ptrs.add('this')

    return ptrs


def _is_real_code_line(line):
    """Check if a line contains actual C++ code (not comment, blank, or brace-only)."""
    code = line.split('//')[0].strip()
    if not code:
        return False
    if code in ('{', '}', '};'):
        return False
    # Check if it's a preprocessor line
    if code.startswith('#'):
        return False
    return True


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

    # ── Pass 2: function-level checks (pointer [] ban + stub detection) ──
    # Track already-reported line numbers to avoid duplicates with Pass 1
    reported_lines = {v[0] for v in violations}

    for func_start, func_end, sig_text, body_lines, body_line_nums in extract_functions(lines):
        # ── Check A: Pointer [] operator ban ──
        ptr_names = _collect_pointer_vars(sig_text, body_lines)
        # Remove names that are known class objects/arrays (heuristic)
        # We're conservative: only flag if we're confident it's a pointer
        ptr_sub_re = _build_ptr_subscript_re(ptr_names)

        # Also check for cast+subscript patterns: (Type*)expr[...]
        has_cast_sub = False
        for idx, body_line in enumerate(body_lines):
            line_no = body_line_nums[idx]
            code_part = body_line.split('//')[0]

            # Check (Type*)expr[...]
            if _RE_CAST_SUBSCRIPT.search(code_part):
                if line_no not in reported_lines:
                    violations.append((line_no, body_line.rstrip(),
                                       'pointer subscript (cast)', code_part.strip()))
                    reported_lines.add(line_no)

            # Check ptr_name[...] for pointer variables
            if ptr_sub_re:
                for m in ptr_sub_re.finditer(code_part):
                    if line_no not in reported_lines:
                        ptr_name = m.group(1)
                        violations.append((line_no, body_line.rstrip(),
                                           f'pointer subscript ({ptr_name}[...])',
                                           m.group(0)))
                        reported_lines.add(line_no)

        # ── Check B: Stub detection ──
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

            # Count real code lines (comment-only lines excluded by _is_real_code_line)
            if _is_real_code_line(body_line):
                real_code_lines += 1

            # Track comment-only lines: code part empty, comment part non-empty
            stripped_comment = comment_part.strip()
            if not code_part and stripped_comment:
                has_comment_only = True
                comment_only_lines += 1

            if _RE_STUB_MARKER.search(comment_part):
                has_stub_marker = True

        # Three rules for stub/comment-shell:
        # Rule 1: < 3 real code lines → always stub
        # Rule 2: has any comment-only line AND < 5 real code lines → stub
        # Rule 3: comment-to-code ratio > 50% → comment shell warning
        is_stub = real_code_lines < 3
        is_comment_shell = False

        if not is_stub and has_comment_only and real_code_lines < 5:
            is_stub = True
            is_comment_shell = True

        # Check comment shell ratio (separate from stub check)
        if not is_comment_shell:
            significant_lines = real_code_lines + comment_only_lines
            if significant_lines > 0:
                ratio = comment_only_lines / significant_lines
                if ratio > 0.5:
                    is_comment_shell = True

        if is_stub:
            # Determine a concise identifier for the function
            sig_short = sig_text.strip().split('\n')[0].rstrip('{').strip()
            if len(sig_short) > 80:
                sig_short = sig_short[:77] + '...'

            marker_info = ''
            if has_stub_marker:
                marker_info += ' (has // TODO/stub/FIXME)'
            if is_comment_shell and comment_only_lines > 0:
                significant = real_code_lines + comment_only_lines
                pct = int(comment_only_lines * 100 / significant) if significant > 0 else 0
                marker_info += f' (comment shell: {comment_only_lines}/{significant} lines = {pct}% comments)'

            if func_start not in reported_lines:
                violations.append((func_start, sig_short,
                                   f'stub function: {real_code_lines} line(s) of code{marker_info}',
                                   sig_short))
                reported_lines.add(func_start)

        elif is_comment_shell and not is_stub:
            # Non-stub function with excessive comment ratio (>50%)
            sig_short = sig_text.strip().split('\n')[0].rstrip('{').strip()
            if len(sig_short) > 80:
                sig_short = sig_short[:77] + '...'
            significant = real_code_lines + comment_only_lines
            pct = int(comment_only_lines * 100 / significant) if significant > 0 else 0
            if func_start not in reported_lines:
                violations.append((func_start, sig_short,
                                   f'comment shell: {comment_only_lines}/{significant} lines = {pct}% comments, {real_code_lines} code lines',
                                   sig_short))
                reported_lines.add(func_start)

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

    # ── pointer subscript ──
    if 'pointer subscript' in desc:
        return '→ use ->member access if class pointer, or declare as array: Type arr[N]'

    # ── stub function ──
    if 'stub function' in desc:
        return '→ implement full function logic from IDA decompilation (≥3 real code lines)'

    # ── comment shell ──
    if desc.startswith('comment shell'):
        return '→ replace comment-only pseudocode with real C++ implementation'

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
