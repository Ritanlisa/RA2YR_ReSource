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

// 0x7221B0
namespace gamemd {
void * sub_7221B0()
{
{
  void *result; // eax
  int i; // esi

  result = g_ScenarioClass_Instance; /*0x7221b0*/
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13478) ) /*0x7221b8*/
  {
    result = (void *)g_CrateProcessState; /*0x7221c3*/
    for ( i = 0; i < g_CrateProcessState; ++i ) /*0x7221cc*/
    {
      int v2 = *(_DWORD *)&BuildingClass_InstanceArray->__pad_0[4 * i]; /*0x7221da*/
      ObjectClass *v3 = *(_DWORD *)(v2 + 256); /*0x7221dd*/
      AbstractClass *v4 = *(_DWORD *)(v2 + 264); /*0x7221e3*/
      if ( v3 != -1 ) /*0x7221ec*/
      {
        if ( (int)g_CurrentFrame - v3 >= v4 ) /*0x7221f8*/
          goto LABEL_7; /*0x7221f8*/
        v4 -= (int)g_CurrentFrame - v3; /*0x7221fa*/
      }
      if ( !v4 ) /*0x7221fe*/
      {
LABEL_7:
        PropagateCellOccupancy(v2); /*0x722200*/
        _DWORD * v5 = (_DWORD *)(*(_DWORD *)&BuildingClass_InstanceArray->__pad_0[4 * i] + 256); /*0x722216*/
        AbstractClass *v6 = *(_DWORD *)(*(_DWORD *)&BuildingClass_InstanceArray->__pad_0[4 * i] + 156); /*0x72221c*/
        *v5 = g_CurrentFrame; /*0x722222*/
        int v7 = v7; /*0x722224*/
        v5[2] = v6; /*0x722227*/
      }
      result = (void *)g_CrateProcessState; /*0x72222a*/
    }
  }
  return result; /*0x722236*/
}
} // namespace gamemd

// 0x722C40
namespace gamemd {
void * sub_722C40()
{
{
  void *result; // eax
  int i; // esi
  AbstractClass *v6; // ebx
  wchar_t *v7; // edi
  wchar_t *v8; // eax
  wchar_t **v9; // ecx
  wchar_t *v10; // [esp+8h] [ebp-8h]
  result = g_ScenarioClass_Instance; /*0x722c40*/
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13478) ) /*0x722c48*/
  {
    result = (void *)g_CrateProcessState; /*0x722c57*/
    for ( i = 0; i < g_CrateProcessState; ++i ) /*0x722c60*/
    {
      int v2 = *(_DWORD *)&BuildingClass_InstanceArray->__pad_0[4 * i]; /*0x722c73*/
      int v3 = *(_DWORD *)(v2 + 284); /*0x722c76*/
      int v4 = *(_DWORD *)(v2 + 292); /*0x722c7c*/
      if ( v3 != -1 ) /*0x722c85*/
      {
        if ( (int)g_CurrentFrame - v3 >= v4 ) /*0x722c91*/
          goto LABEL_7; /*0x722c91*/
        v4 -= (int)g_CurrentFrame - v3; /*0x722c93*/
      }
      if ( !v4 ) /*0x722c97*/
      {
LABEL_7:
        RebuildBuildingOccupancy(v2); /*0x722c99*/
        if ( (*(_BYTE *)g_ScenarioClass_Instance & 0x40) != 0 ) /*0x722ca7*/
          double v5 = 0.3; /*0x722ca9*/
        else
          v5 = 1.0; /*0x722cb1*/
        v6 = BuildingClass_InstanceArray; /*0x722cb7*/
        v7 = g_CurrentFrame; /*0x722cbd*/
        v8 = (wchar_t *)Math::RoundToInt(v5); /*0x722cce*/
        v9 = (wchar_t **)(*(_DWORD *)&v6->__pad_0[4 * i] + 284); /*0x722cd6*/
        *v9 = v7; /*0x722cde*/
        v9[1] = v10; /*0x722ce0*/
        v9[2] = v8; /*0x722ce3*/
      }
      result = (void *)g_CrateProcessState; /*0x722ce6*/
    }
  }
  return result; /*0x722cf7*/
}
} // namespace gamemd

// 0x725040
namespace gamemd {
int CompareFunc2Int(unsigned int * a1, unsigned int * a2)
{
{
  if ( *a1 == *a2 )
    return 0; /*0x725050*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
} // namespace gamemd

// 0x725C70
namespace gamemd {
AbstractClass * * sub_725C70()
{
{
  int result; // eax

  result = DataGlobal_B0F6A8; /*0x725c71*/
  int v1 = 0; /*0x725c77*/
  while ( v1 < DataGlobal_B0F6A8 ) /*0x725c7b*/
  {
    _BYTE * v7 = (_BYTE *)*((_DWORD *)DataGlobal_B0F69C + v1); /*0x725c89*/
    result = (*(int (**)(void))(*(_DWORD *)v7 + 68))(); /*0x725c8f*/
    if ( (_BYTE)result ) /*0x725c94*/
    {
      while ( 1 ) /*0x725caa*/
      {
        int v2 = (*(int (__thiscall **)(int *, _BYTE **))(DataGlobal_B0F698 + 16))(&DataGlobal_B0F698, &v7); /*0x725caa*/
        if ( v2 == -1 || v2 >= DataGlobal_B0F6A8 ) /*0x725cba*/
          break; /*0x725cba*/
        if ( v2 < --DataGlobal_B0F6A8 ) /*0x725cc5*/
        {
          do /*0x725cdd*/
          {
            ++v2; /*0x725ccd*/
            *((_DWORD *)DataGlobal_B0F69C + v2 - 1) = *((_DWORD *)DataGlobal_B0F69C + v2); /*0x725cd1*/
          }
          while ( v2 < DataGlobal_B0F6A8 ); /*0x725cdd*/
        }
      }
      result = (*(int (__stdcall **)(_BYTE *))(*(_DWORD *)v7 + 8))(v7); /*0x725ce8*/
      if ( result ) /*0x725ced*/
      {
        int v3 = __RTtypeid(v7); /*0x725cf8*/
        if ( __8type_info_QBEHABV0__Z(v3) /*0x725d61*/
  int v4; // eax
          || (v4 = __RTtypeid(v7), __8type_info_QBEHABV0__Z(v4))
  int v5; // eax
          || (v5 = __RTtypeid(v7), __8type_info_QBEHABV0__Z(v5))
  int v6; // eax
          || (v6 = __RTtypeid(v7), (result = __8type_info_QBEHABV0__Z(v6)) != 0) )
        {
          result = (int)v7; /*0x725d63*/
          v7[144] = 1; /*0x725d67*/
        }
        if ( v7 ) /*0x725d74*/
          result = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x725d7a*/
      }
    }
    else
    {
      ++v1; /*0x725d7f*/
    }
  }
  return result; /*0x725d8c*/
}
} // namespace gamemd

// 0x728200
namespace gamemd {
void sub_728200()
{
{
  __int16 *v2; // esi
  int i; // [esp+8h] [ebp-4h]

  int v0 = g_Tubes_Count; /*0x728203*/
  int v1 = 0; /*0x728209*/
  for ( i = -1; v1 < v0; ++v1 ) /*0x728215*/
  {
    v2 = (__int16 *)*((_DWORD *)g_PathClass_State + v1); /*0x72821e*/
    AbstractClass *v3 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v2 + 18); /*0x72822f*/
    if ( CellClass::IsTunnelEntrance((int)v3) ) /*0x728233*/
    {
      v3[139] = ++i; /*0x72825f*/
    }
    else
    {
      if ( v2 ) /*0x72823e*/
        v2->vt_slot_32(1); /*0x728246*/
      --v0; /*0x728249*/
      v3[139] = -1; /*0x72824a*/
      --v1; /*0x728253*/
    }
  }
}
} // namespace gamemd

// 0x72AA40
namespace gamemd {
unsigned char char LoadMouseClassResources()
{
{
  unsigned __int8 result; // al

  DataGlobal_B0FC80 = LoadFileSHP(DataGlobal_844C44, (bool *)&DataGlobal_B0FC90); /*0x72aa5b*/
  DataGlobal_B0FC84 = LoadFileSHP(DataGlobal_844C48, (bool *)&DataGlobal_B0FC91); /*0x72aa70*/
  DataGlobal_B0FC88 = LoadFileSHP(DataGlobal_844C4C, (bool *)&DataGlobal_B0FC92); /*0x72aa85*/
  DataGlobal_B0FC8C = LoadFileSHP(DataGlobal_844C50, (bool *)&DataGlobal_B0FC93); /*0x72aa9a*/
  DataGlobal_B0FACC = LoadFileSHP(DataGlobal_844C54, (bool *)&DataGlobal_B0FC94); /*0x72aab4*/
  LoadPaletteSimple(DataGlobal_844BA4, &DataGlobal_B0FB64, &DataGlobal_B0FB68); /*0x72aab9*/
  LoadPaletteSimple(DataGlobal_844BA0, &DataGlobal_B0FB6C, &DataGlobal_B0FB70); /*0x72aace*/
  LoadPaletteSimple(DataGlobal_844B9C, &DataGlobal_B0FB5C, &DataGlobal_B0FB60); /*0x72aae3*/
  LoadPaletteSimple(DataGlobal_844BA8, &DataGlobal_B0FB74, &DataGlobal_B0FB78); /*0x72aaf8*/
  result = DataGlobal_B0FBE0; /*0x72aafd*/
  if ( !DataGlobal_B0FBE0 ) /*0x72ab04*/
  {
    AssetClass::ReleaseAndReload(); /*0x72ab0a*/
    DataGlobal_B0FAC4 = LoadFileSHP(DataGlobal_844CD4, (bool *)&DataGlobal_B0FC95); /*0x72ab2a*/
    DataGlobal_B0F9DC = LoadFileSHP(DataGlobal_844CD8, (bool *)&DataGlobal_B0FC96); /*0x72ab3f*/
    DataGlobal_B0FAC0 = LoadFileSHP(DataGlobal_844CDC, (bool *)&DataGlobal_B0FC97); /*0x72ab54*/
    g_DialogControlPool = LoadFileSHP(DataGlobal_844CE0, (bool *)&DataGlobal_B0FC98); /*0x72ab69*/
    DataGlobal_B0FA04 = LoadFileSHP(DataGlobal_844CE4, (bool *)&DataGlobal_B0FC99); /*0x72ab7e*/
    DataGlobal_B0FAF8 = LoadFileSHP(DataGlobal_844CE8, (bool *)&DataGlobal_B0FC9A); /*0x72ab93*/
    DataGlobal_B0FA74 = LoadFileSHP(DataGlobal_844CEC, (bool *)&DataGlobal_B0FC9B); /*0x72aba8*/
    DataGlobal_B0FA38 = LoadFileSHP(DataGlobal_844CF0, (bool *)&DataGlobal_B0FC9C); /*0x72abbd*/
    DataGlobal_B0FAE8 = LoadFileSHP(DataGlobal_844CF4, (bool *)&DataGlobal_B0FC9D); /*0x72abd2*/
    DataGlobal_B0FA54 = LoadFileSHP(DataGlobal_844CF8, (bool *)&DataGlobal_B0FC9E); /*0x72abec*/
    LoadPaletteSimple(DataGlobal_844BE4, &DataGlobal_B0FBC8, &DataGlobal_B0FBCC); /*0x72abf1*/
    LoadPaletteSimple(DataGlobal_844BE8, &DataGlobal_B0FBD0, &DataGlobal_B0FBD4); /*0x72ac06*/
    LoadPaletteSimple(DataGlobal_844BEC, &DataGlobal_B0FBD8, &DataGlobal_B0FBDC); /*0x72ac1b*/
    result = (unsigned __int8)SetupMouseClassResources(g_DDraw_Active, DataGlobal_8A00A8); /*0x72ac2c*/
    DataGlobal_B0FBE0 = 1; /*0x72ac31*/
  }
  return result; /*0x72ac38*/
}
} // namespace gamemd

// 0x72ADE0
namespace gamemd {
void Palette_LoadSimple(char * Source, unsigned int * a2, unsigned int * a3)
{
{
  __int16 v14; // [esp+8h] [ebp-78h]
  MapClass *v3 = a2; /*0x72ade5*/
  _DWORD v16[22]; // [esp+14h] [ebp-6Ch] BYREF
  CCFileClass::Construct(v16, Source); /*0x72adf0*/
  char * v4 = (char *)CCFileClass::ReadEntireFile(v16); /*0x72adfe*/
  if ( v4 ) /*0x72ae06*/
  {
    char * v5 = (char *)__2_YAPAXI_Z(0x300u); /*0x72ae11*/
    if ( v5 ) /*0x72ae1b*/
    {
      _BYTE * v6 = v5 + 2; /*0x72ae1d*/
      int v7 = 256; /*0x72ae20*/
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
    *v3 = v5; /*0x72ae3b*/
    _BYTE * v8 = v4 + 1; /*0x72ae3e*/
    int v9 = 0; /*0x72ae45*/
    while ( 1 ) /*0x72ae5d*/
    {
      HIBYTE(v14) = 4 * *v8; /*0x72ae5d*/
      LOBYTE(v14) = 4 * *(v8 - 1); /*0x72ae64*/
      char v10 = 4 * v8[1]; /*0x72ae6a*/
      v8 += 3; /*0x72ae80*/
      int v11 = *v3 + 3 * (v9 % 256); /*0x72ae83*/
      ++v9; /*0x72ae8a*/
      *(_WORD *)v11 = v14; /*0x72ae91*/
      *(_BYTE *)(v11 + 2) = v10; /*0x72ae94*/
      if ( v9 >= 256 ) /*0x72ae97*/
        break; /*0x72ae97*/
      v3 = a2; /*0x72ae4e*/
    }
    __3_YAXPAX_Z(v4); /*0x72ae9e*/
    if ( __2_YAPAXI_Z(0x188u) ) /*0x72aea8*/
      int v12 = ConvertClass::Construct(*a2, *a2, DSurface_Alternate, 1, 0); /*0x72aecb*/
    else
      v12 = 0; /*0x72aed2*/
    *a3 = v12; /*0x72aedb*/
  }
  v16[0] = &vt_CCFileClass; /*0x72aee1*/
  int v18 = 0; /*0x72aee9*/
  _BYTE v17[12]; // [esp+6Ch] [ebp-14h] BYREF
  Vector::Clear((int)v17); /*0x72aef1*/
  v16[0] = &off_7E1668; /*0x72aefa*/
  return BufferIOFileClass::Dtor(v16); /*0x72af07*/
}
} // namespace gamemd

// 0x72DAA0
namespace gamemd {
void CleanupEVASystem()
{
// Microsoft VisualC 2-14/net runtime
{
  CleanupEVASystem_Cleanup(); /*0x72daa0*/
  if ( DataGlobal_B0FCB0 ) /*0x72dcfa*/
  {
    __3_YAXPAX_Z(DataGlobal_B0FCB0); /*0x72dcfd*/
    DataGlobal_B0FCB0 = 0; /*0x72dd05*/
  }
  if ( DataGlobal_B0FCB4 ) /*0x72dd13*/
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FCB4)(DataGlobal_B0FCB4, 1); /*0x72dd19*/
    DataGlobal_B0FCB4 = 0; /*0x72dd1b*/
  }
  if ( DataGlobal_B0FCB8 ) /*0x72dd28*/
  {
    __3_YAXPAX_Z(DataGlobal_B0FCB8); /*0x72dd2b*/
    DataGlobal_B0FCB8 = 0; /*0x72dd33*/
  }
  if ( DataGlobal_B0FCBC ) /*0x72dd41*/
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FCBC)(DataGlobal_B0FCBC, 1); /*0x72dd47*/
    DataGlobal_B0FCBC = 0; /*0x72dd49*/
  }
  if ( DataGlobal_B0FCC0 ) /*0x72dd56*/
  {
    __3_YAXPAX_Z(DataGlobal_B0FCC0); /*0x72dd59*/
    DataGlobal_B0FCC0 = 0; /*0x72dd61*/
  }
  if ( DataGlobal_B0FCC4 ) /*0x72dd6f*/
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FCC4)(DataGlobal_B0FCC4, 1); /*0x72dd75*/
    DataGlobal_B0FCC4 = 0; /*0x72dd77*/
  }
  if ( DataGlobal_B0FBBC ) /*0x72dd84*/
  {
    __3_YAXPAX_Z(DataGlobal_B0FBBC); /*0x72dd87*/
    DataGlobal_B0FBBC = 0; /*0x72dd8f*/
  }
  if ( DataGlobal_B0FBC0 ) /*0x72dd9d*/
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBC0)(DataGlobal_B0FBC0, 1); /*0x72dda3*/
    DataGlobal_B0FBC0 = 0; /*0x72dda5*/
  }
}
} // namespace gamemd

// 0x72DFB0
namespace gamemd {
int * * LoadingScreen_InitResources()
{
{
  int *result; // eax

  if ( !DataGlobal_B0FBE0 ) /*0x72dfba*/
    goto LABEL_3; /*0x72dfba*/
  DataGlobal_B0FBE0 = 0; /*0x72dfc0*/
  LoadingScreen::DestroyFileTrees(); /*0x72dfc6*/
  LoadingScreen::CleanupObjects(); /*0x72dfcb*/
  __3_YAXPAX_Z(DataGlobal_B0FC10); /*0x72dfd6*/
  DataGlobal_B0FC10 = 0; /*0x72dfe1*/
  __3_YAXPAX_Z(DataGlobal_B0FC14); /*0x72dfe8*/
  DataGlobal_B0FC14 = 0; /*0x72dff3*/
  __3_YAXPAX_Z(DataGlobal_B0FC18); /*0x72dffa*/
  DataGlobal_B0FC18 = 0; /*0x72e004*/
  __3_YAXPAX_Z(g_GadgetAnimState); /*0x72e00b*/
  g_GadgetAnimState = 0; /*0x72e016*/
  __3_YAXPAX_Z(DataGlobal_B0FC20); /*0x72e01d*/
  DataGlobal_B0FC20 = 0; /*0x72e028*/
  __3_YAXPAX_Z(DataGlobal_B0FC24); /*0x72e02f*/
  DataGlobal_B0FC24 = 0; /*0x72e039*/
  __3_YAXPAX_Z(DataGlobal_B0FC28); /*0x72e040*/
  DataGlobal_B0FC28 = 0; /*0x72e04b*/
  __3_YAXPAX_Z(DataGlobal_B0FC2C); /*0x72e052*/
  DataGlobal_B0FC2C = 0; /*0x72e05a*/
  result = (int *)ReleaseLoadingResources(); /*0x72e060*/
  if ( !DataGlobal_B0FBE0 ) /*0x72e06b*/
  {
LABEL_3:
    AssetClass::ReleaseAndReload(); /*0x72e071*/
    DataGlobal_B0FAC4 = LoadFileSHP(DataGlobal_844CD4, (bool *)&DataGlobal_B0FC95); /*0x72e091*/
    DataGlobal_B0F9DC = LoadFileSHP(DataGlobal_844CD8, (bool *)&DataGlobal_B0FC96); /*0x72e0a6*/
    DataGlobal_B0FAC0 = LoadFileSHP(DataGlobal_844CDC, (bool *)&DataGlobal_B0FC97); /*0x72e0bb*/
    g_DialogControlPool = LoadFileSHP(DataGlobal_844CE0, (bool *)&DataGlobal_B0FC98); /*0x72e0d0*/
    DataGlobal_B0FA04 = LoadFileSHP(DataGlobal_844CE4, (bool *)&DataGlobal_B0FC99); /*0x72e0e5*/
    DataGlobal_B0FAF8 = LoadFileSHP(DataGlobal_844CE8, (bool *)&DataGlobal_B0FC9A); /*0x72e0fa*/
    DataGlobal_B0FA74 = LoadFileSHP(DataGlobal_844CEC, (bool *)&DataGlobal_B0FC9B); /*0x72e10f*/
    DataGlobal_B0FA38 = LoadFileSHP(DataGlobal_844CF0, (bool *)&DataGlobal_B0FC9C); /*0x72e124*/
    DataGlobal_B0FAE8 = LoadFileSHP(DataGlobal_844CF4, (bool *)&DataGlobal_B0FC9D); /*0x72e139*/
    DataGlobal_B0FA54 = LoadFileSHP(DataGlobal_844CF8, (bool *)&DataGlobal_B0FC9E); /*0x72e153*/
    LoadPaletteSimple(DataGlobal_844BE4, &DataGlobal_B0FBC8, &DataGlobal_B0FBCC); /*0x72e158*/
    LoadPaletteSimple(DataGlobal_844BE8, &DataGlobal_B0FBD0, &DataGlobal_B0FBD4); /*0x72e16d*/
    LoadPaletteSimple(DataGlobal_844BEC, &DataGlobal_B0FBD8, &DataGlobal_B0FBDC); /*0x72e182*/
    result = SetupMouseClassResources(g_DDraw_Active, DataGlobal_8A00A8); /*0x72e193*/
    DataGlobal_B0FBE0 = 1; /*0x72e198*/
  }
  return result; /*0x72e19f*/
}
} // namespace gamemd

// 0x72E2D0
namespace gamemd {
void DrawScoreScreenStats(ConvertClass * aP0, int a2)
{
{
  ObjectClass *result; // eax

  result = *(ObjectClass **)&stru_89E138[8044]; /*0x72e2d0*/
  if ( *(int *)&stru_89E138[8044] >= 1024 ) /*0x72e2e3*/
  {
    int v5 = **(_DWORD **)&stru_B05488[42900]; /*0x72e2fc*/
    int v6 = *(_DWORD *)(*(_DWORD *)&stru_B05488[42900] + 4); /*0x72e300*/
    int v15 = **(_DWORD **)&stru_B05488[42904] + *(_DWORD *)(*(_DWORD *)&stru_B05488[42904] + 8); /*0x72e309*/
    int v7 = *(_DWORD *)aP0->__pad_0; /*0x72e315*/
  int v16; // [esp+50h] [ebp-14h]
    v16 = *(_DWORD *)(*(_DWORD *)&stru_B05488[42916] + 4) /*0x72e317*/
        + *(_DWORD *)(*(_DWORD *)&stru_B05488[42916] + 12);
    int v17 = 0; /*0x72e31d*/
    int v18 = 0; /*0x72e321*/
    int v19 = v5; /*0x72e32e*/
    int v20 = v6; /*0x72e332*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v7 + 16))(aP0, &v17, a2, 0); /*0x72e336*/
    int v8 = *(_DWORD *)aP0->__pad_0; /*0x72e339*/
    v18 = 0; /*0x72e342*/
    v19 = 800; /*0x72e34b*/
    v17 = v5; /*0x72e353*/
    v20 = v6; /*0x72e357*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v8 + 16))(aP0, &v17, a2, 0); /*0x72e35b*/
    int v9 = *(_DWORD *)aP0->__pad_0; /*0x72e35e*/
    v18 = 0; /*0x72e366*/
    v17 = v15; /*0x72e36f*/
    v19 = v5; /*0x72e377*/
    v20 = v6; /*0x72e37b*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v9 + 16))(aP0, &v17, a2, 0); /*0x72e37f*/
    int v10 = *(_DWORD *)aP0->__pad_0; /*0x72e382*/
    v20 = 600; /*0x72e38d*/
    v17 = v15; /*0x72e397*/
    v18 = v6; /*0x72e39f*/
    v19 = v5; /*0x72e3a3*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v10 + 16))(aP0, &v17, a2, 0); /*0x72e3a7*/
    v19 = v5; /*0x72e3af*/
    v17 = v15; /*0x72e3bb*/
    v20 = 600; /*0x72e3c5*/
    int v11 = *(_DWORD *)aP0->__pad_0; /*0x72e3c9*/
    v18 = v16; /*0x72e3cf*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v11 + 16))(aP0, &v17, a2, 0); /*0x72e3d3*/
    v19 = 800; /*0x72e3e5*/
    int v12 = *(_DWORD *)aP0->__pad_0; /*0x72e3e9*/
    v17 = v5; /*0x72e3ef*/
    v18 = v16; /*0x72e3f3*/
    v20 = v6; /*0x72e3f7*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v12 + 16))(aP0, &v17, a2, 0); /*0x72e3fb*/
    v17 = 0; /*0x72e40a*/
    int v13 = *(_DWORD *)aP0->__pad_0; /*0x72e40e*/
    v18 = v16; /*0x72e414*/
    v19 = v5; /*0x72e418*/
    v20 = v6; /*0x72e41c*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v13 + 16))(aP0, &v17, a2, 0); /*0x72e420*/
    int v14 = *(_DWORD *)aP0->__pad_0; /*0x72e423*/
    v17 = 0; /*0x72e42c*/
    v20 = 600; /*0x72e435*/
    v18 = v6; /*0x72e43d*/
    v19 = v5; /*0x72e441*/
    return (*(int (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v14 + 16))(aP0, &v17, a2, 0); /*0x72e445*/
  }
  return (int)result->__pad_0; /*0x72e44a*/
}
} // namespace gamemd

// 0x72E450
namespace gamemd {
AbstractClass * * RenderScoreScreen(ConvertClass * a1, int * a2, char a3)
{
{
  int i; // [esp+Ch] [ebp-14h]

  if ( !stru_B05488[42840] ) /*0x72e460*/
  {
    AssetClass::ReleaseAndReload(); /*0x72e462*/
    Render_Render_72EB50(); /*0x72e467*/
    LoadPaletteSimple( /*0x72e47c*/
      *(char **)&stru_830620[83396],
      &stru_B05488[42816],
      &stru_B05488[42820]);
    LoadPaletteSimple( /*0x72e491*/
      *(char **)&stru_830620[83400],
      &stru_B05488[42824],
      &stru_B05488[42828]);
    LoadPaletteSimple( /*0x72e4a6*/
      *(char **)&stru_830620[83404],
      &stru_B05488[42832],
      &stru_B05488[42836]);
    SetupMouseClassResources(*(int *)&stru_89E138[8044], *(int *)&stru_89E138[8048]); /*0x72e4b7*/
    stru_B05488[42840] = 1; /*0x72e4bc*/
  }
  DrawScoreScreenStats(a1, (int)a2); /*0x72e4c9*/
  int v5 = a2[1]; /*0x72e4d0*/
  _DWORD v13[2]; // [esp+10h] [ebp-10h] BYREF
  v13[0] = *a2; /*0x72e4d3*/
  int v6 = a2[2]; /*0x72e4d7*/
  int v7 = a2[3]; /*0x72e4da*/
  int v11 = 0; /*0x72e4e4*/
  i = 0; /*0x72e4e8*/
  v13[1] = v5; /*0x72e4ec*/
  int v14 = v6; /*0x72e4f0*/
  int v15 = v7; /*0x72e4f4*/
  if ( v6 > 800 ) /*0x72e4f8*/
    v14 = (v6 - 800) / 2 + 800; /*0x72e509*/
  if ( v7 > 600 ) /*0x72e513*/
    v15 = (v7 - 600) / 2 + 600; /*0x72e525*/
  v11 = **(_DWORD **)&stru_B05488[42904]; /*0x72e537*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42904] + 4); /*0x72e53e*/
  DrawToSurfaceSHP( /*0x72e56a*/
    (int)a1,
    *(int *)&stru_B05488[42820],
    *(ConvertClass **)&stru_B05488[42608],
    0,
    (ConvertClass *)&v11,
    (ConvertClass *)v13,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  int v8 = 0; /*0x72e574*/
  v11 = **(_DWORD **)&stru_B05488[42908]; /*0x72e578*/
  int v9 = *(_DWORD *)&stru_B05488[42392]; /*0x72e57f*/
  for ( i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42908] + 4); /*0x72e58a*/
        v8 < *(int *)&stru_B05488[42392];
        v9 = *(_DWORD *)&stru_B05488[42392] )
  {
    DrawToSurfaceSHP( /*0x72e5c1*/
      (int)a1,
      *(int *)&stru_B05488[42828],
      *(ConvertClass **)&stru_B05488[42476],
      0,
      (ConvertClass *)&v11,
      (ConvertClass *)v13,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    ++v8; /*0x72e5d4*/
    i += *(_DWORD *)(*(_DWORD *)&stru_B05488[42908] + 12); /*0x72e5d5*/
  }
  if ( !a3 ) /*0x72e5e8*/
  {
    int v10 = 0; /*0x72e5f0*/
    v11 = **(_DWORD **)&stru_B05488[42888]; /*0x72e5f6*/
    i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42888] + 4); /*0x72e5fd*/
    if ( v9 > 0 ) /*0x72e601*/
    {
      do /*0x72e65a*/
      {
        DrawToSurfaceSHP( /*0x72e63a*/
          (int)a1,
          *(int *)&stru_B05488[42836],
          *(ConvertClass **)&stru_B05488[42556],
          0xAu,
          (ConvertClass *)&v11,
          (ConvertClass *)v13,
          (ConvertClass *)0x400,
          0,
          0,
          0,
          (ConvertClass *)0x3E8,
          0,
          0,
          0,
          0,
          0);
        ++v10; /*0x72e653*/
        i += *(_DWORD *)(*(_DWORD *)&stru_B05488[42888] + 12); /*0x72e654*/
      }
      while ( v10 < *(int *)&stru_B05488[42392] ); /*0x72e65a*/
    }
  }
  v11 = **(_DWORD **)&stru_B05488[42912]; /*0x72e663*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42912] + 4); /*0x72e688*/
  DrawToSurfaceSHP( /*0x72e69f*/
    (int)a1,
    *(int *)&stru_B05488[42820],
    *(ConvertClass **)&stru_B05488[42416],
    0,
    (ConvertClass *)&v11,
    (ConvertClass *)v13,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v11 = **(_DWORD **)&stru_B05488[42916]; /*0x72e6ad*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42916] + 4); /*0x72e6b9*/
  if ( *(_DWORD *)&stru_89E138[8044] == 640 ) /*0x72e6c2*/
    DrawToSurfaceSHP( /*0x72e6ec*/
      (int)a1,
      *(int *)&stru_B05488[42820],
      *(ConvertClass **)&stru_B05488[42592],
      0,
      (ConvertClass *)&v11,
      (ConvertClass *)v13,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  else
    DrawToSurfaceSHP( /*0x72e71f*/
      (int)a1,
      *(int *)&stru_B05488[42820],
      *(ConvertClass **)&stru_B05488[42444],
      0,
      (ConvertClass *)&v11,
      (ConvertClass *)v13,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
}
} // namespace gamemd

// 0x72EC70
namespace gamemd {
int * * MouseClass_SetupResources(int a1, int a2)
{
{
  int *result; // eax

  int v35 = 0; /*0x72ec81*/
  int v34 = a1; /*0x72ec85*/
  if ( a1 >= 1024 ) /*0x72ec89*/
  {
    v35 = (a1 - 800) / 2; /*0x72ec9a*/
    v34 = a1 - v35; /*0x72ec9e*/
  }
  int v2 = 0; /*0x72eca2*/
  int v37 = a2; /*0x72ecaa*/
  int v36 = a2; /*0x72ecae*/
  if ( a2 >= 768 ) /*0x72ecb2*/
  {
    v2 = (a2 - 600) / 2; /*0x72ecc1*/
    v37 = a2 - v2; /*0x72ecc5*/
    v36 = a2 - 2 * v2; /*0x72ecd2*/
  }
  bool v32 = a1 == 640; /*0x72eceb*/
  bool v33 = a2 == 480; /*0x72ecf9*/
  if ( a1 == 640 ) /*0x72ecfd*/
    int v3 = *((__int16 *)g_DialogControlPool + 1); /*0x72ecff*/
  else
    v3 = *((__int16 *)DataGlobal_B0FA04 + 1); /*0x72ed05*/
  if ( a2 == 480 ) /*0x72ed0b*/
    int v4 = *((__int16 *)g_DialogControlPool + 2); /*0x72ed0d*/
  else
    v4 = *((__int16 *)DataGlobal_B0FA04 + 2); /*0x72ed13*/
  int * v5 = (int *)__2_YAPAXI_Z(0x10u); /*0x72ed19*/
  if ( v5 ) /*0x72ed23*/
  {
    v5[1] = v2; /*0x72ed29*/
    *v5 = v35; /*0x72ed2c*/
    v5[2] = v3; /*0x72ed2e*/
    v5[3] = v4; /*0x72ed31*/
    g_GadgetAnimState = v5; /*0x72ed34*/
  }
  else
  {
    g_GadgetAnimState = 0; /*0x72ed3b*/
  }
  int v6 = *((__int16 *)DataGlobal_B0FAF8 + 1); /*0x72ed4c*/
  int v7 = *((__int16 *)DataGlobal_B0FAF8 + 2); /*0x72ed50*/
  int v8 = v34 - v6; /*0x72ed54*/
  _DWORD * v9 = __2_YAPAXI_Z(0x10u); /*0x72ed56*/
  if ( v9 ) /*0x72ed60*/
  {
    *v9 = v8; /*0x72ed62*/
    v9[1] = v2; /*0x72ed64*/
    v9[2] = v6; /*0x72ed67*/
    v9[3] = v7; /*0x72ed6a*/
    DataGlobal_B0FC20 = v9; /*0x72ed6d*/
  }
  else
  {
    DataGlobal_B0FC20 = 0; /*0x72ed74*/
  }
  int v10 = *((__int16 *)DataGlobal_B0FAC0 + 2); /*0x72ed86*/
  _DWORD * v11 = __2_YAPAXI_Z(0x10u); /*0x72ed8a*/
  if ( v11 ) /*0x72ed94*/
  {
    *v11 = v8; /*0x72ed96*/
    v11[1] = v2; /*0x72ed98*/
    v11[2] = v6; /*0x72ed9b*/
    v11[3] = v10; /*0x72ed9e*/
    DataGlobal_B0FC18 = v11; /*0x72eda1*/
  }
  else
  {
    DataGlobal_B0FC18 = 0; /*0x72eda8*/
  }
  int v12 = v2 + *((_DWORD *)DataGlobal_B0FC20 + 3); /*0x72edc2*/
  int v13 = *((__int16 *)DataGlobal_B0FA74 + 2); /*0x72edc4*/
  TechnoTypeClass *v14 = __2_YAPAXI_Z(0x10u); /*0x72edc8*/
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
  DataGlobal_B0FC24 = v14; /*0x72ede9*/
  int v15 = v14[1]; /*0x72edf1*/
  int v16 = *((__int16 *)DataGlobal_B0FAC4 + 1); /*0x72edf4*/
  int v17 = *((__int16 *)DataGlobal_B0FAC4 + 2); /*0x72edf8*/
  int v18 = *v14 + v14[2] - v16; /*0x72ee02*/
  int * v19 = (int *)__2_YAPAXI_Z(0x10u); /*0x72ee04*/
  if ( v19 ) /*0x72ee0e*/
  {
    *v19 = v18; /*0x72ee10*/
    v19[1] = v15; /*0x72ee12*/
    v19[2] = v16; /*0x72ee15*/
    v19[3] = v17; /*0x72ee18*/
    DataGlobal_B0FC10 = v19; /*0x72ee1b*/
  }
  else
  {
    DataGlobal_B0FC10 = 0; /*0x72ee22*/
  }
  int v20 = *((__int16 *)DataGlobal_B0F9DC + 1); /*0x72ee33*/
  int v21 = *((__int16 *)DataGlobal_B0F9DC + 2); /*0x72ee37*/
  int v22 = *((_DWORD *)DataGlobal_B0FC24 + 1) + *((_DWORD *)DataGlobal_B0FC24 + 3) - v21; /*0x72ee48*/
  _DWORD * v23 = __2_YAPAXI_Z(0x10u); /*0x72ee4a*/
  if ( v23 ) /*0x72ee54*/
  {
    v23[1] = v22; /*0x72ee5a*/
    v23[2] = v20; /*0x72ee5f*/
    *v23 = v34 - v20; /*0x72ee62*/
    v23[3] = v21; /*0x72ee64*/
    DataGlobal_B0FC14 = v23; /*0x72ee67*/
  }
  else
  {
    DataGlobal_B0FC14 = 0; /*0x72ee6e*/
  }
  DataGlobal_B0FA20 = (v36 - *((_DWORD *)DataGlobal_B0FC20 + 3)) / *((_DWORD *)DataGlobal_B0FC24 + 3); /*0x72ee95*/
  int v24 = DataGlobal_B0FA20 * *((_DWORD *)DataGlobal_B0FC24 + 3); /*0x72ee9d*/
  int v25 = v24 + *((_DWORD *)DataGlobal_B0FC20 + 3); /*0x72eeab*/
  int v26 = *((__int16 *)DataGlobal_B0FA38 + 1); /*0x72eead*/
  int v27 = v24 + *((_DWORD *)DataGlobal_B0FC24 + 1); /*0x72eeb1*/
  _DWORD * v28 = __2_YAPAXI_Z(0x10u); /*0x72eeb3*/
  if ( v28 ) /*0x72eebd*/
  {
    v28[1] = v27; /*0x72eec3*/
    *v28 = v34 - v26; /*0x72eeca*/
    v28[2] = v26; /*0x72eecc*/
    v28[3] = v36 - v25; /*0x72eecf*/
    DataGlobal_B0FC28 = v28; /*0x72eed2*/
  }
  else
  {
    DataGlobal_B0FC28 = 0; /*0x72eed9*/
  }
  if ( v32 ) /*0x72eef4*/
    int v29 = *((__int16 *)DataGlobal_B0FAE8 + 1); /*0x72eef6*/
  else
    v29 = *((__int16 *)DataGlobal_B0FA54 + 1); /*0x72eefc*/
  if ( v33 ) /*0x72ef06*/
    int v30 = *((__int16 *)DataGlobal_B0FAE8 + 2); /*0x72ef08*/
  else
    v30 = *((__int16 *)DataGlobal_B0FA54 + 2); /*0x72ef0e*/
  result = (int *)__2_YAPAXI_Z(0x10u); /*0x72ef14*/
  if ( result ) /*0x72ef1e*/
  {
    result[2] = v29; /*0x72ef24*/
    *result = v35; /*0x72ef27*/
    result[3] = v30; /*0x72ef2f*/
    result[1] = v37 - v30; /*0x72ef34*/
    DataGlobal_B0FC2C = result; /*0x72ef38*/
  }
  else
  {
    DataGlobal_B0FC2C = 0; /*0x72ef45*/
  }
  return result; /*0x72ef32*/
}
} // namespace gamemd

// 0x72F540
namespace gamemd {
AbstractClass * * RenderCreditsScreen(int a1, ConvertClass * a2, char a3)
{
{
  int i; // [esp+14h] [ebp-24h]

  if ( !stru_B05488[42884] ) /*0x72f552*/
  {
    LoadingScreen::LoadSHPs(); /*0x72f554*/
    Sides::MixFileYuriFiles3(); /*0x72f559*/
    SetupScreenBuffers(*(int *)&HouseClass_Player[44600], *(int *)&HouseClass_Player[44604]); /*0x72f56a*/
    stru_B05488[42884] = 1; /*0x72f56f*/
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 24))(a1, 0); /*0x72f57d*/
  int v8 = 0; /*0x72f585*/
  i = 0; /*0x72f589*/
  v8 = **(_DWORD **)&stru_B05488[42920]; /*0x72f58f*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42920] + 4); /*0x72f59b*/
  if ( *(_DWORD *)&stru_89E138[8044] == 640 ) /*0x72f5a4*/
  {
    DrawToSurfaceSHP( /*0x72f5ca*/
      a1,
      *(int *)&stru_B05488[42856],
      *(ConvertClass **)&stru_B05488[42572],
      0,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  else if ( *(_DWORD *)&stru_89E138[8044] == 800 ) /*0x72f5d1*/
  {
    DrawToSurfaceSHP( /*0x72f5f6*/
      a1,
      *(int *)&stru_B05488[42856],
      *(ConvertClass **)&stru_B05488[42560],
      0,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  else
  {
    DrawToSurfaceSHP( /*0x72f624*/
      a1,
      *(int *)&stru_B05488[42856],
      *(ConvertClass **)&stru_B05488[42440],
      0,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  v8 = **(_DWORD **)&stru_B05488[42924]; /*0x72f630*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42924] + 4); /*0x72f65a*/
  DrawToSurfaceSHP( /*0x72f667*/
    a1,
    *(int *)&stru_B05488[42848],
    *(ConvertClass **)&stru_B05488[42624],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v8 = **(_DWORD **)&stru_B05488[42928]; /*0x72f67a*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42928] + 4); /*0x72f681*/
  DrawToSurfaceSHP( /*0x72f6aa*/
    a1,
    *(int *)&stru_B05488[42848],
    *(ConvertClass **)&stru_B05488[42328],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v8 = **(_DWORD **)&stru_B05488[42932]; /*0x72f6b6*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42932] + 4); /*0x72f6e0*/
  DrawToSurfaceSHP( /*0x72f6ed*/
    a1,
    *(int *)&stru_B05488[42864],
    *(ConvertClass **)&stru_B05488[42464],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v8 = **(_DWORD **)&stru_B05488[42940]; /*0x72f700*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42940] + 4); /*0x72f707*/
  DrawToSurfaceSHP( /*0x72f730*/
    a1,
    *(int *)&stru_B05488[42848],
    *(ConvertClass **)&stru_B05488[42472],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  int v5 = 0; /*0x72f73a*/
  v8 = **(_DWORD **)&stru_B05488[42944]; /*0x72f73e*/
  for ( i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42944] + 4); /*0x72f750*/
        v5 < *(int *)&stru_B05488[42580];
        i += *(_DWORD *)(*(_DWORD *)&stru_B05488[42944] + 12) )
  {
    DrawToSurfaceSHP( /*0x72f77d*/
      a1,
      *(int *)&stru_B05488[42848],
      *(ConvertClass **)&stru_B05488[42360],
      0,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    ++v5; /*0x72f796*/
  }
  v8 = **(_DWORD **)&stru_B05488[42948]; /*0x72f7a6*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42948] + 4); /*0x72f7d0*/
  DrawToSurfaceSHP( /*0x72f7dd*/
    a1,
    *(int *)&stru_B05488[42848],
    *(ConvertClass **)&stru_B05488[42500],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v8 = **(_DWORD **)&stru_B05488[42952]; /*0x72f7ec*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42952] + 4); /*0x72f7f3*/
  DrawToSurfaceSHP( /*0x72f820*/
    a1,
    *(int *)&stru_B05488[42848],
    *(ConvertClass **)&stru_B05488[42432],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  _DWORD v10[2]; // [esp+18h] [ebp-20h] BYREF
  v10[0] = *(_DWORD *)a2->__pad_0; /*0x72f829*/
  v10[1] = *(_DWORD *)&a2->field_2[2]; /*0x72f830*/
  int v11 = *(_DWORD *)&a2->__pad_6[2]; /*0x72f837*/
  int v6 = *(_DWORD *)&a2->__pad_6[6]; /*0x72f841*/
  int v13 = *(_DWORD *)&stru_87C374[44092]; /*0x72f849*/
  int v12 = v6; /*0x72f857*/
  v11 = *(_DWORD *)&stru_87C374[44100] - 168; /*0x72f861*/
  int v14 = *(_DWORD *)&stru_87C374[44096]; /*0x72f86a*/
  int v15 = *(_DWORD *)&stru_87C374[44104]; /*0x72f86e*/
  v8 = **(_DWORD **)&stru_B05488[42964]; /*0x72f874*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42964] + 4); /*0x72f882*/
  DrawToSurfaceSHP( /*0x72f8b0*/
    a1,
    *(int *)&stru_B05488[42848],
    *(ConvertClass **)&stru_B05488[42420],
    0,
    (ConvertClass *)&v8,
    (ConvertClass *)v10,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  if ( a3 ) /*0x72f8bb*/
  {
    v8 = **(_DWORD **)&stru_B05488[42968]; /*0x72f8c8*/
    i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42968] + 4); /*0x72f8f3*/
    DrawToSurfaceSHP( /*0x72f900*/
      a1,
      *(int *)&stru_B05488[42848],
      *(ConvertClass **)&stru_B05488[42504],
      2u,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    int v7 = 0; /*0x72f90a*/
    v8 = **(_DWORD **)&stru_B05488[42976]; /*0x72f90e*/
    for ( i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42976] + 4); /*0x72f920*/
          v7 < *(int *)&stru_B05488[42332];
          v8 += *(_DWORD *)(*(_DWORD *)&stru_B05488[42976] + 8) )
    {
      DrawToSurfaceSHP( /*0x72f952*/
        a1,
        *(int *)&stru_B05488[42848],
        *(ConvertClass **)&stru_B05488[42528],
        0,
        (ConvertClass *)&v8,
        a2,
        (ConvertClass *)0x400,
        0,
        0,
        0,
        (ConvertClass *)0x3E8,
        0,
        0,
        0,
        0,
        0);
      ++v7; /*0x72f96a*/
    }
  }
  else
  {
    v8 = **(_DWORD **)&stru_B05488[42972]; /*0x72f97f*/
    i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42972] + 4); /*0x72f986*/
    DrawToSurfaceSHP( /*0x72f9b4*/
      a1,
      *(int *)&stru_B05488[42848],
      *(ConvertClass **)&stru_B05488[42504],
      2u,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  v8 = **(_DWORD **)&stru_B05488[42980]; /*0x72f9c0*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488[42980] + 4); /*0x72f9ea*/
  DrawToSurfaceSHP( /*0x72f9f7*/
    a1,
    *(int *)&stru_B05488[42848],
    *(ConvertClass **)&stru_B05488[42548],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
}
} // namespace gamemd

// 0x72FC60
namespace gamemd {
unsigned int * Screen_SetupBuffers(int a1, int a2)
{
{
  __int16 *v3; // eax
  AbstractClass *v44; // ecx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // edi
  int v50; // ebx
  int v51; // ebp
  int v52; // esi
  _DWORD *v53; // eax
  int v54; // edi
  int v55; // ebx
  int v56; // ebp
  int v57; // esi
  _DWORD *result; // eax

  if ( a1 == 640 ) /*0x72fc77*/
  {
    v3 = (__int16 *)DataGlobal_B0FAD4; /*0x72fc79*/
  }
  else
  {
    v3 = (__int16 *)DataGlobal_B0FAC8; /*0x72fc80*/
    if ( a1 != 800 ) /*0x72fc8b*/
      v3 = (__int16 *)DataGlobal_B0FA50; /*0x72fc8d*/
  }
  int v4 = v3[1]; /*0x72fc92*/
  int v5 = v3[2]; /*0x72fc96*/
  _DWORD * v6 = __2_YAPAXI_Z(0x10u); /*0x72fc9c*/
  if ( v6 ) /*0x72fca8*/
  {
    *v6 = 0; /*0x72fcaa*/
    v6[1] = 0; /*0x72fcac*/
    v6[2] = v4; /*0x72fcaf*/
    v6[3] = v5; /*0x72fcb2*/
    DataGlobal_B0FC30 = v6; /*0x72fcb5*/
  }
  else
  {
    DataGlobal_B0FC30 = 0; /*0x72fcbc*/
  }
  int v7 = *((__int16 *)DataGlobal_B0FB08 + 1); /*0x72fcc9*/
  int v8 = *((__int16 *)DataGlobal_B0FB08 + 2); /*0x72fccd*/
  int v9 = a1 - v7; /*0x72fcd1*/
  _DWORD * v10 = __2_YAPAXI_Z(0x10u); /*0x72fcd3*/
  if ( v10 ) /*0x72fcdd*/
  {
    *v10 = v9; /*0x72fcdf*/
    v10[1] = 0; /*0x72fce1*/
    v10[2] = v7; /*0x72fce4*/
    v10[3] = v8; /*0x72fce7*/
    DataGlobal_B0FC34 = v10; /*0x72fcea*/
  }
  else
  {
    DataGlobal_B0FC34 = 0; /*0x72fcf1*/
  }
  int v11 = *((__int16 *)DataGlobal_B0F9E0 + 2); /*0x72fcfe*/
  _DWORD * v12 = __2_YAPAXI_Z(0x10u); /*0x72fd02*/
  if ( v12 ) /*0x72fd0c*/
  {
    *v12 = v9; /*0x72fd0e*/
    v12[1] = v8; /*0x72fd10*/
    v12[2] = v7; /*0x72fd13*/
    v12[3] = v11; /*0x72fd16*/
    DataGlobal_B0FC38 = v12; /*0x72fd19*/
  }
  else
  {
    DataGlobal_B0FC38 = 0; /*0x72fd20*/
  }
  int v13 = v11 + v8; /*0x72fd30*/
  int v14 = *((__int16 *)DataGlobal_B0FA68 + 2); /*0x72fd34*/
  _DWORD * v15 = __2_YAPAXI_Z(0x10u); /*0x72fd38*/
  if ( v15 ) /*0x72fd42*/
  {
    *v15 = v9; /*0x72fd44*/
    v15[1] = v13; /*0x72fd46*/
    v15[2] = v7; /*0x72fd49*/
    v15[3] = v14; /*0x72fd4c*/
    DataGlobal_B0FC3C = v15; /*0x72fd4f*/
  }
  else
  {
    DataGlobal_B0FC3C = 0; /*0x72fd56*/
  }
  int v16 = v14 + v13; /*0x72fd66*/
  int v17 = *((__int16 *)DataGlobal_B0FA70 + 2); /*0x72fd6a*/
  _DWORD * v18 = __2_YAPAXI_Z(0x10u); /*0x72fd6e*/
  if ( v18 ) /*0x72fd78*/
  {
    *v18 = v9; /*0x72fd7a*/
    v18[1] = v16; /*0x72fd7c*/
    v18[2] = v7; /*0x72fd7f*/
    v18[3] = v17; /*0x72fd82*/
    DataGlobal_B0FC44 = v18; /*0x72fd85*/
  }
  else
  {
    DataGlobal_B0FC44 = 0; /*0x72fd8c*/
  }
  int v19 = v17 + v16; /*0x72fd9b*/
  int v20 = *((__int16 *)DataGlobal_B0FAFC + 2); /*0x72fd9f*/
  _DWORD * v21 = __2_YAPAXI_Z(0x10u); /*0x72fda3*/
  if ( v21 ) /*0x72fdad*/
  {
    *v21 = v9; /*0x72fdaf*/
    v21[1] = v19; /*0x72fdb1*/
    v21[2] = v7; /*0x72fdb4*/
    v21[3] = v20; /*0x72fdb7*/
    DataGlobal_B0FC48 = v21; /*0x72fdba*/
  }
  else
  {
    DataGlobal_B0FC48 = 0; /*0x72fdc1*/
  }
  int v22 = *((__int16 *)DataGlobal_B0FA8C + 2); /*0x72fdd3*/
  _DWORD * v23 = __2_YAPAXI_Z(0x10u); /*0x72fdd7*/
  if ( v23 ) /*0x72fde1*/
  {
    *v23 = v9; /*0x72fde3*/
    v23[1] = v19; /*0x72fde5*/
    v23[2] = v7; /*0x72fde8*/
    v23[3] = v22; /*0x72fdeb*/
    DataGlobal_B0FC4C = v23; /*0x72fdee*/
  }
  else
  {
    DataGlobal_B0FC4C = 0; /*0x72fdf5*/
  }
  int v24 = *((__int16 *)DataGlobal_B0FA48 + 2); /*0x72fe07*/
  _DWORD * v25 = __2_YAPAXI_Z(0x10u); /*0x72fe0b*/
  if ( v25 ) /*0x72fe15*/
  {
    *v25 = v9; /*0x72fe17*/
    v25[1] = v19; /*0x72fe19*/
    v25[2] = v7; /*0x72fe1c*/
    v25[3] = v24; /*0x72fe1f*/
    DataGlobal_B0FC50 = v25; /*0x72fe22*/
  }
  else
  {
    DataGlobal_B0FC50 = 0; /*0x72fe29*/
  }
  DataGlobal_B0FADC = (a2 /*0x72fe7a*/
                    - *((_DWORD *)DataGlobal_B0FC4C + 3)
                    - *((_DWORD *)DataGlobal_B0FC44 + 3)
                    - *((_DWORD *)DataGlobal_B0FC3C + 3)
                    - *((_DWORD *)DataGlobal_B0FC38 + 3)
                    - *((_DWORD *)DataGlobal_B0FC34 + 3))
                   / *((_DWORD *)DataGlobal_B0FC48 + 3);
  int v26 = *((_DWORD *)DataGlobal_B0FC48 + 3) * DataGlobal_B0FADC + v19; /*0x72fe83*/
  *((_DWORD *)DataGlobal_B0FC4C + 1) = v26; /*0x72fe85*/
  int v27 = v26 + *((_DWORD *)DataGlobal_B0FC4C + 3); /*0x72fe96*/
  int v28 = a2 - 32; /*0x72fe98*/
  *((_DWORD *)DataGlobal_B0FC50 + 1) = v27; /*0x72fe9b*/
  int v29 = g_CommandLineFlags - 168; /*0x72fea4*/
  _DWORD * v30 = __2_YAPAXI_Z(0x10u); /*0x72feaa*/
  if ( v30 ) /*0x72feb6*/
  {
    *v30 = 0; /*0x72feb8*/
    v30[1] = v28; /*0x72feba*/
    v30[2] = v29; /*0x72febd*/
    v30[3] = 32; /*0x72fec0*/
    DataGlobal_B0FC58 = v30; /*0x72fec7*/
  }
  else
  {
    DataGlobal_B0FC58 = 0; /*0x72fece*/
  }
  int v31 = *((__int16 *)DataGlobal_B0FA3C + 1); /*0x72fedb*/
  int v32 = *((__int16 *)DataGlobal_B0FA3C + 2); /*0x72fedf*/
  _DWORD * v33 = __2_YAPAXI_Z(0x10u); /*0x72fee3*/
  if ( v33 ) /*0x72feed*/
  {
    *v33 = 0; /*0x72feef*/
    v33[1] = v28; /*0x72fef1*/
    v33[2] = v31; /*0x72fef4*/
    v33[3] = v32; /*0x72fef7*/
    DataGlobal_B0FC5C = v33; /*0x72fefa*/
  }
  else
  {
    DataGlobal_B0FC5C = 0; /*0x72ff01*/
  }
  int v34 = *((__int16 *)DataGlobal_B0FA90 + 1); /*0x72ff0e*/
  int v35 = *((__int16 *)DataGlobal_B0FA90 + 2); /*0x72ff12*/
  _DWORD * v36 = __2_YAPAXI_Z(0x10u); /*0x72ff16*/
  if ( v36 ) /*0x72ff20*/
  {
    *v36 = 0; /*0x72ff22*/
    v36[1] = v28; /*0x72ff24*/
    v36[2] = v34; /*0x72ff27*/
    v36[3] = v35; /*0x72ff2a*/
    DataGlobal_B0FC60 = v36; /*0x72ff2d*/
  }
  else
  {
    DataGlobal_B0FC60 = 0; /*0x72ff34*/
  }
  _DWORD * v37 = __2_YAPAXI_Z(0x10u); /*0x72ff3c*/
  if ( v37 ) /*0x72ff46*/
  {
    *v37 = 0; /*0x72ff48*/
    v37[1] = v28; /*0x72ff4a*/
    v37[2] = v34; /*0x72ff4d*/
    v37[3] = v35; /*0x72ff50*/
    DataGlobal_B0FC64 = v37; /*0x72ff53*/
  }
  else
  {
    DataGlobal_B0FC64 = 0; /*0x72ff5a*/
  }
  int v38 = *((__int16 *)DataGlobal_B0FAA8 + 1); /*0x72ff67*/
  int v39 = *((__int16 *)DataGlobal_B0FAA8 + 2); /*0x72ff6b*/
  _DWORD * v40 = __2_YAPAXI_Z(0x10u); /*0x72ff6f*/
  if ( v40 ) /*0x72ff79*/
  {
    *v40 = 0; /*0x72ff7b*/
    v40[1] = v28; /*0x72ff7d*/
    v40[2] = v38; /*0x72ff80*/
    v40[3] = v39; /*0x72ff83*/
    DataGlobal_B0FC68 = v40; /*0x72ff86*/
  }
  else
  {
    DataGlobal_B0FC68 = 0; /*0x72ff8d*/
  }
  int v41 = *((__int16 *)DataGlobal_B0FABC + 1); /*0x72ff9a*/
  int v42 = *((__int16 *)DataGlobal_B0FABC + 2); /*0x72ff9e*/
  int * v43 = (int *)__2_YAPAXI_Z(0x10u); /*0x72ffa2*/
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
  DataGlobal_B0FC6C = v44; /*0x72ffc9*/
  DataGlobal_B0F9E4 = (a1 - *((_DWORD *)DataGlobal_B0FC60 + 2) - *((_DWORD *)DataGlobal_B0FC34 + 2) - v44[2]) /*0x72ffee*/
                   / *((_DWORD *)DataGlobal_B0FC68 + 2);
  v45 = *(_DWORD *)DataGlobal_B0FC34 - v44[2]; /*0x72fff5*/
  *v44 = v45; /*0x72fff8*/
  v46 = v45 - DataGlobal_B0F9E4 * *((_DWORD *)DataGlobal_B0FC68 + 2); /*0x73000a*/
  *(_DWORD *)DataGlobal_B0FC68 = v46; /*0x73000c*/
  v47 = v46 - *((_DWORD *)DataGlobal_B0FC60 + 2); /*0x730014*/
  *(_DWORD *)DataGlobal_B0FC60 = v47; /*0x730017*/
  DataGlobal_B0FAD8 = v47; /*0x73001f*/
  v48 = *(_DWORD *)DataGlobal_B0FC6C - *((_DWORD *)DataGlobal_B0FC64 + 2); /*0x73002e*/
  *(_DWORD *)DataGlobal_B0FC64 = v48; /*0x730030*/
  DataGlobal_B0FAA4 = v48; /*0x730038*/
  DataGlobal_B0FA78 = *(_DWORD *)DataGlobal_B0FC6C - *((_DWORD *)DataGlobal_B0FC60 + 2) - *(_DWORD *)DataGlobal_B0FC60; /*0x730058*/
  v49 = *(_DWORD *)DataGlobal_B0FC38; /*0x730064*/
  v50 = *((_DWORD *)DataGlobal_B0FC38 + 1); /*0x730066*/
  v51 = *((_DWORD *)DataGlobal_B0FC38 + 2); /*0x730069*/
  v52 = *((_DWORD *)DataGlobal_B0FC38 + 3) + *((_DWORD *)DataGlobal_B0FC3C + 3); /*0x73006c*/
  v53 = __2_YAPAXI_Z(0x10u); /*0x73006e*/
  if ( v53 ) /*0x730078*/
  {
    *v53 = v49; /*0x73007a*/
    v53[1] = v50; /*0x73007c*/
    v53[2] = v51; /*0x73007f*/
    v53[3] = v52; /*0x730082*/
    DataGlobal_B0FC40 = v53; /*0x730085*/
  }
  else
  {
    DataGlobal_B0FC40 = 0; /*0x73008c*/
  }
  v54 = *(_DWORD *)DataGlobal_B0FC44; /*0x7300b9*/
  v55 = *((_DWORD *)DataGlobal_B0FC44 + 1); /*0x7300bb*/
  v56 = *((_DWORD *)DataGlobal_B0FC44 + 2); /*0x7300be*/
  v57 = *((_DWORD *)DataGlobal_B0FC44 + 3) /*0x7300c3*/
      + *((_DWORD *)DataGlobal_B0FC4C + 3)
      + DataGlobal_B0FADC * *((_DWORD *)DataGlobal_B0FC48 + 3);
  result = __2_YAPAXI_Z(0x10u); /*0x7300c5*/
  if ( result ) /*0x7300cf*/
  {
    *result = v54; /*0x7300d1*/
    result[3] = v57; /*0x7300d3*/
    result[2] = v56; /*0x7300d7*/
    result[1] = v55; /*0x7300db*/
    DataGlobal_B0FC54 = result; /*0x7300df*/
  }
  else
  {
    DataGlobal_B0FC54 = 0; /*0x7300ec*/
  }
  return result; /*0x7300d6*/
}
} // namespace gamemd

// 0x720230
namespace gamemd {
void sub_720230()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    *(double *)&DataGlobal_B0F1F8[544] = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x720260
namespace gamemd {
void sub_720260()
{
{
    *(double *)&DataGlobal_B0F1F8[624] = *(double *)&DataGlobal_B0F1F8[544] / 60.0;
}
}
} // namespace gamemd

// 0x720280
namespace gamemd {
void sub_720280()
{
{
    *(double *)&DataGlobal_B0F1F8[600] = 1.0 / *(double *)&DataGlobal_B0F1F8[624];
}
}
} // namespace gamemd

// 0x7202A0
namespace gamemd {
void sub_7202A0()
{
{
    *(double *)&DataGlobal_B0F1F8[592] = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x7202C0
namespace gamemd {
void sub_7202C0()
{
{
    *(double *)&DataGlobal_B0F1F8[552] = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x7202E0
namespace gamemd {
void sub_7202E0()
{
{
    *(double *)&DataGlobal_B0F1F8[512] = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x720300
namespace gamemd {
long long sub_720300()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(*(double *)&DataGlobal_B0F1F8[512] - *(double *)&DataGlobal_B0F1F8[552]);
    result = Math::RoundToInt(v0 * *(double *)&DataGlobal_B0F1F8[544] * 0.5);
    *(int *)&DataGlobal_B0F1F8[632] = result;
    return result;
}
}
} // namespace gamemd

// 0x720340
namespace gamemd {
void sub_720340()
{
{
    *(double *)&DataGlobal_B0F1F8[560] = Math::ArcTan((double)*(int *)&DataGlobal_B0F1F8[632] * 0.00390625);
}
}
} // namespace gamemd

// 0x720370
namespace gamemd {
void sub_720370()
{
{
    *(double *)&DataGlobal_B0F1F8[584] = Math::ArcTan( (double)(2 * *(int *)&DataGlobal_B0F1F8[632]) / *(double *)&DataGlobal_B0F1F8[544]);
}
}
} // namespace gamemd

// 0x7203A0
namespace gamemd {
long long sub_7203A0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * *(int *)&DataGlobal_B0F1F8[632]) + 0.5);
    *(int *)&DataGlobal_B0F1F8[620] = result;
    return result;
}
}
} // namespace gamemd

// 0x7203D0
namespace gamemd {
int sub_7203D0()
{
{
    *(short *)&DataGlobal_B0F1F8[536] = 0;
    *(short *)&DataGlobal_B0F1F8[538] = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7203E0
namespace gamemd {
int sub_7203E0()
{
{
    *(int *)&DataGlobal_B0F1F8[568] = 0;
    *(int *)&DataGlobal_B0F1F8[572] = 0;
    *(int *)&DataGlobal_B0F1F8[576] = 0;
    return 0;
}
}
} // namespace gamemd

// 0x720400
namespace gamemd {
int sub_720400()
{
{
    *(int *)&DataGlobal_B0F1F8[616] = 0;
    *(int *)&DataGlobal_B0F1F8[608] = 128;
    *(int *)&DataGlobal_B0F1F8[612] = 128;
    return 128;
}
}
} // namespace gamemd

// 0x720420
namespace gamemd {
int sub_720420()
{
{
    *(int *)&DataGlobal_B0F1F8[520] = 0;
    *(int *)&DataGlobal_B0F1F8[524] = 0;
    *(int *)&DataGlobal_B0F1F8[528] = 0;
    *(int *)&DataGlobal_B0F1F8[532] = 0;
    return 0;
}
}
} // namespace gamemd

// 0x720440
namespace gamemd {
unsigned int * E4Recv_720440::sub_720440()
{
{
    this->M640 = 0;
    this->M644 = 0;
    this->M648 = 1;
    this->M649 = 0;
    this->M650 = 0;
    this->M652 = -1;
    *(char *)this = 0;
    this->M256 = 0;
    this->M512 = 0;
    return this;
}
}
} // namespace gamemd

// 0x720960
namespace gamemd {
unsigned int * E4Recv_720960::sub_720960()
{
{
    *(void**)this = -1;
    this->M4 = -1;
    this->M8 = -1;
    this->M12 = 255;
    this->M16 = 0;
    this->M17 = 0;
    this->M18 = 0;
    this->M24 = 0;
    this->M28 = 0;
    this->M32 = 1;
    this->M33 = 0;
    this->M20 = &vt_DynamicVectorClass_ThemeControl;
    this->M40 = 10;
    this->M36 = 0;
    this->M44 = 0;
    return this;
}
}
} // namespace gamemd

// 0x721430
namespace gamemd {
void sub_721430()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    *(double *)&DataGlobal_B0F1F8[672] = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x721460
namespace gamemd {
void sub_721460()
{
{
    DataGlobal_B0F508 = *(double *)&DataGlobal_B0F1F8[672] / 60.0;
}
}
} // namespace gamemd

// 0x721480
namespace gamemd {
void sub_721480()
{
{
    *(double *)&DataGlobal_B0F1F8[728] = 1.0 / DataGlobal_B0F508;
}
}
} // namespace gamemd

// 0x7214A0
namespace gamemd {
void sub_7214A0()
{
{
    *(double *)&DataGlobal_B0F1F8[720] = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x7214C0
namespace gamemd {
void sub_7214C0()
{
{
    *(double *)&DataGlobal_B0F1F8[680] = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x7214E0
namespace gamemd {
void sub_7214E0()
{
{
    *(double *)&DataGlobal_B0F1F8[640] = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x721500
namespace gamemd {
long long sub_721500()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(*(double *)&DataGlobal_B0F1F8[640] - *(double *)&DataGlobal_B0F1F8[680]);
    result = Math::RoundToInt(v0 * *(double *)&DataGlobal_B0F1F8[672] * 0.5);
    DataGlobal_B0F510 = result;
    return result;
}
}
} // namespace gamemd

// 0x721540
namespace gamemd {
void sub_721540()
{
{
    *(double *)&DataGlobal_B0F1F8[688] = Math::ArcTan((double)DataGlobal_B0F510 * 0.00390625);
}
}
} // namespace gamemd

// 0x721570
namespace gamemd {
void sub_721570()
{
{
    *(double *)&DataGlobal_B0F1F8[712] = Math::ArcTan((double)(2 * DataGlobal_B0F510) / *(double *)&DataGlobal_B0F1F8[672]);
}
}
} // namespace gamemd

// 0x7215A0
namespace gamemd {
long long sub_7215A0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0F510) + 0.5);
    DataGlobal_B0F500 = result;
    return result;
}
}
} // namespace gamemd

// 0x7215D0
namespace gamemd {
int sub_7215D0()
{
{
    *(short *)&DataGlobal_B0F1F8[664] = 0;
    *(short *)&DataGlobal_B0F1F8[666] = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7215E0
namespace gamemd {
int sub_7215E0()
{
{
    *(int *)&DataGlobal_B0F1F8[696] = 0;
    *(int *)&DataGlobal_B0F1F8[700] = 0;
    *(int *)&DataGlobal_B0F1F8[704] = 0;
    return 0;
}
}
} // namespace gamemd

// 0x721600
namespace gamemd {
int sub_721600()
{
{
    *(int *)&DataGlobal_B0F1F8[744] = 0;
    *(int *)&DataGlobal_B0F1F8[736] = 128;
    *(int *)&DataGlobal_B0F1F8[740] = 128;
    return 128;
}
}
} // namespace gamemd

// 0x721620
namespace gamemd {
int sub_721620()
{
{
    *(int *)&DataGlobal_B0F1F8[648] = 0;
    *(int *)&DataGlobal_B0F1F8[652] = 0;
    *(int *)&DataGlobal_B0F1F8[656] = 0;
    *(int *)&DataGlobal_B0F1F8[660] = 0;
    return 0;
}
}
} // namespace gamemd

// 0x721640
namespace gamemd {
int sub_721640()
{
{
    BuildingClass_InstanceArray = 0;
    DataGlobal_B0F4F0 = 0;
    DataGlobal_B0F4F4 = 1;
    DataGlobal_B0F4F5 = 0;
    DataGlobal_B0F4E8 = (int)&vt_DynamicVectorClass_TiberiumClass;
    DataGlobal_B0F4FC = 10;
    g_CrateProcessState = 0;
    return atexit(sub_721680);
}
}
} // namespace gamemd

// 0x721680
namespace gamemd {
void sub_721680()
{
{
    DataGlobal_B0F4E8 = (int)&vt_VectorClass_TiberiumClass;
    if ( BuildingClass_InstanceArray && DataGlobal_B0F4F5 )
  {
    __3_YAXPAX_Z(BuildingClass_InstanceArray);
    BuildingClass_InstanceArray = 0;
  }
    DataGlobal_B0F4F5 = 0;
    DataGlobal_B0F4F0 = 0;
}
}
} // namespace gamemd

// 0x722A20
namespace gamemd {
void E4Recv_722A20::sub_722A20()
{
{
    int *v2;
    int i;
    void **v4;
    v2 = *(int **)(this + 244);
    if ( v2 )
  {
    for ( i = 0; i <= *v2; *(int *)(v2[2] + 4 * i - 4) = 0 )
    ++i;
    *v2 = 0;
    v4 = *(void ***)(this + 244);
    if ( v4 )
    {
    __3_YAXPAX_Z(v4[2]);
    __3_YAXPAX_Z(v4);
    }
    this->M244 = 0;
  }
    if ( this->M252 )
  {
    __3_YAXPAX_Z(*(void **)(this + 252));
    this->M252 = 0;
  }
    if ( this->M248 )
  {
    __3_YAXPAX_Z(*(void **)(this + 248));
    this->M248 = 0;
  }
    this->M240 = 0;
}
}
} // namespace gamemd

// 0x723510
namespace gamemd {
void E4Recv_723510::sub_723510()
{
{
    int *v2;
    int i;
    void **v4;
    v2 = *(int **)(this + 272);
    if ( v2 )
  {
    for ( i = 0; i <= *v2; *(int *)(v2[2] + 4 * i - 4) = 0 )
    ++i;
    *v2 = 0;
    v4 = *(void ***)(this + 272);
    if ( v4 )
    {
    __3_YAXPAX_Z(v4[2]);
    __3_YAXPAX_Z(v4);
    }
    this->M272 = 0;
  }
    if ( this->M280 )
  {
    __3_YAXPAX_Z(*(void **)(this + 280));
    this->M280 = 0;
  }
    if ( this->M276 )
  {
    __3_YAXPAX_Z(*(void **)(this + 276));
    this->M276 = 0;
  }
    this->M268 = 0;
}
}
} // namespace gamemd

// 0x7236D0
namespace gamemd {
void nullsub_158()
{
  ;
}
} // namespace gamemd

// 0x723A90
namespace gamemd {
void sub_723A90()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0F538 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x723AC0
namespace gamemd {
void sub_723AC0()
{
{
    DataGlobal_B0F588 = DataGlobal_B0F538 / 60.0;
}
}
} // namespace gamemd

// 0x723AE0
namespace gamemd {
void sub_723AE0()
{
{
    DataGlobal_B0F570 = 1.0 / DataGlobal_B0F588;
}
}
} // namespace gamemd

// 0x723B00
namespace gamemd {
void sub_723B00()
{
{
    DataGlobal_B0F568 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x723B20
namespace gamemd {
void sub_723B20()
{
{
    g_BuildingClass_Capacity = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x723B40
namespace gamemd {
void sub_723B40()
{
{
    DataGlobal_B0F518 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x723B60
namespace gamemd {
long long sub_723B60()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0F518 - g_BuildingClass_Capacity);
    result = Math::RoundToInt(v0 * DataGlobal_B0F538 * 0.5);
    DataGlobal_B0F590 = result;
    return result;
}
}
} // namespace gamemd

// 0x723BA0
namespace gamemd {
void sub_723BA0()
{
{
    DataGlobal_B0F548 = Math::ArcTan((double)DataGlobal_B0F590 * 0.00390625);
}
}
} // namespace gamemd

// 0x723BD0
namespace gamemd {
void sub_723BD0()
{
{
    DataGlobal_B0F560 = Math::ArcTan((double)(2 * DataGlobal_B0F590) / DataGlobal_B0F538);
}
}
} // namespace gamemd

// 0x723C00
namespace gamemd {
long long sub_723C00()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0F590) + 0.5);
    DataGlobal_B0F584 = result;
    return result;
}
}
} // namespace gamemd

// 0x723C30
namespace gamemd {
int sub_723C30()
{
{
    DataGlobal_B0F530 = 0;
    DataGlobal_B0F532 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x723C40
namespace gamemd {
int sub_723C40()
{
{
    DataGlobal_B0F550 = 0;
    DataGlobal_B0F554 = 0;
    DataGlobal_B0F558 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x723C60
namespace gamemd {
int sub_723C60()
{
{
    DataGlobal_B0F580 = 0;
    DataGlobal_B0F578 = 128;
    DataGlobal_B0F57C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x723C80
namespace gamemd {
int sub_723C80()
{
{
    DataGlobal_B0F520 = 0;
    DataGlobal_B0F524 = 0;
    DataGlobal_B0F528 = 0;
    DataGlobal_B0F52C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x723E40
namespace gamemd {
int sub_723E40()
{
{
    DataGlobal_B0F598 = 0;
    DataGlobal_B0F59C = 0;
    DataGlobal_B0F5A0 = 0;
    DataGlobal_B0F5A4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x723FE0
namespace gamemd {
int sub_723FE0()
{
{
    DataGlobal_B0F5A8 = 0;
    DataGlobal_B0F5AC = 0;
    DataGlobal_B0F5B0 = 0;
    DataGlobal_B0F5B4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x724550
namespace gamemd {
int E4Recv_724550::sub_724550()
{
{
    return this->M560;
}
}
} // namespace gamemd

// 0x724560
namespace gamemd {
int E4Recv_724560::sub_724560(int a2)
{
{
    this->M560 = a2;
    return a2;
}
}
} // namespace gamemd

// 0x724570
namespace gamemd {
int E4Recv_724570::sub_724570()
{
{
    return this->M580;
}
}
} // namespace gamemd

// 0x724A30
namespace gamemd {
int E4Recv_724A30::sub_724A30(int * a2)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    int *v6;
    int v7;
    int v8;
    int v10;
    v2 = this->M580;
    v3 = 0;
    if ( v2 <= 0 )
    return 0;
    v10 = this->M568;
    v4 = v10;
    v5 = *a2;
    while ( 1 )
  {
    v6 = (int *)(*(int *)(v4) + 4);
    if ( v5 >= *v6 && v5 <= *v6 + *(int *)(*(int *)(v4) + 12) )
    {
    v7 = *(int *)(*(int *)(v4) + 8);
    v8 = *((int*)(a2) + 1);
    if ( v8 >= v7 && v8 <= v7 + *(int *)(*(int *)(v4) + 16) )
    break;
    }
    ++v3;
    v4 += 4;
    if ( v3 >= v2 )
    return 0;
  }
    return *(int *)(v10 + 4 * v3);
}
}
} // namespace gamemd

// 0x724F90
namespace gamemd {
Iostream_init * E4Recv_724F90::__0Iostream_init_QAE_XZ_6()
{
{
    return this;
}
}
} // namespace gamemd

// 0x7250C0
namespace gamemd {
void sub_7250C0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0F638 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x7250F0
namespace gamemd {
void sub_7250F0()
{
{
    DataGlobal_B0F748 = DataGlobal_B0F638 / 60.0;
}
}
} // namespace gamemd

// 0x725110
namespace gamemd {
void sub_725110()
{
{
    DataGlobal_B0F6E8 = 1.0 / DataGlobal_B0F748;
}
}
} // namespace gamemd

// 0x725130
namespace gamemd {
void sub_725130()
{
{
    DataGlobal_B0F6E0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x725150
namespace gamemd {
void sub_725150()
{
{
    g_AnimFrameCounter = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x725170
namespace gamemd {
void sub_725170()
{
{
    DataGlobal_B0F5D0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x725190
namespace gamemd {
long long sub_725190()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0F5D0 - g_AnimFrameCounter);
    result = Math::RoundToInt(v0 * DataGlobal_B0F638 * 0.5);
    DataGlobal_B0F750 = result;
    return result;
}
}
} // namespace gamemd

// 0x7251D0
namespace gamemd {
void sub_7251D0()
{
{
    DataGlobal_B0F690 = Math::ArcTan((double)DataGlobal_B0F750 * 0.00390625);
}
}
} // namespace gamemd

// 0x725200
namespace gamemd {
void sub_725200()
{
{
    DataGlobal_B0F6C0 = Math::ArcTan((double)(2 * DataGlobal_B0F750) / DataGlobal_B0F638);
}
}
} // namespace gamemd

// 0x725230
namespace gamemd {
long long sub_725230()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0F750) + 0.5);
    DataGlobal_B0F744 = result;
    return result;
}
}
} // namespace gamemd

// 0x725260
namespace gamemd {
int sub_725260()
{
{
    DataGlobal_B0F630 = 0;
    DataGlobal_B0F632 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x725270
namespace gamemd {
int sub_725270()
{
{
    DataGlobal_B0F6B0 = 0;
    DataGlobal_B0F6B4 = 0;
    DataGlobal_B0F6B8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x725290
namespace gamemd {
int sub_725290()
{
{
    DataGlobal_B0F740 = 0;
    DataGlobal_B0F738 = 128;
    DataGlobal_B0F73C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x7252B0
namespace gamemd {
int sub_7252B0()
{
{
    DataGlobal_B0F608 = 0;
    DataGlobal_B0F60C = 0;
    DataGlobal_B0F610 = 0;
    DataGlobal_B0F614 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7252D0
namespace gamemd {
int sub_7252D0()
{
{
    DataGlobal_B0F724 = 0;
    DataGlobal_B0F728 = 0;
    DataGlobal_B0F72C = 1;
    DataGlobal_B0F72D = 0;
    AbstractClass_Array = (int)&vt_DynamicVectorClass_AbstractClass;
    DataGlobal_B0F734 = 10;
    g_AlphaShapePool = 0;
    return atexit(sub_725310);
}
}
} // namespace gamemd

// 0x725310
namespace gamemd {
void sub_725310()
{
{
    AbstractClass_Array = (int)&vt_VectorClass_AbstractClass;
    if ( DataGlobal_B0F724 && DataGlobal_B0F72D )
  {
    __3_YAXPAX_Z(DataGlobal_B0F724);
    DataGlobal_B0F724 = 0;
  }
    DataGlobal_B0F72D = 0;
    DataGlobal_B0F728 = 0;
}
}
} // namespace gamemd

// 0x725350
namespace gamemd {
int sub_725350()
{
{
    g_AnimPoolCount = 0;
    g_AnimTypePool = 0;
    DataGlobal_B0F67C = 1;
    g_AnimPoolLocked = 0;
    g_AnimPoolManager = (int)&vt_DynamicVectorClass_AbstractClass;
    g_AnimManagerConfig = 10;
    g_AnimManager = 0;
    return atexit(sub_725390);
}
}
} // namespace gamemd

// 0x725390
namespace gamemd {
void sub_725390()
{
{
    g_AnimPoolManager = (int)&vt_VectorClass_AbstractClass;
    if ( g_AnimPoolCount && g_AnimPoolLocked )
  {
    __3_YAXPAX_Z(g_AnimPoolCount);
    g_AnimPoolCount = 0;
  }
    g_AnimPoolLocked = 0;
    g_AnimTypePool = 0;
}
}
} // namespace gamemd

// 0x7253D0
namespace gamemd {
int sub_7253D0()
{
{
    DataGlobal_B0F61C = 0;
    DataGlobal_B0F620 = 0;
    DataGlobal_B0F624 = 1;
    DataGlobal_B0F625 = 0;
    DataGlobal_B0F618 = (int)&vt_DynamicVectorClass_AbstractClass;
    DataGlobal_B0F62C = 10;
    DataGlobal_B0F628 = 0;
    return atexit(sub_725410);
}
}
} // namespace gamemd

// 0x725410
namespace gamemd {
void sub_725410()
{
{
    DataGlobal_B0F618 = (int)&vt_VectorClass_AbstractClass;
    if ( DataGlobal_B0F61C && DataGlobal_B0F625 )
  {
    __3_YAXPAX_Z(DataGlobal_B0F61C);
    DataGlobal_B0F61C = 0;
  }
    DataGlobal_B0F625 = 0;
    DataGlobal_B0F620 = 0;
}
}
} // namespace gamemd

// 0x725450
namespace gamemd {
int sub_725450()
{
{
    DataGlobal_B0F70C = 0;
    DataGlobal_B0F710 = 0;
    DataGlobal_B0F714 = 1;
    DataGlobal_B0F715 = 0;
    DataGlobal_B0F708 = (int)&vt_DynamicVectorClass_AbstractClass;
    DataGlobal_B0F71C = 10;
    DataGlobal_B0F718 = 0;
    return atexit(sub_725490);
}
}
} // namespace gamemd

// 0x725490
namespace gamemd {
void sub_725490()
{
{
    DataGlobal_B0F708 = (int)&vt_VectorClass_AbstractClass;
    if ( DataGlobal_B0F70C && DataGlobal_B0F715 )
  {
    __3_YAXPAX_Z(DataGlobal_B0F70C);
    DataGlobal_B0F70C = 0;
  }
    DataGlobal_B0F715 = 0;
    DataGlobal_B0F710 = 0;
}
}
} // namespace gamemd

// 0x7254D0
namespace gamemd {
int sub_7254D0()
{
{
    g_BuildingClassPoolManager = 0;
    DataGlobal_B0F5C0 = 0;
    DataGlobal_B0F5C4 = 1;
    DataGlobal_B0F5C5 = 0;
    g_BuildingInstanceCount = (int)&vt_DynamicVectorClass_AbstractClass;
    DataGlobal_B0F5CC = 10;
    g_BuildingTypeInstanceCount = 0;
    return atexit(sub_725510);
}
}
} // namespace gamemd

// 0x725510
namespace gamemd {
void sub_725510()
{
{
    g_BuildingInstanceCount = (int)&vt_VectorClass_AbstractClass;
    if ( g_BuildingClassPoolManager && DataGlobal_B0F5C5 )
  {
    __3_YAXPAX_Z(g_BuildingClassPoolManager);
    g_BuildingClassPoolManager = 0;
  }
    DataGlobal_B0F5C5 = 0;
    DataGlobal_B0F5C0 = 0;
}
}
} // namespace gamemd

// 0x725550
namespace gamemd {
int sub_725550()
{
{
    DataGlobal_B0F644 = 0;
    DataGlobal_B0F648 = 0;
    DataGlobal_B0F64C = 1;
    DataGlobal_B0F64D = 0;
    DataGlobal_B0F640 = (int)&vt_DynamicVectorClass_AbstractClass;
    DataGlobal_B0F654 = 10;
    DataGlobal_B0F650 = 0;
    return atexit(sub_725590);
}
}
} // namespace gamemd

// 0x725590
namespace gamemd {
void sub_725590()
{
{
    DataGlobal_B0F640 = (int)&vt_VectorClass_AbstractClass;
    if ( DataGlobal_B0F644 && DataGlobal_B0F64D )
  {
    __3_YAXPAX_Z(DataGlobal_B0F644);
    DataGlobal_B0F644 = 0;
  }
    DataGlobal_B0F64D = 0;
    DataGlobal_B0F648 = 0;
}
}
} // namespace gamemd

// 0x7255D0
namespace gamemd {
int sub_7255D0()
{
{
    DataGlobal_B0F65C = 0;
    DataGlobal_B0F660 = 0;
    DataGlobal_B0F664 = 1;
    DataGlobal_B0F665 = 0;
    TActionClass_Array = (int)&vt_DynamicVectorClass_AbstractClass;
    DataGlobal_B0F66C = 10;
    g_TActionClassState = 0;
    return atexit(sub_725610);
}
}
} // namespace gamemd

// 0x725610
namespace gamemd {
void sub_725610()
{
{
    TActionClass_Array = (int)&vt_VectorClass_AbstractClass;
    if ( DataGlobal_B0F65C && DataGlobal_B0F665 )
  {
    __3_YAXPAX_Z(DataGlobal_B0F65C);
    DataGlobal_B0F65C = 0;
  }
    DataGlobal_B0F665 = 0;
    DataGlobal_B0F660 = 0;
}
}
} // namespace gamemd

// 0x725650
namespace gamemd {
int sub_725650()
{
{
    DataGlobal_B0F5F4 = 0;
    DataGlobal_B0F5F8 = 0;
    DataGlobal_B0F5FC = 1;
    DataGlobal_B0F5FD = 0;
    DataGlobal_B0F5F0 = (int)&vt_DynamicVectorClass_AbstractClass;
    DataGlobal_B0F604 = 10;
    DataGlobal_B0F600 = 0;
    return atexit(sub_725690);
}
}
} // namespace gamemd

// 0x725690
namespace gamemd {
void sub_725690()
{
{
    DataGlobal_B0F5F0 = (int)&vt_VectorClass_AbstractClass;
    if ( DataGlobal_B0F5F4 && DataGlobal_B0F5FD )
  {
    __3_YAXPAX_Z(DataGlobal_B0F5F4);
    DataGlobal_B0F5F4 = 0;
  }
    DataGlobal_B0F5FD = 0;
    DataGlobal_B0F5F8 = 0;
}
}
} // namespace gamemd

// 0x7256D0
namespace gamemd {
int sub_7256D0()
{
{
    DataGlobal_B0F5DC = 0;
    DataGlobal_B0F5E0 = 0;
    DataGlobal_B0F5E4 = 1;
    DataGlobal_B0F5E5 = 0;
    DataGlobal_B0F5D8 = (int)&vt_DynamicVectorClass_AbstractClass;
    DataGlobal_B0F5EC = 10;
    DataGlobal_B0F5E8 = 0;
    return atexit(sub_725710);
}
}
} // namespace gamemd

// 0x725710
namespace gamemd {
void sub_725710()
{
{
    DataGlobal_B0F5D8 = (int)&vt_VectorClass_AbstractClass;
    if ( DataGlobal_B0F5DC && DataGlobal_B0F5E5 )
  {
    __3_YAXPAX_Z(DataGlobal_B0F5DC);
    DataGlobal_B0F5DC = 0;
  }
    DataGlobal_B0F5E5 = 0;
    DataGlobal_B0F5E0 = 0;
}
}
} // namespace gamemd

// 0x725750
namespace gamemd {
int sub_725750()
{
{
    DataGlobal_B0F6CC = 0;
    DataGlobal_B0F6D0 = 0;
    DataGlobal_B0F6D4 = 1;
    DataGlobal_B0F6D5 = 0;
    DataGlobal_B0F6C8 = (int)&vt_DynamicVectorClass_AbstractClass;
    DataGlobal_B0F6DC = 10;
    DataGlobal_B0F6D8 = 0;
    return atexit(sub_725790);
}
}
} // namespace gamemd

// 0x725790
namespace gamemd {
void sub_725790()
{
{
    DataGlobal_B0F6C8 = (int)&vt_VectorClass_AbstractClass;
    if ( DataGlobal_B0F6CC && DataGlobal_B0F6D5 )
  {
    __3_YAXPAX_Z(DataGlobal_B0F6CC);
    DataGlobal_B0F6CC = 0;
  }
    DataGlobal_B0F6D5 = 0;
    DataGlobal_B0F6D0 = 0;
}
}
} // namespace gamemd

// 0x7257D0
namespace gamemd {
int sub_7257D0()
{
{
    DataGlobal_B0F6F4 = 0;
    DataGlobal_B0F6F8 = 0;
    DataGlobal_B0F6FC = 1;
    DataGlobal_B0F6FD = 0;
    DataGlobal_B0F6F0 = (int)&vt_DynamicVectorClass_AbstractClass;
    DataGlobal_B0F704 = 10;
    DataGlobal_B0F700 = 0;
    return atexit(sub_725810);
}
}
} // namespace gamemd

// 0x725810
namespace gamemd {
void sub_725810()
{
{
    DataGlobal_B0F6F0 = (int)&vt_VectorClass_AbstractClass;
    if ( DataGlobal_B0F6F4 && DataGlobal_B0F6FD )
  {
    __3_YAXPAX_Z(DataGlobal_B0F6F4);
    DataGlobal_B0F6F4 = 0;
  }
    DataGlobal_B0F6FD = 0;
    DataGlobal_B0F6F8 = 0;
}
}
} // namespace gamemd

// 0x725850
namespace gamemd {
int sub_725850()
{
{
    DataGlobal_B0F69C = 0;
    DataGlobal_B0F6A0 = 0;
    DataGlobal_B0F6A4 = 1;
    DataGlobal_B0F6A5 = 0;
    DataGlobal_B0F698 = (int)&vt_DynamicVectorClass_AbstractClass;
    DataGlobal_B0F6AC = 10;
    DataGlobal_B0F6A8 = 0;
    return atexit(sub_725890);
}
}
} // namespace gamemd

// 0x725890
namespace gamemd {
void sub_725890()
{
{
    DataGlobal_B0F698 = (int)&vt_VectorClass_AbstractClass;
    if ( DataGlobal_B0F69C && DataGlobal_B0F6A5 )
  {
    __3_YAXPAX_Z(DataGlobal_B0F69C);
    DataGlobal_B0F69C = 0;
  }
    DataGlobal_B0F6A5 = 0;
    DataGlobal_B0F6A0 = 0;
}
}
} // namespace gamemd

// 0x725D90
namespace gamemd {
void sub_725D90()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0F778 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x725DC0
namespace gamemd {
void sub_725DC0()
{
{
    DataGlobal_B0F7C8 = DataGlobal_B0F778 / 60.0;
}
}
} // namespace gamemd

// 0x725DE0
namespace gamemd {
void sub_725DE0()
{
{
    DataGlobal_B0F7B0 = 1.0 / DataGlobal_B0F7C8;
}
}
} // namespace gamemd

// 0x725E00
namespace gamemd {
void sub_725E00()
{
{
    DataGlobal_B0F7A8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x725E20
namespace gamemd {
void sub_725E20()
{
{
    DataGlobal_B0F780 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x725E40
namespace gamemd {
void sub_725E40()
{
{
    DataGlobal_B0F758 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x725E60
namespace gamemd {
long long sub_725E60()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0F758 - DataGlobal_B0F780);
    result = Math::RoundToInt(v0 * DataGlobal_B0F778 * 0.5);
    DataGlobal_B0F7D0 = result;
    return result;
}
}
} // namespace gamemd

// 0x725EA0
namespace gamemd {
void sub_725EA0()
{
{
    DataGlobal_B0F788 = Math::ArcTan((double)DataGlobal_B0F7D0 * 0.00390625);
}
}
} // namespace gamemd

// 0x725ED0
namespace gamemd {
void sub_725ED0()
{
{
    DataGlobal_B0F7A0 = Math::ArcTan((double)(2 * DataGlobal_B0F7D0) / DataGlobal_B0F778);
}
}
} // namespace gamemd

// 0x725F00
namespace gamemd {
long long sub_725F00()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0F7D0) + 0.5);
    DataGlobal_B0F7C4 = result;
    return result;
}
}
} // namespace gamemd

// 0x725F30
namespace gamemd {
int sub_725F30()
{
{
    DataGlobal_B0F770 = 0;
    DataGlobal_B0F772 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x725F40
namespace gamemd {
int sub_725F40()
{
{
    DataGlobal_B0F790 = 0;
    DataGlobal_B0F794 = 0;
    DataGlobal_B0F798 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x725F60
namespace gamemd {
int sub_725F60()
{
{
    DataGlobal_B0F7C0 = 0;
    DataGlobal_B0F7B8 = 128;
    DataGlobal_B0F7BC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x725F80
namespace gamemd {
int sub_725F80()
{
{
    DataGlobal_B0F760 = 0;
    DataGlobal_B0F764 = 0;
    DataGlobal_B0F768 = 0;
    DataGlobal_B0F76C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7266C0
namespace gamemd {
unsigned int * E4Recv_7266C0::sub_7266C0(char a2)
{
{
    this->M64 |= 1 << a2;
    return this;
}
}
} // namespace gamemd

// 0x726780
namespace gamemd {
char E4Recv_726780::sub_726780()
{
{
    return this->M48;
}
}
} // namespace gamemd

// 0x726920
namespace gamemd {
int E4Recv_726920::sub_726920(int a2)
{
{
    this->M44 = a2;
    return a2;
}
}
} // namespace gamemd

// 0x726A70
namespace gamemd {
void sub_726A70()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0F7F8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x726AA0
namespace gamemd {
void sub_726AA0()
{
{
    DataGlobal_B0F848 = DataGlobal_B0F7F8 / 60.0;
}
}
} // namespace gamemd

// 0x726AC0
namespace gamemd {
void sub_726AC0()
{
{
    DataGlobal_B0F830 = 1.0 / DataGlobal_B0F848;
}
}
} // namespace gamemd

// 0x726AE0
namespace gamemd {
void sub_726AE0()
{
{
    DataGlobal_B0F828 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x726B00
namespace gamemd {
void sub_726B00()
{
{
    DataGlobal_B0F800 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x726B20
namespace gamemd {
void sub_726B20()
{
{
    DataGlobal_B0F7D8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x726B40
namespace gamemd {
long long sub_726B40()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0F7D8 - DataGlobal_B0F800);
    result = Math::RoundToInt(v0 * DataGlobal_B0F7F8 * 0.5);
    DataGlobal_B0F850 = result;
    return result;
}
}
} // namespace gamemd

// 0x726B80
namespace gamemd {
void sub_726B80()
{
{
    DataGlobal_B0F808 = Math::ArcTan((double)DataGlobal_B0F850 * 0.00390625);
}
}
} // namespace gamemd

// 0x726BB0
namespace gamemd {
void sub_726BB0()
{
{
    DataGlobal_B0F820 = Math::ArcTan((double)(2 * DataGlobal_B0F850) / DataGlobal_B0F7F8);
}
}
} // namespace gamemd

// 0x726BE0
namespace gamemd {
long long sub_726BE0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0F850) + 0.5);
    DataGlobal_B0F844 = result;
    return result;
}
}
} // namespace gamemd

// 0x726C10
namespace gamemd {
int sub_726C10()
{
{
    DataGlobal_B0F7F0 = 0;
    DataGlobal_B0F7F2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x726C20
namespace gamemd {
int sub_726C20()
{
{
    DataGlobal_B0F810 = 0;
    DataGlobal_B0F814 = 0;
    DataGlobal_B0F818 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x726C40
namespace gamemd {
int sub_726C40()
{
{
    DataGlobal_B0F840 = 0;
    DataGlobal_B0F838 = 128;
    DataGlobal_B0F83C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x726C60
namespace gamemd {
int sub_726C60()
{
{
    DataGlobal_B0F7E0 = 0;
    DataGlobal_B0F7E4 = 0;
    DataGlobal_B0F7E8 = 0;
    DataGlobal_B0F7EC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x726FCE
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_20()
{
return 1;
}
} // namespace gamemd

// 0x727190
namespace gamemd {
ObjectClass * E4Recv_727190::sub_727190()
{
{
    ObjectClass *v2;
    const void **v3;
    v2 = 0;
    v3 = (const void **)&DataGlobal_830620[82904];
    while ( _strcmpi(this, *v3) )
  {
    ++v3;
    v2 = (ObjectClass *)((char *)(v2) + 1);
    if ( (int)v3 >= (int)&DataGlobal_830620[82916] )
    return 0;
  }
    return v2;
}
}
} // namespace gamemd

// 0x7271D0
namespace gamemd {
char * sub_7271D0(int a1)
{
{
    return DataGlobal_8449F8[a1];
}
}
} // namespace gamemd

// 0x727DC0
namespace gamemd {
void sub_727DC0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0F878 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x727DF0
namespace gamemd {
void sub_727DF0()
{
{
    DataGlobal_B0F8C8 = DataGlobal_B0F878 / 60.0;
}
}
} // namespace gamemd

// 0x727E10
namespace gamemd {
void sub_727E10()
{
{
    DataGlobal_B0F8B0 = 1.0 / DataGlobal_B0F8C8;
}
}
} // namespace gamemd

// 0x727E30
namespace gamemd {
void sub_727E30()
{
{
    DataGlobal_B0F8A8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x727E50
namespace gamemd {
void sub_727E50()
{
{
    DataGlobal_B0F880 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x727E70
namespace gamemd {
void sub_727E70()
{
{
    DataGlobal_B0F858 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x727E90
namespace gamemd {
long long sub_727E90()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0F858 - DataGlobal_B0F880);
    result = Math::RoundToInt(v0 * DataGlobal_B0F878 * 0.5);
    DataGlobal_B0F8D0 = result;
    return result;
}
}
} // namespace gamemd

// 0x727ED0
namespace gamemd {
void sub_727ED0()
{
{
    DataGlobal_B0F888 = Math::ArcTan((double)DataGlobal_B0F8D0 * 0.00390625);
}
}
} // namespace gamemd

// 0x727F00
namespace gamemd {
void sub_727F00()
{
{
    DataGlobal_B0F8A0 = Math::ArcTan((double)(2 * DataGlobal_B0F8D0) / DataGlobal_B0F878);
}
}
} // namespace gamemd

// 0x727F30
namespace gamemd {
long long sub_727F30()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0F8D0) + 0.5);
    DataGlobal_B0F8C4 = result;
    return result;
}
}
} // namespace gamemd

// 0x727F60
namespace gamemd {
int sub_727F60()
{
{
    DataGlobal_B0F870 = 0;
    DataGlobal_B0F872 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x727F70
namespace gamemd {
int sub_727F70()
{
{
    DataGlobal_B0F890 = 0;
    DataGlobal_B0F894 = 0;
    DataGlobal_B0F898 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x727F90
namespace gamemd {
int sub_727F90()
{
{
    DataGlobal_B0F8C0 = 0;
    DataGlobal_B0F8B8 = 128;
    DataGlobal_B0F8BC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x727FB0
namespace gamemd {
int sub_727FB0()
{
{
    DataGlobal_B0F860 = 0;
    DataGlobal_B0F864 = 0;
    DataGlobal_B0F868 = 0;
    DataGlobal_B0F86C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x728540
namespace gamemd {
char E4Recv_728540::sub_728540(int a2)
{
{
    int v2;
    int *v3;
    int v4;
    int v5;
    short v6;
    short v8;
    v2 = this->M36;
    v8 = HIWORD(v2);
    if ( v2 == *(int *)a2 )
    return 1;
    v3 = this + 12;
    if ( this->M48 == -1 )
    return 1;
    while ( 1 )
  {
    v4 = *v3++;
    v5 = v4 & 7;
    v6 = v8 + HIWORD(Direction_X_Offsets[v5]);
    LOWORD(v2) = v2 + LOWORD(Direction_X_Offsets[v5]);
    v8 = v6;
    if ( (short)v2 == *(short *)a2 && v6 == *(short *)(a2 + 2) )
    break;
    if ( *v3 == -1 )
    return 1;
  }
    return 0;
}
}
} // namespace gamemd

// 0x7287F0
namespace gamemd {
void sub_7287F0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0F8F8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x728820
namespace gamemd {
void sub_728820()
{
{
    DataGlobal_B0F948 = DataGlobal_B0F8F8 / 60.0;
}
}
} // namespace gamemd

// 0x728840
namespace gamemd {
void sub_728840()
{
{
    DataGlobal_B0F930 = 1.0 / DataGlobal_B0F948;
}
}
} // namespace gamemd

// 0x728860
namespace gamemd {
void sub_728860()
{
{
    DataGlobal_B0F928 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x728880
namespace gamemd {
void sub_728880()
{
{
    DataGlobal_B0F900 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x7288A0
namespace gamemd {
void sub_7288A0()
{
{
    DataGlobal_B0F8D8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x7288C0
namespace gamemd {
long long sub_7288C0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0F8D8 - DataGlobal_B0F900);
    result = Math::RoundToInt(v0 * DataGlobal_B0F8F8 * 0.5);
    DataGlobal_B0F950 = result;
    return result;
}
}
} // namespace gamemd

// 0x728900
namespace gamemd {
void sub_728900()
{
{
    DataGlobal_B0F908 = Math::ArcTan((double)DataGlobal_B0F950 * 0.00390625);
}
}
} // namespace gamemd

// 0x728930
namespace gamemd {
void sub_728930()
{
{
    DataGlobal_B0F920 = Math::ArcTan((double)(2 * DataGlobal_B0F950) / DataGlobal_B0F8F8);
}
}
} // namespace gamemd

// 0x728960
namespace gamemd {
long long sub_728960()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0F950) + 0.5);
    DataGlobal_B0F944 = result;
    return result;
}
}
} // namespace gamemd

// 0x728990
namespace gamemd {
int sub_728990()
{
{
    DataGlobal_B0F8F0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7289A0
namespace gamemd {
int sub_7289A0()
{
{
    DataGlobal_B0F910 = 0;
    DataGlobal_B0F914 = 0;
    DataGlobal_B0F918 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7289C0
namespace gamemd {
int sub_7289C0()
{
{
    DataGlobal_B0F940 = 0;
    DataGlobal_B0F938 = 128;
    DataGlobal_B0F93C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x7289E0
namespace gamemd {
int sub_7289E0()
{
{
    DataGlobal_B0F8E0 = 0;
    DataGlobal_B0F8E4 = 0;
    DataGlobal_B0F8E8 = 0;
    DataGlobal_B0F8EC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7294E0
namespace gamemd {
int E4Recv_7294E0::sub_7294E0()
{
{
    int *v2;
    int v3;
    int result;
    int v5;
    int v6[2];
    int v7;
    v2 = (int *)this->M12;
    v6[0] = v2[39];
    v6[1] = v2[40];
    v7 = v2[41];
    if ( v7 <= -256 )
  {
    result = (*(int (__thiscall **)(int *, int))(*v2 + 292))(v2, 0);
    this->M24 = 4;
  }
    else
  {
    v5 = (*(int (__thiscall **)(int *))(*v2 + 1336))(v2);
    v3 = Math::RoundToInt((double)v5 * *(double *)&g_RulesClass_Instance->TunnelSpeed);
    if ( v3 <= 5 )
    v3 = 5;
    v7 -= v3;
    if ( v7 < -256 )
    v7 = -256;
    return (*(int (__thiscall **)(int, int *))(*(int *)this->M12 + 436))(this->M12, v6);
  }
    return result;
}
}
} // namespace gamemd

// 0x72A230
namespace gamemd {
int sub_72A230()
{
{
    DataGlobal_B0F960 = 0;
    DataGlobal_B0F964 = 0;
    DataGlobal_B0F968 = 0;
    DataGlobal_B0F96C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x72A250
namespace gamemd {
void sub_72A250()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0F978 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x72A280
namespace gamemd {
void sub_72A280()
{
{
    DataGlobal_B0F9C8 = DataGlobal_B0F978 / 60.0;
}
}
} // namespace gamemd

// 0x72A2A0
namespace gamemd {
void sub_72A2A0()
{
{
    DataGlobal_B0F9B0 = 1.0 / DataGlobal_B0F9C8;
}
}
} // namespace gamemd

// 0x72A2C0
namespace gamemd {
void sub_72A2C0()
{
{
    DataGlobal_B0F9A8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x72A2E0
namespace gamemd {
void sub_72A2E0()
{
{
    DataGlobal_B0F980 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x72A300
namespace gamemd {
void sub_72A300()
{
{
    DataGlobal_B0F958 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x72A320
namespace gamemd {
long long sub_72A320()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0F958 - DataGlobal_B0F980);
    result = Math::RoundToInt(v0 * DataGlobal_B0F978 * 0.5);
    DataGlobal_B0F9D0 = result;
    return result;
}
}
} // namespace gamemd

// 0x72A360
namespace gamemd {
void sub_72A360()
{
{
    DataGlobal_B0F988 = Math::ArcTan((double)DataGlobal_B0F9D0 * 0.00390625);
}
}
} // namespace gamemd

// 0x72A390
namespace gamemd {
void sub_72A390()
{
{
    DataGlobal_B0F9A0 = Math::ArcTan((double)(2 * DataGlobal_B0F9D0) / DataGlobal_B0F978);
}
}
} // namespace gamemd

// 0x72A3C0
namespace gamemd {
long long sub_72A3C0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0F9D0) + 0.5);
    DataGlobal_B0F9C4 = result;
    return result;
}
}
} // namespace gamemd

// 0x72A3F0
namespace gamemd {
int sub_72A3F0()
{
{
    DataGlobal_B0F970 = 0;
    DataGlobal_B0F972 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x72A400
namespace gamemd {
int sub_72A400()
{
{
    DataGlobal_B0F990 = 0;
    DataGlobal_B0F994 = 0;
    DataGlobal_B0F998 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x72A420
namespace gamemd {
int sub_72A420()
{
{
    DataGlobal_B0F9C0 = 0;
    DataGlobal_B0F9B8 = 128;
    DataGlobal_B0F9BC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x72A690
namespace gamemd {
int sub_72A690()
{
{
    DataGlobal_B0FA08 = 0;
    DataGlobal_B0FA0C = 0;
    DataGlobal_B0FA10 = 0;
    DataGlobal_B0FA14 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x72A6B0
namespace gamemd {
void sub_72A6B0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0FA28 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x72A6E0
namespace gamemd {
void sub_72A6E0()
{
{
    DataGlobal_B0FB40 = DataGlobal_B0FA28 / 60.0;
}
}
} // namespace gamemd

// 0x72A700
namespace gamemd {
void sub_72A700()
{
{
    DataGlobal_B0FAF0 = 1.0 / DataGlobal_B0FB40;
}
}
} // namespace gamemd

// 0x72A720
namespace gamemd {
void sub_72A720()
{
{
    DataGlobal_B0FAE0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x72A740
namespace gamemd {
void sub_72A740()
{
{
    DataGlobal_B0FA40 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x72A760
namespace gamemd {
void sub_72A760()
{
{
    DataGlobal_B0F9F0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x72A780
namespace gamemd {
long long sub_72A780()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0F9F0 - DataGlobal_B0FA40);
    result = Math::RoundToInt(v0 * DataGlobal_B0FA28 * 0.5);
    DataGlobal_B0FB58 = result;
    return result;
}
}
} // namespace gamemd

// 0x72A7C0
namespace gamemd {
void sub_72A7C0()
{
{
    DataGlobal_B0FA58 = Math::ArcTan((double)DataGlobal_B0FB58 * 0.00390625);
}
}
} // namespace gamemd

// 0x72A7F0
namespace gamemd {
void sub_72A7F0()
{
{
    DataGlobal_B0FAB0 = Math::ArcTan((double)(2 * DataGlobal_B0FB58) / DataGlobal_B0FA28);
}
}
} // namespace gamemd

// 0x72A820
namespace gamemd {
long long sub_72A820()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0FB58) + 0.5);
    DataGlobal_B0FB38 = result;
    return result;
}
}
} // namespace gamemd

// 0x72A850
namespace gamemd {
int sub_72A850()
{
{
    DataGlobal_B0FA24 = 0;
    DataGlobal_B0FA26 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x72A860
namespace gamemd {
int sub_72A860()
{
{
    DataGlobal_B0FA80 = 0;
    DataGlobal_B0FA84 = 0;
    DataGlobal_B0FA88 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x72A880
namespace gamemd {
int sub_72A880()
{
{
    DataGlobal_B0FB28 = 0;
    DataGlobal_B0FB20 = 128;
    DataGlobal_B0FB24 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x72A8A0
namespace gamemd {
char sub_72A8A0()
{
{
    DataGlobal_B0FB4E = 0;
    DataGlobal_B0FB4C = -1;
    DataGlobal_B0FB4D = -1;
    return -1;
}
}
} // namespace gamemd

// 0x72A8C0
namespace gamemd {
char sub_72A8C0()
{
{
    DataGlobal_B0FA94 = 72;
    DataGlobal_B0FA95 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x72A8E0
namespace gamemd {
void sub_72A8E0()
{
{
    DataGlobal_B0F9FC = 0;
    DataGlobal_B0F9FD = 30034;
}
}
} // namespace gamemd

// 0x72A900
namespace gamemd {
char sub_72A900()
{
{
    DataGlobal_B0FB14 = 72;
    DataGlobal_B0FB15 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x72A920
namespace gamemd {
char sub_72A920()
{
{
    DataGlobal_B0FB19 = 72;
    DataGlobal_B0FB1A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x72A940
namespace gamemd {
void sub_72A940()
{
{
    DataGlobal_B0F9D8 = -11612;
    DataGlobal_B0F9DA = -1;
}
}
} // namespace gamemd

// 0x72A960
namespace gamemd {
char sub_72A960()
{
{
    DataGlobal_B0FB06 = 0;
    DataGlobal_B0FB04 = -1;
    return -1;
}
}
} // namespace gamemd

// 0x72A980
namespace gamemd {
char sub_72A980()
{
{
    DataGlobal_B0FAA2 = 0;
    DataGlobal_B0FAA0 = -1;
    return -1;
}
}
} // namespace gamemd

// 0x72A9A0
namespace gamemd {
char sub_72A9A0()
{
{
    LOWORD(DataGlobal_B0FA1C) = 0;
    BYTE2(DataGlobal_B0FA1C) = 0;
    return 0;
}
}
} // namespace gamemd

// 0x72A9C0
namespace gamemd {
unsigned int * AbstractClass::Copy8Bytes()
{
{
    int *v1;
    int *result;
    int v3;
    int v4;
    result = this->__pad_0;
    v3 = *v1;
    v4 = v1[1];
    *result = v3;
    result[1] = v4;
    return result;
}
}
} // namespace gamemd

// 0x72A9D0
namespace gamemd {
int sub_72A9D0(int * a1, int * a2)
{
{
    int result;
    result = *a2;
    *a1 = *a2;
    *((int*)(a1) + 1) = *((int*)(a2) + 1);
    return result;
}
}
} // namespace gamemd

// 0x72AA10
namespace gamemd {
int CubicBezierAdvance(unsigned int * a1, int a2, int a3)
{
{
    int v3;
    int v4;
    int v6;
    v3 = *((int*)(a1) + 1);
    *a1 += a2;
    *((int*)(a1) + 1) = a3 + v3;
    v4 = -2 * a2 + *((int*)(a1) + 2);
    v6 = -2 * a3 + *((int*)(a1) + 3);
    *((int*)(a1) + 2) = v4;
    *((int*)(a1) + 3) = v6;
    return -2 * a3;
}
}
} // namespace gamemd

// 0x72AFE0
namespace gamemd {
CCINIClass * sub_72AFE0()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[42716];
}
}
} // namespace gamemd

// 0x72B000
namespace gamemd {
CCINIClass * sub_72B000()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[42724];
}
}
} // namespace gamemd

// 0x72B020
namespace gamemd {
CCINIClass * sub_72B020()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[42708];
}
}
} // namespace gamemd

// 0x72B040
namespace gamemd {
CCINIClass * sub_72B040()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[42732];
}
}
} // namespace gamemd

// 0x72B330
namespace gamemd {
CCINIClass * sub_72B330()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[42740];
}
}
} // namespace gamemd

// 0x72B350
namespace gamemd {
CCINIClass * sub_72B350()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[42748];
}
}
} // namespace gamemd

// 0x72B370
namespace gamemd {
CCINIClass * sub_72B370()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[42756];
}
}
} // namespace gamemd

// 0x72B4F0
namespace gamemd {
CCINIClass * sub_72B4F0()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[42764];
}
}
} // namespace gamemd

// 0x72B510
namespace gamemd {
CCINIClass * sub_72B510()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[42772];
}
}
} // namespace gamemd

// 0x72B9B0
namespace gamemd {
char sub_72B9B0()
{
{
    return DataGlobal_B0FD5D;
}
}
} // namespace gamemd

// 0x72B9C0
namespace gamemd {
CCINIClass * sub_72B9C0()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[43224];
}
}
} // namespace gamemd

// 0x72BB90
namespace gamemd {
char sub_72BB90()
{
{
    return DataGlobal_B0FD51;
}
}
} // namespace gamemd

// 0x72BBA0
namespace gamemd {
CCINIClass * sub_72BBA0()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[43212];
}
}
} // namespace gamemd

// 0x72BD70
namespace gamemd {
char sub_72BD70()
{
{
    return DataGlobal_B0FD45;
}
}
} // namespace gamemd

// 0x72BD80
namespace gamemd {
CCINIClass * sub_72BD80()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[43200];
}
}
} // namespace gamemd

// 0x72BF50
namespace gamemd {
char sub_72BF50()
{
{
    return DataGlobal_B0FD39;
}
}
} // namespace gamemd

// 0x72BF60
namespace gamemd {
CCINIClass * sub_72BF60()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[43188];
}
}
} // namespace gamemd

// 0x72C130
namespace gamemd {
char sub_72C130()
{
{
    return DataGlobal_B0FD2D;
}
}
} // namespace gamemd

// 0x72C140
namespace gamemd {
CCINIClass * sub_72C140()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[43176];
}
}
} // namespace gamemd

// 0x72C310
namespace gamemd {
char sub_72C310()
{
{
    return DataGlobal_B0FD21;
}
}
} // namespace gamemd

// 0x72C320
namespace gamemd {
CCINIClass * sub_72C320()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[43164];
}
}
} // namespace gamemd

// 0x72C4F0
namespace gamemd {
char sub_72C4F0()
{
{
    return DataGlobal_B0FD15;
}
}
} // namespace gamemd

// 0x72C500
namespace gamemd {
CCINIClass * sub_72C500()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[43152];
}
}
} // namespace gamemd

// 0x72C6D0
namespace gamemd {
char sub_72C6D0()
{
{
    return DataGlobal_B0FD09;
}
}
} // namespace gamemd

// 0x72C6E0
namespace gamemd {
CCINIClass * sub_72C6E0()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[43140];
}
}
} // namespace gamemd

// 0x72C8B0
namespace gamemd {
char sub_72C8B0()
{
{
    return DataGlobal_B0FCFD;
}
}
} // namespace gamemd

// 0x72C8C0
namespace gamemd {
CCINIClass * sub_72C8C0()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[43128];
}
}
} // namespace gamemd

// 0x72CA90
namespace gamemd {
char sub_72CA90()
{
{
    return DataGlobal_B0FCF1;
}
}
} // namespace gamemd

// 0x72CAA0
namespace gamemd {
CCINIClass * sub_72CAA0()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[43116];
}
}
} // namespace gamemd

// 0x72CC60
namespace gamemd {
char sub_72CC60()
{
{
    return DataGlobal_B0FC7C;
}
}
} // namespace gamemd

// 0x72CC70
namespace gamemd {
int sub_72CC70()
{
{
    return DataGlobal_B0FC74;
}
}
} // namespace gamemd

// 0x72CE30
namespace gamemd {
char sub_72CE30()
{
{
    return DataGlobal_B0FCE5;
}
}
} // namespace gamemd

// 0x72CE40
namespace gamemd {
CCINIClass * sub_72CE40()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[43104];
}
}
} // namespace gamemd

// 0x72CF90
namespace gamemd {
void FileTree_Cleanup()
{
{
    void *v0;
    if ( DataGlobal_B0FCD9 )
  {
    if ( DataGlobal_B0FCD8 )
    {
    v0 = DataGlobal_B0FA18;
    if ( DataGlobal_B0FA18 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FA18);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FCD8 = 0;
    }
    DataGlobal_B0FA18 = 0;
    if ( DataGlobal_B0FCDC )
    {
    __3_YAXPAX_Z(DataGlobal_B0FCDC);
    DataGlobal_B0FCDC = 0;
    }
    if ( DataGlobal_B0FCE0 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FCE0)(DataGlobal_B0FCE0, 1);
    DataGlobal_B0FCE0 = 0;
    }
  }
    DataGlobal_B0FCD9 = 0;
}
}
} // namespace gamemd

// 0x72D010
namespace gamemd {
char sub_72D010()
{
{
    return DataGlobal_B0FCD9;
}
}
} // namespace gamemd

// 0x72D020
namespace gamemd {
CCINIClass * sub_72D020()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[43092];
}
}
} // namespace gamemd

// 0x72D1F0
namespace gamemd {
char sub_72D1F0()
{
{
    return DataGlobal_B0FCCE;
}
}
} // namespace gamemd

// 0x72D200
namespace gamemd {
CCINIClass * sub_72D200()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[43080];
}
}
} // namespace gamemd

// 0x72D430
namespace gamemd {
char sub_72D430()
{
{
    return DataGlobal_B0FBAC;
}
}
} // namespace gamemd

// 0x72D440
namespace gamemd {
void * sub_72D440()
{
{
    return DataGlobal_B0FBA4;
}
}
} // namespace gamemd

// 0x72D800
namespace gamemd {
char sub_72D800()
{
{
    return DataGlobal_B0FBB8;
}
}
} // namespace gamemd

// 0x72D810
namespace gamemd {
void * sub_72D810()
{
{
    return DataGlobal_B0FBB0;
}
}
} // namespace gamemd

// 0x72D9A0
namespace gamemd {
int sub_72D9A0()
{
{
    void *FileSHP;
    char *v1;
    if ( g_DisplayWidth == 640 )
  {
    DataGlobal_B0FB48 = LoadFileSHP(DataGlobal_844CB8, (bool *)&DataGlobal_B0FCC8);
    DataGlobal_B0FB10 = LoadFileSHP(DataGlobal_844CC4, (bool *)&DataGlobal_B0FCCA);
    FileSHP = LoadFileSHP(DataGlobal_844CC8, (bool *)&DataGlobal_B0FCCB);
    v1 = DataGlobal_844CD0[0];
  }
    else
  {
    DataGlobal_B0FB48 = LoadFileSHP(DataGlobal_844D4C, (bool *)&DataGlobal_B0FCC8);
    DataGlobal_B0FB10 = LoadFileSHP(DataGlobal_844D54, (bool *)&DataGlobal_B0FCCA);
    FileSHP = LoadFileSHP(DataGlobal_844CCC, (bool *)&DataGlobal_B0FCCB);
    v1 = DataGlobal_844D5C;
  }
    DataGlobal_B0F9F8 = FileSHP;
    DataGlobal_B0FA6C = LoadFileSHP(v1, (bool *)&DataGlobal_B0FCCC);
    LoadPaletteSimple(DataGlobal_844BE0, &DataGlobal_B0FBBC, &DataGlobal_B0FBC0);
    LoadPaletteSimple(DataGlobal_844D50, &DataGlobal_B0FCB0, &DataGlobal_B0FCB4);
    LoadPaletteSimple(DataGlobal_844D58, &DataGlobal_B0FCB8, &DataGlobal_B0FCBC);
    return LoadPaletteSimple(DataGlobal_844D60, &DataGlobal_B0FCC0, &DataGlobal_B0FCC4);
}
}
} // namespace gamemd

// 0x72DAB0
namespace gamemd {
void * sub_72DAB0()
{
{
    return DataGlobal_B0FBBC;
}
}
} // namespace gamemd

// 0x72DAF0
namespace gamemd {
int sub_72DAF0()
{
{
    return DataGlobal_B0FBC0;
}
}
} // namespace gamemd

// 0x72E270
namespace gamemd {
CCINIClass * sub_72E270()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[42816];
}
}
} // namespace gamemd

// 0x72E290
namespace gamemd {
CCINIClass * sub_72E290()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[42824];
}
}
} // namespace gamemd

// 0x72E2B0
namespace gamemd {
CCINIClass * sub_72E2B0()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[42832];
}
}
} // namespace gamemd

// 0x72E990
namespace gamemd {
void sub_72E990(int a1, ConvertClass * a2)
{
{
    int v2;
    int v3;
    v2 = 0;
    v3 = 0;
    v2 = **(int **)&DataGlobal_B05488[42900];
    v3 = *(int *)(*(int *)&DataGlobal_B05488[42900] + 4);
    DrawToSurfaceSHP( a1, *(int *)&DataGlobal_B05488[42784], *(ConvertClass **)&DataGlobal_B05488[42668], 0, (ConvertClass *)&v2, a2, (ConvertClass *)0x400, 0, 0, 0, (ConvertClass *)0x3E8, 0, 0, 0, 0, 0);
}
}
} // namespace gamemd

// 0x72EA70
namespace gamemd {
void sub_72EA70(int a1, ConvertClass * a2)
{
{
    int v2;
    int v3;
    v2 = 0;
    v3 = 0;
    v2 = **(int **)&DataGlobal_B05488[42900];
    v3 = *(int *)(*(int *)&DataGlobal_B05488[42900] + 4);
    DrawToSurfaceSHP( a1, *(int *)&DataGlobal_B05488[42796], *(ConvertClass **)&DataGlobal_B05488[42644], 0, (ConvertClass *)&v2, a2, (ConvertClass *)0x400, 0, 0, 0, (ConvertClass *)0x3E8, 0, 0, 0, 0, 0);
}
}
} // namespace gamemd

// 0x72F4C0
namespace gamemd {
CCINIClass * sub_72F4C0()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[42876];
}
}
} // namespace gamemd

// 0x72F4F0
namespace gamemd {
int sub_72F4F0()
{
{
    return DataGlobal_B0FC00;
}
}
} // namespace gamemd

// 0x72F500
namespace gamemd {
CCINIClass * sub_72F500()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[42860];
}
}
} // namespace gamemd

// 0x72F520
namespace gamemd {
CCINIClass * sub_72F520()
{
{
    return *(CCINIClass **)&DataGlobal_B05488[42852];
}
}
} // namespace gamemd

// 0x72F530
namespace gamemd {
int sub_72F530()
{
{
    return DataGlobal_B0FBF0;
}
}
} // namespace gamemd
