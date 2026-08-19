"""
Final extraction script v4: Merges functions.json data with IDA type info.
Strategy:
  1. Read functions.json for class membership + virtual status
  2. Use decompiler (ida_hexrays) for type prototypes  
  3. Scan .rdata for vtable arrays to get vtable indices
  4. Output merged ida_class_members.json and ida_globals.json

Runs inside IDA via py_exec_file.
"""
import json, os, re, time
from collections import defaultdict

import idaapi, idautils, idc, ida_funcs, ida_typeinf, ida_bytes, ida_xref
try:
    import ida_hexrays
    HEXRAYS_AVAILABLE = True
except ImportError:
    HEXRAYS_AVAILABLE = False
    print("[!] Hex-Rays not available, type info will be limited")

OUTPUT_DIR = r"D:\RA2YR_ReSource\tools"
FUNCTIONS_JSON = r"D:\RA2YR_ReSource\injectFunctionTest\functions.json"
CRT_EXCLUSIONS_PATH = os.path.join(OUTPUT_DIR, "fr_crt_exclusions.json")
MEMBERS_OUTPUT = os.path.join(OUTPUT_DIR, "ida_class_members.json")
GLOBALS_OUTPUT = os.path.join(OUTPUT_DIR, "ida_globals.json")

# Load functions.json
print("[*] Loading functions.json...")
with open(FUNCTIONS_JSON, 'r') as f:
    funcs_data = json.load(f)
all_func_entries = funcs_data['functions']
print("[*] {} functions loaded".format(len(all_func_entries)))

# Load CRT exclusions
crt_excluded = set()
try:
    with open(CRT_EXCLUSIONS_PATH, 'r') as f:
        crt_data = json.load(f)
    for addr_str in crt_data.get('excluded_addresses', []):
        crt_excluded.add(int(addr_str, 16))
    print("[*] {} CRT exclusions".format(len(crt_excluded)))
except Exception as e:
    print("[!] CRT exclusions failed: {}".format(e))

def get_decompiler_prototype(func_addr):
    """Get prototype from Hex-Rays decompiler (fast)."""
    if not HEXRAYS_AVAILABLE:
        return None
    try:
        cfunc = ida_hexrays.decompile(func_addr)
        if cfunc:
            return str(cfunc.type)
    except Exception:
        pass
    return None

def get_type_from_tinfo(func_addr):
    """Fallback: type from tinfo_t."""
    tif = ida_typeinf.tinfo_t()
    if ida_typeinf.guess_tinfo(tif, func_addr):
        return tif.dstr()
    type_str = ida_typeinf.idc_get_type(func_addr)
    return type_str if type_str else None

def parse_prototype(proto_str):
    """Parse C prototype into components."""
    if not proto_str:
        return None
    cc = 'unknown'
    if '__thiscall' in proto_str: cc = 'thiscall'
    elif '__fastcall' in proto_str: cc = 'fastcall'
    elif '__stdcall' in proto_str: cc = 'stdcall'
    elif '__cdecl' in proto_str: cc = 'cdecl'
    
    result = {'signature': proto_str, 'return_type': 'unknown',
              'params': [], 'cc': cc, 'is_thiscall': cc == 'thiscall'}
    
    paren_idx = proto_str.find('(')
    if paren_idx > 0:
        prefix = proto_str[:paren_idx].strip()
        suffix = proto_str[paren_idx:]
        words = prefix.split()
        if len(words) >= 2:
            cc_kws = {'__thiscall', '__fastcall', '__stdcall', '__cdecl'}
            if words[-1] in cc_kws:
                result['return_type'] = ' '.join(words[:-1])
            else:
                result['return_type'] = ' '.join(words)
        else:
            result['return_type'] = prefix
        
        params_str = suffix.strip('()')
        if params_str and params_str != 'void':
            for param in params_str.split(','):
                param = param.strip()
                if param:
                    parts = param.rsplit(None, 1)
                    if len(parts) == 2:
                        result['params'].append({'name': parts[1].strip('* '), 'type': parts[0]})
                    else:
                        result['params'].append({'name': '', 'type': param})
    return result

def scan_vtables_in_rdata():
    """Scan .rdata for vtable arrays (consecutive function pointers)."""
    rdata_seg = None
    for seg_ea in idautils.Segments():
        name = idc.get_segm_name(seg_ea)
        if name == '.rdata':
            rdata_seg = idaapi.getseg(seg_ea)
            break
    
    if not rdata_seg:
        print("[!] .rdata not found!")
        return {}
    
    start = rdata_seg.start_ea
    end = rdata_seg.end_ea
    print("[*] Scanning .rdata [{:#x} - {:#x}]...".format(start, end))
    
    vtable_map = {}
    vtable_count = 0
    ea = start
    
    while ea < end - 4:
        val = ida_bytes.get_dword(ea)
        if val != 0 and ida_funcs.get_func_name(val):
            vtable_start = ea
            consecutive = 0
            scan_ea = ea
            while scan_ea < end:
                v = ida_bytes.get_dword(scan_ea)
                if v != 0 and ida_funcs.get_func_name(v):
                    consecutive += 1
                    scan_ea += 4
                else:
                    break
            
            if consecutive >= 5:
                vtable_count += 1
                for i in range(consecutive):
                    func_val = ida_bytes.get_dword(vtable_start + i * 4)
                    if func_val not in vtable_map:
                        vtable_map[func_val] = (vtable_start, i)
                ea = scan_ea
                continue
        
        ea += 4
    
    print("[*] {} vtables, {} virtual mappings".format(vtable_count, len(vtable_map)))
    return vtable_map

MODULE_PREFIXES = {
    'Audio': 'misc', 'BINK': 'render', 'Blowfish': 'misc',
    'CCINIClass': 'misc', 'CellClass': 'system', 'Command': 'ui',
    'Display': 'render', 'Draw': 'render', 'File': 'misc',
    'Game': 'core', 'Gadget': 'ui', 'House': 'house', 'INI': 'misc',
    'Map': 'system', 'Math': 'core', 'Message': 'ui', 'Mix': 'misc',
    'Mouse': 'ui', 'Network': 'network', 'Particle': 'entity',
    'Random': 'core', 'Scenario': 'system', 'Session': 'network',
    'Spawn': 'misc', 'Super': 'misc', 'Surface': 'render',
    'Tactical': 'ui', 'Team': 'team', 'Trigger': 'team',
    'Voxel': 'render', 'WDT': 'wdt', 'WinMain': 'app',
    'Winsock': 'network', 'XSurface': 'render', 'ZSurface': 'render',
}

def detect_module(func_name):
    for prefix, module in MODULE_PREFIXES.items():
        if func_name.startswith(prefix):
            return module
    return 'unknown'

CRT_PREFIXES = (
    '_except_', '__eh_', '__Cxx', 'atexit', '_initterm', '_onexit',
    '__dllonexit', '_crt', '_purecall', '_invoke_watson', '_call_reportfault',
    '_CI', '_CIsqrt', '__rt_', '__crt', 'memcpy', 'memmove', 'memset',
    '__security_', '__report_', '_guard_', '_callnewh', '__std_',
    '_malloc', '_free', '_realloc', '_calloc', '_str', '_wcs',
    'sprintf', 'vsprintf', 'printf', '__aulldiv', '__aullrem',
    '__alldvrm', '__allmul', '__allshl', '__allshr', '__chkstk',
    '_ftol', '_CIpow', '_ftol2', '_dtol', '_ltod', '_except_handler',
    '_global_unwind', '_local_unwind', '__CxxFrameHandler',
    '__CxxLongjmpUnwind', '__CxxExceptionFilter', '__CxxDetectRethrow',
    '__CxxQueryExceptionSize', '_except_handler4', '_except_handler4_common',
    '_ValidateImageBase', '_FindPESection', '_IsNonwritableInCurrentImage',
    '__raise_securityfailure', '__report_gsfailure', '_NLG_', '__NLG_',
    '_unwind_handler', '@__security_check_cookie@', '__SEH_', '_SEH_',
    '??_U@', '??_V@', '?_',
)

def main():
    print("[*] Starting v4 extraction...")
    t_start = time.time()
    
    # Step 1: Scan vtables
    print("\n[Step 1] Vtable scan...")
    vtable_map = scan_vtables_in_rdata()
    
    # Step 2: Process functions
    print("\n[Step 2] Extracting types + building output...")
    
    class_members = defaultdict(list)
    global_funcs = []
    skipped_crt = skipped_thunk = 0
    member_count = global_count = virtual_count = 0
    type_decomp = type_fallback = type_miss = 0
    
    for i, entry in enumerate(all_func_entries):
        if i % 2000 == 0:
            print("    {}/{} ({}%) mem={} glob={} virt={}".format(
                i, len(all_func_entries), 100*i//len(all_func_entries),
                member_count, global_count, virtual_count))
        
        addr_str = entry['address']
        func_addr = int(addr_str, 16)
        func_name = entry.get('name', '')
        call_info = entry.get('call', {})
        
        if func_addr in crt_excluded or func_name.startswith(CRT_PREFIXES):
            skipped_crt += 1; continue
        if func_name.startswith(('j_', 'jpt_')):
            skipped_thunk += 1; continue
        
        # Get type
        proto_str = get_decompiler_prototype(func_addr)
        if proto_str:
            type_decomp += 1
        else:
            proto_str = get_type_from_tinfo(func_addr)
            if proto_str:
                type_fallback += 1
            else:
                type_miss += 1
        
        if proto_str:
            type_info = parse_prototype(proto_str)
        else:
            type_info = {
                'signature': '{}()'.format(func_name),
                'return_type': call_info.get('return_type', 'unknown'),
                'params': [], 'cc': call_info.get('convention', 'unknown'),
                'is_thiscall': call_info.get('convention') == 'thiscall',
            }
        
        class_name = call_info.get('class_name', '')
        method_name = call_info.get('method_name', '')
        is_member = bool(class_name)
        
        vtable_base, vtable_idx = None, None
        if func_addr in vtable_map:
            vtable_base, vtable_idx = vtable_map[func_addr]
        is_virtual = vtable_idx is not None or call_info.get('is_virtual', False)
        
        entry_out = {
            'name': method_name if method_name else func_name,
            'addr': addr_str,
            'signature': type_info['signature'],
            'return_type': type_info['return_type'],
            'params': type_info['params'],
            'cc': type_info['cc'],
            'is_virtual': is_virtual,
            'is_thiscall': type_info['is_thiscall'],
        }
        
        if vtable_idx is not None:
            entry_out['vtable_idx'] = vtable_idx
            entry_out['vtable_base'] = '0x{:X}'.format(vtable_base)
        
        if is_member:
            class_members[class_name].append(entry_out)
            member_count += 1
            if is_virtual: virtual_count += 1
        else:
            entry_out['name'] = func_name
            entry_out['module'] = detect_module(func_name)
            global_funcs.append(entry_out)
            global_count += 1
    
    # Sort
    class_members_dict = {}
    for cls_name, members in class_members.items():
        members.sort(key=lambda x: int(x['addr'], 16))
        class_members_dict[cls_name] = members
    global_funcs.sort(key=lambda x: int(x['addr'], 16))
    
    output_members = {
        'metadata': {
            'binary': 'gamemd.exe', 'imagebase': '0x400000',
            'total_functions': len(all_func_entries),
            'member_functions': member_count,
            'virtual_functions': virtual_count,
            'global_functions': global_count,
            'class_count': len(class_members_dict),
            'skipped_crt': skipped_crt, 'skipped_thunk': skipped_thunk,
            'types_from_decompiler': type_decomp,
            'types_from_fallback': type_fallback,
            'types_missing': type_miss,
            'vtables_found': sum(1 for v in vtable_map.values()),
            'virtual_mappings': len(vtable_map),
            'generated': 'ida_extract_class_members.py (v4)'
        },
        'classes': class_members_dict
    }
    
    output_globals = {
        'metadata': {
            'binary': 'gamemd.exe', 'imagebase': '0x400000',
            'total_globals': global_count,
            'generated': 'ida_extract_class_members.py (v4)'
        },
        'functions': global_funcs
    }
    
    os.makedirs(OUTPUT_DIR, exist_ok=True)
    
    print("\n[*] Writing {}...".format(MEMBERS_OUTPUT))
    with open(MEMBERS_OUTPUT, 'w') as f:
        json.dump(output_members, f, indent=2)
    print("    Size: {:,} bytes".format(os.path.getsize(MEMBERS_OUTPUT)))
    
    print("[*] Writing {}...".format(GLOBALS_OUTPUT))
    with open(GLOBALS_OUTPUT, 'w') as f:
        json.dump(output_globals, f, indent=2)
    print("    Size: {:,} bytes".format(os.path.getsize(GLOBALS_OUTPUT)))
    
    elapsed = time.time() - t_start
    print("\n" + "=" * 60)
    print("  Done! ({:.1f}s)".format(elapsed))
    print("  Members: {} ({} virt) | Globals: {} | Classes: {}".format(
        member_count, virtual_count, global_count, len(class_members_dict)))
    print("  Types: decomp={} fallback={} miss={}".format(
        type_decomp, type_fallback, type_miss))
    print("  Vtables: {} | Virtual mappings: {}".format(
        sum(1 for v in vtable_map.values()), len(vtable_map)))
    top = sorted(class_members_dict.items(), key=lambda x: len(x[1]), reverse=True)[:15]
    print("  Top classes:")
    for cls_name, members in top:
        n_v = sum(1 for m in members if m.get('is_virtual'))
        print("    {}: {} ({} virt)".format(cls_name, len(members), n_v))
    print("=" * 60)

if __name__ == '__main__':
    main()
