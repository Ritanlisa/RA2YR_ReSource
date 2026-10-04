// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/ParasiteClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_588960_e4.hpp"
#include "e4/classes/E4Recv_5A99B0_e4.hpp"
#include "e4/classes/E4Recv_63EFB0_e4.hpp"
#include "e4/classes/E4Recv_6B5440_e4.hpp"
#include "e4/classes/E4Recv_710750_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Type_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/OverlayTypeClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/LoadOptions_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/classes/Bounds_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/Vector3_e4.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"  // G42.36 C2027 supply

// 0x47C3D0
namespace gamemd {
int Object::FindClosestObjectCell(unsigned int *aP1, char aP2, int aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0047C3D0.json)
}
}
// 0x47C5A0
namespace gamemd {
int SessionClass::FindObjectCell(TechnoClass * aP1, char aP2)
{
    (void)aP1; (void)aP2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0047C5A0.json)
}
}
// 0x4F9A90
namespace gamemd {
int Object::IsAlliedWithObjectHouse(int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F9A90.json)
}
}
// 0x4F9AF0
namespace gamemd {
int SessionClass::IsAlliedWithObjectSimpleHouse(unsigned char * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004F9AF0.json)
}
}
// 0x56C210
namespace gamemd {
unsigned int * SessionClass::FindNearestObjectAtCell(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056C210.json)
}
}
// 0x5902C0
namespace gamemd {
char sub_5902C0(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005902C0.json)
}
}
// 0x5FC380
namespace gamemd {  // G42.18c ns repair
int Object::SpawnAtCell(int aP1, int16_t *aP2, int aP3)  // G42.41k: dup head + misplaced close removed
{

  int v5; // eax (G42.41k: truth int, was IUnknown*)
  int v6; // eax (G42.41k: truth int, was Object*)
  int v7; // ecx
  CellClass *v8; // eax

  ((ObjectClass *)((ObjectClass *)this))->ctor(); /*0x5fc386*/
  v5 = aP1; /*0x5fc38b*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_OverlayClass); /*0x5fc38f*/
  this->Object_field_0xAC = (unsigned char)(v5); /*0x5fc395*/
  this->Object_field_0x8 = (int)&vt_OverlayClass; /*0x5fc39f*/
  *(unsigned int *)&this->Object_field_0x2[2] = (unsigned int)(&vt_OverlayClass); /*0x5fc3a6*/
  *(unsigned int *)this->__pad_C = (unsigned int)(&vt_OverlayClass); /*0x5fc3ac*/
  AbstractClass::GenerateUniqueID((int)(AbstractClass *)&this->Object_field_0x2[2]);  // G42.41k: decl takes int /*0x5fc3b3*/
  if ( dword_A8EC60 < dword_A8EC58 /*0x5fc3ef*/
    || (byte_A8EC5D || !dword_A8EC58)
    && dword_A8EC64 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_A8EC50 + 8))(
         (int *)&dword_A8EC50,
         dword_A8EC58 + dword_A8EC64,
         0) )
  {
    v6 = dword_A8EC60++;
    *((unsigned int *)dword_A8EC54 + v6) = (unsigned int)this; /*0x5fc40b*/
  }
  if ( *aP2 != word_AC1528 || aP2[1] != word_AC152A ) /*0x5fc429*/
  {
    dword_8333BC = (int)(aP3);
    v7 = (int)(aP2[1]);
    LOWORD(aP1) = ((*aP2 << 8) + 128) / 256; /*0x5fc469*/
    HIWORD(aP1) = ((v7 << 8) + 128) / 256; /*0x5fc485*/
    v8 = (CellClass *)((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj((int16_t *)&aP1); /*0x5fc497*/
    if ( !((CellClass *)(v8))->FindInfantry(0) ) /*0x5fc4a0*/
      ((ObjectClass *)this)->Deploy(); /*0x5fc4b1*/  // G42.41k: Object not derived from ObjectClass in e4 model; explicit receiver
    dword_8333BC = -1; /*0x5fc4b6*/
  }
  return (int)(this);

}
}
// 0x5FD970
namespace gamemd {
void * Object::HandleAction(int * a2, int * a3)  // G42.41k: truth 0x5FD970 = Object::HandleAction (was misbound to SessionClass)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FD970.json)
}
}
// 0x5FDDE0
namespace gamemd {
int Object::ProcessEvent()
{

  return (int)this->Type; /*0x5fdde6*/

}
}
// 0x5FDF70
namespace gamemd {
void * SessionClass::DrawObject(void ** Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FDF70.json)
}
}
// 0x62AC30
namespace gamemd {
void* * SessionClass::CalculateObjectPlacementPosition(int *a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0062AC30.json)
}
}
// 0x639E30
namespace gamemd {
char sub_639E30(int * a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00639E30.json)
}
}
// 0x646E90
namespace gamemd {
char Object_Init(char a1, int a2, int a3, char a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00646E90.json)
}
}
// 0x7DEEFA
namespace gamemd {
char Object_Calc(MouseClass * aP0, unsigned short *a1, int a3, int a4, int a5, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007DEEFA.json)
}
}
// 0x7DEFD7
namespace gamemd {
char Object_Calc_7DEFD7(MouseClass * aP0, unsigned short *a1, int a3, int a4, int a5, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007DEFD7.json)
}
}
// 0x7DF0B4
namespace gamemd {
char Object_Calc_7DF0B4(MouseClass * aP0, unsigned short *a1, int a3, int a4, int a5, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007DF0B4.json)
}
}
// 0x7DF191
namespace gamemd {
char Object_Calc_7DF191(MouseClass * aP0, unsigned short *a1, int a3, int a4, int a5, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007DF191.json)
}
}
// 0x7DF280
namespace gamemd {
char Object_Calc_7DF280(MouseClass * aP0, unsigned char * a1, unsigned short * a2, int a4, int a5, int a6, int a7, int a8)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007DF280.json)
}
}
// 0x7DF3C2
namespace gamemd {
void Object_Calc_7DF3C2(MouseClass * aP0, unsigned char * a1, unsigned short * a2, int a4, int a5, int a6, int a7, int a8)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007DF3C2.json)
}
}
// 0x7DF500
namespace gamemd {
void Object_Calc_7DF500(MouseClass * aP0, unsigned char * a1, unsigned short * a2, int a4, int a5, int a6, int a7, int a8)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007DF500.json)
}
}
// 0x7DF640
namespace gamemd {
void Object_Calc_7DF640(MouseClass * aP0, unsigned char * a1, unsigned short * a2, int a4, int a5, int a6, int a7, int a8)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007DF640.json)
}
}
// 0x5A7E90
namespace gamemd {
void sub_5A7E90(int a1, unsigned short * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005A7E90.json)
}
}
// 0x710890
namespace gamemd {
void sub_710890(int a1, int a2, int * a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00710890.json)
}
}
// 0x42B1F0
namespace gamemd {
int Object::ComputeAllocationSize()
{

  return 2 * dword_87F8DC * (dword_87F8E0 + 4); /*0x42b201*/

}
} // namespace gamemd

// 0x53E420
namespace gamemd {
void ** SessionClass::RemoveObjectArray()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053E420.json)
}
} // namespace gamemd

// 0x5F5230
namespace gamemd {
int SessionClass::Unlink()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F5230.json)
}
} // namespace gamemd

// 0x5FD270
namespace gamemd {
char SessionClass::CheckState(IUnknown * aP1, int a3)
{
    (void)aP1; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FD270.json)
}
} // namespace gamemd

// 0x5FD8F0
namespace gamemd {
int SessionClass::LoadObject(ObjectClass * aP1, int aP1a)
{
    (void)aP1; (void)aP1a; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FD8F0.json)
}
} // namespace gamemd

// 0x5FD950
namespace gamemd {
int SessionClass::SaveObject(TechnoTypeClass * aP0, int * a1, int aP2)
{
    (void)aP0; (void)a1; (void)aP2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x005FD950.json)
}
} // namespace gamemd

// 0x5FDF00
namespace gamemd {
int Object::StubReturn176()
{

  return 176; /*0x5fdf05*/

}
} // namespace gamemd

// 0x5FDF10
namespace gamemd {
int SessionClass::ddtor(int a1, unsigned int * a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FDF10.json)
}
} // namespace gamemd

// 0x5FDF50
namespace gamemd {
int Object::StubReturn20()
{

  return 20; /*0x5fdf55*/

}
} // namespace gamemd

// 0x637DD0
namespace gamemd {
char sub_637DD0(char a1, int a2, int a3, int a4, int a5, int a6, int a7, short a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00637DD0.json)
}
} // namespace gamemd

// 0x733C60
namespace gamemd {
bool sub_733C60(int a1, const char * a2)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00733C60.json)
}
} // namespace gamemd

// 0x7AD330
namespace gamemd {
SessionClass * SessionClass::DtorWithDelete(void ** Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007AD330.json)
}
} // namespace gamemd

// 0x7CBC11
namespace gamemd {
char * sub_7CBC11(char * VarName)
{
  char *v1; // esi

  _lock(12); /*0x7cbc14*/
  v1 = getenv(VarName); /*0x7cbc24*/
  _unlock(12); /*0x7cbc26*/
  return v1; /*0x7cbc30*/
}
} // namespace gamemd
