#!/usr/bin/env python3
"""X65 — the three DEFERRED-with-evidence C2039 lanes from X64 (~108 lines).

Lane 1  M3-RENAME (39): carrier hpp member renames to til names (sites already
        spell the til name; L453 name-token replacement, offset anchor pinned).
        DriveLocomotionClass __pad_008->Owner@0x8 (uint),
        UDPInterfaceClass    vtable1 ->Socket@0x0 (void*->int: Socket+36
        dispatch + (int)&vt_X install sites; Winsock twin + member_lookup "int"),
        IPXInterfaceClass    __pad_0 ->Socket@0x0 (uint).
Lane 2  RECEIVER-RETYPE (34 band): receiver declaration retypes.
        addr67 ReadINIClassBuildingTypeList: aP0 INIClass* / a4 unsigned int*
        -> TypeList_BuildingType* (binary displacements +4/+8/+C/+D/0/+10/+14
        disassembled from 0x67b62d-0x67b709); carrier extended to the proven
        0x18 layout; stride artifacts aP0[1].X -> aP0->Count/CapacityIncrement;
        [0] index drops on bool scalars (byte-equal).
        addr73: malloc(0x18) + vt_DynamicVectorClass_TechnoClass locals
        EventClass* -> DynamicVectorClass_uint* (Count band sites resolve
        as-is); spellings field_0x0->vtable1 ((int) cast dropped), q014->
        CapacityIncrement, field_0x4->Items.
        EventClass_e4.cpp 419-448 this->Count: DEFERRED (receiver is `this`
        of EventClass::validateEventType; method-class move = structural).
Lane 3  0-7 RESTRUCTURE (35 band, X64 freeze prescription; VECTOR_EVIDENCED
        gate): DynamicVector [char __pad_0[1]][uint field_0x1@1][char __pad_5[3]]
        -> [uchar __pad_0[4]][uint* Items@4] (RTTI 180+ vtables col 0);
        FilePipe_38 [uchar __pad_000][uchar* m_1@1][char __pad_5[3]] ->
        [uint vfptr][char* Items@4] (bool-pair idiom ddtor 0x47844d + AddRef/
        Release family).  sizeof 44 / 16 preserved; til sizes unchanged.
NO casts added; two cast removals ((int)v18 via void* Count; (int) on addr73
vt-installs via void* vtable1).

Usage:
  python tools/csp_export/gen_x65_c2039_deferred.py            # dry run
  python tools/csp_export/gen_x65_c2039_deferred.py --apply --lane 1
  python tools/csp_export/gen_x65_c2039_deferred.py --apply --lane 2
  python tools/csp_export/gen_x65_c2039_deferred.py --apply --lane 3
"""
import argparse, json, re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
EV = ROOT / ".omo" / "evidence" / "optimization" / "x65"
EV.mkdir(parents=True, exist_ok=True)
LEDGER = EV / "x65_lane_ledger.json"

ap = argparse.ArgumentParser()
ap.add_argument("--apply", action="store_true")
ap.add_argument("--lane", type=int, choices=[1, 2, 3])
ARGS = ap.parse_args()

# ---------------------------------------------------------------- primitives
def sub_exact(path, pairs, ledger, lane):
    """Exact full-line replacements.  Anchor = complete old line text.
    CRLF-agnostic.  Idempotent: new text present -> skip; old absent -> MISS."""
    p = ROOT / path
    data = p.read_bytes().decode("latin-1")
    n_ok = n_skip = 0
    for item in pairs:
        old, new = item[0], item[1]
        skip_new_only = len(item) > 2
        news = [new, new.replace("\n", "\r\n")] if "\n" in new else [new]
        olds = [old, old.replace("\n", "\r\n")] if "\n" in old else [old]
        if any(n in data for n in news) and (skip_new_only or not any(o in data for o in olds)):
            n_skip += 1
            continue
        variants = [(old, new)]
        if "\n" in old:
            variants.append((old.replace("\n", "\r\n"), new.replace("\n", "\r\n")))
        hit = None
        for o, n in variants:
            if o in data:
                if data.count(o) != 1:
                    ledger["ambig"].append(f"{path} x{data.count(o)}:: {o.strip()[:90]}")
                    hit = "ambig"
                    break
                data = data.replace(o, n)
                hit = "ok"
                break
        if hit == "ok":
            n_ok += 1
            ledger["applied"].append(f"{path}:: {old.strip()[:70]} -> {new.strip()[:70]}")
        elif hit is None:
            ledger["misses"].append(f"{path}:: {old.strip()[:90]}")
        else:
            continue
    if ARGS.apply and n_ok:
        p.write_bytes(data.encode("latin-1"))
    ledger["by_lane"][f"lane{lane}"] = ledger["by_lane"].get(f"lane{lane}", 0) + n_ok
    print(f"  {path}: {n_ok} applied, {n_skip} already-ok, "
          f"{len([m for m in ledger['misses'] if m.startswith(path)])} miss")
    return n_ok


ledger = {"applied": [], "misses": [], "ambig": [], "by_lane": {}}

# ================================================================ LANE 1
LANE1 = [
    # DriveLocomotionClass: til Owner@0x8 size4; carrier __pad_008@0x8 uint.
    ("src/e4/classes/DriveLocomotionClass_e4.hpp", [
        ("    unsigned int __pad_008;  // 0x8",
         "    unsigned int Owner;  // 0x8"),
    ]),
    # UDPInterfaceClass: til Socket@0x0 size4 (no vtable member in til);
    # RTTI col_offset 0 => the slot is the vfptr; render spells Socket and
    # installs (int)&vt_UDPInterfaceClass into it (0x7b4176).  int type:
    # Winsock twin precedent + member_lookup "int" + Socket+36 dispatch forms.
    ("src/e4/classes/UDPInterfaceClass_e4.hpp", [
        ("    void* vtable1;  // 0x0",
         "    int Socket;  // 0x0"),
    ]),
    # IPXInterfaceClass: til Socket@0x0 size4; carrier __pad_0@0x0 uint.
    ("src/e4/classes/IPXInterfaceClass_e4.hpp", [
        ("    unsigned int __pad_0;  // 0x0",
         "    unsigned int Socket;  // 0x0"),
    ]),
]

# ================================================================ LANE 2
LANE2 = [
    # ---- TypeList_BuildingType carrier: extend E2-minimal to the binary
    # ---- proven 0x18 layout (names = addr67 site spellings).
    ("src/e4/classes/TypeList_BuildingType_e4.hpp", [
        ("""// --- flat members (BEGIN) ---
    void* Items;  // 0x4
    int Capacity;  // 0x8
    bool IsAllocated;  // 0xD
// --- flat members (END) ---""",
         """// --- flat members (BEGIN) ---
    unsigned int __pad_0;  // 0x0
    int Items;  // 0x4
    int Capacity;  // 0x8
    bool IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char tail_E;  // 0xE
    char __pad_F[1];  // 0xF
    void* Count;  // 0x10
    unsigned int CapacityIncrement;  // 0x14
// --- flat members (END) ---"""),
    ]),
    # ---- addr67: receiver declaration retypes (params).
    ("src/e4/addr67_e4.cpp", [
        # include the carrier (complete type required for member access;
        # C2027 without it — the TU only had the _fwd forward declaration).
        # Anchored AFTER the last existing include: inserting at the top
        # perturbs include order and broke unrelated lines (C2664 x3).
        (("#include \"e4/classes/KeywordClass_e4.hpp\"  // G57w10 D supply",
         "#include \"e4/classes/KeywordClass_e4.hpp\"  // G57w10 D supply\n#include \"e4/classes/TypeList_BuildingType_e4.hpp\"", True)),
        # ---- receiver declaration retypes (params).
        ("int ReadINIClassBuildingTypeList(INIClass * aP0, unsigned char *** edx0, VectorClass_flat * aP2, unsigned char * a3, unsigned int * a4)",
         "int ReadINIClassBuildingTypeList(TypeList_BuildingType * aP0, unsigned char *** edx0, VectorClass_flat * aP2, unsigned char * a3, TypeList_BuildingType * a4)"),
        # stride artifacts -> direct Count/CapacityIncrement (binary +0x10/+0x14)
        ("    aP0[1].__pad_0 = (int)v18; /*0x67b65b*/",
         "    aP0->Count = v18; /*0x67b65b*/"),
        ("    aP0[1].Items = v9; /*0x67b664*/",
         "    aP0->CapacityIncrement = v9; /*0x67b664*/"),
        ("    aP0[1].vfptr = a4[1].vfptr; /*0x67b703*/",
         "    aP0->Count = a4->Count; /*0x67b703*/"),
        ("    aP0[1].Items = a4[1].Items; /*0x67b709*/",
         "    aP0->CapacityIncrement = a4->CapacityIncrement; /*0x67b709*/"),
        # [0] index drops on bool scalars (byte-equal 1B access)
        ("    aP0->IsInitialized[0] = 1; /*0x67b633*/",
         "    aP0->IsInitialized = 1; /*0x67b633*/"),
        ("    aP0->IsInitialized[0] = 1; /*0x67b69f*/",
         "    aP0->IsInitialized = 1; /*0x67b69f*/"),
        ("    aP0->IsAllocated[0] = 0; /*0x67b637*/",
         "    aP0->IsAllocated = 0; /*0x67b637*/"),
        ("    aP0->IsAllocated[0] = 0; /*0x67b6a3*/",
         "    aP0->IsAllocated = 0; /*0x67b6a3*/"),
        ("    aP0->IsAllocated[0] = 1; /*0x67b6de*/",
         "    aP0->IsAllocated = 1; /*0x67b6de*/"),
        ("        aP0->IsAllocated[0] = 0; /*0x67b6fd*/",
         "        aP0->IsAllocated = 0; /*0x67b6fd*/"),
    ]),
    # ---- addr73: local retypes (SelectAllOfType v3/v4/v8 + sub_7331B0
    # ---- v2/v3/v11/v12).  Count band sites resolve as-is.
    ("src/e4/addr73_e4.cpp", [
        # include the carrier (complete type; C2027 without it); anchored
        # after the last existing include (order-perturbation discipline)
        (("#include \"e4/classes/CSFClass_e4.hpp\"  // G57w10 D supply",
         "#include \"e4/classes/CSFClass_e4.hpp\"  // G57w10 D supply\n#include \"e4/classes/DynamicVectorClass_uint_e4.hpp\"", True)),
        # decls (single lines; CRLF-safe)
        ("  EventClass *v3; // eax",
         "  DynamicVectorClass_uint *v3; // eax"),
        ("  EventClass *v4; // esi",
         "  DynamicVectorClass_uint *v4; // esi"),
        ("  EventClass *v8; // ebp",
         "  DynamicVectorClass_uint *v8; // ebp"),
        ("  EventClass *v2; // eax",
         "  DynamicVectorClass_uint *v2; // eax"),
        ("  EventClass *v3; // esi",
         "  DynamicVectorClass_uint *v3; // esi"),
        ("  EventClass *v11; // eax",
         "  DynamicVectorClass_uint *v11; // eax"),
        ("  EventClass *v12; // esi",
         "  DynamicVectorClass_uint *v12; // esi"),
        # malloc casts
        ("    v3 = (EventClass *)__2_YAPAXI_Z(0x18u); /*0x732998*/",
         "    v3 = (DynamicVectorClass_uint *)__2_YAPAXI_Z(0x18u); /*0x732998*/"),
        ("    v7 = (EventClass *)__2_YAPAXI_Z(0x18u); /*0x7329fc*/",
         "    v7 = (DynamicVectorClass_uint *)__2_YAPAXI_Z(0x18u); /*0x7329fc*/"),
        ("  v2 = (EventClass *)__2_YAPAXI_Z(0x18u); /*0x7331cf*/",
         "  v2 = (DynamicVectorClass_uint *)__2_YAPAXI_Z(0x18u); /*0x7331cf*/"),
        ("    v11 = (EventClass *)__2_YAPAXI_Z(0x18u); /*0x733284*/",
         "    v11 = (DynamicVectorClass_uint *)__2_YAPAXI_Z(0x18u); /*0x733284*/"),
        # vt installs: spelling + (int) cast dropped (void* vtable1)
        ("    v4->EventClass_field_0x0 = (int)&vt_DynamicVectorClass_TechnoClass; /*0x7329af*/",
         "    v4->vtable1 = &vt_DynamicVectorClass_TechnoClass; /*0x7329af*/"),
        ("    v8->EventClass_field_0x0 = (int)&vt_DynamicVectorClass_TechnoClass; /*0x732a13*/",
         "    v8->vtable1 = &vt_DynamicVectorClass_TechnoClass; /*0x732a13*/"),
        ("    v3->EventClass_field_0x0 = (int)&vt_DynamicVectorClass_TechnoClass; /*0x7331e6*/",
         "    v3->vtable1 = &vt_DynamicVectorClass_TechnoClass; /*0x7331e6*/"),
        ("    v12->EventClass_field_0x0 = (int)&vt_DynamicVectorClass_TechnoClass; /*0x73329b*/",
         "    v12->vtable1 = &vt_DynamicVectorClass_TechnoClass; /*0x73329b*/"),
        # q014 -> CapacityIncrement (4 writes + 2 reads)
        ("    *&v4->q014 = 10; /*0x7329b5*/",
         "    *&v4->CapacityIncrement = 10; /*0x7329b5*/"),
        ("    *&v8->q014 = 10; /*0x732a1a*/",
         "    *&v8->CapacityIncrement = 10; /*0x732a1a*/"),
        ("    *&v3->q014 = 10; /*0x7331ec*/",
         "    *&v3->CapacityIncrement = 10; /*0x7331ec*/"),
        ("    *&v12->q014 = 10; /*0x7332a1*/",
         "    *&v12->CapacityIncrement = 10; /*0x7332a1*/"),
        ("          && (v7 = *&v3->q014, v7 > 0)",
         "          && (v7 = *&v3->CapacityIncrement, v7 > 0)"),
        ("                    && (HeightMap = *&v12->q014, HeightMap > 0)",
         "                    && (HeightMap = *&v12->CapacityIncrement, HeightMap > 0)"),
        # field_0x4 -> Items (3 sites)
        ("        v13 = (unsigned char *)*((unsigned int *)v8->EventClass_field_0x4 + v12); /*0x732a8c*/",
         "        v13 = (unsigned char *)*((unsigned int *)v8->Items + v12); /*0x732a8c*/"),
        ("          EventClass_field_0x4 = v3->EventClass_field_0x4; /*0x73324c*/",
         "          EventClass_field_0x4 = v3->Items; /*0x73324c*/"),
        ("                    v16 = v12->EventClass_field_0x4; /*0x733351*/",
         "                    v16 = v12->Items; /*0x733351*/"),
        # dispatch spellings: the fn-ptr cast forms compile on void* as-is;
        # the two +8 arith forms become void*+8 (C2039->C2036 code shift,
        # documented retype collateral, NO new cast per task rule)
        ("      (*(void (**)(EventClass *, int))v8->EventClass_field_0x0)(v8, 1); /*0x732aca*/",
         "      (*(void (**)(EventClass *, int))v8->vtable1)(v8, 1); /*0x732aca*/"),
        ("      (*(void (**)(EventClass *, int))v3->EventClass_field_0x0)(v3, 1); /*0x73327a*/",
         "      (*(void (**)(EventClass *, int))v3->vtable1)(v3, 1); /*0x73327a*/"),
        ("          && (*(unsigned __int8 (**)(EventClass *, int, unsigned int))(v3->EventClass_field_0x0 + 8))(",
         "          && (*(unsigned __int8 (**)(EventClass *, int, unsigned int))(v3->vtable1 + 8))("),
        ("                    && (LOBYTE(HeightMap) = (*(int (**)(EventClass *, int, unsigned int))(v12->EventClass_field_0x0",
         "                    && (LOBYTE(HeightMap) = (*(int (**)(EventClass *, int, unsigned int))(v12->vtable1"),
    ]),
    # ---- TypeList_BuildingType::Add body: Items void* -> int; the local
    # ---- v3 keeps its void* decl -> init becomes int->void* C2440 (+1,
    # ---- documented retype collateral; NO new cast per task rule).
    # ---- (no edit: the +1 C2440 is accepted and documented)
]

# ================================================================ LANE 3
LANE3 = [
    # DynamicVector: til size 44; 0-7 scratch region -> vfptr slot + Items@4
    # (RTTI 180+ vtables col_offset 0 = gate (a); method family Clear/
    # SetCapacity/FindItemIndex/AddRef/Release = gate (c); bool-pair byte
    # idiom at 0xC/D = gate (b)).  Items type = unsigned int* per site census
    # (v5[result] indexing, *(uint*)(*&Items + 4*i) arith, void* assigns).
    ("src/e4/classes/DynamicVector_e4.hpp", [
        ("""    char __pad_0[1];  // 0x0
    unsigned int DynamicVector_field_0x1;  // 0x1
    char __pad_5[3];  // 0x5""",
         """    unsigned char __pad_0[4];  // 0x0
    unsigned int *Items;  // 0x4"""),
    ]),
    # FilePipe_38: til size 16; same scratch-noise region; X64 freeze
    # prescription vfptr@0 + Items@4.  Items type = char* per site census
    # (=v5 char* / operator delete / (int)(Items+v13) arith).
    ("src/e4/classes/FilePipe_38_e4.hpp", [
        ("""    unsigned char __pad_000;  // 0x0
    unsigned char * m_1;  // 0x1
    char __pad_5[3];  // 0x5""",
         """    unsigned int vfptr;  // 0x0
    char *Items;  // 0x4"""),
    ]),
]

LANES = {1: LANE1, 2: LANE2, 3: LANE3}
sel = {ARGS.lane} if ARGS.lane else {1, 2, 3}
for ln in sorted(sel):
    print(f"== LANE {ln}:")
    for path, pairs in LANES[ln]:
        sub_exact(path, pairs, ledger, ln)

ledger["applied_n"] = len(ledger["applied"])
ledger["miss_n"] = len(ledger["misses"])
ledger["ambig_n"] = len(ledger["ambig"])
print(f"TOTAL applied: {ledger['applied_n']}  miss: {ledger['miss_n']}  ambig: {ledger['ambig_n']}")
for m in ledger["misses"]:
    print("  MISS:", m)
for m in ledger["ambig"]:
    print("  AMBIG:", m)
if ARGS.apply:
    LEDGER.write_text(json.dumps(ledger, ensure_ascii=False, indent=1), encoding="utf-8")
    print(f"ledger -> {LEDGER}")
else:
    print("DRY RUN (no writes)")
