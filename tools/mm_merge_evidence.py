import json, sys, re
sys.path.insert(0, 'tools')
import audit_consistency as ac

t = json.load(open('.omo/resolve_table.json', encoding='utf-8'))
ev = json.load(open('.omo/decompile_evidence.json', encoding='utf-8'))

def vowner(v):
    if not v:
        return None
    v = v.replace("const ", "").strip()
    m = re.match(r"([A-Za-z_][\w]*)::", v)
    if m:
        return m.group(1)
    m = re.match(r"([A-Za-z_][\w]*)_[Vv](?:table|ftable)", v)
    if m:
        return m.group(1)
    return None

def pseudo_cm(p):
    m = re.search(r"\b([A-Za-z_]\w*)::(\w+)\s*\(", p or "")
    return (m.group(1), m.group(2)) if m else (None, None)

for r in t:
    a = r['addr'].replace('0X', '0x')
    e = ev.get(a, {})
    vts = []
    for x in e.get('data_xrefs', []):
        if x.get('seg') in ('.rdata', '.data') and x.get('vtbl'):
            o = vowner(x['vtbl'])
            if o and o not in vts:
                vts.append(o)
    r['vtbl_owners'] = vts
    pc, pm = pseudo_cm(e.get('pseudo_head', ''))
    r['pseudo_class'] = pc
    r['pseudo_method'] = pm
    tif = (e.get('tif') or e.get('type') or '')
    r['cc'] = 'thiscall' if 'thiscall' in tif else ('fastcall' if 'fastcall' in tif else ('stdcall' if 'stdcall' in tif else ('cdecl' if 'cdecl' in tif else '?')))
    r['callees'] = e.get('callees', [])[:6]
    r['pseudo'] = e.get('pseudo_head', '')[:130]

json.dump(t, open('.omo/resolve_table.json', 'w', encoding='utf-8'), indent=1)

def lcls(n):
    return n.split('::')[0] if (n and '::' in n) else None

nv = [r for r in t if r['vtbl_owners']]
print('Total:', len(t), '| with vtable owner:', len(nv))
mism = [r for r in nv if lcls(r['live']) and lcls(r['live']) not in r['vtbl_owners']]
print('vtable owner != live class:', len(mism))
for r in mism:
    print('  ', r['addr'], 'live=', r['live'], 'vtbl=', r['vtbl_owners'], 'hpp=', r['hpp'])
