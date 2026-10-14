#!/usr/bin/env python3
"""decl_authority.py — X10 single-declaration-authority enforcement.

Purpose (plan X10): every class gets ONE authoritative definition per
compilation universe (tree / e4); every other occurrence becomes a forward
declaration or is removed; leaking duplicate definitions and redundant
"supply" includes are eliminated. Generator-side companion fixes live in
supply_e4_class_decls.py + gen_tree_full_e4.py.

Subcommands
  report     census + authority index + same-TU conflicts (JSON to .omo/x10)
  apply      apply the explicit resolution rules (idempotent; --dry to preview)
  verify     re-run the macro-accurate same-TU conflict check
  supply     complete authority member sets from the member tables driven by
             the `this->X` reachability census (see --help)

The resolution rules are DATA (RULES below), each row explicit and justified;
`apply` performs them through the shared scanner (decl spans are nesting- and
comment-aware). No new `fix_*` top-level scripts; this is the X10 authority
mechanism itself.
"""
import argparse
import json
import re
import sys
from collections import defaultdict
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
from _decl_scan import (  # noqa: E402
    PP, def_span, defs_in_text, member_names, iter_decls, normalize_body)

ROOT = HERE.parents[1]
SRC = ROOT / 'src'
X10 = ROOT / '.omo' / 'x10'

try:
    from _write_retry import robust_write  # noqa: E402
except Exception:  # pragma: no cover
    def robust_write(p, text, tries=5):
        import time
        for k in range(tries):
            try:
                p.write_text(text, encoding='utf-8', newline='')
                return True
            except PermissionError:
                time.sleep(0.5 * (k + 1))
        return False


# ============================================================== resolution rules
# Each row: dict with 'why' (justification) + ops. Ops are explicit text
# surgeries via helpers below. Rule rows are ORDER-SENSITIVE.

RULES = [
    # ---- Tree-internal duplicates -------------------------------------
    {   # noinit_t nested-vs-toplevel is NOT a conflict (different scopes,
        # verified 2026-10-13: type/*.hpp carry per-class nested noinit_t).
        'why': 'noinit_t: per-class nested defs are legal; no action',
        'ops': [],
    },
    {   # IndexBitfield: techno.hpp holds a TEMPLATE (instantiated once at
        # techno.hpp:951); house.hpp holds the plain struct (HouseClass
        # radarVisibleTo). Same name, different entity -> rename the template.
        'why': 'IndexBitfield: template vs plain struct -> rename template',
        'ops': [
            {'op': 'replace_word', 'file': 'object/techno.hpp',
             'old': 'IndexBitfield', 'new': 'IndexBitfieldT'},
        ],
    },
    {   # OwnedTiberiumStruct: house.hpp (amount1..4) vs techno.hpp
        # (Amount1..4) -- same 16-byte POD, both by-value. Move the single
        # authority into fundamentals.hpp (shared vocabulary header; already
        # holds ProgressTimer); both files drop their local def + ensure
        # the include.
        'why': 'OwnedTiberiumStruct: move authority to fundamentals.hpp',
        'ops': [
            {'op': 'del_def', 'file': 'house/house.hpp',
             'class': 'OwnedTiberiumStruct'},
            {'op': 'del_def', 'file': 'object/techno.hpp',
             'class': 'OwnedTiberiumStruct'},
            {'op': 'add_include', 'file': 'house/house.hpp',
             'include': 'fundamentals.hpp'},
            {'op': 'insert_after_def', 'file': 'fundamentals.hpp',
             'class': 'noinit_t',
             'text': (
                 '\nstruct OwnedTiberiumStruct {\n'
                 '    float Amount1;\n    float Amount2;\n'
                 '    float Amount3;\n    float Amount4;\n'
                 '};  // X10: single authority (was house.hpp + techno.hpp '
                 'twins)\n')},
        ],
    },
    {   # TurretControl: techno.hpp flat (uint32_t data[4]) vs
        # techno_type.hpp semantic (Travel/CompressFrames/RecoverFrames/
        # HoldFrames) -- both by-value. Single authority: fundamentals.hpp
        # (semantic form).
        'why': 'TurretControl: move authority to fundamentals.hpp',
        'ops': [
            {'op': 'del_def', 'file': 'object/techno.hpp',
             'class': 'TurretControl'},
            {'op': 'del_def', 'file': 'type/techno_type.hpp',
             'class': 'TurretControl'},
            {'op': 'add_include', 'file': 'type/techno_type.hpp',
             'include': 'fundamentals.hpp'},
            {'op': 'insert_after_def', 'file': 'fundamentals.hpp',
             'class': 'OwnedTiberiumStruct',
             'text': (
                 '\nstruct TurretControl {\n    int Travel;\n'
                 '    int CompressFrames;\n    int RecoverFrames;\n'
                 '    int HoldFrames;\n'
                 '};  // X10: single authority (was techno.hpp + '
                 'techno_type.hpp twins)\n')},
        ],
    },
    {   # INoticeSink/INoticeSource: object/abstract.hpp is the live home
        # (56 includers; abstract.cpp implements AbstractClass::onNotice /
        # notifySinks against it). core/interfaces.hpp's copies are unused
        # (its _Unknown vt names appear nowhere else) -> forward decls.
        'why': 'INoticeSink/INoticeSource: interfaces.hpp keeps fwd only',
        'ops': [
            {'op': 'del_def', 'file': 'core/interfaces.hpp',
             'class': 'INoticeSink'},
            {'op': 'del_def', 'file': 'core/interfaces.hpp',
             'class': 'INoticeSource'},
            {'op': 'insert_before_marker', 'file': 'core/interfaces.hpp',
             'marker': 'class ISwizzle',
             'text': ('class INoticeSink;   // X10: authority = '
                      'object/abstract.hpp\n'
                      'class INoticeSource;  // X10: authority = '
                      'object/abstract.hpp\n')},
        ],
    },
    {   # minimal_carriers (structure/) is an 18-line stopgap carrier whose
        # 6 classes all have full defs in the same TUs (e4 flat headers /
        # core/cellcoord.hpp). Drop the include from its two conflicting
        # consumers; the file itself is left for X12 to rule on.
        'why': 'structure/minimal_carriers.hpp redundant in infantry/unit',
        'ops': [
            {'op': 'del_include', 'file': 'structure/infantry.cpp',
             'include': 'structure/minimal_carriers.hpp'},
            {'op': 'del_include', 'file': 'structure/unit.cpp',
             'include': 'structure/minimal_carriers.hpp'},
        ],
    },
    {   # house/supplied_bodies.cpp: local vocab `struct Rules { static int
        # GetProductionTimeMult(int); }` (line 29, provides the only used
        # symbol) vs e4/classes/Rules_e4.hpp include (line 23) -> drop the
        # e4 include; the local declaration stays.
        'why': 'house/supplied_bodies.cpp: e4 Rules include redundant',
        'ops': [
            {'op': 'del_include', 'file': 'house/supplied_bodies.cpp',
             'include': 'e4/classes/Rules_e4.hpp'},
        ],
    },
    # ---- e4-internal duplicates ---------------------------------------
    {   # _w14_nocarrier_e4.hpp is a legacy mega-carrier; j_Options and
        # TypeList_W4DiskID now have their own e4 headers, and their only
        # users (addr59_e4.cpp / SessionClass_e4.cpp) include both.
        'why': 'w14 carrier: j_Options/TypeList_W4DiskID have own headers',
        'ops': [
            {'op': 'del_def', 'file': 'e4/classes/_w14_nocarrier_e4.hpp',
             'class': 'j_Options'},
            {'op': 'del_def', 'file': 'e4/classes/_w14_nocarrier_e4.hpp',
             'class': 'TypeList_W4DiskID'},
        ],
    },
    {   # e4/minimal_carriers.hpp: three template-instantiation carriers
        # duplicate their own e4 headers. Their users (addr47/addr4E/
        # CaptureManagerClass) include the specific headers -> drop the
        # carrier defs.
        'why': 'e4/minimal_carriers: 3 class twins have own e4 headers',
        'ops': [
            {'op': 'del_def', 'file': 'e4/minimal_carriers.hpp',
             'class': '_VectorClass_PAUControlNode'},
            {'op': 'del_def', 'file': 'e4/minimal_carriers.hpp',
             'class': '_DynamicVectorClass_PAUControlNode'},
            {'op': 'del_def', 'file': 'e4/minimal_carriers.hpp',
             'class': '_VectorClass_PAVParticleClass'},
        ],
    },
    {   # double-suffix generated twins: for a class literally named
        # `Foo_e4`, supply_e4_class_decls created Foo_e4_e4.hpp even though
        # Foo_e4.hpp already defined it. The generated twin is deleted and
        # its include line removed; generator fixed to skip (see
        # supply_e4_class_decls.py).
        'why': 'double-suffix twins (GameMode_e4/Mission_e4/AbstractType_e4)'
               ' deleted; existing headers are the authority',
        'ops': [
            {'op': 'del_file', 'file': 'e4/classes/GameMode_e4_e4.hpp'},
            {'op': 'del_include', 'file': 'e4/GameMode_e4.cpp',
             'include': 'e4/classes/GameMode_e4_e4.hpp'},
            {'op': 'del_file', 'file': 'e4/classes/Mission_e4_e4.hpp'},
            {'op': 'del_include', 'file': 'e4/Mission_e4.cpp',
             'include': 'e4/classes/Mission_e4_e4.hpp'},
            {'op': 'del_file', 'file': 'e4/classes/AbstractType_e4_e4.hpp'},
            {'op': 'del_include', 'file': 'e4/AbstractType_e4.cpp',
             'include': 'e4/classes/AbstractType_e4_e4.hpp'},
        ],
    },
    {   # _e4 (class literally named `_e4`): __e4.hpp (E2 carrier) and
        # _e4_e4.hpp (generated flat) both define it; addr74_e4.cpp includes
        # both. The generated header carries the method declarations the
        # file defines -> it is the authority; __e4.hpp becomes a shim.
        'why': '_e4: _e4_e4.hpp authority; __e4.hpp -> include shim',
        'ops': [
            {'op': 'write_file', 'file': 'e4/classes/__e4.hpp',
             'text': (
                 '// X10: single-authority shim -- the definition of `_e4`\n'
                 '// lives in e4/classes/_e4_e4.hpp (generated flat form;\n'
                 '// carries the method declarations the address bodies\n'
                 '// define). Was an E2 minimal duplicate (C2011 vs the\n'
                 '// generated header in addr74_e4.cpp).\n'
                 '#pragma once\n\n'
                 '#include "e4/classes/_e4_e4.hpp"\n')},
        ],
    },
    {   # RandomMap_e4.cpp locally re-defines _VectorClass_VCell although it
        # includes the class's e4 header.
        'why': 'RandomMap_e4.cpp: local _VectorClass_VCell def duplicates '
               'its e4 header',
        'ops': [
            {'op': 'del_def', 'file': 'e4/RandomMap_e4.cpp',
             'class': '_VectorClass_VCell'},
        ],
    },
    {   # addr47/addr4E include e4/minimal_carriers.hpp three times each
        # (historical dedup attempts); keep the first occurrence.
        'why': 'addr47/addr4E duplicate include dedup',
        'ops': [
            {'op': 'dedup_includes', 'file': 'e4/addr47_e4.cpp'},
            {'op': 'dedup_includes', 'file': 'e4/addr4E_e4.cpp'},
        ],
    },
    # ---- e4-universe ordering guards on tree headers -------------------
    {   # object/object.hpp defines ObjectClass + AudioController; e4 TUs
        # (ObjectClass_e4.hpp shim / _tree_full_e4.hpp) pull object.hpp via
        # misc/audio.hpp and then collide with the e4 flat ObjectClass /
        # AudioController_e4.hpp. Suppress the tree defs ONLY when the e4
        # flat authority is actually present: guard = GAMEMD_E4_OWNS_*,
        # defined by ObjectClass_e4.hpp + _tree_full_e4.hpp (both carry the
        # flat def). GAMEMD_E4_UNIVERSE was too broad: tree TUs that pull
        # e4/e4_globals.hpp (no flat ObjectClass) lost the tree def
        # (object/object.cpp regression found by the reachability sample).
        'why': 'object.hpp ObjectClass/AudioController: e4-owns guards '
               '(marker defined by the flat-def carriers only)',
        'ops': [
            {'op': 'unwrap_def', 'file': 'object/object.hpp',
             'class': 'ObjectClass'},
            {'op': 'unwrap_def', 'file': 'object/object.hpp',
             'class': 'AudioController'},
            {'op': 'wrap_def', 'file': 'object/object.hpp',
             'class': 'ObjectClass', 'guard': 'GAMEMD_E4_OWNS_ObjectClass'},
            {'op': 'wrap_def', 'file': 'object/object.hpp',
             'class': 'AudioController',
             'guard': 'GAMEMD_E4_OWNS_AudioController'},
            {'op': 'write_file', 'file': 'e4/classes/ObjectClass_e4.hpp',
             'text': (
                 '// G42.33 b8 repair: file was NUL-corrupted in 07f25216 '
                 '(G37 session). Canonical definition\n'
                 '// lives in _tree_full_e4.hpp; this header forwards to it '
                 '(single-definition discipline).\n'
                 '#pragma once\n\n'
                 '// X10: marks the e4 flat authority as present so '
                 'object/object.hpp suppresses its tree twin\n'
                 '#ifndef GAMEMD_E4_OWNS_ObjectClass\n'
                 '#define GAMEMD_E4_OWNS_ObjectClass 1\n'
                 '#endif\n\n'
                 '#include "e4/classes/_tree_full_e4.hpp"\n')},
            {'op': 'insert_before_marker',
             'file': 'e4/classes/_tree_full_e4.hpp',
             'marker': 'namespace gamemd {',
             'text': (
                 '// X10: e4 flat authority markers (suppress tree twins in '
                 'object/object.hpp)\n'
                 '#ifndef GAMEMD_E4_OWNS_ObjectClass\n'
                 '#define GAMEMD_E4_OWNS_ObjectClass 1\n'
                 '#endif\n'
                 '#ifndef GAMEMD_E4_OWNS_AudioController\n'
                 '#define GAMEMD_E4_OWNS_AudioController 1\n'
                 '#endif\n')},
        ],
    },
    {   # VectorClass: `_tree_full_e4.hpp`'s flat def is a PROVEN superset
        # of the partial twin in VectorClass_e4.hpp (member-set diff:
        # superset carries vtable0 + Cleanup/ClearAndFree*/HouseClass__vt_02_
        # + 30 members; twin has 7). The twin has exactly 2 includers
        # (addr4E/addr4F), both of which already see _tree_full -> twin
        # deleted, _tree_full is the single e4 authority.
        # VectorCursor_uint_DynamicVectorClass_uint: _tree_full def removed
        # (dedicated header owns it; 0 TUs see _tree_full without it).
        'why': 'VectorClass: partial twin deleted (_tree_full superset is '
               'authority); VectorCursor stale _tree_full copy removed',
        'ops': [
            {'op': 'del_include', 'file': 'e4/addr4E_e4.cpp',
             'include': 'e4/classes/VectorClass_e4.hpp'},
            {'op': 'del_include', 'file': 'e4/addr4F_e4.cpp',
             'include': 'e4/classes/VectorClass_e4.hpp'},
            {'op': 'del_file', 'file': 'e4/classes/VectorClass_e4.hpp'},
            {'op': 'del_def', 'file': 'e4/classes/_tree_full_e4.hpp',
             'class': 'VectorCursor_uint_DynamicVectorClass_uint'},
        ],
    },
    {   # e4_globals.hpp line ~14826 carries a G22-materialized receiver
        # stub `struct Campaign_WorldDominationTour_24_ { ... }`; the class
        # now has its own e4 header (Campaign_WorldDominationTour_24__e4.hpp)
        # -> drop the stub (single authority).
        'why': 'e4_globals.hpp: Campaign_WorldDominationTour_24_ stub '
               'removed (own e4 header is authority)',
        'ops': [
            {'op': 'del_def', 'file': 'e4/e4_globals.hpp',
             'class': 'Campaign_WorldDominationTour_24_'},
        ],
    },
    {   # e4/classes/CounterClass_e4.hpp includes house/house.hpp only for
        # the "G42.55 tree truth" bridge; the header has ZERO HouseClass
        # references. The include pulls object/abstract.hpp into
        # e4/HouseClass_e4.cpp -> AbstractClass C2011 vs AbstractClass_e4.hpp.
        # Drop the unused include.
        'why': 'CounterClass_e4.hpp: unused house.hpp include removed '
               '(kills AbstractClass leak into HouseClass_e4.cpp)',
        'ops': [
            {'op': 'del_include', 'file': 'e4/classes/CounterClass_e4.hpp',
             'include': 'house/house.hpp'},
        ],
    },
    {   # ui/supplied_bodies.cpp: local `struct Base64Straw { q000[8] }`
        # carrier duplicates the e4 header; the body's only member use is
        # `v5->vtable1` which the e4 def carries (local def does not) ->
        # drop the local def, keep the e4 include.
        'why': 'ui/supplied_bodies.cpp: local Base64Straw def removed '
               '(e4 header carries the used member)',
        'ops': [
            {'op': 'del_def', 'file': 'ui/supplied_bodies.cpp',
             'class': 'Base64Straw'},
        ],
    },
    # ---- last 10 same-universe duplicate stragglers (post-dedup census) --
    {   # BounceClass: 3 tree defs; render/bounce.hpp carries 15 members
        # (authority); anim.hpp/voxel_anim.hpp carry 1-member stubs and have
        # no users of their own.
        'why': 'BounceClass stubs removed from anim.hpp/voxel_anim.hpp',
        'ops': [
            {'op': 'del_def', 'file': 'entity/anim.hpp',
             'class': 'BounceClass'},
            {'op': 'del_def', 'file': 'entity/voxel_anim.hpp',
             'class': 'BounceClass'},
            {'op': 'del_def', 'file': 'ui/ui_ext.hpp', 'class': 'DropPod'},
            {'op': 'del_def', 'file': 'type/object_type.hpp',
             'class': 'VoxelStruct'},
            {'op': 'del_def', 'file': 'render/render_ext.hpp',
             'class': 'FrameTimer'},
        ],
    },
    {   # CRC32: authority = core/hash_table.hpp (4 members, home);
        # core/utility_ext.hpp copy dropped; its two only-users get the
        # authority include.
        'why': 'CRC32: hash_table.hpp authority; utility_ext copy dropped',
        'ops': [
            {'op': 'del_def', 'file': 'core/utility_ext.hpp',
             'class': 'CRC32'},
            {'op': 'add_include', 'file': 'system/file_system.cpp',
             'include': 'core/hash_table.hpp'},
            {'op': 'add_include', 'file': 'system/mix_file.cpp',
             'include': 'core/hash_table.hpp'},
        ],
    },
    {   # e4_globals_decls.hpp (generated stub-decl file) re-declares three
        # classes that have proper e4 headers / e4_globals defs; no TU sees
        # only the stub and uses the class.
        'why': 'e4_globals_decls.hpp: 3 class stubs removed (authorities '
               'live elsewhere)',
        'ops': [
            {'op': 'del_def', 'file': 'e4/e4_globals_decls.hpp',
             'class': 'Campaign_WorldDominationTour_24_'},
            {'op': 'del_def', 'file': 'e4/e4_globals_decls.hpp',
             'class': 'CellAttachedStub'},
            {'op': 'del_def', 'file': 'e4/e4_globals_decls.hpp',
             'class': 'DSurface_ViewBounds_flat'},
        ],
    },
    {   # DynamicVector / WinsockInterface: e4/minimal_carriers stubs vs
        # their dedicated e4 headers (113/14 members). The 4 TUs that see
        # only the stub get the authority include.
        'why': 'e4/minimal_carriers: DynamicVector/WinsockInterface stubs '
               'removed (dedicated headers own them)',
        'ops': [
            {'op': 'del_def', 'file': 'e4/minimal_carriers.hpp',
             'class': 'DynamicVector'},
            {'op': 'del_def', 'file': 'e4/minimal_carriers.hpp',
             'class': 'WinsockInterface'},
            {'op': 'add_include', 'file': 'e4/Conflict_e4.cpp',
             'include': 'e4/classes/DynamicVector_e4.hpp'},
            {'op': 'add_include', 'file': 'e4/DestroyVeinholeMonster_e4.cpp',
             'include': 'e4/classes/DynamicVector_e4.hpp'},
            {'op': 'add_include', 'file': 'e4/EventClass_e4.cpp',
             'include': 'e4/classes/DynamicVector_e4.hpp'},
            {'op': 'add_include', 'file': 'e4/Network_e4.cpp',
             'include': 'e4/classes/DynamicVector_e4.hpp'},
        ],
    },
    # ---- cross-universe leak includes (tree cpps pulling e4 defs) ------
    {   # Tree TUs that include an e4 header although the tree header in
        # the same closure already defines the class. Drop the redundant
        # e4 include (tree authority wins; member completeness handled by
        # the `supply` subcommand).
        'why': 'tree TUs: redundant e4 def includes removed',
        'ops': [
            {'op': 'del_include', 'file': 'structure/unit.cpp',
             'include': 'e4/classes/MapClass_e4.hpp'},
            {'op': 'del_include', 'file': 'structure/unit.cpp',
             'include': 'e4/classes/CCINIClass_e4.hpp'},
            {'op': 'del_include', 'file': 'render/supplied_bodies.cpp',
             'include': 'e4/classes/MapClass_e4.hpp'},
            {'op': 'del_include', 'file': 'render/supplied_bodies.cpp',
             'include': 'e4/classes/MissionClass_e4.hpp'},
            {'op': 'del_include', 'file': 'structure/infantry.cpp',
             'include': 'e4/classes/CellClass_e4.hpp'},
            {'op': 'del_include', 'file': 'structure/infantry.cpp',
             'include': 'e4/classes/COMObject_e4.hpp'},
            {'op': 'del_include', 'file': 'structure/infantry.cpp',
             'include': 'e4/classes/ComPtr_e4.hpp'},
            {'op': 'del_include', 'file': 'object/supplied_bodies.cpp',
             'include': 'e4/classes/CellClass_e4.hpp'},
            {'op': 'del_include', 'file': 'object/gap2_defs.cpp',
             'include': 'e4/classes/DDraw_e4.hpp'},
            {'op': 'del_include', 'file': 'house/gap2_defs.cpp',
             'include': 'e4/classes/VeterancyStruct_e4.hpp'},
        ],
    },
    # ---- closeout 2026-10-13: last same-namespace twin (SHA1) -----------
    {   # SHA1: core/utility_ext.hpp (virtual set: ProcessBlock/Reset/
        # SHA1_field_0x08..0x14) vs core/hash_table.hpp (CSP-canonical set:
        # Init/PadMessage/ComputeThunk/...). Both gamemd::SHA1; seen together
        # in system/file_system.cpp + system/mix_file.cpp (C2011 pair).
        # utility_ext's twin has real dependents (core/supplied_bodies.cpp
        # defines ProcessBlock; system+ui gap2_defs.cpp call Reset) -> the
        # dedup safety rule forbids deletion; first-include-wins twin guard
        # (G42 idiom) makes every TU see exactly one def instead.
        'why': 'SHA1 twin: first-include-wins guard (both defs kept; '
               'dependents on either side preserved)',
        'ops': [
            {'op': 'wrap_def', 'file': 'core/utility_ext.hpp',
             'class': 'SHA1', 'guard': 'GAMEMD_G2_SHA1_DEF', 'define': True},
            {'op': 'wrap_def', 'file': 'core/hash_table.hpp',
             'class': 'SHA1', 'guard': 'GAMEMD_G2_SHA1_DEF', 'define': True},
        ],
    },
    # ---- closeout 2026-10-13 part 2: dedup v1 stray includes + shells ----
    {   # dedup v1's only-user test was FILE-level: it treated TUs that merely
        # ENTER a header as users even when the twin def there was preprocessor
        # -inactive (GAMEMD_E4_Hash defined by _tree_full_e4.hpp) and when the
        # TU already had another active def (e4 flat Hash_e4.hpp / Queue_e4.hpp
        # / local vocabulary stubs). The added includes created new same-TU
        # pairs vs the e4 flats. Revert exactly the strays:
        #   core/hash_table.hpp -> 12 e4 TUs (conflicts Hash/SHA1 x12)
        #   system/game_systems.hpp -> 3 TUs (Queue_e4 pairs)
        #   misc/misc_ext.hpp -> house/gap2_defs.cpp (TU-local stubs exist)
        'why': 'revert dedup-v1 stray includes (file-level only-user test)',
        'ops': [
            {'op': 'del_include', 'file': 'core/supplied_bodies.cpp',
             'include': 'core/hash_table.hpp'},
            {'op': 'del_include', 'file': 'e4/addr5D_e4.cpp',
             'include': 'core/hash_table.hpp'},
            {'op': 'del_include', 'file': 'e4/addr67_e4.cpp',
             'include': 'core/hash_table.hpp'},
            {'op': 'del_include', 'file': 'e4/addr6A_e4.cpp',
             'include': 'core/hash_table.hpp'},
            {'op': 'del_include', 'file': 'e4/DisplayClass_e4.cpp',
             'include': 'core/hash_table.hpp'},
            {'op': 'del_include', 'file': 'e4/GameConfig_e4.cpp',
             'include': 'core/hash_table.hpp'},
            {'op': 'del_include', 'file': 'e4/Network_e4.cpp',
             'include': 'core/hash_table.hpp'},
            {'op': 'del_include', 'file': 'e4/NetworkLobby_e4.cpp',
             'include': 'core/hash_table.hpp'},
            {'op': 'del_include', 'file': 'e4/ObjectClass_e4.cpp',
             'include': 'core/hash_table.hpp'},
            {'op': 'del_include', 'file': 'e4/SidebarClass_e4.cpp',
             'include': 'core/hash_table.hpp'},
            {'op': 'del_include', 'file': 'e4/WideString_e4.cpp',
             'include': 'core/hash_table.hpp'},
            {'op': 'del_include', 'file': 'e4/WOLobby_e4.cpp',
             'include': 'core/hash_table.hpp'},
            {'op': 'del_include', 'file': 'core/supplied_bodies.cpp',
             'include': 'system/game_systems.hpp'},
            {'op': 'del_include', 'file': 'e4/addr40_e4.cpp',
             'include': 'system/game_systems.hpp'},
            {'op': 'del_include', 'file': 'object/supplied_bodies.cpp',
             'include': 'system/game_systems.hpp'},
            {'op': 'del_include', 'file': 'house/gap2_defs.cpp',
             'include': 'misc/misc_ext.hpp'},
        ],
    },
    {   # deleting a guarded twin def left `#ifndef X / #define X 1 / #endif`
        # shells whose #define suppresses the AUTHORITY in TUs that include
        # the loser header first (evidence: ui/gadget.cpp Queue was
        # undefined after the game_systems authority got suppressed by
        # utility_ext's leftover GAMEMD_G2_Queue_DEF). Remove the empty
        # shells in the dedup-touched files.
        'why': 'guard-shell cleanup (deleted twin guards left suppression '
               'defines behind)',
        'ops': [
            {'op': 'clean_guard_shells', 'file': 'core/utility_ext.hpp'},
            {'op': 'clean_guard_shells', 'file': 'e4/minimal_carriers.hpp'},
            {'op': 'clean_guard_shells', 'file': 'misc/movement_ext.hpp'},
            {'op': 'clean_guard_shells', 'file': 'render/render_ext.hpp'},
            {'op': 'clean_guard_shells', 'file': 'system/game_systems.hpp'},
            {'op': 'clean_guard_shells', 'file': 'system/minimal_carriers.hpp'},
            {'op': 'clean_guard_shells', 'file': 'ui/ui_ext.hpp'},
        ],
    },
    {   # LayerClass: system/layer.hpp (tree) vs e4/classes/LayerClass_e4.hpp
        # (e4 flat) — both gamemd; seen together in structure/unit.cpp +
        # structure/supplied_bodies.cpp after the MapClass include supply
        # chains map.hpp -> layer.hpp into TUs that already include the e4
        # flat. First-include-wins guard (order preserved per TU).
        'why': 'LayerClass twin: first-include-wins guard',
        'ops': [
            {'op': 'wrap_def', 'file': 'system/layer.hpp',
             'class': 'LayerClass', 'guard': 'GAMEMD_G2_LAYERCLASS_DEF',
             'define': True},
            {'op': 'wrap_def', 'file': 'e4/classes/LayerClass_e4.hpp',
             'class': 'LayerClass', 'guard': 'GAMEMD_G2_LAYERCLASS_DEF',
             'define': True},
        ],
    },
    {   # last 56 covered-missing sites: all in three body-carrier files with
        # NO visible def. Root causes + fixes:
        #  * ui/supplied_bodies.cpp pre-defines GAMEMD_E4_BitmapClass /
        #    GAMEMD_E4_CampaignSelect while the e4 carrier headers are empty
        #    ("G42.55 absorbed: single truth is BitmapClass") -> the guards
        #    suppressed the ONLY def (ui_ext.hpp). Drop the two stray defines.
        #  * e4/classes/supplied_bodies.cpp lacks 5 e4 class includes whose
        #    bodies it carries (ToolTipClass/Text/NetworkID/NetworkManager/
        #    TeamClass). Add them.
        #  * _gap2/gap2_global_defs.cpp lacks VeinholeMonsterClass/RulesClass/
        #    ParticleClass defs. Add the tree headers.
        'why': 'close resid 56 covered-missing: carrier include/guard fixes',
        'ops': [
            {'op': 'del_define', 'file': 'ui/supplied_bodies.cpp',
             'name': 'GAMEMD_E4_BitmapClass'},
            {'op': 'del_define', 'file': 'ui/supplied_bodies.cpp',
             'name': 'GAMEMD_E4_CampaignSelect'},
            {'op': 'add_include', 'file': 'e4/classes/supplied_bodies.cpp',
             'include': 'e4/classes/ToolTipClass_e4.hpp'},
            {'op': 'add_include', 'file': 'e4/classes/supplied_bodies.cpp',
             'include': 'e4/classes/Text_e4.hpp'},
            {'op': 'add_include', 'file': 'e4/classes/supplied_bodies.cpp',
             'include': 'e4/classes/NetworkID_e4.hpp'},
            {'op': 'add_include', 'file': 'e4/classes/supplied_bodies.cpp',
             'include': 'e4/classes/NetworkManager_e4.hpp'},
            {'op': 'add_include', 'file': 'e4/classes/supplied_bodies.cpp',
             'include': 'e4/classes/TeamClass_e4.hpp'},
            {'op': 'add_include', 'file': '_gap2/gap2_global_defs.cpp',
             'include': 'misc/rules.hpp'},
            {'op': 'add_include', 'file': '_gap2/gap2_global_defs.cpp',
             'include': 'entity/particle.hpp'},
        ],
    },
    {   # _gap2/gap2_global_defs.cpp: misc_ext.hpp brings ObjectPlacement +
        # Char twins that collide with its own gap2_global_decls.hpp /
        # e4/classes/Char_e4.hpp defs. VeinholeMonsterClass's e4 flat header
        # provides the class without the twins -> swap the include; the flat's
        # 4 missing members (u32_104/AC/B4/C4) are then supplied into it by
        # the supply subcommand.
        'why': 'gap2: misc_ext -> VeinholeMonsterClass_e4 (kills '
               'ObjectPlacement/Char twins)',
        'ops': [
            {'op': 'del_include', 'file': '_gap2/gap2_global_defs.cpp',
             'include': 'misc/misc_ext.hpp'},
            {'op': 'add_include', 'file': '_gap2/gap2_global_defs.cpp',
             'include': 'e4/classes/VeinholeMonsterClass_e4.hpp'},
        ],
    },
]


# ================================================================= surgery ops

def op_del_def(text, name):
    sp = def_span(text, name)
    if not sp:
        return text, False
    start, bstart, bend, end = sp
    # include the closing ';' of the statement (def_span ends right after '}')
    j = end
    while j < len(text) and text[j] in ' \t':
        j += 1
    if j < len(text) and text[j] == ';':
        end = j + 1
    # swallow one trailing comment-only line right after the def
    tail = text[end:]
    m = re.match(r'([ \t]*(?://[^\n]*)?\n)?', tail)
    cut = end
    if m and m.group(0).strip().startswith('//'):
        cut = end + m.end()
    # swallow a following lone ';' line (artifact of an earlier bad cut)
    m2 = re.match(r'[ \t]*;[ \t]*\n', text[cut:])
    if m2:
        cut += m2.end()
    return text[:start] + text[cut:], True


def op_wrap_def(text, name, guard, define=False):
    t2, changed = _wrap_impl(text, name, guard, define)
    return t2, changed


def _wrap_impl(text, name, guard, define=False):
    sp = def_span(text, name)
    if not sp:
        return text, False
    start, bstart, bend, end = sp
    # include the closing ';' of the statement
    j = end
    while j < len(text) and text[j] in ' \t':
        j += 1
    if j < len(text) and text[j] == ';':
        end = j + 1
    if '#ifndef %s' % guard in text[max(0, start - 200):start]:
        return text, False
    pre = '#ifndef %s  // X10: e4 universe owns this twin\n' % guard
    if define:
        pre = ('#ifndef %s  // X10: first-include-wins twin guard\n'
               '#define %s 1\n' % (guard, guard))
    post = '\n#endif  // %s (X10)\n' % guard
    return text[:start] + pre + text[start:end] + post + text[end:], True


def op_del_include(text, inc):
    pat = re.compile(r'^[ \t]*#\s*include\s+"%s"[^\n]*\n' % re.escape(inc),
                     re.M)
    new, n = pat.subn('', text)
    return new, n > 0


def op_del_define(text, name):
    pat = re.compile(r'^[ \t]*#\s*define\s+%s\b[^\n]*\n' % re.escape(name),
                     re.M)
    new, n = pat.subn('', text)
    return new, n > 0


def op_add_include(text, inc):
    if re.search(r'#\s*include\s+"%s"' % re.escape(inc), text):
        return text, False
    lines = text.split('\n')
    at = 0
    for i, ln in enumerate(lines[:80]):
        if ln.startswith('#include'):
            at = i + 1
    lines.insert(at, '#include "%s"' % inc)
    return '\n'.join(lines), True


def op_replace_word(text, old, new):
    pat = re.compile(r'\b%s\b' % re.escape(old))
    n = len(pat.findall(text))
    if not n:
        return text, False
    return pat.sub(new, text), True


def op_unwrap_def(text, cls, guard):
    """Remove a previous `#ifndef <guard> ... #endif` wrap around a def."""
    sp = def_span(text, cls)
    if not sp:
        return text, False
    start, _bs, _be, end = sp
    # extend past the statement-terminating ';' so the post-#endif search
    # starts after `};`
    j = end
    while j < len(text) and text[j] in ' \t':
        j += 1
    if j < len(text) and text[j] == ';':
        end = j + 1
    window_lo = max(0, start - 400)
    window = text[window_lo:start]
    pre_pat = re.compile(r'^[ \t]*#ifndef\s+%s[^\n]*\n' % re.escape(guard),
                         re.M)
    m = None
    for mm in pre_pat.finditer(window):
        m = mm
    if not m:
        return text, False
    pre_start = window_lo + m.start()
    pre_end = window_lo + m.end()
    post_pat = re.compile(
        r'\n?[ \t]*#endif[^\n]*%s[^\n]*\(X10\)[^\n]*\n' % re.escape(guard))
    m2 = post_pat.search(text[end:end + 400])
    if not m2:
        return text, False
    post_start = end + m2.start()
    post_end = end + m2.end()
    return text[:pre_start] + text[pre_end:post_start] + text[post_end:], True


def op_insert_after_def(text, cls, block):
    """Insert `block` right after the top-level definition of `cls`."""
    if block.strip().split('\n')[0] in text:
        return text, False
    sp = def_span(text, cls)
    if not sp:
        return text, False
    _start, _bs, _be, end = sp
    # move past the end of the line containing the closing brace
    k = text.find('\n', end)
    k = end if k < 0 else k + 1
    return text[:k] + block + text[k:], True


def op_insert_before_marker(text, marker, block):
    if block.strip().split('\n')[0] in text:
        return text, False
    i = text.find(marker)
    if i < 0:
        return text, False
    ls = text.rfind('\n', 0, i)
    ls = 0 if ls < 0 else ls + 1
    return text[:ls] + block + text[ls:], True


def op_dedup_includes(text):
    seen = set()
    out = []
    changed = False
    for ln in text.split('\n'):
        m = re.match(r'^[ \t]*#\s*include\s+"([^"]+)"', ln)
        if m:
            key = m.group(1)
            if key in seen:
                changed = True
                continue
            seen.add(key)
        out.append(ln)
    return '\n'.join(out), changed


_SHELL_RE = re.compile(
    r'^[ \t]*#\s*ifndef\s+([A-Za-z_]\w*)[^\n]*\n'
    r'(?:[ \t]*#\s*define\s+\1\s+1[^\n]*\n)?'
    r'(?:[ \t]*(?://[^\n]*)?\n)*'
    r'[ \t]*#\s*endif[^\n]*\n', re.M)


def op_clean_guard_shells(text):
    """Remove now-empty `#ifndef X / [#define X 1] / #endif` shells left
    behind when a guarded twin def was deleted. Iterates (nested shells).
    A shell is removed only when its guarded region holds nothing but
    blank/comment lines -- deliberate marker defines (e.g. the e4-owns
    flags guarded around real code) never match."""
    changed = False
    for _ in range(8):
        new, n = _SHELL_RE.subn('', text)
        if not n:
            break
        text = new
        changed = True
    return text, changed


def apply_op(op, dry):
    if op['op'] == 'del_file':
        p = SRC / op['file']
        if not p.exists():
            return 'skip (absent)'
        if not dry:
            p.unlink()
        return 'deleted'
    p = SRC / op['file']
    if not p.exists():
        return 'ERROR file missing'
    text = p.read_text(encoding='utf-8', errors='replace')
    o = op['op']
    if o == 'del_def':
        new, ch = op_del_def(text, op['class'])
    elif o == 'wrap_def':
        new, ch = op_wrap_def(text, op['class'], op['guard'],
                              define=bool(op.get('define')))
    elif o == 'unwrap_def':
        new, ch = op_unwrap_def(text, op['class'],
                                op.get('guard') or 'GAMEMD_E4_UNIVERSE')
    elif o == 'del_include':
        new, ch = op_del_include(text, op['include'])
    elif o == 'del_define':
        new, ch = op_del_define(text, op['name'])
    elif o == 'add_include':
        new, ch = op_add_include(text, op['include'])
    elif o == 'replace_word':
        new, ch = op_replace_word(text, op['old'], op['new'])
    elif o == 'insert_after_def':
        new, ch = op_insert_after_def(text, op['class'], op['text'])
    elif o == 'insert_before_marker':
        new, ch = op_insert_before_marker(text, op['marker'], op['text'])
    elif o == 'dedup_includes':
        new, ch = op_dedup_includes(text)
    elif o == 'clean_guard_shells':
        new, ch = op_clean_guard_shells(text)
    elif o == 'write_file':
        new, ch = op['text'], text != op['text']
    else:
        return 'ERROR unknown op %s' % o
    if not ch:
        return 'no-op (already applied)'
    if not dry:
        if not robust_write(p, new):
            return 'ERROR write failed'
    return 'applied'


# ================================================================ subcommands

def cmd_report(args):
    pp = PP(SRC)
    X10.mkdir(parents=True, exist_ok=True)
    cpps = []
    for p in sorted(SRC.rglob('*.cpp')):
        rel = str(p.relative_to(SRC)).replace('\\', '/')
        if rel.startswith(('app/', '_generated/')):
            continue
        cpps.append(rel)

    # ---- file-level census
    census = defaultdict(lambda: {'defs': [], 'fwds': []})
    for p in sorted(SRC.rglob('*.hpp')):
        rel = str(p.relative_to(SRC)).replace('\\', '/')
        t = pp.read(rel)
        for (name, kind, body, depth) in iter_decls(t):
            if depth != 0:
                continue
            if kind == 'def':
                census[name]['defs'].append(rel)
            elif kind == 'fwd':
                census[name]['fwds'].append(rel)
    multi_def = {n: v for n, v in census.items() if len(v['defs']) > 1}
    with open(X10 / 'authority_census.json', 'w', encoding='utf-8') as f:
        json.dump({
            'distinct_names': len(census),
            'names_multi_def': len(multi_def),
            'def_occurrences': sum(len(v['defs']) for v in census.values()),
            'fwd_occurrences': sum(len(v['fwds']) for v in census.values()),
            'multi_def': {n: sorted(v['defs']) for n, v in sorted(
                multi_def.items())},
        }, f, ensure_ascii=False, indent=1)

    # ---- same-TU conflicts
    results = []
    total = 0
    for c in cpps:
        defs, entered = pp.active_defs(c)
        conflicts = []
        for name, files in defs.items():
            if len(files) > 1:
                bodies = set(files.values())
                if len(bodies) > 1:
                    conflicts.append({'name': name, 'files': sorted(files)})
        if conflicts:
            total += len(conflicts)
            results.append({'cpp': c, 'conflicts': sorted(
                conflicts, key=lambda x: x['name'])})
    with open(X10 / 'tu_conflicts.json', 'w', encoding='utf-8') as f:
        json.dump({'total': total, 'cpps': len(results), 'items': results},
                  f, ensure_ascii=False, indent=1)
    print('distinct names: %d | multi-def names: %d | defs: %d | fwds: %d' % (
        len(census), len(multi_def),
        sum(len(v['defs']) for v in census.values()),
        sum(len(v['fwds']) for v in census.values())))
    print('same-TU conflicts (distinct bodies): %d in %d cpps' % (
        total, len(results)))
    return 0


def cmd_apply(args):
    dry = args.dry
    for i, rule in enumerate(RULES):
        acts = []
        for op in rule['ops']:
            acts.append('%s -> %s' % (
                '%s(%s)' % (op['op'], op.get('class') or op.get('include')
                            or op.get('file')),
                apply_op(op, dry)))
        if acts:
            print('[rule %02d] %s' % (i, rule['why']))
            for a in acts:
                print('    ', a)
    print('APPLIED (dry=%s)' % dry)
    return 0


def cmd_verify(args):
    pp = PP(SRC)
    cpps = []
    for p in sorted(SRC.rglob('*.cpp')):
        rel = str(p.relative_to(SRC)).replace('\\', '/')
        if rel.startswith(('app/', '_generated/')):
            continue
        cpps.append(rel)
    total = 0
    name_level = 0
    for c in cpps:
        defs, nsmap, entered = pp.active_defs_full(c)
        for name, files in defs.items():
            if len(files) > 1 and len(set(files.values())) > 1:
                name_level += 1
                by_ns = defaultdict(dict)
                for f, body in files.items():
                    ns = nsmap.get(name, {}).get(f, ())
                    by_ns[ns][f] = body
                for ns, fmap in by_ns.items():
                    if len(fmap) > 1 and len(set(fmap.values())) > 1:
                        total += 1
                        print('CONFLICT %-30s ns=%-12s TU=%-32s %s' % (
                            name, '::'.join(ns) or '(global)', c,
                            sorted(fmap)))
    print('verify: %d same-namespace conflicts '
          '(name-level differing pairs: %d — cross-namespace twins are legal '
          'C++ and counted separately)' % (total, name_level))
    return 0 if total == 0 else 1


def cmd_dedup(args):
    """Apply the intra-universe duplicate resolutions (X10 safety rule).

    Reads .omo/x10/intra_dup_proposals.json (intra_dup_propose.py output).
    For each proposal (class, universe, authority, losers):
      only-users(loser) = TUs whose include closure contains the loser but
      NOT the authority, and whose text references the class name.
      * only-users == []                                 -> delete loser
      * only-users != [] and members(loser) == 0         -> add authority
        include to each only-user, then delete loser
      * only-users != [] and members(loser) > 0: delete ONLY if no
        only-user text mentions a member that exists only in the loser;
        otherwise KEEP and record for the X12 composition ruling.
    Idempotent: on re-run, deleted defs and present includes are no-ops.
    """
    proposals = json.loads(
        (X10 / 'intra_dup_proposals.json').read_text(encoding='utf-8')
        if not args.proposals else Path(args.proposals).read_text(
            encoding='utf-8'))
    pp = PP(SRC)
    cpps = []
    for p in sorted(SRC.rglob('*.cpp')):
        rel = str(p.relative_to(SRC)).replace('\\', '/')
        if rel.startswith(('app/', '_generated/')):
            continue
        cpps.append(rel)
    print('dedup: %d proposals; building %d TU active-def indexes '
          '(one pass)...' % (len(proposals), len(cpps)), flush=True)
    wanted = {pr['class'] for pr in proposals}
    act = {}   # cpp -> {class: set(active def files)}
    for i, c in enumerate(cpps):
        defs, _ns, _ent = pp.active_defs_full(c)
        act[c] = {n: set(d.keys()) for n, d in defs.items() if n in wanted}
        if (i + 1) % 100 == 0:
            print('  ... %d/%d' % (i + 1, len(cpps)), flush=True)

    text_cache = {}

    def cpp_text(c):
        if c not in text_cache:
            text_cache[c] = pp.read(c)
        return text_cache[c]

    _NOISE = frozenset((
        'default', 'delete', 'override', 'final', 'noexcept', 'const',
        'virtual', 'static', 'inline', 'explicit', 'return', 'public',
        'private', 'protected', 'this'))

    def members_of(rel, cls):
        t = pp.read(rel)
        sp = def_span(t, cls)
        if not sp:
            return None
        body = normalize_body(t[sp[1] + 1:sp[2]])
        return {n for n in member_names(body) if n not in _NOISE}

    actions = []
    kept = []
    reasons = defaultdict(int)
    for pr in proposals:
        cls = pr['class']
        auth_rel = pr['authority'].replace('src/', '', 1)
        ma = members_of(auth_rel, cls)
        ref_re = re.compile(r'(?<![:\w])%s\b' % re.escape(cls))
        for loser in pr['losers']:
            loser_rel = loser.replace('src/', '', 1)
            ml = members_of(loser_rel, cls)
            if ml is None:
                continue  # already deleted (idempotent re-run)
            # X10 closeout fix (v2): only-users must see the loser ACTIVELY
            # (a merely-entered header whose twin was suppressed by a guard
            # does not count), and the class reference must not be a member
            # of another class (`X::Hash`).
            only = []
            for c in cpps:
                files = act[c].get(cls)
                if not files or loser_rel not in files \
                        or auth_rel in files:
                    continue
                if ref_re.search(cpp_text(c)):
                    only.append(c)
            # a TU that keeps another active def of the class after the
            # loser dies needs no include supply
            need = [c for c in only
                    if not (act[c].get(cls, set()) - {loser_rel})]
            skipped_inc = len(only) - len(need)
            if not only:
                actions.append({'op': 'delete', 'file': loser_rel,
                                'class': cls, 'auth': auth_rel,
                                'members': len(ml), 'only': [],
                                'why': 'no only-users'})
                reasons['delete-no-only-users'] += 1
                continue
            if len(ml) == 0:
                actions.append({'op': 'include+delete', 'file': loser_rel,
                                'class': cls, 'auth': auth_rel,
                                'members': 0, 'only': need,
                                'why': 'empty stub'})
                reasons['include+delete-empty-stub'] += 1
                reasons['include-skip-other-def'] += skipped_inc
                continue
            only_m = ml - (ma or set())
            dep = []
            for c in only:
                t = cpp_text(c)
                hit = [nm for nm in only_m
                       if re.search(r'\b%s\b' % re.escape(nm), t)]
                if hit:
                    dep.append(c)
            if dep:
                kept.append({'file': loser, 'class': cls,
                             'universe': pr['universe'],
                             'members': len(ml),
                             'loser_only_members': sorted(only_m)[:12],
                             'dep_count': len(dep), 'dependents': dep[:10]})
                reasons['kept-loser-member-dependency'] += 1
            else:
                actions.append({'op': 'include+delete', 'file': loser_rel,
                                'class': cls, 'auth': auth_rel,
                                'members': len(ml), 'only': need,
                                'why': 'no loser-only member use'})
                reasons['include+delete-no-member-dep'] += 1
                reasons['include-skip-other-def'] += skipped_inc

    created = 0
    self_inc = []
    for a in actions:
        p = SRC / a['file']
        if not p.exists():
            continue
        # self-reference guard: if the loser file itself references the
        # class outside of its (to-be-deleted) def, keep the authority
        # visible inside the loser file as well.
        try:
            text0 = p.read_text(encoding='utf-8', errors='replace')
            sp0 = def_span(text0, a['class'])
            if sp0:
                rest = text0[:sp0[0]] + text0[sp0[3]:]
                rest = re.sub(r'//[^\n]*', ' ', rest)
                rest = re.sub(r'/\*.*?\*/', ' ', rest, flags=re.S)
                if re.search(r'\b%s\b' % re.escape(a['class']), rest):
                    t_self, ch_self = op_add_include(text0, a['auth'])
                    if ch_self:
                        if not args.dry and not robust_write(p, t_self):
                            print('WRITE FAIL(self)', a['file'])
                        created += 1
                        self_inc.append({'file': a['file'],
                                         'include': a['auth']})
        except OSError:
            pass
        if a['op'] == 'include+delete':
            for c in a['only']:
                pc = SRC / c
                if not pc.exists():
                    continue
                t2 = pc.read_text(encoding='utf-8', errors='replace')
                t3, ch2 = op_add_include(t2, a['auth'])
                if ch2:
                    if not args.dry and not robust_write(pc, t3):
                        print('WRITE FAIL', c)
                    created += 1
        text = p.read_text(encoding='utf-8', errors='replace')
        new, ch = op_del_def(text, a['class'])
        if ch:
            if not args.dry and not robust_write(p, new):
                print('WRITE FAIL', a['file'])
            created += 1

    with open(X10 / 'dedup_x12_handoff.json', 'w', encoding='utf-8') as f:
        json.dump({'actions': actions, 'kept': kept,
                   'self_includes': self_inc,
                   'reasons': dict(reasons)}, f, ensure_ascii=False, indent=1)
    print('dedup: %d writes (actions: %d incl. %d keeps-for-X12) dry=%s'
          % (created, len(actions), len(kept), args.dry))
    print('  reasons: %s' % ', '.join(
        '%s=%d' % kv for kv in sorted(reasons.items())))
    return 0


# ---- supply: complete authority member sets -------------------------------

def load_tables():
    tables = {}
    p = ROOT / 'anchors' / 'csp_canon_members.json'
    d = json.loads(p.read_text(encoding='utf-8', errors='replace'))
    out = {}
    for cls, ent in d.items():
        if isinstance(ent, dict):
            out[cls] = {m['name']: (m.get('type'), m.get('size'))
                        for m in (ent.get('members') or {}).values()
                        if isinstance(m, dict) and m.get('name')}
    tables['csp_canon_members'] = out

    p = ROOT / 'anchors' / 'member_types.json'
    d = json.loads(p.read_text(encoding='utf-8', errors='replace'))
    out = defaultdict(dict)
    for k, v in d.items():
        if '+' not in k or not isinstance(v, dict) or not v.get('name'):
            continue
        cls = k.rsplit('+', 1)[0]
        out[cls].setdefault(v['name'], (v.get('type'), 4))
    tables['member_types'] = dict(out)

    p = ROOT / 'anchors' / 'member_authority.json'
    d = json.loads(p.read_text(encoding='utf-8', errors='replace'))
    out = defaultdict(dict)
    for k, v in (d.get('members') or {}).items():
        cls = v.get('class') or k.rsplit('+', 1)[0]
        nm = v.get('name')
        if nm:
            out[cls].setdefault(nm, (v.get('type'), v.get('size') or 4))
    tables['member_authority'] = dict(out)

    p = ROOT / 'tools' / 'member_lookup.json'
    if p.exists():
        def hook(pairs):
            dd = {}
            for k, v in pairs:
                dd[k] = v
            if 'name' in dd and ('type' in dd or 'size' in dd
                                 or 'src' in dd):
                return ('N', dd.get('name'), dd.get('type'),
                        dd.get('size'), dd.get('src'))
            return dd
        d = json.loads(p.read_text(encoding='utf-8', errors='replace'),
                       object_pairs_hook=hook)
        out = {}
        for cls, ent in d.items():
            names = {}
            if isinstance(ent, dict):
                for off, mm in ent.items():
                    if isinstance(mm, tuple) and mm and mm[0] == 'N':
                        names.setdefault(mm[1], (mm[2], mm[3]))
            if names:
                out[cls] = names
        tables['member_lookup'] = out
    return tables


SUPPLY_PRI = ('csp_canon_members', 'member_lookup', 'member_types',
              'member_authority')

_CXX_KEYWORDS = frozenset((
    'return', 'char', 'int', 'void', 'unsigned', 'signed', 'float',
    'double', 'bool', 'short', 'long', 'const', 'struct', 'class', 'if',
    'else', 'for', 'while', 'switch', 'case', 'sizeof', 'new', 'delete'))


def valid_class_name(cls):
    return (bool(re.match(r'^[A-Za-z_]\w*$', cls))
            and cls not in _CXX_KEYWORDS)


# ---------------------------------------------------------------- X25: fwd hygiene
_FWD_PRIM = {'void', 'int', 'char', 'short', 'long', 'float', 'double', 'bool',
             'unsigned', 'signed', 'size_t', 'wchar_t'}
_X10_MEMBER = re.compile(
    r'^\s*(?P<ty>[A-Za-z_]\w*(?:::\w+)?)\s*\*\s*(?P<nm>\w+)\s*;'
    r'\s*//\s*X10 supply')
_CORPUS_KW = None


def _corpus_class_keyword(ty):
    """'class' | 'struct' for `ty`, decided by the corpus definitions."""
    global _CORPUS_KW
    if _CORPUS_KW is None:
        cc, cs = set(), set()
        for hp in SRC.rglob('*.hpp'):
            try:
                ht = hp.read_text(encoding='utf-8', errors='replace')
            except OSError:
                continue
            for m in re.finditer(r'\b(class|struct)\s+(\w+)\b', ht):
                (cc if m.group(1) == 'class' else cs).add(m.group(2))
        _CORPUS_KW = (cc, cs)
    cc, cs = _CORPUS_KW
    if ty in cs and ty not in cc:
        return 'struct'
    return 'class'


def ensure_fwd_decls(p, dry=False):
    """X25: forward-declare class-pointer member types supplied into `p`.

    The supply pass emits `Type * name;  // X10 supply` member lines.  When
    `Type` is a class the target header does not know, every consumer TU
    cascades C2143/C4430/C2238 (gap2_global_decls.hpp got CampaignClass /
    LineTrail / AudioController / Coord / rc_ptr_base / VectorClass exactly
    this way -- 36 error lines in the I212 HEAD build log).  This hygiene
    pass adds `class Type;` / `struct Type;` (corpus keyword) after the
    last `#include` for every such type not already declared in the file.
    Idempotent (declared-check).  Returns the number of decls added."""
    try:
        text = p.read_text(encoding='utf-8', errors='replace')
    except OSError:
        return 0
    need = []
    seen = set()
    for l in text.split('\n'):
        m = _X10_MEMBER.match(l)
        if not m:
            continue
        ty = m.group('ty')
        if ty in _FWD_PRIM or ty in seen:
            continue
        seen.add(ty)
        if re.search(r'\b(?:class|struct|union|enum)\s+%s\b'
                     r'|\btypedef\b[^;]*\b%s\b|\busing\s+%s\b'
                     % (ty, ty, ty), text):
            continue
        need.append('%s %s;' % (_corpus_class_keyword(ty), ty))
    if not need:
        return 0
    lines = text.split('\n')
    at = 0
    for i, l in enumerate(lines):
        if l.strip().startswith('#include'):
            at = i + 1
    if at == 0 and lines and lines[0].strip() == '#pragma once':
        at = 1
    block = ['',
             '// X25: forward declarations for X10-supplied member pointer types']
    block += need
    new_lines = lines[:at] + block + lines[at:]
    if not dry:
        robust_write(p, '\n'.join(new_lines))
    return len(need)


def cmd_hygiene(args):
    """X25: run the fwd-decl hygiene over explicitly named headers."""
    tot = 0
    for f in args.files:
        p = Path(f)
        if not p.is_absolute():
            p = ROOT / f
        if not p.exists():
            print('SKIP (missing): %s' % f)
            continue
        n = ensure_fwd_decls(p, dry=args.dry)
        print('%s: +%d fwd decl(s)%s' % (f, n, ' (DRY)' if args.dry else ''))
        tot += n
    print('total fwd decls: %d' % tot)
    return 0


def cmd_supply(args):
    """Supply missing `this->X` member names into per-universe authorities.

    Driven by .omo/x10/member_missing*.json produced by the reachability
    census (each record: class -> name -> [{cpp,line,table}]).
    """
    missing_file = Path(args.missing) if args.missing else (
        X10 / 'member_missing_pre_supply.json')
    missing = json.loads(missing_file.read_text(encoding='utf-8'))
    tables = load_tables()
    pp = PP(SRC)

    # one-pass def index: {class: [(rel, universe)]}
    def_index = defaultdict(list)
    for p in sorted(SRC.rglob('*.hpp')):
        rel = str(p.relative_to(SRC)).replace('\\', '/')
        if rel.startswith(('csp_canon/', '_generated/')):
            continue
        uni = 'e4' if rel.startswith('e4/') else 'tree'
        for (n, k, b, d) in iter_decls(pp.read(rel)):
            if k == 'def' and d == 0:
                def_index[n].append((rel, uni))

    def table_entry(cls, name):
        for tname in SUPPLY_PRI:
            v = tables.get(tname, {}).get(cls, {}).get(name)
            if v:
                return tname, v
        return None, None

    def authority(cls, universe):
        rels = [rel for rel, uni in def_index.get(cls, []) if uni == universe]
        if not rels:
            return None
        want = ('e4/classes/%s_e4.hpp' % cls) if universe == 'e4' else None
        if want and want in rels:
            return want
        return rels[0]

    # ---- site-aware grouping (X10 closeout) ------------------------------
    # For every missing (class, name) site, resolve the class defs visible in
    # that site's TU closure and add the member to THOSE defs. This replaces
    # the v1 lex-first single-authority targeting, which completed the wrong
    # twin where it was invisible (e.g. ScenarioClass: structure/
    # minimal_carriers.hpp received 70+ members while every user TU sees
    # system/scenario.hpp -- the members stayed unreachable).
    closures = {}

    def closure(rel):
        if rel not in closures:
            closures[rel] = pp.active_defs(rel)
        return closures[rel]

    per_file = defaultdict(dict)   # target file -> class -> {name: info}
    skipped = []
    for cls, names in sorted(missing.items()):
        if cls.startswith('Gap2Recv_') or not valid_class_name(cls):
            skipped.append((cls, '*', 'pseudo-class'))
            continue
        for nm, sites in names.items():
            tname, te = table_entry(cls, nm)
            if not te:
                skipped.append((cls, nm, 'no-table-entry'))
                continue
            targets = defaultdict(list)   # def file -> sites
            for s in sites:
                defs, _ent = closure(s['cpp'])
                files = defs.get(cls) or {}
                if files:
                    for f in files:
                        targets[f].append(s)
                else:
                    # no def visible at all: fall back to the universe
                    # authority so at least the canonical header carries it
                    uni = 'e4' if s['cpp'].startswith('e4/') else 'tree'
                    ah = authority(cls, uni)
                    if ah:
                        targets[ah].append(s)
                    else:
                        skipped.append((cls, nm, 'no-visible-def,no-authority'))
            for f, ss in targets.items():
                per_file[f].setdefault(cls, {})[nm] = {
                    'type': te[0], 'size': te[1], 'table': tname,
                    'sites': len(ss)}

    applied = 0
    files_touched = 0
    details = []
    for f, classes in sorted(per_file.items()):
        p = SRC / f
        if not p.exists():
            skipped.append(('*', f, 'target file missing'))
            continue
        for cls, names in sorted(classes.items()):
            text = p.read_text(encoding='utf-8', errors='replace')
            cur = None
            for (n, k, b, d) in iter_decls(text):
                if k == 'def' and d == 0 and n == cls:
                    cur = member_names(b)
                    break
            if cur is None:
                skipped.append((cls, f, 'def not found in target'))
                continue
            add = [n for n in names if n not in cur]
            if not add:
                continue
            lines = []
            for n in sorted(add):
                info = names[n]
                t = info['type'] or 'unsigned int'
                t = t.strip()
                if t.endswith('*'):
                    decl = '%s %s;' % (t, n)
                elif t in ('int', 'unsigned int', 'int32_t', 'uint32_t',
                           'float', 'double', 'bool', 'char', 'short',
                           'unsigned short', 'unsigned char', 'int16_t',
                           'uint16_t', 'int8_t', 'uint8_t'):
                    decl = '%s %s;' % (t, n)
                else:
                    # unknown/non-primitive type: width-faithful fallback
                    sz = info['size'] or 4
                    decl = ('unsigned char %s[%d];  /* %s */' % (n, sz, t)) \
                        if sz and sz > 0 else ('unsigned int %s;  /* %s */'
                                               % (n, t))
                lines.append('    %s  // X10 supply (%s)'
                             % (decl, info['table']))
            sp = def_span(text, cls)
            if not sp:
                skipped.append((cls, f, 'def span not found'))
                continue
            _start, _bstart, bend, _end = sp
            # X10 fix: block must END with a newline, otherwise the class's
            # closing `};` merges into the last line's trailing comment.
            block = '\n' + '\n'.join(lines) + '\n'
            new = text[:bend] + block + text[bend:]
            applied += len(add)
            files_touched += 1
            details.append({'file': f, 'class': cls, 'added': len(add)})
            if not args.dry:
                if not robust_write(p, new):
                    print('WRITE FAIL', f)
        # X25: fwd-decl hygiene per touched header (also when add == [] --
        # repairs standing supplies whose types were left undeclared).
        n_fwd = ensure_fwd_decls(p, dry=args.dry)
        if n_fwd:
            details.append({'file': f, 'class': '*fwd-hygiene*',
                            'added': n_fwd})
            files_touched += 1
    skip_reasons = defaultdict(int)
    for _c, _n, r in skipped:
        skip_reasons[r] += 1
    with open(X10 / 'x10_supply_log.json', 'w', encoding='utf-8') as f:
        json.dump({'applied': applied, 'files': files_touched,
                   'skipped': len(skipped),
                   'skip_reasons': dict(skip_reasons),
                   'details': details},
                  f, ensure_ascii=False, indent=1)
    print('supply: %d member declarations into %d authority headers '
          '(skipped %d: %s) dry=%s' % (
              applied, files_touched, len(skipped),
              ', '.join('%s=%d' % kv for kv in sorted(skip_reasons.items())),
              args.dry))
    return 0


def main():
    ap = argparse.ArgumentParser()
    sub = ap.add_subparsers(dest='cmd')
    p = sub.add_parser('report')
    p.set_defaults(fn=cmd_report)
    p = sub.add_parser('apply')
    p.add_argument('--dry', action='store_true')
    p.set_defaults(fn=cmd_apply)
    p = sub.add_parser('verify')
    p.set_defaults(fn=cmd_verify)
    p = sub.add_parser('dedup')
    p.add_argument('--dry', action='store_true')
    p.add_argument('--proposals', default=None)
    p.set_defaults(fn=cmd_dedup)
    p = sub.add_parser('supply')
    p.add_argument('--missing', default=None)
    p.add_argument('--dry', action='store_true')
    p.set_defaults(fn=cmd_supply)
    p = sub.add_parser('hygiene')
    p.add_argument('files', nargs='+')
    p.add_argument('--dry', action='store_true')
    p.set_defaults(fn=cmd_hygiene)
    args = ap.parse_args()
    if not getattr(args, 'fn', None):
        ap.print_help()
        return 2
    return args.fn(args)


if __name__ == '__main__':
    sys.exit(main())
