// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/E4Recv_720440_e4.hpp"
#include "e4/classes/E4Recv_720960_e4.hpp"
#include "e4/classes/E4Recv_722440_e4.hpp"
#include "e4/classes/E4Recv_722A20_e4.hpp"
#include "e4/classes/E4Recv_722F00_e4.hpp"
#include "e4/classes/E4Recv_723510_e4.hpp"
#include "e4/classes/E4Recv_724200_e4.hpp"
#include "e4/classes/E4Recv_724510_e4.hpp"
#include "e4/classes/E4Recv_724550_e4.hpp"
#include "e4/classes/E4Recv_724560_e4.hpp"
#include "e4/classes/E4Recv_724570_e4.hpp"
#include "e4/classes/E4Recv_724A30_e4.hpp"
#include "e4/classes/E4Recv_724F90_e4.hpp"
#include "e4/classes/E4Recv_7266C0_e4.hpp"
#include "e4/classes/E4Recv_726780_e4.hpp"
#include "e4/classes/E4Recv_726920_e4.hpp"
#include "e4/classes/E4Recv_727190_e4.hpp"
#include "e4/classes/E4Recv_727880_e4.hpp"
#include "e4/classes/E4Recv_728540_e4.hpp"
#include "e4/classes/E4Recv_7294E0_e4.hpp"
#include "e4/classes/E4Recv_729580_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/E4Recv_731130_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/AssetClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int PropagateCellOccupancy(ObjectClass *p_this);  // x4:ida@0x722440
    int RebuildBuildingOccupancy(ObjectClass *p_this);  // x4:ida@0x722f00
} // namespace gamemd

// 0x7221B0
namespace gamemd {  // G42.18 ns repair
void * sub_7221B0()
{
  void *result; // eax
  int i; // esi
  ObjectClass *v3; // ecx
  int v4; // edi
  int v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx
  int v8; // [esp+8h] [ebp-8h]

  result = (void *)(dword_A8B230);
  if ( (((unsigned char *)&(((unsigned int *)(dword_A8B230))[374].vfptr3))[2]) ) /*0x7221b8*/
  {
    result = (void *)g_BuildingLoadQueue_Array.BarrelAnimData[0]; /*0x7221c3*/
    for ( i = 0; i < g_BuildingLoadQueue_Array.BarrelAnimData[0]; ++i ) /*0x7221cc*/
    {
      v3 = *(ObjectClass **)(g_BuildingLoadQueue_Array.TurretAnimData[2] + 4 * i); /*0x7221da*/
      v4 = v3[1].customSound_controller[1]; /*0x7221dd*/
      v5 = v3[1].customSound_controller[3]; /*0x7221e3*/
      if ( v4 != -1 ) /*0x7221ec*/
      {
        if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4 >= v5 ) /*0x7221f8*/
          goto LABEL_7; /*0x7221f8*/
        v5 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4; /*0x7221fa*/
      }
      if ( !v5 ) /*0x7221fe*/
      {
  LABEL_7:
        PropagateCellOccupancy(v3); /*0x722200*/
        v6 = (unsigned int *)(*(unsigned int *)(g_BuildingLoadQueue_Array.TurretAnimData[2] + 4 * i) + 256); /*0x722216*/
        v7 = *(unsigned int *)(*(unsigned int *)(g_BuildingLoadQueue_Array.TurretAnimData[2] + 4 * i) + 156); /*0x72221c*/
        *v6 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x722222*/
        v6[1] = v8; /*0x722224*/
        v6[2] = v7; /*0x722227*/
      }
      result = (void *)g_BuildingLoadQueue_Array.BarrelAnimData[0]; /*0x72222a*/
    }
  }
  return result; /*0x722236*/
}
}  // G42.18 ns repair
// 0x722C40
namespace gamemd {
void * sub_722C40()
{
  void *result; // eax
  int i; // esi
  ObjectClass *v3; // ecx
  int estimatedHealth; // edi
  int spawnStatus; // eax
  double v6; // st7
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  unsigned int *v10; // ecx
  int v11; // [esp+8h] [ebp-8h]

  result = dword_A8B230; /*0x722c40*/
  if ( (((unsigned char *)&(dword_A8B230[374].vfptr3))[2]) ) /*0x722c48*/
  {
    result = (void *)g_BuildingLoadQueue_Array.BarrelAnimData[0]; /*0x722c57*/
    for ( i = 0; i < g_BuildingLoadQueue_Array.BarrelAnimData[0]; ++i ) /*0x722c60*/
    {
      v3 = *(ObjectClass **)(g_BuildingLoadQueue_Array.TurretAnimData[2] + 4 * i); /*0x722c73*/
      estimatedHealth = v3[1].estimatedHealth; /*0x722c76*/
      spawnStatus = v3[1].spawnStatus; /*0x722c7c*/
      if ( estimatedHealth != -1 ) /*0x722c85*/
      {
        if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - estimatedHealth >= spawnStatus ) /*0x722c91*/
          goto LABEL_7; /*0x722c91*/
        spawnStatus -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - estimatedHealth; /*0x722c93*/
      }
      if ( !spawnStatus ) /*0x722c97*/
      {
  LABEL_7:
        RebuildBuildingOccupancy(v3); /*0x722c99*/
        if ( ((int)dword_A8B230->vfptr & 0x40) != 0 ) /*0x722ca7*/
          v6 = 0.3; /*0x722ca9*/
        else
          v6 = 1.0; /*0x722cb1*/
        v7 = g_BuildingLoadQueue_Array.TurretAnimData[2]; /*0x722cb7*/
        v8 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x722cbd*/
        (*((unsigned short *)&(v9))) = Math::RoundToInt(v6); /*0x722cce*/
        v10 = (unsigned int *)(*(unsigned int *)(v7 + 4 * i) + 284); /*0x722cd6*/
        *v10 = v8; /*0x722cde*/
        v10->u32_4 = v11; /*0x722ce0*/
        v10->u32_8 = v9; /*0x722ce3*/
      }
      result = (void *)g_BuildingLoadQueue_Array.BarrelAnimData[0]; /*0x722ce6*/
    }
  }
  return result; /*0x722cf7*/
}
}
// 0x725040
namespace gamemd {
int CompareFunc2Int(unsigned int * a1, unsigned int * a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x725050*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
// 0x725C70
namespace gamemd {
AbstractClass * * sub_725C70()
{
  int result; // eax
  int v2; // esi
  int v3; // eax
  void * v4;
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int *v8; // [esp+8h] [ebp-4h] BYREF

  result = *(unsigned int *)&DataGlobal_B0F6A8; /*0x725c71*/
  v2 = 0; /*0x725c77*/
  while ( v2 < *(int *)&DataGlobal_B0F6A8 ) /*0x725c7b*/
  {
    v8 = *(unsigned int **)(*(unsigned int *)DataGlobal_B0F69C + 4 * v2); /*0x725c89*/
    result = (*(int (**)(void))(*v8 + 68))(); /*0x725c8f*/
    if ( (unsigned char)result ) /*0x725c94*/
    {
      while ( 1 ) /*0x725caa*/
      {
        v3 = (*(int (**)(int *, unsigned int **))(g_BuildingLoadQueue_Array.ToTile + 16))( /*0x725caa*/
               &g_BuildingLoadQueue_Array.ToTile,
               &v8);
        if ( v3 == -1 || v3 >= *(int *)&DataGlobal_B0F6A8 ) /*0x725cba*/
          break; /*0x725cba*/
        --*(unsigned int *)&DataGlobal_B0F6A8; /*0x725cbf*/
        for ( ; /*0x725cc5*/
              v3 < *(int *)&DataGlobal_B0F6A8;
              *(unsigned int *)(*(unsigned int *)DataGlobal_B0F69C + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)DataGlobal_B0F69C + 4 * v3) )
        {
          ++v3; /*0x725ccd*/
        }
      }
      result = (*(int (__stdcall **)(unsigned int *))(*v8 + 8))(v8); /*0x725ce8*/
      if ( result ) /*0x725ced*/
      {
        v4 = (int)(__RTtypeid(v8));
        if ( __8type_info_QBEHABV0__Z((const char *)0, v4) /*0x725d61*/
          || (v5 = __RTtypeid(v8), __8type_info_QBEHABV0__Z((const char *)0, v5))
          || (v6 = __RTtypeid(v8), __8type_info_QBEHABV0__Z((const char *)0, v6))
          || (v7 = __RTtypeid(v8),
              (result = __8type_info_QBEHABV0__Z((const char *)0, v7)) != 0) )
        {
          result = (int)v8; /*0x725d63*/
          *((unsigned char *)v8 + 144) = 1; /*0x725d67*/
        }
        if ( v8 ) /*0x725d74*/
          result = (*(int (**)(unsigned int *, int))(*v8 + 32))(v8, 1); /*0x725d7a*/
      }
    }
    else
    {
      ++v2; /*0x725d7f*/
    }
  }
  return (gamemd::AbstractClass **)(result);
}
}
// 0x728200
namespace gamemd {
void sub_728200()
{
  int v0; // ebp
  int v1; // ebx
  int16_t *v2; // esi
  unsigned short *v3; // edi
  int i; // [esp+8h] [ebp-4h]

  v0 = dword_8B4148; /*0x728203*/
  v1 = 0; /*0x728209*/
  for ( i = -1; v1 < v0; ++v1 ) /*0x728215*/
  {
    v2 = (unsigned short *)((int16_t *)*((unsigned int *)dword_8B413C + v1));
    v3 = (unsigned short *)(((CellCoord *)(&dword_87F7E8))->To_CellObj(v2 + 18)); /*0x72822f*/
    if ( InfantryClass::IsInBounds((gamemd::InfantryClass *)((int)v3)) ) /*0x728233*/
    {
      v3->q116 = ++i; /*0x72825f*/
    }
    else
    {
      if ( v2 ) /*0x72823e*/
        (*(void (**)(int16_t *, int))(*(unsigned int *)v2 + 32))(v2, 1); /*0x728246*/
      --v0; /*0x728249*/
      v3->q116 = -1; /*0x72824a*/
      --v1; /*0x728253*/
    }
  }
}
}
// 0x72AA40
namespace gamemd {
unsigned char LoadMouseClassResources()
{
  uint8_t result; // al

  dword_B0FC80 = (unsigned int)(LoadFileSHP((char *)(off_844C44), (bool *)&byte_B0FC90));
  dword_B0FC84 = (unsigned int)(LoadFileSHP((char *)(off_844C48), (bool *)&byte_B0FC91)); /*0x72aa70*/
  dword_B0FC88 = (unsigned int)(LoadFileSHP((char *)(off_844C4C), (bool *)&byte_B0FC92)); /*0x72aa85*/
  dword_B0FC8C = (unsigned int)(LoadFileSHP((char *)(off_844C50), (bool *)&byte_B0FC93)); /*0x72aa9a*/
  dword_B0FACC = (unsigned int)(LoadFileSHP((char *)(off_844C54), (bool *)&byte_B0FC94)); /*0x72aab4*/
  LoadPaletteSimple((char *)(off_844BA4), &dword_B0FB64, &dword_B0FB68); /*0x72aab9*/
  LoadPaletteSimple((char *)(off_844BA0), &dword_B0FB6C, &dword_B0FB70); /*0x72aace*/
  LoadPaletteSimple((char *)(off_844B9C), &dword_B0FB5C, &dword_B0FB60); /*0x72aae3*/
  LoadPaletteSimple((char *)(off_844BA8), &dword_B0FB74, &dword_B0FB78); /*0x72aaf8*/
  result = byte_B0FBE0; /*0x72aafd*/
  if ( !byte_B0FBE0 ) /*0x72ab04*/
  {
    AssetClass::ReleaseAndReload(); /*0x72ab0a*/
    dword_B0FAC4 = (unsigned int)(LoadFileSHP((char *)(off_844CD4), (bool *)&byte_B0FC95)); /*0x72ab2a*/
    dword_B0F9DC = (unsigned int)(LoadFileSHP((char *)(off_844CD8), (bool *)&byte_B0FC96)); /*0x72ab3f*/
    dword_B0FAC0 = (unsigned int)(LoadFileSHP((char *)(off_844CDC), (bool *)&byte_B0FC97)); /*0x72ab54*/
    dword_B0FB50 = (unsigned int)(LoadFileSHP((char *)(off_844CE0), (bool *)&byte_B0FC98)); /*0x72ab69*/
    dword_B0FA04 = (unsigned int)(LoadFileSHP((char *)(off_844CE4), (bool *)&byte_B0FC99)); /*0x72ab7e*/
    dword_B0FAF8 = (unsigned int)(LoadFileSHP((char *)(off_844CE8), (bool *)&byte_B0FC9A)); /*0x72ab93*/
    dword_B0FA74 = (unsigned int)(LoadFileSHP((char *)(off_844CEC), (bool *)&byte_B0FC9B)); /*0x72aba8*/
    dword_B0FA38 = (unsigned int)(LoadFileSHP((char *)(off_844CF0), (bool *)&byte_B0FC9C)); /*0x72abbd*/
    dword_B0FAE8 = (unsigned int)(LoadFileSHP((char *)(off_844CF4), (bool *)&byte_B0FC9D)); /*0x72abd2*/
    dword_B0FA54 = (unsigned int)(LoadFileSHP((char *)(off_844CF8), (bool *)&byte_B0FC9E)); /*0x72abec*/
    LoadPaletteSimple((char *)(off_844BE4), &dword_B0FBC8, &dword_B0FBCC); /*0x72abf1*/
    LoadPaletteSimple((char *)(off_844BE8), &dword_B0FBD0, &dword_B0FBD4); /*0x72ac06*/
    LoadPaletteSimple((char *)(off_844BEC), &dword_B0FBD8, &dword_B0FBDC); /*0x72ac1b*/
    result = (uint8_t)SetupMouseClassResources(g_DisplayWidth,(int)(g_abs_8A00A8)); /*0x72ac2c*/
    byte_B0FBE0 = 1; /*0x72ac31*/
  }
  return result; /*0x72ac38*/
}
}
// 0x72ADE0
namespace gamemd {
int Palette_LoadSimple(char * Source, unsigned int * a2, unsigned int * a3)
{
  int *v3; // ebx
  char *v4; // ebp
  void * v5;
  unsigned char *v6; // ecx
  int v7; // edx
  unsigned char *v8; // eax
  int v9; // esi
  char v10; // dl
  int v11; // ecx
  ConvertClass *v12; // eax
  unsigned int *v13; // eax
  int16_t v15; // [esp+8h] [ebp-78h]
  CCFileClass v17; // [esp+14h] [ebp-6Ch] BYREF
  int v18[3]; // [esp+6Ch] [ebp-14h] BYREF
  int v19; // [esp+78h] [ebp-8h]

  v3 = (int *)(a2);
  CCFileClass::Construct(&v17, Source); /*0x72adf0*/
  v4 = (char *)CCFileClass::ReadEntireFile(&v17); /*0x72adfe*/
  if ( v4 ) /*0x72ae06*/
  {
    v5 = (int)(operator new(0x300u));
    if ( v5 ) /*0x72ae1b*/
    {
      v6 = (unsigned char *)(v5 + 2); /*0x72ae1d*/
      v7 = 256; /*0x72ae20*/
      do /*0x72ae34*/
      {
        *(v6 - 2) = 0; /*0x72ae25*/
        *(v6 - 1) = 0; /*0x72ae29*/
        *v6 = 0; /*0x72ae2d*/
        v6 += 3; /*0x72ae30*/
        --v7; /*0x72ae33*/
      }
      while ( v7 ); /*0x72ae34*/
    }
    else
    {
      v5 = 0; /*0x72ae38*/
    }
    *v3 = (unsigned char *)(v5);
    v8 = &v4->u8_1; /*0x72ae3e*/
    v9 = 0; /*0x72ae45*/
    while ( 1 ) /*0x72ae5d*/
    {
      (*(((unsigned char *)&(v15)) + (sizeof(v15) - 1))) = 4 * *v8; /*0x72ae5d*/
      (*((unsigned char *)&(v15))) = 4 * *(v8 - 1); /*0x72ae64*/
      v10 = 4 * v8[1]; /*0x72ae6a*/
      v8 += 3; /*0x72ae80*/
      v11 = *v3 + 3 * (v9 % 256); /*0x72ae83*/
      ++v9; /*0x72ae8a*/
      *(unsigned short *)v11 = v15; /*0x72ae91*/
      *(unsigned char *)(v11 + 2) = v10; /*0x72ae94*/
      if ( v9 >= 256 ) /*0x72ae97*/
        break; /*0x72ae97*/
      v3 = (int *)(a2); /*0x72ae4e*/
    }
    operator delete((void *)(v4)); /*0x72ae9e*/
    v12 = (ConvertClass *)operator new(0x188u); /*0x72aea8*/
    if ( v12 ) /*0x72aeb4*/
      v13 = ((ConvertClass *)(v12))->Construct(*a2, *a2, (int)DSurface_Alternate, 1, 0); /*0x72aecb*/
    else
      v13 = 0; /*0x72aed2*/
    *a3 = (unsigned int)(v13); /*0x72aedb*/
  }
  /* X11: vtable install elided (implicit via CCFileClass virtuals 0x72aee1) */
  v19 = 0; /*0x72aee9*/
  Vector::Clear((int)v18); /*0x72aef1*/
  /* X11: vtable install elided (implicit via off_7E1668 virtuals 0x72aefa) */
  return ((BufferIOFileClass *)((BufferIOFileClass *)&v17))->Dtor(); /*0x72af07*/
}
}
// 0x72DAA0
namespace gamemd {
void CleanupEVASystem()
{
  CleanupEVASystem_Cleanup(); /*0x72daa0*/
  if ( dword_B0FCB0 ) /*0x72dcfa*/
  {
    operator delete((void *)(dword_B0FCB0)); /*0x72dcfd*/
    dword_B0FCB0 = 0; /*0x72dd05*/
  }
  if ( dword_B0FCB4 ) /*0x72dd13*/
  {
    (**(void (***)(int, int))dword_B0FCB4)(dword_B0FCB4, 1); /*0x72dd19*/
    dword_B0FCB4 = 0; /*0x72dd1b*/
  }
  if ( dword_B0FCB8 ) /*0x72dd28*/
  {
    operator delete((void *)(dword_B0FCB8)); /*0x72dd2b*/
    dword_B0FCB8 = 0; /*0x72dd33*/
  }
  if ( dword_B0FCBC ) /*0x72dd41*/
  {
    (**(void (***)(int, int))dword_B0FCBC)(dword_B0FCBC, 1); /*0x72dd47*/
    dword_B0FCBC = 0; /*0x72dd49*/
  }
  if ( dword_B0FCC0 ) /*0x72dd56*/
  {
    operator delete((void *)(dword_B0FCC0)); /*0x72dd59*/
    dword_B0FCC0 = 0; /*0x72dd61*/
  }
  if ( dword_B0FCC4 ) /*0x72dd6f*/
  {
    (**(void (***)(int, int))dword_B0FCC4)(dword_B0FCC4, 1); /*0x72dd75*/
    dword_B0FCC4 = 0; /*0x72dd77*/
  }
  if ( dword_B0FBBC ) /*0x72dd84*/
  {
    operator delete((void *)(dword_B0FBBC)); /*0x72dd87*/
    dword_B0FBBC = 0; /*0x72dd8f*/
  }
  if ( dword_B0FBC0 ) /*0x72dd9d*/
  {
    (**(void (***)(int, int))dword_B0FBC0)(dword_B0FBC0, 1); /*0x72dda3*/
    dword_B0FBC0 = 0; /*0x72dda5*/
  }
}
}
// 0x72DFB0
namespace gamemd {
int * * LoadingScreen_InitResources()
{
  char result; // al
  LoadingScreen *v1; // [esp+0h] [ebp-4h]
  ObjectClass *v2; // [esp+0h] [ebp-4h]

  if ( !DataGlobal_B0FBE0 ) /*0x72dfba*/
    goto LABEL_3; /*0x72dfba*/
  DataGlobal_B0FBE0 = 0; /*0x72dfc0*/
  LoadingScreen::DestroyFileTrees(); /*0x72dfc6*/
  LoadingScreen::CleanupObjects(v1); /*0x72dfcb*/
  operator delete((void *)(*(void **)&DataGlobal_B0FC10)); /*0x72dfd6*/
  *(unsigned int *)&DataGlobal_B0FC10 = 0; /*0x72dfe1*/
  operator delete((void *)(*(void **)&DataGlobal_B0FC14)); /*0x72dfe8*/
  *(unsigned int *)&DataGlobal_B0FC14 = 0; /*0x72dff3*/
  operator delete((void *)(*(void **)&DataGlobal_B0FC18)); /*0x72dffa*/
  *(unsigned int *)&DataGlobal_B0FC18 = 0; /*0x72e004*/
  operator delete((void *)(*(void **)&g_GadgetAnimState)); /*0x72e00b*/
  *(unsigned int *)&g_GadgetAnimState = 0; /*0x72e016*/
  operator delete((void *)(*(void **)&DataGlobal_B0FC20)); /*0x72e01d*/
  *(unsigned int *)&DataGlobal_B0FC20 = 0; /*0x72e028*/
  operator delete((void *)(*(void **)&DataGlobal_B0FC24)); /*0x72e02f*/
  *(unsigned int *)&DataGlobal_B0FC24 = 0; /*0x72e039*/
  operator delete((void *)(*(void **)&DataGlobal_B0FC28)); /*0x72e040*/
  *(unsigned int *)&DataGlobal_B0FC28 = 0; /*0x72e04b*/
  operator delete((void *)(*(void **)&DataGlobal_B0FC2C)); /*0x72e052*/
  *(unsigned int *)&DataGlobal_B0FC2C = 0; /*0x72e05a*/
  result = ReleaseLoadingResources(v2); /*0x72e060*/
  if ( !DataGlobal_B0FBE0 ) /*0x72e06b*/
  {
  LABEL_3:
    AssetClass::ReleaseAndReload((AssetClass *)v1); /*0x72e071*/
    *(unsigned int *)&DataGlobal_B0FAC4 = LoadFileSHP( /*0x72e091*/
                                                             off_844CD4,
                                                             (bool *)&DataGlobal_B0FC95);
    *(unsigned int *)&DataGlobal_B0F9DC = LoadFileSHP( /*0x72e0a6*/
                                                             off_844CD8,
                                                             (bool *)&DataGlobal_B0FC96);
    *(unsigned int *)&DataGlobal_B0FAC0 = LoadFileSHP( /*0x72e0bb*/
                                                             off_844CDC,
                                                             (bool *)&DataGlobal_B0FC97);
    *(unsigned int *)&g_DialogControlPool = LoadFileSHP( /*0x72e0d0*/
                                                             off_844CE0,
                                                             (bool *)&DataGlobal_B0FC98);
    *(unsigned int *)&DataGlobal_B0FA04 = LoadFileSHP( /*0x72e0e5*/
                                                             off_844CE4,
                                                             (bool *)&DataGlobal_B0FC99);
    *(unsigned int *)&DataGlobal_B0FAF8 = LoadFileSHP( /*0x72e0fa*/
                                                             off_844CE8,
                                                             (bool *)&DataGlobal_B0FC9A);
    *(unsigned int *)&DataGlobal_B0FA74 = LoadFileSHP( /*0x72e10f*/
                                                             off_844CEC,
                                                             (bool *)&DataGlobal_B0FC9B);
    *(unsigned int *)&DataGlobal_B0FA38 = LoadFileSHP( /*0x72e124*/
                                                             off_844CF0,
                                                             (bool *)&DataGlobal_B0FC9C);
    *(unsigned int *)&DataGlobal_B0FAE8 = LoadFileSHP( /*0x72e139*/
                                                             off_844CF4,
                                                             (bool *)&DataGlobal_B0FC9D);
    *(unsigned int *)&DataGlobal_B0FA54 = LoadFileSHP( /*0x72e153*/
                                                             off_844CF8,
                                                             (bool *)&DataGlobal_B0FC9E);
    LoadPaletteSimple( /*0x72e158*/
      off_844BE4,
      (int *)&DataGlobal_B0FBC8,
      &DataGlobal_B0FBCC);
    LoadPaletteSimple( /*0x72e16d*/
      off_844BE8,
      (int *)&DataGlobal_B0FBD0,
      &DataGlobal_B0FBD4);
    LoadPaletteSimple( /*0x72e182*/
      off_844BEC,
      (int *)&DataGlobal_B0FBD8,
      &DataGlobal_B0FBDC);
    result = (uint8_t)SetupMouseClassResources((int)g_DisplayWidth, (int)*(&g_DisplayWidth + 1)); /*0x72e193*/
    DataGlobal_B0FBE0 = 1; /*0x72e198*/
  }
  return (int **)(result);
}
}
// 0x72E2D0
namespace gamemd {
int DrawScoreScreenStats(ConvertClass * aP0, int a2)
{
  int v5; // edi
  int v6; // ebp
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // [esp+4Ch] [ebp-18h]
  int v16; // [esp+50h] [ebp-14h]
  int v17; // [esp+54h] [ebp-10h] BYREF
  int v18; // [esp+58h] [ebp-Ch]
  int v19; // [esp+5Ch] [ebp-8h]
  int v20; // [esp+60h] [ebp-4h]

  g_DisplayWidth = g_DisplayWidth; /*0x72e2d0*/
  if ( g_DisplayWidth >= 1024 ) /*0x72e2e3*/
  {
    v5 = (int)(*(unsigned int *)dword_B0FC1C);
    v6 = *((unsigned int *)dword_B0FC1C + 1); /*0x72e300*/
    v15 = *(unsigned int *)dword_B0FC20 + *((unsigned int *)dword_B0FC20 + 2); /*0x72e309*/
    v7 = (int)(*aP0); /*0x72e315*/
    v16 = *((unsigned int *)dword_B0FC2C + 1) + *((unsigned int *)dword_B0FC2C + 3); /*0x72e317*/
    v17 = 0; /*0x72e31d*/
    v18 = 0; /*0x72e321*/
    v19 = v5; /*0x72e32e*/
    v20 = v6; /*0x72e332*/
    aP0->vt_slot_16(&v17, a2, 0); /*0x72e336*/
    v8 = (int)(*aP0); /*0x72e339*/
    v18 = 0; /*0x72e342*/
    v19 = 800; /*0x72e34b*/
    v17 = v5; /*0x72e353*/
    v20 = v6; /*0x72e357*/
    aP0->vt_slot_16(&v17, a2, 0); /*0x72e35b*/
    v9 = (int)(*aP0); /*0x72e35e*/
    v18 = 0; /*0x72e366*/
    v17 = v15; /*0x72e36f*/
    v19 = v5; /*0x72e377*/
    v20 = v6; /*0x72e37b*/
    aP0->vt_slot_16(&v17, a2, 0); /*0x72e37f*/
    v10 = *aP0; /*0x72e382*/
    v20 = 600; /*0x72e38d*/
    v17 = v15; /*0x72e397*/
    v18 = v6; /*0x72e39f*/
    v19 = v5; /*0x72e3a3*/
    aP0->vt_slot_16(&v17, a2, 0); /*0x72e3a7*/
    v19 = v5; /*0x72e3af*/
    v17 = v15; /*0x72e3bb*/
    v20 = 600; /*0x72e3c5*/
    v11 = *aP0; /*0x72e3c9*/
    v18 = v16; /*0x72e3cf*/
    aP0->vt_slot_16(&v17, a2, 0); /*0x72e3d3*/
    v19 = 800; /*0x72e3e5*/
    v12 = *aP0; /*0x72e3e9*/
    v17 = v5; /*0x72e3ef*/
    v18 = v16; /*0x72e3f3*/
    v20 = v6; /*0x72e3f7*/
    aP0->vt_slot_16(&v17, a2, 0); /*0x72e3fb*/
    v17 = 0; /*0x72e40a*/
    v13 = *aP0; /*0x72e40e*/
    v18 = v16; /*0x72e414*/
    v19 = v5; /*0x72e418*/
    v20 = v6; /*0x72e41c*/
    aP0->vt_slot_16(&v17, a2, 0); /*0x72e420*/
    v14 = *aP0; /*0x72e423*/
    v17 = 0; /*0x72e42c*/
    v20 = 600; /*0x72e435*/
    v18 = v6; /*0x72e43d*/
    v19 = v5; /*0x72e441*/
    return aP0->vt_slot_16(&v17, a2, 0); /*0x72e445*/
  }
}
}
// 0x72E450
namespace gamemd {
AbstractClass * * RenderScoreScreen(ConvertClass * a1, int * a2, char a3)
{
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  AssetClass *v11; // [esp+0h] [ebp-20h]
  int v12; // [esp+8h] [ebp-18h] BYREF
  int i; // [esp+Ch] [ebp-14h]
  int v14[2]; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  if ( !DataGlobal_B0FBE0 ) /*0x72e460*/
  {
    AssetClass::ReleaseAndReload(v11); /*0x72e462*/
    Render_Render_72EB50(); /*0x72e467*/
    LoadPaletteSimple( /*0x72e47c*/
      off_844BE4,
      (int *)&DataGlobal_B0FBC8,
      &DataGlobal_B0FBCC);
    LoadPaletteSimple( /*0x72e491*/
      off_844BE8,
      (int *)&DataGlobal_B0FBD0,
      &DataGlobal_B0FBD4);
    LoadPaletteSimple( /*0x72e4a6*/
      off_844BEC,
      (int *)&DataGlobal_B0FBD8,
      &DataGlobal_B0FBDC);
    SetupMouseClassResources((int)g_DisplayWidth, (int)*(&g_DisplayWidth + 1)); /*0x72e4b7*/
    DataGlobal_B0FBE0 = 1; /*0x72e4bc*/
  }
  DrawScoreScreenStats(a1, (int)a2); /*0x72e4c9*/
  v5 = a2[1]; /*0x72e4d0*/
  v14[0] = *a2; /*0x72e4d3*/
  v6 = a2[2]; /*0x72e4d7*/
  v7 = a2[3]; /*0x72e4da*/
  v12 = 0; /*0x72e4e4*/
  i = 0; /*0x72e4e8*/
  v14[1] = v5; /*0x72e4ec*/
  v15 = v6; /*0x72e4f0*/
  v16 = v7; /*0x72e4f4*/
  if ( v6 > 800 ) /*0x72e4f8*/
    v15 = (v6 - 800) / 2 + 800; /*0x72e509*/
  if ( v7 > 600 ) /*0x72e513*/
    v16 = (v7 - 600) / 2 + 600; /*0x72e525*/
  v12 = **(unsigned int **)&DataGlobal_B0FC20; /*0x72e537*/
  i = *(unsigned int *)(*(unsigned int *)&DataGlobal_B0FC20 + 4); /*0x72e53e*/
  DrawToSurfaceSHP( /*0x72e56a*/
    (int)a1,
    *(int *)&DataGlobal_B0FBCC,
    *(int *)&DataGlobal_B0FAF8,
    0,
    &v12,
    v14,
    1024,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
  v8 = 0; /*0x72e574*/
  v12 = **(unsigned int **)&DataGlobal_B0FC24; /*0x72e578*/
  v9 = *(unsigned int *)&DataGlobal_B0FA20; /*0x72e57f*/
  for ( i = *(unsigned int *)(*(unsigned int *)&DataGlobal_B0FC24 + 4); /*0x72e58a*/
        v8 < *(int *)&DataGlobal_B0FA20;
        v9 = *(unsigned int *)&DataGlobal_B0FA20 )
  {
    DrawToSurfaceSHP( /*0x72e5c1*/
      (int)a1,
      *(int *)&DataGlobal_B0FBD4,
      *(int *)&DataGlobal_B0FA74,
      0,
      &v12,
      v14,
      1024,
      0,
      0,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
    ++v8; /*0x72e5d4*/
    i += *(unsigned int *)(*(unsigned int *)&DataGlobal_B0FC24 + 12); /*0x72e5d5*/
  }
  if ( !a3 ) /*0x72e5e8*/
  {
    v10 = 0; /*0x72e5f0*/
    v12 = **(unsigned int **)&DataGlobal_B0FC10; /*0x72e5f6*/
    i = *(unsigned int *)(*(unsigned int *)&DataGlobal_B0FC10 + 4); /*0x72e5fd*/
    if ( v9 > 0 ) /*0x72e601*/
    {
      do /*0x72e65a*/
      {
        DrawToSurfaceSHP( /*0x72e63a*/
          (int)a1,
          *(int *)&DataGlobal_B0FBDC,
          *(int *)&DataGlobal_B0FAC4,
          0xAu,
          &v12,
          v14,
          1024,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        ++v10; /*0x72e653*/
        i += *(unsigned int *)(*(unsigned int *)&DataGlobal_B0FC10 + 12); /*0x72e654*/
      }
      while ( v10 < *(int *)&DataGlobal_B0FA20 ); /*0x72e65a*/
    }
  }
  v12 = **(unsigned int **)&DataGlobal_B0FC28; /*0x72e663*/
  i = *(unsigned int *)(*(unsigned int *)&DataGlobal_B0FC28 + 4); /*0x72e688*/
  DrawToSurfaceSHP( /*0x72e69f*/
    (int)a1,
    *(int *)&DataGlobal_B0FBCC,
    *(int *)&DataGlobal_B0FA38,
    0,
    &v12,
    v14,
    1024,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
  v12 = **(unsigned int **)&DataGlobal_B0FC2C; /*0x72e6ad*/
  i = *(unsigned int *)(*(unsigned int *)&DataGlobal_B0FC2C + 4); /*0x72e6b9*/
  if ( g_DisplayWidth == 640 ) /*0x72e6c2*/
    DrawToSurfaceSHP( /*0x72e6ec*/
      (int)a1,
      *(int *)&DataGlobal_B0FBCC,
      *(int *)&DataGlobal_B0FAE8,
      0,
      &v12,
      v14,
      1024,
      0,
      0,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  else
    DrawToSurfaceSHP( /*0x72e71f*/
      (int)a1,
      *(int *)&DataGlobal_B0FBCC,
      *(int *)&DataGlobal_B0FA54,
      0,
      &v12,
      v14,
      1024,
      0,
      0,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
}
}
// 0x72EC70
namespace gamemd {
int * * MouseClass_SetupResources(int a1, int a2)
{
  int v2; // edi
  int v3; // ebx
  int v4; // esi
  int *v5; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // esi
  unsigned int *v9; // eax
  int v10; // ebx
  unsigned int *v11; // eax
  int v12; // ebx
  int v13; // edi
  unsigned int *v14; // eax
  int v15; // edi
  int v16; // ebx
  int v17; // ebp
  int v18; // esi
  int *v19; // eax
  int v20; // ebp
  int v21; // ebx
  int v22; // esi
  unsigned int *v23; // eax
  int v24; // ecx
  int v25; // esi
  int v26; // ebp
  int v27; // edi
  unsigned int *v28; // eax
  int v29; // edi
  int v30; // esi
  int *result; // eax
  bool v32; // [esp+12h] [ebp-12h]
  bool v33; // [esp+13h] [ebp-11h]
  int v34; // [esp+14h] [ebp-10h]
  int v35; // [esp+18h] [ebp-Ch]
  int v36; // [esp+1Ch] [ebp-8h]
  int v37; // [esp+20h] [ebp-4h]

  v35 = 0; /*0x72ec81*/
  v34 = a1; /*0x72ec85*/
  if ( a1 >= 1024 ) /*0x72ec89*/
  {
    v35 = (a1 - 800) / 2; /*0x72ec9a*/
    v34 = a1 - v35; /*0x72ec9e*/
  }
  v2 = 0; /*0x72eca2*/
  v37 = a2; /*0x72ecaa*/
  v36 = a2; /*0x72ecae*/
  if ( a2 >= 768 ) /*0x72ecb2*/
  {
    v2 = (a2 - 600) / 2; /*0x72ecc1*/
    v37 = a2 - v2; /*0x72ecc5*/
    v36 = a2 - 2 * v2; /*0x72ecd2*/
  }
  v32 = a1 == 640; /*0x72eceb*/
  v33 = a2 == 480; /*0x72ecf9*/
  if ( a1 == 640 ) /*0x72ecfd*/
    v3 = *((int16_t *)dword_B0FB50 + 1); /*0x72ecff*/
  else
    v3 = *((int16_t *)dword_B0FA04 + 1); /*0x72ed05*/
  if ( a2 == 480 ) /*0x72ed0b*/
    v4 = *((int16_t *)dword_B0FB50 + 2); /*0x72ed0d*/
  else
    v4 = *((int16_t *)dword_B0FA04 + 2); /*0x72ed13*/
  v5 = (int *)operator new(0x10u); /*0x72ed19*/
  if ( v5 ) /*0x72ed23*/
  {
    v5[1] = v2; /*0x72ed29*/
    *v5 = v35; /*0x72ed2c*/
    v5[2] = v3; /*0x72ed2e*/
    v5[3] = v4; /*0x72ed31*/
    dword_B0FC1C = v5; /*0x72ed34*/
  }
  else
  {
    dword_B0FC1C = 0; /*0x72ed3b*/
  }
  v6 = *((int16_t *)dword_B0FAF8 + 1); /*0x72ed4c*/
  v7 = *((int16_t *)dword_B0FAF8 + 2); /*0x72ed50*/
  v8 = v34 - v6; /*0x72ed54*/
  v9 = operator new(0x10u); /*0x72ed56*/
  if ( v9 ) /*0x72ed60*/
  {
    *v9 = v8; /*0x72ed62*/
    v9[1] = v2; /*0x72ed64*/
    v9[2] = v6; /*0x72ed67*/
    v9[3] = v7; /*0x72ed6a*/
    dword_B0FC20 = v9; /*0x72ed6d*/
  }
  else
  {
    dword_B0FC20 = 0; /*0x72ed74*/
  }
  v10 = *((int16_t *)dword_B0FAC0 + 2); /*0x72ed86*/
  v11 = operator new(0x10u); /*0x72ed8a*/
  if ( v11 ) /*0x72ed94*/
  {
    *v11 = v8; /*0x72ed96*/
    v11[1] = v2; /*0x72ed98*/
    v11[2] = v6; /*0x72ed9b*/
    v11[3] = v10; /*0x72ed9e*/
    dword_B0FC18 = v11; /*0x72eda1*/
  }
  else
  {
    dword_B0FC18 = 0; /*0x72eda8*/
  }
  v12 = v2 + *((unsigned int *)dword_B0FC20 + 3); /*0x72edc2*/
  v13 = *((int16_t *)dword_B0FA74 + 2); /*0x72edc4*/
  v14 = operator new(0x10u); /*0x72edc8*/
  if ( v14 ) /*0x72edd2*/
  {
    *v14 = v8; /*0x72edd4*/
    v14[1] = v12; /*0x72edd6*/
    v14[2] = v6; /*0x72edd9*/
    v14[3] = v13; /*0x72eddc*/
  }
  else
  {
    v14 = 0; /*0x72ede1*/
  }
  dword_B0FC24 = v14; /*0x72ede9*/
  v15 = v14[1]; /*0x72edf1*/
  v16 = *((int16_t *)dword_B0FAC4 + 1); /*0x72edf4*/
  v17 = *((int16_t *)dword_B0FAC4 + 2); /*0x72edf8*/
  v18 = *v14 + v14[2] - v16; /*0x72ee02*/
  v19 = (int *)operator new(0x10u); /*0x72ee04*/
  if ( v19 ) /*0x72ee0e*/
  {
    *v19 = v18; /*0x72ee10*/
    v19->vtable2 = v15; /*0x72ee12*/
    v19->vtable3 = v16; /*0x72ee15*/
    v19->vtable4 = v17; /*0x72ee18*/
    dword_B0FC10 = v19; /*0x72ee1b*/
  }
  else
  {
    dword_B0FC10 = 0; /*0x72ee22*/
  }
  v20 = *((int16_t *)dword_B0F9DC + 1); /*0x72ee33*/
  v21 = *((int16_t *)dword_B0F9DC + 2); /*0x72ee37*/
  v22 = dword_B0FC24->vtable2 + dword_B0FC24->vtable4 - v21; /*0x72ee48*/
  v23 = operator new(0x10u); /*0x72ee4a*/
  if ( v23 ) /*0x72ee54*/
  {
    v23[1] = v22; /*0x72ee5a*/
    v23[2] = v20; /*0x72ee5f*/
    *v23 = v34 - v20; /*0x72ee62*/
    v23[3] = v21; /*0x72ee64*/
    dword_B0FC14 = v23; /*0x72ee67*/
  }
  else
  {
    dword_B0FC14 = 0; /*0x72ee6e*/
  }
  dword_B0FA20 = (v36 - *((unsigned int *)dword_B0FC20 + 3)) / dword_B0FC24->vtable4; /*0x72ee95*/
  v24 = dword_B0FA20 * dword_B0FC24->vtable4; /*0x72ee9d*/
  v25 = v24 + *((unsigned int *)dword_B0FC20 + 3); /*0x72eeab*/
  v26 = *((int16_t *)dword_B0FA38 + 1); /*0x72eead*/
  v27 = v24 + dword_B0FC24->vtable2; /*0x72eeb1*/
  v28 = operator new(0x10u); /*0x72eeb3*/
  if ( v28 ) /*0x72eebd*/
  {
    v28[1] = v27; /*0x72eec3*/
    *v28 = v34 - v26; /*0x72eeca*/
    v28[2] = v26; /*0x72eecc*/
    v28[3] = v36 - v25; /*0x72eecf*/
    dword_B0FC28 = v28; /*0x72eed2*/
  }
  else
  {
    dword_B0FC28 = 0; /*0x72eed9*/
  }
  if ( v32 ) /*0x72eef4*/
    v29 = *((int16_t *)dword_B0FAE8 + 1); /*0x72eef6*/
  else
    v29 = *((int16_t *)dword_B0FA54 + 1); /*0x72eefc*/
  if ( v33 ) /*0x72ef06*/
    v30 = *((int16_t *)dword_B0FAE8 + 2); /*0x72ef08*/
  else
    v30 = *((int16_t *)dword_B0FA54 + 2); /*0x72ef0e*/
  result = (int *)operator new(0x10u); /*0x72ef14*/
  if ( result ) /*0x72ef1e*/
  {
    result[2] = v29; /*0x72ef24*/
    *result = v35; /*0x72ef27*/
    result[3] = v30; /*0x72ef2f*/
    result[1] = v37 - v30; /*0x72ef34*/
    dword_B0FC2C = result; /*0x72ef38*/
  }
  else
  {
    dword_B0FC2C = 0; /*0x72ef45*/
  }
  return result; /*0x72ef32*/
}
}
// 0x72F540
namespace gamemd {
AbstractClass * * RenderCreditsScreen(int a1, ConvertClass * a2, char a3)
{
  int v5; // ebp
  int v6; // edx
  int v7; // ebp
  int v8; // [esp+10h] [ebp-28h] BYREF
  int i; // [esp+14h] [ebp-24h]
  int v10[2]; // [esp+18h] [ebp-20h] BYREF
  int v11; // [esp+20h] [ebp-18h]
  int v12; // [esp+24h] [ebp-14h]
  int v13; // [esp+28h] [ebp-10h]
  int v14; // [esp+2Ch] [ebp-Ch]
  int v15; // [esp+34h] [ebp-4h]

  if ( !byte_B0FC0C ) /*0x72f552*/
  {
    LoadingScreen::LoadSHPs(); /*0x72f554*/
    Sides::MixFileYuriFiles3(); /*0x72f559*/
    SetupScreenBuffers(dword_A8EB84, dword_A8EB88); /*0x72f56a*/
    byte_B0FC0C = 1; /*0x72f56f*/
  }
  (*(void (**)(int, unsigned int))(*(unsigned int *)a1 + 24))(a1, 0); /*0x72f57d*/
  v8 = 0; /*0x72f585*/
  i = 0; /*0x72f589*/
  v8 = *(unsigned int *)dword_B0FC30; /*0x72f58f*/
  i = *((unsigned int *)dword_B0FC30 + 1); /*0x72f59b*/
  if ( g_DisplayWidth == 640 ) /*0x72f5a4*/
  {
    DrawToSurfaceSHP(a1, dword_B0FBF0, (int)dword_B0FAD4, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f5ca*/
  }
  else if ( g_DisplayWidth == 800 ) /*0x72f5d1*/
  {
    DrawToSurfaceSHP(a1, dword_B0FBF0, (int)dword_B0FAC8, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f5f6*/
  }
  else
  {
    DrawToSurfaceSHP(a1, dword_B0FBF0, (int)dword_B0FA50, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f624*/
  }
  v8 = *(unsigned int *)dword_B0FC34; /*0x72f630*/
  i = *((unsigned int *)dword_B0FC34 + 1); /*0x72f65a*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FB08, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f667*/
  v8 = *(unsigned int *)dword_B0FC38; /*0x72f67a*/
  i = *((unsigned int *)dword_B0FC38 + 1); /*0x72f681*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0F9E0, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f6aa*/
  v8 = *(unsigned int *)dword_B0FC3C; /*0x72f6b6*/
  i = *((unsigned int *)dword_B0FC3C + 1); /*0x72f6e0*/
  DrawToSurfaceSHP(a1, dword_B0FBF8, (int)dword_B0FA68, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f6ed*/
  v8 = *(unsigned int *)dword_B0FC44; /*0x72f700*/
  i = *((unsigned int *)dword_B0FC44 + 1); /*0x72f707*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA70, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f730*/
  v5 = 0; /*0x72f73a*/
  v8 = *(unsigned int *)dword_B0FC48; /*0x72f73e*/
  for ( i = *((unsigned int *)dword_B0FC48 + 1); v5 < dword_B0FADC; i += *((unsigned int *)dword_B0FC48 + 3) ) /*0x72f750*/
  {
    DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA00, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f77d*/
    ++v5; /*0x72f796*/
  }
  v8 = *(unsigned int *)dword_B0FC4C; /*0x72f7a6*/
  i = *((unsigned int *)dword_B0FC4C + 1); /*0x72f7d0*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA8C, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f7dd*/
  v8 = *(unsigned int *)dword_B0FC50; /*0x72f7ec*/
  i = *((unsigned int *)dword_B0FC50 + 1); /*0x72f7f3*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA48, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f820*/
  v10[0] = *a2; /*0x72f829*/
  v10[1] = a2[1]; /*0x72f830*/
  v11 = a2[2]; /*0x72f837*/
  v6 = a2[3]; /*0x72f841*/
  v13 = dword_886FB0; /*0x72f849*/
  v12 = v6; /*0x72f857*/
  v11 = dword_886FB8 - 168; /*0x72f861*/
  v14 = dword_886FB4; /*0x72f86a*/
  v15 = dword_886FBC; /*0x72f86e*/
  v8 = *(unsigned int *)dword_B0FC5C; /*0x72f874*/
  i = *((unsigned int *)dword_B0FC5C + 1); /*0x72f882*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA3C, 0, &v8, v10, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f8b0*/
  if ( a3 ) /*0x72f8bb*/
  {
    v8 = *(unsigned int *)dword_B0FC60; /*0x72f8c8*/
    i = *((unsigned int *)dword_B0FC60 + 1); /*0x72f8f3*/
    DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA90, 2u, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f900*/
    v7 = 0; /*0x72f90a*/
    v8 = *(unsigned int *)dword_B0FC68; /*0x72f90e*/
    for ( i = *((unsigned int *)dword_B0FC68 + 1); v7 < dword_B0F9E4; v8 += *((unsigned int *)dword_B0FC68 + 2) ) /*0x72f920*/
    {
      DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FAA8, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f952*/
      ++v7; /*0x72f96a*/
    }
  }
  else
  {
    v8 = *(unsigned int *)dword_B0FC64; /*0x72f97f*/
    i = *((unsigned int *)dword_B0FC64 + 1); /*0x72f986*/
    DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FA90, 2u, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f9b4*/
  }
  v8 = *(unsigned int *)dword_B0FC6C; /*0x72f9c0*/
  i = *((unsigned int *)dword_B0FC6C + 1); /*0x72f9ea*/
  DrawToSurfaceSHP(a1, dword_B0FBE8, (int)dword_B0FABC, 0, &v8, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72f9f7*/
}
}
// 0x72FC60
namespace gamemd {
unsigned int * Screen_SetupBuffers(int a1, int a2)
{
  int16_t *v3; // eax
  int v4; // esi
  int v5; // ebx
  unsigned int *v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // edi
  unsigned int *v10; // eax
  int v11; // ebp
  unsigned int *v12; // eax
  int v13; // esi
  int v14; // ebp
  unsigned int *v15; // eax
  int v16; // esi
  int v17; // ebp
  unsigned int *v18; // eax
  int v19; // esi
  int v20; // ebp
  unsigned int *v21; // eax
  int v22; // ebp
  unsigned int *v23; // eax
  int v24; // ebp
  unsigned int *v25; // eax
  int v26; // esi
  int v27; // ecx
  int v28; // esi
  int v29; // edi
  unsigned int *v30; // eax
  int v31; // edi
  int v32; // ebx
  unsigned int *v33; // eax
  int v34; // edi
  int v35; // ebx
  unsigned int *v36; // eax
  unsigned int *v37; // eax
  int v38; // edi
  int v39; // ebx
  unsigned int *v40; // eax
  int v41; // edi
  int v42; // ebx
  int *v43; // eax
  int *v44; // ecx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // edi
  int v50; // ebx
  int v51; // ebp
  int v52; // esi
  unsigned int *v53; // eax
  int v54; // edi
  int v55; // ebx
  int v56; // ebp
  int v57; // esi
  unsigned int *result; // eax

  if ( a1 == 640 ) /*0x72fc77*/
  {
    v3 = (int16_t *)dword_B0FAD4; /*0x72fc79*/
  }
  else
  {
    v3 = (int16_t *)dword_B0FAC8; /*0x72fc80*/
    if ( a1 != 800 ) /*0x72fc8b*/
      v3 = (int16_t *)dword_B0FA50; /*0x72fc8d*/
  }
  v4 = v3[1]; /*0x72fc92*/
  v5 = v3[2]; /*0x72fc96*/
  v6 = operator new(0x10u); /*0x72fc9c*/
  if ( v6 ) /*0x72fca8*/
  {
    *v6 = 0; /*0x72fcaa*/
    v6[1] = 0; /*0x72fcac*/
    v6[2] = v4; /*0x72fcaf*/
    v6[3] = v5; /*0x72fcb2*/
    dword_B0FC30 = v6; /*0x72fcb5*/
  }
  else
  {
    dword_B0FC30 = 0; /*0x72fcbc*/
  }
  v7 = *((int16_t *)dword_B0FB08 + 1); /*0x72fcc9*/
  v8 = *((int16_t *)dword_B0FB08 + 2); /*0x72fccd*/
  v9 = a1 - v7; /*0x72fcd1*/
  v10 = operator new(0x10u); /*0x72fcd3*/
  if ( v10 ) /*0x72fcdd*/
  {
    *v10 = v9; /*0x72fcdf*/
    v10[1] = 0; /*0x72fce1*/
    v10[2] = v7; /*0x72fce4*/
    v10[3] = v8; /*0x72fce7*/
    dword_B0FC34 = v10; /*0x72fcea*/
  }
  else
  {
    dword_B0FC34 = 0; /*0x72fcf1*/
  }
  v11 = *((int16_t *)dword_B0F9E0 + 2); /*0x72fcfe*/
  v12 = operator new(0x10u); /*0x72fd02*/
  if ( v12 ) /*0x72fd0c*/
  {
    *v12 = v9; /*0x72fd0e*/
    v12[1] = v8; /*0x72fd10*/
    v12[2] = v7; /*0x72fd13*/
    v12[3] = v11; /*0x72fd16*/
    dword_B0FC38 = v12; /*0x72fd19*/
  }
  else
  {
    dword_B0FC38 = 0; /*0x72fd20*/
  }
  v13 = v11 + v8; /*0x72fd30*/
  v14 = *((int16_t *)dword_B0FA68 + 2); /*0x72fd34*/
  v15 = operator new(0x10u); /*0x72fd38*/
  if ( v15 ) /*0x72fd42*/
  {
    *v15 = v9; /*0x72fd44*/
    v15[1] = v13; /*0x72fd46*/
    v15[2] = v7; /*0x72fd49*/
    v15[3] = v14; /*0x72fd4c*/
    dword_B0FC3C = v15; /*0x72fd4f*/
  }
  else
  {
    dword_B0FC3C = 0; /*0x72fd56*/
  }
  v16 = v14 + v13; /*0x72fd66*/
  v17 = *((int16_t *)dword_B0FA70 + 2); /*0x72fd6a*/
  v18 = operator new(0x10u); /*0x72fd6e*/
  if ( v18 ) /*0x72fd78*/
  {
    *v18 = v9; /*0x72fd7a*/
    v18[1] = v16; /*0x72fd7c*/
    v18[2] = v7; /*0x72fd7f*/
    v18[3] = v17; /*0x72fd82*/
    dword_B0FC44 = v18; /*0x72fd85*/
  }
  else
  {
    dword_B0FC44 = 0; /*0x72fd8c*/
  }
  v19 = v17 + v16; /*0x72fd9b*/
  v20 = *((int16_t *)dword_B0FAFC + 2); /*0x72fd9f*/
  v21 = operator new(0x10u); /*0x72fda3*/
  if ( v21 ) /*0x72fdad*/
  {
    *v21 = v9; /*0x72fdaf*/
    v21[1] = v19; /*0x72fdb1*/
    v21[2] = v7; /*0x72fdb4*/
    v21[3] = v20; /*0x72fdb7*/
    dword_B0FC48 = v21; /*0x72fdba*/
  }
  else
  {
    dword_B0FC48 = 0; /*0x72fdc1*/
  }
  v22 = *((int16_t *)dword_B0FA8C + 2); /*0x72fdd3*/
  v23 = operator new(0x10u); /*0x72fdd7*/
  if ( v23 ) /*0x72fde1*/
  {
    *v23 = v9; /*0x72fde3*/
    v23[1] = v19; /*0x72fde5*/
    v23[2] = v7; /*0x72fde8*/
    v23[3] = v22; /*0x72fdeb*/
    dword_B0FC4C = v23; /*0x72fdee*/
  }
  else
  {
    dword_B0FC4C = 0; /*0x72fdf5*/
  }
  v24 = *((int16_t *)dword_B0FA48 + 2); /*0x72fe07*/
  v25 = operator new(0x10u); /*0x72fe0b*/
  if ( v25 ) /*0x72fe15*/
  {
    *v25 = v9; /*0x72fe17*/
    v25[1] = v19; /*0x72fe19*/
    v25[2] = v7; /*0x72fe1c*/
    v25[3] = v24; /*0x72fe1f*/
    dword_B0FC50 = v25; /*0x72fe22*/
  }
  else
  {
    dword_B0FC50 = 0; /*0x72fe29*/
  }
  dword_B0FADC = (a2 /*0x72fe7a*/
                - *((unsigned int *)dword_B0FC4C + 3)
                - *((unsigned int *)dword_B0FC44 + 3)
                - *((unsigned int *)dword_B0FC3C + 3)
                - *((unsigned int *)dword_B0FC38 + 3)
                - *((unsigned int *)dword_B0FC34 + 3))
               / *((unsigned int *)dword_B0FC48 + 3);
  v26 = *((unsigned int *)dword_B0FC48 + 3) * dword_B0FADC + v19; /*0x72fe83*/
  *((unsigned int *)dword_B0FC4C + 1) = v26; /*0x72fe85*/
  v27 = v26 + *((unsigned int *)dword_B0FC4C + 3); /*0x72fe96*/
  v28 = a2 - 32; /*0x72fe98*/
  *((unsigned int *)dword_B0FC50 + 1) = v27; /*0x72fe9b*/
  v29 = dword_A8EB84 - 168; /*0x72fea4*/
  v30 = operator new(0x10u); /*0x72feaa*/
  if ( v30 ) /*0x72feb6*/
  {
    *v30 = 0; /*0x72feb8*/
    v30[1] = v28; /*0x72feba*/
    v30[2] = v29; /*0x72febd*/
    v30[3] = 32; /*0x72fec0*/
    dword_B0FC58 = v30; /*0x72fec7*/
  }
  else
  {
    dword_B0FC58 = 0; /*0x72fece*/
  }
  v31 = *((int16_t *)dword_B0FA3C + 1); /*0x72fedb*/
  v32 = *((int16_t *)dword_B0FA3C + 2); /*0x72fedf*/
  v33 = operator new(0x10u); /*0x72fee3*/
  if ( v33 ) /*0x72feed*/
  {
    *v33 = 0; /*0x72feef*/
    v33[1] = v28; /*0x72fef1*/
    v33[2] = v31; /*0x72fef4*/
    v33[3] = v32; /*0x72fef7*/
    dword_B0FC5C = v33; /*0x72fefa*/
  }
  else
  {
    dword_B0FC5C = 0; /*0x72ff01*/
  }
  v34 = *((int16_t *)dword_B0FA90 + 1); /*0x72ff0e*/
  v35 = *((int16_t *)dword_B0FA90 + 2); /*0x72ff12*/
  v36 = operator new(0x10u); /*0x72ff16*/
  if ( v36 ) /*0x72ff20*/
  {
    *v36 = 0; /*0x72ff22*/
    v36[1] = v28; /*0x72ff24*/
    v36[2] = v34; /*0x72ff27*/
    v36[3] = v35; /*0x72ff2a*/
    dword_B0FC60 = v36; /*0x72ff2d*/
  }
  else
  {
    dword_B0FC60 = 0; /*0x72ff34*/
  }
  v37 = operator new(0x10u); /*0x72ff3c*/
  if ( v37 ) /*0x72ff46*/
  {
    *v37 = 0; /*0x72ff48*/
    v37[1] = v28; /*0x72ff4a*/
    v37[2] = v34; /*0x72ff4d*/
    v37[3] = v35; /*0x72ff50*/
    dword_B0FC64 = v37; /*0x72ff53*/
  }
  else
  {
    dword_B0FC64 = 0; /*0x72ff5a*/
  }
  v38 = *((int16_t *)dword_B0FAA8 + 1); /*0x72ff67*/
  v39 = *((int16_t *)dword_B0FAA8 + 2); /*0x72ff6b*/
  v40 = operator new(0x10u); /*0x72ff6f*/
  if ( v40 ) /*0x72ff79*/
  {
    *v40 = 0; /*0x72ff7b*/
    v40[1] = v28; /*0x72ff7d*/
    v40[2] = v38; /*0x72ff80*/
    v40[3] = v39; /*0x72ff83*/
    dword_B0FC68 = v40; /*0x72ff86*/
  }
  else
  {
    dword_B0FC68 = 0; /*0x72ff8d*/
  }
  v41 = *((int16_t *)dword_B0FABC + 1); /*0x72ff9a*/
  v42 = *((int16_t *)dword_B0FABC + 2); /*0x72ff9e*/
  v43 = (int *)operator new(0x10u); /*0x72ffa2*/
  if ( v43 ) /*0x72ffac*/
  {
    *v43 = 0; /*0x72ffae*/
    v43[1] = v28; /*0x72ffb0*/
    v43[2] = v41; /*0x72ffb3*/
    v43[3] = v42; /*0x72ffb6*/
    v44 = v43; /*0x72ffb9*/
  }
  else
  {
    v44 = 0; /*0x72ffbd*/
  }
  dword_B0FC6C = v44; /*0x72ffc9*/
  dword_B0F9E4 = (a1 - *((unsigned int *)dword_B0FC60 + 2) - *((unsigned int *)dword_B0FC34 + 2) - v44[2]) /*0x72ffee*/
               / *((unsigned int *)dword_B0FC68 + 2);
  v45 = *(unsigned int *)dword_B0FC34 - v44[2]; /*0x72fff5*/
  *v44 = v45; /*0x72fff8*/
  v46 = v45 - dword_B0F9E4 * *((unsigned int *)dword_B0FC68 + 2); /*0x73000a*/
  *(unsigned int *)dword_B0FC68 = v46; /*0x73000c*/
  v47 = v46 - *((unsigned int *)dword_B0FC60 + 2); /*0x730014*/
  *(unsigned int *)dword_B0FC60 = v47; /*0x730017*/
  dword_B0FAD8 = v47; /*0x73001f*/
  v48 = *(unsigned int *)dword_B0FC6C - *((unsigned int *)dword_B0FC64 + 2); /*0x73002e*/
  *(unsigned int *)dword_B0FC64 = v48; /*0x730030*/
  dword_B0FAA4 = v48; /*0x730038*/
  dword_B0FA78 = *(unsigned int *)dword_B0FC6C - *((unsigned int *)dword_B0FC60 + 2) - *(unsigned int *)dword_B0FC60; /*0x730058*/
  v49 = *(unsigned int *)dword_B0FC38; /*0x730064*/
  v50 = *((unsigned int *)dword_B0FC38 + 1); /*0x730066*/
  v51 = *((unsigned int *)dword_B0FC38 + 2); /*0x730069*/
  v52 = *((unsigned int *)dword_B0FC38 + 3) + *((unsigned int *)dword_B0FC3C + 3); /*0x73006c*/
  v53 = operator new(0x10u); /*0x73006e*/
  if ( v53 ) /*0x730078*/
  {
    *v53 = v49; /*0x73007a*/
    v53[1] = v50; /*0x73007c*/
    v53[2] = v51; /*0x73007f*/
    v53[3] = v52; /*0x730082*/
    dword_B0FC40 = v53; /*0x730085*/
  }
  else
  {
    dword_B0FC40 = 0; /*0x73008c*/
  }
  v54 = *(unsigned int *)dword_B0FC44; /*0x7300b9*/
  v55 = *((unsigned int *)dword_B0FC44 + 1); /*0x7300bb*/
  v56 = *((unsigned int *)dword_B0FC44 + 2); /*0x7300be*/
  v57 = *((unsigned int *)dword_B0FC44 + 3) + *((unsigned int *)dword_B0FC4C + 3) + dword_B0FADC * *((unsigned int *)dword_B0FC48 + 3); /*0x7300c3*/
  result = operator new(0x10u); /*0x7300c5*/
  if ( result ) /*0x7300cf*/
  {
    *result = v54; /*0x7300d1*/
    result[3] = v57; /*0x7300d3*/
    result[2] = v56; /*0x7300d7*/
    result[1] = v55; /*0x7300db*/
    dword_B0FC54 = result; /*0x7300df*/
  }
  else
  {
    dword_B0FC54 = 0; /*0x7300ec*/
  }
  return result; /*0x7300d6*/
}
}
// 0x720230
namespace gamemd {
void sub_720230()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72023c*/
  *(double *)&unk_B0F1F8[544] = Math::Sqrt(v0 + v0); /*0x72024e*/
}
} // namespace gamemd

// 0x720260
namespace gamemd {
void sub_720260()
{
  *(double *)&unk_B0F1F8[624] = *(double *)&unk_B0F1F8[544] / 60.0; /*0x72026c*/
}
} // namespace gamemd

// 0x720280
namespace gamemd {
void sub_720280()
{
  *(double *)&unk_B0F1F8[600] = 1.0 / *(double *)&unk_B0F1F8[624]; /*0x72028c*/
}
} // namespace gamemd

// 0x7202A0
namespace gamemd {
void sub_7202A0()
{
  *(double *)&unk_B0F1F8[592] = 0.0174532925199433 * 45.0; /*0x7202ac*/
}
} // namespace gamemd

// 0x7202C0
namespace gamemd {
void sub_7202C0()
{
  *(double *)&unk_B0F1F8[552] = 0.0174532925199433 * 60.0; /*0x7202cc*/
}
} // namespace gamemd

// 0x7202E0
namespace gamemd {
void sub_7202E0()
{
  *(double *)&unk_B0F1F8[512] = 0.0174532925199433 * 90.0; /*0x7202ec*/
}
} // namespace gamemd

// 0x720300
namespace gamemd {
long long sub_720300()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(*(double *)&unk_B0F1F8[512] - *(double *)&unk_B0F1F8[552]); /*0x720312*/
  result = Math::RoundToInt(v0 * *(double *)&unk_B0F1F8[544] * 0.5); /*0x720326*/
  *(unsigned int *)&unk_B0F1F8[632] = result; /*0x72032b*/
  return result; /*0x720330*/
}
} // namespace gamemd

// 0x720340
namespace gamemd {
void sub_720340()
{
  *(double *)&unk_B0F1F8[560] = Math::ArcTan((double)*(int *)&unk_B0F1F8[632] * 0.00390625); /*0x720357*/
}
} // namespace gamemd

// 0x720370
namespace gamemd {
void sub_720370()
{
  *(double *)&unk_B0F1F8[584] = Math::ArcTan((double)(2 * *(unsigned int *)&unk_B0F1F8[632]) / *(double *)&unk_B0F1F8[544]); /*0x720392*/
}
} // namespace gamemd

// 0x7203A0
namespace gamemd {
long long sub_7203A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * *(unsigned int *)&unk_B0F1F8[632]) + 0.5); /*0x7203bb*/
  *(unsigned int *)&unk_B0F1F8[620] = result; /*0x7203c0*/
  return result; /*0x7203c6*/
}
} // namespace gamemd

// 0x7203D0
namespace gamemd {
int sub_7203D0()
{
  *(unsigned short *)&unk_B0F1F8[536] = 0; /*0x7203d2*/
  *(unsigned short *)&unk_B0F1F8[538] = 0; /*0x7203d8*/
  return 0; /*0x7203de*/
}
} // namespace gamemd

// 0x7203E0
namespace gamemd {
int sub_7203E0()
{
  *(unsigned int *)&unk_B0F1F8[568] = 0; /*0x7203e2*/
  *(unsigned int *)&unk_B0F1F8[572] = 0; /*0x7203e7*/
  *(unsigned int *)&unk_B0F1F8[576] = 0; /*0x7203ec*/
  return 0; /*0x7203f1*/
}
} // namespace gamemd

// 0x720400
namespace gamemd {
int sub_720400()
{
  *(unsigned int *)&unk_B0F1F8[616] = 0; /*0x720405*/
  *(unsigned int *)&unk_B0F1F8[608] = 128; /*0x72040f*/
  *(unsigned int *)&unk_B0F1F8[612] = 128; /*0x720414*/
  return 128; /*0x720419*/
}
} // namespace gamemd

// 0x720420
namespace gamemd {
int sub_720420()
{
  *(unsigned int *)&unk_B0F1F8[520] = 0; /*0x720422*/
  *(unsigned int *)&unk_B0F1F8[524] = 0; /*0x720427*/
  *(unsigned int *)&unk_B0F1F8[528] = 0; /*0x72042c*/
  *(unsigned int *)&unk_B0F1F8[532] = 0; /*0x720431*/
  return 0; /*0x720436*/
}
} // namespace gamemd

// 0x720440
namespace gamemd {
unsigned int ObjectClass::sub_720440()
{
  this->owningHouseIndex0 = 0; /*0x720444*/
  this->chronoLockRemaining = 0; /*0x72044a*/
  (this->q288) = 1; /*0x720450*/
  (this->u8_28A) = 0; /*0x720457*/
  (this->q28C) = 0; /*0x72045d*/
  this->chronoDestCoords[1] = -1; /*0x720463*/
  (this->vtable1) = 0; /*0x72046d*/
  (this->u32_100) = 0; /*0x72046f*/
  (this->q_200) = 0; /*0x720475*/
  return &this->vfptr; /*0x72047c*/
}
} // namespace gamemd

// 0x720960
namespace gamemd {
unsigned int ObjectClass::sub_720960()
{
  this->vfptr = (void *)-1; /*0x720965*/
  this->vfptr1 = (void *)-1; /*0x720967*/
  this->vfptr2 = (void *)-1; /*0x72096a*/
  this->vfptr3 = (void *)255; /*0x72096f*/
  (this->uniqueId) = 0; /*0x720976*/
  (this->q011) = 0; /*0x720979*/
  (this->IsInitialized) = 0; /*0x72097c*/
  this->nextArrayIndex = 0; /*0x72097f*/
  this->referenceCount = 0; /*0x720982*/
  (this->NeedsSaveOrLink) = 1; /*0x720985*/
  (this->alignmentPadding) = 0; /*0x720989*/
  this->abstractFlags = (int)&vt_DynamicVectorClass; /*0x72098c*/
  this->owningHouseIndex = 10; /*0x720993*/
  this->occupant = 0; /*0x72099a*/
  this->fallRate = 0; /*0x72099d*/
  return &this->vfptr; /*0x7209a0*/
}
} // namespace gamemd

// 0x721430
namespace gamemd {
void sub_721430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72143c*/
  *(double *)&unk_B0F1F8[672] = Math::Sqrt(v0 + v0); /*0x72144e*/
}
} // namespace gamemd

// 0x721460
namespace gamemd {
void sub_721460()
{
  dbl_B0F508 = *(double *)&unk_B0F1F8[672] / 60.0; /*0x72146c*/
}
} // namespace gamemd

// 0x721480
namespace gamemd {
void sub_721480()
{
  *(double *)&unk_B0F1F8[728] = 1.0 / dbl_B0F508; /*0x72148c*/
}
} // namespace gamemd

// 0x7214A0
namespace gamemd {
void sub_7214A0()
{
  *(double *)&unk_B0F1F8[720] = 0.0174532925199433 * 45.0; /*0x7214ac*/
}
} // namespace gamemd

// 0x7214C0
namespace gamemd {
void sub_7214C0()
{
  *(double *)&unk_B0F1F8[680] = 0.0174532925199433 * 60.0; /*0x7214cc*/
}
} // namespace gamemd

// 0x7214E0
namespace gamemd {
void sub_7214E0()
{
  dbl_B0F478 = 0.0174532925199433 * 90.0; /*0x7214ec*/
}
} // namespace gamemd

// 0x721500
namespace gamemd {
long long sub_721500()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(*(double *)&unk_B0F1F8[640] - *(double *)&unk_B0F1F8[680]); /*0x721512*/
  result = Math::RoundToInt(v0 * *(double *)&unk_B0F1F8[672] * 0.5); /*0x721526*/
  dword_B0F510 = result; /*0x72152b*/
  return result; /*0x721530*/
}
} // namespace gamemd

// 0x721540
namespace gamemd {
void sub_721540()
{
  *(double *)&unk_B0F1F8[688] = Math::ArcTan((double)dword_B0F510 * 0.00390625); /*0x721557*/
}
} // namespace gamemd

// 0x721570
namespace gamemd {
void sub_721570()
{
  *(double *)&unk_B0F1F8[712] = Math::ArcTan((double)(2 * dword_B0F510) / *(double *)&unk_B0F1F8[672]); /*0x721592*/
}
} // namespace gamemd

// 0x7215A0
namespace gamemd {
long long sub_7215A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F510) + 0.5); /*0x7215bb*/
  dword_B0F500 = result; /*0x7215c0*/
  return result; /*0x7215c6*/
}
} // namespace gamemd

// 0x7215D0
namespace gamemd {
int sub_7215D0()
{
  *(unsigned short *)&unk_B0F1F8[664] = 0; /*0x7215d2*/
  *(unsigned short *)&unk_B0F1F8[666] = 0; /*0x7215d8*/
  return 0; /*0x7215de*/
}
} // namespace gamemd

// 0x7215E0
namespace gamemd {
int sub_7215E0()
{
  *(unsigned int *)&unk_B0F1F8[696] = 0; /*0x7215e2*/
  *(unsigned int *)&unk_B0F1F8[700] = 0; /*0x7215e7*/
  *(unsigned int *)&unk_B0F1F8[704] = 0; /*0x7215ec*/
  return 0; /*0x7215f1*/
}
} // namespace gamemd

// 0x721600
namespace gamemd {
int sub_721600()
{
  *(unsigned int *)&unk_B0F1F8[744] = 0; /*0x721605*/
  *(unsigned int *)&unk_B0F1F8[736] = 128; /*0x72160f*/
  *(unsigned int *)&unk_B0F1F8[740] = 128; /*0x721614*/
  return 128; /*0x721619*/
}
} // namespace gamemd

// 0x721620
namespace gamemd {
int sub_721620()
{
  *(unsigned int *)&unk_B0F1F8[648] = 0; /*0x721622*/
  *(unsigned int *)&unk_B0F1F8[652] = 0; /*0x721627*/
  *(unsigned int *)&unk_B0F1F8[656] = 0; /*0x72162c*/
  *(unsigned int *)&unk_B0F1F8[660] = 0; /*0x721631*/
  return 0; /*0x721636*/
}
} // namespace gamemd

// 0x721640
namespace gamemd {
int sub_721640()
{
  dword_B0F4EC = 0; /*0x721647*/
  dword_B0F4F0 = 0; /*0x72164c*/
  byte_B0F4F4 = 1; /*0x721651*/
  byte_B0F4F5 = 0; /*0x721658*/
  dword_B0F4E8 = (int)&vt_DynamicVectorClass; /*0x72165d*/
  dword_B0F4FC = 10; /*0x721667*/
  dword_B0F4F8 = 0; /*0x721671*/
  return atexit(sub_721680); /*0x72167c*/
}
} // namespace gamemd

// 0x721680
namespace gamemd {
void sub_721680()
{
  dword_B0F4E8 = (int)&vt_VectorClass; /*0x721688*/
  if ( dword_B0F4EC && byte_B0F4F5 ) /*0x72169c*/
  {
    operator delete((void *)(dword_B0F4EC)); /*0x72169f*/
    dword_B0F4EC = 0; /*0x7216a7*/
  }
  byte_B0F4F5 = 0; /*0x7216ad*/
  dword_B0F4F0 = 0; /*0x7216b3*/
}
} // namespace gamemd

// 0x722A20
namespace gamemd {
void E4Recv_722A20::sub_722A20()
{
  unsigned int *v2; // eax
  int i; // ecx
  void **v4; // edi

  v2 = (unsigned int *)this->M244; /*0x722a26*/
  if ( v2 ) /*0x722a2e*/
  {
    for ( i = 0; i <= *v2; *(unsigned int *)(v2[2] + 4 * i - 4) = 0 ) /*0x722a36*/
      ++i; /*0x722a3b*/
    *v2 = 0; /*0x722a47*/
    v4 = (void **)this->M244; /*0x722a49*/
    if ( v4 ) /*0x722a51*/
    {
      operator delete((void *)(v4[2])); /*0x722a57*/
      operator delete((void *)(v4)); /*0x722a5d*/
    }
    this->M244 = 0; /*0x722a65*/
  }
  if ( this->M252 ) /*0x722a6c*/
  {
    operator delete((void *)(this->u32_4))); /*0x722a77*/
    this->M252 = 0; /*0x722a7f*/
  }
  if ( this->M248 ) /*0x722a85*/
  {
    operator delete((void *)(this->u32_4))); /*0x722a90*/
    this->M248 = 0; /*0x722a98*/
  }
  this->ambientSoundController = 0; /*0x722a9e*/
}
} // namespace gamemd

// 0x723510
namespace gamemd {
void E4Recv_723510::sub_723510()
{
  unsigned int *v2; // eax
  int i; // ecx
  void **v4; // edi

  v2 = (unsigned int *)this->M272; /*0x723516*/
  if ( v2 ) /*0x72351e*/
  {
    for ( i = 0; i <= *v2; *(unsigned int *)(v2[2] + 4 * i - 4) = 0 ) /*0x723526*/
      ++i; /*0x72352b*/
    *v2 = 0; /*0x723537*/
    v4 = (void **)this->M272; /*0x723539*/
    if ( v4 ) /*0x723541*/
    {
      operator delete((void *)(v4[2])); /*0x723547*/
      operator delete((void *)(v4)); /*0x72354d*/
    }
    this->M272 = 0; /*0x723555*/
  }
  if ( this->M280 ) /*0x72355c*/
  {
    operator delete((void *)(this->u32_4))); /*0x723567*/
    this->M280 = 0; /*0x72356f*/
  }
  if ( this->M276 ) /*0x723575*/
  {
    operator delete((void *)(this->u32_4))); /*0x723580*/
    this->M276 = 0; /*0x723588*/
  }
  this->M268 = 0; /*0x72358e*/
}
} // namespace gamemd

// 0x7236D0
namespace gamemd {
void nullsub_158()
{
  ; /*0x7236d0*/
}
} // namespace gamemd

// 0x723A90
namespace gamemd {
void sub_723A90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x723a9c*/
  dbl_B0F538 = Math::Sqrt(v0 + v0); /*0x723aae*/
}
} // namespace gamemd

// 0x723AC0
namespace gamemd {
void sub_723AC0()
{
  dbl_B0F588 = dbl_B0F538 / 60.0; /*0x723acc*/
}
} // namespace gamemd

// 0x723AE0
namespace gamemd {
void sub_723AE0()
{
  dbl_B0F570 = 1.0 / dbl_B0F588; /*0x723aec*/
}
} // namespace gamemd

// 0x723B00
namespace gamemd {
void sub_723B00()
{
  dbl_B0F568 = 0.0174532925199433 * 45.0; /*0x723b0c*/
}
} // namespace gamemd

// 0x723B20
namespace gamemd {
void sub_723B20()
{
  dbl_B0F540 = 0.0174532925199433 * 60.0; /*0x723b2c*/
}
} // namespace gamemd

// 0x723B40
namespace gamemd {
void sub_723B40()
{
  dbl_B0F518 = 0.0174532925199433 * 90.0; /*0x723b4c*/
}
} // namespace gamemd

// 0x723B60
namespace gamemd {
long long sub_723B60()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0F518 - dbl_B0F540); /*0x723b72*/
  result = Math::RoundToInt(v0 * dbl_B0F538 * 0.5); /*0x723b86*/
  dword_B0F590 = result; /*0x723b8b*/
  return result; /*0x723b90*/
}
} // namespace gamemd

// 0x723BA0
namespace gamemd {
void sub_723BA0()
{
  dbl_B0F548 = Math::ArcTan((double)dword_B0F590 * 0.00390625); /*0x723bb7*/
}
} // namespace gamemd

// 0x723BD0
namespace gamemd {
void sub_723BD0()
{
  dbl_B0F560 = Math::ArcTan((double)(2 * dword_B0F590) / dbl_B0F538); /*0x723bf2*/
}
} // namespace gamemd

// 0x723C00
namespace gamemd {
long long sub_723C00()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F590) + 0.5); /*0x723c1b*/
  dword_B0F584 = result; /*0x723c20*/
  return result; /*0x723c26*/
}
} // namespace gamemd

// 0x723C30
namespace gamemd {
int sub_723C30()
{
  word_B0F530 = 0; /*0x723c32*/
  word_B0F532 = 0; /*0x723c38*/
  return 0; /*0x723c3e*/
}
} // namespace gamemd

// 0x723C40
namespace gamemd {
int sub_723C40()
{
  dword_B0F550 = 0; /*0x723c42*/
  dword_B0F554 = 0; /*0x723c47*/
  dword_B0F558 = 0; /*0x723c4c*/
  return 0; /*0x723c51*/
}
} // namespace gamemd

// 0x723C60
namespace gamemd {
int sub_723C60()
{
  dword_B0F580 = 0; /*0x723c65*/
  dword_B0F578 = 128; /*0x723c6f*/
  dword_B0F57C = 128; /*0x723c74*/
  return 128; /*0x723c79*/
}
} // namespace gamemd

// 0x723C80
namespace gamemd {
int sub_723C80()
{
  dword_B0F520 = 0; /*0x723c82*/
  dword_B0F524 = 0; /*0x723c87*/
  dword_B0F528 = 0; /*0x723c8c*/
  dword_B0F52C = 0; /*0x723c91*/
  return 0; /*0x723c96*/
}
} // namespace gamemd

// 0x723E40
namespace gamemd {
int sub_723E40()
{
  dword_B0F598 = 0; /*0x723e42*/
  dword_B0F59C = 0; /*0x723e47*/
  dword_B0F5A0 = 0; /*0x723e4c*/
  dword_B0F5A4 = 0; /*0x723e51*/
  return 0; /*0x723e56*/
}
} // namespace gamemd

// 0x723FE0
namespace gamemd {
int sub_723FE0()
{
  dword_B0F5A8 = 0; /*0x723fe2*/
  dword_B0F5AC = 0; /*0x723fe7*/
  dword_B0F5B0 = 0; /*0x723fec*/
  dword_B0F5B4 = 0; /*0x723ff1*/
  return 0; /*0x723ff6*/
}
} // namespace gamemd

// 0x724550
namespace gamemd {
int ObjectClass::sub_724550()
{
  return this->cloakProgress[3]; /*0x724556*/
}
} // namespace gamemd

// 0x724560
namespace gamemd {
int E4Recv_724560::sub_724560(int a2)
{
  this->M560 = a2; /*0x724564*/
  return a2; /*0x72456a*/
}
} // namespace gamemd

// 0x724570
namespace gamemd {
int ObjectClass::sub_724570()
{
  return this->cloakDelayTimer[1]; /*0x724576*/
}
} // namespace gamemd

// 0x724A30
namespace gamemd {
int ObjectClass::sub_724A30(int * a2)
{
  int v2; // ebp
  int v3; // ebx
  int v5; // edi
  int *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v10; // [esp+10h] [ebp-4h]

  v2 = this->cloakDelayTimer[1]; /*0x724a33*/
  v3 = 0; /*0x724a39*/
  if ( v2 <= 0 ) /*0x724a3f*/
    return 0; /*0x724a86*/
  v10 = this->cloakProgress[5]; /*0x724a4b*/
  v10 = v10; /*0x724a4f*/
  v5 = *a2; /*0x724a51*/
  while ( 1 ) /*0x724a55*/
  {
    v6 = (int *)(v10->vtable2; /*0x724a55*/
    if ( v5 >= *v6 && v5 <= *v6 + *(unsigned int *)(v10->vtable4 ) /*0x724a65*/
    {
      v7 = *(unsigned int *)(v10->vtable3; /*0x724a6b*/
      v8 = a2[1]; /*0x724a6e*/
      if ( v8 >= v7 && v8 <= v7 + *(unsigned int *)(v10->uniqueId ) /*0x724a7c*/
        break; /*0x724a7c*/
    }
    ++v3; /*0x724a7e*/
    v10 += 4; /*0x724a7f*/
    if ( v3 >= v2 ) /*0x724a84*/
      return 0; /*0x724a84*/
  }
  return *(unsigned int *)(v10 + 4 * v3); /*0x724a86*/
}
} // namespace gamemd

// 0x724F90
namespace gamemd {
Iostream_init * E4Recv_724F90::__0Iostream_init_QAE_XZ_6()
{
  return this; /*0x724f92*/
}
} // namespace gamemd

// 0x7250C0
namespace gamemd {
void sub_7250C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7250cc*/
  dbl_B0F638 = Math::Sqrt(v0 + v0); /*0x7250de*/
}
} // namespace gamemd

// 0x7250F0
namespace gamemd {
void sub_7250F0()
{
  dbl_B0F748 = dbl_B0F638 / 60.0; /*0x7250fc*/
}
} // namespace gamemd

// 0x725110
namespace gamemd {
void sub_725110()
{
  dbl_B0F6E8 = 1.0 / dbl_B0F748; /*0x72511c*/
}
} // namespace gamemd

// 0x725130
namespace gamemd {
void sub_725130()
{
  dbl_B0F6E0 = 0.0174532925199433 * 45.0; /*0x72513c*/
}
} // namespace gamemd

// 0x725150
namespace gamemd {
void sub_725150()
{
  dbl_B0F688 = 0.0174532925199433 * 60.0; /*0x72515c*/
}
} // namespace gamemd

// 0x725170
namespace gamemd {
void sub_725170()
{
  dbl_B0F5D0 = 0.0174532925199433 * 90.0; /*0x72517c*/
}
} // namespace gamemd

// 0x725190
namespace gamemd {
long long sub_725190()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0F5D0 - dbl_B0F688); /*0x7251a2*/
  result = Math::RoundToInt(v0 * dbl_B0F638 * 0.5); /*0x7251b6*/
  dword_B0F750 = result; /*0x7251bb*/
  return result; /*0x7251c0*/
}
} // namespace gamemd

// 0x7251D0
namespace gamemd {
void sub_7251D0()
{
  dbl_B0F690 = Math::ArcTan((double)dword_B0F750 * 0.00390625); /*0x7251e7*/
}
} // namespace gamemd

// 0x725200
namespace gamemd {
void sub_725200()
{
  dbl_B0F6C0 = Math::ArcTan((double)(2 * dword_B0F750) / dbl_B0F638); /*0x725222*/
}
} // namespace gamemd

// 0x725230
namespace gamemd {
long long sub_725230()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F750) + 0.5); /*0x72524b*/
  dword_B0F744 = result; /*0x725250*/
  return result; /*0x725256*/
}
} // namespace gamemd

// 0x725260
namespace gamemd {
int sub_725260()
{
  word_B0F630 = 0; /*0x725262*/
  word_B0F632 = 0; /*0x725268*/
  return 0; /*0x72526e*/
}
} // namespace gamemd

// 0x725270
namespace gamemd {
int sub_725270()
{
  dword_B0F6B0 = 0; /*0x725272*/
  dword_B0F6B4 = 0; /*0x725277*/
  dword_B0F6B8 = 0; /*0x72527c*/
  return 0; /*0x725281*/
}
} // namespace gamemd

// 0x725290
namespace gamemd {
int sub_725290()
{
  dword_B0F740 = 0; /*0x725295*/
  dword_B0F738 = 128; /*0x72529f*/
  dword_B0F73C = 128; /*0x7252a4*/
  return 128; /*0x7252a9*/
}
} // namespace gamemd

// 0x7252B0
namespace gamemd {
int sub_7252B0()
{
  dword_B0F608 = 0; /*0x7252b2*/
  dword_B0F60C = 0; /*0x7252b7*/
  dword_B0F610 = 0; /*0x7252bc*/
  dword_B0F614 = 0; /*0x7252c1*/
  return 0; /*0x7252c6*/
}
} // namespace gamemd

// 0x7252D0
namespace gamemd {
int sub_7252D0()
{
  dword_B0F724 = 0; /*0x7252d7*/
  dword_B0F728 = 0; /*0x7252dc*/
  byte_B0F72C = 1; /*0x7252e1*/
  byte_B0F72D = 0; /*0x7252e8*/
  dword_B0F720 = (int)&vt_DynamicVectorClass; /*0x7252ed*/
  dword_B0F734 = 10; /*0x7252f7*/
  dword_B0F730 = 0; /*0x725301*/
  return atexit(sub_725310); /*0x72530c*/
}
} // namespace gamemd

// 0x725310
namespace gamemd {
void sub_725310()
{
  dword_B0F720 = (int)&vt_VectorClass; /*0x725318*/
  if ( dword_B0F724 && byte_B0F72D ) /*0x72532c*/
  {
    operator delete((void *)(dword_B0F724)); /*0x72532f*/
    dword_B0F724 = 0; /*0x725337*/
  }
  byte_B0F72D = 0; /*0x72533d*/
  dword_B0F728 = 0; /*0x725343*/
}
} // namespace gamemd

// 0x725350
namespace gamemd {
int sub_725350()
{
  dword_B0F674 = 0; /*0x725357*/
  dword_B0F678 = 0; /*0x72535c*/
  byte_B0F67C = 1; /*0x725361*/
  byte_B0F67D = 0; /*0x725368*/
  dword_B0F670 = (int)&vt_DynamicVectorClass; /*0x72536d*/
  dword_B0F684 = 10; /*0x725377*/
  dword_B0F680 = 0; /*0x725381*/
  return atexit(sub_725390); /*0x72538c*/
}
} // namespace gamemd

// 0x725390
namespace gamemd {
void sub_725390()
{
  dword_B0F670 = (int)&vt_VectorClass; /*0x725398*/
  if ( dword_B0F674 && byte_B0F67D ) /*0x7253ac*/
  {
    operator delete((void *)(dword_B0F674)); /*0x7253af*/
    dword_B0F674 = 0; /*0x7253b7*/
  }
  byte_B0F67D = 0; /*0x7253bd*/
  dword_B0F678 = 0; /*0x7253c3*/
}
} // namespace gamemd

// 0x7253D0
namespace gamemd {
int sub_7253D0()
{
  dword_B0F61C = 0; /*0x7253d7*/
  dword_B0F620 = 0; /*0x7253dc*/
  byte_B0F624 = 1; /*0x7253e1*/
  byte_B0F625 = 0; /*0x7253e8*/
  dword_B0F618 = (int)&vt_DynamicVectorClass; /*0x7253ed*/
  dword_B0F62C = 10; /*0x7253f7*/
  dword_B0F628 = 0; /*0x725401*/
  return atexit(sub_725410); /*0x72540c*/
}
} // namespace gamemd

// 0x725410
namespace gamemd {
void sub_725410()
{
  dword_B0F618 = (int)&vt_VectorClass; /*0x725418*/
  if ( dword_B0F61C && byte_B0F625 ) /*0x72542c*/
  {
    operator delete((void *)(dword_B0F61C)); /*0x72542f*/
    dword_B0F61C = 0; /*0x725437*/
  }
  byte_B0F625 = 0; /*0x72543d*/
  dword_B0F620 = 0; /*0x725443*/
}
} // namespace gamemd

// 0x725450
namespace gamemd {
int sub_725450()
{
  dword_B0F70C = 0; /*0x725457*/
  dword_B0F710 = 0; /*0x72545c*/
  byte_B0F714 = 1; /*0x725461*/
  byte_B0F715 = 0; /*0x725468*/
  dword_B0F708 = (int)&vt_DynamicVectorClass; /*0x72546d*/
  dword_B0F71C = 10; /*0x725477*/
  dword_B0F718 = 0; /*0x725481*/
  return atexit(sub_725490); /*0x72548c*/
}
} // namespace gamemd

// 0x725490
namespace gamemd {
void sub_725490()
{
  dword_B0F708 = (int)&vt_VectorClass; /*0x725498*/
  if ( dword_B0F70C && byte_B0F715 ) /*0x7254ac*/
  {
    operator delete((void *)(dword_B0F70C)); /*0x7254af*/
    dword_B0F70C = 0; /*0x7254b7*/
  }
  byte_B0F715 = 0; /*0x7254bd*/
  dword_B0F710 = 0; /*0x7254c3*/
}
} // namespace gamemd

// 0x7254D0
namespace gamemd {
int sub_7254D0()
{
  g_abs_B0F5BC = 0; /*0x7254d7*/
  g_abs_B0F5C0 = 0; /*0x7254dc*/
  DataGlobal_B0F5C4 = 1; /*0x7254e1*/
  g_abs_B0F5C5 = 0; /*0x7254e8*/
  stru_B0F5B8 = (int)&(void*)(void*)&DynamicVectorClass_AbstractClass___vftable; /*0x7254ed*/
  g_abs_B0F5CC = 10; /*0x7254f7*/
  g_abs_B0F5C8 = 0; /*0x725501*/
  return atexit(sub_725510); /*0x72550c*/
}
} // namespace gamemd

// 0x725510
namespace gamemd {
void sub_725510()
{
  stru_B0F5B8 = (int)&(void*)(void*)&VectorClass_AbstractClass___vftable; /*0x725518*/
  if ( g_abs_B0F5BC && g_abs_B0F5C5 ) /*0x72552c*/
  {
    RA2_OPDEL(g_abs_B0F5BC); /*0x72552f*/
    g_abs_B0F5BC = 0; /*0x725537*/
  }
  g_abs_B0F5C5 = 0; /*0x72553d*/
  g_abs_B0F5C0 = 0; /*0x725543*/
}
} // namespace gamemd

// 0x725550
namespace gamemd {
int sub_725550()
{
  dword_B0F644 = 0; /*0x725557*/
  dword_B0F648 = 0; /*0x72555c*/
  byte_B0F64C = 1; /*0x725561*/
  byte_B0F64D = 0; /*0x725568*/
  dword_B0F640 = (int)&vt_DynamicVectorClass; /*0x72556d*/
  dword_B0F654 = 10; /*0x725577*/
  dword_B0F650 = 0; /*0x725581*/
  return atexit(sub_725590); /*0x72558c*/
}
} // namespace gamemd

// 0x725590
namespace gamemd {
void sub_725590()
{
  dword_B0F640 = (int)&vt_VectorClass; /*0x725598*/
  if ( dword_B0F644 && byte_B0F64D ) /*0x7255ac*/
  {
    operator delete((void *)(dword_B0F644)); /*0x7255af*/
    dword_B0F644 = 0; /*0x7255b7*/
  }
  byte_B0F64D = 0; /*0x7255bd*/
  dword_B0F648 = 0; /*0x7255c3*/
}
} // namespace gamemd

// 0x7255D0
namespace gamemd {
int sub_7255D0()
{
  dword_B0F65C = 0; /*0x7255d7*/
  dword_B0F660 = 0; /*0x7255dc*/
  byte_B0F664 = 1; /*0x7255e1*/
  byte_B0F665 = 0; /*0x7255e8*/
  dword_B0F658 = (int)&vt_DynamicVectorClass; /*0x7255ed*/
  dword_B0F66C = 10; /*0x7255f7*/
  dword_B0F668 = 0; /*0x725601*/
  return atexit(sub_725610); /*0x72560c*/
}
} // namespace gamemd

// 0x725610
namespace gamemd {
void sub_725610()
{
  dword_B0F658 = (int)&vt_VectorClass; /*0x725618*/
  if ( dword_B0F65C && byte_B0F665 ) /*0x72562c*/
  {
    operator delete((void *)(dword_B0F65C)); /*0x72562f*/
    dword_B0F65C = 0; /*0x725637*/
  }
  byte_B0F665 = 0; /*0x72563d*/
  dword_B0F660 = 0; /*0x725643*/
}
} // namespace gamemd

// 0x725650
namespace gamemd {
int sub_725650()
{
  dword_B0F5F4 = 0; /*0x725657*/
  dword_B0F5F8 = 0; /*0x72565c*/
  byte_B0F5FC = 1; /*0x725661*/
  byte_B0F5FD = 0; /*0x725668*/
  dword_B0F5F0 = (int)&vt_DynamicVectorClass; /*0x72566d*/
  dword_B0F604 = 10; /*0x725677*/
  dword_B0F600 = 0; /*0x725681*/
  return atexit(sub_725690); /*0x72568c*/
}
} // namespace gamemd

// 0x725690
namespace gamemd {
void sub_725690()
{
  dword_B0F5F0 = (int)&vt_VectorClass; /*0x725698*/
  if ( dword_B0F5F4 && byte_B0F5FD ) /*0x7256ac*/
  {
    operator delete((void *)(dword_B0F5F4)); /*0x7256af*/
    dword_B0F5F4 = 0; /*0x7256b7*/
  }
  byte_B0F5FD = 0; /*0x7256bd*/
  dword_B0F5F8 = 0; /*0x7256c3*/
}
} // namespace gamemd

// 0x7256D0
namespace gamemd {
int sub_7256D0()
{
  dword_B0F5DC = 0; /*0x7256d7*/
  dword_B0F5E0 = 0; /*0x7256dc*/
  byte_B0F5E4 = 1; /*0x7256e1*/
  byte_B0F5E5 = 0; /*0x7256e8*/
  dword_B0F5D8 = (int)&vt_DynamicVectorClass; /*0x7256ed*/
  dword_B0F5EC = 10; /*0x7256f7*/
  dword_B0F5E8 = 0; /*0x725701*/
  return atexit(sub_725710); /*0x72570c*/
}
} // namespace gamemd

// 0x725710
namespace gamemd {
void sub_725710()
{
  dword_B0F5D8 = (int)&vt_VectorClass; /*0x725718*/
  if ( dword_B0F5DC && byte_B0F5E5 ) /*0x72572c*/
  {
    operator delete((void *)(dword_B0F5DC)); /*0x72572f*/
    dword_B0F5DC = 0; /*0x725737*/
  }
  byte_B0F5E5 = 0; /*0x72573d*/
  dword_B0F5E0 = 0; /*0x725743*/
}
} // namespace gamemd

// 0x725750
namespace gamemd {
int sub_725750()
{
  dword_B0F6CC = 0; /*0x725757*/
  dword_B0F6D0 = 0; /*0x72575c*/
  byte_B0F6D4 = 1; /*0x725761*/
  byte_B0F6D5 = 0; /*0x725768*/
  dword_B0F6C8 = (int)&vt_DynamicVectorClass; /*0x72576d*/
  dword_B0F6DC = 10; /*0x725777*/
  dword_B0F6D8 = 0; /*0x725781*/
  return atexit(sub_725790); /*0x72578c*/
}
} // namespace gamemd

// 0x725790
namespace gamemd {
void sub_725790()
{
  dword_B0F6C8 = (int)&vt_VectorClass; /*0x725798*/
  if ( dword_B0F6CC && byte_B0F6D5 ) /*0x7257ac*/
  {
    operator delete((void *)(dword_B0F6CC)); /*0x7257af*/
    dword_B0F6CC = 0; /*0x7257b7*/
  }
  byte_B0F6D5 = 0; /*0x7257bd*/
  dword_B0F6D0 = 0; /*0x7257c3*/
}
} // namespace gamemd

// 0x7257D0
namespace gamemd {
int sub_7257D0()
{
  dword_B0F6F4 = 0; /*0x7257d7*/
  dword_B0F6F8 = 0; /*0x7257dc*/
  byte_B0F6FC = 1; /*0x7257e1*/
  byte_B0F6FD = 0; /*0x7257e8*/
  dword_B0F6F0 = (int)&vt_DynamicVectorClass; /*0x7257ed*/
  dword_B0F704 = 10; /*0x7257f7*/
  dword_B0F700 = 0; /*0x725801*/
  return atexit(sub_725810); /*0x72580c*/
}
} // namespace gamemd

// 0x725810
namespace gamemd {
void sub_725810()
{
  dword_B0F6F0 = (int)&vt_VectorClass; /*0x725818*/
  if ( dword_B0F6F4 && byte_B0F6FD ) /*0x72582c*/
  {
    operator delete((void *)(dword_B0F6F4)); /*0x72582f*/
    dword_B0F6F4 = 0; /*0x725837*/
  }
  byte_B0F6FD = 0; /*0x72583d*/
  dword_B0F6F8 = 0; /*0x725843*/
}
} // namespace gamemd

// 0x725850
namespace gamemd {
int sub_725850()
{
  DataGlobal_B0F69C = 0; /*0x725857*/
  DataGlobal_B0F6A0 = 0; /*0x72585c*/
  DataGlobal_B0F6A4 = 1; /*0x725861*/
  DataGlobal_B0F6A5 = 0; /*0x725868*/
  stru_B0F698 = (int)&(void*)(void*)&DynamicVectorClass_AbstractClass___vftable; /*0x72586d*/
  DataGlobal_B0F6AC = 10; /*0x725877*/
  g_abs_B0F6A8 = 0; /*0x725881*/
  return atexit(sub_725890); /*0x72588c*/
}
} // namespace gamemd

// 0x725890
namespace gamemd {
void sub_725890()
{
  stru_B0F698 = (int)&(void*)(void*)&VectorClass_AbstractClass___vftable; /*0x725898*/
  if ( DataGlobal_B0F69C && DataGlobal_B0F6A5 ) /*0x7258ac*/
  {
    RA2_OPDEL(DataGlobal_B0F69C); /*0x7258af*/
    DataGlobal_B0F69C = 0; /*0x7258b7*/
  }
  DataGlobal_B0F6A5 = 0; /*0x7258bd*/
  DataGlobal_B0F6A0 = 0; /*0x7258c3*/
}
} // namespace gamemd

// 0x725D90
namespace gamemd {
void sub_725D90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x725d9c*/
  dbl_B0F778 = Math::Sqrt(v0 + v0); /*0x725dae*/
}
} // namespace gamemd

// 0x725DC0
namespace gamemd {
void sub_725DC0()
{
  dbl_B0F7C8 = dbl_B0F778 / 60.0; /*0x725dcc*/
}
} // namespace gamemd

// 0x725DE0
namespace gamemd {
void sub_725DE0()
{
  dbl_B0F7B0 = 1.0 / dbl_B0F7C8; /*0x725dec*/
}
} // namespace gamemd

// 0x725E00
namespace gamemd {
void sub_725E00()
{
  dbl_B0F7A8 = 0.0174532925199433 * 45.0; /*0x725e0c*/
}
} // namespace gamemd

// 0x725E20
namespace gamemd {
void sub_725E20()
{
  dbl_B0F780 = 0.0174532925199433 * 60.0; /*0x725e2c*/
}
} // namespace gamemd

// 0x725E40
namespace gamemd {
void sub_725E40()
{
  dbl_B0F758 = 0.0174532925199433 * 90.0; /*0x725e4c*/
}
} // namespace gamemd

// 0x725E60
namespace gamemd {
long long sub_725E60()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0F758 - dbl_B0F780); /*0x725e72*/
  result = Math::RoundToInt(v0 * dbl_B0F778 * 0.5); /*0x725e86*/
  dword_B0F7D0 = result; /*0x725e8b*/
  return result; /*0x725e90*/
}
} // namespace gamemd

// 0x725EA0
namespace gamemd {
void sub_725EA0()
{
  dbl_B0F788 = Math::ArcTan((double)dword_B0F7D0 * 0.00390625); /*0x725eb7*/
}
} // namespace gamemd

// 0x725ED0
namespace gamemd {
void sub_725ED0()
{
  dbl_B0F7A0 = Math::ArcTan((double)(2 * dword_B0F7D0) / dbl_B0F778); /*0x725ef2*/
}
} // namespace gamemd

// 0x725F00
namespace gamemd {
long long sub_725F00()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F7D0) + 0.5); /*0x725f1b*/
  dword_B0F7C4 = result; /*0x725f20*/
  return result; /*0x725f26*/
}
} // namespace gamemd

// 0x725F30
namespace gamemd {
int sub_725F30()
{
  word_B0F770 = 0; /*0x725f32*/
  word_B0F772 = 0; /*0x725f38*/
  return 0; /*0x725f3e*/
}
} // namespace gamemd

// 0x725F40
namespace gamemd {
int sub_725F40()
{
  dword_B0F790 = 0; /*0x725f42*/
  dword_B0F794 = 0; /*0x725f47*/
  dword_B0F798 = 0; /*0x725f4c*/
  return 0; /*0x725f51*/
}
} // namespace gamemd

// 0x725F60
namespace gamemd {
int sub_725F60()
{
  dword_B0F7C0 = 0; /*0x725f65*/
  dword_B0F7B8 = 128; /*0x725f6f*/
  dword_B0F7BC = 128; /*0x725f74*/
  return 128; /*0x725f79*/
}
} // namespace gamemd

// 0x725F80
namespace gamemd {
int sub_725F80()
{
  dword_B0F760 = 0; /*0x725f82*/
  dword_B0F764 = 0; /*0x725f87*/
  dword_B0F768 = 0; /*0x725f8c*/
  dword_B0F76C = 0; /*0x725f91*/
  return 0; /*0x725f96*/
}
} // namespace gamemd

// 0x7266C0
namespace gamemd {
unsigned int ObjectClass::sub_7266C0(char a2)
{
  this->ambientSoundController[1] |= 1 << a2; /*0x7266cd*/
  return &this->vfptr; /*0x7266d0*/
}
} // namespace gamemd

// 0x726780
namespace gamemd {
char ObjectClass::sub_726780()
{

  return (char)this->nextObject; /*0x726783*/

}
} // namespace gamemd

// 0x726920
namespace gamemd {
int E4Recv_726920::sub_726920(int a2)
{
  this->M44 = a2; /*0x726924*/
  return a2; /*0x726927*/
}
} // namespace gamemd

// 0x726A70
namespace gamemd {
void sub_726A70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x726a7c*/
  dbl_B0F7F8 = Math::Sqrt(v0 + v0); /*0x726a8e*/
}
} // namespace gamemd

// 0x726AA0
namespace gamemd {
void sub_726AA0()
{
  dbl_B0F848 = dbl_B0F7F8 / 60.0; /*0x726aac*/
}
} // namespace gamemd

// 0x726AC0
namespace gamemd {
void sub_726AC0()
{
  dbl_B0F830 = 1.0 / dbl_B0F848; /*0x726acc*/
}
} // namespace gamemd

// 0x726AE0
namespace gamemd {
void sub_726AE0()
{
  dbl_B0F828 = 0.0174532925199433 * 45.0; /*0x726aec*/
}
} // namespace gamemd

// 0x726B00
namespace gamemd {
void sub_726B00()
{
  dbl_B0F800 = 0.0174532925199433 * 60.0; /*0x726b0c*/
}
} // namespace gamemd

// 0x726B20
namespace gamemd {
void sub_726B20()
{
  dbl_B0F7D8 = 0.0174532925199433 * 90.0; /*0x726b2c*/
}
} // namespace gamemd

// 0x726B40
namespace gamemd {
long long sub_726B40()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0F7D8 - dbl_B0F800); /*0x726b52*/
  result = Math::RoundToInt(v0 * dbl_B0F7F8 * 0.5); /*0x726b66*/
  dword_B0F850 = result; /*0x726b6b*/
  return result; /*0x726b70*/
}
} // namespace gamemd

// 0x726B80
namespace gamemd {
void sub_726B80()
{
  dbl_B0F808 = Math::ArcTan((double)dword_B0F850 * 0.00390625); /*0x726b97*/
}
} // namespace gamemd

// 0x726BB0
namespace gamemd {
void sub_726BB0()
{
  dbl_B0F820 = Math::ArcTan((double)(2 * dword_B0F850) / dbl_B0F7F8); /*0x726bd2*/
}
} // namespace gamemd

// 0x726BE0
namespace gamemd {
long long sub_726BE0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F850) + 0.5); /*0x726bfb*/
  dword_B0F844 = result; /*0x726c00*/
  return result; /*0x726c06*/
}
} // namespace gamemd

// 0x726C10
namespace gamemd {
int sub_726C10()
{
  word_B0F7F0 = 0; /*0x726c12*/
  word_B0F7F2 = 0; /*0x726c18*/
  return 0; /*0x726c1e*/
}
} // namespace gamemd

// 0x726C20
namespace gamemd {
int sub_726C20()
{
  dword_B0F810 = 0; /*0x726c22*/
  dword_B0F814 = 0; /*0x726c27*/
  dword_B0F818 = 0; /*0x726c2c*/
  return 0; /*0x726c31*/
}
} // namespace gamemd

// 0x726C40
namespace gamemd {
int sub_726C40()
{
  dword_B0F840 = 0; /*0x726c45*/
  dword_B0F838 = 128; /*0x726c4f*/
  dword_B0F83C = 128; /*0x726c54*/
  return 128; /*0x726c59*/
}
} // namespace gamemd

// 0x726C60
namespace gamemd {
int sub_726C60()
{
  dword_B0F7E0 = 0; /*0x726c62*/
  dword_B0F7E4 = 0; /*0x726c67*/
  dword_B0F7E8 = 0; /*0x726c6c*/
  dword_B0F7EC = 0; /*0x726c71*/
  return 0; /*0x726c76*/
}
} // namespace gamemd

// 0x726FCE
namespace gamemd {
char ObjectClass::_do_always_noconv_codecvt_base_std__MBE_NXZ_20()
{
  return 1; /*0x726fd0*/
}
} // namespace gamemd

// 0x727190
namespace gamemd {
ObjectClass * E4Recv_727190::sub_727190()
{
  int v2; // edi
  char **v3; // esi

  v2 = 0; /*0x727195*/
  v3 = off_8449F8; /*0x727197*/
  while ( _strcmpi((char *)this, *v3) ) /*0x7271aa*/
  {
    ++v3; /*0x7271ac*/
    ++v2; /*0x7271af*/
    if ( (int)v3 >= (int)aPersistent ) /*0x7271b6*/
      return 0; /*0x7271bd*/
  }
  return v2; /*0x7271b8*/
}
} // namespace gamemd

// 0x7271D0
namespace gamemd {
char * sub_7271D0(int a1)
{
  return off_8449F8[a1]; /*0x7271d7*/
}
} // namespace gamemd

// 0x727DC0
namespace gamemd {
void sub_727DC0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x727dcc*/
  dbl_B0F878 = Math::Sqrt(v0 + v0); /*0x727dde*/
}
} // namespace gamemd

// 0x727DF0
namespace gamemd {
void sub_727DF0()
{
  dbl_B0F8C8 = dbl_B0F878 / 60.0; /*0x727dfc*/
}
} // namespace gamemd

// 0x727E10
namespace gamemd {
void sub_727E10()
{
  dbl_B0F8B0 = 1.0 / dbl_B0F8C8; /*0x727e1c*/
}
} // namespace gamemd

// 0x727E30
namespace gamemd {
void sub_727E30()
{
  dbl_B0F8A8 = 0.0174532925199433 * 45.0; /*0x727e3c*/
}
} // namespace gamemd

// 0x727E50
namespace gamemd {
void sub_727E50()
{
  dbl_B0F880 = 0.0174532925199433 * 60.0; /*0x727e5c*/
}
} // namespace gamemd

// 0x727E70
namespace gamemd {
void sub_727E70()
{
  dbl_B0F858 = 0.0174532925199433 * 90.0; /*0x727e7c*/
}
} // namespace gamemd

// 0x727E90
namespace gamemd {
long long sub_727E90()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0F858 - dbl_B0F880); /*0x727ea2*/
  result = Math::RoundToInt(v0 * dbl_B0F878 * 0.5); /*0x727eb6*/
  dword_B0F8D0 = result; /*0x727ebb*/
  return result; /*0x727ec0*/
}
} // namespace gamemd

// 0x727ED0
namespace gamemd {
void sub_727ED0()
{
  dbl_B0F888 = Math::ArcTan((double)dword_B0F8D0 * 0.00390625); /*0x727ee7*/
}
} // namespace gamemd

// 0x727F00
namespace gamemd {
void sub_727F00()
{
  dbl_B0F8A0 = Math::ArcTan((double)(2 * dword_B0F8D0) / dbl_B0F878); /*0x727f22*/
}
} // namespace gamemd

// 0x727F30
namespace gamemd {
long long sub_727F30()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F8D0) + 0.5); /*0x727f4b*/
  dword_B0F8C4 = result; /*0x727f50*/
  return result; /*0x727f56*/
}
} // namespace gamemd

// 0x727F60
namespace gamemd {
int sub_727F60()
{
  word_B0F870 = 0; /*0x727f62*/
  word_B0F872 = 0; /*0x727f68*/
  return 0; /*0x727f6e*/
}
} // namespace gamemd

// 0x727F70
namespace gamemd {
int sub_727F70()
{
  dword_B0F890 = 0; /*0x727f72*/
  dword_B0F894 = 0; /*0x727f77*/
  dword_B0F898 = 0; /*0x727f7c*/
  return 0; /*0x727f81*/
}
} // namespace gamemd

// 0x727F90
namespace gamemd {
int sub_727F90()
{
  dword_B0F8C0 = 0; /*0x727f95*/
  dword_B0F8B8 = 128; /*0x727f9f*/
  dword_B0F8BC = 128; /*0x727fa4*/
  return 128; /*0x727fa9*/
}
} // namespace gamemd

// 0x727FB0
namespace gamemd {
int sub_727FB0()
{
  dword_B0F860 = 0; /*0x727fb2*/
  dword_B0F864 = 0; /*0x727fb7*/
  dword_B0F868 = 0; /*0x727fbc*/
  dword_B0F86C = 0; /*0x727fc1*/
  return 0; /*0x727fc6*/
}
} // namespace gamemd

// 0x728540
namespace gamemd {
char ObjectClass::sub_728540(int a2)
{

  int occupant; // esi
  ObjectClass **p_nextObject; // edx
  int v4; // eax
  int v5; // eax
  __int16 v6; // cx
  __int16 v8; // [esp+Eh] [ebp-2h]

  occupant = this->occupant; /*0x728547*/
  v8 = HIWORD(occupant); /*0x728551*/
  if ( occupant == *(unsigned int *)a2 ) /*0x728555*/
    return 1; /*0x728555*/
  p_nextObject = &this->nextObject; /*0x728565*/
  if ( this->nextObject == (ObjectClass *)-1 ) /*0x72856b*/
    return 1; /*0x7285bd*/
  while ( 1 ) /*0x72856d*/
  {
    v4 = (int)*p_nextObject++; /*0x72856d*/
    v5 = v4 & 7; /*0x728572*/
    v6 = v8 + HIWORD(g_DDrawSurfaceManager.scenario[v5 + 82]); /*0x728588*/
    LOWORD(occupant) = occupant + LOWORD(g_DDrawSurfaceManager.scenario[v5 + 82]); /*0x72859d*/
    v8 = v6; /*0x7285a1*/
    if ( (unsigned short)occupant == *(unsigned short *)a2 && v6 == *(unsigned short *)(a2 + 2) ) /*0x7285ab*/
      break; /*0x7285ab*/
    if ( *p_nextObject == (ObjectClass *)-1 ) /*0x7285b0*/
      return 1; /*0x7285b0*/
  }
  return 0; /*0x7285b4*/

}
} // namespace gamemd

// 0x7287F0
namespace gamemd {
void sub_7287F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7287fc*/
  dbl_B0F8F8 = Math::Sqrt(v0 + v0); /*0x72880e*/
}
} // namespace gamemd

// 0x728820
namespace gamemd {
void sub_728820()
{
  dbl_B0F948 = dbl_B0F8F8 / 60.0; /*0x72882c*/
}
} // namespace gamemd

// 0x728840
namespace gamemd {
void sub_728840()
{
  dbl_B0F930 = 1.0 / dbl_B0F948; /*0x72884c*/
}
} // namespace gamemd

// 0x728860
namespace gamemd {
void sub_728860()
{
  dbl_B0F928 = 0.0174532925199433 * 45.0; /*0x72886c*/
}
} // namespace gamemd

// 0x728880
namespace gamemd {
void sub_728880()
{
  dbl_B0F900 = 0.0174532925199433 * 60.0; /*0x72888c*/
}
} // namespace gamemd

// 0x7288A0
namespace gamemd {
void sub_7288A0()
{
  dbl_B0F8D8 = 0.0174532925199433 * 90.0; /*0x7288ac*/
}
} // namespace gamemd

// 0x7288C0
namespace gamemd {
long long sub_7288C0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0F8D8 - dbl_B0F900); /*0x7288d2*/
  result = Math::RoundToInt(v0 * dbl_B0F8F8 * 0.5); /*0x7288e6*/
  dword_B0F950 = result; /*0x7288eb*/
  return result; /*0x7288f0*/
}
} // namespace gamemd

// 0x728900
namespace gamemd {
void sub_728900()
{
  dbl_B0F908 = Math::ArcTan((double)dword_B0F950 * 0.00390625); /*0x728917*/
}
} // namespace gamemd

// 0x728930
namespace gamemd {
void sub_728930()
{
  dbl_B0F920 = Math::ArcTan((double)(2 * dword_B0F950) / dbl_B0F8F8); /*0x728952*/
}
} // namespace gamemd

// 0x728960
namespace gamemd {
long long sub_728960()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F950) + 0.5); /*0x72897b*/
  dword_B0F944 = result; /*0x728980*/
  return result; /*0x728986*/
}
} // namespace gamemd

// 0x728990
namespace gamemd {
int sub_728990()
{
  word_B0F8F0 = 0; /*0x728992*/
  return 0; /*0x72899e*/
}
} // namespace gamemd

// 0x7289A0
namespace gamemd {
int sub_7289A0()
{
  dword_B0F910 = 0; /*0x7289a2*/
  dword_B0F914 = 0; /*0x7289a7*/
  dword_B0F918 = 0; /*0x7289ac*/
  return 0; /*0x7289b1*/
}
} // namespace gamemd

// 0x7289C0
namespace gamemd {
int sub_7289C0()
{
  dword_B0F940 = 0; /*0x7289c5*/
  dword_B0F938 = 128; /*0x7289cf*/
  dword_B0F93C = 128; /*0x7289d4*/
  return 128; /*0x7289d9*/
}
} // namespace gamemd

// 0x7289E0
namespace gamemd {
int sub_7289E0()
{
  dword_B0F8E0 = 0; /*0x7289e2*/
  dword_B0F8E4 = 0; /*0x7289e7*/
  dword_B0F8E8 = 0; /*0x7289ec*/
  dword_B0F8EC = 0; /*0x7289f1*/
  return 0; /*0x7289f6*/
}
} // namespace gamemd

// 0x7294E0
namespace gamemd {
int E4Recv_7294E0::sub_7294E0()
{

  unsigned int *vtable3; // ecx
  int v3; // eax
  int result; // eax
  int v5; // [esp+4h] [ebp-10h]
  unsigned int v6[2]; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-4h]

  vtable3 = this->M12; /*0x7294e6*/
  v6[0] = vtable3[39]; /*0x7294f5*/
  v6[1] = vtable3[40]; /*0x7294fc*/
  v7 = vtable3[41]; /*0x729508*/
  if ( v7 <= -256 ) /*0x72950c*/
  {
    result = (*(int (**)(unsigned int *, unsigned int))(*vtable3 + 292))(vtable3, 0); /*0x729569*/
    this->q018 = 4; /*0x72956f*/
  }
  else
  {
    v5 = (*(int (**)(unsigned int *))(*vtable3 + 1336))(vtable3); /*0x72951c*/
    LOWORD(v3) = Math::RoundToInt((double)v5 * *(double *)(*(unsigned int *)&g_RulesClass_Instance + 32)); /*0x729527*/
    if ( v3 <= 5 ) /*0x72952f*/
      v3 = 5; /*0x729531*/
    v7 -= v3; /*0x729542*/
    if ( v7 < -256 ) /*0x729546*/
      v7 = -256; /*0x729548*/
    return (*(int (**)(void *, unsigned int *))(*(unsigned int *)this->? + 436))(this->?, v6); /*0x72955a*/
  }
  return result; /*0x729560*/

}
} // namespace gamemd

// 0x72A230
namespace gamemd {
int sub_72A230()
{
  dword_B0F960 = 0; /*0x72a232*/
  dword_B0F964 = 0; /*0x72a237*/
  dword_B0F968 = 0; /*0x72a23c*/
  dword_B0F96C = 0; /*0x72a241*/
  return 0; /*0x72a246*/
}
} // namespace gamemd

// 0x72A250
namespace gamemd {
void sub_72A250()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72a25c*/
  dbl_B0F978 = Math::Sqrt(v0 + v0); /*0x72a26e*/
}
} // namespace gamemd

// 0x72A280
namespace gamemd {
void sub_72A280()
{
  dbl_B0F9C8 = dbl_B0F978 / 60.0; /*0x72a28c*/
}
} // namespace gamemd

// 0x72A2A0
namespace gamemd {
void sub_72A2A0()
{
  dbl_B0F9B0 = 1.0 / dbl_B0F9C8; /*0x72a2ac*/
}
} // namespace gamemd

// 0x72A2C0
namespace gamemd {
void sub_72A2C0()
{
  dbl_B0F9A8 = 0.0174532925199433 * 45.0; /*0x72a2cc*/
}
} // namespace gamemd

// 0x72A2E0
namespace gamemd {
void sub_72A2E0()
{
  dbl_B0F980 = 0.0174532925199433 * 60.0; /*0x72a2ec*/
}
} // namespace gamemd

// 0x72A300
namespace gamemd {
void sub_72A300()
{
  dbl_B0F958 = 0.0174532925199433 * 90.0; /*0x72a30c*/
}
} // namespace gamemd

// 0x72A320
namespace gamemd {
long long sub_72A320()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0F958 - dbl_B0F980); /*0x72a332*/
  result = Math::RoundToInt(v0 * dbl_B0F978 * 0.5); /*0x72a346*/
  dword_B0F9D0 = result; /*0x72a34b*/
  return result; /*0x72a350*/
}
} // namespace gamemd

// 0x72A360
namespace gamemd {
void sub_72A360()
{
  dbl_B0F988 = Math::ArcTan((double)dword_B0F9D0 * 0.00390625); /*0x72a377*/
}
} // namespace gamemd

// 0x72A390
namespace gamemd {
void sub_72A390()
{
  dbl_B0F9A0 = Math::ArcTan((double)(2 * dword_B0F9D0) / dbl_B0F978); /*0x72a3b2*/
}
} // namespace gamemd

// 0x72A3C0
namespace gamemd {
long long sub_72A3C0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F9D0) + 0.5); /*0x72a3db*/
  dword_B0F9C4 = result; /*0x72a3e0*/
  return result; /*0x72a3e6*/
}
} // namespace gamemd

// 0x72A3F0
namespace gamemd {
int sub_72A3F0()
{
  word_B0F970 = 0; /*0x72a3f2*/
  word_B0F972 = 0; /*0x72a3f8*/
  return 0; /*0x72a3fe*/
}
} // namespace gamemd

// 0x72A400
namespace gamemd {
int sub_72A400()
{
  dword_B0F990 = 0; /*0x72a402*/
  dword_B0F994 = 0; /*0x72a407*/
  dword_B0F998 = 0; /*0x72a40c*/
  return 0; /*0x72a411*/
}
} // namespace gamemd

// 0x72A420
namespace gamemd {
int sub_72A420()
{
  dword_B0F9C0 = 0; /*0x72a425*/
  dword_B0F9B8 = 128; /*0x72a42f*/
  dword_B0F9BC = 128; /*0x72a434*/
  return 128; /*0x72a439*/
}
} // namespace gamemd

// 0x72A690
namespace gamemd {
int sub_72A690()
{
  dword_B0FA08 = 0; /*0x72a692*/
  dword_B0FA0C = 0; /*0x72a697*/
  dword_B0FA10 = 0; /*0x72a69c*/
  dword_B0FA14 = 0; /*0x72a6a1*/
  return 0; /*0x72a6a6*/
}
} // namespace gamemd

// 0x72A6B0
namespace gamemd {
void sub_72A6B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72a6bc*/
  dbl_B0FA28 = Math::Sqrt(v0 + v0); /*0x72a6ce*/
}
} // namespace gamemd

// 0x72A6E0
namespace gamemd {
void sub_72A6E0()
{
  dbl_B0FB40 = dbl_B0FA28 / 60.0; /*0x72a6ec*/
}
} // namespace gamemd

// 0x72A700
namespace gamemd {
void sub_72A700()
{
  dbl_B0FAF0 = 1.0 / dbl_B0FB40; /*0x72a70c*/
}
} // namespace gamemd

// 0x72A720
namespace gamemd {
void sub_72A720()
{
  dbl_B0FAE0 = 0.0174532925199433 * 45.0; /*0x72a72c*/
}
} // namespace gamemd

// 0x72A740
namespace gamemd {
void sub_72A740()
{
  dbl_B0FA40 = 0.0174532925199433 * 60.0; /*0x72a74c*/
}
} // namespace gamemd

// 0x72A760
namespace gamemd {
void sub_72A760()
{
  dbl_B0F9F0 = 0.0174532925199433 * 90.0; /*0x72a76c*/
}
} // namespace gamemd

// 0x72A780
namespace gamemd {
long long sub_72A780()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0F9F0 - dbl_B0FA40); /*0x72a792*/
  result = Math::RoundToInt(v0 * dbl_B0FA28 * 0.5); /*0x72a7a6*/
  dword_B0FB58 = result; /*0x72a7ab*/
  return result; /*0x72a7b0*/
}
} // namespace gamemd

// 0x72A7C0
namespace gamemd {
void sub_72A7C0()
{
  dbl_B0FA58 = Math::ArcTan((double)dword_B0FB58 * 0.00390625); /*0x72a7d7*/
}
} // namespace gamemd

// 0x72A7F0
namespace gamemd {
void sub_72A7F0()
{
  dbl_B0FAB0 = Math::ArcTan((double)(2 * dword_B0FB58) / dbl_B0FA28); /*0x72a812*/
}
} // namespace gamemd

// 0x72A820
namespace gamemd {
long long sub_72A820()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0FB58) + 0.5); /*0x72a83b*/
  dword_B0FB38 = result; /*0x72a840*/
  return result; /*0x72a846*/
}
} // namespace gamemd

// 0x72A850
namespace gamemd {
int sub_72A850()
{
  word_B0FA24 = 0; /*0x72a852*/
  word_B0FA26 = 0; /*0x72a858*/
  return 0; /*0x72a85e*/
}
} // namespace gamemd

// 0x72A860
namespace gamemd {
int sub_72A860()
{
  dword_B0FA80 = 0; /*0x72a862*/
  dword_B0FA84 = 0; /*0x72a867*/
  dword_B0FA88 = 0; /*0x72a86c*/
  return 0; /*0x72a871*/
}
} // namespace gamemd

// 0x72A880
namespace gamemd {
int sub_72A880()
{
  dword_B0FB28 = 0; /*0x72a885*/
  dword_B0FB20 = 128; /*0x72a88f*/
  dword_B0FB24 = 128; /*0x72a894*/
  return 128; /*0x72a899*/
}
} // namespace gamemd

// 0x72A8A0
namespace gamemd {
char sub_72A8A0()
{
  byte_B0FB4E = 0; /*0x72a8a2*/
  byte_B0FB4C = -1; /*0x72a8a9*/
  byte_B0FB4D = -1; /*0x72a8ae*/
  return -1; /*0x72a8b3*/
}
} // namespace gamemd

// 0x72A8C0
namespace gamemd {
char sub_72A8C0()
{
  byte_B0FA94 = 72; /*0x72a8c2*/
  word_B0FA95 = 0; /*0x72a8c9*/
  return 0; /*0x72a8d3*/
}
} // namespace gamemd

// 0x72A8E0
namespace gamemd {
void sub_72A8E0()
{
  byte_B0F9FC = 0; /*0x72a8e0*/
  word_B0F9FD = 30034; /*0x72a8e7*/
}
} // namespace gamemd

// 0x72A900
namespace gamemd {
char sub_72A900()
{
  byte_B0FB14 = 72; /*0x72a902*/
  word_B0FB15 = 0; /*0x72a909*/
  return 0; /*0x72a913*/
}
} // namespace gamemd

// 0x72A920
namespace gamemd {
char sub_72A920()
{
  byte_B0FB19 = 72; /*0x72a922*/
  word_B0FB1A = 0; /*0x72a929*/
  return 0; /*0x72a933*/
}
} // namespace gamemd

// 0x72A940
namespace gamemd {
void sub_72A940()
{
  word_B0F9D8 = -11612; /*0x72a940*/
  byte_B0F9DA = -1; /*0x72a94e*/
}
} // namespace gamemd

// 0x72A960
namespace gamemd {
char sub_72A960()
{
  byte_B0FB06 = 0; /*0x72a962*/
  word_B0FB04 = -1; /*0x72a969*/
  return -1; /*0x72a973*/
}
} // namespace gamemd

// 0x72A980
namespace gamemd {
char sub_72A980()
{
  byte_B0FAA2 = 0; /*0x72a982*/
  word_B0FAA0 = -1; /*0x72a989*/
  return -1; /*0x72a993*/
}
} // namespace gamemd

// 0x72A9A0
namespace gamemd {
char sub_72A9A0()
{
  (*((unsigned short *)&(dword_B0FA1C))) = 0; /*0x72a9a2*/
  (((unsigned char *)&(dword_B0FA1C))[2]) = 0; /*0x72a9ac*/
  return 0; /*0x72a9b1*/
}
} // namespace gamemd

// 0x72A9C0
namespace gamemd {
unsigned int * AbstractClass::Copy8Bytes(unsigned int * a1, int * a2)
{
  unsigned int *result; // eax
  int v3; // ecx
  int v4; // edx

  result = a1; /*0x72a9c0*/
  v3 = *a2; /*0x72a9c2*/
  v4 = a2[1]; /*0x72a9c4*/
  *result = v3; /*0x72a9c7*/
  result[1] = v4; /*0x72a9c9*/
  return result; /*0x72a9cc*/
}
} // namespace gamemd

// 0x72A9D0
namespace gamemd {
int sub_72A9D0(int * a1, int * a2)
{
  int result; // eax

  result = *a2; /*0x72a9d0*/
  *a1 = *a2; /*0x72a9d2*/
  a1[1] = a2[1]; /*0x72a9d7*/
  return result; /*0x72a9da*/
}
} // namespace gamemd

// 0x72AA10
namespace gamemd {
int CubicBezierAdvance(unsigned int * a1, int a2, int a3)
{
  int v3; // esi
  int v4; // esi
  int v6; // edx

  v3 = a1[1]; /*0x72aa13*/
  *a1 += a2; /*0x72aa18*/
  a1[1] = a3 + v3; /*0x72aa22*/
  v4 = -2 * a2 + a1[2]; /*0x72aa2c*/
  v6 = -2 * a3 + a1[3]; /*0x72aa33*/
  a1[2] = v4; /*0x72aa35*/
  a1[3] = v6; /*0x72aa38*/
  return -2 * a3; /*0x72aa3b*/
}
} // namespace gamemd

// 0x72AFE0
namespace gamemd {
CCINIClass * sub_72AFE0()
{
  return dword_B0FB64; /*0x72afe5*/
}
} // namespace gamemd

// 0x72B000
namespace gamemd {
CCINIClass * sub_72B000()
{
  return dword_B0FB6C; /*0x72b005*/
}
} // namespace gamemd

// 0x72B020
namespace gamemd {
CCINIClass * sub_72B020()
{
  return dword_B0FB5C; /*0x72b025*/
}
} // namespace gamemd

// 0x72B040
namespace gamemd {
CCINIClass * sub_72B040()
{
  return dword_B0FB74; /*0x72b045*/
}
} // namespace gamemd

// 0x72B330
namespace gamemd {
CCINIClass * sub_72B330()
{
  return dword_B0FB7C; /*0x72b335*/
}
} // namespace gamemd

// 0x72B350
namespace gamemd {
CCINIClass * sub_72B350()
{
  return dword_B0FB84; /*0x72b355*/
}
} // namespace gamemd

// 0x72B370
namespace gamemd {
CCINIClass * sub_72B370()
{
  return dword_B0FB8C; /*0x72b375*/
}
} // namespace gamemd

// 0x72B4F0
namespace gamemd {
CCINIClass * sub_72B4F0()
{
  return dword_B0FB94; /*0x72b4f5*/
}
} // namespace gamemd

// 0x72B510
namespace gamemd {
CCINIClass * sub_72B510()
{
  return dword_B0FB9C; /*0x72b515*/
}
} // namespace gamemd

// 0x72B9B0
namespace gamemd {
char sub_72B9B0()
{
  return byte_B0FD5D; /*0x72b9b5*/
}
} // namespace gamemd

// 0x72B9C0
namespace gamemd {
CCINIClass * sub_72B9C0()
{
  return dword_B0FD60; /*0x72b9c5*/
}
} // namespace gamemd

// 0x72BB90
namespace gamemd {
char sub_72BB90()
{
  return byte_B0FD51; /*0x72bb95*/
}
} // namespace gamemd

// 0x72BBA0
namespace gamemd {
CCINIClass * sub_72BBA0()
{
  return dword_B0FD54; /*0x72bba5*/
}
} // namespace gamemd

// 0x72BD70
namespace gamemd {
char sub_72BD70()
{
  return byte_B0FD45; /*0x72bd75*/
}
} // namespace gamemd

// 0x72BD80
namespace gamemd {
CCINIClass * sub_72BD80()
{
  return dword_B0FD48; /*0x72bd85*/
}
} // namespace gamemd

// 0x72BF50
namespace gamemd {
char sub_72BF50()
{
  return byte_B0FD39; /*0x72bf55*/
}
} // namespace gamemd

// 0x72BF60
namespace gamemd {
CCINIClass * sub_72BF60()
{
  return dword_B0FD3C; /*0x72bf65*/
}
} // namespace gamemd

// 0x72C130
namespace gamemd {
char sub_72C130()
{
  return byte_B0FD2D; /*0x72c135*/
}
} // namespace gamemd

// 0x72C140
namespace gamemd {
CCINIClass * sub_72C140()
{
  return dword_B0FD30; /*0x72c145*/
}
} // namespace gamemd

// 0x72C310
namespace gamemd {
char sub_72C310()
{
  return byte_B0FD21; /*0x72c315*/
}
} // namespace gamemd

// 0x72C320
namespace gamemd {
CCINIClass * sub_72C320()
{
  return dword_B0FD24; /*0x72c325*/
}
} // namespace gamemd

// 0x72C4F0
namespace gamemd {
char sub_72C4F0()
{
  return byte_B0FD15; /*0x72c4f5*/
}
} // namespace gamemd

// 0x72C500
namespace gamemd {
CCINIClass * sub_72C500()
{
  return dword_B0FD18; /*0x72c505*/
}
} // namespace gamemd

// 0x72C6D0
namespace gamemd {
char sub_72C6D0()
{
  return byte_B0FD09; /*0x72c6d5*/
}
} // namespace gamemd

// 0x72C6E0
namespace gamemd {
CCINIClass * sub_72C6E0()
{
  return dword_B0FD0C; /*0x72c6e5*/
}
} // namespace gamemd

// 0x72C8B0
namespace gamemd {
char sub_72C8B0()
{
  return byte_B0FCFD; /*0x72c8b5*/
}
} // namespace gamemd

// 0x72C8C0
namespace gamemd {
CCINIClass * sub_72C8C0()
{
  return dword_B0FD00; /*0x72c8c5*/
}
} // namespace gamemd

// 0x72CA90
namespace gamemd {
char sub_72CA90()
{
  return byte_B0FCF1; /*0x72ca95*/
}
} // namespace gamemd

// 0x72CAA0
namespace gamemd {
CCINIClass * sub_72CAA0()
{
  return dword_B0FCF4; /*0x72caa5*/
}
} // namespace gamemd

// 0x72CC60
namespace gamemd {
char sub_72CC60()
{
  return byte_B0FC7C; /*0x72cc65*/
}
} // namespace gamemd

// 0x72CC70
namespace gamemd {
int sub_72CC70()
{
  return dword_B0FC74; /*0x72cc75*/
}
} // namespace gamemd

// 0x72CE30
namespace gamemd {
char sub_72CE30()
{
  return byte_B0FCE5; /*0x72ce35*/
}
} // namespace gamemd

// 0x72CE40
namespace gamemd {
CCINIClass * sub_72CE40()
{
  return dword_B0FCE8; /*0x72ce45*/
}
} // namespace gamemd

// 0x72CF90
namespace gamemd {
void FileTree_Cleanup()
{
  void *v1; // esi

  if ( DataGlobal_B0FCD9 ) /*0x72cf9a*/
  {
    if ( DataGlobal_B0FCD8 ) /*0x72cfa2*/
    {
      v1 = *(void **)&DataGlobal_B0FA18; /*0x72cfa5*/
      if ( *(unsigned int *)&DataGlobal_B0FA18 ) /*0x72cfad*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&DataGlobal_B0FA18); /*0x72cfb1*/
        operator delete((void *)(v1)); /*0x72cfb7*/
      }
      DataGlobal_B0FCD8 = 0; /*0x72cfbf*/
    }
    *(unsigned int *)&DataGlobal_B0FA18 = 0; /*0x72cfcb*/
    if ( *(unsigned int *)&DataGlobal_B0FCDC ) /*0x72cfd3*/
    {
      operator delete((void *)(*(void **)&DataGlobal_B0FCDC)); /*0x72cfd6*/
      *(unsigned int *)&DataGlobal_B0FCDC = 0; /*0x72cfde*/
    }
    if ( *(unsigned int *)&DataGlobal_B0FCE0 ) /*0x72cfec*/
    {
      (***(void (****)(unsigned int, int))&DataGlobal_B0FCE0)( /*0x72cff2*/
        *(unsigned int *)&DataGlobal_B0FCE0,
        1);
      *(unsigned int *)&DataGlobal_B0FCE0 = 0; /*0x72cff4*/
    }
  }
  DataGlobal_B0FCD9 = 0; /*0x72cffa*/
}
} // namespace gamemd

// 0x72D010
namespace gamemd {
char sub_72D010()
{
  return byte_B0FCD9; /*0x72d015*/
}
} // namespace gamemd

// 0x72D020
namespace gamemd {
CCINIClass * sub_72D020()
{
  return dword_B0FCDC; /*0x72d025*/
}
} // namespace gamemd

// 0x72D1F0
namespace gamemd {
char sub_72D1F0()
{
  return byte_B0FCCE; /*0x72d1f5*/
}
} // namespace gamemd

// 0x72D200
namespace gamemd {
CCINIClass * sub_72D200()
{
  return dword_B0FCD0; /*0x72d205*/
}
} // namespace gamemd

// 0x72D430
namespace gamemd {
char sub_72D430()
{
  return byte_B0FBAC; /*0x72d435*/
}
} // namespace gamemd

// 0x72D440
namespace gamemd {
void * sub_72D440()
{
  return dword_B0FBA4; /*0x72d445*/
}
} // namespace gamemd

// 0x72D800
namespace gamemd {
char sub_72D800()
{
  return byte_B0FBB8; /*0x72d805*/
}
} // namespace gamemd

// 0x72D810
namespace gamemd {
void * sub_72D810()
{
  return dword_B0FBB0; /*0x72d815*/
}
} // namespace gamemd

// 0x72D9A0
namespace gamemd {
int sub_72D9A0()
{
  void *FileSHP; // eax
  char *v1; // ecx

  if ( g_DisplayWidth == 640 ) /*0x72d9af*/
  {
    dword_B0FB48 = LoadFileSHP(off_844CB8, (bool *)&byte_B0FCC8); /*0x72d9c7*/
    dword_B0FB10 = LoadFileSHP(off_844CC4, (bool *)&byte_B0FCCA); /*0x72d9dc*/
    FileSHP = LoadFileSHP(off_844CC8, (bool *)&byte_B0FCCB); /*0x72d9e1*/
    v1 = off_844CD0[0]; /*0x72d9e6*/
  }
  else
  {
    dword_B0FB48 = LoadFileSHP(off_844D4C, (bool *)&byte_B0FCC8); /*0x72da0e*/
    dword_B0FB10 = LoadFileSHP(off_844D54, (bool *)&byte_B0FCCA); /*0x72da23*/
    FileSHP = LoadFileSHP(off_844CCC, (bool *)&byte_B0FCCB); /*0x72da28*/
    v1 = off_844D5C; /*0x72da2d*/
  }
  dword_B0F9F8 = FileSHP; /*0x72d9ec*/
  dword_B0FA6C = LoadFileSHP(v1, (bool *)&byte_B0FCCC); /*0x72da52*/
  LoadPaletteSimple(off_844BE0, &dword_B0FBBC, &dword_B0FBC0); /*0x72da57*/
  LoadPaletteSimple(off_844D50, &dword_B0FCB0, &dword_B0FCB4); /*0x72da6c*/
  LoadPaletteSimple(off_844D58, &dword_B0FCB8, &dword_B0FCBC); /*0x72da81*/
  return LoadPaletteSimple(off_844D60, &dword_B0FCC0, &dword_B0FCC4); /*0x72da9b*/
}
} // namespace gamemd

// 0x72DAB0
namespace gamemd {
void * sub_72DAB0()
{
  return dword_B0FBBC; /*0x72dab5*/
}
} // namespace gamemd

// 0x72DAF0
namespace gamemd {
int sub_72DAF0()
{
  return dword_B0FBC0; /*0x72daf5*/
}
} // namespace gamemd

// 0x72E270
namespace gamemd {
CCINIClass * sub_72E270()
{
  return dword_B0FBC8; /*0x72e275*/
}
} // namespace gamemd

// 0x72E290
namespace gamemd {
CCINIClass * sub_72E290()
{
  return dword_B0FBD0; /*0x72e295*/
}
} // namespace gamemd

// 0x72E2B0
namespace gamemd {
CCINIClass * sub_72E2B0()
{
  return dword_B0FBD8; /*0x72e2b5*/
}
} // namespace gamemd

// 0x72E990
namespace gamemd {
void sub_72E990(int a1, ConvertClass * a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72e99c*/
  v3 = 0; /*0x72e9a0*/
  v2 = *(unsigned int *)dword_B0FC1C; /*0x72e9a7*/
  v3 = *((unsigned int *)dword_B0FC1C + 1); /*0x72e9ae*/
  DrawToSurfaceSHP(a1, dword_B0FBA8, (int)dword_B0FB34, 0, &v2, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72e9d8*/
}
} // namespace gamemd

// 0x72EA70
namespace gamemd {
void sub_72EA70(int a1, ConvertClass * a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72ea7c*/
  v3 = 0; /*0x72ea80*/
  v2 = *(unsigned int *)dword_B0FC1C; /*0x72ea87*/
  v3 = *((unsigned int *)dword_B0FC1C + 1); /*0x72ea8e*/
  DrawToSurfaceSHP(a1, dword_B0FBB4, (int)dword_B0FB1C, 0, &v2, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72eab8*/
}
} // namespace gamemd

// 0x72F4C0
namespace gamemd {
CCINIClass * sub_72F4C0()
{
  return dword_B0FC04; /*0x72f4c5*/
}
} // namespace gamemd

// 0x72F4F0
namespace gamemd {
int sub_72F4F0()
{
  return dword_B0FC00; /*0x72f4f5*/
}
} // namespace gamemd

// 0x72F500
namespace gamemd {
CCINIClass * sub_72F500()
{
  return dword_B0FBF4; /*0x72f505*/
}
} // namespace gamemd

// 0x72F520
namespace gamemd {
CCINIClass * sub_72F520()
{
  return dword_B0FBEC; /*0x72f525*/
}
} // namespace gamemd

// 0x72F530
namespace gamemd {
int sub_72F530()
{
  return dword_B0FBF0; /*0x72f535*/
}
} // namespace gamemd
