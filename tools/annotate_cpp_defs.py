"""Scan + annotate cpp definitions with // 0xADDR in ONE pass. No line drift."""
import json, re, os, glob
from collections import Counter

ROOT = r'D:\RA2YR_ReSource'

with open(os.path.join(ROOT, 'injectFunctionTest/functions.json'), 'r') as f:
    funcs_list = json.load(f)['functions']

target = {}
for e in funcs_list:
    if e.get('hook', {}).get('translated', False):
        target[e['name']] = e['address']

aliases = {}
for name in target:
    parts = name.split('::')
    if len(parts) == 2:
        cls, method = parts
        if method in ('Construct', 'Constructor'):
            aliases[f'{cls}::{cls}'] = name
        elif method in ('Destruct', 'Destructor', 'Destroy'):
            aliases[f'{cls}::~{cls}'] = name

print(f"Target: {len(target)}, Aliases: {len(aliases)}")

cpp_files = [f for f in glob.glob(os.path.join(ROOT, 'src/**/*.cpp'), recursive=True)
             if '_generated' not in f.replace('\\', '/')
             and not os.path.basename(f).startswith('subs')]

ok_cnt = 0
added = 0
fixed = 0
missing = set(target.keys())
dirs = Counter()

for cpp_file in sorted(cpp_files):
    with open(cpp_file, 'r', encoding='utf-8', errors='replace') as f:
        lines = f.read().split('\n')
    
    inserts = []
    
    for i, line in enumerate(lines):
        s = line.strip()
        if not s or s.startswith(('//', '/*', '#')):
            continue
        if s.startswith(('return ', 'if ', 'while ', 'for ', 'switch ', 'case ', 'default:', 'else', 'using ')):
            continue
        
        m = re.match(
            r'^(?:[\w:<>,\s*&]+?\s+)?(\w+)::(~?\w+)\s*\([^)]*\)\s*(?:const\s*)?(?:\s*\{|$)',
            s
        )
        if not m:
            continue
        
        full = f"{m.group(1)}::{m.group(2)}"
        tname = full
        if full not in target:
            if full in aliases:
                tname = aliases[full]
            else:
                continue
        
        taddr = target[tname]
        
        has_brace = '{' in s
        if not has_brace:
            for j in range(i+1, min(i+8, len(lines))):
                nl = lines[j].strip()
                if nl.startswith('//') or nl == '':
                    continue
                # Skip initializer list lines (start with : or ,)
                if nl.startswith(':') or nl.startswith(','):
                    continue
                # Skip lines that are just member initializers
                if re.match(r'^\w+\(', nl):
                    continue
                has_brace = '{' in nl
                break
        if not has_brace:
            continue
        
        existing = None
        if i > 0:
            m2 = re.match(r'^//\s*(0x[0-9A-Fa-f]{5,8})', lines[i-1].strip())
            if m2:
                existing = m2.group(1).upper()
        
        if existing is None:
            inserts.append((i, taddr))
        elif existing != taddr.upper():
            inserts.append((i, taddr, existing))
            fixed += 1
        else:
            ok_cnt += 1
        
        missing.discard(tname)
    
    if not inserts:
        continue
    
    inserts.sort(key=lambda x: x[0], reverse=True)
    
    for item in inserts:
        pos = item[0]
        addr = item[1]
        if len(item) == 3:
            lines[pos - 1] = lines[pos - 1].replace(item[2], addr, 1)
        else:
            dl = lines[pos]
            indent = len(dl) - len(dl.lstrip())
            lines.insert(pos, ' ' * indent + f'// {addr}')
        added += 1
    
    with open(cpp_file, 'w', encoding='utf-8', errors='replace') as f:
        f.write('\n'.join(lines))
    
    rel = os.path.relpath(cpp_file, ROOT).replace('\\', '/')
    cnt = len(inserts)
    d = os.path.relpath(os.path.dirname(cpp_file), ROOT).replace('\\', '/')
    dirs[d] += cnt
    print(f"  {rel}: {cnt}")

print(f"\n=== OK:{ok_cnt} Added:{added} Fixed:{fixed} Missing:{len(missing)} ===")
for d, c in dirs.most_common():
    print(f"  {d}: {c}")

missing_s = sorted(missing)
with open(os.path.join(ROOT, '.omo/cpp_annot_missing.txt'), 'w') as f:
    for m in missing_s:
        f.write(f"{m} @ {target[m]}\n")
print(f"\nMissing ({len(missing_s)}):")
for m in missing_s[:20]:
    print(f"  {m} @ {target[m]}")
