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

  this->m_Data[0] = 1065353216; /*0x5ae867*/
  this->m_Data[1] = 0; /*0x5ae869*/
  this->m_Data[2] = 0; /*0x5ae86c*/
  this->m_Data[3] = 0; /*0x5ae86f*/
  this->m_Data[4] = 0; /*0x5ae872*/
  this->m_Data[5] = 1065353216; /*0x5ae875*/
  this->m_Data[6] = 0; /*0x5ae878*/
  this->m_Data[7] = 0; /*0x5ae87b*/
  this->m_Data[8] = 0; /*0x5ae87e*/
  this->m_Data[9] = 0; /*0x5ae881*/
  this->m_Data[10] = 1065353216; /*0x5ae884*/
  this->m_Data[11] = 0; /*0x5ae887*/
  return 0; /*0x5ae88a*/

}
} // namespace gamemd
// 0x5AE980
namespace gamemd {
void Matrix3x4::Translate(ParticleSystemClass * aP1)
{

  int result; // eax

  *((float *)this + 3) = (unsigned int)(aP1)* *(float *)this + *((float *)this + 3); /*0x5ae989*/
  *((float *)this + 7) = (unsigned int)(aP1)* *((float *)this + 4) + *((float *)this + 7); /*0x5ae996*/
  *((float *)this + 11) = (unsigned int)(aP1)* *((float *)this + 8) + *((float *)this + 11); /*0x5ae9a3*/
  return result; /*0x5ae9a6*/

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
  unsigned int * v11;
  float v12[3]; // [esp+14h] [ebp-Ch] BYREF
  int v13; // [esp+28h] [ebp+8h]

  v13 = *aP2; /*0x6d2372*/
  if ( v13 >= dword_B0CE30 || (v8 = aP2[1], v8 >= dword_B0CE34) ) /*0x6d2386*/
  {
    *aP1 = (unsigned int *)(dword_B0CE08);
    aP1[1] = (unsigned int *)(dword_B0CE0C);
    aP1[2] = (unsigned int *)(dword_B0CE10);
    return (unsigned int *)(aP1);
  }
  else
  {
    v9 = (unsigned int *)((float)v13);
    v11 = (int)((unsigned int *)(0));
    v10 = (unsigned int *)((float)v8);
    v4 = (float *)((unsigned int *)(TransformMatrix3x4Point(v12, (unsigned int *)this + 889, &v9)));
    v9 = (unsigned int *)(*v4);
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