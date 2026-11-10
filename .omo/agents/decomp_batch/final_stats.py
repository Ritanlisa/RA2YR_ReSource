import json, glob, collections, re

files = sorted(glob.glob('.omo/decomp_batch/r3_400/p*/part_00/part_report.json'))
batch = {e['addr'].lower(): e for e in json.load(open('.omo/agents/decomp_batch/batch400.json', encoding='utf-8'))}
allr = []
for f in files:
    for r in json.load(open(f, encoding='utf-8'))['results']:
        allr.append(r)
    if len(allr) == 0:
        pass
# the per-part reports are authoritative (last run wins); dedupe by addr
byaddr = {}
for r in allr:
    byaddr[r['addr'].lower()] = r
rows = [byaddr[a] for a in batch if a in byaddr]
missing = [a for a in batch if a not in byaddr]
print('reported', len(rows), 'missing', len(missing))

vc = collections.Counter(r['verdict'] for r in rows)
decided = vc['MATCH'] + vc['MISMATCH']
print('VERDICTS', dict(vc))
print('MATCH/decided %.1f%%  MATCH/total %.1f%%' % (100.0*vc['MATCH']/decided, 100.0*vc['MATCH']/len(rows)))

pc = collections.Counter(r.get('pathology') for r in rows if r['verdict']=='MISMATCH')
print('MISMATCH pathologies', dict(pc))

# call-count split
split = collections.Counter()
for r in rows:
    e = batch[r['addr'].lower()]
    split[(e['n_calls'], r['verdict'])] += 1
print('by n_calls:', dict(split))

# selector noise: class unknown OR method not identifier
noise = []
for r in rows:
    e = batch[r['addr'].lower()]
    meth = e['name'].split('::')[-1]
    if (e.get('cls') or '') == 'unknown' or not re.match(r'^[A-Za-z_]\w*$', meth):
        noise.append(r)
print('selector-noise fns', len(noise), collections.Counter(r['verdict'] for r in noise))
clean = [r for r in rows if r not in noise]
cv = collections.Counter(r['verdict'] for r in clean)
cd = cv['MATCH'] + cv['MISMATCH']
print('CLEAN: total %d, verdicts %s, MATCH/decided %.1f%%, MATCH/total %.1f%%' % (
    len(clean), dict(cv), 100.0*cv['MATCH']/cd, 100.0*cv['MATCH']/len(clean)))

# compile-fail families
cf = [r for r in rows if r['verdict']=='COMPILE_FAIL']
def fam(n):
    n = n or ''
    if 'HWND' in n or 'HIMAGELIST' in n or 'IMAGELIST' in n: return 'import-param types (HWND/HIMAGELIST)'
    if 'LONG' in n or 'C2143' in n or 'C2146' in n: return 'syntax decl (C2143/C2146)'
    if 'undeclared identifier' in n: return 'undeclared identifier'
    if 'cannot convert' in n: return 'cannot convert'
    if 'is not a member' in n: return 'not a member'
    if 'C4234' in n: return 'C4234 nonstandard ext'
    if 'C2660' in n or 'C2664' in n: return 'call arity/type'
    if 'C2039' in n: return 'not a member (C2039)'
    return 'other'
print('CF families', dict(collections.Counter(fam(r.get('note')) for r in cf)))

print('\nMISMATCH list:')
for r in rows:
    if r['verdict']=='MISMATCH':
        fd=r.get('first_diff') or {}
        print(' %-9s %-40s %-14s %s | %s' % (r['addr'], (r.get('name') or '')[:40], r.get('pathology'), fd.get('orig'), fd.get('ours')))

print('\nper-part:')
for f in files:
    p = f.split('r3_400')[1].split('part_00')[0].strip('\\/')
    d = json.load(open(f, encoding='utf-8'))
    v = collections.Counter(x['verdict'] for x in d['results'])
    print('%s %s' % (p, dict(v)))

# write aggregate json
out = {'total': len(rows), 'verdicts': dict(vc),
       'pathologies': dict(pc), 'selector_noise': len(noise),
       'clean_total': len(clean), 'clean_verdicts': dict(cv),
       'per_part': {}}
for f in files:
    p = f.split('r3_400')[1].split('part_00')[0].strip('\\/')
    out['per_part'][p] = json.load(open(f, encoding='utf-8'))['summary']
json.dump(out, open('.omo/agents/decomp_batch/batch400_aggregate.json','w',encoding='utf-8'), indent=1, ensure_ascii=False)
print('\nwrote batch400_aggregate.json')
