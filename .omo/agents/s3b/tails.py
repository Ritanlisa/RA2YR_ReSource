import json,re,glob,os
cf=json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3a\cf_refresh.json',encoding='utf-8'))
recs=cf['records']
FL=re.compile(r"(D:\\[^(]+?)\((\d+)\)")
addrs=[a for a,r in recs.items() if re.search(r'error (C2533|C2380)', r['note'] or '')]
for a in addrs[:6]:
    m=FL.search(recs[a]['note']); d=os.path.dirname(m.group(1))
    root=os.path.dirname(d)
    h=a[2:].upper().lstrip('0')
    c=glob.glob(os.path.join(root,'*_%s.cpp'%h))
    print('='*60); print(a, root, 'found' if c else 'MISSING')
    if c:
        txt=open(c[0],encoding='utf-8',errors='replace').read()
        L=[x for x in txt.split('\n') if x.strip()]
        print('  head:', L[4][:110])
        print('  tail:', ' || '.join(x.strip()[:70] for x in L[-4:]))
