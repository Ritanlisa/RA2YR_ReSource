import json, re, os
from collections import Counter, defaultdict
ROOT = r'D:\RA2YR_ReSource'
cf = json.load(open(rf'{ROOT}\.omo\agents\s3a\cf_refresh.json', encoding='utf-8'))
recs = cf['records']
FL = re.compile(r"(D:\\[^(]+?)\((\d+)\)\s*:\s*(?:fatal )?error (C\d{4}):\s*(.*?)(?:\r?\n|$)")
ROWS=[]
for a,r in recs.items():
    m = FL.search(r['note'] or '')
    if not m: ROWS.append((a,'?','?','')); continue
    path, ln, code, msg = m.group(1), int(m.group(2)), m.group(3), m.group(4)
    try:
        L = open(path, encoding='utf-8', errors='replace').readlines()
        line = L[ln-1].rstrip() if ln-1 < len(L) else ''
    except Exception: line = ''
    ROWS.append((a, code, msg, line))
json.dump(ROWS, open(rf'{ROOT}\.omo\agents\s3b\rows.json','w',encoding='utf-8'), ensure_ascii=False)
PATS = [
 ('stars', r'\*\(\s*\(\s*unsigned int\s*\)'),
 ('arrow', r'\(\s*\(\s*unsigned int\s*\)\s*\([^()]*\)\s*\)\s*->'),
 ('dot',   r'\(\s*\(\s*unsigned int\s*\)\s*\([^()]*\)\s*\)\s*\.'),
 ('cast_int_arrow', r'\(\s*\(\s*unsigned int\s*\)\s*\(this\)\s*\)'),
 ('trailing_comma', r',\s*\)'),
 ('arrow_on_int_cast', r'\(\s*unsigned int\s*\)\s*\([^()]*\)\s*\)\s*->'),
]
print('rows', len(ROWS))
for name, p in PATS:
    rx = re.compile(p)
    hits = [r for r in ROWS if rx.search(r[3])]
    print(f'{name:20s} {len(hits):5d}  codes={Counter(h[1] for h in hits).most_common(4)}')
    for h in hits[:3]: print('      ', h[0], h[3][:140])
