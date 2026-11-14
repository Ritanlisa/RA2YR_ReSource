p = r'D:\RA2YR_ReSource\tools\decomp_sys\era_types.h'
s = open(p, encoding='utf-8').read()
s = s.replace("typedef const wchar_t *     LPCWCH;",
              "typedef const wchar_t *     LPCWCH;\ntypedef struct _FILETIME *  PFILETIME;\ntypedef struct _FILETIME *  LPFILETIME;")
open(p,'w',encoding='utf-8',newline='').write(s)
print('ok')
