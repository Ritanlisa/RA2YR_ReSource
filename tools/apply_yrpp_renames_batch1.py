import json, idc

with open('D:/RA2YR_ReSource/tools/rename_final.json') as f:
    renames = json.load(f)

batch = renames[:60]
for r in batch:
    try:
        addr = int(r['addr'], 16)
        old = idc.get_name(addr)
        if old and old.startswith('callsYRpp_'):
            idc.set_name(addr, r['new'], idc.SN_NOWARN)
        else:
            pass
    except Exception as e:
        pass

print(f"Applied {len(batch)} renames (batch 1/4)")
