p = r'D:\RA2YR_ReSource\tools\decomp_sys\pseudo.py'
s = open(p, encoding='utf-8').read()
s = s.replace('return "%s%s[%sh]" % (size, seg, addr.upper())',
              'return "%s %s[%sh]" % (size, seg, addr.upper())')
open(p,'w',encoding='utf-8',newline='').write(s)
print('ok')
