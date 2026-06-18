#!/usr/bin/env python3
"""
name_from_decompile.py — Auto-name ~5,459 sub_* functions from IDA decompiled pseudocode.

Reads each sub_* decompile JSON from tools/sub_decompiles/, extracts naming clues from
callee names, calling convention, string references, and code patterns, then generates
PascalCase (global) or ClassName::Method (member) naming proposals.

Output: tools/sub_naming_proposals.json

Heuristic priority (first match wins):
  1. Wrapper/Thunk: body is just calling another function + return
  2. Vtable dispatch: *(this+offset)(args...) → member function
  3. Field accessor (this+N read/write pattern)
  4. Callee domain + operation inference
  5. Known constant returns (E_FAIL, S_OK, etc.)
  6. Arithmetic/math operations
  7. Fallback: generic from caller context
  8. Last resort: SubXXXXXX (address-based, for truly unidentifiable)
"""

import json
import re
import glob
import os
from collections import Counter
from pathlib import Path

DECOMPILES_DIR = Path(__file__).parent / "sub_decompiles"
FUNCTIONS_JSON = Path(__file__).parent.parent / "injectFunctionTest" / "functions.json"
OUTPUT_JSON = Path(__file__).parent / "sub_naming_proposals.json"

STRIP_CTRL_RE = re.compile(r'[\u0001-\u001f]+')
# Strip IDA internal hex position markers: (00000000XXXXXXXX patterns
# These always start with (00000000 followed by 7-8 hex digits
STRIP_HEX_MARKER_RE = re.compile(r'\(0{8}[0-9A-Fa-f]{7,8}')
WS_RE = re.compile(r'\s+')

KNOWN_CONSTANTS = {
    -2147221504: 'Fail',
    -2147221503: 'NotImpl',
    -2147467263: 'NotImpl',
    0: 'Zero',
    1: 'One',
    -1: 'NegativeOne',
}

VERBS = [
    'Get', 'Set', 'Init', 'Create', 'Destroy', 'Delete', 'Remove', 'Add',
    'Insert', 'Append', 'Prepend', 'Update', 'Clear', 'Reset', 'Load',
    'Save', 'Read', 'Write', 'Open', 'Close', 'Alloc', 'Free', 'Copy',
    'Move', 'Find', 'Search', 'Sort', 'Compare', 'Check', 'Test', 'Validate',
    'Parse', 'Format', 'Convert', 'Compute', 'Calc', 'Draw', 'Render',
    'Play', 'Stop', 'Pause', 'Resume', 'Send', 'Recv', 'Connect', 'Disconnect',
    'Lock', 'Unlock', 'Acquire', 'Release', 'Push', 'Pop', 'Enqueue', 'Dequeue',
    'Encrypt', 'Decrypt', 'Compress', 'Decompress', 'Hash', 'Sign', 'Verify',
    'Is', 'Can', 'Has', 'Should', 'Will',
    'Start', 'End', 'Begin', 'Finish', 'Setup', 'Teardown', 'Shutdown',
    'Request', 'Release', 'Obtain', 'Return', 'Call', 'Invoke', 'Dispatch',
    'Register', 'Unregister', 'Subscribe', 'Unsubscribe', 'Notify',
    'Map', 'Unmap', 'Blit', 'Flip', 'Fill', 'Line', 'Rect', 'Ellipse',
    'Arc', 'Poly', 'Text', 'String', 'Mix', 'Filter', 'Sample', 'Buffer',
    'Stream', 'Channel', 'Playback', 'Capture', 'Record', 'Seek', 'Tell',
    'Rewind', 'FastForward', 'Merge', 'Split', 'Join', 'Expand', 'Shrink',
    'Schedule', 'Cancel', 'Execute', 'Run', 'Fetch', 'Store', 'Cache',
    'Flush', 'Sync', 'Broadcast', 'Multicast', 'Listen', 'Accept',
]

NOUNS_PRIORITY = [
    'Audio', 'Surface', 'Mixer', 'Buffer', 'Stream', 'Channel', 'Sample',
    'File', 'Mix', 'Ini', 'Map', 'Cell', 'Object', 'Unit', 'Infantry',
    'Building', 'Aircraft', 'Bullet', 'Particle', 'Anim', 'Overlay',
    'House', 'Super', 'Team', 'Trigger', 'Script', 'Campaign',
    'Weapon', 'Warhead', 'Armor', 'Radar', 'Network', 'Socket', 'Packet',
    'Session', 'Dialog', 'Gadget', 'Button', 'ListBox', 'Mouse', 'Key',
    'Timer', 'Voxel', 'SHP', 'BINK', 'Palette', 'Pixel', 'Draw', 'Blit',
    'Render', 'AudioQueue', 'LinkedList', 'AudioStream', 'Voc',
]


def extract_verb(name):
    for verb in sorted(VERBS, key=len, reverse=True):
        if name.startswith(verb):
            return verb
    return None


def extract_noun_from_name(name):
    if '::' in name:
        cls = name.split('::')[0]
        for suffix in ['Class', 'Type', 'Queue', 'List', 'Stream', 'Mixer', 'Channel']:
            if cls.endswith(suffix):
                return cls[:-len(suffix)]
        return cls
    for noun in NOUNS_PRIORITY:
        if noun in name:
            return noun
    return None


def strip_markup(raw):
    text = STRIP_CTRL_RE.sub('', raw)
    text = STRIP_HEX_MARKER_RE.sub('', text)
    text = WS_RE.sub(' ', text)
    return text.strip()


def build_name_set(funcs_lookup):
    names = set()
    for name in funcs_lookup.values():
        if name and not name.startswith('sub_') and not name.startswith('??') and len(name) > 3:
            names.add(name)
    return names


def extract_cc(clean_text):
    if '__thiscall' in clean_text:
        return 'thiscall'
    if '__fastcall' in clean_text:
        return 'fastcall'
    if '__stdcall' in clean_text:
        return 'stdcall'
    if '__cdecl' in clean_text:
        return 'cdecl'
    if re.search(r'\bthis\b', clean_text):
        return 'thiscall'
    return 'unknown'


def extract_inline_calls(clean_text, known_names):
    """Find known function names called in pseudocode. Uses substring search."""
    found = []
    for name in known_names:
        pos = clean_text.find(name)
        if pos < 0:
            continue
        after = clean_text[pos + len(name):].lstrip()
        if after.startswith('('):
            found.append(name)
    return found


def extract_vtable_idx(clean_text):
    m = re.search(r'\(\s*\*\s*\([^)]*\+\s*(\d+)\s*\)[\s*]*\)\s*\(', clean_text)
    if m:
        offset = int(m.group(1))
        if 0 < offset < 0xFFFF and offset % 4 == 0:
            return offset // 4
    return None


def extract_field_access(clean_text):
    m = re.search(r'return\s+\*\s*\(\s*\w+\s*\+\s*(\d+)\s*\)', clean_text)
    if m:
        return ('get', int(m.group(1)))
    m = re.search(r'\*\s*\(\s*\w+\s*\+\s*(\d+)\s*\)\s*=', clean_text)
    if m:
        return ('set', int(m.group(1)))
    return None


def extract_constant_return(clean_text):
    m = re.search(r'return\s+(-?\d+)', clean_text)
    if m:
        val = int(m.group(1))
        if val in KNOWN_CONSTANTS:
            return KNOWN_CONSTANTS[val]
        if val < 0 and val > -0x80000000:
            return f'N{abs(val)}'
    return None


def count_ops(text):
    ops = len(re.findall(r'[+\-*/&|^%~]', text))
    calls = len(re.findall(r'\w+\s*\(', text))
    return ops, calls


def is_math_heavy(clean_text):
    ops, calls = count_ops(clean_text)
    has_float = bool(re.search(r'\bfloat\b|\bdouble\b|fld|fmul|fadd|fdiv|fstp', clean_text, re.IGNORECASE))
    if ops >= 4 and calls <= 2:
        return 'arithmetic'
    if has_float:
        return 'float'
    return None


def to_pascal(words):
    result = []
    for w in words:
        w = re.sub(r'[^a-zA-Z0-9]', '', w)
        if w and w[0].isalpha():
            result.append(w[0].upper() + w[1:])
        elif w:
            result.append(w)
    return ''.join(result)


def resolve_callee_info(callee_names, caller_names):
    domains = Counter()
    class_names = set()
    verbs_found = []

    for name in callee_names:
        if '::' in name:
            cls = name.split('::')[0]
            class_names.add(cls)
            for suffix in ['Class', 'Type', 'Queue', 'List', 'Stream', 'Mixer', 'Channel']:
                if cls.endswith(suffix):
                    domains[cls[:-len(suffix)]] += 2
                    break
            else:
                domains[cls] += 1
            method = name.split('::')[-1]
            verb = extract_verb(method)
            if verb:
                verbs_found.append(verb)
        else:
            noun = extract_noun_from_name(name)
            if noun:
                domains[noun] += 1
            verb = extract_verb(name)
            if verb:
                verbs_found.append(verb)

    for name in caller_names:
        if '::' in name:
            cls = name.split('::')[0]
            class_names.add(cls)
            for suffix in ['Class', 'Type', 'Queue', 'List', 'Stream', 'Mixer', 'Channel']:
                if cls.endswith(suffix):
                    domains[cls[:-len(suffix)]] += 1
                    break

    domain = domains.most_common(1)[0][0] if domains else None
    class_name = list(class_names)[0] if class_names else None
    verb = verbs_found[0] if verbs_found else None

    return domain, class_name, verb


def generate_name(clean_text, callee_names, caller_names, cc, funcs_lookup):
    # Rule 1: Wrapper
    if len(callee_names) == 1 and re.search(r'^\s*return\s+\w+\s*\(', clean_text):
        target = callee_names[0]
        # Filter out operator new/delete mangled names
        if target.startswith('??') or target.startswith('sub_'):
            return "ThunkDispatch"
        suffix = target.split('::')[-1] if '::' in target else target
        if suffix and not suffix.startswith('sub_') and not suffix.startswith('??'):
            return f"Call{suffix}"
        elif '::' in target:
            parts = target.split('::')
            return f"Call{parts[0]}{parts[-1]}"
        return f"Call{target.replace('_', '')}"

    domain, class_name, verb = resolve_callee_info(callee_names, caller_names)

    if cc == 'thiscall':
        fa = extract_field_access(clean_text)
        if fa:
            op, offset = fa
            prefix = class_name + '::' if class_name else ''
            return f"{prefix}{'Get' if op == 'get' else 'Set'}Member{offset}"

        vtable_idx = extract_vtable_idx(clean_text)
        if vtable_idx is not None:
            if class_name and verb:
                return f"{class_name}::{verb}"
            elif class_name:
                return f"{class_name}::Virt{vtable_idx}"
            return f"VirtDispatch{vtable_idx}"

        if class_name:
            if verb:
                noun = domain if domain and domain != class_name else ''
                return f"{class_name}::{verb}{noun}"
            if callee_names:
                for cn in callee_names:
                    if '::' in cn:
                        method = cn.split('::')[-1]
                        verb2 = extract_verb(method)
                        if verb2:
                            return f"{class_name}::{verb2}"
                        return f"{class_name}::{method}"
                cn = callee_names[0]
                short = cn.split('::')[-1] if '::' in cn else cn
                return f"{class_name}::{to_pascal([short])}"
            return f"{class_name}::Method"

        if callee_names:
            cn = callee_names[0]
            short = cn.split('::')[-1] if '::' in cn else cn
            verb = extract_verb(short)
            if verb:
                return f"Method{verb}"
            return f"Method{to_pascal([short])}"
        return "MethodStub"

    # --- Global functions ---

    const_name = extract_constant_return(clean_text)
    if const_name and len(clean_text) < 200:
        if callee_names:
            domain, _, _ = resolve_callee_info(callee_names, caller_names)
            if domain:
                return f"Return{const_name}{domain}"
        return f"Return{const_name}"

    if callee_names:
        domain, class_name, verb = resolve_callee_info(callee_names, caller_names)

        if verb and domain:
            return to_pascal([verb, domain])
        if verb and class_name:
            return to_pascal([verb, class_name])
        if domain:
            if re.search(r'\b(if|while|for|switch)\b', clean_text):
                return f"{domain}Process"
            if len(callee_names) >= 3:
                return f"{domain}Manager"
            if len(callee_names) == 2:
                return f"{domain}Dispatch"
            target = callee_names[0]
            short = target.split('::')[-1] if '::' in target else target
            if short.startswith('sub_') or short.startswith('??'):
                return f"{domain}Op"
            return f"{domain}{short}"

        if verb:
            return f"{verb}Stub"

        for cn in callee_names:
            if not cn.startswith('sub_') and not cn.startswith('??'):
                if '::' in cn:
                    parts = cn.split('::')
                    return f"Call{parts[0]}{parts[-1]}"
                return f"Call{cn}"

    math_type = is_math_heavy(clean_text)
    if math_type == 'float':
        return "FloatCompute"
    if math_type == 'arithmetic':
        return "ArithmeticCompute"

    if caller_names:
        for addr in caller_names[:3]:
            cn = funcs_lookup.get(addr.upper(), addr)
            if cn and not cn.startswith('sub_') and not cn.startswith('??'):
                if '::' in cn:
                    parts = cn.split('::')
                    return f"{parts[0]}{parts[-1]}Helper"
                return f"{cn}Helper"

    # Pattern: global variable initialization
    # dbl_X = constant; or dbl_X = dbl_Y / 60.0
    if re.search(r'\bdbl_\w+\s*=\s*[\d.]+', clean_text):
        if '60.0' in clean_text:
            return "InitScale60"
        if '0.0174532925199433' in clean_text or '3.14159' in clean_text:
            return "InitDegToRad"
        if re.search(r'\bdbl_\w+\s*=\s*\d+\.\d+\s*\*\s*\d+\.\d+', clean_text):
            return "InitFloatProduct"
        return "InitFloatConst"
    
    # dword_X = 0; dword_X+4 = 0; (zero-init sequence)
    if re.search(r'\bdword_\w+\s*=\s*0\s*;', clean_text):
        if len(re.findall(r'\bdword_\w+\s*=\s*0', clean_text)) >= 2:
            return "ZeroInitGlobals"
        return "InitZero"
    
    # Generic global init (references dbl_ or dword_ globals)
    if re.search(r'\b(?:dbl_|dword_|flt_)\w+', clean_text) and len(clean_text) < 400:
        return "InitGlobal"

    m = re.search(r'return\s+(-?\w+)', clean_text)
    if m and len(clean_text) < 300:
        val = m.group(1)
        if val.isdigit() or (val.startswith('-') and val[1:].isdigit()):
            n = int(val)
            if n in KNOWN_CONSTANTS:
                return f"Return{KNOWN_CONSTANTS[n]}"
            return f"Return{n}"
        elif val == 'result':
            return "ReturnResult"
        return f"Return{to_pascal([val])}"

    return None


def process_file(filepath, funcs_lookup, known_names):
    try:
        with open(filepath, encoding='utf-8') as f:
            data = json.load(f)
    except Exception:
        return None

    address = data.get('address', '')
    name = data.get('name', '')
    pseudocode = data.get('pseudocode', '')
    callers_raw = data.get('callers', [])
    callees_raw = data.get('callees', [])

    if not name.startswith('sub_'):
        return None

    clean = strip_markup(pseudocode)
    if len(clean) < 10:
        return None

    callee_names = []
    for addr in callees_raw:
        aname = funcs_lookup.get(addr.upper(), addr)
        if aname and not aname.startswith('??'):  # skip mangled CRT names
            callee_names.append(aname)

    inline_names = extract_inline_calls(clean, known_names)
    all_callees = list(dict.fromkeys(callee_names + inline_names))
    # Filter out ?? names from inline too
    all_callees = [n for n in all_callees if not n.startswith('??')]

    caller_names = []
    for addr in callers_raw:
        aname = funcs_lookup.get(addr.upper(), addr)
        caller_names.append(aname)

    cc = extract_cc(clean)

    proposed = generate_name(clean, all_callees, caller_names, cc, funcs_lookup)

    if not proposed:
        short_addr = address.replace('0x', '')[-6:].upper()
        proposed = f"Sub{short_addr}"

    if '::' not in proposed:
        proposed = proposed.replace('_', '')
    else:
        # For member names, remove underscores from method part only
        parts = proposed.split('::')
        parts = [p.replace('_', '') for p in parts]
        proposed = '::'.join(parts)
    proposed = proposed.strip()
    if proposed and proposed[0].islower():
        proposed = proposed[0].upper() + proposed[1:]

    return {
        'address': address,
        'original_name': name,
        'proposed_name': proposed,
        'cc': cc,
        'callees': all_callees[:5],
        'callers': caller_names[:3],
    }


def main():
    print("=" * 60)
    print("name_from_decompile.py — Auto-naming sub_* functions")
    print("=" * 60)

    print(f"Loading {FUNCTIONS_JSON}...")
    with open(FUNCTIONS_JSON, encoding='utf-8') as f:
        data = json.load(f)

    funcs_lookup = {}
    for entry in data['functions']:
        addr = entry.get('address', '')
        name = entry.get('name', '')
        if addr:
            funcs_lookup[addr.upper()] = name

    known_names = set()
    for entry in data['functions']:
        name = entry.get('name', '')
        if name and not name.startswith('sub_') and not name.startswith('??') and len(name) > 3:
            known_names.add(name)
    print(f"  Loaded {len(funcs_lookup)} address entries, {len(known_names)} known names")

    hex_re = re.compile(r'^[0-9A-Fa-f]{8}\.json$')
    all_files = sorted(glob.glob(str(DECOMPILES_DIR / '*.json')))
    files = [f for f in all_files if hex_re.match(os.path.basename(f))]
    print(f"Found {len(files)} sub_decompile JSON files")

    proposals_raw = []
    stats = Counter()

    for i, filepath in enumerate(files):
        if (i + 1) % 500 == 0:
            print(f"  Processing... {i + 1}/{len(files)}, {len(proposals_raw)} proposals")

        result = process_file(filepath, funcs_lookup, known_names)
        if result:
            proposals_raw.append(result)
            stats['total'] += 1
        else:
            stats['skipped'] += 1

    print(f"\nProcessed {len(files)} files")
    print(f"  Proposals: {stats['total']}, Skipped: {stats['skipped']}")

    # Deduplication
    proposals_final = {}
    for p in proposals_raw:
        proposals_final[p['address']] = {
            'name': p['proposed_name'],
            'original': p['original_name'],
            'cc': p['cc'],
            'callees': p['callees'],
            'callers': p['callers'],
        }

    # Count duplicates
    name_count = Counter()
    for info in proposals_final.values():
        name_count[info['name']] += 1

    dup_names = {n for n, c in name_count.items() if c > 1}
    print(f"  Dup names: {len(dup_names)}")

    # Resolve: group by base name, append hex address suffix to duplicates
    name_groups = defaultdict(list)
    for addr, info in proposals_final.items():
        name_groups[info['name']].append(addr)

    for name, addrs in name_groups.items():
        if len(addrs) > 1:
            for idx, addr in enumerate(addrs):
                if idx == 0:
                    proposals_final[addr]['name'] = name  # keep first
                else:
                    # Use last 6 hex digits as unique suffix (preserves PascalCase)
                    short = addr.replace('0x', '')[-6:].upper()
                    proposals_final[addr]['name'] = f"{name}{short}"

    # Final dedup check
    fc = Counter()
    for info in proposals_final.values():
        fc[info['name']] += 1
    final_dupes = sum(1 for c in fc.values() if c > 1)
    if final_dupes > 0:
        print(f"  Force-dedup remaining {final_dupes}")
        seen2 = {}
        for addr in sorted(proposals_final.keys()):
            info = proposals_final[addr]
            nm = info['name']
            if nm in seen2:
                seen2[nm] += 1
                short = addr.replace('0x', '')[-6:].upper()
                info['name'] = f"{nm}{short}"
            else:
                seen2[nm] = 0
        fc2 = Counter()
        for info in proposals_final.values():
            fc2[info['name']] += 1
        final_dupes = sum(1 for c in fc2.values() if c > 1)
        print(f"  After force: {final_dupes}")

    # Stats
    pascal_re = re.compile(r'^[A-Z][A-Za-z0-9]*(?:::[A-Z][A-Za-z0-9_]+)?$')
    pascal = sum(1 for info in proposals_final.values() if pascal_re.match(info['name']))
    member_re = re.compile(r'^[A-Z][A-Za-z0-9]*::[A-Z]')
    members = sum(1 for info in proposals_final.values() if member_re.match(info['name']))
    subs = sum(1 for info in proposals_final.values() if info['name'].startswith('Sub'))
    pct = pascal / len(proposals_final) * 100 if proposals_final else 0

    print(f"\n  Final: {len(proposals_final)}")
    print(f"  PascalCase: {pascal} ({pct:.1f}%)")
    print(f"  Members (::): {members}")
    print(f"  SubXXXXXX: {subs}")
    print(f"  Duplicates: {final_dupes}")

    output = {
        '_meta': {
            'tool': 'name_from_decompile.py',
            'total_processed': len(files),
            'total_proposed': len(proposals_final),
            'pascal_case': pascal,
            'pascal_pct': round(pct, 1),
            'member_count': members,
            'sub_fallback': subs,
            'duplicate_count': final_dupes,
        },
        'proposals': {addr: info['name'] for addr, info in proposals_final.items()},
        'details': {addr: {
            'original': info['original'],
            'cc': info['cc'],
            'callees': info['callees'],
            'callers': info['callers'],
        } for addr, info in proposals_final.items()},
    }

    print(f"\nWriting {OUTPUT_JSON}...")
    with open(OUTPUT_JSON, 'w', encoding='utf-8') as f:
        json.dump(output, f, indent=2)

    print("Done!")
    return proposals_final


if __name__ == '__main__':
    from collections import defaultdict
    main()
