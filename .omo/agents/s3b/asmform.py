import json, re
from collections import Counter
b = json.load(open(r'D:\RA2YR_ReSource\.omo\agents\s3b\bodies.json', encoding='utf-8'))
# extract asm block contents from raw pseudo (regenerate from raw bodies instead)
import sys
sys.path.insert(0, r'D:\RA2YR_ReSource\tools\decomp_sys'); sys.path.insert(0, r'D:\RA2YR_ReSource')
import pseudo
addrs = list(b.keys())
ops = Counter(); forms = Counter(); nblk = 0
seen = 0
ASM = re.compile(r'__asm\b[^\n{]*\{([^}]*)\}', re.S)
for a in addrs:
    try: ex = pseudo.fetch(a)
    except Exception: continue
    t = ex.body_text()
    if '__asm' not in t: continue
    seen += 1
    for m in ASM.finditer(t):
        nblk += 1
        for ln in m.group(1).strip().split('\n'):
            ln = ln.strip()
            if not ln: continue
            toks = ln.split()
            op = toks[0]
            rest = ' '.join(toks[1:])
            sz = 'none'
            for s in ('byte ptr','word ptr','dword ptr','qword ptr','tbyte ptr'):
                if s in rest: sz = s
            mem = '[' in rest
            ops[(op, sz if mem else 'reg/imm')] += 1
    if seen >= 60: break
print('bodies with asm:', seen, 'blocks:', nblk)
for k, n in ops.most_common(40): print(n, k)
