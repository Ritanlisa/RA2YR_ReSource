#!/usr/bin/env python3
"""
Move standalone // 0xADDR annotations in globals_*.hpp from before extern
declarations to inline after the semicolon. Strip metadata brackets.

Usage:
  python tools/move_global_annotations.py --dry-run   # preview
  python tools/move_global_annotations.py              # apply
"""

import argparse
import glob
import os
import re
import sys


def extract_addr(text: str) -> str | None:
    """Extract uppercase 0xADDR from a comment line. Returns None if not a standalone annotation."""
    m = re.match(r'^\s*//\s+(0x[0-9A-Fa-f]{5,6})\b', text.strip())
    if m:
        # Preserve lowercase '0x', uppercase hex digits only
        raw = m.group(1)
        return raw[:2] + raw[2:].upper()
    return None


def is_section_header(text: str) -> bool:
    """Check if a comment line is a section header (contains ==== or similar)."""
    stripped = text.strip()
    if not stripped.startswith('//'):
        return False
    # Section headers have repeated punctuation like ====, ----
    return bool(re.search(r'={3,}', stripped)) or bool(re.search(r'-{10,}', stripped))


def is_standalone_annotation(line: str) -> bool:
    """Line is only a comment containing 0xADDR annotation (no extern on same line)."""
    stripped = line.strip()
    if not stripped.startswith('//'):
        return False
    if is_section_header(stripped):
        return False
    # Skip range annotations like "// 0xADDR-0xADDR: description"
    if re.search(r'0x[0-9A-Fa-f]{5,6}\s*-\s*0x[0-9A-Fa-f]{5,6}', stripped):
        return False
    return extract_addr(stripped) is not None


def strip_inline_metadata(line: str) -> tuple[str, bool]:
    """
    Strip metadata brackets and patterns from an inline // 0xADDR comment.
    Returns (cleaned_line, changed).
    """
    original = line
    
    # Must have both 'extern' and '// 0x' on the same line
    if 'extern' not in line or '// 0x' not in line:
        return line, False
    
    # Find the comment part
    comment_pos = line.find('//')
    if comment_pos < 0:
        return line, False
    
    before = line[:comment_pos]
    comment = line[comment_pos:]
    
    # Only process if comment contains a hex address
    if not re.search(r'//\s*0x[0-9A-Fa-f]{5,6}\b', comment):
        return line, False
    
    # Strip bracket metadata: [confidence: ...], [inferred_strong, ...], [ida_direct], [purity], [size]
    comment = re.sub(r'\s*\[(?:confidence|inferred_strong|ida_direct|purity|size)[^\]]*\]', '', comment)
    
    # Strip ", size X, .data" patterns
    comment = re.sub(r',\s*size\s+\d+\s*,\s*\.data', '', comment)
    
    # Strip " (IDA: ...)" patterns  
    comment = re.sub(r'\s*\(IDA:\s*[^)]*\)', '', comment)
    
    # Collapse multiple spaces
    comment = re.sub(r'  +', ' ', comment)
    
    # Ensure exactly one space before //
    before = before.rstrip()
    
    result = before + ' ' + comment.lstrip()
    
    return result, result != original


def merge_standalone(anno_line: str, extern_line: str) -> str:
    """
    Merge a standalone annotation line with the following extern line.
    Extracts just the address, appends as inline comment after semicolon.
    """
    addr = extract_addr(anno_line)
    if not addr:
        return extern_line  # fallback
    
    # Find the semicolon
    sc_pos = extern_line.rfind(';')
    if sc_pos < 0:
        # No semicolon? Unusual. Append comment at end.
        return extern_line.rstrip() + f' // {addr}\n'
    
    before_sc = extern_line[:sc_pos + 1]
    after_sc = extern_line[sc_pos + 1:]
    
    # If there's already a // comment, strip it
    existing = re.search(r'//.*$', after_sc)
    if existing:
        after_sc = after_sc[:existing.start()]
    
    # Keep trailing whitespace minimal - just one space before //
    return before_sc.rstrip() + f' // {addr}\n'


def process_file(filepath: str, dry_run: bool = False) -> int:
    """Process one globals_*.hpp file. Returns number of changes made."""
    with open(filepath, 'r', encoding='utf-8') as f:
        lines = f.readlines()
    
    new_lines = []
    i = 0
    changes = 0
    
    while i < len(lines):
        line = lines[i]
        stripped = line.strip()
        
        # Case 1a: Standalone annotation → (optional blank lines) → extern declaration
        ext_idx = i + 1
        while ext_idx < len(lines) and lines[ext_idx].strip() == '':
            ext_idx += 1
        if (is_standalone_annotation(line) 
            and ext_idx < len(lines)
            and lines[ext_idx].strip().startswith('extern ')):
            
            addr = extract_addr(line)
            merged = merge_standalone(line, lines[ext_idx])
            new_lines.append(merged)
            changes += 1
            i = ext_idx + 1
            continue
        
        # Case 1b: Range annotation (// 0xADDR-0xADDR...: desc) → (blank) → extern
        if (stripped.startswith('//')
            and not is_section_header(stripped)
            and re.search(r'//\s*0x[0-9A-Fa-f]{5,6}\s*-\s*0x[0-9A-Fa-f]{5,6}', stripped)
            and ext_idx < len(lines)
            and lines[ext_idx].strip().startswith('extern ')):
            m = re.search(r'0x([0-9A-Fa-f]{5,6})', stripped)
            if m:
                addr = '0x' + m.group(1).upper()
                merged = merge_standalone(line, lines[ext_idx])
                new_lines.append(merged)
                changes += 1
                i = ext_idx + 1
                continue
        
        # Case 2: Inline annotation with metadata to strip
        cleaned, was_changed = strip_inline_metadata(line)
        if was_changed:
            new_lines.append(cleaned)
            changes += 1
            i += 1
            continue
        
        # Case 3: No change needed
        new_lines.append(line)
        i += 1
    
    if changes > 0:
        if not dry_run:
            with open(filepath, 'w', encoding='utf-8') as f:
                f.writelines(new_lines)
        rel = os.path.relpath(filepath, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
        print(f"{'[DRY RUN] ' if dry_run else ''}{rel}: {changes} change(s)")
    
    return changes


def main():
    parser = argparse.ArgumentParser(
        description='Move standalone // 0xADDR annotations in globals_*.hpp to inline, strip metadata'
    )
    parser.add_argument('--dry-run', action='store_true', 
                        help='Preview changes without applying')
    args = parser.parse_args()
    
    # Project root is parent of tools/ directory
    script_dir = os.path.dirname(os.path.abspath(__file__))
    project_root = os.path.dirname(script_dir)
    
    pattern = os.path.join(project_root, 'src', '**', 'globals_*.hpp')
    files = sorted(glob.glob(pattern, recursive=True))
    
    if not files:
        print("No globals_*.hpp files found.", file=sys.stderr)
        sys.exit(1)
    
    print(f"Found {len(files)} file(s):")
    for f in files:
        print(f"  {os.path.relpath(f, project_root)}")
    print()
    
    total_changes = 0
    for filepath in files:
        total_changes += process_file(filepath, dry_run=args.dry_run)
    
    action = "would be" if args.dry_run else "were"
    print(f"\nTotal: {total_changes} change(s) {action} made across {len(files)} file(s).")


if __name__ == '__main__':
    main()
