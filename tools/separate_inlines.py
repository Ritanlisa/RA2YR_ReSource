#!/usr/bin/env python3
"""Separate inline function implementations from .hpp to .cpp files.
Usage: python tools/separate_inlines.py [--dry-run] [--all] [file1.hpp ...]
Skips: multi-line bodies, misc_ext.hpp, known-problematic files.
"""
import re, sys
from pathlib import Path
from collections import defaultdict

BODY_DETECT_RE = re.compile(r'\)[^{]*\{[^\}]*\}\s*(?://.*)?$')
SKIP_PATTERNS = [
    re.compile(r'^\s*#'), re.compile(r'^\s*//'), re.compile(r'^\s*\*'),
    re.compile(r'^\s*/\*'), re.compile(r'^\s*\}'),
    re.compile(r'^\s*(if|for|while|switch|catch)\s*\(', re.I),
    re.compile(r'^\s*(else\s+if|else)\s*[{:]', re.I),
    re.compile(r'^\s*(class|struct|enum|namespace|union)\s+\w+', re.I),
    re.compile(r'^\s*(class|struct|enum|namespace|union)\s*$', re.I),
    re.compile(r'^\s*(class|struct|enum|namespace|union)\s*[:{]', re.I),
    re.compile(r'^\s*extern\s+"C"', re.I),
    re.compile(r'^\s*(public|private|protected)\s*:', re.I),
    re.compile(r'=\s*(default|0|delete)\s*;'),
]

# Files known to have multi-line inline bodies or edge cases
PROBLEMATIC_FILES = {
    'misc_ext.hpp', 'utility_ext.hpp', 'warhead_type.hpp', 'locomotion.hpp',
    'buffer_io_file.hpp', 'cd_file.hpp', 'capture_manager.hpp', 'slave_manager.hpp',
    'spawn_manager.hpp', 'game_systems.hpp', 'waypoint.hpp', 'waypoint_path.hpp',
    'team_type.hpp', 'tevent.hpp', 'taction.hpp', 'type_classes.hpp',
    'command_ext.hpp', 'ui_ext.hpp', 'abstract_type.hpp', 'mouse.hpp', 'command_class.hpp',
}

def _is_skip_line(line):
    for pat in SKIP_PATTERNS:
        if pat.search(line): return True
    return False

def has_multi_line_inline(hpp_path):
    try:
        lines = hpp_path.read_text(encoding='utf-8', errors='replace').split('\n')
    except: return True
    for i, line in enumerate(lines):
        if re.match(r'^\s*\{(\s*//.*)?$', line) and i > 0:
            prev = lines[i-1].rstrip()
            if prev.endswith((')', 'override', 'noexcept', 'const', 'final')):
                return True
    return False

def parse_function_line(line, current_class):
    if not BODY_DETECT_RE.search(line): return None
    if _is_skip_line(line): return None
    if re.search(r'\)\s*(?:noexcept\s*)?:', line): return None  # constructor init list
    m = re.match(r'^(\s*)(.*?)\(([^)]*)\)\s*(.*?)\{([^\}]*)\}\s*(//[^\n]*)?$', line)
    if not m: return None
    indent, before_paren, params_str = m.group(1), m.group(2).strip(), m.group(3).strip()
    quals_between, body_content = m.group(4).strip(), m.group(5).strip()
    addr_comment = (m.group(6) or '').strip()
    if ':' in quals_between: return None  # initializer list
    sig_check = before_paren.lower()
    if any(kw == sig_check.split()[0] if sig_check.split() else False
           for kw in ['if','for','while','switch','catch','return']): return None
    is_virtual = before_paren.startswith('virtual ')
    is_static = before_paren.startswith('static ')
    clean_before = before_paren
    if is_virtual: clean_before = before_paren[8:].strip()
    elif is_static: clean_before = before_paren[7:].strip()
    # Skip functions with numeric names (batch-generated stubs)
    if re.match(r'^\d', clean_before.rsplit(None, 1)[-1] if clean_before else ''):
        return None
    # Skip function names containing :: (malformed stubs)
    if '::' in clean_before.rsplit(None, 1)[-1] if clean_before else '':
        return None
    parts = clean_before.rsplit(None, 1)
    return_type = parts[0] if len(parts) > 1 else ''
    method_name = parts[-1]
    storage = 'static ' if is_static else ('virtual ' if is_virtual else '')
    decl_part = f"{storage}{clean_before}({params_str})"
    if quals_between: decl_part += f" {quals_between}"
    cpp_quals = ' '.join(q for q in quals_between.split() if q not in ('override','final'))
    cpp_params = re.sub(r'\s*=\s*[^,)]+', '', params_str)
    cpp_return = re.sub(r'^explicit\s*', '', return_type).strip()
    cpp_sig = f"{cpp_return} {current_class}::{method_name}({cpp_params})"
    if cpp_quals: cpp_sig += f" {cpp_quals}"
    return {'indent':indent, 'declaration':decl_part, 'cpp_sig':cpp_sig,
            'body':body_content, 'addr_comment':addr_comment, 'class_name':current_class,
            'has_class': bool(current_class), 'line_num': 0}

def find_inline_functions(hpp_path):
    lines = hpp_path.read_text(encoding='utf-8', errors='replace').split('\n')
    current_class, results = None, []
    for i, line in enumerate(lines):
        cm = re.match(r'^\s*(?:class|struct)\s+(\w+)', line)
        if cm: current_class = cm.group(1); continue
        func = parse_function_line(line, current_class)
        if func: func['line_num'] = i; results.append(func)
    return results, lines

def get_namespace(hpp_path):
    content = hpp_path.read_text(encoding='utf-8', errors='replace')
    if 'namespace ra2' in content and 'namespace game' in content: return 'ra2::game'
    return 'gamemd'

def transform_hpp(hpp_path, funcs, original_lines):
    new_lines = list(original_lines)
    for func in funcs:
        if not func.get('has_class'): continue
        ln, ind, decl, addr = func['line_num'], func['indent'], func['declaration'], func['addr_comment']
        new_lines[ln] = f"{ind}{decl}; {addr}".rstrip() if addr else f"{ind}{decl};"
    hpp_path.write_text('\n'.join(new_lines), encoding='utf-8')

def generate_cpp(hpp_rel, namespace, funcs_by_class):
    lines = [f'#include "{hpp_rel}"', '']
    if namespace == 'ra2::game': lines += ['namespace ra2 { namespace game {', '']
    else: lines += [f'namespace {namespace} {{', '']
    for cls, cfuncs in funcs_by_class.items():
        lines.append(f'// --- {cls} ---')
        lines.append('')
        for f in cfuncs:
            sig, body = f['cpp_sig'], f['body']
            lines.append(f'{sig} {{ {body} }}' if body else f'{sig} {{}}')
        lines.append('')
    if namespace == 'ra2::game': lines += ['} // namespace game', '} // namespace ra2', '']
    else: lines += [f'}} // namespace {namespace}', '']
    return '\n'.join(lines)

def process_file(hpp_path, dry_run=False):
    hpp_path = Path(hpp_path)
    if not hpp_path.exists(): return 0
    if hpp_path.name in PROBLEMATIC_FILES:
        return 0
    if has_multi_line_inline(hpp_path):
        print(f"  SKIP {hpp_path.name} (multi-line)")
        return 0
    funcs, orig = find_inline_functions(hpp_path)
    if not funcs: return 0
    by_class = defaultdict(list)
    for f in funcs:
        if f['class_name']: by_class[f['class_name']].append(f)
    if not by_class: return 0
    ns = get_namespace(hpp_path)
    rel = str(hpp_path.relative_to(Path('src'))).replace('\\', '/')
    cpp_path = hpp_path.parent / (hpp_path.stem + '.cpp')
    content = generate_cpp(rel, ns, by_class)
    print(f"  {hpp_path.name}: {len(funcs)} inlines, {len(by_class)} classes -> {cpp_path.name}{' (NEW)' if not cpp_path.exists() else ''}")
    if dry_run: return len(funcs)
    transform_hpp(hpp_path, funcs, orig)
    if cpp_path.exists():
        cpp_path.write_text(cpp_path.read_text(encoding='utf-8').rstrip() + '\n\n' + content, encoding='utf-8')
    else:
        cpp_path.write_text(content, encoding='utf-8')
    return len(funcs)

def main():
    dry_run = '--dry-run' in sys.argv
    all_files = '--all' in sys.argv
    targets = [a for a in sys.argv[1:] if not a.startswith('--') and a.endswith('.hpp')]
    if all_files:
        targets = [t for t in Path('src').rglob('*.hpp')
                   if '_generated' not in str(t) and not t.name.endswith('_funcs.hpp')
                   and t.name not in PROBLEMATIC_FILES]
    if not targets:
        print("Usage: python tools/separate_inlines.py [--dry-run] [--all] [files...]")
        return
    total, nf = 0, 0
    for t in targets:
        n = process_file(Path(t), dry_run)
        if n > 0: total += n; nf += 1
    print(f"\n=== {nf} files, {total} inlines {'(DRY RUN)' if dry_run else ''} ===")

if __name__ == '__main__': main()
