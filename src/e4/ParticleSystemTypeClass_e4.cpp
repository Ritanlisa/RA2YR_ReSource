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
namespace gamemd {  // G42.18 ns repair
void* ParticleSystemTypeClass::GetType(unsigned char *** aP1)
{
  int v14; // eax

  _ESI = this; /*0x6442de*/
  INIClass::ResetSection((INIClass *)aP1); /*0x6442e3*/
  if ( !((ObjectTypeClass *)((ObjectTypeClass *)_ESI))->LoadFromINI(aP1) ) /*0x6442eb*/
    return 0; /*0x644622*/
  char Destination[64]; // [esp+28h] [ebp-40h] BYREF
  INIClass::GetString( /*0x64430f*/
    (INIClass *)aP1,
    &_ESI->BarrelVoxel,
    aHoldswhat,
    &g_INI_DefaultBuffer,
    Destination,
    64);
  int v3; // eax
  v3 = (int)(((BuildingTypeClass *)(Destination))->FindOrCreateEx()); /*0x644318*/
  char v4 = _ESI->q298; // cl /*0x64431d*/
  _ESI->ParticleSystemTypeClass_field_0x294 = (IUnknown *)v3; /*0x644323*/
  char Bool_Overwrite; // al
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x644332*/
                     (int *)aP1,
                     &_ESI->BarrelVoxel,
                     g_INI_Key_Spawns,
                     v4);
  int ParticleSystemTypeClass_field_0x29C; // [esp+4h] [ebp-64h]
  ParticleSystemTypeClass_field_0x29C = (int)_ESI->ParticleSystemTypeClass_field_0x29C; /*0x64433f*/
  _ESI->q298 = Bool_Overwrite; /*0x644346*/
  _ESI->ParticleSystemTypeClass_field_0x29C = (IUnknown *)INIClass::ReadInt_Overwrite( /*0x644351*/
                                                            (bool *)aP1,
                                                            &_ESI->BarrelVoxel,
                                                            aSpawnframes,
                                                            ParticleSystemTypeClass_field_0x29C);
  int Int_Overwrite; // eax
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644366*/
                    (bool *)aP1,
                    &_ESI->BarrelVoxel,
                    aParticlecap,
                    (_ESI->q2A4));
  int ParticleSystemTypeClass_field_0x2A8; // ecx
  ParticleSystemTypeClass_field_0x2A8 = _ESI->ParticleSystemTypeClass_field_0x2A8; /*0x64436b*/
  (_ESI->q2A4) = Int_Overwrite; /*0x644371*/
  int v8; // eax
  v8 = INIClass::ReadInt_Overwrite( /*0x644380*/
         (bool *)aP1,
         &_ESI->BarrelVoxel,
         aSpawnradius,
         ParticleSystemTypeClass_field_0x2A8);
  __asm { fld dword ptr [esi+2A0h] } /*0x644385*/
  _ESI->ParticleSystemTypeClass_field_0x2A8 = v8; /*0x644390*/
  __asm { fstp [esp+68h+var_68]; double } /*0x644396*/
  double v37; // [esp+0h] [ebp-68h]
  INIClass::ReadDouble_Overwrite( /*0x64439f*/
    (double *)aP1,
    &_ESI->BarrelVoxel,
    aSlowdown,
    v37);
  __asm { fstp dword ptr [esi+2A0h] } /*0x6443a4*/
  *&_ESI->q2A0 = _ET1; /*0x6443a4*/
  __asm { fld dword ptr [esi+2ACh] } /*0x6443aa*/
  __asm { fstp [esp+68h+var_68]; double }
  double v38; // [esp+0h] [ebp-68h]
  INIClass::ReadDouble_Overwrite( /*0x6443be*/
    (double *)aP1,
    &_ESI->BarrelVoxel,
    aSpawncutoff,
    v38);
  __asm { fstp dword ptr [esi+2ACh] } /*0x6443c3*/
  *&_ESI->q2AC = _ET1; /*0x6443c3*/
  __asm { fld dword ptr [esi+2B0h] } /*0x6443c9*/
  __asm { fstp [esp+68h+var_68]; double }
  double v39; // [esp+0h] [ebp-68h]
  INIClass::ReadDouble_Overwrite( /*0x6443dd*/
    (double *)aP1,
    &_ESI->BarrelVoxel,
    aSpawntransluce,
    v39);
  int ParticleSystemTypeClass_field_0x2B8 = _ESI->ParticleTypeClass_2B8; // edx /*0x6443e2*/
  __asm { fstp dword ptr [esi+2B0h] } /*0x6443ea*/
  *&_ESI->DamageDelay = _ET1; /*0x6443ea*/
  _ESI->ParticleTypeClass_2B8 = INIClass::ReadInt_Overwrite( /*0x6443fc*/
                                                (bool *)aP1,
                                                &_ESI->BarrelVoxel,
                                                aLifetime,
                                                ParticleSystemTypeClass_field_0x2B8);
  INIClass::GetString( /*0x644416*/
    (INIClass *)aP1,
    &_ESI->BarrelVoxel,
    aBehaveslike,
    &g_INI_DefaultBuffer,
    Destination,
    64);
  int v45; // [esp+18h] [ebp-50h]
  v45 = 0; /*0x64441b*/
  int v44; // [esp+14h] [ebp-54h] BYREF
  v44 = (int)off_836EE0; /*0x644423*/
  while ( 1 ) /*0x64443f*/
  {
    bool v13; // zf
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
  float *XYZFromINI; // eax
  float v46[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  XYZFromINI = ParticleSystemTypeClass::ReadXYZFromINI( /*0x64447b*/
                 (ParticleSystemTypeClass *)aP1,
                 v46,
                 &_ESI->BarrelVoxel,
                 aSpawndirection,
                 &_ESI->ParticleSystemTypeClass_field_2C0);
  _ESI->ParticleSystemTypeClass_field_2C0 = *(int *)XYZFromINI; /*0x644482*/
  _ESI->StartScale = (int)XYZFromINI[1]; /*0x64448b*/
  double v40; // [esp+0h] [ebp-68h]
  v40 = *&_ESI->Beam; /*0x6444a1*/
  _ESI->ParticleSystemTypeClass_field_2C8 = (int)XYZFromINI[2]; /*0x6444aa*/
  INIClass::ReadDouble_Overwrite( /*0x6444b0*/
    (double *)aP1,
    &_ESI->BarrelVoxel,
    aParticlesperco,
    v40);
  double v16 = *&_ESI->ParticleSystemTypeClass_field_0x2D0; // rax /*0x6444bb*/
  __asm { fstp qword ptr [esi+2C8h] } /*0x6444c1*/
  *&_ESI->Beam = _RT1; /*0x6444c1*/
  INIClass::ReadDouble_Overwrite( /*0x6444d1*/
    (double *)aP1,
    &_ESI->BarrelVoxel,
    aSpiraldeltaper,
    v16);
  unsigned int v18 = *&_ESI->q2DC; // ecx /*0x6444d6*/
  unsigned int v19; // edx
  v19 = *(unsigned int *)_ESI->__pad_2D8; /*0x6444dc*/
  __asm { fstp qword ptr [esi+2D0h] } /*0x6444e2*/
  *&_ESI->ParticleSystemTypeClass_field_0x2D0 = _RT1; /*0x6444e2*/
  INIClass::ReadDouble_Overwrite( /*0x6444f2*/
    (double *)aP1,
    &_ESI->BarrelVoxel,
    aSpiralradius,
    COERCE_DOUBLE((((unsigned long)(unsigned int)(v19)) | ((unsigned long)(unsigned int)(v18) << 32))));
  IUnknown *ParticleSystemTypeClass_field_0x2E4; // eax
  ParticleSystemTypeClass_field_0x2E4 = _ESI->ParticleSystemTypeClass_field_0x2E4; /*0x6444f7*/
  unsigned int v22 = *&_ESI->q2E0; // ecx /*0x6444fd*/
  __asm { fstp qword ptr [esi+2D8h] } /*0x644503*/
  *(double *)_ESI->__pad_2D8 = _RT1; /*0x644503*/
  INIClass::ReadDouble_Overwrite( /*0x644513*/
    (double *)aP1,
    &_ESI->BarrelVoxel,
    aPositionpertur,
    COERCE_DOUBLE((((unsigned long)(unsigned int)(v22)) | ((unsigned long)(unsigned int)((unsigned int)ParticleSystemTypeClass_field_0x2E4) << 32))));
  double v24 = *&_ESI->ParticleSystemTypeClass_field_0x2E8; // rax /*0x64451e*/
  __asm { fstp qword ptr [esi+2E0h] } /*0x644524*/
  *&_ESI->q2E0 = _RT1; /*0x644524*/
  INIClass::ReadDouble_Overwrite( /*0x644534*/
    (double *)aP1,
    &_ESI->BarrelVoxel,
    aMovementpertur,
    v24);
  unsigned int v26 = *&_ESI->u32_2F4; // ecx /*0x644539*/
  unsigned int v27 = *&_ESI->q2F0; // edx /*0x64453f*/
  __asm { fstp qword ptr [esi+2E8h] } /*0x644545*/
  *&_ESI->ParticleSystemTypeClass_field_0x2E8 = _RT1; /*0x644545*/
  INIClass::ReadDouble_Overwrite( /*0x644555*/
    (double *)aP1,
    &_ESI->BarrelVoxel,
    aVelocitypertur,
    COERCE_DOUBLE((((unsigned long)(unsigned int)(v27)) | ((unsigned long)(unsigned int)(v26) << 32))));
  char ParticleSystemTypeClass_field_0x308_high; // al
  ParticleSystemTypeClass_field_0x308_high = (*(_ESI->ParticleSystemTypeClass_field_0x308 + (sizeof(_ESI->ParticleSystemTypeClass_field_0x308) - 1))); /*0x64455a*/
  __asm { fstp qword ptr [esi+2F0h] } /*0x644562*/
  *&_ESI->q2F0 = _RT1; /*0x644562*/
  (*(_ESI->ParticleSystemTypeClass_field_0x308 + (sizeof(_ESI->ParticleSystemTypeClass_field_0x308) - 1))) = INIClass::ReadBool_Overwrite( /*0x644574*/
                                                        (int *)aP1,
                                                        &_ESI->BarrelVoxel,
                                                        aLaser,
                                                        ParticleSystemTypeClass_field_0x308_high);
  int Coord; // eax
  Coord = INIClass::GetCoord( /*0x64458e*/
            (INIClass *)aP1,
            (int)&v44,
            &_ESI->BarrelVoxel,
            aLasercolor,
            &_ESI->ParticleSystemTypeClass_field_0x308);
  int ParticleSystemTypeClass_field_0x300; // ecx
  ParticleSystemTypeClass_field_0x300 = _ESI->ParticleSystemTypeClass_field_0x300; /*0x644596*/
  (_ESI->ParticleSystemTypeClass_field_0x308) = *(unsigned short *)Coord; /*0x64459c*/
  (_ESI->q30A) = *(unsigned char *)(Coord + 2); /*0x6445af*/
  int v33; // eax
  v33 = INIClass::ReadInt_Overwrite( /*0x6445b5*/
          (bool *)aP1,
          &_ESI->BarrelVoxel,
          aSparkspawnfram,
          ParticleSystemTypeClass_field_0x300);
  int v43; // [esp+4h] [ebp-64h]
  v43 = *(unsigned int *)_ESI->__pad_304; /*0x6445c2*/
  _ESI->ParticleSystemTypeClass_field_0x300 = v33; /*0x6445c9*/
  *(unsigned int *)_ESI->__pad_304 = INIClass::ReadInt_Overwrite( /*0x6445d4*/
                                 (bool *)aP1,
                                 &_ESI->BarrelVoxel,
                                 aLightsize,
                                 v43);
  char v34; // al
  v34 = INIClass::ReadBool_Overwrite( /*0x6445e9*/
          (int *)aP1,
          &_ESI->BarrelVoxel,
          aOneframelight,
          (char)_ESI[1].ParticleSystemTypeClass_field_0x0);
  double v41; // [esp+0h] [ebp-68h]
  v41 = *&_ESI->u32_2F8; /*0x6445fb*/
  (*((unsigned char *)&(_ESI[1].ParticleSystemTypeClass_field_0x0))) = v34; /*0x644604*/
  INIClass::ReadDouble_Overwrite( /*0x64460a*/
    (double *)aP1,
    &_ESI->BarrelVoxel,
    aSpawnsparkperc,
    v41);
  __asm { fstp qword ptr [esi+2F8h] } /*0x64460f*/
  *&_ESI->u32_2F8 = _RT1; /*0x64460f*/
  return 1; /*0x644617*/
}
}  // G42.18 ns repair
// 0x644700
namespace gamemd {
void* ParticleSystemTypeClass::PowerDrainUpdate(int * a2)
{


  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x644709*/
  Power::TimerProcess((int)this->q294); /*0x644717*/
  int v3; // ecx
  LOBYTE(v3) = this->q298; /*0x64471c*/
  Power::FlagProcess((Power *)a2, v3); /*0x644725*/
  Power::TimerProcess((int)this->q29C); /*0x644733*/
  Checksummer::Add_float((Checksummer *)a2, (int)this->q2A0); /*0x644741*/
  Power::TimerProcess(LODWORD(this->q2A4)); /*0x64474f*/
  Power::TimerProcess(this->q2A8); /*0x64475d*/
  Checksummer::Add_float((Checksummer *)a2, this->q2AC); /*0x64476b*/
  Checksummer::Add_float((Checksummer *)a2, this->DamageDelay); /*0x644779*/
  Power::TimerProcess(this->__pad_2B4); /*0x644787*/
  return Power::TimerProcess(this->ParticleTypeClass_2B8); /*0x64479a*/

}
}
// 0x644960
namespace gamemd {
ParticleSystemTypeClass * ParticleSystemTypeClass::ddtor(void ** Block, char a2)
{

  Block->tail_0 = &vt_ParticleSystemTypeClass; /*0x644966*/
  Block->__pad_004 = &vt_ParticleSystemTypeClass; /*0x64496c*/
  Block->u32_8 = &vt_ParticleSystemTypeClass; /*0x644973*/
  Block->SpawnCount = &vt_ParticleSystemTypeClass; /*0x64497a*/
  AbstractClass::AnnounceExpiredPointer(&Block->tail_0, 1); /*0x644981*/
  ParticleSystemTypeClass *v5; // [esp+4h] [ebp-4h] BYREF
  v5 = Block; /*0x644996*/
  int v3; // eax
  v3 = (*(int (**)(char *, ParticleSystemTypeClass **))(*(unsigned int *)&DataGlobal_A83D68 + 16))( /*0x64499a*/
         &DataGlobal_A83D68,
         &v5);
  if ( v3 != -1 && v3 < (int)g_InfantryTypeInitState ) /*0x6449aa*/
  {
    --g_InfantryTypeInitState; /*0x6449af*/
    for ( ; /*0x6449b5*/
    v3 < (int)g_InfantryTypeInitState;
    *(unsigned int *)(*(unsigned int *)&DataGlobal_A83D6C + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&DataGlobal_A83D6C
    + 4 * v3) )
    {
      ++v3; /*0x6449bd*/
    }
  }
  ObjectTypeClass::Destruct((int)Block); /*0x6449d1*/
  if ( (a2 & 1) != 0 ) /*0x6449db*/
    operator delete((void *)(Block)); /*0x6449de*/
  return &Block->tail_0; /*0x6449e8*/
}
} // namespace gamemd

// 0x476340
namespace gamemd {
float * ParticleSystemTypeClass::ReadXYZFromINI(float * a2, uint8_t * a3, uint8_t * a4, float * a5)
{

  char String[512]; // [esp+10h] [ebp-200h] BYREF
  if ( INIClass::GetString((INIClass *)this, a3, a4, &g_INI_DefaultBuffer, String, 512) ) /*0x476383*/
  {
    char *v5; // eax
    v5 = strtok(String, Str); /*0x476396*/
    atof(v5); /*0x47639c*/
    __asm { fstp [esp+21Ch+var_20C] } /*0x4763a1*/
    char *v6; // eax
    v6 = strtok(0, Str); /*0x4763ac*/
    atof(v6); /*0x4763b2*/
    __asm { fstp [esp+228h+var_208] } /*0x4763b7*/
    char *v7; // eax
    v7 = strtok(0, Str); /*0x4763c2*/
    atof(v7); /*0x4763c8*/
    __asm { fstp [esp+234h+var_204] } /*0x4763d8*/
    float v9; // [esp+4h] [ebp-20Ch]
    *a2 = v9; /*0x4763e1*/
    float v10; // [esp+8h] [ebp-208h]
    a2[1] = v10; /*0x4763e8*/
    float v11; // [esp+Ch] [ebp-204h]
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
    /* X11: vtable install elided (implicit via ParticleSystemTypeClass virtuals 0x644804) */
    /* X11: vtable install elided (implicit via ParticleSystemTypeClass virtuals 0x64480a) */
    /* X11: vtable install elided (implicit via ParticleSystemTypeClass virtuals 0x644811) */
    aP0->SpawnCount = &vt_ParticleSystemTypeClass; /*0x644818*/
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
