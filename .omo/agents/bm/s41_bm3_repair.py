"""BM3 final repair: drop the 13 bm3 rows on the 6 functions whose receiver-typed
member clusters ({unsigned char} forced) got downgraded to {Char, unsigned char}
narrow by C1-coverage relaxation after the BM owner pins strengthened
receiver-type propagation. Verified revert: probe run (2026-11-17) shows all six
back at domain=1 while coverage keeps unique=44,114/91,233=48.4%.

Records the repair in meta.round3.repair_log (same convention as round-1
meta.repair_log). Run from the FULL 852-row state.
"""
import json, os, datetime
os.chdir(r'D:\RA2YR_ReSource')
PATH = 'anchors/byte_match_types.json'
CULPRIT_FNS = {0x4F3A90, 0x49E3B0, 0x544C80, 0x43AE10, 0x49E4F0, 0x69E9F0}
doc = json.load(open(PATH, encoding='utf-8'))
ev = doc['evidence']
assert len(ev) == 2071, 'expect full 852-row state, got %d' % len(ev)
drop_idx = [i for i, r in enumerate(ev)
            if r.get('src') == 'bm3' and int(str(r.get('fn')), 16) in CULPRIT_FNS]
dropped = [ev[i] for i in drop_idx]
doc['evidence'] = [r for i, r in enumerate(ev) if i not in set(drop_idx)]
g = doc['meta']['round3']['gate']
ch_of = {'T:': 'bm-owner', 'RE': 'bm-sig', 'P:': 'bm-sig', 'M:': 'bm-member'}
g['final'] = g['final'] - len(dropped)
g['per_channel'] = {k: v - sum(1 for d in dropped if ch_of[d['ent'][:2]] == k)
                    for k, v in g['per_channel'].items()}
g['repair_dropped'] = len(dropped)
doc['meta']['round3']['repair_log'] = {
    'generated': datetime.datetime.now().isoformat(timespec='seconds'),
    'reason': ('BM owner pins on 6 functions strengthened receiver-type member '
               'propagation; C1 coverage relaxation widened six {unsigned char} '
               'forced member clusters to {Char, unsigned char} (forced->narrow). '
               'Dropping all bm3 rows on those functions reverts the widening '
               '(probe-verified, all six back to domain=1) at zero coverage cost '
               '(unique 44,113 -> 44,114).'),
    'functions': ['0x%08X' % f for f in sorted(CULPRIT_FNS)],
    'dropped_ents': [d['ent'] for d in dropped],
    'dropped_count': len(dropped),
    'revert_verified': True,
}
doc['meta']['evidence_total'] = len(doc['evidence'])
json.dump(doc, open(PATH, 'w', encoding='utf-8'), ensure_ascii=False, indent=1)
print('final evidence rows: %d (dropped %d in repair)' % (len(doc['evidence']), len(dropped)))
print('per_channel now:', g['per_channel'])
