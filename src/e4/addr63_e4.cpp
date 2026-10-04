// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_631300_e4.hpp"
#include "e4/classes/E4Recv_631640_e4.hpp"
#include "e4/classes/E4Recv_631F10_e4.hpp"
#include "e4/classes/E4Recv_631F30_e4.hpp"
#include "e4/classes/E4Recv_631FC0_e4.hpp"
#include "e4/classes/E4Recv_631FE0_e4.hpp"
#include "e4/classes/E4Recv_6329C0_e4.hpp"
#include "e4/classes/E4Recv_632A20_e4.hpp"
#include "e4/classes/E4Recv_632AC0_e4.hpp"
#include "e4/classes/E4Recv_632B20_e4.hpp"
#include "e4/classes/E4Recv_632D60_e4.hpp"
#include "e4/classes/E4Recv_633A20_e4.hpp"
#include "e4/classes/E4Recv_633A40_e4.hpp"
#include "e4/classes/E4Recv_633A50_e4.hpp"
#include "e4/classes/E4Recv_633A60_e4.hpp"
#include "e4/classes/E4Recv_633A70_e4.hpp"
#include "e4/classes/E4Recv_633A90_e4.hpp"
#include "e4/classes/E4Recv_633AA0_e4.hpp"
#include "e4/classes/E4Recv_633AE0_e4.hpp"
#include "e4/classes/E4Recv_633B00_e4.hpp"
#include "e4/classes/E4Recv_633B10_e4.hpp"
#include "e4/classes/E4Recv_633B20_e4.hpp"
#include "e4/classes/E4Recv_633B30_e4.hpp"
#include "e4/classes/E4Recv_633B40_e4.hpp"
#include "e4/classes/E4Recv_633B70_e4.hpp"
#include "e4/classes/E4Recv_633B80_e4.hpp"
#include "e4/classes/E4Recv_633C60_e4.hpp"
#include "e4/classes/E4Recv_633E50_e4.hpp"
#include "e4/classes/E4Recv_633E60_e4.hpp"
#include "e4/classes/E4Recv_634360_e4.hpp"
#include "e4/classes/E4Recv_6343B0_e4.hpp"
#include "e4/classes/E4Recv_634470_e4.hpp"
#include "e4/classes/E4Recv_634700_e4.hpp"
#include "e4/classes/E4Recv_6347A0_e4.hpp"
#include "e4/classes/E4Recv_634800_e4.hpp"
#include "e4/classes/E4Recv_634810_e4.hpp"
#include "e4/classes/E4Recv_634850_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/ArrayClass_e4.hpp"
#include "e4/classes/BlowPipe_23_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VectorClass_Techno_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/E4Recv_634880_e4.hpp"
#include "e4/classes/E4Recv_6348F0_e4.hpp"
#include "e4/classes/E4Recv_634950_e4.hpp"
#include "e4/classes/E4Recv_634960_e4.hpp"
#include "e4/classes/E4Recv_635210_e4.hpp"
#include "e4/classes/E4Recv_6352D0_e4.hpp"
#include "e4/classes/E4Recv_635310_e4.hpp"
#include "e4/classes/E4Recv_635560_e4.hpp"
#include "e4/classes/E4Recv_635680_e4.hpp"
#include "e4/classes/E4Recv_635DF0_e4.hpp"
#include "e4/classes/E4Recv_635E90_e4.hpp"
#include "e4/classes/E4Recv_636110_e4.hpp"
#include "e4/classes/E4Recv_636520_e4.hpp"
#include "e4/classes/E4Recv_636530_e4.hpp"
#include "e4/classes/E4Recv_636540_e4.hpp"
#include "e4/classes/E4Recv_636D90_e4.hpp"
#include "e4/classes/E4Recv_636F00_e4.hpp"
#include "e4/classes/E4Recv_636FA0_e4.hpp"
#include "e4/classes/E4Recv_636FC0_e4.hpp"
#include "e4/classes/E4Recv_636FD0_e4.hpp"
#include "e4/classes/E4Recv_637020_e4.hpp"
#include "e4/classes/E4Recv_637030_e4.hpp"
#include "e4/classes/E4Recv_6375B0_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/E4Recv_63A4A0_e4.hpp"
#include "e4/classes/E4Recv_63AD30_e4.hpp"
#include "e4/classes/E4Recv_63B080_e4.hpp"
#include "e4/classes/E4Recv_63C690_e4.hpp"
#include "e4/classes/E4Recv_63CAE0_e4.hpp"
#include "e4/classes/E4Recv_63CF10_e4.hpp"
#include "e4/classes/E4Recv_63CFC0_e4.hpp"
#include "e4/classes/E4Recv_63D2D0_e4.hpp"
#include "e4/classes/E4Recv_63D480_e4.hpp"
#include "e4/classes/E4Recv_63DAD0_e4.hpp"
#include "e4/classes/E4Recv_63F810_e4.hpp"
#include "e4/classes/E4Recv_63F8F0_e4.hpp"
#include "e4/classes/E4Recv_63FDC0_e4.hpp"
#include "e4/classes/E4Recv_63FE30_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/E4Recv_645B60_e4.hpp"
#include "e4/classes/E4Recv_645D60_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/BuildingLoadQueue_e4.hpp"
#include "e4/classes/PhoneEditor_e4.hpp"
#include "e4/classes/Function_e4.hpp"

// 0x630310
namespace gamemd {
unsigned int * SHP_DecodeFrame(int a1, int a2, int a3, size_t Size)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x630310)
}
}
// 0x630C10
namespace gamemd {
ObjectClass * * PhoneEditorDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x630C10)
}
}
// 0x631300
namespace gamemd {
HWNDsub_631300()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00631300.json)
}
}
// 0x631640
namespace gamemd {
gamemd::AbstractClass * * sub_631640()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00631640.json)
}
}
// 0x631760
namespace gamemd {
int NetworkSettingsDlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00631760.json)
}
}
// 0x633AB0
namespace gamemd {
void sub_633AB0()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x633AB0)
}
}
// 0x633BC0
namespace gamemd {
unsigned int * ScenarioClass_GetActionCoords(unsigned int * a1, unsigned char * a2)
{
  int *v3; // eax
  int v4; // edx
  unsigned int *v5; // eax
  unsigned char v7[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( *a2 == 4 ) /*0x633bca*/
  {
    if ( a2[18] ) /*0x633bcc*/
    {
      v3 = (int *)((BuildingLoadQueue*)a2 + 14)->GetNext(); /*0x633bd6*/
      if ( v3 ) /*0x633bdd*/
      {
        v4 = *v3; /*0x633bdf*/
  LABEL_11:
        v5 = (unsigned int *)v3->GetCoords(v7); /*0x633c1b*/
        *a1 = *v5; /*0x633c25*/
        a1[1] = v5[1]; /*0x633c2a*/
        a1[2] = v5[2]; /*0x633c30*/
        return a1; /*0x633c39*/
      }
    }
    else if ( a2[28] ) /*0x633be7*/
    {
      v3 = (int *)((BuildingLoadQueue*)a2 + 24)->GetNext(); /*0x633bf1*/
      if ( v3 ) /*0x633bf8*/
      {
        v4 = *v3; /*0x633bfa*/
        goto LABEL_11; /*0x633c00*/
      }
    }
    else if ( a2[23] ) /*0x633c02*/
    {
      v3 = (int *)((BuildingLoadQueue*)a2 + 19)->GetNext(); /*0x633c0c*/
      if ( v3 ) /*0x633c13*/
      {
        v4 = *v3; /*0x633c15*/
        goto LABEL_11; /*0x633c15*/
      }
    }
  }
  *a1 = -1; /*0x633c43*/
  a1[1] = -1; /*0x633c4a*/
  a1[2] = -1; /*0x633c4d*/
  return a1; /*0x633c35*/
}
}
// 0x635560
namespace gamemd {
AbstractClass * * sub_635560(int a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00635560.json)
}
}
// 0x635680
namespace gamemd {
int sub_635680(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00635680.json)
}
}
// 0x636F00
namespace gamemd {
int sub_636F00(int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00636F00.json)
}
}
// 0x637270
namespace gamemd {
char ExecutePlanningQueue()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00637270.json)
}
}
// 0x6375B0
namespace gamemd {
int sub_6375B0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006375B0.json)
}
}
// 0x637920
namespace gamemd {
AbstractClass * * sub_637920()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x637920)
}
}
// 0x638120
namespace gamemd {
char ExecuteActionPlanManager(IUnknown * a1, char * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00638120.json)
}
}
// 0x6386E0
namespace gamemd {
void FactoryClass_ClearProduction(unsigned int * a1, int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006386E0.json)
}
}
// 0x638E60
namespace gamemd {
AbstractClass * * sub_638E60()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x638E60)
}
}
// 0x639040
namespace gamemd {
void sub_639040(void * aMsgPlanningmod_2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00639040.json)
}
}
// 0x639130
namespace gamemd {
void sub_639130(void * aMsgPlannermaxi)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00639130.json)
}
}
// 0x639210
namespace gamemd {
int sub_639210(int a1, int a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00639210.json)
}
}
// 0x6392D0
namespace gamemd {
unsigned int ** sub_6392D0(int a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6392D0)
}
}
// 0x6393A0
namespace gamemd {
unsigned int ** sub_6393A0(int a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6393A0)
}
}
// 0x639470
namespace gamemd {
void sub_639470(int a1, int a2, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00639470.json)
}
}
// 0x639800
namespace gamemd {
TechnoClass * * CompleteBuildingProduction(IUnknown * a1, int edx0)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x639800)
}
}
// 0x639F80
namespace gamemd {
int FactoryClass_DecCounter(unsigned int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00639F80.json)
}
}
// 0x63A5A0
namespace gamemd {
AbstractClass * * HandlePlanningModeClick(MouseClass * aP0, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x63A5A0)
}
}
// 0x63AD50
namespace gamemd {
AbstractClass * * ExportSelectionAsScriptAction()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x63AD50)
}
}
// 0x63B080
namespace gamemd {
void E4Recv_63B080::sub_63B080()
{

  *(unsigned int *)&stru_AC4B30.__pad_70[80] = this; /*0x63b080*/

}
}
// 0x63B150
namespace gamemd {
AbstractClass * * sub_63B150()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x63B150)
}
}
// 0x63B2F0
namespace gamemd {
void RenderScriptActionHighlight()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063B2F0.json)
}
}
// 0x63CF10
namespace gamemd {
int sub_63CF10()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063CF10.json)
}
}
// 0x63CFC0
namespace gamemd {
int sub_63CFC0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063CFC0.json)
}
}
// 0x63D630
namespace gamemd {
AbstractClass * * Tactical_DrawWaypoint(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x63D630)
}
}
// 0x63D810
namespace gamemd {
void* DrawTacticalLine2D(int a1, ObjectClass * aP1, int aP0, int aP0_4, int aP0_8, int aP0_12, char aP0_16)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x63D810)
}
}
// 0x63F080
namespace gamemd {
AbstractClass * * Voxel_ProcessVertexData(unsigned int * a1, int * a2)
{
  int v2; // esi
  int v3; // ecx
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int *v7; // ebp
  int v8; // edx
  int v9; // ebp
  int v10; // edx
  int v11; // edi
  int v12; // edx
  int v13; // ebp
  BOOL v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int *v18; // ebp
  int v19; // ecx
  bool v20; // zf
  int v21; // edx
  BOOL v22; // ebx
  int v23; // ebx
  int v24; // ebp
  int v25; // edi
  int v26; // [esp+10h] [ebp-24h]
  int v27; // [esp+14h] [ebp-20h] BYREF
  int v28; // [esp+18h] [ebp-1Ch]
  unsigned int *v29; // [esp+1Ch] [ebp-18h]
  BOOL v30; // [esp+20h] [ebp-14h]
  int v31; // [esp+24h] [ebp-10h]
  int v32; // [esp+28h] [ebp-Ch]
  int *v33; // [esp+2Ch] [ebp-8h]
  int v34; // [esp+30h] [ebp-4h]

  v2 = a1[1]; /*0x63f086*/
  v29 = a1; /*0x63f08a*/
  v3 = *a1; /*0x63f08e*/
  v4 = 0; /*0x63f090*/
  v33 = a2; /*0x63f094*/
  if ( v3 ) /*0x63f098*/
  {
    v5 = *(unsigned int *)(v2 + 4); /*0x63f09e*/
    v6 = 1; /*0x63f0a1*/
    v31 = 0; /*0x63f0a8*/
    v27 = v5; /*0x63f0ac*/
    if ( v3 > 1 ) /*0x63f0b0*/
    {
      v7 = (int *)(v2 + 12); /*0x63f0b6*/
      do /*0x63f0da*/
      {
        v8 = *v7; /*0x63f0b9*/
        if ( *v7 >= v5 ) /*0x63f0be*/
        {
          if ( v8 > v27 ) /*0x63f0ca*/
          {
            v31 = v6; /*0x63f0cc*/
            v27 = v8; /*0x63f0d0*/
          }
        }
        else
        {
          v4 = v6; /*0x63f0c0*/
          v5 = *v7; /*0x63f0c2*/
        }
        ++v6; /*0x63f0d4*/
        v7 += 2; /*0x63f0d5*/
      }
      while ( v6 < v3 ); /*0x63f0da*/
      if ( v5 != v27 ) /*0x63f0e0*/
      {
        v9 = *(unsigned int *)(v2 + 8 * v4 + 4); /*0x63f0e6*/
        v10 = v4; /*0x63f0ea*/
        if ( v9 == v5 ) /*0x63f0ee*/
        {
          do /*0x63f0fa*/
            v10 = (v10 + 1) % v3; /*0x63f0f4*/
          while ( *(unsigned int *)(v2 + 8 * v10 + 4) == v5 ); /*0x63f0fa*/
        }
        v26 = (v3 + v10 - 1) % v3; /*0x63f105*/
        if ( v9 == v5 ) /*0x63f109*/
        {
          do /*0x63f118*/
            v4 = (v3 + v4 - 1) % v3; /*0x63f112*/
          while ( *(unsigned int *)(v2 + 8 * v4 + 4) == v5 ); /*0x63f118*/
        }
        v28 = -1; /*0x63f11d*/
        v11 = (v4 + 1) % v3; /*0x63f12c*/
        v12 = *(unsigned int *)(v2 + 8 * v26); /*0x63f12e*/
        v13 = *(unsigned int *)(v2 + 8 * v11); /*0x63f133*/
        v14 = v13 != v12; /*0x63f138*/
        v30 = v14; /*0x63f13e*/
        if ( v14 ) /*0x63f142*/
        {
          if ( v13 > v12 ) /*0x63f146*/
          {
            v15 = v11; /*0x63f148*/
            v11 = v26; /*0x63f14a*/
            v28 = v13 != v12; /*0x63f14e*/
            v26 = v15; /*0x63f152*/
          }
        }
        else
        {
          v32 = (v26 + 1) % v3; /*0x63f166*/
          v16 = *(unsigned int *)(v2 + 8 * v11 + 4); /*0x63f16d*/
          v34 = (v3 + v11 - 1) % v3; /*0x63f171*/
          if ( (*(unsigned int *)(v2 + 8 * v32) - v13) * (*(unsigned int *)(v2 + 8 * v34 + 4) - v16) /*0x63f19f*/
             - (*(unsigned int *)(v2 + 8 * v34) - v13) * (*(unsigned int *)(v2 + 8 * v32 + 4) - v16) < 0 )
          {
            v17 = v11; /*0x63f1a1*/
            v11 = v26; /*0x63f1a3*/
            v28 = 1; /*0x63f1a7*/
            v26 = v17; /*0x63f1af*/
          }
          v14 = v30; /*0x63f1b3*/
        }
        v18 = v33; /*0x63f1bb*/
        v19 = v14 - v5 + v27 - 1; /*0x63f1c3*/
        v20 = v14 - v5 + v27 == 1; /*0x63f1c7*/
        *v33 = v19; /*0x63f1c9*/
        if ( v19 >= 0 && !v20 ) /*0x63f1cc*/
        {
          v21 = v18[2]; /*0x63f1d2*/
          v18[1] = v5 - v14 + 1; /*0x63f1da*/
          if ( !v21 ) /*0x63f1dd*/
          {
            v18[2] = (int)RA2_OPNEW(8 * v19 + 1600); /*0x63f1ec*/
            v14 = v30; /*0x63f1ef*/
          }
          if ( v18[2] ) /*0x63f1f6*/
          {
            v27 = v18[2]; /*0x63f20a*/
            v22 = !v14; /*0x63f210*/
            v34 = v22; /*0x63f215*/
            do /*0x63f267*/
            {
              if ( v28 <= 0 ) /*0x63f21f*/
              {
                v18 = v33; /*0x63f23c*/
                v11 = (v11 + *v29 - 1) % *v29; /*0x63f240*/
              }
              else
              {
                v11 = (v11 + 1) % *v29; /*0x63f22b*/
              }
              Audio_Process(*(unsigned int *)(v2 + 8 * v11), *(unsigned int *)(v2 + 8 * v11 + 4), 1, v22, &v27); /*0x63f25a*/
              v22 = 0; /*0x63f25f*/
            }
            while ( v11 != v31 ); /*0x63f267*/
            v23 = v34; /*0x63f270*/
            v27 = v18[2]; /*0x63f274*/
            v24 = -v28; /*0x63f27c*/
            v25 = v26; /*0x63f27e*/
            v34 = -v28; /*0x63f280*/
            do /*0x63f2d0*/
            {
              if ( v24 <= 0 ) /*0x63f286*/
              {
                v24 = v34; /*0x63f2a3*/
                v25 = (v25 + *v29 - 1) % *v29; /*0x63f2a7*/
              }
              else
              {
                v25 = (v25 + 1) % *v29; /*0x63f292*/
              }
              Audio_Process(*(unsigned int *)(v2 + 8 * v25) - 1, *(unsigned int *)(v2 + 8 * v25 + 4), 0, v23, &v27); /*0x63f2c3*/
              v23 = 0; /*0x63f2c8*/
            }
            while ( v25 != v31 ); /*0x63f2d0*/
          }
          else
          {
            *v18 = 0; /*0x63f1fe*/
          }
        }
      }
    }
  }
}
}
// 0x630090
namespace gamemd {
int ParticleSystemClass__vt_06_(int * a1, int * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00630090.json)
}
} // namespace gamemd

// 0x6302F0
namespace gamemd {
int sub_6302F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006302F0.json)
}
} // namespace gamemd

// 0x630980
namespace gamemd {
int sub_630980()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00630980.json)
}
} // namespace gamemd

// 0x6309A0
namespace gamemd {
void sub_6309A0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006309A0.json)
}
} // namespace gamemd

// 0x6309D0
namespace gamemd {
void sub_6309D0()
{
  dbl_AC4B20 = dbl_AC4AD0 / 60.0; /*0x6309dc*/
}
} // namespace gamemd

// 0x6309F0
namespace gamemd {
void sub_6309F0()
{
  dbl_AC4B08 = 1.0 / dbl_AC4B20; /*0x6309fc*/
}
} // namespace gamemd

// 0x630A10
namespace gamemd {
void sub_630A10()
{
  dbl_AC4B00 = 0.0174532925199433 * 45.0; /*0x630a1c*/
}
} // namespace gamemd

// 0x630A30
namespace gamemd {
void sub_630A30()
{
  dbl_AC4AD8 = 0.0174532925199433 * 60.0; /*0x630a3c*/
}
} // namespace gamemd

// 0x630A50
namespace gamemd {
void sub_630A50()
{
  dbl_AC4AB0 = 0.0174532925199433 * 90.0; /*0x630a5c*/
}
} // namespace gamemd

// 0x630A70
namespace gamemd {
long long sub_630A70()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC4AB0 - dbl_AC4AD8); /*0x630a82*/
  result = Math::RoundToInt(v0 * dbl_AC4AD0 * 0.5); /*0x630a96*/
  dword_AC4B28 = result; /*0x630a9b*/
  return result; /*0x630aa0*/
}
} // namespace gamemd

// 0x630AB0
namespace gamemd {
void sub_630AB0()
{
  dbl_AC4AE0 = Math::ArcTan((double)dword_AC4B28 * 0.00390625); /*0x630ac7*/
}
} // namespace gamemd

// 0x630AE0
namespace gamemd {
void sub_630AE0()
{
  dbl_AC4AF8 = Math::ArcTan((double)(2 * dword_AC4B28) / dbl_AC4AD0); /*0x630b02*/
}
} // namespace gamemd

// 0x630B10
namespace gamemd {
long long sub_630B10()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4B28) + 0.5); /*0x630b2b*/
  dword_AC4B1C = result; /*0x630b30*/
  return result; /*0x630b36*/
}
} // namespace gamemd

// 0x630B40
namespace gamemd {
int sub_630B40()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00630B40.json)
}
} // namespace gamemd

// 0x630B50
namespace gamemd {
int sub_630B50()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00630B50.json)
}
} // namespace gamemd

// 0x630B70
namespace gamemd {
int sub_630B70()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00630B70.json)
}
} // namespace gamemd

// 0x631C10
namespace gamemd {
int sub_631C10(int * a1, int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00631C10.json)
}
} // namespace gamemd

// 0x631F10
namespace gamemd {
int sub_631F10(int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00631F10.json)
}
} // namespace gamemd

// 0x631F30
namespace gamemd {
void sub_631F30()
{
      // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00631F30.json)
}
} // namespace gamemd

// 0x631FC0
namespace gamemd {
int sub_631FC0(ObjectClass * aP1)
{
    (void)aP1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00631FC0.json)
}
} // namespace gamemd

// 0x631FE0
namespace gamemd {
int sub_631FE0(unsigned char * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00631FE0.json)
}
} // namespace gamemd

// 0x6329C0
namespace gamemd {
void * sub_6329C0(void * a2, unsigned short a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006329C0.json)
}
} // namespace gamemd

// 0x632A20
namespace gamemd {
void * sub_632A20(void * a2, const void * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00632A20.json)
}
} // namespace gamemd

// 0x632A70
namespace gamemd {
int ObjectClass::sub_632A70(int a2, int a3, ObjectClass * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00632A70.json)
}
} // namespace gamemd

// 0x632AC0
namespace gamemd {
unsigned int * sub_632AC0(unsigned int * a2, unsigned short a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00632AC0.json)
}
} // namespace gamemd

// 0x632B20
namespace gamemd {
void * sub_632B20(void * a2, short a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00632B20.json)
}
} // namespace gamemd

// 0x632D60
namespace gamemd {
int sub_632D60(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00632D60.json)
}
} // namespace gamemd

// 0x6333D0
namespace gamemd {
void sub_6333D0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006333D0.json)
}
} // namespace gamemd

// 0x633400
namespace gamemd {
void sub_633400()
{
  dbl_AC4CE8 = dbl_AC4BE8 / 60.0; /*0x63340c*/
}
} // namespace gamemd

// 0x633420
namespace gamemd {
void sub_633420()
{
  dbl_AC4CC0 = 1.0 / dbl_AC4CE8; /*0x63342c*/
}
} // namespace gamemd

// 0x633440
namespace gamemd {
void sub_633440()
{
  dbl_AC4CB8 = 0.0174532925199433 * 45.0; /*0x63344c*/
}
} // namespace gamemd

// 0x633460
namespace gamemd {
void sub_633460()
{
  dbl_AC4C10 = 0.0174532925199433 * 60.0; /*0x63346c*/
}
} // namespace gamemd

// 0x633480
namespace gamemd {
void sub_633480()
{
  dbl_AC4B68 = 0.0174532925199433 * 90.0; /*0x63348c*/
}
} // namespace gamemd

// 0x6334A0
namespace gamemd {
long long sub_6334A0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC4B68 - dbl_AC4C10); /*0x6334b2*/
  result = Math::RoundToInt(v0 * dbl_AC4BE8 * 0.5); /*0x6334c6*/
  dword_AC4CF0 = result; /*0x6334cb*/
  return result; /*0x6334d0*/
}
} // namespace gamemd

// 0x6334E0
namespace gamemd {
void sub_6334E0()
{
  dbl_AC4C30 = Math::ArcTan((double)dword_AC4CF0 * 0.00390625); /*0x6334f7*/
}
} // namespace gamemd

// 0x633510
namespace gamemd {
void sub_633510()
{
  dbl_AC4C70 = Math::ArcTan((double)(2 * dword_AC4CF0) / dbl_AC4BE8); /*0x633532*/
}
} // namespace gamemd

// 0x633540
namespace gamemd {
long long sub_633540()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4CF0) + 0.5); /*0x63355b*/
  dword_AC4CE4 = result; /*0x633560*/
  return result; /*0x633566*/
}
} // namespace gamemd

// 0x633570
namespace gamemd {
int sub_633570()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633570.json)
}
} // namespace gamemd

// 0x633580
namespace gamemd {
int sub_633580()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633580.json)
}
} // namespace gamemd

// 0x6335A0
namespace gamemd {
int sub_6335A0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006335A0.json)
}
} // namespace gamemd

// 0x6335C0
namespace gamemd {
int sub_6335C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006335C0.json)
}
} // namespace gamemd

// 0x6335E0
namespace gamemd {
int sub_6335E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006335E0.json)
}
} // namespace gamemd

// 0x633620
namespace gamemd {
void sub_633620()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633620.json)
}
} // namespace gamemd

// 0x633680
namespace gamemd {
int sub_633680()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633680.json)
}
} // namespace gamemd

// 0x6336C0
namespace gamemd {
void sub_6336C0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006336C0.json)
}
} // namespace gamemd

// 0x633720
namespace gamemd {
int sub_633720()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633720.json)
}
} // namespace gamemd

// 0x633760
namespace gamemd {
void sub_633760()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633760.json)
}
} // namespace gamemd

// 0x6337C0
namespace gamemd {
int sub_6337C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006337C0.json)
}
} // namespace gamemd

// 0x633800
namespace gamemd {
void sub_633800()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633800.json)
}
} // namespace gamemd

// 0x633860
namespace gamemd {
int sub_633860()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633860.json)
}
} // namespace gamemd

// 0x6338A0
namespace gamemd {
void sub_6338A0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006338A0.json)
}
} // namespace gamemd

// 0x633900
namespace gamemd {
int sub_633900()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633900.json)
}
} // namespace gamemd

// 0x633940
namespace gamemd {
void sub_633940()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633940.json)
}
} // namespace gamemd

// 0x6339E0
namespace gamemd {
BuildingClass * ToCoordPixel(unsigned int * a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6339E0)
}
} // namespace gamemd

// 0x633A20
namespace gamemd {
unsigned int * sub_633A20()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633A20.json)
}
} // namespace gamemd

// 0x633A40
namespace gamemd {
int sub_633A40(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633A40.json)
}
} // namespace gamemd

// 0x633A50
namespace gamemd {
int sub_633A50(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633A50.json)
}
} // namespace gamemd

// 0x633A60
namespace gamemd {
int sub_633A60(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633A60.json)
}
} // namespace gamemd

// 0x633A70
namespace gamemd {
char sub_633A70(char a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633A70.json)
}
} // namespace gamemd

// 0x633A90
namespace gamemd {
int E4Recv_633A90::sub_633A90()
{

  return (int)((unsigned int *)this)[0]; /*0x633a93*/

}
} // namespace gamemd

// 0x633AA0
namespace gamemd {
int E4Recv_633AA0::sub_633AA0()
{

  return (int)((unsigned int *)this)[0]; /*0x633aa3*/

}
} // namespace gamemd

// 0x633AE0
namespace gamemd {
void E4Recv_633AE0::sub_633AE0(const void * a2)
{

  qmemcpy(this, a2, 0x6Fu); /*0x633aed*/

}
} // namespace gamemd

// 0x633B00
namespace gamemd {
int sub_633B00(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633B00.json)
}
} // namespace gamemd

// 0x633B10
namespace gamemd {
int sub_633B10(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633B10.json)
}
} // namespace gamemd

// 0x633B20
namespace gamemd {
void sub_633B20()
{
      // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00633B20.json)
}
} // namespace gamemd

// 0x633B30
namespace gamemd {
int sub_633B30()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633B30.json)
}
} // namespace gamemd

// 0x633B40
namespace gamemd {
int sub_633B40()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633B40.json)
}
} // namespace gamemd

// 0x633B70
namespace gamemd {
int sub_633B70()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00633B70.json)
}
} // namespace gamemd

// 0x633B80
namespace gamemd {
int sub_633B80()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00633B80.json)
}
} // namespace gamemd

// 0x633C60
namespace gamemd {
unsigned int * sub_633C60(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00633C60.json)
}
} // namespace gamemd

// 0x633E50
namespace gamemd {
int E4Recv_633E50::sub_633E50()
{

  return ((unsigned int *)this)[0]; /*0x633e53*/

}
} // namespace gamemd

// 0x633E60
namespace gamemd {
int E4Recv_633E60::sub_633E60()
{

  return ((unsigned int *)this)[0]; /*0x633e63*/

}
} // namespace gamemd

// 0x634360
namespace gamemd {
BOOL sub_634360(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00634360.json)
}
} // namespace gamemd

// 0x6343B0
namespace gamemd {
int E4Recv_6343B0::sub_6343B0()
{

  return *(unsigned int *)(**(unsigned int **)((unsigned int *)this)[0] + 540); /*0x6343bd*/

}
} // namespace gamemd

// 0x634470
namespace gamemd {
BOOL sub_634470(int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00634470.json)
}
} // namespace gamemd

// 0x634510
namespace gamemd {
unsigned int * ComputeBounds(AbstractClass * aP0, ObjectClass * aP1, int a3, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x634510)
}
} // namespace gamemd

// 0x634700
namespace gamemd {
int sub_634700()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00634700.json)
}
} // namespace gamemd

// 0x6347A0
namespace gamemd {
int sub_6347A0(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x006347A0.json)
}
} // namespace gamemd

// 0x634800
namespace gamemd {
char * sub_634800()
{
     return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00634800.json)
}
} // namespace gamemd

// 0x634810
namespace gamemd {
unsigned int * sub_634810(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00634810.json)
}
} // namespace gamemd

// 0x634850
namespace gamemd {
unsigned int * sub_634850(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00634850.json)
}
} // namespace gamemd

// 0x634880
namespace gamemd {
unsigned int * sub_634880(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00634880.json)
}
} // namespace gamemd

// 0x6348F0
namespace gamemd {
unsigned int * sub_6348F0(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006348F0.json)
}
} // namespace gamemd

// 0x634950
namespace gamemd {
void E4Recv_634950::sub_634950()
{

  LOBYTE(((unsigned int *)this)[0]) = 1; /*0x634950*/

}
} // namespace gamemd

// 0x634960
namespace gamemd {
char E4Recv_634960::sub_634960()
{

  return ((unsigned int *)this)[0]; /*0x634963*/

}
} // namespace gamemd

// 0x635210
namespace gamemd {
int sub_635210()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00635210.json)
}
} // namespace gamemd

// 0x6352D0
namespace gamemd {
char sub_6352D0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006352D0.json)
}
} // namespace gamemd

// 0x635310
namespace gamemd {
char sub_635310()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00635310.json)
}
} // namespace gamemd

// 0x6357D0
namespace gamemd {
int Rect_Shrink(unsigned int * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006357D0.json)
}
} // namespace gamemd

// 0x635DF0
namespace gamemd {
unsigned int * sub_635DF0(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00635DF0.json)
}
} // namespace gamemd

// 0x635E90
namespace gamemd {
int * sub_635E90(int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00635E90.json)
}
} // namespace gamemd

// 0x636110
namespace gamemd {
ObjectClass * ReadPointerFromECX2()
{
     return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00636110.json)
}
} // namespace gamemd

// 0x636520
namespace gamemd {
void E4Recv_636520::sub_636520()
{

  LOBYTE(((unsigned int *)this)[0]) = 1; /*0x636520*/

}
} // namespace gamemd

// 0x636530
namespace gamemd {
void E4Recv_636530::sub_636530()
{

  LOBYTE(((unsigned int *)this)[0]) = 0; /*0x636530*/

}
} // namespace gamemd

// 0x636540
namespace gamemd {
char E4Recv_636540::sub_636540()
{

  return ((unsigned int *)this)[0]; /*0x636543*/

}
} // namespace gamemd

// 0x636D90
namespace gamemd {
unsigned int E4Recv_636D90::_GetExecutionResourceId_irtualProcessor_details_Concurrency__QBEIXZ()
{

  return this->M140; /*0x636d96*/

}
} // namespace gamemd

// 0x636FA0
namespace gamemd {
int sub_636FA0(int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00636FA0.json)
}
} // namespace gamemd

// 0x636FC0
namespace gamemd {
unsigned int E4Recv_636FC0::_GetMaskId_irtualProcessor_details_Concurrency__QBEIXZ()
{

  return this->M144; /*0x636fc6*/

}
} // namespace gamemd

// 0x636FD0
namespace gamemd {
int sub_636FD0()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00636FD0.json)
}
} // namespace gamemd

// 0x637020
namespace gamemd {
bool E4Recv_637020::_WasExplicitlyAttached_ExternalContextBase_details_Concurrency__QBE_NXZ()
{

  return this->M152; /*0x637026*/

}
} // namespace gamemd

// 0x637030
namespace gamemd {
char sub_637030()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00637030.json)
}
} // namespace gamemd

// 0x6370A0
namespace gamemd {
int j_PlanningNodeClass_CleanupAll()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6370A0)
}
} // namespace gamemd

// 0x637550
namespace gamemd {
void __usercall FlushPlanningQueue(CCINIClass * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x637550)
}
} // namespace gamemd

// 0x638F90
namespace gamemd {
int sub_638F90(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00638F90.json)
}
} // namespace gamemd

// 0x6394E0
namespace gamemd {
char sub_6394E0(IUnknown * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006394E0.json)
}
} // namespace gamemd

// 0x63A440
namespace gamemd {
int sub_63A440(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063A440.json)
}
} // namespace gamemd

// 0x63A4A0
namespace gamemd {
void E4Recv_63A4A0::sub_63A4A0()
{

  *(unsigned int *)&stru_AC4B30.__pad_EC[116] = this; /*0x63a4a0*/

}
} // namespace gamemd

// 0x63AD30
namespace gamemd {
void E4Recv_63AD30::sub_63AD30()
{

  *(unsigned int *)&stru_AC4B30.__pad_EC[28] = this; /*0x63ad30*/

}
} // namespace gamemd

// 0x63AD40
namespace gamemd {
IUnknown * sub_63AD40()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x63AD40)
}
} // namespace gamemd

// 0x63B090
namespace gamemd {
void sub_63B090()
{
  dword_AC4BF0 = 0; /*0x63b090*/
}
} // namespace gamemd

// 0x63D070
namespace gamemd {
int ColorLerpAndPack(short * a1, unsigned char * a2, ObjectClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063D070.json)
}
} // namespace gamemd

// 0x63D210
namespace gamemd {
int * ActionScenarioClassCoordToScreen(BuildingClass * aP0, const void * a1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x63D210)
}
} // namespace gamemd

// 0x63D2D0
namespace gamemd {
int sub_63D2D0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063D2D0.json)
}
} // namespace gamemd

// 0x63D910
namespace gamemd {
char DrawTacticalFillScanline(AbstractClass * aP0, BuildingClass * aP1, int a3, BuildingClass * aP3, int a5, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063D910.json)
}
} // namespace gamemd

// 0x63D960
namespace gamemd {
char globalHelper_03D960(Tactical * aP0, int a2, int a3, int a4, int a5, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063D960.json)
}
} // namespace gamemd

// 0x63F4A0
namespace gamemd {
int sub_63F4A0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063F4A0.json)
}
} // namespace gamemd

// 0x63F4C0
namespace gamemd {
void sub_63F4C0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063F4C0.json)
}
} // namespace gamemd

// 0x63F4F0
namespace gamemd {
void sub_63F4F0()
{
  dbl_AC4E68 = dbl_AC4D18 / 60.0; /*0x63f4fc*/
}
} // namespace gamemd

// 0x63F510
namespace gamemd {
void sub_63F510()
{
  dbl_AC4E50 = 1.0 / dbl_AC4E68; /*0x63f51c*/
}
} // namespace gamemd

// 0x63F530
namespace gamemd {
void sub_63F530()
{
  dbl_AC4E48 = 0.0174532925199433 * 45.0; /*0x63f53c*/
}
} // namespace gamemd

// 0x63F550
namespace gamemd {
void sub_63F550()
{
  dbl_AC4D20 = 0.0174532925199433 * 60.0; /*0x63f55c*/
}
} // namespace gamemd

// 0x63F570
namespace gamemd {
void sub_63F570()
{
  dbl_AC4CF8 = 0.0174532925199433 * 90.0; /*0x63f57c*/
}
} // namespace gamemd

// 0x63F590
namespace gamemd {
long long sub_63F590()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC4CF8 - dbl_AC4D20); /*0x63f5a2*/
  result = Math::RoundToInt(v0 * dbl_AC4D18 * 0.5); /*0x63f5b6*/
  dword_AC4E70 = result; /*0x63f5bb*/
  return result; /*0x63f5c0*/
}
} // namespace gamemd

// 0x63F5D0
namespace gamemd {
void sub_63F5D0()
{
  dbl_AC4D28 = Math::ArcTan((double)dword_AC4E70 * 0.00390625); /*0x63f5e7*/
}
} // namespace gamemd

// 0x63F600
namespace gamemd {
void sub_63F600()
{
  dbl_AC4E40 = Math::ArcTan((double)(2 * dword_AC4E70) / dbl_AC4D18); /*0x63f622*/
}
} // namespace gamemd

// 0x63F630
namespace gamemd {
long long sub_63F630()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4E70) + 0.5); /*0x63f64b*/
  dword_AC4E64 = result; /*0x63f650*/
  return result; /*0x63f656*/
}
} // namespace gamemd

// 0x63F660
namespace gamemd {
int sub_63F660()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063F660.json)
}
} // namespace gamemd

// 0x63F670
namespace gamemd {
int sub_63F670()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063F670.json)
}
} // namespace gamemd

// 0x63F690
namespace gamemd {
int sub_63F690()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063F690.json)
}
} // namespace gamemd

// 0x63F810
namespace gamemd {
int sub_63F810()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063F810.json)
}
} // namespace gamemd

// 0x63F8F0
namespace gamemd {
long long sub_63F8F0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063F8F0.json)
}
} // namespace gamemd

// 0x63FDC0
namespace gamemd {
int sub_63FDC0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063FDC0.json)
}
} // namespace gamemd

// 0x63FE30
namespace gamemd {
int sub_63FE30()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063FE30.json)
}
} // namespace gamemd
