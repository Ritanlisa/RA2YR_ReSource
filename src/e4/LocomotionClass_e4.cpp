// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/FacingClass_e4.hpp"

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
#include "e4/classes/FrameSnapshot_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"

// 0x4AF540
namespace gamemd {
int LocomotionClass::Initialize()
{

  int v2; // ecx
  int v3; // ecx

  LocomotionClass::Init(this); /*0x4af543*/
  *((unsigned int *)this + 7) = 0; /*0x4af54d*/
  *((unsigned int *)this + 8) = 0; /*0x4af550*/
  v2 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4af553*/
  *((unsigned int *)this + 11) = 0; /*0x4af559*/
  *((unsigned int *)this + 9) = v2; /*0x4af55c*/
  *((unsigned int *)this + 12) = 0; /*0x4af55f*/
  *((unsigned int *)this + 13) = g_DDraw_ClipRect; /*0x4af568*/
  *((unsigned long long *)this + 7) = qword_8A0794; /*0x4af570*/
  *((unsigned int *)this + 16) = g_DDraw_ClipRect; /*0x4af585*/
  *((unsigned int *)this + 17) = qword_8A0794; /*0x4af58e*/
  v3 = HIDWORD(qword_8A0794); /*0x4af591*/
  *((unsigned int *)this + 20) = 0; /*0x4af597*/
  *((unsigned int *)this + 19) = 0; /*0x4af59a*/
  *((unsigned int *)this + 18) = v3; /*0x4af59d*/
  *((unsigned int *)this + 21) = 0; /*0x4af5a3*/
  *((unsigned int *)this + 22) = -1; /*0x4af5a6*/
  *((unsigned int *)this + 23) = -1; /*0x4af5a9*/
  *((unsigned char *)this + 96) = 0; /*0x4af5ac*/
  *((unsigned char *)this + 97) = 0; /*0x4af5af*/
  *((unsigned char *)this + 98) = 0; /*0x4af5b2*/
  *((unsigned char *)this + 99) = 0; /*0x4af5b5*/
  *((unsigned char *)this + 100) = 0; /*0x4af5b8*/
  *((unsigned char *)this + 101) = 1; /*0x4af5bb*/
  *((unsigned int *)this + 26) = 0; /*0x4af5bf*/
  *(unsigned int *)this->ILocomotion = (unsigned int)(&vt_DriveLocomotionClass); /*0x4af5c2*/
  *(unsigned int *)&(&this->ILocomotion)[4] = &vt_DriveLocomotionClass; /*0x4af5c8*/
  *((unsigned int *)this + 6) = (unsigned int)(&off_7E7E8C); /*0x4af5cf*/
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
    result = *(wchar_t **)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4c54be*/
    if ( *(int *)(unsigned int *)((char *)&stru_A8EB00 + 416) >= v3[11] + v3[12] ) /*0x4c54c5*/
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

  if ( (*((int (**)(FootClass *))this->LinkedTo->vtable1 + 97))(this->LinkedTo) == 7 /*0x4cfa8e*/
    || (LOBYTE(vtable1) = BuildingClass::GetType_Thunk(&this->LinkedTo->TechnoClass), !(unsigned char)vtable1) )
  {
    vtable1 = (*((int (**)(FootClass *))this->LinkedTo->vtable1 + 11))(this->LinkedTo); /*0x4cfa95*/
    if ( vtable1 == 2 /*0x4cfacc*/
      && (LinkedTo = this->LinkedTo, vtable1 = (int)LinkedTo[1], *(unsigned char *)(vtable1 + 3597))
      && (v4 = (Cell *)(*((int (**)(FootClass *))LinkedTo->vtable1 + 111))(this->LinkedTo),
          v5 = ((Cell *)(v4))->IsBridge(),
          LOBYTE(vtable1) = ((Array *)((Array *)this->LinkedTo))->Contains((int)v5),
          !(unsigned char)vtable1) )
    {
      LOBYTE(vtable1) = (*((char (**)(FootClass *, unsigned int, int))LinkedTo->vtable1 + 289))(LinkedTo, 0, 1); /*0x4cfad6*/
    }
    else
    {
      *((unsigned char *)this + 80) = 0; /*0x4cfadf*/
      *((unsigned char *)this + 81) = 1; /*0x4cfae3*/
      *((unsigned char *)this + 82) = 0; /*0x4cfae7*/
      *((unsigned int *)this + 14) = 0; /*0x4cfaeb*/
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

  result = *((unsigned int *)this + 373); /*0x4dc760*/
  if ( result ) /*0x4dc768*/
    return *(unsigned int *)(result + 36); /*0x4dc76a*/
  return result; /*0x4dc77d*/

}
} // namespace gamemd
// 0x513C20
namespace gamemd {
int LocomotionClass::ProcessData()
{

  LocomotionClass::Init(this); /*0x513c24*/
  *((unsigned int *)this + 6) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 1436); /*0x513c34*/
  *((unsigned int *)this + 7) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 1440); /*0x513c3d*/
  *((unsigned int *)this + 8) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 1444); /*0x513c49*/
  *((unsigned int *)this + 9) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 1436); /*0x513c51*/
  *((unsigned int *)this + 10) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 1440); /*0x513c59*/
  *((unsigned int *)this + 11) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 1444); /*0x513c64*/
  ((FrameSnapshot *)((FrameSnapshot *)this + 6))->InitMax(0); /*0x513c67*/
  *((unsigned int *)this + 18) = 0; /*0x513c6c*/
  *((unsigned int *)this + 20) = 0; /*0x513c6f*/
  *((unsigned int *)this + 22) = 0; /*0x513c72*/
  *((unsigned int *)this + 24) = 0; /*0x513c75*/
  *((unsigned int *)this + 19) = 0; /*0x513c78*/
  *((unsigned int *)this + 21) = 0; /*0x513c7b*/
  *((unsigned int *)this + 23) = 1072693248; /*0x513c7e*/
  *((unsigned int *)this + 25) = 0; /*0x513c85*/
  *((unsigned char *)this + 104) = 0; /*0x513c88*/
  *((unsigned int *)this + 27) = 0; /*0x513c8b*/
  *((unsigned char *)this + 112) = 0; /*0x513c8e*/
  *(unsigned int *)this->ILocomotion = (unsigned int)(&vt_HoverLocomotionClass); /*0x513c91*/
  *(unsigned int *)&(&this->ILocomotion)[4] = &vt_HoverLocomotionClass; /*0x513c97*/
  return (int)this->ILocomotion; /*0x513ca0*/

}
} // namespace gamemd
// 0x54AC40
namespace gamemd {
int LocomotionClass::Update(void *a1, void *a2, void *a3, void *a4)
{

  int v2; // ecx
  int v4; // [esp+Ch] [ebp-4h] BYREF

  LocomotionClass::Init((LocomotionClass *)this); /*0x54ac46*/
  (&this->DestinationCoords)[0] = dword_ABC5A8; /*0x54ac59*/
  (&this->DestinationCoords)[1] = dword_ABC5AC; /*0x54ac61*/
  v2 = dword_ABC5B0; /*0x54ac64*/
  this->IsMoving = 0; /*0x54ac6a*/
  *(unsigned int *)this->__pad_50 = 0; /*0x54ac6d*/
  (&this->DestinationCoords)[2] = v2; /*0x54ac70*/
  FrameSnapshot::InitMax( /*0x54ac82*/
    (FrameSnapshot *)&this->__pad_50[4],
    *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1036));
  this->CurrentHeight = 0; /*0x54ac87*/
  *(unsigned int *)&this->__pad_74[4] = 0; /*0x54ac8a*/
  *(unsigned int *)&this->DestinationReached = 0; /*0x54ac8d*/
  *(unsigned int *)this->__pad_74 = 0; /*0x54ac93*/
  *(unsigned int *)&this->__pad_74[8] = 0; /*0x54ac96*/
  *(unsigned int *)&this->__pad_74[12] = 0; /*0x54ac99*/
  *(unsigned int *)&this->__pad_89[3] = 0; /*0x54ac9f*/
  this->__pad_89[7] = 0; /*0x54aca5*/
  this->unknown_91 = 0; /*0x54acab*/
  this->Piggybackee = 0; /*0x54acb5*/
  this->LocomotionClass[0] = (int)&vt_JumpjetLocomotionClass; /*0x54acc3*/
  this->LocomotionClass[1] = (int)&vt_JumpjetLocomotionClass; /*0x54acc9*/
  this->TurnRate = (int)&vt_JumpjetLocomotionClass; /*0x54acd0*/
  LOWORD(v4) = 0x4000; /*0x54acd7*/
  FacingClass::Update((unsigned short *)(&this->__pad_50[4]), &v4); /*0x54acdc*/
  LOWORD(v4) = 0x4000; /*0x54ace8*/
  FacingClass::Set_SyncLog(&this->__pad_50[4], &v4); /*0x54aced*/
  return (int)this->LocomotionClass; /*0x54acf4*/

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
  *(unsigned int *)this->ILocomotion = (unsigned int)(&vt_LocomotionClass); /*0x55a6d5*/
  *(unsigned int *)&this->ILocomotion[4] = &vt_LocomotionClass; /*0x55a6db*/
  return this->ILocomotion; /*0x55a6e2*/

}
} // namespace gamemd
// 0x55A6F0
namespace gamemd {
void LocomotionClass::Construct(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6)
{

  *(unsigned int *)this->ILocomotion = (unsigned int)(&vt_LocomotionClass); /*0x55a6f0*/
  *(unsigned int *)&(&this->ILocomotion)[4] = &vt_LocomotionClass; /*0x55a6f6*/
  this->LinkedTo = 0; /*0x55a6fd*/

}
} // namespace gamemd
// 0x5172F0
namespace gamemd {
LocomotionClass * LocomotionClass::ProcessMove(char a2)
{

  LocomotionClass::Construct(Block); /*0x5172f3*/
  if ( (a2 & 1) != 0 ) /*0x5172fd*/
    __3_YAXPAX_Z(Block); /*0x517300*/
  return Block->ILocomotion; /*0x51730a*/

}
} // namespace gamemd