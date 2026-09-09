// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5AE860
int Matrix3x4::Identity()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Matrix3x4_Identity(_DWORD *this)
{
  *this = 1065353216; /*0x5ae867*/
  *(this + 1) = 0; /*0x5ae869*/
  *(this + 2) = 0; /*0x5ae86c*/
  *(this + 3) = 0; /*0x5ae86f*/
  *(this + 4) = 0; /*0x5ae872*/
  *(this + 5) = 1065353216; /*0x5ae875*/
  *(this + 6) = 0; /*0x5ae878*/
  *(this + 7) = 0; /*0x5ae87b*/
  *(this + 8) = 0; /*0x5ae87e*/
  *(this + 9) = 0; /*0x5ae881*/
  *(this + 10) = 1065353216; /*0x5ae884*/
  *(this + 11) = 0; /*0x5ae887*/
  return 0; /*0x5ae88a*/
}
}

// 0x5AE980
void Matrix3x4::Translate(ParticleSystemClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Matrix3x4::Translate(float *this, ParticleSystemClass *aP1)
{
  *(this + 3) = *(float *)&aP1 * *this + *(this + 3); /*0x5ae989*/
  *(this + 7) = *(float *)&aP1 * *(this + 4) + *(this + 7); /*0x5ae996*/
  *(this + 11) = *(float *)&aP1 * *(this + 8) + *(this + 11); /*0x5ae9a3*/
}
}

// 0x6D2360
unsigned int * Matrix3x4::TransformCell(AbstractClass * aP1, AbstractClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Matrix3x4::TransformCell(float *this, AbstractClass *aP1, AbstractClass *aP2)
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
    || (v8 = *(_DWORD *)&aP2->__pad_0[4], v8 >= *(int *)&MEMORY[0xB077F8].__pad_5554[232]) )
  {
    *(_DWORD *)aP1->__pad_0 = *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[188]; /*0x6d2404*/
    *(_DWORD *)&aP1->__pad_0[4] = *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[192]; /*0x6d240c*/
    *(_DWORD *)&aP1->__pad_0[8] = *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[196]; /*0x6d2415*/
    return aP1->__pad_0; /*0x6d23f7*/
  }
  else
  {
    v9 = (float)(int)aP2a; /*0x6d2398*/
    v11 = 0; /*0x6d23a4*/
    *(float *)&v10 = (float)v8; /*0x6d23ac*/
    v4 = TransformMatrix3x4Point(v12, this + 889, &v9); /*0x6d23b0*/
    v9 = *v4; /*0x6d23b7*/
    v10 = (BuildingTypeClass *)*((_DWORD *)v4 + 1); /*0x6d23c2*/
    v11 = *((_DWORD *)v4 + 2); /*0x6d23c9*/
    v5 = (BuildingTypeClass *)Math::RoundToInt(v9); /*0x6d23d6*/
    v6 = Math::RoundToInt(*(float *)&v10); /*0x6d23d8*/
    *(_DWORD *)aP1->__pad_0 = v5; /*0x6d23e5*/
    *(_DWORD *)&aP1->__pad_0[4] = v6; /*0x6d23e7*/
    *(_DWORD *)&aP1->__pad_0[8] = 0; /*0x6d23ec*/
    return aP1->__pad_0; /*0x6d23ea*/
  }
}
}
