// GENERATED X136 til-instance typed alias definitions
// (gen_ida_globals.py --x136-aliases; table: X136_TIL_ALIASES).
//
// Evidence: live til dump 2026-10-26 (gamemd.exe.i64); trail in
// .omo/x136/.  The raw-label decls in ida_globals.h are uchar/uint
// and force-included into every TU, so the x130 fresh-cache renders'
// member access needs typed ALIAS OBJECTS -- separate objects per the
// g_BuildingLoadQueue_Array_flat/_host/_raw/_t family convention.
// value form = zero-init object; ptr form = null pointer object;
// neither is read before the owning subsystem initializes the real
// .data image (Interim Fidelity Gap, same as the ida_globals.cpp
// zero-filled placeholders).
#include "ida_globals.h"
#include "e4/e4_globals.hpp"  // X136: G57c2 FLAT-suppression macros + common carriers
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/MissionClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/WeaponTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"

namespace gamemd {

RulesClass *dword_8871E0_x136 = 0;  // X136 til RulesClass @ 0x8871E0
DSurface *DSurface_Alternate_x136 = 0;  // X136 til DSurface @ 0x887310
WeaponTypeClass WeaponTypeClass_Array_x136 = {};  // X136 til WeaponTypeClass @ 0x887568
AbstractClass *dword_A8B230_x136 = 0;  // X136 til AbstractClass @ 0xA8B230
MissionClass stru_A8E3A8_x136 = {};  // X136 til MissionClass @ 0xA8E3A8
DynamicVectorClass g_BuildingLoadQueue_Array_x136 = {};  // X136 til DynamicVectorClass @ 0xB0E840
DynamicVectorClass stru_B0F5B8_x136 = {};  // X136 til DynamicVectorClass @ 0xB0F5B8

} // namespace gamemd
