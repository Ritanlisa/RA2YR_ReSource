// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"

#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_520260_e4.hpp"
#include "e4/classes/E4Recv_522100_e4.hpp"
#include "e4/classes/E4Recv_522540_e4.hpp"
#include "e4/classes/E4Recv_524EC0_e4.hpp"
#include "e4/classes/E4Recv_526950_e4.hpp"
#include "e4/classes/E4Recv_528220_e4.hpp"
#include "e4/classes/E4Recv_529E70_e4.hpp"
#include "e4/classes/E4Recv_52A110_e4.hpp"
#include "e4/classes/E4Recv_52A2F0_e4.hpp"
#include "e4/classes/E4Recv_52A4D0_e4.hpp"
#include "e4/classes/E4Recv_52A610_e4.hpp"
#include "e4/classes/E4Recv_52AAF0_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/MixFile_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Rules_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VectorClass_ptr_CCINIClass_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/WinsockInterface_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/E4Recv_541170_e4.hpp"
#include "e4/classes/E4Recv_542F30_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/E4Recv_517110_e4.hpp"
#include "e4/classes/E4Recv_5176D0_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"

// 0x522100
namespace gamemd {
int E4Recv_522100::sub_522100()
{

  int (***v2)(unsigned int, void *, int *); // eax
  int v3; // esi
  int v4; // eax
  int v5; // edi
  bool v6; // bl
  int v7; // [esp+14h] [ebp-18h] BYREF
  int v8; // [esp+18h] [ebp-14h] BYREF
  unsigned char v9[16]; // [esp+1Ch] [ebp-10h] BYREF

  if ( !*(unsigned char *)(*((unsigned int *)this + 432) + 3476) ) /*0x522109*/
    return 0; /*0x522113*/
  v2 = (int (***)(unsigned int, void *, int *))*((unsigned int *)this + 413); /*0x522119*/
  v7 = 0; /*0x522124*/
  if ( !v2 ) /*0x52212c*/
    goto LABEL_11; /*0x52212c*/
  v3 = (**v2)((unsigned int)v2, &unk_818858, &v8); /*0x52213d*/
  if ( v3 >= 0 ) /*0x522141*/
  {
    v5 = v8; /*0x522150*/
    ComPtr::Release_Alt((ComPtr *)&v7); /*0x522158*/
    v4 = v5; /*0x52215d*/
  }
  else
  {
    ComPtr::Release_Alt((ComPtr *)&v7); /*0x522147*/
    v4 = 0; /*0x52214c*/
  }
  v7 = v4; /*0x522161*/
  if ( v3 < 0 && v3 != -2147467262 ) /*0x52216d*/
    WinAPI::Wrapper(v3); /*0x522170*/
  if ( !v4 ) /*0x52217b*/
LABEL_11:
    WinAPI::Wrapper(-2147467261); /*0x522182*/
  (*(void (**)(int, unsigned char *))(*(unsigned int *)v4 + 12))(v4, v9); /*0x522193*/
  v6 = memcmp(v9, &g_CLSID_JumpjetLocomotion, 0x10u) == 0; /*0x5221ac*/
  if ( v7 ) /*0x5221b1*/
    (*(void (**)(int))(*(unsigned int *)v7 + 8))(v7); /*0x5221b6*/
  return v6; /*0x522115*/

}
}
// 0x523440
namespace gamemd {
int BinaryArraySearch(AbstractClass * aP0, int edx0, int * a2)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = edx0; /*0x523445*/
  if ( edx0 <= 0 ) /*0x523447*/
    return 0; /*0x523479*/
  v4 = *a2; /*0x52344d*/
  while ( 1 ) /*0x523456*/
  {
    v5 = *(unsigned int *)(aP0 + 8 * (v3 / 2)); /*0x523456*/
    if ( v5 <= v4 ) /*0x52345e*/
      break; /*0x52345e*/
    v3 /= 2; /*0x523460*/
  LABEL_7:
    if ( v3 <= 0 ) /*0x523472*/
      return 0; /*0x523472*/
  }
  if ( v5 != v4 ) /*0x523464*/
  {
    aP0 += 8 * (v3 / 2) + 8; /*0x523466*/
    v3 += -1 - v3 / 2; /*0x52346e*/
    goto LABEL_7; /*0x52346e*/
  }
  return (int)(aP0 + 8 * (v3 / 2)); /*0x523474*/
}
}
// 0x525430
namespace gamemd {
void * GetINIClassIntList(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, void ** a5, void * a6, int a7, short a8, int a9, int a10, int a11)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x525430)
}
}
// 0x528220
namespace gamemd {
int E4Recv_528220::sub_528220(unsigned char * a2, unsigned char * a3, int a4)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x528220)
}
}
// 0x529E70
namespace gamemd {
char ** E4Recv_529E70::sub_529E70(char ** a2, char * Source, char ** a4, char ** a5)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x529E70)
}
}
// 0x52A110
namespace gamemd {
void * E4Recv_52A110::sub_52A110(float * a2, unsigned char * a3, float a4, float * a5)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52A110)
}
}
// 0x52A2F0
namespace gamemd {
Color * * E4Recv_52A2F0::sub_52A2F0(float * a2, float Source, char ** a4, float * a5)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52A2F0)
}
}
// 0x52A4D0
namespace gamemd {
ObjectClass * * E4Recv_52A4D0::sub_52A4D0(uint8_t * a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52A4D0)
}
}
// 0x52A610
namespace gamemd {
ObjectClass * * sub_52A610(void * a2, void * aPrivatekey, void * aPublickey)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52A610)
}
}
// 0x52B720
namespace gamemd {
int CompareFunc4Int(unsigned int * a1, unsigned int * a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x52b730*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
// 0x52BA60
namespace gamemd {
void InitGame()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52BA60)
}
} // namespace gamemd

// 0x52CB50
namespace gamemd {
char PlayIntroSequence()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52CB50)
}
}
// 0x52CD70
namespace gamemd {
void InitRules()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52CD70)
}
}
// 0x52D870
namespace gamemd {
void sub_52D870(HWND hDlg, unsigned int a2, unsigned int a3, unsigned int a4)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52D870)
}
}
// 0x52D9A0
namespace gamemd {
void MenuSelect()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52D9A0)
}
} // namespace gamemd

// 0x52F620
namespace gamemd {
char CommandLine_Parse(int a1, int a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52F620)
}
}
// 0x52FC20
namespace gamemd {
Straw * * Random_Init()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52FC20)
}
}
// 0x52FFD0
namespace gamemd {
void sub_52FFD0(char a1)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52FFD0)
}
} // namespace gamemd

// 0x520260
namespace gamemd {
char E4Recv_520260::sub_520260()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x520260)
}
} // namespace gamemd

// 0x522540
namespace gamemd {
char E4Recv_522540::sub_522540()
{

  return *(unsigned char *)(*((unsigned int *)this + 432) + 1708); /*0x52254c*/

}
} // namespace gamemd

// 0x522A50
namespace gamemd {
void nullsub_146(int a1)
{
  ; /*0x522a50*/
}
} // namespace gamemd

// 0x523490
namespace gamemd {
void sub_523490()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x52349c*/
  dbl_A8F268 = Math::Sqrt(v0 + v0); /*0x5234ae*/
}
} // namespace gamemd

// 0x5234C0
namespace gamemd {
void sub_5234C0()
{
  dbl_A8F2C0 = dbl_A8F268 / 60.0; /*0x5234cc*/
}
} // namespace gamemd

// 0x5234E0
namespace gamemd {
void sub_5234E0()
{
  dbl_A8F2A8 = 1.0 / dbl_A8F2C0; /*0x5234ec*/
}
} // namespace gamemd

// 0x523500
namespace gamemd {
void sub_523500()
{
  dbl_A8F2A0 = 0.0174532925199433 * 45.0; /*0x52350c*/
}
} // namespace gamemd

// 0x523520
namespace gamemd {
void sub_523520()
{
  dbl_A8F270 = 0.0174532925199433 * 60.0; /*0x52352c*/
}
} // namespace gamemd

// 0x523540
namespace gamemd {
void sub_523540()
{
  dbl_A8F248 = 0.0174532925199433 * 90.0; /*0x52354c*/
}
} // namespace gamemd

// 0x523560
namespace gamemd {
long long sub_523560()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_A8F248 - dbl_A8F270); /*0x523572*/
  result = Math::RoundToInt(v0 * dbl_A8F268 * 0.5); /*0x523586*/
  dword_A8F2CC = result; /*0x52358b*/
  return result; /*0x523590*/
}
} // namespace gamemd

// 0x5235A0
namespace gamemd {
void sub_5235A0()
{
  dbl_A8F278 = Math::ArcTan((double)dword_A8F2CC * 0.00390625); /*0x5235b7*/
}
} // namespace gamemd

// 0x5235D0
namespace gamemd {
void sub_5235D0()
{
  dbl_A8F298 = Math::ArcTan((double)(2 * dword_A8F2CC) / dbl_A8F268); /*0x5235f2*/
}
} // namespace gamemd

// 0x523600
namespace gamemd {
long long sub_523600()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F2CC) + 0.5); /*0x52361b*/
  dword_A8F2BC = result; /*0x523620*/
  return result; /*0x523626*/
}
} // namespace gamemd

// 0x523630
namespace gamemd {
int sub_523630()
{
  word_A8F260 = 0; /*0x523632*/
  word_A8F262 = 0; /*0x523638*/
  return 0; /*0x52363e*/
}
} // namespace gamemd

// 0x523640
namespace gamemd {
int sub_523640()
{
  dword_A8F280 = 0; /*0x523642*/
  dword_A8F284 = 0; /*0x523647*/
  dword_A8F288 = 0; /*0x52364c*/
  return 0; /*0x523651*/
}
} // namespace gamemd

// 0x523660
namespace gamemd {
int sub_523660()
{
  dword_A8F2B8 = 0; /*0x523665*/
  dword_A8F2B0 = 128; /*0x52366f*/
  dword_A8F2B4 = 128; /*0x523674*/
  return 128; /*0x523679*/
}
} // namespace gamemd

// 0x523680
namespace gamemd {
int sub_523680()
{
  dword_A8F250 = 0; /*0x523682*/
  dword_A8F254 = 0; /*0x523687*/
  dword_A8F258 = 0; /*0x52368c*/
  dword_A8F25C = 0; /*0x523691*/
  return 0; /*0x523696*/
}
} // namespace gamemd

// 0x523C80
namespace gamemd {
void nullsub_147()
{
  ; /*0x523c80*/
}
} // namespace gamemd

// 0x5247B0
namespace gamemd {
int InfantryTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5247B0)
}
} // namespace gamemd

// 0x524EC0
namespace gamemd {
Iostream_init * E4Recv_524EC0::__0Iostream_init_QAE_XZ_4()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x524EC0)
}
} // namespace gamemd

// 0x5256D0
namespace gamemd {
int sub_5256D0()
{
  dword_A8F2D0 = 0; /*0x5256d2*/
  dword_A8F2D4 = 0; /*0x5256d7*/
  dword_A8F2D8 = 0; /*0x5256dc*/
  dword_A8F2DC = 0; /*0x5256e1*/
  return 0; /*0x5256e6*/
}
} // namespace gamemd

// 0x526950
namespace gamemd {
int E4Recv_526950::sub_526950()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x526950)
}
} // namespace gamemd

// 0x52AAF0
namespace gamemd {
void E4Recv_52AAF0::sub_52AAF0()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52AAF0)
}
} // namespace gamemd

// 0x52B6A0
namespace gamemd {
int CompareFunc3Int(unsigned int * a1, unsigned int * a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x52b6b0*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
} // namespace gamemd

// 0x52B7A0
namespace gamemd {
int sub_52B7A0()
{
  dword_A8F2E8 = 0; /*0x52b7a2*/
  dword_A8F2EC = 0; /*0x52b7a7*/
  dword_A8F2F0 = 0; /*0x52b7ac*/
  dword_A8F2F4 = 0; /*0x52b7b1*/
  return 0; /*0x52b7b6*/
}
} // namespace gamemd

// 0x52B7C0
namespace gamemd {
void sub_52B7C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x52b7cc*/
  dbl_A8F418 = Math::Sqrt(v0 + v0); /*0x52b7de*/
}
} // namespace gamemd

// 0x52B7F0
namespace gamemd {
void sub_52B7F0()
{
  dbl_A8F778 = dbl_A8F418 / 60.0; /*0x52b7fc*/
}
} // namespace gamemd

// 0x52B810
namespace gamemd {
void sub_52B810()
{
  dbl_A8F760 = 1.0 / dbl_A8F778; /*0x52b81c*/
}
} // namespace gamemd

// 0x52B830
namespace gamemd {
void sub_52B830()
{
  dbl_A8F758 = 0.0174532925199433 * 45.0; /*0x52b83c*/
}
} // namespace gamemd

// 0x52B850
namespace gamemd {
void sub_52B850()
{
  dbl_A8F5A0 = 0.0174532925199433 * 60.0; /*0x52b85c*/
}
} // namespace gamemd

// 0x52B870
namespace gamemd {
void sub_52B870()
{
  dbl_A8F2E0 = 0.0174532925199433 * 90.0; /*0x52b87c*/
}
} // namespace gamemd

// 0x52B890
namespace gamemd {
long long sub_52B890()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_A8F2E0 - dbl_A8F5A0); /*0x52b8a2*/
  result = Math::RoundToInt(v0 * dbl_A8F418 * 0.5); /*0x52b8b6*/
  dword_A8F780 = result; /*0x52b8bb*/
  return result; /*0x52b8c0*/
}
} // namespace gamemd

// 0x52B8D0
namespace gamemd {
void sub_52B8D0()
{
  dbl_A8F5A8 = Math::ArcTan((double)dword_A8F780 * 0.00390625); /*0x52b8e7*/
}
} // namespace gamemd

// 0x52B900
namespace gamemd {
void sub_52B900()
{
  dbl_A8F648 = Math::ArcTan((double)(2 * dword_A8F780) / dbl_A8F418); /*0x52b922*/
}
} // namespace gamemd

// 0x52B930
namespace gamemd {
long long sub_52B930()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F780) + 0.5); /*0x52b94b*/
  dword_A8F774 = result; /*0x52b950*/
  return result; /*0x52b956*/
}
} // namespace gamemd

// 0x52B960
namespace gamemd {
int sub_52B960()
{
  word_A8F2F8 = 0; /*0x52b962*/
  word_A8F2FA = 0; /*0x52b968*/
  return 0; /*0x52b96e*/
}
} // namespace gamemd

// 0x52B970
namespace gamemd {
int sub_52B970()
{
  dword_A8F638 = 0; /*0x52b972*/
  dword_A8F63C = 0; /*0x52b977*/
  dword_A8F640 = 0; /*0x52b97c*/
  return 0; /*0x52b981*/
}
} // namespace gamemd

// 0x52B990
namespace gamemd {
int sub_52B990()
{
  dword_A8F770 = 0; /*0x52b995*/
  dword_A8F768 = 128; /*0x52b99f*/
  dword_A8F76C = 128; /*0x52b9a4*/
  return 128; /*0x52b9a9*/
}
} // namespace gamemd

// 0x52CB80
namespace gamemd {
void nullsub_18()
{
  ; /*0x52cb80*/
}
} // namespace gamemd

// 0x52D430
namespace gamemd {
INT_PTR ReadModConfigINI(HWND hDlg, UINT, WPARAM, int * a4)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52D430)
}
} // namespace gamemd

// 0x52D610
namespace gamemd {
void nullsub_148()
{
  ; /*0x52d610*/
}
} // namespace gamemd

// 0x52D620
namespace gamemd {
void nullsub_149()
{
  ; /*0x52d620*/
}
} // namespace gamemd

// 0x52D630
namespace gamemd {
void nullsub_150()
{
  ; /*0x52d630*/
}
} // namespace gamemd

// 0x52D790
namespace gamemd {
int sub_52D790(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52D790)
}
} // namespace gamemd
