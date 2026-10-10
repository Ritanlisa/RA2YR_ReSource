import re, sys
from pathlib import Path
sys.path.insert(0, 'tools/csp_export')
# T5: fix_addr_violations absorbed into _absorbed/step4_bodies/
sys.path.insert(0, 'tools/csp_export/_absorbed/step4_bodies')
from fix_addr_violations import R_THIS1, R_THIS2, R_MEM
VT_OPEN = re.compile(
    r'\(\s*\*+\s*\([^()]*\(\s*\*\s*\*\s*\)\s*\([^()]*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)')
R5 = re.compile(r'\*\(\s*[A-Za-z_][\w\s\*]*?\s*\*\s*\)\s*\(\s*([a-z]\w*)\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)')
BARE_THIS = re.compile(r'(?<![\w\*])this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)(?!\s*\))')

tot = {}
per = []
for p in sorted(Path('src').rglob('*.cpp')):
    t = p.read_bytes().decode('latin-1')
    c = {
        'R_THIS1': len(R_THIS1.findall(t)),
        'R_THIS2': len(R_THIS2.findall(t)),
        'bare_this': len(BARE_THIS.findall(t)),
        'R5_local': len(R5.findall(t)),
        'vt': len(VT_OPEN.findall(t)),
        'MEMORY': len(R_MEM.findall(t)),
    }
    n = sum(c.values())
    if n:
        per.append((n, str(p), c))
per.sort(reverse=True)
print('TOTAL violation-pattern hits:', sum(n for n, _, _ in per))
for n, p, c in per[:18]:
    print('%5d %s  %s' % (n, p, c))
