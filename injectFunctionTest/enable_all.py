import os, re

ROOT = r"D:\RA2YR_ReSource"
count = 0
for root, dirs, files in os.walk(ROOT):
    if '.git' in root or 'build_' in root or 'gen' in root: continue
    for fn in files:
        if not fn.endswith(('.cpp','.hpp','.h')): continue
        fp = os.path.join(root, fn)
        with open(fp, errors='ignore') as f: c = f.read()
        if 'REVERSE(' not in c: continue
        new_c = re.sub(
            r'(REVERSE\(\s*0x[0-9A-Fa-f]+\s*,\s*"[^"]*"\s*,\s*)false(\s*\))',
            r'\1true\2', c)
        if new_c != c:
            with open(fp, 'w', newline='\n') as f: f.write(new_c)
            changed = c.count(', false') - new_c.count(', false')
            print(f'{os.path.basename(fp)}: {changed} enabled')
            count += 1
print(f'Done: {count} files modified')
