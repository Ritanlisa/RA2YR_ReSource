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

  ParticleTypeClass ** v3;
  char v4; // cl
  char Bool_Overwrite; // al
  int Int_Overwrite; // eax
  int ParticleSystemTypeClass_field_0x2A8; // ecx
  int v8; // eax
  int ParticleSystemTypeClass_field_0x2B8; // edx
  bool v13; // zf
  int v14; // eax
  float *XYZFromINI; // eax
  double v16; // rax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  IUnknown *ParticleSystemTypeClass_field_0x2E4; // eax
  unsigned int v22; // ecx
  double v24; // rax
  unsigned int v26; // ecx
  unsigned int v27; // edx
  char ParticleSystemTypeClass_field_0x308_high; // al
  int Coord; // eax
  int ParticleSystemTypeClass_field_0x300; // ecx
  int v33; // eax
  char v34; // al
  double v37; // [esp+0h] [ebp-68h]
  double v38; // [esp+0h] [ebp-68h]
  double v39; // [esp+0h] [ebp-68h]
  double v40; // [esp+0h] [ebp-68h]
  double v41; // [esp+0h] [ebp-68h]
  int ParticleSystemTypeClass_field_0x29C; // [esp+4h] [ebp-64h]
  int v43; // [esp+4h] [ebp-64h]
  int v44; // [esp+14h] [ebp-54h] BYREF
  int v45; // [esp+18h] [ebp-50h]
  float v46[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+28h] [ebp-40h] BYREF

  _ESI = this; /*0x6442de*/
  INIClass::ResetSection((INIClass *)aP1); /*0x6442e3*/
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)_ESI, aP1) ) /*0x6442eb*/
    return 0; /*0x644622*/
  INIClass::GetString( /*0x64430f*/
    (INIClass *)aP1,
    (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aHoldswhat,
    &g_INI_DefaultBuffer,
    Destination,
    64);
  v3 = (gamemd::ParticleTypeClass **)((int)(((BuildingTypeClass *)(Destination))->FindOrCreateEx()));
  v4 = _ESI->__pad_298[0]; /*0x64431d*/
  _ESI->ParticleSystemTypeClass_field_0x294 = (IUnknown *)v3; /*0x644323*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x644332*/
                     (int *)aP1,
                     (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
                     g_INI_Key_Spawns,
                     v4);
  ParticleSystemTypeClass_field_0x29C = (int)_ESI->ParticleSystemTypeClass_field_0x29C; /*0x64433f*/
  _ESI->__pad_298[0] = Bool_Overwrite; /*0x644346*/
  _ESI->ParticleSystemTypeClass_field_0x29C = (IUnknown *)INIClass::ReadInt_Overwrite( /*0x644351*/
                                                            (bool *)aP1,
                                                            (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
                                                            aSpawnframes,
                                                            ParticleSystemTypeClass_field_0x29C);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644366*/
                    (bool *)aP1,
                    (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
                    aParticlecap,
                    LODWORD(_ESI->ParticleSystemTypeClass_field_0x2A4));
  ParticleSystemTypeClass_field_0x2A8 = _ESI->ParticleSystemTypeClass_field_0x2A8; /*0x64436b*/
  LODWORD(_ESI->ParticleSystemTypeClass_field_0x2A4) = Int_Overwrite; /*0x644371*/
  v8 = INIClass::ReadInt_Overwrite( /*0x644380*/
         (bool *)aP1,
         (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
         aSpawnradius,
         ParticleSystemTypeClass_field_0x2A8);
  __asm { fld dword ptr [esi+2A0h] } /*0x644385*/
  _ESI->ParticleSystemTypeClass_field_0x2A8 = v8; /*0x644390*/
  __asm { fstp [esp+68h+var_68]; double } /*0x644396*/
  INIClass::ReadDouble_Overwrite( /*0x64439f*/
    (double *)aP1,
    (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSlowdown,
    v37);
  __asm { fstp dword ptr [esi+2A0h] } /*0x6443a4*/
  *(float *)&_ESI->ParticleSystemTypeClass_field_0x2A0 = _ET1; /*0x6443a4*/
  __asm { fld dword ptr [esi+2ACh] } /*0x6443aa*/
  __asm { fstp [esp+68h+var_68]; double }
  INIClass::ReadDouble_Overwrite( /*0x6443be*/
    (double *)aP1,
    (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSpawncutoff,
    v38);
  __asm { fstp dword ptr [esi+2ACh] } /*0x6443c3*/
  *(float *)&_ESI->ParticleSystemTypeClass_field_0x2AC = _ET1; /*0x6443c3*/
  __asm { fld dword ptr [esi+2B0h] } /*0x6443c9*/
  __asm { fstp [esp+68h+var_68]; double }
  INIClass::ReadDouble_Overwrite( /*0x6443dd*/
    (double *)aP1,
    (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSpawntransluce,
    v39);
  ParticleSystemTypeClass_field_0x2B8 = _ESI->ParticleSystemTypeClass_field_0x2B8; /*0x6443e2*/
  __asm { fstp dword ptr [esi+2B0h] } /*0x6443ea*/
  *(float *)&_ESI->DamageDelay = _ET1; /*0x6443ea*/
  _ESI->ParticleSystemTypeClass_field_0x2B8 = INIClass::ReadInt_Overwrite( /*0x6443fc*/
                                                (bool *)aP1,
                                                (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
                                                aLifetime,
                                                ParticleSystemTypeClass_field_0x2B8);
  INIClass::GetString( /*0x644416*/
    (INIClass *)aP1,
    (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aBehaveslike,
    &g_INI_DefaultBuffer,
    Destination,
    64);
  v45 = 0; /*0x64441b*/
  v44 = (int)off_836EE0; /*0x644423*/
  while ( 1 ) /*0x64443f*/
  {
    v13 = _strcmpi(Destination, *(char **)v44) == 0; /*0x64443f*/
    v14 = v45; /*0x644441*/
    if ( v13 ) /*0x644445*/
      break; /*0x644445*/
    ++v45; /*0x644448*/
    v44 += 4; /*0x644458*/
    if ( v44 >= (int)g_INI_Key_Railgun ) /*0x64445c*/
    {
      v14 = -1; /*0x64445e*/
      break; /*0x64445e*/
    }
  }
  _ESI->ParticleSystemTypeClass_field_0x2B4 = v14; /*0x644461*/
  XYZFromINI = ParticleSystemTypeClass::ReadXYZFromINI( /*0x64447b*/
                 (ParticleSystemTypeClass *)aP1,
                 v46,
                 (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
                 aSpawndirection,
                 (float *)&_ESI->ParticleSystemTypeClass_field_2C0);
  _ESI->ParticleSystemTypeClass_field_2C0 = *(int *)XYZFromINI; /*0x644482*/
  _ESI->StartScale = (int)XYZFromINI[1]; /*0x64448b*/
  v40 = *(double *)&_ESI->Beam; /*0x6444a1*/
  _ESI->ParticleSystemTypeClass_field_2C8 = (int)XYZFromINI[2]; /*0x6444aa*/
  INIClass::ReadDouble_Overwrite( /*0x6444b0*/
    (double *)aP1,
    (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aParticlesperco,
    v40);
  v16 = *(double *)&_ESI->ParticleSystemTypeClass_field_0x2D0; /*0x6444bb*/
  __asm { fstp qword ptr [esi+2C8h] } /*0x6444c1*/
  *(double *)&_ESI->Beam = _RT1; /*0x6444c1*/
  INIClass::ReadDouble_Overwrite( /*0x6444d1*/
    (double *)aP1,
    (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSpiraldeltaper,
    v16);
  v18 = *(unsigned int *)&_ESI->__pad_2D8[4]; /*0x6444d6*/
  v19 = *(unsigned int *)_ESI->__pad_2D8; /*0x6444dc*/
  __asm { fstp qword ptr [esi+2D0h] } /*0x6444e2*/
  *(double *)&_ESI->ParticleSystemTypeClass_field_0x2D0 = _RT1; /*0x6444e2*/
  INIClass::ReadDouble_Overwrite( /*0x6444f2*/
    (double *)aP1,
    (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSpiralradius,
    COERCE_DOUBLE(__PAIR64__(v18, v19)));
  ParticleSystemTypeClass_field_0x2E4 = _ESI->ParticleSystemTypeClass_field_0x2E4; /*0x6444f7*/
  v22 = *(unsigned int *)&_ESI->__pad_2D8[8]; /*0x6444fd*/
  __asm { fstp qword ptr [esi+2D8h] } /*0x644503*/
  *(double *)_ESI->__pad_2D8 = _RT1; /*0x644503*/
  INIClass::ReadDouble_Overwrite( /*0x644513*/
    (double *)aP1,
    (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aPositionpertur,
    COERCE_DOUBLE(__PAIR64__((unsigned int)ParticleSystemTypeClass_field_0x2E4, v22)));
  v24 = *(double *)&_ESI->ParticleSystemTypeClass_field_0x2E8; /*0x64451e*/
  __asm { fstp qword ptr [esi+2E0h] } /*0x644524*/
  *(double *)&_ESI->__pad_2D8[8] = _RT1; /*0x644524*/
  INIClass::ReadDouble_Overwrite( /*0x644534*/
    (double *)aP1,
    (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aMovementpertur,
    v24);
  v26 = *(unsigned int *)&_ESI->__pad_2EC[8]; /*0x644539*/
  v27 = *(unsigned int *)&_ESI->__pad_2EC[4]; /*0x64453f*/
  __asm { fstp qword ptr [esi+2E8h] } /*0x644545*/
  *(double *)&_ESI->ParticleSystemTypeClass_field_0x2E8 = _RT1; /*0x644545*/
  INIClass::ReadDouble_Overwrite( /*0x644555*/
    (double *)aP1,
    (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aVelocitypertur,
    COERCE_DOUBLE(__PAIR64__(v26, v27)));
  ParticleSystemTypeClass_field_0x308_high = HIBYTE(_ESI->ParticleSystemTypeClass_field_0x308); /*0x64455a*/
  __asm { fstp qword ptr [esi+2F0h] } /*0x644562*/
  *(double *)&_ESI->__pad_2EC[4] = _RT1; /*0x644562*/
  HIBYTE(_ESI->ParticleSystemTypeClass_field_0x308) = INIClass::ReadBool_Overwrite( /*0x644574*/
                                                        (int *)aP1,
                                                        (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
                                                        aLaser,
                                                        ParticleSystemTypeClass_field_0x308_high);
  Coord = INIClass::GetCoord( /*0x64458e*/
            (INIClass *)aP1,
            (int)&v44,
            (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
            aLasercolor,
            (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x308);
  ParticleSystemTypeClass_field_0x300 = _ESI->ParticleSystemTypeClass_field_0x300; /*0x644596*/
  LOWORD(_ESI->ParticleSystemTypeClass_field_0x308) = *(unsigned short *)Coord; /*0x64459c*/
  BYTE2(_ESI->ParticleSystemTypeClass_field_0x308) = *(unsigned char *)(Coord + 2); /*0x6445af*/
  v33 = INIClass::ReadInt_Overwrite( /*0x6445b5*/
          (bool *)aP1,
          (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
          aSparkspawnfram,
          ParticleSystemTypeClass_field_0x300);
  v43 = *(unsigned int *)_ESI->__pad_304; /*0x6445c2*/
  _ESI->ParticleSystemTypeClass_field_0x300 = v33; /*0x6445c9*/
  *(unsigned int *)_ESI->__pad_304 = INIClass::ReadInt_Overwrite( /*0x6445d4*/
                                 (bool *)aP1,
                                 (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
                                 aLightsize,
                                 v43);
  v34 = INIClass::ReadBool_Overwrite( /*0x6445e9*/
          (int *)aP1,
          (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
          aOneframelight,
          (char)_ESI[1].ParticleSystemTypeClass_field_0x0);
  v41 = *(double *)&_ESI->__pad_2EC[12]; /*0x6445fb*/
  LOBYTE(_ESI[1].ParticleSystemTypeClass_field_0x0) = v34; /*0x644604*/
  INIClass::ReadDouble_Overwrite( /*0x64460a*/
    (double *)aP1,
    (uint8_t *)&_ESI->ParticleSystemTypeClass_field_0x24,
    aSpawnsparkperc,
    v41);
  __asm { fstp qword ptr [esi+2F8h] } /*0x64460f*/
  *(double *)&_ESI->__pad_2EC[12] = _RT1; /*0x64460f*/
  return 1; /*0x644617*/

}
}
// 0x644700
namespace gamemd {
void* ParticleSystemTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // ecx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x644709*/
  Power::TimerProcess((int)this->ParticleSystemTypeClass_field_0x294); /*0x644717*/
  LOBYTE(v3) = this->__pad_298[0]; /*0x64471c*/
  Power::FlagProcess((Power *)a2, v3); /*0x644725*/
  Power::TimerProcess((int)this->ParticleSystemTypeClass_field_0x29C); /*0x644733*/
  Checksummer::Add_float((Checksummer *)a2, (int)this->ParticleSystemTypeClass_field_0x2A0); /*0x644741*/
  Power::TimerProcess(LODWORD(this->ParticleSystemTypeClass_field_0x2A4)); /*0x64474f*/
  Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2A8); /*0x64475d*/
  Checksummer::Add_float((Checksummer *)a2, this->ParticleSystemTypeClass_field_0x2AC); /*0x64476b*/
  Checksummer::Add_float((Checksummer *)a2, this->DamageDelay); /*0x644779*/
  Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2B4); /*0x644787*/
  return Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2B8); /*0x64479a*/

}
}
// 0x644960
namespace gamemd {
ParticleSystemTypeClass * ParticleSystemTypeClass::ddtor(void ** Block, char a2)
{

  int v3; // eax
  ParticleSystemTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  Block->ParticleSystemTypeClass_field_0x0 = &ParticleSystemTypeClass::`vftable'; /*0x644966*/
  Block->ParticleSystemTypeClass_field_0x4 = &ParticleSystemTypeClass::`vftable'; /*0x64496c*/
  Block->ParticleSystemTypeClass_field_0x8 = &ParticleSystemTypeClass::`vftable'; /*0x644973*/
  Block->SpawnCount = &ParticleSystemTypeClass::`vftable'; /*0x64497a*/
  AbstractClass::AnnounceExpiredPointer(&Block->ParticleSystemTypeClass_field_0x0, 1); /*0x644981*/
  v5 = Block; /*0x644996*/
  v3 = (*(int (**)(char *, ParticleSystemTypeClass **))(*(unsigned int *)&stru_A83D50.__pad_14[4] + 16))( /*0x64499a*/
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
  ObjectTypeClass::Destruct((int)Block); /*0x6449d1*/
  if ( (a2 & 1) != 0 ) /*0x6449db*/
    __3_YAXPAX_Z(Block); /*0x6449de*/
  return &Block->ParticleSystemTypeClass_field_0x0; /*0x6449e8*/

}
} // namespace gamemd

// 0x476340
namespace gamemd {
float * ParticleSystemTypeClass::ReadXYZFromINI(float * a2, uint8_t * a3, uint8_t * a4, float * a5)
{

  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  float v9; // [esp+4h] [ebp-20Ch]
  float v10; // [esp+8h] [ebp-208h]
  float v11; // [esp+Ch] [ebp-204h]
  char String[512]; // [esp+10h] [ebp-200h] BYREF

  if ( INIClass::GetString((INIClass *)this, a3, a4, &g_INI_DefaultBuffer, String, 512) ) /*0x476383*/
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
    *a2 = v9; /*0x4763e1*/
    a2[1] = v10; /*0x4763e8*/
    a2[2] = v11; /*0x4763ef*/
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
    aP0->ParticleSystemTypeClass_field_0x0 = &ParticleSystemTypeClass::`vftable'; /*0x644804*/
    aP0->ParticleSystemTypeClass_field_0x4 = &ParticleSystemTypeClass::`vftable'; /*0x64480a*/
    aP0->ParticleSystemTypeClass_field_0x8 = &ParticleSystemTypeClass::`vftable'; /*0x644811*/
    aP0->SpawnCount = &ParticleSystemTypeClass::`vftable'; /*0x644818*/
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
