// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/CCFileClass_e4.hpp"

#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5D0190_e4.hpp"
#include "e4/classes/E4Recv_5D0240_e4.hpp"
#include "e4/classes/E4Recv_5D25D0_e4.hpp"
#include "e4/classes/E4Recv_5D2650_e4.hpp"
#include "e4/classes/E4Recv_5D30C0_e4.hpp"
#include "e4/classes/E4Recv_5D4430_e4.hpp"
#include "e4/classes/E4Recv_5D4F20_e4.hpp"
#include "e4/classes/E4Recv_5D6D80_e4.hpp"
#include "e4/classes/E4Recv_5D7580_e4.hpp"
#include "e4/classes/E4Recv_5D7CD0_e4.hpp"
#include "e4/classes/E4Recv_5D7FF0_e4.hpp"
#include "e4/classes/E4Recv_5D8010_e4.hpp"
#include "e4/classes/E4Recv_5D8FB0_e4.hpp"
#include "e4/classes/E4Recv_5D8FC0_e4.hpp"
#include "e4/classes/E4Recv_5D9060_e4.hpp"
#include "e4/classes/E4Recv_5DAB80_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/DropListClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/E4Recv_724200_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/FileStraw_e4.hpp"
#include "e4/classes/GenericList_e4.hpp"
#include "e4/classes/MultiplayerConfig_e4.hpp"
#include "e4/classes/Text_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/ListBox_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"

// 0x5D0190
namespace gamemd {
int E4Recv_5D0190::sub_5D0190(const char * a2)
{

  int v3; // esi
  int v5; // esi
  char *v6; // [esp+8h] [ebp-4h] BYREF

  ((String *)((String *)&v6))->Assign(a2); /*0x5d019e*/
  ((String *)((String *)&v6))->ToLower(); /*0x5d01a7*/
  v3 = 0; /*0x5d01af*/
  if ( this->customSound <= 0 ) /*0x5d01b3*/
  {
LABEL_6:
    j_DeleteAndZero((ObjectClass *)&v6); /*0x5d0202*/
    return 0; /*0x5d0210*/
  }
  while ( !(uint8_t)((String *)(*(String **)((&this->customSound_controller)[2] + 4 * v3)))->NotEquals(0) ) /*0x5d01c4*/
  {
LABEL_5:
    if ( ++v3 >= this->customSound ) /*0x5d0200*/
      goto LABEL_6; /*0x5d0200*/
  }
  ((String *)((String *)&a2))->AssignFromPtr(*(const char ***)((&this->customSound_controller)[2] + 4 * v3)); /*0x5d01d1*/
  ((String *)((String *)&a2))->ToLower(); /*0x5d01da*/
  if ( !(uint8_t)((String *)((String *)&v6))->Compare(&a2) ) /*0x5d01e8*/
  {
    j_DeleteAndZero((ObjectClass *)&a2); /*0x5d01f5*/
    goto LABEL_5; /*0x5d01f5*/
  }
  v5 = *(unsigned int *)((&this->customSound_controller)[2] + 4 * v3); /*0x5d021a*/
  j_DeleteAndZero((ObjectClass *)&a2); /*0x5d021d*/
  j_DeleteAndZero((ObjectClass *)&v6); /*0x5d0226*/
  return v5; /*0x5d020b*/

}
}
// 0x5D0240
namespace gamemd {
char ** E4Recv_5D0240::sub_5D0240(char ** a2, char a3)
{

  int customSound; // esi
  int v4; // eax
  int v5; // edi
  int v6; // ecx

  customSound = this->customSound; /*0x5d0242*/
  v4 = 0; /*0x5d0245*/
  if ( customSound <= 0 ) /*0x5d024a*/
  {
LABEL_5:
    ((String *)((String *)a2))->Assign(0); /*0x5d0264*/
    return a2; /*0x5d0271*/
  }
  else
  {
    v5 = (&this->customSound_controller)[2]; /*0x5d024c*/
    v6 = v5; /*0x5d0253*/
    while ( a3 != *(unsigned char *)(*(unsigned int *)v6 + 4) ) /*0x5d025a*/
    {
      ++v4; /*0x5d025c*/
      v6 += 4; /*0x5d025d*/
      if ( v4 >= customSound ) /*0x5d0262*/
        goto LABEL_5; /*0x5d0262*/
    }
    ((String *)((String *)a2))->AssignFromPtr(*(const char ***)(v5 + 4 * v4)); /*0x5d0283*/
    return a2; /*0x5d0288*/
  }

}
}
// 0x5D0580
namespace gamemd {
void j_DeleteAndZero_5D0580()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D0580)
}
}
// 0x5D2350
namespace gamemd {
int sub_5D2350(int a1, int * a2)
{
  int result; // eax
  int v3; // eax
  int v4; // ecx
  unsigned int v5[4]; // [esp+8h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  result = a2[2]; /*0x5d2359*/
  if ( result > 0 ) /*0x5d235e*/
  {
    result = a2[3]; /*0x5d2364*/
    if ( result > 0 ) /*0x5d2369*/
    {
      GetClientRect((HWND)(g_hWnd), &Rect); /*0x5d237b*/
      ClientToScreen((HWND)(g_hWnd), (LPPOINT)&Rect); /*0x5d238c*/
      if ( dword_887640 ) /*0x5d239e*/
        (*(void (**)(int, int, unsigned int))(*(unsigned int *)dword_887640 + 60))(dword_887640, a1, 0); /*0x5d23a5*/
      v3 = *a2; /*0x5d23af*/
      v4 = a2[1]; /*0x5d23b3*/
      v5[2] = a2[2]; /*0x5d23b9*/
      v5[3] = a2[3]; /*0x5d23c6*/
      v5[1] = Rect.top + v4; /*0x5d23ce*/
      v5[0] = Rect.left + v3; /*0x5d23de*/
      result = (*(int (**)(int, unsigned int *, int, int *, unsigned int, int))(*(unsigned int *)g_DSurface_Primary + 8))( /*0x5d23e5*/
                 g_DSurface_Primary,
                 v5,
                 a1,
                 a2,
                 0,
                 1);
      if ( dword_887640 ) /*0x5d23f1*/
        return (*(int (**)(int, int, unsigned int))(*(unsigned int *)dword_887640 + 64))(dword_887640, a1, 0); /*0x5d23f8*/
    }
  }
  return result; /*0x5d23fb*/
}
}
// 0x5D25D0
namespace gamemd {
int E4Recv_5D25D0::sub_5D25D0(char * Source, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D25D0)
}
}
// 0x5D2650
namespace gamemd {
void* E4Recv_5D2650::sub_5D2650(void * a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D2650)
}
}
// 0x5D4510
namespace gamemd {
CampaignScore * * ProcessEditControlKey(CellStruct * aP0, int edx0, int * a2, unsigned short a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D4510)
}
}
// 0x5D4D50
namespace gamemd {
void* Dialog_MessageLoop()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D4D50)
}
}
// 0x5D4F20
namespace gamemd {
AbstractClass * * E4Recv_5D4F20::sub_5D4F20()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D4F20)
}
}
// 0x5D6000
namespace gamemd {
char sub_5D6000(HWND hWnd, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D6000)
}
}
// 0x5D7590
namespace gamemd {
Coord * * LoadMultiplayerModesList(AbstractClass * a1, int edx0, void * aDRa2mdpostMult)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D7590)
}
}
// 0x5D7CE0
namespace gamemd {
void GameInit_Complete()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D7CE0)
}
}
// 0x5D9060
namespace gamemd {
int E4Recv_5D9060::sub_5D9060(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw body; truth = .omo/ida_cache/func_0x5D9060.json)
}
}
// 0x5D9DB0
namespace gamemd {
AbstractClass * * DetectPortAllocationPattern(int a1, short * a2, unsigned short * a3, unsigned char * a4, unsigned char * a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D9DB0)
}
}
// 0x5DA750
namespace gamemd {
void HandleNetworkPlayerDisconnect(wchar_t * a1, int a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DA750)
}
}
// 0x5DB720
namespace gamemd {
void CheckNetworkGameTimeout()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DB720)
}
}
// 0x5DBE20
namespace gamemd {
void SetGameSetupPlayerState(char * a1, int a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DBE20)
}
}
// 0x5DBF50
namespace gamemd {
void UpdateMultiplayerPlayerOptions(CCINIClass * aP0, CCINIClass * aP1, CCINIClass * aP2, int a4, int a5)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DBF50)
}
}
// 0x5DD8A0
namespace gamemd {
AbstractClass * * SynchronizeMultiplayerGameStart()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DD8A0)
}
}
// 0x5DF180
namespace gamemd {
void SkirmishDialogProc(SkirmishDialog * aP0, int a2, unsigned short a3, HWND a4)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DF180)
}
}
// 0x5DF410
namespace gamemd {
int Network_SendJoinRequest(int a1, unsigned char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DF410)
}
}
// 0x5DF9E0
namespace gamemd {
int Network_SendHeartbeat(int a1, int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DF9E0)
}
}
// 0x5DFE00
namespace gamemd {
void Network_SendPlayerOptions(unsigned int * a1, int a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DFE00)
}
}
// 0x5D0590
namespace gamemd {
void nullsub_24_5D0590()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D0590)
}
} // namespace gamemd

// 0x5D30C0
namespace gamemd {
unsigned int * E4Recv_5D30C0::sub_5D30C0(wchar_t * String, unsigned int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D30C0)
}
} // namespace gamemd

// 0x5D36A0
namespace gamemd {
int sub_5D36A0(HWND hWnd, unsigned int a2, unsigned int a3, int * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D36A0)
}
} // namespace gamemd

// 0x5D37C0
namespace gamemd {
int sub_5D37C0()
{
  dword_ABFC18 = 0; /*0x5d37c2*/
  dword_ABFC1C = 0; /*0x5d37c7*/
  dword_ABFC20 = 0; /*0x5d37cc*/
  dword_ABFC24 = 0; /*0x5d37d1*/
  return 0; /*0x5d37d6*/
}
} // namespace gamemd

// 0x5D37E0
namespace gamemd {
void sub_5D37E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d37ec*/
  dbl_ABFC30 = Math::Sqrt(v0 + v0); /*0x5d37fe*/
}
} // namespace gamemd

// 0x5D3850
namespace gamemd {
void sub_5D3850()
{
  dbl_ABFC60 = 0.0174532925199433 * 45.0; /*0x5d385c*/
}
} // namespace gamemd

// 0x5D3870
namespace gamemd {
void sub_5D3870()
{
  dbl_ABFC38 = 0.0174532925199433 * 60.0; /*0x5d387c*/
}
} // namespace gamemd

// 0x5D3890
namespace gamemd {
void sub_5D3890()
{
  dbl_ABFC10 = 0.0174532925199433 * 90.0; /*0x5d389c*/
}
} // namespace gamemd

// 0x5D38B0
namespace gamemd {
long long sub_5D38B0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABFC10 - dbl_ABFC38); /*0x5d38c2*/
  result = Math::RoundToInt(v0 * dbl_ABFC30 * 0.5); /*0x5d38d6*/
  dword_ABFC88 = result; /*0x5d38db*/
  return result; /*0x5d38e0*/
}
} // namespace gamemd

// 0x5D4C90
namespace gamemd {
void sub_5D4C90()
{
  dword_ABFC90 = (int)&VectorClass_HWND_____vftable; /*0x5d4c98*/
  if ( dword_ABFC94 && byte_ABFC9D ) /*0x5d4cac*/
  {
    RA2_OPDEL(dword_ABFC94); /*0x5d4caf*/
    dword_ABFC94 = 0; /*0x5d4cb7*/
  }
  byte_ABFC9D = 0; /*0x5d4cbd*/
  dword_ABFC98 = 0; /*0x5d4cc3*/
}
} // namespace gamemd

// 0x5D4D10
namespace gamemd {
void sub_5D4D10()
{
  dword_ABFCB8 = (int)&VectorClass_AcceleratorTracker_vftable; /*0x5d4d18*/
  if ( dword_ABFCBC && byte_ABFCC5 ) /*0x5d4d2c*/
  {
    RA2_OPDEL(dword_ABFCBC); /*0x5d4d2f*/
    dword_ABFCBC = 0; /*0x5d4d37*/
  }
  byte_ABFCC5 = 0; /*0x5d4d3d*/
  dword_ABFCC0 = 0; /*0x5d4d43*/
}
} // namespace gamemd

// 0x5D5860
namespace gamemd {
void nullsub_192(int a1)
{
  ; /*0x5d5860*/
}
} // namespace gamemd

// 0x5D5890
namespace gamemd {
int timeGetTime()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D5890)
}
} // namespace gamemd

// 0x5D58A0
namespace gamemd {
int _0timeGetTime()
{
  return timeGetTime();
}
} // namespace gamemd

// 0x5D5940
namespace gamemd {
void sub_5D5940()
{
  dbl_ABFD60 = 0.0174532925199433 * 60.0; /*0x5d594c*/
}
} // namespace gamemd

// 0x5D5960
namespace gamemd {
void sub_5D5960()
{
  dbl_ABFD38 = 0.0174532925199433 * 90.0; /*0x5d596c*/
}
} // namespace gamemd

// 0x5D5980
namespace gamemd {
long long sub_5D5980()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABFD38 - dbl_ABFD60); /*0x5d5992*/
  result = Math::RoundToInt(v0 * dbl_ABFD58 * 0.5); /*0x5d59a6*/
  dword_ABFDD0 = result; /*0x5d59ab*/
  return result; /*0x5d59b0*/
}
} // namespace gamemd

// 0x5D59C0
namespace gamemd {
void sub_5D59C0()
{
  dbl_ABFD68 = Math::ArcTan((double)dword_ABFDD0 * 0.00390625); /*0x5d59d7*/
}
} // namespace gamemd

// 0x5D59F0
namespace gamemd {
void sub_5D59F0()
{
  dbl_ABFD88 = Math::ArcTan((double)(2 * dword_ABFDD0) / dbl_ABFD58); /*0x5d5a12*/
}
} // namespace gamemd

// 0x5D5A50
namespace gamemd {
int sub_5D5A50()
{
  word_ABFD50 = 0; /*0x5d5a52*/
  word_ABFD52 = 0; /*0x5d5a58*/
  return 0; /*0x5d5a5e*/
}
} // namespace gamemd

// 0x5D5A60
namespace gamemd {
int sub_5D5A60()
{
  dword_ABFD78 = 0; /*0x5d5a62*/
  dword_ABFD7C = 0; /*0x5d5a67*/
  dword_ABFD80 = 0; /*0x5d5a6c*/
  return 0; /*0x5d5a71*/
}
} // namespace gamemd

// 0x5D5A80
namespace gamemd {
int sub_5D5A80()
{
  dword_ABFDC0 = 0; /*0x5d5a85*/
  dword_ABFDB8 = 128; /*0x5d5a8f*/
  dword_ABFDBC = 128; /*0x5d5a94*/
  return 128; /*0x5d5a99*/
}
} // namespace gamemd

// 0x5D5AA0
namespace gamemd {
int sub_5D5AA0()
{
  dword_ABFD40 = 0; /*0x5d5aa2*/
  dword_ABFD44 = 0; /*0x5d5aa7*/
  dword_ABFD48 = 0; /*0x5d5aac*/
  dword_ABFD4C = 0; /*0x5d5ab1*/
  return 0; /*0x5d5ab6*/
}
} // namespace gamemd

// 0x5D7550
namespace gamemd {
int sub_5D7550(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D7550)
}
} // namespace gamemd

// 0x5D7580
namespace gamemd {
unsigned int * E4Recv_5D7580::sub_5D7580()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D7580)
}
} // namespace gamemd

// 0x5D7CD0
namespace gamemd {
void E4Recv_5D7CD0::sub_5D7CD0()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D7CD0)
}
} // namespace gamemd

// 0x5D7FF0
namespace gamemd {
unsigned int * E4Recv_5D7FF0::___Gfacet_locale_std__UAEPAXI_Z_127(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D7FF0)
}
} // namespace gamemd

// 0x5D8010
namespace gamemd {
unsigned int * E4Recv_5D8010::___Gfacet_locale_std__UAEPAXI_Z_128(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D8010)
}
} // namespace gamemd

// 0x5D8A40
namespace gamemd {
int sub_5D8A40()
{
  dword_ABFDE0 = 0; /*0x5d8a42*/
  dword_ABFDE4 = 0; /*0x5d8a47*/
  dword_ABFDE8 = 0; /*0x5d8a4c*/
  dword_ABFDEC = 0; /*0x5d8a51*/
  return 0; /*0x5d8a56*/
}
} // namespace gamemd

// 0x5D8A60
namespace gamemd {
void sub_5D8A60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d8a6c*/
  dbl_ABFDF8 = Math::Sqrt(v0 + v0); /*0x5d8a7e*/
}
} // namespace gamemd

// 0x5D8A90
namespace gamemd {
void sub_5D8A90()
{
  dbl_ABFE48 = dbl_ABFDF8 / 60.0; /*0x5d8a9c*/
}
} // namespace gamemd

// 0x5D8AB0
namespace gamemd {
void sub_5D8AB0()
{
  dbl_ABFE30 = 1.0 / dbl_ABFE48; /*0x5d8abc*/
}
} // namespace gamemd

// 0x5D8AD0
namespace gamemd {
void sub_5D8AD0()
{
  dbl_ABFE28 = 0.0174532925199433 * 45.0; /*0x5d8adc*/
}
} // namespace gamemd

// 0x5D8AF0
namespace gamemd {
void sub_5D8AF0()
{
  dbl_ABFE00 = 0.0174532925199433 * 60.0; /*0x5d8afc*/
}
} // namespace gamemd

// 0x5D8B10
namespace gamemd {
void sub_5D8B10()
{
  dbl_ABFDD8 = 0.0174532925199433 * 90.0; /*0x5d8b1c*/
}
} // namespace gamemd

// 0x5D8B30
namespace gamemd {
long long sub_5D8B30()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABFDD8 - dbl_ABFE00); /*0x5d8b42*/
  result = Math::RoundToInt(v0 * dbl_ABFDF8 * 0.5); /*0x5d8b56*/
  dword_ABFE50 = result; /*0x5d8b5b*/
  return result; /*0x5d8b60*/
}
} // namespace gamemd

// 0x5D8B70
namespace gamemd {
void sub_5D8B70()
{
  dbl_ABFE08 = Math::ArcTan((double)dword_ABFE50 * 0.00390625); /*0x5d8b87*/
}
} // namespace gamemd

// 0x5D8BA0
namespace gamemd {
void sub_5D8BA0()
{
  dbl_ABFE20 = Math::ArcTan((double)(2 * dword_ABFE50) / dbl_ABFDF8); /*0x5d8bc2*/
}
} // namespace gamemd

// 0x5D8BD0
namespace gamemd {
long long sub_5D8BD0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFE50) + 0.5); /*0x5d8beb*/
  dword_ABFE44 = result; /*0x5d8bf0*/
  return result; /*0x5d8bf6*/
}
} // namespace gamemd

// 0x5D8C00
namespace gamemd {
int sub_5D8C00()
{
  word_ABFDF0 = 0; /*0x5d8c02*/
  word_ABFDF2 = 0; /*0x5d8c08*/
  return 0; /*0x5d8c0e*/
}
} // namespace gamemd

// 0x5D8C10
namespace gamemd {
int sub_5D8C10()
{
  dword_ABFE10 = 0; /*0x5d8c12*/
  dword_ABFE14 = 0; /*0x5d8c17*/
  dword_ABFE18 = 0; /*0x5d8c1c*/
  return 0; /*0x5d8c21*/
}
} // namespace gamemd

// 0x5D8C30
namespace gamemd {
int sub_5D8C30()
{
  dword_ABFE40 = 0; /*0x5d8c35*/
  dword_ABFE38 = 128; /*0x5d8c3f*/
  dword_ABFE3C = 128; /*0x5d8c44*/
  return 128; /*0x5d8c49*/
}
} // namespace gamemd

// 0x5D8D80
namespace gamemd {
void sub_5D8D80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5d8d8c*/
  dbl_ABFE78 = Math::Sqrt(v0 + v0); /*0x5d8d9e*/
}
} // namespace gamemd

// 0x5D8DB0
namespace gamemd {
void sub_5D8DB0()
{
  dbl_ABFEE0 = dbl_ABFE78 / 60.0; /*0x5d8dbc*/
}
} // namespace gamemd

// 0x5D8DD0
namespace gamemd {
void sub_5D8DD0()
{
  dbl_ABFEB0 = 1.0 / dbl_ABFEE0; /*0x5d8ddc*/
}
} // namespace gamemd

// 0x5D8DF0
namespace gamemd {
void sub_5D8DF0()
{
  dbl_ABFEA8 = 0.0174532925199433 * 45.0; /*0x5d8dfc*/
}
} // namespace gamemd

// 0x5D8E10
namespace gamemd {
void sub_5D8E10()
{
  dbl_ABFE80 = 0.0174532925199433 * 60.0; /*0x5d8e1c*/
}
} // namespace gamemd

// 0x5D8E30
namespace gamemd {
void sub_5D8E30()
{
  dbl_ABFE58 = 0.0174532925199433 * 90.0; /*0x5d8e3c*/
}
} // namespace gamemd

// 0x5D8E50
namespace gamemd {
long long sub_5D8E50()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABFE58 - dbl_ABFE80); /*0x5d8e62*/
  result = Math::RoundToInt(v0 * dbl_ABFE78 * 0.5); /*0x5d8e76*/
  dword_ABFEE8 = result; /*0x5d8e7b*/
  return result; /*0x5d8e80*/
}
} // namespace gamemd

// 0x5D8E90
namespace gamemd {
void sub_5D8E90()
{
  dbl_ABFE88 = Math::ArcTan((double)dword_ABFEE8 * 0.00390625); /*0x5d8ea7*/
}
} // namespace gamemd

// 0x5D8EC0
namespace gamemd {
void sub_5D8EC0()
{
  dbl_ABFEA0 = Math::ArcTan((double)(2 * dword_ABFEE8) / dbl_ABFE78); /*0x5d8ee2*/
}
} // namespace gamemd

// 0x5D8EF0
namespace gamemd {
long long sub_5D8EF0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFEE8) + 0.5); /*0x5d8f0b*/
  dword_ABFEDC = result; /*0x5d8f10*/
  return result; /*0x5d8f16*/
}
} // namespace gamemd

// 0x5D8F20
namespace gamemd {
int sub_5D8F20()
{
  word_ABFE70 = 0; /*0x5d8f22*/
  word_ABFE72 = 0; /*0x5d8f28*/
  return 0; /*0x5d8f2e*/
}
} // namespace gamemd

// 0x5D8F30
namespace gamemd {
int sub_5D8F30()
{
  dword_ABFE90 = 0; /*0x5d8f32*/
  dword_ABFE94 = 0; /*0x5d8f37*/
  dword_ABFE98 = 0; /*0x5d8f3c*/
  return 0; /*0x5d8f41*/
}
} // namespace gamemd

// 0x5D8F50
namespace gamemd {
int sub_5D8F50()
{
  dword_ABFEC0 = 0; /*0x5d8f55*/
  dword_ABFEB8 = 128; /*0x5d8f5f*/
  dword_ABFEBC = 128; /*0x5d8f64*/
  return 128; /*0x5d8f69*/
}
} // namespace gamemd

// 0x5D8F70
namespace gamemd {
int sub_5D8F70()
{
  dword_ABFE60 = 0; /*0x5d8f72*/
  dword_ABFE64 = 0; /*0x5d8f77*/
  dword_ABFE68 = 0; /*0x5d8f7c*/
  dword_ABFE6C = 0; /*0x5d8f81*/
  return 0; /*0x5d8f86*/
}
} // namespace gamemd

// 0x5D8F90
namespace gamemd {
int sub_5D8F90()
{
  dword_ABFEC8 = 0; /*0x5d8f92*/
  dword_ABFECC = 0; /*0x5d8f97*/
  dword_ABFED0 = 0; /*0x5d8f9c*/
  dword_ABFED4 = 0; /*0x5d8fa1*/
  return 0; /*0x5d8fa6*/
}
} // namespace gamemd

// 0x5D8FB0
namespace gamemd {
unsigned int * E4Recv_5D8FB0::sub_5D8FB0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D8FB0)
}
} // namespace gamemd

// 0x5D8FC0
namespace gamemd {
void E4Recv_5D8FC0::__Release__NonReentrantLock_details_Concurrency__QAEXXZ()
{

  *(unsigned int *)this = 0; /*0x5d8fc0*/

}
} // namespace gamemd

// 0x5DA4B0
namespace gamemd {
int sub_5DA4B0()
{
  dword_ABFEF8 = 0; /*0x5da4b2*/
  dword_ABFEFC = 0; /*0x5da4b7*/
  dword_ABFF00 = 0; /*0x5da4bc*/
  dword_ABFF04 = 0; /*0x5da4c1*/
  return 0; /*0x5da4c6*/
}
} // namespace gamemd

// 0x5DA4D0
namespace gamemd {
void sub_5DA4D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5da4dc*/
  dbl_ABFF10 = Math::Sqrt(v0 + v0); /*0x5da4ee*/
}
} // namespace gamemd

// 0x5DA500
namespace gamemd {
void sub_5DA500()
{
  dbl_ABFF60 = dbl_ABFF10 / 60.0; /*0x5da50c*/
}
} // namespace gamemd

// 0x5DA520
namespace gamemd {
void sub_5DA520()
{
  dbl_ABFF48 = 1.0 / dbl_ABFF60; /*0x5da52c*/
}
} // namespace gamemd

// 0x5DA540
namespace gamemd {
void sub_5DA540()
{
  dbl_ABFF40 = 0.0174532925199433 * 45.0; /*0x5da54c*/
}
} // namespace gamemd

// 0x5DA560
namespace gamemd {
void sub_5DA560()
{
  dbl_ABFF18 = 0.0174532925199433 * 60.0; /*0x5da56c*/
}
} // namespace gamemd

// 0x5DA580
namespace gamemd {
void sub_5DA580()
{
  dbl_ABFEF0 = 0.0174532925199433 * 90.0; /*0x5da58c*/
}
} // namespace gamemd

// 0x5DA5A0
namespace gamemd {
long long sub_5DA5A0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABFEF0 - dbl_ABFF18); /*0x5da5b2*/
  result = Math::RoundToInt(v0 * dbl_ABFF10 * 0.5); /*0x5da5c6*/
  dword_ABFF68 = result; /*0x5da5cb*/
  return result; /*0x5da5d0*/
}
} // namespace gamemd

// 0x5DA5E0
namespace gamemd {
void sub_5DA5E0()
{
  dbl_ABFF20 = Math::ArcTan((double)dword_ABFF68 * 0.00390625); /*0x5da5f7*/
}
} // namespace gamemd

// 0x5DA610
namespace gamemd {
void sub_5DA610()
{
  dbl_ABFF38 = Math::ArcTan((double)(2 * dword_ABFF68) / dbl_ABFF10); /*0x5da632*/
}
} // namespace gamemd

// 0x5DA640
namespace gamemd {
long long sub_5DA640()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFF68) + 0.5); /*0x5da65b*/
  dword_ABFF5C = result; /*0x5da660*/
  return result; /*0x5da666*/
}
} // namespace gamemd

// 0x5DA670
namespace gamemd {
int sub_5DA670()
{
  word_ABFF08 = 0; /*0x5da672*/
  word_ABFF0A = 0; /*0x5da678*/
  return 0; /*0x5da67e*/
}
} // namespace gamemd

// 0x5DA680
namespace gamemd {
int sub_5DA680()
{
  dword_ABFF28 = 0; /*0x5da682*/
  dword_ABFF2C = 0; /*0x5da687*/
  dword_ABFF30 = 0; /*0x5da68c*/
  return 0; /*0x5da691*/
}
} // namespace gamemd

// 0x5DA6A0
namespace gamemd {
int sub_5DA6A0()
{
  dword_ABFF58 = 0; /*0x5da6a5*/
  dword_ABFF50 = 128; /*0x5da6af*/
  dword_ABFF54 = 128; /*0x5da6b4*/
  return 128; /*0x5da6b9*/
}
} // namespace gamemd

// 0x5DAB80
namespace gamemd {
int E4Recv_5DAB80::sub_5DAB80()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DAB80)
}
} // namespace gamemd

// 0x5DACD0
namespace gamemd {
int sub_5DACD0()
{
  dword_AC01A8 = 0; /*0x5dacd2*/
  dword_AC01AC = 0; /*0x5dacd7*/
  dword_AC01B0 = 0; /*0x5dacdc*/
  dword_AC01B4 = 0; /*0x5dace1*/
  return 0; /*0x5dace6*/
}
} // namespace gamemd

// 0x5DACF0
namespace gamemd {
void sub_5DACF0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5dacfc*/
  dbl_AC01C0 = Math::Sqrt(v0 + v0); /*0x5dad0e*/
}
} // namespace gamemd

// 0x5DAD20
namespace gamemd {
void sub_5DAD20()
{
  dbl_AC0250 = dbl_AC01C0 / 60.0; /*0x5dad2c*/
}
} // namespace gamemd

// 0x5DAD40
namespace gamemd {
void sub_5DAD40()
{
  dbl_AC0218 = 1.0 / dbl_AC0250; /*0x5dad4c*/
}
} // namespace gamemd

// 0x5DAD60
namespace gamemd {
void sub_5DAD60()
{
  dbl_AC0210 = 0.0174532925199433 * 45.0; /*0x5dad6c*/
}
} // namespace gamemd

// 0x5DAD80
namespace gamemd {
void sub_5DAD80()
{
  dbl_AC01C8 = 0.0174532925199433 * 60.0; /*0x5dad8c*/
}
} // namespace gamemd

// 0x5DADA0
namespace gamemd {
void sub_5DADA0()
{
  dbl_AC0198 = 0.0174532925199433 * 90.0; /*0x5dadac*/
}
} // namespace gamemd

// 0x5DADC0
namespace gamemd {
long long sub_5DADC0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC0198 - dbl_AC01C8); /*0x5dadd2*/
  result = Math::RoundToInt(v0 * dbl_AC01C0 * 0.5); /*0x5dade6*/
  dword_AC0258 = result; /*0x5dadeb*/
  return result; /*0x5dadf0*/
}
} // namespace gamemd

// 0x5DAE00
namespace gamemd {
void sub_5DAE00()
{
  dbl_AC01D8 = Math::ArcTan((double)dword_AC0258 * 0.00390625); /*0x5dae17*/
}
} // namespace gamemd

// 0x5DAE30
namespace gamemd {
void sub_5DAE30()
{
  dbl_AC01F8 = Math::ArcTan((double)(2 * dword_AC0258) / dbl_AC01C0); /*0x5dae52*/
}
} // namespace gamemd

// 0x5DAE60
namespace gamemd {
long long sub_5DAE60()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC0258) + 0.5); /*0x5dae7b*/
  dword_AC024C = result; /*0x5dae80*/
  return result; /*0x5dae86*/
}
} // namespace gamemd

// 0x5DAE90
namespace gamemd {
int sub_5DAE90()
{
  word_AC01B8 = 0; /*0x5dae92*/
  word_AC01BA = 0; /*0x5dae98*/
  return 0; /*0x5dae9e*/
}
} // namespace gamemd

// 0x5DAEA0
namespace gamemd {
int sub_5DAEA0()
{
  dword_AC01E8 = 0; /*0x5daea2*/
  dword_AC01EC = 0; /*0x5daea7*/
  dword_AC01F0 = 0; /*0x5daeac*/
  return 0; /*0x5daeb1*/
}
} // namespace gamemd

// 0x5DAEC0
namespace gamemd {
int sub_5DAEC0()
{
  dword_AC0248 = 0; /*0x5daec5*/
  dword_AC0240 = 128; /*0x5daecf*/
  dword_AC0244 = 128; /*0x5daed4*/
  return 128; /*0x5daed9*/
}
} // namespace gamemd

// 0x5DAEE0
namespace gamemd {
int sub_5DAEE0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DAEE0)
}
} // namespace gamemd

// 0x5DAF10
namespace gamemd {
void nullsub_194()
{
  ; /*0x5daf10*/
}
} // namespace gamemd

// 0x5DAF20
namespace gamemd {
unsigned char sub_5DAF20()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DAF20)
}
} // namespace gamemd

// 0x5DB680
namespace gamemd {
char InitNetworkGameState()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DB680)
}
} // namespace gamemd

// 0x5DE360
namespace gamemd {
char SendNetworkLobbyChatMessage(HWND hWnd, LPARAM, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DE360)
}
} // namespace gamemd

// 0x5DF8C0
namespace gamemd {
int Network_BroadcastMessage(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DF8C0)
}
} // namespace gamemd

// 0x5DFDD0
namespace gamemd {
void nullsub_25()
{
  ; /*0x5dfdd0*/
}
} // namespace gamemd

// 0x5DFDE0
namespace gamemd {
void nullsub_26()
{
  ; /*0x5dfde0*/
}
} // namespace gamemd

// 0x5DFDF0
namespace gamemd {
void nullsub_27()
{
  ; /*0x5dfdf0*/
}
} // namespace gamemd
