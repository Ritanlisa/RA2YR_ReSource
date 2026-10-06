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
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/ShipLocomotionClass_e4.hpp"
#include "e4/classes/GameSettings_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/IsRandMap_e4.hpp"
#include "e4/classes/PreviewClass_e4.hpp"
#include "e4/classes/Surface_e4.hpp"

// 0x5D1D80
namespace gamemd {
int Session::RemoveTeam(int (***aP1)(unsigned int, int))
{

  int result; // eax
  void **v3; // esi
  int v4; // ecx
  void *v5; // ecx

  result = (int)aP1; /*0x5d1d80*/
  if ( aP1 ) /*0x5d1d87*/
  {
    v3 = (void **)(&this->field_18); /*0x5d1d8c*/
    result = (*((int (**)(void **, unsigned int))this->field_18 + 4))(&this->field_18, &aP1); /*0x5d1d96*/
    if ( result != -1 ) /*0x5d1d9c*/
    {
      result = (*((int (**)(void **, unsigned int))*v3 + 4))(v3, &aP1); /*0x5d1da7*/
      if ( result != -1 ) /*0x5d1dad*/
      {
        v4 = (int)v3[4]; /*0x5d1daf*/
        if ( result < v4 ) /*0x5d1db4*/
        {
          v5 = (void *)(v4 - 1); /*0x5d1db6*/
          for ( v3[4] = v5; result < (int)v3[4]; *((unsigned int *)v3[1] + result - 1) = *((unsigned int *)v3[1] + result) ) /*0x5d1dbc*/
            ++result; /*0x5d1dc1*/
        }
      }
      if ( aP1 ) /*(unsigned int *)(0x5d1dd6)*/
        return (**aP1)((unsigned int)aP1, 1); /*0x5d1ddc*/
    }
  }
  return result; /*0x5d1dde*/

}
}
// 0x5E74E0
namespace gamemd {
int Session::PrepareGame(HWND hWnd)
{

  Skirmish *v1; // esi
  int v3; // eax
  char *Flagged; // eax
  char *v5; // eax
  void ** result;
  char v7; // bl
  unsigned int v8;
  int v9; // esi
  int v10; // edi
  int v11; // esi
  Skirmish *v12; // esi
  unsigned int *v13; // eax
  char v14; // al
  bool v15; // bl
  ScenarioClass *v16; // [esp+0h] [ebp-208h]
  void ** v17;
  RawFileClass v18; // [esp+1Ch] [ebp-1ECh] BYREF
  unsigned char Str[452]; // [esp+40h] [ebp-1C8h] BYREF
  int16_t v20; // [esp+204h] [ebp-4h]
  char v21; // [esp+206h] [ebp-2h]
v1 = (gamemd::Skirmish *)(g_UIControlState);
  if ( g_UIControlState ) /*0x5e74f6*/
  {
    ((ComPtr *)((ComPtr *)g_UIControlState))->Dtor(); /*0x5e74fa*/
    __3_YAXPAX_Z(v1); /*0x5e7500*/
  }
  g_UIControlState = 0; /*0x5e7513*/
  switch ( *(unsigned int *)&dword_A8B238 ) /*0x5e7521*/
  {
    case 1: /*0x5e7521*/
    case 2: /*0x5e7521*/
      if ( FindAndValidateMap((gamemd::ObjectClass *)(byte_A8B8E0), dword_A8BB04,(const char *)(&byte_A8BAE2), dword_A8BB08, 0) ) /*0x5e774c*/
        goto LABEL_42; /*0x5e7753*/
      memset( (void *)(Str), 0, 250); /*0x5e7764*/
      *(unsigned int *)Str = 119; /*0x5e776c*/
      result = (void **)(((gamemd::Timer *)this)->GetTicks()); /*0x5e7774*/
      v9 = 1800; /*0x5e7779*/
      v17 = result; /*0x5e777e*/
      while ( 1 ) /*0x5e778f*/
      {
        if ( v17 != (void **)(-1) ) /*0x5e7793*/
        {
          result = ((gamemd::Timer *)this)->GetTicks() - v17; /*0x5e779e*/
          if ( result >= (void **)(1800) ) /*0x5e77a4*/
            return (int)(result); /*0x5e77a4*/
          v9 = 1800 - result; /*0x5e77aa*/
        }
        if ( !v9 ) /*0x5e77ae*/
          return (int)(result); /*0x5e7812*/
        v10 = ((Stream *)((int *)&unk_A8EA70))->WriteBlock((int)Str, 250, 1); /*0x5e77cf*/
        for ( result = (void **)(((Count *)((Count *)&unk_A8EA70))->GetCountQueue()); /*0x5e77d8*/
              result > 0;
              result = ((Count *)((Count *)&unk_A8EA70))->GetCountQueue() )
        {
          result = (void **)(v17);
          v11 = 1800; /*0x5e77de*/
          if ( v17 != (void **)(-1) ) /*0x5e77e4*/
          {
            result = ((gamemd::Timer *)this)->GetTicks() - v17; /*0x5e77ef*/
            if ( result >= (void **)(1800) ) /*0x5e77f5*/
              break; /*0x5e77f5*/
            v11 = 1800 - result; /*0x5e77f7*/
          }
          if ( !v11 ) /*0x5e77fb*/
            break; /*0x5e77fb*/
          ((gamemd::Event *)this)->Dispatch(); /*0x5e77fd*/
        }
        if ( v10 ) /*0x5e7812*/
          return (int)(result); /*0x5e7812*/
        v9 = 1800; /*0x5e778b*/
      }
    case 3: /*0x5e7521*/
      if ( ((gamemd::Dialog *)this)->GetCurrentType() != 189 /*0x5e7550*/
        || FindAndValidateMap((gamemd::ObjectClass *)(byte_A8B8E0), dword_A8BB04,(const char *)(&byte_A8BAE2), dword_A8BB08, 0) )
      {
        goto LABEL_42; /*0x5e7557*/
      }
      InvalidateRect((HWND)hWnd, 0, 0); /*0x5e7560*/
      memset( (void *)(Str), 0, sizeof(Str)); /*0x5e7571*/
      v20 = 0; /*0x5e7573*/
      v21 = 0; /*0x5e7575*/
      *(unsigned int *)Str = 27; /*0x5e7576*/
      break; /*0x5e7576*/
    case 4: /*0x5e7521*/
      if ( !(gamemd::Dialog *)0xC9->FindByHandle() ) /*0x5e7609*/
        goto LABEL_42; /*0x5e7609*/
      v7 = 0; /*0x5e762e*/
      if ( FindAndValidateMap((gamemd::ObjectClass *)(byte_A8B8E0), dword_A8BB04,(const char *)(&byte_A8BAE2), dword_A8BB08, 0) ) /*0x5e7630*/
      {
        strcpy((char *)(Str),(const char *)(byte_A8B8E0)); /*0x5e765a*/
        _strupr((char *)(Str)); /*0x5e7668*/
        ((gamemd::Debug *)this)->Log(); /*0x5e7677*/
        if ( !dword_A8BB08 && strstr(Str, aMpr) && strstr(Str, aYrm) ) /*0x5e76a8*/
          goto LABEL_42; /*0x5e76a8*/
        ((RawFileClass *)(&v18))->Construct((int)byte_A8B8E0); /*0x5e76c1*/
        if ( (uint8_t)((FileClass *)(&v18))->Open(0) ) /*0x5e76cc*/
          v7 = 1; /*0x5e76d5*/
        ((RawFileClass *)(&v18))->Dtor(); /*0x5e76db*/
        if ( !v7 ) /*0x5e76e2*/
        {
LABEL_42: v12 = (gamemd::Skirmish *)(g_UIControlState);
          if ( g_UIControlState ) /*0x5e782d*/
          {
            ((ComPtr *)((ComPtr *)g_UIControlState))->Dtor(); /*0x5e7831*/
            __3_YAXPAX_Z(v12); /*0x5e7837*/
            g_UIControlState = 0; /*0x5e783f*/
          }
          goto LABEL_44; /*0x5e783f*/
        }
      }
      if ( (uint8_t)((IsRandMap *)((IsRandMap *)&dword_A8B238))->Sed2() ) /*0x5e76ef*/
        return InvalidateRect((HWND)hWnd, 0, 0); /*0x5e76ef*/
      v8 = g_UIControlState; /*0x5e76fc*/
      if ( !g_UIControlState ) /*0x5e7704*/
        return InvalidateRect((HWND)hWnd, 0, 0); /*0x5e7704*/
      ((ComPtr *)((ComPtr *)g_UIControlState))->Dtor(); /*0x5e770c*/
      __3_YAXPAX_Z((void *)(v8)); /*0x5e7712*/
      g_UIControlState = 0; /*0x5e771a*/
      return InvalidateRect((HWND)hWnd, 0, 0); /*0x5e7733*/
    default:
LABEL_44:
      v13 = ((CCFileClass*)(CCFileClass *)Str)->Construct((char *)(void *)(byte_A8B8E0)); /*0x5e7845*/
      v14 = (*(int (**)(unsigned int *, unsigned int))(*v13 + 20))(v13, 0); /*0x5e7858*/
      *(unsigned int *)Str = (unsigned int)(&vt_CCFileClass); /*0x5e7864*/
      v15 = v14 == 0; /*0x5e786c*/
      *(unsigned int *)&Str[100] = 0; /*0x5e786f*/
      ((Vector *)((int)&Str[88]))->Clear(); /*0x5e7876*/
      *(unsigned int *)Str = (unsigned int)(&off_7E1668); /*0x5e787f*/
      result =(void **)((BufferIOFileClass *)((BufferIOFileClass *)Str))->Dtor(); /*0x5e7887*/
      if ( !v15 ) /*0x5e788e*/
      {
        result = (void **)(__2_YAPAXI_Z(4u)); /*0x5e7892*/
        if ( !result ) /*0x5e789c*/
        {
          g_UIControlState = 0; /*0x5e78e4*/
          return (int)(result); /*0x5e78f4*/
        }
        result = (int)unknown_libname_27((ObjectClass *)result); /*0x5e78a0*/
        g_UIControlState = (int)((Skirmish *)result); /*0x5e78a5*/
      }
      if ( g_UIControlState ) /*0x5e78b0*/
      {
        if ( (uint8_t)((IsRandMap *)((IsRandMap *)&dword_A8B238))->Sed2() ) /*0x5e78b7*/
        {
          ScenarioClass::CopyStartPositions(v16); /*0x5e78f5*/
          return InvalidateRect((HWND)hWnd, 0, 0); /*0x5e78fa*/
        }
        else
        {
          ((PreviewClass *)((PreviewClass *)g_UIControlState))->ReadPreview((char *)(byte_A8B8E0)); /*0x5e78cb*/
          return InvalidateRect((HWND)hWnd, 0, 0); /*0x5e78d3*/
        }
      }
      return (int)(result);
  }
  while ( 1 ) /*0x5e757e*/
  {
    if ( *(unsigned int *)&dword_A8B238 == 3 ) /*0x5e7584*/
    {
      v3 = ((Network *)&unk_A8E9C0.Socket)->SendMessage( (int)Str, 47, 1, (int)&stru_A8BB1C, 0, 0); /*0x5e759d*/
    }
    else
    {
      Flagged = (char *)((int)(((GameSettings *)this)->FindFlagged()));
      if ( !Flagged ) /*0x5e75ab*/
        goto LABEL_12; /*0x5e75ab*/
      v5 = (char *)(CharToWideString((unsigned char *)(Flagged + 36))); /*0x5e75b0*/
      v3 = (int)(Network::SendToPlayer( (int)&unk_A8E9C0, (int)Str, 47, (wchar_t *)(1), (void)((wchar_t *)v5))); /*0x5e75c4*/
    }
    if ( v3 ) /*0x5e75cb*/
    {
      for ( result = ((Network *)(&unk_A8E9C0))->GetQueueCount(); result; result = ((Network *)(&unk_A8E9C0))->GetQueueCount() ) /*0x5e75e0*/
        ((gamemd::Event *)this)->Dispatch(); /*0x5e75e6*/
      return (int)(result); /*0x5e75f7*/
    }
LABEL_12:
    ((gamemd::Event *)this)->Dispatch(); /*0x5e75cd*/
  }

}
}
// 0x69B700
namespace gamemd {
int Session::GetPlayerOption()
{

  int result; // eax

  result = -2; /*0x69b706*/
  if ( this->field_178 != (unsigned int)(void *)-2 ) /*0x69b70d*/
    return (int)(unsigned int)this->field_174; /*0x69b70f*/
  return result; /*0x69b715*/

}
}
// 0x69B720
namespace gamemd {
int Session::GetPlayerColor()
{

  int result; // eax

  result = -2; /*0x69b726*/
  if ( this->field_160 != (unsigned int)(void *)-2 ) /*0x69b72d*/
    return (int)(unsigned int)this->field_15C; /*0x69b72f*/
  return result; /*0x69b735*/

}
}
// 0x5ED370
namespace gamemd {
int Session::StartGame(HWND hWnd)
{

  unsigned int v2;
  ObjectClass *v3; // eax
  Skirmish *v4; // eax

  if ( !(uint8_t)((IsRandMap *)(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4])))->Sed() ) /*0x5ed381*/
    return Session::PrepareGame(hWnd); /*0x5ed3f1*/
  v2 = g_UIControlState; /*0x5ed38b*/
  if ( g_UIControlState ) /*0x5ed393*/
  {
    ((ComPtr *)((ComPtr *)g_UIControlState))->Dtor(); /*0x5ed397*/
    __3_YAXPAX_Z((void *)(v2)); /*0x5ed39d*/
  }
  v3 = (gamemd::ObjectClass *)((int)((ObjectClass *)__2_YAPAXI_Z(4u)));
  if ( v3 ) /*0x5ed3b2*/
    v4 = (Skirmish *)unknown_libname_27(v3); /*0x5ed3b6*/
  else
    v4 = 0; /*0x5ed3bd*/
  g_UIControlState = (int)(v4); /*0x5ed3c6*/
  ((Surface *)((Surface *)v4))->LoadToSurfaceSHP((char *)(ExistingFileName)); /*0x5ed3cb*/
  if ( !*(unsigned int *)g_UIControlState ) /*0x5ed3d6*/
    Session::PrepareGame(hWnd); /*0x5ed3dd*/
  return InvalidateRect((HWND)hWnd, 0, 0); /*0x5ed3ed*/

}
} // namespace gamemd
