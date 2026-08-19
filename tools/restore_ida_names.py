"""Restore IDA naming from signals.json ONLY. No CSP dependency.
Run this AFTER deleting + re-analyzing the i64.
Usage in IDA: exec(open('path/to/restore_ida_names.py').read())
"""
import json, os, sys

# Resolve root: handle both exec() and direct run
try:
    ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
except NameError:
    # exec() mode — set explicitly
    ROOT = r'D:\RA2YR_ReSource'

def main():
    import idc, ida_funcs, ida_segment, ida_typeinf, idaapi, ida_name, ida_nalt
    
    signals = json.load(open(os.path.join(ROOT, 'signals.json')))
    til = idaapi.cvar.idati
    
    # ── 1/3: Rename all functions ──
    by_name = signals.get('_by_name', {})
    print(f'[1/3] Renaming {len(by_name)} functions...')
    renamed = 0
    for name, info in sorted(by_name.items()):
        syms = info.get('symbols', {}) if isinstance(info, dict) else {}
        for addr_str, kind in syms.items():
            if kind != 'function' or not addr_str.startswith('0x'): continue
            ea = int(addr_str, 16)
            ea = int(addr_str, 16)
            if not ida_funcs.get_func(ea): continue
            if idc.set_name(ea, name, ida_name.SN_FORCE):
                renamed += 1
                break  # one name per function
    print(f'  Done: {renamed}/{len(by_name)}')
    
    # ── 2/3: Name global variables ──
    globals_data = signals.get('globals', {})
    print(f'[2/3] Naming {len(globals_data)} globals...')
    ng = 0
    for name, addr_str in globals_data.items():
        if isinstance(addr_str, dict):
            addr_str = addr_str.get('address', '')
        if not isinstance(addr_str, str) or not addr_str: continue
        ea = int(addr_str, 16)
        if ea == 0 or not ida_segment.getseg(ea): continue
        if idc.set_name(ea, name, ida_name.SN_FORCE):
            ng += 1
    print(f'  Done: {ng}/{len(globals_data)}')
    
    # ── 3/3: Inject core class types ──
    classes_data = signals.get('classes', {})
    print(f'[3/3] Injecting {len(classes_data)} classes...')
    # Define known types that IDA recognizes
    KNOWN_TYPES = {'void*','_DWORD','_BYTE','_WORD','_QWORD','int','char','short',
                   'long','float','double','bool','unsigned int','signed int',
                   'uint32_t','int32_t','uint16_t','int16_t','uint8_t','int8_t'}
    injected = 0
    for cls_name, info in classes_data.items():
        if ida_typeinf.get_type_ordinal(til, cls_name) > 0:
            injected += 1
            continue
        offsets = info.get('offsets', {})
        parent = info.get('parent')
        decl = f'struct {cls_name}'
        if parent: decl += f'  // parent: {parent}'
        decl += ' {\n'
        for off_str, m in sorted(offsets.items(), key=lambda x: int(x[0])):
            raw_type = m.get('type', '_DWORD')
            # Replace unknown types with _DWORD (avoid forward ref errors)
            type_clean = raw_type.replace('unsigned __int8','uint8_t').replace('unsigned __int16','uint16_t').replace('unsigned __int32','uint32_t')
            # If type contains a struct/class reference not yet defined, use _DWORD
            base_type = type_clean.split('[')[0].replace('*','').replace('&','').strip()
            if base_type not in KNOWN_TYPES and not base_type.startswith(('_','unsigned','signed')):
                if '[' in type_clean:
                    type_clean = f'_DWORD[{type_clean.split("[")[1]}'
                elif '*' in type_clean:
                    pass  # pointers are always _DWORD-size
                else:
                    type_clean = '_DWORD'
            mname = m.get('ida_name', f'field_{off_str}')
            decl += f'  {type_clean} {mname}; // +0x{off_str}\n'
        decl += '};\n'
        try:
            idc.parse_decls(decl, 0)
            injected += 1
        except Exception as e:
            print(f'  FAIL {cls_name}: {e}')
    print(f'  Done: {injected}/{len(classes_data)}')
    
    # Save
    try:
        idc.save_database(ida_nalt.get_path(ida_nalt.GPN_IDB))
    except:
        try: idc.save_database()
        except: print('Warning: could not save database')
    print(f'\nComplete: {renamed} funcs + {ng} globals + {injected} classes')

main()

