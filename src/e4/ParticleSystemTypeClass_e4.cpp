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
#include "e4/classes/AbstractTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Checksummer_e4.hpp"  // G42.36 C2027 supply
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned char aBehaveslike;  // data: 0x837044 truth(IDA G42.57w9)
extern unsigned char aLaser;  // data: 0x836f94 truth(IDA G42.57w9)
extern unsigned char aLasercolor;  // data: 0x836f88 truth(IDA G42.57w9)
extern unsigned char aLifetime;  // data: 0x837050 truth(IDA G42.57w9)
extern unsigned char aLightsize;  // data: 0x836f68 truth(IDA G42.57w9)
extern unsigned char aMovementpertur;  // data: 0x836fbc truth(IDA G42.57w9)
extern unsigned char aOneframelight;  // data: 0x836f58 truth(IDA G42.57w9)
extern unsigned char aParticlesperco;  // data: 0x837020 truth(IDA G42.57w9)
extern unsigned char aPositionpertur;  // data: 0x836fdc truth(IDA G42.57w9)
extern unsigned char aSlowdown;  // data: 0x837080 truth(IDA G42.57w9)
extern unsigned char aSparkspawnfram;  // data: 0x836f74 truth(IDA G42.57w9)
extern unsigned char aSpawncutoff;  // data: 0x837074 truth(IDA G42.57w9)
extern unsigned char aSpawndirection;  // data: 0x837034 truth(IDA G42.57w9)
extern unsigned char aSpawnsparkperc;  // data: 0x836f40 truth(IDA G42.57w9)
extern unsigned char aSpawntransluce;  // data: 0x83705c truth(IDA G42.57w9)
extern unsigned char aSpiraldeltaper;  // data: 0x83700c truth(IDA G42.57w9)
extern unsigned char aSpiralradius;  // data: 0x836ffc truth(IDA G42.57w9)
extern unsigned char aVelocitypertur;  // data: 0x836f9c truth(IDA G42.57w9)


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
  INIClass::ResetSection(((INIClass*)((INIClass *)aP1))); /*0x6442e3*/
  if ( !((ObjectTypeClass *)((ObjectTypeClass *)_ESI))->LoadFromINI( (uint8_t ***)(aP1)) ) /*0x6442eb*/
    return 0; /*0x644622*/
  /*0x64430f*/
    ((INIClass*)((INIClass *)aP1))->GetString(/*0x64430f*/ (uint8_t *)&((ParticleSystemTypeClass*)_ESI)->, aHoldswhat, &g_INI_DefaultBuffer, Destination, 64);
  v3 = (gamemd::ParticleTypeClass **)((int)(((BuildingTypeClass *)(Destination))->FindOrCreateEx()));
  v4 = ((INIClass*)_ESI)->__pad_298 [0]; /*0x64431d*/
  ((ParticleSystemTypeClass*)_ESI)-> = (IUnknown *)v3; /*0x644323*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x644332*/
                     (int *)aP1,
                     (uint8_t *)&((ParticleSystemTypeClass*)_ESI)->,
                     g_INI_Key_Spawns,
                     v4);
  ParticleSystemTypeClass_field_0x29C = (int)((ParticleSystemTypeClass*)_ESI)->ParticleSystemTypeClass_field_0x29C; /*0x64433f*/
  ((INIClass*)_ESI)->__pad_298 [0] = Bool_Overwrite; /*0x644346*/
  ((ParticleSystemTypeClass*)_ESI)->ParticleSystemTypeClass_field_0x29C = (IUnknown *)INIClass::ReadInt_Overwrite( /*0x644351*/
                                                            (bool *)aP1,
                                                            (uint8_t *)&((ParticleSystemTypeClass*)_ESI)->ParticleSystemTypeClass_field_0x29C,
                                                            aSpawnframes,
                                                            ParticleSystemTypeClass_field_0x29C);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644366*/
                    (bool *)aP1,
                    (uint8_t *)&((ParticleSystemTypeClass*)_ESI)->ParticleSystemTypeClass_field_0x2A4,
                    aParticlecap,
                    LODWORD(((ParticleSystemTypeClass*)_ESI)->));
  ParticleSystemTypeClass_field_0x2A8 = ((ParticleSystemTypeClass*)_ESI)->ParticleSystemTypeClass_field_0x2A8; /*0x64436b*/
  LODWORD(((ParticleSystemTypeClass*)_ESI)->ParticleSystemTypeClass_field_0x2A4) = Int_Overwrite; /*0x644371*/
  v8 = INIClass::ReadInt_Overwrite( /*0x644380*/
         (bool *)aP1,
         (uint8_t *)&((ParticleSystemTypeClass*)_ESI)->ParticleSystemTypeClass_field_0x24,
         aSpawnradius,
         ParticleSystemTypeClass_field_0x2A8);
  /* asm-debt:__asm { fld dword ptr [esi+2A0h] } */
  ((ParticleSystemTypeClass*)_ESI)->ParticleSystemTypeClass_field_0x2A8 = v8; /*0x644390*/
  /* asm-debt:__asm { fstp [esp+68h+var_68]; double } */
  INIClass::ReadDouble_Overwrite((INIClass *)(/*0x64439f*/
    (double *)aP1), (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24, (unsigned char *)(aSlowdown), v37);
  /* asm-debt:__asm { fstp dword ptr [esi+2A0h] } */
  *(float *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x2A0 = _ET1; /*0x6443a4*/
  /* asm-debt:__asm { fld dword ptr [esi+2ACh] } */
  /* asm-debt:__asm { fstp [esp+68h+var_68]; double } */
  INIClass::ReadDouble_Overwrite((INIClass *)(/*0x6443be*/
    (double *)aP1), (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24, (unsigned char *)(aSpawncutoff), v38);
  /* asm-debt:__asm { fstp dword ptr [esi+2ACh] } */
  *(float *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x2AC = _ET1; /*0x6443c3*/
  /* asm-debt:__asm { fld dword ptr [esi+2B0h] } */
  /* asm-debt:__asm { fstp [esp+68h+var_68]; double } */
  INIClass::ReadDouble_Overwrite((INIClass *)(/*0x6443dd*/
    (double *)aP1), (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24, (unsigned char *)(aSpawntransluce), v39);
  ParticleSystemTypeClass_field_0x2B8 = ((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x2B8; /*0x6443e2*/
  /* asm-debt:__asm { fstp dword ptr [esi+2B0h] } */
  *(float *)&((ParticleSystemTypeClass *)&_ESI)->DamageDelay = _ET1; /*0x6443ea*/
  ((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x2B8 = INIClass::ReadInt_Overwrite((INIClass *)(/*0x6443fc*/
                                                (bool *)aP1), (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24, (unsigned char *)(aLifetime), ParticleSystemTypeClass_field_0x2B8);
  /*0x644416*/
    ((INIClass*)((INIClass *)aP1))->GetString(/*0x644416*/ (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24, aBehaveslike, &g_INI_DefaultBuffer, Destination, 64);
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
  ((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x2B4 = v14; /*0x644461*/
  XYZFromINI = ParticleSystemTypeClass::ReadXYZFromINI( /*0x64447b*/
                 (ParticleSystemTypeClass *)aP1,
                 v46,
                 (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24,
                 aSpawndirection,
                 (float *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_2C0);
  ((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_2C0 = *(int *)XYZFromINI; /*0x644482*/
  ((ParticleSystemTypeClass *)&_ESI)->StartScale = (int)XYZFromINI[1]; /*0x64448b*/
  v40 = *(double *)&((ParticleSystemTypeClass *)&_ESI)->Beam; /*0x6444a1*/
  ((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_2C8 = (int)XYZFromINI[2]; /*0x6444aa*/
  INIClass::ReadDouble_Overwrite((INIClass *)(/*0x6444b0*/
    (double *)aP1), (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24, (unsigned char *)(aParticlesperco), v40);
  v16 = *(double *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x2D0; /*0x6444bb*/
  /* asm-debt:__asm { fstp qword ptr [esi+2C8h] } */
  *(double *)&((ParticleSystemTypeClass *)&_ESI)->Beam = _RT1; /*0x6444c1*/
  INIClass::ReadDouble_Overwrite((INIClass *)(/*0x6444d1*/
    (double *)aP1), (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24, (unsigned char *)(aSpiraldeltaper), v16);
  v18 = *(unsigned int *)&((ParticleSystemTypeClass *)&_ESI)->__pad_2D8[4]; /*0x6444d6*/
  v19 = *(unsigned int *)((ParticleSystemTypeClass *)&_ESI)->__pad_2D8; /*0x6444dc*/
  /* asm-debt:__asm { fstp qword ptr [esi+2D0h] } */
  *(double *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x2D0 = _RT1; /*0x6444e2*/
  INIClass::ReadDouble_Overwrite((INIClass *)(/*0x6444f2*/
    (double *)aP1), (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24, (unsigned char *)(aSpiralradius), COERCE_DOUBLE(__PAIR64__(v18, v19)));
  ParticleSystemTypeClass_field_0x2E4 = *(unsigned int *)&((ParticleSystemTypeClass *)&_ESI)->q2E4; /*0x6444f7*/
  v22 = *(unsigned int *)&((ParticleSystemTypeClass *)&_ESI)->__pad_2D8[8]; /*0x6444fd*/
  /* asm-debt:__asm { fstp qword ptr [esi+2D8h] } */
  *(double *)((ParticleSystemTypeClass *)&_ESI)->__pad_2D8 = _RT1; /*0x644503*/
  INIClass::ReadDouble_Overwrite((INIClass *)(/*0x644513*/
    (double *)aP1), (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24, (unsigned char *)(aPositionpertur), COERCE_DOUBLE(__PAIR64__((unsigned int)ParticleSystemTypeClass_field_0x2E4, v22)));
  v24 = *(double *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x2E8; /*0x64451e*/
  /* asm-debt:__asm { fstp qword ptr [esi+2E0h] } */
  *(double *)&((ParticleSystemTypeClass *)&_ESI)->__pad_2D8[8] = _RT1; /*0x644524*/
  INIClass::ReadDouble_Overwrite((INIClass *)(/*0x644534*/
    (double *)aP1), (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24, (unsigned char *)(aMovementpertur), v24);
  v26 = *(unsigned int *)&((ParticleSystemTypeClass *)&_ESI)->u32_2F4; /*0x644539*/
  v27 = *(unsigned int *)&((ParticleSystemTypeClass *)&_ESI)->__pad_2EC[4]; /*0x64453f*/
  /* asm-debt:__asm { fstp qword ptr [esi+2E8h] } */
  *(double *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x2E8 = _RT1; /*0x644545*/
  INIClass::ReadDouble_Overwrite((INIClass *)(/*0x644555*/
    (double *)aP1), (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24, (unsigned char *)(aVelocitypertur), COERCE_DOUBLE(__PAIR64__(v26, v27)));
  ParticleSystemTypeClass_field_0x308_high = HIBYTE(((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x308); /*0x64455a*/
  /* asm-debt:__asm { fstp qword ptr [esi+2F0h] } */
  *(double *)&((ParticleSystemTypeClass *)&_ESI)->__pad_2EC[4] = _RT1; /*0x644562*/
  HIBYTE(((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x308) = INIClass::ReadBool_Overwrite((INIClass *)(/*0x644574*/
                                                        (int *)aP1), (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24, (unsigned char *)(aLaser), ParticleSystemTypeClass_field_0x308_high);
  Coord = INIClass::GetCoord( /*0x64458e*/
            (INIClass *)aP1,
            (int)&v44,
            (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24,
            aLasercolor,
            (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x308);
  ParticleSystemTypeClass_field_0x300 = *(unsigned int *)&((ParticleSystemTypeClass *)&_ESI)->q300; /*0x644596*/
  LOWORD(((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x308) = *(unsigned short *)Coord; /*0x64459c*/
  BYTE2(((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x308) = *(unsigned char *)(Coord + 2); /*0x6445af*/
  v33 = INIClass::ReadInt_Overwrite((INIClass *)(/*0x6445b5*/
          (bool *)aP1), (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24, (unsigned char *)(aSparkspawnfram), ParticleSystemTypeClass_field_0x300);
  v43 = *(unsigned int *)((ParticleSystemTypeClass *)&_ESI)->__pad_304; /*0x6445c2*/
  ((ParticleSystemTypeClass *)&_ESI)->q300 = v33; /*0x6445c9*/
  *(unsigned int *)((ParticleSystemTypeClass *)&_ESI)->__pad_304 = INIClass::ReadInt_Overwrite((INIClass *)(/*0x6445d4*/
                                 (bool *)aP1), (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24, (unsigned char *)(aLightsize), v43);
  v34 = INIClass::ReadBool_Overwrite( /*0x6445e9*/
          (int *)aP1,
          (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24,
          aOneframelight,
          (char)_ESI[1].ParticleSystemTypeClass_field_0x0);
  v41 = *(double *)&((ParticleSystemTypeClass *)&_ESI)->__pad_2EC[12]; /*0x6445fb*/
  LOBYTE(_ESI[1].ParticleSystemTypeClass_field_0x0) = v34; /*0x644604*/
  INIClass::ReadDouble_Overwrite((INIClass *)(/*0x64460a*/
    (double *)aP1), (uint8_t *)&((ParticleSystemTypeClass *)&_ESI)->ParticleSystemTypeClass_field_0x24, (unsigned char *)(aSpawnsparkperc), v41);
  /* asm-debt:__asm { fstp qword ptr [esi+2F8h] } */
  *(double *)&((ParticleSystemTypeClass *)&_ESI)->__pad_2EC[12] = _RT1; /*0x64460f*/
return (void *)1; /*0x644617*/

}
}
// 0x644700
namespace gamemd {
void* ParticleSystemTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // ecx

  ((AbstractTypeClass *)((AbstractTypeClass *)this))->ProcessPower( (int *)(a2)); /*0x644709*/
  Power::TimerProcess((int)this->ParticleSystemTypeClass_field_0x294); /*0x644717*/
  LOBYTE(v3) = this->__pad_298[0]; /*0x64471c*/
  ((Power *)((Power *)a2))->FlagProcess(v3); /*0x644725*/
  Power::TimerProcess((int)this->ParticleSystemTypeClass_field_0x29C); /*0x644733*/
  ((Checksummer *)((Checksummer *)a2))->Add_float((int)this->ParticleSystemTypeClass_field_0x2A0); /*0x644741*/
  Power::TimerProcess(LODWORD(this->ParticleSystemTypeClass_field_0x2A4)); /*0x64474f*/
  Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2A8); /*0x64475d*/
  ((Checksummer *)((Checksummer *)a2))->Add_float(this->ParticleSystemTypeClass_field_0x2AC); /*0x64476b*/
  ((Checksummer *)((Checksummer *)a2))->Add_float(this->DamageDelay); /*0x644779*/
  Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2B4); /*0x644787*/
return (void*)(void *)Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2B8); /*0x64479a*/

}
}
// 0x644960
namespace gamemd {
ParticleSystemTypeClass * ParticleSystemTypeClass::ddtor(void ** Block, char a2)
{

  int v3; // eax
  ParticleSystemTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->ParticleSystemTypeClass_field_0x0 = (unsigned int)&vt_ParticleSystemTypeClass; /*0x644966*/
  this->ParticleSystemTypeClass_field_0x4 = (unsigned int)&vt_ParticleSystemTypeClass; /*0x64496c*/
  this->ParticleSystemTypeClass_field_0x8 = (unsigned int)&vt_ParticleSystemTypeClass; /*0x644973*/
  this->SpawnCount = (unsigned int)&vt_ParticleSystemTypeClass; /*0x64497a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)&this->ParticleSystemTypeClass_field_0x0, 1); /*0x644981*/
  v5 =(gamemd::ParticleSystemTypeClass *)this; /*0x644996*/
v3 = (*(int (**)(char *, ParticleSystemTypeClass **))(*(unsigned int *)&stru_A83D50.__pad_14[4] + 16))( /*0x64499a*/ &stru_A83D50.__pad_14[4], (ParticleSystemTypeClass **)(&v5));


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
  ((ObjectTypeClass *)((int)this))->Destruct(); /*0x6449d1*/
  if ( (a2 & 1) != 0 ) /*0x6449db*/
    __3_YAXPAX_Z(this); /*0x6449de*/
  return (gamemd::ParticleSystemTypeClass *)(&this->ParticleSystemTypeClass_field_0x0); /*0x6449e8*/

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

  if ( ((INIClass*)((INIClass *)this))->GetString(a3, a4, &g_INI_DefaultBuffer, String, 512) ) /*0x476383*/
  {
    v5 = strtok(String, (char *)&::Delimiter); /*0x476396*/
    atof(v5); /*0x47639c*/
    /* asm-debt:__asm { fstp [esp+21Ch+var_20C] } */
    v6 = strtok(0, (char *)&::Delimiter); /*0x4763ac*/
    atof(v6); /*0x4763b2*/
    /* asm-debt:__asm { fstp [esp+228h+var_208] } */
    v7 = strtok(0, (char *)&::Delimiter); /*0x4763c2*/
    atof(v7); /*0x4763c8*/
    /* asm-debt:__asm { fstp [esp+234h+var_204] } */
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

  if ( ObjectTypeClass::LoadCleanup((ObjectTypeClass *)((IUnknown *)((ObjectTypeClass *)aP0)), (int)((ObjectTypeClass *)(aP1))) >= 0 && aP0 ) /*0x6447f6*/
  {
    ((ObjectTypeClass*)((ObjectTypeClass *)aP0))->Construct((int)&aP1); /*0x6447ff*/
    aP0->ParticleSystemTypeClass_field_0x0 =(unsigned int)(&vt_ParticleSystemTypeClass); /*0x644804*/
    aP0->ParticleSystemTypeClass_field_0x4 =(unsigned int)(&vt_ParticleSystemTypeClass); /*0x64480a*/
    aP0->ParticleSystemTypeClass_field_0x8 =(unsigned int)(&vt_ParticleSystemTypeClass); /*0x644811*/
    aP0->SpawnCount =(unsigned int)(&vt_ParticleSystemTypeClass); /*0x644818*/
  }
  return 0; /*0x644821*/

}
} // namespace gamemd

// 0x644830
namespace gamemd {
int ParticleSystemTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  AbstractClass::SaveLoad_PrefixWrapper( (gamemd::TechnoTypeClass *)(AbstractClass *)aP0, (ObjectTypeClass *)(aP1), (gamemd::TechnoTypeClass *)aP2); /*0x64483f*/
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
