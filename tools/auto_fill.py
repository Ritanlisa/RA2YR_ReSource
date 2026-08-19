#!/usr/bin/env python3
"""
auto_fill.py — Raw auto-fill script for RA2YR ReSource.

Reads tools/fill_map.json, replaces EVERY stub function body in src/**/*.cpp
with the RAW decompiled code from fill_map.json (unchanged, no preprocessing).
Includes ASM block from fill_map.json.

NO PRE-PROCESSING. NO COMPILE FIXES. NO TYPE SUBSTITUTIONS. RAW BODIES ONLY.

Usage:
    python tools/auto_fill.py
"""

import json
import os
import sys
import re

BASE_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def _find_in_combined(combined, line_map, char):
    """Find char in combined string, map back to (line_idx, col)."""
    pos = combined.find(char)
    if pos == -1:
        return -1, -1, -1
    # Map char position to line and column
    line_pos = 0
    for li, start_col in line_map:
        line_end = line_pos + len(combined.split('\n')[len(line_map) - 1 - (len(line_map) - 1 - (li - line_map[0][0]))])
        # Simpler: linear scan
        pass

    # Actually, compute cumulative lengths
    cumul = 0
    for idx, (li, sc) in enumerate(line_map):
        line_text = combined.split('\n')[idx]
        line_len = len(line_text) + 1  # +1 for \n
        if cumul + line_len > pos:
            return li, pos - cumul, pos
        cumul += line_len
    return -1, -1, -1


def _map_char_to_line_col(text, lines_list, line_map, char_pos):
    """Map a character position in 'text' back to (line_idx, col)."""
    cumul = 0
    for li, sc in line_map:
        line_text = lines_list[li]
        line_len = len(line_text) + 1  # +1 for \n
        if cumul + line_len > char_pos:
            col = char_pos - cumul
            if col > len(line_text):
                col = len(line_text)
            return li, col
        cumul += line_len
    # Fallback: last line
    return line_map[-1][0], len(lines_list[line_map[-1][0]])


def find_function_brace_range(lines, start_line_0):
    """Find the function's opening brace and closing brace position.

    Strategy:
    1. Build a combined string from start_line_0 forward
    2. Build a neutralized version (comments + strings blanked) for accurate scanning
    3. Find the parameter list: first '(' then matching ')'
    4. Find the first '{' AFTER the parameter list's ')'
    5. That '{' is the function body opening
    6. Find the matching '}' using neutralized text

    Returns (open_line, open_col, close_line, close_col) or None.
    """
    MAX_SCAN = min(start_line_0 + 500, len(lines))

    # Build combined text with line info
    line_map = [(i, 0) for i in range(start_line_0, MAX_SCAN)]
    combined = ''
    for i in range(start_line_0, MAX_SCAN):
        combined += lines[i] + '\n'

    # Build neutralized version: comments and strings replaced with spaces
    # This preserves character positions while hiding non-code parens/braces
    clean = _neutralize_comments_and_strings(combined)

    # Find first '(' — parameter list start (in neutralized text)
    paren_start = clean.find('(')
    if paren_start == -1:
        return None

    # Find matching ')' for parameter list (in neutralized text)
    depth = 1
    paren_end = -1
    for i in range(paren_start + 1, len(clean)):
        ch = clean[i]
        if ch == '(':
            depth += 1
        elif ch == ')':
            depth -= 1
            if depth == 0:
                paren_end = i
                break

    if paren_end == -1:
        return None

    # Find first '{' after ')' (in neutralized text)
    brace_start = clean.find('{', paren_end)
    if brace_start == -1:
        return None

    # Map brace_start back to (line, col) using original combined text
    open_line, open_col = _map_char_to_line_col(combined, lines, line_map, brace_start)

    # Find matching '}' for the function body (in neutralized text)
    depth = 1
    for i in range(brace_start + 1, len(clean)):
        ch = clean[i]
        if ch == '{':
            depth += 1
        elif ch == '}':
            depth -= 1
            if depth == 0:
                close_line, close_col = _map_char_to_line_col(combined, lines, line_map, i)
                return (open_line, open_col, close_line, close_col)

    return None


def _neutralize_comments_and_strings(text):
    """Replace // comments and string literals with spaces for accurate brace counting."""
    result = []
    i = 0
    while i < len(text):
        if i + 1 < len(text) and text[i:i+2] == '//':
            # Single-line comment: replace with spaces until newline
            while i < len(text) and text[i] != '\n':
                result.append(' ')
                i += 1
            continue
        elif text[i] == '"':
            # String literal
            result.append(' ')
            i += 1
            while i < len(text) and text[i] != '"':
                if text[i] == '\\':
                    result.append(' ')
                    i += 1
                result.append(' ')
                i += 1
            if i < len(text):
                result.append(' ')
                i += 1
            continue
        elif text[i] == "'":
            # Char literal
            result.append(' ')
            i += 1
            while i < len(text) and text[i] != "'":
                if text[i] == '\\':
                    result.append(' ')
                    i += 1
                result.append(' ')
                i += 1
            if i < len(text):
                result.append(' ')
                i += 1
            continue
        elif i + 1 < len(text) and text[i:i+2] == '/*':
            # Multi-line comment
            result.append(' ')
            result.append(' ')
            i += 2
            while i + 1 < len(text) and text[i:i+2] != '*/':
                result.append(' ' if text[i] != '\n' else '\n')
                i += 1
            if i + 1 < len(text):
                result.append(' ')
                result.append(' ')
                i += 2
            continue
        else:
            result.append(text[i])
            i += 1
    return ''.join(result)


def build_replacement_body(decompiled_body, asm_body, address):
    """Build the raw replacement function body.

    The format is:
    {
    // [IDA decompile]
    <raw decompiled body exactly as in fill_map.json>

    /* ASM:
    <raw asm exactly as in fill_map.json>
    */
    }
    """
    parts = []
    parts.append('{')
    parts.append('// [IDA decompile]')
    parts.append(decompiled_body)
    parts.append('')
    parts.append('/* ASM:')
    parts.append(asm_body)
    parts.append('*/')
    parts.append('}')
    return '\n'.join(parts)


def main():
    fill_map_path = os.path.join(BASE_DIR, 'tools', 'fill_map.json')

    print(f"Loading {fill_map_path}...")
    with open(fill_map_path, 'r', encoding='utf-8') as f:
        fill_map = json.load(f)

    total_entries = sum(len(v) for v in fill_map.values())
    total_files = len(fill_map)
    print(f"Loaded {total_entries} entries across {total_files} files.")

    processed_count = 0
    error_count = 0

    for file_path, entries in fill_map.items():
        full_path = os.path.join(BASE_DIR, file_path)
        if not os.path.exists(full_path):
            print(f"  SKIP: File not found: {full_path}")
            error_count += len(entries)
            continue

        with open(full_path, 'r', encoding='utf-8') as f:
            original_content = f.read()

        lines = original_content.split('\n')

        # Sort entries by line number, process BOTTOM-UP to preserve line numbers
        sorted_entries = sorted(
            entries.items(),
            key=lambda x: int(x[0].split('_')[1]),
            reverse=True
        )

        file_processed = 0
        file_errors = 0

        for entry_key, entry_data in sorted_entries:
            line_num = int(entry_key.split('_')[1])
            line_0 = line_num - 1  # 0-indexed

            range_info = find_function_brace_range(lines, line_0)
            if range_info is None:
                print(f"  WARN: No function body at {file_path}:{line_num} ({entry_data.get('func_name','?')})")
                file_errors += 1
                continue

            open_l, open_c, close_l, close_c = range_info

            decompiled_body = entry_data.get('decompiled_body', '')
            asm_body = entry_data.get('asm_body', '')
            address = entry_data.get('address', '0x0')

            if not decompiled_body:
                print(f"  WARN: No decompiled_body for {file_path}:{line_num}")
                file_errors += 1
                continue

            replacement = build_replacement_body(decompiled_body, asm_body, address)

            # Now replace the old body with the new one
            # We replace from (open_l, open_c) to (close_l, close_c) inclusive
            if open_l == close_l:
                # Single-line function body
                old_line = lines[open_l]
                # Everything before '{', then replacement, then everything after '}'
                before = old_line[:open_c]
                after = old_line[close_c + 1:]
                lines[open_l] = before + replacement + after
            else:
                # Multi-line function body
                # Part before opening brace on first line
                before = lines[open_l][:open_c]
                # Part after closing brace on last line
                after = lines[close_l][close_c + 1:]

                new_lines = [before + replacement + after]
                # Replace lines open_l through close_l with the single new line
                lines = lines[:open_l] + new_lines + lines[close_l + 1:]

            file_processed += 1

        # Write back the file
        new_content = '\n'.join(lines)
        with open(full_path, 'w', encoding='utf-8') as f:
            f.write(new_content)

        status = f"{file_processed} ok"
        if file_errors:
            status += f", {file_errors} err"
        print(f"  {file_path}: {status}")
        processed_count += file_processed
        error_count += file_errors

    print(f"\nDone. Processed {processed_count} entries, {error_count} errors.")
    return 0 if error_count == 0 else 1


if __name__ == '__main__':
    sys.exit(main())
