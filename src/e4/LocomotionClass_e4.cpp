// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Cell_e4.hpp"

// 0x4AF540
int LocomotionClass::Initialize()
{
  wchar_t *v2; // ecx
  int v3; // ecx

  LocomotionClass::Init((_DWORD *)this); /*0x4af543*/
  *(_DWORD *)(this + 28) = 0; /*0x4af54d*/
  *(_DWORD *)(this + 32) = 0; /*0x4af550*/
  v2 = g_CurrentFrame; /*0x4af553*/
  *(_DWORD *)(this + 44) = 0; /*0x4af559*/
  *(_DWORD *)(this + 36) = v2; /*0x4af55c*/
  *(_DWORD *)(this + 48) = 0; /*0x4af55f*/
  *(_DWORD *)(this + 52) = g_DDraw_ClipRect; /*0x4af568*/
  *(_QWORD *)(this + 56) = qword_8A0794; /*0x4af570*/
  *(_DWORD *)(this + 64) = g_DDraw_ClipRect; /*0x4af585*/
  *(_DWORD *)(this + 68) = qword_8A0794; /*0x4af58e*/
  v3 = HIDWORD(qword_8A0794); /*0x4af591*/
  *(_DWORD *)(this + 80) = 0; /*0x4af597*/
  *(_DWORD *)(this + 76) = 0; /*0x4af59a*/
  *(_DWORD *)(this + 72) = v3; /*0x4af59d*/
  *(_DWORD *)(this + 84) = 0; /*0x4af5a3*/
  *(_DWORD *)(this + 88) = -1; /*0x4af5a6*/
  *(_DWORD *)(this + 92) = -1; /*0x4af5a9*/
  *(_BYTE *)(this + 96) = 0; /*0x4af5ac*/
  *(_BYTE *)(this + 97) = 0; /*0x4af5af*/
  *(_BYTE *)(this + 98) = 0; /*0x4af5b2*/
  *(_BYTE *)(this + 99) = 0; /*0x4af5b5*/
  *(_BYTE *)(this + 100) = 0; /*0x4af5b8*/
  *(_BYTE *)(this + 101) = 1; /*0x4af5bb*/
  *(_DWORD *)(this + 104) = 0; /*0x4af5bf*/
  *(_DWORD *)this = &DriveLocomotionClass::`vftable'; /*0x4af5c2*/
  *(_DWORD *)(this + 4) = &DriveLocomotionClass::`vftable'; /*0x4af5c8*/
  *(_DWORD *)(this + 24) = &off_7E7E8C; /*0x4af5cf*/
  return this; /*0x4af5d8*/
}
// 0x4C54A0
void * LocomotionClass::UpdateAll()
{
  wchar_t *result; // eax
  int i; // esi
  _DWORD *v2; // ecx

  result = (wchar_t *)dword_8A3880; /*0x4c54a0*/
  for ( i = dword_8A3880 - 1; i >= 0; --i ) /*0x4c54ab*/
  {
    v2 = (_DWORD *)*((_DWORD *)dword_8A3874 + i); /*0x4c54b3*/
    result = g_CurrentFrame; /*0x4c54be*/
    if ( (int)g_CurrentFrame >= v2[11] + v2[12] ) /*0x4c54c5*/
    {
      if ( v2 ) /*0x4c54c9*/
        result = (wchar_t *)(*(int (__thiscall **)(_DWORD *, int))(*v2 + 32))(v2, 1); /*0x4c54cf*/
    }
  }
  return result; /*0x4c54d5*/
}
// 0x4CFA70
int LocomotionClass::CheckBridgeBlock()
{
  int v2; // eax
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(*(_DWORD *)(this + 12)) == 7 /*0x4cfa8e*/
    || (LOBYTE(v2) = BuildingClass::GetType_Thunk(), !(_BYTE)v2) )
  {
    v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)); /*0x4cfa95*/
    if ( v2 == 2 /*0x4cfacc*/
      && (v3 = *(_DWORD **)(this + 12), v2 = v3[433], *(_BYTE *)(v2 + 3597))
      && (v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*v3 + 444))(*(_DWORD *)(this + 12)),
          v5 = Cell::IsBridge(v4),
          LOBYTE(v2) = Array::Contains(*(int **)(this + 12), (int)v5),
          !(_BYTE)v2) )
    {
      LOBYTE(v2) = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v3 + 1156))(v3, 0, 1); /*0x4cfad6*/
    }
    else
    {
      *(_BYTE *)(this + 80) = 0; /*0x4cfadf*/
      *(_BYTE *)(this + 81) = 1; /*0x4cfae3*/
      *(_BYTE *)(this + 82) = 0; /*0x4cfae7*/
      *(_DWORD *)(this + 56) = 0; /*0x4cfaeb*/
    }
  }
  return v2; /*0x4cfadc*/
}
// 0x4DC760
int LocomotionClass::GetSpeedMultiplier()
{
  int v1; // eax

  v1 = *(_DWORD *)(this + 1492); /*0x4dc760*/
  if ( v1 && *(_BYTE *)(*(_DWORD *)(v1 + 36) + 242) ) /*0x4dc76d*/
    return 1.0; /*0x4dc777*/
  else
    return *(double *)(this + 1328); /*0x4dc77e*/
}
// 0x513C20
int LocomotionClass::ProcessData()
{
  LocomotionClass::Init((_DWORD *)this); /*0x513c24*/
  *(_DWORD *)(this + 24) = g_ScoreDisplayState1; /*0x513c34*/
  *(_DWORD *)(this + 28) = g_ScoreDisplayState2; /*0x513c3d*/
  *(_DWORD *)(this + 32) = g_ScoreDisplayState3; /*0x513c49*/
  *(_DWORD *)(this + 36) = g_ScoreDisplayState1; /*0x513c51*/
  *(_DWORD *)(this + 40) = g_ScoreDisplayState2; /*0x513c59*/
  *(_DWORD *)(this + 44) = g_ScoreDisplayState3; /*0x513c64*/
  FrameSnapshot::InitMax((_WORD *)(this + 48), 0); /*0x513c67*/
  *(_DWORD *)(this + 72) = 0; /*0x513c6c*/
  *(_DWORD *)(this + 80) = 0; /*0x513c6f*/
  *(_DWORD *)(this + 88) = 0; /*0x513c72*/
  *(_DWORD *)(this + 96) = 0; /*0x513c75*/
  *(_DWORD *)(this + 76) = 0; /*0x513c78*/
  *(_DWORD *)(this + 84) = 0; /*0x513c7b*/
  *(_DWORD *)(this + 92) = 1072693248; /*0x513c7e*/
  *(_DWORD *)(this + 100) = 0; /*0x513c85*/
  *(_BYTE *)(this + 104) = 0; /*0x513c88*/
  *(_DWORD *)(this + 108) = 0; /*0x513c8b*/
  *(_BYTE *)(this + 112) = 0; /*0x513c8e*/
  *(_DWORD *)this = &HoverLocomotionClass::`vftable'; /*0x513c91*/
  *(_DWORD *)(this + 4) = &HoverLocomotionClass::`vftable'; /*0x513c97*/
  return this; /*0x513ca0*/
}
// 0x54AC40
int LocomotionClass::Update()
{
  int v2; // ecx
  int v4; // [esp+Ch] [ebp-4h] BYREF

  LocomotionClass::Init((_DWORD *)this); /*0x54ac46*/
  *(_DWORD *)(this + 64) = dword_ABC5A8; /*0x54ac59*/
  *(_DWORD *)(this + 68) = dword_ABC5AC; /*0x54ac61*/
  v2 = dword_ABC5B0; /*0x54ac64*/
  *(_BYTE *)(this + 76) = 0; /*0x54ac6a*/
  *(_DWORD *)(this + 80) = 0; /*0x54ac6d*/
  *(_DWORD *)(this + 72) = v2; /*0x54ac70*/
  FrameSnapshot::InitMax((_WORD *)(this + 84), g_RulesClass_Instance->V3Rocket[8]); /*0x54ac82*/
  *(_DWORD *)(this + 112) = 0; /*0x54ac87*/
  *(_DWORD *)(this + 120) = 0; /*0x54ac8a*/
  *(_DWORD *)(this + 136) = 0; /*0x54ac8d*/
  *(_DWORD *)(this + 116) = 0; /*0x54ac93*/
  *(_DWORD *)(this + 124) = 0; /*0x54ac96*/
  *(_DWORD *)(this + 128) = 0; /*0x54ac99*/
  *(_DWORD *)(this + 140) = 0; /*0x54ac9f*/
  *(_BYTE *)(this + 144) = 0; /*0x54aca5*/
  *(_BYTE *)(this + 145) = 0; /*0x54acab*/
  *(_DWORD *)(this + 148) = 0; /*0x54acb5*/
  *(_DWORD *)this = &JumpjetLocomotionClass::`vftable'; /*0x54acc3*/
  *(_DWORD *)(this + 4) = &JumpjetLocomotionClass::`vftable'; /*0x54acc9*/
  *(_DWORD *)(this + 24) = &JumpjetLocomotionClass::`vftable'; /*0x54acd0*/
  LOWORD(v4) = 0x4000; /*0x54acd7*/
  FacingClass::Update((char *)(this + 84), &v4); /*0x54acdc*/
  LOWORD(v4) = 0x4000; /*0x54ace8*/
  FacingClass::Set_SyncLog((char *)(this + 84), &v4); /*0x54aced*/
  return this; /*0x54acf4*/
}
// 0x55A6C0
unsigned int * LocomotionClass::Init()
{
  *(this + 2) = 0; /*0x55a6c6*/
  *(this + 3) = 0; /*0x55a6c9*/
  *((_BYTE *)this + 16) = 1; /*0x55a6cc*/
  *((_BYTE *)this + 17) = 1; /*0x55a6cf*/
  *(this + 5) = 0; /*0x55a6d2*/
  *this = &LocomotionClass::`vftable'; /*0x55a6d5*/
  *(this + 1) = &LocomotionClass::`vftable'; /*0x55a6db*/
  return this; /*0x55a6e2*/
}
// 0x55A6F0
void LocomotionClass::Construct()
{
  *this = &LocomotionClass::`vftable'; /*0x55a6f0*/
  *(this + 1) = &LocomotionClass::`vftable'; /*0x55a6f6*/
  *(this + 3) = 0; /*0x55a6fd*/
}
// 0x5172F0
LocomotionClass * LocomotionClass::ProcessMove(char a2)
{
  LocomotionClass::Construct(this); /*0x5172f3*/
  if ( (a2 & 1) != 0 ) /*0x5172fd*/
    __3_YAXPAX_Z(this); /*0x517300*/
  return this; /*0x51730a*/
}