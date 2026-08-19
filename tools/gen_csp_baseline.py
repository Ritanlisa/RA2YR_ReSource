#!/usr/bin/env python3
"""Generate src_csp/ from function blocks pickle + .h + CSP data.

Fixes:
- Class_N → known names in signatures and bodies
- *(this+N) → this->member using .h struct members + CSP offsets
- vN = this → direct this usage
- class-prefixed auto-named members
"""

import json, os, re, pickle, shutil
from collections import defaultdict

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
REN = os.path.join(ROOT, 'tools/csp/class_rename_map.json')
CSP = os.path.join(ROOT, 'tools/csp/full_report/csp_classes.json')
H_FILE = os.path.join(ROOT, 'decompile-results/gamemd.exe.h')
PKL = os.path.join(ROOT, 'decompile-results/func_blocks.pkl')
OUT = os.path.join(ROOT, 'src_csp')

rename_map = json.load(open(REN))
csp_cls = json.load(open(CSP))['classes']
CSP_F = os.path.join(ROOT, 'tools/csp/full_report/csp_functions.json')
csp_funcs = json.load(open(CSP_F))['functions'] if os.path.exists(CSP_F) else {}
FTC = os.path.join(ROOT, 'tools/csp/func_to_class.json')
func_to_class = json.load(open(FTC)) if os.path.exists(FTC) else {}

# reverse: known name → Class_N
name_to_csp = {v: k for k, v in rename_map.items()}

def get_parent(cid):
    p = csp_cls.get(cid, {}).get('inherited_from', [])
    return rename_map.get(p[0], '') if p else ''

def get_module(n):
    for pfx, mod in sorted({'Abstract':'object','Object':'object','Techno':'object','Foot':'object',
        'Mission':'object','Radio':'object','Building':'structure','Unit':'structure',
        'Infantry':'structure','Aircraft':'structure','House':'house','Bullet':'entity',
        'Anim':'entity','Particle':'entity','Smudge':'entity','Tiberium':'entity',
        'Terrain':'entity','Overlay':'entity','Wave':'entity','Tube':'entity',
        'VoxelAnim':'entity','Cell':'system','Map':'system','File':'system','Mix':'system',
        'Scenario':'system','Radar':'system','Super':'misc','Rules':'misc','Weapon':'misc',
        'Warhead':'misc','Audio':'misc','Team':'team','Trigger':'team','Script':'team',
        'Mouse':'ui','Sidebar':'ui','Gadget':'ui','Dialog':'ui','Command':'ui',
        'Font':'render','Display':'render','Surface':'render','Palette':'render',
        'Session':'network','Connection':'network','Buffer':'core','INIClass':'core'
    }.items(), key=lambda x: -len(x[0])):
        if n.startswith(pfx): return mod
    return '_misc'

# ── Parse .h struct members ──
print("Parsing .h structs...")
with open(H_FILE, encoding='utf-8') as f:
    h = f.read()
h_clean = re.sub(r'//.*', '', h)
h_clean = re.sub(r'/\*.*?\*/', '', h_clean, flags=re.DOTALL)

h_members = {}  # struct_name → [(type, name, arr_size, bitfield)]
for m in re.finditer(r'struct\s+(\w+)\s*\{((?:[^{}]|\{[^{}]*\})*)\}\s*;', h_clean):
    name = m.group(1)
    if name in h_members: continue
    items = []
    for line in m.group(2).split('\n'):
        line = line.strip()
        if not line: continue
        mm = re.match(r'(.+?)\s+(\w+)\s*(?:\[(\d+)\])?\s*(?::\s*(\d+))?\s*;', line)
        if mm: items.append((mm.group(1).strip(), mm.group(2).strip(),
                             int(mm.group(3)) if mm.group(3) else 0,
                             int(mm.group(4)) if mm.group(4) else 0))
    if items: h_members[name] = items
print(f"  {len(h_members)} structs with members")

TYPE_SZ = {'_BYTE':1,'char':1,'bool':1,'uint8_t':1,'int8_t':1,
           '_WORD':2,'short':2,'uint16_t':2,'int16_t':2,'wchar_t':2,
           '_DWORD':4,'int':4,'long':4,'float':4,'uint32_t':4,'int32_t':4,
           '_QWORD':8,'double':8,'int64_t':8,'uint64_t':8,'long long':8}

def type_size(t):
    t = re.sub(r'\b(const |volatile |signed |unsigned |__thiscall |__cdecl |__fastcall |__stdcall )', '', t)
    if t.endswith('*'): return 4
    t = t.replace('struct ','').replace('union ','').strip()
    return TYPE_SZ.get(t, 4 if t[0].isupper() else 4)

def build_member_map(name, csp_id):
    """Return {offset: (member_name, type_str)} for a class.
    
    Carves CSP-reported offsets out of padding so *(this+N) can be rewritten."""
    named_result = {}  # known-name members
    csp_only = []     # offsets referenced by CSP (for carving out of padding)
    struct_sz = 0
    
    # 1. Parse .h struct layout
    if name in h_members:
        off = 0
        for t, n, arr, bit in h_members[name]:
            sz = type_size(t) * (arr or 1)
            if not n.startswith(('pad_','gap_')) and n != 'vfptr':
                named_result[off] = (n, t, sz)
            struct_sz = off + sz
            off += sz
    
    # 2. Collect CSP offsets (within struct bounds)
    if csp_id in csp_cls:
        for off in csp_cls[csp_id].get('offsets', []):
            o = int(off) if isinstance(off, (int, str)) else off
            o = int(o, 16) if isinstance(o, str) and o.startswith('0x') else int(o)
            if 0 < o < (struct_sz or 1000000) and o not in named_result:
                csp_only.append(o)
    csp_only.sort()
    
    # 3. Build complete member map with padding carved
    result = {}
    prev = 0
    for o in csp_only:
        if o > prev:
            # padding from prev to o
            pass  # don't add padding entries
        result[o] = (f'field_{o:X}', '_DWORD', 4)
        prev = o + 4
    # Add named members (overrides CSP entries at same offset)
    for off, (n, t, sz) in named_result.items():
        result[off] = (n, t, sz)
    return result

# ── Compiled rename regex ──
rev = {v: k for k, v in rename_map.items()}  # name → Class_N
# We need Class_N → known name for replacing in text
cn_to_name = rename_map
if cn_to_name:
    ptr_re = re.compile('|'.join(r'\b' + re.escape(c) + r'(?=\s*\*)' for c in sorted(cn_to_name, key=len, reverse=True)))
    scp_re = re.compile('|'.join(r'\b' + re.escape(c) + r'(?=::)' for c in sorted(cn_to_name, key=len, reverse=True)))
    def rnt(text):
        text = ptr_re.sub(lambda m: cn_to_name[m.group(0)], text)
        text = scp_re.sub(lambda m: cn_to_name[m.group(0)], text)
        return text
else:
    def rnt(text): return text

# ── Load function blocks ──
print("Loading parsed functions...")
with open(PKL, 'rb') as f:
    data = pickle.load(f)
class_methods = data['class_methods']  # key = Class_N or known name
global_funcs = data['global_funcs']
print(f"  {len(class_methods)} classes, {len(global_funcs)} globals")

# ── Generate ──
print("Generating src_csp/...")
if os.path.exists(OUT): shutil.rmtree(OUT)

for cls, methods in class_methods.items():
    csp_id = name_to_csp.get(cls, cls)  # if cls is already known name, find Class_N
    out_name = rename_map.get(cls, cls)  # if cls is Class_N, find known name
    mod = get_module(out_name)
    d = os.path.join(OUT, mod)
    os.makedirs(d, exist_ok=True)
    parent = get_parent(csp_id)
    inherit = f' : public {parent}' if parent else ''
    
    # Build member map
    mm = build_member_map(out_name, csp_id)
    clspfx = out_name
    
    # Pre-compile offset→member rewrite patterns
    off_pats = {}
    for off, (mname, mtype, msz) in mm.items():
        pref = mname if not mname.startswith('field_') else f'{clspfx}_{mname}'
        alts = []
        # Byte offset format: *(this + N), *(this + 0xNN)
        for s in [f'{off}', f'0x{off:X}', f'0x{off:x}']:
            alts.append(r'\*\(this\s*\+\s*' + re.escape(s) + r'\)')
            alts.append(r'\*\([^)]*\)\(this\s*\+\s*' + re.escape(s) + r'\)')
        # DWORD index format: IDA treats this as _DWORD*, so *(this + idx) where idx = off/4
        if off % 4 == 0 and off > 0:
            idx = off // 4
            for s in [f'{idx}', f'0x{idx:X}']:
                alts.append(r'\*\(this\s*\+\s*' + re.escape(s) + r'\)')
                alts.append(r'\*\([^)]*\)\(this\s*\+\s*' + re.escape(s) + r'\)')
        off_pats[off] = (re.compile('|'.join(alts)), pref)
    
    # ── .hpp ──
    hp = os.path.join(d, f'{out_name.lower()}.hpp')
    with open(hp, 'w') as f:
        f.write(f'#pragma once\n// CSP: {out_name}\n\nclass {out_name}{inherit} {{\npublic:\n')
        prev = 0
        for off, (mname, mtype, msz) in sorted(mm.items(), key=lambda x: x[0]):
            # Add word-size padding before this field if there's a gap
            if off > prev:
                pad_sz = off - prev
                f.write(f'    _BYTE {clspfx}_pad_{prev:X}[{pad_sz}];\n')
            # Write field with class prefix
            pref = f'{clspfx}_{mname}' if mname.startswith('field_') else mname
            f.write(f'    {mtype} {pref};\n')
            prev = off + msz
        # Method declarations
        seen = set()
        for body in methods:
            m = re.search(r'(\w+)::(\w+)\s*\(', body[0])
            if m and m.group(2) not in seen and m.group(2) not in ('vftable','vfptr','`vftable'):
                seen.add(m.group(2))
                am = re.search(r'(0x[0-9A-Fa-f]{8})', body[0])
                if am: f.write(f'    // {am.group(1)}\n')
                f.write(f'    void {m.group(2)}();\n')
        f.write('};\n')
    
    # ── .cpp ──
    cp = os.path.join(d, f'{out_name.lower()}.cpp')
    with open(cp, 'w') as f:
        f.write(f'#include "{out_name.lower()}.hpp"\n\n')
        for body in methods:
            sig = body[0]
            body_lines = body[1:] if len(body) > 1 else []
            
            # Class_N → known name in signature
            new_sig = re.sub(r'\b__thiscall\b|\b__cdecl\b|\b__fastcall\b|\b__stdcall\b', '', rnt(sig)).strip()
            am = re.search(r'(0x[0-9A-Fa-f]{8})', sig)
            if am: f.write(f'// IDA: {am.group(1)}\n')
            f.write(f'// IDA: {new_sig}\n')
            f.write(f'{new_sig}\n{{\n')
            
            # Detect vN = this in this function's body
            vn_this = set()
            for bl in body_lines:
                m = re.search(r'v(\d+)\s*=\s*(?:\([^)]*\)\s*)?this\s*;', bl)
                if m: vn_this.add(int(m.group(1)))
            
            for bl in body_lines:
                if bl.strip() in ('{','}'): continue
                line = rnt(bl)
                # vN → this
                for vn in vn_this:
                    line = re.sub(rf'\bv{vn}\b', 'this', line)
                # *(this+N) → this->member
                for off, (pat, pref) in sorted(off_pats.items(), key=lambda x: -x[0]):
                    line = pat.sub(f'this->{pref}', line)
                line = re.sub(r'\b__thiscall\b|\b__cdecl\b|\b__fastcall\b|\b__stdcall\b', '', line)
                f.write(f'    {line}\n')
            f.write('}\n\n')

# ── Build global offset index for unnamed class methods ──
# Map byte_off → set of (class_name, member_prefix)
print("Building global offset index...")
global_off_idx = {}  # byte_off → {class_name}
for csp_id, info in csp_cls.items():
    cls_name = rename_map.get(csp_id, csp_id)
    for off in info.get('offsets', []):
        o = int(off, 16) if isinstance(off, str) and off.startswith('0x') else int(off)
        if 0 < o < 1000000 and o % 4 == 0:
            if o not in global_off_idx:
                global_off_idx[o] = set()
            global_off_idx[o].add(cls_name)
print(f"  {len(global_off_idx)} unique offsets indexed")

# Build global regex patterns (for offsets that appear in exactly one class)
global_off_pats = {}
for off, classes in global_off_idx.items():
    if len(classes) == 1:  # unique to one class
        cls_name = list(classes)[0]
        pref = f'{cls_name}_field_{off:X}'
        alts = []
        for s in [f'{off}', f'0x{off:X}']:
            alts.append(r'\*\(this\s*\+\s*' + re.escape(s) + r'\)')
            alts.append(r'\*\([^)]*\)\(this\s*\+\s*' + re.escape(s) + r'\)')
        idx = off // 4
        for s in [f'{idx}', f'0x{idx:X}']:
            alts.append(r'\*\(this\s*\+\s*' + re.escape(s) + r'\)')
            alts.append(r'\*\([^)]*\)\(this\s*\+\s*' + re.escape(s) + r'\)')
        try:
            global_off_pats[off] = (re.compile('|'.join(alts)), pref)
        except: pass
print(f"  {len(global_off_pats)} unique offset patterns for global functions")

# ── Global functions ──
if global_funcs:
    d = os.path.join(OUT, '_global')
    os.makedirs(d, exist_ok=True)
    gp = os.path.join(d, 'globals.cpp')
    resolved_count = 0
    with open(gp, 'w') as f:
        f.write('#include <cstdint>\n\n')
        for body in global_funcs:
            sig = body[0]
            body_lines = body[1:] if len(body) > 1 else []
            am = re.search(r'(0x[0-9A-Fa-f]{8})', sig)
            if am: f.write(f'// IDA: {am.group(1)}\n')
            ns = re.sub(r'\b__thiscall\b|\b__cdecl\b|\b__fastcall\b|\b__stdcall\b', '', sig).strip()
            f.write(f'{ns}\n{{\n')
            
            # Detect class from CSP data (func_to_class primary, csp_funcs fallback)
            this_class = None
            addr_match = re.search(r'(?:sub_|)([0-9A-Fa-f]{6,8})\b', sig.split('//')[0])
            if addr_match:
                norm_addr = '0x' + format(int(addr_match.group(1), 16), '08X')
                # Primary: func_to_class
                ftc_val = func_to_class.get(norm_addr)
                if ftc_val and not ftc_val.startswith('Class_'):
                    this_class = ftc_val  # known class name
                # Fallback: csp_funcs params[0].real_type (gives Class_N* → rename)
                if not this_class:
                    func_data = csp_funcs.get(norm_addr, {})
                    params = func_data.get('params', [])
                    if params:
                        rt = params[0].get('real_type', '')
                        if rt.endswith('*'):
                            this_class = rename_map.get(rt[:-1], rt[:-1])
            
            # Build per-function offset patterns if class is known
            func_off_pats = {}
            if this_class:
                mm = build_member_map(this_class, name_to_csp.get(this_class, this_class))
                for off, (mname, mtype, msz) in mm.items():
                    pref = mname if not mname.startswith('field_') else f'{this_class}_{mname}'
                    alts = []
                    for s in [f'{off}', f'0x{off:X}']:
                        alts.append(r'\*\(this\s*\+\s*' + re.escape(s) + r'\)')
                        alts.append(r'\*\([^)]*\)\(this\s*\+\s*' + re.escape(s) + r'\)')
                    idx = off // 4
                    if off % 4 == 0 and off > 0:
                        for s in [f'{idx}', f'0x{idx:X}']:
                            alts.append(r'\*\(this\s*\+\s*' + re.escape(s) + r'\)')
                            alts.append(r'\*\([^)]*\)\(this\s*\+\s*' + re.escape(s) + r'\)')
                    func_off_pats[off] = (re.compile('|'.join(alts)), pref)
                resolved_count += 1
            else:
                # Fallback: use global offset index
                func_off_pats = global_off_pats
            
            # Detect vN = this
            vn_this = set()
            for bl in body_lines:
                m = re.search(r'v(\d+)\s*=\s*(?:\([^)]*\)\s*)?this\s*;', bl)
                if m: vn_this.add(int(m.group(1)))
            
            for bl in body_lines:
                bs = bl.strip()
                if bs and bs not in ('{','}'):
                    line = rnt(bl)
                    for vn in vn_this:
                        line = re.sub(rf'\bv{vn}\b', 'this', line)
                    for off, (pat, pref) in sorted(func_off_pats.items(), key=lambda x: -x[0]):
                        line = pat.sub(f'this->{pref}', line)
                    f.write(f'    {line}\n')
            f.write('}\n\n')
    print(f"  Global funcs resolved via CSP: {resolved_count}/{len(global_funcs)}")

cpp = sum(1 for r,_,fs in os.walk(OUT) for fn in fs if fn.endswith('.cpp'))
hpp = sum(1 for r,_,fs in os.walk(OUT) for fn in fs if fn.endswith('.hpp'))
print(f"Done! {cpp} .cpp + {hpp} .hpp = {cpp+hpp} files")
