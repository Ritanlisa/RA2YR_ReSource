import json,glob,re
for p in glob.glob(r'D:\RA2YR_ReSource\.omo\decomp_batch\s3b\probe_asm\**\part_report.json', recursive=True):
    rep=json.load(open(p,encoding='utf-8'))
    for r in rep['results']:
        if r['verdict']!='COMPILE_FAIL': continue
        n=r.get('note') or ''
        m=re.search(r'(D:\\[^(]+?)\((\d+)\)\s*:\s*error (C\d{4})', n)
        print('='*70); print(r['addr'], n[:150])
        if m:
            L=open(m.group(1),encoding='utf-8',errors='replace').readlines(); ln=int(m.group(2))
            for i in range(max(0,ln-4), min(len(L), ln+3)):
                print(('>>' if i==ln-1 else '  ')+'%4d %s'%(i+1,L[i].rstrip()[:150]))
