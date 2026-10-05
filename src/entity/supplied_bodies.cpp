// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "core/utility_ext.hpp"
#include "entity/anim.hpp"
#include "entity/bullet.hpp"
#include "entity/rad_site.hpp"
#include "entity/terrain.hpp"
#include "entity/tiberium.hpp"
#include "house/house.hpp"
#include "misc/locomotion.hpp"
#include "misc/misc_ext.hpp"
#include "object/abstract.hpp"
#include "object/object.hpp"
#include "render/display.hpp"
#include "structure/building.hpp"
#include "system/cell.hpp"
#include "system/tactical.hpp"

// 0x422720
namespace gamemd {
int AnimClass::SimpleCtor()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000422720.json)
}
} // namespace gamemd

// 0x422B80
namespace gamemd {
void TerrainClass::ClearAnimationLinkFlags()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000422B80.json)
}
} // namespace gamemd

// 0x422BC0
namespace gamemd {
int AnimClass::SetAnimSpeed() {
    return this->AnimClass_field_0x104 + ObjectClass::GetBoundingSize((ObjectClass *)this); /*0x422bce*/
}
} // namespace gamemd

// 0x422BE0
namespace gamemd {
int * AnimClass::UpdateZAdjust(int * a2) {
    unsigned int *Coords; // esi
    unsigned int *v4; // eax
    int v5; // ecx
    int v6; // edx
    int v7; // esi
    int v8; // edx
    int v9; // edi
    int *v11; // edx
    CoordStruct v12; // [esp+14h] [ebp-Ch] BYREF

    if ( this->AnimClass_field_0xCC ) /*0x422be7*/
    {
      Coords = (unsigned int *)ObjectClass::GetCoords((ObjectClass *)this); /*0x422c01*/
      v4 = (unsigned int *)(*(int (__thiscall **)(int, CoordStruct *))(*(unsigned int *)this->AnimClass_field_0xCC + 72))( /*0x422c0a*/
                       this->AnimClass_field_0xCC,
                       &v12);
      v5 = *Coords + *v4; /*0x422c14*/
      v6 = Coords[1]; /*0x422c16*/
      v7 = Coords[2]; /*0x422c19*/
      v8 = v4[1] + v6; /*0x422c1c*/
      v9 = v4[2]; /*0x422c1e*/
      *a2 = v5; /*0x422c29*/
      a2[1] = v8; /*0x422c2b*/
      a2[2] = v9 + v7; /*0x422c2e*/
      return a2; /*0x422c21*/
    }

// 0x422BE0
namespace gamemd {
int * AnimClass::UpdateZAdjust(int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000422BE0.json)
}
} // namespace gamemd

// 0x422C70
namespace gamemd {
char AnimClass::CheckLayerFlags(int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000422C70.json)
}
} // namespace gamemd

// 0x4238B0
namespace gamemd {
bool AnimClass::UpdateMirrorState(int a2) {
    return (uint8_t)ObjectClass::UpdateProductionDisplay((ObjectClass *)this) != 0; /*0x4238bf*/
}
} // namespace gamemd

// 0x423930
namespace gamemd {
int AnimClass::UpdateProjectileTrajectory() {
    float *v1; // edi
    char *v3; // esi
    int v4; // ebx
    Coord *AnimClass_field_0xC8; // eax
    AnimClass *v6; // edi
    int *v7; // eax
    unsigned int *Coords; // eax
    ObjectClass *firstObject; // edi
    unsigned int *v10; // esi
    unsigned int *v11; // eax
    Coord *v12; // ebx
    int v13; // esi
    int v14; // eax
    void *vtable0; // edx
    int v16; // eax
    void (__thiscall **AnimClass_field_0x0)(AnimClass *, int); // esi
    int v18; // eax
    int v20; // [esp-8h] [ebp-60h]
    unsigned int *v21; // [esp+Ch] [ebp-4Ch]
    int v22; // [esp+1Ch] [ebp-3Ch] BYREF
    void (__thiscall **v23)(ObjectClass *, unsigned int *, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int); // [esp+20h] [ebp-38h]
    int v24; // [esp+24h] [ebp-34h]
    char v25[12]; // [esp+28h] [ebp-30h] BYREF
    int v26[3]; // [esp+34h] [ebp-24h] BYREF
    char v27[12]; // [esp+40h] [ebp-18h] BYREF
    int v28[3]; // [esp+4Ch] [ebp-Ch] BYREF

    v3 =(char *)&this->__pad_120[8]; /*0x423939*/
    v4 = JumpjetLocomotionClass::Update2((double *)&this->__pad_120[8], v1); /*0x423946*/
    AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x423948*/
    v24 = v4; /*0x42394e*/
    if ( AnimClass_field_0xC8[2].__pad_C[202] ) /*0x423952*/
      *((float *)v3 + 11) = *((float *)v3 + 11) + *((double *)v3 + 1); /*0x423962*/
    if ( v4 == 1 ) /*0x423968*/
    {
      if ( *(unsigned int *)&this->AnimClass_field_0xC8[2].__pad_C[116] ) /*0x423987*/
      {
        v6 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x42399b*/
        if ( v6 ) /*0x4239a2*/
        {
          v7 = (int *)(*((int (__thiscall **)(AnimClass *, char *))this->AnimClass_field_0x0 + 18))(this, v25); /*0x4239bb*/
          AnimClass::ctor(v6, *(void **)&this->AnimClass_field_0xC8[2].__pad_C[116], v7, 0, 1, (void *)0x600, 0, 0); /*0x4239ce*/
        }
      }
      Coords = (unsigned int *)Coord::GetCoords(v26, v21); /*0x4239da*/
      firstObject = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], Coords)->firstObject; /*0x4239ea*/
      if ( firstObject ) /*0x4239f2*/
      {
        do /*0x423a88*/
        {
          v10 = (unsigned int *)(*((int (__thiscall **)(ObjectClass *, char *))firstObject->vtable1 + 18))( /*0x423a08*/
                            firstObject,
                            v27);
          v11 = (unsigned int *)Coord::GetCoords(v28, v21); /*0x423a11*/
          v12 = this->AnimClass_field_0xC8; /*0x423a29*/
          v13 = abs32(v11[1] - v10[1]) + abs32(*v11 - *v10); /*0x423a3a*/
          if ( v13 <= *(unsigned int *)&v12[2].__pad_C[168] ) /*0x423a44*/
          {
            IDA_LOWORD(v14) = Math::RoundToInt(*(double *)&v12[2].__pad_C[28]); /*0x423a4c*/
            vtable0 = firstObject->AbstractClass; /*0x423a51*/
            v22 = v14; /*0x423a55*/
            v20 = *(unsigned int *)&v12[2].__pad_C[164]; /*0x423a65*/
            v23 = (void (__thiscall **)(ObjectClass *, unsigned int *, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))vtable0; /*0x423a68*/
            v16 = ZCoordToScreenY(v13); /*0x423a6c*/
            v23[91](firstObject, &v22, v16, v20, 0, 0, 0, 0); /*0x423a7d*/
          }
          firstObject = firstObject->nextObject; /*0x423a83*/
        }
        while ( firstObject ); /*0x423a88*/
        v4 = v24; /*0x423a8e*/
      }
    }

// 0x423930
namespace gamemd {
int AnimClass::UpdateProjectileTrajectory()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000423930.json)
}
} // namespace gamemd

// 0x425280
namespace gamemd {
int AnimClass::SaveLoad_Prefix(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000425280.json)
}
} // namespace gamemd

// 0x425410
namespace gamemd {
int AnimClass::ProcessPower(int *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000425410.json)
}
} // namespace gamemd

// 0x449540
namespace gamemd {
int AnimClass::resetAnimation()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000449540.json)
}
} // namespace gamemd

// 0x449A50
namespace gamemd {
int AnimClass::setLoopCount()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000449A50.json)
}
} // namespace gamemd

// 0x4666C0
namespace gamemd {
bool BulletClass::CheckMirrorState(int a2) {
    return (uint8_t)ObjectClass::UpdateProductionDisplay((ObjectClass *)this) != 0; /*0x4666cf*/
}
} // namespace gamemd

// 0x65B4B0
namespace gamemd {
int RadSiteClass::GetSpread() {
    return this->Spread; /*0x65b4b3*/
}
} // namespace gamemd

// 0x421EA0
namespace gamemd {
void ** AnimClass::ctor(void *a2, int *a3, void *a4, int a5, void *a6, void *a7, char a8) {
    wchar_t *v9; // eax
    int v10; // eax
    int v11; // eax
    int AnimClass_field_0xC8; // eax
    int AnimClass_field_0xCC; // ecx
    int v14; // eax
    unsigned int *v15; // eax
    unsigned int *v17; // ecx
    int v18; // ecx
    int v19; // eax
    unsigned int *v20; // ecx
    int v21; // edx
    char *ProductionTimeMult; // eax
    int v23; // ecx
    int v24; // edx
    int v25; // eax
    int v26; // eax
    int v27; // eax
    double v28; // st7
    int v29; // eax
    double v30; // st7
    double v31; // st7
    float v32; // eax
    float v33; // eax
    float v34; // eax
    unsigned int *v35; // eax
    int v36; // ecx
    int v37; // eax
    int *v38; // eax
    int v39; // edx
    unsigned int *v40; // edi
    unsigned int *v41; // eax
    int v42; // ecx
    int v43; // edx
    int v44; // eax
    int *v45; // eax
    int v46; // ebx
    int v47; // eax
    int v48; // edi
    int v49; // eax
    double v50; // st7
    int v51; // eax
    double v52; // st6
    char v53; // cl
    char v54; // al
    int v55; // [esp+Ch] [ebp-54h]
    float v56; // [esp+Ch] [ebp-54h]
    int v57; // [esp+Ch] [ebp-54h]
    int v58; // [esp+10h] [ebp-50h]
    unsigned int *Coords; // [esp+10h] [ebp-50h]
    int v60; // [esp+10h] [ebp-50h]
    float v61; // [esp+10h] [ebp-50h]
    int v62; // [esp+14h] [ebp-4Ch]
    float v63; // [esp+18h] [ebp-48h] BYREF
    float v64; // [esp+1Ch] [ebp-44h]
    float v65; // [esp+20h] [ebp-40h]
    int vfptr; // [esp+24h] [ebp-3Ch] BYREF
    int v67; // [esp+28h] [ebp-38h]
    int v68; // [esp+2Ch] [ebp-34h]
    float v69; // [esp+30h] [ebp-30h] BYREF
    float v70; // [esp+34h] [ebp-2Ch]
    float v71; // [esp+38h] [ebp-28h]
    CoordStruct v72; // [esp+3Ch] [ebp-24h] BYREF
    int v73; // [esp+40h] [ebp-20h]
    CoordStruct out; // [esp+48h] [ebp-18h] BYREF
    CoordStruct v75; // [esp+54h] [ebp-Ch] BYREF

    ObjectClass::ctor((ObjectClass *)this); /*0x421eae*/
    this->AnimClass_field_0xAC = 0; /*0x421eb8*/
    this->__pad_B0[0] = 0; /*0x421ebe*/
    v9 = dword_A8ED84; /*0x421ec4*/
    this->AnimClass_field_0xBC = 0; /*0x421ec9*/
    this->AnimClass_field_0xB4 = (int)v9; /*0x421ecf*/
    this->AnimClass_field_0xC0 = 0; /*0x421ed5*/
    *(unsigned int *)this->__pad_C4 = 1; /*0x421edb*/
    this->AnimClass_field_0xC8 = (int)a2; /*0x421ee5*/
    this->AnimClass_field_0xCC = 0; /*0x421eee*/
    this->AnimClass_field_0xD0 = -1; /*0x421ef4*/
    this->AnimClass_field_0xD4 = 0; /*0x421efa*/
    *(unsigned int *)this->__pad_D8 = -1; /*0x421f00*/
    this->AnimClass_field_0xFC = 1000; /*0x421f06*/
    this->AnimClass_field_0x100 = 0; /*0x421f10*/
    this->AnimClass_field_0x104 = 0; /*0x421f16*/
    this->AnimClass_field_0x108 = Map_InvalidCoord_X; /*0x421f32*/
    *(unsigned int *)this->__pad_10C = Map_InvalidCoord_Y; /*0x421f3c*/
    v10 = Map_InvalidCoord_Z; /*0x421f3f*/
    this->__pad_118[0] = 0; /*0x421f44*/
    this->__pad_118[1] = 0; /*0x421f4a*/
    *(unsigned int *)&this->__pad_10C[4] = v10; /*0x421f50*/
    this->AnimClass_field_0x114 = 0; /*0x421f53*/
    this->__pad_118[2] = 0; /*0x421f59*/
    this->__pad_118[3] = 0; /*0x421f5f*/
    this->AnimClass_field_0x11C = 0; /*0x421f65*/
    this->__pad_120[0] = 0; /*0x421f6b*/
    *(unsigned int *)&this->__pad_120[8] = 0; /*0x421f71*/
    *(unsigned int *)&this->__pad_120[16] = 0; /*0x421f73*/
    *(unsigned int *)&this->__pad_120[24] = 0; /*0x421f76*/
    *(unsigned int *)&this->__pad_120[12] = 0; /*0x421f7d*/
    *(unsigned int *)&this->__pad_120[20] = 0; /*0x421f80*/
    *(unsigned int *)&this->__pad_120[28] = 0; /*0x421f83*/
    Int4::Set((Int4 *)&this->__pad_120[56], 0, 0, 0, 1065353216); /*0x421f86*/
    Int4::Set((Int4 *)&this->__pad_120[72], 0, 0, 0, 1065353216); /*0x421f96*/
    this->AnimClass_field_0x188 = 0; /*0x421fa4*/
    this->__pad_178[0] = 0; /*0x421faa*/
    this->__pad_178[1] = 0; /*0x421fb0*/
    this->AnimClass_field_0x17C = 0; /*0x421fb6*/
    this->AnimClass_field_0x180 = 0; /*0x421fbc*/
    this->AnimClass_field_0x184 = (int)a4; /*0x421fc2*/
    *(unsigned int *)this->__pad_18C = 1072693248; /*0x421fc8*/
    this->AnimClass_field_0x190 = (int)a6; /*0x421fd2*/
    this->__pad_194[0] = 0; /*0x421fd8*/
    this->__pad_194[1] = 1; /*0x421fde*/
    this->__pad_194[2] = 0; /*0x421fe5*/
    this->__pad_194[3] = 0; /*0x421feb*/
    this->__pad_194[4] = 0; /*0x421ff1*/
    this->__pad_194[5] = 0; /*0x421ff7*/
    this->__pad_194[6] = 0; /*0x421ffd*/
    this->__pad_194[7] = 0; /*0x422003*/
    this->__pad_194[8] = 1; /*0x422009*/
    this->__pad_194[9] = 0; /*0x422010*/
    this->__pad_194[10] = 0; /*0x422016*/
    this->AnimClass_field_0x0 = (int)0; /*0x42201c*/
    this->AnimClass_field_0x4 = (int)0; /*0x422022*/
    this->AnimClass_field_0x8 = (int)0; /*0x422028*/
    *(unsigned int *)this->__pad_C = &off_7E3328; /*0x422030*/
    this->__pad_D8[4] = 0; /*0x422037*/
    AbstractClass::GenerateUniqueID((AbstractClass *)&this->AnimClass_field_0x4); /*0x42203d*/
    AudioController::Init((AudioController *)&this->AnimClass_field_0x1A0); /*0x422048*/
    AudioController::Init((AudioController *)&this->AnimClass_field_0x1B4); /*0x422053*/
    if ( dword_A8E9B8 < dword_A8E9B0 /*0x42208b*/
      || (byte_A8E9B5 || !dword_A8E9B0)
      && dword_A8E9BC > 0
      && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(dword_A8E9A8 + 8))(
           &dword_A8E9A8,
           dword_A8E9BC + dword_A8E9B0,
           0) )
    {
      v11 = dword_A8E9B8++; /*0x422098*/
      *((unsigned int *)dword_A8E9AC + v11) = this; /*0x4220a7*/
    }

// 0x65B4B0
namespace gamemd {
int RadSiteClass::GetSpread() {
    return this->Spread; /*0x65b4b3*/
}
} // namespace gamemd

// 0x421EA0
namespace gamemd {
void ** AnimClass::ctor(void *a2, int *a3, void *a4, int a5, void *a6, void *a7, char a8) {
    wchar_t *v9; // eax
    int v10; // eax
    int v11; // eax
    int AnimClass_field_0xC8; // eax
    int AnimClass_field_0xCC; // ecx
    int v14; // eax
    unsigned int *v15; // eax
    unsigned int *v17; // ecx
    int v18; // ecx
    int v19; // eax
    unsigned int *v20; // ecx
    int v21; // edx
    char *ProductionTimeMult; // eax
    int v23; // ecx
    int v24; // edx
    int v25; // eax
    int v26; // eax
    int v27; // eax
    double v28; // st7
    int v29; // eax
    double v30; // st7
    double v31; // st7
    float v32; // eax
    float v33; // eax
    float v34; // eax
    unsigned int *v35; // eax
    int v36; // ecx
    int v37; // eax
    int *v38; // eax
    int v39; // edx
    unsigned int *v40; // edi
    unsigned int *v41; // eax
    int v42; // ecx
    int v43; // edx
    int v44; // eax
    int *v45; // eax
    int v46; // ebx
    int v47; // eax
    int v48; // edi
    int v49; // eax
    double v50; // st7
    int v51; // eax
    double v52; // st6
    char v53; // cl
    char v54; // al
    int v55; // [esp+Ch] [ebp-54h]
    float v56; // [esp+Ch] [ebp-54h]
    int v57; // [esp+Ch] [ebp-54h]
    int v58; // [esp+10h] [ebp-50h]
    unsigned int *Coords; // [esp+10h] [ebp-50h]
    int v60; // [esp+10h] [ebp-50h]
    float v61; // [esp+10h] [ebp-50h]
    int v62; // [esp+14h] [ebp-4Ch]
    float v63; // [esp+18h] [ebp-48h] BYREF
    float v64; // [esp+1Ch] [ebp-44h]
    float v65; // [esp+20h] [ebp-40h]
    int vfptr; // [esp+24h] [ebp-3Ch] BYREF
    int v67; // [esp+28h] [ebp-38h]
    int v68; // [esp+2Ch] [ebp-34h]
    float v69; // [esp+30h] [ebp-30h] BYREF
    float v70; // [esp+34h] [ebp-2Ch]
    float v71; // [esp+38h] [ebp-28h]
    CoordStruct v72; // [esp+3Ch] [ebp-24h] BYREF
    int v73; // [esp+40h] [ebp-20h]
    CoordStruct out; // [esp+48h] [ebp-18h] BYREF
    CoordStruct v75; // [esp+54h] [ebp-Ch] BYREF

    ObjectClass::ctor((ObjectClass *)this); /*0x421eae*/
    this->AnimClass_field_0xAC = 0; /*0x421eb8*/
    this->__pad_B0[0] = 0; /*0x421ebe*/
    v9 = dword_A8ED84; /*0x421ec4*/
    this->AnimClass_field_0xBC = 0; /*0x421ec9*/
    this->AnimClass_field_0xB4 = (int)v9; /*0x421ecf*/
    this->AnimClass_field_0xC0 = 0; /*0x421ed5*/
    *(unsigned int *)this->__pad_C4 = 1; /*0x421edb*/
    this->AnimClass_field_0xC8 = (int)a2; /*0x421ee5*/
    this->AnimClass_field_0xCC = 0; /*0x421eee*/
    this->AnimClass_field_0xD0 = -1; /*0x421ef4*/
    this->AnimClass_field_0xD4 = 0; /*0x421efa*/
    *(unsigned int *)this->__pad_D8 = -1; /*0x421f00*/
    this->AnimClass_field_0xFC = 1000; /*0x421f06*/
    this->AnimClass_field_0x100 = 0; /*0x421f10*/
    this->AnimClass_field_0x104 = 0; /*0x421f16*/
    this->AnimClass_field_0x108 = Map_InvalidCoord_X; /*0x421f32*/
    *(unsigned int *)this->__pad_10C = Map_InvalidCoord_Y; /*0x421f3c*/
    v10 = Map_InvalidCoord_Z; /*0x421f3f*/
    this->__pad_118[0] = 0; /*0x421f44*/
    this->__pad_118[1] = 0; /*0x421f4a*/
    *(unsigned int *)&this->__pad_10C[4] = v10; /*0x421f50*/
    this->AnimClass_field_0x114 = 0; /*0x421f53*/
    this->__pad_118[2] = 0; /*0x421f59*/
    this->__pad_118[3] = 0; /*0x421f5f*/
    this->AnimClass_field_0x11C = 0; /*0x421f65*/
    this->__pad_120[0] = 0; /*0x421f6b*/
    *(unsigned int *)&this->__pad_120[8] = 0; /*0x421f71*/
    *(unsigned int *)&this->__pad_120[16] = 0; /*0x421f73*/
    *(unsigned int *)&this->__pad_120[24] = 0; /*0x421f76*/
    *(unsigned int *)&this->__pad_120[12] = 0; /*0x421f7d*/
    *(unsigned int *)&this->__pad_120[20] = 0; /*0x421f80*/
    *(unsigned int *)&this->__pad_120[28] = 0; /*0x421f83*/
    Int4::Set((Int4 *)&this->__pad_120[56], 0, 0, 0, 1065353216); /*0x421f86*/
    Int4::Set((Int4 *)&this->__pad_120[72], 0, 0, 0, 1065353216); /*0x421f96*/
    this->AnimClass_field_0x188 = 0; /*0x421fa4*/
    this->__pad_178[0] = 0; /*0x421faa*/
    this->__pad_178[1] = 0; /*0x421fb0*/
    this->AnimClass_field_0x17C = 0; /*0x421fb6*/
    this->AnimClass_field_0x180 = 0; /*0x421fbc*/
    this->AnimClass_field_0x184 = (int)a4; /*0x421fc2*/
    *(unsigned int *)this->__pad_18C = 1072693248; /*0x421fc8*/
    this->AnimClass_field_0x190 = (int)a6; /*0x421fd2*/
    this->__pad_194[0] = 0; /*0x421fd8*/
    this->__pad_194[1] = 1; /*0x421fde*/
    this->__pad_194[2] = 0; /*0x421fe5*/
    this->__pad_194[3] = 0; /*0x421feb*/
    this->__pad_194[4] = 0; /*0x421ff1*/
    this->__pad_194[5] = 0; /*0x421ff7*/
    this->__pad_194[6] = 0; /*0x421ffd*/
    this->__pad_194[7] = 0; /*0x422003*/
    this->__pad_194[8] = 1; /*0x422009*/
    this->__pad_194[9] = 0; /*0x422010*/
    this->__pad_194[10] = 0; /*0x422016*/
    this->AnimClass_field_0x0 = (int)0; /*0x42201c*/
    this->AnimClass_field_0x4 = (int)0; /*0x422022*/
    this->AnimClass_field_0x8 = (int)0; /*0x422028*/
    *(unsigned int *)this->__pad_C = &off_7E3328; /*0x422030*/
    this->__pad_D8[4] = 0; /*0x422037*/
    AbstractClass::GenerateUniqueID((AbstractClass *)&this->AnimClass_field_0x4); /*0x42203d*/
    AudioController::Init((AudioController *)&this->AnimClass_field_0x1A0); /*0x422048*/
    AudioController::Init((AudioController *)&this->AnimClass_field_0x1B4); /*0x422053*/
    if ( dword_A8E9B8 < dword_A8E9B0 /*0x42208b*/
      || (byte_A8E9B5 || !dword_A8E9B0)
      && dword_A8E9BC > 0
      && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(dword_A8E9A8 + 8))(
           &dword_A8E9A8,
           dword_A8E9BC + dword_A8E9B0,
           0) )
    {
      v11 = dword_A8E9B8++; /*0x422098*/
      *((unsigned int *)dword_A8E9AC + v11) = this; /*0x4220a7*/
    }

// 0x421EA0
namespace gamemd {
void* AnimClass::ctor(void* a1, void* a2, void* a3, int a4, void* a5, void* a6, int a7)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000421EA0.json)
}
} // namespace gamemd

// 0x425150
namespace gamemd {
int AnimClass::ClearTargetReferences(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000425150.json)
}
} // namespace gamemd

// 0x65B4D0
namespace gamemd {
void RadSiteClass::SetSpread(int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00065B4D0.json)
}
} // namespace gamemd

// 0x65B4F0
namespace gamemd {
void RadSiteClass::SetRadLevel(int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00065B4F0.json)
}
} // namespace gamemd

// 0x65B530
namespace gamemd {
void RadSiteClass::Add(int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00065B530.json)
}
} // namespace gamemd

// 0x65B8F0
namespace gamemd {
int RadSiteClass::GetRadLevelAt(CellStruct* cell)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00065B8F0.json)
}
} // namespace gamemd

// 0x65B9C0
namespace gamemd {
void RadSiteClass::Radiate()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00065B9C0.json)
}
} // namespace gamemd

// 0x65BB50
namespace gamemd {
void RadSiteClass::Deactivate()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00065BB50.json)
}
} // namespace gamemd

// 0x65BD00
namespace gamemd {
void RadSiteClass::DecreaseRadiation()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00065BD00.json)
}
} // namespace gamemd

// 0x65BE90
namespace gamemd {
char RadSiteClass::DecreaseLight() {
    return TacticalClass::UpdateScrollTarget( /*0x65becc*/
             (int)this->LightSource,
             this->LightSource->LightIntensity - this->IntensityDecrement,
             this->RadTimeLeft * this->Tint[0] / this->RadDuration,
             this->RadTimeLeft * this->Tint[1] / this->RadDuration,
             this->RadTimeLeft * this->Tint[2] / this->RadDuration,
             0);
}
} // namespace gamemd

// 0x7220A0
namespace gamemd {
int TiberiumClass::SpreadGrowth(int a2, unsigned int *a3) {
    int result; // eax

    result = ObjectClass::GetSizeMax((AbstractClass *)this); /*0x7220ac*/
    if ( result >= 0 ) /*0x7220b3*/
    {
      *a3 += 4 * *(unsigned int *)(a2 + 212) + 4; /*0x7220c6*/
      return 0; /*0x7220c8*/
    }

// 0x7220A0
namespace gamemd {
int TiberiumClass::SpreadGrowth(int a2, unsigned int *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007220A0.json)
}
} // namespace gamemd

