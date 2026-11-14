import sys
sys.path.insert(0, r'D:\RA2YR_ReSource\tools\decomp_sys'); sys.path.insert(0, r'D:\RA2YR_ReSource')
import pseudo
for a, pats in [('0x415ee0', ['_ES']), ('0x42cf80', ['m085']), ('0x426ed0', ['m6E8']), ('0x42c290', ['_AX'])]:
    ex = pseudo.fetch(a)
    print('='*70, a)
    for ln in ex.body_text().split('\n'):
        if any(p in ln for p in pats):
            print('   ', ln.strip()[:170])
