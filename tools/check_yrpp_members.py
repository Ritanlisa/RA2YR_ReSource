import json

with open('D:/RA2YR_ReSource/tools/yrpp_full.json') as f:
    data = json.load(f)

# Show key type classes
classes_to_show = ['BuildingTypeClass', 'TechnoTypeClass', 'WarheadTypeClass', 'WeaponTypeClass']
for cls_name in classes_to_show:
    if cls_name not in data:
        continue
    members = data[cls_name]
    print(f"\n{cls_name}: {len(members)} members")
    print(f"  {'Offset':>6} {'Type':20s} Name")
    print(f"  {'------':>6} {'----':20s} ----")
    for m in members[:15]:
        print(f"  +{m['offset']:4d}  {m['type']:20s} {m['name']}")
