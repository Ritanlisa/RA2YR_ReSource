import json,re,os,glob
cf=json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3a\cf_refresh.json',encoding='utf-8'))
recs=cf['records']
FL=re.compile(r"(D:\\[^(]+?)\((\d+)\)")
n=0
for a,r in recs.items():
    if 'error C2064' not in (r['note'] or ''): continue
    m=FL.search(r['note'])
    if not m: continue
    p=m.group(1); ln=int(m.group(2))
    try: L=open(p,encoding='utf-8',errors='replace').readlines()
    except Exception: continue
    print(a,'|',L[ln-1].strip()[:150])
    n+=1
    if n>=8: break
print('---- param decls ----')
for a in ['0x4068f0','0x4a3c30','0x4a3dd0']:
    m=FL.search(recs[a]['note'])
    if not m: continue
    L=open(m.group(1),encoding='utf-8',errors='replace').readlines()
    print(a, [x.strip() for x in L if 'p2' in x or 'p0' in x][:4])
