#!/usr/bin/env python3
"""Fix: remove stubs from completed list."""
import json, os

JSON = os.path.join(os.path.dirname(os.path.abspath(__file__)), "functions.json")

# These are stubs/simplified, not faithful IDA translations
STUBS = {0x52CB50, 0x52FC20, 0x532150, 0x49F5C0, 0x49F620, 0x49F7A0, 0x410230}

with open(JSON) as f:
    data = json.load(f)

fixed = 0
for fn in data['functions']:
    addr = int(fn['address'], 16)
    if addr in STUBS and fn['hook']['completed']:
        fn['hook']['completed'] = False
        fn['hook']['re_file'] = None
        fixed += 1

with open(JSON, 'w') as f:
    json.dump(data, f, indent=2)

total = sum(1 for fn in data['functions'] if fn['hook']['completed'])
print(f"Removed {fixed} stubs. {total} truly completed.")
for a in sorted(STUBS):
    print(f"  - 0x{a:08X}")
