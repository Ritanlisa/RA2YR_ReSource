#!/usr/bin/env python3
"""Apply ONLY safe fixes to hpp files:
  1. sub_* → real IDA name (always safe)
  2. C-style → ClassName::Method in _funcs.hpp files (standalone stubs)
"""

import re, sys
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT))

def parse_audit():
    text = (ROOT / ".omo" / "evidence" / "name-mismatches-v3.txt").read_text(encoding='utf-8')
    entries = re.split(r'\n  0X', text)
    parsed = []
    for entry in entries[1:]:
        entry = "0X" + entry
        am = re.search(r'(0X[0-9A-F]+):', entry)
        im = re.search(r'ida_name:\s*(.*)', entry)
        hm = re.search(r'hpp_name:\s*(.*)', entry)
        if not am or not im or not hm:
            continue
        parsed.append((am.group(1), im.group(1).strip(), hm.group(1).strip()))
    return parsed

def is_funcs_stub(fname):
    return '_funcs.hpp' in fname

def load_hpp_annots():
    from tools.audit_consistency import extract_hpp_annotations
    return extract_hpp_annotations(["src", "include/gamemd"])

def main():
    mismatches = parse_audit()
    hpp_annots = load_hpp_annots()
    
    fixes_by_file = defaultdict(list)
    
    for addr, ida_name, hpp_name in mismatches:
        ann = hpp_annots.get(addr)
        if not ann:
            continue
        
        for fspec in ann.get('files', []):
            fname, line_no_str = fspec.rsplit(':', 1)
            line_no = int(line_no_str)
            fpath = ROOT / fname
            
            try:
                with open(fpath, encoding='utf-8', errors='replace') as f:
                    lines = f.readlines()
            except:
                continue
            
            if line_no > len(lines):
                continue
            
            actual_line = lines[line_no - 1].rstrip('\n')
            
            if hpp_name not in actual_line:
                continue
            
            # RULE 1: sub_* → real name (ALWAYS safe anywhere)
            if 'sub_' in hpp_name:
                fixes_by_file[fname].append((line_no, hpp_name, ida_name, actual_line))
                continue
            
            # RULE 2: C-style → ClassName::Method in _funcs.hpp only
            if is_funcs_stub(fname) and '::' not in hpp_name and '::' in ida_name:
                fixes_by_file[fname].append((line_no, hpp_name, ida_name, actual_line))
                continue
    
    total = 0
    files_modified = 0
    
    for fname, file_fixes in sorted(fixes_by_file.items()):
        fpath = ROOT / fname
        with open(fpath, encoding='utf-8', errors='replace') as f:
            content = f.read()
        
        # Sort by line_no descending
        file_fixes.sort(key=lambda x: x[0], reverse=True)
        modified = False
        
        for line_no, old_name, new_name, original_line in file_fixes:
            new_line = original_line.replace(old_name, new_name, 1)
            if new_line != original_line:
                if original_line in content:
                    content = content.replace(original_line, new_line)
                    modified = True
                    total += 1
        
        if modified:
            with open(fpath, 'w', encoding='utf-8') as f:
                f.write(content)
            files_modified += 1
            print(f"  {fname}: {len(file_fixes)} fixes")
    
    print(f"\nApplied {total} fixes in {files_modified} files")

if __name__ == '__main__':
    main()
