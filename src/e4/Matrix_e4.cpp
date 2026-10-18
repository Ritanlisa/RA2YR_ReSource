// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x5AE860
namespace gamemd {  // G42.18 ns repair
int Matrix3x4::Identity(void *a1)
{
  this-((unsigned int *)(>m_Data))[0] = 1065353216; /*0x5ae867*/
  *&this->q004 = 0; /*0x5ae869*/
  this-((unsigned int *)(>m_Data))[2] = 0; /*0x5ae86c*/
  this-((unsigned int *)(>m_Data))[3] = 0; /*0x5ae86f*/
  this-((unsigned int *)(>m_Data))[4] = 0; /*0x5ae872*/
  this-((unsigned int *)(>m_Data))[5] = 1065353216; /*0x5ae875*/
  this-((unsigned int *)(>m_Data))[6] = 0; /*0x5ae878*/
  this-((unsigned int *)(>m_Data))[7] = 0; /*0x5ae87b*/
  this-((unsigned int *)(>m_Data))[8] = 0; /*0x5ae87e*/
  this-((unsigned int *)(>m_Data))[9] = 0; /*0x5ae881*/
  this-((unsigned int *)(>m_Data))[10] = 1065353216; /*0x5ae884*/
  this-((unsigned int *)(>m_Data))[11] = 0; /*0x5ae887*/
  return 0; /*0x5ae88a*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x5AE980
namespace gamemd {
int Matrix3x4::Translate(float aP1, void *a2)
{

  this->u32_C = aP1 * *(float *)this + this->u32_C; /*0x5ae989*/
  this->u32_1C = aP1 *& this->m_Data[16] + this->u32_1C; /*0x5ae996*/
  this->u32_2C = aP1 * this->u32_20 + this->u32_2C; /*0x5ae9a3*/
  int result; // eax
  return result; /*0x5ae9a6*/
}
} // namespace gamemd
// 0x6D2360
namespace gamemd {
unsigned int * Matrix3x4::TransformCell(AbstractClass * aP1, AbstractClass * aP2, void *a3)
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

  v13 = *a3; /*0x6d2372*/
  if ( v13 >= dword_B0CE30 || (v8 = a3[1], v8 >= dword_B0CE34) ) /*0x6d2386*/
  {
    *aP2 = dword_B0CE08; /*0x6d2404*/
    aP2[1] = dword_B0CE0C; /*0x6d240c*/
    aP2[2] = dword_B0CE10; /*0x6d2415*/
    return aP2; /*0x6d23f7*/
  }
  else
  {
    v9 = (float)v13; /*0x6d2398*/
    v11 = 0; /*0x6d23a4*/
    v10 = (float)v8; /*0x6d23ac*/
    v4 = TransformMatrix3x4Point(v12, this + 889, &v9); /*0x6d23b0*/
    v9 = *v4; /*0x6d23b7*/
    v10 = v4[1]; /*0x6d23c2*/
    v11 = *((unsigned int *)v4 + 2); /*0x6d23c9*/
    v5 = Math::RoundToInt(v9); /*0x6d23d6*/
    v6 = Math::RoundToInt(v10); /*0x6d23d8*/
    *aP2 = v5; /*0x6d23e5*/
    aP2[1] = v6; /*0x6d23e7*/
    aP2[2] = 0; /*0x6d23ec*/
    return aP2; /*0x6d23ea*/
  }

}
} // namespace gamemd