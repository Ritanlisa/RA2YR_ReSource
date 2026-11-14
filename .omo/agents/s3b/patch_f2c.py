p = r'D:\RA2YR_ReSource\tools\decomp_sys\pseudo.py'
s = open(p, encoding='utf-8').read()
old = '''    s = line.rstrip(";").strip()
    if not s or "(" in s.split("=")[0]:
        return False
    head = re.match(r"^(?:const\\s+)?([A-Za-z_]\\w*)", s)'''
assert old in s
new = '''    s = line.rstrip(";").strip()
    if not s or "(" in s.split("=")[0]:
        return False
    # Stage 3b: `_ESI = v8 + 29;` was parsed as a DECLARATION (type `_ES`,
    # name `I`, init `v8 + 29`) because the `_`-prefix branch below accepts
    # any identifier as a type.  A lone identifier on the left of `=` is an
    # assignment target, never a type.
    if re.match(r"^[A-Za-z_]\\w*$", s.split("=")[0].strip()):
        return False
    head = re.match(r"^(?:const\\s+)?([A-Za-z_]\\w*)", s)'''
s = s.replace(old, new, 1)
open(p,'w',encoding='utf-8',newline='').write(s)
print('ok')
