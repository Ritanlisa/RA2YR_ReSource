// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_4517D0_e4.hpp"
#include "e4/classes/E4Recv_4528A0_e4.hpp"
#include "e4/classes/E4Recv_457A10_e4.hpp"
#include "e4/classes/E4Recv_45DD20_e4.hpp"
#include "e4/classes/E4Recv_45DD50_e4.hpp"
#include "e4/classes/E4Recv_45E8B0_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x451400
namespace gamemd {
char UpdateBuildingActiveAnim(int a1, int edx0)
{
  int v3; // eax
  int v4; // edi
  int v5; // esi
  unsigned int *v6; // ebx
  int v7; // ecx
  double HealthRatioBuildingClass; // st7
  unsigned int v9;
  int v10; // ecx
  int v11; // edi
  int v12; // esi
  unsigned int *v13; // ebx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // ebx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  char v21; // al
  BOOL v22; // edx
  int v23; // eax
  unsigned char *v24; // ecx
  char v25[64]; // [esp+10h] [ebp-40h] BYREF

  v3 = *(unsigned int *)(*(unsigned int *)(a1 + 1312) + 160); /*0x451412*/
  if ( *(unsigned int *)(a1 + 108) != v3 ) /*0x45141a*/
  {
    *(unsigned int *)(a1 + 108) = v3; /*0x451420*/
    if ( *(unsigned char *)(a1 + 1766) ) /*0x451423*/
    {
      v4 = 0; /*0x45142d*/
      *(unsigned char *)(a1 + 1766) = 0; /*0x45142f*/
      v5 = 0; /*0x451436*/
      v6 = (unsigned int *)(a1 + 1372); /*0x451438*/
      do /*0x451475*/
      {
        if ( *v6 ) /*0x45143e*/
        {
          v7 = *(unsigned int *)(a1 + 1312); /*0x451443*/
          if ( v5 + v7 != -3916 ) /*0x451452*/
          {
            if ( *(unsigned char *)(v5 + v7 + 3916) ) /*0x451454*/
              BuildingClass::PlayAnim((unsigned int *)a1, edx0, (void *)(v5 + v7 + 3916), v4, 0, 0, 0); /*0x451463*/
          }
        }
        v5 += 68; /*0x451468*/
        ++v4; /*0x45146b*/
        ++v6; /*0x45146c*/
      }
      while ( v5 < 1428 ); /*0x451475*/
    }
    HealthRatioBuildingClass = BuildingClass::GetHealthRatio((int *)a1); /*0x451479*/
    v9 = g_RulesClass_Instance; /*0x45147e*/
    if ( HealthRatioBuildingClass > *(double *)&g_RulesClass_Instance[1].WarpOut ) /*0x45148f*/
    {
      v10 = *(unsigned int *)(a1 + 784); /*0x451491*/
      if ( v10 ) /*0x451499*/
        (*(void (__thiscall **)(int))(*(unsigned int *)v10 + 248))(v10); /*0x45149d*/
    }
    v11 = 3; /*0x4514a3*/
    v12 = 204; /*0x4514a8*/
    v13 = (unsigned int *)(a1 + 1384); /*0x4514ad*/
    do /*0x4514ea*/
    {
      if ( !*v13 ) /*0x4514b3*/
      {
        v14 = *(unsigned int *)(a1 + 1312); /*0x4514b8*/
        if ( v12 + v14 != -3916 ) /*0x4514c7*/
        {
          if ( *(unsigned char *)(v12 + v14 + 3916) ) /*0x4514c9*/
            BuildingClass::PlayAnim((unsigned int *)a1, (int)v9, (void *)(v12 + v14 + 3916), v11, 0, 0, 0); /*0x4514d8*/
        }
      }
      v12 += 68; /*0x4514dd*/
      ++v11; /*0x4514e0*/
      ++v13; /*0x4514e1*/
    }
    while ( v12 <= 408 ); /*0x4514ea*/
    *(unsigned char *)(a1 + 128) = 1; /*0x4514ec*/
  }
  v15 = *(unsigned int *)(a1 + 1312); /*0x4514f9*/
  if ( v15 == g_RulesClass_Instance->NSGates[1] ) /*0x451505*/
  {
    v16 = *(unsigned int *)(a1 + 1532); /*0x45150b*/
    v17 = v16 + 1; /*0x451511*/
    if ( v16 + 1 > 2 ) /*0x451517*/
      v17 = 0; /*0x451519*/
    if ( v17 != v16 && !*(unsigned char *)(v15 + 5829) ) /*0x451523*/
    {
      BuildingClass::ClearAnims((int *)a1, 9); /*0x451535*/
      if ( v17 != -1 ) /*0x45153d*/
      {
        strcpy(v25, (const char *)(*(unsigned int *)(a1 + 1312) + 504)); /*0x45156b*/
        v18 = strlen(asc_818D7C) + 1; /*0x45158c*/
        qmemcpy(&v25[strlen(v25)], asc_818D7C, v18); /*0x451599*/
        v19 = strlen(v25); /*0x4515b3*/
        v25[v19] = v17 + 66; /*0x4515b6*/
        v25[v19 + 1] = 0; /*0x4515ba*/
        BuildingClass::PlayAnim((unsigned int *)a1, v18, v25, 9, 0, 0, 0); /*0x4515c6*/
        *(unsigned int *)(a1 + 1532) = v17; /*0x4515cb*/
      }
    }
    ++*(unsigned char *)(a1 + 1794); /*0x4515db*/
    return 1; /*0x4515e2*/
  }
  else
  {
    v21 = *(unsigned char *)(a1 + 1794); /*0x4515e9*/
    if ( v21 == *(unsigned int *)(v15 + 5344) ) /*0x4515fa*/
    {
      return 0; /*0x4515ff*/
    }
    else
    {
      *(unsigned char *)(a1 + 1794) = v21 + 1; /*0x45160a*/
      v22 = BuildingClass::GetHealthRatio((int *)a1) <= *(double *)&g_RulesClass_Instance[1].WarpOut; /*0x451625*/
      v23 = *(char *)(a1 + 1794) - 1; /*0x451637*/
      if ( v22 ) /*0x45163c*/
        v24 = (unsigned char *)(*(unsigned int *)(a1 + 1312) + 68 * v23 + 3932); /*0x451649*/
      else
        v24 = (unsigned char *)(*(unsigned int *)(a1 + 1312) + 68 * v23 + 3916); /*0x45165d*/
      if ( v24 && *v24 ) /*0x451668*/
        BuildingClass::PlayAnim((unsigned int *)a1, v22, v24, v23, v22, 0, 0); /*0x451676*/
      return 1; /*0x45167e*/
    }
  }
}
}
// 0x452000
namespace gamemd {
void sub_452000(unsigned int * a1)
{
  int v2; // eax
  int v3; // edi
  unsigned int *v4; // eax
  unsigned int *v5; // eax
  int v6; // ecx
  int v7; // ebx
  unsigned int *v8; // ecx
  int v9; // ebp
  bool v10; // zf
  int v11; // ebx
  int *v12; // ecx
  int v13; // esi
  int result; // eax
  unsigned int *v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-8h]

  v17 = (*(int (__thiscall **)(unsigned int *))(*a1 + 484))(a1); /*0x452015*/
  v2 = (*(int (__thiscall **)(unsigned int *))(*a1 + 444))(a1); /*0x452019*/
  v3 = (*(int (__thiscall **)(unsigned int *, unsigned int))(*a1 + 1124))(a1, *(int16_t *)(v2 + 266)); /*0x452031*/
  if ( (*(uint8_t (__thiscall **)(unsigned int *))(*a1 + 352))(a1)
    || a1[165]
    && (a1 ? (v4 = (*(int (__thiscall **)(unsigned int *))(*a1 + 44))(a1) == 6 ? a1 : 0) : (v4 = 0),
        *(unsigned int **)(a1[165] + 80) == v4) )
  {
    IDA_LOWORD(v3) = Techno::StartInvulnerability(v3); /*0x452078*/
  }
  *((unsigned short *)a1 + 896) = v3; /*0x45207a*/
  v15 = a1 + 343; /*0x452091*/
  v16 = 21; /*0x452095*/
  do /*0x45211d*/
  {
    v5 = (unsigned int *)*v15; /*0x4520a1*/
    if ( *v15 ) /*0x4520a1*/
    {
      v6 = v5[50]; /*0x4520a7*/
      if ( v6 && *(unsigned char *)(v6 + 860) ) /*0x4520b1*/
      {
        v5[53] = v17; /*0x4520c3*/
        v5[63] = (uint16_t)v3; /*0x4520c9*/
      }
      v7 = *((char *)a1 + 1773); /*0x4520cf*/
      if ( v7 == 15 && (*(int (__thiscall **)(unsigned int *, unsigned int, unsigned int))(*a1 + 104))(a1, 0, 0) == 5 ) /*0x4520e9*/
        IDA_LOBYTE(v7) = 16; /*0x4520eb*/
      v8 = a1 + 343; /*0x4520f0*/
      v9 = 21; /*0x4520f2*/
      do /*0x452107*/
      {
        if ( *v8 ) /*0x4520f7*/
          *(unsigned char *)(*v8 + 376) = v7; /*0x4520fd*/
        ++v8; /*0x452103*/
        --v9; /*0x452106*/
      }
      while ( v9 ); /*0x452107*/
    }
    v10 = v16 == 1; /*0x452114*/
    ++v15; /*0x452115*/
    --v16; /*0x452119*/
  }
  while ( !v10 ); /*0x45211d*/
  v11 = *((char *)a1 + 1773); /*0x452123*/
  if ( v11 == 15 && (*(int (__thiscall **)(unsigned int *, unsigned int, unsigned int))(*a1 + 104))(a1, 0, 0) == 5 ) /*0x45213d*/
    IDA_LOBYTE(v11) = 16; /*0x45213f*/
  v12 = a1 + 343; /*0x452144*/
  v13 = 21; /*0x452146*/
  do /*0x45215b*/
  {
    result = *v12; /*0x45214b*/
    if ( *v12 ) /*0x45214b*/
      *(unsigned char *)(result + 376) = v11; /*0x452151*/
    ++v12; /*0x452157*/
    --v13; /*0x45215a*/
  }
  while ( v13 ); /*0x45215b*/
  return result; /*0x45215d*/
}
}
// 0x452D40
namespace gamemd {
void sub_452D40()
{
  int result; // eax
  int i; // edi
  int v2; // esi

  result = g_BuildingProductionState; /*0x452d40*/
  for ( i = 0; i < g_BuildingProductionState; ++i ) /*0x452d4a*/
  {
    v2 = *((unsigned int *)g_BuildingClass_InstanceCount + i); /*0x452d52*/
    if ( v2 /*0x452d7c*/
      && v2->Type->LaserFencePost
      && !g_IKnowWhatImDoing
      && v2->isAliveFlag
      && !v2->inLimbo )
    {
      BuildingClass::DemolishBridge((void *)v2); /*0x452d8a*/
      BuildingClass::DemolishBridge((void *)v2); /*0x452d93*/
      BuildingClass::DemolishBridge((void *)v2); /*0x452d9c*/
      BuildingClass::DemolishBridge((void *)v2); /*0x452da5*/
      BuildingClass::RepairPlacement((unsigned char *)v2, 1); /*0x452dae*/
    }
    result = g_BuildingProductionState; /*0x452db3*/
  }
  return result; /*0x452dbe*/
}
}
// 0x456980
namespace gamemd {
void* DrawTechnoDeployCircle(IUnknown * aP0, IUnknown * aP1, int a1, int a4, int a5, int a6, float a7, char a8, char a9)
{
  double v9; // st7
  int v10; // eax
  double v11; // st7
  int v12; // esi
  double *v13; // edx
  int v14; // eax
  double v15; // st7
  double *v16; // ebx
  double v17; // st7
  double v18; // st7
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // esi
  int v23; // eax
  double v24; // st7
  double v25; // st7
  int v26; // esi
  int v27; // eax
  int v28; // edi
  double v29; // st7
  float v31; // [esp+5Ch] [ebp-8Ch]
  int16_t v34; // [esp+70h] [ebp-78h] BYREF
  char v35; // [esp+72h] [ebp-76h]
  int v36; // [esp+74h] [ebp-74h]
  double v37; // [esp+78h] [ebp-70h]
  int16_t v38; // [esp+80h] [ebp-68h]
  uint8_t v39; // [esp+82h] [ebp-66h]
  int v40; // [esp+88h] [ebp-60h] BYREF
  int v41; // [esp+8Ch] [ebp-5Ch]
  double v42; // [esp+90h] [ebp-58h]
  double v43; // [esp+98h] [ebp-50h]
  double v44; // [esp+A0h] [ebp-48h]
  double v45; // [esp+A8h] [ebp-40h]
  double v46; // [esp+B0h] [ebp-38h]
  unsigned int v47[4]; // [esp+B8h] [ebp-30h] BYREF
  double v48; // [esp+C8h] [ebp-20h] BYREF
  int v49[4]; // [esp+D8h] [ebp-10h] BYREF

  v9 = a7; /*0x45698d*/
  if ( a9 ) /*0x45699c*/
    v9 = (double)(int)Math::RoundToInt(v9); /*0x4569a7*/
  if ( a8 ) /*0x4569b0*/
  {
    v10 = Math::RoundToInt(v9); /*0x4569b2*/
  }
  else
  {
    v48 = v9 + 0.5; /*0x4569c6*/
    v11 = Math::Sqrt(2.0); /*0x4569ca*/
    v10 = Math::RoundToInt(v48 / v11 * 60.0); /*0x4569dc*/
  }
  v12 = v10; /*0x4569e1*/
  v36 = v10; /*0x4569f2*/
  Coord::To_Screen(g_TacticalClass_Instance, &a1, &v40); /*0x4569f6*/
  v40 += DSurface_ViewBounds; /*0x456a11*/
  v41 += g_Map_VisibleRect; /*0x456a20*/
  v49[1] = v41 - v12 / 2; /*0x456a2f*/
  IDA_LODWORD(v37) = v12 / 2; /*0x456a48*/
  v49[0] = v40 - v12; /*0x456a4c*/
  v49[2] = 2 * v12; /*0x456a53*/
  v49[3] = v12; /*0x456a5a*/
  v13 = (double *)ClipRectIntersection(v47, v49, &DSurface_ViewBounds, 0, 0); /*0x456a66*/
  v48 = *v13; /*0x456a6a*/
  v14 = *((unsigned int *)v13 + 2); /*0x456a75*/
  if ( v14 > 0 && *((int *)v13 + 3) > 0 ) /*0x456a85*/
  {
    v39 = IDA_BYTE2(a6); /*0x456a92*/
    v34 = 0; /*0x456a9c*/
    v35 = 0; /*0x456aa6*/
    v38 = a6; /*0x456aab*/
    if ( aP1 ) /*0x456ab0*/
      Color::Lerp(50, &v34); /*0x456abd*/
    (*(void (__thiscall **)(int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2 + 32))( /*0x456b57*/
      g_DSurface_Hidden_2,
      v40,
      v41,
      v12,
      v12 / 2,
      DSurface_ViewBounds,
      g_Map_VisibleRect,
      g_Map_VisibleRectOffset,
      g_DSurface_WindowOffset,
      ((uint8_t)v38 >> g_BitShift_Green_0 << g_BitShift_Red)
    | (IDA_HIBYTE(v38) >> g_BitMask_Blue << g_BitMask_Green)
    | (v39 >> g_BitMask_Red << g_BitShift_Blue));
    (*(void (__thiscall **)(int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2 + 32))( /*0x456beb*/
      g_DSurface_Hidden_2,
      v40,
      v41,
      v12 - 1,
      v12 / 2 - 1,
      DSurface_ViewBounds,
      g_Map_VisibleRect,
      g_Map_VisibleRectOffset,
      g_DSurface_WindowOffset,
      ((uint8_t)v38 >> g_BitShift_Green_0 << g_BitShift_Red)
    | (IDA_HIBYTE(v38) >> g_BitMask_Blue << g_BitMask_Green)
    | (v39 >> g_BitMask_Red << g_BitShift_Blue));
    IDA_LOBYTE(v14) = aP0; /*0x456bee*/
    if ( aP0 ) /*0x456bf4*/
    {
      v15 = (unsigned int)((double)v36);
      v36 = 0; /*0x456bfe*/
      v16 = (double *)&dword_818CC8; /*0x456c06*/
      v43 = v15; /*0x456c0b*/
      v42 = (double)IDA_SLODWORD(v37); /*0x456c13*/
      do /*0x456c23*/
      {
        IDA_LODWORD(v37) = (char *)g_CurrentFrame + v36; /*0x456c23*/
        v17 = (double)((int)g_CurrentFrame + v36) * 0.005; /*0x456c2b*/
        v37 = v17 - (double)(int)Math::RoundToInt(v17) * 6.283185307179586; /*0x456c4e*/
        if ( fabs(v37 - 1.570796326794897) >= 0.001 ) /*0x456c6b*/
        {
          if ( fabs(v37 - 4.71238898038469) >= 0.001 ) /*0x456ca1*/
          {
            v24 = Math::Sin(v37); /*0x456cb3*/
            v45 = v42 * v42; /*0x456cc0*/
            v44 = v43 * v43; /*0x456ccc*/
            v46 = Math::Sqrt(1.0 / (v24 * v24 / v45 + 1.0 / v44)); /*0x456cf4*/
            v25 = Math::Sqrt((1.0 - v46 * v46 / v44) * v45); /*0x456d0f*/
            if ( v37 < 3.141592653589793 ) /*0x456d54*/
              v25 = -v25; /*0x456d5a*/
            v26 = Math::RoundToInt(v25); /*0x456d61*/
            v27 = Math::RoundToInt(v25); /*0x456d63*/
            v21 = v40; /*0x456d68*/
            v20 = v41; /*0x456d6c*/
            v28 = v26 + v40; /*0x456d70*/
            v22 = v41 + v27; /*0x456d73*/
            v23 = v28; /*0x456d76*/
            goto LABEL_20; /*0x456d76*/
          }
          v18 = v42; /*0x456ca3*/
        }
        else
        {
          v18 = -v42; /*0x456c71*/
        }
        v19 = Math::RoundToInt(v18); /*0x456c73*/
        v20 = v41; /*0x456c78*/
        v21 = v40; /*0x456c7c*/
        v22 = v41 + v19; /*0x456c80*/
        v23 = v40; /*0x456c83*/
  LABEL_20:
        v29 = *v16; /*0x456d78*/
        v47[0] = v23 - DSurface_ViewBounds; /*0x456d88*/
        IDA_HIDWORD(v48) = v20 - g_Map_VisibleRect; /*0x456d91*/
        IDA_LODWORD(v48) = v21 - DSurface_ViewBounds; /*0x456da3*/
        v31 = v29; /*0x456da7*/
        v47[1] = v22 - g_Map_VisibleRect; /*0x456dc9*/
        IDA_LOBYTE(v14) = (*(int (__thiscall **)(int, int *, double *, unsigned int *, int *, int, int, unsigned int, int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2 + 60))( /*0x456dd8*/
                        g_DSurface_Hidden_2,
                        &DSurface_ViewBounds,
                        &v48,
                        v47,
                        &a6,
                        -500,
                        -500,
                        0,
                        1,
                        1,
                        1,
                        IDA_LODWORD(v31));
        ++v16; /*0x456ddf*/
        ++v36; /*0x456de9*/
      }
      while ( (int)v16 < (int)aStructures ); /*0x456c23*/
    }
  }
  return (void *)(v14);
}
}
// 0x456FB0
namespace gamemd {
BuildingTypeClass * * sub_456FB0(unsigned int * a1, int a2, int a3)
{
  int v4; // edi
  unsigned int *v5; // eax

  v4 = (*(int (__thiscall **)(unsigned int *, int))(*a1 + 1124))(a1, a3); /*0x456fc7*/
  if ( (*(uint8_t (__thiscall **)(unsigned int *))(*a1 + 352))(a1) ) /*0x456fc9*/
    return Techno::StartInvulnerability(v4); /*0x456fc9*/
  if ( a1[165]
    && (a1 ? (v5 = (*(int (__thiscall **)(unsigned int *))(*a1 + 44))(a1) == 6 ? a1 : 0) : (v5 = 0),
        *(unsigned int **)(a1[165] + 80) == v5) )
  {
    return Techno::StartInvulnerability(v4); /*0x457005*/
  }
  else
  {
    return (gamemd::BuildingTypeClass **)(v4);
  }
}
}
// 0x459F40
namespace gamemd {
int ObjectType_IsBuildingType(int a1)
{
  if ( a1 )
    return (*(int (__thiscall **)(int))(*(unsigned int *)a1 + 44))(a1) == 6 ? a1 : 0;
  else
    return 0; /*0x459f47*/
}
}
// 0x45C300
namespace gamemd {
int Map_InitCellOffsets()
{

  unk_89D368 = 0x10000;
  unk_89D36C = 0x1FFFF;
  unk_89D370 = 65537;
  unk_89D374 = 0xFFFF;
  unk_89D378 = 1;
  unk_89D380 = -1;
  unk_89D37C = -65536;
  unk_89D384 = -65535;
  unk_89D388 = 2147450879;
  memset(&unk_89D38C, 0, 0x54u);
  unk_89D3E0 = 0x10000;
  unk_89D3E4 = 65537;
  unk_89D3E8 = 0x1FFFF;
  unk_89D3EC = 65538;
  unk_89D3F0 = 0xFFFF;
  unk_89D3F4 = 2;
  unk_89D3F8 = -65536;
  unk_89D3FC = -65535;
  unk_89D404 = -65534;
  unk_89D400 = -1;
  unk_89D408 = 2147450879;
  memset(&unk_89D40C, 0, 0x4Cu);
  unk_89D458 = 0x20000;
  unk_89D45C = 131073;
  unk_89D460 = 196607;
  unk_89D464 = 0x1FFFF;
  unk_89D468 = 65537;
  unk_89D46C = 0xFFFF;
  unk_89D470 = 1;
  unk_89D478 = -1;
  unk_89D474 = -65536;
  unk_89D47C = -65535;
  unk_89D480 = 2147450879;
  memset(&unk_89D484, 0, 0x4Cu);
  unk_89D4D0 = 0x20000;
  unk_89D4D4 = 131073;
  unk_89D4D8 = 196607;
  unk_89D4DC = 131074;
  unk_89D4E0 = 0x1FFFF;
  unk_89D4E4 = 65538;
  unk_89D4E8 = 0xFFFF;
  unk_89D4EC = 2;
  unk_89D4F0 = -65536;
  unk_89D4F4 = -65535;
  unk_89D4F8 = -1;
  unk_89D4FC = -65534;
  unk_89D500 = 2147450879;
  memset(&unk_89D504, 0, 0x44u);
  unk_89D548 = 196608;
  unk_89D54C = 196609;
  unk_89D550 = 0x3FFFF;
  unk_89D554 = 196610;
  unk_89D558 = 196607;
  unk_89D55C = 131074;
  unk_89D560 = 0x1FFFF;
  unk_89D564 = 65538;
  unk_89D568 = 0xFFFF;
  unk_89D56C = 2;
  unk_89D570 = -65536;
  unk_89D574 = -65535;
  unk_89D57C = -65534;
  unk_89D578 = -1;
  unk_89D580 = 2147450879;
  memset(&unk_89D584, 0, 0x3Cu);
  unk_89D5C0 = 0x20000;
  unk_89D5C4 = 131073;
  unk_89D5C8 = 131074;
  unk_89D5CC = 196607;
  unk_89D5D0 = 131075;
  unk_89D5D4 = 0x1FFFF;
  unk_89D5D8 = 65539;
  unk_89D5DC = 0xFFFF;
  unk_89D5E0 = 3;
  unk_89D5E4 = -65536;
  unk_89D5E8 = -65535;
  unk_89D5EC = -65534;
  unk_89D5F0 = -1;
  unk_89D5F4 = -65533;
  unk_89D5F8 = 2147450879;
  memset(&unk_89D5FC, 0, 0x3Cu);
  unk_89D638 = 196608;
  unk_89D63C = 196609;
  unk_89D640 = 196610;
  unk_89D644 = 0x3FFFF;
  unk_89D648 = 196611;
  unk_89D64C = 196607;
  unk_89D650 = 131075;
  unk_89D654 = 0x1FFFF;
  unk_89D658 = 65539;
  unk_89D65C = 0xFFFF;
  unk_89D660 = 3;
  unk_89D664 = -65536;
  unk_89D668 = -65535;
  unk_89D66C = -65534;
  unk_89D670 = -1;
  unk_89D674 = -65533;
  unk_89D678 = 2147450879;
  memset(&unk_89D67C, 0, 0x34u);
  unk_89D6B0 = -1;
  unk_89D6B4 = -65536;
  unk_89D6B8 = -65535;
  unk_89D6BC = -65534;
  unk_89D6C0 = -65533;
  unk_89D6C4 = 0xFFFF;
  unk_89D6C8 = 3;
  unk_89D6CC = 0x1FFFF;
  unk_89D6D0 = 65539;
  unk_89D6D4 = 196607;
  unk_89D6D8 = 131075;
  unk_89D6DC = 0x3FFFF;
  unk_89D6E0 = 196611;
  unk_89D6E8 = 262147;
  unk_89D6E4 = 327679;
  unk_89D6EC = 393215;
  unk_89D6F0 = 327680;
  unk_89D6F4 = 327681;
  unk_89D6F8 = 327682;
  unk_89D6FC = 327683;
  unk_89D700 = 2147450879;
  memset(&unk_89D704, 0, 0x24u);
  unk_89D728 = 0x20000;
  unk_89D72C = 131073;
  unk_89D730 = 131074;
  unk_89D734 = 131075;
  unk_89D738 = 196607;
  unk_89D73C = 131076;
  unk_89D740 = 0x1FFFF;
  unk_89D744 = 65540;
  unk_89D748 = 0xFFFF;
  unk_89D74C = 4;
  unk_89D750 = -65536;
  unk_89D754 = -65535;
  unk_89D75C = -65533;
  unk_89D758 = -65534;
  unk_89D760 = -1;
  unk_89D764 = -65532;
  unk_89D768 = 2147450879;
  memset(&unk_89D76C, 0, 0x34u);
  unk_89D7A0 = 0;
  unk_89D7A4 = 2147450879;
  memset(&unk_89D7A8, 0, 0x70u);
  unk_89D818 = -1;
  unk_89D81C = -65536;
  unk_89D820 = -65535;
  unk_89D824 = 0xFFFF;
  unk_89D828 = 1;
  unk_89D82C = 0x1FFFF;
  unk_89D830 = 65537;
  unk_89D834 = 196607;
  unk_89D838 = 131073;
  unk_89D83C = 0x3FFFF;
  unk_89D844 = 196609;
  unk_89D840 = 196608;
  unk_89D848 = 2147450879;
  memset(&unk_89D84C, 0, 0x44u);
  unk_89D890 = -1;
  unk_89D894 = -65536;
  unk_89D898 = -65535;
  unk_89D89C = -65534;
  unk_89D8A0 = -65533;
  unk_89D8A4 = 0xFFFF;
  unk_89D8A8 = 3;
  unk_89D8AC = 0x1FFFF;
  unk_89D8B0 = 0x10000;
  unk_89D8B4 = 65537;
  unk_89D8B8 = 65538;
  unk_89D8BC = 65539;
  unk_89D8C0 = 2147450879;
  memset(&unk_89D8C4, 0, 0x44u);
  unk_89D908 = 196608;
  unk_89D90C = 196609;
  unk_89D910 = 196610;
  unk_89D914 = 0x3FFFF;
  unk_89D918 = 196611;
  unk_89D91C = 196607;
  unk_89D920 = 131075;
  unk_89D924 = 0x1FFFF;
  unk_89D928 = 65539;
  unk_89D92C = 0xFFFF;
  unk_89D930 = 3;
  unk_89D934 = -65536;
  unk_89D938 = -65535;
  unk_89D93C = -65534;
  unk_89D944 = -65533;
  unk_89D940 = -1;
  unk_89D948 = 2147450879;
  memset(&unk_89D94C, 0, 0x34u);
  unk_89D980 = -1;
  unk_89D984 = -65536;
  unk_89D988 = -65535;
  unk_89D98C = 0xFFFF;
  unk_89D990 = 1;
  unk_89D994 = 0x1FFFF;
  unk_89D998 = 65537;
  unk_89D9A0 = 131073;
  unk_89D99C = 196607;
  unk_89D9A4 = 0x3FFFF;
  unk_89D9A8 = 196609;
  unk_89D9AC = 327679;
  unk_89D9B4 = 262145;
  unk_89D9B0 = 0x40000;
  unk_89D9B8 = 2147450879;
  memset(&unk_89D9BC, 0, 0x3Cu);
  unk_89D9F8 = -1;
  unk_89D9FC = -65536;
  unk_89DA00 = -65535;
  unk_89DA04 = 0xFFFF;
  unk_89DA08 = 1;
  unk_89DA0C = 0x1FFFF;
  unk_89DA10 = 65537;
  unk_89DA18 = 131073;
  unk_89DA14 = 196607;
  unk_89DA1C = 0x3FFFF;
  unk_89DA20 = 196609;
  unk_89DA28 = 262145;
  unk_89DA24 = 327679;
  unk_89DA2C = 393215;
  unk_89DA30 = 327680;
  unk_89DA34 = 327681;
  unk_89DA38 = 2147450879;
  memset(&unk_89DA3C, 0, 0x34u);
  unk_89DA70 = -1;
  unk_89DA74 = -65536;
  unk_89DA78 = -65535;
  unk_89DA7C = -65534;
  unk_89DA80 = 0xFFFF;
  unk_89DA84 = 2;
  unk_89DA88 = 0x1FFFF;
  unk_89DA8C = 65538;
  unk_89DA90 = 196607;
  unk_89DA94 = 131074;
  unk_89DA98 = 0x3FFFF;
  unk_89DA9C = 196610;
  unk_89DAA0 = 393215;
  unk_89DAA4 = 327682;
  unk_89DAA8 = 458751;
  unk_89DAAC = 393216;
  unk_89DAB4 = 393218;
  unk_89DAB0 = 393217;
  unk_89DAB8 = 2147450879;
  memset(&unk_89DABC, 0, 0x2Cu);
  unk_89DAE8 = -1;
  unk_89DAEC = -65536;
  unk_89DAF0 = -65535;
  unk_89DAF4 = -65534;
  unk_89DAF8 = 0xFFFF;
  unk_89DAFC = 2;
  unk_89DB00 = 0x1FFFF;
  unk_89DB04 = 65538;
  unk_89DB08 = 196607;
  unk_89DB0C = 131074;
  unk_89DB10 = 0x3FFFF;
  unk_89DB14 = 196610;
  unk_89DB18 = 393215;
  unk_89DB1C = 327680;
  unk_89DB24 = 327682;
  unk_89DB20 = 327681;
  unk_89DB28 = 2147450879;
  memset(&unk_89DB2C, 0, 0x34u);
  unk_89DB60 = -1;
  unk_89DB64 = -65536;
  unk_89DB68 = -65535;
  int v1 = -65532;
  unk_89DB70 = -65533;
  unk_89DB6C = -65534;
  unk_89DB74 = -65532;
  unk_89DB78 = *(unsigned int *)CellStruct::Set(&v1, 5, -1);
  unk_89DB7C = *(unsigned int *)CellStruct::Set(&v1, -1, 0);
  unk_89DB80 = *(unsigned int *)CellStruct::Set(&v1, 5, 0);
  unk_89DB84 = *(unsigned int *)CellStruct::Set(&v1, -1, 1);
  unk_89DB88 = *(unsigned int *)CellStruct::Set(&v1, 5, 1);
  unk_89DB8C = *(unsigned int *)CellStruct::Set(&v1, -1, 2);
  unk_89DB90 = *(unsigned int *)CellStruct::Set(&v1, 5, 2);
  unk_89DB94 = *(unsigned int *)CellStruct::Set(&v1, -1, 3);
  unk_89DB98 = *(unsigned int *)CellStruct::Set(&v1, 0, 3);
  unk_89DB9C = *(unsigned int *)CellStruct::Set(&v1, 1, 3);
  unk_89DBA0 = *(unsigned int *)CellStruct::Set(&v1, 2, 3);
  unk_89DBA4 = *(unsigned int *)CellStruct::Set(&v1, 3, 3);
  unk_89DBA8 = *(unsigned int *)CellStruct::Set(&v1, 4, 3);
  unk_89DBAC = *(unsigned int *)CellStruct::Set(&v1, 5, 3);
  unk_89DBB0 = *(unsigned int *)CellStruct::Set(&v1, 0x7FFF, 0x7FFF);
  memset(&stru_89DBB4, 0, 0x24u);
  Array::ForEach((int)&stru_89DBB4, 4, 9, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2);
  unk_89DBD8 = *(unsigned int *)CellStruct::Set(&v1, -1, -1);
  unk_89DBDC = *(unsigned int *)CellStruct::Set(&v1, 0, -1);
  unk_89DBE0 = *(unsigned int *)CellStruct::Set(&v1, 1, -1);
  unk_89DBE4 = *(unsigned int *)CellStruct::Set(&v1, 2, -1);
  unk_89DBE8 = *(unsigned int *)CellStruct::Set(&v1, 3, -1);
  unk_89DBEC = *(unsigned int *)CellStruct::Set(&v1, 4, -1);
  unk_89DBF0 = *(unsigned int *)CellStruct::Set(&v1, -1, 4);
  unk_89DBF4 = *(unsigned int *)CellStruct::Set(&v1, 0, 4);
  unk_89DBF8 = *(unsigned int *)CellStruct::Set(&v1, 1, 4);
  unk_89DBFC = *(unsigned int *)CellStruct::Set(&v1, 2, 4);
  unk_89DC00 = *(unsigned int *)CellStruct::Set(&v1, 3, 4);
  unk_89DC04 = *(unsigned int *)CellStruct::Set(&v1, 4, 4);
  unk_89DC08 = *(unsigned int *)CellStruct::Set(&v1, -1, 0);
  unk_89DC0C = *(unsigned int *)CellStruct::Set(&v1, -1, 1);
  unk_89DC10 = *(unsigned int *)CellStruct::Set(&v1, -1, 2);
  unk_89DC14 = *(unsigned int *)CellStruct::Set(&v1, -1, 3);
  unk_89DC18 = *(unsigned int *)CellStruct::Set(&v1, -1, 4);
  unk_89DC1C = *(unsigned int *)CellStruct::Set(&v1, 4, 0);
  unk_89DC20 = *(unsigned int *)CellStruct::Set(&v1, 4, 1);
  unk_89DC24 = *(unsigned int *)CellStruct::Set(&v1, 4, 2);
  unk_89DC28 = *(unsigned int *)CellStruct::Set(&v1, 4, 3);
  unk_89DC2C = *(unsigned int *)CellStruct::Set(&v1, 4, 4);
  unk_89DC30 = *(unsigned int *)CellStruct::Set(&v1, 0x7FFF, 0x7FFF);
  memset(&stru_89DC34, 0, 0x1Cu);
  Array::ForEach((int)&stru_89DC34, 4, 7, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2);
  DataGlobal_0089DC50 = *(unsigned int *)CellStruct::Set(&v1, 0, 4);
  DataGlobal_0089DC54 = *(unsigned int *)CellStruct::Set(&v1, 1, 4);
  unk_89DC58 = *(unsigned int *)CellStruct::Set(&v1, 2, 4);
  unk_89DC5C = *(unsigned int *)CellStruct::Set(&v1, -1, 4);
  unk_89DC60 = *(unsigned int *)CellStruct::Set(&v1, 3, 4);
  unk_89DC64 = *(unsigned int *)CellStruct::Set(&v1, -1, 2);
  unk_89DC68 = *(unsigned int *)CellStruct::Set(&v1, 3, 2);
  unk_89DC6C = *(unsigned int *)CellStruct::Set(&v1, -1, 1);
  unk_89DC70 = *(unsigned int *)CellStruct::Set(&v1, 3, 1);
  unk_89DC74 = *(unsigned int *)CellStruct::Set(&v1, -1, 0);
  unk_89DC78 = *(unsigned int *)CellStruct::Set(&v1, 3, 0);
  unk_89DC7C = *(unsigned int *)CellStruct::Set(&v1, 0, -1);
  unk_89DC80 = *(unsigned int *)CellStruct::Set(&v1, 1, -1);
  unk_89DC84 = *(unsigned int *)CellStruct::Set(&v1, 2, -1);
  unk_89DC88 = *(unsigned int *)CellStruct::Set(&v1, -1, -1);
  unk_89DC8C = *(unsigned int *)CellStruct::Set(&v1, 3, -1);
  unk_89DC90 = *(unsigned int *)CellStruct::Set(&v1, 0x7FFF, 0x7FFF);
  memset(&stru_89DC94, 0, 0x34u);
  Array::ForEach((int)&stru_89DC94, 4, 13, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2);
  unk_89DCC8 = *(unsigned int *)CellStruct::Set(&v1, 2, -1);
  unk_89DCCC = *(unsigned int *)CellStruct::Set(&v1, 0x7FFF, 0x7FFF);
  memset(&stru_89DCD0, 0, 0x70u);
  Array::ForEach((int)&stru_89DCD0, 4, 28, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2);
  unk_89DD40 = *(unsigned int *)CellStruct::Set(&v1, 0x7FFF, 0x7FFF);
  memset(&stru_89DD44, 0, 0x74u);
  return Array::ForEach((int)&stru_89DD44, 4, 29, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2);
}
} // namespace gamemd

// 0x45DD20
namespace gamemd {
void * E4Recv_45DD20::sub_45DD20()
{
  int * v1;
  int *v2; // eax

  v1 = (int *)(0);
  v2 = (int *)(&dword_81928C);
  while ( (void *)*v2 != this ) /*0x45dd29*/
  {
    v2 += 2; /*0x45dd2b*/
    ++v1; /*0x45dd2e*/
    if ( (int)v2 >= (int)dword_8192BC ) /*0x45dd34*/
      return off_819288; /*0x45dd3b*/
  }
  return (&off_819288)[2 * v1]; /*0x45dd3b*/
}
}
// 0x45DD50
namespace gamemd {
int E4Recv_45DD50::sub_45DD50()
{
  int v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x45dd55*/
  v3 = (const void **)&off_819288; /*0x45dd57*/
  while ( _strcmpi(*v3, this) ) /*0x45dd6a*/
  {
    v3 += 2; /*0x45dd6c*/
    ++v2; /*0x45dd6f*/
    if ( (int)v3 >= (int)dword_8192B8 ) /*0x45dd76*/
      return 0; /*0x45dd7d*/
  }
  return dword_81928C[2 * v2]; /*0x45dd78*/
}
}
// 0x4503E0
namespace gamemd {
void nullsub_101()
{
  ; /*0x4503e0*/
}
} // namespace gamemd

// 0x4517D0
namespace gamemd {
int E4Recv_4517D0::sub_4517D0()
{
  int *v2; // eax
  int v3; // edi
  int v4; // edx
  int result; // eax
  int *v6; // esi
  unsigned int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int **v12; // [esp+10h] [ebp-28h]
  int v13; // [esp+14h] [ebp-24h]
  int v14; // [esp+18h] [ebp-20h]
  unsigned int v16[3]; // [esp+20h] [ebp-18h] BYREF
  unsigned int v17[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = (int *)((int (__thiscall *)(int **, unsigned int *))(*this)[43])(this, v16); /*0x4517e2*/
  v3 = 0; /*0x4517ea*/
  v13 = *v2; /*0x4517ec*/
  v14 = v2[1]; /*0x4517f3*/
  v4 = v2[2]; /*0x4517f7*/
  result = (int)(&this->u32_883); /*0x4517fa*/
  v4 = v4; /*0x451800*/
  v12 = &this->u32_55C; /*0x451804*/
  do /*0x451879*/
  {
    v6 = *v12; /*0x45180c*/
    if ( *v12 ) /*0x45180c*/
    {
      v7 = Matrix3x4::TransformCell((float *)g_TacticalClass_Instance, v17, &(*(&this->u32_808))[v3 + 991]); /*0x45182b*/
      v8 = v13 + *v7; /*0x45183a*/
      v9 = v7[1]; /*0x45183c*/
      v10 = v7[2]; /*0x45183f*/
      v16[1] = v14 + v9; /*0x45184a*/
      v11 = *v6; /*0x45184e*/
      v16[2] = v4 + v10; /*0x451850*/
      v16[0] = v8; /*0x451858*/
      result = v6->SetPosition(v16); /*0x45185f*/
    }
    v3 += 17; /*0x451869*/
    ++v12; /*0x451875*/
  }
  while ( v3 < 357 ); /*0x451879*/
  return result; /*0x45187b*/
}
} // namespace gamemd

// 0x451EE0
namespace gamemd {
void globalHelper_051EE0(int a1, int a2, IUnknown * aP4)
{
  int v4; // ecx
  int v5; // ebp
  int v6; // esi
  unsigned int *v7; // ebx
  unsigned char *v8; // eax

  v4 = aP4; /*0x451ee3*/
  if ( *(unsigned char *)(a1 + 1766) != (unsigned char)aP4 ) /*0x451eed*/
  {
    v5 = 0; /*0x451ef2*/
    *(unsigned char *)(a1 + 1766) = aP4; /*0x451ef4*/
    v6 = 0; /*0x451efa*/
    v7 = (unsigned int *)(a1 + 1372); /*0x451efc*/
    do /*0x451f4f*/
    {
      if ( *v7 ) /*0x451f02*/
      {
        if ( (unsigned char)v4 ) /*0x451f09*/
        {
          v8 = (unsigned char *)(*(unsigned int *)(a1 + 1312) + v6 + 3932); /*0x451f11*/
        }
        else
        {
          a2 = *(unsigned int *)(a1 + 1312); /*0x451f1a*/
          v8 = (unsigned char *)(a2 + v6 + 3916); /*0x451f20*/
        }
        if ( v8 ) /*0x451f29*/
        {
          if ( *v8 ) /*0x451f2b*/
          {
            BuildingClass::PlayAnim((unsigned int *)a1, a2, v8, v5, v4, 0, 0); /*0x451f39*/
            v4 = aP4; /*0x451f3e*/
          }
        }
      }
      v6 += 68; /*0x451f42*/
      ++v5; /*0x451f45*/
      ++v7; /*0x451f46*/
    }
    while ( v6 < 1428 ); /*0x451f4f*/
  }
}
} // namespace gamemd

// 0x4528A0
namespace gamemd {
bool E4Recv_4528A0::sub_4528A0(int a2)
{
  int *v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // ebp
  unsigned int *v7; // eax
  int v8; // edi
  int v9; // edx
  double v10; // st7
  int v13; // [esp+24h] [ebp-8h]
  int v14; // [esp+28h] [ebp-4h]

  v3 = (int *)this->GetCoords_0(&v8); /*0x4528b2*/
  v4 = *v3; /*0x4528b5*/
  v5 = v3[1]; /*0x4528bb*/
  v6 = v3[2]; /*0x4528c0*/
  v7 = (unsigned int *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)a2 + 72))(a2, &v8); /*0x4528c8*/
  v8 = v4 - *v7; /*0x4528d2*/
  v9 = v7[2]; /*0x4528d9*/
  v13 = v5 - v7[1]; /*0x4528dc*/
  v8 = v8; /*0x4528e6*/
  v14 = v6 - v9; /*0x4528ea*/
  v10 = Math::Sqrt((double)v8 * (double)v8 + (double)(v6 - v9) * (double)(v6 - v9) + (double)v13 * (double)v13); /*0x45290f*/
  return (int)Math::RoundToInt(v10) <= *(unsigned int *)(*(&this->needsRedraw8) + 5900) << 8; /*0x452922*/
}
} // namespace gamemd

// 0x454CE0
namespace gamemd {
void nullsub_5()
{
  ; /*0x454ce0*/
}
} // namespace gamemd

// 0x455DD0
namespace gamemd {
unsigned int * sub_455DD0(int a1, unsigned int * a2)
{
  int v2; // esi
  unsigned int *v3; // edi
  int v4; // eax
  unsigned int *v5; // esi
  double v6; // st7
  int v7; // eax
  int v9; // [esp+24h] [ebp-24h]
  int v11; // [esp+2Ch] [ebp-1Ch]
  unsigned int *v12; // [esp+30h] [ebp-18h]
  int v14; // [esp+38h] [ebp-10h]
  int v15; // [esp+3Ch] [ebp-Ch]
  int v16; // [esp+40h] [ebp-8h]
  int v17; // [esp+44h] [ebp-4h]

  v2 = a1; /*0x455ddc*/
  v3 = a2; /*0x455de7*/
  v12 = 0; /*0x455df5*/
  v9 = 0x7FFFFFFF; /*0x455df9*/
  if ( (byte_89C828 & 1) == 0 ) /*0x455e01*/
  {
    byte_89C828 |= 1u; /*0x455e11*/
    dword_89C7F0 = Math::RoundToInt(dbl_89C820 * 20.0); /*0x455e1c*/
  }
  v4 = 0; /*0x455e27*/
  v14 = *(unsigned int *)(v2 + 144); /*0x455e2b*/
  v11 = 0; /*0x455e2f*/
  if ( v14 <= 0 ) /*0x455e33*/
    return 0; /*0x455f00*/
  while ( 1 ) /*0x455e47*/
  {
    v5 = *(unsigned int **)(*(unsigned int *)(v2 + 132) + 4 * v4); /*0x455e47*/
    if ( (*(int (__thiscall **)(unsigned int *, int, unsigned int *))(*v3 + 632))(v3, 15, v5) ) /*0x455e4f*/
    {
      v15 = v5[39] - v3[39]; /*0x455e7f*/
      v16 = v5[40] - v3[40]; /*0x455e88*/
      v17 = v5[41] - v3[41]; /*0x455e92*/
      v6 = Math::Sqrt((double)v15 * (double)v15 + (double)v17 * (double)v17 + (double)v16 * (double)v16); /*0x455eb7*/
      v7 = Math::RoundToInt(v6); /*0x455ebf*/
      if ( v7 < v9 && v7 < dword_89C7F0 ) /*0x455ed0*/
      {
        v12 = v5; /*0x455ed2*/
        v9 = v7; /*0x455ed6*/
      }
      v3 = a2; /*0x455eda*/
    }
    v4 = ++v11; /*0x455ee6*/
    if ( v11 >= v14 ) /*0x455eed*/
      break; /*0x455eed*/
    v2 = a1; /*0x455e3b*/
  }
  return v12; /*0x455ef7*/
}
} // namespace gamemd

// 0x456970
namespace gamemd {
void nullsub_103()
{
  ; /*0x456970*/
}
} // namespace gamemd

// 0x457A10
namespace gamemd {
char E4Recv_457A10::sub_457A10()
{
  int v2; // edi
  unsigned short *i; // esi
  int v5; // [esp+Ch] [ebp-8h]

  v2 = *(unsigned int *)((int (__thiscall *)(unsigned int **, int *))(*this)[110])(this, &v5); /*0x457a2d*/
  for ( i = (unsigned short *)(*(int (__thiscall **)(unsigned int, unsigned int))(**(&this->needsRedraw8) + 144))(*(&this->needsRedraw8), 0); /*0x457a42*/
        *i != 0x7FFF || i[1] != 0x7FFF;
        i += 2 )
  {
    IDA_LOWORD(v5) = v2 + *i; /*0x457a59*/
    IDA_HIWORD(v5) = IDA_HIWORD(v2) + i[1]; /*0x457a66*/
    v5 = v5; /*0x457a6f*/
    if ( (*((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v5) + 80) & 0x400000) == 0 ) /*0x457a87*/
      return 0; /*0x457a96*/
  }
  return 1; /*0x457a8e*/
}
} // namespace gamemd

// 0x45AFA0
namespace gamemd {
void sub_45AFA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x45afac*/
  dbl_89C8B8 = Math::Sqrt(v0 + v0); /*0x45afbe*/
}
} // namespace gamemd

// 0x45AFD0
namespace gamemd {
void sub_45AFD0()
{
  dbl_89D360 = dbl_89C8B8 / 60.0; /*0x45afdc*/
}
} // namespace gamemd

// 0x45AFF0
namespace gamemd {
void sub_45AFF0()
{
  dbl_89C8F8 = 1.0 / dbl_89D360; /*0x45affc*/
}
} // namespace gamemd

// 0x45B010
namespace gamemd {
void sub_45B010()
{
  dbl_89C8F0 = 0.0174532925199433 * 45.0; /*0x45b01c*/
}
} // namespace gamemd

// 0x45B030
namespace gamemd {
void sub_45B030()
{
  dbl_89C8C0 = 0.0174532925199433 * 60.0; /*0x45b03c*/
}
} // namespace gamemd

// 0x45B050
namespace gamemd {
void sub_45B050()
{
  dbl_89C898 = 0.0174532925199433 * 90.0; /*0x45b05c*/
}
} // namespace gamemd

// 0x45B070
namespace gamemd {
long long sub_45B070()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89C898 - dbl_89C8C0); /*0x45b082*/
  result = Math::RoundToInt(v0 * dbl_89C8B8 * 0.5); /*0x45b096*/
  dword_89DDB8 = result; /*0x45b09b*/
  return result; /*0x45b0a0*/
}
} // namespace gamemd

// 0x45B0B0
namespace gamemd {
void sub_45B0B0()
{
  dbl_89C8C8 = Math::ArcTan((double)dword_89DDB8 * 0.00390625); /*0x45b0c7*/
}
} // namespace gamemd

// 0x45B0E0
namespace gamemd {
void sub_45B0E0()
{
  dbl_89C8E0 = Math::ArcTan((double)(2 * dword_89DDB8) / dbl_89C8B8); /*0x45b102*/
}
} // namespace gamemd

// 0x45B110
namespace gamemd {
long long sub_45B110()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DDB8) + 0.5); /*0x45b12b*/
  dword_89D35C = result; /*0x45b130*/
  return result; /*0x45b136*/
}
} // namespace gamemd

// 0x45B140
namespace gamemd {
int sub_45B140()
{
  word_89C8B0 = 0; /*0x45b142*/
  word_89C8B2 = 0; /*0x45b148*/
  return 0; /*0x45b14e*/
}
} // namespace gamemd

// 0x45B150
namespace gamemd {
int sub_45B150()
{
  dword_89C8D0 = 0; /*0x45b152*/
  dword_89C8D4 = 0; /*0x45b157*/
  dword_89C8D8 = 0; /*0x45b15c*/
  return 0; /*0x45b161*/
}
} // namespace gamemd

// 0x45B170
namespace gamemd {
int sub_45B170()
{
  dword_89D358 = 0; /*0x45b175*/
  dword_89D350 = 128; /*0x45b17f*/
  dword_89D354 = 128; /*0x45b184*/
  return 128; /*0x45b189*/
}
} // namespace gamemd

// 0x45B190
namespace gamemd {
int sub_45B190()
{
  dword_89C8A0 = 0; /*0x45b192*/
  dword_89C8A4 = 0; /*0x45b197*/
  dword_89C8A8 = 0; /*0x45b19c*/
  dword_89C8AC = 0; /*0x45b1a1*/
  return 0; /*0x45b1a6*/
}
} // namespace gamemd

// 0x45B1B0
namespace gamemd {
int j_MapData_InitHeights()
{
  return MapData::InitHeights();
}
} // namespace gamemd

// 0x45C2F0
namespace gamemd {
int j_Map_InitCellOffsets()
{
  return InitCellOffsetsMap();
}
} // namespace gamemd

// 0x45E750
namespace gamemd {
void nullsub_6()
{
  ; /*0x45e750*/
}
} // namespace gamemd

// 0x45E8B0
namespace gamemd {
int E4Recv_45E8B0::sub_45E8B0(int a2, int a3, int a4, int a5)
{
  int result; // eax
  char *v6; // edx

  result = 3 * a2 + 963; /*0x45e8bc*/
  v6 = (char *)(&this->vtable4 * a2); /*0x45e8c3*/
  *((unsigned int *)v6 + 961) = a3; /*0x45e8c6*/
  *((unsigned int *)v6 + 962) = a4; /*0x45e8d0*/
  *(this + result) = a5; /*0x45e8da*/
  return result; /*0x45e8dd*/
}
} // namespace gamemd

// 0x45E8F0
namespace gamemd {
char sub_45E8F0()
{
  int SubFile; // eax
  int v1; // esi
  int v2; // edx
  int v3; // edi
  int i; // ecx
  unsigned int v6[4]; // [esp+4h] [ebp-10h] BYREF

  IDA_LOBYTE(SubFile) = (unsigned char)dword_89DDBC; /*0x45e8f0*/
  if ( !dword_89DDBC ) /*0x45e8fb*/
  {
    dword_89DDBC = (void *)SearchMIXFile(aBuildngzSha, 0); /*0x45e90d*/
    Building::GetFoundationSize(v6, 0); /*0x45e917*/
    SubFile = MixFileClass::GetSubFile((char **)dword_89DDBC, 0); /*0x45e924*/
    v1 = *((int16_t *)dword_89DDBC + 1); /*0x45e92f*/
    if ( *((int16_t *)dword_89DDBC + 2) > 0 ) /*0x45e939*/
    {
      v2 = SubFile; /*0x45e93c*/
      v3 = *((int16_t *)dword_89DDBC + 2); /*0x45e93e*/
      do /*0x45e95a*/
      {
        for ( i = 0; i < v1; ++i ) /*0x45e944*/
        {
          IDA_LOBYTE(SubFile) = *(unsigned char *)(v2 + i); /*0x45e946*/
          if ( (unsigned char)SubFile ) /*0x45e94b*/
          {
            IDA_LOBYTE(SubFile) = SubFile - 65; /*0x45e94d*/
            *(unsigned char *)(v2 + i) = SubFile; /*0x45e94f*/
          }
        }
        v2 += v1; /*0x45e957*/
        --v3; /*0x45e959*/
      }
      while ( v3 ); /*0x45e95a*/
    }
  }
  return SubFile; /*0x45e95d*/
}
} // namespace gamemd

// 0x45EC80
namespace gamemd {
void nullsub_107()
{
  ; /*0x45ec80*/
}
} // namespace gamemd
