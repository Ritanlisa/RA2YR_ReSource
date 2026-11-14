import json, re, os, glob
from collections import Counter, defaultdict
ROOT = r'D:\RA2YR_ReSource'
cf = json.load(open(rf'{ROOT}\.omo\agents\s3a\cf_refresh.json', encoding='utf-8'))
recs = cf['records']
FL = re.compile(r"(D:\\[^(]+?)\((\d+)\)\s*:\s*(?:fatal )?error (C\d{4}):\s*(.*?)(?:\r?\n|$)")
# map addr -> part dir from the note path
body = {}
for a, r in recs.items():
    m = FL.search(r['note'] or '')
    if not m: continue
    p = m.group(1)
    d = os.path.dirname(p)
    hexs = a[2:].upper().lstrip('0')
    cands = glob.glob(os.path.join(d, '*_%s.cpp' % hexs)) + glob.glob(os.path.join(d, '*_%s.cpp' % hexs.lower()))
    if cands:
        body[a] = open(cands[0], encoding='utf-8', errors='replace').read()
print('fun bodies found:', len(body), '/', len(recs))
json.dump(body, open(rf'{ROOT}\.omo\agents\s3b\bodies.json','w',encoding='utf-8'), ensure_ascii=False)

def codeof(a):
    m = re.search(r'error (C\d{4})', recs[a]['note'] or '')
    return m.group(1) if m else '?'
PAT = {
 'cmp_cast_star':  re.compile(r'\*\(\s*\(\s*unsigned int\s*\)\s*\('),
 'cmp_cast_arrow': re.compile(r'\(\s*\(\s*unsigned int\s*\)\s*\([^()]*\)\s*\)\s*(?:->|\.)'),
 'trailing_comma': re.compile(r'[(,]\s*,\)'),
 'asm_mnem':       re.compile(r'^\s*(fld|fstp|fild|fistp|fmul|fadd|fsub|fdiv|fcomp|fchs|fxch|fstsw|jmp|jnz|jz|push|pop|mov|lea|test|cmp|sub|add|xor|and|or|shl|shr|sar|inc|dec|retn|nop|fsqrt|fild|fst|movzx|movsx)\b\s', re.M),
 'asm_EA':         re.compile(r'\b_EA[XD]?\b|\b_EBX\b|\b_REG\b'),
 'void_star_deref':re.compile(r'\*\s*\(\s*\(\s*void \*'),
 'voidptr_index':  re.compile(r'\bvoid \*\s*\w+\s*\['),
 'template_local': re.compile(r'\brc_ptr\b|\bVectorCursor\b|_VectorClass_|\bDynamicVectorClass\b'),
 'dot_on_call':    re.compile(r'\)\s*\.\s*[A-Za-z_]\w*\s*='),
 'addr_lhs':       re.compile(r'^\s*\(\s*\*\s*\('),
}
res = Counter()
for a, b in body.items():
    c = codeof(a)
    hits = [k for k, rx in PAT.items() if rx.search(b)]
    for h in hits: res[(c, h)] += 1
print('\n(code,pattern) counts:')
for (c, p), n in sorted(res.items(), key=lambda x: -x[1])[:40]:
    print(f'  {n:5d}  {c:7s} {p}')
# overall pattern totals
tot = Counter()
for a, b in body.items():
    for k, rx in PAT.items():
        if rx.search(b): tot[k] += 1
print('\npattern totals across all CF bodies:')
for k, n in tot.most_common():
    print(f'  {n:5d}  {k}')
