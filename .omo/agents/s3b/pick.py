import json
b = json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3b\bodies.json', encoding='utf-8'))
import re
# pick 6 addrs with cmp_cast_star
rx = re.compile(r'\*\(\s*\(\s*unsigned int\s*\)\s*\(')
sel = [a for a, t in b.items() if rx.search(t)][:6]
print(','.join(sel))
rx2 = re.compile(r'\(\s*\(\s*unsigned int\s*\)\s*\([^()]*\)\s*\)\s*->')
print(','.join([a for a, t in b.items() if rx2.search(t)][:6]))
