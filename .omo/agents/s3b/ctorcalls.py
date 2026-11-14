import json, re
from collections import Counter
b = json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3b\bodies.json', encoding='utf-8'))
rx = re.compile(r'\b([A-Za-z_]\w*)::\1\s*\(')
n=0
for a,t in b.items():
    m = rx.search(t)
    if m:
        n+=1
        if n<=5:
            L=t.split('\n'); ln=t[:m.start()].count('\n')
            print(a, '|', L[ln].strip()[:150])
print('bodies with Cls::Cls call:', n)
# also: how many CF addrs are ctor/dtor themselves (method==cls)
