import json, re, os
from collections import Counter, defaultdict
ROOT = r'D:\RA2YR_ReSource'
cf = json.load(open(rf'{ROOT}\.omo\agents\s3a\cf_refresh.json', encoding='utf-8'))
recs = cf['records']
FL = re.compile(r"(D:\\[^(]+?)\((\d+)\)\s*:\s*(?:fatal )?error (C\d{4}):\s*(.*?)(?:\r?\n|$)")
def lineof(note):
    m = FL.search(note or '')
    if not m: return None, None, None
    path, ln = m.group(1), int(m.group(2))
    try:
        L = open(path, encoding='utf-8', errors='replace').readlines()
        return path, L[ln-1].rstrip()[:200] if ln-1 < len(L) else None, ln
    except Exception as e:
        return path, '<<missing>>', ln
by = defaultdict(list)
for a, r in recs.items():
    m = re.search(r'error (C\d{4}):\s*([^;\r\n]*)', r['note'] or '')
    code = m.group(1) if m else '?'
    by[code].append(a)
for code in ['C2377','C2061','C2296','C2100','C2653','C2065','C2146','C2059','C2533','C2380','C2064','C2036','C2227','C2228','C2039']:
    addrs = by.get(code) or []
    print(f'\n===== {code} n={len(addrs)} =====')
    shown = 0
    seenline = set()
    for a in addrs:
        p, line, ln = lineof(recs[a]['note'])
        key = re.sub(r'\b\d+\b','N', (line or '')[:80])
        if key in seenline: continue
        seenline.add(key)
        print(f'  {a} {recs[a]["unit"]}: {line}')
        shown += 1
        if shown >= 8: break
