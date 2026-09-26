// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5AE860
namespace gamemd {
int Matrix3x4::Identity()
{
  *(unsigned int *)this = 1065353216; /*0x5ae867*/
  this->q004 = 0; /*0x5ae869*/
  this->q008 = 0; /*0x5ae86c*/
  this->q00C = 0; /*0x5ae86f*/
  this->q010 = 0; /*0x5ae872*/
  this->q014 = 1065353216; /*0x5ae875*/
  this->q018 = 0; /*0x5ae878*/
  this->q01C = 0; /*0x5ae87b*/
  this->q020 = 0; /*0x5ae87e*/
  this->q024 = 0; /*0x5ae881*/
  *(&this->q0040) = 1065353216; /*0x5ae884*/
  *(&this->q0041) = 0; /*0x5ae887*/
  return 0; /*0x5ae88a*/
}
} // namespace gamemd
// 0x5AE980
namespace gamemd {
void Matrix3x4::Translate(ParticleSystemClass * aP1)
{
  this->q00C = aP1 * *this + this->q00C; /*0x5ae989*/
  this->q01C = aP1 * this->q010 + this->q01C; /*0x5ae996*/
  *(&this->q0041) = aP1 * this->q020 + *(&this->q0041); /*0x5ae9a3*/
}
} // namespace gamemd
// 0x6D2360
namespace gamemd {
unsigned int * Matrix3x4::TransformCell(AbstractClass * aP1, AbstractClass * aP2)
{
  float *v4; // eax
  int v5; // esi
  int v6; // eax
  int v8; // [esp+4h] [ebp-1Ch]
  float v9; // [esp+8h] [ebp-18h] BYREF
  float v10; // [esp+Ch] [ebp-14h]
  int v11; // [esp+10h] [ebp-10h]
  float v12[3]; // [esp+14h] [ebp-Ch] BYREF
  int v13; // [esp+28h] [ebp+8h]

  v13 = *aP2; /*0x6d2372*/
  if ( v13 >= dword_B0CE30 || (v8 = aP2[1], v8 >= dword_B0CE34) ) /*0x6d2386*/
  {
    *aP1 = dword_B0CE08; /*0x6d2404*/
    aP1[1] = dword_B0CE0C; /*0x6d240c*/
    aP1[2] = dword_B0CE10; /*0x6d2415*/
    return aP1; /*0x6d23f7*/
  }
  else
  {
    v9 = (float)v13; /*0x6d2398*/
    v11 = 0; /*0x6d23a4*/
    v10 = (float)v8; /*0x6d23ac*/
    v4 = TransformMatrix3x4Point(v12, &this->u32_DE4, &v9); /*0x6d23b0*/
    v9 = *v4; /*0x6d23b7*/
    v10 = v4[1]; /*0x6d23c2*/
    v11 = *((unsigned int *)v4 + 2); /*0x6d23c9*/
    v5 = Math::RoundToInt(v9); /*0x6d23d6*/
    v6 = Math::RoundToInt(v10); /*0x6d23d8*/
    *aP1 = v5; /*0x6d23e5*/
    aP1[1] = v6; /*0x6d23e7*/
    aP1[2] = 0; /*0x6d23ec*/
    return aP1; /*0x6d23ea*/
  }
}
} // namespace gamemd