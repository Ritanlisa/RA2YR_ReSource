import json,re,glob
for p in glob.glob(r'D:\RA2YR_ReSource\.omo\decomp_batch\s3b\probe_pun\**\part_report.json', recursive=True):
    rep=json.load(open(p,encoding='utf-8'))
    for r in rep['results']:
        if r['verdict']!='COMPILE_FAIL': continue
        n=r.get('note') or ''
        m=re.search(r'(D:\\[^(]+?)\((\d+)\)\s*:\s*error (C\d{4})', n)
        print('='*70); print(r['addr'], n[:130])
        if m:
            L=open(m.group(1),encoding='utf-8',errors='replace').readlines(); ln=int(m.group(2))
            for i in range(max(0,ln-3), min(len(L), ln+2)):
                print(('>>' if i==ln-1 else '  ')+'%4d %s'%(i+1,L[i].rstrip()[:160]))
