import json,re
cf=json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3a\cf_refresh.json',encoding='utf-8'))
codes=cf['codes']
print('C2377 in codes:', codes.get('C2377'))
recs=cf['records']
hits=[a for a,r in recs.items() if 'C2377' in (r['note'] or '')]
print('records with C2377:', len(hits))
if hits:
    a=hits[0]; print(a, (recs[a]['note'] or '')[:400])
else:
    # find via code field
    bycode=[a for a,r in recs.items() if r.get('code')=='C2377']
    print('by code:', len(bycode))
    if bycode:
        a=bycode[0]; print(a, (recs[a]['note'] or '')[:400])
