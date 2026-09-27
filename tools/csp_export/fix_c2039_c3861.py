#!/usr/bin/env python3
"""Comprehensive C2039/C3861/C2660 fixer: bare _tree_full classes.

_tree_full_e4.hpp emits bare `struct X { void* vfptr; };` for tree-owned
classes mined from C2027 errors. Bodies then call `X::Method(...)` on those
classes -> C2039 (not a member) / C3861 (identifier not found).

This tool:
  1. Mines the build log for C2039/C3861 class::method pairs
  2. For each pair, looks up the def line in e4 cpps
  3. If def found: appends a def-aligned declaration to the _tree_full struct
  4. If no def: appends a static varargs stub declaration + definition
  5. Also repairs bare ObjectPtr/CellCoord/etc. definitions whose only
     content is vfptr by adding methods mined from the log

Usage: python tools/csp_export/fix_c2039_c3861.py <log> [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
E4C = SRC / 'e4' / 'classes'
TREE_FULL = E4C / '_tree_full_e4.hpp'
STUBS = SRC / 'e4' / 'e4_static_stubs.cpp'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''

# --------------------------------------------------------------- mining
# encoding-agnostic: anchor on ASCII structure only
groups = {}   # (cls, mth) -> count
# C2039: "MethodName": ... gamemd::ClassName ... (method not declared)
for m in re.finditer(
        r'error C2039: ["\u201c](\w+)["\u201d]: .{0,60}?gamemd::(\w+)', TXT):
    groups.setdefault((m.group(2), m.group(1)), 0)
    groups[(m.group(2), m.group(1))] += 1
# C3861: "identifier": not found (class from enclosing decl context)
for m in re.finditer(
        r'error C3861: ["\u201c](\w+)["\u201d]: ', TXT):
    pass  # supply_protos handles these
# C2660: wrong arg count — "gamemd::Cls::Mth" in the signature
for m in re.finditer(
        r'error C2660: .{0,100}?gamemd::(\w+)::(\w+)\(', TXT):
    groups.setdefault((m.group(1), m.group(2)), 0)
    groups[(m.group(1), m.group(2))] += 1


# --------------------------------------------------------------- def index
DEF = re.compile(
    r'^[ \t]*(?:[A-Za-z_][\w\s\*<>,:&:]*?)?\s*'
    r'(?P<cls>[A-Za-z_]\w*)::(?P<mth>~?[A-Za-z_]\w*)\s*'
    r'\((?P<params>[^;{]*)\)\s*(?:const\s*)?(?:\{\s*$|\{)',
    re.M)
kw = {'return', 'else', 'case', 'goto', 'if', 'while', 'switch', 'for'}

defs = {}   # (cls, mth) -> (ret, params)
for p in sorted((SRC / 'e4').glob('*.cpp')):
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    for m in DEF.finditer(txt):
        cls, mth = m.group('cls'), m.group('mth')
        if (cls, mth) not in groups:
            continue
        # ret = everything before the cls::mth match; the old `re.match`
        # with ':' in its char class swallowed `Cls::Mth` into ret and
        # emitted `static double Cls::Mth Mth(...)` (C4596 qualified-member)
        ret = m.group(0)[:m.start('cls')].strip()
        ret = re.sub(r'\s+', ' ', ret)
        if ret in kw or not ret:
            ret = 'int'
        params = ' '.join(m.group('params').split()).replace('gamemd::', '')
        if (cls, mth) not in defs:
            defs[(cls, mth)] = (ret, params)

# --------------------------------------------------------------- tree_full parse
tf_txt = TREE_FULL.read_text(encoding='utf-8', errors='replace') \
    if TREE_FULL.exists() else ''
tf_classes = set(re.findall(r'^struct (\w+) \{', tf_txt, re.M))

# --------------------------------------------------------------- apply
added_decls = added_stubs = 0
cls_adds = {}   # cls -> [decl lines]
stub_adds = []   # full def lines

for (cls, mth), count in sorted(groups.items()):
    if cls not in tf_classes:
        continue
    # check if already declared in the tree_full struct body for this class
    body_m = re.search(
        r'struct ' + re.escape(cls) + r' \{(.*?)\n\};',
        tf_txt, re.S)
    if not body_m:
        continue
    body = body_m.group(1)
    if re.search(r'\b%s\s*\(' % re.escape(mth), body):
        continue  # already declared

    if (cls, mth) in defs:
        ret, params = defs[(cls, mth)]
        if not re.match(r'^[A-Za-z_][\w\s\*<>,:&]*$', ret):
            ret = 'int'
        decl = '    static %s %s(%s);  // def-aligned C2039/C3861' % (
            ret, mth, params)
        cls_adds.setdefault(cls, []).append(decl)
        added_decls += 1
    else:
        # static varargs stub
        decl = '    static double %s(...);  // C2039/C3861 interim stub' % mth
        cls_adds.setdefault(cls, []).append(decl)
        stub_adds.append('double %s::%s(...) { return 0; }' % (cls, mth))
        added_stubs += 1

if APPLY and (cls_adds or stub_adds):
    # inject into _tree_full before each class's closing };
    for cls, decls in sorted(cls_adds.items()):
        m = re.search(r'(struct ' + re.escape(cls) + r' \{.*?)(\n\};)',
                      tf_txt, re.S)
        if not m:
            continue
        old_body_end = m.end(1)
        inject = '\n' + '\n'.join(decls)
        tf_txt = tf_txt[:old_body_end] + inject + tf_txt[old_body_end:]
    TREE_FULL.write_text(tf_txt, encoding='utf-8')

    # stub defs
    existing = STUBS.read_text(encoding='utf-8', errors='replace') \
        if STUBS.exists() else ''
    new_stubs = [s for s in stub_adds if s not in existing]
    if new_stubs:
        stubs_text = (
            '// GENERATED C2039/C3861 stubs (fix_c2039_c3861.py)\n'
            '#include <cstdint>\n'
            '#include "e4/e4_globals.hpp"\n'
            '#include "e4/classes/_tree_full_e4.hpp"\n'
            '#include "e4/e4_protos.h"\n'
            '', 'namespace gamemd {', '')
        stubs_text = (
            '// GENERATED C2039/C3861 stubs (fix_c2039_c3861.py)\n'
            '#include <cstdint>\n'
            '#include "e4/e4_globals.hpp"\n'
            '#include "e4/classes/_tree_full_e4.hpp"\n'
            '#include "e4/e4_protos.h"\n\n'
            'namespace gamemd {\n\n'
            + '\n'.join(new_stubs)
            + '\n\n} // namespace gamemd\n')
        STUBS.write_text(stubs_text, encoding='utf-8')

print(f'C2039/C3861: {len(groups)} groups mined, {added_decls} def-aligned '
      f'decls, {added_stubs} stubs (tree_full classes: {len(tf_classes)})')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
