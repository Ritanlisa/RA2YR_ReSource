#!/usr/bin/env python3
"""
Translation Audit Tool for RA2YR ReSource.

Three modes:
  --check-stubs     Scan all src/**/*.cpp, detect stub patterns, output file:line
  --check-metadata  Cross-reference functions.json translated/completed vs src/ implementations
  --summary         Print per-module translation progress table

Requires: Python 3.7+, stdlib only (argparse, json, pathlib, re)
"""

import argparse
import json
import os
import re
import sys
from collections import defaultdict
from pathlib import Path


# ──────────────────────────────────────────────────────────────
# Constants
# ──────────────────────────────────────────────────────────────

# Patterns that mark a line as "stub intent"
STUB_COMMENT_PATTERNS = [
    re.compile(r'//\s*TODO'),
    re.compile(r'//\s*stub', re.IGNORECASE),
    re.compile(r'//\s*STUB'),
    re.compile(r'//\s*FIXME'),
    re.compile(r'//\s*placeholder', re.IGNORECASE),
]

# Patterns that suggest a trivial/stub return
TRIVIAL_RETURN_PATTERNS = [
    re.compile(r'^\s*return\s+0\s*;'),
    re.compile(r'^\s*return\s+false\s*;'),
    re.compile(r'^\s*return\s+true\s*;'),
    re.compile(r'^\s*return\s+nullptr\s*;'),
    re.compile(r'^\s*return\s+NULL\s*;'),
    re.compile(r'^\s*return\s+-1\s*;'),
    re.compile(r'^\s*return\s*;'),
]

# (void)var; cast-to-void pattern (common in stub bodies)
VOID_CAST_PATTERN = re.compile(r'^\s*\(void\)\s*\w+\s*;')

# REVERSE marker (these are verified pipeline functions, not stubs)
REVERSE_PATTERN = re.compile(r'^\s*REVERSE\s*\(')

# Function definition pattern: captures return type, optional class::, name, params
# Matches like:
#   int ClassName::MethodName(...)
#   bool GlobalFunction(...)
#   extern "C" void* FuncName(...)
#   static int Func(...)
FUNC_DEF_PATTERN = re.compile(
    r'^\s*(?:(?:extern\s+"C"\s+|static\s+|virtual\s+|inline\s+|constexpr\s+|explicit\s+|friend\s+)+)?'
    r'(?:[\w]+(?:\s*[*&]+)?\s+)+?'  # return type (rough)
    r'('
    r'[\w:]+'  # optional class name with ::
    r')::('     # ::
    r'~?[\w]+'  # method name
    r')\s*\('
    r'|'
    r'^\s*(?:(?:extern\s+"C"\s+|static\s+|virtual\s+|inline\s+|constexpr\s+|explicit\s+|friend\s+)+)?'
    r'([\w]+(?:\s*[*&]+)?)\s+'  # return type
    r'('
    r'[\w]+'    # function name
    r')\s*\('
)

# Simpler function signature extraction from body
METHOD_SIG = re.compile(r'(\w+(?:::[\w~]+)+)\s*\(')
GLOBAL_FUNC_SIG = re.compile(r'(?:^|\n)\s*[\w\s*&]+\s+(\w+)\s*\([^)]*\)\s*(?:const\s*)?\{')

# Line-level function definition detection (simpler, more reliable)
FUNC_SIG_LINE = re.compile(
    r'^\s*'  # leading whitespace
    r'(?:[\w]+(?:\s*[*&]+)?\s+)+?'  # return type
    r'('
    r'(?:[\w]+::)?'  # optional class prefix
    r'~?[\w]+'  # function name
    r')'
    r'\s*\('  # opening paren
)

# Head-of-function opening brace (on its own line)
OPEN_BRACE_LINE = re.compile(r'^\s*\{\s*$')

# REVERSE macro line
REVERSE_LINE = re.compile(r'^\s*REVERSE\s*\((.+)\)\s*$')


# ──────────────────────────────────────────────────────────────
# Utility: module from path
# ──────────────────────────────────────────────────────────────

def module_from_path(filepath: str) -> str:
    """Extract module name from src/ path: src/team/trigger.cpp → 'team'"""
    rel = os.path.relpath(filepath, 'src') if 'src' in filepath else filepath
    parts = rel.replace('\\', '/').split('/')
    if len(parts) >= 2:
        return parts[0]
    return os.path.splitext(parts[0])[0] if parts else 'unknown'


# ──────────────────────────────────────────────────────────────
# Stub Detection
# ──────────────────────────────────────────────────────────────

def is_stub_line(line: str) -> bool:
    """Check if a single line contains a stub intent comment."""
    stripped = line.strip()
    if not stripped:
        return False
    for pat in STUB_COMMENT_PATTERNS:
        if pat.search(stripped):
            return True
    return False


def is_trivial_return(line: str) -> bool:
    """Check if a line is a trivial return statement."""
    for pat in TRIVIAL_RETURN_PATTERNS:
        if pat.search(line):
            return True
    return False


def is_void_cast(line: str) -> bool:
    """Check if a line is a (void)var; cast."""
    return bool(VOID_CAST_PATTERN.search(line))


def classify_stub_line(line: str) -> str:
    """Classify the type of stub on a line."""
    stripped = line.strip()
    for pat in STUB_COMMENT_PATTERNS:
        if pat.search(stripped):
            return 'TODO'
    for pat in TRIVIAL_RETURN_PATTERNS:
        if pat.search(stripped):
            return 'TRIVIAL_RETURN'
    if VOID_CAST_PATTERN.search(stripped):
        return 'VOID_CAST'
    return 'STUB'


def scan_file_stubs(filepath: str) -> list[dict]:
    """Scan a single .cpp file for stub patterns. Returns list of {file, line, type, text}."""
    results = []
    try:
        with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
            lines = f.readlines()
    except (OSError, UnicodeDecodeError):
        return results

    in_func = False
    brace_depth = 0
    func_start_line = 0
    func_name = ''
    has_todo = False
    has_reverse = False
    body_lines = []
    body_line_nums = []
    non_trivial_lines = 0

    for i, line in enumerate(lines, 1):
        stripped = line.strip()

        # Check for REVERSE marker before function body
        if REVERSE_LINE.match(stripped):
            has_reverse = True

        # Track function boundaries with brace counting
        if OPEN_BRACE_LINE.match(stripped) and not in_func:
            # Check if previous line looks like a function signature
            if i >= 2:
                prev = lines[i - 2].rstrip()
                if FUNC_SIG_LINE.match(prev):
                    in_func = True
                    brace_depth = 1
                    func_start_line = i
                    m = FUNC_SIG_LINE.match(prev)
                    func_name = m.group(1) if m else ''
                    has_todo = False
                    has_reverse = False
                    body_lines = []
                    body_line_nums = []
                    non_trivial_lines = 0
                    continue

        if in_func:
            body_lines.append(stripped)
            body_line_nums.append(i)

            # Count braces
            brace_depth += stripped.count('{') - stripped.count('}')

            # Check for TODO/stub comments
            if is_stub_line(stripped):
                has_todo = True
                results.append({
                    'file': os.path.relpath(filepath),
                    'line': i,
                    'type': 'TODO',
                    'text': stripped[:100]
                })

            # Count non-trivial lines
            if stripped and not stripped.startswith('//') and not stripped.startswith('/*'):
                if not is_trivial_return(stripped) and not is_void_cast(stripped):
                    non_trivial_lines += 1

            # Function ends
            if brace_depth == 0:
                # If the function has only trivial returns and TODO comments,
                # and body is short, mark the function as a stub
                if non_trivial_lines == 0 and not has_reverse and 2 <= len(body_lines) <= 15:
                    # Mark as empty/stub function
                    results.append({
                        'file': os.path.relpath(filepath),
                        'line': func_start_line,
                        'type': 'EMPTY_BODY',
                        'text': f'{func_name}() {{ ... }} — {len(body_lines)} trivial lines'
                    })

                in_func = False
                brace_depth = 0

    return results


# ──────────────────────────────────────────────────────────────
# Function extraction from .cpp files
# ──────────────────────────────────────────────────────────────

def extract_functions_from_cpp(filepath: str) -> list[dict]:
    """Extract function names and whether they are stubs from a .cpp file.
    Returns list of {name, line, is_stub, body_len, has_todo, has_reverse}."""
    results = []
    try:
        with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
            lines = f.readlines()
    except (OSError, UnicodeDecodeError):
        return results

    i = 0
    while i < len(lines):
        line = lines[i]
        stripped = line.strip()

        # Skip non-function lines
        if not FUNC_SIG_LINE.match(stripped):
            i += 1
            continue

        # Look for opening brace on next line (or same line)
        func_sig = stripped
        func_line = i + 1
        has_reverse = bool(REVERSE_LINE.match(stripped))

        # Check previous line for REVERSE marker
        if i >= 2:
            prev = lines[i - 1].rstrip() if i >= 1 else ''
            prev2 = lines[i - 2].rstrip() if i >= 2 else ''
            if REVERSE_LINE.match(prev) or REVERSE_LINE.match(prev2):
                has_reverse = True

        m = FUNC_SIG_LINE.match(stripped)
        func_name = m.group(1) if m else ''

        # Find opening brace
        brace_line = -1
        j = i
        while j < min(i + 5, len(lines)):
            if OPEN_BRACE_LINE.match(lines[j].rstrip()):
                brace_line = j
                break
            if '{' in lines[j] and j > i:
                brace_line = j
                break
            j += 1

        if brace_line < 0:
            i += 1
            continue

        # Extract body and count
        body = []
        depth = 0
        has_todo = False
        k = brace_line
        while k < len(lines):
            for ch in lines[k]:
                if ch == '{':
                    depth += 1
                elif ch == '}':
                    depth -= 1
            body.append(lines[k].strip())
            if is_stub_line(lines[k]):
                has_todo = True
            if depth == 0 and k > brace_line:
                break
            k += 1

        body_len = k - brace_line + 1
        is_func_stub = has_todo or (body_len <= 4 and not has_reverse)

        results.append({
            'name': func_name,
            'line': func_line,
            'is_stub': is_func_stub,
            'has_todo': has_todo,
            'has_reverse': has_reverse,
            'body_len': body_len,
        })

        i = k + 1

    return results


# ──────────────────────────────────────────────────────────────
# Mode 1: --check-stubs
# ──────────────────────────────────────────────────────────────

def cmd_check_stubs(src_dir: str, json_output: bool = False) -> dict:
    """Scan all .cpp files for stub patterns."""
    all_results = []
    src_path = Path(src_dir)

    cpp_files = sorted(src_path.rglob('*.cpp'))

    for cpp_file in cpp_files:
        file_results = scan_file_stubs(str(cpp_file))
        all_results.extend(file_results)

    if json_output:
        return {'stubs': all_results, 'count': len(all_results)}

    # Human-readable output
    if not all_results:
        print("[OK] 0 stubs found -- all functions fully implemented!")
        return {'stubs': [], 'count': 0}

    print(f"Found {len(all_results)} stub markers across {len(set(r['file'] for r in all_results))} files:\n")

    by_file = defaultdict(list)
    for r in all_results:
        by_file[r['file']].append(r)

    for fname in sorted(by_file):
        items = by_file[fname]
        type_counts = defaultdict(int)
        for item in items:
            type_counts[item['type']] += 1
        type_str = ', '.join(f'{k}:{v}' for k, v in sorted(type_counts.items()))
        print(f"  {fname}  ({len(items)} stubs, {type_str})")
        for item in items:
            print(f"    L{item['line']:>4}: [{item['type']:<14}] {item['text']}")
        print()

    return {'stubs': all_results, 'count': len(all_results)}


# ──────────────────────────────────────────────────────────────
# Mode 2: --check-metadata
# ──────────────────────────────────────────────────────────────

def load_functions_json(fjson_path: str) -> tuple[dict, list[dict]]:
    """Load functions.json. Returns (full_data, function_entries)."""
    with open(fjson_path, 'r', encoding='utf-8', errors='replace') as f:
        data = json.load(f)
    return data, data.get('functions', [])


def cmd_check_metadata(src_dir: str, fjson_path: str) -> dict:
    """Cross-reference functions.json translated/completed with src/ implementations."""
    src_path = Path(src_dir)
    data, func_entries = load_functions_json(fjson_path)

    # Check if translated field exists
    has_translated = any('translated' in f.get('hook', {}) for f in func_entries[:100])

    # Build index of functions defined in .cpp files
    cpp_funcs: dict[str, dict] = {}  # normalized_name -> info
    all_cpp_names: set[str] = set()

    for cpp_file in sorted(src_path.rglob('*.cpp')):
        funcs = extract_functions_from_cpp(str(cpp_file))
        for f in funcs:
            name = f['name']
            all_cpp_names.add(name)
            # Also add without class prefix for matching
            if '::' in name:
                method_only = name.split('::')[-1]
                all_cpp_names.add(method_only)
            cpp_funcs[name] = f

    # Check each functions.json entry
    issues = []
    untranslated = []  # marked translated but stub or not found
    unmarked = []      # not marked but has real implementation

    field_name = 'translated' if has_translated else 'completed'
    if not has_translated:
        print(f"NOTE: 'translated' field not found in functions.json. Using 'completed' as proxy.\n")

    for entry in func_entries:
        hook = entry.get('hook', {})
        is_marked = hook.get(field_name, False)
        name = entry.get('name', '')
        call_info = entry.get('call', {})
        class_name = call_info.get('class_name', '')
        method_name = call_info.get('method_name', '')

        # Build possible name forms
        search_names = [name]
        if class_name and method_name:
            search_names.append(f'{class_name}::{method_name}')
        if '::' in name:
            search_names.append(name.split('::')[-1])

        # Check if any form exists in cpp
        found_in_cpp = False
        matched_name = None
        for sn in search_names:
            if sn in cpp_funcs:
                found_in_cpp = True
                matched_name = sn
                break
            if sn in all_cpp_names:
                found_in_cpp = True
                matched_name = sn
                break

        if is_marked:
            if not found_in_cpp:
                issues.append({
                    'name': name,
                    'address': entry.get('address', '?'),
                    'issue': 'marked but not found in any .cpp',
                    'field': field_name,
                })
            elif cpp_funcs.get(matched_name, {}).get('is_stub'):
                issues.append({
                    'name': name,
                    'address': entry.get('address', '?'),
                    'issue': f'marked but implementation is a stub (in {cpp_funcs[matched_name].get("file", "?")})',
                    'field': field_name,
                })

        # Check unmarked but has real implementation
        if not is_marked and found_in_cpp:
            info = cpp_funcs.get(matched_name, {})
            if not info.get('is_stub') and not info.get('has_todo'):
                unmarked.append({
                    'name': name,
                    'address': entry.get('address', '?'),
                    'file': os.path.relpath(str(src_path), start=os.path.dirname(src_dir)) if src_dir else '',
                    'type': 'has real implementation but not marked',
                })

    # Output
    total_marked = sum(1 for f in func_entries if f.get('hook', {}).get(field_name, False))
    print(f"Total functions: {len(func_entries)}")
    print(f"Marked ({field_name}=true): {total_marked}")
    print(f"Functions defined in src/: {len(cpp_funcs)}")
    print()

    if issues:
        print(f"[WARNING] {len(issues)} metadata inconsistencies:\n")
        for issue in issues:
            addr = issue['address']
            print(f"  [{addr}] {issue['name']}")
            print(f"    -> {issue['issue']}")
    else:
        print("[OK] No metadata inconsistencies -- all marked functions found with real implementations.")

    print()
    if unmarked:
        print(f"[INFO] {len(unmarked)} functions have real implementations but are not marked {field_name}=true (first 20):")
        for u in unmarked[:20]:
            print(f"  [{u['address']}] {u['name']}")

    return {
        'total': len(func_entries),
        'marked': total_marked,
        'cpp_funcs': len(cpp_funcs),
        'inconsistencies': len(issues),
        'unmarked_real': len(unmarked),
        'issues': issues,
    }


# ──────────────────────────────────────────────────────────────
# Mode 3: --summary
# ──────────────────────────────────────────────────────────────

def cmd_summary(src_dir: str) -> dict:
    """Print per-module translation progress table."""
    src_path = Path(src_dir)
    modules: dict[str, dict] = defaultdict(lambda: {
        'files': set(),
        'total_funcs': 0,
        'stubs': 0,
        'real': 0,
        'todos': 0,
    })

    for cpp_file in sorted(src_path.rglob('*.cpp')):
        module = module_from_path(str(cpp_file))
        mod = modules[module]
        mod['files'].add(cpp_file.name)

        funcs = extract_functions_from_cpp(str(cpp_file))
        for f in funcs:
            mod['total_funcs'] += 1
            if f['has_todo']:
                mod['todos'] += 1
            if f['is_stub']:
                mod['stubs'] += 1
            else:
                mod['real'] += 1

    # Print table
    print(f"{'Module':<20} {'Files':>5} {'Functions':>10} {'Real':>6} {'Stub':>6} {'TODO':>6} {'Stub%':>7} {'Done%':>7}")
    print('-' * 75)

    totals = {'files': 0, 'funcs': 0, 'real': 0, 'stubs': 0, 'todos': 0}

    # Sort by stub% descending (worst first)
    sorted_mods = sorted(modules.items(), key=lambda x: (
        x[1]['stubs'] / max(x[1]['total_funcs'], 1)
    ), reverse=True)

    for mod_name, mod in sorted_mods:
        t = mod['total_funcs']
        s = mod['stubs']
        td = mod['todos']
        r = mod['real']
        nf = len(mod['files'])
        stub_pct = (s / t * 100) if t > 0 else 0
        done_pct = (r / t * 100) if t > 0 else 0

        totals['files'] += nf
        totals['funcs'] += t
        totals['real'] += r
        totals['stubs'] += s
        totals['todos'] += td

        markers = []
        if stub_pct >= 80:
            markers.append('[HIGH]')
        elif stub_pct == 0:
            markers.append('[CLEAN]')

        marker_str = ' ' + ' '.join(markers) if markers else ''
        print(f"{mod_name:<20} {nf:>5} {t:>10} {r:>6} {s:>6} {td:>6} {stub_pct:>6.0f}% {done_pct:>6.0f}%{marker_str}")

    print('-' * 75)
    t = totals['funcs']
    s = totals['stubs']
    r = totals['real']
    stub_pct = (s / t * 100) if t > 0 else 0
    done_pct = (r / t * 100) if t > 0 else 0
    print(f"{'TOTAL':<20} {totals['files']:>5} {t:>10} {r:>6} {s:>6} {totals['todos']:>6} {stub_pct:>6.0f}% {done_pct:>6.0f}%")

    # Module classification
    print()
    worst = [m for m in sorted_mods if m[1]['stubs'] / max(m[1]['total_funcs'], 1) >= 0.80]
    best = [m for m in sorted_mods if m[1]['stubs'] == 0 and m[1]['total_funcs'] > 0]

    if worst:
        print(f"Worst modules (>=80% stub): {', '.join(m[0] + '/' for m in worst)}")
    if best:
        print(f"Best modules (0% stub):   {', '.join(m[0] + '/' for m in best)}")

    return {
        'modules': dict(modules),
        'totals': totals,
    }


# ──────────────────────────────────────────────────────────────
# CLI Entry Point
# ──────────────────────────────────────────────────────────────

def main():
    parser = argparse.ArgumentParser(
        description='RA2YR ReSource -- Translation Audit Tool',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  python tools/audit_translation.py --check-stubs
  python tools/audit_translation.py --check-metadata --functions-json injectFunctionTest/functions.json
  python tools/audit_translation.py --summary
  python tools/audit_translation.py --check-stubs --json
        """,
    )

    parser.add_argument(
        '--src-dir',
        default='src',
        help='Source directory to scan (default: src/)'
    )
    parser.add_argument(
        '--check-stubs',
        action='store_true',
        help='Scan all src/**/*.cpp and report stub patterns (TODO, return 0, etc.)'
    )
    parser.add_argument(
        '--check-metadata',
        action='store_true',
        help='Cross-reference functions.json translated/completed vs actual src/ implementations'
    )
    parser.add_argument(
        '--summary',
        action='store_true',
        help='Print per-module translation progress table'
    )
    parser.add_argument(
        '--functions-json',
        default='injectFunctionTest/functions.json',
        help='Path to functions.json (default: injectFunctionTest/functions.json)'
    )
    parser.add_argument(
        '--json',
        action='store_true',
        help='Output results as JSON (for --check-stubs / --check-metadata)'
    )
    parser.add_argument(
        '--all',
        action='store_true',
        help='Run all three modes'
    )

    args = parser.parse_args()

    # Determine what to run
    run_stubs = args.check_stubs or args.all
    run_metadata = args.check_metadata or args.all
    run_summary = args.summary or args.all

    if not (run_stubs or run_metadata or run_summary):
        parser.print_help()
        sys.exit(1)

    # Resolve src_dir relative to project root (where functions.json lives)
    project_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    src_dir = os.path.join(project_root, args.src_dir) if not os.path.isabs(args.src_dir) else args.src_dir
    fjson_path = os.path.join(project_root, args.functions_json) if not os.path.isabs(args.functions_json) else args.functions_json

    if not os.path.isdir(src_dir):
        print(f"ERROR: Source directory not found: {src_dir}", file=sys.stderr)
        sys.exit(1)

    if run_metadata and not os.path.isfile(fjson_path):
        print(f"ERROR: functions.json not found: {fjson_path}", file=sys.stderr)
        sys.exit(1)

    results = {}

    if run_stubs:
        print("=" * 60)
        print(" MODE: --check-stubs")
        print("=" * 60)
        print()
        results['stubs'] = cmd_check_stubs(src_dir, json_output=args.json)
        print()

    if run_metadata:
        print("=" * 60)
        print(" MODE: --check-metadata")
        print("=" * 60)
        print()
        results['metadata'] = cmd_check_metadata(src_dir, fjson_path)
        print()

    if run_summary:
        print("=" * 60)
        print(" MODE: --summary")
        print("=" * 60)
        print()
        results['summary'] = cmd_summary(src_dir)
        print()

    # JSON output (if --json and single mode)
    if args.json and not args.all:
        mode_result = results.get('stubs') or results.get('metadata')
        if mode_result:
            print(json.dumps(mode_result, indent=2, default=str))


if __name__ == '__main__':
    main()
