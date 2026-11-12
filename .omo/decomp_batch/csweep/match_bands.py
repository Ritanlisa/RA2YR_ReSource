import json, glob, collections
paths = sorted(glob.glob('.omo/decomp_batch/csweep/C/p*/part_00/part_report.json'))
batch = json.load(open('.omo/agents/decomp_batch/batch_csweep_C.json', encoding='utf-8'))
size = {e['addr']: e['size'] for e in batch}
mclean = collections.Counter()
m45, m58 = [], []
for p in paths:
    for r in json.load(open(p))['results']:
        if r['verdict'] != 'MATCH':
            continue
        mclean['clean' if r.get('clean') else 'dirty'] += 1
        mclean['viol'] += (r.get('rule_violations') or 0)
        s = size.get(r['addr'])
        if s == 45 and len(m45) < 10:
            m45.append((r['addr'], r['name']))
        if s == 58 and len(m58) < 10:
            m58.append((r['addr'], r['name']))
print('MATCH clean flags', dict(mclean))
print('45B sample', m45)
print('58B sample', m58)
