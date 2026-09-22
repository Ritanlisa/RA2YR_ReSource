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

// 0x5D1D80
namespace gamemd {
int Session::RemoveTeam(MSShapeAnim * aP1)
{
{
  MSShapeAnim *result; // eax

  result = aP1; /*0x5d1d80*/
  if ( aP1 ) /*0x5d1d87*/
  {
    _DWORD * v3 = this + 6; /*0x5d1d8c*/
    result = (MSShapeAnim *)this->q018->vt_slot_16(&aP1); /*0x5d1d96*/
    if ( result != (MSShapeAnim *)-1 ) /*0x5d1d9c*/
    {
      result = (MSShapeAnim *)(*(int (__thiscall **)(_DWORD *, MSShapeAnim **))(*v3 + 16))(v3, &aP1); /*0x5d1da7*/
      if ( result != (MSShapeAnim *)-1 ) /*0x5d1dad*/
      {
        int v4 = v3[4]; /*0x5d1daf*/
        if ( (int)result < v4 ) /*0x5d1db4*/
        {
          int v5 = v4 - 1; /*0x5d1db6*/
          for ( v3[4] = v5; /*0x5d1dbc*/
                (int)result < v3[4];
                *(_DWORD *)(v3[1] + 4 * (_DWORD)result - 4) = *(_DWORD *)(v3[1] + 4 * (_DWORD)result) )
          {
            result = (MSShapeAnim *)((char *)result + 1); /*0x5d1dc1*/
          }
        }
      }
      if ( aP1 ) /*0x5d1dd6*/
        return (**(int (__thiscall ***)(MSShapeAnim *, int))aP1->__pad_0)(aP1, 1); /*0x5d1ddc*/
    }
  }
  return (int)result->__pad_0; /*0x5d1dde*/
}
} // namespace gamemd

// 0x5E74E0
namespace gamemd {
int Session::PrepareGame()
{
{
  ObjectClass *v1; // esi
  char *Flagged; // eax
  int result; // eax
  ObjectClass *v8; // esi
  ObjectClass *v12; // esi
  char Str[452]; // [esp+40h] [ebp-1C8h] BYREF
  __int16 v19; // [esp+204h] [ebp-4h]
  v1 = (ObjectClass *)g_UIControlState; /*0x5e74e9*/
  if ( g_UIControlState ) /*0x5e74f6*/
  {
    ComPtr::Dtor(g_UIControlState); /*0x5e74fa*/
    __3_YAXPAX_Z(v1); /*0x5e7500*/
  }
  g_UIControlState = 0; /*0x5e7513*/
  switch ( g_GameMode_Current[0] ) /*0x5e7521*/
  {
    case 1: /*0x5e7521*/
    case 2: /*0x5e7521*/
      if ( FindAndValidateMap( /*0x5e774c*/
             &Destination,
             g_MultiplayerConfigState,
             &g_MultiplayerFlags,
             (unsigned __int8)g_MultiplayerSetupState,
             0) )
      {
        goto LABEL_42; /*0x5e7753*/
      }
      memset(Str, 0, 250); /*0x5e7764*/
      *(_DWORD *)Str = 119; /*0x5e776c*/
      result = Timer::GetTicks(); /*0x5e7774*/
      int v9 = 1800; /*0x5e7779*/
      ObjectClass *v16 = result; /*0x5e777e*/
      while ( 1 ) /*0x5e778f*/
      {
        if ( v16 != -1 ) /*0x5e7793*/
        {
          result = Timer::GetTicks() - v16; /*0x5e779e*/
          if ( result >= 1800 ) /*0x5e77a4*/
            return result; /*0x5e77a4*/
          v9 = 1800 - result; /*0x5e77aa*/
        }
        if ( !v9 ) /*0x5e77ae*/
          return result; /*0x5e7812*/
        int v10 = Stream::WriteBlock((int)&g_EventManager, (int)Str, 250, 1); /*0x5e77cf*/
        for ( result = Count::GetCountQueue(&g_EventManager); result > 0; result = Count::GetCountQueue(&g_EventManager) ) /*0x5e77d8*/
        {
          result = v16; /*0x5e77da*/
          int v11 = 1800; /*0x5e77de*/
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
        || FindAndValidateMap(
             &Destination,
             g_MultiplayerConfigState,
             &g_MultiplayerFlags,
             (unsigned __int8)g_MultiplayerSetupState,
             0) )
      {
        goto LABEL_42; /*0x5e7557*/
      }
      InvalidateRect(this, 0, 0); /*0x5e7560*/
      memset(Str, 0, sizeof(Str)); /*0x5e7571*/
      v19 = 0; /*0x5e7573*/
      char v20 = 0; /*0x5e7575*/
      *(_DWORD *)Str = 27; /*0x5e7576*/
      break; /*0x5e7576*/
    case 4: /*0x5e7521*/
      if ( !Dialog::FindByHandle((void *)0xC9) ) /*0x5e7609*/
        goto LABEL_42; /*0x5e7609*/
      char v7 = 0; /*0x5e762e*/
      if ( FindAndValidateMap( /*0x5e7630*/
             &Destination,
             g_MultiplayerConfigState,
             &g_MultiplayerFlags,
             (unsigned __int8)g_MultiplayerSetupState,
             0) )
      {
        strcpy(Str, &Destination); /*0x5e765a*/
        _strupr(Str); /*0x5e7668*/
        Debug::Log(); /*0x5e7677*/
        if ( !(_BYTE)g_MultiplayerSetupState && strstr(Str, DataGlobal_831A88) && strstr(Str, DataGlobal_831A80) ) /*0x5e76a8*/
          goto LABEL_42; /*0x5e76a8*/
  int v17[9]; // [esp+1Ch] [ebp-1ECh] BYREF
        RawFileClass::Construct(v17, (int)&Destination); /*0x5e76c1*/
        if ( FileClass::Open(v17, 0) ) /*0x5e76cc*/
          v7 = 1; /*0x5e76d5*/
        RawFileClass::Dtor(v17); /*0x5e76db*/
        if ( !v7 ) /*0x5e76e2*/
        {
LABEL_42:
          v12 = (ObjectClass *)g_UIControlState; /*0x5e7825*/
          if ( g_UIControlState ) /*0x5e782d*/
          {
            ComPtr::Dtor(g_UIControlState); /*0x5e7831*/
            __3_YAXPAX_Z(v12); /*0x5e7837*/
            g_UIControlState = 0; /*0x5e783f*/
          }
          goto LABEL_44; /*0x5e783f*/
        }
      }
      if ( IsRandMap::Sed2((int)g_GameMode_Current) ) /*0x5e76ef*/
        return InvalidateRect(this, 0, 0); /*0x5e76ef*/
      v8 = (ObjectClass *)g_UIControlState; /*0x5e76fc*/
      if ( !g_UIControlState ) /*0x5e7704*/
        return InvalidateRect(this, 0, 0); /*0x5e7704*/
      ComPtr::Dtor(g_UIControlState); /*0x5e770c*/
      __3_YAXPAX_Z(v8); /*0x5e7712*/
      g_UIControlState = 0; /*0x5e771a*/
      return InvalidateRect(this, 0, 0); /*0x5e7733*/
    default:
LABEL_44:
      _DWORD * v13 = CCFileClass::Construct(Str, &Destination); /*0x5e7845*/
      char v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 20))(v13, 0); /*0x5e7858*/
      *(_DWORD *)Str = &vt_CCFileClass; /*0x5e7864*/
      bool v15 = v14 == 0; /*0x5e786c*/
      *(_DWORD *)&Str[100] = 0; /*0x5e786f*/
      Vector::Clear((int)&Str[88]); /*0x5e7876*/
      *(_DWORD *)Str = &off_7E1668; /*0x5e787f*/
      result = BufferIOFileClass::Dtor(Str); /*0x5e7887*/
      if ( !v15 ) /*0x5e788e*/
      {
        result = (int)__2_YAPAXI_Z(4u); /*0x5e7892*/
        if ( !result ) /*0x5e789c*/
        {
          g_UIControlState = 0; /*0x5e78e4*/
          return result; /*0x5e78f4*/
        }
        result = (int)unknown_libname_27((_DWORD *)result); /*0x5e78a0*/
        g_UIControlState = (void *)result; /*0x5e78a5*/
      }
      if ( g_UIControlState ) /*0x5e78b0*/
      {
        if ( IsRandMap::Sed2((int)g_GameMode_Current) ) /*0x5e78b7*/
        {
          ScenarioClass::CopyStartPositions(); /*0x5e78f5*/
          return InvalidateRect(this, 0, 0); /*0x5e78fa*/
        }
        else
        {
          PreviewClass::ReadPreview((char **)g_UIControlState, &Destination); /*0x5e78cb*/
          return InvalidateRect(this, 0, 0); /*0x5e78d3*/
        }
      }
      return result;
  }
  while ( 1 ) /*0x5e757e*/
  {
  int v3; // eax
    if ( g_GameMode_Current[0] == 3 ) /*0x5e7584*/
    {
      v3 = Network::SendMessage((int)g_NetworkManager, (int)Str, 47, 1, (int)&g_NetworkRematchObject, 0, 0); /*0x5e759d*/
    }
    else
    {
      Flagged = GameSettings::FindFlagged(); /*0x5e75a4*/
      if ( !Flagged ) /*0x5e75ab*/
        goto LABEL_12; /*0x5e75ab*/
      char * v5 = CharToWideString(Flagged + 36); /*0x5e75b0*/
      v3 = Network::SendToPlayer((int)g_NetworkManager, (int)Str, 47, 1, (wchar_t *)v5); /*0x5e75c4*/
    }
    if ( v3 ) /*0x5e75cb*/
    {
      for ( result = Network::GetQueueCount((int)g_NetworkManager); /*0x5e75e0*/
            result;
            result = Network::GetQueueCount((int)g_NetworkManager) )
      {
        Event::Dispatch(); /*0x5e75e6*/
      }
      return result; /*0x5e75f7*/
    }
LABEL_12:
    Event::Dispatch(); /*0x5e75cd*/
  }
}
} // namespace gamemd

// 0x69B700
namespace gamemd {
int Session::GetPlayerOption()
{
{
  int result; // eax

  result = -2; /*0x69b706*/
  if ( this->q178 != -2 ) /*0x69b70d*/
    return this->q174; /*0x69b70f*/
  return result; /*0x69b715*/
}
} // namespace gamemd

// 0x69B720
namespace gamemd {
int Session::GetPlayerColor()
{
{
  int result; // eax

  result = -2; /*0x69b726*/
  if ( this->q160 != -2 ) /*0x69b72d*/
    return this->q15C; /*0x69b72f*/
  return result; /*0x69b735*/
}
} // namespace gamemd

// 0x5ED370
namespace gamemd {
int Session::StartGame()
{
{
    ObjectClass *v2;
    int *v3;
    ObjectClass *v4;
    if ( !IsRandMap::Sed(*(int *)(g_MultiplayerGameState + 4 * g_GameRulesOptions)) )
    return Session::PrepareGame(this);
    v2 = (ObjectClass *)g_UIControlState;
    if ( g_UIControlState )
  {
    ComPtr::Dtor(g_UIControlState);
    __3_YAXPAX_Z(v2);
  }
    v3 = __2_YAPAXI_Z(4u);
    if ( v3 )
    v4 = (ObjectClass *)unknown_libname_27(v3);
    else
    v4 = 0;
    g_UIControlState = v4;
    Surface::LoadToSurfaceSHP((char **)v4, ExistingFileName);
    if ( !*(int *)g_UIControlState )
    Session::PrepareGame(this);
    return InvalidateRect(this, 0, 0);
}
}
} // namespace gamemd
