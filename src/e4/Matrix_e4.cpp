// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x5AE860
int Matrix3x4::Identity()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  *this = 1065353216; /*0x5ae867*/
  this->q004 = 0; /*0x5ae869*/
  this->q008 = 0; /*0x5ae86c*/
  this->q00C = 0; /*0x5ae86f*/
  this->q010 = 0; /*0x5ae872*/
  this->q014 = 1065353216; /*0x5ae875*/
  this->q018 = 0; /*0x5ae878*/
  this->q01C = 0; /*0x5ae87b*/
  this->q020 = 0; /*0x5ae87e*/
  this->q024 = 0; /*0x5ae881*/
  this->q028 = 1065353216; /*0x5ae884*/
  this->q02C = 0; /*0x5ae887*/
  return 0; /*0x5ae88a*/
}
}

// 0x5AE980
void Matrix3x4::Translate(ParticleSystemClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->q00C = *(float *)&aP1 * *this + this->q00C; /*0x5ae989*/
  this->q01C = *(float *)&aP1 * this->q004 + this->q01C; /*0x5ae996*/
  this->q02C = *(float *)&aP1 * this->q008 + this->q02C; /*0x5ae9a3*/
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
    if ( (int)aP2a >= *(int *)&g_OverlayTypeConfig[22072] || (v8 = *(int *)&aP2->__pad_0[4], v8 >= *(int *)&g_OverlayTypeConfig[22076]) )
  {
    *(int *)aP1->__pad_0 = *(int *)&g_OverlayTypeConfig[22032];
    *(int *)&aP1->__pad_0[4] = *(int *)&g_OverlayTypeConfig[22036];
    *(int *)&aP1->__pad_0[8] = *(int *)&g_OverlayTypeConfig[22040];
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
