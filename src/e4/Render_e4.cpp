// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/Text_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/E4Recv_626120_e4.hpp"
#include "e4/classes/E4Recv_6345A0_e4.hpp"
#include "e4/classes/E4Recv_634770_e4.hpp"
#include "e4/classes/E4Recv_635490_e4.hpp"
#include "e4/classes/E4Recv_63D0F0_e4.hpp"
#include "e4/classes/E4Recv_65A1B0_e4.hpp"
#include "e4/classes/E4Recv_68FFE0_e4.hpp"
#include "e4/classes/E4Recv_6BAFA0_e4.hpp"
#include "e4/classes/E4Recv_6C9900_e4.hpp"
#include "e4/classes/E4Recv_6CABA0_e4.hpp"
#include "e4/classes/E4Recv_7597A0_e4.hpp"
#include "e4/classes/E4Recv_759830_e4.hpp"
#include "e4/classes/E4Recv_759850_e4.hpp"
#include "e4/classes/E4Recv_759880_e4.hpp"
#include "e4/classes/E4Recv_759EA0_e4.hpp"
#include "e4/classes/E4Recv_759EB0_e4.hpp"
#include "e4/classes/E4Recv_759F20_e4.hpp"
#include "e4/classes/E4Recv_783B80_e4.hpp"
#include "e4/classes/E4Recv_7B71D0_e4.hpp"
#include "e4/classes/BuildingLight_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Render_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/ScoreScreen_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/Coord2D_e4.hpp"

// 0x52FF90
namespace gamemd {
int Render_Load(void * a1, void * a2, void * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0052FF90.json)
}
} // namespace gamemd

// 0x53C0A0
namespace gamemd {
int sub_53C0A0(unsigned short * a1, int a2, unsigned short a3, int a4, int a5, int a6, int a7)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053C0A0.json)
}
}
// 0x652230
namespace gamemd {
AbstractClass * * Render_Show(CCINIClass * aP0, int a2, void * a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x652230)
}
}
// 0x705270
namespace gamemd {  // G42.18c ns repair
AbstractClass * * Render::DrawLine(int a1, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00705270.json)
}
}  // G42.18c ns repair
// 0x780D90
namespace gamemd {
wchar_t ** Render_Format(wchar_t ** a1, char ** a2)
{
  char *v4; // eax
  wchar_t *StringCSF; // eax
  int v7; // edi
  int v8; // esi
  char *v9; // eax

  v4 = ((String *)(a2))->GetOrEmpty_Alt(); /*0x780d9f*/
  if ( _strcmpi(v4,(const char *)(aRandmapSed)) ) /*0x780da5*/
  {
    v7 = 0; /*0x780ddb*/
    if ( dword_A8B8D8 <= 0 ) /*0x780ddf*/
    {
  LABEL_6:
      ((WideString *)((WideString *)a1))->Assign((wchar_t *)(&g_TypeClass_DefaultString)); /*0x780e0b*/
      return a1; /*0x780e17*/
    }
    else
    {
      while ( 1 ) /*0x780de6*/
      {
        v8 = *(unsigned int *)(dword_A8B8CC + 4 * v7); /*0x780de6*/
        v9 = ((String *)(a2))->GetOrEmpty_Alt(); /*0x780def*/
        if ( !_strcmpi(v9, (char *)(v8 + 88)) ) /*0x780df5*/
          break; /*0x780df5*/
        if ( ++v7 >= dword_A8B8D8 ) /*0x780e09*/
          goto LABEL_6; /*0x780e09*/
      }
      ((WideString *)((WideString *)a1))->Assign((wchar_t *)v8); /*0x780e21*/
      return a1; /*0x780e26*/
    }
  }
  else
  {
    StringCSF = GetStringCSF((wchar_t *)(aTxtRandomMapDe), 0,(const char *)(g_Str_File_wonline_cpp), 2970); /*0x780dc2*/
    ((WideString *)((WideString *)a1))->Assign(StringCSF); /*0x780dca*/
    return a1; /*0x780dcf*/
  }
}
}
// 0x7C7371
namespace gamemd {  // G42.18c ns repair
void Render::DrawTileBitmap(int a1, unsigned short * a2, short a3, short a4, unsigned int a5, int a6)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C7371.json)
}
}  // G42.18c ns repair
// 0x731BF0
namespace gamemd {
char sub_731BF0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00731BF0.json)
}
}
// 0x777E00
namespace gamemd {
int sub_777E00()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00777E00.json)
}
}
// 0x778030
namespace gamemd {
int Render_Draw_778030(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00778030.json)
}
}
// 0x778120
namespace gamemd {
int sub_778120()
{
  return dword_B73570; /*0x778125*/
}
}
// 0x6CA310
namespace gamemd {
WinModemClass * * Render_Parse_6CA310(CampaignScore * aP0, CCINIClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6CA310)
}
}
// 0x6CA940
namespace gamemd {
char sub_6CA940(int a1, unsigned short * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006CA940.json)
}
}
// 0x53D850
namespace gamemd {
char sub_53D850()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053D850.json)
}
}
// 0x5541C0
namespace gamemd {
CampaignScore * * Render_Render_5541C0(unsigned short * a0, int a2, AbstractClass * aP2, int a4, AbstractClass * aP4, char a6, char a7)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5541C0)
}
}
// 0x554280
namespace gamemd {
void Render_Render_554280(unsigned short * a0, AbstractClass * aP1, int * a2, unsigned short a4, char a5)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00554280.json)
}
}
// 0x63B0A0
namespace gamemd {
AbstractClass * * sub_63B0A0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x63B0A0)
}
}
// 0x642BB0
namespace gamemd {
int sub_642BB0(unsigned int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00642BB0.json)
}
}
// 0x660000
namespace gamemd {
int sub_660000()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00660000.json)
}
}
// 0x6603B0
namespace gamemd {
void sub_6603B0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006603B0.json)
}
}
// 0x7760B0
namespace gamemd {
void * Render_Render_7760B0(HDC hdc, const char * a2, LONG, LONG, char a5, void * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7760B0)
}
}
// 0x556D40
namespace gamemd {
void sub_556D40()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00556D40.json)
}
} // namespace gamemd

// 0x5BE970
namespace gamemd {
int sub_5BE970(int a1)
{
  return (&dword_82D028)[7 * a1]; /*0x5be984*/
}
} // namespace gamemd

// 0x5BE990
namespace gamemd {
int sub_5BE990(int a1)
{
  return (&dword_82D02C)[7 * a1]; /*0x5be9a4*/
}
} // namespace gamemd

// 0x5C0640
namespace gamemd {
char sub_5C0640(const char * a1, char * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C0640.json)
}
} // namespace gamemd

// 0x5E8740
namespace gamemd {
bool sub_5E8740(int a1)
{
  return wcscmp(*(const wchar_t **)(dword_A8DA78 + 4 * a1),(const wchar_t *)(word_A8D610)) == 0; /*0x5e875b*/
}
} // namespace gamemd

// 0x5FFFA0
namespace gamemd {
char sub_5FFFA0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FFFA0.json)
}
} // namespace gamemd

// 0x63CA80
namespace gamemd {
unsigned int * sub_63CA80(unsigned int * a1, unsigned char * a2, int a3)
{
  int *ScenarioClassActionCoords; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // esi
  int *v8; // ecx
  unsigned int v10[3]; // [esp+8h] [ebp-Ch] BYREF

  ScenarioClassActionCoords = (int *)(GetScenarioClassActionCoords(v10, a2)); /*0x63ca90*/
  v5 = *ScenarioClassActionCoords; /*0x63ca92*/
  v6 = ScenarioClassActionCoords[1]; /*0x63ca97*/
  v7 = ScenarioClassActionCoords[2]; /*0x63ca9a*/
  if ( *ScenarioClassActionCoords == -1 && v6 == -1 && v7 == -1 && a3 ) /*0x63caad*/
  {
    v8 = (int *)(*(int (**)(int, unsigned int *))(*(unsigned int *)a3 + 88))(a3, v10); /*0x63cab9*/
    v5 = *v8; /*0x63cabb*/
    v6 = v8[1]; /*0x63cabd*/
    v7 = v8[2]; /*0x63cac0*/
  }
  *a1 = v5; /*0x63cac5*/
  a1[1] = v6; /*0x63caca*/
  a1[2] = v7; /*0x63cacd*/
  return a1; /*0x63cac9*/
}
} // namespace gamemd

// 0x660530
namespace gamemd {
bool sub_660530()
{
  return dword_B04DB8 == 0; /*0x66053a*/
}
} // namespace gamemd

// 0x68ED80
namespace gamemd {
int Render_Get(ScoreScreen * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0068ED80.json)
}
} // namespace gamemd

// 0x6D9A50
namespace gamemd {
int sub_6D9A50(int a1, int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D9A50.json)
}
} // namespace gamemd

// 0x72B340
namespace gamemd {
int sub_72B340()
{
  return dword_B0FB80; /*0x72b345*/
}
} // namespace gamemd

// 0x72B360
namespace gamemd {
int sub_72B360()
{
  return dword_B0FB88; /*0x72b365*/
}
} // namespace gamemd

// 0x72B500
namespace gamemd {
int sub_72B500()
{
  return dword_B0FB98; /*0x72b505*/
}
} // namespace gamemd

// 0x72B520
namespace gamemd {
ObjectClass * Render_Render_72B520()
{
  return (gamemd::ObjectClass *)(dword_B0FBA0); /*0x72b525*/
}
} // namespace gamemd

// 0x72E820
namespace gamemd {
void Render_Draw(int a1, int *a2, char a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072E820.json)
}
} // namespace gamemd

// 0x72EB50
namespace gamemd {
void * sub_72EB50()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72EB50)
}
} // namespace gamemd

// 0x774070
namespace gamemd {
bool sub_774070()
{
  return dword_B72D0C && *(unsigned int *)(dword_B72D0C + 8) && *(unsigned char *)(dword_B72D0C + 1036); /*0x77408f*/
}
} // namespace gamemd

// 0x7C3230
namespace gamemd {
int sub_7C3230(int a1, int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C3230.json)
}
} // namespace gamemd

// 0x7C3690
namespace gamemd {
int sub_7C3690(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C3690.json)
}
} // namespace gamemd

// 0x7C3710
namespace gamemd {
int sub_7C3710(unsigned char * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C3710.json)
}
} // namespace gamemd
