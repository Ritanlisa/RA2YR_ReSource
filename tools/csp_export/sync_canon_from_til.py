#!/usr/bin/env python3
"""Sync canon member tables from the flattened-til dump (G42.57ax).

The regenerated bodies carry til member names (Hex-Rays renders til names
verbatim); the canon tables (csp_canon_members / member_lookup) still carry
pre-flattening evidence names (u32_N / pads). For every class present in
both:

  - til member at an offset -> canonical NAME (and type/size) at that offset
    -- ONLY when the current name is a placeholder (N1: til names are
    binary-evidence rank; they may fill placeholders, never overwrite
    semantic names, and never displace a higher-rank name_provenance
    winner).  Placeholder til names (q-NNN render forms) are never copied.
  - canon-only offsets stay (real offset-access evidence, additive)
  - function-typed til members are skipped (methods live in the sig channel)
  - member_lookup `src` adjudication markers are PRESERVED on rename
    (G42.57ax wrote 'til-sync ...' over adjudicated markers, destroying the
    gen_cpp_canon tier-2 protection -- forbidden since N1)

Updates: anchors/csp_canon_members.json + tools/member_lookup.json.
Run gen_cpp_canon.py afterwards to re-render classes.hpp.

Usage: python tools/csp_export/sync_canon_from_til.py [--apply]
"""
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(Path(__file__).resolve().parent))
from _provenance import (  # noqa: E402
    is_placeholder, load_provenance, member_source_of, RANK,
)

APPLY = '--apply' in sys.argv
TIL_PATH = ROOT / '.omo' / 'til_members.json'
CC_PATH = ROOT / 'anchors' / 'csp_canon_members.json'
ML_PATH = ROOT / 'tools' / 'member_lookup.json'
GARBAGE = 2 ** 40

TIL = json.loads(TIL_PATH.read_text(encoding='utf-8'))
cc = json.loads(CC_PATH.read_text(encoding='utf-8'))
ml = json.loads(ML_PATH.read_text(encoding='utf-8'))
prov = load_provenance()

renamed = filled = added = skipped_placeholder_til = \
    skipped_protected = skipped_garbage = 0
touched = set()
for cls, body in cc.items():
    if not isinstance(body, dict):
        continue
    t = TIL.get(cls)
    if not t or not isinstance(t.get('members'), dict):
        continue
    members = body.setdefault('members', {})
    mle_all = ml.setdefault(cls, {})
    for off, m in t['members'].items():
        nm = m.get('name')
        if not nm or '(' in (m.get('type') or ''):
            continue
        try:
            off = str(int(off, 16))  # canon/ml tables key offsets in decimal
        except ValueError:
            continue
        if int(off) >= GARBAGE:
            skipped_garbage += 1
            continue
        # til placeholder render forms (q-NNN etc.) are never names
        if is_placeholder(nm):
            skipped_placeholder_til += 1
            continue
        # N1: a higher/equal-rank provenance winner outranks the til
        # observation (til = binary-evidence; strictly-lower rank wins)
        pv = member_source_of(prov, cls, off)
        if pv and RANK.get(pv.get('source'), RANK['placeholder']) \
                <= RANK['binary-evidence'] and not is_placeholder(pv['name']):
            skipped_protected += 1
            continue
        cur = members.get(off)
        if cur is None:
            members[off] = {'name': nm,
                            'type': m.get('type') or 'unsigned int',
                            'size': m.get('size') or 4}
            added += 1
            touched.add(cls)
        elif isinstance(cur, dict) and cur.get('name') != nm \
                and is_placeholder(cur.get('name') or ''):
            cur['name'] = nm  # placeholder -> til observation
            renamed += 1
            touched.add(cls)
        elif isinstance(cur, dict) and cur.get('name') != nm:
            # both semantic, no provenance winner: keep canon (stability)
            skipped_protected += 1
            continue
        # member_lookup mirror -- fill only; never overwrite a semantic
        # name, never stomp an existing `src` adjudication marker
        mo = mle_all.get(off)
        if mo is None:
            mle_all[off] = {'name': nm,
                            'type': m.get('type') or 'unsigned int',
                            'size': m.get('size') or 4,
                            'src': 'til-sync'}
            touched.add(cls)
            filled += 1
        elif isinstance(mo, dict) and mo.get('name') != nm \
                and is_placeholder(mo.get('name') or ''):
            mo['name'] = nm
            if not mo.get('type'):
                mo['type'] = m.get('type') or 'unsigned int'
            mo['size'] = m.get('size') or mo.get('size') or 4
            # `src` marker preserved verbatim
            touched.add(cls)
            filled += 1

print(f"classes touched: {len(touched)} | canon placeholder->til: {renamed} "
      f"| ml placeholder->til: {filled} | offsets added: {added}")
print(f"skipped: til-placeholder names {skipped_placeholder_til} | "
      f"protected/provenance {skipped_protected} | garbage {skipped_garbage}")
if APPLY:
    for p, d in ((CC_PATH, cc), (ML_PATH, ml)):
        tmp = str(p) + '.tmp'
        with open(tmp, 'w', encoding='utf-8') as f:
            json.dump(d, f, ensure_ascii=False)
        Path(tmp).replace(p)
    print('APPLIED')
else:
    print('DRY RUN (use --apply)')
