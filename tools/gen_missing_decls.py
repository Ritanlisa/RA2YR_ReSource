#!/usr/bin/env python3
"""
gen_missing_decls.py — Generate hpp declarations for named free functions
missing from the src/ tree.

Reads functions.json → identifies named (non-sub_) free functions not yet
declared in src/** hpp files → looks up signatures in ida_function_db.json
→ generates src/_generated/named_free_decls.hpp.

Idempotent: re-running produces identical output (sorted by address).

Usage:
  python tools/gen_missing_decls.py                    # full generation
  python tools/gen_missing_decls.py --dry-run          # print to stdout only
  python tools/gen_missing_decls.py --sample 10        # sample first 10
  python tools/gen_missing_decls.py --dry-run --sample 10
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
IDA_DB_JSON = PROJECT_ROOT / "tools" / "ida_function_db.json"
CRT_EXCL_JSON = PROJECT_ROOT / "tools" / "fr_crt_exclusions.json"
OUTPUT_HPP = PROJECT_ROOT / "src" / "_generated" / "named_free_decls.hpp"

# ── Type mapping ────────────────────────────────────────────────────────────

TYPE_MAP = {
    "_DWORD": "int",
    "_BYTE": "uint8_t",
    "_WORD": "uint16_t",
    "BOOL": "int",
    "void *": "void*",
    "float": "float",
    "double": "double",
    "int": "int",
    "char": "char",
    "char *": "char*",
    "const char *": "const char*",
    "void": "void",
    "unsigned int": "unsigned int",
    "unsigned short": "unsigned short",
    "unsigned char": "unsigned char",
    "long": "long",
    "unsigned long": "unsigned long",
    "short": "short",
    "size_t": "size_t",
    "wchar_t": "wchar_t",
    "__int64": "int64_t",
    "unsigned __int64": "uint64_t",
}

# CRT/internal patterns to skip in signatures
SKIP_PATTERNS = [
    re.compile(r'#\d+\s*\*__hidden\s+this'),
    re.compile(r'struct\s+Concurrency::'),
    re.compile(r'\(__cdecl\s*\*\s*\)\(void\)'),  # function pointers
]


def norm_type(t: str) -> str:
    """Map raw IDA type to a clean C++ type for declarations."""
    t = t.strip()
    # Handle const prefix
    is_const = t.startswith('const ')
    if is_const:
        t = t[6:].strip()

    if t in TYPE_MAP:
        result = TYPE_MAP[t]
        return f'const {result}' if is_const else result

    # Pointer types: _DWORD * → int*
    if '*' in t:
        base = t.replace('*', '').strip()
        if base in TYPE_MAP:
            result = TYPE_MAP[base] + '*'
            return f'const {result}' if is_const else result
        # Common pointer patterns
        if base == 'char':
            result = 'char*'
            return f'const {result}' if is_const else result
        if base == 'void':
            result = 'void*'
            return f'const {result}' if is_const else result
        # Struct/class pointers
        m = re.match(r'(?:struct|class|union)\s+(\w+)', base)
        if m:
            name = m.group(1)
            result = 'void*' if name.startswith('_') else f'{name}*'
            return f'const {result}' if is_const else result
        # Fallback for unrecognized pointer types
        result = 'int*'
        return f'const {result}' if is_const else result

    # Struct/class non-pointer
    m = re.match(r'(?:struct|class|union)\s+(\w+)', t)
    if m:
        name = m.group(1)
        return 'int' if name.startswith('_') else name

    # Fallback for unrecognized simple types
    if t in ('int', 'float', 'double', 'char', 'short', 'long',
             'void', 'bool', 'wchar_t', 'size_t', 'unsigned int',
             'unsigned short', 'unsigned char', 'unsigned long'):
        return t

    if re.match(r'^_?\w+$', t):
        return 'int'  # treat unknown word types as int
    return 'int'


def parse_signature(sig: str) -> dict:
    """Parse an IDA signature string into return_type, calling_convention, params."""
    if not sig or sig == 'unknown':
        return {'ret': 'int', 'cc': '__cdecl', 'params': ['int']}

    # Clean up CRT internal markers
    for pat in SKIP_PATTERNS:
        sig = pat.sub('', sig)

    sig = sig.strip()

    # Extract calling convention
    cc = '__cdecl'
    for cc_kw in ['__fastcall', '__stdcall', '__thiscall', '__cdecl']:
        if cc_kw in sig:
            cc = cc_kw
            break

    # Split at the calling convention keyword to get ret_type and params
    # Pattern: "ret_type __conv(params)"
    cc_pattern = r'(.*?)\s*' + re.escape(cc) + r'\s*\((.*)\)\s*$'
    m = re.match(cc_pattern, sig)
    if not m:
        # Try without calling convention: "ret_type(params)"
        m = re.match(r'^\s*(.*?)\s*\((.*)\)\s*$', sig)
        if m:
            ret_str = m.group(1).strip()
            params_str = m.group(2).strip()
        else:
            return {'ret': 'int', 'cc': '__cdecl', 'params': ['int']}
    else:
        ret_str = m.group(1).strip()
        params_str = m.group(2).strip()

    # Parse return type
    ret = norm_type(ret_str) if ret_str else 'int'
    if ret == 'unknown' or not ret:
        ret = 'int'

    # Parse parameters
    params = []
    if params_str and params_str not in ('void', ''):
        raw_params = [p.strip() for p in params_str.split(',')]
        for rp in raw_params:
            if not rp:
                continue
            # Handle "int this", "_DWORD *param", "int *", etc.
            # If the last "word" is '*' or '&', treat the whole thing as type (no name)
            # Otherwise, split by last space to separate type from name
            if rp.endswith('*') or rp.endswith('&'):
                # No name, just type — normalize the full string
                if '__hidden' not in rp:
                    params.append(norm_type(rp))
            else:
                parts = rp.rsplit(None, 1)
                if len(parts) == 2:
                    ptype, pname = parts
                    if '__hidden' in ptype:
                        continue
                    # If pname has leading * or &, move to type
                    # "char *Source" → ptype="char", pname="*Source" → fix to ptype="char *"
                    stars = ''
                    while pname and pname[0] in ('*', '&'):
                        stars += pname[0]
                        pname = pname[1:]
                    if pname.replace('*','').replace('&','').strip() == '':
                        # All symbols, no name — use full thing as type
                        params.append(norm_type(rp))
                    else:
                        params.append(norm_type(ptype + ' ' + stars))
                else:
                    if '__hidden' not in parts[0]:
                        params.append(norm_type(parts[0]))

    return {'ret': ret, 'cc': cc, 'params': params}


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
    """Load all input data and return prepared structures."""
    with open(FUNCTIONS_JSON, 'r', encoding='utf-8') as f:
        fj = json.load(f)

    with open(IDA_DB_JSON, 'r', encoding='utf-8') as f:
        ida_db = json.load(f)

    with open(CRT_EXCL_JSON, 'r', encoding='utf-8') as f:
        crt_excl = json.load(f)

    crt_set = set(norm_addr(addr) for addr in crt_excl['excluded_addresses'])
    hpp_addrs = load_hpp_addresses()

    return fj, ida_db, crt_set, hpp_addrs


def norm_addr(a: str) -> str:
    """Normalize hex address to '0x' + uppercase hex (matching ida_db key format)."""
    a = a.strip()
    if a.lower().startswith('0x'):
        return '0x' + a[2:].upper()
    return a.upper()


def identify_missing_named_free(fj, crt_set, hpp_addrs):
    """Return list of (address, name, functions_json_entry) for missing named free functions."""
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
        # Exclude member functions
        if call.get('is_member', False):
            continue
        # Exclude sub_* functions
        if name.startswith('sub_') or not name:
            continue

        missing.append((addr, name, fentry))

    # Sort by address for determinism
    missing.sort(key=lambda x: int(x[0], 16))
    return missing


# ── Module grouping ─────────────────────────────────────────────────────────

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


def assign_module(name: str) -> str:
    """Assign a module tag based on function name."""
    for pattern, module in MODULE_PATTERNS:
        if pattern.search(name):
            return module
    return 'core'


def format_declaration(ret: str, cc: str, name: str, params: list) -> str:
    """Format a C++ function declaration."""
    conv_prefix = ''
    if cc == '__stdcall':
        conv_prefix = '__stdcall '
    elif cc == '__fastcall':
        conv_prefix = '__fastcall '
    elif cc == '__cdecl':
        conv_prefix = '__cdecl '

    param_str = ', '.join(params) if params else 'void'

    return f'{ret} {conv_prefix}{name}({param_str})'


def generate_named_decls(missing, ida_db, sample=None):
    """Generate declaration lines for each missing function."""
    lines = []
    by_module = defaultdict(list)

    for addr, name, fentry in missing:
        if sample and len(lines) >= sample:
            break

        # Look up in ida_function_db
        ida_entry = ida_db.get(addr, None)

        if ida_entry:
            sig = ida_entry.get('signature', '')
            parsed = parse_signature(sig)
        else:
            # Fallback: use functions.json call info
            call = fentry.get('call', {}) or {}
            conv_map = {
                'thiscall': '__thiscall',
                'fastcall': '__fastcall',
                'stdcall': '__stdcall',
                'cdecl': '__cdecl',
            }
            cc = conv_map.get(call.get('convention', ''), '__cdecl')
            ret = 'int' if call.get('return_bytes', 4) else 'void'
            param_count = max(0, call.get('param_bytes', 0) // 4)
            parsed = {'ret': ret, 'cc': cc, 'params': ['int'] * param_count}

        # Get calling convention string
        cc_str = parsed['cc']

        # For thiscall free functions, use __stdcall (no this pointer)
        if cc_str == '__thiscall':
            cc_str = '__stdcall'

        decl = format_declaration(parsed['ret'], cc_str, name, parsed['params'])
        comment = f'// {addr}'

        module = assign_module(name)
        by_module[module].append(f'  {decl}; {comment}')

    return by_module


def build_output(by_module, total_count):
    """Build the full hpp file content."""
    parts = [
        '#pragma once',
        '',
        '#include <cstdint>',
        '',
        f'// Auto-generated by gen_missing_decls.py',
        f'// {total_count} named free function declarations',
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
    parser = argparse.ArgumentParser(description='Generate missing free function declarations')
    parser.add_argument('--dry-run', action='store_true',
                        help='Print to stdout instead of writing file')
    parser.add_argument('--sample', type=int, default=None,
                        help='Only process first N functions (for testing)')
    args = parser.parse_args()

    print(f'Loading data...', file=sys.stderr)
    fj, ida_db, crt_set, hpp_addrs = load_data()

    print(f'  functions.json: {len(fj["functions"])} entries', file=sys.stderr)
    print(f'  ida_function_db.json: {len(ida_db)} entries', file=sys.stderr)
    print(f'  CRT exclusions: {len(crt_set)} addresses', file=sys.stderr)
    print(f'  HPP references: {len(hpp_addrs)} unique addresses', file=sys.stderr)

    missing = identify_missing_named_free(fj, crt_set, hpp_addrs)
    print(f'  Missing named free functions: {len(missing)}', file=sys.stderr)

    total = len(missing)
    if args.sample:
        missing = missing[:args.sample]
        total = args.sample
        print(f'  Sampled: {total}', file=sys.stderr)

    by_module = generate_named_decls(missing, ida_db, sample=args.sample)
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
