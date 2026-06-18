import json
with open('D:/RA2YR_ReSource/tools/yrpp_full.json') as f:
    d = json.load(f)

classes = {
    'BuildingTypeClass': [0xD4D, 0xD75, 0xE03, 0xE07, 0xE0B, 0xE0F],
    'TechnoTypeClass': [0xD0C, 0xD30, 0xD38, 0xD65, 0xD8D, 0x100F, 0x1014],
    'WarheadTypeClass': [0xBE, 0x104],
}

for cls_name, targets in classes.items():
    members = d[cls_name]['members']
    print(f"\n{cls_name}:")
    for t in targets:
        matches = [m for m in members if m['offset'] == t]
        if matches:
            m = matches[0]
            print(f"  +{t:#06x} ({t}) -> {m['name']} ({m['type']}, {m['size']}B)")
        else:
            print(f"  +{t:#06x} ({t}) -> NOT IN YRPP")
