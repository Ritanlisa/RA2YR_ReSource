import json,re,os
cf=json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3a\cf_refresh.json',encoding='utf-8'))
recs=cf['records']
FL=re.compile(r"(D:\\[^(]+?)\((\d+)\)")
n=0
for a,r in recs.items():
    if 'LPPERSISTSTREAM' not in (r['note'] or ''): continue
    m=FL.search(r['note'])
    if not m: continue
    p=m.group(1); ln=int(m.group(2))
    try: L=open(p,encoding='utf-8',errors='replace').readlines()
    except Exception: continue
    # search body for pPStm usage
    txt=''.join(L)
    uses = sorted(set(re.findall(r'pPStm\s*->\s*(\w+)', txt)))
    print(a, '|', L[ln-1].strip()[:100], '| uses:', uses[:6])
    n+=1
    if n>=8: break
