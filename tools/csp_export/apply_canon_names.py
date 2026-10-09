#!/usr/bin/env python3
"""Apply canon-rendered member names to regenerated bodies (G42.57ax).

gen_cpp_canon.py renders gate-clean cpp member names (q%03X style) for
placeholder til names (the `Cls_field_0xN` family, banned by the gate's
ida-naming check). Regenerated bodies still carry the til names, so bodies
and headers disagree -> C2039. This rewriter converges bodies onto the
canon identifiers using anchors/canon_member_names.json (the render-time
decision record).

Names with conflicting targets across classes are skipped (reported) --
those need receiver-typed rewriting, not global substitution.

Usage: python tools/csp_export/apply_canon_names.py [--apply]
"""
import json
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
NAME_MAP = json.loads(
    (ROOT / 'anchors' / 'canon_member_names.json').read_text(encoding='utf-8'))

# flatten + conflict detection (til names embed class+offset, so the
# _field_0x family is globally unique; pads may conflict -> skip those)
flat = {}
conflicts = defaultdict(set)
for _cls, m in NAME_MAP.items():
    for old, new in m.items():
        if old in flat and flat[old] != new:
            conflicts[old] |= {flat[old], new}
        else:
            flat[old] = new
for old in conflicts:
    flat.pop(old, None)

print(f"map: {sum(len(m) for m in NAME_MAP.values())} decisions | "
      f"applicable: {len(flat)} | conflicted (skipped): {len(conflicts)}")

PAT = re.compile(
    r'\b(%s)\b' % '|'.join(re.escape(k) for k in sorted(flat, key=len,
                                                         reverse=True)))
count = defaultdict(int)
touched = 0
for p in sorted((ROOT / 'src').rglob('*.cpp')):
    try:
        text = p.read_text(encoding='utf-8', errors='replace')
    except OSError:
        continue

    def _sub(m):
        count[m.group(1)] += 1
        return flat[m.group(1)]

    new, n = PAT.subn(_sub, text)
    if n:
        touched += 1
        if APPLY:
            p.write_text(new, encoding='utf-8', newline='')

total = sum(count.values())
print(f"sites rewritten: {total} across {touched} files "
      f"({len(count)} distinct names)")
if conflicts:
    print("conflicted names (NOT rewritten):")
    for k in sorted(conflicts)[:10]:
        print(f"  {k} -> {sorted(conflicts[k])}")
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
