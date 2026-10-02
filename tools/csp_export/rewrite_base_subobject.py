#!/usr/bin/env python3
"""G42.17: base-subobject rewriter (c2/c4, round-3 agent design, asm-verified).

Round-3 research triple-verified the semantics against disassembly:
  - `X->Base + N` in vtable walks: Base renders the vfptr VALUE, N is a
    SLOT index (x4 bytes: 114 -> [edx+1C8h] @0x4b5c7a, 109 -> +1B4h,
    110 -> +1B8h, 29 -> +74h).  Rewriting Base -> vtable1 (the e4 flat
    header's @0 member) keeps the slot arithmetic identical.
  - `X->Base = &vt_X` installations (asm @0x51297b: pure [eax] store):
    -> vtable1.
  - `&X->Base` address-of (asm: lea/retn eax=this): base@0 under single
    inheritance, so &X->Base == X.
Semantic member accesses (this->ObjectClass == -1) are NOT touched.

Usage: [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = "--apply" in sys.argv

BASE_PRIMARY = {'AbstractClass', 'ObjectClass', 'MissionClass', 'RadioClass',
                'TechnoClass', 'FootClass', 'TechnoTypeClass',
                'ObjectTypeClass', 'AbstractTypeClass', 'VectorClass',
                'BaseClass', 'TypeList'}
BASE_ALT = '|'.join(sorted(BASE_PRIMARY))

stats = {'vt-walk': 0, 'vt-assign': 0, 'addr-of': 0, 'qualified': 0}
edits = {}

for p in sorted((ROOT / "src").rglob("*.cpp")):
    s = str(p)
    if "_generated" in s or "raw_decomp" in s:
        continue
    try:
        with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
            lines = f.read().splitlines(keepends=True)
    except OSError:
        continue
    changed = False
    for i, ln in enumerate(lines):
        orig = ln
        # qualified slot form: X->Cls::vtable0 + N -> ::vtable1
        if re.search(r'->(%s)::vtable0' % BASE_ALT, ln):
            ln = re.sub(r'->(%s)::vtable0' % BASE_ALT,
                        r'->\1::vtable1', ln)
            stats['qualified'] += 1
        # address-of: &X->Base -> X  (base@0; receiver token preserved)
        m = re.search(r'&\s*([A-Za-z_]\w*)->(%s)\b' % BASE_ALT, ln)
        if m:
            ln = re.sub(r'&\s*([A-Za-z_]\w*)->(%s)\b' % BASE_ALT,
                        r'\1', ln)
            stats['addr-of'] += 1
        # vt-walk: X->Base + N  ->  X->vtable1 + N (slot semantics kept)
        if re.search(r'->(%s)\s*\+\s*\d+' % BASE_ALT, ln):
            ln = re.sub(r'->(%s)(\s*\+\s*\d+)' % BASE_ALT,
                        r'->vtable1\2', ln)
            stats['vt-walk'] += 1
        # vt installation: X->Base = ... &vt_...
        if re.search(r'->(%s)\s*=\s*[^;]*&\s*vt_' % BASE_ALT, ln):
            ln = re.sub(r'->(%s)(\s*=)' % BASE_ALT, r'->vtable1\2', ln)
            stats['vt-assign'] += 1
        if ln != orig:
            lines[i] = ln
            changed = True
    if changed:
        edits[str(p)] = lines

print("stats:", stats, "| files:", len(edits))
if APPLY:
    for path, lines in edits.items():
        with open(path, "w", encoding="utf-8", newline="") as f:
            f.write("".join(lines))
    print("written:", len(edits), "files")
else:
    print("(dry run)")
