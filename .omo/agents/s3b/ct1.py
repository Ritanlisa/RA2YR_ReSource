import sys, os
sys.path.insert(0, r'D:\RA2YR_ReSource\tools\decomp_sys'); sys.path.insert(0, r'D:\RA2YR_ReSource')
import era_compile
d = r'D:\RA2YR_ReSource\.omo\agents\s3b\ctest'
os.makedirs(d, exist_ok=True)
open(os.path.join(d,'era_types.h'),'w',encoding='utf-8').write(open(r'D:\RA2YR_ReSource\tools\decomp_sys\era_types.h',encoding='utf-8').read())
src = """#include "era_types.h"
int f(unsigned int v) {
    unsigned int x = 0;
    __asm {
        fld dword ptr [eax+8]
        fcomp ds:flt_7E1748
        fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 )
    {
        x = 1;
    }
    return (int)x;
}
"""
open(os.path.join(d,'t1.cpp'),'w',encoding='utf-8').write(src)
r = era_compile.compile_cpp(os.path.join(d,'t1.cpp'), d)
print('rc=', r.returncode); print(r.stdout[:2000]); print(r.stderr[:1000])
