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

  wchar_t *v2; // ecx
  int v3; // ecx

  LocomotionClass::Init((unsigned int *)this); /*0x4af543*/
  *((unsigned int *)this + 7) = 0; /*0x4af54d*/
  *((unsigned int *)this + 8) = 0; /*0x4af550*/
  v2 = MEMORY[0xA8ED84]; /*0x4af553*/
  *((unsigned int *)this + 11) = 0; /*0x4af559*/
  *((unsigned int *)this + 9) = v2; /*0x4af55c*/
  *((unsigned int *)this + 12) = 0; /*0x4af55f*/
  *((unsigned int *)this + 13) = MEMORY[0x8A0790]; /*0x4af568*/
  *((unsigned long long *)this + 7) = MEMORY[0x8A0794]; /*0x4af570*/
  *((unsigned int *)this + 16) = MEMORY[0x8A0790]; /*0x4af585*/
  *((unsigned int *)this + 17) = MEMORY[0x8A0794]; /*0x4af58e*/
  v3 = HIDWORD(MEMORY[0x8A0794]); /*0x4af591*/
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
  *(unsigned int *)this = &DriveLocomotionClass::`vftable'; /*0x4af5c2*/
  *((unsigned int *)this + 1) = &vt_DriveLocomotionClass; /*0x4af5c8*/
  *((unsigned int *)this + 6) = &off_7E7E8C; /*0x4af5cf*/
  return this; /*0x4af5d8*/

}
} // namespace gamemd
// 0x4C54A0
namespace gamemd {
void * LocomotionClass::UpdateAll()
{

  wchar_t *result; // eax
  int i; // esi
  unsigned int *v2; // ecx

  result = (wchar_t *)MEMORY[0x8A3880]; /*0x4c54a0*/
  for ( i = MEMORY[0x8A3880] - 1; i >= 0; --i ) /*0x4c54ab*/
  {
    v2 = (unsigned int *)*((unsigned int *)MEMORY[0x8A3874] + i); /*0x4c54b3*/
    result = MEMORY[0xA8ED84]; /*0x4c54be*/
    if ( (int)MEMORY[0xA8ED84] >= v2[11] + v2[12] ) /*0x4c54c5*/
    {
      if ( v2 ) /*0x4c54c9*/
        result = (wchar_t *)(*(int (**)(unsigned int *, int))(*v2 + 32))(v2, 1); /*0x4c54cf*/
    }
  }
  return result; /*0x4c54d5*/

}
} // namespace gamemd
// 0x4CFA70
namespace gamemd {
int LocomotionClass::CheckBridgeBlock()
{

  int v2; // eax
  unsigned int *v3; // edi
  unsigned int *v4; // eax
  unsigned int *v5; // eax

  if ( (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 388))(*((unsigned int *)this + 3)) == 7 /*0x4cfa8e*/
    || (LOBYTE(v2) = BuildingClass::GetType_Thunk(), !(unsigned char)v2) )
  {
    v2 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 44))(*((unsigned int *)this + 3)); /*0x4cfa95*/
    if ( v2 == 2 /*0x4cfacc*/
      && (v3 = *(unsigned int **)((char *)this + 12), v2 = v3[433], *(unsigned char *)(v2 + 3597))
      && (v4 = (unsigned int *)(*(int (**)(unsigned int))(*v3 + 444))(*((unsigned int *)this + 3)),
          v5 = Cell::IsBridge(v4),
          LOBYTE(v2) = Array::Contains(*(int **)((char *)this + 12), (int)v5),
          !(unsigned char)v2) )
    {
      LOBYTE(v2) = (*(int (**)(unsigned int *, unsigned int, int))(*v3 + 1156))(v3, 0, 1); /*0x4cfad6*/
    }
    else
    {
      *((unsigned char *)this + 80) = 0; /*0x4cfadf*/
      *((unsigned char *)this + 81) = 1; /*0x4cfae3*/
      *((unsigned char *)this + 82) = 0; /*0x4cfae7*/
      *((unsigned int *)this + 14) = 0; /*0x4cfaeb*/
    }
  }
  return v2; /*0x4cfadc*/

}
} // namespace gamemd
// 0x4DC760
namespace gamemd {
int LocomotionClass::GetSpeedMultiplier()
{

  int v1; // eax

  v1 = *((unsigned int *)this + 373); /*0x4dc760*/
  if ( v1 && *(unsigned char *)(*(unsigned int *)(v1 + 36) + 242) ) /*0x4dc76d*/
    return 1.0; /*0x4dc777*/
  else
    return *(double *)((char *)this + 1328); /*0x4dc77e*/

}
} // namespace gamemd
// 0x513C20
namespace gamemd {
int LocomotionClass::ProcessData()
{

  LocomotionClass::Init((unsigned int *)this); /*0x513c24*/
  *((unsigned int *)this + 6) = MEMORY[0xA8F180]; /*0x513c34*/
  *((unsigned int *)this + 7) = MEMORY[0xA8F184]; /*0x513c3d*/
  *((unsigned int *)this + 8) = MEMORY[0xA8F188]; /*0x513c49*/
  *((unsigned int *)this + 9) = MEMORY[0xA8F180]; /*0x513c51*/
  *((unsigned int *)this + 10) = MEMORY[0xA8F184]; /*0x513c59*/
  *((unsigned int *)this + 11) = MEMORY[0xA8F188]; /*0x513c64*/
  FrameSnapshot::InitMax((unsigned short *)((char *)this + 48), 0); /*0x513c67*/
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
  *(unsigned int *)this = &HoverLocomotionClass::`vftable'; /*0x513c91*/
  *((unsigned int *)this + 1) = &vt_HoverLocomotionClass; /*0x513c97*/
  return this; /*0x513ca0*/

}
} // namespace gamemd
// 0x54AC40
namespace gamemd {
int LocomotionClass::Update(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0)
{

  int v2; // ecx
  int v4; // [esp+Ch] [ebp-4h] BYREF

  LocomotionClass::Init((unsigned int *)this); /*0x54ac46*/
  *((unsigned int *)this + 16) = dword_ABC5A8; /*0x54ac59*/
  *((unsigned int *)this + 17) = dword_ABC5AC; /*0x54ac61*/
  v2 = dword_ABC5B0; /*0x54ac64*/
  *((unsigned char *)this + 76) = 0; /*0x54ac6a*/
  *((unsigned int *)this + 20) = 0; /*0x54ac6d*/
  *((unsigned int *)this + 18) = v2; /*0x54ac70*/
  FrameSnapshot::InitMax((unsigned short *)((char *)this + 84), MEMORY[0x8871E0]->?[8]); /*0x54ac82*/
  *((unsigned int *)this + 28) = 0; /*0x54ac87*/
  *((unsigned int *)this + 30) = 0; /*0x54ac8a*/
  *((unsigned int *)this + 34) = 0; /*0x54ac8d*/
  *((unsigned int *)this + 29) = 0; /*0x54ac93*/
  *((unsigned int *)this + 31) = 0; /*0x54ac96*/
  *((unsigned int *)this + 32) = 0; /*0x54ac99*/
  *((unsigned int *)this + 35) = 0; /*0x54ac9f*/
  *((unsigned char *)this + 144) = 0; /*0x54aca5*/
  *((unsigned char *)this + 145) = 0; /*0x54acab*/
  *((unsigned int *)this + 37) = 0; /*0x54acb5*/
  *(unsigned int *)this = &JumpjetLocomotionClass::`vftable'; /*0x54acc3*/
  *((unsigned int *)this + 1) = &JumpjetLocomotionClass::`vftable'; /*0x54acc9*/
  *((unsigned int *)this + 6) = &vt_JumpjetLocomotionClass; /*0x54acd0*/
  LOWORD(v4) = 0x4000; /*0x54acd7*/
  FacingClass::Update((char *)((char *)this + 84), &v4); /*0x54acdc*/
  LOWORD(v4) = 0x4000; /*0x54ace8*/
  FacingClass::Set_SyncLog((char *)((char *)this + 84), &v4); /*0x54aced*/
  return this; /*0x54acf4*/

}
} // namespace gamemd
// 0x55A6C0
namespace gamemd {
int LocomotionClass::Init(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0)
{

  *((unsigned int *)this + 2) = 0; /*0x55a6c6*/
  *((unsigned int *)this + 3) = 0; /*0x55a6c9*/
  *((unsigned char *)this + 16) = 1; /*0x55a6cc*/
  *((unsigned char *)this + 17) = 1; /*0x55a6cf*/
  *((unsigned int *)this + 5) = 0; /*0x55a6d2*/
  *this = &LocomotionClass::`vftable'; /*0x55a6d5*/
  *((unsigned int *)this + 1) = &vt_LocomotionClass; /*0x55a6db*/
  return this; /*0x55a6e2*/

}
} // namespace gamemd
// 0x55A6F0
namespace gamemd {
void LocomotionClass::Construct()
{

  *this = &LocomotionClass::`vftable'; /*0x55a6f0*/
  *((unsigned int *)this + 1) = &vt_LocomotionClass; /*0x55a6f6*/
  *((unsigned int *)this + 3) = 0; /*0x55a6fd*/

}
} // namespace gamemd
// 0x5172F0
namespace gamemd {
LocomotionClass * LocomotionClass::ProcessMove(char a2)
{

  LocomotionClass::Construct(Block); /*0x5172f3*/
  if ( (a2 & 1) != 0 ) /*0x5172fd*/
    __3_YAXPAX_Z(Block); /*0x517300*/
  return (LocomotionClass *)Block; /*0x51730a*/

}
} // namespace gamemd