#!/usr/bin/env python3
"""IDA function metadata extractor — generates functions.json for hook framework.

Run in IDA Python context: ida_mcp.python_exec_file("tools/hook_framework/ida_extract.py")
Output: tools/hook_framework/functions.json
"""
import json
import os

# Output path — same directory as this script
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
OUTPUT_PATH = os.path.join(SCRIPT_DIR, "functions.json")

try:
    import ida_funcs, ida_typeinf, idautils, ida_xref
    import ida_segment, ida_nalt, ida_bytes, ida_name
except ImportError:
    print("ERROR: Must run inside IDA Python context.")
    import sys; sys.exit(1)

def get_calling_convention(ea):
    tif = ida_typeinf.tinfo_t()
    if not ida_nalt.get_tinfo(tif, ea):
        return "unknown", 0
    proto = tif.dstr()
    if "__thiscall" in proto: return "thiscall", _param_bytes(tif)
    if "__stdcall"  in proto: return "stdcall",  _param_bytes(tif)
    if "__cdecl"    in proto: return "cdecl",    0
    if "__fastcall" in proto: return "fastcall", 0
    return "unknown", 0

def _param_bytes(tif):
    try:
        fd = ida_typeinf.func_type_data_t()
        if tif.get_func_details(fd):
            return sum(a.type.get_size() for a in fd if hasattr(a, 'type'))
    except:
        pass
    return 0

def get_return_info(ea):
    tif = ida_typeinf.tinfo_t()
    if not ida_nalt.get_tinfo(tif, ea):
        return "unknown", 4
    try:
        fd = ida_typeinf.func_type_data_t()
        if tif.get_func_details(fd):
            return fd.rettype.dstr(), fd.rettype.get_size()
    except:
        pass
    return "unknown", 4

def get_vtable_info(ea):
    name = ida_funcs.get_func_name(ea)
    if '::' in name:
        parts = name.split('::')
        return True, parts[0], parts[1] if len(parts) == 2 else name
    return False, None, None

def get_category(name):
    n = name.lower()
    if any(k in n for k in ['draw', 'render', 'blit', 'surface', 'display',
        'palette', 'pixel', 'bitmap', 'fillrect', 'lock', 'unlock', 'binkmovie']):
        return "rendering"
    if any(k in n for k in ['registerclass', 'classfactory', 'dllregister',
        'iunknown', 'ipersist', 'queryinterface', 'guid', 'clsid']):
        return "com"
    if any(k in n for k in ['menu', 'dialog', 'campaign', 'skirmish',
        'optionsscreen', 'mainmenu', 'multiplayer', 'credits', 'gadget']):
        return "menu"
    if any(k in n for k in ['locomotor', 'locomotion', 'move', 'walk',
        'drive', 'fly', 'hover', 'jumpjet', 'tunnel', 'ship', 'piggyback']):
        return "locomotor"
    if any(k in n for k in ['mixfile', 'mix', 'crc', 'hash', 'blowfish',
        'ini_', 'read_ini', 'getstring', 'getint', 'loadfile', 'filesystem',
        'computeid', 'compute_']):
        return "yrpp_io"
    if '::' in name:
        return "member"
    return "global"

def extract_all():
    functions = []
    total = 0
    named = 0

    data_seg = ida_segment.get_segm_by_name('.data')
    data_start = hex(data_seg.start_ea) if data_seg else "0x0"
    data_end   = hex(data_seg.end_ea)   if data_seg else "0x0"
    data_pages = ((data_seg.end_ea - data_seg.start_ea + 4095) // 4096) if data_seg else 0

    for ea in idautils.Functions():
        total += 1
        name = ida_funcs.get_func_name(ea)
        func = ida_funcs.get_func(ea)
        size = func.end_ea - func.start_ea

        convention, param_bytes = get_calling_convention(ea)
        ret_type, ret_bytes = get_return_info(ea)
        is_virtual, class_name, method_name = get_vtable_info(ea)
        category = get_category(name)
        is_named = not name.startswith('sub_') and not name.startswith('nullsub')
        if is_named:
            named += 1

        functions.append({
            "address": hex(ea),
            "end": hex(func.end_ea),
            "name": name,
            "size": size,
            "call": {
                "convention": convention,
                "param_bytes": param_bytes,
                "return_type": ret_type,
                "return_bytes": ret_bytes,
                "is_member": convention == "thiscall",
                "is_virtual": is_virtual,
                "class_name": class_name,
                "method_name": method_name
            },
            "purity": {
                "is_pure": False,
                "writes_global_count": -1
            },
            "category": category,
            "hook": {
                "is_hookable": size >= 5,
                "strategy": "not_hookable" if size < 5 else "stack_hijack",
                "completed": is_named and size > 10 and not name.startswith("nullsub"),
                "re_file": None,
                "re_line": None
            },
            "test": {
                "count": 0,
                "mismatches": 0,
                "last_mismatch": None,
                "valid": False
            }
        })

        if total % 2000 == 0:
            print(f"  ... processed {total} functions ...")

    metadata = {
        "binary": "gamemd.exe",
        "base_address": "0x400000",
        "generated": "auto",
        "total_functions": total,
        "named_functions": named,
        "data_section": {
            "start": data_start,
            "end": data_end,
            "pages": data_pages
        }
    }

    result = {"metadata": metadata, "functions": functions}

    with open(OUTPUT_PATH, 'w') as f:
        json.dump(result, f, indent=2)

    print(f"\nExtracted {total} functions ({named} named) -> {OUTPUT_PATH}")
    print(f".data: {data_start}-{data_end} ({data_pages} pages)")
    return result

if __name__ == '__main__':
    extract_all()
