#!/usr/bin/env python3
"""Apply hpp annotations from ida_match_results.json.

- HIGH: add // 0xADDR comment to function declaration line
- UNMATCHABLE: add // IDA: UNMATCHED — {reason} comment
- Does NOT delete existing // IDA: 0x annotations
- Does NOT modify menu_globals_gen.cpp
"""

import json
import os
import re

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

match_data = json.load(open(os.path.join(ROOT, 'tools', 'ida_match_results.json'), 'r', encoding='utf-8'))
results = match_data['results']

# Collect all annotations per file
# Structure: {filepath: {line_number: [annotations]}}
file_annotations = {}

for key, v in results.items():
    conf = v['final_confidence']
    if conf not in ('HIGH', 'UNMATCHABLE'):
        continue

    hpp_file = v['hpp_file']
    hpp_line = v['hpp_line']
    
    if hpp_file == 'fundamentals.hpp':
        hpp_path = os.path.join(ROOT, 'src', hpp_file)
    elif hpp_file.startswith('core\\'):
        hpp_path = os.path.join(ROOT, 'src', hpp_file)
    else:
        hpp_path = os.path.join(ROOT, 'src', hpp_file)
    
    # Normalize path
    hpp_path = os.path.normpath(hpp_path)
    
    if not os.path.exists(hpp_path):
        print(f"SKIP (not found): {hpp_file}")
        continue
    
    # Skip menu_globals_gen.cpp
    if 'menu_globals_gen' in hpp_path:
        continue
    
    if conf == 'HIGH':
        annotation = f'// {v["final_ida_addr"]}'
    else:  # UNMATCHABLE
        reasons = v.get('unmatchable_reasons', ['unknown'])
        reason_str = ', '.join(reasons[:3])
        annotation = f'// IDA: UNMATCHED \u2014 {reason_str}'
    
    if hpp_path not in file_annotations:
        file_annotations[hpp_path] = {}
    if hpp_line not in file_annotations[hpp_path]:
        file_annotations[hpp_path][hpp_line] = []
    file_annotations[hpp_path][hpp_line].append(annotation)

print(f"Files to modify: {len(file_annotations)}")
total_annotations = sum(len(lines) for lines in file_annotations.values())
print(f"Total annotations: {total_annotations}")

# Now apply annotations to each file
files_modified = 0
annotations_added = 0
annotations_skipped = 0

for hpp_path, line_annotations in sorted(file_annotations.items()):
    with open(hpp_path, 'r', encoding='utf-8', errors='replace') as f:
        lines = f.readlines()
    
    modified = False
    
    for line_no in sorted(line_annotations.keys(), reverse=True):
        annotations = line_annotations[line_no]
        idx = line_no - 1  # 0-based index
        
        if idx >= len(lines):
            print(f"  SKIP line {line_no} out of range in {hpp_path} ({len(lines)} lines)")
            continue
        
        line = lines[idx]
        
        # Check if line already has a matching annotation
        already_has = False
        for ann in annotations:
            if ann in line:
                already_has = True
                annotations_skipped += 1
                break
        
        if already_has:
            continue
        
        # Check if line already has an IDA address annotation (don't delete)
        # Just append our annotation to the end of the line
        stripped = line.rstrip('\r\n')
        trailing = line[len(stripped):]
        
        # Append annotation as a trailing comment
        # If the line ends with ; or has a // comment, add after semicolon
        # Otherwise, add at end of line
        for ann in annotations:
            if ann not in stripped:
                stripped += ' ' + ann
                annotations_added += 1
        
        lines[idx] = stripped + trailing
        modified = True
    
    if modified:
        with open(hpp_path, 'w', encoding='utf-8', newline='') as f:
            f.writelines(lines)
        files_modified += 1
        print(f"  MODIFIED: {os.path.basename(hpp_path)} ({len(line_annotations)} lines)")

print(f"\nDone. Files modified: {files_modified}")
print(f"Annotations added: {annotations_added}")
print(f"Annotations skipped (already present): {annotations_skipped}")
