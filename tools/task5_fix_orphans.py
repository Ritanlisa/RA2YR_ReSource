#!/usr/bin/env python3
"""Task 5: Fix orphan // 0xADDR annotations in hpp files.
Efficient: scan all hpp once, build addr->file map, categorize by section.
"""

import json
import re
import os
import sys
from pathlib import Path
from collections import defaultdict

PROJECT_ROOT = Path(r'D:\RA2YR_ReSource')
SRC_DIR = PROJECT_ROOT / 'src'

def addr_int(addr_str):
    return int(addr_str.replace('0X', '').replace('0x', ''), 16)

def load_orphans():
    """Load hpp_only list from audit output"""
    # Use cached file if available, otherwise regenerate
    cache_path = PROJECT_ROOT / '.omo' / 'evidence' / 'audit_output.json'
    if cache_path.exists():
        try:
            data = json.loads(cache_path.read_text(encoding='utf-8'))
            orphans = data.get('orphan_addresses', {}).get('hpp_only', [])
            if orphans:
                print(f"Loaded {len(orphans)} orphans from cache")
                return orphans
        except Exception:
            pass
    
    import subprocess
    result = subprocess.run(
        [sys.executable, str(PROJECT_ROOT / 'tools' / 'audit_consistency.py'), '--json'],
        capture_output=True, text=True, cwd=str(PROJECT_ROOT), timeout=120
    )
    output = result.stdout
    json_start = output.find('{')
    json_end = output.rfind('}')
    if json_start == -1 or json_end == -1:
        print("ERROR: Could not find JSON in audit output")
        return []
    json_str = output[json_start:json_end+1]
    try:
        data = json.loads(json_str)
        # cache it
        os.makedirs(cache_path.parent, exist_ok=True)
        cache_path.write_text(json.dumps(data))
        return data.get('orphan_addresses', {}).get('hpp_only', [])
    except json.JSONDecodeError as e:
        print(f"JSON parse error: {e}")
        return []

def scan_hpp_files():
    """Scan all hpp files for // 0xADDR annotations."""
    addr_pattern = re.compile(r'//\s*(0x[0-9A-Fa-f]{6,8})\b')
    addr_map = defaultdict(list)
    hpp_files = list(SRC_DIR.rglob('*.hpp'))
    print(f"Scanning {len(hpp_files)} hpp files...")
    
    for hpp_file in hpp_files:
        try:
            content = hpp_file.read_text(encoding='utf-8', errors='ignore')
            lines = content.split('\n')
            for i, line in enumerate(lines, 1):
                for m in addr_pattern.finditer(line):
                    addr = m.group(1).upper()
                    # Always normalize to 0X + 8 hex digits
                    hex_part = addr[2:]  # strip 0x/0X prefix
                    addr = '0X' + hex_part.zfill(8)
                    rel_path = str(hpp_file.relative_to(PROJECT_ROOT))
                    addr_map[addr].append({
                        'file': rel_path,
                        'line': i,
                        'context': line.strip()
                    })
        except Exception:
            pass
    
    print(f"Found {len(addr_map)} unique addresses in hpp files")
    return addr_map

def main():
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument('--dry-run', action='store_true', help='Preview only')
    parser.add_argument('--apply', action='store_true', help='Apply data-section fixes')
    parser.add_argument('--code-only', action='store_true', help='Only show code-section report')
    args = parser.parse_args()
    
    orphans = load_orphans()
    if not orphans:
        print("ERROR: No orphans found")
        return 1
    
    orphan_set = set(orphans)
    print(f"Loaded {len(orphans)} orphan addresses from audit")
    
    addr_map = scan_hpp_files()
    
    # Match
    matched = {}
    unmatched = []
    for addr in orphan_set:
        if addr in addr_map:
            matched[addr] = addr_map[addr]
        else:
            unmatched.append(addr)
    
    print(f"Matched: {len(matched)}, Unmatched: {len(unmatched)}")
    
    # Categorize
    code_sec = {}
    rdata_sec = {}
    data_sec = {}
    
    for addr, locs in matched.items():
        a = addr_int(addr)
        if a < 0x7EA000:
            code_sec[addr] = locs
        elif a < 0x812000:
            rdata_sec[addr] = locs
        else:
            data_sec[addr] = locs
    
    print(f".text  (code):   {len(code_sec)}")
    print(f".rdata (rodata): {len(rdata_sec)}")
    print(f".data  (data):   {len(data_sec)}")
    
    # Save report
    report = {
        'code_section': {a: [(l['file'], l['line'], l['context']) for l in locs] for a, locs in code_sec.items()},
        'rdata_section': {a: [(l['file'], l['line'], l['context']) for l in locs] for a, locs in rdata_sec.items()},
        'data_section': {a: [(l['file'], l['line'], l['context']) for l in locs] for a, locs in data_sec.items()},
        'unmatched': unmatched,
        'summary': {'code': len(code_sec), 'rdata': len(rdata_sec), 'data': len(data_sec), 'unmatched': len(unmatched)}
    }
    
    os.makedirs(PROJECT_ROOT / '.omo' / 'evidence', exist_ok=True)
    with open(PROJECT_ROOT / '.omo' / 'evidence' / 'task5-orphans-categorized.json', 'w') as f:
        json.dump(report, f, indent=2)
    print(f"Report saved to .omo/evidence/task5-orphans-categorized.json")
    
    # Phase 2: Fix data-section + rdata-section annotations
    all_data = {**data_sec, **rdata_sec}
    
    if args.apply or args.dry_run:
        fixes = {}
        for addr, locs in all_data.items():
            for loc in locs:
                old = loc['context']
                if 'data:' not in old and 'area' not in old.lower():
                    new = re.sub(r'//\s*(0x[0-9A-Fa-f]{6,8})', r'// data: \1', old, count=1)
                    if new != old:
                        fixes.setdefault(loc['file'], []).append((loc['line'], old, new))
        
        print(f"\nData fixes: {sum(len(v) for v in fixes.values())} lines in {len(fixes)} files")
        
        if args.dry_run:
            for fp in sorted(fixes)[:10]:
                print(f"  {fp}: {len(fixes[fp])} lines")
            if len(fixes) > 10:
                print(f"  ... and {len(fixes)-10} more files")
        
        if args.apply:
            for fp, changes in fixes.items():
                abs_p = PROJECT_ROOT / fp
                content = abs_p.read_text(encoding='utf-8', errors='ignore')
                lines = content.split('\n')
                changes.sort(key=lambda x: x[0], reverse=True)
                for ln, old, new in changes:
                    idx = ln - 1
                    if idx < len(lines) and old in lines[idx]:
                        lines[idx] = lines[idx].replace(old, new, 1)
                abs_p.write_text('\n'.join(lines), encoding='utf-8')
                print(f"  Fixed {len(changes)} lines in {fp}")
            
            with open(PROJECT_ROOT / '.omo' / 'evidence' / 'task5-data-fixes-applied.json', 'w') as f:
                json.dump({k: [(l, o, n) for l, o, n in v] for k, v in fixes.items()}, f, indent=2)
    
    # Code section report
    if code_sec:
        fc = defaultdict(int)
        for addr, locs in code_sec.items():
            for loc in locs:
                fc[loc['file']] += 1
        print(f"\nCode orphans ({len(code_sec)}) by file:")
        for f, c in sorted(fc.items(), key=lambda x: -x[1]):
            print(f"  {c:3d}  {f}")
        
        code_addrs = sorted(code_sec.keys(), key=addr_int)
        with open(PROJECT_ROOT / '.omo' / 'evidence' / 'task5-code-section-addresses.txt', 'w') as f:
            for addr in code_addrs:
                files = ', '.join(set(l['file'] for l in code_sec[addr]))
                f.write(f"{addr}  # {files}\n")
        print(f"Saved {len(code_addrs)} code addresses to .omo/evidence/task5-code-section-addresses.txt")
    
    return 0

if __name__ == '__main__':
    sys.exit(main())
