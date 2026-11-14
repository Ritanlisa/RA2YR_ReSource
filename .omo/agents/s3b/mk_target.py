import json, re, os, glob
from collections import Counter
ROOT = r'D:\RA2YR_ReSource'
cf = json.load(open(rf'{ROOT}\.omo\agents\s3a\cf_refresh.json', encoding='utf-8'))
recs = cf['records']
FL = re.compile(r"(D:\\[^(]+?)\((\d+)\)\s*:\s*(?:fatal )?error (C\d{4})")
# last batch per addr from results.jsonl
last = {}
with open(rf'{ROOT}\.omo\agents\decomp_batch\results.jsonl', encoding='utf-8', errors='replace') as f:
    for line in f:
        try: r = json.loads(line)
        except Exception: continue
        last[r['addr']] = r.get('batch')
PATS = {
 'cmp':   re.compile(r'\(\s*\(\s*unsigned int\s*\)\s*\('),
 'asm':   re.compile(r'__asm'),
 'pun':   re.compile(r'\*\s*this->\w+\s*\['),
 'decl':  re.compile(r'^extern int [A-Z_]+\(int, \.\.\.\);', re.M),
}
DECL_CODES = {'C2377','C2533','C2380','C2061','C2146','C2653','C2027','C2064',
              'C2296','C2059','C2143','C2040','C2065','C2100','C2227','C2228',
              'C2446','C2440','C2664','C2039','C2036','C2660','C2109','C2019'}
sel = {}
for a, r in recs.items():
    batch = last.get(a) or ''
    if batch == 's3b_cf':
        continue                       # already judged with the current generator
    m = FL.search(r['note'] or '')
    code = m.group(3) if m else '?'
    fam = []
    if code in DECL_CODES:
        fam.append('code:' + code)
    # body patterns (old emitted file)
    if m:
        d = os.path.dirname(m.group(1))
        h = a[2:].upper().lstrip('0')
        c = glob.glob(os.path.join(d, '*_%s.cpp' % h))
        if c:
            try: txt = open(c[0], encoding='utf-8', errors='replace').read()
            except Exception: txt = ''
            for k, rx in PATS.items():
                if rx.search(txt): fam.append('pat:' + k)
    if fam:
        sel[a] = fam
print('targeted CF (stale evidence):', len(sel))
c = Counter()
for a, f in sel.items():
    for x in f: c[x] += 1
print(c.most_common(12))
json.dump([{'addr': a, 'family': ','.join(f[:2])} for a, f in sorted(sel.items())],
          open(rf'{ROOT}\.omo\agents\s3b\batch_cf_target.json', 'w', encoding='utf-8'), indent=1)
# count of untouched CF
tot = len(recs)
print('total CF', tot, 'skipped(fresh)', tot - len(sel))
