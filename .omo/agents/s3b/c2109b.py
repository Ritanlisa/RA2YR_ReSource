import json,re,os
cf=json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3a\cf_refresh.json',encoding='utf-8'))
r=cf['records']['0x402990']
print(r['note'][:200])
m=re.search(r'(D:\\[^(]+?)\((\d+)\)', r['note']); p=m.group(1); ln=int(m.group(2))
L=open(p,encoding='utf-8',errors='replace').readlines()
print('FILE', p)
for i,l in enumerate(L[:24]): print('%4d %s'%(i+1,l.rstrip()[:130]))
print('...')
for i in range(max(0,ln-4), min(len(L), ln+2)): print(('>>' if i==ln-1 else '  ')+'%4d %s'%(i+1,L[i].rstrip()[:150]))
