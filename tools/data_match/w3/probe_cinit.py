import struct
f=open(r'D:\RA2MD\gamemd.exe','rb').read()
import capstone
md=capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
va=0x7CBD80
code=f[va-0x400000:va-0x400000+0x70]
for ins in md.disasm(code, va):
    print('%08x  %-8s %s' % (ins.address, ins.mnemonic, ins.op_str))
    if ins.address>0x7CBDE0: break
