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
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Power_e4.hpp"

// 0x41D860
namespace gamemd {
int AirstrikeClass::SpawnAircraft(int * a2)
{
  int v3; // eax
  int v4; // ebp
  unsigned int * v5;
  unsigned int *v7; // eax
  void *v8; // eax
  unsigned int *v9; // eax
  AirstrikeClass * result;
  unsigned int *v11; // eax
  AirstrikeClass * v12;
  int v13; // eax
  int v14; // [esp-14h] [ebp-38h]
  int v17; // [esp+14h] [ebp-10h]
  unsigned int v18[3]; // [esp+18h] [ebp-Ch] BYREF
  int v19; // [esp+28h] [ebp+4h]

  v3 = this->AirstrikeClass_field_54; /*0x41d869*/
  this->AirstrikeClass_field_3C = 1; /*0x41d86c*/
  this->AirstrikeClass_field_3D = 1; /*0x41d870*/
  this->u32_34 = 0; /*0x41d874*/
  v4 = *(unsigned int *)(v3 + 3576); /*0x41d881*/
  v17 = *(unsigned int *)(*(unsigned int *)g_RulesClass_Instance->DefaultTestParticleSystem + 3576); /*0x41d895*/
  if ( Audio::IsLoud((float *)(this->owner + 336)) ) /*0x41d8a2*/
  {
    v5 = (unsigned int *)(this->AirstrikeClass_field_28);
    v4 = *(unsigned int *)(this->AirstrikeClass_field_58 + 3576); /*0x41d8b1*/
  }
  else
  {
    v5 = (int)((unsigned int *)(this->AirstrikeClass_field_24));
  }
  v7 = (int)((unsigned int *)(*(int (__thiscall **)(int *, unsigned int *))(*a2 + 72))(a2, v18));
  IDA_LOWORD(v19) = *v7 / 256; /*0x41d8dc*/
  IDA_HIWORD(v19) = v7[1] / 256; /*0x41d8f5*/
  v19 = v19; /*0x41d902*/
  v8 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v19); /*0x41d907*/
  v17 = v17; /*0x41d916*/
  v14 = (int)v8; /*0x41d919*/
  v9 = (unsigned int *)(*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->referenceCount6) + 60))(this->owner); /*0x41d91f*/
  result = PlaceAircraftOnMap(v9, v4, v5, 1, v14, 0, v17, 0, this); /*0x41d926*/
  this->q02C = result; /*0x41d92d*/
  this->EliteAirstrikeTeamTypeIndex = result; /*0x41d930*/
  if ( result ) /*0x41d933*/
  {
    result = (gamemd::AirstrikeClass *)(this->AirstrikeClass_field_5C);
    if ( result ) /*0x41d93e*/
    {
      v11 = (unsigned int *)(result + 156); /*0x41d940*/
      v18[0] = *v11; /*0x41d949*/
      v18[1] = v11[1]; /*0x41d956*/
      v18[2] = v11[2]; /*0x41d961*/
      result = StartAudioControllerAt(g_RulesClass_Instance->IonBlast, (int)v18, 0); /*0x41d96b*/
    }
    this->u32_50 = (unsigned int)(a2);
    if ( a2 ) /*0x41d975*/
    {
      result = (gamemd::AirstrikeClass *)((int)((gamemd::AirstrikeClass *)((*(int (__thiscall **)(int *))(*a2 + 44))(a2))));
      if ( result == 6 ) /*0x41d985*/
      {
        v12 = (gamemd::AirstrikeClass *)((int)(*a2));
        a2[165] = (int)(this);
        (*(void (__thiscall **)(int *, int))(v12 + 348))(a2, 100000); /*0x41d99a*/
        *((unsigned char *)a2 + 1784) = *((unsigned char *)&g_RulesClass_Instance[1].DMisl[12] /*0x41d9b8*/
                                + 2 * g_RulesClass_Instance[1].CMisl[10]
                                + g_RulesClass_Instance[1].CMisl[10]);
        *((unsigned char *)a2 + 1785) = *((unsigned char *)&g_RulesClass_Instance[1].DMisl[12] /*0x41d9d5*/
                                + 2 * g_RulesClass_Instance[1].CMisl[10]
                                + g_RulesClass_Instance[1].CMisl[10]
                                + 1);
        v13 = *a2; /*0x41d9f1*/
        *((unsigned char *)a2 + 1786) = *((unsigned char *)&g_RulesClass_Instance[1].DMisl[12] /*0x41d9f5*/
                                + 2 * g_RulesClass_Instance[1].CMisl[10]
                                + g_RulesClass_Instance[1].CMisl[10]
                                + 2);
        a2[447] = 1; /*0x41d9fb*/
        return (*(int (__thiscall **)(int *, int))(v13 + 292))(a2, 2); /*0x41da05*/
      }
    }
  }
  return (int)(result);
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
  unsigned int *v7; // edi
  int v8; // eax
  unsigned int *v9; // esi
  int v10; // eax
  AirstrikeClass * v11;
  int *v12; // esi
  int v13; // edi

  v3 = this->q05C; /*0x41da26*/
  if ( v3 && (v4 = *(unsigned int *)(v3 + 1496)) != 0 )
  {
    v5 = *(unsigned int *)(v3 + 764); /*0x41da37*/
    while ( *(unsigned int *)(v4 + 764) == v5 ) /*0x41da43*/
    {
      v4 = *(unsigned int *)(v4 + 1496); /*0x41da45*/
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
      v7 = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)v6 + 44))(this->q050) == 6 ? (unsigned int *)v6 : 0;
    else
      v7 = 0; /*0x41da56*/
    if ( a2 )
      v9 = (*(int (__thiscall **)(int))(*(unsigned int *)a2 + 44))(a2) == 6 ? (unsigned int *)a2 : 0;
    else
      v9 = 0; /*0x41da84*/
    if ( v7 ) /*0x41da9e*/
    {
      v10 = *v7; /*0x41daa0*/
      v7[165] = 0; /*0x41daa4*/
      (*(void (__thiscall **)(unsigned int *))(v10 + 344))(v7); /*0x41daae*/
      (*(void (__thiscall **)(unsigned int *, int))(*v7 + 292))(v7, 2); /*0x41daba*/
    }
    this->q050 = (unsigned int)((gamemd::AirstrikeClass *)(0));
    if ( v9 ) /*0x41dac9*/
    {
      v11 = (gamemd::AirstrikeClass *)((unsigned int)(*v9));
      v9[165] = (unsigned int)(this);
      (*(void (__thiscall **)(unsigned int *, int))(v11 + 348))(v9, 100000); /*0x41dada*/
      (*(void (__thiscall **)(unsigned int *, int))(*v9 + 292))(v9, 2); /*0x41dae6*/
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
          (*(void (__thiscall **)(int *, int, unsigned int))(*v12 + 488))(v12, 1, 0); /*0x41db1c*/
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
    this->q05C = *(unsigned int *)(aP1 + 1496); /*0x41dc98*/
    *(unsigned int *)(aP1 + 1496) = 0; /*0x41dc9b*/
    result = this->u32_30 - 1; /*0x41dca4*/
    this->u32_30 = result; /*0x41dca5*/
    *(unsigned int *)(aP1 + 660) = 0; /*0x41dca8*/
  }
  else if ( result ) /*0x41dcb2*/
  {
    do /*0x41dceb*/
    {
      if ( result->u32_5D8 == aP1 ) /*0x41dcbc*/
      {
        result->u32_5D8 = *(unsigned int *)(aP1 + 1496); /*0x41dcc4*/
        *(unsigned int *)(aP1 + 1496) = 0; /*0x41dcca*/
        result = 0; /*0x41dcd3*/
        --this->u32_30; /*0x41dcd6*/
        *(unsigned int *)(aP1 + 660) = 0; /*0x41dcd9*/
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

  v3 = (*(int (__thiscall **)(int *, unsigned int **))(dword_889FB8 + 16))(&dword_889FB8, &this); /*0x41dd83*/
  if ( v3 != -1 && v3 < dword_889FC8 && v3 < --dword_889FC8 ) /*0x41dd9e*/
  {
    do /*0x41ddb6*/
    {
      ++v3; /*0x41dda6*/
      *((unsigned int *)dword_889FBC + v3 - 1) = *((unsigned int *)dword_889FBC + v3); /*0x41ddaa*/
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
  unsigned int v0;
  int v1; // esi
  unsigned int * v2;
  int v3; // edx
  int v4; // esi
  unsigned char *v5; // edx

  IDA_LOBYTE(v0) = byte_89A134; /*0x420e90*/
  if ( !byte_89A134 ) /*0x420e98*/
  {
    byte_89A134 = 1; /*0x420e9a*/
    v1 = 0; /*0x420ea1*/
    while ( 1 ) /*0x420ec6*/
    {
      v2 = (unsigned int *)(v1 % 256 * (v1 / 256));
      v0 = (unsigned int *)((unsigned int)((uint64_t)(2164392969LL * v2) >> 32) >> 31); /*0x420ed6*/
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
      v5 = (unsigned char *)v0[v4]; /*0x420f19*/
      if ( v5[60] && v5 ) /*0x420f27*/
      {
        (*(void (__stdcall **)(int))(*(unsigned int *)v5 + 32))(1); /*0x420f2d*/
        v0 = dword_88A0F4; /*0x420f30*/
      }
      --v4; /*0x420f35*/
    }
    while ( v4 >= 0 ); /*0x420f36*/
  }
  return (gamemd::AbstractClass **)((char)v0);
}
} // namespace ra2

// 0x41D380
namespace gamemd {
AirstrikeClass::AirstrikeClass(TechnoClass * aP1)
{
  AirstrikeClass * v3;
  TechnoClass * v4;
  int v5;
  int v6; // eax
  int v7;
  int v8; // eax
  int v9;
  int v10; // eax
  int v11;
  int v12; // eax
  TechnoClass * v13;
  int v14; // eax

  AbstractClass::Constructor(); /*0x41d384*/
  if ( dword_889FC8 < dword_889FC0 /*0x41d3d9*/
    || (byte_889FC5 || !dword_889FC0)
    && dword_889FCC > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_889FB8 + 8))(
         &dword_889FB8,
         dword_889FC0 + dword_889FCC,
         0) )
  {
    v3 = (gamemd::AirstrikeClass *)(dword_889FC8++);
    *((unsigned int *)dword_889FBC + v3) = this; /*0x41d3f5*/
  }
  this->AirstrikeClass_field_3C = (unsigned int)((gamemd::TechnoClass *)(0));
  this->owner = (unsigned int)((gamemd::TechnoClass *)(aP1));
  this->AirstrikeClass_field_3D = (unsigned char)((gamemd::TechnoClass *)(0));
  v4 = (int)((gamemd::TechnoClass *)((*(int (__thiscall **)(int))(*(unsigned int *)aP1 + 132))(aP1)));
  v5 = (gamemd::TechnoClass *)(this->owner);
  this->AirstrikeClass_field_24 = (gamemd::TechnoClass *)(*(unsigned int *)(v4 + 1564));
  v6 = (*(int (__thiscall **)(int))(*(unsigned int *)v5 + 132))(v5); /*0x41d41b*/
  v7 = this->owner; /*0x41d427*/
  this->AirstrikeClass_field_28 = *(unsigned int *)(v6 + 1568); /*0x41d42a*/
  v8 = (*(int (__thiscall **)(int))(*(unsigned int *)v7 + 132))(v7); /*0x41d42f*/
  v9 = this->owner; /*0x41d43b*/
  this->AirstrikeClass_field_44 = *(unsigned int *)(v8 + 1580); /*0x41d43e*/
  v10 = (*(int (__thiscall **)(int))(*(unsigned int *)v9 + 132))(v9); /*0x41d443*/
  v11 = this->owner; /*0x41d44f*/
  this->AirstrikeClass_field_48 = *(unsigned int *)(v10 + 1584); /*0x41d452*/
  v12 = (*(int (__thiscall **)(int))(*(unsigned int *)v11 + 132))(v11); /*0x41d457*/
  v13 = this->owner; /*0x41d463*/
  this->AirstrikeClass_field_54 = *(unsigned int *)(v12 + 1572); /*0x41d466*/
  v14 = *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)v13 + 132))(v13) + 1576); /*0x41d471*/
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
      *(unsigned int *)aP0 = (int)&AirstrikeClass_vftable; /*0x41d717*/
      aP0[1] = (int)&AirstrikeClass_vftable; /*0x41d71d*/
      aP0[2] = (int)&AirstrikeClass_vftable; /*0x41d724*/
      aP0[3] = (int)&AirstrikeClass_vftable; /*0x41d72b*/
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
  if ( !this->AirstrikeClass_field_3C ) /*0x41d830*/
    return AirstrikeClass::SpawnAircraft(a2); /*0x41d83c*/
  if ( a2 != this->q140 ) /*0x41d847*/
    return AirstrikeClass::ReassignTarget((int)a2); /*0x41d84a*/
  return result; /*0x41d841*/
}
} // namespace gamemd
