import sys, os, subprocess, tempfile
sys.path.insert(0, r'D:\RA2YR_ReSource\tools\decomp_sys'); sys.path.insert(0, r'D:\RA2YR_ReSource')
import decompile, era_compile
print([x for x in dir(era_compile) if not x.startswith('_')][:20])
print(open(r'D:\RA2YR_ReSource\tools\decomp_sys\era_compile.py',encoding='utf-8').read()[:1500])
