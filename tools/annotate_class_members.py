#!/usr/bin/env python3
"""
annotate_class_members.py — Add // 0xADDR annotations to class member function
declarations in C++ headers.

Reads functions.json to find class member functions (ClassName::MethodName),
locates their declarations in class headers, and adds // 0xADDR annotations
on the same line.

Usage:
    python tools/annotate_class_members.py --dry-run     # Preview changes
    python tools/annotate_class_members.py --apply       # Apply changes
    python tools/annotate_class_members.py --dry-run --verbose  # Verbose preview
"""

import json
import glob
import re
import os
import sys
import argparse
from collections import defaultdict
from pathlib import Path


def build_class_to_header(headers):
    """Build class_name -> header_path mapping.
    Prioritize class definitions (with {) over forward declarations (with ;).
    """
    class_to_header = {}
    for h in sorted(headers):
        try:
            with open(h, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
        except Exception:
            continue

        # Class/struct definitions: "class Foo : public Bar {" or "struct Foo {"
        for m in re.finditer(r'(?:class|struct)\s+(\w+)\s*(?::[^{]*?)?\{', content):
            cn = m.group(1)
            class_to_header[cn] = h

        # Forward declarations: "class Foo;" (only if no definition found)
        for m in re.finditer(r'(?:class|struct)\s+(\w+)\s*;', content):
            cn = m.group(1)
            if cn not in class_to_header:
                class_to_header[cn] = h

    return class_to_header


def build_method_map(funcs, class_to_header):
    """Build header_path -> class_name -> {method_name -> address} mapping.
    Also returns method_name -> [addresses] for multi-class disambiguation.
    """
    # header -> class -> method -> addr
    header_class_methods = defaultdict(lambda: defaultdict(dict))

    for f in funcs:
        name = f.get('name', '')
        if '::' not in name:
            continue
        parts = name.split('::', 1)
        class_name = parts[0]
        method_name = parts[1]
        addr = f.get('address', '')

        if not addr.startswith('0x'):
            continue

        # Skip obviously unmatchable names
        if method_name in ('?', '') or '[' in method_name:
            continue

        if class_name not in class_to_header:
            continue

        h = class_to_header[class_name]
        header_class_methods[h][class_name][method_name] = addr

    return header_class_methods


def is_declaration_line(stripped):
    """Check if a stripped line looks like a C++ function declaration at class scope.
    Returns True if it's a declaration line (with or without body).
    Returns False for code inside function bodies, pure comments, member variables, etc.
    """
    # Must contain '('
    if '(' not in stripped:
        return False

    # Skip preprocessor directives
    if stripped.startswith('#'):
        return False

    # Skip lines that are member variable declarations with offset comments
    if re.search(r'//\s*\+0x', stripped):
        return False

    # Skip pure comment lines
    if stripped.startswith('//') or stripped.startswith('/*'):
        return False

    # Skip non-declaration starter keywords
    first_word = stripped.split()[0] if stripped.split() else ''
    non_decl = {'if', 'for', 'while', 'switch', 'return', 'goto',
                'case', 'break', 'continue', 'delete', 'new',
                'throw', 'catch', 'try', 'sizeof', 'typedef',
                'using', 'namespace', 'template', 'static_cast',
                'dynamic_cast', 'reinterpret_cast', 'const_cast',
                'static_assert', '#include', '#define', '#pragma',
                '#if', '#ifdef', '#ifndef', '#else', '#endif'}
    if first_word in non_decl:
        return False

    # Check for declaration-ending pattern
    # Declaration ends with: ); or ) { or ) const; or ) override; or ) = 0; etc.
    has_decl_end = bool(re.search(
        r'\)\s*(?:const\s*)?(?:override\s*)?(?:final\s*)?(?:noexcept\s*)?'
        r'(?:=\s*(?:0|default|delete)\s*)?\s*[;{]',
        stripped
    ))

    # Multi-line: no closing ) or ends with ( or ,
    after_paren = stripped.split('(', 1)[1] if '(' in stripped else ''
    has_closing = ')' in after_paren
    is_multi = not has_closing or stripped.rstrip().endswith(',') or stripped.rstrip().endswith('(')

    if not has_decl_end and not is_multi:
        return False

    # Must have a method-like name before '('
    m = re.search(r'([~\w]+)\s*\(', stripped)
    if not m:
        return False

    method_name = m.group(1)
    if method_name == 'operator':
        return False

    return True


def compute_class_and_func_bodies(lines):
    """Track brace depth and determine class-scope vs function-body lines.

    Returns: (depths, is_func_body)
      depths: raw brace depth for each line
      is_func_body: True when line is inside a function body (deeper than class scope)
    """
    depths = []
    is_func_body = []
    brace_depth = 0
    class_depth_stack = []  # stack of depths where class/struct bodies started

    for i, line in enumerate(lines):
        stripped = line.strip()

        # Before processing braces, check if this line STARTS a class body
        # Class definition pattern: "class Foo : ... {" or "struct Bar {"
        if re.match(r'^\s*(?:class|struct)\s+\w+', stripped):
            opens = stripped.count('{')
            closes = stripped.count('}')
            if opens > closes:
                # Class body will start at brace_depth + 1 after processing this line
                # Record the depth AFTER the opening brace
                class_depth_stack.append(brace_depth + 1)

        brace_depth += stripped.count('{')
        brace_depth -= stripped.count('}')
        depths.append(brace_depth)

        # Pop class depth stack when we exit the class body
        while class_depth_stack and brace_depth < class_depth_stack[-1]:
            class_depth_stack.pop()

        # Determine if we're inside a function body:
        # Inside a class body but at a depth GREATER than the class's own depth
        in_class = len(class_depth_stack) > 0
        if in_class:
            class_base_depth = class_depth_stack[-1]
            in_func = brace_depth > class_base_depth
        else:
            in_func = False

        is_func_body.append(in_func)

    return depths, is_func_body


def extract_method_name(line):
    """Extract method name from a function declaration line."""
    stripped = line.strip()
    # Handle operators: operator++, operator(), operator<<, etc.
    m = re.search(r'operator\s*([+\-*/%&|^~!=<>\[\]()]+|new|delete|""_[a-z]+)\s*\(', stripped)
    if m:
        return 'operator' + m.group(1)

    # Handle destructors: ~ClassName
    m = re.search(r'(~\w+)\s*\(', stripped)
    if m:
        return m.group(1)

    # Regular method: last word before '(' that's not a keyword
    before_paren = stripped.split('(', 1)[0]
    words = before_paren.split()
    # Skip keywords
    kw = {'virtual', 'static', 'const', 'volatile', 'inline', 'explicit',
          'constexpr', 'mutable', 'extern', 'register'}
    for w in reversed(words):
        if w not in kw and re.match(r'^[~\w:]+$', w):
            # Remove namespace/class qualifiers if present
            if '::' in w:
                w = w.split('::')[-1]
            return w

    # Fallback: regex
    m = re.search(r'([~\w]+)\s*\(', stripped)
    return m.group(1) if m else None


def has_annotation(line):
    """Check if line already has // 0x or // IDA: annotation."""
    return bool(re.search(r'//\s*(?:0x[A-Fa-f0-9]{5,}|IDA:)', line))


def find_address(method_name, header_class_methods, header_path):
    """Find the address for a method in a header.
    Returns (address, class_name) or (None, None).
    If multiple classes define the same method name, pick the first.
    """
    if header_path not in header_class_methods:
        return None, None

    classes = header_class_methods[header_path]
    for class_name, methods in classes.items():
        if method_name in methods:
            return methods[method_name], class_name
    return None, None


def annotate_file(filepath, header_class_methods, dry_run=True, verbose=False):
    """Annotate a single header file. Returns count of annotations added."""
    try:
        with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
            lines = f.readlines()
    except Exception as e:
        if verbose:
            print(f"  ERROR reading {filepath}: {e}")
        return 0

    if filepath not in header_class_methods:
        return 0

    # Compute brace depths to avoid annotating code inside function bodies
    depths, is_func_body = compute_class_and_func_bodies(lines)

    modifications = []
    skipped_body = 0
    skipped_no_addr = 0

    for i, line in enumerate(lines):
        stripped = line.rstrip()

        # Skip already annotated
        if has_annotation(stripped):
            continue

        # Skip if inside a function body
        if is_func_body[i]:
            skipped_body += 1
            continue

        # Check if this line looks like a declaration at class scope
        if not is_declaration_line(stripped):
            continue

        # Extract method name
        method_name = extract_method_name(stripped)
        if not method_name:
            continue

        # Find address in functions.json
        addr, class_name = find_address(method_name, header_class_methods, filepath)
        if not addr:
            skipped_no_addr += 1
            continue

        # Build annotation
        annotation = f'  // {addr}'
        new_line = stripped + annotation + '\n'

        if verbose:
            print(f"  L{i+1}: +annotation {method_name} <- {class_name}::{method_name} @ {addr}")
            print(f"    OLD: {stripped[:120]}")
            print(f"    NEW: {new_line.rstrip()[:120]}")

        modifications.append((i, new_line))

    # Apply modifications (in reverse order to preserve line indices)
    for line_idx, new_line in sorted(modifications, reverse=True):
        lines[line_idx] = new_line

    if not dry_run and modifications:
        try:
            with open(filepath, 'w', encoding='utf-8') as f:
                f.writelines(lines)
        except Exception as e:
            print(f"  ERROR writing {filepath}: {e}")
            return 0

    return len(modifications)


def main():
    parser = argparse.ArgumentParser(
        description='Add // 0xADDR annotations to class member function declarations'
    )
    parser.add_argument('--dry-run', action='store_true', default=True,
                        help='Preview changes without applying (default)')
    parser.add_argument('--apply', action='store_true',
                        help='Apply changes to files')
    parser.add_argument('--verbose', '-v', action='store_true',
                        help='Show detailed per-line changes')
    parser.add_argument('--functions-json',
                        default='injectFunctionTest/functions.json',
                        help='Path to functions.json')
    parser.add_argument('--src-dir', default='src',
                        help='Source directory with headers')
    parser.add_argument('--evidence-dir', default='.omo/evidence',
                        help='Directory for evidence output')
    args = parser.parse_args()

    # Resolve paths relative to project root
    project_root = Path(__file__).resolve().parent.parent
    functions_json_path = project_root / args.functions_json
    src_dir = project_root / args.src_dir
    evidence_dir = project_root / args.evidence_dir

    print(f"Project root: {project_root}")
    print(f"Functions JSON: {functions_json_path}")
    print(f"Source dir: {src_dir}")
    print(f"Mode: {'DRY RUN' if not args.apply else 'APPLY'}")

    # Load functions.json
    print("\nLoading functions.json...")
    with open(functions_json_path, 'r', encoding='utf-8') as f:
        data = json.load(f)
    funcs = data.get('functions', data if isinstance(data, list) else [])
    print(f"  Total functions: {len(funcs)}")

    # Count class members
    class_members = [f for f in funcs if '::' in f.get('name', '')]
    print(f"  Class members (:: in name): {len(class_members)}")

    # Find all headers
    print("\nScanning headers...")
    headers = glob.glob(str(src_dir / '**' / '*.hpp'), recursive=True)
    print(f"  Found {len(headers)} header files")

    # Build class -> header mapping
    print("\nBuilding class-to-header mapping...")
    class_to_header = build_class_to_header(headers)
    print(f"  Mapped {len(class_to_header)} classes to headers")

    # Build method lookup
    print("Building method lookup...")
    header_class_methods = build_method_map(funcs, class_to_header)

    total_methods = sum(
        len(methods)
        for classes in header_class_methods.values()
        for methods in classes.values()
    )
    headers_with_methods = len(header_class_methods)
    print(f"  {total_methods} methods across {headers_with_methods} headers")

    # Process each header
    print(f"\n{'DRY RUN - no changes will be made' if not args.apply else 'APPLYING changes'}...")
    total_annotated = 0
    files_modified = 0
    files_with_lines = []

    for hpath in sorted(header_class_methods.keys()):
        rel_path = os.path.relpath(hpath, project_root)
        count = annotate_file(hpath, header_class_methods,
                              dry_run=not args.apply, verbose=args.verbose)

        if count > 0:
            total_annotated += count
            files_modified += 1
            files_with_lines.append((rel_path, count))
            if not args.verbose:
                print(f"  {rel_path}: {count} annotations")

    # Summary
    print(f"\n{'='*60}")
    print(f"Summary:")
    print(f"  Files modified: {files_modified}")
    print(f"  Total annotations added: {total_annotated}")
    if not args.apply:
        print(f"  (DRY RUN — re-run with --apply to write changes)")

    # Write evidence
    evidence_dir.mkdir(parents=True, exist_ok=True)
    evidence_path = evidence_dir / 'task-4-annotated-count.txt'
    with open(evidence_path, 'w') as f:
        f.write(f"Task 4: Class Member Function Annotation\n")
        f.write(f"{'='*60}\n")
        f.write(f"Functions JSON: {functions_json_path}\n")
        f.write(f"Total functions: {len(funcs)}\n")
        f.write(f"Class members (:: in name): {len(class_members)}\n")
        f.write(f"Classes with headers: {len(class_to_header)}\n")
        f.write(f"Methods in lookup: {total_methods}\n\n")
        f.write(f"Annotations {'would be' if not args.apply else ''} added: {total_annotated}\n")
        f.write(f"Files {'that would be' if not args.apply else ''} modified: {files_modified}\n\n")
        f.write(f"Per-file breakdown:\n")
        for rel_path, count in sorted(files_with_lines, key=lambda x: -x[1]):
            f.write(f"  {rel_path}: {count}\n")

    print(f"\nEvidence written to: {evidence_path}")


if __name__ == '__main__':
    main()
