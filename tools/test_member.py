import json
data = json.load(open('tools/member_lookup.json'))
print('Total classes:', len(data))
total_members = sum(len(v) for v in data.values())
print('Total member entries:', total_members)
classes = list(data.keys())
print('First 20 classes:', classes[:20])
cls_name, cls_members = list(data.items())[0]
mems = sorted(cls_members.items(), key=lambda x: int(x[0]))
print(f'--- {cls_name} ({len(cls_members)} members) ---')
for k,v in mems[:8]:
    offset = int(k)
    name = v["name"]
    typ = v["type"]
    print(f'  +0x{offset:04X}: {name} ({typ})')
print(f'Last 5 classes: {classes[-5:]}')
