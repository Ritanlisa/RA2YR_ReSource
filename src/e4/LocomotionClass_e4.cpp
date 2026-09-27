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

// 0x4AF540
namespace gamemd {
int LocomotionClass::Initialize()
{
  int v3; // ecx

  LocomotionClass::Init(); /*0x4af543*/
  this->u32_1C = 0; /*0x4af54d*/
  this->q020 = 0; /*0x4af550*/
  g_CurrentFrame = g_CurrentFrame; /*0x4af553*/
  this->u32_2C = 0; /*0x4af559*/
  this->q024 = (gamemd::Coord *)(g_CurrentFrame);
  this->u32_30 = (int)(0);
  this->q034 = g_DDraw_ClipRect; /*0x4af568*/
  this->q038 = qword_8A0794; /*0x4af570*/
  this->q040 = g_DDraw_ClipRect; /*0x4af585*/
  this->q044 = qword_8A0794; /*0x4af58e*/
  v3 = IDA_HIDWORD(qword_8A0794); /*0x4af591*/
  this->q050 = 0; /*0x4af597*/
  this->u32_4C = 0; /*0x4af59a*/
  this->q048 = v3; /*0x4af59d*/
  this->ptr_24 = 0; /*0x4af5a3*/
  this->q058 = -1; /*0x4af5a6*/
  this->q05C = -1; /*0x4af5a9*/
  this->u8_60 = 0; /*0x4af5ac*/
  this->__pad_061 = 0; /*0x4af5af*/
  this->u8_62 = 0; /*0x4af5b2*/
  this->u8_63 = 0; /*0x4af5b5*/
  this->q064 = 0; /*0x4af5b8*/
  this->u32_65 = 1; /*0x4af5bb*/
  this->q068 = 0; /*0x4af5bf*/
  this->ptr_18 = &off_7E7E8C; /*0x4af5cf*/
  return this; /*0x4af5d8*/
}
} // namespace gamemd
// 0x4C54A0
namespace gamemd {
void * LocomotionClass::UpdateAll()
{
  unsigned int result;
  int i; // esi
  unsigned int *v2; // ecx

  result = (unsigned int)((wchar_t *)dword_8A3880);
  for ( i = dword_8A3880 - 1; i >= 0; --i ) /*0x4c54ab*/
  {
    v2 = (unsigned int *)*((unsigned int *)dword_8A3874 + i); /*0x4c54b3*/
    result = g_CurrentFrame; /*0x4c54be*/
    if ( (int)g_CurrentFrame >= v2[11] + v2[12] ) /*0x4c54c5*/
    {
      if ( v2 ) /*0x4c54c9*/
        result = (wchar_t *)(*(int (__thiscall **)(unsigned int *, int))(*v2 + 32))(v2, 1); /*0x4c54cf*/
    }
  }
  return (void *)(result);
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

  if ( (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->vtable22) + 388))(this->LinkedTo) == 7 /*0x4cfa8e*/
    || (IDA_LOBYTE(v2) = BuildingClass::GetType_Thunk(), !(unsigned char)v2) )
  {
    v2 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->vtable22) + 44))(this->LinkedTo); /*0x4cfa95*/
    if ( v2 == 2 /*0x4cfacc*/
      && (v3 = *(unsigned int **)(&this->vtable22), v2 = v3[433], *(unsigned char *)(v2 + 3597))
      && (v4 = (unsigned int *)(*(int (__thiscall **)(unsigned int))(*v3 + 444))(this->LinkedTo),
          v5 = Cell::IsBridge(v4),
          IDA_LOBYTE(v2) = Array::Contains(*(int **)(&this->vtable22), (int)v5),
          !(unsigned char)v2) )
    {
      IDA_LOBYTE(v2) = (*(int (__thiscall **)(unsigned int *, unsigned int, int))(*v3 + 1156))(v3, 0, 1); /*0x4cfad6*/
    }
    else
    {
      this->q050 = 0; /*0x4cfadf*/
      this->q144 = 1; /*0x4cfae3*/
      this->q148 = 0; /*0x4cfae7*/
      this->q038 = 0; /*0x4cfaeb*/
    }
  }
  return v2; /*0x4cfadc*/
}
} // namespace gamemd
// 0x4DC760
namespace gamemd {
int LocomotionClass::GetSpeedMultiplier()
{
  void * v1;

  v1 = this->q5D4; /*0x4dc760*/
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
  this->Dest = g_ScoreDisplayState1; /*0x513c34*/
  this->HoverLocomotionClass_field_bool_70 = g_ScoreDisplayState2; /*0x513c3d*/
  this->q020 = g_ScoreDisplayState3; /*0x513c49*/
  this->HeadToCoord = g_ScoreDisplayState1; /*0x513c51*/
  this->q028 = g_ScoreDisplayState2; /*0x513c59*/
  this->u32_2C = g_ScoreDisplayState3; /*0x513c64*/
  FrameSnapshot::InitMax((unsigned short *)(&this->q0108), 0); /*0x513c67*/
  this->MaxSpeed = 0; /*0x513c6c*/
  this->CurrentSpeed = 0; /*0x513c6f*/
  this->BoostSpeed = 0; /*0x513c72*/
  this->CurrentWobbles = 0; /*0x513c75*/
  this->q130 = 0; /*0x513c78*/
  this->q054 = 0; /*0x513c7b*/
  this->q170 = 1072693248; /*0x513c7e*/
  this->q064 = 0; /*0x513c85*/
  this->HoverLocomotionClass_field_bool_68 = 0; /*0x513c88*/
  this->HoverLocomotionClass_field_6C = 0; /*0x513c8b*/
  this->HoverLocomotionClass_field_bool_70 = 0; /*0x513c8e*/
  return this; /*0x513ca0*/
}
} // namespace gamemd
// 0x54AC40
namespace gamemd {
int LocomotionClass::Update()
{
  int v4; // [esp+Ch] [ebp-4h] BYREF

  LocomotionClass::Init(); /*0x54ac46*/
  this->DestinationCoords = dword_ABC5A8; /*0x54ac59*/
  this->q044 = (int)(dword_ABC5AC);
  dword_ABC5B0 = dword_ABC5B0; /*0x54ac64*/
  this->IsMoving = 0; /*0x54ac6a*/
  this->CurrentState = 0; /*0x54ac6d*/
  this->ptr_48 = dword_ABC5B0; /*0x54ac70*/
  FrameSnapshot::InitMax((unsigned short *)(&this->Climb4), g_RulesClass_Instance->V3Rocket[8]); /*0x54ac82*/
  this->CurrentHeight = 0; /*0x54ac87*/
  this->q078 = 0; /*0x54ac8a*/
  this->DestinationReached = 0; /*0x54ac8d*/
  this->q074 = 0; /*0x54ac93*/
  this->u32_7C = 0; /*0x54ac96*/
  this->q080 = 0; /*0x54ac99*/
  this->q08C = 0; /*0x54ac9f*/
  this->u32_90 = 0; /*0x54aca5*/
  this->unknown_91 = 0; /*0x54acab*/
  this->Piggybackee = 0; /*0x54acb5*/
  IDA_LOWORD(v4) = 0x4000; /*0x54acd7*/
  FacingClass::Update((char *)(&this->Climb4), &v4); /*0x54acdc*/
  IDA_LOWORD(v4) = 0x4000; /*0x54ace8*/
  FacingClass::Set_SyncLog((char *)(&this->Climb4), &v4); /*0x54aced*/
  return this; /*0x54acf4*/
}
} // namespace gamemd
// 0x55A6C0
namespace gamemd {
unsigned int * LocomotionClass::Init()
{
  this->u32_8 = (unsigned int *)(0);
  this->LinkedTo = 0; /*0x55a6c9*/
  this->u32_10 = 1; /*0x55a6cc*/
  this->Dirty = 1; /*0x55a6cf*/
  this->u8_14 = 0; /*0x55a6d2*/
  return this; /*0x55a6e2*/
}
} // namespace gamemd
// 0x55A6F0
namespace gamemd {
void LocomotionClass::Construct()
{
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
  return this; /*0x51730a*/
}
} // namespace gamemd