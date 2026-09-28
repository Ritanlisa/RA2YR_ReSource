// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_582D30_e4.hpp"
#include "e4/classes/E4Recv_5866C0_e4.hpp"
#include "e4/classes/E4Recv_5AFEF0_e4.hpp"
#include "e4/classes/E4Recv_5D9360_e4.hpp"
#include "e4/classes/E4Recv_692290_e4.hpp"
#include "e4/classes/E4Recv_6A94F0_e4.hpp"
#include "e4/classes/E4Recv_6CF1D0_e4.hpp"
#include "e4/classes/E4Recv_6D1E30_e4.hpp"
#include "e4/classes/E4Recv_721D10_e4.hpp"
#include "e4/classes/E4Recv_728A00_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/SmudgeTypeClass_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Debug_e4.hpp"

// 0x6F19B0
namespace gamemd {
TeamTypeClass * * SmallFunc_6F19B0(char * a1, int a2)
{
  int result; // eax
  int v4; // ebp
  int i; // ebx
  unsigned __int8 *StringByIndex; // eax
  int v7; // esi
  TeamTypeClass *v8; // eax
  _DWORD *Base; // esi
  char Source[32]; // [esp+10h] [ebp-20h] BYREF

  result = INIClass::GetKeyCount(a1->__pad_0, (unsigned __int8 *)g_INI_Key_TRUCKA.?); /*0x6f19c1*/
  v4 = result; /*0x6f19c6*/
  for ( i = 0; i < v4; Base[58] = a2 ) /*0x6f19cc*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, (unsigned __int8 *)g_INI_Key_TRUCKA.?, i); /*0x6f19db*/
    INIClass::GetString(a1, (unsigned __int8 *)g_INI_Key_TRUCKA.?, StringByIndex, &g_INI_DefaultBuffer, Source, 32); /*0x6f19f4*/
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6f1a19*/
      goto LABEL_10; /*0x6f1a19*/
    v7 = 0; /*0x6f1a2a*/
    if ( *(int *)&stru_A8EB00.?[204] > 0 ) /*0x6f1a2e*/
    {
      while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v7) + 36), Source) ) /*0x6f1a4c*/
      {
        if ( ++v7 >= *(int *)&stru_A8EB00.?[204] ) /*0x6f1a56*/
          goto LABEL_7; /*0x6f1a56*/
      }
      Base = *(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v7); /*0x6f1a7f*/
      goto LABEL_11; /*0x6f1a82*/
    }
  LABEL_7:
    v8 = (TeamTypeClass *)RA2_OPNEW(0xF8u); /*0x6f1a5d*/
    if ( v8 ) /*0x6f1a67*/
      Base = TechnoTypeClass::LoadBase(v8, Source); /*0x6f1a75*/
    else
  LABEL_10:
      Base = 0; /*0x6f1a84*/
  LABEL_11:
    result = (*(int (__thiscall **)(_DWORD *, INIClass *))(*Base + 100))(Base, a1); /*0x6f1a86*/
    ++i; /*0x6f1a8e*/
  }
  return result; /*0x6f1aa2*/
}
}
// 0x40D1B0
namespace gamemd {
void sub_40D1B0()
{
  int *v0; // esi
  int v1; // edi
  ObjectClass *v2; // [esp+0h] [ebp-8h]

  *(_DWORD *)&stru_87F5F0.__pad_58[416] = &(void*)(void*)&MouseClass_vftable; /*0x40d1b2*/
  dword_884D00 = (int)&(void*)(void*)&MouseClass_vftable; /*0x40d1bc*/
  v0 = &dword_884B84; /*0x40d1c6*/
  v1 = 4; /*0x40d1cb*/
  do /*0x40d1f0*/
  {
    v0 -= 997; /*0x40d1d0*/
    Array::ForEachReverse(v0 + 20, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x40d1e3*/
    nullsub_57(v2); /*0x40d1ea*/
    --v1; /*0x40d1ef*/
  }
  while ( v1 ); /*0x40d1f0*/
  RadarClass::Destruct((RadarClass *)&stru_87F5F0.__pad_58[416]); /*0x40d1f7*/
}
} // namespace gamemd

// 0x59B6D0
namespace gamemd {
int sub_59B6D0()
{
  int result; // eax
  int *i; // ebx
  signed int j; // esi
  _DWORD *NeighbourContent; // edi

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x59b6d6*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x59b6e0*/
  for ( i = (int *)result; result; i = (int *)result ) /*0x59b6e9*/
  {
    if ( CellClass::IsTerrainType(i) ) /*0x59b6ef*/
    {
      for ( j = 0; j < 8; j += 2 ) /*0x59b6f8*/
      {
        NeighbourContent = Cell::GetNeighbourContent(i, j); /*0x59b702*/
        if ( Cell::IsEmpty(NeighbourContent) ) /*0x59b706*/
          NeighbourContent[14] = dword_AA0E18; /*0x59b714*/
      }
    }
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x59b724*/
  }
  return result; /*0x59b731*/
}
} // namespace gamemd

// 0x59C530
namespace gamemd {
int sub_59C530()
{
  int result; // eax
  int v1; // ecx

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x59c536*/
  for ( result = LayerClass::CellIteratorNext(&dword_87F7E8); result; result = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x59c549*/
  {
    v1 = *(_DWORD *)(result + 56); /*0x59c54b*/
    if ( v1 >= dword_ABAD28 && v1 < dword_ABAD28 + 42 ) /*0x59c55d*/
    {
      *(_DWORD *)(result + 56) = 0; /*0x59c55f*/
      *(_BYTE *)(result + 282) = 0; /*0x59c562*/
    }
  }
  return result; /*0x59c576*/
}
} // namespace gamemd

// 0x5A1F60
namespace gamemd {
char sub_5A1F60()
{
  char v0; // bl
  int i; // eax

  v0 = 1; /*0x5a1f68*/
  Mouse::SetBounds((int)&dword_87F7E8, 0); /*0x5a1f6a*/
  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5a1f74*/
  for ( i = LayerClass::CellIteratorNext(&dword_87F7E8); i; i = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x5a1f85*/
  {
    if ( !v0 ) /*0x5a1f89*/
      break; /*0x5a1f89*/
    v0 = Cliff::ProcessTransitions(i, -1); /*0x5a1f9d*/
  }
  return v0; /*0x5a1faa*/
}
} // namespace gamemd

// 0x5AFEF0
namespace gamemd {
int E4Recv_5AFEF0::sub_5AFEF0()
{
  int v2; // eax

  LocomotionClass::Init(); /*0x5afef3*/
  this->MovingDestination[0] = g_MissionQueueFrame.localVariables[227]; /*0x5aff01*/
  this->MovingDestination[1] = g_MissionQueueFrame.localVariables[228]; /*0x5aff0a*/
  this->MovingDestination[2] = g_MissionQueueFrame.localVariables[229]; /*0x5aff16*/
  this->HeadToCoord[0] = g_MissionQueueFrame.localVariables[227]; /*0x5aff1e*/
  this->HeadToCoord[1] = g_MissionQueueFrame.localVariables[228]; /*0x5aff26*/
  v2 = g_MissionQueueFrame.localVariables[229]; /*0x5aff29*/
  this->IsMoving = 0; /*0x5aff2e*/
  *(_DWORD *)this->LocomotionClass = &(void*)(void*)&MechLocomotionClass_vftable; /*0x5aff32*/
  this->HeadToCoord[2] = v2; /*0x5aff38*/
  *(_DWORD *)&this->LocomotionClass[4] = &(void*)(void*)&MechLocomotionClass_vftable; /*0x5aff3b*/
  return (int)this->LocomotionClass; /*0x5aff44*/
}
} // namespace gamemd

// 0x67B500
namespace gamemd {
int SmallFunc_67B500(unsigned char *** a1, INIClass * edx0, unsigned char * a2, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a1, edx0, a2, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67b51e*/
    return WarheadTypeClass::FindOrCreate(Destination); /*0x67b52b*/
  else
    return a4; /*0x67b539*/
}
} // namespace gamemd

// 0x67BCE0
namespace gamemd {
BuildingTypeClass * SmallFunc_67BCE0(unsigned char *** a0, INIClass * aP1, unsigned char * a2, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a0, aP1, a2, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67bcfe*/
    return BuildingTypeClass::FindOrCreate(Destination); /*0x67bd0b*/
  else
    return a4; /*0x67bd19*/
}
} // namespace gamemd

// 0x67BD80
namespace gamemd {
TerrainTypeClass * SmallFunc_67BD80(unsigned char *** a1, INIClass * edx0, unsigned char * a2, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a1, edx0, a2, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67bd9e*/
    return TerrainTypeClass::FindOrCreate(Destination); /*0x67bdab*/
  else
    return a4; /*0x67bdb9*/
}
} // namespace gamemd

// 0x6E2660
namespace gamemd {
char sub_6E2660(int a1, int a2, int a3, int a4)
{
  Scenario *v5; // [esp+0h] [ebp-4h]

  *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x6e2669*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x6e266f*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1426] = -1; /*0x6e2675*/
  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x6e267f*/
  BuildingClass::TogglePower2((BuildingClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6e268a*/
  BuildingClass::TogglePower((BuildingClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6e2695*/
  stru_87F5F0.__pad_E12[1432] = 0; /*0x6e269a*/
  stru_87F5F0.__pad_E12[1433] = 0; /*0x6e26a0*/
  stru_87F5F0.__pad_E12[1434] = 0; /*0x6e26a6*/
  Scenario::ClearScreen(v5); /*0x6e26ac*/
  return 1; /*0x6e26b3*/
}
} // namespace gamemd

// 0x6E3120
namespace gamemd {
char SmallFunc_6E3120(int _8, void ** a1, unsigned int * a2, IUnknown * aP3, int _18, unsigned int * a5, int a7, void * a3, void * a4, void * a6)
{
  HouseClass *v7; // esi
  int Field11; // eax
  HouseClass *v10; // [esp+0h] [ebp-4h]

  v7 = *(HouseClass **)(a1 + 144); /*0x6e3121*/
  if ( !a6 ) /*0x6e312d*/
    return 0; /*0x6e312d*/
  if ( v7 == (HouseClass *)8997 ) /*0x6e3135*/
  {
    Field11 = Property::GetField11(a6); /*0x6e3137*/
  }
  else
  {
    if ( v7 == (HouseClass *)-1 ) /*0x6e3141*/
      return 0; /*0x6e3163*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v7) ) /*0x6e3145*/
      Field11 = BuildingType::FindOwnerHouse(v7); /*0x6e3150*/
    else
      Field11 = HouseClass::FindOwner(v7); /*0x6e3157*/
  }
  if ( !Field11 ) /*0x6e315e*/
    return 0; /*0x6e315e*/
  HouseClass::RespawnStartingBuildings(v10, a2, a3, (int)v7); /*0x6e3168*/
  return 1; /*0x6e3162*/
}
} // namespace gamemd

// 0x728A00
namespace gamemd {
int E4Recv_728A00::sub_728A00()
{
  LocomotionClass::Init(); /*0x728a03*/
  this->CurrentState[0] = 0; /*0x728a0d*/
  this->CurrentState[1] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[352]; /*0x728a16*/
  this->CurrentState[2] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[356]; /*0x728a1e*/
  this->CurrentState[3] = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[360]; /*0x728a27*/
  this->CurrentState[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x728a30*/
  this->CurrentState[6] = 0; /*0x728a33*/
  this->CurrentState[7] = 0; /*0x728a36*/
  IDA_LOBYTE(this->CurrentState[8]) = 0; /*0x728a39*/
  *(_DWORD *)this->LocomotionClass = &(void*)(void*)&TunnelLocomotionClass_vftable; /*0x728a3c*/
  *(_DWORD *)&this->LocomotionClass[4] = &(void*)(void*)&TunnelLocomotionClass_vftable; /*0x728a42*/
  return (int)this->LocomotionClass; /*0x728a4b*/
}
} // namespace gamemd
