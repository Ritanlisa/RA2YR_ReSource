// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Cell_e4.hpp"

// 0x4AF540
int LocomotionClass::Initialize()
{
{
  RateTimer *v2; // ecx
  LocomotionClass::Init((_DWORD *)this); /*0x4af543*/
  *(_DWORD *)(this + 28) = 0; /*0x4af54d*/
  this->Owner = 0; /*0x4af550*/
  v2 = g_CurrentFrame; /*0x4af553*/
  this->q02C = 0; /*0x4af559*/
  this->q090 = v2; /*0x4af55c*/
  this->q030 = 0; /*0x4af55f*/
  *(_DWORD *)(this + 52) = g_DDraw_ClipRect; /*0x4af568*/
  *(_QWORD *)(this + 56) = DataGlobal_8A0794; /*0x4af570*/
  this->Powered = g_DDraw_ClipRect; /*0x4af585*/
  this->Dirty = DataGlobal_8A0794; /*0x4af58e*/
  TechnoClass *v3 = HIDWORD(DataGlobal_8A0794); /*0x4af591*/
  this->RefCount = 0; /*0x4af597*/
  *(_DWORD *)(this + 76) = 0; /*0x4af59a*/
  this->q012 = v3; /*0x4af59d*/
  *(_DWORD *)(this + 84) = 0; /*0x4af5a3*/
  *(_DWORD *)(this + 88) = -1; /*0x4af5a6*/
  this->q170 = -1; /*0x4af5a9*/
  *(_BYTE *)(this + 96) = 0; /*0x4af5ac*/
  *(_BYTE *)(this + 97) = 0; /*0x4af5af*/
  *(_BYTE *)(this + 98) = 0; /*0x4af5b2*/
  *(_BYTE *)(this + 99) = 0; /*0x4af5b5*/
  *(_BYTE *)(this + 100) = 0; /*0x4af5b8*/
  *(_BYTE *)(this + 101) = 1; /*0x4af5bb*/
  this->q01A = 0; /*0x4af5bf*/
  *(_DWORD *)this = &DriveLocomotionClass::`vftable'; /*0x4af5c2*/
  this->vtable2 = &vt_DriveLocomotionClass; /*0x4af5c8*/
  *(_DWORD *)(this + 24) = &off_7E7E8C; /*0x4af5cf*/
  return this; /*0x4af5d8*/
}

// 0x4C54A0
void * LocomotionClass::UpdateAll()
{
{
  wchar_t *result; // eax
  int i; // esi

  result = (wchar_t *)DataGlobal_8A3880; /*0x4c54a0*/
  for ( i = DataGlobal_8A3880 - 1; i >= 0; --i ) /*0x4c54ab*/
  {
    _DWORD * v2 = (_DWORD *)*((_DWORD *)DataGlobal_8A3874 + i); /*0x4c54b3*/
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
{

  if ( (*(int (__thiscall **)(_DWORD))(*this->LinkedTo + 388))(this->LinkedTo) == 7 /*0x4cfa8e*/
  int v2; // eax
    || (LOBYTE(v2) = BuildingClass::GetType_Thunk(), !(_BYTE)v2) )
  {
    v2 = (*(int (__thiscall **)(_DWORD))(*this->LinkedTo + 44))(this->LinkedTo); /*0x4cfa95*/
    if ( v2 == 2 /*0x4cfacc*/
  _DWORD *v3; // edi
      && (v3 = this->LinkedTo, v2 = v3[433], *(_BYTE *)(v2 + 3597))
  _DWORD *v4; // eax
      && (v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*v3 + 444))(this->LinkedTo),
  _DWORD *v5; // eax
          v5 = Cell::IsBridge(v4),
          LOBYTE(v2) = Array::Contains(this->LinkedTo, (int)v5),
          !(_BYTE)v2) )
    {
      LOBYTE(v2) = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v3 + 1156))(v3, 0, 1); /*0x4cfad6*/
    }
    else
    {
      this->RefCount = 0; /*0x4cfadf*/
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
{

  LocomotionClass *v1 = this->q5D4; /*0x4dc760*/
  if ( v1 && *(_BYTE *)(v1->q090 + 242) ) /*0x4dc76d*/
    return 1.0; /*0x4dc777*/
  else
    return *(double *)(this + 1328); /*0x4dc77e*/
}

// 0x513C20
int LocomotionClass::ProcessData()
{
{
  LocomotionClass::Init((_DWORD *)this); /*0x513c24*/
  *(_DWORD *)(this + 24) = g_ScoreDisplayState1; /*0x513c34*/
  *(_DWORD *)(this + 28) = g_ScoreDisplayState2; /*0x513c3d*/
  this->Owner = g_ScoreDisplayState3; /*0x513c49*/
  this->q090 = g_ScoreDisplayState1; /*0x513c51*/
  *(_DWORD *)(this + 40) = g_ScoreDisplayState2; /*0x513c59*/
  this->q02C = g_ScoreDisplayState3; /*0x513c64*/
  FrameSnapshot::InitMax((_WORD *)(this + 48), 0); /*0x513c67*/
  this->q012 = 0; /*0x513c6c*/
  this->RefCount = 0; /*0x513c6f*/
  *(_DWORD *)(this + 88) = 0; /*0x513c72*/
  *(_DWORD *)(this + 96) = 0; /*0x513c75*/
  *(_DWORD *)(this + 76) = 0; /*0x513c78*/
  *(_DWORD *)(this + 84) = 0; /*0x513c7b*/
  this->q170 = 1072693248; /*0x513c7e*/
  *(_DWORD *)(this + 100) = 0; /*0x513c85*/
  this->q01A = 0; /*0x513c88*/
  *(_DWORD *)(this + 108) = 0; /*0x513c8b*/
  *(_BYTE *)(this + 112) = 0; /*0x513c8e*/
  *(_DWORD *)this = &HoverLocomotionClass::`vftable'; /*0x513c91*/
  this->vtable2 = &vt_HoverLocomotionClass; /*0x513c97*/
  return this; /*0x513ca0*/
}

// 0x54AC40
int LocomotionClass::Update()
{
{

  LocomotionClass::Init((_DWORD *)this); /*0x54ac46*/
  this->Powered = dword_ABC5A8; /*0x54ac59*/
  this->Dirty = dword_ABC5AC; /*0x54ac61*/
  int v2 = dword_ABC5B0; /*0x54ac64*/
  *(_BYTE *)(this + 76) = 0; /*0x54ac6a*/
  this->RefCount = 0; /*0x54ac6d*/
  this->q012 = v2; /*0x54ac70*/
  FrameSnapshot::InitMax((_WORD *)(this + 84), g_RulesClass_Instance->?[8]); /*0x54ac82*/
  *(_DWORD *)(this + 112) = 0; /*0x54ac87*/
  *(_DWORD *)(this + 120) = 0; /*0x54ac8a*/
  *(_DWORD *)(this + 136) = 0; /*0x54ac8d*/
  this->q01D = 0; /*0x54ac93*/
  *(_DWORD *)(this + 124) = 0; /*0x54ac96*/
  *(_DWORD *)(this + 128) = 0; /*0x54ac99*/
  this->q08C = 0; /*0x54ac9f*/
  this->q090 = 0; /*0x54aca5*/
  *(_BYTE *)(this + 145) = 0; /*0x54acab*/
  *(_DWORD *)(this + 148) = 0; /*0x54acb5*/
  *(_DWORD *)this = &JumpjetLocomotionClass::`vftable'; /*0x54acc3*/
  this->vtable2 = &JumpjetLocomotionClass::`vftable'; /*0x54acc9*/
  *(_DWORD *)(this + 24) = &vt_JumpjetLocomotionClass; /*0x54acd0*/
  int v4; // [esp+Ch] [ebp-4h] BYREF
  LOWORD(v4) = 0x4000; /*0x54acd7*/
  ((FacingClass *)((char *)this + 84)).Update((char *)(this + 84), &v4); /*0x54acdc*/
  LOWORD(v4) = 0x4000; /*0x54ace8*/
  ((FacingClass *)((char *)this + 84)).Set_SyncLog((char *)(this + 84), &v4); /*0x54aced*/
  return this; /*0x54acf4*/
}

// 0x55A6C0
unsigned int * LocomotionClass::Init()
{
{
  this->Owner = 0; /*0x55a6c6*/
  this->LinkedTo = 0; /*0x55a6c9*/
  this->Powered = 1; /*0x55a6cc*/
  this->Dirty = 1; /*0x55a6cf*/
  this->RefCount = 0; /*0x55a6d2*/
  *this = &LocomotionClass::`vftable'; /*0x55a6d5*/
  this->vtable2 = &vt_LocomotionClass; /*0x55a6db*/
  return this; /*0x55a6e2*/
}

// 0x55A6F0
void LocomotionClass::Construct()
{
{
  *this = &LocomotionClass::`vftable'; /*0x55a6f0*/
  this->vtable2 = &vt_LocomotionClass; /*0x55a6f6*/
  this->LinkedTo = 0; /*0x55a6fd*/
}

// 0x5172F0
LocomotionClass * LocomotionClass::ProcessMove(char a2)
{
{
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (LocomotionClass *)this;
}
}
