import json,re,os,glob
cf=json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3a\cf_refresh.json',encoding='utf-8'))
recs=cf['records']
FL=re.compile(r"(D:\\[^(]+?)\((\d+)\)")
for a in ['0x67fdf0']:
    m=FL.search(recs[a]['note']); p=m.group(1); ln=int(m.group(2))
    L=open(p,encoding='utf-8',errors='replace').readlines()
    print('='*70, p)
    for i in range(max(0,ln-14), min(len(L), ln+10)):
        print(('>>' if i==ln-1 else '  ')+'%4d %s'%(i+1,L[i].rstrip()[:150]))
