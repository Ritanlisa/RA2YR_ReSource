// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/FilePipe_38_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x477900
namespace gamemd {
void ParticleTypeClass::GetClassIdentifier()
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x477906*/
  *(_DWORD *)(this + 16) = 0; /*0x477909*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x477910*/
  {
    __3_YAXPAX_Z(v2); /*0x477916*/
    *(_DWORD *)(this + 4) = 0; /*0x47791e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x477921*/
  *(_DWORD *)(this + 8) = 0; /*0x477924*/
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
  int v8; // edx
  _BYTE *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x4784f2*/
  if ( a2 ) /*0x4784fe*/
  {
    v5 = a3; /*0x478504*/
    *((_BYTE *)this + 12) = 0; /*0x478508*/
    if ( a3 ) /*0x47850d*/
    {
      if ( a2 - 1 >= 0 ) /*0x478546*/
      {
        v9 = a3 + 2; /*0x478548*/
        v10 = a2; /*0x47854b*/
        do /*0x478558*/
        {
          *(v9 - 2) = 0; /*0x47854c*/
          *(v9 - 1) = 0; /*0x47854f*/
          *v9 = 0; /*0x478552*/
          v9 += 3; /*0x478554*/
          --v10; /*0x478557*/
        }
        while ( v10 ); /*0x478558*/
      }
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x478514*/
      if ( v6 ) /*0x47851e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478525*/
        {
          v7 = v6 + 2; /*0x478527*/
          v8 = a2; /*0x47852a*/
          do /*0x478537*/
          {
            *(v7 - 2) = 0; /*0x47852b*/
            *(v7 - 1) = 0; /*0x47852e*/
            *v7 = 0; /*0x478531*/
            v7 += 3; /*0x478533*/
            --v8; /*0x478536*/
          }
          while ( v8 ); /*0x478537*/
        }
        v5 = v6; /*0x478539*/
      }
      else
      {
        v5 = 0; /*0x47853d*/
      }
    }
    *((_BYTE *)this + 12) = 1; /*0x47855c*/
    if ( !v5 ) /*0x478560*/
      return 0; /*0x4785e2*/
    if ( *((_DWORD *)this + 1) ) /*0x478562*/
    {
      v11 = *((_DWORD *)this + 2); /*0x478567*/
      if ( a2 < v11 ) /*0x47856c*/
        v11 = a2; /*0x47856e*/
      if ( v11 > 0 ) /*0x478572*/
      {
        v12 = 0; /*0x478574*/
        do /*0x478590*/
        {
          v13 = *((_DWORD *)this + 1) + v12; /*0x47857b*/
          v14 = &v5[v12]; /*0x47857d*/
          v12 += 3; /*0x478580*/
          --v11; /*0x478583*/
          *(_WORD *)v14 = *(_WORD *)v13; /*0x478587*/
          v14[2] = *(_BYTE *)(v13 + 2); /*0x47858d*/
        }
        while ( v11 ); /*0x478590*/
        v3 = a2; /*0x478592*/
      }
      if ( *((_BYTE *)this + 13) ) /*0x478598*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4785a1*/
        *((_DWORD *)this + 1) = 0; /*0x4785a9*/
      }
    }
    *((_DWORD *)this + 1) = v5; /*0x4785b4*/
    *((_DWORD *)this + 2) = v3; /*0x4785ba*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x4785bd*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4785c6*/
  }
  v15 = *((_DWORD *)this + 2); /*0x4785c9*/
  if ( v15 < *((_DWORD *)this + 4) ) /*0x4785d1*/
    *((_DWORD *)this + 4) = v15; /*0x4785d3*/
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
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // edi

  if ( this == a2 ) /*0x4788ec*/
    return this; /*0x4788ec*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x4788f4*/
  v3 = a2[2]; /*0x4788f7*/
  *(this + 2) = v3; /*0x4788fe*/
  if ( !v3 ) /*0x478901*/
  {
    *(this + 1) = 0; /*0x478974*/
    *((_BYTE *)this + 13) = 0; /*0x478977*/
    return this; /*0x47897a*/
  }
  v4 = (char *)__2_YAPAXI_Z(3 * v3); /*0x478907*/
  if ( v4 ) /*0x478911*/
  {
    if ( v3 - 1 >= 0 ) /*0x478918*/
    {
      v5 = v4 + 2; /*0x47891a*/
      v6 = v3; /*0x47891d*/
      do /*0x47892a*/
      {
        *(v5 - 2) = 0; /*0x47891e*/
        *(v5 - 1) = 0; /*0x478921*/
        *v5 = 0; /*0x478924*/
        v5 += 3; /*0x478926*/
        --v6; /*0x478929*/
      }
      while ( v6 ); /*0x47892a*/
    }
  }
  else
  {
    v4 = 0; /*0x47892e*/
  }
  *(this + 1) = v4; /*0x478932*/
  if ( !v4 ) /*0x478935*/
    return this; /*0x478935*/
  v7 = *(this + 2); /*0x478937*/
  v8 = 0; /*0x47893a*/
  *((_BYTE *)this + 13) = 1; /*0x47893e*/
  if ( v7 <= 0 ) /*0x478942*/
    return this; /*0x478942*/
  v9 = 0; /*0x478944*/
  do /*0x478969*/
  {
    v10 = a2[1] + v9; /*0x47894e*/
    v11 = *(this + 1) + v9; /*0x478952*/
    ++v8; /*0x478954*/
    v9 += 3; /*0x478958*/
    *(_WORD *)v11 = *(_WORD *)v10; /*0x47895b*/
    *(_BYTE *)(v11 + 2) = *(_BYTE *)(v10 + 2); /*0x478961*/
  }
  while ( v8 < *(this + 2) ); /*0x478969*/
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
  _DWORD *v35; // edx
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
  inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(this + 36)); /*0x644f9a*/
  RGBColorList = (_DWORD *)INIClass::ReadRGBColorList( /*0x644fac*/
                             a2,
                             (int)v54,
                             inited,
                             (unsigned __int8 *)aColorlist,
                             &TypeList<RGBClass>::`vftable',
                             v39,
                             v40,
                             v41,
                             v42,
                             v43,
                             v44);
  ParticleTypeClass::EnsureCapacity(RGBColorList); /*0x644fb5*/
  *(_DWORD *)(this + 712) = RGBColorList[4]; /*0x644fbd*/
  *(_DWORD *)(this + 716) = RGBColorList[5]; /*0x644fc6*/
  *(_DWORD *)(this + 720) = RGBColorList[6]; /*0x644fd3*/
  v54[0] = (int)&VectorClass<RGBClass>::`vftable'; /*0x644fd9*/
  FilePipe_38_::ddtor(v54); /*0x644fe1*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(this + 36, aMaxdc, *(_DWORD *)(this + 732)); /*0x644ff5*/
  v45 = *(_DWORD *)(this + 736); /*0x645002*/
  *(_DWORD *)(this + 732) = Int_Overwrite; /*0x645009*/
  *(_DWORD *)(this + 736) = INIClass::ReadInt_Overwrite(this + 36, aMaxec, v45); /*0x645014*/
  v6 = INIClass::ReadInt_Overwrite(this + 36, g_INI_Key_Damage, *(_DWORD *)(this + 744)); /*0x645029*/
  v7 = *(_DWORD *)(this + 740); /*0x64502e*/
  *(_DWORD *)(this + 744) = v6; /*0x64504b*/
  if ( INIClass::GetString( /*0x645051*/
         a2,
         (unsigned __int8 *)(this + 36),
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
  v46 = *(_DWORD *)(this + 748); /*0x64506f*/
  *(_DWORD *)(this + 740) = v8; /*0x645076*/
  *(_DWORD *)(this + 748) = INIClass::ReadInt_Overwrite(this + 36, aStartframe, v46); /*0x645081*/
  v9 = INIClass::ReadInt_Overwrite(this + 36, aNumloopframes, *(_DWORD *)(this + 752)); /*0x645096*/
  v10 = *(_DWORD *)(this + 756); /*0x64509b*/
  *(_DWORD *)(this + 752) = v9; /*0x6450a1*/
  v11 = INIClass::ReadInt_Overwrite(this + 36, aTranslucency, v10); /*0x6450b0*/
  v47 = *(_DWORD *)(this + 760); /*0x6450bd*/
  *(_DWORD *)(this + 756) = v11; /*0x6450c4*/
  v12 = INIClass::ReadInt_Overwrite(this + 36, aWindeffect, v47); /*0x6450ca*/
  v13 = *(float *)(this + 764); /*0x6450cf*/
  *(_DWORD *)(this + 760) = v12; /*0x6450da*/
  INIClass::ReadDouble_Overwrite(this + 36, (int)aVelocity, v13); /*0x6450e9*/
  *(float *)(this + 764) = v13; /*0x6450ee*/
  v14 = *(float *)(this + 768); /*0x6450f4*/
  INIClass::ReadDouble_Overwrite(this + 36, (int)aDeacc, v14); /*0x645108*/
  v15 = *(_DWORD *)(this + 772); /*0x64510d*/
  *(float *)(this + 768) = v14; /*0x645115*/
  v16 = INIClass::ReadInt_Overwrite(this + 36, aRadius, v15); /*0x645122*/
  v17 = *(_BYTE *)(this + 776); /*0x645127*/
  *(_DWORD *)(this + 772) = v16; /*0x64512d*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(this + 36, aDeleteonstatel, v17); /*0x64513c*/
  v48 = *(char *)(this + 777); /*0x645148*/
  *(_BYTE *)(this + 776) = Bool_Overwrite; /*0x645151*/
  *(_BYTE *)(this + 777) = INIClass::ReadInt_Overwrite(this + 36, aEndstateai, v48); /*0x64515c*/
  v19 = INIClass::ReadInt_Overwrite(this + 36, aStartstateai, *(char *)(this + 778)); /*0x645172*/
  v49 = *(char *)(this + 779); /*0x64517e*/
  *(_BYTE *)(this + 778) = v19; /*0x645187*/
  *(_BYTE *)(this + 779) = INIClass::ReadInt_Overwrite(this + 36, aStateaiadvance, v49); /*0x645192*/
  *(_BYTE *)(this + 782) = INIClass::ReadInt_Overwrite(this + 36, aTranslucent50s, *(unsigned __int8 *)(this + 782)); /*0x6451ae*/
  v20 = INIClass::ReadInt_Overwrite(this + 36, aTranslucent25s, *(unsigned __int8 *)(this + 781)); /*0x6451c5*/
  v21 = *(_BYTE *)(this + 783); /*0x6451ca*/
  *(_BYTE *)(this + 781) = v20; /*0x6451d0*/
  v22 = INIClass::ReadBool_Overwrite(this + 36, g_INI_Key_Normalized, v21); /*0x6451df*/
  HIDWORD(v23) = *(_DWORD *)(this + 692); /*0x6451e4*/
  *(_BYTE *)(this + 783) = v22; /*0x6451ea*/
  LODWORD(v23) = *(_DWORD *)(this + 688); /*0x6451f0*/
  INIClass::ReadDouble_Overwrite(this + 36, (int)aColorspeed, v23); /*0x645200*/
  v24 = *(_DWORD *)(this + 672); /*0x645205*/
  *(double *)(this + 688) = v14; /*0x64520b*/
  v25 = INIClass::ReadInt_Overwrite(this + 36, aXvelocity, v24); /*0x64521a*/
  v50 = *(_DWORD *)(this + 676); /*0x645227*/
  *(_DWORD *)(this + 672) = v25; /*0x64522e*/
  *(_DWORD *)(this + 676) = INIClass::ReadInt_Overwrite(this + 36, aYvelocity, v50); /*0x645239*/
  v26 = INIClass::ReadInt_Overwrite(this + 36, aMinzvelocity, *(_DWORD *)(this + 680)); /*0x64524e*/
  v27 = *(_DWORD *)(this + 684); /*0x645253*/
  *(_DWORD *)(this + 680) = v26; /*0x645259*/
  *(_DWORD *)(this + 684) = INIClass::ReadInt_Overwrite(this + 36, aZvelocityrange, v27); /*0x645281*/
  Coord2 = INIClass::GetCoord2( /*0x645287*/
             a2,
             v55,
             (unsigned __int8 *)(this + 36),
             (unsigned __int8 *)aNextparticleof,
             (int *)(this + 660));
  *(_DWORD *)(this + 660) = *Coord2; /*0x64528e*/
  *(_DWORD *)(this + 664) = Coord2[1]; /*0x645298*/
  *(_DWORD *)(this + 668) = Coord2[2]; /*0x64529e*/
  Coord = INIClass::GetCoord( /*0x6452b1*/
            a2,
            (int)v52,
            (unsigned __int8 *)(this + 36),
            (unsigned __int8 *)aStartcolor1,
            (unsigned __int8 *)(this + 724));
  *(_WORD *)(this + 724) = *(_WORD *)Coord; /*0x6452bd*/
  *(_BYTE *)(this + 726) = *(_BYTE *)(Coord + 2); /*0x6452c4*/
  v30 = INIClass::GetCoord( /*0x6452d7*/
          a2,
          (int)v52,
          (unsigned __int8 *)(this + 36),
          (unsigned __int8 *)aStartcolor2,
          (unsigned __int8 *)(this + 727));
  v51 = *(char *)(this + 777); /*0x6452e6*/
  *(_WORD *)(this + 727) = *(_WORD *)v30; /*0x6452e7*/
  *(_BYTE *)(this + 729) = *(_BYTE *)(v30 + 2); /*0x6452f6*/
  *(_BYTE *)(this + 780) = INIClass::ReadInt_Overwrite(this + 36, aFinaldamagesta, v51); /*0x64530f*/
  if ( INIClass::GetString(a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aNextparticle, 0, Source, 32) ) /*0x645315*/
  {
    if ( _strcmpi(Source, g_Str__none_) ) /*0x64532c*/
    {
      v31 = 0; /*0x64533d*/
      if ( g_BuildingTypeInitState <= 0 ) /*0x645341*/
      {
  LABEL_10:
        v32 = __2_YAPAXI_Z(0x318u); /*0x64536b*/
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
          v35 = g_BuildingProductionQueue; /*0x645398*/
          while ( (_DWORD *)*v35 != v33 ) /*0x6453a0*/
          {
            ++v34; /*0x6453a2*/
            ++v35; /*0x6453a3*/
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
    *(_DWORD *)(this + 784) = v31; /*0x6453b4*/
  }
  Source[0] = 0; /*0x6453cb*/
  INIClass::GetString(a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aBehaveslike, 0, Source, 32); /*0x6453d0*/
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
  *(_DWORD *)(this + 788) = v36; /*0x6453ff*/
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

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6454e9*/
  Power::TimerProcess(*(_DWORD *)(this + 732)); /*0x6454f7*/
  Power::TimerProcess(*(_DWORD *)(this + 736)); /*0x645505*/
  Power::TimerProcess(*(_DWORD *)(this + 744)); /*0x645513*/
  Power::TimerProcess(*(_DWORD *)(this + 748)); /*0x645521*/
  Power::TimerProcess(*(_DWORD *)(this + 752)); /*0x64552f*/
  Power::TimerProcess(*(_DWORD *)(this + 756)); /*0x64553d*/
  Power::TimerProcess(*(_DWORD *)(this + 760)); /*0x64554b*/
  Checksummer::Add_float(*(_DWORD *)(this + 764)); /*0x645559*/
  Checksummer::Add_float(*(_DWORD *)(this + 768)); /*0x645567*/
  Power::TimerProcess(*(_DWORD *)(this + 772)); /*0x645575*/
  LOBYTE(v3) = *(_BYTE *)(this + 776); /*0x64557a*/
  Power::FlagProcess(a2, v3); /*0x645583*/
  LOBYTE(v4) = *(_BYTE *)(this + 777); /*0x645588*/
  v5 = Power::FinalizeDrain(a2, v4); /*0x645591*/
  LOBYTE(v5) = *(_BYTE *)(this + 778); /*0x645596*/
  Power::FinalizeDrain(a2, v5); /*0x64559f*/
  LOBYTE(v6) = *(_BYTE *)(this + 779); /*0x6455a4*/
  Power::FinalizeDrain(a2, v6); /*0x6455ad*/
  Power::TimerProcess(*(unsigned __int8 *)(this + 781)); /*0x6455bd*/
  Power::TimerProcess(*(unsigned __int8 *)(this + 782)); /*0x6455cd*/
  LOBYTE(v7) = *(_BYTE *)(this + 783); /*0x6455d2*/
  Power::FlagProcess(a2, v7); /*0x6455db*/
  Power::TimerProcess(*(_DWORD *)(this + 784)); /*0x6455e9*/
  Power::TimerProcess(*(_DWORD *)(this + 788)); /*0x6455f7*/
  return Checksummer::Add_double(*(_DWORD *)(this + 688), *(_DWORD *)(this + 692)); /*0x645611*/
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
      *(_DWORD *)(v3 + 696) = &TypeList<RGBClass>::`vftable'; /*0x64569d*/
      *(_DWORD *)v3 = &ParticleTypeClass::`vftable'; /*0x6456a3*/
      *(_DWORD *)(v3 + 4) = &ParticleTypeClass::`vftable'; /*0x6456a9*/
      *(_DWORD *)(v3 + 8) = &ParticleTypeClass::`vftable'; /*0x6456b0*/
      *(_DWORD *)(v3 + 12) = &ParticleTypeClass::`vftable'; /*0x6456b7*/
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
          LOWORD(a2) = 0; /*0x645706*/
          BYTE2(a2) = 0; /*0x64570e*/
          result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 12))(v2, &a2, 3, 0); /*0x645712*/
          if ( result < 0 ) /*0x645717*/
            break; /*0x645717*/
          v7 = *(_DWORD *)(v3 + 704); /*0x645719*/
          if ( *(_DWORD *)(v3 + 712) < v7 /*0x645747*/
            || (*(_BYTE *)(v3 + 709) || !v7)
            && (v8 = *(_DWORD *)(v3 + 716), v8 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v3 + 696) + 8))(v3 + 696, v7 + v8, 0) )
          {
            v9 = *(_DWORD *)(v3 + 712); /*0x64574e*/
            v10 = v9 + 1; /*0x645751*/
            v11 = 3 * v9; /*0x645754*/
            v12 = *(_DWORD *)(v3 + 700); /*0x645757*/
            *(_DWORD *)(v3 + 712) = v10; /*0x64575a*/
            v13 = v12 + v11; /*0x64575d*/
            *(_WORD *)v13 = a2; /*0x645764*/
            *(_BYTE *)(v13 + 2) = BYTE2(a2); /*0x64576b*/
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

  result = *(this + 185); /*0x6458b0*/
  if ( result == a2 ) /*0x6458bc*/
    *(this + 185) = 0; /*0x6458be*/
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
  void **v7; // [esp+4h] [ebp-4h] BYREF

  *this = &ParticleTypeClass::`vftable'; /*0x645956*/
  *(this + 1) = &ParticleTypeClass::`vftable'; /*0x64595c*/
  *(this + 2) = &ParticleTypeClass::`vftable'; /*0x645963*/
  *(this + 3) = &ParticleTypeClass::`vftable'; /*0x64596a*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x645971*/
  v7 = this; /*0x645986*/
  v3 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v7); /*0x64598a*/
  if ( v3 != -1 && v3 < g_AnimManager && v3 < --g_AnimManager ) /*0x6459a5*/
  {
    do /*0x6459bd*/
    {
      ++v3; /*0x6459ad*/
      *((_DWORD *)g_AnimPoolCount + v3 - 1) = *((_DWORD *)g_AnimPoolCount + v3); /*0x6459b1*/
    }
    while ( v3 < g_AnimManager ); /*0x6459bd*/
  }
  v7 = this; /*0x6459cf*/
  v4 = (*(int (__thiscall **)(int *, void ***))(dword_A83D98 + 16))(&dword_A83D98, &v7); /*0x6459d3*/
  if ( v4 != -1 && v4 < g_BuildingTypeInitState && v4 < --g_BuildingTypeInitState ) /*0x6459ee*/
  {
    do /*0x645a06*/
    {
      ++v4; /*0x6459f6*/
      *((_DWORD *)g_BuildingProductionQueue + v4 - 1) = *((_DWORD *)g_BuildingProductionQueue + v4); /*0x6459fa*/
    }
    while ( v4 < g_BuildingTypeInitState ); /*0x645a06*/
  }
  v5 = *(this + 175); /*0x645a08*/
  *(this + 174) = &VectorClass<RGBClass>::`vftable'; /*0x645a0e*/
  if ( v5 && *((_BYTE *)this + 709) ) /*0x645a1c*/
  {
    __3_YAXPAX_Z(v5); /*0x645a27*/
    *(this + 175) = 0; /*0x645a2f*/
  }
  *((_BYTE *)this + 709) = 0; /*0x645a3b*/
  *(this + 176) = 0; /*0x645a42*/
  ObjectTypeClass::Destruct((int)this); /*0x645a4c*/
  if ( (a2 & 1) != 0 ) /*0x645a56*/
    __3_YAXPAX_Z(this); /*0x645a59*/
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

  *(this + 1) = 0; /*0x645a7d*/
  *(this + 2) = a2; /*0x645a80*/
  *((_BYTE *)this + 12) = 1; /*0x645a83*/
  *((_BYTE *)this + 13) = 0; /*0x645a87*/
  *this = &VectorClass<RGBClass>::`vftable'; /*0x645a8a*/
  if ( a2 ) /*0x645a90*/
  {
    if ( a3 ) /*0x645a98*/
    {
      if ( a2 - 1 >= 0 ) /*0x645a9f*/
      {
        v4 = (_BYTE *)(a3 + 2); /*0x645aa1*/
        v5 = a2; /*0x645aa4*/
        do /*0x645ab1*/
        {
          *(v4 - 2) = 0; /*0x645aa5*/
          *(v4 - 1) = 0; /*0x645aa8*/
          *v4 = 0; /*0x645aab*/
          v4 += 3; /*0x645aad*/
          --v5; /*0x645ab0*/
        }
        while ( v5 ); /*0x645ab1*/
      }
      *(this + 1) = a3; /*0x645ab3*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x645abc*/
      if ( v6 ) /*0x645ac6*/
      {
        if ( a2 - 1 >= 0 ) /*0x645acd*/
        {
          v7 = v6 + 2; /*0x645acf*/
          v8 = a2; /*0x645ad2*/
          do /*0x645adf*/
          {
            *(v7 - 2) = 0; /*0x645ad3*/
            *(v7 - 1) = 0; /*0x645ad6*/
            *v7 = 0; /*0x645ad9*/
            v7 += 3; /*0x645adb*/
            --v8; /*0x645ade*/
          }
          while ( v8 ); /*0x645adf*/
        }
      }
      else
      {
        v6 = 0; /*0x645ae3*/
      }
      *(this + 1) = v6; /*0x645ae5*/
      *((_BYTE *)this + 13) = 1; /*0x645ae8*/
    }
  }
  *this = &DynamicVectorClass<RGBClass>::`vftable'; /*0x645aec*/
  *(this + 5) = 10; /*0x645af2*/
  *(this + 4) = 0; /*0x645af9*/
  return this; /*0x645afe*/
}
}
// 0x477930
namespace gamemd {
unsigned int ParticleTypeClass::LoadTypeData(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x477930*/
    return (a2 - *(_DWORD *)(this + 4)) / 3u; /*0x47794e*/
  else
    return 0; /*0x477937*/
}
} // namespace gamemd

// 0x477AC0
namespace gamemd {
TypeList * ParticleTypeClass::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x477ac3*/
  *this = &VectorClass<RGBClass>::`vftable'; /*0x477ac6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x477ad0*/
  {
    __3_YAXPAX_Z(v3); /*0x477ad8*/
    *(this + 1) = 0; /*0x477ae0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x477aeb*/
  *(this + 2) = 0; /*0x477af1*/
  if ( (a2 & 1) != 0 ) /*0x477af8*/
    __3_YAXPAX_Z(this); /*0x477afb*/
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
  for ( i = (_BYTE *)*(this + 1); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x478600*/
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
