"""BM round 5 apply: append the gate-passing candidate rows to
anchors/byte_match_types.json (append-only; existing rows stay byte-identical).

Inputs:
  .omo/agents/csp/bm5_candidates.json   (produced by s_bm5_extract.py)
  anchors/byte_match_types.json         (rounds 1-4, 2,092 rows)

Invariants enforced before writing:
  I1 the current file reproduces its own evidence rows byte-for-byte through the
     same serializer (format sanity);
  I2 every new ent is disjoint from the existing 2,092 ents;
  I3 the rendered text of the first N rows is an exact substring of the new
     file (byte-identical preservation of every existing row);
  I4 every new row carries fn/ent/types/via/tier/proof/src='bm5'.
"""
import json, os, sys, datetime, hashlib

sys.stdout.reconfigure(encoding='utf-8')
os.chdir(r'D:\RA2YR_ReSource')

PATH = 'anchors/byte_match_types.json'
CAND = '.omo/agents/csp/bm5_candidates.json'
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
META = doc['meta']
old_ev = [dict(r) for r in EV]
old_ents = {r['ent'] for r in EV}
print('existing evidence:', len(EV), 'ents:', len(old_ents))

# I1 format sanity
assert rr(old_ev) in old_txt, 'FATAL: current file does not round-trip through the serializer'
print('I1 format round-trip: PASS')

cand = json.load(open(CAND, encoding='utf-8'))
final = cand['final']
print('candidates final:', len(final))

# I2/I4
assert not (old_ents & {r['ent'] for r in final}), 'FATAL: duplicating existing ent'
assert len({r['ent'] for r in final}) == len(final), 'FATAL: duplicate ent inside candidates'
for r in final:
    assert r.get('src') == 'bm5', 'FATAL: bad src'
    assert r.get('fn') and r.get('ent') and r.get('types'), 'FATAL: incomplete row'
    assert r.get('via') in ('bm-owner', 'bm-member', 'bm-sig'), 'FATAL: bad via'
    assert r.get('tier') == 'strict' and r.get('proof'), 'FATAL: missing tier/proof'
print('I2/I4 ent disjointness + row schema: PASS')

EV.extend(final)
META['round5'] = {
    'generated': datetime.datetime.now().isoformat(timespec='seconds'),
    'tool': '.omo/agents/csp/s_bm5_extract.py + s_bm5_apply.py',
    'track': 'CSP track (BM5 harvest)',
    'scope': cand['meta']['scope'],
    'population': cand['meta']['population'],
    'gate': cand['meta']['gate'],
    'conflict_excluded_ledger': cand['conflict_dropped'],
    'dedupe_dropped_ledger': cand['dedupe_dropped'],
    'internal_conflict_excluded_ledger': cand['internal_conflict_dropped'],
    'candidates_file': CAND,
    'candidates_sha256': hashlib.sha256(open(CAND, 'rb').read()).hexdigest(),
    'invariant': 'no ent duplicates rounds 1-4 evidence (checked before append); existing rows preserved byte-identical',
}
META['evidence_total'] = len(EV)

new_txt = json.dumps(doc, indent=1, ensure_ascii=False)
# I3 byte-preservation of every existing row
assert rr(old_ev) in new_txt, 'FATAL: existing evidence rows changed'
print('I3 existing-rows byte-identical (rendered substring): PASS')

open(PATH, 'w', encoding='utf-8', newline='').write(new_txt)

# post-write verification
chk = json.load(open(PATH, encoding='utf-8'))
assert len(chk['evidence']) == len(old_ev) + len(final)
assert chk['evidence'][:len(old_ev)] == old_ev
assert rr(chk['evidence'][:len(old_ev)]) in open(PATH, encoding='utf-8').read()
print('POST: evidence 2092 -> %d | prefix deep-equal | file %d bytes'
      % (len(chk['evidence']), os.path.getsize(PATH)))
