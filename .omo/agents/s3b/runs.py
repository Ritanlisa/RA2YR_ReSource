import json, os
from collections import Counter
for r in ['s3b_all1','s3b_t1','s3b_f1','s3b_f2']:
    p = rf'D:\RA2YR_ReSource\.omo\decomp_batch\{r}\timings.jsonl'
    n=0; tot=Counter()
    for line in open(p, encoding='utf-8'):
        d=json.loads(line); n += d['n']
        for k,v in (d.get('verdicts') or {}).items(): tot[k]+=v
    print(f'{r}: fns={n} ' + ' '.join(f'{k}={v}' for k,v in sorted(tot.items())))
