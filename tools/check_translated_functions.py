#!/usr/bin/env python3
"""
check_translated_functions.py -- Check only functions modified since auto-fill-baseline.

Uses Clang AST for violation detection (no regex). Keeps existing git-diff
scoping, function extraction, stub detection, and IDA verification logic.

Workflow:
  1. git diff auto-fill-baseline --unified=0 -- src/ app/ -> find changed line ranges
  2. Parse .cpp files to find which functions contain those changed lines
  3. For each modified function, check all coding-standard violations via Clang AST
  4. Output: src/file.cpp:NNN: function_name: PASS/FAIL (reason)

Checks applied per-function:
   AST-based (no regex):
     - 0 C++ casts (static_cast, dynamic_cast, reinterpret_cast -- via CXX*CastExpr)
     - 0 pointer arithmetic (BinaryOperator + on pointer type)
     - 0 pointer indexing (ArraySubscriptExpr on pointer base)
     - 0 gotos (GotoStmt)
     - 0 func-ptr-cast-calls (CallExpr on CStyleCastExpr callee)
     - 0 hex-pointer casts (CStyleCastExpr with hex integer literal)
     - 0 non-ptr-to-ptr casts (CStyleCastExpr to pointer from non-pointer)
     - 0 ptr-nonptr-conv (pointer<->non-pointer conversions, bidirectional)
     - 0 illegal-ptr-cast (C-style unrelated ptr casts, reinterpret_cast, void*, static downcast)

  Source-based (unchanged):
    - >= 3 real code lines (stub detection)
    - Comment-to-code ratio < 50% (comment shell)

Exit code: 0 = all modified functions pass, 1 = >= 1 function fails.
"""

import argparse
import subprocess
import sys
import os
import re

# Ensure tools/ is importable
_tools_dir = os.path.dirname(os.path.abspath(__file__))
if _tools_dir not in sys.path:
    sys.path.insert(0, _tools_dir)

from clang_ast_checker import ClangChecker

try:
    from load_signals import Signals
    _signals = None

    def _get_signals():
        global _signals
        if _signals is None:
            _signals = Signals("signals.json")
        return _signals
except ImportError:
    _signals = None
    def _get_signals():
        return None


# -- Skipped file patterns --
SKIP_PATTERNS = ['_generated/', 'menu_globals_gen']


def _should_skip(filepath):
    norm = filepath.replace('\\', '/')
    for pat in SKIP_PATTERNS:
        if pat in norm:
            return True
    return False


# ===================================================
# Phase 1: git diff parsing  (unchanged)
# ===================================================

def _parse_git_diff():
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

    changed = {}
    current_file = None
    i = 0
    lines = output.split('\n')

    while i < len(lines):
        line = lines[i]
        if line.startswith('diff --git'):
            parts = line.split()
            if len(parts) >= 4:
                b_path = parts[3]
                if b_path.startswith('b/'):
                    current_file = b_path[2:]
                else:
                    current_file = b_path
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


# ===================================================
# Phase 2: Function boundary extraction  (unchanged)
# ===================================================

_NON_FUNC_FIRST_WORDS = {
    'if', 'for', 'while', 'switch', 'catch', 'return',
    'class', 'struct', 'namespace', 'enum', 'extern', 'template',
    'typedef', 'using', 'sizeof', 'assert', 'new', 'delete',
    'else', 'do', 'goto', 'case', 'default',
}


def _is_func_header(code):
    if not code:
        return False
    if code.startswith('//') or code.startswith('/*') or code.startswith('*'):
        return False
    if code.startswith('#'):
        return False
    if code[0] in ',:':
        return False
    if '(' not in code or ')' not in code:
        return False
    if code.rstrip().endswith(';'):
        return False
    m = re.match(r'^\s*(\w+)', code)
    if m and m.group(1) in _NON_FUNC_FIRST_WORDS:
        return False
    before_paren = code.split('(')[0].strip()
    if ' ' not in before_paren and '::' not in before_paren:
        if not before_paren.startswith('~'):
            return False
    return True


def extract_functions(lines):
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
    sig_one_line = sig_text.replace('\n', ' ').replace('\r', ' ').strip()
    sig_one_line = sig_one_line.rstrip('{').strip()
    m = re.search(r'(\b\w+(?:::~\w+)?)\s*\(', sig_one_line)
    if m:
        name = m.group(1)
        if '::' in name:
            name = name.split('::')[-1]
        return name
    return 'unknown'


# ===================================================
# Phase 3: Violation check (AST-based, replaces regex)
# ===================================================

# Per-file AST checker cache -- avoids re-parsing the same file for each function
_file_checker_cache = {}

def _get_file_checker(filepath):
    """Get or create a ClangChecker for a file (cached)."""
    if filepath not in _file_checker_cache:
        checker = ClangChecker(filepath)
        checker.parse()
        _file_checker_cache[filepath] = checker
    return _file_checker_cache[filepath]


def _check_ast_violations(filepath, func_start, func_end):
    """Check a function body for violations using Clang AST.

    Returns list of (line_no, category, detail) tuples for violations
    that fall within [func_start, func_end].
    """
    checker = _get_file_checker(filepath)
    all_violations = checker.run_all_checks()
    # Filter to function range
    func_violations = []
    for line_no, category, detail in all_violations:
        if func_start <= line_no <= func_end:
            func_violations.append((line_no, category, detail))
    return func_violations


# ===================================================
# Phase 3b: Stub detection  (unchanged, source-based)
# ===================================================

def _is_comment_or_empty(line):
    stripped = line.strip()
    if not stripped:
        return True
    if stripped.startswith('//') or stripped.startswith('/*') or stripped.startswith('*'):
        return True
    if stripped.startswith('#include') or stripped.startswith('#pragma'):
        return True
    return False


def _is_real_code_line(line):
    code = line.split('//')[0].strip()
    if not code:
        return False
    if code in ('{', '}', '};'):
        return False
    if code.startswith('#'):
        return False
    return True


_RE_STUB_MARKER = re.compile(r'//\s*(?:TODO|STUB|stub|FIXME)')

_STUB_RETURN_CONSTANTS = {'0', 'nullptr', 'NULL', 'false', 'true', '{}', '{0}', ''}


def _strip_block_comments(text):
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


def _accessor_body_expr(body_lines):
    text = _strip_block_comments(''.join(body_lines))
    text = re.sub(r'//[^\n]*', '', text)
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
    if len(inner) > len('return') and (inner[len('return')].isalnum()
                                        or inner[len('return')] == '_'):
        return None
    if inner.endswith(';'):
        inner = inner[:-1].rstrip()
    if ';' in inner:
        return None
    return inner[len('return'):].strip()


_RE_REAL_EXPR_INDICATOR = re.compile(r'[\[\]().?:]|[-+*/%<>&|^~]')


def _is_legitimate_accessor(body_lines):
    expr = _accessor_body_expr(body_lines)
    if expr is None:
        return False
    norm = expr.replace(' ', '').replace('\t', '')
    if norm in _STUB_RETURN_CONSTANTS:
        return False
    if re.fullmatch(r'0[xX][0-9A-Fa-f]+[uUlL]*|\d+[uUlL]*', norm):
        return False
    return bool(_RE_REAL_EXPR_INDICATOR.search(expr))


def _check_stub(body_lines, body_line_nums, sig_text):
    real_code_lines = 0
    comment_only_lines = 0
    has_comment_only = False
    has_stub_marker = False

    for idx, body_line in enumerate(body_lines):
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

    if real_code_lines < 3 and not _is_legitimate_accessor(body_lines):
        extra = ''
        if has_stub_marker:
            extra += ' (has // TODO/stub/FIXME)'
        return True, f"stub: {real_code_lines} real line(s){extra}"

    if has_comment_only and real_code_lines < 5:
        significant = real_code_lines + comment_only_lines
        pct = int(comment_only_lines * 100 / significant) if significant > 0 else 0
        return True, f"comment shell: {comment_only_lines}/{significant} lines = {pct}% comments, {real_code_lines} real"

    significant = real_code_lines + comment_only_lines
    if significant > 0:
        ratio = comment_only_lines / significant
        if ratio > 0.5:
            pct = int(ratio * 100)
            return True, f"comment shell: {comment_only_lines}/{significant} lines = {pct}% comments, {real_code_lines} real"

    return False, None


# ===================================================
# Phase 4: Per-function check
# ===================================================

def _check_function(filepath, sig_text, body_lines, body_line_nums, func_start, func_end):
    """Run all checks on a single function. Returns list of failure reasons."""
    failures = []

    # Check stub/comment-shell (source-based)
    is_stub, stub_reason = _check_stub(body_lines, body_line_nums, sig_text)
    if is_stub:
        failures.append(stub_reason)

    # Check coding violations (AST-based)
    vios = _check_ast_violations(filepath, func_start, func_end)
    for line_no, category, detail in vios:
        failures.append(f"{category}: {detail}")

    return failures


def _extract_full_name(sig_text):
    sig_one = sig_text.replace('\n', ' ').replace('\r', ' ').strip()
    sig_one = sig_one.rstrip('{').strip()
    m = re.search(r'(\w+::\w+)\s*\(', sig_one)
    if m:
        return m.group(1)
    return None


# ===================================================
# Phase 5: File processing
# ===================================================

def _process_file(filepath, changed_lines, ida_client=None, ida_name_index=None,
                  ida_min_ratio=0.3, ida_max_stub=0.3):
    try:
        with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
            lines = f.readlines()
    except Exception as e:
        return [f"{filepath}:0: unknown: FAIL - cannot read file: {e}"], False

    outputs = []
    all_pass = True

    for func_start, func_end, sig_text, body_lines, body_line_nums in extract_functions(lines):
        func_line_range = set(range(func_start, func_end + 1))
        if not (func_line_range & changed_lines):
            continue

        func_name = _extract_func_name(sig_text)
        failures = _check_function(filepath, sig_text, body_lines, body_line_nums,
                                   func_start, func_end)

        if failures:
            all_pass = False
            for reason in failures:
                outputs.append(f"{filepath}:{func_start}: {func_name}: FAIL - {reason}")
        else:
            real_count = sum(1 for l in body_lines if _is_real_code_line(l))
            pass_line = f"{filepath}:{func_start}: {func_name}: PASS - {real_count} real lines, 0 violations"

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
    try:
        from verify_translation import verify_single_by_name
    except ImportError:
        return None

    full_name = _extract_full_name(sig_text)
    search_name = full_name if full_name else func_name

    try:
        result = verify_single_by_name(
            client, search_name, name_index,
            min_lines=3, likely_real=min_ratio,
            likely_stub=max_stub, skip_size=20,
        )
    except Exception as e:
        return f"{filepath}:{func_start}: {func_name}: FAIL - IDA verify error: {e}"

    if result is None:
        return f"{filepath}:{func_start}: {func_name}: FAIL - IDA: function '{search_name}' not found in signals.json"

    verdict = result.get("verdict", "UNKNOWN")
    if verdict == "LIKELY_STUB":
        reason = result.get("reason", "structural mismatch")
        ratios = result.get("ratios", {})
        overall = ratios.get("overall", "?")
        return f"{filepath}:{func_start}: {func_name}: FAIL - IDA: LIKELY STUB -- ratio={overall} ({reason})"
    elif verdict == "BORDERLINE":
        ratios = result.get("ratios", {})
        overall = ratios.get("overall", "?")
        return f"{filepath}:{func_start}: {func_name}: FAIL - IDA: BORDERLINE -- ratio={overall} needs review"

    return None


# ===================================================
# Main
# ===================================================

def main():
    parser = argparse.ArgumentParser(description='Check functions for coding violations.')
    parser.add_argument('--ida-verify', action='store_true',
                        help='Enable IDA-based structural verification')
    parser.add_argument('--min-ida-ratio', type=float, default=0.3)
    parser.add_argument('--max-ida-stub-ratio', type=float, default=0.3)
    parser.add_argument('files', nargs='*', metavar='FILE',
                        help='Check ALL functions in specified .cpp files')
    args = parser.parse_args()

    repo_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

    if args.files:
        changed_files = {}
        for f in args.files:
            abs_path = os.path.join(repo_root, f) if not os.path.isabs(f) else f
            if os.path.isfile(abs_path) and abs_path.endswith('.cpp'):
                with open(abs_path, 'r', encoding='utf-8', errors='replace') as fh:
                    line_count = len(fh.readlines())
                changed_files[f.replace('\\', '/')] = set(range(1, line_count + 1))
            else:
                print(f"WARNING: Skipping '{f}' -- not a .cpp file or not found", file=sys.stderr)
    else:
        changed_files = _parse_git_diff()

    if not changed_files:
        print("No .cpp files to check.")
        sys.exit(0)

    ida_client = None
    ida_name_index = None
    if args.ida_verify:
        try:
            from verify_translation import MCPClient, load_functions_json
            funcs_list, ida_name_index = load_functions_json()
            ida_client = MCPClient()
            if not ida_client.connect():
                print("WARNING: IDA MCP connection failed. Skipping IDA verification.",
                      file=sys.stderr)
                ida_client = None
        except Exception as e:
            print(f"WARNING: Failed to initialize IDA verify: {e}. Skipping.", file=sys.stderr)
            ida_client = None

    all_pass = True
    total_checked = 0
    ida_rejected = 0

    try:
        # Phase A: Check ALL .hpp files for forbidden implementations
        # (not just git-diff changed — violations in core/ headers must be caught
        #  even if those files haven't been recently modified)
        import glob as _glob
        all_hpp = []
        for pattern in ['src/**/*.hpp', 'app/**/*.hpp']:
            all_hpp.extend(_glob.glob(pattern, root_dir=repo_root, recursive=True))
        for rel_path in sorted(set(all_hpp)):
            abs_path = os.path.join(repo_root, rel_path)
            if not os.path.isfile(abs_path):
                continue
            try:
                checker = ClangChecker(abs_path)
                checker.parse()
                hpp_vios = checker.check_hpp_implementations()
                for line_no, category, detail in hpp_vios:
                    full_msg = f"FAIL: {rel_path}:{line_no}: {category} -- {detail}"
                    print(full_msg)
                    all_pass = False
                    total_checked += 1
            except Exception as e:
                print(f"WARNING: hpp check failed for {rel_path}: {e}", file=sys.stderr)

        # Phase B: Check .cpp files for function-level violations
        for rel_path, changed_line_set in sorted(changed_files.items()):
            if not rel_path.endswith('.cpp'):
                continue
            if _should_skip(rel_path):
                continue

            abs_path = os.path.join(repo_root, rel_path)
            if not os.path.isfile(abs_path):
                continue

            outputs, file_pass = _process_file(
                abs_path, changed_line_set,
                ida_client=ida_client, ida_name_index=ida_name_index,
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
