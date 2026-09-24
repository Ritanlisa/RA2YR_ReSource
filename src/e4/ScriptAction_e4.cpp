// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/ArrayClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"

// 0x4C6860
namespace gamemd {
void * ScriptAction::InitActionFields(int a2, int a3, char a4, char a5, int a6, char a7, int a8, char a9, int a10, char a11)
{
  char *result; // eax

  result = this; /*0x4c6860*/
  if ( a2 < 0 ) /*0x4c6868*/
  {
    *(this + 2) = -1; /*0x4c68ca*/
    *this = 0; /*0x4c68ce*/
  }
  else
  {
    *(this + 2) = a2; /*0x4c686e*/
    *this = 4; /*0x4c6874*/
    *(this + 29) = 0; /*0x4c6877*/
    *(_DWORD *)(this + 7) = a3; /*0x4c687b*/
    *(this + 11) = a4; /*0x4c6881*/
    *(this + 12) = a5; /*0x4c6888*/
    *(_DWORD *)(this + 14) = a6; /*0x4c6892*/
    *(this + 18) = a7; /*0x4c6899*/
    *(_DWORD *)(this + 19) = a8; /*0x4c68a3*/
    *(this + 23) = a9; /*0x4c68aa*/
    *((_DWORD *)this + 6) = a10; /*0x4c68b4*/
    *(this + 28) = a11; /*0x4c68bb*/
  }
  *(_DWORD *)(this + 3) = g_CurrentFrame; /*0x4c68c4*/
  return result; /*0x4c68c7*/
}
}
// 0x633FA0
namespace gamemd {
int ScriptAction::CreatePlacementAction(AbstractClass * aP1, const void * a2)
{
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  _BYTE *v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int Type; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx

  v4 = __2_YAPAXI_Z(0x10u); /*0x633fa7*/
  if ( v4 ) /*0x633fb1*/
  {
    *v4 = 0; /*0x633fb3*/
    v4[1] = 0; /*0x633fb9*/
    v4[2] = -1; /*0x633fc0*/
    *((_BYTE *)v4 + 12) = 0; /*0x633fc7*/
    v5 = v4; /*0x633fcb*/
  }
  else
  {
    v5 = 0; /*0x633fcf*/
  }
  *v5 = aP1; /*0x633fd7*/
  v6 = __2_YAPAXI_Z(0x6Fu); /*0x633fd9*/
  if ( v6 ) /*0x633fe3*/
    *v6 = 0; /*0x633fe5*/
  else
    v6 = 0; /*0x633fea*/
  qmemcpy(v6, a2, 0x6Fu); /*0x633ff8*/
  v5[1] = v6; /*0x633ffd*/
  v7 = *(this + 2); /*0x634000*/
  if ( *(this + 4) < v7 /*0x634024*/
    || (*((_BYTE *)this + 13) || !v7)
    && (v8 = *(this + 5), v8 > 0)
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v7 + v8, 0) )
  {
    v9 = *(this + 4); /*0x63402b*/
    v10 = *(this + 1); /*0x63402e*/
    *(this + 4) = v9 + 1; /*0x634034*/
    *(_DWORD *)(v10 + 4 * v9) = v5; /*0x634037*/
  }
  Type = BuildingClass::GetType(aP1); /*0x634043*/
  v12 = *(_DWORD *)(Type + 12); /*0x634045*/
  if ( *(_DWORD *)(Type + 20) < v12 /*0x63406d*/
    || (*(_BYTE *)(Type + 17) || !v12)
    && (v13 = *(_DWORD *)(Type + 24), v13 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(Type + 4) + 8))(Type + 4, v12 + v13, 0) )
  {
    v14 = *(_DWORD *)(Type + 20); /*0x634074*/
    v15 = *(_DWORD *)(Type + 8); /*0x634077*/
    *(_DWORD *)(Type + 20) = v14 + 1; /*0x63407d*/
    *(_DWORD *)(v15 + 4 * v14) = this; /*0x634080*/
  }
  if ( *(_DWORD *)(Type + 140) == -1 ) /*0x63408d*/
    *(_DWORD *)(Type + 140) = *(_DWORD *)(Type + 20) - 1; /*0x634093*/
  return ScriptAction::PlaceObject((int)this, v5); /*0x6340a1*/
}
}
// 0x6343C0
namespace gamemd {
unsigned int * ScriptAction::GetCoords(unsigned int * a2)
{
  int *ActionCoords; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  _DWORD v7[3]; // [esp+8h] [ebp-Ch] BYREF

  ActionCoords = GetScenarioClassActionCoords(v7, *(_BYTE **)(**(this + 1) + 4)); /*0x6343d1*/
  v3 = *ActionCoords; /*0x6343d6*/
  v4 = ActionCoords[1]; /*0x6343d8*/
  v5 = ActionCoords[2]; /*0x6343db*/
  *a2 = v3; /*0x6343e4*/
  a2[1] = v4; /*0x6343e6*/
  a2[2] = v5; /*0x6343e9*/
  return a2; /*0x6343ec*/
}
}
// 0x634400
namespace gamemd {
unsigned int * ScriptAction::GetScreenPos(unsigned int * a2)
{
  _DWORD *ActionCoords; // eax
  int v3; // edx
  int v5[3]; // [esp+0h] [ebp-18h] BYREF
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  ActionCoords = GetScenarioClassActionCoords(v5, *(_BYTE **)(**(this + 1) + 4)); /*0x63440f*/
  v6[0] = *ActionCoords; /*0x634416*/
  v6[1] = ActionCoords[1]; /*0x63441d*/
  v6[2] = ActionCoords[2]; /*0x634434*/
  Coord::To_Screen(g_TacticalClass_Instance, v6, v5); /*0x634438*/
  v3 = g_Map_VisibleRect + v5[1]; /*0x634452*/
  *a2 = DSurface_ViewBounds + v5[0]; /*0x634458*/
  a2[1] = v3; /*0x63445a*/
  return a2; /*0x63445d*/
}
}
// 0x634550
namespace gamemd {
int ScriptAction::GetActionCoordinates(int a2, int a3, int a4)
{
  _DWORD *ScenarioClassActionCoords; // eax
  _DWORD v6[3]; // [esp+4h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = GetScenarioClassActionCoords(v6, *(_BYTE **)(**(this + 1) + 4)); /*0x634560*/
  return *ScenarioClassActionCoords == a2 && ScenarioClassActionCoords[1] == a3 && ScenarioClassActionCoords[2] == a4; /*0x63456f*/
}
}
// 0x6346B0
namespace gamemd {
unsigned int * ScriptAction::FindItemByValue(int a2)
{
  int v2; // edx
  int v3; // eax
  _DWORD **v4; // esi
  _DWORD **i; // ecx

  v2 = *(this + 4); /*0x6346b0*/
  v3 = 0; /*0x6346b4*/
  if ( v2 <= 0 ) /*0x6346ba*/
    return 0; /*0x6346ba*/
  v4 = (_DWORD **)*(this + 1); /*0x6346bc*/
  for ( i = v4; **i != a2; ++i ) /*0x6346c3*/
  {
    if ( ++v3 >= v2 ) /*0x6346d1*/
      return 0; /*0x6346d8*/
  }
  if ( v3 == -1 ) /*0x6346de*/
    return 0; /*0x6346e2*/
  else
    return v4[v3]; /*0x6346e8*/
}
}
// 0x6349B0
namespace gamemd {
int ScriptAction::FindSquadMember()
{
  int v2; // edi
  _DWORD *v3; // ebx
  int Type; // esi
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int *v8; // esi
  int Value; // eax
  int v10; // eax
  _BYTE *v11; // esi
  int result; // eax
  int v13; // ebx
  _BYTE *v14; // esi
  int *ActionCoords; // eax
  int v16; // esi
  int v17; // edi
  int *v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // [esp+10h] [ebp-110h]
  int v22; // [esp+10h] [ebp-110h]
  int v23; // [esp+14h] [ebp-10Ch]
  int v24[3]; // [esp+18h] [ebp-108h] BYREF
  int v25; // [esp+24h] [ebp-FCh]
  int v26[3]; // [esp+28h] [ebp-F8h] BYREF
  int v27[3]; // [esp+34h] [ebp-ECh] BYREF
  _BYTE v28[112]; // [esp+40h] [ebp-E0h] BYREF
  _BYTE v29[108]; // [esp+B0h] [ebp-70h] BYREF
  __int16 v30; // [esp+11Ch] [ebp-4h]
  char v31; // [esp+11Eh] [ebp-2h]

  v23 = 0; /*0x6349bc*/
  v21 = *(_DWORD *)(this + 16); /*0x6349c9*/
  if ( v21 > 0 ) /*0x6349cd*/
  {
    do /*0x634a64*/
    {
      v2 = *(_DWORD *)(*(_DWORD *)(this + 4) + 4 * v23); /*0x6349da*/
      v3 = *(_DWORD **)v2; /*0x6349dd*/
      Type = BuildingClass::GetType(*(_DWORD **)v2); /*0x6349e6*/
      v24[0] = this; /*0x6349ed*/
      if ( (*(int (__thiscall **)(int, int *))(*(_DWORD *)(Type + 4) + 16))(Type + 4, v24) == *(_DWORD *)(Type + 148) ) /*0x634a00*/
      {
        *(_BYTE *)(v2 + 12) = 1; /*0x634a02*/
        v5 = *(_DWORD *)(this + 168) + 1; /*0x634a10*/
        *(_DWORD *)(this + 168) = v5; /*0x634a15*/
        if ( v5 == 1 ) /*0x634a18*/
        {
          v6 = BuildingClass::GetType(v3); /*0x634a1c*/
          v7 = *(_DWORD *)(v6 + 20) - 1; /*0x634a24*/
          if ( v7 >= 0 ) /*0x634a25*/
            v8 = *(int **)(*(_DWORD *)(v6 + 8) + 4 * v7); /*0x634a2e*/
          else
            v8 = 0; /*0x634a27*/
          Value = Array::FindValue(v8, (int)v3); /*0x634a34*/
          if ( Value == -1 ) /*0x634a3c*/
            v10 = 0; /*0x634a3e*/
          else
            v10 = *(_DWORD *)(v8[1] + 4 * Value); /*0x634a45*/
          v11 = *(_BYTE **)(v10 + 4); /*0x634a48*/
          qmemcpy((void *)(this + 56), v11, 0x6Cu); /*0x634a50*/
          v11 += 108; /*0x634a50*/
          *(_WORD *)(this + 164) = *(_WORD *)v11; /*0x634a52*/
          *(_BYTE *)(this + 166) = v11[2]; /*0x634a54*/
        }
      }
      ++v23; /*0x634a60*/
    }
    while ( v23 < v21 ); /*0x634a64*/
  }
  *(_DWORD *)(this + 176) = -1; /*0x634a6a*/
  result = *(_DWORD *)(this + 168); /*0x634a74*/
  if ( result ) /*0x634a7c*/
  {
    result = *(_DWORD *)(this + 48); /*0x634a8e*/
    qmemcpy(v28, (const void *)(this + 56), 0x6Eu); /*0x634a91*/
    v13 = 0; /*0x634a95*/
    v22 = result; /*0x634a97*/
    v28[110] = *(_BYTE *)(this + 166); /*0x634a9d*/
    if ( result > 0 ) /*0x634a9e*/
    {
      while ( 1 ) /*0x634aaf*/
      {
        v14 = *(_BYTE **)(*(_DWORD *)(this + 36) + 4 * v13); /*0x634aaf*/
        qmemcpy(v29, v14, sizeof(v29)); /*0x634ab6*/
        v14 += 108; /*0x634ab6*/
        v30 = *(_WORD *)v14; /*0x634ab8*/
        v31 = v14[2]; /*0x634abe*/
        ActionCoords = GetScenarioClassActionCoords(v27, v28); /*0x634abf*/
        v16 = *ActionCoords; /*0x634ac4*/
        v17 = ActionCoords[1]; /*0x634ad1*/
        v25 = ActionCoords[2]; /*0x634ad7*/
        v18 = GetScenarioClassActionCoords(v26, v29); /*0x634ae0*/
        result = *v18; /*0x634ae2*/
        v19 = v18[1]; /*0x634ae6*/
        v20 = v18[2]; /*0x634ae9*/
        if ( v16 == result && v17 == v19 && v25 == v20 ) /*0x634af6*/
          break; /*0x634af6*/
        result = v22; /*0x634af8*/
        if ( ++v13 >= v22 ) /*0x634aff*/
          return result; /*0x634aff*/
      }
      *(_DWORD *)(this + 176) = v13; /*0x634b03*/
    }
  }
  return result; /*0x634b09*/
}
}
// 0x634CC0
namespace gamemd {
int ScriptAction::FindBuildingMatch(AbstractClass * aP1)
{
  int *Type; // esi
  int v4; // eax
  int v5; // eax
  int *v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int *v11; // ecx
  int Value; // eax
  int v13; // eax
  _BYTE *v14; // esi
  int *v15; // edi
  int *ScenarioClassActionCoords; // eax
  int v17; // ebp
  int v18; // ebx
  _DWORD *v19; // esi
  _DWORD *v20; // esi
  _DWORD *v21; // eax
  int *v23; // [esp+10h] [ebp-100h] BYREF
  int *v24; // [esp+14h] [ebp-FCh]
  int v25; // [esp+1Ch] [ebp-F4h]
  int i; // [esp+20h] [ebp-F0h]
  _DWORD v27[3]; // [esp+24h] [ebp-ECh] BYREF
  _BYTE v28[108]; // [esp+30h] [ebp-E0h] BYREF
  __int16 v29; // [esp+9Ch] [ebp-74h]
  char v30; // [esp+9Eh] [ebp-72h]
  _BYTE v31[108]; // [esp+A0h] [ebp-70h] BYREF
  __int16 v32; // [esp+10Ch] [ebp-4h]
  char v33; // [esp+10Eh] [ebp-2h]

  v24 = this; /*0x634cd5*/
  Type = (int *)BuildingClass::GetType(aP1); /*0x634cde*/
  v4 = Type[1]; /*0x634ce0*/
  v23 = this; /*0x634ce7*/
  v5 = (*(int (__thiscall **)(int *, int **))(v4 + 16))(Type + 1, &v23); /*0x634cef*/
  if ( v5 == -1 ) /*0x634cf5*/
  {
    v6 = 0; /*0x634cf7*/
  }
  else
  {
    v7 = Type[5]; /*0x634cfb*/
    if ( v7 == 1 ) /*0x634d01*/
    {
      v6 = this; /*0x634d03*/
    }
    else
    {
      v8 = v5 - 1; /*0x634d07*/
      if ( v8 < 0 ) /*0x634d08*/
        v8 = v7 - 1; /*0x634d0a*/
      v6 = (int *)ArrayClass::GetAt_Wrap(Type, v8); /*0x634d15*/
    }
  }
  v9 = BuildingClass::GetType(aP1); /*0x634d19*/
  v10 = *(_DWORD *)(v9 + 20) - 1; /*0x634d21*/
  if ( v10 >= 0 ) /*0x634d22*/
    v11 = *(int **)(*(_DWORD *)(v9 + 8) + 4 * v10); /*0x634d2b*/
  else
    v11 = 0; /*0x634d24*/
  if ( v6 != v11 )
  {
    Value = Array::FindValue(v6, (int)aP1); /*0x634d39*/
    v13 = Value == -1 ? 0 : *(_DWORD *)(v6[1] + 4 * Value);
    v14 = *(_BYTE **)(v13 + 4); /*0x634d4d*/
    qmemcpy(v28, v14, sizeof(v28)); /*0x634d59*/
    v14 += 108; /*0x634d59*/
    v29 = *(_WORD *)v14; /*0x634d5b*/
    v30 = v14[2]; /*0x634d5d*/
    v23 = (int *)*(this + 12); /*0x634d63*/
    v15 = v23; /*0x634d5e*/
    if ( v23 ) /*0x634d67*/
    {
      ScenarioClassActionCoords = GetScenarioClassActionCoords(v27, v28); /*0x634d75*/
      v17 = *ScenarioClassActionCoords; /*0x634d7a*/
      v18 = 0; /*0x634d7c*/
      v25 = ScenarioClassActionCoords[1]; /*0x634d83*/
      for ( i = ScenarioClassActionCoords[2]; v18 < (int)v15; ++v18 ) /*0x634d8e*/
      {
        v19 = *(_DWORD **)(v24[9] + 4 * v18); /*0x634d97*/
        if ( v19[28] ) /*0x634d9a*/
        {
          qmemcpy(v31, v19, sizeof(v31)); /*0x634dad*/
          v20 = v19 + 27; /*0x634dad*/
          v32 = *(_WORD *)v20; /*0x634daf*/
          v33 = *((_BYTE *)v20 + 2); /*0x634dbc*/
          v21 = GetScenarioClassActionCoords(v27, v31); /*0x634dbd*/
          if ( v17 == *v21 && v25 == v21[1] && i == v21[2] ) /*0x634dda*/
            return v18; /*0x634df3*/
          v15 = v23; /*0x634ddc*/
        }
      }
    }
  }
  return -1; /*0x634de7*/
}
}
// 0x634E10
namespace gamemd {
ObjectClass * * ScriptAction::PlaceObject(AbstractClass * aP1)
{
  _DWORD *v3; // edi
  int result; // eax
  int Type; // esi
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  _BYTE *v14; // esi
  _DWORD *v15; // eax
  _DWORD *v16; // ebp
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // ebp
  int v24; // ecx
  _BYTE *v25; // esi
  _DWORD *ActionCoords; // eax
  _DWORD *v27; // eax
  int v28; // ecx
  int v29; // [esp+10h] [ebp-118h] BYREF
  int v30; // [esp+14h] [ebp-114h]
  _DWORD v31[3]; // [esp+18h] [ebp-110h] BYREF
  _DWORD v32[3]; // [esp+24h] [ebp-104h] BYREF
  int v33[3]; // [esp+30h] [ebp-F8h] BYREF
  int v34[3]; // [esp+3Ch] [ebp-ECh] BYREF
  _BYTE v35[108]; // [esp+48h] [ebp-E0h] BYREF
  __int16 v36; // [esp+B4h] [ebp-74h]
  char v37; // [esp+B6h] [ebp-72h]
  _BYTE v38[108]; // [esp+B8h] [ebp-70h] BYREF
  __int16 v39; // [esp+124h] [ebp-4h]
  char v40; // [esp+126h] [ebp-2h]

  v3 = (_DWORD *)*aP1; /*0x634e23*/
  result = ScriptAction::FindBuildingMatch(*aP1); /*0x634e27*/
  if ( result == -1 ) /*0x634e31*/
  {
    Type = BuildingClass::GetType(v3); /*0x634e3e*/
    v6 = *(_DWORD *)(Type + 4); /*0x634e40*/
    v29 = this; /*0x634e47*/
    v7 = (*(int (__thiscall **)(int, int *))(v6 + 16))(Type + 4, &v29); /*0x634e4f*/
    if ( v7 == -1 ) /*0x634e55*/
    {
      v8 = 0; /*0x634e57*/
    }
    else
    {
      v9 = *(_DWORD *)(Type + 20); /*0x634e5b*/
      if ( v9 == 1 ) /*0x634e61*/
      {
        v8 = this; /*0x634e63*/
      }
      else
      {
        v10 = v7 - 1; /*0x634e67*/
        if ( v10 < 0 ) /*0x634e68*/
          v10 = v9 - 1; /*0x634e6a*/
        v8 = ArrayClass::GetAt_Wrap(v10); /*0x634e75*/
      }
    }
    v11 = BuildingClass::GetType(v3); /*0x634e79*/
    v12 = *(_DWORD *)(v11 + 20) - 1; /*0x634e81*/
    if ( v12 >= 0 ) /*0x634e82*/
      v13 = *(_DWORD *)(*(_DWORD *)(v11 + 8) + 4 * v12); /*0x634e8b*/
    else
      v13 = 0; /*0x634e84*/
    if ( v8 == v13 ) /*0x634e90*/
    {
      aP1[2] = -1; /*0x634e96*/
      return -1; /*0x634e92*/
    }
    else
    {
      v14 = *(_BYTE **)(ScriptAction::FindItemByValue(v3) + 4); /*0x634ead*/
      qmemcpy(v35, v14, sizeof(v35)); /*0x634ebb*/
      v14 += 108; /*0x634ebb*/
      v36 = *(_WORD *)v14; /*0x634ebd*/
      v37 = v14[2]; /*0x634ebf*/
      v15 = __2_YAPAXI_Z(0x78u); /*0x634ec0*/
      v16 = 0; /*0x634ec5*/
      if ( v15 ) /*0x634ecc*/
      {
        v15[28] = 0; /*0x634ece*/
        *(_BYTE *)v15 = 0; /*0x634ed1*/
        v15[29] = -1; /*0x634ed4*/
        v16 = v15; /*0x634edb*/
      }
      v17 = v16[28]; /*0x634ee8*/
      qmemcpy(v16, v35, 0x6Cu); /*0x634eeb*/
      *((_WORD *)v16 + 54) = v36; /*0x634eed*/
      *((_BYTE *)v16 + 110) = v37; /*0x634eef*/
      v16[28] = v17 + 1; /*0x634ef4*/
      v18 = *(_DWORD *)(this + 40); /*0x634ef7*/
      if ( *(_DWORD *)(this + 48) < v18 /*0x634f1c*/
        || (*(_BYTE *)(this + 45) || !v18)
        && (v19 = *(_DWORD *)(this + 52), v19 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 32) + 8))(this + 32, v18 + v19, 0) )
      {
        v20 = *(_DWORD *)(this + 48); /*0x634f23*/
        v21 = *(_DWORD *)(this + 36); /*0x634f26*/
        *(_DWORD *)(this + 48) = v20 + 1; /*0x634f2c*/
        *(_DWORD *)(v21 + 4 * v20) = v16; /*0x634f2f*/
      }
      v22 = *(_DWORD *)(this + 168); /*0x634f35*/
      result = *(_DWORD *)(this + 48) - 1; /*0x634f3b*/
      v29 = result; /*0x634f3e*/
      if ( v22 > 0 && *(_DWORD *)(this + 176) == -1 ) /*0x634f53*/
      {
        *(_DWORD *)(this + 176) = -1; /*0x634f59*/
        if ( *(_DWORD *)(this + 168) ) /*0x634f5f*/
        {
          v23 = 0; /*0x634f79*/
          qmemcpy(v35, (const void *)(this + 56), sizeof(v35)); /*0x634f7b*/
          v24 = *(_DWORD *)(this + 48); /*0x634f7d*/
          v36 = *(_WORD *)(this + 164); /*0x634f80*/
          v37 = *(_BYTE *)(this + 166); /*0x634f84*/
          v30 = v24; /*0x634f85*/
          if ( v24 > 0 ) /*0x634f89*/
          {
            while ( 1 ) /*0x634fa2*/
            {
              v25 = *(_BYTE **)(*(_DWORD *)(this + 36) + 4 * v23); /*0x634fa2*/
              qmemcpy(v38, v25, sizeof(v38)); /*0x634fa5*/
              v25 += 108; /*0x634fa5*/
              v39 = *(_WORD *)v25; /*0x634fa7*/
              v40 = v25[2]; /*0x634fad*/
              ActionCoords = GetScenarioClassActionCoords(v34, v35); /*0x634fae*/
              v31[0] = *ActionCoords; /*0x634fb5*/
              v31[1] = ActionCoords[1]; /*0x634fc0*/
              v31[2] = ActionCoords[2]; /*0x634fce*/
              v27 = GetScenarioClassActionCoords(v33, v38); /*0x634fd2*/
              v32[0] = *v27; /*0x634fd9*/
              v32[1] = v27[1]; /*0x634fe5*/
              v32[2] = v27[2]; /*0x634ff0*/
              if ( Coord3D::Equals(v31, v32) ) /*0x634ff4*/
                break; /*0x634ff4*/
              if ( ++v23 >= v30 ) /*0x635004*/
                goto LABEL_30; /*0x635004*/
            }
            *(_DWORD *)(this + 176) = v23; /*0x635008*/
  LABEL_30:
            result = v29; /*0x63500e*/
          }
        }
      }
      *(_DWORD *)(this + 180) = -1; /*0x63501b*/
      aP1[2] = result; /*0x635026*/
    }
  }
  else
  {
    v28 = *(_DWORD *)(*(_DWORD *)(this + 36) + 4 * result); /*0x635038*/
    *(_DWORD *)(v28 + 116) = -1; /*0x63503b*/
    *(_DWORD *)(this + 180) = -1; /*0x63503e*/
    ++*(_DWORD *)(v28 + 112); /*0x635048*/
    aP1[2] = result; /*0x63504b*/
  }
  return result; /*0x634e95*/
}
}
// 0x6351E0
namespace gamemd {
int ScriptAction::DecrementRefCount(int a2)
{
  int result; // eax

  *(_BYTE *)(a2 + 12) = 0; /*0x6351e4*/
  result = *(this + 42) - 1; /*0x6351ee*/
  *(this + 42) = result; /*0x6351ef*/
  if ( !result ) /*0x6351f5*/
    *(this + 44) = -1; /*0x6351f7*/
  return result; /*0x635201*/
}
}
// 0x635F20
namespace gamemd {
void * ScriptAction::Constructor(AbstractClass * aP1)
{
  *(this + 2) = 0; /*0x635f27*/
  *(this + 3) = 0; /*0x635f2a*/
  *((_BYTE *)this + 16) = 1; /*0x635f2d*/
  *((_BYTE *)this + 17) = 0; /*0x635f31*/
  *(this + 1) = &DynamicVectorClass<PlanningNodeClass *>::`vftable'; /*0x635f34*/
  *(this + 6) = 10; /*0x635f3b*/
  *(this + 5) = 0; /*0x635f42*/
  *((_BYTE *)this + 28) = 0; /*0x635f45*/
  *((_BYTE *)this + 29) = 0; /*0x635f48*/
  *((_BYTE *)this + 152) = 0; /*0x635f4b*/
  *((_BYTE *)this + 153) = 0; /*0x635f51*/
  *(this + 35) = -1; /*0x635f5b*/
  *(this + 36) = -1; /*0x635f61*/
  *(this + 37) = -1; /*0x635f67*/
  *this = aP1; /*0x635f6d*/
  return this; /*0x635f6f*/
}
}
// 0x636570
namespace gamemd {
int ScriptAction::Check()
{
  int v1; // eax
  BOOL result; // eax

  result = 0; /*0x636586*/
  if ( *(this + 5) > 0 ) /*0x636575*/
  {
    v1 = *(this + 35); /*0x636577*/
    if ( v1 == -1 || v1 > 0 ) /*0x636584*/
      return 1; /*0x636575*/
  }
  return result; /*0x63658b*/
}
}
// 0x636CE0
namespace gamemd {
int ScriptAction::ClearBuildingState()
{
  int v1; // eax
  _DWORD *v2; // edx
  int v3; // esi
  int i; // eax
  int v5; // ebp
  int result; // eax
  int j; // ebx
  _DWORD *v8; // edx
  int v9; // esi
  int v10; // [esp+10h] [ebp-4h]

  if ( *(_BYTE *)(this + 152) ) /*0x636ce1*/
  {
    v1 = *(_DWORD *)(this + 148); /*0x636cf2*/
    if ( v1 != -1 ) /*0x636cfa*/
    {
      v2 = *(_DWORD **)(*(_DWORD *)(this + 8) + 4 * v1); /*0x636cff*/
      if ( v2 ) /*0x636d04*/
      {
        v2[45] = -1; /*0x636d06*/
        v3 = v2[12]; /*0x636d0c*/
        for ( i = 0; i < v3; *(_DWORD *)(*(_DWORD *)(v2[9] + 4 * i - 4) + 116) = -1 ) /*0x636d13*/
          ++i; /*0x636d18*/
        v2[43] = -1; /*0x636d24*/
      }
    }
    *(_BYTE *)(this + 152) = 0; /*0x636d2a*/
  }
  v5 = *(_DWORD *)(this + 20); /*0x636d37*/
  v10 = v5; /*0x636d3c*/
  result = *(_DWORD *)(this + 140) != -1 ? *(_DWORD *)(this + 140) : 0;
  for ( j = result; j < v5; ++j ) /*0x636d4b*/
  {
    result = *(_DWORD *)(this + 8); /*0x636d4d*/
    v8 = *(_DWORD **)(result + 4 * j); /*0x636d50*/
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
          *(_DWORD *)(*(_DWORD *)(v8[9] + 4 * result - 4) + 116) = -1; /*0x636d70*/
        }
        while ( result < v9 ); /*0x636d73*/
        v5 = v10; /*0x636d75*/
      }
      v8[43] = -1; /*0x636d79*/
    }
  }
  *(_DWORD *)(this + 140) = -1; /*0x636d84*/
  return result; /*0x636d8a*/
}
}
// 0x637E00
namespace gamemd {
TechnoClass * * ScriptAction::DispatchBuilding()
{
  char v2; // al
  _DWORD *BuildingLoadQueue; // eax
  int v4; // ebp
  _DWORD *v5; // edi
  int v6; // ecx
  _DWORD *v7; // esi
  int TypeBuildingClass; // eax
  int v9; // esi
  char v10; // bl
  char v11; // al
  int v12; // ebp
  int v13; // edi
  _DWORD *v14; // ebx
  _DWORD **v15; // esi
  int *CoordsScriptAction; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // edi
  _DWORD *v19; // eax
  _BYTE *v20; // ecx
  int v21; // ebx
  int v22; // edi
  _DWORD *v23; // ebp
  int v24; // esi
  _DWORD *v25; // edi
  int v26; // eax
  int v27; // ebx
  int *v28; // eax
  int v29; // edi
  _DWORD *v30; // eax
  int v32; // [esp+10h] [ebp-38h] BYREF
  _DWORD v33[2]; // [esp+14h] [ebp-34h] BYREF
  int v34; // [esp+1Ch] [ebp-2Ch]
  int v35; // [esp+20h] [ebp-28h]
  _DWORD v36[3]; // [esp+24h] [ebp-24h] BYREF
  int v37; // [esp+30h] [ebp-18h] BYREF
  int v38; // [esp+34h] [ebp-14h]
  int v39; // [esp+38h] [ebp-10h]
  _DWORD v40[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v2 = *this; /*0x637e09*/
  if ( *this == 43 ) /*0x637e0d*/
  {
    v32 = *(this + 2); /*0x637e17*/
    LOBYTE(BuildingLoadQueue) = g_SidebarState; /*0x637e1b*/
    v4 = 0; /*0x637e20*/
    for ( v33[0] = g_SidebarState; v4 < v33[0]; ++v4 ) /*0x637e28*/
    {
      v5 = (_DWORD *)*((_DWORD *)g_TechnoClass_Count + v4); /*0x637e34*/
      v6 = v5[135]; /*0x637e37*/
      v7 = *(_DWORD **)(v6 + 48); /*0x637e3d*/
      if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v6) && HouseClass_Player ) /*0x637e50*/
        v7 = (_DWORD *)*((_DWORD *)HouseClass_Player + 12); /*0x637e52*/
      if ( (_DWORD *)v32 == v7 ) /*0x637e59*/
      {
        TypeBuildingClass = BuildingClass::GetType(v5); /*0x637e5d*/
        v9 = TypeBuildingClass; /*0x637e62*/
        if ( TypeBuildingClass ) /*0x637e66*/
        {
          v10 = ScriptAction::Check(TypeBuildingClass); /*0x637e71*/
          ScriptAction::ClearBuildingState(v9); /*0x637e73*/
          v11 = ScriptAction::IsBuildingTypeMatch(v5); /*0x637e7a*/
          if ( !v10 ) /*0x637e81*/
          {
            if ( v11 ) /*0x637e85*/
              BuildingClass::GetObjectData(v5); /*0x637e89*/
          }
        }
      }
      LOBYTE(BuildingLoadQueue) = v33[0]; /*0x637e8e*/
    }
  }
  else if ( v2 == 42 ) /*0x637ea1*/
  {
    BuildingLoadQueue = BuildingLoadQueue::Find(this + 7); /*0x637eaa*/
    v32 = (int)BuildingLoadQueue; /*0x637eb1*/
    if ( BuildingLoadQueue ) /*0x637eb5*/
    {
      BuildingLoadQueue = BuildingLoadQueue::GetNext(this + 12); /*0x637ebe*/
      if ( BuildingLoadQueue ) /*0x637ec5*/
      {
        BuildingLoadQueue = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*BuildingLoadQueue + 88))( /*0x637ed4*/
                                        BuildingLoadQueue,
                                        &v37);
        v12 = *BuildingLoadQueue; /*0x637ed7*/
        v13 = 0; /*0x637ed9*/
        v14 = (_DWORD *)*(this + 2); /*0x637edb*/
        v34 = BuildingLoadQueue[1]; /*0x637ee2*/
        v35 = BuildingLoadQueue[2]; /*0x637ee9*/
        LOBYTE(BuildingLoadQueue) = dword_AC4B40; /*0x637eed*/
        v33[0] = dword_AC4B40; /*0x637ef4*/
        if ( dword_AC4B40 > 0 ) /*0x637ef8*/
        {
          while ( 1 ) /*0x637f0c*/
          {
            v36[0] = v12; /*0x637f0c*/
            v15 = (_DWORD **)*((_DWORD *)dword_AC4B34 + v13); /*0x637f10*/
            v36[1] = v34; /*0x637f1a*/
            v36[2] = v35; /*0x637f1e*/
            CoordsScriptAction = ScriptAction::GetCoords(v15, v40); /*0x637f22*/
            v37 = *CoordsScriptAction; /*0x637f29*/
            v38 = CoordsScriptAction[1]; /*0x637f30*/
            v39 = CoordsScriptAction[2]; /*0x637f40*/
            if ( Coord3D::Equals(&v37, v36) ) /*0x637f44*/
            {
              v17 = (_DWORD *)Function::6342D0(0); /*0x637f51*/
              BuildingLoadQueue = (_DWORD *)TeamClass::GetLeaderIndex(v17); /*0x637f58*/
              if ( v14 == (_DWORD *)-1 || v14 == BuildingLoadQueue ) /*0x637f64*/
                break; /*0x637f64*/
            }
            LOBYTE(BuildingLoadQueue) = v33[0]; /*0x637f66*/
            if ( ++v13 >= v33[0] ) /*0x637f6d*/
              return (char)BuildingLoadQueue; /*0x637f6d*/
          }
          if ( v15 ) /*0x637f79*/
          {
            v18 = (_DWORD *)v32; /*0x637f7f*/
            v19 = (_DWORD *)BuildingClass::GetType((_DWORD *)v32); /*0x637f85*/
            if ( !v19 ) /*0x637f8c*/
            {
              if ( __2_YAPAXI_Z(0x9Cu) ) /*0x637f93*/
                v32 = ScriptAction::Constructor(v32); /*0x637fa7*/
              else
                v32 = 0; /*0x637fad*/
              ScriptActionVector::PushBack(&v32); /*0x637fbf*/
              BuildingClass::SetType(v18, v32); /*0x637fcb*/
              v19 = (_DWORD *)v32; /*0x637fd0*/
            }
            v33[0] = v15; /*0x637fdc*/
            if ( (*(int (__thiscall **)(_DWORD *, _DWORD *))(v19[1] + 16))(v19 + 1, v33) == -1 ) /*0x637fec*/
              LOBYTE(BuildingLoadQueue) = CompleteBuildingProduction(v18, v15); /*0x637ffb*/
            else
              LOBYTE(BuildingLoadQueue) = BuildingClass::CompleteProduction(v18, v15); /*0x637fee*/
          }
        }
      }
    }
  }
  else
  {
    v20 = this + 7; /*0x63800a*/
    if ( v2 == 44 ) /*0x63800d*/
    {
      BuildingLoadQueue = BuildingLoadQueue::GetNext(v20); /*0x638013*/
      if ( BuildingLoadQueue ) /*0x63801a*/
      {
        BuildingLoadQueue = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*BuildingLoadQueue + 88))( /*0x638029*/
                                        BuildingLoadQueue,
                                        v40);
        v21 = *BuildingLoadQueue; /*0x63802c*/
        v22 = 0; /*0x63802e*/
        v23 = (_DWORD *)*(this + 2); /*0x638030*/
        v38 = BuildingLoadQueue[1]; /*0x638037*/
        v39 = BuildingLoadQueue[2]; /*0x63803e*/
        LOBYTE(BuildingLoadQueue) = dword_AC4B40; /*0x638042*/
        v33[0] = dword_AC4B40; /*0x638049*/
        if ( dword_AC4B40 > 0 ) /*0x63804d*/
        {
          while ( 1 ) /*0x638060*/
          {
            v24 = *((_DWORD *)dword_AC4B34 + v22); /*0x638060*/
            if ( (unsigned __int8)ScriptAction::GetActionCoordinates(v21, v38, v39) ) /*0x638073*/
            {
              BuildingLoadQueue = (_DWORD *)TeamClass::GetLeaderIndex(***(_DWORD ****)(v24 + 4)); /*0x638083*/
              if ( v23 == (_DWORD *)-1 || v23 == BuildingLoadQueue ) /*0x63808f*/
                break; /*0x63808f*/
            }
            LOBYTE(BuildingLoadQueue) = v33[0]; /*0x638091*/
            if ( ++v22 >= v33[0] ) /*0x638098*/
              return (char)BuildingLoadQueue; /*0x638098*/
          }
          if ( v24 ) /*0x6380a4*/
          {
            v25 = ***(_DWORD ****)(v24 + 4); /*0x6380ab*/
            v26 = BuildingClass::GetType(v25); /*0x6380af*/
            v33[0] = v24; /*0x6380bc*/
            v27 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)(v26 + 4) + 16))(v26 + 4, v33); /*0x6380c7*/
            v28 = (int *)BuildingClass::GetType(v25); /*0x6380c9*/
            v29 = ArrayClass::GetAt_Wrap(v28, v27 + 1); /*0x6380d9*/
            LOBYTE(BuildingLoadQueue) = BuildingClass::FlushScriptActions(v24); /*0x6380db*/
            if ( v29 ) /*0x6380e2*/
            {
              LOBYTE(BuildingLoadQueue) = (_BYTE)HouseClass_Player; /*0x6380e4*/
              if ( v23 == *((_DWORD **)HouseClass_Player + 12) ) /*0x6380ec*/
                g_ScriptActionPool = v29; /*0x6380ee*/
            }
          }
        }
      }
    }
    else
    {
      v30 = BuildingLoadQueue::Find(v20); /*0x6380fc*/
      LOBYTE(BuildingLoadQueue) = ExecuteActionPlanManager(v30, this); /*0x638105*/
    }
  }
  return (char)BuildingLoadQueue; /*0x637e97*/
}
}
// 0x638C70
namespace gamemd {
int ScriptAction::IsBuildingTypeMatch()
{
  int v2; // edi
  _BYTE *WaypointCoords; // eax
  char v5; // al
  _BYTE v6[8]; // [esp+8h] [ebp-10h] BYREF
  int v7; // [esp+10h] [ebp-8h]

  if ( !this ) /*0x638c79*/
    return 0; /*0x638c79*/
  v2 = ((int (__thiscall *)(_DWORD **))(*this)[97])(this); /*0x638c83*/
  if ( v2 == 5 ) /*0x638c88*/
    return 1; /*0x638c91*/
  if ( ((WaypointCoords = ScriptAction::GetWaypointCoords(v6, *(this + 173)), /*0x638cc0*/
         v7 = *(_DWORD *)WaypointCoords,
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
}
// 0x639A50
namespace gamemd {
int ScriptAction::ExecutePlacement(int a1, int a2, int a3, long long a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29)
{
  int result; // eax
  _DWORD *v31; // ebx
  _BYTE *WaypointCoords; // eax
  _DWORD *v33; // eax
  _BYTE *v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // edx
  int Type; // ebx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // edx
  _DWORD *v44; // [esp+Ch] [ebp-18h]
  int v45; // [esp+10h] [ebp-14h]
  int v46; // [esp+14h] [ebp-10h]
  int v47; // [esp+18h] [ebp-Ch]
  char v48[8]; // [esp+1Ch] [ebp-8h] BYREF

  result = *(_DWORD *)(a2 + 16); /*0x639a53*/
  v46 = a2; /*0x639a5c*/
  v47 = result; /*0x639a62*/
  v45 = 0; /*0x639a66*/
  if ( result > 0 ) /*0x639a6a*/
  {
    while ( 1 ) /*0x639a88*/
    {
      v31 = **(_DWORD ***)(*(_DWORD *)(a2 + 4) + 4 * v45); /*0x639a88*/
      WaypointCoords = ScriptAction::GetWaypointCoords(v48, v31); /*0x639a8b*/
      *(_DWORD *)((char *)&a4 + 3) = *(_DWORD *)WaypointCoords; /*0x639a94*/
      HIBYTE(a4) = WaypointCoords[4]; /*0x639a9b*/
      v33 = __2_YAPAXI_Z(0x10u); /*0x639a9f*/
      if ( v33 ) /*0x639aa9*/
      {
        *v33 = 0; /*0x639aab*/
        v33[1] = 0; /*0x639aad*/
        v33[2] = -1; /*0x639ab0*/
        *((_BYTE *)v33 + 12) = 0; /*0x639ab7*/
        v44 = v33; /*0x639abb*/
      }
      else
      {
        v44 = 0; /*0x639ac1*/
      }
      *v44 = v31; /*0x639acb*/
      v34 = __2_YAPAXI_Z(0x6Fu); /*0x639acd*/
      if ( v34 ) /*0x639ad7*/
        *v34 = 0; /*0x639ad9*/
      else
        v34 = 0; /*0x639ade*/
      qmemcpy(v34, &a3, 0x6Cu); /*0x639aeb*/
      *((_WORD *)v34 + 54) = a29; /*0x639aed*/
      v34[110] = BYTE2(a29); /*0x639aef*/
      v44[1] = v34; /*0x639af4*/
      v35 = *(_DWORD *)(a1 + 8); /*0x639af7*/
      if ( *(_DWORD *)(a1 + 16) < v35 /*0x639b1b*/
        || (*(_BYTE *)(a1 + 13) || !v35)
        && (v36 = *(_DWORD *)(a1 + 20), v36 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, v35 + v36, 0) )
      {
        v37 = *(_DWORD *)(a1 + 16); /*0x639b22*/
        v38 = *(_DWORD *)(a1 + 4); /*0x639b25*/
        *(_DWORD *)(a1 + 16) = v37 + 1; /*0x639b2b*/
        *(_DWORD *)(v38 + 4 * v37) = v44; /*0x639b2e*/
      }
      Type = BuildingClass::GetType(v31); /*0x639b38*/
      v40 = *(_DWORD *)(Type + 12); /*0x639b3a*/
      if ( *(_DWORD *)(Type + 20) < v40 /*0x639b62*/
        || (*(_BYTE *)(Type + 17) || !v40)
        && (v41 = *(_DWORD *)(Type + 24), v41 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(Type + 4) + 8))(Type + 4, v40 + v41, 0) )
      {
        v42 = *(_DWORD *)(Type + 20); /*0x639b69*/
        v43 = *(_DWORD *)(Type + 8); /*0x639b6c*/
        *(_DWORD *)(Type + 20) = v42 + 1; /*0x639b72*/
        *(_DWORD *)(v43 + 4 * v42) = a1; /*0x639b75*/
      }
      if ( *(_DWORD *)(Type + 140) == -1 ) /*0x639b7f*/
        *(_DWORD *)(Type + 140) = *(_DWORD *)(Type + 20) - 1; /*0x639b85*/
      ScriptAction::PlaceObject(a1, v44); /*0x639b8e*/
      result = ++v45; /*0x639b9b*/
      if ( v45 >= v47 ) /*0x639ba2*/
        break; /*0x639ba2*/
      a2 = v46; /*0x639a74*/
    }
  }
  return result; /*0x639baa*/
}
}
// 0x63A8E0
namespace gamemd {
AbstractClass * * ScriptAction::HitTest(MouseClass * aP0, int a2)
{
  int v3; // esi
  int v4; // edi
  int v5; // ebp
  _DWORD **v6; // esi
  int *ScreenPos; // eax
  int *v8; // eax
  int *v9; // eax
  int *v10; // eax
  int v11; // [esp+10h] [ebp-3Ch] BYREF
  int v12; // [esp+18h] [ebp-34h]
  int v13; // [esp+1Ch] [ebp-30h] BYREF
  int v14; // [esp+20h] [ebp-2Ch]
  int v15; // [esp+24h] [ebp-28h]
  int v16; // [esp+28h] [ebp-24h]
  int v17; // [esp+2Ch] [ebp-20h] BYREF
  int v18; // [esp+30h] [ebp-1Ch]
  int v19; // [esp+34h] [ebp-18h]
  int v20; // [esp+38h] [ebp-14h]
  _DWORD v21[4]; // [esp+3Ch] [ebp-10h] BYREF

  if ( !byte_AC4CF4 ) /*0x63a8ee*/
    return 0; /*0x63a8f9*/
  v3 = g_ScriptState; /*0x63a902*/
  v4 = 0; /*0x63a90c*/
  v12 = g_ScriptState; /*0x63a910*/
  if ( !g_ScriptPool /*0x63aa32*/
    || (v9 = ScriptAction::GetScreenPos((_DWORD **)g_ScriptPool, &v11),
        v10 = ComputeBounds(&v17, 8, *v9, v9[1]),
        v13 = *v10,
        v14 = v10[1],
        v15 = v10[2],
        v16 = v10[3],
        ShrinkRect(&v13, 4),
        aP0 < v13)
    || aP0 >= v13 + v15
    || a2 < v14
    || a2 >= v14 + v16 )
  {
    v11 = 0; /*0x63a91a*/
  LABEL_5:
    v5 = dword_AC4B40; /*0x63a91e*/
    if ( dword_AC4B40 > 0 ) /*0x63a926*/
    {
      while ( 1 ) /*0x63a936*/
      {
        v6 = (_DWORD **)*((_DWORD *)dword_AC4B34 + v4); /*0x63a936*/
        ScreenPos = ScriptAction::GetScreenPos(v6, &v13); /*0x63a93b*/
        v8 = ComputeBounds(v21, 8, *ScreenPos, ScreenPos[1]); /*0x63a950*/
        v17 = *v8; /*0x63a957*/
        v18 = v8[1]; /*0x63a95e*/
        v19 = v8[2]; /*0x63a965*/
        v20 = v8[3]; /*0x63a970*/
        ShrinkRect(&v17, 4); /*0x63a979*/
        if ( aP0 >= v17 && aP0 < v17 + v19 && a2 >= v18 && a2 < v18 + v20 ) /*0x63a9a4*/
          break; /*0x63a9a4*/
        if ( ++v4 >= v5 ) /*0x63a9ad*/
          goto LABEL_22; /*0x63a9ad*/
      }
      if ( v6 && BuildingClass::CheckBuildability(v6) != -1 ) /*0x63aa73*/
        return 1; /*0x63aa7e*/
  LABEL_22:
      v3 = v12; /*0x63aa81*/
    }
    g_ScriptState = 0; /*0x63aa87*/
    return v3 || v11; /*0x63aa87*/
  }
  v11 = g_ScriptPool; /*0x63aa3f*/
  if ( !g_ScriptPool || g_ScriptPool != v3 ) /*0x63aa4b*/
    goto LABEL_5; /*0x63aa4b*/
  Mission::SetAndCall((int *)&MapClass_Instance, 0, 1); /*0x63aa59*/
  ExportSelectionAsScriptAction(); /*0x63aa5e*/
  return v3 || v11; /*0x63a8f0*/
}
}
// 0x63B550
namespace gamemd {
int ScriptAction::ProcessIdleAction()
{
  _DWORD **Type; // esi
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // edi
  void *v6; // ebx
  _DWORD *v7; // eax
  bool v8; // dl
  _BYTE *v9; // esi
  int *ActionCoords; // eax
  _DWORD *v11; // eax
  int *v12; // eax
  int v13; // eax
  int v14; // edi
  _DWORD **v15; // ebp
  int *Viewport; // eax
  int *v17; // eax
  int v18; // esi
  int v19; // eax
  int *v20; // eax
  int v21; // eax
  int v22; // esi
  int v23; // edi
  int *v24; // eax
  int *v25; // eax
  int *v26; // eax
  int v27; // eax
  char v28; // al
  int v29; // edx
  int *v30; // eax
  char v31; // al
  int v32; // edi
  int v33; // esi
  int *v34; // eax
  int *v35; // eax
  int *v36; // eax
  int *v37; // eax
  int v38; // esi
  int v39; // eax
  int *v40; // eax
  int v41; // eax
  int v42; // esi
  int v43; // edi
  int *v44; // eax
  int *v45; // eax
  int v46; // esi
  int *v47; // eax
  int *v48; // eax
  int v49; // esi
  int *ScreenPos; // eax
  int v51; // edi
  const void *v52; // eax
  const void *v53; // esi
  int *v54; // eax
  bool v56; // [esp+2Eh] [ebp-172h]
  char v57; // [esp+2Fh] [ebp-171h]
  int v58; // [esp+30h] [ebp-170h] BYREF
  int v59; // [esp+34h] [ebp-16Ch]
  int v60; // [esp+38h] [ebp-168h]
  int v61; // [esp+3Ch] [ebp-164h]
  int v62; // [esp+40h] [ebp-160h] BYREF
  int v63; // [esp+44h] [ebp-15Ch]
  int v64; // [esp+48h] [ebp-158h]
  int v65; // [esp+4Ch] [ebp-154h] BYREF
  int v66; // [esp+50h] [ebp-150h]
  int v67; // [esp+58h] [ebp-148h] BYREF
  int v68; // [esp+5Ch] [ebp-144h]
  int v69; // [esp+68h] [ebp-138h] BYREF
  int v70; // [esp+6Ch] [ebp-134h]
  int v71; // [esp+70h] [ebp-130h]
  int v72; // [esp+74h] [ebp-12Ch]
  int v73; // [esp+78h] [ebp-128h] BYREF
  int v74; // [esp+7Ch] [ebp-124h]
  int v75; // [esp+80h] [ebp-120h]
  int v76; // [esp+84h] [ebp-11Ch]
  _DWORD **v77; // [esp+88h] [ebp-118h] BYREF
  int v78; // [esp+8Ch] [ebp-114h]
  int v79[4]; // [esp+94h] [ebp-10Ch] BYREF
  int v80; // [esp+A4h] [ebp-FCh] BYREF
  int v81; // [esp+A8h] [ebp-F8h]
  int v82; // [esp+ACh] [ebp-F4h]
  int v83; // [esp+B0h] [ebp-F0h]
  _DWORD v84[3]; // [esp+B4h] [ebp-ECh] BYREF
  _WORD v85[56]; // [esp+C0h] [ebp-E0h] BYREF
  char v86[112]; // [esp+130h] [ebp-70h] BYREF

  Type = (_DWORD **)BuildingClass::GetType((_DWORD *)this); /*0x63b565*/
  v3 = *(_DWORD *)this; /*0x63b567*/
  v77 = Type; /*0x63b56d*/
  v4 = (_DWORD *)(*(int (__thiscall **)(int, int *))(v3 + 88))(this, &v69); /*0x63b571*/
  v84[0] = *v4; /*0x63b576*/
  v84[1] = v4[1]; /*0x63b580*/
  v84[2] = v4[2]; /*0x63b59d*/
  Coord::To_Screen(g_TacticalClass_Instance, v84, &v67); /*0x63b5a4*/
  v68 += g_Map_VisibleRect; /*0x63b5c1*/
  v66 = v68; /*0x63b5c5*/
  v67 += DSurface_ViewBounds; /*0x63b5ce*/
  v65 = v67; /*0x63b5d2*/
  v5 = PackRGBFromBytes(&byte_A83CD9); /*0x63b5dd*/
  if ( this ) /*0x63b5df*/
  {
    v6 = (void *)PackRGBFromBytes(&byte_A80220); /*0x63b5f1*/
    if ( g_ScriptActionPool ) /*0x63b5f5*/
    {
      if ( Array::FindValue((int *)g_ScriptActionPool, this) != -1 ) /*0x63b600*/
        goto LABEL_7; /*0x63b600*/
    }
    else if ( *(_BYTE *)(this + 131) ) /*0x63b604*/
    {
      goto LABEL_7; /*0x63b60c*/
    }
  }
  v6 = (void *)v5; /*0x63b60e*/
  LABEL_7:
  if ( Type ) /*0x63b612*/
    v7 = Type[5]; /*0x63b618*/
  else
    v7 = 0; /*0x63b614*/
  v56 = (int)v7 > 0; /*0x63b622*/
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) != 5 /*0x63b653*/
    && !(unsigned __int8)BuildingClass::IsIdleWithNoCaptives(this)
    && (v56 || *(_BYTE *)(this + 131));
  v62 = 4; /*0x63b657*/
  if ( Type && ((*Type)[43] == 28 || (*Type)[45] == 28) ) /*0x63b67a*/
  {
    v9 = (char *)Type + 29; /*0x63b680*/
    qmemcpy(v85, v9, 0x6Cu); /*0x63b696*/
    v9 += 108; /*0x63b696*/
    v85[54] = *(_WORD *)v9; /*0x63b698*/
    LOBYTE(v85[55]) = v9[2]; /*0x63b69e*/
    ActionCoords = GetScenarioClassActionCoords(&v69, v85); /*0x63b69f*/
    v58 = *ActionCoords; /*0x63b6a6*/
    v59 = ActionCoords[1]; /*0x63b6b1*/
    v60 = ActionCoords[2]; /*0x63b6be*/
    v11 = Coord3D::Set(&v65, -1, -1, -1); /*0x63b6c2*/
    if ( Coord3D::Equals(&v58, v11) && this ) /*0x63b6d7*/
    {
      v12 = (int *)(*(int (__thiscall **)(int, _DWORD ***))(*(_DWORD *)this + 88))(this, &v77); /*0x63b6e3*/
      v58 = *v12; /*0x63b6e8*/
      v59 = v12[1]; /*0x63b6ef*/
      v13 = v12[2]; /*0x63b6f3*/
    }
    else
    {
      v13 = v60; /*0x63b6f8*/
    }
    v75 = v13; /*0x63b704*/
    v73 = v58; /*0x63b708*/
    v74 = v59; /*0x63b71c*/
    Coord::To_Screen(g_TacticalClass_Instance, &v73, &v62); /*0x63b720*/
    v14 = g_Map_VisibleRect + v63; /*0x63b739*/
    v15 = (_DWORD **)(DSurface_ViewBounds + v62); /*0x63b73f*/
    v63 += g_Map_VisibleRect; /*0x63b741*/
    Viewport = Display::GetViewport(v79); /*0x63b745*/
    v58 = *Viewport; /*0x63b74c*/
    v59 = Viewport[1]; /*0x63b753*/
    v60 = Viewport[2]; /*0x63b75f*/
    v61 = Viewport[3]; /*0x63b76f*/
    v17 = ComputeBounds(v79, 6, v67, v68); /*0x63b778*/
    v69 = *v17; /*0x63b77f*/
    v70 = v17[1]; /*0x63b787*/
    v71 = v17[2]; /*0x63b78e*/
    v72 = v17[3]; /*0x63b79b*/
    (*(void (__thiscall **)(int, int *, int *, void *))(*(_DWORD *)DSurface_Composite + 84))( /*0x63b7ab*/
      DSurface_Composite,
      &v58,
      &v69,
      v6);
    v18 = -1; /*0x63b7ae*/
    do /*0x63b7cc*/
      DrawTacticalLine2D(v18++, (int)v6, v67, v68, (int)v15, v14, 0); /*0x63b7c3*/
    while ( v18 <= 1 ); /*0x63b7cc*/
    if ( SLOBYTE(v85[6]) == 11 ) /*0x63b7d9*/
    {
      v19 = Memory::Alloc76(); /*0x63b7db*/
    }
    else
    {
      if ( SLOBYTE(v85[6]) != 29 ) /*0x63b7e5*/
      {
  LABEL_32:
        v25 = Display::GetViewport(v79); /*0x63b8ac*/
        v58 = *v25; /*0x63b8b7*/
        v59 = v25[1]; /*0x63b8c0*/
        v60 = v25[2]; /*0x63b8c7*/
        v61 = v25[3]; /*0x63b8d5*/
        v26 = ComputeBounds(v79, 6, (int)v15, v14); /*0x63b8de*/
        v69 = *v26; /*0x63b8e5*/
        v70 = v26[1]; /*0x63b8ed*/
        v71 = v26[2]; /*0x63b8f4*/
        v72 = v26[3]; /*0x63b901*/
        LOBYTE(v27) = (*(int (__thiscall **)(int, int *, int *, void *))(*(_DWORD *)DSurface_Composite + 84))( /*0x63b911*/
                        DSurface_Composite,
                        &v58,
                        &v69,
                        v6);
        return v27; /*0x63b91e*/
      }
      v19 = Factory::IdleHandler(); /*0x63b7eb*/
    }
    if ( v19 != -1 ) /*0x63b7f3*/
    {
      v65 = v67; /*0x63b801*/
      v77 = v15; /*0x63b813*/
      v78 = v14; /*0x63b817*/
      v66 = v68; /*0x63b81b*/
      v20 = Coord2D::Sub(&v65, &v58, &v77); /*0x63b81f*/
      Vector::2DMagnitudeMath(v20); /*0x63b826*/
      if ( v21 >= 37 ) /*0x63b82e*/
      {
        v22 = ((int)v77 + v65) / 2 - 10; /*0x63b857*/
        v23 = (v78 + v66) / 2 - 10; /*0x63b85a*/
        v24 = Display::GetViewport(v79); /*0x63b85d*/
        v69 = *v24; /*0x63b864*/
        v70 = v24[1]; /*0x63b86f*/
        v71 = v24[2]; /*0x63b878*/
        v72 = v24[3]; /*0x63b886*/
        Rect::Set(&v80, v22, v23, 21, 21); /*0x63b88a*/
        (*(void (__thiscall **)(int, int *, int *, void *))(*(_DWORD *)DSurface_Composite + 84))( /*0x63b8a5*/
          DSurface_Composite,
          &v69,
          &v80,
          v6);
        v14 = v63; /*0x63b8a8*/
      }
    }
    goto LABEL_32; /*0x63b8a8*/
  }
  if ( !v8 ) /*0x63b921*/
  {
    LOBYTE(v27) = v56; /*0x63bd19*/
    if ( !v56 ) /*0x63bd1f*/
      return v27; /*0x63bd1f*/
    goto LABEL_55; /*0x63bd1f*/
  }
  v28 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1196))(this); /*0x63b92c*/
  v29 = *(_DWORD *)this; /*0x63b932*/
  HIBYTE(v64) = v28; /*0x63b937*/
  v57 = (*(int (__thiscall **)(int))(v29 + 1200))(this); /*0x63b945*/
  v30 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 1068))(this, &v58); /*0x63b94f*/
  v69 = *v30; /*0x63b957*/
  v70 = v30[1]; /*0x63b95e*/
  v71 = v30[2]; /*0x63b975*/
  Coord::To_Screen(g_TacticalClass_Instance, &v69, &v62); /*0x63b979*/
  v31 = *(_BYTE *)(this + 129); /*0x63b992*/
  v32 = DSurface_ViewBounds + v62; /*0x63b998*/
  v33 = g_Map_VisibleRect + v63; /*0x63b99a*/
  v62 += DSurface_ViewBounds; /*0x63b99c*/
  v63 += g_Map_VisibleRect; /*0x63b9a2*/
  if ( v31 ) /*0x63b9a6*/
  {
    v34 = Display::GetViewport(v79); /*0x63b9ac*/
    v73 = *v34; /*0x63b9b3*/
    v74 = v34[1]; /*0x63b9bc*/
    v75 = v34[2]; /*0x63b9ca*/
    v76 = v34[3]; /*0x63b9d6*/
    v35 = ComputeBounds(v79, 6, v32, v33); /*0x63b9da*/
    v58 = *v35; /*0x63b9e1*/
    v59 = v35[1]; /*0x63b9e9*/
    v60 = v35[2]; /*0x63b9f0*/
    v61 = v35[3]; /*0x63b9fd*/
    LOBYTE(v27) = (*(int (__thiscall **)(int, int *, int *, void *))(*(_DWORD *)DSurface_Composite + 84))( /*0x63ba0d*/
                    DSurface_Composite,
                    &v73,
                    &v58,
                    v6);
    return v27; /*0x63ba1a*/
  }
  v36 = Display::GetViewport(v79); /*0x63ba1f*/
  v73 = *v36; /*0x63ba26*/
  v74 = v36[1]; /*0x63ba2d*/
  v75 = v36[2]; /*0x63ba34*/
  v76 = v36[3]; /*0x63ba44*/
  v37 = ComputeBounds(v79, 6, v67, v68); /*0x63ba55*/
  v58 = *v37; /*0x63ba5c*/
  v59 = v37[1]; /*0x63ba64*/
  v60 = v37[2]; /*0x63ba71*/
  v61 = v37[3]; /*0x63ba78*/
  (*(void (__thiscall **)(int, int *, int *, void *))(*(_DWORD *)DSurface_Composite + 84))( /*0x63ba88*/
    DSurface_Composite,
    &v73,
    &v58,
    v6);
  v38 = -1; /*0x63ba8b*/
  do /*0x63baad*/
    DrawTacticalLine2D(v38++, (int)v6, v67, v68, v32, v63, 0); /*0x63baa4*/
  while ( v38 <= 1 ); /*0x63baad*/
  if ( !HIBYTE(v64) || v57 ) /*0x63babd*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 11 ) /*0x63bae8*/
    {
      v39 = Memory::Alloc76(); /*0x63baee*/
      goto LABEL_44; /*0x63baee*/
    }
  }
  else if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 1204))(this) == 29 ) /*0x63bacd*/
  {
    v39 = Factory::IdleHandler(); /*0x63bad3*/
  LABEL_44:
    if ( v39 != -1 ) /*0x63baf6*/
    {
      v59 = v63; /*0x63bb08*/
      v73 = v67; /*0x63bb0c*/
      v58 = v32; /*0x63bb1e*/
      v74 = v68; /*0x63bb22*/
      v40 = Coord2D::Sub(&v73, &v67, &v58); /*0x63bb26*/
      Vector::2DMagnitudeMath(v40); /*0x63bb2d*/
      if ( v41 >= 37 ) /*0x63bb35*/
      {
        v42 = (v58 + v73) / 2 - 10; /*0x63bb61*/
        v43 = (v74 + v59) / 2 - 10; /*0x63bb64*/
        v44 = Display::GetViewport(&v67); /*0x63bb67*/
        v80 = *v44; /*0x63bb6e*/
        v81 = v44[1]; /*0x63bb7c*/
        v82 = v44[2]; /*0x63bb88*/
        v83 = v44[3]; /*0x63bb99*/
        Rect::Set(v79, v42, v43, 21, 21); /*0x63bba0*/
        (*(void (__thiscall **)(int, int *, int *, void *))(*(_DWORD *)DSurface_Composite + 84))( /*0x63bbbb*/
          DSurface_Composite,
          &v80,
          v79,
          v6);
        v32 = v62; /*0x63bbbe*/
      }
    }
  }
  v45 = Display::GetViewport(v79); /*0x63bbc2*/
  v46 = v63; /*0x63bbcd*/
  v58 = *v45; /*0x63bbd1*/
  v59 = v45[1]; /*0x63bbda*/
  v60 = v45[2]; /*0x63bbe1*/
  v61 = v45[3]; /*0x63bbef*/
  v47 = ComputeBounds(v79, 6, v32, v63); /*0x63bbf8*/
  v80 = *v47; /*0x63bbff*/
  v81 = v47[1]; /*0x63bc0a*/
  v82 = v47[2]; /*0x63bc14*/
  v83 = v47[3]; /*0x63bc24*/
  (*(void (__thiscall **)(int, int *, int *, void *))(*(_DWORD *)DSurface_Composite + 84))( /*0x63bc3a*/
    DSurface_Composite,
    &v58,
    &v80,
    v6);
  if ( v57 ) /*0x63bc43*/
  {
    v48 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 1208))(this, &v73); /*0x63bc53*/
    v58 = *v48; /*0x63bc5b*/
    v59 = v48[1]; /*0x63bc62*/
    v60 = v48[2]; /*0x63bc79*/
    Coord::To_Screen(g_TacticalClass_Instance, &v58, &v65); /*0x63bc7d*/
    v49 = DSurface_ViewBounds + v65; /*0x63bc98*/
    v66 += g_Map_VisibleRect; /*0x63bc9a*/
    DrawTacticalFillScanline(v32, v63, DSurface_ViewBounds + v65, v66); /*0x63bcad*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 1204))(this) == 29 && Factory::IdleHandler() != -1 ) /*0x63bcca*/
      BuildingClass::DrawSelectionBlip(v6, v32, v63, v49, v66); /*0x63bcda*/
    LOBYTE(v27) = DSurface::DrawMarker(v6, v49, v66); /*0x63bce7*/
    return v27; /*0x63bcf6*/
  }
  LOBYTE(v27) = v56; /*0x63bcf7*/
  if ( !v56 ) /*0x63bcfd*/
    return v27; /*0x63bcfd*/
  v66 = v46; /*0x63bd03*/
  Type = v77; /*0x63bd07*/
  v65 = v32; /*0x63bd0b*/
  v62 = 3; /*0x63bd0f*/
  LABEL_55:
  v77 = (_DWORD **)ArrayClass::GetAt_Wrap((int *)Type, 0); /*0x63bd25*/
  ScreenPos = ScriptAction::GetScreenPos(v77, &v58); /*0x63bd3b*/
  v51 = *ScreenPos; /*0x63bd40*/
  v67 = *ScreenPos; /*0x63bd45*/
  v68 = ScreenPos[1]; /*0x63bd4c*/
  v52 = (const void *)BuildingClass::GetTypeEntry(this); /*0x63bd50*/
  v53 = v52; /*0x63bd55*/
  if ( v52 ) /*0x63bd59*/
  {
    v54 = ActionScenarioClassCoordToScreen(&v58, v52, this); /*0x63bd62*/
    v67 = *v54; /*0x63bd69*/
    v51 = v67; /*0x63bd6d*/
    v68 = v54[1]; /*0x63bd72*/
  }
  DSurface::DrawMarker(v6, v65, v66); /*0x63bd82*/
  DrawTacticalFillScanline(v65, v66, v51, v68); /*0x63bd9d*/
  if ( v53 ) /*0x63bda4*/
    DSurface::DrawMarker(v6, v51, v68); /*0x63bdae*/
  qmemcpy(v85, (const void *)BuildingClass::CopyTypeDataForRender(v86, this), 0x6Fu); /*0x63bdd3*/
  v27 = BuildingClass::updateAnimationState(v85); /*0x63bddf*/
  if ( v27 != -1 ) /*0x63bde7*/
    LOBYTE(v27) = BuildingClass::DrawSelectionBlip(v6, v65, v66, v67, v68); /*0x63bdff*/
  return v27; /*0x63b914*/
}
}
// 0x63CE40
namespace gamemd {
int ScriptAction::DrawPlacementMarker()
{
  int DrawColor; // edi
  int *Viewport; // eax
  int v4; // edx
  int v5; // eax
  _DWORD *ScenarioClassActionCoords; // eax
  int v8[2]; // [esp+8h] [ebp-44h] BYREF
  _DWORD v9[3]; // [esp+10h] [ebp-3Ch] BYREF
  int v10[4]; // [esp+1Ch] [ebp-30h] BYREF
  _DWORD v11[4]; // [esp+2Ch] [ebp-20h] BYREF
  _DWORD v12[4]; // [esp+3Ch] [ebp-10h] BYREF

  DrawColor = BuildingClass::GetDrawColor((int)this); /*0x63ce50*/
  Viewport = Display::GetViewport(v10); /*0x63ce52*/
  v12[0] = *Viewport; /*0x63ce59*/
  v12[1] = Viewport[1]; /*0x63ce60*/
  v12[2] = Viewport[2]; /*0x63ce67*/
  v4 = Viewport[3]; /*0x63ce6b*/
  v5 = *(this + 1); /*0x63ce6e*/
  v12[3] = v4; /*0x63ce71*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v10, *(_BYTE **)(*(_DWORD *)v5 + 4)); /*0x63ce7e*/
  v9[0] = *ScenarioClassActionCoords; /*0x63ce85*/
  v9[1] = ScenarioClassActionCoords[1]; /*0x63ce8c*/
  v9[2] = ScenarioClassActionCoords[2]; /*0x63cea3*/
  Coord::To_Screen(g_TacticalClass_Instance, v9, v8); /*0x63cea7*/
  v8[0] += DSurface_ViewBounds; /*0x63cec7*/
  v11[0] = v8[0] - 4 + 1; /*0x63cedb*/
  v11[1] = g_Map_VisibleRect + v8[1] - 4 + 1; /*0x63cedf*/
  v11[2] = 6; /*0x63cef5*/
  v11[3] = 6; /*0x63cef9*/
  return (*(int (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)DSurface_Composite + 16))( /*0x63cf07*/
           DSurface_Composite,
           v12,
           v11,
           DrawColor);
}
}
// 0x6DD300
namespace gamemd {
AbstractClass * * ScriptAction::Serialize(char * Buffer)
{
  int v3; // eax
  int v4; // ebx
  const char *v5; // ebp
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  char *v10; // edx
  const char *v12; // eax
  const char *v13; // eax
  int v14; // [esp+Ch] [ebp-Ch]
  int v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]
  char *Buffera; // [esp+1Ch] [ebp+4h]

  v3 = ScriptAction::GetActionTypeInfo(*(_DWORD *)(this + 44)); /*0x6dd30b*/
  v4 = 0; /*0x6dd316*/
  v5 = 0; /*0x6dd318*/
  v14 = *(_DWORD *)(this + 144); /*0x6dd31d*/
  v16 = 0; /*0x6dd321*/
  v15 = 0; /*0x6dd325*/
  switch ( v3 ) /*0x6dd329*/
  {
    case '/': /*0x6dd329*/
      v4 = 9; /*0x6dd32b*/
      v5 = (const char *)(this + 84); /*0x6dd330*/
      goto LABEL_33; /*0x6dd333*/
    case '.': /*0x6dd329*/
      v4 = 11; /*0x6dd340*/
      v16 = *(_DWORD *)(this + 144); /*0x6dd345*/
      v15 = *(_DWORD *)(this + 72); /*0x6dd349*/
      goto LABEL_33; /*0x6dd34d*/
    case '+': /*0x6dd329*/
      v4 = 9; /*0x6dd357*/
      v5 = (const char *)(this + 84); /*0x6dd35c*/
      goto LABEL_33; /*0x6dd35f*/
    case '-': /*0x6dd329*/
      v4 = 10; /*0x6dd369*/
      v5 = (const char *)(this + 84); /*0x6dd36e*/
      goto LABEL_33; /*0x6dd371*/
  }
  v6 = *(_DWORD *)(this + 48); /*0x6dd376*/
  if ( v6 ) /*0x6dd37b*/
  {
    if ( v3 == 40 ) /*0x6dd380*/
    {
      v4 = 5; /*0x6dd388*/
      v14 = *(_DWORD *)(v6 + 152); /*0x6dd38d*/
      v5 = (const char *)(v6 + 36); /*0x6dd391*/
      goto LABEL_33; /*0x6dd394*/
    }
    if ( v3 == 12 || v3 == 34 ) /*0x6dd3a5*/
    {
      v4 = 1; /*0x6dd3ad*/
      v14 = *(_DWORD *)(v6 + 152); /*0x6dd3b2*/
      v5 = (const char *)(v6 + 36); /*0x6dd3b6*/
      goto LABEL_33; /*0x6dd3b9*/
    }
  }
  v7 = *(_DWORD *)(this + 80); /*0x6dd3be*/
  if ( v7 && v3 == 11 ) /*0x6dd3c8*/
  {
    v4 = 2; /*0x6dd3d0*/
    v14 = *(_DWORD *)(v7 + 152); /*0x6dd3d5*/
    v5 = (const char *)(v7 + 36); /*0x6dd3d9*/
    goto LABEL_33; /*0x6dd3dc*/
  }
  v8 = *(_DWORD *)(this + 76); /*0x6dd3de*/
  if ( v8 && v3 == 26 ) /*0x6dd3e8*/
  {
    v4 = 3; /*0x6dd3f0*/
    v14 = *(_DWORD *)(v8 + 152); /*0x6dd3f5*/
    v5 = (const char *)(v8 + 36); /*0x6dd3f9*/
    goto LABEL_33; /*0x6dd3fc*/
  }
  if ( v3 == 39 ) /*0x6dd401*/
  {
    v5 = (const char *)(this + 109); /*0x6dd406*/
    v4 = 4; /*0x6dd40b*/
    if ( !*(_BYTE *)(this + 109) || this == -109 ) /*0x6dd414*/
      v5 = a1_1; /*0x6dd416*/
  }
  else
  {
    switch ( v3 ) /*0x6dd420*/
    {
      case 4: /*0x6dd420*/
        v4 = 6; /*0x6dd422*/
        v9 = Team_Helper_752460(); /*0x6dd427*/
        break;
      case 3: /*0x6dd420*/
      case 38: /*0x6dd420*/
        v4 = 7; /*0x6dd44f*/
        v9 = VocClass::GetSampleNameByIndex(); /*0x6dd454*/
        break;
      case 1: /*0x6dd420*/
        v4 = 8; /*0x6dd443*/
        v9 = ScriptAction::GetArgumentString(*(_DWORD *)(this + 144)); /*0x6dd448*/
        break;
      default:
        goto LABEL_33; /*0x6dd43b*/
    }
    v5 = (const char *)v9; /*0x6dd459*/
  }
  LABEL_33:
  v10 = &Buffer[strlen(Buffer)]; /*0x6dd45b*/
  Buffera = v10; /*0x6dd472*/
  switch ( v4 ) /*0x6dd476*/
  {
    case 11: /*0x6dd476*/
      return sprintf( /*0x6dd49d*/
               v10,
               "%d,%d,%d,%d,%d,%d,%d,%d",
               *(_DWORD *)(this + 44),
               11,
               v16,
               *(_DWORD *)(this + 52),
               *(_DWORD *)(this + 56),
               *(_DWORD *)(this + 60),
               *(_DWORD *)(this + 64),
               v15);
    case 10: /*0x6dd476*/
      v12 = (const char *)Waypoint::To_String(*(_DWORD *)(this + 68)); /*0x6dd4b6*/
      return sprintf( /*0x6dd4dc*/
               Buffera,
               "%d,%d,%s,%d,%d,%d,%d,%s",
               *(_DWORD *)(this + 44),
               10,
               v5,
               *(_DWORD *)(this + 52),
               *(_DWORD *)(this + 56),
               *(_DWORD *)(this + 60),
               *(_DWORD *)(this + 64),
               v12);
    case 5: /*0x6dd476*/
    case 9: /*0x6dd476*/
      return sprintf( /*0x6dd594*/
               v10,
               "%d,%d,%s,%d,%d,%d,%d,%d",
               *(_DWORD *)(this + 44),
               v4,
               v5,
               *(_DWORD *)(this + 52),
               *(_DWORD *)(this + 56),
               *(_DWORD *)(this + 60),
               *(_DWORD *)(this + 64),
               *(_DWORD *)(this + 144));
    default:
      v13 = (const char *)Waypoint::To_String(*(_DWORD *)(this + 68)); /*0x6dd4fe*/
      if ( v4 ) /*0x6dd4fc*/
        return sprintf( /*0x6dd524*/
                 Buffera,
                 "%d,%d,%s,%d,%d,%d,%d,%s",
                 *(_DWORD *)(this + 44),
                 v4,
                 v5,
                 *(_DWORD *)(this + 52),
                 *(_DWORD *)(this + 56),
                 *(_DWORD *)(this + 60),
                 *(_DWORD *)(this + 64),
                 v13);
      else
        return sprintf( /*0x6dd560*/
                 Buffera,
                 "%d,%d,%d,%d,%d,%d,%d,%s",
                 *(_DWORD *)(this + 44),
                 0,
                 v14,
                 *(_DWORD *)(this + 52),
                 *(_DWORD *)(this + 56),
                 *(_DWORD *)(this + 60),
                 *(_DWORD *)(this + 64),
                 v13);
  }
}
}
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

  *(_DWORD *)(this + 144) = 0; /*0x6dd5c1*/
  v2 = strtok(0, Delimiter); /*0x6dd5c7*/
  *(_DWORD *)(this + 44) = atoi(v2); /*0x6dd5d8*/
  v3 = strtok(0, Delimiter); /*0x6dd5db*/
  v4 = atoi(v3); /*0x6dd5e6*/
  v5 = strtok(0, Delimiter); /*0x6dd5f7*/
  v6 = atoi(v5); /*0x6dd5fa*/
  switch ( v4 ) /*0x6dd60d*/
  {
    case 0: /*0x6dd60d*/
    case 11: /*0x6dd60d*/
      *(_DWORD *)(this + 144) = v6; /*0x6dd614*/
      break; /*0x6dd61a*/
    case 1: /*0x6dd60d*/
    case 5: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd622*/
      {
        *(_DWORD *)(this + 48) = 0; /*0x6dd624*/
      }
      else if ( strlen(v5) >= 3 ) /*0x6dd63b*/
      {
        *(_DWORD *)(this + 48) = TechnoClass::Create(v5); /*0x6dd654*/
      }
      else
      {
        *(_DWORD *)(this + 48) = *((_DWORD *)g_TeamTypePool + v6); /*0x6dd645*/
      }
      break; /*0x6dd627*/
    case 2: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd65f*/
      {
        *(_DWORD *)(this + 80) = 0; /*0x6dd661*/
      }
      else if ( strlen(v5) >= 3 ) /*0x6dd678*/
      {
        *(_DWORD *)(this + 80) = TagTypeClass::FindOrCreateTriggerType(v5); /*0x6dd691*/
      }
      else
      {
        *(_DWORD *)(this + 80) = *((_DWORD *)dword_8B417C + v6); /*0x6dd682*/
      }
      break; /*0x6dd664*/
    case 3: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd69c*/
      {
        *(_DWORD *)(this + 76) = 0; /*0x6dd69e*/
      }
      else if ( strlen(v5) >= 3 ) /*0x6dd6b5*/
      {
        *(_DWORD *)(this + 76) = TagTypeClass::FindOrCreate(v5); /*0x6dd6cb*/
      }
      else
      {
        *(_DWORD *)(this + 76) = *((_DWORD *)dword_B0E784 + v6); /*0x6dd6bf*/
      }
      break; /*0x6dd6a1*/
    case 4: /*0x6dd60d*/
      if ( v6 == -1 ) /*0x6dd6d3*/
      {
        *(_BYTE *)(this + 109) = 0; /*0x6dd6d5*/
      }
      else
      {
        v7 = v5; /*0x6dd6de*/
        *(_BYTE *)(this + 109) = 0; /*0x6dd6e2*/
        if ( v5 ) /*0x6dd6e5*/
        {
          for ( i = *v5; i; i = *++v7 ) /*0x6dd6e7*/
          {
            if ( (unsigned __int8)i > 0x20u ) /*0x6dd6f1*/
              break; /*0x6dd6f1*/
          }
          if ( *v7 ) /*0x6dd6fb*/
          {
            strncpy((char *)(this + 109), v7, 0x1Fu); /*0x6dd704*/
            *(_BYTE *)(this + 140) = 0; /*0x6dd711*/
            v9 = strlen((const char *)(this + 109)) + 1; /*0x6dd718*/
            v10 = v9 - 1; /*0x6dd71c*/
            if ( v9 != 1 ) /*0x6dd71d*/
            {
              do /*0x6dd726*/
              {
                if ( *(_BYTE *)(v10 + this + 108) > 0x20u ) /*0x6dd723*/
                  break; /*0x6dd723*/
                --v10; /*0x6dd725*/
              }
              while ( v10 ); /*0x6dd726*/
            }
            *(_BYTE *)(v10 + this + 109) = 0; /*0x6dd728*/
          }
        }
      }
      break; /*0x6dd6d9*/
    case 6: /*0x6dd60d*/
      *(_DWORD *)(this + 144) = VocClass::FindByName(v5); /*0x6dd7c3*/
      break; /*0x6dd7c9*/
    case 7: /*0x6dd60d*/
      *(_DWORD *)(this + 144) = VocClass::FindIndex(v5); /*0x6dd7d5*/
      break; /*0x6dd7db*/
    case 8: /*0x6dd60d*/
      *(_DWORD *)(this + 144) = StringList::Find(&g_BuildingTypeClass_Count, v5); /*0x6dd7eb*/
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
      if ( Destination != (char *)(this + 84) ) /*0x6dd81f*/
      {
        qmemcpy((void *)(this + 84), Destination, 0x18u); /*0x6dd82e*/
        *(_BYTE *)(this + 108) = v17; /*0x6dd830*/
      }
      break; /*0x6dd831*/
    default:
      break;
  }
  v11 = strtok(0, Delimiter); /*0x6dd731*/
  *(_DWORD *)(this + 52) = atoi(v11); /*0x6dd74a*/
  v12 = strtok(0, Delimiter); /*0x6dd74d*/
  *(_DWORD *)(this + 56) = atoi(v12); /*0x6dd75f*/
  v13 = strtok(0, Delimiter); /*0x6dd762*/
  *(_DWORD *)(this + 60) = atoi(v13); /*0x6dd774*/
  v14 = strtok(0, Delimiter); /*0x6dd777*/
  *(_DWORD *)(this + 64) = atoi(v14); /*0x6dd789*/
  result = strtok(0, Delimiter); /*0x6dd78c*/
  if ( result ) /*0x6dd796*/
  {
    if ( v4 == 5 || v4 == 9 ) /*0x6dd839*/
    {
      result = (const char *)atoi(result); /*0x6dd7a6*/
      *(_DWORD *)(this + 144) = result; /*0x6dd7ae*/
    }
    else if ( v4 == 11 ) /*0x6dd855*/
    {
      result = (const char *)atoi(result); /*0x6dd858*/
      *(_DWORD *)(this + 72) = result; /*0x6dd860*/
    }
    else
    {
      result = (const char *)String::To_Waypoint(result); /*0x6dd86d*/
      *(_DWORD *)(this + 68) = result; /*0x6dd872*/
    }
  }
  return result; /*0x6dd7b4*/
}
}
// 0x6E1830
namespace gamemd {
unsigned int * ScriptAction::ReadParameter()
{
  int v1; // esi
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *result; // eax
  __int16 v5[2]; // [esp+4h] [ebp-4h] BYREF

  v1 = *this / 256; /*0x6e184b*/
  v2 = *(this + 1) / 256; /*0x6e184e*/
  v5[0] = v1; /*0x6e1851*/
  v5[1] = v2; /*0x6e1856*/
  if ( __PAIR32__(v2, v1) == dword_B0E680 ) /*0x6e186c*/
    return 0; /*0x6e189e*/
  v3 = CellCoord::To_CellObj(&MapClass_Instance, v5); /*0x6e1886*/
  result = Cell::IsBridge(v3); /*0x6e188a*/
  if ( !result ) /*0x6e1891*/
    return CellClass::FindInfantry(v3, 0); /*0x6e1896*/
  return result; /*0x6e189b*/
}
}
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
}
// 0x6E4790
namespace gamemd {
void * ScriptAction::CopyStringField(char * Source)
{
  if ( Source ) /*0x6e4799*/
  {
    strncpy(this, Source, 0x1Fu); /*0x6e47a7*/
    *(this + 31) = 0; /*0x6e47af*/
    return this; /*0x6e47b3*/
  }
  else
  {
    *this = 0; /*0x6e479b*/
    return this; /*0x6e479d*/
  }
}
}
// 0x6E6AB0
namespace gamemd {
unsigned char * ScriptAction::GetWaypointCoords(IUnknown * aP1)
{
  if ( aP1 ) /*0x6e6aba*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*aP1 + 44))(aP1) == 11 ) /*0x6e6ac6*/
    {
      *(this + 4) = 11; /*0x6e6ac8*/
      *(_DWORD *)this = (__int16)aP1[9] + 1000 * (__int16)HIWORD(aP1[9]); /*0x6e6ae7*/
    }
    else
    {
      *(this + 4) = 52; /*0x6e6af2*/
      *(_DWORD *)this = (*(int (__stdcall **)(_DWORD *))(aP1[1] + 16))(aP1 + 1); /*0x6e6afc*/
    }
    return this; /*0x6e6ae9*/
  }
  else
  {
    *(this + 4) = 0; /*0x6e6b05*/
    *(_DWORD *)this = 0; /*0x6e6b09*/
    return this; /*0x6e6b0f*/
  }
}
}
// 0x6FFBE0
namespace gamemd {
TechnoClass * * ScriptAction::ExecuteMissionCmd()
{
  bool v2; // al
  int v3; // edi
  _BYTE *WaypointCoords; // eax
  int result; // eax
  unsigned int v6; // ebx
  int v7; // eax
  _BYTE *v8; // eax
  int v9[27]; // [esp-70h] [ebp-108h] BYREF
  int v10; // [esp-4h] [ebp-9Ch]
  _DWORD v11[2]; // [esp+10h] [ebp-88h] BYREF
  _BYTE v12[8]; // [esp+18h] [ebp-80h] BYREF
  _BYTE v13[8]; // [esp+20h] [ebp-78h] BYREF
  char v14[108]; // [esp+28h] [ebp-70h] BYREF
  __int16 v15; // [esp+94h] [ebp-4h]
  char v16; // [esp+96h] [ebp-2h]
  int v17; // [esp+9Ch] [ebp+4h]
  _DWORD *v18; // [esp+A0h] [ebp+8h]
  _DWORD *v19; // [esp+A4h] [ebp+Ch]
  _DWORD *v20; // [esp+A8h] [ebp+10h]

  v2 = Render_Draw_731BF0() && (*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 1216))(this); /*0x6ffc03*/
  v3 = v17; /*0x6ffc09*/
  if ( (v17 == 2 || v17 == 1) && v2 ) /*0x6ffc1c*/
    v3 = 29; /*0x6ffc1e*/
  if ( FactoryClass::GetFlag() ) /*0x6ffc23*/
  {
    ScriptAction::GetWaypointCoords(&v9[26], v20); /*0x6ffc3d*/
    ScriptAction::GetWaypointCoords(&v9[24], v19); /*0x6ffc4f*/
    ScriptAction::GetWaypointCoords(&v9[22], v18); /*0x6ffc61*/
    WaypointCoords = ScriptAction::GetWaypointCoords(v12, this); /*0x6ffc6c*/
    ScriptAction::InitActionFields( /*0x6ffc8e*/
      v14,
      *((_DWORD *)HouseClass_Player + 12),
      *(_DWORD *)WaypointCoords,
      WaypointCoords[4],
      v3,
      v9[22],
      v9[23],
      v9[24],
      v9[25],
      v9[26],
      v10);
    qmemcpy(v9, v14, sizeof(v9)); /*0x6ffca4*/
    LOWORD(v10) = v15; /*0x6ffca6*/
    BYTE2(v10) = v16; /*0x6ffca8*/
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
    LOBYTE(result) = 0; /*0x6ffcae*/
  }
  else
  {
    if ( g_MoveFeedback ) /*0x6ffccb*/
    {
      switch ( v3 ) /*0x6ffcd4*/
      {
        case 10: /*0x6ffcd4*/
          (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 860))(this); /*0x6ffcda*/
          break;
        case 1: /*0x6ffcd4*/
          (*(void (__thiscall **)(#377 *, _DWORD *))(*(_DWORD *)this + 880))(this, v18); /*0x6ffcef*/
          break;
        case 2: /*0x6ffcd4*/
        case 29: /*0x6ffcd4*/
          (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 872))(this); /*0x6ffd9f*/
          break;
        case 7: /*0x6ffcd4*/
          (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 856))(this); /*0x6ffd15*/
          break;
        case 8: /*0x6ffcd4*/
          (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 868))(this); /*0x6ffd29*/
          break;
        case 16: /*0x6ffcd4*/
          (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 876))(this); /*0x6ffd3a*/
          break;
        default:
          if ( *(int *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 1200) > 0 ) /*0x6ffd59*/
          {
            v6 = Random::State(Randomizer_Global); /*0x6ffd65*/
            v7 = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this); /*0x6ffd6b*/
            v11[0] = *(_DWORD *)this; /*0x6ffd7b*/
            (*(void (__thiscall **)(#377 *, _DWORD))(v11[0] + 852))( /*0x6ffd93*/
              this,
              *(_DWORD *)(*(_DWORD *)(v7 + 1188) + 4 * (v6 % *(_DWORD *)(v7 + 1200))));
          }
          break;
      }
    }
    ScriptAction::GetWaypointCoords(v11, v19); /*0x6ffdb1*/
    ScriptAction::GetWaypointCoords(v12, v18); /*0x6ffdbb*/
    v8 = ScriptAction::GetWaypointCoords(v13, this); /*0x6ffdce*/
    Object_Init(v3, (int)v12, *(_DWORD *)v8, v8[4], (int)v11); /*0x6ffde6*/
    LOBYTE(result) = 1; /*0x6ffdee*/
  }
  return result; /*0x6ffcb0*/
}
}
// 0x721270
namespace gamemd {
void * ScriptAction::GetArgumentString(int a2)
{
  if ( a2 < 0 || a2 >= *(this + 9) ) /*0x72127b*/
    return g_Str_none; /*0x721286*/
  else
    return *(char **)(*(this + 6) + 4 * a2); /*0x721280*/
}
}
// 0x637DB0
namespace gamemd {
bool ScriptAction::SetField10()
{
  return !byte_AC4CF4 || this != (void *)4; /*0x637dc0*/
}
} // namespace gamemd

// 0x638CE0
namespace gamemd {
int ScriptAction::ClassifyAction(int * a1, char * a2)
{
  char v3; // cl
  int *Type; // eax
  int v6; // ecx
  int *v7; // esi
  int Value; // eax
  int v9; // eax
  _BYTE *v10; // esi
  _BYTE v11[108]; // [esp+8h] [ebp-70h] BYREF
  __int16 v12; // [esp+74h] [ebp-4h]
  char v13; // [esp+76h] [ebp-2h]

  v3 = *a2; /*0x638ce8*/
  if ( *a2 == 9 || v3 == 6 || v3 == 7 ) /*0x638cf8*/
    return 0; /*0x638d01*/
  if ( Team_Load(a1, a2[12], *(_DWORD *)(a2 + 14), a2[18]) ) /*0x638d1a*/
    return 0; /*0x638d2a*/
  Type = (int *)BuildingClass::GetType(a1); /*0x638d2d*/
  if ( !Type ) /*0x638d34*/
    return -1; /*0x638d34*/
  v6 = Type[5]; /*0x638d36*/
  if ( v6 <= 0 ) /*0x638d3b*/
    return -1; /*0x638d3b*/
  v7 = *(int **)(Type[2] + 4 * v6 - 4); /*0x638d43*/
  Value = Array::FindValue(v7, *Type); /*0x638d49*/
  if ( Value == -1 ) /*0x638d51*/
    v9 = 0; /*0x638d53*/
  else
    v9 = *(_DWORD *)(v7[1] + 4 * Value); /*0x638d5a*/
  v10 = *(_BYTE **)(v9 + 4); /*0x638d5d*/
  qmemcpy(v11, v10, sizeof(v11)); /*0x638d69*/
  v10 += 108; /*0x638d69*/
  v12 = *(_WORD *)v10; /*0x638d6b*/
  v13 = v10[2]; /*0x638d6d*/
  if ( v11[12] == 7 || v11[12] == 8 || v11[12] == 9 ) /*0x638d80*/
    return 1; /*0x638d8c*/
  if ( (v11[12] == 1 || v11[12] == 11) && (v11[18] == 11 || v11[12] == 11 && !v11[18]) ) /*0x638da7*/
    return 2; /*0x638da9*/
  else
    return -1; /*0x638db5*/
}
} // namespace gamemd

// 0x6E47C0
namespace gamemd {
void * ScriptAction::CopyStructField(void * a2, const void * a3)
{
  if ( a3 != this ) /*0x6e47ca*/
    qmemcpy(this, a3, 0x20u); /*0x6e47d3*/
  qmemcpy(a2, this, 0x20u); /*0x6e47e2*/
  return a2; /*0x6e47e4*/
}
} // namespace gamemd
