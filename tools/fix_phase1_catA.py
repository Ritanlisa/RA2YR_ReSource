"""
Phase 1 Fix: Add ClassName::MethodName in init_stubs.hpp (Category A only)
Add forward declarations for classes used with :: syntax.
Category B (namespace-based) handled by audit script enhancement separately.
"""
import re, os
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).parent.parent

# Read no_scope entries
entries = []
with open(ROOT / '.omo' / 'no_scope.txt', 'r') as f:
    for line in f:
        line = line.strip()
        if not line: continue
        parts = line.split('|')
        if len(parts) < 3 or not parts[2]: continue
        entries.append({'addr': parts[0], 'ida_name': parts[1], 'hpp_name': parts[2]})

# Only fix Category A: ClassNameMethodName -> ClassName::MethodName
cat_a = []
for e in entries:
    expected = e['ida_name'].replace('::', '')
    if e['hpp_name'] == expected:
        cat_a.append(e)

print(f"Category A entries: {len(cat_a)}")

# Find files for each entry
by_file = defaultdict(list)
for e in cat_a:
    hpp_name = e['hpp_name']
    ida_cls = e['ida_name'].rsplit('::', 1)[0]
    found = False
    for dirpath, dirnames, filenames in os.walk(ROOT / 'src'):
        if found: break
        for fn in filenames:
            if not fn.endswith('.hpp'): continue
            fpath = Path(dirpath) / fn
            try:
                content = fpath.read_text(encoding='utf-8', errors='replace')
                if re.search(rf'^(?:[a-zA-Z_*&\s]+)?\b{re.escape(hpp_name)}\s*\(', content, re.MULTILINE):
                    rel = str(fpath.relative_to(ROOT))
                    by_file[rel].append(e)
                    found = True
                    break
            except:
                pass

print("Files to modify:")
for f in sorted(by_file):
    print(f"  {f}: {len(by_file[f])} changes")
    for e in by_file[f]:
        ida_cls = e['ida_name'].rsplit('::', 1)[0]
        print(f"    {e['addr']}: {e['hpp_name']} -> {e['ida_name']} (needs {ida_cls})")

# Process each file
for file_rel, changes in by_file.items():
    file_norm = file_rel.replace('\\', '/')
    full_path = ROOT / file_rel
    content = full_path.read_text(encoding='utf-8')
    lines = content.split('\n')
    
    # Classes needed for this file
    classes_needed = set()
    for e in changes:
        ida_cls = e['ida_name'].rsplit('::', 1)[0]
        classes_needed.add(ida_cls)
    
    # Check existing forward declarations in this file  
    existing = set()
    for line in lines:
        m = re.search(r'class\s+(\w+);', line)
        if m: existing.add(m.group(1))
    
    new_fwds = classes_needed - existing
    if new_fwds:
        print(f"\n{file_rel}: adding forward decls: {new_fwds}")
        
        # Find insertion point: after existing fwds, before first stub function
        insert_at = 0
        in_namespace = False
        for i, line in enumerate(lines):
            if 'namespace gamemd' in line:
                in_namespace = True
                insert_at = i + 1
            if re.search(r'class\s+\w+;', line):
                insert_at = i + 1
            if in_namespace and line.strip().startswith('// ===='):
                # Insert before the divider
                insert_at = i
                break
        
        if insert_at == 0:
            insert_at = 8  # Fallback
        
        for cls in sorted(new_fwds):
            lines.insert(insert_at, f'class {cls};')
            print(f"  + class {cls}; at line {insert_at+1}")
            insert_at += 1
        
        content = '\n'.join(lines)
    
    # Apply name replacements
    for e in changes:
        old_name = e['hpp_name']
        new_name = e['ida_name']
        pattern = rf'\b{re.escape(old_name)}\b'
        new_content, count = re.subn(pattern, new_name, content)
        if count > 0:
            print(f"  FIXED: {old_name} -> {new_name} ({count}x)")
            content = new_content
    
    full_path.write_text(content, encoding='utf-8')
    print(f"  Saved {file_rel}")

print("\nDone! Ready to compile.")
