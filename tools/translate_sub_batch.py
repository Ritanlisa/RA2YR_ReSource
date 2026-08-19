#!/usr/bin/env python3
"""
translate_sub_batch.py — Batch translate sub_* functions using IDA MCP for clean decompilation.

Instead of processing stored JSONs with control chars, this script uses the IDA MCP
to get clean decompiled pseudocode for each function, then translates to C++20.

This produces MUCH cleaner output than the JSON-based approach.

Usage:
  python tools/translate_sub_batch.py --count 10 --min-size 200
  python tools/translate_sub_batch.py --all
"""

import json
import re
import sys
import os
from collections import defaultdict
from pathlib import Path

PROJECT_ROOT = Path(__file__).parent.parent

# Load functions.json for sizes
FUNCTIONS_JSON = PROJECT_ROOT / "injectFunctionTest" / "functions.json"
NAMING_JSON = PROJECT_ROOT / "tools" / "sub_naming_proposals.json"

def load_data():
    with open(FUNCTIONS_JSON) as f:
        funcs = {f['address'].upper(): f for f in json.load(f)['functions']}
    with open(NAMING_JSON) as f:
        naming_data = json.load(f)
    naming = naming_data.get('proposals', {})
    details = naming_data.get('details', {})
    return funcs, naming, details

def get_targets(funcs, min_size=50, max_size=500, count=None):
    """Get sub_* function addresses in size range, sorted by size descending."""
    targets = []
    for addr, info in funcs.items():
        name = info.get('name', '')
        if not name.startswith('sub_'):
            continue
        size = info.get('size', 0)
        if min_size <= size <= max_size:
            targets.append((addr, name, size))
    targets.sort(key=lambda x: x[2], reverse=True)
    if count:
        targets = targets[:count]
    return targets

def get_proposal(addr, naming, details):
    """Get naming proposal for an address. addr is like '0X401190'."""
    # Convert to the key format used in naming proposals: '0x401190'
    key1 = addr.replace('X', 'x')
    # Remove leading zeros: '0x00401190' -> '0x401190'
    key1 = re.sub(r'0x0+', '0x', key1)
    key2 = addr.lower().replace('0x', '0x')
    proposal = naming.get(key1, naming.get(key2, ''))
    detail = details.get(key1, details.get(key2, {}))
    return proposal, detail

# Module assignment (same as before but simplified)
MODULE_PATTERNS = [
    (re.compile(r'Audio|Mixer|Buffer|Stream|Channel|Sample|Volume|Voc|WAV|Playback|Sound', re.I), 'misc/audio.cpp'),
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
    (re.compile(r'Weapon|SuperWeapon|SW_|Ion|Nuke|Weather|Lightning', re.I), 'misc/super.cpp'),
    (re.compile(r'Team|Trigger|Script|Campaign|TaskForce', re.I), 'team/team.cpp'),
    (re.compile(r'Network|Socket|Winsock|Packet|Session|Connect|Send|Recv', re.I), 'network/network.cpp'),
    (re.compile(r'Vtable|Constructor|Destructor|DDTor|CTOR|DTOR', re.I), 'core/vtables.cpp'),
    (re.compile(r'Mix|Blowfish|Crypto|Hash|Decrypt|Encrypt|CRC', re.I), 'system/mix.cpp'),
    (re.compile(r'LinkedList|Vector|Array|List|Node|Queue|Stack|Alloc|Free|Heap|Pool|BitArray', re.I), 'core/containers.cpp'),
    (re.compile(r'Math|Arith|Compute|Calc|Sqrt|SqDist|Dist|Dot|Cross|Matrix|Sin|Cos|Tan', re.I), 'core/math.cpp'),
    (re.compile(r'File|Load|Save|Read|Write|Open|Close|Seek|IO|Path|Dir', re.I), 'system/file.cpp'),
    (re.compile(r'Timer|Time|Tick|Delay|Sleep|Countdown', re.I), 'core/timer.cpp'),
    (re.compile(r'Random|Rand|Seed', re.I), 'core/random.cpp'),
    (re.compile(r'Locomotor|Movement|Path|Navigate|Speed|Move(?!ment)', re.I), 'misc/locomotor.cpp'),
    (re.compile(r'Super|Weather|Crate|PowerOut|Chrono', re.I), 'misc/super.cpp'),
    (re.compile(r'Radar|SpySat|Shroud|Fog|Reveal', re.I), 'system/radar.cpp'),
    (re.compile(r'String|Wide|Unicode|Char|sprintf|strcpy|strcat|strlen|strcmp|toupper|tolower|isdigit|isxdigit', re.I), 'core/string.cpp'),
    (re.compile(r'Factory|Build|Produce|Construct|Purchase', re.I), 'system/factory.cpp'),
    (re.compile(r'Object|Abstract|Techno|Foot|Radio|Mission', re.I), 'object/object.cpp'),
    (re.compile(r'Mult|Float|Double|Fixed|Precision|fld|fild|fstp|fst', re.I), 'core/math.cpp'),
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

def main():
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument('--count', type=int, default=50)
    parser.add_argument('--min-size', type=int, default=200)
    parser.add_argument('--max-size', type=int, default=500)
    parser.add_argument('--all', action='store_true')
    parser.add_argument('--output-dir', type=str, default='src/_translated_mcp')
    args = parser.parse_args()
    
    funcs, naming, details = load_data()
    
    count = None if args.all else args.count
    targets = get_targets(funcs, args.min_size, args.max_size, count)
    
    print(f"Found {len(targets)} sub_* functions in size range [{args.min_size},{args.max_size}]")
    print(f"Output directory: {args.output_dir}")
    print()
    print("NOTE: This script needs IDA MCP connection for clean decompilation.")
    print("Use tools/translate_sub_functions.py for JSON-based translation (faster but less clean).")
    print()
    print("Target functions:")
    for addr, name, size in targets[:20]:
        proposal, _ = get_proposal(addr, naming, details)
        module = assign_module(proposal or name)
        print(f"  {addr} ({size}B) → {proposal or name} → {module}")
    if len(targets) > 20:
        print(f"  ... and {len(targets)-20} more")

if __name__ == '__main__':
    main()
