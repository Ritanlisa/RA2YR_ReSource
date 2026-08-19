#!/usr/bin/env python3
"""
gen_sub_implementations.py — Generate compilable .cpp files for sub_* functions.

For each sub_* function in the target size range:
1. Creates a proper function stub (compiles with 0 errors)
2. Embeds the clean IDA decompiled pseudocode as a comment block
3. For functions that are simple math/trivial, provides real implementations

Output: src/_generated/ directory with organized .cpp files per module.

Usage:
  python tools/gen_sub_implementations.py --min-size 200 --max-size 500 --count 50
  python tools/gen_sub_implementations.py --all-sizes
"""

import json
import re
import os
import sys
import argparse
from collections import defaultdict
from pathlib import Path

PROJECT_ROOT = Path(__file__).parent.parent
DECOMPILES_DIR = PROJECT_ROOT / "tools" / "sub_decompiles"
NAMING_JSON = PROJECT_ROOT / "tools" / "sub_naming_proposals.json"
FUNCTIONS_JSON = PROJECT_ROOT / "injectFunctionTest" / "functions.json"
OUTPUT_DIR = PROJECT_ROOT / "src" / "_generated"

# ── IDA cleanup ────────────────────────────────────────────────────────────

STRIP_CTRL_RE = re.compile(r'[\u0001-\u001f]+')
STRIP_HEX_RE = re.compile(r'\(0{8}[0-9A-Fa-f]{7,8}')

def clean_ida_pseudo(pseudo):
    """Get readable pseudocode from IDA JSON."""
    text = STRIP_CTRL_RE.sub(' ', pseudo)
    text = STRIP_HEX_RE.sub('', text)
    text = re.sub(r'@<\w+>', '', text)
    text = text.replace('\x60', '')
    text = re.sub(r'\s+', ' ', text).strip()
    return text


# ── Simple function translation ────────────────────────────────────────────

def translate_simple(pseudo, func_name, cc):
    """Try to translate simple IDA pseudocode to valid C++.
    Returns (code, success) where success=True if the result is likely compilable."""
    text = clean_ida_pseudo(pseudo)
    
    # Step 1: Extract function signature
    # Pattern: return_type [calling_conv] func_name(params) { body }
    sig_match = re.match(
        r'([\w\s*]+?)\s*(__\w+)?\s*(\w+)\s*\(([^)]*)\)\s*\{(.+)\}\s*$',
        text, re.DOTALL
    )
    if not sig_match:
        return None, False
    
    ret_type = sig_match.group(1).strip()
    calling_conv = sig_match.group(2)
    old_name = sig_match.group(3)
    params = sig_match.group(4).strip()
    body = sig_match.group(5).strip()
    
    # Step 2: Replace the name
    body = body.replace(old_name, func_name)
    
    # Step 3: Type translations
    type_map = {
        '_DWORD': 'uint32_t', '_BYTE': 'uint8_t', '_WORD': 'uint16_t',
        '_QWORD': 'uint64_t',
        '__int8': 'int8_t', '__int16': 'int16_t', '__int32': 'int32_t', '__int64': 'int64_t',
        'unsigned __int8': 'uint8_t', 'unsigned __int16': 'uint16_t',
        'unsigned __int32': 'uint32_t', 'unsigned __int64': 'uint64_t',
        'signed __int32': 'int32_t',
    }
    for old, new in sorted(type_map.items(), key=lambda x: -len(x[0])):
        body = re.sub(r'\b' + re.escape(old) + r'\b', new, body)
    
    # Step 4: Handle macros
    def replace_ida_macro(match, replacement_template):
        """Replace IDA macro calls: MACRO ( ... ) → template(arg)"""
        full = match.group(0)
        name_end = match.end(1)
        # Find the opening paren
        j = name_end
        while j < len(full) and full[j] in ' \t':
            j += 1
        if j >= len(full) or full[j] != '(':
            return full
        # Find matching close paren
        depth = 1
        k = j + 1
        while k < len(full) and depth > 0:
            if full[k] == '(':
                depth += 1
            elif full[k] == ')':
                depth -= 1
            k += 1
        arg = full[j+1:k-1].strip()
        return replacement_template.replace('{arg}', arg)
    
    # HIWORD / LOWORD / etc.
    body = re.sub(
        r'\bHIWORD\s*\([^)]*(?:\([^)]*\)[^)]*)*\)',
        lambda m: '((uint32_t)(' + re.search(r'HIWORD\s*\((.*)\)', m.group(0), re.DOTALL).group(1).strip() + ') >> 16)',
        body
    )
    
    # Simple: just try basic replacements
    body = re.sub(r'\bHIWORD\s*\(\s*(.+?)\s*\)', r'((uint32_t)(\1) >> 16)', body)
    body = re.sub(r'\bLOWORD\s*\(\s*(.+?)\s*\)', r'((uint16_t)(\1))', body)
    body = re.sub(r'\bLOBYTE\s*\(\s*(.+?)\s*\)', r'((uint8_t)(\1))', body)
    body = re.sub(r'\bHIDWORD\s*\(\s*(.+?)\s*\)', r'((uint32_t)((\1) >> 32))', body)
    body = re.sub(r'\bLODWORD\s*\(\s*(.+?)\s*\)', r'((uint32_t)(\1))', body)
    body = re.sub(r'\bBYTE1\s*\(\s*(.+?)\s*\)', r'(((uint32_t)(\1) >> 8) & 0xFF)', body)
    body = re.sub(r'\bBYTE2\s*\(\s*(.+?)\s*\)', r'(((uint32_t)(\1) >> 16) & 0xFF)', body)
    body = re.sub(r'\bHIBYTE\s*\(\s*(.+?)\s*\)', r'(((uint32_t)(\1) >> 8) & 0xFF)', body)
    
    # Step 5: Fix common issues
    body = re.sub(r'!\s*', '', body)  # Remove ! markers
    body = re.sub(r'"(\w+)\s*"', r'\1', body)  # Fix quoted API calls
    body = re.sub(r'\bqmemcpy\b', 'memcpy', body)  # qmemcpy → memcpy
    body = re.sub(r'\b__2_YAPAXI_Z\b', 'operator_new', body)
    body = re.sub(r'\b__3_YAXPAX_Z\b', 'operator_delete', body)
    
    # Step 6: Check for problematic patterns
    problematic = [
        r'\blpVtbl\b',      # vtable access
        r'MEMORY\[',         # direct memory access
        r'@\w+',            # register annotations
        r'// \[esp',        # stack annotations
        r'label_\d+\s*:',   # goto labels
        r'\bgoto\b',        # goto statements
        r'\(\s*\w+\s*\*\*\s*\)',  # function pointer casts
        r'\(int\s*\(\s*\*',      # function pointer in cast
        r'g_\w+',            # global variable reference (needs extern)
        r'byte_\w+',         # byte-level global
        r'dbl_\w+',          # double global
        r'flt_\w+',          # float global
        r'\bunk_\w+',        # unknown global
        r'\bstd::',          # STL (not available in this context)
    ]
    for pat in problematic:
        if re.search(pat, body):
            return None, False
    
    # Step 7: Build final function
    # Replace __fastcall, __thiscall etc.
    ret_type_clean = ret_type
    ret_type_clean = re.sub(r'__\w+', '', ret_type_clean).strip()
    
    # Clean params
    params_clean = params
    params_clean = re.sub(r'const\s+', 'const ', params_clean)
    
    code = f'{ret_type_clean} {func_name}({params_clean}) {{\n'
    code += f'    {body}\n'
    code += '}'
    
    # Final safety: check for unmatched braces
    if code.count('{') != code.count('}'):
        return None, False
    
    # Check for common C++ issues
    if '#include' in code or 'template' in code:
        return None, False
    
    return code, True


# ── Module assignment ──────────────────────────────────────────────────────

MODULE_PATTERNS = [
    (re.compile(r'Audio|Mixer|Buffer|Stream|Channel|Sample|Volume|Voc|WAV|Playback|Sound|Handle', re.I), 'misc/audio.cpp'),
    (re.compile(r'Surface|Pixel|Blit|Draw|Render|Palette|DDraw|DirectDraw|Gdi|Stretch', re.I), 'render/surface.cpp'),
    (re.compile(r'BINK|Movie|Video|VQA|Frame(?!Work)', re.I), 'render/movie.cpp'),
    (re.compile(r'SHP|FrameWork|Shape|ZShape', re.I), 'render/shp.cpp'),
    (re.compile(r'Voxel|VXL|HVA', re.I), 'render/voxel.cpp'),
    (re.compile(r'Gadget|Dialog|Button|ListBox|ComboBox|Edit|Slider|Tab|Scroll|Mouse|Key|ToolTip|Sidebar|Command', re.I), 'ui/gadget.cpp'),
    (re.compile(r'Menu|Select|Campaign|Skirmish|Network(?!Class)', re.I), 'ui/menu.cpp'),
    (re.compile(r'Ini|Rules|Rule|Theme|Theater|Side|Country', re.I), 'misc/rules.cpp'),
    (re.compile(r'Map|Cell|Tile|Iso|Terrain|Lathe|Coord|Isometric|Distance', re.I), 'system/map.cpp'),
    (re.compile(r'Scenario|Save|Load|Lighting|Difficulty', re.I), 'system/scenario.cpp'),
    (re.compile(r'House|Player|Ally|Enemy|Neutral', re.I), 'house/house.cpp'),
    (re.compile(r'Infantry|Soldier|Squid|Deploy', re.I), 'structure/infantry.cpp'),
    (re.compile(r'Unit|Tank|Vehicle|Drive|Turret', re.I), 'structure/unit.cpp'),
    (re.compile(r'Building|Factory|Refinery|Power|Construction|Wall', re.I), 'structure/building.cpp'),
    (re.compile(r'Aircraft|Heli|Jet|Plane|Rotor|Fly', re.I), 'structure/aircraft.cpp'),
    (re.compile(r'Bullet|Projectile|Warhead|Damage|Explos', re.I), 'entity/bullet.cpp'),
    (re.compile(r'Anim|Particle|Overlay|Smudge|Spark', re.I), 'entity/anim.cpp'),
    (re.compile(r'Weapon|SuperWeapon|SW_|Ion|Nuke|Weather|Lightning|Crate|Chrono|PowerOut', re.I), 'misc/super.cpp'),
    (re.compile(r'Team|Trigger|Script|Campaign|TaskForce', re.I), 'team/team.cpp'),
    (re.compile(r'Network|Socket|Winsock|Packet|Session|Connect|Send|Recv|WOL', re.I), 'network/network.cpp'),
    (re.compile(r'Vtable|Constructor|Destructor|DDTor|CTOR|DTOR|CtorFrom', re.I), 'core/vtables.cpp'),
    (re.compile(r'Mix|Blowfish|Crypto|Hash|Decrypt|Encrypt|CRC', re.I), 'system/mix.cpp'),
    (re.compile(r'LinkedList|Vector|Array|List|Node|Queue|Stack|Alloc|Free|Heap|Pool|BitArray', re.I), 'core/containers.cpp'),
    (re.compile(r'Math|Arith|Compute|Calc|Sqrt|SqDist|Dist|Dot|Cross|Matrix|Sin|Cos|Tan|Sincos|Matrix3D|Matrix2D', re.I), 'core/math.cpp'),
    (re.compile(r'File|Load|Save|Read|Write|Open|Close|Seek|IO|Path|Dir', re.I), 'system/file.cpp'),
    (re.compile(r'Timer|Time|Tick|Delay|Sleep|Countdown', re.I), 'core/timer.cpp'),
    (re.compile(r'Random|Rand|Seed', re.I), 'core/random.cpp'),
    (re.compile(r'Locomotor|Movement|Path|Navigate|Speed|Move(?!ment)', re.I), 'misc/locomotor.cpp'),
    (re.compile(r'Radar|SpySat|Shroud|Fog|Reveal', re.I), 'system/radar.cpp'),
    (re.compile(r'String|Wide|Unicode|Char|sprintf|strcpy|strcat|strlen|strcmp|toupper|tolower|isdigit|isxdigit|Strncpy', re.I), 'core/string.cpp'),
    (re.compile(r'Factory|Build|Produce|Construct|Purchase', re.I), 'system/factory.cpp'),
    (re.compile(r'Object|Abstract|Techno|Foot|Radio|Mission|Request', re.I), 'object/object.cpp'),
    (re.compile(r'Debug|Log|atexit|Init|Deinit|LCWPipe|Compress', re.I), 'core/misc_sub.cpp'),
]

def assign_module(name, callers=None):
    for pattern, module in MODULE_PATTERNS:
        if pattern.search(name):
            return module
    if callers:
        for caller in callers:
            for pattern, module in MODULE_PATTERNS:
                if pattern.search(caller):
                    return module
    return 'core/misc_sub.cpp'


# ── Data loading ───────────────────────────────────────────────────────────

def load_data():
    with open(FUNCTIONS_JSON) as f:
        funcs = {f['address'].upper(): f for f in json.load(f)['functions']}
    with open(NAMING_JSON) as f:
        nd = json.load(f)
    naming = nd.get('proposals', {})
    details = nd.get('details', {})
    return funcs, naming, details


def get_proposal(addr_hex, naming, details):
    """addr_hex is like '00401190' (from filename)"""
    # Key in naming proposals: '0x401190'
    key_short = '0x' + addr_hex.upper().lstrip('0')
    key_long = '0x' + addr_hex.upper()
    proposal = naming.get(key_short, naming.get(key_long, ''))
    detail = details.get(key_short, details.get(key_long, {}))
    return proposal, detail


# ── Main generation ────────────────────────────────────────────────────────

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--min-size', type=int, default=50)
    parser.add_argument('--max-size', type=int, default=500)
    parser.add_argument('--count', type=int, default=0)
    parser.add_argument('--all-sizes', action='store_true')
    parser.add_argument('--output-dir', type=str, default=str(OUTPUT_DIR))
    args = parser.parse_args()
    
    funcs, naming, details = load_data()
    
    # Get all decompile files
    import glob as gmod
    all_files = sorted(gmod.glob(str(DECOMPILES_DIR / '[0-9A-Fa-f]*.json')))
    
    # Build target list
    targets = []
    for fpath in all_files:
        addr_hex = os.path.basename(fpath).replace('.json', '')
        key = '0X' + addr_hex.upper().lstrip('0')
        func_info = funcs.get(key, {})
        size = func_info.get('size', 0)
        name = func_info.get('name', '')
        if not name.startswith('sub_'):
            continue
        if args.all_sizes or (args.min_size <= size <= args.max_size):
            targets.append((addr_hex, fpath, size, name, func_info))
    
    # Sort by size descending
    targets.sort(key=lambda x: x[2], reverse=True)
    
    if args.count > 0:
        targets = targets[:args.count]
    
    print(f"Processing {len(targets)} sub_* functions...")
    
    # Group by module
    modules = defaultdict(list)
    translated_count = 0
    stub_count = 0
    
    for i, (addr_hex, fpath, size, old_name, func_info) in enumerate(targets):
        if (i + 1) % 50 == 0:
            print(f"  {i+1}/{len(targets)}...")
        
        with open(fpath) as f:
            j = json.load(f)
        
        pseudo = j.get('pseudocode', '')
        if not pseudo:
            continue
        
        proposal, detail = get_proposal(addr_hex, naming, details)
        func_name = proposal if proposal else old_name
        cc = detail.get('cc', 'cdecl') if isinstance(detail, dict) else 'cdecl'
        module = assign_module(func_name, detail.get('callers', []) if isinstance(detail, dict) else None)
        
        # Clean pseudocode for comment
        clean = clean_ida_pseudo(pseudo)
        
        # Try auto-translation
        body, success = translate_simple(pseudo, func_name, cc)
        
        if success and body:
            entry = {
                'addr': addr_hex,
                'name': func_name,
                'size': size,
                'code': body,
                'is_stub': False,
                'pseudo': clean,
            }
            translated_count += 1
        else:
            # Create stub with pseudocode as comment
            # Determine return type
            if 'void ' in clean[:50]:
                ret = 'void'
                ret_val = ''
            elif 'bool ' in clean[:50] or 'BOOL ' in clean[:50]:
                ret = 'bool'
                ret_val = 'return false;'
            elif 'char ' in clean[:50] or 'CHAR ' in clean[:50]:
                ret = 'char'
                ret_val = 'return 0;'
            elif 'float ' in clean[:50] or 'double ' in clean[:50]:
                ret = 'float' if 'float' in clean[:50] else 'double'
                ret_val = 'return 0.0f;' if ret == 'float' else 'return 0.0;'
            elif 'int ' in clean[:50] or 'DWORD ' in clean[:50] or 'HRESULT ' in clean[:50] or 'LRESULT ' in clean[:50]:
                ret = 'int'
                ret_val = 'return 0;'
            elif 'LPDIRECTDRAW' in clean[:80]:
                ret = 'void*'
                ret_val = 'return nullptr;'
            elif 'HANDLE' in clean[:50]:
                ret = 'void*'
                ret_val = 'return nullptr;'
            else:
                ret = 'int'
                ret_val = 'return 0;'
            
            pseudo_block = '\n'.join('//   ' + line for line in clean.split('\n'))
            
            stub = f"""{ret} {func_name}() {{
    // TODO: Translate from IDA decompile (tools/sub_decompiles/{addr_hex}.json)
    // Size: {size} bytes, cc: {cc}
    // IDA pseudocode:
{pseudo_block}
    {ret_val}
}}"""
            entry = {
                'addr': addr_hex,
                'name': func_name,
                'size': size,
                'code': stub,
                'is_stub': True,
                'pseudo': clean,
            }
            stub_count += 1
        
        modules[module].append(entry)
    
    print(f"\nResults: {translated_count} translated, {stub_count} stubs")
    
    # Write module files
    output_base = Path(args.output_dir)
    written = []
    
    MODULE_INCLUDES = {
        'core/math.cpp': ['<cstdint>', '<cmath>'],
        'core/string.cpp': ['<cstdint>', '<cstring>', '<cwchar>', '<cstdio>'],
        'core/misc_sub.cpp': ['<cstdint>', '<cstdlib>'],
        'misc/audio.cpp': ['<cstdint>'],
        'render/surface.cpp': ['<cstdint>'],
        'ui/gadget.cpp': ['<cstdint>'],
        'system/file.cpp': ['<cstdint>', '<cstdio>'],
    }
    
    for module_path, entries in sorted(modules.items()):
        out_path = output_base / module_path
        out_path.parent.mkdir(parents=True, exist_ok=True)
        
        includes = MODULE_INCLUDES.get(module_path, ['<cstdint>'])
        
        lines = []
        lines.append('// Auto-generated sub_* function implementations and stubs')
        lines.append('// Generated by tools/gen_sub_implementations.py')
        lines.append(f'// Translated: {sum(1 for e in entries if not e["is_stub"])}, Stubs: {sum(1 for e in entries if e["is_stub"])}')
        lines.append('')
        for inc in includes:
            lines.append(f'#include {inc}')
        lines.append('')
        lines.append('namespace gamemd {')
        lines.append('')
        
        for entry in sorted(entries, key=lambda x: x['name']):
            lines.append(f'// 0x{entry["addr"]} ({entry["size"]} bytes)')
            lines.append(entry['code'])
            lines.append('')
        
        lines.append('} // namespace gamemd')
        
        with open(out_path, 'w', encoding='utf-8') as f:
            f.write('\n'.join(lines))
        
        written.append(str(out_path))
    
    print(f"\nWritten {len(written)} module files to {args.output_dir}/")
    for w in sorted(written):
        print(f"  {w}")


if __name__ == '__main__':
    main()
