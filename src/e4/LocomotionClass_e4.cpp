// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FacingClass_e4.hpp"

#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/Lobby_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/RefCount_e4.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/FrameSnapshot_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x4AF540
namespace gamemd {
int LocomotionClass::Initialize()
{
  int v2; // ecx
  int v3; // ecx

  LocomotionClass::Init(); /*0x4af543*/
  this->u32_1C = 0; /*0x4af54d*/
  this->u32_8 = 0; /*0x4af550*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4af553*/
  this->u32_2C = 0; /*0x4af559*/
  this->u32_24 = v2; /*0x4af55c*/
  this->LinkedTo = 0; /*0x4af55f*/
  this->u32_34 = g_DDraw_ClipRect; /*0x4af568*/
  this->u32_38 = qword_8A0794; /*0x4af570*/
  this->u32_10 = g_DDraw_ClipRect; /*0x4af585*/
  this->Dirty = qword_8A0794; /*0x4af58e*/
  v3 = IDA_HIDWORD(qword_8A0794); /*0x4af591*/
  this->u8_14 = 0; /*0x4af597*/
  this->u32_4C = 0; /*0x4af59a*/
  this->u32_48 = v3; /*0x4af59d*/
  this->q015 = 0; /*0x4af5a3*/
  this->u32_58 = -1; /*0x4af5a6*/
  this->u32_5C = -1; /*0x4af5a9*/
  this->u32_60 = 0; /*0x4af5ac*/
  this->u32_61 = 0; /*0x4af5af*/
  this->u32_62 = 0; /*0x4af5b2*/
  this->u32_63 = 0; /*0x4af5b5*/
  this->u32_64 = 0; /*0x4af5b8*/
  this->u32_65 = 1; /*0x4af5bb*/
  this->u32_68 = 0; /*0x4af5bf*/
  *(_DWORD *)this->ILocomotion = &(void*)(void*)&DriveLocomotionClass_vftable; /*0x4af5c2*/
  *(_DWORD *)&this->ILocomotion[4] = &(void*)(void*)&DriveLocomotionClass_vftable; /*0x4af5c8*/
  this->u32_18 = &off_7E7E8C; /*0x4af5cf*/
  return (int)this->ILocomotion; /*0x4af5d8*/
}
} // namespace gamemd
// 0x4C54A0
namespace gamemd {
void * LocomotionClass::UpdateAll()
{
  wchar_t *result; // eax
  int i; // esi
  _DWORD *v3; // ecx

  result = (wchar_t *)dword_8A3880; /*0x4c54a0*/
  for ( i = dword_8A3880 - 1; i >= 0; --i ) /*0x4c54ab*/
  {
    v3 = (_DWORD *)*((_DWORD *)dword_8A3874 + i); /*0x4c54b3*/
    result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x4c54be*/
    if ( *(int *)&stru_A8EB00.?[416] >= v3[11] + v3[12] ) /*0x4c54c5*/
    {
      if ( v3 ) /*0x4c54c9*/
        result = (wchar_t *)(*(int (__thiscall **)(_DWORD *, int))(*v3 + 32))(v3, 1); /*0x4c54cf*/
    }
  }
  return result; /*0x4c54d5*/
}
} // namespace gamemd
// 0x4CFA70
namespace gamemd {
int LocomotionClass::CheckBridgeBlock()
{
  int vtable1; // eax
  FootClass *LinkedTo; // edi
  Cell *v4; // eax
  _DWORD *v5; // eax

  if ( (*((int (__thiscall **)(FootClass *))this->LinkedTo->vfptr + 97))(this->LinkedTo) == 7 /*0x4cfa8e*/
    || (IDA_LOBYTE(vtable1) = BuildingClass::GetType_Thunk(&this->LinkedTo->vfptr), !(_BYTE)vtable1) )
  {
    vtable1 = (*((int (__thiscall **)(FootClass *))this->LinkedTo->vfptr + 11))(this->LinkedTo); /*0x4cfa95*/
    if ( vtable1 == 2 /*0x4cfacc*/
      && (LinkedTo = this->LinkedTo, vtable1 = (int)LinkedTo[1].vfptr1, *(_BYTE *)(vtable1 + 3597))
      && (v4 = (Cell *)(*((int (__thiscall **)(FootClass *))LinkedTo->vfptr + 111))(this->LinkedTo),
          v5 = Cell::IsBridge(v4),
          IDA_LOBYTE(vtable1) = Array::Contains((Array *)this->LinkedTo, (int)v5),
          !(_BYTE)vtable1) )
    {
      IDA_LOBYTE(vtable1) = (*((char (__thiscall **)(FootClass *, _DWORD, int))LinkedTo->vfptr + 289))(LinkedTo, 0, 1); /*0x4cfad6*/
    }
    else
    {
      this->u8_14 = 0; /*0x4cfadf*/
      this->u32_51 = 1; /*0x4cfae3*/
      this->u32_52 = 0; /*0x4cfae7*/
      this->u32_38 = 0; /*0x4cfaeb*/
    }
  }
  return vtable1; /*0x4cfadc*/
}
} // namespace gamemd
// 0x4DC760
namespace gamemd {
int LocomotionClass::GetSpeedMultiplier()
{
  int result; // eax

  result = this->u32_5D4; /*0x4dc760*/
  if ( result ) /*0x4dc768*/
    return result->u32_24; /*0x4dc76a*/
  return result; /*0x4dc77d*/
}
} // namespace gamemd
// 0x513C20
namespace gamemd {
int LocomotionClass::ProcessData()
{
  LocomotionClass::Init(); /*0x513c24*/
  this->u32_18 = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x513c34*/
  this->u32_1C = *(_DWORD *)&stru_A8EB00.?[1440]; /*0x513c3d*/
  this->u32_8 = *(_DWORD *)&stru_A8EB00.?[1444]; /*0x513c49*/
  this->u32_24 = *(_DWORD *)&stru_A8EB00.?[1436]; /*0x513c51*/
  this->u32_28 = *(_DWORD *)&stru_A8EB00.?[1440]; /*0x513c59*/
  this->u32_2C = *(_DWORD *)&stru_A8EB00.?[1444]; /*0x513c64*/
  FrameSnapshot::InitMax((FrameSnapshot *)this + 6, 0); /*0x513c67*/
  this->u32_48 = 0; /*0x513c6c*/
  this->u8_14 = 0; /*0x513c6f*/
  this->u32_58 = 0; /*0x513c72*/
  this->u32_60 = 0; /*0x513c75*/
  this->u32_4C = 0; /*0x513c78*/
  this->q015 = 0; /*0x513c7b*/
  this->u32_5C = 1072693248; /*0x513c7e*/
  this->u32_64 = 0; /*0x513c85*/
  this->u32_68 = 0; /*0x513c88*/
  this->u32_6C = 0; /*0x513c8b*/
  this->u32_70 = 0; /*0x513c8e*/
  *(_DWORD *)this->ILocomotion = &(void*)(void*)&HoverLocomotionClass_vftable; /*0x513c91*/
  *(_DWORD *)&this->ILocomotion[4] = &(void*)(void*)&HoverLocomotionClass_vftable; /*0x513c97*/
  return (int)this->ILocomotion; /*0x513ca0*/
}
} // namespace gamemd
// 0x54AC40
namespace gamemd {
int LocomotionClass::Update(void *a1, void *a2, void *a3, void *a4)
{
  int v2; // ecx
  int v4; // [esp+Ch] [ebp-4h] BYREF

  LocomotionClass::Init(); /*0x54ac46*/
  this->DestinationCoords[0] = dword_ABC5A8; /*0x54ac59*/
  this->DestinationCoords[1] = dword_ABC5AC; /*0x54ac61*/
  v2 = dword_ABC5B0; /*0x54ac64*/
  this->IsMoving = 0; /*0x54ac6a*/
  *(_DWORD *)this->__pad_50 = 0; /*0x54ac6d*/
  this->DestinationCoords[2] = v2; /*0x54ac70*/
  FrameSnapshot::InitMax( /*0x54ac82*/
    (FrameSnapshot *)&this->__pad_50[4],
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 1036));
  this->CurrentHeight = 0; /*0x54ac87*/
  *(_DWORD *)&this->q074[4] = 0; /*0x54ac8a*/
  *(_DWORD *)&this->DestinationReached = 0; /*0x54ac8d*/
  *(_DWORD *)this->q074 = 0; /*0x54ac93*/
  *(_DWORD *)&this->q074[8] = 0; /*0x54ac96*/
  *(_DWORD *)&this->q074[12] = 0; /*0x54ac99*/
  *(_DWORD *)&this->__pad_89[3] = 0; /*0x54ac9f*/
  this->__pad_89[7] = 0; /*0x54aca5*/
  this->unknown_91 = 0; /*0x54acab*/
  this->Piggybackee = 0; /*0x54acb5*/
  this->0[0] = (int)&(void*)(void*)&JumpjetLocomotionClass_vftable; /*0x54acc3*/
  this->0[1] = (int)&(void*)(void*)&JumpjetLocomotionClass_vftable; /*0x54acc9*/
  this->TurnRate = (int)&(void*)(void*)&JumpjetLocomotionClass_vftable; /*0x54acd0*/
  IDA_LOWORD(v4) = 0x4000; /*0x54acd7*/
  FacingClass::Update(&this->__pad_50[4], &v4); /*0x54acdc*/
  IDA_LOWORD(v4) = 0x4000; /*0x54ace8*/
  FacingClass::Set_SyncLog(&this->__pad_50[4], &v4); /*0x54aced*/
  return (int)this->0; /*0x54acf4*/
}
} // namespace gamemd
// 0x55A6C0
namespace gamemd {
int LocomotionClass::Init()
{
  this->Owner = 0; /*0x55a6c6*/
  this->LinkedTo = 0; /*0x55a6c9*/
  this->Powered = 1; /*0x55a6cc*/
  this->Dirty = 1; /*0x55a6cf*/
  this->RefCount = 0; /*0x55a6d2*/
  *(_DWORD *)this->ILocomotion = &(void*)(void*)&LocomotionClass_vftable; /*0x55a6d5*/
  *(_DWORD *)&this->ILocomotion[4] = &(void*)(void*)&LocomotionClass_vftable; /*0x55a6db*/
  return this->ILocomotion; /*0x55a6e2*/
}
} // namespace gamemd
// 0x55A6F0
namespace gamemd {
void LocomotionClass::Construct()
{
  *(_DWORD *)this->ILocomotion = &(void*)(void*)&LocomotionClass_vftable; /*0x55a6f0*/
  *(_DWORD *)&this->ILocomotion[4] = &(void*)(void*)&LocomotionClass_vftable; /*0x55a6f6*/
  this->LinkedTo = 0; /*0x55a6fd*/
}
} // namespace gamemd
// 0x5172F0
namespace gamemd {
LocomotionClass * LocomotionClass::ProcessMove(char a2)
{
  LocomotionClass::Construct(); /*0x5172f3*/
  if ( (a2 & 1) != 0 ) /*0x5172fd*/
    RA2_OPDEL(); /*0x517300*/
  return this->ILocomotion; /*0x51730a*/
}
} // namespace gamemd
