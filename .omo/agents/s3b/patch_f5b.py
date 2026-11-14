p = r'D:\RA2YR_ReSource\tools\decomp_sys\era_types.h'
s = open(p, encoding='utf-8').read()
s = s.replace("typedef unsigned long       LPARAM_LONG;\n", "")
open(p, 'w', encoding='utf-8', newline='').write(s)
print('cleaned')
