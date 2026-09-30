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
    *((unsigned int *)this + 112) = 0;
    *((unsigned int *)this + 128) = 0;
  v2 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4af553*/
    *((unsigned int *)this + 176) = 0;
  this->u32_24 = (unsigned int)(v2);
    *((unsigned int *)this + 192) = 0;
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
    *((unsigned char *)this + 388) = 0;
    *((unsigned char *)this + 392) = 0;
    *((unsigned char *)this + 396) = 0;
    *((unsigned char *)this + 400) = 0;
    *((unsigned char *)this + 404) = 1;
    *((unsigned int *)this + 416) = 0;
  *(unsigned int *)this->ILocomotion = (void*)&DriveLocomotionClass_vftable; /*0x4af5c2*/
  *(unsigned int *)&this-((unsigned int *)(>ILocomotion))[4] = (void*)&DriveLocomotionClass_vftable; /*0x4af5c8*/
    *((unsigned int *)this + 96) = &off_7E7E8C;
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

    if ( (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 48) + 388))(*((unsigned int *)this + 48)) == 7
    || (IDA_LOBYTE(vtable1) = BuildingClass::GetType_Thunk(&this->LinkedTo->TechnoClass), !(unsigned char)vtable1) )
  {
        v2 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 48) + 44))(*((unsigned int *)this + 48));
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
            *((unsigned char *)this + 320) = 0;
            *((unsigned char *)this + 324) = 1;
            *((unsigned char *)this + 328) = 0;
            *((unsigned int *)this + 224) = 0;
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
        return *(double *)((char *)this + 5312);
}
} // namespace gamemd
// 0x513C20
namespace gamemd {
int LocomotionClass::ProcessData()
{
  LocomotionClass::Init(); /*0x513c24*/
    *((unsigned int *)this + 96) = MEMORY[0xA8F180];
    *((unsigned int *)this + 112) = MEMORY[0xA8F184];
    *((unsigned int *)this + 128) = MEMORY[0xA8F188];
    *((unsigned int *)this + 144) = MEMORY[0xA8F180];
    *((unsigned int *)this + 160) = MEMORY[0xA8F184];
    *((unsigned int *)this + 176) = MEMORY[0xA8F188];
  FrameSnapshot::InitMax((FrameSnapshot *)this + 6, 0); /*0x513c67*/
    *((unsigned int *)this + 288) = 0;
    *((unsigned int *)this + 320) = 0;
    *((unsigned int *)this + 352) = 0;
    *((unsigned int *)this + 384) = 0;
    *((unsigned int *)this + 304) = 0;
    *((unsigned int *)this + 336) = 0;
    *((unsigned int *)this + 368) = 1072693248;
    *((unsigned int *)this + 400) = 0;
    *((unsigned char *)this + 416) = 0;
    *((unsigned int *)this + 432) = 0;
    *((unsigned char *)this + 448) = 0;
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
    *((unsigned char *)this + 304) = 0;
    *((unsigned int *)this + 320) = 0;
  this-((unsigned int *)(>DestinationCoords))[2] = v2; /*0x54ac70*/
  FrameSnapshot::InitMax( /*0x54ac82*/
    (FrameSnapshot *)&this-((unsigned int *)(>__pad_50))[4],
    *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1036));
    *((unsigned int *)this + 448) = 0;
  *(unsigned int *)&this-((unsigned int *)(>__pad_74))[4] = 0; /*0x54ac8a*/
    *((unsigned int *)this + 544) = 0;
    *((unsigned int *)this + 464) = 0;
  *(unsigned int *)&this-((unsigned int *)(>__pad_74))[8] = 0; /*0x54ac96*/
  *(unsigned int *)&this-((unsigned int *)(>__pad_74))[12] = 0; /*0x54ac99*/
  *(unsigned int *)&this-((unsigned int *)(>__pad_89))[3] = 0; /*0x54ac9f*/
  this-((unsigned int *)(>__pad_89))[7] = 0; /*0x54aca5*/
    *((unsigned char *)this + 580) = 0;
    *((unsigned int *)this + 592) = 0;
    *(unsigned int *)this = &JumpjetLocomotionClass::`vftable';
    *((unsigned int *)this + 16) = &JumpjetLocomotionClass::`vftable';
    *((unsigned int *)this + 96) = &vt_JumpjetLocomotionClass;
  IDA_LOWORD(v4) = 0x4000; /*0x54acd7*/
  FacingClass::Update(&this-((unsigned int *)(>__pad_50))[4], &v4); /*0x54acdc*/
  IDA_LOWORD(v4) = 0x4000; /*0x54ace8*/
  FacingClass::Set_SyncLog(&this-((unsigned int *)(>__pad_50))[4], &v4); /*0x54aced*/
    return this;
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
    *((unsigned int *)this + 12) = 0;
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