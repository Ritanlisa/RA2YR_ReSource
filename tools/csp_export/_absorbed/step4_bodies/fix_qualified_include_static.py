#!/usr/bin/env python3
"""G42.25: qualified-form carrier-include supply + static flip (P1+P2).

Round-3 agent-1: ~506 of 534 qualified `Cls::Name(...)` C3861 errors have
the method ALREADY declared in the class's e4 header -- the error TU just
doesn't include it.  P1: insert `#include "e4/classes/Cls_e4.hpp"` into
the (e4-universe) error TU.  P2: non-static decls would then hit C2352 on
qualified calls -- flip them to `static RET Name(...);` variadic (Math_e4
precedent), gated: virtual decls and ctors/dtors are NEVER flipped.

Usage: [--apply]
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = "--apply" in sys.argv
CEN = ROOT / ".omo/tu_errors_g136.json"
E4C = ROOT / "src/e4/classes"

census = json.load(open(CEN, encoding="utf-8", errors='replace'))
Q1, Q2 = chr(0x201C), chr(0x201D)
QT = "[" + Q1 + Q2 + chr(34) + "]"

# (cls -> set of TUs) from C3861 whose source line shows Cls::Name(
cls_tus = {}
cls_names = {}
for tu, el in census.items():
    for e in el:
        if "error C3861" not in e:
            continue
        m = re.search(QT + r"(.+?)" + QT + r": 找不到标识符", e)
        sm = re.match(r"^(.+?)\((\d+)\):", e)
        if not (m and sm):
            continue
        name = m.group(1)
        p = sm.group(1)
        try:
            li = int(sm.group(2)) - 1
            lines = open(p, encoding="utf-8", errors="replace").read().split("\n")
        except OSError:
            continue
        if li >= len(lines):
            continue
        cm = re.search(r"\b([A-Za-z_]\w*)::%s\s*\(" % re.escape(name), lines[li])
        if cm:
            cls_tus.setdefault(cm.group(1), set()).add(p)
            cls_names.setdefault(cm.group(1), set()).add(name)

stats = Counter()
inc_edits = {}
flip_edits = {}
for cls, tus in sorted(cls_tus.items()):
    hp = E4C / ("%s_e4.hpp" % cls)
    if not hp.exists():
        stats['skip-no-hpp'] += 1
        continue
    inc = '#include "e4/classes/%s_e4.hpp"' % hp.name
    for tu in tus:
        if "/e4/" not in tu.replace("\\", "/"):
            stats['skip-non-e4-tu'] += 1
            continue
        try:
            with open(tu, "r", encoding="utf-8", errors="replace",
                      newline="") as f:
                lines = f.read().splitlines(keepends=True)
        except OSError:
            continue
        if any(inc in ln for ln in lines[:80]):
            stats['already-included'] += 1
            continue
        at = None
        for i, ln in enumerate(lines[:80]):
            if ln.startswith("#include"):
                at = i + 1
        if at is None:
            stats['tu-no-includes'] += 1
            continue
        lines.insert(at, inc + "\n")
        inc_edits[tu] = lines
        stats['include-added'] += 1
    # P2: static flip for the mined names (virtual/ctor gated)
    with open(hp, "r", encoding="utf-8", errors="replace", newline="") as f:
        hl = f.read().splitlines(keepends=True)
    changed = False
    for name in cls_names[cls]:
        if name == cls or name.startswith("~"):
            continue
        for i, ln in enumerate(hl):
            dm = re.match(r'^(\s*)(?:virtual\s+|inline\s+|explicit\s+)*'
                          r'([\w:<>,\s\*&]+?)\b%s\s*\([^;{}]*\)\s*;'
                          r'\s*(?://.*)?\r?\n?$' % re.escape(name), ln)
            if dm and 'virtual' not in ln and 'static' not in ln:
                ret = dm.group(2).strip()
                ann = ''
                am = re.search(r'//.*$', ln)
                if am:
                    ann = '  ' + am.group(0).rstrip("\r\n")
                hl[i] = '%sstatic %s %s(...);%s\n' % (
                    dm.group(1), ret or 'int', name, ann)
                changed = True
                stats['static-flip'] += 1
                break
    if changed:
        flip_edits[str(hp)] = hl

print("stats:", dict(stats.most_common()))
if APPLY:
    for path, lines in inc_edits.items():
        with open(path, "w", encoding="utf-8", errors='replace', newline="") as f:
            f.write("".join(lines))
    for path, lines in flip_edits.items():
        with open(path, "w", encoding="utf-8", errors='replace', newline="") as f:
            f.write("".join(lines))
    print("written: TUs", len(inc_edits), "+ hpps", len(flip_edits))
else:
    print("(dry run)")
