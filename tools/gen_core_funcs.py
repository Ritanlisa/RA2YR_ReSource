#!/usr/bin/env python3
"""Generate src/core/_funcs.hpp from functions_by_module.json core module."""
import json
import sys
from pathlib import Path
from collections import defaultdict

SCRIPT_DIR = Path(__file__).resolve().parent
PROJECT_DIR = SCRIPT_DIR.parent

def load_json(path):
    with open(path, 'r', encoding='utf-8') as f:
        return json.load(f)

def addr_to_int(addr_str):
    """Convert '0x401190' or '0x401190' to int."""
    return int(addr_str, 16)

def group_functions_by_range(functions, range_size=0x10000):
    """Group functions by address range."""
    groups = defaultdict(list)
    for func in functions:
        addr = addr_to_int(func['addr'])
        # Round down to range boundary
        range_start = (addr // range_size) * range_size
        groups[range_start].append(func)

    # Sort within each group by address
    for k in groups:
        groups[k].sort(key=lambda f: addr_to_int(f['addr']))

    return groups

def format_return_type(rt):
    """Normalize return type for declaration."""
    rt = rt.strip()
    if rt == 'void':
        return 'void'
    return rt

def generate_declaration(func):
    """Generate a single function declaration line."""
    name = func['name']
    addr = func['addr']
    convention = func.get('convention', '')
    category = func.get('category', 'global')
    ret = format_return_type(func.get('return_type', 'int'))
    param_bytes = func.get('param_bytes', 0)

    # Build annotation
    parts = [f'// IDA: {addr}']
    if category or convention:
        tag = f'{category}'
        if convention:
            tag += f': {convention}'
        parts.append(f'[{tag}]')

    annotation = ' '.join(parts)

    # For class member functions (containing ::)
    if '::' in name:
        # These are member functions - just comment them out as references
        return f'    // {ret} {name}(/* param_bytes: {param_bytes} */) noexcept; {annotation}'

    # Global / static functions
    return f'    {ret} {name}(/* param_bytes: {param_bytes} */) noexcept; {annotation}'

def generate_header(functions):
    """Generate the full header file content."""
    lines = []
    lines.append('// Auto-generated from tools/functions_by_module.json (core module)')
    lines.append('// DO NOT EDIT MANUALLY — regenerate with: python tools/gen_core_funcs.py')
    lines.append(f'// Total functions: {len(functions)}')
    lines.append('')
    lines.append('#pragma once')
    lines.append('')
    lines.append('namespace gamemd {')
    lines.append('')
    lines.append('// ============================================================================')
    lines.append('// Core Module Function Declarations')
    lines.append('// ============================================================================')
    lines.append('')

    # Group by address range
    groups = group_functions_by_range(functions, range_size=0x10000)

    # Count sub_ functions
    sub_count = sum(1 for f in functions if f['name'].startswith('sub_'))
    named_count = len(functions) - sub_count

    lines.append(f'// Statistics: {named_count} named, {sub_count} sub_* (total {len(functions)})')
    lines.append('// Address ranges are 0x10000 chunks')
    lines.append('')

    for range_start in sorted(groups.keys()):
        funcs = groups[range_start]
        range_end = range_start + 0xFFFF
        named_in_range = sum(1 for f in funcs if not f['name'].startswith('sub_'))
        sub_in_range = sum(1 for f in funcs if f['name'].startswith('sub_'))

        lines.append(f'// === 0x{range_start:06X} - 0x{range_end:06X} ({len(funcs)} funcs: {named_in_range} named, {sub_in_range} sub_) ===')
        lines.append('')

        for func in funcs:
            lines.append(generate_declaration(func))

        lines.append('')

    lines.append('} // namespace gamemd')
    return '\n'.join(lines)

def main():
    json_path = PROJECT_DIR / 'tools' / 'functions_by_module.json'
    output_path = PROJECT_DIR / 'src' / 'core' / '_funcs.hpp'

    print(f'Loading {json_path}...', file=sys.stderr)
    data = load_json(json_path)

    if 'core' not in data:
        print("ERROR: 'core' module not found in JSON", file=sys.stderr)
        sys.exit(1)

    core = data['core']
    functions = core['functions']
    print(f'Found {len(functions)} functions in core module', file=sys.stderr)

    # Generate
    content = generate_header(functions)
    content += '\n'

    # Write
    print(f'Writing {output_path}...', file=sys.stderr)
    with open(output_path, 'w', encoding='utf-8') as f:
        f.write(content)

    # Stats
    lines_count = content.count('\n')
    ida_count = content.count('// IDA: 0x')
    print(f'Wrote {lines_count} lines, {ida_count} IDA annotations', file=sys.stderr)
    print(f'File size: {len(content)} bytes', file=sys.stderr)

    # Save evidence
    evidence_dir = PROJECT_DIR / '.omo' / 'evidence'
    evidence_dir.mkdir(parents=True, exist_ok=True)
    evidence_path = evidence_dir / 'task-6-core-funcs.txt'
    with open(evidence_path, 'w', encoding='utf-8') as f:
        f.write(f'Generated: src/core/_funcs.hpp\n')
        f.write(f'Source: tools/functions_by_module.json (core module)\n')
        f.write(f'Total functions: {len(functions)}\n')
        f.write(f'Named functions: {sum(1 for f in functions if not f["name"].startswith("sub_"))}\n')
        f.write(f'sub_* functions: {sum(1 for f in functions if f["name"].startswith("sub_"))}\n')
        f.write(f'IDA annotations: {ida_count}\n')
        f.write(f'Total lines: {lines_count}\n')
        f.write(f'File size: {len(content)} bytes\n')
    print(f'Evidence saved to {evidence_path}', file=sys.stderr)

    return 0

if __name__ == '__main__':
    sys.exit(main())
