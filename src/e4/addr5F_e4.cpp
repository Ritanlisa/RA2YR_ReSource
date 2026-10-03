// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5F15C0_e4.hpp"
#include "e4/classes/E4Recv_5F1F20_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/E4Recv_5D4F20_e4.hpp"
#include "e4/classes/E4Recv_5D2650_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/DropListClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Map_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/MessageListClass_e4.hpp"
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/Surface_e4.hpp"
#include "e4/classes/Stream_e4.hpp"

// 0x5F0070
namespace gamemd {
char sub_5F0070()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F0070.json)
}
}
// 0x5F0180
namespace gamemd {
char HandlePlayerDisconnection(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F0180.json)
}
}
// 0x5F2CE0
namespace gamemd {
AbstractClass * * WaitModemConnection(void * a1, void * a2, void * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5F2CE0)
}
}
// 0x5F33B0
namespace gamemd {
void* sub_5F33B0()
{
  uint16_t v0; // ax
  int v1; // esi

    ((Event *)0)->Dispatch();
  MessageLoop(); /*0x5f33b6*/
  v0 = (uint16_t)(((EventQueue *)(dword_87F770))->Process()); /*0x5f33c1*/
  v1 = v0; /*0x5f33c9*/
  if ( !v0 )
    return (void *)(g_NetworkTestFlag != 0 ? 0xFFFFFC18 : 0);
  ((Timer*)((HWND *)dword_87F770))->PumpMessages(); /*0x5f33d7*/
  if ( v1 != 27 )
    return (void *)(g_NetworkTestFlag != 0 ? 0xFFFFFC18 : 0);
  g_NetworkTestFlag = (int)((void *)(1));
  return (void *)(-1000);
}
}
// 0x5F66A0
namespace gamemd {
unsigned int * sub_5F66A0(unsigned int * a1, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  unsigned int *v8; // ebp
  int *v9; // ebp
  int v10; // edx
  int v11; // edi
  bool v12; // zf
  unsigned int *v14; // [esp+10h] [ebp-28h]
  int v15; // [esp+14h] [ebp-24h]

  v2 = *(unsigned int *)(a2 + 16); /*0x5f66a7*/
  v3 = 0; /*0x5f66ae*/
  v4 = 0; /*0x5f66b0*/
  v5 = 0; /*0x5f66b2*/
  v6 = 0; /*0x5f66b4*/
  if ( v2 > 0 ) /*0x5f66bc*/
  {
    v7 = *(unsigned int *)(a2 + 4); /*0x5f66c2*/
    v3 = *(unsigned int *)(*(unsigned int *)v7 + 156); /*0x5f66d0*/
    v4 = *(unsigned int *)(*(unsigned int *)v7 + 160); /*0x5f66d9*/
    if ( v2 - 1 < 0 ) /*0x5f66f5*/
    {
      v5 = 0; /*0x5f6762*/
    }
    else
    {
      v5 = 0; /*0x5f66f7*/
      v8 = (unsigned int *)(v7 + 4 * (v2 - 1)); /*0x5f66fb*/
      v14 = v8; /*0x5f6700*/
      v15 = *(unsigned int *)(a2 + 16); /*0x5f6704*/
      do /*0x5f675e*/
      {
        v9 = (int *)(*v8 + 156); /*0x5f6711*/
        v10 = *v9; /*0x5f6713*/
        v11 = v9[1]; /*0x5f6718*/
        if ( *v9 < v3 ) /*0x5f6722*/
        {
          v5 += v3 - v10; /*0x5f6726*/
          v3 = *v9; /*0x5f6728*/
        }
        if ( v11 < v4 ) /*0x5f672c*/
        {
          v6 += v4 - v11; /*0x5f6730*/
          v4 = v9[1]; /*0x5f6732*/
        }
        if ( v10 > v5 + v3 ) /*0x5f6739*/
          v5 = v10 - v3; /*0x5f673d*/
        if ( v11 > v6 + v4 ) /*0x5f6744*/
          v6 = v11 - v4; /*0x5f6748*/
        v8 = v14 - 1; /*0x5f6752*/
        v12 = v15 == 1; /*0x5f6755*/
        --v14; /*0x5f6756*/
        --v15; /*0x5f675a*/
      }
      while ( !v12 ); /*0x5f675e*/
    }
  }
  *a1 = v3; /*0x5f676c*/
  a1[1] = v4; /*0x5f676e*/
  a1[2] = v5; /*0x5f6771*/
  a1[3] = v6; /*0x5f6774*/
  return a1; /*0x5f6777*/
}
}
// 0x5FBEF0
namespace gamemd {
char sub_5FBEF0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FBEF0.json)
}
}
// 0x5FDD20
namespace gamemd {
int FindBuildingByTiberiumType(int aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FDD20.json)
}
}
// 0x5FDDF0
namespace gamemd {
AbstractClass * * sub_5FDDF0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5FDDF0)
}
}
// 0x5FE620
namespace gamemd {
int BuildingTypeClass_LoadSHPs(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FE620.json)
}
}
// 0x5FF390
namespace gamemd {
void sub_5FF390()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FF390.json)
}
}
// 0x5FF420
namespace gamemd {
AbstractClass * * GenerateRangeRingTextures()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5FF420)
}
}
// 0x5F1350
namespace gamemd {
int StringBuilder_AppendChar(char a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F1350.json)
}
} // namespace gamemd

// 0x5F13B0
namespace gamemd {
int sub_5F13B0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F13B0.json)
}
} // namespace gamemd

// 0x5F13D0
namespace gamemd {
void sub_5F13D0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F13D0.json)
}
} // namespace gamemd

// 0x5F1400
namespace gamemd {
void sub_5F1400()
{
  dbl_AC1338 = dbl_AC12E0 / 60.0; /*0x5f140c*/
}
} // namespace gamemd

// 0x5F1420
namespace gamemd {
void sub_5F1420()
{
  dbl_AC1320 = 1.0 / dbl_AC1338; /*0x5f142c*/
}
} // namespace gamemd

// 0x5F1440
namespace gamemd {
void sub_5F1440()
{
  dbl_AC1318 = 0.0174532925199433 * 45.0; /*0x5f144c*/
}
} // namespace gamemd

// 0x5F1460
namespace gamemd {
void sub_5F1460()
{
  dbl_AC12F0 = 0.0174532925199433 * 60.0; /*0x5f146c*/
}
} // namespace gamemd

// 0x5F1480
namespace gamemd {
void sub_5F1480()
{
  dbl_AC1270 = 0.0174532925199433 * 90.0; /*0x5f148c*/
}
} // namespace gamemd

// 0x5F14A0
namespace gamemd {
long long sub_5F14A0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC1270 - dbl_AC12F0); /*0x5f14b2*/
  result = Math::RoundToInt(v0 * dbl_AC12E0 * 0.5); /*0x5f14c6*/
  dword_AC1340 = result; /*0x5f14cb*/
  return result; /*0x5f14d0*/
}
} // namespace gamemd

// 0x5F14E0
namespace gamemd {
void sub_5F14E0()
{
  dbl_AC12F8 = Math::ArcTan((double)dword_AC1340 * 0.00390625); /*0x5f14f7*/
}
} // namespace gamemd

// 0x5F1510
namespace gamemd {
void sub_5F1510()
{
  dbl_AC1310 = Math::ArcTan((double)(2 * dword_AC1340) / dbl_AC12E0); /*0x5f1532*/
}
} // namespace gamemd

// 0x5F1540
namespace gamemd {
long long sub_5F1540()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1340) + 0.5); /*0x5f155b*/
  dword_AC1334 = result; /*0x5f1560*/
  return result; /*0x5f1566*/
}
} // namespace gamemd

// 0x5F1570
namespace gamemd {
int sub_5F1570()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F1570.json)
}
} // namespace gamemd

// 0x5F1580
namespace gamemd {
int sub_5F1580()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F1580.json)
}
} // namespace gamemd

// 0x5F15A0
namespace gamemd {
int sub_5F15A0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F15A0.json)
}
} // namespace gamemd

// 0x5F15C0
namespace gamemd {
unsigned int * sub_5F15C0(int a2, int a3, int a4, short a5)
{
    (void)a2; (void)a3; (void)a4; (void)a5; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F15C0.json)
}
} // namespace gamemd

// 0x5F1F20
namespace gamemd {
int sub_5F1F20()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F1F20.json)
}
} // namespace gamemd

// 0x5F3340
namespace gamemd {
void ObjectClass::nullsub_28()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F3340.json)
}
} // namespace gamemd

// 0x5F34D0
namespace gamemd {
int sub_5F34D0(char * String)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F34D0.json)
}
} // namespace gamemd

// 0x5F36F0
namespace gamemd {
void sub_5F36F0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F36F0.json)
}
} // namespace gamemd

// 0x5F3720
namespace gamemd {
void sub_5F3720()
{
  dbl_AC13C0 = dbl_AC1368 / 60.0; /*0x5f372c*/
}
} // namespace gamemd

// 0x5F3740
namespace gamemd {
void sub_5F3740()
{
  dbl_AC13A8 = 1.0 / dbl_AC13C0; /*0x5f374c*/
}
} // namespace gamemd

// 0x5F3760
namespace gamemd {
void sub_5F3760()
{
  dbl_AC13A0 = 0.0174532925199433 * 45.0; /*0x5f376c*/
}
} // namespace gamemd

// 0x5F3780
namespace gamemd {
void sub_5F3780()
{
  dbl_AC1370 = 0.0174532925199433 * 60.0; /*0x5f378c*/
}
} // namespace gamemd

// 0x5F37A0
namespace gamemd {
void sub_5F37A0()
{
  dbl_AC1348 = 0.0174532925199433 * 90.0; /*0x5f37ac*/
}
} // namespace gamemd

// 0x5F37C0
namespace gamemd {
long long sub_5F37C0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC1348 - dbl_AC1370); /*0x5f37d2*/
  result = Math::RoundToInt(v0 * dbl_AC1368 * 0.5); /*0x5f37e6*/
  dword_AC13C8 = result; /*0x5f37eb*/
  return result; /*0x5f37f0*/
}
} // namespace gamemd

// 0x5F3800
namespace gamemd {
void sub_5F3800()
{
  dbl_AC1378 = Math::ArcTan((double)dword_AC13C8 * 0.00390625); /*0x5f3817*/
}
} // namespace gamemd

// 0x5F3830
namespace gamemd {
void sub_5F3830()
{
  dbl_AC1390 = Math::ArcTan((double)(2 * dword_AC13C8) / dbl_AC1368); /*0x5f3852*/
}
} // namespace gamemd

// 0x5F3860
namespace gamemd {
long long sub_5F3860()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC13C8) + 0.5); /*0x5f387b*/
  dword_AC13BC = result; /*0x5f3880*/
  return result; /*0x5f3886*/
}
} // namespace gamemd

// 0x5F3890
namespace gamemd {
int sub_5F3890()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F3890.json)
}
} // namespace gamemd

// 0x5F38A0
namespace gamemd {
int sub_5F38A0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F38A0.json)
}
} // namespace gamemd

// 0x5F38C0
namespace gamemd {
int sub_5F38C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F38C0.json)
}
} // namespace gamemd

// 0x5F38E0
namespace gamemd {
int sub_5F38E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F38E0.json)
}
} // namespace gamemd

// 0x5F5C10
namespace gamemd {
void nullsub_205()
{
  ; /*0x5f5c10*/
}
} // namespace gamemd

// 0x5F6DE0
namespace gamemd {
void sub_5F6DE0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F6DE0.json)
}
} // namespace gamemd

// 0x5F6E10
namespace gamemd {
void sub_5F6E10()
{
  dbl_AC1468 = dbl_AC13F0 / 60.0; /*0x5f6e1c*/
}
} // namespace gamemd

// 0x5F6E30
namespace gamemd {
void sub_5F6E30()
{
  dbl_AC1448 = 1.0 / dbl_AC1468; /*0x5f6e3c*/
}
} // namespace gamemd

// 0x5F6E50
namespace gamemd {
void sub_5F6E50()
{
  dbl_AC1440 = 0.0174532925199433 * 45.0; /*0x5f6e5c*/
}
} // namespace gamemd

// 0x5F6E70
namespace gamemd {
void sub_5F6E70()
{
  dbl_AC13F8 = 0.0174532925199433 * 60.0; /*0x5f6e7c*/
}
} // namespace gamemd

// 0x5F6E90
namespace gamemd {
void sub_5F6E90()
{
  dbl_AC13D0 = 0.0174532925199433 * 90.0; /*0x5f6e9c*/
}
} // namespace gamemd

// 0x5F6EB0
namespace gamemd {
long long sub_5F6EB0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC13D0 - dbl_AC13F8); /*0x5f6ec2*/
  result = Math::RoundToInt(v0 * dbl_AC13F0 * 0.5); /*0x5f6ed6*/
  dword_AC1474 = result; /*0x5f6edb*/
  return result; /*0x5f6ee0*/
}
} // namespace gamemd

// 0x5F6EF0
namespace gamemd {
void sub_5F6EF0()
{
  dbl_AC1400 = Math::ArcTan((double)dword_AC1474 * 0.00390625); /*0x5f6f07*/
}
} // namespace gamemd

// 0x5F6F20
namespace gamemd {
void sub_5F6F20()
{
  dbl_AC1430 = Math::ArcTan((double)(2 * dword_AC1474) / dbl_AC13F0); /*0x5f6f42*/
}
} // namespace gamemd

// 0x5F6F50
namespace gamemd {
long long sub_5F6F50()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1474) + 0.5); /*0x5f6f6b*/
  dword_AC1460 = result; /*0x5f6f70*/
  return result; /*0x5f6f76*/
}
} // namespace gamemd

// 0x5F6F80
namespace gamemd {
int sub_5F6F80()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F6F80.json)
}
} // namespace gamemd

// 0x5F6F90
namespace gamemd {
int sub_5F6F90()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F6F90.json)
}
} // namespace gamemd

// 0x5F6FB0
namespace gamemd {
int sub_5F6FB0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F6FB0.json)
}
} // namespace gamemd

// 0x5F6FD0
namespace gamemd {
int sub_5F6FD0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F6FD0.json)
}
} // namespace gamemd

// 0x5F6FF0
namespace gamemd {
int sub_5F6FF0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F6FF0.json)
}
} // namespace gamemd

// 0x5F7030
namespace gamemd {
void sub_5F7030()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F7030.json)
}
} // namespace gamemd

// 0x5F76A0
namespace gamemd {
void nullsub_207()
{
  ; /*0x5f76a0*/
}
} // namespace gamemd

// 0x5F96B0
namespace gamemd {
int TheaterObjectTypeClassSpecificID(char *a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F96B0.json)
}
} // namespace gamemd

// 0x5FA0D0
namespace gamemd {
void sub_5FA0D0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FA0D0.json)
}
} // namespace gamemd

// 0x5FA100
namespace gamemd {
void sub_5FA100()
{
  dbl_AC1500 = dbl_AC14B0 / 60.0; /*0x5fa10c*/
}
} // namespace gamemd

// 0x5FA120
namespace gamemd {
void sub_5FA120()
{
  dbl_AC14E8 = 1.0 / dbl_AC1500; /*0x5fa12c*/
}
} // namespace gamemd

// 0x5FA140
namespace gamemd {
void sub_5FA140()
{
  dbl_AC14E0 = 0.0174532925199433 * 45.0; /*0x5fa14c*/
}
} // namespace gamemd

// 0x5FA160
namespace gamemd {
void sub_5FA160()
{
  dbl_AC14B8 = 0.0174532925199433 * 60.0; /*0x5fa16c*/
}
} // namespace gamemd

// 0x5FA180
namespace gamemd {
void sub_5FA180()
{
  dbl_AC1490 = 0.0174532925199433 * 90.0; /*0x5fa18c*/
}
} // namespace gamemd

// 0x5FA1A0
namespace gamemd {
long long sub_5FA1A0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC1490 - dbl_AC14B8); /*0x5fa1b2*/
  result = Math::RoundToInt(v0 * dbl_AC14B0 * 0.5); /*0x5fa1c6*/
  dword_AC1508 = result; /*0x5fa1cb*/
  return result; /*0x5fa1d0*/
}
} // namespace gamemd

// 0x5FA1E0
namespace gamemd {
void sub_5FA1E0()
{
  dbl_AC14C0 = Math::ArcTan((double)dword_AC1508 * 0.00390625); /*0x5fa1f7*/
}
} // namespace gamemd

// 0x5FA210
namespace gamemd {
void sub_5FA210()
{
  dbl_AC14D8 = Math::ArcTan((double)(2 * dword_AC1508) / dbl_AC14B0); /*0x5fa232*/
}
} // namespace gamemd

// 0x5FA240
namespace gamemd {
long long sub_5FA240()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1508) + 0.5); /*0x5fa25b*/
  dword_AC14FC = result; /*0x5fa260*/
  return result; /*0x5fa266*/
}
} // namespace gamemd

// 0x5FA270
namespace gamemd {
int sub_5FA270()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FA270.json)
}
} // namespace gamemd

// 0x5FA280
namespace gamemd {
int sub_5FA280()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FA280.json)
}
} // namespace gamemd

// 0x5FA2A0
namespace gamemd {
int sub_5FA2A0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FA2A0.json)
}
} // namespace gamemd

// 0x5FA2C0
namespace gamemd {
int sub_5FA2C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FA2C0.json)
}
} // namespace gamemd

// 0x5FA430
namespace gamemd {
void ObjectClass::nullsub_29()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5FA430)
}
} // namespace gamemd

// 0x5FC170
namespace gamemd {
void sub_5FC170()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FC170.json)
}
} // namespace gamemd

// 0x5FC1A0
namespace gamemd {
void sub_5FC1A0()
{
  dbl_AC15D8 = dbl_AC1530 / 60.0; /*0x5fc1ac*/
}
} // namespace gamemd

// 0x5FC1C0
namespace gamemd {
void sub_5FC1C0()
{
  dbl_AC15C0 = 1.0 / dbl_AC15D8; /*0x5fc1cc*/
}
} // namespace gamemd

// 0x5FC1E0
namespace gamemd {
void sub_5FC1E0()
{
  dbl_AC15B8 = 0.0174532925199433 * 45.0; /*0x5fc1ec*/
}
} // namespace gamemd

// 0x5FC200
namespace gamemd {
void sub_5FC200()
{
  dbl_AC1538 = 0.0174532925199433 * 60.0; /*0x5fc20c*/
}
} // namespace gamemd

// 0x5FC220
namespace gamemd {
void sub_5FC220()
{
  dbl_AC1510 = 0.0174532925199433 * 90.0; /*0x5fc22c*/
}
} // namespace gamemd

// 0x5FC240
namespace gamemd {
long long sub_5FC240()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC1510 - dbl_AC1538); /*0x5fc252*/
  result = Math::RoundToInt(v0 * dbl_AC1530 * 0.5); /*0x5fc266*/
  dword_AC15E0 = result; /*0x5fc26b*/
  return result; /*0x5fc270*/
}
} // namespace gamemd

// 0x5FC280
namespace gamemd {
void sub_5FC280()
{
  dbl_AC1540 = Math::ArcTan((double)dword_AC15E0 * 0.00390625); /*0x5fc297*/
}
} // namespace gamemd

// 0x5FC2B0
namespace gamemd {
void sub_5FC2B0()
{
  dbl_AC1580 = Math::ArcTan((double)(2 * dword_AC15E0) / dbl_AC1530); /*0x5fc2d2*/
}
} // namespace gamemd

// 0x5FC2E0
namespace gamemd {
long long sub_5FC2E0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC15E0) + 0.5); /*0x5fc2fb*/
  dword_AC15D4 = result; /*0x5fc300*/
  return result; /*0x5fc306*/
}
} // namespace gamemd

// 0x5FC310
namespace gamemd {
int sub_5FC310()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FC310.json)
}
} // namespace gamemd

// 0x5FC320
namespace gamemd {
int sub_5FC320()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FC320.json)
}
} // namespace gamemd

// 0x5FC340
namespace gamemd {
int sub_5FC340()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FC340.json)
}
} // namespace gamemd

// 0x5FC360
namespace gamemd {
int sub_5FC360()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FC360.json)
}
} // namespace gamemd

// 0x5FD230
namespace gamemd {
void nullsub_208()
{
  ; /*0x5fd230*/
}
} // namespace gamemd

// 0x5FD240
namespace gamemd {
void nullsub_209()
{
  ; /*0x5fd240*/
}
} // namespace gamemd

// 0x5FD250
namespace gamemd {
void nullsub_210()
{
  ; /*0x5fd250*/
}
} // namespace gamemd

// 0x5FD260
namespace gamemd {
void nullsub_211()
{
  ; /*0x5fd260*/
}
} // namespace gamemd

// 0x5FDCC0
namespace gamemd {
unsigned int * globalHelper_0FDCC0(IUnknown * aP0, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5FDCC0)
}
} // namespace gamemd

// 0x5FDF60
namespace gamemd {
void nullsub_212(int a1, int a2)
{
  ; /*0x5fdf60*/
}
} // namespace gamemd

// 0x5FE040
namespace gamemd {
int sub_5FE040()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FE040.json)
}
} // namespace gamemd

// 0x5FE060
namespace gamemd {
void sub_5FE060()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FE060.json)
}
} // namespace gamemd

// 0x5FE090
namespace gamemd {
void sub_5FE090()
{
  dbl_AC1668 = dbl_AC1610 / 60.0; /*0x5fe09c*/
}
} // namespace gamemd

// 0x5FE0B0
namespace gamemd {
void sub_5FE0B0()
{
  dbl_AC1650 = 1.0 / dbl_AC1668; /*0x5fe0bc*/
}
} // namespace gamemd

// 0x5FE0D0
namespace gamemd {
void sub_5FE0D0()
{
  dbl_AC1648 = 0.0174532925199433 * 45.0; /*0x5fe0dc*/
}
} // namespace gamemd

// 0x5FE0F0
namespace gamemd {
void sub_5FE0F0()
{
  dbl_AC1618 = 0.0174532925199433 * 60.0; /*0x5fe0fc*/
}
} // namespace gamemd

// 0x5FE110
namespace gamemd {
void sub_5FE110()
{
  dbl_AC15F0 = 0.0174532925199433 * 90.0; /*0x5fe11c*/
}
} // namespace gamemd

// 0x5FE130
namespace gamemd {
long long sub_5FE130()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC15F0 - dbl_AC1618); /*0x5fe142*/
  result = Math::RoundToInt(v0 * dbl_AC1610 * 0.5); /*0x5fe156*/
  dword_AC1670 = result; /*0x5fe15b*/
  return result; /*0x5fe160*/
}
} // namespace gamemd

// 0x5FE170
namespace gamemd {
void sub_5FE170()
{
  dbl_AC1620 = Math::ArcTan((double)dword_AC1670 * 0.00390625); /*0x5fe187*/
}
} // namespace gamemd

// 0x5FE1A0
namespace gamemd {
void sub_5FE1A0()
{
  dbl_AC1638 = Math::ArcTan((double)(2 * dword_AC1670) / dbl_AC1610); /*0x5fe1c2*/
}
} // namespace gamemd

// 0x5FE1D0
namespace gamemd {
long long sub_5FE1D0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1670) + 0.5); /*0x5fe1eb*/
  dword_AC1664 = result; /*0x5fe1f0*/
  return result; /*0x5fe1f6*/
}
} // namespace gamemd

// 0x5FE200
namespace gamemd {
int sub_5FE200()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FE200.json)
}
} // namespace gamemd

// 0x5FE210
namespace gamemd {
int sub_5FE210()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FE210.json)
}
} // namespace gamemd

// 0x5FE230
namespace gamemd {
int sub_5FE230()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FE230.json)
}
} // namespace gamemd

// 0x5FE520
namespace gamemd {
void nullsub_213()
{
  ; /*0x5fe520*/
}
} // namespace gamemd

// 0x5FEFC0
namespace gamemd {
void sub_5FEFC0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FEFC0.json)
}
} // namespace gamemd

// 0x5FEFF0
namespace gamemd {
void sub_5FEFF0()
{
  dbl_AC1828 = dbl_AC17D8 / 60.0; /*0x5feffc*/
}
} // namespace gamemd

// 0x5FF010
namespace gamemd {
void sub_5FF010()
{
  dbl_AC1810 = 1.0 / dbl_AC1828; /*0x5ff01c*/
}
} // namespace gamemd

// 0x5FF030
namespace gamemd {
void sub_5FF030()
{
  dbl_AC1808 = 0.0174532925199433 * 45.0; /*0x5ff03c*/
}
} // namespace gamemd

// 0x5FF050
namespace gamemd {
void sub_5FF050()
{
  dbl_AC17E0 = 0.0174532925199433 * 60.0; /*0x5ff05c*/
}
} // namespace gamemd

// 0x5FF070
namespace gamemd {
void sub_5FF070()
{
  dbl_AC1690 = 0.0174532925199433 * 90.0; /*0x5ff07c*/
}
} // namespace gamemd

// 0x5FF090
namespace gamemd {
long long sub_5FF090()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC1690 - dbl_AC17E0); /*0x5ff0a2*/
  result = Math::RoundToInt(v0 * dbl_AC17D8 * 0.5); /*0x5ff0b6*/
  dword_AC1830 = result; /*0x5ff0bb*/
  return result; /*0x5ff0c0*/
}
} // namespace gamemd

// 0x5FF0D0
namespace gamemd {
void sub_5FF0D0()
{
  dbl_AC17E8 = Math::ArcTan((double)dword_AC1830 * 0.00390625); /*0x5ff0e7*/
}
} // namespace gamemd

// 0x5FF100
namespace gamemd {
void sub_5FF100()
{
  dbl_AC1800 = Math::ArcTan((double)(2 * dword_AC1830) / dbl_AC17D8); /*0x5ff122*/
}
} // namespace gamemd

// 0x5FF130
namespace gamemd {
long long sub_5FF130()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1830) + 0.5); /*0x5ff14b*/
  dword_AC1824 = result; /*0x5ff150*/
  return result; /*0x5ff156*/
}
} // namespace gamemd

// 0x5FF160
namespace gamemd {
int sub_5FF160()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FF160.json)
}
} // namespace gamemd

// 0x5FF170
namespace gamemd {
int sub_5FF170()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FF170.json)
}
} // namespace gamemd

// 0x5FF190
namespace gamemd {
int sub_5FF190()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FF190.json)
}
} // namespace gamemd

// 0x5FF1B0
namespace gamemd {
int sub_5FF1B0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FF1B0.json)
}
} // namespace gamemd

// 0x5FF1D0
namespace gamemd {
int sub_5FF1D0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FF1D0.json)
}
} // namespace gamemd

// 0x5FF210
namespace gamemd {
void sub_5FF210()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FF210.json)
}
} // namespace gamemd
