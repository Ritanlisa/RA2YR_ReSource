// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AirstrikeClass_e4.hpp"
#include "e4/classes/AircraftTypeClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/AlphaShapeClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/e4_protos.h"

// 0x41D860
namespace gamemd {
int AirstrikeClass::SpawnAircraft(int * a2)
{
  int v3; // eax
  int v4; // ebp
  int v5; // ebx
  _DWORD *v7; // eax
  void *v8; // eax
  unsigned int *v9; // eax
  int result; // eax
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [esp-14h] [ebp-38h]
  int v17; // [esp+14h] [ebp-10h]
  _DWORD v18[3]; // [esp+18h] [ebp-Ch] BYREF
  int v19; // [esp+28h] [ebp+4h]

  v3 = this->AirstrikeClass_field_54; /*0x41d869*/
  this->AirstrikeClass_field_3C = 1; /*0x41d86c*/
  this->AirstrikeClass_field_3D = 1; /*0x41d870*/
  this->u32_34 = 0; /*0x41d874*/
  v4 = *(_DWORD *)(v3 + 3576); /*0x41d881*/
  v17 = *(_DWORD *)(*(_DWORD *)g_RulesClass_Instance->DefaultTestParticleSystem + 3576); /*0x41d895*/
  if ( Audio::IsLoud((float *)(this->owner + 336)) ) /*0x41d8a2*/
  {
    v5 = this->AirstrikeClass_field_28; /*0x41d8ae*/
    v4 = *(_DWORD *)(this->AirstrikeClass_field_58 + 3576); /*0x41d8b1*/
  }
  else
  {
    v5 = this->AirstrikeClass_field_24; /*0x41d8b9*/
  }
  v7 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*a2 + 72))(a2, v18); /*0x41d8c9*/
  IDA_LOWORD(v19) = *v7 / 256; /*0x41d8dc*/
  IDA_HIWORD(v19) = v7[1] / 256; /*0x41d8f5*/
  v19 = v19; /*0x41d902*/
  v8 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19); /*0x41d907*/
  v17 = v17; /*0x41d916*/
  v14 = (int)v8; /*0x41d919*/
  v9 = (unsigned int *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->referenceCount6) + 60))(this->owner); /*0x41d91f*/
  result = PlaceAircraftOnMap(v9, v4, v5, 1, v14, 0, v17, 0, this); /*0x41d926*/
  this->q02C = result; /*0x41d92d*/
  this->EliteAirstrikeTeamTypeIndex = result; /*0x41d930*/
  if ( result ) /*0x41d933*/
  {
    result = this->AirstrikeClass_field_5C; /*0x41d939*/
    if ( result ) /*0x41d93e*/
    {
      v11 = (_DWORD *)(result + 156); /*0x41d940*/
      v18[0] = *v11; /*0x41d949*/
      v18[1] = v11[1]; /*0x41d956*/
      v18[2] = v11[2]; /*0x41d961*/
      result = StartAudioControllerAt(g_RulesClass_Instance->IonBlast, (int)v18, 0); /*0x41d96b*/
    }
    this->u32_50 = a2; /*0x41d972*/
    if ( a2 ) /*0x41d975*/
    {
      result = (*(int (__thiscall **)(int *))(*a2 + 44))(a2); /*0x41d97f*/
      if ( result == 6 ) /*0x41d985*/
      {
        v12 = *a2; /*0x41d98b*/
        a2[165] = this; /*0x41d994*/
        (*(void (__thiscall **)(int *, int))(v12 + 348))(a2, 100000); /*0x41d99a*/
        *((_BYTE *)a2 + 1784) = *((_BYTE *)&g_RulesClass_Instance[1].DMisl[12] /*0x41d9b8*/
                                + 2 * g_RulesClass_Instance[1].CMisl[10]
                                + g_RulesClass_Instance[1].CMisl[10]);
        *((_BYTE *)a2 + 1785) = *((_BYTE *)&g_RulesClass_Instance[1].DMisl[12] /*0x41d9d5*/
                                + 2 * g_RulesClass_Instance[1].CMisl[10]
                                + g_RulesClass_Instance[1].CMisl[10]
                                + 1);
        v13 = *a2; /*0x41d9f1*/
        *((_BYTE *)a2 + 1786) = *((_BYTE *)&g_RulesClass_Instance[1].DMisl[12] /*0x41d9f5*/
                                + 2 * g_RulesClass_Instance[1].CMisl[10]
                                + g_RulesClass_Instance[1].CMisl[10]
                                + 2);
        a2[447] = 1; /*0x41d9fb*/
        return (*(int (__thiscall **)(int *, int))(v13 + 292))(a2, 2); /*0x41da05*/
      }
    }
  }
  return result; /*0x41da0b*/
}
} // namespace ra2

// 0x41DA20
namespace gamemd {
int AirstrikeClass::ReassignTarget(int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  _DWORD *v7; // edi
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // eax
  int v11; // eax
  int *v12; // esi
  int v13; // edi

  v3 = this->q05C; /*0x41da26*/
  if ( v3 && (v4 = *(_DWORD *)(v3 + 1496)) != 0 )
  {
    v5 = *(_DWORD *)(v3 + 764); /*0x41da37*/
    while ( *(_DWORD *)(v4 + 764) == v5 ) /*0x41da43*/
    {
      v4 = *(_DWORD *)(v4 + 1496); /*0x41da45*/
      if ( !v4 ) /*0x41da4d*/
        goto LABEL_6; /*0x41da4d*/
    }
    IDA_LOBYTE(); /*0x41da5c*/
  }
  else
  {
  LABEL_6:
    v6 = this->q050; /*0x41da4f*/
    if ( v6 )
      v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 44))(this->q050) == 6 ? (_DWORD *)v6 : 0;
    else
      v7 = 0; /*0x41da56*/
    if ( a2 )
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ? (_DWORD *)a2 : 0;
    else
      v9 = 0; /*0x41da84*/
    if ( v7 ) /*0x41da9e*/
    {
      v10 = *v7; /*0x41daa0*/
      v7[165] = 0; /*0x41daa4*/
      (*(void (__thiscall **)(_DWORD *))(v10 + 344))(v7); /*0x41daae*/
      (*(void (__thiscall **)(_DWORD *, int))(*v7 + 292))(v7, 2); /*0x41daba*/
    }
    this->q050 = 0; /*0x41dac2*/
    if ( v9 ) /*0x41dac9*/
    {
      v11 = *v9; /*0x41dacb*/
      v9[165] = this; /*0x41dad4*/
      (*(void (__thiscall **)(_DWORD *, int))(v11 + 348))(v9, 100000); /*0x41dada*/
      (*(void (__thiscall **)(_DWORD *, int))(*v9 + 292))(v9, 2); /*0x41dae6*/
    }
    v8 = this->u32_30; /*0x41daec*/
    v12 = *(int **)(&this->q0242); /*0x41daef*/
    v13 = 0; /*0x41daf2*/
    for ( this->q050 = a2; v13 < v8; ++v13 ) /*0x41daf9*/
    {
      if ( v12 ) /*0x41dafd*/
      {
        if ( v12[191] > 0 ) /*0x41db07*/
        {
          (*(void (__thiscall **)(int *, int))(*v12 + 968))(v12, a2); /*0x41db0e*/
          (*(void (__thiscall **)(int *, int, _DWORD))(*v12 + 488))(v12, 1, 0); /*0x41db1c*/
          this->u8_3D = 1; /*0x41db22*/
        }
        v12 = (int *)v12[374]; /*0x41db26*/
      }
      v8 = this->u32_30; /*0x41db2c*/
    }
  }
  return v8; /*0x41da61*/
}
} // namespace ra2

// 0x41DC80
namespace gamemd {
int AirstrikeClass::RemoveAircraft(AudioController * aP1)
{
  int result; // eax
  int v3; // edi

  result = this->q05C; /*0x41dc80*/
  v3 = 0; /*0x41dc8c*/
  if ( result == aP1 ) /*0x41dc90*/
  {
    this->q05C = *(_DWORD *)(aP1 + 1496); /*0x41dc98*/
    *(_DWORD *)(aP1 + 1496) = 0; /*0x41dc9b*/
    result = this->u32_30 - 1; /*0x41dca4*/
    this->u32_30 = result; /*0x41dca5*/
    *(_DWORD *)(aP1 + 660) = 0; /*0x41dca8*/
  }
  else if ( result ) /*0x41dcb2*/
  {
    do /*0x41dceb*/
    {
      if ( result->u32_5D8 == aP1 ) /*0x41dcbc*/
      {
        result->u32_5D8 = *(_DWORD *)(aP1 + 1496); /*0x41dcc4*/
        *(_DWORD *)(aP1 + 1496) = 0; /*0x41dcca*/
        result = 0; /*0x41dcd3*/
        --this->u32_30; /*0x41dcd6*/
        *(_DWORD *)(aP1 + 660) = 0; /*0x41dcd9*/
      }
      else
      {
        result = result->u32_5D8; /*0x41dce1*/
      }
      ++v3; /*0x41dce3*/
    }
    while ( v3 <= 100 && result ); /*0x41dceb*/
  }
  if ( this->u32_30 <= 0 ) /*0x41dcf0*/
  {
    g_CurrentFrame = g_CurrentFrame; /*0x41dcf2*/
    this->u32_3C = 0; /*0x41dcf8*/
    this->q040 = g_CurrentFrame; /*0x41dcfb*/
    this->u8_3D = 0; /*0x41dcfe*/
  }
  return result; /*0x41dd01*/
}
} // namespace ra2

// 0x41DD50
namespace gamemd {
void * AirstrikeClass::CopyTo(char a2)
{
  int v3; // eax

  *this = &(void*)(void*)&AirstrikeClass_vftable; /*0x41dd5d*/
  this->vtable2 = &(void*)(void*)&AirstrikeClass_vftable; /*0x41dd63*/
  this->vtable3 = &(void*)(void*)&AirstrikeClass_vftable; /*0x41dd6a*/
  this->vtable4 = &(void*)(void*)&AirstrikeClass_vftable; /*0x41dd71*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(dword_889FB8 + 16))(&dword_889FB8, &this); /*0x41dd83*/
  if ( v3 != -1 && v3 < dword_889FC8 && v3 < --dword_889FC8 ) /*0x41dd9e*/
  {
    do /*0x41ddb6*/
    {
      ++v3; /*0x41dda6*/
      *((_DWORD *)dword_889FBC + v3 - 1) = *((_DWORD *)dword_889FBC + v3); /*0x41ddaa*/
    }
    while ( v3 < dword_889FC8 ); /*0x41ddb6*/
  }
  AbstractClass::DTOR(); /*0x41ddba*/
  if ( (a2 & 1) != 0 ) /*0x41ddc4*/
    RA2_OPDEL(); /*0x41ddc7*/
  return this; /*0x41ddd1*/
}
} // namespace ra2

// 0x420E90
namespace gamemd {
AbstractClass * * AirstrikeClass::UpdateAll()
{
  _DWORD *v0; // eax
  int v1; // esi
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  _BYTE *v5; // edx

  IDA_LOBYTE(v0) = byte_89A134; /*0x420e90*/
  if ( !byte_89A134 ) /*0x420e98*/
  {
    byte_89A134 = 1; /*0x420e9a*/
    v1 = 0; /*0x420ea1*/
    while ( 1 ) /*0x420ec6*/
    {
      v2 = v1 % 256 * (v1 / 256); /*0x420ec6*/
      v0 = (_DWORD *)((unsigned int)((unsigned __int64)(2164392969LL * v2) >> 32) >> 31); /*0x420ed6*/
      v3 = v2 / 127; /*0x420ed9*/
      if ( v2 / 127 > 255 ) /*0x420ee1*/
        break; /*0x420ee1*/
      if ( v3 >= 0 ) /*0x420ee5*/
      {
        if ( v3 > 255 ) /*0x420ef1*/
          break; /*0x420ef1*/
      }
      else
      {
        IDA_LOBYTE(v3) = 0; /*0x420ee7*/
      }
  LABEL_8:
      byte_88A118[v1++] = v3; /*0x420ef8*/
      if ( v1 >= 0x10000 ) /*0x420f05*/
        goto LABEL_9; /*0x420f05*/
    }
    IDA_LOBYTE(v3) = -1; /*0x420ef3*/
    goto LABEL_8; /*0x420ef3*/
  }
  LABEL_9:
  v4 = g_AlphaShapeLimit - 1; /*0x420f07*/
  if ( g_AlphaShapeLimit - 1 >= 0 ) /*0x420f12*/
  {
    v0 = dword_88A0F4; /*0x420f14*/
    do /*0x420f36*/
    {
      v5 = (_BYTE *)v0[v4]; /*0x420f19*/
      if ( v5[60] && v5 ) /*0x420f27*/
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 32))(1); /*0x420f2d*/
        v0 = dword_88A0F4; /*0x420f30*/
      }
      --v4; /*0x420f35*/
    }
    while ( v4 >= 0 ); /*0x420f36*/
  }
  return (char)v0; /*0x420f38*/
}
} // namespace ra2

// 0x41D380
namespace gamemd {
AirstrikeClass::AirstrikeClass(TechnoClass * aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax

  AbstractClass::Constructor(); /*0x41d384*/
  *(_DWORD *)this = &(void*)(void*)&AirstrikeClass_vftable; /*0x41d389*/
  this->vtable2 = &(void*)(void*)&AirstrikeClass_vftable; /*0x41d38f*/
  this->vtable3 = &(void*)(void*)&AirstrikeClass_vftable; /*0x41d396*/
  this->vtable4 = &(void*)(void*)&AirstrikeClass_vftable; /*0x41d39d*/
  if ( dword_889FC8 < dword_889FC0 /*0x41d3d9*/
    || (byte_889FC5 || !dword_889FC0)
    && dword_889FCC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_889FB8 + 8))(
         &dword_889FB8,
         dword_889FC0 + dword_889FCC,
         0) )
  {
    v3 = dword_889FC8++; /*0x41d3e6*/
    *((_DWORD *)dword_889FBC + v3) = this; /*0x41d3f5*/
  }
  this->AirstrikeClass_field_3C = 0; /*0x41d3fc*/
  this->owner = aP1; /*0x41d3ff*/
  this->AirstrikeClass_field_3D = 0; /*0x41d402*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 132))(aP1); /*0x41d407*/
  v5 = this->owner; /*0x41d413*/
  this->AirstrikeClass_field_24 = *(_DWORD *)(v4 + 1564); /*0x41d416*/
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5); /*0x41d41b*/
  v7 = this->owner; /*0x41d427*/
  this->AirstrikeClass_field_28 = *(_DWORD *)(v6 + 1568); /*0x41d42a*/
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 132))(v7); /*0x41d42f*/
  v9 = this->owner; /*0x41d43b*/
  this->AirstrikeClass_field_44 = *(_DWORD *)(v8 + 1580); /*0x41d43e*/
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 132))(v9); /*0x41d443*/
  v11 = this->owner; /*0x41d44f*/
  this->AirstrikeClass_field_48 = *(_DWORD *)(v10 + 1584); /*0x41d452*/
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11); /*0x41d457*/
  v13 = this->owner; /*0x41d463*/
  this->AirstrikeClass_field_54 = *(_DWORD *)(v12 + 1572); /*0x41d466*/
  v14 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 1576); /*0x41d471*/
  this->AirstrikeClass_field_5C = 0; /*0x41d477*/
  this->AirstrikeClass_field_58 = v14; /*0x41d47a*/
  this->u32_50 = 0; /*0x41d47d*/
  return this; /*0x41d482*/
}
} // namespace gamemd

// 0x41D6E0
namespace gamemd {
int AirstrikeClass::Stat(AbstractClass * aP1)
{
  return AbstractClass::ProcessPower(); /*0x41d6ea*/
}
} // namespace gamemd

// 0x41D6F0
namespace gamemd {
int AirstrikeClass::Write(AbstractClass * aP0, int aP1)
{
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x41d701*/
  if ( Prefix_0 >= 0 ) /*0x41d705*/
  {
    if ( aP0 ) /*0x41d709*/
    {
      AbstractClass::InitVtables(aP0, (int)&aP1); /*0x41d712*/
      *aP0 = (int)&(void*)(void*)&AirstrikeClass_vftable; /*0x41d717*/
      aP0[1] = (int)&(void*)(void*)&AirstrikeClass_vftable; /*0x41d71d*/
      aP0[2] = (int)&(void*)(void*)&AirstrikeClass_vftable; /*0x41d724*/
      aP0[3] = (int)&(void*)(void*)&AirstrikeClass_vftable; /*0x41d72b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 19); /*0x41d73b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 20); /*0x41d749*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 21); /*0x41d757*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 22); /*0x41d765*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 23); /*0x41d773*/
  }
  return Prefix_0; /*0x41d77a*/
}
} // namespace gamemd

// 0x41D780
namespace gamemd {
int AirstrikeClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x41d794*/
}
} // namespace gamemd

// 0x41D7A0
namespace gamemd {
int AirstrikeClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x41d7a6*/
    return -2147467261; /*0x41d7a8*/
  *a2 = 1893611809; /*0x41d7b6*/
  a2[1] = 299179558; /*0x41d7be*/
  a2[2] = -1610574449; /*0x41d7c7*/
  a2[3] = -1672772828; /*0x41d7d0*/
  return 0; /*0x41d7ad*/
}
} // namespace gamemd

// 0x41D830
namespace gamemd {
char AirstrikeClass::StartMission(int * a2)
{
  char result; // al

  result = (char)a2; /*0x41d835*/
  if ( !*(_BYTE *)(this + 60) ) /*0x41d830*/
    return AirstrikeClass::SpawnAircraft(a2); /*0x41d83c*/
  if ( a2 != *(int **)(this + 80) ) /*0x41d847*/
    return AirstrikeClass::ReassignTarget((int)a2); /*0x41d84a*/
  return result; /*0x41d841*/
}
} // namespace gamemd
