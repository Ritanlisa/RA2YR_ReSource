#!/usr/bin/env python3
"""G42.26: REWRITE channel -- mechanical names covered by an existing
member at the same offset (supply_mech_members' skip-covered 507).

For each C2039 (name, cls, tu): decode the offset, look up the existing
member name at that offset in Cls_e4.hpp, rewrite `X->name` member
accesses to `X->existing` in THAT TU only.  Subscript forms carry over
(byte-array anchors vs scalar targets get a `(unsigned char*)` safe cast
only when sizes conflict -- conservative default: plain name swap, the
compiler surfaces any type mismatch for the next round).

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
triples = set()
for tu, el in census.items():
    for e in el:
        if "error C2039" not in e:
            continue
        m = re.search(QT + r"(.+?)" + QT + r": .{0,10}?" + QT +
                      r"(?:gamemd::)?([A-Za-z_]\w*)" + QT, e)
        sm = re.match(r"^(.+?)\((\d+)\):", e)
        if not (m and sm):
            continue
        triples.add((m.group(2), m.group(1), sm.group(1)))
print("C2039 (cls,name,tu) triples:", len(triples))

MECH = [re.compile(r'^m_([0-9A-Fa-f]+)$'),
        re.compile(r'^q([0-9A-Fa-f]{3})$'),
        re.compile(r'^u(?:32|16|8)_([0-9A-Fa-f]+)$'),
        re.compile(r'^[A-Za-z_]\w*_field_0x([0-9A-Fa-f]+)$')]
MEMBER = re.compile(r'^\s*[\w:\s\*&\[]+\b([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;'
                    r'\s*(?://\s*0x([0-9A-Fa-f]+))?.*\r?\n?$')

stats = Counter()
edits = {}
for cls, name, tu in sorted(triples):
    off = None
    for rx in MECH:
        mm = rx.match(name)
        if mm:
            off = int(mm.group(1), 16)
            break
    if off is None:
        continue
    hp = E4C / ("%s_e4.hpp" % cls)
    if not hp.exists():
        continue
    existing = None
    for ln in hp.read_text(encoding="utf-8", errors="replace").split("\n"):
        dm = MEMBER.match(ln.rstrip("\r\n"))
        if dm and dm.group(3) and int(dm.group(3), 16) == off \
                and dm.group(1) != name:
            existing = dm.group(1)
            break
    if not existing:
        stats['no-existing'] += 1
        continue
    if "/e4/" not in tu.replace("\\", "/"):
        stats['skip-non-e4'] += 1
        continue
    try:
        with open(tu, "r", encoding="utf-8", errors="replace",
                  newline="") as f:
            lines = f.read().splitlines(keepends=True)
    except OSError:
        continue
    pat = re.compile(r'->%s\b' % re.escape(name))
    k = 0
    for i, ln in enumerate(lines):
        if pat.search(ln):
            lines[i] = pat.sub('->%s' % existing, ln)
            k += 1
    if k:
        edits[tu] = lines
        stats['rewritten-tus'] += 1
        stats['rewritten-lines'] += k

print("stats:", dict(stats.most_common()))
if APPLY:
    for path, lines in edits.items():
        with open(path, "w", encoding="utf-8", newline="") as f:
            f.write("".join(lines))
    print("written:", len(edits), "files")
else:
    print("(dry run)")
