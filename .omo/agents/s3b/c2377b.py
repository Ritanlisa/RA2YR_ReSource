import json,re
cf=json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3a\cf_refresh.json',encoding='utf-8'))
recs=cf['records']
n=0
for a,r in recs.items():
    if 'C2377' in (r['note'] or ''):
        print(a,'|',r['unit'],'|',(r['note'] or '')[:300].replace('\n',' | '))
        n+=1
        if n>=4: break
