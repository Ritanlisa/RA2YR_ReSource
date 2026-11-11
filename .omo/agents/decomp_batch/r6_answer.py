#!/usr/bin/env python3
"""R6 step 1c: solver answerability per C2440 site (fixed conf key)."""
import json, re
from collections import Counter

S = json.load(open('.omo/agents/decomp_batch/r6_c2440_samples.json', encoding='utf-8'))

rows = []
for s in S:
    for e in s.get('c2440', []):
        m = re.search(r"from '([^']*)' to '([^']*)'", e['what'])
        if m:
            rows.append({'addr': s['addr'], 'line': e['line'],
                         'from': m.group(1), 'to': m.group(2),
                         'src': e.get('src'), 'ents': s.get('entities', {})})
print('sites:', len(rows))

uniq = Counter()
byk = Counter()
for r in rows:
    usable = [(k, v) for k, v in r['ents'].items()
              if not k.startswith('EAX:')
              and v.get('conf') in ('forced', 'narrow')
              and 1 <= v.get('n', 99) <= 3]
    uniq[len(usable) > 0] += 1
    kinds = Counter(k.split(':')[0] for k, _ in usable)
    byk[tuple(sorted(kinds.items()))] += 1
print('has usable entity:', dict(uniq))
for k, c in byk.most_common(12):
    print(c, k)

# The real question: does the mispelled VARIABLE map to an entity?
# Local vN (register // ebx) has no entity; stack local [ebp-X] maps to S;-
# params map to P:N; members to M:this:off.
# Classify each site by LHS shape and check the matching entity kind.
print()
print('=== per-site LHS analysis ===')
lhs_kind = Counter()
for r in rows:
    src = r['src'] or ''
    lhs = src.split('=')[0].strip() if '=' in src else src
    if re.match(r'^(unsigned )?int \w+$', lhs):
        k = 'int-local-decl-init'
    elif re.match(r'^\w+ ?\*+ ?\w+$', lhs) and not lhs.startswith('this'):
        k = 'ptr-local-decl-init'
    elif lhs.startswith('this->'):
        k = 'member-store'
    elif re.match(r'^\w+$', lhs):
        k = 'bare-local-assign'
    elif lhs.startswith('*('):
        k = 'deref-store'
    else:
        k = 'other:' + lhs[:30]
    lhs_kind[k] += 1
for k, c in lhs_kind.most_common():
    print(c, k)
