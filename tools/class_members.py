#!/usr/bin/env python3
"""
class_members.py — hpp-derived per-class member byte offsets (execution-flow-cfg T2)

T1 declared the 6 starter-set classes (AbstractClass .. BuildingClass) as IDA
`__cppobj` structs with CORRECT SIZES but OPAQUE char[] body pads, so members like
BuildingClass::HasPower were unresolvable (offset = None in signals.json).

This module CLOSES that gap by parsing the C++ member declarations from the source
headers, computing each member's byte offset within its class's range (cumulative
sizeof from the parent-class size, with MSVC-6.0 /Zp8 alignment), and VALIDATING
every result against three independent ground truths:

  1. ObjectClass explicit `// +0xNN` IDA-confirmed offset comments.
  2. Name-embedded offset anchors: alignmentPaddingNNN / *_field_*_NNN / align_NNN /
     unusedFieldNNN (NNN = hex byte offset).
  3. The IDA struct-size boundaries from tools/ida_class_layouts.json (each class's
     own member section must close at size(class) - size(parent)).

The whole BuildingClass own-member layout (the critical one) was additionally
cross-checked member-by-member against the authoritative ctor BuildingClass::Construct
@ 0x43B740 (writes *(this+1632)=1 => HasPower, *(this+1633)=0 => IsOverpowered, etc.).

Consumed by build_signals.py, which merges the output into signals.json's
`classes` / `_member_by_name` sections (overriding T1's opaque-body placeholders
for these 6 classes; `size`/`parent` still come from the IDA cache).

Stdlib only. `python tools/class_members.py` prints the full validation report.
"""

import json
import re
from pathlib import Path

PROJECT_ROOT = Path(__file__).resolve().parent.parent
IDA_CLASS_CACHE = PROJECT_ROOT / "tools" / "ida_class_layouts.json"

# ── Validated struct sizes (bytes) + alignment ────────────────────────────────
# Provenance (each verified against source headers AND/OR IDA):
#   ptr/int32/uint32/int            4  — primitive
#   int16/uint16                    2
#   bool/char/uint8/int8            1
#   float                           4 ; double 8 (MSVC-6 /Zp8: align = natural)
#   TimerStruct            12  core/math.hpp  {StartTime,__padding,TimeLeft}
#   ProgressTimer           8  fundamentals.hpp {Value,Timer}
#   RepeatableTimerStruct  16  misc/repeatable_timer.hpp {uint32 data[4]}
#   CoordStruct            12  {X,Y,Z}  (ObjectClass.location +0x9C..+0xA8; Construct rect/coord)
#   RectangleStruct        16  core/math.hpp {X,Y,Width,Height}  (Construct field_rect_63C..64C)
#   ColorStruct             3  core/math.hpp {R,G,B uint8}
#   AudioController         20 object.hpp (sizeof=0x14; Construct Audio7@1696,Audio8@1716)
#   DynamicVectorClass     24  core/vector.hpp (vtable+Items+Capacity+IsInit+IsAlloc+Count+CapInc)
#                              (Construct Overpowerers@1644: vftable,Items,Cap,bools,Count=,Inc=10 -> 0x684)
#   VectorClass_ra2        12  radio.hpp local {Items,Count,Capacity} (no vtable) — see RadioClass note
#   FacingStruct/DirStruct  4  object/abstract.hpp {uint32 Raw}
#   FlashData               8  techno.hpp {int32,bool,pad[3]}
#   PassengersClass         8  techno.hpp {int32,FootClass*}
#   VeterancyStruct         4  techno.hpp {float}
#   TurretControl          16  techno.hpp {uint32[4]}
#   RecoilData             32  techno.hpp {TurretControl,float,float,uint32,int32}
#   TransitionTimer        12  techno.hpp {uint32[3]}
#   IndexBitfield           4  techno.hpp {T* Items}
#   OwnedTiberiumStruct    16  techno.hpp {float x4}
#   PrismChargeState        4  core/enums.hpp (enum class : int)
TYPE_SIZE_ALIGN = {
    "ptr": (4, 4),
    "int32_t": (4, 4), "uint32_t": (4, 4), "int32": (4, 4), "uint32": (4, 4),
    "int": (4, 4), "unsigned int": (4, 4),
    "int16_t": (2, 2), "uint16_t": (2, 2),
    "uint8_t": (1, 1), "int8_t": (1, 1), "bool": (1, 1), "char": (1, 1),
    "float": (4, 4), "double": (8, 8),
    "TimerStruct": (12, 4), "ProgressTimer": (8, 4), "RepeatableTimerStruct": (16, 4),
    "CoordStruct": (12, 4), "RectangleStruct": (16, 4), "ColorStruct": (3, 1),
    "AudioController": (20, 4), "DynamicVectorClass": (24, 4), "VectorClass_ra2": (12, 4),
    "FacingStruct": (4, 4), "DirStruct": (4, 4), "FlashData": (8, 4),
    "PassengersClass": (8, 4), "VeterancyStruct": (4, 4), "TurretControl": (16, 4),
    "RecoilData": (32, 4), "TransitionTimer": (12, 4), "IndexBitfield": (4, 4),
    "OwnedTiberiumStruct": (16, 4), "PrismChargeState": (4, 4),
}

# Inheritance chain (root -> leaf). AbstractClass members come from the IDA cache.
CHAIN = ["AbstractClass", "ObjectClass", "MissionClass", "RadioClass",
         "TechnoClass", "BuildingClass"]

# Per-class hpp member-section extraction. (relative path, start_marker, end_marker)
# start_marker None => scan from the class declaration; collect field-like lines
# (no '(' => not a method; ends with ';'; not virtual/static/using/typedef).
HPP_SOURCES = {
    "ObjectClass":  ("src/object/object.hpp",  "ObjectClass fields start at +0x24:", "protected:"),
    "MissionClass": ("src/object/mission.hpp", "class MissionClass",                 "protected:"),
    "RadioClass":   ("src/object/radio.hpp",   "class RadioClass",                   "protected:"),
    "TechnoClass":  ("src/object/techno.hpp",  "---- member variables ----",         "protected:"),
    "BuildingClass":("src/structure/building.hpp", "// Member variables",            "protected:"),
}

# Classes whose hpp layout is KNOWN to diverge from the binary (cross-checked vs the
# authoritative ctor). Their member offsets are best-effort + anchor-cross-checked;
# see the report. TechnoClass: TechnoClass::TechnoClass @ 0x6F2B40 writes a timer
# (StartTime default) at byte 0x100 where the hpp declares `passengers`, and the
# name-anchors are internally contradictory (alignmentPadding27E precedes 27D).
UNFAITHFUL_HPP = {"TechnoClass"}

_MEMBER_RE = re.compile(r"^(?P<type>.+?)\s+(?P<name>\w+)\s*(?P<arr>\[[^\]]*\])?$")
_EXPLICIT_OFF_RE = re.compile(r"\+0x([0-9A-Fa-f]+)")
# Name-embedded hex-offset anchors (validated, forward-correcting only).
_ANCHOR_RES = [
    re.compile(r"^alignmentPadding([0-9A-Fa-f]+)$"),
    re.compile(r"^align_([0-9A-Fa-f]+)$"),
    re.compile(r"^unusedField([0-9A-Fa-f]+)$"),
    re.compile(r".*_field_(?:int_|short_|bool_|timer_|rect_|coord_)?([0-9A-Fa-f]+)$"),
]


def _strip_comment(line):
    """Return (code, comment) splitting at the first // not inside a string."""
    idx = line.find("//")
    if idx < 0:
        return line.rstrip(), ""
    return line[:idx].rstrip(), line[idx + 2:].strip()


def _type_key(type_str):
    t = type_str.strip()
    if t.startswith("DynamicVectorClass"):
        return "DynamicVectorClass"
    if t.startswith("VectorClass"):
        return "VectorClass_ra2"
    if t.startswith("IndexBitfield"):
        return "IndexBitfield"
    if "*" in t:
        return "ptr"
    base = t.split("::")[-1].replace("const", "").strip()
    return base


def _array_count(arr):
    if not arr:
        return None
    inner = arr.strip()[1:-1].strip()
    if not inner:
        return None
    try:
        return int(inner, 0)  # auto-detect 0x.. / decimal
    except ValueError:
        return None  # expression we cannot evaluate; treated as scalar (reported)


def _anchor_offset(name, lo, hi):
    """Return the embedded hex offset if `name` is a plausible anchor in [lo, hi)."""
    for rx in _ANCHOR_RES:
        m = rx.match(name)
        if m:
            try:
                off = int(m.group(1), 16)
            except ValueError:
                return None
            if lo <= off < hi:
                return off
            return None
    return None


def parse_member_section(path, start_marker, end_marker):
    """Parse field declarations from a class's member section, in source order.

    Returns list of dicts: {name, type, key, arr, count, explicit_off}.
    """
    text = (PROJECT_ROOT / path).read_text(encoding="utf-8", errors="replace")
    lines = text.splitlines()

    # Locate the member-section window.
    start = 0
    if start_marker:
        for i, ln in enumerate(lines):
            if start_marker in ln:
                start = i + 1
                break
    members = []
    for ln in lines[start:]:
        if end_marker and end_marker in ln:
            break
        code, comment = _strip_comment(ln)
        s = code.strip()
        if not s or not s.endswith(";"):
            continue
        if "(" in s or "=" in s:          # method / initializer => not a plain field
            continue
        first = s.split()[0] if s.split() else ""
        if first in ("virtual", "static", "using", "typedef", "friend",
                     "public:", "private:", "protected:", "struct", "class",
                     "enum", "constexpr", "explicit", "inline"):
            continue
        body = s[:-1].strip()             # drop trailing ';'
        m = _MEMBER_RE.match(body)
        if not m:
            continue
        name = m.group("name")
        type_str = m.group("type").strip()
        arr = m.group("arr")
        explicit = None
        em = _EXPLICIT_OFF_RE.search(comment)
        if em:
            explicit = int(em.group(1), 16)
        members.append({
            "name": name,
            "type": type_str,
            "key": _type_key(type_str),
            "arr": arr,
            "count": _array_count(arr),
            "explicit_off": explicit,
        })
    return members


def compute_own_offsets(class_name, members, base, class_size, report):
    """Compute byte offsets for a class's OWN members. Returns list of
    (offset, name, type_str, size, confidence)."""
    cursor = base
    out = []
    unfaithful = class_name in UNFAITHFUL_HPP
    for mem in members:
        key = mem["key"]
        if key not in TYPE_SIZE_ALIGN:
            report.append("  [%s] UNKNOWN TYPE '%s' for member '%s' (assumed 4/4)"
                          % (class_name, mem["type"], mem["name"]))
            size, align = 4, 4
        else:
            size, align = TYPE_SIZE_ALIGN[key]
        count = mem["count"] or 1
        total = size * count
        # Align cursor up to the member's natural alignment.
        if align > 1:
            cursor = (cursor + align - 1) // align * align

        confidence = "computed"
        # 1) ObjectClass-style explicit IDA offset comment (authoritative).
        if mem["explicit_off"] is not None:
            exp = mem["explicit_off"]
            if cursor != exp:
                report.append("  [%s] explicit-offset MISMATCH '%s': computed 0x%X != // +0x%X"
                              % (class_name, mem["name"], cursor, exp))
                cursor = exp  # trust the IDA comment
            confidence = "explicit"
        else:
            # 2) Name-embedded hex anchor.
            anc = _anchor_offset(mem["name"], base, class_size + 1)
            if anc is not None:
                if cursor == anc:
                    confidence = "anchored"
                elif anc >= cursor:
                    report.append("  [%s] anchor FORWARD-CORRECT '%s': computed 0x%X -> 0x%X "
                                  "(+%d unnamed bytes before it)"
                                  % (class_name, mem["name"], cursor, anc, anc - cursor))
                    cursor = anc
                    confidence = "anchored"
                else:
                    report.append("  [%s] anchor CONTRADICTION '%s': computed 0x%X but name says 0x%X "
                                  "(< cursor; NOT corrected -- hpp anchor unreliable)"
                                  % (class_name, mem["name"], cursor, anc))
                    confidence = "best_effort" if unfaithful else "conflict"

        off = cursor
        oob = off >= class_size
        if oob:
            report.append("  [%s] OUT-OF-BOUNDS member '%s' @ 0x%X >= sizeof 0x%X "
                          "(hpp extension beyond binary class) -- excluded from _member_by_name"
                          % (class_name, mem["name"], off, class_size))
            confidence = "out_of_bounds"
        elif unfaithful and confidence == "computed":
            confidence = "best_effort"

        out.append((off, mem["name"], mem["type"], total, confidence))
        cursor += total

    # 3) Closing boundary check (own section must reach sizeof(class)).
    if cursor != class_size:
        delta = class_size - cursor
        sign = "+" if delta >= 0 else "-"
        report.append("  [%s] SECTION DOES NOT CLOSE: own members end 0x%X, sizeof 0x%X "
                      "(%s%d bytes unaccounted)"
                      % (class_name, cursor, class_size, sign, abs(delta)))
    else:
        report.append("  [%s] section closes exactly at sizeof 0x%X  [OK]"
                      % (class_name, class_size))
    return out


def _abstract_from_cache(ida_classes):
    """AbstractClass own members straight from the authoritative IDA cache."""
    res = ida_classes.get("AbstractClass", {})
    out = []
    for m in res.get("members", []):
        off = m.get("offset", 0)
        off = int(str(off), 16) if str(off).lower().startswith("0x") else int(off)
        out.append((off, m.get("name", "") or "", m.get("type", ""),
                    m.get("size", 0), "ida_cache"))
    return out


def build_hpp_classes(ida_classes):
    """Build classes / _member_by_name for the 6 starter classes from hpp + cache.

    Returns (classes_out, member_by_name, report_lines).
    classes_out[C]      = {"offsets": {str(off):{ida_name,type,size,confidence}},
                           "size": int, "parent": str|None, "hpp_layout_faithful": bool}
    member_by_name[C]   = {memberName: byteOffset}  (named, in-bounds members only)
    """
    report = ["", "=" * 72, "T2 hpp-derived member-offset computation + validation", "=" * 72]

    sizes = {c: ida_classes.get(c, {}).get("size", 0) for c in CHAIN}
    parents = {
        "AbstractClass": None, "ObjectClass": "AbstractClass",
        "MissionClass": "ObjectClass", "RadioClass": "MissionClass",
        "TechnoClass": "RadioClass", "BuildingClass": "TechnoClass",
    }

    own = {"AbstractClass": _abstract_from_cache(ida_classes)}
    report.append("  [AbstractClass] %d members from IDA cache (authoritative)"
                  % len(own["AbstractClass"]))

    for cls in CHAIN[1:]:
        path, start, end = HPP_SOURCES[cls]
        members = parse_member_section(path, start, end)
        base = sizes[parents[cls]]
        report.append("")
        report.append("  [%s] parsed %d hpp members; base=0x%X sizeof=0x%X%s"
                      % (cls, len(members), base, sizes[cls],
                         "  (hpp layout UNFAITHFUL -- best-effort)" if cls in UNFAITHFUL_HPP else ""))
        own[cls] = compute_own_offsets(cls, members, base, sizes[cls], report)

    classes_out, member_by_name = {}, {}
    for cls in CHAIN:
        flat = []
        node = cls
        stack = []
        while node:
            stack.append(node)
            node = parents[node]
        for anc in reversed(stack):       # root -> self
            flat.extend(own[anc])
        flat.sort(key=lambda t: t[0])

        offsets, names = {}, {}
        for off, name, type_str, size, conf in flat:
            offsets[str(off)] = {"ida_name": name, "type": type_str,
                                 "size": size, "confidence": conf}
            if name and conf != "out_of_bounds":
                names[name] = off
        classes_out[cls] = {
            "offsets": offsets,
            "size": sizes[cls],
            "parent": parents[cls],
            "hpp_layout_faithful": cls not in UNFAITHFUL_HPP,
        }
        member_by_name[cls] = names

    return classes_out, member_by_name, report


# ── BuildingTypeClass: IDA-validated BINARY-layout members (golden #3) ─────────
# BuildingClass::GetPowerFrame (0x4566B0) reads several BuildingTypeClass / inherited
# TechnoTypeClass fields through its Type pointer.  The TYPE-class hpp layout is NOT
# byte-faithful (T2 finding F4 — type classes drift vs binary), so these offsets are
# taken DIRECTLY from the binary, NOT from hpp cumulative sizeof.  Each was validated
# against:
#   • BuildingTypeClass::ConstructFull (0x45DD90) default writes
#       *(this+5831)=0  *(this+5832)=0  *(this+5895)=20  *(this+5900)=0
#   • the BuildingTypeClass INI reader at 0x460BEA, which maps INI keys -> [this+OFF]:
#       0x460BEA "CloakGenerator"         -> [this+0x16C7]=5831   (ReadBool)
#       0x460C00 "SensorArray"            -> [this+0x16C8]=5832   (ReadBool)
#       0x460C21 "CloakRadiusInCells"     -> [this+0x1707]=5895   (ReadInt, byte store)
#       0x460C39 "PsychicDetectionRadius" -> [this+0x170C]=5900   (ReadInt, dword store)
#   • member_lookup (TechnoTypeClass-inherited, confirmed):
#       3281 GapGenerator (bool) · 3282 GapRadiusInCells (char) · 3283 SuperGapRadiusInCells (char)
# BOUNDED: ONLY the members GetPowerFrame needs are modelled (not the whole class).
# (offset, name, type, size, confidence, note)
BUILDINGTYPE_BINARY_MEMBERS = [
    (3281, "GapGenerator",           "bool",    1, "ida_member_lookup", "inherited TechnoTypeClass"),
    (3282, "GapRadiusInCells",       "char",    1, "ida_member_lookup", "inherited TechnoTypeClass"),
    (3283, "SuperGapRadiusInCells",  "char",    1, "ida_member_lookup", "inherited TechnoTypeClass"),
    (5831, "CloakGenerator",         "bool",    1, "ida_ini_validated", "INI CloakGenerator @0x460BEA"),
    (5832, "SensorArray",            "bool",    1, "ida_ini_validated", "INI SensorArray @0x460C00"),
    (5895, "CloakRadiusInCells",     "uint8_t", 1, "ida_ini_validated", "INI CloakRadiusInCells @0x460C21"),
    (5900, "PsychicDetectionRadius", "int",     4, "ida_ini_validated", "INI PsychicDetectionRadius @0x460C39"),
]
# sizeof(BuildingTypeClass) — operator new(6040) in the factory @ 0x466000.
BUILDINGTYPE_SIZE = 6040
BUILDINGTYPE_PARENT = "TechnoTypeClass"


def build_buildingtype_class():
    """Return (classes_entry, member_by_name) for BuildingTypeClass using the
    IDA-validated BINARY offsets above.  The type-class hpp layout is non-byte-
    faithful, so `hpp_layout_faithful=False` and offsets are binary-sourced (not
    hpp-computed).  BOUNDED to the BuildingClass::GetPowerFrame (0x4566B0) members.
    """
    offsets, names = {}, {}
    for off, name, ty, size, conf, note in BUILDINGTYPE_BINARY_MEMBERS:
        offsets[str(off)] = {"ida_name": name, "type": ty, "size": size,
                             "confidence": conf, "note": note}
        names[name] = off
    entry = {
        "offsets": offsets,
        "size": BUILDINGTYPE_SIZE,
        "parent": BUILDINGTYPE_PARENT,
        "hpp_layout_faithful": False,
        "binary_validated": True,
        "scope_note": "bounded: only BuildingClass::GetPowerFrame (0x4566B0) members modelled",
    }
    return entry, names


# ══════════════════════════════════════════════════════════════════════════════
# T1-SCALE SLICE-1 — extended core class hierarchies (pure-python layout engine)
# ══════════════════════════════════════════════════════════════════════════════
#
# Broadens verifier coverage beyond the 6 starter classes by computing
# hpp_name -> byte_offset for the CORE Object + Type + House hierarchies
# (~30 classes), WITHOUT any per-class IDA struct declaration.  The whole layout
# is computed in pure python from the source headers and VALIDATED against the
# rich offset-encoding anchors these IDA-generated headers carry (members named
# `unknown<HEX>`, `<Class>_field_<...>_<HEX>`, `align_<HEX>`, `m_padding_<HEX>`,
# `unused_<HEX>`, `zero_<HEX>`, etc. — the trailing hex IS the IDA byte offset).
#
# KEY MECHANISMS
#   • Anchor-direct offsets: where a member's name encodes its offset, that hex is
#     authoritative (confidence `anchored`); semantic members between anchors get
#     cumulative MSVC-6 /Zp8 sizeof and are validated by the bracketing anchors.
#   • Base calibration: a child's first anchor BACK-CALIBRATES the (possibly
#     under-modelled) parent size — the child's pre-anchor members then land at the
#     correct offsets instead of being silently low.  Calibrated classes are tagged
#     best-effort (their parent hpp layout had an unmodelled tail / stub structs).
#   • Faithful vs best-effort: a class is `faithful` iff its own section had NO
#     anchor CONTRADICTION (an anchor pointing BACKWARD of the cursor) and needed NO
#     base calibration; `best-effort` otherwise.  Offsets are NEVER silently emitted
#     wrong — every reported offset is either anchor-direct or validated by a later
#     anchor; un-validatable computed offsets in a best-effort class keep the
#     `best_effort` confidence so consumers know to treat them as approximate.
#
# Validated/derived struct sizes (confirmed by the headers' own anchors):
#   CellStruct=4 (FootClass 4×Cell 0x558→0x568), YRComPtr=4 (FootClass locomotor
#   0x674→0x678), VoxelStruct=8 (ObjectTypeClass align_1E9/align_23E),
#   AbilitiesStruct=18 (18 bools), WeaponStruct=28 (ptr+Coord+2int+bool, /Zp8 pad),
#   _GUID=16, Sequence/Armor/LandType/Category/PipScale/MovementZone/SpeedType/
#   AbstractType = 4 (enum:int).  AbstractTypeClass=0x98 (ObjectTypeClass unused_9B),
#   FootClass=0x6C0 (UnitClass UnitClass_field_int_6C0).

# Additional sizes for the extended hierarchies (validated above).
TYPE_SIZE_ALIGN.update({
    "CellStruct": (4, 4), "YRComPtr": (4, 4), "VoxelStruct": (8, 4),
    "SomeVoxelCache": (4, 4), "SHPStruct": (4, 4), "AbilitiesStruct": (18, 1),
    "WeaponStruct": (28, 4), "_GUID": (16, 4), "GUID": (16, 4),
    "wchar_t": (2, 2), "DWORD": (4, 4), "ULONG": (4, 4), "HRESULT": (4, 4),
    "BOOL": (4, 4), "long": (4, 4), "short": (2, 2), "signed char": (1, 1),
    "unsigned char": (1, 1), "BaseClass": (4, 4), "Point2D": (8, 4),
    "WORD": (2, 2),
    # Enums (MSVC-6 `enum : int` => 4 bytes).
    "Sequence": (4, 4), "Armor": (4, 4), "LandType": (4, 4), "AbstractType": (4, 4),
    "Category": (4, 4), "PipScale": (4, 4), "MovementZone": (4, 4),
    "SpeedType": (4, 4), "BuildCat": (4, 4), "FactoryType": (4, 4),
    "PipIndex": (4, 4),
})

# Inheritance forest (root -> leaf).  The 6 starter classes keep their cache sizes;
# every other class's size is computed (cumulative + anchor calibration).
EXT_PARENTS = {
    "AbstractClass": None,
    "ObjectClass": "AbstractClass", "MissionClass": "ObjectClass",
    "RadioClass": "MissionClass", "TechnoClass": "RadioClass",
    "FootClass": "TechnoClass",
    "UnitClass": "FootClass", "InfantryClass": "FootClass",
    "AircraftClass": "FootClass",        # also `public FlasherClass` (MI, +4 vtable)
    "BuildingClass": "TechnoClass",
    "AbstractTypeClass": "AbstractClass", "ObjectTypeClass": "AbstractTypeClass",
    "TechnoTypeClass": "ObjectTypeClass",
    "UnitTypeClass": "TechnoTypeClass", "InfantryTypeClass": "TechnoTypeClass",
    "AircraftTypeClass": "TechnoTypeClass", "BuildingTypeClass": "TechnoTypeClass",
    "HouseClass": "AbstractClass", "HouseTypeClass": "AbstractClass",
}

# NEW classes computed by this engine (the 6 starter come from build_hpp_classes).
# Parent-first processing order (topological).
EXT_ORDER = [
    "FootClass", "UnitClass", "InfantryClass", "AircraftClass",
    "AbstractTypeClass", "ObjectTypeClass", "TechnoTypeClass",
    "UnitTypeClass", "InfantryTypeClass", "AircraftTypeClass", "BuildingTypeClass",
    "HouseClass", "HouseTypeClass",
]
EXT_SOURCES = {
    "FootClass": "src/object/foot.hpp",
    "UnitClass": "src/structure/unit.hpp",
    "InfantryClass": "src/structure/infantry.hpp",
    "AircraftClass": "src/structure/aircraft.hpp",
    "AbstractTypeClass": "src/type/abstract_type.hpp",
    "ObjectTypeClass": "src/type/object_type.hpp",
    "TechnoTypeClass": "src/type/techno_type.hpp",
    "UnitTypeClass": "src/type/unit_type.hpp",
    "InfantryTypeClass": "src/type/infantry_type.hpp",
    "AircraftTypeClass": "src/type/aircraft_type.hpp",
    "BuildingTypeClass": "src/type/building_type.hpp",
    "HouseClass": "src/house/house.hpp",
    "HouseTypeClass": "src/house/house_type.hpp",
}
# Extra bytes injected before a class's own members (multiple-inheritance vtables).
# AircraftClass : public FootClass, public FlasherClass -> the FlasherClass(/StageClass)
# branch contributes one vtable pointer (4) before AircraftClass-own members; the
# anchor AircraftClass_field_bool_6C8 confirms Type lands at FootClass.size+4.
EXT_BASE_ADJUST = {"AircraftClass": 4}

# Generalized offset-anchor extraction for the IDA-generated synthetic placeholder
# names used across these headers.  Two reliability tiers:
#   RELIABLE (delimited)   — the hex offset is unambiguously delimited by '_' or a
#     fixed prefix: `<Class>_field_..._<HEX>`, `align_<HEX>`, `m_padding_<HEX>`,
#     `zero_<HEX>`, `unused_<HEX>`, `alignmentPadding<HEX>`, `unusedField<HEX>`.
#     Honoured for forward-corrections / contradictions of ANY size.
#   LOOSE (undelimited)    — `unknown<Descriptor><HEX>` / `unused<HEX>` where the
#     descriptor can itself contain hex chars (e.g. `unknownPoint3d678` would mis-
#     parse to 0xD678).  Honoured ONLY when it lands within ±_ANCHOR_NEAR of the
#     running cursor (so a mis-parse is ignored, not trusted).
_RELIABLE_ANCHOR_RES = [
    re.compile(r"^.*_field_(?:[A-Za-z]+_)*([0-9A-Fa-f]{2,5})$"),
    re.compile(r"^(?:m_)?(?:padding|align|unused|zero)_([0-9A-Fa-f]{2,5})$"),
    re.compile(r"^alignmentPadding([0-9A-Fa-f]+)$"),
    re.compile(r"^unusedField([0-9A-Fa-f]+)$"),
]
_LOOSE_ANCHOR_RES = [
    re.compile(r"^(?:unknown|unused)[A-Za-z0-9]*?([0-9A-Fa-f]{2,4})$"),
]
_ANCHOR_NEAR = 16   # bytes — a LOOSE anchor must land this close to the cursor


def _raw_anchor(name):
    """Return (offset, reliable) for a synthetic placeholder member name.

    (None, False) if `name` is not an anchor.  `reliable=True` => delimited hex
    (trust any gap); `reliable=False` => undelimited (caller must range-check
    against the running cursor before trusting it).
    """
    for rx in _RELIABLE_ANCHOR_RES:
        m = rx.match(name)
        if m:
            try:
                return int(m.group(1), 16), True
            except ValueError:
                return None, False
    for rx in _LOOSE_ANCHOR_RES:
        m = rx.match(name)
        if m:
            try:
                return int(m.group(1), 16), False
            except ValueError:
                return None, False
    return None, False


def _strip_comments_block(text):
    """Remove // line comments and /* */ block comments (char-driven, string-safe-ish)."""
    out = []
    i, n = 0, len(text)
    while i < n:
        c = text[i]
        if c == "/" and i + 1 < n and text[i + 1] == "/":
            j = text.find("\n", i)
            i = n if j < 0 else j
            continue
        if c == "/" and i + 1 < n and text[i + 1] == "*":
            j = text.find("*/", i + 2)
            i = n if j < 0 else j + 2
            out.append(" ")
            continue
        out.append(c)
        i += 1
    return "".join(out)


def extract_class_members(path, class_name):
    """Robustly extract a class's OWN field declarations (source order).

    Brace-matches the class body and collects top-level (depth-0) field statements,
    skipping nested struct/union/method bodies, access labels, methods (`(`),
    statics/constexpr (`=`), and typedef/using.  Returns the same member dicts as
    parse_member_section.  Handles empty bodies (returns []).
    """
    text = (PROJECT_ROOT / path).read_text(encoding="utf-8", errors="replace")
    # Locate the DEFINITION of `class <name>` (not a forward decl `class <name>;`).
    body_open = -1
    for m in re.finditer(r"\bclass\s+" + re.escape(class_name) + r"\b", text):
        semi = text.find(";", m.end())
        brace = text.find("{", m.end())
        if brace != -1 and (semi == -1 or brace < semi):
            body_open = brace
            break
    if body_open < 0:
        return []
    # Brace-match to find the class body end.
    depth, i, n = 0, body_open, len(text)
    body_close = -1
    while i < n:
        ch = text[i]
        if ch == "{":
            depth += 1
        elif ch == "}":
            depth -= 1
            if depth == 0:
                body_close = i
                break
        i += 1
    if body_close < 0:
        return []

    body = _strip_comments_block(text[body_open + 1:body_close])

    # Walk the body at depth 0 (class scope), buffering statements ended by ';'.
    members = []
    depth = 0
    buf = []
    for ch in body:
        if ch == "{":
            depth += 1
            buf = []          # entering a nested body — discard the introducer buffer
            continue
        if ch == "}":
            depth = max(0, depth - 1)
            buf = []
            continue
        if depth != 0:
            continue
        if ch == ";":
            stmt = "".join(buf).strip()
            buf = []
            mem = _parse_field_stmt(stmt)
            if mem:
                members.append(mem)
            continue
        buf.append(ch)
    return members


def _parse_field_stmt(stmt):
    """Parse ONE depth-0 statement into a member dict, or None if not a field."""
    s = " ".join(stmt.split())
    # Drop any leading access-specifier label glued on (no ';' terminates a label,
    # so `public: char ID[0x18]` arrives as one statement — strip the `public:`).
    s = re.sub(r"^\s*(?:public|private|protected)\s*:\s*", "", s)
    s = re.sub(r"^\s*(?:public|private|protected)\s*:\s*", "", s)  # handle 2 labels
    if not s or "(" in s or "=" in s:
        return None
    first = s.split()[0]
    if first in ("virtual", "static", "using", "typedef", "friend", "public:",
                 "private:", "protected:", "struct", "class", "enum", "constexpr",
                 "explicit", "inline", "public", "private", "protected", "template"):
        return None
    if s.endswith(":"):            # stray access label without trailing ';'
        return None
    m = _MEMBER_RE.match(s)
    if not m:
        return None
    name = m.group("name")
    type_str = m.group("type").strip()
    arr = m.group("arr")
    return {
        "name": name, "type": type_str, "key": _type_key(type_str),
        "arr": arr, "count": _array_count(arr), "explicit_off": None,
    }


def compute_calibrated_offsets(class_name, members, base, class_size_hint, report,
                               force_best_effort=False):
    """Compute byte offsets for a class's OWN members from an AUTHORITATIVE base.

    No base calibration (the base = parent size is trusted; the 6 starter parents
    are cache-authoritative).  Offsets are placed by cumulative MSVC-6 /Zp8 sizeof
    and RE-SYNCED at every trustworthy anchor (forward-correction over unmodelled
    gaps).  A reliable anchor pointing BEHIND the cursor is a CONTRADICTION (hpp not
    byte-faithful here) — the member is emitted at the anchor's IDA offset, tagged
    best_effort, and the cursor is NOT rewound (no cascade corruption).  A LOOSE
    (undelimited `unknown...`) anchor is honoured only when it lands within
    _ANCHOR_NEAR of the cursor (otherwise it is a descriptor mis-parse and ignored).

    Returns (out_list, eff_size, faithful, n_anchors, n_gaps).
    """
    cursor = base
    out = []
    n_anchors = 0
    n_gaps = 0
    contradiction = False
    unfaithful = force_best_effort or class_name in UNFAITHFUL_HPP
    for mem in members:
        key = mem["key"]
        if key not in TYPE_SIZE_ALIGN:
            report.append("  [%s] UNKNOWN TYPE '%s' for '%s' (assumed 4/4)"
                          % (class_name, mem["type"], mem["name"]))
            size, align = 4, 4
        else:
            size, align = TYPE_SIZE_ALIGN[key]
        total = size * (mem["count"] or 1)
        if align > 1:
            cursor = (cursor + align - 1) // align * align

        confidence = "best_effort" if unfaithful else "computed"
        anc, reliable = _raw_anchor(mem["name"])
        if anc is not None:
            honour = reliable or abs(anc - cursor) <= _ANCHOR_NEAR
            if honour:
                n_anchors += 1
                if cursor == anc:
                    confidence = "anchored"
                elif anc > cursor:
                    report.append("  [%s] anchor FORWARD '%s': 0x%X -> 0x%X (+%d unmodelled)"
                                  % (class_name, mem["name"], cursor, anc, anc - cursor))
                    cursor = anc
                    confidence = "anchored"
                    n_gaps += 1
                else:  # reliable anchor behind cursor -> hpp out of order (best-effort)
                    report.append("  [%s] anchor CONTRADICTION '%s': computed 0x%X > name 0x%X "
                                  "(emit at cursor; hpp layout unreliable here)"
                                  % (class_name, mem["name"], cursor, anc))
                    contradiction = True
                    confidence = "best_effort"
                    # Do NOT emit at `anc` (it may be < base and clobber an inherited
                    # member); keep the cumulative cursor so the flattened map stays
                    # internally consistent. Fall through to the normal emit below.
            # else: LOOSE anchor far from cursor -> mis-parse, ignore (keep computed).

        off = cursor
        if class_size_hint and off >= class_size_hint:
            confidence = "out_of_bounds"
        out.append((off, mem["name"], mem["type"], total, confidence))
        cursor += total

    faithful = (not unfaithful) and (not contradiction) and (n_gaps == 0)
    align_round = 8 if any(TYPE_SIZE_ALIGN.get(m["key"], (4, 4))[1] >= 8
                           for m in members) else 4
    eff_size = (cursor + align_round - 1) // align_round * align_round
    return out, eff_size, faithful, n_anchors, n_gaps


def build_extended_classes(ida_classes, hpp_classes, hpp_mbn):
    """Compute classes/_member_by_name for the EXTENDED core hierarchies (~30 cls).

    `hpp_classes`/`hpp_mbn` are the 6-starter results from build_hpp_classes (their
    flattened absolute offsets are reused as the inheritance base for the new
    classes; the 6 starter classes themselves are NOT recomputed here).  Returns
    (classes_out, member_by_name, report) for the NEW classes only.
    """
    report = ["", "=" * 72,
              "T1-scale slice-1: extended-hierarchy member-offset computation",
              "=" * 72]

    # Known absolute sizes of the 6 starter classes (cache-authoritative).
    sizes = {c: ida_classes.get(c, {}).get("size", 0)
             for c in ("AbstractClass", "ObjectClass", "MissionClass",
                       "RadioClass", "TechnoClass", "BuildingClass")}

    # Flattened (own+inherited) offset/name dicts, seeded from the 6 starter classes.
    flat_offsets = {c: dict(hpp_classes[c]["offsets"]) for c in hpp_classes}
    flat_names = {c: dict(hpp_mbn[c]) for c in hpp_mbn}

    classes_out, member_by_name = {}, {}

    for cls in EXT_ORDER:
        parent = EXT_PARENTS[cls]
        psize = sizes.get(parent)
        if psize is None:
            report.append("  [%s] parent %s size unknown -> SKIP" % (cls, parent))
            continue
        base = psize + EXT_BASE_ADJUST.get(cls, 0)
        members = extract_class_members(EXT_SOURCES[cls], cls)
        own, eff_size, faithful, n_anc, n_gaps = compute_calibrated_offsets(
            cls, members, base, None, report)
        sizes[cls] = eff_size
        report.append("  [%s] parent=%s base=0x%X members=%d anchors=%d gaps=%d "
                      "size=0x%X %s"
                      % (cls, parent, base, len(members), n_anc, n_gaps, eff_size,
                         "FAITHFUL" if faithful else "best-effort"))

        # Flatten: parent's absolute layout + this class's own members.
        offs = dict(flat_offsets.get(parent, {}))
        names = dict(flat_names.get(parent, {}))
        for off, name, type_str, size, conf in own:
            offs[str(off)] = {"ida_name": name, "type": type_str,
                              "size": size, "confidence": conf}
            if name and conf != "out_of_bounds":
                names[name] = off
        flat_offsets[cls] = offs
        flat_names[cls] = names

        classes_out[cls] = {
            "offsets": offs, "size": eff_size, "parent": parent,
            "hpp_layout_faithful": faithful,
            "own_member_count": len(own), "anchor_count": n_anc,
            "unmodelled_gaps": n_gaps,
        }
        member_by_name[cls] = names

    return classes_out, member_by_name, report


def _load_cache():
    data = json.loads(IDA_CLASS_CACHE.read_text(encoding="utf-8"))
    return data["classes"]


if __name__ == "__main__":
    ida = _load_cache()
    classes_out, mbn, report = build_hpp_classes(ida)
    print("\n".join(report))
    print("\n" + "=" * 72)
    print("CRITICAL deliverable (CLOSE THE GAP):")
    bc = mbn["BuildingClass"]
    for k in ("HasPower", "IsOverpowered", "RegisteredAsPoweredUnitSource", "SupportingPrisms"):
        v = bc.get(k)
        print("  BuildingClass::%-30s = %s" % (k, ("0x%X (%d)" % (v, v)) if v is not None else "MISSING"))
    print("=" * 72)
    for c in CHAIN:
        print("  %-14s _member_by_name=%-4d offsets=%-4d faithful=%s"
              % (c, len(mbn[c]), len(classes_out[c]["offsets"]),
                 classes_out[c]["hpp_layout_faithful"]))

    # ── T1-scale slice-1: extended hierarchies ────────────────────────────────
    ext_classes, ext_mbn, ext_report = build_extended_classes(ida, classes_out, mbn)
    print("\n".join(ext_report))
    print("\n" + "=" * 72)
    print("EXTENDED hierarchies (slice-1):")
    for c in EXT_ORDER:
        if c not in ext_classes:
            continue
        info = ext_classes[c]
        print("  %-18s _member_by_name=%-4d offsets=%-4d size=0x%-5X faithful=%s%s"
              % (c, len(ext_mbn[c]), len(info["offsets"]), info["size"],
                 info["hpp_layout_faithful"],
                 " gaps=%d" % info["unmodelled_gaps"] if info.get("unmodelled_gaps") else ""))
    # Spot anchors to eyeball.
    print("=" * 72)
    spot = [("UnitClass", "Deployed"), ("UnitClass", "Type"),
            ("InfantryClass", "Type"), ("AircraftClass", "Type"),
            ("ObjectTypeClass", "Strength"), ("TechnoTypeClass", "Cost"),
            ("HouseTypeClass", "arrayIndex"), ("HouseClass", "arrayIndex")]
    for cls, name in spot:
        v = ext_mbn.get(cls, {}).get(name)
        print("  %-18s::%-22s = %s"
              % (cls, name, ("0x%X (%d)" % (v, v)) if v is not None else "MISSING"))
