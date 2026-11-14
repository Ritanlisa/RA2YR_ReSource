import json,re,os,glob
cf=json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3a\cf_refresh.json',encoding='utf-8'))
r=cf['records']['0x595ce0']
print(r['note'][:300])
m=re.search(r'(D:\\[^(]+?)\((\d+)\)', r['note'])
p=m.group(1)
print('FILE', p)
L=open(p,encoding='utf-8',errors='replace').readlines()
ln=int(m.group(2))
for i in range(max(0,ln-6), min(len(L), ln+2)):
    print(('>>' if i==ln-1 else '  ')+'%4d %s'%(i+1,L[i].rstrip()[:120]))
