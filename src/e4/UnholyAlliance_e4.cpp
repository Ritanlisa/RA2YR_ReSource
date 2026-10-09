// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/UnholyAlliance_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"  // G42.36 C2027 supply

// 0x5CB440
namespace gamemd {
AbstractClass * * UnholyAlliance_GetResult()
{
  char v2; // bl
  int v3; // edi
  HouseClass *v4; // ebp
  int v5; // esi
  int *v6; // eax
  int *v7; // esi
  _WORD *CurrentOption; // eax
  __int16 v9; // cx
  __int16 v10; // ax
  int v11; // edx
  int v12; // eax
  __int16 *v13; // eax
  int v15; // [esp+8h] [ebp-10h] BYREF
  _DWORD v16[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = 0; /*0x5cb450*/
  v3 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 2864) - 1; /*0x5cb452*/
  if ( v3 >= 0 ) /*0x5cb453*/
  {
    v4 = (HouseClass *)this; /*0x5cb45a*/
    do /*0x5cb51b*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 2852) + 4 * v3); /*0x5cb46b*/
      if ( v5 ) /*0x5cb470*/
      {
        v6 = (int *)RA2_OPNEW(0x8E8u); /*0x5cb47e*/
        if ( v6 && (v7 = (int *)UnitClass::Construct(v6, v5, v4)) != 0 ) /*0x5cb497*/
        {
          CurrentOption = HouseClass::GetCurrentOption(v4, &this); /*0x5cb4a4*/
          v9 = *CurrentOption + 3; /*0x5cb4b0*/
          v10 = CurrentOption[1] + 3; /*0x5cb4b4*/
          if ( v3 /*0x5cb4ea*/
            || (v11 = v10,
                v12 = *v7,
                v16[0] = (v9 << 8) + 128,
                v16[1] = (v11 << 8) + 128,
                v16[2] = 0,
                !(*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(v12 + 216))(v7, v16, 0)) )
          {
            v13 = (__int16 *)HouseClass::GetCurrentOption(v4, &v15); /*0x5cb4fd*/
            if ( !FindInfantryDeployPosition(v7, v13, 3) ) /*0x5cb506*/
            {
              v2 = 1; /*0x5cb515*/
              (*(void (__thiscall **)(int *, int))(*v7 + 32))(v7, 1); /*0x5cb517*/
            }
          }
        }
        else
        {
          v2 = 1; /*0x5cb499*/
        }
      }
      else
      {
        v2 = 1; /*0x5cb472*/
      }
      --v3; /*0x5cb51a*/
    }
    while ( v3 >= 0 ); /*0x5cb51b*/
  }
  return v2 == 0; /*0x5cb525*/
}
}
// 0x5CB540
namespace gamemd {  // G42.18c ns repair
UnholyAlliance * UnholyAlliance::QueryInterface(unsigned int * Block, char a2)
{
  *(_DWORD *)&Block->m_Enabled = &(void*)(void*)&UnholyAlliance_vftable; /*0x5cb543*/
  MultiplayerGameMode::Dtor((MultiplayerGameMode *)Block); /*0x5cb549*/
  if ( (a2 & 1) != 0 ) /*0x5cb553*/
    RA2_OPDEL(Block); /*0x5cb556*/
  return &Block->m_Enabled; /*0x5cb560*/
}
}  // G42.18c ns repair
// 0x5CB3F0
namespace gamemd {  // G42.18c ns repair
char UnholyAlliance::Read(void *a1, void *a2)
{
  stru_A8B250.q000[8] = 1; /*0x5cb3f2*/
  return 1; /*0x5cb3f7*/
}
}  // G42.18c ns repair
// 0x5CB400
namespace gamemd {  // G42.18c ns repair
BOOL UnholyAlliance::Write(MPCooperative * aP0)
{
  return stru_A8B250.q000[8] && (unsigned __int8)ScenarioClass::MissionStubReturnZero2((int *)&aP0->m_Enabled); /*0x5cb41c*/
}
}
// 0x5CB430
char UnholyAlliance::Seek(void *a1, void *a2, void *a3)
{
  stru_A8B250.q000[8] = 1; /*0x5cb432*/
  return 1; /*0x5cb437*/
}  // G42.18c ns repair