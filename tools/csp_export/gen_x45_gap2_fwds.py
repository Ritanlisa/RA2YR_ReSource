#!/usr/bin/env python3
"""X45 subtask C: replace bare forwards in src/_gap2/gap2_global_decls.hpp.

Owns the fwd block emitted by .omo/g22_gap2_declare.py (retired-context
generator whose fwd collector false-positived on PARAMETER NAMES: any
capitalized token in `ret + params` text became a fwd).  Classification
(evidence: anchors/class_to_header.json + includer scan + type-position
audit, see .omo/evidence/optimization/x45/):

  INCLUDE  (1)  IUnknown    -> <unknwn.h>    (Windows COM base)
  BANK     (8)  CampaignClass, LineTrail, AudioController, Coord, rc_ptr_base,
                VectorClass, RandomStruct, String
                -- CampaignClass..rc_ptr_base/String/RandomStruct: sole defining
                header is csp_canon/classes.hpp; including it into this TU
                collides with core/utility_ext.hpp already included here
                (gamemd::HashTable + gamemd::ReferenceCounted defined in BOTH
                -> C2011).  VectorClass: core/vector.hpp def is a TEMPLATE
                (C2955 vs the bare `VectorClass *` member spelling); the
                plain-class def lives only in colliding classes.hpp.
                Fwd kept: all uses are pointer members/params (incomplete type
                is sufficient).
  DELETE  (10)  Block, Destination, ExceptionInfo, FileName, Source, Src,
                String1  = g22 false positives (tokens are parameter names
                like `char* Destination`), plus ILocomotion,
                DynamicVectorClass_uint, exception = stale (0 uses in this
                header and in the single includer TU gap2_global_defs.cpp).

Include-safety: gap2_global_decls.hpp has exactly ONE includer
(gap2_global_defs.cpp); the deleted tokens have 0 type-position uses there
(String/RandomStruct audited = load-bearing, hence banked not deleted).
Idempotent via the generated block marker.  Byte-safe I/O.

Usage: python gen_x45_gap2_fwds.py [--apply]
Ledger: .omo/evidence/optimization/x45/fwd_replacement_ledger.json
"""
import json
import sys
from pathlib import Path

APPLY = "--apply" in sys.argv
ROOT = Path(__file__).resolve().parents[2]
HDR = ROOT / 'src' / '_gap2' / 'gap2_global_decls.hpp'
LEDGER = ROOT / '.omo' / 'evidence' / 'optimization' / 'x45' / 'fwd_replacement_ledger.json'

BANK_BLOCKER = ('csp_canon/classes.hpp sole def; include collides with '
                'core/utility_ext.hpp (gamemd::HashTable + gamemd::ReferenceCounted '
                'C2011); pointer use complete with fwd')

# --- block 1 (X25 block) ---------------------------------------------------
B1_OLD = """// X25: forward declarations for X10-supplied member pointer types
class CampaignClass;
class LineTrail;
class AudioController;
class Coord;
class rc_ptr_base;
class VectorClass;
"""
B1_NEW = """// X45: fwd block owned by tools/csp_export/gen_x45_gap2_fwds.py (was: X25 bare fwds)
// BANK rationale: sole defining header = csp_canon/classes.hpp; including it here
// collides with core/utility_ext.hpp (gamemd::HashTable + gamemd::ReferenceCounted
// defined in both -> C2011).  All banked uses are pointer-form (incomplete type ok).
class CampaignClass;    // x45 BANK: classes.hpp:8555
class LineTrail;        // x45 BANK: classes.hpp:30821
class AudioController;  // x45 BANK: classes.hpp:7038
class Coord;            // x45 BANK: classes.hpp:9584
class rc_ptr_base;      // x45 BANK: classes.hpp:49078
class VectorClass;      // x45 BANK: core/vector.hpp def is template<class T> (C2955 on
                        //   bare `VectorClass *` member use); plain-class def only in
                        //   colliding classes.hpp:44541 -- same blocker as above
"""

# --- block 2 (struct fwds after the ra2 ObjectClass bridge) ----------------
B2_OLD = """struct RandomStruct;
struct ILocomotion;
struct DynamicVectorClass_uint;
namespace ra2 { namespace game { class ObjectClass; } }
struct Block;
struct Destination;
struct ExceptionInfo;
struct FileName;
struct IUnknown;
struct Source;
struct Src;
struct String;
struct String1;
struct exception;
"""
B2_NEW = """// x45 BANK: sole defining header = csp_canon/classes.hpp (C2011 blocker, see block 1)
struct RandomStruct;  // x45 BANK: classes.hpp:36893 (load-bearing: 1 ptr use in gap2_global_defs.cpp)
#include <unknwn.h>  // x45: IUnknown <- Windows COM base (was bare fwd)
namespace ra2 { namespace game { class ObjectClass; } }
struct String;  // x45 BANK: classes.hpp:39682 (load-bearing: 49 ptr uses in gap2_global_defs.cpp)
// x45 DELETE: ILocomotion/DynamicVectorClass_uint/exception (stale, 0 uses);
//   Block/Destination/ExceptionInfo/FileName/Source/Src/String1 (g22 emitter
//   false positives -- parameter names, not types).  Evidence: fwd_replacement_ledger.json
"""


def _eol(raw):
    return '\r\n' if '\r\n' in raw else '\n'


def main():
    raw = HDR.read_bytes().decode('latin-1')
    eol = _eol(raw)
    ops = []
    if 'x45 BANK:' in raw:
        print('[x45-fwds] already applied (marker present) -- 0 writes')
        return
    for old, new, tag in [(B1_OLD, B1_NEW, 'x25-block'), (B2_OLD, B2_NEW, 'struct-block')]:
        old_e = old.replace('\n', eol)
        new_e = new.replace('\n', eol)
        n = raw.count(old_e)
        if n != 1:
            print(f'!! [x45-fwds] {tag}: expected 1x anchor, found {n} -- fail-loud, no write')
            return
        ops.append((tag, old_e, new_e))
    if not APPLY:
        for tag, old, new in ops:
            print(f'[x45-fwds-dry] {tag}: would rewrite ({len(old.splitlines())} -> '
                  f'{len(new.splitlines())} lines)')
        print('[x45-fwds-dry] 2 blocks; use --apply')
        return
    for tag, old_e, new_e in ops:
        raw = raw.replace(old_e, new_e)
        print(f'[x45-fwds] {tag}: rewritten')
    HDR.write_bytes(raw.encode('latin-1'))
    LEDGER.parent.mkdir(parents=True, exist_ok=True)
    LEDGER.write_text(json.dumps({
        'applied': True,
        'include': ['<unknwn.h>'],
        'banked': ['CampaignClass', 'LineTrail', 'AudioController', 'Coord',
                   'rc_ptr_base', 'VectorClass', 'RandomStruct', 'String'],
        'bank_blocker': BANK_BLOCKER,
        'vectorclass_bank_reason': 'core/vector.hpp def is template<class T>; bare '
                                   '`VectorClass *` member use -> C2955 (build 1 evidence)',
        'deleted': ['ILocomotion', 'DynamicVectorClass_uint', 'exception',
                    'Block', 'Destination', 'ExceptionInfo', 'FileName',
                    'Source', 'Src', 'String1'],
        'anchor': 'anchors/class_to_header.json',
    }, indent=1), encoding='utf-8')
    print('[x45-fwds] ledger written')


if __name__ == '__main__':
    main()
