"""BM5 repair (conflict mandate): drop the 6 bm5 rows that created the 6 new
inconsistency entries in anchors/minclass_conflict_resolution.json on the first
post-apply solver run (before: 7,235 entries; after: 7,241).

Offending rows (all on 4 functions, identified by churn_audit.json):
  0x474B20  T:474B20 (HouseClass)      vs C2
  0x474B20  P:474B20:0 (unsigned char*) vs C7
  0x474B20  P:474B20:1 (char*)          vs C7
  0x4A2350  T:4A2350 (TabClass)        vs C1/C2/SS
  0x4739F0  P:4739F0:0 (char*)         vs C7
  0x473A30  P:473A30:0 (char**)        vs C7

Task mandate: "if a conflict appears, do NOT apply the offending rows -- log
them in the report and drop them." Drop is per-function (all bm5 rows on the
function), matching the BM3 repair convention.

Append-only file: existing 2,092 rows are untouched; only the bm5 tail shrinks.
"""
import json, os, sys, datetime, collections

sys.stdout.reconfigure(encoding='utf-8')
os.chdir(r'D:\RA2YR_ReSource')

PATH = 'anchors/byte_match_types.json'
CAND = '.omo/agents/csp/bm5_candidates.json'
CULPRIT_FNS = {0x474B20, 0x4A2350, 0x4739F0, 0x473A30}
PAD = '  '


def rr(rows, pad=PAD):
    parts = []
    for r in rows:
        s = json.dumps(r, indent=1, ensure_ascii=False)
        parts.append('\n'.join(pad + ln for ln in s.split('\n')))
    return ',\n'.join(parts)


old_txt = open(PATH, encoding='utf-8').read()
doc = json.loads(old_txt)
EV = doc['evidence']
n_old = 2092
assert len(EV) > n_old and all(r.get('src') == 'bm5' for r in EV[n_old:]), 'unexpected tail'
base_rows = EV[:n_old]
bm5_rows = EV[n_old:]

keep, dropped = [], []
for r in bm5_rows:
    if int(str(r['fn']), 16) in CULPRIT_FNS:
        dropped.append(r)
    else:
        keep.append(r)
print('bm5 rows: %d -> keep %d, drop %d' % (len(bm5_rows), len(keep), len(dropped)))
for d in dropped:
    print('  DROP', d['fn'], d['ent'], d['types'], d['via'])

doc['evidence'] = base_rows + keep
g = doc['meta']['round5']['gate']
per_ch = collections.Counter(r['via'] for r in keep)
g['final_raw'] = g['final']
g['repair_dropped'] = len(dropped)
g['final'] = len(keep)
g['per_channel_after_repair'] = dict(per_ch)
doc['meta']['round5']['repair_log'] = {
    'generated': datetime.datetime.now().isoformat(timespec='seconds'),
    'reason': ('6 bm5 rows on 4 functions produced 6 new inconsistency entries in '
               'minclass_conflict_resolution.json (BM vs C2/C7/C1/SS empty intersections) '
               'on the first post-apply solve. Per task mandate the offending rows are '
               'dropped (per-function, BM3 repair convention); conflict ledger returns to '
               'the pre-apply 7,235 entries and solver conflicts stay 0.'),
    'functions': ['0x%08X' % f for f in sorted(CULPRIT_FNS)],
    'dropped_ents': [d['ent'] for d in dropped],
    'dropped_count': len(dropped),
}
doc['meta']['evidence_total'] = len(doc['evidence'])

new_txt = json.dumps(doc, indent=1, ensure_ascii=False)
assert rr(base_rows) in new_txt, 'FATAL: existing 2,092 rows changed'
assert rr(doc['evidence']) in new_txt
open(PATH, 'w', encoding='utf-8', newline='').write(new_txt)

# candidates artifact: record the repair (final stays the pristine extraction set)
c = json.load(open(CAND, encoding='utf-8'))
c['repair'] = {
    'generated': datetime.datetime.now().isoformat(timespec='seconds'),
    'reason': 'new inconsistency entries in the solver conflict-resolution ledger (BM vs C2/C7/C1/SS)',
    'functions': ['0x%08X' % f for f in sorted(CULPRIT_FNS)],
    'dropped_ents': [{'ent': d['ent'], 'types': d['types'], 'via': d['via'], 'fn': d['fn']}
                     for d in dropped],
    'applied_rows': len(keep),
}
json.dump(c, open(CAND, 'w', encoding='utf-8'), ensure_ascii=False, indent=1)

chk = json.load(open(PATH, encoding='utf-8'))
assert chk['evidence'][:n_old] == base_rows
print('POST: evidence %d -> %d (existing prefix intact) | file %d bytes'
      % (n_old + len(bm5_rows), len(chk['evidence']), os.path.getsize(PATH)))
