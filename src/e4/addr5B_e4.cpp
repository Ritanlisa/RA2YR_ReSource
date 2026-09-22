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

// 0x5B3B10
namespace gamemd {
void sub_5B3B10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_5B3B10()
{
  int v0; // edx
  int v1; // edi
  int v2; // ecx
  int v3; // esi
  _DWORD *v4; // eax

  if ( (DataGlobal_ABF008 & 1) == 0 ) /*0x5b3b1b*/
  {
    DataGlobal_ABF008 |= 1u; /*0x5b3b25*/
    DataGlobal_ABEFD8 = (int)&vt_GenericList; /*0x5b3b2b*/
LABEL_3:
    v0 = DataGlobal_ABEFE0; /*0x5b3b37*/
    while ( DataGlobal_ABEFE0 /*0x5b3b4d*/
         && *(_DWORD *)(DataGlobal_ABEFE0 + 4)
         && *(_DWORD *)(DataGlobal_ABEFE0 + 8)
         && DataGlobal_ABEFE0 )
    {
      v1 = *(_DWORD *)(DataGlobal_ABEFE0 + 4); /*0x5b3b4f*/
      v2 = DataGlobal_ABEFE0 + 4; /*0x5b3b52*/
      if ( v1 ) /*0x5b3b57*/
      {
        v3 = *(_DWORD *)(DataGlobal_ABEFE0 + 8); /*0x5b3b59*/
        v4 = (_DWORD *)(DataGlobal_ABEFE0 + 8); /*0x5b3b5c*/
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
    DataGlobal_ABEFE8 = (int)&vt_GenericNode; /*0x5b3b7f*/
    if ( &DataGlobal_ABEFE8 && DataGlobal_ABEFEC && g_MixFilePool_Root ) /*0x5b3b98*/
    {
      *(_DWORD *)(g_MixFilePool_Root + 4) = DataGlobal_ABEFEC; /*0x5b3b9a*/
      *(_DWORD *)(DataGlobal_ABEFEC + 8) = g_MixFilePool_Root; /*0x5b3ba9*/
      v0 = DataGlobal_ABEFE0; /*0x5b3bac*/
      g_MixFilePool_Root = 0; /*0x5b3bb2*/
      DataGlobal_ABEFEC = 0; /*0x5b3bb8*/
    }
    DataGlobal_ABEFDC = (int)&vt_GenericNode; /*0x5b3bc3*/
    if ( &DataGlobal_ABEFDC && v0 && DataGlobal_ABEFE4 ) /*0x5b3bda*/
    {
      *(_DWORD *)(DataGlobal_ABEFE4 + 4) = v0; /*0x5b3bdc*/
      *(_DWORD *)(DataGlobal_ABEFE0 + 8) = DataGlobal_ABEFE4; /*0x5b3beb*/
      DataGlobal_ABEFE4 = 0; /*0x5b3bee*/
      DataGlobal_ABEFE0 = 0; /*0x5b3bf4*/
    }
  }
}
}
} // namespace gamemd

// 0x5B3FF0
namespace gamemd {
unsigned int * sub_5B3FF0(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall sub_5B3FF0(_DWORD *a1, _DWORD *a2)
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
} // namespace gamemd

// 0x5B40B0
namespace gamemd {
int SearchMIXFile(char * Source, IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall SearchMIXFile(char *Source, IUnknown *aP1)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  bool v6; // cc
  CoordStruct *v8; // eax
  CoordStruct *v9; // esi
  int *p_Y; // edx
  void *SHPFile; // edi
  void *v12; // eax
  char v13; // [esp+13h] [ebp-17Dh]
  unsigned int v14[3]; // [esp+14h] [ebp-17Ch] BYREF
  _DWORD v15[22]; // [esp+20h] [ebp-170h] BYREF
  _BYTE v16[12]; // [esp+78h] [ebp-118h] BYREF
  int v17; // [esp+84h] [ebp-10Ch]
  ObjectClass Str; // [esp+8Ch] [ebp-104h] BYREF

  v13 = (char)aP1; /*0x5b40c7*/
  strcpy(Str[0], Source); /*0x5b40dd*/
  _strupr(Str[0]); /*0x5b40ee*/
  memset(v14, 0, sizeof(v14)); /*0x5b4110*/
  v3 = Checksummer::Add_Buffer(v14, (unsigned __int8 *)&Str, (IUnknown *)strlen(Str[0])); /*0x5b4127*/
  v4 = *(&g_MatrixTransformState + 127); /*0x5b4129*/
  if ( !*(&g_MatrixTransformState + 127) ) /*0x5b4130*/
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
  CCFileClass::Construct(v15, Source); /*0x5b414d*/
  if ( CCFileClass::Open(v15, 0) ) /*0x5b415c*/
  {
    v8 = (CoordStruct *)__2_YAPAXI_Z(0x10u); /*0x5b41af*/
    v9 = v8; /*0x5b41b4*/
    v8->Z = v3; /*0x5b41b9*/
    p_Y = (int *)*(&g_MatrixTransformState + 127); /*0x5b41bc*/
    if ( *(&g_MatrixTransformState + 127) ) /*0x5b41c4*/
    {
      if ( (*(&g_MatrixTransformState + 127))->Z < v3 ) /*0x5b41d6*/
        p_Y = &(*(&g_MatrixTransformState + 127))->Y; /*0x5b41d8*/
      InsertIntoHashTree(v8, p_Y); /*0x5b41dd*/
    }
    else
    {
      *(&g_MatrixTransformState + 127) = v8; /*0x5b41c6*/
      v8->X = 0; /*0x5b41cc*/
      v8->Y = 0; /*0x5b41ce*/
    }
    if ( v13 || strstr(&Str, Ext) ) /*0x5b41f5*/
    {
      v12 = (void *)__2_YAPAXI_Z(0x24u); /*0x5b4210*/
      if ( v12 ) /*0x5b421a*/
        SHPFile = LoadSHPFile(v12, Source); /*0x5b4224*/
      else
        SHPFile = 0; /*0x5b4228*/
    }
    else
    {
      SHPFile = CCFileClass::ReadEntireFile(v15); /*0x5b420a*/
    }
    v9[1].X = (int)SHPFile; /*0x5b422a*/
    v15[0] = &vt_CCFileClass; /*0x5b4231*/
    v17 = 0; /*0x5b4239*/
    Vector::Clear((int)v16); /*0x5b4240*/
    v15[0] = &off_7E1668; /*0x5b4249*/
    BufferIOFileClass::Dtor(v15); /*0x5b4251*/
    return (int)SHPFile; /*0x5b4256*/
  }
  else
  {
    v15[0] = &vt_CCFileClass; /*0x5b4169*/
    v17 = 0; /*0x5b4171*/
    Vector::Clear((int)v16); /*0x5b4178*/
    v15[0] = &off_7E1668; /*0x5b4181*/
    BufferIOFileClass::Dtor(v15); /*0x5b4189*/
    return 0; /*0x5b418e*/
  }
}
}
} // namespace gamemd

// 0x5B4430
namespace gamemd {
char FileInfoCache_Lookup(const char * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4, unsigned int * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall FileInfoCache_Lookup(const char *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
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
  v6 = (_DWORD *)DataGlobal_ABEFE0; /*0x5b44a1*/
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
} // namespace gamemd

// 0x5B4B10
namespace gamemd {
int GameSetupDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall GameSetupDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
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
  void *v15; // esi
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
        __3_YAXPAX_Z(v15); /*0x5b4ebf*/
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
          if ( HIWORD(a3) == 1281 ) /*0x5b4c4b*/
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
                    LOBYTE(v18[6]) = g_TauntCommandState; /*0x5b4d26*/
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
            if ( !HIWORD(a3) ) /*0x5b4bbb*/
            {
              Game::processStartup(WindowLongA); /*0x5b4bc6*/
              *(_DWORD *)(WindowLongA + 4) = 2; /*0x5b4bcb*/
              return 0; /*0x5b4bde*/
            }
          }
          else if ( (unsigned __int16)a3 == 1029 && HIWORD(a3) == 1 ) /*0x5b4b9f*/
          {
            ModemGame::AdvanceTauntCommand(WindowLongA); /*0x5b4ba7*/
            return 0; /*0x5b4bb8*/
          }
          return 0; /*0x5b4b9f*/
        }
        if ( !HIWORD(a3) ) /*0x5b4be1*/
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
        if ( (unsigned __int16)a3 == 1639 && HIWORD(a3) == 1 ) /*0x5b4d9e*/
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
      if ( HIWORD(a3) != 1281 && HIWORD(a3) != 768 ) /*0x5b4e08*/
        return 0; /*0x5b4e08*/
      v13 = GetDlgItem(*(HWND *)WindowLongA, 1473); /*0x5b4e17*/
      v14 = v13; /*0x5b4e1d*/
      if ( !v13 ) /*0x5b4e21*/
        return 0; /*0x5b4e21*/
      SendMessageA(v13, 0x4B3u, 0x15u, (LPARAM)v17); /*0x5b4e3a*/
      WideString::Trim(v17); /*0x5b4e40*/
      if ( HIWORD(a3) != 768 ) /*0x5b4e4a*/
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
} // namespace gamemd

// 0x5B67F0
namespace gamemd {
char ApplyGameOptions(CampaignScore * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall ApplyGameOptions(CampaignScore *aP0)
{
  int v1; // esi
  int v2; // eax
  int v3; // eax
  ObjectClass *v5; // edx
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  bool v9; // al
  int v10; // edi
  const wchar_t *v11; // esi
  ObjectClass *v12; // esi

  if ( HouseClass_Player[29964] == (BYTE2(aP0[3].CampaignScore_field_0x14) & 1) ) /*0x5b6807*/
  {
    v1 = *(int *)((char *)&aP0[3].CampaignScore_field_0x20 + 2); /*0x5b680d*/
    if ( HouseClass_Player[30164] == ((v1 & 4) != 0) && HouseClass_Player[30161] == ((v1 & 2) != 0) ) /*0x5b6836*/
    {
      v2 = *(int *)((char *)&aP0[3].CampaignScore_field_0x14 + 2); /*0x5b683c*/
      if ( HouseClass_Player[29972] == ((v2 & 2) != 0) /*0x5b6920*/
        && HouseClass_Player[29973] == ((v2 & 4) != 0)
        && HouseClass_Player[30163] == ((v1 & 8) != 0)
        && *(_DWORD *)&HouseClass_Player[29992] == LOBYTE(aP0[3].CampaignScore_field_0x20)
        && *(_DWORD *)&HouseClass_Player[29996] == BYTE1(aP0[3].CampaignScore_field_0x20)
        && g_RulesInitConfig == (ObjectClass *)BYTE2(aP0[3].CampaignScore_field_0x1C)
        && *(_DWORD *)&HouseClass_Player[29968] == *(int *)((char *)&aP0[3].CampaignScore_field_0x10 + 2)
        && *(_DWORD *)&HouseClass_Player[29988] == HIBYTE(aP0[3].CampaignScore_field_0x1C)
        && *(_DWORD *)&HouseClass_Player[45128] == *(_DWORD *)&aP0[4].__pad_0[2]
        && ApplyGameOptions_Helper(
             &HouseClass_Player[44052],
             (int *)((char *)&aP0[4].CampaignScore_field_0x04 + 2))
        && *(_DWORD *)&HouseClass_Player[29980] == BYTE2(aP0[4].CampaignScore_field_0x10) )
      {
        v3 = *(int *)((char *)&aP0[3].CampaignScore_field_0x20 + 2); /*0x5b6926*/
        if ( HouseClass_Player[29974] == ((v3 & 0x10) != 0) /*0x5b69da*/
          && HouseClass_Player[29975] == ((v3 & 0x20) != 0)
          && HouseClass_Player[29976] == ((v3 & 0x40) != 0)
          && HouseClass_Player[29984] == ((v3 & 0x80) != 0)
          && !_strcmpi(&HouseClass_Player[31636], (char *)&aP0[4].CampaignScore_field_0x10 + 3)
          && !strcmp(&HouseClass_Player[32150], (const char *)&aP0[4].CampaignScore_field_0x20)
          && *(_DWORD *)&HouseClass_Player[32184] == *(int *)((char *)&aP0[4].CampaignScore_field_0x0C + 2) )
        {
          return 0; /*0x5b69de*/
        }
      }
    }
  }
  Debug::Log(); /*0x5b69e9*/
  HouseClass_Player[29964] = BYTE2(aP0[3].CampaignScore_field_0x14) & 1; /*0x5b69fa*/
  HouseClass_Player[30164] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 4) != 0; /*0x5b6a0c*/
  v5 = *(ObjectClass **)&HouseClass_Player[44052]; /*0x5b6a18*/
  BYTE1(v5) = HouseClass_Player[44053] & 0x7F; /*0x5b6a22*/
  HouseClass_Player[29972] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x14 + 2) & 2) != 0; /*0x5b6a25*/
  *(_DWORD *)&HouseClass_Player[44052] = (unsigned int)v5 /*0x5b6a38*/
                                                  | ((*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x14 + 2) & 2) << 14);
  HouseClass_Player[29973] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x14 + 2) & 4) != 0; /*0x5b6a49*/
  HouseClass_Player[30163] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 8) != 0; /*0x5b6a5c*/
  HouseClass_Player[30161] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 2) != 0; /*0x5b6a6f*/
  *(_DWORD *)&HouseClass_Player[29992] = LOBYTE(aP0[3].CampaignScore_field_0x20); /*0x5b6a7b*/
  *(_DWORD *)&HouseClass_Player[29996] = BYTE1(aP0[3].CampaignScore_field_0x20); /*0x5b6a88*/
  g_RulesInitConfig = (ObjectClass *)BYTE2(aP0[3].CampaignScore_field_0x1C); /*0x5b6a96*/
  *(_DWORD *)&HouseClass_Player[29968] = *(int *)((char *)&aP0[3].CampaignScore_field_0x10 + 2); /*0x5b6a9f*/
  *(_DWORD *)&HouseClass_Player[29988] = HIBYTE(aP0[3].CampaignScore_field_0x1C); /*0x5b6aaa*/
  *(_DWORD *)&HouseClass_Player[45128] = *(_DWORD *)&aP0[4].__pad_0[2]; /*0x5b6ab6*/
  v6 = *(int *)((char *)&aP0[4].CampaignScore_field_0x04 + 2); /*0x5b6abc*/
  *(_DWORD *)&HouseClass_Player[44052] = v6; /*0x5b6ac4*/
  LOBYTE(v6) = v6 | 0xC0; /*0x5b6acf*/
  *(_DWORD *)&HouseClass_Player[29980] = BYTE2(aP0[4].CampaignScore_field_0x10); /*0x5b6ad1*/
  *(_DWORD *)&HouseClass_Player[44564] = *(_DWORD *)&HouseClass_Player[29980]; /*0x5b6ad7*/
  HouseClass_Player[29974] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 0x10) != 0; /*0x5b6ae9*/
  HouseClass_Player[29975] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 0x20) != 0; /*0x5b6afb*/
  HouseClass_Player[29976] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 0x40) != 0; /*0x5b6b0d*/
  v7 = *(unsigned int *)((char *)&aP0[3].CampaignScore_field_0x20 + 2) >> 7; /*0x5b6b19*/
  *(_DWORD *)&HouseClass_Player[44052] = v6; /*0x5b6b1c*/
  HouseClass_Player[29984] = v7 & 1; /*0x5b6b29*/
  v8 = **(_DWORD **)&HouseClass_Player[29924]; /*0x5b6b2f*/
  BYTE1(v8) = BYTE1(**(_DWORD **)&HouseClass_Player[29924]) & 0xFB; /*0x5b6b31*/
  **(_DWORD **)&HouseClass_Player[29924] = v8; /*0x5b6b34*/
  HouseClass_Player[30160] = 1; /*0x5b6b3b*/
  nullsub_37(); /*0x5b6b42*/
  if ( _strcmpi(&HouseClass_Player[31636], (char *)&aP0[4].CampaignScore_field_0x10 + 3) /*0x5b6ba4*/
    || _strcmpi(&HouseClass_Player[32150], &aP0[4].CampaignScore_field_0x20)
    || HouseClass_Player[32188] != ((*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x14 + 2) & 0x10) != 0)
    || *(_DWORD *)&HouseClass_Player[32184] != *(int *)((char *)&aP0[4].CampaignScore_field_0x0C + 2)
    || !*(_WORD *)&HouseClass_Player[30166] )
  {
    Debug::Log(); /*0x5b6baf*/
    strcpy(&HouseClass_Player[31636], (const char *)&aP0[4].CampaignScore_field_0x10 + 3); /*0x5b6bce*/
    strcpy(&HouseClass_Player[32150], (const char *)&aP0[4].CampaignScore_field_0x20); /*0x5b6bf4*/
    v9 = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x14 + 2) & 0x10) != 0; /*0x5b6c0b*/
    HouseClass_Player[32188] = v9; /*0x5b6c12*/
    *(_DWORD *)&HouseClass_Player[32184] = *(int *)((char *)&aP0[4].CampaignScore_field_0x0C + 2); /*0x5b6c1d*/
    if ( !strcmp(&HouseClass_Player[31636], aRandmapSed) && v9 /*0x5b6c5d*/
      || (v10 = 0, *(int *)&HouseClass_Player[31628] <= 0) )
    {
LABEL_33:
      wcscpy((wchar_t *)&HouseClass_Player[30166], (const wchar_t *)&aP0[1].__pad_0[2]); /*0x5b6c86*/
    }
    else
    {
      while ( 1 ) /*0x5b6c64*/
      {
        v11 = *(const wchar_t **)(*(_DWORD *)&HouseClass_Player[31616] + 4 * v10); /*0x5b6c64*/
        if ( !_strcmpi(&HouseClass_Player[31636], v11 + 44) ) /*0x5b6c70*/
          break; /*0x5b6c70*/
        if ( ++v10 >= *(int *)&HouseClass_Player[31628] ) /*0x5b6c84*/
          goto LABEL_33; /*0x5b6c84*/
      }
      wcscpy((wchar_t *)&HouseClass_Player[30166], v11); /*0x5b6cc4*/
    }
    v12 = (ObjectClass *)*(&g_MatrixTransformState + 2257); /*0x5b6c94*/
    if ( *(&g_MatrixTransformState + 2257) ) /*0x5b6c9f*/
    {
      ComPtr::Dtor(*(&g_MatrixTransformState + 2257)); /*0x5b6ca3*/
      __3_YAXPAX_Z(v12); /*0x5b6ca9*/
      *(&g_MatrixTransformState + 2257) = 0; /*0x5b6cb1*/
    }
  }
  return 1; /*0x5b69dc*/
}
}
} // namespace gamemd

// 0x5BB290
namespace gamemd {
void __usercall GenerateRandomMapPreview(int a1@<esi> a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __usercall GenerateRandomMapPreview(int a1@<esi>)
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
  if ( !_strcmpi(&Destination, aRandmapSed) ) /*0x5bb2b7*/
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
    v4 = __2_YAPAXI_Z(4 * Buffer); /*0x5bb435*/
    v12[1] = 0; /*0x5bb437*/
    v12[2] = 0; /*0x5bb448*/
    v12[0] = (int)&vt_Pipe; /*0x5bb44c*/
    Buffer::Init(v13, (int)v4, 4 * Buffer); /*0x5bb454*/
    v13[3] = 0; /*0x5bb463*/
    v12[0] = (int)&vt_BufferPipe; /*0x5bb467*/
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
    __3_YAXPAX_Z(v4); /*0x5bb503*/
    Debug::Log(); /*0x5bb50d*/
    SendNetworkFile(g_Str_File_Preview_bin, 1, 0, 0); /*0x5bb521*/
    RawFileClass::Dtor((int *)v15); /*0x5bb52a*/
    LZOPipe::Destructor(v16); /*0x5bb533*/
    Vector::Clear((int)v13); /*0x5bb53c*/
    Pipe::Dtor(v12); /*0x5bb545*/
  }
}
}
} // namespace gamemd

// 0x5BC6E0
namespace gamemd {
INT_PTR AudioDebug_DlgProc(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
INT_PTR __stdcall AudioDebug_DlgProc(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
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
    if ( DataGlobal_ABF23C ) /*0x5bc712*/
    {
      if ( g_MiscFlag ) /*0x5bc71b*/
        Text::DrawRepeated((void *)DataGlobal_ABF23C, 0, 0, 80, 25); /*0x5bc732*/
    }
    EndPaint(hWnd, &Paint); /*0x5bc73d*/
    return 1; /*0x5bc74e*/
  }
  if ( a2 == 258 ) /*0x5bc756*/
  {
    if ( !DataGlobal_ABF224 ) /*0x5bc763*/
    {
      DataGlobal_ABF224 = (int)DataGlobal_ABF198; /*0x5bc76a*/
      AudioController::Init(DataGlobal_ABF198); /*0x5bc770*/
    }
    switch ( a3 ) /*0x5bc78d*/
    {
      case ',': /*0x5bc78d*/
      case '<': /*0x5bc78d*/
        v15 = *(_DWORD *)(DataGlobal_ABF23C + 10008) + 1; /*0x5bc9d1*/
        if ( *(_DWORD *)(DataGlobal_ABF23C + 10008) == 7 ) /*0x5bc9d5*/
          v15 = 0; /*0x5bc9d7*/
        v16 = (_BYTE *)DataGlobal_ABF168[v15]; /*0x5bc9d9*/
        v17 = 0; /*0x5bc9e0*/
        DataGlobal_ABF23C = (int)v16; /*0x5bc9e2*/
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
        v22 = *(_DWORD *)(DataGlobal_ABF23C + 10008) - 1; /*0x5bca38*/
        if ( v22 < 0 ) /*0x5bca39*/
          v22 = 7; /*0x5bca3b*/
        v16 = (_BYTE *)DataGlobal_ABF168[v22]; /*0x5bca40*/
        v23 = 0; /*0x5bca47*/
        DataGlobal_ABF23C = (int)v16; /*0x5bca49*/
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
        DataGlobal_ABF22C = a3 - 49; /*0x5bc799*/
        return 0; /*0x5bc7a5*/
      case 'A': /*0x5bc78d*/
      case 'a': /*0x5bc78d*/
        v14 = (_BYTE *)DataGlobal_ABF17C; /*0x5bc987*/
        goto LABEL_44; /*0x5bc987*/
      case 'E': /*0x5bc78d*/
      case 'e': /*0x5bc78d*/
        v7 = DataGlobal_ABF220; /*0x5bc80f*/
        if ( DataGlobal_ABF220 > 16 || DataGlobal_ABF220 >= g_InfantrySelectState ) /*0x5bc820*/
        {
          v7 = 0; /*0x5bc822*/
          DataGlobal_ABF220 = 0; /*0x5bc824*/
        }
        UpdateThemeManager(v7, 2, DataGlobal_ABF22C); /*0x5bc835*/
        goto LABEL_15; /*0x5bc835*/
      case 'I': /*0x5bc78d*/
      case 'i': /*0x5bc78d*/
        v14 = (_BYTE *)DataGlobal_ABF184; /*0x5bc9b6*/
        goto LABEL_44; /*0x5bc9bc*/
      case 'L': /*0x5bc78d*/
      case 'l': /*0x5bc78d*/
        if ( AudioSource::Get((int **)DataGlobal_ABF224) ) /*0x5bc862*/
        {
          AudioFile::Stop((_DWORD *)DataGlobal_ABF224); /*0x5bc871*/
          return 0; /*0x5bc878*/
        }
        else
        {
          v28 = DataGlobal_ABF224; /*0x5bc881*/
          v9 = aTestenvelopefs; /*0x5bc887*/
LABEL_31:
          Index = VocClass::FindIndex(v9); /*0x5bc88c*/
          PlayVocClass(Index, 0x2000, 1.0, v28); /*0x5bc898*/
          return 0; /*0x5bc89f*/
        }
      case 'M': /*0x5bc78d*/
      case 'm': /*0x5bc78d*/
        v14 = (_BYTE *)DataGlobal_ABF180; /*0x5bc9be*/
LABEL_44:
        DataGlobal_ABF23C = (int)v14; /*0x5bc98d*/
        TextBuffer::Init(v14); /*0x5bc993*/
LABEL_45:
        Text::DrawRepeated((void *)DataGlobal_ABF23C, 0, 0, 80, 25); /*0x5bc998*/
        return 0; /*0x5bc9b3*/
      case 'N': /*0x5bc78d*/
      case 'n': /*0x5bc78d*/
        DataGlobal_ABF21C = DataGlobal_ABF21C == 0; /*0x5bc968*/
        return 0; /*0x5bc974*/
      case 'O': /*0x5bc78d*/
      case 'o': /*0x5bc78d*/
        v8 = DataGlobal_ABF220; /*0x5bc837*/
        if ( DataGlobal_ABF220 > 16 || DataGlobal_ABF220 >= g_InfantrySelectState ) /*0x5bc848*/
        {
          v8 = 0; /*0x5bc84a*/
          DataGlobal_ABF220 = 0; /*0x5bc84c*/
        }
        UpdateThemeManager(v8, -1, -1); /*0x5bc857*/
        goto LABEL_15; /*0x5bc857*/
      case 'Q': /*0x5bc78d*/
      case 'q': /*0x5bc78d*/
        v5 = DataGlobal_ABF220; /*0x5bc7a8*/
        if ( DataGlobal_ABF220 > 16 || DataGlobal_ABF220 >= g_InfantrySelectState ) /*0x5bc7b9*/
        {
          v5 = 0; /*0x5bc7bb*/
          DataGlobal_ABF220 = 0; /*0x5bc7bd*/
        }
        UpdateThemeManager(v5, 1, DataGlobal_ABF22C); /*0x5bc7ce*/
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
        v6 = DataGlobal_ABF220; /*0x5bc7e9*/
        if ( DataGlobal_ABF220 > 16 || DataGlobal_ABF220 >= g_InfantrySelectState ) /*0x5bc7fa*/
        {
          v6 = 0; /*0x5bc7fc*/
          DataGlobal_ABF220 = 0; /*0x5bc7fe*/
        }
        UpdateThemeManager(v6, 0, DataGlobal_ABF22C); /*0x5bc80d*/
LABEL_15:
        ++DataGlobal_ABF220; /*0x5bc7d3*/
        return 0; /*0x5bc7e6*/
      case '[': /*0x5bc78d*/
        if ( DataGlobal_ABF228 >= 5 ) /*0x5bc8bd*/
          return 0; /*0x5bc8bd*/
        Enabled = Audio::GetEnabled(); /*0x5bc8c6*/
        v12 = AudioStream::Constructor(Enabled, 0x1388u); /*0x5bc8cd*/
        *(&DataGlobal_ABF114 + DataGlobal_ABF228) = v12; /*0x5bc8da*/
        if ( !v12 ) /*0x5bc8e1*/
          return 0; /*0x5bc8e1*/
        if ( ThreadAudioMixerMain(v12, aIntroWav, 1) ) /*0x5bc8ec*/
        {
          ++DataGlobal_ABF228; /*0x5bc8fc*/
          return 0; /*0x5bc908*/
        }
        AudioSample::Destructor(*(&DataGlobal_ABF114 + DataGlobal_ABF228)); /*0x5bc912*/
        break; /*0x5bc912*/
      case ']': /*0x5bc78d*/
        if ( DataGlobal_ABF228 <= 0 ) /*0x5bc929*/
          return 0; /*0x5bc929*/
        v13 = (_DWORD *)*(&DataGlobal_ABF110 + DataGlobal_ABF228--); /*0x5bc92b*/
        Audio::Release(v13); /*0x5bc938*/
        AudioSample::Destructor(*(&DataGlobal_ABF114 + DataGlobal_ABF228)); /*0x5bc94a*/
        return 0; /*0x5bc957*/
      default:
        return 0;
    }
    return 0; /*0x5bc912*/
  }
  if ( a2 != 273 ) /*0x5bca98*/
    return 0; /*0x5bc91f*/
  DataGlobal_ABF239 = 0; /*0x5bcaa3*/
  if ( DataGlobal_ABF240 ) /*0x5bcaac*/
  {
    g_MiscFlag = 0; /*0x5bcab1*/
    ShowWindow(DataGlobal_ABF240, 0); /*0x5bcab8*/
  }
  return 1; /*0x5bc743*/
}
}
} // namespace gamemd

// 0x5BCE10
namespace gamemd {
char E4Recv_5BCE10::sub_5BCE10(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5BCE10(int *this, int a2)
{
  char result; // al
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  int v7; // ebp
  char *v8; // edi
  int v9; // ecx
  char *v10; // ebx
  int *v11; // ecx
  int v12; // ebx
  int v13; // eax
  int *v14; // ebp
  int v15; // ebp
  char *v16; // edi
  int v17; // ebx
  int *v18; // ecx
  int v19; // eax
  int *v20; // ebp
  int *v21; // [esp+4h] [ebp-Ch]
  _BYTE *v22; // [esp+8h] [ebp-8h]
  int v23; // [esp+Ch] [ebp-4h]
  int v24; // [esp+Ch] [ebp-4h]
  int v25; // [esp+14h] [ebp+4h]
  int v26; // [esp+14h] [ebp+4h]

  result = *((_BYTE *)&(&g_MatrixTransformState)[22] + 10); /*0x5bce10*/
  if ( *((_BYTE *)&(&g_MatrixTransformState)[22] + 10) ) /*0x5bce1d*/
  {
    v4 = *(this + 2505); /*0x5bce27*/
    v5 = *(this + 2506); /*0x5bce2d*/
    v6 = *(this + 2508); /*0x5bce34*/
    v7 = *(this + 2507); /*0x5bce3b*/
    if ( a2 <= 0 ) /*0x5bce44*/
    {
      if ( a2 < 0 ) /*0x5bcef9*/
      {
        v15 = v4 + v7; /*0x5bcefb*/
        if ( v4 < v15 ) /*0x5bceff*/
        {
          v26 = v6 + v5 - 1; /*0x5bcf08*/
          v16 = (char *)this + 20 * v4 + 5 * v4; /*0x5bcf0f*/
          v17 = 500 - (_DWORD)this; /*0x5bcf1f*/
          v18 = this + 20 * v4 + 5 * v4 + v5 + 500; /*0x5bcf23*/
          v24 = v15 - v4; /*0x5bcf2a*/
          do /*0x5bcf6f*/
          {
            v19 = v26; /*0x5bcf2e*/
            if ( v26 > v5 ) /*0x5bcf34*/
            {
              v20 = this + (_DWORD)&v16[v17 + v26]; /*0x5bcf3a*/
              do /*0x5bcf50*/
              {
                --v20; /*0x5bcf41*/
                v16[v19] = v16[v19 - 1]; /*0x5bcf44*/
                v20[1] = *v20; /*0x5bcf4a*/
                --v19; /*0x5bcf4d*/
              }
              while ( v19 > v5 ); /*0x5bcf50*/
              v17 = 500 - (_DWORD)this; /*0x5bcf52*/
            }
            v16[v5] = 32; /*0x5bcf5a*/
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
      v8 = (char *)this + 25 * v4; /*0x5bce67*/
      v9 = v5 + v6 + 25 * v4; /*0x5bce6c*/
      v10 = (char *)this + v9 - 1; /*0x5bce72*/
      v11 = this + v9 + 499; /*0x5bce76*/
      v22 = v10; /*0x5bce7d*/
      v23 = *(this + 2507); /*0x5bce97*/
      v21 = this + 20 * v4 + 5 * v4 + v5 + 500; /*0x5bce9b*/
      v12 = v25; /*0x5bce9f*/
      do /*0x5bcef5*/
      {
        v13 = v5; /*0x5bcea5*/
        if ( v5 < v12 ) /*0x5bcea7*/
        {
          v14 = v21; /*0x5bcea9*/
          do /*0x5bcec4*/
          {
            ++v14; /*0x5bceb1*/
            v8[v13] = v8[v13 + 1]; /*0x5bceb4*/
            *(v14 - 1) = *v14; /*0x5bceba*/
            v12 = v25; /*0x5bcebd*/
            ++v13; /*0x5bcec1*/
          }
          while ( v13 < v25 ); /*0x5bcec4*/
        }
        v11 += 25; /*0x5bced1*/
        *v22 = 32; /*0x5bced4*/
        v22 += 25; /*0x5bceda*/
        *(v11 - 25) = 0; /*0x5bcee2*/
        v8 += 25; /*0x5bcee9*/
        v21 += 25; /*0x5bceed*/
        --v23; /*0x5bcef1*/
      }
      while ( v23 ); /*0x5bcef5*/
    }
    return Text::DrawRepeated(this, 0, 0, 80, 25); /*0x5bcf7b*/
  }
  return result; /*0x5bcf83*/
}
}
} // namespace gamemd

// 0x5BDC00
namespace gamemd {
int * sub_5BDC00(int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__stdcall sub_5BDC00(int *a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // esi

  v2 = 0; /*0x5bdc17*/
  v3 = 0; /*0x5bdc19*/
  v4 = DataGlobal_82D03C[7 * a2]; /*0x5bdc22*/
  if ( v4 == 12345 ) /*0x5bdc2f*/
    v2 = *((__int16 *)DataGlobal_ABF294 + 1) / 2; /*0x5bdc3a*/
  if ( v4 == 54321 ) /*0x5bdc42*/
    v2 = *((__int16 *)DataGlobal_ABF294 + 1); /*0x5bdc44*/
  v5 = DataGlobal_82D040[7 * a2]; /*0x5bdc48*/
  if ( v5 == 12345 ) /*0x5bdc51*/
    v3 = *((__int16 *)DataGlobal_ABF294 + 2) / 2; /*0x5bdc5c*/
  if ( v5 == 54321 ) /*0x5bdc64*/
    v3 = *((__int16 *)DataGlobal_ABF294 + 2); /*0x5bdc66*/
  *a1 = v2; /*0x5bdc6e*/
  a1[1] = v3; /*0x5bdc70*/
  return a1; /*0x5bdc73*/
}
}
} // namespace gamemd

// 0x5BF390
namespace gamemd {
void sub_5BF390(int a1, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall sub_5BF390(int a1, char a2)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _BYTE *v5; // esi
  int v6; // eax

  if ( a1 >= 0 && a1 < DataGlobal_ABF3A0 ) /*0x5bf3a2*/
  {
    v3 = *((_DWORD *)DataGlobal_ABF394 + a1); /*0x5bf3ad*/
    if ( !g_GameMode_Current ) /*0x5bf3b7*/
    {
      v4 = CreateMovie(v3, DSurface_Sidebar, 0); /*0x5bf3c5*/
      v5 = v4; /*0x5bf3ca*/
      if ( v4 ) /*0x5bf3ce*/
      {
        (*(void (__thiscall **)(_DWORD *, int, int))(*v4 + 24))(v4, DataGlobal_8809D8 - 3, DataGlobal_8809DC - 1); /*0x5bf3e5*/
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
} // namespace gamemd

// 0x5BF8C0
namespace gamemd {
char sub_5BF8C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_5BF8C0()
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
} // namespace gamemd

// 0x5BF950
namespace gamemd {
int sub_5BF950()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall sub_5BF950@<al>(int a1@<ebx>, int a2@<edi>, int a3@<esi>)
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
} // namespace gamemd

// 0x5BFAA0
namespace gamemd {
ObjectClass * LoadVQMovie(char * Source, int * a2, int a3, int a4, IUnknown * a5, int a6, int a7, int a8, IUnknown * a9, int a10, int a11, char a12)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__fastcall LoadVQMovie(
        char *Source,
        int *a2,
        int a3,
        int a4,
        IUnknown *a5,
        int a6,
        int a7,
        int a8,
        IUnknown *a9,
        int a10,
        int a11,
        char a12)
{
  int v14; // eax
  ObjectClass *v15; // esi
  CCFileClass *v16; // eax
  char v17; // al
  IUnknown *v18; // eax
  char *v19; // eax
  char *v20; // eax
  int Height; // ebp
  int v23; // kr04_4
  int v24; // eax
  int v25; // edx
  int v26; // ebp
  int *v27; // eax
  void *eax30a; // eax
  int v29; // ecx
  char *v30; // ebp
  IUnknown *v31; // ecx
  void *v32; // eax
  IUnknown *v28; // edx
  int v34; // ebp
  int v35; // eax
  int Status; // eax
  int v37; // ebx
  int v38; // eax
  _DWORD *SurfaceTracker; // eax
  IUnknown *v40; // [esp-Ch] [ebp-BCh]
  IUnknown *aP2; // [esp+10h] [ebp-A0h]
  IUnknown *aP2a; // [esp+10h] [ebp-A0h]
  IUnknown *aP5; // [esp+14h] [ebp-9Ch]
  IUnknown *aP5a; // [esp+14h] [ebp-9Ch]
  bool v45; // [esp+1Bh] [ebp-95h]
  int v46; // [esp+1Ch] [ebp-94h] BYREF
  IUnknown *v41; // [esp+20h] [ebp-90h]
  int v48; // [esp+24h] [ebp-8Ch]
  int v49; // [esp+28h] [ebp-88h]
  int _759EA0; // [esp+2Ch] [ebp-84h]
  char *FullPath; // [esp+30h] [ebp-80h]
  int v52[4]; // [esp+34h] [ebp-7Ch] BYREF
  _DWORD v53[22]; // [esp+44h] [ebp-6Ch] BYREF
  _BYTE v54[12]; // [esp+9Ch] [ebp-14h] BYREF
  int v55; // [esp+A8h] [ebp-8h]

  FullPath = Source; /*0x5bfab2*/
  aP5 = 0; /*0x5bfab6*/
  v14 = __2_YAPAXI_Z(0x4Cu); /*0x5bfaba*/
  v15 = (ObjectClass *)v14; /*0x5bfabf*/
  if ( !v14 ) /*0x5bfac6*/
    return 0; /*0x5bfac6*/
  *(_DWORD *)v14 = 0; /*0x5bfacf*/
  *(_DWORD *)(v14 + 4) = -1; /*0x5bfad1*/
  *(_DWORD *)(v14 + 8) = 0; /*0x5bfad8*/
  *(_DWORD *)(v14 + 12) = 0; /*0x5bfadb*/
  *(_DWORD *)(v14 + 16) = 0; /*0x5bfade*/
  *(_DWORD *)(v14 + 20) = 0; /*0x5bfae1*/
  *(_DWORD *)(v14 + 24) = 0; /*0x5bfae4*/
  *(_DWORD *)(v14 + 28) = 1; /*0x5bfae7*/
  *(_DWORD *)(v14 + 32) = 0; /*0x5bfaee*/
  *(_DWORD *)(v14 + 36) = 0; /*0x5bfaf5*/
  *(_DWORD *)(v14 + 40) = 0; /*0x5bfaf8*/
  *(_DWORD *)(v14 + 44) = 0; /*0x5bfafb*/
  *(_DWORD *)(v14 + 48) = 0; /*0x5bfafe*/
  Rect::Set((_DWORD *)(v14 + 52), 0, 0, 0, 0); /*0x5bfb01*/
  LOBYTE(v15->ambientSoundController[2]) = 0; /*0x5bfb0a*/
  BYTE1(v15->ambientSoundController[2]) = 0; /*0x5bfb0e*/
  v15->ambientSoundController[3] = 0; /*0x5bfb11*/
  v16 = CCFileClass::Construct(v53, Source); /*0x5bfb14*/
  v17 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v16->__pad_0 + 20))(v16, 0); /*0x5bfb1e*/
  v53[0] = &vt_CCFileClass; /*0x5bfb2a*/
  v45 = v17 == 0; /*0x5bfb32*/
  v55 = 0; /*0x5bfb37*/
  Vector::Clear((int)v54); /*0x5bfb3e*/
  v53[0] = &off_7E1668; /*0x5bfb47*/
  BufferIOFileClass::Dtor(v53); /*0x5bfb4f*/
  if ( v45 ) /*0x5bfb58*/
    return 0; /*0x5bfb58*/
  aP2 = 0; /*0x5bfb5e*/
  if ( !Audio::IsSoundEnabled() ) /*0x5bfb62*/
    ResetAnimSystem(3); /*0x5bfb70*/
  if ( TestBitArray(0) ) /*0x5bfb77*/
    aP2 = (IUnknown *)1; /*0x5bfb80*/
  if ( *(&g_MatrixTransformState + 379) == (CoordStruct *)1 ) /*0x5bfb8f*/
  {
    v18 = aP2; /*0x5bfb91*/
    LOBYTE(v18) = (unsigned __int8)aP2 | 2; /*0x5bfb95*/
    aP2 = v18; /*0x5bfb97*/
  }
  if ( a12 == 1 ) /*0x5bfba3*/
    aP5 = (IUnknown *)sub_5BF950; /*0x5bfba5*/
  v19 = (char *)__2_YAPAXI_Z(0x554u); /*0x5bfbb2*/
  if ( v19 ) /*0x5bfbbc*/
    v20 = Stream::InitializeBinkAudio(v19, Source, aP2, (int)sub_5BF850, (int)sub_5BF8B0, aP5, -1, -1); /*0x5bfbd9*/
  else
    v20 = 0; /*0x5bfbe0*/
  *(_DWORD *)v15->__pad_0 = v20; /*0x5bfbe4*/
  if ( !v20 || (Render_Load_759830(v20, a11), !Render_Load_7597A0(*(_DWORD *)v15->__pad_0)) ) /*0x5bfbf9*/
  {
    BinkMovie::Cleanup(v15); /*0x5bfc04*/
    __3_YAXPAX_Z(v15); /*0x5bfc0a*/
    return 0; /*0x5bfc1e*/
  }
  aP2a = (IUnknown *)MovieClass::GetWidth(*(_DWORD **)v15->__pad_0); /*0x5bfc2a*/
  Height = MovieClass::GetHeight(*(_DWORD **)v15->__pad_0); /*0x5bfc35*/
  _759EA0 = Render_Load_759EA0(*(_DWORD **)v15->__pad_0); /*0x5bfc43*/
  if ( _759EA0 == 4 ) /*0x5bfc47*/
    _759EA0 = 1; /*0x5bfc49*/
  if ( !a3 && !a4 && !a5 && !a6 ) /*0x5bfc73*/
  {
    a3 = 0; /*0x5bfc7b*/
    a4 = 0; /*0x5bfc82*/
    a5 = aP2a; /*0x5bfc89*/
    a6 = Height; /*0x5bfc90*/
  }
  if ( !a7 && !a8 && !a9 && !a10 ) /*0x5bfcb9*/
  {
    v23 = (*(int (__thiscall **)(int *))(*a2 + 128))(a2) - Height; /*0x5bfcca*/
    v24 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x5bfcd2*/
    a8 = v23 / 2; /*0x5bfcd9*/
    a9 = aP2a; /*0x5bfce2*/
    a7 = (v24 - (int)aP2a) / 2; /*0x5bfcee*/
    a10 = Height; /*0x5bfcf9*/
  }
  v25 = *a2; /*0x5bfd06*/
  v52[2] = (int)aP2a; /*0x5bfd08*/
  v52[0] = 0; /*0x5bfd0e*/
  v52[1] = 0; /*0x5bfd12*/
  v52[3] = Height; /*0x5bfd16*/
  aP5a = (IUnknown *)(*(int (__thiscall **)(int *))(v25 + 128))(a2); /*0x5bfd20*/
  v26 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x5bfd3d*/
  v27 = ClipRectIntersection(&v46, &a3, v52, 0, 0); /*0x5bfd3f*/
  v15->objectTypeFlags = *v27; /*0x5bfd46*/
  v15->owningHouseIndex = v27[1]; /*0x5bfd4c*/
  v15->fallRate = v27[2]; /*0x5bfd54*/
  eax30a = (void *)v27[3]; /*0x5bfd59*/
  v41 = 0; /*0x5bfd5c*/
  v15->nextObject = eax30a; /*0x5bfd64*/
  v48 = v26; /*0x5bfd69*/
  v46 = 0; /*0x5bfd6d*/
  v49 = (int)aP5a; /*0x5bfd7a*/
  if ( (int)a9 <= 0 || a10 <= 0 || v26 <= 0 || (int)aP5a <= 0 ) /*0x5bfd9d*/
    goto LABEL_47; /*0x5bfd9d*/
  v29 = a7; /*0x5bfda3*/
  if ( a7 > 0 ) /*0x5bfdac*/
  {
    v46 = a7; /*0x5bfdb0*/
    v48 = v26 - a7; /*0x5bfdb4*/
  }
  if ( v48 < 1 ) /*0x5bfdbd*/
    goto LABEL_47; /*0x5bfdbd*/
  if ( (int)v41 < a8 ) /*0x5bfdd0*/
  {
    v30 = (char *)v41 - a8; /*0x5bfdd6*/
    v41 = (IUnknown *)a8; /*0x5bfdda*/
    v49 += (int)v30; /*0x5bfdde*/
    v29 = a7; /*0x5bfde2*/
  }
  if ( v49 < 1 ) /*0x5bfdee*/
    goto LABEL_47; /*0x5bfdee*/
  if ( v48 + v46 > (int)a9 + v29 ) /*0x5bfe05*/
    v48 = (int)a9 + a7 - v46; /*0x5bfe16*/
  if ( v48 < 1 ) /*0x5bfe1f*/
    goto LABEL_47; /*0x5bfe1f*/
  v31 = v41; /*0x5bfe35*/
  if ( (int)v41 + v49 > a10 + a8 ) /*0x5bfe3d*/
    v49 = a10 + a8 - (_DWORD)v41; /*0x5bfe51*/
  if ( v49 < 1 ) /*0x5bfe5a*/
  {
LABEL_47:
    v32 = 0; /*0x5bfe6a*/
    v28 = 0; /*0x5bfe6c*/
    v31 = 0; /*0x5bfe6e*/
    v34 = 0; /*0x5bfe70*/
  }
  else
  {
    v32 = (void *)v46; /*0x5bfe5c*/
    v28 = (IUnknown *)v48; /*0x5bfe60*/
    v34 = v49; /*0x5bfe64*/
  }
  v15->attachedTag = v32; /*0x5bfe72*/
  v35 = _759EA0; /*0x5bfe75*/
  v15->attachedBomb = v31; /*0x5bfe79*/
  v15->ambientSoundController[0] = (int)v28; /*0x5bfe7c*/
  v15->ambientSoundController[1] = v34; /*0x5bfe82*/
  if ( v35 == 1 || v35 == 4 ) /*0x5bfe8a*/
  {
    Status = DDraw::GetStatus(); /*0x5bfe8c*/
    Render_Load_759F20(*(_DWORD **)v15->__pad_0, Status); /*0x5bfe94*/
  }
  *(_DWORD *)&v15->__pad_0[8] = a2; /*0x5bfe99*/
  v40 = (IUnknown *)(*(int (__thiscall **)(int *))(*a2 + 128))(a2); /*0x5bfeac*/
  v37 = (*(int (__thiscall **)(int *))(*a2 + 116))(a2); /*0x5bfeb6*/
  v38 = (*(int (__thiscall **)(int *))(*a2 + 112))(a2); /*0x5bfeb8*/
  Render_Load_759EB0(*(int **)v15->__pad_0, 0, v37 / v38, (unsigned int)v40, 0, 0); /*0x5bfec7*/
  SurfaceTracker = BinkMovie::CreateSurfaceTracker(FullPath); /*0x5bfed0*/
  v15->ambientSoundController[3] = (int)SurfaceTracker; /*0x5bfed7*/
  if ( SurfaceTracker ) /*0x5bfeda*/
    **(_DWORD **)v15->__pad_0 = SurfaceTracker; /*0x5bfede*/
  BYTE1(v15->ambientSoundController[2]) = 1; /*0x5bfee0*/
  return v15; /*0x5bfc12*/
}
}
} // namespace gamemd

// 0x5BFF60
namespace gamemd {
char Movie_RenderFrame(int a1, char a2, int a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall Movie_RenderFrame(int a1, char a2, int a3, char a4)
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
} // namespace gamemd

// 0x5B1B80
namespace gamemd {
int sub_5B1B80()
{
{
    DataGlobal_ABEE60 = 0;
    DataGlobal_ABEE64 = 0;
    DataGlobal_ABEE68 = 0;
    DataGlobal_ABEE6C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B1BA0
namespace gamemd {
void sub_5B1BA0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABEE78 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5B1BD0
namespace gamemd {
void sub_5B1BD0()
{
{
    DataGlobal_ABEEC8 = DataGlobal_ABEE78 / 60.0;
}
}
} // namespace gamemd

// 0x5B1BF0
namespace gamemd {
void sub_5B1BF0()
{
{
    DataGlobal_ABEEB0 = 1.0 / DataGlobal_ABEEC8;
}
}
} // namespace gamemd

// 0x5B1C10
namespace gamemd {
void sub_5B1C10()
{
{
    DataGlobal_ABEEA8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5B1C30
namespace gamemd {
void sub_5B1C30()
{
{
    DataGlobal_ABEE80 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5B1C50
namespace gamemd {
void sub_5B1C50()
{
{
    DataGlobal_ABEE58 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5B1C70
namespace gamemd {
long long sub_5B1C70()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABEE58 - DataGlobal_ABEE80);
    result = Math::RoundToInt(v0 * DataGlobal_ABEE78 * 0.5);
    DataGlobal_ABEED0 = result;
    return result;
}
}
} // namespace gamemd

// 0x5B1CB0
namespace gamemd {
void sub_5B1CB0()
{
{
    DataGlobal_ABEE88 = Math::ArcTan((double)DataGlobal_ABEED0 * 0.00390625);
}
}
} // namespace gamemd

// 0x5B1CE0
namespace gamemd {
void sub_5B1CE0()
{
{
    DataGlobal_ABEEA0 = Math::ArcTan((double)(2 * DataGlobal_ABEED0) / DataGlobal_ABEE78);
}
}
} // namespace gamemd

// 0x5B1D10
namespace gamemd {
long long sub_5B1D10()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABEED0) + 0.5);
    DataGlobal_ABEEC4 = result;
    return result;
}
}
} // namespace gamemd

// 0x5B1D40
namespace gamemd {
int sub_5B1D40()
{
{
    DataGlobal_ABEE70 = 0;
    DataGlobal_ABEE72 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B1D50
namespace gamemd {
int sub_5B1D50()
{
{
    DataGlobal_ABEE90 = 0;
    DataGlobal_ABEE94 = 0;
    DataGlobal_ABEE98 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B1D70
namespace gamemd {
int sub_5B1D70()
{
{
    DataGlobal_ABEEC0 = 0;
    DataGlobal_ABEEB8 = 128;
    DataGlobal_ABEEBC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5B1D90
namespace gamemd {
double * E4Recv_5B1D90::sub_5B1D90()
{
{
    DWORD v2;
    unsigned int v4;
    double v5;
    *(int *)this = 0;
    v4 = 0;
    this->M4 = 1072693248;
    v2 = sub_5CAF70((LONG *)&v4);
    if ( v2 || v4 )
  {
    v5 = (double)v4;
    Debug::Log();
    *(void**)this = (v5 * 4294967296.0 + (double)v2) * 0.001;
    return this;
  }
    else
  {
    timeBeginPeriod(1u);
    return this;
  }
}
}
} // namespace gamemd

// 0x5B1EE0
namespace gamemd {
int sub_5B1EE0()
{
{
    DataGlobal_ABEEE0 = 0;
    DataGlobal_ABEEE4 = 0;
    DataGlobal_ABEEE8 = 0;
    DataGlobal_ABEEEC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B1F00
namespace gamemd {
void sub_5B1F00()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABEEF8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5B1F30
namespace gamemd {
void sub_5B1F30()
{
{
    DataGlobal_ABEF48 = DataGlobal_ABEEF8 / 60.0;
}
}
} // namespace gamemd

// 0x5B1F50
namespace gamemd {
void sub_5B1F50()
{
{
    DataGlobal_ABEF30 = 1.0 / DataGlobal_ABEF48;
}
}
} // namespace gamemd

// 0x5B1F70
namespace gamemd {
void sub_5B1F70()
{
{
    DataGlobal_ABEF28 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5B1F90
namespace gamemd {
void sub_5B1F90()
{
{
    DataGlobal_ABEF00 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5B1FB0
namespace gamemd {
void sub_5B1FB0()
{
{
    DataGlobal_ABEED8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5B1FD0
namespace gamemd {
long long sub_5B1FD0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABEED8 - DataGlobal_ABEF00);
    result = Math::RoundToInt(v0 * DataGlobal_ABEEF8 * 0.5);
    DataGlobal_ABEF50 = result;
    return result;
}
}
} // namespace gamemd

// 0x5B2010
namespace gamemd {
void sub_5B2010()
{
{
    DataGlobal_ABEF08 = Math::ArcTan((double)DataGlobal_ABEF50 * 0.00390625);
}
}
} // namespace gamemd

// 0x5B2040
namespace gamemd {
void sub_5B2040()
{
{
    DataGlobal_ABEF20 = Math::ArcTan((double)(2 * DataGlobal_ABEF50) / DataGlobal_ABEEF8);
}
}
} // namespace gamemd

// 0x5B2070
namespace gamemd {
long long sub_5B2070()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABEF50) + 0.5);
    DataGlobal_ABEF44 = result;
    return result;
}
}
} // namespace gamemd

// 0x5B20A0
namespace gamemd {
int sub_5B20A0()
{
{
    DataGlobal_ABEEF0 = 0;
    DataGlobal_ABEEF2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B20B0
namespace gamemd {
int sub_5B20B0()
{
{
    DataGlobal_ABEF10 = 0;
    DataGlobal_ABEF14 = 0;
    DataGlobal_ABEF18 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B20D0
namespace gamemd {
int sub_5B20D0()
{
{
    DataGlobal_ABEF40 = 0;
    DataGlobal_ABEF38 = 128;
    DataGlobal_ABEF3C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5B2B90
namespace gamemd {
void sub_5B2B90()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABEF78 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5B2BC0
namespace gamemd {
void sub_5B2BC0()
{
{
    DataGlobal_ABEFC8 = DataGlobal_ABEF78 / 60.0;
}
}
} // namespace gamemd

// 0x5B2BE0
namespace gamemd {
void sub_5B2BE0()
{
{
    DataGlobal_ABEFB0 = 1.0 / DataGlobal_ABEFC8;
}
}
} // namespace gamemd

// 0x5B2C00
namespace gamemd {
void sub_5B2C00()
{
{
    DataGlobal_ABEFA8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5B2C20
namespace gamemd {
void sub_5B2C20()
{
{
    DataGlobal_ABEF80 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5B2C40
namespace gamemd {
void sub_5B2C40()
{
{
    DataGlobal_ABEF58 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5B2C60
namespace gamemd {
long long sub_5B2C60()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABEF58 - DataGlobal_ABEF80);
    result = Math::RoundToInt(v0 * DataGlobal_ABEF78 * 0.5);
    DataGlobal_ABEFD0 = result;
    return result;
}
}
} // namespace gamemd

// 0x5B2CA0
namespace gamemd {
void sub_5B2CA0()
{
{
    DataGlobal_ABEF88 = Math::ArcTan((double)DataGlobal_ABEFD0 * 0.00390625);
}
}
} // namespace gamemd

// 0x5B2CD0
namespace gamemd {
void sub_5B2CD0()
{
{
    DataGlobal_ABEFA0 = Math::ArcTan((double)(2 * DataGlobal_ABEFD0) / DataGlobal_ABEF78);
}
}
} // namespace gamemd

// 0x5B2D00
namespace gamemd {
long long sub_5B2D00()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABEFD0) + 0.5);
    DataGlobal_ABEFC4 = result;
    return result;
}
}
} // namespace gamemd

// 0x5B2D30
namespace gamemd {
int sub_5B2D30()
{
{
    DataGlobal_ABEF70 = 0;
    DataGlobal_ABEF72 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B2D40
namespace gamemd {
int sub_5B2D40()
{
{
    DataGlobal_ABEF90 = 0;
    DataGlobal_ABEF94 = 0;
    DataGlobal_ABEF98 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B2D60
namespace gamemd {
int sub_5B2D60()
{
{
    DataGlobal_ABEFC0 = 0;
    DataGlobal_ABEFB8 = 128;
    DataGlobal_ABEFBC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5B2D80
namespace gamemd {
int sub_5B2D80()
{
{
    DataGlobal_ABEF60 = 0;
    DataGlobal_ABEF64 = 0;
    DataGlobal_ABEF68 = 0;
    DataGlobal_ABEF6C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B3950
namespace gamemd {
char * Name_FromIndex(int a1)
{
{
    if ( a1 == -1 )
    return g_Str__none_;
    else
    return DataGlobal_816CAC[a1];
}
}
} // namespace gamemd

// 0x5B3AA0
namespace gamemd {
int sub_5B3AA0()
{
{
    DataGlobal_ABEFF8 = 0;
    DataGlobal_ABEFFC = 0;
    DataGlobal_ABF000 = 0;
    DataGlobal_ABF004 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B3AC0
namespace gamemd {
int sub_5B3AC0()
{
{
    DataGlobal_ABEFE4 = 0;
    DataGlobal_ABEFDC = (int)&vt_GenericNode;
    DataGlobal_ABEFE8 = (int)&vt_GenericNode;
    DataGlobal_ABEFEC = 0;
    g_MixFilePool_Root = (int)&DataGlobal_ABEFDC;
    DataGlobal_ABEFE0 = (int)&DataGlobal_ABEFE8;
    DataGlobal_ABEFD8 = (int)&vt_List_MixFileClass;
    return atexit(sub_5B3B10);
}
}
} // namespace gamemd

// 0x5B3E90
namespace gamemd {
char E4Recv_5B3E90::sub_5B3E90()
{
{
    int i;
    ObjectClass Filename;
    char Ext[256];
    char Buffer[260];
    for ( i = (int)*(&g_MatrixTransformState + 116); ; i = *(int *)(i + 4) )
  {
    if ( !i || !*(int *)(i + 4) || !*(int *)(i + 8) )
    return 0;
    _splitpath(*(const char **)(i + 12), 0, 0, &Filename, Ext);
    _makepath(Buffer, 0, 0, &Filename, Ext);
    if ( !_strcmpi(Buffer, this) )
    break;
  }
    if ( *(int *)(i + 36) )
  {
    if ( *(char *)(i + 18) )
    __3_YAXPAX_Z(*(void **)(i + 36));
  }
    *(int *)(i + 36) = 0;
    *(char *)(i + 18) = 0;
    return 1;
}
}
} // namespace gamemd

// 0x5B3F50
namespace gamemd {
void E4Recv_5B3F50::sub_5B3F50()
{
{
    void *v2;
    void *v3;
    int v4;
    int v5;
    int v6;
    int v7;
    v2 = (void *)this->M12;
    *(int *)this = &vt_MixFileClass;
    if ( v2 )
    free(v2);
    if ( this->M36 && (unsigned char)this->M18 )
  {
    __3_YAXPAX_Z(*((void **)(this) + 9));
    this->M18 = 0;
  }
    v3 = (void *)this->M32;
    this->M36 = 0;
    if ( v3 )
  {
    __3_YAXPAX_Z(v3);
    this->M32 = 0;
  }
    if ( this )
  {
    v4 = this->M4;
    if ( v4 )
    {
    v5 = this->M8;
    if ( v5 )
      {
    *(int *)(v5 + 4) = v4;
    *(int *)(this->M4 + 8) = this->M8;
    this->M8 = 0;
    this->M4 = 0;
      }
    }
  }
    *(int *)this = &vt_GenericNode;
    if ( this )
  {
    v6 = this->M4;
    if ( v6 )
    {
    v7 = this->M8;
    if ( v7 )
      {
    *(int *)(v7 + 4) = v6;
    *(int *)(this->M4 + 8) = this->M8;
    this->M8 = 0;
    this->M4 = 0;
      }
    }
  }
}
}
} // namespace gamemd

// 0x5B4350
namespace gamemd {
int E4Recv_5B4350::sub_5B4350()
{
{
    int i;
    ObjectClass Filename;
    char Ext[256];
    char Buffer[260];
    for ( i = (int)*(&g_MatrixTransformState + 116); i && *(int *)(i + 4) && *(int *)(i + 8); i = *(int *)(i + 4) )
  {
    _splitpath(*(const char **)(i + 12), 0, 0, &Filename, Ext);
    _makepath(Buffer, 0, 0, &Filename, Ext);
    if ( !_strcmpi(Buffer, this) )
    return i;
  }
    return 0;
}
}
} // namespace gamemd

// 0x5B43E0
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_7()
{
return 1;
}
} // namespace gamemd

// 0x5B43F0
namespace gamemd {
char ReturnTrue(AnimClass * aP0)
{
return 1;
}
} // namespace gamemd

// 0x5B4400
namespace gamemd {
void E4Recv_5B4400::sub_5B4400()
{
{
    if ( this->M36 && (unsigned char)this->M18 )
    __3_YAXPAX_Z(*(void **)(this + 36));
    this->M36 = 0;
    this->M18 = 0;
}
}
} // namespace gamemd

// 0x5B47A0
namespace gamemd {
int sub_5B47A0()
{
{
    DataGlobal_ABF018 = 0;
    DataGlobal_ABF01C = 0;
    DataGlobal_ABF020 = 0;
    DataGlobal_ABF024 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B47C0
namespace gamemd {
void sub_5B47C0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABF030 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5B47F0
namespace gamemd {
void sub_5B47F0()
{
{
    DataGlobal_ABF080 = DataGlobal_ABF030 / 60.0;
}
}
} // namespace gamemd

// 0x5B4810
namespace gamemd {
void sub_5B4810()
{
{
    DataGlobal_ABF068 = 1.0 / DataGlobal_ABF080;
}
}
} // namespace gamemd

// 0x5B4830
namespace gamemd {
void sub_5B4830()
{
{
    DataGlobal_ABF060 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5B4850
namespace gamemd {
void sub_5B4850()
{
{
    DataGlobal_ABF038 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5B4870
namespace gamemd {
void sub_5B4870()
{
{
    DataGlobal_ABF010 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5B4890
namespace gamemd {
long long sub_5B4890()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABF010 - DataGlobal_ABF038);
    result = Math::RoundToInt(v0 * DataGlobal_ABF030 * 0.5);
    DataGlobal_ABF088 = result;
    return result;
}
}
} // namespace gamemd

// 0x5B48D0
namespace gamemd {
void sub_5B48D0()
{
{
    DataGlobal_ABF040 = Math::ArcTan((double)DataGlobal_ABF088 * 0.00390625);
}
}
} // namespace gamemd

// 0x5B4900
namespace gamemd {
void sub_5B4900()
{
{
    DataGlobal_ABF058 = Math::ArcTan((double)(2 * DataGlobal_ABF088) / DataGlobal_ABF030);
}
}
} // namespace gamemd

// 0x5B4930
namespace gamemd {
long long sub_5B4930()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABF088) + 0.5);
    DataGlobal_ABF07C = result;
    return result;
}
}
} // namespace gamemd

// 0x5B4960
namespace gamemd {
int sub_5B4960()
{
{
    DataGlobal_ABF028 = 0;
    DataGlobal_ABF02A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B4970
namespace gamemd {
int sub_5B4970()
{
{
    DataGlobal_ABF048 = 0;
    DataGlobal_ABF04C = 0;
    DataGlobal_ABF050 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B4990
namespace gamemd {
int sub_5B4990()
{
{
    DataGlobal_ABF078 = 0;
    DataGlobal_ABF070 = 128;
    DataGlobal_ABF074 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5B57D0
namespace gamemd {
HWND E4Recv_5B57D0::sub_5B57D0()
{
{
    HWND result;
    HWND v3;
    char *v4;
    unsigned int v5;
    HWND v6;
    int (__usercall *v7)@<eax>(char@<cf>, char@<zf>);
    HWND v8;
    int v9;
    wchar_t *Format;
    int v11[62];
    short v12;
    wchar_t lParam[256];
    wchar_t Buffer[256];
    result = GetDlgItem(*(void**)this, 1344);
    v3 = result;
    if ( result )
  {
    SendMessageA(result, 0x4B3u, 0x100u, (LPARAM)lParam);
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString);
    result = (HWND)wcslen(lParam);
    if ( result )
    {
    if ( lParam[0] != 13 )
      {
    WideString::Trim(lParam);
    result = (HWND)lParam;
    if ( &v9 != (int *)-272 )
        {
    memset(v11, 0, sizeof(v11));
    v12 = 0;
    v11[0] = 104;
    strcpy((char *)&v11[1], g_GameSetupBuffer);
    LOBYTE(v11[6]) = g_TauntCommandState;
    wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam);
    Stream::WriteBlock((int)&g_EventManager, (int)v11, 250, 1);
    Stream::ReadPacket((int)&g_EventManager);
    v4 = CharToWideString(g_GameSetupBuffer);
    v5 = g_TauntCommandState;
    v8 = *(void**)this;
    Format = (wchar_t *)v4;
    result = GetDlgItem(v8, 1343);
    v6 = result;
    if ( result )
          {
    if ( v5 >= 8 )
    v7 = Math::InitDegToRad;
    else
    v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))DataGlobal_8316A8[v5];
    swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam);
    return (HWND)DrawDialogText((LPARAM)v7, Buffer, v6);
          }
        }
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x5B5960
namespace gamemd {
char E4Recv_5B5960::sub_5B5960()
{
{
    HWND DlgItem;
    HWND v3;
    DlgItem = GetDlgItem(*(HWND *)this, 1639);
    v3 = DlgItem;
    if ( DlgItem )
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0);
    if ( DlgItem != HWND_MESSAGE|0x2 )
    {
    g_CommandExecState = SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0);
    this->M9 = 1;
    this->M8 = 1;
    LOBYTE(DlgItem) = 1;
    }
  }
    return (char)DlgItem;
}
}
} // namespace gamemd

// 0x5B5A50
namespace gamemd {
char E4Recv_5B5A50::sub_5B5A50(char a2)
{
{
    HWND DlgItem;
    HWND v4;
    wchar_t lParam[22];
    DlgItem = GetDlgItem(*(HWND *)this, 1473);
    v4 = DlgItem;
    if ( DlgItem )
  {
    SendMessageA(DlgItem, 0x4B3u, 0x15u, (LPARAM)lParam);
    WideString::Trim(lParam);
    if ( !a2 )
    SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam);
    CopyWideToChar(g_GameSetupBuffer, (char *)lParam, -1);
    this->M9 = 1;
    this->M8 = 1;
    LOBYTE(DlgItem) = 1;
  }
    return (char)DlgItem;
}
}
} // namespace gamemd

// 0x5B6DA0
namespace gamemd {
void E4Recv_5B6DA0::sub_5B6DA0(wchar_t * Source)
{
{
    char *v3;
    unsigned int v4;
    HWND DlgItem;
    int (__usercall *v6)@<eax>(char@<cf>, char@<zf>);
    wchar_t *Format;
    int v8[62];
    short v9;
    wchar_t Buffer[256];
    if ( Source )
  {
    memset(v8, 0, sizeof(v8));
    v9 = 0;
    v8[0] = 104;
    strcpy((char *)&v8[1], g_GameSetupBuffer);
    LOBYTE(v8[6]) = g_TauntCommandState;
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source);
    Stream::WriteBlock((int)&g_EventManager, (int)v8, 250, 1);
    Stream::ReadPacket((int)&g_EventManager);
    v3 = CharToWideString(g_GameSetupBuffer);
    v4 = g_TauntCommandState;
    Format = (wchar_t *)v3;
    DlgItem = GetDlgItem(*(void**)this, 1343);
    if ( DlgItem )
    {
    if ( v4 >= 8 )
    v6 = Math::InitDegToRad;
    else
    v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))DataGlobal_8316A8[v4];
    swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source);
    DrawDialogText((LPARAM)v6, Buffer, DlgItem);
    }
  }
}
}
} // namespace gamemd

// 0x5B6F30
namespace gamemd {
HWND sub_5B6F30()
{
{
    wchar_t *StringCSF;
    HWND MessageBox;
    HWND v2;
    int v3;
    int v4;
    HWND result;
    char v6[4];
    int v7[62];
    short v8;
    int v9[6];
    int v10;
    memset(v7, 0, sizeof(v7));
    v8 = 0;
    LOBYTE(v7[6]) = g_EventDispatchState;
    v7[0] = 102;
    BYTE1(v7[7]) = g_TauntCommandState;
    Stream::WriteBlock((int)&g_EventManager, (int)v7, 250, 1);
    StringCSF = GetStringCSF(aTxtSigningOff, 0, g_Str_File_ModemGst_cpp, 1683);
    MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0);
    v2 = MessageBox;
    if ( MessageBox )
    Dialog::Show(MessageBox);
    v3 = g_PerformanceTickOffset;
    if ( g_LastPerformanceTick != -1 )
    v3 += Timer::GetTicks() - g_LastPerformanceTick;
    while ( Count::GetCountQueue(&g_EventManager) )
  {
    v4 = g_PerformanceTickOffset;
    if ( g_LastPerformanceTick != -1 )
    v4 += Timer::GetTicks() - g_LastPerformanceTick;
    if ( (unsigned int)(v4 - v3) >= 0x12C || ObjectTypeClass::CreateInstance((int)&g_EventManager, (int)v9, (int)v6) > 0 && v9[0] == 102 && (unsigned char)v10 == g_EventDispatchState )
    {
    break;
    }
    Event::Dispatch();
    MessageLoop();
    Stream::ReadPacket((int)&g_EventManager);
  }
    result = (HWND)Network::CleanupOnDisconnect();
    if ( v2 )
    return Dialog::Destroy(v2);
    return result;
}
}
} // namespace gamemd

// 0x5B75D0
namespace gamemd {
int sub_5B75D0()
{
{
    DataGlobal_ABF098 = 0;
    DataGlobal_ABF09C = 0;
    DataGlobal_ABF0A0 = 0;
    DataGlobal_ABF0A4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B75F0
namespace gamemd {
void sub_5B75F0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABF0B0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5B7620
namespace gamemd {
void sub_5B7620()
{
{
    DataGlobal_ABF100 = DataGlobal_ABF0B0 / 60.0;
}
}
} // namespace gamemd

// 0x5B7640
namespace gamemd {
void sub_5B7640()
{
{
    DataGlobal_ABF0E8 = 1.0 / DataGlobal_ABF100;
}
}
} // namespace gamemd

// 0x5B7660
namespace gamemd {
void sub_5B7660()
{
{
    DataGlobal_ABF0E0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5B7680
namespace gamemd {
void sub_5B7680()
{
{
    DataGlobal_ABF0B8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5B76A0
namespace gamemd {
void sub_5B76A0()
{
{
    DataGlobal_ABF090 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5B76C0
namespace gamemd {
long long sub_5B76C0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABF090 - DataGlobal_ABF0B8);
    result = Math::RoundToInt(v0 * DataGlobal_ABF0B0 * 0.5);
    DataGlobal_ABF108 = result;
    return result;
}
}
} // namespace gamemd

// 0x5B7700
namespace gamemd {
void sub_5B7700()
{
{
    DataGlobal_ABF0C0 = Math::ArcTan((double)DataGlobal_ABF108 * 0.00390625);
}
}
} // namespace gamemd

// 0x5B7730
namespace gamemd {
void sub_5B7730()
{
{
    DataGlobal_ABF0D8 = Math::ArcTan((double)(2 * DataGlobal_ABF108) / DataGlobal_ABF0B0);
}
}
} // namespace gamemd

// 0x5B7760
namespace gamemd {
long long sub_5B7760()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABF108) + 0.5);
    DataGlobal_ABF0FC = result;
    return result;
}
}
} // namespace gamemd

// 0x5B7790
namespace gamemd {
int sub_5B7790()
{
{
    DataGlobal_ABF0A8 = 0;
    DataGlobal_ABF0AA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B77A0
namespace gamemd {
int sub_5B77A0()
{
{
    DataGlobal_ABF0C8 = 0;
    DataGlobal_ABF0CC = 0;
    DataGlobal_ABF0D0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5B77C0
namespace gamemd {
int sub_5B77C0()
{
{
    DataGlobal_ABF0F8 = 0;
    DataGlobal_ABF0F0 = 128;
    DataGlobal_ABF0F4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5B9250
namespace gamemd {
HWND E4Recv_5B9250::sub_5B9250()
{
{
    HWND result;
    HWND v3;
    char *v4;
    unsigned int v5;
    HWND v6;
    int (__usercall *v7)@<eax>(char@<cf>, char@<zf>);
    HWND v8;
    int v9;
    wchar_t *Format;
    int v11[62];
    short v12;
    wchar_t lParam[256];
    wchar_t Buffer[256];
    memset(lParam, 0, sizeof(lParam));
    result = GetDlgItem(*(void**)this, 1344);
    v3 = result;
    if ( result )
  {
    SendMessageA(result, 0x4B3u, 0x100u, (LPARAM)lParam);
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString);
    result = (HWND)wcslen(lParam);
    if ( result )
    {
    if ( lParam[0] != 13 )
      {
    WideString::Trim(lParam);
    result = (HWND)lParam;
    if ( &v9 != (int *)-272 )
        {
    memset(v11, 0, sizeof(v11));
    v12 = 0;
    v11[0] = 104;
    strcpy((char *)&v11[1], g_GameSetupBuffer);
    LOBYTE(v11[6]) = g_TauntCommandState;
    wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam);
    Stream::WriteBlock((int)&g_EventManager, (int)v11, 250, 1);
    Stream::ReadPacket((int)&g_EventManager);
    v4 = CharToWideString(g_GameSetupBuffer);
    v5 = g_TauntCommandState;
    v8 = *(void**)this;
    Format = (wchar_t *)v4;
    result = GetDlgItem(v8, 1343);
    v6 = result;
    if ( result )
          {
    if ( v5 >= 8 )
    v7 = Math::InitDegToRad;
    else
    v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))DataGlobal_8316A8[v5];
    swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam);
    return (HWND)DrawDialogText((LPARAM)v7, Buffer, v6);
          }
        }
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x5B93F0
namespace gamemd {
char E4Recv_5B93F0::sub_5B93F0()
{
{
    HWND DlgItem;
    HWND v3;
    DlgItem = GetDlgItem(*(HWND *)this, 1639);
    v3 = DlgItem;
    if ( DlgItem )
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0);
    if ( DlgItem != HWND_MESSAGE|0x2 )
    {
    DlgItem = (HWND)SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0);
    if ( DlgItem != HWND_MESSAGE|0x2 )
      {
    g_CommandExecState = (int)DlgItem;
    this->M9 = 1;
    this->M8 = 1;
    LOBYTE(DlgItem) = 1;
      }
    }
  }
    return (char)DlgItem;
}
}
} // namespace gamemd

// 0x5B9450
namespace gamemd {
unsigned int E4Recv_5B9450::sub_5B9450()
{
{
    unsigned int result;
    HWND v3;
    result = (unsigned int)GetDlgItem(*(HWND *)this, 1029);
    v3 = (HWND)result;
    if ( result )
  {
    result = SendMessageA((HWND)result, 0x147u, 0, 0);
    if ( result != -1 )
    {
    g_TauntCommandState = result;
    this->M9 = 1;
    this->M8 = 1;
    if ( result >= 8 )
    return SendMessageA(v3, 0x498u, 0, (LPARAM)Math::InitDegToRad);
    else
    return SendMessageA(v3, 0x498u, 0, DataGlobal_8316A8[result]);
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x5B94C0
namespace gamemd {
char E4Recv_5B94C0::sub_5B94C0(char a2)
{
{
    HWND DlgItem;
    HWND v4;
    wchar_t lParam[20];
    DlgItem = GetDlgItem(*(HWND *)this, 1473);
    v4 = DlgItem;
    if ( DlgItem )
  {
    SendMessageA(DlgItem, 0x4B3u, 0x14u, (LPARAM)lParam);
    WideString::Trim(lParam);
    if ( !a2 )
    SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam);
    strcpy(g_GameSetupBuffer, ToWideStringChar((char *)lParam));
    this->M9 = 1;
    this->M8 = 1;
    LOBYTE(DlgItem) = 1;
  }
    return (char)DlgItem;
}
}
} // namespace gamemd

// 0x5BAA80
namespace gamemd {
void E4Recv_5BAA80::sub_5BAA80(wchar_t * Format, unsigned int a3, int a4)
{
{
    HWND DlgItem;
    int (__usercall *v5)@<eax>(char@<cf>, char@<zf>);
    wchar_t Buffer[256];
    if ( a4 )
  {
    DlgItem = GetDlgItem(*(void**)this, 1343);
    if ( DlgItem )
    {
    if ( a3 >= 8 )
    v5 = Math::InitDegToRad;
    else
    v5 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))DataGlobal_8316A8[a3];
    swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, a4);
    DrawDialogText((LPARAM)v5, Buffer, DlgItem);
    }
  }
}
}
} // namespace gamemd

// 0x5BAB00
namespace gamemd {
HWND sub_5BAB00()
{
{
    wchar_t *StringCSF;
    HWND MessageBox;
    HWND v2;
    int v3;
    int v4;
    HWND result;
    char v6[4];
    int v7[62];
    short v8;
    int v9[6];
    int v10;
    memset(v7, 0, sizeof(v7));
    v8 = 0;
    LOBYTE(v7[6]) = g_EventDispatchState;
    v7[0] = 102;
    BYTE1(v7[7]) = g_TauntCommandState;
    Stream::WriteBlock((int)&g_EventManager, (int)v7, 250, 1);
    StringCSF = GetStringCSF(aTxtSigningOff, 0, g_Str_File_ModemHst_cpp, 2398);
    MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0);
    v2 = MessageBox;
    if ( MessageBox )
    Dialog::Show(MessageBox);
    v3 = g_PerformanceTickOffset;
    if ( g_LastPerformanceTick != -1 )
    v3 += Timer::GetTicks() - g_LastPerformanceTick;
    while ( Count::GetCountQueue(&g_EventManager) )
  {
    v4 = g_PerformanceTickOffset;
    if ( g_LastPerformanceTick != -1 )
    v4 += Timer::GetTicks() - g_LastPerformanceTick;
    if ( (unsigned int)(v4 - v3) >= 0x12C || ObjectTypeClass::CreateInstance((int)&g_EventManager, (int)v9, (int)v6) > 0 && v9[0] == 102 && (unsigned char)v10 == g_EventDispatchState )
    {
    break;
    }
    Event::Dispatch();
    MessageLoop();
    Stream::ReadPacket((int)&g_EventManager);
  }
    result = (HWND)Network::CleanupOnDisconnect();
    if ( v2 )
    return Dialog::Destroy(v2);
    return result;
}
}
} // namespace gamemd

// 0x5BBF70
namespace gamemd {
int sub_5BBF70()
{
{
    DataGlobal_ABF138 = 0;
    DataGlobal_ABF13C = 0;
    DataGlobal_ABF140 = 0;
    DataGlobal_ABF144 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5BBF90
namespace gamemd {
void sub_5BBF90()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABF150 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5BBFC0
namespace gamemd {
void sub_5BBFC0()
{
{
    DataGlobal_ABF210 = DataGlobal_ABF150 / 60.0;
}
}
} // namespace gamemd

// 0x5BBFE0
namespace gamemd {
void sub_5BBFE0()
{
{
    DataGlobal_ABF1C0 = 1.0 / DataGlobal_ABF210;
}
}
} // namespace gamemd

// 0x5BC000
namespace gamemd {
void sub_5BC000()
{
{
    DataGlobal_ABF1B8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5BC020
namespace gamemd {
void sub_5BC020()
{
{
    DataGlobal_ABF158 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5BC040
namespace gamemd {
void sub_5BC040()
{
{
    DataGlobal_ABF130 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5BC060
namespace gamemd {
long long sub_5BC060()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABF130 - DataGlobal_ABF158);
    result = Math::RoundToInt(v0 * DataGlobal_ABF150 * 0.5);
    DataGlobal_ABF218 = result;
    return result;
}
}
} // namespace gamemd

// 0x5BC0A0
namespace gamemd {
void sub_5BC0A0()
{
{
    DataGlobal_ABF160 = Math::ArcTan((double)DataGlobal_ABF218 * 0.00390625);
}
}
} // namespace gamemd

// 0x5BC0D0
namespace gamemd {
void sub_5BC0D0()
{
{
    DataGlobal_ABF1B0 = Math::ArcTan((double)(2 * DataGlobal_ABF218) / DataGlobal_ABF150);
}
}
} // namespace gamemd

// 0x5BC100
namespace gamemd {
long long sub_5BC100()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABF218) + 0.5);
    DataGlobal_ABF20C = result;
    return result;
}
}
} // namespace gamemd

// 0x5BC130
namespace gamemd {
int sub_5BC130()
{
{
    DataGlobal_ABF148 = 0;
    DataGlobal_ABF14A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5BC140
namespace gamemd {
int sub_5BC140()
{
{
    DataGlobal_ABF188 = 0;
    DataGlobal_ABF18C = 0;
    DataGlobal_ABF190 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5BC160
namespace gamemd {
int sub_5BC160()
{
{
    DataGlobal_ABF208 = 0;
    DataGlobal_ABF200 = 128;
    DataGlobal_ABF204 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5BC300
namespace gamemd {
int _ioterm()
{
{
    void **v0;
    int result;
    v0 = (void **)(&g_MatrixTransformState + 214);
    do
  {
    if ( *v0 )
    {
    __3_YAXPAX_Z(*v0);
    *v0 = 0;
    }
    ++v0;
  }
    while ( (int)v0 < (int)((void **)&g_MatrixTransformState + 222) );
    result = (int)*(&g_MatrixTransformState + 268);
    if ( *(&g_MatrixTransformState + 268) )
  {
    DeleteObject(*(&g_MatrixTransformState + 269));
    Object::RemoveObjectArray(*(&g_MatrixTransformState + 268));
    result = DestroyWindow((HWND)*(&g_MatrixTransformState + 268));
    *((__int64 *)&g_MatrixTransformState + 134) = 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x5BC440
namespace gamemd {
ObjectClass * sub_5BC440()
{
{
    return (ObjectClass *)*(&g_MatrixTransformState + 267);
}
}
} // namespace gamemd

// 0x5BC450
namespace gamemd {
int sub_5BC450(int a1)
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_5BC450(int a1)
{
  return DataGlobal_ABF168[a1]; /*0x5bc457*/
}
}
} // namespace gamemd

// 0x5BC460
namespace gamemd {
char sub_5BC460(int a1)
{
{
    char *v1;
    int v2;
    int *v3;
    char *v4;
    int *v5;
    int v6;
    v1 = (char *)DataGlobal_ABF168[a1];
    DataGlobal_ABF23C = (int)v1;
    v2 = 0;
    v3 = v1 + 2000;
    do
  {
    v4 = &v1[v2];
    v5 = v3;
    v6 = 80;
    do
    {
    *v4 = 32;
    *v5 = 0;
    v5 += 25;
    v4 += 25;
    --v6;
    }
    while ( v6 );
    ++v2;
    ++v3;
  }
    while ( v2 < 25 );
    v1[10036] = 1;
    Text::DrawRepeated(v1, 0, 0, 80, 25);
    return Text::DrawRepeated((void *)DataGlobal_ABF23C, 0, 0, 80, 25);
}
}
} // namespace gamemd

// 0x5BC4D0
namespace gamemd {
char sub_5BC4D0()
{
{
    int *v0;
    char *v1;
    int v2;
    int v3;
    char *v4;
    int *v5;
    int v6;
    char result;
    v0 = DataGlobal_ABF168;
    do
  {
    v1 = (char *)*v0;
    v2 = 0;
    v3 = *v0 + 2000;
    do
    {
    v4 = &v1[v2];
    v5 = (int *)v3;
    v6 = 80;
    do
      {
    *v4 = 32;
    *v5 = 0;
    v5 += 25;
    v4 += 25;
    --v6;
      }
    while ( v6 );
    ++v2;
    v3 += 4;
    }
    while ( v2 < 25 );
    v1[10036] = 1;
    result = Text::DrawRepeated(v1, 0, 0, 80, 25);
    ++v0;
  }
    while ( (int)v0 < (int)&DataGlobal_ABF188 );
    return result;
}
}
} // namespace gamemd

// 0x5BC530
namespace gamemd {
int sub_5BC530()
{
{
    HDC DC;
    int DeviceCaps;
    HGDIOBJ v2;
    struct tagRECT Rect;
    struct tagRECT v5;
    LOGFONTA lf;
    DataGlobal_ABF240 = CreateDialogParamA(DataGlobal_ABF230, (LPCSTR)0xF8, hWndParent, DlgProcAudioDebug, 0);
    TimerPool::AllocSlot(DataGlobal_ABF240);
    DC = GetDC(DataGlobal_ABF240);
    DeviceCaps = GetDeviceCaps(DC, 90);
    lf.lfHeight = -MulDiv(8, DeviceCaps, 72);
    memset(&lf.lfWidth, 0, 24);
    strcpy(lf.lfFaceName, "Courier");
    DataGlobal_ABF244 = CreateFontIndirectA(&lf);
    v2 = SelectObject(DC, DataGlobal_ABF244);
    GetTextMetricsA(DC, &DataGlobal_ABF1C8);
    SelectObject(DC, v2);
    DataGlobal_ABF128 = GetSysColor(15);
    DataGlobal_ABF110 = GetSysColor(8);
    Rect.left = 0;
    Rect.top = 0;
    Rect.right = 79 * DataGlobal_ABF1C8.tmMaxCharWidth + 20;
    Rect.bottom = 25 * (DataGlobal_ABF1C8.tmHeight + DataGlobal_ABF1C8.tmExternalLeading) + 20;
    AdjustWindowRect(&Rect, 0xC00000u, 0);
    GetWindowRect(hWndParent, &v5);
    MoveWindow(DataGlobal_ABF240, v5.right + 5, 0, Rect.right - Rect.left, Rect.bottom - Rect.top, 1);
    ShowWindow(DataGlobal_ABF240, 0);
    SetFocus(hWndParent);
    return ReleaseDC(DataGlobal_ABF240, DC);
}
}
} // namespace gamemd

// 0x5BCB90
namespace gamemd {
ObjectClass * E4Recv_5BCB90::sub_5BCB90(int a2)
{
{
    int v3;
    int *v4;
    char *v5;
    int *v6;
    int v7;
    v3 = 0;
    this->M10008 = a2;
    this->M10012 = 0;
    this->M10016 = 0;
    this->M10020 = 0;
    this->M10024 = 0;
    this->M10028 = 80;
    this->M10032 = 25;
    v4 = (int *)(this + 2000);
    do
  {
    v5 = (char *)(v3 + this);
    v6 = v4;
    v7 = 80;
    do
    {
    *v5 = 32;
    *v6 = 0;
    v6 += 25;
    v5 += 25;
    --v7;
    }
    while ( v7 );
    ++v3;
    ++v4;
  }
    while ( v3 < 25 );
    this->M10036 = 1;
    Text::DrawRepeated((void *)this, 0, 0, 80, 25);
    return (ObjectClass *)this;
}
}
} // namespace gamemd

// 0x5BCC20
namespace gamemd {
void nullsub_174()
{
  ;
}
} // namespace gamemd

// 0x5BCC30
namespace gamemd {
int E4Recv_5BCC30::sub_5BCC30()
{
{
    return this->M10008;
}
}
} // namespace gamemd

// 0x5BCC60
namespace gamemd {
int E4Recv_5BCC60::sub_5BCC60(int a2, int a3, int a4, int a5)
{
{
    this->M10020 = a2;
    this->M10024 = a3;
    this->M10028 = a4;
    this->M10032 = a5;
    return a4;
}
}
} // namespace gamemd

// 0x5BCCE0
namespace gamemd {
char E4Recv_5BCCE0::sub_5BCCE0()
{
{
    return this->M10036;
}
}
} // namespace gamemd

// 0x5BD240
namespace gamemd {
char sub_5BD240(int a1, size_t BufferCount, wchar_t Format)
{
{
    char result;
    char v4[256];
    wchar_t Buffer[256];
    result = g_MiscFlag;
    if ( g_MiscFlag )
  {
    vswprintf(Buffer, BufferCount, &Format, *(va_list *)v4);
    sprintf(v4, DataGlobal_82D020, Buffer);
    return Debug::ScrollText(a1, v4);
  }
    return result;
}
}
} // namespace gamemd

// 0x5BD2E0
namespace gamemd {
char E4Recv_5BD2E0::sub_5BD2E0(ObjectClass * aP1, int a3, int a4, int a5)
{
{
    char result;
    CellStruct Buffer;
    result = *((char *)&(&g_MatrixTransformState)[22] + 10);
    if ( *((char *)&(&g_MatrixTransformState)[22] + 10) )
  {
    this->M10012 = a3;
    this->M10016 = a4;
    if ( *((char *)&(&g_MatrixTransformState)[22] + 10) )
    this->M10000 = a5;
    sprintf((char *const)&Buffer, &DataGlobal_82D020, (INIClass *)aP1);
    return Debug::ScrollText((int)this, &Buffer);
  }
    return result;
}
}
} // namespace gamemd

// 0x5BD560
namespace gamemd {
unsigned int * E4Recv_5BD560::sub_5BD560()
{
{
    *(char *)this = 0;
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 0;
    return this;
}
}
} // namespace gamemd

// 0x5BD7E0
namespace gamemd {
void sub_5BD7E0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABF270 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5BD810
namespace gamemd {
void sub_5BD810()
{
{
    DataGlobal_ABF2D0 = DataGlobal_ABF270 / 60.0;
}
}
} // namespace gamemd

// 0x5BD830
namespace gamemd {
void sub_5BD830()
{
{
    DataGlobal_ABF2B8 = 1.0 / DataGlobal_ABF2D0;
}
}
} // namespace gamemd

// 0x5BD850
namespace gamemd {
void sub_5BD850()
{
{
    DataGlobal_ABF2B0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5BD870
namespace gamemd {
void sub_5BD870()
{
{
    DataGlobal_ABF278 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5BD890
namespace gamemd {
void sub_5BD890()
{
{
    DataGlobal_ABF248 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5BD8B0
namespace gamemd {
long long sub_5BD8B0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABF248 - DataGlobal_ABF278);
    result = Math::RoundToInt(v0 * DataGlobal_ABF270 * 0.5);
    DataGlobal_ABF2D8 = result;
    return result;
}
}
} // namespace gamemd

// 0x5BD8F0
namespace gamemd {
void sub_5BD8F0()
{
{
    DataGlobal_ABF280 = Math::ArcTan((double)DataGlobal_ABF2D8 * 0.00390625);
}
}
} // namespace gamemd

// 0x5BD920
namespace gamemd {
void sub_5BD920()
{
{
    DataGlobal_ABF298 = Math::ArcTan((double)(2 * DataGlobal_ABF2D8) / DataGlobal_ABF270);
}
}
} // namespace gamemd

// 0x5BD950
namespace gamemd {
long long sub_5BD950()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABF2D8) + 0.5);
    DataGlobal_ABF2CC = result;
    return result;
}
}
} // namespace gamemd

// 0x5BD980
namespace gamemd {
int sub_5BD980()
{
{
    DataGlobal_ABF268 = 0;
    DataGlobal_ABF26A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5BD990
namespace gamemd {
int sub_5BD990()
{
{
    DataGlobal_ABF288 = 0;
    DataGlobal_ABF28C = 0;
    DataGlobal_ABF290 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5BD9B0
namespace gamemd {
int sub_5BD9B0()
{
{
    DataGlobal_ABF2C8 = 0;
    DataGlobal_ABF2C0 = 128;
    DataGlobal_ABF2C4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5BD9D0
namespace gamemd {
int sub_5BD9D0()
{
{
    DataGlobal_ABF258 = 0;
    DataGlobal_ABF25C = 0;
    DataGlobal_ABF260 = 0;
    DataGlobal_ABF264 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5BD9F0
namespace gamemd {
int sub_5BD9F0()
{
{
    DataGlobal_ABF2A0 = Timer::GetTicks();
    DataGlobal_ABF2A8 = 0;
    return atexit(sub_5BDA20);
}
}
} // namespace gamemd

// 0x5BDA20
namespace gamemd {
void sub_5BDA20()
{
{
    if ( (DataGlobal_ABF250 & 1) == 0 )
    DataGlobal_ABF250 |= 1u;
}
}
} // namespace gamemd

// 0x5BDA40
namespace gamemd {
unsigned char * E4Recv_5BDA40::sub_5BDA40()
{
{
    SmallFunc_692290((int)this);
    *(void**)this = vt_MouseClass;
    this->M21852 = 0;
    this->M21856 = 0;
    this->M21860 = 0;
    this->M21864 = 0;
    this->M21784 = &vt_MouseClass;
    return this;
}
}
} // namespace gamemd

// 0x5BEAB0
namespace gamemd {
int sub_5BEAB0()
{
{
    DataGlobal_ABF2E8 = 0;
    DataGlobal_ABF2EC = 0;
    DataGlobal_ABF2F0 = 0;
    DataGlobal_ABF2F4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5BEAD0
namespace gamemd {
void sub_5BEAD0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABF300 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5BEB00
namespace gamemd {
void sub_5BEB00()
{
{
    DataGlobal_ABF350 = DataGlobal_ABF300 / 60.0;
}
}
} // namespace gamemd

// 0x5BEB20
namespace gamemd {
void sub_5BEB20()
{
{
    DataGlobal_ABF338 = 1.0 / DataGlobal_ABF350;
}
}
} // namespace gamemd

// 0x5BEB40
namespace gamemd {
void sub_5BEB40()
{
{
    DataGlobal_ABF330 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5BEB60
namespace gamemd {
void sub_5BEB60()
{
{
    DataGlobal_ABF308 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5BEB80
namespace gamemd {
void sub_5BEB80()
{
{
    DataGlobal_ABF2E0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5BEBA0
namespace gamemd {
long long sub_5BEBA0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABF2E0 - DataGlobal_ABF308);
    result = Math::RoundToInt(v0 * DataGlobal_ABF300 * 0.5);
    DataGlobal_ABF358 = result;
    return result;
}
}
} // namespace gamemd

// 0x5BEBE0
namespace gamemd {
void sub_5BEBE0()
{
{
    DataGlobal_ABF310 = Math::ArcTan((double)DataGlobal_ABF358 * 0.00390625);
}
}
} // namespace gamemd

// 0x5BEC10
namespace gamemd {
void sub_5BEC10()
{
{
    DataGlobal_ABF328 = Math::ArcTan((double)(2 * DataGlobal_ABF358) / DataGlobal_ABF300);
}
}
} // namespace gamemd

// 0x5BEC40
namespace gamemd {
long long sub_5BEC40()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABF358) + 0.5);
    DataGlobal_ABF34C = result;
    return result;
}
}
} // namespace gamemd

// 0x5BEC70
namespace gamemd {
int sub_5BEC70()
{
{
    DataGlobal_ABF2F8 = 0;
    DataGlobal_ABF2FA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5BEC80
namespace gamemd {
int sub_5BEC80()
{
{
    DataGlobal_ABF318 = 0;
    DataGlobal_ABF31C = 0;
    DataGlobal_ABF320 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5BECA0
namespace gamemd {
int sub_5BECA0()
{
{
    DataGlobal_ABF348 = 0;
    DataGlobal_ABF340 = 128;
    DataGlobal_ABF344 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5BECC0
namespace gamemd {
int E4Recv_5BECC0::sub_5BECC0()
{
{
    int v1;
    int result;
    char *v3;
    int v4;
    int v5;
    char *v6;
    char v7;
    v1 = 0;
    result = 256 - (int)this;
    v3 = this;
    do
  {
    v4 = v1 + 1;
    v5 = v1 + 1;
    if ( v1 + 1 < 256 )
    {
    v6 = &v3[result + v1 + (int)this];
    do
      {
    v7 = *v6;
    v6 += 256;
    v3[v5++] = v7;
      }
    while ( v5 < 256 );
    result = 256 - (int)this;
    }
    ++v1;
    v3 += 256;
  }
    while ( v4 < 255 );
    return result;
}
}
} // namespace gamemd

// 0x5BF360
namespace gamemd {
int E4Recv_5BF360::sub_5BF360()
{
{
    int result;
    if ( this )
    return MessageListClass::AddMessage( g_GameNetworkObject, 0, 0, *(wchar_t **)(this + 20), 0, 16454, this->M4, 0);
    return result;
}
}
} // namespace gamemd

// 0x5BF5C0
namespace gamemd {
int sub_5BF5C0()
{
{
    DataGlobal_ABF368 = 0;
    DataGlobal_ABF36C = 0;
    DataGlobal_ABF370 = 0;
    DataGlobal_ABF374 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5BF5E0
namespace gamemd {
void sub_5BF5E0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABF380 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5BF610
namespace gamemd {
void sub_5BF610()
{
{
    DataGlobal_ABF3E8 = DataGlobal_ABF380 / 60.0;
}
}
} // namespace gamemd

// 0x5BF630
namespace gamemd {
void sub_5BF630()
{
{
    DataGlobal_ABF3D0 = 1.0 / DataGlobal_ABF3E8;
}
}
} // namespace gamemd

// 0x5BF650
namespace gamemd {
void sub_5BF650()
{
{
    DataGlobal_ABF3C8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5BF670
namespace gamemd {
void sub_5BF670()
{
{
    DataGlobal_ABF388 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5BF690
namespace gamemd {
void sub_5BF690()
{
{
    DataGlobal_ABF360 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5BF6B0
namespace gamemd {
long long sub_5BF6B0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABF360 - DataGlobal_ABF388);
    result = Math::RoundToInt(v0 * DataGlobal_ABF380 * 0.5);
    DataGlobal_ABF3F0 = result;
    return result;
}
}
} // namespace gamemd

// 0x5BF6F0
namespace gamemd {
void sub_5BF6F0()
{
{
    DataGlobal_ABF3A8 = Math::ArcTan((double)DataGlobal_ABF3F0 * 0.00390625);
}
}
} // namespace gamemd

// 0x5BF720
namespace gamemd {
void sub_5BF720()
{
{
    DataGlobal_ABF3C0 = Math::ArcTan((double)(2 * DataGlobal_ABF3F0) / DataGlobal_ABF380);
}
}
} // namespace gamemd

// 0x5BF750
namespace gamemd {
long long sub_5BF750()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABF3F0) + 0.5);
    DataGlobal_ABF3E4 = result;
    return result;
}
}
} // namespace gamemd

// 0x5BF780
namespace gamemd {
int sub_5BF780()
{
{
    DataGlobal_ABF378 = 0;
    DataGlobal_ABF37A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5BF790
namespace gamemd {
int sub_5BF790()
{
{
    DataGlobal_ABF3B0 = 0;
    DataGlobal_ABF3B4 = 0;
    DataGlobal_ABF3B8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5BF7B0
namespace gamemd {
int sub_5BF7B0()
{
{
    DataGlobal_ABF3E0 = 0;
    DataGlobal_ABF3D8 = 128;
    DataGlobal_ABF3DC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5BF7D0
namespace gamemd {
int sub_5BF7D0()
{
{
    DataGlobal_ABF394 = 0;
    DataGlobal_ABF398 = 0;
    DataGlobal_ABF39C = 1;
    DataGlobal_ABF39D = 0;
    MovieInfo_Array = (int)&vt_DynamicVectorClass_char_const;
    DataGlobal_ABF3A4 = 10;
    DataGlobal_ABF3A0 = 0;
    return atexit(sub_5BF810);
}
}
} // namespace gamemd

// 0x5BF810
namespace gamemd {
void sub_5BF810()
{
{
    MovieInfo_Array = (int)&vt_VectorClass_char_const;
    if ( DataGlobal_ABF394 && DataGlobal_ABF39D )
  {
    __3_YAXPAX_Z(DataGlobal_ABF394);
    DataGlobal_ABF394 = 0;
  }
    DataGlobal_ABF39D = 0;
    DataGlobal_ABF398 = 0;
}
}
} // namespace gamemd

// 0x5BF850
namespace gamemd {
int sub_5BF850()
{
{
    int v0;
    int v1;
    int *v2;
    int v3;
    int v4;
    int v5;
    unsigned int v7;
    int v8;
    v0 = *(int *)(g_BigIntPool + 8);
    v1 = (*(int (__thiscall **)(int, int))(*(int *)(v0) + 92))(v0, 0);
    v2 = *(int **)g_BigIntPool;
    v8 = *(int *)(g_BigIntPool + 40);
    v7 = *(int *)(g_BigIntPool + 36);
    v3 = (*(int (__thiscall **)(int))(*(int *)(v0) + 128))(v0);
    v4 = (*(int (__thiscall **)(int, int))(*(int *)(v0) + 116))(v0, v3);
    v5 = (*(int (__thiscall **)(int))(*(int *)(v0) + 112))(v0);
    Render_Load_759EB0(v2, 0, v4 / v5, v7, v8, 0);
    return v1;
}
}
} // namespace gamemd

// 0x5BF8B0
namespace gamemd {
int sub_5BF8B0()
{
{
    return (*(int (__thiscall **)(int))(**(int **)(g_BigIntPool + 8) + 96))(*(int *)(g_BigIntPool + 8));
}
}
} // namespace gamemd
