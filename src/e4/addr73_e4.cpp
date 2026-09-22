// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_730990_e4.hpp"
#include "e4/classes/E4Recv_730A10_e4.hpp"
#include "e4/classes/E4Recv_7310D0_e4.hpp"
#include "e4/classes/E4Recv_731130_e4.hpp"
#include "e4/classes/E4Recv_7325C0_e4.hpp"
#include "e4/classes/E4Recv_733380_e4.hpp"
#include "e4/classes/E4Recv_7336C0_e4.hpp"
#include "e4/classes/E4Recv_733CD0_e4.hpp"
#include "e4/classes/E4Recv_734F50_e4.hpp"
#include "e4/classes/E4Recv_734F80_e4.hpp"
#include "e4/classes/E4Recv_736C10_e4.hpp"
#include "e4/classes/E4Recv_736DF0_e4.hpp"
#include "e4/classes/E4Recv_737180_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"

// 0x730A90
namespace gamemd {
int AddMessageListPlayerMessage(CellStruct * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall AddMessageListPlayerMessage(CellStruct *a1, int a2)
{

  if ( a2 == -1 ) /*0x730a93*/
    a2 = 240; /*0x730a95*/
  int v2 = 3; /*0x730aa3*/
  if ( HouseClass_Player ) /*0x730aa8*/
    v2 = HouseClass_Player[1].field_24; /*0x730aaa*/
  return MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, a1, v2, (IUnknown *)0x4046, a2, 1); /*0x730ac9*/
}
}
} // namespace gamemd

// 0x730AF0
namespace gamemd {
char ProcessSelectionExperience()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void ProcessSelectionExperience()
{
  #375 **v1; // esi
  wchar_t *v3; // ebp
  wchar_t *v14; // [esp+14h] [ebp-4h]
  int v0; // eax
  LOBYTE(v0) = (_BYTE)g_SelectionManager; /*0x730af3*/
  char v13 = 0; /*0x730afe*/
  if ( (int)g_SelectionManager <= 0 ) /*0x730b03*/
    return v0; /*0x730b03*/
  LOBYTE(v0) = (_BYTE)g_ObjectClass_CurrentCount; /*0x730b09*/
  if ( !*(_DWORD *)g_ObjectClass_CurrentCount
    || (v1 = *(#375 ***)g_ObjectClass_CurrentCount,
        v0 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)g_ObjectClass_CurrentCount + 44))(*(_DWORD *)g_ObjectClass_CurrentCount),
        v0 != 6)
    || (v0 = (*((int (__thiscall **)(#375 **))*v1 + 258))(v1), v0 <= 0)
    || (LOBYTE(v0) = House::IsHumanPlayer(v1[135]), !(_BYTE)v0) )
  {
    v3 = g_SelectionManager; /*0x730b71*/
    int v4 = 0; /*0x730b77*/
    char v11 = 0; /*0x730b7b*/
    char v12 = 0; /*0x730b80*/
    v14 = g_SelectionManager; /*0x730b85*/
    if ( (int)g_SelectionManager <= 0 )
    {
LABEL_24:
      int v6 = 0; /*0x730c19*/
      if ( (int)v3 > 0 )
      {
        do
        {
          _BYTE * v7 = (_BYTE *)*((_DWORD *)g_ObjectClass_CurrentCount + v6); /*0x730c29*/
          if ( v7
            && ((*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v7 + 160))(*((_DWORD *)g_ObjectClass_CurrentCount + v6))
             || (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 156))(v7))
            && (v7[20] & 1) != 0
            && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 784))(v7)
            && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 788))(v7)
            && !v7[664] )
          {
            _DWORD * v8 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 44))(v7) == 15 ? (_DWORD *)v7 : 0;
            _BYTE * v9 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 44))(v7) == 1 ? v7 : 0;
            if ( (!v8 || !TechnoClass::GetTypeFlag(v8) || !v11 || !v12 || !TechnoClass::IsMission27to30(v8)) /*0x730d06*/
              && (!v9
               || !*(_BYTE *)(*((_DWORD *)v9 + 433) + 3603)
               || !v11
               || !v12
               || !(unsigned __int8)Event_Process_746D90(v9)) )
            {
              if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int))(*(_DWORD *)v7 + 884))(v7, 9) ) /*0x730d15*/
                v13 = 1; /*0x730d1f*/
            }
            v3 = v14; /*0x730d24*/
          }
          ++v6; /*0x730d28*/
        }
        while ( v6 < (int)v3 );
        LOBYTE(v0) = v13; /*0x730d31*/
        if ( v13 ) /*0x730d37*/
          goto LABEL_47; /*0x730d37*/
      }
      return v0; /*0x730d37*/
    }
    while ( 1 ) /*0x730b95*/
    {
      _DWORD * v5 = (_DWORD *)*((_DWORD *)g_ObjectClass_CurrentCount + v4); /*0x730b95*/
      if ( v5 ) /*0x730b9a*/
      {
        if ( (*(int (__thiscall **)(_DWORD))(*v5 + 44))(*((_DWORD *)g_ObjectClass_CurrentCount + v4)) == 15 /*0x730baa*/
          && TechnoClass::GetTypeFlag(v5) )
        {
          if ( !TechnoClass::IsMission27to30(v5) ) /*0x730bbc*/
            goto LABEL_17; /*0x730bbc*/
          LOBYTE(v0) = v12; /*0x730bbe*/
          v11 = 1; /*0x730bc2*/
          if ( v12 ) /*0x730bc9*/
            goto LABEL_24; /*0x730bc9*/
        }
        else
        {
          v0 = (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5); /*0x730be0*/
          if ( v0 == 1 ) /*0x730be6*/
          {
            LOBYTE(v0) = *(_BYTE *)(v5[433] + 3603); /*0x730bee*/
            if ( (_BYTE)v0 ) /*0x730bf6*/
            {
              if ( (unsigned __int8)Event_Process_746D90(v5) ) /*0x730bfa*/
              {
                LOBYTE(v0) = v12; /*0x730c03*/
                v11 = 1; /*0x730c07*/
                if ( v12 ) /*0x730c0e*/
                  goto LABEL_24; /*0x730c0e*/
                goto LABEL_23; /*0x730c0e*/
              }
LABEL_17:
              LOBYTE(v0) = v11; /*0x730bcd*/
              v12 = 1; /*0x730bd1*/
              if ( v11 ) /*0x730bd8*/
                goto LABEL_24; /*0x730bd8*/
            }
          }
        }
      }
LABEL_23:
      if ( ++v4 >= (int)v3 ) /*0x730c13*/
        goto LABEL_24; /*0x730c13*/
    }
  }
  LOBYTE(v0) = (_BYTE)g_ObjectClass_CurrentCount; /*0x730b41*/
  _BYTE * v2 = *(_BYTE **)g_ObjectClass_CurrentCount; /*0x730b46*/
  if ( *(_DWORD *)g_ObjectClass_CurrentCount ) /*0x730b46*/
  {
    if ( (v2[20] & 1) != 0 ) /*0x730b54*/
    {
      LOBYTE(v0) = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v2 + 884))(v2, 9); /*0x730b5e*/
      if ( (_BYTE)v0 ) /*0x730b66*/
LABEL_47:
        LOBYTE(v0) = PlayVocClass(g_RulesClass_Instance->?[2], 0x2000, 1.0, 0); /*0x730d39*/
    }
  }
  return v0; /*0x730d55*/
}
}
} // namespace gamemd

// 0x730D60
namespace gamemd {
char sub_730D60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_730D60()
{
  char result; // al
  wchar_t *v8; // [esp+10h] [ebp-4h]
  if ( FactoryClass::GetFlag() ) /*0x730d65*/
    return System_Get(); /*0x730d6e*/
  result = (char)g_SelectionManager; /*0x730d79*/
  if ( (int)g_SelectionManager > 0 )
  {
    int v1 = 0; /*0x730d86*/
    char v2 = 1; /*0x730d88*/
    v8 = g_SelectionManager; /*0x730d8c*/
    do
    {
      _BYTE * v3 = (_BYTE *)*((_DWORD *)g_ObjectClass_CurrentCount + v1); /*0x730d9b*/
      if ( v3 && (v3[20] & 1) != 0 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 160))(*((_DWORD *)g_ObjectClass_CurrentCount + v1))
          && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 156))(v3)
          && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 44))(v3) != 6 )
        {
          int v4 = *(_DWORD *)v3; /*0x730dd8*/
          int v5 = (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)v3 + 452))(v3, 0, 0); /*0x730de0*/
          result = (*(int (__thiscall **)(_BYTE *, int, int))(v4 + 888))(v3, 11, v5); /*0x730deb*/
          v2 = result; /*0x730df1*/
          if ( !result ) /*0x730df5*/
            return result; /*0x730df5*/
        }
        else if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 44))(v3) == 1
               && (*((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 44))(v3) == 1
                   ? (_DWORD *)(v3 + 728)
                   : (_DWORD *)728)
                || *(_BYTE *)(*((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 44))(v3) == 1
                              ? (_DWORD *)(v3 + 1732)
                              : (_DWORD *)1732)
                            + 3598)) )
        {
          int v6 = *(_DWORD *)v3; /*0x730e43*/
          int v7 = (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)v3 + 452))(v3, 0, 0); /*0x730e4b*/
          result = (*(int (__thiscall **)(_BYTE *, int, int))(v6 + 888))(v3, 11, v7); /*0x730e56*/
          v2 = result; /*0x730e5c*/
          if ( !result ) /*0x730e60*/
            return result; /*0x730e60*/
        }
      }
      result = (char)v8; /*0x730e62*/
      ++v1; /*0x730e66*/
    }
    while ( v1 < (int)v8 );
    if ( v2 ) /*0x730e71*/
      return PlayVocClass(g_RulesClass_Instance->?[0], 0x2000, 1.0, 0); /*0x730e8a*/
  }
  return result; /*0x730d73*/
}
}
} // namespace gamemd

// 0x731130
namespace gamemd {
char E4Recv_731130::sub_731130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_731130(char *this)
{

  int v1 = g_SidebarState - 1; /*0x731138*/
  if ( g_SidebarState - 1 < 0 ) /*0x73113f*/
    return 1; /*0x7311a6*/
  while ( 1 )
  {
    int v3 = *((_DWORD *)g_TechnoClass_Count + v1); /*0x731147*/
    if ( v3 && !*(_BYTE *)(v3 + 129) )
    {
      if ( g_GameMode_Current[0] ? House::IsHumanPlayer(*(#375 **)(v3 + 540)) : *(_BYTE *)(*(_DWORD *)(v3 + 540) + 493) )
      {
        char * v5 = *(char **)(v3 + 532); /*0x73117e*/
        if ( v5 != this - 1 ) /*0x731189*/
          goto LABEL_17; /*0x731189*/
        if ( !*(_BYTE *)(v3 + 131) ) /*0x731193*/
          return 0; /*0x731193*/
        if ( v5 != this - 1 ) /*0x731197*/
        {
LABEL_17:
          if ( *(_BYTE *)(v3 + 131) ) /*0x731199*/
            return 0; /*0x7311a6*/
        }
      }
    }
    if ( --v1 < 0 ) /*0x7311a4*/
      return 1; /*0x7311a4*/
  }
}
}
} // namespace gamemd

// 0x731AA0
namespace gamemd {
char sub_731AA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_731AA0()
{
  wchar_t *v0; // edi
  v0 = g_SelectionManager; /*0x731aa3*/
  int v1 = 0; /*0x731aa9*/
  if ( (int)g_SelectionManager <= 0 ) /*0x731aad*/
    return 1; /*0x731ad8*/
  while ( 1 ) /*0x731ab4*/
  {
    _BYTE * v2 = (_BYTE *)*((_DWORD *)g_ObjectClass_CurrentCount + v1); /*0x731ab4*/
    if ( v2 ) /*0x731ab9*/
    {
      if ( (v2[20] & 1) != 0 && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 1216))(v2) ) /*0x731ac9*/
        break; /*0x731ac9*/
    }
    if ( ++v1 >= (int)v0 ) /*0x731ad6*/
      return 1; /*0x731ad6*/
  }
  return 0; /*0x731ad8*/
}
}
} // namespace gamemd

// 0x731EB0
namespace gamemd {
unsigned int * sub_731EB0(unsigned char (__fastcall *a1)(int, int) a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall sub_731EB0(unsigned __int8 (__fastcall *a1)(int, int), int a2)
{
  _DWORD *v3; // esi
  int v4; // ebp
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v13; // [esp+14h] [ebp-4h]

  _DWORD * v2 = __2_YAPAXI_Z(0x18u); /*0x731ec0*/
  if ( v2 ) /*0x731ecc*/
  {
    v2[1] = 0; /*0x731ece*/
    v2[2] = 0; /*0x731ed1*/
    *((_BYTE *)v2 + 12) = 1; /*0x731ed4*/
    *((_BYTE *)v2 + 13) = 0; /*0x731ed8*/
    *v2 = &vt_DynamicVectorClass_TechnoClass; /*0x731edb*/
    v2[5] = 10; /*0x731ee1*/
    v2[4] = 0; /*0x731ee8*/
    v3 = v2; /*0x731eeb*/
  }
  else
  {
    v3 = 0; /*0x731eef*/
  }
  v4 = 0; /*0x731ef6*/
  v13 = g_SidebarState; /*0x731efa*/
  if ( g_SidebarState <= 0 ) /*0x731efe*/
    return v3; /*0x731f62*/
  do /*0x731f56*/
  {
    v5 = *((_DWORD *)g_TechnoClass_Count + v4); /*0x731f0a*/
    if ( a1(v5, a2) ) /*0x731f0f*/
    {
      v6 = v3[2]; /*0x731f17*/
      if ( v3[4] < v6 /*0x731f39*/
        || (*((_BYTE *)v3 + 13) || !v6)
        && (v7 = v3[5], v7 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v6 + v7, 0) )
      {
        v8 = v3[4]; /*0x731f40*/
        v9 = v3[1]; /*0x731f43*/
        v3[4] = v8 + 1; /*0x731f49*/
        *(_DWORD *)(v9 + 4 * v8) = v5; /*0x731f4c*/
      }
    }
    ++v4; /*0x731f53*/
  }
  while ( v4 < v13 ); /*0x731f56*/
  return v3; /*0x731f5b*/
}
}
} // namespace gamemd

// 0x731F70
namespace gamemd {
unsigned int * TechnoClass_GatherFiltered(unsigned char (__fastcall *a1)(int, int) a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall TechnoClass_GatherFiltered(unsigned __int8 (__fastcall *a1)(int, int), int a2)
{
  _DWORD *v3; // esi
  int v4; // ebp
  int CoordData; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int Height; // [esp+18h] [ebp-4h]

  _DWORD * v2 = __2_YAPAXI_Z(0x18u); /*0x731f80*/
  if ( v2 ) /*0x731f8c*/
  {
    v2[1] = 0; /*0x731f8e*/
    v2[2] = 0; /*0x731f91*/
    *((_BYTE *)v2 + 12) = 1; /*0x731f94*/
    *((_BYTE *)v2 + 13) = 0; /*0x731f98*/
    *v2 = &vt_DynamicVectorClass_TechnoClass; /*0x731f9b*/
    v2[5] = 10; /*0x731fa1*/
    v2[4] = 0; /*0x731fa8*/
    v3 = v2; /*0x731fab*/
  }
  else
  {
    v3 = 0; /*0x731faf*/
  }
  v4 = 0; /*0x731fbc*/
  Height = GetHeightMap(g_TacticalClass_Instance); /*0x731fc0*/
  if ( Height <= 0 ) /*0x731fc4*/
    return v3; /*0x73203d*/
  do /*0x732031*/
  {
    CoordData = GetCoordDataMap(v4); /*0x731fd3*/
    if ( CoordData && (*(_BYTE *)(CoordData + 20) & 1) != 0 && a1(CoordData, a2) ) /*0x731fea*/
    {
      v6 = v3[2]; /*0x731ff2*/
      if ( v3[4] < v6 /*0x732014*/
        || (*((_BYTE *)v3 + 13) || !v6)
        && (v7 = v3[5], v7 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v6 + v7, 0) )
      {
        v8 = v3[4]; /*0x73201b*/
        v9 = v3[1]; /*0x73201e*/
        v3[4] = v8 + 1; /*0x732024*/
        *(_DWORD *)(v9 + 4 * v8) = CoordData; /*0x732027*/
      }
    }
    ++v4; /*0x73202e*/
  }
  while ( v4 < Height ); /*0x732031*/
  return v3; /*0x732036*/
}
}
} // namespace gamemd

// 0x732770
namespace gamemd {
BOOL TechnoClass_StepCleanupIfHuman(int a1, void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __fastcall TechnoClass_StepCleanupIfHuman(int a1, void *a2)
{
  BOOL result; // eax

  result = 0; /*0x7327b7*/
  if ( a1 && *(_BYTE *)(a1 + 144) )
  {
    char v4 = g_GameMode_Current ? House::IsHumanPlayer(*(#375 **)(a1 + 540)) : *(_BYTE *)(*(_DWORD *)(a1 + 540) + 493);
    if ( v4 && (unsigned __int8)ObjectClass::StepCleanup((void *)a1, a2) ) /*0x7327ad*/
      return 1; /*0x732782*/
  }
  return result; /*0x7327b6*/
}
}
} // namespace gamemd

// 0x732950
namespace gamemd {
int SelectAllOfType()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void SelectAllOfType()
{
  int result; // eax
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  _DWORD *v7; // ebp
  int HeightMap; // ebx
  int i; // esi
  int CoordDataMap; // edi
  int v11; // edi
  int v12; // esi
  _DWORD *v13; // eax
  int v14; // edi
  int j; // esi
  int v16; // ebp
  int k; // edi
  int v18; // esi
  int v19; // eax
  wchar_t *v20; // [esp-4h] [ebp-214h]
  wchar_t *StringCSF; // [esp-4h] [ebp-214h]
  int v22; // [esp+8h] [ebp-208h] BYREF
  int (__thiscall ***v23)(_DWORD, int); // [esp+Ch] [ebp-204h]
  wchar_t Destination[256]; // [esp+10h] [ebp-200h] BYREF

  result = MuteSWLaunches; /*0x732950*/
  int v1 = 0; /*0x73295d*/
  if ( MuteSWLaunches ) /*0x732961*/
    return result; /*0x732961*/
  SelectAllOfType_Play(g_TacticalClass_Instance); /*0x73296d*/
  if ( DataGlobal_B0FE54 != 2 ) /*0x732979*/
    DataGlobal_B0FE64 = 0; /*0x73297b*/
  v23 = (int (__thiscall ***)(_DWORD, int))TacticalClass::CollectSelectedIDs(); /*0x732989*/
  if ( DataGlobal_B0FE64 ) /*0x732996*/
  {
    _DWORD * v2 = __2_YAPAXI_Z(0x18u); /*0x732998*/
    _DWORD * v3 = v2; /*0x73299d*/
    if ( v2 ) /*0x7329a4*/
    {
      EventClass::resetEvent(v2, 0, 0); /*0x7329aa*/
      *v3 = &vt_DynamicVectorClass_TechnoClass; /*0x7329af*/
      v3[5] = 10; /*0x7329b5*/
      v3[4] = 0; /*0x7329bc*/
    }
    else
    {
      v3 = 0; /*0x7329c1*/
    }
    int v4 = g_SidebarState; /*0x7329c3*/
    if ( g_SidebarState > 0 ) /*0x7329cb*/
    {
      do /*0x7329f3*/
      {
        v22 = *((_DWORD *)g_TechnoClass_Count + v1); /*0x7329d7*/
        if ( TechnoClass::IsOwnedByHuman(v22) ) /*0x7329db*/
          DynamicVector::AddItem(v3, &v22); /*0x7329eb*/
        ++v1; /*0x7329f0*/
      }
      while ( v1 < v4 ); /*0x7329f3*/
    }
    v5 = v3; /*0x7329f5*/
  }
  else
  {
    v6 = __2_YAPAXI_Z(0x18u); /*0x7329fc*/
    v7 = v6; /*0x732a01*/
    if ( v6 ) /*0x732a08*/
    {
      EventClass::resetEvent(v6, 0, 0); /*0x732a0e*/
      *v7 = &vt_DynamicVectorClass_TechnoClass; /*0x732a13*/
      v7[5] = 10; /*0x732a1a*/
      v7[4] = 0; /*0x732a21*/
    }
    else
    {
      v7 = 0; /*0x732a26*/
    }
    HeightMap = GetHeightMap(g_TacticalClass_Instance); /*0x732a33*/
    for ( i = 0; i < HeightMap; ++i ) /*0x732a39*/
    {
      CoordDataMap = GetCoordDataMap(i); /*0x732a47*/
      if ( (unsigned __int8)SelectAllOfType_Helper(CoordDataMap) ) /*0x732a4b*/
      {
        v22 = CoordDataMap; /*0x732a58*/
        if ( TechnoClass::IsOwnedByHuman(CoordDataMap) ) /*0x732a5c*/
          DynamicVector::AddItem(v7, &v22); /*0x732a6c*/
      }
    }
    v11 = 0; /*0x732a79*/
    v5 = v7; /*0x732a7d*/
    v22 = v7[4]; /*0x732a7f*/
    if ( v22 <= 0 ) /*0x732a83*/
    {
LABEL_25:
      DataGlobal_B0FE64 = 1; /*0x732aad*/
    }
    else
    {
      while ( 1 ) /*0x732a8c*/
      {
        v12 = *(_DWORD *)(v7[1] + 4 * v11); /*0x732a8c*/
        if ( (unsigned __int8)IDTechnoClassMatches(v12, v23) ) /*0x732a91*/
        {
          if ( !*(_BYTE *)(v12 + 131) ) /*0x732a9a*/
            break; /*0x732a9a*/
        }
        if ( ++v11 >= v22 ) /*0x732aab*/
          goto LABEL_25; /*0x732aab*/
      }
      if ( !DataGlobal_B0FE64 ) /*0x732abd*/
        goto LABEL_36; /*0x732abd*/
    }
    if ( v7 ) /*0x732ac1*/
      (*(void (__thiscall **)(_DWORD *, int))*v7)(v7, 1); /*0x732aca*/
    v13 = __2_YAPAXI_Z(0x18u); /*0x732ace*/
    if ( v13 ) /*0x732ad8*/
      v5 = DynamicVector::Constructor_Techno(v13, 0, 0); /*0x732ae5*/
    else
      v5 = 0; /*0x732ae9*/
    v14 = g_SidebarState; /*0x732aeb*/
    for ( j = 0; j < v14; ++j ) /*0x732af5*/
    {
      v22 = *((_DWORD *)g_TechnoClass_Count + j); /*0x732b01*/
      if ( TechnoClass::IsOwnedByHuman(v22) ) /*0x732b05*/
        DynamicVector::AddItem(v5, &v22); /*0x732b15*/
    }
  }
LABEL_36:
  v16 = v5[4]; /*0x732b1f*/
  for ( k = 0; k < v16; ++k ) /*0x732b26*/
  {
    v18 = *(_DWORD *)(v5[1] + 4 * k); /*0x732b2b*/
    if ( (unsigned __int8)IDTechnoClassMatches(v18, v23) ) /*0x732b34*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 332))(v18); /*0x732b41*/
  }
  if ( g_SelectionManager ) /*0x732b55*/
  {
    if ( DataGlobal_B0FE64 ) /*0x732b7c*/
      StringCSF = GetStringCSF(g_Str_MSG_SelAcrossMap, 0, g_Str_File_UICmnds_cpp, 1011); /*0x732b98*/
    else
      StringCSF = GetStringCSF(g_Str_MSG_SelAcrossScreen, 0, g_Str_File_UICmnds_cpp, 1013); /*0x732bb2*/
    wcscpy(Destination, StringCSF); /*0x732b9a*/
  }
  else
  {
    v20 = GetStringCSF(g_Str_MSG_NothingSelected, 0, g_Str_File_UICmnds_cpp, 1009); /*0x732b71*/
    wcscpy(Destination, v20); /*0x732b73*/
  }
  v19 = 3; /*0x732bc8*/
  if ( HouseClass_Player ) /*0x732bcd*/
    v19 = *((_DWORD *)HouseClass_Player + 22549); /*0x732bcf*/
  result = MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, Destination, v19, 16454, 240, 1); /*0x732bf0*/
  DataGlobal_B0FE54 = 2; /*0x732bf5*/
  DataGlobal_B0FE58 = 0; /*0x732bff*/
  if ( v23 ) /*0x732c0c*/
    result = (**v23)(v23, 1); /*0x732c12*/
  if ( v5 ) /*0x732c16*/
    return (*(int (__thiscall **)(_DWORD *, int))*v5)(v5, 1); /*0x732c1e*/
  return result; /*0x732c20*/
}
}
} // namespace gamemd

// 0x732FF0
namespace gamemd {
char sub_732FF0(void * a1, int (__fastcall *a2)(unsigned int, int) a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_732FF0(void *a1, int (__fastcall *a2)(_DWORD, int), int a3)
{
  int HeightMap; // eax
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // ebp
  int v7; // edi
  int v8; // ecx
  int v9; // edx
  _DWORD *v10; // eax
  int v11; // ebx
  int i; // edi
  int v13; // ebp
  int j; // edi
  int v17; // [esp+18h] [ebp-8h] BYREF
  int (__fastcall *v18)(_DWORD, int); // [esp+1Ch] [ebp-4h]

  v18 = a2; /*0x732ffc*/
  if ( DataGlobal_B0FE64 ) /*0x733008*/
  {
    HeightMap = (int)__2_YAPAXI_Z(0x18u); /*0x73300e*/
    v4 = (_DWORD *)HeightMap; /*0x733013*/
    v5 = 0; /*0x733015*/
    if ( HeightMap ) /*0x73301c*/
    {
      LOBYTE(HeightMap) = (unsigned __int8)EventClass::resetEvent((_DWORD *)HeightMap, 0, 0); /*0x733022*/
      *v4 = &vt_DynamicVectorClass_TechnoClass; /*0x733027*/
      v4[5] = 10; /*0x73302d*/
      v4[4] = 0; /*0x733034*/
    }
    else
    {
      v4 = 0; /*0x733039*/
    }
    v6 = g_SidebarState; /*0x73303b*/
    if ( g_SidebarState > 0 ) /*0x733043*/
    {
      do /*0x73309e*/
      {
        v7 = *((_DWORD *)g_TechnoClass_Count + v5); /*0x733052*/
        LOBYTE(HeightMap) = StepTechnoClassCleanupIfHuman(v7, a1); /*0x733057*/
        if ( (_BYTE)HeightMap ) /*0x73305e*/
        {
          v8 = v4[2]; /*0x733060*/
          if ( v4[4] < v8 /*0x73308a*/
            || ((LOBYTE(HeightMap) = *((_BYTE *)v4 + 13), (_BYTE)HeightMap) || !v8)
            && (HeightMap = v4[5], HeightMap > 0)
            && (LOBYTE(HeightMap) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v8 + HeightMap, 0),
                (_BYTE)HeightMap) )
          {
            HeightMap = v4[4]; /*0x73308c*/
            v9 = v4[1]; /*0x73308f*/
            v4[4] = HeightMap + 1; /*0x733095*/
            *(_DWORD *)(v9 + 4 * HeightMap) = v7; /*0x733098*/
          }
        }
        ++v5; /*0x73309b*/
      }
      while ( v5 < v6 ); /*0x73309e*/
    }
  }
  else
  {
    v10 = __2_YAPAXI_Z(0x18u); /*0x7330a5*/
    v4 = v10; /*0x7330aa*/
    if ( v10 ) /*0x7330b1*/
    {
      EventClass::resetEvent(v10, 0, 0); /*0x7330b9*/
      *v4 = &vt_DynamicVectorClass_TechnoClass; /*0x7330be*/
      v4[5] = 10; /*0x7330c4*/
      v4[4] = 0; /*0x7330cb*/
    }
    else
    {
      v4 = 0; /*0x7330d4*/
    }
    HeightMap = GetHeightMap(g_TacticalClass_Instance); /*0x7330dc*/
    v11 = HeightMap; /*0x7330e1*/
    for ( i = 0; i < v11; ++i ) /*0x7330e7*/
    {
      HeightMap = GetCoordDataMap(i); /*0x7330f0*/
      if ( HeightMap ) /*0x7330f7*/
      {
        if ( (*(_BYTE *)(HeightMap + 20) & 1) != 0 ) /*0x733103*/
        {
          v17 = HeightMap; /*0x73310b*/
          LOBYTE(HeightMap) = StepTechnoClassCleanupIfHuman(HeightMap, a1); /*0x73310f*/
          if ( (_BYTE)HeightMap ) /*0x733116*/
            LOBYTE(HeightMap) = DynamicVector::AddItem(v4, &v17); /*0x73311f*/
        }
      }
    }
  }
  v13 = v4[4]; /*0x733129*/
  for ( j = 0; j < v13; ++j ) /*0x733130*/
    LOBYTE(HeightMap) = v18(*(_DWORD *)(v4[1] + 4 * j), a3); /*0x73313e*/
  if ( v4 ) /*0x733149*/
    LOBYTE(HeightMap) = (*(int (__thiscall **)(_DWORD *, int))*v4)(v4, 1); /*0x733151*/
  return HeightMap; /*0x733153*/
}
}
} // namespace gamemd

// 0x7331B0
namespace gamemd {
char sub_7331B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7331B0()
{
  wchar_t *v3; // ebx
  int HeightMap; // eax
  #375 **v13; // edi

  int v0 = 0; /*0x7331b9*/
  if ( g_UnitTooltipState ) /*0x7331bf*/
  {
    (**(void (__thiscall ***)(int, int))g_UnitTooltipState)(g_UnitTooltipState, 1); /*0x7331c5*/
    g_UnitTooltipState = 0; /*0x7331c7*/
  }
  _DWORD * v1 = __2_YAPAXI_Z(0x18u); /*0x7331cf*/
  int v2 = (int)v1; /*0x7331d4*/
  if ( v1 ) /*0x7331db*/
  {
    EventClass::resetEvent(v1, 0, 0); /*0x7331e1*/
    *(_DWORD *)v2 = &vt_DynamicVectorClass_TechnoClass; /*0x7331e6*/
    *(_DWORD *)(v2 + 20) = 10; /*0x7331ec*/
    *(_DWORD *)(v2 + 16) = 0; /*0x7331f3*/
  }
  else
  {
    v2 = 0; /*0x7331f8*/
  }
  v3 = g_SelectionManager; /*0x7331fa*/
  if ( (int)g_SelectionManager > 0 ) /*0x733202*/
  {
    do /*0x73325b*/
    {
      int v4 = *((_DWORD *)g_ObjectClass_CurrentCount + v0); /*0x73320a*/
      if ( v4 && (*(_BYTE *)(v4 + 20) & 1) != 0 ) /*0x73321b*/
      {
        int v5 = *(_DWORD *)(v2 + 8); /*0x73321d*/
        if ( *(_DWORD *)(v2 + 16) < v5 /*0x733242*/
          || (*(_BYTE *)(v2 + 13) || !v5)
  int v6; // eax
          && (v6 = *(_DWORD *)(v2 + 20), v6 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v2 + 8))(v2, v5 + v6, 0) )
        {
          int v7 = *(_DWORD *)(v2 + 16); /*0x733249*/
          int v8 = *(_DWORD *)(v2 + 4); /*0x73324c*/
          *(_DWORD *)(v2 + 16) = v7 + 1; /*0x733252*/
          *(_DWORD *)(v8 + 4 * v7) = v4; /*0x733255*/
        }
      }
      ++v0; /*0x733258*/
    }
    while ( v0 < (int)v3 ); /*0x73325b*/
    v0 = 0; /*0x73325d*/
  }
  g_UnitTooltipState = v2; /*0x73325f*/
  HeightMap = *(_DWORD *)(v2 + 16); /*0x733265*/
  if ( !HeightMap )
  {
    if ( v2 ) /*0x733272*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x73327a*/
    g_UnitTooltipState = 0; /*0x73327e*/
    _DWORD * v10 = __2_YAPAXI_Z(0x18u); /*0x733284*/
    int v11 = (int)v10; /*0x733289*/
    if ( v10 ) /*0x733290*/
    {
      EventClass::resetEvent(v10, 0, 0); /*0x733296*/
      *(_DWORD *)v11 = &vt_DynamicVectorClass_TechnoClass; /*0x73329b*/
      *(_DWORD *)(v11 + 20) = 10; /*0x7332a1*/
      *(_DWORD *)(v11 + 16) = 0; /*0x7332a8*/
    }
    else
    {
      v11 = 0; /*0x7332ad*/
    }
    HeightMap = GetHeightMap(g_TacticalClass_Instance); /*0x7332b5*/
    int v12 = HeightMap; /*0x7332ba*/
    if ( HeightMap > 0 )
    {
      do
      {
        HeightMap = GetCoordDataMap(v0); /*0x7332cb*/
        v13 = (#375 **)HeightMap; /*0x7332d0*/
        if ( HeightMap )
        {
          if ( (*(_BYTE *)(HeightMap + 20) & 1) != 0 )
          {
            LOBYTE(HeightMap) = *(_BYTE *)(HeightMap + 144); /*0x7332e6*/
            if ( (_BYTE)HeightMap )
            {
              LOBYTE(HeightMap) = g_GameMode_Current[0] ? House::IsHumanPlayer(v13[135]) : *((_BYTE *)v13[135] + 493);
              if ( (_BYTE)HeightMap ) /*0x733314*/
              {
                HeightMap = (*((int (__thiscall **)(#375 **))*v13 + 11))(v13); /*0x73331a*/
                if ( HeightMap != 6 ) /*0x733320*/
                {
                  int v14 = *(_DWORD *)(v11 + 8); /*0x733322*/
                  if ( *(_DWORD *)(v11 + 16) < v14 /*0x73334c*/
                    || ((LOBYTE(HeightMap) = *(_BYTE *)(v11 + 13), (_BYTE)HeightMap) || !v14)
                    && (HeightMap = *(_DWORD *)(v11 + 20), HeightMap > 0)
                    && (LOBYTE(HeightMap) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 8))(
                                              v11,
                                              v14 + HeightMap,
                                              0),
                        (_BYTE)HeightMap) )
                  {
                    HeightMap = *(_DWORD *)(v11 + 16); /*0x73334e*/
                    int v15 = *(_DWORD *)(v11 + 4); /*0x733351*/
                    *(_DWORD *)(v11 + 16) = HeightMap + 1; /*0x733357*/
                    *(_DWORD *)(v15 + 4 * HeightMap) = v13; /*0x73335a*/
                  }
                }
              }
            }
          }
        }
        ++v0; /*0x73335d*/
      }
      while ( v0 < v12 );
    }
    g_UnitTooltipState = v11; /*0x733366*/
  }
  return HeightMap; /*0x73336c*/
}
}
} // namespace gamemd

// 0x733380
namespace gamemd {
int E4Recv_733380::UpdateUnitHealthTooltip()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int UpdateUnitHealthTooltip(HealthNavCommandClass *this)
{
  IUnknown *result; // eax
  ObjectClass *v8; // esi
  VectorClass *StringCSF; // ebx
  VectorClass *v11; // edi
  wchar_t Destination[256]; // [esp+14h] [ebp-200h] BYREF

  result = *(IUnknown **)&HouseClass_Player[30700]; /*0x733380*/
  int v2 = 0; /*0x73338c*/
  if ( !*(_DWORD *)&HouseClass_Player[30700] ) /*0x733390*/
  {
  int v17; // [esp+8h] [ebp-20Ch]
    if ( *(_DWORD *)&stru_B05488[43468] == 3 ) /*0x73339d*/
    {
      if ( *(_DWORD *)&stru_830620[85824] == -1 ) /*0x733402*/
      {
        v17 = 0; /*0x733404*/
      }
      else if ( *(_DWORD *)&stru_830620[85824] ) /*0x73340c*/
      {
        int v4 = -(*(_DWORD *)&stru_830620[85824] != 1); /*0x73341b*/
        LOBYTE(v4) = v4 & 0xFE; /*0x73341d*/
        v17 = v4 + 2; /*0x733422*/
      }
      else
      {
        v17 = 1; /*0x73340e*/
      }
      if ( (_BYTE)this ) /*0x733428*/
        SuperWeaponClass::UpdateAll(); /*0x733430*/
    }
    else
    {
      if ( *(_DWORD *)&stru_B05488[43492] ) /*0x7333a7*/
      {
        (***(void (__thiscall ****)(_DWORD, int))&stru_B05488[43492])( /*0x7333ad*/
          *(_DWORD *)&stru_B05488[43492],
          1);
        *(_DWORD *)&stru_B05488[43492] = 0; /*0x7333af*/
      }
      _DWORD * v3 = TechnoClass::GatherAllBuildings(); /*0x7333b5*/
      *(_DWORD *)&stru_B05488[43492] = v3; /*0x7333ba*/
      if ( !v3[4] ) /*0x7333bf*/
      {
        if ( v3 ) /*0x7333c8*/
          (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x7333d0*/
        *(_DWORD *)&stru_B05488[43492] = 0; /*0x7333d9*/
        *(_DWORD *)&stru_B05488[43492] = GatherTechnoClassFiltered( /*0x7333e4*/
                                                      (unsigned __int8 (__fastcall *)(int, int))TechnoClass::IsCapturableByPlayer,
                                                      0);
      }
      SuperWeaponClass::UpdateAll(); /*0x7333ef*/
      v17 = 0; /*0x7333f4*/
    }
    int v5 = *(_DWORD *)&stru_B05488[43492]; /*0x733437*/
    int v6 = 0; /*0x73343e*/
    int v7 = *(_DWORD *)(*(_DWORD *)&stru_B05488[43492] + 16); /*0x733440*/
    if ( v7 > 0 ) /*0x733445*/
    {
      do /*0x733467*/
      {
        v8 = *(ObjectClass **)(*(_DWORD *)(v5 + 4) + 4 * v6); /*0x73344a*/
        if ( BuildingClass::GetSellPriority((int *)v8->__pad_0) == v17 ) /*0x733458*/
          (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v8->__pad_0 + 332))(v8); /*0x73345e*/
        ++v6; /*0x733464*/
      }
      while ( v6 < v7 ); /*0x733467*/
      v2 = 0; /*0x733469*/
    }
    if ( v17 ) /*0x733471*/
    {
      if ( v17 == 1 ) /*0x733490*/
      {
        StringCSF = (VectorClass *)GetStringCSF( /*0x7334a8*/
                                     (wchar_t *)&stru_830620[86020],
                                     0,
                                     (CampaignScore *)&stru_830620[85880],
                                     1606);
      }
      else if ( v17 == 2 ) /*0x7334af*/
      {
        StringCSF = (VectorClass *)GetStringCSF( /*0x7334c7*/
                                     (wchar_t *)&stru_830620[86008],
                                     0,
                                     (CampaignScore *)&stru_830620[85880],
                                     1608);
      }
      else
      {
        StringCSF = (VectorClass *)&stru_87C374[46016]; /*0x7334cb*/
      }
    }
    else
    {
      StringCSF = (VectorClass *)GetStringCSF( /*0x733489*/
                                   (wchar_t *)&stru_830620[86040],
                                   0,
                                   (CampaignScore *)&stru_830620[85880],
                                   1604);
    }
    _DWORD * v10 = (_DWORD *)__2_YAPAXI_Z(0x18u); /*0x7334d2*/
    if ( v10 ) /*0x7334dc*/
      v11 = (VectorClass *)DynamicVector::Constructor_Techno(v10, 0, 0); /*0x7334e7*/
    VectorClass *v11 = 0; /*0x7334eb*/
    int v12 = *(_DWORD *)&HouseClass_Player[44924]; /*0x7334ed*/
    if ( *(int *)&HouseClass_Player[44924] > 0 ) /*0x7334f5*/
    {
      do /*0x733522*/
      {
        int v13 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[44912] + 4 * v2); /*0x7334fc*/
        if ( v13 && (*(_BYTE *)(v13 + 20) & 1) != 0 ) /*0x73350d*/
        {
          int v18 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[44912] + 4 * v2); /*0x733516*/
          DynamicVector::AddItem(v11, (VectorClass *)&v18); /*0x73351a*/
        }
        ++v2; /*0x73351f*/
      }
      while ( v2 < v12 ); /*0x733522*/
    }
    void * v14 = v11[1].vtable0; /*0x733524*/
    int v15 = 0; /*0x733527*/
    if ( (int)v14 > 0 ) /*0x73352b*/
    {
      while ( BuildingClass::GetSellPriority(*((int **)v11->Items + v15)) == v17 ) /*0x73353c*/
      {
        if ( ++v15 >= (int)v14 ) /*0x733541*/
          goto LABEL_42; /*0x733541*/
      }
      StringCSF = (VectorClass *)GetStringCSF( /*0x73355b*/
                                   (wchar_t *)&stru_830620[85996],
                                   0,
                                   (CampaignScore *)&stru_830620[85880],
                                   1583);
    }
LABEL_42:
    if ( v11 ) /*0x73355f*/
      (*(void (__thiscall **)(VectorClass *, int))v11->vtable0)(v11, 1); /*0x733567*/
    FillUnitTooltipUI(Destination, (wchar_t *)StringCSF); /*0x73356f*/
    int v16 = 3; /*0x73357a*/
    if ( HouseClass_Player.field_0 ) /*0x733584*/
      v16 = *(_DWORD *)(HouseClass_Player.field_0 + 90196); /*0x733586*/
    MessageListClass::AddMessage( /*0x7335a7*/
      &HouseClass_Player[32532],
      0,
      0,
      (CellStruct *)Destination,
      v16,
      (IUnknown *)0x4046,
      240,
      1);
    *(_DWORD *)&stru_830620[85824] = v17; /*0x7335b6*/
    result = *(IUnknown **)(*(_DWORD *)&stru_B05488[43492] + 16); /*0x7335bc*/
    *(_DWORD *)&stru_B05488[43468] = 0; /*0x7335c1*/
    if ( result ) /*0x7335cb*/
      *(_DWORD *)&stru_B05488[43468] = 3; /*0x7335cd*/
    stru_B05488[43472] = 0; /*0x7335d7*/
  }
  return (int)result; /*0x7335de*/
}
}
} // namespace gamemd

// 0x7336C0
namespace gamemd {
int E4Recv_7336C0::DrawUnitExperiencePopup()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int DrawUnitExperiencePopup(VeterancyNavCommandClass *this)
{
  IUnknown *result; // eax
  VectorClass *StringCSF; // ebx
  VectorClass *v11; // edi
  wchar_t Destination[256]; // [esp+14h] [ebp-200h] BYREF

  result = *(IUnknown **)&HouseClass_Player[30700]; /*0x7336c0*/
  int v2 = 0; /*0x7336cc*/
  if ( !*(_DWORD *)&HouseClass_Player[30700] ) /*0x7336d0*/
  {
  int v17; // [esp+8h] [ebp-20Ch]
    if ( *(_DWORD *)&stru_B05488[43468] == 4 ) /*0x7336dd*/
    {
      if ( *(_DWORD *)&stru_830620[85828] == -1 ) /*0x733742*/
      {
        v17 = 0; /*0x733744*/
      }
      else if ( *(_DWORD *)&stru_830620[85828] ) /*0x73374c*/
      {
        int v4 = -(*(_DWORD *)&stru_830620[85828] != 1); /*0x73375b*/
        LOBYTE(v4) = v4 & 0xFE; /*0x73375d*/
        v17 = v4 + 2; /*0x733762*/
      }
      else
      {
        v17 = 1; /*0x73374e*/
      }
      if ( (_BYTE)this ) /*0x733768*/
        SuperWeaponClass::UpdateAll(); /*0x733770*/
    }
    else
    {
      if ( *(_DWORD *)&stru_B05488[43492] ) /*0x7336e7*/
      {
        (***(void (__thiscall ****)(_DWORD, int))&stru_B05488[43492])( /*0x7336ed*/
          *(_DWORD *)&stru_B05488[43492],
          1);
        *(_DWORD *)&stru_B05488[43492] = 0; /*0x7336ef*/
      }
      _DWORD * v3 = TechnoClass::GatherAllBuildings(); /*0x7336f5*/
      *(_DWORD *)&stru_B05488[43492] = v3; /*0x7336fa*/
      if ( !v3[4] ) /*0x7336ff*/
      {
        if ( v3 ) /*0x733708*/
          (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x733710*/
        *(_DWORD *)&stru_B05488[43492] = 0; /*0x733719*/
        *(_DWORD *)&stru_B05488[43492] = GatherTechnoClassFiltered( /*0x733724*/
                                                      (unsigned __int8 (__fastcall *)(int, int))TechnoClass::IsCapturableByPlayer,
                                                      0);
      }
      SuperWeaponClass::UpdateAll(); /*0x73372f*/
      v17 = 0; /*0x733734*/
    }
    int v5 = *(_DWORD *)&stru_B05488[43492]; /*0x733777*/
    int v6 = 0; /*0x73377e*/
    int v7 = *(_DWORD *)(*(_DWORD *)&stru_B05488[43492] + 16); /*0x733780*/
    if ( v7 > 0 ) /*0x733785*/
    {
      do /*0x7337ab*/
      {
        float * v8 = *(float **)(*(_DWORD *)(v5 + 4) + 4 * v6); /*0x73378a*/
        if ( FootClass::CheckAccelLimit(v8 + 84) == v17 ) /*0x73379c*/
          (*(void (__thiscall **)(float *))(*(_DWORD *)v8 + 332))(v8); /*0x7337a2*/
        ++v6; /*0x7337a8*/
      }
      while ( v6 < v7 ); /*0x7337ab*/
      v2 = 0; /*0x7337ad*/
    }
    if ( v17 ) /*0x7337b5*/
    {
      if ( v17 == 1 ) /*0x7337d4*/
      {
        StringCSF = (VectorClass *)GetStringCSF( /*0x7337ec*/
                                     (wchar_t *)&stru_830620[86080],
                                     0,
                                     (CampaignScore *)&stru_830620[85880],
                                     1680);
      }
      else if ( v17 == 2 ) /*0x7337f3*/
      {
        StringCSF = (VectorClass *)GetStringCSF( /*0x73380b*/
                                     (wchar_t *)&stru_830620[86056],
                                     0,
                                     (CampaignScore *)&stru_830620[85880],
                                     1682);
      }
      else
      {
        StringCSF = (VectorClass *)&stru_87C374[46016]; /*0x73380f*/
      }
    }
    else
    {
      StringCSF = (VectorClass *)GetStringCSF( /*0x7337cd*/
                                   (wchar_t *)&stru_830620[86092],
                                   0,
                                   (CampaignScore *)&stru_830620[85880],
                                   1678);
    }
    _DWORD * v10 = (_DWORD *)__2_YAPAXI_Z(0x18u); /*0x733816*/
    if ( v10 ) /*0x733820*/
      v11 = (VectorClass *)DynamicVector::Constructor_Techno(v10, 0, 0); /*0x73382b*/
    VectorClass *v11 = 0; /*0x73382f*/
    int v12 = *(_DWORD *)&HouseClass_Player[44924]; /*0x733831*/
    if ( *(int *)&HouseClass_Player[44924] > 0 ) /*0x733839*/
    {
      do /*0x733866*/
      {
        int v13 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[44912] + 4 * v2); /*0x733840*/
        if ( v13 && (*(_BYTE *)(v13 + 20) & 1) != 0 ) /*0x733851*/
        {
          int v18 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[44912] + 4 * v2); /*0x73385a*/
          DynamicVector::AddItem(v11, (VectorClass *)&v18); /*0x73385e*/
        }
        ++v2; /*0x733863*/
      }
      while ( v2 < v12 ); /*0x733866*/
    }
    void * v14 = v11[1].vtable0; /*0x733868*/
    int v15 = 0; /*0x73386b*/
    if ( (int)v14 > 0 ) /*0x73386f*/
    {
      while ( FootClass::CheckAccelLimit((float *)(*((_DWORD *)v11->Items + v15) + 336)) == v17 ) /*0x733886*/
      {
        if ( ++v15 >= (int)v14 ) /*0x73388b*/
          goto LABEL_42; /*0x73388b*/
      }
      StringCSF = (VectorClass *)GetStringCSF( /*0x7338a5*/
                                   (wchar_t *)&stru_830620[85996],
                                   0,
                                   (CampaignScore *)&stru_830620[85880],
                                   1658);
    }
LABEL_42:
    if ( v11 ) /*0x7338a9*/
      (*(void (__thiscall **)(VectorClass *, int))v11->vtable0)(v11, 1); /*0x7338b1*/
    FillUnitTooltipUI(Destination, (wchar_t *)StringCSF); /*0x7338b9*/
    int v16 = 3; /*0x7338c4*/
    if ( HouseClass_Player.field_0 ) /*0x7338ce*/
      v16 = *(_DWORD *)(HouseClass_Player.field_0 + 90196); /*0x7338d0*/
    MessageListClass::AddMessage( /*0x7338f1*/
      &HouseClass_Player[32532],
      0,
      0,
      (CellStruct *)Destination,
      v16,
      (IUnknown *)0x4046,
      240,
      1);
    *(_DWORD *)&stru_830620[85828] = v17; /*0x733900*/
    result = *(IUnknown **)(*(_DWORD *)&stru_B05488[43492] + 16); /*0x733906*/
    *(_DWORD *)&stru_B05488[43468] = 0; /*0x73390b*/
    if ( result ) /*0x733915*/
      *(_DWORD *)&stru_B05488[43468] = 4; /*0x733917*/
    stru_B05488[43472] = 0; /*0x733921*/
  }
  return (int)result; /*0x733928*/
}
}
} // namespace gamemd

// 0x7339B0
namespace gamemd {
int SelectUnitsByTheme(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall SelectUnitsByTheme(char a1)
{
  int result; // eax
  wchar_t *StringCSF; // ebx
  wchar_t *v11; // edi
  int i; // esi
  char *Block; // [esp+8h] [ebp-210h]
  wchar_t Destination[256]; // [esp+18h] [ebp-200h] BYREF

  result = MuteSWLaunches; /*0x7339b0*/
  int v2 = 0; /*0x7339bd*/
  if ( !MuteSWLaunches ) /*0x7339c3*/
  {
  int v20; // [esp+14h] [ebp-204h] BYREF
    if ( DataGlobal_B0FE54 == 5 ) /*0x7339d0*/
    {
      Block = SelectFactionThemeMusic(g_UnitTooltipState, DataGlobal_B0FD70, DataGlobal_B0FE70, &v20); /*0x733a62*/
      if ( a1 ) /*0x733a66*/
        SuperWeaponClass::UpdateAll(); /*0x733a6e*/
    }
    else
    {
      if ( g_UnitTooltipState ) /*0x7339da*/
      {
        (**(void (__thiscall ***)(int, int))g_UnitTooltipState)(g_UnitTooltipState, 1); /*0x7339e0*/
        g_UnitTooltipState = 0; /*0x7339e2*/
      }
      _DWORD * v4 = TechnoClass::GatherAllBuildings(); /*0x7339e8*/
      g_UnitTooltipState = (int)v4; /*0x7339ed*/
      if ( !v4[4] ) /*0x7339f2*/
      {
        if ( v4 ) /*0x7339fb*/
          (*(void (__thiscall **)(_DWORD *, int))*v4)(v4, 1); /*0x733a03*/
        g_UnitTooltipState = 0; /*0x733a0c*/
        g_UnitTooltipState = (int)GatherTechnoClassFiltered( /*0x733a17*/
                                  (unsigned __int8 (__fastcall *)(int, int))TechnoClass::IsCapturableByPlayer,
                                  0);
      }
      SuperWeaponClass::UpdateAll(); /*0x733a22*/
      Block = SelectFactionThemeMusic(g_UnitTooltipState, 0, 0x7FFFFFFF, &v20); /*0x733a3e*/
    }
    int v5 = g_UnitTooltipState; /*0x733a73*/
    int v18 = *(_DWORD *)(g_UnitTooltipState + 16); /*0x733a80*/
    if ( v18 > 0 ) /*0x733a84*/
    {
      do /*0x733aed*/
      {
        int v6 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v2); /*0x733a89*/
        const char * v7 = (const char *)((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 136))(v6) + 36); /*0x733a9a*/
        if ( Block && !strcmp(v7, Block) && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 316))(v6) ) /*0x733ad2*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 332))(v6); /*0x733ae0*/
        ++v2; /*0x733aea*/
      }
      while ( v2 < v18 ); /*0x733aed*/
    }
    StringCSF = 0; /*0x733af1*/
    _DWORD * v9 = __2_YAPAXI_Z(0x18u); /*0x733af3*/
    if ( v9 ) /*0x733afd*/
      _DWORD * v10 = DynamicVector::Constructor_Techno(v9, 0, 0); /*0x733b08*/
    else
      v10 = 0; /*0x733b0c*/
    v11 = g_SelectionManager; /*0x733b0e*/
    for ( i = 0; i < (int)v11; ++i ) /*0x733b18*/
    {
      int v13 = *((_DWORD *)g_ObjectClass_CurrentCount + i); /*0x733b1f*/
      if ( v13 ) /*0x733b24*/
      {
        if ( *(_BYTE *)(v13 + 20) & 1 ) /*0x733b2c*/
        {
          v18 = v13; /*0x733b39*/
          DynamicVector::AddItem(v10, &v18); /*0x733b3d*/
        }
      }
    }
    int v14 = v10[4]; /*0x733b47*/
    int v15 = 0; /*0x733b4a*/
    if ( v14 <= 0 ) /*0x733b4e*/
      goto LABEL_31; /*0x733b4e*/
    while ( (unsigned __int8)Object_Helper_733C60(*(_DWORD *)(v10[1] + 4 * v15), Block) ) /*0x733b61*/
    {
      if ( ++v15 >= v14 ) /*0x733b66*/
        goto LABEL_31; /*0x733b66*/
    }
    StringCSF = GetStringCSF(g_Str_MSG_Mixed, 0, g_Str_File_UICmnds_cpp, 1731); /*0x733b80*/
    if ( !StringCSF ) /*0x733b84*/
    {
LABEL_31:
      if ( (int)g_SelectionManager > 0 ) /*0x733b8d*/
        StringCSF = *(wchar_t **)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)g_ObjectClass_CurrentCount + 136))(*(_DWORD *)g_ObjectClass_CurrentCount) /*0x733b9f*/
                                + 96);
    }
    FillUnitTooltipUI(Destination, StringCSF); /*0x733ba8*/
    int v16 = 3; /*0x733bb3*/
    if ( HouseClass_Player ) /*0x733bba*/
      v16 = *((_DWORD *)HouseClass_Player + 22549); /*0x733bbc*/
    MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, Destination, v16, 16454, 240, 1); /*0x733bdd*/
    DataGlobal_B0FE70 = v20; /*0x733bec*/
    strcpy(DataGlobal_B0FD70, Block); /*0x733c09*/
    if ( Block ) /*0x733c16*/
      __3_YAXPAX_Z(Block); /*0x733c19*/
    result = v10[4]; /*0x733c21*/
    DataGlobal_B0FE54 = 0; /*0x733c24*/
    if ( result ) /*0x733c30*/
      DataGlobal_B0FE54 = 5; /*0x733c32*/
    DataGlobal_B0FE58 = 0; /*0x733c3e*/
    if ( v10 ) /*0x733c45*/
      return (*(int (__thiscall **)(_DWORD *, int))*v10)(v10, 1); /*0x733c4e*/
  }
  return result; /*0x733c50*/
}
}
} // namespace gamemd

// 0x733CD0
namespace gamemd {
unsigned int * E4Recv_733CD0::sub_733CD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_733CD0(_DWORD *this)
{
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  const char *v8; // ebp
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  const char **v14; // [esp+Ch] [ebp-14h]
  int v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  int v18; // [esp+1Ch] [ebp-4h]
  E4Recv_733CD0 *v1 = this; /*0x733cd6*/
  _DWORD * v2 = __2_YAPAXI_Z(0x18u); /*0x733cde*/
  if ( v2 ) /*0x733cea*/
  {
    v2[1] = 0; /*0x733cec*/
    v2[2] = 0; /*0x733cef*/
    *((_BYTE *)v2 + 12) = 1; /*0x733cf2*/
    *((_BYTE *)v2 + 13) = 0; /*0x733cf6*/
    *v2 = &vt_DynamicVectorClass_char_const; /*0x733cf9*/
    v2[5] = 10; /*0x733cff*/
    v2[4] = 0; /*0x733d06*/
    v3 = v2; /*0x733d09*/
  }
  else
  {
    v3 = 0; /*0x733d0d*/
  }
  v4 = 0; /*0x733d12*/
  v18 = v1[4]; /*0x733d16*/
  v16 = 0; /*0x733d1a*/
  if ( v18 <= 0 ) /*0x733d1e*/
    return v3; /*0x733dfa*/
  while ( 1 ) /*0x733d2e*/
  {
    v5 = *(_DWORD *)(v1[1] + 4 * v4); /*0x733d2e*/
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 136))(v5); /*0x733d33*/
    v7 = v3[4]; /*0x733d39*/
    v8 = (const char *)(v6 + 36); /*0x733d3e*/
    v15 = 0; /*0x733d43*/
    if ( v7 <= 0 ) /*0x733d47*/
      goto LABEL_13; /*0x733d47*/
    v14 = (const char **)v3[1]; /*0x733d4c*/
    while ( strcmp(v8, *v14) ) /*0x733d89*/
    {
      ++v15; /*0x733d95*/
      ++v14; /*0x733d99*/
      if ( v15 >= v7 ) /*0x733d9d*/
        goto LABEL_13; /*0x733d9d*/
    }
    if ( v15 == -1 ) /*0x733da4*/
    {
LABEL_13:
      v9 = v3[2]; /*0x733da6*/
      if ( v7 < v9 /*0x733dc5*/
        || (*((_BYTE *)v3 + 13) || !v9)
        && (v10 = v3[5], v10 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v9 + v10, 0) )
      {
        v11 = v3[4]; /*0x733dcc*/
        v12 = v3[1]; /*0x733dcf*/
        v3[4] = v11 + 1; /*0x733dd5*/
        *(_DWORD *)(v12 + 4 * v11) = v8; /*0x733dd8*/
      }
    }
    v4 = ++v16; /*0x733de3*/
    if ( v16 >= v18 ) /*0x733dea*/
      return v3; /*0x733df3*/
    v1 = this; /*0x733d27*/
  }
}
}
} // namespace gamemd

// 0x733E10
namespace gamemd {
char * SelectFactionThemeMusic(int a1, const char * a2, int a3, unsigned int * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall SelectFactionThemeMusic(int a1, const char *a2, int a3, _DWORD *a4)
{
  int v6; // ebx
  int v7; // ebp
  int v8; // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  _DWORD *v11; // ebx
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // edx
  _DWORD *v17; // ebp
  const char *v18; // edi
  int v19; // eax
  int v20; // esi
  int v21; // edi
  int v22; // ebx
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // ebp
  int i; // edi
  int v28; // eax
  int v29; // edx
  int v30; // edi
  int v31; // eax
  int *v32; // esi
  const char *v33; // edi
  char *v34; // ebp
  _DWORD *v36; // [esp+10h] [ebp-24h]
  int v37; // [esp+14h] [ebp-20h]
  const char **v38; // [esp+18h] [ebp-1Ch]
  int v39; // [esp+1Ch] [ebp-18h]
  int v40; // [esp+20h] [ebp-14h] BYREF
  const char *v41; // [esp+24h] [ebp-10h]
  int v42; // [esp+28h] [ebp-Ch]
  int v43; // [esp+2Ch] [ebp-8h]
  int v44; // [esp+30h] [ebp-4h]

  int v4 = a1; /*0x733e17*/
  v41 = a2; /*0x733e19*/
  v42 = a1; /*0x733e1f*/
  int v5 = 0; /*0x733e28*/
  if ( __2_YAPAXI_Z(0x18u) ) /*0x733e23*/
  {
    v6 = SelectFactionThemeMusic_Helper_734330(0, 0); /*0x733e3a*/
    v37 = v6; /*0x733e3c*/
  }
  else
  {
    v37 = 0; /*0x733e42*/
    v6 = 0; /*0x733e46*/
  }
  v7 = *(_DWORD *)(v4 + 16); /*0x733e48*/
  if ( v7 > 0 ) /*0x733e4d*/
  {
    do /*0x733e81*/
    {
      v8 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v5); /*0x733e52*/
      v40 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 136))(v8) + 36; /*0x733e64*/
      if ( SelectFactionThemeMusic_Helper(v6, v40) == -1 ) /*0x733e70*/
        SelectFactionThemeMusic_Helper_734390(&v40); /*0x733e79*/
      ++v5; /*0x733e7e*/
    }
    while ( v5 < v7 ); /*0x733e81*/
  }
  v9 = __2_YAPAXI_Z(0x18u); /*0x733e85*/
  v10 = v9; /*0x733e8a*/
  v11 = 0; /*0x733e8c*/
  if ( v9 ) /*0x733e93*/
  {
    VectorClass::Construct(v9, 0, 0); /*0x733e99*/
    v10[4] = 0; /*0x733e9e*/
    v11 = v10; /*0x733ea1*/
    *v10 = &vt_DynamicVectorClass_int; /*0x733ea3*/
    v10[5] = 10; /*0x733ea9*/
    v36 = v10; /*0x733eb0*/
  }
  else
  {
    v36 = 0; /*0x733eb6*/
  }
  v40 = *(_DWORD *)(v37 + 16); /*0x733ec3*/
  v12 = v40; /*0x733ebe*/
  if ( v40 > 0 ) /*0x733ec7*/
  {
    do /*0x733f09*/
    {
      v13 = v11[2]; /*0x733ec9*/
      if ( v11[4] < v13 /*0x733eee*/
        || (*((_BYTE *)v11 + 13) || !v13)
        && (v14 = v11[5], v14 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v11 + 8))(v11, v13 + v14, 0) )
      {
        v15 = v11[4]; /*0x733ef5*/
        v16 = v11[1]; /*0x733ef8*/
        v11[4] = v15 + 1; /*0x733efe*/
        *(_DWORD *)(v16 + 4 * v15) = 0; /*0x733f01*/
      }
      --v12; /*0x733f08*/
    }
    while ( v12 ); /*0x733f09*/
  }
  v39 = 0; /*0x733f0e*/
  v44 = *(_DWORD *)(v4 + 16); /*0x733f18*/
  if ( v44 > 0 ) /*0x733f1c*/
  {
    while ( 1 ) /*0x733f2f*/
    {
      v17 = *(_DWORD **)(*(_DWORD *)(v4 + 4) + 4 * v39); /*0x733f2f*/
      v18 = (const char *)((*(int (__thiscall **)(_DWORD *))(*v17 + 136))(v17) + 36); /*0x733f43*/
      v19 = 0; /*0x733f46*/
      v43 = *(_DWORD *)(v37 + 16); /*0x733f4d*/
      if ( v43 <= 0 ) /*0x733f51*/
      {
LABEL_27:
        v20 = -1; /*0x733fab*/
      }
      else
      {
        v38 = *(const char ***)(v37 + 4); /*0x733f56*/
        while ( strcmp(v18, *v38) ) /*0x733f8d*/
        {
          ++v19; /*0x733f9b*/
          ++v38; /*0x733fa1*/
          if ( v19 >= v43 ) /*0x733fa5*/
          {
            v11 = v36; /*0x733fa7*/
            goto LABEL_27; /*0x733fa7*/
          }
        }
        v11 = v36; /*0x734046*/
        v20 = v19; /*0x73404a*/
      }
      v21 = v17[135]; /*0x733fb4*/
      v22 = *(_DWORD *)(v11[1] + 4 * v20); /*0x733fbc*/
      v23 = (*(int (__thiscall **)(_DWORD *))(*v17 + 136))(v17); /*0x733fbf*/
      v24 = v22 + (*(int (__thiscall **)(int, int))(*(_DWORD *)v23 + 132))(v23, v21); /*0x733fd0*/
      v11 = v36; /*0x733fd2*/
      v25 = v44; /*0x733fdd*/
      *(_DWORD *)(v36[1] + 4 * v20) = v24; /*0x733fe1*/
      if ( ++v39 >= v25 ) /*0x733fef*/
        break; /*0x733fef*/
      v4 = v42; /*0x733f24*/
    }
  }
  v26 = -1; /*0x733ff9*/
  *a4 = 0; /*0x733ffc*/
  if ( !v41 ) /*0x734008*/
    goto LABEL_39; /*0x734008*/
  for ( i = 0; i < v40; ++i ) /*0x734012*/
  {
    if ( strcmp(v41, *(const char **)(*(_DWORD *)(v37 + 4) + 4 * i)) ) /*0x734028*/
    {
      v28 = *(_DWORD *)(v11[1] + 4 * i); /*0x734061*/
      if ( v28 < a3 && v28 > *a4 ) /*0x73406e*/
      {
        *a4 = v28; /*0x734070*/
        v26 = i; /*0x734072*/
      }
    }
  }
  if ( !*a4 ) /*0x734081*/
  {
LABEL_39:
    v29 = 0; /*0x73408a*/
    v30 = -1; /*0x73408c*/
    v31 = 0; /*0x73408f*/
    if ( v40 > 0 ) /*0x734093*/
    {
      v32 = (int *)v11[1]; /*0x734095*/
      do /*0x7340a8*/
      {
        if ( *v32 > v29 ) /*0x73409c*/
        {
          v29 = *v32; /*0x73409e*/
          v30 = v31; /*0x7340a0*/
        }
        ++v31; /*0x7340a2*/
        ++v32; /*0x7340a3*/
      }
      while ( v31 < v40 ); /*0x7340a8*/
    }
    v26 = v30; /*0x7340ae*/
    *a4 = v29; /*0x7340b0*/
  }
  v33 = v41; /*0x7340b2*/
  if ( v26 != -1 ) /*0x7340b9*/
    v33 = *(const char **)(*(_DWORD *)(v37 + 4) + 4 * v26); /*0x7340c2*/
  v34 = (char *)__2_YAPAXI_Z(0x64u); /*0x7340cf*/
  if ( v33 ) /*0x7340d3*/
    strcpy(v34, v33); /*0x7340e9*/
  if ( v37 ) /*0x7340f8*/
    (**(void (__thiscall ***)(int, int))v37)(v37, 1); /*0x7340fe*/
  if ( v11 ) /*0x734102*/
    (*(void (__thiscall **)(_DWORD *, int))*v11)(v11, 1); /*0x73410a*/
  return v34; /*0x73410c*/
}
}
} // namespace gamemd

// 0x734E60
namespace gamemd {
wchar_t * GetStringCSF(wchar_t * Format, unsigned int * a2, CampaignScore * aP3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__fastcall GetStringCSF(wchar_t *Format, _DWORD *a2, CampaignScore *aP3, int a4)
{
  wchar_t *v8; // esi
  if ( a2 ) /*0x734e68*/
    *a2 = 0; /*0x734e6a*/
  if ( !dword_B1CF74 ) /*0x734e77*/
    return (wchar_t *)&stru_830620[86556]; /*0x734e7a*/
  _DWORD * v7 = bsearch(Format, dword_B1CF74, (ObjectClass *)unk_B1CF6C, 0x28u, _strcmpi); /*0x734e93*/
  if ( v7 ) /*0x734e9d*/
  {
    if ( a2 ) /*0x734ea1*/
      *a2 = *((_DWORD *)unk_B1CF7C + v7[9]); /*0x734eaf*/
    return (wchar_t *)*((_DWORD *)unk_B1CF78 + v7[9]); /*0x734ebc*/
  }
  else
  {
    v8 = (wchar_t *)__2_YAPAXI_Z(0x208u); /*0x734ed6*/
    swprintf(v8 + 2, (const size_t)&stru_830620[86528], Format, aP3); /*0x734ee4*/
    Debug::Log(); /*0x734ef5*/
    *(_DWORD *)v8 = unk_B1CF88; /*0x734f05*/
    unk_B1CF88 = v8; /*0x734f08*/
    return v8 + 2; /*0x734f03*/
  }
}
}
} // namespace gamemd

// 0x734F50
namespace gamemd {
int E4Recv_734F50::sub_734F50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_734F50(void *this)
{
  int result; // eax

  result = unk_B1CF84; /*0x734f50*/
  if ( (void *)unk_B1CF84 != this ) /*0x734f5a*/
  {
    WinMain::ShutdownCleanup(); /*0x734f5c*/
    unk_B1CF84 = (int)this; /*0x734f67*/
    return CSFClass::LoadFile((const char *)unk_B1CF68); /*0x734f6d*/
  }
  return result; /*0x734f72*/
}
}
} // namespace gamemd

// 0x734F80
namespace gamemd {
int E4Recv_734F80::sub_734F80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_734F80(void *this)
{
  int result; // eax

  result = unk_B1CF60; /*0x734f80*/
  if ( (void *)unk_B1CF60 != this ) /*0x734f8a*/
  {
    WinMain::ShutdownCleanup(); /*0x734f8c*/
    unk_B1CF60 = (int)this; /*0x734f97*/
    return CSFClass::LoadFile((const char *)unk_B1CF68); /*0x734f9d*/
  }
  return result; /*0x734fa2*/
}
}
} // namespace gamemd

// 0x734FB0
namespace gamemd {
int sub_734FB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_734FB0()
{
  return unk_B1CF84; /*0x734fb5*/
}
}
} // namespace gamemd

// 0x734FC0
namespace gamemd {
int sub_734FC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_734FC0()
{
  return unk_B1CF60; /*0x734fc5*/
}
}
} // namespace gamemd

// 0x735120
namespace gamemd {
char * CharToWideString(unsigned char * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall CharToWideString(_BYTE *a1)
{
  char *result; // eax

  if ( !a1 ) /*0x735122*/
    return 0; /*0x735124*/
  result = (char *)&DataGlobal_B13F24 + 2048 * unk_B1CF94; /*0x735133*/
  int v2 = 1024; /*0x73513b*/
  _WORD * v3 = result; /*0x735140*/
  while ( *a1 ) /*0x73512d*/
  {
    if ( !v2 ) /*0x735146*/
      break; /*0x735146*/
    *v3++ = (unsigned __int8)*a1++; /*0x73514c*/
    if ( v2 != -1 ) /*0x735156*/
      --v2; /*0x735158*/
  }
  *v3 = 0; /*0x73515e*/
  *((_WORD *)result + 1023) = 0; /*0x735163*/
  unk_B1CF94 = ((_BYTE)unk_B1CF94 + 1) & 7; /*0x735179*/
  return result; /*0x735126*/
}
}
} // namespace gamemd

// 0x735370
namespace gamemd {
int sub_735370()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_735370()
{
  xmmword_B1CFA8 = 0; /*0x735372*/
  DataGlobal_B1CFAC = 0; /*0x735377*/
  DataGlobal_B1CFB0 = 0; /*0x73537c*/
  DataGlobal_B1CFB4 = 0; /*0x735381*/
  return 0; /*0x735386*/
}
}
} // namespace gamemd

// 0x735390
namespace gamemd {
int sub_735390()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_735390()
{
  aP6 = xmmword_B1CFA8; /*0x7353a1*/
  DataGlobal_B1CFC4 = DataGlobal_B1CFAC; /*0x7353ab*/
  DataGlobal_B1CFC8 = DataGlobal_B1CFB0; /*0x7353b1*/
  DataGlobal_B1CFCC = DataGlobal_B1CFB4; /*0x7353b7*/
  return DataGlobal_B1CFB4; /*0x7353bc*/
}
}
} // namespace gamemd

// 0x730660
namespace gamemd {
int unknown_libname_34()
{
    void *unknown_libname_34()
{
    FileTree::CleanupAll();
    return LoadingScreen::LoadSHPs();
}
}
} // namespace gamemd

// 0x730740
namespace gamemd {
int sub_730740()
{
{
    return g_CommandLineFlags;
}
}
} // namespace gamemd

// 0x730750
namespace gamemd {
int sub_730750()
{
{
    return DataGlobal_A8EB88;
}
}
} // namespace gamemd

// 0x730760
namespace gamemd {
int sub_730760()
{
{
    DataGlobal_B0FDE0 = 0;
    DataGlobal_B0FDE4 = 0;
    DataGlobal_B0FDE8 = 0;
    DataGlobal_B0FDEC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x730780
namespace gamemd {
void sub_730780()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0FDF8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x7307B0
namespace gamemd {
void sub_7307B0()
{
{
    DataGlobal_B0FE48 = DataGlobal_B0FDF8 / 60.0;
}
}
} // namespace gamemd

// 0x7307D0
namespace gamemd {
void sub_7307D0()
{
{
    DataGlobal_B0FE30 = 1.0 / DataGlobal_B0FE48;
}
}
} // namespace gamemd

// 0x7307F0
namespace gamemd {
void sub_7307F0()
{
{
    DataGlobal_B0FE28 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x730810
namespace gamemd {
void sub_730810()
{
{
    DataGlobal_B0FE00 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x730830
namespace gamemd {
void sub_730830()
{
{
    DataGlobal_B0FDD8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x730850
namespace gamemd {
long long sub_730850()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0FDD8 - DataGlobal_B0FE00);
    result = Math::RoundToInt(v0 * DataGlobal_B0FDF8 * 0.5);
    DataGlobal_B0FE50 = result;
    return result;
}
}
} // namespace gamemd

// 0x730890
namespace gamemd {
void sub_730890()
{
{
    DataGlobal_B0FE08 = Math::ArcTan((double)DataGlobal_B0FE50 * 0.00390625);
}
}
} // namespace gamemd

// 0x7308C0
namespace gamemd {
void sub_7308C0()
{
{
    DataGlobal_B0FE20 = Math::ArcTan((double)(2 * DataGlobal_B0FE50) / DataGlobal_B0FDF8);
}
}
} // namespace gamemd

// 0x7308F0
namespace gamemd {
long long sub_7308F0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0FE50) + 0.5);
    DataGlobal_B0FE44 = result;
    return result;
}
}
} // namespace gamemd

// 0x730920
namespace gamemd {
int sub_730920()
{
{
    DataGlobal_B0FDF0 = 0;
    DataGlobal_B0FDF2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x730930
namespace gamemd {
int sub_730930()
{
{
    DataGlobal_B0FE10 = 0;
    DataGlobal_B0FE14 = 0;
    DataGlobal_B0FE18 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x730950
namespace gamemd {
int sub_730950()
{
{
    DataGlobal_B0FE40 = 0;
    DataGlobal_B0FE38 = 128;
    DataGlobal_B0FE3C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x730AD0
namespace gamemd {
int sub_730AD0()
{
return 16454;
}
} // namespace gamemd

// 0x730AE0
namespace gamemd {
int sub_730AE0()
{
return 240;
}
} // namespace gamemd

// 0x731A90
namespace gamemd {
int j_FactoryClass_GetFlag()
{
    char j_FactoryClass_GetFlag(void)
{
    return FactoryClass::GetFlag();
}
}
} // namespace gamemd

// 0x731BE0
namespace gamemd {
void sub_731BE0()
{
{
    DataGlobal_B0FE58 = 0;
}
}
} // namespace gamemd

// 0x731D90
namespace gamemd {
wchar_t * FillUnitTooltipUI(wchar_t * Destination, wchar_t * Source)
{
{
    wchar_t *v2;
    const wchar_t *v3;
    wchar_t *v4;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    wchar_t *StringCSF;
    wchar_t *v12;
    CampaignScore *v13;
    CampaignScore Destinationa[5];
    v2 = Destination;
    if ( *(int *)(*(int *)&DataGlobal_B05488[43492] + 16) && Source )
  {
    wcscpy((wchar_t *)Destinationa, Source);
    _wcsupr(Destinationa);
    v3 = *(const wchar_t **)&HouseClass_Player[44924];
    if ( *(int *)&HouseClass_Player[44924] )
    {
    v6 = 0;
    v7 = 0;
    if ( *(int *)&HouseClass_Player[44924] > 0 )
      {
    do
        {
    v8 = *(int *)(*(int *)&HouseClass_Player[44912] + 4 * v7);
    if ( v8 )
          {
    if ( (*(char *)(v8 + 20) & 1) != 0 )
            {
    v9 = *(int *)(v8 + 540);
    v10 = (*(int (__thiscall **)(int))(*(int *)(v8) + 136))(v8);
    v6 += (*(int (__thiscall **)(int, int))(*(int *)(v10) + 132))(v10, v9);
    v2 = Destination;
            }
          }
    ++v7;
        }
    while ( v7 < (int)v3 );
      }
    StringCSF = GetStringCSF((wchar_t *)&DataGlobal_830620[85964], 0, &DataGlobal_830620[85880], 1052);
    return (wchar_t *)swprintf(v2, (const size_t)StringCSF, v3, Destinationa);
    }
    else
    {
    v4 = GetStringCSF((wchar_t *)&DataGlobal_830620[85980], 0, &DataGlobal_830620[85880], 1032);
    return (wchar_t *)swprintf(v2, (const size_t)v4, (const wchar_t *const)Destinationa, v13);
    }
  }
    else
  {
    v12 = GetStringCSF((wchar_t *)&DataGlobal_830620[85948], 0, &DataGlobal_830620[85880], 1022);
    return wcscpy(v2, v12);
  }
}
}
} // namespace gamemd

// 0x732110
namespace gamemd {
int sub_732110(int a1, int (__fastcall *a2)(unsigned int, int) a2, int a3)
{
{
    int v4;
    int v6;
    int result;
    v4 = 0;
    v6 = *(int *)(a1 + 16);
    if ( v6 > 0 )
  {
    do
    result = a2(*(int *)(*(int *)(a1 + 4) + 4 * v4++), a3);
    while ( v4 < v6 );
  }
    return result;
}
}
} // namespace gamemd

// 0x732140
namespace gamemd {
int sub_732140(int a1, unsigned char (__fastcall *a2)(int, int) a2, void (__fastcall *a3)(int, int) a3, int a4, int a5)
{
{
    int result;
    int v7;
    int v9;
    int i;
    result = *(int *)(a1 + 16);
    v7 = 0;
    for ( i = result; v7 < i; ++v7 )
  {
    v9 = *(int *)(*(int *)(a1 + 4) + 4 * v7);
    if ( a2(v9, a4) )
    a3(v9, a5);
    result = i;
  }
    return result;
}
}
} // namespace gamemd

// 0x732190
namespace gamemd {
char sub_732190(int a1, unsigned char (__fastcall *a2)(unsigned int, int) a2, int a3)
{
{
    int v4;
    int v6;
    v4 = 0;
    v6 = *(int *)(a1 + 16);
    if ( v6 <= 0 )
    return 1;
    while ( a2(*(int *)(*(int *)(a1 + 4) + 4 * v4), a3) )
  {
    if ( ++v4 >= v6 )
    return 1;
  }
    return 0;
}
}
} // namespace gamemd

// 0x7321D0
namespace gamemd {
char sub_7321D0(int a1, unsigned char (__fastcall *a2)(unsigned int, int) a2, int a3)
{
{
    int v4;
    int v6;
    v4 = 0;
    v6 = *(int *)(a1 + 16);
    if ( v6 <= 0 )
    return 0;
    while ( !a2(*(int *)(*(int *)(a1 + 4) + 4 * v4), a3) )
  {
    if ( ++v4 >= v6 )
    return 0;
  }
    return 1;
}
}
} // namespace gamemd

// 0x7325C0
namespace gamemd {
BOOL E4Recv_7325C0::sub_7325C0()
{
{
    return this->Vf44() != 6 && *(char *)(this->Vf132() + 3516)
    && this->Vf316();
}
}
} // namespace gamemd

// 0x732C30
namespace gamemd {
char IDTechnoClassMatches(void * a1, int a2)
{
{
    int v3;
    int v4;
    v3 = *(int *)(a2 + 16);
    v4 = 0;
    if ( v3 <= 0 )
    return 0;
    while ( !(unsigned char)ObjectClass::StepCleanup(a1, *(void **)(*(int *)(a2 + 4) + 4 * v4)) || !(*(unsigned char (__thiscall **)(void *))(*(int *)(a1) + 316))(a1) && (!a1 || (*(int (__thiscall **)(void *))(*(int *)(a1) + 44))(a1) != 6 || !*(int *)((*(int (__thiscall **)(void *))(*(int *)(a1) + 132))(a1) + 1032)) )
  {
    if ( ++v4 >= v3 )
    return 0;
  }
    return 1;
}
}
} // namespace gamemd

// 0x734430
namespace gamemd {
void sub_734430()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B11E98 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x734460
namespace gamemd {
void sub_734460()
{
{
    DataGlobal_B1CF50 = DataGlobal_B11E98 / 60.0;
}
}
} // namespace gamemd

// 0x734480
namespace gamemd {
void sub_734480()
{
{
    DataGlobal_B1CF38 = 1.0 / DataGlobal_B1CF50;
}
}
} // namespace gamemd

// 0x7344A0
namespace gamemd {
void sub_7344A0()
{
{
    DataGlobal_B1BF30 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x7344C0
namespace gamemd {
void sub_7344C0()
{
{
    DataGlobal_B12EA0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x7344E0
namespace gamemd {
void sub_7344E0()
{
{
    DataGlobal_B0FE78 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x734500
namespace gamemd {
long long sub_734500()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0FE78 - DataGlobal_B12EA0);
    result = Math::RoundToInt(v0 * DataGlobal_B11E98 * 0.5);
    DataGlobal_B1CF5C = result;
    return result;
}
}
} // namespace gamemd

// 0x734540
namespace gamemd {
void sub_734540()
{
{
    DataGlobal_B13EA8 = Math::ArcTan((double)DataGlobal_B1CF5C * 0.00390625);
}
}
} // namespace gamemd

// 0x734570
namespace gamemd {
void sub_734570()
{
{
    DataGlobal_B1BF28 = Math::ArcTan((double)(2 * DataGlobal_B1CF5C) / DataGlobal_B11E98);
}
}
} // namespace gamemd

// 0x7345A0
namespace gamemd {
long long sub_7345A0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B1CF5C) + 0.5);
    DataGlobal_B1CF4C = result;
    return result;
}
}
} // namespace gamemd

// 0x7345D0
namespace gamemd {
int sub_7345D0()
{
{
    DataGlobal_B0FE90 = 0;
    DataGlobal_B0FE92 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7345E0
namespace gamemd {
int sub_7345E0()
{
{
    *(int *)&DataGlobal_B13EB0[104] = 0;
    *(int *)&DataGlobal_B13EB0[108] = 0;
    *(int *)&DataGlobal_B13EB0[112] = 0;
    return 0;
}
}
} // namespace gamemd

// 0x734600
namespace gamemd {
int sub_734600()
{
{
    DataGlobal_B1CF48 = 0;
    DataGlobal_B1CF40 = 128;
    DataGlobal_B1CF44 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x734620
namespace gamemd {
int sub_734620()
{
{
    DataGlobal_B0FE80 = 0;
    DataGlobal_B0FE84 = 0;
    DataGlobal_B0FE88 = 0;
    DataGlobal_B0FE8C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x734FE0
namespace gamemd {
int WideMessageBox(CampaignScore * aP0, const WCHAR * a1, LPCWCH lpWideCharStr, UINT uType)
{
{
    CHAR Caption[2048];
    CHAR MultiByteStr[5120];
    WideCharToMultiByte(0, 0, a1, -1, MultiByteStr, 5120, 0, 0);
    WideCharToMultiByte(0, 0, lpWideCharStr, -1, Caption, 2048, 0, 0);
    return MessageBoxA((HWND)aP0, MultiByteStr, Caption, uType);
}
}
} // namespace gamemd

// 0x735060
namespace gamemd {
unsigned char CharToWide_Bulk(unsigned short * a1, unsigned char * a2, int a3)
{
{
    unsigned char result;
    for ( result = *a2; *a2; result = *a2 )
  {
    if ( !a3 )
    break;
    *a1++ = result;
    ++a2;
    if ( a3 != -1 )
    --a3;
  }
    *a1 = 0;
    return result;
}
}
} // namespace gamemd

// 0x735090
namespace gamemd {
void WideToChar_Copy(unsigned char * a1, char * a2, int a3)
{
{
    char v4;
    while ( *(short *)a2 )
  {
    if ( !a3 )
    break;
    v4 = *a2;
    a2 += 2;
    *a1++ = v4;
    if ( a3 != -1 )
    --a3;
  }
    *a1 = 0;
}
}
} // namespace gamemd

// 0x7350C0
namespace gamemd {
char * ToWideStringChar(IUnknown * aP0)
{
{
    char *result;
    int v2;
    char *v3;
    char v4;
    if ( !aP0 )
    return 0;
    result = &DataGlobal_B05488[22428][1024 * DataGlobal_B1CF90 + 21104];
    v2 = 1024;
    v3 = result;
    while ( LOWORD(aP0->field_0) )
  {
    if ( !v2 )
    break;
    v4 = aP0->field_0;
    aP0 = (IUnknown *)((char *)(aP0) + 2);
    *v3++ = v4;
    if ( v2 != -1 )
    --v2;
  }
    *v3 = 0;
    result[1023] = 0;
    DataGlobal_B1CF90 = ((char)DataGlobal_B1CF90 + 1) & 7;
    return result;
}
}
} // namespace gamemd

// 0x735180
namespace gamemd {
void sub_735180()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B1CFD0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x7351B0
namespace gamemd {
void sub_7351B0()
{
{
    DataGlobal_B1D0B0 = DataGlobal_B1CFD0 / 60.0;
}
}
} // namespace gamemd

// 0x7351D0
namespace gamemd {
void sub_7351D0()
{
{
    DataGlobal_B1D008 = 1.0 / DataGlobal_B1D0B0;
}
}
} // namespace gamemd

// 0x7351F0
namespace gamemd {
void sub_7351F0()
{
{
    DataGlobal_B1D000 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x735210
namespace gamemd {
void sub_735210()
{
{
    DataGlobal_B1CFD8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x735230
namespace gamemd {
void sub_735230()
{
{
    DataGlobal_B1CFA0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x735250
namespace gamemd {
long long sub_735250()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B1CFA0 - DataGlobal_B1CFD8);
    result = Math::RoundToInt(v0 * DataGlobal_B1CFD0 * 0.5);
    DataGlobal_B1D0B8 = result;
    return result;
}
}
} // namespace gamemd

// 0x735290
namespace gamemd {
void sub_735290()
{
{
    DataGlobal_B1CFE0 = Math::ArcTan((double)DataGlobal_B1D0B8 * 0.00390625);
}
}
} // namespace gamemd

// 0x7352C0
namespace gamemd {
void sub_7352C0()
{
{
    DataGlobal_B1CFF8 = Math::ArcTan((double)(2 * DataGlobal_B1D0B8) / DataGlobal_B1CFD0);
}
}
} // namespace gamemd

// 0x7352F0
namespace gamemd {
long long sub_7352F0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B1D0B8) + 0.5);
    DataGlobal_B1D0AC = result;
    return result;
}
}
} // namespace gamemd

// 0x735320
namespace gamemd {
int sub_735320()
{
{
    g_UnitSelectionState = 0;
    return 0;
}
}
} // namespace gamemd

// 0x735330
namespace gamemd {
int sub_735330()
{
{
    DataGlobal_B1CFE8 = 0;
    DataGlobal_B1CFEC = 0;
    DataGlobal_B1CFF0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x735350
namespace gamemd {
int sub_735350()
{
{
    DataGlobal_B1D0A8 = 0;
    DataGlobal_B1D0A0 = 128;
    DataGlobal_B1D0A4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x736C10
namespace gamemd {
char E4Recv_736C10::sub_736C10()
{
{
    int v2;
    int v4[3];
    if ( this->Vf388() != 5 )
    return 0;
    v4[0] = this->M156;
    v4[1] = this->M160;
    v4[2] = this->M164;
    if ( Tactical::IsCellVisible(&DataGlobal_87F7E8, v4) || !(unsigned char)this->M981 )
    return 0;
    v2 = this->M1492;
    if ( v2 )
    *(char *)(v2 + 130) = 1;
    this->Vf928();
    this->Vf248();
    return 1;
}
}
} // namespace gamemd

// 0x7393B0
namespace gamemd {
void nullsub_248()
{
  ;
}
} // namespace gamemd
