"""Show clean pseudocode for specified functions."""
import json, re, os, sys

d = r'D:\RA2YR_ReSource\tools\sub_decompiles'
targets = sys.argv[1:] if len(sys.argv) > 1 else ['00401190']

for bn in targets:
    path = os.path.join(d, bn + '.json')
    if not os.path.exists(path):
        print(f"NOT FOUND: {bn}")
        continue
    with open(path) as fp:
        j = json.load(fp)
    p = j.get('pseudocode', '')
    clean = re.sub(r'[\u0001-\u001f]+', ' ', p)
    clean = re.sub(r'\(0{8}[0-9A-Fa-f]{7,8}', '', clean)
    clean = re.sub(r'@<\w+>', '', clean)
    clean = clean.replace('\x60', '').replace('@', '')
    clean = re.sub(r'\s+', ' ', clean).strip()
    print(f'=== {bn} ({j.get("name")}) [{j.get("quality")}] ===')
    print(clean[:800])
    print()
