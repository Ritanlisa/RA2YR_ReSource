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

// 0x6442D0
namespace gamemd {
void* ParticleSystemTypeClass::GetType(unsigned char *** aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6442D0)
}
}
// 0x644700
namespace gamemd {
void* ParticleSystemTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // ecx

  ((AbstractTypeClass *)((AbstractTypeClass *)this))->ProcessPower(a2); /*0x644709*/
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
return (void *)Power::TimerProcess(this->ParticleSystemTypeClass_field_0x2B8); /*0x64479a*/

}
}
// 0x644960
namespace gamemd {
ParticleSystemTypeClass * ParticleSystemTypeClass::ddtor(void ** Block, char a2)
{

  int v3; // eax
  ParticleSystemTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  Block->ParticleSystemTypeClass_field_0x0 = &vt_ParticleSystemTypeClass; /*0x644966*/
  Block->ParticleSystemTypeClass_field_0x4 = &vt_ParticleSystemTypeClass; /*0x64496c*/
  Block->ParticleSystemTypeClass_field_0x8 = &vt_ParticleSystemTypeClass; /*0x644973*/
  Block->SpawnCount = &vt_ParticleSystemTypeClass; /*0x64497a*/
  AbstractClass::AnnounceExpiredPointer(&Block->ParticleSystemTypeClass_field_0x0, 1); /*0x644981*/
  v5 =(gamemd::ParticleSystemTypeClass *)Block; /*0x644996*/
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
  ((ObjectTypeClass *)((int)Block))->Destruct(); /*0x6449d1*/
  if ( (a2 & 1) != 0 ) /*0x6449db*/
    __3_YAXPAX_Z(Block); /*0x6449de*/
  return &Block->ParticleSystemTypeClass_field_0x0; /*0x6449e8*/

}
} // namespace gamemd

// 0x476340
namespace gamemd {
float * ParticleSystemTypeClass::ReadXYZFromINI(float * a2, uint8_t * a3, uint8_t * a4, float * a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x476340)
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6447E0)
}
} // namespace gamemd

// 0x644830
namespace gamemd {
int ParticleSystemTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  AbstractClass::SaveLoad_PrefixWrapper((gamemd::TechnoTypeClass *)(AbstractClass *)aP0, aP1, (gamemd::TechnoTypeClass *)aP2); /*0x64483f*/
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
