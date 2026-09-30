// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/ParticleSystemClass_16_e4.hpp"
#include "e4/classes/ParticleTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ParticleSystemClass_32_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/ParticleSystemClass_32__e4.hpp"
#include "e4/classes/FilePipe_38_e4.hpp"
#include "e4/classes/ParticleClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"

// 0x6442D0
namespace gamemd {
void* ParticleSystemTypeClass::GetType(unsigned char *** aP1)
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
    (INIClass *)((char *)this + 36),
    (uint8_t *)&stru_830620.__pad_579C[4852],
    (INIClass *)&g_abs_87F8E4,
    (INIClass *)&var54.sectionHead[1],
    64);
  v3 = BuildingTypeClass::FindOrCreateEx((char *)&var54.sectionHead[1]); /*0x644318*/
  v4 = *((unsigned char *)this + 664); /*0x64431d*/
  *((unsigned int *)this + 165) = v3; /*0x644323*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int)aP1, (uint8_t *)((char *)this + 36), &stru_8184C8, v4); /*0x644332*/
  aP3_4 = *(INIClass **)((char *)this + 668); /*0x64433f*/
  *((unsigned char *)this + 664) = Bool_Overwrite; /*0x644346*/
  *((unsigned int *)this + 167) = INIClass::ReadInt_Overwrite( /*0x644351*/
                              (int)aP1,
                              (uint8_t *)((char *)this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[4840],
                              aP3_4);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644366*/
                    (int)aP1,
                    (uint8_t *)((char *)this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[4828],
                    *(INIClass **)((char *)this + 676));
  v7 = *(CCINIClass **)((char *)this + 680); /*0x64436b*/
  *((unsigned int *)this + 169) = Int_Overwrite; /*0x644371*/
  v8 = INIClass::ReadInt_Overwrite( /*0x644380*/
         (int)aP1,
         (uint8_t *)((char *)this + 36),
         (CCINIClass *)&stru_830620.__pad_579C[4816],
         (INIClass *)v7);
  v9 = *(float *)((char *)this + 672); /*0x644385*/
  *((unsigned int *)this + 170) = v8; /*0x644390*/
  *(float *)((char *)this + 672) = INIClass::ReadDouble_Overwrite( /*0x6443a4*/
                             (int)aP1,
                             (INIClass *)((char *)this + 36),
                             (uint8_t *)&stru_830620.__pad_579C[4804],
                             (INIClass *)IDA_LODWORD(v9));
  *(float *)((char *)this + 684) = INIClass::ReadDouble_Overwrite( /*0x6443c3*/
                             (int)aP1,
                             (INIClass *)((char *)this + 36),
                             (uint8_t *)&stru_830620.__pad_579C[4792],
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)((char *)this + 684)));
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x6443dd*/
                       (int)aP1,
                       (INIClass *)((char *)this + 36),
                       (uint8_t *)&stru_830620.__pad_579C[4768],
                       (INIClass *)COERCE_UNSIGNED_INT64(*(float *)((char *)this + 688)));
  v11 = *(CCINIClass **)((char *)this + 696); /*0x6443e2*/
  *(float *)((char *)this + 688) = Double_Overwrite; /*0x6443ea*/
  *((unsigned int *)this + 174) = INIClass::ReadInt_Overwrite( /*0x6443fc*/
                              (int)aP1,
                              (uint8_t *)((char *)this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[4756],
                              (INIClass *)v11);
  INIClass::GetString( /*0x644416*/
    aP1,
    (INIClass *)((char *)this + 36),
    (uint8_t *)&stru_830620.__pad_579C[4744],
    (INIClass *)&g_abs_87F8E4,
    (INIClass *)&var54.sectionHead[1],
    64);
  var54.headNode[0] = 0; /*0x64441b*/
  *(unsigned int *)var54.__pad_0 = &stru_830620.__pad_579C[4388]; /*0x644423*/
  while ( 1 ) /*0x64443f*/
  {
    v12 = _strcmpi((char *)&var54.sectionHead[1], **(char ***)var54.__pad_0) == 0; /*0x64443f*/
    v13 = var54.headNode[0]; /*0x644441*/
    if ( v12 ) /*0x644445*/
      break; /*0x644445*/
    ++var54.headNode[0]; /*0x644448*/
    *(unsigned int *)var54.__pad_0 += 4; /*0x644458*/
    if ( *(int *)var54.__pad_0 >= (int)&stru_830620.__pad_579C[4408] ) /*0x64445c*/
    {
      v13 = -1; /*0x64445e*/
      break; /*0x64445e*/
    }
  }
  *((unsigned int *)this + 173) = v13; /*0x644461*/
  XYZFromINI = ParticleSystemTypeClass::ReadXYZFromINI( /*0x64447b*/
                 aP1,
                 (float *)&var54.headNode[1],
                 (CCINIClass *)((char *)this + 36),
                 (uint8_t *)&stru_830620.__pad_579C[4728],
                 (float *)((char *)this + 700));
  *(float *)((char *)this + 700) = *XYZFromINI; /*0x644482*/
  *(float *)((char *)this + 704) = XYZFromINI[1]; /*0x64448b*/
  aP3 = *(INIClass **)((char *)this + 712); /*0x6444a1*/
  *(float *)((char *)this + 708) = XYZFromINI[2]; /*0x6444aa*/
  v15 = INIClass::ReadDouble_Overwrite( /*0x6444b0*/
          (int)aP1,
          (INIClass *)((char *)this + 36),
          (uint8_t *)&stru_830620.__pad_579C[4708],
          aP3);
  v16 = *(INIClass **)((char *)this + 720); /*0x6444bb*/
  *(double *)((char *)this + 712) = v15; /*0x6444c1*/
  v17 = INIClass::ReadDouble_Overwrite( /*0x6444d1*/
          (int)aP1,
          (INIClass *)((char *)this + 36),
          (uint8_t *)&stru_830620.__pad_579C[4688],
          v16);
  v18 = *(INIClass **)((char *)this + 728); /*0x6444dc*/
  *(double *)((char *)this + 720) = v17; /*0x6444e2*/
  v19 = INIClass::ReadDouble_Overwrite( /*0x6444f2*/
          (int)aP1,
          (INIClass *)((char *)this + 36),
          (uint8_t *)&stru_830620.__pad_579C[4672],
          v18);
  v20 = *(INIClass **)((char *)this + 736); /*0x6444fd*/
  *(double *)((char *)this + 728) = v19; /*0x644503*/
  v21 = INIClass::ReadDouble_Overwrite( /*0x644513*/
          (int)aP1,
          (INIClass *)((char *)this + 36),
          (uint8_t *)&stru_830620.__pad_579C[4640],
          v20);
  v22 = *(INIClass **)((char *)this + 744); /*0x64451e*/
  *(double *)((char *)this + 736) = v21; /*0x644524*/
  v23 = INIClass::ReadDouble_Overwrite( /*0x644534*/
          (int)aP1,
          (INIClass *)((char *)this + 36),
          (uint8_t *)&stru_830620.__pad_579C[4608],
          v22);
  v24 = *(INIClass **)((char *)this + 752); /*0x64453f*/
  *(double *)((char *)this + 744) = v23; /*0x644545*/
  v25 = INIClass::ReadDouble_Overwrite( /*0x644555*/
          (int)aP1,
          (INIClass *)((char *)this + 36),
          (uint8_t *)&stru_830620.__pad_579C[4576],
          v24);
  v26 = *((unsigned char *)this + 779); /*0x64455a*/
  *(double *)((char *)this + 752) = v25; /*0x644562*/
  *((unsigned char *)this + 779) = INIClass::ReadBool_Overwrite( /*0x644574*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[4568],
                             v26);
  Coord = INIClass::GetCoord( /*0x64458e*/
            aP1,
            &var54,
            (INIClass *)((char *)this + 36),
            (Color *)&stru_830620.__pad_579C[4556],
            (Color *)((char *)this + 776));
  v31 = *(Color **)((char *)this + 768); /*0x644596*/
  *((unsigned short *)this + 388) = *(unsigned short *)Coord; /*0x64459c*/
  *((unsigned char *)this + 778) = *(unsigned char *)(Coord + 2); /*0x6445af*/
  v29 = INIClass::ReadInt_Overwrite( /*0x6445b5*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[4536],
          (INIClass *)v31);
  aP3_4a = *(INIClass **)((char *)this + 772); /*0x6445c2*/
  *((unsigned int *)this + 192) = v29; /*0x6445c9*/
  *((unsigned int *)this + 193) = INIClass::ReadInt_Overwrite( /*0x6445d4*/
                              (int)aP1,
                              (uint8_t *)((char *)this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[4524],
                              aP3_4a);
  v30 = INIClass::ReadBool_Overwrite( /*0x6445e9*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[4508],
          *((unsigned char *)this + 780));
  aP3a = *(INIClass **)((char *)this + 760); /*0x6445fb*/
  *((unsigned char *)this + 780) = v30; /*0x644604*/
  *(double *)((char *)this + 760) = INIClass::ReadDouble_Overwrite( /*0x64460f*/
                              (int)aP1,
                              (INIClass *)((char *)this + 36),
                              (uint8_t *)&stru_830620.__pad_579C[4484],
                              aP3a);
  return (void *)(1);

}
}
// 0x644700
namespace gamemd {
void* ParticleSystemTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // ecx

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x644709*/
  Power::TimerProcess(*((unsigned int *)this + 165)); /*0x644717*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 664); /*0x64471c*/
  Power::FlagProcess(a2, v3); /*0x644725*/
  Power::TimerProcess(*((unsigned int *)this + 167)); /*0x644733*/
  Checksummer::Add_float((unsigned int *)a2, *((unsigned int *)this + 168)); /*0x644741*/
  Power::TimerProcess(*((unsigned int *)this + 169)); /*0x64474f*/
  Power::TimerProcess(*((unsigned int *)this + 170)); /*0x64475d*/
  Checksummer::Add_float((unsigned int *)a2, *((unsigned int *)this + 171)); /*0x64476b*/
  Checksummer::Add_float((unsigned int *)a2, *((unsigned int *)this + 172)); /*0x644779*/
  Power::TimerProcess(*((unsigned int *)this + 173)); /*0x644787*/
  return Power::TimerProcess(*((unsigned int *)this + 174)); /*0x64479a*/

}
}
// 0x644960
namespace gamemd {
ParticleSystemTypeClass * ParticleSystemTypeClass::ddtor(void ** Block, char a2)
{

  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = (void *)(&vt_ParticleSystemTypeClass);
  *(Block + 1) = &vt_ParticleSystemTypeClass; /*0x64496c*/
  *(Block + 2) = &vt_ParticleSystemTypeClass; /*0x644973*/
  *(Block + 3) = &vt_ParticleSystemTypeClass; /*0x64497a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x644981*/
  v5 = Block; /*0x644996*/
  v3 = (*(int (**)(int *, void ***))(g_abs_A83D68 + 16))(&g_abs_A83D68, &v5); /*0x64499a*/
  if ( v3 != -1 && v3 < (int)((int))((int))(g_abs_A83D78) && v3 < --g_abs_A83D78 ) /*0x6449b5*/
  {
    do /*0x6449cd*/
    {
      ++v3; /*0x6449bd*/
      *((unsigned int *)g_abs_A83D6C + v3 - 1) = *((unsigned int *)g_abs_A83D6C + v3); /*0x6449c1*/
    }
    while ( v3 < (int)((int))((int))(g_abs_A83D78) ); /*0x6449cd*/
  }
  ObjectTypeClass::Destruct((int)Block); /*0x6449d1*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x6449db*/
    OperatorDelete(Block); /*0x6449de*/
  return (ParticleSystemTypeClass *)Block; /*0x6449e8*/

}
} // namespace gamemd

// 0x476340
namespace gamemd {
float * ParticleSystemTypeClass::ReadXYZFromINI(float * a2, uint8_t * a3, uint8_t * a4, float * a5)
{

  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  double v8; // st7
  float v10; // [esp+4h] [ebp-20Ch]
  float v11; // [esp+8h] [ebp-208h]
  float v12; // [esp+Ch] [ebp-204h]
  char String[512]; // [esp+10h] [ebp-200h] BYREF

  if ( INIClass::GetString(this, a5, a5, &g_abs_889F64, String, 512) ) /*0x476383*/
  {
    v5 = strtok(String, Delimiter); /*0x476396*/
    v10 = atof(v5); /*0x4763a1*/
    v6 = strtok(0, Delimiter); /*0x4763ac*/
    v11 = atof(v6); /*0x4763b7*/
    v7 = strtok(0, Delimiter); /*0x4763c2*/
    v8 = atof(v7); /*0x4763c8*/
    v12 = v8; /*0x4763d8*/
    *a2 = v10; /*0x4763e1*/
    a2[1] = v11; /*0x4763e8*/
    a2[2] = v12; /*0x4763ef*/
    return a2; /*0x4763cd*/
  }
  else
  {
    *a2 = *a5; /*0x476406*/
    a2[1] = a5[1]; /*0x47640b*/
    a2[2] = a5[2]; /*0x476412*/
    return a2; /*0x4763fb*/
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

  if ( ((ObjectTypeClass *)((IUnknown *)aP0))->LoadCleanup((ObjectTypeClass *)aP1) >= 0 && aP0 ) /*0x6447f6*/
  {
    ((ObjectTypeClass *)(aP0))->Construct((ObjectTypeClass *)&aP1); /*0x6447ff*/
    *(unsigned int *)aP0->__pad_0 = &vt_ParticleSystemTypeClass; /*0x644804*/
    *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[4] = &vt_ParticleSystemTypeClass; /*0x64480a*/
    *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[8] = &vt_ParticleSystemTypeClass; /*0x644811*/
    *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[12] = &vt_ParticleSystemTypeClass; /*0x644818*/
  }
  return 0; /*0x644821*/

}
} // namespace gamemd

// 0x644830
namespace gamemd {
int ParticleSystemTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  ((AbstractClass *)(aP0))->SaveLoad_PrefixWrapper(aP1, (TechnoTypeClass *)aP2); /*0x64483f*/
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
