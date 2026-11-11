#!/usr/bin/env python3
"""R6 step 1: classify C2440 failures by conversion pattern."""
import json, re
from collections import Counter

fn = json.load(open('.omo/agents/decomp_batch/r6_fail_notes.json', encoding='utf-8'))
c2440 = {a: n for a, n in fn.items() if 'C2440' in n}
print('C2440 files:', len(c2440))

pat = Counter()
samples = {}
for a, n in c2440.items():
    m = re.search(r"cannot convert (?:param \d+ )?from '([^']*)' to '([^']*)'", n)
    if m:
        key = (m.group(1)[:40], m.group(2)[:40])
        pat[key] += 1
        samples.setdefault(key, []).append(a)
    else:
        m2 = re.search(r'C2440[^\n]*', n)
        key = ('RAW', (m2.group(0)[:100] if m2 else n[:100]))
        pat[key] += 1
        samples.setdefault(key, []).append(a)

for (f, t), cnt in pat.most_common(40):
    print(cnt, '|', f, '->', t, '|', samples[(f, t)][:3])

# save full classification
out = {', '.join(k): {'count': v, 'addrs': samples[k]} for k, v in pat.items()}
json.dump(out, open('.omo/agents/decomp_batch/r6_c2440_classes.json', 'w'), indent=1)
