// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
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

// 0x4AF540
namespace gamemd {
int LocomotionClass::Initialize()
{
  int v2; // ecx
  int v3; // ecx

  LocomotionClass::Init(); /*0x4af543*/
  this->u32_1C = 0; /*0x4af54d*/
  this->u32_8 = 0; /*0x4af550*/
  v2 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4af553*/
  this->u32_2C = 0; /*0x4af559*/
  this->u32_24 = (unsigned int)(v2);
  *(unsigned int *)&this->LinkedTo = 0; /*0x4af55f*/
  this->u32_34 = (unsigned int)(g_DDraw_ClipRect);
  this->u32_38 = (unsigned int)(qword_8A0794);
  this->u32_10 = (unsigned int)(g_DDraw_ClipRect);
  this->Dirty = (unsigned int)(qword_8A0794);
  v3 = (unsigned int)(IDA_HIDWORD(qword_8A0794));
  this->u8_14 = (unsigned int)(0);
  this->u32_4C = (unsigned int)(0);
  this->u32_48 = (unsigned int)(v3);
  this->__pad_015 = (unsigned int)(0);
  this->u32_58 = (unsigned int)(-1);
  this->u32_5C = (unsigned int)(-1);
  this->u32_60 = (unsigned int)(0);
  this->u32_61 = 0; /*0x4af5af*/
  this->u32_62 = 0; /*0x4af5b2*/
  this->u32_63 = 0; /*0x4af5b5*/
  this->u32_64 = 0; /*0x4af5b8*/
  this->u32_65 = 1; /*0x4af5bb*/
  this->u32_68 = 0; /*0x4af5bf*/
  *(unsigned int *)this->ILocomotion = (void*)&DriveLocomotionClass_vftable; /*0x4af5c2*/
  *(unsigned int *)&this-((unsigned int *)(>ILocomotion))[4] = (void*)&DriveLocomotionClass_vftable; /*0x4af5c8*/
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
  unsigned int *v3; // ecx

  result = (wchar_t *)dword_8A3880; /*0x4c54a0*/
  for ( i = dword_8A3880 - 1; i >= 0; --i ) /*0x4c54ab*/
  {
    v3 = (unsigned int *)*((unsigned int *)dword_8A3874 + i); /*0x4c54b3*/
    result = *(wchar_t **)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4c54be*/
    if ( *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) >= v3[11] + v3[12] ) /*0x4c54c5*/
    {
      if ( v3 ) /*0x4c54c9*/
        result = (wchar_t *)(*(int (**)(unsigned int *, int))(*v3 + 32))(v3, 1); /*0x4c54cf*/
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
  unsigned int *v5; // eax

  if ( (*((int (**)(FootClass *))this->LinkedTo->TechnoClass + 97))(this->LinkedTo) == 7 /*0x4cfa8e*/
    || (IDA_LOBYTE(vtable1) = BuildingClass::GetType_Thunk(&this->LinkedTo->TechnoClass), !(unsigned char)vtable1) )
  {
    vtable1 = (*((int (**)(FootClass *))this->LinkedTo->TechnoClass + 11))(this->LinkedTo); /*0x4cfa95*/
    if ( vtable1 == 2 /*0x4cfacc*/
      && (LinkedTo = this->LinkedTo, vtable1 = (int)LinkedTo[1].?, *(unsigned char *)(vtable1 + 3597))
      && (v4 = (Cell *)(*((int (**)(FootClass *))LinkedTo->TechnoClass + 111))(this->LinkedTo),
          v5 = Cell::IsBridge(v4),
          IDA_LOBYTE(vtable1) = Array::Contains((Array *)this->LinkedTo, (int)v5),
          !(unsigned char)vtable1) )
    {
      IDA_LOBYTE(vtable1) = (*((char (**)(FootClass *, unsigned int, int))LinkedTo->TechnoClass + 289))(LinkedTo, 0, 1); /*0x4cfad6*/
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
  void * v1;
v1 = (void *)(this->q5D4);
  if ( v1 && v1->q024->q0F2 ) /*0x4dc76d*/
    return 1.0; /*0x4dc777*/
  else
    return *(double *)(&this->u32_2108); /*0x4dc77e*/
}
} // namespace gamemd
// 0x513C20
namespace gamemd {
int LocomotionClass::ProcessData()
{
  LocomotionClass::Init(); /*0x513c24*/
  this->u32_18 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1436); /*0x513c34*/
  this->u32_1C = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1440); /*0x513c3d*/
  this->u32_8 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1444); /*0x513c49*/
  this->u32_24 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1436); /*0x513c51*/
  this->u32_28 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1440); /*0x513c59*/
  this->u32_2C = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1444); /*0x513c64*/
  FrameSnapshot::InitMax((FrameSnapshot *)this + 6, 0); /*0x513c67*/
  this->u32_48 = 0; /*0x513c6c*/
  this->u8_14 = 0; /*0x513c6f*/
  this->u32_58 = 0; /*0x513c72*/
  this->u32_60 = 0; /*0x513c75*/
  this->u32_4C = 0; /*0x513c78*/
  this->__pad_015 = 0; /*0x513c7b*/
  this->u32_5C = 1072693248; /*0x513c7e*/
  this->u32_64 = 0; /*0x513c85*/
  this->u32_68 = 0; /*0x513c88*/
  this->u32_6C = 0; /*0x513c8b*/
  this->u32_70 = 0; /*0x513c8e*/
  *(unsigned int *)this->ILocomotion = (void*)&HoverLocomotionClass_vftable; /*0x513c91*/
  *(unsigned int *)&this-((unsigned int *)(>ILocomotion))[4] = (void*)&HoverLocomotionClass_vftable; /*0x513c97*/
  return (int)this->ILocomotion; /*0x513ca0*/
}
} // namespace gamemd
// 0x54AC40
namespace gamemd {
int LocomotionClass::Update(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0)
{
  int v2; // ecx
  int v4; // [esp+Ch] [ebp-4h] BYREF

  LocomotionClass::Init(); /*0x54ac46*/
  this-((unsigned int *)(>DestinationCoords))[0] = dword_ABC5A8; /*0x54ac59*/
  this-((unsigned int *)(>DestinationCoords))[1] = dword_ABC5AC; /*0x54ac61*/
  v2 = dword_ABC5B0; /*0x54ac64*/
  this->IsMoving = 0; /*0x54ac6a*/
  *(unsigned int *)this->__pad_50 = 0; /*0x54ac6d*/
  this-((unsigned int *)(>DestinationCoords))[2] = v2; /*0x54ac70*/
  FrameSnapshot::InitMax( /*0x54ac82*/
    (FrameSnapshot *)&this-((unsigned int *)(>__pad_50))[4],
    *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1036));
  this->CurrentHeight = 0; /*0x54ac87*/
  *(unsigned int *)&this-((unsigned int *)(>__pad_74))[4] = 0; /*0x54ac8a*/
  this->DestinationReached = (unsigned int)(0); /*0x54ac8d*/
  *(unsigned int *)this->__pad_74 = 0; /*0x54ac93*/
  *(unsigned int *)&this-((unsigned int *)(>__pad_74))[8] = 0; /*0x54ac96*/
  *(unsigned int *)&this-((unsigned int *)(>__pad_74))[12] = 0; /*0x54ac99*/
  *(unsigned int *)&this-((unsigned int *)(>__pad_89))[3] = 0; /*0x54ac9f*/
  this-((unsigned int *)(>__pad_89))[7] = 0; /*0x54aca5*/
  this->unknown_91 = 0; /*0x54acab*/
  this->Piggybackee = 0; /*0x54acb5*/
  this->LocomotionClass[0] = (int)&JumpjetLocomotionClass_vftable; /*0x54acc3*/
  this->LocomotionClass[1] = (int)&JumpjetLocomotionClass_vftable; /*0x54acc9*/
  this->TurnRate = (int)&JumpjetLocomotionClass_vftable; /*0x54acd0*/
  IDA_LOWORD(v4) = 0x4000; /*0x54acd7*/
  FacingClass::Update(&this-((unsigned int *)(>__pad_50))[4], &v4); /*0x54acdc*/
  IDA_LOWORD(v4) = 0x4000; /*0x54ace8*/
  FacingClass::Set_SyncLog(&this-((unsigned int *)(>__pad_50))[4], &v4); /*0x54aced*/
  return (int)this->LocomotionClass; /*0x54acf4*/
}
} // namespace gamemd
// 0x55A6C0
namespace gamemd {
int LocomotionClass::Init(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0)
{
  this->Owner = (unsigned int)((gamemd::FootClass *)((unsigned int *)(0)));
  this->LinkedTo = (gamemd::FootClass *)((unsigned int *)(0));
  this->Powered = (unsigned int *)(1);
  this->Dirty = (unsigned int *)(1);
  this->RefCount = (unsigned int *)(0);
  *(unsigned int *)this->ILocomotion = (void*)&LocomotionClass_vftable; /*0x55a6d5*/
  *(unsigned int *)&this-((unsigned int *)(>ILocomotion))[4] = (void*)&LocomotionClass_vftable; /*0x55a6db*/
  return this->ILocomotion; /*0x55a6e2*/
}
} // namespace gamemd
// 0x55A6F0
namespace gamemd {
void LocomotionClass::Construct()
{
  *(unsigned int *)this->ILocomotion = (void*)&LocomotionClass_vftable; /*0x55a6f0*/
  *(unsigned int *)&this-((unsigned int *)(>ILocomotion))[4] = (void*)&LocomotionClass_vftable; /*0x55a6f6*/
  *(unsigned int *)&this->LinkedTo = 0; /*0x55a6fd*/
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