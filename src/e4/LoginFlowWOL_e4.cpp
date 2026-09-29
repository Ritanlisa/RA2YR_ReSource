// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/GameLoop_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/AbstractType_e4.hpp"
#include "e4/classes/MPBattleClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"

// 0x786EF0
namespace gamemd {
void sub_786EF0()
{
  const unsigned int v2;
  int v3; // [esp-4h] [ebp-10Ch]
  char Buffer[260]; // [esp+4h] [ebp-104h] BYREF

  if ( dword_B77DF8 == -2147221385 /*0x786f26*/
    || dword_B77DF8 == -2147221384
    || dword_B77DF8 == -2147221390
    || dword_B77DF8 == -2147221388
    || dword_B77DF8 == -2147221387
    || dword_B77DF8 == -2147221386 )
  {
    if ( ShowDialogConfirm(&word_B77AD0, 4, (uint8_t (*)(void))GameLoop::Thunk, 0) == 6 ) /*0x786f60*/
    {
      switch ( dword_B77DF8 ) /*0x786f78*/
      {
        case -2147221390: /*0x786f78*/
          v3 = dword_B77E50; /*0x786f99*/
          v2 = aHttpApiregiste_1; /*0x786f9a*/
          goto LABEL_16; /*0x786f9f*/
        case -2147221388: /*0x786f78*/
          sprintf(Buffer, "http://apiregister.westwood.com/support/disabled_%d.html", dword_B77E50); /*0x786fac*/
          break; /*0x786fac*/
        case -2147221387: /*0x786f78*/
          sprintf(Buffer, "http://apiregister.westwood.com/support/serialbanned_%d.html", dword_B77E50); /*0x786fb9*/
          break; /*0x786fb9*/
        case -2147221386: /*0x786f78*/
          v3 = dword_B77E50; /*0x786fbb*/
          v2 = aHttpApiregiste_4; /*0x786fbc*/
  LABEL_16:
          sprintf(Buffer, v2, v3); /*0x786fc1*/
          break; /*0x786fc6*/
        case -2147221385: /*0x786f78*/
          sprintf(Buffer, "http://apiregister.westwood.com/support/serialunknown_%d.html", dword_B77E50); /*0x786f8a*/
          break; /*0x786f8a*/
        case -2147221384: /*0x786f78*/
          sprintf(Buffer, "http://apiregister.westwood.com/support/skuserialmismatch_%d.html", dword_B77E50); /*0x786f97*/
          break; /*0x786f97*/
        default:
          break;
      }
      OpenURLWOL(Buffer, 1); /*0x786fce*/
    }
    return 1; /*0x786fdc*/
  }
  else
  {
    ShowDialogConfirm(&word_B77AD0, 0, (uint8_t (*)(void))GameLoop::Thunk, 0); /*0x786f36*/
    return 0; /*0x786f3b*/
  }
}
}
// 0x72BCA0
namespace gamemd {
char sub_72BCA0()
{
  char result; // al

  result = (unsigned int)(byte_B0FD45);
  if ( !byte_B0FD45 ) /*0x72bca7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72bcb3*/
      dword_B0FA98 = LoadFileSHP(off_844DB4, (bool *)&byte_B0FD44); /*0x72bcc5*/
    result = LoadPaletteSimple(off_844DB8, &dword_B0FD48, &dword_B0FD4C); /*0x72bcda*/
    byte_B0FD45 = 1; /*0x72bcdf*/
  }
  return result; /*0x72bce6*/
}
} // namespace gamemd

// 0x72BCF0
namespace gamemd {
void sub_72BCF0()
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1429] ) /*0x72bcfa*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1428] ) /*0x72bd02*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[744]; /*0x72bd05*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[744] ) /*0x72bd0d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[744]); /*0x72bd11*/
        RA2_OPDEL(v1); /*0x72bd17*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1428] = 0; /*0x72bd1f*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[744] = 0; /*0x72bd2b*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1432] ) /*0x72bd33*/
    {
      RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1432]); /*0x72bd36*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1432] = 0; /*0x72bd3e*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1436] ) /*0x72bd4c*/
    {
      (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1436])( /*0x72bd52*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1436],
        1);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1436] = 0; /*0x72bd54*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1429] = 0; /*0x72bd5a*/
}
} // namespace gamemd

// 0x72C600
namespace gamemd {
char sub_72C600()
{
  char result; // al

  result = (unsigned int)(byte_B0FD09);
  if ( !byte_B0FD09 ) /*0x72c607*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c613*/
      dword_B0FB0C = LoadFileSHP(off_844D8C, (bool *)&byte_B0FD08); /*0x72c625*/
    result = LoadPaletteSimple(off_844D90, &dword_B0FD0C, &dword_B0FD10); /*0x72c63a*/
    byte_B0FD09 = 1; /*0x72c63f*/
  }
  return result; /*0x72c646*/
}
} // namespace gamemd

// 0x72C650
namespace gamemd {
void sub_72C650()
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1369] ) /*0x72c65a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1368] ) /*0x72c662*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[860]; /*0x72c665*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[860] ) /*0x72c66d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[860]); /*0x72c671*/
        RA2_OPDEL(v1); /*0x72c677*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1368] = 0; /*0x72c67f*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[860] = 0; /*0x72c68b*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1372] ) /*0x72c693*/
    {
      RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1372]); /*0x72c696*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1372] = 0; /*0x72c69e*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1376] ) /*0x72c6ac*/
    {
      (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1376])( /*0x72c6b2*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1376],
        1);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1376] = 0; /*0x72c6b4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1369] = 0; /*0x72c6ba*/
}
} // namespace gamemd

// 0x786390
namespace gamemd {
int sub_786390(void * a1)
{
  HANDLE *v2; // esi
  BYTE Data[4]; // [esp+0h] [ebp-110h] BYREF
  HKEY phkResult; // [esp+4h] [ebp-10Ch] BYREF
  DWORD cbData; // [esp+8h] [ebp-108h] BYREF
  DWORD Type; // [esp+Ch] [ebp-104h] BYREF
  CHAR SubKey[256]; // [esp+10h] [ebp-100h] BYREF

  if ( byte_B77E75 ) /*0x78639d*/
    return 1; /*0x78639f*/
  byte_B77E75 = 1; /*0x7863ad*/
  LoadNetworkShareStrings(); /*0x7863b4*/
  this->Game::ResetFlags(); /*0x7863b9*/
  this->Network::InitPlayerSlots(); /*0x7863be*/
  *(unsigned int *)Data = 0; /*0x7863c8*/
  if ( g_Str_SOFTWARE_Westwood_Yuri_s_Reven ) /*0x7863d2*/
  {
    if ( strlen(g_Str_SOFTWARE_Westwood_Yuri_s_Reven) ) /*0x7863da*/
    {
      strcpy(SubKey, g_Str_SOFTWARE_Westwood_Yuri_s_Reven); /*0x786405*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) ) /*0x786420*/
      {
        cbData = 4; /*0x786445*/
        RegQueryValueExA(phkResult, off_84A940, 0, &Type, Data, &cbData); /*0x78644d*/
        RegCloseKey(phkResult); /*0x786458*/
      }
    }
  }
  *(unsigned int *)Data = Data[0]; /*0x786467*/
  dword_B77E50 = Data[0]; /*0x78646b*/
  g_NetworkRematchState = Data[0] + 10496; /*0x786475*/
  ResetSystemWOL(a1); /*0x78647a*/
  IDA_LOBYTE(stru_B77D80.HashTable_field_0x40) = 1; /*0x786485*/
  v2 = &Handles; /*0x78648c*/
  do /*0x7864a6*/
    *v2++ = CreateEventA(0, 0, 0, 0); /*0x78649b*/
  while ( (int)v2 < (int)g_WOL_RequestObject ); /*0x7864a6*/
  return InitializeWestwoodOnline((ObjectClass *)g_hInstance); /*0x7863a4*/
}
} // namespace gamemd
