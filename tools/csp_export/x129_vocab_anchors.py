#!/usr/bin/env python3
"""x129_vocab_anchors.py — X129 shared passes for fresh-cache (x128) body landing.

Two orthogonal, deterministic, text-level passes (both idempotent):

1. VFptr vocabulary alignment (W1): freshly rendered bodies reference the
   repaired til's vptr members as `vfptr` / `vfptr1..N` (offset 0/4/8/...).
   The corpus carriers (X75 convention) declare those bytes as `ptr_0`,
   `ptr_4`, ... (or an exact byte-granular member for sub-dword accesses).
   This pass maps every vfptr access onto the receiver's carrier member:

     bare 4-byte access        -> member at 4N          (scalar types only)
     vtable slot call          -> corpus element form   (pointer/array members)
     LOBYTE/BYTEk(vfptrN)      -> exact byte member at 4N+k, else macro on member@4N
     &this->vfptrN             -> &this->member         (any member type)
     install `= (int)&X::vftable'` -> elided by caller (X11) before this pass

   Unmappable sites are never invented: the caller refuses the def.

2. Anchor re-attachment (W2): the x128 cache renders clean Hex-Rays output
   (no inline /*0xADDR*/), while the corpus convention keeps one anchor per
   statement.  This pass transfers anchors from a donor text (the old cache
   render, else the corpus body) onto the fresh render, statement-aligned:

     statement split -> normalized match -> difflib positional fallback.

No member is invented, no existing cast is altered, no count is fudged:
the caller asserts per-def anchor coverage before replacing anything.
"""
import difflib
import json
import os
import re
from collections import Counter, defaultdict, deque

# ---------------------------------------------------------------- anchors
ANCHOR_ANY = re.compile(r'/\*0x([0-9a-fA-F]+)\*/')
ANCHOR_END = re.compile(r'/\*0x([0-9a-fA-F]+)\*/\s*$')

# ---------------------------------------------------------------- carriers
MEM_RE = re.compile(
    r'^\s{2,8}(.+?)\s*\b([A-Za-z_]\w*)\s*(?:\[(\d+)\])?\s*;\s*'
    r'//\s*(?:0x)?([0-9A-Fa-f]+)\s*$')
STRUCT_RE = re.compile(r'^\s*(?:struct|class)\s+([A-Za-z_]\w*)\s*[:{]')

# ------------------------------------------------------- X136 til supplies
# Live til dump 2026-10-26 (gamemd.exe.i64, idc.get_type per label); evidence
# trail in .omo/x136/plan.md + w1e_fresh_context.txt.  The raw-label decls
# (ida_globals.h uchar/uint, force-included into every TU) conflict with the
# x130 fresh-cache renders' member access, so each of these globals gets an
# `<orig>_x136` typed ALIAS object (definitions: src/core/x136_til_alias_defs.cpp,
# per-TU externs emitted by rematerialize_defs.sweep_missing_globals).  This
# follows the g_BuildingLoadQueue_Array_flat/_host/_raw/_t family convention.
X136_ALIAS_SUFFIX = '_x136'
X136_TIL_ALIASES = {
    # ident: (carrier class, kind)  kind: value=object, ptr=null pointer object
    'stru_B0F5B8': ('DynamicVectorClass', 'value'),      # 0xB0F5B8 til DynamicVectorClass
    'g_BuildingLoadQueue_Array': ('DynamicVectorClass', 'value'),  # 0xB0E840 (render is DVC-shaped)
    'WeaponTypeClass_Array': ('WeaponTypeClass', 'value'),  # 0x887568 (til "T*" is a mis-guess; value object)
    'dword_A8B230': ('AbstractClass', 'ptr'),            # 0xA8B230 til AbstractClass*
    'dword_8871E0': ('RulesClass', 'ptr'),               # 0x8871E0 til RulesClass*
    'DSurface_Alternate': ('DSurface', 'ptr'),           # 0x887310 til DSurface*
    'stru_A8E3A8': ('MissionClass', 'value'),            # 0xA8E3A8 til MissionClass
}
# DynamicVector til-member aliases (live til vs corpus carrier -- the corpus
# carrier keeps its X55-era member names; byte geometry is identical):
# til_name -> (byte offset, element size in bytes)
X136_DYNAMICVECTOR_TIL_MEMBERS = {
    '__pad_0': (0x00, 1),
    'DynamicVector_field_0x1': (0x01, 1),
    '__pad_5': (0x05, 1),
    'DynamicVector_field_0x8': (0x08, 4),
    '__pad_C': (0x0C, 1),
    'DynamicVector_field_0x10': (0x10, 4),
    '__pad_14': (0x14, 1),
    'DynamicVector_field_0x1C': (0x1C, 4),
    '__pad_20': (0x20, 1),
    'DynamicVector_field_0x28': (0x28, 4),
}
# X136: per-class til-member tables (same convention).  Corpus carriers keep
# earlier-era member names (`_d` dedup suffixes); the fresh til render spells
# the semantic INI names.  All entries are live-til-dump evidence.
X136_TIL_MEMBERS = {
    'DynamicVector': X136_DYNAMICVECTOR_TIL_MEMBERS,
    'AnimTypeClass': {
        'MiddleFrameHeight': (0x29C, 4),        # corpus MiddleFrameHeight_d
        'AnimTypeClass_field_2A4': (0x2A4, 1),  # corpus scalar uchar
        'Damage': (0x2A8, 4),                   # corpus double -> halves
        'Start': (0x2B4, 4),                    # corpus Damage_d
        'LoopStart': (0x2B8, 4),                # corpus LoopStart_d
        'LoopEnd': (0x2BC, 4),                  # corpus LoopEnd_d
        'End': (0x2C0, 4),                      # corpus End_d
        'LoopCount': (0x2C4, 4),                # corpus LoopCount_d
        'Next': (0x2C8, 4),                     # corpus Next_d
        'SpawnsParticle': (0x2CC, 4),           # corpus SpawnsParticle_d
        'DetailLevel': (0x2D4, 4),              # corpus DetailLevel_d
        'TranslucencyDetailLevel': (0x2D8, 4),  # corpus ..._d
        'RandomLoopDelay': (0x2DC, 4),          # corpus char[8]
        'RandomRate': (0x2E4, 4),               # corpus char[8]
        'Translucency': (0x2EC, 4),             # corpus Translucency_d
        'Spawns': (0x2F0, 4),                   # corpus Spawns_d
        'SpawnCount': (0x2F4, 4),               # corpus SpawnCount_d
        'Report': (0x2F8, 4),                   # corpus Report_d
        'StopSound': (0x2FC, 4),                # corpus StopSound_d
        'BounceAnim': (0x300, 4),               # corpus BounceAnim_d
        'ExpireAnim': (0x304, 4),               # corpus ExpireAnim_d
        'TrailerAnim': (0x308, 4),              # corpus TrailerAnim_d
        'TrailerSeperation': (0x30C, 4),        # corpus TrailerSeperation_d
        'Elasticity': (0x310, 4),               # corpus Elasticity_d (double)
        'MinZVel': (0x318, 4),                  # corpus MinZVel_d (double)
        'AnimTypeClass_field_double_320': (0x320, 4),  # corpus double
        'MaxXYVel': (0x328, 4),                 # corpus double
        'Insignificant': (0x232, 1),            # corpus Insignificant_d
        'Immune': (0x233, 1),                   # corpus __pad_233
    },
    'SideClass': {
        'houseTypes': (0x098, 4),               # corpus houseTypes_d
        'houseTypesCount': (0x09C, 4),          # corpus houseTypesCount_d
        'field_A5': (0x0A5, 1),                 # corpus u8_A5
        'field_A8': (0x0A8, 4),                 # corpus u32_A8
    },
    'Skirmish': {
        'field_0': (0x00, 4),                   # corpus u32_0
    },
    'WeaponTypeClass': {
        'AssaultAnim': (0x114, 4),              # corpus AssaultAnim_d
        'OpenToppedAnim': (0x118, 4),           # corpus OpenToppedAnim_d
        'LaserInnerColor': (0x120, 1),          # corpus LaserInnerColor_d char[3]
        'UseFireParticles': (0x129, 1),         # corpus UseFireParticles_d
        'IsSonic': (0x130, 1),                  # corpus IsSonic_d
        'Spawner': (0x131, 1),                  # corpus Spawner_d
        'LimboLaunch': (0x132, 1),              # corpus LimboLaunch_d
        'DecloakToFire': (0x133, 1),            # corpus DecloakToFire_d
        'CellRangefinding': (0x134, 1),         # corpus CellRangefinding_d
        'NeverUse': (0x136, 1),                 # corpus NeverUse_d
        'RevealOnFire': (0x137, 1),             # corpus RevealOnFire_d
        'InfiniteMindControl': (0x140, 1),      # corpus InfiniteMindControl_d
        'FireWhileMoving': (0x141, 1),          # corpus FireWhileMoving_d
        'Suicide': (0x144, 1),                  # corpus Suicide_d
        'Supress': (0x146, 1),                  # corpus Supress_d
        'Camera': (0x147, 1),                   # corpus Camera_d
        'Charges': (0x148, 1),                  # corpus Charges_d
        'IsLaser': (0x149, 1),                  # corpus IsLaser_d
        'AreaFire': (0x150, 1),                 # corpus AreaFire_d
        'IsElectricBolt': (0x151, 1),           # corpus IsElectricBolt_d
        'DrawBoltAsLaser': (0x152, 1),          # corpus DrawBoltAsLaser_d
        'IsAlternateColor': (0x153, 1),         # corpus IsAlternateColor_d
    },
}
# Corpus carrier headers providing COMPLETE types for instances whose members
# the landed bodies dereference (e4 TU includes are selective; the sweep emits
# these when the body touches the instance).
X136_INSTANCE_HEADERS = {
    'stru_A8E960': 'e4/classes/ScenarioClass_e4.hpp',
    'stru_AC4B48': 'e4/classes/SidebarClass_e4.hpp',
    'stru_B0F670': 'e4/classes/DynamicVector_e4.hpp',
    'stru_A83CD9': 'e4/classes/_tree_full_e4.hpp',
    'stru_B0F5B8': 'e4/classes/_tree_full_e4.hpp',
    'dword_8871E0_x136': 'e4/classes/RulesClass_e4.hpp',
    'dword_A8B230_x136': 'e4/classes/AbstractClass_e4.hpp',
    'DSurface_Alternate_x136': 'e4/classes/DSurface_e4.hpp',
    'stru_A8E3A8_x136': 'e4/classes/MissionClass_e4.hpp',
    'WeaponTypeClass_Array_x136': 'e4/classes/WeaponTypeClass_e4.hpp',
    'g_BuildingLoadQueue_Array_x136': 'e4/classes/_tree_full_e4.hpp',
}
# Corpus members whose type diverges from the til's (same byte geometry):
# (class, member) -> rule.  'int-arith': til member is an integer, corpus
# member is a pointer -> value uses need `(int)` (compare/assign excluded,
# mirrors _sub_bare).  'dword-halves': corpus member is an 8-byte double,
# til member is int[2] -> `M[k]` becomes LODWORD/HIDWORD(M).
X136_TYPE_DIVERGENCE = {
    ('AbstractClass', 'uniqueId'): 'int-arith',
    ('RulesClass', 'BuildSpeed'): 'dword-halves',
    ('RulesClass', 'GDIWallDefense'): 'dword-halves',
    ('RulesClass', 'TunnelSpeed'): 'dword-halves',
    ('RulesClass', 'TiberiumHeal'): 'dword-halves',
}

_SCALAR_OK = re.compile(
    r'^(?:unsigned\s+int|int|unsigned|long|unsigned\s+long|short|'
    r'unsigned\s+short|char|unsigned\s+char|signed\s+char|long long|'
    r'unsigned long long|_DWORD|_WORD|_BYTE|BOOL|DWORD|WORD|BYTE)\b')
_PTR = re.compile(r'\*\s*$')
_ARR = re.compile(r'\[\d+\]\s*$')


def _decl_width(decl, arr):
    """(width_bytes, kind) kind in {'scalar','ptr','arr'}."""
    d = decl.strip()
    if arr:
        try:
            n = int(arr)
        except ValueError:
            n = 1
        return n, 'arr'
    if '*' in d:
        return 4, 'ptr'
    if re.search(r'\b(double|float)\b', d):
        return (8 if 'double' in d else 4), 'scalar'
    if re.search(r'\b__int64|long long\b', d):
        return 8, 'scalar'
    if re.search(r'\b(short|unsigned short|__int16|WORD)\b', d):
        return 2, 'scalar'
    if re.search(r'\b(char|unsigned char|__int8|BYTE|bool)\b', d):
        return 1, 'scalar'
    return 4, 'scalar'


def parse_carriers(classes_dir):
    """cls -> {offset: [(decl, name, width, kind)]} (all aliases kept)."""
    carriers = defaultdict(lambda: defaultdict(list))
    if not os.path.isdir(classes_dir):
        return carriers
    for fn in sorted(os.listdir(classes_dir)):
        if not fn.endswith('.hpp'):
            continue
        cur = None
        depth = 0
        with open(os.path.join(classes_dir, fn), encoding='utf-8',
                  errors='replace') as fh:
            for ln in fh:
                m = STRUCT_RE.match(ln)
                if m and cur is None:
                    cur = m.group(1)
                    depth = ln.count('{') - ln.count('}')
                    continue
                if cur is not None:
                    depth += ln.count('{') - ln.count('}')
                    if depth <= 0:
                        cur = None
                        depth = 0
                        continue
                    mm = MEM_RE.match(ln)
                    if mm:
                        w, kind = _decl_width(mm.group(1), mm.group(3))
                        carriers[cur][int(mm.group(4), 16)].append(
                            (mm.group(1).strip(), mm.group(2), w, kind))
    return carriers


# ---------------------------------------------------------------- vocab map
MACROS = {'LOBYTE': 0, 'BYTE1': 1, 'BYTE2': 2, 'HIBYTE': 3,
          'WORD1': 2, 'LOWORD': 0, 'HIWORD': 2}
BYTE_MACROS = ('LOBYTE', 'BYTE1', 'BYTE2', 'HIBYTE')
VF_TOKEN = re.compile(r'\b(vfptr)(\d*)\b')

# receiver -> vfptr, with preceding macro-capture done by the caller context
RECV_VF = re.compile(r'([A-Za-z_][\w]*(?:\[[^\]]*\])?(?:\.\w+\[[^\]]*\])*?)'
                     r'(->|\.)(vfptr)(\d*)\b')


def _member_at(carrier, off):
    return (carrier or {}).get(off) or []


def _pick(carrier, off, want):
    """Choose member alias at off: exact kind match first, else any."""
    ents = _member_at(carrier, off)
    if not ents:
        return None
    for e in ents:
        if e[3] == want:
            return e
    return ents[0]


class VocabMapper:
    def __init__(self, carriers, this_cls, globals_scalars=(), local_types=None,
                 globals_typed=None):
        self.carriers = carriers
        self.this_cls = this_cls
        self.globals_scalars = set(globals_scalars)
        self.locals = dict(local_types or {})
        self.globals_typed = dict(globals_typed or {})
        self.stats = defaultdict(int)
        self.unmapped = []

    # -- rewrite helpers -------------------------------------------------
    def _emit(self, recv_text, sep, name):
        """Corpus form for RECV<sep>Member.

        this -> `this->Name` (canonical corpus receiver); a declared-array
        global keeps pointer decay (`g->Name`); a struct-value receiver
        (array element or reference) uses dot; locals keep their own sep.
        X136: til-alias globals with kind 'value' are corpus OBJECTS --
        a rendered `->` must become `.` (the til's `T*` guess mis-typed
        them); 'ptr' keeps the rendered separator."""
        if recv_text == 'this':
            return 'this->' + name
        base = re.match(r'^([A-Za-z_]\w*)', recv_text)
        base_name = base.group(1) if base else recv_text
        kind = (getattr(self, 'x136_kinds', None) or {}).get(base_name)
        if kind == 'value':
            return recv_text + '.' + name
        if base_name in self.globals_typed:
            if '[' in recv_text:
                return recv_text + '.' + name       # array element (value)
            return recv_text + ('.' if sep == '.' else '->') + name
        # locals / anything else: keep the original separator
        return recv_text + sep + name

    def _carrier(self, recv, recv_kind):
        if recv == 'this':
            return self.carriers.get(self.this_cls or '')
        return None   # non-this receivers are resolved by caller-supplied info

    def map_text(self, text):
        """Rewrite vfptr vocabulary; returns (text, n_unmapped_sites)."""
        out = []
        for ln in text.split('\n'):
            out.append(self.map_line(ln))
        return '\n'.join(out), len(self.unmapped)

    def map_line(self, ln):
        if 'vfptr' not in ln:
            return ln
        changed = True
        guard = 0
        while changed and guard < 20:
            changed = False
            guard += 1
            new = self._map_line_once(ln)
            if new != ln:
                ln = new
                changed = True
        return ln

    def _map_line_once(self, ln):
        # 1. macro-wrapped accesses: MACRO(RECV->vfptrN)
        for mac in BYTE_MACROS:
            pat = re.compile(
                r'\b%s\s*\(\s*([A-Za-z_][\w]*(?:->\w+\[[^\]]*\])*?)\s*(->|\.)(vfptr)(\d*)\s*\)'
                % mac)
            m = pat.search(ln)
            if m:
                return self._sub_macro(ln, m, mac)
        # 2. address-of: &RECV->vfptrN
        m = re.search(r'&\s*([A-Za-z_][\w]*(?:\[[^\]]*\])?)(->|\.)(vfptr)(\d*)\b', ln)
        if m:
            return self._sub_addr(ln, m)
        # 3. vtable slot call: (CAST)(RECV->vfptr + N)
        m = re.search(
            r'\(\s*\*\s*\(\s*([A-Za-z_][^()]*(?:\([^()]*\))*)\)\s*\(\s*'
            r'([A-Za-z_][\w]*(?:\[[^\]]*\])?)\s*(->|\.)(vfptr)(\d*)\s*\+\s*(\d+)\s*\)',
            ln)
        if m:
            return self._sub_slotcall(ln, m)
        # 4. bare receiver access
        m = RECV_VF.search(ln)
        if m:
            return self._sub_bare(ln, m)
        return ln

    # -- resolvers ------------------------------------------------------
    def _resolve(self, recv, sep, n):
        """-> (cls, carrier) or (None, None) for unmappable receiver.

        Receiver order: `this`, body-typed locals, typed globals (declared
        as carrier-class objects/pointers/arrays in src headers)."""
        base = re.match(r'^([A-Za-z_]\w*)', recv)
        base_name = base.group(1) if base else recv
        if recv == 'this' or base_name == 'this':
            cls = self.this_cls
        elif recv in self.locals or base_name in self.locals:
            cls = self.locals.get(recv) or self.locals.get(base_name)
        elif base_name in self.globals_typed:
            cls = self.globals_typed[base_name]
        else:
            return None, None
        if not cls:
            return None, None
        return cls, self.carriers.get(cls)

    def _note_unmapped(self, ln, reason):
        self.stats['unmapped'] += 1
        self.unmapped.append((reason, ln.strip()[:160]))

    def _sub_macro(self, ln, m, mac):
        recv, sep, _vf, nd = m.group(1), m.group(2), m.group(3), m.group(4) or ''
        k = MACROS[mac]
        off = 4 * (int(nd) if nd else 0)
        cls, carrier = self._resolve(recv, sep, off)
        if carrier is None:
            self._note_unmapped(ln, 'macro-recv:' + recv)
            return ln
        tgt = off + k
        ent = _pick(carrier, tgt, 'scalar')      # exact byte member preferred
        if ent:
            self.stats['macro-exact'] += 1
            return ln[:m.start()] + '%s(%s)' % (mac, self._emit(recv, sep, ent[1])) \
                + ln[m.end():]
        ent = _pick(carrier, off, None)          # any member at base
        if ent:
            self.stats['macro-base'] += 1
            return ln[:m.start()] + '%s(%s)' % (mac, self._emit(recv, sep, ent[1])) \
                + ln[m.end():]
        self._note_unmapped(ln, 'macro-no-member@%X' % off)
        return ln

    def _sub_addr(self, ln, m):
        recv, sep, _vf, nd = m.group(1), m.group(2), m.group(3), m.group(4) or ''
        base = re.match(r'^([A-Za-z_]\w*)', recv)
        base_name = base.group(1) if base else recv
        if base_name in self.globals_scalars and base_name not in self.globals_typed:
            self.stats['addr-scalar-global'] += 1
            return ln[:m.start()] + '&' + recv + ln[m.end():]
        cls, carrier = self._resolve(recv, sep, 0)
        if carrier is None:
            self._note_unmapped(ln, 'addr-recv:' + recv)
            return ln
        off = 4 * (int(nd) if nd else 0)
        ent = _pick(carrier, off, None)
        if not ent:
            self._note_unmapped(ln, 'addr-no-member@%X' % off)
            return ln
        self.stats['addr'] += 1
        return ln[:m.start()] + '&' + self._emit(recv, sep, ent[1]) + ln[m.end():]

    def _sub_slotcall(self, ln, m):
        cast, recv, sep, _vf, nd, nbytes = m.groups()
        off = 4 * (int(nd) if nd else 0)
        base = re.match(r'^([A-Za-z_]\w*)', recv)
        base_name = base.group(1) if base else recv
        # scalar-global label used as a struct base (til renders the dword at
        # the label address as `.vfptr`): the slot table lives AT the label,
        # so the corpus form is `(*(CAST)&RECV + N/4)` -- the label address is
        # the table base (no invented cast: the render's own fn-ptr cast
        # provides the element stride).
        if (base_name in self.globals_scalars and base_name not in self.globals_typed
                and int(nbytes) % 4 == 0):
            self.stats['slot-scalar-global'] += 1
            return (ln[:m.start()] + '(*(%s)&%s + %d' %
                    (cast.strip(), recv, int(nbytes) // 4) + ln[m.end():])
        cls, carrier = self._resolve(recv, sep, off)
        if carrier is None:
            self._note_unmapped(ln, 'slot-recv:' + recv)
            return ln
        ent = _pick(carrier, off, None)
        if not ent:
            self._note_unmapped(ln, 'slot-no-member@%X' % off)
            return ln
        decl, name, w, kind = ent
        recv_expr = self._emit(recv, sep, name)
        cast = cast.strip()
        if off != 0:
            # secondary vtable slot call via vfptrN value
            self.stats['slot2'] += 1
            # X136 paren accounting (see slot-scalar above)
            return (ln[:m.start()] + '((%s)(%s) + %s' %
                    (cast, recv_expr, nbytes) + ln[m.end():])
        if kind == 'scalar':
            # scalar member VALUE + byte offset (int arithmetic)
            self.stats['slot-scalar'] += 1
            # X136 paren accounting: m.start() consumed the outer '(' of
            # `(*(CAST)(INNER))`; the trailing `)' of the outer group is kept
            # by the caller text, so the emit must open exactly one group.
            return (ln[:m.start()] + '((%s)(%s + %s)' %
                    (cast, recv_expr, nbytes) + ln[m.end():])
        # pointer/array member: corpus element form *(CAST)recv.M + N/4
        if int(nbytes) % 4:
            self._note_unmapped(ln, 'slot-nondiv4')
            return ln
        self.stats['slot-elem'] += 1
        # X136 paren accounting (see slot-scalar above)
        return (ln[:m.start()] + '((%s)%s + %d' %
                (cast, recv_expr, int(nbytes) // 4) + ln[m.end():])

    def _sub_bare(self, ln, m):
        recv, sep, _vf, nd = m.group(1), m.group(2), m.group(3), m.group(4) or ''
        off = 4 * (int(nd) if nd else 0)
        base = re.match(r'^([A-Za-z_]\w*)', recv)
        base_name = base.group(1) if base else recv
        if base_name in self.globals_scalars and base_name not in self.globals_typed:
            # scalar global used as base: semantic = RECV[0] is unreachable
            # without a cast; the corpus form is &RECV-based arithmetic.
            self._note_unmapped(ln, 'bare-scalar-global:' + recv)
            return ln
        cls, carrier = self._resolve(recv, sep, off)
        if carrier is None:
            self._note_unmapped(ln, 'bare-recv:' + recv)
            return ln
        ent = _pick(carrier, off, None)
        if not ent:
            self._note_unmapped(ln, 'bare-no-member@%X' % off)
            return ln
        decl, name, w, kind = ent
        pre = ln[:m.start()]
        post = ln[m.end():]
        recv_expr = self._emit(recv, sep, name)
        if kind in ('scalar',) and w >= 4:
            self.stats['bare-scalar'] += 1
            return pre + recv_expr + post
        if kind == 'ptr':
            # pointer member in a bare (integer-typed) use: the fresh render
            # typed the til member int, so the value use is integer
            # semantics -- the corpus form is (int)recv.M (same pattern the
            # corpus itself carries at these sites).  EXCEPT comparisons: an
            # int-compare on a pointer member must stay pointer-typed so
            # fix_pointer_compare can produce (void *)-1 (an int cast here
            # would create an int==void* mismatch instead).  X136: also
            # except ASSIGNMENT-LHS (`RECV.M = ...`) -- an lvalue must not
            # be cast (C2106).
            if re.match(r'\s*(==|!=|<|>|<=|>=)', post) or \
                    re.match(r'\s*=[^=]', post):
                self.stats['bare-ptr-cmp'] += 1
                return pre + recv_expr + post
            # X136 idempotence guard: a `(int)` we already emitted right
            # before this access must not stack (the rewritten text still
            # contains `recv.vfptr` when the corpus member is itself named
            # vfptr, e.g. DynamicVectorClass; re-matching would multiply the
            # cast up to the map_line guard).
            if re.search(r'\(\s*int\s*\)\s*$', pre):
                self.stats['bare-ptr-cast-kept'] += 1
                return pre + recv_expr + post
            self.stats['bare-ptr-cast'] += 1
            return pre + '(int)' + recv_expr + post
        # narrow member (byte-granular carrier layout): the corpus renders the
        # same instruction through the byte member (the old til typed these
        # bytes 1-wide; ReadBool-arg family sites are byte reads).  Arrays
        # need the [0] element form (the bare name would decay to a pointer).
        self.stats['bare-narrow-byte'] += 1
        if kind == 'arr':
            return pre + recv_expr + '[0]' + post
        return pre + recv_expr + post



# ------------------------------------------------------- comparison forms
def fix_pointer_compare(text, carriers, this_cls):
    """`this->M == -1` with pointer-typed M -> `== (void *)-1` (C2446 guard).
    Only fires when the member is a pointer, the operand is a bare -1, and
    the member access is not already integer-cast (`(int)this->M`)."""
    carrier = carriers.get(this_cls or '', {})
    out = text
    for off, ents in carrier.items():
        for decl, name, w, kind in ents:
            if kind != 'ptr':
                continue
            pat = re.compile(
                r'(->\s*%s\s*)(==|!=|<|>|<=|>=)\s*(-1\b)' % re.escape(name))

            def _sub(m):
                start = m.start()
                pre = out[:start]
                # guard: `(int)this->M` / `(unsigned int)this->M` -- the access
                # is already scalar-cast; adding (void *) would create an
                # int==void* mismatch (both passes fight).
                if re.search(r'\(\s*[\w\s]+\)\s*$', pre):
                    return m.group(0)
                return '%s%s (void *)-1' % (m.group(1), m.group(2))

            out = pat.sub(_sub, out)
    return out


# ------------------------------------------------------- X136 member passes
_x136_stats = defaultdict(int)
_x136_unresolved = []


def _x136_corpus_member_at(carrier, byte):
    """Corpus member whose storage STARTS at `byte`, else the member
    CONTAINING it (returns (ent, delta)).  (None, 0) if uncovered."""
    if not carrier:
        return None, 0
    ents = carrier.get(byte)
    if ents:
        return ents[0], 0
    best = None
    for off, es in carrier.items():
        for e in es:
            w = e[2] if e[2] else 1
            end = off + max(w, 1)
            if off < byte < end:
                if best is None or off > best[0]:
                    best = (off, e)
    if best:
        return best[1], byte - best[0]
    return None, 0


def _x136_member_off(carrier, name):
    for off, ents in (carrier or {}).items():
        for e in ents:
            if e[1] == name:
                return off
    return 0


def _x136_recv_cls(recv, globals_typed, locals_types, this_cls):
    base = re.match(r'^([A-Za-z_]\w*)', recv)
    base_name = base.group(1) if base else recv
    if recv == 'this' or base_name == 'this':
        return this_cls
    if recv in globals_typed or base_name in globals_typed:
        return globals_typed.get(recv) or globals_typed.get(base_name)
    if recv in locals_types or base_name in locals_types:
        return locals_types.get(recv) or locals_types.get(base_name)
    return None


def apply_x136_member_aliases(text, carriers, globals_typed,
                              locals_types=None, this_cls=None):
    """X136: rewrite til-render member vocabulary that the corpus carriers
    spell differently (DynamicVector til names vs X55-era corpus names) or
    type differently (til int vs corpus ptr / corpus double vs til int[2]).

    Byte-geometry preserving.  Anything unresolvable is left untouched and
    recorded in _x136_unresolved; such a site surfaces loudly at build time
    (no silent geometry drift).

    Returns (text, n_changed)."""
    locals_types = locals_types or {}
    watch = {}
    interesting = (lambda c: c in X136_TIL_MEMBERS
                   or any(k[0] == c for k in X136_TYPE_DIVERGENCE))
    if this_cls and interesting(this_cls):
        watch['this'] = this_cls
    for name, cls in list(locals_types.items()) + list(globals_typed.items()):
        if isinstance(cls, str) and interesting(cls):
            watch.setdefault(name, cls)
    if not watch:
        return text, 0

    recv_alt = '|'.join(sorted((re.escape(k) for k in watch),
                               key=len, reverse=True))
    n_changed = 0

    def _cls_of(recv):
        return watch.get(recv) or watch.get(
            (re.match(r'^([A-Za-z_]\w*)', recv) or [None] and [recv][0]
             and re.match(r'^([A-Za-z_]\w*)', recv).group(1)))

    # -- pass 1: dword-halves divergence  RECV.MEM[k] -> LODWORD/HIDWORD
    def _sub_halves(m):
        recv, sep, mem, k = m.group(1), m.group(2), m.group(3), int(m.group(4))
        cls = _cls_of(recv)
        if X136_TYPE_DIVERGENCE.get((cls, mem)) != 'dword-halves':
            return m.group(0)
        mac = 'LODWORD' if k == 0 else ('HIDWORD' if k == 1 else None)
        if mac is None:
            _x136_unresolved.append(('halves-k%d' % k, m.group(0)[:120]))
            return m.group(0)
        _x136_stats['halves'] += 1
        n_changed  # noqa: B018 (counted via stats; kept for symmetry)
        return '%s(%s%s%s)' % (mac, recv, sep, mem)

    text = re.sub(r'\b(%s)(->|\.)([A-Za-z_]\w*)\[(\d+)\]' % recv_alt,
                  _sub_halves, text)

    # -- pass 2: int-arith divergence  RECV.MEM (corpus ptr, til int)
    def _sub_intarith(m):
        recv, sep, mem = m.group(1), m.group(2), m.group(3)
        cls = _cls_of(recv)
        if X136_TYPE_DIVERGENCE.get((cls, mem)) != 'int-arith':
            return m.group(0)
        carrier = carriers.get(cls)
        ent = None
        for e in (carrier or {}).get(_x136_member_off(carrier, mem), []):
            ent = e
            break
        if ent is None or ent[3] != 'ptr':
            return m.group(0)
        post = m.string[m.end():]
        if re.match(r'\s*(==|!=|<|>|<=|>=)', post) or \
                re.match(r'\s*=[^=]', post):
            return m.group(0)
        _x136_stats['int-arith'] += 1
        return '(int)%s' % m.group(0)

    text = re.sub(r'\b(%s)(->|\.)([A-Za-z_]\w*)\b' % recv_alt,
                  _sub_intarith, text)

    # -- pass 3: DynamicVector til-member aliases
    def _sub_dv(m):
        recv, sep, mem = m.group(1), m.group(2), m.group(3)
        sub = m.group(4)[1:-1] if m.group(4) else None
        cls = _cls_of(recv)
        til = X136_DYNAMICVECTOR_TIL_MEMBERS.get(mem)
        if cls != 'DynamicVector' or til is None:
            return m.group(0)
        carrier = carriers.get('DynamicVector')
        off, esz = til
        byte = off + (int(sub) * esz if sub else 0)
        ent, delta = _x136_corpus_member_at(carrier, byte)
        if ent is None:
            _x136_unresolved.append(('dv-no-member@%X' % byte,
                                     m.group(0)[:120]))
            return m.group(0)
        _decl, name, w, kind = ent
        base = '%s%s%s' % (recv, sep, name)
        if sub:
            # byte-resolved element access on a byte-granular corpus member:
            # scalar byte at the member start -> drop the subscript
            if kind == 'scalar' and delta == 0:
                _x136_stats['dv-elem'] += 1
                return base
            _x136_unresolved.append(('dv-elem-shape', m.group(0)[:120]))
            return m.group(0)
        if mem == name:
            return m.group(0)
        _x136_stats['dv-bare'] += 1
        return base

    # -- pass 3a: deref form `*(T *)recv.MEM` (til array-decay semantics):
    # a scalar corpus member at that byte needs `&` before the receiver.
    # Whole-construct pass (re.sub can only rewrite the match span; folding
    # the prefix rewrite into the bare pass duplicates text).
    def _sub_dv_deref(m):
        cast, recv, sep, mem = m.group(1), m.group(2), m.group(3), m.group(4)
        cls = _cls_of(recv)
        til = X136_TIL_MEMBERS.get(cls, {}).get(mem)
        if til is None:
            return m.group(0)
        carrier = carriers.get(cls)
        off, _esz = til
        ent, delta = _x136_corpus_member_at(carrier, off)
        if ent is None:
            _x136_unresolved.append(('dv-deref-no-member@%X' % off,
                                     m.group(0)[:120]))
            return m.group(0)
        _decl, name, _w, kind = ent
        if kind == 'scalar':
            _x136_stats['dv-bare-addr'] += 1
            return '*(%s *)&%s%s%s' % (cast.strip(), recv, sep, name)
        if mem != name:
            _x136_stats['dv-bare'] += 1
            return '*(%s)%s%s%s' % (cast.strip(), recv, sep, name)
        return m.group(0)

    text = re.sub(r'\*\s*\(\s*([A-Za-z_][\w\s]*?)\s*\*\s*\)\s*'
                  r'(%s)(->|\.)([A-Za-z_]\w*)\b' % recv_alt,
                  _sub_dv_deref, text)

    # -- pass 3b: bare member forms (deref contexts already consumed)
    def _sub_dv_bare(m):
        recv, sep, mem = m.group(1), m.group(2), m.group(3)
        sub = m.group(4)[1:-1] if m.group(4) else None
        cls = _cls_of(recv)
        til = X136_TIL_MEMBERS.get(cls, {}).get(mem)
        if til is None:
            return m.group(0)
        carrier = carriers.get(cls)
        off, esz = til
        byte = off + (int(sub) * esz if sub else 0)
        ent, delta = _x136_corpus_member_at(carrier, byte)
        if ent is None:
            _x136_unresolved.append(('dv-no-member@%X' % byte,
                                     m.group(0)[:120]))
            return m.group(0)
        _decl, name, w, kind = ent
        base = '%s%s%s' % (recv, sep, name)
        if sub:
            # byte-resolved element access; the til ELEMENT WIDTH is esz:
            #  a) corpus scalar at the byte, width == esz -> drop subscript
            #  b) corpus 8-byte scalar (double) -> LODWORD/HIDWORD by delta
            #  c) til dword elem over a narrower corpus scalar -> deref form
            #  d) til dword elem inside a corpus char array -> deref at k'
            if kind == 'scalar' and delta == 0 and w == esz:
                _x136_stats['dv-elem'] += 1
                return base
            if kind == 'scalar' and w >= 8 and esz == 4:
                _x136_stats['dv-halves'] += 1
                return '%s(%s)' % ('LODWORD' if delta == 0 else 'HIDWORD',
                                   base)
            if kind == 'scalar' and esz == 4 and delta == 0 and w in (1, 2):
                _x136_stats['dv-elem-wide'] += 1
                return '*(unsigned int *)&%s' % base
            if kind == 'arr' and esz == 4:
                _x136_stats['dv-elem-arr'] += 1
                return '*(unsigned int *)&%s[%d]' % (base, delta)
            _x136_unresolved.append(('dv-elem-shape', m.group(0)[:120]))
            return m.group(0)
        if mem == name:
            return m.group(0)
        _x136_stats['dv-bare'] += 1
        return base

    text = re.sub(r'\b(%s)(->|\.)([A-Za-z_]\w*)((?:\[\d+\])?)' % recv_alt,
                  _sub_dv_bare, text)
    return text, n_changed


def monotonic_reattach(new_text, donor_text):
    """X136: HEAD-anchor completion.  When statement-level transfer cannot
    attach every donor anchor (Hex-Rays coalesced/refined statements), the
    remaining donor anchors are attached monotonically: each leftover anchor
    goes to the next unanchored fresh statement in text order (both renders
    share the function's statement order); if none remain, extras trail the
    last statement (render_stmts appends extras -- the corpus convention:
    position within a statement is not consumed downstream, the verifier
    strips anchors before event extraction).

    Returns (text, n_attached, n_anchors_after)."""
    ds = split_statements(donor_text)
    ns = split_statements(new_text)
    have = Counter(a for s in ns for a in s['anchors'])
    need = []
    for s in ds:
        for a in s['anchors']:
            if have.get(a, 0) > 0:
                have[a] -= 1
            else:
                need.append(a)
    if not need:
        return new_text, 0, sum(len(s['anchors']) for s in ns)
    idxs = [i for i, s in enumerate(ns) if not s['anchors'] and s['norm']]
    for k, a in enumerate(need):
        if k < len(idxs):
            ns[idxs[k]]['anchors'].append(a)
        else:
            for j in range(len(ns) - 1, -1, -1):
                if ns[j]['norm']:
                    ns[j]['anchors'].append(a)
                    break
    total = sum(len(s['anchors']) for s in ns)
    return render_stmts(ns), len(need), total


# ---------------------------------------------------------------- anchors
def split_statements(text):
    """Split body text into statements. Returns list of
    {'lines': [...], 'anchors': [addr_str,...], 'norm': str}."""
    stmts = []
    cur = []

    def flush():
        if not cur:
            return
        blob = '\n'.join(cur)
        anchors = ANCHOR_ANY.findall(blob)
        norm = ANCHOR_ANY.sub('', blob)
        norm = re.sub(r'//[^\n]*', '', norm)      # register/comment churn
        norm = re.sub(r'\s+', '', norm)
        stmts.append({'lines': list(cur), 'anchors': anchors, 'norm': norm})
        cur.clear()

    depth = 0   # paren/bracket depth (suppresses `;` inside for(...) etc.)
    brace = 0   # brace depth (block structure only)
    for ln in text.split('\n'):
        code = re.sub(r'//.*$', '', ln)
        code = re.sub(r'/\*.*?\*/', '', code)
        cur.append(ln)
        for ch in code:
            if ch in '([':
                depth += 1
            elif ch in ')]':
                depth = max(0, depth - 1)
            elif ch == ';' and depth == 0:
                flush()
            elif ch == '{':
                brace += 1
            elif ch == '}':
                brace = max(0, brace - 1)
        st = code.strip()
        if st.endswith('{') or st == '}' or st.endswith('}'):
            flush()
    flush()
    return stmts


def render_stmts(stmts):
    out = []
    for s in stmts:
        lines = list(s['lines'])
        if s['anchors'] and not any('/*0x' in l for l in lines):
            # anchor trails the statement's last line (corpus single-line
            # convention; multi-line statements keep count, position within
            # the statement is not consumed downstream — the verifier strips
            # anchors before event extraction)
            for extra in reversed(s['anchors'][1:]):
                lines[-1] = lines[-1].rstrip() + '  /*0x%s*/' % extra
            lines[-1] = lines[-1].rstrip() + '  /*0x%s*/' % s['anchors'][0]
        out.extend(lines)
    return '\n'.join(out)


def transfer_anchors(new_text, donor_text):
    """Attach donor anchors onto new_text statements.

    Matching: exact normalized statement text, difflib positional alignment,
    then leading-token prefix matching (statement starts survive re-renders
    better than full text).  ALL anchors of a matched donor statement
    transfer.  Returns (text, stats)."""
    dstats = {'exact': 0, 'pos': 0, 'prefix': 0, 'lost': 0, 'donor-anchors': 0}
    ds = split_statements(donor_text)
    ns = split_statements(new_text)
    dstats['donor-anchors'] = sum(len(s['anchors']) for s in ds)
    by_norm = defaultdict(deque)
    for s in ds:
        if s['anchors']:
            by_norm[s['norm']].append(list(s['anchors']))
    # pass 1: exact norm match
    for s in ns:
        if s['anchors'] or not s['norm']:
            continue
        q = by_norm.get(s['norm'])
        if q:
            s['anchors'].extend(q.popleft())
            dstats['exact'] += 1
    # pass 2: difflib positional over sequences
    sm = difflib.SequenceMatcher(None, [s['norm'] for s in ds],
                                 [s['norm'] for s in ns], autojunk=False)
    unmatched_old = []
    unmatched_new = []
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == 'equal':
            continue
        if tag == 'replace' and (i2 - i1) == (j2 - j1):
            for k in range(j2 - j1):
                so, sn = ds[i1 + k], ns[j1 + k]
                if sn['anchors'] or not so['anchors'] or not sn['norm']:
                    continue
                sn['anchors'].extend(so['anchors'])
                dstats['pos'] += 1
            continue
        unmatched_old.extend(i for i in range(i1, i2) if ds[i]['anchors'])
        unmatched_new.extend(j for j in range(j1, j2)
                             if not ns[j]['anchors'] and ns[j]['norm'])
    # pass 3: leading-token prefix match (first 20 norm chars), unique both sides
    from collections import Counter as _C
    old_by_pref = defaultdict(list)
    for i in unmatched_old:
        old_by_pref[ds[i]['norm'][:20]].append(i)
    pref_counts = _C(ds[i]['norm'][:20] for i in unmatched_old)
    new_pref_counts = _C(ns[j]['norm'][:20] for j in unmatched_new)
    for j in list(unmatched_new):
        pref = ns[j]['norm'][:20]
        if (pref_counts.get(pref) == 1 and new_pref_counts.get(pref) == 1
                and len(old_by_pref[pref]) == 1):
            i = old_by_pref[pref][0]
            ns[j]['anchors'].extend(ds[i]['anchors'])
            dstats['prefix'] += 1
            unmatched_new.remove(j)
            unmatched_old.remove(i)
    # pass 4: greedy similarity pairing (>= 0.55) over the leftovers
    unmatched_old = sorted(set(unmatched_old))
    unmatched_new = sorted(set(unmatched_new))
    pair = []
    for i in unmatched_old:
        best = None
        for j in unmatched_new:
            r = difflib.SequenceMatcher(None, ds[i]['norm'],
                                        ns[j]['norm']).ratio()
            if r >= 0.55 and (best is None or r > best[0]):
                best = (r, j)
        if best is not None:
            pair.append((best[0], i, best[1]))
    for _, i, j in sorted(pair, key=lambda t: -t[0]):
        if i in unmatched_old and j in unmatched_new:
            ns[j]['anchors'].extend(ds[i]['anchors'])
            dstats['prefix'] += 1
            unmatched_old.remove(i)
            unmatched_new.remove(j)
    moved = dstats['exact'] + dstats['pos'] + dstats['prefix']
    total = sum(len(s['anchors']) for s in ns)
    dstats['lost'] = max(0, dstats['donor-anchors'] - total)
    dstats['attached'] = total
    return render_stmts(ns), dstats
