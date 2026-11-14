import json,re,glob
cf=json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3a\cf_refresh.json',encoding='utf-8'))
for a in ['0x41cef0','0x41c8b0','0x43b740','0x4e45a0']:
    n=cf['records'][a]['note']
    m=re.search(r'(D:\\[^(]+?)\((\d+)\)',n)
    print('='*70); print(a, m.group(1) if m else '?', m.group(2) if m else '')
    if m:
        L=open(m.group(1),encoding='utf-8',errors='replace').readlines()
        for i,l in enumerate(L[:12]): print('  %3d %s'%(i+1,l.rstrip()[:120]))
        print('  ...')
        ln=int(m.group(2))
        for i in range(max(0,ln-4), min(len(L), ln+2)): print(('>>' if i==ln-1 else '  ')+'%3d %s'%(i+1,L[i].rstrip()[:140]))
