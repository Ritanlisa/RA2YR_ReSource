#!/usr/bin/env python3
"""Supply free-function prototypes for C3861 'identifier not found'.

Mines the build log for C3861 names, locates each name's definition line
(`RET name(params)` at file scope) anywhere in src, and emits extern
prototypes into src/e4/e4_protos.h (namespace gamemd), which ida_compat.h
pulls into every TU. Every emitted line (fresh or pre-existing) passes a
malformation validator; unknown class names get struct fwd-decls.

Usage: python tools/csp_export/supply_protos_from_errors.py <log> [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''
NAMES = set(re.findall(r'error C3861: ["\u201c](\w+)["\u201d]', TXT))
NAMES = {n for n in NAMES
         if not n.startswith('_')
         and n not in ('LODWORD', 'HIDWORD', 'SHIWORD', 'SLOBYTE',
                       'SHLOBYTE', 'DATA')}

BASIC = {'int', 'void', 'bool', 'char', 'unsigned', 'signed', 'float',
         'double', 'long', 'short'}


def _clean(line):
    """Validate/normalize one `extern ...;` prototype. None = reject."""
    ln = line.strip()
    while ln.startswith('extern extern '):
        ln = ln[len('extern '):]
    ln = ln.replace('extern static ', 'extern ').replace('extern inline ',
                                                         'extern ')
    if not ln.startswith('extern ') or not ln.endswith(';'):
        return None
    for bad in ('__user', '@<', '__spoils', '__m64', '__declspec',
                'rc_ptr', 'ComPtr<'):
        if bad in ln:
            return None
    body = ln[len('extern '):-1]
    # tree using-alias types (CellStruct/CoordStruct/RGBClass/Point2D) are
    # template aliases the protos header cannot see (their defining headers
    # are tree-owned): degrade to void* — call sites pass addresses, which
    # convert implicitly
    body = re.sub(r'\b(?:CellStruct|CoordStruct|RGBClass|Point2D)\b\s*([*&])',
                  r'void*\1', body)
    # double return type: `T * * int Name(` or `int unsigned Name(`
    head = body.split('(')[0]
    toks = head.split()
    if len(toks) >= 3 and toks[-2] in BASIC:
        return None
    if len(toks) >= 2 and toks[-1] in BASIC | {'*'}:
        return None
    m = re.search(r'\b(\w+)\s*\(', body)
    if not m:
        return None
    return 'extern ' + ' '.join(body.split()) + ';'


# definition index: name -> set("RET name(params)")
defs = {}
DEF = re.compile(
    r'^(?P<ret>[A-Za-z_][\w\s\*<>,:&]*?)\s+'
    r'(?P<name>[A-Za-z_]\w*)\s*\((?P<params>[^;{)]*)\)\s*(?:\{|$)', re.M)
for p in sorted(SRC.rglob('*.cpp')):
    if '_generated' in str(p):
        continue
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    for m in DEF.finditer(txt):
        if '__user' in m.group(0) or '@<' in m.group(0):
            continue
        nm = m.group('name')
        if nm not in NAMES:
            continue
        ret = (' '.join(m.group('ret').split())
               .replace('static ', '').replace('inline ', '')) or 'int'
        params = ' '.join(m.group('params').split()).replace('gamemd::', '')
        cand = _clean('extern %s %s(%s);' % (ret, nm, params))
        if cand:
            defs.setdefault(nm, set()).add(cand)

PROTO_H = SRC / 'e4' / 'e4_protos.h'
raw = set()
if PROTO_H.exists():
    raw = set(re.findall(r'^extern\s+.+;$', PROTO_H.read_text(
        encoding='utf-8', errors='replace'), re.M))

emitted, seen_names, dropped = [], set(), 0

allc = [(_clean(x), x) for x in sorted(raw)]
allc = [(c, x) for c, x in allc if c]
for c, orig in sorted(allc):
    nm = re.search(r'\b(\w+)\s*\(', c).group(1)
    if nm in seen_names:
        dropped += 1
        continue
    seen_names.add(nm)
    emitted.append(c)
for nm in sorted(NAMES):
    for d in sorted(defs.get(nm, ())):
        nm2 = re.search(r'\b(\w+)\s*\(', d).group(1)
        if nm2 in seen_names:
            continue
        seen_names.add(nm2)
        emitted.append(d)

lines = ['// GENERATED free-function prototypes (supply_protos_from_errors).',
         '#pragma once', '', '#include "e4/classes/_fwd_e4.hpp"',
         '#include "e4/classes/_tree_alias_e4.hpp"', '',
         'namespace gamemd {', '']
lines += emitted
lines += ['', '} // namespace gamemd', '']

if APPLY and emitted:
    # fwd-declare class names the protos use that _fwd_e4.hpp lacks
    try:
        _mt = json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                         .read_text(encoding='utf-8'))
    except OSError:
        _mt = {}
    _fwdtxt = (SRC / 'e4' / 'classes' / '_fwd_e4.hpp').read_text(
        encoding='utf-8', errors='replace')
    _known = (set(_mt)
              | set(re.findall(r'struct\s+(\w+)\s*;', _fwdtxt)) | BASIC)
    _need = set()
    for d in emitted:
        for tok in re.findall(r'\b([A-Z]\w*)\b', d):
            if tok not in _known and not tok.isupper():
                _need.add(tok)
    for tok in sorted(_need):
        # G57a1: math.hpp alias names -- yield in bridge TUs that see the
        # core/math.hpp using-aliases (struct X; after a using-alias = C2371)
        if tok in ('CellStruct', 'CoordStruct', 'Point2D', 'RGBClass'):
            lines.insert(6, '#ifndef GAMEMD_E4_MATH_ALIASES  // G57a1')
            lines.insert(7, 'struct %s;' % tok)
            lines.insert(8, '#endif')
        else:
            lines.insert(6, 'struct %s;' % tok)
    PROTO_H.write_text('\n'.join(lines), encoding='utf-8')
    # NOTE: e4_protos.h must NEVER be hooked into ida_compat.h — the /FI
    # forced include would drag e4 universe decls into every tree TU and
    # poison them (C2874 using-decl clashes, C2079 incomplete types, r20
    # 70K-error incident). e4 cpps include e4_protos.h explicitly.
print(f'prototypes: {len(emitted)} kept ({dropped} name-dups dropped; '
      f'{len(NAMES)} C3861 names mined, {len(defs)} located)')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
