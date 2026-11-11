import struct, json, collections
f=open(r"D:\RA2MD\gamemd.exe","rb").read()
BASE=0x400000
# vtable set
vt=set()
d=json.load(open("anchors/rtti_vtable_class.json"))["vtables"]
for k in d: vt.add(int(k,16))
auth=json.load(open("anchors/vtable_slot_authority.json"))
vt2cls={}
for c,v in auth.items():
    a=v.get("vtable")
    if a:
        aa=int(a,16); vt.add(aa); vt2cls[aa]=c
TX_LO,TX_HI=0x401000,0x7E1000
DATA_LO,DATA_HI=0x812000,0xB79BE4
site=[]
i=TX_LO-BASE
end=TX_HI-BASE
while i<end-9:
    if f[i]==0xC7 and f[i+1]==0x05:
        dst,val=struct.unpack_from("<II",f,i+2)
        if DATA_LO<=dst<DATA_HI and val in vt:
            site.append((i+BASE,dst,val))
    i+=1
print("direct mov [data],offset vt installs:",len(site))
print("unique dst:",len(set(s[1] for s in site)),"unique vt:",len(set(s[2] for s in site)))
cls=collections.Counter(vt2cls.get(v,"?") for _,_,v in site)
print("top classes:",cls.most_common(10))
print("sample:")
for s in site[:15]:
    print(" site %08x dst %08x vt %08x cls %s"%(s[0],s[1],s[2],vt2cls.get(s[2],"?")))
# in zero tail?
tail=sum(1 for _,dst,_ in site if dst>=0x878000)
print("dst in zero tail (>=0x878000):",tail,"file-backed:",len(site)-tail)
json.dump([{"site":hex(a),"dst":hex(d),"vtable":hex(v),"cls":vt2cls.get(v)} for a,d,v in site],open("tools/data_match/w3/installs_scan.json","w"),indent=0)
