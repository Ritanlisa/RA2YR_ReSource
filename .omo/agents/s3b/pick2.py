import json,re
b=json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3b\rows.json',encoding='utf-8'))
import collections
# pick probes for F3/F4/F5
sel={}
for a,code,msg,line in b:
    if code=='C2377' and 'C2377' not in sel: sel['C2377']=a
    if code=='C2533' and 'C2533' not in sel: sel['C2533']=a
    if code=='C2380' and 'C2380' not in sel: sel['C2380']=a
    if code=='C2061' and 'C2061' not in sel: sel['C2061']=a
    if code=='C2146' and 'C2146' not in sel: sel['C2146']=a
print(','.join(sel.values()))
print(sel)
