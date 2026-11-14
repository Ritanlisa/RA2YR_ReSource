import json,re,os,glob,sys
for p in glob.glob(r'D:\RA2YR_ReSource\.omo\decomp_batch\s3b\probe_f1\**\part_report.json', recursive=True):
    rep=json.load(open(p,encoding='utf-8'))
    for r in rep['results']:
        if r['verdict']=='COMPILE_FAIL':
            print(r['addr'], r.get('unit'), '|', (r.get('note') or '')[:260].replace('\n',' | '))
