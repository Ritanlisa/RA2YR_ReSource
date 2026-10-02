#!/usr/bin/env python3
"""G42.23: a1/a1c mechanical-name member supplier (round-4, agent-2 design).

Mechanical names encode their byte offset in the name itself (asm-verified
by round-3 research):
  m_HEX      -> byte offset (m_10 -> 0x10; IDA_BYTEn(m_X) -> X+n)
  q%03X      -> byte offset (q028 -> 0x28)
  u32_/u16_/u8_N -> offset + type hint
  Cls_field_0xNN  -> offset, prefix = nominal owner
Coverage gate: if the class already has a member at that offset (by the
`// 0xNN` annotation), SUPPLY is skipped (that site belongs to the REWRITE
channel, next round).  This wave: e4-universe classes only (dedicated
Cls_e4.hpp exists); tree/canon routing deferred.

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

# mechanical name forms
FORMS = [
    (re.compile(r'^m_([0-9A-Fa-f]+)$'), 'm', None),
    (re.compile(r'^q([0-9A-Fa-f]{3})$'), 'q', None),
    (re.compile(r'^u(32|16|8)_([0-9A-Fa-f]+)$'), 'u', lambda k: {'32': 'unsigned int', '16': 'unsigned short', '8': 'unsigned char'}[k]),
    (re.compile(r'^([A-Za-z_]\w*)_field_0x([0-9A-Fa-f]+)$'), 'f', None),
]

census = json.load(open(CEN, encoding="utf-8"))
pairs = Counter()
for tu, el in census.items():
    for e in el:
        if "error C2039" not in e:
            continue
        m = re.search(QT + r"(.+?)" + QT + r": .{0,10}?" + QT +
                      r"(?:gamemd::)?([A-Za-z_]\w*)" + QT, e)
        if not m:
            continue
        name, cls = m.group(1), m.group(2)
        for rx, kind, tf in FORMS:
            mm = rx.match(name)
            if mm:
                pairs[(cls, name, kind)] += 1
                break
print("mechanical (cls,name) pairs:", len(pairs),
      "mentions:", sum(pairs.values()))

MEMBER = re.compile(r'^\s*[\w:\s\*&\[]+\b([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;'
                    r'\s*(?://\s*0x([0-9A-Fa-f]+))?.*\r?\n?$')
stats = Counter()
edits = {}
for (cls, name, kind), cnt in pairs.most_common():
    hp = E4C / ("%s_e4.hpp" % cls)
    if not hp.exists():
        stats['skip-no-e4-hpp'] += cnt
        continue
    with open(hp, "r", encoding="utf-8", errors="replace", newline="") as f:
        lines = f.read().splitlines(keepends=True)
    # decode offset + type
    mm = re.match(r'^m_([0-9A-Fa-f]+)$', name) or \
         re.match(r'^q([0-9A-Fa-f]{3})$', name)
    ty = 'unsigned int'
    if mm:
        off = int(mm.group(1), 16)
    else:
        mm2 = re.match(r'^u(32|16|8)_([0-9A-Fa-f]+)$', name)
        if mm2:
            off = int(mm2.group(2), 16)
            ty = {'32': 'unsigned int', '16': 'unsigned short',
                  '8': 'unsigned char'}[mm2.group(1)]
        else:
            mm3 = re.match(r'^([A-Za-z_]\w*)_field_0x([0-9A-Fa-f]+)$', name)
            off = int(mm3.group(2), 16)
    # existing members with offsets
    existing = {}
    have_name = False
    for ln in lines:
        dm = MEMBER.match(ln.rstrip("\r\n"))
        if dm and dm.group(3):
            existing[int(dm.group(3), 16)] = dm.group(1)
            if dm.group(1) == name:
                have_name = True
    if have_name:
        stats['skip-already'] += cnt
        continue
    if any(existing.get(off) for off in (off,)) or \
            any(abs(o - off) < 4 and o != off for o in existing):
        stats['skip-covered'] += cnt
        continue
    # insert at offset-ordered position (first member with 0x > off)
    insert_at = None
    for i, ln in enumerate(lines):
        dm = MEMBER.match(ln.rstrip("\r\n"))
        if dm and dm.group(3) and int(dm.group(3), 16) > off:
            insert_at = i
            break
    if insert_at is None:
        # append before class close
        for i in range(len(lines) - 1, -1, -1):
            if lines[i].rstrip("\r\n") == '};':
                insert_at = i
                break
    lead = '    '
    lines.insert(insert_at, '%s%s %s;  // 0x%X\n' % (lead, ty, name, off))
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
