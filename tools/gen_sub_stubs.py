#!/usr/bin/env python3
"""
gen_sub_stubs.py — Generate compilable .cpp stub files for sub_* functions.

Creates organized stub implementations with IDA decompile comments.
All stubs compile cleanly (empty body with return value where needed).

Output: src/_generated/ directory with organized .cpp files per module.

Usage:
  python tools/gen_sub_stubs.py --min-size 200 --max-size 500
  python tools/gen_sub_stubs.py --all-sizes
"""

import json, re, os, sys, argparse, glob as gmod
from collections import defaultdict
from pathlib import Path

PROJECT_ROOT = Path(__file__).parent.parent
DECOMPILES_DIR = PROJECT_ROOT / "tools" / "sub_decompiles"
NAMING_JSON = PROJECT_ROOT / "tools" / "sub_naming_proposals.json"
FUNCTIONS_JSON = PROJECT_ROOT / "injectFunctionTest" / "functions.json"
OUTPUT_DIR = PROJECT_ROOT / "src" / "_generated"

STRIP_CTRL_RE = re.compile(r'[\u0001-\u001f]+')
STRIP_HEX_RE = re.compile(r'\(0{8}[0-9A-Fa-f]{7,8}')

def clean_ida_pseudo(pseudo):
    text = STRIP_CTRL_RE.sub(' ', pseudo)
    text = STRIP_HEX_RE.sub('', text)
    text = re.sub(r'@<\w+>', '', text)
    text = text.replace('\x60', '')
    text = re.sub(r'\s+', ' ', text).strip()
    return text

MODULE_PATTERNS = [
    (re.compile(r'Audio|Mixer|Buffer|Stream|Channel|Sample|Volume|Voc|WAV|Playback|Sound', re.I), 'misc/audio.cpp'),
    (re.compile(r'Surface|Pixel|Blit|Draw|Render|Palette|DDraw|DirectDraw|Gdi|Stretch', re.I), 'render/surface.cpp'),
    (re.compile(r'BINK|Movie|Video|VQA|Frame(?!Work)', re.I), 'render/movie.cpp'),
    (re.compile(r'SHP|Shape|ZShape', re.I), 'render/shp.cpp'),
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
    (re.compile(r'Math|Arith|Compute|Calc|Sqrt|SqDist|Dist|Dot|Cross|Matrix|Sin|Cos|Tan|Sincos|Matrix3D|Matrix2D|Matrix3x4', re.I), 'core/math.cpp'),
    (re.compile(r'File|Load|Save|Read|Write|Open|Close|Seek|IO|Path|Dir', re.I), 'system/file.cpp'),
    (re.compile(r'Timer|Time|Tick|Delay|Sleep|Countdown', re.I), 'core/timer.cpp'),
    (re.compile(r'Random|Rand|Seed', re.I), 'core/random.cpp'),
    (re.compile(r'Locomotor|Movement|Path|Navigate|Speed|Move(?!ment)', re.I), 'misc/locomotor.cpp'),
    (re.compile(r'Radar|SpySat|Shroud|Fog|Reveal', re.I), 'system/radar.cpp'),
    (re.compile(r'String|Wide|Unicode|Char|sprintf|strcpy|strcat|strlen|strcmp|toupper|tolower|isdigit|isxdigit|Strncpy', re.I), 'core/string.cpp'),
    (re.compile(r'Factory|Build|Produce|Construct|Purchase', re.I), 'system/factory.cpp'),
    (re.compile(r'Object|Abstract|Techno|Foot|Radio|Mission|Request', re.I), 'object/object.cpp'),
    (re.compile(r'Debug|Log|atexit|Init|Deinit|LCWPipe|Compress|IPXInterface|Checksum', re.I), 'core/misc_sub.cpp'),
    (re.compile(r'SHA1|SHA', re.I), 'core/math.cpp'),
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

def load_data():
    with open(FUNCTIONS_JSON) as f:
        funcs = {f['address'].upper(): f for f in json.load(f)['functions']}
    with open(NAMING_JSON) as f:
        nd = json.load(f)
    naming = nd.get('proposals', {})
    details = nd.get('details', {})
    return funcs, naming, details

def get_proposal(addr_hex, naming, details):
    key_short = '0x' + addr_hex.upper().lstrip('0')
    key_long = '0x' + addr_hex.upper()
    proposal = naming.get(key_short, naming.get(key_long, ''))
    detail = details.get(key_short, details.get(key_long, {}))
    return proposal, detail

def sanitize_name(name, old_name, addr_hex=''):
    """Make a valid C++ free function name. Append address suffix if needed for uniqueness."""
    name = name.replace('::', '_')
    # Strip trailing hex suffixes (6+ hex chars) that are address fragments
    base = re.sub(r'[0-9A-Fa-f]{6,}$', '', name)
    base = base.rstrip('_')
    if not base or not base[0].isalpha():
        base = old_name.replace('sub_', 'Sub_')
    # Append address for uniqueness (full address, stripping leading zeros)
    suffix = addr_hex.upper().lstrip('0') if addr_hex else ''
    if not suffix:
        suffix = '0'
    return f"{base}_{suffix}"

def detect_return_type(first_line):
    """Detect return type from pseudocode signature line."""
    if 'void ' in first_line[:80]:
        return 'void', ''
    if 'bool ' in first_line[:80] or 'BOOL ' in first_line[:80]:
        return 'bool', 'return false;'
    if ('const char *' in first_line[:80] or 'char *' in first_line[:80] or 
        'const char*' in first_line[:80] or 'char*' in first_line[:80]):
        return 'const char*', 'return nullptr;'
    if 'char ' in first_line[:80]:
        return 'char', 'return 0;'
    if 'float ' in first_line[:80]:
        return 'float', 'return 0.0f;'
    if 'double ' in first_line[:80]:
        return 'double', 'return 0.0;'
    if 'LPDIRECTDRAW' in first_line[:80] or 'HANDLE' in first_line[:80]:
        return 'void*', 'return nullptr;'
    return 'int', 'return 0;'

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--min-size', type=int, default=50)
    parser.add_argument('--max-size', type=int, default=500)
    parser.add_argument('--count', type=int, default=0)
    parser.add_argument('--all-sizes', action='store_true')
    parser.add_argument('--output-dir', type=str, default=str(OUTPUT_DIR))
    args = parser.parse_args()
    
    funcs, naming, details = load_data()
    
    all_files = sorted(gmod.glob(str(DECOMPILES_DIR / '[0-9A-Fa-f]*.json')))
    
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
            targets.append((addr_hex, fpath, size, name))
    
    targets.sort(key=lambda x: x[2], reverse=True)
    if args.count > 0:
        targets = targets[:args.count]
    
    print(f"Processing {len(targets)} sub_* functions...")
    
    modules = defaultdict(list)
    
    for i, (addr_hex, fpath, size, old_name) in enumerate(targets):
        if (i + 1) % 100 == 0:
            print(f"  {i+1}/{len(targets)}...")
        
        with open(fpath) as f:
            j = json.load(f)
        
        pseudo = j.get('pseudocode', '')
        if not pseudo:
            continue
        
        proposal, detail = get_proposal(addr_hex, naming, details)
        func_name = proposal if proposal else old_name
        func_name = sanitize_name(func_name, old_name, addr_hex)
        
        cc = detail.get('cc', 'cdecl') if isinstance(detail, dict) else 'cdecl'
        module = assign_module(func_name, detail.get('callers', []) if isinstance(detail, dict) else None)
        
        clean = clean_ida_pseudo(pseudo)
        first_line = clean.split('\n')[0] if clean else ''
        ret, ret_val = detect_return_type(first_line)
        
        pseudo_block = '\n'.join('//   ' + line for line in clean.split('\n'))
        
        stub = f"""{ret} {func_name}() {{
    // TODO: Translate from IDA decompile (tools/sub_decompiles/{addr_hex}.json)
    // Size: {size} bytes, calling convention: {cc}
    // IDA pseudocode:
{pseudo_block}
    {ret_val}
}}"""
        
        modules[module].append({
            'addr': addr_hex,
            'name': func_name,
            'size': size,
            'code': stub,
        })
    
    print(f"\nGenerated {len(targets)} stubs across {len(modules)} modules")
    
    output_base = Path(args.output_dir)
    
    MODULE_INCLUDES = {
        'core/math.cpp': ['<cstdint>'],
        'core/string.cpp': ['<cstdint>'],
        'core/misc_sub.cpp': ['<cstdint>'],
    }
    
    for module_path, entries in sorted(modules.items()):
        out_path = output_base / module_path
        out_path.parent.mkdir(parents=True, exist_ok=True)
        
        includes = MODULE_INCLUDES.get(module_path, ['<cstdint>'])
        
        lines = []
        lines.append('// Auto-generated sub_* function stubs')
        lines.append(f'// {len(entries)} stubs from IDA decompiled pseudocode')
        lines.append('// Generated by tools/gen_sub_stubs.py')
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
    
    print(f"\nModule distribution:")
    for mod, entries in sorted(modules.items(), key=lambda x: -len(x[1])):
        print(f"  {mod}: {len(entries)} stubs")


if __name__ == '__main__':
    main()
