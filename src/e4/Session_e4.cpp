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

// 0x5D1D80
namespace gamemd {
int Session::RemoveTeam( MSShapeAnim * aP1)
{

  MSShapeAnim *result; // eax
  unsigned int *v3; // esi
  int v4; // ecx
  int v5; // ecx

  result = aP1; /*0x5d1d80*/
  if ( aP1 ) /*0x5d1d87*/
  {
    v3 = (unsigned int *)this + 6; /*0x5d1d8c*/
    result = (MSShapeAnim *)(*(int (**)(unsigned int *, MSShapeAnim **))(*((unsigned int *)this + 6) + 16))((unsigned int *)this + 6, &aP1); /*0x5d1d96*/
    if ( result != (MSShapeAnim *)-1 ) /*0x5d1d9c*/
    {
      result = (MSShapeAnim *)(*(int (**)(unsigned int *, MSShapeAnim **))(*v3 + 16))(v3, &aP1); /*0x5d1da7*/
      if ( result != (MSShapeAnim *)-1 ) /*0x5d1dad*/
      {
        v4 = v3[4]; /*0x5d1daf*/
        if ( (int)result < v4 ) /*0x5d1db4*/
        {
          v5 = v4 - 1; /*0x5d1db6*/
          for ( v3[4] = v5; /*0x5d1dbc*/
                (int)result < v3[4];
                *(unsigned int *)(v3[1] + 4 * (unsigned int)result - 4) = *(unsigned int *)(v3[1] + 4 * (unsigned int)result) )
          {
            result = (MSShapeAnim *)((char *)result + 1); /*0x5d1dc1*/
          }
        }
      }
      if ( aP1 ) /*0x5d1dd6*/
        return (**(int (***)(MSShapeAnim *, int))aP1->__pad_0)(aP1, 1); /*0x5d1ddc*/
    }
  }
  return (int)result->__pad_0; /*0x5d1dde*/

}
}
// 0x5E74E0
namespace gamemd {
int Session::PrepareGame(HWND hWnd)
{

  ObjectClass *v1; // esi
  int v3; // eax
  char *Flagged; // eax
  char *v5; // eax
  int result; // eax
  char v7; // bl
  ObjectClass *v8; // esi
  int v9; // esi
  int v10; // edi
  int v11; // esi
  ObjectClass *v12; // esi
  unsigned int *v13; // eax
  char v14; // al
  bool v15; // bl
  int v16; // [esp+10h] [ebp-1F8h]
  int v17[9]; // [esp+1Ch] [ebp-1ECh] BYREF
  char Str[452]; // [esp+40h] [ebp-1C8h] BYREF
  int16_t v19; // [esp+204h] [ebp-4h]
  char v20; // [esp+206h] [ebp-2h]

  v1 = (ObjectClass *)MEMORY[0xAC1154]; /*0x5e74e9*/
  if ( MEMORY[0xAC1154] ) /*0x5e74f6*/
  {
    ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5e74fa*/
    __3_YAXPAX_Z(v1); /*0x5e7500*/
  }
  MEMORY[0xAC1154] = 0; /*0x5e7513*/
  switch ( MEMORY[0xA8B238][0] ) /*0x5e7521*/
  {
    case 1: /*0x5e7521*/
    case 2: /*0x5e7521*/
      if ( FindAndValidateMap( /*0x5e774c*/
             &MEMORY[0xA8B8E0],
             MEMORY[0xA8BB04],
             &MEMORY[0xA8BAE2],
             (uint8_t)MEMORY[0xA8BB08],
             0) )
      {
        goto LABEL_42; /*0x5e7753*/
      }
      memset(Str, 0, 250); /*0x5e7764*/
      *(unsigned int *)Str = 119; /*0x5e776c*/
      result = this->Timer::GetTicks(); /*0x5e7774*/
      v9 = 1800; /*0x5e7779*/
      v16 = result; /*0x5e777e*/
      while ( 1 ) /*0x5e778f*/
      {
        if ( v16 != -1 ) /*0x5e7793*/
        {
          result = this->Timer::GetTicks() - v16; /*0x5e779e*/
          if ( result >= 1800 ) /*0x5e77a4*/
            return result; /*0x5e77a4*/
          v9 = 1800 - result; /*0x5e77aa*/
        }
        if ( !v9 ) /*0x5e77ae*/
          return result; /*0x5e7812*/
        v10 = Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)Str, 250, 1); /*0x5e77cf*/
        for ( result = Count::GetCountQueue(&MEMORY[0xA8EA70]); result > 0; result = Count::GetCountQueue(&MEMORY[0xA8EA70]) ) /*0x5e77d8*/
        {
          result = v16; /*0x5e77da*/
          v11 = 1800; /*0x5e77de*/
          if ( v16 != -1 ) /*0x5e77e4*/
          {
            result = this->Timer::GetTicks() - v16; /*0x5e77ef*/
            if ( result >= 1800 ) /*0x5e77f5*/
              break; /*0x5e77f5*/
            v11 = 1800 - result; /*0x5e77f7*/
          }
          if ( !v11 ) /*0x5e77fb*/
            break; /*0x5e77fb*/
          this->Event::Dispatch(); /*0x5e77fd*/
        }
        if ( v10 ) /*0x5e7812*/
          return result; /*0x5e7812*/
        v9 = 1800; /*0x5e778b*/
      }
    case 3: /*0x5e7521*/
      if ( this->Dialog::GetCurrentType() != 189 /*0x5e7550*/
        || FindAndValidateMap(
             &MEMORY[0xA8B8E0],
             MEMORY[0xA8BB04],
             &MEMORY[0xA8BAE2],
             (uint8_t)MEMORY[0xA8BB08],
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
      if ( FindAndValidateMap( /*0x5e7630*/
             &MEMORY[0xA8B8E0],
             MEMORY[0xA8BB04],
             &MEMORY[0xA8BAE2],
             (uint8_t)MEMORY[0xA8BB08],
             0) )
      {
        strcpy(Str, &MEMORY[0xA8B8E0]); /*0x5e765a*/
        _strupr(Str); /*0x5e7668*/
        this->Debug::Log(); /*0x5e7677*/
        if ( !(unsigned char)MEMORY[0xA8BB08] && strstr(Str, MEMORY[0x831A88]) && strstr(Str, MEMORY[0x831A80]) ) /*0x5e76a8*/
          goto LABEL_42; /*0x5e76a8*/
        RawFileClass::Construct(v17, (int)&MEMORY[0xA8B8E0]); /*0x5e76c1*/
        if ( FileClass::Open(v17, 0) ) /*0x5e76cc*/
          v7 = 1; /*0x5e76d5*/
        RawFileClass::Dtor(v17); /*0x5e76db*/
        if ( !v7 ) /*0x5e76e2*/
        {
LABEL_42:
          v12 = (ObjectClass *)MEMORY[0xAC1154]; /*0x5e7825*/
          if ( MEMORY[0xAC1154] ) /*0x5e782d*/
          {
            ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5e7831*/
            __3_YAXPAX_Z(v12); /*0x5e7837*/
            MEMORY[0xAC1154] = 0; /*0x5e783f*/
          }
          goto LABEL_44; /*0x5e783f*/
        }
      }
      if ( IsRandMap::Sed2((int)MEMORY[0xA8B238]) ) /*0x5e76ef*/
        return InvalidateRect(hWnd, 0, 0); /*0x5e76ef*/
      v8 = (ObjectClass *)MEMORY[0xAC1154]; /*0x5e76fc*/
      if ( !MEMORY[0xAC1154] ) /*0x5e7704*/
        return InvalidateRect(hWnd, 0, 0); /*0x5e7704*/
      ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5e770c*/
      __3_YAXPAX_Z(v8); /*0x5e7712*/
      MEMORY[0xAC1154] = 0; /*0x5e771a*/
      return InvalidateRect(hWnd, 0, 0); /*0x5e7733*/
    default:
LABEL_44:
      v13 = CCFileClass::Construct(Str, &MEMORY[0xA8B8E0]); /*0x5e7845*/
      v14 = (*(int (**)(unsigned int *, unsigned int))(*v13 + 20))(v13, 0); /*0x5e7858*/
      *(unsigned int *)Str = &vt_CCFileClass; /*0x5e7864*/
      v15 = v14 == 0; /*0x5e786c*/
      *(unsigned int *)&Str[100] = 0; /*0x5e786f*/
      Vector::Clear((int)&Str[88]); /*0x5e7876*/
      *(unsigned int *)Str = &off_7E1668; /*0x5e787f*/
      result = ((BufferIOFileClass *)(Str))->Dtor(); /*0x5e7887*/
      if ( !v15 ) /*0x5e788e*/
      {
        result = (int)__2_YAPAXI_Z(4u); /*0x5e7892*/
        if ( !result ) /*0x5e789c*/
        {
          MEMORY[0xAC1154] = 0; /*0x5e78e4*/
          return result; /*0x5e78f4*/
        }
        result = (int)unknown_libname_27((unsigned int *)result); /*0x5e78a0*/
        MEMORY[0xAC1154] = (void *)result; /*0x5e78a5*/
      }
      if ( MEMORY[0xAC1154] ) /*0x5e78b0*/
      {
        if ( IsRandMap::Sed2((int)MEMORY[0xA8B238]) ) /*0x5e78b7*/
        {
          this->ScenarioClass::CopyStartPositions(); /*0x5e78f5*/
          return InvalidateRect(hWnd, 0, 0); /*0x5e78fa*/
        }
        else
        {
          PreviewClass::ReadPreview((char **)MEMORY[0xAC1154], &MEMORY[0xA8B8E0]); /*0x5e78cb*/
          return InvalidateRect(hWnd, 0, 0); /*0x5e78d3*/
        }
      }
      return result;
  }
  while ( 1 ) /*0x5e757e*/
  {
    if ( MEMORY[0xA8B238][0] == 3 ) /*0x5e7584*/
    {
      v3 = Network::SendMessage((int)MEMORY[0xA8E9C0], (int)Str, 47, 1, (int)&MEMORY[0xA8BB1C], 0, 0); /*0x5e759d*/
    }
    else
    {
      Flagged = (int)(this->GameSettings::FindFlagged());
      if ( !Flagged ) /*0x5e75ab*/
        goto LABEL_12; /*0x5e75ab*/
      v5 = CharToWideString(Flagged + 36); /*0x5e75b0*/
      v3 = Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)Str, 47, 1, (wchar_t *)v5); /*0x5e75c4*/
    }
    if ( v3 ) /*0x5e75cb*/
    {
      for ( result = Network::GetQueueCount((int)MEMORY[0xA8E9C0]); /*0x5e75e0*/
            result;
            result = Network::GetQueueCount((int)MEMORY[0xA8E9C0]) )
      {
        Event::Dispatch(); /*0x5e75e6*/
      }
      return result; /*0x5e75f7*/
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
  if ( *((unsigned int *)this + 94) != -2 ) /*0x69b70d*/
    return *((unsigned int *)this + 93); /*0x69b70f*/
  return result; /*0x69b715*/

}
}
// 0x69B720
namespace gamemd {
int Session::GetPlayerColor()
{

  int result; // eax

  result = -2; /*0x69b726*/
  if ( *((unsigned int *)this + 88) != -2 ) /*0x69b72d*/
    return *((unsigned int *)this + 87); /*0x69b72f*/
  return result; /*0x69b735*/

}
}
// 0x5ED370
namespace gamemd {
int Session::StartGame(HWND hWnd)
{

  ObjectClass *v2; // esi
  unsigned int *v3; // eax
  ObjectClass *v4; // eax

  if ( !IsRandMap::Sed(*(unsigned int *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254])) ) /*0x5ed381*/
    return Session::PrepareGame(hWnd); /*0x5ed3f1*/
  v2 = (ObjectClass *)MEMORY[0xAC1154]; /*0x5ed38b*/
  if ( MEMORY[0xAC1154] ) /*0x5ed393*/
  {
    ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5ed397*/
    __3_YAXPAX_Z(v2); /*0x5ed39d*/
  }
  v3 = __2_YAPAXI_Z(4u); /*0x5ed3a7*/
  if ( v3 ) /*0x5ed3b2*/
    v4 = (ObjectClass *)unknown_libname_27(v3); /*0x5ed3b6*/
  else
    v4 = 0; /*0x5ed3bd*/
  MEMORY[0xAC1154] = v4; /*0x5ed3c6*/
  Surface::LoadToSurfaceSHP((char **)v4, stru_829ABC); /*0x5ed3cb*/
  if ( !*(unsigned int *)MEMORY[0xAC1154] ) /*0x5ed3d6*/
    Session::PrepareGame(hWnd); /*0x5ed3dd*/
  return InvalidateRect(hWnd, 0, 0); /*0x5ed3ed*/

}
} // namespace gamemd
