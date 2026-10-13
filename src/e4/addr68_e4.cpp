// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/Tooltip_e4.hpp"
#include "e4/classes/Progress_e4.hpp"
#include "e4/classes/E4Recv_681070_e4.hpp"
#include "e4/classes/E4Recv_681090_e4.hpp"
#include "e4/classes/E4Recv_6810C0_e4.hpp"
#include "e4/classes/E4Recv_681180_e4.hpp"
#include "e4/classes/E4Recv_6811B0_e4.hpp"
#include "e4/classes/E4Recv_6811F0_e4.hpp"
#include "e4/classes/E4Recv_681220_e4.hpp"
#include "e4/classes/E4Recv_681260_e4.hpp"
#include "e4/classes/E4Recv_6812A0_e4.hpp"
#include "e4/classes/E4Recv_681840_e4.hpp"
#include "e4/classes/E4Recv_683060_e4.hpp"
#include "e4/classes/E4Recv_689790_e4.hpp"
#include "e4/classes/E4Recv_689820_e4.hpp"
#include "e4/classes/E4Recv_689960_e4.hpp"
#include "e4/classes/E4Recv_689A30_e4.hpp"
#include "e4/classes/E4Recv_689AC0_e4.hpp"
#include "e4/classes/E4Recv_68B8A0_e4.hpp"
#include "e4/classes/E4Recv_68F8A0_e4.hpp"
#include "e4/classes/E4Recv_68FB10_e4.hpp"
#include "e4/classes/E4Recv_68FBB0_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/AircraftTypeClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/GameSettings_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/E4Recv_6A87F0_e4.hpp"
#include "e4/classes/E4Recv_690400_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/VeterancyStruct_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/AsyncIO_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Multiplayer_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/GenericList_e4.hpp"
#include "e4/classes/LightningStorm_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/Credits_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/LoadGame_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/Selection_e4.hpp"
#include "e4/classes/TacticalMap_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/InfantryTypeVector_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/UnitTypeVector_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CCINIClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Render_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/ComPtr_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/UnitTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/InfantryClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/ScriptTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TeamTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/MiniMap_e4.hpp"  // G57w10 D supply
#include "e4/classes/TechnoClass_e4.hpp"
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { void nullsub_226(); }  // w18j2 raw 0x006832B0
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int WriteINI(char* p0); }  // x4:signals@0x410b90
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int sub_5CAF70(int p0); }  // x4:signals@0x5caf70
namespace OverlayClass { int WriteINI(char* p0); }  // x4:signals@0x410b90
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int sub_44FE60(int p0); }  // x4:signals@0x44fe60
namespace gamemd { int sub_4FCE00(int p0, int p1, int p2, int p3); }  // x4:signals@0x4fce00
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int ReadAudioEventINI(INIClass *p_this);  // x4:ida@0x727880
    int SaveTriggerTagsToINI(INIClass *p_this);  // x4:ida@0x6e5fe0
    int nullsub_34();  // x4:empty@0x691b30
} // namespace gamemd
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern char aGascloudsys[];  // data: 0x83da90 truth(IDA G42.57w9)
extern char aHumanPlayer[];  // data: 0x83dc8c truth(IDA G42.57w9)


// 0x682640
namespace gamemd {  // G42.18 ns repair
int COM_WriteString(int a1, int a2, LPCCH lpMultiByteStr)
{
  int v3; // ecx
  unsigned int *v4; // eax
  void **v5; // ecx
  int v6; // esi
  size_t v7; // eax
  int v9; // [esp+30h] [ebp-104h] BYREF
  WCHAR WideCharStr[128]; // [esp+34h] [ebp-100h] BYREF

  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 128); /*0x68265f*/
  v9 = 0; /*0x68266c*/
  v3 = 0; /*0x682674*/
  v4 = (unsigned int *)(&unk_83D658); /*0x682676*/
  while ( *v4 != a2 ) /*0x68267d*/
  {
    v4 += 2; /*0x68267f*/
    ++v3; /*0x682682*/
    if ( (int)v4 >= (int)g_INI_Key_GameType ) /*0x682688*/
    {
      v5 = 0; /*0x68268a*/
      goto LABEL_5; /*0x68268a*/
    }
  }
  v5 = (void **)((&off_83D65C)[2 * v3]);
  LABEL_5:
  v6 = (*(int (__stdcall **)(int, void **, int, unsigned int, unsigned int, int *))(*(unsigned int *)a1 + 12))(a1, v5, 18, 0, 0, &v9); /*0x68268c*/
  if ( v6 >= 0 ) /*0x6826ad*/
  {
    if ( !v9 ) /*0x6826d4*/
      sub_7DC720(-2147467261); /*0x6826db*/
    v7 = wcslen(WideCharStr); /*0x6826f0*/
    v6 = (*(int (__stdcall **)(int, WCHAR *, size_t, unsigned int))(*(unsigned int *)v9 + 16))(v9, WideCharStr, 2 * v7 + 2, 0); /*0x682706*/
    if ( v6 >= 0 ) /*0x68270f*/
    {
      if ( !v9 ) /*0x682729*/
        sub_7DC720(-2147467261); /*0x682730*/
      v6 = (*(int (__stdcall **)(int, unsigned int))(*(unsigned int *)v9 + 32))(v9, 0); /*0x682741*/
      if ( v6 >= 0 ) /*0x682749*/
      {
        if ( v9 ) /*0x682763*/
          (*(void (__stdcall **)(int))(*(unsigned int *)v9 + 8))(v9); /*0x682768*/
      }
      else if ( v9 ) /*0x68274d*/
      {
  LABEL_18:
        (*(void (__stdcall **)(int))(*(unsigned int *)v9 + 8))(v9); /*0x68274f*/
        return v6; /*0x68275e*/
      }
    }
    else if ( v9 ) /*0x682713*/
    {
      goto LABEL_18; /*0x682713*/
    }
  }
  else if ( v9 ) /*0x6826b1*/
  {
    goto LABEL_18; /*0x6826b1*/
  }
  return v6; /*0x6826bf*/
}
}  // G42.18 ns repair
// 0x682880
namespace gamemd {
int COM_ReadString(int * a1, int a2, LPCCH lpMultiByteStr)
{
  int v3; // edx
  int v4; // edx
  int v5; // esi
  int v7; // [esp+2Ch] [ebp-11Ch] BYREF
  unsigned int v8[2]; // [esp+30h] [ebp-118h] BYREF
  int16_t v9[4]; // [esp+38h] [ebp-110h] BYREF
  WCHAR *v10; // [esp+40h] [ebp-108h]
  WCHAR WideCharStr[128]; // [esp+48h] [ebp-100h] BYREF

  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 128); /*0x68289f*/
  v3 = *a1; /*0x6828b3*/
  v7 = 0; /*0x6828bb*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(v3 + 16))(a1, &unk_7F7D10, 18, &v7) >= 0 ) /*0x6828c8*/
    goto LABEL_7; /*0x6828c8*/
  if ( v7 ) /*0x6828d0*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v7 + 8))(v7); /*0x6828d5*/
  v4 = *a1; /*0x6828d8*/
  v7 = 0; /*0x6828ee*/
  v5 = (*(int (__stdcall **)(int *, void *, unsigned int, unsigned int, int, int *))(v4 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v7); /*0x6828f9*/
  if ( v5 >= 0 ) /*0x6828fd*/
  {
  LABEL_7:
    v10 = WideCharStr; /*0x682928*/
    v8[0] = 1; /*0x682932*/
    v8[1] = a2; /*0x68293a*/
    v9[0] = 31; /*0x68293e*/
    if ( !v7 ) /*0x682945*/
      sub_7DC720(-2147467261); /*0x68294c*/
    v5 = (*(int (__stdcall **)(int, int, unsigned int *, int16_t *, int))(*(unsigned int *)v7 + 16))(v7, 1, v8, v9, 2); /*0x682969*/
    if ( v5 >= 0 ) /*0x682971*/
    {
      if ( v7 ) /*0x68298b*/
        (*(void (__stdcall **)(int))(*(unsigned int *)v7 + 8))(v7); /*0x682990*/
    }
    else if ( v7 ) /*0x682975*/
    {
      goto LABEL_6; /*0x682975*/
    }
  }
  else if ( v7 ) /*0x682905*/
  {
  LABEL_6:
    (*(void (__stdcall **)(int))(*(unsigned int *)v7 + 8))(v7); /*0x68290b*/
    return v5; /*0x68291a*/
  }
  return v5; /*0x682913*/
}
}
// 0x682A90
namespace gamemd {
int COM_Property_ReadBool(int a1, int a2, char a3)
{
  int v3; // ecx
  unsigned int *v4; // eax
  void **v5; // ecx
  int v6; // esi
  int v8; // [esp+30h] [ebp-4h] BYREF

  v8 = (unsigned int *)(0);
  v3 = 0; /*0x682a9e*/
  v4 = (unsigned int *)(&unk_83D658); /*0x682aa0*/
  while ( *v4 != a2 ) /*0x682aa7*/
  {
    v4 += 2; /*0x682aa9*/
    ++v3; /*0x682aac*/
    if ( (int)v4 >= (int)g_INI_Key_GameType ) /*0x682ab2*/
    {
      v5 = 0; /*0x682ab4*/
      goto LABEL_5; /*0x682ab4*/
    }
  }
  v5 = (void **)((&off_83D65C)[2 * v3]);
  LABEL_5:
  v6 = (*(int (__stdcall **)(int, void **, int, unsigned int, unsigned int, int *))(*(unsigned int *)a1 + 12))(a1, v5, 18, 0, 0, &v8); /*0x682ab6*/
  if ( v6 >= 0 ) /*0x682ad4*/
  {
    if ( !v8 ) /*0x682af6*/
      sub_7DC720(-2147467261); /*0x682afd*/
    v6 = (*(int (__stdcall **)(int, char *, int, unsigned int))(*(unsigned int *)v8 + 16))(v8, &a3, 4, 0); /*0x682b15*/
    if ( v6 >= 0 ) /*0x682b1d*/
    {
      if ( !v8 ) /*0x682b32*/
        sub_7DC720(-2147467261); /*0x682b39*/
      v6 = (*(int (__stdcall **)(int, unsigned int))(*(unsigned int *)v8 + 32))(v8, 0); /*0x682b4a*/
      if ( v6 >= 0 ) /*0x682b52*/
      {
        if ( v8 ) /*0x682b67*/
          (*(void (__stdcall **)(int))(*(unsigned int *)v8 + 8))(v8); /*0x682b6c*/
      }
      else if ( v8 ) /*0x682b56*/
      {
  LABEL_18:
        (*(void (__stdcall **)(int))(*(unsigned int *)v8 + 8))(v8); /*0x682b58*/
        return v6; /*0x682b62*/
      }
    }
    else if ( v8 ) /*0x682b21*/
    {
      goto LABEL_18; /*0x682b21*/
    }
  }
  else if ( v8 ) /*0x682ad8*/
  {
    goto LABEL_18; /*0x682ad8*/
  }
  return v6; /*0x682ae6*/
}
}
// 0x682B80
namespace gamemd {
int COM_PropertyBag_Read(int * a1, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  int v6; // [esp+2Ch] [ebp-1Ch] BYREF
  unsigned int v7[2]; // [esp+30h] [ebp-18h] BYREF
  int16_t v8[4]; // [esp+38h] [ebp-10h] BYREF
  int v9; // [esp+40h] [ebp-8h]

  v6 = 0; /*0x682b8c*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(*a1 + 16))(a1, &unk_7F7D10, 18, &v6) >= 0 ) /*0x682ba4*/
    goto LABEL_7; /*0x682ba4*/
  if ( v6 ) /*0x682bac*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v6 + 8))(v6); /*0x682bb1*/
  v3 = *a1; /*0x682bb4*/
  v6 = 0; /*0x682bca*/
  v4 = (*(int (__stdcall **)(int *, void *, unsigned int, unsigned int, int, int *))(v3 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v6); /*0x682bd5*/
  if ( v4 >= 0 ) /*0x682bd9*/
  {
  LABEL_7:
    v7[1] = a2; /*0x682bfa*/
    v7[0] = 1; /*0x682c04*/
    v8[0] = 3; /*0x682c0c*/
    v9 = a3; /*0x682c13*/
    if ( !v6 ) /*0x682c17*/
      sub_7DC720(-2147467261); /*0x682c1e*/
    v4 = (*(int (__stdcall **)(int, int, unsigned int *, int16_t *, int))(*(unsigned int *)v6 + 16))(v6, 1, v7, v8, 2); /*0x682c3b*/
    if ( v4 >= 0 ) /*0x682c43*/
    {
      if ( v6 ) /*0x682c5a*/
        (*(void (__stdcall **)(int))(*(unsigned int *)v6 + 8))(v6); /*0x682c5f*/
    }
    else if ( v6 ) /*0x682c47*/
    {
      goto LABEL_6; /*0x682c47*/
    }
  }
  else if ( v6 ) /*0x682be1*/
  {
  LABEL_6:
    (*(void (__stdcall **)(int))(*(unsigned int *)v6 + 8))(v6); /*0x682be3*/
    return v4; /*0x682bef*/
  }
  return v4; /*0x682beb*/
}
}
// 0x682C70
namespace gamemd {
int sub_682C70(int a1, int a2, unsigned int * a3)
{
  unsigned int *v3; // edi
  int v4; // ecx
  unsigned int *v5; // eax
  void **v6; // ecx
  int v7; // esi

  v3 = (unsigned int *)(a3);
  a3 = 0; /*0x682c7a*/
  v4 = 0; /*0x682c82*/
  *v3 = 0; /*0x682c84*/
  v3[1] = 0; /*0x682c8a*/
  v5 = (unsigned int *)(&unk_83D658); /*0x682c91*/
  while ( *v5 != a2 ) /*0x682c98*/
  {
    v5 += 2; /*0x682c9a*/
    ++v4; /*0x682c9d*/
    if ( (int)v5 >= (int)g_INI_Key_GameType ) /*0x682ca3*/
    {
      v6 = 0; /*0x682ca5*/
      goto LABEL_5; /*0x682ca5*/
    }
  }
  v6 = (void **)((&off_83D65C)[2 * v4]);
  LABEL_5:
  v7 = (*(int (__stdcall **)(int, void **, unsigned int, int, unsigned int, unsigned int **))(*(unsigned int *)a1 + 16))( /*0x682ca7*/
         a1,
         v6,
         0,
         16,
         0,
         &a3);
  if ( v7 >= 0 ) /*0x682cc5*/
  {
    if ( !a3 ) /*0x682ce3*/
      sub_7DC720(-2147467261); /*0x682cea*/
    v7 = (*(int (__stdcall **)(unsigned int *, unsigned int *, int, unsigned int))(*a3 + 12))(a3, v3, 8, 0); /*0x682cfe*/
    if ( v7 >= 0 ) /*0x682d06*/
    {
      if ( a3 ) /*0x682d1b*/
        (*(void (__stdcall **)(unsigned int *))(*a3 + 8))(a3); /*0x682d20*/
    }
    else if ( a3 ) /*0x682d0a*/
    {
      goto LABEL_7; /*0x682d0a*/
    }
  }
  else if ( a3 ) /*0x682cc9*/
  {
  LABEL_7:
    (*(void (__stdcall **)(unsigned int *))(*a3 + 8))(a3); /*0x682ccb*/
    return v7; /*0x682cd5*/
  }
  return v7; /*0x682cd3*/
}
}
// 0x682E10
namespace gamemd {
int COM_WriteInt(int a1, int a2, int a3)
{
  int v3; // ecx
  unsigned int *v4; // eax
  void **v5; // ecx
  int v6; // esi
  int v8; // [esp+30h] [ebp-4h] BYREF

  v8 = (unsigned int *)(0);
  v3 = 0; /*0x682e1e*/
  v4 = (unsigned int *)(&unk_83D658); /*0x682e20*/
  while ( *v4 != a2 ) /*0x682e27*/
  {
    v4 += 2; /*0x682e29*/
    ++v3; /*0x682e2c*/
    if ( (int)v4 >= (int)g_INI_Key_GameType ) /*0x682e32*/
    {
      v5 = 0; /*0x682e34*/
      goto LABEL_5; /*0x682e34*/
    }
  }
  v5 = (void **)((&off_83D65C)[2 * v3]);
  LABEL_5:
  v6 = (*(int (__stdcall **)(int, void **, int, unsigned int, unsigned int, int *))(*(unsigned int *)a1 + 12))(a1, v5, 18, 0, 0, &v8); /*0x682e36*/
  if ( v6 >= 0 ) /*0x682e54*/
  {
    if ( !v8 ) /*0x682e76*/
      sub_7DC720(-2147467261); /*0x682e7d*/
    v6 = (*(int (__stdcall **)(int, int, int, unsigned int))(*(unsigned int *)v8 + 16))(v8, a3, 8, 0); /*0x682e95*/
    if ( v6 >= 0 ) /*0x682e9d*/
    {
      if ( !v8 ) /*0x682eb2*/
        sub_7DC720(-2147467261); /*0x682eb9*/
      v6 = (*(int (__stdcall **)(int, unsigned int))(*(unsigned int *)v8 + 32))(v8, 0); /*0x682eca*/
      if ( v6 >= 0 ) /*0x682ed2*/
      {
        if ( v8 ) /*0x682ee7*/
          (*(void (__stdcall **)(int))(*(unsigned int *)v8 + 8))(v8); /*0x682eec*/
      }
      else if ( v8 ) /*0x682ed6*/
      {
  LABEL_18:
        (*(void (__stdcall **)(int))(*(unsigned int *)v8 + 8))(v8); /*0x682ed8*/
        return v6; /*0x682ee2*/
      }
    }
    else if ( v8 ) /*0x682ea1*/
    {
      goto LABEL_18; /*0x682ea1*/
    }
  }
  else if ( v8 ) /*0x682e58*/
  {
    goto LABEL_18; /*0x682e58*/
  }
  return v6; /*0x682e66*/
}
}
// 0x682F00
namespace gamemd {
int COM_SetBufferParams(int * a1, int a2, int * a3)
{
  int v3; // eax
  int v4; // esi
  int v6; // edx
  int v7; // [esp+2Ch] [ebp-1Ch] BYREF
  unsigned int v8[2]; // [esp+30h] [ebp-18h] BYREF
  int16_t v9[4]; // [esp+38h] [ebp-10h] BYREF
  int v10; // [esp+40h] [ebp-8h]
  int v11; // [esp+44h] [ebp-4h]

  v7 = 0; /*0x682f0c*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(*a1 + 16))(a1, &unk_7F7D10, 18, &v7) >= 0 ) /*0x682f24*/
    goto LABEL_7; /*0x682f24*/
  if ( v7 ) /*0x682f2c*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v7 + 8))(v7); /*0x682f31*/
  v3 = *a1; /*0x682f34*/
  v7 = 0; /*0x682f4a*/
  v4 = (*(int (__stdcall **)(int *, void *, unsigned int, unsigned int, int, int *))(v3 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v7); /*0x682f55*/
  if ( v4 >= 0 ) /*0x682f59*/
  {
  LABEL_7:
    v8[0] = 1; /*0x682f7a*/
    v8[1] = a2; /*0x682f82*/
    v9[0] = 64; /*0x682f8a*/
    v6 = a3[1]; /*0x682f93*/
    v10 = *a3; /*0x682f9a*/
    v11 = v6; /*0x682fa0*/
    if ( !v7 ) /*0x682fa4*/
      sub_7DC720(-2147467261); /*0x682fab*/
    v4 = (*(int (__stdcall **)(int, int, unsigned int *, int16_t *, int))(*(unsigned int *)v7 + 16))(v7, 1, v8, v9, 2); /*0x682fc8*/
    if ( v4 >= 0 ) /*0x682fd0*/
    {
      if ( v7 ) /*0x682fe7*/
        (*(void (__stdcall **)(int))(*(unsigned int *)v7 + 8))(v7); /*0x682fec*/
    }
    else if ( v7 ) /*0x682fd4*/
    {
      goto LABEL_6; /*0x682fd4*/
    }
  }
  else if ( v7 ) /*0x682f61*/
  {
  LABEL_6:
    (*(void (__stdcall **)(int))(*(unsigned int *)v7 + 8))(v7); /*0x682f67*/
    return v4; /*0x682f73*/
  }
  return v4; /*0x682f6f*/
}
}
// 0x683FB0
namespace gamemd {
int sub_683FB0()
{
  int *p_vfptr2; // esi
  AsyncIO *v2; // ecx

  MouseClass::GetPosition((MouseClass *)&dword_87F7E8); /*0x683fb7*/
  if ( ((unsigned int *)(dword_A8B230))[43].vfptr2 == -1 ) /*0x683fd0*/
  {
    p_vfptr2 = &((unsigned int *)(dword_A8B230))[43].vfptr2; /*0x683fc1*/
    *p_vfptr2 = TimerGetTicks(); /*0x683fda*/
  }
  if ( ((unsigned int *)(dword_A8B230))[43].vfptr2 != -1 ) /*0x683ff7*/
    TimerGetTicks(); /*0x683ffc*/
  Debug::Log(); /*0x68400b*/
  if ( dword_887368 ) /*0x68401d*/
    Tooltip::Enable(dword_887368, byte_A8EB80); /*0x684026*/
  EndBufferMixer(&g_MixerState->vfptr, dword_83D834); /*0x684037*/
  (*((unsigned char *)&(v2))) = 0; /*0x68403c*/
  dword_83D834 = 0x4000; /*0x68403e*/
  AsyncIO::Read(v2); /*0x684048*/
  return sub_406F40();
}
}
// 0x684060
namespace gamemd {
void * * ScenarioClass_SetTimer(int a1)
{
  DWORD Ticks; // eax
  char *v3; // edx
  void *result; // eax
  unsigned int *v5; // esi
  DWORD v6; // eax
  int v7; // ecx
  DWORD v8; // eax
  int v9; // [esp+8h] [ebp-8h]

  if ( a1 ) /*0x684068*/
  {
    Ticks = (void **)(TimerGetTicks());
    v3 = &dword_A8B230->u32_620; /*0x68407c*/
    dword_A8B230->u32_620 = Ticks; /*0x68408c*/
    v3->__pad_004 = v9; /*0x684092*/
    v3->u32_8 = 60 * a1; /*0x684099*/
    result = (void *)(dword_A8B230); /*0x68409c*/
    if ( dword_A8B230->unknown630 ) /*0x6840a1*/
      return (void **)(result); /*0x6840a9*/
    dword_A8B230->unknown630 = 1; /*0x6840af*/
  }
  if ( !*(&dword_A8B230->ScenarioClass_field_62C) ) /*0x6840bc*/
  {
    sub_406F00(); /*0x6840ca*/
    if ( !((unsigned int *)(dword_A8B238))[0] || dword_A8B238[0] == 5 ) /*0x6840db*/
    {
      v5 = &dword_A8B230->u32_614;
      if ( *(&dword_A8B230->u32_614) != -1 ) /*0x6840f1*/
      {
        v6 = TimerGetTicks(); /*0x6840f6*/
        v7 = v5[2]; /*0x6840fd*/
        v8 = v6 - *v5; /*0x684100*/
        *v5 = -1; /*0x684102*/
        v5[2] = v8 + v7; /*0x68410a*/
      }
    }
    byte_B054CC = dword_A8B230->ScenarioClass_field_35A2; /*0x68411b*/
    if ( !byte_B054CC ) /*0x684120*/
    {
      Mouse::ReleaseCapture(&dword_87F7E8); /*0x684127*/
      if ( !(*(int (**)(int))(*&dword_887640->q_A0))(dword_887640) ) /*0x684134*/
        (*(void (**)(int))(*(unsigned int *)dword_887640 + 12))(dword_887640); /*0x684143*/
      dword_A8B230->ScenarioClass_field_35A2 = 1; /*0x68414c*/
      byte_A8ED9C = 1; /*0x684159*/
      Timer::PumpMessages((HWND *)dword_87F770); /*0x684160*/
      dword_B07784 = 0; /*0x684165*/
    }
  }
  result = (void *)((void **)(dword_A8B230));
  ++*(&dword_A8B230->ScenarioClass_field_62C); /*0x684174*/
  return (void **)(result); /*0x68417a*/
}
}
// 0x684290
namespace gamemd {
ScenarioClass * * Mouse_Update()
{
  int result; // eax

  if ( (((unsigned char *)&(((unsigned int *)(dword_A8B230))[381].vfptr3))[2]) == 1 /*0x6842a6*/
    && (*(int (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) )
  {
    do /*0x6842c0*/
      (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x6842b5*/
    while ( (*(int (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) ); /*0x6842c0*/
  }
  (((unsigned char *)&(((unsigned int *)(dword_A8B230))[381].vfptr3))[2]) = 0; /*0x6842cc*/
  ((unsigned int *)&stru_A8EB00)[440] = 0; /*0x6842d9*/
  result = (int)(Timer::PumpMessages(*(Timer **)&g_BinkMoviePlayer)); /*0x6842e0*/
  dword_B07784 = 0; /*0x6842e5*/
  return (gamemd::ScenarioClass **)(result); /*0x6842ef*/
}
}
// 0x684370
namespace gamemd {
char WaitForMultiplayerLoadSync()
{
  int v1; // ebx
  int v2; // esi
  int v3; // eax
  int v6; // esi
  int v7; // eax
  int i; // esi
  char *v11; // edi
  int v12; // edi
  int64_t v13; // [esp+10h] [ebp-40h]
  int64_t v14; // [esp+18h] [ebp-38h]
  int v15; // [esp+20h] [ebp-30h]
  int v16; // [esp+28h] [ebp-28h]
  int Ticks; // [esp+2Ch] [ebp-24h]
  int v18; // [esp+34h] [ebp-1Ch]

  if ( !*(unsigned int *)&dword_A8B238 || *(unsigned int *)&dword_A8B238 == 5 ) /*0x68438d*/
    return 1; /*0x68460b*/
  TimerGetTicks(); /*0x684397*/
  Ticks = TimerGetTicks(); /*0x6843b5*/
  v18 = 300; /*0x6843b9*/
  v15 = TimerGetTicks(); /*0x6843cb*/
  v16 = 3600; /*0x6843d3*/
  Progress::GetAverage((Progress *)&g_UIManager); /*0x6843e0*/
  __asm { fstp [esp+50h+var_40] } /*0x6843e5*/
  while ( 1 )
  {
    EventQueue::Process(*(EventQueue **)&g_BinkMoviePlayer); /*0x6843ef*/
    Event::Dispatch(); /*0x6843f4*/
    v1 = 1; /*0x6843fe*/
    if ( *(unsigned int *)&dword_A8B238 == 1 /*0x684418*/
      && g_ClipboardBuffer
      && (*(char (**)(HWND))(*(unsigned int *)g_ClipboardBuffer + 12))(g_ClipboardBuffer) >= 0 )
    {
      Debug::Log(); /*0x684524*/
      return 0; /*0x684535*/
    }
    v2 = v16; /*0x684422*/
    if ( v15 != -1 ) /*0x68442b*/
    {
      v3 = TimerGetTicks() - v15; /*0x684436*/
      if ( v3 >= v16 ) /*0x68443c*/
        break; /*0x68443c*/
      v2 = v16 - v3; /*0x684442*/
    }
    if ( v2 <= 0 ) /*0x684446*/
      break; /*0x684446*/
    Progress::GetAverage((Progress *)&g_UIManager); /*0x684451*/
    __asm /*0x684456*/
    {
      fcom ds:dbl_7F0E70
      fst [esp+50h+var_38]
      fnstsw ax
    }
    if ( (_AX & 0x100) == 0 )
    {
      __asm { fstp st } /*0x6845ed*/
      Multiplayer::ShowProgress((int)((Multiplayer *)&dword_A8B238), (((unsigned char *)&(((unsigned int *)(dword_A8B230))[375].vfptr))[1]) != 0 ? 200 : 100);
      return 1; /*0x684605*/
    }
    __asm /*0x68446b*/
    {
      fcomp [esp+50h+var_40]
      fnstsw ax
    }
    if ( (_AX & 0x4000) == 0 ) /*0x684474*/
    {
      v15 = TimerGetTicks(); /*0x684490*/
      v16 = 7200; /*0x684498*/
      v13 = v14; /*0x6844a4*/
    }
    v6 = v18; /*0x6844b0*/
    if ( Ticks != -1 ) /*0x6844b6*/
    {
      v7 = TimerGetTicks() - Ticks; /*0x6844c1*/
      if ( v7 >= v18 ) /*0x6844c7*/
        goto LABEL_18; /*0x6844c7*/
      v6 = v18 - v7; /*0x6844c9*/
    }
    if ( v6 <= 0 )
    {
  LABEL_18:
      Ticks = TimerGetTicks(); /*0x6844d3*/
      v18 = 60; /*0x6844f1*/
      Multiplayer::ShowProgress((int)((Multiplayer *)&dword_A8B238), (((unsigned char *)&(((unsigned int *)(dword_A8B230))[375].vfptr))[1]) != 0 ? 200 : 100);
    }
  }
  for ( i = 1; i < dword_A8DA84; ++i ) /*0x68453f*/
  {
    Progress::GetWeighted((int)&g_UIManager, v1); /*0x68454b*/
    __asm /*0x684550*/
    {
      fcomp ds:dbl_7F0E68
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x68455b*/
    {
      v11 = (char *)((unsigned int *)(dword_A8DA78))[i]; /*0x684562*/
      ToWideStringChar((IUnknown *)(v11)); /*0x684567*/
      ToWideStringChar((IUnknown *)(v11)); /*0x684570*/
      Debug::Log(); /*0x68457c*/
      v12 = *(unsigned int *)((&dword_A8DA78)[i] + 111); /*0x684591*/
      HandleNetworkPlayerDisconnect((wchar_t *)(v12), 1); /*0x684596*/
      if ( SessionClass::IsValidHouse((void *)((int)&dword_A8B238), *((void **)stru_A80220.vfptr3 + v12)) ) /*0x6845aa*/
      {
        dword_A8E2AC = -1; /*0x6845bf*/
        memset((void *)(word_A8E258), 0, 0x28u); /*0x6845c9*/
        ((unsigned int *)(word_A8E258))[20] = 0; /*0x6845cb*/
      }
      --i; /*0x6845cd*/
    }
    ++v1; /*0x6845d3*/
  }
  return 0; /*0x68452e*/
}
}
// 0x684C30
namespace gamemd {
int PostLoadInitScenario()
{
  int v1; // edi
  int i; // esi
  int nextArrayIndex; // eax
  int v4; // eax
  int v5; // eax
  int j; // ebx
  TeamClass *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int Owner; // eax
  int v14; // ecx
  unsigned int *v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // edi
  TagClass *v20; // esi
  int v21; // eax
  int v22; // eax
  HouseClass *v23; // edi
  int v24; // esi
  int vtable0; // ebp
  int v26; // eax
  int m; // eax
  int *v28; // esi
  int v29; // eax
  Building *n; // esi
  AnimClass *v31; // edi
  int *v32; // eax
  int result; // eax
  Voxel *v34; // [esp+14h] [ebp-1Ch]
  int k; // [esp+20h] [ebp-10h]
  int v36; // [esp+24h] [ebp-Ch] BYREF
  int v37; // [esp+28h] [ebp-8h]
  int GroundHeight; // [esp+2Ch] [ebp-4h]

  ++dword_A8E7AC; /*0x684c3f*/
  for ( i = 0; i < dword_A8EB50; ++i ) /*0x684c4c*/
    (*(void (**)(unsigned int))(**((unsigned int **)dword_A8EB44 + i) + 1248))(*((unsigned int *)dword_A8EB44 + i)); /*0x684c58*/
  MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 2); /*0x684c6f*/
  if ( !byte_A8ED6B ) /*0x684c7b*/
  {
    TacticalClass::BuildCommandBar((gamemd::TacticalClass *)((TabClass *)1), v1, (int)v34); /*0x684c88*/
    if ( !*(unsigned int *)&dword_A8B238 ) /*0x684c94*/
    {
      if ( stru_8A38E0 ) /*0x684ca7*/
        nextArrayIndex = ((unsigned int *)(dword_A8B230))[14].nextArrayIndex; /*0x684ca9*/
      else
        nextArrayIndex = ((unsigned int *)(dword_A8B230))[14].abstractFlags; /*0x684cb1*/
      v4 = *(int *)((char *)&((unsigned int *)(dword_A8B230))[44].vfptr + 4 * nextArrayIndex + 2); /*0x684cb7*/
      *(int *)((char *)&((unsigned int *)(dword_A8B230))[374].vfptr + 2) = v4; /*0x684cbe*/
      *(int *)((char *)&((unsigned int *)(dword_A8B230))[373].NeedsSaveOrLink + 2) = *(int *)((char *)&dword_A8B230[374].vfptr + 2); /*0x684cd4*/
      *(int *)((char *)&((unsigned int *)(dword_A8B230))[373].referenceCount + 2) = *(int *)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2); /*0x684ce9*/
      *(int *)((char *)&((unsigned int *)(dword_A8B230))[373].nextArrayIndex + 2) = *(int *)((char *)&dword_A8B230[373].referenceCount + 2); /*0x684d03*/
      v36 = ((int16_t)v4 << 8) + 128; /*0x684d09*/
      v37 = ((*((signed short *)(((unsigned char *)&(v4)) + 2))) << 8) + 128; /*0x684d21*/
      GroundHeight = 0; /*0x684d2b*/
      GroundHeight = Cell::GetGroundHeight((unsigned int *)(&v36)); /*0x684d3e*/
      TacticalClass::SetPositionThunk((gamemd::MouseClass *)((RadarClass *)&v36)); /*0x684d42*/
    }
  }
  v5 = g_MultiplayerCleanup; /*0x684d47*/
  for ( j = 0; j < g_MultiplayerCleanup; ++j ) /*0x684d50*/
  {
    v7 = (TeamClass *)*((unsigned int *)dword_B0E784 + j); /*0x684d5c*/
    if ( (Debug::AccumFlags((Debug *)v7) & 4) != 0 ) /*0x684d68*/
    {
      v8 = (int)(TeamClass::FindOrCreate(v7));
      if ( dword_8B41B8 < dword_8B41B0 /*0x684da9*/
        || (byte_8B41B5 || !dword_8B41B0)
        && dword_8B41BC > 0
        && (*(uint8_t (**)(int *, int, unsigned int))(dword_8B41A8 + 8))(
             &dword_8B41A8,
             dword_8B41B0 + dword_8B41BC,
             0) )
      {
        v9 = dword_8B41B8++; /*0x684db6*/
        *((unsigned int *)dword_8B41AC + v9) = v8; /*0x684dc5*/
      }
    }
    if ( (Debug::AccumFlags((Debug *)v7) & 0x10) != 0 ) /*0x684dd1*/
    {
      v10 = TeamClass::FindOrCreate(v7); /*0x684de0*/
      if ( dword_8B40D8 < dword_8B40D0 /*0x684e13*/
        || (byte_8B40D5 || !dword_8B40D0)
        && dword_8B40DC > 0
        && (*(uint8_t (**)(int *, int, unsigned int))(dword_8B40C8 + 8))(
             &dword_8B40C8,
             dword_8B40D0 + dword_8B40DC,
             0) )
      {
        v11 = dword_8B40D8++; /*0x684e20*/
        *((unsigned int *)dword_8B40CC + v11) = v10; /*0x684e2f*/
      }
    }
    if ( (Debug::AccumFlags((Debug *)v7) & 8) != 0 ) /*0x684e3b*/
    {
      v12 = TeamClass::FindOrCreate(v7); /*0x684e44*/
      Owner = HouseClass::FindOwner(*(HouseClass **)(*(unsigned int *)(*(unsigned int *)(*(unsigned int *)(v12 + 36) + 160) + 164) + 184)); /*0x684e5b*/
      if ( Owner ) /*0x684e62*/
      {
        v14 = *(unsigned int *)(Owner + 64); /*0x684e64*/
        v15 = (unsigned int *)(Owner + 56); /*0x684e67*/
        if ( *(unsigned int *)(Owner + 72) < v14 /*0x684e8c*/
          || (*(unsigned char *)(Owner + 69) || !v14)
          && (v16 = *(unsigned int *)(Owner + 76), v16 > 0)
          && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v15 + 8))(v15, v14 + v16, 0) )
        {
          v17 = v15[4]; /*0x684e93*/
          v18 = v15[1]; /*0x684e96*/
          v15[4] = v17 + 1; /*0x684e9c*/
          *(unsigned int *)(v18 + 4 * v17) = v12; /*0x684e9f*/
        }
      }
    }
    v5 = g_MultiplayerCleanup; /*0x684ea2*/
  }
  v19 = 0; /*0x684eb6*/
  --dword_A8E7AC; /*0x684ebb*/
  if ( v5 > 0 ) /*0x684ec1*/
  {
    do /*0x684efb*/
    {
      v20 = (TagClass *)*((unsigned int *)dword_B0E784 + v19); /*0x684ec8*/
      if ( TagClass::HasValidHouse(v20) ) /*0x684ecd*/
      {
        v21 = HouseClass::FindOwner(*(HouseClass **)(*(unsigned int *)(v20[2].defaultCoords + 164) + 180)); /*0x684ee8*/
        ++*(unsigned int *)(v21 + 636); /*0x684eed*/
      }
      ++v19; /*0x684ef8*/
    }
    while ( v19 < g_MultiplayerCleanup ); /*0x684efb*/
  }
  if ( (((unsigned char *)&(dword_A8B230[374].nextArrayIndex))[2]) ) /*0x684f02*/
  {
    v22 = 0; /*0x684f12*/
    for ( k = 0; v22 < dword_A80238; k = v22 ) /*0x684f1a*/
    {
      v23 = (HouseClass *)*(&dword_A8022C->vfptr.vfptr + v22); /*0x684f23*/
      if ( v23 ) /*0x684f28*/
      {
        v24 = (*(int (__stdcall **)(int *))(v23->arrayIndex + 24))(&v23->arrayIndex); /*0x684f34*/
        vtable0 = dword_B0F4EC->vfptr.vfptr.vfptr.vfptr.vfptr.vfptr; /*0x684f3b*/
        if ( v24 > *(unsigned int *)(dword_B0F4EC->vfptr.vfptr.vfptr.vfptr.vfptr.vfptr + 184) ) /*0x684f43*/
        {
          do /*0x684f69*/
          {
            if ( (*(int (__stdcall **)(int *))(v23->arrayIndex + 28))(&v23->arrayIndex) <= 0 ) /*0x684f4d*/
              break; /*0x684f4d*/
            HouseClass::GiveTiberium_Storage(v23, 1.0, 0); /*0x684f58*/
            v26 = *(unsigned int *)(vtable0 + 184); /*0x684f5d*/
            v24 -= v26; /*0x684f63*/
            __asm { fstp st } /*0x684f67*/
          }
          while ( v24 > v26 ); /*0x684f69*/
        }
        v22 = k; /*0x684f6b*/
      }
      ++v22; /*0x684f75*/
    }
  }
  Radar::UpdateReveal(1, 0); /*0x684f89*/
  Voxel::InitDistanceTable(v34); /*0x684f8e*/
  LayerClass::CellIteratorReset((LayerClass *)&dword_87F7E8); /*0x684f98*/
  for ( m = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x684fa9*/
        m;
        m = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8) )
  {
    ((House *)(m))->AnnounceUpgrade(-1); /*0x684faf*/
  }
  MapClass::ProcessRegion((MapClass *)&dword_87F7E8); /*0x684fc7*/
  Terrain::ConnectivityGraph((Terrain *)&dword_87F7E8); /*0x684fd1*/
  MapClass::BuildSubzones((MapClass *)&dword_87F7E8); /*0x684fdb*/
  MarkCliffEdgePassability((int)&dword_87F7E8); /*0x684fe5*/
  if ( !dword_A8ED78 ) /*0x684ff0*/
  {
    v28 = (int *)operator new(0x100u); /*0x684ffc*/
    if ( v28 ) /*0x685003*/
    {
      v36 = 2688; /*0x68500f*/
      v37 = 2688; /*0x685013*/
      GroundHeight = 0; /*0x685017*/
      v29 = WarheadTypeClass::applyDamage(aGascloudsys); /*0x68501b*/
      dword_A8ED78 = (ObjectClass *)ParticleSystemClass::Constructor( /*0x685040*/
                                      v28,
                                      *((unsigned int *)dword_A83D6C + v29),
                                      &v36,
                                      0,
                                      0,
                                      &dword_B05488,
                                      0);
    }
    else
    {
      dword_A8ED78 = 0; /*0x685047*/
    }
  }
  if ( dword_8871E0[1].LargeVisceroid ) /*0x685052*/
  {
    LayerClass::CellIteratorReset((LayerClass *)&dword_87F7E8); /*0x685063*/
    for ( n = (Building *)LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x685076*/
          n;
          n = (Building *)LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8) )
    {
      if ( Building::GetNthOfType(n) ) /*0x68507a*/
      {
        if ( !Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, dword_8871E0[1].AmmoCrateDamage - 1) ) /*0x68509e*/
        {
          v31 = (AnimClass *)operator new(0x1C8u); /*0x6850b1*/
          if ( v31 ) /*0x6850b8*/
          {
            v32 = (int *)(*(int (**)(Building *, int *))(*(unsigned int *)n->__pad_000 + 72))(n, &v36); /*0x6850cd*/
            AnimClass::ctor(v31, dword_8871E0->DetailMinFrameRateMovie.LargeVisceroid, v32, 0, 1, (void *)0x600, 0, 0); /*0x6850e0*/
          }
        }
      }
    }
  }
  RadarClass::SetGlobal((RadarClass *)dword_8871E0->DetailMinFrameRateNormal); /*0x6850fd*/
  Map_Init((ObjectClass *)dword_8871E0->DetailBufferZoneWidth); /*0x68510b*/
  return result; /*0x685110*/
}
}
// 0x6851F0
namespace gamemd {
int ScenarioClass_Reset()
{
  int i; // esi
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  HouseClass *v7; // edi
  int j; // esi
  AbstractClass *v9; // eax
  Tactical *v10; // eax
  IPersistStream *v11; // eax
  unsigned int *v12; // eax
  int v13; // ecx
  int result; // eax
  ObjectClass *v16; // [esp+0h] [ebp-8h]
  ObjectClass *v17; // [esp+0h] [ebp-8h]
  ObjectClass *v18; // [esp+0h] [ebp-8h]

  dword_A8B230[14].referenceCount = 1000000; /*0x6851fc*/
  (*((unsigned char *)&(dword_A8B230[14].NeedsSaveOrLink))) = 1; /*0x68520c*/
  dword_83D834 = 0x4000; /*0x685219*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x68521f*/
  AudioQueue::DrainAll(); /*0x685224*/
  dword_A83D4C = 0; /*0x685231*/
  ScenarioClass::InitTimer((ScenarioClass *)dword_A8B230); /*0x685237*/
  LightningStorm::End(); /*0x68523c*/
  for ( i = dword_A8E978 - 1; i >= 0; --i ) /*0x68524c*/
  {
    if ( (*(int (__stdcall **)(int))(*(unsigned int *)(*((unsigned int *)dword_A8E96C + i) + 4) + 12))(*((unsigned int *)dword_A8E96C + i) + 4) == 18 /*0x68526c*/
      && i < dword_A8E978 )
    {
      v2 = i; /*0x68526f*/
      if ( i < --dword_A8E978 ) /*0x685279*/
      {
        do /*0x685291*/
        {
          ++v2; /*0x685281*/
          *((unsigned int *)dword_A8E96C + v2 - 1) = *((unsigned int *)dword_A8E96C + v2); /*0x685285*/
        }
        while ( v2 < dword_A8E978 ); /*0x685291*/
      }
    }
  }
  Game::DestroyAllObjects(); /*0x685297*/
  v3 = 0; /*0x6852a1*/
  if ( *(int *)&((unsigned int *)&stru_A8EB00)[340] > 0 ) /*0x6852a5*/
  {
    v4 = dword_A8E970; /*0x6852a7*/
    do /*0x6852b2*/
    {
      v5 = *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[328] + 4 * v3); /*0x6852b2*/
      if ( dword_A8E978 < v4 ) /*0x6852bd*/
        goto LABEL_14; /*0x6852bd*/
      if ( !byte_A8E975 && v4 || dword_A8E97C <= 0 ) /*0x6852d3*/
        goto LABEL_16; /*0x6852d3*/
      if ( (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_A8E968 + 8))( /*0x6852e4*/
             &dword_A8E968,
             v4 + dword_A8E97C,
             0) )
      {
  LABEL_14:
        v6 = dword_A8E978++; /*0x6852f1*/
        *((unsigned int *)dword_A8E96C + v6) = v5; /*0x685300*/
      }
      v4 = dword_A8E970; /*0x685303*/
  LABEL_16:
      ++v3; /*0x685308*/
    }
    while ( v3 < *(int *)&((unsigned int *)&stru_A8EB00)[340] ); /*0x6852b2*/
  }
  MapClass::FreeAllCells((MapClass *)&DataGlobal_87F7E8); /*0x685313*/
  *(unsigned int *)&DataGlobal_87F848 = 0; /*0x685322*/
  if ( *(unsigned int *)&DataGlobal_87F83C && DataGlobal_87F845 ) /*0x685332*/
  {
    operator delete((void *)(*(void **)&DataGlobal_87F83C)); /*0x685335*/
    *(unsigned int *)&DataGlobal_87F83C = 0; /*0x68533d*/
  }
  DataGlobal_87F845 = 0; /*0x685343*/
  *(unsigned int *)&DataGlobal_87F840 = 0; /*0x685349*/
  Map_Reset_6E5570(a1); /*0x68534f*/
  v7 = 0; /*0x685354*/
  for ( j = 0; j < 2050; j += 41 ) /*0x685356*/
  {
    v9 = dword_A8B230; /*0x685358*/
    if ( (unsigned int)j < 0x802 && *((unsigned char *)&dword_A8B230[204].vfptr + j) ) /*0x685365*/
    {
      *((unsigned char *)&dword_A8B230[204].vfptr + j) = 0; /*0x68536e*/
      (((unsigned char *)&(v9[374].uniqueId))[2]) = 1; /*0x685377*/
      HouseClass::UpdateAllTypes(v7); /*0x68537e*/
    }
    v7 = (HouseClass *)((char *)v7 + 1); /*0x685386*/
  }
  if ( g_TacticalClass_Instance ) /*0x685398*/
    (*(void (**)(LPPERSISTSTREAM, int))(*(unsigned int *)g_TacticalClass_Instance + 32))( /*0x68539e*/
      g_TacticalClass_Instance,
      1);
  v10 = (Tactical *)operator new(0xE18u); /*0x6853a6*/
  if ( v10 ) /*0x6853b0*/
    v11 = (IPersistStream *)TacticalMap::Construct(v10); /*0x6853b4*/
  else
    v11 = 0; /*0x6853bb*/
  g_TacticalClass_Instance = v11; /*0x6853bf*/
  Map_Setup_6DA980(); /*0x6853c4*/
  byte_829AE4 = 0; /*0x6853ce*/
  while ( dword_A8E370 ) /*0x6853d6*/
  {
    if ( (*(int (**)(unsigned int))(**(unsigned int **)dword_A8E364 + 44))(*(unsigned int *)dword_A8E364) == 8 ) /*0x6853e7*/
    {
      (*(void (__stdcall **)(unsigned int))(**(unsigned int **)dword_A8E364 + 8))(*(unsigned int *)dword_A8E364); /*0x6853f3*/
    }
    else if ( *(unsigned int *)dword_A8E364 ) /*0x6853fe*/
    {
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_A8E364 + 32))(*(unsigned int *)dword_A8E364, 1); /*0x685408*/
    }
  }
  byte_829AE4 = 1; /*0x685418*/
  while ( g_MultiplayerCleanup ) /*0x685421*/
  {
    if ( *(unsigned int *)dword_B0E784 ) /*0x685429*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_B0E784 + 32))(*(unsigned int *)dword_B0E784, 1); /*0x685433*/
  }
  FootClass_Array.barrelRecoil[0] = 0; /*0x685443*/
  if ( FootClass_Array.turretRecoil[5] && (((unsigned char *)&(FootClass_Array.turretRecoil[7]))[1]) ) /*0x685453*/
  {
    operator delete((void *)((void *)FootClass_Array.turretRecoil[5])); /*0x685456*/
    FootClass_Array.turretRecoil[5] = 0; /*0x68545e*/
  }
  (((unsigned char *)&(FootClass_Array.turretRecoil[7]))[1]) = 0; /*0x685469*/
  FootClass_Array.turretRecoil[6] = 0; /*0x685471*/
  FootClass_Array.unk1Particles = 0; /*0x685477*/
  if ( FootClass_Array.ambientParticles && (((unsigned char *)&(FootClass_Array.railgunParticles))[1]) ) /*0x685485*/
  {
    operator delete((void *)(FootClass_Array.ambientParticles)); /*0x685488*/
    FootClass_Array.ambientParticles = 0; /*0x685490*/
  }
  (((unsigned char *)&(FootClass_Array.railgunParticles))[1]) = 0; /*0x68549b*/
  FootClass_Array.damageParticles = 0; /*0x6854a1*/
  dword_A8B230[381].uniqueId = 3600; /*0x6854a7*/
  dword_A8B230[381].abstractFlags = dword_A8B230[381].uniqueId; /*0x6854bc*/
  dword_A8B230[381].nextArrayIndex = dword_A8B230[381].uniqueId; /*0x6854cd*/
  (*((unsigned char *)&(dword_A8B230[381].referenceCount))) = 0; /*0x6854d8*/
  (*(((unsigned char *)&(dword_A8B230[382].abstractFlags)) + (sizeof(dword_A8B230[382].abstractFlags) - 1))) = 0; /*0x6854e4*/
  (((unsigned char *)&(dword_A8B230[383].uniqueId))[2]) = 0; /*0x6854f0*/
  (((unsigned char *)&(dword_A8B230[384].vfptr3))[1]) = 0; /*0x6854fb*/
  Map_Reset_5549A0(v16); /*0x685501*/
  Map_Reset(v17); /*0x685506*/
  sub_4C5470(v18); /*0x68550b*/
  CleanupVeinholeSystem(); /*0x685510*/
  BuildingClass::FreeUpgradeQueue(); /*0x685515*/
  BuildingClass::FreeUpgradeQueue2(); /*0x68551a*/
  Stream::FlushAndReset(&stru_87F5D8); /*0x685524*/
  LoadGame::CleanupArray((LoadGame *)&g_MissionQueueFrame); /*0x68552e*/
  LoadGame::ClearAllSlots((LoadGame *)&g_CellClassManager); /*0x685538*/
  PlanningNodeClass::CleanupAll(); /*0x68553d*/
  *(unsigned int *)&DataGlobal_87F8D4 = 0; /*0x68554f*/
  *(unsigned int *)&DataGlobal_87F8D8 = 0; /*0x685554*/
  *(unsigned int *)&g_Cell_PositionLUT = 0; /*0x68555a*/
  *(unsigned int *)&g_CellPositionOffset = 0; /*0x685560*/
  Debug::Log(); /*0x685566*/
  MouseClass::HandleClick((MouseClass *)&DataGlobal_87F7E8); /*0x685573*/
  Debug::Log(); /*0x68557d*/
  (*(void (**)(char *))(*(unsigned int *)&g_GameConfigManager + 12))(&g_GameConfigManager); /*0x685590*/
  Debug::Log(); /*0x685598*/
  *(unsigned int *)&((unsigned int *)&stru_A8EB00)[228] = 0; /*0x6855a7*/
  if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[216] && ((unsigned int *)&stru_A8EB00)[225] ) /*0x6855b5*/
  {
    operator delete((void *)(*(void **)&((unsigned int *)&stru_A8EB00)[216])); /*0x6855b8*/
    *(unsigned int *)&((unsigned int *)&stru_A8EB00)[216] = 0; /*0x6855c0*/
  }
  ((unsigned int *)&stru_A8EB00)[225] = 0; /*0x6855cb*/
  *(unsigned int *)&((unsigned int *)&stru_A8EB00)[220] = 0; /*0x6855d1*/
  Debug::Log(); /*0x6855d7*/
  v12 = (void **)((char *)&dword_A8B230[44].vfptr + 2); /*0x6855e4*/
  v13 = 702; /*0x6855e9*/
  do /*0x6855fa*/
  {
    *v12++ = dword_B05458; /*0x6855f4*/
    --v13; /*0x6855f9*/
  }
  while ( v13 ); /*0x6855fa*/
  Debug::Log(); /*0x685601*/
  Credits::Screen(); /*0x685609*/
  if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[404] ) /*0x685616*/
  {
    ScenarioClass::DestroyAndClearVector(*(ScenarioClass **)&((unsigned int *)&stru_A8EB00)[404]); /*0x685618*/
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[404] ) /*0x685625*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)&((unsigned int *)&stru_A8EB00)[404] + 32))(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[404], 1); /*0x68562b*/
    *(unsigned int *)&((unsigned int *)&stru_A8EB00)[404] = 0; /*0x68562e*/
  }
  (*((unsigned char *)&(dword_A8B230[14].NeedsSaveOrLink))) = 0; /*0x68563a*/
  Map_Reset_734210(); /*0x685640*/
  Selection::ClearGlobals(0); /*0x685647*/
  result = Map_Reset_660C50(); /*0x68564c*/
  dword_A8B230[14].referenceCount = 1000000; /*0x685659*/
  return result; /*0x685657*/
}
}
// 0x687CE0
namespace gamemd {
char * SaveScenarioToINI(char * Source, char a2, int a3)
{
  unsigned int *v4; // eax
  char v5; // al
  ObjectClass *v7; // [esp+0h] [ebp-FCh]
  char v8; // [esp+Bh] [ebp-F1h]
  ObjectClass v10; // [esp+10h] [ebp-ECh] BYREF
  int v11[3]; // [esp+C4h] [ebp-38h] BYREF
  int v12; // [esp+D0h] [ebp-2Ch]
  RawFileClass v13; // [esp+D8h] [ebp-24h] BYREF

  v10.vfptr.vfptr2 = 0; /*0x687cf4*/
  v10.vfptr.vfptr3 = 0; /*0x687cf8*/
  GenericList::Constructor((GenericList *)&v10.vfptr.uniqueId); /*0x687cfc*/
  v10.vfptr.uniqueId = (int)&vt_List; /*0x687d05*/
  Node::Init((MixFileClass *)&v10.fallRate); /*0x687d0d*/
  v10.ambientSoundController[1] = 0; /*0x687d17*/
  (*((unsigned char *)&(v10.ambientSoundController[2]))) = 0; /*0x687d1d*/
  v10.vfptr.vfptr1 = (int)&CCINIClass_Vtable; /*0x687d21*/
  if ( byte_A8ED6B ) /*0x687d29*/
  {
    v4 = CCFileClass::Construct((CCFileClass *)&v10.customSound_controller[3], Source); /*0x687d34*/
    v5 = (*(int (**)(unsigned int *, unsigned int))(*v4 + 20))(v4, 0); /*0x687d3e*/
    v10.customSound_controller[3] = (int)&vt_CCFileClass; /*0x687d48*/
    v8 = v5; /*0x687d50*/
    v12 = 0; /*0x687d54*/
    Vector::Clear((int)v11); /*0x687d5b*/
    v10.customSound_controller[3] = (int)&off_7E1668; /*0x687d64*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v10.customSound_controller[3]))->Dtor(); /*0x687d6c*/
    if ( v8 ) /*0x687d75*/
    {
      CCFileClass::Construct((CCFileClass *)&v10.customSound_controller[3], Source); /*0x687d7c*/
      CCINIClass::Load((CCINIClass *)&v10.vfptr.vfptr1, (int)&v10.customSound_controller[3], 1, 0); /*0x687d8d*/
      v10.customSound_controller[3] = (int)&vt_CCFileClass; /*0x687d99*/
      v12 = 0; /*0x687da1*/
      Vector::Clear((int)v11); /*0x687da8*/
      v10.customSound_controller[3] = (int)&off_7E1668; /*0x687db1*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v10.customSound_controller[3]))->Dtor(); /*0x687db9*/
    }
  }
  ScenarioClass::SaveToINI((int)dword_A8B230, (char *)&v10.vfptr.vfptr1, a2); /*0x687dce*/
  if ( a2 ) /*0x687dd7*/
  {
    if ( dword_ABE154 && *(unsigned int *)dword_ABE154 ) /*0x687de3*/
    {
      MiniMap::SavePreviewToINI((MiniMap *)dword_ABE154, (char *)&v10.vfptr.vfptr1); /*0x687dec*/
    }
    else
    {
      unknown_libname_27(&v10); /*0x687df7*/
      MiniMap::Render((MiniMap *)&v10); /*0x687e00*/
      MiniMap::SavePreviewToINI((MiniMap *)&v10, (char *)&v10.vfptr.vfptr1); /*0x687e0e*/
      ComPtr::Dtor((ComPtr *)&v10); /*0x687e17*/
    }
  }
  else
  {
    CCINIClass::WriteHouses((char *)&v10.vfptr.vfptr1); /*0x687e22*/
  }
  MapClass::SaveCellTagsToINI((MapClass *)&dword_87F7E8, (char *)&v10.vfptr.vfptr1); /*0x687e31*/
  ObjectTypeClass::ReadDestroyAnim((char *)&v10.vfptr.vfptr1); /*0x687e3a*/
  ReadFootINI((char *)&v10.vfptr.vfptr1); /*0x687e43*/
  SaveInfantryToINI(v7, a3, (int)Source); /*0x687e4c*/
  SaveAircraftToINI((char *)&v10.vfptr.vfptr1); /*0x687e55*/
  sub_44FE60((char *)&v10.vfptr.vfptr1); /*0x687e5e*/
  OverlayClass::WriteINI((char *)&v10.vfptr.vfptr1); /*0x687e67*/
  UnitTypeClass::ReadINIEntry((char *)&v10.vfptr.vfptr1); /*0x687e70*/
  InfantryClass::SetMission((char *)&v10.vfptr.vfptr1); /*0x687e79*/
  if ( !a2 || byte_A8ED6B ) /*0x687e8a*/
  {
    nullsub_34(); /*0x687e92*/
    ScriptTypeClass::ReadINI((INIClass *)&v10.vfptr.vfptr1, 0); /*0x687e9d*/
    TeamTypeClass::ReadScriptData((INIClass *)&v10.vfptr.vfptr1, 0); /*0x687ea8*/
    CCINIClass::ReadInfantryTypeList((INIClass *)&v10.vfptr.vfptr1, 0); /*0x687eb3*/
  }
  ReadAudioEventINI((INIClass *)&v10.vfptr.vfptr1); /*0x687ebc*/
  SaveTriggerTagsToINI((INIClass *)&v10.vfptr.vfptr1); /*0x687ec5*/
  RawFileClass::Construct((BufferIOFileClass *)&v13, (int)Source); /*0x687ed2*/
  INIClass::WriteDigest((CCINIClass *)&v10.vfptr.vfptr1, (int)&v13, 1); /*0x687ee5*/
  ((RawFileClass *)((BufferIOFileClass *)&v13))->Dtor(); /*0x687ef1*/
  return HashTable::DestroyHashTableINIClass((INIClass *)&v10.vfptr.vfptr1); /*0x687eff*/
}
}
// 0x687F10
namespace gamemd {
AbstractClass * * SessionClass_AssignHouses()
{
  int DeleteAndZero_field_0x08; // edi
  int v2; // esi
  int *v3; // ecx
  int v4; // edx
  int v5; // eax
  unsigned int *v6; // ecx
  int v7; // ebx
  int *v8; // eax
  int v9; // ebp
  char *v10; // eax
  int v11; // eax
  int *v12; // ebx
  int v13; // edi
  unsigned int v14; // esi
  int *v15; // eax
  int v16; // ebp
  LPARAM v17; // edx
  int v18; // eax
  wchar_t *StringCSF; // eax
  int v20; // eax
  int *v21; // esi
  int v22; // eax
  int v23; // esi
  int *v24; // esi
  int v25; // eax
  int v26; // esi
  int v28; // [esp+8h] [ebp-4Ch]
  DeleteAndZero v29; // [esp+Ch] [ebp-48h] BYREF
  int v30; // [esp+18h] [ebp-3Ch]
  unsigned int v31[2]; // [esp+1Ch] [ebp-38h]
  char Destination[20]; // [esp+24h] [ebp-30h] BYREF
  char v33; // [esp+38h] [ebp-1Ch]
  char v34[20]; // [esp+3Ch] [ebp-18h] BYREF
  char v35; // [esp+50h] [ebp-4h]

  DeleteAndZero_field_0x08 = dword_A8DA84; /*0x687f15*/
  v2 = 0; /*0x687f1b*/
  for ( v29.u32_8 = dword_A8DA84; v2 < DeleteAndZero_field_0x08; ++v2 ) /*0x687f23*/
  {
    v3 = (int *)dword_A8DA78[v2]; /*0x687f2a*/
    if ( *(int *)((char *)v3 + 75) == -3 ) /*0x687f31*/
      ((SessionClass *)(v3))->SetPlayerOption(0); /*0x687f35*/
  }
  v31[0] = 0; /*0x687f42*/
  v31[1] = 0; /*0x687f49*/
  HouseClass_Observer = 0; /*0x687f4d*/
  if ( DeleteAndZero_field_0x08 > 0 ) /*0x687f53*/
  {
    v30 = DeleteAndZero_field_0x08; /*0x687f59*/
    do /*0x688146*/
    {
      v4 = -1; /*0x687f63*/
      v28 = -1; /*0x687f66*/
      v5 = 0; /*0x687f6e*/
      v6 = dword_A8DA78; /*0x687f70*/
      do /*0x687f95*/
      {
        if ( !*((unsigned char *)v31 + v5) && (v4 == -1 || *(unsigned int *)(*v6 + 83) < v4) ) /*0x687f84*/
        {
          v28 = v5; /*0x687f88*/
          v4 = *(unsigned int *)(*v6 + 83); /*0x687f8c*/
        }
        ++v5; /*0x687f8f*/
        ++v6; /*0x687f90*/
      }
      while ( v5 < DeleteAndZero_field_0x08 ); /*0x687f95*/
      v7 = dword_A8DA78[v28]; /*0x687fa0*/
      *((unsigned char *)v31 + v28) = 1; /*0x687fa3*/
      v8 = (int *)operator new(0x160B8u); /*0x687fa8*/
      if ( v8 ) /*0x687fb2*/
        v9 = HouseClass::Construct(v8, *((unsigned int *)dword_A83C9C + v7->q_4B)); /*0x687fc8*/
      else
        v9 = 0; /*0x687fcc*/
      if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x687fd5*/
      {
        ((WideString *)((wchar_t **)&v29))->Assign((wchar_t *)v7); /*0x687fdc*/
        ToWideStringCharAlt((char **)&v29.q004, (const wchar_t **)&v29); /*0x687fe9*/
        DeleteAndZero::Alt(&v29); /*0x687ff2*/
        v10 = ((String *)((String *)&v29.q004))->GetOrEmpty(); /*0x687ffb*/
        if ( v10 ) /*0x688002*/
        {
          strncpy(Destination, v10, 0x14u); /*0x688012*/
          v33 = 0; /*0x68801a*/
        }
        else
        {
          Destination[0] = 0; /*0x688004*/
        }
        if ( Destination != (char *)(v9 + 90100) ) /*0x68802b*/
        {
          memcpy((void *)(v9 + 90100), Destination, 0x14u); /*0x688038*/
          *(unsigned char *)(v9 + 90120) = v33; /*0x68803a*/
          DeleteAndZero_field_0x08 = v29.u32_8; /*0x68803b*/
        }
        DeleteAndZero((ObjectClass *)&v29.q004); /*0x688043*/
      }
      else
      {
        if ( aHumanPlayer ) /*0x688051*/
        {
          strncpy(v34, aHumanPlayer, 0x14u); /*0x688065*/
          v35 = 0; /*0x68806d*/
        }
        else
        {
          v34[0] = (uint8_t)aHumanPlayer; /*0x688053*/
        }
        if ( v34 != (char *)(v9 + 90100) ) /*0x68807e*/
        {
          memcpy((void *)(v9 + 90100), v34, 0x14u); /*0x68808b*/
          *(unsigned char *)(v9 + 90120) = v35; /*0x68808d*/
          DeleteAndZero_field_0x08 = v29.u32_8; /*0x68808e*/
        }
      }
      wcsncpy((wchar_t *)(v9 + 90154), (const wchar_t *)v7, 0x15u); /*0x68809c*/
      *(unsigned short *)(v9 + 90194) = 0; /*0x6880a4*/
      *(unsigned char *)(v9 + 492) = 1; /*0x6880ad*/
      sub_4FCE00((ObjectClass *)v9, v7->q053, v7->q_4B, *(int *)&g_Rules_Bases); /*0x6880c4*/
      *(unsigned int *)(v9 + 90196) = SessionClass::GetPlayerColorScheme(*(unsigned int *)(v7 + 83)); /*0x6880d9*/
      HouseClass::GetColor((char *)v9); /*0x6880df*/
      ComputeSessionColorVector((ObjectClass *)v9); /*0x6880e6*/
      *(unsigned int *)(v9 + 90200) = SessionClass::GetOption((int *)v7); /*0x6880f2*/
      *(unsigned int *)(v9 + 90204) = *(unsigned int *)(v7 + 99); /*0x688101*/
      if ( !v28 ) /*0x688107*/
      {
        dword_A83D4C = (Object *)v9; /*0x688109*/
        *(unsigned char *)(v9 + 493) = 1; /*0x68810f*/
      }
      if ( v7->u32_6B == -1 ) /*0x68811a*/
        HouseClass_Observer = v9; /*0x68811c*/
      *(unsigned int *)(v9 + 468) = g_RulesInitConfig; /*0x68812c*/
      HouseClass::SetCombatPower((int *)v9, 1); /*0x688132*/
      v7->u32_6F = *(unsigned int *)(v9 + 48); /*0x68813a*/
      --v30; /*0x688142*/
    }
    while ( v30 ); /*0x688146*/
  }
  v11 = 0; /*0x688152*/
  v30 = *(unsigned int *)&g_Rules_AlliesAllowed; /*0x688154*/
  v12 = (int *)&g_CampaignPlayerArray; /*0x688158*/
  do /*0x6882cb*/
  {
    if ( v11 < v30 ) /*0x688161*/
    {
      v13 = *v12; /*0x688167*/
      if ( *v12 != -1 && v13 != -3 ) /*0x688175*/
      {
        v14 = v12[8]; /*0x68817b*/
        v29.u32_8 = v11 + 1; /*0x688184*/
        v15 = (int *)operator new(0x160B8u); /*0x688188*/
        if ( v15 ) /*0x688192*/
          v16 = HouseClass::Construct(v15, *((unsigned int *)dword_A83C9C + v13)); /*0x6881a5*/
        else
          v16 = 0; /*0x6881a9*/
        v17 = g_RulesInitConfig; /*0x6881ab*/
        *(unsigned char *)(v16 + 492) = 0; /*0x6881b1*/
        *(unsigned int *)(v16 + 468) = v17; /*0x6881b8*/
        sub_4FCE00((ObjectClass *)v16, v14, v13, *(int *)&g_Rules_Bases); /*0x6881c8*/
        *(unsigned int *)(v16 + 90196) = SessionClass::GetPlayerColorScheme(v14); /*0x6881da*/
        HouseClass::GetColor((char *)v16); /*0x6881e0*/
        ComputeSessionColorVector((ObjectClass *)v16); /*0x6881e7*/
        *(unsigned int *)(v16 + 90200) = v12[16]; /*0x6881ef*/
        v18 = v12[24]; /*0x6881f5*/
        *(unsigned int *)(v16 + 90204) = v18; /*0x6881fb*/
        if ( v18 != -1 ) /*0x688201*/
          (*((unsigned char *)&(dword_A8B230[127].vfptr1))) = 1; /*0x688209*/
        if ( g_INI_Key_Computer ) /*0x688217*/
        {
          strncpy(v34, g_INI_Key_Computer, 0x14u); /*0x68822b*/
          v35 = 0; /*0x688233*/
        }
        else
        {
          v34[0] = (uint8_t)g_INI_Key_Computer; /*0x688219*/
        }
        if ( v34 != (char *)(v16 + 90100) ) /*0x688244*/
        {
          memcpy((void *)(v16 + 90100), v34, 0x14u); /*0x68824f*/
          *(unsigned char *)(v16 + 90120) = v35; /*0x688251*/
        }
        StringCSF = GetStringCSF(g_Str_TXT_COMPUTER, 0, g_Str_File_Scenario_CPP, 4032); /*0x688263*/
        wcscpy((wchar_t *)(v16 + 90154), StringCSF); /*0x688270*/
        if ( *(unsigned int *)&dword_A8B238 ) /*0x68827f*/
          *(unsigned int *)(v16 + 588) = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5172); /*0x68828d*/
        v20 = *(v12 - 8); /*0x688299*/
        if ( dword_A8DA84 > 1 && *(unsigned char *)(*(unsigned int *)&g_RulesClass_Instance + 6115) && v20 > 0 ) /*0x6882b3*/
          --v20; /*0x6882b5*/
        HouseClass::SetCombatPower((int *)v16, v20); /*0x6882b9*/
        v11 = v29.u32_8; /*0x6882be*/
      }
    }
    ++v12; /*0x6882c2*/
  }
  while ( (int)v12 < (int)&g_CampaignConfig ); /*0x6882cb*/
  v21 = (int *)operator new(0x160B8u); /*0x6882de*/
  if ( v21 ) /*0x6882e4*/
  {
    v22 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)&stru_82BA00.vfptr2); /*0x6882eb*/
    v23 = HouseClass::Construct(v21, *((unsigned int *)dword_A83C9C + v22)); /*0x688303*/
  }
  else
  {
    v23 = 0; /*0x688307*/
  }
  v23->q16054 = Network_Assign(g_INI_Key_LightGrey, 53); /*0x68831a*/
  HouseClass::GetColor((char *)v23); /*0x688320*/
  v24 = (int *)operator new(0x160B8u); /*0x68832f*/
  if ( v24 ) /*0x688336*/
  {
    v25 = SuperWeaponTypeClass::FindByName(&g_INI_Key_Special); /*0x68833d*/
    v26 = HouseClass::Construct(v24, *((unsigned int *)dword_A83C9C + v25)); /*0x688356*/
  }
  else
  {
    v26 = 0; /*0x68835a*/
  }
  v26->q16054 = Network_Assign(g_INI_Key_LightGrey, 53); /*0x68836d*/
  return HouseClass::GetColor((char *)v26); /*0x688378*/
}
}
// 0x6886B0
namespace gamemd {
void GenerateScenarioUnits(char a1)
{
  int v1; // edi
  int v2; // ebp
  int i; // ebx
  unsigned char *v4; // ecx
  int v5; // eax
  int v6; // esi
  unsigned int *v7; // edx
  int j; // esi
  unsigned char *v9; // ecx
  int v10; // edi
  int v11; // ecx
  unsigned int *v12; // esi
  int v13; // eax
  int v14; // ebp
  int v15; // ebx
  int v16; // edi
  int v17; // esi
  int v18; // eax
  int v19; // edx
  unsigned int *v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // esi
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // ebp
  int v28; // eax
  int k; // edi
  int16_t v30; // cx
  double v31; // st7
  double v32; // st7
  int v33; // edi
  int v34; // edx
  int v35; // ecx
  int v38; // eax
  void *v39; // esi
  int v41; // eax
  int *v42; // esi
  int v43; // eax
  void *v45; // eax
  int v46; // ebx
  int v47; // esi
  int v48; // eax
  int v49; // eax
  void *v50; // edi
  unsigned int *v51; // ebp
  void *v52; // edi
  int v53; // eax
  unsigned int v54[253]; // [esp-3DCh] [ebp-504h] BYREF
  LPVOID ppv; // [esp+28h] [ebp-100h]
  int v57; // [esp+30h] [ebp-F8h]
  int v58; // [esp+34h] [ebp-F4h] BYREF
  int v59; // [esp+38h] [ebp-F0h]
  void **v60; // [esp+3Ch] [ebp-ECh] BYREF
  void *Block; // [esp+40h] [ebp-E8h]
  int v62; // [esp+44h] [ebp-E4h]
  char v63; // [esp+49h] [ebp-DFh]
  int v64; // [esp+4Ch] [ebp-DCh]
  int v65; // [esp+50h] [ebp-D8h]
  int v66; // [esp+54h] [ebp-D4h]
  void **v67; // [esp+58h] [ebp-D0h] BYREF
  void *v68; // [esp+5Ch] [ebp-CCh]
  int v69; // [esp+60h] [ebp-C8h]
  char v70; // [esp+65h] [ebp-C3h]
  int v71; // [esp+68h] [ebp-C0h]
  int v72; // [esp+6Ch] [ebp-BCh]
  void **v73; // [esp+70h] [ebp-B8h] BYREF
  void *v74; // [esp+74h] [ebp-B4h]
  int v75; // [esp+78h] [ebp-B0h]
  int v76; // [esp+7Ch] [ebp-ACh]
  int v77; // [esp+80h] [ebp-A8h]
  int v78; // [esp+84h] [ebp-A4h]
  int v79; // [esp+88h] [ebp-A0h]
  void **v80; // [esp+8Ch] [ebp-9Ch] BYREF
  void *v81; // [esp+90h] [ebp-98h]
  int v82; // [esp+94h] [ebp-94h]
  char v83; // [esp+99h] [ebp-8Fh]
  int v84; // [esp+9Ch] [ebp-8Ch]
  unsigned int v85[4]; // [esp+A4h] [ebp-84h] BYREF
  unsigned int v86[3]; // [esp+B4h] [ebp-74h] BYREF
  unsigned int v87[26]; // [esp+C0h] [ebp-68h] BYREF

  a1 = a1; /*0x6886c0*/
  EventClass::resetEvent(&v60, 0, 0); /*0x6886cc*/
  v60 =(unsigned int)(void*)&DynamicVectorClass_TechnoClass___vftable; /*0x6886d6*/
  ppv = (LPVOID)g_abs_A8B270; /*0x6886de*/
  v65 = 10; /*0x6886e9*/
  v64 = 0; /*0x6886f1*/
  if ( g_abs_A8B258 ) /*0x6886f9*/
    ppv = (char *)ppv - 1; /*0x6886fb*/
  qmemcpy(v54, &dword_A8B230->u32_218, sizeof(v54)); /*0x68871d*/
  Debug::Log(); /*0x688724*/
  Debug::Log(); /*0x68873a*/
  v1 = 0; /*0x68874a*/
  v2 = 0; /*0x68874c*/
  for ( i = 0; i < dword_A83CF0; ++i ) /*0x688752*/
  {
    v4 = (unsigned char *)*((unsigned int *)dword_A83CE4 + i); /*0x68875a*/
    if ( v4[1749] ) /*0x68875d*/
    {
      v5 = 0; /*0x68876d*/
      v6 = dword_8871E0->AutocreateTime[1]; /*0x68876f*/
      if ( v6 <= 0 ) /*0x688777*/
      {
  LABEL_9:
        v1 += (*(int (**)(unsigned char *))(*(unsigned int *)v4 + 172))(v4); /*0x68878b*/
        ++v2; /*0x688795*/
      }
      else
      {
        v7 = (unsigned int *)dword_8871E0->SovietSurvivorDivisor[2]; /*0x688779*/
        while ( (unsigned char *)*v7 != v4 ) /*0x688781*/
        {
          ++v5; /*0x688783*/
          ++v7; /*0x688784*/
          if ( v5 >= v6 ) /*0x688789*/
            goto LABEL_9; /*0x688789*/
        }
      }
    }
  }
  for ( j = 0; j < dword_A8E358; ++j ) /*0x6887a9*/
  {
    v9 = (unsigned char *)*((unsigned int *)dword_A8E34C + j); /*0x6887b1*/
    if ( v9[1749] ) /*0x6887b4*/
    {
      v1 += (*(int (**)(unsigned char *))(*(unsigned int *)v9 + 172))(v9); /*0x6887c6*/
      ++v2; /*0x6887c8*/
    }
  }
  v66 = (unsigned int)ppv * (v1 / v2); /*0x6887e5*/
  Multiplayer::FindStartPositions(&v80); /*0x6887e9*/
  v10 = 0; /*0x6887f0*/
  memset(v85, 0, sizeof(v85)); /*0x6887f2*/
  v11 = 0; /*0x6887f9*/
  v59 = 0; /*0x688802*/
  v79 = 0; /*0x68880d*/
  if ( dword_A80238 > 0 ) /*0x68881f*/
  {
  LABEL_16:
    v12 = *&dword_A8022C->vtable1; /*0x688825*/
    ppv = v12; /*0x68882e*/
    v13 = v12[13]; /*0x688832*/
    if ( *(unsigned char *)(v13 + 422) ) /*0x688835*/
      goto LABEL_111; /*0x68883d*/
    v54[252] = v13 + 36; /*0x688846*/
    v54[251] = v11; /*0x688847*/
    v54[250] = aGeneratingUnit; /*0x688848*/
    Debug::Log(); /*0x68884d*/
    UnitTypeVector::Construct2(0, 0); /*0x68885b*/
    v67 =(unsigned int)(void*)&DynamicVectorClass_UnitTypeClass___vftable; /*0x68886b*/
    v72 = 10; /*0x688873*/
    v71 = 0; /*0x688877*/
    InfantryTypeVector::ConstructFromData(0, 0); /*0x68887b*/
    v73 =(unsigned int)(void*)&DynamicVectorClass_InfantryTypeClass___vftable; /*0x688880*/
    v78 = 10; /*0x688888*/
    v77 = 0; /*0x68888c*/
    v14 = 0; /*0x688898*/
    v15 = 1 << *(unsigned int *)(v12[13] + 180); /*0x6888a5*/
    if ( dword_A83CF0 <= 0 ) /*0x6888a9*/
      goto LABEL_35; /*0x6888a9*/
    v16 = v69; /*0x6888af*/
    while ( 1 ) /*0x6888b9*/
    {
      v17 = *((unsigned int *)dword_A83CE4 + v14); /*0x6888b9*/
      if ( *(unsigned char *)(v17 + 1749) /*0x6888e2*/
        && *(unsigned int *)(v17 + 1588) <= ppv->TechLevel
        && (v15 & *(unsigned int *)(v17 + 1740)) != 0 )
      {
        v18 = 0; /*0x6888ea*/
        v19 = dword_8871E0->AutocreateTime[1]; /*0x6888ec*/
        if ( v19 > 0 ) /*0x6888f4*/
        {
          v20 = (unsigned int *)dword_8871E0->SovietSurvivorDivisor[2]; /*0x6888f6*/
          while ( *v20 != v17 ) /*0x6888fe*/
          {
            ++v18; /*0x688900*/
            ++v20; /*0x688901*/
            if ( v18 >= v19 ) /*0x688906*/
              goto LABEL_26; /*0x688906*/
          }
          goto LABEL_33; /*0x6888fe*/
        }
  LABEL_26:
        if ( v71 < v16 ) /*0x68890c*/
          goto LABEL_31; /*0x68890c*/
        if ( !v70 && v16 || v72 <= 0 ) /*0x688920*/
        if ( ((uint8_t (__thiscall *)(void ***, int, unsigned int))v67[2])(&v67, v72 + v16, 0) ) /*0x688931*/
        {
  LABEL_31:
          v21 = v71++; /*0x68893c*/
          *((unsigned int *)v68 + v21) = v17; /*0x688947*/
        }
        v16 = v69; /*0x68894a*/
      }
  LABEL_33:
      if ( ++v14 >= dword_A83CF0 ) /*0x688956*/
      {
        v10 = 0; /*0x68895c*/
  LABEL_35:
        if ( dword_A8E358 > 0 ) /*0x688964*/
        {
          v22 = v75; /*0x68896a*/
          do /*0x688974*/
          {
            v23 = *((unsigned int *)dword_A8E34C + v10); /*0x688974*/
            if ( *(unsigned char *)(v23 + 1749) /*0x688999*/
              && *(unsigned int *)(v23 + 1588) <= ppv->TechLevel
              && (v15 & *(unsigned int *)(v23 + 1740)) != 0 )
            {
              if ( v77 < v22 ) /*0x68899f*/
                goto LABEL_45; /*0x68899f*/
              if ( !(((v76) >> 8) & 0xFF) && v22 || v78 <= 0 ) /*0x6889b3*/
              if ( ((uint8_t (__thiscall *)(void ***, int, unsigned int))v73[2])(&v73, v78 + v22, 0) ) /*0x6889c2*/
              {
  LABEL_45:
                v24 = v77++; /*0x6889cd*/
                *((unsigned int *)v74 + v24) = v23; /*0x6889d8*/
              }
              v22 = v75; /*0x6889db*/
            }
            ++v10; /*0x6889df*/
          }
          while ( v10 < dword_A8E358 ); /*0x688974*/
        }
        if ( v59 ) /*0x6889f0*/
        {
          v27 = 0; /*0x688a3b*/
          memset(v87, 0, sizeof(v87)); /*0x688a3d*/
          v28 = v84; /*0x688a3f*/
          if ( v84 > 0 ) /*0x688a48*/
          {
            do /*0x688ad6*/
            {
              if ( !*((unsigned char *)v85 + v27) ) /*0x688a4e*/
              {
                for ( k = 0; k < v28; ++k ) /*0x688a5d*/
                {
                  if ( *((unsigned char *)v85 + k) ) /*0x688a5f*/
                  {
                    v30 = *((unsigned short *)v81 + 2 * v27) - *((unsigned short *)v81 + 2 * k); /*0x688a86*/
                    v57 = (int16_t)(*((unsigned short *)v81 + 2 * v27 + 1) - *((unsigned short *)v81 + 2 * k + 1)); /*0x688a90*/
                    v31 = (double)v57; /*0x688a94*/
                    v57 = v30; /*0x688a98*/
                    v32 = Math::Sqrt((double)v30 * (double)v30 + v31 * v31); /*0x688ab1*/
                    v87[v27] += (int16_t)Math::RoundToInt(v32); /*0x688ac5*/
                    v28 = v84; /*0x688ac7*/
                  }
                }
              }
              ++v27; /*0x688ad3*/
            }
            while ( v27 < v28 ); /*0x688ad6*/
          }
          v33 = 0; /*0x688adc*/
          v34 = 0; /*0x688ade*/
          v35 = 0; /*0x688ae0*/
          if ( v28 > 0 ) /*0x688ae4*/
          {
            v87 = v87; /*0x688ae6*/
            do /*0x688b02*/
            {
              if ( *v87 > v34 || !v34 ) /*0x688af6*/
              {
                v34 = *v87; /*0x688af8*/
                v33 = v35; /*0x688afa*/
              }
              ++v35; /*0x688afc*/
              ++v87; /*0x688afd*/
            }
            while ( v35 < v28 ); /*0x688b02*/
          }
          v81 = v81; /*0x688b04*/
          v38 = v59 + 1; /*0x688b0c*/
          *((unsigned char *)v85 + v33) = 1; /*0x688b0d*/
          v26 = v81[v33]; /*0x688b15*/
          v59 = v38; /*0x688b18*/
          v58 = v26; /*0x688b1c*/
        }
        else
        {
          v25 = Random::Range(&dword_A8B230->u32_218, 0, v84 - 1); /*0x688a08*/
          *((unsigned char *)v85 + v25) = 1; /*0x688a0d*/
          v59 = 1; /*0x688a19*/
          v26 = *((unsigned int *)v81 + v25); /*0x688a21*/
          v58 = v26; /*0x688a24*/
        }
        HouseClass::SetMapSeed(ppv, v26); /*0x688b25*/
        if ( g_abs_A8B258 ) /*0x688b31*/
        {
          v39 = operator new(0x8E8u); /*0x688b41*/
          ppv = ppv; /*0x688b51*/
          if ( v39 ) /*0x688b4a*/
          {
            v54[252] = ppv; /*0x688b5a*/
            v41 = BuildingClass::FindBySWType(ppv, (int)&dword_8871E0->SovietSurvivorDivisor[1]); /*0x688b5e*/
            v42 = (int *)UnitClass::Construct((int)v39, v41, (LPVOID)v54[252]); /*0x688b6b*/
          }
          else
          {
            v42 = 0; /*0x688b73*/
          }
          v43 = *v42; /*0x688b7f*/
          v54[252] = 0; /*0x688b81*/
          v86[2] = 0; /*0x688b8b*/
          v86[0] = ((int16_t)v58 << 8) + 128; /*0x688b92*/
          v54[251] = v86; /*0x688ba9*/
          v86[1] = (IDA_SHIWORD(v58) << 8) + 128; /*0x688bac*/
          if ( v42->COMStub_54(v86, 0) /*0x688bc5*/
            || FindInfantryDeployPosition(v42, (int16_t *)&v58, 1) )
          {
            if ( v42 ) /*0x688bdf*/
            {
              dword_B05458 = dword_B05458; /*0x688be1*/
              ppv[5367] = 0; /*0x688be6*/
              ppv[5368] = dword_B05458; /*0x688bec*/
              if ( (*(unsigned char *)dword_A8B230 & 0x10) != 0 ) /*0x688bfb*/
                HouseClass::PickedUpFlag(v42, 1); /*0x688c02*/
            }
          }
          else if ( v42 ) /*0x688bd0*/
          {
            (*(void (**)(int *, int))(*v42 + 32))(v42, 1); /*0x688bd8*/
          }
        }
        v45 = Block; /*0x688c0b*/
        v46 = 0; /*0x688c0f*/
        v64 = 0; /*0x688c13*/
        if ( Block && v63 ) /*0x688c1f*/
        {
          RA2_OPDEL(Block); /*0x688c22*/
          v45 = 0; /*0x688c2a*/
          Block = 0; /*0x688c2c*/
        }
        v63 = 0; /*0x688c34*/
        v62 = 0; /*0x688c3b*/
        if ( v66 > 0 ) /*0x688c3f*/
        {
          v57 = 2 * v66 / 3; /*0x688c58*/
          do /*0x688da2*/
          {
            v47 = 0; /*0x688c60*/
            if ( v46 >= v57 || v71 <= 0 ) /*0x688c6c*/
            {
              if ( v77 > 0 ) /*0x688c91*/
              {
                v49 = Random::Range((unsigned int *)dword_A8B230 + 134, 0, v77 - 1); /*0x688ca2*/
                v47 = *((unsigned int *)v74 + v49); /*0x688cab*/
              }
            }
            else
            {
              v48 = Random::Range((unsigned int *)dword_A8B230 + 134, 0, v71 - 1); /*0x688c7d*/
              v47 = *((unsigned int *)v68 + v48); /*0x688c86*/
            }
            v50 = (void *)(*(int (**)(int, LPVOID))(v47->q08C)(v47, ppv); /*0x688cbd*/
            v51 = AbstractClass::IsTechnoType(v50); /*0x688cce*/
            if ( FindInfantryDeployPosition((int *)v50, (int16_t *)&v58, 4) ) /*0x688cd0*/
            {
              v52 = (void *)ppv; /*0x688cef*/
              v54[252] = v47 + 36; /*0x688cf6*/
              v54[251] = *((unsigned int *)ppv + 13) + 36; /*0x688cfd*/
              v54[250] = aHouseSDeployed; /*0x688cfe*/
              Debug::Log(); /*0x688d03*/
              v46 += (*(int (**)(int))(v47->q02B)(v47); /*0x688d19*/
              if ( v64 < v62 /*0x688d44*/
                || (v63 || !v62)
                && v65 > 0
                && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v60[2])(&v60, v65 + v62, 0) )
              {
                v53 = v64++; /*0x688d4f*/
                *((unsigned int *)Block + v53) = v51; /*0x688d5a*/
              }
              if ( (*(unsigned int *)dword_A8B230 & 0x200) != 0 ) /*0x688d68*/
                Timer::SetFlag(v51 + 84, 1); /*0x688d72*/
              if ( (uint8_t)((House *)(v52))->IsCurrentPlayer() ) /*0x688d79*/
                (*(void (**)(unsigned int *, int))(*v51 + 496))(v51, 5); /*0x688d98*/
              else
                (*(void (**)(unsigned int *, int))(*v51 + 496))(v51, 11); /*0x688d89*/
            }
            else if ( v50 ) /*0x688cdb*/
            {
              (*(void (**)(void *, int))(v50->needsSave)(v50, 1); /*0x688ce7*/
            }
          }
          while ( v46 < v66 ); /*0x688da2*/
          v45 = Block; /*0x688da8*/
        }
        v64 = 0; /*0x688db0*/
        if ( v45 && v63 ) /*0x688dbc*/
        {
          RA2_OPDEL(v45); /*0x688dbf*/
          Block = 0; /*0x688dc7*/
        }
        v63 = 0; /*0x688dcf*/
        v62 = 0; /*0x688dd6*/
        v73 =(unsigned int)(void*)&VectorClass_InfantryTypeClass___vftable; /*0x688dda*/
        if ( v74 && (((v76) >> 8) & 0xFF) ) /*0x688dea*/
        {
          RA2_OPDEL(v74); /*0x688ded*/
          v74 = 0; /*0x688df5*/
        }
        (((v76) >> 8) & 0xFF) = 0; /*0x688dfd*/
        v75 = 0; /*0x688e04*/
        v67 =(unsigned int)(void*)&VectorClass_UnitTypeClass___vftable; /*0x688e08*/
        if ( v68 && v70 ) /*0x688e18*/
        {
          RA2_OPDEL(v68); /*0x688e1b*/
          v68 = 0; /*0x688e23*/
        }
        v11 = v79; /*0x688e27*/
        v70 = 0; /*0x688e2b*/
        v69 = 0; /*0x688e30*/
        v10 = 0; /*0x688e34*/
  LABEL_111:
        v79 = ++v11; /*0x688e3e*/
        if ( v11 >= dword_A80238 ) /*0x688e42*/
          break; /*0x688e42*/
        goto LABEL_16; /*0x688e42*/
      }
    }
  }
  v54[252] = Random::Range(&dword_A8B230->u32_218, 0, 0xFFFF); /*0x688e48*/
  v54[251] = aFinishedUnitGe; /*0x688e5f*/
  Debug::Log(); /*0x688e64*/
  v80 =(unsigned int)(void*)&VectorClass_Cell_vftable; /*0x688e75*/
  if ( v81 && v83 ) /*0x688e88*/
  {
    RA2_OPDEL(v81); /*0x688e8b*/
    v81 = 0; /*0x688e93*/
  }
  v83 = 0; /*0x688e9b*/
  v82 = 0; /*0x688ea5*/
  v60 =(unsigned int)(void*)&VectorClass_TechnoClass___vftable; /*0x688ea9*/
  if ( Block ) /*0x688eb1*/
  {
    if ( v63 ) /*0x688eb9*/
      RA2_OPDEL(Block); /*0x688ebc*/
  }
}
}
// 0x688ED0
namespace gamemd {
int FindInfantryDeployPosition(int *a1, RadarClass * a2, int a3)
{
  int16_t *v3; // esi
  Object *v5; // eax
  int ClosestObjectCell; // eax
  int v7; // edx
  int GroundHeight; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // esi
  int v16; // edi
  int v17; // ebp
  int16_t v18; // bx
  int v19; // ebx
  int v20; // ebp
  int v21; // ebp
  int v22; // esi
  int v23; // ebx
  int *v24; // edi
  Object *v25; // eax
  int v26; // eax
  int v27; // eax
  int16_t v28[2]; // [esp+10h] [ebp-5Ch] BYREF
  int v29; // [esp+14h] [ebp-58h]
  int v30; // [esp+18h] [ebp-54h]
  int v31; // [esp+1Ch] [ebp-50h]
  int v32; // [esp+20h] [ebp-4Ch]
  int v33; // [esp+24h] [ebp-48h]
  int16_t *v34; // [esp+28h] [ebp-44h]
  int *v35; // [esp+2Ch] [ebp-40h]
  int v36; // [esp+30h] [ebp-3Ch]
  int v37; // [esp+34h] [ebp-38h]
  int v38; // [esp+38h] [ebp-34h]
  int v39; // [esp+3Ch] [ebp-30h] BYREF
  int v40; // [esp+40h] [ebp-2Ch]
  int v41; // [esp+44h] [ebp-28h]
  int v42; // [esp+48h] [ebp-24h] BYREF
  int v43; // [esp+4Ch] [ebp-20h]
  int v44; // [esp+50h] [ebp-1Ch]
  unsigned int v45[3]; // [esp+54h] [ebp-18h] BYREF
  unsigned int v46[3]; // [esp+60h] [ebp-Ch] BYREF

  v3 = a2; /*0x688ed7*/
  v34 = a2; /*0x688ee3*/
  v35 = a1; /*0x688ee7*/
  if ( (uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)&DataGlobal_87F7E8, a2, 1) ) /*0x688eeb*/
  {
    v39 = 0; /*0x688f07*/
    v40 = 0; /*0x688f0b*/
    v5 = (Object *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(v3); /*0x688f0f*/
    ClosestObjectCell = ((Object *)(v5))->FindClosestObjectCell(&v39, 0, 0); /*0x688f16*/
    if ( !ClosestObjectCell /*0x688f39*/
      || (*(int (**)(int))(*(unsigned int *)ClosestObjectCell + 44))(ClosestObjectCell) == 15
      && (*(int (**)(int *))(*a1 + 44))(a1) == 15 )
    {
      v7 = v3[1] << 8; /*0x688f4f*/
      v42 = (*v3 << 8) + 128; /*0x688f52*/
      v43 = v7 + 128; /*0x688f62*/
      v44 = 0; /*0x688f66*/
      GroundHeight = Cell::GetGroundHeight(&v42); /*0x688f6a*/
      v9 = v3[1]; /*0x688f72*/
      v10 = (*v3 << 8) + 128; /*0x688f79*/
      v41 = GroundHeight; /*0x688f7f*/
      v11 = *a1; /*0x688f83*/
      v39 = v10; /*0x688f85*/
      v40 = (v9 << 8) + 128; /*0x688f9a*/
      if ( (*(uint8_t (**)(int *, int *, unsigned int))(v11 + 216))(a1, &v39, 0) ) /*0x688f9e*/
        return 1; /*0x688fb4*/
    }
  }
  if ( a3 < 32 ) /*0x688fc4*/
  {
  LABEL_8:
    v29 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x688fce*/
    v30 = 0; /*0x688fe6*/
    v37 = 0; /*0x688fea*/
    while ( 1 ) /*0x689032*/
    {
      v13 = *v3; /*0x689006*/
      v14 = v3[1]; /*0x689009*/
      v15 = *(unsigned int *)&DataGlobal_87F90C; /*0x68900d*/
      v36 = 0; /*0x689013*/
      v16 = *(unsigned int *)&DataGlobal_87F910; /*0x689017*/
      v32 = *(unsigned int *)&DataGlobal_87F910 + *(unsigned int *)&g_AircraftTrackerState - 1; /*0x689025*/
      switch ( v29 ) /*0x689032*/
      {
        case 0: /*0x689032*/
          v17 = a3; /*0x689039*/
          v14 -= a3; /*0x68903d*/
          break; /*0x68903f*/
        case 1: /*0x689032*/
          v17 = a3; /*0x689041*/
          v13 += a3; /*0x689045*/
          v14 -= a3; /*0x689047*/
          break; /*0x689049*/
        case 2: /*0x689032*/
          v17 = a3; /*0x68904b*/
          v13 += a3; /*0x68904f*/
          break; /*0x689051*/
        case 3: /*0x689032*/
          v17 = a3; /*0x689053*/
          v13 += a3; /*0x689057*/
          v14 += a3; /*0x689059*/
          break; /*0x68905b*/
        case 4: /*0x689032*/
          v17 = a3; /*0x68905d*/
          v14 += a3; /*0x689061*/
          break; /*0x689063*/
        case 5: /*0x689032*/
          v17 = a3; /*0x689065*/
          v13 -= a3; /*0x689069*/
          v14 += a3; /*0x68906b*/
          break; /*0x68906d*/
        case 6: /*0x689032*/
          v17 = a3; /*0x68906f*/
          v13 -= a3; /*0x689073*/
          break; /*0x689075*/
        case 7: /*0x689032*/
          v17 = a3; /*0x689077*/
          v13 -= a3; /*0x68907b*/
          v14 -= a3; /*0x68907d*/
          break; /*0x68907f*/
        default:
          v17 = a3; /*0x689081*/
          break; /*0x689081*/
      }
      if ( v13 > *(unsigned int *)&DataGlobal_87F90C + *(unsigned int *)&g_AircraftTrackerPool - 1 ) /*0x689087*/
        v13 = *(unsigned int *)&DataGlobal_87F90C + *(unsigned int *)&g_AircraftTrackerPool - 1; /*0x689089*/
      if ( v13 < *(int *)&DataGlobal_87F90C ) /*0x68908d*/
        (*((unsigned short *)&(v13))) = *(unsigned short *)&DataGlobal_87F90C; /*0x68908f*/
      if ( v14 > v32 ) /*0x689097*/
        v14 = v32; /*0x689099*/
      if ( v14 < *(int *)&DataGlobal_87F910 ) /*0x68909d*/
        (*((unsigned short *)&(v14))) = *(unsigned short *)&DataGlobal_87F910; /*0x68909f*/
      (*((unsigned short *)&(v31))) = v13; /*0x6890a6*/
      (*(((unsigned short *)&(v31)) + 1)) = v14; /*0x6890ab*/
      v18 = v13; /*0x6890b0*/
      *(unsigned int *)v28 = v31; /*0x6890b4*/
      if ( v30 <= 0 ) /*0x6890b8*/
      {
        v3 = v34; /*0x68918e*/
        v24 = v35; /*0x689192*/
      }
      else
      {
        v19 = (int16_t)v14; /*0x6890be*/
        v20 = (int16_t)v13; /*0x6890c7*/
        v38 = *(unsigned int *)&DataGlobal_87F90C + *(unsigned int *)&g_AircraftTrackerPool - 1; /*0x6890d0*/
        v39 = *(unsigned int *)&DataGlobal_87F910 + *(unsigned int *)&g_AircraftTrackerState - 1; /*0x6890e5*/
        v32 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x6890fe*/
        if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 50 ) /*0x68910a*/
        {
          v21 = v20 - v32; /*0x68911e*/
          if ( v21 < v15 ) /*0x689124*/
            (*((unsigned short *)&(v21))) = v15; /*0x689126*/
        }
        else
        {
          v21 = v32 + v20; /*0x689114*/
          if ( v21 > v38 ) /*0x689118*/
            (*((unsigned short *)&(v21))) = v38; /*0x68911a*/
        }
        v22 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x68913d*/
        if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 50 ) /*0x689156*/
        {
          v23 = v19 - v22; /*0x689166*/
          if ( v23 < v16 ) /*0x68916a*/
            (*((unsigned short *)&(v23))) = v16; /*0x68916c*/
        }
        else
        {
          v23 = v22 + v19; /*0x68915c*/
          if ( v23 > v39 ) /*0x689160*/
            (*((unsigned short *)&(v23))) = v39; /*0x689162*/
        }
        v24 = v35; /*0x68916e*/
        v3 = v34; /*0x689172*/
        (*((unsigned short *)&(v33))) = v21; /*0x689176*/
        v17 = a3; /*0x68917b*/
        (*(((unsigned short *)&(v33)) + 1)) = v23; /*0x68917f*/
        v18 = v33; /*0x689184*/
        *(unsigned int *)v28 = v33; /*0x689188*/
      }
      if ( v18 == *v3 && v28[1] == v3[1] ) /*0x6891a4*/
        v36 = 1; /*0x6891a6*/
      if ( (uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)&DataGlobal_87F7E8, v28, 1) ) /*0x6891ba*/
      {
        if ( !v36 ) /*0x6891cf*/
        {
          v42 = 0; /*0x6891e6*/
          v43 = 0; /*0x6891ea*/
          v25 = (Object *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(v28); /*0x6891ee*/
          v26 = ((Object *)(v25))->FindClosestObjectCell(&v42, 0, 0); /*0x6891f5*/
          if ( !v26 /*0x689218*/
            || (*(int (**)(int))(*(unsigned int *)v26 + 44))(v26) == 15
            && (*(int (**)(int *))(*v24 + 44))(v24) == 15 )
          {
            ((Coord *)((Coord *)v45))->Subtract((v28[0] << 8) + 128, (v28[1] << 8) + 128, 0); /*0x68923d*/
            v27 = Cell::GetGroundHeight(v45); /*0x68924c*/
            ((Coord *)((Coord *)v46))->Subtract((v28[0] << 8) + 128, (v28[1] << 8) + 128, v27); /*0x689274*/
            if ( (*(uint8_t (**)(int *, unsigned int *, unsigned int))(*v24 + 216))(v24, v46, 0) ) /*0x689283*/
              return 1; /*0x68928b*/
          }
        }
      }
      if ( ++v29 > 7 ) /*0x6892a1*/
        v29 = 0; /*0x6892a3*/
      if ( ++v37 > 7 ) /*0x6892b3*/
      {
        if ( ++v30 >= 2 ) /*0x6892c5*/
        {
          a3 = v17 + 1; /*0x6892cf*/
          if ( v17 + 1 < 32 ) /*0x6892d3*/
            goto LABEL_8; /*0x6892d3*/
          return 0; /*0x6892d3*/
        }
        v37 = 0; /*0x688ff2*/
      }
    }
  }
  return 0; /*0x688fa8*/
}
}
// 0x681070
namespace gamemd {
int E4Recv_681070::sub_681070()
{

  return (int)this->M4; /*0x681073*/

}
} // namespace gamemd

// 0x681090
namespace gamemd {
int E4Recv_681090::ReadPointerFromECX3()
{
  return (int)this->vfptr; /*0x681092*/
}
} // namespace gamemd

// 0x6810C0
namespace gamemd {
const char * E4Recv_6810C0::_raw_name_type_info__QBEPBDXZ()
{
  return &this->u8_8; /*0x6810c3*/
}
} // namespace gamemd

// 0x681180
namespace gamemd {
char * E4Recv_681180::sub_681180()
{
  return &this->u8_190; /*0x681186*/
}
} // namespace gamemd

// 0x6811B0
namespace gamemd {
char ObjectClass::sub_6811B0()
{
  return &this->u32_294; /*0x6811b6*/
}
} // namespace gamemd

// 0x6811F0
namespace gamemd {
char ObjectClass::sub_6811F0()
{
  return &this->u32_2D4; /*0x6811f6*/
}
} // namespace gamemd

// 0x681220
namespace gamemd {
unsigned int ObjectClass::sub_681220(unsigned int * a2)
{
  *a2 = this->turretRecoil[0]; /*0x68122a*/
  a2[1] = this->turretRecoil[1]; /*0x681232*/
  return a2; /*0x681235*/
}
} // namespace gamemd

// 0x681260
namespace gamemd {
unsigned int ObjectClass::sub_681260(unsigned int * a2)
{
  *a2 = this->turretRecoil[2]; /*0x68126a*/
  a2[1] = this->turretRecoil[3]; /*0x681272*/
  return a2; /*0x681275*/
}
} // namespace gamemd

// 0x6812A0
namespace gamemd {
unsigned int * TechnoClass::sub_6812A0(unsigned int * a2)
{
  *a2 = this->turretRecoil[4]; /*0x6812aa*/
  a2[1] = this->turretRecoil[5]; /*0x6812b2*/
  return a2; /*0x6812b5*/
}
} // namespace gamemd

// 0x682570
namespace gamemd {
int COM_Property_ReadScenario(int a1, int a2, unsigned int * a3)
{
  unsigned int *v3; // edi
  int v4; // esi
  unsigned int v6[2]; // [esp+18h] [ebp-18h] BYREF
  unsigned short v7[4]; // [esp+20h] [ebp-10h] BYREF
  int v8; // [esp+28h] [ebp-8h]

  v3 = a3; /*0x682579*/
  a3 = 0; /*0x682581*/
  *v3 = 0; /*0x68258a*/
  v4 = (*(int (__stdcall **)(int, void *, int, unsigned int **))(*(unsigned int *)a1 + 16))(a1, &unk_7F7D10, 18, &a3); /*0x68259d*/
  if ( v4 >= 0 ) /*0x6825a1*/
  {
    v6[0] = 1; /*0x6825c9*/
    v6[1] = a2; /*0x6825d1*/
    if ( !a3 ) /*0x6825d5*/
      sub_7DC720(-2147467261); /*0x6825dc*/
    v4 = (*(int (__stdcall **)(unsigned int *, int, unsigned int *, unsigned short *))(*a3 + 12))(a3, 1, v6, v7); /*0x6825f7*/
    if ( v4 >= 0 ) /*0x6825fb*/
    {
      if ( v7[0] == 3 ) /*0x68261b*/
        *v3 = v8; /*0x682621*/
      if ( a3 ) /*0x682629*/
        (*(void (__stdcall **)(unsigned int *))(*a3 + 8))(a3); /*0x68262e*/
    }
    else if ( a3 ) /*0x682603*/
    {
      (*(void (__stdcall **)(unsigned int *))(*a3 + 8))(a3); /*0x682608*/
      return v4; /*0x682612*/
    }
  }
  else if ( a3 ) /*0x6825a9*/
  {
    (*(void (__stdcall **)(unsigned int *))(*a3 + 8))(a3); /*0x6825b2*/
    return v4; /*0x6825bc*/
  }
  return v4; /*0x6825b7*/
}
} // namespace gamemd

// 0x682D30
namespace gamemd {
int COM_ReadBuffer(int a1, int a2, unsigned int * a3)
{
  unsigned int *v3; // edi
  int v4; // esi
  int v6; // eax
  unsigned int v7[2]; // [esp+18h] [ebp-18h] BYREF
  unsigned short v8[4]; // [esp+20h] [ebp-10h] BYREF
  int v9; // [esp+28h] [ebp-8h]
  int v10; // [esp+2Ch] [ebp-4h]

  v3 = a3; /*0x682d39*/
  a3 = 0; /*0x682d41*/
  *v3 = 0; /*0x682d4a*/
  v3[1] = 0; /*0x682d50*/
  v4 = (*(int (__stdcall **)(int, void *, int, unsigned int **))(*(unsigned int *)a1 + 16))(a1, &unk_7F7D10, 18, &a3); /*0x682d64*/
  if ( v4 >= 0 ) /*0x682d68*/
  {
    v7[0] = 1; /*0x682d90*/
    v7[1] = a2; /*0x682d98*/
    if ( !a3 ) /*0x682d9c*/
      sub_7DC720(-2147467261); /*0x682da3*/
    v4 = (*(int (__stdcall **)(unsigned int *, int, unsigned int *, unsigned short *))(*a3 + 12))(a3, 1, v7, v8); /*0x682dbe*/
    if ( v4 >= 0 ) /*0x682dc2*/
    {
      if ( v8[0] == 64 ) /*0x682de2*/
      {
        v6 = v10; /*0x682de8*/
        *v3 = v9; /*0x682dec*/
        v3[1] = v6; /*0x682dee*/
      }
      if ( a3 ) /*0x682df7*/
        (*(void (__stdcall **)(unsigned int *))(*a3 + 8))(a3); /*0x682dfc*/
    }
    else if ( a3 ) /*0x682dca*/
    {
      (*(void (__stdcall **)(unsigned int *))(*a3 + 8))(a3); /*0x682dcf*/
      return v4; /*0x682dd9*/
    }
  }
  else if ( a3 ) /*0x682d70*/
  {
    (*(void (__stdcall **)(unsigned int *))(*a3 + 8))(a3); /*0x682d79*/
    return v4; /*0x682d83*/
  }
  return v4; /*0x682d7e*/
}
} // namespace gamemd

// 0x683070
namespace gamemd {
void sub_683070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x68307c*/
  dbl_B05460 = Math::Sqrt(v0 + v0); /*0x68308e*/
}
} // namespace gamemd

// 0x6830A0
namespace gamemd {
void sub_6830A0()
{
  dbl_B054C0 = dbl_B05460 / 60.0; /*0x6830ac*/
}
} // namespace gamemd

// 0x6830C0
namespace gamemd {
void sub_6830C0()
{
  dbl_B054A8 = 1.0 / dbl_B054C0; /*0x6830cc*/
}
} // namespace gamemd

// 0x6830E0
namespace gamemd {
void sub_6830E0()
{
  dbl_B054A0 = 0.0174532925199433 * 45.0; /*0x6830ec*/
}
} // namespace gamemd

// 0x683100
namespace gamemd {
void sub_683100()
{
  dbl_B05468 = 0.0174532925199433 * 60.0; /*0x68310c*/
}
} // namespace gamemd

// 0x683120
namespace gamemd {
void sub_683120()
{
  dbl_B05440 = 0.0174532925199433 * 90.0; /*0x68312c*/
}
} // namespace gamemd

// 0x683140
namespace gamemd {
long long sub_683140()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B05440 - dbl_B05468); /*0x683152*/
  result = Math::RoundToInt(v0 * dbl_B05460 * 0.5); /*0x683166*/
  dword_B054C8 = result; /*0x68316b*/
  return result; /*0x683170*/
}
} // namespace gamemd

// 0x683180
namespace gamemd {
void sub_683180()
{
  dbl_B05470 = Math::ArcTan((double)dword_B054C8 * 0.00390625); /*0x683197*/
}
} // namespace gamemd

// 0x6831B0
namespace gamemd {
void sub_6831B0()
{
  dbl_B05498 = Math::ArcTan((double)(2 * dword_B054C8) / dbl_B05460); /*0x6831d2*/
}
} // namespace gamemd

// 0x6831E0
namespace gamemd {
long long sub_6831E0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B054C8) + 0.5); /*0x6831fb*/
  dword_B054BC = result; /*0x683200*/
  return result; /*0x683206*/
}
} // namespace gamemd

// 0x683210
namespace gamemd {
int sub_683210()
{
  dword_B05458 = 0; /*0x683212*/
  return 0; /*0x68321e*/
}
} // namespace gamemd

// 0x683220
namespace gamemd {
int sub_683220()
{
  dword_B05488 = 0; /*0x683222*/
  dword_B0548C = 0; /*0x683227*/
  dword_B05490 = 0; /*0x68322c*/
  return 0; /*0x683231*/
}
} // namespace gamemd

// 0x683240
namespace gamemd {
int sub_683240()
{
  dword_B054B8 = 0; /*0x683245*/
  dword_B054B0 = 128; /*0x68324f*/
  dword_B054B4 = 128; /*0x683254*/
  return 128; /*0x683259*/
}
} // namespace gamemd

// 0x683260
namespace gamemd {
int sub_683260()
{
  dword_B05448 = 0; /*0x683262*/
  dword_B0544C = 0; /*0x683267*/
  dword_B05450 = 0; /*0x68326c*/
  dword_B05454 = 0; /*0x683271*/
  return 0; /*0x683276*/
}
} // namespace gamemd

// 0x683280
namespace gamemd {
int sub_683280()
{
  dword_B05478 = TimerGetTicks(); /*0x68328f*/
  dword_B05480 = 0; /*0x683294*/
  return atexit(nullsub_226); /*0x6832a4*/
}
} // namespace gamemd

// 0x6832B0
namespace gamemd {
void nullsub_226()
{
  ; /*0x6832b0*/
}
} // namespace gamemd

// 0x6842F0
namespace gamemd {
char DisplayMode_Toggle(char a1)
{
  char result; // al

  if ( a1 ) /*0x6842f2*/
  {
    result = dword_A8EB84; /*0x6842f4*/
    if ( dword_886FB8 != dword_A8EB84 || dword_886FBC != dword_A8EB88 ) /*0x68430f*/
    {
      Debug::Log("Toggle display mode to %d x %d\n", dword_A8EB84, dword_A8EB88); /*0x684318*/
      return ChangeVideoMode(dword_A8EB84, dword_A8EB88); /*0x68432c*/
    }
  }
  else
  {
    result = dword_886FB8; /*0x684331*/
    if ( dword_886FB8 != dword_A8EB8C ) /*0x68433e*/
    {
      result = dword_A8EB90; /*0x684346*/
      if ( dword_886FBC != dword_A8EB90 ) /*0x68434d*/
      {
        Debug::Log(g_Str_Toggle_display_mode_back_to_sh); /*0x684354*/
        return ChangeVideoMode(dword_A8EB8C, dword_A8EB90); /*0x684368*/
      }
    }
  }
  return result; /*0x68436d*/
}
} // namespace gamemd

// 0x689790
namespace gamemd {
char E4Recv_689790::sub_689790(const char * a2, unsigned char * a3)
{
  int v3; // edi
  const char *i; // ebp

  v3 = 0; /*0x68979d*/
  for ( i = (char *)this->q850 + 5176); strcmp(a2, i); i += 41 ) /*0x68979f*/
  {
    if ( ++v3 >= 50 ) /*0x6897dd*/
      return 0; /*0x6897dd*/
  }
  if ( v3 < 0 ) /*0x6897ec*/
    return 0; /*0x6897e6*/
  *a3 = *(&this->u8_28 * v3 + v3 + 7344); /*0x689811*/
  return 1; /*0x6897df*/
}
} // namespace gamemd

// 0x689820
namespace gamemd {
int E4Recv_689820::sub_689820(const char * a2)
{
  int v2; // ebp
  const char *i; // edi

  v2 = 0; /*0x689828*/
  for ( i = &this->u8_1C88; strcmp(a2, i); i += 41 ) /*0x68982a*/
  {
    if ( ++v2 >= 50 ) /*0x689868*/
      return -1; /*0x689871*/
  }
  return v2; /*0x68986a*/
}
} // namespace gamemd

// 0x689960
namespace gamemd {
char E4Recv_689960::sub_689960(const char * a2, char a3)
{
  TriggerActionQueue *v3; // edi
  const char *i; // ebp
  char v6; // bl

  v3 = 0; /*0x689964*/
  for ( i = (char *)this->q2128 + 866); strcmp(a2, i); i += 41 ) /*0x689966*/
  {
    if ( (int)++v3 >= 100 ) /*0x6899a6*/
      return 1; /*0x6899a6*/
  }
  if ( v3 == (TriggerActionQueue *)-1 ) /*0x6899b4*/
    return 1; /*0x6899ae*/
  if ( (unsigned int)v3 >= 0x64 ) /*0x6899b9*/
    return 0; /*0x6899f3*/
  v6 = (char)v3[40 * (unsigned int)v3 + 9394 + (unsigned int)this]; /*0x6899c1*/
  if ( v6 != a3 ) /*0x6899d5*/
  {
    v3[40 * (unsigned int)v3 + 9394 + (unsigned int)this] = (TriggerActionQueue)a3; /*0x6899d7*/
    this->M13482 = 1; /*0x6899d9*/
    TriggerActionQueue::ProcessAll(v3); /*0x6899e2*/
  }
  return v6; /*0x6899a8*/
}
} // namespace gamemd

// 0x689A30
namespace gamemd {
char E4Recv_689A30::sub_689A30(const char * a2, unsigned char * a3)
{
  int v3; // edi
  const char *i; // ebp

  v3 = 0; /*0x689a3d*/
  for ( i = (char *)this->q2128 + 866); strcmp(a2, i); i += 41 ) /*0x689a3f*/
  {
    if ( ++v3 >= 100 ) /*0x689a7d*/
      return 0; /*0x689a7d*/
  }
  if ( v3 < 0 ) /*0x689a8c*/
    return 0; /*0x689a86*/
  *a3 = *(&this->u8_28 * v3 + v3 + 9394); /*0x689ab1*/
  return 1; /*0x689a7f*/
}
} // namespace gamemd

// 0x689AC0
namespace gamemd {
int E4Recv_689AC0::sub_689AC0(const char * a2)
{
  int v2; // ebp
  const char *i; // edi

  v2 = 0; /*0x689ac8*/
  for ( i = &this->u8_248A; strcmp(a2, i); i += 41 ) /*0x689aca*/
  {
    if ( ++v2 >= 100 ) /*0x689b08*/
      return -1; /*0x689b11*/
  }
  return v2; /*0x689b0a*/
}
} // namespace gamemd

// 0x68B8A0
namespace gamemd {
long long E4Recv_68B8A0::sub_68B8A0()
{
  ObjectClass *v1; // eax
  DWORD v2; // eax
  unsigned int v3; // ecx
  int v4; // eax
  int64_t result; // rax
  int v6; // kr00_4
  char v7; // [esp+3h] [ebp-15h] BYREF
  ObjectClass *v8; // [esp+4h] [ebp-14h]
  int v9; // [esp+8h] [ebp-10h]
  int v10; // [esp+Ch] [ebp-Ch] BYREF
  int64_t v11; // [esp+10h] [ebp-8h] BYREF

  v8 = this; /*0x68b8a3*/
  v9 = 0; /*0x68b8b3*/
  GetVersionString(&v10, &v7, 0, 0); /*0x68b8bb*/
  if ( v10 > 5 ) /*0x68b8c5*/
  {
    (*((unsigned short *)&(v1))) = Math::RoundToInt((double)(int)v8 * 0.8); /*0x68b8d1*/
    v8 = v1; /*0x68b8d6*/
  }
  v2 = sub_5CAF70((ObjectClass *)&v11); /*0x68b8de*/
  v3 = v11; /*0x68b8e3*/
  if ( v2 || (unsigned int)v11 ) /*0x68b8ed*/
  {
    v11 = v2; /*0x68b8ff*/
    (*((unsigned short *)&(v4))) = Math::RoundToInt(((double)v3 * 4294967296.0 + (double)v2) * 0.000001); /*0x68b91d*/
    v9 = v4; /*0x68b922*/
  }
  v6 = Math::RoundToInt((double)(int)v8 * 200.0 / (double)v9); /*0x68b934*/
  (((unsigned short *)&(result))[2]) = (*(((unsigned short *)&(v6)) + 1)); /*0x68b934*/
  (*((unsigned short *)&(result))) = v6; /*0x68b934*/
  return result; /*0x68b939*/
}
} // namespace gamemd

// 0x68C330
namespace gamemd {
int sub_68C330()
{
  dword_B054D4 = 0; /*0x68c337*/
  dword_B054D8 = 0; /*0x68c33c*/
  byte_B054DC = 1; /*0x68c341*/
  byte_B054DD = 0; /*0x68c348*/
  stru_B054D0 = (int)&vt_DynamicVectorClass; /*0x68c34d*/
  dword_B054E4 = 10; /*0x68c357*/
  dword_B054E0 = 0; /*0x68c361*/
  return atexit(sub_68C370); /*0x68c36c*/
}
} // namespace gamemd

// 0x68C370
namespace gamemd {
void sub_68C370()
{
  stru_B054D0 = (int)&vt_VectorClass; /*0x68c378*/
  if ( dword_B054D4 && byte_B054DD ) /*0x68c38c*/
  {
    operator delete((void *)(dword_B054D4)); /*0x68c38f*/
    dword_B054D4 = 0; /*0x68c397*/
  }
  byte_B054DD = 0; /*0x68c39d*/
  dword_B054D8 = 0; /*0x68c3a3*/
}
} // namespace gamemd

// 0x68CA50
namespace gamemd {
int FindBuildingAnimByName(AbstractClass * aP0, int a2)
{
  int v2; // esi
  unsigned int *v5; // eax
  bool v6; // zf

  v2 = 0; /*0x68ca57*/
  if ( dword_B054E0 <= 0 ) /*0x68ca60*/
    return 0; /*0x68ca60*/
  v5 = dword_B054D4; /*0x68ca62*/
  while ( 1 ) /*0x68ca7a*/
  {
    v6 = _strcmpi(aP0, *(const void **)(v5[v2] + 772)) == 0; /*0x68ca7a*/
    v5 = dword_B054D4; /*0x68ca7c*/
    if ( v6 && *(unsigned int *)(*((unsigned int *)dword_B054D4 + v2) + 784) == a2 ) /*0x68ca8c*/
      break; /*0x68ca8c*/
    if ( ++v2 >= dword_B054E0 ) /*0x68ca97*/
      return 0; /*0x68ca97*/
  }
  if ( v2 < 0 ) /*0x68caa1*/
    return 0; /*0x68ca99*/
  else
    return *((unsigned int *)dword_B054D4 + v2); /*0x68caa3*/
}
} // namespace gamemd

// 0x68CB10
namespace gamemd {
int sub_68CB10()
{
  dword_B054F8 = 0; /*0x68cb12*/
  dword_B054FC = 0; /*0x68cb17*/
  dword_B05500 = 0; /*0x68cb1c*/
  dword_B05504 = 0; /*0x68cb21*/
  return 0; /*0x68cb26*/
}
} // namespace gamemd

// 0x68CB30
namespace gamemd {
void sub_68CB30()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x68cb3c*/
  dbl_B05510 = Math::Sqrt(v0 + v0); /*0x68cb4e*/
}
} // namespace gamemd

// 0x68CB60
namespace gamemd {
void sub_68CB60()
{
  dbl_B05578 = dbl_B05510 / 60.0; /*0x68cb6c*/
}
} // namespace gamemd

// 0x68CB80
namespace gamemd {
void sub_68CB80()
{
  dbl_B05558 = 1.0 / dbl_B05578; /*0x68cb8c*/
}
} // namespace gamemd

// 0x68CBA0
namespace gamemd {
void sub_68CBA0()
{
  dbl_B05550 = 0.0174532925199433 * 45.0; /*0x68cbac*/
}
} // namespace gamemd

// 0x68CBC0
namespace gamemd {
void sub_68CBC0()
{
  dbl_B05518 = 0.0174532925199433 * 60.0; /*0x68cbcc*/
}
} // namespace gamemd

// 0x68CBE0
namespace gamemd {
void sub_68CBE0()
{
  dbl_B054E8 = 0.0174532925199433 * 90.0; /*0x68cbec*/
}
} // namespace gamemd

// 0x68CC00
namespace gamemd {
long long sub_68CC00()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B054E8 - dbl_B05518); /*0x68cc12*/
  result = Math::RoundToInt(v0 * dbl_B05510 * 0.5); /*0x68cc26*/
  dword_B05580 = result; /*0x68cc2b*/
  return result; /*0x68cc30*/
}
} // namespace gamemd

// 0x68CC40
namespace gamemd {
void sub_68CC40()
{
  dbl_B05520 = Math::ArcTan((double)dword_B05580 * 0.00390625); /*0x68cc57*/
}
} // namespace gamemd

// 0x68CC70
namespace gamemd {
void sub_68CC70()
{
  dbl_B05548 = Math::ArcTan((double)(2 * dword_B05580) / dbl_B05510); /*0x68cc92*/
}
} // namespace gamemd

// 0x68CCA0
namespace gamemd {
long long sub_68CCA0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B05580) + 0.5); /*0x68ccbb*/
  dword_B05574 = result; /*0x68ccc0*/
  return result; /*0x68ccc6*/
}
} // namespace gamemd

// 0x68CCD0
namespace gamemd {
int sub_68CCD0()
{
  word_B05508 = 0; /*0x68ccd2*/
  word_B0550A = 0; /*0x68ccd8*/
  return 0; /*0x68ccde*/
}
} // namespace gamemd

// 0x68CCE0
namespace gamemd {
int sub_68CCE0()
{
  dword_B05538 = 0; /*0x68cce2*/
  dword_B0553C = 0; /*0x68cce7*/
  dword_B05540 = 0; /*0x68ccec*/
  return 0; /*0x68ccf1*/
}
} // namespace gamemd

// 0x68CD00
namespace gamemd {
int sub_68CD00()
{
  dword_B05570 = 0; /*0x68cd05*/
  dword_B05568 = 128; /*0x68cd0f*/
  dword_B0556C = 128; /*0x68cd14*/
  return 128; /*0x68cd19*/
}
} // namespace gamemd

// 0x68F8A0
namespace gamemd {
int E4Recv_68F8A0::sub_68F8A0()
{

  int v2; // eax
  unsigned int v3; // kr04_4
  int v4; // esi
  void *vtable3; // ebx
  char *v6; // eax
  int occupant; // ecx
  int *p_referenceCount; // edi
  ObjectClass *nextObject; // eax
  int fallRate; // eax
  unsigned int *NeedsSaveOrLink; // edx
  int v12; // eax
  int result; // eax
  int v14; // edx
  int v15; // [esp+10h] [ebp-18h] BYREF
  char Buffer[20]; // [esp+14h] [ebp-14h] BYREF

  v2 = (*(int (**)(char *))(*&dword_A83D4C->vtable5 + 24))(&dword_A83D4C->vtable5); /*0x68f8b3*/
  sprintf(Buffer, "%d", v2); /*0x68f8c1*/
  v3 = strlen(Buffer) + 1; /*0x68f8d1*/
  v4 = __2_YAPAXI_Z(0x2Cu); /*0x68f8e8*/
  if ( v4 ) /*0x68f8ef*/
  {
    vtable3 = this->M12; /*0x68f8f8*/
    v6 = (char *)this->M4 + 214; /*0x68f8fd*/
    *(unsigned int *)(v4 + 4) = (char *)this->AbstractClass + 590 - 12 * (v3 - 1); /*0x68f902*/
    *(unsigned int *)(v4 + 8) = v6; /*0x68f908*/
    *(unsigned int *)(v4 + 12) = Timer::GetTicks(); /*0x68f910*/
    *(unsigned int *)(v4 + 20) = 0; /*0x68f915*/
    *(unsigned int *)(v4 + 40) = vtable3; /*0x68f91c*/
    *(unsigned int *)(v4 + 24) = Buffer; /*0x68f91f*/
    *(unsigned int *)(v4 + 28) = 0; /*0x68f922*/
    *(unsigned int *)(v4 + 32) = 0; /*0x68f925*/
    *(unsigned char *)(v4 + 36) = 0; /*0x68f928*/
    *(unsigned int *)v4 = &ScorePrintClass::`vftable'; /*0x68f92b*/
  }
  else
  {
    v4 = 0; /*0x68f934*/
  }
  occupant = this->occupant; /*0x68f936*/
  p_referenceCount = &this->?; /*0x68f93c*/
  if ( this->fallRate < occupant /*0x68f95e*/
    || (BYTE1(this->owningHouseIndex) || !occupant)
    && (nextObject = this->nextObject, (int)nextObject > 0)
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(*p_referenceCount + 8))(
         &this->?,
         (int)nextObject + occupant,
         0) )
  {
    fallRate = this->fallRate; /*0x68f965*/
    NeedsSaveOrLink = this->?; /*0x68f968*/
    this->fallRate = fallRate + 1; /*0x68f96e*/
    NeedsSaveOrLink[fallRate] = v4; /*0x68f971*/
  }
  v12 = *p_referenceCount; /*0x68f974*/
  v15 = v4; /*0x68f97d*/
  for ( result = (*(int (**)(int *, int *))(v12 + 16))(&this->?, &v15); /*0x68f987*/
        result != -1;
        result = (*(int (**)(int *, int *))(v14 + 16))(&this->?, &v15) )
  {
    Screen::TransitionLoop((Screen *)this, 1); /*0x68f98d*/
    v14 = *p_referenceCount; /*0x68f992*/
    v15 = v4; /*0x68f99b*/
  }
  return result; /*0x68f9a7*/

}
} // namespace gamemd

// 0x68FB10
namespace gamemd {
unsigned int * E4Recv_68FB10::sub_68FB10(unsigned int * a2, int a3, size_t BufferCount, wchar_t * Format, wchar_t * a6, int a7, int a8)
{

  const wchar_t *v8; // eax
  unsigned int *vtable3; // ecx
  int v11; // esi
  unsigned int *v12; // ecx
  int v13; // edi
  int v14; // eax
  wchar_t Buffer[64]; // [esp+14h] [ebp-80h] BYREF

  v8 = Format; /*0x68fb16*/
  if ( (int)Format >= (int)a6 ) /*0x68fb2b*/
    v8 = a6; /*0x68fb2d*/
  swprintf(Buffer, BufferCount, v8); /*0x68fb3d*/
  vtable3 = this->M12; /*0x68fb42*/
  v11 = a8 - vtable3[2]; /*0x68fb5d*/
  (*(void (**)(unsigned int *, int, wchar_t *, int, int, int))(*vtable3 + 12))(vtable3, a3, Buffer, a7, v11, 2); /*0x68fb6e*/
  v12 = this->M12; /*0x68fb71*/
  v13 = v12[2]; /*0x68fb7b*/
  v14 = (*(int (**)(unsigned int *, wchar_t *))(*v12 + 8))(v12, Buffer); /*0x68fb7e*/
  *a2 = a7; /*0x68fb8a*/
  a2[1] = v11; /*0x68fb8c*/
  a2[2] = v14; /*0x68fb8f*/
  a2[3] = v13; /*0x68fb94*/
  return a2; /*0x68fb97*/

}
} // namespace gamemd