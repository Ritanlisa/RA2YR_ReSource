import idaapi, idc, ida_hexrays

auto_actions = {'Process', 'Update', 'Find', 'Create', 'Get', 'Load', 'Save', 'Copy', 'Cleanup', 'Reset', 'Initialize', 'Construct', 'Remove', 'Add', 'Set', 'Validate', 'Mark', 'Open', 'Close', 'Lock', 'Blit', 'Render', 'Convert', 'ReadINI', 'ReadINIEntry', 'ReadINIList', 'MarkUpdate', 'LoadType', 'ProcessData', 'ReadList'}

# VerbNoun phrase mapping
action_to_verb = {
    'Process': 'Process', 'Update': 'Update', 'Find': 'Find', 'Create': 'Create',
    'Get': 'Get', 'Load': 'Load', 'Save': 'Save', 'Copy': 'Copy', 'Cleanup': 'Cleanup',
    'Reset': 'Reset', 'Initialize': 'Initialize', 'Construct': 'Construct', 'Remove': 'Remove',
    'Add': 'Add', 'Set': 'Set', 'Validate': 'Validate', 'Mark': 'MarkFor',
    'Open': 'Open', 'Close': 'Close', 'Lock': 'Lock', 'Blit': 'Blit',
    'Render': 'Render', 'Convert': 'Convert', 'ReadINI': 'ReadINI',
    'ReadINIEntry': 'ReadINI', 'ReadINIList': 'ReadINI', 'MarkUpdate': 'MarkUpdate',
    'LoadType': 'Load', 'ProcessData': 'Process', 'ReadList': 'Read'
}

fixes = []
for ea in range(0x401000, 0x7E1000):
    fn = idaapi.get_func(ea)
    if not fn or fn.start_ea != ea: continue
    n = idc.get_func_name(ea) or ''
    if '::' not in n: continue
    parts = n.split('::', 1)
    if len(parts) != 2: continue
    cls, action = parts
    if action not in auto_actions: continue
    sz = fn.end_ea - ea
    if sz < 80: continue
    
    is_thiscall = False
    try:
        cfunc = ida_hexrays.decompile(ea)
        proto = str(cfunc.type)
        if '__thiscall' in proto or '__fastcall' in proto:
            is_thiscall = True
    except:
        pass
    
    if not is_thiscall:
        # Check assembly
        addr = ea
        for _ in range(20):
            if addr >= fn.end_ea: break
            d = idc.GetDisasm(addr).lower()
            for reg in ['esi', 'edi', 'ebp', 'ebx']:
                if d.startswith('mov') and f'{reg}, ecx' in d:
                    is_thiscall = True
                    break
            if is_thiscall: break
            addr = idc.next_head(addr)
    
    if not is_thiscall:
        verb = action_to_verb.get(action, action)
        new_name = f"{verb}{cls}"
        fixes.append((ea, n, new_name, sz))

fixes.sort(key=lambda x: -x[3])
print(f"Total fixes: {len(fixes)}")

ok = 0
for addr, old, new, sz in fixes:
    try:
        idc.set_name(addr, new, idc.SN_NOWARN)
        ok += 1
    except: pass

print(f"Applied: {ok}")
if fixes:
    print("\nSample corrections:")
    for addr, old, new, sz in fixes[:20]:
        print(f"0x{addr:08X} {old:55s} --> {new}")
