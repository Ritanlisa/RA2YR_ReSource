import sys
sys.path.insert(0, r'D:\RA2YR_ReSource\tools\decomp_sys'); sys.path.insert(0, r'D:\RA2YR_ReSource')
import pseudo
ex = pseudo.fetch('0x426ed0')
L = ex.body_text().split('\n')
for i,ln in enumerate(L):
    if '296' in ln or 'm6E8' in ln:
        print(i, ln.strip()[:170])
print('---- 42cf80 ----')
ex = pseudo.fetch('0x42cf80')
for i,ln in enumerate(ex.body_text().split('\n')):
    if 'v13 + 3' in ln or 'm085' in ln or '1768' in ln:
        print(i, ln.strip()[:170])
