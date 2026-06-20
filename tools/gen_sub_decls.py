#!/usr/bin/env python3
"""
gen_sub_decls.py — Generate hpp declarations for sub_* free functions
missing from the src/ tree.

Reads functions.json → identifies sub_* free functions not yet declared
in src/** hpp files → reads corresponding sub_decompiles/*.json and
functions.json entries → generates src/_generated/sub_decls.hpp.

Idempotent: re-running produces identical output (sorted by address).

Usage:
  python tools/gen_sub_decls.py                    # full generation
  python tools/gen_sub_decls.py --dry-run          # print to stdout only
  python tools/gen_sub_decls.py --sample 10        # sample first 10
  python tools/gen_sub_decls.py --dry-run --sample 10
"""

import json
import os
import re
import sys
import argparse
import subprocess
from pathlib import Path
from collections import defaultdict

PROJECT_ROOT = Path(__file__).parent.parent
FUNCTIONS_JSON = PROJECT_ROOT / "injectFunctionTest" / "functions.json"
CRT_EXCL_JSON = PROJECT_ROOT / "tools" / "fr_crt_exclusions.json"
DECOMPILES_DIR = PROJECT_ROOT / "tools" / "sub_decompiles"
OUTPUT_HPP = PROJECT_ROOT / "src" / "_generated" / "sub_decls.hpp"


def norm_addr(a: str) -> str:
    """Normalize hex address to '0x' + uppercase hex (matching data key format)."""
    a = a.strip()
    if a.lower().startswith('0x'):
        return '0x' + a[2:].upper()
    return a.upper()


def load_hpp_addresses() -> set:
    """Return set of uppercase address strings found in src/**/*.hpp files."""
    try:
        result = subprocess.run(
            ['git', 'grep', '-ohP', r'0x[4-7][0-9A-Fa-f]{5}',
             '--', 'src/*.hpp', 'src/**/*.hpp'],
            capture_output=True, text=True, cwd=PROJECT_ROOT, timeout=30)
        if result.returncode != 0:
            print(f"Warning: git grep returned {result.returncode}", file=sys.stderr)
        lines = [norm_addr(l) for l in result.stdout.splitlines() if l.strip()]
        return set(lines)
    except Exception as e:
        print(f"Warning: git grep failed: {e}, falling back to empty set", file=sys.stderr)
        return set()


def load_data():
    """Load all input data."""
    with open(FUNCTIONS_JSON, 'r', encoding='utf-8') as f:
        fj = json.load(f)

    with open(CRT_EXCL_JSON, 'r', encoding='utf-8') as f:
        crt_excl = json.load(f)

    crt_set = set(norm_addr(addr) for addr in crt_excl['excluded_addresses'])
    hpp_addrs = load_hpp_addresses()

    return fj, crt_set, hpp_addrs


def identify_missing_subs(fj, crt_set, hpp_addrs):
    """Return list of (address, name, functions_json_entry) for missing sub_* functions."""
    missing = []
    for fentry in fj['functions']:
        addr = norm_addr(fentry['address'])
        name = fentry.get('name', '')
        call = fentry.get('call', {}) or {}

        # Exclude CRT
        if addr in crt_set:
            continue
        # Exclude already in hpp
        if addr in hpp_addrs:
            continue
        # Only sub_* functions
        if not name.startswith('sub_'):
            continue

        missing.append((addr, name, fentry))

    # Sort by address for determinism
    missing.sort(key=lambda x: int(x[0], 16))
    return missing


def load_sub_decompile(addr: str) -> dict:
    """Load the sub_decompiles JSON for a given address.

    Returns empty dict if file not found.
    """
    # File names in sub_decompiles/ use address without 0x prefix, zero-padded to 8 hex digits
    addr_int = int(addr, 16)
    filename = f'{addr_int:08X}.json'
    filepath = DECOMPILES_DIR / filename

    if filepath.exists():
        try:
            with open(filepath, 'r', encoding='utf-8') as f:
                return json.load(f)
        except Exception as e:
            print(f"  Warning: failed to read {filepath}: {e}", file=sys.stderr)

    return {}


def infer_signature(fentry, decomp_entry):
    """Infer function signature from functions.json and sub_decompiles data.

    Returns dict with ret, cc, params.
    """
    call = fentry.get('call', {}) or {}

    # Calling convention
    conv_map = {
        'thiscall': '__thiscall',
        'fastcall': '__fastcall',
        'stdcall': '__stdcall',
        'cdecl': '__cdecl',
    }
    cc = conv_map.get(call.get('convention', 'unknown'), '__cdecl')

    # Return type
    return_bytes = call.get('return_bytes', 4)
    if return_bytes == 0:
        ret = 'void'
    elif return_bytes == 4:
        ret = 'int'
    elif return_bytes == 8:
        ret = 'int64_t'
    elif return_bytes == 1:
        ret = 'uint8_t'
    elif return_bytes == 2:
        ret = 'uint16_t'
    else:
        ret = 'int'

    # Parameters: infer count from param_bytes / 4 (32-bit platform)
    param_bytes = call.get('param_bytes', 0)
    param_count = max(0, param_bytes // 4)
    params = ['int'] * param_count

    return {'ret': ret, 'cc': cc, 'params': params}


def format_declaration(ret: str, cc: str, name: str, params: list) -> str:
    """Format a C++ function declaration line."""
    conv_prefix = ''
    if cc == '__stdcall':
        conv_prefix = '__stdcall '
    elif cc == '__fastcall':
        conv_prefix = '__fastcall '
    elif cc == '__cdecl':
        conv_prefix = '__cdecl '

    param_str = ', '.join(params) if params else 'void'

    return f'{ret} {conv_prefix}{name}({param_str})'


# ── Module grouping (same patterns as gen_missing_decls) ────────────────────

MODULE_PATTERNS = [
    (re.compile(r'Audio|Mixer|Buffer|Stream|Channel|Sample|Volume|Voc|WAV|Playback|Sound(?!.*::)', re.I), 'audio'),
    (re.compile(r'Surface|Pixel|Blit|Draw|Render|Palette|DDraw|DirectDraw|Gdi|Stretch', re.I), 'render'),
    (re.compile(r'BINK|Movie|Video|VQA|Frame(?!Work)', re.I), 'movie'),
    (re.compile(r'SHP|Shape|ZShape', re.I), 'shp'),
    (re.compile(r'Voxel|VXL|HVA', re.I), 'voxel'),
    (re.compile(r'Gadget|Dialog|Button|ListBox|ComboBox|Edit|Slider|Tab|Scroll|Mouse|Key|ToolTip|Sidebar|Command', re.I), 'ui'),
    (re.compile(r'Menu|Select|Campaign|Skirmish|Network(?!Class)', re.I), 'menu'),
    (re.compile(r'Ini|Rules|Rule|Theme|Theater|Side|Country', re.I), 'config'),
    (re.compile(r'Map|Cell|Tile|Iso|Terrain|Lathe|Coord|Isometric|Distance', re.I), 'map'),
    (re.compile(r'Scenario|Save|Load|Lighting|Difficulty', re.I), 'scenario'),
    (re.compile(r'House|Player|Ally|Enemy|Neutral', re.I), 'house'),
    (re.compile(r'Infantry|Soldier|Squid|Deploy', re.I), 'infantry'),
    (re.compile(r'Unit|Tank|Vehicle|Drive|Turret', re.I), 'unit'),
    (re.compile(r'Building|Factory|Refinery|Power|Construction|Wall', re.I), 'building'),
    (re.compile(r'Aircraft|Heli|Jet|Plane|Rotor|Fly', re.I), 'aircraft'),
    (re.compile(r'Bullet|Projectile|Warhead|Damage|Explos', re.I), 'bullet'),
    (re.compile(r'Anim|Particle|Overlay|Smudge|Spark', re.I), 'anim'),
    (re.compile(r'Weapon|SuperWeapon|Ion|Nuke|Weather|Lightning|Crate', re.I), 'superweapon'),
    (re.compile(r'Team|Trigger|Script|TaskForce', re.I), 'team'),
    (re.compile(r'Network|Socket|Winsock|Packet|Session|Connect|Send|Recv|WOL', re.I), 'network'),
    (re.compile(r'Vtable|Constructor|Destructor|DDTor|CTOR|DTOR', re.I), 'vtable'),
    (re.compile(r'Mix|Blowfish|Crypto|Hash|Decrypt|Encrypt|CRC', re.I), 'crypto'),
    (re.compile(r'LinkedList|Vector|Array|List|Node|Queue|Stack|Alloc|Free|Heap|Pool|BitArray', re.I), 'containers'),
    (re.compile(r'Math|Arith|Compute|Calc|Sqrt|Dist|Dot|Cross|Matrix|Sin|Cos|Tan|Matrix3D|Matrix2D|Matrix3x4|Sincos', re.I), 'math'),
    (re.compile(r'File|Path|Dir|IO|Seek', re.I), 'fileio'),
    (re.compile(r'Timer|Time|Tick|Delay|Sleep|Countdown', re.I), 'timer'),
    (re.compile(r'Random|Rand|Seed', re.I), 'random'),
    (re.compile(r'Locomotor|Movement|Path|Navigate|Speed|Move(?!ment)', re.I), 'locomotor'),
    (re.compile(r'Radar|SpySat|Shroud|Fog|Reveal', re.I), 'radar'),
    (re.compile(r'String|Wide|Unicode|Char|sprintf|strcpy|strcat|strlen|strcmp|toupper|tolower|isdigit|isxdigit|Strncpy|Memory|Mem', re.I), 'string'),
    (re.compile(r'Object|Abstract|Techno|Foot|Radio|Mission|Request', re.I), 'object'),
    (re.compile(r'Debug|Log|atexit|Init|Deinit|LCWPipe|Compress|IPXInterface|Checksum', re.I), 'misc'),
    (re.compile(r'SHA1|SHA', re.I), 'math'),
]


def assign_module_for_sub(addr: str, decomp_entry: dict) -> str:
    """Assign a module tag based on callees/callers context.

    For sub_* functions, we look at the callers to infer context.
    """
    # Try callers first
    callers = decomp_entry.get('callers', [])
    if callers:
        for caller_addr in callers:
            # Try to find caller name in functions.json
            # But since callers are just addresses, we use a simple heuristic:
            # look at the address range to guess module
            caller_int = int(caller_addr, 16) if isinstance(caller_addr, str) else caller_addr
            # Common caller ranges
            if 0x7B0000 <= caller_int <= 0x7C0000:
                return 'render'
            if 0x6E0000 <= caller_int <= 0x700000:
                return 'object'
            if 0x700000 <= caller_int <= 0x720000:
                return 'building'
            if 0x720000 <= caller_int <= 0x740000:
                return 'unit'
            if 0x740000 <= caller_int <= 0x760000:
                return 'infantry'
            if 0x760000 <= caller_int <= 0x780000:
                return 'aircraft'

    # Fallback: address ranges
    addr_int = int(addr, 16)
    if 0x400000 <= addr_int <= 0x410000:
        return 'audio'
    if 0x410000 <= addr_int <= 0x42A000:
        return 'core'
    if 0x4B0000 <= addr_int <= 0x4D0000:
        return 'ui'
    if 0x4D0000 <= addr_int <= 0x500000:
        return 'object'
    if 0x5F0000 <= addr_int <= 0x610000:
        return 'core'
    if 0x6E0000 <= addr_int <= 0x700000:
        return 'object'
    if 0x700000 <= addr_int <= 0x720000:
        return 'building'
    if 0x720000 <= addr_int <= 0x740000:
        return 'unit'
    if 0x740000 <= addr_int <= 0x760000:
        return 'infantry'
    if 0x760000 <= addr_int <= 0x780000:
        return 'aircraft'
    if 0x780000 <= addr_int <= 0x7A0000:
        return 'entity'
    if 0x7A0000 <= addr_int <= 0x7B0000:
        return 'system'
    if 0x7B0000 <= addr_int <= 0x7C0000:
        return 'render'
    if 0x7C0000 <= addr_int <= 0x7D0000:
        return 'misc'

    return 'core'


def generate_sub_decls(missing, fj_by_addr, sample=None):
    """Generate declaration lines for each missing sub_* function."""
    by_module = defaultdict(list)
    processed = 0

    for addr, name, fentry in missing:
        if sample and processed >= sample:
            break

        decomp_entry = load_sub_decompile(addr)
        sig = infer_signature(fentry, decomp_entry)

        # For thiscall free functions, default to __stdcall
        cc_str = sig['cc']
        if cc_str == '__thiscall':
            cc_str = '__stdcall'

        decl = format_declaration(sig['ret'], cc_str, name, sig['params'])
        comment = f'// {addr}'

        module = assign_module_for_sub(addr, decomp_entry)
        by_module[module].append(f'  {decl}; {comment}')
        processed += 1

    return by_module


def build_output(by_module, total_count):
    """Build the full hpp file content."""
    parts = [
        '#pragma once',
        '',
        '#include <cstdint>',
        '',
        f'// Auto-generated by gen_sub_decls.py',
        f'// {total_count} sub_* function declarations',
        '// DO NOT EDIT MANUALLY',
        '',
    ]

    for module in sorted(by_module.keys()):
        entries = by_module[module]
        parts.append(f'// ── {module} ({len(entries)} functions) ──')
        parts.extend(entries)
        parts.append('')

    return '\n'.join(parts)


def main():
    parser = argparse.ArgumentParser(description='Generate sub_* function declarations')
    parser.add_argument('--dry-run', action='store_true',
                        help='Print to stdout instead of writing file')
    parser.add_argument('--sample', type=int, default=None,
                        help='Only process first N functions (for testing)')
    args = parser.parse_args()

    print(f'Loading data...', file=sys.stderr)
    fj, crt_set, hpp_addrs = load_data()

    # Build address lookup for functions.json
    fj_by_addr = {f['address'].upper(): f for f in fj['functions']}

    print(f'  functions.json: {len(fj["functions"])} entries', file=sys.stderr)
    print(f'  CRT exclusions: {len(crt_set)} addresses', file=sys.stderr)
    print(f'  HPP references: {len(hpp_addrs)} unique addresses', file=sys.stderr)

    missing = identify_missing_subs(fj, crt_set, hpp_addrs)
    print(f'  Missing sub_* functions: {len(missing)}', file=sys.stderr)

    total = len(missing)
    if args.sample:
        missing = missing[:args.sample]
        total = args.sample
        print(f'  Sampled: {total}', file=sys.stderr)

    by_module = generate_sub_decls(missing, fj_by_addr, sample=args.sample)
    output = build_output(by_module, total)

    if args.dry_run:
        print(output)
    else:
        OUTPUT_HPP.parent.mkdir(parents=True, exist_ok=True)
        with open(OUTPUT_HPP, 'w', encoding='utf-8', newline='\n') as f:
            f.write(output)
            f.write('\n')
        print(f'Wrote {OUTPUT_HPP} ({total} declarations)', file=sys.stderr)


if __name__ == '__main__':
    main()
