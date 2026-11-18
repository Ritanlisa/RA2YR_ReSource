"""BM4 static validation (read-only, NO solver run).

Checks:
  V1  anchors/byte_match_types.json: 2058 existing rows byte-identical to the
      git HEAD version (prefix preservation, deep-equal).
  V2  new rows (src=bm4): count + per-channel + per-fn distribution.
  V3  hard disjointness: new-row fn set INTERSECT rounds1-3 fn set == empty;
      new-row ent set INTERSECT rounds1-3 ent set == empty.
  V4  new rows all satisfy the clean-gate provenance: every fn is in the bm4
      frozen snapshot clean pool AND has a MATCH+clean+0rv part_report row.
  V5  meta.round4 present with scope/gate bookkeeping; meta.evidence_total
      == len(evidence).
"""
import json, glob, os, re, subprocess, collections

os.chdir(r'D:\RA2YR_ReSource')


def norm_addr(a):
    return ('0x%08x' % int(a, 16)).lower()


doc = json.load(open('anchors/byte_match_types.json', encoding='utf-8'))
EV = doc['evidence']
old = [r for r in EV if r.get('src') != 'bm4']
new = [r for r in EV if r.get('src') == 'bm4']
print('V2 total rows:', len(EV), '| old:', len(old), '| new(bm4):', len(new))

# V1: prefix deep-equal vs git HEAD
head_txt = subprocess.run(['git', 'show', 'HEAD:anchors/byte_match_types.json'],
                          capture_output=True, text=True, encoding='utf-8').stdout
head_doc = json.loads(head_txt)
head_ev = head_doc['evidence']
assert len(head_ev) == 2058, 'HEAD evidence != 2058: %d' % len(head_ev)
assert EV[:2058] == head_ev, 'V1 FAIL: first 2058 rows differ from HEAD'
print('V1 PASS: first 2058 rows deep-equal to git HEAD')

# V3: disjointness
old_fns = {norm_addr(str(r.get('fn'))) for r in old}
old_ents = {r['ent'] for r in old}
new_fns = {norm_addr(str(r.get('fn'))) for r in new}
new_ents = {r['ent'] for r in new}
i_fns = old_fns & new_fns
i_ents = old_ents & new_ents
assert not i_fns, 'V3 FAIL: fn overlap %d e.g. %s' % (len(i_fns), sorted(i_fns)[:5])
assert not i_ents, 'V3 FAIL: ent overlap %d e.g. %s' % (len(i_ents), sorted(i_ents)[:5])
print('V3 PASS: new fn set (%d) and ent set (%d) disjoint vs rounds 1-3 (fn %d / ent %d)'
      % (len(new_fns), len(new_ents), len(old_fns), len(old_ents)))

# V2 detail: per channel, tier, proof
per_ch = collections.Counter(r['via'] for r in new)
per_proof = collections.Counter(r['proof'] for r in new)
per_tier = collections.Counter(r['tier'] for r in new)
print('V2 channels:', dict(per_ch), '| proofs:', dict(per_proof), '| tiers:', dict(per_tier))
ent_prefix = collections.Counter(r['ent'].split(':')[0] for r in new)
print('V2 ent prefixes:', dict(ent_prefix))
for r in new:
    assert r['tier'] == 'strict'
    assert r.get('proof') in ('width-pinned', 'ledger-attribution', 'codegen-consistent')
print('V2 PASS: all new rows strict tier with canonical proof tags')

# V4: clean-pool + provenance for every new fn
snap = json.load(open('.omo/agents/bm/status_snapshot_bm4.json', encoding='utf-8'))
clean = {norm_addr(k) for k, v in snap.items()
         if v.get('status') == 'OK' and v.get('clean') is True
         and v.get('rule_violations') == 0 and not v.get('this_as_id')}
missing_pool = new_fns - clean
assert not missing_pool, 'V4 FAIL: fns not in bm4 clean pool: %s' % sorted(missing_pool)[:5]
prov = set()
for p in glob.glob('.omo/**/part_report.json', recursive=True):
    try:
        d = json.load(open(p, encoding='utf-8'))
    except Exception:
        continue
    for r in d.get('results') or []:
        a = norm_addr(str(r.get('addr') or '0'))
        if a in new_fns and r.get('verdict') == 'MATCH' and r.get('clean') \
                and r.get('rule_violations') == 0:
            prov.add(a)
missing_prov = new_fns - prov
assert not missing_prov, 'V4 FAIL: fns without MATCH+clean+0rv part row: %s' % sorted(missing_prov)[:5]
print('V4 PASS: all %d new fns in bm4 frozen clean pool AND provenance-reverified' % len(new_fns))

# V5: meta
r4 = doc['meta'].get('round4')
assert r4 is not None, 'V5 FAIL: meta.round4 missing'
assert doc['meta']['evidence_total'] == len(EV), 'V5 FAIL: evidence_total mismatch'
assert r4['gate']['final'] == len(new), 'V5 FAIL: gate.final != new row count'
print('V5 PASS: meta.round4 present; evidence_total=%d; gate.final=%d'
      % (doc['meta']['evidence_total'], r4['gate']['final']))

# sig-channel bare-int-family check (BM3 criteria): no int-family types on bm-sig rows
BM_SIG_EXCLUDE = {'int', 'unsigned int', 'long', 'unsigned long', 'dword'}
bad = [r for r in new if r['via'] == 'bm-sig'
       and any(t.lower() in BM_SIG_EXCLUDE for t in r['types'])]
assert not bad, 'sig bare-int leak: %s' % bad[:3]
print('sig bare-int-family exclusion: PASS (0 leaks)')
# owner channel: every T: row's class is in the proven universe
_pv = json.load(open('.omo/agents/bm/proven_classes.json', encoding='utf-8'))
proven = {x.lower() for x in _pv['proven']}
badown = [r for r in new if r['via'] == 'bm-owner' and r['types'][0].lower() not in proven]
assert not badown, 'owner phantom leak: %s' % badown[:3]
print('owner proven-universe gate: PASS')

print()
print('ALL STATIC VALIDATIONS PASS — %d new rows (%s)' % (len(new), dict(per_ch)))
