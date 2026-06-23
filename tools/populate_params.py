#!/usr/bin/env python3
"""
populate_params.py - Populate call.params in functions.json from IDA param_types.

Sources:
  - tools/ida_function_db.json  (13,422 entries with param_types)
  - injectFunctionTest/functions.json.full.bak (19,067 entries with param_bytes)
  - injectFunctionTest/functions.json (target - params[] currently empty)

Mapping:
  - _DWORD -> int, _BYTE -> uint8_t, _WORD -> uint16_t
  - int *, _DWORD * -> int*
  - char *, const char * -> char*, const char*
  - void * -> void*
  - float -> float, double -> double, BOOL -> int
  - Unknown types -> int
  - thiscall: skip first param (this pointer implicit in C++)
  - sub_* not in IDA DB: infer from param_bytes as all int
"""

import json
import re
import os
import sys
import argparse
from collections import Counter

# === Paths ===
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
IDA_DB_PATH = os.path.join(SCRIPT_DIR, "ida_function_db.json")
FUNCTIONS_JSON = os.path.join(PROJECT_DIR, "injectFunctionTest", "functions.json")
FUNCTIONS_BAK = os.path.join(PROJECT_DIR, "injectFunctionTest", "functions.json.full.bak")

# === Type mapping ===
def parse_param_type(raw_type: str) -> str:
    """
    Parse an IDA param type string and return normalized C++ type.
    
    Examples:
      'int * this' -> 'int*'
      '_DWORD * arg0' -> 'int*'
      'const char * arg1' -> 'const char*'
      'float arg0' -> 'float'
      '__int64 arg0' -> 'int64_t'
      '_DWORD ** arg1' -> 'int**'
      'int (__thiscall *)(int) arg3' -> 'void*'  # function pointer
      'struct #355 * arg1' -> 'void*'
    """
    # Function pointer pattern: contains '(*)' or '(__'
    if '(*)' in raw_type or ('(__' in raw_type and '*)' in raw_type):
        return 'void*'
    
    # Split: find the last word (the parameter name)
    parts = raw_type.strip().split()
    if len(parts) <= 1:
        # Just a type like 'int' without param name, or empty
        if len(parts) == 0:
            return 'int'
        type_str = parts[0]
    else:
        # Last token is the parameter name (e.g., 'this', 'arg0', 'Source')
        type_str = ' '.join(parts[:-1])
    
    # Normalize whitespace
    type_str = ' '.join(type_str.split())
    
    # Handle pointer depth: count * at the end
    ptr_match = re.match(r'^(.*?)(\s*\*+)$', type_str)
    if ptr_match:
        base = ptr_match.group(1).strip()
        stars = re.sub(r'\s+', '', ptr_match.group(2))  # e.g., " * *" -> "**"
    else:
        base = type_str.strip()
        stars = ''
    
    # Map base type
    mapped = map_base_type(base)
    
    return mapped + stars

def map_base_type(base: str) -> str:
    """Map an IDA base type to C++ type."""
    # Remove const qualifier for mapping (will re-add if present)
    is_const = base.startswith('const ')
    clean = base[6:] if is_const else base
    
    # Direct mappings
    mapping = {
        '_DWORD': 'int',
        '_BYTE': 'uint8_t',
        '_WORD': 'uint16_t',
        '_QWORD': 'int64_t',        # 64-bit data word
        '_LDOUBLE': 'double',       # long double
        '_TBYTE': 'double',         # 80-bit float
        '_PVFV': 'void*',           # pointer to void function
        '_UNKNOWN': 'void*',
        '__int64': 'int64_t',
        '__int16': 'int16_t',
        '__int8': 'int8_t',
        '__m64': 'int64_t',         # MMX 64-bit
        'unsigned __int64': 'uint64_t',
        'unsigned __int16': 'uint16_t',
        'unsigned __int8': 'uint8_t',
        'unsigned int': 'unsigned int',
        'unsigned': 'unsigned int',
        'unsigned __int32': 'unsigned int',
        'signed int': 'int',
        'signed __int16': 'int16_t',
        'int': 'int',
        'char': 'char',
        'float': 'float',
        'double': 'double',
        'bool': 'bool',
        'BOOL': 'int',
        'void': 'void',
        'long': 'int',
        'unsigned long': 'unsigned int',
        'long double': 'double',
        'size_t': 'unsigned int',
        'time_t': 'int',
        '__time32_t': 'int',
    }
    
    # String aliases
    string_types = {
        'const char': 'const char',
        'const unsigned __int8': 'const uint8_t',
        'const unsigned char': 'const uint8_t',
    }
    
    # Check direct mappings
    if clean in mapping:
        result = mapping[clean]
    elif clean.startswith('#'):
        # Unknown numbered type
        result = 'int'
    elif clean.startswith('struct '):
        # Unknown struct -> void*
        result = 'void'
    elif clean == 'FILE':
        result = 'void'
    elif clean == 'WebBrowser':
        result = 'void'
    elif clean in string_types:
        result = string_types[clean]
    elif clean.startswith('const #'):
        result = 'const int'
    elif clean.startswith('const struct '):
        result = 'const void'
    elif ' (__' in clean or '(*)' in clean:
        # Function pointer type
        result = 'void'
    else:
        # Unknown, default to int
        result = 'int'
    
    if is_const and not result.startswith('const '):
        result = 'const ' + result
    
    return result

# === Main ===
def load_ida_db():
    """Load IDA function DB, normalize keys to lowercase."""
    with open(IDA_DB_PATH, 'r', encoding='utf-8') as f:
        raw = json.load(f)
    # Normalize keys to lowercase for case-insensitive matching
    return {k.lower(): v for k, v in raw.items()}

def load_functions_json():
    """Load functions.json."""
    with open(FUNCTIONS_JSON, 'r', encoding='utf-8') as f:
        return json.load(f)

def load_functions_bak():
    """Load functions.json.full.bak, build address->entry map."""
    with open(FUNCTIONS_BAK, 'r', encoding='utf-8') as f:
        raw = json.load(f)
    return {e['address']: e for e in raw['functions']}

def populate(params_only=False, apply=True):
    """Main populate function."""
    print("Loading IDA function DB...")
    ida_db = load_ida_db()
    print(f"  {len(ida_db)} IDA DB entries loaded")
    
    print("Loading functions.json...")
    functions_data = load_functions_json()
    funcs = functions_data['functions']
    print(f"  {len(funcs)} functions loaded")
    
    print("Loading functions.json.full.bak for param_bytes fallback...")
    bak_map = load_functions_bak()
    print(f"  {len(bak_map)} backup entries loaded")
    
    # Stats
    stats = Counter()
    stats['total'] = len(funcs)
    stats['from_ida'] = 0
    stats['from_param_bytes'] = 0
    stats['no_params'] = 0
    stats['this_call_skipped'] = 0
    stats['type_mapping_used'] = Counter()
    
    for func in funcs:
        addr = func['address']
        conv = func['call'].get('convention', 'unknown')
        
        # Try IDA DB lookup
        ida_entry = ida_db.get(addr)
        
        if ida_entry is not None:
            # Found in IDA DB - use param_types
            param_types = ida_entry.get('param_types', [])
            
            # For thiscall, skip the first param (this pointer)
            if conv == 'thiscall' and param_types:
                param_types = param_types[1:]  # Skip this
                stats['this_call_skipped'] += 1
            
            # Map each param type
            params = []
            for i, pt in enumerate(param_types):
                cpp_type = parse_param_type(pt)
                stats['type_mapping_used'][cpp_type] += 1
                params.append({"type": cpp_type, "name": f"p{i}"})
            
            func['call']['params'] = params
            stats['from_ida'] += 1
            if not params:
                stats['no_params'] += 1
        else:
            # Not in IDA DB (sub_*, nullsub_, j_ thunks, etc.)
            # Use param_bytes from backup
            bak_entry = bak_map.get(addr)
            if bak_entry and 'param_bytes' in bak_entry.get('call', {}):
                param_bytes = bak_entry['call']['param_bytes']
                param_count = param_bytes // 4
                params = [{"type": "int", "name": f"p{i}"} for i in range(param_count)]
                func['call']['params'] = params
                stats['from_param_bytes'] += 1
                if not params:
                    stats['no_params'] += 1
            else:
                # No backup data either - leave empty
                func['call']['params'] = []
                stats['no_params'] += 1
    
    print(f"\n=== Population Results ===")
    print(f"  Total functions:     {stats['total']}")
    print(f"  From IDA DB:         {stats['from_ida']}")
    print(f"    thiscall skipped:   {stats['this_call_skipped']}")
    print(f"  From param_bytes:    {stats['from_param_bytes']}")
    print(f"  No params (empty):   {stats['no_params']}")
    
    # Sample type distribution
    print(f"\n  Top type mappings (from IDA):")
    for t, c in stats['type_mapping_used'].most_common(20):
        print(f"    {t}: {c}")
    
    if not apply:
        print("\n  [DRY RUN] Not writing functions.json")
        return functions_data
    
    # Write back
    print(f"\n  Writing functions.json ({len(funcs)} entries)...")
    with open(FUNCTIONS_JSON, 'w', encoding='utf-8') as f:
        json.dump(functions_data, f, indent=2)
    print(f"  Done. File size: {os.path.getsize(FUNCTIONS_JSON) / 1024 / 1024:.1f} MB")
    
    return functions_data

def verify(functions_data):
    """Verify population quality against IDA DB param_count."""
    import random
    random.seed(42)
    
    funcs = functions_data['functions']
    ida_db = load_ida_db()
    bak_map = load_functions_bak()
    
    # Sample 100 random entries
    sample = random.sample(funcs, min(100, len(funcs)))
    
    # Track mismatches against IDA DB
    ida_mismatches = []
    bak_mismatches = []
    
    for func in sample:
        addr = func['address']
        params = func['call'].get('params', [])
        conv = func['call'].get('convention', 'unknown')
        actual_count = len(params)
        
        # Verify against IDA DB if available
        ida_entry = ida_db.get(addr)
        if ida_entry:
            ida_param_count = ida_entry.get('param_count', 0)
            if conv == 'thiscall' and ida_param_count > 0:
                # IDA includes 'this' in param_count; we skip it
                expected = ida_param_count - 1
            else:
                expected = ida_param_count
            
            if actual_count != expected:
                ida_mismatches.append((addr, func['name'], conv, actual_count, expected))
        
        # Verify against backup param_bytes (for sub_* fallback only)
        bak_entry = bak_map.get(addr)
        if bak_entry and 'param_bytes' in bak_entry.get('call', {}):
            pb = bak_entry['call']['param_bytes']
            # For sub_* fallback, we use simple pb//4 (no thiscall adjustment)
            # since we can't distinguish 'this' from real params without IDA data
            expected_pb = pb // 4
            
            # Only check non-IDA entries (sub_* fallback) against param_bytes
            if ida_entry is None and actual_count != expected_pb:
                bak_mismatches.append((addr, func['name'], conv, actual_count, expected_pb, pb))
    
    if ida_mismatches:
        print(f"\n  WARNING: {len(ida_mismatches)} IDA param_count mismatches in spot check:")
        for e in ida_mismatches[:10]:
            print(f"    {e[0]} {e[1]}: {e[3]} params vs {e[4]} expected (IDA, convention: {e[2]})")
    
    if bak_mismatches:
        print(f"\n  WARNING: {len(bak_mismatches)} param_bytes mismatches (sub_* only):")
        for e in bak_mismatches[:10]:
            print(f"    {e[0]} {e[1]}: {e[3]} params vs {e[4]} expected (pb={e[5]}, convention: {e[2]})")
    
    if not ida_mismatches and not bak_mismatches:
        print(f"\n  SPOT CHECK PASSED: 0 mismatches in {len(sample)} random samples")
    
    # Show sample entries
    print(f"\n  Sample entries:")
    for func in sample[:8]:
        addr = func['address']
        params = func['call'].get('params', [])
        conv = func['call'].get('convention', '?')
        print(f"    {addr} {func['name']} [{conv}] -> {params}")
    
    # Summary stats
    total_params = sum(len(f['call'].get('params', [])) for f in funcs)
    has_params = sum(1 for f in funcs if len(f['call'].get('params', [])) > 0)
    print(f"\n  Overall stats:")
    print(f"    Functions with params: {has_params}/{len(funcs)} ({100*has_params/len(funcs):.1f}%)")
    print(f"    Total param entries:   {total_params}")

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Populate call.params in functions.json')
    parser.add_argument('--apply', action='store_true', help='Apply changes (default: dry run)')
    parser.add_argument('--verify-only', action='store_true', help='Only verify existing data')
    args = parser.parse_args()
    
    if args.verify_only:
        data = load_functions_json()
        verify(data)
    else:
        data = populate(apply=args.apply)
        verify(data)
