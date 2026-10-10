#!/usr/bin/env python3
"""Plateau-phase comprehensive fixer: targets the remaining ~30K errors
after the mechanical battery is exhausted.

Families:
  A) C2039/C3861: method not declared on e4 class header → add declaration
     (from def line or static stub) to ANY e4 class header, not just _tree_full
  B) C2562: void function returning value → change ret type to int
  C) C2065 stru_/dbl_/off_ labels → ida_globals (run gen_ida_globals)
  D) C2065 a1-a5 ghost params → fix_ghost_params (already run, verify coverage)
  E) C2660 arg-count → def-aligned decl (align_tree_decls --force covers some)

Usage: python tools/csp_export/fix_plateau.py <log> [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
SRC = ROOT / 'src'
E4 = SRC / 'e4'
E4C = E4 / 'classes'
STUBS = E4 / 'e4_static_stubs.cpp'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''
mtab = json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                  .read_text(encoding='utf-8', errors='replace'))

# ================================================================
# A) C2039/C3861: add method declarations to e4 class headers
# ================================================================
method_groups = {}   # (cls, mth) -> count

# C2039: "MethodName": ... gamemd::ClassName ...
for m in re.finditer(
        r'error C2039: ["\u201c](\w+)["\u201d]: .{0,60}?gamemd::(\w+)', TXT):
    method_groups.setdefault((m.group(2), m.group(1)), 0)
    method_groups[(m.group(2), m.group(1))] += 1

# C3861 bare names — need context to find the class, skip (supply_protos)
# C2660: gamemd::Cls::Mth( — wrong arg count, needs decl alignment
for m in re.finditer(
        r'error C2660: .{0,100}?gamemd::(\w+)::(\w+)\s*\(', TXT):
    method_groups.setdefault((m.group(1), m.group(2)), 0)
    method_groups[(m.group(1), m.group(2))] += 1

# C2562: void fn returning value — change ret type
void_ret = {}   # (cls, mth) -> True
for m in re.finditer(
        r'error C2562: .{0,100}?gamemd::(\w+)::(\w+)', TXT):
    void_ret[(m.group(1), m.group(2))] = True

# build def index from e4 cpps
DEF = re.compile(
    r'^[ \t]*(?P<ret>[A-Za-z_][\w\s\*<>,:&]*?)\s+'
    r'(?P<cls>[A-Za-z_]\w*)::(?P<mth>~?[A-Za-z_]\w*)\s*'
    r'\((?P<params>[^;{]*)\)\s*(?:\{|$)', re.M)
kw = {'return', 'else', 'case', 'goto', 'if', 'while', 'switch', 'for'}
defs = {}
for p in sorted(E4.glob('*.cpp')):
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    for m in DEF.finditer(txt):
        cls, mth = m.group('cls'), m.group('mth')
        key = (cls, mth)
        if key in method_groups or key in void_ret:
            ret = ' '.join(m.group('ret').split()).replace('static ', '')
            params = ' '.join(m.group('params').split()).replace('gamemd::', '')
            if not ret or ret in kw:
                ret = 'int'
            defs[key] = (ret, params)

# ================================================================
# apply to e4 headers: add method declarations
# ================================================================
n_decl = n_void_fix = n_hdr = 0
hdr_fixes = {}   # path -> list of (cls, decl_lines)
void_fixes = {}  # path -> list of (old_ln, new_ln)

# C2562: void fn returning value — change def ret type from void to int
for (cls, mth), _ in void_ret.items():
    if (cls, mth) not in defs:
        continue
    ret, params = defs[(cls, mth)]
    if ret != 'void':
        continue
    # find and change the def ret type
    pat = re.compile(
        r'void\s+(' + re.escape(cls) + r'::' + re.escape(mth) + r')\s*\(',
        re.M)
    for p in sorted(E4.glob('*.cpp')):
        try:
            txt = p.read_text(encoding='latin-1', errors='replace')
        except OSError:
            continue
        txt2 = pat.sub(r'int \1', txt)
        if txt2 != txt:
            void_fixes.setdefault(p, []).append((cls, mth))

for p, items in void_fixes.items():
    n_hdr += 1
    if APPLY:
        txt = p.read_text(encoding='latin-1', errors='replace')
        for (cls, mth) in items:
            txt = re.sub(
                r'(void\s+)(' + re.escape(cls) + r'::' + re.escape(mth) + r'\s*\()',
                r'int \2', txt)
        p.write_bytes(txt.encode('latin-1', errors='replace'))
        n_void_fix += len(items)

# add method declarations to e4 class headers
for (cls, mth), count in sorted(method_groups.items()):
    hp = E4C / ('%s_e4.hpp' % cls)
    if not hp.exists():
        continue
    txt = hp.read_text(encoding='utf-8', errors='replace')
    # already declared?
    if re.search(r'\b%s\s*\(' % re.escape(mth), txt):
        continue
    if (cls, mth) in defs:
        ret, params = defs[(cls, mth)]
        if not re.match(r'^[A-Za-z_][\w\s\*<>,:&]*$', ret):
            ret = 'int'
        decl = '    %s %s(%s);  // plateau: def-aligned C2039/C2660' % (ret, mth, params)
    else:
        decl = '    static double %s(...);  // plateau: C2039/C3861 stub' % mth
    anchor = txt.rfind('};')
    if anchor < 0:
        continue
    txt = txt[:anchor] + decl + '\n' + txt[anchor:]
    hdr_fixes.setdefault(hp, []).append(decl)
    n_decl += 1

if APPLY:
    for hp, decls in hdr_fixes.items():
        txt = hp.read_text(encoding='utf-8', errors='replace')
        anchor = txt.rfind('};')
        if anchor >= 0:
            txt = txt[:anchor] + '\n'.join(d for d in decls) + '\n' + txt[anchor:]
            hp.write_text(txt, encoding='utf-8', errors='replace')

# ================================================================
# summary
# ================================================================
print(f'plateau fixer: {len(method_groups)} C2039/C2660 groups, '
      f'{len(void_ret)} C2562 groups')
print(f'  method decls added: {n_decl} in {len(hdr_fixes)} headers')
print(f'  void->int ret fixes: {n_void_fix}')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
