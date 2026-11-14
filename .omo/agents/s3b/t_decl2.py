import sys
sys.path.insert(0, r'D:\RA2YR_ReSource\tools\decomp_sys')
import pseudo
for t in ["_ESI[1] = _RT1", "char Buffer[512]", "int v3[4]", "_ESI = v8 + 29"]:
    print(repr(t), pseudo.looks_like_decl(t))
