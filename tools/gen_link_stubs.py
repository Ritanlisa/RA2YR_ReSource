"""Generate src/_generated/link_stubs.cpp — empty stub definitions for every
unresolved symbol reported by the linker (legacy declarations that never had
bodies; the exe link needs them as placeholders until C-line translation).

Parses the linker's demangled symbol list (.omo/missing_syms.txt), groups by
class/namespace, locates the declaring header via grep, and emits stub
definitions. Access specifiers (public:/private:/protected:/static) are
stripped — definitions repeat the declaration signature.
"""
import re
import subprocess
import collections

syms = [ln.strip() for ln in open('.omo/missing_syms.txt', encoding='utf-8')
        if ln.strip() and 'thunk' not in ln]

TYPE_MAP = [
    ('struct _GUID const &', 'const GUID&'),
    ('struct _GUID &', 'GUID&'),
    ('struct _GUID', 'GUID'),
    ('class ra2::game::ObjectClass *', 'ra2::game::ObjectClass*'),
    ('class ra2::game::TechnoClass *', 'ra2::game::TechnoClass*'),
    ('class ra2::game::HouseClass *', 'ra2::game::HouseClass*'),
    ('class gamemd::', 'gamemd::'),
    ('struct gamemd::', 'gamemd::'),
    ('enum gamemd::', 'gamemd::'),
    ('class gamemd::', 'gamemd::'),
    ('void * *', 'void**'),
    ('void *', 'void*'),
    ('int *', 'int*'),
    ('char const *', 'const char*'),
    ('unsigned long', 'unsigned long'),
    ('unsigned int', 'unsigned int'),
    ('unsigned char', 'unsigned char'),
]

def parse_args(argstr):
    argstr = argstr.strip()
    if argstr in ('', 'void'):
        return []
    parts = []
    depth = 0
    cur = ''
    for ch in argstr:
        if ch == '<':
            depth += 1
        elif ch == '>':
            depth -= 1
        if ch == ',' and depth == 0:
            parts.append(cur.strip())
            cur = ''
        else:
            cur += ch
    if cur.strip():
        parts.append(cur.strip())
    out = []
    for p in parts:
        for a, b in TYPE_MAP:
            p = p.replace(a, b)
        p = p.replace(' *', '* ').replace('* ', '*').replace(' &', '&')
        out.append(p)
    return out

def parse_symbol(s):
    s = re.sub(r'^(public|private|protected):\s+', '', s)
    s = re.sub(r'^static\s+', '', s)
    s = re.sub(r'^virtual\s+', '', s)
    m = re.match(r'^(?:([\w:<>&* ]+?)\s+)?__thiscall\s+(.+)$', s)
    if m:
        ret, rest = m.group(1), m.group(2)
    else:
        m = re.match(r'^(?:([\w:<>&* ]+?)\s+)?__stdcall\s+(.+)$', s)
        if m:
            ret, rest = m.group(1), m.group(2)
        else:
            m = re.match(r'^(?:([\w:<>&* ]+?)\s+)?__cdecl\s+(.+)$', s)
            if m:
                ret, rest = m.group(1), m.group(2)
            else:
                ret, rest = None, s
    m2 = re.match(r'^([\w:<>]+)\((.*)\)$', rest)
    if not m2:
        return None
    name = m2.group(1)
    args = parse_args(m2.group(2))
    # return type default
    ret = (ret or 'void').replace('struct ', '').replace('class ', '').replace('enum ', '')
    return name, ret, args

# group by the top class/namespace to locate headers
groups = collections.defaultdict(list)
all_parsed = []
for s in syms:
    p = parse_symbol(s)
    if not p:
        print(f"SKIP unparsed: {s[:80]}")
        continue
    name, ret, args = p
    all_parsed.append((name, ret, args))
    parts = name.split('::')
    cls = parts[-2] if len(parts) >= 2 else parts[0]
    groups[cls].append(name)

# locate headers per class
header_map = {}
for cls in groups:
    r = subprocess.run(['grep', '-rlE', f'(class|struct) {cls}[^A-Za-z0-9_]', 'src/', '--include=*.hpp'],
                       capture_output=True, text=True)
    files = [f for f in r.stdout.split() if f]
    header_map[cls] = files[0].replace('\\', '/') if files else None

includes = sorted({h for h in header_map.values() if h})
out = []
out.append('// AUTO-GENERATED link stubs - unresolved legacy declarations.')
out.append('// Each body is an empty placeholder pending C-line translation.')
out.append('// Regenerate via tools/gen_link_stubs.py after linking passes.')
out.append('// Suppress legacy using-decl aliasing: this TU combines headers')
out.append('// whose gamemd-local forward declarations collide with the')
out.append('// ra2::game::X using-decls (C2874). Pointer-only usage makes the')
out.append('// incomplete gamemd::X declarations sufficient here.')
out.append('#define GAMEMD_USING_ObjectClass')
out.append('#define GAMEMD_USING_FootClass')
out.append('// G42.35a: with those using-decls suppressed, the gamemd-local fwd')
out.append('// must be self-supplied at TU top. AbstractClass is EXCLUDED on')
out.append('// purpose: headers use it as a base class via the unguarded')
out.append('// using ::ra2::game::AbstractClass; alias -- a gamemd-local fwd of')
out.append('// it would collide (C2874) and demote the base to incomplete.')
out.append('namespace gamemd { class ObjectClass; class FootClass; }')
out.append('#include <windows.h>')
out.append('#include <cstdint>')
for h in includes:
    out.append(f'#include "{h}"')
out.append('')
out.append('namespace gamemd {')
# ---- truth emission (G42.52): resolve symbol -> addr -> cache body ----
import json as _json, io as _io, re as _re2
BN = _json.load(_io.open('signals.json', encoding='utf-8',
                         errors='replace'))['_by_name']
def _one(cname):
    ent = BN.get(cname)
    if isinstance(ent, dict):
        aa = []
        for x in (ent.get('symbols') or {}):
            try:
                aa.append(int(x, 16))
            except ValueError:
                pass
        if len(aa) == 1:
            return aa[0]
    return None

# G43 identity archaeology (2026-10-05): invented-name link stubs whose true
# binary address sits under a MISNOMER key in signals.json (or under a
# differently-named owner). Every mapping below was verified by reading the
# owning class's vtable straight out of the original PE (RTTI chain: type
# descriptor -> COL -> vtable[-1]) plus body semantics / signature match.
# This table takes precedence over the alias cascade. Do NOT add entries
# without binary evidence; bodies are emitted verbatim from ida_cache.
STUB_ADDR_OVERRIDES = {
    # --- TEventClass (vtable0 @ 0x7F5578; slot order QI/AddRef/Release/
    #     GetClassID@12/IsDirty@16/Load@20/Save@24/GetSizeMax@28/dtor@32) ---
    # signals "TEventClass::ddtor"@0x71F880 is a misnomer: body writes a
    # 16-byte GUID to the out param (E_POINTER guard) = GetClassID.
    'gamemd::TEventClass::GetClassID': 0x71F880,
    # slot@20; 1 arg (this, IStream*); delegates to AbstractClass::SaveLoad_Prefix_0.
    'gamemd::TEventClass::Load': 0x71F8C0,
    # slot@24; 2 args (this, IStream*, flag); delegates to AbstractClass::SaveLoad_Prefix.
    'gamemd::TEventClass::Save': 0x71F930,
    # signals "TEventClass::Fire"@0x71FA80 is a misnomer: body reinstalls the
    # 4 TEventClass vtables, AnnounceExpiredPointer, removes this from 3
    # vectors, calls AbstractClass::DTOR, frees on (a2 & 1) = deleting dtor.
    'gamemd::TEventClass::ddtor': 0x71FA80,
    # --- TacticalClass (vtable0 @ 0x7F4348; same IPersistStream slot order) ---
    # signals "Tactical::ddtor"@0x6DBCE0 misnomer: GUID writer = GetClassID.
    'gamemd::TacticalClass::GetClassID': 0x6DBCE0,
    # slot@20; (this, IStream*); delegates to AbstractClass::SaveLoad_Prefix_0.
    'gamemd::TacticalClass::Load': 0x6DBD20,
    # slot@24; (this, IStream*, flag); delegates to AbstractClass::SaveLoad_Prefix.
    'gamemd::TacticalClass::Save': 0x6DBE00,
    # --- MapClass (vtable0 @ 0x7ED404): tree virtuals = binary slots
    #     +0x58..+0x74 in declaration order (8-slot run, dtor family at +0x10) ---
    # slot@12; signals "IsCellPassable" misnomer: body = x + (y<<9) cell index,
    # 0x40000 (kMaxCells) bound, returns (cell[75] >> 3) & 1 = visibility bit.
    'gamemd::MapClass::IsVisible': 0x5656D0,
    'gamemd::MapClass::AllocateCells': 0x565AA0,     # slot@0x58 InitCellVector
    'gamemd::MapClass::DestructCells': 0x565B00,     # slot@0x5C FreeAllCells
    'gamemd::MapClass::ConstructCells': 0x565BC0,    # slot@0x60 InitAllCells
    'gamemd::MapClass::PointerGotInvalid': 0x577920, # slot@0x64; (this, obj, flag) removes expiring object refs
    'gamemd::MapClass::DraggingInProgress': 0x4AEBE0,# slot@0x68; inherited base stub, body = return 0
    'gamemd::MapClass::UpdateCrates': 0x56BBE0,      # slot@0x6C; crate timers + CrateClass::FindPlacement loop
    'gamemd::MapClass::CreateEmptyMap': 0x565C10,    # slot@0x70; (this, rect*, bool, int8, bool) builds map content
    'gamemd::MapClass::SetVisibleRect': 0x567230,    # slot@0x74; ClipRectIntersection + writes visible rect fields
    # --- DisplayClass (vtable0 @ 0x7E6114) ---
    # slot@0xB8; (this, CellStruct*, bool, ObjectClass*, Action, uint) exact 5-arg match.
    'gamemd::DisplayClass::ConvertAction': 0x4AAE90,
    # slot@0xC0; (this, CoordStruct, CellStruct*, ObjectClass*, Action, uint) exact 5-arg match.
    'gamemd::DisplayClass::LeftMouseButtonUp': 0x4AB9B0,
    # --- MPGameModeClass (= binary MultiplayerGameMode, vtable0 @ 0x7EED60) ---
    # slot@0x80 (header annotation agrees); FindStartPositions + per-house
    # SetMapSeed. NOTE: real function takes only this; the 4-arg stub
    # signature is a tree-model artifact.
    'gamemd::MPGameModeClass::AssignStartingPositionsToHouse': 0x5D6BE0,
}

def truth_body(name):
    parts = name.split('::')
    cls = parts[-2] if len(parts) >= 2 else parts[0]
    meth = parts[-1]
    a = STUB_ADDR_OVERRIDES.get(name)
    if a is None:
        for c in (name, meth, cls + '::Construct', cls + '::Constructor',
                  cls + '::' + cls, 'DSurface::' + meth, cls + '::' + meth):
            a = _one(c)
            if a:
                break
        else:
            return None, None
    for nm in ('.omo/ida_cache/func_0x%08X.json' % a,
               '.omo/ida_cache/func_0x%X.json' % a):
        try:
            d = _json.load(_io.open(nm, encoding='utf-8', errors='replace'))
        except OSError:
            continue
        code = d.get('decompiled') or ''
        lines = code.split(chr(10))
        try:
            s = next(i for i, ln in enumerate(lines) if ln.strip() == '{')
            e = next(i for i in range(len(lines) - 1, s, -1)
                     if lines[i].strip() == '}')
        except StopIteration:
            continue
        if e <= s:
            continue
        TY = {'_DWORD': 'unsigned int', '_BYTE': 'unsigned char',
              '_WORD': 'unsigned short', '_QWORD': 'unsigned __int64',
              '_BOOL8': 'unsigned int', '_UNKNOWN': 'void',
              '_INTEGER': '__int64', '_CHAR': 'char'}
        body = chr(10).join('  ' + x.rstrip() if x.strip() else ''
                            for x in lines[s + 1:e])
        for k, v in TY.items():
            body = _re2.sub(r'' + k + r'', v, body)
        return body, a
    return None, None

skipped = 0
truth_filled = 0
for name, ret, args in all_parsed:
    parts = name.split('::')
    cls = parts[-2] if len(parts) >= 2 else parts[0]
    if header_map.get(cls) is None:
        skipped += 1
        continue
    argstr = ', '.join(f'{a} a{i}' for i, a in enumerate(args))
    is_ctor = '::' in name and name.split('::')[-1] == name.split('::')[0].split('<')[0]
    # build definition; drop calling-convention keywords (member fns)
    sig = f'{name}({argstr})'
    tb, taddr = truth_body(name) if not is_ctor else (None, None)
    if tb is not None:
        out.append(f'// truth-filled 0x{taddr:X} (G42.52 truth-emitting generator)')
        out.append(f'{ret} {sig}'.rstrip() + chr(10) + '{' + chr(10)
                   + tb + chr(10) + '}')
        truth_filled += 1
        continue
    body = '{}'
    if ret != 'void' and not is_ctor:
        body = '{ return {}; }'
    out.append(f'// link stub (no binary body yet)')
    out.append(f'{sig} {body}' if not ret or ret == 'void' or is_ctor else f'{ret} {sig} {body}')
out.append('} // namespace gamemd')
open('src/_generated/link_stubs.cpp', 'w', encoding='latin-1', newline='').write('\n'.join(out) + '\n')
print(f"stubs written: {len(all_parsed) - skipped} (truth-filled: {truth_filled}), skipped (no header): {skipped}")
