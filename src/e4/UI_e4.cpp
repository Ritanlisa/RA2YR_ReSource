// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/ShapeButton_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5B6EB0_e4.hpp"
#include "e4/classes/E4Recv_5CE4A0_e4.hpp"
#include "e4/classes/E4Recv_5D1C90_e4.hpp"
#include "e4/classes/E4Recv_60B350_e4.hpp"
#include "e4/classes/E4Recv_60B420_e4.hpp"
#include "e4/classes/E4Recv_60B550_e4.hpp"
#include "e4/classes/E4Recv_60B610_e4.hpp"
#include "e4/classes/E4Recv_60B7A0_e4.hpp"
#include "e4/classes/E4Recv_60C7D0_e4.hpp"
#include "e4/classes/E4Recv_60C930_e4.hpp"
#include "e4/classes/E4Recv_60CAF0_e4.hpp"
#include "e4/classes/E4Recv_60CCC0_e4.hpp"
#include "e4/classes/E4Recv_60CDB0_e4.hpp"
#include "e4/classes/E4Recv_630EA0_e4.hpp"
#include "e4/classes/E4Recv_631380_e4.hpp"
#include "e4/classes/E4Recv_631500_e4.hpp"
#include "e4/classes/E4Recv_631B20_e4.hpp"
#include "e4/classes/E4Recv_637D00_e4.hpp"
#include "e4/classes/E4Recv_642E00_e4.hpp"
#include "e4/classes/E4Recv_642E40_e4.hpp"
#include "e4/classes/E4Recv_643670_e4.hpp"
#include "e4/classes/E4Recv_660BB0_e4.hpp"
#include "e4/classes/E4Recv_660BE0_e4.hpp"
#include "e4/classes/E4Recv_6A4F20_e4.hpp"
#include "e4/classes/E4Recv_791AA0_e4.hpp"
#include "e4/classes/E4Recv_7B7980_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/UnitTypeVector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/Lobby_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/Text_e4.hpp"
#include "e4/classes/Char_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/Font_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Property_e4.hpp"
#include "e4/classes/SafeDelete_e4.hpp"
#include "e4/classes/TextGroup_e4.hpp"

// 0x52B6D0
namespace gamemd {
int sub_52B6D0(int a1, int a2, int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0052B6D0.json)
}
}
// 0x53E720
namespace gamemd {
int sub_53E720()
{
  return dword_AA0444; /*0x53e725*/
}
}
// 0x60AF50
namespace gamemd {
int UI_Get(HWND hWnd, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0060AF50.json)
}
}
// 0x622610
namespace gamemd {
int sub_622610()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00622610.json)
}
}
// 0x647040
namespace gamemd {
char sub_647040()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00647040.json)
}
}
// 0x6470F0
namespace gamemd {
char sub_6470F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006470F0.json)
}
}
// 0x725070
namespace gamemd {
int sub_725070(int a1, int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00725070.json)
}
}
// 0x6AC430
namespace gamemd {
int sub_6AC430()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006AC430.json)
}
}
// 0x730EA0
namespace gamemd {
wchar_t * * sub_730EA0()
{
  wchar_t * result;
  unsigned int v1;
  int v2; // edi
  char v3; // bl
  unsigned char *v4; // esi

  result = (wchar_t *)(dword_A8ECC8);
  if ( (int)dword_A8ECC8 > 0 ) /*0x730eab*/
  {
    v1 = dword_A8ECC8; /*0x730ead*/
    v2 = 0; /*0x730eaf*/
    v3 = 1; /*0x730eb3*/
    while ( 1 ) /*0x730eb7*/
    {
      result = (wchar_t *)dword_A8ECBC; /*0x730eb7*/
      v4 = (unsigned char *)*((unsigned int *)dword_A8ECBC + v2); /*0x730ebc*/
      if ( v4 ) /*0x730ec1*/
      {
        if ( (v4[20] & 1) != 0 ) /*0x730ec7*/
        {
          if ( (*(uint8_t (**)(unsigned int))(*(unsigned int *)v4 + 160))(*((unsigned int *)dword_A8ECBC + v2)) /*0x730ee3*/
            || (result = (wchar_t *)(*(int (**)(unsigned char *))(*(unsigned int *)v4 + 156))(v4), (unsigned char)result) )
          {
            result = (wchar_t *)(*(int (**)(unsigned char *, int))(*(unsigned int *)v4 + 884))(v4, 6); /*0x730eeb*/
            v3 = (char)result; /*0x730ef1*/
            if ( !(unsigned char)result ) /*0x730ef5*/
              break; /*0x730ef5*/
          }
        }
      }
      if ( ++v2 >= (int)v1 ) /*0x730efa*/
      {
        if ( v3 ) /*0x730efe*/
          return (wchar_t **)((wchar_t *)PlayVocClass(((unsigned int *)dword_8871E0)[3], 0x2000, 1.0, 0)); /*0x730f17*/
        return (wchar_t **)(result); /*0x730f17*/
      }
    }
  }
  return (wchar_t **)(result);
}
}
// 0x730F30
namespace gamemd {
void * sub_730F30()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x730F30)
}
}
// 0x730FE0
namespace gamemd {
void * sub_730FE0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x730FE0)
}
}
// 0x7318F0
namespace gamemd {
AbstractClass * * sub_7318F0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7318F0)
}
}
// 0x6D0E60
namespace gamemd {
void sub_6D0E60()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D0E60.json)
}
}
// 0x60B1D0
namespace gamemd {
int UI_Get_60B1D0(HWND hWnd, HWND a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0060B1D0.json)
}
}
// 0x602B90
namespace gamemd {
bool UI_Helper_602B90(int a1, HWND a2)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00602B90.json)
}
}
// 0x603240
namespace gamemd {
int UI_Helper_603240(int a1, HWND a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00603240.json)
}
}
// 0x60D2C0
namespace gamemd {
unsigned int * sub_60D2C0(int a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x60D2C0)
}
}
// 0x6217E0
namespace gamemd {
void UI_Helper_6217E0(ObjectClass * aP0, ObjectClass * aP1, short a3, int a4)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006217E0.json)
}
}
// 0x6D0FD0
namespace gamemd {
int sub_6D0FD0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D0FD0.json)
}
}
// 0x639DA0
namespace gamemd {
int sub_639DA0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00639DA0.json)
}
}
// 0x5EBDD0
namespace gamemd {
void UI_Setup_5EBDD0(SkirmishDialog * aP0, int a2, int a3, int a4)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EBDD0.json)
}
}
// 0x793930
namespace gamemd {
void * UI_Setup_793930(void * a1, void * a2, int a3)
{
  int v5; // edi
  char **v6; // esi
  char *v7; // eax
  char *v8; // eax
  unsigned int *result; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  v13 = -1; /*0x793938*/
  v12 = -1; /*0x79393c*/
  Debug::Log(); /*0x793952*/
  v5 = 0; /*0x79395a*/
  v6 = (char **)&dword_A8DA90; /*0x79395c*/
  do /*0x79399d*/
  {
    v7 = ToWideStringChar((IUnknown *)(*v6)); /*0x793964*/
    if ( !_strcmpi(v7,(const char *)(a1)) ) /*0x79396a*/
      v13 = v5; /*0x793976*/
    v8 = ToWideStringChar((IUnknown *)(*v6)); /*0x79397d*/
    result = (unsigned int *)_strcmpi(v8,(const char *)(a2)); /*0x793983*/
    if ( !result ) /*0x79398d*/
      v12 = v5; /*0x79398f*/
    ++v6; /*0x793993*/
    ++v5; /*0x793996*/
  }
  while ( (int)v6 < (int)&dword_A8DAB0 ); /*0x79399d*/
  v10 = 0; /*0x7939a5*/
  if ( dword_A8E04C > 0 ) /*0x7939a9*/
  {
    result = (unsigned int *)(&unk_A8DC50);
    while ( 1 ) /*0x7939b0*/
    {
      v11 = *(result - 1); /*0x7939b0*/
      if ( v11 == v13 && *result == v12 ) /*0x7939c3*/
      {
        (&dword_A8DE4C)[2 * v10] = a3; /*0x7939e8*/
        return result; /*0x7939f3*/
      }
      if ( v11 == v12 && *result == v13 ) /*0x7939cd*/
        break; /*0x7939cd*/
      ++v10; /*0x7939cf*/
      result += 2; /*0x7939d0*/
      if ( v10 >= dword_A8E04C ) /*0x7939d5*/
        return result; /*0x7939d5*/
    }
    (&dword_A8DE50)[2 * v10] = a3; /*0x7939fa*/
    return (unsigned int *)a3; /*0x7939f6*/
  }
  return result; /*0x7939d7*/
}
}
// 0x53BAE0
namespace gamemd {
bool sub_53BAE0()
{
  return ChronoScreenEffect_Status != 0; /*0x53baed*/
}
} // namespace gamemd

// 0x5E2340
namespace gamemd {
HWND sub_5E2340(void * aGuiHostgamesta_0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E2340.json)
}
} // namespace gamemd

// 0x5E29A0
namespace gamemd {
LRESULT UI_Draw(HWND hWnd, wchar_t *Source, size_t Count, LPARAM lParam)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E29A0.json)
}
} // namespace gamemd

// 0x603F00
namespace gamemd {
wchar_t ** UI_Assign(wchar_t ** a1, HWND a2, LPARAM, LPARAM)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x603F00)
}
} // namespace gamemd

// 0x623170
namespace gamemd {
bool UI_Connect(HWND hWnd, LONG, LONG, void * a2, void * a3)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00623170.json)
}
} // namespace gamemd

// 0x623F60
namespace gamemd {
LRESULT UI_Assign_623F60(HWND hWnd, WPARAM wParam, void ** a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00623F60.json)
}
} // namespace gamemd

// 0x6379C0
namespace gamemd {
char sub_6379C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006379C0.json)
}
} // namespace gamemd

// 0x63A120
namespace gamemd {
int sub_63A120(char a1, char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063A120.json)
}
} // namespace gamemd

// 0x63AAC0
namespace gamemd {
char UI_Handle(MouseClass * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063AAC0.json)
}
} // namespace gamemd

// 0x63AB00
namespace gamemd {
char sub_63AB00(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063AB00.json)
}
} // namespace gamemd

// 0x63AC60
namespace gamemd {
IUnknown * UI_Delete_Delete_63AC60()
{
  return (IUnknown *)(dword_AC4BF0); /*0x63ac65*/
}
} // namespace gamemd

// 0x642E00
namespace gamemd {
unsigned int * E4Recv_642E00::UI_Render(unsigned int *a1, unsigned int *a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00642E00.json)
}
} // namespace gamemd

// 0x642E40
namespace gamemd {
int E4Recv_642E40::UI_Render_642E40(unsigned int *a1, int *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00642E40.json)
}
} // namespace gamemd

// 0x642E80
namespace gamemd {
int sub_642E80(int * a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00642E80.json)
}
} // namespace gamemd

// 0x643670
namespace gamemd {
int * E4Recv_643670::UI_Render_643670(int a5, int a1, size_t a2, int a3, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00643670.json)
}
} // namespace gamemd

// 0x6AC480
namespace gamemd {
void sub_6AC480(int a1, int * a2, unsigned int * a3, int a4, void * aDarkred)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006AC480.json)
}
}
// 0x6BA120
namespace gamemd {
char sub_6BA120(int a1, int a2, char * Source)
{
  return LoadPaletteFromFile(a1, a2, Source, 1, 1); /*0x6ba12e*/
}
} // namespace gamemd

// 0x6DA360
namespace gamemd {
unsigned int * UI_Move(unsigned int * a0, MouseClass * aP1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6DA360)
}
} // namespace gamemd

// 0x72AFF0
namespace gamemd {
int sub_72AFF0()
{
  return dword_B0FB68; /*0x72aff5*/
}
} // namespace gamemd

// 0x72B010
namespace gamemd {
int sub_72B010()
{
  return dword_B0FB70; /*0x72b015*/
}
} // namespace gamemd

// 0x72B030
namespace gamemd {
int sub_72B030()
{
  return dword_B0FB60; /*0x72b035*/
}
} // namespace gamemd

// 0x72B050
namespace gamemd {
int sub_72B050()
{
  return dword_B0FB78; /*0x72b055*/
}
} // namespace gamemd

// 0x72B9D0
namespace gamemd {
int sub_72B9D0()
{
  return dword_B0FD64; /*0x72b9d5*/
}
} // namespace gamemd

// 0x72BBB0
namespace gamemd {
int sub_72BBB0()
{
  return dword_B0FD58; /*0x72bbb5*/
}
} // namespace gamemd

// 0x72BD90
namespace gamemd {
int sub_72BD90()
{
  return dword_B0FD4C; /*0x72bd95*/
}
} // namespace gamemd

// 0x72BF70
namespace gamemd {
int sub_72BF70()
{
  return dword_B0FD40; /*0x72bf75*/
}
} // namespace gamemd

// 0x72C150
namespace gamemd {
int sub_72C150()
{
  return dword_B0FD34; /*0x72c155*/
}
} // namespace gamemd

// 0x72C330
namespace gamemd {
int sub_72C330()
{
  return dword_B0FD28; /*0x72c335*/
}
} // namespace gamemd

// 0x72C510
namespace gamemd {
int sub_72C510()
{
  return dword_B0FD1C; /*0x72c515*/
}
} // namespace gamemd

// 0x72C6F0
namespace gamemd {
int sub_72C6F0()
{
  return dword_B0FD10; /*0x72c6f5*/
}
} // namespace gamemd

// 0x72C8D0
namespace gamemd {
int sub_72C8D0()
{
  return dword_B0FD04; /*0x72c8d5*/
}
} // namespace gamemd

// 0x72CAB0
namespace gamemd {
int sub_72CAB0()
{
  return dword_B0FCF8; /*0x72cab5*/
}
} // namespace gamemd

// 0x72CC80
namespace gamemd {
int sub_72CC80()
{
  return dword_B0FC78; /*0x72cc85*/
}
} // namespace gamemd

// 0x72CE50
namespace gamemd {
int sub_72CE50()
{
  return dword_B0FCEC; /*0x72ce55*/
}
} // namespace gamemd

// 0x72D030
namespace gamemd {
int sub_72D030()
{
  return dword_B0FCE0; /*0x72d035*/
}
} // namespace gamemd

// 0x72D120
namespace gamemd {
char sub_72D120()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072D120.json)
}
} // namespace gamemd

// 0x72D210
namespace gamemd {
int sub_72D210()
{
  return dword_B0FCD4; /*0x72d215*/
}
} // namespace gamemd

// 0x72D820
namespace gamemd {
int sub_72D820()
{
  return dword_B0FBB4; /*0x72d825*/
}
} // namespace gamemd

// 0x72DAC0
namespace gamemd {
int sub_72DAC0()
{
  return dword_B0FCB4; /*0x72dac5*/
}
} // namespace gamemd

// 0x72DAD0
namespace gamemd {
int sub_72DAD0()
{
  return dword_B0FCBC; /*0x72dad5*/
}
} // namespace gamemd

// 0x72E260
namespace gamemd {
char sub_72E260()
{
  return byte_B0FBE0; /*0x72e265*/
}
} // namespace gamemd

// 0x72E2A0
namespace gamemd {
int sub_72E2A0()
{
  return dword_B0FBD4; /*0x72e2a5*/
}
} // namespace gamemd

// 0x72E2C0
namespace gamemd {
int sub_72E2C0()
{
  return dword_B0FBDC; /*0x72e2c5*/
}
} // namespace gamemd

// 0x72E730
namespace gamemd {
void UI_Draw_72E730(ConvertClass * aP0, int * a1, int a3, int aP2, int a5)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072E730.json)
}
} // namespace gamemd

// 0x72E860
namespace gamemd {
void UI_Draw_72E860(int a1, ConvertClass * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072E860.json)
}
} // namespace gamemd

// 0x72E8C0
namespace gamemd {
void UI_Draw_72E8C0(int a1, ConvertClass * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072E8C0.json)
}
} // namespace gamemd

// 0x72E920
namespace gamemd {
void UI_Draw_72E920(int a1, ConvertClass * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072E920.json)
}
} // namespace gamemd

// 0x72F430
namespace gamemd {
char sub_72F430()
{
  return byte_B0FC0C; /*0x72f435*/
}
} // namespace gamemd

// 0x72F4A0
namespace gamemd {
CCINIClass * UI_Load_72F4A0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72F4A0)
}
} // namespace gamemd

// 0x72F4B0
namespace gamemd {
int sub_72F4B0()
{
  return dword_B0FBE8; /*0x72f4b5*/
}
} // namespace gamemd

// 0x72F4D0
namespace gamemd {
int sub_72F4D0()
{
  return dword_B0FC08; /*0x72f4d5*/
}
} // namespace gamemd

// 0x72F4E0
namespace gamemd {
CCINIClass * UI_Load_72F4E0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72F4E0)
}
} // namespace gamemd

// 0x731A10
namespace gamemd {
char sub_731A10()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00731A10.json)
}
} // namespace gamemd

// 0x731A30
namespace gamemd {
int sub_731A30()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00731A30.json)
}
} // namespace gamemd

// 0x731A50
namespace gamemd {
int sub_731A50(char a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00731A50.json)
}
} // namespace gamemd

// 0x731A70
namespace gamemd {
int sub_731A70(char a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00731A70.json)
}
} // namespace gamemd

// 0x732CA0
namespace gamemd {
char sub_732CA0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00732CA0.json)
}
} // namespace gamemd

// 0x732CC0
namespace gamemd {
char sub_732CC0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00732CC0.json)
}
} // namespace gamemd

// 0x734120
namespace gamemd {
unsigned short sub_734120()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x734120)
}
} // namespace gamemd

// 0x7342A0
namespace gamemd {
int sub_7342A0()
{
  return dword_B0FE5C; /*0x7342a5*/
}
} // namespace gamemd

// 0x7342B0
namespace gamemd {
int sub_7342B0()
{
  return dword_B0FE60; /*0x7342b5*/
}
} // namespace gamemd

// 0x77CF40
namespace gamemd {
bool sub_77CF40()
{
  return dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2; /*0x77cf56*/
}
} // namespace gamemd

// 0x7930A0
namespace gamemd {
bool sub_7930A0()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007930A0.json)
}
} // namespace gamemd

// 0x793A10
namespace gamemd {
ObjectClass * UI_Setup_793A10(void * a1, short a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x793A10)
}
} // namespace gamemd

// 0x7A2750
namespace gamemd {
void sub_7A2750()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007A2750.json)
}
} // namespace gamemd

// 0x7B83E0
namespace gamemd {
wchar_t ** sub_7B83E0(wchar_t ** a1, const char ** a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B83E0)
}
} // namespace gamemd

// 0x7BA2C0
namespace gamemd {
void sub_7BA2C0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BA2C0.json)
}
} // namespace gamemd
