// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5B1D90_e4.hpp"
#include "e4/classes/E4Recv_5B3910_e4.hpp"
#include "e4/classes/E4Recv_5B3E90_e4.hpp"
#include "e4/classes/E4Recv_5B3F50_e4.hpp"
#include "e4/classes/E4Recv_5B4350_e4.hpp"
#include "e4/classes/E4Recv_5B4400_e4.hpp"
#include "e4/classes/E4Recv_5B57D0_e4.hpp"
#include "e4/classes/E4Recv_5B5960_e4.hpp"
#include "e4/classes/E4Recv_5B5A50_e4.hpp"
#include "e4/classes/E4Recv_5B6DA0_e4.hpp"
#include "e4/classes/E4Recv_5B9250_e4.hpp"
#include "e4/classes/E4Recv_5B93F0_e4.hpp"
#include "e4/classes/E4Recv_5B9450_e4.hpp"
#include "e4/classes/E4Recv_5B94C0_e4.hpp"
#include "e4/classes/E4Recv_5BAA80_e4.hpp"
#include "e4/classes/E4Recv_5BCB90_e4.hpp"
#include "e4/classes/E4Recv_5BCC30_e4.hpp"
#include "e4/classes/E4Recv_5BCC60_e4.hpp"
#include "e4/classes/E4Recv_5BCCE0_e4.hpp"
#include "e4/classes/E4Recv_5BCE10_e4.hpp"
#include "e4/classes/E4Recv_5BD2E0_e4.hpp"
#include "e4/classes/E4Recv_5BD560_e4.hpp"
#include "e4/classes/E4Recv_5BDA40_e4.hpp"
#include "e4/classes/E4Recv_5BECC0_e4.hpp"
#include "e4/classes/E4Recv_5BF360_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/BinkMovie_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/MovieClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/SideClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"

// 0x5B3B10
namespace gamemd {
void sub_5B3B10()
{
  int v0; // edx
  int v1; // edi
  int v2; // ecx
  int v3; // esi
  _DWORD *v4; // eax

  if ( (byte_ABF008 & 1) == 0 ) /*0x5b3b1b*/
  {
    byte_ABF008 |= 1u; /*0x5b3b25*/
    MixFileClass_MIXes = (int)&GenericList_vftable; /*0x5b3b2b*/
  LABEL_3:
    v0 = dword_ABEFE0; /*0x5b3b37*/
    while ( dword_ABEFE0 && *(_DWORD *)(dword_ABEFE0 + 4) && *(_DWORD *)(dword_ABEFE0 + 8) && dword_ABEFE0 ) /*0x5b3b4d*/
    {
      v1 = *(_DWORD *)(dword_ABEFE0 + 4); /*0x5b3b4f*/
      v2 = dword_ABEFE0 + 4; /*0x5b3b52*/
      if ( v1 ) /*0x5b3b57*/
      {
        v3 = *(_DWORD *)(dword_ABEFE0 + 8); /*0x5b3b59*/
        v4 = (_DWORD *)(dword_ABEFE0 + 8); /*0x5b3b5c*/
        if ( v3 ) /*0x5b3b61*/
        {
          *(_DWORD *)(v3 + 4) = v1; /*0x5b3b63*/
          *(_DWORD *)(*(_DWORD *)v2 + 8) = *v4; /*0x5b3b6a*/
          *v4 = 0; /*0x5b3b6d*/
          *(_DWORD *)v2 = 0; /*0x5b3b6f*/
          goto LABEL_3; /*0x5b3b71*/
        }
      }
    }
    dword_ABEFE8 = (int)&GenericNode_vftable; /*0x5b3b7f*/
    if ( &dword_ABEFE8 && dword_ABEFEC && g_MixFilePool_Root ) /*0x5b3b98*/
    {
      *(_DWORD *)(g_MixFilePool_Root + 4) = dword_ABEFEC; /*0x5b3b9a*/
      *(_DWORD *)(dword_ABEFEC + 8) = g_MixFilePool_Root; /*0x5b3ba9*/
      v0 = dword_ABEFE0; /*0x5b3bac*/
      g_MixFilePool_Root = 0; /*0x5b3bb2*/
      dword_ABEFEC = 0; /*0x5b3bb8*/
    }
    dword_ABEFDC = (int)&GenericNode_vftable; /*0x5b3bc3*/
    if ( &dword_ABEFDC && v0 && dword_ABEFE4 ) /*0x5b3bda*/
    {
      *(_DWORD *)(dword_ABEFE4 + 4) = v0; /*0x5b3bdc*/
      *(_DWORD *)(dword_ABEFE0 + 8) = dword_ABEFE4; /*0x5b3beb*/
      dword_ABEFE4 = 0; /*0x5b3bee*/
      dword_ABEFE0 = 0; /*0x5b3bf4*/
    }
  }
}
}
// 0x5B3FF0
namespace gamemd {
unsigned int * sub_5B3FF0(unsigned int * a1, unsigned int * a2)
{
  _DWORD *result; // eax

  for ( result = (_DWORD *)*a2; *a2; result = (_DWORD *)*a2 ) /*0x5b3ff0*/
  {
    a2 = result + 1; /*0x5b3fff*/
    if ( result[2] >= a1[2] ) /*0x5b4002*/
      a2 = result; /*0x5b4004*/
  }
  *a2 = a1; /*0x5b400d*/
  *a1 = 0; /*0x5b400f*/
  a1[1] = 0; /*0x5b4015*/
  return result; /*0x5b401c*/
}
}
// 0x5B40B0
namespace gamemd {
AbstractClass * * SearchMIXFile(char * Source, IUnknown * aP1)
{
  int v3; // edi
  unsigned int v4;
  int v5; // ecx
  bool v6; // cc
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  void * v10;
  int v11;
  _DWORD v13[22]; // [esp+20h] [ebp-170h] BYREF
  _BYTE v14[12]; // [esp+78h] [ebp-118h] BYREF
  int v15; // [esp+84h] [ebp-10Ch]
  char Str[260]; // [esp+8Ch] [ebp-104h] BYREF

  strcpy(Str, Source); /*0x5b40dd*/
  _strupr(Str); /*0x5b40ee*/
  v3 = Checksummer::Add_Buffer(Str, strlen(Str)); /*0x5b4127*/
  v4 = g_FileCacheHashRoot; /*0x5b4129*/
  if ( !g_FileCacheHashRoot ) /*0x5b4130*/
    goto LABEL_9; /*0x5b4130*/
  while ( 1 ) /*0x5b4132*/
  {
    v5 = v4[2]; /*0x5b4132*/
    v6 = v5 < v3; /*0x5b4135*/
    if ( v5 == v3 ) /*0x5b4137*/
      break; /*0x5b4137*/
  LABEL_5:
    if ( v6 ) /*0x5b4140*/
      v4 = (_DWORD *)v4[1]; /*0x5b4142*/
    else
      v4 = (_DWORD *)*v4; /*0x5b4147*/
    if ( !v4 ) /*0x5b414b*/
      goto LABEL_9; /*0x5b414b*/
  }
  if ( !v4[3] ) /*0x5b4139*/
  {
    v6 = v5 < v3; /*0x5b413e*/
    goto LABEL_5; /*0x5b413e*/
  }
  if ( v4 ) /*0x5b419d*/
    return v4[3]; /*0x5b41ac*/
  LABEL_9:
  CCFileClass::Construct(v13, Source); /*0x5b414d*/
  if ( (unsigned __int8)CCFileClass::Open(0) ) /*0x5b415c*/
  {
    v8 = RA2_OPNEW(0x10u); /*0x5b41af*/
    v9 = v8; /*0x5b41b4*/
    v8[2] = v3; /*0x5b41b9*/
    if ( g_FileCacheHashRoot ) /*0x5b41c4*/
    {
      InsertIntoHashTree(v8); /*0x5b41dd*/
    }
    else
    {
      g_FileCacheHashRoot = v8; /*0x5b41c6*/
      *v8 = 0; /*0x5b41cc*/
      v8[1] = 0; /*0x5b41ce*/
    }
    if ( aP1 || strstr(Str, Ext) ) /*0x5b41f5*/
    {
      v11 = RA2_OPNEW(0x24u); /*0x5b4210*/
      if ( v11 ) /*0x5b421a*/
        v10 = LoadSHPFile(v11, Source); /*0x5b4224*/
      else
        v10 = 0; /*0x5b4228*/
    }
    else
    {
      v10 = CCFileClass::ReadEntireFile(v13); /*0x5b420a*/
    }
    v9[3] = v10; /*0x5b422a*/
    v13[0] = (void*)&CCFileClass_vftable; /*0x5b4231*/
    v15 = 0; /*0x5b4239*/
    Vector::Clear(v14); /*0x5b4240*/
    v13[0] = &off_7E1668; /*0x5b4249*/
    BufferIOFileClass::Dtor(v13); /*0x5b4251*/
    return v10; /*0x5b4256*/
  }
  else
  {
    v13[0] = (void*)&CCFileClass_vftable; /*0x5b4169*/
    v15 = 0; /*0x5b4171*/
    Vector::Clear(v14); /*0x5b4178*/
    v13[0] = &off_7E1668; /*0x5b4181*/
    BufferIOFileClass::Dtor(v13); /*0x5b4189*/
    return 0; /*0x5b418e*/
  }
}
}
// 0x5B4430
namespace gamemd {
ObjectClass * * FileInfoCache_Lookup(const char * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4, unsigned int * a5)
{
  int v5; // eax
  _DWORD *v6; // ebp
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  int v10; // edx
  int v11; // eax
  unsigned int v14[3]; // [esp+18h] [ebp-110h] BYREF
  char String[260]; // [esp+24h] [ebp-104h] BYREF

  if ( !a1 ) /*0x5b4442*/
    return 0; /*0x5b4442*/
  strcpy(String, a1); /*0x5b4462*/
  _strupr(String); /*0x5b4470*/
  memset(v14, 0, sizeof(v14)); /*0x5b4490*/
  v5 = Checksummer::Add_Buffer(v14, (unsigned __int8 *)String, strlen(String)); /*0x5b449c*/
  v6 = (_DWORD *)dword_ABEFE0; /*0x5b44a1*/
  LABEL_3:
  while ( 2 ) /*0x5b44c0*/
  {
    if ( !v6 || !v6[1] || !v6[2] ) /*0x5b44c0*/
      return 0; /*0x5b4580*/
    v7 = v6[5]; /*0x5b44cb*/
    v8 = v6[8]; /*0x5b44ce*/
    if ( v7 <= 0 ) /*0x5b44d3*/
      goto LABEL_14; /*0x5b44d3*/
    while ( 1 ) /*0x5b44df*/
    {
      v9 = *(_DWORD *)(v8 + 12 * (v7 / 2)); /*0x5b44df*/
      v10 = v8 + 12 * (v7 / 2); /*0x5b44e2*/
      if ( v9 <= v5 ) /*0x5b44e7*/
        break; /*0x5b44e7*/
      v7 /= 2; /*0x5b44e9*/
  LABEL_11:
      if ( v7 <= 0 ) /*0x5b44fb*/
      {
        v6 = (_DWORD *)v6[1]; /*0x5b44fd*/
        goto LABEL_3; /*0x5b4501*/
      }
    }
    if ( v9 != v5 ) /*0x5b44ed*/
    {
      v8 = v10 + 12; /*0x5b44ef*/
      v7 += -1 - v7 / 2; /*0x5b44f7*/
      goto LABEL_11; /*0x5b44f7*/
    }
    if ( !v10 ) /*0x5b4505*/
    {
  LABEL_14:
      v6 = (_DWORD *)v6[1]; /*0x5b4507*/
      continue; /*0x5b450b*/
    }
    break;
  }
  if ( a3 ) /*0x5b4516*/
    *a3 = v6; /*0x5b4518*/
  if ( a5 ) /*0x5b4523*/
    *a5 = *(_DWORD *)(v10 + 8); /*0x5b4528*/
  if ( a2 ) /*0x5b4530*/
    *a2 = 0; /*0x5b4532*/
  if ( a4 ) /*0x5b4541*/
    *a4 = *(_DWORD *)(v10 + 4); /*0x5b4546*/
  if ( a2 ) /*0x5b454a*/
  {
    v11 = v6[9]; /*0x5b454c*/
    if ( v11 ) /*0x5b4551*/
      *a2 = v11 + *(_DWORD *)(v10 + 4); /*0x5b4558*/
  }
  if ( !v6[9] ) /*0x5b455a*/
  {
    if ( a4 ) /*0x5b4563*/
      *a4 += v6[7]; /*0x5b456c*/
  }
  return 1; /*0x5b456e*/
}
}
// 0x5B4B10
namespace gamemd {
void GameSetupDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ebp
  HWND v6; // eax
  HWND DlgItem; // eax
  HWND v8; // esi
  char *v9; // eax
  HWND v10; // eax
  HWND v11; // esi
  LRESULT v12; // eax
  HWND v13; // eax
  HWND v14; // edi
  unsigned int v15;
  int v16; // [esp-4h] [ebp-338h] BYREF
  wchar_t v17[22]; // [esp+Ch] [ebp-328h] BYREF
  _DWORD v18[62]; // [esp+38h] [ebp-2FCh] BYREF
  __int16 v19; // [esp+130h] [ebp-204h]
  wchar_t lParam[256]; // [esp+134h] [ebp-200h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x5b4b38*/
  if ( result ) /*0x5b4b3f*/
    return result; /*0x5b4b3f*/
  WindowLongA = GetWindowLongA(hWnd, 8); /*0x5b4b4f*/
  switch ( a2 ) /*0x5b4b56*/
  {
    case 2u: /*0x5b4b56*/
      v15 = g_UIControlState; /*0x5b4ead*/
      if ( g_UIControlState ) /*0x5b4eb5*/
      {
        ComPtr::Dtor(g_UIControlState); /*0x5b4eb9*/
        RA2_OPDEL(v15); /*0x5b4ebf*/
        g_UIControlState = 0; /*0x5b4ec7*/
      }
      return 0; /*0x5b4ec7*/
    case 0xFu: /*0x5b4b56*/
      if ( g_UIControlState ) /*0x5b4e8d*/
        Skirmish::RenderPreview(g_UIControlState, hWnd); /*0x5b4e90*/
      ValidateRect(hWnd, 0); /*0x5b4e98*/
      return 0; /*0x5b4ea1*/
    case 0x111u: /*0x5b4b56*/
      if ( (unsigned __int16)a3 <= 0x540u ) /*0x5b4b7c*/
      {
        if ( (unsigned __int16)a3 == 1344 ) /*0x5b4b82*/
        {
          if ( IDA_HIWORD(a3) == 1281 ) /*0x5b4c4b*/
          {
            DlgItem = GetDlgItem(*(HWND *)WindowLongA, 1344); /*0x5b4c5a*/
            v8 = DlgItem; /*0x5b4c60*/
            if ( DlgItem ) /*0x5b4c64*/
            {
              SendMessageA(DlgItem, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b4c83*/
              SendMessageA(v8, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5b4c92*/
              if ( wcslen(lParam) ) /*0x5b4c9c*/
              {
                if ( lParam[0] != 13 ) /*0x5b4cb5*/
                {
                  WideString::Trim(lParam); /*0x5b4cc2*/
                  if ( &v16 != (int *)-312 ) /*0x5b4cd0*/
                  {
                    memset(v18, 0, sizeof(v18)); /*0x5b4ce5*/
                    v19 = 0; /*0x5b4ce7*/
                    v18[0] = 104; /*0x5b4cf3*/
                    strcpy((char *)&v18[1], g_GameSetupBuffer); /*0x5b4d11*/
                    IDA_LOBYTE(v18[6]) = g_TauntCommandState; /*0x5b4d26*/
                    wcscpy((wchar_t *)((char *)&v18[6] + 1), lParam); /*0x5b4d2a*/
                    Stream::WriteBlock((int)&g_EventManager, (int)v18, 250, 1); /*0x5b4d43*/
                    Stream::ReadPacket((int)&g_EventManager); /*0x5b4d4d*/
                    v9 = CharToWideString(g_GameSetupBuffer); /*0x5b4d57*/
                    UI_Setup((wchar_t *)v9, g_TauntCommandState, (int)lParam); /*0x5b4d6e*/
                    return 0; /*0x5b4d7f*/
                  }
                }
              }
            }
          }
          return 0; /*0x5b4cd0*/
        }
        if ( (unsigned __int16)a3 != 1 ) /*0x5b4b89*/
        {
          if ( (unsigned __int16)a3 == 2 ) /*0x5b4b8c*/
          {
            if ( !IDA_HIWORD(a3) ) /*0x5b4bbb*/
            {
              Game::processStartup(WindowLongA); /*0x5b4bc6*/
              *(_DWORD *)(WindowLongA + 4) = 2; /*0x5b4bcb*/
              return 0; /*0x5b4bde*/
            }
          }
          else if ( (unsigned __int16)a3 == 1029 && IDA_HIWORD(a3) == 1 ) /*0x5b4b9f*/
          {
            ModemGame::AdvanceTauntCommand(WindowLongA); /*0x5b4ba7*/
            return 0; /*0x5b4bb8*/
          }
          return 0; /*0x5b4b9f*/
        }
        if ( !IDA_HIWORD(a3) ) /*0x5b4be1*/
        {
          v6 = GetDlgItem(*(HWND *)WindowLongA, 1); /*0x5b4bf4*/
          if ( v6 ) /*0x5b4bfc*/
            EnableWindow(v6, 0); /*0x5b4c01*/
          memset(v18, 0, sizeof(v18)); /*0x5b4c13*/
          v19 = 0; /*0x5b4c1e*/
          v18[0] = 116; /*0x5b4c26*/
          Stream::WriteBlock((int)&g_EventManager, (int)v18, 250, 1); /*0x5b4c2e*/
          return 0; /*0x5b4c3f*/
        }
        return 0; /*0x5b4ed1*/
      }
      if ( (unsigned __int16)a3 != 1473 ) /*0x5b4d87*/
      {
        if ( (unsigned __int16)a3 == 1639 && IDA_HIWORD(a3) == 1 ) /*0x5b4d9e*/
        {
          v10 = GetDlgItem(*(HWND *)WindowLongA, 1639); /*0x5b4da9*/
          v11 = v10; /*0x5b4daf*/
          if ( v10 ) /*0x5b4db3*/
          {
            v12 = SendMessageA(v10, 0x147u, 0, 0); /*0x5b4dc9*/
            if ( v12 != -1 ) /*0x5b4dce*/
            {
              g_CommandExecState = SendMessageA(v11, 0x150u, v12, 0); /*0x5b4ddf*/
              *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b4de4*/
              *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b4de7*/
              return 0; /*0x5b4df6*/
            }
          }
        }
        return 0; /*0x5b4dce*/
      }
      if ( IDA_HIWORD(a3) != 1281 && IDA_HIWORD(a3) != 768 ) /*0x5b4e08*/
        return 0; /*0x5b4e08*/
      v13 = GetDlgItem(*(HWND *)WindowLongA, 1473); /*0x5b4e17*/
      v14 = v13; /*0x5b4e1d*/
      if ( !v13 ) /*0x5b4e21*/
        return 0; /*0x5b4e21*/
      SendMessageA(v13, 0x4B3u, 0x15u, (LPARAM)v17); /*0x5b4e3a*/
      WideString::Trim(v17); /*0x5b4e40*/
      if ( IDA_HIWORD(a3) != 768 ) /*0x5b4e4a*/
        SendMessageA(v14, 0x4B2u, 0, (LPARAM)v17); /*0x5b4e59*/
      CopyWideToChar(g_GameSetupBuffer, (char *)v17, -1); /*0x5b4e66*/
      *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b4e72*/
      *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b4e75*/
      return 0; /*0x5b4e70*/
    default:
      return 0; /*0x5b4b6a*/
  }
}
}
// 0x5B67F0
namespace gamemd {
AbstractClass * * ApplyGameOptions(CampaignScore * aP0)
{
  int v1; // esi
  int v2; // eax
  int v3; // eax
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  bool v9; // al
  int v10; // edi
  const wchar_t *v11; // esi

  if ( Bases == (*(_BYTE *)(aP0 + 130) & 1) ) /*0x5b6807*/
  {
    v1 = *(_DWORD *)(aP0 + 142); /*0x5b680d*/
    if ( (_BYTE)MCVRedeploy == ((v1 & 4) != 0) && HarvesterTruce == ((v1 & 2) != 0) ) /*0x5b6836*/
    {
      v2 = *(_DWORD *)(aP0 + 130); /*0x5b683c*/
      if ( BridgeDestruction == ((v2 & 2) != 0) /*0x5b68f2*/
        && Crates == ((v2 & 4) != 0)
        && FOW == ((v1 & 8) != 0)
        && g_Rules_AlliesAllowed == aP0->__pad_08C
        && dword_A8B278 == *(unsigned __int8 *)(aP0 + 141)
        && g_RulesInitConfig == *(unsigned __int8 *)(aP0 + 138)
        && g_Rules_Bases == *(_DWORD *)(aP0 + 126)
        && g_Rules_MultiEngineer == *(unsigned __int8 *)(aP0 + 139)
        && g_MenuRandomSeed == *(_DWORD *)(aP0 + 146) )
      {
        if ( (unsigned __int8)ApplyGameOptions_Helper(aP0 + 150) ) /*0x5b6904*/
        {
          if ( g_Rules_EngineerCount == *(unsigned __int8 *)(aP0 + 162) ) /*0x5b6920*/
          {
            v3 = *(_DWORD *)(aP0 + 142); /*0x5b6926*/
            if ( ShortGame == ((v3 & 0x10) != 0) /*0x5b69da*/
              && SWAllowed == ((v3 & 0x20) != 0)
              && (_BYTE)g_Rules_ShortGame == ((v3 & 0x40) != 0)
              && MultiEngineer == ((v3 & 0x80) != 0)
              && !_strcmpi(&Destination, (const void *)(aP0 + 163))
              && !strcmp(&g_MultiplayerFlags, (const char *)(aP0 + 176))
              && g_MultiplayerConfigState == *(_DWORD *)(aP0 + 158) )
            {
              return 0; /*0x5b69de*/
            }
          }
        }
      }
    }
  }
  Debug::Log(); /*0x5b69e9*/
  Bases = *(_BYTE *)(aP0 + 130) & 1; /*0x5b69fa*/
  IDA_LOBYTE(MCVRedeploy) = (*(_DWORD *)(aP0 + 142) & 4) != 0; /*0x5b6a0c*/
  g_IntroMovieObject = g_IntroMovieObject; /*0x5b6a18*/
  IDA_BYTE1(g_IntroMovieObject) = IDA_BYTE1(g_IntroMovieObject) & 0x7F; /*0x5b6a22*/
  BridgeDestruction = (*(_DWORD *)(aP0 + 130) & 2) != 0; /*0x5b6a25*/
  g_IntroMovieObject = g_IntroMovieObject | ((*(_DWORD *)(aP0 + 130) & 2) << 14); /*0x5b6a38*/
  Crates = (*(_DWORD *)(aP0 + 130) & 4) != 0; /*0x5b6a49*/
  FOW = (*(_DWORD *)(aP0 + 142) & 8) != 0; /*0x5b6a5c*/
  HarvesterTruce = (*(_DWORD *)(aP0 + 142) & 2) != 0; /*0x5b6a6f*/
  g_Rules_AlliesAllowed = aP0->__pad_08C; /*0x5b6a7b*/
  dword_A8B278 = *(unsigned __int8 *)(aP0 + 141); /*0x5b6a88*/
  g_RulesInitConfig = *(unsigned __int8 *)(aP0 + 138); /*0x5b6a96*/
  g_Rules_Bases = *(_DWORD *)(aP0 + 126); /*0x5b6a9f*/
  g_Rules_MultiEngineer = *(unsigned __int8 *)(aP0 + 139); /*0x5b6aaa*/
  g_MenuRandomSeed = *(_DWORD *)(aP0 + 146); /*0x5b6ab6*/
  v6 = *(_DWORD *)(aP0 + 150); /*0x5b6abc*/
  g_IntroMovieObject = v6; /*0x5b6ac4*/
  IDA_LOBYTE(v6) = v6 | 0xC0; /*0x5b6acf*/
  g_Rules_EngineerCount = *(unsigned __int8 *)(aP0 + 162); /*0x5b6ad1*/
  *(_DWORD *)g_Rules_EngineerCount = g_Rules_EngineerCount; /*0x5b6ad7*/
  ShortGame = (*(_DWORD *)(aP0 + 142) & 0x10) != 0; /*0x5b6ae9*/
  SWAllowed = (*(_DWORD *)(aP0 + 142) & 0x20) != 0; /*0x5b6afb*/
  IDA_LOBYTE(g_Rules_ShortGame) = (*(_DWORD *)(aP0 + 142) & 0x40) != 0; /*0x5b6b0d*/
  v7 = *(_DWORD *)(aP0 + 142) >> 7; /*0x5b6b19*/
  g_IntroMovieObject = v6; /*0x5b6b1c*/
  MultiEngineer = v7 & 1; /*0x5b6b29*/
  v8 = *(_DWORD *)v8; /*0x5b6b2f*/
  IDA_BYTE1(v8) = IDA_BYTE1(*(_DWORD *)v8) & 0xFB; /*0x5b6b31*/
  *(_DWORD *)v8 = v8; /*0x5b6b34*/
  AlliesAllowed = 1; /*0x5b6b3b*/
  nullsub_37(&g_IntroMovieObject); /*0x5b6b42*/
  if ( _strcmpi(&Destination, (const void *)(aP0 + 163)) /*0x5b6ba4*/
    || _strcmpi(&g_MultiplayerFlags, (const void *)(aP0 + 176))
    || (_BYTE)g_MultiplayerSetupState != ((*(_DWORD *)(aP0 + 130) & 0x10) != 0)
    || g_MultiplayerConfigState != *(_DWORD *)(aP0 + 158)
    || !IDA_HIWORD(MCVRedeploy) )
  {
    Debug::Log(); /*0x5b6baf*/
    strcpy(&Destination, (const char *)(aP0 + 163)); /*0x5b6bce*/
    strcpy(&g_MultiplayerFlags, (const char *)(aP0 + 176)); /*0x5b6bf4*/
    v9 = (*(_DWORD *)(aP0 + 130) & 0x10) != 0; /*0x5b6c0b*/
    IDA_LOBYTE(g_MultiplayerSetupState) = v9; /*0x5b6c12*/
    g_MultiplayerConfigState = *(_DWORD *)(aP0 + 158); /*0x5b6c1d*/
    if ( !strcmp(&Destination, g_Str_File_RandMap_Sed) && v9 || (v10 = 0, g_MultiplayerOptions <= 0) ) /*0x5b6c5d*/
    {
  LABEL_33:
      wcscpy((wchar_t *)&MCVRedeploy + 1, (const wchar_t *)(aP0 + 38)); /*0x5b6c86*/
    }
    else
    {
      while ( 1 ) /*0x5b6c64*/
      {
        v11 = *(const wchar_t **)(g_MultiplayerGameState + 4 * v10); /*0x5b6c64*/
        if ( !_strcmpi(&Destination, v11 + 44) ) /*0x5b6c70*/
          break; /*0x5b6c70*/
        if ( ++v10 >= g_MultiplayerOptions ) /*0x5b6c84*/
          goto LABEL_33; /*0x5b6c84*/
      }
      wcscpy((wchar_t *)&MCVRedeploy + 1, v11); /*0x5b6cc4*/
    }
    g_UIControlState = g_UIControlState; /*0x5b6c94*/
    if ( g_UIControlState ) /*0x5b6c9f*/
    {
      ComPtr::Dtor(g_UIControlState); /*0x5b6ca3*/
      RA2_OPDEL(g_UIControlState); /*0x5b6ca9*/
      g_UIControlState = 0; /*0x5b6cb1*/
    }
  }
  return 1; /*0x5b69dc*/
}
}
// 0x5BB290
namespace gamemd {
LZOPipe * * __usercall GenerateRandomMapPreview(int a1@<esi> a1)
{
  int v1; // eax
  int v2; // eax
  int *Palette; // esi
  void *v4; // edi
  int v5; // esi
  DWORD v6; // esi
  signed int Buffer; // [esp+10h] [ebp-280h] BYREF
  DWORD TicksTimer; // [esp+14h] [ebp-27Ch]
  int v9; // [esp+18h] [ebp-278h]
  int v10; // [esp+1Ch] [ebp-274h]
  int v11; // [esp+24h] [ebp-26Ch]
  int v12[3]; // [esp+2Ch] [ebp-264h] BYREF
  _DWORD v13[4]; // [esp+38h] [ebp-258h] BYREF
  _BYTE v14[4]; // [esp+48h] [ebp-248h] BYREF
  LPCSTR v15[9]; // [esp+4Ch] [ebp-244h] BYREF
  int v16[10]; // [esp+70h] [ebp-220h] BYREF
  _DWORD v17[62]; // [esp+98h] [ebp-1F8h] BYREF
  __int16 v18; // [esp+190h] [ebp-100h]
  _DWORD v19[63]; // [esp+194h] [ebp-FCh] BYREF

  TicksTimer = Timer::GetTicks(); /*0x5bb2af*/
  v10 = 0; /*0x5bb2b3*/
  if ( !_strcmpi(&Destination, g_Str_File_RandMap_Sed) ) /*0x5bb2b7*/
  {
    Debug::Log(); /*0x5bb2cc*/
    memset(v17, 0, sizeof(v17)); /*0x5bb2e2*/
    v18 = 0; /*0x5bb2e4*/
    v17[0] = 117; /*0x5bb2fa*/
    Stream::WriteBlock((int)&g_EventManager, (int)v17, 250, 1); /*0x5bb305*/
    v10 = 600; /*0x5bb31c*/
    TicksTimer = Timer::GetTicks(); /*0x5bb325*/
    v9 = v11; /*0x5bb329*/
    while ( Count::GetCountQueue(&g_EventManager) > 0 ) /*0x5bb337*/
    {
      a1 = v10; /*0x5bb33d*/
      if ( TicksTimer != -1 ) /*0x5bb343*/
      {
        v1 = Timer::GetTicks() - TicksTimer; /*0x5bb34e*/
        if ( v1 >= v10 ) /*0x5bb354*/
          break; /*0x5bb354*/
        a1 = v10 - v1; /*0x5bb356*/
      }
      if ( !a1 ) /*0x5bb35a*/
        break; /*0x5bb35a*/
      Event::Dispatch(); /*0x5bb35c*/
    }
    TicksTimer = Timer::GetTicks(); /*0x5bb36f*/
    v9 = v11; /*0x5bb385*/
    v10 = 1800; /*0x5bb389*/
    while ( 1 ) /*0x5bb392*/
    {
      Event::Dispatch(); /*0x5bb392*/
      if ( ObjectTypeClass::CreateInstance((int)&g_EventManager, (int)v19, (int)v14) > 0 && v19[0] == 118 ) /*0x5bb3b9*/
        break; /*0x5bb3b9*/
      a1 = v10; /*0x5bb3bf*/
      if ( TicksTimer != -1 ) /*0x5bb3c5*/
      {
        v2 = Timer::GetTicks() - TicksTimer; /*0x5bb3d0*/
        if ( v2 >= v10 ) /*0x5bb3d6*/
          goto LABEL_15; /*0x5bb3d6*/
        a1 = v10 - v2; /*0x5bb3d8*/
      }
      if ( !a1 ) /*0x5bb3dc*/
      {
  LABEL_15:
        Debug::Log(); /*0x5bb3de*/
        return; /*0x5bb3f5*/
      }
    }
    Buffer = 0; /*0x5bb403*/
    Palette = Palette::Preview_Generate((int *)g_UIControlState, a1, 64, (size_t *)&Buffer); /*0x5bb410*/
    Debug::Log(); /*0x5bb418*/
    v4 = RA2_OPNEW(4 * Buffer); /*0x5bb435*/
    v12[1] = 0; /*0x5bb437*/
    v12[2] = 0; /*0x5bb448*/
    v12[0] = (int)&Pipe_vftable; /*0x5bb44c*/
    Buffer::Init(v13, (int)v4, 4 * Buffer); /*0x5bb454*/
    v13[3] = 0; /*0x5bb463*/
    v12[0] = (int)&BufferPipe_vftable; /*0x5bb467*/
    LZOPipe::Constructor(v16, 0, 0x2000); /*0x5bb46f*/
    Pipe::SetDelegate(v16, (int)v12); /*0x5bb47d*/
    v5 = Compression::Read((int)v16, (int)Palette, Buffer); /*0x5bb499*/
    v6 = (*(int (__thiscall **)(int *))(v16[0] + 4))(v16) + v5; /*0x5bb49e*/
    Debug::Log(); /*0x5bb4a6*/
    RawFileClass::Construct(v15, (int)g_Str_File_Preview_bin); /*0x5bb4b7*/
    if ( FileClass::Open((int *)v15, 0) ) /*0x5bb4c1*/
      FileClass::Delete(v15); /*0x5bb4ce*/
    FileClass::Open2(v15, (const CHAR *)2); /*0x5bb4d9*/
    FileClass::Write2((int *)v15, &Buffer, 4u); /*0x5bb4e9*/
    FileClass::Write2((int *)v15, v4, v6); /*0x5bb4f4*/
    FileClass::CloseHandle((HANDLE *)v15); /*0x5bb4fd*/
    RA2_OPDEL(v4); /*0x5bb503*/
    Debug::Log(); /*0x5bb50d*/
    SendNetworkFile(g_Str_File_Preview_bin, 1, 0, 0); /*0x5bb521*/
    RawFileClass::Dtor((int *)v15); /*0x5bb52a*/
    LZOPipe::Destructor(v16); /*0x5bb533*/
    Vector::Clear((int)v13); /*0x5bb53c*/
    Pipe::Dtor(v12); /*0x5bb545*/
  }
}
}
// 0x5BC6E0
namespace gamemd {
void AudioDebug_DlgProc(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  char *v9; // ecx
  int Index; // eax
  void *Enabled; // eax
  char *v12; // eax
  _DWORD *v13; // ecx
  _BYTE *v14; // ecx
  int v15; // eax
  _BYTE *v16; // ecx
  int v17; // edi
  _DWORD *v18; // ebx
  _BYTE *v19; // edx
  _DWORD *v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // edi
  _DWORD *v24; // ebx
  _BYTE *v25; // edx
  _DWORD *v26; // eax
  int v27; // esi
  int v28; // [esp-4h] [ebp-50h]
  struct tagPAINTSTRUCT Paint; // [esp+Ch] [ebp-40h] BYREF

  if ( a2 == 15 ) /*0x5bc6ed*/
  {
    InvalidateRect(hWnd, 0, 1); /*0x5bc6f8*/
    BeginPaint(hWnd, &Paint); /*0x5bc704*/
    if ( dword_ABF23C ) /*0x5bc712*/
    {
      if ( g_MiscFlag ) /*0x5bc71b*/
        Text::DrawRepeated((void *)dword_ABF23C, 0, 0, 80, 25); /*0x5bc732*/
    }
    EndPaint(hWnd, &Paint); /*0x5bc73d*/
    return 1; /*0x5bc74e*/
  }
  if ( a2 == 258 ) /*0x5bc756*/
  {
    if ( !dword_ABF224 ) /*0x5bc763*/
    {
      dword_ABF224 = (int)dword_ABF198; /*0x5bc76a*/
      AudioController::Init(dword_ABF198); /*0x5bc770*/
    }
    switch ( a3 ) /*0x5bc78d*/
    {
      case ',': /*0x5bc78d*/
      case '<': /*0x5bc78d*/
        v15 = *(_DWORD *)(dword_ABF23C + 10008) + 1; /*0x5bc9d1*/
        if ( *(_DWORD *)(dword_ABF23C + 10008) == 7 ) /*0x5bc9d5*/
          v15 = 0; /*0x5bc9d7*/
        v16 = (_BYTE *)dword_ABF168[v15]; /*0x5bc9d9*/
        v17 = 0; /*0x5bc9e0*/
        dword_ABF23C = (int)v16; /*0x5bc9e2*/
        v18 = v16 + 2000; /*0x5bc9e8*/
        do /*0x5bca11*/
        {
          v19 = &v16[v17]; /*0x5bc9ee*/
          v20 = v18; /*0x5bc9f1*/
          v21 = 80; /*0x5bc9f3*/
          do /*0x5bca08*/
          {
            *v19 = 32; /*0x5bc9f8*/
            *v20 = 0; /*0x5bc9fb*/
            v20 += 25; /*0x5bca01*/
            v19 += 25; /*0x5bca04*/
            --v21; /*0x5bca07*/
          }
          while ( v21 ); /*0x5bca08*/
          ++v17; /*0x5bca0a*/
          ++v18; /*0x5bca0b*/
        }
        while ( v17 < 25 ); /*0x5bca11*/
        goto LABEL_54; /*0x5bca11*/
      case '.': /*0x5bc78d*/
      case '>': /*0x5bc78d*/
        v22 = *(_DWORD *)(dword_ABF23C + 10008) - 1; /*0x5bca38*/
        if ( v22 < 0 ) /*0x5bca39*/
          v22 = 7; /*0x5bca3b*/
        v16 = (_BYTE *)dword_ABF168[v22]; /*0x5bca40*/
        v23 = 0; /*0x5bca47*/
        dword_ABF23C = (int)v16; /*0x5bca49*/
        v24 = v16 + 2000; /*0x5bca4f*/
        do /*0x5bca78*/
        {
          v25 = &v16[v23]; /*0x5bca55*/
          v26 = v24; /*0x5bca58*/
          v27 = 80; /*0x5bca5a*/
          do /*0x5bca6f*/
          {
            *v25 = 32; /*0x5bca5f*/
            *v26 = 0; /*0x5bca62*/
            v26 += 25; /*0x5bca68*/
            v25 += 25; /*0x5bca6b*/
            --v27; /*0x5bca6e*/
          }
          while ( v27 ); /*0x5bca6f*/
          ++v23; /*0x5bca71*/
          ++v24; /*0x5bca72*/
        }
        while ( v23 < 25 ); /*0x5bca78*/
  LABEL_54:
        v16[10036] = 1; /*0x5bca13*/
        Text::DrawRepeated(v16, 0, 0, 80, 25); /*0x5bca22*/
        goto LABEL_45; /*0x5bca27*/
      case '1': /*0x5bc78d*/
      case '2': /*0x5bc78d*/
      case '3': /*0x5bc78d*/
      case '4': /*0x5bc78d*/
        dword_ABF22C = a3 - 49; /*0x5bc799*/
        return 0; /*0x5bc7a5*/
      case 'A': /*0x5bc78d*/
      case 'a': /*0x5bc78d*/
        v14 = (_BYTE *)dword_ABF17C; /*0x5bc987*/
        goto LABEL_44; /*0x5bc987*/
      case 'E': /*0x5bc78d*/
      case 'e': /*0x5bc78d*/
        v7 = dword_ABF220; /*0x5bc80f*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc820*/
        {
          v7 = 0; /*0x5bc822*/
          dword_ABF220 = 0; /*0x5bc824*/
        }
        UpdateThemeManager(v7, 2, dword_ABF22C); /*0x5bc835*/
        goto LABEL_15; /*0x5bc835*/
      case 'I': /*0x5bc78d*/
      case 'i': /*0x5bc78d*/
        v14 = (_BYTE *)dword_ABF184; /*0x5bc9b6*/
        goto LABEL_44; /*0x5bc9bc*/
      case 'L': /*0x5bc78d*/
      case 'l': /*0x5bc78d*/
        if ( AudioSource::Get((int **)dword_ABF224) ) /*0x5bc862*/
        {
          AudioFile::Stop((_DWORD *)dword_ABF224); /*0x5bc871*/
          return 0; /*0x5bc878*/
        }
        else
        {
          v28 = dword_ABF224; /*0x5bc881*/
          v9 = aTestenvelopefs; /*0x5bc887*/
  LABEL_31:
          Index = VocClass::FindIndex(v9); /*0x5bc88c*/
          PlayVocClass(Index, 0x2000, 1.0, v28); /*0x5bc898*/
          return 0; /*0x5bc89f*/
        }
      case 'M': /*0x5bc78d*/
      case 'm': /*0x5bc78d*/
        v14 = (_BYTE *)dword_ABF180; /*0x5bc9be*/
  LABEL_44:
        dword_ABF23C = (int)v14; /*0x5bc98d*/
        TextBuffer::Init(v14); /*0x5bc993*/
  LABEL_45:
        Text::DrawRepeated((void *)dword_ABF23C, 0, 0, 80, 25); /*0x5bc998*/
        return 0; /*0x5bc9b3*/
      case 'N': /*0x5bc78d*/
      case 'n': /*0x5bc78d*/
        dword_ABF21C = dword_ABF21C == 0; /*0x5bc968*/
        return 0; /*0x5bc974*/
      case 'O': /*0x5bc78d*/
      case 'o': /*0x5bc78d*/
        v8 = dword_ABF220; /*0x5bc837*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc848*/
        {
          v8 = 0; /*0x5bc84a*/
          dword_ABF220 = 0; /*0x5bc84c*/
        }
        UpdateThemeManager(v8, -1, -1); /*0x5bc857*/
        goto LABEL_15; /*0x5bc857*/
      case 'Q': /*0x5bc78d*/
      case 'q': /*0x5bc78d*/
        v5 = dword_ABF220; /*0x5bc7a8*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc7b9*/
        {
          v5 = 0; /*0x5bc7bb*/
          dword_ABF220 = 0; /*0x5bc7bd*/
        }
        UpdateThemeManager(v5, 1, dword_ABF22C); /*0x5bc7ce*/
        goto LABEL_15; /*0x5bc7ce*/
      case 'S': /*0x5bc78d*/
      case 's': /*0x5bc78d*/
        sub_406EE0(); /*0x5bc977*/
        return 0; /*0x5bc984*/
      case 'T': /*0x5bc78d*/
      case 't': /*0x5bc78d*/
        v28 = 0; /*0x5bc8a8*/
        v9 = aTesteffect; /*0x5bc8af*/
        goto LABEL_31; /*0x5bc8b4*/
      case 'W': /*0x5bc78d*/
      case 'w': /*0x5bc78d*/
        v6 = dword_ABF220; /*0x5bc7e9*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc7fa*/
        {
          v6 = 0; /*0x5bc7fc*/
          dword_ABF220 = 0; /*0x5bc7fe*/
        }
        UpdateThemeManager(v6, 0, dword_ABF22C); /*0x5bc80d*/
  LABEL_15:
        ++dword_ABF220; /*0x5bc7d3*/
        return 0; /*0x5bc7e6*/
      case '[': /*0x5bc78d*/
        if ( dword_ABF228 >= 5 ) /*0x5bc8bd*/
          return 0; /*0x5bc8bd*/
        Enabled = Audio::GetEnabled(); /*0x5bc8c6*/
        v12 = AudioStream::Constructor(Enabled, 0x1388u); /*0x5bc8cd*/
        *(&dword_ABF114 + dword_ABF228) = v12; /*0x5bc8da*/
        if ( !v12 ) /*0x5bc8e1*/
          return 0; /*0x5bc8e1*/
        if ( ThreadAudioMixerMain(v12, aIntroWav, 1) ) /*0x5bc8ec*/
        {
          ++dword_ABF228; /*0x5bc8fc*/
          return 0; /*0x5bc908*/
        }
        AudioSample::Destructor(*(&dword_ABF114 + dword_ABF228)); /*0x5bc912*/
        break; /*0x5bc912*/
      case ']': /*0x5bc78d*/
        if ( dword_ABF228 <= 0 ) /*0x5bc929*/
          return 0; /*0x5bc929*/
        v13 = (_DWORD *)*(&color + dword_ABF228--); /*0x5bc92b*/
        Audio::Release(v13); /*0x5bc938*/
        AudioSample::Destructor(*(&dword_ABF114 + dword_ABF228)); /*0x5bc94a*/
        return 0; /*0x5bc957*/
      default:
        return 0;
    }
    return 0; /*0x5bc912*/
  }
  if ( a2 != 273 ) /*0x5bca98*/
    return 0; /*0x5bc91f*/
  byte_ABF239 = 0; /*0x5bcaa3*/
  if ( dword_ABF240 ) /*0x5bcaac*/
  {
    g_MiscFlag = 0; /*0x5bcab1*/
    ShowWindow(dword_ABF240, 0); /*0x5bcab8*/
  }
  return 1; /*0x5bc743*/
}
}
// 0x5BCE10
namespace gamemd {
int E4Recv_5BCE10::sub_5BCE10(int a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  int v7; // ebp
  char *v8; // edi
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  int v12; // ebx
  int v15; // ebp
  int v16; // edi
  int v17; // ebx
  int *v18; // ecx
  int *v20; // ebp
  int *v21; // [esp+4h] [ebp-Ch]
  _BYTE *v22; // [esp+8h] [ebp-8h]
  int v23; // [esp+Ch] [ebp-4h]
  int v24; // [esp+Ch] [ebp-4h]
  int v25; // [esp+14h] [ebp+4h]
  int v26; // [esp+14h] [ebp+4h]

  g_MiscFlag = g_MiscFlag; /*0x5bce10*/
  if ( g_MiscFlag ) /*0x5bce1d*/
  {
    v4 = *(&this->q3E85); /*0x5bce27*/
    v5 = *(&this->q3E86); /*0x5bce2d*/
    v6 = *(&this->q3E88); /*0x5bce34*/
    v7 = *(&this->q3E87); /*0x5bce3b*/
    if ( a2 <= 0 ) /*0x5bce44*/
    {
      if ( a2 < 0 ) /*0x5bcef9*/
      {
        v15 = v4 + v7; /*0x5bcefb*/
        if ( v4 < v15 ) /*0x5bceff*/
        {
          v26 = v6 + v5 - 1; /*0x5bcf08*/
          v16 = (int)&this->customSound_controller * v4 + 5 * v4; /*0x5bcf0f*/
          v17 = 500 - (_DWORD)this; /*0x5bcf1f*/
          v18 = &this->customSound_controller * v4 + 5 * v4 + v5 + 500; /*0x5bcf23*/
          v24 = v15 - v4; /*0x5bcf2a*/
          do /*0x5bcf6f*/
          {
            v26 = v26; /*0x5bcf2e*/
            if ( v26 > v5 ) /*0x5bcf34*/
            {
              v20 = this + v26 + v16 + v17; /*0x5bcf3a*/
              do /*0x5bcf50*/
              {
                --v20; /*0x5bcf41*/
                *(_BYTE *)(v16 + v26) = *(_BYTE *)(v16 + v26 - 1); /*0x5bcf44*/
                v20[1] = *v20; /*0x5bcf4a*/
                --v26; /*0x5bcf4d*/
              }
              while ( v26 > v5 ); /*0x5bcf50*/
              v17 = 500 - (_DWORD)this; /*0x5bcf52*/
            }
            *(_BYTE *)(v16 + v5) = 32; /*0x5bcf5a*/
            *v18 = 0; /*0x5bcf5e*/
            v18 += 25; /*0x5bcf64*/
            v16 += 25; /*0x5bcf67*/
            --v24; /*0x5bcf6b*/
          }
          while ( v24 ); /*0x5bcf6f*/
        }
      }
    }
    else if ( v4 < v4 + v7 ) /*0x5bce53*/
    {
      v25 = v6 + v5 - 1; /*0x5bce5d*/
      v8 = (char *)&this->customSound * v4; /*0x5bce67*/
      v9 = v5 + v6 + 25 * v4; /*0x5bce6c*/
      v10 = (int)this + v9 - 1; /*0x5bce72*/
      v11 = (int)(this + v9 + 499); /*0x5bce76*/
      v22 = (_BYTE *)v10; /*0x5bce7d*/
      v23 = *(&this->q3E87); /*0x5bce97*/
      v21 = &this->customSound_controller * v4 + 5 * v4 + v5 + 500; /*0x5bce9b*/
      v12 = v25; /*0x5bce9f*/
      do /*0x5bcef5*/
      {
        v5 = v5; /*0x5bcea5*/
        if ( v5 < v12 ) /*0x5bcea7*/
        {
          v21 = v21; /*0x5bcea9*/
          do /*0x5bcec4*/
          {
            ++v21; /*0x5bceb1*/
            v8[v5] = v8[v5 + 1]; /*0x5bceb4*/
            *(v21 - 1) = *v21; /*0x5bceba*/
            v12 = v25; /*0x5bcebd*/
            ++v5; /*0x5bcec1*/
          }
          while ( v5 < v25 ); /*0x5bcec4*/
        }
        v11 += 100; /*0x5bced1*/
        *v22 = 32; /*0x5bced4*/
        v22 += 25; /*0x5bceda*/
        *(_DWORD *)(v11 - 100) = 0; /*0x5bcee2*/
        v8 += 25; /*0x5bcee9*/
        v21 += 25; /*0x5bceed*/
        --v23; /*0x5bcef1*/
      }
      while ( v23 ); /*0x5bcef5*/
    }
    return Text::DrawRepeated(0, 0, 80, 25); /*0x5bcf7b*/
  }
}
}
// 0x5BDC00
namespace gamemd {
void * sub_5BDC00(int * a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // esi

  v2 = 0; /*0x5bdc17*/
  v3 = 0; /*0x5bdc19*/
  v4 = dword_82D03C[7 * a2]; /*0x5bdc22*/
  if ( v4 == 12345 ) /*0x5bdc2f*/
    v2 = *((__int16 *)dword_ABF294 + 1) / 2; /*0x5bdc3a*/
  if ( v4 == 54321 ) /*0x5bdc42*/
    v2 = *((__int16 *)dword_ABF294 + 1); /*0x5bdc44*/
  v5 = dword_82D040[7 * a2]; /*0x5bdc48*/
  if ( v5 == 12345 ) /*0x5bdc51*/
    v3 = *((__int16 *)dword_ABF294 + 2) / 2; /*0x5bdc5c*/
  if ( v5 == 54321 ) /*0x5bdc64*/
    v3 = *((__int16 *)dword_ABF294 + 2); /*0x5bdc66*/
  *a1 = v2; /*0x5bdc6e*/
  a1[1] = v3; /*0x5bdc70*/
  return a1; /*0x5bdc73*/
}
}
// 0x5BF390
namespace gamemd {
void sub_5BF390(int a1, char a2)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _BYTE *v5; // esi
  int v6; // eax

  if ( a1 >= 0 && a1 < dword_ABF3A0 ) /*0x5bf3a2*/
  {
    v3 = *((_DWORD *)dword_ABF394 + a1); /*0x5bf3ad*/
    if ( !g_GameMode_Current ) /*0x5bf3b7*/
    {
      v4 = CreateMovie(v3, DSurface_Sidebar, 0); /*0x5bf3c5*/
      v5 = v4; /*0x5bf3ca*/
      if ( v4 ) /*0x5bf3ce*/
      {
        (*(void (__thiscall **)(_DWORD *, int, int))(*v4 + 24))(v4, dword_8809D8 - 3, dword_8809DC - 1); /*0x5bf3e5*/
        (*(void (__thiscall **)(_BYTE *, int (*)()))(*(_DWORD *)v5 + 32))(v5, sub_5BF360); /*0x5bf3f1*/
        v5[4] = a2; /*0x5bf3f4*/
        if ( g_AsyncIOState < dword_B45B60 /*0x5bf42b*/
          || (byte_B45B65 || !dword_B45B60)
          && dword_B45B6C > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B45B58 + 8))(
               &dword_B45B58,
               dword_B45B60 + dword_B45B6C,
               0) )
        {
          v6 = g_AsyncIOState++; /*0x5bf438*/
          *((_DWORD *)AsyncIO_Instance + v6) = v5; /*0x5bf447*/
        }
      }
    }
  }
}
}
// 0x5BF8C0
namespace gamemd {
ObjectClass * * sub_5BF8C0()
{
  char result; // al
  int v1; // edx
  int v2; // ecx
  int v3; // edi
  _DWORD v4[4]; // [esp+0h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF

  result = TestBitArray(15); /*0x5bf8c8*/
  if ( !result ) /*0x5bf8cf*/
  {
    GetClientRect(g_hWnd, &Rect); /*0x5bf8e0*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5bf8f1*/
    v1 = *(_DWORD *)(g_BigIntPool + 64); /*0x5bf90c*/
    v2 = Rect.top + *(_DWORD *)(g_BigIntPool + 56); /*0x5bf90f*/
    v3 = *(_DWORD *)(g_BigIntPool + 52); /*0x5bf911*/
    v4[2] = *(_DWORD *)(g_BigIntPool + 60); /*0x5bf914*/
    v4[1] = v2; /*0x5bf91a*/
    v4[0] = Rect.left + v3; /*0x5bf924*/
    v4[3] = v1; /*0x5bf928*/
    return (*(int (__thiscall **)(int, _DWORD *, _DWORD, int, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x5bf93d*/
             g_DSurface_Primary,
             v4,
             *(_DWORD *)(g_BigIntPool + 8),
             g_BigIntPool + 36,
             0,
             1);
  }
  return result; /*0x5bf943*/
}
}
// 0x5BF950
namespace gamemd {
AbstractClass * * sub_5BF950()
{
  char result; // al
  _DWORD *v4; // eax
  int v5; // esi
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // edi
  _DWORD v11[2]; // [esp+24h] [ebp-44h] BYREF
  int v12; // [esp+2Ch] [ebp-3Ch]
  int v13; // [esp+30h] [ebp-38h]
  _DWORD v14[4]; // [esp+34h] [ebp-34h] BYREF
  _DWORD v15[4]; // [esp+44h] [ebp-24h] BYREF
  struct tagRECT Rect; // [esp+54h] [ebp-14h] BYREF
  _BYTE v17[4]; // [esp+64h] [ebp-4h] BYREF

  result = TestBitArray(15); /*0x5bf958*/
  if ( !result ) /*0x5bf95f*/
  {
    (*(void (__thiscall **)(int, int, _DWORD, int, _DWORD, int, int, int, int))(*(_DWORD *)g_DSurface_Hidden + 8))( /*0x5bf983*/
      g_DSurface_Hidden,
      g_BigIntPool + 36,
      *(_DWORD *)(g_BigIntPool + 8),
      g_BigIntPool + 36,
      0,
      1,
      a2,
      a3,
      a1);
    v4 = *(_DWORD **)(g_BigIntPool + 72); /*0x5bf98c*/
    if ( v4 ) /*0x5bf991*/
    {
      if ( *v4 ) /*0x5bf997*/
      {
        v5 = v4[4]; /*0x5bf9a0*/
        v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 120))(v5, v17); /*0x5bf9ac*/
        v11[0] = *v6; /*0x5bf9b1*/
        v11[1] = v6[1]; /*0x5bf9b8*/
        v12 = v6[2]; /*0x5bf9bf*/
        v13 = v6[3]; /*0x5bf9cc*/
        v14[0] = ((*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden + 124))(g_DSurface_Hidden) - v12) / 2; /*0x5bf9e6*/
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden + 128))(g_DSurface_Hidden); /*0x5bf9ec*/
        v14[2] = v12; /*0x5bf9fc*/
        v14[1] = v7 - v13; /*0x5bfa04*/
        v14[3] = v13; /*0x5bfa15*/
        (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, int, int))(*(_DWORD *)g_DSurface_Hidden + 8))( /*0x5bfa21*/
          g_DSurface_Hidden,
          v14,
          v5,
          v11,
          1,
          1);
      }
    }
    GetClientRect(g_hWnd, &Rect); /*0x5bfa30*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5bfa41*/
    v8 = *(_DWORD *)(g_BigIntPool + 64); /*0x5bfa59*/
    v9 = *(_DWORD *)(g_BigIntPool + 60); /*0x5bfa5c*/
    v10 = *(_DWORD *)(g_BigIntPool + 52); /*0x5bfa61*/
    v15[1] = Rect.top + *(_DWORD *)(g_BigIntPool + 56); /*0x5bfa6f*/
    v15[0] = Rect.left + v10; /*0x5bfa7c*/
    v15[2] = v9; /*0x5bfa80*/
    v15[3] = v8; /*0x5bfa84*/
    return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x5bfa8f*/
             g_DSurface_Primary,
             v15,
             g_DSurface_Hidden);
  }
  return result; /*0x5bfa95*/
}
}
// 0x5BFAA0
namespace gamemd {
void* * LoadVQMovie(char * Source, int * a2, int a3, int a4, IUnknown * a5, int a6, int a7, int a8, IUnknown * a9, int a10, int a11, char a12)
{
  _DWORD *v14; // eax
  _DWORD *v15; // esi
  _DWORD *v16; // eax
  char v17; // al
  int v18; // eax
  int v19; // eax
  int v21; // ebp
  int v22; // edx
  int v23; // ebp
  _DWORD *v24; // eax
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // ebp
  int v30; // eax
  int v31; // ebx
  int v32; // eax
  int v33; // eax
  int v34; // [esp-Ch] [ebp-BCh]
  int v35; // [esp+10h] [ebp-A0h]
  int v36; // [esp+10h] [ebp-A0h]
  int (*v37)(); // [esp+14h] [ebp-9Ch]
  int v38; // [esp+14h] [ebp-9Ch]
  bool v39; // [esp+1Bh] [ebp-95h]
  int v40; // [esp+1Ch] [ebp-94h]
  int v41; // [esp+20h] [ebp-90h]
  int v42; // [esp+24h] [ebp-8Ch]
  int v43; // [esp+28h] [ebp-88h]
  int v44; // [esp+2Ch] [ebp-84h]
  _DWORD v46[4]; // [esp+34h] [ebp-7Ch] BYREF
  _DWORD v47[22]; // [esp+44h] [ebp-6Ch] BYREF
  _BYTE v48[12]; // [esp+9Ch] [ebp-14h] BYREF
  int v49; // [esp+A8h] [ebp-8h]

  v37 = 0; /*0x5bfab6*/
  v14 = RA2_OPNEW(0x4Cu); /*0x5bfaba*/
  v15 = v14; /*0x5bfabf*/
  if ( !v14 ) /*0x5bfac6*/
    return 0; /*0x5bfac6*/
  *v14 = 0; /*0x5bfacf*/
  v14[1] = -1; /*0x5bfad1*/
  v14[2] = 0; /*0x5bfad8*/
  v14[3] = 0; /*0x5bfadb*/
  v14[4] = 0; /*0x5bfade*/
  v14[5] = 0; /*0x5bfae1*/
  v14[6] = 0; /*0x5bfae4*/
  v14[7] = 1; /*0x5bfae7*/
  v14[8] = 0; /*0x5bfaee*/
  v14[9] = 0; /*0x5bfaf5*/
  v14[10] = 0; /*0x5bfaf8*/
  v14[11] = 0; /*0x5bfafb*/
  v14[12] = 0; /*0x5bfafe*/
  Rect::Set(0, 0, 0, 0); /*0x5bfb01*/
  *((_BYTE *)v15 + 68) = 0; /*0x5bfb0a*/
  *((_BYTE *)v15 + 69) = 0; /*0x5bfb0e*/
  v15[18] = 0; /*0x5bfb11*/
  v16 = CCFileClass::Construct(v47, Source); /*0x5bfb14*/
  v17 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v16 + 20))(v16, 0); /*0x5bfb1e*/
  v47[0] = (void*)&CCFileClass_vftable; /*0x5bfb2a*/
  v39 = v17 == 0; /*0x5bfb32*/
  v49 = 0; /*0x5bfb37*/
  Vector::Clear(v48); /*0x5bfb3e*/
  v47[0] = &off_7E1668; /*0x5bfb47*/
  BufferIOFileClass::Dtor(v47); /*0x5bfb4f*/
  if ( v39 ) /*0x5bfb58*/
    return 0; /*0x5bfb58*/
  v35 = 0; /*0x5bfb5e*/
  if ( !Audio::IsSoundEnabled() ) /*0x5bfb62*/
    ResetAnimSystem(3); /*0x5bfb70*/
  if ( (unsigned __int8)TestBitArray(0) ) /*0x5bfb77*/
    v35 = 1; /*0x5bfb80*/
  if ( dword_ABF3FC == 1 ) /*0x5bfb8f*/
  {
    v18 = v35; /*0x5bfb91*/
    IDA_LOBYTE(v18) = v35 | 2; /*0x5bfb95*/
    v35 = v18; /*0x5bfb97*/
  }
  if ( a12 == 1 ) /*0x5bfba3*/
    v37 = sub_5BF950; /*0x5bfba5*/
  if ( RA2_OPNEW(0x554u) ) /*0x5bfbb2*/
    v19 = Stream::InitializeBinkAudio(Source, v35, sub_5BF850, sub_5BF8B0, v37, -1, -1); /*0x5bfbd9*/
  else
    v19 = 0; /*0x5bfbe0*/
  *v15 = v19; /*0x5bfbe4*/
  if ( !v19 || (Render_Load_759830(a11), !(unsigned __int8)Render_Load_7597A0(*v15)) ) /*0x5bfbf9*/
  {
    BinkMovie::Cleanup(v15); /*0x5bfc04*/
    RA2_OPDEL(v15); /*0x5bfc0a*/
    return 0; /*0x5bfc1e*/
  }
  v36 = MovieClass::GetWidth(*v15); /*0x5bfc2a*/
  v21 = MovieClass::GetHeight(*v15); /*0x5bfc35*/
  v44 = Render_Load_759EA0(*v15); /*0x5bfc43*/
  if ( v44 == 4 ) /*0x5bfc47*/
    v44 = 1; /*0x5bfc49*/
  if ( !a7 && !a8 && !a9 && !a10 ) /*0x5bfcb9*/
  {
    a8 = ((*(int (__thiscall **)(int *))(*a2 + 128))(a2) - v21) / 2; /*0x5bfcd9*/
    a9 = v36; /*0x5bfce2*/
    a7 = ((*(int (__thiscall **)(int *))(*a2 + 124))(a2) - v36) / 2; /*0x5bfcee*/
    a10 = v21; /*0x5bfcf9*/
  }
  v22 = *a2; /*0x5bfd06*/
  v46[2] = v36; /*0x5bfd08*/
  v46[0] = 0; /*0x5bfd0e*/
  v46[1] = 0; /*0x5bfd12*/
  v46[3] = v21; /*0x5bfd16*/
  v38 = (*(int (__thiscall **)(int *))(v22 + 128))(a2); /*0x5bfd20*/
  v23 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x5bfd3d*/
  v24 = (_DWORD *)ClipRectIntersection(v46, 0, 0); /*0x5bfd3f*/
  v15[9] = *v24; /*0x5bfd46*/
  v15[10] = v24[1]; /*0x5bfd4c*/
  v15[11] = v24[2]; /*0x5bfd54*/
  v41 = 0; /*0x5bfd5c*/
  v15[12] = v24[3]; /*0x5bfd64*/
  v42 = v23; /*0x5bfd69*/
  v40 = 0; /*0x5bfd6d*/
  v43 = v38; /*0x5bfd7a*/
  if ( a9 <= 0 || a10 <= 0 || v23 <= 0 || v38 <= 0 ) /*0x5bfd9d*/
    goto LABEL_42; /*0x5bfd9d*/
  v25 = a7; /*0x5bfda3*/
  if ( a7 > 0 ) /*0x5bfdac*/
  {
    v40 = a7; /*0x5bfdb0*/
    v42 = v23 - a7; /*0x5bfdb4*/
  }
  if ( v42 < 1 ) /*0x5bfdbd*/
    goto LABEL_42; /*0x5bfdbd*/
  if ( a8 > 0 ) /*0x5bfdd0*/
  {
    v41 = a8; /*0x5bfdda*/
    v43 = v38 - a8; /*0x5bfdde*/
    v25 = a7; /*0x5bfde2*/
  }
  if ( v43 < 1 ) /*0x5bfdee*/
    goto LABEL_42; /*0x5bfdee*/
  if ( v42 + v40 > a9 + v25 ) /*0x5bfe05*/
    v42 = a7 + a9 - v40; /*0x5bfe16*/
  if ( v42 < 1 ) /*0x5bfe1f*/
    goto LABEL_42; /*0x5bfe1f*/
  v26 = v41; /*0x5bfe35*/
  if ( v41 + v43 > a10 + a8 ) /*0x5bfe3d*/
    v43 = a10 + a8 - v41; /*0x5bfe51*/
  if ( v43 < 1 ) /*0x5bfe5a*/
  {
  LABEL_42:
    v27 = 0; /*0x5bfe6a*/
    v28 = 0; /*0x5bfe6c*/
    v26 = 0; /*0x5bfe6e*/
    v29 = 0; /*0x5bfe70*/
  }
  else
  {
    v27 = v40; /*0x5bfe5c*/
    v28 = v42; /*0x5bfe60*/
    v29 = v43; /*0x5bfe64*/
  }
  v15[13] = v27; /*0x5bfe72*/
  v15[14] = v26; /*0x5bfe79*/
  v15[15] = v28; /*0x5bfe7c*/
  v15[16] = v29; /*0x5bfe82*/
  if ( v44 == 1 ) /*0x5bfe85*/
  {
    v30 = DDraw::GetStatus(); /*0x5bfe8c*/
    Render_Load_759F20(v30); /*0x5bfe94*/
  }
  v15[2] = a2; /*0x5bfe99*/
  v34 = (*(int (__thiscall **)(int *))(*a2 + 128))(a2); /*0x5bfeac*/
  v31 = (*(int (__thiscall **)(int *))(*a2 + 116))(a2); /*0x5bfeb6*/
  v32 = (*(int (__thiscall **)(int *))(*a2 + 112))(a2); /*0x5bfeb8*/
  Render_Load_759EB0(0, v31 / v32, v34, 0, 0); /*0x5bfec7*/
  v33 = BinkMovie::CreateSurfaceTracker(Source); /*0x5bfed0*/
  v15[18] = v33; /*0x5bfed7*/
  if ( v33 ) /*0x5bfeda*/
    *(_DWORD *)*v15 = v33; /*0x5bfede*/
  *((_BYTE *)v15 + 69) = 1; /*0x5bfee0*/
  return v15; /*0x5bfc12*/
}
}
// 0x5BFF60
namespace gamemd {
void Movie_RenderFrame(int a1, char a2, int a3, char a4)
{
  char result; // al
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  bool v9; // zf
  int v10; // [esp-10h] [ebp-1Ch]
  int v12; // [esp+8h] [ebp-4h]

  result = g_BigIntPool; /*0x5bff63*/
  if ( !g_BigIntPool ) /*0x5bff71*/
  {
    *(_BYTE *)(a1 + 69) = 1; /*0x5bff7a*/
    g_BigIntPool = a1; /*0x5bff83*/
    v12 = 0; /*0x5bff89*/
    v6 = -1; /*0x5bff91*/
    v7 = 0; /*0x5bff94*/
    if ( (unsigned __int8)TestBitArray(2) ) /*0x5bff96*/
    {
      v12 = *(_DWORD *)(a1 + 16); /*0x5bffa2*/
      if ( *(int *)(a1 + 20) >= 0 ) /*0x5bffab*/
        v6 = *(_DWORD *)(a1 + 20); /*0x5bffad*/
      v7 = *(_DWORD *)(a1 + 28); /*0x5bffb2*/
      if ( *(_DWORD *)(a1 + 12) == 1 ) /*0x5bffb8*/
      {
        v10 = *(_DWORD *)(a1 + 28); /*0x5bffbd*/
        if ( *(_DWORD *)(a1 + 24) ) /*0x5bffba*/
          Render_Render_759880(v12, v6, v10); /*0x5bffd7*/
        else
          Render_Render_759850(*(_DWORD *)(a1 + 32), v10); /*0x5bffc8*/
      }
    }
    if ( a2 ) /*0x5bffe2*/
      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x5bffec*/
    if ( a3 != -1 ) /*0x5bfff6*/
      Theme::QueueSong(a3); /*0x5bfffe*/
    do /*0x5c0049*/
    {
      if ( *(_DWORD *)(a1 + 12) == 2 || v12 ) /*0x5c000f*/
        AbstractClass::updateBuildingState(v12); /*0x5c0018*/
      v8 = MovieClass::RenderLoop(v6, a4); /*0x5c002a*/
      if ( *(_DWORD *)(a1 + 12) == 1 ) /*0x5c0032*/
        v7 = 0; /*0x5c0034*/
      AbstractClass::finalizeConstruction(*(_DWORD *)a1); /*0x5c0038*/
      if ( v8 == 1 ) /*0x5c0040*/
        break; /*0x5c0040*/
      v9 = v7 == 0; /*0x5c0042*/
      if ( v7 > 0 ) /*0x5c0044*/
        v9 = --v7 == 0; /*0x5c0047*/
    }
    while ( !v9 ); /*0x5c0049*/
    result = a2; /*0x5c004b*/
    if ( a2 ) /*0x5c0054*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x5c005e*/
    g_BigIntPool = 0; /*0x5c0061*/
  }
  return result; /*0x5c006b*/
}
}
// 0x5B1B80
namespace gamemd {
int sub_5B1B80()
{
  dword_ABEE60 = 0; /*0x5b1b82*/
  dword_ABEE64 = 0; /*0x5b1b87*/
  dword_ABEE68 = 0; /*0x5b1b8c*/
  dword_ABEE6C = 0; /*0x5b1b91*/
  return 0; /*0x5b1b96*/
}
} // namespace gamemd

// 0x5B1BA0
namespace gamemd {
void sub_5B1BA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b1bac*/
  dbl_ABEE78 = Math::Sqrt(v0 + v0); /*0x5b1bbe*/
}
} // namespace gamemd

// 0x5B1BD0
namespace gamemd {
void sub_5B1BD0()
{
  dbl_ABEEC8 = dbl_ABEE78 / 60.0; /*0x5b1bdc*/
}
} // namespace gamemd

// 0x5B1BF0
namespace gamemd {
void sub_5B1BF0()
{
  dbl_ABEEB0 = 1.0 / dbl_ABEEC8; /*0x5b1bfc*/
}
} // namespace gamemd

// 0x5B1C10
namespace gamemd {
void sub_5B1C10()
{
  dbl_ABEEA8 = 0.0174532925199433 * 45.0; /*0x5b1c1c*/
}
} // namespace gamemd

// 0x5B1C30
namespace gamemd {
void sub_5B1C30()
{
  dbl_ABEE80 = 0.0174532925199433 * 60.0; /*0x5b1c3c*/
}
} // namespace gamemd

// 0x5B1C50
namespace gamemd {
void sub_5B1C50()
{
  dbl_ABEE58 = 0.0174532925199433 * 90.0; /*0x5b1c5c*/
}
} // namespace gamemd

// 0x5B1C70
namespace gamemd {
long long sub_5B1C70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABEE58 - dbl_ABEE80); /*0x5b1c82*/
  result = Math::RoundToInt(v0 * dbl_ABEE78 * 0.5); /*0x5b1c96*/
  dword_ABEED0 = result; /*0x5b1c9b*/
  return result; /*0x5b1ca0*/
}
} // namespace gamemd

// 0x5B1CB0
namespace gamemd {
void sub_5B1CB0()
{
  dbl_ABEE88 = Math::ArcTan((double)dword_ABEED0 * 0.00390625); /*0x5b1cc7*/
}
} // namespace gamemd

// 0x5B1CE0
namespace gamemd {
void sub_5B1CE0()
{
  dbl_ABEEA0 = Math::ArcTan((double)(2 * dword_ABEED0) / dbl_ABEE78); /*0x5b1d02*/
}
} // namespace gamemd

// 0x5B1D10
namespace gamemd {
long long sub_5B1D10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEED0) + 0.5); /*0x5b1d2b*/
  dword_ABEEC4 = result; /*0x5b1d30*/
  return result; /*0x5b1d36*/
}
} // namespace gamemd

// 0x5B1D40
namespace gamemd {
int sub_5B1D40()
{
  word_ABEE70 = 0; /*0x5b1d42*/
  word_ABEE72 = 0; /*0x5b1d48*/
  return 0; /*0x5b1d4e*/
}
} // namespace gamemd

// 0x5B1D50
namespace gamemd {
int sub_5B1D50()
{
  dword_ABEE90 = 0; /*0x5b1d52*/
  dword_ABEE94 = 0; /*0x5b1d57*/
  dword_ABEE98 = 0; /*0x5b1d5c*/
  return 0; /*0x5b1d61*/
}
} // namespace gamemd

// 0x5B1D70
namespace gamemd {
int sub_5B1D70()
{
  dword_ABEEC0 = 0; /*0x5b1d75*/
  dword_ABEEB8 = 128; /*0x5b1d7f*/
  dword_ABEEBC = 128; /*0x5b1d84*/
  return 128; /*0x5b1d89*/
}
} // namespace gamemd

// 0x5B1D90
namespace gamemd {
double * E4Recv_5B1D90::sub_5B1D90()
{
  DWORD v2; // edi
  unsigned int v4; // [esp+8h] [ebp-Ch] BYREF
  double v5; // [esp+Ch] [ebp-8h]

  *(_DWORD *)this = 0; /*0x5b1d9b*/
  v4 = 0; /*0x5b1da1*/
  *((_DWORD *)this + 1) = 1072693248; /*0x5b1da9*/
  v2 = sub_5CAF70((LONG *)&v4); /*0x5b1db5*/
  if ( v2 || v4 ) /*0x5b1dc1*/
  {
    v5 = (double)v4; /*0x5b1de8*/
    Debug::Log(); /*0x5b1dec*/
    *this = (v5 * 4294967296.0 + (double)v2) * 0.001; /*0x5b1e19*/
    return this; /*0x5b1e0e*/
  }
  else
  {
    timeBeginPeriod(1u); /*0x5b1dc5*/
    return this; /*0x5b1dcb*/
  }
}
} // namespace gamemd

// 0x5B1EE0
namespace gamemd {
int sub_5B1EE0()
{
  dword_ABEEE0 = 0; /*0x5b1ee2*/
  dword_ABEEE4 = 0; /*0x5b1ee7*/
  dword_ABEEE8 = 0; /*0x5b1eec*/
  dword_ABEEEC = 0; /*0x5b1ef1*/
  return 0; /*0x5b1ef6*/
}
} // namespace gamemd

// 0x5B1F00
namespace gamemd {
void sub_5B1F00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b1f0c*/
  dbl_ABEEF8 = Math::Sqrt(v0 + v0); /*0x5b1f1e*/
}
} // namespace gamemd

// 0x5B1F30
namespace gamemd {
void sub_5B1F30()
{
  dbl_ABEF48 = dbl_ABEEF8 / 60.0; /*0x5b1f3c*/
}
} // namespace gamemd

// 0x5B1F50
namespace gamemd {
void sub_5B1F50()
{
  dbl_ABEF30 = 1.0 / dbl_ABEF48; /*0x5b1f5c*/
}
} // namespace gamemd

// 0x5B1F70
namespace gamemd {
void sub_5B1F70()
{
  dbl_ABEF28 = 0.0174532925199433 * 45.0; /*0x5b1f7c*/
}
} // namespace gamemd

// 0x5B1F90
namespace gamemd {
void sub_5B1F90()
{
  dbl_ABEF00 = 0.0174532925199433 * 60.0; /*0x5b1f9c*/
}
} // namespace gamemd

// 0x5B1FB0
namespace gamemd {
void sub_5B1FB0()
{
  dbl_ABEED8 = 0.0174532925199433 * 90.0; /*0x5b1fbc*/
}
} // namespace gamemd

// 0x5B1FD0
namespace gamemd {
long long sub_5B1FD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABEED8 - dbl_ABEF00); /*0x5b1fe2*/
  result = Math::RoundToInt(v0 * dbl_ABEEF8 * 0.5); /*0x5b1ff6*/
  dword_ABEF50 = result; /*0x5b1ffb*/
  return result; /*0x5b2000*/
}
} // namespace gamemd

// 0x5B2010
namespace gamemd {
void sub_5B2010()
{
  dbl_ABEF08 = Math::ArcTan((double)dword_ABEF50 * 0.00390625); /*0x5b2027*/
}
} // namespace gamemd

// 0x5B2040
namespace gamemd {
void sub_5B2040()
{
  dbl_ABEF20 = Math::ArcTan((double)(2 * dword_ABEF50) / dbl_ABEEF8); /*0x5b2062*/
}
} // namespace gamemd

// 0x5B2070
namespace gamemd {
long long sub_5B2070()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEF50) + 0.5); /*0x5b208b*/
  dword_ABEF44 = result; /*0x5b2090*/
  return result; /*0x5b2096*/
}
} // namespace gamemd

// 0x5B20A0
namespace gamemd {
int sub_5B20A0()
{
  word_ABEEF0 = 0; /*0x5b20a2*/
  word_ABEEF2 = 0; /*0x5b20a8*/
  return 0; /*0x5b20ae*/
}
} // namespace gamemd

// 0x5B20B0
namespace gamemd {
int sub_5B20B0()
{
  dword_ABEF10 = 0; /*0x5b20b2*/
  dword_ABEF14 = 0; /*0x5b20b7*/
  dword_ABEF18 = 0; /*0x5b20bc*/
  return 0; /*0x5b20c1*/
}
} // namespace gamemd

// 0x5B20D0
namespace gamemd {
int sub_5B20D0()
{
  dword_ABEF40 = 0; /*0x5b20d5*/
  dword_ABEF38 = 128; /*0x5b20df*/
  dword_ABEF3C = 128; /*0x5b20e4*/
  return 128; /*0x5b20e9*/
}
} // namespace gamemd

// 0x5B2B90
namespace gamemd {
void sub_5B2B90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b2b9c*/
  dbl_ABEF78 = Math::Sqrt(v0 + v0); /*0x5b2bae*/
}
} // namespace gamemd

// 0x5B2BC0
namespace gamemd {
void sub_5B2BC0()
{
  dbl_ABEFC8 = dbl_ABEF78 / 60.0; /*0x5b2bcc*/
}
} // namespace gamemd

// 0x5B2BE0
namespace gamemd {
void sub_5B2BE0()
{
  dbl_ABEFB0 = 1.0 / dbl_ABEFC8; /*0x5b2bec*/
}
} // namespace gamemd

// 0x5B2C00
namespace gamemd {
void sub_5B2C00()
{
  dbl_ABEFA8 = 0.0174532925199433 * 45.0; /*0x5b2c0c*/
}
} // namespace gamemd

// 0x5B2C20
namespace gamemd {
void sub_5B2C20()
{
  dbl_ABEF80 = 0.0174532925199433 * 60.0; /*0x5b2c2c*/
}
} // namespace gamemd

// 0x5B2C40
namespace gamemd {
void sub_5B2C40()
{
  dbl_ABEF58 = 0.0174532925199433 * 90.0; /*0x5b2c4c*/
}
} // namespace gamemd

// 0x5B2C60
namespace gamemd {
long long sub_5B2C60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABEF58 - dbl_ABEF80); /*0x5b2c72*/
  result = Math::RoundToInt(v0 * dbl_ABEF78 * 0.5); /*0x5b2c86*/
  dword_ABEFD0 = result; /*0x5b2c8b*/
  return result; /*0x5b2c90*/
}
} // namespace gamemd

// 0x5B2CA0
namespace gamemd {
void sub_5B2CA0()
{
  dbl_ABEF88 = Math::ArcTan((double)dword_ABEFD0 * 0.00390625); /*0x5b2cb7*/
}
} // namespace gamemd

// 0x5B2CD0
namespace gamemd {
void sub_5B2CD0()
{
  dbl_ABEFA0 = Math::ArcTan((double)(2 * dword_ABEFD0) / dbl_ABEF78); /*0x5b2cf2*/
}
} // namespace gamemd

// 0x5B2D00
namespace gamemd {
long long sub_5B2D00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEFD0) + 0.5); /*0x5b2d1b*/
  dword_ABEFC4 = result; /*0x5b2d20*/
  return result; /*0x5b2d26*/
}
} // namespace gamemd

// 0x5B2D30
namespace gamemd {
int sub_5B2D30()
{
  word_ABEF70 = 0; /*0x5b2d32*/
  word_ABEF72 = 0; /*0x5b2d38*/
  return 0; /*0x5b2d3e*/
}
} // namespace gamemd

// 0x5B2D40
namespace gamemd {
int sub_5B2D40()
{
  dword_ABEF90 = 0; /*0x5b2d42*/
  dword_ABEF94 = 0; /*0x5b2d47*/
  dword_ABEF98 = 0; /*0x5b2d4c*/
  return 0; /*0x5b2d51*/
}
} // namespace gamemd

// 0x5B2D60
namespace gamemd {
int sub_5B2D60()
{
  dword_ABEFC0 = 0; /*0x5b2d65*/
  dword_ABEFB8 = 128; /*0x5b2d6f*/
  dword_ABEFBC = 128; /*0x5b2d74*/
  return 128; /*0x5b2d79*/
}
} // namespace gamemd

// 0x5B2D80
namespace gamemd {
int sub_5B2D80()
{
  dword_ABEF60 = 0; /*0x5b2d82*/
  dword_ABEF64 = 0; /*0x5b2d87*/
  dword_ABEF68 = 0; /*0x5b2d8c*/
  dword_ABEF6C = 0; /*0x5b2d91*/
  return 0; /*0x5b2d96*/
}
} // namespace gamemd

// 0x5B3950
namespace gamemd {
char * Name_FromIndex(int a1)
{
  if ( a1 == -1 ) /*0x5b3953*/
    return g_Str__none_; /*0x5b395d*/
  else
    return off_816CAC[a1]; /*0x5b3955*/
}
} // namespace gamemd

// 0x5B3AA0
namespace gamemd {
int sub_5B3AA0()
{
  dword_ABEFF8 = 0; /*0x5b3aa2*/
  dword_ABEFFC = 0; /*0x5b3aa7*/
  dword_ABF000 = 0; /*0x5b3aac*/
  dword_ABF004 = 0; /*0x5b3ab1*/
  return 0; /*0x5b3ab6*/
}
} // namespace gamemd

// 0x5B3AC0
namespace gamemd {
int sub_5B3AC0()
{
  dword_ABEFE4 = 0; /*0x5b3acc*/
  dword_ABEFDC = (int)&GenericNode_vftable; /*0x5b3ad2*/
  dword_ABEFE8 = (int)&GenericNode_vftable; /*0x5b3ad7*/
  dword_ABEFEC = 0; /*0x5b3adc*/
  g_MixFilePool_Root = (int)&dword_ABEFDC; /*0x5b3ae2*/
  dword_ABEFE0 = (int)&dword_ABEFE8; /*0x5b3aec*/
  MixFileClass_MIXes = (int)&List_MixFileClass___vftable; /*0x5b3af6*/
  return atexit(sub_5B3B10); /*0x5b3b06*/
}
} // namespace gamemd

// 0x5B3E90
namespace gamemd {
char E4Recv_5B3E90::sub_5B3E90()
{
  int i; // esi
  char Filename[256]; // [esp+8h] [ebp-304h] BYREF
  char Ext[256]; // [esp+108h] [ebp-204h] BYREF
  char Buffer[260]; // [esp+208h] [ebp-104h] BYREF

  for ( i = dword_ABEFE0; ; i = *(_DWORD *)(i + 4) ) /*0x5b3e97*/
  {
    if ( !i || !*(_DWORD *)(i + 4) || !*(_DWORD *)(i + 8) ) /*0x5b3eb3*/
      return 0; /*0x5b3f42*/
    _splitpath(*(const char **)(i + 12), 0, 0, Filename, Ext); /*0x5b3ed3*/
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x5b3ef1*/
    if ( !_strcmpi(Buffer, this) ) /*0x5b3eff*/
      break; /*0x5b3eff*/
  }
  if ( *(_DWORD *)(i + 36) ) /*0x5b3f14*/
  {
    if ( *(_BYTE *)(i + 18) ) /*0x5b3f1b*/
      RA2_OPDEL(*(void **)(i + 36)); /*0x5b3f23*/
  }
  *(_DWORD *)(i + 36) = 0; /*0x5b3f2b*/
  *(_BYTE *)(i + 18) = 0; /*0x5b3f32*/
  return 1; /*0x5b3f36*/
}
} // namespace gamemd

// 0x5B3F50
namespace gamemd {
void E4Recv_5B3F50::sub_5B3F50()
{
  void *v2; // eax
  void *v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  v2 = (void *)this->CountFiles; /*0x5b3f56*/
  *(_DWORD *)this = (void*)&MixFileClass_vftable; /*0x5b3f59*/
  if ( v2 ) /*0x5b3f61*/
    free(v2); /*0x5b3f64*/
  if ( this->MixFileClass_field_24 && this->u8_12 ) /*0x5b3f73*/
  {
    RA2_OPDEL(*((void **)this + 9)); /*0x5b3f79*/
    this->u8_12 = 0; /*0x5b3f81*/
  }
  v3 = (void *)this->q020; /*0x5b3f84*/
  this->MixFileClass_field_24 = 0; /*0x5b3f87*/
  if ( v3 ) /*0x5b3f8c*/
  {
    RA2_OPDEL(v3); /*0x5b3f8f*/
    this->q020 = 0; /*0x5b3f97*/
  }
  if ( this ) /*0x5b3f9c*/
  {
    v4 = this->Previous; /*0x5b3f9e*/
    if ( v4 ) /*0x5b3fa3*/
    {
      v5 = this->Blowfish; /*0x5b3fa5*/
      if ( v5 ) /*0x5b3faa*/
      {
        *(_DWORD *)(v5 + 4) = v4; /*0x5b3fac*/
        *(_DWORD *)(this->Previous + 8) = this->Blowfish; /*0x5b3fb5*/
        this->Blowfish = 0; /*0x5b3fb8*/
        this->Previous = 0; /*0x5b3fbb*/
      }
    }
  }
  *(_DWORD *)this = (void*)&GenericNode_vftable; /*0x5b3fc0*/
  if ( this ) /*0x5b3fc6*/
  {
    v6 = this->Previous; /*0x5b3fc8*/
    if ( v6 ) /*0x5b3fcd*/
    {
      v7 = this->Blowfish; /*0x5b3fcf*/
      if ( v7 ) /*0x5b3fd4*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x5b3fd6*/
        *(_DWORD *)(this->Previous + 8) = this->Blowfish; /*0x5b3fdf*/
        this->Blowfish = 0; /*0x5b3fe2*/
        this->Previous = 0; /*0x5b3fe5*/
      }
    }
  }
}
} // namespace gamemd

// 0x5B4350
namespace gamemd {
int E4Recv_5B4350::sub_5B4350()
{
  int i; // esi
  char Filename[256]; // [esp+8h] [ebp-304h] BYREF
  char Ext[256]; // [esp+108h] [ebp-204h] BYREF
  char Buffer[260]; // [esp+208h] [ebp-104h] BYREF

  for ( i = dword_ABEFE0; i && *(_DWORD *)(i + 4) && *(_DWORD *)(i + 8); i = *(_DWORD *)(i + 4) ) /*0x5b4357*/
  {
    _splitpath(*(const char **)(i + 12), 0, 0, Filename, Ext); /*0x5b4387*/
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x5b43a5*/
    if ( !_strcmpi(Buffer, this) ) /*0x5b43bd*/
      return i; /*0x5b43ce*/
  }
  return 0; /*0x5b43c6*/
}
} // namespace gamemd

// 0x5B43E0
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_7()
{
  return 1; /*0x5b43e2*/
}
} // namespace gamemd

// 0x5B43F0
namespace gamemd {
char ReturnTrue(AnimClass * aP0)
{
  return 1; /*0x5b43f2*/
}
} // namespace gamemd

// 0x5B4400
namespace gamemd {
void E4Recv_5B4400::sub_5B4400()
{
  if ( *(_DWORD *)(this + 36) && *(_BYTE *)(this + 18) ) /*0x5b440d*/
    RA2_OPDEL(*(void **)(this + 36)); /*0x5b4413*/
  *(_DWORD *)(this + 36) = 0; /*0x5b441b*/
  *(_BYTE *)(this + 18) = 0; /*0x5b441e*/
}
} // namespace gamemd

// 0x5B47A0
namespace gamemd {
int sub_5B47A0()
{
  dword_ABF018 = 0; /*0x5b47a2*/
  dword_ABF01C = 0; /*0x5b47a7*/
  dword_ABF020 = 0; /*0x5b47ac*/
  dword_ABF024 = 0; /*0x5b47b1*/
  return 0; /*0x5b47b6*/
}
} // namespace gamemd

// 0x5B47C0
namespace gamemd {
void sub_5B47C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b47cc*/
  dbl_ABF030 = Math::Sqrt(v0 + v0); /*0x5b47de*/
}
} // namespace gamemd

// 0x5B47F0
namespace gamemd {
void sub_5B47F0()
{
  dbl_ABF080 = dbl_ABF030 / 60.0; /*0x5b47fc*/
}
} // namespace gamemd

// 0x5B4810
namespace gamemd {
void sub_5B4810()
{
  dbl_ABF068 = 1.0 / dbl_ABF080; /*0x5b481c*/
}
} // namespace gamemd

// 0x5B4830
namespace gamemd {
void sub_5B4830()
{
  dbl_ABF060 = 0.0174532925199433 * 45.0; /*0x5b483c*/
}
} // namespace gamemd

// 0x5B4850
namespace gamemd {
void sub_5B4850()
{
  dbl_ABF038 = 0.0174532925199433 * 60.0; /*0x5b485c*/
}
} // namespace gamemd

// 0x5B4870
namespace gamemd {
void sub_5B4870()
{
  dbl_ABF010 = 0.0174532925199433 * 90.0; /*0x5b487c*/
}
} // namespace gamemd

// 0x5B4890
namespace gamemd {
long long sub_5B4890()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF010 - dbl_ABF038); /*0x5b48a2*/
  result = Math::RoundToInt(v0 * dbl_ABF030 * 0.5); /*0x5b48b6*/
  dword_ABF088 = result; /*0x5b48bb*/
  return result; /*0x5b48c0*/
}
} // namespace gamemd

// 0x5B48D0
namespace gamemd {
void sub_5B48D0()
{
  dbl_ABF040 = Math::ArcTan((double)dword_ABF088 * 0.00390625); /*0x5b48e7*/
}
} // namespace gamemd

// 0x5B4900
namespace gamemd {
void sub_5B4900()
{
  dbl_ABF058 = Math::ArcTan((double)(2 * dword_ABF088) / dbl_ABF030); /*0x5b4922*/
}
} // namespace gamemd

// 0x5B4930
namespace gamemd {
long long sub_5B4930()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF088) + 0.5); /*0x5b494b*/
  dword_ABF07C = result; /*0x5b4950*/
  return result; /*0x5b4956*/
}
} // namespace gamemd

// 0x5B4960
namespace gamemd {
int sub_5B4960()
{
  word_ABF028 = 0; /*0x5b4962*/
  word_ABF02A = 0; /*0x5b4968*/
  return 0; /*0x5b496e*/
}
} // namespace gamemd

// 0x5B4970
namespace gamemd {
int sub_5B4970()
{
  dword_ABF048 = 0; /*0x5b4972*/
  dword_ABF04C = 0; /*0x5b4977*/
  dword_ABF050 = 0; /*0x5b497c*/
  return 0; /*0x5b4981*/
}
} // namespace gamemd

// 0x5B4990
namespace gamemd {
int sub_5B4990()
{
  dword_ABF078 = 0; /*0x5b4995*/
  dword_ABF070 = 128; /*0x5b499f*/
  dword_ABF074 = 128; /*0x5b49a4*/
  return 128; /*0x5b49a9*/
}
} // namespace gamemd

// 0x5B57D0
namespace gamemd {
HWND E4Recv_5B57D0::sub_5B57D0()
{
  HWND result; // eax
  HWND v3; // esi
  char *v4; // eax
  unsigned int v5; // edi
  HWND v6; // esi
  int (__usercall *v7)@<eax>(char@<cf>, char@<zf>); // edi
  HWND v8; // [esp-8h] [ebp-518h]
  int v9; // [esp+0h] [ebp-510h] BYREF
  wchar_t *Format; // [esp+10h] [ebp-500h]
  _DWORD v11[62]; // [esp+14h] [ebp-4FCh] BYREF
  __int16 v12; // [esp+10Ch] [ebp-404h]
  wchar_t lParam[256]; // [esp+110h] [ebp-400h] BYREF
  wchar_t Buffer[256]; // [esp+310h] [ebp-200h] BYREF

  result = GetDlgItem(*this, 1344); /*0x5b57ea*/
  v3 = result; /*0x5b57ec*/
  if ( result ) /*0x5b57f0*/
  {
    SendMessageA(result, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b580f*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5b581e*/
    result = (HWND)wcslen(lParam); /*0x5b5828*/
    if ( result ) /*0x5b5832*/
    {
      if ( lParam[0] != 13 ) /*0x5b5841*/
      {
        WideString::Trim(lParam); /*0x5b584e*/
        result = (HWND)lParam; /*0x5b5853*/
        if ( &v9 != (int *)-272 ) /*0x5b585c*/
        {
          memset(v11, 0, sizeof(v11)); /*0x5b5871*/
          v12 = 0; /*0x5b5873*/
          v11[0] = 104; /*0x5b587f*/
          strcpy((char *)&v11[1], g_GameSetupBuffer); /*0x5b589d*/
          IDA_LOBYTE(v11[6]) = g_TauntCommandState; /*0x5b58b2*/
          wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam); /*0x5b58b6*/
          Stream::WriteBlock((int)&g_EventManager, (int)v11, 250, 1); /*0x5b58cf*/
          Stream::ReadPacket((int)&g_EventManager); /*0x5b58d9*/
          v4 = CharToWideString(g_GameSetupBuffer); /*0x5b58e3*/
          v5 = g_TauntCommandState; /*0x5b58ea*/
          v8 = *this; /*0x5b58f5*/
          Format = (wchar_t *)v4; /*0x5b58f6*/
          result = GetDlgItem(v8, 1343); /*0x5b58fa*/
          v6 = result; /*0x5b58fc*/
          if ( result ) /*0x5b5900*/
          {
            if ( v5 >= 8 ) /*0x5b5904*/
              v7 = Math::InitDegToRad; /*0x5b5914*/
            else
              v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v5]; /*0x5b590b*/
            swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam); /*0x5b5934*/
            return (HWND)DrawDialogText((LPARAM)v7, Buffer, v6); /*0x5b5946*/
          }
        }
      }
    }
  }
  return result; /*0x5b594b*/
}
} // namespace gamemd

// 0x5B5960
namespace gamemd {
char E4Recv_5B5960::sub_5B5960()
{
  HWND DlgItem; // eax
  HWND v3; // edi

  DlgItem = GetDlgItem(*(HWND *)this, 1639); /*0x5b596d*/
  v3 = DlgItem; /*0x5b5973*/
  if ( DlgItem ) /*0x5b5977*/
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b5989*/
    if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b598e*/
    {
      g_CommandExecState = SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0); /*0x5b599b*/
      this->objectTypeFlags = 1; /*0x5b59a2*/
      this->vtable3 = 1; /*0x5b59a5*/
      IDA_LOBYTE(DlgItem) = 1; /*0x5b59a0*/
    }
  }
  return (char)DlgItem; /*0x5b59a8*/
}
} // namespace gamemd

// 0x5B5A50
namespace gamemd {
char E4Recv_5B5A50::sub_5B5A50(char a2)
{
  HWND DlgItem; // eax
  HWND v4; // esi
  wchar_t lParam[22]; // [esp+8h] [ebp-2Ch] BYREF

  DlgItem = GetDlgItem(*(HWND *)this, 1473); /*0x5b5a5f*/
  v4 = DlgItem; /*0x5b5a65*/
  if ( DlgItem ) /*0x5b5a69*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x15u, (LPARAM)lParam); /*0x5b5a7f*/
    WideString::Trim(lParam); /*0x5b5a85*/
    if ( !a2 ) /*0x5b5a90*/
      SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam); /*0x5b5a9f*/
    CopyWideToChar(g_GameSetupBuffer, (char *)lParam, -1); /*0x5b5aac*/
    this->objectTypeFlags = 1; /*0x5b5ab4*/
    this->vtable3 = 1; /*0x5b5ab7*/
    IDA_LOBYTE(DlgItem) = 1; /*0x5b5ab1*/
  }
  return (char)DlgItem; /*0x5b5aba*/
}
} // namespace gamemd

// 0x5B6DA0
namespace gamemd {
void E4Recv_5B6DA0::sub_5B6DA0(wchar_t * Source)
{
  char *v3; // eax
  unsigned int v4; // edi
  HWND DlgItem; // esi
  int (__usercall *v6)@<eax>(char@<cf>, char@<zf>); // edi
  wchar_t *Format; // [esp+10h] [ebp-300h]
  _DWORD v8[62]; // [esp+14h] [ebp-2FCh] BYREF
  __int16 v9; // [esp+10Ch] [ebp-204h]
  wchar_t Buffer[256]; // [esp+110h] [ebp-200h] BYREF

  if ( Source ) /*0x5b6db5*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5b6dca*/
    v9 = 0; /*0x5b6dcc*/
    v8[0] = 104; /*0x5b6dd8*/
    strcpy((char *)&v8[1], g_GameSetupBuffer); /*0x5b6df4*/
    IDA_LOBYTE(v8[6]) = g_TauntCommandState; /*0x5b6e04*/
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source); /*0x5b6e08*/
    Stream::WriteBlock((int)&g_EventManager, (int)v8, 250, 1); /*0x5b6e21*/
    Stream::ReadPacket((int)&g_EventManager); /*0x5b6e2b*/
    v3 = CharToWideString(g_GameSetupBuffer); /*0x5b6e35*/
    v4 = g_TauntCommandState; /*0x5b6e3d*/
    Format = (wchar_t *)v3; /*0x5b6e49*/
    DlgItem = GetDlgItem(*this, 1343); /*0x5b6e53*/
    if ( DlgItem ) /*0x5b6e57*/
    {
      if ( v4 >= 8 ) /*0x5b6e5b*/
        v6 = Math::InitDegToRad; /*0x5b6e6b*/
      else
        v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v4]; /*0x5b6e62*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source); /*0x5b6e84*/
      DrawDialogText((LPARAM)v6, Buffer, DlgItem); /*0x5b6e96*/
    }
  }
}
} // namespace gamemd

// 0x5B6F30
namespace gamemd {
HWND sub_5B6F30()
{
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  HWND v2; // ebx
  int v3; // edi
  int v4; // esi
  HWND result; // eax
  _BYTE v6[4]; // [esp+8h] [ebp-1FCh] BYREF
  _DWORD v7[62]; // [esp+Ch] [ebp-1F8h] BYREF
  __int16 v8; // [esp+104h] [ebp-100h]
  _DWORD v9[6]; // [esp+108h] [ebp-FCh] BYREF
  int v10; // [esp+120h] [ebp-E4h]

  memset(v7, 0, sizeof(v7)); /*0x5b6f45*/
  v8 = 0; /*0x5b6f51*/
  IDA_LOBYTE(v7[6]) = g_EventDispatchState; /*0x5b6f58*/
  v7[0] = 102; /*0x5b6f67*/
  IDA_BYTE1(v7[7]) = g_TauntCommandState; /*0x5b6f6f*/
  Stream::WriteBlock((int)&g_EventManager, (int)v7, 250, 1); /*0x5b6f73*/
  StringCSF = GetStringCSF(aTxtSigningOff, 0, g_Str_File_ModemGst_cpp, 1683); /*0x5b6f8b*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5b6f94*/
  v2 = MessageBox; /*0x5b6f99*/
  if ( MessageBox ) /*0x5b6f9d*/
    Dialog::Show(MessageBox); /*0x5b6fa1*/
  v3 = g_PerformanceTickOffset; /*0x5b6fab*/
  if ( g_LastPerformanceTick != -1 ) /*0x5b6fb4*/
    v3 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5b6fc6*/
  while ( Count::GetCountQueue(&g_EventManager) ) /*0x5b6fcd*/
  {
    v4 = g_PerformanceTickOffset; /*0x5b6fe0*/
    if ( g_LastPerformanceTick != -1 ) /*0x5b6fe9*/
      v4 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5b6ffb*/
    if ( (unsigned int)(v4 - v3) >= 0x12C /*0x5b7040*/
      || ObjectTypeClass::CreateInstance((int)&g_EventManager, (int)v9, (int)v6) > 0
      && v9[0] == 102
      && (unsigned __int8)v10 == g_EventDispatchState )
    {
      break; /*0x5b7040*/
    }
    Event::Dispatch(); /*0x5b7042*/
    MessageLoop(); /*0x5b7047*/
    Stream::ReadPacket((int)&g_EventManager); /*0x5b7051*/
  }
  result = (HWND)Network::CleanupOnDisconnect(); /*0x5b7069*/
  if ( v2 ) /*0x5b7070*/
    return Dialog::Destroy(v2); /*0x5b7074*/
  return result; /*0x5b7079*/
}
} // namespace gamemd

// 0x5B75D0
namespace gamemd {
int sub_5B75D0()
{
  dword_ABF098 = 0; /*0x5b75d2*/
  dword_ABF09C = 0; /*0x5b75d7*/
  dword_ABF0A0 = 0; /*0x5b75dc*/
  dword_ABF0A4 = 0; /*0x5b75e1*/
  return 0; /*0x5b75e6*/
}
} // namespace gamemd

// 0x5B75F0
namespace gamemd {
void sub_5B75F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b75fc*/
  dbl_ABF0B0 = Math::Sqrt(v0 + v0); /*0x5b760e*/
}
} // namespace gamemd

// 0x5B7620
namespace gamemd {
void sub_5B7620()
{
  dbl_ABF100 = dbl_ABF0B0 / 60.0; /*0x5b762c*/
}
} // namespace gamemd

// 0x5B7640
namespace gamemd {
void sub_5B7640()
{
  dbl_ABF0E8 = 1.0 / dbl_ABF100; /*0x5b764c*/
}
} // namespace gamemd

// 0x5B7660
namespace gamemd {
void sub_5B7660()
{
  dbl_ABF0E0 = 0.0174532925199433 * 45.0; /*0x5b766c*/
}
} // namespace gamemd

// 0x5B7680
namespace gamemd {
void sub_5B7680()
{
  dbl_ABF0B8 = 0.0174532925199433 * 60.0; /*0x5b768c*/
}
} // namespace gamemd

// 0x5B76A0
namespace gamemd {
void sub_5B76A0()
{
  dbl_ABF090 = 0.0174532925199433 * 90.0; /*0x5b76ac*/
}
} // namespace gamemd

// 0x5B76C0
namespace gamemd {
long long sub_5B76C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF090 - dbl_ABF0B8); /*0x5b76d2*/
  result = Math::RoundToInt(v0 * dbl_ABF0B0 * 0.5); /*0x5b76e6*/
  dword_ABF108 = result; /*0x5b76eb*/
  return result; /*0x5b76f0*/
}
} // namespace gamemd

// 0x5B7700
namespace gamemd {
void sub_5B7700()
{
  dbl_ABF0C0 = Math::ArcTan((double)dword_ABF108 * 0.00390625); /*0x5b7717*/
}
} // namespace gamemd

// 0x5B7730
namespace gamemd {
void sub_5B7730()
{
  dbl_ABF0D8 = Math::ArcTan((double)(2 * dword_ABF108) / dbl_ABF0B0); /*0x5b7752*/
}
} // namespace gamemd

// 0x5B7760
namespace gamemd {
long long sub_5B7760()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF108) + 0.5); /*0x5b777b*/
  dword_ABF0FC = result; /*0x5b7780*/
  return result; /*0x5b7786*/
}
} // namespace gamemd

// 0x5B7790
namespace gamemd {
int sub_5B7790()
{
  word_ABF0A8 = 0; /*0x5b7792*/
  word_ABF0AA = 0; /*0x5b7798*/
  return 0; /*0x5b779e*/
}
} // namespace gamemd

// 0x5B77A0
namespace gamemd {
int sub_5B77A0()
{
  dword_ABF0C8 = 0; /*0x5b77a2*/
  dword_ABF0CC = 0; /*0x5b77a7*/
  dword_ABF0D0 = 0; /*0x5b77ac*/
  return 0; /*0x5b77b1*/
}
} // namespace gamemd

// 0x5B77C0
namespace gamemd {
int sub_5B77C0()
{
  dword_ABF0F8 = 0; /*0x5b77c5*/
  dword_ABF0F0 = 128; /*0x5b77cf*/
  dword_ABF0F4 = 128; /*0x5b77d4*/
  return 128; /*0x5b77d9*/
}
} // namespace gamemd

// 0x5B9250
namespace gamemd {
HWND E4Recv_5B9250::sub_5B9250()
{
  HWND result; // eax
  HWND v3; // esi
  char *v4; // eax
  unsigned int v5; // edi
  HWND v6; // esi
  int (__usercall *v7)@<eax>(char@<cf>, char@<zf>); // edi
  HWND v8; // [esp-8h] [ebp-518h]
  int v9; // [esp+0h] [ebp-510h] BYREF
  wchar_t *Format; // [esp+10h] [ebp-500h]
  _DWORD v11[62]; // [esp+14h] [ebp-4FCh] BYREF
  __int16 v12; // [esp+10Ch] [ebp-404h]
  wchar_t lParam[256]; // [esp+110h] [ebp-400h] BYREF
  wchar_t Buffer[256]; // [esp+310h] [ebp-200h] BYREF

  memset(lParam, 0, sizeof(lParam)); /*0x5b9270*/
  result = GetDlgItem(*this, 1344); /*0x5b927a*/
  v3 = result; /*0x5b927c*/
  if ( result ) /*0x5b9280*/
  {
    SendMessageA(result, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b929f*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5b92ae*/
    result = (HWND)wcslen(lParam); /*0x5b92b8*/
    if ( result ) /*0x5b92c2*/
    {
      if ( lParam[0] != 13 ) /*0x5b92d1*/
      {
        WideString::Trim(lParam); /*0x5b92de*/
        result = (HWND)lParam; /*0x5b92e3*/
        if ( &v9 != (int *)-272 ) /*0x5b92ec*/
        {
          memset(v11, 0, sizeof(v11)); /*0x5b9301*/
          v12 = 0; /*0x5b9303*/
          v11[0] = 104; /*0x5b930f*/
          strcpy((char *)&v11[1], g_GameSetupBuffer); /*0x5b932d*/
          IDA_LOBYTE(v11[6]) = g_TauntCommandState; /*0x5b9342*/
          wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam); /*0x5b9346*/
          Stream::WriteBlock((int)&g_EventManager, (int)v11, 250, 1); /*0x5b935f*/
          Stream::ReadPacket((int)&g_EventManager); /*0x5b9369*/
          v4 = CharToWideString(g_GameSetupBuffer); /*0x5b9373*/
          v5 = g_TauntCommandState; /*0x5b937a*/
          v8 = *this; /*0x5b9385*/
          Format = (wchar_t *)v4; /*0x5b9386*/
          result = GetDlgItem(v8, 1343); /*0x5b938a*/
          v6 = result; /*0x5b938c*/
          if ( result ) /*0x5b9390*/
          {
            if ( v5 >= 8 ) /*0x5b9394*/
              v7 = Math::InitDegToRad; /*0x5b93a4*/
            else
              v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v5]; /*0x5b939b*/
            swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam); /*0x5b93c4*/
            return (HWND)DrawDialogText((LPARAM)v7, Buffer, v6); /*0x5b93d6*/
          }
        }
      }
    }
  }
  return result; /*0x5b93db*/
}
} // namespace gamemd

// 0x5B93F0
namespace gamemd {
char E4Recv_5B93F0::sub_5B93F0()
{
  HWND DlgItem; // eax
  HWND v3; // esi

  DlgItem = GetDlgItem(*(HWND *)this, 1639); /*0x5b93fd*/
  v3 = DlgItem; /*0x5b9403*/
  if ( DlgItem ) /*0x5b9407*/
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b9419*/
    if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b941e*/
    {
      DlgItem = (HWND)SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0); /*0x5b9429*/
      if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b942e*/
      {
        g_CommandExecState = (int)DlgItem; /*0x5b9430*/
        this->objectTypeFlags = 1; /*0x5b9437*/
        this->vtable3 = 1; /*0x5b943a*/
        IDA_LOBYTE(DlgItem) = 1; /*0x5b9435*/
      }
    }
  }
  return (char)DlgItem; /*0x5b943d*/
}
} // namespace gamemd

// 0x5B9450
namespace gamemd {
unsigned int E4Recv_5B9450::sub_5B9450()
{
  unsigned int result; // eax
  HWND v3; // edi

  result = (unsigned int)GetDlgItem(*(HWND *)this, 1029); /*0x5b945d*/
  v3 = (HWND)result; /*0x5b9463*/
  if ( result ) /*0x5b9467*/
  {
    result = SendMessageA((HWND)result, 0x147u, 0, 0); /*0x5b9479*/
    if ( result != -1 ) /*0x5b947e*/
    {
      result = result; /*0x5b9482*/
      this->objectTypeFlags = 1; /*0x5b9489*/
      this->vtable3 = 1; /*0x5b948c*/
      if ( result >= 8 ) /*0x5b948f*/
        return SendMessageA(v3, 0x498u, 0, (LPARAM)Math::InitDegToRad); /*0x5b94ba*/
      else
        return SendMessageA(v3, 0x498u, 0, dword_8316A8[result]); /*0x5b94a6*/
    }
  }
  return result; /*0x5b94a8*/
}
} // namespace gamemd

// 0x5B94C0
namespace gamemd {
char E4Recv_5B94C0::sub_5B94C0(char a2)
{
  HWND DlgItem; // eax
  HWND v4; // esi
  wchar_t lParam[20]; // [esp+8h] [ebp-28h] BYREF

  DlgItem = GetDlgItem(*(HWND *)this, 1473); /*0x5b94cf*/
  v4 = DlgItem; /*0x5b94d5*/
  if ( DlgItem ) /*0x5b94d9*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b94ef*/
    WideString::Trim(lParam); /*0x5b94f5*/
    if ( !a2 ) /*0x5b9500*/
      SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam); /*0x5b950f*/
    strcpy(g_GameSetupBuffer, ToWideStringChar((char *)lParam)); /*0x5b9533*/
    this->objectTypeFlags = 1; /*0x5b953e*/
    this->vtable3 = 1; /*0x5b9541*/
    IDA_LOBYTE(DlgItem) = 1; /*0x5b9537*/
  }
  return (char)DlgItem; /*0x5b9545*/
}
} // namespace gamemd

// 0x5BAA80
namespace gamemd {
void E4Recv_5BAA80::sub_5BAA80(wchar_t * Format, unsigned int a3, int a4)
{
  HWND DlgItem; // edi
  int (__usercall *v5)@<eax>(char@<cf>, char@<zf>); // esi
  wchar_t Buffer[256]; // [esp+8h] [ebp-200h] BYREF

  if ( a4 ) /*0x5baa91*/
  {
    DlgItem = GetDlgItem(*this, 1343); /*0x5baaa1*/
    if ( DlgItem ) /*0x5baaa5*/
    {
      if ( a3 >= 8 ) /*0x5baab1*/
        v5 = Math::InitDegToRad; /*0x5baac1*/
      else
        v5 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[a3]; /*0x5baab8*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, a4); /*0x5baada*/
      DrawDialogText((LPARAM)v5, Buffer, DlgItem); /*0x5baae9*/
    }
  }
}
} // namespace gamemd

// 0x5BAB00
namespace gamemd {
HWND sub_5BAB00()
{
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  HWND v2; // ebx
  int v3; // edi
  int v4; // esi
  HWND result; // eax
  _BYTE v6[4]; // [esp+8h] [ebp-1FCh] BYREF
  _DWORD v7[62]; // [esp+Ch] [ebp-1F8h] BYREF
  __int16 v8; // [esp+104h] [ebp-100h]
  _DWORD v9[6]; // [esp+108h] [ebp-FCh] BYREF
  int v10; // [esp+120h] [ebp-E4h]

  memset(v7, 0, sizeof(v7)); /*0x5bab15*/
  v8 = 0; /*0x5bab21*/
  IDA_LOBYTE(v7[6]) = g_EventDispatchState; /*0x5bab28*/
  v7[0] = 102; /*0x5bab37*/
  IDA_BYTE1(v7[7]) = g_TauntCommandState; /*0x5bab3f*/
  Stream::WriteBlock((int)&g_EventManager, (int)v7, 250, 1); /*0x5bab43*/
  StringCSF = GetStringCSF(aTxtSigningOff, 0, g_Str_File_ModemHst_cpp, 2398); /*0x5bab5b*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5bab64*/
  v2 = MessageBox; /*0x5bab69*/
  if ( MessageBox ) /*0x5bab6d*/
    Dialog::Show(MessageBox); /*0x5bab71*/
  v3 = g_PerformanceTickOffset; /*0x5bab7b*/
  if ( g_LastPerformanceTick != -1 ) /*0x5bab84*/
    v3 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5bab96*/
  while ( Count::GetCountQueue(&g_EventManager) ) /*0x5bab9d*/
  {
    v4 = g_PerformanceTickOffset; /*0x5babb0*/
    if ( g_LastPerformanceTick != -1 ) /*0x5babb9*/
      v4 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5babcb*/
    if ( (unsigned int)(v4 - v3) >= 0x12C /*0x5bac10*/
      || ObjectTypeClass::CreateInstance((int)&g_EventManager, (int)v9, (int)v6) > 0
      && v9[0] == 102
      && (unsigned __int8)v10 == g_EventDispatchState )
    {
      break; /*0x5bac10*/
    }
    Event::Dispatch(); /*0x5bac12*/
    MessageLoop(); /*0x5bac17*/
    Stream::ReadPacket((int)&g_EventManager); /*0x5bac21*/
  }
  result = (HWND)Network::CleanupOnDisconnect(); /*0x5bac39*/
  if ( v2 ) /*0x5bac40*/
    return Dialog::Destroy(v2); /*0x5bac44*/
  return result; /*0x5bac49*/
}
} // namespace gamemd

// 0x5BBF70
namespace gamemd {
int sub_5BBF70()
{
  dword_ABF138 = 0; /*0x5bbf72*/
  dword_ABF13C = 0; /*0x5bbf77*/
  dword_ABF140 = 0; /*0x5bbf7c*/
  dword_ABF144 = 0; /*0x5bbf81*/
  return 0; /*0x5bbf86*/
}
} // namespace gamemd

// 0x5BBF90
namespace gamemd {
void sub_5BBF90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bbf9c*/
  dbl_ABF150 = Math::Sqrt(v0 + v0); /*0x5bbfae*/
}
} // namespace gamemd

// 0x5BBFC0
namespace gamemd {
void sub_5BBFC0()
{
  dbl_ABF210 = dbl_ABF150 / 60.0; /*0x5bbfcc*/
}
} // namespace gamemd

// 0x5BBFE0
namespace gamemd {
void sub_5BBFE0()
{
  dbl_ABF1C0 = 1.0 / dbl_ABF210; /*0x5bbfec*/
}
} // namespace gamemd

// 0x5BC000
namespace gamemd {
void sub_5BC000()
{
  dbl_ABF1B8 = 0.0174532925199433 * 45.0; /*0x5bc00c*/
}
} // namespace gamemd

// 0x5BC020
namespace gamemd {
void sub_5BC020()
{
  dbl_ABF158 = 0.0174532925199433 * 60.0; /*0x5bc02c*/
}
} // namespace gamemd

// 0x5BC040
namespace gamemd {
void sub_5BC040()
{
  dbl_ABF130 = 0.0174532925199433 * 90.0; /*0x5bc04c*/
}
} // namespace gamemd

// 0x5BC060
namespace gamemd {
long long sub_5BC060()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF130 - dbl_ABF158); /*0x5bc072*/
  result = Math::RoundToInt(v0 * dbl_ABF150 * 0.5); /*0x5bc086*/
  dword_ABF218 = result; /*0x5bc08b*/
  return result; /*0x5bc090*/
}
} // namespace gamemd

// 0x5BC0A0
namespace gamemd {
void sub_5BC0A0()
{
  dbl_ABF160 = Math::ArcTan((double)dword_ABF218 * 0.00390625); /*0x5bc0b7*/
}
} // namespace gamemd

// 0x5BC0D0
namespace gamemd {
void sub_5BC0D0()
{
  dbl_ABF1B0 = Math::ArcTan((double)(2 * dword_ABF218) / dbl_ABF150); /*0x5bc0f2*/
}
} // namespace gamemd

// 0x5BC100
namespace gamemd {
long long sub_5BC100()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF218) + 0.5); /*0x5bc11b*/
  dword_ABF20C = result; /*0x5bc120*/
  return result; /*0x5bc126*/
}
} // namespace gamemd

// 0x5BC130
namespace gamemd {
int sub_5BC130()
{
  word_ABF148 = 0; /*0x5bc132*/
  word_ABF14A = 0; /*0x5bc138*/
  return 0; /*0x5bc13e*/
}
} // namespace gamemd

// 0x5BC140
namespace gamemd {
int sub_5BC140()
{
  dword_ABF188 = 0; /*0x5bc142*/
  dword_ABF18C = 0; /*0x5bc147*/
  dword_ABF190 = 0; /*0x5bc14c*/
  return 0; /*0x5bc151*/
}
} // namespace gamemd

// 0x5BC160
namespace gamemd {
int sub_5BC160()
{
  dword_ABF208 = 0; /*0x5bc165*/
  dword_ABF200 = 128; /*0x5bc16f*/
  dword_ABF204 = 128; /*0x5bc174*/
  return 128; /*0x5bc179*/
}
} // namespace gamemd

// 0x5BC300
namespace gamemd {
int _ioterm()
{
  void **v0; // esi
  HWND result; // eax

  v0 = (void **)dword_ABF168; /*0x5bc301*/
  do /*0x5bc324*/
  {
    if ( *v0 ) /*0x5bc306*/
    {
      RA2_OPDEL(*v0); /*0x5bc30d*/
      *v0 = 0; /*0x5bc315*/
    }
    ++v0; /*0x5bc31b*/
  }
  while ( (int)v0 < (int)&dword_ABF188 ); /*0x5bc324*/
  result = dword_ABF240; /*0x5bc326*/
  if ( dword_ABF240 ) /*0x5bc32e*/
  {
    DeleteObject(h); /*0x5bc336*/
    Object::RemoveObjectArray(dword_ABF240); /*0x5bc342*/
    result = (HWND)DestroyWindow(dword_ABF240); /*0x5bc34e*/
    h = 0; /*0x5bc354*/
    dword_ABF240 = 0; /*0x5bc35e*/
  }
  return result; /*0x5bc32b*/
}
} // namespace gamemd

// 0x5BC440
namespace gamemd {
ObjectClass * sub_5BC440()
{
  return dword_ABF23C; /*0x5bc445*/
}
} // namespace gamemd

// 0x5BC450
namespace gamemd {
int sub_5BC450(int a1)
{
  return dword_ABF168[a1]; /*0x5bc457*/
}
}
// 0x5BC460
namespace gamemd {
char sub_5BC460(int a1)
{
  _BYTE *v1; // ecx
  int v2; // edi
  _DWORD *v3; // ebx
  _BYTE *v4; // edx
  _DWORD *v5; // eax
  int v6; // esi

  v1 = (_BYTE *)dword_ABF168[a1]; /*0x5bc460*/
  dword_ABF23C = (int)v1; /*0x5bc46a*/
  v2 = 0; /*0x5bc470*/
  v3 = v1 + 2000; /*0x5bc472*/
  do /*0x5bc49b*/
  {
    v4 = &v1[v2]; /*0x5bc478*/
    v5 = v3; /*0x5bc47b*/
    v6 = 80; /*0x5bc47d*/
    do /*0x5bc492*/
    {
      *v4 = 32; /*0x5bc482*/
      *v5 = 0; /*0x5bc485*/
      v5 += 25; /*0x5bc48b*/
      v4 += 25; /*0x5bc48e*/
      --v6; /*0x5bc491*/
    }
    while ( v6 ); /*0x5bc492*/
    ++v2; /*0x5bc494*/
    ++v3; /*0x5bc495*/
  }
  while ( v2 < 25 ); /*0x5bc49b*/
  v1[10036] = 1; /*0x5bc4a5*/
  Text::DrawRepeated(v1, 0, 0, 80, 25); /*0x5bc4ac*/
  return Text::DrawRepeated((void *)dword_ABF23C, 0, 0, 80, 25); /*0x5bc4c4*/
}
} // namespace gamemd

// 0x5BC4D0
namespace gamemd {
char sub_5BC4D0()
{
  int *v0; // ebx
  _BYTE *v1; // ecx
  int v2; // edi
  int v3; // ebp
  _BYTE *v4; // edx
  _DWORD *v5; // eax
  int v6; // esi
  char result; // al

  v0 = dword_ABF168; /*0x5bc4d4*/
  do /*0x5bc525*/
  {
    v1 = (_BYTE *)*v0; /*0x5bc4d9*/
    v2 = 0; /*0x5bc4db*/
    v3 = *v0 + 2000; /*0x5bc4dd*/
    do /*0x5bc506*/
    {
      v4 = &v1[v2]; /*0x5bc4e3*/
      v5 = (_DWORD *)v3; /*0x5bc4e6*/
      v6 = 80; /*0x5bc4e8*/
      do /*0x5bc4fd*/
      {
        *v4 = 32; /*0x5bc4ed*/
        *v5 = 0; /*0x5bc4f0*/
        v5 += 25; /*0x5bc4f6*/
        v4 += 25; /*0x5bc4f9*/
        --v6; /*0x5bc4fc*/
      }
      while ( v6 ); /*0x5bc4fd*/
      ++v2; /*0x5bc4ff*/
      v3 += 4; /*0x5bc500*/
    }
    while ( v2 < 25 ); /*0x5bc506*/
    v1[10036] = 1; /*0x5bc510*/
    result = Text::DrawRepeated(v1, 0, 0, 80, 25); /*0x5bc517*/
    ++v0; /*0x5bc51c*/
  }
  while ( (int)v0 < (int)&dword_ABF188 ); /*0x5bc525*/
  return result; /*0x5bc527*/
}
} // namespace gamemd

// 0x5BC530
namespace gamemd {
int sub_5BC530()
{
  HDC DC; // ebp
  int DeviceCaps; // eax
  HGDIOBJ v2; // edi
  struct tagRECT Rect; // [esp+10h] [ebp-5Ch] BYREF
  struct tagRECT v5; // [esp+20h] [ebp-4Ch] BYREF
  LOGFONTA lf; // [esp+30h] [ebp-3Ch] BYREF

  dword_ABF240 = CreateDialogParamA(dword_ABF230, (LPCSTR)0xF8, hWndParent, DlgProcAudioDebug, 0); /*0x5bc559*/
  TimerPool::AllocSlot(dword_ABF240); /*0x5bc55e*/
  DC = GetDC(dword_ABF240); /*0x5bc570*/
  DeviceCaps = GetDeviceCaps(DC, 90); /*0x5bc577*/
  lf.lfHeight = -MulDiv(8, DeviceCaps, 72); /*0x5bc588*/
  memset(&lf.lfWidth, 0, 24); /*0x5bc5a6*/
  strcpy(lf.lfFaceName, "Courier"); /*0x5bc5d9*/
  h = CreateFontIndirectA(&lf); /*0x5bc5f3*/
  v2 = SelectObject(DC, h); /*0x5bc5fc*/
  GetTextMetricsA(DC, &tm); /*0x5bc604*/
  SelectObject(DC, v2); /*0x5bc60c*/
  dword_ABF128 = GetSysColor(15); /*0x5bc618*/
  color = GetSysColor(8); /*0x5bc621*/
  Rect.left = 0; /*0x5bc62b*/
  Rect.top = 0; /*0x5bc62f*/
  Rect.right = 79 * tm.tmMaxCharWidth + 20; /*0x5bc64b*/
  Rect.bottom = 25 * (tm.tmHeight + tm.tmExternalLeading) + 20; /*0x5bc661*/
  AdjustWindowRect(&Rect, 0xC00000u, 0); /*0x5bc665*/
  GetWindowRect(hWndParent, &v5); /*0x5bc677*/
  MoveWindow(dword_ABF240, v5.right + 5, 0, Rect.right - Rect.left, Rect.bottom - Rect.top, 1); /*0x5bc6a4*/
  ShowWindow(dword_ABF240, 0); /*0x5bc6b2*/
  SetFocus(hWndParent); /*0x5bc6bf*/
  return ReleaseDC(dword_ABF240, DC); /*0x5bc6d2*/
}
} // namespace gamemd

// 0x5BCB90
namespace gamemd {
ObjectClass * E4Recv_5BCB90::sub_5BCB90(int a2)
{
  int v3; // edi
  _DWORD *v4; // ebx
  _BYTE *v5; // ecx
  _DWORD *v6; // eax
  int v7; // edx

  v3 = 0; /*0x5bcb9c*/
  this->q9C6 = a2; /*0x5bcb9e*/
  this->q9C7 = 0; /*0x5bcba4*/
  this->q9C8 = 0; /*0x5bcbaa*/
  this->q2724 = 0; /*0x5bcbb0*/
  this->q2728 = 0; /*0x5bcbb6*/
  this->q9CB = 80; /*0x5bcbbc*/
  this->q9CC = 25; /*0x5bcbc6*/
  v4 = (_DWORD *)(&this->q3200); /*0x5bcbd0*/
  do /*0x5bcbf5*/
  {
    v5 = (_BYTE *)(v3 + this); /*0x5bcbd6*/
    v6 = v4; /*0x5bcbd9*/
    v7 = 80; /*0x5bcbdb*/
    do /*0x5bcbec*/
    {
      *v5 = 32; /*0x5bcbe0*/
      *v6 = 0; /*0x5bcbe3*/
      v6 += 25; /*0x5bcbe5*/
      v5 += 25; /*0x5bcbe8*/
      --v7; /*0x5bcbeb*/
    }
    while ( v7 ); /*0x5bcbec*/
    ++v3; /*0x5bcbee*/
    ++v4; /*0x5bcbef*/
  }
  while ( v3 < 25 ); /*0x5bcbf5*/
  this->q2734 = 1; /*0x5bcbff*/
  Text::DrawRepeated(0, 0, 80, 25); /*0x5bcc06*/
  return this; /*0x5bcc0d*/
}
} // namespace gamemd

// 0x5BCC20
namespace gamemd {
void nullsub_174()
{
  ; /*0x5bcc20*/
}
} // namespace gamemd

// 0x5BCC30
namespace gamemd {
int E4Recv_5BCC30::sub_5BCC30()
{
  return *(this + 2502); /*0x5bcc36*/
}
} // namespace gamemd

// 0x5BCC60
namespace gamemd {
int E4Recv_5BCC60::sub_5BCC60(int a2, int a3, int a4, int a5)
{
  *(&this->q3E85) = a2; /*0x5bcc68*/
  *(&this->q3E86) = a3; /*0x5bcc72*/
  *(&this->q3E87) = a4; /*0x5bcc7c*/
  *(this + 2508) = a5; /*0x5bcc82*/
  return a4; /*0x5bcc88*/
}
} // namespace gamemd

// 0x5BCCE0
namespace gamemd {
char E4Recv_5BCCE0::sub_5BCCE0()
{
  return this->q2734; /*0x5bcce6*/
}
} // namespace gamemd

// 0x5BD240
namespace gamemd {
char sub_5BD240(int a1, size_t BufferCount, wchar_t Format)
{
  char result; // al
  char v4[256]; // [esp+0h] [ebp-300h] BYREF
  wchar_t Buffer[256]; // [esp+100h] [ebp-200h] BYREF

  result = g_MiscFlag; /*0x5bd240*/
  if ( g_MiscFlag ) /*0x5bd24d*/
  {
    vswprintf(Buffer, BufferCount, &Format, *(va_list *)v4); /*0x5bd267*/
    sprintf(v4, "%S", Buffer); /*0x5bd27e*/
    return Debug::ScrollText(a1, v4); /*0x5bd292*/
  }
  return result; /*0x5bd297*/
}
} // namespace gamemd

// 0x5BD2E0
namespace gamemd {
char E4Recv_5BD2E0::sub_5BD2E0(ObjectClass * aP1, int a3, int a4, int a5)
{
  char result; // al
  char Buffer[1024]; // [esp+4h] [ebp-400h] BYREF

  result = g_MiscFlag; /*0x5bd2e0*/
  if ( g_MiscFlag ) /*0x5bd2f0*/
  {
    *(&this->q3E83) = a3; /*0x5bd300*/
    *(&this->q3E84) = a4; /*0x5bd306*/
    if ( g_MiscFlag ) /*0x5bd313*/
      *(&this->q3E80) = a5; /*0x5bd31c*/
    sprintf(Buffer, "%S", aP1); /*0x5bd334*/
    return Debug::ScrollText(Buffer); /*0x5bd343*/
  }
  return result; /*0x5bd348*/
}
} // namespace gamemd

// 0x5BD560
namespace gamemd {
unsigned int * E4Recv_5BD560::sub_5BD560()
{
  *(_BYTE *)this = 0; /*0x5bd564*/
  this->vtable2 = 0; /*0x5bd566*/
  this->vtable3 = 0; /*0x5bd569*/
  *(this + 3) = 0; /*0x5bd56c*/
  return this; /*0x5bd56f*/
}
} // namespace gamemd

// 0x5BD7E0
namespace gamemd {
void sub_5BD7E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bd7ec*/
  dbl_ABF270 = Math::Sqrt(v0 + v0); /*0x5bd7fe*/
}
} // namespace gamemd

// 0x5BD810
namespace gamemd {
void sub_5BD810()
{
  dbl_ABF2D0 = dbl_ABF270 / 60.0; /*0x5bd81c*/
}
} // namespace gamemd

// 0x5BD830
namespace gamemd {
void sub_5BD830()
{
  dbl_ABF2B8 = 1.0 / dbl_ABF2D0; /*0x5bd83c*/
}
} // namespace gamemd

// 0x5BD850
namespace gamemd {
void sub_5BD850()
{
  dbl_ABF2B0 = 0.0174532925199433 * 45.0; /*0x5bd85c*/
}
} // namespace gamemd

// 0x5BD870
namespace gamemd {
void sub_5BD870()
{
  dbl_ABF278 = 0.0174532925199433 * 60.0; /*0x5bd87c*/
}
} // namespace gamemd

// 0x5BD890
namespace gamemd {
void sub_5BD890()
{
  dbl_ABF248 = 0.0174532925199433 * 90.0; /*0x5bd89c*/
}
} // namespace gamemd

// 0x5BD8B0
namespace gamemd {
long long sub_5BD8B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF248 - dbl_ABF278); /*0x5bd8c2*/
  result = Math::RoundToInt(v0 * dbl_ABF270 * 0.5); /*0x5bd8d6*/
  dword_ABF2D8 = result; /*0x5bd8db*/
  return result; /*0x5bd8e0*/
}
} // namespace gamemd

// 0x5BD8F0
namespace gamemd {
void sub_5BD8F0()
{
  dbl_ABF280 = Math::ArcTan((double)dword_ABF2D8 * 0.00390625); /*0x5bd907*/
}
} // namespace gamemd

// 0x5BD920
namespace gamemd {
void sub_5BD920()
{
  dbl_ABF298 = Math::ArcTan((double)(2 * dword_ABF2D8) / dbl_ABF270); /*0x5bd942*/
}
} // namespace gamemd

// 0x5BD950
namespace gamemd {
long long sub_5BD950()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF2D8) + 0.5); /*0x5bd96b*/
  dword_ABF2CC = result; /*0x5bd970*/
  return result; /*0x5bd976*/
}
} // namespace gamemd

// 0x5BD980
namespace gamemd {
int sub_5BD980()
{
  word_ABF268 = 0; /*0x5bd982*/
  word_ABF26A = 0; /*0x5bd988*/
  return 0; /*0x5bd98e*/
}
} // namespace gamemd

// 0x5BD990
namespace gamemd {
int sub_5BD990()
{
  dword_ABF288 = 0; /*0x5bd992*/
  dword_ABF28C = 0; /*0x5bd997*/
  dword_ABF290 = 0; /*0x5bd99c*/
  return 0; /*0x5bd9a1*/
}
} // namespace gamemd

// 0x5BD9B0
namespace gamemd {
int sub_5BD9B0()
{
  dword_ABF2C8 = 0; /*0x5bd9b5*/
  dword_ABF2C0 = 128; /*0x5bd9bf*/
  dword_ABF2C4 = 128; /*0x5bd9c4*/
  return 128; /*0x5bd9c9*/
}
} // namespace gamemd

// 0x5BD9D0
namespace gamemd {
int sub_5BD9D0()
{
  dword_ABF258 = 0; /*0x5bd9d2*/
  dword_ABF25C = 0; /*0x5bd9d7*/
  dword_ABF260 = 0; /*0x5bd9dc*/
  dword_ABF264 = 0; /*0x5bd9e1*/
  return 0; /*0x5bd9e6*/
}
} // namespace gamemd

// 0x5BD9F0
namespace gamemd {
int sub_5BD9F0()
{
  dword_ABF2A0 = Timer::GetTicks(); /*0x5bd9ff*/
  dword_ABF2A8 = 0; /*0x5bda04*/
  return atexit(sub_5BDA20); /*0x5bda14*/
}
} // namespace gamemd

// 0x5BDA20
namespace gamemd {
void sub_5BDA20()
{
  if ( (byte_ABF250 & 1) == 0 ) /*0x5bda2a*/
    byte_ABF250 |= 1u; /*0x5bda2e*/
}
} // namespace gamemd

// 0x5BDA40
namespace gamemd {
unsigned char * E4Recv_5BDA40::sub_5BDA40()
{
  SmallFunc_692290(); /*0x5bda43*/
  *(_DWORD *)this = (void*)&MouseClass_vftable; /*0x5bda4a*/
  *(this + 21852) = 0; /*0x5bda50*/
  *((_DWORD *)this + 5464) = 0; /*0x5bda56*/
  *((_DWORD *)this + 5465) = 0; /*0x5bda5c*/
  this->u32_5568 = 0; /*0x5bda62*/
  this->u32_5518 = (void*)&MouseClass_vftable; /*0x5bda68*/
  return this; /*0x5bda74*/
}
} // namespace gamemd

// 0x5BEAB0
namespace gamemd {
int sub_5BEAB0()
{
  dword_ABF2E8 = 0; /*0x5beab2*/
  dword_ABF2EC = 0; /*0x5beab7*/
  dword_ABF2F0 = 0; /*0x5beabc*/
  dword_ABF2F4 = 0; /*0x5beac1*/
  return 0; /*0x5beac6*/
}
} // namespace gamemd

// 0x5BEAD0
namespace gamemd {
void sub_5BEAD0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5beadc*/
  dbl_ABF300 = Math::Sqrt(v0 + v0); /*0x5beaee*/
}
} // namespace gamemd

// 0x5BEB00
namespace gamemd {
void sub_5BEB00()
{
  dbl_ABF350 = dbl_ABF300 / 60.0; /*0x5beb0c*/
}
} // namespace gamemd

// 0x5BEB20
namespace gamemd {
void sub_5BEB20()
{
  dbl_ABF338 = 1.0 / dbl_ABF350; /*0x5beb2c*/
}
} // namespace gamemd

// 0x5BEB40
namespace gamemd {
void sub_5BEB40()
{
  dbl_ABF330 = 0.0174532925199433 * 45.0; /*0x5beb4c*/
}
} // namespace gamemd

// 0x5BEB60
namespace gamemd {
void sub_5BEB60()
{
  dbl_ABF308 = 0.0174532925199433 * 60.0; /*0x5beb6c*/
}
} // namespace gamemd

// 0x5BEB80
namespace gamemd {
void sub_5BEB80()
{
  dbl_ABF2E0 = 0.0174532925199433 * 90.0; /*0x5beb8c*/
}
} // namespace gamemd

// 0x5BEBA0
namespace gamemd {
long long sub_5BEBA0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF2E0 - dbl_ABF308); /*0x5bebb2*/
  result = Math::RoundToInt(v0 * dbl_ABF300 * 0.5); /*0x5bebc6*/
  dword_ABF358 = result; /*0x5bebcb*/
  return result; /*0x5bebd0*/
}
} // namespace gamemd

// 0x5BEBE0
namespace gamemd {
void sub_5BEBE0()
{
  dbl_ABF310 = Math::ArcTan((double)dword_ABF358 * 0.00390625); /*0x5bebf7*/
}
} // namespace gamemd

// 0x5BEC10
namespace gamemd {
void sub_5BEC10()
{
  dbl_ABF328 = Math::ArcTan((double)(2 * dword_ABF358) / dbl_ABF300); /*0x5bec32*/
}
} // namespace gamemd

// 0x5BEC40
namespace gamemd {
long long sub_5BEC40()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF358) + 0.5); /*0x5bec5b*/
  dword_ABF34C = result; /*0x5bec60*/
  return result; /*0x5bec66*/
}
} // namespace gamemd

// 0x5BEC70
namespace gamemd {
int sub_5BEC70()
{
  word_ABF2F8 = 0; /*0x5bec72*/
  word_ABF2FA = 0; /*0x5bec78*/
  return 0; /*0x5bec7e*/
}
} // namespace gamemd

// 0x5BEC80
namespace gamemd {
int sub_5BEC80()
{
  dword_ABF318 = 0; /*0x5bec82*/
  dword_ABF31C = 0; /*0x5bec87*/
  dword_ABF320 = 0; /*0x5bec8c*/
  return 0; /*0x5bec91*/
}
} // namespace gamemd

// 0x5BECA0
namespace gamemd {
int sub_5BECA0()
{
  dword_ABF348 = 0; /*0x5beca5*/
  dword_ABF340 = 128; /*0x5becaf*/
  dword_ABF344 = 128; /*0x5becb4*/
  return 128; /*0x5becb9*/
}
} // namespace gamemd

// 0x5BECC0
namespace gamemd {
int E4Recv_5BECC0::sub_5BECC0()
{
  int v1; // esi
  int result; // eax
  char *v3; // edi
  int v4; // ebp
  int v5; // edx
  char *v6; // eax
  char v7; // bl

  v1 = 0; /*0x5becc9*/
  result = 256 - (_DWORD)this; /*0x5beccb*/
  v3 = this; /*0x5becce*/
  do /*0x5bed0c*/
  {
    v4 = v1 + 1; /*0x5becd4*/
    v5 = v1 + 1; /*0x5becdd*/
    if ( v1 + 1 < 256 ) /*0x5becdf*/
    {
      v6 = &v3[result + v1 + (_DWORD)this]; /*0x5bece5*/
      do /*0x5becf8*/
      {
        v7 = *v6; /*0x5bece7*/
        v6 += 256; /*0x5bece9*/
        v3[v5++] = v7; /*0x5becee*/
      }
      while ( v5 < 256 ); /*0x5becf8*/
      result = 256 - (_DWORD)this; /*0x5becfa*/
    }
    ++v1; /*0x5becfe*/
    v3 += 256; /*0x5bed00*/
  }
  while ( v4 < 255 ); /*0x5bed0c*/
  return result; /*0x5bed0e*/
}
} // namespace gamemd

// 0x5BF360
namespace gamemd {
int E4Recv_5BF360::sub_5BF360()
{
  int result; // eax

  if ( this ) /*0x5bf362*/
    return MessageListClass::AddMessage( /*0x5bf37e*/
             g_GameNetworkObject,
             0,
             0,
             *(wchar_t **)(&this->vtable30),
             0,
             16454,
             this->vtable2,
             0);
  return result; /*0x5bf383*/
}
} // namespace gamemd

// 0x5BF5C0
namespace gamemd {
int sub_5BF5C0()
{
  dword_ABF368 = 0; /*0x5bf5c2*/
  dword_ABF36C = 0; /*0x5bf5c7*/
  dword_ABF370 = 0; /*0x5bf5cc*/
  dword_ABF374 = 0; /*0x5bf5d1*/
  return 0; /*0x5bf5d6*/
}
} // namespace gamemd

// 0x5BF5E0
namespace gamemd {
void sub_5BF5E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bf5ec*/
  dbl_ABF380 = Math::Sqrt(v0 + v0); /*0x5bf5fe*/
}
} // namespace gamemd

// 0x5BF610
namespace gamemd {
void sub_5BF610()
{
  dbl_ABF3E8 = dbl_ABF380 / 60.0; /*0x5bf61c*/
}
} // namespace gamemd

// 0x5BF630
namespace gamemd {
void sub_5BF630()
{
  dbl_ABF3D0 = 1.0 / dbl_ABF3E8; /*0x5bf63c*/
}
} // namespace gamemd

// 0x5BF650
namespace gamemd {
void sub_5BF650()
{
  dbl_ABF3C8 = 0.0174532925199433 * 45.0; /*0x5bf65c*/
}
} // namespace gamemd

// 0x5BF670
namespace gamemd {
void sub_5BF670()
{
  dbl_ABF388 = 0.0174532925199433 * 60.0; /*0x5bf67c*/
}
} // namespace gamemd

// 0x5BF690
namespace gamemd {
void sub_5BF690()
{
  dbl_ABF360 = 0.0174532925199433 * 90.0; /*0x5bf69c*/
}
} // namespace gamemd

// 0x5BF6B0
namespace gamemd {
long long sub_5BF6B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABF360 - dbl_ABF388); /*0x5bf6c2*/
  result = Math::RoundToInt(v0 * dbl_ABF380 * 0.5); /*0x5bf6d6*/
  dword_ABF3F0 = result; /*0x5bf6db*/
  return result; /*0x5bf6e0*/
}
} // namespace gamemd

// 0x5BF6F0
namespace gamemd {
void sub_5BF6F0()
{
  dbl_ABF3A8 = Math::ArcTan((double)dword_ABF3F0 * 0.00390625); /*0x5bf707*/
}
} // namespace gamemd

// 0x5BF720
namespace gamemd {
void sub_5BF720()
{
  dbl_ABF3C0 = Math::ArcTan((double)(2 * dword_ABF3F0) / dbl_ABF380); /*0x5bf742*/
}
} // namespace gamemd

// 0x5BF750
namespace gamemd {
long long sub_5BF750()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF3F0) + 0.5); /*0x5bf76b*/
  dword_ABF3E4 = result; /*0x5bf770*/
  return result; /*0x5bf776*/
}
} // namespace gamemd

// 0x5BF780
namespace gamemd {
int sub_5BF780()
{
  word_ABF378 = 0; /*0x5bf782*/
  word_ABF37A = 0; /*0x5bf788*/
  return 0; /*0x5bf78e*/
}
} // namespace gamemd

// 0x5BF790
namespace gamemd {
int sub_5BF790()
{
  dword_ABF3B0 = 0; /*0x5bf792*/
  dword_ABF3B4 = 0; /*0x5bf797*/
  dword_ABF3B8 = 0; /*0x5bf79c*/
  return 0; /*0x5bf7a1*/
}
} // namespace gamemd

// 0x5BF7B0
namespace gamemd {
int sub_5BF7B0()
{
  dword_ABF3E0 = 0; /*0x5bf7b5*/
  dword_ABF3D8 = 128; /*0x5bf7bf*/
  dword_ABF3DC = 128; /*0x5bf7c4*/
  return 128; /*0x5bf7c9*/
}
} // namespace gamemd

// 0x5BF7D0
namespace gamemd {
int sub_5BF7D0()
{
  dword_ABF394 = 0; /*0x5bf7d7*/
  dword_ABF398 = 0; /*0x5bf7dc*/
  byte_ABF39C = 1; /*0x5bf7e1*/
  byte_ABF39D = 0; /*0x5bf7e8*/
  MovieInfo_Array = (int)&DynamicVectorClass_char_const___vftable; /*0x5bf7ed*/
  dword_ABF3A4 = 10; /*0x5bf7f7*/
  dword_ABF3A0 = 0; /*0x5bf801*/
  return atexit(sub_5BF810); /*0x5bf80c*/
}
} // namespace gamemd

// 0x5BF810
namespace gamemd {
void sub_5BF810()
{
  MovieInfo_Array = (int)&VectorClass_char_const___vftable; /*0x5bf818*/
  if ( dword_ABF394 && byte_ABF39D ) /*0x5bf82c*/
  {
    RA2_OPDEL(dword_ABF394); /*0x5bf82f*/
    dword_ABF394 = 0; /*0x5bf837*/
  }
  byte_ABF39D = 0; /*0x5bf83d*/
  dword_ABF398 = 0; /*0x5bf843*/
}
} // namespace gamemd

// 0x5BF850
namespace gamemd {
int sub_5BF850()
{
  int v0; // esi
  int v1; // edi
  int *v2; // ebx
  int v3; // eax
  int v4; // ebp
  int v5; // eax
  unsigned int v7; // [esp-Ch] [ebp-1Ch]
  int v8; // [esp-8h] [ebp-18h]

  v0 = *(_DWORD *)(g_BigIntPool + 8); /*0x5bf858*/
  v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v0 + 92))(v0, 0); /*0x5bf869*/
  v2 = *(int **)g_BigIntPool; /*0x5bf873*/
  v8 = *(_DWORD *)(g_BigIntPool + 40); /*0x5bf87a*/
  v7 = *(_DWORD *)(g_BigIntPool + 36); /*0x5bf87b*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 128))(v0); /*0x5bf87e*/
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v0 + 116))(v0, v3); /*0x5bf88c*/
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 112))(v0); /*0x5bf892*/
  Render_Load_759EB0(v2, 0, v4 / v5, v7, v8, 0); /*0x5bf8a1*/
  return v1; /*0x5bf8a8*/
}
} // namespace gamemd

// 0x5BF8B0
namespace gamemd {
int sub_5BF8B0()
{
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(g_BigIntPool + 8) + 96))(*(_DWORD *)(g_BigIntPool + 8));
}
} // namespace gamemd
