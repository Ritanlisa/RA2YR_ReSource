#!/usr/bin/env python3
"""Build vtable ground-truth map by cross-referencing header annotations with IDA binary vtable."""
import re, json, sys, os

sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..', 'tools'))
from verify_execution_flow import load_all_maps

def parse_annotations():
    """Parse all vtable annotations from header files."""
    annotations = []
    for fname in ['src/object/object.hpp', 'src/render/surface.hpp', 
                  'src/core/vector.hpp', 'src/ui/command_class.hpp']:
        full = os.path.join(os.path.dirname(__file__), '..', fname)
        if not os.path.exists(full):
            continue
        with open(full, encoding='utf-8', errors='replace') as f:
            lines = f.readlines()
        for i, line in enumerate(lines):
            m = re.search(r'//\s*\[(\d+)\]\s*(0x[0-9A-Fa-f]+)\s+(.+)', line)
            if not m:
                continue
            claimed_idx = int(m.group(1))
            addr = int(m.group(2), 16)
            comment_name = m.group(3).strip()
            
            code_name = None
            for j in range(i, min(i+5, len(lines))):
                if 'virtual' in lines[j] and '(' in lines[j]:
                    vn = re.search(r'(?:~?\w[\w:<>,*\s]*)\s+([~\w]+)\s*\(', lines[j])
                    if vn:
                        code_name = vn.group(1)
                    break
            
            cls = None
            if 'object.hpp' in fname:
                cls = 'ObjectClass'
            elif 'surface.hpp' in fname:
                cls = 'SurfaceClass'
            elif 'vector.hpp' in fname:
                cls = 'VectorClass'
            elif 'command_class.hpp' in fname:
                cls = 'CommandClass'
            
            if cls and code_name:
                annotations.append({
                    'class': cls,
                    'file': fname,
                    'line': i+1,
                    'comment_idx': claimed_idx,
                    'addr': addr,
                    'addr_hex': f'0x{addr:08X}',
                    'ida_name': comment_name,
                    'code_name': code_name
                })
    return annotations

# Parse
anns = parse_annotations()
print(f"Header annotations: {len(anns)} entries")
print()

# Sample: show first 10 with code names
for a in anns[:10]:
    print(f"  {a['class']:20s} comment_idx=[{a['comment_idx']:3d}] addr={a['addr_hex']:12s} code_name='{a['code_name']:25s}' ida='{a['ida_name'][:50]}'")

# Check how many unique code names vs ida names
code_names = set(a['code_name'] for a in anns)
ida_names = set(a['ida_name'].split('::')[-1].split('(')[0] for a in anns)
print(f"\nUnique code names: {len(code_names)}")
print(f"Unique IDA names: {len(ida_names)}")

# Check ObjectClass specifically
oc = [a for a in anns if a['class'] == 'ObjectClass']
print(f"\nObjectClass entries: {len(oc)}")
print(f"First code_name: {oc[0]['code_name']}")
print(f"Last code_name: {oc[-1]['code_name']}")
