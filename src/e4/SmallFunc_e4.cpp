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
namespace gamemd {
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

  result = (int)(INIClass::GetKeyCount(a1->__pad_0, (uint8_t *)((char *)&g_INI_Key_TRUCKA))); /*0x6f19c1*/
  v4 = result; /*0x6f19c6*/
  for ( i = 0; i < v4; Base[58] = a2 ) /*0x6f19cc*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(a1->__pad_0, (uint8_t *)((char *)&g_INI_Key_TRUCKA), i); /*0x6f19db*/
    ((INIClass*)(gamemd::INIClass *)(a1))->GetString((uint8_t *)((char *)&g_INI_Key_TRUCKA), (unsigned char *)(gamemd::INIClass *)(StringByIndex), (char *)(gamemd::INIClass *)(&g_INI_DefaultBuffer), (char *)(int)(Source), 32); /*0x6f19f4*/
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6f1a19*/
      goto LABEL_10; /*0x6f1a19*/
    v7 = 0; /*0x6f1a2a*/
    if ( *(int *)(unsigned int *)((char *)&stru_A8EB00 + 204) > 0 ) /*0x6f1a2e*/
    {
      while ( _strcmpi((char *)(*(unsigned int *)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 192) + 4 * v7) + 36), Source) ) /*0x6f1a4c*/
      {
        if ( ++v7 >= *(int *)(unsigned int *)((char *)&stru_A8EB00 + 204) ) /*0x6f1a56*/
          goto LABEL_7; /*0x6f1a56*/
      }
      Base = (unsigned int *)((gamemd::TeamTypeClass *)(*(unsigned int **)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 192) + 4 * v7)));
      goto LABEL_11; /*0x6f1a82*/
    }
  LABEL_7: v8 = (gamemd::TeamTypeClass *)((gamemd::TeamTypeClass **)((TeamTypeClass *)RA2_OPNEW(0xF8u)));
    if ( v8 ) /*0x6f1a67*/
      Base = ((TechnoTypeClass *)(v8))->LoadBase(Source); /*0x6f1a75*/
    else
  LABEL_10:
      Base = 0; /*0x6f1a84*/
  LABEL_11:
    result = (*(int (**)(unsigned int *, INIClass *))(*Base + 100))(Base, (INIClass *)a1); /*0x6f1a86*/
    ++i; /*0x6f1a8e*/
  }
  return (gamemd::TeamTypeClass **)(result);
}
}
// 0x40D1B0
namespace gamemd {
void sub_40D1B0()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x40D1B0)
}
} // namespace gamemd

// 0x59B6D0
namespace gamemd {
int sub_59B6D0()
{
  int result; // eax
  int *i; // ebx
  signed int j; // esi
  unsigned int *NeighbourContent; // edi

  ((LayerClass *)(&dword_87F7E8))->CellIteratorReset(); /*0x59b6d6*/
  result = ((LayerClass *)(&dword_87F7E8))->CellIteratorNext(); /*0x59b6e0*/
  for ( i = (int *)result; result; i = (int *)result ) /*0x59b6e9*/
  {
    if ( CellClass::IsTerrainType(i) ) /*0x59b6ef*/
    {
      for ( j = 0; j < 8; j += 2 ) /*0x59b6f8*/
      {
        NeighbourContent = (unsigned int *)(((Cell *)(i))->GetNeighbourContent(j));
        if ( ((Cell*)NeighbourContent)->IsEmpty() ) /*0x59b706*/
          NeighbourContent[14] = dword_AA0E18; /*0x59b714*/
      }
    }
    result = ((LayerClass *)(&dword_87F7E8))->CellIteratorNext(); /*0x59b724*/
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

  ((LayerClass *)(&dword_87F7E8))->CellIteratorReset(); /*0x59c536*/
  for ( result = ((LayerClass *)(&dword_87F7E8))->CellIteratorNext(); result; result = ((LayerClass *)(&dword_87F7E8))->CellIteratorNext() ) /*0x59c549*/
  {
    v1 = *(unsigned int *)(result + 56); /*0x59c54b*/
    if ( v1 >= dword_ABAD28 && v1 < dword_ABAD28 + 42 ) /*0x59c55d*/
    {
      *(unsigned int *)(result + 56) = 0; /*0x59c55f*/
      *(unsigned char *)(result + 282) = 0; /*0x59c562*/
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
  ((Mouse *)((int)&dword_87F7E8))->SetBounds(0); /*0x5a1f6a*/
  ((LayerClass *)(&dword_87F7E8))->CellIteratorReset(); /*0x5a1f74*/
  for ( i = ((LayerClass *)(&dword_87F7E8))->CellIteratorNext(); i; i = ((LayerClass *)(&dword_87F7E8))->CellIteratorNext() ) /*0x5a1f85*/
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5AFEF0)
}
} // namespace gamemd

// 0x67B500
namespace gamemd {
int SmallFunc_67B500(unsigned char *** a1, INIClass * edx0, unsigned char * a2, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67B500)
}
} // namespace gamemd

// 0x67BCE0
namespace gamemd {
BuildingTypeClass * SmallFunc_67BCE0(unsigned char *** a0, INIClass * aP1, unsigned char * a2, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67BCE0)
}
} // namespace gamemd

// 0x67BD80
namespace gamemd {
TerrainTypeClass * SmallFunc_67BD80(unsigned char *** a1, INIClass * edx0, unsigned char * a2, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67BD80)
}
} // namespace gamemd

// 0x6E2660
namespace gamemd {
char sub_6E2660(int a1, int a2, int a3, int a4)
{
  Scenario *v5; // [esp+0h] [ebp-4h]

  *(unsigned int *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x6e2669*/
  *(unsigned int *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x6e266f*/
  *(unsigned int *)&stru_87F5F0.__pad_E12[1426] = -1; /*0x6e2675*/
  ((Mouse *)((int)&stru_87F5F0.__pad_58[416]))->SetBounds(0); /*0x6e267f*/
  ((BuildingClass *)((BuildingClass *)&stru_87F5F0.__pad_58[416]))->TogglePower2(0); /*0x6e268a*/
  ((BuildingClass *)((BuildingClass *)&stru_87F5F0.__pad_58[416]))->TogglePower(0); /*0x6e2695*/
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E3120)
}
} // namespace gamemd

// 0x728A00
namespace gamemd {
int E4Recv_728A00::sub_728A00()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x728A00)
}
} // namespace gamemd
