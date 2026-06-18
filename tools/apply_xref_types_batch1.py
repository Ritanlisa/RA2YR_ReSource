#!/usr/bin/env python3
"""
Compare xref_analysis_batch1.json observed_type with type_db.json cpp_type.
- Upgrade confidence to xref_verified for all matches
- Correct types where xref evidence clearly contradicts
- Output a change report and updated type_db.json
"""

import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).parent.parent

def load_json(path):
    with open(path, 'r', encoding='utf-8') as f:
        return json.load(f)

def save_json(path, data):
    with open(path, 'w', encoding='utf-8') as f:
        json.dump(data, f, indent=2)

def is_pointer_type(cpp_type):
    """Check if cpp_type is a pointer type."""
    return '*' in cpp_type

def is_scalar_type(cpp_type):
    """Check if cpp_type is a scalar (int/bool/char/float)."""
    scalar_patterns = ['uint8_t', 'uint16_t', 'uint32_t', 'uint64_t',
                       'int8_t', 'int16_t', 'int32_t', 'int64_t',
                       'bool', 'char', 'float', 'double',
                       'DWORD', 'WORD', 'BYTE', 'size_t', 'HANDLE',
                       'LPCRITICAL_SECTION', 'LPSTR', 'LPCSTR']
    for p in scalar_patterns:
        if p in cpp_type:
            return True
    return False

def is_array_type(cpp_type):
    """Check if cpp_type is an array type."""
    return '[' in cpp_type

def is_float_type(cpp_type):
    """Check if cpp_type is a float type."""
    return 'float' in cpp_type or 'double' in cpp_type

def is_struct_type(cpp_type):
    """Check if cpp_type is a struct/class type."""
    # Exclude basic types, pointers to basic types
    basic = ['uint', 'int', 'bool', 'char', 'float', 'double', 'void', 'size_t',
             'DWORD', 'WORD', 'BYTE', 'HANDLE', 'LPCRITICAL_SECTION', 'LPSTR', 'LPCSTR']
    if is_pointer_type(cpp_type):
        # Check the pointed-to type
        base = cpp_type.replace('*', '').replace('const', '').strip()
        for b in basic:
            if b in base:
                return False
        return True
    if is_array_type(cpp_type):
        return False
    for b in basic:
        if b in cpp_type:
            return False
    return True

def classify_contradiction(xref_entry, type_entry):
    """
    Classify the contradiction between observed_type and cpp_type.
    
    Returns: (contradiction_level, action, new_type, reason)
    contradiction_level: 'none', 'minor', 'major', 'definitive'
    action: 'upgrade_only', 'fix_type'
    """
    observed = xref_entry['observed_type']
    cpp_type = type_entry['cpp_type']
    name = xref_entry['name']
    usage = xref_entry.get('usage_class', '')
    xref_count = xref_entry.get('xref_count', 0)
    
    # Parse usage_class for dominant patterns
    usage_parts = {}
    for part in usage.split('+'):
        if ':' in part:
            k, v = part.split(':')
            usage_parts[k] = int(v)
    
    int_cmp = usage_parts.get('int_cmp', 0)
    bool_flag = usage_parts.get('bool_flag', 0)
    ptr_deref = usage_parts.get('ptr_deref', 0)
    float_op = usage_parts.get('float_op', 0)
    func_ptr = usage_parts.get('func_ptr', 0)
    unknown = usage_parts.get('unknown', 0)
    struct_acc = usage_parts.get('struct_acc', 0)
    array_idx = usage_parts.get('array_idx', 0)
    bit_op = usage_parts.get('bit_op', 0)
    str_op = usage_parts.get('str_op', 0)
    mem_op = usage_parts.get('mem_op', 0)
    copy_op = usage_parts.get('copy_op', 0)
    
    # Rule 1: observed_type=float but cpp_type is integer → DEFINITIVE contradiction
    if observed == 'float' and not is_float_type(cpp_type) and float_op >= 5:
        return ('definitive', 'fix_type', 'float', 
                f'float_op:{float_op} xrefs show float operations, but cpp_type={cpp_type}')
    
    # Rule 2: observed_type=float but cpp_type is pointer/int → check prevalence
    if observed == 'float' and is_pointer_type(cpp_type):
        return ('major', 'fix_type', 'float',
                f'float_op:{float_op} xrefs show float, cpp_type={cpp_type} is pointer')
    
    # Rule 3: observed_type=pointer but cpp_type is scalar AND ptr_deref is high → pointer
    if observed == 'pointer' and is_scalar_type(cpp_type) and ptr_deref >= 20:
        # Need to determine what kind of pointer - keep as void* if unknown
        return ('major', 'fix_type', 'void*',
                f'ptr_deref:{ptr_deref} xrefs dereference, but cpp_type={cpp_type} is scalar')
    
    # Rule 4: observed_type=pointer AND cpp_type is scalar with moderate ptr_deref
    if observed == 'pointer' and is_scalar_type(cpp_type) and ptr_deref >= 10:
        return ('minor', 'upgrade_only', None,
                f'ptr_deref:{ptr_deref} but cpp_type={cpp_type} scalar - insufficient evidence')
    
    # Rule 5: observed_type=bool but cpp_type is pointer AND bool_flag dominates
    if observed == 'bool' and is_pointer_type(cpp_type):
        total_usage = int_cmp + bool_flag + ptr_deref + func_ptr + unknown
        if total_usage > 0:
            bool_ratio = (int_cmp + bool_flag) / total_usage
            ptr_ratio = (ptr_deref + func_ptr) / total_usage
            if bool_ratio > 0.8 and ptr_ratio < 0.2:
                # Mostly used as bool, not pointer → might be bool type
                return ('major', 'fix_type', 'int32_t',
                        f'bool_flag:{bool_flag}+int_cmp:{int_cmp} dominant ({bool_ratio:.0%}), ptr_deref:{ptr_deref} low ({ptr_ratio:.0%})')
    
    # Rule 6: observed_type=struct but cpp_type is scalar → struct
    if observed == 'struct' and is_scalar_type(cpp_type) and struct_acc >= 5:
        return ('minor', 'upgrade_only', None,
                f'struct_acc:{struct_acc} but cpp_type scalar - needs manual review')
    
    # Rule 7: observed_type=array but cpp_type is scalar → array
    if observed == 'array' and is_scalar_type(cpp_type) and array_idx >= 5:
        return ('minor', 'upgrade_only', None,
                f'array_idx:{array_idx} but cpp_type scalar - needs manual review')
    
    # Rule 8: observed_type=int but cpp_type is pointer
    if observed == 'int' and is_pointer_type(cpp_type) and int_cmp >= 10 and ptr_deref < 3:
        return ('major', 'fix_type', 'int32_t',
                f'int_cmp:{int_cmp} high, ptr_deref:{ptr_deref} low, cpp_type={cpp_type}')
    
    # Default: no contradiction, just upgrade confidence
    return ('none', 'upgrade_only', None, '')

def is_observed_pointer(observed):
    """Check if observed_type means 'this is a pointer'."""
    return observed == 'pointer'

def is_observed_scalar(observed):
    """Check if observed_type means 'this is a scalar'."""
    return observed in ('bool', 'int', 'float', 'char')

def main():
    # Load data
    xref_data = load_json(ROOT / 'tools' / 'xref_analysis_batch1.json')
    type_db = load_json(ROOT / 'tools' / 'type_db.json')
    
    # Build name→type_db entry lookup
    type_db_lookup = {}
    for name, entry in type_db.items():
        type_db_lookup[name] = entry
    
    changes = []
    upgrade_only = []
    type_changes = []
    not_found = []
    
    for xref_entry in xref_data:
        name = xref_entry['name']
        observed = xref_entry['observed_type']
        xref_count = xref_entry['xref_count']
        usage = xref_entry.get('usage_class', '')
        
        if name not in type_db_lookup:
            not_found.append(name)
            continue
        
        type_entry = type_db_lookup[name]
        cpp_type = type_entry.get('cpp_type', 'unknown')
        current_confidence = type_entry.get('confidence', 'unknown')
        current_source = type_entry.get('source', 'unknown')
        
        level, action, new_type, reason = classify_contradiction(xref_entry, type_entry)
        
        if action == 'fix_type' and new_type:
            type_changes.append({
                'name': name,
                'addr': xref_entry['addr'],
                'observed_type': observed,
                'old_type': cpp_type,
                'new_type': new_type,
                'old_confidence': current_confidence,
                'old_source': current_source,
                'level': level,
                'reason': reason,
                'xref_count': xref_count,
                'usage_class': usage
            })
        else:
            upgrade_only.append({
                'name': name,
                'observed_type': observed,
                'cpp_type': cpp_type,
                'old_confidence': current_confidence,
                'level': level,
                'reason': reason
            })
    
    # Print report
    print("=" * 80)
    print(f"XREF ANALYSIS BATCH 1 TYPE COMPARISON REPORT")
    print(f"Total entries in xref_analysis: {len(xref_data)}")
    print(f"Not found in type_db: {len(not_found)}")
    print(f"Type changes needed: {len(type_changes)}")
    print(f"Confidence upgrades only: {len(upgrade_only)}")
    print("=" * 80)
    
    if type_changes:
        print("\n## TYPE CHANGES (will update cpp_type + confidence)")
        for tc in type_changes:
            print(f"\n  [{tc['level']}] {tc['name']} ({tc['addr']})")
            print(f"    observed_type: {tc['observed_type']} (xref_count: {tc['xref_count']})")
            print(f"    usage: {tc['usage_class']}")
            print(f"    old: {tc['old_type']} (confidence: {tc['old_confidence']}, source: {tc['old_source']})")
            print(f"    new: {tc['new_type']} (confidence: xref_verified)")
            print(f"    reason: {tc['reason']}")
    
    if upgrade_only:
        print(f"\n## CONFIDENCE UPGRADES ONLY ({len(upgrade_only)} entries)")
        # Show just the first 10 as summary
        for uo in upgrade_only[:10]:
            reason_str = f" - {uo['reason']}" if uo['reason'] else ''
            print(f"  {uo['name']}: {uo['cpp_type']} ({uo['old_confidence']} → xref_verified){reason_str}")
        if len(upgrade_only) > 10:
            print(f"  ... and {len(upgrade_only) - 10} more")
    
    if not_found:
        print(f"\n## NOT FOUND IN type_db ({len(not_found)} entries)")
        for nf in not_found[:20]:
            print(f"  {nf}")
        if len(not_found) > 20:
            print(f"  ... and {len(not_found) - 20} more")
    
    # Save the change list for later processing
    save_json(ROOT / 'tools' / 'xref_changes_batch1.json', {
        'type_changes': type_changes,
        'upgrade_only_count': len(upgrade_only),
        'upgrade_only_names': [uo['name'] for uo in upgrade_only],
        'not_found': not_found
    })
    
    print(f"\nChange summary saved to tools/xref_changes_batch1.json")
    
    # Apply changes to type_db
    print("\n" + "=" * 80)
    print("APPLYING CHANGES TO type_db.json")
    print("=" * 80)
    
    changes_applied = 0
    
    # 1. Apply type changes
    for tc in type_changes:
        name = tc['name']
        if name in type_db:
            old_entry = type_db[name].copy()
            type_db[name]['cpp_type'] = tc['new_type']
            type_db[name]['confidence'] = 'xref_verified'
            type_db[name]['source'] = 'xref'
            type_db[name]['xref_count'] = tc['xref_count']
            type_db[name]['xref_observed'] = tc['observed_type']
            print(f"  FIXED: {name}: {tc['old_type']} → {tc['new_type']}")
            changes_applied += 1
    
    # 2. Apply confidence upgrades
    for uo in upgrade_only:
        name = uo['name']
        if name in type_db:
            type_db[name]['confidence'] = 'xref_verified'
            if 'xref_observed' not in type_db[name]:
                type_db[name]['xref_observed'] = uo['observed_type']
            changes_applied += 1
    
    print(f"\n  Total changes applied: {changes_applied}")
    
    # Save updated type_db
    save_json(ROOT / 'tools' / 'type_db.json', type_db)
    print(f"  Updated type_db.json saved")
    
    # ============================================
    # Now find and update globals_*.hpp files
    # ============================================
    print("\n" + "=" * 80)
    print("FINDING GLOBALS HEADER UPDATES NEEDED")
    print("=" * 80)
    
    globals_files = list(ROOT.glob('src/**/globals_*.hpp'))
    print(f"  Found {len(globals_files)} globals header files")
    
    header_updates = {}  # file_path → list of (old_line, new_line)
    
    for tc in type_changes:
        name = tc['name']
        old_type = tc['old_type']
        new_type = tc['new_type']
        addr = tc['addr']
        
        found = False
        for gfile in globals_files:
            content = gfile.read_text(encoding='utf-8')
            lines = content.split('\n')
            
            for i, line in enumerate(lines):
                # Look for the global name in an extern declaration
                if name in line and 'extern' in line:
                    # Check if old_type appears in the line
                    if old_type.replace('*', r'\*') in line or old_type in line:
                        new_line = line.replace(old_type, new_type)
                        if new_line != line:
                            if str(gfile) not in header_updates:
                                header_updates[str(gfile)] = []
                            header_updates[str(gfile)].append({
                                'line_num': i + 1,
                                'old_line': line.strip(),
                                'new_line': new_line.strip(),
                                'global_name': name,
                                'addr': addr
                            })
                            found = True
                            break
            if found:
                break
        
        if not found:
            print(f"  WARNING: {name} ({addr}) NOT found in any globals header (type: {old_type}→{new_type})")
    
    if header_updates:
        print(f"\n  Header updates needed in {len(header_updates)} files:")
        for fpath, updates in header_updates.items():
            print(f"\n  File: {fpath}")
            for u in updates:
                print(f"    Line {u['line_num']}: {u['global_name']} ({u['addr']})")
                print(f"      OLD: {u['old_line']}")
                print(f"      NEW: {u['new_line']}")
                # Apply the update
                content = Path(fpath).read_text(encoding='utf-8')
                new_content = content.replace(u['old_line'], u['new_line'])
                if new_content != content:
                    Path(fpath).write_text(new_content, encoding='utf-8')
                    print(f"      ✓ Applied")
                else:
                    print(f"      ✗ Not applied (no match)")
    else:
        print("  No header updates needed")
    
    save_json(ROOT / 'tools' / 'xref_header_updates_batch1.json', {
        'header_updates': {str(k): v for k, v in header_updates.items()}
    })
    
    print("\nDone!")

if __name__ == '__main__':
    main()
