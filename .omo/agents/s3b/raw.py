import sys
sys.path.insert(0, r'D:\RA2YR_ReSource\tools\decomp_sys')
sys.path.insert(0, r'D:\RA2YR_ReSource')
import pseudo
ex = pseudo.fetch('0x418e20')
t = ex.body_text()
print('---- RAW BODY (first 60 lines) ----')
for i, ln in enumerate(t.split('\n')[:60]):
    print(i, repr(ln[:150]))
