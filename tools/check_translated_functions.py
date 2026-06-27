#!/usr/bin/env python3
"""
check_translated_functions.py — Check only functions modified since auto-fill-baseline.

Workflow:
  1. git diff auto-fill-baseline --unified=0 -- src/ app/ → find changed line ranges
  2. Parse .cpp files to find which functions contain those changed lines
  3. For each modified function, check all coding-standard violations
  4. Output: src/file.cpp:NNN: function_name: PASS/FAIL (reason)

Checks applied per-function:
  - ≥3 real code lines                 (stub detection)
  - Comment-to-code ratio < 50%        (comment shell)
  - 0 pointer arithmetic               (declaration-based: ptr+int, cast+int, ptr+=int)
  - 0 pointer indexing                 (declaration-based: pointer_var[...], ((type*)expr)[...])
  - 0 C++ casts                        (static_cast, dynamic_cast, reinterpret_cast)
  - 0 gotos                            (forbidden)

Exit code: 0 = all modified functions pass, 1 = ≥1 function fails.
If no .cpp files modified → exit 0 (nothing to check).

Integration: Replaces check_pointer_arithmetic.py in CMakeLists.txt
             check_code_quality target.
"""

import argparse
import subprocess
import sys
import os
import re

# Ensure tools/ is importable (script can be invoked from any CWD)
_tools_dir = os.path.dirname(os.path.abspath(__file__))
if _tools_dir not in sys.path:
    sys.path.insert(0, _tools_dir)

from load_signals import Signals

_signals = None


def _get_signals():
    """Lazy-load signals.json — cross-file type awareness."""
    global _signals
    if _signals is None:
        _signals = Signals("signals.json")
    return _signals

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

_RE_GOTO = re.compile(r'\bgoto\s+')

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
            ['git', 'diff', 'auto-fill-baseline', '--unified=0', '--', 'src/', 'app/'],
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

# ── Known type keywords used in declarations ──
_TYPE_WORDS = {
    'int', 'char', 'float', 'double', 'short', 'long', 'bool',
    'void', 'unsigned', 'signed', 'auto', 'const', 'static', 'extern',
    'DWORD', 'WORD', 'BYTE', 'BOOL', 'COLORREF', 'HRESULT',
    'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t',
    'int8_t', 'int16_t', 'int32_t', 'int64_t',
    'size_t', 'ptrdiff_t', 'wchar_t',
}
# ── Token-based scanning helpers ──

def _strip_block_comments(text):
    """Strip /* */ block comments from text."""
    result = []
    i = 0
    n = len(text)
    while i < n:
        if i + 1 < n and text[i] == '/' and text[i + 1] == '*':
            i += 2
            while i < n:
                if i + 1 < n and text[i] == '*' and text[i + 1] == '/':
                    i += 2
                    break
                i += 1
            continue
        result.append(text[i])
        i += 1
    return ''.join(result)


def _find_token_before(text, pos):
    """Walk backward from pos to find the token before. Skip whitespace.
    Returns (token: str|None, position: int). Token may be a word or ')' / ']' / '>'."""
    i = pos - 1
    while i >= 0 and text[i] in ' \t\n\r':
        i -= 1
    if i < 0:
        return None, 0
    ch = text[i]
    if ch in ')]>':
        return ch, i
    if ch.isalnum() or ch == '_':
        end = i + 1
        while i >= 0 and (text[i].isalnum() or text[i] == '_'):
            i -= 1
        return text[i + 1:end], i + 1
    return ch, i


def _find_token_after(text, pos):
    """Walk forward from pos+1 to find the token after. Skip whitespace.
    Returns (token: str|None, position: int)."""
    i = pos + 1
    while i < len(text) and text[i] in ' \t\n\r':
        i += 1
    if i >= len(text):
        return None, 0
    ch = text[i]
    if ch in '([':
        return ch, i
    if ch.isalnum() or ch == '_':
        start = i
        while i < len(text) and (text[i].isalnum() or text[i] == '_'):
            i += 1
        return text[start:i], i
    return ch, i


def _find_matching_paren(text, open_pos, direction='forward'):
    """Find matching parenthesis. 'forward': ( → ), 'backward': ) → (.
    Returns position of matching paren or -1."""
    if direction == 'forward':
        depth = 1
        for i in range(open_pos + 1, len(text)):
            if text[i] == '(':
                depth += 1
            elif text[i] == ')':
                depth -= 1
                if depth == 0:
                    return i
    else:
        depth = 1
        for i in range(open_pos - 1, -1, -1):
            if text[i] == ')':
                depth += 1
            elif text[i] == '(':
                depth -= 1
                if depth == 0:
                    return i
    return -1


def _find_matching_bracket(text, open_pos):
    """Find matching ] for [ at open_pos. Returns position or -1."""
    depth = 1
    for i in range(open_pos + 1, len(text)):
        if text[i] == '[':
            depth += 1
        elif text[i] == ']':
            depth -= 1
            if depth == 0:
                return i
    return -1


def _has_pointer_cast_inner(text, open_pos, close_pos):
    """Check if text between (open_pos, close_pos) contains a pointer cast.
    Simple heuristic: contains * (in cast-adjacent position, * means pointer type)."""
    inner = text[open_pos + 1:close_pos]
    return '*' in inner


# Calling-convention function-pointer marker: __thiscall* / __cdecl* / __stdcall* / ...
# (a '*' immediately after a calling convention indicates a function-pointer type)
_FUNC_PTR_CONV_RE = re.compile(r'__(?:thiscall|cdecl|stdcall|fastcall|vectorcall)\s*\*')


def _has_func_ptr_cast_inner(text, open_pos, close_pos):
    """Check if text between (open_pos, close_pos) contains a function-POINTER cast.

    Function pointer types are recognized by either:
      - '(*' syntax: void(*)(int), int(*)(void)
      - a calling convention adjacent to '*': void(__thiscall*)(int), void(__cdecl *)(...)
    Simple DATA-pointer casts like (int*), (char*), or (TechnoClass*) do NOT trigger this."""
    inner = text[open_pos + 1:close_pos]
    if '(*' in inner:
        return True
    if _FUNC_PTR_CONV_RE.search(inner):
        return True
    return False


def _find_cast_then_call(line):
    """Find GENUINE call-through-cast: ((funcptrtype)value)(args).

    Only flags when the callee is a FUNCTION-POINTER cast that is INVOKED — the IDA
    decompile artifact form, e.g. ((void(*)(int))ptr)(args) or
    ((SomeFuncType)0x401000)(this): a raw address/value cast to a function-pointer
    type and then called.

    Deliberately IGNORES (these are §8-mandated C-style casts, NOT violations):
      - data-pointer casts used as values/arguments: (TechnoClass*)(this), (uint32_t)(x)
      - casts whose result is used with member access: (T)(expr)->Method(), (T)(expr).Method()
      - casts in argument position: foo((T)(x), ...)

    Key insight: a single-paren cast `(type)(operand)` is ALWAYS a cast (never a call),
    because to invoke a cast result you must wrap it: `((cast)value)(args)`. Therefore
    only the double-paren wrapped form — where the callee paren-group itself contains a
    cast applied to a value, or a function-pointer cast type — is a call-through-cast.

    Returns list of (col, snippet) tuples.
    """
    violations = []
    i = 0
    while i < len(line):
        if line[i] != '(':
            i += 1
            continue

        # Is this '(' preceded (skipping spaces) by ')' ?  → )(  candidate for (X)(Y)
        j = i - 1
        while j >= 0 and line[j] in ' \t':
            j -= 1
        if j < 0 or line[j] != ')':
            i += 1
            continue

        # Find the matching '(' for the closing ')' at j → the callee group (open_k .. j)
        open_k = _find_matching_paren(line, j, 'backward')
        if open_k < 0:
            i += 1
            continue
        callee = line[open_k + 1:j].strip()  # X in  (X)(Y)
        if not callee:
            i += 1
            continue

        # ── SKIP: cast in argument position (char before the callee '(' is '(' or ',') ──
        p = open_k - 1
        while p >= 0 and line[p] in ' \t':
            p -= 1
        if p >= 0 and line[p] in '(,':
            i += 1
            continue

        # ── SKIP: operand group (Y) used with member access  (T)(expr)->M() / .M() ──
        #    (user directive: cast-then-call must ignore casts called via -> / .)
        close_y = _find_matching_paren(line, i, 'forward')
        if close_y >= 0:
            q = close_y + 1
            while q < len(line) and line[q] in ' \t':
                q += 1
            if q < len(line) and (line[q] == '.' or line[q:q + 2] == '->'):
                i += 1
                continue

        # ── FLAG only when the callee is a function-pointer cast invocation ──
        if _is_func_ptr_callee(line, open_k, j, callee):
            violations.append((i, line[open_k:j + 1] + line[j + 1:i + 1]))
        i += 1
    return violations


def _is_func_ptr_callee(line, open_k, close_j, callee):
    """Decide whether callee  X  in  (X)(args)  is a function-pointer invocation.

    True when:
      1. X is a function-pointer cast type ('(*' or a calling convention), e.g.
         (void(*)(int))ptr , (void(__thiscall*)(int))ptr
      2. X is a wrapped cast applied to a value: ((cast)value), e.g.
         ((SomeFuncType)0x401000) , ((MyFuncPtr)addr)
         (by C++ grammar this double-paren form is only ever a call-through-cast).
    False for plain DATA casts where the type IS the callee text itself
    (TechnoClass*, uint32_t, RadioCommand) → single-paren `(type)(operand)` cast.
    """
    # (1) function-pointer type directly present in the callee cast
    if _has_func_ptr_cast_inner(line, open_k, close_j):
        return True
    # (2) wrapped cast-to-value:  callee starts with a complete '(...)' then a value
    if callee.startswith('('):
        depth = 0
        end_inner = -1
        for idx_c, ch in enumerate(callee):
            if ch == '(':
                depth += 1
            elif ch == ')':
                depth -= 1
                if depth == 0:
                    end_inner = idx_c
                    break
        if end_inner > 0:
            inner_cast = callee[1:end_inner].strip()
            value = callee[end_inner + 1:].strip()
            if inner_cast and value:
                return True
    return False


def _selftest_cast_then_call():
    """Regression tests for the cast-then-call detector (Task B.2 false-positive fix).

    Verifies genuine call-through-cast is still caught while §8-mandated C-style data
    casts are ignored. Run via:  python check_translated_functions.py --selftest
    """
    must_flag = [
        '((void(*)(int))ptr)(args);',                    # classic function-pointer cast call
        '((void(__thiscall*)(int))ptr)(this);',          # calling-convention func-ptr cast call
        '((SomeFuncType)0x401000)(this);',               # raw address func-ptr cast invocation
        'r = ((int(__cdecl*)(int,int))0x4012AB)(a, b);', # raw cdecl func-ptr cast invocation
    ]
    must_ignore = [
        'radioLinks[i]->ReceiveCommand((TechnoClass*)(this), command, dummy);',  # arg-position cast
        'radioLinks[i] = (TechnoClass*)(ptr_raw);',                              # data cast (assign)
        'uint32_t ptr_raw = (uint32_t)(radioLinks[i]);',                         # data cast (assign)
        'return (RadioCommand)(0);',                                             # data cast of literal
        'x = (TechnoClass*)(this)->Type;',                                       # cast-then-member (->)
        'y = (FooClass*)(obj).Value;',                                           # cast-then-member (.)
        'foo((BarClass*)(this), n);',                                            # cast in arg position
    ]
    failures = []
    for s in must_flag:
        if not _find_cast_then_call(s):
            failures.append(f'  EXPECTED FLAG but got none: {s}')
    for s in must_ignore:
        hits = _find_cast_then_call(s)
        if hits:
            failures.append(f'  EXPECTED IGNORE but flagged: {s}')
    if failures:
        print('SELFTEST FAILED (cast-then-call):')
        for f in failures:
            print(f)
        return False
    print(f'SELFTEST PASSED: {len(must_flag)} flag-case(s) + '
          f'{len(must_ignore)} ignore-case(s) OK')
    return True


def _selftest_stub_accessor():
    """Regression tests for the stub-vs-accessor distinction (Task B.2 fix).

    A single-line `return <real-expr>;` accessor (operator[], member access,
    function call, scope resolution, arithmetic) is LEGITIMATE — NOT a stub.
    Constant-return placeholders (return 0/nullptr/false/true/{};) and empty
    bodies ARE stubs and must stay flagged.
    Run via:  python check_translated_functions.py --selftest
    """
    # (sig_text, body_lines) → must NOT be flagged as stub (legitimate accessors)
    accessor_cases = [
        ('TechnoClass* const& RadioClass::getNthLink(int idx) const {',
         ['TechnoClass* const& RadioClass::getNthLink(int idx) const { return radioLinks[idx]; }\n']),
        ('bool RadioClass::hasAnyLink() const {',
         ['bool RadioClass::hasAnyLink() const { return radioLinks.Count > 0; }\n']),
        ('int Foo::getX() const {',
         ['int Foo::getX() const { return this->x; }\n']),
        ('int Foo::ptrX() const {',
         ['int Foo::ptrX() const { return p->value; }\n']),
        ('int Foo::call() {',
         ['int Foo::call() { return Compute(); }\n']),
        ('int Foo::arith() const {',
         ['int Foo::arith() const { return a + b; }\n']),
        ('int Foo::scope() const {',
         ['int Foo::scope() const { return Constants::Max; }\n']),
        # multi-line accessor (still a single return statement)
        ('int Foo::bar() const {',
         ['int Foo::bar() const {\n', '    return m_arr[3].field;\n', '}\n']),
    ]
    # (sig_text, body_lines) → MUST be flagged as stub (constant returns / empty)
    stub_cases = [
        ('int Foo::stub0() {',       ['int Foo::stub0() { return 0; }\n']),
        ('void* Foo::stubNull() {',  ['void* Foo::stubNull() { return nullptr; }\n']),
        ('bool Foo::stubFalse() {',  ['bool Foo::stubFalse() { return false; }\n']),
        ('bool Foo::stubTrue() {',   ['bool Foo::stubTrue() { return true; }\n']),
        ('Foo Foo::stubEmpty() {',   ['Foo Foo::stubEmpty() { return {}; }\n']),
        ('void Foo::stubVoid() {',   ['void Foo::stubVoid() {}\n']),
        ('int Foo::stubNum() {',     ['int Foo::stubNum() { return 1; }\n']),
        # multi-line constant stub
        ('int Foo::stubML() {',      ['int Foo::stubML() {\n', '    return 0;\n', '}\n']),
    ]
    failures = []
    for sig, body_lines in accessor_cases:
        nums = list(range(1, len(body_lines) + 1))
        is_stub, reason = _check_stub(body_lines, nums, sig)
        if is_stub:
            failures.append(f'  EXPECTED ACCESSOR (not stub) but flagged: '
                            f'{sig.rstrip(" {")} -> {reason}')
    for sig, body_lines in stub_cases:
        nums = list(range(1, len(body_lines) + 1))
        is_stub, _reason = _check_stub(body_lines, nums, sig)
        if not is_stub:
            failures.append(f'  EXPECTED STUB but passed: {sig.rstrip(" {")}')
    if failures:
        print('SELFTEST FAILED (stub-vs-accessor):')
        for f in failures:
            print(f)
        return False
    print(f'SELFTEST PASSED: {len(accessor_cases)} accessor-case(s) + '
          f'{len(stub_cases)} stub-case(s) OK')
    return True


def _split_params(params_str):
    """Split parameter string by commas, respecting nested <> and ()."""
    params = []
    depth_paren = 0
    depth_angle = 0
    current = []
    for ch in params_str:
        if ch == '(':
            depth_paren += 1
        elif ch == ')':
            depth_paren -= 1
        elif ch == '<':
            depth_angle += 1
        elif ch == '>':
            depth_angle -= 1
        if ch == ',' and depth_paren == 0 and depth_angle == 0:
            params.append(''.join(current).strip())
            current = []
        else:
            current.append(ch)
    if current:
        params.append(''.join(current).strip())
    return params


def _extract_param_name(param_text):
    """Extract the variable name from a function parameter declaration."""
    param = param_text.strip()
    # Remove default value (= expr), respecting template angle brackets
    if '=' in param:
        depth = 0
        for i, ch in enumerate(param):
            if ch == '<':
                depth += 1
            elif ch == '>':
                depth -= 1
            elif ch == '=' and depth == 0:
                param = param[:i].strip()
                break
    # Tokenize: the parameter name is the last identifier token
    tokens = param.replace('*', ' * ').replace('&', ' & ').replace('[', ' [').replace(']', ' ] ').split()
    for w in reversed(tokens):
        stripped = w.strip('[]')
        if stripped and stripped not in ('*', '&', 'const') and stripped.isidentifier():
            return stripped
    return None


def _parse_declarations(body_lines, sig_text):
    """Parse variable declarations from function body and parameter list.

    Uses token-based scanning (not regex) to identify pointer and array variables.
    Returns (pointer_vars, array_vars) — dicts mapping name → is_func_level (bool).
    is_func_level=True means function-level (depth 1), False means block-level.
    Pointer vars take precedence: if a name appears in both, it stays in pointer_vars.
    """
    pointer_vars = {}   # name → is_func_level (True=function-level, False=block-level)
    array_vars = {}

    # ── 'this' is always a pointer (if used in the body) ──
    body_text = ''.join(body_lines)
    if 'this' in body_text:
        pointer_vars['this'] = True

    # ── Parse function parameters from signature ──
    sig_clean = sig_text.replace('\n', ' ').replace('\r', ' ')
    sig_clean = _strip_block_comments(sig_clean)
    sig_clean = re.sub(r'//.*', '', sig_clean)

    # Find outermost parentheses
    depth = 0
    paren_start = -1
    paren_end = -1
    for i, ch in enumerate(sig_clean):
        if ch == '(':
            if depth == 0:
                paren_start = i
            depth += 1
        elif ch == ')':
            depth -= 1
            if depth == 0 and paren_start >= 0:
                paren_end = i
                break

    if paren_start >= 0 and paren_end > paren_start:
        params_str = sig_clean[paren_start + 1:paren_end].strip()
        if params_str and params_str != 'void':
            for param in _split_params(params_str):
                param = param.strip()
                if not param:
                    continue
                name = _extract_param_name(param)
                if name and name not in _TYPE_WORDS:
                    # Check for * before name → pointer parameter
                    name_pos = param.rfind(name)
                    before_name = param[:name_pos]
                    if '*' in before_name:
                        pointer_vars[name] = True  # function-level
                    # Check for [] after name → array parameter
                    after_name = param[name_pos + len(name):]
                    if '[' in after_name and ']' in after_name:
                        array_vars[name] = True  # function-level

    # ── Parse declarations in body (token-based) ──
    scope_depth = 0  # pre-function-body
    for line in body_lines:
        code_part = line.split('//')[0]
        code_part = _strip_block_comments(code_part).strip()

        # Track scope: } reduces depth before content
        scope_depth -= code_part.count('}')
        if scope_depth < 1:
            scope_depth = 1

        if not code_part:
            scope_depth += code_part.count('{')
            continue

        is_func_level = (scope_depth == 1)

        # Determine if this line is in a declaration context
        # (first word is a type keyword, const, static, extern, or auto)
        words_in_line = code_part.replace('(', ' ( ').replace(')', ' ) ').split()
        first_word = words_in_line[0] if words_in_line else ''
        is_decl_line = (first_word in _TYPE_WORDS
                        or first_word in ('const', 'static', 'extern'))

        # Pointer declarations: scan for * followed by a variable name.
        # A * is a pointer declaration ONLY if it is in the TYPE part of the
        # declaration — i.e. before the first '=' or past a ',' before '='.
        # After '=', * is multiplication (e.g. "int r = a * b").
        in_type_part = True  # in type-declarator region, not initializer
        i_ptr = 0
        while i_ptr < len(code_part):
            ch = code_part[i_ptr]
            # Track = , ; boundaries — switch out of type-part after =
            if ch == '=':
                in_type_part = False
                i_ptr += 1
                continue
            if ch == ',' and not in_type_part:
                # Multi-decl: "int* a = ..., *b = ..." — back in type part
                in_type_part = True
                i_ptr += 1
                continue
            if ch == ';':
                in_type_part = True  # reset for next declaration on same line
                i_ptr += 1
                continue

            if ch == '*':
                j = i_ptr + 1
                while j < len(code_part) and code_part[j] in ' \t':
                    j += 1
                # Skip 'const' qualifier after *
                if (j + 4 < len(code_part) and code_part[j:j + 5] == 'const'
                        and (j + 5 >= len(code_part) or not code_part[j + 5].isalnum())):
                    j += 5
                    while j < len(code_part) and code_part[j] in ' \t':
                        j += 1

                # Determine if this * is a pointer declaration (not multiplication)
                before_word, _ = _find_token_before(code_part, i_ptr)
                is_ptr_decl = (in_type_part and (
                    is_decl_line
                    or (before_word and before_word in _TYPE_WORDS)
                ))

                # Read variable name
                if (is_ptr_decl and j < len(code_part)
                        and (code_part[j].isalpha() or code_part[j] == '_')):
                    start = j
                    while j < len(code_part) and (code_part[j].isalnum() or code_part[j] == '_'):
                        j += 1
                    name = code_part[start:j]
                    if name not in _TYPE_WORDS:
                        pointer_vars[name] = is_func_level
                i_ptr = j
            else:
                i_ptr += 1

        # Array declarations: word[...] in declaration context
        # Check if the word before [ is preceded by a type keyword or comma
        i_arr = 0
        while i_arr < len(code_part):
            if code_part[i_arr] == '[':
                token, token_pos = _find_token_before(code_part, i_arr)
                if token and token.isidentifier() and token not in _TYPE_WORDS:
                    # Walk back through words to see if there's a type keyword
                    before_text = code_part[:token_pos].rstrip()
                    before_words = before_text.replace(',', ' , ').replace(';', ' ; ').split()
                    for bw in reversed(before_words):
                        if bw in _TYPE_WORDS:
                            array_vars[token] = is_func_level
                            break
                        if bw in ('*', '&'):
                            continue  # skip pointer/reference decorators
                        if bw == ',':
                            array_vars[token] = is_func_level
                            break
                        break  # hit non-type word, stop looking
                # Skip to matching ]
                j = _find_matching_bracket(code_part, i_arr)
                i_arr = (j + 1) if j >= 0 else (i_arr + 1)
            else:
                i_arr += 1

        scope_depth += code_part.count('{')

    # ── Cleanup ──
    # Pointer declarations take precedence over array declarations
    for k in list(array_vars.keys()):
        if k in pointer_vars:
            del array_vars[k]

    return pointer_vars, array_vars


def _check_body_for_violations(body_lines, body_line_nums, func_start_line, sig_text):
    """Check a function body for all violation categories — token-based scanning.

    Rule A — pointer arithmetic: ptr + int, cast+int, ptr += int   (token scan for +/+=)
    Rule B — non-array []: pointer_var[...], ((type*)expr)[...]    (token scan for [...])
    Extra — function-pointer cast: ((type)ptr)(args)               (token scan for )...()

    Returns list of (line_no, category, detail).
    """
    violations = []

    # ── Parse declarations once per function ──
    pointer_vars, array_vars = _parse_declarations(body_lines, sig_text)

    # ── Cross-file type awareness via signals.json ──
    signals = _get_signals()

    # ── Scope tracking (mutable list for closure access) ──
    scope_depth = [1]  # function body starts at depth 1

    def _is_ptr(name):
        """Check if name is a pointer: signals.json first, local parsing fallback (scope-aware)."""
        r = signals.is_pointer(name)
        if r is not None:
            return r
        local = pointer_vars.get(name)
        if local is None:
            return False
        if local:  # function-level → always visible
            return True
        return scope_depth[0] > 1  # block-level → only in nested scope

    def _is_arr(name):
        """Check if name is an array: signals.json first, local parsing fallback (scope-aware)."""
        r = signals.is_array(name)
        if r is not None:
            return r
        local = array_vars.get(name)
        if local is None:
            return False
        if local:  # function-level → always visible
            return True
        return scope_depth[0] > 1  # block-level → only in nested scope

    for idx, body_line in enumerate(body_lines):
        line_no = body_line_nums[idx]

        # ── Extract code part (strip comments, used for scope tracking too) ──
        code_part = body_line.split('//')[0]
        code_part = _strip_block_comments(code_part)

        # Track scope: } reduces depth before content
        scope_depth[0] -= code_part.count('}')
        if scope_depth[0] < 1:
            scope_depth[0] = 1

        if _is_comment_or_empty(body_line):
            scope_depth[0] += code_part.count('{')
            continue

        # code_part is already computed above (no need to re-extract)

        # ── Existing checks (unchanged) ──
        if _RE_STATIC_CAST.search(code_part):
            violations.append((line_no, 'C++ cast', 'static_cast'))
            scope_depth[0] += code_part.count('{')
            continue
        if _RE_DYNAMIC_CAST.search(code_part):
            violations.append((line_no, 'C++ cast', 'dynamic_cast'))
            scope_depth[0] += code_part.count('{')
            continue
        if _RE_REINTERPRET_CAST.search(code_part):
            violations.append((line_no, 'C++ cast', 'reinterpret_cast'))
            scope_depth[0] += code_part.count('{')
            continue
        if _RE_GOTO.search(code_part):
            violations.append((line_no, 'goto', 'goto statement (forbidden)'))
            scope_depth[0] += code_part.count('{')
            continue

        # ── Rule A: Token-based + and += scanning ──
        got_violation = False
        i = 0
        n = len(code_part)
        while i < n:
            ch = code_part[i]
            if ch != '+':
                i += 1
                continue

            # Skip ++ (both prefix and postfix)
            if i + 1 < n and code_part[i + 1] == '+':
                i += 2
                continue
            if i > 0 and code_part[i - 1] == '+':
                i += 1
                continue

            # Check +=  (the = follows the +)
            if i + 1 < n and code_part[i + 1] == '=':
                # += operator — check variable before +
                left, _ = _find_token_before(code_part, i)
                if left and _is_ptr(left):
                    violations.append((line_no, 'ptr-arithmetic',
                        f'{left} += ... — pointer arithmetic'))
                    got_violation = True
                i += 2  # skip past +=
                continue

            # Plain + operator: check both operands
            left, left_pos = _find_token_before(code_part, i)
            right, right_pos = _find_token_after(code_part, i)

            # Check if left operand is a pointer variable
            if left and _is_ptr(left):
                # Skip if left operand is part of member access: g->member + ...
                # (word is preceded by "->" like in "g->X + 5")
                if not (left_pos >= 2 and code_part[left_pos - 2:left_pos] == '->'):
                    violations.append((line_no, 'ptr-arithmetic',
                        f'{left} + ... — pointer arithmetic'))
                    got_violation = True
            # Check if right operand is a pointer variable
            elif right and _is_ptr(right):
                # Skip if right operand is part of member access: ... + g->member
                # Right_pos points to first char AFTER the word; check for "->" or "."
                k = right_pos
                while k < len(code_part) and code_part[k] in ' \t':
                    k += 1
                if not (k + 1 < len(code_part) and code_part[k:k + 2] in ('->', '. ')):
                    violations.append((line_no, 'ptr-arithmetic',
                        f'... + {right} — pointer arithmetic'))
                    got_violation = True
            # Check cast-to-pointer before +  →  (type*)expr + int
            elif left == ')':
                open_p = _find_matching_paren(code_part, left_pos, 'backward')
                if open_p >= 0 and _has_pointer_cast_inner(code_part, open_p, left_pos):
                    violations.append((line_no, 'ptr-arithmetic',
                        '(type*)expr + int — cast + integer'))
                    got_violation = True
            # Check cast-to-pointer after +   →  int + (type*)expr
            elif right == '(':
                close_p = _find_matching_paren(code_part, right_pos)
                if close_p >= 0 and _has_pointer_cast_inner(code_part, right_pos, close_p):
                    violations.append((line_no, 'ptr-arithmetic',
                        'int + (type*)expr — cast + integer'))
                    got_violation = True

            i += 1

        if got_violation:
            scope_depth[0] += code_part.count('{')
            continue

        # ── Rule B: Token-based [...] scanning ──
        got_violation = False
        i = 0
        while i < n:
            if code_part[i] != '[':
                i += 1
                continue

            close = _find_matching_bracket(code_part, i)
            if close < 0:
                i += 1
                continue

            token, token_pos = _find_token_before(code_part, i)

            if token == ')':
                # Cast expression like ((type*)expr)[...] → VIOLATION
                open_p = _find_matching_paren(code_part, token_pos, 'backward')
                if open_p >= 0 and _has_pointer_cast_inner(code_part, open_p, token_pos):
                    violations.append((line_no, 'ptr-arithmetic',
                        '((type*)expr)[...] — cast then index'))
                    got_violation = True
            elif token == ']':
                # Nested array: arr[i][j] — handled by outer scan
                pass
            elif token == '>':
                # Member access: ptr->member[...] — can't determine member type
                pass
            elif token and token.isidentifier() and token not in _TYPE_WORDS:
                # ── signals.json cross-file type awareness ──
                if signals.is_pointer(token) == True:
                    violations.append((line_no, 'ptr-arithmetic',
                        f'{token}[...] — pointer indexing (not an array, per signals.json)'))
                    got_violation = True
                elif signals.is_array(token) == False:
                    violations.append((line_no, 'ptr-arithmetic',
                        f'{token}[...] — non-array indexing (per signals.json)'))
                    got_violation = True
                elif signals.is_array(token) is None:
                    # Not in signals.json — fallback to local parsing (scope-aware)
                    if _is_ptr(token):
                        violations.append((line_no, 'ptr-arithmetic',
                            f'{token}[...] — pointer indexing (not an array)'))
                        got_violation = True
                    # else: unknown variable, pass (keep existing behavior)

            i = close + 1  # skip past matched ]

        if got_violation:
            scope_depth[0] += code_part.count('{')
            continue

        # ── Extra: Function-pointer cast call  →  ((type)ptr)(args) ──
        # Scan for )... ( pattern where ... is whitespace
        i = 0
        while i < n:
            if code_part[i] != ')':
                i += 1
                continue
            # Check if this ) is immediately followed (after whitespace) by (
            j = i + 1
            while j < n and code_part[j] in ' \t\n\r':
                j += 1
            if j >= n or code_part[j] != '(':
                i += 1
                continue

            # Found )... ( pattern → check if ) closes a function-pointer cast
            open_p = _find_matching_paren(code_part, i, 'backward')
            if open_p >= 0 and _has_func_ptr_cast_inner(code_part, open_p, i):
                violations.append((line_no, 'ptr-arithmetic',
                    'function-pointer cast call — pointer arithmetic'))
                got_violation = True
                break
            i = j + 1

        if got_violation:
            scope_depth[0] += code_part.count('{')
            continue

        # ── Also check: callee includes [ → function pointer from array ──
        # Pattern: word[...](args)   where word is not an array
        i = 0
        while i < n:
            if code_part[i] != '(':
                i += 1
                continue
            # Find what's before (
            before = code_part[:i].rstrip()
            if before and '[' in before and ']' in before:
                # Get the last token before (
                token, _ = _find_token_before(code_part, i)
                if token and token == ']':
                    # Something ended with ] before ( → function pointer from array
                    # Walk back to find what precedes the last [
                    last_bracket_close = len(before) - 1
                    # Find matching [
                    open_b = _find_matching_paren(before, last_bracket_close)
                    # Actually we need bracket matching, not paren matching.
                    # Find the [ for this ]
                    depth_br = 1
                    br_open = -1
                    for k in range(last_bracket_close - 1, -1, -1):
                        if before[k] == ']':
                            depth_br += 1
                        elif before[k] == '[':
                            depth_br -= 1
                            if depth_br == 0:
                                br_open = k
                                break
                    if br_open >= 0:
                        token_before_br, _ = _find_token_before(before, br_open)
                        if token_before_br and _is_ptr(token_before_br):
                            violations.append((line_no, 'ptr-arithmetic',
                                f'{token_before_br}[...](...) — function pointer from array'))
                            got_violation = True
                            break
            # Skip past matching )
            close_p = _find_matching_paren(code_part, i)
            i = (close_p + 1) if close_p >= 0 else (i + 1)

        if got_violation:
            scope_depth[0] += code_part.count('{')
            continue

        # ── Cast-then-call detection: ((type)expr)(args) ──
        cast_calls = _find_cast_then_call(code_part)
        if cast_calls:
            violations.append((line_no, 'ptr-arithmetic',
                'cast-then-call — use direct function call instead'))

        scope_depth[0] += code_part.count('{')

    return violations


# ── Legitimate-accessor detection (Task B.2 stub false-positive fix) ──
#
# A 1-line function whose entire body is a single `return <real-expr>;` is a
# LEGITIMATE accessor, NOT a stub — even though it has < 3 real code lines.
# Examples (NOT stubs):
#     TechnoClass* const& RadioClass::getNthLink(int idx) const { return radioLinks[idx]; }
#     bool RadioClass::hasAnyLink() const { return radioLinks.Count > 0; }
# These return a NON-CONSTANT expression: operator[] on an object, member access
# (. / ->), a function call, scope resolution (::), arithmetic/comparison, etc.
#
# Only CONSTANT-return placeholders are genuine stubs and stay flagged:
#     { return 0; }  { return nullptr; }  { return false; }  { return true; }
#     { return {}; }  {}  (empty body)

# Chars/operators in a return expression that indicate real computation/access:
#   [ ]      operator[] indexing                radioLinks[idx]
#   ( )      function call / cast invocation    Compute()
#   .        member access                      obj.field
#   - > (->) member access through pointer       p->field   (also comparison <,>)
#   :        scope resolution (::) / ternary    Constants::Max , a ? b : c
#   + * / % & | ^ ~ < > ? arithmetic/comparison/logical/bitwise
_RE_REAL_EXPR_INDICATOR = re.compile(r'[\[\]().?:]|[-+*/%<>&|^~]')

# Constant return values (after whitespace removal) that mark a genuine stub.
_STUB_RETURN_CONSTANTS = {'0', 'nullptr', 'NULL', 'false', 'true', '{}', '{0}', ''}


def _accessor_body_expr(body_lines):
    """If the function body is a single `return <expr>;` statement, return <expr>
    (stripped). Otherwise return None.

    Comments (block + line) are stripped first. The body is the text between the
    first '{' and its matching '}'. A single statement means exactly one ';' and
    the statement begins with `return`.
    """
    text = _strip_block_comments(''.join(body_lines))
    text = re.sub(r'//[^\n]*', '', text)  # strip line comments

    open_i = text.find('{')
    if open_i < 0:
        return None
    depth = 0
    close_i = -1
    for k in range(open_i, len(text)):
        if text[k] == '{':
            depth += 1
        elif text[k] == '}':
            depth -= 1
            if depth == 0:
                close_i = k
                break
    if close_i < 0:
        return None

    inner = text[open_i + 1:close_i].strip()
    if not inner.startswith('return'):
        return None
    # Token boundary: `return` must be a whole word (not `returnFoo`)
    if len(inner) > len('return') and (inner[len('return')].isalnum()
                                        or inner[len('return')] == '_'):
        return None
    # Strip the single trailing ';' then ensure it was the only statement
    if inner.endswith(';'):
        inner = inner[:-1].rstrip()
    if ';' in inner:
        return None  # more than one statement → not a simple accessor
    return inner[len('return'):].strip()


def _is_legitimate_accessor(body_lines):
    """True if the body is a single `return <real-expr>;` accessor (non-constant).

    Returns False for constant-return placeholders (return 0/nullptr/false/true/{};)
    and for empty bodies — those remain genuine stubs.
    """
    expr = _accessor_body_expr(body_lines)
    if expr is None:
        return False
    norm = expr.replace(' ', '').replace('\t', '')
    # Genuine stub constants → NOT an accessor
    if norm in _STUB_RETURN_CONSTANTS:
        return False
    # Pure numeric literal (e.g. `return 0;`, `return 0x0;`, `return 1;`) → stub
    if re.fullmatch(r'0[xX][0-9A-Fa-f]+[uUlL]*|\d+[uUlL]*', norm):
        return False
    # Real computation/access indicator present → legitimate accessor
    return bool(_RE_REAL_EXPR_INDICATOR.search(expr))


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
    #   EXCEPTION: a single `return <real-expr>;` accessor (operator[], member
    #   access, function call, arithmetic) is legitimate, NOT a stub. Only
    #   constant-return placeholders (return 0/nullptr/false/true/{};) stay flagged.
    if real_code_lines < 3 and not _is_legitimate_accessor(body_lines):
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
    vios = _check_body_for_violations(body_lines, body_line_nums, func_start_line, sig_text)
    for line_no, category, detail in vios:
        failures.append(f"{category}: {detail}")

    return failures


def _process_file(filepath, changed_lines, ida_client=None, ida_name_index=None,
                  ida_min_ratio=0.3, ida_max_stub=0.3):
    """Check a single file for violations in changed functions.

    If ida_client and ida_name_index are provided, additionally verify
    functions that pass basic checks against IDA binary metrics.

    Returns (list of output lines, all_pass: bool).
    """
    try:
        with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
            lines = f.readlines()
    except Exception as e:
        return [f"{filepath}:0: unknown: FAIL - cannot read file: {e}"], False

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
            pass_line = f"{filepath}:{func_start}: {func_name}: PASS - {real_count} real lines, 0 violations"

            # ── IDA verification (optional) ──
            if ida_client and ida_client.is_connected() and ida_name_index:
                ida_failure = _ida_verify_function(
                    ida_client, ida_name_index, func_name, sig_text,
                    filepath, func_start, ida_min_ratio, ida_max_stub,
                )
                if ida_failure:
                    outputs.append(ida_failure)
                    all_pass = False
                    continue

            outputs.append(pass_line)

    return outputs, all_pass


def _ida_verify_function(client, name_index, func_name, sig_text,
                         filepath, func_start, min_ratio, max_stub):
    """Run IDA verification on a function. Returns failure string or None."""
    # Import locally to avoid circular dependency
    from verify_translation import resolve_to_address, verify_single_by_name

    full_name = _extract_full_name(sig_text)
    search_name = full_name if full_name else func_name

    try:
        result = verify_single_by_name(
            client, search_name, name_index,
            min_lines=3,
            likely_real=min_ratio,
            likely_stub=max_stub,
            skip_size=20,
        )
    except Exception as e:
        return (f"{filepath}:{func_start}: {func_name}: FAIL - "
                f"IDA verify error: {e}")

    if result is None:
        return (f"{filepath}:{func_start}: {func_name}: FAIL - "
                f"IDA: function '{search_name}' not found in signals.json")

    verdict = result.get("verdict", "UNKNOWN")
    if verdict == "LIKELY_STUB":
        reason = result.get("reason", "structural mismatch")
        ratios = result.get("ratios", {})
        overall = ratios.get("overall", "?")
        return (f"{filepath}:{func_start}: {func_name}: FAIL - "
                f"IDA: LIKELY STUB — ratio={overall} ({reason})")
    elif verdict == "BORDERLINE":
        ratios = result.get("ratios", {})
        overall = ratios.get("overall", "?")
        return (f"{filepath}:{func_start}: {func_name}: FAIL - "
                f"IDA: BORDERLINE — ratio={overall} needs review")

    return None  # LIKELY_REAL or SKIP → pass


def _extract_full_name(sig_text):
    """Extract ClassName::MethodName from function signature text."""
    sig_one = sig_text.replace('\n', ' ').replace('\r', ' ').strip()
    sig_one = sig_one.rstrip('{').strip()

    # Match ClassName::MethodName(
    m = re.search(r'(\w+::\w+)\s*\(', sig_one)
    if m:
        return m.group(1)
    return None


def main():
    parser = argparse.ArgumentParser(
        description='Check functions for coding violations.',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Integration:
  --ida-verify    Additionally verify function structure against IDA binary metrics.
                  Detects disguised stubs (comment-heavy functions with minimal real code).
                  Requires: IDA Pro running with MCP server at 127.0.0.1:13337.

By default, checks only functions modified by git diff.
Use --files to check all functions in specific file(s).
        """,
    )
    parser.add_argument('--ida-verify', action='store_true',
                        help='Enable IDA-based structural verification')
    parser.add_argument('--min-ida-ratio', type=float, default=0.3,
                        help='Minimum ratio for IDA LIKELY_REAL (default: 0.3)')
    parser.add_argument('--max-ida-stub-ratio', type=float, default=0.3,
                        help='Ratio below this is LIKELY_STUB (default: 0.3)')
    parser.add_argument('--selftest', action='store_true',
                        help='Run internal regression tests (cast-then-call + '
                             'stub-vs-accessor detection) and exit')
    parser.add_argument('files', nargs='*', metavar='FILE',
                        help='Check ALL functions in specified .cpp files (bypasses git diff)')
    args = parser.parse_args()

    if args.selftest:
        ok_cast = _selftest_cast_then_call()
        ok_stub = _selftest_stub_accessor()
        sys.exit(0 if (ok_cast and ok_stub) else 1)

    repo_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

    # Determine which files to check
    if args.files:
        # Direct file mode: check ALL functions in specified files
        changed_files = {}
        for f in args.files:
            abs_path = os.path.join(repo_root, f) if not os.path.isabs(f) else f
            if os.path.isfile(abs_path) and abs_path.endswith('.cpp'):
                # Mark all lines as "changed" so every function is checked
                with open(abs_path, 'r', encoding='utf-8', errors='replace') as fh:
                    line_count = len(fh.readlines())
                changed_files[f.replace('\\', '/')] = set(range(1, line_count + 1))
            else:
                print(f"WARNING: Skipping '{f}' — not a .cpp file or not found", file=sys.stderr)
    else:
        # Git diff mode: only check modified functions
        changed_files = _parse_git_diff()

    if not changed_files:
        print("No .cpp files to check.")
        sys.exit(0)

    # 1.5. If IDA verify enabled, set up MCP client and name index
    ida_client = None
    ida_name_index = None
    if args.ida_verify:
        try:
            # Lazy import to avoid dependency when not using --ida-verify
            sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
            from verify_translation import MCPClient, load_functions_json
            funcs_list, ida_name_index = load_functions_json()
            ida_client = MCPClient()
            if not ida_client.connect():
                print("WARNING: IDA MCP connection failed. Skipping IDA verification.",
                      file=sys.stderr)
                ida_client = None
        except Exception as e:
            print(f"WARNING: Failed to initialize IDA verify: {e}. Skipping.",
                  file=sys.stderr)
            ida_client = None

    # 2. Filter to .cpp files only, skip _generated/ and menu_globals_gen
    all_pass = True
    total_checked = 0
    ida_rejected = 0

    try:
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

            outputs, file_pass = _process_file(
                abs_path, changed_line_set,
                ida_client=ida_client,
                ida_name_index=ida_name_index,
                ida_min_ratio=args.min_ida_ratio,
                ida_max_stub=args.max_ida_stub_ratio
            )

            for line in outputs:
                print(line)

            if not file_pass:
                all_pass = False

            for line in outputs:
                if 'PASS' in line or 'FAIL' in line:
                    total_checked += 1
                if 'FAIL - IDA' in line:
                    ida_rejected += 1
    finally:
        if ida_client:
            ida_client.disconnect()

    if total_checked == 0:
        print("No functions to check in specified files.")
        sys.exit(0)

    if not all_pass:
        reasons = []
        if ida_rejected > 0:
            reasons.append(f"{ida_rejected} IDA-rejected")
        print(f"\nFAIL: Some modified functions have violations ({', '.join(reasons) if reasons else 'see above'}).")
        sys.exit(1)
    else:
        print(f"\nOK: All {total_checked} function(s) pass.")
        sys.exit(0)


if __name__ == '__main__':
    main()
