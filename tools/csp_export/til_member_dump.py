# IDA-side: dump every named struct/union member table from the local til.
# G42.57ax: canonical member-name re-sync source (til is the naming
# authority per AGENTS.md; regenerated bodies carry til names, while
# csp_canon/member tables still carry pre-flattening u32_N-style names).
# Output: .omo/til_members.json  {StructName: {"size": N,
#          "members": {"0xOFF": {"name":, "type":, "size":}}}}
import json
import ida_typeinf

TIL = ida_typeinf.get_idati()
N = ida_typeinf.get_ordinal_count(TIL)
OUT = {}
skipped = 0
for o in range(1, N + 1):
    tif = ida_typeinf.tinfo_t()
    if not tif.get_numbered_type(TIL, o):
        continue
    name = tif.dstr()
    if not name or not tif.is_udt():
        continue
    udt = ida_typeinf.udt_type_data_t()
    if not tif.get_udt_details(udt):
        skipped += 1
        continue
    members = {}
    try:
        size = tif.get_size()
    except Exception:
        size = 0
    for i in range(udt.size()):
        m = udt.at(i)
        try:
            off = int(m.offset // 8)
            sz = int((m.size + 7) // 8)
        except Exception:
            continue
        mt = m.type.dstr() if m.type else ''
        members['0x%X' % off] = {'name': m.name, 'type': mt, 'size': sz}
    OUT[name] = {'size': int(size or 0), 'members': members}

import os
out_path = os.path.join(os.path.dirname(os.path.dirname(os.path.dirname(
    os.path.abspath(__file__)))), '.omo', 'til_members.json')
with open(out_path, 'w', encoding='utf-8') as f:
    json.dump(OUT, f, ensure_ascii=False)
print('structs:', len(OUT), 'skipped(no udt details):', skipped,
      'bytes:', os.path.getsize(out_path))
