import sys
sys.path.insert(0, r'D:\RA2YR_ReSource\tools\decomp_sys')
import pseudo
for t in ["_ESI = v8 + 29", "int v3", "_DWORD *v6", "void *v7", "unsigned int v2", "_ESI[1] = _RT1"]:
    print(repr(t), pseudo.looks_like_decl(t))
