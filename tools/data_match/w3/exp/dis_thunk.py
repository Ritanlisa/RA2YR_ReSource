import struct,sys,re,subprocess
import capstone
exe=sys.argv[1]; mapf=sys.argv[2]
f=open(exe,"rb").read()
def sections(path):
    f=open(path,"rb").read()
    e=struct.unpack_from("<I",f,0x3C)[0]; nsec=struct.unpack_from("<H",f,e+6)[0]
    opt=e+24; base=struct.unpack_from("<I",f,opt+28)[0]
    so=opt+struct.unpack_from("<H",f,e+20)[0]; out=[]
    for i in range(nsec):
        off=so+i*40
        vs,va,rs,ro=struct.unpack_from("<IIII",f,off+8)
        out.append((va+base,vs,rs,ro))
    return f,out
f,secs=sections(exe)
def rd(va):
    for v,vs,rs,ro in secs:
        if v<=va<v+max(vs,rs): return f[ro+va-v:ro+va-v+4]
    return b"\0\0\0\0"
syms={}
for line in open(mapf,encoding="latin1"):
    m=re.match(r"\s+([0-9a-f]{4}):([0-9a-f]{8})\s+(\S+)\s+([0-9a-f]{8})",line)
    if m: syms[m.group(3)]=int(m.group(4),16)
md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_32)
def name_of(a):
    best=None
    for k,v in syms.items():
        if v==a: best=k
    return best
for ea in [int(x,16) for x in sys.argv[3:]]:
    print("thunk %08x:"%ea)
    for ins in md.disasm(rd(ea)[:16],ea):
        tgt=None
        if ins.mnemonic=="call" and ins.op_str.startswith("0x"):
            tgt=int(ins.op_str,16)
        print("  %08x %-6s %-20s %s"%(ins.address,ins.mnemonic,ins.op_str,("-> "+str(name_of(tgt)) if tgt else "")))
        if ins.mnemonic=="ret": break
