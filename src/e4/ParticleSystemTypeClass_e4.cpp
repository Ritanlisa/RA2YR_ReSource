// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x476340
namespace gamemd {
int ParticleSystemTypeClass_ReadXYZFromINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__thiscall ParticleSystemTypeClass::ReadXYZFromINI(
        unsigned __int8 ***this,
        float *a1,
        CCINIClass *aP2,
        unsigned __int8 *a3,
        float *a4)
{
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  double v8; // st7
  float v10; // [esp+4h] [ebp-20Ch]
  float v11; // [esp+8h] [ebp-208h]
  float v12; // [esp+Ch] [ebp-204h]
  INIClass String[8]; // [esp+10h] [ebp-200h] BYREF

  if ( INIClass::GetString(this, (INIClass *)aP2, a3, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], String, 512) ) /*0x476383*/
  {
    v5 = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x476396*/
    v10 = atof(v5); /*0x4763a1*/
    v6 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x4763ac*/
    v11 = atof(v6); /*0x4763b7*/
    v7 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x4763c2*/
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
}
} // namespace gamemd

// 0x6442D0
namespace gamemd {
char ParticleSystemTypeClass::GetType(unsigned signed char *** aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ParticleSystemTypeClass::GetType(int this, unsigned __int8 ***aP1)
{
  int v3; // eax
  char v4; // cl
  char Bool_Overwrite; // al
  int Int_Overwrite; // eax
  CCINIClass *v7; // ecx
  int v8; // eax
  double v9; // st7
  double Double_Overwrite; // st7
  CCINIClass *v11; // edx
  bool v12; // zf
  int v13; // eax
  float *XYZFromINI; // eax
  double v15; // st7
  INIClass *v16; // eax
  double v17; // st7
  INIClass *v18; // edx
  double v19; // st7
  INIClass *v20; // ecx
  double v21; // st7
  INIClass *v22; // eax
  double v23; // st7
  INIClass *v24; // edx
  double v25; // st7
  char v26; // al
  int Coord; // eax
  Color *v31; // ecx
  int v29; // eax
  char v30; // al
  INIClass *aP3; // [esp+0h] [ebp-68h]
  INIClass *aP3a; // [esp+0h] [ebp-68h]
  INIClass *aP3_4; // [esp+4h] [ebp-64h]
  INIClass *aP3_4a; // [esp+4h] [ebp-64h]
  CCINIClass var54; // [esp+14h] [ebp-54h] BYREF

  INIClass::ResetSection(aP1); /*0x6442e3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x6442eb*/
    return 0; /*0x644622*/
  INIClass::GetString( /*0x64430f*/
    aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_830620.__pad_579C[4852],
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    (INIClass *)&var54.sectionHead[1],
    64);
  v3 = BuildingTypeClass::FindOrCreateEx((char *)&var54.sectionHead[1]); /*0x644318*/
  v4 = *(_BYTE *)(this + 664); /*0x64431d*/
  *(_DWORD *)(this + 660) = v3; /*0x644323*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &stru_8184C8, v4); /*0x644332*/
  aP3_4 = *(INIClass **)(this + 668); /*0x64433f*/
  *(_BYTE *)(this + 664) = Bool_Overwrite; /*0x644346*/
  *(_DWORD *)(this + 668) = INIClass::ReadInt_Overwrite( /*0x644351*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[4840],
                              aP3_4);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644366*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[4828],
                    *(INIClass **)(this + 676));
  v7 = *(CCINIClass **)(this + 680); /*0x64436b*/
  *(_DWORD *)(this + 676) = Int_Overwrite; /*0x644371*/
  v8 = INIClass::ReadInt_Overwrite( /*0x644380*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620.__pad_579C[4816],
         (INIClass *)v7);
  v9 = *(float *)(this + 672); /*0x644385*/
  *(_DWORD *)(this + 680) = v8; /*0x644390*/
  *(float *)(this + 672) = INIClass::ReadDouble_Overwrite( /*0x6443a4*/
                             (int)aP1,
                             (INIClass *)(this + 36),
                             (unsigned __int8 *)&stru_830620.__pad_579C[4804],
                             (INIClass *)LODWORD(v9));
  *(float *)(this + 684) = INIClass::ReadDouble_Overwrite( /*0x6443c3*/
                             (int)aP1,
                             (INIClass *)(this + 36),
                             (unsigned __int8 *)&stru_830620.__pad_579C[4792],
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 684)));
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x6443dd*/
                       (int)aP1,
                       (INIClass *)(this + 36),
                       (unsigned __int8 *)&stru_830620.__pad_579C[4768],
                       (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 688)));
  v11 = *(CCINIClass **)(this + 696); /*0x6443e2*/
  *(float *)(this + 688) = Double_Overwrite; /*0x6443ea*/
  *(_DWORD *)(this + 696) = INIClass::ReadInt_Overwrite( /*0x6443fc*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[4756],
                              (INIClass *)v11);
  INIClass::GetString( /*0x644416*/
    aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_830620.__pad_579C[4744],
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    (INIClass *)&var54.sectionHead[1],
    64);
  var54.headNode[0] = 0; /*0x64441b*/
  *(_DWORD *)var54.__pad_0 = &stru_830620.__pad_579C[4388]; /*0x644423*/
  while ( 1 ) /*0x64443f*/
  {
    v12 = _strcmpi((char *)&var54.sectionHead[1], **(char ***)var54.__pad_0) == 0; /*0x64443f*/
    v13 = var54.headNode[0]; /*0x644441*/
    if ( v12 ) /*0x644445*/
      break; /*0x644445*/
    ++var54.headNode[0]; /*0x644448*/
    *(_DWORD *)var54.__pad_0 += 4; /*0x644458*/
    if ( *(int *)var54.__pad_0 >= (int)&stru_830620.__pad_579C[4408] ) /*0x64445c*/
    {
      v13 = -1; /*0x64445e*/
      break; /*0x64445e*/
    }
  }
  *(_DWORD *)(this + 692) = v13; /*0x644461*/
  XYZFromINI = ParticleSystemTypeClass::ReadXYZFromINI( /*0x64447b*/
                 aP1,
                 (float *)&var54.headNode[1],
                 (CCINIClass *)(this + 36),
                 (unsigned __int8 *)&stru_830620.__pad_579C[4728],
                 (float *)(this + 700));
  *(float *)(this + 700) = *XYZFromINI; /*0x644482*/
  *(float *)(this + 704) = XYZFromINI[1]; /*0x64448b*/
  aP3 = *(INIClass **)(this + 712); /*0x6444a1*/
  *(float *)(this + 708) = XYZFromINI[2]; /*0x6444aa*/
  v15 = INIClass::ReadDouble_Overwrite( /*0x6444b0*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[4708],
          aP3);
  v16 = *(INIClass **)(this + 720); /*0x6444bb*/
  *(double *)(this + 712) = v15; /*0x6444c1*/
  v17 = INIClass::ReadDouble_Overwrite( /*0x6444d1*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[4688],
          v16);
  v18 = *(INIClass **)(this + 728); /*0x6444dc*/
  *(double *)(this + 720) = v17; /*0x6444e2*/
  v19 = INIClass::ReadDouble_Overwrite( /*0x6444f2*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[4672],
          v18);
  v20 = *(INIClass **)(this + 736); /*0x6444fd*/
  *(double *)(this + 728) = v19; /*0x644503*/
  v21 = INIClass::ReadDouble_Overwrite( /*0x644513*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[4640],
          v20);
  v22 = *(INIClass **)(this + 744); /*0x64451e*/
  *(double *)(this + 736) = v21; /*0x644524*/
  v23 = INIClass::ReadDouble_Overwrite( /*0x644534*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[4608],
          v22);
  v24 = *(INIClass **)(this + 752); /*0x64453f*/
  *(double *)(this + 744) = v23; /*0x644545*/
  v25 = INIClass::ReadDouble_Overwrite( /*0x644555*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[4576],
          v24);
  v26 = *(_BYTE *)(this + 779); /*0x64455a*/
  *(double *)(this + 752) = v25; /*0x644562*/
  *(_BYTE *)(this + 779) = INIClass::ReadBool_Overwrite( /*0x644574*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[4568],
                             v26);
  Coord = INIClass::GetCoord( /*0x64458e*/
            aP1,
            &var54,
            (INIClass *)(this + 36),
            (Color *)&stru_830620.__pad_579C[4556],
            (Color *)(this + 776));
  v31 = *(Color **)(this + 768); /*0x644596*/
  *(_WORD *)(this + 776) = *(_WORD *)Coord; /*0x64459c*/
  *(_BYTE *)(this + 778) = *(_BYTE *)(Coord + 2); /*0x6445af*/
  v29 = INIClass::ReadInt_Overwrite( /*0x6445b5*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[4536],
          (INIClass *)v31);
  aP3_4a = *(INIClass **)(this + 772); /*0x6445c2*/
  *(_DWORD *)(this + 768) = v29; /*0x6445c9*/
  *(_DWORD *)(this + 772) = INIClass::ReadInt_Overwrite( /*0x6445d4*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[4524],
                              aP3_4a);
  v30 = INIClass::ReadBool_Overwrite( /*0x6445e9*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[4508],
          *(_BYTE *)(this + 780));
  aP3a = *(INIClass **)(this + 760); /*0x6445fb*/
  *(_BYTE *)(this + 780) = v30; /*0x644604*/
  *(double *)(this + 760) = INIClass::ReadDouble_Overwrite( /*0x64460f*/
                              (int)aP1,
                              (INIClass *)(this + 36),
                              (unsigned __int8 *)&stru_830620.__pad_579C[4484],
                              aP3a);
  return 1; /*0x644617*/
}
}
} // namespace gamemd

// 0x644700
namespace gamemd {
int ParticleSystemTypeClass::PowerDrainUpdate(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParticleSystemTypeClass::_vt13(int this, int *a2)
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
} // namespace gamemd

// 0x6447A0
namespace gamemd {
int ParticleSystemTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall ParticleSystemTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6447a6*/
    return -2147467261; /*0x6447a8*/
  *a2 = 1883112522; /*0x6447b6*/
  a2[1] = 298979249; /*0x6447be*/
  a2[2] = 1610642049; /*0x6447c7*/
  a2[3] = -1252326136; /*0x6447d0*/
  return 0; /*0x6447ad*/
}
}
} // namespace gamemd

// 0x6447E0
namespace gamemd {
int ParticleSystemTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall ParticleSystemTypeClass::SaveLoad_Prefix(ObjectTypeClass *aP0, int aP1)
{
  if ( ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1) >= 0 && aP0 ) /*0x6447f6*/
  {
    ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1); /*0x6447ff*/
    *(_DWORD *)aP0->__pad_0 = &ParticleSystemTypeClass::`vftable'; /*0x644804*/
    *(_DWORD *)&aP0->__pad_0[4] = &ParticleSystemTypeClass::`vftable'; /*0x64480a*/
    *(_DWORD *)&aP0->__pad_0[8] = &ParticleSystemTypeClass::`vftable'; /*0x644811*/
    *(_DWORD *)&aP0->__pad_0[12] = &ParticleSystemTypeClass::`vftable'; /*0x644818*/
  }
  return 0; /*0x644821*/
}
}
} // namespace gamemd

// 0x644830
namespace gamemd {
int ParticleSystemTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall ParticleSystemTypeClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, ObjectTypeClass *aP1, int aP2)
{
  AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x64483f*/
  return 0; /*0x644846*/
}
}
} // namespace gamemd

// 0x644920
namespace gamemd {
int ParticleSystemTypeClass::GetObjectSize()
{
return 784;
}
} // namespace gamemd

// 0x644930
namespace gamemd {
int ParticleSystemTypeClass::GetTypeIdentifier()
{
return 25;
}
} // namespace gamemd

// 0x644940
namespace gamemd {
char ParticleSystemTypeClass::Stub(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall ParticleSystemTypeClass::_vt32(int a1, int a2)
{
  return 0; /*0x644942*/
}
}
} // namespace gamemd

// 0x644950
namespace gamemd {
int ParticleSystemTypeClass::StubReturnFalse(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall ParticleSystemTypeClass::_vt35(int a1)
{
  return 0; /*0x644952*/
}
}
} // namespace gamemd

// 0x644960
namespace gamemd {
ParticleSystemTypeClass * ParticleSystemTypeClass::ddtor(void ** Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ParticleSystemTypeClass *__thiscall ParticleSystemTypeClass::ddtor(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &ParticleSystemTypeClass::`vftable'; /*0x644966*/
  *(Block + 1) = &ParticleSystemTypeClass::`vftable'; /*0x64496c*/
  *(Block + 2) = &ParticleSystemTypeClass::`vftable'; /*0x644973*/
  *(Block + 3) = &ParticleSystemTypeClass::`vftable'; /*0x64497a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x644981*/
  v5 = Block; /*0x644996*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA83D68] + 16))(&MEMORY[0xA83D68], &v5); /*0x64499a*/
  if ( v3 != -1 && v3 < MEMORY[0xA83D78] && v3 < --MEMORY[0xA83D78] ) /*0x6449b5*/
  {
    do /*0x6449cd*/
    {
      ++v3; /*0x6449bd*/
      *((_DWORD *)MEMORY[0xA83D6C] + v3 - 1) = *((_DWORD *)MEMORY[0xA83D6C] + v3); /*0x6449c1*/
    }
    while ( v3 < MEMORY[0xA83D78] ); /*0x6449cd*/
  }
  ObjectTypeClass::Destruct((int)Block); /*0x6449d1*/
  if ( (a2 & 1) != 0 ) /*0x6449db*/
    __3_YAXPAX_Z(Block); /*0x6449de*/
  return (ParticleSystemTypeClass *)Block; /*0x6449e8*/
}
}
} // namespace gamemd
