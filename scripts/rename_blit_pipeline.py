#!/usr/bin/env python3
"""
IDA Python script v3: Targeted rename of remaining Blit* / RLEBlit* sub_* methods.
Fixes CallBlit wrapper detection (body.strip().startswith('return') was wrong).
"""
import idaapi, ida_funcs, ida_name, ida_hexrays, ida_bytes, re

TARGET_CLASSES = [
    'BlitTransXlatAlpha_ushort',
    'BlitTransXlatAlphaZRead_ushort', 
    'BlitTransLucent25Alpha_ushort',
    'BlitTransLucent25AlphaZReadWrite_ushort',
    'RLEBlitTransZRemapXlatAlpha_ushort',
]

def classify(body, size, addr, class_name):
    """Classify remaining sub_*."""
    
    # Constructor: vtable assign + conditional delete
    if "`vftable'" in body:
        if "__3_YAXPAX_Z" in body:
            m = re.search(r"&(\w+(?:<\w+(?: \*)?>)?)::`vftable'", body)
            if m: return f"Constructor_{m.group(1)}"
        return "Constructor"
    
    # CallBlit wrapper: (*(_DWORD *)this + N)
    if re.search(r'\(\*\(_DWORD \*\)this\s*\+\s*\d+\)', body):
        m = re.search(r'\(\*\(_DWORD \*\)this\s*\+\s*(\d+)\)', body)
        if m:
            off = int(m.group(1))
            if off == 4: return "CallBlit0"
            elif off == 8: return "CallBlit2"
            elif off == 12: return "CallBlit1"
            else: return f"CallBlit_vt{off}"
        return "CallBlit_Wrapper"
    
    # Pixel blend loop with ZBuffer
    if 'g_ZBufferDescriptor' in body or 'ZBuffer' in body:
        has_zwrite = '*a6 = a5' in body or '*a6 = a4' in body
        if '3 * (' in body and '>> 2' in body: blend = 'Lucent25'
        elif '>> 1' in body: blend = 'Lucent50'
        elif '* 3' in body and '>> 2' in body: blend = 'Lucent75'
        elif 'a4 + a7 *' in body: blend = 'AlphaBlend'
        else: blend = ''
        parts = ['Blit_Alpha']
        if has_zwrite: parts.append('ZReadWrite')
        else: parts.append('ZRead')
        if blend: parts.append(blend)
        return '_'.join(parts)
    
    if 'g_VisibleSurfaceDescriptor' in body:
        return "Blit_VisibleSurface"
    if body.strip() == 'return 0;': return "StubReturnZero"
    if body.strip() == 'return 1;': return "StubReturnTrue"
    return None

def get_body(text):
    if not text: return ""
    lines = text.strip().split('\n')
    return '\n'.join(lines[1:]).strip() if len(lines) > 1 else ""

def main():
    print("=" * 70)
    print("Blit Pipeline Sub_* Rename v3 (Targeted)")
    print("=" * 70)
    
    if not ida_hexrays.init_hexrays_plugin():
        print("[ERROR] Hex-Rays unavailable!"); return None
    
    subs = []
    for i in range(ida_funcs.get_func_qty()):
        func = ida_funcs.getn_func(i)
        if not func: continue
        name = ida_funcs.get_func_name(func.start_ea)
        if '::sub_' not in name: continue
        cls = name.split('::')[0]
        if cls not in TARGET_CLASSES: continue
        subs.append({
            'addr': func.start_ea, 'name': name, 'class': cls,
            'short': name.split('::')[1], 'size': func.end_ea - func.start_ea,
        })
    
    print(f"Found {len(subs)} subs in {len(TARGET_CLASSES)} classes")
    
    renames = []
    for f in subs:
        try:
            cfunc = ida_hexrays.decompile(f['addr'])
            text = str(cfunc) if cfunc else ""
        except:
            continue
        body = get_body(text)
        if not body: continue
        
        new_name = classify(body, f['size'], f['addr'], f['class'])
        if new_name:
            full = f"{f['class']}::{new_name}"
            existing = ida_name.get_name_ea(idaapi.BADADDR, full)
            if existing != idaapi.BADADDR and existing != f['addr']:
                full = f"{f['class']}::{new_name}_{f['addr']:06X}"
            renames.append({**f, 'new': new_name, 'full': full})
    
    print(f"Will rename: {len(renames)}")
    for r in renames:
        print(f"  0x{r['addr']:06X} ({r['size']:#x}B): {r['short']} -> {r['new']}")
    
    if renames:
        ok = sum(1 for r in renames if ida_name.set_name(r['addr'], r['full'], ida_name.SN_FORCE))
        print(f"\nOK: {ok}/{len(renames)}")
    
    remaining = len(subs) - len(renames)
    print(f"Remaining sub_* in target classes: {remaining}")
    return {'total': len(subs), 'renamed': len(renames), 'remaining': remaining}

result = main()
