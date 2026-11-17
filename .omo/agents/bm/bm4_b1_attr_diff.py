"""BM4 / B1 attribution diff: R0 (pre-fix baseline products) vs current on-disk
post-fix products. Groups every changed cluster assignment by (before -> after)
name pair, verifying the delta is confined to the Char/Float collision atoms."""
import json, collections

R0 = '.omo/agents/bm/bm4_R0_products/'
R1 = 'anchors/'   # current on-disk = R3 (post-fix production)

c0 = json.load(open(R0 + 'minclass_clusters.json'))
c1 = json.load(open(R1 + 'minclass_clusters.json'))
d0 = json.load(open(R0 + 'minclass_domains.json'))
d1 = json.load(open(R1 + 'minclass_domains.json'))

roots0, roots1 = set(c0), set(c1)
print('clusters before=%d after=%d | gained=%d lost=%d'
      % (len(roots0), len(roots1), len(roots1 - roots0), len(roots0 - roots1)))

both = roots0 & roots1
asg_diff = collections.Counter()
asg_examples = collections.defaultdict(list)
dom_changed = 0
for r in both:
    a0 = (c0[r] or {}).get('class')
    a1 = (c1[r] or {}).get('class')
    if a0 != a1:
        asg_diff[(a0, a1)] += 1
        if len(asg_examples[(a0, a1)]) < 3:
            asg_examples[(a0, a1)].append(r)
    if d0.get(r) != d1.get(r):
        dom_changed += 1
print('assignment changed: %d | domain size changed: %d' % (sum(asg_diff.values()), dom_changed))
print()
print('(before -> after) x count:')
for (a, b), cnt in asg_diff.most_common(40):
    touch = 'COLLISION-ATOM' if (a in ('Char', 'Float') or b in ('Char', 'Float', 'char', 'float')) else 'OTHER <<<'
    print('  %-28s -> %-28s %5d  %s' % (a, b, cnt, touch))
    for r in asg_examples[(a, b)]:
        print('       e.g.', r)

# forced-baseline check: BM3 zero-regression baseline = 43,188 forced assignments unchanged
same_forced = sum(1 for r in both
                  if d0.get(r) == 1 and d1.get(r) == 1 and (c0[r] or {}).get('class') == (c1[r] or {}).get('class'))
print()
print('forced(domain=1) both sides, same assignment: %d' % same_forced)
f0 = sum(1 for r in both if d0.get(r) == 1)
f1 = sum(1 for r in both if d1.get(r) == 1)
print('forced before(both-roots)=%d after(both-roots)=%d' % (f0, f1))
