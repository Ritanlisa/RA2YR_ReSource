// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/ComPtr_e4.hpp"

#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6A04C0_e4.hpp"
#include "e4/classes/E4Recv_6A6AF0_e4.hpp"
#include "e4/classes/E4Recv_6A74A0_e4.hpp"
#include "e4/classes/E4Recv_6A87F0_e4.hpp"
#include "e4/classes/E4Recv_6A89E0_e4.hpp"
#include "e4/classes/E4Recv_6A93F0_e4.hpp"
#include "e4/classes/E4Recv_6AACE0_e4.hpp"
#include "e4/classes/E4Recv_6ABA60_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/GameSettings_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/E4Recv_690400_e4.hpp"
#include "e4/classes/VoxClass_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/Hash_e4.hpp"
#include "e4/classes/TabCameoListClass_e4.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/CrateClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/MapClass_e4.hpp"  // G42.36 C2027 supply

// 0x6A6AF0
namespace gamemd {
int E4Recv_6A6AF0::sub_6A6AF0(ObjectClass * aP1, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A6AF0)
}
}
// 0x6A74A0
namespace gamemd {
int E4Recv_6A74A0::sub_6A74A0(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A74A0)
}
}
// 0x6A87F0
namespace gamemd {
int E4Recv_6A87F0::sub_6A87F0(int a2, int a3)
{

  int v4; // edx
  int v5; // ecx
  int *v6; // eax

  v4 = (&this->customSound_controller)[1]; /*0x6a87f5*/
  if ( v4 > 75 ) /*0x6a87fb*/
    return 0; /*0x6a8857*/
  v5 = 0; /*0x6a8805*/
  if ( v4 > 0 ) /*0x6a8809*/
  {
    v6 =(int *)&(&this->customSound_controller)[2]; /*0x6a880b*/
    while ( v6[1] != a2 || *v6 != a3 ) /*0x6a8815*/
    {
      ++v5; /*0x6a8817*/
      v6 += 13; /*0x6a8818*/
      if ( v5 >= v4 ) /*0x6a881d*/
        goto LABEL_7; /*0x6a881d*/
    }
    return 0; /*0x6a8815*/
  }
LABEL_7:
  if ( !dword_A8E7AC && a2 != 31 ) /*0x6a882b*/
    ((VoxClass *)(&stru_83FA64))->FindAndPlay(-1); /*0x6a8837*/
  ((TabCameoListClass *)((TabCameoListClass *)this))->AddCameo_ReplaceItAll(a2, a3); /*0x6a8840*/
  LOBYTE((&this->ambientSoundController)[0]) = 1; /*0x6a8848*/
  g_CameoRenderFlag = 1; /*0x6a884c*/
  return 1; /*0x6a8847*/

}
}
// 0x6A89E0
namespace gamemd {
int E4Recv_6A89E0::sub_6A89E0(char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A89E0)
}
}
// 0x6A93F0
namespace gamemd {
BombClass * * E4Recv_6A93F0::sub_6A93F0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A93F0)
}
}
// 0x6ACBAE
namespace gamemd {
void* __inc_tmpoff()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6ACBAE)
}
}
// 0x6ADC20
namespace gamemd {
int SetupSkirmishSpawnLocationEntry(SessionClass * hDlg, int nIDDlgItem)
{
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int ResourceIDCSF; // ebx
  int v8; // eax
  int v9; // ebx
  char *i; // edi
  int v11; // eax
  LRESULT v12; // eax
  HWND DlgItem; // ebx
  HWND v14; // ebp
  int nIDDlgItema; // [esp+10h] [ebp-10h]
  HWND hWnd; // [esp+14h] [ebp-Ch]
  HWND hWnda; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  uint8_t v20; // [esp+18h] [ebp-8h]
  HWND ResourceID4CSF; // [esp+1Ch] [ebp-4h]
  HWND v22; // [esp+1Ch] [ebp-4h]

  switch ( nIDDlgItem ) /*0x6adc31*/
  {
    case 1291: /*0x6adc31*/
      v4 = 0; /*0x6adc33*/
      break;
    case 1294: /*0x6adc31*/
      v4 = 1; /*0x6adc3f*/
      break;
    case 1302: /*0x6adc31*/
      v4 = 2; /*0x6adc4e*/
      break;
    case 1306: /*0x6adc31*/
      v4 = 3; /*0x6adc5d*/
      break;
    case 1307: /*0x6adc31*/
      v4 = 4; /*0x6adc6c*/
      break;
    case 1308: /*0x6adc31*/
      v4 = 5; /*0x6adc7b*/
      break;
    default:
      v5 = -(nIDDlgItem != 1309); /*0x6adc8b*/
      IDA_LOBYTE(v5) = v5 & 0xF9; /*0x6adc8d*/
      v4 = v5 + 6; /*0x6adc8f*/
      break;
  }
  v6 = v4 + 1; /*0x6adc92*/
  ResourceIDCSF = GetResourceIDCSF((int)((void *)(v4 + 1))); /*0x6adc9c*/
  v19 = ResourceIDCSF; /*0x6adca0*/
  nIDDlgItema = GetResourceID2CSF((int)((void *)v6)); /*0x6adcab*/
  hWnd = (HWND)GetResourceID3CSF((int)((void *)v6)); /*0x6adcb6*/
  ResourceID4CSF = (HWND)GetResourceID4CSF((int)((void *)v6)); /*0x6adcc1*/
  if ( hDlg && dword_A8B23C ) /*0x6adcce*/
  {
    v8 = 1; /*0x6adcd2*/
    v9 = 8; /*0x6adcd7*/
    if ( v6 > 0 && v6 < 8 ) /*0x6adce0*/
    {
      v8 = v6; /*0x6adce2*/
      v9 = v6 + 1; /*0x6adce4*/
    }
    for ( i = (char *)v8; (int)i < v9; ++i ) /*0x6adceb*/
    {
      v11 = GetResourceID4CSF((int)(i)); /*0x6adcef*/
      if ( dword_A8B23C && *(unsigned char *)(dword_A8B23C + 60) ) /*0x6adcfe*/
        SetupLobbyPlayerSlots(hDlg, v11, 3); /*0x6add07*/
      else
        SetupLobbyPlayerSlots(hDlg, v11, -2); /*0x6add0f*/
    }
    ResourceIDCSF = v19; /*0x6add19*/
  }
  v12 = SendDlgItemMessageA((HWND)(hDlg), nIDDlgItem, 0x147u, 0, 0); /*0x6add2e*/
  if ( (unsigned int)SendDlgItemMessageA((HWND)(hDlg), nIDDlgItem, 0x150u, v12, 0) <= 2 ) /*0x6add3e*/
  {
    v20 = 1; /*0x6addde*/
  }
  else
  {
    v20 = 0; /*0x6add5c*/
    SetupSkirmishSpawnLocations((HWND)(hDlg), ResourceIDCSF, -2); /*0x6add61*/
    SetupLobbyCountryCombo((HWND)(hDlg), nIDDlgItema, -2); /*0x6add6e*/
    SetupLobbyFactionSlots((HWND)(hDlg), (int)hWnd, -2); /*0x6add7b*/
  }
  DlgItem = GetDlgItem((HWND)(hDlg), ResourceIDCSF); /*0x6add8a*/
  v14 = GetDlgItem((HWND)(hDlg), nIDDlgItema); /*0x6add94*/
  hWnda = GetDlgItem((HWND)(hDlg), (int)hWnd); /*0x6adda2*/
  v22 = GetDlgItem((HWND)(hDlg), (int)ResourceID4CSF); /*0x6addb4*/
  EnableWindow(DlgItem, v20); /*0x6addc0*/
  EnableWindow(v14, v20); /*0x6addc4*/
  EnableWindow(hWnda, v20); /*0x6addcc*/
  return EnableWindow(v22, v20); /*0x6addd6*/
}
}
// 0x6AE080
namespace gamemd {
void HideSkirmishSpawnLocations(HWND hDlg, int a2)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6AE080)
}
}
// 0x6AE2C0
namespace gamemd {
bool ShowSkirmishSetupScreen(void * a1, void * a2)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6AE2C0)
}
}
// 0x6AFD60
namespace gamemd {
int TechnoClass::ProcessDeployAction()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6AFD60)
}
} // namespace ra2

// 0x6A04C0
namespace gamemd {
char E4Recv_6A04C0::sub_6A04C0(IUnknown * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A04C0)
}
} // namespace gamemd

// 0x6A3DA0
namespace gamemd {
void nullsub_230()
{
  ; /*0x6a3da0*/
}
} // namespace gamemd

// 0x6A4360
namespace gamemd {
void sub_6A4360()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6a436c*/
  dbl_B07850 = Math::Sqrt(v0 + v0); /*0x6a437e*/
}
} // namespace gamemd

// 0x6A4390
namespace gamemd {
void sub_6A4390()
{
  dbl_B078A0 = dbl_B07850 / 60.0; /*0x6a439c*/
}
} // namespace gamemd

// 0x6A43B0
namespace gamemd {
void sub_6A43B0()
{
  dbl_B07888 = 1.0 / dbl_B078A0; /*0x6a43bc*/
}
} // namespace gamemd

// 0x6A43D0
namespace gamemd {
void sub_6A43D0()
{
  dbl_B07880 = 0.0174532925199433 * 45.0; /*0x6a43dc*/
}
} // namespace gamemd

// 0x6A43F0
namespace gamemd {
void sub_6A43F0()
{
  dbl_B07858 = 0.0174532925199433 * 60.0; /*0x6a43fc*/
}
} // namespace gamemd

// 0x6A4410
namespace gamemd {
void sub_6A4410()
{
  dbl_B07840 = 0.0174532925199433 * 90.0; /*0x6a441c*/
}
} // namespace gamemd

// 0x6A4430
namespace gamemd {
long long sub_6A4430()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B07840 - dbl_B07858); /*0x6a4442*/
  result = Math::RoundToInt(v0 * dbl_B07850 * 0.5); /*0x6a4456*/
  dword_B078A8 = result; /*0x6a445b*/
  return result; /*0x6a4460*/
}
} // namespace gamemd

// 0x6A4470
namespace gamemd {
void sub_6A4470()
{
  dbl_B07860 = Math::ArcTan((double)dword_B078A8 * 0.00390625); /*0x6a4487*/
}
} // namespace gamemd

// 0x6A44A0
namespace gamemd {
void sub_6A44A0()
{
  dbl_B07878 = Math::ArcTan((double)(2 * dword_B078A8) / dbl_B07850); /*0x6a44c2*/
}
} // namespace gamemd

// 0x6A44D0
namespace gamemd {
long long sub_6A44D0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B078A8) + 0.5); /*0x6a44eb*/
  dword_B0789C = result; /*0x6a44f0*/
  return result; /*0x6a44f6*/
}
} // namespace gamemd

// 0x6A4500
namespace gamemd {
int sub_6A4500()
{
  word_B07848 = 0; /*0x6a4502*/
  word_B0784A = 0; /*0x6a4508*/
  return 0; /*0x6a450e*/
}
} // namespace gamemd

// 0x6A4510
namespace gamemd {
int sub_6A4510()
{
  dword_B07868 = 0; /*0x6a4512*/
  dword_B0786C = 0; /*0x6a4517*/
  dword_B07870 = 0; /*0x6a451c*/
  return 0; /*0x6a4521*/
}
} // namespace gamemd

// 0x6A4530
namespace gamemd {
int sub_6A4530()
{
  dword_B07898 = 0; /*0x6a4535*/
  dword_B07890 = 128; /*0x6a453f*/
  dword_B07894 = 128; /*0x6a4544*/
  return 128; /*0x6a4549*/
}
} // namespace gamemd

// 0x6A4A00
namespace gamemd {
int sub_6A4A00()
{
  dword_B07DC8 = 0; /*0x6a4a02*/
  dword_B07DCC = 0; /*0x6a4a07*/
  dword_B07DD0 = 0; /*0x6a4a0c*/
  dword_B07DD4 = 0; /*0x6a4a11*/
  return 0; /*0x6a4a16*/
}
} // namespace gamemd

// 0x6A4A20
namespace gamemd {
void sub_6A4A20()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6a4a2c*/
  dbl_B07DE0 = Math::Sqrt(v0 + v0); /*0x6a4a3e*/
}
} // namespace gamemd

// 0x6A4A50
namespace gamemd {
void sub_6A4A50()
{
  dbl_B0B398 = dbl_B07DE0 / 60.0; /*0x6a4a5c*/
}
} // namespace gamemd

// 0x6A4A70
namespace gamemd {
void sub_6A4A70()
{
  dbl_B0B320 = 1.0 / dbl_B0B398; /*0x6a4a7c*/
}
} // namespace gamemd

// 0x6A4A90
namespace gamemd {
void sub_6A4A90()
{
  dbl_B0B318 = 0.0174532925199433 * 45.0; /*0x6a4a9c*/
}
} // namespace gamemd

// 0x6A4AB0
namespace gamemd {
void sub_6A4AB0()
{
  dbl_B07DE8 = 0.0174532925199433 * 60.0; /*0x6a4abc*/
}
} // namespace gamemd

// 0x6A4AD0
namespace gamemd {
void sub_6A4AD0()
{
  dbl_B07BB8 = 0.0174532925199433 * 90.0; /*0x6a4adc*/
}
} // namespace gamemd

// 0x6A4AF0
namespace gamemd {
long long sub_6A4AF0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B07BB8 - dbl_B07DE8); /*0x6a4b02*/
  result = Math::RoundToInt(v0 * dbl_B07DE0 * 0.5); /*0x6a4b16*/
  dword_B0B400 = result; /*0x6a4b1b*/
  return result; /*0x6a4b20*/
}
} // namespace gamemd

// 0x6A4B30
namespace gamemd {
void sub_6A4B30()
{
  dbl_B07DF0 = Math::ArcTan((double)dword_B0B400 * 0.00390625); /*0x6a4b47*/
}
} // namespace gamemd

// 0x6A4B60
namespace gamemd {
void sub_6A4B60()
{
  dbl_B0B310 = Math::ArcTan((double)(2 * dword_B0B400) / dbl_B07DE0); /*0x6a4b82*/
}
} // namespace gamemd

// 0x6A4B90
namespace gamemd {
long long sub_6A4B90()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B400) + 0.5); /*0x6a4bab*/
  dword_B0B394 = result; /*0x6a4bb0*/
  return result; /*0x6a4bb6*/
}
} // namespace gamemd

// 0x6A4BC0
namespace gamemd {
int sub_6A4BC0()
{
  word_B07DD8 = 0; /*0x6a4bc2*/
  word_B07DDA = 0; /*0x6a4bc8*/
  return 0; /*0x6a4bce*/
}
} // namespace gamemd

// 0x6A4BD0
namespace gamemd {
int sub_6A4BD0()
{
  dword_B0B300 = 0; /*0x6a4bd2*/
  dword_B0B304 = 0; /*0x6a4bd7*/
  dword_B0B308 = 0; /*0x6a4bdc*/
  return 0; /*0x6a4be1*/
}
} // namespace gamemd

// 0x6A4BF0
namespace gamemd {
int sub_6A4BF0()
{
  dword_B0B390 = 0; /*0x6a4bf5*/
  dword_B0B388 = 128; /*0x6a4bff*/
  dword_B0B38C = 128; /*0x6a4c04*/
  return 128; /*0x6a4c09*/
}
} // namespace gamemd

// 0x6A4C10
namespace gamemd {
int sub_6A4C10()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4C10)
}
} // namespace gamemd

// 0x6A4C40
namespace gamemd {
void sub_6A4C40()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4C40)
}
} // namespace gamemd

// 0x6A4C60
namespace gamemd {
int sub_6A4C60()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4C60)
}
} // namespace gamemd

// 0x6A4C80
namespace gamemd {
void sub_6A4C80()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4C80)
}
} // namespace gamemd

// 0x6A4CA0
namespace gamemd {
int sub_6A4CA0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4CA0)
}
} // namespace gamemd

// 0x6A4CC0
namespace gamemd {
void sub_6A4CC0()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4CC0)
}
} // namespace gamemd

// 0x6A4CE0
namespace gamemd {
int sub_6A4CE0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4CE0)
}
} // namespace gamemd

// 0x6A4D10
namespace gamemd {
void sub_6A4D10()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4D10)
}
} // namespace gamemd

// 0x6A4D40
namespace gamemd {
int sub_6A4D40()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4D40)
}
} // namespace gamemd

// 0x6A4D60
namespace gamemd {
void sub_6A4D60()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4D60)
}
} // namespace gamemd

// 0x6A4D80
namespace gamemd {
int sub_6A4D80()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4D80)
}
} // namespace gamemd

// 0x6A4DA0
namespace gamemd {
void sub_6A4DA0()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4DA0)
}
} // namespace gamemd

// 0x6A4DC0
namespace gamemd {
int sub_6A4DC0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4DC0)
}
} // namespace gamemd

// 0x6A4E10
namespace gamemd {
void sub_6A4E10()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4E10)
}
} // namespace gamemd

// 0x6A4FF0
namespace gamemd {
void nullsub_36(IUnknown * aP0)
{
  ; /*0x6a4ff0*/
}
} // namespace gamemd

// 0x6AACE0
namespace gamemd {
int E4Recv_6AACE0::sub_6AACE0(int a2, int a3)
{

  this->M44 = a2; /*0x6aace8*/
  this->M48 = a3; /*0x6aaceb*/
  return a2; /*0x6aacee*/

}
} // namespace gamemd

// 0x6ABA60
namespace gamemd {
char E4Recv_6ABA60::sub_6ABA60(int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6ABA60)
}
} // namespace gamemd

// 0x6ABCD0
namespace gamemd {
int sub_6ABCD0(int a1, int a2, int a3)
{
  switch ( a1 ) /*0x6abcd3*/
  {
    case 16: /*0x6abcd3*/
      return 2; /*0x6abcd5*/
    case 40: /*0x6abcd3*/
    case 3: /*0x6abcd3*/
      return 3; /*0x6abcfd*/
    case 7: /*0x6abcd3*/
      return a2 == 5; /*0x6abcf1*/
  }
  return -1; /*0x6abcda*/
}
} // namespace gamemd

// 0x6AC950
namespace gamemd {
int sub_6AC950()
{
  dword_B0B528 = 0; /*0x6ac952*/
  dword_B0B52C = 0; /*0x6ac957*/
  dword_B0B530 = 0; /*0x6ac95c*/
  dword_B0B534 = 0; /*0x6ac961*/
  return 0; /*0x6ac966*/
}
} // namespace gamemd

// 0x6AC970
namespace gamemd {
void sub_6AC970()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6ac97c*/
  dbl_B0B540 = Math::Sqrt(v0 + v0); /*0x6ac98e*/
}
} // namespace gamemd

// 0x6AC9A0
namespace gamemd {
void sub_6AC9A0()
{
  dbl_B0B590 = dbl_B0B540 / 60.0; /*0x6ac9ac*/
}
} // namespace gamemd

// 0x6AC9C0
namespace gamemd {
void sub_6AC9C0()
{
  dbl_B0B578 = 1.0 / dbl_B0B590; /*0x6ac9cc*/
}
} // namespace gamemd

// 0x6AC9E0
namespace gamemd {
void sub_6AC9E0()
{
  dbl_B0B570 = 0.0174532925199433 * 45.0; /*0x6ac9ec*/
}
} // namespace gamemd

// 0x6ACA00
namespace gamemd {
void sub_6ACA00()
{
  dbl_B0B548 = 0.0174532925199433 * 60.0; /*0x6aca0c*/
}
} // namespace gamemd

// 0x6ACA20
namespace gamemd {
void sub_6ACA20()
{
  dbl_B0B520 = 0.0174532925199433 * 90.0; /*0x6aca2c*/
}
} // namespace gamemd

// 0x6ACA40
namespace gamemd {
long long sub_6ACA40()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0B520 - dbl_B0B548); /*0x6aca52*/
  result = Math::RoundToInt(v0 * dbl_B0B540 * 0.5); /*0x6aca66*/
  dword_B0B598 = result; /*0x6aca6b*/
  return result; /*0x6aca70*/
}
} // namespace gamemd

// 0x6ACA80
namespace gamemd {
void sub_6ACA80()
{
  dbl_B0B550 = Math::ArcTan((double)dword_B0B598 * 0.00390625); /*0x6aca97*/
}
} // namespace gamemd

// 0x6ACAB0
namespace gamemd {
void sub_6ACAB0()
{
  dbl_B0B568 = Math::ArcTan((double)(2 * dword_B0B598) / dbl_B0B540); /*0x6acad2*/
}
} // namespace gamemd

// 0x6ACAE0
namespace gamemd {
long long sub_6ACAE0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B598) + 0.5); /*0x6acafb*/
  dword_B0B58C = result; /*0x6acb00*/
  return result; /*0x6acb06*/
}
} // namespace gamemd

// 0x6ACB10
namespace gamemd {
int sub_6ACB10()
{
  word_B0B538 = 0; /*0x6acb12*/
  word_B0B53A = 0; /*0x6acb18*/
  return 0; /*0x6acb1e*/
}
} // namespace gamemd

// 0x6ACB20
namespace gamemd {
int sub_6ACB20()
{
  dword_B0B558 = 0; /*0x6acb22*/
  dword_B0B55C = 0; /*0x6acb27*/
  dword_B0B560 = 0; /*0x6acb2c*/
  return 0; /*0x6acb31*/
}
} // namespace gamemd

// 0x6ACB40
namespace gamemd {
int sub_6ACB40()
{
  dword_B0B588 = 0; /*0x6acb45*/
  dword_B0B580 = 128; /*0x6acb4f*/
  dword_B0B584 = 128; /*0x6acb54*/
  return 128; /*0x6acb59*/
}
} // namespace gamemd

// 0x6ACE80
namespace gamemd {
void sub_6ACE80(SessionClass * hDlg, int a2)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6ACE80)
}
} // namespace gamemd

// 0x6AEF10
namespace gamemd {
void sub_6AEF10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6aef1c*/
  dbl_B0B5C0 = Math::Sqrt(v0 + v0); /*0x6aef2e*/
}
} // namespace gamemd

// 0x6AEF40
namespace gamemd {
void sub_6AEF40()
{
  dbl_B0B628 = dbl_B0B5C0 / 60.0; /*0x6aef4c*/
}
} // namespace gamemd

// 0x6AEF60
namespace gamemd {
void sub_6AEF60()
{
  dbl_B0B610 = 1.0 / dbl_B0B628; /*0x6aef6c*/
}
} // namespace gamemd

// 0x6AEF80
namespace gamemd {
void sub_6AEF80()
{
  dbl_B0B608 = 0.0174532925199433 * 45.0; /*0x6aef8c*/
}
} // namespace gamemd

// 0x6AEFA0
namespace gamemd {
void sub_6AEFA0()
{
  dbl_B0B5C8 = 0.0174532925199433 * 60.0; /*0x6aefac*/
}
} // namespace gamemd

// 0x6AEFC0
namespace gamemd {
void sub_6AEFC0()
{
  dbl_B0B5A0 = 0.0174532925199433 * 90.0; /*0x6aefcc*/
}
} // namespace gamemd

// 0x6AEFE0
namespace gamemd {
long long sub_6AEFE0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0B5A0 - dbl_B0B5C8); /*0x6aeff2*/
  result = Math::RoundToInt(v0 * dbl_B0B5C0 * 0.5); /*0x6af006*/
  dword_B0B630 = result; /*0x6af00b*/
  return result; /*0x6af010*/
}
} // namespace gamemd

// 0x6AF020
namespace gamemd {
void sub_6AF020()
{
  dbl_B0B5D0 = Math::ArcTan((double)dword_B0B630 * 0.00390625); /*0x6af037*/
}
} // namespace gamemd

// 0x6AF050
namespace gamemd {
void sub_6AF050()
{
  dbl_B0B5E8 = Math::ArcTan((double)(2 * dword_B0B630) / dbl_B0B5C0); /*0x6af072*/
}
} // namespace gamemd

// 0x6AF080
namespace gamemd {
long long sub_6AF080()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B630) + 0.5); /*0x6af09b*/
  dword_B0B624 = result; /*0x6af0a0*/
  return result; /*0x6af0a6*/
}
} // namespace gamemd

// 0x6AF0B0
namespace gamemd {
int sub_6AF0B0()
{
  dword_B0B5B8 = 0; /*0x6af0b2*/
  return 0; /*0x6af0be*/
}
} // namespace gamemd

// 0x6AF0C0
namespace gamemd {
int sub_6AF0C0()
{
  dword_B0B5D8 = 0; /*0x6af0c2*/
  dword_B0B5DC = 0; /*0x6af0c7*/
  dword_B0B5E0 = 0; /*0x6af0cc*/
  return 0; /*0x6af0d1*/
}
} // namespace gamemd

// 0x6AF0E0
namespace gamemd {
int sub_6AF0E0()
{
  dword_B0B620 = 0; /*0x6af0e5*/
  dword_B0B618 = 128; /*0x6af0ef*/
  dword_B0B61C = 128; /*0x6af0f4*/
  return 128; /*0x6af0f9*/
}
} // namespace gamemd

// 0x6AF100
namespace gamemd {
int sub_6AF100()
{
  dword_B0B5A8 = 0; /*0x6af102*/
  dword_B0B5AC = 0; /*0x6af107*/
  dword_B0B5B0 = 0; /*0x6af10c*/
  dword_B0B5B4 = 0; /*0x6af111*/
  return 0; /*0x6af116*/
}
} // namespace gamemd

// 0x6AF120
namespace gamemd {
int sub_6AF120()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6AF120)
}
} // namespace gamemd

// 0x6AF160
namespace gamemd {
void sub_6AF160()
{
  SlaveManagerClass_Array = (int)&VectorClass_SlaveManagerClass___vftable; /*0x6af168*/
  if ( dword_B0B5F4 && byte_B0B5FD ) /*0x6af17c*/
  {
    RA2_OPDEL(dword_B0B5F4); /*0x6af17f*/
    dword_B0B5F4 = 0; /*0x6af187*/
  }
  byte_B0B5FD = 0; /*0x6af18d*/
  dword_B0B5F8 = 0; /*0x6af193*/
}
} // namespace gamemd
