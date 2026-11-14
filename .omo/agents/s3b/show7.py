import json,re,glob
for p in glob.glob(r'D:\RA2YR_ReSource\.omo\decomp_batch\s3b\probe_bit\**\part_report.json', recursive=True):
    rep=json.load(open(p,encoding='utf-8'))
    for r in rep['results']:
        if r['verdict']!='COMPILE_FAIL': continue
        n=r.get('note') or ''
        m=re.search(r'(D:\\[^(]+?)\((\d+)\)\s*:\s*error (C\d{4})', n)
        print('='*60); print(r['addr'], n.split(';')[0][-90:])
        if m:
            L=open(m.group(1),encoding='utf-8',errors='replace').readlines(); ln=int(m.group(2))
            for i in range(max(0,ln-2), min(len(L), ln+1)):
                print(('>>' if i==ln-1 else '  ')+L[i].rstrip()[:170])
