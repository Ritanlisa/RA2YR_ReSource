p = r'D:\RA2YR_ReSource\tools\decomp_sys\pseudo.py'
s = open(p, encoding='utf-8').read()
old = '''    if re.match(r"^[A-Za-z_]\\w*$", s.split("=")[0].strip()):
        return False'''
new = '''    _head = s.split("=")[0].strip()
    if re.match(r"^[A-Za-z_]\\w*$", _head):
        return False
    # `_ESI[1] = x;` is a subscript STORE, not `TYPE name[1]` (the array
    # form always carries a separate name token).
    if re.match(r"^[A-Za-z_]\\w*(?:\\[[^\\]]*\\])+$", _head):
        return False'''
s = s.replace(old, new, 1)
open(p,'w',encoding='utf-8',newline='').write(s)
print('ok')
