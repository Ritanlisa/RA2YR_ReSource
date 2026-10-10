#!/usr/bin/env python3
"""G42.29d: unified C2039 member supply pack (agent-A B2/B3/B4 buckets).

Harvests the e4-decl-missing subset (TU includes Cls_e4.hpp, member
absent -> direct supply into that hpp) from the g138 round-5 research
classification .omo/g139_research/c2039_final_buckets.json:

  B3 mech (m_/q/u)  -- array-aware (m_1 subscript family sizes from
                       corpus max index), q-regex extended to {3,}
  B3 pads (__pad_/__tail_) -- array sizing like supply_pad_members
  B2 truth-named    -- offset carried by the bucket entry
  B4 vtable1        -- E4Recv convention `vfptr@0x0` vs body vocab
                       `vtable1` (wave-20 rewrite vocabulary): supply
                       `void *vtable1; // 0x0` alongside

Universe-routed pairs (flat-universe/no-visible-decl) are deferred to the
next wave. Duplicate-offset annotations are precedented in flat hpps.

Usage: [--apply]
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
E4C = ROOT / 'src/e4/classes'
BK = json.load(open(ROOT / '.omo/g139_research/c2039_final_buckets.json'))

BUCKETS = {'B2_SUPPLY_TRUTHNAME', 'B3_MECH_SUPPLY', 'B3_PAD_SUPPLY',
           'B3_PAD_ARRAY_SUPPLY', 'B4_VTABLE_SUPPLY'}

MEMBER = re.compile(r'^\s*[\w:\s\*&\[]+\b([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;'
                    r'\s*(?://\s*0x([0-9A-Fa-f]+))?.*\r?\n?$')

# per-PAIR subscript evidence: the (cls,name) pair's OWN error-site lines
# decide scalar vs array and the max index (name-global sizing cross-class
# contaminates -- a scalar site must never become an array).
SITES = {}
for s in json.load(open(ROOT / '.omo/g139_research/c2039_sites.json')):
    # agent-A artifact: [tu, line, name, cls, vis]
    if isinstance(s, dict):
        key, f, ln = (s['cls'], s['name']), s['file'], s['line']
    else:
        key, f, ln = (s[3], s[2]), s[0], s[1]
    SITES.setdefault(key, []).append((f, ln))
SUBEVID = {}
for (cls, name), lst in SITES.items():
    k = None
    for f, ln in lst:
        try:
            line = Path(f).read_text(encoding='utf-8',
                                     errors='replace').split('\n')[ln - 1]
        except (OSError, IndexError):
            continue
        m = re.search(re.escape(name) + r'\[(\d+)\]', line)
        if m:
            k = max(k or 0, int(m.group(1)))
    if k is not None:
        SUBEVID[(cls, name)] = k


def decode(name):
    """-> (offset, base_type) or None."""
    m = re.match(r'^m_([0-9A-Fa-f]+)$', name)
    if m:
        return int(m.group(1), 16), 'unsigned int'
    m = re.match(r'^q([0-9A-Fa-f]{3,})$', name)
    if m:
        return int(m.group(1), 16), 'unsigned int'
    m = re.match(r'^u(32|16|8)_([0-9A-Fa-f]+)$', name)
    if m:
        return int(m.group(2), 16), {'32': 'unsigned int',
                                     '16': 'unsigned short',
                                     '8': 'unsigned char'}[m.group(1)]
    m = re.match(r'^__pad_([0-9A-Fa-f]+)$', name) or \
        re.match(r'^__tail_([0-9A-Fa-f]+)$', name)
    if m:
        return int(m.group(1), 16), 'unsigned char'
    m = re.match(r'^(?:[A-Za-z_]\w*_)?field_0x([0-9A-Fa-f]+)$', name)
    if m:
        return int(m.group(1), 16), 'unsigned int'
    if re.match(r'^vtable1$', name):
        return 0, 'void *'
    return None


stats = Counter()
edits = {}
for x in BK:
    bucket, name, cls, cnt, form, off0 = x[0], x[1], x[2], x[3], x[4], x[5]
    if bucket not in BUCKETS or x[7] != 'e4-decl-missing':
        continue
    hp = E4C / ('%s_e4.hpp' % cls)
    if not hp.exists():
        stats['skip-no-hpp'] += cnt
        continue
    dec = decode(name) if off0 is None else (int(off0), 'unsigned int')
    if dec is None:
        stats['skip-undecodable'] += cnt
        continue
    off, ty = dec
    if name.startswith('__'):
        ty = 'unsigned char'
    if name == 'vtable1':
        ty = 'void *'
    with open(hp, 'r', encoding='utf-8', errors='replace', newline='') as f:
        lines = f.read().splitlines(keepends=True)
    have = any((dm := MEMBER.match(ln.rstrip('\r\n'))) and dm.group(1) == name
               for ln in lines)
    if have:
        stats['skip-already'] += cnt
        continue
    # array sizing only on THIS pair's own subscript evidence
    k = SUBEVID.get((cls, name))
    if k is not None:
        decl = 'unsigned char %s[%d];  // 0x%X' % (name, k + 1, off)
    else:
        decl = '%s %s;  // 0x%X' % (ty, name, off)
    insert_at = None
    for i, ln in enumerate(lines):
        dm = MEMBER.match(ln.rstrip('\r\n'))
        if dm and dm.group(3) and int(dm.group(3), 16) > off:
            insert_at = i
            break
    if insert_at is None:
        for i in range(len(lines) - 1, -1, -1):
            if lines[i].rstrip('\r\n') == '};':
                insert_at = i
                break
    if insert_at is None:
        stats['skip-no-insert'] += cnt
        continue
    lines.insert(insert_at, '    %s\n' % decl)
    edits[str(hp)] = lines
    stats['supplied:%s' % bucket.split('_')[0]] += cnt

print('stats:', dict(stats.most_common()))
if APPLY:
    for path, lines in edits.items():
        with open(path, 'w', encoding='utf-8', newline='') as f:
            f.write(''.join(lines))
    print('written:', len(edits), 'files')
else:
    print('(dry run -- pass --apply)')
