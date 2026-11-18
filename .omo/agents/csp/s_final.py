"""Final numbers for .omo/agents/csp/report_next.md."""
import json, os, sys, collections, hashlib

sys.stdout.reconfigure(encoding='utf-8')
os.chdir(r'D:\RA2YR_ReSource')

RUNS = [('before_gateoff', 'BEFORE gate-off'), ('before_gateon', 'BEFORE gate-on'),
        ('after_gateoff', 'post-apply gate-off'), ('after_gateon_r1', 'post-apply gate-on r1'),
        ('after_repair_gateoff', 'FINAL gate-off'), ('after_repair_gateon_r1', 'FINAL gate-on r1'),
        ('after_repair_gateon_r2', 'FINAL gate-on r2')]
S = {}
for r, _ in RUNS:
    p = os.path.join('.omo', 'agents', 'csp', r, 'summary.json')
    S[r] = json.load(open(p, encoding='utf-8'))

print('%-24s %9s %9s %8s %7s %5s' % ('run', 'unique', 'total', 'pct', 'K_min', 'conf'))
for r, lbl in RUNS:
    s = S[r]
    print('%-24s %9d %9d %8.4f %7d %5d' % (lbl, s['unique'], s['meta']['constrained_clusters'],
                                           s['pct'], s['meta']['K_min'], s['meta']['conflicts']))

def d(a, b):
    print('  unique %+d | total %+d | pct %+.4f | K %+d' % (
        S[b]['unique'] - S[a]['unique'],
        S[b]['meta']['constrained_clusters'] - S[a]['meta']['constrained_clusters'],
        S[b]['pct'] - S[a]['pct'], S[b]['meta']['K_min'] - S[a]['meta']['K_min']))

print('\nDeltas:')
print(' gate-off before -> final:'); d('before_gateoff', 'after_repair_gateoff')
print(' gate-on  before -> final:'); d('before_gateon', 'after_repair_gateon_r1')
print(' raw apply (no repair) gate-on:'); d('before_gateon', 'after_gateon_r1')

print('\nDeterminism (FINAL gate-on r1 vs r2, 9 products):')
same = 0
for k in S['after_repair_gateon_r1']['sha256']:
    eq = S['after_repair_gateon_r1']['sha256'][k] == S['after_repair_gateon_r2']['sha256'][k]
    same += eq
    print('  %-36s %s' % (k, 'IDENTICAL' if eq else 'DIFF'))
print('  -> %d/%d identical | assignments sha256 = %s' % (
    same, len(S['after_repair_gateon_r1']['sha256']),
    S['after_repair_gateon_r1']['sha256']['minclass_assignments.json']))

print('\nConflict ledger entries:')
for r in ['before_gateon', 'after_gateon_r1', 'after_repair_gateon_r1']:
    v = json.load(open(os.path.join('.omo', 'agents', 'csp', r, 'minclass_conflict_resolution.json'),
                       encoding='utf-8'))
    print('  %-26s %d' % (r, len(v)))
for r in ['before_gateon', 'after_gateon_r1', 'after_repair_gateon_r1']:
    v = json.load(open(os.path.join('.omo', 'agents', 'csp', r, 'minclass_conflicts.json'),
                       encoding='utf-8'))
    print('  %-26s unresolved=%d' % (r, len(v.get('conflicts') or [])))

print('\nBM loader rows admitted:')
for r in ['before_gateon', 'after_gateon_r1', 'after_repair_gateon_r1']:
    for ln in open(os.path.join('.omo', 'agents', 'csp', r, 'run.log'), encoding='utf-8', errors='replace'):
        if ln.startswith('[BM] byte-match'):
            print('  %-26s %s' % (r, ln.strip()))
            break

print('\nApplied rows (meta.round5):')
ev = json.load(open('anchors/byte_match_types.json', encoding='utf-8'))
m5 = ev['meta']['round5']
print('  gate:', json.dumps(m5['gate']['per_channel']), '| final raw', m5['gate']['final_raw'],
      '| repair', m5['gate']['repair_dropped'], '| after repair', m5['gate']['final'])
print('  applied rows by channel:',
      dict(collections.Counter(r['via'] for r in ev['evidence'][2092:])))
print('  applied addrs:', len({r['fn'] for r in ev['evidence'][2092:]}))
print('  evidence total:', ev['meta']['evidence_total'])

# churn (before vs FINAL gate-on)
B = json.load(open('.omo/agents/csp/before_gateon/minclass_assignments.json', encoding='utf-8'))
A = json.load(open('.omo/agents/csp/after_repair_gateon_r1/minclass_assignments.json', encoding='utf-8'))
ub = {k: v.get('class') for k, v in B.items() if len(v.get('candidates') or []) == 1}
ua = {k: v.get('class') for k, v in A.items() if len(v.get('candidates') or []) == 1}
lost = [k for k in ub if k not in ua]
chg = [(k, ub[k], ua[k]) for k in ub if k in ua and ub[k] != ua[k]]
newu = [k for k in ua if k not in ub]
print('\nChurn FINAL vs before (gate-on): lost=%d changed=%d new_unique=%d' % (len(lost), len(chg), len(newu)))
cc = collections.Counter(x[1] + '->' + x[2] for x in chg)
print('  changed map:', dict(cc))
json.dump({'lost': lost, 'changed': chg, 'new_unique': len(newu)},
          open('.omo/agents/csp/churn_final.json', 'w', encoding='utf-8'), indent=1)

# attribution for lost (BM5 ents in the FINAL cluster)
CA = json.load(open('.omo/agents/csp/after_repair_gateon_r1/minclass_clusters.json', encoding='utf-8'))
cand = json.load(open('.omo/agents/csp/bm5_candidates.json', encoding='utf-8'))
bm5 = {r['ent'] for r in cand['final'] if r['ent'] not in
       {d['ent'] for d in (cand.get('repair') or {}).get('dropped_ents') or []}}
ent2root = {e: root for root, v in CA.items() for e in (v.get('ents') or [])}
CB = json.load(open('.omo/agents/csp/before_gateon/minclass_clusters.json', encoding='utf-8'))
attr = 0
for k in lost:
    root = k if k in A else next((ent2root[e] for e in (CB.get(k) or {}).get('ents') or []
                                  if e in ent2root), None)
    if root and set((CA.get(root) or {}).get('ents') or []) & bm5:
        attr += 1
print('  lost clusters with an applied BM5 ent in their FINAL cluster: %d / %d' % (attr, len(lost)))
