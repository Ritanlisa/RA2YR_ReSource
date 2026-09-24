// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x6442D0
namespace gamemd {
void* ParticleSystemTypeClass::GetType(unsigned char *** aP1)
{
  int v3; // eax
  char v4; // cl
  char Bool_Overwrite; // al
  int Int_Overwrite; // eax
  int v7; // ecx
  int v8; // eax
  double v9; // st7
  double Double_Overwrite; // st7
  int v11; // edx
  bool v12; // zf
  int v13; // eax
  float *v14; // eax
  double v15; // st7
  double v16; // rax
  double v17; // st7
  unsigned int v18; // ecx
  unsigned int v19; // edx
  double v20; // st7
  unsigned int v21; // eax
  unsigned int v22; // ecx
  double v23; // st7
  double v24; // rax
  double v25; // st7
  unsigned int v26; // ecx
  unsigned int v27; // edx
  double v28; // st7
  char v29; // al
  int Coord; // eax
  int v31; // ecx
  int v32; // eax
  char v33; // al
  double v35; // [esp+0h] [ebp-68h]
  double v36; // [esp+0h] [ebp-68h]
  int v37; // [esp+4h] [ebp-64h]
  int v38; // [esp+4h] [ebp-64h]
  const void **v39; // [esp+14h] [ebp-54h] BYREF
  int v40; // [esp+18h] [ebp-50h]
  float v41[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+28h] [ebp-40h] BYREF

  INIClass::ResetSection(aP1); /*0x6442e3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, aP1) ) /*0x6442eb*/
    return 0; /*0x644622*/
  INIClass::GetString( /*0x64430f*/
    aP1,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aHoldswhat,
    &g_INI_DefaultBuffer,
    Destination,
    64);
  v3 = BuildingTypeClass::FindOrCreateEx(Destination); /*0x644318*/
  v4 = *(_BYTE *)(this + 664); /*0x64431d*/
  *(_DWORD *)(this + 660) = v3; /*0x644323*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x644332*/
                     (int)aP1,
                     (unsigned __int8 *)(this + 36),
                     (unsigned __int8 *)g_INI_Key_Spawns,
                     v4);
  v37 = *(_DWORD *)(this + 668); /*0x64433f*/
  *(_BYTE *)(this + 664) = Bool_Overwrite; /*0x644346*/
  *(_DWORD *)(this + 668) = INIClass::ReadInt_Overwrite( /*0x644351*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (unsigned __int8 *)aSpawnframes,
                              v37);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644366*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (unsigned __int8 *)aParticlecap,
                    *(_DWORD *)(this + 676));
  v7 = *(_DWORD *)(this + 680); /*0x64436b*/
  *(_DWORD *)(this + 676) = Int_Overwrite; /*0x644371*/
  v8 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aSpawnradius, v7); /*0x644380*/
  v9 = *(float *)(this + 672); /*0x644385*/
  *(_DWORD *)(this + 680) = v8; /*0x644390*/
  *(float *)(this + 672) = INIClass::ReadDouble_Overwrite( /*0x6443a4*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (unsigned __int8 *)aSlowdown,
                             v9);
  *(float *)(this + 684) = INIClass::ReadDouble_Overwrite( /*0x6443c3*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (unsigned __int8 *)aSpawncutoff,
                             *(float *)(this + 684));
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x6443dd*/
                       (int)aP1,
                       (unsigned __int8 *)(this + 36),
                       (unsigned __int8 *)aSpawntransluce,
                       *(float *)(this + 688));
  v11 = *(_DWORD *)(this + 696); /*0x6443e2*/
  *(float *)(this + 688) = Double_Overwrite; /*0x6443ea*/
  *(_DWORD *)(this + 696) = INIClass::ReadInt_Overwrite( /*0x6443fc*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (unsigned __int8 *)aLifetime,
                              v11);
  INIClass::GetString( /*0x644416*/
    aP1,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)aBehaveslike,
    &g_INI_DefaultBuffer,
    Destination,
    64);
  v40 = 0; /*0x64441b*/
  v39 = (const void **)off_836EE0; /*0x644423*/
  while ( 1 ) /*0x64443f*/
  {
    v12 = _strcmpi(Destination, *v39) == 0; /*0x64443f*/
    v13 = v40; /*0x644441*/
    if ( v12 ) /*0x644445*/
      break; /*0x644445*/
    ++v40; /*0x644448*/
    if ( (int)++v39 >= (int)g_INI_Key_Railgun ) /*0x64445c*/
    {
      v13 = -1; /*0x64445e*/
      break; /*0x64445e*/
    }
  }
  *(_DWORD *)(this + 692) = v13; /*0x644461*/
  v14 = ParticleSystemTypeClass::ReadXYZFromINI( /*0x64447b*/
          aP1,
          v41,
          (unsigned __int8 *)(this + 36),
          (unsigned __int8 *)aSpawndirection,
          (float *)(this + 700));
  *(float *)(this + 700) = *v14; /*0x644482*/
  *(float *)(this + 704) = v14[1]; /*0x64448b*/
  v35 = *(double *)(this + 712); /*0x6444a1*/
  *(float *)(this + 708) = v14[2]; /*0x6444aa*/
  v15 = INIClass::ReadDouble_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aParticlesperco, v35); /*0x6444b0*/
  v16 = *(double *)(this + 720); /*0x6444bb*/
  *(double *)(this + 712) = v15; /*0x6444c1*/
  v17 = INIClass::ReadDouble_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aSpiraldeltaper, v16); /*0x6444d1*/
  v18 = *(_DWORD *)(this + 732); /*0x6444d6*/
  v19 = *(_DWORD *)(this + 728); /*0x6444dc*/
  *(double *)(this + 720) = v17; /*0x6444e2*/
  v20 = INIClass::ReadDouble_Overwrite( /*0x6444f2*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (unsigned __int8 *)aSpiralradius,
          COERCE_DOUBLE(__PAIR64__(v18, v19)));
  v21 = *(_DWORD *)(this + 740); /*0x6444f7*/
  v22 = *(_DWORD *)(this + 736); /*0x6444fd*/
  *(double *)(this + 728) = v20; /*0x644503*/
  v23 = INIClass::ReadDouble_Overwrite( /*0x644513*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (unsigned __int8 *)aPositionpertur,
          COERCE_DOUBLE(__PAIR64__(v21, v22)));
  v24 = *(double *)(this + 744); /*0x64451e*/
  *(double *)(this + 736) = v23; /*0x644524*/
  v25 = INIClass::ReadDouble_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aMovementpertur, v24); /*0x644534*/
  v26 = *(_DWORD *)(this + 756); /*0x644539*/
  v27 = *(_DWORD *)(this + 752); /*0x64453f*/
  *(double *)(this + 744) = v25; /*0x644545*/
  v28 = INIClass::ReadDouble_Overwrite( /*0x644555*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (unsigned __int8 *)aVelocitypertur,
          COERCE_DOUBLE(__PAIR64__(v26, v27)));
  v29 = *(_BYTE *)(this + 779); /*0x64455a*/
  *(double *)(this + 752) = v28; /*0x644562*/
  *(_BYTE *)(this + 779) = INIClass::ReadBool_Overwrite( /*0x644574*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (unsigned __int8 *)aLaser,
                             v29);
  Coord = INIClass::GetCoord( /*0x64458e*/
            aP1,
            (int)&v39,
            (unsigned __int8 *)(this + 36),
            (unsigned __int8 *)aLasercolor,
            (unsigned __int8 *)(this + 776));
  v31 = *(_DWORD *)(this + 768); /*0x644596*/
  *(_WORD *)(this + 776) = *(_WORD *)Coord; /*0x64459c*/
  *(_BYTE *)(this + 778) = *(_BYTE *)(Coord + 2); /*0x6445af*/
  v32 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aSparkspawnfram, v31); /*0x6445b5*/
  v38 = *(_DWORD *)(this + 772); /*0x6445c2*/
  *(_DWORD *)(this + 768) = v32; /*0x6445c9*/
  *(_DWORD *)(this + 772) = INIClass::ReadInt_Overwrite( /*0x6445d4*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (unsigned __int8 *)aLightsize,
                              v38);
  v33 = INIClass::ReadBool_Overwrite( /*0x6445e9*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (unsigned __int8 *)aOneframelight,
          *(_BYTE *)(this + 780));
  v36 = *(double *)(this + 760); /*0x6445fb*/
  *(_BYTE *)(this + 780) = v33; /*0x644604*/
  *(double *)(this + 760) = INIClass::ReadDouble_Overwrite( /*0x64460f*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (unsigned __int8 *)aSpawnsparkperc,
                              v36);
  return 1; /*0x644617*/
}
}
// 0x644700
namespace gamemd {
void* ParticleSystemTypeClass::PowerDrainUpdate(int * a2)
{
  int v3; // ecx

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x644709*/
  Power::TimerProcess(*(_DWORD *)(this + 660)); /*0x644717*/
  LOBYTE(v3) = *(_BYTE *)(this + 664); /*0x64471c*/
  Power::FlagProcess(a2, v3); /*0x644725*/
  Power::TimerProcess(*(_DWORD *)(this + 668)); /*0x644733*/
  Checksummer::Add_float((unsigned int *)a2, *(_DWORD *)(this + 672)); /*0x644741*/
  Power::TimerProcess(*(_DWORD *)(this + 676)); /*0x64474f*/
  Power::TimerProcess(*(_DWORD *)(this + 680)); /*0x64475d*/
  Checksummer::Add_float((unsigned int *)a2, *(_DWORD *)(this + 684)); /*0x64476b*/
  Checksummer::Add_float((unsigned int *)a2, *(_DWORD *)(this + 688)); /*0x644779*/
  Power::TimerProcess(*(_DWORD *)(this + 692)); /*0x644787*/
  return Power::TimerProcess(*(_DWORD *)(this + 696)); /*0x64479a*/
}
}
// 0x644960
namespace gamemd {
ParticleSystemTypeClass * ParticleSystemTypeClass::ddtor(char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *this = &ParticleSystemTypeClass::`vftable'; /*0x644966*/
  *(this + 1) = &ParticleSystemTypeClass::`vftable'; /*0x64496c*/
  *(this + 2) = &ParticleSystemTypeClass::`vftable'; /*0x644973*/
  *(this + 3) = &ParticleSystemTypeClass::`vftable'; /*0x64497a*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x644981*/
  v5 = this; /*0x644996*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_A83D68 + 16))(&dword_A83D68, &v5); /*0x64499a*/
  if ( v3 != -1 && v3 < g_InfantryTypeInitState && v3 < --g_InfantryTypeInitState ) /*0x6449b5*/
  {
    do /*0x6449cd*/
    {
      ++v3; /*0x6449bd*/
      *((_DWORD *)dword_A83D6C + v3 - 1) = *((_DWORD *)dword_A83D6C + v3); /*0x6449c1*/
    }
    while ( v3 < g_InfantryTypeInitState ); /*0x6449cd*/
  }
  ObjectTypeClass::Destruct((int)this); /*0x6449d1*/
  if ( (a2 & 1) != 0 ) /*0x6449db*/
    __3_YAXPAX_Z(this); /*0x6449de*/
  return this; /*0x6449e8*/
}
} // namespace gamemd

// 0x476340
namespace gamemd {
float * ParticleSystemTypeClass::ReadXYZFromINI(float * a1, CCINIClass * aP2, unsigned char * a3, float * a4)
{
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  double v8; // st7
  float v10; // [esp+4h] [ebp-20Ch]
  float v11; // [esp+8h] [ebp-208h]
  float v12; // [esp+Ch] [ebp-204h]
  char String[512]; // [esp+10h] [ebp-200h] BYREF

  if ( INIClass::GetString(this, aP2, a3, &g_INI_DefaultBuffer, String, 512) ) /*0x476383*/
  {
    v5 = strtok(String, Delimiter); /*0x476396*/
    v10 = atof(v5); /*0x4763a1*/
    v6 = strtok(0, Delimiter); /*0x4763ac*/
    v11 = atof(v6); /*0x4763b7*/
    v7 = strtok(0, Delimiter); /*0x4763c2*/
    v8 = atof(v7); /*0x4763c8*/
    v12 = v8; /*0x4763d8*/
    *a1 = v10; /*0x4763e1*/
    a1[1] = v11; /*0x4763e8*/
    a1[2] = v12; /*0x4763ef*/
    return a1; /*0x4763cd*/
  }
  else
  {
    *a1 = *a4; /*0x476406*/
    a1[1] = a4[1]; /*0x47640b*/
    a1[2] = a4[2]; /*0x476412*/
    return a1; /*0x4763fb*/
  }
}
} // namespace gamemd

// 0x6447A0
namespace gamemd {
int ParticleSystemTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6447a6*/
    return -2147467261; /*0x6447a8*/
  *a2 = 1883112522; /*0x6447b6*/
  a2[1] = 298979249; /*0x6447be*/
  a2[2] = 1610642049; /*0x6447c7*/
  a2[3] = -1252326136; /*0x6447d0*/
  return 0; /*0x6447ad*/
}
} // namespace gamemd

// 0x6447E0
namespace gamemd {
int ParticleSystemTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
  if ( ObjectTypeClass::LoadCleanup((int)aP0, aP1) >= 0 && aP0 ) /*0x6447f6*/
  {
    ObjectTypeClass::Construct(aP0, (int)&aP1); /*0x6447ff*/
    *aP0 = &ParticleSystemTypeClass::`vftable'; /*0x644804*/
    aP0[1] = &ParticleSystemTypeClass::`vftable'; /*0x64480a*/
    aP0[2] = &ParticleSystemTypeClass::`vftable'; /*0x644811*/
    aP0[3] = &ParticleSystemTypeClass::`vftable'; /*0x644818*/
  }
  return 0; /*0x644821*/
}
} // namespace gamemd

// 0x644830
namespace gamemd {
int ParticleSystemTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
  AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, aP2); /*0x64483f*/
  return 0; /*0x644846*/
}
} // namespace gamemd

// 0x644920
namespace gamemd {
int ParticleSystemTypeClass::GetObjectSize()
{
  return 784; /*0x644925*/
}
} // namespace gamemd

// 0x644930
namespace gamemd {
int ParticleSystemTypeClass::GetTypeIdentifier()
{
  return 25; /*0x644935*/
}
} // namespace gamemd

// 0x644940
namespace gamemd {
char ParticleSystemTypeClass::Stub(int a1, int a2)
{
  return 0; /*0x644942*/
}
} // namespace gamemd

// 0x644950
namespace gamemd {
int ParticleSystemTypeClass::StubReturnFalse(int a1)
{
  return 0; /*0x644952*/
}
} // namespace gamemd
