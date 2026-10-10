// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// G57w8: utility_ext flat-twin suppression battery (full; C2011 x48 root fix)
#ifndef GAMEMD_E4_AllocCallback
#define GAMEMD_E4_AllocCallback 1
#endif
#ifndef GAMEMD_E4_Buffer
#define GAMEMD_E4_Buffer 1
#endif
#ifndef GAMEMD_E4_COM
#define GAMEMD_E4_COM 1
#endif
#ifndef GAMEMD_E4_COMClass
#define GAMEMD_E4_COMClass 1
#endif
#ifndef GAMEMD_E4_COMObject
#define GAMEMD_E4_COMObject 1
#endif
#ifndef GAMEMD_E4_ComPtr
#define GAMEMD_E4_ComPtr 1
#endif
#ifndef GAMEMD_E4_Compare
#define GAMEMD_E4_Compare 1
#endif
#ifndef GAMEMD_E4_Config
#define GAMEMD_E4_Config 1
#endif
#ifndef GAMEMD_E4_Delegate
#define GAMEMD_E4_Delegate 1
#endif
#ifndef GAMEMD_E4_EnumConnectionPointsClass
#define GAMEMD_E4_EnumConnectionPointsClass 1
#endif
#ifndef GAMEMD_E4_EnumConnectionsClass
#define GAMEMD_E4_EnumConnectionsClass 1
#endif
#ifndef GAMEMD_E4_EventQueue
#define GAMEMD_E4_EventQueue 1
#endif
#ifndef GAMEMD_E4_Event_Dispatch
#define GAMEMD_E4_Event_Dispatch 1
#endif
#ifndef GAMEMD_E4_Flag
#define GAMEMD_E4_Flag 1
#endif
#ifndef GAMEMD_E4_Float
#define GAMEMD_E4_Float 1
#endif
#ifndef GAMEMD_E4_Float4
#define GAMEMD_E4_Float4 1
#endif
#ifndef GAMEMD_E4_GraphicMenuAnimItem
#define GAMEMD_E4_GraphicMenuAnimItem 1
#endif
#ifndef GAMEMD_E4_GraphicMenuItem
#define GAMEMD_E4_GraphicMenuItem 1
#endif
#ifndef GAMEMD_E4_Hash
#define GAMEMD_E4_Hash 1
#endif
#ifndef GAMEMD_E4_Helper
#define GAMEMD_E4_Helper 1
#endif
#ifndef GAMEMD_E4_LoadGame
#define GAMEMD_E4_LoadGame 1
#endif
#ifndef GAMEMD_E4_Main
#define GAMEMD_E4_Main 1
#endif
#ifndef GAMEMD_E4_MoveFeedback
#define GAMEMD_E4_MoveFeedback 1
#endif
#ifndef GAMEMD_E4_Player
#define GAMEMD_E4_Player 1
#endif
#ifndef GAMEMD_E4_PlayerClass
#define GAMEMD_E4_PlayerClass 1
#endif
#ifndef GAMEMD_E4_Process
#define GAMEMD_E4_Process 1
#endif
#ifndef GAMEMD_E4_PtrVector
#define GAMEMD_E4_PtrVector 1
#endif
#ifndef GAMEMD_E4_Random
#define GAMEMD_E4_Random 1
#endif
#ifndef GAMEMD_E4_Rect
#define GAMEMD_E4_Rect 1
#endif
#ifndef GAMEMD_E4_Rect_Point
#define GAMEMD_E4_Rect_Point 1
#endif
#ifndef GAMEMD_E4_RefCount
#define GAMEMD_E4_RefCount 1
#endif
#ifndef GAMEMD_E4_Return
#define GAMEMD_E4_Return 1
#endif
#ifndef GAMEMD_E4_SHA1
#define GAMEMD_E4_SHA1 1
#endif
#ifndef GAMEMD_E4_Selection
#define GAMEMD_E4_Selection 1
#endif
#ifndef GAMEMD_E4_Settings
#define GAMEMD_E4_Settings 1
#endif
#ifndef GAMEMD_E4_StringVector
#define GAMEMD_E4_StringVector 1
#endif
#ifndef GAMEMD_E4_Struct
#define GAMEMD_E4_Struct 1
#endif
#ifndef GAMEMD_E4_Time
#define GAMEMD_E4_Time 1
#endif
#ifndef GAMEMD_E4_Type
#define GAMEMD_E4_Type 1
#endif
#ifndef GAMEMD_E4_Value
#define GAMEMD_E4_Value 1
#endif
#ifndef GAMEMD_E4_Vector2
#define GAMEMD_E4_Vector2 1
#endif
#ifndef GAMEMD_E4_Vector3
#define GAMEMD_E4_Vector3 1
#endif
#ifndef GAMEMD_E4_VectorCursor
#define GAMEMD_E4_VectorCursor 1
#endif
#ifndef GAMEMD_E4_WinMain
#define GAMEMD_E4_WinMain 1
#endif
#ifndef GAMEMD_E4_unknown
#define GAMEMD_E4_unknown 1
#endif
#ifndef GAMEMD_E4_HashTable
#define GAMEMD_E4_HashTable 1
#endif
#ifndef GAMEMD_E4_Queue
#define GAMEMD_E4_Queue 1
#endif
#ifndef GAMEMD_E4_StringList
#define GAMEMD_E4_StringList 1
#endif
#ifndef GAMEMD_E4_AnimTypeList
#define GAMEMD_E4_AnimTypeList 1
#endif
#ifndef GAMEMD_E4_VoxelAnimTypeVector
#define GAMEMD_E4_VoxelAnimTypeVector 1
#endif
#ifndef GAMEMD_E4_MATH_ALIASES
#define GAMEMD_E4_MATH_ALIASES 1  // G57w8: tree-universe TU consumes math.hpp aliases; flat CoordStruct/CellStruct/Point2D twins stand down
#endif
// G57w8 battery end
// G42.32 S: guard-order tree-bridge -- ra2::game full defs precede e4 leaf headers
#include "object/abstract.hpp"
#ifdef GAMEMD_TREE_UNIVERSE
namespace gamemd {
extern unsigned int dword_8B417C;  // G57w19k3 data: 0x8B417C FootClass Array Items#3
using ra2::game::AbstractClass;
}
#endif
// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "core/utility_ext.hpp"
#include "e4/classes/Voice_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "misc/audio.hpp"
#include "misc/misc_ext.hpp"
#include "object/techno.hpp"
#include "render/surface.hpp"
#include "structure/building.hpp"
#include "system/cell.hpp"
#include "system/factory.hpp"
#include "team/tag.hpp"
#include "e4/classes/ArrayClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/e4_globals.hpp"  // G42.32 S R5: DSurface_ViewBounds flat + g_TacticalClass_Instance
#include "e4/classes/Display_e4.hpp"  // w16g4 C3861 Display:: supply
#include "e4/classes/Factory_e4.hpp"  // w16g4 C3861 Factory:: supply
#include "e4/classes/Vector_e4.hpp"  // w16g4 C3861 Vector:: supply
namespace Mission_e4 { int SetAndCall(...); }  // w16g4 C3861 ns-supply (no carrier hpp)
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int DrawTacticalFillScanline(...);  // raw 0063D910: char __fastcall DrawTacticalFillScanline(int a1, int a2, int a3, int a4, int a5, int a6)
    int DrawTacticalLine2D(...);  // raw 0063D810: char __fastcall Tactical_DrawLine2D(int a1, int a2, int a3, int a4, int a5, int a6, char a
    int PackRGBFromBytes(...);  // raw 0063DAD0: int __thiscall PackRGBFromBytes(ObjectClass *this)
} // namespace gamemd

// 0x637DB0
namespace gamemd {
bool ScriptAction::SetField10() {
  return !stru_AC4B30.__pad_EC[216] || this != (ScriptAction *)4; /*0x637dc0*/
}
} // namespace gamemd

// 0x6E47C0
namespace gamemd {
void * ScriptAction::CopyStructField(void *a2, const void *a3) {
  if ( a3 != this ) /*0x6e47ca*/
    memcpy(this, a3, 0x20u); /*0x6e47d3*/
  memcpy(a2, this, 0x20u); /*0x6e47e2*/
  return a2; /*0x6e47e4*/
}
} // namespace gamemd

// 0x638CE0
namespace gamemd {
int ScriptAction::ClassifyAction(int *a1, char *a2)
{
  char v3; // cl
  int *Type; // eax
  int v6; // ecx
  Array *v7; // esi
  int Value; // eax
  int v9; // eax
  unsigned char *v10; // esi
  unsigned char v11[108]; // [esp+8h] [ebp-70h] BYREF
  int16_t v12; // [esp+74h] [ebp-4h]
  char v13; // [esp+76h] [ebp-2h]

  v3 = *a2; /*0x638ce8*/
  if ( *a2 == 9 || v3 == 6 || v3 == 7 ) /*0x638cf8*/
    return 0; /*0x638d01*/
  if ( Team_Load(a1, a2[12], *(unsigned int *)(a2 + 14), a2[18]) ) /*0x638d1a*/
    return 0; /*0x638d2a*/
  Type = (int *)BuildingClass::GetType((BuildingClass *)a1); /*0x638d2d*/
  if ( !Type ) /*0x638d34*/
    return -1; /*0x638d34*/
  v6 = Type[5]; /*0x638d36*/
  if ( v6 <= 0 ) /*0x638d3b*/
    return -1; /*0x638d3b*/
  v7 = *(Array **)(Type[2] + 4 * v6 - 4); /*0x638d43*/
  Value = Array::FindValue(v7, *Type); /*0x638d49*/
  if ( Value == -1 ) /*0x638d51*/
    v9 = 0; /*0x638d53*/
  else
    v9 = *((unsigned int *)v7->Array_field_0x4 + Value); /*0x638d5a*/
  v10 = *(unsigned char **)(v9 + 4); /*0x638d5d*/
  memcpy(v11, v10, sizeof(v11)); /*0x638d69*/
  v10 += 108; /*0x638d69*/
  v12 = *(unsigned short *)v10; /*0x638d6b*/
  v13 = v10[2]; /*0x638d6d*/
  if ( v11[12] == 7 || v11[12] == 8 || v11[12] == 9 ) /*0x638d80*/
    return 1; /*0x638d8c*/
  if ( (v11[12] == 1 || v11[12] == 11) && (v11[18] == 11 || v11[12] == 11 && !v11[18]) ) /*0x638da7*/
    return 2; /*0x638da9*/
  else
    return -1; /*0x638db5*/
}
} // namespace gamemd

// 0x403730
namespace gamemd {
int AudioQueue::StopAllVoices()
{
  int v1; // edx
  int v2; // ecx
  int v3; // ebx
  int result; // eax
  AudioQueue *v5; // esi
  int v6; // edi
  Voice *v7; // [esp+0h] [ebp-Ch]

  v3 = v1; /*0x403733*/
  result = AudioQueue::GetNext((AudioQueue *)(v2 + 248)); /*0x40373b*/
  v5 = (AudioQueue *)result; /*0x403740*/
  v6 = result; /*0x403744*/
  if ( result ) /*0x403746*/
  {
    do /*0x403766*/
    {
      result = AudioQueue::GetNextAlt(v5); /*0x40374a*/
      v5 = (AudioQueue *)result; /*0x403752*/
      if ( v3 == -1 || *(unsigned int *)(v6 + 12) == v3 ) /*0x403759*/
        result = Voice::Stop(v7); /*0x40375d*/
      v6 = (int)v5; /*0x403764*/
    }
    while ( v5 ); /*0x403766*/
  }
  return result; /*0x403768*/
}
} // namespace gamemd

// 0x633FA0
namespace gamemd {
int ScriptAction::CreatePlacementAction(unsigned int *a2, const void *a3)
{
  int v4; // eax
  unsigned int *v5; // ebx
  unsigned char *v6; // eax
  int v7; // eax
  int ScriptAction_field_0x14; // ecx
  int v9; // eax
  int v10; // edx
  int Type; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx

  v4 = operator new(0x10u); /*0x633fa7*/
  if ( v4 ) /*0x633fb1*/
  {
    *(unsigned int *)v4 = 0; /*0x633fb3*/
    *(unsigned int *)(v4 + 4) = 0; /*0x633fb9*/
    *(unsigned int *)(v4 + 8) = -1; /*0x633fc0*/
    *(unsigned char *)(v4 + 12) = 0; /*0x633fc7*/
    v5 = (unsigned int *)v4; /*0x633fcb*/
  }
  else
  {
    v5 = 0; /*0x633fcf*/
  }
  *v5 = a2; /*0x633fd7*/
  v6 = (unsigned char *)operator new(0x6Fu); /*0x633fd9*/
  if ( v6 ) /*0x633fe3*/
    *v6 = 0; /*0x633fe5*/
  else
    v6 = 0; /*0x633fea*/
  memcpy(v6, a3, 0x6Fu); /*0x633ff8*/
  v5[1] = v6; /*0x633ffd*/
  v7 = this->ScriptAction_field_0x8[0]; /*0x634000*/
  if ( this->ScriptAction_field_0x10[0] < v7 /*0x634024*/
    || (this->__pad_C[1] || !v7)
    && (ScriptAction_field_0x14 = this->ScriptAction_field_0x14, ScriptAction_field_0x14 > 0)
    && (*(uint8_t (__thiscall **)(ScriptAction *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
         this,
         v7 + ScriptAction_field_0x14,
         0) )
  {
    v9 = this->ScriptAction_field_0x10[0]; /*0x63402b*/
    v10 = this->ScriptAction_field_0x4[0]; /*0x63402e*/
    this->ScriptAction_field_0x10[0] = v9 + 1; /*0x634034*/
    *(unsigned int *)(v10 + 4 * v9) = v5; /*0x634037*/
  }
  Type = BuildingClass::GetType((BuildingClass *)a2); /*0x634043*/
  v12 = *(unsigned int *)(Type + 12); /*0x634045*/
  if ( *(unsigned int *)(Type + 20) < v12 /*0x63406d*/
    || (*(unsigned char *)(Type + 17) || !v12)
    && (v13 = *(unsigned int *)(Type + 24), v13 > 0)
    && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(Type + 4) + 8))(Type + 4, v12 + v13, 0) )
  {
    v14 = *(unsigned int *)(Type + 20); /*0x634074*/
    v15 = *(unsigned int *)(Type + 8); /*0x634077*/
    *(unsigned int *)(Type + 20) = v14 + 1; /*0x63407d*/
    *(unsigned int *)(v15 + 4 * v14) = this; /*0x634080*/
  }
  if ( *(unsigned int *)(Type + 140) == -1 ) /*0x63408d*/
    *(unsigned int *)(Type + 140) = *(unsigned int *)(Type + 20) - 1; /*0x634093*/
  return ScriptAction::PlaceObject((int)this, v5); /*0x6340a1*/
}
} // namespace gamemd

// 0x6343C0
namespace gamemd {
unsigned int * ScriptAction::GetCoords(unsigned int *a2)
{
  int *ScenarioClassActionCoords; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  unsigned int v7[3]; // [esp+8h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords( /*0x6343d1*/
                                v7,
                                *(unsigned char **)(*(unsigned int *)this->ScriptAction_field_0x4[0] + 4));
  v3 = *ScenarioClassActionCoords; /*0x6343d6*/
  v4 = ScenarioClassActionCoords[1]; /*0x6343d8*/
  v5 = ScenarioClassActionCoords[2]; /*0x6343db*/
  *a2 = v3; /*0x6343e4*/
  a2[1] = v4; /*0x6343e6*/
  a2[2] = v5; /*0x6343e9*/
  return a2; /*0x6343ec*/
}
} // namespace gamemd

// 0x634400
namespace gamemd {
unsigned int * ScriptAction::GetScreenPos(unsigned int *a2)
{
  unsigned int *ScenarioClassActionCoords; // eax
  char *v3; // edx
  int v5[3]; // [esp+0h] [ebp-18h] BYREF
  unsigned int v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords( /*0x63440f*/
                                v5,
                                *(unsigned char **)(*(unsigned int *)this->ScriptAction_field_0x4[0] + 4));
  v6[0] = *ScenarioClassActionCoords; /*0x634416*/
  v6[1] = ScenarioClassActionCoords[1]; /*0x63441d*/
  v6[2] = ScenarioClassActionCoords[2]; /*0x634434*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x634438*/
  v3 = (char *)DSurface_ViewBounds.field_4 + v5[1]; /*0x634452*/
  *a2 = DSurface_ViewBounds.field_0 + v5[0]; /*0x634458*/
  a2[1] = v3; /*0x63445a*/
  return a2; /*0x63445d*/
}
} // namespace gamemd

// 0x634550
namespace gamemd {
BOOL ScriptAction::GetActionCoordinates(int a2, int a3, int a4)
{
  unsigned int *ScenarioClassActionCoords; // eax
  unsigned int v6[3]; // [esp+4h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords( /*0x634560*/
                                v6,
                                *(unsigned char **)(*(unsigned int *)this->ScriptAction_field_0x4[0] + 4));
  return *ScenarioClassActionCoords == a2 && ScenarioClassActionCoords[1] == a3 && ScenarioClassActionCoords[2] == a4; /*0x63456f*/
}
} // namespace gamemd

// 0x6346B0
namespace gamemd {
unsigned int * ScriptAction::FindItemByValue(int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // esi
  unsigned int **i; // ecx

  v2 = this->ScriptAction_field_0x10[0]; /*0x6346b0*/
  v3 = 0; /*0x6346b4*/
  if ( v2 <= 0 ) /*0x6346ba*/
    return 0; /*0x6346ba*/
  v4 = this->ScriptAction_field_0x4[0]; /*0x6346bc*/
  for ( i = (unsigned int **)v4; **i != a2; ++i ) /*0x6346c3*/
  {
    if ( ++v3 >= v2 ) /*0x6346d1*/
      return 0; /*0x6346d8*/
  }
  if ( v3 == -1 ) /*0x6346de*/
    return 0; /*0x6346e2*/
  else
    return *(unsigned int **)(v4 + 4 * v3); /*0x6346e8*/
}
} // namespace gamemd

// 0x634CC0
namespace gamemd {
int ScriptAction::FindBuildingMatch(unsigned int *a2)
{
  int Type; // esi
  int v4; // eax
  int v5; // eax
  ScriptAction *v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  ScriptAction *v11; // ecx
  int Value; // eax
  int v13; // eax
  unsigned char *v14; // esi
  int v15; // edi
  int *ScenarioClassActionCoords; // eax
  int v17; // ebp
  int v18; // ebx
  unsigned int *v19; // esi
  unsigned int *v20; // esi
  unsigned int *v21; // eax
  void *ScriptAction_field_0x30; // [esp+10h] [ebp-100h] BYREF
  ScriptAction *v24; // [esp+14h] [ebp-FCh]
  int v25; // [esp+1Ch] [ebp-F4h]
  int i; // [esp+20h] [ebp-F0h]
  unsigned int v27[3]; // [esp+24h] [ebp-ECh] BYREF
  unsigned char v28[108]; // [esp+30h] [ebp-E0h] BYREF
  int16_t v29; // [esp+9Ch] [ebp-74h]
  char v30; // [esp+9Eh] [ebp-72h]
  unsigned char v31[108]; // [esp+A0h] [ebp-70h] BYREF
  int16_t v32; // [esp+10Ch] [ebp-4h]
  char v33; // [esp+10Eh] [ebp-2h]

  v24 = this; /*0x634cd5*/
  Type = BuildingClass::GetType((BuildingClass *)a2); /*0x634cde*/
  v4 = *(unsigned int *)(Type + 4); /*0x634ce0*/
  ScriptAction_field_0x30 = this; /*0x634ce7*/
  v5 = (*(int (__thiscall **)(int, void **))(v4 + 16))(Type + 4, &ScriptAction_field_0x30); /*0x634cef*/
  if ( v5 == -1 ) /*0x634cf5*/
  {
    v6 = 0; /*0x634cf7*/
  }
  else
  {
    v7 = *(unsigned int *)(Type + 20); /*0x634cfb*/
    if ( v7 == 1 ) /*0x634d01*/
    {
      v6 = this; /*0x634d03*/
    }
    else
    {
      v8 = v5 - 1; /*0x634d07*/
      if ( v8 < 0 ) /*0x634d08*/
        v8 = v7 - 1; /*0x634d0a*/
      v6 = (ScriptAction *)ArrayClass::GetAt_Wrap((ArrayClass *)Type, v8); /*0x634d15*/
    }
  }
  v9 = BuildingClass::GetType((BuildingClass *)a2); /*0x634d19*/
  v10 = *(unsigned int *)(v9 + 20) - 1; /*0x634d21*/
  if ( v10 >= 0 ) /*0x634d22*/
    v11 = *(ScriptAction **)(*(unsigned int *)(v9 + 8) + 4 * v10); /*0x634d2b*/
  else
    v11 = 0; /*0x634d24*/
  if ( v6 != v11 )
  {
    Value = Array::FindValue((Array *)v6, (int)a2); /*0x634d39*/
    v13 = Value == -1 ? 0 : *(unsigned int *)(v6->ScriptAction_field_0x4[0] + 4 * Value);
    v14 = *(unsigned char **)(v13 + 4); /*0x634d4d*/
    memcpy(v28, v14, sizeof(v28)); /*0x634d59*/
    v14 += 108; /*0x634d59*/
    v29 = *(unsigned short *)v14; /*0x634d5b*/
    v30 = v14[2]; /*0x634d5d*/
    ScriptAction_field_0x30 = this->ScriptAction_field_0x30; /*0x634d63*/
    v15 = (int)ScriptAction_field_0x30; /*0x634d5e*/
    if ( ScriptAction_field_0x30 ) /*0x634d67*/
    {
      ScenarioClassActionCoords = GetScenarioClassActionCoords(v27, v28); /*0x634d75*/
      v17 = *ScenarioClassActionCoords; /*0x634d7a*/
      v18 = 0; /*0x634d7c*/
      v25 = ScenarioClassActionCoords[1]; /*0x634d83*/
      for ( i = ScenarioClassActionCoords[2]; v18 < v15; ++v18 ) /*0x634d8e*/
      {
        v19 = *(unsigned int **)(v24->ScriptAction_field_0x24 + 4 * v18); /*0x634d97*/
        if ( v19[28] ) /*0x634d9a*/
        {
          memcpy(v31, v19, sizeof(v31)); /*0x634dad*/
          v20 = v19 + 27; /*0x634dad*/
          v32 = *(unsigned short *)v20; /*0x634daf*/
          v33 = *((unsigned char *)v20 + 2); /*0x634dbc*/
          v21 = GetScenarioClassActionCoords(v27, v31); /*0x634dbd*/
          if ( v17 == *v21 && v25 == v21[1] && i == v21[2] ) /*0x634dda*/
            return v18; /*0x634df3*/
          v15 = (int)ScriptAction_field_0x30; /*0x634ddc*/
        }
      }
    }
  }
  return -1; /*0x634de7*/
}
} // namespace gamemd

// 0x6351E0
namespace gamemd {
int ScriptAction::DecrementRefCount(int a2)
{
  int result; // eax

  *(unsigned char *)(a2 + 12) = 0; /*0x6351e4*/
  result = (int)this->ScriptAction_field_0xA8 - 1; /*0x6351ee*/
  this->ScriptAction_field_0xA8 = (void *)result; /*0x6351ef*/
  if ( !result ) /*0x6351f5*/
    this->ScriptAction_field_0xB0 = (void *)-1; /*0x6351f7*/
  return result; /*0x635201*/
}
} // namespace gamemd

// 0x635F20
namespace gamemd {
unsigned int * ScriptAction::Constructor(int a2)
{
  this->ScriptAction_field_0x8[0] = 0; /*0x635f27*/
  *(unsigned int *)this->__pad_C = 0; /*0x635f2a*/
  (*((unsigned char *)&(this->ScriptAction_field_0x10[0]))) = 1; /*0x635f2d*/
  (((unsigned char *)&(this->ScriptAction_field_0x10[0]))[1]) = 0; /*0x635f31*/
  this->ScriptAction_field_0x4[0] = (int)0; /*0x635f34*/
  this->ScriptAction_field_0x18[0] = 10; /*0x635f3b*/
  this->ScriptAction_field_0x14 = 0; /*0x635f42*/
  this->__pad_1C[0] = 0; /*0x635f45*/
  this->__pad_1C[1] = 0; /*0x635f48*/
  (*((unsigned char *)&(this->ScriptAction_field_0x98))) = 0; /*0x635f4b*/
  (((unsigned char *)&(this->ScriptAction_field_0x98))[1]) = 0; /*0x635f51*/
  this->ScriptAction_field_0x8C = (void *)-1; /*0x635f5b*/
  *(unsigned int *)this->__pad_90 = -1; /*0x635f61*/
  this->ScriptAction_field_0x94 = (void *)-1; /*0x635f67*/
  *(unsigned int *)this->__pad_0 = a2; /*0x635f6d*/
  return this->__pad_0; /*0x635f6f*/
}
} // namespace gamemd

// 0x636570
namespace gamemd {
BOOL ScriptAction::Check()
{
  void *ScriptAction_field_0x8C; // eax
  BOOL result; // eax

  result = 0; /*0x636586*/
  if ( this->ScriptAction_field_0x14 > 0 ) /*0x636575*/
  {
    ScriptAction_field_0x8C = this->ScriptAction_field_0x8C; /*0x636577*/
    if ( ScriptAction_field_0x8C == (void *)-1 || (int)ScriptAction_field_0x8C > 0 ) /*0x636584*/
      return 1; /*0x636575*/
  }
  return result; /*0x63658b*/
}
} // namespace gamemd

// 0x636CE0
namespace gamemd {
int ScriptAction::ClearBuildingState()
{
  void *ScriptAction_field_0x94; // eax
  unsigned int *v2; // edx
  int v3; // esi
  int i; // eax
  int ScriptAction_field_0x14; // ebp
  int result; // eax
  int j; // ebx
  unsigned int *v8; // edx
  int v9; // esi
  int v10; // [esp+10h] [ebp-4h]

  if ( (*((unsigned char *)&(this->ScriptAction_field_0x98))) ) /*0x636ce1*/
  {
    ScriptAction_field_0x94 = this->ScriptAction_field_0x94; /*0x636cf2*/
    if ( ScriptAction_field_0x94 != (void *)-1 ) /*0x636cfa*/
    {
      v2 = *(unsigned int **)(this->ScriptAction_field_0x8[0] + 4 * (unsigned int)ScriptAction_field_0x94); /*0x636cff*/
      if ( v2 ) /*0x636d04*/
      {
        v2[45] = -1; /*0x636d06*/
        v3 = v2[12]; /*0x636d0c*/
        for ( i = 0; i < v3; *(unsigned int *)(*(unsigned int *)(v2[9] + 4 * i - 4) + 116) = -1 ) /*0x636d13*/
          ++i; /*0x636d18*/
        v2[43] = -1; /*0x636d24*/
      }
    }
    (*((unsigned char *)&(this->ScriptAction_field_0x98))) = 0; /*0x636d2a*/
  }
  ScriptAction_field_0x14 = this->ScriptAction_field_0x14; /*0x636d37*/
  v10 = ScriptAction_field_0x14; /*0x636d3c*/
  result = this->ScriptAction_field_0x8C != (void *)-1 ? (int)this->ScriptAction_field_0x8C : 0;
  for ( j = result; j < ScriptAction_field_0x14; ++j ) /*0x636d4b*/
  {
    result = this->ScriptAction_field_0x8[0]; /*0x636d4d*/
    v8 = *(unsigned int **)(result + 4 * j); /*0x636d50*/
    if ( v8 ) /*0x636d55*/
    {
      v8[45] = -1; /*0x636d57*/
      v9 = v8[12]; /*0x636d5d*/
      result = 0; /*0x636d60*/
      if ( v9 > 0 ) /*0x636d64*/
      {
        do /*0x636d73*/
        {
          ++result; /*0x636d69*/
          *(unsigned int *)(*(unsigned int *)(v8[9] + 4 * result - 4) + 116) = -1; /*0x636d70*/
        }
        while ( result < v9 ); /*0x636d73*/
        ScriptAction_field_0x14 = v10; /*0x636d75*/
      }
      v8[43] = -1; /*0x636d79*/
    }
  }
  this->ScriptAction_field_0x8C = (void *)-1; /*0x636d84*/
  return result; /*0x636d8a*/
}
} // namespace gamemd

// 0x638C70
namespace gamemd {
char ScriptAction::IsBuildingTypeMatch()
{
  int v2; // edi
  unsigned char *WaypointCoords; // eax
  char v5; // al
  unsigned char v6[8]; // [esp+8h] [ebp-10h] BYREF
  int v7; // [esp+10h] [ebp-8h]

  if ( !this ) /*0x638c79*/
    return 0; /*0x638c79*/
  v2 = (*(int (__thiscall **)(ScriptAction *))(*(unsigned int *)this->__pad_0 + 388))(this); /*0x638c83*/
  if ( v2 == 5 ) /*0x638c88*/
    return 1; /*0x638c91*/
  if ( ((WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v6, *((unsigned int **)this + 173)), /*0x638cc0*/
         v7 = *(unsigned int *)WaypointCoords,
         v5 = WaypointCoords[4],
         v2 == 1)
     || v2 == 11)
    && (v5 == 11 || v2 == 11 && !v5) )
  {
    return 1; /*0x638cc3*/
  }
  else
  {
    return 0; /*0x638ccb*/
  }
}
} // namespace gamemd

// 0x63A8E0
namespace gamemd {
char ScriptAction::HitTest(int a1, int a2)
{
  int v3; // esi
  int v4; // edi
  void *Array_field_0x10; // ebp
  ScriptAction *v6; // esi
  int *ScreenPos; // eax
  int *v8; // eax
  int *v9; // eax
  int *v10; // eax
  ObjectClass *v11; // [esp+0h] [ebp-4Ch]
  int v12; // [esp+10h] [ebp-3Ch] BYREF
  int v13; // [esp+18h] [ebp-34h]
  int v14; // [esp+1Ch] [ebp-30h] BYREF
  int v15; // [esp+20h] [ebp-2Ch]
  int v16; // [esp+24h] [ebp-28h]
  int v17; // [esp+28h] [ebp-24h]
  int v18; // [esp+2Ch] [ebp-20h] BYREF
  int v19; // [esp+30h] [ebp-1Ch]
  int v20; // [esp+34h] [ebp-18h]
  int v21; // [esp+38h] [ebp-14h]
  unsigned int v22[4]; // [esp+3Ch] [ebp-10h] BYREF

  if ( !stru_AC4B30.__pad_EC[216] ) /*0x63a8ee*/
    return 0; /*0x63a8f9*/
  v3 = *(unsigned int *)&stru_AC4B30.__pad_EC[28]; /*0x63a902*/
  v4 = 0; /*0x63a90c*/
  v13 = *(unsigned int *)&stru_AC4B30.__pad_EC[28]; /*0x63a910*/
  if ( !*(unsigned int *)&stru_AC4B30.__pad_EC[176] /*0x63aa32*/
    || (v9 = ScriptAction::GetScreenPos(*(ScriptAction **)&stru_AC4B30.__pad_EC[176], &v12),
        v10 = ComputeBounds(&v18, 8, *v9, v9[1]),
        v14 = *v10,
        v15 = v10[1],
        v16 = v10[2],
        v17 = v10[3],
        ShrinkRect(&v14, 4),
        a1 < v14)
    || a1 >= v14 + v16
    || a2 < v15
    || a2 >= v15 + v17 )
  {
    v12 = 0; /*0x63a91a*/
  LABEL_5:
    Array_field_0x10 = stru_AC4B30.Array_field_0x10; /*0x63a91e*/
    if ( (int)stru_AC4B30.Array_field_0x10 > 0 ) /*0x63a926*/
    {
      while ( 1 ) /*0x63a936*/
      {
        v6 = (ScriptAction *)*((unsigned int *)stru_AC4B30.Array_field_0x4 + v4); /*0x63a936*/
        ScreenPos = ScriptAction::GetScreenPos(v6, &v14); /*0x63a93b*/
        v8 = ComputeBounds(v22, 8, *ScreenPos, ScreenPos[1]); /*0x63a950*/
        v18 = *v8; /*0x63a957*/
        v19 = v8[1]; /*0x63a95e*/
        v20 = v8[2]; /*0x63a965*/
        v21 = v8[3]; /*0x63a970*/
        ShrinkRect(&v18, 4); /*0x63a979*/
        if ( a1 >= v18 && a1 < v18 + v20 && a2 >= v19 && a2 < v19 + v21 ) /*0x63a9a4*/
          break; /*0x63a9a4*/
        if ( ++v4 >= (int)Array_field_0x10 ) /*0x63a9ad*/
          goto LABEL_22; /*0x63a9ad*/
      }
      if ( v6 && BuildingClass::CheckBuildability((BuildingClass *)v6) != -1 ) /*0x63aa73*/
        return 1; /*0x63aa7e*/
  LABEL_22:
      v3 = v13; /*0x63aa81*/
    }
    *(unsigned int *)&stru_AC4B30.__pad_EC[28] = 0; /*0x63aa87*/
    return v3 || v12; /*0x63aa87*/
  }
  v12 = *(unsigned int *)&stru_AC4B30.__pad_EC[176]; /*0x63aa3f*/
  if ( !*(unsigned int *)&stru_AC4B30.__pad_EC[176] || *(unsigned int *)&stru_AC4B30.__pad_EC[176] != v3 ) /*0x63aa4b*/
    goto LABEL_5; /*0x63aa4b*/
  Mission::SetAndCall((MouseClass *)&stru_87F5F0.__pad_58[416], 0, 1); /*0x63aa59*/
  ExportSelectionAsScriptAction(v11); /*0x63aa5e*/
  return v3 || v12; /*0x63a8f0*/
}
} // namespace gamemd

// 0x63B550
namespace gamemd {
char ScriptAction::ProcessIdleAction()
{
  ArrayClass *Type; // esi
  int v3; // eax
  unsigned int *v4; // eax
  int v5; // edi
  BuildingClass *v6; // ebx
  void *v7; // eax
  bool v8; // dl
  char *v9; // esi
  unsigned int *v10; // eax
  unsigned int *v11; // eax
  int Coord3D_field_0x08; // eax
  char *v13; // edi
  ArrayClass *v14; // ebp
  Coord3D *Viewport; // eax
  int *v16; // eax
  int v17; // esi
  int v18; // eax
  int *v19; // eax
  int v20; // eax
  int v21; // esi
  int v22; // edi
  int *v23; // eax
  Coord3D *v24; // eax
  int *v25; // eax
  int updated; // eax
  char v27; // al
  int v28; // edx
  int *v29; // eax
  char v30; // al
  int v31; // edi
  char *v32; // esi
  Coord2D *v33; // eax
  Coord3D *v34; // eax
  Coord2D *v35; // eax
  Coord3D *v36; // eax
  int v37; // esi
  int v38; // eax
  int *v39; // eax
  int v40; // eax
  int v41; // esi
  int v42; // edi
  Coord3D *v43; // eax
  int v44; // esi
  int v45; // esi
  ArrayClass *v46; // esi
  int *ScreenPos; // eax
  int v48; // edi
  const void *TypeEntry; // eax
  const void *v50; // esi
  int *v51; // eax
  bool v53; // [esp+2Eh] [ebp-172h]
  char v54; // [esp+2Fh] [ebp-171h]
  Coord3D v55; // [esp+30h] [ebp-170h] BYREF
  int v56; // [esp+3Ch] [ebp-164h]
  int v57; // [esp+40h] [ebp-160h] BYREF
  int v58; // [esp+44h] [ebp-15Ch]
  int v59; // [esp+48h] [ebp-158h]
  Coord3D v60; // [esp+4Ch] [ebp-154h] BYREF
  int v61; // [esp+58h] [ebp-148h] BYREF
  int v62; // [esp+5Ch] [ebp-144h]
  int v63; // [esp+68h] [ebp-138h] BYREF
  int v64; // [esp+6Ch] [ebp-134h]
  int v65; // [esp+70h] [ebp-130h]
  int v66; // [esp+74h] [ebp-12Ch]
  Coord2D v67; // [esp+78h] [ebp-128h] BYREF
  int v68; // [esp+80h] [ebp-120h]
  int Coord2D_field_0x04; // [esp+84h] [ebp-11Ch]
  ArrayClass *v70; // [esp+88h] [ebp-118h] BYREF
  char *v71; // [esp+8Ch] [ebp-114h]
  Rect v72; // [esp+94h] [ebp-10Ch] BYREF
  Rect v73; // [esp+A4h] [ebp-FCh] BYREF
  unsigned int v74[3]; // [esp+B4h] [ebp-ECh] BYREF
  unsigned short v75[56]; // [esp+C0h] [ebp-E0h] BYREF
  char v76[112]; // [esp+130h] [ebp-70h] BYREF

  Type = (ArrayClass *)BuildingClass::GetType((BuildingClass *)this); /*0x63b565*/
  v3 = *(unsigned int *)this->__pad_0; /*0x63b567*/
  v70 = Type; /*0x63b56d*/
  v4 = (unsigned int *)(*(int (__thiscall **)(ScriptAction *, int *))(v3 + 88))(this, &v63); /*0x63b571*/
  v74[0] = *v4; /*0x63b576*/
  v74[1] = v4[1]; /*0x63b580*/
  v74[2] = v4[2]; /*0x63b59d*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v74, &v61); /*0x63b5a4*/
  v62 += (int)DSurface_ViewBounds.field_4; /*0x63b5c1*/
  v60.Coord3D_field_0x04 = v62; /*0x63b5c5*/
  v61 += DSurface_ViewBounds.field_0; /*0x63b5ce*/
  *(unsigned int *)v60.__pad_0 = v61; /*0x63b5d2*/
  v5 = PackRGBFromBytes((ObjectClass *)&byte_A83CD9); /*0x63b5dd*/
  if ( this ) /*0x63b5df*/
  {
    v6 = (BuildingClass *)PackRGBFromBytes(&stru_A80220); /*0x63b5f1*/
    if ( *(unsigned int *)&stru_AC4B30.__pad_70[80] ) /*0x63b5f5*/
    {
      if ( Array::FindValue(*(Array **)&stru_AC4B30.__pad_70[80], (int)this) != -1 ) /*0x63b600*/
        goto LABEL_7; /*0x63b600*/
    }
    else if ( this->__pad_78[11] ) /*0x63b604*/
    {
      goto LABEL_7; /*0x63b60c*/
    }
  }
  v6 = (BuildingClass *)v5; /*0x63b60e*/
  LABEL_7:
  if ( Type ) /*0x63b612*/
    v7 = Type->field_14; /*0x63b618*/
  else
    v7 = 0; /*0x63b614*/
  v53 = (int)v7 > 0; /*0x63b622*/
  v8 = (*(int (__thiscall **)(ScriptAction *))(*(unsigned int *)this->__pad_0 + 388))(this) != 5 /*0x63b653*/
    && !BuildingClass::IsIdleWithNoCaptives((BuildingClass *)this)
    && (v53 || this->__pad_78[11]);
  v57 = 4; /*0x63b657*/
  if ( Type && (*(unsigned int *)(*(unsigned int *)Type->__pad_0 + 172) == 28 || *(unsigned int *)(*(unsigned int *)Type->__pad_0 + 180) == 28) ) /*0x63b67a*/
  {
    v9 = &Type->__pad_18[5]; /*0x63b680*/
    memcpy(v75, v9, 0x6Cu); /*0x63b696*/
    v9 += 108; /*0x63b696*/
    v75[54] = *(unsigned short *)v9; /*0x63b698*/
    (*((unsigned char *)&(v75[55]))) = v9[2]; /*0x63b69e*/
    v55 = *(Coord3D *)GetScenarioClassActionCoords(&v63, v75); /*0x63b6a6*/
    v10 = Coord3D::Set(&v60, -1, -1, -1); /*0x63b6c2*/
    if ( (uint8_t)Coord3D::Equals(&v55, v10) && this ) /*0x63b6d7*/
    {
      v11 = (unsigned int *)(*(int (__thiscall **)(ScriptAction *, ArrayClass **))(*(unsigned int *)this->__pad_0 + 88))(this, &v70); /*0x63b6e3*/
      *(unsigned int *)v55.__pad_0 = *v11; /*0x63b6e8*/
      v55.Coord3D_field_0x04 = v11[1]; /*0x63b6ef*/
      Coord3D_field_0x08 = v11[2]; /*0x63b6f3*/
    }
    else
    {
      Coord3D_field_0x08 = v55.Coord3D_field_0x08; /*0x63b6f8*/
    }
    v68 = Coord3D_field_0x08; /*0x63b704*/
    v67 = *(Coord2D *)v55.__pad_0; /*0x63b708*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v67, &v57); /*0x63b720*/
    v13 = (char *)DSurface_ViewBounds.field_4 + v58; /*0x63b739*/
    v14 = (ArrayClass *)(DSurface_ViewBounds.field_0 + v57); /*0x63b73f*/
    v58 += (int)DSurface_ViewBounds.field_4; /*0x63b741*/
    Viewport = (Coord3D *)Display::GetViewport(&v72.X); /*0x63b745*/
    v55 = *Viewport; /*0x63b74c*/
    v56 = *(unsigned int *)Viewport[1].__pad_0; /*0x63b76f*/
    v16 = ComputeBounds(&v72, 6, v61, v62); /*0x63b778*/
    v63 = *v16; /*0x63b77f*/
    v64 = v16[1]; /*0x63b787*/
    v65 = v16[2]; /*0x63b78e*/
    v66 = v16[3]; /*0x63b79b*/
    (*(void (__thiscall **)(AudioStream *, Coord3D *, int *, BuildingClass *))(*(unsigned int *)DSurface_Composite->__pad_0 /*0x63b7ab*/
                                                                             + 84))(
      DSurface_Composite,
      &v55,
      &v63,
      v6);
    v17 = -1; /*0x63b7ae*/
    do /*0x63b7cc*/
      DrawTacticalLine2D(v17++, (int)v6, v61, v62, (int)v14, (int)v13, 0); /*0x63b7c3*/
    while ( v17 <= 1 ); /*0x63b7cc*/
    if ( (*((signed char *)&(v75[6]))) == 11 ) /*0x63b7d9*/
    {
      v18 = Memory::Alloc76(); /*0x63b7db*/
    }
    else
    {
      if ( (*((signed char *)&(v75[6]))) != 29 ) /*0x63b7e5*/
      {
  LABEL_32:
        v24 = (Coord3D *)Display::GetViewport(&v72.X); /*0x63b8ac*/
        v55 = *v24; /*0x63b8b7*/
        v56 = *(unsigned int *)v24[1].__pad_0; /*0x63b8d5*/
        v25 = ComputeBounds(&v72, 6, (int)v14, (int)v13); /*0x63b8de*/
        v63 = *v25; /*0x63b8e5*/
        v64 = v25[1]; /*0x63b8ed*/
        v65 = v25[2]; /*0x63b8f4*/
        v66 = v25[3]; /*0x63b901*/
        (*((unsigned char *)&(updated))) = (*(char (__thiscall **)(AudioStream *, Coord3D *, int *, BuildingClass *))(*(unsigned int *)DSurface_Composite->__pad_0 + 84))( /*0x63b911*/
                            DSurface_Composite,
                            &v55,
                            &v63,
                            v6);
        return updated; /*0x63b91e*/
      }
      v18 = Factory::IdleHandler(); /*0x63b7eb*/
    }
    if ( v18 != -1 ) /*0x63b7f3*/
    {
      *(unsigned int *)v60.__pad_0 = v61; /*0x63b801*/
      v70 = v14; /*0x63b813*/
      v71 = v13; /*0x63b817*/
      v60.Coord3D_field_0x04 = v62; /*0x63b81b*/
      v19 = Coord2D::Sub((Coord2D *)&v60, (int *)v55.__pad_0, &v70); /*0x63b81f*/
      Vector::TwoDMagnitudeMath(v19); /*0x63b826*/
      if ( v20 >= 37 ) /*0x63b82e*/
      {
        v21 = (int)&v70->__pad_0[*(unsigned int *)v60.__pad_0] / 2 - 10; /*0x63b857*/
        v22 = (int)&v71[v60.Coord3D_field_0x04] / 2 - 10; /*0x63b85a*/
        v23 = Display::GetViewport(&v72.X); /*0x63b85d*/
        v63 = *v23; /*0x63b864*/
        v64 = v23[1]; /*0x63b86f*/
        v65 = v23[2]; /*0x63b878*/
        v66 = v23[3]; /*0x63b886*/
        Rect::Set(&v73, v21, v22, 21, 21); /*0x63b88a*/
        (*(void (__thiscall **)(AudioStream *, int *, Rect *, BuildingClass *))(*(unsigned int *)DSurface_Composite->__pad_0 /*0x63b8a5*/
                                                                              + 84))(
          DSurface_Composite,
          &v63,
          &v73,
          v6);
        v13 = (char *)v58; /*0x63b8a8*/
      }
    }
    goto LABEL_32; /*0x63b8a8*/
  }
  if ( !v8 ) /*0x63b921*/
  {
    (*((unsigned char *)&(updated))) = v53; /*0x63bd19*/
    if ( !v53 ) /*0x63bd1f*/
      return updated; /*0x63bd1f*/
    goto LABEL_55; /*0x63bd1f*/
  }
  v27 = (*(int (__thiscall **)(ScriptAction *))(*(unsigned int *)this->__pad_0 + 1196))(this); /*0x63b92c*/
  v28 = *(unsigned int *)this->__pad_0; /*0x63b932*/
  (*(((unsigned char *)&(v59)) + (sizeof(v59) - 1))) = v27; /*0x63b937*/
  v54 = (*(int (__thiscall **)(ScriptAction *))(v28 + 1200))(this); /*0x63b945*/
  v29 = (int *)(*(int (__thiscall **)(ScriptAction *, Coord3D *))(*(unsigned int *)this->__pad_0 + 1068))(this, &v55); /*0x63b94f*/
  v63 = *v29; /*0x63b957*/
  v64 = v29[1]; /*0x63b95e*/
  v65 = v29[2]; /*0x63b975*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v63, &v57); /*0x63b979*/
  v30 = this->__pad_78[9]; /*0x63b992*/
  v31 = DSurface_ViewBounds.field_0 + v57; /*0x63b998*/
  v32 = (char *)DSurface_ViewBounds.field_4 + v58; /*0x63b99a*/
  v57 += DSurface_ViewBounds.field_0; /*0x63b99c*/
  v58 += (int)DSurface_ViewBounds.field_4; /*0x63b9a2*/
  if ( v30 ) /*0x63b9a6*/
  {
    v33 = (Coord2D *)Display::GetViewport(&v72.X); /*0x63b9ac*/
    v67 = *v33; /*0x63b9b3*/
    v68 = *(unsigned int *)v33[1].__pad_0; /*0x63b9ca*/
    Coord2D_field_0x04 = v33[1].Coord2D_field_0x04; /*0x63b9d6*/
    v34 = (Coord3D *)ComputeBounds(&v72, 6, v31, (int)v32); /*0x63b9da*/
    v55 = *v34; /*0x63b9e1*/
    v56 = *(unsigned int *)v34[1].__pad_0; /*0x63b9fd*/
    (*((unsigned char *)&(updated))) = (*(char (__thiscall **)(AudioStream *, Coord2D *, Coord3D *, BuildingClass *))(*(unsigned int *)DSurface_Composite->__pad_0 + 84))( /*0x63ba0d*/
                        DSurface_Composite,
                        &v67,
                        &v55,
                        v6);
    return updated; /*0x63ba1a*/
  }
  v35 = (Coord2D *)Display::GetViewport(&v72.X); /*0x63ba1f*/
  v67 = *v35; /*0x63ba26*/
  v68 = *(unsigned int *)v35[1].__pad_0; /*0x63ba34*/
  Coord2D_field_0x04 = v35[1].Coord2D_field_0x04; /*0x63ba44*/
  v36 = (Coord3D *)ComputeBounds(&v72, 6, v61, v62); /*0x63ba55*/
  v55 = *v36; /*0x63ba5c*/
  v56 = *(unsigned int *)v36[1].__pad_0; /*0x63ba78*/
  (*(void (__thiscall **)(AudioStream *, Coord2D *, Coord3D *, BuildingClass *))(*(unsigned int *)DSurface_Composite->__pad_0 /*0x63ba88*/
                                                                               + 84))(
    DSurface_Composite,
    &v67,
    &v55,
    v6);
  v37 = -1; /*0x63ba8b*/
  do /*0x63baad*/
    DrawTacticalLine2D(v37++, (int)v6, v61, v62, v31, v58, 0); /*0x63baa4*/
  while ( v37 <= 1 ); /*0x63baad*/
  if ( !(*(((unsigned char *)&(v59)) + (sizeof(v59) - 1))) || v54 ) /*0x63babd*/
  {
    if ( (*(int (__thiscall **)(ScriptAction *))(*(unsigned int *)this->__pad_0 + 388))(this) == 11 ) /*0x63bae8*/
    {
      v38 = Memory::Alloc76(); /*0x63baee*/
      goto LABEL_44; /*0x63baee*/
    }
  }
  else if ( (*(int (__thiscall **)(ScriptAction *))(*(unsigned int *)this->__pad_0 + 1204))(this) == 29 ) /*0x63bacd*/
  {
    v38 = Factory::IdleHandler(); /*0x63bad3*/
  LABEL_44:
    if ( v38 != -1 ) /*0x63baf6*/
    {
      v55.Coord3D_field_0x04 = v58; /*0x63bb08*/
      *(unsigned int *)v67.__pad_0 = v61; /*0x63bb0c*/
      *(unsigned int *)v55.__pad_0 = v31; /*0x63bb1e*/
      v67.Coord2D_field_0x04 = v62; /*0x63bb22*/
      v39 = Coord2D::Sub(&v67, &v61, &v55); /*0x63bb26*/
      Vector::TwoDMagnitudeMath(v39); /*0x63bb2d*/
      if ( v40 >= 37 ) /*0x63bb35*/
      {
        v41 = (*(unsigned int *)v55.__pad_0 + *(unsigned int *)v67.__pad_0) / 2 - 10; /*0x63bb61*/
        v42 = (v67.Coord2D_field_0x04 + v55.Coord3D_field_0x04) / 2 - 10; /*0x63bb64*/
        v73 = *(Rect *)Display::GetViewport(&v61); /*0x63bb6e*/
        Rect::Set(&v72, v41, v42, 21, 21); /*0x63bba0*/
        (*(void (__thiscall **)(AudioStream *, Rect *, Rect *, BuildingClass *))(*(unsigned int *)DSurface_Composite->__pad_0 /*0x63bbbb*/
                                                                               + 84))(
          DSurface_Composite,
          &v73,
          &v72,
          v6);
        v31 = v57; /*0x63bbbe*/
      }
    }
  }
  v43 = (Coord3D *)Display::GetViewport(&v72.X); /*0x63bbc2*/
  v44 = v58; /*0x63bbcd*/
  v55 = *v43; /*0x63bbd1*/
  v56 = *(unsigned int *)v43[1].__pad_0; /*0x63bbef*/
  v73 = *(Rect *)ComputeBounds(&v72, 6, v31, v58); /*0x63bbff*/
  (*(void (__thiscall **)(AudioStream *, Coord3D *, Rect *, BuildingClass *))(*(unsigned int *)DSurface_Composite->__pad_0 + 84))( /*0x63bc3a*/
    DSurface_Composite,
    &v55,
    &v73,
    v6);
  if ( v54 ) /*0x63bc43*/
  {
    v55 = *(Coord3D *)(*(int (__thiscall **)(ScriptAction *, Coord2D *))(*(unsigned int *)this->__pad_0 + 1208))(this, &v67); /*0x63bc5b*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v55, (int *)v60.__pad_0); /*0x63bc7d*/
    v45 = DSurface_ViewBounds.field_0 + *(unsigned int *)v60.__pad_0; /*0x63bc98*/
    v60.Coord3D_field_0x04 += (int)DSurface_ViewBounds.field_4; /*0x63bc9a*/
    DrawTacticalFillScanline( /*0x63bcad*/
      3,
      (int)v6,
      v31,
      v58,
      DSurface_ViewBounds.field_0 + *(unsigned int *)v60.__pad_0,
      v60.Coord3D_field_0x04);
    if ( (*(int (__thiscall **)(ScriptAction *))(*(unsigned int *)this->__pad_0 + 1204))(this) == 29 /*0x63bcca*/
      && Factory::IdleHandler() != -1 )
    {
      BuildingClass::DrawSelectionBlip(v6, v31, v58, v45, v60.Coord3D_field_0x04); /*0x63bcda*/
    }
    (*((unsigned char *)&(updated))) = DSurface::DrawMarker((DSurface *)v6, v45, v60.Coord3D_field_0x04); /*0x63bce7*/
    return updated; /*0x63bcf6*/
  }
  (*((unsigned char *)&(updated))) = v53; /*0x63bcf7*/
  if ( !v53 ) /*0x63bcfd*/
    return updated; /*0x63bcfd*/
  v60.Coord3D_field_0x04 = v44; /*0x63bd03*/
  Type = v70; /*0x63bd07*/
  *(unsigned int *)v60.__pad_0 = v31; /*0x63bd0b*/
  v57 = 3; /*0x63bd0f*/
  LABEL_55:
  v46 = (ArrayClass *)ArrayClass::GetAt_Wrap(Type, 0); /*0x63bd25*/
  v70 = v46; /*0x63bd37*/
  ScreenPos = ScriptAction::GetScreenPos((ScriptAction *)v46, &v55); /*0x63bd3b*/
  v48 = *ScreenPos; /*0x63bd40*/
  v61 = *ScreenPos; /*0x63bd45*/
  v62 = ScreenPos[1]; /*0x63bd4c*/
  TypeEntry = (const void *)BuildingClass::GetTypeEntry((BuildingClass *)v46, (int)this); /*0x63bd50*/
  v50 = TypeEntry; /*0x63bd55*/
  if ( TypeEntry ) /*0x63bd59*/
  {
    v51 = ActionScenarioClassCoordToScreen((int *)v55.__pad_0, TypeEntry, (int)this); /*0x63bd62*/
    v61 = *v51; /*0x63bd69*/
    v48 = v61; /*0x63bd6d*/
    v62 = v51[1]; /*0x63bd72*/
  }
  DSurface::DrawMarker((DSurface *)v6, *(int *)v60.__pad_0, v60.Coord3D_field_0x04); /*0x63bd82*/
  DrawTacticalFillScanline(v57, (int)v6, *(int *)v60.__pad_0, v60.Coord3D_field_0x04, v48, v62); /*0x63bd9d*/
  if ( v50 ) /*0x63bda4*/
    DSurface::DrawMarker((DSurface *)v6, v48, v62); /*0x63bdae*/
  memcpy(v75, (const void *)BuildingClass::CopyTypeDataForRender((BuildingClass *)v70, (int)v76, (int)this), 0x6Fu); /*0x63bdd3*/
  updated = BuildingClass::updateAnimationState((char *)v75); /*0x63bddf*/
  if ( updated != -1 ) /*0x63bde7*/
    (*((unsigned char *)&(updated))) = BuildingClass::DrawSelectionBlip(v6, *(int *)v60.__pad_0, v60.Coord3D_field_0x04, v61, v62); /*0x63bdff*/
  return updated; /*0x63b914*/
}
} // namespace gamemd

// 0x63CE40
namespace gamemd {
int ScriptAction::DrawPlacementMarker()
{
  int DrawColor; // edi
  int *Viewport; // eax
  int v4; // edx
  int v5; // eax
  unsigned int *ScenarioClassActionCoords; // eax
  int v8[2]; // [esp+8h] [ebp-44h] BYREF
  unsigned int v9[3]; // [esp+10h] [ebp-3Ch] BYREF
  int v10[4]; // [esp+1Ch] [ebp-30h] BYREF
  unsigned int v11[4]; // [esp+2Ch] [ebp-20h] BYREF
  unsigned int v12[4]; // [esp+3Ch] [ebp-10h] BYREF

  DrawColor = BuildingClass::GetDrawColor((int)this); /*0x63ce50*/
  Viewport = Display::GetViewport(v10); /*0x63ce52*/
  v12[0] = *Viewport; /*0x63ce59*/
  v12[1] = Viewport[1]; /*0x63ce60*/
  v12[2] = Viewport[2]; /*0x63ce67*/
  v4 = Viewport[3]; /*0x63ce6b*/
  v5 = this->ScriptAction_field_0x4[0]; /*0x63ce6e*/
  v12[3] = v4; /*0x63ce71*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v10, *(unsigned char **)(v5->vtable2); /*0x63ce7e*/
  v9[0] = *ScenarioClassActionCoords; /*0x63ce85*/
  v9[1] = ScenarioClassActionCoords[1]; /*0x63ce8c*/
  v9[2] = ScenarioClassActionCoords[2]; /*0x63cea3*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v9, v8); /*0x63cea7*/
  v8[0] += DSurface_ViewBounds.field_0; /*0x63cec7*/
  v11[0] = v8[0] - 4 + 1; /*0x63cedb*/
  v11[1] = (char *)DSurface_ViewBounds.field_4 + v8[1] - 3; /*0x63cedf*/
  v11[2] = 6; /*0x63cef5*/
  v11[3] = 6; /*0x63cef9*/
  return (*(int (__thiscall **)(AudioStream *, unsigned int *, unsigned int *, int))(*(unsigned int *)DSurface_Composite->__pad_0 + 16))( /*0x63cf07*/
           DSurface_Composite,
           v12,
           v11,
           DrawColor);
}
} // namespace gamemd

// 0x65AD50
namespace gamemd {
int Array::Contains(int a2)
{
  void *Array_field_0xE8; // edx
  int result; // eax
  unsigned int *Array_field_0xE4; // ecx

  if ( a2 && (Array_field_0xE8 = this->Array_field_0xE8, result = 0, (int)Array_field_0xE8 > 0) ) /*0x65ad63*/
  {
    Array_field_0xE4 = this->Array_field_0xE4; /*0x65ad65*/
    while ( *Array_field_0xE4 != a2 ) /*0x65ad6d*/
    {
      ++result; /*0x65ad6f*/
      ++Array_field_0xE4; /*0x65ad70*/
      if ( result >= (int)Array_field_0xE8 ) /*0x65ad75*/
        goto LABEL_6; /*0x65ad75*/
    }
  }
  else
  {
  LABEL_6:
    result = -1; /*0x65ad77*/
  }
  (*((unsigned char *)&(result))) = result != -1; /*0x65ad82*/
  return result; /*0x65ad84*/
}
} // namespace gamemd

// 0x6DD5B0
namespace gamemd {
const char * ScriptAction::ParseScriptActionParams()
{
  char *v2; // eax
  char *v3; // eax
  int v4; // ebx
  char *v5; // esi
  int v6; // eax
  const char *v7; // eax
  char i; // cl
  unsigned int v9; // kr10_4
  unsigned int v10; // ecx
  char *v11; // eax
  char *v12; // eax
  char *v13; // eax
  char *v14; // eax
  const char *result; // eax
  char Destination[24]; // [esp+14h] [ebp-1Ch] BYREF
  char v17; // [esp+2Ch] [ebp-4h]

  *(unsigned int *)this->__pad_90 = 0; /*0x6dd5c1*/
  v2 = strtok(0, Str); /*0x6dd5c7*/
  *(unsigned int *)&this->__pad_28[4] = atoi(v2); /*0x6dd5d8*/
  v3 = strtok(0, Str); /*0x6dd5db*/
  v4 = atoi(v3); /*0x6dd5e6*/
  v5 = strtok(0, Str); /*0x6dd5f7*/
  v6 = atoi(v5); /*0x6dd5fa*/
  switch ( v4 ) /*0x6dd60d*/
  {
    case 0: /*0x6dd60d*/
    case 11: /*0x6dd60d*/
      *(unsigned int *)this->__pad_90 = v6; /*0x6dd614*/
      break; /*0x6dd61a*/
    case 1: /*0x6dd60d*/
    case 5: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd622*/
      {
        this->ScriptAction_field_0x30 = 0; /*0x6dd624*/
      }
      else if ( strlen(v5) >= 3 ) /*0x6dd63b*/
      {
        this->ScriptAction_field_0x30 = TechnoClass::Create(v5); /*0x6dd654*/
      }
      else
      {
        this->ScriptAction_field_0x30 = *(void **)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[192] + 4 * v6); /*0x6dd645*/
      }
      break; /*0x6dd627*/
    case 2: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd65f*/
      {
        *(unsigned int *)&this->__pad_34[28] = 0; /*0x6dd661*/
      }
      else if ( strlen(v5) >= 3 ) /*0x6dd678*/
      {
        *(unsigned int *)&this->__pad_34[28] = TagTypeClass::FindOrCreateTriggerType(v5); /*0x6dd691*/
      }
      else
      {
        *(unsigned int *)&this->__pad_34[28] = *(unsigned int *)(FootClass_Array.targetLaserTimer[0] + 4 * v6); /*0x6dd682*/
      }
      break; /*0x6dd664*/
    case 3: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd69c*/
      {
        *(unsigned int *)&this->__pad_34[24] = 0; /*0x6dd69e*/
      }
      else if ( strlen(v5) >= 3 ) /*0x6dd6b5*/
      {
        *(unsigned int *)&this->__pad_34[24] = TagTypeClass::FindOrCreate(v5); /*0x6dd6cb*/
      }
      else
      {
        *(unsigned int *)&this->__pad_34[24] = *((unsigned int *)dword_B0E784 + v6); /*0x6dd6bf*/
      }
      break; /*0x6dd6a1*/
    case 4: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd6d3*/
      {
        this->__pad_34[57] = 0; /*0x6dd6d5*/
      }
      else
      {
        v7 = v5; /*0x6dd6de*/
        this->__pad_34[57] = 0; /*0x6dd6e2*/
        if ( v5 ) /*0x6dd6e5*/
        {
          for ( i = *v5; i; i = *++v7 ) /*0x6dd6e7*/
          {
            if ( (uint8_t)i > 0x20u ) /*0x6dd6f1*/
              break; /*0x6dd6f1*/
          }
          if ( *v7 ) /*0x6dd6fb*/
          {
            strncpy(&this->__pad_34[57], v7, 0x1Fu); /*0x6dd704*/
            (*((unsigned char *)&(this->ScriptAction_field_0x8C))) = 0; /*0x6dd711*/
            v9 = strlen(&this->__pad_34[57]) + 1; /*0x6dd718*/
            v10 = v9 - 1; /*0x6dd71c*/
            if ( v9 != 1 ) /*0x6dd71d*/
            {
              do /*0x6dd726*/
              {
                if ( this->__pad_34[v10 + 56] > 0x20u ) /*0x6dd723*/
                  break; /*0x6dd723*/
                --v10; /*0x6dd725*/
              }
              while ( v10 ); /*0x6dd726*/
            }
            this->__pad_34[v10 + 57] = 0; /*0x6dd728*/
          }
        }
      }
      break; /*0x6dd6d9*/
    case 6: /*0x6dd60d*/
      *(unsigned int *)this->__pad_90 = VocClass::FindByName((VocClass *)v5); /*0x6dd7c3*/
      break; /*0x6dd7c9*/
    case 7: /*0x6dd60d*/
      *(unsigned int *)this->__pad_90 = VocClass::FindIndex((VocClass *)v5); /*0x6dd7d5*/
      break; /*0x6dd7db*/
    case 8: /*0x6dd60d*/
      *(unsigned int *)this->__pad_90 = StringList::Find((StringList *)&unk_A83D10, v5); /*0x6dd7eb*/
      break; /*0x6dd7f1*/
    case 9: /*0x6dd60d*/
    case 10: /*0x6dd60d*/
      if ( v5 ) /*0x6dd7f8*/
      {
        strncpy(Destination, v5, 0x18u); /*0x6dd809*/
        v17 = 0; /*0x6dd811*/
      }
      else
      {
        Destination[0] = 0; /*0x6dd7fa*/
      }
      if ( Destination != &this->__pad_34[32] ) /*0x6dd81f*/
      {
        memcpy(&this->__pad_34[32], Destination, 0x18u); /*0x6dd82e*/
        this->__pad_34[56] = v17; /*0x6dd830*/
      }
      break; /*0x6dd831*/
    default:
      break;
  }
  v11 = strtok(0, Str); /*0x6dd731*/
  *(unsigned int *)this->__pad_34 = atoi(v11); /*0x6dd74a*/
  v12 = strtok(0, Str); /*0x6dd74d*/
  *(unsigned int *)&this->__pad_34[4] = atoi(v12); /*0x6dd75f*/
  v13 = strtok(0, Str); /*0x6dd762*/
  *(unsigned int *)&this->__pad_34[8] = atoi(v13); /*0x6dd774*/
  v14 = strtok(0, Str); /*0x6dd777*/
  *(unsigned int *)&this->__pad_34[12] = atoi(v14); /*0x6dd789*/
  result = strtok(0, Str); /*0x6dd78c*/
  if ( result ) /*0x6dd796*/
  {
    if ( v4 == 5 || v4 == 9 ) /*0x6dd839*/
    {
      result = (const char *)atoi(result); /*0x6dd7a6*/
      *(unsigned int *)this->__pad_90 = result; /*0x6dd7ae*/
    }
    else if ( v4 == 11 ) /*0x6dd855*/
    {
      result = (const char *)atoi(result); /*0x6dd858*/
      *(unsigned int *)&this->__pad_34[20] = result; /*0x6dd860*/
    }
    else
    {
      result = (const char *)String::To_Waypoint((char *)result); /*0x6dd86d*/
      *(unsigned int *)&this->__pad_34[16] = result; /*0x6dd872*/
    }
  }
  return result; /*0x6dd7b4*/
}
} // namespace gamemd

// 0x6E1830
namespace gamemd {
unsigned int * ScriptAction::ReadParameter()
{
  int v1; // esi
  int v2; // eax
  Cell *v3; // esi
  unsigned int *result; // eax
  int16_t v5[2]; // [esp+4h] [ebp-4h] BYREF

  v1 = *(unsigned int *)this->__pad_0 / 256; /*0x6e184b*/
  v2 = this->ScriptAction_field_0x4[0] / 256; /*0x6e184e*/
  v5[0] = v1; /*0x6e1851*/
  v5[1] = v2; /*0x6e1856*/
  if ( (unsigned short)v1 == *(unsigned short *)dword_B0E680 && (unsigned short)v2 == *(unsigned short *)&dword_B0E680[2] ) /*0x6e1875*/
    return 0; /*0x6e189e*/
  v3 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v5); /*0x6e1886*/
  result = Cell::IsBridge(v3); /*0x6e188a*/
  if ( !result ) /*0x6e1891*/
    return CellClass::FindInfantry((CellClass *)v3, 0); /*0x6e1896*/
  return result; /*0x6e189b*/
}
} // namespace gamemd

// 0x6E3B60
namespace gamemd {
int ScriptAction::GetActionTypeInfo()
{
  int result; // eax

  switch ( (unsigned int)this ) /*0x6e3b76*/
  {
    case 1u: /*0x6e3b76*/
    case 2u: /*0x6e3b76*/
    case 3u: /*0x6e3b76*/
    case 6u: /*0x6e3b76*/
    case 9u: /*0x6e3b76*/
    case 0xDu: /*0x6e3b76*/
    case 0xEu: /*0x6e3b76*/
    case 0x24u: /*0x6e3b76*/
    case 0x25u: /*0x6e3b76*/
    case 0x26u: /*0x6e3b76*/
    case 0x4Au: /*0x6e3b76*/
    case 0x4Bu: /*0x6e3b76*/
    case 0x71u: /*0x6e3b76*/
    case 0x77u: /*0x6e3b76*/
    case 0x78u: /*0x6e3b76*/
    case 0x79u: /*0x6e3b76*/
    case 0x7Au: /*0x6e3b76*/
    case 0x7Bu: /*0x6e3b76*/
    case 0x7Cu: /*0x6e3b76*/
    case 0x7Eu: /*0x6e3b76*/
    case 0x82u: /*0x6e3b76*/
      result = 13; /*0x6e3b89*/
      break; /*0x6e3b8e*/
    case 4u: /*0x6e3b76*/
    case 5u: /*0x6e3b76*/
    case 7u: /*0x6e3b76*/
    case 0x69u: /*0x6e3b76*/
      result = 12; /*0x6e3b95*/
      break; /*0x6e3b9a*/
    case 8u: /*0x6e3b76*/
    case 0x11u: /*0x6e3b76*/
    case 0x12u: /*0x6e3b76*/
    case 0x3Bu: /*0x6e3b76*/
    case 0x3Fu: /*0x6e3b76*/
    case 0x40u: /*0x6e3b76*/
    case 0x41u: /*0x6e3b76*/
    case 0x42u: /*0x6e3b76*/
    case 0x59u: /*0x6e3b76*/
    case 0x5Au: /*0x6e3b76*/
    case 0x5Eu: /*0x6e3b76*/
    case 0x5Fu: /*0x6e3b76*/
    case 0x60u: /*0x6e3b76*/
    case 0x65u: /*0x6e3b76*/
    case 0x66u: /*0x6e3b76*/
    case 0x6Du: /*0x6e3b76*/
    case 0x70u: /*0x6e3b76*/
    case 0x74u: /*0x6e3b76*/
    case 0x80u: /*0x6e3b76*/
    case 0x87u: /*0x6e3b76*/
    case 0x89u: /*0x6e3b76*/
    case 0x8Cu: /*0x6e3b76*/
      result = 9; /*0x6e3c01*/
      break; /*0x6e3c06*/
    case 0xAu: /*0x6e3b76*/
    case 0x64u: /*0x6e3b76*/
    case 0x75u: /*0x6e3b76*/
      result = 2; /*0x6e3bb9*/
      break; /*0x6e3bbe*/
    case 0xBu: /*0x6e3b76*/
    case 0x67u: /*0x6e3b76*/
      result = 39; /*0x6e3b7d*/
      break; /*0x6e3b82*/
    case 0xCu: /*0x6e3b76*/
    case 0x16u: /*0x6e3b76*/
    case 0x35u: /*0x6e3b76*/
    case 0x36u: /*0x6e3b76*/
      result = 11; /*0x6e3bad*/
      break; /*0x6e3bb2*/
    case 0x13u: /*0x6e3b76*/
    case 0x62u: /*0x6e3b76*/
      result = 3; /*0x6e3bbf*/
      break; /*0x6e3bc4*/
    case 0x14u: /*0x6e3b76*/
      result = 1; /*0x6e3bb3*/
      break; /*0x6e3bb8*/
    case 0x15u: /*0x6e3b76*/
      result = 4; /*0x6e3bc5*/
      break; /*0x6e3bca*/
    case 0x19u: /*0x6e3b76*/
    case 0x1Au: /*0x6e3b76*/
    case 0x1Bu: /*0x6e3b76*/
    case 0x27u: /*0x6e3b76*/
    case 0x2Cu: /*0x6e3b76*/
    case 0x49u: /*0x6e3b76*/
    case 0x4Cu: /*0x6e3b76*/
    case 0x4Du: /*0x6e3b76*/
    case 0x4Eu: /*0x6e3b76*/
    case 0x4Fu: /*0x6e3b76*/
    case 0x54u: /*0x6e3b76*/
    case 0x6Eu: /*0x6e3b76*/
    case 0x72u: /*0x6e3b76*/
    case 0x7Fu: /*0x6e3b76*/
    case 0x8Bu: /*0x6e3b76*/
    case 0x8Eu: /*0x6e3b76*/
    case 0x8Fu: /*0x6e3b76*/
    case 0x90u: /*0x6e3b76*/
      result = 10; /*0x6e3c19*/
      break; /*0x6e3c1e*/
    case 0x1Cu: /*0x6e3b76*/
    case 0x1Du: /*0x6e3b76*/
      result = 22; /*0x6e3bdd*/
      break; /*0x6e3be2*/
    case 0x1Eu: /*0x6e3b76*/
    case 0x55u: /*0x6e3b76*/
    case 0x56u: /*0x6e3b76*/
    case 0x57u: /*0x6e3b76*/
      result = 16; /*0x6e3b8f*/
      break; /*0x6e3b94*/
    case 0x21u: /*0x6e3b76*/
    case 0x22u: /*0x6e3b76*/
    case 0x86u: /*0x6e3b76*/
      result = 17; /*0x6e3b83*/
      break; /*0x6e3b88*/
    case 0x23u: /*0x6e3b76*/
      result = 15; /*0x6e3be9*/
      break; /*0x6e3bee*/
    case 0x28u: /*0x6e3b76*/
      result = 21; /*0x6e3bef*/
      break; /*0x6e3bf4*/
    case 0x29u: /*0x6e3b76*/
      result = 23; /*0x6e3bf5*/
      break; /*0x6e3bfa*/
    case 0x2Au: /*0x6e3b76*/
      result = 24; /*0x6e3c07*/
      break; /*0x6e3c0c*/
    case 0x2Bu: /*0x6e3b76*/
      result = 27; /*0x6e3c0d*/
      break; /*0x6e3c12*/
    case 0x30u: /*0x6e3b76*/
      result = 30; /*0x6e3c13*/
      break; /*0x6e3c18*/
    case 0x34u: /*0x6e3b76*/
      result = 25; /*0x6e3c1f*/
      break; /*0x6e3c24*/
    case 0x37u: /*0x6e3b76*/
      result = 28; /*0x6e3c25*/
      break; /*0x6e3c2a*/
    case 0x38u: /*0x6e3b76*/
    case 0x39u: /*0x6e3b76*/
      result = 29; /*0x6e3be3*/
      break; /*0x6e3be8*/
    case 0x3Au: /*0x6e3b76*/
      result = 31; /*0x6e3c2b*/
      break; /*0x6e3c30*/
    case 0x46u: /*0x6e3b76*/
      result = 26; /*0x6e3bcb*/
      break; /*0x6e3bd0*/
    case 0x47u: /*0x6e3b76*/
    case 0x48u: /*0x6e3b76*/
      result = 33; /*0x6e3c31*/
      break; /*0x6e3c36*/
    case 0x50u: /*0x6e3b76*/
    case 0x6Bu: /*0x6e3b76*/
      result = 34; /*0x6e3ba1*/
      break; /*0x6e3ba6*/
    case 0x58u: /*0x6e3b76*/
      result = 35; /*0x6e3ba7*/
      break; /*0x6e3bac*/
    case 0x63u: /*0x6e3b76*/
      result = 38; /*0x6e3bfb*/
      break; /*0x6e3c00*/
    case 0x68u: /*0x6e3b76*/
      result = 40; /*0x6e3b9b*/
      break; /*0x6e3ba0*/
    case 0x6Au: /*0x6e3b76*/
    case 0x73u: /*0x6e3b76*/
      result = 43; /*0x6e3bd1*/
      break; /*0x6e3bd6*/
    case 0x6Cu: /*0x6e3b76*/
      result = 44; /*0x6e3c37*/
      break; /*0x6e3c3c*/
    case 0x7Du: /*0x6e3b76*/
      result = 45; /*0x6e3c3d*/
      break; /*0x6e3c42*/
    case 0x81u: /*0x6e3b76*/
    case 0x84u: /*0x6e3b76*/
    case 0x85u: /*0x6e3b76*/
      result = 46; /*0x6e3bd7*/
      break; /*0x6e3bdc*/
    case 0x83u: /*0x6e3b76*/
      result = 47; /*0x6e3c43*/
      break; /*0x6e3c48*/
    default:
      result = 0; /*0x6e3c49*/
      break; /*0x6e3c49*/
  }
  return result; /*0x6e3b82*/
}
} // namespace gamemd

// 0x6E4790
namespace gamemd {
void * ScriptAction::CopyStringField(char *Destination, char *Source)
{
  if ( Source ) /*0x6e4799*/
  {
    strncpy(Destination, Source, 0x1Fu); /*0x6e47a7*/
    *(Destination + 31) = 0; /*0x6e47af*/
    return Destination; /*0x6e47b3*/
  }
  else
  {
    *Destination = 0; /*0x6e479b*/
    return Destination; /*0x6e479d*/
  }
}
} // namespace gamemd

// 0x6E6AB0
namespace gamemd {
unsigned char * ScriptAction::GetWaypointCoords(void * aP1, void *a1)
{
  if ( a1 ) /*0x6e6aba*/
  {
    if ( (*(int (__thiscall **)(unsigned int *))(*a1 + 44))(a1) == 11 ) /*0x6e6ac6*/
    {
      (*((unsigned char *)&(aP1->ScriptAction_field_0x4[0]))) = 11; /*0x6e6ac8*/
      *(unsigned int *)aP1->__pad_0 = (int16_t)a1[9] + 1000 * (int16_t)(*(((unsigned short *)&(a1[9])) + 1)); /*0x6e6ae7*/
    }
    else
    {
      (*((unsigned char *)&(aP1->ScriptAction_field_0x4[0]))) = 52; /*0x6e6af2*/
      *(unsigned int *)aP1->__pad_0 = (*(int (__stdcall **)(unsigned int *))(a1[1] + 16))(a1 + 1); /*0x6e6afc*/
    }
    return aP1->__pad_0; /*0x6e6ae9*/
  }
  else
  {
    (*((unsigned char *)&(aP1->ScriptAction_field_0x4[0]))) = 0; /*0x6e6b05*/
    *(unsigned int *)aP1->__pad_0 = 0; /*0x6e6b09*/
    return aP1->__pad_0; /*0x6e6b0f*/
  }
}
} // namespace gamemd

// 0x6FFBE0
namespace gamemd {
int ScriptAction::ExecuteMissionCmd()
{
  bool v2; // al
  int v3; // edi
  unsigned char *WaypointCoords; // eax
  int result; // eax
  unsigned int v6; // ebx
  int v7; // eax
  unsigned char *v8; // eax
  int v9[27]; // [esp-70h] [ebp-108h] BYREF
  int v10; // [esp-4h] [ebp-9Ch]
  unsigned int v11[2]; // [esp+10h] [ebp-88h] BYREF
  unsigned char v12[8]; // [esp+18h] [ebp-80h] BYREF
  unsigned char v13[8]; // [esp+20h] [ebp-78h] BYREF
  char v14[108]; // [esp+28h] [ebp-70h] BYREF
  int16_t v15; // [esp+94h] [ebp-4h]
  char v16; // [esp+96h] [ebp-2h]
  int v17; // [esp+9Ch] [ebp+4h]
  unsigned int *v18; // [esp+A0h] [ebp+8h]
  unsigned int *v19; // [esp+A4h] [ebp+Ch]
  unsigned int *v20; // [esp+A8h] [ebp+10h]

  v2 = Render_Draw_731BF0() && (*((uint8_t (__thiscall **)(TechnoClass *))this->vfptr + 304))(this); /*0x6ffc03*/
  v3 = v17; /*0x6ffc09*/
  if ( (v17 == 2 || v17 == 1) && v2 ) /*0x6ffc1c*/
    v3 = 29; /*0x6ffc1e*/
  if ( (uint8_t)FactoryClass::GetFlag() ) /*0x6ffc23*/
  {
    ScriptAction::GetWaypointCoords((ScriptAction *)&v9[26], v20); /*0x6ffc3d*/
    ScriptAction::GetWaypointCoords((ScriptAction *)&v9[24], v19); /*0x6ffc4f*/
    ScriptAction::GetWaypointCoords((ScriptAction *)&v9[22], v18); /*0x6ffc61*/
    WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v12, this); /*0x6ffc6c*/
    ScriptAction::InitActionFields( /*0x6ffc8e*/
      v14,
      (int)dword_A83D4C->Object_field_0x30,
      *(unsigned int *)WaypointCoords,
      WaypointCoords[4],
      v3,
      v9[22],
      v9[23],
      v9[24],
      v9[25],
      v9[26],
      v10);
    memcpy(v9, v14, sizeof(v9)); /*0x6ffca4*/
    (*((unsigned short *)&(v10))) = v15; /*0x6ffca6*/
    (((unsigned char *)&(v10))[2]) = v16; /*0x6ffca8*/
    Object_Helper_637DD0( /*0x6ffca9*/
      v9[0],
      v9[1],
      v9[2],
      v9[3],
      v9[4],
      v9[5],
      v9[6],
      v9[7],
      v9[8],
      v9[9],
      v9[10],
      v9[11],
      v9[12],
      v9[13],
      v9[14],
      v9[15],
      v9[16],
      v9[17],
      v9[18],
      v9[19],
      v9[20],
      v9[21],
      v9[22],
      v9[23],
      v9[24],
      v9[25],
      v9[26],
      v10);
    (*((unsigned char *)&(result))) = 0; /*0x6ffcae*/
  }
  else
  {
    if ( g_MoveFeedback ) /*0x6ffccb*/
    {
      switch ( v3 ) /*0x6ffcd4*/
      {
        case 10: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *))this->vfptr + 215))(this); /*0x6ffcda*/
          break;
        case 1: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *, unsigned int *))this->vfptr + 220))(this, v18); /*0x6ffcef*/
          break;
        case 2: /*0x6ffcd4*/
        case 29: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *))this->vfptr + 218))(this); /*0x6ffd9f*/
          break;
        case 7: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *))this->vfptr + 214))(this); /*0x6ffd15*/
          break;
        case 8: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *))this->vfptr + 217))(this); /*0x6ffd29*/
          break;
        case 16: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *))this->vfptr + 219))(this); /*0x6ffd3a*/
          break;
        default:
          if ( *(int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1200) > 0 ) /*0x6ffd59*/
          {
            v6 = Random::State(&Randomizer_Global); /*0x6ffd65*/
            v7 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x6ffd6b*/
            v11[0] = this->vfptr; /*0x6ffd7b*/
            (*(void (__thiscall **)(TechnoClass *, unsigned int))(v11[0] + 852))( /*0x6ffd93*/
              this,
              *(unsigned int *)(*(unsigned int *)(v7 + 1188) + 4 * (v6 % *(unsigned int *)(v7 + 1200))));
          }
          break;
      }
    }
    ScriptAction::GetWaypointCoords((ScriptAction *)v11, v19); /*0x6ffdb1*/
    ScriptAction::GetWaypointCoords((ScriptAction *)v12, v18); /*0x6ffdbb*/
    v8 = ScriptAction::GetWaypointCoords((ScriptAction *)v13, this); /*0x6ffdce*/
    Object_Init(v3, (int)v12, *(unsigned int *)v8, v8[4], (int)v11); /*0x6ffde6*/
    (*((unsigned char *)&(result))) = 1; /*0x6ffdee*/
  }
  return result; /*0x6ffcb0*/
}
} // namespace gamemd

// 0x721270
namespace gamemd {
ObjectClass * ScriptAction::GetArgumentString(int a2)
{
  if ( a2 < 0 || a2 >= this->ScriptAction_field_0x24 ) /*0x72127b*/
    return g_Str_none; /*0x721286*/
  else
    return *(char **)(this->ScriptAction_field_0x18[0] + 4 * a2); /*0x721280*/
}
} // namespace gamemd

// 0x6E8160
namespace gamemd {
int TeamClass::SumMemberCounts() {
    int v1; // edx
    int result; // eax
    TeamClass *v3; // ecx
    void *vtable0; // esi

    v1 = this->countObjects[5]; /*0x6e8160*/
    result = 0; /*0x6e8166*/
    if ( v1 > 0 ) /*0x6e816a*/
    {
      v3 = (TeamClass *)((char *)&this->focus4); /*0x6e816d*/
      do /*0x6e817b*/
      {
        vtable0 = v3->AbstractClass; /*0x6e8173*/
        v3 = (TeamClass *)((char *)v3 + 8); /*0x6e8175*/
        result += (int)vtable0; /*0x6e8178*/
        --v1; /*0x6e817a*/
      }
      while ( v1 ); /*0x6e817b*/
    }
    return result; /*0x6e817e*/
}
} // namespace gamemd

// 0x402220
namespace gamemd {
int ObjectClass::Cleanup() {
    int v2; // ebp
    int *v3; // edi
    unsigned int *v4; // edx
    unsigned int *lastLayer; // edx
    unsigned int *v6; // edx
    unsigned int *v7; // edx
    int result; // eax
    unsigned int *v9; // edx

    v2 = this->u32_AC; /*0x402226*/
    v3 = (int *)((char *)this + 216); /*0x40222c*/
    AudioMixer::Init((AudioMixer *)this + 9); /*0x402234*/
    EndFrameAudioMixer(v3, &((unsigned int *)this)[0]); /*0x402240*/
    ObjectClass::ClearFlags2((ObjectClass *)&((unsigned int *)this)[0]); /*0x402247*/
    v4 = *(unsigned int **)&this->isAliveFlag; /*0x40224c*/
    if ( v4 ) /*0x402254*/
    {
      EndFrameAudioMixer(v3, v4); /*0x402258*/
      ObjectClass::ClearFlags2(*(ObjectClass **)&this->isAliveFlag); /*0x402263*/
    }
    lastLayer = (unsigned int *)this->lastLayer; /*0x402268*/
    if ( lastLayer ) /*0x402270*/
      EndFrameAudioMixer(v3, lastLayer); /*0x402274*/
    v6 = *(unsigned int **)&this->isInLogic; /*0x402279*/
    if ( v6 ) /*0x402281*/
      EndFrameAudioMixer(v3, v6); /*0x402285*/
    v7 = (unsigned int *)this->location[0]; /*0x40228a*/
    if ( v7 ) /*0x402292*/
      EndFrameAudioMixer(v3, v7); /*0x402296*/
    result = EndFrameAudioMixer(v3, (unsigned int *)(v2 + 104)); /*0x4022a0*/
    v9 = *(unsigned int **)(v2 + 232); /*0x4022a5*/
    if ( v9 ) /*0x4022ad*/
      return EndFrameAudioMixer(v3, v9); /*0x4022b1*/
    return result; /*0x4022b6*/
}
} // namespace gamemd

// 0x433CF0
namespace gamemd {
int Text::Layout(uint16_t *a2, int *a3, unsigned int *a4, int a5) {
    uint16_t v5; // dx
    uint16_t v6; // di
    int v7; // esi
    int v8; // ebp
    uint16_t *v9; // ebx
    uint8_t *v10; // eax
    int v11; // edx
    int v12; // edx
    int v13; // eax
    int result; // eax
    uint16_t *v16; // [esp+Ch] [ebp-14h]
    unsigned int *v17; // [esp+10h] [ebp-10h]
    uint16_t *v18; // [esp+14h] [ebp-Ch]
    int v19; // [esp+18h] [ebp-8h]
    uint16_t i; // [esp+1Ch] [ebp-4h]
    uint16_t *v21; // [esp+24h] [ebp+4h]

    v5 = 0; /*0x433cf6*/
    v18 = 0; /*0x433cff*/
    v17 = (unsigned int *)this->u32_4; /*0x433d03*/
    if ( v17 && a2 ) /*0x433d13*/
    {
      v6 = *a2; /*0x433d1f*/
      v7 = 0; /*0x433d22*/
      v8 = 0; /*0x433d24*/
      v9 = a2 + 1; /*0x433d26*/
      v21 = 0; /*0x433d2c*/
      v19 = this->u32_1C; /*0x433d30*/
      v19 = v19; /*0x433d34*/
      v16 = 0; /*0x433d38*/
      for ( i = v6; v6; i = v6 ) /*0x433d40*/
      {
        switch ( v6 ) /*0x433d5c*/
        {
          case 9u: /*0x433d5c*/
            v7 = this->u32_28 + v7 - (this->u32_28 + v7) % this->u32_28; /*0x433d92*/
            break; /*0x433d94*/
          case 0xAu: /*0x433d5c*/
          case 0xDu: /*0x433d5c*/
            if ( v5 != 13 ) /*0x433d67*/
            {
              v7 = 0; /*0x433d75*/
              v8 = 0; /*0x433d77*/
              v19 += v19; /*0x433d7b*/
            }
            break; /*0x433d7f*/
          case 0x20u: /*0x433d5c*/
            v16 = v9; /*0x433d9d*/
            v18 = v21; /*0x433da1*/
            goto LABEL_9; /*0x433da1*/
          default:
  LABEL_9:
            v10 = 0; /*0x433da5*/
            if ( v17 ) /*0x433dad*/
            {
              v11 = *(uint16_t *)(v17[6] + 2 * v6); /*0x433db4*/
              if ( (unsigned short)v11 ) /*0x433dba*/
                v10 = (uint8_t *)(v17[7] + (v11 - 1) * v17[5]); /*0x433dc7*/
            }
            if ( v10 || (v10 = (uint8_t *)this->u32_8) != 0 ) /*0x433dd7*/
            {
              ++v8; /*0x433de1*/
              v12 = this->u32_2C; /*0x433de2*/
              v13 = *v10; /*0x433de5*/
              v7 += v12 + v13; /*0x433dea*/
              if ( a5 && v7 > a5 ) /*0x433df6*/
              {
                if ( v16 ) /*0x433dfe*/
                {
                  if ( v8 > 1 ) /*0x433e03*/
                  {
                    v9 = v16; /*0x433e09*/
                    v21 = v18; /*0x433e0b*/
                  }
                }
                else
                {
                  if ( v8 > 1 ) /*0x433e14*/
                  {
                    v7 -= v13 + v12; /*0x433e18*/
                    --v9; /*0x433e1a*/
                  }
                  if ( v7 > (int)v21 ) /*0x433e21*/
                    v21 = (uint16_t *)v7; /*0x433e23*/
                }
                v7 = 0; /*0x433e2f*/
                v8 = 0; /*0x433e31*/
                v16 = 0; /*0x433e35*/
                v19 += v19; /*0x433e39*/
              }
              else if ( v7 > (int)v21 ) /*0x433e43*/
              {
                v21 = (uint16_t *)v7; /*0x433e45*/
              }
            }
            break; /*0x433e3d*/
        }
        v6 = *v9; /*0x433e49*/
        v5 = i; /*0x433e4c*/
        ++v9; /*0x433e50*/
      }
      if ( a3 ) /*0x433e69*/
        *a3 = (int)v21; /*0x433e6f*/
      result = (int)a4; /*0x433e71*/
      if ( a4 ) /*0x433e77*/
        *a4 = v19; /*0x433e7d*/
      (*((unsigned char *)&(result))) = 1; /*0x433e7f*/
    }
    else
    {
      if ( a4 ) /*0x433e8e*/
        *a4 = 0; /*0x433e90*/
      result = (int)a3; /*0x433e92*/
      if ( a3 ) /*0x433e98*/
        *a3 = 0; /*0x433e9a*/
      (*((unsigned char *)&(result))) = 0; /*0x433e9c*/
    }
    return result; /*0x433e81*/
}
} // namespace gamemd

// 0x490490
namespace gamemd {
int COMClass::RegisterAll() {
    int (__thiscall ***COMClass_field_0x08)(unsigned int, int); // ecx
    int result; // eax
    int (__thiscall ***COMClass_field_0x0C)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x10)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x14)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x18)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x1C)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x20)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x24)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x28)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x2C)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x30)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x34)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x38)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x3C)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x40)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x44)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x48)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x4C)(unsigned int, int); // ecx
    int (__thiscall ***COMClass_field_0x50)(unsigned int, int); // ecx
    int (__thiscall ***v22)(unsigned int, int); // ecx
    int (__thiscall ***v23)(unsigned int, int); // ecx
    int (__thiscall ***v24)(unsigned int, int); // ecx
    int (__thiscall ***v25)(unsigned int, int); // ecx
    int (__thiscall ***v26)(unsigned int, int); // ecx
    int (__thiscall ***v27)(unsigned int, int); // ecx
    int (__thiscall ***v28)(unsigned int, int); // ecx
    int (__thiscall ***v29)(unsigned int, int); // ecx
    int (__thiscall ***v30)(unsigned int, int); // ecx
    int (__thiscall ***v31)(unsigned int, int); // ecx
    int (__thiscall ***v32)(unsigned int, int); // ecx
    int (__thiscall ***v33)(unsigned int, int); // ecx
    int (__thiscall ***v34)(unsigned int, int); // ecx
    int (__thiscall ***v35)(unsigned int, int); // ecx
    int (__thiscall ***v36)(unsigned int, int); // ecx
    int (__thiscall ***v37)(unsigned int, int); // ecx
    int (__thiscall ***v38)(unsigned int, int); // ecx
    int (__thiscall ***v39)(unsigned int, int); // ecx
    int (__thiscall ***v40)(unsigned int, int); // ecx
    int (__thiscall ***v41)(unsigned int, int); // ecx
    int (__thiscall ***v42)(unsigned int, int); // ecx
    int (__thiscall ***v43)(unsigned int, int); // ecx
    int (__thiscall ***v44)(unsigned int, int); // ecx
    int (__thiscall ***v45)(unsigned int, int); // ecx
    int (__thiscall ***v46)(unsigned int, int); // ecx
    int (__thiscall ***v47)(unsigned int, int); // ecx
    int (__thiscall ***v48)(unsigned int, int); // ecx
    int (__thiscall ***v49)(unsigned int, int); // ecx
    int (__thiscall ***v50)(unsigned int, int); // ecx
    int (__thiscall ***v51)(unsigned int, int); // ecx
    int (__thiscall ***v52)(unsigned int, int); // ecx
    int (__thiscall ***v53)(unsigned int, int); // ecx
    int (__thiscall ***v54)(unsigned int, int); // ecx
    int (__thiscall ***v55)(unsigned int, int); // ecx
    int (__thiscall ***v56)(unsigned int, int); // ecx
    int (__thiscall ***v57)(unsigned int, int); // ecx
    int (__thiscall ***v58)(unsigned int, int); // ecx
    int (__thiscall ***v59)(unsigned int, int); // ecx
    int (__thiscall ***v60)(unsigned int, int); // ecx
    int (__thiscall ***v61)(unsigned int, int); // ecx
    int (__thiscall ***v62)(unsigned int, int); // ecx
    int (__thiscall ***v63)(unsigned int, int); // ecx
    int (__thiscall ***v64)(unsigned int, int); // ecx
    int (__thiscall ***v65)(unsigned int, int); // ecx
    int (__thiscall ***v66)(unsigned int, int); // ecx
    int (__thiscall ***v67)(unsigned int, int); // ecx
    int (__thiscall ***v68)(unsigned int, int); // ecx
    int (__thiscall ***v69)(unsigned int, int); // ecx
    int (__thiscall ***v70)(unsigned int, int); // ecx
    int (__thiscall ***v71)(unsigned int, int); // ecx
    int (__thiscall ***v72)(unsigned int, int); // ecx
    int (__thiscall ***v73)(unsigned int, int); // ecx
    int (__thiscall ***v74)(unsigned int, int); // ecx
    int (__thiscall ***v75)(unsigned int, int); // ecx
    int (__thiscall ***v76)(unsigned int, int); // ecx
    int (__thiscall ***v77)(unsigned int, int); // ecx
    int (__thiscall ***v78)(unsigned int, int); // ecx
    int (__thiscall ***v79)(unsigned int, int); // ecx
    int (__thiscall ***v80)(unsigned int, int); // ecx
    int (__thiscall ***v81)(unsigned int, int); // ecx
    int (__thiscall ***v82)(unsigned int, int); // ecx
    int (__thiscall ***v83)(unsigned int, int); // ecx
    int (__thiscall ***v84)(unsigned int, int); // ecx
    int (__thiscall ***v85)(unsigned int, int); // ecx
    int (__thiscall ***v86)(unsigned int, int); // ecx
    int (__thiscall ***v87)(unsigned int, int); // ecx
    int (__thiscall ***v88)(unsigned int, int); // ecx
    int (__thiscall ***v89)(unsigned int, int); // ecx
    int (__thiscall ***v90)(unsigned int, int); // ecx
    int (__thiscall ***v91)(unsigned int, int); // ecx

    COMClass_field_0x08 = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x08; /*0x490496*/
    if ( COMClass_field_0x08 ) /*0x49049b*/
      result = (**COMClass_field_0x08)(COMClass_field_0x08, 1); /*0x4904a1*/
    this->COMClass_field_0x08 = 0; /*0x4904a3*/
    COMClass_field_0x0C = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x0C; /*0x4904a6*/
    if ( COMClass_field_0x0C ) /*0x4904ab*/
      result = (**COMClass_field_0x0C)(COMClass_field_0x0C, 1); /*0x4904b1*/
    this->COMClass_field_0x0C = 0; /*0x4904b3*/
    COMClass_field_0x10 = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x10; /*0x4904b6*/
    if ( COMClass_field_0x10 ) /*0x4904bb*/
      result = (**COMClass_field_0x10)(COMClass_field_0x10, 1); /*0x4904c1*/
    this->COMClass_field_0x10 = 0; /*0x4904c3*/
    COMClass_field_0x14 = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x14; /*0x4904c6*/
    if ( COMClass_field_0x14 ) /*0x4904cb*/
      result = (**COMClass_field_0x14)(COMClass_field_0x14, 1); /*0x4904d1*/
    this->COMClass_field_0x14 = 0; /*0x4904d3*/
    COMClass_field_0x18 = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x18; /*0x4904d6*/
    if ( COMClass_field_0x18 ) /*0x4904db*/
      result = (**COMClass_field_0x18)(COMClass_field_0x18, 1); /*0x4904e1*/
    this->COMClass_field_0x18 = 0; /*0x4904e3*/
    COMClass_field_0x1C = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x1C; /*0x4904e6*/
    if ( COMClass_field_0x1C ) /*0x4904eb*/
      result = (**COMClass_field_0x1C)(COMClass_field_0x1C, 1); /*0x4904f1*/
    this->COMClass_field_0x1C = 0; /*0x4904f3*/
    COMClass_field_0x20 = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x20; /*0x4904f6*/
    if ( COMClass_field_0x20 ) /*0x4904fb*/
      result = (**COMClass_field_0x20)(COMClass_field_0x20, 1); /*0x490501*/
    this->COMClass_field_0x20 = 0; /*0x490503*/
    COMClass_field_0x24 = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x24; /*0x490506*/
    if ( COMClass_field_0x24 ) /*0x49050b*/
      result = (**COMClass_field_0x24)(COMClass_field_0x24, 1); /*0x490511*/
    this->COMClass_field_0x24 = 0; /*0x490513*/
    COMClass_field_0x28 = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x28; /*0x490516*/
    if ( COMClass_field_0x28 ) /*0x49051b*/
      result = (**COMClass_field_0x28)(COMClass_field_0x28, 1); /*0x490521*/
    this->COMClass_field_0x28 = 0; /*0x490523*/
    COMClass_field_0x2C = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x2C; /*0x490526*/
    if ( COMClass_field_0x2C ) /*0x49052b*/
      result = (**COMClass_field_0x2C)(COMClass_field_0x2C, 1); /*0x490531*/
    this->COMClass_field_0x2C = 0; /*0x490533*/
    COMClass_field_0x30 = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x30; /*0x490536*/
    if ( COMClass_field_0x30 ) /*0x49053b*/
      result = (**COMClass_field_0x30)(COMClass_field_0x30, 1); /*0x490541*/
    this->COMClass_field_0x30 = 0; /*0x490543*/
    COMClass_field_0x34 = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x34; /*0x490546*/
    if ( COMClass_field_0x34 ) /*0x49054b*/
      result = (**COMClass_field_0x34)(COMClass_field_0x34, 1); /*0x490551*/
    this->COMClass_field_0x34 = 0; /*0x490553*/
    COMClass_field_0x38 = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x38; /*0x490556*/
    if ( COMClass_field_0x38 ) /*0x49055b*/
      result = (**COMClass_field_0x38)(COMClass_field_0x38, 1); /*0x490561*/
    this->COMClass_field_0x38 = 0; /*0x490563*/
    COMClass_field_0x3C = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x3C; /*0x490566*/
    if ( COMClass_field_0x3C ) /*0x49056b*/
      result = (**COMClass_field_0x3C)(COMClass_field_0x3C, 1); /*0x490571*/
    this->COMClass_field_0x3C = 0; /*0x490573*/
    COMClass_field_0x40 = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x40; /*0x490576*/
    if ( COMClass_field_0x40 ) /*0x49057b*/
      result = (**COMClass_field_0x40)(COMClass_field_0x40, 1); /*0x490581*/
    this->COMClass_field_0x40 = 0; /*0x490583*/
    COMClass_field_0x44 = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x44; /*0x490586*/
    if ( COMClass_field_0x44 ) /*0x49058b*/
      result = (**COMClass_field_0x44)(COMClass_field_0x44, 1); /*0x490591*/
    this->COMClass_field_0x44 = 0; /*0x490593*/
    COMClass_field_0x48 = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x48; /*0x490596*/
    if ( COMClass_field_0x48 ) /*0x49059b*/
      result = (**COMClass_field_0x48)(COMClass_field_0x48, 1); /*0x4905a1*/
    this->COMClass_field_0x48 = 0; /*0x4905a3*/
    COMClass_field_0x4C = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x4C; /*0x4905a6*/
    if ( COMClass_field_0x4C ) /*0x4905ab*/
      result = (**COMClass_field_0x4C)(COMClass_field_0x4C, 1); /*0x4905b1*/
    this->COMClass_field_0x4C = 0; /*0x4905b3*/
    COMClass_field_0x50 = (int (__thiscall ***)(unsigned int, int))this->COMClass_field_0x50; /*0x4905b6*/
    if ( COMClass_field_0x50 ) /*0x4905bb*/
      result = (**COMClass_field_0x50)(COMClass_field_0x50, 1); /*0x4905c1*/
    this->COMClass_field_0x50 = 0; /*0x4905c3*/
    v22 = (int (__thiscall ***)(unsigned int, int))this->u32_54; /*0x4905c6*/
    if ( v22 ) /*0x4905cb*/
      result = (**v22)(v22, 1); /*0x4905d1*/
    this->u32_54 = 0; /*0x4905d3*/
    v23 = (int (__thiscall ***)(unsigned int, int))this->Count; /*0x4905d6*/
    if ( v23 ) /*0x4905db*/
      result = (**v23)(v23, 1); /*0x4905e1*/
    this->Count = 0; /*0x4905e3*/
    v24 = (int (__thiscall ***)(unsigned int, int))this->u32_5C; /*0x4905e6*/
    if ( v24 ) /*0x4905eb*/
      result = (**v24)(v24, 1); /*0x4905f1*/
    this->u32_5C = 0; /*0x4905f3*/
    v25 = (int (__thiscall ***)(unsigned int, int))this->u32_60; /*0x4905f6*/
    if ( v25 ) /*0x4905fb*/
      result = (**v25)(v25, 1); /*0x490601*/
    this->u32_60 = 0; /*0x490603*/
    v26 = (int (__thiscall ***)(unsigned int, int))this->u32_64; /*0x490606*/
    if ( v26 ) /*0x49060b*/
      result = (**v26)(v26, 1); /*0x490611*/
    this->u32_64 = 0; /*0x490613*/
    v27 = (int (__thiscall ***)(unsigned int, int))this->__pad_01A; /*0x490616*/
    if ( v27 ) /*0x49061b*/
      result = (**v27)(v27, 1); /*0x490621*/
    this->__pad_01A = 0; /*0x490623*/
    v28 = (int (__thiscall ***)(unsigned int, int))this->u32_6C; /*0x490626*/
    if ( v28 ) /*0x49062b*/
      result = (**v28)(v28, 1); /*0x490631*/
    this->u32_6C = 0; /*0x490633*/
    v29 = (int (__thiscall ***)(unsigned int, int))this->u32_70; /*0x490636*/
    if ( v29 ) /*0x49063b*/
      result = (**v29)(v29, 1); /*0x490641*/
    this->u32_70 = 0; /*0x490643*/
    v30 = (int (__thiscall ***)(unsigned int, int))this->u32_74; /*0x490646*/
    if ( v30 ) /*0x49064b*/
      result = (**v30)(v30, 1); /*0x490651*/
    this->u32_74 = 0; /*0x490653*/
    v31 = (int (__thiscall ***)(unsigned int, int))this->u32_78; /*0x490656*/
    if ( v31 ) /*0x49065b*/
      result = (**v31)(v31, 1); /*0x490661*/
    this->u32_78 = 0; /*0x490663*/
    v32 = (int (__thiscall ***)(unsigned int, int))this->u32_7C; /*0x490666*/
    if ( v32 ) /*0x49066b*/
      result = (**v32)(v32, 1); /*0x490671*/
    this->u32_7C = 0; /*0x490673*/
    v33 = (int (__thiscall ***)(unsigned int, int))this->u32_8C; /*0x490676*/
    if ( v33 ) /*0x49067e*/
      result = (**v33)(v33, 1); /*0x490684*/
    this->u32_8C = 0; /*0x490686*/
    v34 = (int (__thiscall ***)(unsigned int, int))this->u32_90; /*0x49068c*/
    if ( v34 ) /*0x490694*/
      result = (**v34)(v34, 1); /*0x49069a*/
    this->u32_90 = 0; /*0x49069c*/
    v35 = (int (__thiscall ***)(unsigned int, int))this->u32_80; /*0x4906a2*/
    if ( v35 ) /*0x4906aa*/
      result = (**v35)(v35, 1); /*0x4906b0*/
    this->u32_80 = 0; /*0x4906b2*/
    v36 = (int (__thiscall ***)(unsigned int, int))this->u32_84; /*0x4906b8*/
    if ( v36 ) /*0x4906c0*/
      result = (**v36)(v36, 1); /*0x4906c6*/
    this->u32_84 = 0; /*0x4906c8*/
    v37 = (int (__thiscall ***)(unsigned int, int))this->u32_88; /*0x4906ce*/
    if ( v37 ) /*0x4906d6*/
      result = (**v37)(v37, 1); /*0x4906dc*/
    this->u32_88 = 0; /*0x4906de*/
    v38 = (int (__thiscall ***)(unsigned int, int))this->u32_94; /*0x4906e4*/
    if ( v38 ) /*0x4906ec*/
      result = (**v38)(v38, 1); /*0x4906f2*/
    this->u32_94 = 0; /*0x4906f4*/
    v39 = (int (__thiscall ***)(unsigned int, int))this->u32_98; /*0x4906fa*/
    if ( v39 ) /*0x490702*/
      result = (**v39)(v39, 1); /*0x490708*/
    this->u32_98 = 0; /*0x49070a*/
    v40 = (int (__thiscall ***)(unsigned int, int))this->u32_9C; /*0x490710*/
    if ( v40 ) /*0x490718*/
      result = (**v40)(v40, 1); /*0x49071e*/
    this->u32_9C = 0; /*0x490720*/
    v41 = (int (__thiscall ***)(unsigned int, int))this->u32_A0; /*0x490726*/
    if ( v41 ) /*0x49072e*/
      result = (**v41)(v41, 1); /*0x490734*/
    this->u32_A0 = 0; /*0x490736*/
    v42 = (int (__thiscall ***)(unsigned int, int))this->u32_A4; /*0x49073c*/
    if ( v42 ) /*0x490744*/
      result = (**v42)(v42, 1); /*0x49074a*/
    this->u32_A4 = 0; /*0x49074c*/
    v43 = (int (__thiscall ***)(unsigned int, int))this->u32_A8; /*0x490752*/
    if ( v43 ) /*0x49075a*/
      result = (**v43)(v43, 1); /*0x490760*/
    this->u32_A8 = 0; /*0x490762*/
    v44 = (int (__thiscall ***)(unsigned int, int))this->u32_AC; /*0x490768*/
    if ( v44 ) /*0x490770*/
      result = (**v44)(v44, 1); /*0x490776*/
    this->u32_AC = 0; /*0x490778*/
    v45 = (int (__thiscall ***)(unsigned int, int))this->u32_B0; /*0x49077e*/
    if ( v45 ) /*0x490786*/
      result = (**v45)(v45, 1); /*0x49078c*/
    this->u32_B0 = 0; /*0x49078e*/
    v46 = (int (__thiscall ***)(unsigned int, int))this->u32_B4; /*0x490794*/
    if ( v46 ) /*0x49079c*/
      result = (**v46)(v46, 1); /*0x4907a2*/
    this->u32_B4 = 0; /*0x4907a4*/
    v47 = (int (__thiscall ***)(unsigned int, int))this->u32_B8; /*0x4907aa*/
    if ( v47 ) /*0x4907b2*/
      result = (**v47)(v47, 1); /*0x4907b8*/
    this->u32_B8 = 0; /*0x4907ba*/
    v48 = (int (__thiscall ***)(unsigned int, int))this->u32_BC; /*0x4907c0*/
    if ( v48 ) /*0x4907c8*/
      result = (**v48)(v48, 1); /*0x4907ce*/
    this->u32_BC = 0; /*0x4907d0*/
    v49 = (int (__thiscall ***)(unsigned int, int))this->u32_C0; /*0x4907d6*/
    if ( v49 ) /*0x4907de*/
      result = (**v49)(v49, 1); /*0x4907e4*/
    this->u32_C0 = 0; /*0x4907e6*/
    v50 = (int (__thiscall ***)(unsigned int, int))this->u32_C4; /*0x4907ec*/
    if ( v50 ) /*0x4907f4*/
      result = (**v50)(v50, 1); /*0x4907fa*/
    this->u32_C4 = 0; /*0x4907fc*/
    v51 = (int (__thiscall ***)(unsigned int, int))this->u32_C8; /*0x490802*/
    if ( v51 ) /*0x49080a*/
      result = (**v51)(v51, 1); /*0x490810*/
    this->u32_C8 = 0; /*0x490812*/
    v52 = (int (__thiscall ***)(unsigned int, int))this->u32_CC; /*0x490818*/
    if ( v52 ) /*0x490820*/
      result = (**v52)(v52, 1); /*0x490826*/
    this->u32_CC = 0; /*0x490828*/
    v53 = (int (__thiscall ***)(unsigned int, int))this->u32_D0; /*0x49082e*/
    if ( v53 ) /*0x490836*/
      result = (**v53)(v53, 1); /*0x49083c*/
    this->u32_D0 = 0; /*0x49083e*/
    v54 = (int (__thiscall ***)(unsigned int, int))this->u32_D4; /*0x490844*/
    if ( v54 ) /*0x49084c*/
      result = (**v54)(v54, 1); /*0x490852*/
    this->u32_D4 = 0; /*0x490854*/
    v55 = (int (__thiscall ***)(unsigned int, int))this->u32_D8; /*0x49085a*/
    if ( v55 ) /*0x490862*/
      result = (**v55)(v55, 1); /*0x490868*/
    this->u32_D8 = 0; /*0x49086a*/
    v56 = (int (__thiscall ***)(unsigned int, int))this->u32_DC; /*0x490870*/
    if ( v56 ) /*0x490878*/
      result = (**v56)(v56, 1); /*0x49087e*/
    this->u32_DC = 0; /*0x490880*/
    v57 = (int (__thiscall ***)(unsigned int, int))this->u32_E0; /*0x490886*/
    if ( v57 ) /*0x49088e*/
      result = (**v57)(v57, 1); /*0x490894*/
    this->u32_E0 = 0; /*0x490896*/
    v58 = (int (__thiscall ***)(unsigned int, int))this->u32_E4; /*0x49089c*/
    if ( v58 ) /*0x4908a4*/
      result = (**v58)(v58, 1); /*0x4908aa*/
    this->u32_E4 = 0; /*0x4908ac*/
    v59 = (int (__thiscall ***)(unsigned int, int))this->u32_E8; /*0x4908b2*/
    if ( v59 ) /*0x4908ba*/
      result = (**v59)(v59, 1); /*0x4908c0*/
    this->u32_E8 = 0; /*0x4908c2*/
    v60 = (int (__thiscall ***)(unsigned int, int))this->u32_EC; /*0x4908c8*/
    if ( v60 ) /*0x4908d0*/
      result = (**v60)(v60, 1); /*0x4908d6*/
    v61 = (int (__thiscall ***)(unsigned int, int))this->u32_F0; /*0x4908d8*/
    this->u32_EC = 0; /*0x4908de*/
    if ( v61 ) /*0x4908e6*/
      result = (**v61)(v61, 1); /*0x4908ec*/
    v62 = (int (__thiscall ***)(unsigned int, int))this->u32_F4; /*0x4908ee*/
    this->u32_F0 = 0; /*0x4908f4*/
    if ( v62 ) /*0x4908fc*/
      result = (**v62)(v62, 1); /*0x490902*/
    v63 = (int (__thiscall ***)(unsigned int, int))this->u32_F8; /*0x490904*/
    this->u32_F4 = 0; /*0x49090a*/
    if ( v63 ) /*0x490912*/
      result = (**v63)(v63, 1); /*0x490918*/
    v64 = (int (__thiscall ***)(unsigned int, int))this->u32_FC; /*0x49091a*/
    this->u32_F8 = 0; /*0x490920*/
    if ( v64 ) /*0x490928*/
      result = (**v64)(v64, 1); /*0x49092e*/
    v65 = (int (__thiscall ***)(unsigned int, int))this->u32_100; /*0x490930*/
    this->u32_FC = 0; /*0x490936*/
    if ( v65 ) /*0x49093e*/
      result = (**v65)(v65, 1); /*0x490944*/
    v66 = (int (__thiscall ***)(unsigned int, int))this->u32_104; /*0x490946*/
    this->u32_100 = 0; /*0x49094c*/
    if ( v66 ) /*0x490954*/
      result = (**v66)(v66, 1); /*0x49095a*/
    v67 = (int (__thiscall ***)(unsigned int, int))this->u32_108; /*0x49095c*/
    this->u32_104 = 0; /*0x490962*/
    if ( v67 ) /*0x49096a*/
      result = (**v67)(v67, 1); /*0x490970*/
    v68 = (int (__thiscall ***)(unsigned int, int))this->u32_10C; /*0x490972*/
    this->u32_108 = 0; /*0x490978*/
    if ( v68 ) /*0x490980*/
      result = (**v68)(v68, 1); /*0x490986*/
    v69 = (int (__thiscall ***)(unsigned int, int))this->u32_110; /*0x490988*/
    this->u32_10C = 0; /*0x49098e*/
    if ( v69 ) /*0x490996*/
      result = (**v69)(v69, 1); /*0x49099c*/
    v70 = (int (__thiscall ***)(unsigned int, int))this->u32_114; /*0x49099e*/
    this->u32_110 = 0; /*0x4909a4*/
    if ( v70 ) /*0x4909ac*/
      result = (**v70)(v70, 1); /*0x4909b2*/
    v71 = (int (__thiscall ***)(unsigned int, int))this->u32_118; /*0x4909b4*/
    this->u32_114 = 0; /*0x4909ba*/
    if ( v71 ) /*0x4909c2*/
      result = (**v71)(v71, 1); /*0x4909c8*/
    v72 = (int (__thiscall ***)(unsigned int, int))this->u32_11C; /*0x4909ca*/
    this->u32_118 = 0; /*0x4909d0*/
    if ( v72 ) /*0x4909d8*/
      result = (**v72)(v72, 1); /*0x4909de*/
    v73 = (int (__thiscall ***)(unsigned int, int))this->u32_120; /*0x4909e0*/
    this->u32_11C = 0; /*0x4909e6*/
    if ( v73 ) /*0x4909ee*/
      result = (**v73)(v73, 1); /*0x4909f4*/
    v74 = (int (__thiscall ***)(unsigned int, int))this->u32_124; /*0x4909f6*/
    this->u32_120 = 0; /*0x4909fc*/
    if ( v74 ) /*0x490a04*/
      result = (**v74)(v74, 1); /*0x490a0a*/
    v75 = (int (__thiscall ***)(unsigned int, int))this->u32_128; /*0x490a0c*/
    this->u32_124 = 0; /*0x490a12*/
    if ( v75 ) /*0x490a1a*/
      result = (**v75)(v75, 1); /*0x490a20*/
    v76 = (int (__thiscall ***)(unsigned int, int))this->u32_12C; /*0x490a22*/
    this->u32_128 = 0; /*0x490a28*/
    if ( v76 ) /*0x490a30*/
      result = (**v76)(v76, 1); /*0x490a36*/
    v77 = (int (__thiscall ***)(unsigned int, int))this->u32_130; /*0x490a38*/
    this->u32_12C = 0; /*0x490a3e*/
    if ( v77 ) /*0x490a46*/
      result = (**v77)(v77, 1); /*0x490a4c*/
    v78 = (int (__thiscall ***)(unsigned int, int))this->u32_134; /*0x490a4e*/
    this->u32_130 = 0; /*0x490a54*/
    if ( v78 ) /*0x490a5c*/
      result = (**v78)(v78, 1); /*0x490a62*/
    v79 = (int (__thiscall ***)(unsigned int, int))this->u32_138; /*0x490a64*/
    this->u32_134 = 0; /*0x490a6a*/
    if ( v79 ) /*0x490a72*/
      result = (**v79)(v79, 1); /*0x490a78*/
    v80 = (int (__thiscall ***)(unsigned int, int))this->u32_13C; /*0x490a7a*/
    this->u32_138 = 0; /*0x490a80*/
    if ( v80 ) /*0x490a88*/
      result = (**v80)(v80, 1); /*0x490a8e*/
    v81 = (int (__thiscall ***)(unsigned int, int))this->u32_140; /*0x490a90*/
    this->u32_13C = 0; /*0x490a96*/
    if ( v81 ) /*0x490a9e*/
      result = (**v81)(v81, 1); /*0x490aa4*/
    v82 = (int (__thiscall ***)(unsigned int, int))this->u32_144; /*0x490aa6*/
    this->u32_140 = 0; /*0x490aac*/
    if ( v82 ) /*0x490ab4*/
      result = (**v82)(v82, 1); /*0x490aba*/
    v83 = (int (__thiscall ***)(unsigned int, int))this->u32_148; /*0x490abc*/
    this->u32_144 = 0; /*0x490ac2*/
    if ( v83 ) /*0x490aca*/
      result = (**v83)(v83, 1); /*0x490ad0*/
    v84 = (int (__thiscall ***)(unsigned int, int))this->u32_14C; /*0x490ad2*/
    this->u32_148 = 0; /*0x490ad8*/
    if ( v84 ) /*0x490ae0*/
      result = (**v84)(v84, 1); /*0x490ae6*/
    v85 = (int (__thiscall ***)(unsigned int, int))this->u32_150; /*0x490ae8*/
    this->u32_14C = 0; /*0x490aee*/
    if ( v85 ) /*0x490af6*/
      result = (**v85)(v85, 1); /*0x490afc*/
    v86 = (int (__thiscall ***)(unsigned int, int))this->u32_154; /*0x490afe*/
    this->u32_150 = 0; /*0x490b04*/
    if ( v86 ) /*0x490b0c*/
      result = (**v86)(v86, 1); /*0x490b12*/
    v87 = (int (__thiscall ***)(unsigned int, int))this->u32_158; /*0x490b14*/
    this->u32_154 = 0; /*0x490b1a*/
    if ( v87 ) /*0x490b22*/
      result = (**v87)(v87, 1); /*0x490b28*/
    v88 = (int (__thiscall ***)(unsigned int, int))this->u32_15C; /*0x490b2a*/
    this->u32_158 = 0; /*0x490b30*/
    if ( v88 ) /*0x490b38*/
      result = (**v88)(v88, 1); /*0x490b3e*/
    v89 = (int (__thiscall ***)(unsigned int, int))this->u32_160; /*0x490b40*/
    this->u32_15C = 0; /*0x490b46*/
    if ( v89 ) /*0x490b4e*/
      result = (**v89)(v89, 1); /*0x490b54*/
    v90 = (int (__thiscall ***)(unsigned int, int))this->u32_164; /*0x490b56*/
    this->u32_160 = 0; /*0x490b5c*/
    if ( v90 ) /*0x490b64*/
      result = (**v90)(v90, 1); /*0x490b6a*/
    v91 = (int (__thiscall ***)(unsigned int, int))this->u32_168; /*0x490b6c*/
    this->u32_164 = 0; /*0x490b72*/
    if ( v91 ) /*0x490b7a*/
      result = (**v91)(v91, 1); /*0x490b80*/
    this->u32_168 = 0; /*0x490b82*/
    return result; /*0x490b88*/
}
} // namespace gamemd

// 0x53ED20
namespace gamemd {
int16_t NetworkID::Assign(unsigned int *a2, int a3, int16_t a4) {
    this->NetworkID_field_0x04 = *(unsigned int *)a3; /*0x53ed2a*/
    this->u32_8 = *(unsigned short *)(a3 + 4); /*0x53ed31*/
    if ( dword_828140 == 1 ) /*0x53ed3d*/
    {
      *(unsigned int *)this->__pad_0 = *a2; /*0x53ed45*/
      return (int16_t)a2; /*0x53ed3f*/
    }
    else
    {
      *(unsigned int *)this->__pad_0 = 0; /*0x53ed4f*/
      *(unsigned short *)this->__pad_0 = a4; /*0x53ed55*/
      return a4; /*0x53ed4a*/
    }
}
} // namespace gamemd

// 0x53EF30
namespace gamemd {
int NetworkID::Compare(int a2) {
    return memcmp(this + 4, (const void *)(a2 + 4), dword_828140 != 2 ? 6 : 4) == 0;
}
} // namespace gamemd

// 0x60CF00
namespace gamemd {
unsigned int * Control::CreateControlDialog() {
    unsigned int *result; // eax
    unsigned int *v2; // esi
    int v3; // eax
    Control *v4; // [esp+4h] [ebp-4h] BYREF

    result = *(unsigned int **)&g_DialogPool.__pad_208[60]; /*0x60cf01*/
    v4 = this; /*0x60cf09*/
    if ( *(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x60cf0d*/
    {
      result = *(unsigned int **)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x60cf32*/
                          + 4
                          * ((*(int (__thiscall **)(Control **))&g_DialogPool.__pad_208[80])(&v4)
                           & ((1 << g_DialogPool.__pad_208[68]) - 1)));
      if ( result ) /*0x60cf37*/
      {
        while ( (Control *)*result != v4 ) /*0x60cf43*/
        {
          result = (unsigned int *)result[129]; /*0x60cf45*/
          if ( !result ) /*0x60cf4d*/
            return result; /*0x60cf4d*/
        }
        v2 = result + 1; /*0x60cf5a*/
        if ( result != (unsigned int *)-4 ) /*0x60cf5f*/
        {
          v3 = result[28]; /*0x60cf65*/
          switch ( v3 ) /*0x60cf6d*/
          {
            case 148: /*0x60cf6d*/
              result = (unsigned int *)CreatureClass::GetManager(); /*0x60cf6f*/
              v2[29] = result; /*0x60cf74*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[700]; /*0x60cf7d*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[700]; /*0x60cf89*/
              return result; /*0x60cf91*/
            case 259: /*0x60cf6d*/
              goto LABEL_10; /*0x60cf97*/
            case 264: /*0x60cf6d*/
              v2[29] = UI_Create_72D820(); /*0x60cfc7*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[876]; /*0x60cfd0*/
              result = *(unsigned int **)&g_BuildingLoadQueue_Array.__pad_F70[876]; /*0x60cfd6*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[876]; /*0x60cfdb*/
              break;
            case 3014: /*0x60cf6d*/
              result = (unsigned int *)VtableStub_72D450(); /*0x60cfeb*/
              v2[29] = result; /*0x60cff0*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x60cff9*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x60d005*/
              break;
            case 3015: /*0x60cf6d*/
  LABEL_10:
              v2[29] = VtableStub_72D450(); /*0x60cf99*/
              result = *(unsigned int **)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x60cfa1*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x60cfa6*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[900]; /*0x60cfb2*/
              return result; /*0x60cfba*/
            case 107: /*0x60cf6d*/
              v2[29] = UI_Create_72D210(); /*0x60d01f*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d028*/
              result = *(unsigned int **)&g_BuildingLoadQueue_Array.__pad_F70[776]; /*0x60d02e*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[776]; /*0x60d033*/
              break;
            case 258: /*0x60cf6d*/
            case 188: /*0x60cf6d*/
            case 189: /*0x60cf6d*/
            case 194: /*0x60cf6d*/
            case 201: /*0x60cf6d*/
              result = (unsigned int *)UI_Create_72D030(); /*0x60d294*/
              v2[29] = result; /*0x60d299*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d2a2*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[616]; /*0x60d2ae*/
              break;
            case 275: /*0x60cf6d*/
              result = (unsigned int *)UI_Create_72CE50(); /*0x60d07a*/
              v2[29] = result; /*0x60d07f*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d088*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[764]; /*0x60d094*/
              break;
            case 276: /*0x60cf6d*/
              v2[29] = UI_Create_72CAB0(); /*0x60d0a9*/
              result = *(unsigned int **)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d0ac*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d0b1*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[688]; /*0x60d0bd*/
              break;
            case 270: /*0x60cf6d*/
            case 284: /*0x60cf6d*/
              v2[29] = UI_Create_72C8D0(); /*0x60d277*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d280*/
              result = *(unsigned int **)&g_BuildingLoadQueue_Array.__pad_F70[568]; /*0x60d286*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[568]; /*0x60d28b*/
              break;
            case 271: /*0x60cf6d*/
            case 285: /*0x60cf6d*/
              v2[29] = UI_Create_72C6F0(); /*0x60d255*/
              result = *(unsigned int **)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d258*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d25d*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[860]; /*0x60d269*/
              break;
            case 230: /*0x60cf6d*/
            case 243: /*0x60cf6d*/
            case 244: /*0x60cf6d*/
              result = (unsigned int *)UI_Create_72C510(); /*0x60d22d*/
              v2[29] = result; /*0x60d232*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d23b*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[692]; /*0x60d247*/
              break;
            case 231: /*0x60cf6d*/
              v2[29] = UI_Create_72C330(); /*0x60d11f*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d128*/
              result = *(unsigned int **)&g_BuildingLoadQueue_Array.__pad_F70[640]; /*0x60d12e*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[640]; /*0x60d133*/
              break;
            case 278: /*0x60cf6d*/
              result = (unsigned int *)UI_Create_72C150(); /*0x60d143*/
              v2[29] = result; /*0x60d148*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d151*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[668]; /*0x60d15d*/
              break;
            case 279: /*0x60cf6d*/
              v2[29] = UI_Create_72BF70(); /*0x60d172*/
              result = *(unsigned int **)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d175*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d17a*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[748]; /*0x60d186*/
              break;
            case 274: /*0x60cf6d*/
              v2[29] = UI_Create_72BD90(); /*0x60d19b*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d1a4*/
              result = *(unsigned int **)&g_BuildingLoadQueue_Array.__pad_F70[744]; /*0x60d1aa*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[744]; /*0x60d1af*/
              break;
            case 700: /*0x60cf6d*/
              result = (unsigned int *)UI_Create_72BBB0(); /*0x60d1bf*/
              v2[29] = result; /*0x60d1c4*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d1cd*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[892]; /*0x60d1d9*/
              break;
            case 214: /*0x60cf6d*/
              v2[29] = UI_Create_72B9D0(); /*0x60d1ee*/
              result = *(unsigned int **)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d1f1*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d1f6*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[932]; /*0x60d202*/
              break;
            default:
              v2[29] = VtableStub_72E280(); /*0x60d210*/
              v2[56] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[928]; /*0x60d219*/
              result = *(unsigned int **)&g_BuildingLoadQueue_Array.__pad_F70[596]; /*0x60d21f*/
              v2[57] = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[596]; /*0x60d224*/
              break;
          }
        }
      }
    }
    return result; /*0x60cf4f*/
}
} // namespace gamemd

// 0x65C780
namespace gamemd {
int Random::State() {
    int result; // eax
    int Random_field_0x04; // edx
    int v3; // esi

    if ( this->__pad_0[0] ) /*0x65c780*/
      return 0; /*0x65c785*/
    *(&this->Random_field_0x0C + this->Random_field_0x04) ^= *(&this->Random_field_0x0C + this->Random_field_0x08); /*0x65c79d*/
    Random_field_0x04 = this->Random_field_0x04; /*0x65c79f*/
    result = *(&this->Random_field_0x0C + Random_field_0x04++); /*0x65c7a5*/
    v3 = this->Random_field_0x08 + 1; /*0x65c7aa*/
    this->Random_field_0x04 = Random_field_0x04; /*0x65c7b1*/
    this->Random_field_0x08 = v3; /*0x65c7b4*/
    if ( Random_field_0x04 >= 250 ) /*0x65c7b7*/
      this->Random_field_0x04 = 0; /*0x65c7b9*/
    if ( v3 >= 250 ) /*0x65c7c7*/
      this->Random_field_0x08 = 0; /*0x65c7c9*/
    return result; /*0x65c787*/
}
} // namespace gamemd

// 0x6646C0
namespace gamemd {
char NetworkManager::RemovePlayer(int this, int a2) {
    int i; // esi
    char *v3; // eax
    char result; // al
    unsigned char v5[340]; // [esp+Ch] [ebp-154h] BYREF

    memset(v5, 0, 338); /*0x6646d8*/
    for ( i = 0; i < this->u32_10; ++i ) /*0x6646eb*/
    {
      v3 = *(char **)(this->u32_4 + 4 * i); /*0x6646f0*/
      if ( *v3 == a2 ) /*0x6646f8*/
      {
        v3[41] = 0; /*0x6646fa*/
        v3[39] = 0; /*0x6646fd*/
      }
    }
    result = this->u32_18; /*0x664708*/
    if ( result ) /*0x664710*/
    {
      v5[0] = 2; /*0x664717*/
      v5[1] = a2; /*0x66471c*/
      Debug::Log(); /*0x664720*/
      return Network::SendPacket((int)unk_A8E9C0, (int)v5, 338, 1u); /*0x664739*/
    }
    return result; /*0x66470b*/
}
} // namespace gamemd

// 0x67C310
namespace gamemd {
unsigned int * VoxelAnimTypeVector::Constructor(int a2, int a3) {
    this->Items = 0; /*0x67c31b*/
    this->Capacity = a2; /*0x67c31e*/
    this->IsInitialized = 1; /*0x67c321*/
    this->IsAllocated = 0; /*0x67c325*/
    *this = (VoxelAnimTypeVector)(void *)&vt_VectorClass_VoxelAnimTypeClass; /*0x67c328*/
    if ( a2 ) /*0x67c32e*/
    {
      if ( a3 ) /*0x67c336*/
      {
        this->Items = a3; /*0x67c338*/
        return this; /*0x67c33e*/
      }
      this->Items = operator new(4 * a2); /*0x67c34d*/
      this->IsAllocated = 1; /*0x67c350*/
    }
    return this; /*0x67c33d*/
}
} // namespace gamemd

// 0x7240B0
namespace gamemd {
void ToolTipClass::updateString() {
    HWND ToolTipClass_field_0x08; // eax
    int i; // edi
    int v4; // edx
    void *v5; // eax

    ToolTipClass_field_0x08 = (HWND)this->ToolTipClass_field_0x08; /*0x7240ba*/
    *(unsigned int *)this->__pad_0 = (void *)&vt_ToolTipManager; /*0x7240bd*/
    KillTimer(ToolTipClass_field_0x08, 0x54544950u); /*0x7240c4*/
    if ( this->ToolTipClass_field_0x04 ) /*0x7240ca*/
      (*(void (__thiscall **)(ToolTipClass *, int *))(*(unsigned int *)this->__pad_0 + 8))(this, &this->ToolTipClass_field_0x18); /*0x7240db*/
    operator delete((void *)(*((void **)this + 147))); /*0x7240e5*/
    this->u32_24C = 0; /*0x7240ea*/
    this->u32_250 = 0; /*0x7240f0*/
    this->u32_254 = 0; /*0x7240f6*/
    this->u32_258 = 0; /*0x7240fc*/
    this->u32_25C = 0; /*0x724102*/
    for ( i = 0; i < this->u32_244; ++i ) /*0x724115*/
    {
      v4 = this->u32_238; /*0x724117*/
      if ( *(unsigned int *)(v4 + 4 * i) ) /*0x72411d*/
        operator delete((void *)(*(void **)(v4 + 4 * i))); /*0x724125*/
    }
    (*(void (__thiscall **)(char *))(this->u32_234 + 12))((char *)this + 564); /*0x724146*/
    operator delete((void *)(*((void **)this + 147))); /*0x724150*/
    this->u32_24C = 0; /*0x724155*/
    this->u32_250 = 0; /*0x72415b*/
    this->u32_254 = 0; /*0x724161*/
    this->u32_258 = 0; /*0x724167*/
    this->u32_25C = 0; /*0x72416d*/
    v5 = (void *)this->u32_238; /*0x724173*/
    this->u32_234 = /* vftable-ref: no vt truth */ 0; /*0x72417b*/
    if ( v5 && this->u32_241 ) /*0x724183*/
    {
      operator delete((void *)(v5)); /*0x724189*/
      this->u32_238 = 0; /*0x724191*/
    }
    this->u32_241 = 0; /*0x724194*/
    this->u32_23C = 0; /*0x724197*/
}
} // namespace gamemd

