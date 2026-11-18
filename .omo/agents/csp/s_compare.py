"""Compare the four solver snapshots (before/after x gate off/on) + churn audit."""
import json, os, sys, itertools

sys.stdout.reconfigure(encoding='utf-8')
os.chdir(r'D:\RA2YR_ReSource')
RUNS = ['before_gateoff', 'before_gateon', 'after_gateoff', 'after_gateon_r1', 'after_gateon_r2']
S = {r: json.load(open(os.path.join('.omo', 'agents', 'csp', r, 'summary.json'), encoding='utf-8'))
     for r in RUNS}

print('%-18s %8s %8s %8s %8s %8s' % ('run', 'unique', 'total', 'pct', 'K_min', 'conflicts'))
for r in RUNS:
    s = S[r]
    print('%-18s %8d %8d %8.4f %8d %8d' % (r, s['unique'], s['meta']['constrained_clusters'],
                                           s['pct'], s['meta']['K_min'], s['meta']['conflicts']))

print('\nsha256 (9 products) equality:')
keys = list(S['after_gateon_r1']['sha256'].keys())
for a, b in [('before_gateon', 'before_gateoff'), ('after_gateon_r1', 'after_gateon_r2'),
             ('before_gateon', 'after_gateon_r1'), ('before_gateoff', 'after_gateoff')]:
    same = [k for k in keys if S[a]['sha256'][k] == S[b]['sha256'][k]]
    diff = [k for k in keys if S[a]['sha256'][k] != S[b]['sha256'][k]]
    print('  %-16s vs %-16s identical=%d/9 diff=%s' % (a, b, len(same), diff or '-'))

# churn audit (gate-on before vs after): previously unique assignments
A = json.load(open('.omo/agents/csp/before_gateon/minclass_assignments.json', encoding='utf-8'))
B = json.load(open('.omo/agents/csp/after_gateon_r1/minclass_assignments.json', encoding='utf-8'))
ua = {k: v.get('class') for k, v in A.items() if len(v.get('candidates') or []) == 1}
ub = {k: v.get('class') for k, v in B.items() if len(v.get('candidates') or []) == 1}
lost = [k for k in ua if k not in ub]
chg = [(k, ua[k], ub[k]) for k in ua if k in ub and ua[k] != ub[k]]
newu = [k for k in ub if k not in ua]
print('\nchurn gate-on before->after: before-unique=%d after-unique=%d lost=%d changed_class=%d new_unique=%d'
      % (len(ua), len(ub), len(lost), len(chg), len(newu)))
for k in lost[:10]:
    print('  LOST', k, A[k].get('candidates'))
for k, x, y in chg[:10]:
    print('  CHANGED', k, x, '->', y, B[k].get('candidates'))
json.dump({'lost': lost[:50], 'changed': chg[:50],
           'counts': {'lost': len(lost), 'changed': len(chg), 'new_unique': len(newu)}},
          open('.omo/agents/csp/churn.json', 'w', encoding='utf-8'), indent=1)
