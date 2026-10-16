#!/usr/bin/env python3
"""X49 P2a -- gap2_global_decls.hpp banked-fwd replacement (x45 successor).

The 8 x45 BANKED fwds re-adjudicated against the gap2 TU include closure
(x49_closure.py, 49 headers) + e4 flat carriers (class_to_header.json canon):

  INCLUDE (3)  CampaignClass <- e4/classes/CampaignClass_e4.hpp (sole full def
               reachable without the classes.hpp collision family; methods
               LoadFromINI present; Constructor_1 still missing = member-decl
               (b)-pool debt, documented)
               Coord       <- e4/classes/Coord_e4.hpp (already in cpp closure;
               decls-level self-containment) + To_Screen/Subtract present
               String      <- e4/classes/String_e4.hpp (value use `String v17`
               + 103 `String::` qualified calls; NotEquals missing = same debt)
               Each include is paired with a GLOBAL-scope using-declaration
               (the corpus's gap2 vocabulary uses unqualified names at global
               scope; mirrored form of the established
               `namespace gamemd { using ::ra2::game::X; }` bridge).
  UNLOCKED (1) AudioController -- fwd kept; completeness already flows from
               object.hpp:37 (GAMEMD_E4_OWNS-guarded def with `int Init()`
               gap2 stub decl) via the existing TU closure.  No edit needed.
  KEEP-BANK (4) LineTrail (sole full def = csp_canon/classes.hpp:30821; 1
               pointer use -> fwd sufficient), rc_ptr_base (pointer uses),
               RandomStruct (1 pointer param), VectorClass (template-vs-bare
               dual vocabulary: core/vector.hpp template vs classes.hpp flat;
               coexistence = C2955 x30 measured in x45 build 1 -- BANKED per
               undecidable-pair rule).

Generator-owned, idempotent (marker scan), byte-preserving I/O.
Usage: python gen_x49_gap2_fwds.py [--apply]
"""
import json
import re
import sys
from pathlib import Path

APPLY = "--apply" in sys.argv
ROOT = Path(__file__).resolve().parents[2]
HDR = ROOT / 'src' / '_gap2' / 'gap2_global_decls.hpp'
LEDGER = ROOT / '.omo' / 'evidence' / 'optimization' / 'x49' / 'x49_fwds_ledger.json'

B1_OLD = """// X45: fwd block owned by tools/csp_export/gen_x45_gap2_fwds.py (was: X25 bare fwds)
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
B1_NEW = """// x49: fwd block owned by tools/csp_export/gen_x49_gap2_fwds.py (x45 successor;
// was: X25 bare fwds -> x45 bank).  x49 adjudication = x49_closure.json (gap2 TU
// include closure, 49 headers) + e4 flat carriers:
//   INCLUDE  CampaignClass/Coord/String <- e4 carrier + global using-bridge
//   KEEP    AudioController (completeness flows from object.hpp:37 via TU
//           closure; decls-level pointer members still need the fwd name)
//   BANK    LineTrail/rc_ptr_base/RandomStruct (pointer-form uses only; sole
//           full def = classes.hpp, which cannot enter this TU: its flat defs
//           collide with this TU's ~30 e4 carriers), VectorClass (template-vs-
//           bare dual vocabulary, C2955 x30 measured in x45 build 1).
class LineTrail;        // x49 BANK (pointer uses only)
class AudioController;  // x49: fwd kept; complete def via object.hpp in TU closure
class rc_ptr_base;      // x49 BANK (pointer uses only)
class VectorClass;      // x49 BANK: core/vector.hpp template vs classes.hpp flat
                        //   (C2955 dual vocabulary, x45 build-1 evidence)
"""
B2_OLD = """// x45 BANK: sole defining header = csp_canon/classes.hpp (C2011 blocker, see block 1)
struct RandomStruct;  // x45 BANK: classes.hpp:36893 (load-bearing: 1 ptr use in gap2_global_defs.cpp)
#include <unknwn.h>  // x45: IUnknown <- Windows COM base (was bare fwd)
namespace ra2 { namespace game { class ObjectClass; } }
struct String;  // x45 BANK: classes.hpp:39682 (load-bearing: 49 ptr uses in gap2_global_defs.cpp)
// x45 DELETE: ILocomotion/DynamicVectorClass_uint/exception (stale, 0 uses);
//   Block/Destination/ExceptionInfo/FileName/Source/Src/String1 (g22 emitter
//   false positives -- parameter names, not types).  Evidence: fwd_replacement_ledger.json
"""
B2_NEW = """// x49 BANK: RandomStruct pointer-form use only (sole full def classes.hpp)
#include <unknwn.h>  // x45: IUnknown <- Windows COM base (was bare fwd)
namespace ra2 { namespace game { class ObjectClass; } }
// x49: String fwd replaced by e4 carrier include + global using-bridge (block 1)
// x45 DELETE: ILocomotion/DynamicVectorClass_uint/exception (stale, 0 uses);
//   Block/Destination/ExceptionInfo/FileName/Source/Src/String1 (g22 emitter
//   false positives -- parameter names, not types).  Evidence: fwd_replacement_ledger.json
"""
INCLUDES_NEW = """// x49: e4 flat-carrier supply for the x45-banked types (gen_x49_gap2_fwds.py).
// Carriers are the canonical reachable defs for this TU (classes.hpp cannot
// enter: its flat defs collide with this TU's e4 carriers).  Global-scope
// using-bridges service the corpus's unqualified global-scope vocabulary.
#include "e4/classes/CampaignClass_e4.hpp"  // x49: was fwd (classes.hpp:8555 sole def)
#include "e4/classes/Coord_e4.hpp"         // x49: was fwd (classes.hpp:9584 sole def)
#include "e4/classes/String_e4.hpp"        // x49: was fwd (classes.hpp:39682 sole def)
using gamemd::CampaignClass;  // x49: global-scope qualified-call vocabulary
using gamemd::Coord;          // x49: Coord::To_Screen/Subtract family
using gamemd::String;         // x49: String:: family + `String v` value uses

"""

# Bridge lines whose gamemd::NAME is now natively supplied by the e4 carrier
# chain (_fwd_e4.hpp): the `using ::ra2::game::NAME` alias is a SECOND
# declaration of the same name -> C2874 (measured: +14 fresh rows, build 2).
REDUNDANT_BRIDGES = [
    'ProgressScreenClass', 'AbstractClass', 'BlowStraw', 'DynamicVector',
    'FootClass', 'RadarClass', 'ScoreScreen', 'ScriptClass',
    'Selection_WorldDominationTour', 'SessionClass', 'Straw', 'Tactical',
    'WDTState', 'BuildingTypeClass',
]


def redundant_bridge_rewrites(raw_lines):
    ops = []
    for i, ln in enumerate(raw_lines):
        m = re.match(r'^(namespace gamemd \{ using ::ra2::game::(\w+); \})(.*)$', ln)
        if m and m.group(2) in REDUNDANT_BRIDGES:
            ops.append((i, m.group(2)))
    return ops


def _eol(raw):
    return '\r\n' if '\r\n' in raw else '\n'


def main():
    raw = HDR.read_bytes().decode('latin-1')
    eol = _eol(raw)
    ops = []
    blocks_applied = 'x49: fwd block owned by tools/csp_export/gen_x49_gap2_fwds.py' in raw
    if not blocks_applied:
        for old, new, tag in [(B1_OLD, B1_NEW, 'x45-block1'),
                              (B2_OLD, B2_NEW, 'x45-block2'),
                              ("""#include "core/utility_ext.hpp"  // G42.55 closure (ReferenceCounted)
""",
                               """#include "core/utility_ext.hpp"  // G42.55 closure (ReferenceCounted)
""" + INCLUDES_NEW, 'includes')]:
            old_e = old.replace('\n', eol)
            n = raw.count(old_e)
            if n != 1:
                print(f'!! [x49-fwds] {tag}: expected 1x anchor, found {n} -- fail-loud, no write')
                return
            ops.append((tag, old_e, new.replace('\n', eol)))
    # redundant bridge lines (applied on the post-rewrite text, idempotent:
    # already-rewritten lines no longer match the bridge pattern)
    lines = raw.split(eol)
    bridges = redundant_bridge_rewrites(lines)
    if not APPLY:
        if blocks_applied:
            print('[x49-fwds-dry] blocks already applied (marker present)')
        else:
            for tag, old, new in ops:
                print(f'[x49-fwds-dry] {tag}: would rewrite ({len(old.splitlines())} -> '
                      f'{len(new.splitlines())} lines)')
        print(f'[x49-fwds-dry] redundant bridges to retire: {len(bridges)} '
              f'{[b[1] for b in bridges]}')
        print('[x49-fwds-dry] use --apply')
        return
    for tag, old_e, new_e in ops:
        raw = raw.replace(old_e, new_e)
        print(f'[x49-fwds] {tag}: rewritten')
    lines = raw.split(eol)
    n_retired = 0
    for i, nm in bridges:
        lines[i] = (f'// x49: bridge retired -- gamemd::{nm} natively supplied by the '
                    f'e4 carrier chain (was: {lines[i].strip()})')
        n_retired += 1
    HDR.write_bytes(eol.join(lines).encode('latin-1'))
    print(f'[x49-fwds] blocks_applied={blocks_applied} bridges retired: {n_retired}')
    LEDGER.parent.mkdir(parents=True, exist_ok=True)
    LEDGER.write_text(json.dumps({
        'applied': True,
        'includes': ['e4/classes/CampaignClass_e4.hpp',
                     'e4/classes/Coord_e4.hpp',
                     'e4/classes/String_e4.hpp'],
        'using_bridges': ['gamemd::CampaignClass', 'gamemd::Coord', 'gamemd::String'],
        'kept_fwds': ['LineTrail', 'AudioController', 'rc_ptr_base',
                      'VectorClass', 'RandomStruct'],
        'unlocked_by_closure': {'AudioController': 'object.hpp:37 (GAMEMD_E4_OWNS guard)'},
        'banked_reasons': {
            'VectorClass': 'core/vector.hpp template vs classes.hpp flat; '
                           'coexistence = C2955 x30 (x45 build 1); undecidable pair',
            'LineTrail/rc_ptr_base/RandomStruct': 'pointer-form uses only; sole full '
                                                  'def = classes.hpp (cannot enter TU: '
                                                  'flat-vs-e4-carrier collision family)',
        },
        'member_debt_noted': ['String::NotEquals missing in String_e4.hpp',
                              'CampaignClass::Constructor_1 missing in CampaignClass_e4.hpp'],
        'anchor': 'x49_closure.json + anchors/class_to_header.json',
    }, indent=1), encoding='utf-8')
    print('[x49-fwds] ledger written')


if __name__ == '__main__':
    main()
