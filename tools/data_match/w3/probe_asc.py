import struct, json, collections
f=open(r'D:\RA2MD\gamemd.exe','rb').read()
def rd(va): return struct.unpack_from('<I',f,va-0x400000)[0]
runs=[]
cur=None; prev=None
for va in range(0x812000,0x878000,4):
    v=rd(va)
    if prev is not None and 0 < v-prev <= 0x2000:
        if cur is None: cur=va-4
    else:
        if cur is not None:
            n=(va-4-cur)//4+1
            if n>=40: runs.append((cur,va-4,n))
        cur=None
    prev=v
if cur is not None:
    n=(0x878000-4-cur)//4+1
    runs.append((cur,0x878000-4,n))
runs.sort(key=lambda r:-r[2])
for a,b,n in runs[:20]:
    print(hex(a),hex(b),'n=',n,'first',hex(rd(a)),'last',hex(rd(b)))
