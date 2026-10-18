#!/usr/bin/env python3
"""X71 wave-2a: infantry.cpp surgical closers (export-verified).

Export InfantryClass.cpp L8103-8131 (anchors 51c70f..51c864) proves the tree
is missing 3 closers in GetFireError:
  1. after `}` closing `if (!v23)` (tree L4492): outer block close `    }`
     (export has `      }` + `    }`; tree only one)
  2. after `goto LABEL_159; /*0x51c824*/` (tree L4504): `      }` closing the
     `HouseClass::IsAllied` body opened at tree L4500
  3. after `return 5; /*0x51c861*/` (tree L4508): `    }` closing the
     `if ( v43 != -1 )` body opened at tree L4498
Anchor-relative depth profile: tree -1/-2/-3 vs export at 51c7ce/51c84c/51c864.

Fail-loud on anchor drift. Idempotent: patterns absent on rerun.
"""
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

P = ROOT / 'src/structure/infantry.cpp'
raw = P.read_bytes()
lines = raw.decode('latin-1').split('\n')
eol = '\r' if any(l.endswith('\r') for l in lines[-20:] if l.strip()) else ''

# (anchor_line_1based, expected_prefix, insert_text)
EDITS = [
    (4492, '      }', '    }'),        # close outer block (export 2nd close)
    (4504, '        goto LABEL_159;', '      }'),
    (4508, '        return 5;', '    }'),
]

# verify anchors before editing (bottom-up to keep indices valid)
for lineno, prefix, _ in reversed(EDITS):
    ln = lines[lineno - 1].rstrip('\r')
    if not ln.startswith(prefix):
        raise SystemExit('FAIL: infantry L%d drifted: %r' % (lineno, ln[:60]))

n = 0
for lineno, prefix, ins in reversed(EDITS):
    lines.insert(lineno, ins + eol)
    n += 1

print('inserts:', n)
if APPLY:
    P.write_bytes('\n'.join(lines).encode('latin-1'))
    print('APPLIED')
else:
    print('DRY RUN (use --apply)')
