#!/usr/bin/env python3
"""G42.8: C2059 precise-regex five-pack (agent-3 research, g131).

Site-level mechanical repairs -- each pattern is single-line, corpus-verified:
  S3  spliced param list inside a vtable cast type:
        (void (**, unsigned int a3, unsigned int a2)(const void *))(...)
      -> (void (**)(const void *))(...)          [drop the spliced segment]
  S2  pseudo-type vtable cast parameter (til template garbage):
        (void (**)(_DynamicVectorClass_PAU_DDSURFACEDESC *))
      -> (void (**)(void *))                      [294 corpus lines]
  S10 register-annotation leakage: `Process@<al>(v5, v6)` -> `Process(v5, v6)`
  S12 numeric UDL member calls: `VtableStub::55CBF0()` -> `::sub_55CBF0(`
  S14 til member-ID leakage: `#375 *` -> `void *`

All edits value-preserving at the syntax level; no census dependency.
Usage: python fix_c2059_regex_pack.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = "--apply" in sys.argv

def _udl_guard(m):
    """Only numeric-looking tokens: >=3 digits (real sub_ addresses like
    55CBF0; hex-only words like Add2/FaceD are real function names)."""
    tok = m.group(1)
    if sum(c.isdigit() for c in tok) >= 3:
        return '::sub_%s(' % tok
    return m.group(0)


PATTERNS = [
    # (name, compiled, replacement)  -- applied left-to-right per line
    ("S3-spliced-params",
     re.compile(r'(\(\*+)\s*,\s*[^()]*?\)\('),
     r'\1)('),
    ("S2-pseudo-type-cast",
     re.compile(r'\(\*\*?\)\(\s*_[A-Za-z0-9_]*(?:PA[UV]|PAP|PBU|PAH)'
                r'[A-Za-z0-9_]*\s*\*\s*\)'),
     '(**)(void *)'),
    ("S10-register-annot",
     re.compile(r'@<[A-Za-z0-9]+>'),
     ''),
    ("S12-udl-numeric-name",
     re.compile(r'::([0-9A-Fa-f]{4,6})\s*\('),
     _udl_guard),
    ("S14-til-member-id",
     re.compile(r'#[0-9]{2,4}\s*\*'),
     'void *'),
]

counts = {name: 0 for name, _p, _r in PATTERNS}
files_touched = {}

for p in sorted((ROOT / "src").rglob("*.cpp")):
    s = str(p)
    if "_generated" in s:
        continue
    try:
        with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
            txt = f.read()
    except OSError:
        continue
    orig = txt
    for name, pat, rep in PATTERNS:
        txt, n = pat.subn(rep, txt)
        if n:
            counts[name] += n
    if txt != orig:
        files_touched[str(p)] = txt

for name, _p, _r in PATTERNS:
    print(f"  {name:24s} {counts[name]}")
print(f"files: {len(files_touched)}  {'(written)' if APPLY else '(DRY)'}")

if APPLY:
    for path, txt in files_touched.items():
        with open(path, "w", encoding="utf-8", errors='replace', newline="") as f:
            f.write(txt)
