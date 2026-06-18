"""
Fixed menu function generator - handles void returns correctly.
"""
import json, os

with open('.omo/evidence/menu_decompilations.json', 'r', encoding='utf-8') as f:
    decomp_data = json.load(f)

def safe_name(name):
    n = name.replace('::', '_')
    # Handle array notation like ClassName[12]
    import re
    n = re.sub(r'\[(\d+)\]', r'_\1', n)
    n = n.replace(']', '')
    return n

def get_rt(pseudo):
    """Determine return type from first line of decompilation."""
    if not pseudo: return 'int'
    fl = pseudo.split('\n')[0].strip().lower()
    if fl.startswith('void '): return 'void'
    if fl.startswith('bool '): return 'bool'
    if fl.startswith('hwnd '): return 'HWND'
    if fl.startswith('hinstance '): return 'HINSTANCE'
    if fl.startswith('long '): return 'LONG'
    if fl.startswith('int_ptr'): return 'INT_PTR'
    if fl.startswith('hmenu '): return 'HMENU'
    if fl.startswith('hdc '): return 'HDC'
    if fl.startswith('lresult'): return 'LRESULT'
    if fl.startswith('char '): return 'int'
    if fl.startswith('int '): return 'int'
    if fl.startswith('float '): return 'float'
    if fl.startswith('double '): return 'double'
    return 'int'

def get_default_return(rt):
    """Get default return value for type."""
    if rt == 'void': return None
    if rt == 'bool': return 'false'
    if rt in ('HWND', 'HINSTANCE', 'HMENU', 'HDC'): return 'nullptr'
    if rt == 'LONG': return '0L'
    if rt == 'INT_PTR': return '0'
    if rt == 'LRESULT': return '0'
    if rt == 'float': return '0.0f'
    if rt == 'double': return '0.0'
    return '0'

lines = []
lines.append('#include <cstdint>')
lines.append('#include <windows.h>')
lines.append('#include "core/reverse_marker.hpp"')
lines.append('')
lines.append('// Windows API name conflicts - prefix with gamemd_')
lines.append('namespace gamemd {')
lines.append('')

# Windows API conflicts to rename
WINAPI_CONFLICTS = {
    'CreateDialogParamA', 'CreateDialogIndirectParamA', 'DialogBoxParamA', 
    'DialogBoxIndirectParamA', 'EndDialog', 'IsDialogMessageA',
    'GetMenu', 'CreateDialogIndirectParamA', 'GetDialogBaseUnits',
    'CreateDialog', 'CreateDialogIndirect',  # These map to CreateDialogA/CreateDialogIndirectA macros
    'DialogBox', 'DialogBoxParam', 'DialogBoxIndirect',
}

sorted_funcs = sorted(decomp_data.items(), key=lambda x: int(x[1].get('addr_hex','0x0'),16))

seen_names = set()
count = 0

for name, info in sorted_funcs:
    if 'error' in info: continue
    addr = info['addr_hex']
    size = info.get('size', 0)
    pseudo = info.get('pseudocode', '')
    rt = get_rt(pseudo)
    sn = safe_name(name)
    
    # Handle Windows API name conflicts
    if sn in WINAPI_CONFLICTS:
        sn = f"gamemd_{sn}"
    
    # Handle duplicates
    if sn in seen_names:
        sn = f"{sn}_dup{size}"
    seen_names.add(sn)
    
    lines.append(f'// {name} @ {addr} ({size}B)')
    lines.append(f'REVERSE({addr}, "IDA decompilation", "None")')
    
    is_member = '::' in name
    if is_member:
        cls = name.split('::')[0]
        lines.append(f'{rt} {sn}(void* /*{cls}*/ self) {{')
    else:
        lines.append(f'{rt} {sn}(void) {{')
    
    dr = get_default_return(rt)
    if dr is not None:
        lines.append(f'    return {dr};')
    elif is_member:
        # void member function - suppress unused warning
        lines.append('    (void)self;')
    else:
        # void global function - nothing to do
        pass
    
    lines.append('}')
    lines.append('')
    count += 1

lines.append('} // namespace gamemd')

output_path = 'src/core/menu_globals_gen.cpp'
with open(output_path, 'w', encoding='utf-8') as f:
    f.write('\n'.join(lines))

print(f"Generated {count} clean stubs -> {output_path}")
print(f"Duplicates handled: {len([1 for n in seen_names if '_dup' in n])}")
