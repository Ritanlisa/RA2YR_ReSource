#!/usr/bin/env python3
"""Reset translated field in functions.json to only truly translated functions.

v2: Fixed function body extraction to be more robust.
"""

import json
import re
import glob
import os

WORKDIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

def load_json(path):
    with open(path, encoding='utf-8') as f:
        return json.load(f)

def save_json(path, data):
    with open(path, 'w', encoding='utf-8') as f:
        json.dump(data, f, indent=2, ensure_ascii=False)


# ─── Stub detection ───

def is_stub_body(body_text):
    # Check for stub markers in original text (including comments)
    if 'stub' in body_text.lower() and ('// stub' in body_text.lower() or '/* stub' in body_text.lower() or '(stub' in body_text.lower()):
        return True
    
    no_comments = re.sub(r'//.*?$', '', body_text, flags=re.MULTILINE)
    no_comments = re.sub(r'/\*.*?\*/', '', no_comments, flags=re.DOTALL)
    
    lines = [l.strip() for l in no_comments.split('\n')]
    lines = [l for l in lines if l and l not in ('{', '}', 'return;')]
    
    if len(lines) == 0:
        return True
    
    if len(lines) == 1:
        only = lines[0]
        if re.match(r'^return\s+(0|false|nullptr|NULL|true)\s*;\s*$', only):
            return True
        if re.match(r'^return\s*;\s*$', only):
            return True
    
    if len(lines) <= 3:
        meaningful = [l for l in lines 
                      if not re.match(r'^return\s+(0|false|nullptr|NULL|true)\s*;\s*$', l)
                      and not re.match(r'^return\s*;\s*$', l)
                      and not re.match(r'^\(\s*void\s*\)\s*\w+\s*;\s*$', l)]
        if len(meaningful) == 0:
            return True
    
    if 'TODO' in no_comments or 'STUB' in no_comments.upper():
        return True
    
    return False


def extract_body_from_line_index(lines, brace_line_idx):
    depth = 0
    body_lines = []
    started = False
    
    for i in range(brace_line_idx, min(brace_line_idx + 500, len(lines))):
        line = lines[i]
        
        if not started:
            brace_pos = line.find('{')
            if brace_pos >= 0:
                started = True
                body_lines.append(line[brace_pos:])
                depth += line[brace_pos:].count('{') - line[brace_pos:].count('}')
            else:
                continue
        else:
            body_lines.append(line)
            depth += line.count('{') - line.count('}')
        
        if started and depth == 0:
            break
    
    if not started:
        return ''
    
    return '\n'.join(body_lines)


def find_next_function_body(lines, start_idx, max_lookahead=30):
    for i in range(start_idx, min(start_idx + max_lookahead, len(lines))):
        line = lines[i]
        stripped = line.strip()
        
        if stripped.startswith('//') or stripped.startswith('/*') or stripped == '':
            continue
        if stripped.startswith('#') or stripped.startswith('using ') or stripped.startswith('namespace '):
            continue
        
        brace_found = '{' in line
        brace_line = i if brace_found else None
        
        if not brace_found:
            for k in range(i + 1, min(i + 10, len(lines))):
                if '{' in lines[k]:
                    between = ''.join(lines[i:k+1])
                    if re.search(r'\w+\s*\([^)]*\)', between):
                        brace_line = k
                        break
        
        if brace_line is not None:
            body = extract_body_from_line_index(lines, brace_line)
            if body:
                # Search backwards from brace_line for closest function name
                fname = None
                for back_idx in range(brace_line, max(0, brace_line - 10), -1):
                    line_back = lines[back_idx]
                    name_match = re.search(r'(\w+)::(\w+)\s*\(', line_back)
                    if not name_match:
                        name_match = re.search(r'(?:\w+\s+)?(\w+)\s*\(', line_back)
                    if name_match:
                        if name_match.lastindex and name_match.lastindex >= 2:
                            fname = f'{name_match.group(1)}::{name_match.group(2)}'
                        else:
                            fname = name_match.group(1)
                        break
                if not fname:
                    fname = 'unknown'
                return body, fname
    
    return None, None


# ─── Phase A1: REVERSE markers ───

def analyze_reverse_markers():
    cpp_files = glob.glob(os.path.join(WORKDIR, 'src', '**', '*.cpp'), recursive=True)
    translated = {}
    stubs = []
    not_found = []
    
    for fpath in cpp_files:
        fname = os.path.basename(fpath)
        if fname == 'menu_globals_gen.cpp':
            continue
        
        with open(fpath, encoding='utf-8', errors='replace') as f:
            lines = f.readlines()
        
        content = ''.join(lines)
        
        for m in re.finditer(r'REVERSE\(\s*(0x[0-9a-fA-F]+)\s*,\s*"([^"]+)"', content):
            addr = m.group(1).lower()
            desc = m.group(2)
            
            if desc == 'IDA decompilation':
                continue
            
            func_name = desc.split(':')[0].strip()
            rev_line_idx = content[:m.start()].count('\n')
            
            body, detected_name = find_next_function_body(lines, rev_line_idx + 1)
            
            if body is None:
                not_found.append((addr, func_name, fname))
            elif is_stub_body(body):
                stubs.append((addr, func_name, fname))
            else:
                translated[addr] = func_name
    
    if stubs:
        print(f"  [DEBUG] REVERSE stubs ({len(stubs)}):")
        for addr, name, f in stubs[:5]:
            print(f"    {addr} {name} ({f})")
    if not_found:
        print(f"  [DEBUG] REVERSE body not found ({len(not_found)}):")
        for addr, name, f in not_found[:5]:
            print(f"    {addr} {name} ({f})")
    
    return translated


# ─── Phase A2: Structure/ files ───

def analyze_structure_functions():
    structure_dir = os.path.join(WORKDIR, 'src', 'structure')
    structure_files = glob.glob(os.path.join(structure_dir, '*.cpp'))
    translated = {}
    
    for fpath in structure_files:
        fname = os.path.basename(fpath)
        with open(fpath, encoding='utf-8', errors='replace') as f:
            lines = f.readlines()
        
        content = ''.join(lines)
        
        for m in re.finditer(r'//\s*IDA:?\s*(0x[0-9a-fA-F]+)', content):
            addr = m.group(1).lower()
            ann_line_idx = content[:m.start()].count('\n')
            
            body, detected_name = find_next_function_body(lines, ann_line_idx + 1)
            
            if body is None or is_stub_body(body):
                continue
            
            ann_line = lines[ann_line_idx].strip()
            # Various annotation formats
            name_match = re.search(r'--\s*(\w+::\w+)', ann_line)
            if not name_match:
                name_match = re.search(r'\xE2\x80\x94\s*(\w+::\w+)', ann_line)
            if not name_match:
                name_match = re.search(r'(\w+::\w+)', ann_line)
            if not name_match and detected_name != 'unknown':
                name_match = re.match(r'(\w+::\w+)', detected_name)
            
            if name_match:
                translated[addr] = name_match.group(1)
            elif detected_name != 'unknown':
                translated[addr] = detected_name
    
    return translated


# ─── Phase A3: Other files ───

def analyze_other_files(already_covered_addrs):
    exclude_patterns = ['menu_globals_gen.cpp', 'structure/', '_generated/', 'subs']
    
    cpp_files = glob.glob(os.path.join(WORKDIR, 'src', '**', '*.cpp'), recursive=True)
    translated = {}
    
    for fpath in cpp_files:
        relpath = os.path.relpath(fpath, os.path.join(WORKDIR, 'src')).replace('\\', '/')
        if any(pat in relpath for pat in exclude_patterns):
            continue
        
        with open(fpath, encoding='utf-8', errors='replace') as f:
            lines = f.readlines()
        
        content = ''.join(lines)
        
        for m in re.finditer(r'//\s*IDA:?\s*(0x[0-9a-fA-F]+)', content):
            addr = m.group(1).lower()
            if addr in already_covered_addrs:
                continue
            
            ann_line_idx = content[:m.start()].count('\n')
            body, detected_name = find_next_function_body(lines, ann_line_idx + 1)
            
            if body is None or is_stub_body(body):
                continue
            
            ann_line = lines[ann_line_idx].strip()
            name_match = re.search(r'(\w+::\w+)', ann_line)
            if name_match:
                translated[addr] = name_match.group(1)
            elif detected_name != 'unknown':
                translated[addr] = detected_name
    
    return translated


# ─── Main ───

def main():
    print("=" * 60)
    print("Reset translated field in functions.json v2")
    print("=" * 60)
    
    print("\n[1] Loading data...")
    funcs_data = load_json(os.path.join(WORKDIR, 'injectFunctionTest', 'functions.json'))
    functions = funcs_data['functions']
    crt_data = load_json(os.path.join(WORKDIR, 'tools', 'fr_crt_exclusions.json'))
    crt_addrs = set(addr.lower() for addr in crt_data['excluded_addresses'])
    
    addr_to_func = {}
    name_to_func = {}
    for f in functions:
        addr = f['address'].lower()
        addr_to_func[addr] = f
        name_to_func[f['name']] = f
    
    print(f"  {len(functions)} functions, {len(crt_addrs)} CRT exclusions")
    
    print("\n[2] Phase A1: REVERSE markers...")
    rev_translated = analyze_reverse_markers()
    print(f"  REVERSE with real impl: {len(rev_translated)}")
    
    print("\n[3] Phase A2: Structure/ files...")
    struct_translated = analyze_structure_functions()
    print(f"  Structure real impl: {len(struct_translated)}")
    
    print("\n[4] Phase A3: Other files...")
    already = set(rev_translated.keys()) | set(struct_translated.keys())
    other_translated = analyze_other_files(already)
    print(f"  Other real impl: {len(other_translated)}")
    
    all_translated = {}
    all_translated.update(rev_translated)
    all_translated.update(struct_translated)
    all_translated.update(other_translated)
    
    translated_addrs = set(all_translated.keys())
    translated_names = set(all_translated.values())
    
    print(f"\n  Total unique translated addresses: {len(translated_addrs)}")
    
    name_matched = 0
    for f in functions:
        if f['name'] in translated_names and f['address'].lower() not in translated_addrs:
            translated_addrs.add(f['address'].lower())
            name_matched += 1
    if name_matched:
        print(f"  Name-matched: {name_matched}")
    
    print(f"\n[5] Phase B: Updating functions.json...")
    
    updated = 0
    crt_count = 0
    stats_true = 0
    stats_false = 0
    
    for f in functions:
        addr = f['address'].lower()
        name = f['name']
        
        if addr in crt_addrs:
            if f['hook'].get('translated'):
                f['hook']['translated'] = False
                updated += 1
            crt_count += 1
            stats_false += 1
        elif addr in translated_addrs or name in translated_names:
            if not f['hook'].get('translated'):
                f['hook']['translated'] = True
                updated += 1
            stats_true += 1
        else:
            if f['hook'].get('translated'):
                f['hook']['translated'] = False
                updated += 1
            stats_false += 1
    
    print(f"  Updated: {updated}")
    print(f"  CRT excluded: {crt_count}")
    print(f"  translated=true: {stats_true}")
    print(f"  translated=false: {stats_false}")
    
    save_json(os.path.join(WORKDIR, 'injectFunctionTest', 'functions.json'), funcs_data)
    
    print(f"\n{'=' * 60}")
    print(f"SUMMARY:")
    print(f"  Previous translated: 8,948")
    print(f"  New translated: {stats_true}")
    print(f"  Delta: {stats_true - 8948}")
    print(f"{'=' * 60}")
    
    print(f"\nBreakdown:")
    print(f"  REVERSE markers: {len(rev_translated)}")
    print(f"  Structure/ real: {len(struct_translated)}")
    print(f"  Other real: {len(other_translated)}")
    print(f"  Name-matched: {name_matched}")
    print(f"  Total: {stats_true}")
    
    print(f"\nSample translated:")
    translated_funcs = [f for f in functions if f['hook'].get('translated')]
    for f in translated_funcs[:15]:
        print(f"  {f['address']} {f['name']}")
    if len(translated_funcs) > 15:
        print(f"  ... and {len(translated_funcs) - 15} more")
    
    return stats_true


if __name__ == '__main__':
    count = main()
    print(f"\nDone. translated count = {count}")
