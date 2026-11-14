import json, random
random.seed(20261114)
rows=json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3b\rows.json',encoding='utf-8'))
from collections import defaultdict
by=defaultdict(list)
for a,code,msg,line in rows: by[code].append(a)
sel=[]
for c in ['C2377','C2533','C2380','C2061','C2146','C2027','C2653']:
    xs=sorted(by.get(c) or [])
    random.shuffle(xs)
    sel += xs[:8]
print(','.join(sel))
print(len(sel))
