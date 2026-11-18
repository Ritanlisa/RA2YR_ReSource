"""Churn attribution audit: which BM5 rows (if any) participate in clusters whose
previously-unique assignment was lost or whose class changed, and which BM5 rows
created the 6 new inconsistency entries of the conflict-resolution ledger.
"""
import json, os, sys, collections

sys.stdout.reconfigure(encoding='utf-8')
os.chdir(r'D:\RA2YR_ReSource')

B = json.load(open('.omo/agents/csp/before_gateon/minclass_assignments.json', encoding='utf-8'))
A = json.load(open('.omo/agents/csp/after_gateon_r1/minclass_assignments.json', encoding='utf-8'))
CB = json.load(open('.omo/agents/csp/before_gateon/minclass_clusters.json', encoding='utf-8'))
CA = json.load(open('.omo/agents/csp/after_gateon_r1/minclass_clusters.json', encoding='utf-8'))
cand = json.load(open('.omo/agents/csp/bm5_candidates.json', encoding='utf-8'))
bm5_ents = {r['ent'] for r in cand['final']}
bm5_by_fn = collections.defaultdict(list)
for r in cand['final']:
    bm5_by_fn[r['fn']].append(r)

ent2rootA = {}
for root, v in CA.items():
    for e in v.get('ents') or []:
        ent2rootA[e] = root


def uniq(d):
    return {k: v.get('class') for k, v in d.items() if len(v.get('candidates') or []) == 1}


ub, ua = uniq(B), uniq(A)
lost = [k for k in ub if k not in ua]
changed = [(k, ub[k], ua[k]) for k in ub if k in ua and ub[k] != ua[k]]

print('lost unique cluster roots:', len(lost), '| changed class:', len(changed))

# --- attribution for lost ---
attr_rows = collections.Counter()
lost_detail = []
for k in lost:
    if k in A:
        # same cluster root widened
        root = k
        mode = 'widened'
        new_cands = A[k].get('candidates')
    else:
        mode = 'merged'
        ents = (CB.get(k) or {}).get('ents') or []
        root = None
        for e in ents:
            if e in ent2rootA:
                root = ent2rootA[e]
                break
        new_cands = (A.get(root) or {}).get('candidates') if root else None
    cluster_ents = set((CA.get(root) or {}).get('ents') or []) if root else set()
    hits = sorted(cluster_ents & bm5_ents)
    fns = sorted({r['fn'] for r in cand['final'] if r['ent'] in hits})
    for f in fns:
        attr_rows[f] += 1
    lost_detail.append({'root_before': k, 'mode': mode, 'root_after': root,
                        'before_class': ub[k], 'after_candidates': new_cands,
                        'bm5_ents_in_cluster': hits, 'bm5_fns': fns})
print('\nLOST detail (first 20):')
for d in lost_detail[:20]:
    print(' ', d['root_before'], d['mode'], '->', d['root_after'], d['before_class'],
          '| after:', (d['after_candidates'] or [])[:6], '| bm5 hits:', d['bm5_ents_in_cluster'][:4])
unattr = [d for d in lost_detail if not d['bm5_ents_in_cluster']]
print('lost WITHOUT any BM5 ent in the after-cluster:', len(unattr), '/', len(lost_detail))

# --- attribution for changed ---
ch_detail = []
for k, c0, c1 in changed:
    cluster_ents = set((CA.get(k) or {}).get('ents') or [])
    hits = sorted(cluster_ents & bm5_ents)
    ch_detail.append({'root': k, 'before': c0, 'after': c1,
                      'bm5_ents_in_cluster': hits})
print('\nCHANGED detail:')
for d in ch_detail:
    print(' ', d['root'], d['before'], '->', d['after'], '| bm5:', d['bm5_ents_in_cluster'])

# --- 6 new inconsistency entries ---
RB = json.load(open('.omo/agents/csp/before_gateon/minclass_conflict_resolution.json', encoding='utf-8'))
RA = json.load(open('.omo/agents/csp/after_gateon_r1/minclass_conflict_resolution.json', encoding='utf-8'))
sk = lambda e: json.dumps(e, sort_keys=True)
sb = {sk(e) for e in RB}
new_conf = [e for e in RA if sk(e) not in sb]
print('\nNEW inconsistency entries:', len(new_conf))
conf_rows = []
for e in new_conf:
    ents = set(e.get('ents') or [])
    hits = sorted(ents & bm5_ents)
    # BM family domain is the BM-contributed mask(s)
    bm_dom = (e.get('family_domains') or {}).get('BM')
    for r in cand['final']:
        if r['ent'] in hits:
            conf_rows.append({'cluster': e.get('cluster'), 'families': e.get('families'),
                              'bm_row': {'ent': r['ent'], 'types': r['types'], 'via': r['via'],
                                         'fn': r['fn'], 'unit': r.get('unit')},
                              'bm_family_domain': bm_dom,
                              'other_domains': {k: v[:8] for k, v in (e.get('family_domains') or {}).items() if k != 'BM'}})
    print(' ', e.get('cluster'), 'families=', e.get('families'), 'bm_dom=', bm_dom,
          'hits=', hits)

json.dump({'lost': lost_detail, 'changed': ch_detail,
           'new_inconsistencies': conf_rows,
           'counts': {'lost': len(lost_detail), 'lost_unattributed': len(unattr),
                      'changed': len(ch_detail), 'new_inconsistencies': len(new_conf)}},
          open('.omo/agents/csp/churn_audit.json', 'w', encoding='utf-8'), ensure_ascii=False, indent=1)
print('\nwrote .omo/agents/csp/churn_audit.json')
