import json, re, os, sys
ROOT = r'D:\RA2YR_ReSource'
cf = json.load(open(rf'{ROOT}\.omo\agents\s3a\cf_refresh.json', encoding='utf-8'))
recs = cf['records']
FL = re.compile(r"(D:\\[^(]+?)\((\d+)\)\s*:\s*(?:fatal )?error (C\d{4}):\s*(.*?)(?:\r?\n|$)")
def show(addr):
    r = recs[addr]; note = r['note'] or ''
    m = FL.search(note)
    print('#'*90)
    print(addr, r['unit'], '|', re.search(r'error C\d{4}:\s*([^;\r\n]*)', note).group(1) if re.search(r'error C\d{4}', note) else '')
    if not m: print(note[:300]); return
    path, ln = m.group(1), int(m.group(2))
    L = open(path, encoding='utf-8', errors='replace').readlines()
    lo, hi = max(0, ln-16), min(len(L), ln+4)
    for i in range(lo, hi):
        mark = '>>' if i == ln-1 else '  '
        print(f'{mark}{i+1:5d} {L[i].rstrip()[:180]}')
for a in sys.argv[1:]:
    show(a)
