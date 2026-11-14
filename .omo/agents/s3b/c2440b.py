import json,re,os
from collections import Counter
cf=json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3a\cf_refresh.json',encoding='utf-8'))
recs=cf['records']
FL=re.compile(r"(D:\\[^(]+?)\((\d+)\)\s*:\s*error (C\d{4}):\s*([^;\r\n]*)")
byc=Counter(); lines=Counter()
for a,r in recs.items():
    m=FL.search(r['note'] or '')
    if not m: continue
    code,msg=m.group(3),m.group(4)
    if code not in ('C2440','C2664','C2446'): continue
    byc[(code,msg)]+=1
for (c,m),n in byc.most_common(28): print(f'{n:4d} {c} {m[:120]}')
print('--- sample lines C2440 ---')
n=0
for a,r in recs.items():
    m=FL.search(r['note'] or '')
    if not m or m.group(3)!='C2440': continue
    p,ln=m.group(1),int(m.group(2))
    try: L=open(p,encoding='utf-8',errors='replace').readlines()
    except Exception: continue
    print(a,'|',m.group(4)[:60],'|',L[ln-1].strip()[:120] if ln-1<len(L) else '')
    n+=1
    if n>=10: break
