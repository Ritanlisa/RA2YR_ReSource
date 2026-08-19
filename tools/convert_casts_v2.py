#!/usr/bin/env python3
"""
convert_casts_v2.py — Whole-file C++ cast to C-style converter.
Handles multi-line casts and nested expressions.
"""
import re, sys, os

# Pattern to find the start of a cast: cast_kw<type>(
# Type must not contain nested <> (template types handled separately)
CAST_START = re.compile(r'\b(static_cast|reinterpret_cast|dynamic_cast)\s*<\s*([^<>]+?)\s*>\s*\(')

def convert_file_content(content: str) -> str:
    """Convert all C++ casts in file content. Handles multi-line."""
    chars = list(content)
    offset = 0  # current search position
    
    while True:
        # Find next cast starting from offset
        m = CAST_START.search(''.join(chars), offset)
        if not m:
            break
        
        cast_kw = m.group(1)
        type_str = m.group(2).strip()
        paren_start = m.end() - 1  # position of '('
        
        # Find matching ')' — across lines
        depth = 1
        i = paren_start + 1
        while i < len(chars) and depth > 0:
            if chars[i] == '(':
                depth += 1
            elif chars[i] == ')':
                depth -= 1
            i += 1
        
        if depth != 0:
            # Couldn't find matching paren — skip this cast
            offset = m.end()
            continue
        
        close_paren = i - 1
        expr_chars = chars[paren_start + 1 : close_paren]
        expr = ''.join(expr_chars).strip()
        
        # Build replacement: (Type)(expr)
        replacement = f'({type_str})({expr})'
        
        # Replace in chars list: from m.start() to close_paren inclusive
        chars[m.start() : close_paren + 1] = list(replacement)
        
        # Reset to start of replacement to catch nested casts
        offset = m.start()
    
    return ''.join(chars)


def convert_file(filepath: str) -> int:
    with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
        original = f.read()
    
    # Count original casts
    orig_count = len(CAST_START.findall(original))
    if orig_count == 0:
        return 0
    
    modified = convert_file_content(original)
    
    # Count remaining casts
    new_count = len(CAST_START.findall(modified))
    changed = orig_count - new_count
    
    if changed > 0:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(modified)
    
    return changed


def main():
    if len(sys.argv) < 2:
        print("Usage: python convert_casts_v2.py <dir_or_file> [...]")
        sys.exit(1)
    
    total = 0
    files_changed = 0
    
    for path in sys.argv[1:]:
        if os.path.isfile(path) and path.endswith('.cpp'):
            c = convert_file(path)
            if c > 0: total += c; files_changed += 1
            print(f"  {os.path.basename(path)}: {c} casts")
        elif os.path.isdir(path):
            for root, dirs, filenames in os.walk(path):
                dirs[:] = [dn for dn in dirs if dn != '_generated']
                for fn in filenames:
                    if fn.endswith('.cpp'):
                        c = convert_file(os.path.join(root, fn))
                        if c > 0: total += c; files_changed += 1
                        print(f"  {os.path.relpath(os.path.join(root, fn))}: {c} casts")
    
    print(f"\nDone: {total} casts in {files_changed} files")

if __name__ == '__main__':
    main()
