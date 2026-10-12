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
import collections
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
SRC = ROOT / 'src'
E4C = SRC / 'e4' / 'classes'
TREE_FULL = E4C / '_tree_full_e4.hpp'
STUBS = SRC / 'e4' / 'e4_static_stubs.cpp'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

# X4: signature authority resolver (shared module); c-branch stubs must be
# COMPLETE or skipped loudly -- the `(...)` varargs stub path is deleted.
sys.path.insert(0, str(ROOT / 'tools' / 'csp_export' / '_absorbed'
                      / 'step4_bodies'))
from signature_authority import Authority  # noqa: E402

_au = []


def au():
    if not _au:
        _au.append(Authority(ROOT))
    return _au[0]

TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''

# --------------------------------------------------------------- mining
# encoding-agnostic: anchor on ASCII structure only
groups = {}   # (cls, mth) -> count
# C2039: "MethodName": ... gamemd::ClassName ... (method not declared)
for m in re.finditer(
        r'error C2039: ["\u201c](\w+)["\u201d]: .{0,60}?gamemd::(\w+)', TXT):
    groups.setdefault((m.group(2), m.group(1)), 0)
    groups[(m.group(2), m.group(1))] += 1
# C3861: "identifier": not found — bare call. Resolve the class by searching
# the def index for a UNIQUE `Cls::Name` definition (G34: these were skipped
# entirely — 2.3K errors, e.g. ObjectPtr::RegisterForTracking 76x).
mth3861 = collections.Counter()
for m in re.finditer(
        r'error C3861: ["\u201c](\w+)["\u201d]: ', TXT):
    mth3861[m.group(1)] += 1
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

# C3861 resolution: name -> unique defining class (if any)
by_mth = collections.defaultdict(list)
for (cls, mth) in defs:
    by_mth[mth].append(cls)
for name, count in mth3861.items():
    cands = by_mth.get(name) or []
    if len(cands) == 1:
        cls = cands[0]
        groups.setdefault((cls, name), 0)
        groups[(cls, name)] += count

# --------------------------------------------------------------- tree_full parse
tf_txt = TREE_FULL.read_text(encoding='utf-8', errors='replace') \
    if TREE_FULL.exists() else ''
tf_classes = set(re.findall(r'^struct (\w+) \{', tf_txt, re.M))

# --------------------------------------------------------------- apply
added_decls = added_stubs = skipped_stubs = 0
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
        # X4: resolve a COMPLETE prototype from the authority; no def and no
        # signature -> loud skip (Q4 gap), never a `...` stub.
        r = au().resolve(name=mth, prefer_cls=cls)
        if r is None or r.params is None:
            print('  !! [x4] no signature for %s::%s -- stub skipped '
                  '(Q4 gap; see x4 reports)' % (cls, mth))
            skipped_stubs += 1
            continue
        ret = r.ret if r.ret and r.ret != 'unknown' else 'double'
        decl = ('    static %s %s(%s);  // C2039/C3861 resolved %s@%s'
                % (ret, mth, r.params, r.provenance, r.addr or ''))
        cls_adds.setdefault(cls, []).append(decl)
        if ret == 'void':
            stub_adds.append('void %s::%s(%s) {}' % (cls, mth, r.params))
        else:
            stub_adds.append('%s %s::%s(%s) { return 0; }'
                             % (ret, cls, mth, r.params))
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
      f'decls, {added_stubs} stubs ({skipped_stubs} skipped, Q4 gaps; '
      f'tree_full classes: {len(tf_classes)})')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
