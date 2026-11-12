import json, glob, collections
paths = sorted(glob.glob('.omo/decomp_batch/csweep/C/p*/part_00/part_report.json'))
pairs = collections.Counter()
for p in paths:
    for r in json.load(open(p))['results']:
        if r['verdict'] != 'MISMATCH':
            continue
        fd = r.get('first_diff') or {}
        pairs[(fd.get('orig'), fd.get('ours'))] += 1
for (o, u), n in pairs.most_common(20):
    print('%4d  orig[%s]  ours[%s]' % (n, o, u))
