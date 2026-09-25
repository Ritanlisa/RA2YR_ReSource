// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/FilePipe_38_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/ParticleTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ParticleSystemTypeClass_e4.hpp"
#include "e4/e4_protos.h"

// 0x477900
namespace gamemd {
void ParticleTypeClass::GetClassIdentifier()
{
  void *v2; // eax

  v2 = this->vtable2; /*0x477906*/
  this->q010 = 0; /*0x477909*/
  if ( v2 && this->ParticleTypeClass_field_2BC ) /*0x477910*/
  {
    RA2_OPDEL(v2); /*0x477916*/
    this->vtable2 = 0; /*0x47791e*/
  }
  this->ParticleTypeClass_field_2BC = 0; /*0x477921*/
  this->vtable3 = 0; /*0x477924*/
}
}
// 0x4784F0
namespace gamemd {
AbstractClass * * ParticleTypeClass::Release(int a2, char * a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  _BYTE *v7; // ecx
  _BYTE *v9; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x4784f2*/
  if ( a2 ) /*0x4784fe*/
  {
    v5 = a3; /*0x478504*/
    this->vtable4 = 0; /*0x478508*/
    if ( a3 ) /*0x47850d*/
    {
      if ( a2 - 1 >= 0 ) /*0x478546*/
      {
        v9 = a3 + 2; /*0x478548*/
        a2 = a2; /*0x47854b*/
        do /*0x478558*/
        {
          *(v9 - 2) = 0; /*0x47854c*/
          *(v9 - 1) = 0; /*0x47854f*/
          *v9 = 0; /*0x478552*/
          v9 += 3; /*0x478554*/
          --a2; /*0x478557*/
        }
        while ( a2 ); /*0x478558*/
      }
    }
    else
    {
      v6 = (char *)RA2_OPNEW(3 * a2); /*0x478514*/
      if ( v6 ) /*0x47851e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478525*/
        {
          v7 = v6 + 2; /*0x478527*/
          a2 = a2; /*0x47852a*/
          do /*0x478537*/
          {
            *(v7 - 2) = 0; /*0x47852b*/
            *(v7 - 1) = 0; /*0x47852e*/
            *v7 = 0; /*0x478531*/
            v7 += 3; /*0x478533*/
            --a2; /*0x478536*/
          }
          while ( a2 ); /*0x478537*/
        }
        v5 = v6; /*0x478539*/
      }
      else
      {
        v5 = 0; /*0x47853d*/
      }
    }
    this->vtable4 = 1; /*0x47855c*/
    if ( !v5 ) /*0x478560*/
      return 0; /*0x4785e2*/
    if ( this->vtable2 ) /*0x478562*/
    {
      v11 = this->vtable3; /*0x478567*/
      if ( a2 < v11 ) /*0x47856c*/
        v11 = a2; /*0x47856e*/
      if ( v11 > 0 ) /*0x478572*/
      {
        v12 = 0; /*0x478574*/
        do /*0x478590*/
        {
          v13 = this->vtable2 + v12; /*0x47857b*/
          v14 = &v5[v12]; /*0x47857d*/
          v12 += 3; /*0x478580*/
          --v11; /*0x478583*/
          *(_WORD *)v14 = *(_WORD *)v13; /*0x478587*/
          v14[2] = *(_BYTE *)(v13 + 2); /*0x47858d*/
        }
        while ( v11 ); /*0x478590*/
        v3 = a2; /*0x478592*/
      }
      if ( this->ParticleTypeClass_field_2BC ) /*0x478598*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x4785a1*/
        this->vtable2 = 0; /*0x4785a9*/
      }
    }
    this->vtable2 = v5; /*0x4785b4*/
    this->vtable3 = v3; /*0x4785ba*/
    this->ParticleTypeClass_field_2BC = a3 == 0; /*0x4785bd*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->vtable22))(this); /*0x4785c6*/
  }
  v15 = this->vtable3; /*0x4785c9*/
  if ( v15 < this->q010 ) /*0x4785d1*/
    this->q010 = v15; /*0x4785d3*/
  return 1; /*0x4785d6*/
}
}
// 0x4788E0
namespace gamemd {
unsigned int * ParticleTypeClass::EnsureCapacity(unsigned int * a2)
{
  int v3; // edi
  char *v4; // eax
  _BYTE *v5; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // edi

  if ( this == a2 ) /*0x4788ec*/
    return this; /*0x4788ec*/
  this->Cleanup5(); /*0x4788f4*/
  v3 = a2[2]; /*0x4788f7*/
  this->Capacity = v3; /*0x4788fe*/
  if ( !v3 ) /*0x478901*/
  {
    this->Items = 0; /*0x478974*/
    this->IsAllocated = 0; /*0x478977*/
    return this; /*0x47897a*/
  }
  v4 = (char *)RA2_OPNEW(3 * v3); /*0x478907*/
  if ( v4 ) /*0x478911*/
  {
    if ( v3 - 1 >= 0 ) /*0x478918*/
    {
      v5 = v4 + 2; /*0x47891a*/
      v3 = v3; /*0x47891d*/
      do /*0x47892a*/
      {
        *(v5 - 2) = 0; /*0x47891e*/
        *(v5 - 1) = 0; /*0x478921*/
        *v5 = 0; /*0x478924*/
        v5 += 3; /*0x478926*/
        --v3; /*0x478929*/
      }
      while ( v3 ); /*0x47892a*/
    }
  }
  else
  {
    v4 = 0; /*0x47892e*/
  }
  this->Items = v4; /*0x478932*/
  if ( !v4 ) /*0x478935*/
    return this; /*0x478935*/
  v7 = this->Capacity; /*0x478937*/
  v8 = 0; /*0x47893a*/
  this->IsAllocated = 1; /*0x47893e*/
  if ( v7 <= 0 ) /*0x478942*/
    return this; /*0x478942*/
  v9 = 0; /*0x478944*/
  do /*0x478969*/
  {
    v10 = a2[1] + v9; /*0x47894e*/
    v11 = this->Items + v9; /*0x478952*/
    ++v8; /*0x478954*/
    v9 += 3; /*0x478958*/
    *(_WORD *)v11 = *(_WORD *)v10; /*0x47895b*/
    *(_BYTE *)(v11 + 2) = *(_BYTE *)(v10 + 2); /*0x478961*/
  }
  while (v8 < this->Capacity, unsigned int a2); /*0x478969*/
  return this; /*0x47896d*/
}
}
// 0x644F50
namespace gamemd {
void ParticleTypeClass_LoadFromINI()
{
  unsigned __int8 *inited; // eax
  _DWORD *RGBColorList; // ebp
  int Int_Overwrite; // eax
  int v6; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  double v13; // st7
  double v14; // st7
  int v15; // eax
  int v16; // eax
  char v17; // cl
  char Bool_Overwrite; // al
  char v19; // al
  char v20; // al
  char v21; // cl
  char v22; // al
  double v23; // rax
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  int *Coord2; // eax
  int Coord; // eax
  int v30; // eax
  int v31; // ebp
  _DWORD *v32; // eax
  _DWORD *v33; // eax
  int v34; // ecx
  int v36; // ebx
  const void **v37; // edi
  void *v39; // [esp-10h] [ebp-F4h]
  int v40; // [esp-Ch] [ebp-F0h]
  __int16 v41; // [esp-8h] [ebp-ECh]
  int v42; // [esp-4h] [ebp-E8h]
  int v43; // [esp+0h] [ebp-E4h]
  int v44; // [esp+4h] [ebp-E0h]
  int v45; // [esp+4h] [ebp-E0h]
  int v46; // [esp+4h] [ebp-E0h]
  int v47; // [esp+4h] [ebp-E0h]
  int v48; // [esp+4h] [ebp-E0h]
  int v49; // [esp+4h] [ebp-E0h]
  int v50; // [esp+4h] [ebp-E0h]
  int v51; // [esp+4h] [ebp-E0h]
  _BYTE v52[4]; // [esp+18h] [ebp-CCh] BYREF
  char Source[32]; // [esp+1Ch] [ebp-C8h] BYREF
  int v54[7]; // [esp+3Ch] [ebp-A8h] BYREF
  int v55[3]; // [esp+58h] [ebp-8Ch] BYREF
  char Destination[128]; // [esp+64h] [ebp-80h] BYREF

  INIClass::ResetSection(a2); /*0x644f65*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, a2) ) /*0x644f6d*/
    return 0; /*0x645417*/
  ParticleTypeClass::Constructor(0, 0); /*0x644f85*/
  inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(&this->vtable46)); /*0x644f9a*/
  RGBColorList = (_DWORD *)INIClass::ReadRGBColorList( /*0x644fac*/
                             a2,
                             (int)v54,
                             inited,
                             (unsigned __int8 *)aColorlist,
                             &(void*)(void*)&TypeList_RGBClass_vftable,
                             v39,
                             v40,
                             v41,
                             v42,
                             v43,
                             v44);
  ParticleTypeClass::EnsureCapacity(RGBColorList); /*0x644fb5*/
  this->q2C8 = RGBColorList[4]; /*0x644fbd*/
  this->q2CC = RGBColorList[5]; /*0x644fc6*/
  this->q2D0 = RGBColorList[6]; /*0x644fd3*/
  v54[0] = (int)&(void*)(void*)&VectorClass_RGBClass_vftable; /*0x644fd9*/
  FilePipe_38_::ddtor(v54); /*0x644fe1*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(&this->q090, aMaxdc, this->q2DC); /*0x644ff5*/
  v45 = this->q2E0; /*0x645002*/
  this->q2DC = Int_Overwrite; /*0x645009*/
  this->q2E0 = INIClass::ReadInt_Overwrite(&this->q090, aMaxec, v45); /*0x645014*/
  v6 = INIClass::ReadInt_Overwrite(&this->q090, g_INI_Key_Damage, this->q2E8); /*0x645029*/
  v7 = this->q2E4; /*0x64502e*/
  this->q2E8 = v6; /*0x64504b*/
  if ( INIClass::GetString( /*0x645051*/
         a2,
         (unsigned __int8 *)(&this->vtable46),
         (unsigned __int8 *)g_INI_Key_Warhead,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v8 = WarheadTypeClass::FindOrCreate(Destination); /*0x64505e*/
  }
  else
  {
    v8 = v7; /*0x645065*/
  }
  v46 = this->q2EC; /*0x64506f*/
  this->q2E4 = v8; /*0x645076*/
  this->q2EC = INIClass::ReadInt_Overwrite(&this->q090, aStartframe, v46); /*0x645081*/
  v9 = INIClass::ReadInt_Overwrite(&this->q090, aNumloopframes, this->q2F0); /*0x645096*/
  v10 = this->q2F4; /*0x64509b*/
  this->q2F0 = v9; /*0x6450a1*/
  v11 = INIClass::ReadInt_Overwrite(&this->q090, aTranslucency, v10); /*0x6450b0*/
  v47 = this->q2F8; /*0x6450bd*/
  this->q2F4 = v11; /*0x6450c4*/
  v12 = INIClass::ReadInt_Overwrite(&this->q090, aWindeffect, v47); /*0x6450ca*/
  v13 = this->u32_2FC; /*0x6450cf*/
  this->q2F8 = v12; /*0x6450da*/
  INIClass::ReadDouble_Overwrite(&this->q090, (int)aVelocity, v13); /*0x6450e9*/
  this->u32_2FC = v13; /*0x6450ee*/
  v14 = this->q300; /*0x6450f4*/
  INIClass::ReadDouble_Overwrite(&this->q090, (int)aDeacc, v14); /*0x645108*/
  v15 = this->q304; /*0x64510d*/
  this->q300 = v14; /*0x645115*/
  v16 = INIClass::ReadInt_Overwrite(&this->q090, aRadius, v15); /*0x645122*/
  v17 = this->q308; /*0x645127*/
  this->q304 = v16; /*0x64512d*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(&this->q090, aDeleteonstatel, v17); /*0x64513c*/
  v48 = this->u32_309; /*0x645148*/
  this->q308 = Bool_Overwrite; /*0x645151*/
  this->u32_309 = INIClass::ReadInt_Overwrite(&this->q090, aEndstateai, v48); /*0x64515c*/
  v19 = INIClass::ReadInt_Overwrite(&this->q090, aStartstateai, this->q30A); /*0x645172*/
  v49 = this->u32_30B; /*0x64517e*/
  this->q30A = v19; /*0x645187*/
  this->u32_30B = INIClass::ReadInt_Overwrite(&this->q090, aStateaiadvance, v49); /*0x645192*/
  this->q30E = INIClass::ReadInt_Overwrite(&this->q090, aTranslucent50s, *(unsigned __int8 *)(&this->q1382)); /*0x6451ae*/
  v20 = INIClass::ReadInt_Overwrite(&this->q090, aTranslucent25s, *(unsigned __int8 *)(&this->q1381)); /*0x6451c5*/
  v21 = this->u8_30F; /*0x6451ca*/
  this->u32_30D = v20; /*0x6451d0*/
  v22 = INIClass::ReadBool_Overwrite(&this->q090, g_INI_Key_Normalized, v21); /*0x6451df*/
  IDA_HIDWORD(v23) = this->q2B4; /*0x6451e4*/
  this->u8_30F = v22; /*0x6451ea*/
  IDA_LODWORD(v23) = this->q2B0; /*0x6451f0*/
  INIClass::ReadDouble_Overwrite(&this->q090, (int)aColorspeed, v23); /*0x645200*/
  v24 = this->q2A0; /*0x645205*/
  *(double *)(&this->q1108) = v14; /*0x64520b*/
  v25 = INIClass::ReadInt_Overwrite(&this->q090, aXvelocity, v24); /*0x64521a*/
  v50 = this->q2A4; /*0x645227*/
  this->q2A0 = v25; /*0x64522e*/
  this->q2A4 = INIClass::ReadInt_Overwrite(&this->q090, aYvelocity, v50); /*0x645239*/
  v26 = INIClass::ReadInt_Overwrite(&this->q090, aMinzvelocity, this->q2A8); /*0x64524e*/
  v27 = this->q2AC; /*0x645253*/
  this->q2A8 = v26; /*0x645259*/
  this->q2AC = INIClass::ReadInt_Overwrite(&this->q090, aZvelocityrange, v27); /*0x645281*/
  Coord2 = INIClass::GetCoord2( /*0x645287*/
             a2,
             v55,
             (unsigned __int8 *)(&this->vtable46),
             (unsigned __int8 *)aNextparticleof,
             (int *)(&this->q1080));
  this->q294 = *Coord2; /*0x64528e*/
  this->q298 = Coord2[1]; /*0x645298*/
  this->q29C = Coord2[2]; /*0x64529e*/
  Coord = INIClass::GetCoord( /*0x6452b1*/
            a2,
            (int)v52,
            (unsigned __int8 *)(&this->vtable46),
            (unsigned __int8 *)aStartcolor1,
            (unsigned __int8 *)(&this->q1204));
  this->q2D4 = *(_WORD *)Coord; /*0x6452bd*/
  this->u8_2D6 = *(_BYTE *)(Coord + 2); /*0x6452c4*/
  v30 = INIClass::GetCoord( /*0x6452d7*/
          a2,
          (int)v52,
          (unsigned __int8 *)(&this->vtable46),
          (unsigned __int8 *)aStartcolor2,
          (unsigned __int8 *)(&this->q1207));
  v51 = this->u32_309; /*0x6452e6*/
  this->q2D7 = *(_WORD *)v30; /*0x6452e7*/
  this->u8_2D9 = *(_BYTE *)(v30 + 2); /*0x6452f6*/
  this->q30C = INIClass::ReadInt_Overwrite(&this->q090, aFinaldamagesta, v51); /*0x64530f*/
  if ( INIClass::GetString(a2, (unsigned __int8 *)(&this->vtable46), (unsigned __int8 *)aNextparticle, 0, Source, 32) ) /*0x645315*/
  {
    if ( _strcmpi(Source, g_Str__none_) ) /*0x64532c*/
    {
      v31 = 0; /*0x64533d*/
      if ( g_BuildingTypeInitState <= 0 ) /*0x645341*/
      {
  LABEL_10:
        v32 = RA2_OPNEW(0x318u); /*0x64536b*/
        if ( v32 ) /*0x64537a*/
          v33 = BuildingTypeClass::Construct(v32, Source); /*0x645383*/
        else
          v33 = 0; /*0x64538a*/
        v34 = 0; /*0x645392*/
        if ( g_BuildingTypeInitState <= 0 ) /*0x645396*/
        {
  LABEL_17:
          v34 = -1; /*0x6453aa*/
        }
        else
        {
          g_BuildingProductionQueue = g_BuildingProductionQueue; /*0x645398*/
          while ( (_DWORD *)*g_BuildingProductionQueue != v33 ) /*0x6453a0*/
          {
            ++v34; /*0x6453a2*/
            ++g_BuildingProductionQueue; /*0x6453a3*/
            if ( v34 >= g_BuildingTypeInitState ) /*0x6453a8*/
              goto LABEL_17; /*0x6453a8*/
          }
        }
        v31 = v34; /*0x6453ad*/
      }
      else
      {
        while ( _strcmpi(Source, (const void *)(*((_DWORD *)g_BuildingProductionQueue + v31) + 36)) ) /*0x64535f*/
        {
          if ( ++v31 >= g_BuildingTypeInitState ) /*0x645369*/
            goto LABEL_10; /*0x645369*/
        }
      }
    }
    else
    {
      v31 = -1; /*0x6453b1*/
    }
    this->q310 = v31; /*0x6453b4*/
  }
  Source[0] = 0; /*0x6453cb*/
  INIClass::GetString(a2, (unsigned __int8 *)(&this->vtable46), (unsigned __int8 *)aBehaveslike, 0, Source, 32); /*0x6453d0*/
  v36 = 0; /*0x6453d5*/
  v37 = (const void **)off_8370BC; /*0x6453d7*/
  while ( _strcmpi(Source, *v37) ) /*0x6453ee*/
  {
    ++v37; /*0x6453f0*/
    ++v36; /*0x6453f3*/
    if ( (int)v37 >= (int)&ParticleTypeClass `RTTI Type Descriptor' ) /*0x6453fa*/
    {
      v36 = -1; /*0x6453fc*/
      break; /*0x6453fc*/
    }
  }
  this->q314 = v36; /*0x6453ff*/
  return 1; /*0x645407*/
}
}
// 0x6454E0
namespace gamemd {
int ParticleTypeClass::ProcessPower(int * a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx

  AbstractTypeClass::ProcessPower(a2); /*0x6454e9*/
  Power::TimerProcess(this->q2DC); /*0x6454f7*/
  Power::TimerProcess(this->q2E0); /*0x645505*/
  Power::TimerProcess(this->q2E8); /*0x645513*/
  Power::TimerProcess(this->q2EC); /*0x645521*/
  Power::TimerProcess(this->q2F0); /*0x64552f*/
  Power::TimerProcess(this->q2F4); /*0x64553d*/
  Power::TimerProcess(this->q2F8); /*0x64554b*/
  Checksummer::Add_float(this->u32_2FC); /*0x645559*/
  Checksummer::Add_float(this->q300); /*0x645567*/
  Power::TimerProcess(this->q304); /*0x645575*/
  IDA_LOBYTE(v3) = this->q308; /*0x64557a*/
  Power::FlagProcess(a2, v3); /*0x645583*/
  IDA_LOBYTE(v4) = this->u32_309; /*0x645588*/
  v5 = Power::FinalizeDrain(a2, v4); /*0x645591*/
  IDA_LOBYTE(v5) = this->q30A; /*0x645596*/
  Power::FinalizeDrain(a2, v5); /*0x64559f*/
  IDA_LOBYTE(v6) = this->u32_30B; /*0x6455a4*/
  Power::FinalizeDrain(a2, v6); /*0x6455ad*/
  Power::TimerProcess(*(unsigned __int8 *)(&this->q1381)); /*0x6455bd*/
  Power::TimerProcess(*(unsigned __int8 *)(&this->q1382)); /*0x6455cd*/
  IDA_LOBYTE(v7) = this->u8_30F; /*0x6455d2*/
  Power::FlagProcess(a2, v7); /*0x6455db*/
  Power::TimerProcess(this->q310); /*0x6455e9*/
  Power::TimerProcess(this->q314); /*0x6455f7*/
  return Checksummer::Add_double(this->q2B0, this->q2B4); /*0x645611*/
}
}
// 0x645660
namespace gamemd {
int ParticleTypeClass::SaveLoad_Prefix(int a1, int a2)
{
  int *v2; // ebp
  int v3; // edi
  int result; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // [esp+28h] [ebp-4h]

  v2 = (int *)a2; /*0x645663*/
  v3 = a1; /*0x645669*/
  result = ObjectTypeClass::LoadCleanup(a1, a2); /*0x64566f*/
  if ( result >= 0 ) /*0x645678*/
  {
    if ( v3 ) /*0x645680*/
    {
      ObjectTypeClass::Construct((_DWORD *)v3, (int)&a2); /*0x645689*/
      ParticleTypeClass::Constructor((_DWORD *)(v3 + 696), 0, 0); /*0x645698*/
      v3->u32_2B8 = &(void*)(void*)&TypeList_RGBClass_vftable; /*0x64569d*/
      *(_DWORD *)v3 = &(void*)(void*)&ParticleTypeClass_vftable; /*0x6456a3*/
      v3->vtable2 = &(void*)(void*)&ParticleTypeClass_vftable; /*0x6456a9*/
      v3->vtable3 = &(void*)(void*)&ParticleTypeClass_vftable; /*0x6456b0*/
      v3->vtable4 = &(void*)(void*)&ParticleTypeClass_vftable; /*0x6456b7*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v3 + 740)); /*0x6456ca*/
    v5 = *v2; /*0x6456cf*/
    a1 = 0; /*0x6456db*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v5 + 12))(v2, &a1, 4, 0); /*0x6456df*/
    if ( result >= 0 ) /*0x6456e4*/
    {
      v14 = 0; /*0x6456ee*/
      if ( a1 <= 0 ) /*0x6456f4*/
      {
  LABEL_14:
        ObjectTypeClass::Load2DArt((char *)v3); /*0x645783*/
        return 0; /*0x64578a*/
      }
      else
      {
        while ( 1 ) /*0x6456fa*/
        {
          v6 = *v2; /*0x6456fa*/
          IDA_LOWORD(a2) = 0; /*0x645706*/
          IDA_BYTE2(a2) = 0; /*0x64570e*/
          result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 12))(v2, &a2, 3, 0); /*0x645712*/
          if ( result < 0 ) /*0x645717*/
            break; /*0x645717*/
          v7 = v3->q2C0; /*0x645719*/
          if ( v3->u32_2C8 < v7 /*0x645747*/
            || (v3->u8_2C5 || !v7)
            && (v8 = v3->u32_2CC, v8 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(v3->u32_2B8 + 8))(v3 + 696, v7 + v8, 0) )
          {
            v9 = v3->u32_2C8; /*0x64574e*/
            v10 = v9 + 1; /*0x645751*/
            v11 = 3 * v9; /*0x645754*/
            v12 = v3->u32_2BC; /*0x645757*/
            v3->u32_2C8 = v10; /*0x64575a*/
            v13 = v12 + v11; /*0x64575d*/
            *(_WORD *)v13 = a2; /*0x645764*/
            *(_BYTE *)(v13 + 2) = IDA_BYTE2(a2); /*0x64576b*/
          }
          if ( ++v14 >= a1 ) /*0x64577d*/
            goto LABEL_14; /*0x64577d*/
        }
      }
    }
  }
  return result; /*0x64578c*/
}
}
// 0x6458B0
namespace gamemd {
int ParticleTypeClass::GetType(int a2, int a3)
{
  int result; // eax

  result = *(&this->WindEffect5); /*0x6458b0*/
  if ( result == a2 ) /*0x6458bc*/
    *(&this->WindEffect5) = 0; /*0x6458be*/
  return result; /*0x6458c8*/
}
}
// 0x645950
namespace gamemd {
ParticleTypeClass * ParticleTypeClass::ddtor(char a2)
{
  int v3; // eax
  int v4; // eax
  void *v5; // eax

  *this = &(void*)(void*)&ParticleTypeClass_vftable; /*0x645956*/
  this->vtable2 = &(void*)(void*)&ParticleTypeClass_vftable; /*0x64595c*/
  this->vtable3 = &(void*)(void*)&ParticleTypeClass_vftable; /*0x645963*/
  this->vtable4 = &(void*)(void*)&ParticleTypeClass_vftable; /*0x64596a*/
  AbstractClass::AnnounceExpiredPointer(1); /*0x645971*/
  v3 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &this); /*0x64598a*/
  if ( v3 != -1 && v3 < g_AnimManager && v3 < --g_AnimManager ) /*0x6459a5*/
  {
    do /*0x6459bd*/
    {
      ++v3; /*0x6459ad*/
      *((_DWORD *)g_AnimPoolCount + v3 - 1) = *((_DWORD *)g_AnimPoolCount + v3); /*0x6459b1*/
    }
    while ( v3 < g_AnimManager ); /*0x6459bd*/
  }
  v4 = (*(int (__thiscall **)(int *, void ***))(dword_A83D98 + 16))(&dword_A83D98, &this); /*0x6459d3*/
  if ( v4 != -1 && v4 < g_BuildingTypeInitState && v4 < --g_BuildingTypeInitState ) /*0x6459ee*/
  {
    do /*0x645a06*/
    {
      ++v4; /*0x6459f6*/
      *((_DWORD *)g_BuildingProductionQueue + v4 - 1) = *((_DWORD *)g_BuildingProductionQueue + v4); /*0x6459fa*/
    }
    while ( v4 < g_BuildingTypeInitState ); /*0x645a06*/
  }
  v5 = *(&this->ParticleTypeClass_field_2CC5); /*0x645a08*/
  *(&this->ParticleTypeClass_field_2CC4) = &(void*)(void*)&VectorClass_RGBClass_vftable; /*0x645a0e*/
  if ( v5 && this->u8_2C5 ) /*0x645a1c*/
  {
    RA2_OPDEL(v5); /*0x645a27*/
    *(&this->ParticleTypeClass_field_2CC5) = 0; /*0x645a2f*/
  }
  this->u8_2C5 = 0; /*0x645a3b*/
  *(&this->ParticleTypeClass_field_2CC6) = 0; /*0x645a42*/
  ObjectTypeClass::Destruct(); /*0x645a4c*/
  if ( (a2 & 1) != 0 ) /*0x645a56*/
    RA2_OPDEL(); /*0x645a59*/
  return this; /*0x645a63*/
}
} // namespace gamemd

// 0x645A70
namespace gamemd {
unsigned int * ParticleTypeClass::Constructor(int a2, int a3)
{
  _BYTE *v4; // eax
  int v5; // ecx
  char *v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx

  this->Items = 0; /*0x645a7d*/
  this->Capacity = a2; /*0x645a80*/
  this->IsInitialized = 1; /*0x645a83*/
  this->IsAllocated = 0; /*0x645a87*/
  *this = &(void*)(void*)&VectorClass_RGBClass_vftable; /*0x645a8a*/
  if ( a2 ) /*0x645a90*/
  {
    if ( a3 ) /*0x645a98*/
    {
      if ( a2 - 1 >= 0 ) /*0x645a9f*/
      {
        v4 = (_BYTE *)(a3 + 2); /*0x645aa1*/
        a2 = a2; /*0x645aa4*/
        do /*0x645ab1*/
        {
          *(v4 - 2) = 0; /*0x645aa5*/
          *(v4 - 1) = 0; /*0x645aa8*/
          *v4 = 0; /*0x645aab*/
          v4 += 3; /*0x645aad*/
          --a2; /*0x645ab0*/
        }
        while ( a2 ); /*0x645ab1*/
      }
      this->Items = a3; /*0x645ab3*/
    }
    else
    {
      v6 = (char *)RA2_OPNEW(3 * a2); /*0x645abc*/
      if ( v6 ) /*0x645ac6*/
      {
        if ( a2 - 1 >= 0 ) /*0x645acd*/
        {
          v7 = v6 + 2; /*0x645acf*/
          a2 = a2; /*0x645ad2*/
          do /*0x645adf*/
          {
            *(v7 - 2) = 0; /*0x645ad3*/
            *(v7 - 1) = 0; /*0x645ad6*/
            *v7 = 0; /*0x645ad9*/
            v7 += 3; /*0x645adb*/
            --a2; /*0x645ade*/
          }
          while ( a2 ); /*0x645adf*/
        }
      }
      else
      {
        v6 = 0; /*0x645ae3*/
      }
      this->Items = v6; /*0x645ae5*/
      this->IsAllocated = 1; /*0x645ae8*/
    }
  }
  *this = &(void*)(void*)&DynamicVectorClass_RGBClass_vftable; /*0x645aec*/
  this->u32_14 = 10; /*0x645af2*/
  this->q010 = 0; /*0x645af9*/
  return this; /*0x645afe*/
}
}
// 0x477930
namespace gamemd {
unsigned int ParticleTypeClass::LoadTypeData(int a2)
{
  if ( this->IsInitialized ) /*0x477930*/
    return (a2 - this->Items) / 3u; /*0x47794e*/
  else
    return 0; /*0x477937*/
}
} // namespace gamemd

// 0x477AC0
namespace gamemd {
TypeList_flat * ParticleTypeClass::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x477ac3*/
  *this = &(void*)(void*)&VectorClass_RGBClass_vftable; /*0x477ac6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x477ad0*/
  {
    RA2_OPDEL(v3); /*0x477ad8*/
    this->Items = 0; /*0x477ae0*/
  }
  this->IsAllocated = 0; /*0x477aeb*/
  this->Capacity = 0; /*0x477af1*/
  if ( (a2 & 1) != 0 ) /*0x477af8*/
    RA2_OPDEL(); /*0x477afb*/
  return this; /*0x477b05*/
}
} // namespace gamemd

// 0x4785F0
namespace gamemd {
int ParticleTypeClass::Init(unsigned char * a2)
{
  int v2; // esi
  int result; // eax
  _BYTE *i; // ecx

  v2 = *(this + 4); /*0x4785f2*/
  result = 0; /*0x4785f5*/
  if ( v2 <= 0 ) /*0x4785fa*/
    return -1; /*0x478621*/
  for ( i = (_BYTE *)this->Items; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x478600*/
  {
    if ( ++result >= v2 ) /*0x47861f*/
      return -1; /*0x47861f*/
  }
  return result; /*0x478624*/
}
}
// 0x6457A0
namespace gamemd {
int ParticleTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int aP1, int aP2)
{
  int result; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // edi

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, aP2); /*0x6457b3*/
  if ( result >= 0 ) /*0x6457ba*/
  {
    v4 = *(_DWORD *)aP1; /*0x6457c2*/
    aP2 = *(_DWORD *)(aP0 + 712); /*0x6457ce*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v4 + 16))(aP1, &aP2, 4, 0); /*0x6457d2*/
    if ( result >= 0 ) /*0x6457d7*/
    {
      v5 = 0; /*0x6457dd*/
      if ( aP2 > 0 ) /*0x6457e1*/
      {
        v6 = 0; /*0x6457e3*/
        do /*0x645806*/
        {
          if ( (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)aP1 + 16))(aP1, v6 + *(_DWORD *)(aP0 + 700), 3, 0) < 0 ) /*0x6457fa*/
            break; /*0x6457fa*/
          ++v5; /*0x645800*/
          v6 += 3; /*0x645801*/
        }
        while ( v5 < aP2 ); /*0x645806*/
      }
      return 0; /*0x645808*/
    }
  }
  return result; /*0x64580a*/
}
} // namespace gamemd

// 0x645910
namespace gamemd {
int ParticleTypeClass::GetObjectSize()
{
  return 792; /*0x645915*/
}
} // namespace gamemd

// 0x645920
namespace gamemd {
int ParticleTypeClass::GetTypeIdentifier()
{
  return 23; /*0x645925*/
}
} // namespace gamemd

// 0x645930
namespace gamemd {
char ParticleTypeClass::Stub(int a1, int a2)
{
  return 0; /*0x645932*/
}
} // namespace gamemd

// 0x645940
namespace gamemd {
int ParticleTypeClass::StubReturnFalse(int a1)
{
  return 0; /*0x645942*/
}
} // namespace gamemd
