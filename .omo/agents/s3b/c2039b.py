import json,re,os,glob
cf=json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3a\cf_refresh.json',encoding='utf-8'))
r=cf['records']['0x421ea0']
print(r['note'][:200])
m=re.search(r'(D:\\[^(]+?)\((\d+)\)', r['note']); p=m.group(1); ln=int(m.group(2))
d=os.path.dirname(p)
hpp=glob.glob(os.path.join(d,'*.hpp'))
print('hpps', [os.path.basename(x) for x in hpp][:5])
for h in hpp:
    t=open(h,encoding='utf-8',errors='replace').read()
    if 'class AnimClass' in t:
        print('== ', os.path.basename(h), 'm120' in t, 'm0B8' in t)
        for ln2 in t.split('\n'):
            if 'm120' in ln2 or 'm12' in ln2: print('   ', ln2.strip()[:120])
L=open(p,encoding='utf-8',errors='replace').readlines()
for i in range(max(0,ln-3), min(len(L), ln+1)): print(('>>' if i==ln-1 else '  ')+'%4d %s'%(i+1,L[i].rstrip()[:150]))
