// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5F15C0_e4.hpp"
#include "e4/classes/E4Recv_5F1F20_e4.hpp"

// 0x5F0070
namespace gamemd {
char sub_5F0070()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_5F0070()
{
  DWORD v0; // eax
  int v1; // edi
  int v2; // esi
  _BYTE v4[108]; // [esp+8h] [ebp-70h] BYREF
  __int16 v5; // [esp+74h] [ebp-4h]
  char v6; // [esp+76h] [ebp-2h]

  LOBYTE(v0) = MEMORY[0xA8D5F8]; /*0x5f0073*/
  v4[0] = 0; /*0x5f007c*/
  if ( (MEMORY[0xA8D5F8] & 2) == 0 ) /*0x5f0081*/
  {
    memset(v4, 0, sizeof(v4)); /*0x5f0094*/
    v5 = 0; /*0x5f0096*/
    v6 = 0; /*0x5f0098*/
    v4[0] = 19; /*0x5f00a5*/
    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v4, 111, 0); /*0x5f00aa*/
    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v4, 111, 0); /*0x5f00bd*/
    v1 = MEMORY[0x887340]; /*0x5f00c7*/
    if ( MEMORY[0x887338] != -1 ) /*0x5f00d0*/
      v1 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5f00e2*/
    while ( 1 ) /*0x5f00e4*/
    {
      LOBYTE(v0) = MEMORY[0x887338]; /*0x5f00e4*/
      v2 = MEMORY[0x887340]; /*0x5f00e9*/
      if ( MEMORY[0x887338] != -1 ) /*0x5f00f2*/
      {
        v0 = Timer::GetTicks() - MEMORY[0x887338]; /*0x5f00fe*/
        v2 += v0; /*0x5f0104*/
      }
      if ( (unsigned int)(v2 - v1) >= 0x1E ) /*0x5f010b*/
        break; /*0x5f010b*/
      Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5f0112*/
    }
  }
  return v0; /*0x5f0119*/
}
}
} // namespace gamemd

// 0x5F0180
namespace gamemd {
char HandlePlayerDisconnection(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall HandlePlayerDisconnection(int a1, int a2)
{
  char result; // al
  int v3; // edi
  wchar_t *StringCSF; // eax
  wchar_t *v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  CampaignScore *v11; // [esp+0h] [ebp-A4h]
  wchar_t String[80]; // [esp+4h] [ebp-A0h] BYREF

  result = HouseClass_Player.__pad_5568[8856]; /*0x5f0180*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8856] != 1 ) /*0x5f018f*/
  {
    result = (char)HouseClass_Array; /*0x5f0195*/
    v3 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * a1]; /*0x5f019a*/
    if ( v3 ) /*0x5f019f*/
    {
      result = *(_BYTE *)(v3 + 492); /*0x5f01a5*/
      if ( result ) /*0x5f01ad*/
      {
        String[0] = 0; /*0x5f01b6*/
        if ( a2 == -1 ) /*0x5f01bd*/
        {
          ObjectClass::FreeResources((int)&HouseClass_Player.__pad_5568[22460]); /*0x5f0227*/
        }
        else if ( a2 ) /*0x5f01c1*/
        {
          if ( a2 == 1 ) /*0x5f01c6*/
          {
            StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[76], 0, &stru_830620.__pad_14B0[948], 6412); /*0x5f01e0*/
            swprintf(String, (const size_t)StringCSF, (const wchar_t *const)(v3 + 90154), v11); /*0x5f01eb*/
          }
        }
        else
        {
          v5 = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[36], 0, &stru_830620.__pad_14B0[948], 6416); /*0x5f020d*/
          swprintf(String, (const size_t)v5, (const wchar_t *const)(v3 + 90154), v11); /*0x5f0218*/
        }
        if ( wcslen(String) ) /*0x5f0231*/
        {
          v6 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5312) * 900.0); /*0x5f0250*/
          MessageListClass::AddMessage( /*0x5f0273*/
            &HouseClass_Player.__pad_5568[10668],
            0,
            0,
            (CellStruct *)String,
            *(_DWORD *)(*(_DWORD *)(v3 + 52) + 192),
            (IUnknown *)0x4046,
            v6,
            0);
          MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 0); /*0x5f027f*/
        }
        v7 = 0; /*0x5f028b*/
        if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x5f028f*/
        {
          while ( _wcsicmp( /*0x5f02b0*/
                    *(const wchar_t **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v7),
                    (const wchar_t *)(v3 + 90154)) )
          {
            if ( ++v7 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x5f02ba*/
              goto LABEL_20; /*0x5f02ba*/
          }
          __3_YAXPAX_Z(*(void **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v7)); /*0x5f02c7*/
          v8 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368] + 16))( /*0x5f02e3*/
                 &HouseClass_Player.__pad_5568[18368],
                 *(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v7);
          if ( v8 != -1 && v8 < *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x5f02f3*/
          {
            --*(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5f02f8*/
            for ( ; /*0x5f02fe*/
                  v8 < *(int *)&HouseClass_Player.__pad_5568[18384];
                  *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v8 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v8) )
            {
              ++v8; /*0x5f0306*/
            }
          }
        }
LABEL_20:
        HouseClass::AIBuildBase((#375 *)v3); /*0x5f0318*/
        result = HouseClass_Player.__pad_5568[8856] - 1; /*0x5f0324*/
        if ( --*(_DWORD *)&HouseClass_Player.__pad_5568[8856] == 1 ) /*0x5f032f*/
        {
          v9 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[976], 0, &stru_830620.__pad_14B0[948], 6453); /*0x5f0342*/
          swprintf(String, (const size_t)&off_8240B4, v9, v11); /*0x5f0352*/
          v10 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5312) * 900.0); /*0x5f036e*/
          MessageListClass::AddMessage( /*0x5f0391*/
            &HouseClass_Player.__pad_5568[10668],
            0,
            0,
            (CellStruct *)String,
            *(_DWORD *)(*(_DWORD *)(v3 + 52) + 192),
            (IUnknown *)0x4046,
            v10,
            0);
          return MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 0); /*0x5f039d*/
        }
      }
    }
  }
  return result; /*0x5f03a2*/
}
}
} // namespace gamemd

// 0x5F2CE0
namespace gamemd {
int WaitModemConnection()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __userpurge WaitModemConnection@<eax>(int a1@<ecx>, int a2@<edi>, char a3)
{
  int v3; // ebp
  wchar_t *StringCSF; // eax
  ObjectClass *v5; // esi
  char v6; // bl
  wchar_t *v7; // eax
  HWND MessageBox; // eax
  int v9; // esi
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  WinModemClass *v14; // ecx
  wchar_t *v15; // [esp-Ah] [ebp-11Ch]
  wchar_t *v16; // [esp-Ah] [ebp-11Ch]
  int v17; // [esp+6h] [ebp-10Ch]
  char v18; // [esp+19h] [ebp-F9h]
  VectorClass *Buffer; // [esp+1Ah] [ebp-F8h] BYREF
  HWND v20; // [esp+1Eh] [ebp-F4h]
  HWND hWnd; // [esp+22h] [ebp-F0h]
  _BYTE Source[236]; // [esp+26h] [ebp-ECh] BYREF

  v18 = HIBYTE(a1); /*0x5f2cf2*/
  v3 = 3; /*0x5f2cfb*/
  if ( a3 == 1 ) /*0x5f2d00*/
    StringCSF = GetStringCSF( /*0x5f2d13*/
                  (wchar_t *)&stru_830620.__pad_14B0[3868],
                  0,
                  (CampaignScore *)&stru_830620.__pad_14B0[3168],
                  1580);
  else
    StringCSF = GetStringCSF( /*0x5f2d26*/
                  (wchar_t *)&stru_830620.__pad_14B0[3844],
                  0,
                  (CampaignScore *)&stru_830620.__pad_14B0[3168],
                  1582);
  v5 = (ObjectClass *)StringCSF; /*0x5f2d30*/
  Debug::Log(); /*0x5f2d32*/
  v6 = 1; /*0x5f2d41*/
  *((_BYTE *)&g_MatrixTransformState + 9524) = 0; /*0x5f2d52*/
  v7 = GetStringCSF(g_Str_TXT_CANCEL, 0, (CampaignScore *)&stru_830620.__pad_14B0[3168], 1589); /*0x5f2d59*/
  MessageBox = CreateMessageBox((LPARAM)v5, (LPARAM)v7, (LONG)(&g_MatrixTransformState + 2381)); /*0x5f2d62*/
  v20 = MessageBox; /*0x5f2d69*/
  if ( !MessageBox ) /*0x5f2d6d*/
    return 3; /*0x5f3155*/
  Dialog::Show(MessageBox); /*0x5f2d76*/
  (*(void (__thiscall **)(WinModemClass *, int (*)(), int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 + 36))( /*0x5f2d88*/
    g_ClipboardBuffer,
    PumpEventLoop,
    a2);
  *((_BYTE *)&g_MatrixTransformState + 9524) = 0; /*0x5f2d8b*/
  v9 = 3600; /*0x5f2d92*/
  while ( 1 )
  {
    if ( Dialog::PumpMessages() == 1 || *((_BYTE *)&g_MatrixTransformState + 9524) ) /*0x5f2dab*/
    {
      v3 = 6; /*0x5f30f5*/
      Debug::Log(); /*0x5f30fa*/
      v14 = g_ClipboardBuffer; /*0x5f30ff*/
      if ( !g_ClipboardBuffer ) /*0x5f310a*/
        goto LABEL_36; /*0x5f310a*/
      goto LABEL_35; /*0x5f310a*/
    }
    ScreenSaver::Process(0, v6, v3); /*0x5f2db3*/
    memset(Source, 0, 0xF0u); /*0x5f2dc3*/
    v9 = (*(int (__thiscall **)(WinModemClass *, int, _BYTE *, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 + 20))(
           g_ClipboardBuffer,
           v9,
           Source,
           81,
           v18 != 0 ? 15 : -1);
    Debug::Log(); /*0x5f2ded*/
    if ( v9 == -1000 ) /*0x5f2dfb*/
    {
      v3 = 6; /*0x5f30c0*/
      Debug::Log(); /*0x5f30c5*/
      v14 = g_ClipboardBuffer; /*0x5f30ca*/
      if ( !g_ClipboardBuffer ) /*0x5f30d5*/
        goto LABEL_36; /*0x5f30d5*/
LABEL_35:
      BYTE2(Buffer) = 0; /*0x5f310c*/
      LOWORD(Buffer) = *(_WORD *)&stru_830620.__pad_14B0[3280]; /*0x5f3118*/
      WinModemClass::WriteSerial((int)v14, &Buffer, (WinModemClass *)2); /*0x5f3124*/
      goto LABEL_36; /*0x5f3124*/
    }
    _strupr(Source); /*0x5f2e06*/
    if ( strlen(Source) ) /*0x5f2e0f*/
      Debug::Log(); /*0x5f2e28*/
    if ( !strncmp((AnimClass *)Source, &stru_830620.__pad_14B0[3744], 4u) ) /*0x5f2e3c*/
    {
      Debug::Log(); /*0x5f2e4d*/
      v10 = GetStringCSF( /*0x5f2e66*/
              (wchar_t *)&stru_830620.__pad_14B0[3720],
              0,
              (CampaignScore *)&stru_830620.__pad_14B0[3168],
              1647);
      Network_Start(hWnd, (LPARAM)v10); /*0x5f2e71*/
      Debug::Log(); /*0x5f2e7b*/
      WinModemClass::WriteSerial( /*0x5f2e9e*/
        (int)g_ClipboardBuffer,
        &stru_830620.__pad_14B0[3692],
        (WinModemClass *)strlen(&stru_830620.__pad_14B0[3692]));
      v18 = 1; /*0x5f2ea7*/
      v9 = (int)Buffer[2].Items; /*0x5f2eac*/
      goto LABEL_22; /*0x5f2eaf*/
    }
    if ( strstr((ObjectClass *)Source, &stru_830620.__pad_14B0[3684]) ) /*0x5f2ebe*/
    {
      memset(&g_MatrixTransformState + 2334, 0, 0x50u); /*0x5f2ed8*/
      strncpy((char *)&g_MatrixTransformState + 9336, Source, (IUnknown *)0x4F); /*0x5f2ee4*/
      v3 = 0; /*0x5f2eed*/
      Debug::Log(); /*0x5f2ef5*/
    }
    else if ( !strncmp((AnimClass *)Source, &stru_830620.__pad_14B0[3308], 4u) ) /*0x5f2f0e*/
    {
      v3 = 2; /*0x5f2f1e*/
      Debug::Log(); /*0x5f2f29*/
    }
    else if ( !strncmp((AnimClass *)Source, &stru_830620.__pad_14B0[3300], 4u) ) /*0x5f2f42*/
    {
      v3 = 1; /*0x5f2f52*/
      Debug::Log(); /*0x5f2f5d*/
    }
    else
    {
      if ( strncmp((AnimClass *)Source, &stru_830620.__pad_14B0[3284], 4u) ) /*0x5f2f73*/
        goto LABEL_22; /*0x5f2f7d*/
      v3 = 3; /*0x5f2f83*/
      Debug::Log(); /*0x5f2f8e*/
      v20 = (HWND)&stru_82083C; /*0x5f2f9d*/
      v15 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620.__pad_14B0[3168], 1671); /*0x5f2fba*/
      v11 = GetStringCSF( /*0x5f2fcc*/
              (wchar_t *)&stru_830620.__pad_14B0[3652],
              0,
              (CampaignScore *)&stru_830620.__pad_14B0[3168],
              1671);
      Dialog::ShowMessageBox((int)v11, v15, 0, 0, 0, v17); /*0x5f2fd6*/
    }
    v6 = 0; /*0x5f2fdb*/
LABEL_22:
    if ( v9 <= 0 ) /*0x5f2fdf*/
      break; /*0x5f2fdf*/
LABEL_25:
    if ( v6 != 1 ) /*0x5f2ff1*/
      goto LABEL_36; /*0x5f2ff1*/
  }
  if ( !v18 ) /*0x5f2fe7*/
  {
    v9 = 3600; /*0x5f2fe9*/
    goto LABEL_25; /*0x5f2fe9*/
  }
  if ( (*(char (__thiscall **)(WinModemClass *))(*(_DWORD *)g_ClipboardBuffer->__pad_0 + 12))(g_ClipboardBuffer) >= 0 ) /*0x5f3009*/
  {
    Debug::Log(); /*0x5f3038*/
    if ( strlen(Source) ) /*0x5f3041*/
      Debug::Log(); /*0x5f305a*/
    v20 = (HWND)&stru_82083C; /*0x5f3079*/
    v16 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620.__pad_14B0[3168], 1687); /*0x5f3086*/
    v12 = GetStringCSF( /*0x5f3098*/
            (wchar_t *)&stru_830620.__pad_14B0[1156],
            0,
            (CampaignScore *)&stru_830620.__pad_14B0[3168],
            1687);
    Dialog::ShowMessageBox((int)v12, v16, 0, 0, 0, v17); /*0x5f30a2*/
    Debug::Log(); /*0x5f30ac*/
    v3 = 5; /*0x5f30b4*/
  }
  else
  {
    sprintf( /*0x5f301a*/
      (char *const)&g_MatrixTransformState + 9336,
      (ObjectClass *)&stru_830620.__pad_14B0[3636],
      (INIClass *)&stru_830620.__pad_14B0[3640]);
    v3 = 0; /*0x5f3024*/
    Debug::Log(); /*0x5f3026*/
  }
LABEL_36:
  (*(void (__thiscall **)(WinModemClass *, _DWORD))(*(_DWORD *)g_ClipboardBuffer->__pad_0 + 36))(g_ClipboardBuffer, 0); /*0x5f3129*/
  *((_BYTE *)&g_MatrixTransformState + 9524) = 0; /*0x5f313a*/
  Dialog::Destroy((SkirmishDialog *)v20); /*0x5f3141*/
  return v3; /*0x5f3149*/
}
}
} // namespace gamemd

// 0x5F33B0
namespace gamemd {
int sub_5F33B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5F33B0()
{
  unsigned __int16 v0; // ax
  int v1; // esi

  Event::Dispatch(); /*0x5f33b1*/
  MessageLoop(); /*0x5f33b6*/
  v0 = EventQueue::Process(MEMORY[0x87F770]); /*0x5f33c1*/
  v1 = v0; /*0x5f33c9*/
  if ( !v0 )
    return MEMORY[0xAC1344] != 0 ? 0xFFFFFC18 : 0;
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x5f33d7*/
  if ( v1 != 27 )
    return MEMORY[0xAC1344] != 0 ? 0xFFFFFC18 : 0;
  MEMORY[0xAC1344] = 1; /*0x5f33e1*/
  return -1000; /*0x5f33ed*/
}
}
} // namespace gamemd

// 0x5F66A0
namespace gamemd {
unsigned int * sub_5F66A0(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall sub_5F66A0(_DWORD *a1, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // ebp
  int *v9; // ebp
  int v10; // edx
  int v11; // edi
  bool v12; // zf
  _DWORD *v14; // [esp+10h] [ebp-28h]
  int v15; // [esp+14h] [ebp-24h]

  v2 = *(_DWORD *)(a2 + 16); /*0x5f66a7*/
  v3 = 0; /*0x5f66ae*/
  v4 = 0; /*0x5f66b0*/
  v5 = 0; /*0x5f66b2*/
  v6 = 0; /*0x5f66b4*/
  if ( v2 > 0 ) /*0x5f66bc*/
  {
    v7 = *(_DWORD *)(a2 + 4); /*0x5f66c2*/
    v3 = *(_DWORD *)(*(_DWORD *)v7 + 156); /*0x5f66d0*/
    v4 = *(_DWORD *)(*(_DWORD *)v7 + 160); /*0x5f66d9*/
    if ( v2 - 1 < 0 ) /*0x5f66f5*/
    {
      v5 = 0; /*0x5f6762*/
    }
    else
    {
      v5 = 0; /*0x5f66f7*/
      v8 = (_DWORD *)(v7 + 4 * (v2 - 1)); /*0x5f66fb*/
      v14 = v8; /*0x5f6700*/
      v15 = *(_DWORD *)(a2 + 16); /*0x5f6704*/
      do /*0x5f675e*/
      {
        v9 = (int *)(*v8 + 156); /*0x5f6711*/
        v10 = *v9; /*0x5f6713*/
        v11 = v9[1]; /*0x5f6718*/
        if ( *v9 < v3 ) /*0x5f6722*/
        {
          v5 += v3 - v10; /*0x5f6726*/
          v3 = *v9; /*0x5f6728*/
        }
        if ( v11 < v4 ) /*0x5f672c*/
        {
          v6 += v4 - v11; /*0x5f6730*/
          v4 = v9[1]; /*0x5f6732*/
        }
        if ( v10 > v5 + v3 ) /*0x5f6739*/
          v5 = v10 - v3; /*0x5f673d*/
        if ( v11 > v6 + v4 ) /*0x5f6744*/
          v6 = v11 - v4; /*0x5f6748*/
        v8 = v14 - 1; /*0x5f6752*/
        v12 = v15 == 1; /*0x5f6755*/
        --v14; /*0x5f6756*/
        --v15; /*0x5f675a*/
      }
      while ( !v12 ); /*0x5f675e*/
    }
  }
  *a1 = v3; /*0x5f676c*/
  a1[1] = v4; /*0x5f676e*/
  a1[2] = v5; /*0x5f6771*/
  a1[3] = v6; /*0x5f6774*/
  return a1; /*0x5f6777*/
}
}
} // namespace gamemd

// 0x5FBEF0
namespace gamemd {
char sub_5FBEF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_5FBEF0()
{
  HWND Dialog; // esi
  int v1; // ecx
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  dwNewLong = -1; /*0x5fbefe*/
  Dialog = (HWND)CreateDialog(0xA3u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))HotkeyOptions::DlgProc, 0); /*0x5fbf0b*/
  if ( Dialog ) /*0x5fbf0f*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x5fbf19*/
    Dialog::Show(Dialog); /*0x5fbf21*/
    while ( dwNewLong < 0 ) /*0x5fbf2c*/
    {
      if ( Dialog::PumpMessages() == 1 ) /*0x5fbf35*/
        dwNewLong = 2; /*0x5fbf37*/
      if ( !MEMORY[0xA8E9A0] ) /*0x5fbf46*/
      {
        LOBYTE(v1) = 0; /*0x5fbf48*/
        ScreenSaver::Process(v1); /*0x5fbf4a*/
      }
    }
    Dialog::Destroy(Dialog); /*0x5fbf59*/
  }
  return 1; /*0x5fbf60*/
}
}
} // namespace gamemd

// 0x5FDD20
namespace gamemd {
int FindBuildingByTiberiumType(IUnknown * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall FindBuildingByTiberiumType(IUnknown *aP0)
{
  int v1; // eax
  int v2; // ebx
  int **v3; // edi
  int *v4; // eax
  int v5; // edx
  int v6; // esi
  _BYTE v8[49]; // [esp-34h] [ebp-48h] BYREF
  int v9; // [esp+10h] [ebp-4h]

  if ( aP0 == (IUnknown *)-1 ) /*0x5fdd28*/
    return -1; /*0x5fdd28*/
  v1 = *(_DWORD *)(HouseClass_Player.field_38 + 4 * (_DWORD)aP0); /*0x5fdd33*/
  v9 = v1; /*0x5fdd36*/
  if ( !*(_BYTE *)(v1 + 681) ) /*0x5fdd3a*/
    return -1; /*0x5fddd8*/
  v2 = 0; /*0x5fdd4e*/
  if ( *(int *)&stru_B05488.__pad_579C[18644] <= 0 ) /*0x5fdd52*/
  {
LABEL_11:
    qmemcpy(v8, (const void *)(v1 + 100), sizeof(v8)); /*0x5fdda4*/
    Debug::Log(); /*0x5fddb9*/
    return 0; /*0x5fddc1*/
  }
  else
  {
    v3 = *(int ***)&stru_B05488.__pad_579C[18632]; /*0x5fdd54*/
    while ( 1 ) /*0x5fdd5a*/
    {
      v4 = *v3; /*0x5fdd5a*/
      v5 = *(_DWORD *)((*v3)[56] + 660); /*0x5fdd62*/
      if ( (int)aP0 >= v5 && (int)aP0 < v5 + v4[58] ) /*0x5fdd76*/
        break; /*0x5fdd76*/
      v6 = v4[58]; /*0x5fdd78*/
      if ( (int)aP0 >= v6 + v5 && (int)aP0 < v5 + v6 + v4[59] ) /*0x5fdd91*/
        break; /*0x5fdd91*/
      ++v2; /*0x5fdd98*/
      ++v3; /*0x5fdd99*/
      if ( v2 >= *(int *)&stru_B05488.__pad_579C[18644] ) /*0x5fdd9e*/
      {
        v1 = v9; /*0x5fdda0*/
        goto LABEL_11; /*0x5fdda0*/
      }
    }
    return v4[38]; /*0x5fddc9*/
  }
}
}
} // namespace gamemd

// 0x5FDDF0
namespace gamemd {
void sub_5FDDF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5FDDF0()
{
  int v0; // esi
  int v1; // eax
  int v2; // ecx
  int v3; // eax
  int i; // edi
  _BYTE *v5; // esi
  void **v6; // [esp+Ch] [ebp-18h] BYREF
  void *Block; // [esp+10h] [ebp-14h]
  int v8; // [esp+14h] [ebp-10h]
  char v9; // [esp+18h] [ebp-Ch]
  char v10; // [esp+19h] [ebp-Bh]
  int v11; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+20h] [ebp-4h]

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5fddfb*/
  v0 = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5fde0a*/
  v1 = 0; /*0x5fde0e*/
  v2 = 1000; /*0x5fde10*/
  Block = 0; /*0x5fde17*/
  v8 = 0; /*0x5fde1b*/
  v9 = 1; /*0x5fde1f*/
  v10 = 0; /*0x5fde24*/
  v6 = &vt_DynamicVectorClass_CellClass; /*0x5fde28*/
  v11 = 0; /*0x5fde30*/
  v12 = 1000; /*0x5fde34*/
  if ( v0 ) /*0x5fde38*/
  {
    while ( 1 ) /*0x5fde47*/
    {
      if ( *(_DWORD *)(v0 + 68) == 126 ) /*0x5fde4b*/
      {
        if ( *(_BYTE *)(v0 + 286) >= 0x30u /*0x5fde76*/
          && (v11 < v1
           || (v10 || !v1) && v2 > 0 && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v6[2])(&v6, v2 + v1, 0)) )
        {
          v3 = v11++; /*0x5fde81*/
          *((_DWORD *)Block + v3) = v0; /*0x5fde8c*/
        }
        *(_DWORD *)(v0 + 68) = -1; /*0x5fde8f*/
        *(_BYTE *)(v0 + 286) = 0; /*0x5fde92*/
      }
      v0 = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5fdea2*/
      if ( !v0 ) /*0x5fdea6*/
        break; /*0x5fdea6*/
      v1 = v8; /*0x5fde3f*/
      v2 = v12; /*0x5fde43*/
    }
  }
  for ( i = v11 - 1; i >= 0; --i ) /*0x5fdeb1*/
  {
    v5 = (_BYTE *)*((_DWORD *)Block + i); /*0x5fdeb7*/
    if ( BuildingClass::CheckAdjacentCells((int)v5) ) /*0x5fdebc*/
      BuildingClass::VisualizePlacement(v5); /*0x5fdec7*/
  }
  v6 = &vt_VectorClass_CellClass; /*0x5fded3*/
  if ( Block ) /*0x5fdedd*/
  {
    if ( v10 ) /*0x5fdee3*/
      __3_YAXPAX_Z(Block); /*0x5fdee6*/
  }
}
}
} // namespace gamemd

// 0x5FE620
namespace gamemd {
int BuildingTypeClass_LoadSHPs(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall BuildingTypeClass_LoadSHPs(int a1)
{
  int result; // eax
  int v2; // ebp
  int v4; // esi
  char v5; // al
  int v6; // eax
  int v7; // eax
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  result = MEMORY[0xA83D90]; /*0x5fe620*/
  v2 = 0; /*0x5fe62f*/
  if ( MEMORY[0xA83D90] > 0 ) /*0x5fe636*/
  {
    while ( 1 ) /*0x5fe642*/
    {
      v4 = *((_DWORD *)MEMORY[0xA83D84] + v2); /*0x5fe642*/
      v5 = *(_BYTE *)(v4 + 556); /*0x5fe64d*/
      if ( *(_BYTE *)(v4 + 687) ) /*0x5fe645*/
      {
        if ( (v5 || *(_BYTE *)(v4 + 567)) && *(_DWORD *)(v4 + 164) && *(_BYTE *)(v4 + 168) ) /*0x5fe737*/
        {
          __3_YAXPAX_Z(*(void **)(v4 + 164)); /*0x5fe740*/
          *(_DWORD *)(v4 + 164) = 0; /*0x5fe748*/
          *(_BYTE *)(v4 + 168) = 0; /*0x5fe74e*/
        }
        goto LABEL_14; /*0x5fe74e*/
      }
      if ( !v5 ) /*0x5fe65b*/
        break; /*0x5fe65b*/
      _makepath(Buffer, 0, 0, (const char *)(v4 + 504), (const char *)&off_7E1BC6 + 112 * a1); /*0x5fe67e*/
      v6 = SearchMIXFile(Buffer, 1); /*0x5fe68c*/
      *(_DWORD *)(v4 + 164) = v6; /*0x5fe693*/
      if ( !v6 ) /*0x5fe699*/
        goto LABEL_5; /*0x5fe699*/
LABEL_14:
      result = MEMORY[0xA83D90]; /*0x5fe754*/
      if ( ++v2 >= MEMORY[0xA83D90] ) /*0x5fe75c*/
        return result; /*0x5fe75c*/
    }
    if ( !*(_BYTE *)(v4 + 567) ) /*0x5fe6be*/
      goto LABEL_14; /*0x5fe6be*/
    _makepath(Buffer, 0, 0, (const char *)(v4 + 504), Ext); /*0x5fe6dd*/
    TheaterObjectTypeClassSpecificID(Buffer, a1); /*0x5fe6eb*/
    v7 = SearchMIXFile(Buffer, 1); /*0x5fe6f6*/
    *(_DWORD *)(v4 + 164) = v7; /*0x5fe6fd*/
    if ( v7 ) /*0x5fe703*/
      goto LABEL_14; /*0x5fe703*/
LABEL_5:
    ObjectTypeClass::SetRTTI71(Buffer); /*0x5fe69f*/
    *(_DWORD *)(v4 + 164) = SearchMIXFile(Buffer, 1); /*0x5fe6b3*/
    goto LABEL_14; /*0x5fe6b9*/
  }
  return result; /*0x5fe763*/
}
}
} // namespace gamemd

// 0x5FF390
namespace gamemd {
void sub_5FF390()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5FF390()
{
  int i; // edi
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // [esp+4h] [ebp-4h] BYREF

  for ( i = MEMORY[0xAC1688] - 1; i >= 0; --i ) /*0x5ff39c*/
  {
    v1 = (_DWORD *)*((_DWORD *)MEMORY[0xAC167C] + i); /*0x5ff3a5*/
    v2 = v1[3] + 8; /*0x5ff3ae*/
    v1[3] = v2; /*0x5ff3b0*/
    if ( v2 >= 80 && v1 ) /*0x5ff3ba*/
    {
      v4 = v1; /*0x5ff3cb*/
      v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xAC1678] + 16))(&MEMORY[0xAC1678], &v4); /*0x5ff3cf*/
      if ( v3 != -1 && v3 < MEMORY[0xAC1688] && v3 < --MEMORY[0xAC1688] ) /*0x5ff3ea*/
      {
        do /*0x5ff402*/
        {
          ++v3; /*0x5ff3f2*/
          *((_DWORD *)MEMORY[0xAC167C] + v3 - 1) = *((_DWORD *)MEMORY[0xAC167C] + v3); /*0x5ff3f6*/
        }
        while ( v3 < MEMORY[0xAC1688] ); /*0x5ff402*/
      }
      __3_YAXPAX_Z(v1); /*0x5ff405*/
    }
  }
}
}
} // namespace gamemd

// 0x5FF420
namespace gamemd {
char * GenerateRangeRingTextures()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *GenerateRangeRingTextures()
{
  int v0; // ebx
  int *v1; // ebp
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // esi
  int v5; // edi
  int v6; // eax
  int j; // esi
  int v8; // ecx
  _DWORD *v9; // edi
  int v10; // ebp
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  int v13; // eax
  int k; // esi
  int v15; // ecx
  char *result; // eax
  unsigned __int16 v17; // cx
  int v18; // [esp+2Eh] [ebp-54h] BYREF
  int i; // [esp+32h] [ebp-50h]
  int v20; // [esp+36h] [ebp-4Ch]
  int v21; // [esp+3Eh] [ebp-44h] BYREF
  int v22; // [esp+42h] [ebp-40h] BYREF
  int v23; // [esp+46h] [ebp-3Ch]
  int v24; // [esp+4Ah] [ebp-38h]
  int v25; // [esp+4Eh] [ebp-34h]
  int v26; // [esp+52h] [ebp-30h] BYREF
  int v27; // [esp+56h] [ebp-2Ch]
  int v28; // [esp+5Ah] [ebp-28h]
  int v29; // [esp+5Eh] [ebp-24h]
  int v30[3]; // [esp+62h] [ebp-20h] BYREF
  int v31; // [esp+6Eh] [ebp-14h]
  int v32; // [esp+72h] [ebp-10h]
  _DWORD v33[3]; // [esp+76h] [ebp-Ch] BYREF

  v0 = 0; /*0x5ff429*/
  if ( !MEMORY[0xAC1834] ) /*0x5ff430*/
  {
    v1 = MEMORY[0xAC1698]; /*0x5ff43b*/
    for ( i = 1; i < 129; i += 2 ) /*0x5ff440*/
    {
      if ( !*v1 ) /*0x5ff444*/
      {
        v2 = __2_YAPAXI_Z(0x20u); /*0x5ff44b*/
        v3 = v2; /*0x5ff450*/
        if ( v2 ) /*0x5ff457*/
        {
          Surface::Construct(v2, 256, 128); /*0x5ff465*/
          v3[3] = 0; /*0x5ff46d*/
          *v3 = &XSurface_Vtable; /*0x5ff476*/
          v3[4] = 1; /*0x5ff47c*/
          Buffer::Init(v3 + 5, 0, 0x8000); /*0x5ff47f*/
          *v3 = &BSurface_Vtable; /*0x5ff484*/
        }
        else
        {
          v3 = 0; /*0x5ff48c*/
        }
        *v1 = (int)v3; /*0x5ff48e*/
      }
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)*v1 + 24))(*v1, 0); /*0x5ff497*/
      Surface::Construct(v30, 256, 256); /*0x5ff4a8*/
      v31 = 0; /*0x5ff4b1*/
      v30[0] = (int)&XSurface_Vtable; /*0x5ff4bb*/
      v32 = 1; /*0x5ff4c3*/
      Buffer::Init(v33, 0, 0x10000); /*0x5ff4c7*/
      v30[0] = (int)&BSurface_Vtable; /*0x5ff4d0*/
      XSurface::Fill(v30, 0); /*0x5ff4d9*/
      v4 = i; /*0x5ff4de*/
      if ( i > 0 ) /*0x5ff4e6*/
      {
        v5 = 12; /*0x5ff4e8*/
        do /*0x5ff52d*/
        {
          v6 = v5; /*0x5ff4f3*/
          if ( v5 > 255 ) /*0x5ff4f5*/
            v6 = 255; /*0x5ff4f7*/
          Draw::Ellipse(v30, 128, 128, v4, 0, 0, 255, 255, v6); /*0x5ff520*/
          v4 -= 2; /*0x5ff525*/
          v5 += 4; /*0x5ff528*/
        }
        while ( v4 > 0 ); /*0x5ff52d*/
      }
      for ( j = 0; j < 128; ++j ) /*0x5ff534*/
      {
        v8 = *v1; /*0x5ff536*/
        v23 = 2 * j; /*0x5ff53c*/
        v22 = 0; /*0x5ff551*/
        v24 = 255; /*0x5ff555*/
        v25 = 1; /*0x5ff559*/
        v26 = 0; /*0x5ff55d*/
        v27 = j; /*0x5ff561*/
        v28 = 255; /*0x5ff565*/
        v29 = 1; /*0x5ff569*/
        (*(void (__thiscall **)(int, int *, int *, int *, _DWORD, int))(*(_DWORD *)v8 + 8))(v8, &v26, v30, &v22, 0, 1); /*0x5ff574*/
      }
      Vector::Clear((int)v33); /*0x5ff584*/
      ++v1; /*0x5ff58d*/
      v30[0] = (int)&Surface_Vtable; /*0x5ff593*/
    }
    i = 0; /*0x5ff5aa*/
    v9 = &MEMORY[0xAC1798]; /*0x5ff5ae*/
    v10 = 128; /*0x5ff5b3*/
    do /*0x5ff721*/
    {
      if ( !*v9 ) /*0x5ff5b8*/
      {
        v11 = __2_YAPAXI_Z(0x20u); /*0x5ff5be*/
        v12 = v11; /*0x5ff5c3*/
        if ( v11 ) /*0x5ff5ca*/
        {
          Surface::Construct(v11, 256, 128); /*0x5ff5d8*/
          v12[3] = 0; /*0x5ff5e0*/
          *v12 = &XSurface_Vtable; /*0x5ff5e9*/
          v12[4] = 1; /*0x5ff5ef*/
          Buffer::Init(v12 + 5, 0, 0x8000); /*0x5ff5f6*/
          *v12 = &BSurface_Vtable; /*0x5ff5fb*/
        }
        else
        {
          v12 = 0; /*0x5ff603*/
        }
        *v9 = v12; /*0x5ff605*/
      }
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*v9 + 24))(*v9, 0); /*0x5ff60c*/
      Surface::Construct(v30, 256, 256); /*0x5ff61d*/
      v31 = 0; /*0x5ff626*/
      v30[0] = (int)&XSurface_Vtable; /*0x5ff630*/
      v32 = 1; /*0x5ff638*/
      Buffer::Init(v33, 0, 0x10000); /*0x5ff640*/
      v30[0] = (int)&BSurface_Vtable; /*0x5ff649*/
      XSurface::Fill(v30, 0); /*0x5ff652*/
      v20 = 60 * MEMORY[0x8871E0]->BuildWeapons[0]; /*0x5ff684*/
      v13 = Math::RoundToInt((double)v20 * -0.002790178571428571); /*0x5ff692*/
      Draw::Ellipse(v30, 128, 128, i - v13, 0, 0, 255, 255, v10); /*0x5ff6a9*/
      for ( k = 0; k < 128; ++k ) /*0x5ff6ae*/
      {
        v29 = 1; /*0x5ff6ba*/
        v25 = 1; /*0x5ff6be*/
        v28 = 255; /*0x5ff6c9*/
        v24 = 255; /*0x5ff6cd*/
        v15 = *v9; /*0x5ff6d1*/
        v26 = 0; /*0x5ff6db*/
        v27 = 2 * k; /*0x5ff6df*/
        v22 = 0; /*0x5ff6e3*/
        v23 = k; /*0x5ff6e7*/
        (*(void (__thiscall **)(int, int *, int *, int *, _DWORD, int))(*(_DWORD *)v15 + 8))(v15, &v22, v30, &v26, 0, 1); /*0x5ff6f2*/
      }
      Vector::Clear((int)v33); /*0x5ff702*/
      v10 -= 6; /*0x5ff70b*/
      ++v9; /*0x5ff70f*/
      v30[0] = (int)&Surface_Vtable; /*0x5ff715*/
      ++i; /*0x5ff71d*/
    }
    while ( v10 > 68 ); /*0x5ff721*/
    MEMORY[0xAC1834] = 1; /*0x5ff727*/
  }
  MEMORY[0x833588] = DDraw::GetStatus(); /*0x5ff73d*/
  v21 = 5; /*0x5ff742*/
  HIBYTE(v18) = 0; /*0x5ff74a*/
  result = GetVersionString(&v21, (_BYTE *)&v18 + 3, 0, 0); /*0x5ff74e*/
  if ( HIBYTE(v18) && !MEMORY[0xAC1838] ) /*0x5ff763*/
  {
    MEMORY[0xAC1838] = __2_YAPAXI_Z(0x40000u); /*0x5ff776*/
    do /*0x5ff7ed*/
    {
      BYTE1(v20) = (unsigned __int8)((unsigned __int16)v0 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x5ff7aa*/
      LOBYTE(v17) = 0; /*0x5ff7bb*/
      HIBYTE(v17) = (unsigned __int8)((unsigned __int16)v0 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x5ff7bd*/
      BYTE2(v20) = (unsigned __int8)((unsigned __int16)v0 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x5ff7bf*/
      result = (char *)BYTE2(v20); /*0x5ff7dc*/
      *((_DWORD *)MEMORY[0xAC1838] + v0++) = BYTE2(v20) | ((BYTE1(v20) | v17) << 8); /*0x5ff7e3*/
    }
    while ( v0 < 0x10000 ); /*0x5ff7ed*/
  }
  return result; /*0x5ff7ef*/
}
}
} // namespace gamemd

// 0x5F1350
namespace gamemd {
int StringBuilder_AppendChar(char a1)
{
{
    int result;
    result = DataGlobal_A8EA84;
    if ( DataGlobal_A8EA84 < DataGlobal_A8EA80 - 1 )
  {
    *(char *)(DataGlobal_A8EA7C + DataGlobal_A8EA84) = a1;
    *(char *)(DataGlobal_A8EA7C + DataGlobal_A8EA84 + 1) = 0;
    return ++DataGlobal_A8EA84;
  }
    return result;
}
}
} // namespace gamemd

// 0x5F13B0
namespace gamemd {
int sub_5F13B0()
{
{
    DataGlobal_AC1278 = 0;
    DataGlobal_AC127C = 0;
    DataGlobal_AC1280 = 0;
    DataGlobal_AC1284 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5F13D0
namespace gamemd {
void sub_5F13D0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC12E0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5F1400
namespace gamemd {
void sub_5F1400()
{
{
    DataGlobal_AC1338 = DataGlobal_AC12E0 / 60.0;
}
}
} // namespace gamemd

// 0x5F1420
namespace gamemd {
void sub_5F1420()
{
{
    DataGlobal_AC1320 = 1.0 / DataGlobal_AC1338;
}
}
} // namespace gamemd

// 0x5F1440
namespace gamemd {
void sub_5F1440()
{
{
    DataGlobal_AC1318 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5F1460
namespace gamemd {
void sub_5F1460()
{
{
    DataGlobal_AC12F0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5F1480
namespace gamemd {
void sub_5F1480()
{
{
    DataGlobal_AC1270 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5F14A0
namespace gamemd {
long long sub_5F14A0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC1270 - DataGlobal_AC12F0);
    result = Math::RoundToInt(v0 * DataGlobal_AC12E0 * 0.5);
    DataGlobal_AC1340 = result;
    return result;
}
}
} // namespace gamemd

// 0x5F14E0
namespace gamemd {
void sub_5F14E0()
{
{
    DataGlobal_AC12F8 = Math::ArcTan((double)DataGlobal_AC1340 * 0.00390625);
}
}
} // namespace gamemd

// 0x5F1510
namespace gamemd {
void sub_5F1510()
{
{
    DataGlobal_AC1310 = Math::ArcTan((double)(2 * DataGlobal_AC1340) / DataGlobal_AC12E0);
}
}
} // namespace gamemd

// 0x5F1540
namespace gamemd {
long long sub_5F1540()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC1340) + 0.5);
    DataGlobal_AC1334 = result;
    return result;
}
}
} // namespace gamemd

// 0x5F1570
namespace gamemd {
int sub_5F1570()
{
{
    DataGlobal_AC12D8 = 0;
    DataGlobal_AC12DA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5F1580
namespace gamemd {
int sub_5F1580()
{
{
    DataGlobal_AC1300 = 0;
    DataGlobal_AC1304 = 0;
    DataGlobal_AC1308 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5F15A0
namespace gamemd {
int sub_5F15A0()
{
{
    DataGlobal_AC1330 = 0;
    DataGlobal_AC1328 = 128;
    DataGlobal_AC132C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5F15C0
namespace gamemd {
unsigned int * E4Recv_5F15C0::sub_5F15C0(int a2, int a3, int a4, short a5)
{
{
    this->M68 = a2;
    this->M72 = a3;
    this->M8 = a4;
    this->M76 = a5;
    this->M44 = 60;
    this->M92 = 60;
    *(void**)this = &vt_NullModemClass;
    this->M64 = -1;
    this->M56 = 0;
    this->M80 = 0;
    this->M4 = 0;
    this->M16 = 500;
    this->M12 = 0;
    this->M24 = -1;
    this->M28 = 0;
    this->M32 = 0;
    this->M36 = 3000;
    this->M40 = 1200;
    this->M48 = 43;
    this->M104 = 0;
    this->M108 = 0;
    this->M112 = 0;
    this->M60 = 0;
    this->M96 = -1;
    this->M100 = 1200;
    this->M52 = 0;
    return this;
}
}
} // namespace gamemd

// 0x5F1F20
namespace gamemd {
int E4Recv_5F1F20::sub_5F1F20()
{
{
    int v2;
    int *v3;
    int TileIndex;
    v2 = 0;
    v3 = *(int **)(this->M56 + 4);
    if ( (int)v3[10] <= 0 )
    return 0;
    while ( 1 )
  {
    TileIndex = Terrain::GetTileIndex(v3, v2);
    if ( TileIndex )
    {
    if ( !*(char *)(*(int *)(TileIndex + 20) + 2) && (*(char *)TileIndex & 2) == 0 )
    break;
    }
    ++v2;
    v3 = *(int **)(this->M56 + 4);
    if ( v2 >= v3[10] )
    return 0;
  }
    return *(int *)(TileIndex + 20);
}
}
} // namespace gamemd

// 0x5F3340
namespace gamemd {
void nullsub_28()
{
  ;
}
} // namespace gamemd

// 0x5F34D0
namespace gamemd {
int sub_5F34D0(char * String)
{
{
    int v1;
    unsigned int v2;
    v1 = 0;
    v2 = strlen(String) + 1;
    if ( (int)(v2 - 1) <= 0 )
    return atoi(String);
    while ( isdigit(String[v1]) )
  {
    if ( ++v1 >= (int)(v2 - 1) )
    return atoi(String);
  }
    return -1;
}
}
} // namespace gamemd

// 0x5F36F0
namespace gamemd {
void sub_5F36F0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC1368 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5F3720
namespace gamemd {
void sub_5F3720()
{
{
    DataGlobal_AC13C0 = DataGlobal_AC1368 / 60.0;
}
}
} // namespace gamemd

// 0x5F3740
namespace gamemd {
void sub_5F3740()
{
{
    DataGlobal_AC13A8 = 1.0 / DataGlobal_AC13C0;
}
}
} // namespace gamemd

// 0x5F3760
namespace gamemd {
void sub_5F3760()
{
{
    DataGlobal_AC13A0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5F3780
namespace gamemd {
void sub_5F3780()
{
{
    DataGlobal_AC1370 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5F37A0
namespace gamemd {
void sub_5F37A0()
{
{
    DataGlobal_AC1348 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5F37C0
namespace gamemd {
long long sub_5F37C0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC1348 - DataGlobal_AC1370);
    result = Math::RoundToInt(v0 * DataGlobal_AC1368 * 0.5);
    DataGlobal_AC13C8 = result;
    return result;
}
}
} // namespace gamemd

// 0x5F3800
namespace gamemd {
void sub_5F3800()
{
{
    DataGlobal_AC1378 = Math::ArcTan((double)DataGlobal_AC13C8 * 0.00390625);
}
}
} // namespace gamemd

// 0x5F3830
namespace gamemd {
void sub_5F3830()
{
{
    DataGlobal_AC1390 = Math::ArcTan((double)(2 * DataGlobal_AC13C8) / DataGlobal_AC1368);
}
}
} // namespace gamemd

// 0x5F3860
namespace gamemd {
long long sub_5F3860()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC13C8) + 0.5);
    DataGlobal_AC13BC = result;
    return result;
}
}
} // namespace gamemd

// 0x5F3890
namespace gamemd {
int sub_5F3890()
{
{
    DataGlobal_AC1360 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5F38A0
namespace gamemd {
int sub_5F38A0()
{
{
    DataGlobal_AC1380 = 0;
    DataGlobal_AC1384 = 0;
    DataGlobal_AC1388 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5F38C0
namespace gamemd {
int sub_5F38C0()
{
{
    DataGlobal_AC13B8 = 0;
    DataGlobal_AC13B0 = 128;
    DataGlobal_AC13B4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5F38E0
namespace gamemd {
int sub_5F38E0()
{
{
    DataGlobal_AC1350 = 0;
    DataGlobal_AC1354 = 0;
    DataGlobal_AC1358 = 0;
    DataGlobal_AC135C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5F5C10
namespace gamemd {
void nullsub_205()
{
  ;
}
} // namespace gamemd

// 0x5F6DE0
namespace gamemd {
void sub_5F6DE0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC13F0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5F6E10
namespace gamemd {
void sub_5F6E10()
{
{
    DataGlobal_AC1468 = DataGlobal_AC13F0 / 60.0;
}
}
} // namespace gamemd

// 0x5F6E30
namespace gamemd {
void sub_5F6E30()
{
{
    DataGlobal_AC1448 = 1.0 / DataGlobal_AC1468;
}
}
} // namespace gamemd

// 0x5F6E50
namespace gamemd {
void sub_5F6E50()
{
{
    DataGlobal_AC1440 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5F6E70
namespace gamemd {
void sub_5F6E70()
{
{
    DataGlobal_AC13F8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5F6E90
namespace gamemd {
void sub_5F6E90()
{
{
    DataGlobal_AC13D0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5F6EB0
namespace gamemd {
long long sub_5F6EB0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC13D0 - DataGlobal_AC13F8);
    result = Math::RoundToInt(v0 * DataGlobal_AC13F0 * 0.5);
    DataGlobal_AC1474 = result;
    return result;
}
}
} // namespace gamemd

// 0x5F6EF0
namespace gamemd {
void sub_5F6EF0()
{
{
    DataGlobal_AC1400 = Math::ArcTan((double)DataGlobal_AC1474 * 0.00390625);
}
}
} // namespace gamemd

// 0x5F6F20
namespace gamemd {
void sub_5F6F20()
{
{
    DataGlobal_AC1430 = Math::ArcTan((double)(2 * DataGlobal_AC1474) / DataGlobal_AC13F0);
}
}
} // namespace gamemd

// 0x5F6F50
namespace gamemd {
long long sub_5F6F50()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC1474) + 0.5);
    DataGlobal_AC1460 = result;
    return result;
}
}
} // namespace gamemd

// 0x5F6F80
namespace gamemd {
int sub_5F6F80()
{
{
    DataGlobal_AC13E8 = 0;
    DataGlobal_AC13EA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5F6F90
namespace gamemd {
int sub_5F6F90()
{
{
    DataGlobal_AC1408 = 0;
    DataGlobal_AC140C = 0;
    DataGlobal_AC1410 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5F6FB0
namespace gamemd {
int sub_5F6FB0()
{
{
    DataGlobal_AC1458 = 0;
    DataGlobal_AC1450 = 128;
    DataGlobal_AC1454 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5F6FD0
namespace gamemd {
int sub_5F6FD0()
{
{
    DataGlobal_AC13D8 = 0;
    DataGlobal_AC13DC = 0;
    DataGlobal_AC13E0 = 0;
    DataGlobal_AC13E4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5F6FF0
namespace gamemd {
int sub_5F6FF0()
{
{
    DataGlobal_AC141C = 0;
    DataGlobal_AC1420 = 0;
    DataGlobal_AC1424 = 1;
    DataGlobal_AC1425 = 0;
    DataGlobal_AC1418 = (int)&vt_DynamicVectorClass_ObjectTypeClass;
    DataGlobal_AC142C = 10;
    DataGlobal_AC1428 = 0;
    return atexit(sub_5F7030);
}
}
} // namespace gamemd

// 0x5F7030
namespace gamemd {
void sub_5F7030()
{
{
    if ( (DataGlobal_AC1470 & 1) == 0 )
  {
    DataGlobal_AC1418 = (int)&vt_VectorClass_ObjectTypeClass;
    DataGlobal_AC1470 |= 1u;
    if ( DataGlobal_AC141C )
    {
    if ( DataGlobal_AC1425 )
      {
    __3_YAXPAX_Z(DataGlobal_AC141C);
    DataGlobal_AC141C = 0;
      }
    }
    DataGlobal_AC1425 = 0;
    DataGlobal_AC1420 = 0;
  }
}
}
} // namespace gamemd

// 0x5F76A0
namespace gamemd {
void nullsub_207()
{
  ;
}
} // namespace gamemd

// 0x5F96B0
namespace gamemd {
void TheaterObjectTypeClassSpecificID(char * a1, int a2)
{
{
    char v2;
    char v3;
    if ( a2 != -1 )
  {
    v2 = *a1;
    v3 = *((int*)(a1) + 1);
    if ( *a1 >= 65 && v2 <= 90 )
    v2 += 32;
    if ( v3 >= 65 && v3 <= 90 )
    v3 += 32;
    if ( (v2 == 103 || v2 == 110 || v2 == 99 || v2 == 121) && (v3 == 97 || v3 == 116) )
    *((int*)(a1) + 1) = DataGlobal_7E1BCE[112 * a2];
  }
}
}
} // namespace gamemd

// 0x5FA0D0
namespace gamemd {
void sub_5FA0D0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC14B0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5FA100
namespace gamemd {
void sub_5FA100()
{
{
    DataGlobal_AC1500 = DataGlobal_AC14B0 / 60.0;
}
}
} // namespace gamemd

// 0x5FA120
namespace gamemd {
void sub_5FA120()
{
{
    DataGlobal_AC14E8 = 1.0 / DataGlobal_AC1500;
}
}
} // namespace gamemd

// 0x5FA140
namespace gamemd {
void sub_5FA140()
{
{
    DataGlobal_AC14E0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5FA160
namespace gamemd {
void sub_5FA160()
{
{
    DataGlobal_AC14B8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5FA180
namespace gamemd {
void sub_5FA180()
{
{
    DataGlobal_AC1490 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5FA1A0
namespace gamemd {
long long sub_5FA1A0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC1490 - DataGlobal_AC14B8);
    result = Math::RoundToInt(v0 * DataGlobal_AC14B0 * 0.5);
    DataGlobal_AC1508 = result;
    return result;
}
}
} // namespace gamemd

// 0x5FA1E0
namespace gamemd {
void sub_5FA1E0()
{
{
    DataGlobal_AC14C0 = Math::ArcTan((double)DataGlobal_AC1508 * 0.00390625);
}
}
} // namespace gamemd

// 0x5FA210
namespace gamemd {
void sub_5FA210()
{
{
    DataGlobal_AC14D8 = Math::ArcTan((double)(2 * DataGlobal_AC1508) / DataGlobal_AC14B0);
}
}
} // namespace gamemd

// 0x5FA240
namespace gamemd {
long long sub_5FA240()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC1508) + 0.5);
    DataGlobal_AC14FC = result;
    return result;
}
}
} // namespace gamemd

// 0x5FA270
namespace gamemd {
int sub_5FA270()
{
{
    DataGlobal_AC14A8 = 0;
    DataGlobal_AC14AA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5FA280
namespace gamemd {
int sub_5FA280()
{
{
    DataGlobal_AC14C8 = 0;
    DataGlobal_AC14CC = 0;
    DataGlobal_AC14D0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5FA2A0
namespace gamemd {
int sub_5FA2A0()
{
{
    DataGlobal_AC14F8 = 0;
    DataGlobal_AC14F0 = 128;
    DataGlobal_AC14F4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5FA2C0
namespace gamemd {
int sub_5FA2C0()
{
{
    DataGlobal_AC1498 = 0;
    DataGlobal_AC149C = 0;
    DataGlobal_AC14A0 = 0;
    DataGlobal_AC14A4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5FA430
namespace gamemd {
void nullsub_29()
{
  ;
}
} // namespace gamemd

// 0x5FC170
namespace gamemd {
void sub_5FC170()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC1530 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5FC1A0
namespace gamemd {
void sub_5FC1A0()
{
{
    DataGlobal_AC15D8 = DataGlobal_AC1530 / 60.0;
}
}
} // namespace gamemd

// 0x5FC1C0
namespace gamemd {
void sub_5FC1C0()
{
{
    DataGlobal_AC15C0 = 1.0 / DataGlobal_AC15D8;
}
}
} // namespace gamemd

// 0x5FC1E0
namespace gamemd {
void sub_5FC1E0()
{
{
    DataGlobal_AC15B8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5FC200
namespace gamemd {
void sub_5FC200()
{
{
    DataGlobal_AC1538 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5FC220
namespace gamemd {
void sub_5FC220()
{
{
    DataGlobal_AC1510 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5FC240
namespace gamemd {
long long sub_5FC240()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC1510 - DataGlobal_AC1538);
    result = Math::RoundToInt(v0 * DataGlobal_AC1530 * 0.5);
    DataGlobal_AC15E0 = result;
    return result;
}
}
} // namespace gamemd

// 0x5FC280
namespace gamemd {
void sub_5FC280()
{
{
    DataGlobal_AC1540 = Math::ArcTan((double)DataGlobal_AC15E0 * 0.00390625);
}
}
} // namespace gamemd

// 0x5FC2B0
namespace gamemd {
void sub_5FC2B0()
{
{
    DataGlobal_AC1580 = Math::ArcTan((double)(2 * DataGlobal_AC15E0) / DataGlobal_AC1530);
}
}
} // namespace gamemd

// 0x5FC2E0
namespace gamemd {
long long sub_5FC2E0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC15E0) + 0.5);
    DataGlobal_AC15D4 = result;
    return result;
}
}
} // namespace gamemd

// 0x5FC310
namespace gamemd {
int sub_5FC310()
{
{
    DataGlobal_AC1528 = 0;
    DataGlobal_AC152A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5FC320
namespace gamemd {
int sub_5FC320()
{
{
    DataGlobal_AC1570 = 0;
    DataGlobal_AC1574 = 0;
    DataGlobal_AC1578 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5FC340
namespace gamemd {
int sub_5FC340()
{
{
    DataGlobal_AC15D0 = 0;
    DataGlobal_AC15C8 = 128;
    DataGlobal_AC15CC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5FC360
namespace gamemd {
int sub_5FC360()
{
{
    DataGlobal_AC1518 = 0;
    DataGlobal_AC151C = 0;
    DataGlobal_AC1520 = 0;
    DataGlobal_AC1524 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5FD230
namespace gamemd {
void nullsub_208()
{
  ;
}
} // namespace gamemd

// 0x5FD240
namespace gamemd {
void nullsub_209()
{
  ;
}
} // namespace gamemd

// 0x5FD250
namespace gamemd {
void nullsub_210()
{
  ;
}
} // namespace gamemd

// 0x5FD260
namespace gamemd {
void nullsub_211()
{
  ;
}
} // namespace gamemd

// 0x5FDCC0
namespace gamemd {
unsigned int * globalHelper_0FDCC0(IUnknown * aP0, int a2)
{
{
    int *result;
    int v3;
    int v4;
    result = &aP0->field_0;
    v3 = *(int *)(HouseClass_Player.field_38 + 4 * a2);
    v4 = 0;
    if ( *(char *)(v3 + 681) || *(char *)(v3 + 680) || *(int *)(v3 + 660) == 126 || *(char *)(v3 + 682) )
    v4 = -12;
    if ( *(int *)(v3 + 664) == 9 )
    --v4;
    if ( a2 == 126 )
    --v4;
    *result = 0;
    result[1] = v4;
    return result;
}
}
} // namespace gamemd

// 0x5FDF60
namespace gamemd {
void nullsub_212(int a1, int a2)
{
  ;
}
} // namespace gamemd

// 0x5FE040
namespace gamemd {
int sub_5FE040()
{
{
    DataGlobal_AC15F8 = 0;
    DataGlobal_AC15FC = 0;
    DataGlobal_AC1600 = 0;
    DataGlobal_AC1604 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5FE060
namespace gamemd {
void sub_5FE060()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC1610 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5FE090
namespace gamemd {
void sub_5FE090()
{
{
    DataGlobal_AC1668 = DataGlobal_AC1610 / 60.0;
}
}
} // namespace gamemd

// 0x5FE0B0
namespace gamemd {
void sub_5FE0B0()
{
{
    DataGlobal_AC1650 = 1.0 / DataGlobal_AC1668;
}
}
} // namespace gamemd

// 0x5FE0D0
namespace gamemd {
void sub_5FE0D0()
{
{
    DataGlobal_AC1648 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5FE0F0
namespace gamemd {
void sub_5FE0F0()
{
{
    DataGlobal_AC1618 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5FE110
namespace gamemd {
void sub_5FE110()
{
{
    DataGlobal_AC15F0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5FE130
namespace gamemd {
long long sub_5FE130()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC15F0 - DataGlobal_AC1618);
    result = Math::RoundToInt(v0 * DataGlobal_AC1610 * 0.5);
    DataGlobal_AC1670 = result;
    return result;
}
}
} // namespace gamemd

// 0x5FE170
namespace gamemd {
void sub_5FE170()
{
{
    DataGlobal_AC1620 = Math::ArcTan((double)DataGlobal_AC1670 * 0.00390625);
}
}
} // namespace gamemd

// 0x5FE1A0
namespace gamemd {
void sub_5FE1A0()
{
{
    DataGlobal_AC1638 = Math::ArcTan((double)(2 * DataGlobal_AC1670) / DataGlobal_AC1610);
}
}
} // namespace gamemd

// 0x5FE1D0
namespace gamemd {
long long sub_5FE1D0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC1670) + 0.5);
    DataGlobal_AC1664 = result;
    return result;
}
}
} // namespace gamemd

// 0x5FE200
namespace gamemd {
int sub_5FE200()
{
{
    DataGlobal_AC1608 = 0;
    DataGlobal_AC160A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5FE210
namespace gamemd {
int sub_5FE210()
{
{
    DataGlobal_AC1628 = 0;
    DataGlobal_AC162C = 0;
    DataGlobal_AC1630 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5FE230
namespace gamemd {
int sub_5FE230()
{
{
    DataGlobal_AC1660 = 0;
    DataGlobal_AC1658 = 128;
    DataGlobal_AC165C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5FE520
namespace gamemd {
void nullsub_213()
{
  ;
}
} // namespace gamemd

// 0x5FEFC0
namespace gamemd {
void sub_5FEFC0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC17D8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5FEFF0
namespace gamemd {
void sub_5FEFF0()
{
{
    DataGlobal_AC1828 = DataGlobal_AC17D8 / 60.0;
}
}
} // namespace gamemd

// 0x5FF010
namespace gamemd {
void sub_5FF010()
{
{
    DataGlobal_AC1810 = 1.0 / DataGlobal_AC1828;
}
}
} // namespace gamemd

// 0x5FF030
namespace gamemd {
void sub_5FF030()
{
{
    DataGlobal_AC1808 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5FF050
namespace gamemd {
void sub_5FF050()
{
{
    DataGlobal_AC17E0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5FF070
namespace gamemd {
void sub_5FF070()
{
{
    DataGlobal_AC1690 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5FF090
namespace gamemd {
long long sub_5FF090()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC1690 - DataGlobal_AC17E0);
    result = Math::RoundToInt(v0 * DataGlobal_AC17D8 * 0.5);
    DataGlobal_AC1830 = result;
    return result;
}
}
} // namespace gamemd

// 0x5FF0D0
namespace gamemd {
void sub_5FF0D0()
{
{
    DataGlobal_AC17E8 = Math::ArcTan((double)DataGlobal_AC1830 * 0.00390625);
}
}
} // namespace gamemd

// 0x5FF100
namespace gamemd {
void sub_5FF100()
{
{
    DataGlobal_AC1800 = Math::ArcTan((double)(2 * DataGlobal_AC1830) / DataGlobal_AC17D8);
}
}
} // namespace gamemd

// 0x5FF130
namespace gamemd {
long long sub_5FF130()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC1830) + 0.5);
    DataGlobal_AC1824 = result;
    return result;
}
}
} // namespace gamemd

// 0x5FF160
namespace gamemd {
int sub_5FF160()
{
{
    DataGlobal_AC17D0 = 0;
    DataGlobal_AC17D2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5FF170
namespace gamemd {
int sub_5FF170()
{
{
    DataGlobal_AC17F0 = 0;
    DataGlobal_AC17F4 = 0;
    DataGlobal_AC17F8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5FF190
namespace gamemd {
int sub_5FF190()
{
{
    DataGlobal_AC1820 = 0;
    DataGlobal_AC1818 = 128;
    DataGlobal_AC181C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5FF1B0
namespace gamemd {
int sub_5FF1B0()
{
{
    DataGlobal_AC17C0 = 0;
    DataGlobal_AC17C4 = 0;
    DataGlobal_AC17C8 = 0;
    DataGlobal_AC17CC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5FF1D0
namespace gamemd {
int sub_5FF1D0()
{
{
    DataGlobal_AC167C = 0;
    DataGlobal_AC1680 = 0;
    DataGlobal_AC1684 = 1;
    DataGlobal_AC1685 = 0;
    DataGlobal_AC1678 = (int)&vt_DynamicVectorClass_SpotLightClass;
    DataGlobal_AC168C = 10;
    DataGlobal_AC1688 = 0;
    return atexit(sub_5FF210);
}
}
} // namespace gamemd

// 0x5FF210
namespace gamemd {
void sub_5FF210()
{
{
    DataGlobal_AC1678 = (int)&vt_VectorClass_SpotLightClass;
    if ( DataGlobal_AC167C && DataGlobal_AC1685 )
  {
    __3_YAXPAX_Z(DataGlobal_AC167C);
    DataGlobal_AC167C = 0;
  }
    DataGlobal_AC1685 = 0;
    DataGlobal_AC1680 = 0;
}
}
} // namespace gamemd
