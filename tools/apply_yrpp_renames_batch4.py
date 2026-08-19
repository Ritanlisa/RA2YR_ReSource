import json, idc

with open('D:/RA2YR_ReSource/tools/rename_final.json') as f:
    renames = json.load(f)

batch = renames[180:]
for r in batch:
    try:
        addr = int(r['addr'], 16)
        old = idc.get_name(addr)
        if old and old.startswith('callsYRpp_'):
            idc.set_name(addr, r['new'], idc.SN_NOWARN)
    except: pass
print(f"Applied {len(batch)} renames (batch 4/4)")
