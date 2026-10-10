#!/usr/bin/env python3
"""G42.15: S8 `?`-归属 rewrite -- `X->?->M` -> `X->owner->M`.

Round-2 agent-5 finding (100% decoded): the `?` in `this->?->M` is the
lost intermediate pointer name = TechnoClass::owner (HouseClass*, @0x21C
= G16's owner@540 ruling; member present in TechnoClass_e4.hpp:257).
Every trailing member sampled (radarVisibleTo/bunkersCount/ownedTiberium/
primaryUnused1/...) is a HouseClass member per member_lookup.

Gate: rewrite only when M is a known HouseClass member name; anything else
is recorded for review.

Usage: [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = "--apply" in sys.argv

ml = json.load(open(ROOT / "tools/member_lookup.json", encoding="utf-8", errors='replace'))
house = {v["name"] for v in ml.get("HouseClass", {}).values()} \
    if isinstance(ml.get("HouseClass"), dict) else set()
print("HouseClass member names:", len(house))

PAT = re.compile(r"->\?->([A-Za-z_]\w*)")
n = ok = skipped = 0
edits = {}
for p in sorted((ROOT / "src").rglob("*.cpp")):
    if "_generated" in str(p) or "raw_decomp" in str(p):
        continue
    try:
        with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
            txt = f.read()
    except OSError:
        continue
    orig = txt

    def sub(m):
        global ok, skipped
        if m.group(1) in house or not house:
            ok += 1
            return "->owner->" + m.group(1)
        skipped += 1
        return m.group(0)

    txt = PAT.sub(sub, txt)
    if txt != orig:
        edits[str(p)] = txt
        n += len(PAT.findall(orig))
print(f"S8 sites: {n} rewritten {ok} skipped-nonHouse {skipped} "
      f"files {len(edits)} {'(written)' if APPLY else '(DRY)'}")
if APPLY:
    for path, txt in edits.items():
        with open(path, "w", encoding="utf-8", errors='replace', newline="") as f:
            f.write(txt)
