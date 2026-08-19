import re, os

ROOT = r"D:\RA2YR_ReSource"
PAT = re.compile(r'(REVERSE\(\s*0x[0-9A-Fa-f]+\s*,\s*"[^"]*"\s*,\s*)true(\s*\))')

for root, dirs, files in os.walk(ROOT):
    if '.git' in root or 'build_' in root or 'gen' in root: continue
    for fn in files:
        if not fn.endswith(('.cpp','.hpp','.h')): continue
        fp = os.path.join(root, fn)
        with open(fp, errors='ignore') as f:
            c = f.read()
        if 'REVERSE(' not in c: continue
        new_c, n = PAT.subn(r'\1false\2', c)
        if n:
            with open(fp, 'w', newline='\n') as f:
                f.write(new_c)
            print(f"  {os.path.basename(fp)}: {n} disabled")
print("Done")
