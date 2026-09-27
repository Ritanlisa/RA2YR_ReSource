// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Settings_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"

// 0x5D1D80
namespace gamemd {
int Session::RemoveTeam(MSShapeAnim * aP1, void * a1, void * a2)
{
  int result; // eax
  aP1 *v3; // esi
  int v4; // ecx
  int v5; // ecx

  result = (int)a2; /*0x5d1d80*/
  if ( a2 ) /*0x5d1d87*/
  {
    v3 = &this->u32_18; /*0x5d1d8c*/
    result = (*(int (__thiscall **)(aP1 *, aP1))(this->u32_18 + 16))(&this->u32_18, &a2); /*0x5d1d96*/
    if ( result != -1 ) /*0x5d1d9c*/
    {
      result = (*(int (__thiscall **)(aP1 *, aP1))(this->u32_16)(v3, &a2); /*0x5d1da7*/
      if ( result != -1 ) /*0x5d1dad*/
      {
        v4 = v3[4]; /*0x5d1daf*/
        if ( result < v4 ) /*0x5d1db4*/
        {
          v5 = v4 - 1; /*0x5d1db6*/
          for ( v3[4] = v5; result < v3[4]; *(aP1 *, unsigned int a2)(v3[1] + 4 * result - 4) = *(aP1 *)(v3[1] + 4 * result) ) /*0x5d1dbc*/
            ++result; /*0x5d1dc1*/
        }
      }
      if ( a2 ) /*0x5d1dd6*/
        return (**a2)(a2, 1); /*0x5d1ddc*/
    }
  }
  return result; /*0x5d1dde*/
}
}
// 0x5E74E0
namespace gamemd {
int Session::PrepareGame()
{
  unsigned int v1;
  int v3; // eax
  int v4; // eax
  char *v5; // eax
  void * result;
  char v7; // bl
  unsigned int v8;
  unsigned int v9;
  int v10; // edi
  int v11; // esi
  unsigned int v12;
  unsigned int *v13; // eax
  char v14; // al
  bool v15; // bl
  void * v16;
  int v17[9]; // [esp+1Ch] [ebp-1ECh] BYREF
  char Str[452]; // [esp+40h] [ebp-1C8h] BYREF
  int16_t v19; // [esp+204h] [ebp-4h]
  char v20; // [esp+206h] [ebp-2h]

  v1 = g_UIControlState; /*0x5e74e9*/
  if ( g_UIControlState ) /*0x5e74f6*/
  {
    ComPtr::Dtor(g_UIControlState); /*0x5e74fa*/
    RA2_OPDEL(v1); /*0x5e7500*/
  }
  g_UIControlState = 0; /*0x5e7513*/
  switch ( g_GameMode_Current ) /*0x5e7521*/
  {
    case 1: /*0x5e7521*/
    case 2: /*0x5e7521*/
      if ( (uint8_t)FindAndValidateMap( /*0x5e774c*/
                              &Destination,
                              (int)&g_MultiplayerFlags,
                              (uint8_t)g_MultiplayerSetupState,
                              0) )
        goto LABEL_42; /*0x5e7753*/
      memset(Str, 0, 250); /*0x5e7764*/
      *(unsigned int *)Str = 119; /*0x5e776c*/
      result = Timer::GetTicks(); /*0x5e7774*/
      v9 = 1800; /*0x5e7779*/
      v16 = result; /*0x5e777e*/
      while ( 1 ) /*0x5e778f*/
      {
        if ( v16 != -1 ) /*0x5e7793*/
        {
          result = (int)(Timer::GetTicks() - v16);
          if ( result >= 1800 ) /*0x5e77a4*/
            return result; /*0x5e77a4*/
          v9 = 1800 - result; /*0x5e77aa*/
        }
        if ( !v9 ) /*0x5e77ae*/
          return result; /*0x5e7812*/
        v10 = Stream::WriteBlock((int)&g_EventManager, (int)Str, 250, 1); /*0x5e77cf*/
        for ( result = Count::GetCountQueue(&g_EventManager); result > 0; result = Count::GetCountQueue(&g_EventManager) ) /*0x5e77d8*/
        {
          result = v16; /*0x5e77da*/
          v11 = 1800; /*0x5e77de*/
          if ( v16 != -1 ) /*0x5e77e4*/
          {
            result = Timer::GetTicks() - v16; /*0x5e77ef*/
            if ( result >= 1800 ) /*0x5e77f5*/
              break; /*0x5e77f5*/
            v11 = 1800 - result; /*0x5e77f7*/
          }
          if ( !v11 ) /*0x5e77fb*/
            break; /*0x5e77fb*/
          Event::Dispatch(); /*0x5e77fd*/
        }
        if ( v10 ) /*0x5e7812*/
          return result; /*0x5e7812*/
        v9 = 1800; /*0x5e778b*/
      }
    case 3: /*0x5e7521*/
      if ( Dialog::GetCurrentType() != 189 /*0x5e7550*/
        || (uint8_t)FindAndValidateMap(
                              &Destination,
                              (int)&g_MultiplayerFlags,
                              (uint8_t)g_MultiplayerSetupState,
                              0) )
      {
        goto LABEL_42; /*0x5e7557*/
      }
      InvalidateRect(hWnd, 0, 0); /*0x5e7560*/
      memset(Str, 0, sizeof(Str)); /*0x5e7571*/
      v19 = 0; /*0x5e7573*/
      v20 = 0; /*0x5e7575*/
      *(unsigned int *)Str = 27; /*0x5e7576*/
      break; /*0x5e7576*/
    case 4: /*0x5e7521*/
      if ( !Dialog::FindByHandle((void *)0xC9) ) /*0x5e7609*/
        goto LABEL_42; /*0x5e7609*/
      v7 = 0; /*0x5e762e*/
      if ( (uint8_t)FindAndValidateMap( /*0x5e7630*/
                              &Destination,
                              (int)&g_MultiplayerFlags,
                              (uint8_t)g_MultiplayerSetupState,
                              0) )
      {
        strcpy(Str, &Destination); /*0x5e765a*/
        _strupr(Str); /*0x5e7668*/
        Debug::Log("Checking for file %s in local directory\n", Str); /*0x5e7677*/
        if ( !(unsigned char)g_MultiplayerSetupState && strstr(Str, aMpr) && strstr(Str, aYrm) ) /*0x5e76a8*/
          goto LABEL_42; /*0x5e76a8*/
        RawFileClass::Construct(v17, (int)&Destination); /*0x5e76c1*/
        if ( (uint8_t)FileClass::Open(0) ) /*0x5e76cc*/
          v7 = 1; /*0x5e76d5*/
        RawFileClass::Dtor(v17); /*0x5e76db*/
        if ( !v7 ) /*0x5e76e2*/
        {
  LABEL_42:
          v12 = g_UIControlState; /*0x5e7825*/
          if ( g_UIControlState ) /*0x5e782d*/
          {
            ComPtr::Dtor(g_UIControlState); /*0x5e7831*/
            RA2_OPDEL(v12); /*0x5e7837*/
            g_UIControlState = 0; /*0x5e783f*/
          }
          goto LABEL_44; /*0x5e783f*/
        }
      }
      if ( (uint8_t)IsRandMap::Sed2(&g_GameMode_Current) ) /*0x5e76ef*/
        return InvalidateRect(hWnd, 0, 0); /*0x5e76ef*/
      v8 = g_UIControlState; /*0x5e76fc*/
      if ( !g_UIControlState ) /*0x5e7704*/
        return InvalidateRect(hWnd, 0, 0); /*0x5e7704*/
      ComPtr::Dtor(g_UIControlState); /*0x5e770c*/
      RA2_OPDEL(v8); /*0x5e7712*/
      g_UIControlState = 0; /*0x5e771a*/
      return InvalidateRect(hWnd, 0, 0); /*0x5e7733*/
    default:
  LABEL_44:
      v13 = CCFileClass::Construct(Str, &Destination); /*0x5e7845*/
      v14 = (*(int (__thiscall **)(unsigned int *, unsigned int))(*v13 + 20))(v13, 0); /*0x5e7858*/
      v15 = v14 == 0; /*0x5e786c*/
      *(unsigned int *)&Str[100] = 0; /*0x5e786f*/
      Vector::Clear((int)&Str[88]); /*0x5e7876*/
      *(unsigned int *)Str = &off_7E1668; /*0x5e787f*/
      result = BufferIOFileClass::Dtor(Str); /*0x5e7887*/
      if ( !v15 ) /*0x5e788e*/
      {
        result = (void *)((int)operator new(4u));
        if ( !result ) /*0x5e789c*/
        {
          g_UIControlState = (int)(0);
          return result; /*0x5e78f4*/
        }
        result = (int)(unknown_libname_27(result));
        g_UIControlState = (void *)result; /*0x5e78a5*/
      }
      if ( g_UIControlState ) /*0x5e78b0*/
      {
        if ( (uint8_t)IsRandMap::Sed2(&g_GameMode_Current) ) /*0x5e78b7*/
        {
          ScenarioClass::CopyStartPositions(); /*0x5e78f5*/
          return InvalidateRect(hWnd, 0, 0); /*0x5e78fa*/
        }
        else
        {
          PreviewClass::ReadPreview(&Destination); /*0x5e78cb*/
          return InvalidateRect(hWnd, 0, 0); /*0x5e78d3*/
        }
      }
      return (int)(result);
  }
  while ( 1 ) /*0x5e757e*/
  {
    if ( g_GameMode_Current == 3 ) /*0x5e7584*/
    {
      v3 = Network::SendMessage((int)&g_NetworkManager, (int)Str, 47, 1, (int)&g_NetworkRematchObject, 0, 0); /*0x5e759d*/
    }
    else
    {
      v4 = (char *)(GameSettings::FindFlagged());
      if ( !v4 ) /*0x5e75ab*/
        goto LABEL_12; /*0x5e75ab*/
      v5 = CharToWideString((unsigned char *)(v4 + 36)); /*0x5e75b0*/
      v3 = Network::SendToPlayer((int)&g_NetworkManager, (int)Str, 47, 1, (wchar_t *)v5); /*0x5e75c4*/
    }
    if ( v3 ) /*0x5e75cb*/
    {
      for ( result = Network::GetQueueCount((int)&g_NetworkManager); /*0x5e75e0*/
            result;
            result = (void *)(Network::GetQueueCount((int)&g_NetworkManager) ) { Event::Dispatch());
      }
      return (int)(result);
    }
  LABEL_12:
    Event::Dispatch(); /*0x5e75cd*/
  }
}
}
// 0x69B700
namespace gamemd {
int Session::GetPlayerOption()
{
  int result; // eax

  result = -2; /*0x69b706*/
  if ( *(&this->q0244) != -2 ) /*0x69b70d*/
    return *(&this->q0243); /*0x69b70f*/
  return result; /*0x69b715*/
}
}
// 0x69B720
namespace gamemd {
int Session::GetPlayerColor()
{
  int result; // eax

  result = (int)(-2);
  if ( this->q160 != -2 ) /*0x69b72d*/
    return this->q15C; /*0x69b72f*/
  return result; /*0x69b735*/
}
}
// 0x5ED370
namespace gamemd {
int Session::StartGame()
{
  unsigned int v2;
  void *v3; // eax
  void *v4; // eax

  if ( !IsRandMap::Sed(*(unsigned int *)(g_MultiplayerGameState + 4 * g_GameRulesOptions)) ) /*0x5ed381*/
    return Session::PrepareGame(hWnd); /*0x5ed3f1*/
  v2 = g_UIControlState; /*0x5ed38b*/
  if ( g_UIControlState ) /*0x5ed393*/
  {
    ComPtr::Dtor(g_UIControlState); /*0x5ed397*/
    RA2_OPDEL(v2); /*0x5ed39d*/
  }
  v3 = operator new(4u); /*0x5ed3a7*/
  if ( v3 ) /*0x5ed3b2*/
    v4 = (void *)unknown_libname_27(v3); /*0x5ed3b6*/
  else
    v4 = 0; /*0x5ed3bd*/
  g_UIControlState = v4; /*0x5ed3c6*/
  Surface::LoadToSurfaceSHP((char **)v4, ExistingFileName); /*0x5ed3cb*/
  if ( !*(unsigned int *)g_UIControlState ) /*0x5ed3d6*/
    Session::PrepareGame(hWnd); /*0x5ed3dd*/
  return InvalidateRect(hWnd, 0, 0); /*0x5ed3ed*/
}
} // namespace gamemd
