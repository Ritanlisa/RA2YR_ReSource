import struct, json
import capstone
f=open(r"D:\RA2MD\gamemd.exe","rb").read()
BASE=0x400000
vt=set()
d=json.load(open("anchors/rtti_vtable_class.json"))["vtables"]
for k in d: vt.add(int(k,16))
auth=json.load(open("anchors/vtable_slot_authority.json"))
for c,v in auth.items():
    a=v.get("vtable")
    if a: vt.add(int(a,16))
TXT_LO,TXT_HI=0x401000,0x7E1000
DATA_LO,DATA_HI=0x812000,0xB79BE4
md=capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
md.skipdata=True
code=f[TXT_LO-BASE:TXT_HI-BASE]
sites=[]
for ins in md.disasm(code, TXT_LO):
    if ins.mnemonic=="mov" and ins.op_str.startswith("dword ptr [0x"):
        try:
            dst=int(ins.op_str.split("[")[1].split("]")[0],16)
            imm=int(ins.op_str.split(", ")[1],16)
        except Exception:
            continue
        if DATA_LO<=dst<DATA_HI and imm in vt:
            sites.append((ins.address,dst,imm))
print("capstone-verified mov [data],vt:",len(sites))
print("unique dst:",len(set(s[1] for s in sites)),"unique vt:",len(set(s[2] for s in sites)))
raw=json.load(open("tools/data_match/w3/w3_inventory.json"))["installs"]["all"]
rawset={(int(x["site"],16),int(x["dst"],16),int(x["vtable"],16)) for x in raw}
capset=set(sites)
print("raw",len(rawset),"cap",len(capset),"cap-not-raw",len(capset-rawset),"raw-not-cap",len(rawset-capset))
print("examples raw-not-cap:",[(hex(a),hex(b),hex(c)) for a,b,c in list(rawset-capset)[:8]])
json.dump([{"site":hex(a),"dst":hex(b),"vtable":hex(c)} for a,b,c in sites],open("tools/data_match/w3/installs_capstone.json","w"),indent=0)
