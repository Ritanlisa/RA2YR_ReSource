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

// 0x6442D0
namespace gamemd {
void* ParticleSystemTypeClass::GetType(unsigned char *** aP1)
{
  int v3; // eax
  char v4; // cl
  char Bool_Overwrite; // al
  int Int_Overwrite; // eax
  int v7; // ecx
  ParticleSystemClass * v8;
  ParticleSystemClass * v9;
  double Double_Overwrite; // st7
  int v11; // edx
  bool v12; // zf
  int v13; // eax
  float *v14; // eax
  double v15; // st7
  double v16; // rax
  AnimClass * v17;
  AnimClass * v18;
  AnimClass * v19;
  double v20; // st7
  void * v21;
  unsigned int v22; // ecx
  double v23; // st7
  double v24; // rax
  double v25; // st7
  unsigned int v26; // ecx
  unsigned int v27; // edx
  double v28; // st7
  char v29; // al
  int Coord; // eax
  Color * v31;
  Color * v32;
  char v33; // al
  double v35; // [esp+0h] [ebp-68h]
  double v36; // [esp+0h] [ebp-68h]
  void * v37;
  Color * v38;
  const void **v39; // [esp+14h] [ebp-54h] BYREF
  int v40; // [esp+18h] [ebp-50h]
  float v41[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+28h] [ebp-40h] BYREF

  INIClass::ResetSection(aP1); /*0x6442e3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, aP1) ) /*0x6442eb*/
    return 0; /*0x644622*/
  INIClass::GetString( /*0x64430f*/
    aP1,
    (uint8_t *)(&this->vtable46),
    (uint8_t *)aHoldswhat,
    &g_INI_DefaultBuffer,
    Destination,
    64);
  v3 = (int)(BuildingTypeClass::FindOrCreateEx(Destination));
  v4 = (char)((void *)(this->q298));
  this->q294 = (void *)(v3);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x644332*/
                     (int)aP1,
                     (uint8_t *)(&this->vtable46),
                     (uint8_t *)g_INI_Key_Spawns,
                     v4);
  v37 = *(unsigned int *)&this->q29C; /*0x64433f*/
  this->q298 = Bool_Overwrite; /*0x644346*/
  this->q29C = INIClass::ReadInt_Overwrite( /*0x644351*/
                              (int)aP1,
                              (uint8_t *)(&this->vtable46),
                              (uint8_t *)aSpawnframes,
                              v37);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644366*/
                    (int)aP1,
                    (uint8_t *)(&this->vtable46),
                    (uint8_t *)aParticlecap,
                    this->q2A4);
  v7 = (int)(this->q2A8);
  this->q2A4 = (int)(Int_Overwrite);
  v8 = (int)(INIClass::ReadInt_Overwrite((int)aP1, (uint8_t *)(&this->vtable46), (uint8_t *)aSpawnradius, v7));
  v9 = (gamemd::ParticleSystemClass *)((int)(this->q2A0));
  this->q2A8 = (int)(v8);
  this->q2A0 = INIClass::ReadDouble_Overwrite( /*0x6443a4*/
                             (int)aP1,
                             (uint8_t *)(&this->vtable46),
                             (uint8_t *)aSlowdown,
                             v9);
  this->q2AC = INIClass::ReadDouble_Overwrite( /*0x6443c3*/
                             (int)aP1,
                             (uint8_t *)(&this->vtable46),
                             (uint8_t *)aSpawncutoff,
                             this->q2AC);
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x6443dd*/
                       (int)aP1,
                       (uint8_t *)(&this->vtable46),
                       (uint8_t *)aSpawntransluce,
                       this->DamageDelay);
  v11 = this->q2B8; /*0x6443e2*/
  this->DamageDelay = Double_Overwrite; /*0x6443ea*/
  this->q2B8 = INIClass::ReadInt_Overwrite( /*0x6443fc*/
                              (int)aP1,
                              (uint8_t *)(&this->vtable46),
                              (uint8_t *)aLifetime,
                              v11);
  INIClass::GetString( /*0x644416*/
    aP1,
    (uint8_t *)(&this->vtable46),
    (uint8_t *)aBehaveslike,
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
  this->q2B4 = v13; /*0x644461*/
  v14 = ParticleSystemTypeClass::ReadXYZFromINI( /*0x64447b*/
          aP1,
          v41,
          (uint8_t *)(&this->vtable46),
          (uint8_t *)aSpawndirection,
          (float *)(&this->q1180));
  this->ParticleSystemTypeClass_field_2C0 = (double)(*v14);
  this->StartScale = (double)(v14[1]);
  v35 = (gamemd::AnimClass *)(*(double *)(&this->q11C2));
  this->ParticleSystemTypeClass_field_2C8 = (double)(v14[2]);
  v15 = (double)(INIClass::ReadDouble_Overwrite((int)aP1, (uint8_t *)(&this->vtable46), (uint8_t *)aParticlesperco, v35));
  v16 = (gamemd::AnimClass *)(*(double *)(&this->q1200));
  *(double *)(&this->q11C2) = v15; /*0x6444c1*/
  v17 = INIClass::ReadDouble_Overwrite((int)aP1, (uint8_t *)(&this->vtable46), (uint8_t *)aSpiraldeltaper, v16); /*0x6444d1*/
  v18 = *(unsigned int *)&this->q2DC; /*0x6444d6*/
  v19 = this->u32_2D8; /*0x6444dc*/
  *(double *)(&this->q1200) = v17; /*0x6444e2*/
  v20 = INIClass::ReadDouble_Overwrite( /*0x6444f2*/
          (int)aP1,
          (uint8_t *)(&this->vtable46),
          (uint8_t *)aSpiralradius,
          COERCE_DOUBLE(IDA___PAIR64__(v18, v19)));
  v21 = *(unsigned int *)&this->q2E4; /*0x6444f7*/
  v22 = this->q2E0; /*0x6444fd*/
  *(double *)(&this->q1208) = v20; /*0x644503*/
  v23 = INIClass::ReadDouble_Overwrite( /*0x644513*/
          (int)aP1,
          (uint8_t *)(&this->vtable46),
          (uint8_t *)aPositionpertur,
          COERCE_DOUBLE(IDA___PAIR64__(v21, v22)));
  v24 = *(double *)(&this->q1284); /*0x64451e*/
  *(double *)(&this->q1246) = v23; /*0x644524*/
  v25 = INIClass::ReadDouble_Overwrite((int)aP1, (uint8_t *)(&this->vtable46), (uint8_t *)aMovementpertur, v24); /*0x644534*/
  v26 = this->u32_2F4; /*0x644539*/
  v27 = this->q2F0; /*0x64453f*/
  *(double *)(&this->q1284) = v25; /*0x644545*/
  v28 = INIClass::ReadDouble_Overwrite( /*0x644555*/
          (int)aP1,
          (uint8_t *)(&this->vtable46),
          (uint8_t *)aVelocitypertur,
          COERCE_DOUBLE(IDA___PAIR64__(v26, v27)));
  v29 = this->u8_30B; /*0x64455a*/
  *(double *)(&this->q12C2) = v28; /*0x644562*/
  this->u8_30B = INIClass::ReadBool_Overwrite( /*0x644574*/
                             (int)aP1,
                             (uint8_t *)(&this->vtable46),
                             (uint8_t *)aLaser,
                             v29);
  Coord = INIClass::GetCoord( /*0x64458e*/
            aP1,
            (int)&v39,
            (uint8_t *)(&this->vtable46),
            (uint8_t *)aLasercolor,
            (uint8_t *)(&this->q1346));
  v31 = *(unsigned int *)&this->q300; /*0x644596*/
  this->q308 = *(unsigned short *)Coord; /*0x64459c*/
  this->q30A = *(unsigned char *)(Coord + 2); /*0x6445af*/
  v32 = INIClass::ReadInt_Overwrite((int)aP1, (uint8_t *)(&this->vtable46), (uint8_t *)aSparkspawnfram, v31); /*0x6445b5*/
  v38 = *(unsigned int *)&this->q304; /*0x6445c2*/
  *(void **)&this->q300 = v32; /*0x6445c9*/
  this->q304 = INIClass::ReadInt_Overwrite( /*0x6445d4*/
                              (int)aP1,
                              (uint8_t *)(&this->vtable46),
                              (uint8_t *)aLightsize,
                              v38);
  v33 = INIClass::ReadBool_Overwrite( /*0x6445e9*/
          (int)aP1,
          (uint8_t *)(&this->vtable46),
          (uint8_t *)aOneframelight,
          this->q30C);
  v36 = *(double *)(&this->q1300); /*0x6445fb*/
  this->q30C = v33; /*0x644604*/
  *(double *)(&this->q1300) = INIClass::ReadDouble_Overwrite( /*0x64460f*/
                              (int)aP1,
                              (uint8_t *)(&this->vtable46),
                              (uint8_t *)aSpawnsparkperc,
                              v36);
  return (void *)(1);
}
}
// 0x644700
namespace gamemd {
void* ParticleSystemTypeClass::PowerDrainUpdate(int * a2)
{
  int v3; // ecx

  AbstractTypeClass::ProcessPower(a2); /*0x644709*/
  Power::TimerProcess((int)this->ParticleSystemTypeClass_field_0x294); /*0x644717*/
  IDA_LOBYTE(v3) = this->__pad_298; /*0x64471c*/
  Power::FlagProcess((Power *)a2, v3); /*0x644725*/
  Power::TimerProcess((int)this->ParticleSystemTypeClass_field_0x29C); /*0x644733*/
  Checksummer::Add_float((Checksummer *)a2, (int)this->ParticleSystemTypeClass_field_0x2A0); /*0x644741*/
  Power::TimerProcess(IDA_LODWORD(this->ParticleSystemTypeClass_field_0x2A4)); /*0x64474f*/
  Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2A8); /*0x64475d*/
  Checksummer::Add_float((Checksummer *)a2, this->ParticleSystemTypeClass_field_0x2AC); /*0x64476b*/
  Checksummer::Add_float((Checksummer *)a2, this->DamageDelay); /*0x644779*/
  Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2B4); /*0x644787*/
  return Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2B8); /*0x64479a*/
}
}
// 0x644960
namespace gamemd {
ParticleSystemTypeClass * ParticleSystemTypeClass::ddtor(char a2)
{
  int v3; // eax
  ParticleSystemTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->ParticleSystemTypeClass_field_0x0 = (int)((void*)&ParticleSystemTypeClass_vftable);
  this->ParticleSystemTypeClass_field_0x4 = (unsigned int)((void*)&ParticleSystemTypeClass_vftable);
  this->ParticleSystemTypeClass_field_0x8 = (unsigned int)((void*)&ParticleSystemTypeClass_vftable);
  this->SpawnCount = (void*)&ParticleSystemTypeClass_vftable; /*0x64497a*/
  AbstractClass::AnnounceExpiredPointer(&this->ParticleSystemTypeClass_field_0x0, 1); /*0x644981*/
  v5 = this; /*0x644996*/
  v3 = (*(int (__thiscall **)(char *, ParticleSystemTypeClass **))(*(unsigned int *)&stru_A83D50.__pad_14[4] + 16))( /*0x64499a*/
         &stru_A83D50.__pad_14[4],
         &v5);
  if ( v3 != -1 && v3 < (int)stru_A83D50.SuperClass_field_0x28 ) /*0x6449aa*/
  {
    --stru_A83D50.SuperClass_field_0x28; /*0x6449af*/
    for ( ; /*0x6449b5*/
          v3 < (int)stru_A83D50.SuperClass_field_0x28;
          *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_14[8] + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_14[8]
                                                                                    + 4 * v3) )
    {
      ++v3; /*0x6449bd*/
    }
  }
  ObjectTypeClass::Destruct(); /*0x6449d1*/
  if ( (a2 & 1) != 0 ) /*0x6449db*/
    RA2_OPDEL(); /*0x6449de*/
  return &this->ParticleSystemTypeClass_field_0x0; /*0x6449e8*/
}
} // namespace gamemd

// 0x476340
namespace gamemd {
float * ParticleSystemTypeClass::ReadXYZFromINI(float * a1, CCINIClass * aP2, unsigned char * a3, float * a4)
{
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  float v9; // [esp+4h] [ebp-20Ch]
  float v10; // [esp+8h] [ebp-208h]
  float v11; // [esp+Ch] [ebp-204h]
  char String[512]; // [esp+10h] [ebp-200h] BYREF

  if ( INIClass::GetString((INIClass *)this, aP2, a3, &g_INI_DefaultBuffer, String, 512) ) /*0x476383*/
  {
    v5 = strtok(String, Str); /*0x476396*/
    atof(v5); /*0x47639c*/
    __asm { fstp [esp+21Ch+var_20C] } /*0x4763a1*/
    v6 = strtok(0, Str); /*0x4763ac*/
    atof(v6); /*0x4763b2*/
    __asm { fstp [esp+228h+var_208] } /*0x4763b7*/
    v7 = strtok(0, Str); /*0x4763c2*/
    atof(v7); /*0x4763c8*/
    __asm { fstp [esp+234h+var_204] } /*0x4763d8*/
    *a1 = v9; /*0x4763e1*/
    a1[1] = v10; /*0x4763e8*/
    a1[2] = v11; /*0x4763ef*/
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
  a2[3] = unk_7E96DC; /*0x6447d0*/
  return 0; /*0x6447ad*/
}
} // namespace gamemd

// 0x6447E0
namespace gamemd {
int ParticleSystemTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
  if ( ObjectTypeClass::LoadCleanup((ObjectTypeClass *)aP0, aP1) >= 0 && aP0 ) /*0x6447f6*/
  {
    ObjectTypeClass::Construct((ObjectTypeClass *)aP0, (int)&aP1); /*0x6447ff*/
    aP0->ParticleSystemTypeClass_field_0x0 = (void*)&ParticleSystemTypeClass_vftable; /*0x644804*/
    aP0->ParticleSystemTypeClass_field_0x4 = (void*)&ParticleSystemTypeClass_vftable; /*0x64480a*/
    aP0->ParticleSystemTypeClass_field_0x8 = (void*)&ParticleSystemTypeClass_vftable; /*0x644811*/
    aP0->SpawnCount = (void*)&ParticleSystemTypeClass_vftable; /*0x644818*/
  }
  return 0; /*0x644821*/
}
} // namespace gamemd

// 0x644830
namespace gamemd {
int ParticleSystemTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
  AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)aP0, aP1, aP2); /*0x64483f*/
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
