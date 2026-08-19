#!/usr/bin/env python3
"""
Batch-replace ALL NOT_FOUND and UNMATCHED annotations in hpp files.
Both are INLINE annotations at the end of declaration lines.

Pattern:
  OLD: declaration; // IDA: NOT_FOUND
  NEW: // descriptive text\n    declaration;

  OLD: declaration; // IDA: UNMATCHED - tags
  NEW: // descriptive text\n    declaration;
"""

import json
import os
import re
import sys
from collections import defaultdict

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

def load_map(path):
    with open(path, encoding='utf-8') as f:
        return json.load(f)

def parse_key(key):
    """Parse 'src\\file.hpp:NNN' into (normalized_path, line_number)."""
    last_colon = key.rfind(':')
    filepath = key[:last_colon]
    line_num = int(key[last_colon + 1:])
    filepath = filepath.replace('\\\\', os.sep).replace('\\', os.sep)
    return filepath, line_num

def strip_annotation(line, anno_type):
    """Remove the IDA annotation suffix from a line, return declaration only."""
    if anno_type == 'notfound':
        pattern = r'\s*//\s*IDA\s*:\s*NOT_FOUND\s*$'
    else:
        pattern = r'\s*//\s*IDA\s*:\s*UNMATCHED\s.*$'
    return re.sub(pattern, '', line.rstrip('\n\r'))

def apply():
    nf = load_map(os.path.join(PROJECT_ROOT, '.omo', 'notfound_map.json'))
    um = load_map(os.path.join(PROJECT_ROOT, '.omo', 'unmatched_map.json'))

    # Group by file: {full_path: [(line_num, type, new_text), ...]}
    file_ops = defaultdict(list)

    for key, entry in nf.items():
        fp, ln = parse_key(key)
        full = os.path.join(PROJECT_ROOT, fp)
        file_ops[full].append((ln, 'notfound', entry['new']))

    for key, entry in um.items():
        fp, ln = parse_key(key)
        full = os.path.join(PROJECT_ROOT, fp)
        file_ops[full].append((ln, 'unmatched', entry['new']))

    stats = {'nf': 0, 'um': 0, 'files': 0, 'miss': 0, 'err': 0}

    for filepath, ops in sorted(file_ops.items()):
        if not os.path.exists(filepath):
            print(f"MISSING FILE: {filepath}")
            stats['err'] += 1
            continue

        try:
            with open(filepath, 'r', encoding='utf-8') as f:
                lines = f.readlines()
        except Exception as e:
            print(f"READ ERROR {filepath}: {e}")
            stats['err'] += 1
            continue

        # Sort descending to avoid line number drift from insertions above
        ops.sort(key=lambda x: x[0], reverse=True)

        nf_count = 0
        um_count = 0
        file_modified = False

        for line_num, op_type, new_text in ops:
            idx = line_num - 1
            if idx < 0 or idx >= len(lines):
                print(f"  LINE OUT OF RANGE {filepath}:{line_num}")
                stats['miss'] += 1
                continue

            current = lines[idx]

            if op_type == 'notfound':
                if 'NOT_FOUND' not in current:
                    print(f"  NOT_FOUND MISSING {filepath}:{line_num}: [{current.strip()[:80]}]")
                    stats['miss'] += 1
                    continue
                decl = strip_annotation(current, 'notfound')
            else:
                if 'UNMATCHED' not in current:
                    print(f"  UNMATCHED MISSING {filepath}:{line_num}: [{current.strip()[:80]}]")
                    stats['miss'] += 1
                    continue
                decl = strip_annotation(current, 'unmatched')

            # 1 line -> 2 lines: new comment + cleaned declaration
            # Preserve indentation from original declaration line
            indent = ''
            for ch in decl:
                if ch in (' ', '\t'):
                    indent += ch
                else:
                    break
            lines[idx:idx + 1] = [indent + new_text.lstrip() + '\n', decl + '\n']

            if op_type == 'notfound':
                nf_count += 1
            else:
                um_count += 1
            file_modified = True

        if file_modified:
            try:
                with open(filepath, 'w', encoding='utf-8') as f:
                    f.writelines(lines)
                stats['nf'] += nf_count
                stats['um'] += um_count
                stats['files'] += 1
                print(f"OK {filepath}: {nf_count} NOT_FOUND + {um_count} UNMATCHED")
            except Exception as e:
                print(f"WRITE ERROR {filepath}: {e}")
                stats['err'] += 1

    print(f"\n=== Summary ===")
    print(f"NOT_FOUND replaced: {stats['nf']}")
    print(f"UNMATCHED replaced: {stats['um']}")
    print(f"Files modified:     {stats['files']}")
    print(f"Lines missed:       {stats['miss']}")
    print(f"Errors:             {stats['err']}")
    return stats

if __name__ == '__main__':
    os.chdir(PROJECT_ROOT)
    st = apply()
    if st['err'] > 0 or st['miss'] > 0:
        sys.exit(1)
