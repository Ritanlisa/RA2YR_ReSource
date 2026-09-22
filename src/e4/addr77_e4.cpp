// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_770850_e4.hpp"
#include "e4/classes/E4Recv_770970_e4.hpp"
#include "e4/classes/E4Recv_770A50_e4.hpp"
#include "e4/classes/E4Recv_770B30_e4.hpp"
#include "e4/classes/E4Recv_770F10_e4.hpp"
#include "e4/classes/E4Recv_770FE0_e4.hpp"
#include "e4/classes/E4Recv_771710_e4.hpp"
#include "e4/classes/E4Recv_7717A0_e4.hpp"
#include "e4/classes/E4Recv_771850_e4.hpp"
#include "e4/classes/E4Recv_771890_e4.hpp"
#include "e4/classes/E4Recv_7719E0_e4.hpp"
#include "e4/classes/E4Recv_771A00_e4.hpp"
#include "e4/classes/E4Recv_7738A0_e4.hpp"
#include "e4/classes/E4Recv_7741C0_e4.hpp"
#include "e4/classes/E4Recv_776320_e4.hpp"
#include "e4/classes/E4Recv_776570_e4.hpp"
#include "e4/classes/E4Recv_7767F0_e4.hpp"
#include "e4/classes/E4Recv_776EB0_e4.hpp"
#include "e4/classes/E4Recv_777BB0_e4.hpp"
#include "e4/classes/E4Recv_778710_e4.hpp"
#include "e4/classes/E4Recv_779B50_e4.hpp"
#include "e4/classes/E4Recv_779DD0_e4.hpp"
#include "e4/classes/E4Recv_77A080_e4.hpp"
#include "e4/classes/E4Recv_77A9F0_e4.hpp"
#include "e4/classes/E4Recv_77D240_e4.hpp"
#include "e4/classes/E4Recv_77D3F0_e4.hpp"
#include "e4/classes/E4Recv_77D4C0_e4.hpp"
#include "e4/classes/E4Recv_77E1D0_e4.hpp"
#include "e4/classes/E4Recv_77E300_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/BufferIOFile_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WebBrowser_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x770E70
namespace gamemd {
void sub_770E70(char **this@<ecx> a1, ObjectClass * aP1, ObjectClass * aP2, ObjectClass aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *v5; // edi
  ObjectClass *v6; // [esp+10h] [ebp-4h] BYREF

  String::Assign((char **)&v6, &stru_830620[56168]); /*0x770e80*/
  v5 = *(ObjectClass **)aP3[0]; /*0x770e85*/
  INIClass::ReadTokenizedPair(this, aP1, aP2, *(ObjectClass **)aP3[0], 0, (ObjectClass *)&v6); /*0x770e9d*/
  DeleteAndZero((void **)&v6); /*0x770ea6*/
  String::Assign((char **)&aP3, &stru_830620[56160]); /*0x770eb4*/
  INIClass::ReadTokenizedPair(this, aP1, aP2, v5, 1, &aP3); /*0x770ec5*/
  DeleteAndZero((void **)&aP3); /*0x770ece*/
  String::Assign((char **)&aP3, aDraw); /*0x770edc*/
  INIClass::ReadTokenizedPair(this, aP1, aP2, v5, 2, &aP3); /*0x770eed*/
  DeleteAndZero((void **)&aP3); /*0x770ef6*/
}
}
} // namespace gamemd

// 0x771890
namespace gamemd {
void E4Recv_771890::sub_771890()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  *this = &vt_WorldDominationTour_Voices_Anim; /*0x771890*/
  VtableStub::5CB6C0(this); /*0x771896*/
}
}
} // namespace gamemd

// 0x7741C0
namespace gamemd {
void E4Recv_7741C0::FindRegistrySubKey()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int *p_uniqueId; // ebx
  CCINIClass *v5; // esi
  DWORD ebp2; // ebp
  LPSTR lpClass; // [esp+10h] [ebp-434h]
  ObjectClass *cbMaxSubKeyLen; // [esp+14h] [ebp-430h] BYREF
  DWORD cbMaxClassLen; // [esp+18h] [ebp-42Ch] BYREF
  DWORD cSubKeys; // [esp+1Ch] [ebp-428h] BYREF
  HKEY phkResult; // [esp+20h] [ebp-424h] BYREF
  DWORD cchClass; // [esp+28h] [ebp-41Ch] BYREF
  DWORD cbMaxValueLen; // [esp+2Ch] [ebp-418h] BYREF
  DWORD cValues; // [esp+30h] [ebp-414h] BYREF
  DWORD cbSecurityDescriptor; // [esp+34h] [ebp-410h] BYREF
  struct _FILETIME ftLastWriteTime; // [esp+38h] [ebp-40Ch] BYREF
  DWORD cbMaxValueNameLen; // [esp+40h] [ebp-404h] BYREF
  CHAR Class[1024]; // [esp+44h] [ebp-400h] BYREF
  char v20; // [esp+448h] [ebp+4h]
  void * v1 = v1; /*0x7741cc*/
  cchClass = 1024; /*0x774205*/
  if ( RegQueryInfoKeyA( /*0x77420d*/
         (HKEY)this,
         Class,
         &cchClass,
         0,
         &cSubKeys,
         (LPDWORD)&cbMaxSubKeyLen,
         &cbMaxClassLen,
         &cValues,
         &cbMaxValueNameLen,
         &cbMaxValueLen,
         &cbSecurityDescriptor,
         &ftLastWriteTime) )
  {
    return 0; /*0x7742cf*/
  }
  p_uniqueId = &cbMaxSubKeyLen->uniqueId; /*0x77421f*/
  v5 = (CCINIClass *)__2_YAPAXI_Z((size_t)&cbMaxSubKeyLen->uniqueId); /*0x77422c*/
  lpClass = (LPSTR)__2_YAPAXI_Z(cbMaxClassLen + 1); /*0x774235*/
  ebp2 = 0; /*0x774240*/
  if ( !cSubKeys ) /*0x774244*/
  {
LABEL_6:
    if ( v20 ) /*0x7742a7*/
      RegCloseKey((HKEY)this); /*0x7742aa*/
    __3_YAXPAX_Z(v5); /*0x7742b1*/
    __3_YAXPAX_Z(lpClass); /*0x7742bb*/
    return 0; /*0x7742bb*/
  }
  while ( 1 ) /*0x77425e*/
  {
    v5->__pad_0[0] = 0; /*0x77425e*/
    cbMaxSubKeyLen = (ObjectClass *)p_uniqueId; /*0x774262*/
    RegEnumKeyExA((HKEY)this, ebp2, v5->__pad_0, (LPDWORD)&cbMaxSubKeyLen, 0, lpClass, &cbMaxClassLen, &ftLastWriteTime); /*0x774266*/
  void *v12; // [esp+24h] [ebp-420h]
    if ( !_strcmpi((char *)v12, v5->__pad_0) && !RegOpenKeyExA((HKEY)this, v5->__pad_0, 0, 0x20019u, &phkResult) ) /*0x77428b*/
      break; /*0x77428b*/
    if ( ++ebp2 >= cSubKeys ) /*0x77429c*/
      goto LABEL_6; /*0x77429c*/
  }
  if ( v20 ) /*0x7742db*/
    RegCloseKey((HKEY)this); /*0x7742de*/
  __3_YAXPAX_Z(v5); /*0x7742e5*/
  __3_YAXPAX_Z(lpClass); /*0x7742ef*/
  return phkResult; /*0x7742c3*/
}
}
} // namespace gamemd

// 0x775690
namespace gamemd {
void ScreenDialogToClient(HWND hWnd, LPRECT lpRect)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  BOOL result; // eax
  LONG v5; // ecx
  LONG top; // eax
  LONG v7; // edx
  LONG v8; // edx
  LONG v9; // ecx
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  result = GetWindowRect(hWnd, lpRect); /*0x775699*/
  BOOL v4 = result; /*0x77569f*/
  if ( result ) /*0x7756a3*/
  {
    GetClientRect(g_hWnd, &Rect); /*0x7756b7*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x7756c8*/
    v5 = lpRect->right - Rect.left; /*0x7756d9*/
    top = Rect.top; /*0x7756db*/
    lpRect->left -= Rect.left; /*0x7756df*/
    v7 = lpRect->top; /*0x7756e1*/
    lpRect->right = v5; /*0x7756e4*/
    v8 = v7 - top; /*0x7756ea*/
    v9 = lpRect->bottom - top; /*0x7756ec*/
    lpRect->top = v8; /*0x7756f0*/
    lpRect->bottom = v9; /*0x7756f3*/
    return v4; /*0x7756ee*/
  }
  return result; /*0x7756a5*/
}
}
} // namespace gamemd

// 0x775700
namespace gamemd {
const DLGTEMPLATE * CreateDialogIndirect(ObjectClass * aP0, HWND a2, HWND hWndParent, DLGPROC lpDialogFunc, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND *v6; // edi
  const DLGTEMPLATE *result; // eax
  HWND DialogIndirectParamA; // eax
  HWND v11; // esi
  int v5 = g_DialogTrackingList; /*0x775700*/
  v6 = (HWND *)(8 * g_DialogTrackingList + 12004648); /*0x775708*/
  a0[2 * g_DialogTrackingList] = 0; /*0x775718*/
  dword_B72D2C[2 * v5] = 0; /*0x775720*/
  result = (const DLGTEMPLATE *)FindResource((unsigned __int16)a2, (const CHAR *)5); /*0x77572b*/
  if ( result ) /*0x775732*/
  {
    ++g_DialogTrackingList; /*0x775747*/
    DialogIndirectParamA = CreateDialogIndirectParamA((HINSTANCE)aP0, result, hWndParent, lpDialogFunc, 0); /*0x775755*/
    v11 = DialogIndirectParamA; /*0x77575b*/
    if ( DialogIndirectParamA ) /*0x77575f*/
    {
      ++*(_DWORD *)&HouseClass_Player[45120]; /*0x77577c*/
      DialogQueue::PushEntry(DialogIndirectParamA); /*0x775781*/
      EnumChildWindows(v11, (WNDENUMPROC)DialogClass::Reposition, 1); /*0x77578e*/
      DialogClass::Reposition((SkirmishDialog *)v11, 0); /*0x775797*/
      *v6 = v11; /*0x77579c*/
      v6[1] = a2; /*0x77579e*/
      if ( a5 ) /*0x7757a7*/
        ShowWindow(v11, 1); /*0x7757ac*/
      SetForegroundWindow(v11); /*0x7757b3*/
      SetFocus(v11); /*0x7757ba*/
      dword_B72F44 = v11; /*0x7757c0*/
      dword_B72F48 = (int)a2; /*0x7757c9*/
      return (const DLGTEMPLATE *)v11; /*0x7757c6*/
    }
    else
    {
      --g_DialogTrackingList; /*0x775769*/
      return 0; /*0x77576e*/
    }
  }
  return result; /*0x775734*/
}
}
} // namespace gamemd

// 0x7757E0
namespace gamemd {
void Dialog_Close(HWND a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int *i; // esi
  HWND *v6; // esi
  HWND v8; // esi
  if ( !a1 ) /*0x7757ef*/
  {
    if ( !g_DialogTrackingList ) /*0x7757f3*/
      return 0; /*0x7757f3*/
    a1 = *(&g_ClipboardBuffer + 2 * g_DialogTrackingList); /*0x7757f5*/
    if ( !a1 ) /*0x7757fe*/
      return 0; /*0x775801*/
  }
  int v3 = 0; /*0x775806*/
  if ( g_DialogTrackingList <= 0 ) /*0x77580a*/
    return 0; /*0x77580a*/
  for ( i = a0; (HWND)*i != a1; i += 2 ) /*0x77580c*/
  {
    if ( ++v3 >= g_DialogTrackingList ) /*0x77581b*/
      return 0; /*0x775822*/
  }
  int v5 = v3; /*0x775826*/
  if ( v3 == -1 ) /*0x775828*/
    return 0; /*0x77582b*/
  Dialog::IdleProcess(a1); /*0x775831*/
  if ( g_DialogTrackingList - 1 >= v5 ) /*0x77583e*/
  {
    v6 = (HWND *)(8 * (g_DialogTrackingList - 1) + 12004648); /*0x775840*/
    int v7 = g_DialogTrackingList - v5; /*0x775851*/
    do /*0x775870*/
    {
      DialogQueue::RemoveEntry(*v6); /*0x775855*/
      DestroyWindow(*v6); /*0x77585d*/
      v6 -= 2; /*0x775865*/
      --v7; /*0x775869*/
      --DataGlobal_A8ED8C; /*0x77586a*/
    }
    while ( v7 ); /*0x775870*/
  }
  g_DialogTrackingList = v5; /*0x775875*/
  if ( v5 ) /*0x77587d*/
  {
    v8 = *(&g_ClipboardBuffer + 2 * v5); /*0x77587f*/
    int v9 = dword_B72D24[2 * v5]; /*0x775886*/
    SetForegroundWindow(v8); /*0x77588e*/
    InvalidateRect(v8, 0, 0); /*0x775897*/
    UpdateWindow(v8); /*0x77589e*/
    dword_B72F44 = v8; /*0x7758a4*/
    dword_B72F48 = v9; /*0x7758aa*/
    SetFocus(v8); /*0x7758b1*/
    SendMessageA(dword_B72F44, 0x4B0u, 0, 0); /*0x7758c5*/
  }
  else
  {
    dword_B72F44 = 0; /*0x7758e1*/
    dword_B72F48 = 0; /*0x7758e8*/
    SetFocus(g_hWnd); /*0x7758ee*/
  }
  dword_B72F4C = a2; /*0x7758d3*/
  return 1; /*0x775800*/
}
}
} // namespace gamemd

// 0x7759E0
namespace gamemd {
void MessageDialogLoopAlt(HWND hWnd, unsigned char (*a2)(void) a2, int a3, char a4, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND *v8; // ecx
  HWND *v10; // ecx
  MSG Msg; // [esp+10h] [ebp-1Ch] BYREF

  if ( a4 ) /*0x7759f1*/
  {
    SetForegroundWindow(hWnd); /*0x7759f4*/
    SendMessageA(hWnd, 0x4A9u, 0, 1); /*0x775a04*/
  }
  if ( a5 ) /*0x775a10*/
    ShowWindow(hWnd, 1); /*0x775a15*/
  while ( 1 ) /*0x775a2d*/
  {
    int v7 = 0; /*0x775a2d*/
    if ( g_DialogTrackingList <= 0 ) /*0x775a31*/
      break; /*0x775a31*/
    v8 = (HWND *)a0; /*0x775a37*/
    while ( *v8 != hWnd ) /*0x775a3e*/
    {
      ++v7; /*0x775a40*/
      v8 += 2; /*0x775a41*/
      if ( v7 >= g_DialogTrackingList ) /*0x775a46*/
        goto LABEL_23; /*0x775a46*/
    }
    if ( a2 && a2() == 1 ) /*0x775a56*/
      CloseDialog(hWnd, 2); /*0x775a5f*/
    if ( !g_NetworkLobby_Init ) /*0x775a6b*/
    {
      LOBYTE(v8) = 0; /*0x775a6d*/
      ScreenSaver::Process(v8); /*0x775a6f*/
    }
    ++unk_AA0430; /*0x775a7f*/
    while ( GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ) /*0x775a8d*/
    {
      TranslateMessage(&Msg); /*0x775a9b*/
      DispatchMessageA(&Msg); /*0x775aa2*/
      int v9 = 0; /*0x775aaa*/
      if ( g_DialogTrackingList <= 0 ) /*0x775aae*/
        break; /*0x775aae*/
      v10 = (HWND *)a0; /*0x775ab0*/
      while ( *v10 != hWnd ) /*0x775ab7*/
      {
        ++v9; /*0x775ab9*/
        v10 += 2; /*0x775aba*/
        if ( v9 >= g_DialogTrackingList ) /*0x775abf*/
          goto LABEL_22; /*0x775abf*/
      }
    }
LABEL_22:
    Sleep(0); /*0x775ad8*/
  }
LABEL_23:
  if ( a4 ) /*0x775aeb*/
    SendMessageA(hWnd, 0x4A9u, 0, 0); /*0x775af7*/
  return dword_B72F4C; /*0x775b02*/
}
}
} // namespace gamemd

// 0x775B30
namespace gamemd {
int sub_775B30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return dword_B72F4C; /*0x775b35*/
}
}
} // namespace gamemd

// 0x775DB0
namespace gamemd {
int CacheRenderedText(HDC a1, const char * a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  HDC v14; // edx
  HDC v20; // edx
  HDC hdc; // [esp+10h] [ebp-98h]
  HDC hdca; // [esp+10h] [ebp-98h]
  _DWORD v30[36]; // [esp+18h] [ebp-90h] BYREF

  int v5 = dword_B72F38; /*0x775db6*/
  int v6 = 0; /*0x775dbd*/
  if ( dword_B72F38 <= 0 ) /*0x775dc9*/
  {
LABEL_11:
    if ( a1 ) /*0x775e77*/
    {
      result = Render_Render_7760B0(a1, a3, a4, a5); /*0x775eb6*/
      int v10 = result; /*0x775ebb*/
      int v29 = result; /*0x775ebf*/
      if ( result ) /*0x775ec3*/
      {
        strcpy((char *)v30, a2); /*0x775ef2*/
        v30[33] = a4; /*0x775f09*/
        int v11 = dword_B72F38; /*0x775f10*/
        v30[34] = a5; /*0x775f15*/
        int v12 = dword_B72F38; /*0x775f1c*/
        v30[32] = a3; /*0x775f1e*/
        v30[35] = v10; /*0x775f27*/
        int v13 = dword_B72F3C; /*0x775f30*/
        if ( dword_B72F38 >= dword_B72F3C ) /*0x775f38*/
        {
          v13 = 2 * dword_B72F38; /*0x775f46*/
          if ( 2 * dword_B72F38 < 10 ) /*0x775f4c*/
            v13 = 10; /*0x775f4e*/
          v14 = (HDC)__2_YAPAXI_Z(144 * v13); /*0x775f5f*/
          memset(v14, 0, 4 * ((unsigned int)(144 * v13) >> 2)); /*0x775f6a*/
          hdc = v14; /*0x775f74*/
          char * v15 = (char *)dword_B72F40; /*0x775f7a*/
          if ( dword_B72F40 ) /*0x775f82*/
          {
            char * v16 = (char *)v14; /*0x775f89*/
            char v17 = -112 * dword_B72F38; /*0x775f91*/
            unsigned int v18 = (unsigned int)(144 * dword_B72F38) >> 2; /*0x775f93*/
            qmemcpy(v16, dword_B72F40, 4 * v18); /*0x775f96*/
            qmemcpy(&v16[4 * v18], &v15[4 * v18], v17 & 3); /*0x775f9d*/
            v15 = (char *)dword_B72F40; /*0x775f9f*/
          }
          __3_YAXPAX_Z(v15); /*0x775fa6*/
          dword_B72F40 = hdc; /*0x775fb2*/
          v11 = dword_B72F38; /*0x775fb7*/
          dword_B72F3C = v13; /*0x775fbc*/
        }
        if ( v11 >= v13 ) /*0x775fc4*/
        {
          int v19 = 2 * v11; /*0x775fc6*/
          if ( 2 * v11 < 10 ) /*0x775fcc*/
            v19 = 10; /*0x775fce*/
          v20 = (HDC)__2_YAPAXI_Z(144 * v19); /*0x775fdf*/
          memset(v20, 0, 4 * ((unsigned int)(144 * v19) >> 2)); /*0x775fea*/
          hdca = v20; /*0x775ff4*/
          char * v21 = (char *)dword_B72F40; /*0x775ffa*/
          if ( dword_B72F40 ) /*0x776002*/
          {
            char * v22 = (char *)v20; /*0x776009*/
            char v23 = -112 * dword_B72F38; /*0x776011*/
            unsigned int v24 = (unsigned int)(144 * dword_B72F38) >> 2; /*0x776013*/
            qmemcpy(v22, dword_B72F40, 4 * v24); /*0x776016*/
            qmemcpy(&v22[4 * v24], &v21[4 * v24], v23 & 3); /*0x77601d*/
            v21 = (char *)dword_B72F40; /*0x77601f*/
          }
          __3_YAXPAX_Z(v21); /*0x776026*/
          dword_B72F40 = hdca; /*0x776032*/
          v11 = dword_B72F38; /*0x776037*/
          dword_B72F3C = v19; /*0x77603c*/
        }
        if ( v12 < v11 ) /*0x776044*/
        {
          memcpy((char *)dword_B72F40 + 144 * v12 + 144, (char *)dword_B72F40 + 144 * v12, 144 * v11 - 144 * v12); /*0x776068*/
          v11 = dword_B72F38; /*0x77606d*/
        }
        char * v25 = (char *)dword_B72F40 + 144 * v12; /*0x776082*/
        if ( v25 ) /*0x776084*/
        {
          qmemcpy(v25, v30, 0x90u); /*0x776091*/
          v11 = dword_B72F38; /*0x776093*/
        }
        dword_B72F38 = v11 + 1; /*0x77609b*/
        return v29; /*0x7760a0*/
      }
    }
    else
    {
      return 0; /*0x775e7c*/
    }
  }
  else
  {
    const void * v8 = dword_B72F40; /*0x775dcf*/
    char * v28 = (char *)dword_B72F40; /*0x775dd5*/
    while ( 1 ) /*0x775dd9*/
    {
      if ( v6 >= 0 && v6 < v5 ) /*0x775ddf*/
        qmemcpy(v30, v8, sizeof(v30)); /*0x775dea*/
      if ( !strcmp((const char *)v30, a2) && v30[32] == a3 && v30[33] == a4 && v30[34] == a5 ) /*0x775e53*/
        return v30[35]; /*0x775e88*/
      v5 = dword_B72F38; /*0x775e59*/
      ++v6; /*0x775e5e*/
      v8 = v28 + 144; /*0x775e5f*/
      v28 += 144; /*0x775e67*/
      if ( v6 >= dword_B72F38 ) /*0x775e6b*/
        goto LABEL_11; /*0x775e6b*/
    }
  }
  return result; /*0x775e79*/
}
}
} // namespace gamemd

// 0x776230
namespace gamemd {
char sub_776230(HWND hWnd, HWND a2, LPARAM * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  LRESULT v6; // eax
  LPARAM lParam[4]; // [esp+10h] [ebp-10h] BYREF

  if ( a3[23] ) /*0x77623f*/
  {
    if ( !SendMessageA(hWnd, 0x4C9u, (WPARAM)a2, a3[15]) ) /*0x77625b*/
      return 0; /*0x77626a*/
    *(&qword_B730A0 + 1) = (HWND)a3[15]; /*0x77627a*/
    SendMessageA(a2, 0x110Bu, 9u, 0); /*0x776280*/
    himl = (HIMAGELIST)SendMessageA(a2, 0x1112u, 0, a3[15]); /*0x776294*/
    lParam[0] = a3[15]; /*0x7762a5*/
    SendMessageA(a2, 0x1104u, 0, (LPARAM)lParam); /*0x7762a9*/
    v6 = SendMessageA(a2, 0x1106u, 0, 0); /*0x7762b5*/
    int v7 = a3[24] - v6 - lParam[0]; /*0x7762c8*/
    int v8 = a3[25] - lParam[1]; /*0x7762ca*/
    SetCapture(hWnd); /*0x7762cc*/
    ImageList_BeginDrag(himl, 0, v7, v8); /*0x7762dd*/
    ImageList_DragEnter(hWnd, 0, 0); /*0x7762e8*/
    SetTimer(hWnd, 1u, 1u, 0); /*0x7762f5*/
    byte_B7309C = 1; /*0x7762fb*/
    qword_B730A0 = a2; /*0x776302*/
  }
  return byte_B7309C; /*0x776261*/
}
}
} // namespace gamemd

// 0x776320
namespace gamemd {
void E4Recv_776320::sub_776320()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HCURSOR CursorA; // eax
  char v4; // bl
  HCURSOR v5; // eax
  struct tagPOINT v7[5]; // [esp+4h] [ebp-88h] BYREF
  struct tagRECT Rect; // [esp+2Ch] [ebp-60h] BYREF
  WPARAM wParam[10]; // [esp+3Ch] [ebp-50h] BYREF
  WPARAM v10[10]; // [esp+64h] [ebp-28h] BYREF

  if ( !byte_B7309C ) /*0x776330*/
    return 0; /*0x776480*/
  ImageList_DragShowNolock(0); /*0x77633b*/
  int v2; // edx
  qmemcpy(v7, HitDialogTest(this, v2, v7), sizeof(v7)); /*0x776359*/
  qmemcpy(wParam, v7, sizeof(wParam)); /*0x77636c*/
  if ( SendMessageA((HWND)v7[0].y, 0x4C8u, (WPARAM)wParam, this) ) /*0x776379*/
  {
    CursorA = LoadCursorA(0, (LPCSTR)0x7F00); /*0x77638a*/
    SetCursor(CursorA); /*0x776391*/
    v4 = 1; /*0x776397*/
  }
  else
  {
    v5 = LoadCursorA(0, (LPCSTR)0x7F88); /*0x7763a2*/
    SetCursor(v5); /*0x7763a9*/
    v4 = 0; /*0x7763af*/
  }
  ImageList_DragShowNolock(1); /*0x7763b3*/
  GetWindowRect((HWND)wParam[1], &Rect); /*0x7763c3*/
  ImageList_DragMove(wParam[4] - Rect.left, wParam[5] - Rect.top); /*0x7763df*/
  ImageList_EndDrag(); /*0x7763e5*/
  ReleaseCapture(); /*0x7763eb*/
  ImageList_Destroy(himl); /*0x7763f8*/
  himl = 0; /*0x776405*/
  byte_B7309C = 0; /*0x77640f*/
  qmemcpy(v7, HitDialogTest(this, (int)v7, v7), sizeof(v7)); /*0x776426*/
  qmemcpy(v10, v7, sizeof(v10)); /*0x776435*/
  if ( v4 ) /*0x77643c*/
    SendMessageA((HWND)v7[0].y, 0x4CAu, (WPARAM)v10, this); /*0x77644e*/
  KillTimer((HWND)v10[1], 1u); /*0x77645b*/
  SendMessageA(qword_B730A0, 0x110Bu, 8u, 0); /*0x776470*/
  return 1; /*0x776478*/
}
}
} // namespace gamemd

// 0x776490
namespace gamemd {
struct tagPOINT * Dialog_HitTest(unsigned int a1, int a2, struct tagPOINT * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  LONG v3; // ebx
  LONG v4; // esi
  HWND WindowLongA; // eax
  HWND v6; // edi
  HWND v7; // ebp
  POINT v9; // [esp-8h] [ebp-58h]
  struct tagPOINT Point; // [esp+10h] [ebp-40h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-38h] BYREF
  struct tagPOINT v12[5]; // [esp+28h] [ebp-28h] BYREF

  v3 = HIWORD(a1); /*0x7764a7*/
  v4 = (unsigned __int16)a1; /*0x7764a9*/
  v9.y = HIWORD(a1); /*0x7764af*/
  v9.x = (unsigned __int16)a1; /*0x7764b0*/
  WindowLongA = (HWND)GetWindowLongA(qword_B730A0, -8); /*0x7764b4*/
  v6 = ChildWindowFromPoint(WindowLongA, v9); /*0x7764bd*/
  v7 = (HWND)GetWindowLongA(v6, -8); /*0x7764ca*/
  if ( v6 == (HWND)GetWindowLongA(qword_B730A0, -8) ) /*0x7764d7*/
    v7 = v6; /*0x7764d9*/
  Point = (struct tagPOINT)__PAIR64__(v3, v4); /*0x7764df*/
  ClientToScreen(v7, &Point); /*0x7764e9*/
  v12[2] = Point; /*0x7764fd*/
  GetWindowRect(v6, &Rect); /*0x776505*/
  v12[4].x = Point.x - Rect.left; /*0x77651d*/
  v12[0].x = (LONG)v6; /*0x77652d*/
  v12[1] = *(struct tagPOINT *)&qword_B730A0; /*0x776531*/
  v12[3].x = v4; /*0x77653b*/
  v12[4].y = Point.y - Rect.top; /*0x77653f*/
  v12[0].y = (LONG)v7; /*0x77654e*/
  v12[3].y = v3; /*0x776556*/
  qmemcpy(a3, v12, 0x28u); /*0x77655a*/
  return a3; /*0x77655c*/
}
}
} // namespace gamemd

// 0x776570
namespace gamemd {
void E4Recv_776570::sub_776570()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND WindowLongA; // eax
  LRESULT v6; // eax
  LPARAM v7; // edi
  UINT v8; // [esp-10h] [ebp-2Ch]
  LRESULT v9; // [esp-Ch] [ebp-28h]
  struct tagPOINT Point; // [esp+4h] [ebp-18h] BYREF
  struct tagRECT Rect; // [esp+Ch] [ebp-10h] BYREF

  if ( this == (void *)1 && byte_B7309C )
  {
    GetCursorPos(&Point); /*0x77658f*/
    GetWindowRect(qword_B730A0, &Rect); /*0x7765a1*/
    int v1 = Rect.top - Point.y; /*0x7765b3*/
    int v2 = Point.y - Rect.bottom; /*0x7765b5*/
    if ( Rect.top - Point.y > Point.y - Rect.bottom ) /*0x7765b9*/
      v2 = Rect.top - Point.y; /*0x7765bb*/
    int v3 = v2 <= 0 ? 0 : v2;
    if ( v3 > 0 ) /*0x7765c9*/
    {
      int v4 = 500 - 40 * v3; /*0x7765da*/
      if ( v4 <= 5 ) /*0x7765df*/
        v4 = 5; /*0x7765e1*/
      v8 = v4; /*0x7765ea*/
      WindowLongA = (HWND)GetWindowLongA(qword_B730A0, -8); /*0x7765f5*/
      SetTimer(WindowLongA, 1u, v8, 0); /*0x7765fc*/
      v9 = SendMessageA(qword_B730A0, 0x110Au, 5u, 0); /*0x77661c*/
      if ( v1 <= 0 ) /*0x77661d*/
        v6 = SendMessageA(qword_B730A0, 0x110Au, 6u, v9); /*0x77663c*/
      else
        v6 = SendMessageA(qword_B730A0, 0x110Au, 7u, v9); /*0x77662d*/
      v7 = v6; /*0x776644*/
      ImageList_DragShowNolock(0); /*0x776648*/
      SendMessageA(qword_B730A0, 0x110Bu, 5u, v7); /*0x776659*/
      ImageList_DragShowNolock(1); /*0x77665d*/
    }
  }
}
}
} // namespace gamemd

// 0x777080
namespace gamemd {
void SetDialogParent(HWND hWnd, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  struct tagRECT Rect; // [esp+10h] [ebp-20h] BYREF
  struct tagRECT v9; // [esp+20h] [ebp-10h] BYREF

  GetClientRect(a2, &Rect); /*0x777097*/
  if ( a2 == g_hWnd ) /*0x77709f*/
    *(_QWORD *)&Rect.right = *(_QWORD *)&g_DDraw_Active; /*0x7770ad*/
  ClientToScreen(a2, (LPPOINT)&Rect); /*0x7770c1*/
  ClientToScreen(a2, (LPPOINT)&Rect.right); /*0x7770c9*/
  Rect.right -= Rect.left; /*0x7770de*/
  Rect.bottom -= Rect.top; /*0x7770e9*/
  GetClientRect(hWnd, &v9); /*0x7770ed*/
  ClientToScreen(hWnd, (LPPOINT)&v9); /*0x7770f5*/
  ClientToScreen(hWnd, (LPPOINT)&v9.right); /*0x7770fd*/
  int v4 = Rect.right - (v9.right - v9.left) + 1; /*0x777119*/
  v9.right -= v9.left; /*0x77711a*/
  v9.bottom -= v9.top; /*0x777121*/
  int v5 = v4 / 2; /*0x77712d*/
  int v6 = (Rect.bottom - v9.bottom + 1) / 2; /*0x777133*/
  if ( v5 < 0 ) /*0x777137*/
    v5 = 0; /*0x777139*/
  if ( v6 < 0 ) /*0x77713d*/
    v6 = 0; /*0x77713f*/
  return SetWindowPos(hWnd, 0, v5, v6, -1, -1, 5u); /*0x777152*/
}
}
} // namespace gamemd

// 0x7775C0
namespace gamemd {
int WindowProc_Main(int a1, int a2, HWND hWnd, UINT Msg, signed int wParam, LPARAM lParam)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND v7; // esi
  HWND v9; // edi
  UINT v10; // eax
  size_t v15; // esi
  WCHAR WideCharStr[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)WideCharStr = a1; /*0x7775c0*/
  if ( g_NetworkInterface ) /*0x7775ce*/
  {
    int v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)g_NetworkInterface + 56))(g_NetworkInterface, -1); /*0x7775d4*/
    if ( Msg == v6 || Msg == 1141 ) /*0x7775e5*/
    {
      v7 = hWnd; /*0x7775f9*/
      if ( (*(int (__thiscall **)(int, HWND, UINT, signed int, LPARAM))(*(_DWORD *)g_NetworkInterface + 64))( /*0x7775ff*/
             g_NetworkInterface,
             hWnd,
             Msg,
             wParam,
             lParam) )
      {
        return DefWindowProcA(v7, Msg, wParam, lParam); /*0x777624*/
      }
      return 0; /*0x777604*/
    }
  }
  v9 = hWnd; /*0x777627*/
  Tactical::HandleTacticalMouseInput(hWnd, &Msg, &wParam, &lParam); /*0x777640*/
  if ( g_hWnd ) /*0x77764c*/
    GetMenu(g_hWnd); /*0x77764f*/
  if ( Render_Draw_778030(v9, Msg, wParam, lParam) ) /*0x777665*/
  {
    Debug::Log(aDefault); /*0x777673*/
    return dword_B73570; /*0x777684*/
  }
  v10 = Msg; /*0x777687*/
  if ( Msg <= 0x18 ) /*0x77768e*/
  {
    if ( Msg == 24 ) /*0x777694*/
      return 0; /*0x777a61*/
    switch ( Msg ) /*0x7776ae*/
    {
      case 1u: /*0x7776ae*/
        _DWORD * v11 = __2_YAPAXI_Z(0x268u); /*0x777797*/
        if ( v11 ) /*0x77779e*/
        {
          MainWindowProc_Helper_724000(v9); /*0x7777a3*/
          v11[153] = 7; /*0x7777a8*/
          *v11 = &vt_CCToolTip; /*0x7777b2*/
          g_TacticalRender = (int)v11; /*0x7777b8*/
        }
        else
        {
          g_TacticalRender = 0; /*0x7777c3*/
        }
        goto LABEL_71; /*0x7777be*/
      case 2u: /*0x7776ae*/
        if ( g_TacticalRender ) /*0x7777fb*/
        {
          (**(void (__thiscall ***)(int, int))g_TacticalRender)(g_TacticalRender, 1); /*0x777801*/
          g_TacticalRender = 0; /*0x777803*/
        }
        g_hWnd = 0; /*0x77780e*/
        if ( DataGlobal_A8EDD8 ) /*0x777816*/
          DataGlobal_A8EDD8 = 2; /*0x777818*/
        return 0; /*0x777828*/
      case 3u: /*0x7776ae*/
        if ( g_lpDirectDraw7 != 1 || !g_WWMouseClass_Instance ) /*0x7777e3*/
          goto LABEL_72; /*0x7777e3*/
        MouseClass::CalcConfiningRect(); /*0x7777e9*/
        goto LABEL_71; /*0x7777ee*/
      case 0xFu: /*0x7776ae*/
        if ( DataGlobal_A8EDA0 /*0x777700*/
          || g_DDraw_Initialized != 1 && g_lpDirectDraw7 != 1
          || !g_WWMouseClass_Instance
          || !g_DSurface_Primary
          || !g_DSurface_Hidden
          || !DSurface_Composite )
        {
          goto LABEL_26; /*0x777700*/
        }
        if ( g_BounceClassInit == 1 ) /*0x777709*/
        {
          (*(void (**)(void))(*(_DWORD *)g_WWMouseClass_Instance + 28))(); /*0x777710*/
          Frame::Present(0); /*0x777717*/
          Sidebar::FlushSidebarTooltip(1); /*0x777723*/
          ValidateRect(v9, 0); /*0x77772a*/
        }
        else if ( (unsigned __int8)MainWindowProc_Helper() ) /*0x777735*/
        {
          MainWindowProc_Helper_5C09A0(); /*0x77773e*/
          ValidateRect(v9, 0); /*0x777745*/
        }
        else
        {
          if ( !(unsigned __int8)Render_Draw_774070() ) /*0x777750*/
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 28))(g_WWMouseClass_Instance); /*0x777768*/
            Frame::Present(0); /*0x77776f*/
          }
LABEL_26:
          ValidateRect(v9, 0); /*0x777774*/
        }
        break; /*0x777730*/
      case 0x14u: /*0x7776ae*/
        return 1; /*0x77778a*/
      default:
        goto LABEL_72;
    }
    goto LABEL_71; /*0x777730*/
  }
  if ( Msg > 0x205 ) /*0x777830*/
  {
    if ( Msg != 522 ) /*0x777962*/
    {
      if ( Msg == 534 ) /*0x777967*/
        return (unsigned __int8)Window::ClampToScreen(lParam); /*0x777982*/
      goto LABEL_72; /*0x777967*/
    }
    if ( !byte_B73561 ) /*0x77798b*/
    {
      byte_B73561 = 1; /*0x777991*/
      char * v14 = aSidebardown; /*0x77799e*/
      if ( wParam >= 0 ) /*0x7779a3*/
        v14 = aSidebarup; /*0x7779a5*/
      Sidebar::ScrollSidebarSkipGame(v14); /*0x7779aa*/
      byte_B73561 = 0; /*0x7779af*/
LABEL_71:
      v10 = Msg; /*0x7779b5*/
    }
  }
  else
  {
    switch ( Msg ) /*0x777836*/
    {
      case 0x205u: /*0x777836*/
        DataGlobal_884D34 = 0; /*0x777952*/
        break;
      case 0x1Cu: /*0x777836*/
        if ( v9 == g_hWnd && g_DDraw_Initialized != (wParam != 0) ) /*0x7778c1*/
        {
          g_DDraw_Initialized = wParam != 0; /*0x7778ce*/
          if ( wParam ) /*0x7778d3*/
          {
            MainWindowProc_Read(); /*0x777930*/
            Debug::Log(aFocusGained); /*0x77793a*/
          }
          else
          {
            Debug::Log(DataGlobal_849E94); /*0x7778da*/
  int v12; // ecx
            LOBYTE(v12) = 1; /*0x7778e2*/
            AsyncIO::Read(v12); /*0x7778e4*/
            sub_407020(); /*0x7778e9*/
            if ( g_WWMouseClass_Instance ) /*0x7778f6*/
            {
              byte_B73560 = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 28))(g_WWMouseClass_Instance); /*0x7778fd*/
              const char * v13 = g_Str_true; /*0x777904*/
              if ( !byte_B73560 ) /*0x777909*/
                v13 = g_Str_false; /*0x77790b*/
              Debug::Log(DataGlobal_849E70, v13); /*0x777916*/
              (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 20))(g_WWMouseClass_Instance); /*0x777926*/
            }
            Debug::Log(aFocusLost); /*0x77792e*/
          }
          g_LoadScreenFlag = 1; /*0x777942*/
        }
        return 0; /*0x77794f*/
      case 0x112u: /*0x777836*/
        if ( (unsigned int)wParam > 0xF120 ) /*0x777856*/
        {
          if ( wParam == 61760 ) /*0x777891*/
            return 0; /*0x77789d*/
        }
        else
        {
          switch ( wParam ) /*0x777858*/
          {
            case 61728: /*0x777858*/
              DataGlobal_A8ED81 = 0; /*0x777880*/
              break;
            case 61472: /*0x777858*/
              DataGlobal_A8ED81 = 1; /*0x777874*/
              break;
            case 61536: /*0x777858*/
              return 0; /*0x777871*/
          }
        }
        break;
    }
  }
LABEL_72:
  if ( InputManager::WndProc(v9, v10, wParam, lParam) ) /*0x7779cb*/
    return 0; /*0x7779da*/
  if ( Msg == 646 )
  {
    v15 = wcslen(&word_B730EC); /*0x7779f2*/
    if ( BYTE1(wParam) ) /*0x7779fe*/
    {
      *(_WORD *)((char *)&hWnd + 1) = (unsigned __int8)wParam; /*0x777a02*/
      LOBYTE(hWnd) = BYTE1(wParam); /*0x777a09*/
    }
    else
    {
      LOWORD(hWnd) = (unsigned __int8)wParam; /*0x777a13*/
    }
    int v16 = MultiByteToWideChar(0, 0, (LPCCH)&hWnd, strlen((const char *)&hWnd), WideCharStr, 1); /*0x777a38*/
    *(&word_B730EC + v15) = v16 == 1 ? WideCharStr[0] : 0;
    word_B730EE[v15] = 0; /*0x777a53*/
    return 0; /*0x777a53*/
  }
  return DefWindowProcA(v9, Msg, wParam, lParam); /*0x777624*/
}
}
} // namespace gamemd

// 0x777BB0
namespace gamemd {
void * E4Recv_777BB0::sub_777BB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  INIClass aP2; // [esp+4h] [ebp-100h] BYREF
  char Buffera[128]; // [esp+84h] [ebp-80h] BYREF

  sprintf(Buffera, (ObjectClass *)&stru_817F40.fallRate, dword_822D1C); /*0x777bcc*/
  aP2[0] = g_Str_gsmallwoo[0]; /*0x777bde*/
  aP2[1] = 0; /*0x777be2*/
  aP2[2] = 0; /*0x777be7*/
  char * v2 = strchr(g_Str_gsmallwoo, 95); /*0x777bec*/
  if ( v2 ) /*0x777bf6*/
    aP2[1] = v2[1]; /*0x777bfb*/
  sprintf(this, (ObjectClass *)&stru_849F20.NeedsSaveOrLink, &aP2); /*0x777c12*/
  return (ObjectClass *)this; /*0x777c1c*/
}
}
} // namespace gamemd

// 0x777C30
namespace gamemd {
void InitWindowCreation(ObjectClass * aP0, int a2, int xRight, int yBottom)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  LONG v6; // eax
  HCURSOR CursorA; // eax
  int SystemMetrics; // [esp-14h] [ebp-5Ch]
  LONG WindowLongA; // [esp-4h] [ebp-4Ch]
  struct tagRECT rc; // [esp+10h] [ebp-38h] BYREF
  WNDCLASSA WndClass; // [esp+20h] [ebp-28h] BYREF

  InitCommonControls(); /*0x777c3b*/
  g_hIcon = (int)LoadIconA((HINSTANCE)aP0, (LPCSTR)0x5D); /*0x777c50*/
  g_hCursor = (ObjectClass *)LoadCursorA((HINSTANCE)g_hInstance, (LPCSTR)0x68); /*0x777c6c*/
  WndClass.style = 3; /*0x777c71*/
  WndClass.lpfnWndProc = (WNDPROC)MainWindowProc; /*0x777c79*/
  WndClass.cbClsExtra = 0; /*0x777c81*/
  WndClass.cbWndExtra = 0; /*0x777c85*/
  WndClass.hInstance = (HINSTANCE)aP0; /*0x777c89*/
  WndClass.hIcon = (HICON)g_hIcon; /*0x777c8d*/
  WndClass.hCursor = (HCURSOR)g_hCursor; /*0x777c91*/
  WndClass.hbrBackground = 0; /*0x777c95*/
  WndClass.lpszMenuName = 0; /*0x777c99*/
  WndClass.lpszClassName = (LPCSTR)&stru_849F20.owningHouseIndex; /*0x777c9d*/
  RegisterClassA(&WndClass); /*0x777ca5*/
  if ( stru_89E138[6208] ) /*0x777cb6*/
  {
    g_hWnd = CreateWindowExA( /*0x777cd6*/
               0,
               (LPCSTR)&stru_849F20.owningHouseIndex,
               (LPCSTR)&stru_849F20.owningHouseIndex,
               0x2CA0000u,
               0,
               0,
               0,
               0,
               0,
               0,
               (HINSTANCE)aP0,
               0);
    SetRect(&rc, 0, 0, xRight, yBottom); /*0x777cec*/
    WindowLongA = GetWindowLongA(g_hWnd, -20); /*0x777d08*/
    BOOL v11 = GetMenu(g_hWnd) != 0; /*0x777d1c*/
    v6 = GetWindowLongA(g_hWnd, -16); /*0x777d20*/
    AdjustWindowRectEx(&rc, v6, v11, WindowLongA); /*0x777d28*/
    MoveWindow(g_hWnd, 0, 0, rc.right - rc.left, rc.bottom - rc.top, 1); /*0x777d4e*/
  }
  else
  {
    SystemMetrics = GetSystemMetrics(1); /*0x777d60*/
    int v7 = GetSystemMetrics(0); /*0x777d62*/
    g_hWnd = CreateWindowExA( /*0x777d7e*/
               8u,
               (LPCSTR)&stru_849F20.owningHouseIndex,
               (LPCSTR)&stru_849F20.owningHouseIndex,
               0x82000000,
               0,
               0,
               v7,
               SystemMetrics,
               0,
               0,
               (HINSTANCE)aP0,
               0);
  }
  dword_B7355C = (ObjectClass *)ImmGetContext((ObjectClass *)g_hWnd); /*0x777d95*/
  ImmAssociateContext((ObjectClass *)g_hWnd, 0); /*0x777d9c*/
  ShowWindow(g_hWnd, 1); /*0x777da9*/
  g_ScreenWidth = a2; /*0x777db5*/
  UpdateWindow(g_hWnd); /*0x777dbc*/
  SetFocus(g_hWnd); /*0x777dc9*/
  RegisterHotKey(g_hWnd, 1, 7u, 0x4Du); /*0x777ddb*/
  CursorA = LoadCursorA((HINSTANCE)g_hInstance, (LPCSTR)0x68); /*0x777dea*/
  return SetCursor(CursorA); /*0x777df3*/
}
}
} // namespace gamemd

// 0x777EA0
namespace gamemd {
int IME_ProcessComposition()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  CHAR Buf[516]; // [esp+8h] [ebp-204h] BYREF

  result = (int)dword_B7355C; /*0x777ea0*/
  WideCharStr[0] = 0; /*0x777eb1*/
  dword_B73564 = 0; /*0x777eb8*/
  MaxCount = 0; /*0x777ebe*/
  if ( dword_B7355C ) /*0x777ec4*/
  {
    result = ImmGetCompositionStringA(dword_B7355C, 8u, Buf, 0x200u); /*0x777ed7*/
    if ( result > 0 ) /*0x777ede*/
    {
  signed int v2; // esi
      Buf[result] = 0; /*0x777ef7*/
      int v1 = MultiByteToWideChar(0, 0, Buf, -1, WideCharStr, 256); /*0x777efb*/
      word_B73518 = 0; /*0x777f03*/
      if ( v1 >= 0 ) /*0x777f0a*/
      {
        MaxCount = (unsigned __int16)ImmGetCompositionStringA(dword_B7355C, 0x80u, 0, 0); /*0x777f2c*/
        v2 = wcslen(WideCharStr); /*0x777f39*/
      }
      else
      {
        v2 = 0; /*0x777f0c*/
      }
      result = _mbsnccnt((const unsigned __int8 *)Buf, MaxCount); /*0x777f47*/
      MaxCount = result; /*0x777f51*/
      WideCharStr[v2] = 0; /*0x777f56*/
      dword_B73564 = v2; /*0x777f5e*/
      if ( result <= v2 ) /*0x777f64*/
      {
        if ( result < 0 ) /*0x777f77*/
          MaxCount = 0; /*0x777f79*/
      }
      else
      {
        MaxCount = v2; /*0x777f66*/
      }
    }
  }
  return result; /*0x777f6c*/
}
}
} // namespace gamemd

// 0x778A20
namespace gamemd {
unsigned int * PlayerProfile_Load(unsigned int * a1, const char ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int8 *v5; // eax
  int Int; // esi
  char Bool_Overwrite; // bl

  _DWORD * v32 = a1; /*0x778a39*/
  BufferIOFile::Constructor(g_Str_File_wolinfoMD_ini); /*0x778a3d*/
  _DWORD v36[22]; // [esp+84h] [ebp-58h] BYREF
  if ( !File::IsReady(v36, 0) ) /*0x778a4c*/
  {
    FileClass::Close(v36); /*0x778a5c*/
    CCFileClass::Close(v36); /*0x778a68*/
    CCFileClass::Reopen(v36, g_Str_File_wolinfoMD_ini, 1); /*0x778a7b*/
  }
  if ( File::IsReady(v36, 0) )
  {
  void *v22[4]; // [esp+24h] [ebp-B8h] BYREF
    v22[1] = 0; /*0x778abf*/
    v22[2] = 0; /*0x778ac3*/
  _DWORD v23[3]; // [esp+34h] [ebp-A8h] BYREF
    v23[1] = 0; /*0x778ac7*/
    v23[2] = 0; /*0x778acb*/
    v23[0] = &vt_GenericNode; /*0x778acf*/
  _DWORD v24[6]; // [esp+40h] [ebp-9Ch] BYREF
    GenericNode::Constructor(v24); /*0x778ad7*/
    LinkedList::Prepend(v23, (int)v24); /*0x778aed*/
    v22[3] = &vt_List_INIClass_INISection; /*0x778af9*/
    memset(&v24[3], 0, 12); /*0x778b07*/
    char v25 = 0; /*0x778b13*/
    int v26 = 0; /*0x778b18*/
    int v27 = 0; /*0x778b1c*/
    v22[0] = &vt_INIClass; /*0x778b20*/
    FileStraw::Open(v22, (int)v36, 0); /*0x778b28*/
    CCFileClass::Close(v36); /*0x778b34*/
  void *v17; // [esp+10h] [ebp-CCh] BYREF
    String::AssignFromPtr((char **)&v17, a2); /*0x778b3e*/
    String::ToLower((const char **)&v17); /*0x778b47*/
    v5 = (unsigned __int8 *)String::GetOrEmpty_Alt((char **)&v17); /*0x778b50*/
    if ( INIClass::BinarySearchSection((int)v22, v5) )
    {
  void *v19; // [esp+18h] [ebp-C4h] BYREF
      unknown_libname_73(&v19); /*0x778ba4*/
  void *v16; // [esp+Ch] [ebp-D0h] BYREF
      String::Assign((char **)&v16, g_INI_Key_Server); /*0x778bb2*/
      INIClass::ReadString(v22, (char **)&v17, (char **)&v16, (char **)&v19, (int)&v19); /*0x778bcf*/
      DeleteAndZero(&v16); /*0x778bd8*/
      String::Assign((char **)&v16, g_INI_Key_Locale); /*0x778be6*/
      Int = INIClass::ReadInt((char **)&v17, (char **)&v16, 0); /*0x778c03*/
      DeleteAndZero(&v16); /*0x778c05*/
      char * v7 = String::GetOrEmpty((char **)&v17); /*0x778c14*/
      Bool_Overwrite = INIClass::ReadBool_Overwrite(v7, unk_849FCC, 0); /*0x778c23*/
  int v30; // [esp+6Ch] [ebp-70h]
      LOBYTE(v30) = Bool_Overwrite; /*0x778c2e*/
      String::Assign((char **)&v16, g_INI_Key_Country); /*0x778c32*/
      int v9 = INIClass::ReadInt((char **)&v17, (char **)&v16, -2); /*0x778c50*/
      DeleteAndZero(&v16); /*0x778c52*/
      String::Assign((char **)&v16, stru_81B138); /*0x778c60*/
      int v10 = INIClass::ReadInt((char **)&v17, (char **)&v16, -2); /*0x778c7e*/
      DeleteAndZero(&v16); /*0x778c80*/
      String::Assign((char **)&v16, DataGlobal_849FC4); /*0x778c8e*/
      int v29 = INIClass::ReadInt((char **)&v17, (char **)&v16, -1); /*0x778cac*/
      DeleteAndZero(&v16); /*0x778cb0*/
      String::Assign((char **)&v16, g_INI_Key_Points); /*0x778cbe*/
      int v35 = INIClass::ReadInt((char **)&v17, (char **)&v16, -1); /*0x778cdc*/
      DeleteAndZero(&v16); /*0x778ce3*/
      String::Assign((char **)&v16, DataGlobal_849FBC); /*0x778cf1*/
      int v31 = INIClass::ReadInt((char **)&v17, (char **)&v16, -1); /*0x778d0f*/
      DeleteAndZero(&v16); /*0x778d13*/
      String::Assign((char **)&v16, DataGlobal_849FB4); /*0x778d21*/
      int v33 = INIClass::ReadInt((char **)&v17, (char **)&v16, -1); /*0x778d3f*/
      DeleteAndZero(&v16); /*0x778d43*/
      String::Assign((char **)&v16, DataGlobal_849FA8); /*0x778d51*/
      int v28 = INIClass::ReadInt((char **)&v17, (char **)&v16, -1); /*0x778d6f*/
      DeleteAndZero(&v16); /*0x778d73*/
      char * v11 = String::GetOrEmpty((char **)&v17); /*0x778d83*/
  int v34; // [esp+7Ch] [ebp-60h]
      LOBYTE(v34) = INIClass::ReadBool_Overwrite(v11, DataGlobal_849F9C, 1); /*0x778d96*/
  void *v18; // [esp+14h] [ebp-C8h] BYREF
      unknown_libname_73(&v18); /*0x778d9d*/
  void *v21; // [esp+20h] [ebp-BCh] BYREF
      unknown_libname_74(&v21); /*0x778da6*/
      String::Assign((char **)&v16, g_INI_Key_UpdateTime); /*0x778db4*/
      INIClass::ReadString(v22, (char **)&v17, (char **)&v16, (char **)&v18, (int)&v18); /*0x778dd1*/
      DeleteAndZero(&v16); /*0x778dda*/
      LocalizeWOLDateString(&v18, &v21); /*0x778de7*/
      DeleteAndZero::Alt2(&v18); /*0x778df0*/
  void *v20; // [esp+1Ch] [ebp-C0h] BYREF
      unknown_libname_74(&v20); /*0x778df9*/
      String::Assign((char **)&v16, g_INI_Key_UpdateDate); /*0x778e07*/
      INIClass::ReadString(v22, (char **)&v17, (char **)&v16, (char **)&v18, (int)&v18); /*0x778e24*/
      DeleteAndZero(&v16); /*0x778e2d*/
      char * v12 = String::GetOrEmpty_Alt((char **)&v18); /*0x778e36*/
      char * v13 = CharToWideString(v12); /*0x778e3d*/
      WideString::Reassign(&v20, (wchar_t *)v13); /*0x778e47*/
      if ( __2_YAPAXI_Z(0x44u) )
  int v14; // esi
        v14 = LoadAccountInfoWOL_Load(
                &v19,
                Int,
                v30,
                Bool_Overwrite != 0 ? 1 : 3,
                v9,
                v10,
                v29,
                v35,
                v31,
                v33,
                v28,
                v34,
                &v20,
                &v21);
      else
        v14 = 0; /*0x778eb7*/
      _DWORD * v15 = v32; /*0x778eb9*/
      ComPtr::Constructor(v32); /*0x778ebf*/
      *v15 = &vt_rc_ptr_PlayerProfile; /*0x778ec6*/
      ComPtr::Set(v15, v14); /*0x778ecd*/
      DeleteAndZero::Alt(&v20); /*0x778ed6*/
      DeleteAndZero::Alt(&v21); /*0x778edf*/
      DeleteAndZero(&v18); /*0x778ee8*/
      DeleteAndZero(&v19); /*0x778ef1*/
      DeleteAndZero(&v17); /*0x778efa*/
      HashTable::DestroyHashTableINIClass(v22); /*0x778f03*/
      v36[0] = &off_7E1668; /*0x778f0f*/
      BufferIOFileClass::Dtor(v36); /*0x778f1a*/
      return v15; /*0x778f1f*/
    }
    else
    {
      LoadAccountInfoWOL(a1); /*0x778b65*/
      DeleteAndZero(&v17); /*0x778b6e*/
      HashTable::DestroyHashTableINIClass(v22); /*0x778b77*/
      v36[0] = &off_7E1668; /*0x778b83*/
      BufferIOFileClass::Dtor(v36); /*0x778b8e*/
      return a1; /*0x778b93*/
    }
  }
  else
  {
    LoadAccountInfoWOL(a1); /*0x778a93*/
    v36[0] = &off_7E1668; /*0x778a9f*/
    BufferIOFileClass::Dtor(v36); /*0x778aaa*/
    return a1; /*0x778aaf*/
  }
}
}
} // namespace gamemd

// 0x778F30
namespace gamemd {
void LocalizeWOLDateString(char ** a1, void ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CampaignScore *v5; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v7; // eax
  CampaignScore *v8; // eax
  wchar_t *v9; // eax
  CampaignScore *v10; // eax
  wchar_t *v11; // eax
  CampaignScore *v12; // eax
  wchar_t *v13; // eax
  CampaignScore *v14; // eax
  wchar_t *v15; // eax
  CampaignScore *v16; // eax
  wchar_t *v17; // eax
  CampaignScore *v18; // eax
  wchar_t *v19; // eax
  CampaignScore *v20; // eax
  wchar_t *v21; // eax
  CampaignScore *v22; // eax
  wchar_t *v23; // eax
  CampaignScore *v24; // eax
  wchar_t *v25; // eax
  CampaignScore *v26; // eax
  wchar_t *v27; // eax
  CampaignScore *v28; // eax
  wchar_t *v29; // eax

  char * v3 = String::GetOrEmpty_Alt(a1); /*0x778f33*/
  char * v4 = CharToWideString(v3); /*0x778f3a*/
  WideString::Reassign(a2, (wchar_t *)v4); /*0x778f42*/
  v5 = WideString::GetOrEmpty((wchar_t **)a2); /*0x778f4e*/
  if ( wcsstr(v5, (const wchar_t *)&g_INI_Key_Jan) ) /*0x778f54*/
  {
    StringCSF = GetStringCSF(&unk_84A0C4, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 127); /*0x778f6e*/
    LOBYTE(v7) = WideString::Replace(a2, &g_INI_Key_Jan, StringCSF); /*0x778f7b*/
  }
  else
  {
    v8 = WideString::GetOrEmpty((wchar_t **)a2); /*0x778f89*/
    if ( wcsstr(v8, L"Feb") ) /*0x778f8f*/
    {
      v9 = GetStringCSF(&unk_84A0AC, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 132); /*0x778fac*/
      LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Feb", v9); /*0x778fb9*/
    }
    else
    {
      v10 = WideString::GetOrEmpty((wchar_t **)a2); /*0x778fc7*/
      if ( wcsstr(v10, L"Mar") ) /*0x778fcd*/
      {
        v11 = GetStringCSF(&unk_84A098, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 137); /*0x778fea*/
        LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Mar", v11); /*0x778ff7*/
      }
      else
      {
        v12 = WideString::GetOrEmpty((wchar_t **)a2); /*0x779005*/
        if ( wcsstr(v12, L"Apr") ) /*0x77900b*/
        {
          v13 = GetStringCSF(&unk_84A084, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 142); /*0x779028*/
          LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Apr", v13); /*0x779035*/
        }
        else
        {
          v14 = WideString::GetOrEmpty((wchar_t **)a2); /*0x779043*/
          if ( wcsstr(v14, L"May") ) /*0x779049*/
          {
            v15 = GetStringCSF(&unk_84A074, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 147); /*0x779066*/
            LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"May", v15); /*0x779073*/
          }
          else
          {
            v16 = WideString::GetOrEmpty((wchar_t **)a2); /*0x779081*/
            if ( wcsstr(v16, L"Jun") ) /*0x779087*/
            {
              v17 = GetStringCSF(&unk_84A060, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 152); /*0x7790a4*/
              LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Jun", v17); /*0x7790b1*/
            }
            else
            {
              v18 = WideString::GetOrEmpty((wchar_t **)a2); /*0x7790bf*/
              if ( wcsstr(v18, L"Jul") ) /*0x7790c5*/
              {
                v19 = GetStringCSF(&unk_84A04C, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 157); /*0x7790e2*/
                LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Jul", v19); /*0x7790ef*/
              }
              else
              {
                v20 = WideString::GetOrEmpty((wchar_t **)a2); /*0x7790fd*/
                if ( wcsstr(v20, L"Aug") ) /*0x779103*/
                {
                  v21 = GetStringCSF(&unk_84A038, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 162); /*0x779120*/
                  LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Aug", v21); /*0x77912d*/
                }
                else
                {
                  v22 = WideString::GetOrEmpty((wchar_t **)a2); /*0x77913b*/
                  if ( wcsstr(v22, L"Sep") ) /*0x779141*/
                  {
                    v23 = GetStringCSF( /*0x77915e*/
                            (wchar_t *)&stru_84A004.CampaignScore_field_0x1C,
                            0,
                            (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
                            167);
                    LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Sep", v23); /*0x77916b*/
                  }
                  else
                  {
                    v24 = WideString::GetOrEmpty((wchar_t **)a2); /*0x779179*/
                    if ( wcsstr(v24, (const wchar_t *)&stru_84A004.CampaignScore_field_0x14) ) /*0x77917f*/
                    {
                      v25 = GetStringCSF( /*0x77919c*/
                              (wchar_t *)&stru_84A004.CampaignScore_field_0x08,
                              0,
                              (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
                              172);
                      LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)&stru_84A004.CampaignScore_field_0x14, v25); /*0x7791a9*/
                    }
                    else
                    {
                      v26 = WideString::GetOrEmpty((wchar_t **)a2); /*0x7791b7*/
                      if ( wcsstr(v26, (const wchar_t *)&stru_84A004) ) /*0x7791bd*/
                      {
                        v27 = GetStringCSF( /*0x7791da*/
                                &unk_849FF4,
                                0,
                                (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
                                177);
                        LOBYTE(v7) = WideString::Replace(a2, &stru_84A004, v27); /*0x7791e7*/
                      }
                      else
                      {
                        v28 = WideString::GetOrEmpty((wchar_t **)a2); /*0x7791f5*/
                        v7 = wcsstr(v28, L"Dec"); /*0x7791fb*/
                        if ( v7 ) /*0x779205*/
                        {
                          v29 = GetStringCSF( /*0x779218*/
                                  &unk_849FDC,
                                  0,
                                  (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
                                  182);
                          LOBYTE(v7) = WideString::Replace(a2, (CampaignScore *)L"Dec", v29); /*0x779225*/
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)v7; /*0x778f80*/
}
}
} // namespace gamemd

// 0x779230
namespace gamemd {
void ConvertDateMonthNames(wchar_t ** a1, void ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CampaignScore *v4; // eax
  CampaignScore *v5; // eax
  wchar_t *v6; // eax
  CampaignScore *v7; // eax
  wchar_t *v8; // eax
  CampaignScore *v9; // eax
  wchar_t *v10; // eax
  CampaignScore *v11; // eax
  wchar_t *v12; // eax
  CampaignScore *v13; // eax
  wchar_t *v14; // eax
  CampaignScore *v15; // eax
  wchar_t *v16; // eax
  CampaignScore *v17; // eax
  wchar_t *v18; // eax
  CampaignScore *v19; // eax
  wchar_t *v20; // eax
  CampaignScore *v21; // eax
  wchar_t *v22; // eax
  CampaignScore *v23; // eax
  wchar_t *v24; // eax
  CampaignScore *v25; // eax
  wchar_t *v26; // eax
  CampaignScore *v27; // eax
  wchar_t *v28; // eax
  CampaignScore *v29; // eax
  wchar_t *StringCSF; // [esp-4h] [ebp-10h]
  wchar_t *v32; // [esp-4h] [ebp-10h]
  wchar_t *v33; // [esp-4h] [ebp-10h]
  wchar_t *v34; // [esp-4h] [ebp-10h]
  wchar_t *v35; // [esp-4h] [ebp-10h]
  wchar_t *v36; // [esp-4h] [ebp-10h]
  wchar_t *v37; // [esp-4h] [ebp-10h]
  wchar_t *v38; // [esp-4h] [ebp-10h]
  wchar_t *v39; // [esp-4h] [ebp-10h]
  wchar_t *v40; // [esp-4h] [ebp-10h]
  wchar_t *v41; // [esp-4h] [ebp-10h]
  wchar_t *v42; // [esp-4h] [ebp-10h]
  wchar_t *v43; // [esp+8h] [ebp-4h] BYREF

  unknown_libname_74(&v43); /*0x77923b*/
  v4 = WideString::GetOrEmpty_Alt(a1); /*0x779242*/
  WideString::Reassign((void **)&v43, (wchar_t *)v4); /*0x77924c*/
  StringCSF = GetStringCSF(&unk_84A0C4, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 191); /*0x77926b*/
  v5 = WideString::GetOrEmpty(&v43); /*0x77926c*/
  if ( wcsstr(v5, StringCSF) ) /*0x779272*/
  {
    v6 = GetStringCSF(&unk_84A0C4, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 192); /*0x779294*/
    WideString::Replace((void **)&v43, (CampaignScore *)v6, (wchar_t *)&g_INI_Key_Jan); /*0x77929e*/
  }
  v32 = GetStringCSF(&unk_84A0AC, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 194); /*0x7792bd*/
  v7 = WideString::GetOrEmpty(&v43); /*0x7792be*/
  if ( wcsstr(v7, v32) ) /*0x7792c4*/
  {
    v8 = GetStringCSF(&unk_84A0AC, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 195); /*0x7792e6*/
    WideString::Replace((void **)&v43, (CampaignScore *)v8, (wchar_t *)L"Feb"); /*0x7792f0*/
  }
  v33 = GetStringCSF(&unk_84A098, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 197); /*0x77930f*/
  v9 = WideString::GetOrEmpty(&v43); /*0x779310*/
  if ( wcsstr(v9, v33) ) /*0x779316*/
  {
    v10 = GetStringCSF(&unk_84A098, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 198); /*0x779338*/
    WideString::Replace((void **)&v43, (CampaignScore *)v10, (wchar_t *)L"Mar"); /*0x779342*/
  }
  v34 = GetStringCSF(&unk_84A084, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 200); /*0x779361*/
  v11 = WideString::GetOrEmpty(&v43); /*0x779362*/
  if ( wcsstr(v11, v34) ) /*0x779368*/
  {
    v12 = GetStringCSF(&unk_84A084, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 201); /*0x77938a*/
    WideString::Replace((void **)&v43, (CampaignScore *)v12, (wchar_t *)L"Apr"); /*0x779394*/
  }
  v35 = GetStringCSF(&unk_84A074, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 203); /*0x7793b3*/
  v13 = WideString::GetOrEmpty(&v43); /*0x7793b4*/
  if ( wcsstr(v13, v35) ) /*0x7793ba*/
  {
    v14 = GetStringCSF(&unk_84A074, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 204); /*0x7793dc*/
    WideString::Replace((void **)&v43, (CampaignScore *)v14, (wchar_t *)L"May"); /*0x7793e6*/
  }
  v36 = GetStringCSF(&unk_84A060, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 206); /*0x779405*/
  v15 = WideString::GetOrEmpty(&v43); /*0x779406*/
  if ( wcsstr(v15, v36) ) /*0x77940c*/
  {
    v16 = GetStringCSF(&unk_84A060, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 207); /*0x77942e*/
    WideString::Replace((void **)&v43, (CampaignScore *)v16, (wchar_t *)L"Jun"); /*0x779438*/
  }
  v37 = GetStringCSF(&unk_84A04C, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 209); /*0x779457*/
  v17 = WideString::GetOrEmpty(&v43); /*0x779458*/
  if ( wcsstr(v17, v37) ) /*0x77945e*/
  {
    v18 = GetStringCSF(&unk_84A04C, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 210); /*0x779480*/
    WideString::Replace((void **)&v43, (CampaignScore *)v18, (wchar_t *)L"Jul"); /*0x77948a*/
  }
  v38 = GetStringCSF(&unk_84A038, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 212); /*0x7794a9*/
  v19 = WideString::GetOrEmpty(&v43); /*0x7794aa*/
  if ( wcsstr(v19, v38) ) /*0x7794b0*/
  {
    v20 = GetStringCSF(&unk_84A038, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 213); /*0x7794d2*/
    WideString::Replace((void **)&v43, (CampaignScore *)v20, (wchar_t *)L"Aug"); /*0x7794dc*/
  }
  v39 = GetStringCSF( /*0x7794fb*/
          (wchar_t *)&stru_84A004.CampaignScore_field_0x1C,
          0,
          (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
          215);
  v21 = WideString::GetOrEmpty(&v43); /*0x7794fc*/
  if ( wcsstr(v21, v39) ) /*0x779502*/
  {
    v22 = GetStringCSF( /*0x779524*/
            (wchar_t *)&stru_84A004.CampaignScore_field_0x1C,
            0,
            (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
            216);
    WideString::Replace((void **)&v43, (CampaignScore *)v22, (wchar_t *)L"Sep"); /*0x77952e*/
  }
  v40 = GetStringCSF( /*0x77954d*/
          (wchar_t *)&stru_84A004.CampaignScore_field_0x08,
          0,
          (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
          218);
  v23 = WideString::GetOrEmpty(&v43); /*0x77954e*/
  if ( wcsstr(v23, v40) ) /*0x779554*/
  {
    v24 = GetStringCSF( /*0x779576*/
            (wchar_t *)&stru_84A004.CampaignScore_field_0x08,
            0,
            (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp",
            219);
    WideString::Replace((void **)&v43, (CampaignScore *)v24, (wchar_t *)&stru_84A004.CampaignScore_field_0x14); /*0x779580*/
  }
  v41 = GetStringCSF(&unk_849FF4, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 221); /*0x77959f*/
  v25 = WideString::GetOrEmpty(&v43); /*0x7795a0*/
  if ( wcsstr(v25, v41) ) /*0x7795a6*/
  {
    v26 = GetStringCSF(&unk_849FF4, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 222); /*0x7795c8*/
    WideString::Replace((void **)&v43, (CampaignScore *)v26, (wchar_t *)&stru_84A004); /*0x7795d2*/
  }
  v42 = GetStringCSF(&unk_849FDC, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 224); /*0x7795f1*/
  v27 = WideString::GetOrEmpty(&v43); /*0x7795f2*/
  if ( wcsstr(v27, v42) ) /*0x7795f8*/
  {
    v28 = GetStringCSF(&unk_849FDC, 0, (CampaignScore *)"D:\\ra2mdpost\\WOLPersonaInformation.cpp", 225); /*0x77961a*/
    WideString::Replace((void **)&v43, (CampaignScore *)v28, (wchar_t *)L"Dec"); /*0x779624*/
  }
  v29 = WideString::GetOrEmpty(&v43); /*0x77962d*/
  char * v30 = ToWideStringChar((IUnknown *)v29); /*0x779634*/
  String::Assign_Bool(a2, v30); /*0x77963c*/
  DeleteAndZero::Alt((void **)&v43); /*0x779645*/
}
}
} // namespace gamemd

// 0x77B2A0
namespace gamemd {
int RunWOLMainLoop(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char **AutoLogin; // eax
  char **Config; // eax
  int started; // eax

  while ( (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) < 0 ) /*0x77b2b6*/
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x77b2c0*/
  RunWOLMainLoop_Helper(); /*0x77b2d2*/
  int v2 = dword_A83D14; /*0x77b2d7*/
  if ( dword_A83D14 == -1 ) /*0x77b2e0*/
    v2 = dword_A83D18; /*0x77b2e2*/
  if ( v2 == StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_INTRO) ) /*0x77b2f9*/
    Theme::QueueSong((int)&g_BuildingTypeClass_Count, -3); /*0x77b302*/
  ReadWOLAccountINI(); /*0x77b307*/
  char v3 = byte_A83D22; /*0x77b30c*/
  byte_A83D22 = 1; /*0x77b312*/
  char v16 = v3; /*0x77b319*/
  RunWOLMainLoop_Find(); /*0x77b31d*/
  if ( !String::Length((const char **)&g_WebBrowser) ) /*0x77b327*/
  {
  void *v17; // [esp+14h] [ebp-Ch] BYREF
    AutoLogin = ReadAutoLoginWOL((char **)&v17); /*0x77b334*/
    String::Reassign((char **)&g_WebBrowser, (const char **)AutoLogin); /*0x77b33f*/
    DeleteAndZero(&v17); /*0x77b348*/
    if ( !String::Length((const char **)&g_WebBrowser) ) /*0x77b352*/
    {
      int v18 = 0; /*0x77b361*/
      char v19 = 0; /*0x77b365*/
      ReadRegistryOptionsWOL(&v18); /*0x77b36a*/
      if ( Flag::IsNot2(&v18) ) /*0x77b373*/
      {
        Config = LoadConfigWOL((char **)&v17); /*0x77b380*/
        String::Reassign((char **)&g_WebBrowser, (const char **)Config); /*0x77b38b*/
        DeleteAndZero(&v17); /*0x77b394*/
      }
    }
  }
  int v6 = dword_B73678; /*0x77b39d*/
  int v7 = 0; /*0x77b3a3*/
  bool v15 = 0; /*0x77b3a5*/
  do /*0x77b527*/
  {
  int v10; // ecx
    if ( !g_GameOptionsFlags || g_GameOptionsFlags == 6 ) /*0x77b3b7*/
      int v8 = 0; /*0x77b3c6*/
    else
      v8 = (g_GameOptionsFlags == 3) + 1; /*0x77b3c2*/
    if ( !v6 && v8 ) /*0x77b3ce*/
    {
      int v9 = LoginFlowWOL(); /*0x77b3d0*/
      v7 = v9; /*0x77b3d5*/
      if ( v9 ) /*0x77b3d9*/
      {
        if ( v9 != 1 ) /*0x77b3dc*/
        {
LABEL_54:
          g_GameMode_Current[0] = 0; /*0x77b532*/
          g_GameOptionsFlags = 0; /*0x77b538*/
          DataGlobal_A8B248 = 0; /*0x77b53e*/
          HandleLogoutWOL(); /*0x77b544*/
          byte_A83D22 = v16; /*0x77b54d*/
          Dialog::CloseAll(); /*0x77b553*/
          return v7; /*0x77b561*/
        }
        dword_B73678 = v8; /*0x77b3e2*/
      }
      else
      {
        if ( !g_GameOptionsFlags ) /*0x77b3f0*/
        {
          g_GameMode_Current[0] = 0; /*0x77b562*/
          HandleLogoutWOL(); /*0x77b568*/
          byte_A83D22 = v16; /*0x77b571*/
          Dialog::CloseAll(); /*0x77b576*/
          return 0; /*0x77b584*/
        }
        g_GameOptionsFlags = 0; /*0x77b3f6*/
        DataGlobal_A8B248 = 0; /*0x77b3fc*/
      }
    }
    RunWOLMainLoop_Find(); /*0x77b402*/
    switch ( g_GameOptionsFlags ) /*0x77b415*/
    {
      case 0: /*0x77b415*/
        a1 = 0; /*0x77b41c*/
        v7 = RunWOLMainLoop_Read(); /*0x77b423*/
        v15 = v7 != 1; /*0x77b428*/
        break; /*0x77b42d*/
      case 1: /*0x77b415*/
      case 2: /*0x77b415*/
        if ( !a1 ) /*0x77b43b*/
        {
          started = JoinLobbyWOL(); /*0x77b432*/
          goto LABEL_34; /*0x77b437*/
        }
        RunWOLMainLoop_Read_7A2970(); /*0x77b43d*/
        goto LABEL_42; /*0x77b442*/
      case 3: /*0x77b415*/
        if ( a1 ) /*0x77b465*/
          RunWOLMainLoop_Read_7A2970(); /*0x77b467*/
        started = StartWDTCampaign(a1); /*0x77b46e*/
LABEL_34:
        v7 = started; /*0x77b473*/
        a1 = 0; /*0x77b475*/
        if ( started ) /*0x77b479*/
          goto LABEL_35; /*0x77b479*/
        goto LABEL_42; /*0x77b479*/
      case 4: /*0x77b415*/
        v7 = NetworkLobbyWOL(0, a1); /*0x77b450*/
        a1 = 0; /*0x77b452*/
        if ( v7 ) /*0x77b456*/
          goto LABEL_35; /*0x77b456*/
        if ( g_GameOptionsFlags == 4 ) /*0x77b45f*/
          goto LABEL_42; /*0x77b45f*/
        break; /*0x77b45f*/
      case 5: /*0x77b415*/
        v7 = GameOptionsScreenWOL(); /*0x77b489*/
        a1 = 0; /*0x77b48b*/
        if ( v7 ) /*0x77b48f*/
        {
LABEL_35:
          v15 = 1; /*0x77b47b*/
        }
        else if ( g_GameOptionsFlags == 5 ) /*0x77b498*/
        {
          v10 = DataGlobal_A8B248; /*0x77b49a*/
          DataGlobal_A8B248 = 0; /*0x77b4a0*/
          g_GameOptionsFlags = v10; /*0x77b4a6*/
        }
        break; /*0x77b4ac*/
      case 6: /*0x77b415*/
        int v12 = RunWOLMainLoop_Init(); /*0x77b4ae*/
        v7 = v12; /*0x77b4b3*/
        a1 = 0; /*0x77b4b5*/
        if ( v12 == -2 || v12 == -1 ) /*0x77b4c3*/
          goto LABEL_54; /*0x77b4c3*/
        if ( !v12 ) /*0x77b4cb*/
LABEL_42:
          g_GameOptionsFlags = 0; /*0x77b4cd*/
        break; /*0x77b4cd*/
      default:
        break;
    }
    v6 = dword_B73678; /*0x77b4d3*/
    if ( v7 != 1 && dword_B73678 ) /*0x77b4e0*/
    {
      if ( !g_GameOptionsFlags || g_GameOptionsFlags == 6 ) /*0x77b4fb*/
        int v13 = 0; /*0x77b508*/
      else
        v13 = (g_GameOptionsFlags == 3) + 1; /*0x77b505*/
      if ( dword_B73678 != v13 || v15 ) /*0x77b510*/
      {
        LOBYTE(v10) = v15; /*0x77b4ec*/
        RunWOLMainLoop_Delete(v10, dword_B73678); /*0x77b512*/
        v6 = 0; /*0x77b517*/
        dword_B73678 = 0; /*0x77b519*/
      }
    }
  }
  while ( !v15 ); /*0x77b527*/
  if ( v7 == 1 ) /*0x77b5b8*/
  {
    Dialog::CloseAll(); /*0x77b5ba*/
    return 1; /*0x77b5bf*/
  }
  else
  {
    HandleLogoutWOL(); /*0x77b5c9*/
    g_GameMode_Current[0] = 0; /*0x77b5d2*/
    byte_A83D22 = v16; /*0x77b5d8*/
    g_GameOptionsFlags = 0; /*0x77b5de*/
    DataGlobal_A8B248 = 0; /*0x77b5e4*/
    Dialog::CloseAll(); /*0x77b5ea*/
    return 0; /*0x77b5ef*/
  }
}
}
} // namespace gamemd

// 0x77BAE0
namespace gamemd {
void sub_77BAE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int i; // ebx
  void **v3; // edi

  unsigned int v0 = dword_B768C8; /*0x77bae0*/
  for ( i = 0; i < dword_B768C8; v0 = dword_B768C8 ) /*0x77baed*/
  {
    int v2 = *((_DWORD *)g_WOL_ListParser + i); /*0x77baf4*/
    while ( v2 ) /*0x77baf9*/
    {
      v3 = (void **)v2; /*0x77bafb*/
      v2 = *(_DWORD *)(v2 + 112); /*0x77bafd*/
      DeleteAndZero(v3); /*0x77bb06*/
      __3_YAXPAX_Z(v3); /*0x77bb0c*/
    }
    *((_DWORD *)g_WOL_ListParser + i++) = 0; /*0x77bb1f*/
  }
  unsigned int v4 = dword_B768F0; /*0x77bb30*/
  dword_B768C4 = 0; /*0x77bb36*/
  if ( v0 > dword_B768F0 ) /*0x77bb42*/
  {
    do /*0x77bbf5*/
    {
      if ( byte_B768D4 || v0 <= v4 ) /*0x77bb58*/
        break; /*0x77bb58*/
      int * v5 = (int *)g_WOL_ListParser; /*0x77bb64*/
      int v6 = v0; /*0x77bb6a*/
      dword_B768C8 = v0 >> 1; /*0x77bb6f*/
      --dword_B768CC; /*0x77bb7b*/
      g_WOL_ListParser = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77bb94*/
      memset(g_WOL_ListParser, 0, 4 * dword_B768C8); /*0x77bb9c*/
      if ( v6 > 0 ) /*0x77bb9e*/
      {
        int * v7 = v5; /*0x77bba0*/
        int v8 = v6; /*0x77bba2*/
        do /*0x77bbdd*/
        {
          int v9 = *v7; /*0x77bba4*/
          if ( *v7 ) /*0x77bba4*/
          {
  int v12; // eax
            do /*0x77bbd7*/
            {
              int v10 = dword_B768D8(v9) & ((1 << dword_B768CC) - 1); /*0x77bbc0*/
              int v11 = *((_DWORD *)g_WOL_ListParser + v10); /*0x77bbc7*/
              *((_DWORD *)g_WOL_ListParser + v10) = v9; /*0x77bbca*/
              v12 = *(_DWORD *)(v9 + 112); /*0x77bbcd*/
              *(_DWORD *)(v9 + 112) = v11; /*0x77bbd0*/
              v9 = v12; /*0x77bbd5*/
            }
            while ( v12 ); /*0x77bbd7*/
          }
          ++v7; /*0x77bbd9*/
          --v8; /*0x77bbdc*/
        }
        while ( v8 ); /*0x77bbdd*/
      }
      __3_YAXPAX_Z(v5); /*0x77bbe0*/
      v4 = dword_B768F0; /*0x77bbe5*/
      v0 = dword_B768C8; /*0x77bbeb*/
    }
    while ( dword_B768C8 > (unsigned int)dword_B768F0 ); /*0x77bbf5*/
  }
  __3_YAXPAX_Z(g_WOL_ListParser); /*0x77bc01*/
}
}
} // namespace gamemd

// 0x77BCB0
namespace gamemd {
void sub_77BCB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int i; // ebx
  void **v3; // edi

  unsigned int v0 = DataGlobal_B73B00; /*0x77bcb0*/
  for ( i = 0; i < DataGlobal_B73B00; v0 = DataGlobal_B73B00 ) /*0x77bcbd*/
  {
    int v2 = *((_DWORD *)DataGlobal_B73AF8 + i); /*0x77bcc4*/
    while ( v2 ) /*0x77bcc9*/
    {
      v3 = (void **)v2; /*0x77bccb*/
      v2 = *(_DWORD *)(v2 + 112); /*0x77bccd*/
      DeleteAndZero(v3); /*0x77bcd6*/
      __3_YAXPAX_Z(v3); /*0x77bcdc*/
    }
    *((_DWORD *)DataGlobal_B73AF8 + i++) = 0; /*0x77bcef*/
  }
  unsigned int v4 = DataGlobal_B73B28; /*0x77bd00*/
  DataGlobal_B73AFC = 0; /*0x77bd06*/
  if ( v0 > DataGlobal_B73B28 ) /*0x77bd12*/
  {
    do /*0x77bdc5*/
    {
      if ( DataGlobal_B73B0C || v0 <= v4 ) /*0x77bd28*/
        break; /*0x77bd28*/
      int * v5 = (int *)DataGlobal_B73AF8; /*0x77bd34*/
      int v6 = v0; /*0x77bd3a*/
      DataGlobal_B73B00 = v0 >> 1; /*0x77bd3f*/
      --DataGlobal_B73B04; /*0x77bd4b*/
      DataGlobal_B73AF8 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77bd64*/
      memset(DataGlobal_B73AF8, 0, 4 * DataGlobal_B73B00); /*0x77bd6c*/
      if ( v6 > 0 ) /*0x77bd6e*/
      {
        int * v7 = v5; /*0x77bd70*/
        int v8 = v6; /*0x77bd72*/
        do /*0x77bdad*/
        {
          int v9 = *v7; /*0x77bd74*/
          if ( *v7 ) /*0x77bd74*/
          {
  int v12; // eax
            do /*0x77bda7*/
            {
              int v10 = DataGlobal_B73B10(v9) & ((1 << DataGlobal_B73B04) - 1); /*0x77bd90*/
              int v11 = *((_DWORD *)DataGlobal_B73AF8 + v10); /*0x77bd97*/
              *((_DWORD *)DataGlobal_B73AF8 + v10) = v9; /*0x77bd9a*/
              v12 = *(_DWORD *)(v9 + 112); /*0x77bd9d*/
              *(_DWORD *)(v9 + 112) = v11; /*0x77bda0*/
              v9 = v12; /*0x77bda5*/
            }
            while ( v12 ); /*0x77bda7*/
          }
          ++v7; /*0x77bda9*/
          --v8; /*0x77bdac*/
        }
        while ( v8 ); /*0x77bdad*/
      }
      __3_YAXPAX_Z(v5); /*0x77bdb0*/
      v4 = DataGlobal_B73B28; /*0x77bdb5*/
      v0 = DataGlobal_B73B00; /*0x77bdbb*/
    }
    while ( DataGlobal_B73B00 > (unsigned int)DataGlobal_B73B28 ); /*0x77bdc5*/
  }
  __3_YAXPAX_Z(DataGlobal_B73AF8); /*0x77bdd1*/
}
}
} // namespace gamemd

// 0x77BE80
namespace gamemd {
void sub_77BE80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int i; // ebx
  void **v3; // edi

  unsigned int v0 = dword_B77D88; /*0x77be80*/
  for ( i = 0; i < dword_B77D88; v0 = dword_B77D88 ) /*0x77be8d*/
  {
    int v2 = *((_DWORD *)dword_B77D80 + i); /*0x77be94*/
    while ( v2 ) /*0x77be99*/
    {
      v3 = (void **)v2; /*0x77be9b*/
      v2 = *(_DWORD *)(v2 + 112); /*0x77be9d*/
      DeleteAndZero(v3); /*0x77bea6*/
      __3_YAXPAX_Z(v3); /*0x77beac*/
    }
    *((_DWORD *)dword_B77D80 + i++) = 0; /*0x77bebf*/
  }
  unsigned int v4 = dword_B77DB0; /*0x77bed0*/
  dword_B77D84 = 0; /*0x77bed6*/
  if ( v0 > dword_B77DB0 ) /*0x77bee2*/
  {
    do /*0x77bf95*/
    {
      if ( byte_B77D94 || v0 <= v4 ) /*0x77bef8*/
        break; /*0x77bef8*/
      int * v5 = (int *)dword_B77D80; /*0x77bf04*/
      int v6 = v0; /*0x77bf0a*/
      dword_B77D88 = v0 >> 1; /*0x77bf0f*/
      --dword_B77D8C; /*0x77bf1b*/
      dword_B77D80 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77bf34*/
      memset(dword_B77D80, 0, 4 * dword_B77D88); /*0x77bf3c*/
      if ( v6 > 0 ) /*0x77bf3e*/
      {
        int * v7 = v5; /*0x77bf40*/
        int v8 = v6; /*0x77bf42*/
        do /*0x77bf7d*/
        {
          int v9 = *v7; /*0x77bf44*/
          if ( *v7 ) /*0x77bf44*/
          {
  int v12; // eax
            do /*0x77bf77*/
            {
              int v10 = dword_B77D98(v9) & ((1 << dword_B77D8C) - 1); /*0x77bf60*/
              int v11 = *((_DWORD *)dword_B77D80 + v10); /*0x77bf67*/
              *((_DWORD *)dword_B77D80 + v10) = v9; /*0x77bf6a*/
              v12 = *(_DWORD *)(v9 + 112); /*0x77bf6d*/
              *(_DWORD *)(v9 + 112) = v11; /*0x77bf70*/
              v9 = v12; /*0x77bf75*/
            }
            while ( v12 ); /*0x77bf77*/
          }
          ++v7; /*0x77bf79*/
          --v8; /*0x77bf7c*/
        }
        while ( v8 ); /*0x77bf7d*/
      }
      __3_YAXPAX_Z(v5); /*0x77bf80*/
      v4 = dword_B77DB0; /*0x77bf85*/
      v0 = dword_B77D88; /*0x77bf8b*/
    }
    while ( dword_B77D88 > (unsigned int)dword_B77DB0 ); /*0x77bf95*/
  }
  __3_YAXPAX_Z(dword_B77D80); /*0x77bfa1*/
}
}
} // namespace gamemd

// 0x77C050
namespace gamemd {
void sub_77C050()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int i; // ebx
  void **v3; // edi

  unsigned int v0 = dword_B76648; /*0x77c050*/
  for ( i = 0; i < dword_B76648; v0 = dword_B76648 ) /*0x77c05d*/
  {
    int v2 = *((_DWORD *)dword_B76640 + i); /*0x77c064*/
    while ( v2 ) /*0x77c069*/
    {
      v3 = (void **)v2; /*0x77c06b*/
      v2 = *(_DWORD *)(v2 + 72); /*0x77c06d*/
      DeleteAndZero(v3); /*0x77c076*/
      __3_YAXPAX_Z(v3); /*0x77c07c*/
    }
    *((_DWORD *)dword_B76640 + i++) = 0; /*0x77c08f*/
  }
  unsigned int v4 = dword_B76670; /*0x77c0a0*/
  dword_B76644 = 0; /*0x77c0a6*/
  if ( v0 > dword_B76670 ) /*0x77c0b2*/
  {
    do /*0x77c165*/
    {
      if ( byte_B76654 || v0 <= v4 ) /*0x77c0c8*/
        break; /*0x77c0c8*/
      int * v5 = (int *)dword_B76640; /*0x77c0d4*/
      int v6 = v0; /*0x77c0da*/
      dword_B76648 = v0 >> 1; /*0x77c0df*/
      --dword_B7664C; /*0x77c0eb*/
      dword_B76640 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77c104*/
      memset(dword_B76640, 0, 4 * dword_B76648); /*0x77c10c*/
      if ( v6 > 0 ) /*0x77c10e*/
      {
        int * v7 = v5; /*0x77c110*/
        int v8 = v6; /*0x77c112*/
        do /*0x77c14d*/
        {
          int v9 = *v7; /*0x77c114*/
          if ( *v7 ) /*0x77c114*/
          {
  int v12; // eax
            do /*0x77c147*/
            {
              int v10 = dword_B76658(v9) & ((1 << dword_B7664C) - 1); /*0x77c130*/
              int v11 = *((_DWORD *)dword_B76640 + v10); /*0x77c137*/
              *((_DWORD *)dword_B76640 + v10) = v9; /*0x77c13a*/
              v12 = *(_DWORD *)(v9 + 72); /*0x77c13d*/
              *(_DWORD *)(v9 + 72) = v11; /*0x77c140*/
              v9 = v12; /*0x77c145*/
            }
            while ( v12 ); /*0x77c147*/
          }
          ++v7; /*0x77c149*/
          --v8; /*0x77c14c*/
        }
        while ( v8 ); /*0x77c14d*/
      }
      __3_YAXPAX_Z(v5); /*0x77c150*/
      v4 = dword_B76670; /*0x77c155*/
      v0 = dword_B76648; /*0x77c15b*/
    }
    while ( dword_B76648 > (unsigned int)dword_B76670 ); /*0x77c165*/
  }
  __3_YAXPAX_Z(dword_B76640); /*0x77c171*/
}
}
} // namespace gamemd

// 0x77C220
namespace gamemd {
void sub_77C220()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int i; // ebx
  void **v3; // edi

  unsigned int v0 = g_WOL_MsgPool; /*0x77c220*/
  for ( i = 0; i < g_WOL_MsgPool; v0 = g_WOL_MsgPool ) /*0x77c22d*/
  {
    int v2 = *((_DWORD *)g_WOL_MessageQueue + i); /*0x77c234*/
    while ( v2 ) /*0x77c239*/
    {
      v3 = (void **)v2; /*0x77c23b*/
      v2 = *(_DWORD *)(v2 + 8); /*0x77c23d*/
      DeleteAndZero(v3); /*0x77c246*/
      __3_YAXPAX_Z(v3); /*0x77c24c*/
    }
    *((_DWORD *)g_WOL_MessageQueue + i++) = 0; /*0x77c25f*/
  }
  unsigned int v4 = dword_B766B0; /*0x77c270*/
  g_WOL_MessageConfig = 0; /*0x77c276*/
  if ( v0 > dword_B766B0 ) /*0x77c282*/
  {
    do /*0x77c335*/
    {
      if ( byte_B76694 || v0 <= v4 ) /*0x77c298*/
        break; /*0x77c298*/
      int * v5 = (int *)g_WOL_MessageQueue; /*0x77c2a4*/
      int v6 = v0; /*0x77c2aa*/
      g_WOL_MsgPool = v0 >> 1; /*0x77c2af*/
      --dword_B7668C; /*0x77c2bb*/
      g_WOL_MessageQueue = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77c2d4*/
      memset(g_WOL_MessageQueue, 0, 4 * g_WOL_MsgPool); /*0x77c2dc*/
      if ( v6 > 0 ) /*0x77c2de*/
      {
        int * v7 = v5; /*0x77c2e0*/
        int v8 = v6; /*0x77c2e2*/
        do /*0x77c31d*/
        {
          int v9 = *v7; /*0x77c2e4*/
          if ( *v7 ) /*0x77c2e4*/
          {
  int v12; // eax
            do /*0x77c317*/
            {
              int v10 = dword_B76698(v9) & ((1 << dword_B7668C) - 1); /*0x77c300*/
              int v11 = *((_DWORD *)g_WOL_MessageQueue + v10); /*0x77c307*/
              *((_DWORD *)g_WOL_MessageQueue + v10) = v9; /*0x77c30a*/
              v12 = *(_DWORD *)(v9 + 8); /*0x77c30d*/
              *(_DWORD *)(v9 + 8) = v11; /*0x77c310*/
              v9 = v12; /*0x77c315*/
            }
            while ( v12 ); /*0x77c317*/
          }
          ++v7; /*0x77c319*/
          --v8; /*0x77c31c*/
        }
        while ( v8 ); /*0x77c31d*/
      }
      __3_YAXPAX_Z(v5); /*0x77c320*/
      v4 = dword_B766B0; /*0x77c325*/
      v0 = g_WOL_MsgPool; /*0x77c32b*/
    }
    while ( g_WOL_MsgPool > (unsigned int)dword_B766B0 ); /*0x77c335*/
  }
  __3_YAXPAX_Z(g_WOL_MessageQueue); /*0x77c341*/
}
}
} // namespace gamemd

// 0x77C450
namespace gamemd {
void sub_77C450()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int i; // ebx
  void **v3; // edi

  unsigned int v0 = dword_B76538; /*0x77c450*/
  for ( i = 0; i < dword_B76538; v0 = dword_B76538 ) /*0x77c45d*/
  {
    int v2 = *((_DWORD *)g_WOL_ConnectionPool + i); /*0x77c464*/
    while ( v2 ) /*0x77c469*/
    {
      v3 = (void **)v2; /*0x77c46b*/
      v2 = *(_DWORD *)(v2 + 8); /*0x77c46d*/
      DeleteAndZero(v3); /*0x77c476*/
      __3_YAXPAX_Z(v3); /*0x77c47c*/
    }
    *((_DWORD *)g_WOL_ConnectionPool + i++) = 0; /*0x77c48f*/
  }
  unsigned int v4 = dword_B76560; /*0x77c4a0*/
  dword_B76534 = 0; /*0x77c4a6*/
  if ( v0 > dword_B76560 ) /*0x77c4b2*/
  {
    do /*0x77c565*/
    {
      if ( byte_B76544 || v0 <= v4 ) /*0x77c4c8*/
        break; /*0x77c4c8*/
      int * v5 = (int *)g_WOL_ConnectionPool; /*0x77c4d4*/
      int v6 = v0; /*0x77c4da*/
      dword_B76538 = v0 >> 1; /*0x77c4df*/
      --dword_B7653C; /*0x77c4eb*/
      g_WOL_ConnectionPool = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77c504*/
      memset(g_WOL_ConnectionPool, 0, 4 * dword_B76538); /*0x77c50c*/
      if ( v6 > 0 ) /*0x77c50e*/
      {
        int * v7 = v5; /*0x77c510*/
        int v8 = v6; /*0x77c512*/
        do /*0x77c54d*/
        {
          int v9 = *v7; /*0x77c514*/
          if ( *v7 ) /*0x77c514*/
          {
  int v12; // eax
            do /*0x77c547*/
            {
              int v10 = dword_B76548(v9) & ((1 << dword_B7653C) - 1); /*0x77c530*/
              int v11 = *((_DWORD *)g_WOL_ConnectionPool + v10); /*0x77c537*/
              *((_DWORD *)g_WOL_ConnectionPool + v10) = v9; /*0x77c53a*/
              v12 = *(_DWORD *)(v9 + 8); /*0x77c53d*/
              *(_DWORD *)(v9 + 8) = v11; /*0x77c540*/
              v9 = v12; /*0x77c545*/
            }
            while ( v12 ); /*0x77c547*/
          }
          ++v7; /*0x77c549*/
          --v8; /*0x77c54c*/
        }
        while ( v8 ); /*0x77c54d*/
      }
      __3_YAXPAX_Z(v5); /*0x77c550*/
      v4 = dword_B76560; /*0x77c555*/
      v0 = dword_B76538; /*0x77c55b*/
    }
    while ( dword_B76538 > (unsigned int)dword_B76560 ); /*0x77c565*/
  }
  __3_YAXPAX_Z(g_WOL_ConnectionPool); /*0x77c571*/
}
}
} // namespace gamemd

// 0x77CB00
namespace gamemd {
void sub_77CB00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int i; // ebx
  void **v3; // edi

  unsigned int v0 = dword_B76998; /*0x77cb00*/
  for ( i = 0; i < dword_B76998; v0 = dword_B76998 ) /*0x77cb0d*/
  {
    int v2 = *((_DWORD *)g_WOL_AccountInfo + i); /*0x77cb14*/
    while ( v2 ) /*0x77cb19*/
    {
      v3 = (void **)v2; /*0x77cb1b*/
      v2 = *(_DWORD *)(v2 + 8); /*0x77cb1d*/
      DeleteAndZero(v3); /*0x77cb26*/
      __3_YAXPAX_Z(v3); /*0x77cb2c*/
    }
    *((_DWORD *)g_WOL_AccountInfo + i++) = 0; /*0x77cb3f*/
  }
  unsigned int v4 = dword_B769C0; /*0x77cb50*/
  dword_B76994 = 0; /*0x77cb56*/
  if ( v0 > dword_B769C0 ) /*0x77cb62*/
  {
    do /*0x77cc15*/
    {
      if ( byte_B769A4 || v0 <= v4 ) /*0x77cb78*/
        break; /*0x77cb78*/
      int * v5 = (int *)g_WOL_AccountInfo; /*0x77cb84*/
      int v6 = v0; /*0x77cb8a*/
      dword_B76998 = v0 >> 1; /*0x77cb8f*/
      --dword_B7699C; /*0x77cb9b*/
      g_WOL_AccountInfo = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77cbb4*/
      memset(g_WOL_AccountInfo, 0, 4 * dword_B76998); /*0x77cbbc*/
      if ( v6 > 0 ) /*0x77cbbe*/
      {
        int * v7 = v5; /*0x77cbc0*/
        int v8 = v6; /*0x77cbc2*/
        do /*0x77cbfd*/
        {
          int v9 = *v7; /*0x77cbc4*/
          if ( *v7 ) /*0x77cbc4*/
          {
  int v12; // eax
            do /*0x77cbf7*/
            {
              int v10 = dword_B769A8(v9) & ((1 << dword_B7699C) - 1); /*0x77cbe0*/
              int v11 = *((_DWORD *)g_WOL_AccountInfo + v10); /*0x77cbe7*/
              *((_DWORD *)g_WOL_AccountInfo + v10) = v9; /*0x77cbea*/
              v12 = *(_DWORD *)(v9 + 8); /*0x77cbed*/
              *(_DWORD *)(v9 + 8) = v11; /*0x77cbf0*/
              v9 = v12; /*0x77cbf5*/
            }
            while ( v12 ); /*0x77cbf7*/
          }
          ++v7; /*0x77cbf9*/
          --v8; /*0x77cbfc*/
        }
        while ( v8 ); /*0x77cbfd*/
      }
      __3_YAXPAX_Z(v5); /*0x77cc00*/
      v4 = dword_B769C0; /*0x77cc05*/
      v0 = dword_B76998; /*0x77cc0b*/
    }
    while ( dword_B76998 > (unsigned int)dword_B769C0 ); /*0x77cc15*/
  }
  __3_YAXPAX_Z(g_WOL_AccountInfo); /*0x77cc21*/
}
}
} // namespace gamemd

// 0x77CCD0
namespace gamemd {
void sub_77CCD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int i; // ebx
  void **v3; // edi

  unsigned int v0 = g_WOL_PacketQueue; /*0x77ccd0*/
  for ( i = 0; i < g_WOL_PacketQueue; v0 = g_WOL_PacketQueue ) /*0x77ccdd*/
  {
    int v2 = *((_DWORD *)g_WOL_EventQueue + i); /*0x77cce4*/
    while ( v2 ) /*0x77cce9*/
    {
      v3 = (void **)v2; /*0x77cceb*/
      v2 = *(_DWORD *)(v2 + 272); /*0x77cced*/
      DeleteAndZero(v3); /*0x77ccf9*/
      __3_YAXPAX_Z(v3); /*0x77ccff*/
    }
    *((_DWORD *)g_WOL_EventQueue + i++) = 0; /*0x77cd12*/
  }
  unsigned int v4 = dword_B76638; /*0x77cd23*/
  dword_B7660C = 0; /*0x77cd29*/
  if ( v0 > dword_B76638 ) /*0x77cd35*/
  {
    do /*0x77cdee*/
    {
      if ( byte_B7661C || v0 <= v4 ) /*0x77cd4b*/
        break; /*0x77cd4b*/
      int * v5 = (int *)g_WOL_EventQueue; /*0x77cd57*/
      int v6 = v0; /*0x77cd5d*/
      g_WOL_PacketQueue = v0 >> 1; /*0x77cd62*/
      --dword_B76614; /*0x77cd6e*/
      g_WOL_EventQueue = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x77cd87*/
      memset(g_WOL_EventQueue, 0, 4 * g_WOL_PacketQueue); /*0x77cd8f*/
      if ( v6 > 0 ) /*0x77cd91*/
      {
        int * v7 = v5; /*0x77cd93*/
        int v8 = v6; /*0x77cd95*/
        do /*0x77cdd6*/
        {
          int v9 = *v7; /*0x77cd97*/
          if ( *v7 ) /*0x77cd97*/
          {
  int v12; // eax
            do /*0x77cdd0*/
            {
              int v10 = dword_B76620(v9) & ((1 << dword_B76614) - 1); /*0x77cdb3*/
              int v11 = *((_DWORD *)g_WOL_EventQueue + v10); /*0x77cdba*/
              *((_DWORD *)g_WOL_EventQueue + v10) = v9; /*0x77cdbd*/
              v12 = *(_DWORD *)(v9 + 272); /*0x77cdc0*/
              *(_DWORD *)(v9 + 272) = v11; /*0x77cdc6*/
              v9 = v12; /*0x77cdce*/
            }
            while ( v12 ); /*0x77cdd0*/
          }
          ++v7; /*0x77cdd2*/
          --v8; /*0x77cdd5*/
        }
        while ( v8 ); /*0x77cdd6*/
      }
      __3_YAXPAX_Z(v5); /*0x77cdd9*/
      v4 = dword_B76638; /*0x77cdde*/
      v0 = g_WOL_PacketQueue; /*0x77cde4*/
    }
    while ( g_WOL_PacketQueue > (unsigned int)dword_B76638 ); /*0x77cdee*/
  }
  __3_YAXPAX_Z(g_WOL_EventQueue); /*0x77cdfa*/
}
}
} // namespace gamemd

// 0x77D3F0
namespace gamemd {
void E4Recv_77D3F0::sub_77D3F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( !this ) /*0x77d3f9*/
    return 0; /*0x77d3f9*/
  int v2 = g_WindowManager; /*0x77d3fb*/
  void *v6; // [esp+10h] [ebp-4h] BYREF
  unknown_libname_73(&v6); /*0x77d405*/
  int v3 = 0; /*0x77d40a*/
  if ( v2 <= 0 ) /*0x77d40e*/
  {
LABEL_9:
    DeleteAndZero(&v6); /*0x77d46e*/
    return 0; /*0x77d47e*/
  }
  const char * v4 = this + 36; /*0x77d410*/
  while ( 1 ) /*0x77d413*/
  {
    if ( v3 >= 0 && v3 < g_WindowManager ) /*0x77d41d*/
      String::Reassign((char **)&v6, (const char **)g_WOL_LoginQueue + v3); /*0x77d42c*/
    if ( !strcmp(String::GetOrEmpty((char **)&v6), v4) ) /*0x77d442*/
      break; /*0x77d442*/
    if ( ++v3 >= v2 ) /*0x77d46c*/
      goto LABEL_9; /*0x77d46c*/
  }
  DeleteAndZero(&v6); /*0x77d483*/
  return 1; /*0x77d477*/
}
}
} // namespace gamemd

// 0x77D840
namespace gamemd {
int sub_77D840()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND Dialog; // esi
  int GameUI; // eax
  char (*v2)(); // edx

  Dialog = (HWND)CreateDialog(0xCFu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))OnlineLobbyDlgProcWOL, 0); /*0x77d858*/
  g_GameActive = 1; /*0x77d85a*/
  Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x77d861*/
  ShowWindow(Dialog, 1); /*0x77d869*/
  GameUI = Dialog::FindGameUI(); /*0x77d86f*/
  v2 = Dialog::UpdateGameUI; /*0x77d87c*/
  if ( !GameUI ) /*0x77d881*/
    v2 = Dialog::PumpMessages; /*0x77d883*/
  MessageDialogLoopAlt(Dialog, (unsigned __int8 (*)(void))v2, 0, 1, 1); /*0x77d88a*/
  Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x77d895*/
  g_GameActive = *((_BYTE *)g_ScenarioClass_Instance + 13730); /*0x77d8a7*/
  return MapClass::MarkForRedraw(&DataGlobal_87F7E8, 2); /*0x77d8b7*/
}
}
} // namespace gamemd

// 0x77DC90
namespace gamemd {
void OpenURLWOL(INIClass * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  FILE *v4; // esi
  HINSTANCE ExecutableA; // esi
  wchar_t *v6; // eax
  int v7; // eax
  CreateGameDialogControl *v8; // ecx
  HANDLE hProcess; // ebx
  int v10; // esi
  CreateGameDialogControl *v11; // ecx
  CreateGameDialogControl *v12; // ecx
  CreateGameDialogControl *v13; // ecx
  CreateGameDialogControl *v14; // ecx
  int v15; // esi
  CreateGameDialogControl *v16; // ecx
  wchar_t *StringCSF; // eax
  CellStruct *v19; // [esp-Ch] [ebp-32Ch]
  DWORD ExitCode; // [esp+10h] [ebp-310h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+14h] [ebp-30Ch] BYREF
  struct _STARTUPINFOA StartupInfo; // [esp+24h] [ebp-2FCh] BYREF
  CHAR File[160]; // [esp+68h] [ebp-2B8h] BYREF
  CHAR Result[264]; // [esp+108h] [ebp-218h] BYREF
  CHAR CommandLine[272]; // [esp+210h] [ebp-110h] BYREF

  tmpnam(File); /*0x77dca3*/
  strcat(File, (const char *)&stru_829748.objectTypeFlags); /*0x77dcd2*/
  v4 = fopen(File, aW); /*0x77dce5*/
  fprintf((MouseClass *)v4, aTitleHiThereTi, v19); /*0x77dced*/
  fclose((MouseClass *)v4); /*0x77dcf3*/
  ExecutableA = FindExecutableA(File, 0, Result); /*0x77dd10*/
  _unlink(File); /*0x77dd17*/
  if ( (int)ExecutableA <= 32 ) /*0x77dd22*/
  {
    StringCSF = GetStringCSF(aTxtNobrowser, 0, (CampaignScore *)g_Str_File_wonline_cpp, 1466); /*0x77deb0*/
    LOBYTE(v7) = ShowDialogConfirm((CampaignScore *)StringCSF, 0, (unsigned __int8 (*)())GameLoop::Thunk, 0); /*0x77deb9*/
  }
  else if ( a2 /*0x77dd57*/
         || (v6 = GetStringCSF(aTxtLaunchbrows, 0, (CampaignScore *)g_Str_File_wonline_cpp, 1398),
             v7 = ShowDialogConfirm((CampaignScore *)v6, 4, (unsigned __int8 (*)())GameLoop::Thunk, 0),
             v7 == 6) )
  {
    sprintf(CommandLine, &stru_829748, a1); /*0x77dd6b*/
    memset(&StartupInfo, 0, sizeof(StartupInfo)); /*0x77dd7e*/
    StartupInfo.cb = 68; /*0x77dda6*/
    v7 = CreateProcessA(Result, CommandLine, 0, 0, 0, 0, 0, 0, &StartupInfo, &ProcessInformation); /*0x77ddae*/
    if ( v7 ) /*0x77ddb6*/
    {
      LOBYTE(v7) = ProcessInformation.hProcess; /*0x77ddbc*/
      hProcess = ProcessInformation.hProcess; /*0x77ddc2*/
      if ( ProcessInformation.hProcess ) /*0x77ddc4*/
      {
        v10 = 0; /*0x77ddca*/
        Game::ProcessIdle(v8); /*0x77ddcc*/
        WaitForInputIdle(hProcess, 0x1388u); /*0x77ddd7*/
        do /*0x77de3f*/
        {
          Game::ProcessIdle(v11); /*0x77dde9*/
          Sleep(0x1F4u); /*0x77ddf3*/
          GetExitCodeProcess(hProcess, &ExitCode); /*0x77ddfb*/
          if ( ExitCode != 259 ) /*0x77de05*/
            v10 = 1; /*0x77de07*/
          if ( HouseClass_Player[45108] || GetTopWindow(0) == g_hWnd || GetForegroundWindow() == g_hWnd ) /*0x77de31*/
            v10 = 1; /*0x77de33*/
          Game::ProcessIdle(v12); /*0x77de38*/
        }
        while ( !v10 ); /*0x77de3f*/
        Game::ProcessIdle(v11); /*0x77de41*/
        if ( GetTopWindow(0) != g_hWnd ) /*0x77de54*/
        {
          Game::ProcessIdle(v13); /*0x77de56*/
          SetForegroundWindow(g_hWnd); /*0x77de62*/
          ShowWindow(g_hWnd, 9); /*0x77de71*/
          Game::ProcessIdle(v14); /*0x77de77*/
        }
        v15 = 10; /*0x77de7c*/
        do /*0x77de8b*/
        {
          Sleep(0x64u); /*0x77de83*/
          LOBYTE(v7) = Game::ProcessIdle(v16); /*0x77de85*/
          --v15; /*0x77de8a*/
        }
        while ( v15 ); /*0x77de8b*/
      }
    }
  }
  return v7; /*0x77de8d*/
}
}
} // namespace gamemd

// 0x77E900
namespace gamemd {
void AssignWOLPlayerSide(const char ** a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  const char **v5; // eax
  HWND v6; // eax
  char **v13; // eax
  char *i; // [esp+14h] [ebp-80h] BYREF
  void *v25; // [esp+1Ch] [ebp-78h] BYREF
  void *v26; // [esp+20h] [ebp-74h] BYREF
  void *v27; // [esp+24h] [ebp-70h] BYREF
  _BYTE v28[108]; // [esp+28h] [ebp-6Ch] BYREF

  bool v4 = String::Length(a1) == 0; /*0x77e913*/
  v5 = a1; /*0x77e915*/
  if ( v4 ) /*0x77e917*/
    v5 = (const char **)&g_WebBrowser; /*0x77e919*/
  void *v24; // [esp+18h] [ebp-7Ch] BYREF
  String::AssignFromPtr((char **)&v24, v5); /*0x77e923*/
  if ( String::Compare((const char **)&v24, (const char **)&g_WebBrowser) && !a2 ) /*0x77e93c*/
  {
    v6 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x77e943*/
    EnablePlayerSlotControls(v6, 1u); /*0x77e94c*/
  }
  signed int v7 = g_WOL_State; /*0x77e951*/
  char * v8 = 0; /*0x77e956*/
  signed int v9 = 0; /*0x77e958*/
  if ( (int)g_WOL_State > 0 ) /*0x77e95c*/
  {
    int v10 = 0; /*0x77e95e*/
    while ( 1 ) /*0x77e960*/
    {
      if ( v10 >= 0 && v9 < v7 ) /*0x77e966*/
        v8 = (char *)g_WOL_ConnectionFlags + v10; /*0x77e96d*/
      char * v11 = String::GetOrEmpty_Alt((char **)&v24); /*0x77e978*/
      if ( !_strcmpi(v11, v8 + 36) ) /*0x77e97e*/
        break; /*0x77e97e*/
      v7 = g_WOL_State; /*0x77e98a*/
      ++v9; /*0x77e98f*/
      v10 += 108; /*0x77e990*/
      if ( v9 >= (int)g_WOL_State ) /*0x77e995*/
        goto LABEL_16; /*0x77e995*/
    }
    if ( v9 != -1 ) /*0x77e99c*/
    {
      DataGlobal_B76E60[37 * v9] = a2; /*0x77e9a8*/
      DisplayRankingsWOL(0); /*0x77e9af*/
    }
  }
LABEL_16:
  bool v22 = dword_B77E4C == 1; /*0x77e9b4*/
  String::ToLowerCopy((const char **)&v24, (char **)&v26); /*0x77e9cb*/
  int v12 = 0; /*0x77e9d5*/
  if ( Game_PlayerCount > 0 ) /*0x77e9d9*/
  {
    while ( 1 ) /*0x77e9e9*/
    {
      WideString::Assign((wchar_t **)&v25, *(wchar_t **)(Game_PlayerInfoArray + 4 * v12)); /*0x77e9e9*/
      ToWideStringCharAlt(&i, (const wchar_t **)&v25); /*0x77e9f6*/
      DeleteAndZero::Alt(&v25); /*0x77e9ff*/
      v13 = String::ToLowerCopy((const char **)&i, (char **)&v27); /*0x77ea12*/
      bool v14 = String::Compare((const char **)v13, (const char **)&v26); /*0x77ea22*/
      DeleteAndZero(&v27); /*0x77ea24*/
      if ( v14 ) /*0x77ea2f*/
        break; /*0x77ea2f*/
      DeleteAndZero((void **)&i); /*0x77ea31*/
      if ( ++v12 >= Game_PlayerCount ) /*0x77ea3e*/
        goto LABEL_21; /*0x77ea3e*/
    }
    DeleteAndZero((void **)&i); /*0x77ea42*/
  }
LABEL_21:
  if ( v12 < Game_PlayerCount ) /*0x77ea4d*/
  {
    *(_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * v12) + 119) = a2; /*0x77ea61*/
    if ( v22 && (g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2) && !byte_B77DEC && v12 == 1 ) /*0x77ea92*/
    {
      signed int v15 = g_WOL_State; /*0x77ea98*/
      if ( g_WOL_State == 2 ) /*0x77eaa1*/
      {
  _DWORD *v18; // ebp
        int v16 = 0; /*0x77eaac*/
        v25 = 0; /*0x77eab2*/
        memset(v28, 0, sizeof(v28)); /*0x77eaba*/
        signed int v17 = 0; /*0x77eabc*/
        for ( i = 0; ; v16 = (int)i ) /*0x77eabe*/
        {
          if ( v16 >= 0 && v17 < v15 ) /*0x77eace*/
            qmemcpy(v28, (char *)g_WOL_ConnectionFlags + v16, sizeof(v28)); /*0x77eae2*/
          v18 = __2_YAPAXI_Z(0x6Cu); /*0x77eaeb*/
          void * v19 = v25; /*0x77eaed*/
          qmemcpy(v18, v28, 0x6Cu); /*0x77eaff*/
          char * v20 = i; /*0x77eb01*/
          v18[8] = v19; /*0x77eb05*/
          v15 = g_WOL_State; /*0x77eb08*/
          ++v17; /*0x77eb0e*/
          v25 = v18; /*0x77eb14*/
          i = v20 + 108; /*0x77eb18*/
          if ( v17 >= (int)g_WOL_State ) /*0x77eb1c*/
            break; /*0x77eb1c*/
        }
        g_WOL_GameListState = 0; /*0x77eb20*/
        g_WOL_IdleHandler = 9; /*0x77eb2a*/
        g_WOL_GameProcessState = 90; /*0x77eb34*/
        g_WOL_GameListPool = time(0); /*0x77eb43*/
        (*(void (__stdcall **)(LPVOID, _DWORD *))(*(_DWORD *)ppv + 72))(ppv, v18); /*0x77eb54*/
        byte_B77DEC = 1; /*0x77eb59*/
        if ( v18 ) /*0x77eb60*/
        {
  _DWORD *v21; // esi
          do /*0x77eb72*/
          {
            v21 = (_DWORD *)v18[8]; /*0x77eb62*/
            __3_YAXPAX_Z(v18); /*0x77eb66*/
            v18 = v21; /*0x77eb6e*/
          }
          while ( v21 ); /*0x77eb72*/
        }
      }
    }
    DisplayRankingsWOL(0); /*0x77eb78*/
  }
  DeleteAndZero(&v26); /*0x77eb81*/
  DeleteAndZero(&v24); /*0x77eb8a*/
}
}
} // namespace gamemd

// 0x77ED00
namespace gamemd {
void SetupLobbyPlayerSlot(CCINIClass * aP0, CCINIClass * aP1, CCINIClass * aP2, int a4, int aP1a)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  SessionClass *v7; // esi
  ObjectClass *v8; // eax
  ReferenceCounted *v11; // esi
  SkirmishDialog *PlayerSide; // eax
  int ResourceID2CSF; // ebx
  LRESULT ComboBoxSelected; // eax
  int ResourceID3CSF; // eax
  int ResourceID4CSF; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // ebx
  HWND v24; // eax
  char *v26; // [esp+10h] [ebp-14h] BYREF
  ObjectClass *v27; // [esp+14h] [ebp-10h] BYREF
  wchar_t *v28; // [esp+18h] [ebp-Ch] BYREF
  SkirmishDialog *v29; // [esp+1Ch] [ebp-8h]
  int v30; // [esp+20h] [ebp-4h] BYREF
  v29 = (SkirmishDialog *)aP1; /*0x77ed0b*/
  int v5 = -1; /*0x77ed10*/
  String::ToLowerCopy((const char **)aP0, (ObjectClass *)&v27); /*0x77ed13*/
  int v6 = 0; /*0x77ed18*/
  v7 = (SessionClass *)&HouseClass_Player[40260]; /*0x77ed1a*/
  while ( 1 ) /*0x77ed26*/
  {
    WideString::Assign(&v28, (CampaignScore *)v7->GameMode[0]); /*0x77ed26*/
    ToWideStringCharAlt(&v26, (const wchar_t **)&v28); /*0x77ed33*/
    DeleteAndZero::Alt((void **)&v28); /*0x77ed3c*/
    v8 = (ObjectClass *)String::ToLowerCopy((const char **)&v26, (ObjectClass *)&v30); /*0x77ed4a*/
    bool v9 = String::Compare((const char **)&v27, (const char **)v8); /*0x77ed5d*/
    DeleteAndZero((int)&v30); /*0x77ed5f*/
    if ( v9 ) /*0x77ed66*/
      break; /*0x77ed66*/
    DeleteAndZero((int)&v26); /*0x77ed6c*/
    v7 = (SessionClass *)((char *)v7 + 4); /*0x77ed71*/
    ++v6; /*0x77ed74*/
    if ( (int)v7 >= (int)&HouseClass_Player[40292] ) /*0x77ed7b*/
      goto LABEL_6; /*0x77ed7b*/
  }
  v5 = v6; /*0x77ed83*/
  DeleteAndZero((int)&v26); /*0x77ed85*/
LABEL_6:
  v26 = 0; /*0x77ed8a*/
  if ( v5 == -1 ) /*0x77ed95*/
  {
    DeleteAndZero((int)&v27); /*0x77ed9b*/
    return 0; /*0x77eda0*/
  }
  else
  {
    v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xC2); /*0x77edb6*/
    if ( !v11 ) /*0x77edba*/
      v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xC9); /*0x77edc6*/
    int v12 = *(_DWORD *)&HouseClass_Player[21864][4 * v5 + 18396]; /*0x77edc8*/
    if ( SessionClass::GetOption(v12) != a4 ) /*0x77ede1*/
    {
      v26 = (char *)1; /*0x77ede6*/
      SessionClass::SetOption(v12, (SessionClass *)a4); /*0x77edea*/
    }
    if ( SessionClass::GetOption2(*(_DWORD *)&HouseClass_Player[21864][4 * v5 + 18396]) != aP1a ) /*0x77ee01*/
    {
      v26 = (char *)1; /*0x77ee06*/
      SessionClass::SetOption2(v12, (SessionClass *)aP1a); /*0x77ee0a*/
    }
    PlayerSide = (SkirmishDialog *)SessionClass::GetPlayerSide(*(_DWORD *)&HouseClass_Player[21864][4 * v5 + 18396]); /*0x77ee16*/
    if ( PlayerSide != v29 ) /*0x77ee21*/
    {
      v26 = (char *)1; /*0x77ee2a*/
      SessionClass::SetPlayerOption(v12, v29); /*0x77ee2e*/
      ResourceID2CSF = GetResourceID2CSF((void *)v5); /*0x77ee3a*/
      ComboBoxSelected = GetComboBoxSelected(v11, ResourceID2CSF, 0xFFFFFFFF); /*0x77ee42*/
      if ( v29 == (SkirmishDialog *)-3 ) /*0x77ee4c*/
      {
        if ( ComboBoxSelected != -3 ) /*0x77ee51*/
        {
          SetupComboBoxObserver((HWND)v11, ResourceID2CSF); /*0x77ee5b*/
          ResourceID3CSF = GetResourceID3CSF((void *)v5); /*0x77ee62*/
          SetupComboBoxRandomAlliance((HWND)v11, ResourceID3CSF); /*0x77ee6b*/
          ResourceID4CSF = GetResourceID4CSF((void *)v5); /*0x77ee72*/
          InitComboBoxNone((HWND)v11, ResourceID4CSF); /*0x77ee7b*/
          int v18 = PlayerSlot::IndexToDlgID((void *)v5); /*0x77ee82*/
          DlgItem = GetDlgItem((HWND)v11, v18); /*0x77ee92*/
          SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x77ee99*/
          ResourceIDCSF = GetResourceIDCSF((void *)v5); /*0x77eea6*/
          FillListBox((HWND)v11, ResourceIDCSF); /*0x77eeac*/
          SetupSkirmishSpawnLocations((HWND)v11, ResourceIDCSF, 8); /*0x77eeb3*/
        }
      }
      else if ( ComboBoxSelected == -3 ) /*0x77eeb8*/
      {
        FillComboBoxRandomOnly((HWND)v11, ResourceID2CSF); /*0x77eebe*/
        int v21 = GetResourceID3CSF((void *)v5); /*0x77eec5*/
        FillComboBoxAllianceSlots((HWND)v11, v21); /*0x77eece*/
        int v22 = GetResourceID4CSF((void *)v5); /*0x77eed5*/
        FillLobbyPlayerSlot((HWND)v11, v22); /*0x77eede*/
        int v23 = PlayerSlot::IndexToDlgID((void *)v5); /*0x77eee5*/
        v24 = GetDlgItem((HWND)v11, v23); /*0x77eef5*/
        SendMessageA(v24, 0x4F1u, 0, 0); /*0x77eefc*/
        int v25 = GetResourceIDCSF((void *)v5); /*0x77ef09*/
        FillComboBoxFactions((HWND)v11, v25); /*0x77ef0f*/
        SetupSkirmishSpawnLocations((HWND)v11, v25, -2); /*0x77ef1a*/
      }
      if ( SessionClass::GetPlayerSide(v12) == -3 ) /*0x77ef29*/
        *(_DWORD *)(v12 + 107) = -1; /*0x77ef2b*/
    }
    if ( (CCINIClass *)SessionClass::GetPlayerColor(*(_DWORD *)&HouseClass_Player[21864][4 * v5 + 18396]) != aP2 ) /*0x77ef44*/
      SessionClass::SetPlayerColor(v12, (int)aP2); /*0x77ef49*/
    if ( *(_DWORD *)&HouseClass_Player[21864][4 * v5 + 18396] == **(_DWORD **)&HouseClass_Player[40236] ) /*0x77ef5d*/
      *(_DWORD *)&HouseClass_Player[30280] = aP2; /*0x77ef5f*/
    DisplayRankingsWOL(0, 0); /*0x77ef69*/
    DeleteAndZero((int)&v27); /*0x77ef72*/
    return (int)v26; /*0x77ef77*/
  }
}
}
} // namespace gamemd

// 0x77EF90
namespace gamemd {
char WOL_RequestChannelList2(int a1, unsigned char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char *v8; // ebx
  void *v9; // eax
  int v10; // ebp
  void *v11; // eax
  char *v12; // ecx
  int v13; // [esp+Ch] [ebp-8h]

  int v3 = a2; /*0x77ef99*/
  Debug::Log(); /*0x77efaa*/
  if ( (*(int (__stdcall **)(LPVOID, int, int))(*(_DWORD *)ppv + 24))(ppv, a1, v3) ) /*0x77efbc*/
    return 0; /*0x77efc4*/
  int v5 = g_WOL_RequestState; /*0x77efcb*/
  int v6 = g_WOL_RequestState; /*0x77efd0*/
  v13 = g_WOL_RequestState; /*0x77efd4*/
  int v7 = g_WOL_RequestToken; /*0x77efe0*/
  if ( g_WOL_RequestState < g_WOL_RequestToken ) /*0x77efe8*/
  {
    v8 = (char *)g_WOL_RequestFlags; /*0x77f05b*/
  }
  else
  {
    v7 = 2 * g_WOL_RequestState; /*0x77efee*/
    if ( 2 * g_WOL_RequestState < 10 ) /*0x77eff4*/
      v7 = 10; /*0x77eff6*/
    v8 = (char *)__2_YAPAXI_Z(4 * v7); /*0x77f00a*/
    memset(v8, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x77f018*/
    v9 = g_WOL_RequestFlags; /*0x77f021*/
    if ( g_WOL_RequestFlags ) /*0x77f028*/
    {
      qmemcpy(v8, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f034*/
      v9 = g_WOL_RequestFlags; /*0x77f036*/
      v6 = v13; /*0x77f03b*/
    }
    __3_YAXPAX_Z(v9); /*0x77f040*/
    v5 = g_WOL_RequestState; /*0x77f045*/
    g_WOL_RequestFlags = v8; /*0x77f04d*/
    g_WOL_RequestToken = v7; /*0x77f053*/
  }
  if ( v5 >= v7 ) /*0x77f063*/
  {
    v10 = 2 * v5; /*0x77f065*/
    if ( 2 * v5 < 10 ) /*0x77f06b*/
      v10 = 10; /*0x77f06d*/
    v8 = (char *)__2_YAPAXI_Z(4 * v10); /*0x77f081*/
    memset(v8, 0, 4 * ((unsigned int)(4 * v10) >> 2)); /*0x77f08f*/
    v11 = g_WOL_RequestFlags; /*0x77f098*/
    if ( g_WOL_RequestFlags ) /*0x77f09f*/
    {
      qmemcpy(v8, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f0ab*/
      v11 = g_WOL_RequestFlags; /*0x77f0ad*/
      v6 = v13; /*0x77f0b2*/
    }
    __3_YAXPAX_Z(v11); /*0x77f0b7*/
    v5 = g_WOL_RequestState; /*0x77f0bc*/
    g_WOL_RequestFlags = v8; /*0x77f0c4*/
    g_WOL_RequestToken = v10; /*0x77f0ca*/
  }
  if ( v6 < v5 ) /*0x77f0d2*/
  {
    memcpy(&v8[4 * v6 + 4], &v8[4 * v6], 4 * (v5 + 0x3FFFFFFF * v6)); /*0x77f0ea*/
    v8 = (char *)g_WOL_RequestFlags; /*0x77f0ef*/
    v5 = g_WOL_RequestState; /*0x77f0f5*/
  }
  v12 = &v8[4 * v6]; /*0x77f0fd*/
  if ( v12 ) /*0x77f104*/
  {
    *(_DWORD *)v12 = a1; /*0x77f10a*/
    v5 = g_WOL_RequestState; /*0x77f10c*/
  }
  g_WOL_RequestState = v5 + 1; /*0x77f113*/
  return 1; /*0x77efc3*/
}
}
} // namespace gamemd

// 0x77F120
namespace gamemd {
char RequestChannelListWOL()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *StringCSF; // eax
  CreateGameDialogControl *ecx2; // ecx
  CampaignScore *v2; // ebx
  wchar_t *v4; // eax
  HWND v6; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  const wchar_t *v15; // [esp+0h] [ebp-14h]
  CampaignScore *v16; // [esp+4h] [ebp-10h]
  wchar_t *v17; // [esp+10h] [ebp-4h] BYREF
  StringCSF = GetStringCSF(aTxtReqChanlist, 0, (CampaignScore *)g_Str_File_wonline_cpp, 2298); /*0x77f136*/
  WideString::Assign(&v17, (CampaignScore *)StringCSF); /*0x77f140*/
  ShowUIMessage((MPCooperative *)1, &v17, 0); /*0x77f150*/
  DeleteAndZero::Alt((void **)&v17); /*0x77f159*/
  int v1 = 0; /*0x77f16a*/
  while ( 1 ) /*0x77f179*/
  {
    v2 = (CampaignScore *)WaitForMultipleObjects(0x12u, (const HANDLE *)&Handles, 0, 0x64u); /*0x77f179*/
    if ( v2 == (CampaignScore *)258 ) /*0x77f181*/
      break; /*0x77f181*/
LABEL_5:
    if ( v2 == (CampaignScore *)-1 ) /*0x77f1ad*/
    {
      v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x77f227*/
      if ( v6 ) /*0x77f22e*/
      {
        g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFFFE); /*0x77f239*/
        if ( !g_WOL_ChannelList ) /*0x77f23f*/
          CloseDialog(v6, 0); /*0x77f245*/
      }
      Current = Dialog::GetCurrent(); /*0x77f24a*/
      DlgItem = GetDlgItem(Current, 1344); /*0x77f255*/
      if ( DlgItem ) /*0x77f25d*/
        SetFocus(DlgItem); /*0x77f260*/
      Debug::Log(); /*0x77f26b*/
      return 0; /*0x77f27a*/
    }
    if ( (char)v2 < 0 ) /*0x77f1b2*/
      v2 = (CampaignScore *)((char *)v2 - 128); /*0x77f1b4*/
    if ( (unsigned int)v2 >= 0x12 ) /*0x77f1bd*/
      return 0; /*0x77f1bd*/
    ResetEvent(*(&Handles + (_DWORD)v2)); /*0x77f1cb*/
    if ( v2 == (CampaignScore *)5 || !v2 ) /*0x77f1d8*/
    {
      v9 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x77f280*/
      if ( v9 ) /*0x77f287*/
      {
        g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFFFE); /*0x77f292*/
        if ( !g_WOL_ChannelList ) /*0x77f298*/
          CloseDialog(v9, 0); /*0x77f29e*/
      }
      v10 = Dialog::GetCurrent(); /*0x77f2a3*/
      v11 = GetDlgItem(v10, 1344); /*0x77f2ae*/
      if ( v11 ) /*0x77f2b6*/
        SetFocus(v11); /*0x77f2b9*/
      return 0; /*0x77f2c6*/
    }
    if ( v2 == (CampaignScore *)3 ) /*0x77f1e1*/
    {
      v12 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x77f2cc*/
      if ( v12 ) /*0x77f2d3*/
      {
        g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFFFE); /*0x77f2de*/
        if ( !g_WOL_ChannelList ) /*0x77f2e4*/
          CloseDialog(v12, 0); /*0x77f2ea*/
      }
      v13 = Dialog::GetCurrent(); /*0x77f2ef*/
      v14 = GetDlgItem(v13, 1344); /*0x77f2fa*/
      if ( v14 ) /*0x77f302*/
        SetFocus(v14); /*0x77f305*/
      return 1; /*0x77f30e*/
    }
  }
  while ( 1 ) /*0x77f183*/
  {
    v1 += 100; /*0x77f183*/
    if ( v1 > 30000 ) /*0x77f18c*/
      break; /*0x77f18c*/
    Game::ProcessIdle(ecx2); /*0x77f18e*/
    v2 = (CampaignScore *)WaitForMultipleObjects(0x12u, (const HANDLE *)&Handles, 0, 0x64u); /*0x77f1a0*/
    if ( v2 != (CampaignScore *)258 ) /*0x77f1a8*/
      goto LABEL_5; /*0x77f1a8*/
  }
  v4 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, (CampaignScore *)g_Str_File_wonline_cpp, 2307); /*0x77f1fa*/
  swprintf(&word_B77AD0, (const size_t)v4, v15, v16); /*0x77f205*/
  SetEvent(Handles); /*0x77f214*/
  return 0; /*0x77f21c*/
}
}
} // namespace gamemd

// 0x77F320
namespace gamemd {
void WOL_RequestChannelListEx(int a1, unsigned char a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  HANDLE *v6; // esi

  int v3 = a1; /*0x77f32a*/
  if ( !g_WOL_RequestState || (result = RequestChannelListWOL()) != 0 ) /*0x77f33f*/
  {
    v6 = &Handles; /*0x77f351*/
    do /*0x77f364*/
      ResetEvent(*v6++); /*0x77f359*/
    while ( (int)v6 < (int)g_WOL_RequestObject ); /*0x77f364*/
    Debug::Log(); /*0x77f375*/
    if ( (*(int (__stdcall **)(LPVOID, int, _DWORD))(*(_DWORD *)ppv + 24))(ppv, v3, a2) ) /*0x77f387*/
    {
      SetEvent(Handles); /*0x77f4fd*/
      return 0; /*0x77f503*/
    }
    else
    {
      int v7 = g_WOL_RequestState; /*0x77f392*/
      int v8 = g_WOL_RequestState; /*0x77f397*/
      int v16 = g_WOL_RequestState; /*0x77f39b*/
      int v9 = g_WOL_RequestToken; /*0x77f3a5*/
      if ( g_WOL_RequestState >= g_WOL_RequestToken ) /*0x77f3ad*/
      {
        v9 = 2 * g_WOL_RequestState; /*0x77f3b7*/
        if ( 2 * g_WOL_RequestState < 10 ) /*0x77f3bd*/
          v9 = 10; /*0x77f3bf*/
        void * v10 = __2_YAPAXI_Z(4 * v9); /*0x77f3d3*/
        memset(v10, 0, 4 * ((unsigned int)(4 * v9) >> 2)); /*0x77f3e1*/
        void * v11 = g_WOL_RequestFlags; /*0x77f3ea*/
        if ( g_WOL_RequestFlags ) /*0x77f3f1*/
        {
          qmemcpy(v10, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f3fd*/
          v11 = g_WOL_RequestFlags; /*0x77f3ff*/
          v8 = v16; /*0x77f404*/
        }
        __3_YAXPAX_Z(v11); /*0x77f409*/
        v7 = g_WOL_RequestState; /*0x77f40e*/
        g_WOL_RequestFlags = v10; /*0x77f413*/
        v3 = a1; /*0x77f419*/
        g_WOL_RequestToken = v9; /*0x77f420*/
      }
      if ( v7 >= v9 ) /*0x77f428*/
      {
        int v12 = 2 * v7; /*0x77f42a*/
        if ( 2 * v7 < 10 ) /*0x77f430*/
          v12 = 10; /*0x77f432*/
        void * v13 = __2_YAPAXI_Z(4 * v12); /*0x77f446*/
        memset(v13, 0, 4 * ((unsigned int)(4 * v12) >> 2)); /*0x77f454*/
        void * v14 = g_WOL_RequestFlags; /*0x77f45d*/
        if ( g_WOL_RequestFlags ) /*0x77f464*/
        {
          qmemcpy(v13, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f470*/
          v14 = g_WOL_RequestFlags; /*0x77f472*/
          v8 = v16; /*0x77f477*/
        }
        __3_YAXPAX_Z(v14); /*0x77f47c*/
        v7 = g_WOL_RequestState; /*0x77f481*/
        g_WOL_RequestFlags = v13; /*0x77f486*/
        v3 = a1; /*0x77f48c*/
        g_WOL_RequestToken = v12; /*0x77f493*/
      }
      if ( v8 < v7 ) /*0x77f49b*/
      {
        memcpy((char *)g_WOL_RequestFlags + 4 * v8 + 4, (char *)g_WOL_RequestFlags + 4 * v8, 4 * (v7 + 0x3FFFFFFF * v8)); /*0x77f4b8*/
        v7 = g_WOL_RequestState; /*0x77f4bd*/
      }
      _DWORD * v15 = (char *)g_WOL_RequestFlags + 4 * v8; /*0x77f4cb*/
      if ( v15 ) /*0x77f4d0*/
      {
        *v15 = v3; /*0x77f4d2*/
        v7 = g_WOL_RequestState; /*0x77f4d4*/
      }
      g_WOL_RequestState = v7 + 1; /*0x77f4da*/
      if ( a3 ) /*0x77f4e5*/
        return RequestChannelListWOL(); /*0x77f4e7*/
      else
        return 1; /*0x77f512*/
    }
  }
  return result; /*0x77f341*/
}
}
} // namespace gamemd

// 0x77F520
namespace gamemd {
char sub_77F520(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  HANDLE *v2; // esi

  if ( !g_WOL_RequestState || (result = RequestChannelListWOL()) != 0 ) /*0x77f539*/
  {
    v2 = &Handles; /*0x77f547*/
    do /*0x77f55a*/
      ResetEvent(*v2++); /*0x77f54f*/
    while ( (int)v2 < (int)g_WOL_RequestObject ); /*0x77f55a*/
    Debug::Log(); /*0x77f565*/
    if ( (*(int (__stdcall **)(LPVOID, _DWORD, _DWORD))(*(_DWORD *)ppv + 24))(ppv, 0, 0) ) /*0x77f579*/
    {
      SetEvent(Handles); /*0x77f6eb*/
      return 0; /*0x77f6f1*/
    }
    else
    {
      int v3 = g_WOL_RequestState; /*0x77f584*/
      int v4 = g_WOL_RequestState; /*0x77f589*/
      int v13 = g_WOL_RequestState; /*0x77f58d*/
      int v5 = g_WOL_RequestToken; /*0x77f598*/
      if ( g_WOL_RequestState >= g_WOL_RequestToken ) /*0x77f5a1*/
      {
        v5 = 2 * g_WOL_RequestState; /*0x77f5ab*/
        if ( 2 * g_WOL_RequestState < 10 ) /*0x77f5b1*/
          v5 = 10; /*0x77f5b3*/
        void * v6 = __2_YAPAXI_Z(4 * v5); /*0x77f5c7*/
        memset(v6, 0, 4 * ((unsigned int)(4 * v5) >> 2)); /*0x77f5d5*/
        void * v7 = g_WOL_RequestFlags; /*0x77f5de*/
        if ( g_WOL_RequestFlags ) /*0x77f5e5*/
        {
          qmemcpy(v6, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f5f1*/
          v7 = g_WOL_RequestFlags; /*0x77f5f3*/
          v4 = v13; /*0x77f5f8*/
        }
        __3_YAXPAX_Z(v7); /*0x77f5fd*/
        v3 = g_WOL_RequestState; /*0x77f602*/
        g_WOL_RequestFlags = v6; /*0x77f60a*/
        g_WOL_RequestToken = v5; /*0x77f610*/
      }
      if ( v3 >= v5 ) /*0x77f618*/
      {
        int v8 = 2 * v3; /*0x77f61a*/
        if ( 2 * v3 < 10 ) /*0x77f620*/
          v8 = 10; /*0x77f622*/
        void * v9 = __2_YAPAXI_Z(4 * v8); /*0x77f636*/
        memset(v9, 0, 4 * ((unsigned int)(4 * v8) >> 2)); /*0x77f644*/
        void * v10 = g_WOL_RequestFlags; /*0x77f64d*/
        if ( g_WOL_RequestFlags ) /*0x77f654*/
        {
          qmemcpy(v9, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f660*/
          v10 = g_WOL_RequestFlags; /*0x77f662*/
          v4 = v13; /*0x77f667*/
        }
        __3_YAXPAX_Z(v10); /*0x77f66c*/
        v3 = g_WOL_RequestState; /*0x77f671*/
        g_WOL_RequestFlags = v9; /*0x77f679*/
        g_WOL_RequestToken = v8; /*0x77f67f*/
      }
      if ( v4 < v3 ) /*0x77f689*/
      {
        memcpy((char *)g_WOL_RequestFlags + 4 * v4 + 4, (char *)g_WOL_RequestFlags + 4 * v4, 4 * (v3 + 0x3FFFFFFF * v4)); /*0x77f6a6*/
        v3 = g_WOL_RequestState; /*0x77f6ab*/
      }
      _DWORD * v11 = (char *)g_WOL_RequestFlags + 4 * v4; /*0x77f6b9*/
      if ( v11 ) /*0x77f6be*/
      {
        *v11 = 0; /*0x77f6c0*/
        v3 = g_WOL_RequestState; /*0x77f6c6*/
      }
      g_WOL_RequestState = v3 + 1; /*0x77f6cc*/
      if ( a1 ) /*0x77f6d7*/
        return RequestChannelListWOL(); /*0x77f6d9*/
      else
        return 1; /*0x77f6fa*/
    }
  }
  return result; /*0x77f53b*/
}
}
} // namespace gamemd

// 0x77F710
namespace gamemd {
char sub_77F710(unsigned char a1, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  HANDLE *v4; // esi

  if ( !g_WOL_RequestState || (result = RequestChannelListWOL()) != 0 ) /*0x77f72c*/
  {
    v4 = &Handles; /*0x77f73b*/
    do /*0x77f74e*/
      ResetEvent(*v4++); /*0x77f743*/
    while ( (int)v4 < (int)g_WOL_RequestObject ); /*0x77f74e*/
    Debug::Log(); /*0x77f760*/
    if ( (*(int (__stdcall **)(LPVOID, int, _DWORD))(*(_DWORD *)ppv + 24))(ppv, 41, a1) ) /*0x77f773*/
    {
      SetEvent(Handles); /*0x77f8e4*/
      return 0; /*0x77f8ea*/
    }
    else
    {
      int v5 = g_WOL_RequestState; /*0x77f77e*/
      int v6 = g_WOL_RequestState; /*0x77f783*/
      int v15 = g_WOL_RequestState; /*0x77f787*/
      int v7 = g_WOL_RequestToken; /*0x77f791*/
      if ( g_WOL_RequestState >= g_WOL_RequestToken ) /*0x77f79a*/
      {
        v7 = 2 * g_WOL_RequestState; /*0x77f7a4*/
        if ( 2 * g_WOL_RequestState < 10 ) /*0x77f7aa*/
          v7 = 10; /*0x77f7ac*/
        void * v8 = __2_YAPAXI_Z(4 * v7); /*0x77f7c0*/
        memset(v8, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x77f7ce*/
        void * v9 = g_WOL_RequestFlags; /*0x77f7d7*/
        if ( g_WOL_RequestFlags ) /*0x77f7de*/
        {
          qmemcpy(v8, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f7ea*/
          v9 = g_WOL_RequestFlags; /*0x77f7ec*/
          v6 = v15; /*0x77f7f1*/
        }
        __3_YAXPAX_Z(v9); /*0x77f7f6*/
        v5 = g_WOL_RequestState; /*0x77f7fb*/
        g_WOL_RequestFlags = v8; /*0x77f803*/
        g_WOL_RequestToken = v7; /*0x77f809*/
      }
      if ( v5 >= v7 ) /*0x77f811*/
      {
        int v10 = 2 * v5; /*0x77f813*/
        if ( 2 * v5 < 10 ) /*0x77f819*/
          v10 = 10; /*0x77f81b*/
        void * v11 = __2_YAPAXI_Z(4 * v10); /*0x77f82f*/
        memset(v11, 0, 4 * ((unsigned int)(4 * v10) >> 2)); /*0x77f83d*/
        void * v12 = g_WOL_RequestFlags; /*0x77f846*/
        if ( g_WOL_RequestFlags ) /*0x77f84d*/
        {
          qmemcpy(v11, g_WOL_RequestFlags, 4 * g_WOL_RequestState); /*0x77f859*/
          v12 = g_WOL_RequestFlags; /*0x77f85b*/
          v6 = v15; /*0x77f860*/
        }
        __3_YAXPAX_Z(v12); /*0x77f865*/
        v5 = g_WOL_RequestState; /*0x77f86a*/
        g_WOL_RequestFlags = v11; /*0x77f872*/
        g_WOL_RequestToken = v10; /*0x77f878*/
      }
      if ( v6 < v5 ) /*0x77f881*/
      {
        memcpy((char *)g_WOL_RequestFlags + 4 * v6 + 4, (char *)g_WOL_RequestFlags + 4 * v6, 4 * (v5 + 0x3FFFFFFF * v6)); /*0x77f89e*/
        v5 = g_WOL_RequestState; /*0x77f8a3*/
      }
      _DWORD * v13 = (char *)g_WOL_RequestFlags + 4 * v6; /*0x77f8b1*/
      if ( v13 ) /*0x77f8b6*/
      {
        *v13 = 41; /*0x77f8b8*/
        v5 = g_WOL_RequestState; /*0x77f8be*/
      }
      g_WOL_RequestState = v5 + 1; /*0x77f8c4*/
      if ( a2 ) /*0x77f8cf*/
        return RequestChannelListWOL(); /*0x77f8d1*/
      else
        return 1; /*0x77f8f5*/
    }
  }
  return result; /*0x77f72e*/
}
}
} // namespace gamemd

// 0x770060
namespace gamemd {
int sub_770060()
{
{
    DataGlobal_B72B98 = 0;
    DataGlobal_B72B9C = 0;
    DataGlobal_B72BA0 = 0;
    DataGlobal_B72BA4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x770080
namespace gamemd {
void sub_770080()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B72BB0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x7700B0
namespace gamemd {
void sub_7700B0()
{
{
    DataGlobal_B72C00 = DataGlobal_B72BB0 / 60.0;
}
}
} // namespace gamemd

// 0x7700D0
namespace gamemd {
void sub_7700D0()
{
{
    DataGlobal_B72BE8 = 1.0 / DataGlobal_B72C00;
}
}
} // namespace gamemd

// 0x7700F0
namespace gamemd {
void sub_7700F0()
{
{
    DataGlobal_B72BE0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x770110
namespace gamemd {
void sub_770110()
{
{
    DataGlobal_B72BB8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x770130
namespace gamemd {
void sub_770130()
{
{
    DataGlobal_B72B90 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x770150
namespace gamemd {
long long sub_770150()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B72B90 - DataGlobal_B72BB8);
    result = Math::RoundToInt(v0 * DataGlobal_B72BB0 * 0.5);
    DataGlobal_B72C08 = result;
    return result;
}
}
} // namespace gamemd

// 0x770190
namespace gamemd {
void sub_770190()
{
{
    DataGlobal_B72BC0 = Math::ArcTan((double)DataGlobal_B72C08 * 0.00390625);
}
}
} // namespace gamemd

// 0x7701C0
namespace gamemd {
void sub_7701C0()
{
{
    DataGlobal_B72BD8 = Math::ArcTan((double)(2 * DataGlobal_B72C08) / DataGlobal_B72BB0);
}
}
} // namespace gamemd

// 0x7701F0
namespace gamemd {
long long sub_7701F0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B72C08) + 0.5);
    DataGlobal_B72BFC = result;
    return result;
}
}
} // namespace gamemd

// 0x770220
namespace gamemd {
int sub_770220()
{
{
    DataGlobal_B72BA8 = 0;
    DataGlobal_B72BAA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x770230
namespace gamemd {
int sub_770230()
{
{
    DataGlobal_B72BC8 = 0;
    DataGlobal_B72BCC = 0;
    DataGlobal_B72BD0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x770250
namespace gamemd {
int sub_770250()
{
{
    DataGlobal_B72BF8 = 0;
    DataGlobal_B72BF0 = 128;
    DataGlobal_B72BF4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x770850
namespace gamemd {
void E4Recv_770850::sub_770850(unsigned int * a1, char ** a2, int a4, ObjectClass * aP4)
{
{
    Selection_WorldDominationTour *v6;
    int v7;
    void **v8;
    int i;
    void *v10;
    int v11;
    int v12;
    int v13;
    void *v14;
    ObjectClass *v15;
    char **v16;
    char *v17;
    char *a2a;
    v16 = (char **)aP4;
    v6 = StaticString::Factory(*(void**)this);
    ConcatStringAlloc(&a2a, (const char **)v6, v16);
    unknown_libname_73(&v17);
    String::Assign((char **)&aP4, &DataGlobal_87F8E4[42624]);
    INIClass::ReadString((ObjectClass *)a1, (ObjectClass *)a2, (ObjectClass *)&a2a, (ReferenceCounted *)&aP4, (int)&v17);
    DeleteAndZero((void **)&aP4);
    v7 = (int)*(this + 6 * a4 + 223);
    v8 = this + 6 * a4 + 223;
    (*(void (__thiscall **)(void **))(v7 + 12))(v8);
    unknown_libname_73(&aP4);
    for ( i = String::Tokenize((const char **)&v17, 0, &Delimiter, (ObjectClass *)&aP4);
    i != -1;
    i = String::Tokenize((const char **)&v17, i, &Delimiter, (ObjectClass *)&aP4) ) {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&aP4);
    v10 = v8[2];
    v12 = v11;
    if ( (int)v8[4] >= (int)v10 )
    {
    if ( !*((char *)(v8) + 13) && v10 )
    continue;
    v13 = (int)v8[5];
    if ( v13 <= 0 || !(*((unsigned char (__thiscall **)(void **, int, int))*v8 + 2))(v8, (int)v10 + v13, 0) )
    continue;
    }
    v14 = v8[4];
    v15 = (ObjectClass *)v8[1];
    v8[4] = (char *)(v14) + 1;
    *(int *)&v15->__pad_0[4 * (int)v14] = v12;
  }
    DeleteAndZero((void **)&aP4);
    DeleteAndZero((void **)&v17);
    DeleteAndZero((void **)&a2a);
}
}
} // namespace gamemd

// 0x770970
namespace gamemd {
char E4Recv_770970::sub_770970(int a2, int a3, void ** a4)
{
{
    char **v4;
    int v5;
    int v6;
    int v7;
    int v9;
    int v10;
    char **v11;
    char **v12;
    char **v13;
    char **v14;
    void *v15;
    v4 = (char **)a4;
    v5 = *(void**)this;
    v6 = (int)(this + 37 * a2 + 12 * a3 + 2);
    DeleteAndZero::Alt2(a4);
    v7 = *(int *)(v6 + 16);
    if ( v7 <= 0 )
    return 0;
    if ( v7 == 1 )
    v9 = 0;
    else
    v9 = Random::Range(Randomizer_Global, 0, v7 - 1);
    v10 = *(int *)(*(int *)(v6 + 4) + 4 * v9);
    if ( v5 == 3 )
  {
    v11 = FormatStringInt((char **)&a3, v10, 2);
    v12 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Soviet, v11);
    String::Reassign(v4, (const char **)v12);
    DeleteAndZero((void **)&a2);
    DeleteAndZero((void **)&a3);
  }
    else
  {
    v13 = FormatStringInt((char **)&v15, v10, 2);
    v14 = ProcessStringAndCopy((char **)&a4, g_Str_WWD_Allied, v13);
    String::Reassign(v4, (const char **)v14);
    DeleteAndZero((void **)&a4);
    DeleteAndZero(&v15);
  }
    return 1;
}
}
} // namespace gamemd

// 0x770A50
namespace gamemd {
char E4Recv_770A50::sub_770A50(int a2, int a3, void ** a4)
{
{
    char **v4;
    int v5;
    int v6;
    int v7;
    int v9;
    int v10;
    char **v11;
    char **v12;
    char **v13;
    char **v14;
    void *v15;
    v4 = (char **)a4;
    v5 = *(void**)this;
    v6 = (int)(this + 37 * a2 + 12 * a3 + 8);
    DeleteAndZero::Alt2(a4);
    v7 = *(int *)(v6 + 16);
    if ( v7 <= 0 )
    return 0;
    if ( v7 == 1 )
    v9 = 0;
    else
    v9 = Random::Range(Randomizer_Global, 0, v7 - 1);
    v10 = *(int *)(*(int *)(v6 + 4) + 4 * v9);
    if ( v5 == 3 )
  {
    v11 = FormatStringInt((char **)&a3, v10, 2);
    v12 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Soviet, v11);
    String::Reassign(v4, (const char **)v12);
    DeleteAndZero((void **)&a2);
    DeleteAndZero((void **)&a3);
  }
    else
  {
    v13 = FormatStringInt((char **)&v15, v10, 2);
    v14 = ProcessStringAndCopy((char **)&a4, g_Str_WWD_Allied, v13);
    String::Reassign(v4, (const char **)v14);
    DeleteAndZero((void **)&a4);
    DeleteAndZero(&v15);
  }
    return 1;
}
}
} // namespace gamemd

// 0x770B30
namespace gamemd {
char E4Recv_770B30::sub_770B30(int a2, void ** a3)
{
{
    char **v3;
    int v4;
    int v5;
    int v6;
    int v8;
    int v9;
    char **v10;
    char **v11;
    char **v12;
    char **v13;
    void *v14;
    void *v15;
    v3 = (char **)a3;
    v4 = *(void**)this;
    v5 = (int)(this + 6 * a2 + 223);
    DeleteAndZero::Alt2(a3);
    v6 = *(int *)(v5 + 16);
    if ( v6 <= 0 )
    return 0;
    if ( v6 == 1 )
    v8 = 0;
    else
    v8 = Random::Range(Randomizer_Global, 0, v6 - 1);
    v9 = *(int *)(*(int *)(v5 + 4) + 4 * v8);
    if ( v4 == 3 )
  {
    v10 = FormatStringInt((char **)&a3, v9, 2);
    v11 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Soviet, v10);
    String::Reassign(v3, (const char **)v11);
    DeleteAndZero((void **)&a2);
    DeleteAndZero((void **)&a3);
  }
    else
  {
    v12 = FormatStringInt((char **)&v15, v9, 2);
    v13 = ProcessStringAndCopy((char **)&v14, g_Str_WWD_Allied, v12);
    String::Reassign(v3, (const char **)v13);
    DeleteAndZero(&v14);
    DeleteAndZero(&v15);
  }
    return 1;
}
}
} // namespace gamemd

// 0x770D70
namespace gamemd {
void sub_770D70(const char ** a1, unsigned int * a2)
{
{
    int i;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    (*(void (__thiscall **)(int *))(*a2 + 12))(a2);
    unknown_libname_73(&v11);
    for ( i = String::Tokenize(a1, 0, &Delimiter, (ObjectClass *)&v11);
    i != -1;
    i = String::Tokenize(a1, i, &Delimiter, (ObjectClass *)&v11) ) {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&v11);
    v5 = *((int*)(a2) + 2);
    v7 = v6;
    if ( *((int*)(a2) + 4) >= v5 )
    {
    if ( !*((char *)(a2) + 13) && v5 )
    continue;
    v8 = *((int*)(a2) + 5);
    if ( v8 <= 0 || !(*(unsigned char (__thiscall **)(int *, int, int))(*a2 + 8))(a2, v5 + v8, 0) )
    continue;
    }
    v9 = *((int*)(a2) + 4);
    v10 = *((int*)(a2) + 1);
    *((int*)(a2) + 4) = v9 + 1;
    *(int *)(v10 + 4 * v9) = v7;
  }
    DeleteAndZero((void **)&v11);
}
}
} // namespace gamemd

// 0x770F10
namespace gamemd {
char E4Recv_770F10::sub_770F10(int a2, int a3, void ** a4)
{
{
    char **v4;
    int v5;
    int v6;
    int v8;
    int v9;
    char **v10;
    char **v11;
    char **v12;
    char **v13;
    void *v14;
    v4 = (char **)a4;
    v5 = (int)this + 48 * a3 + 4;
    DeleteAndZero::Alt2(a4);
    v6 = *(int *)(v5 + 16);
    if ( v6 <= 0 )
    return 0;
    if ( v6 == 1 )
    v8 = 0;
    else
    v8 = Random::Range(Randomizer_Global, 0, v6 - 1);
    v9 = *(int *)(*(int *)(v5 + 4) + 4 * v8);
    if ( a2 == 3 )
  {
    v10 = FormatStringInt((char **)&a4, v9, 2);
    v11 = ProcessStringAndCopy((char **)&a3, g_Str_WWD_Soviet, v10);
    String::Reassign(v4, (const char **)v11);
    DeleteAndZero((void **)&a3);
    DeleteAndZero((void **)&a4);
  }
    else
  {
    v12 = FormatStringInt((char **)&v14, v9, 2);
    v13 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Allied, v12);
    String::Reassign(v4, (const char **)v13);
    DeleteAndZero((void **)&a2);
    DeleteAndZero(&v14);
  }
    return 1;
}
}
} // namespace gamemd

// 0x770FE0
namespace gamemd {
char E4Recv_770FE0::sub_770FE0(int a2, int a3, void ** a4)
{
{
    char **v4;
    int v5;
    int v6;
    int v8;
    int v9;
    char **v10;
    char **v11;
    char **v12;
    char **v13;
    void *v14;
    v4 = (char **)a4;
    v5 = (int)this + 48 * a3 + 28;
    DeleteAndZero::Alt2(a4);
    v6 = *(int *)(v5 + 16);
    if ( v6 <= 0 )
    return 0;
    if ( v6 == 1 )
    v8 = 0;
    else
    v8 = Random::Range(Randomizer_Global, 0, v6 - 1);
    v9 = *(int *)(*(int *)(v5 + 4) + 4 * v8);
    if ( a2 == 3 )
  {
    v10 = FormatStringInt((char **)&a4, v9, 2);
    v11 = ProcessStringAndCopy((char **)&a3, g_Str_WWD_Soviet, v10);
    String::Reassign(v4, (const char **)v11);
    DeleteAndZero((void **)&a3);
    DeleteAndZero((void **)&a4);
  }
    else
  {
    v12 = FormatStringInt((char **)&v14, v9, 2);
    v13 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Allied, v12);
    String::Reassign(v4, (const char **)v13);
    DeleteAndZero((void **)&a2);
    DeleteAndZero(&v14);
  }
    return 1;
}
}
} // namespace gamemd

// 0x771710
namespace gamemd {
int E4Recv_771710::sub_771710()
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int result;
    v2 = this->M976;
    v3 = v2 - 1;
    if ( v2 > this->M956 )
  {
    do
    {
    v4 = this->M976;
    if ( v3 < v4 )
      {
    v5 = v4 - 1;
    v6 = v3;
    for ( this->M976 = v5; v6 < this->M976; ++v6 )
    String::Reassign( (char **)(this->M964 + 4 * v6), (const char **)(this->M964 + 4 * v6 + 4));
      }
    v7 = v3--;
    }
    while ( v7 > this->M956 );
  }
    result = this->M956;
    if ( !result )
    this->M952 = 1;
    return result;
}
}
} // namespace gamemd

// 0x771780
namespace gamemd {
void nullsub_259()
{
  ;
}
} // namespace gamemd

// 0x771790
namespace gamemd {
void nullsub_260()
{
  ;
}
} // namespace gamemd

// 0x7717A0
namespace gamemd {
DWORD E4Recv_7717A0::sub_7717A0()
{
{
    DWORD result;
    DWORD *v3;
    DWORD v4;
    if ( (int)this->M976 > 0 )
  {
    StopThemeClass(1);
    (*(void (__thiscall **)(DWORD *))(this->M960 + 12))(this + 240);
  }
    result = Timer::GetTicks();
    v3 = this + 235;
    *v3 = result;
    v3[1] = v4;
    v3[2] = 0;
    return result;
}
}
} // namespace gamemd

// 0x7717F0
namespace gamemd {
int j_Audio_IsPlaying()
{
return Audio::IsPlaying();
}
} // namespace gamemd

// 0x771850
namespace gamemd {
unsigned int * E4Recv_771850::sub_771850(int a2)
{
{
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 0;
    this->M16 = Timer::GetTicks();
    this->M24 = 0;
    this->M28 = a2;
    *(void**)this = &vt_WorldDominationTour_Voices_Anim;
    return this;
}
}
} // namespace gamemd

// 0x7719E0
namespace gamemd {
int E4Recv_7719E0::sub_7719E0()
{
{
    this->M12 = 1;
    this->M4 = 0;
    this->M8 = 0;
    this->M13 = 0;
    *(void**)this = vt_DynamicVectorClass_unsigned_int;
    this->M20 = 10;
    this->M16 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x771A00
namespace gamemd {
void E4Recv_771A00::sub_771A00()
{
{
    CCINIClass *v2;
    v2 = (CCINIClass *)this->M4;
    *(int *)this = &vt_VectorClass_unsigned_int;
    if ( v2 && (unsigned char)this->M13 )
  {
    __3_YAXPAX_Z(v2);
    this->M4 = 0;
  }
    this->M13 = 0;
    this->M8 = 0;
}
}
} // namespace gamemd

// 0x771A60
namespace gamemd {
void sub_771A60()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B72C30 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x771A90
namespace gamemd {
void sub_771A90()
{
{
    DataGlobal_B72C80 = DataGlobal_B72C30 / 60.0;
}
}
} // namespace gamemd

// 0x771AB0
namespace gamemd {
void sub_771AB0()
{
{
    DataGlobal_B72C68 = 1.0 / DataGlobal_B72C80;
}
}
} // namespace gamemd

// 0x771AD0
namespace gamemd {
void sub_771AD0()
{
{
    DataGlobal_B72C60 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x771AF0
namespace gamemd {
void sub_771AF0()
{
{
    DataGlobal_B72C38 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x771B10
namespace gamemd {
void sub_771B10()
{
{
    DataGlobal_B72C10 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x771B30
namespace gamemd {
long long sub_771B30()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B72C10 - DataGlobal_B72C38);
    result = Math::RoundToInt(v0 * DataGlobal_B72C30 * 0.5);
    DataGlobal_B72C88 = result;
    return result;
}
}
} // namespace gamemd

// 0x771B70
namespace gamemd {
void sub_771B70()
{
{
    DataGlobal_B72C40 = Math::ArcTan((double)DataGlobal_B72C88 * 0.00390625);
}
}
} // namespace gamemd

// 0x771BA0
namespace gamemd {
void sub_771BA0()
{
{
    DataGlobal_B72C58 = Math::ArcTan((double)(2 * DataGlobal_B72C88) / DataGlobal_B72C30);
}
}
} // namespace gamemd

// 0x771BD0
namespace gamemd {
long long sub_771BD0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B72C88) + 0.5);
    DataGlobal_B72C7C = result;
    return result;
}
}
} // namespace gamemd

// 0x771C00
namespace gamemd {
int sub_771C00()
{
{
    DataGlobal_B72C28 = 0;
    DataGlobal_B72C2A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x771C10
namespace gamemd {
int sub_771C10()
{
{
    DataGlobal_B72C48 = 0;
    DataGlobal_B72C4C = 0;
    DataGlobal_B72C50 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x771C30
namespace gamemd {
int sub_771C30()
{
{
    DataGlobal_B72C78 = 0;
    DataGlobal_B72C70 = 128;
    DataGlobal_B72C74 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x771C50
namespace gamemd {
int sub_771C50()
{
{
    DataGlobal_B72C18 = 0;
    DataGlobal_B72C1C = 0;
    DataGlobal_B72C20 = 0;
    DataGlobal_B72C24 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x773240
namespace gamemd {
int sub_773240()
{
{
    DataGlobal_B72C98 = 0;
    DataGlobal_B72C9C = 0;
    DataGlobal_B72CA0 = 0;
    DataGlobal_B72CA4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x773260
namespace gamemd {
void sub_773260()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B72CB0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x773290
namespace gamemd {
void sub_773290()
{
{
    DataGlobal_B72D00 = DataGlobal_B72CB0 / 60.0;
}
}
} // namespace gamemd

// 0x7732B0
namespace gamemd {
void sub_7732B0()
{
{
    DataGlobal_B72CE8 = 1.0 / DataGlobal_B72D00;
}
}
} // namespace gamemd

// 0x7732D0
namespace gamemd {
void sub_7732D0()
{
{
    DataGlobal_B72CE0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x7732F0
namespace gamemd {
void sub_7732F0()
{
{
    DataGlobal_B72CB8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x773310
namespace gamemd {
void sub_773310()
{
{
    DataGlobal_B72C90 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x773330
namespace gamemd {
long long sub_773330()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B72C90 - DataGlobal_B72CB8);
    result = Math::RoundToInt(v0 * DataGlobal_B72CB0 * 0.5);
    DataGlobal_B72D08 = result;
    return result;
}
}
} // namespace gamemd

// 0x773370
namespace gamemd {
void sub_773370()
{
{
    DataGlobal_B72CC0 = Math::ArcTan((double)DataGlobal_B72D08 * 0.00390625);
}
}
} // namespace gamemd

// 0x7733A0
namespace gamemd {
void sub_7733A0()
{
{
    DataGlobal_B72CD8 = Math::ArcTan((double)(2 * DataGlobal_B72D08) / DataGlobal_B72CB0);
}
}
} // namespace gamemd

// 0x7733D0
namespace gamemd {
long long sub_7733D0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B72D08) + 0.5);
    DataGlobal_B72CFC = result;
    return result;
}
}
} // namespace gamemd

// 0x773400
namespace gamemd {
int sub_773400()
{
{
    DataGlobal_B72CA8 = 0;
    DataGlobal_B72CAA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x773410
namespace gamemd {
int sub_773410()
{
{
    DataGlobal_B72CC8 = 0;
    DataGlobal_B72CCC = 0;
    DataGlobal_B72CD0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x773430
namespace gamemd {
int sub_773430()
{
{
    DataGlobal_B72CF8 = 0;
    DataGlobal_B72CF0 = 128;
    DataGlobal_B72CF4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x773450
namespace gamemd {
unsigned int * sub_773450(int a1, int a2)
{
{
    int *v4;
    int *result;
    int *v6;
    v4 = __2_YAPAXI_Z(0x414u);
    result = 0;
    if ( v4 )
  {
    v6 = v4 + 2;
    v4[1] = 1;
    v4[2] = 0;
    *((char *)(v4) + 1036) = 0;
    v4[260] = 0;
    *v4 = &vt_WebBrowser;
    Debug::Log();
    v4[260] = a1;
    Debug::Log();
    if ( CoCreateInstance(&DataGlobal_7F7C60, 0, 1u, &DataGlobal_7F7C30, (LPVOID *)(v4) + 2) >= 0 )
    {
    Debug::Log();
    (*(void (__stdcall **)(int, int *))(*(int *)*v6 + 20))(*v6, v4);
    (*(void (__stdcall **)(int, int, int))(*(int *)*v6 + 12))(*v6, a1, a2);
    (*(void (__stdcall **)(int, int))(*(int *)*v6 + 60))(*v6, 1);
    }
    return v4;
  }
    return result;
}
}
} // namespace gamemd

// 0x773590
namespace gamemd {
char AnimClass::sub_773590(int a2, int a3)
{
{
    void **v4;
    *(int *)&this->__pad_40C[4] = a2;
    Debug::Log();
    v4 = &this->field_8;
    if ( CoCreateInstance(&DataGlobal_7F7C60, 0, 1u, &DataGlobal_7F7C30, &this->field_8) >= 0 )
  {
    Debug::Log();
    (*(void (__stdcall **)(void *, AnimClass *))(*(int *)*v4 + 20))(*v4, this);
    (*(void (__stdcall **)(void *, int, int))(*(int *)*v4 + 12))(*v4, a2, a3);
    (*(void (__stdcall **)(void *, int))(*(int *)*v4 + 60))(*v4, 1);
  }
    return 1;
}
}
} // namespace gamemd

// 0x7738A0
namespace gamemd {
BOOL E4Recv_7738A0::sub_7738A0(const char * cbData, LPBYTE lpData, const char * Type)
{
{
    LSTATUS Value;
    HKEY phkResult;
    CHAR ValueName[64];
    Value = RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult);
    if ( !Value )
  {
    strcpy(ValueName, cbData);
    if ( !this->M8 )
    strcat(ValueName, DataGlobal_84968C);
    cbData = Type;
    Value = RegQueryValueExA(phkResult, ValueName, 0, (LPDWORD)&Type, lpData, (LPDWORD)&cbData);
    RegCloseKey(phkResult);
  }
    return Value == 0;
}
}
} // namespace gamemd

// 0x773970
namespace gamemd {
BOOL sub_773970(BYTE * Type, DWORD cbData)
{
{
    LSTATUS v2;
    char *v3;
    char *v4;
    HKEY phkResult;
    v2 = RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_Software_Westwood_Yuri_s_Reven, 0, 0x20019u, &phkResult);
    if ( !v2 )
  {
    v3 = (char *)Type;
    v2 = RegQueryValueExA(phkResult, g_INI_Key_HTMLPath, 0, (LPDWORD)&Type, Type, &cbData);
    RegCloseKey(phkResult);
    if ( !v2 )
    {
    v4 = strrchr(v3, 92);
    if ( !v4 || strlen(v3) > v4 - v3 + 1 )
    strcat(v3, asc_815E74);
    }
  }
    return v2 == 0;
}
}
} // namespace gamemd

// 0x773AD0
namespace gamemd {
int WebBrowser___vt03()
{
{
    HWND v1;
    int v3;
    v1 = *(HWND *)(v3 + 1040);
    if ( v1 )
    *(int *)GetWindowLongA(v1, 8) = 1;
    return 0;
}
}
} // namespace gamemd

// 0x773E30
namespace gamemd {
int sub_773E30(HWND hWndParent, unsigned int a2, int a3, unsigned int a4)
{
{
    int result;
    LPARAM lParam[2];
    result = BaseDialogProc(hWndParent, a2, a3, a4);
    if ( !result )
  {
    if ( a2 == 272 )
    {
    lParam[0] = 800;
    lParam[1] = 600;
    ResizeDialogAndEnum(hWndParent, (LPARAM)lParam);
    }
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x774100
namespace gamemd {
int sub_774100()
{
{
    DataGlobal_B72D10 = 0;
    DataGlobal_B72D14 = 0;
    DataGlobal_B72D18 = 0;
    DataGlobal_B72D1C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x774310
namespace gamemd {
char sub_774310(BYTE * a1, signed int a2)
{
{
    HKEY RegistrySubKey;
    HKEY v6;
    HKEY v7;
    HKEY v8;
    DWORD v9;
    DWORD cbData;
    BYTE Data[256];
    cbData = 256;
    RegistrySubKey = FindRegistrySubKey(HKEY_LOCAL_MACHINE, aEnum, 0);
    if ( !RegistrySubKey )
    return 0;
    v6 = FindRegistrySubKey(RegistrySubKey, aRoot, 1);
    if ( !v6 )
    return 0;
    v7 = FindRegistrySubKey(v6, aModem, 1);
    if ( !v7 )
    return 0;
    v8 = FindRegistrySubKey(v7, a0000_0, 1);
    if ( !v8 )
    return 0;
    if ( RegQueryValueExA(v8, aFriendlyname, 0, 0, Data, &cbData) )
  {
    RegCloseKey(v8);
    return 0;
  }
    else
  {
    RegCloseKey(v8);
    v9 = cbData;
    if ( a2 < (int)cbData )
    v9 = a2;
    qmemcpy(a1, Data, v9);
    return 1;
  }
}
}
} // namespace gamemd

// 0x775670
namespace gamemd {
int sub_775670()
{
{
    DataGlobal_B72F28 = 0;
    DataGlobal_B72F2C = 0;
    DataGlobal_B72F30 = 0;
    DataGlobal_B72F34 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x775B40
namespace gamemd {
INT_PTR sub_775B40(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
return 0;
}
} // namespace gamemd

// 0x775B50
namespace gamemd {
int sub_775B50(unsigned short a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM) a2, int a3, LONG * a4)
{
{
    ObjectClass *DialogParamA;
    LONG bottom;
    struct tagRECT Rect;
    DialogParamA = (ObjectClass *)CreateDialogParamA(g_hInstance, (LPCSTR)a1, 0, a2, 0);
    GetClientRect((HWND)DialogParamA, &Rect);
    DestroyWindow((HWND)DialogParamA);
    bottom = Rect.bottom;
    *a4 = Rect.right;
    *((int*)(a4) + 1) = bottom;
    return 1;
}
}
} // namespace gamemd

// 0x775D70
namespace gamemd {
int sub_775D70()
{
{
    DataGlobal_B72F38 = 0;
    DataGlobal_B72F3C = 0;
    DataGlobal_B72F40 = 0;
    return atexit(sub_775D90);
}
}
} // namespace gamemd

// 0x775D90
namespace gamemd {
void sub_775D90()
{
{
    DataGlobal_B72F38 = 0;
    __3_YAXPAX_Z(DataGlobal_B72F40);
}
}
} // namespace gamemd

// 0x776210
namespace gamemd {
int sub_776210()
{
{
    DataGlobal_B73088 = 0;
    DataGlobal_B7308C = 0;
    DataGlobal_B73090 = 0;
    DataGlobal_B73094 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x776670
namespace gamemd {
char sub_776670(LPARAM lParam)
{
{
    int v2;
    HCURSOR CursorA;
    char v4;
    HCURSOR v5;
    struct tagRECT Rect;
    WPARAM wParam[10];
    struct tagPOINT v9[5];
    if ( !DataGlobal_B7309C )
    return 0;
    ImageList_DragShowNolock(0);
    qmemcpy(v9, HitDialogTest(lParam, v2, v9), sizeof(v9));
    qmemcpy(wParam, v9, sizeof(wParam));
    if ( SendMessageA((HWND)v9[0].y, 0x4C8u, (WPARAM)wParam, lParam) )
  {
    CursorA = LoadCursorA(0, (LPCSTR)0x7F00);
    SetCursor(CursorA);
    v4 = 1;
  }
    else
  {
    v5 = LoadCursorA(0, (LPCSTR)0x7F88);
    SetCursor(v5);
    v4 = 0;
  }
    ImageList_DragShowNolock(1);
    GetWindowRect((HWND)wParam[1], &Rect);
    ImageList_DragMove(wParam[4] - Rect.left, wParam[5] - Rect.top);
    return v4;
}
}
} // namespace gamemd

// 0x776750
namespace gamemd {
char sub_776750(HWND hWnd, int a2, int a3, int a4)
{
{
    LPARAM v4;
    char v5;
    int v6;
    LPARAM lParam[6];
    int v9;
    int v10;
    v4 = *(int *)(a2 + 60);
    v5 = 0;
    v6 = *(int *)(a2 + 12) - 1;
    lParam[1] = v4;
    lParam[0] = 50;
    if ( v6 )
  {
    if ( v6 == 1 )
    {
    v5 = 1;
    v9 = a4;
    v10 = a4;
    }
  }
    else
  {
    v5 = 0;
    v9 = a3;
    v10 = a3;
  }
    SendMessageA(hWnd, 0x110Du, 0, (LPARAM)lParam);
    return v5;
}
}
} // namespace gamemd

// 0x7767B0
namespace gamemd {
HWND sub_7767B0(HWND hWnd, int a2, WPARAM wParam)
{
{
    HWND result;
    result = (HWND)SendMessageA(hWnd, 0x110Fu, 0, 0);
    if ( result )
  {
    result = (HWND)SendMessageA(result, 0xC5u, wParam, 0);
    DataGlobal_B73080 = a2;
    DataGlobal_B730A0 = hWnd;
  }
    return result;
}
}
} // namespace gamemd

// 0x7767F0
namespace gamemd {
unsigned int E4Recv_7767F0::sub_7767F0()
{
{
    char *v2;
    LPARAM lParam[10];
    v2 = this->M28;
    if ( !v2 )
    return 0;
    String::Trim(v2);
    strcpy((char *)DataGlobal_B73080, v2);
    lParam[1] = (LPARAM)this->M16;
    lParam[0] = 1;
    lParam[4] = DataGlobal_B73080;
    SendMessageA(DataGlobal_B730A0, 0x110Du, 0, (LPARAM)lParam);
    return strlen((const char *)DataGlobal_B73080);
}
}
} // namespace gamemd

// 0x7768F0
namespace gamemd {
BOOL sub_7768F0(HWND hWnd, LPARAM a2)
{
{
    int v3;
    LRESULT i;
    unsigned char *v5;
    signed int j;
    LRESULT v7;
    unsigned int Int_Overwrite;
    CHAR ClassName[64];
    unsigned char *hWnda;
    GetClassNameA(hWnd, ClassName, 64);
    if ( !strcmp(ClassName, aSystreeview32) )
  {
    v3 = 0;
    hWnda = (unsigned char *)DataGlobal_B73098;
    for ( i = SendMessageA(hWnd, 0x110Au, 0, 0); i; i = SendMessageA(hWnd, 0x110Au, 1u, i) )
    {
    wsprintfA(ClassName, "TV%d", ++v3);
    if ( INIClass::ReadBool_Overwrite(a2, hWnda, (unsigned char *)ClassName, 0) )
    SendMessageA(hWnd, 0x1102u, 2u, i);
    else
    SendMessageA(hWnd, 0x1102u, 1u, i);
    }
  }
    GetClassNameA(hWnd, ClassName, 64);
    if ( !strcmp(ClassName, aSyslistview32) )
  {
    v5 = (unsigned char *)DataGlobal_B73098;
    if ( hWnd )
    {
    for ( j = 0; j < 10; ++j )
      {
    wsprintfA(ClassName, "LV%d", j);
    v7 = SendMessageA(hWnd, 0x101Du, j, 0);
    Int_Overwrite = INIClass::ReadInt_Overwrite(a2, v5, (unsigned char *)ClassName, v7);
    if ( Int_Overwrite < 0x3E8 )
    SendMessageA(hWnd, 0x101Eu, j, (unsigned short)Int_Overwrite);
      }
    }
  }
    return 1;
}
}
} // namespace gamemd

// 0x776A70
namespace gamemd {
void SaveWOLLobbySettings(unsigned char * a1, HWND a2, LPARAM lParam)
{
{
    int Int_Overwrite;
    int v6;
    int SystemMetrics;
    int v8;
    struct tagRECT Rect;
    if ( a2 )
  {
    GetWindowRect(a2, &Rect);
    Int_Overwrite = INIClass::ReadInt_Overwrite(lParam, a1, &DataGlobal_84968C, (INIClass *)Rect.left);
    v6 = INIClass::ReadInt_Overwrite(lParam, a1, &DataGlobal_849E64, (INIClass *)Rect.top);
    SystemMetrics = GetSystemMetrics(0);
    if ( Int_Overwrite + Rect.right - Rect.left > SystemMetrics )
    Int_Overwrite = Rect.left + SystemMetrics - Rect.right;
    v8 = GetSystemMetrics(1);
    if ( v6 + Rect.bottom - Rect.top > v8 )
    v6 = Rect.top + v8 - Rect.bottom;
    if ( Int_Overwrite < 0 )
    Int_Overwrite = 0;
    if ( v6 < 0 )
    v6 = 0;
    SetWindowPos(a2, 0, Int_Overwrite, v6, 0, 0, 5u);
    DataGlobal_B73098 = a1;
    EnumChildWindows(a2, LoadWOLSettings, lParam);
  }
}
}
} // namespace gamemd

// 0x776B40
namespace gamemd {
BOOL SaveWOLUISettings(HWND hWnd, char * a2)
{
{
    int v2;
    LRESULT i;
    unsigned char *v4;
    signed int j;
    unsigned int v6;
    unsigned char *Block;
    CHAR v9[32];
    CHAR ClassName[4];
    LRESULT v11;
    char v12;
    int v13;
    GetClassNameA(hWnd, ClassName, 64);
    if ( !strcmp(ClassName, aSystreeview32) )
  {
    v2 = 0;
    Block = (unsigned char *)DataGlobal_B73098;
    for ( i = SendMessageA(hWnd, 0x110Au, 0, 0); i; i = SendMessageA(hWnd, 0x110Au, 1u, i) )
    {
    wsprintfA(v9, "TV%d", ++v2);
    *(int *)ClassName = 24;
    v13 = 32;
    v11 = i;
    if ( SendMessageA(hWnd, 0x110Cu, 0, (LPARAM)ClassName) )
    INIClass::SetBool(a2, Block, v9, (v12 & 0x20) != 0);
    }
  }
    GetClassNameA(hWnd, ClassName, 64);
    if ( !strcmp(ClassName, aSyslistview32) )
  {
    v4 = (unsigned char *)DataGlobal_B73098;
    if ( hWnd )
    {
    for ( j = 0; j < 10; ++j )
      {
    wsprintfA(v9, "LV%d", j);
    v6 = SendMessageA(hWnd, 0x101Du, j, 0);
    if ( v6 < 0x3E8 )
    INIClass::SetInt(a2, v4, v9, v6, 0);
      }
    }
  }
    return 1;
}
}
} // namespace gamemd

// 0x776CD0
namespace gamemd {
BOOL sub_776CD0(INIClass * Block, HWND hWndParent, char * lParam)
{
{
    int result;
    struct tagRECT Rect;
    if ( hWndParent )
  {
    GetWindowRect(hWndParent, &Rect);
    INIClass::SetInt(lParam, Block, &DataGlobal_84968C, (INIClass *)Rect.left, 0);
    INIClass::SetInt(lParam, Block, &DataGlobal_849E64, (INIClass *)Rect.top, 0);
    DataGlobal_B73098 = Block;
    return EnumChildWindows(hWndParent, (WNDENUMPROC)SaveWOLUISettings, (LPARAM)lParam);
  }
    return result;
}
}
} // namespace gamemd

// 0x776E10
namespace gamemd {
LRESULT FindListBoxItem(HWND hWnd, LRESULT wParam, int a3)
{
{
    LRESULT v6;
    v6 = SendMessageA(hWnd, 0x146u, 0, 0);
    if ( wParam >= v6 )
    return -1;
    while ( SendMessageA(hWnd, 0x150u, wParam, 0) != a3 )
  {
    if ( ++wParam >= v6 )
    return -1;
  }
    return wParam;
}
}
} // namespace gamemd

// 0x776EA0
namespace gamemd {
void nullsub_261()
{
  ;
}
} // namespace gamemd

// 0x776EB0
namespace gamemd {
void * E4Recv_776EB0::sub_776EB0()
{
{
    DWORD dwBuildNumber;
    DWORD dwMinorVersion;
    DWORD dwPlatformId;
    struct _OSVERSIONINFOA VersionInformation;
    *(int *)this = 0;
    this->M4 = 0;
    this->M8 = 0;
    this->M140 = 0;
    this->M141 = 0;
    VersionInformation.dwOSVersionInfoSize = 148;
    GetVersionExA(&VersionInformation);
    dwBuildNumber = VersionInformation.dwBuildNumber;
    dwMinorVersion = VersionInformation.dwMinorVersion;
    *(int *)this = VersionInformation.dwMajorVersion;
    this->M8 = dwBuildNumber;
    dwPlatformId = VersionInformation.dwPlatformId;
    this->M4 = dwMinorVersion;
    if ( dwPlatformId == 1 )
  {
    this->M140 = 1;
  }
    else if ( dwPlatformId == 2 )
  {
    this->M141 = 1;
  }
    strncpy((char *)(this) + 12, VersionInformation.szCSDVersion, 0x7Fu);
    this->M139 = 0;
    return this;
}
}
} // namespace gamemd

// 0x7771B0
namespace gamemd {
int sub_7771B0()
{
{
    DataGlobal_B730B8 = 0;
    DataGlobal_B730BC = 0;
    DataGlobal_B730C0 = 0;
    DataGlobal_B730C4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7771D0
namespace gamemd {
void sub_7771D0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B730D0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x777200
namespace gamemd {
void sub_777200()
{
{
    DataGlobal_B73538 = DataGlobal_B730D0 / 60.0;
}
}
} // namespace gamemd

// 0x777220
namespace gamemd {
void sub_777220()
{
{
    DataGlobal_B73520 = 1.0 / DataGlobal_B73538;
}
}
} // namespace gamemd

// 0x777240
namespace gamemd {
void sub_777240()
{
{
    DataGlobal_B73310 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x777260
namespace gamemd {
void sub_777260()
{
{
    DataGlobal_B730D8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x777280
namespace gamemd {
void sub_777280()
{
{
    DataGlobal_B730B0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x7772E0
namespace gamemd {
void sub_7772E0()
{
{
    DataGlobal_B730E0 = Math::ArcTan((double)DataGlobal_B73540 * 0.00390625);
}
}
} // namespace gamemd

// 0x777310
namespace gamemd {
void sub_777310()
{
{
    DataGlobal_B73308 = Math::ArcTan((double)(2 * DataGlobal_B73540) / DataGlobal_B730D0);
}
}
} // namespace gamemd

// 0x777340
namespace gamemd {
long long sub_777340()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B73540) + 0.5);
    DataGlobal_B73534 = result;
    return result;
}
}
} // namespace gamemd

// 0x777370
namespace gamemd {
int sub_777370()
{
{
    DataGlobal_B730C8 = 0;
    DataGlobal_B730CA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x777380
namespace gamemd {
int sub_777380()
{
{
    DataGlobal_B732F8 = 0;
    DataGlobal_B732FC = 0;
    DataGlobal_B73300 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7773A0
namespace gamemd {
int sub_7773A0()
{
{
    DataGlobal_B73530 = 0;
    DataGlobal_B73528 = 128;
    DataGlobal_B7352C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x777AB0
namespace gamemd {
void nullsub_262()
{
  ;
}
} // namespace gamemd

// 0x777F90
namespace gamemd {
LONG sub_777F90(HWND hWnd)
{
{
    LONG result;
    WCHAR *v3;
    LONG v4;
    CHAR Buf[516];
    WCHAR WideCharStr[258];
    result = (LONG)DataGlobal_B7355C;
    if ( DataGlobal_B7355C )
  {
    result = ImmGetCompositionStringA(DataGlobal_B7355C, 0x800u, Buf, 0x200u);
    if ( result > 0 )
    {
    Buf[result] = 0;
    result = MultiByteToWideChar(0, 0, Buf, strlen(Buf), WideCharStr, 256);
    if ( result < 0 )
    result = 0;
    WideCharStr[result] = 0;
    if ( result > 0 )
      {
    v3 = WideCharStr;
    v4 = result;
    do
        {
    result = SendMessageA(hWnd, 0x4D9u, *v3, *v3);
    ++v3;
    --v4;
        }
    while ( v4 );
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x778170
namespace gamemd {
void nullsub_48()
{
  ;
}
} // namespace gamemd

// 0x7781A0
namespace gamemd {
HIMC IME_Disable()
{
{
    return ImmAssociateContext(g_hWnd, 0);
}
}
} // namespace gamemd

// 0x7784D0
namespace gamemd {
int sub_7784D0()
{
{
    DataGlobal_B73580 = 0;
    DataGlobal_B73584 = 0;
    DataGlobal_B73588 = 0;
    DataGlobal_B7358C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7784F0
namespace gamemd {
void sub_7784F0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B73598 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x778520
namespace gamemd {
void sub_778520()
{
{
    DataGlobal_B735E8 = DataGlobal_B73598 / 60.0;
}
}
} // namespace gamemd

// 0x778540
namespace gamemd {
void sub_778540()
{
{
    DataGlobal_B735D0 = 1.0 / DataGlobal_B735E8;
}
}
} // namespace gamemd

// 0x778560
namespace gamemd {
void sub_778560()
{
{
    DataGlobal_B735C8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x778580
namespace gamemd {
void sub_778580()
{
{
    DataGlobal_B735A0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x7785A0
namespace gamemd {
void sub_7785A0()
{
{
    DataGlobal_B73578 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x7785C0
namespace gamemd {
long long sub_7785C0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B73578 - DataGlobal_B735A0);
    result = Math::RoundToInt(v0 * DataGlobal_B73598 * 0.5);
    DataGlobal_B735F0 = result;
    return result;
}
}
} // namespace gamemd

// 0x778600
namespace gamemd {
void sub_778600()
{
{
    DataGlobal_B735A8 = Math::ArcTan((double)DataGlobal_B735F0 * 0.00390625);
}
}
} // namespace gamemd

// 0x778630
namespace gamemd {
void sub_778630()
{
{
    DataGlobal_B735C0 = Math::ArcTan((double)(2 * DataGlobal_B735F0) / DataGlobal_B73598);
}
}
} // namespace gamemd

// 0x778660
namespace gamemd {
long long sub_778660()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B735F0) + 0.5);
    DataGlobal_B735E4 = result;
    return result;
}
}
} // namespace gamemd

// 0x778690
namespace gamemd {
int sub_778690()
{
{
    DataGlobal_B73594 = 0;
    DataGlobal_B73596 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7786A0
namespace gamemd {
int sub_7786A0()
{
{
    DataGlobal_B735B0 = 0;
    DataGlobal_B735B4 = 0;
    DataGlobal_B735B8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7786C0
namespace gamemd {
int sub_7786C0()
{
{
    DataGlobal_B735E0 = 0;
    DataGlobal_B735D8 = 128;
    DataGlobal_B735DC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x7786E0
namespace gamemd {
int sub_7786E0()
{
{
    String::Assign((char **)&DataGlobal_B73590, DataGlobal_849F58);
    return atexit(unknown_libname_38);
}
}
} // namespace gamemd

// 0x778700
namespace gamemd {
int unknown_libname_38()
{
    void __cdecl unknown_libname_38()
{
    DeleteAndZero((void **)&DataGlobal_B73590);
}
}
} // namespace gamemd

// 0x779730
namespace gamemd {
char sub_779730()
{
{
    char Bool_Overwrite;
    void *v2[4];
    int v3[3];
    int v4[6];
    char v5;
    int v6;
    int v7;
    int v8[22];
    BufferIOFile::Constructor(v8, g_Str_File_wolinfoMD_ini);
    if ( File::IsReady(v8, 0) )
  {
    v3[0] = &vt_GenericNode;
    v4[0] = &vt_GenericNode;
    v2[1] = 0;
    v2[2] = 0;
    v3[1] = 0;
    v3[2] = 0;
    v4[1] = 0;
    v4[2] = 0;
    LinkedList::Prepend(v3, (int)v4);
    v2[3] = &vt_List_INIClass_INISection;
    memset(&v4[3], 0, 12);
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v2[0] = &vt_INIClass;
    FileStraw::Open(v2, (int)v8, 0);
    CCFileClass::Close(v8);
    Bool_Overwrite = INIClass::ReadBool_Overwrite( (int)v2, (unsigned char *)&DataGlobal_84A11C, (unsigned char *)g_INI_Key_AutoLogin, 1);
    HashTable::DestroyHashTableINIClass(v2);
    v8[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v8);
    return Bool_Overwrite;
  }
    else
  {
    v8[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v8);
    return 0;
  }
}
}
} // namespace gamemd

// 0x779830
namespace gamemd {
int ReadWOLGameOption(INIClass * a1)
{
{
    char v3[4];
    int v4;
    int v5;
    void **v6;
    int v7[3];
    int v8[6];
    char v9;
    int v10;
    int v11;
    int v12[22];
    BufferIOFile::Constructor(v12, g_Str_File_wolinfoMD_ini);
    if ( !File::IsReady(v12, 0) )
  {
    FileClass::Close(v12);
    CCFileClass::Close(v12);
    CCFileClass::Reopen(v12, g_Str_File_wolinfoMD_ini, (CDFileClass *)1);
  }
    v7[0] = &vt_GenericNode;
    v8[0] = &vt_GenericNode;
    v4 = 0;
    v5 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v8[1] = 0;
    v8[2] = 0;
    LinkedList::Prepend(v7, (int)v8);
    v6 = &vt_List_INIClass_INISection;
    memset(&v8[3], 0, 12);
    v9 = 0;
    v10 = 0;
    v11 = 0;
    *(int *)v3 = &vt_INIClass;
    if ( File::IsReady(v12, 0) )
  {
    FileStraw::Open(v3, (int)v12, 0);
    INIClass::SetBool(v3, &DataGlobal_84A11C, (char *)DataGlobal_84A11C.headNode, a1);
    INIClass::SaveToPipe(v3, (int)v12);
  }
    HashTable::DestroyHashTableINIClass((void **)v3);
    v12[0] = &DataGlobal_7E1668;
    return BufferIOFileClass::Dtor(v12);
}
}
} // namespace gamemd

// 0x779940
namespace gamemd {
char sub_779940()
{
{
    char Bool_Overwrite;
    void *v2[4];
    int v3[3];
    int v4[6];
    char v5;
    int v6;
    int v7;
    int v8[22];
    BufferIOFile::Constructor(v8, g_Str_File_wolinfoMD_ini);
    if ( File::IsReady(v8, 0) )
  {
    v3[0] = &vt_GenericNode;
    v4[0] = &vt_GenericNode;
    v2[1] = 0;
    v2[2] = 0;
    v3[1] = 0;
    v3[2] = 0;
    v4[1] = 0;
    v4[2] = 0;
    LinkedList::Prepend(v3, (int)v4);
    v2[3] = &vt_List_INIClass_INISection;
    memset(&v4[3], 0, 12);
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v2[0] = &vt_INIClass;
    FileStraw::Open(v2, (int)v8, 0);
    CCFileClass::Close(v8);
    Bool_Overwrite = INIClass::ReadBool_Overwrite( (int)v2, (unsigned char *)&DataGlobal_84A11C, (unsigned char *)DataGlobal_84A12C, 1);
    HashTable::DestroyHashTableINIClass(v2);
    v8[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v8);
    return Bool_Overwrite;
  }
    else
  {
    v8[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v8);
    return 0;
  }
}
}
} // namespace gamemd

// 0x779A40
namespace gamemd {
int ReadWOLLobbyOption(INIClass * a1)
{
{
    char v3[4];
    int v4;
    int v5;
    void **v6;
    int v7[3];
    int v8[6];
    char v9;
    int v10;
    int v11;
    int v12[22];
    BufferIOFile::Constructor(v12, g_Str_File_wolinfoMD_ini);
    if ( !File::IsReady(v12, 0) )
  {
    FileClass::Close(v12);
    CCFileClass::Close(v12);
    CCFileClass::Reopen(v12, g_Str_File_wolinfoMD_ini, (CDFileClass *)1);
  }
    v7[0] = &vt_GenericNode;
    v8[0] = &vt_GenericNode;
    v4 = 0;
    v5 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v8[1] = 0;
    v8[2] = 0;
    LinkedList::Prepend(v7, (int)v8);
    v6 = &vt_List_INIClass_INISection;
    memset(&v8[3], 0, 12);
    v9 = 0;
    v10 = 0;
    v11 = 0;
    *(int *)v3 = &vt_INIClass;
    if ( File::IsReady(v12, 0) )
  {
    FileStraw::Open(v3, (int)v12, 0);
    INIClass::SetBool(v3, &DataGlobal_84A11C, (char *)DataGlobal_84A11C.sectionHead, a1);
    INIClass::SaveToPipe(v3, (int)v12);
  }
    HashTable::DestroyHashTableINIClass((void **)v3);
    v12[0] = &DataGlobal_7E1668;
    return BufferIOFileClass::Dtor(v12);
}
}
} // namespace gamemd

// 0x77B070
namespace gamemd {
int sub_77B070()
{
{
    DataGlobal_B73600 = 0;
    DataGlobal_B73604 = 0;
    DataGlobal_B73608 = 0;
    DataGlobal_B7360C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x77B090
namespace gamemd {
void sub_77B090()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B73618 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x77B0C0
namespace gamemd {
void sub_77B0C0()
{
{
    DataGlobal_B73668 = DataGlobal_B73618 / 60.0;
}
}
} // namespace gamemd

// 0x77B0E0
namespace gamemd {
void sub_77B0E0()
{
{
    DataGlobal_B73650 = 1.0 / DataGlobal_B73668;
}
}
} // namespace gamemd

// 0x77B100
namespace gamemd {
void sub_77B100()
{
{
    DataGlobal_B73648 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x77B120
namespace gamemd {
void sub_77B120()
{
{
    DataGlobal_B73620 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x77B140
namespace gamemd {
void sub_77B140()
{
{
    DataGlobal_B735F8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x77B160
namespace gamemd {
long long sub_77B160()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B735F8 - DataGlobal_B73620);
    result = Math::RoundToInt(v0 * DataGlobal_B73618 * 0.5);
    DataGlobal_B73670 = result;
    return result;
}
}
} // namespace gamemd

// 0x77B1A0
namespace gamemd {
void sub_77B1A0()
{
{
    DataGlobal_B73628 = Math::ArcTan((double)DataGlobal_B73670 * 0.00390625);
}
}
} // namespace gamemd

// 0x77B1D0
namespace gamemd {
void sub_77B1D0()
{
{
    DataGlobal_B73640 = Math::ArcTan((double)(2 * DataGlobal_B73670) / DataGlobal_B73618);
}
}
} // namespace gamemd

// 0x77B200
namespace gamemd {
long long sub_77B200()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B73670) + 0.5);
    DataGlobal_B73664 = result;
    return result;
}
}
} // namespace gamemd

// 0x77B230
namespace gamemd {
int sub_77B230()
{
{
    DataGlobal_B73610 = 0;
    DataGlobal_B73612 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x77B240
namespace gamemd {
int sub_77B240()
{
{
    DataGlobal_B73630 = 0;
    DataGlobal_B73634 = 0;
    DataGlobal_B73638 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x77B260
namespace gamemd {
int sub_77B260()
{
{
    DataGlobal_B73660 = 0;
    DataGlobal_B73658 = 128;
    DataGlobal_B7365C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x77B690
namespace gamemd {
void sub_77B690()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B75F60 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x77B6C0
namespace gamemd {
void sub_77B6C0()
{
{
    DataGlobal_B77CD8 = DataGlobal_B75F60 / 60.0;
}
}
} // namespace gamemd

// 0x77B6E0
namespace gamemd {
void sub_77B6E0()
{
{
    DataGlobal_B778E8 = 1.0 / DataGlobal_B77CD8;
}
}
} // namespace gamemd

// 0x77B700
namespace gamemd {
void sub_77B700()
{
{
    DataGlobal_B778C0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x77B720
namespace gamemd {
void sub_77B720()
{
{
    DataGlobal_B761A0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x77B740
namespace gamemd {
void sub_77B740()
{
{
    DataGlobal_B73AC0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x77B760
namespace gamemd {
long long sub_77B760()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B73AC0 - DataGlobal_B761A0);
    result = Math::RoundToInt(v0 * DataGlobal_B75F60 * 0.5);
    DataGlobal_B77D74 = result;
    return result;
}
}
} // namespace gamemd

// 0x77B7A0
namespace gamemd {
void sub_77B7A0()
{
{
    DataGlobal_B76460 = Math::ArcTan((double)DataGlobal_B77D74 * 0.00390625);
}
}
} // namespace gamemd

// 0x77B7D0
namespace gamemd {
void sub_77B7D0()
{
{
    DataGlobal_B76AF8 = Math::ArcTan((double)(2 * DataGlobal_B77D74) / DataGlobal_B75F60);
}
}
} // namespace gamemd

// 0x77B800
namespace gamemd {
long long sub_77B800()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B77D74) + 0.5);
    DataGlobal_B77CD0 = result;
    return result;
}
}
} // namespace gamemd

// 0x77B830
namespace gamemd {
int sub_77B830()
{
{
    DataGlobal_B75F50 = 0;
    DataGlobal_B75F52 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x77B840
namespace gamemd {
int sub_77B840()
{
{
    DataGlobal_B76960 = 0;
    DataGlobal_B76964 = 0;
    DataGlobal_B76968 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x77B860
namespace gamemd {
int sub_77B860()
{
{
    DataGlobal_B77A00 = 0;
    DataGlobal_B779F8 = 128;
    DataGlobal_B779FC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x77B880
namespace gamemd {
int sub_77B880()
{
{
    DataGlobal_B73DF8 = 0;
    DataGlobal_B73DFC = 0;
    DataGlobal_B73E00 = 0;
    DataGlobal_B73E04 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x77B8A0
namespace gamemd {
int sub_77B8A0()
{
{
    OleInitialize(0);
    return atexit(OleUninitialize);
}
}
} // namespace gamemd

// 0x77B8C0
namespace gamemd {
int OleUninitialize()
{
    void __stdcall OleUninitialize()
{
    __imp_OleUninitialize();
}
}
} // namespace gamemd

// 0x77B8D0
namespace gamemd {
int sub_77B8D0()
{
{
    unknown_libname_73(&DataGlobal_B73AE0);
    return atexit(unknown_libname_39);
}
}
} // namespace gamemd

// 0x77B8F0
namespace gamemd {
int unknown_libname_39()
{
    void __cdecl unknown_libname_39()
{
    DeleteAndZero(&DataGlobal_B73AE0);
}
}
} // namespace gamemd

// 0x77B900
namespace gamemd {
int sub_77B900()
{
{
    g_WOL_UserList = 0;
    DataGlobal_B778DC = 0;
    DataGlobal_B778E0 = 0;
    return atexit(sub_77B920);
}
}
} // namespace gamemd

// 0x77B920
namespace gamemd {
void sub_77B920()
{
{
    g_WOL_UserList = 0;
    __3_YAXPAX_Z(DataGlobal_B778E0);
}
}
} // namespace gamemd

// 0x77B940
namespace gamemd {
int sub_77B940()
{
{
    g_WOL_AuthPool = 0;
    DataGlobal_B73E14 = 0;
    DataGlobal_B73E18 = 0;
    return atexit(sub_77B960);
}
}
} // namespace gamemd

// 0x77B960
namespace gamemd {
void sub_77B960()
{
{
    g_WOL_AuthPool = 0;
    __3_YAXPAX_Z(DataGlobal_B73E18);
}
}
} // namespace gamemd

// 0x77B980
namespace gamemd {
int sub_77B980()
{
{
    g_WOL_ChatState = 0;
    DataGlobal_B76AE4 = 0;
    g_WOL_ConnectionHandler = 0;
    return atexit(sub_77B9A0);
}
}
} // namespace gamemd

// 0x77B9A0
namespace gamemd {
void sub_77B9A0()
{
{
    g_WOL_ChatState = 0;
    __3_YAXPAX_Z(g_WOL_ConnectionHandler);
}
}
} // namespace gamemd

// 0x77B9C0
namespace gamemd {
int sub_77B9C0()
{
{
    g_WOL_State = 0;
    g_WOL_StateFlags = 0;
    g_WOL_ConnectionFlags = 0;
    return atexit(sub_77B9E0);
}
}
} // namespace gamemd

// 0x77B9E0
namespace gamemd {
void sub_77B9E0()
{
{
    g_WOL_State = 0;
    __3_YAXPAX_Z(g_WOL_ConnectionFlags);
}
}
} // namespace gamemd

// 0x77BA00
namespace gamemd {
int sub_77BA00()
{
{
    g_WOL_RequestState = 0;
    g_WOL_RequestToken = 0;
    g_WOL_RequestFlags = 0;
    return atexit(sub_77BA20);
}
}
} // namespace gamemd

// 0x77BA20
namespace gamemd {
void sub_77BA20()
{
{
    g_WOL_RequestState = 0;
    __3_YAXPAX_Z(g_WOL_RequestFlags);
}
}
} // namespace gamemd

// 0x77BA40
namespace gamemd {
int sub_77BA40()
{
{
    unsigned int v0;
    int v1;
    v0 = 128;
    DataGlobal_B768E0 = -1717986918;
    DataGlobal_B768E4 = 1070176665;
    DataGlobal_B768E8 = 0.8;
    DataGlobal_B768F0 = 128;
    v1 = 0;
    do
  {
    ++v1;
    v0 >>= 1;
  }
    while ( v0 );
    DataGlobal_B768D0 = 0;
    DataGlobal_B768CC = v1 - 1;
    DataGlobal_B768C4 = 0;
    DataGlobal_B768D4 = 0;
    DataGlobal_B768C8 = 1 << (v1 - 1);
    g_WOL_ListParser = __2_YAPAXI_Z(4 * (1 << (v1 - 1)));
    memset(g_WOL_ListParser, 0, 4 * DataGlobal_B768C8);
    DataGlobal_B768D8 = (int (__thiscall *)(int))String::ComputeHash;
    return atexit(sub_77BAE0);
}
}
} // namespace gamemd

// 0x77BC10
namespace gamemd {
int sub_77BC10()
{
{
    unsigned int v0;
    int v1;
    v0 = 128;
    DataGlobal_B73B18 = -1717986918;
    DataGlobal_B73B1C = 1070176665;
    DataGlobal_B73B20 = 0.8;
    DataGlobal_B73B28 = 128;
    v1 = 0;
    do
  {
    ++v1;
    v0 >>= 1;
  }
    while ( v0 );
    DataGlobal_B73B08 = 0;
    DataGlobal_B73B04 = v1 - 1;
    DataGlobal_B73AFC = 0;
    DataGlobal_B73B0C = 0;
    DataGlobal_B73B00 = 1 << (v1 - 1);
    DataGlobal_B73AF8 = __2_YAPAXI_Z(4 * (1 << (v1 - 1)));
    memset(DataGlobal_B73AF8, 0, 4 * DataGlobal_B73B00);
    DataGlobal_B73B10 = (int (__thiscall *)(int))String::ComputeHash;
    return atexit(sub_77BCB0);
}
}
} // namespace gamemd

// 0x77BDE0
namespace gamemd {
int sub_77BDE0()
{
{
    unsigned int v0;
    int v1;
    v0 = 128;
    DataGlobal_B77DA0 = -1717986918;
    DataGlobal_B77DA4 = 1070176665;
    DataGlobal_B77DA8 = 0.8;
    DataGlobal_B77DB0 = 128;
    v1 = 0;
    do
  {
    ++v1;
    v0 >>= 1;
  }
    while ( v0 );
    DataGlobal_B77D90 = 0;
    DataGlobal_B77D8C = v1 - 1;
    DataGlobal_B77D84 = 0;
    DataGlobal_B77D94 = 0;
    DataGlobal_B77D88 = 1 << (v1 - 1);
    DataGlobal_B77D80 = __2_YAPAXI_Z(4 * (1 << (v1 - 1)));
    memset(DataGlobal_B77D80, 0, 4 * DataGlobal_B77D88);
    DataGlobal_B77D98 = (int (__thiscall *)(int))String::ComputeHash;
    return atexit(sub_77BE80);
}
}
} // namespace gamemd

// 0x77BFB0
namespace gamemd {
int sub_77BFB0()
{
{
    unsigned int v0;
    int v1;
    v0 = 128;
    DataGlobal_B76660 = 0.2;
    DataGlobal_B76668 = 0.8;
    DataGlobal_B76670 = 128;
    v1 = 0;
    do
  {
    ++v1;
    v0 >>= 1;
  }
    while ( v0 );
    DataGlobal_B76650 = 0;
    DataGlobal_B7664C = v1 - 1;
    DataGlobal_B76644 = 0;
    DataGlobal_B76654 = 0;
    DataGlobal_B76648 = 1 << (v1 - 1);
    DataGlobal_B76640 = __2_YAPAXI_Z(4 * (1 << (v1 - 1)));
    memset(DataGlobal_B76640, 0, 4 * DataGlobal_B76648);
    DataGlobal_B76658 = (int (__thiscall *)(int))String::ComputeHash;
    return atexit(sub_77C050);
}
}
} // namespace gamemd

// 0x77C180
namespace gamemd {
int sub_77C180()
{
{
    unsigned int v0;
    int v1;
    v0 = 128;
    DataGlobal_B766A0 = 0.2;
    DataGlobal_B766A8 = 0.8;
    DataGlobal_B766B0 = 128;
    v1 = 0;
    do
  {
    ++v1;
    v0 >>= 1;
  }
    while ( v0 );
    DataGlobal_B76690 = 0;
    DataGlobal_B7668C = v1 - 1;
    g_WOL_MessageConfig = 0;
    DataGlobal_B76694 = 0;
    g_WOL_MsgPool = 1 << (v1 - 1);
    g_WOL_MessageQueue = __2_YAPAXI_Z(4 * (1 << (v1 - 1)));
    memset(g_WOL_MessageQueue, 0, 4 * g_WOL_MsgPool);
    DataGlobal_B76698 = (int (__thiscall *)(int))String::ComputeHash;
    return atexit(sub_77C220);
}
}
} // namespace gamemd

// 0x77C350
namespace gamemd {
int sub_77C350()
{
{
    g_WOL_ChatPool = 0;
    DataGlobal_B777A4 = 0;
    DataGlobal_B777A8 = 0;
    return atexit(sub_77C370);
}
}
} // namespace gamemd

// 0x77C370
namespace gamemd {
void sub_77C370()
{
{
    int i;
    for ( i = 0; i < g_WOL_ChatPool; ++i )
    DeleteAndZero((void **)(DataGlobal_B777A8) + i);
    g_WOL_ChatPool = 0;
    __3_YAXPAX_Z(DataGlobal_B777A8);
}
}
} // namespace gamemd

// 0x77C3B0
namespace gamemd {
int sub_77C3B0()
{
{
    unsigned int v0;
    int v1;
    v0 = 128;
    DataGlobal_B76550 = 0.2;
    DataGlobal_B76558 = 0.8;
    DataGlobal_B76560 = 128;
    v1 = 0;
    do
  {
    ++v1;
    v0 >>= 1;
  }
    while ( v0 );
    DataGlobal_B76540 = 0;
    DataGlobal_B7653C = v1 - 1;
    DataGlobal_B76534 = 0;
    DataGlobal_B76544 = 0;
    DataGlobal_B76538 = 1 << (v1 - 1);
    g_WOL_ConnectionPool = __2_YAPAXI_Z(4 * (1 << (v1 - 1)));
    memset(g_WOL_ConnectionPool, 0, 4 * DataGlobal_B76538);
    DataGlobal_B76548 = (int (__thiscall *)(int))String::ComputeHash;
    return atexit(sub_77C450);
}
}
} // namespace gamemd

// 0x77C580
namespace gamemd {
int sub_77C580()
{
{
    g_WOL_LoginToken = 0;
    DataGlobal_B765FC = 0;
    DataGlobal_B76600 = 0;
    return atexit(sub_77C5A0);
}
}
} // namespace gamemd

// 0x77C5A0
namespace gamemd {
void sub_77C5A0()
{
{
    int i;
    for ( i = 0; i < g_WOL_LoginToken; ++i )
    DeleteAndZero((void **)(DataGlobal_B76600) + i);
    g_WOL_LoginToken = 0;
    __3_YAXPAX_Z(DataGlobal_B76600);
}
}
} // namespace gamemd

// 0x77C5E0
namespace gamemd {
int sub_77C5E0()
{
{
    DataGlobal_B73BD8 = 0;
    DataGlobal_B73BDC = 0;
    DataGlobal_B73BE0 = 0;
    return atexit(sub_77C600);
}
}
} // namespace gamemd

// 0x77C600
namespace gamemd {
void sub_77C600()
{
{
    int i;
    for ( i = 0; i < DataGlobal_B73BD8; ++i )
    DeleteAndZero((void **)(DataGlobal_B73BE0) + i);
    DataGlobal_B73BD8 = 0;
    __3_YAXPAX_Z(DataGlobal_B73BE0);
}
}
} // namespace gamemd

// 0x77C640
namespace gamemd {
int sub_77C640()
{
{
    DataGlobal_B736F8 = 0;
    DataGlobal_B736FC = 0;
    DataGlobal_B73700 = 0;
    return atexit(sub_77C660);
}
}
} // namespace gamemd

// 0x77C660
namespace gamemd {
void sub_77C660()
{
{
    int i;
    for ( i = 0; i < DataGlobal_B736F8; ++i )
    DeleteAndZero((void **)(DataGlobal_B73700) + i);
    DataGlobal_B736F8 = 0;
    __3_YAXPAX_Z(DataGlobal_B73700);
}
}
} // namespace gamemd

// 0x77C6A0
namespace gamemd {
int sub_77C6A0()
{
{
    DataGlobal_B76B00 = 0;
    DataGlobal_B76B04 = 0;
    DataGlobal_B76B08 = 0;
    return atexit(sub_77C6C0);
}
}
} // namespace gamemd

// 0x77C6C0
namespace gamemd {
void sub_77C6C0()
{
{
    int i;
    for ( i = 0; i < DataGlobal_B76B00; ++i )
    DeleteAndZero((void **)(DataGlobal_B76B08) + i);
    DataGlobal_B76B00 = 0;
    __3_YAXPAX_Z(DataGlobal_B76B08);
}
}
} // namespace gamemd

// 0x77C700
namespace gamemd {
int sub_77C700()
{
{
    DataGlobal_B76510 = 0;
    DataGlobal_B76514 = 0;
    DataGlobal_B76518 = 0;
    return atexit(sub_77C720);
}
}
} // namespace gamemd

// 0x77C720
namespace gamemd {
void sub_77C720()
{
{
    int i;
    for ( i = 0; i < DataGlobal_B76510; ++i )
    DeleteAndZero((void **)(DataGlobal_B76518) + i);
    DataGlobal_B76510 = 0;
    __3_YAXPAX_Z(DataGlobal_B76518);
}
}
} // namespace gamemd

// 0x77C760
namespace gamemd {
int sub_77C760()
{
{
    DataGlobal_B73AE8 = 0;
    DataGlobal_B73AEC = 0;
    DataGlobal_B73AF0 = 0;
    return atexit(sub_77C780);
}
}
} // namespace gamemd

// 0x77C780
namespace gamemd {
void sub_77C780()
{
{
    int i;
    for ( i = 0; i < DataGlobal_B73AE8; ++i )
    DeleteAndZero((void **)DataGlobal_B73AF0 + i);
    DataGlobal_B73AE8 = 0;
    __3_YAXPAX_Z(DataGlobal_B73AF0);
}
}
} // namespace gamemd

// 0x77C7C0
namespace gamemd {
int sub_77C7C0()
{
{
    DataGlobal_B77820 = 0;
    DataGlobal_B77824 = 0;
    DataGlobal_B77828 = 0;
    return atexit(sub_77C7E0);
}
}
} // namespace gamemd

// 0x77C7E0
namespace gamemd {
void sub_77C7E0()
{
{
    int i;
    for ( i = 0; i < DataGlobal_B77820; ++i )
    DeleteAndZero((void **)(DataGlobal_B77828) + i);
    DataGlobal_B77820 = 0;
    __3_YAXPAX_Z(DataGlobal_B77828);
}
}
} // namespace gamemd

// 0x77C820
namespace gamemd {
int sub_77C820()
{
{
    DataGlobal_B73708 = 0;
    DataGlobal_B7370C = 0;
    DataGlobal_B73710 = 0;
    return atexit(sub_77C840);
}
}
} // namespace gamemd

// 0x77C840
namespace gamemd {
void sub_77C840()
{
{
    int i;
    for ( i = 0; i < DataGlobal_B73708; ++i )
    DeleteAndZero((void **)(DataGlobal_B73710) + i);
    DataGlobal_B73708 = 0;
    __3_YAXPAX_Z(DataGlobal_B73710);
}
}
} // namespace gamemd

// 0x77C880
namespace gamemd {
int sub_77C880()
{
{
    DataGlobal_B76188 = 0;
    DataGlobal_B7618C = 0;
    DataGlobal_B76190 = 0;
    return atexit(sub_77C8A0);
}
}
} // namespace gamemd

// 0x77C8A0
namespace gamemd {
void sub_77C8A0()
{
{
    int i;
    for ( i = 0; i < DataGlobal_B76188; ++i )
    DeleteAndZero((void **)(DataGlobal_B76190) + i);
    DataGlobal_B76188 = 0;
    __3_YAXPAX_Z(DataGlobal_B76190);
}
}
} // namespace gamemd

// 0x77C8E0
namespace gamemd {
int sub_77C8E0()
{
{
    g_WindowManager = 0;
    DataGlobal_B73AAC = 0;
    g_WOL_LoginQueue = 0;
    return atexit(sub_77C900);
}
}
} // namespace gamemd

// 0x77C900
namespace gamemd {
void sub_77C900()
{
{
    int i;
    for ( i = 0; i < g_WindowManager; ++i )
    DeleteAndZero((void **)(g_WOL_LoginQueue) + i);
    g_WindowManager = 0;
    __3_YAXPAX_Z(g_WOL_LoginQueue);
}
}
} // namespace gamemd

// 0x77C940
namespace gamemd {
int sub_77C940()
{
{
    g_WOL_RequestManager = 0;
    DataGlobal_B76984 = 0;
    g_WOL_SessionID = 0;
    return atexit(sub_77C960);
}
}
} // namespace gamemd

// 0x77C960
namespace gamemd {
void sub_77C960()
{
{
    int i;
    for ( i = 0; i < g_WOL_RequestManager; ++i )
    DeleteAndZero((void **)(g_WOL_SessionID) + i);
    g_WOL_RequestManager = 0;
    __3_YAXPAX_Z(g_WOL_SessionID);
}
}
} // namespace gamemd

// 0x77C9A0
namespace gamemd {
int sub_77C9A0()
{
{
    g_WOL_BuddyList = 0;
    DataGlobal_B779B4 = 0;
    g_WOL_ChannelMgr = 0;
    return atexit(sub_77C9C0);
}
}
} // namespace gamemd

// 0x77C9C0
namespace gamemd {
void sub_77C9C0()
{
{
    int i;
    for ( i = 0; i < g_WOL_BuddyList; ++i )
    DeleteAndZero((void **)(g_WOL_ChannelMgr) + i);
    g_WOL_BuddyList = 0;
    __3_YAXPAX_Z(g_WOL_ChannelMgr);
}
}
} // namespace gamemd

// 0x77CA00
namespace gamemd {
int sub_77CA00()
{
{
    unknown_libname_73(&g_WOL_AuthObject);
    return atexit(unknown_libname_40);
}
}
} // namespace gamemd

// 0x77CA20
namespace gamemd {
int unknown_libname_40()
{
    void __cdecl unknown_libname_40()
{
    DeleteAndZero((void **)&g_WOL_AuthObject);
}
}
} // namespace gamemd

// 0x77CA30
namespace gamemd {
int sub_77CA30()
{
{
    unknown_libname_73(&g_WOL_LoginObject);
    return atexit(unknown_libname_41);
}
}
} // namespace gamemd

// 0x77CA50
namespace gamemd {
int unknown_libname_41()
{
    void __cdecl unknown_libname_41()
{
    DeleteAndZero((void **)&g_WOL_LoginObject);
}
}
} // namespace gamemd

// 0x77CA60
namespace gamemd {
int sub_77CA60()
{
{
    unsigned int v0;
    int v1;
    v0 = 128;
    DataGlobal_B769B0 = 0.2;
    DataGlobal_B769B8 = 0.8;
    DataGlobal_B769C0 = 128;
    v1 = 0;
    do
  {
    ++v1;
    v0 >>= 1;
  }
    while ( v0 );
    DataGlobal_B769A0 = 0;
    DataGlobal_B7699C = v1 - 1;
    DataGlobal_B76994 = 0;
    DataGlobal_B769A4 = 0;
    DataGlobal_B76998 = 1 << (v1 - 1);
    g_WOL_AccountInfo = __2_YAPAXI_Z(4 * (1 << (v1 - 1)));
    memset(g_WOL_AccountInfo, 0, 4 * DataGlobal_B76998);
    DataGlobal_B769A8 = (int (__thiscall *)(int))String::ComputeHash;
    return atexit(sub_77CB00);
}
}
} // namespace gamemd

// 0x77CC30
namespace gamemd {
int sub_77CC30()
{
{
    unsigned int v0;
    int v1;
    v0 = 128;
    DataGlobal_B76628 = 0.2;
    DataGlobal_B76630 = 0.8;
    DataGlobal_B76638 = 128;
    v1 = 0;
    do
  {
    ++v1;
    v0 >>= 1;
  }
    while ( v0 );
    DataGlobal_B76618 = 0;
    DataGlobal_B76614 = v1 - 1;
    DataGlobal_B7660C = 0;
    DataGlobal_B7661C = 0;
    g_WOL_PacketQueue = 1 << (v1 - 1);
    g_WOL_EventQueue = __2_YAPAXI_Z(4 * (1 << (v1 - 1)));
    memset(g_WOL_EventQueue, 0, 4 * g_WOL_PacketQueue);
    DataGlobal_B76620 = (int (__thiscall *)(int))String::ComputeHash;
    return atexit(sub_77CCD0);
}
}
} // namespace gamemd

// 0x77CE10
namespace gamemd {
int sub_77CE10()
{
{
    int result;
    result = DataGlobal_84A1C8 - DataGlobal_84A1C4 - 4;
    DataGlobal_B765F0 = result;
    return result;
}
}
} // namespace gamemd

// 0x77CE30
namespace gamemd {
int sub_77CE30()
{
{
    int result;
    result = DataGlobal_84A1D8 - DataGlobal_84A1D4 - 4;
    DataGlobal_B73E3C = result;
    return result;
}
}
} // namespace gamemd

// 0x77CE50
namespace gamemd {
int sub_77CE50()
{
{
    g_WOL_ConnectionToken = 0;
    DataGlobal_B76AD4 = 0;
    g_WOL_ObjectState = 0;
    return atexit(sub_77CE70);
}
}
} // namespace gamemd

// 0x77CE70
namespace gamemd {
void sub_77CE70()
{
{
    int i;
    for ( i = 0; i < g_WOL_ConnectionToken; ++i )
    DeleteAndZero((void **)(g_WOL_ObjectState) + i);
    g_WOL_ConnectionToken = 0;
    __3_YAXPAX_Z(g_WOL_ObjectState);
}
}
} // namespace gamemd

// 0x77CEB0
namespace gamemd {
int sub_77CEB0()
{
{
    g_WOL_LoginPool = 0;
    DataGlobal_B76974 = 0;
    DataGlobal_B76978 = 0;
    return atexit(sub_77CED0);
}
}
} // namespace gamemd

// 0x77CED0
namespace gamemd {
void sub_77CED0()
{
{
    int i;
    for ( i = 0; i < g_WOL_LoginPool; ++i )
    DeleteAndZero((void **)(DataGlobal_B76978) + i);
    g_WOL_LoginPool = 0;
    __3_YAXPAX_Z(DataGlobal_B76978);
}
}
} // namespace gamemd

// 0x77CF10
namespace gamemd {
int sub_77CF10()
{
{
    unknown_libname_73(&DataGlobal_B76AC4);
    return atexit(unknown_libname_42);
}
}
} // namespace gamemd

// 0x77CF30
namespace gamemd {
int unknown_libname_42()
{
    void __cdecl unknown_libname_42()
{
    DeleteAndZero((void **)&DataGlobal_B76AC4);
}
}
} // namespace gamemd

// 0x77CF70
namespace gamemd {
int sub_77CF70()
{
{
    unknown_libname_73(&DataGlobal_B76E34);
    return atexit(unknown_libname_43);
}
}
} // namespace gamemd

// 0x77CF90
namespace gamemd {
int unknown_libname_43()
{
    void __cdecl unknown_libname_43()
{
    DeleteAndZero((void **)&DataGlobal_B76E34);
}
}
} // namespace gamemd

// 0x77CFA0
namespace gamemd {
int sub_77CFA0()
{
{
    unknown_libname_73(&DataGlobal_B73B30);
    return atexit(unknown_libname_44);
}
}
} // namespace gamemd

// 0x77CFC0
namespace gamemd {
int unknown_libname_44()
{
    void __cdecl unknown_libname_44()
{
    DeleteAndZero((void **)&DataGlobal_B73B30);
}
}
} // namespace gamemd

// 0x77CFD0
namespace gamemd {
int sub_77CFD0()
{
{
    unknown_libname_73(&DataGlobal_B7622C);
    return atexit(unknown_libname_45);
}
}
} // namespace gamemd

// 0x77CFF0
namespace gamemd {
int unknown_libname_45()
{
    void __cdecl unknown_libname_45()
{
    DeleteAndZero((void **)&DataGlobal_B7622C);
}
}
} // namespace gamemd

// 0x77D000
namespace gamemd {
int sub_77D000()
{
{
    unknown_libname_73(&DataGlobal_B76908);
    return atexit(unknown_libname_46);
}
}
} // namespace gamemd

// 0x77D020
namespace gamemd {
int unknown_libname_46()
{
    void __cdecl unknown_libname_46()
{
    DeleteAndZero((void **)&DataGlobal_B76908);
}
}
} // namespace gamemd

// 0x77D030
namespace gamemd {
int sub_77D030()
{
{
    unknown_libname_73(&DataGlobal_B77794);
    return atexit(unknown_libname_47);
}
}
} // namespace gamemd

// 0x77D050
namespace gamemd {
int unknown_libname_47()
{
    void __cdecl unknown_libname_47()
{
    DeleteAndZero((void **)&DataGlobal_B77794);
}
}
} // namespace gamemd

// 0x77D060
namespace gamemd {
int sub_77D060()
{
{
    unknown_libname_73(&DataGlobal_B778F4);
    return atexit(unknown_libname_48);
}
}
} // namespace gamemd

// 0x77D080
namespace gamemd {
int unknown_libname_48()
{
    void __cdecl unknown_libname_48()
{
    DeleteAndZero((void **)&DataGlobal_B778F4);
}
}
} // namespace gamemd

// 0x77D090
namespace gamemd {
int sub_77D090()
{
{
    unknown_libname_73(&DataGlobal_B778FC);
    return atexit(unknown_libname_49);
}
}
} // namespace gamemd

// 0x77D0B0
namespace gamemd {
int unknown_libname_49()
{
    void __cdecl unknown_libname_49()
{
    DeleteAndZero((void **)&DataGlobal_B778FC);
}
}
} // namespace gamemd

// 0x77D0C0
namespace gamemd {
int sub_77D0C0()
{
{
    unknown_libname_73(&DataGlobal_B765EC);
    return atexit(unknown_libname_50);
}
}
} // namespace gamemd

// 0x77D0E0
namespace gamemd {
int unknown_libname_50()
{
    void __cdecl unknown_libname_50()
{
    DeleteAndZero((void **)&DataGlobal_B765EC);
}
}
} // namespace gamemd

// 0x77D0F0
namespace gamemd {
int sub_77D0F0()
{
{
    unknown_libname_73(&DataGlobal_B76900);
    return atexit(unknown_libname_51);
}
}
} // namespace gamemd

// 0x77D110
namespace gamemd {
int unknown_libname_51()
{
    void __cdecl unknown_libname_51()
{
    DeleteAndZero(&DataGlobal_B76900);
}
}
} // namespace gamemd

// 0x77D120
namespace gamemd {
int sub_77D120()
{
{
    ComPtr::Constructor(&DataGlobal_B75E48);
    DataGlobal_B75E48 = (int)&vt_rc_ptr_PlayerProfile;
    return atexit(sub_77D140);
}
}
} // namespace gamemd

// 0x77D140
namespace gamemd {
void sub_77D140()
{
{
    DataGlobal_B75E48 = (int)&vt_rc_ptr_PlayerProfile;
    ComPtr::Release(&DataGlobal_B75E48);
}
}
} // namespace gamemd

// 0x77D160
namespace gamemd {
int sub_77D160()
{
{
    DataGlobal_B76478 = Timer::GetTicks();
    DataGlobal_B76480 = 0;
    return atexit(nullsub_263);
}
}
} // namespace gamemd

// 0x77D190
namespace gamemd {
void nullsub_263()
{
  ;
}
} // namespace gamemd

// 0x77D1A0
namespace gamemd {
int sub_77D1A0()
{
{
    unknown_libname_74(&DataGlobal_B76230);
    return atexit(unknown_libname_53);
}
}
} // namespace gamemd

// 0x77D1C0
namespace gamemd {
int unknown_libname_53()
{
    void __cdecl unknown_libname_53()
{
    DeleteAndZero::Alt(&DataGlobal_B76230);
}
}
} // namespace gamemd

// 0x77D240
namespace gamemd {
int E4Recv_77D240::sub_77D240()
{
{
    signed int v1;
    char *v2;
    signed int v3;
    int i;
    char *v6;
    v1 = g_WOL_State;
    v2 = 0;
    v3 = 0;
    if ( (int)g_WOL_State <= 0 )
    return -1;
    for ( i = 0; ; i += 108 )
  {
    if ( i >= 0 && v3 < v1 )
    v2 = (char *)(g_WOL_ConnectionFlags) + i;
    v6 = String::GetOrEmpty_Alt(this);
    if ( !_strcmpi(v6, v2 + 36) )
    break;
    v1 = g_WOL_State;
    if ( ++v3 >= (int)g_WOL_State )
    return -1;
  }
    return v3;
}
}
} // namespace gamemd

// 0x77D350
namespace gamemd {
BOOL sub_77D350(ObjectClass * String1)
{
{
    wchar_t *StringCSF;
    size_t v3;
    const wchar_t *v5;
    wchar_t Buffer[256];
    StringCSF = GetStringCSF(aTxtBuddyFilter, 0, (CampaignScore *)g_Str_File_wonline_cpp, 873);
    swprintf(Buffer, (const size_t)StringCSF, v5, *(CampaignScore **)Buffer);
    v3 = wcslen(Buffer);
    return _wcsnicmp(String1, Buffer, v3) == 0;
}
}
} // namespace gamemd

// 0x77D3A0
namespace gamemd {
BOOL sub_77D3A0(ObjectClass * String1)
{
{
    wchar_t *StringCSF;
    size_t v3;
    const wchar_t *v5;
    wchar_t Buffer[256];
    StringCSF = GetStringCSF(aTxtClanFilter, 0, (CampaignScore *)g_Str_File_wonline_cpp, 879);
    swprintf(Buffer, (const size_t)StringCSF, v5, *(CampaignScore **)Buffer);
    v3 = wcslen(Buffer);
    return _wcsnicmp(String1, Buffer, v3) == 0;
}
}
} // namespace gamemd

// 0x77D720
namespace gamemd {
unsigned int * sub_77D720(unsigned int * a1, int a2)
{
{
    u_long v3;
    u_long v4;
    int v5;
    int v6;
    int v8;
    char v9[3];
    short v10;
    char v11;
    int v12[3];
    v3 = *(int *)(a2 + 24);
    v8 = 0;
    v11 = 0;
    v4 = ntohl(v3);
    v9[2] = BYTE1(v4);
    v10 = (unsigned char)v4;
    v9[0] = HIBYTE(v4);
    v9[1] = BYTE2(v4);
    NetworkAddress::Assign(v12, &v8, (int)v9, 0);
    v5 = v12[1];
    *a1 = v12[0];
    v6 = v12[2];
    *((int*)(a1) + 1) = v5;
    *((int*)(a1) + 2) = v6;
    return a1;
}
}
} // namespace gamemd

// 0x77D8C0
namespace gamemd {
int unknown_libname_54()
{
    HWND unknown_libname_54()
{
    return WebBrowser::ShowDialog(g_INI_Key_Battleclans);
}
}
} // namespace gamemd

// 0x77D8D0
namespace gamemd {
int unknown_libname_55()
{
    HWND unknown_libname_55()
{
    return WebBrowser::ShowDialog(g_INI_Key_Battleclans);
}
}
} // namespace gamemd

// 0x77D8E0
namespace gamemd {
int unknown_libname_56()
{
    HWND unknown_libname_56()
{
    return WebBrowser::ShowDialog(g_INI_Key_Ladder);
}
}
} // namespace gamemd

// 0x77D8F0
namespace gamemd {
int unknown_libname_57()
{
    HWND unknown_libname_57()
{
    return WebBrowser::ShowDialog(aNews);
}
}
} // namespace gamemd

// 0x77D900
namespace gamemd {
int unknown_libname_58()
{
    HWND unknown_libname_58()
{
    return WebBrowser::ShowDialog(g_INI_Key_Manage);
}
}
} // namespace gamemd

// 0x77D9F0
namespace gamemd {
int sub_77D9F0()
{
{
    unknown_libname_73(&g_WebBrowser);
    return atexit(unknown_libname_59);
}
}
} // namespace gamemd

// 0x77DA10
namespace gamemd {
int unknown_libname_59()
{
    void __cdecl unknown_libname_59()
{
    DeleteAndZero((void **)&g_WebBrowser);
}
}
} // namespace gamemd

// 0x77DA20
namespace gamemd {
int sub_77DA20()
{
{
    unknown_libname_73(&g_WebBrowserConfig);
    return atexit(unknown_libname_60);
}
}
} // namespace gamemd

// 0x77DA40
namespace gamemd {
int unknown_libname_60()
{
    void __cdecl unknown_libname_60()
{
    DeleteAndZero((void **)&g_WebBrowserConfig);
}
}
} // namespace gamemd

// 0x77DED0
namespace gamemd {
int sub_77DED0()
{
{
    int result;
    DataGlobal_B76234 = INIClass::ReadInt_Overwrite( (int)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, (unsigned char *)DataGlobal_84A534, 1);
    DataGlobal_B779F0 = INIClass::ReadInt_Overwrite( (int)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, (unsigned char *)DataGlobal_84A520, 1);
    DataGlobal_B779BC = INIClass::ReadInt_Overwrite( (int)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, (unsigned char *)DataGlobal_84A514, 1);
    DataGlobal_B7690C = INIClass::ReadInt_Overwrite( (int)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, (unsigned char *)DataGlobal_84A508, 1);
    DataGlobal_B77784 = INIClass::ReadInt_Overwrite( (int)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, (unsigned char *)DataGlobal_84A500, 1);
    DataGlobal_B779DC = INIClass::ReadInt_Overwrite( (int)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, (unsigned char *)DataGlobal_84A4F0, 1);
    DataGlobal_B779C0 = INIClass::ReadInt_Overwrite( (int)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, (unsigned char *)DataGlobal_84A4E0, 1);
    DataGlobal_B76AF0 = INIClass::ReadBool_Overwrite( (int)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, (unsigned char *)DataGlobal_84A4D0, 0);
    DataGlobal_B73AD0 = INIClass::ReadBool_Overwrite( (int)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, (unsigned char *)DataGlobal_84A4C4, 0);
    result = INIClass::ReadInt_Overwrite( (int)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_MultiPlayer, (unsigned char *)DataGlobal_831DA4, 0);
    g_MenuStateFlags = result;
    return result;
}
}
} // namespace gamemd

// 0x77DFD0
namespace gamemd {
void sub_77DFD0()
{
{
    int v0[9];
    RawFileClass::Construct(v0, (int)g_Str_File_RA2MD_INI);
    INIClass::SetInt((char *)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, DataGlobal_84A534, DataGlobal_B76234, 0);
    INIClass::SetInt((char *)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, DataGlobal_84A520, DataGlobal_B779F0, 0);
    INIClass::SetInt((char *)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, DataGlobal_84A514, DataGlobal_B779BC, 0);
    INIClass::SetInt((char *)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, DataGlobal_84A508, DataGlobal_B7690C, 0);
    INIClass::SetInt((char *)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, DataGlobal_84A500, DataGlobal_B77784, 0);
    INIClass::SetInt((char *)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, DataGlobal_84A4F0, DataGlobal_B779DC, 0);
    INIClass::SetInt((char *)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, DataGlobal_84A4E0, DataGlobal_B779C0, 0);
    INIClass::SetBool((char *)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, DataGlobal_84A4D0, DataGlobal_B76AF0);
    INIClass::SetBool((char *)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_WOnline, DataGlobal_84A4C4, DataGlobal_B73AD0);
    INIClass::WriteDigest(&CCINIClass_INI_RA2MD, (int)v0, 0);
    Config::SaveObserverMode();
    RawFileClass::Dtor(v0);
}
}
} // namespace gamemd

// 0x77E780
namespace gamemd {
int sub_77E780()
{
  return CCINIClass_RulesHash ^ CCINIClass_AIHash ^ CCINIClass_ArtHash;
}
} // namespace gamemd

// 0x77E820
namespace gamemd {
void ** ParseStringCommaInts(char * String, int * a2, int * a3, int * a4, int * a5, int * a6, void ** a7)
{
{
    char *v8;
    int v9;
    char *v10;
    int v11;
    char *v12;
    int v13;
    char *v14;
    int v15;
    char *v16;
    int v17;
    CCINIClass *v18;
    v8 = strtok(String, (ObjectClass *)&DataGlobal_817F40.nextObject);
    if ( v8 )
    v9 = atol(v8);
    else
    v9 = 0;
    *a2 = v9;
    v10 = strtok(0, (ObjectClass *)&DataGlobal_817F40.nextObject);
    if ( v10 )
    v11 = atol(v10);
    else
    v11 = 0;
    *a3 = v11;
    v12 = strtok(0, (ObjectClass *)&DataGlobal_817F40.nextObject);
    if ( v12 )
    v13 = atol(v12);
    else
    v13 = 0;
    *a4 = v13;
    v14 = strtok(0, (ObjectClass *)&DataGlobal_817F40.nextObject);
    if ( v14 )
    v15 = atol(v14);
    else
    v15 = 0;
    *a5 = v15;
    v16 = strtok(0, (ObjectClass *)&DataGlobal_817F40.nextObject);
    if ( v16 )
    v17 = atol(v16);
    else
    v17 = 0;
    *a6 = v17;
    v18 = (CCINIClass *)strtok(0, (ObjectClass *)&DataGlobal_817F40.nextObject);
    return String::Assign_Alt(a7, v18);
}
}
} // namespace gamemd
