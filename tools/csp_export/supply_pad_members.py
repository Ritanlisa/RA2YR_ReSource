#!/usr/bin/env python3
"""G42.24: d-bucket THIS-channel pad supply (`__pad_N` byte arrays).

Round-3 agent-2 d-bucket ruling: THIS-receiver pads (175 sites) are
same-class supply gaps -> `unsigned char __pad_N[k+1];  // 0xN` array
form (1-byte anchor array; subscript sizing from corpus max index).
PARAM receivers belong to fix_member_this_form retype (deferred);
LOCAL receivers to site rewrites (deferred).

Usage: [--apply]
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = "--apply" in sys.argv
CEN = ROOT / ".omo/tu_errors_g136.json"
E4C = ROOT / "src/e4/classes"

Q1, Q2 = chr(0x201C), chr(0x201D)
QT = "[" + Q1 + Q2 + chr(34) + "]"

census = json.load(open(CEN, encoding="utf-8"))
pairs = Counter()
for tu, el in census.items():
    for e in el:
        if "error C2039" not in e:
            continue
        m = re.search(QT + r"(__pad_[0-9A-Fa-f]+)" + QT + r": .{0,10}?" + QT +
                      r"(?:gamemd::)?([A-Za-z_]\w*)" + QT, e)
        if m:
            pairs[(m.group(2), m.group(1))] += 1
print("__pad_ (cls,name) pairs:", len(pairs),
      "mentions:", sum(pairs.values()))

# corpus max subscript per (cls, padname): scan e4 cpps for NAME[
sub_max = {}
for p in sorted((ROOT / "src/e4").glob("*.cpp")):
    try:
        txt = p.read_text(encoding="latin-1", errors="replace")
    except OSError:
        continue
    for m in re.finditer(r'->__pad_([0-9A-Fa-f]+)\[(\d+)\]', txt):
        sub_max[int(m.group(1), 16)] = max(
            sub_max.get(int(m.group(1), 16), 0), int(m.group(2)))

MEMBER = re.compile(r'^\s*[\w:\s\*&\[]+\b([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;'
                    r'\s*(?://\s*0x([0-9A-Fa-f]+))?.*\r?\n?$')
stats = Counter()
edits = {}
for (cls, name), cnt in pairs.most_common():
    hp = E4C / ("%s_e4.hpp" % cls)
    if not hp.exists():
        stats['skip-no-hpp'] += cnt
        continue
    off = int(name[6:], 16)
    k = sub_max.get(off, 0)
    with open(hp, "r", encoding="utf-8", errors="replace", newline="") as f:
        lines = f.read().splitlines(keepends=True)
    have = any(MEMBER.match(ln.rstrip("\r\n")) and
               MEMBER.match(ln.rstrip("\r\n")).group(1) == name
               for ln in lines)
    if have:
        stats['skip-already'] += cnt
        continue
    insert_at = None
    for i, ln in enumerate(lines):
        dm = MEMBER.match(ln.rstrip("\r\n"))
        if dm and dm.group(3) and int(dm.group(3), 16) > off:
            insert_at = i
            break
    if insert_at is None:
        stats['skip-no-insert-point'] += cnt
        continue
    arr = '[%d]' % (k + 1) if k else ''
    lines.insert(insert_at,
                 '    unsigned char %s%s;  // 0x%X\n' % (name, arr, off))
    edits[str(hp)] = lines
    stats['supplied'] += cnt

print("stats:", dict(stats.most_common()))
if APPLY:
    for path, lines in edits.items():
        with open(path, "w", encoding="utf-8", newline="") as f:
            f.write("".join(lines))
    print("written:", len(edits), "files")
else:
    print("(dry run)")
