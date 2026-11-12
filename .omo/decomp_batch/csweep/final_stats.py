import json, glob, collections, re

paths = sorted(glob.glob('.omo/decomp_batch/csweep/C/p*/part_00/part_report.json'))
batch = json.load(open('.omo/agents/decomp_batch/batch_csweep_C.json', encoding='utf-8'))
size = {e['addr']: e['size'] for e in batch}
cls = {e['addr']: e.get('cls') or '' for e in batch}
bands = [(0, 9), (10, 19), (20, 29), (30, 39), (40, 49), (50, 74), (75, 99),
         (100, 149), (150, 199), (200, 299), (300, 399), (400, 489)]
stats = {f'{a}-{b}': collections.Counter() for a, b in bands}
allv = collections.Counter()
cf_codes = collections.Counter()
pend = collections.Counter()
viol = collections.Counter()
match_cls = collections.Counter()
ng_cls = collections.Counter()
match_size = collections.Counter()
ng_path = collections.Counter()
for p in paths:
    for r in json.load(open(p))['results']:
        v = r['verdict']
        allv[v] += 1
        s = size.get(r['addr'], 0)
        key = None
        for a, b in bands:
            if a <= s <= b:
                key = f'{a}-{b}'
                break
        if key:
            stats[key][v] += 1
        if v == 'COMPILE_FAIL':
            m = re.search(r'error (C\d+)', r.get('note') or '')
            cf_codes[m.group(1) if m else 'OTHER'] += 1
        if v in ('NO_PSEUDO', 'NO_EXPORT', 'OBJ_EXTRACT_FAIL', 'DUP_SKIP'):
            pend[v] += 1
        if v in ('MATCH', 'MISMATCH'):
            viol['rule_violations_gt0'] += 1 if (r.get('rule_violations') or 0) > 0 else 0
            viol['viol_total'] += (r.get('rule_violations') or 0)
        if v == 'MATCH':
            match_cls[cls.get(r['addr'], '')] += 1
            match_size[s] += 1
        if v == 'MISMATCH':
            ng_cls[cls.get(r['addr'], '')] += 1
            ng_path[r.get('pathology')] += 1
out = {'n': sum(allv.values()), 'verdicts': dict(allv),
       'size_bands': {k: dict(v) for k, v in stats.items()},
       'cf_codes': dict(cf_codes.most_common(30)),
       'pending_kinds': dict(pend),
       'match_classes_top': match_cls.most_common(15),
       'ng_classes_top': ng_cls.most_common(15),
       'match_size_hist': dict(sorted(match_size.items())),
       'ng_pathology': dict(ng_path),
       'viol': dict(viol)}
json.dump(out, open('.omo/decomp_batch/csweep/final_stats.json', 'w'),
          indent=1, ensure_ascii=False)
print('n', out['n'])
print('verdicts', out['verdicts'])
print('cf_codes', out['cf_codes'])
print('pending', out['pending_kinds'])
print('viol', out['viol'])
for k, vv in stats.items():
    tot = sum(vv.values())
    mv = vv.get('MATCH', 0)
    comp = mv + vv.get('MISMATCH', 0)
    print('%-8s n=%4d M=%3d NG=%4d CF=%3d O=%2d comp%%=%5.1f M%%=%5.1f M/comp%%=%5.1f'
          % (k, tot, mv, vv.get('MISMATCH', 0), vv.get('COMPILE_FAIL', 0),
             tot - mv - vv.get('MISMATCH', 0) - vv.get('COMPILE_FAIL', 0),
             comp / tot * 100 if tot else 0, mv / tot * 100 if tot else 0,
             mv / comp * 100 if comp else 0))
print('match classes', out['match_classes_top'])
print('match size hist', out['match_size_hist'])
print('ng pathology', out['ng_pathology'])
