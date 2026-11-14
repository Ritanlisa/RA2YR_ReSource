import json
cf=json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3a\cf_refresh.json',encoding='utf-8'))
print('snapshot_cf', cf['snapshot_cf'])
print('n codes', len(cf['codes']))
print(sorted(cf['codes'].items(), key=lambda x:-x[1])[:8])
print('records', len(cf['records']))
k=list(cf['records'])[0]
print(k, cf['records'][k])
