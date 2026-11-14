import json, re
from collections import Counter
ROOT = r'D:\RA2YR_ReSource'
cf = json.load(open(rf'{ROOT}\.omo\agents\s3a\cf_refresh.json', encoding='utf-8'))
recs = cf['records']
# all error messages (not just first) - grab from note (may contain several)
ids = Counter()
pat = re.compile(r"(?:error|warning) (C\d{4}):\s*([^;\r\n]*)")
for a, r in recs.items():
    for m in pat.finditer(r['note'] or ''):
        code, msg = m.group(1), m.group(2)
        if code in ('C2061','C2065','C2146','C2653','C2039','C2027'):
            ids[(code, msg[:90])] += 1
for (c, msg), n in ids.most_common(60):
    print(f'{n:4d} {c} {msg}')
