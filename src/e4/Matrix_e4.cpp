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
int Matrix3x4::Identity(void* a1, void* a2)
{

  *a1 = 1065353216; /*0x5ae867*/
  *(a1 + 1) = 0; /*0x5ae869*/
  *(a1 + 2) = 0; /*0x5ae86c*/
  *(a1 + 3) = 0; /*0x5ae86f*/
  *(a1 + 4) = 0; /*0x5ae872*/
  *(a1 + 5) = 1065353216; /*0x5ae875*/
  *(a1 + 6) = 0; /*0x5ae878*/
  *(a1 + 7) = 0; /*0x5ae87b*/
  *(a1 + 8) = 0; /*0x5ae87e*/
  *(a1 + 9) = 0; /*0x5ae881*/
  *(a1 + 10) = 1065353216; /*0x5ae884*/
  *(a1 + 11) = 0; /*0x5ae887*/
  return 0; /*0x5ae88a*/

}
} // namespace gamemd
// 0x5AE980
namespace gamemd {
void Matrix3x4::Translate(ParticleSystemClass * aP1)
{

  *((unsigned int *)this + 3) = *(float *)&aP1 * *this + *((unsigned int *)this + 3); /*0x5ae989*/
  *((unsigned int *)this + 7) = *(float *)&aP1 * *((unsigned int *)this + 4) + *((unsigned int *)this + 7); /*0x5ae996*/
  *((unsigned int *)this + 11) = *(float *)&aP1 * *((unsigned int *)this + 8) + *((unsigned int *)this + 11); /*0x5ae9a3*/

}
} // namespace gamemd
// 0x6D2360
namespace gamemd {
unsigned int * Matrix3x4::TransformCell(AbstractClass * aP1, AbstractClass * aP2)
{

  float *v4; // eax
  BuildingTypeClass *v5; // esi
  int v6; // eax
  int v8; // [esp+4h] [ebp-1Ch]
  float v9; // [esp+8h] [ebp-18h] BYREF
  BuildingTypeClass *v10; // [esp+Ch] [ebp-14h]
  int v11; // [esp+10h] [ebp-10h]
  float v12[3]; // [esp+14h] [ebp-Ch] BYREF
  AbstractClass *aP2a; // [esp+28h] [ebp+8h]

  aP2a = *(AbstractClass **)aP2->__pad_0; /*0x6d2372*/
  if ( (int)aP2a >= *(int *)&MEMORY[0xB077F8].__pad_5554[228] /*0x6d2386*/
    || (v8 = *(unsigned int *)&aP2->__pad_0[4], v8 >= *(int *)&MEMORY[0xB077F8].__pad_5554[232]) )
  {
    *(unsigned int *)aP1->__pad_0 = *(unsigned int *)&MEMORY[0xB077F8].__pad_5554[188]; /*0x6d2404*/
    *(unsigned int *)&aP1->__pad_0[4] = *(unsigned int *)&MEMORY[0xB077F8].__pad_5554[192]; /*0x6d240c*/
    *(unsigned int *)&aP1->__pad_0[8] = *(unsigned int *)&MEMORY[0xB077F8].__pad_5554[196]; /*0x6d2415*/
    return aP1->__pad_0; /*0x6d23f7*/
  }
  else
  {
    v9 = (float)(int)aP2a; /*0x6d2398*/
    v11 = 0; /*0x6d23a4*/
    *(float *)&v10 = (float)v8; /*0x6d23ac*/
    v4 = TransformMatrix3x4Point(v12, (unsigned int *)this + 889, &v9); /*0x6d23b0*/
    v9 = *v4; /*0x6d23b7*/
    v10 = (BuildingTypeClass *)*((unsigned int *)v4 + 1); /*0x6d23c2*/
    v11 = *((unsigned int *)v4 + 2); /*0x6d23c9*/
    v5 = (BuildingTypeClass *)Math::RoundToInt(v9); /*0x6d23d6*/
    v6 = Math::RoundToInt(*(float *)&v10); /*0x6d23d8*/
    *(unsigned int *)aP1->__pad_0 = v5; /*0x6d23e5*/
    *(unsigned int *)&aP1->__pad_0[4] = v6; /*0x6d23e7*/
    *(unsigned int *)&aP1->__pad_0[8] = 0; /*0x6d23ec*/
    return aP1->__pad_0; /*0x6d23ea*/
  }

}
} // namespace gamemd