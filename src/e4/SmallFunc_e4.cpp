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
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Cliff_e4.hpp"
#include "e4/classes/Property_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"

// 0x6F19B0
namespace gamemd {  // G42.18 ns repair
TeamTypeClass * * SmallFunc_6F19B0(char * a1, int a2)
{
  int result; // eax
  int v4; // ebp
  int i; // ebx
  uint8_t *StringByIndex; // eax
  int v7; // esi
  TeamTypeClass *v8; // eax
  unsigned int *Base; // esi
  char Source[32]; // [esp+10h] [ebp-20h] BYREF

  result = INIClass::GetKeyCount(a1->__pad_0, (uint8_t *)g_INI_Key_TRUCKA.DebrisMaximums); /*0x6f19c1*/
  v4 = result; /*0x6f19c6*/
  for ( i = 0; i < v4; Base[58] = a2 ) /*0x6f19cc*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex( /*0x6f19db*/
                                         a1->__pad_0,
                                         (uint8_t *)g_INI_Key_TRUCKA.DebrisMaximums,
                                         i);
    INIClass::GetString( /*0x6f19f4*/
      a1,
      (uint8_t *)g_INI_Key_TRUCKA.DebrisMaximums,
      StringByIndex,
      &g_INI_DefaultBuffer,
      Source,
      32);
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6f1a19*/
      goto LABEL_10; /*0x6f1a19*/
    v7 = 0; /*0x6f1a2a*/
    if ( *(int *)&((unsigned int *)&stru_A8EB00)[204] > 0 ) /*0x6f1a2e*/
    {
      while ( _strcmpi((char *)(*(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[192] + 4 * v7) + 36), Source) ) /*0x6f1a4c*/
      {
        if ( ++v7 >= *(int *)&((unsigned int *)&stru_A8EB00)[204] ) /*0x6f1a56*/
          goto LABEL_7; /*0x6f1a56*/
      }
      Base = *(unsigned int **)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[192] + 4 * v7); /*0x6f1a7f*/
      goto LABEL_11; /*0x6f1a82*/
    }
  LABEL_7:
    v8 = (TeamTypeClass *)operator new(0xF8u); /*0x6f1a5d*/
    if ( v8 ) /*0x6f1a67*/
      Base = TechnoTypeClass::LoadBase(v8, Source); /*0x6f1a75*/
    else
  LABEL_10:
      Base = 0; /*0x6f1a84*/
  LABEL_11:
    result = Base->LoadFromINI_15(a1); /*0x6f1a86*/
    ++i; /*0x6f1a8e*/
  }
  return (gamemd::TeamTypeClass **)(result);
}
}  // G42.18 ns repair
// 0x40D1B0
namespace gamemd {
void sub_40D1B0()
{

  *(unsigned int *)&DataGlobal_87F7E8 = (unsigned int)(&vt_MouseClass); /*0x40d1b2*/
  dword_884D00 = (int)&vt_MouseClass; /*0x40d1bc*/
  int *v0; // esi
  v0 = (int *)(&dword_884B84); /*0x40d1c6*/
  int v1; // edi
  v1 = 4; /*0x40d1cb*/
  do /*0x40d1f0*/
  {
    v0 -= 997; /*0x40d1d0*/
    Array::ForEachReverse(v0 + 20, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x40d1e3*/
  ObjectClass *v2; // [esp+0h] [ebp-8h]
    nullsub_57(v2); /*0x40d1ea*/
    --v1; /*0x40d1ef*/
  }
  while ( v1 ); /*0x40d1f0*/
  ((RadarClass *)&DataGlobal_87F7E8)->Destruct(); /*0x40d1f7*/
}
} // namespace gamemd

// 0x59B6D0
namespace gamemd {
int sub_59B6D0()
{

  (&dword_87F7E8)->CellIteratorReset(); /*0x59b6d6*/
  int result; // eax
  result = (&dword_87F7E8)->CellIteratorNext(); /*0x59b6e0*/
  int *i; // ebx
  for ( i = (int *)result; result; i = (int *)result ) /*0x59b6e9*/
  {
    if ( CellClass::IsTerrainType((gamemd::CellClass *)(i)) ) /*0x59b6ef*/
    {
  signed int j; // esi
      for ( j = 0; j < 8; j += 2 ) /*0x59b6f8*/
      {
  unsigned int *NeighbourContent; // edi
        NeighbourContent = (unsigned int *)((i)->GetNeighbourContent(j));
        if ( (NeighbourContent)->IsEmpty() ) /*0x59b706*/
          NeighbourContent[14] = dword_AA0E18; /*0x59b714*/
      }
    }
    result = (&dword_87F7E8)->CellIteratorNext(); /*0x59b724*/
  }
  return result; /*0x59b731*/
}
} // namespace gamemd

// 0x59C530
namespace gamemd {
int sub_59C530()
{

  (&dword_87F7E8)->CellIteratorReset(); /*0x59c536*/
  int result; // eax
  for ( result = (&dword_87F7E8)->CellIteratorNext(); result; result = (&dword_87F7E8)->CellIteratorNext() ) /*0x59c549*/
  {
  int v1; // ecx
    v1 = result->u32_38; /*0x59c54b*/
    if ( v1 >= dword_ABAD28 && v1 < dword_ABAD28 + 42 ) /*0x59c55d*/
    {
      result->u32_38 = 0; /*0x59c55f*/
      result->u8_11A = 0; /*0x59c562*/
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
  v0 = 1; /*0x5a1f68*/
  Mouse::SetBounds((int)&dword_87F7E8, 0); /*0x5a1f6a*/
  (&dword_87F7E8)->CellIteratorReset(); /*0x5a1f74*/
  int i; // eax
  for ( i = (&dword_87F7E8)->CellIteratorNext(); i; i = (&dword_87F7E8)->CellIteratorNext() ) /*0x5a1f85*/
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


  ((LocomotionClass *)this)->Init(); /*0x5afef3*/
  this->MovingDestination[0] = g_MissionQueueFrame.localVariables[227]; /*0x5aff01*/
  this->MovingDestination[1] = g_MissionQueueFrame.localVariables[228]; /*0x5aff0a*/
  this->MovingDestination[2] = g_MissionQueueFrame.localVariables[229]; /*0x5aff16*/
  this->HeadToCoord[0] = g_MissionQueueFrame.localVariables[227]; /*0x5aff1e*/
  this->HeadToCoord[1] = g_MissionQueueFrame.localVariables[228]; /*0x5aff26*/
  int v2; // eax
  v2 = g_MissionQueueFrame.localVariables[229]; /*0x5aff29*/
  this->IsMoving = 0; /*0x5aff2e*/
  *(unsigned int *)this->LocomotionClass = &vt_MechLocomotionClass; /*0x5aff32*/
  this->HeadToCoord[2] = v2; /*0x5aff38*/
  *&this->M4 = (unsigned int)(&vt_MechLocomotionClass); /*0x5aff3b*/
  return (int)this->LocomotionClass; /*0x5aff44*/

}
} // namespace gamemd

// 0x67B500
namespace gamemd {
int SmallFunc_67B500(unsigned char *** a1, INIClass * edx0, unsigned char * a2, int a4)
{

  char Destination[128]; // [esp+0h] [ebp-80h] BYREF
  if ( ((INIClass *)a1)->GetString(edx0, a2, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67b51e*/
    return ((gamemd::ObjectClass *)(Destination))->FindOrCreate(); /*0x67b52b*/
  else
    return a4; /*0x67b539*/
}
}
// 0x67BCE0
namespace gamemd {
BuildingTypeClass * SmallFunc_67BCE0(unsigned char *** a0, INIClass * aP1, unsigned char * a2, int a4)
{

  char Destination[128]; // [esp+0h] [ebp-80h] BYREF
  if ( ((INIClass *)a0)->GetString(aP1, a2, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67bcfe*/
    return ((BuildingTypeClass *)(Destination))->FindOrCreate(); /*0x67bd0b*/
  else
    return (gamemd::BuildingTypeClass *)(a4); /*0x67bd19*/
}
}
// 0x67BD80
namespace gamemd {
TerrainTypeClass * SmallFunc_67BD80(unsigned char *** a1, INIClass * edx0, unsigned char * a2, int a4)
{

  char Destination[128]; // [esp+0h] [ebp-80h] BYREF
  if ( ((INIClass *)a1)->GetString(edx0, a2, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67bd9e*/
    return ((TerrainTypeClass *)(Destination))->FindOrCreate(); /*0x67bdab*/
  else
    return (gamemd::TerrainTypeClass *)(a4); /*0x67bdb9*/
}
}
// 0x6E2660
namespace gamemd {
char sub_6E2660(int a1, int a2, int a3, int a4)
{

  *(unsigned int *)&g_RadarBlipPool = 0; /*0x6e2669*/
  *(unsigned int *)&g_RadarBlipManager = 0; /*0x6e266f*/
  *(unsigned int *)&DataGlobal_880994 = -1; /*0x6e2675*/
  Mouse::SetBounds((int)&DataGlobal_87F7E8, 0); /*0x6e267f*/
  ((BuildingClass *)&DataGlobal_87F7E8)->TogglePower2(0); /*0x6e268a*/
  ((BuildingClass *)&DataGlobal_87F7E8)->TogglePower(0); /*0x6e2695*/
  DataGlobal_88099A = 0; /*0x6e269a*/
  DataGlobal_88099B = 0; /*0x6e26a0*/
  DataGlobal_88099C = 0; /*0x6e26a6*/
  Scenario *v5; // [esp+0h] [ebp-4h]
  Scenario::ClearScreen(v5); /*0x6e26ac*/
  return 1; /*0x6e26b3*/
}
} // namespace gamemd

// 0x6E3120
namespace gamemd {
char SmallFunc_6E3120(int _8, void ** a1, unsigned int * a2, IUnknown * aP3, int _18, unsigned int * a5, int a7, void * a3, void * a4, void * a6)
{
  int Field11; // eax

  HouseClass *v7; // esi
  v7 = *(HouseClass **)(a1 + 144); /*0x6e3121*/
  if ( !a6 ) /*0x6e312d*/
    return 0; /*0x6e312d*/
  if ( v7 == 8997 ) /*0x6e3135*/
  {
    Field11 = (a6)->GetField11(); /*0x6e3137*/
  }
  else
  {
    if ( v7 == (HouseClass *)-1 ) /*0x6e3141*/
      return 0; /*0x6e3163*/
    if ( (uint8_t)(v7)->IsSpecialType() ) /*0x6e3145*/
      Field11 = ((BuildingType *)(v7))->FindOwnerHouse(); /*0x6e3150*/
    else
      Field11 = (v7)->FindOwner(); /*0x6e3157*/
  }
  if ( !Field11 ) /*0x6e315e*/
    return 0; /*0x6e315e*/
  HouseClass *v10; // [esp+0h] [ebp-4h]
  HouseClass::RespawnStartingBuildings(v10, a2, a3, (int)v7); /*0x6e3168*/
  return 1; /*0x6e3162*/
}
} // namespace gamemd

// 0x728A00
namespace gamemd {
int E4Recv_728A00::sub_728A00()
{

  ((LocomotionClass *)this)->Init(); /*0x728a03*/
  this->CurrentState[0] = 0; /*0x728a0d*/
  this->CurrentState[1] = *(unsigned int *)&DataGlobal_B0F910; /*0x728a16*/
  this->CurrentState[2] = *(unsigned int *)&DataGlobal_B0F914; /*0x728a1e*/
  this->CurrentState[3] = *(unsigned int *)&DataGlobal_B0F918; /*0x728a27*/
  this->CurrentState[4] = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x728a30*/
  this->CurrentState[6] = 0; /*0x728a33*/
  this->CurrentState[7] = 0; /*0x728a36*/
  LOBYTE(this->CurrentState[8]) = 0; /*0x728a39*/
  *(unsigned int *)this->LocomotionClass = &vt_TunnelLocomotionClass; /*0x728a3c*/
  *&this->M4 = (unsigned int)(&vt_TunnelLocomotionClass); /*0x728a42*/
  return (int)this->LocomotionClass; /*0x728a4b*/

}
} // namespace gamemd
