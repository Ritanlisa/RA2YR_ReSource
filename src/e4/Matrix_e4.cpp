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
{
    float *v4;
    BuildingTypeClass *v5;
    int v6;
    int v8;
    float v9;
    BuildingTypeClass *v10;
    int v11;
    float v12[3];
    AbstractClass *aP2a;
    aP2a = *(AbstractClass **)aP2->__pad_0;
    if ( (int)aP2a >= *(int *)&g_OverlayTypeConfig.__pad_5554[228] || (v8 = *(int *)&aP2->__pad_0[4], v8 >= *(int *)&g_OverlayTypeConfig.__pad_5554[232]) )
  {
    *(int *)aP1->__pad_0 = *(int *)&g_OverlayTypeConfig.__pad_5554[188];
    *(int *)&aP1->__pad_0[4] = *(int *)&g_OverlayTypeConfig.__pad_5554[192];
    *(int *)&aP1->__pad_0[8] = *(int *)&g_OverlayTypeConfig.__pad_5554[196];
    return aP1->__pad_0;
  }
    else
  {
    v9 = (float)(int)aP2a;
    v11 = 0;
    *(float *)&v10 = (float)v8;
    v4 = TransformMatrix3x4Point(v12, this + 889, &v9);
    v9 = *v4;
    v10 = (BuildingTypeClass *)*((int *)(v4) + 1);
    v11 = *((int *)(v4) + 2);
    v5 = (BuildingTypeClass *)Math::RoundToInt(v9);
    v6 = Math::RoundToInt(*(float *)&v10);
    *(int *)aP1->__pad_0 = v5;
    *(int *)&aP1->__pad_0[4] = v6;
    *(int *)&aP1->__pad_0[8] = 0;
    return aP1->__pad_0;
  }
}
}
