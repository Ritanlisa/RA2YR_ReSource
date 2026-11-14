import json,re,os,glob
cf=json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3a\cf_refresh.json',encoding='utf-8'))
recs=cf['records']
FL=re.compile(r"(D:\\[^(]+?)\((\d+)\)")
n=0
for a,r in recs.items():
    if 'IStream' not in (r['note'] or ''): continue
    m=FL.search(r['note'])
    if not m: continue
    p=m.group(1); ln=int(m.group(2))
    try: L=open(p,encoding='utf-8',errors='replace').readlines()
    except Exception: continue
    print(a,'|',L[ln-1].strip()[:150] if ln-1<len(L) else '')
    n+=1
    if n>=10: break
