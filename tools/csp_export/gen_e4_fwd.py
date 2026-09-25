#!/usr/bin/env python3
"""Regenerate e4/classes/_fwd_e4.hpp (+_fwd_tree_e4.hpp stub).

_fwd_e4.hpp fwd-declares every class name the e4 universe references.
It is included ONLY from e4-universe TUs (e4 cpps / e4_protos.h); tree TUs
never see it (e4_protos was unhooked from the /FI ida_compat force-include,
which is what made broad exclusions necessary back then). Exclusions are
therefore just: C++ builtins, stdint typedefs, and Windows/CRT types that
<windows.h>/<unknwn.h> already define — fwd-declaring those INSIDE namespace
gamemd would shadow the real global-scope types (C2027 on first member use).

_fwd_tree_e4.hpp: intentionally empty legacy stub (kept for the
e4_globals.hpp include line).

Usage: python tools/csp_export/gen_e4_fwd.py [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
E4C = ROOT / 'src' / 'e4' / 'classes'
APPLY = '--apply' in sys.argv

RESERVED = {'int', 'char', 'void', 'float', 'double', 'bool', 'short', 'long',
            'signed', 'unsigned', 'wchar_t', '__int8', '__int16', '__int32',
            '__int64', '__wchar_t', 'size_t',
            'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t',
            'int8_t', 'int16_t', 'int32_t', 'int64_t'}

# Windows/CRT types provided by the includes at the top of the header;
# a namespace-scope `struct X;` would shadow them and explode on member use
WINDOWS_TYPES = {'IN', 'OUT', 'OPTIONAL', 'PURE', 'CALLBACK', 'WINAPIV',
                 'TRUE', 'FALSE', 'NULL', 'MAX_PATH', 'HANDLE',
                 'IUnknown', 'IClassFactory', 'IMalloc', 'ISMalloc',
                 'IStream', 'ISequentialStream', 'IPersist', 'IPersistStream',
                 'IClassFactory2', 'IEnumUnknown', 'IMarshal',
                 'GUID', '_GUID', 'LARGE_INTEGER', 'ULARGE_INTEGER',
                 'VARIANT', 'BSTR', 'va_list', 'FILE', 'HRESULT',
                 'POINT', 'RECT', 'SIZE', 'POINTL', 'RECTL'}


def _decl_ok(n):
    return (not n.startswith('_')
            and n not in RESERVED and n not in WINDOWS_TYPES)


names = set()
for p in sorted(E4C.glob('*_e4.hpp')):
    txt = p.read_text(encoding='utf-8', errors='replace')
    names |= {n for n in
              re.findall(r'^[ \t]*struct\s+([A-Za-z_]\w*)\s*[^;]', txt, re.M)
              if _decl_ok(n)}
    names |= {n for n in re.findall(r'\b([A-Z]\w*)\s*[*&]', txt)
              if _decl_ok(n)}
try:
    mtab = json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                      .read_text(encoding='utf-8'))
except OSError:
    mtab = {}
names |= {n for n in mtab
          if re.match(r'^[A-Za-z_]\w*$', n) and _decl_ok(n)}

# final filter: all-caps = Windows typedefs, never structs
names = {n for n in names if not n.isupper()}

lines = ['// GENERATED fwd declarations for the e4 universe (gen_e4_fwd.py).',
         '// Included ONLY from e4-universe TUs (never via the /FI chain).',
         '#pragma once', '', '#include <windows.h>', '#include <mmsystem.h>',
         '#include <dsound.h>', '#include <ddraw.h>', '#include <unknwn.h>',
         '#include <ios>', '#include <string>', '#include <cstdint>', '',
         'namespace gamemd {', '']
lines += ['struct %s;' % n for n in sorted(names)]
lines += ['', '} // namespace gamemd', '']

lines_t = ['// INTENTIONALLY EMPTY (gen_e4_fwd.py): tree-owned names must',
           '// never be fwd-declared here as structs (C2011/C3431 poisoned 13',
           '// tree TUs, r10/r11). Kept for the e4_globals.hpp include line.',
           '#pragma once', '']

if APPLY:
    (E4C / '_fwd_e4.hpp').write_text('\n'.join(lines), encoding='utf-8')
    (E4C / '_fwd_tree_e4.hpp').write_text('\n'.join(lines_t),
                                          encoding='utf-8')
print(f'fwd: {len(names)} universe (windows/builtin excluded: '
      f'{len(WINDOWS_TYPES | RESERVED)})')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
