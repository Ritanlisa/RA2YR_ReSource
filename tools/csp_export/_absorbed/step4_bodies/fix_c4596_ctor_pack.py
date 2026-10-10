#!/usr/bin/env python3
"""G42.10: C4596 self-qualified decl strip + {ctor} C2511 cascade surgery.

Part A (agent-6 recipe, -607 errors): round-1's member-supply generator
pasted signals' `Cls::name` whole into class bodies, producing
`unsigned int *ActionQueue:: PushEntry(int a2, int a3);` inside
`struct ActionQueue` -- C4596 x N-includers.  Strip the `Cls::` segment
when it equals the enclosing class.

Part B (agent-3 recipe, -255 errors): 8 ctor classes where decl carries a
generator-filled `void*` first param while the def (truth-side) carries the
real type -- C2511 binds the out-of-class def as static {ctor} -> every
this-> use = C2671.  decl := def's param list verbatim (arity equal 8/8).

Usage: [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = "--apply" in sys.argv
CEN = ROOT / ".omo/tu_errors_g133.json"

CLS_RE = re.compile(r'^\s*(?:class|struct)\s+([A-Za-z_]\w*)')
QUAL_RE = re.compile(r'^(\s*[\w:<>,\s\*&]+\b)([A-Za-z_]\w*)\s*::\s*([A-Za-z_]\w*)\s*\(')

# ---------- Part A: strip self-qualified decls ----------
edits_a = {}
n_a = 0
for p in sorted((ROOT / "src/e4/classes").glob("*_e4.hpp")):
    with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
        lines = f.read().splitlines(keepends=True)
    cur = None
    depth = 0
    cls_depth = None
    changed = False
    for i, ln in enumerate(lines):
        cm = CLS_RE.match(ln)
        if cm and depth >= 1 and cur is None:
            cur = cm.group(1)
            cls_depth = depth
        depth += ln.count('{') - ln.count('}')
        if cur and cls_depth is not None and depth >= cls_depth:
            qm = QUAL_RE.match(ln)
            if qm and qm.group(2) == cur and ';' in ln and '{' not in ln:
                # rebuild: prefix + name + '(' + rest (qm.end() sits after
                # the eaten '(' -- re-append it)
                new = qm.group(1).rstrip() + ' ' + qm.group(3) + '(' + ln[qm.end():]
                # preserve the original leading whitespace exactly
                lead = ln[:len(ln) - len(ln.lstrip())]
                lines[i] = lead + new.lstrip()
                n_a += 1
                changed = True
        if cls_depth is not None and depth < cls_depth:
            cur = None
            cls_depth = None
    if changed:
        edits_a[str(p)] = lines
print(f"A: self-qualified decls stripped: {n_a} in {len(edits_a)} files")

# ---------- Part B: ctor decl := def params ----------
# mine the 8 ctor classes from C2511 “Cls::Cls(...)” messages
cen = json.load(open(CEN, encoding="utf-8", errors='replace'))
ctors = set()
for tu, el in cen.items():
    for e in el:
        m = re.search(r'error C2511: .*?[\u201c"](?:gamemd::)?(\w+)::\1\(', e)
        if m:
            ctors.add(m.group(1))
print("B: ctor classes from C2511:", sorted(ctors))
n_b = 0
edits_b = {}
for cls in sorted(ctors):
    # def: collect all `Cls::Cls(` heads; corpus duplicates of the same
    # body are expected -- accept when param lists normalize equal, else
    # prefer the _e4.cpp head with a // 0xADDR marker above it
    heads = []
    for p in sorted((ROOT / "src").rglob("*.cpp")):
        if "_generated" in str(p) or "raw_decomp" in str(p):
            continue
        try:
            lines = p.read_text(encoding="utf-8", errors="replace").split("\n")
        except OSError:
            continue
        for i, ln in enumerate(lines):
            hm = re.match(r'^\s*(?:[\w:<>,\s\*&]+?\b)?%s::%s\s*\((.*)\)\s*\{?\s*$'
                          % (cls, cls), ln)
            if hm:
                marked = i > 0 and re.match(r'^//\s*0x', lines[i - 1])
                heads.append((hm.group(1).strip(), str(p), marked))
    if not heads:
        print(f"  B skip {cls}: no def head")
        continue
    norm = set(re.sub(r'\s+', ' ', h[0]) for h in heads)
    if len(norm) == 1:
        defhead = heads[0][0]
    else:
        e4m = [h for h in heads if '_e4.cpp' in h[1] and h[2]]
        if len(e4m) == 1:
            defhead = e4m[0][0]
        else:
            print(f"  B skip {cls}: def heads diverge ({len(norm)} variants)")
            continue
    # decl: unique `Cls(` line inside the class hpp
    for p in sorted((ROOT / "src/e4/classes").glob('%s_e4.hpp' % cls)):
        with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
            lines = f.read().splitlines(keepends=True)
        cur = None
        depth = 0
        cls_depth = None
        hits = []
        for i, ln in enumerate(lines):
            cm = CLS_RE.match(ln)
            if cm and depth >= 1 and cur is None and cm.group(1) == cls:
                cls_depth = depth
            depth += ln.count('{') - ln.count('}')
            if cls_depth is not None and depth >= cls_depth:
                dm = re.match(r'^(\s*)%s\s*\(([^;{}]*)\)\s*;\s*(?://.*)?\r?\n?$'
                              % cls, ln)
                if dm:
                    hits.append((i, dm.group(1), dm.group(2)))
            if cls_depth is not None and depth < cls_depth:
                cls_depth = None
        if len(hits) != 1:
            print(f"  B skip {cls}: decl hits {len(hits)} in {p.name}")
            continue
        i, lead, _old = hits[0]
        ann = ''
        am = re.search(r'//.*$', lines[i])
        if am:
            ann = '  ' + am.group(0).rstrip('\r\n')
        lines[i] = '%s%s(%s);%s\n' % (lead, cls, defhead.strip(), ann.rstrip())
        edits_b[str(p)] = lines
        n_b += 1
        print(f"  B {p.name}:{i+1} ctor decl := def params")
print(f"B: ctor decls rewritten: {n_b}")

if not APPLY:
    print("\ndry-run; pass --apply")
    sys.exit(0)
for path, lines in list(edits_a.items()) + list(edits_b.items()):
    if path in edits_a and path in edits_b:
        continue  # same file edited by both -- B wins (applied last below)
for path, lines in edits_a.items():
    with open(path, "w", encoding="utf-8", errors='replace', newline="") as f:
        f.write("".join(lines))
for path, lines in edits_b.items():
    with open(path, "w", encoding="utf-8", errors='replace', newline="") as f:
        f.write("".join(lines))
print("written: A files", len(edits_a), "+ B files", len(edits_b))
