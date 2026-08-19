import json, os, re

with open('D:/RA2YR_ReSource/scripts/ida_class_coverage.json') as f:
    data = json.load(f)

high = [m for m in data['MISSING'] if m.get('priority') == 'HIGH']
high.sort(key=lambda x: -x['method_count'])

# Check which class names actually appear in source files
src_dir = 'D:/RA2YR_ReSource/src'
for m in high:
    name = m['ida_name']
    # Search for the class name in .hpp and .cpp
    found = False
    for root, dirs, files in os.walk(src_dir):
        for fname in files:
            if fname.endswith(('.hpp', '.cpp')):
                try:
                    with open(os.path.join(root, fname), 'rb') as f:
                        content = f.read()
                    if name.encode() in content:
                        found = True
                        rel = os.path.relpath(os.path.join(root, fname), src_dir)
                        break
                except:
                    pass
        if found:
            break
    if not found:
        # Try existing defined class name from the JSON
        matched = False
        for d in data['DEFINED']:
            if d.get('matched_header') == name:
                matched = True
                break
        if not matched:
            for d in data.get('FORWARD_ONLY', []):
                if d.get('matched_header') == name:
                    matched = True
                    break
        
        if not matched and not found:
            print(f"NOT IN SOURCE: {name} ({m['method_count']} methods)")
