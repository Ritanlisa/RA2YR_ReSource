// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Frame_e4.hpp"

// 0x4D3590
namespace gamemd {
AbstractClass * * FootClass::Destruct()
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  unsigned int *v6; // eax
  ILocomotion * v7;
  void *v8; // eax
  void *v9; // eax

  v2 = this->FootClass_field_5D4; /*0x4d3597*/
  if ( v2 && g_WTFMode ) /*0x4d35c2*/
    TeamClass::LiberateMember_Start(-1, 0); /*0x4d35c8*/
  v3 = (*(int (__thiscall **)(int *, void **))(FootClass_Array + 16))(&FootClass_Array, &this); /*0x4d35e1*/
  if ( v3 != -1 ) /*0x4d35e7*/
    FootClass::RemoveFromPointerArray(v3); /*0x4d35ef*/
  v4 = (*(int (__thiscall **)(int *, void **))(dword_B0F5D8 + 16))(&dword_B0F5D8, &this); /*0x4d3608*/
  if ( v4 != -1 ) /*0x4d360e*/
    DynamicVector::RemoveItem(&dword_B0F5D8, v4); /*0x4d3616*/
  v5 = this->FootClass_field_69C; /*0x4d361b*/
  if ( v5 ) /*0x4d3623*/
  {
    (*(void (__thiscall **)(int, int))(v5->needsSave)(v5, 1); /*0x4d3629*/
    this->FootClass_field_69C = 0; /*0x4d362c*/
  }
  if ( this->FootClass_field_564 != g_FootClass_Pool ) /*0x4d3646*/
  {
    v6 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&this->inAirFlag0); /*0x4d365b*/
    if ( (void *)v6[56] == this ) /*0x4d3666*/
      v6[56] = 0; /*0x4d3668*/
  }
  Mixer::ReleaseChannel((int **)&this->hasParachute7); /*0x4d3677*/
  AudioFileClass::Release((unsigned int *)&this->hasParachute7); /*0x4d367e*/
  v7 = this->Locomotor; /*0x4d3683*/
  if ( v7 ) /*0x4d368b*/
    (*(void (__stdcall **)(unsigned int))(v7->q008)(this->Locomotor); /*0x4d3690*/
  v8 = (void *)this->q5B0; /*0x4d3693*/
  if ( v8 && this->u8_5B9 ) /*0x4d36a8*/
  {
    RA2_OPDEL(v8); /*0x4d36b1*/
    this->q5B0 = 0; /*0x4d36b9*/
  }
  this->u8_5B9 = 0; /*0x4d36bf*/
  this->q5B4 = 0; /*0x4d36c5*/
  v9 = (void *)this->q58C; /*0x4d36cb*/
  if ( v9 && this->u8_595 ) /*0x4d36dc*/
  {
    RA2_OPDEL(v9); /*0x4d36e5*/
    this->q58C = 0; /*0x4d36ed*/
  }
  this->u8_595 = 0; /*0x4d36f5*/
  this->q590 = 0; /*0x4d36fb*/
  return TechnoClass::DTOR(); /*0x4d3706*/
}
} // namespace ra2

// 0x4D98C0
namespace gamemd {
void FootClass::Destroyed(int a2)
{
  int64_t v3; // rax
  unsigned char v4[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (uint8_t)House::IsHumanPlayer(*(&this->attachedTag5)) /*0x4d98dd*/
    && !*(unsigned char *)((*((int (__thiscall **)(void **))*&this->q021))(this) + 3412) )
  {
    v3 = ((int64_t (__thiscall *)(void **, unsigned char *))*((unsigned int *)*((char *)&this->health + 2)))(this, v4); /*0x4d98f0*/
    if ( CreateTriggerClassIfFarEnough(7, IDA_SHIDWORD(v3), *(unsigned int *)v3) ) /*0x4d98fe*/
      VoxClass::FindAndPlay(aEvaUnitlost, -1); /*0x4d9911*/
  }
}
} // namespace ra2

// 0x70F7E0
namespace gamemd {
int FootClass::updateThreat()
{
  void * v1;
  void * v2;

  v1 = *(&this->ptr_246); /*0x70f7e0*/
  v2 = *(&this->ptr_248); /*0x70f7e6*/
  if ( v1 != -1 ) /*0x70f7ef*/
  {
    if ( (int)g_CurrentFrame - v1 < v2 ) /*0x70f7fb*/
      return v2 == (unsigned int, unsigned int a2, unsigned int a3)g_CurrentFrame - v1; /*0x70f808*/
    v2 = 0; /*0x70f809*/
  }
  return v2 == 0; /*0x70f808*/
}
} // namespace ra2

// 0x710000
namespace gamemd {
void FootClass::FootClass_ImbueLocomotor(int *a1@<ecx> a1, int a2@<ebp> a2, int a3@<edi> a3, unsigned int * ppv, IID rclsid, int a6)
{
  unsigned int * v5;
  unsigned int *v6; // ecx
  unsigned int *v7; // ecx
  int v8; // eax
  unsigned int *v9; // edi
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int *v20; // ebx
  int v21; // ebp
  int Member; // eax
  unsigned int *v23; // ecx
  unsigned int *v24; // ebx
  int v25; // [esp+60h] [ebp-1Ch] BYREF
  int v26; // [esp+64h] [ebp-18h] BYREF
  int v27; // [esp+68h] [ebp-14h] BYREF
  int *v28; // [esp+6Ch] [ebp-10h]
  int v29; // [esp+70h] [ebp-Ch] BYREF
  int v30; // [esp+78h] [ebp-4h]

  v5 = ppv; /*0x710006*/
  v28 = a1; /*0x71000d*/
  if ( ppv )
  {
    v6 = (unsigned int *)ppv[180]; /*0x710017*/
    if ( v6 ) /*0x71001f*/
      TaskManager::Update(v6); /*0x710021*/
    v7 = (unsigned int *)v5[421]; /*0x710026*/
    if ( v7 && v7[423] && *(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*v7 + 132))(v7) + 3278) ) /*0x710042*/
      BuildingClass::Deploy(*(unsigned int *)(v5[421] + 1692), a2, a3); /*0x710058*/
    v8 = v5[413]; /*0x71005d*/
    v9 = v5 + 413; /*0x710063*/
    v25 = 0; /*0x71006b*/
    if ( v8 ) /*0x710073*/
    {
      v10 = StreamClass::Set(&v25, v5 + 413); /*0x71007a*/
      if ( v10 < 0 && v10 != -2147467262 ) /*0x710088*/
        WinAPI::Wrapper(v10); /*0x71008b*/
    }
    if ( *(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*v5 + 132))(v5) + 1516)
      && v25
      && !v5[172]
      && (*(uint8_t (__stdcall **)(int))(*(unsigned int *)v25 + 28))(v25) )
    {
      if ( !v25 ) /*0x7100d6*/
        WinAPI::Wrapper(-2147467261); /*0x7100dd*/
      v11 = (*(uint8_t (__stdcall **)(int))(*(unsigned int *)v25 + 20))(v25) == 0; /*0x7100ec*/
      v12 = *v9; /*0x7100ee*/
      if ( v11 ) /*0x7100f0*/
      {
        if ( !v12 ) /*0x710126*/
          WinAPI::Wrapper(-2147467261); /*0x71012d*/
        (*(void (__stdcall **)(unsigned int))(*(unsigned int *)*v9 + 72))(*v9); /*0x710137*/
        (*(void (__thiscall **)(unsigned int *, int))(*v5 + 496))(v5, -1); /*0x710140*/
        (*(void (__thiscall **)(unsigned int *, int, unsigned int))(*v5 + 488))(v5, 13, 0); /*0x71014e*/
      }
      else
      {
        if ( v12 ) /*0x7100f4*/
          (*(void (__stdcall **)(unsigned int))(*(unsigned int *)v12 + 8))(*v9); /*0x7100f9*/
        v13 = v25; /*0x7100fc*/
        *v9 = 0; /*0x710100*/
        if ( !v13 ) /*0x710108*/
          WinAPI::Wrapper(-2147467261); /*0x71010f*/
        (*(void (__stdcall **)(int, unsigned int *))(*(unsigned int *)v13 + 16))(v13, v5 + 413); /*0x71011c*/
      }
    }
    else
    {
      if ( !*v9 ) /*0x710159*/
        WinAPI::Wrapper(-2147467261); /*0x710163*/
      (*(void (__stdcall **)(unsigned int, unsigned int))(*(unsigned int *)*v9 + 156))(*v9, 0); /*0x71016f*/
      v11 = *v9 == 0; /*0x710189*/
      v30 = dword_B0EA98; /*0x71018b*/
      if ( v11 ) /*0x71018f*/
        WinAPI::Wrapper(-2147467261); /*0x710196*/
      (*(void (__stdcall **)(unsigned int, int, int, int, int))(*(unsigned int *)*v9 + 112))( /*0x7101b3*/
        *v9,
        -1,
        g_TechnoClassPool,
        dword_B0EA94,
        v30);
      v14 = *v5; /*0x7101b6*/
      v15 = (*(int (__thiscall **)(unsigned int *, int *))(*v5 + 72))(v5, &v29); /*0x7101bf*/
      (*(void (__thiscall **)(unsigned int *, int))(v14 + 244))(v5, v15); /*0x7101c5*/
      v16 = *v5; /*0x7101cb*/
      *((unsigned char *)v5 + 1718) = 1; /*0x7101cf*/
      (*(void (__thiscall **)(unsigned int *))(v16 + 976))(v5); /*0x7101d6*/
      v11 = *v9 == 0; /*0x7101e0*/
      v26 = 0; /*0x7101e2*/
      if ( !v11 ) /*0x7101e6*/
      {
        v17 = StreamClass::Set(&v26, v5 + 413); /*0x7101ed*/
        if ( v17 < 0 && v17 != -2147467262 ) /*0x7101fb*/
          WinAPI::Wrapper(v17); /*0x7101fe*/
      }
      ppv = 0; /*0x71020f*/
      v18 = CreateInstanceCOM((LPVOID *)&ppv, &rclsid, 0, 7u); /*0x710213*/
      if ( v18 < 0 && v18 != -2147467262 ) /*0x710221*/
        WinAPI::Wrapper(v18); /*0x710224*/
      if ( !ppv ) /*0x71022f*/
        WinAPI::Wrapper(-2147467261); /*0x710236*/
      (*(void (__stdcall **)(unsigned int *, unsigned int *))(*ppv + 12))(ppv, v5); /*0x710243*/
      v27 = 0; /*0x71024a*/
      if ( ppv ) /*0x710250*/
      {
        v19 = StreamClass::Set(&v27, &ppv); /*0x71025b*/
        if ( v19 < 0 && v19 != -2147467262 ) /*0x710269*/
          WinAPI::Wrapper(v19); /*0x71026c*/
      }
      COMObject::SwapReference(v27); /*0x71027a*/
      if ( v27 ) /*0x710285*/
        (*(void (__stdcall **)(int))(*(unsigned int *)v27 + 8))(v27); /*0x71028a*/
      if ( v26 )
      {
        v20 = v28; /*0x710297*/
        if ( v28[171] ) /*0x71029b*/
          TechnoClass::EjectPassengers(v28, 0); /*0x7102a6*/
        if ( v5[171] ) /*0x7102ab*/
          TechnoClass::EjectPassengers(v5, 1); /*0x7102b7*/
        if ( !v26 ) /*0x7102c4*/
          WinAPI::Wrapper(-2147467261); /*0x7102cb*/
        (*(void (__stdcall **)(int, unsigned int))(*(unsigned int *)v26 + 12))(v26, *v9); /*0x7102d8*/
        v21 = *v9; /*0x7102db*/
        if ( (unsigned int *)*v9 != ppv ) /*0x7102e3*/
        {
          *v9 = ppv; /*0x7102e7*/
          SuperClass::SetFieldX(v5 + 413); /*0x7102e9*/
          if ( v21 ) /*0x7102f0*/
            (*(void (__stdcall **)(int))(*(unsigned int *)v21 + 8))(v21); /*0x7102f6*/
        }
        v20[171] = (v5[5] & 1) != 0 ? (unsigned int)v5 : 0;
        *((v5[5] & 1) != 0 ? v5 + 172 : (unsigned int *)688) = v20;
        (*(void (__thiscall **)(int, int *, int))(*(unsigned int *)v20[171] + 1152))(v20[171], v20, 1); /*0x710326*/
        (*(void (__thiscall **)(int))(*(unsigned int *)v20[171] + 336))(v20[171]); /*0x710334*/
        if ( v5[373] ) /*0x71033a*/
          TeamClass::LiberateMember_Start(v5, -1, 0); /*0x710349*/
        *((unsigned char *)v5 + 1709) = 1; /*0x710352*/
        Member = Team::GetMember(v5, 0); /*0x710359*/
        if ( Member && (*(int (__thiscall **)(int))(*(unsigned int *)Member + 44))(Member) == 6 ) /*0x71036c*/
          (*(void (__thiscall **)(unsigned int *, int))(*v5 + 640))(v5, 3); /*0x710374*/
        (*(void (__thiscall **)(int, int, int))(*(unsigned int *)v20[171] + 488))(v20[171], 5, 1); /*0x710386*/
        v23 = (unsigned int *)v20[171]; /*0x71038c*/
        if ( !*(unsigned char *)(v23[135] + 492) && !*(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*v23 + 132))(v23) + 1516) ) /*0x7103aa*/
        {
          v24 = (unsigned int *)v20[171]; /*0x7103b4*/
          if ( !*(unsigned char *)(*(unsigned int *)(v24[135] + 52) + 422) ) /*0x7103c3*/
            (*(void (__thiscall **)(unsigned int *, int, unsigned int))(*v24 + 488))(v24, 15, 0); /*0x7103d5*/
        }
      }
      if ( ppv ) /*0x7103e1*/
        (*(void (__stdcall **)(unsigned int *))(*ppv + 8))(ppv); /*0x7103e6*/
      if ( v26 ) /*0x7103ef*/
        (*(void (__stdcall **)(int))(*(unsigned int *)v26 + 8))(v26); /*0x7103f4*/
    }
    if ( v25 ) /*0x7103fd*/
      (*(void (__stdcall **)(int))(*(unsigned int *)v25 + 8))(v25); /*0x710402*/
  }
}
} // namespace ra2

// 0x41C120
namespace gamemd {
void FootClass::Stub(int a1)
{
  ; /*0x41c120*/
}
} // namespace gamemd

// 0x50DAA0
namespace gamemd {
unsigned int FootClass::checkTurning()
{
  void * result;

  result = this->infantryBlinkTimer; /*0x50daa0*/
  if ( result >= 4 ) /*0x50daa8*/
    return 0; /*0x50daaf*/
  return result; /*0x50dab1*/
}
} // namespace gamemd
