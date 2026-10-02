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
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/DialogClass_e4.hpp"
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ScoreScreen_e4.hpp"
#include "e4/classes/E4Recv_765000_e4.hpp"
#include "e4/classes/E4Recv_764B90_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/E4Recv_752CB0_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"

// 0x770E70
namespace gamemd {
void ObjectClass::sub_770E70(ObjectClass * aP1, ObjectClass * aP2, ObjectClass aP3)
{

  unsigned int v5;
  char *v6; // [esp+10h] [ebp-4h] BYREF

  ((String *)((String *)&v6))->Assign((const char *)(off_83E188)); /*0x770e80*/
  v5 = (unsigned int)(aP3); /*0x770e85*/
  INIClass::ReadTokenizedPair((INIClass *)this, aP1, aP2, aP3, 0, &v6); /*0x770e9d*/
  DeleteAndZero((ObjectClass *)&v6); /*0x770ea6*/
  ((String *)((String *)&aP3))->Assign((const char *)(g_INI_Key_Lose)); /*0x770eb4*/
  INIClass::ReadTokenizedPair((INIClass *)this, aP1, aP2, v5, 1, (char **)&aP3); /*0x770ec5*/
  DeleteAndZero((ObjectClass *)&aP3); /*0x770ece*/
  ((String *)((String *)&aP3))->Assign((const char *)(aDraw)); /*0x770edc*/
  INIClass::ReadTokenizedPair((INIClass *)this, aP1, aP2, v5, 2, (char **)&aP3); /*0x770eed*/
  DeleteAndZero((ObjectClass *)&aP3); /*0x770ef6*/

}
}
// 0x771890
namespace gamemd {
void E4Recv_771890::sub_771890()
{

  *this = &WorldDominationTour::Voices::vt_Anim; /*0x771890*/
  VtableStub::sub_5CB6C0(this, unsigned int a2); /*0x771896*/

}
}
// 0x7741C0
namespace gamemd {
HKEY E4Recv_7741C0::FindRegistrySubKey(void * a1, void * a2, void * a3)
{

  DWORD v4; // ebx
  unsigned char *v5; // esi
  DWORD v6; // ebp
  LPSTR lpClass; // [esp+10h] [ebp-434h]
  DWORD cbMaxSubKeyLen; // [esp+14h] [ebp-430h] BYREF
  DWORD cbMaxClassLen; // [esp+18h] [ebp-42Ch] BYREF
  DWORD cSubKeys; // [esp+1Ch] [ebp-428h] BYREF
  HKEY phkResult; // [esp+20h] [ebp-424h] BYREF
  void *v13; // [esp+24h] [ebp-420h]
  DWORD cchClass; // [esp+28h] [ebp-41Ch] BYREF
  DWORD cbMaxValueLen; // [esp+2Ch] [ebp-418h] BYREF
  DWORD cValues; // [esp+30h] [ebp-414h] BYREF
  DWORD cbSecurityDescriptor; // [esp+34h] [ebp-410h] BYREF
  struct _FILETIME ftLastWriteTime; // [esp+38h] [ebp-40Ch] BYREF
  DWORD cbMaxValueNameLen; // [esp+40h] [ebp-404h] BYREF
  CHAR Class[1024]; // [esp+44h] [ebp-400h] BYREF

  v13 = a2; /*0x7741cc*/
  cchClass = 1024; /*0x774205*/
  if ( RegQueryInfoKeyA( /*0x77420d*/
         hKey,
         Class,
         &cchClass,
         0,
         &cSubKeys,
         &cbMaxSubKeyLen,
         &cbMaxClassLen,
         &cValues,
         &cbMaxValueNameLen,
         &cbMaxValueLen,
         &cbSecurityDescriptor,
         &ftLastWriteTime) )
  {
    return 0; /*0x7742cf*/
  }
  v4 = cbMaxSubKeyLen + 16; /*0x77421f*/
  v5 = (unsigned char *)(__2_YAPAXI_Z(cbMaxSubKeyLen + 16)); /*0x77422c*/
  lpClass = (LPSTR)__2_YAPAXI_Z(cbMaxClassLen + 1); /*0x774235*/
  v6 = 0; /*0x774240*/
  if ( !cSubKeys ) /*0x774244*/
  {
LABEL_6:
    if ( a3 ) /*0x7742a7*/
      RegCloseKey(hKey); /*0x7742aa*/
    __3_YAXPAX_Z(v5); /*0x7742b1*/
    __3_YAXPAX_Z(lpClass); /*0x7742bb*/
    return 0; /*0x7742bb*/
  }
  while ( 1 ) /*0x77425e*/
  {
    *v5 = 0; /*0x77425e*/
    cbMaxSubKeyLen = v4; /*0x774262*/
    RegEnumKeyExA(hKey, v6, v5, &cbMaxSubKeyLen, 0, lpClass, &cbMaxClassLen, &ftLastWriteTime); /*0x774266*/
    if ( !_strcmpi((char *)v13,(const char *)(v5)) && !RegOpenKeyExA(hKey, v5, 0, 0x20019u, &phkResult) ) /*0x77428b*/
      break; /*0x77428b*/
    if (++v6 >= cSubKeys, unsigned int a3) /*0x77429c*/
      goto LABEL_6; /*0x77429c*/
  }
  if ( a3 ) /*0x7742db*/
    RegCloseKey(hKey); /*0x7742de*/
  __3_YAXPAX_Z(v5); /*0x7742e5*/
  __3_YAXPAX_Z(lpClass); /*0x7742ef*/
  return (int)phkResult; /*0x7742c3*/

}
}
// 0x775690
namespace gamemd {
void ScreenDialogToClient(HWND hWnd, LPRECT lpRect)
{
  int result; // eax
  int v4; // edi
  LONG v5; // ecx
  LONG top; // eax
  LONG v7; // edx
  LONG v8; // edx
  LONG v9; // ecx
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  result = GetWindowRect(hWnd, lpRect); /*0x775699*/
  v4 = result; /*0x77569f*/
  if ( result ) /*0x7756a3*/
  {
    GetClientRect((HWND)(g_hWnd), &Rect); /*0x7756b7*/
    ClientToScreen(g_hWnd, (LPPOINT, unsigned int a5)&Rect); /*0x7756c8*/
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
// 0x775700
namespace gamemd {
const DLGTEMPLATE * CreateDialogIndirect(ObjectClass * aP0, HWND a2, HWND hWndParent, DLGPROC lpDialogFunc, int a5, void * a1, void * a3, void * a4)
{
  int v5; // eax
  HWND *v6; // edi
  const DLGTEMPLATE *result; // eax
  HWND DialogIndirectParamA; // eax
  HWND v11; // esi

  v5 = g_DialogTrackingList; /*0x775700*/
  v6 = (HWND *)(8 * g_DialogTrackingList + 12004648); /*0x775708*/
  (&stru_B72D28)[2 * g_DialogTrackingList] = 0; /*0x775718*/
  (&dword_B72D2C)[2 * v5] = 0; /*0x775720*/
  result = (const DLGTEMPLATE *)FindResource((uint16_t)a2, (const CHAR *)5); /*0x77572b*/
  if ( result ) /*0x775732*/
  {
    ++g_DialogTrackingList; /*0x775747*/
    DialogIndirectParamA = CreateDialogIndirectParamA(hInstance, result, hWndParent, lpDialogFunc, 0); /*0x775755*/
    v11 = DialogIndirectParamA; /*0x77575b*/
    if ( DialogIndirectParamA ) /*0x77575f*/
    {
      ++dword_A8ED8C; /*0x77577c*/
      DialogQueue::PushEntry(DialogIndirectParamA); /*0x775781*/
      EnumChildWindows(v11, DialogClass::Reposition, 1); /*0x77578e*/
      DialogClass::Reposition((int)(v11), 0); /*0x775797*/
      *v6 = v11; /*0x77579c*/
      v6[1] = a2; /*0x77579e*/
      if ( a5 ) /*0x7757a7*/
        ShowWindow(v11, 1); /*0x7757ac*/
      SetForegroundWindow(v11); /*0x7757b3*/
      SetFocus(v11); /*0x7757ba*/
      hWnd = v11; /*0x7757c0*/
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
// 0x7757E0
namespace gamemd {
void Dialog_Close(HWND a1, int a2)
{
  ObjectClass * result;
  Dialog *v3; // ebx
  ObjectClass *i; // esi
  ObjectClass * v5;
  DialogQueue **v6; // esi
  int v7; // ebx
  HWND v8; // esi
  int v9; // edi

  if ( a1 || g_DialogTrackingList && (a1 = *(&g_ClipboardBuffer + 2 * g_DialogTrackingList)) != 0 ) /*0x7757fe*/
  {
    result = (gamemd::ObjectClass *)((int)((gamemd::ObjectClass *)(0)));
    if ( g_DialogTrackingList <= 0 ) /*0x77580a*/
      goto LABEL_11; /*0x77580a*/
    for ( i = &stru_B72D28; i->AbstractClass != a1; i = (ObjectClass *)((char *)i + 8) ) /*0x77580c*/
    {
      if ( ++result >= (gamemd::ObjectClass *)(g_DialogTrackingList) ) /*0x77581b*/
      {
        IDA_LOBYTE(result) = 0; /*0x77581e*/
        return result; /*0x775822*/
      }
    }
    v5 = (gamemd::ObjectClass *)((int)(result));
    if ( result == (gamemd::ObjectClass *)(-1) ) /*0x775828*/
    {
  LABEL_11:
      IDA_LOBYTE(result) = 0; /*0x77582b*/
    }
    else
    {
      Dialog::IdleProcess(v3, i); /*0x775831*/
      if ( g_DialogTrackingList - (int)(1) >= (int)(v5) ) /*0x77583e*/
      {
        v6 = (DialogQueue **)(8 * (g_DialogTrackingList - 1) + 12004648); /*0x775840*/
        v7 = g_DialogTrackingList - v5; /*0x775851*/
        do /*0x775870*/
        {
          DialogQueue::RemoveEntry(*v6); /*0x775855*/
          DestroyWindow((HWND)*v6); /*0x77585d*/
          v6 -= 2; /*0x775865*/
          --v7; /*0x775869*/
          --*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 424); /*0x77586a*/
        }
        while ( v7 ); /*0x775870*/
      }
      g_DialogTrackingList = (int)(v5);
      if ( v5 ) /*0x77587d*/
      {
        v8 = (HWND)(*(&g_ClipboardBuffer + 2 * v5));
        v9 = (&dword_B72D24)[2 * v5]; /*0x775886*/
        SetForegroundWindow(v8); /*0x77588e*/
        InvalidateRect(v8, 0, 0); /*0x775897*/
        UpdateWindow(v8); /*0x77589e*/
        hWnd = v8; /*0x7758a4*/
        dword_B72F48 = v9; /*0x7758aa*/
        SetFocus(v8); /*0x7758b1*/
        result = SendMessageA(hWnd, 0x4B0u, 0, 0); /*0x7758c5*/
      }
      else
      {
        hWnd = (gamemd::ObjectClass *)(0);
        dword_B72F48 = (unsigned int)((gamemd::ObjectClass *)(0));
        result = (gamemd::ObjectClass *)((int)SetFocus((HWND)(g_hWnd)));
      }
      IDA_LOBYTE(result) = 1; /*0x7758cb*/
      dword_B72F4C = a2; /*0x7758d3*/
    }
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x775801*/
  }
  return result; /*0x775800*/
}
}
// 0x7759E0
namespace gamemd {
void MessageDialogLoopAlt(HWND hWnd, unsigned char (*a2)(void), int a3, char a4, char a5)
{
  int v7; // eax
  TechnoTypeClass *v8; // ecx
  int v9; // eax
  HWND *v10; // ecx
  int v12; // [esp+0h] [ebp-2Ch]
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
    v7 = 0; /*0x775a2d*/
    if ( g_DialogTrackingList <= 0 ) /*0x775a31*/
      break; /*0x775a31*/
    v8 = (TechnoTypeClass *)stru_B72D28; /*0x775a37*/
    while ( (HWND)v8->ObjectTypeClass[0] != hWnd ) /*0x775a3e*/
    {
      ++v7; /*0x775a40*/
      v8 = (TechnoTypeClass *)((char *)v8 + 8); /*0x775a41*/
      if ( v7 >= g_DialogTrackingList ) /*0x775a46*/
        goto LABEL_23; /*0x775a46*/
    }
    if ( a2 && a2() == 1 ) /*0x775a56*/
      CloseDialog(hWnd, 2); /*0x775a5f*/
    if ( !byte_B77DC1 ) /*0x775a6b*/
    {
      IDA_LOBYTE(v8) = 0; /*0x775a6d*/
      ScreenSaver::Process(v8, v12); /*0x775a6f*/
    }
    ++dword_AA0430; /*0x775a7f*/
    while ( GameLoopMessagePump(&Msg, 0, 0, 0, 1u) ) /*0x775a8d*/
    {
      TranslateMessage(&Msg); /*0x775a9b*/
      DispatchMessageA(&Msg); /*0x775aa2*/
      v9 = 0; /*0x775aaa*/
      if ( g_DialogTrackingList <= 0 ) /*0x775aae*/
        break; /*0x775aae*/
      v10 = (HWND *)stru_B72D28; /*0x775ab0*/
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
// 0x775B30
namespace gamemd {
int sub_775B30()
{
  return dword_B72F4C; /*0x775b35*/
}
}
// 0x775DB0
namespace gamemd {
int CacheRenderedText(HDC a1, const char * a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // ebp
  const char * v8;
  int result; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ebp
  int v13; // ebx
  HDC v14; // edx
  char *v15; // esi
  char *v16; // edi
  char v17; // dl
  unsigned int v18; // ecx
  int v19; // ebx
  HDC v20; // edx
  char *v21; // esi
  char *v22; // edi
  char v23; // dl
  unsigned int v24; // ecx
  char *v25; // ebp
  HDC hdc; // [esp+10h] [ebp-98h]
  HDC hdca; // [esp+10h] [ebp-98h]
  char *v28; // [esp+14h] [ebp-94h]
  int v29; // [esp+14h] [ebp-94h]
  unsigned int v30[36]; // [esp+18h] [ebp-90h] BYREF

  v5 = dword_B72F38; /*0x775db6*/
  v6 = 0; /*0x775dbd*/
  if ( dword_B72F38 <= 0 ) /*0x775dc9*/
  {
  LABEL_11:
    if ( a1 ) /*0x775e77*/
    {
      result = (int)(Render_Render_7760B0(a1, a3, a4, a5));
      v10 = result; /*0x775ebb*/
      v29 = result; /*0x775ebf*/
      if ( result ) /*0x775ec3*/
      {
        strcpy((char *)v30, a2); /*0x775ef2*/
        v30[33] = a4; /*0x775f09*/
        v11 = dword_B72F38; /*0x775f10*/
        v30[34] = a5; /*0x775f15*/
        v12 = dword_B72F38; /*0x775f1c*/
        v30[32] = a3; /*0x775f1e*/
        v30[35] = v10; /*0x775f27*/
        v13 = dword_B72F3C; /*0x775f30*/
        if ( dword_B72F38 >= dword_B72F3C ) /*0x775f38*/
        {
          v13 = 2 * dword_B72F38; /*0x775f46*/
          if ( 2 * dword_B72F38 < 10 ) /*0x775f4c*/
            v13 = 10; /*0x775f4e*/
          v14 = (HDC)RA2_OPNEW(144 * v13); /*0x775f5f*/
          memset(v14, 0, 4 * ((unsigned int)(144 * v13) >> 2)); /*0x775f6a*/
          hdc = v14; /*0x775f74*/
          v15 = (char *)dword_B72F40; /*0x775f7a*/
          if ( dword_B72F40 ) /*0x775f82*/
          {
            v16 = (char *)v14; /*0x775f89*/
            v17 = -112 * dword_B72F38; /*0x775f91*/
            v18 = (unsigned int)(144 * dword_B72F38) >> 2; /*0x775f93*/
            qmemcpy(v16, dword_B72F40, 4 * v18); /*0x775f96*/
            qmemcpy(&v16[4 * v18], &v15[4 * v18], v17 & 3); /*0x775f9d*/
            v15 = (char *)dword_B72F40; /*0x775f9f*/
          }
          RA2_OPDEL(v15); /*0x775fa6*/
          dword_B72F40 = (unsigned int)(hdc); /*0x775fb2*/
          v11 = dword_B72F38; /*0x775fb7*/
          dword_B72F3C = v13; /*0x775fbc*/
        }
        if ( v11 >= v13 ) /*0x775fc4*/
        {
          v19 = 2 * v11; /*0x775fc6*/
          if ( 2 * v11 < 10 ) /*0x775fcc*/
            v19 = 10; /*0x775fce*/
          v20 = (HDC)RA2_OPNEW(144 * v19); /*0x775fdf*/
          memset(v20, 0, 4 * ((unsigned int)(144 * v19) >> 2)); /*0x775fea*/
          hdca = v20; /*0x775ff4*/
          v21 = (char *)dword_B72F40; /*0x775ffa*/
          if ( dword_B72F40 ) /*0x776002*/
          {
            v22 = (char *)v20; /*0x776009*/
            v23 = -112 * dword_B72F38; /*0x776011*/
            v24 = (unsigned int)(144 * dword_B72F38) >> 2; /*0x776013*/
            qmemcpy(v22, dword_B72F40, 4 * v24); /*0x776016*/
            qmemcpy(&v22[4 * v24], &v21[4 * v24], v23 & 3); /*0x77601d*/
            v21 = (char *)dword_B72F40; /*0x77601f*/
          }
          RA2_OPDEL(v21); /*0x776026*/
          dword_B72F40 = (unsigned int)(hdca); /*0x776032*/
          v11 = dword_B72F38; /*0x776037*/
          dword_B72F3C = v19; /*0x77603c*/
        }
        if ( v12 < v11 ) /*0x776044*/
        {
          memcpy((char *)dword_B72F40 + 144 * v12 + 144, (char *)dword_B72F40 + 144 * v12, 144 * v11 - 144 * v12); /*0x776068*/
          v11 = dword_B72F38; /*0x77606d*/
        }
        v25 = (char *)dword_B72F40 + 144 * v12; /*0x776082*/
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
    v8 = (const char *)(dword_B72F40);
    v28 = (char *)dword_B72F40; /*0x775dd5*/
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
// 0x776230
namespace gamemd {
char sub_776230(HWND hWnd, HWND a2, LPARAM * a3)
{
  LRESULT v6; // eax
  int v7; // ebx
  int v8; // edi
  LPARAM lParam[4]; // [esp+10h] [ebp-10h] BYREF

  if ( a3[23] ) /*0x77623f*/
  {
    if ( !SendMessageA(hWnd, 0x4C9u, (WPARAM)a2, a3[15]) ) /*0x77625b*/
      return 0; /*0x77626a*/
    *(&qword_B730A0 + 1) = (uint64_t)((HWND)a3[15]); /*0x77627a*/
    SendMessageA(a2, 0x110Bu, 9u, 0); /*0x776280*/
    himl = (int)((HIMAGELIST)SendMessageA(a2, 0x1112u, 0, a3[15])); /*0x776294*/
    lParam[0] = a3[15]; /*0x7762a5*/
    SendMessageA(a2, 0x1104u, 0, (LPARAM)lParam); /*0x7762a9*/
    v6 = SendMessageA(a2, 0x1106u, 0, 0); /*0x7762b5*/
    v7 = a3[24] - v6 - lParam[0]; /*0x7762c8*/
    v8 = a3[25] - lParam[1]; /*0x7762ca*/
    SetCapture(hWnd); /*0x7762cc*/
    ImageList_BeginDrag(himl, 0, v7, v8); /*0x7762dd*/
    ImageList_DragEnter(hWnd, 0, 0); /*0x7762e8*/
    SetTimer(hWnd, 1u, 1u, 0); /*0x7762f5*/
    byte_B7309C = 1; /*0x7762fb*/
    qword_B730A0 = (uint64_t)(a2); /*0x776302*/
  }
  return byte_B7309C; /*0x776261*/
}
}
// 0x776320
namespace gamemd {
int E4Recv_776320::sub_776320(LPARAM lParam)
{

  int v2; // edx
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
  qmemcpy(v7, HitDialogTest((void *)((unsigned int)lParam), v2, v7), sizeof(v7)); /*0x776359*/
  qmemcpy(wParam, v7, sizeof(wParam)); /*0x77636c*/
  if ( SendMessageA((HWND)v7[0].y, 0x4C8u, (WPARAM)wParam, (LPARAM)lParam) ) /*0x776379*/
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
  ImageList_DragShowNolock((void *)(1)); /*0x7763b3*/
  GetWindowRect((HWND)wParam[1], &Rect); /*0x7763c3*/
  ImageList_DragMove(wParam[4] - Rect.left, wParam[5] - Rect.top); /*0x7763df*/
  ImageList_EndDrag(); /*0x7763e5*/
  ReleaseCapture(); /*0x7763eb*/
  ImageList_Destroy(himl); /*0x7763f8*/
  himl = 0; /*0x776405*/
  byte_B7309C = 0; /*0x77640f*/
  qmemcpy(v7, HitDialogTest((void *)((unsigned int)lParam), (int)v7, v7), sizeof(v7)); /*0x776426*/
  qmemcpy(v10, v7, sizeof(v10)); /*0x776435*/
  if ( v4 ) /*0x77643c*/
    SendMessageA((HWND)v7[0].y, 0x4CAu, (WPARAM)v10, (LPARAM)lParam); /*0x77644e*/
  KillTimer((HWND)v10[1], 1u); /*0x77645b*/
  SendMessageA((HWND)(qword_B730A0), 0x110Bu, 8u, 0); /*0x776470*/
  return 1; /*0x776478*/

}
}
// 0x776490
namespace gamemd {
struct tagPOINT * Dialog_HitTest(unsigned int a1, int a2, struct tagPOINT * a3)
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

  v3 = IDA_HIWORD(a1); /*0x7764a7*/
  v4 = (uint16_t)a1; /*0x7764a9*/
  v9.y = IDA_HIWORD(a1); /*0x7764af*/
  v9.x = (uint16_t)a1; /*0x7764b0*/
  WindowLongA = (HWND)GetWindowLongA((HWND)(qword_B730A0), -8); /*0x7764b4*/
  v6 = ChildWindowFromPoint(WindowLongA, v9); /*0x7764bd*/
  v7 = (HWND)GetWindowLongA(v6, -8); /*0x7764ca*/
  if ( v6 == (HWND)GetWindowLongA((HWND)(qword_B730A0), -8) ) /*0x7764d7*/
    v7 = v6; /*0x7764d9*/
  Point = (struct tagPOINT)IDA___PAIR64__(v3, v4); /*0x7764df*/
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
// 0x776570
namespace gamemd {
void E4Recv_776570::sub_776570()
{

  int v1; // edi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  HWND WindowLongA; // eax
  LRESULT v6; // eax
  LPARAM v7; // edi
  UINT v8; // [esp-10h] [ebp-2Ch]
  LRESULT v9; // [esp-Ch] [ebp-28h]
  struct tagPOINT Point; // [esp+4h] [ebp-18h] BYREF
  struct tagRECT Rect; // [esp+Ch] [ebp-10h] BYREF

  if ( this == (gamemd::E4Recv_776570 *)((ObjectClass *))1 && byte_B7309C )
  {
    GetCursorPos(&Point); /*0x77658f*/
    GetWindowRect((HWND)(qword_B730A0), &Rect); /*0x7765a1*/
    v1 = Rect.top - Point.y; /*0x7765b3*/
    v2 = Point.y - Rect.bottom; /*0x7765b5*/
    if ( Rect.top - Point.y > Point.y - Rect.bottom ) /*0x7765b9*/
      v2 = Rect.top - Point.y; /*0x7765bb*/
    v3 = v2 <= 0 ? 0 : v2;
    if ( v3 > 0 ) /*0x7765c9*/
    {
      v4 = 500 - 40 * v3; /*0x7765da*/
      if ( v4 <= 5 ) /*0x7765df*/
        v4 = 5; /*0x7765e1*/
      v8 = v4; /*0x7765ea*/
      WindowLongA = (HWND)GetWindowLongA((HWND)(qword_B730A0), -8); /*0x7765f5*/
      SetTimer(WindowLongA, 1u, v8, 0); /*0x7765fc*/
      v9 = SendMessageA((HWND)(qword_B730A0), 0x110Au, 5u, 0); /*0x77661c*/
      if ( v1 <= 0 ) /*0x77661d*/
        v6 = SendMessageA((HWND)(qword_B730A0), 0x110Au, 6u, v9); /*0x77663c*/
      else
        v6 = SendMessageA((HWND)(qword_B730A0), 0x110Au, 7u, v9); /*0x77662d*/
      v7 = v6; /*0x776644*/
      ImageList_DragShowNolock(0); /*0x776648*/
      SendMessageA((HWND)(qword_B730A0), 0x110Bu, 5u, v7); /*0x776659*/
      ImageList_DragShowNolock((void *)(1)); /*0x77665d*/
    }
  }

}
}
// 0x777080
namespace gamemd {
BOOL SetDialogParent(HWND hWnd, HWND a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  struct tagRECT Rect; // [esp+10h] [ebp-20h] BYREF
  struct tagRECT v9; // [esp+20h] [ebp-10h] BYREF

  GetClientRect(a2, &Rect); /*0x777097*/
  if ( a2 == (HWND)(g_hWnd) ) /*0x77709f*/
  {
    Rect.g_DisplayWidth = (LONG)(g_DisplayWidth);
    Rect.bottom = (LONG)(DataGlobal_8A00A8);
  }
  ClientToScreen(a2, (LPPOINT)&Rect); /*0x7770c1*/
  ClientToScreen(a2, (LPPOINT)&Rect.g_DisplayWidth); /*0x7770c9*/
  Rect.g_DisplayWidth -= Rect.left; /*0x7770de*/
  Rect.bottom -= Rect.top; /*0x7770e9*/
  GetClientRect(hWnd, &v9); /*0x7770ed*/
  ClientToScreen(hWnd, (LPPOINT)&v9); /*0x7770f5*/
  ClientToScreen(hWnd, (LPPOINT)&v9.g_DisplayWidth); /*0x7770fd*/
  v4 = Rect.g_DisplayWidth - (v9.g_DisplayWidth - v9.left) + 1; /*0x777119*/
  v9.g_DisplayWidth -= v9.left; /*0x77711a*/
  v9.bottom -= v9.top; /*0x777121*/
  v5 = v4 / 2; /*0x77712d*/
  v6 = (Rect.bottom - v9.bottom + 1) / 2; /*0x777133*/
  if ( v5 < 0 ) /*0x777137*/
    v5 = 0; /*0x777139*/
  if ( v6 < 0 ) /*0x77713d*/
    v6 = 0; /*0x77713f*/
  return SetWindowPos(hWnd, 0, v5, v6, -1, -1, 5u); /*0x777152*/
}
}
// 0x7775C0
namespace gamemd {
int WindowProc_Main(int a1, int a2, HWND hWnd, UINT Msg, signed int wParam, LPARAM lParam)
{
  int v10; // eax
  HWND v11; // esi
  HWND v13; // edi
  UINT v14; // eax
  AudioStream *v15; // esi
  ObjectClass *v16; // esi
  char *v17; // eax
  char *v18; // esi
  AsyncIO *v19; // ecx
  const char *v20; // ecx
  int v21; // esi
  int v22; // eax
  WCHAR WideCharStr[2]; // [esp+8h] [ebp-4h] BYREF

  *(unsigned int *)WideCharStr = a1; /*0x7775c0*/
  if ( *(unsigned int *)&stru_887598.isAliveFlag ) /*0x7775ce*/
  {
    v10 = (*(int (**)(unsigned int, int))(**(unsigned int **)&stru_887598.isAliveFlag + 56))( /*0x7775d4*/
            *(unsigned int *)&stru_887598.isAliveFlag,
            -1);
    if ( Msg == v10 || Msg == 1141 ) /*0x7775e5*/
    {
      v11 = hWnd; /*0x7775f9*/
      if ( (*(int (**)(unsigned int, HWND, UINT, unsigned int, int *))(**(unsigned int **)&stru_887598.isAliveFlag + 64))( /*0x7775ff*/
             *(unsigned int *)&stru_887598.isAliveFlag,
             hWnd,
             Msg,
             wParam,
             lParam) )
      {
        return DefWindowProcA(v11, Msg, wParam, (LPARAM)lParam); /*0x777624*/
      }
      return 0; /*0x777604*/
    }
  }
  v13 = hWnd; /*0x777627*/
  Tactical::HandleTacticalMouseInput( /*0x777640*/
    (Tactical *)&stru_87F5F0.__pad_58[416],
    (int)hWnd,
    &Msg,
    (int)&wParam,
    (HWND)&lParam);
  if ( g_hWnd ) /*0x77764c*/
    GetMenu((HWND)(g_hWnd)); /*0x77764f*/
  if ( Render_Draw_778030(v13, Msg, wParam, (LPARAM)lParam) ) /*0x777665*/
  {
    Debug::Log(); /*0x777673*/
    return dword_B73570; /*0x777684*/
  }
  v14 = Msg; /*0x777687*/
  if ( Msg <= 0x18 ) /*0x77768e*/
  {
    if ( Msg == 24 ) /*0x777694*/
      return 0; /*0x777a61*/
    switch ( Msg ) /*0x7776ae*/
    {
      case 1u: /*0x7776ae*/
        v17 = (char *)RA2_OPNEW(0x268u); /*0x777792*/
        v18 = v17; /*0x777797*/
        if ( v17 ) /*0x77779e*/
        {
          MainWindowProc_Helper_724000(v17, (int)v13); /*0x7777a3*/
          *((unsigned int *)v18 + 153) = 7; /*0x7777a8*/
          *(unsigned int *)v18 = (void*)&CCToolTip_vftable; /*0x7777b2*/
          *(unsigned int *)&stru_88732C.__pad_1C[32] = v18; /*0x7777b8*/
        }
        else
        {
          *(unsigned int *)&stru_88732C.__pad_1C[32] = 0; /*0x7777c3*/
        }
        goto LABEL_69; /*0x7777be*/
      case 2u: /*0x7776ae*/
        if ( *(unsigned int *)&stru_88732C.__pad_1C[32] ) /*0x7777fb*/
        {
          (***(void (****)(unsigned int, int))&stru_88732C.__pad_1C[32])(*(unsigned int *)&stru_88732C.__pad_1C[32], 1); /*0x777801*/
          *(unsigned int *)&stru_88732C.__pad_1C[32] = 0; /*0x777803*/
        }
        g_hWnd = 0; /*0x77780e*/
        if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 500) ) /*0x777816*/
          *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 500) = 2; /*0x777818*/
        return 0; /*0x777828*/
      case 3u: /*0x7776ae*/
        if ( g_DDraw_Initialized != 1 || !stru_887598.lineTrailer ) /*0x7777e3*/
          goto LABEL_70; /*0x7777e3*/
        MouseClass::CalcConfiningRect((MouseClass *)stru_887598.lineTrailer); /*0x7777e9*/
        goto LABEL_69; /*0x7777ee*/
      case 0xFu: /*0x7776ae*/
        if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444) /*0x777700*/
          || *((unsigned int *)((char *)&stru_A8EB00 + 412)) != 1 && g_DDraw_Initialized != 1
          || !stru_887598.lineTrailer
          || !g_DSurface_Primary
          || !g_DSurface_Hidden
          || !DSurface_Composite )
        {
          goto LABEL_26; /*0x777700*/
        }
        if ( *((unsigned int *)((char *)&stru_A8EB00 + 376)) == 1 ) /*0x777709*/
        {
          v15 = DSurface_Composite; /*0x77770b*/
          (*(void (**)(void))(*(unsigned int *)stru_887598.lineTrailer + 28))(); /*0x777710*/
          Frame::Present((int)v15, 0, a3, (int)v13, 0, (int)a4, a5, a2); /*0x777717*/
          ((Sidebar *)((Sidebar *)&stru_87F5F0.__pad_58[416]))->FlushSidebarTooltip(1); /*0x777723*/
          ValidateRect(v13, 0); /*0x77772a*/
        }
        else if ( MainWindowProc_Helper() ) /*0x777735*/
        {
          MainWindowProc_Helper_5C09A0(a4); /*0x77773e*/
          ValidateRect(v13, 0); /*0x777745*/
        }
        else
        {
          if ( !Render_Draw_774070() ) /*0x777750*/
          {
            v16 = g_DSurface_Hidden; /*0x77775f*/
            (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 28))(stru_887598.lineTrailer); /*0x777768*/
            Frame::Present((int)v16, 0, a3, (int)v13, 0, (int)a4, a5, a2); /*0x77776f*/
          }
  LABEL_26:
          ValidateRect(v13, 0); /*0x777774*/
        }
        break; /*0x777730*/
      case 0x14u: /*0x7776ae*/
        return 1; /*0x77778a*/
      default:
        goto LABEL_70;
    }
    goto LABEL_69; /*0x777730*/
  }
  if ( Msg > 0x205 ) /*0x777830*/
  {
    if ( Msg != 522 ) /*0x777962*/
    {
      if ( Msg == 534 ) /*0x777967*/
        return (uint8_t)Window::ClampToScreen(lParam); /*0x777982*/
      goto LABEL_70; /*0x777967*/
    }
    if ( !byte_B73561 ) /*0x77798b*/
    {
      byte_B73561 = 1; /*0x777991*/
      v20 = aSidebardown; /*0x77799e*/
      if ( (wParam & 0x80000000) == 0 ) /*0x7779a3*/
        v20 = aSidebarup; /*0x7779a5*/
      Sidebar::ScrollSidebarSkipGame(v20); /*0x7779aa*/
      byte_B73561 = 0; /*0x7779af*/
  LABEL_69:
      v14 = Msg; /*0x7779b5*/
    }
  }
  else
  {
    switch ( Msg ) /*0x777836*/
    {
      case 0x205u: /*0x777836*/
        byte_884D34 = 0; /*0x777952*/
        break;
      case 0x1Cu: /*0x777836*/
        if ( v13 == g_hWnd && *((unsigned int *)((char *)&stru_A8EB00 + 412)) != (wParam != 0) ) /*0x7778c1*/
        {
          *((unsigned int *)((char *)&stru_A8EB00 + 412)) = wParam != 0; /*0x7778ce*/
          if ( wParam ) /*0x7778d3*/
          {
            MainWindowProc_Read(a4); /*0x777930*/
          }
          else
          {
            Debug::Log(); /*0x7778da*/
            IDA_LOBYTE(v19) = 1; /*0x7778e2*/
            ((AsyncIO *)(v19))->Read(); /*0x7778e4*/
            sub_407020(); /*0x7778e9*/
            if ( stru_887598.lineTrailer ) /*0x7778f6*/
            {
              byte_B73560 = (*(int (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 28))(stru_887598.lineTrailer); /*0x7778fd*/
              Debug::Log(); /*0x777916*/
              (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x777926*/
            }
          }
          Debug::Log(); /*0x77793a*/
          g_LoadScreenFlag = 1; /*0x777942*/
        }
        return 0; /*0x77794f*/
      case 0x112u: /*0x777836*/
        if ( wParam > 0xF120 ) /*0x777856*/
        {
          if ( wParam == 61760 ) /*0x777891*/
            return 0; /*0x77789d*/
        }
        else
        {
          switch ( wParam ) /*0x777858*/
          {
            case 0xF120u: /*0x777858*/
              *((unsigned int *)((char *)&stru_A8EB00 + 413)) = 0; /*0x777880*/
              break;
            case 0xF020u: /*0x777858*/
              *((unsigned int *)((char *)&stru_A8EB00 + 413)) = 1; /*0x777874*/
              break;
            case 0xF060u: /*0x777858*/
              return 0; /*0x777871*/
          }
        }
        break;
    }
  }
  LABEL_70:
  if ( InputManager::WndProc(*(InputManager **)&stru_87F5F0.__pad_58[296], v13, v14, wParam, (unsigned int)lParam) ) /*0x7779cb*/
    return 0; /*0x7779da*/
  if ( Msg == 646 )
  {
    v21 = wcslen(&word_B730EC); /*0x7779f2*/
    if ( IDA_BYTE1(wParam) ) /*0x7779fe*/
    {
      *(unsigned short *)((char *)&hWnd + 1) = (uint8_t)wParam; /*0x777a02*/
      IDA_LOBYTE(hWnd) = IDA_BYTE1(wParam); /*0x777a09*/
    }
    else
    {
      IDA_LOWORD(hWnd) = (uint8_t)wParam; /*0x777a13*/
    }
    v22 = MultiByteToWideChar(0, 0, (LPCCH)&hWnd, strlen((const char *)&hWnd), WideCharStr, 1); /*0x777a38*/
    *(&word_B730EC + v21) = v22 == 1 ? WideCharStr[0] : 0;
    word_B730EE[v21] = 0; /*0x777a53*/
    return 0; /*0x777a53*/
  }
  return DefWindowProcA(v13, Msg, wParam, (LPARAM)lParam); /*0x777624*/
}
}
// 0x777BB0
namespace gamemd {
void * E4Recv_777BB0::sub_777BB0(char * Buffer)
{

  char *v2; // eax
  char v4; // [esp+4h] [ebp-100h] BYREF
  char v5; // [esp+5h] [ebp-FFh]
  char v6; // [esp+6h] [ebp-FEh]
  char Buffer[128]; // [esp+84h] [ebp-80h] BYREF

  sprintf(Buffer, "%d", dword_822D1C); /*0x777bcc*/
  v4 = g_Str_gsmallwoo[0]; /*0x777bde*/
  v5 = 0; /*0x777be2*/
  v6 = 0; /*0x777be7*/
  v2 = strchr(g_Str_gsmallwoo, 95); /*0x777bec*/
  if ( v2 ) /*0x777bf6*/
    v5 = v2[1]; /*0x777bfb*/
  sprintf((char *const)Buffer, "%s-%s", &v4, Buffer); /*0x777c12*/
  return (char *)Buffer; /*0x777c1c*/

}
}
// 0x777C30
namespace gamemd {
ObjectClass * * InitWindowCreation(ObjectClass * aP0, int a2, int xRight, int yBottom)
{
  LONG v6; // eax
  int v7; // eax
  HCURSOR CursorA; // eax
  int SystemMetrics; // [esp-14h] [ebp-5Ch]
  BOOL v11; // [esp-8h] [ebp-50h]
  LONG WindowLongA; // [esp-4h] [ebp-4Ch]
  struct tagRECT rc; // [esp+10h] [ebp-38h] BYREF
  WNDCLASSA WndClass; // [esp+20h] [ebp-28h] BYREF

  InitCommonControls(); /*0x777c3b*/
  g_hIcon = (int)LoadIconA(aP0, (LPCSTR)0x5D); /*0x777c50*/
  g_hCursor = (int)LoadCursorA(g_hInstance, (LPCSTR)0x68); /*0x777c6c*/
  WndClass.style = 3; /*0x777c71*/
  WndClass.lpfnWndProc = MainWindowProc; /*0x777c79*/
  WndClass.cbClsExtra = 0; /*0x777c81*/
  WndClass.cbWndExtra = 0; /*0x777c85*/
  WndClass.aP0 = aP0; /*0x777c89*/
  WndClass.hIcon = (HICON)g_hIcon; /*0x777c8d*/
  WndClass.hCursor = (HCURSOR)g_hCursor; /*0x777c91*/
  WndClass.hbrBackground = 0; /*0x777c95*/
  WndClass.lpszMenuName = 0; /*0x777c99*/
  WndClass.lpszClassName = WindowName; /*0x777c9d*/
  RegisterClassA(&WndClass); /*0x777ca5*/
  if ( g_DDraw_Initialized ) /*0x777cb6*/
  {
    g_hWnd = CreateWindowExA(0, WindowName, WindowName, 0x2CA0000u, 0, 0, 0, 0, 0, 0, aP0, 0); /*0x777cd6*/
    SetRect(&rc, 0, 0, xRight, yBottom); /*0x777cec*/
    WindowLongA = GetWindowLongA(g_hWnd, -20); /*0x777d08*/
    v11 = GetMenu(g_hWnd) != 0; /*0x777d1c*/
    v6 = GetWindowLongA(g_hWnd, -16); /*0x777d20*/
    AdjustWindowRectEx(&rc, v6, v11, WindowLongA); /*0x777d28*/
    MoveWindow(g_hWnd, 0, 0, rc.right - rc.left, rc.bottom - rc.top, 1); /*0x777d4e*/
  }
  else
  {
    SystemMetrics = GetSystemMetrics(1); /*0x777d60*/
    v7 = GetSystemMetrics(0); /*0x777d62*/
    g_hWnd = CreateWindowExA(8u, WindowName, WindowName, 0x82000000, 0, 0, v7, SystemMetrics, 0, 0, aP0, 0); /*0x777d7e*/
  }
  dword_B7355C = ImmGetContext(g_hWnd); /*0x777d95*/
  ImmAssociateContext(g_hWnd, 0); /*0x777d9c*/
  ShowWindow(g_hWnd, 1); /*0x777da9*/
  g_ScreenWidth = a2; /*0x777db5*/
  UpdateWindow(g_hWnd); /*0x777dbc*/
  SetFocus(g_hWnd); /*0x777dc9*/
  RegisterHotKey(g_hWnd, 1, 7u, 0x4Du); /*0x777ddb*/
  CursorA = LoadCursorA(g_hInstance, (LPCSTR)0x68); /*0x777dea*/
  return SetCursor(CursorA); /*0x777df3*/
}
}
// 0x777EA0
namespace gamemd {
int IME_ProcessComposition()
{
  int result; // eax
  int v1; // eax
  signed int v2; // esi
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
      Buf[result] = 0; /*0x777ef7*/
      v1 = MultiByteToWideChar(0, 0, Buf, -1, WideCharStr, 256); /*0x777efb*/
      word_B73518 = 0; /*0x777f03*/
      if ( v1 >= 0 ) /*0x777f0a*/
      {
        MaxCount = (uint16_t)ImmGetCompositionStringA(dword_B7355C, 0x80u, 0, 0); /*0x777f2c*/
        v2 = wcslen(WideCharStr); /*0x777f39*/
      }
      else
      {
        v2 = 0; /*0x777f0c*/
      }
      result = _mbsnccnt((const uint8_t *)Buf, MaxCount); /*0x777f47*/
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
// 0x778A20
namespace gamemd {
unsigned int * PlayerProfile_Load(unsigned int * a1, const char ** a2)
{
  uint8_t *v5; // eax
  int Int; // esi
  uint8_t *v7; // eax
  char Bool_Overwrite; // bl
  int v9; // edi
  int v10; // ebp
  uint8_t *v11; // eax
  char *v12; // eax
  char *v13; // eax
  ReferenceCounted *v14; // eax
  void *AccountInfoWOL_Load; // esi
  ComPtr *v16; // edi
  ObjectClass v17; // [esp+Ch] [ebp-D0h] BYREF

  *(unsigned int *)&v17.bombVisible = a1; /*0x778a39*/
  ((BufferIOFile *)((BufferIOFile *)&v17.spawnStatus))->Constructor(g_Str_File_wolinfoMD_ini); /*0x778a3d*/
  if ( !(uint8_t)((File *)((BufferIOFileClass *)&v17.spawnStatus))->IsReady(0) ) /*0x778a4c*/
  {
    ((FileClass *)((RawFileClass *)&v17.spawnStatus))->Close(); /*0x778a5c*/
    ((CCFileClass *)((BufferIOFileClass *)&v17.spawnStatus))->Close(); /*0x778a68*/
    ((CCFileClass *)((CDFileClass *)&v17.spawnStatus))->Reopen(g_Str_File_wolinfoMD_ini, (CHAR *)1); /*0x778a7b*/
  }
  if ( (uint8_t)((File *)((BufferIOFileClass *)&v17.spawnStatus))->IsReady(0) )
  {
    ((unsigned int *)&v17)[0] = 0; /*0x778abf*/
    ((unsigned int *)&v17)[0] = 0; /*0x778ac3*/
    v17.fallRate = 0; /*0x778ac7*/
    v17.nextObject = 0; /*0x778acb*/
    v17.owningHouseIndex = (int)&GenericNode_vftable; /*0x778acf*/
    ((GenericNode *)((GenericNode *)&v17.attachedTag))->Constructor(); /*0x778ad7*/
    LinkedList::Prepend((LinkedList *)&v17.owningHouseIndex, (int)&v17.attachedTag); /*0x778aed*/
    v17.occupant = (int)&List_INIClass_INISection___vftable; /*0x778af9*/
    memset(&v17.ambientSoundController[1], 0, 13); /*0x778b07*/
    v17.customSound_controller[0] = 0; /*0x778b18*/
    v17.customSound_controller[1] = 0; /*0x778b1c*/
    ((unsigned int *)&v17)[0] = (int)&INIClass_vftable; /*0x778b20*/
    ((FileStraw *)((FileStraw *)&((char *)&v17)))->Open((int)&v17.spawnStatus, 0); /*0x778b28*/
    ((CCFileClass *)((BufferIOFileClass *)&v17.spawnStatus))->Close(); /*0x778b34*/
    ((String *)((String *)&((char *)&v17)))->AssignFromPtr(a2); /*0x778b3e*/
    ((String *)((String *)&((char *)&v17)))->ToLower(); /*0x778b47*/
    v5 = (uint8_t *)((String *)((String *)&((char *)&v17)))->GetOrEmpty_Alt(); /*0x778b50*/
    if ( INIClass::BinarySearchSection((int)&((char *)&v17), v5) )
    {
      unknown_libname_73(&((char *)&v17)); /*0x778ba4*/
      ((String *)((String *)&v17))->Assign(g_INI_Key_Server); /*0x778bb2*/
      ((INIClass *)((INIClass *)&((char *)&v17)))->ReadString((char **)&((char *)&v17), (char **)&v17, (char **)&((char *)&v17), (int)&((char *)&v17)); /*0x778bcf*/
      DeleteAndZero(&v17); /*0x778bd8*/
      ((String *)((String *)&v17))->Assign(g_INI_Key_Locale); /*0x778be6*/
      Int = INIClass::ReadInt((bool *)&((char *)&v17), (char **)&((char *)&v17), (char **)&v17, 0); /*0x778c03*/
      DeleteAndZero(&v17); /*0x778c05*/
      v7 = (uint8_t *)((String *)((String *)&((char *)&v17)))->GetOrEmpty(); /*0x778c14*/
      Bool_Overwrite = INIClass::ReadBool_Overwrite(&((char *)&v17), v7, (uint8_t *)aLocaleverified, 0); /*0x778c23*/
      IDA_LOBYTE(v17.customSound_controller[4]) = Bool_Overwrite; /*0x778c2e*/
      ((String *)((String *)&v17))->Assign(g_INI_Key_Country); /*0x778c32*/
      v9 = INIClass::ReadInt((bool *)&((char *)&v17), (char **)&((char *)&v17), (char **)&v17, -2); /*0x778c50*/
      DeleteAndZero(&v17); /*0x778c52*/
      ((String *)((String *)&v17))->Assign(&(unsigned int *)((char *)&stru_81AF8C + 95)); /*0x778c60*/
      v10 = INIClass::ReadInt((bool *)&((char *)&v17), (char **)&((char *)&v17), (char **)&v17, -2); /*0x778c7e*/
      DeleteAndZero(&v17); /*0x778c80*/
      ((String *)((String *)&v17))->Assign(aRank); /*0x778c8e*/
      v17.customSound_controller[3] = INIClass::ReadInt((bool *)&((char *)&v17), (char **)&((char *)&v17), (char **)&v17, -1); /*0x778cac*/
      DeleteAndZero(&v17); /*0x778cb0*/
      ((String *)((String *)&v17))->Assign((const char *)&(unsigned int *)((char *)&g_INI_Key_TRUCKA + 82)); /*0x778cbe*/
      *(unsigned int *)&v17.isOnMap = INIClass::ReadInt((bool *)&((char *)&v17), (char **)&((char *)&v17), (char **)&v17, -1); /*0x778cdc*/
      DeleteAndZero(&v17); /*0x778ce3*/
      ((String *)((String *)&v17))->Assign(aWins); /*0x778cf1*/
      v17.customSound = INIClass::ReadInt((bool *)&((char *)&v17), (char **)&((char *)&v17), (char **)&v17, -1); /*0x778d0f*/
      DeleteAndZero(&v17); /*0x778d13*/
      ((String *)((String *)&v17))->Assign(aLosses); /*0x778d21*/
      v17.health = INIClass::ReadInt((bool *)&((char *)&v17), (char **)&((char *)&v17), (char **)&v17, -1); /*0x778d3f*/
      DeleteAndZero(&v17); /*0x778d43*/
      ((String *)((String *)&v17))->Assign(aDisconnects); /*0x778d51*/
      v17.customSound_controller[2] = INIClass::ReadInt((bool *)&((char *)&v17), (char **)&((char *)&v17), (char **)&v17, -1); /*0x778d6f*/
      DeleteAndZero(&v17); /*0x778d73*/
      v11 = (uint8_t *)((String *)((String *)&((char *)&v17)))->GetOrEmpty(); /*0x778d83*/
      IDA_LOBYTE(v17.estimatedHealth) = INIClass::ReadBool_Overwrite(&((char *)&v17), v11, (uint8_t *)aMatchbyres, 1); /*0x778d96*/
      unknown_libname_73(&((char *)&v17)); /*0x778d9d*/
      unknown_libname_74(&((char *)&v17)); /*0x778da6*/
      ((String *)((String *)&v17))->Assign(g_INI_Key_UpdateTime); /*0x778db4*/
      ((INIClass *)((INIClass *)&((char *)&v17)))->ReadString((char **)&((char *)&v17), (char **)&v17, (char **)&((char *)&v17), (int)&((char *)&v17)); /*0x778dd1*/
      DeleteAndZero(&v17); /*0x778dda*/
      LocalizeWOLDateString((char **)&((char *)&v17), (void **)&((char *)&v17)); /*0x778de7*/
      DeleteAndZero::Alt2((DeleteAndZero *)&((char *)&v17)); /*0x778df0*/
      unknown_libname_74(&((char *)&v17)); /*0x778df9*/
      ((String *)((String *)&v17))->Assign(g_INI_Key_UpdateDate); /*0x778e07*/
      ((INIClass *)((INIClass *)&((char *)&v17)))->ReadString((char **)&((char *)&v17), (char **)&v17, (char **)&((char *)&v17), (int)&((char *)&v17)); /*0x778e24*/
      DeleteAndZero(&v17); /*0x778e2d*/
      v12 = ((String *)((String *)&((char *)&v17)))->GetOrEmpty_Alt(); /*0x778e36*/
      v13 = CharToWideString(v12); /*0x778e3d*/
      WideString::Reassign((void **)&((char *)&v17), (wchar_t *)v13); /*0x778e47*/
      v14 = (ReferenceCounted *)RA2_OPNEW(0x44u); /*0x778e4e*/
      if ( v14 )
        AccountInfoWOL_Load = LoadAccountInfoWOL_Load(
                                v14,
                                (const char **)&((char *)&v17),
                                Int,
                                v17.customSound_controller[4],
                                Bool_Overwrite != 0 ? 1 : 3,
                                v9,
                                v10,
                                v17.customSound_controller[3],
                                *(int *)&v17.isOnMap,
                                v17.customSound,
                                v17.health,
                                v17.customSound_controller[2],
                                v17.estimatedHealth,
                                (const wchar_t **)&((char *)&v17),
                                (const wchar_t **)&((char *)&v17));
      else
        AccountInfoWOL_Load = 0; /*0x778eb7*/
      v16 = *(ComPtr **)&v17.bombVisible; /*0x778eb9*/
      ((ComPtr *)(*(ComPtr **)&v17.bombVisible))->Constructor(); /*0x778ebf*/
      *(unsigned int *)v16->__pad_0 = (void*)&rc_ptr_PlayerProfile_vftable; /*0x778ec6*/
      ((ComPtr *)(v16))->Set((int)AccountInfoWOL_Load); /*0x778ecd*/
      DeleteAndZero::Alt((DeleteAndZero *)&((char *)&v17)); /*0x778ed6*/
      DeleteAndZero::Alt((DeleteAndZero *)&((char *)&v17)); /*0x778edf*/
      DeleteAndZero((ObjectClass *)&((char *)&v17)); /*0x778ee8*/
      DeleteAndZero((ObjectClass *)&((char *)&v17)); /*0x778ef1*/
      DeleteAndZero((ObjectClass *)&((char *)&v17)); /*0x778efa*/
      ((HashTable *)((INIClass *)&((char *)&v17)))->DestroyHashTableINIClass(); /*0x778f03*/
      v17.spawnStatus = (int)&off_7E1668; /*0x778f0f*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v17.spawnStatus))->Dtor(); /*0x778f1a*/
      return (ObjectClass *)v16; /*0x778f1f*/
    }
    else
    {
      LoadAccountInfoWOL(a1); /*0x778b65*/
      DeleteAndZero((ObjectClass *)&((char *)&v17)); /*0x778b6e*/
      ((HashTable *)((INIClass *)&((char *)&v17)))->DestroyHashTableINIClass(); /*0x778b77*/
      v17.spawnStatus = (int)&off_7E1668; /*0x778b83*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v17.spawnStatus))->Dtor(); /*0x778b8e*/
      return a1; /*0x778b93*/
    }
  }
  else
  {
    LoadAccountInfoWOL(a1); /*0x778a93*/
    v17.spawnStatus = (int)&off_7E1668; /*0x778a9f*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v17.spawnStatus))->Dtor(); /*0x778aaa*/
    return a1; /*0x778aaf*/
  }
}
}
// 0x778F30
namespace gamemd {
CampaignScore * * LocalizeWOLDateString(char ** a1, void ** a2)
{
  char *v3; // eax
  char *v4; // eax
  wchar_t *v5; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // eax
  wchar_t *v27; // eax
  wchar_t *v28; // eax
  wchar_t *v29; // eax

  v3 = ((String *)(a1))->GetOrEmpty_Alt(); /*0x778f33*/
  v4 = CharToWideString(v3); /*0x778f3a*/
  WideString::Reassign(a2, (wchar_t *)v4); /*0x778f42*/
  v5 = WideString::GetOrEmpty(a2); /*0x778f4e*/
  if ( wcsstr(v5, L"Jan") ) /*0x778f54*/
  {
    StringCSF = GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 127); /*0x778f6e*/
    IDA_LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Jan", StringCSF); /*0x778f7b*/
  }
  else
  {
    v8 = WideString::GetOrEmpty(a2); /*0x778f89*/
    if ( wcsstr(v8, L"Feb") ) /*0x778f8f*/
    {
      v9 = GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 132); /*0x778fac*/
      IDA_LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Feb", v9); /*0x778fb9*/
    }
    else
    {
      v10 = WideString::GetOrEmpty(a2); /*0x778fc7*/
      if ( wcsstr(v10, L"Mar") ) /*0x778fcd*/
      {
        v11 = GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_WOLPersonaInformation_cpp, 137); /*0x778fea*/
        IDA_LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Mar", v11); /*0x778ff7*/
      }
      else
      {
        v12 = WideString::GetOrEmpty(a2); /*0x779005*/
        if ( wcsstr(v12, L"Apr") ) /*0x77900b*/
        {
          v13 = GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_WOLPersonaInformation_cpp, 142); /*0x779028*/
          IDA_LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Apr", v13); /*0x779035*/
        }
        else
        {
          v14 = WideString::GetOrEmpty(a2); /*0x779043*/
          if ( wcsstr(v14, L"May") ) /*0x779049*/
          {
            v15 = GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_WOLPersonaInformation_cpp, 147); /*0x779066*/
            IDA_LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"May", v15); /*0x779073*/
          }
          else
          {
            v16 = WideString::GetOrEmpty(a2); /*0x779081*/
            if ( wcsstr(v16, L"Jun") ) /*0x779087*/
            {
              v17 = GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_WOLPersonaInformation_cpp, 152); /*0x7790a4*/
              IDA_LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Jun", v17); /*0x7790b1*/
            }
            else
            {
              v18 = WideString::GetOrEmpty(a2); /*0x7790bf*/
              if ( wcsstr(v18, L"Jul") ) /*0x7790c5*/
              {
                v19 = GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_WOLPersonaInformation_cpp, 157); /*0x7790e2*/
                IDA_LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Jul", v19); /*0x7790ef*/
              }
              else
              {
                v20 = WideString::GetOrEmpty(a2); /*0x7790fd*/
                if ( wcsstr(v20, L"Aug") ) /*0x779103*/
                {
                  v21 = GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_WOLPersonaInformation_cpp, 162); /*0x779120*/
                  IDA_LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Aug", v21); /*0x77912d*/
                }
                else
                {
                  v22 = WideString::GetOrEmpty(a2); /*0x77913b*/
                  if ( wcsstr(v22, L"Sep") ) /*0x779141*/
                  {
                    v23 = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 167); /*0x77915e*/
                    IDA_LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Sep", v23); /*0x77916b*/
                  }
                  else
                  {
                    v24 = WideString::GetOrEmpty(a2); /*0x779179*/
                    if ( wcsstr(v24, L"Oct") ) /*0x77917f*/
                    {
                      v25 = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_WOLPersonaInformation_cpp, 172); /*0x77919c*/
                      IDA_LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Oct", v25); /*0x7791a9*/
                    }
                    else
                    {
                      v26 = WideString::GetOrEmpty(a2); /*0x7791b7*/
                      if ( wcsstr(v26, L"Nov") ) /*0x7791bd*/
                      {
                        v27 = GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 177); /*0x7791da*/
                        IDA_LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Nov", v27); /*0x7791e7*/
                      }
                      else
                      {
                        v28 = WideString::GetOrEmpty(a2); /*0x7791f5*/
                        v7 = wcsstr(v28, L"Dec"); /*0x7791fb*/
                        if ( v7 ) /*0x779205*/
                        {
                          v29 = GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 182); /*0x779218*/
                          IDA_LOBYTE(v7) = WideString::Replace(a2, (wchar_t *)L"Dec", v29); /*0x779225*/
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
// 0x779230
namespace gamemd {
CampaignScore * * ConvertDateMonthNames(wchar_t ** a1, void ** a2)
{
  wchar_t *v4; // eax
  wchar_t *v5; // eax
  wchar_t *v6; // eax
  wchar_t *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // eax
  wchar_t *v27; // eax
  wchar_t *v28; // eax
  char *v29; // eax
  char *v30; // eax
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
  WideString v43[4]; // [esp+8h] [ebp-4h] BYREF

  unknown_libname_74(v43); /*0x77923b*/
  v4 = WideString::GetOrEmpty_Alt((WideString *)a1); /*0x779242*/
  WideString::Reassign(v43, v4); /*0x77924c*/
  StringCSF = GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 191); /*0x77926b*/
  v5 = WideString::GetOrEmpty(v43); /*0x77926c*/
  if ( wcsstr(v5, StringCSF) ) /*0x779272*/
  {
    v6 = GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 192); /*0x779294*/
    WideString::Replace(v43, v6, (wchar_t *)L"Jan"); /*0x77929e*/
  }
  v32 = GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 194); /*0x7792bd*/
  v7 = WideString::GetOrEmpty(v43); /*0x7792be*/
  if ( wcsstr(v7, v32) ) /*0x7792c4*/
  {
    v8 = GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 195); /*0x7792e6*/
    WideString::Replace(v43, v8, (wchar_t *)L"Feb"); /*0x7792f0*/
  }
  v33 = GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_WOLPersonaInformation_cpp, 197); /*0x77930f*/
  v9 = WideString::GetOrEmpty(v43); /*0x779310*/
  if ( wcsstr(v9, v33) ) /*0x779316*/
  {
    v10 = GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_WOLPersonaInformation_cpp, 198); /*0x779338*/
    WideString::Replace(v43, v10, (wchar_t *)L"Mar"); /*0x779342*/
  }
  v34 = GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_WOLPersonaInformation_cpp, 200); /*0x779361*/
  v11 = WideString::GetOrEmpty(v43); /*0x779362*/
  if ( wcsstr(v11, v34) ) /*0x779368*/
  {
    v12 = GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_WOLPersonaInformation_cpp, 201); /*0x77938a*/
    WideString::Replace(v43, v12, (wchar_t *)L"Apr"); /*0x779394*/
  }
  v35 = GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_WOLPersonaInformation_cpp, 203); /*0x7793b3*/
  v13 = WideString::GetOrEmpty(v43); /*0x7793b4*/
  if ( wcsstr(v13, v35) ) /*0x7793ba*/
  {
    v14 = GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_WOLPersonaInformation_cpp, 204); /*0x7793dc*/
    WideString::Replace(v43, v14, (wchar_t *)L"May"); /*0x7793e6*/
  }
  v36 = GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_WOLPersonaInformation_cpp, 206); /*0x779405*/
  v15 = WideString::GetOrEmpty(v43); /*0x779406*/
  if ( wcsstr(v15, v36) ) /*0x77940c*/
  {
    v16 = GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_WOLPersonaInformation_cpp, 207); /*0x77942e*/
    WideString::Replace(v43, v16, (wchar_t *)L"Jun"); /*0x779438*/
  }
  v37 = GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_WOLPersonaInformation_cpp, 209); /*0x779457*/
  v17 = WideString::GetOrEmpty(v43); /*0x779458*/
  if ( wcsstr(v17, v37) ) /*0x77945e*/
  {
    v18 = GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_WOLPersonaInformation_cpp, 210); /*0x779480*/
    WideString::Replace(v43, v18, (wchar_t *)L"Jul"); /*0x77948a*/
  }
  v38 = GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_WOLPersonaInformation_cpp, 212); /*0x7794a9*/
  v19 = WideString::GetOrEmpty(v43); /*0x7794aa*/
  if ( wcsstr(v19, v38) ) /*0x7794b0*/
  {
    v20 = GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_WOLPersonaInformation_cpp, 213); /*0x7794d2*/
    WideString::Replace(v43, v20, (wchar_t *)L"Aug"); /*0x7794dc*/
  }
  v39 = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 215); /*0x7794fb*/
  v21 = WideString::GetOrEmpty(v43); /*0x7794fc*/
  if ( wcsstr(v21, v39) ) /*0x779502*/
  {
    v22 = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 216); /*0x779524*/
    WideString::Replace(v43, v22, (wchar_t *)L"Sep"); /*0x77952e*/
  }
  v40 = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_WOLPersonaInformation_cpp, 218); /*0x77954d*/
  v23 = WideString::GetOrEmpty(v43); /*0x77954e*/
  if ( wcsstr(v23, v40) ) /*0x779554*/
  {
    v24 = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_WOLPersonaInformation_cpp, 219); /*0x779576*/
    WideString::Replace(v43, v24, (wchar_t *)L"Oct"); /*0x779580*/
  }
  v41 = GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 221); /*0x77959f*/
  v25 = WideString::GetOrEmpty(v43); /*0x7795a0*/
  if ( wcsstr(v25, v41) ) /*0x7795a6*/
  {
    v26 = GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 222); /*0x7795c8*/
    WideString::Replace(v43, v26, (wchar_t *)L"Nov"); /*0x7795d2*/
  }
  v42 = GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 224); /*0x7795f1*/
  v27 = WideString::GetOrEmpty(v43); /*0x7795f2*/
  if ( wcsstr(v27, v42) ) /*0x7795f8*/
  {
    v28 = GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 225); /*0x77961a*/
    WideString::Replace(v43, v28, (wchar_t *)L"Dec"); /*0x779624*/
  }
  v29 = (char *)WideString::GetOrEmpty(v43); /*0x77962d*/
  v30 = ToWideStringChar(v29); /*0x779634*/
  ((String *)(a2))->Assign_Bool(v30); /*0x77963c*/
  DeleteAndZero::Alt((DeleteAndZero *)v43); /*0x779645*/
}
}
// 0x77B2A0
namespace gamemd {
int RunWOLMainLoop(char a1)
{
  int v2; // esi
  char v3; // cl
  char **AutoLoginWOL; // eax
  char **ConfigWOL; // eax
  int v6; // edx
  int v7; // esi
  int v8; // edi
  int v9; // eax
  int started; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  ObjectClass *v15; // [esp+0h] [ebp-20h]
  ObjectClass *v16; // [esp+0h] [ebp-20h]
  bool v17; // [esp+12h] [ebp-Eh]
  char v18; // [esp+13h] [ebp-Dh]
  void *v19; // [esp+14h] [ebp-Ch] BYREF
  int64_t v20; // [esp+18h] [ebp-8h] BYREF

  while ( (*(int (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) < 0 ) /*0x77b2b6*/
    (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x77b2c0*/
  RunWOLMainLoop_Helper(); /*0x77b2d2*/
  v2 = dword_A83D14; /*0x77b2d7*/
  if ( dword_A83D14 == -1 ) /*0x77b2e0*/
    v2 = dword_A83D18; /*0x77b2e2*/
  if ( v2 == ((StringList *)((StringList *)&unk_A83D10))->Find(g_INI_Key_INTRO) ) /*0x77b2f9*/
    Theme::QueueSong((int)&unk_A83D10, -3); /*0x77b302*/
  ReadWOLAccountINI(); /*0x77b307*/
  v3 = byte_A83D22; /*0x77b30c*/
  byte_A83D22 = 1; /*0x77b312*/
  v18 = v3; /*0x77b319*/
  RunWOLMainLoop_Find(v15); /*0x77b31d*/
  if ( !String::Length((String *)&g_WindowManager.__pad_EC[684]) ) /*0x77b327*/
  {
    AutoLoginWOL = ReadAutoLoginWOL((ObjectClass *)&v19); /*0x77b334*/
    ((String *)((String *)&g_WindowManager.__pad_EC[684]))->Reassign((const char **)AutoLoginWOL); /*0x77b33f*/
    DeleteAndZero((ObjectClass *)&v19); /*0x77b348*/
    if ( !String::Length((String *)&g_WindowManager.__pad_EC[684]) ) /*0x77b352*/
    {
      IDA_LODWORD(v20) = 0; /*0x77b361*/
      IDA_BYTE4(v20) = 0; /*0x77b365*/
      ReadRegistryOptionsWOL((ObjectClass *)&v20); /*0x77b36a*/
      if ( (uint8_t)((Flag *)((Flag *)&v20))->IsNot2() ) /*0x77b373*/
      {
        ConfigWOL = LoadConfigWOL((ObjectClass *)&v19); /*0x77b380*/
        ((String *)((String *)&g_WindowManager.__pad_EC[684]))->Reassign((const char **)ConfigWOL); /*0x77b38b*/
        DeleteAndZero((ObjectClass *)&v19); /*0x77b394*/
      }
    }
  }
  v6 = dword_B73678; /*0x77b39d*/
  v7 = 0; /*0x77b3a3*/
  v17 = 0; /*0x77b3a5*/
  do /*0x77b527*/
  {
    if ( !dword_A8B244 || dword_A8B244 == 6 ) /*0x77b3b7*/
      v8 = 0; /*0x77b3c6*/
    else
      v8 = (dword_A8B244 == 3) + 1; /*0x77b3c2*/
    if ( !v6 && v8 ) /*0x77b3ce*/
    {
      v9 = LoginFlowWOL(v16); /*0x77b3d0*/
      v7 = v9; /*0x77b3d5*/
      if ( v9 ) /*0x77b3d9*/
      {
        if ( v9 != 1 ) /*0x77b3dc*/
        {
  LABEL_54:
          *(unsigned int *)&dword_A8B238 = 0; /*0x77b532*/
          dword_A8B244 = 0; /*0x77b538*/
          dword_A8B248 = 0; /*0x77b53e*/
          HandleLogoutWOL(v16); /*0x77b544*/
          byte_A83D22 = v18; /*0x77b54d*/
          Dialog::CloseAll(); /*0x77b553*/
          return v7; /*0x77b561*/
        }
        dword_B73678 = v8; /*0x77b3e2*/
      }
      else
      {
        if ( !dword_A8B244 ) /*0x77b3f0*/
        {
          *(unsigned int *)&dword_A8B238 = 0; /*0x77b562*/
          HandleLogoutWOL(v16); /*0x77b568*/
          byte_A83D22 = v18; /*0x77b571*/
          Dialog::CloseAll(); /*0x77b576*/
          return 0; /*0x77b584*/
        }
        dword_A8B244 = 0; /*0x77b3f6*/
        dword_A8B248 = 0; /*0x77b3fc*/
      }
    }
    RunWOLMainLoop_Find(v16); /*0x77b402*/
    switch ( dword_A8B244 ) /*0x77b415*/
    {
      case 0: /*0x77b415*/
        a1 = 0; /*0x77b41c*/
        v7 = RunWOLMainLoop_Read(v16, 0); /*0x77b423*/
        v17 = v7 != 1; /*0x77b428*/
        break; /*0x77b42d*/
      case 1: /*0x77b415*/
      case 2: /*0x77b415*/
        if ( !a1 ) /*0x77b43b*/
        {
          started = JoinLobbyWOL(v16); /*0x77b432*/
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
        if ( dword_A8B244 == 4 ) /*0x77b45f*/
          goto LABEL_42; /*0x77b45f*/
        break; /*0x77b45f*/
      case 5: /*0x77b415*/
        v7 = GameOptionsScreenWOL(v16); /*0x77b489*/
        a1 = 0; /*0x77b48b*/
        if ( v7 ) /*0x77b48f*/
        {
  LABEL_35:
          v17 = 1; /*0x77b47b*/
        }
        else if ( dword_A8B244 == 5 ) /*0x77b498*/
        {
          v11 = dword_A8B248; /*0x77b49a*/
          dword_A8B248 = 0; /*0x77b4a0*/
          dword_A8B244 = v11; /*0x77b4a6*/
        }
        break; /*0x77b4ac*/
      case 6: /*0x77b415*/
        v12 = RunWOLMainLoop_Init(v16); /*0x77b4ae*/
        v7 = v12; /*0x77b4b3*/
        a1 = 0; /*0x77b4b5*/
        if ( v12 == -2 || v12 == -1 ) /*0x77b4c3*/
          goto LABEL_54; /*0x77b4c3*/
        if ( !v12 ) /*0x77b4cb*/
  LABEL_42:
          dword_A8B244 = 0; /*0x77b4cd*/
        break; /*0x77b4cd*/
      default:
        break;
    }
    v6 = dword_B73678; /*0x77b4d3*/
    if ( v7 != 1 && dword_B73678 ) /*0x77b4e0*/
    {
      if ( !dword_A8B244 || dword_A8B244 == 6 ) /*0x77b4fb*/
        v13 = 0; /*0x77b508*/
      else
        v13 = (dword_A8B244 == 3) + 1; /*0x77b505*/
      if ( dword_B73678 != v13 || v17 ) /*0x77b510*/
      {
        RunWOLMainLoop_Delete(v16); /*0x77b512*/
        v6 = 0; /*0x77b517*/
        dword_B73678 = 0; /*0x77b519*/
      }
    }
  }
  while ( !v17 ); /*0x77b527*/
  if ( v7 == 1 ) /*0x77b5b8*/
  {
    Dialog::CloseAll(); /*0x77b5ba*/
    return 1; /*0x77b5bf*/
  }
  else
  {
    HandleLogoutWOL(v16); /*0x77b5c9*/
    *(unsigned int *)&dword_A8B238 = 0; /*0x77b5d2*/
    byte_A83D22 = v18; /*0x77b5d8*/
    dword_A8B244 = 0; /*0x77b5de*/
    dword_A8B248 = 0; /*0x77b5e4*/
    Dialog::CloseAll(); /*0x77b5ea*/
    return 0; /*0x77b5ef*/
  }
}
}
// 0x77BAE0
namespace gamemd {
void sub_77BAE0()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B768C8; /*0x77bae0*/
  for ( i = 0; i < dword_B768C8; v0 = dword_B768C8 ) /*0x77baed*/
  {
    v2 = *((unsigned int *)g_WOL_ListParser + i); /*0x77baf4*/
    while ( v2 ) /*0x77baf9*/
    {
      v3 = (void **)v2; /*0x77bafb*/
      v2 = v2->estimatedHealth; /*0x77bafd*/
      DeleteAndZero(v3); /*0x77bb06*/
      RA2_OPDEL(v3); /*0x77bb0c*/
    }
    *((unsigned int *)g_WOL_ListParser + i++) = 0; /*0x77bb1f*/
  }
  v4 = dword_B768F0; /*0x77bb30*/
  dword_B768C4 = 0; /*0x77bb36*/
  if ( v0 > dword_B768F0 ) /*0x77bb42*/
  {
    do /*0x77bbf5*/
    {
      if ( byte_B768D4 || v0 <= v4 ) /*0x77bb58*/
        break; /*0x77bb58*/
      v5 = (int *)g_WOL_ListParser; /*0x77bb64*/
      v0 = v0; /*0x77bb6a*/
      dword_B768C8 = v0 >> 1; /*0x77bb6f*/
      --dword_B768CC; /*0x77bb7b*/
      g_WOL_ListParser = RA2_OPNEW(4 * (v0 >> 1)); /*0x77bb94*/
      memset(g_WOL_ListParser, 0, 4 * dword_B768C8); /*0x77bb9c*/
      if ( v0 > 0 ) /*0x77bb9e*/
      {
        v5 = v5; /*0x77bba0*/
        v8 = v0; /*0x77bba2*/
        do /*0x77bbdd*/
        {
          v9 = *v5; /*0x77bba4*/
          if ( *v5 ) /*0x77bba4*/
          {
            do /*0x77bbd7*/
            {
              v10 = dword_B768D8(v9) & ((1 << dword_B768CC) - 1); /*0x77bbc0*/
              v11 = *((unsigned int *)g_WOL_ListParser + v10); /*0x77bbc7*/
              *((unsigned int *)g_WOL_ListParser + v10) = v9; /*0x77bbca*/
              v12 = *(unsigned int *)(v9 + 112); /*0x77bbcd*/
              *(unsigned int *)(v9 + 112) = v11; /*0x77bbd0*/
              v9 = v12; /*0x77bbd5*/
            }
            while ( v12 ); /*0x77bbd7*/
          }
          ++v5; /*0x77bbd9*/
          --v8; /*0x77bbdc*/
        }
        while ( v8 ); /*0x77bbdd*/
      }
      RA2_OPDEL(v5); /*0x77bbe0*/
      v4 = dword_B768F0; /*0x77bbe5*/
      v0 = dword_B768C8; /*0x77bbeb*/
    }
    while ( dword_B768C8 > (unsigned int)dword_B768F0 ); /*0x77bbf5*/
  }
  RA2_OPDEL(g_WOL_ListParser); /*0x77bc01*/
}
}
// 0x77BCB0
namespace gamemd {
void sub_77BCB0()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B73B00; /*0x77bcb0*/
  for ( i = 0; i < dword_B73B00; v0 = dword_B73B00 ) /*0x77bcbd*/
  {
    v2 = *((unsigned int *)dword_B73AF8 + i); /*0x77bcc4*/
    while ( v2 ) /*0x77bcc9*/
    {
      v3 = (void **)v2; /*0x77bccb*/
      v2 = v2->estimatedHealth; /*0x77bccd*/
      DeleteAndZero(v3); /*0x77bcd6*/
      RA2_OPDEL(v3); /*0x77bcdc*/
    }
    *((unsigned int *)dword_B73AF8 + i++) = 0; /*0x77bcef*/
  }
  v4 = dword_B73B28; /*0x77bd00*/
  dword_B73AFC = 0; /*0x77bd06*/
  if ( v0 > dword_B73B28 ) /*0x77bd12*/
  {
    do /*0x77bdc5*/
    {
      if ( byte_B73B0C || v0 <= v4 ) /*0x77bd28*/
        break; /*0x77bd28*/
      v5 = (int *)dword_B73AF8; /*0x77bd34*/
      v0 = v0; /*0x77bd3a*/
      dword_B73B00 = v0 >> 1; /*0x77bd3f*/
      --dword_B73B04; /*0x77bd4b*/
      dword_B73AF8 = RA2_OPNEW(4 * (v0 >> 1)); /*0x77bd64*/
      memset(dword_B73AF8, 0, 4 * dword_B73B00); /*0x77bd6c*/
      if ( v0 > 0 ) /*0x77bd6e*/
      {
        v5 = v5; /*0x77bd70*/
        v8 = v0; /*0x77bd72*/
        do /*0x77bdad*/
        {
          v9 = *v5; /*0x77bd74*/
          if ( *v5 ) /*0x77bd74*/
          {
            do /*0x77bda7*/
            {
              v10 = dword_B73B10(v9) & ((1 << dword_B73B04) - 1); /*0x77bd90*/
              v11 = *((unsigned int *)dword_B73AF8 + v10); /*0x77bd97*/
              *((unsigned int *)dword_B73AF8 + v10) = v9; /*0x77bd9a*/
              v12 = *(unsigned int *)(v9 + 112); /*0x77bd9d*/
              *(unsigned int *)(v9 + 112) = v11; /*0x77bda0*/
              v9 = v12; /*0x77bda5*/
            }
            while ( v12 ); /*0x77bda7*/
          }
          ++v5; /*0x77bda9*/
          --v8; /*0x77bdac*/
        }
        while ( v8 ); /*0x77bdad*/
      }
      RA2_OPDEL(v5); /*0x77bdb0*/
      v4 = dword_B73B28; /*0x77bdb5*/
      v0 = dword_B73B00; /*0x77bdbb*/
    }
    while ( dword_B73B00 > (unsigned int)dword_B73B28 ); /*0x77bdc5*/
  }
  RA2_OPDEL(dword_B73AF8); /*0x77bdd1*/
}
}
// 0x77BE80
namespace gamemd {
void sub_77BE80()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B77D88; /*0x77be80*/
  for ( i = 0; i < dword_B77D88; v0 = dword_B77D88 ) /*0x77be8d*/
  {
    v2 = *((unsigned int *)stru_B77D80 + i); /*0x77be94*/
    while ( v2 ) /*0x77be99*/
    {
      v3 = (void **)v2; /*0x77be9b*/
      v2 = v2->estimatedHealth; /*0x77be9d*/
      DeleteAndZero(v3); /*0x77bea6*/
      RA2_OPDEL(v3); /*0x77beac*/
    }
    *((unsigned int *)stru_B77D80 + i++) = 0; /*0x77bebf*/
  }
  v4 = dword_B77DB0; /*0x77bed0*/
  dword_B77D84 = 0; /*0x77bed6*/
  if ( v0 > dword_B77DB0 ) /*0x77bee2*/
  {
    do /*0x77bf95*/
    {
      if ( byte_B77D94 || v0 <= v4 ) /*0x77bef8*/
        break; /*0x77bef8*/
      v5 = (int *)stru_B77D80; /*0x77bf04*/
      v0 = v0; /*0x77bf0a*/
      dword_B77D88 = v0 >> 1; /*0x77bf0f*/
      --dword_B77D8C; /*0x77bf1b*/
      stru_B77D80 = RA2_OPNEW(4 * (v0 >> 1)); /*0x77bf34*/
      memset(stru_B77D80, 0, 4 * dword_B77D88); /*0x77bf3c*/
      if ( v0 > 0 ) /*0x77bf3e*/
      {
        v5 = v5; /*0x77bf40*/
        v8 = v0; /*0x77bf42*/
        do /*0x77bf7d*/
        {
          v9 = *v5; /*0x77bf44*/
          if ( *v5 ) /*0x77bf44*/
          {
            do /*0x77bf77*/
            {
              v10 = dword_B77D98(v9) & ((1 << dword_B77D8C) - 1); /*0x77bf60*/
              v11 = *((unsigned int *)stru_B77D80 + v10); /*0x77bf67*/
              *((unsigned int *)stru_B77D80 + v10) = v9; /*0x77bf6a*/
              v12 = *(unsigned int *)(v9 + 112); /*0x77bf6d*/
              *(unsigned int *)(v9 + 112) = v11; /*0x77bf70*/
              v9 = v12; /*0x77bf75*/
            }
            while ( v12 ); /*0x77bf77*/
          }
          ++v5; /*0x77bf79*/
          --v8; /*0x77bf7c*/
        }
        while ( v8 ); /*0x77bf7d*/
      }
      RA2_OPDEL(v5); /*0x77bf80*/
      v4 = dword_B77DB0; /*0x77bf85*/
      v0 = dword_B77D88; /*0x77bf8b*/
    }
    while ( dword_B77D88 > (unsigned int)dword_B77DB0 ); /*0x77bf95*/
  }
  RA2_OPDEL(stru_B77D80); /*0x77bfa1*/
}
}
// 0x77C050
namespace gamemd {
void sub_77C050()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B76648; /*0x77c050*/
  for ( i = 0; i < dword_B76648; v0 = dword_B76648 ) /*0x77c05d*/
  {
    v2 = *((unsigned int *)dword_B76640 + i); /*0x77c064*/
    while ( v2 ) /*0x77c069*/
    {
      v3 = (void **)v2; /*0x77c06b*/
      v2 = v2->q048; /*0x77c06d*/
      DeleteAndZero(v3); /*0x77c076*/
      RA2_OPDEL(v3); /*0x77c07c*/
    }
    *((unsigned int *)dword_B76640 + i++) = 0; /*0x77c08f*/
  }
  v4 = dword_B76670; /*0x77c0a0*/
  dword_B76644 = 0; /*0x77c0a6*/
  if ( v0 > dword_B76670 ) /*0x77c0b2*/
  {
    do /*0x77c165*/
    {
      if ( byte_B76654 || v0 <= v4 ) /*0x77c0c8*/
        break; /*0x77c0c8*/
      v5 = (int *)dword_B76640; /*0x77c0d4*/
      v0 = v0; /*0x77c0da*/
      dword_B76648 = v0 >> 1; /*0x77c0df*/
      --dword_B7664C; /*0x77c0eb*/
      dword_B76640 = RA2_OPNEW(4 * (v0 >> 1)); /*0x77c104*/
      memset(dword_B76640, 0, 4 * dword_B76648); /*0x77c10c*/
      if ( v0 > 0 ) /*0x77c10e*/
      {
        v5 = v5; /*0x77c110*/
        v8 = v0; /*0x77c112*/
        do /*0x77c14d*/
        {
          v9 = *v5; /*0x77c114*/
          if ( *v5 ) /*0x77c114*/
          {
            do /*0x77c147*/
            {
              v10 = dword_B76658(v9) & ((1 << dword_B7664C) - 1); /*0x77c130*/
              v11 = *((unsigned int *)dword_B76640 + v10); /*0x77c137*/
              *((unsigned int *)dword_B76640 + v10) = v9; /*0x77c13a*/
              v12 = *(unsigned int *)(v9 + 72); /*0x77c13d*/
              *(unsigned int *)(v9 + 72) = v11; /*0x77c140*/
              v9 = v12; /*0x77c145*/
            }
            while ( v12 ); /*0x77c147*/
          }
          ++v5; /*0x77c149*/
          --v8; /*0x77c14c*/
        }
        while ( v8 ); /*0x77c14d*/
      }
      RA2_OPDEL(v5); /*0x77c150*/
      v4 = dword_B76670; /*0x77c155*/
      v0 = dword_B76648; /*0x77c15b*/
    }
    while ( dword_B76648 > (unsigned int)dword_B76670 ); /*0x77c165*/
  }
  RA2_OPDEL(dword_B76640); /*0x77c171*/
}
}
// 0x77C220
namespace gamemd {
void sub_77C220()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B76688; /*0x77c220*/
  for ( i = 0; i < dword_B76688; v0 = dword_B76688 ) /*0x77c22d*/
  {
    v2 = *((unsigned int *)dword_B76680 + i); /*0x77c234*/
    while ( v2 ) /*0x77c239*/
    {
      v3 = (void **)v2; /*0x77c23b*/
      v2 = v2->vtable3; /*0x77c23d*/
      DeleteAndZero(v3); /*0x77c246*/
      RA2_OPDEL(v3); /*0x77c24c*/
    }
    *((unsigned int *)dword_B76680 + i++) = 0; /*0x77c25f*/
  }
  v4 = dword_B766B0; /*0x77c270*/
  dword_B76684 = 0; /*0x77c276*/
  if ( v0 > dword_B766B0 ) /*0x77c282*/
  {
    do /*0x77c335*/
    {
      if ( byte_B76694 || v0 <= v4 ) /*0x77c298*/
        break; /*0x77c298*/
      v5 = (int *)dword_B76680; /*0x77c2a4*/
      v0 = v0; /*0x77c2aa*/
      dword_B76688 = v0 >> 1; /*0x77c2af*/
      --dword_B7668C; /*0x77c2bb*/
      dword_B76680 = RA2_OPNEW(4 * (v0 >> 1)); /*0x77c2d4*/
      memset(dword_B76680, 0, 4 * dword_B76688); /*0x77c2dc*/
      if ( v0 > 0 ) /*0x77c2de*/
      {
        v5 = v5; /*0x77c2e0*/
        v8 = v0; /*0x77c2e2*/
        do /*0x77c31d*/
        {
          v9 = *v5; /*0x77c2e4*/
          if ( *v5 ) /*0x77c2e4*/
          {
            do /*0x77c317*/
            {
              v10 = dword_B76698(v9) & ((1 << dword_B7668C) - 1); /*0x77c300*/
              v11 = *((unsigned int *)dword_B76680 + v10); /*0x77c307*/
              *((unsigned int *)dword_B76680 + v10) = v9; /*0x77c30a*/
              v12 = *(unsigned int *)(v9 + 8); /*0x77c30d*/
              *(unsigned int *)(v9 + 8) = v11; /*0x77c310*/
              v9 = v12; /*0x77c315*/
            }
            while ( v12 ); /*0x77c317*/
          }
          ++v5; /*0x77c319*/
          --v8; /*0x77c31c*/
        }
        while ( v8 ); /*0x77c31d*/
      }
      RA2_OPDEL(v5); /*0x77c320*/
      v4 = dword_B766B0; /*0x77c325*/
      v0 = dword_B76688; /*0x77c32b*/
    }
    while ( dword_B76688 > (unsigned int)dword_B766B0 ); /*0x77c335*/
  }
  RA2_OPDEL(dword_B76680); /*0x77c341*/
}
}
// 0x77C450
namespace gamemd {
void sub_77C450()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B76538; /*0x77c450*/
  for ( i = 0; i < dword_B76538; v0 = dword_B76538 ) /*0x77c45d*/
  {
    v2 = *((unsigned int *)g_WOL_ConnectionPool + i); /*0x77c464*/
    while ( v2 ) /*0x77c469*/
    {
      v3 = (void **)v2; /*0x77c46b*/
      v2 = v2->vtable3; /*0x77c46d*/
      DeleteAndZero(v3); /*0x77c476*/
      RA2_OPDEL(v3); /*0x77c47c*/
    }
    *((unsigned int *)g_WOL_ConnectionPool + i++) = 0; /*0x77c48f*/
  }
  v4 = dword_B76560; /*0x77c4a0*/
  dword_B76534 = 0; /*0x77c4a6*/
  if ( v0 > dword_B76560 ) /*0x77c4b2*/
  {
    do /*0x77c565*/
    {
      if ( byte_B76544 || v0 <= v4 ) /*0x77c4c8*/
        break; /*0x77c4c8*/
      v5 = (int *)g_WOL_ConnectionPool; /*0x77c4d4*/
      v0 = v0; /*0x77c4da*/
      dword_B76538 = v0 >> 1; /*0x77c4df*/
      --dword_B7653C; /*0x77c4eb*/
      g_WOL_ConnectionPool = RA2_OPNEW(4 * (v0 >> 1)); /*0x77c504*/
      memset(g_WOL_ConnectionPool, 0, 4 * dword_B76538); /*0x77c50c*/
      if ( v0 > 0 ) /*0x77c50e*/
      {
        v5 = v5; /*0x77c510*/
        v8 = v0; /*0x77c512*/
        do /*0x77c54d*/
        {
          v9 = *v5; /*0x77c514*/
          if ( *v5 ) /*0x77c514*/
          {
            do /*0x77c547*/
            {
              v10 = dword_B76548(v9) & ((1 << dword_B7653C) - 1); /*0x77c530*/
              v11 = *((unsigned int *)g_WOL_ConnectionPool + v10); /*0x77c537*/
              *((unsigned int *)g_WOL_ConnectionPool + v10) = v9; /*0x77c53a*/
              v12 = *(unsigned int *)(v9 + 8); /*0x77c53d*/
              *(unsigned int *)(v9 + 8) = v11; /*0x77c540*/
              v9 = v12; /*0x77c545*/
            }
            while ( v12 ); /*0x77c547*/
          }
          ++v5; /*0x77c549*/
          --v8; /*0x77c54c*/
        }
        while ( v8 ); /*0x77c54d*/
      }
      RA2_OPDEL(v5); /*0x77c550*/
      v4 = dword_B76560; /*0x77c555*/
      v0 = dword_B76538; /*0x77c55b*/
    }
    while ( dword_B76538 > (unsigned int)dword_B76560 ); /*0x77c565*/
  }
  RA2_OPDEL(g_WOL_ConnectionPool); /*0x77c571*/
}
}
// 0x77CB00
namespace gamemd {
void sub_77CB00()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B76998; /*0x77cb00*/
  for ( i = 0; i < dword_B76998; v0 = dword_B76998 ) /*0x77cb0d*/
  {
    v2 = *((unsigned int *)dword_B76990 + i); /*0x77cb14*/
    while ( v2 ) /*0x77cb19*/
    {
      v3 = (void **)v2; /*0x77cb1b*/
      v2 = v2->vtable3; /*0x77cb1d*/
      DeleteAndZero(v3); /*0x77cb26*/
      RA2_OPDEL(v3); /*0x77cb2c*/
    }
    *((unsigned int *)dword_B76990 + i++) = 0; /*0x77cb3f*/
  }
  v4 = dword_B769C0; /*0x77cb50*/
  dword_B76994 = 0; /*0x77cb56*/
  if ( v0 > dword_B769C0 ) /*0x77cb62*/
  {
    do /*0x77cc15*/
    {
      if ( byte_B769A4 || v0 <= v4 ) /*0x77cb78*/
        break; /*0x77cb78*/
      v5 = (int *)dword_B76990; /*0x77cb84*/
      v0 = v0; /*0x77cb8a*/
      dword_B76998 = v0 >> 1; /*0x77cb8f*/
      --dword_B7699C; /*0x77cb9b*/
      dword_B76990 = RA2_OPNEW(4 * (v0 >> 1)); /*0x77cbb4*/
      memset(dword_B76990, 0, 4 * dword_B76998); /*0x77cbbc*/
      if ( v0 > 0 ) /*0x77cbbe*/
      {
        v5 = v5; /*0x77cbc0*/
        v8 = v0; /*0x77cbc2*/
        do /*0x77cbfd*/
        {
          v9 = *v5; /*0x77cbc4*/
          if ( *v5 ) /*0x77cbc4*/
          {
            do /*0x77cbf7*/
            {
              v10 = dword_B769A8(v9) & ((1 << dword_B7699C) - 1); /*0x77cbe0*/
              v11 = *((unsigned int *)dword_B76990 + v10); /*0x77cbe7*/
              *((unsigned int *)dword_B76990 + v10) = v9; /*0x77cbea*/
              v12 = *(unsigned int *)(v9 + 8); /*0x77cbed*/
              *(unsigned int *)(v9 + 8) = v11; /*0x77cbf0*/
              v9 = v12; /*0x77cbf5*/
            }
            while ( v12 ); /*0x77cbf7*/
          }
          ++v5; /*0x77cbf9*/
          --v8; /*0x77cbfc*/
        }
        while ( v8 ); /*0x77cbfd*/
      }
      RA2_OPDEL(v5); /*0x77cc00*/
      v4 = dword_B769C0; /*0x77cc05*/
      v0 = dword_B76998; /*0x77cc0b*/
    }
    while ( dword_B76998 > (unsigned int)dword_B769C0 ); /*0x77cc15*/
  }
  RA2_OPDEL(dword_B76990); /*0x77cc21*/
}
}
// 0x77CCD0
namespace gamemd {
void sub_77CCD0()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_B76610; /*0x77ccd0*/
  for ( i = 0; i < dword_B76610; v0 = dword_B76610 ) /*0x77ccdd*/
  {
    v2 = *((unsigned int *)dword_B76608 + i); /*0x77cce4*/
    while ( v2 ) /*0x77cce9*/
    {
      v3 = (void **)v2; /*0x77cceb*/
      v2 = v2->q044; /*0x77cced*/
      DeleteAndZero(v3); /*0x77ccf9*/
      RA2_OPDEL(v3); /*0x77ccff*/
    }
    *((unsigned int *)dword_B76608 + i++) = 0; /*0x77cd12*/
  }
  v4 = dword_B76638; /*0x77cd23*/
  dword_B7660C = 0; /*0x77cd29*/
  if ( v0 > dword_B76638 ) /*0x77cd35*/
  {
    do /*0x77cdee*/
    {
      if ( byte_B7661C || v0 <= v4 ) /*0x77cd4b*/
        break; /*0x77cd4b*/
      v5 = (int *)dword_B76608; /*0x77cd57*/
      v0 = v0; /*0x77cd5d*/
      dword_B76610 = v0 >> 1; /*0x77cd62*/
      --dword_B76614; /*0x77cd6e*/
      dword_B76608 = RA2_OPNEW(4 * (v0 >> 1)); /*0x77cd87*/
      memset(dword_B76608, 0, 4 * dword_B76610); /*0x77cd8f*/
      if ( v0 > 0 ) /*0x77cd91*/
      {
        v5 = v5; /*0x77cd93*/
        v8 = v0; /*0x77cd95*/
        do /*0x77cdd6*/
        {
          v9 = *v5; /*0x77cd97*/
          if ( *v5 ) /*0x77cd97*/
          {
            do /*0x77cdd0*/
            {
              v10 = dword_B76620(v9) & ((1 << dword_B76614) - 1); /*0x77cdb3*/
              v11 = *((unsigned int *)dword_B76608 + v10); /*0x77cdba*/
              *((unsigned int *)dword_B76608 + v10) = v9; /*0x77cdbd*/
              v12 = *(unsigned int *)(v9 + 272); /*0x77cdc0*/
              *(unsigned int *)(v9 + 272) = v11; /*0x77cdc6*/
              v9 = v12; /*0x77cdce*/
            }
            while ( v12 ); /*0x77cdd0*/
          }
          ++v5; /*0x77cdd2*/
          --v8; /*0x77cdd5*/
        }
        while ( v8 ); /*0x77cdd6*/
      }
      RA2_OPDEL(v5); /*0x77cdd9*/
      v4 = dword_B76638; /*0x77cdde*/
      v0 = dword_B76610; /*0x77cde4*/
    }
    while ( dword_B76610 > (unsigned int)dword_B76638 ); /*0x77cdee*/
  }
  RA2_OPDEL(dword_B76608); /*0x77cdfa*/
}
}
// 0x77D3F0
namespace gamemd {
int E4Recv_77D3F0::sub_77D3F0()
{

  int v2; // ebx
  int v3; // edi
  int *p_occupant; // ebp
  void *v6; // [esp+10h] [ebp-4h] BYREF

  if ( !this ) /*0x77d3f9*/
    return 0; /*0x77d3f9*/
  v2 = *(unsigned int *)g_WindowManager.__pad_0; /*0x77d3fb*/
  unknown_libname_73(&v6); /*0x77d405*/
  v3 = 0; /*0x77d40a*/
  if ( v2 <= 0 ) /*0x77d40e*/
  {
LABEL_9:
    DeleteAndZero((ObjectClass *)&v6); /*0x77d46e*/
    return 0; /*0x77d47e*/
  }
  p_occupant = &this->occupant; /*0x77d410*/
  while ( 1 ) /*0x77d413*/
  {
    if ( v3 >= 0 && v3 < *(int *)g_WindowManager.__pad_0 ) /*0x77d41d*/
      ((String *)((String *)&v6))->Reassign((const char **)(*(unsigned int *)g_WindowManager.__pad_8 + 4 * v3)); /*0x77d42c*/
    if ( !strcmp(((String *)((String *)&v6))->GetOrEmpty(), (const char *)p_occupant) ) /*0x77d442*/
      break; /*0x77d442*/
    if ( ++v3 >= v2 ) /*0x77d46c*/
      goto LABEL_9; /*0x77d46c*/
  }
  DeleteAndZero((ObjectClass *)&v6); /*0x77d483*/
  return 1; /*0x77d477*/

}
}
// 0x77D840
namespace gamemd {
int sub_77D840()
{
  HWND Dialog; // esi
  int GameUI; // eax
  char (*v2)(); // edx

  Dialog = (HWND)CreateDialog(0xCFu, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))OnlineLobbyDlgProcWOL, 0); /*0x77d858*/
  byte_A8ED9C = 1; /*0x77d85a*/
  Timer::PumpMessages((HWND *)dword_87F770); /*0x77d861*/
  ShowWindow(Dialog, 1); /*0x77d869*/
  GameUI = Dialog::FindGameUI(); /*0x77d86f*/
  v2 = Dialog::UpdateGameUI; /*0x77d87c*/
  if ( !GameUI ) /*0x77d881*/
    v2 = Dialog::PumpMessages; /*0x77d883*/
  MessageDialogLoopAlt(Dialog, (uint8_t (*)(void))v2, 0, 1, 1); /*0x77d88a*/
  Timer::PumpMessages((HWND *)dword_87F770); /*0x77d895*/
  byte_A8ED9C = *((unsigned char *)dword_A8B230 + 13730); /*0x77d8a7*/
  return MapClass::MarkForRedraw(&dword_87F7E8, 2); /*0x77d8b7*/
}
}
// 0x77DC90
namespace gamemd {
int OpenURLWOL(INIClass * a1, int a2)
{
  FILE *v4; // esi
  HINSTANCE ExecutableA; // esi
  wchar_t *v6; // eax
  int result; // eax
  HANDLE hProcess; // ebx
  int v9; // esi
  int v10; // esi
  wchar_t *StringCSF; // eax
  DWORD ExitCode; // [esp+10h] [ebp-310h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+14h] [ebp-30Ch] BYREF
  struct _STARTUPINFOA StartupInfo; // [esp+24h] [ebp-2FCh] BYREF
  CHAR File[160]; // [esp+68h] [ebp-2B8h] BYREF
  CHAR Result[264]; // [esp+108h] [ebp-218h] BYREF
  CHAR CommandLine[272]; // [esp+210h] [ebp-110h] BYREF

  tmpnam(File); /*0x77dca3*/
  strcat(File, aHtml); /*0x77dcd2*/
  v4 = fopen(File, aW); /*0x77dce5*/
  fprintf(v4, "<title>Hi there.</title>"); /*0x77dced*/
  fclose(v4); /*0x77dcf3*/
  ExecutableA = FindExecutableA(File, 0, Result); /*0x77dd10*/
  _unlink(File); /*0x77dd17*/
  if ( (int)ExecutableA <= 32 ) /*0x77dd22*/
  {
    StringCSF = GetStringCSF(aTxtNobrowser, 0, g_Str_File_wonline_cpp, 1466); /*0x77deb0*/
    return ShowDialogConfirm(StringCSF, 0, (uint8_t (*)(void))GameLoop::Thunk, 0); /*0x77deb9*/
  }
  else if ( a2 /*0x77dd57*/
         || (v6 = GetStringCSF(aTxtLaunchbrows, 0, g_Str_File_wonline_cpp, 1398),
             result = ShowDialogConfirm(v6, 4, (uint8_t (*)(void))GameLoop::Thunk, 0),
             result == 6) )
  {
    sprintf(CommandLine, "[open] %s", a1); /*0x77dd6b*/
    memset(&StartupInfo, 0, sizeof(StartupInfo)); /*0x77dd7e*/
    StartupInfo.cb = 68; /*0x77dda6*/
    result = CreateProcessA(Result, CommandLine, 0, 0, 0, 0, 0, 0, &StartupInfo, &ProcessInformation); /*0x77ddae*/
    if ( result ) /*0x77ddb6*/
    {
      result = (int)ProcessInformation.hProcess; /*0x77ddbc*/
      hProcess = ProcessInformation.hProcess; /*0x77ddc2*/
      if ( ProcessInformation.hProcess ) /*0x77ddc4*/
      {
        v9 = 0; /*0x77ddca*/
        Game::ProcessIdle(); /*0x77ddcc*/
        WaitForInputIdle(hProcess, 0x1388u); /*0x77ddd7*/
        do /*0x77de3f*/
        {
          Game::ProcessIdle(); /*0x77dde9*/
          Sleep(0x1F4u); /*0x77ddf3*/
          GetExitCodeProcess(hProcess, &ExitCode); /*0x77ddfb*/
          if ( ExitCode != 259 ) /*0x77de05*/
            v9 = 1; /*0x77de07*/
          if ( byte_A8ED80 || GetTopWindow(0) == g_hWnd || GetForegroundWindow() == g_hWnd ) /*0x77de31*/
            v9 = 1; /*0x77de33*/
          Game::ProcessIdle(); /*0x77de38*/
        }
        while ( !v9 ); /*0x77de3f*/
        Game::ProcessIdle(); /*0x77de41*/
        if ( GetTopWindow(0) != g_hWnd ) /*0x77de54*/
        {
          Game::ProcessIdle(); /*0x77de56*/
          SetForegroundWindow(g_hWnd); /*0x77de62*/
          ShowWindow(g_hWnd, 9); /*0x77de71*/
          Game::ProcessIdle(); /*0x77de77*/
        }
        v10 = 10; /*0x77de7c*/
        do /*0x77de8b*/
        {
          Sleep(0x64u); /*0x77de83*/
          IDA_LOBYTE(result) = Game::ProcessIdle(); /*0x77de85*/
          --v10; /*0x77de8a*/
        }
        while ( v10 ); /*0x77de8b*/
      }
    }
  }
  return result; /*0x77de8d*/
}
}
// 0x77E900
namespace gamemd {
Coord * * AssignWOLPlayerSide(const char ** a1, int a2)
{
  bool v4; // zf
  const char **v5; // eax
  HWND v6; // eax
  int owningHouseIndex; // eax
  char *v8; // ebx
  int v9; // esi
  int v10; // edi
  char *v11; // eax
  int v12; // esi
  char **v13; // eax
  char v14; // bl
  int v15; // edx
  int v16; // eax
  int v17; // ebx
  unsigned int *v18; // ebp
  int v19; // eax
  int v20; // ecx
  unsigned int *v21; // esi
  bool v22; // [esp+13h] [ebp-81h]
  String v23; // [esp+14h] [ebp-80h] BYREF
  DeleteAndZero v24; // [esp+1Ch] [ebp-78h] BYREF
  unsigned char v25[108]; // [esp+28h] [ebp-6Ch] BYREF

  v4 = String::Length(a1) == 0; /*0x77e913*/
  v5 = (const char **)a1; /*0x77e915*/
  if ( v4 ) /*0x77e917*/
    v5 = (const char **)&g_WindowManager.__pad_EC[684]; /*0x77e919*/
  ((String *)((String *)&v23.q4))->AssignFromPtr(v5); /*0x77e923*/
  if ( (uint8_t)((String *)((String *)&v23.q4))->Compare((const char **)&g_WindowManager.__pad_EC[684]) && !a2 ) /*0x77e93c*/
  {
    v6 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x77e943*/
    EnablePlayerSlotControls(v6, 1u); /*0x77e94c*/
  }
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x77e951*/
  v8 = 0; /*0x77e956*/
  v9 = 0; /*0x77e958*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x77e95c*/
  {
    v10 = 0; /*0x77e95e*/
    while ( 1 ) /*0x77e960*/
    {
      if ( v10 >= 0 && v9 < owningHouseIndex ) /*0x77e966*/
        v8 = (char *)g_WOL_UserList.nextObject + v10; /*0x77e96d*/
      v11 = ((String *)((String *)&v23.q4))->GetOrEmpty_Alt(); /*0x77e978*/
      if ( !_strcmpi(v11, v8 + 36) ) /*0x77e97e*/
        break; /*0x77e97e*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x77e98a*/
      ++v9; /*0x77e98f*/
      v10 += 108; /*0x77e990*/
      if ( v9 >= g_WOL_UserList.owningHouseIndex ) /*0x77e995*/
        goto LABEL_16; /*0x77e995*/
    }
    if ( v9 != -1 ) /*0x77e99c*/
    {
      g_WOL_LoginObject.ambientSoundController[37 * v9] = a2; /*0x77e9a8*/
      DisplayRankingsWOL(0); /*0x77e9af*/
    }
  }
  LABEL_16:
  v22 = dword_B77E4C == 1; /*0x77e9b4*/
  ((String *)((String *)&v23.q4))->ToLowerCopy((char **)&v24.DeleteAndZero_field_0x04); /*0x77e9cb*/
  v12 = 0; /*0x77e9d5*/
  if ( dword_A8DA84 > 0 ) /*0x77e9d9*/
  {
    while ( 1 ) /*0x77e9e9*/
    {
      ((WideString *)((wchar_t **)&v24))->Assign((wchar_t *)dword_A8DA78[v12]); /*0x77e9e9*/
      ToWideStringCharAlt((char **)&v23, (const wchar_t **)&v24); /*0x77e9f6*/
      DeleteAndZero::Alt(&v24); /*0x77e9ff*/
      v13 = ((String *)(&v23))->ToLowerCopy((char **)&v24.DeleteAndZero_field_0x08); /*0x77ea12*/
      v14 = ((String *)((String *)v13))->Compare((const char **)&v24.DeleteAndZero_field_0x04); /*0x77ea22*/
      DeleteAndZero((ObjectClass *)&v24.DeleteAndZero_field_0x08); /*0x77ea24*/
      if ( v14 ) /*0x77ea2f*/
        break; /*0x77ea2f*/
      DeleteAndZero((ObjectClass *)&v23); /*0x77ea31*/
      if ( ++v12 >= dword_A8DA84 ) /*0x77ea3e*/
        goto LABEL_21; /*0x77ea3e*/
    }
    DeleteAndZero((ObjectClass *)&v23); /*0x77ea42*/
  }
  LABEL_21:
  if ( v12 < dword_A8DA84 ) /*0x77ea4d*/
  {
    *(unsigned int *)(dword_A8DA78[v12] + 119) = a2; /*0x77ea61*/
    if ( v22 && (dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2) && !byte_B77DEC && v12 == 1 ) /*0x77ea92*/
    {
      v15 = g_WOL_UserList.owningHouseIndex; /*0x77ea98*/
      if ( g_WOL_UserList.owningHouseIndex == 2 ) /*0x77eaa1*/
      {
        v16 = 0; /*0x77eaac*/
        *(unsigned int *)v24.__pad_0 = 0; /*0x77eab2*/
        memset(v25, 0, sizeof(v25)); /*0x77eaba*/
        v17 = 0; /*0x77eabc*/
        for ( *(unsigned int *)v23.__pad_0 = 0; ; v16 = *(unsigned int *)v23.__pad_0 ) /*0x77eabe*/
        {
          if ( v16 >= 0 && v17 < v15 ) /*0x77eace*/
            qmemcpy(v25, (char *)g_WOL_UserList.nextObject + v16, sizeof(v25)); /*0x77eae2*/
          v18 = (unsigned int *)RA2_OPNEW(0x6Cu); /*0x77eaeb*/
          v19 = *(unsigned int *)v24.__pad_0; /*0x77eaed*/
          qmemcpy(v18, v25, 0x6Cu); /*0x77eaff*/
          v20 = *(unsigned int *)v23.__pad_0; /*0x77eb01*/
          v18[8] = v19; /*0x77eb05*/
          v15 = g_WOL_UserList.owningHouseIndex; /*0x77eb08*/
          ++v17; /*0x77eb0e*/
          *(unsigned int *)v24.__pad_0 = v18; /*0x77eb14*/
          *(unsigned int *)v23.__pad_0 = v20 + 108; /*0x77eb18*/
          if ( v17 >= g_WOL_UserList.owningHouseIndex ) /*0x77eb1c*/
            break; /*0x77eb1c*/
        }
        g_WOL_GameListState = 0; /*0x77eb20*/
        g_WOL_IdleHandler = 9; /*0x77eb2a*/
        g_WOL_GameProcessState = 90; /*0x77eb34*/
        g_WOL_GameListPool = time(0); /*0x77eb43*/
        (*(void (**)(LPVOID, unsigned int *))(*(unsigned int *)ppv + 72))(ppv, v18); /*0x77eb54*/
        byte_B77DEC = 1; /*0x77eb59*/
        if ( v18 ) /*0x77eb60*/
        {
          do /*0x77eb72*/
          {
            v21 = (unsigned int *)v18[8]; /*0x77eb62*/
            RA2_OPDEL(v18); /*0x77eb66*/
            v18 = v21; /*0x77eb6e*/
          }
          while ( v21 ); /*0x77eb72*/
        }
      }
    }
    DisplayRankingsWOL(0); /*0x77eb78*/
  }
  DeleteAndZero((ObjectClass *)&v24.DeleteAndZero_field_0x04); /*0x77eb81*/
  DeleteAndZero((ObjectClass *)&v23.q4); /*0x77eb8a*/
}
}
// 0x77ED00
namespace gamemd {
void SetupLobbyPlayerSlot(CCINIClass * aP0, CCINIClass * aP1, CCINIClass * aP2, int a4, int aP1a)
{
  int v5; // edi
  int v6; // ebp
  wchar_t **v7; // esi
  char **v8; // eax
  bool v9; // bl
  HWND v11; // esi
  int v12; // ebp
  int PlayerSide; // eax
  int ResourceID2; // ebx
  LRESULT Selected; // eax
  int ResourceID3; // eax
  int ResourceID4; // eax
  int v18; // eax
  HWND DlgItem; // eax
  int ResourceID; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  HWND v24; // eax
  int v25; // ebx
  int v26; // [esp+10h] [ebp-14h] BYREF
  void *v27; // [esp+14h] [ebp-10h] BYREF
  void *v28; // [esp+18h] [ebp-Ch] BYREF
  int v29; // [esp+1Ch] [ebp-8h]
  void *v30; // [esp+20h] [ebp-4h] BYREF

  v29 = aP1; /*0x77ed0b*/
  v5 = -1; /*0x77ed10*/
  ((String *)(aP0))->ToLowerCopy((char **)&v27); /*0x77ed13*/
  v6 = 0; /*0x77ed18*/
  v7 = (wchar_t **)&dword_A8DA90; /*0x77ed1a*/
  while ( 1 ) /*0x77ed26*/
  {
    ((WideString *)((wchar_t **)&v28))->Assign(*v7); /*0x77ed26*/
    ToWideStringCharAlt((char **)&v26, (const wchar_t **)&v28); /*0x77ed33*/
    DeleteAndZero::Alt(&v28); /*0x77ed3c*/
    v8 = ((String *)((const char **)&v26))->ToLowerCopy((char **)&v30); /*0x77ed4a*/
    v9 = ((String *)((const char **)&v27))->Compare((const char **)v8); /*0x77ed5d*/
    DeleteAndZero(&v30); /*0x77ed5f*/
    if ( v9 ) /*0x77ed66*/
      break; /*0x77ed66*/
    DeleteAndZero((void **)&v26); /*0x77ed6c*/
    ++v7; /*0x77ed71*/
    ++v6; /*0x77ed74*/
    if ( (int)v7 >= (int)&dword_A8DAB0 ) /*0x77ed7b*/
      goto LABEL_6; /*0x77ed7b*/
  }
  v5 = v6; /*0x77ed83*/
  DeleteAndZero((void **)&v26); /*0x77ed85*/
  LABEL_6:
  v26 = 0; /*0x77ed8a*/
  if ( v5 == -1 ) /*0x77ed95*/
  {
    DeleteAndZero(&v27); /*0x77ed9b*/
    return 0; /*0x77eda0*/
  }
  else
  {
    v11 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x77edb6*/
    if ( !v11 ) /*0x77edba*/
      v11 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x77edc6*/
    v12 = *(&dword_A8DA90 + v5); /*0x77edc8*/
    if ( ((SessionClass *)(v12))->GetOption() != a4 ) /*0x77ede1*/
    {
      v26 = 1; /*0x77ede6*/
      ((SessionClass *)(v12))->SetOption(a4); /*0x77edea*/
    }
    if ( ((SessionClass *)(*(&dword_A8DA90 + v5)))->GetOption2() != aP1a ) /*0x77ee01*/
    {
      v26 = 1; /*0x77ee06*/
      ((SessionClass *)(v12))->SetOption2(aP1a); /*0x77ee0a*/
    }
    PlayerSide = ((SessionClass *)(*(&dword_A8DA90 + v5)))->GetPlayerSide(); /*0x77ee16*/
    if ( PlayerSide != v29 ) /*0x77ee21*/
    {
      v26 = 1; /*0x77ee2a*/
      ((SessionClass *)(v12))->SetPlayerOption(v29); /*0x77ee2e*/
      ResourceID2 = GetResourceID2CSF((void *)v5); /*0x77ee3a*/
      Selected = GetComboBoxSelected(v11, ResourceID2, -1); /*0x77ee42*/
      if ( v29 == -3 ) /*0x77ee4c*/
      {
        if ( Selected != -3 ) /*0x77ee51*/
        {
          SetupComboBoxObserver(v11, ResourceID2); /*0x77ee5b*/
          ResourceID3 = GetResourceID3CSF((void *)v5); /*0x77ee62*/
          SetupComboBoxRandomAlliance(v11, ResourceID3); /*0x77ee6b*/
          ResourceID4 = GetResourceID4CSF((void *)v5); /*0x77ee72*/
          InitComboBoxNone(v11, ResourceID4); /*0x77ee7b*/
          v18 = PlayerSlot::IndexToDlgID((void *)v5); /*0x77ee82*/
          DlgItem = GetDlgItem(v11, v18); /*0x77ee92*/
          SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x77ee99*/
          ResourceID = GetResourceIDCSF((void *)v5); /*0x77eea6*/
          FillListBox(v11, ResourceID); /*0x77eeac*/
          SetupSkirmishSpawnLocations(v11, ResourceID, 8); /*0x77eeb3*/
        }
      }
      else if ( Selected == -3 ) /*0x77eeb8*/
      {
        FillComboBoxRandomOnly(v11, ResourceID2); /*0x77eebe*/
        v21 = GetResourceID3CSF((void *)v5); /*0x77eec5*/
        FillComboBoxAllianceSlots(v11, v21); /*0x77eece*/
        v22 = GetResourceID4CSF((void *)v5); /*0x77eed5*/
        FillLobbyPlayerSlot(v11, v22); /*0x77eede*/
        v23 = PlayerSlot::IndexToDlgID((void *)v5); /*0x77eee5*/
        v24 = GetDlgItem(v11, v23); /*0x77eef5*/
        SendMessageA(v24, 0x4F1u, 0, 0); /*0x77eefc*/
        v25 = GetResourceIDCSF((void *)v5); /*0x77ef09*/
        FillComboBoxFactions(v11, v25); /*0x77ef0f*/
        SetupSkirmishSpawnLocations(v11, v25, -2); /*0x77ef1a*/
      }
      if ( ((SessionClass *)(v12))->GetPlayerSide() == -3 ) /*0x77ef29*/
        *(unsigned int *)(v12 + 107) = -1; /*0x77ef2b*/
    }
    if ( ((SessionClass *)(*(&dword_A8DA90 + v5)))->GetPlayerColor() != aP2 ) /*0x77ef44*/
      ((SessionClass *)(v12))->SetPlayerColor(aP2); /*0x77ef49*/
    if ( *(&dword_A8DA90 + v5) == *(unsigned int *)dword_A8DA78 ) /*0x77ef5d*/
      dword_A8B394 = aP2; /*0x77ef5f*/
    DisplayRankingsWOL(0); /*0x77ef69*/
    DeleteAndZero(&v27); /*0x77ef72*/
    return v26; /*0x77ef77*/
  }
}
}
// 0x77EF90
namespace gamemd {
char WOL_RequestChannelList2(int a1, unsigned char a2)
{
  int v3; // edi
  int v5; // eax
  int v6; // esi
  int v7; // ebp
  char *v8; // ebx
  void *v9; // eax
  int v10; // ebp
  void *v11; // eax
  char *v12; // ecx
  int v13; // [esp+Ch] [ebp-8h]

  v3 = a2; /*0x77ef99*/
  Debug::Log(); /*0x77efaa*/
  if ( (*(int (**)(LPVOID, int, int))(*(unsigned int *)ppv + 24))(ppv, a1, v3) ) /*0x77efbc*/
    return 0; /*0x77efc4*/
  v5 = dword_B76520; /*0x77efcb*/
  v6 = dword_B76520; /*0x77efd0*/
  v13 = dword_B76520; /*0x77efd4*/
  v7 = dword_B76524; /*0x77efe0*/
  if ( dword_B76520 < dword_B76524 ) /*0x77efe8*/
  {
    v8 = (char *)dword_B76528; /*0x77f05b*/
  }
  else
  {
    v7 = 2 * dword_B76520; /*0x77efee*/
    if ( 2 * dword_B76520 < 10 ) /*0x77eff4*/
      v7 = 10; /*0x77eff6*/
    v8 = (char *)RA2_OPNEW(4 * v7); /*0x77f00a*/
    memset(v8, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x77f018*/
    v9 = dword_B76528; /*0x77f021*/
    if ( dword_B76528 ) /*0x77f028*/
    {
      qmemcpy(v8, dword_B76528, 4 * dword_B76520); /*0x77f034*/
      v9 = dword_B76528; /*0x77f036*/
      v6 = v13; /*0x77f03b*/
    }
    RA2_OPDEL(v9); /*0x77f040*/
    v5 = dword_B76520; /*0x77f045*/
    dword_B76528 = v8; /*0x77f04d*/
    dword_B76524 = v7; /*0x77f053*/
  }
  if ( v5 >= v7 ) /*0x77f063*/
  {
    v10 = 2 * v5; /*0x77f065*/
    if ( 2 * v5 < 10 ) /*0x77f06b*/
      v10 = 10; /*0x77f06d*/
    v8 = (char *)RA2_OPNEW(4 * v10); /*0x77f081*/
    memset(v8, 0, 4 * ((unsigned int)(4 * v10) >> 2)); /*0x77f08f*/
    v11 = dword_B76528; /*0x77f098*/
    if ( dword_B76528 ) /*0x77f09f*/
    {
      qmemcpy(v8, dword_B76528, 4 * dword_B76520); /*0x77f0ab*/
      v11 = dword_B76528; /*0x77f0ad*/
      v6 = v13; /*0x77f0b2*/
    }
    RA2_OPDEL(v11); /*0x77f0b7*/
    v5 = dword_B76520; /*0x77f0bc*/
    dword_B76528 = v8; /*0x77f0c4*/
    dword_B76524 = v10; /*0x77f0ca*/
  }
  if ( v6 < v5 ) /*0x77f0d2*/
  {
    memcpy(&v8[4 * v6 + 4], &v8[4 * v6], 4 * (v5 + 0x3FFFFFFF * v6)); /*0x77f0ea*/
    v8 = (char *)dword_B76528; /*0x77f0ef*/
    v5 = dword_B76520; /*0x77f0f5*/
  }
  v12 = &v8[4 * v6]; /*0x77f0fd*/
  if ( v12 ) /*0x77f104*/
  {
    *(unsigned int *)v12 = a1; /*0x77f10a*/
    v5 = dword_B76520; /*0x77f10c*/
  }
  dword_B76520 = v5 + 1; /*0x77f113*/
  return 1; /*0x77efc3*/
}
}
// 0x77F120
namespace gamemd {
char RequestChannelListWOL()
{
  wchar_t *String; // eax
  int v1; // edi
  DWORD v2; // ebx
  wchar_t *v3; // eax
  HWND v5; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  const wchar_t *v14; // [esp+0h] [ebp-14h]
  void *v15; // [esp+10h] [ebp-4h] BYREF

  String = GetStringCSF(aTxtReqChanlist, 0, g_Str_File_wonline_cpp, 2298); /*0x77f136*/
  ((WideString *)((wchar_t **)&v15))->Assign(String); /*0x77f140*/
  ShowUIMessage(0); /*0x77f150*/
  DeleteAndZero::Alt(&v15); /*0x77f159*/
  v1 = 0; /*0x77f16a*/
  while ( 1 ) /*0x77f179*/
  {
    v2 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x77f179*/
    if ( v2 == 258 ) /*0x77f181*/
      break; /*0x77f181*/
  LABEL_5:
    if ( v2 == -1 ) /*0x77f1ad*/
    {
      v5 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x77f227*/
      if ( v5 ) /*0x77f22e*/
      {
        dword_B77DC8 &= ~1u; /*0x77f239*/
        if ( !dword_B77DC8 ) /*0x77f23f*/
          CloseDialog(v5, 0); /*0x77f245*/
      }
      Current = Dialog::GetCurrent(); /*0x77f24a*/
      DlgItem = GetDlgItem(Current, 1344); /*0x77f255*/
      if ( DlgItem ) /*0x77f25d*/
        SetFocus(DlgItem); /*0x77f260*/
      Debug::Log(aWaitformultipl); /*0x77f26b*/
      return 0; /*0x77f27a*/
    }
    if ( (v2 & 0x80u) != 0 ) /*0x77f1b2*/
      v2 -= 128; /*0x77f1b4*/
    if ( v2 >= 0x12 ) /*0x77f1bd*/
      return 0; /*0x77f1bd*/
    ResetEvent(*(&Handles + v2)); /*0x77f1cb*/
    if ( v2 == 5 || !v2 ) /*0x77f1d8*/
    {
      v8 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x77f280*/
      if ( v8 ) /*0x77f287*/
      {
        dword_B77DC8 &= ~1u; /*0x77f292*/
        if ( !dword_B77DC8 ) /*0x77f298*/
          CloseDialog(v8, 0); /*0x77f29e*/
      }
      v9 = Dialog::GetCurrent(); /*0x77f2a3*/
      v10 = GetDlgItem(v9, 1344); /*0x77f2ae*/
      if ( v10 ) /*0x77f2b6*/
        SetFocus(v10); /*0x77f2b9*/
      return 0; /*0x77f2c6*/
    }
    if ( v2 == 3 ) /*0x77f1e1*/
    {
      v11 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x77f2cc*/
      if ( v11 ) /*0x77f2d3*/
      {
        dword_B77DC8 &= ~1u; /*0x77f2de*/
        if ( !dword_B77DC8 ) /*0x77f2e4*/
          CloseDialog(v11, 0); /*0x77f2ea*/
      }
      v12 = Dialog::GetCurrent(); /*0x77f2ef*/
      v13 = GetDlgItem(v12, 1344); /*0x77f2fa*/
      if ( v13 ) /*0x77f302*/
        SetFocus(v13); /*0x77f305*/
      return 1; /*0x77f30e*/
    }
  }
  while ( 1 ) /*0x77f183*/
  {
    v1 += 100; /*0x77f183*/
    if ( v1 > 30000 ) /*0x77f18c*/
      break; /*0x77f18c*/
    Game::ProcessIdle(); /*0x77f18e*/
    v2 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x77f1a0*/
    if ( v2 != 258 ) /*0x77f1a8*/
      goto LABEL_5; /*0x77f1a8*/
  }
  v3 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 2307); /*0x77f1fa*/
  swprintf(&word_B77AD0, (const size_t)v3, v14); /*0x77f205*/
  SetEvent(Handles); /*0x77f214*/
  return 0; /*0x77f21c*/
}
}
// 0x77F320
namespace gamemd {
AbstractClass * * WOL_RequestChannelListEx(int a1, unsigned char a2, char a3)
{
  int v3; // ebx
  char result; // al
  HANDLE *v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  void *v10; // ebx
  void *v11; // eax
  int v12; // ebp
  void *v13; // ebx
  void *v14; // eax
  unsigned int *v15; // ecx
  int v16; // [esp+10h] [ebp-8h]

  v3 = a1; /*0x77f32a*/
  if ( !dword_B76520 || (result = RequestChannelListWOL()) != 0 ) /*0x77f33f*/
  {
    v6 = &Handles; /*0x77f351*/
    do /*0x77f364*/
      ResetEvent(*v6++); /*0x77f359*/
    while ( (int)v6 < (int)g_WOL_RequestObject ); /*0x77f364*/
    Debug::Log(); /*0x77f375*/
    if ( (*(int (**)(LPVOID, int, unsigned int))(*(unsigned int *)ppv + 24))(ppv, v3, a2) ) /*0x77f387*/
    {
      SetEvent(Handles); /*0x77f4fd*/
      return 0; /*0x77f503*/
    }
    else
    {
      v7 = dword_B76520; /*0x77f392*/
      v8 = dword_B76520; /*0x77f397*/
      v16 = dword_B76520; /*0x77f39b*/
      v9 = dword_B76524; /*0x77f3a5*/
      if ( dword_B76520 >= dword_B76524 ) /*0x77f3ad*/
      {
        v9 = 2 * dword_B76520; /*0x77f3b7*/
        if ( 2 * dword_B76520 < 10 ) /*0x77f3bd*/
          v9 = 10; /*0x77f3bf*/
        v10 = RA2_OPNEW(4 * v9); /*0x77f3d3*/
        memset(v10, 0, 4 * ((unsigned int)(4 * v9) >> 2)); /*0x77f3e1*/
        v11 = dword_B76528; /*0x77f3ea*/
        if ( dword_B76528 ) /*0x77f3f1*/
        {
          qmemcpy(v10, dword_B76528, 4 * dword_B76520); /*0x77f3fd*/
          v11 = dword_B76528; /*0x77f3ff*/
          v8 = v16; /*0x77f404*/
        }
        RA2_OPDEL(v11); /*0x77f409*/
        v7 = dword_B76520; /*0x77f40e*/
        dword_B76528 = v10; /*0x77f413*/
        v3 = a1; /*0x77f419*/
        dword_B76524 = v9; /*0x77f420*/
      }
      if ( v7 >= v9 ) /*0x77f428*/
      {
        v12 = 2 * v7; /*0x77f42a*/
        if ( 2 * v7 < 10 ) /*0x77f430*/
          v12 = 10; /*0x77f432*/
        v13 = RA2_OPNEW(4 * v12); /*0x77f446*/
        memset(v13, 0, 4 * ((unsigned int)(4 * v12) >> 2)); /*0x77f454*/
        v14 = dword_B76528; /*0x77f45d*/
        if ( dword_B76528 ) /*0x77f464*/
        {
          qmemcpy(v13, dword_B76528, 4 * dword_B76520); /*0x77f470*/
          v14 = dword_B76528; /*0x77f472*/
          v8 = v16; /*0x77f477*/
        }
        RA2_OPDEL(v14); /*0x77f47c*/
        v7 = dword_B76520; /*0x77f481*/
        dword_B76528 = v13; /*0x77f486*/
        v3 = a1; /*0x77f48c*/
        dword_B76524 = v12; /*0x77f493*/
      }
      if ( v8 < v7 ) /*0x77f49b*/
      {
        memcpy((char *)dword_B76528 + 4 * v8 + 4, (char *)dword_B76528 + 4 * v8, 4 * (v7 + 0x3FFFFFFF * v8)); /*0x77f4b8*/
        v7 = dword_B76520; /*0x77f4bd*/
      }
      v15 = (char *)dword_B76528 + 4 * v8; /*0x77f4cb*/
      if ( v15 ) /*0x77f4d0*/
      {
        *v15 = v3; /*0x77f4d2*/
        v7 = dword_B76520; /*0x77f4d4*/
      }
      dword_B76520 = v7 + 1; /*0x77f4da*/
      if ( a3 ) /*0x77f4e5*/
        return RequestChannelListWOL(); /*0x77f4e7*/
      else
        return 1; /*0x77f512*/
    }
  }
  return result; /*0x77f341*/
}
}
// 0x77F520
namespace gamemd {
char sub_77F520(char a1)
{
  char result; // al
  HANDLE *v2; // esi
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  void *v6; // ebp
  void *v7; // eax
  int v8; // ebx
  void *v9; // ebp
  void *v10; // eax
  unsigned int *v11; // ecx
  int v13; // [esp+Eh] [ebp-4h]

  if ( !dword_B76520 || (result = RequestChannelListWOL()) != 0 ) /*0x77f539*/
  {
    v2 = &Handles; /*0x77f547*/
    do /*0x77f55a*/
      ResetEvent(*v2++); /*0x77f54f*/
    while ( (int)v2 < (int)g_WOL_RequestObject ); /*0x77f55a*/
    Debug::Log(); /*0x77f565*/
    if ( (*(int (**)(LPVOID, unsigned int, unsigned int))(*(unsigned int *)ppv + 24))(ppv, 0, 0) ) /*0x77f579*/
    {
      SetEvent(Handles); /*0x77f6eb*/
      return 0; /*0x77f6f1*/
    }
    else
    {
      v3 = dword_B76520; /*0x77f584*/
      v4 = dword_B76520; /*0x77f589*/
      v13 = dword_B76520; /*0x77f58d*/
      v5 = dword_B76524; /*0x77f598*/
      if ( dword_B76520 >= dword_B76524 ) /*0x77f5a1*/
      {
        v5 = 2 * dword_B76520; /*0x77f5ab*/
        if ( 2 * dword_B76520 < 10 ) /*0x77f5b1*/
          v5 = 10; /*0x77f5b3*/
        v6 = RA2_OPNEW(4 * v5); /*0x77f5c7*/
        memset(v6, 0, 4 * ((unsigned int)(4 * v5) >> 2)); /*0x77f5d5*/
        v7 = dword_B76528; /*0x77f5de*/
        if ( dword_B76528 ) /*0x77f5e5*/
        {
          qmemcpy(v6, dword_B76528, 4 * dword_B76520); /*0x77f5f1*/
          v7 = dword_B76528; /*0x77f5f3*/
          v4 = v13; /*0x77f5f8*/
        }
        RA2_OPDEL(v7); /*0x77f5fd*/
        v3 = dword_B76520; /*0x77f602*/
        dword_B76528 = v6; /*0x77f60a*/
        dword_B76524 = v5; /*0x77f610*/
      }
      if ( v3 >= v5 ) /*0x77f618*/
      {
        v8 = 2 * v3; /*0x77f61a*/
        if ( 2 * v3 < 10 ) /*0x77f620*/
          v8 = 10; /*0x77f622*/
        v9 = RA2_OPNEW(4 * v8); /*0x77f636*/
        memset(v9, 0, 4 * ((unsigned int)(4 * v8) >> 2)); /*0x77f644*/
        v10 = dword_B76528; /*0x77f64d*/
        if ( dword_B76528 ) /*0x77f654*/
        {
          qmemcpy(v9, dword_B76528, 4 * dword_B76520); /*0x77f660*/
          v10 = dword_B76528; /*0x77f662*/
          v4 = v13; /*0x77f667*/
        }
        RA2_OPDEL(v10); /*0x77f66c*/
        v3 = dword_B76520; /*0x77f671*/
        dword_B76528 = v9; /*0x77f679*/
        dword_B76524 = v8; /*0x77f67f*/
      }
      if ( v4 < v3 ) /*0x77f689*/
      {
        memcpy((char *)dword_B76528 + 4 * v4 + 4, (char *)dword_B76528 + 4 * v4, 4 * (v3 + 0x3FFFFFFF * v4)); /*0x77f6a6*/
        v3 = dword_B76520; /*0x77f6ab*/
      }
      v11 = (char *)dword_B76528 + 4 * v4; /*0x77f6b9*/
      if ( v11 ) /*0x77f6be*/
      {
        *v11 = 0; /*0x77f6c0*/
        v3 = dword_B76520; /*0x77f6c6*/
      }
      dword_B76520 = v3 + 1; /*0x77f6cc*/
      if ( a1 ) /*0x77f6d7*/
        return RequestChannelListWOL(); /*0x77f6d9*/
      else
        return 1; /*0x77f6fa*/
    }
  }
  return result; /*0x77f53b*/
}
}
// 0x77F710
namespace gamemd {
char sub_77F710(unsigned char a1, char a2)
{
  char result; // al
  HANDLE *v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // ebx
  void *v8; // ebp
  void *v9; // eax
  int v10; // ebx
  void *v11; // ebp
  void *v12; // eax
  unsigned int *v13; // ecx
  int v15; // [esp+10h] [ebp-4h]

  if ( !dword_B76520 || (result = RequestChannelListWOL()) != 0 ) /*0x77f72c*/
  {
    v4 = &Handles; /*0x77f73b*/
    do /*0x77f74e*/
      ResetEvent(*v4++); /*0x77f743*/
    while ( (int)v4 < (int)g_WOL_RequestObject ); /*0x77f74e*/
    Debug::Log(); /*0x77f760*/
    if ( (*(int (**)(LPVOID, int, unsigned int))(*(unsigned int *)ppv + 24))(ppv, 41, a1) ) /*0x77f773*/
    {
      SetEvent(Handles); /*0x77f8e4*/
      return 0; /*0x77f8ea*/
    }
    else
    {
      v5 = dword_B76520; /*0x77f77e*/
      v6 = dword_B76520; /*0x77f783*/
      v15 = dword_B76520; /*0x77f787*/
      v7 = dword_B76524; /*0x77f791*/
      if ( dword_B76520 >= dword_B76524 ) /*0x77f79a*/
      {
        v7 = 2 * dword_B76520; /*0x77f7a4*/
        if ( 2 * dword_B76520 < 10 ) /*0x77f7aa*/
          v7 = 10; /*0x77f7ac*/
        v8 = RA2_OPNEW(4 * v7); /*0x77f7c0*/
        memset(v8, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x77f7ce*/
        v9 = dword_B76528; /*0x77f7d7*/
        if ( dword_B76528 ) /*0x77f7de*/
        {
          qmemcpy(v8, dword_B76528, 4 * dword_B76520); /*0x77f7ea*/
          v9 = dword_B76528; /*0x77f7ec*/
          v6 = v15; /*0x77f7f1*/
        }
        RA2_OPDEL(v9); /*0x77f7f6*/
        v5 = dword_B76520; /*0x77f7fb*/
        dword_B76528 = v8; /*0x77f803*/
        dword_B76524 = v7; /*0x77f809*/
      }
      if ( v5 >= v7 ) /*0x77f811*/
      {
        v10 = 2 * v5; /*0x77f813*/
        if ( 2 * v5 < 10 ) /*0x77f819*/
          v10 = 10; /*0x77f81b*/
        v11 = RA2_OPNEW(4 * v10); /*0x77f82f*/
        memset(v11, 0, 4 * ((unsigned int)(4 * v10) >> 2)); /*0x77f83d*/
        v12 = dword_B76528; /*0x77f846*/
        if ( dword_B76528 ) /*0x77f84d*/
        {
          qmemcpy(v11, dword_B76528, 4 * dword_B76520); /*0x77f859*/
          v12 = dword_B76528; /*0x77f85b*/
          v6 = v15; /*0x77f860*/
        }
        RA2_OPDEL(v12); /*0x77f865*/
        v5 = dword_B76520; /*0x77f86a*/
        dword_B76528 = v11; /*0x77f872*/
        dword_B76524 = v10; /*0x77f878*/
      }
      if ( v6 < v5 ) /*0x77f881*/
      {
        memcpy((char *)dword_B76528 + 4 * v6 + 4, (char *)dword_B76528 + 4 * v6, 4 * (v5 + 0x3FFFFFFF * v6)); /*0x77f89e*/
        v5 = dword_B76520; /*0x77f8a3*/
      }
      v13 = (char *)dword_B76528 + 4 * v6; /*0x77f8b1*/
      if ( v13 ) /*0x77f8b6*/
      {
        *v13 = 41; /*0x77f8b8*/
        v5 = dword_B76520; /*0x77f8be*/
      }
      dword_B76520 = v5 + 1; /*0x77f8c4*/
      if ( a2 ) /*0x77f8cf*/
        return RequestChannelListWOL(); /*0x77f8d1*/
      else
        return 1; /*0x77f8f5*/
    }
  }
  return result; /*0x77f72e*/
}
}
// 0x770060
namespace gamemd {
int sub_770060()
{
  dword_B72B98 = 0; /*0x770062*/
  dword_B72B9C = 0; /*0x770067*/
  dword_B72BA0 = 0; /*0x77006c*/
  dword_B72BA4 = 0; /*0x770071*/
  return 0; /*0x770076*/
}
} // namespace gamemd

// 0x770080
namespace gamemd {
void sub_770080()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x77008c*/
  dbl_B72BB0 = Math::Sqrt(v0 + v0); /*0x77009e*/
}
} // namespace gamemd

// 0x7700B0
namespace gamemd {
void sub_7700B0()
{
  dbl_B72C00 = dbl_B72BB0 / 60.0; /*0x7700bc*/
}
} // namespace gamemd

// 0x7700D0
namespace gamemd {
void sub_7700D0()
{
  dbl_B72BE8 = 1.0 / dbl_B72C00; /*0x7700dc*/
}
} // namespace gamemd

// 0x7700F0
namespace gamemd {
void sub_7700F0()
{
  dbl_B72BE0 = 0.0174532925199433 * 45.0; /*0x7700fc*/
}
} // namespace gamemd

// 0x770110
namespace gamemd {
void sub_770110()
{
  dbl_B72BB8 = 0.0174532925199433 * 60.0; /*0x77011c*/
}
} // namespace gamemd

// 0x770130
namespace gamemd {
void sub_770130()
{
  dbl_B72B90 = 0.0174532925199433 * 90.0; /*0x77013c*/
}
} // namespace gamemd

// 0x770150
namespace gamemd {
long long sub_770150()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B72B90 - dbl_B72BB8); /*0x770162*/
  result = Math::RoundToInt(v0 * dbl_B72BB0 * 0.5); /*0x770176*/
  dword_B72C08 = result; /*0x77017b*/
  return result; /*0x770180*/
}
} // namespace gamemd

// 0x770190
namespace gamemd {
void sub_770190()
{
  dbl_B72BC0 = Math::ArcTan((double)dword_B72C08 * 0.00390625); /*0x7701a7*/
}
} // namespace gamemd

// 0x7701C0
namespace gamemd {
void sub_7701C0()
{
  dbl_B72BD8 = Math::ArcTan((double)(2 * dword_B72C08) / dbl_B72BB0); /*0x7701e2*/
}
} // namespace gamemd

// 0x7701F0
namespace gamemd {
long long sub_7701F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72C08) + 0.5); /*0x77020b*/
  dword_B72BFC = result; /*0x770210*/
  return result; /*0x770216*/
}
} // namespace gamemd

// 0x770220
namespace gamemd {
int sub_770220()
{
  word_B72BA8 = 0; /*0x770222*/
  word_B72BAA = 0; /*0x770228*/
  return 0; /*0x77022e*/
}
} // namespace gamemd

// 0x770230
namespace gamemd {
int sub_770230()
{
  dword_B72BC8 = 0; /*0x770232*/
  dword_B72BCC = 0; /*0x770237*/
  dword_B72BD0 = 0; /*0x77023c*/
  return 0; /*0x770241*/
}
} // namespace gamemd

// 0x770250
namespace gamemd {
int sub_770250()
{
  dword_B72BF8 = 0; /*0x770255*/
  dword_B72BF0 = 128; /*0x77025f*/
  dword_B72BF4 = 128; /*0x770264*/
  return 128; /*0x770269*/
}
} // namespace gamemd

// 0x770850
namespace gamemd {
void E4Recv_770850::sub_770850(unsigned int * a1, char ** a2, int a4, ObjectClass * aP4)
{

  char **v6; // eax
  int v7; // eax
  char *v8; // esi
  int i; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  char **v16; // [esp-4h] [ebp-14h]
  String v17; // [esp+8h] [ebp-8h] BYREF

  v16 = (char **)aP4; /*0x77085b*/
  v6 = ((StaticString *)((StaticString *)this->AbstractClass))->Factory(); /*0x77085e*/
  ConcatStringAlloc((char **)&v17.m_3[1], (const char **)v6, v16); /*0x770869*/
  unknown_libname_73(&v17); /*0x770872*/
  ((String *)((String *)&aP4))->Assign(&g_INI_DefaultBuffer); /*0x770880*/
  ((INIClass *)((INIClass *)a1))->ReadString(a2, (char **)&v17.m_3[1], (char **)&aP4, (int)&v17); /*0x77089d*/
  DeleteAndZero((ObjectClass *)&aP4); /*0x7708a6*/
  v7 = *((unsigned int *)this + 6 * a4 + 223); /*0x7708b2*/
  v8 = (char *)this + 24 * a4 + 892; /*0x7708b9*/
  (*(void (**)(char *))(v7 + 12))(v8); /*0x7708c2*/
  unknown_libname_73(&aP4); /*0x7708c9*/
  for ( i = String::Tokenize(&v17, 0, Str, (void **)&aP4); i != -1; i = String::Tokenize(&v17, i, Str, (void **)&aP4) ) /*0x7708e8*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&aP4); /*0x7708ef*/
    v10 = *((unsigned int *)v8 + 2); /*0x7708f4*/
    v12 = v11; /*0x7708f7*/
    if ( *((unsigned int *)v8 + 4) >= v10 ) /*0x7708fc*/
    {
      if ( !v8[13] && v10 ) /*0x770907*/
        continue; /*0x770907*/
      v13 = *((unsigned int *)v8 + 5); /*0x770909*/
      if ( v13 <= 0 || !(*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)v8 + 8))(v8, v10 + v13, 0) ) /*0x770919*/
        continue; /*0x770919*/
    }
    v14 = *((unsigned int *)v8 + 4); /*0x770920*/
    v15 = *((unsigned int *)v8 + 1); /*0x770923*/
    *((unsigned int *)v8 + 4) = v14 + 1; /*0x770929*/
    *(unsigned int *)(v15 + 4 * v14) = v12; /*0x77092c*/
  }
  DeleteAndZero((ObjectClass *)&aP4); /*0x77094f*/
  DeleteAndZero((ObjectClass *)&v17); /*0x770958*/
  DeleteAndZero((ObjectClass *)&v17.m_3[1]); /*0x770961*/

}
} // namespace gamemd

// 0x770970
namespace gamemd {
char E4Recv_770970::sub_770970(int a2, int a3, void ** a4)
{

  void **v4; // ebx
  void *vtable0; // edi
  void **v6; // esi
  int v7; // eax
  int v9; // eax
  int v10; // edx
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  char **v14; // eax
  void *v15; // [esp+Ch] [ebp-4h] BYREF

  v4 = a4; /*0x770976*/
  vtable0 = this->AbstractClass; /*0x77097f*/
  v6 = &((unsigned int *)this)[0] + 37 * a2 + 12 * a3; /*0x770990*/
  DeleteAndZero::Alt2((DeleteAndZero *)a4); /*0x770996*/
  v7 = (int)v6[4]; /*0x77099b*/
  if ( v7 <= 0 ) /*0x7709a0*/
    return 0; /*0x7709a4*/
  if ( v7 == 1 ) /*0x7709ae*/
    v9 = 0; /*0x7709b0*/
  else
    v9 = Random::Range(&Randomizer_Global, 0, v7 - 1); /*0x7709bd*/
  v10 = *((unsigned int *)v6[1] + v9); /*0x7709ca*/
  if ( vtable0 == (void *)3 ) /*0x7709cd*/
  {
    v11 = FormatStringInt((char **)&a3, v10, 2); /*0x7709d3*/
    v12 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Soviet, v11); /*0x7709e2*/
    ((String *)((String *)v4))->Reassign((const char **)v12); /*0x7709ea*/
    DeleteAndZero((ObjectClass *)&a2); /*0x7709f3*/
    DeleteAndZero((ObjectClass *)&a3); /*0x7709fc*/
  }
  else
  {
    v13 = FormatStringInt((char **)&v15, v10, 2); /*0x770a0e*/
    v14 = ProcessStringAndCopy((char **)&a4, g_Str_WWD_Allied, v13); /*0x770a1d*/
    ((String *)((String *)v4))->Reassign((const char **)v14); /*0x770a25*/
    DeleteAndZero((ObjectClass *)&a4); /*0x770a2e*/
    DeleteAndZero((ObjectClass *)&v15); /*0x770a37*/
  }
  return 1; /*0x7709a2*/

}
} // namespace gamemd

// 0x770A50
namespace gamemd {
char E4Recv_770A50::sub_770A50(int a2, int a3, void ** a4)
{

  void **v4; // ebx
  void *vtable0; // edi
  void **v6; // esi
  int v7; // eax
  int v9; // eax
  int v10; // edx
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  char **v14; // eax
  void *v15; // [esp+Ch] [ebp-4h] BYREF

  v4 = a4; /*0x770a56*/
  vtable0 = this->AbstractClass; /*0x770a5f*/
  v6 = &((unsigned int *)this)[0] + 37 * a2 + 12 * a3; /*0x770a70*/
  DeleteAndZero::Alt2((DeleteAndZero *)a4); /*0x770a76*/
  v7 = (int)v6[4]; /*0x770a7b*/
  if ( v7 <= 0 ) /*0x770a80*/
    return 0; /*0x770a84*/
  if ( v7 == 1 ) /*0x770a8e*/
    v9 = 0; /*0x770a90*/
  else
    v9 = Random::Range(&Randomizer_Global, 0, v7 - 1); /*0x770a9d*/
  v10 = *((unsigned int *)v6[1] + v9); /*0x770aaa*/
  if ( vtable0 == (void *)3 ) /*0x770aad*/
  {
    v11 = FormatStringInt((char **)&a3, v10, 2); /*0x770ab3*/
    v12 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Soviet, v11); /*0x770ac2*/
    ((String *)((String *)v4))->Reassign((const char **)v12); /*0x770aca*/
    DeleteAndZero((ObjectClass *)&a2); /*0x770ad3*/
    DeleteAndZero((ObjectClass *)&a3); /*0x770adc*/
  }
  else
  {
    v13 = FormatStringInt((char **)&v15, v10, 2); /*0x770aee*/
    v14 = ProcessStringAndCopy((char **)&a4, g_Str_WWD_Allied, v13); /*0x770afd*/
    ((String *)((String *)v4))->Reassign((const char **)v14); /*0x770b05*/
    DeleteAndZero((ObjectClass *)&a4); /*0x770b0e*/
    DeleteAndZero((ObjectClass *)&v15); /*0x770b17*/
  }
  return 1; /*0x770a82*/

}
} // namespace gamemd

// 0x770B30
namespace gamemd {
char E4Recv_770B30::sub_770B30(int a2, void ** a3)
{

  void **v3; // ebx
  void *vtable0; // edi
  char *v5; // esi
  int v6; // eax
  int v8; // eax
  int v9; // edx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  void *v14; // [esp+Ch] [ebp-8h] BYREF
  void *v15; // [esp+10h] [ebp-4h] BYREF

  v3 = a3; /*0x770b38*/
  vtable0 = this->AbstractClass; /*0x770b41*/
  v5 = (char *)this + 24 * a2 + 892; /*0x770b43*/
  DeleteAndZero::Alt2((DeleteAndZero *)a3); /*0x770b4c*/
  v6 = *((unsigned int *)v5 + 4); /*0x770b51*/
  if ( v6 <= 0 ) /*0x770b56*/
    return 0; /*0x770b5a*/
  if ( v6 == 1 ) /*0x770b66*/
    v8 = 0; /*0x770b68*/
  else
    v8 = Random::Range(&Randomizer_Global, 0, v6 - 1); /*0x770b75*/
  v9 = *(unsigned int *)(*((unsigned int *)v5 + 1) + 4 * v8); /*0x770b82*/
  if ( vtable0 == (void *)3 ) /*0x770b85*/
  {
    v10 = FormatStringInt((char **)&a3, v9, 2); /*0x770b8b*/
    v11 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Soviet, v10); /*0x770b9a*/
    ((String *)((String *)v3))->Reassign((const char **)v11); /*0x770ba2*/
    DeleteAndZero((ObjectClass *)&a2); /*0x770bab*/
    DeleteAndZero((ObjectClass *)&a3); /*0x770bb4*/
  }
  else
  {
    v12 = FormatStringInt((char **)&v15, v9, 2); /*0x770bc8*/
    v13 = ProcessStringAndCopy((char **)&v14, g_Str_WWD_Allied, v12); /*0x770bd7*/
    ((String *)((String *)v3))->Reassign((const char **)v13); /*0x770bdf*/
    DeleteAndZero((ObjectClass *)&v14); /*0x770be8*/
    DeleteAndZero((ObjectClass *)&v15); /*0x770bf1*/
  }
  return 1; /*0x770b58*/

}
} // namespace gamemd

// 0x770D70
namespace gamemd {
void sub_770D70(const char ** a1, unsigned int * a2)
{
  int i; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // edx
  void *v11; // [esp+Ch] [ebp-4h] BYREF

  (*(void (**)(unsigned int *))(*a2 + 12))(a2); /*0x770d7c*/
  unknown_libname_73(&v11); /*0x770d83*/
  for ( i = String::Tokenize(a1, 0, Str, &v11); i != -1; i = String::Tokenize(a1, i, Str, &v11) ) /*0x770da0*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&v11); /*0x770da7*/
    v5 = a2[2]; /*0x770dac*/
    v7 = v6; /*0x770daf*/
    if ( a2[4] >= v5 ) /*0x770db4*/
    {
      if ( !*((unsigned char *)a2 + 13) && v5 ) /*0x770dbf*/
        continue; /*0x770dbf*/
      v8 = a2[5]; /*0x770dc1*/
      if ( v8 <= 0 || !(*(uint8_t (**)(unsigned int *, int, unsigned int))(*a2 + 8))(a2, v5 + v8, 0) ) /*0x770dd1*/
        continue; /*0x770dd1*/
    }
    v9 = a2[4]; /*0x770dd8*/
    v10 = a2[1]; /*0x770ddb*/
    a2[4] = v9 + 1; /*0x770de1*/
    *(unsigned int *)(v10 + 4 * v9) = v7; /*0x770de4*/
  }
  DeleteAndZero((ObjectClass *)&v11); /*0x770e05*/
}
} // namespace gamemd

// 0x770F10
namespace gamemd {
char E4Recv_770F10::sub_770F10(int a2, int a3, void ** a4)
{

  void **v4; // edi
  void **v5; // esi
  int v6; // eax
  int v8; // eax
  int v9; // edx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  void *v14; // [esp+8h] [ebp-4h] BYREF

  v4 = a4; /*0x770f17*/
  v5 = &((unsigned int *)this)[0] + 12 * a3; /*0x770f21*/
  DeleteAndZero::Alt2((DeleteAndZero *)a4); /*0x770f27*/
  v6 = (int)v5[4]; /*0x770f2c*/
  if ( v6 <= 0 ) /*0x770f31*/
    return 0; /*0x770f34*/
  if ( v6 == 1 ) /*0x770f3e*/
    v8 = 0; /*0x770f40*/
  else
    v8 = Random::Range(&Randomizer_Global, 0, v6 - 1); /*0x770f4d*/
  v9 = *((unsigned int *)v5[1] + v8); /*0x770f57*/
  if ( a2 == 3 ) /*0x770f61*/
  {
    v10 = FormatStringInt((char **)&a4, v9, 2); /*0x770f67*/
    v11 = ProcessStringAndCopy((char **)&a3, g_Str_WWD_Soviet, v10); /*0x770f76*/
    ((String *)((String *)v4))->Reassign((const char **)v11); /*0x770f7e*/
    DeleteAndZero((ObjectClass *)&a3); /*0x770f87*/
    DeleteAndZero((ObjectClass *)&a4); /*0x770f90*/
  }
  else
  {
    v12 = FormatStringInt((char **)&v14, v9, 2); /*0x770fa1*/
    v13 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Allied, v12); /*0x770fb0*/
    ((String *)((String *)v4))->Reassign((const char **)v13); /*0x770fb8*/
    DeleteAndZero((ObjectClass *)&a2); /*0x770fc1*/
    DeleteAndZero((ObjectClass *)&v14); /*0x770fca*/
  }
  return 1; /*0x770f33*/

}
} // namespace gamemd

// 0x770FE0
namespace gamemd {
char E4Recv_770FE0::sub_770FE0(int a2, int a3, void ** a4)
{

  void **v4; // edi
  int *v5; // esi
  int v6; // eax
  int v8; // eax
  int v9; // edx
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  void *v14; // [esp+8h] [ebp-4h] BYREF

  v4 = a4; /*0x770fe7*/
  v5 = &((unsigned int *)this)[0] + 12 * a3; /*0x770ff1*/
  DeleteAndZero::Alt2((DeleteAndZero *)a4); /*0x770ff7*/
  v6 = v5[4]; /*0x770ffc*/
  if ( v6 <= 0 ) /*0x771001*/
    return 0; /*0x771004*/
  if ( v6 == 1 ) /*0x77100e*/
    v8 = 0; /*0x771010*/
  else
    v8 = Random::Range(&Randomizer_Global, 0, v6 - 1); /*0x77101d*/
  v9 = *(unsigned int *)(v5[1] + 4 * v8); /*0x771027*/
  if ( a2 == 3 ) /*0x771031*/
  {
    v10 = FormatStringInt((char **)&a4, v9, 2); /*0x771037*/
    v11 = ProcessStringAndCopy((char **)&a3, g_Str_WWD_Soviet, v10); /*0x771046*/
    ((String *)((String *)v4))->Reassign((const char **)v11); /*0x77104e*/
    DeleteAndZero((ObjectClass *)&a3); /*0x771057*/
    DeleteAndZero((ObjectClass *)&a4); /*0x771060*/
  }
  else
  {
    v12 = FormatStringInt((char **)&v14, v9, 2); /*0x771071*/
    v13 = ProcessStringAndCopy((char **)&a2, g_Str_WWD_Allied, v12); /*0x771080*/
    ((String *)((String *)v4))->Reassign((const char **)v13); /*0x771088*/
    DeleteAndZero((ObjectClass *)&a2); /*0x771091*/
    DeleteAndZero((ObjectClass *)&v14); /*0x77109a*/
  }
  return 1; /*0x771003*/

}
} // namespace gamemd

// 0x771710
namespace gamemd {
int E4Recv_771710::sub_771710()
{

  int v2; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // edx
  int result; // eax

  v2 = *(unsigned int *)this->isUseless; /*0x771720*/
  v3 = v2 - 1; /*0x771722*/
  if ( v2 > this->targetLaserTimer[0] ) /*0x771725*/
  {
    do /*0x771768*/
    {
      v4 = *(unsigned int *)this->isUseless; /*0x771728*/
      if ( v3 < v4 ) /*0x771730*/
      {
        v5 = v4 - 1; /*0x771732*/
        v6 = v3; /*0x771733*/
        for ( *(unsigned int *)this->isUseless = v5; v6 < *(unsigned int *)this->isUseless; ++v6 ) /*0x77173d*/
          String::Reassign( /*0x77174d*/
            (String *)(this->targetLaserTimer[2] + 4 * v6),
            (const char **)(this->targetLaserTimer[2] + 4 * v6 + 4));
      }
      v7 = v3--; /*0x771763*/
    }
    while ( v7 > this->targetLaserTimer[0] ); /*0x771768*/
  }
  result = this->targetLaserTimer[0]; /*0x77176b*/
  if ( !result ) /*0x771773*/
    LOBYTE(this->currentBurstIndex) = 1; /*0x771775*/
  return result; /*0x77177c*/

}
} // namespace gamemd

// 0x771780
namespace gamemd {
void nullsub_259()
{
  ; /*0x771780*/
}
} // namespace gamemd

// 0x771790
namespace gamemd {
void nullsub_260()
{
  ; /*0x771790*/
}
} // namespace gamemd

// 0x7717A0
namespace gamemd {
DWORD E4Recv_7717A0::sub_7717A0()
{

  DWORD result; // eax
  int *v3; // esi
  int v4; // [esp+8h] [ebp-8h]

  if ( *(int *)this->isUseless > 0 ) /*0x7717ae*/
  {
    StopThemeClass(1); /*0x7717b2*/
    (*(void (**)(int *))(this->targetLaserTimer[1] + 12))(&this->targetLaserTimer[1]); /*0x7717c3*/
  }
  result = TimerGetTicks(); /*0x7717ca*/
  v3 = &this->secondaryFacing[3]; /*0x7717d5*/
  *v3 = result; /*0x7717db*/
  v3[1] = v4; /*0x7717dd*/
  v3[2] = 0; /*0x7717e0*/
  return result; /*0x7717e3*/

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

  *((unsigned int *)this + 1) = 0; /*0x771859*/
  *((unsigned int *)this + 2) = 0; /*0x77185c*/
  *((unsigned char *)this + 12) = 0; /*0x77185f*/
  *((unsigned int *)this + 4) = TimerGetTicks(); /*0x771867*/
  *((unsigned int *)this + 6) = 0; /*0x77186e*/
  *((unsigned int *)this + 7) = a2; /*0x771871*/
  *this = &WorldDominationTour::Voices::vt_Anim; /*0x771874*/
  return this; /*0x77187c*/

}
} // namespace gamemd

// 0x7719E0
namespace gamemd {
int E4Recv_7719E0::sub_7719E0()
{

  this->IsInitialized = 1; /*0x7719e2*/
  this->Items = 0; /*0x7719e6*/
  this->Capacity = 0; /*0x7719e9*/
  this->IsAllocated = 0; /*0x7719ec*/
  *(unsigned int *)this->__pad_0 = &vt_DynamicVectorClass; /*0x7719ef*/
  this->CapacityIncrement[0] = 10; /*0x7719f5*/
  this->Count = 0; /*0x7719fc*/
  return 0; /*0x7719ff*/

}
} // namespace gamemd

// 0x771A00
namespace gamemd {
void E4Recv_771A00::sub_771A00()
{

  void *Items; // eax

  Items = this->Items; /*0x771a06*/
  this->vtable1 = &vt_VectorClass; /*0x771a09*/
  if ( Items && this->IsAllocated ) /*0x771a13*/
  {
    __3_YAXPAX_Z(Items); /*0x771a19*/
    this->Items = 0; /*0x771a21*/
  }
  this->IsAllocated = 0; /*0x771a24*/
  this->Capacity = 0; /*0x771a27*/

}
} // namespace gamemd

// 0x771A60
namespace gamemd {
void sub_771A60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x771a6c*/
  dbl_B72C30 = Math::Sqrt(v0 + v0); /*0x771a7e*/
}
} // namespace gamemd

// 0x771A90
namespace gamemd {
void sub_771A90()
{
  dbl_B72C80 = dbl_B72C30 / 60.0; /*0x771a9c*/
}
} // namespace gamemd

// 0x771AB0
namespace gamemd {
void sub_771AB0()
{
  dbl_B72C68 = 1.0 / dbl_B72C80; /*0x771abc*/
}
} // namespace gamemd

// 0x771AD0
namespace gamemd {
void sub_771AD0()
{
  dbl_B72C60 = 0.0174532925199433 * 45.0; /*0x771adc*/
}
} // namespace gamemd

// 0x771AF0
namespace gamemd {
void sub_771AF0()
{
  dbl_B72C38 = 0.0174532925199433 * 60.0; /*0x771afc*/
}
} // namespace gamemd

// 0x771B10
namespace gamemd {
void sub_771B10()
{
  dbl_B72C10 = 0.0174532925199433 * 90.0; /*0x771b1c*/
}
} // namespace gamemd

// 0x771B30
namespace gamemd {
long long sub_771B30()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B72C10 - dbl_B72C38); /*0x771b42*/
  result = Math::RoundToInt(v0 * dbl_B72C30 * 0.5); /*0x771b56*/
  dword_B72C88 = result; /*0x771b5b*/
  return result; /*0x771b60*/
}
} // namespace gamemd

// 0x771B70
namespace gamemd {
void sub_771B70()
{
  dbl_B72C40 = Math::ArcTan((double)dword_B72C88 * 0.00390625); /*0x771b87*/
}
} // namespace gamemd

// 0x771BA0
namespace gamemd {
void sub_771BA0()
{
  dbl_B72C58 = Math::ArcTan((double)(2 * dword_B72C88) / dbl_B72C30); /*0x771bc2*/
}
} // namespace gamemd

// 0x771BD0
namespace gamemd {
long long sub_771BD0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72C88) + 0.5); /*0x771beb*/
  dword_B72C7C = result; /*0x771bf0*/
  return result; /*0x771bf6*/
}
} // namespace gamemd

// 0x771C00
namespace gamemd {
int sub_771C00()
{
  word_B72C28 = 0; /*0x771c02*/
  word_B72C2A = 0; /*0x771c08*/
  return 0; /*0x771c0e*/
}
} // namespace gamemd

// 0x771C10
namespace gamemd {
int sub_771C10()
{
  dword_B72C48 = 0; /*0x771c12*/
  dword_B72C4C = 0; /*0x771c17*/
  dword_B72C50 = 0; /*0x771c1c*/
  return 0; /*0x771c21*/
}
} // namespace gamemd

// 0x771C30
namespace gamemd {
int sub_771C30()
{
  dword_B72C78 = 0; /*0x771c35*/
  dword_B72C70 = 128; /*0x771c3f*/
  dword_B72C74 = 128; /*0x771c44*/
  return 128; /*0x771c49*/
}
} // namespace gamemd

// 0x771C50
namespace gamemd {
int sub_771C50()
{
  dword_B72C18 = 0; /*0x771c52*/
  dword_B72C1C = 0; /*0x771c57*/
  dword_B72C20 = 0; /*0x771c5c*/
  dword_B72C24 = 0; /*0x771c61*/
  return 0; /*0x771c66*/
}
} // namespace gamemd

// 0x773240
namespace gamemd {
int sub_773240()
{
  dword_B72C98 = 0; /*0x773242*/
  dword_B72C9C = 0; /*0x773247*/
  dword_B72CA0 = 0; /*0x77324c*/
  dword_B72CA4 = 0; /*0x773251*/
  return 0; /*0x773256*/
}
} // namespace gamemd

// 0x773260
namespace gamemd {
void sub_773260()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x77326c*/
  dbl_B72CB0 = Math::Sqrt(v0 + v0); /*0x77327e*/
}
} // namespace gamemd

// 0x773290
namespace gamemd {
void sub_773290()
{
  dbl_B72D00 = dbl_B72CB0 / 60.0; /*0x77329c*/
}
} // namespace gamemd

// 0x7732B0
namespace gamemd {
void sub_7732B0()
{
  dbl_B72CE8 = 1.0 / dbl_B72D00; /*0x7732bc*/
}
} // namespace gamemd

// 0x7732D0
namespace gamemd {
void sub_7732D0()
{
  dbl_B72CE0 = 0.0174532925199433 * 45.0; /*0x7732dc*/
}
} // namespace gamemd

// 0x7732F0
namespace gamemd {
void sub_7732F0()
{
  dbl_B72CB8 = 0.0174532925199433 * 60.0; /*0x7732fc*/
}
} // namespace gamemd

// 0x773310
namespace gamemd {
void sub_773310()
{
  dbl_B72C90 = 0.0174532925199433 * 90.0; /*0x77331c*/
}
} // namespace gamemd

// 0x773330
namespace gamemd {
long long sub_773330()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B72C90 - dbl_B72CB8); /*0x773342*/
  result = Math::RoundToInt(v0 * dbl_B72CB0 * 0.5); /*0x773356*/
  dword_B72D08 = result; /*0x77335b*/
  return result; /*0x773360*/
}
} // namespace gamemd

// 0x773370
namespace gamemd {
void sub_773370()
{
  dbl_B72CC0 = Math::ArcTan((double)dword_B72D08 * 0.00390625); /*0x773387*/
}
} // namespace gamemd

// 0x7733A0
namespace gamemd {
void sub_7733A0()
{
  dbl_B72CD8 = Math::ArcTan((double)(2 * dword_B72D08) / dbl_B72CB0); /*0x7733c2*/
}
} // namespace gamemd

// 0x7733D0
namespace gamemd {
long long sub_7733D0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B72D08) + 0.5); /*0x7733eb*/
  dword_B72CFC = result; /*0x7733f0*/
  return result; /*0x7733f6*/
}
} // namespace gamemd

// 0x773400
namespace gamemd {
int sub_773400()
{
  word_B72CA8 = 0; /*0x773402*/
  word_B72CAA = 0; /*0x773408*/
  return 0; /*0x77340e*/
}
} // namespace gamemd

// 0x773410
namespace gamemd {
int sub_773410()
{
  dword_B72CC8 = 0; /*0x773412*/
  dword_B72CCC = 0; /*0x773417*/
  dword_B72CD0 = 0; /*0x77341c*/
  return 0; /*0x773421*/
}
} // namespace gamemd

// 0x773430
namespace gamemd {
int sub_773430()
{
  dword_B72CF8 = 0; /*0x773435*/
  dword_B72CF0 = 128; /*0x77343f*/
  dword_B72CF4 = 128; /*0x773444*/
  return 128; /*0x773449*/
}
} // namespace gamemd

// 0x773450
namespace gamemd {
unsigned int * sub_773450(int a1, int a2)
{
  unsigned int *v4; // esi
  unsigned int *result; // eax
  unsigned int *v6; // edi

  v4 = RA2_OPNEW(0x414u); /*0x773462*/
  result = 0; /*0x773464*/
  if ( v4 ) /*0x77346b*/
  {
    v6 = v4 + 2; /*0x773471*/
    v4[1] = 1; /*0x773474*/
    v4[2] = 0; /*0x773480*/
    *((unsigned char *)v4 + 1036) = 0; /*0x773482*/
    v4[260] = 0; /*0x773488*/
    *v4 = (void*)&WebBrowser_vftable; /*0x77348e*/
    Debug::Log(); /*0x773494*/
    v4[260] = a1; /*0x77349c*/
    Debug::Log(); /*0x7734a7*/
    if ( CoCreateInstance(&stru_7F7C60, 0, 1u, &stru_7F7C30, (LPVOID *)v4 + 2) >= 0 ) /*0x7734c6*/
    {
      Debug::Log(); /*0x7734cd*/
      (*(void (**)(unsigned int, unsigned int *))(*(unsigned int *)*v6 + 20))(*v6, v4); /*0x7734db*/
      (*(void (**)(unsigned int, int, int))(*(unsigned int *)*v6 + 12))(*v6, a1, a2); /*0x7734e5*/
      (*(void (**)(unsigned int, int))(*(unsigned int *)*v6 + 60))(*v6, 1); /*0x7734ef*/
    }
    return v4; /*0x7734f2*/
  }
  return result; /*0x7734f4*/
}
} // namespace gamemd

// 0x773590
namespace gamemd {
char AnimClass::sub_773590(int a2, int a3)
{

  unsigned int *v4; // esi

  *((unsigned int *)this + 260) = a2; /*0x77359e*/
  Debug::Log(); /*0x7735a4*/
  v4 = (unsigned int *)this + 2; /*0x7735ac*/
  if ( CoCreateInstance(&stru_7F7C60, 0, 1u, &stru_7F7C30, (LPVOID *)this + 2) >= 0 ) /*0x7735c6*/
  {
    Debug::Log(); /*0x7735cd*/
    (*(void (**)(unsigned int, unsigned int *))(*(unsigned int *)*v4 + 20))(*v4, this); /*0x7735db*/
    (*(void (**)(unsigned int, int, int))(*(unsigned int *)*v4 + 12))(*v4, a2, a3); /*0x7735e9*/
    (*(void (**)(unsigned int, int))(*(unsigned int *)*v4 + 60))(*v4, 1); /*0x7735f3*/
  }
  return 1; /*0x7735f6*/

}
} // namespace gamemd

// 0x7738A0
namespace gamemd {
BOOL E4Recv_7738A0::sub_7738A0(const char * cbData, LPBYTE lpData, const char * Type)
{

  LSTATUS Value; // esi
  HKEY phkResult; // [esp+8h] [ebp-44h] BYREF
  CHAR ValueName[64]; // [esp+Ch] [ebp-40h] BYREF

  Value = RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult); /*0x7738c3*/
  if ( !Value ) /*0x7738c7*/
  {
    strcpy(ValueName, cbData); /*0x7738e8*/
    if ( !((unsigned int *)this)[0] ) /*0x7738ec*/
      strcat(ValueName, asc_84968C); /*0x77391d*/
    cbData = Type; /*0x773932*/
    Value = RegQueryValueExA(phkResult, ValueName, 0, (LPDWORD)&Type, lpData, (LPDWORD)&cbData); /*0x77394f*/
    RegCloseKey(phkResult); /*0x773956*/
  }
  return Value == 0; /*0x773961*/

}
} // namespace gamemd

// 0x773970
namespace gamemd {
bool sub_773970(BYTE * Type, DWORD cbData)
{
  LSTATUS v2; // ebp
  char *v3; // ebx
  char *v4; // edx
  HKEY phkResult; // [esp+Ch] [ebp-4h] BYREF

  v2 = RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_Software_Westwood_Yuri_s_Reven, 0, 0x20019u, &phkResult); /*0x773990*/
  if ( !v2 ) /*0x773994*/
  {
    v3 = (char *)Type; /*0x77399a*/
    v2 = RegQueryValueExA(phkResult, g_INI_Key_HTMLPath, 0, (LPDWORD)&Type, Type, &cbData); /*0x7739c6*/
    RegCloseKey(phkResult); /*0x7739c9*/
    if ( !v2 ) /*0x7739d1*/
    {
      v4 = strrchr(v3, 92); /*0x7739db*/
      if ( !v4 || strlen(v3) > v4 - v3 + 1 ) /*0x7739f5*/
        strcat(v3, asc_815E74); /*0x773a19*/
    }
  }
  return v2 == 0; /*0x773a25*/
}
} // namespace gamemd

// 0x773AD0
namespace gamemd {
int WebBrowser::WebBrowser___vt03()
{

  HWND v1; // eax
  int v3; // [esp+4h] [ebp+4h]

  v1 = *(HWND *)(v3 + 1040); /*0x773ad4*/
  if ( v1 ) /*0x773adc*/
    *(unsigned int *)GetWindowLongA(v1, 8) = 1; /*0x773ae7*/
  return 0; /*0x773aef*/

}
} // namespace gamemd

// 0x773E30
namespace gamemd {
int sub_773E30(HWND hWndParent, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  LPARAM lParam[2]; // [esp+8h] [ebp-8h] BYREF

  result = BaseDialogProc(hWndParent, a2, a3, a4); /*0x773e4b*/
  if ( !result ) /*0x773e52*/
  {
    if ( a2 == 272 ) /*0x773e5a*/
    {
      lParam[0] = 800; /*0x773e62*/
      lParam[1] = 600; /*0x773e6a*/
      ResizeDialogAndEnum(hWndParent, (LPARAM)lParam); /*0x773e72*/
    }
    return 0; /*0x773e77*/
  }
  return result; /*0x773e79*/
}
} // namespace gamemd

// 0x774100
namespace gamemd {
int sub_774100()
{
  dword_B72D10 = 0; /*0x774102*/
  dword_B72D14 = 0; /*0x774107*/
  dword_B72D18 = 0; /*0x77410c*/
  dword_B72D1C = 0; /*0x774111*/
  return 0; /*0x774116*/
}
} // namespace gamemd

// 0x774310
namespace gamemd {
char sub_774310(BYTE * a1, signed int a2)
{
  HKEY RegistrySubKey; // eax
  HKEY v6; // eax
  HKEY v7; // eax
  HKEY v8; // esi
  DWORD v9; // ecx
  DWORD cbData; // [esp+Ch] [ebp-104h] BYREF
  BYTE Data[256]; // [esp+10h] [ebp-100h] BYREF

  cbData = 256; /*0x774329*/
  RegistrySubKey = FindRegistrySubKey(HKEY_LOCAL_MACHINE, aEnum, 0); /*0x774331*/
  if ( !RegistrySubKey ) /*0x774338*/
    return 0; /*0x77433c*/
  v6 = FindRegistrySubKey(RegistrySubKey, aRoot, 1); /*0x77434f*/
  if ( !v6 ) /*0x774356*/
    return 0; /*0x77435a*/
  v7 = FindRegistrySubKey(v6, aModem, 1); /*0x77436d*/
  if ( !v7 ) /*0x774374*/
    return 0; /*0x774378*/
  v8 = FindRegistrySubKey(v7, a0000_0, 1); /*0x774390*/
  if ( !v8 ) /*0x774394*/
    return 0; /*0x774398*/
  if ( RegQueryValueExA(v8, aFriendlyname, 0, 0, Data, &cbData) ) /*0x7743b6*/
  {
    RegCloseKey(v8); /*0x7743c1*/
    return 0; /*0x7743c7*/
  }
  else
  {
    RegCloseKey(v8); /*0x7743d3*/
    v9 = cbData; /*0x7743d9*/
    if ( a2 < (int)cbData ) /*0x7743df*/
      v9 = a2; /*0x7743e1*/
    qmemcpy(a1, Data, v9); /*0x7743ec*/
    return 1; /*0x7743f0*/
  }
}
} // namespace gamemd

// 0x775670
namespace gamemd {
int sub_775670()
{
  dword_B72F28 = 0; /*0x775672*/
  dword_B72F2C = 0; /*0x775677*/
  dword_B72F30 = 0; /*0x77567c*/
  dword_B72F34 = 0; /*0x775681*/
  return 0; /*0x775686*/
}
} // namespace gamemd

// 0x775B40
namespace gamemd {
INT_PTR sub_775B40(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
  return 0; /*0x775b42*/
}
} // namespace gamemd

// 0x775B50
namespace gamemd {
int sub_775B50(unsigned short a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM) a2, int a3, LONG * a4)
{
  HWND DialogParamA; // esi
  LONG bottom; // ecx
  struct tagRECT Rect; // [esp+4h] [ebp-10h] BYREF

  DialogParamA = CreateDialogParamA(g_hInstance, (LPCSTR)a1, 0, a2, 0); /*0x775b70*/
  GetClientRect(DialogParamA, &Rect); /*0x775b74*/
  DestroyWindow(DialogParamA); /*0x775b7b*/
  bottom = Rect.bottom; /*0x775b89*/
  *a4 = Rect.right; /*0x775b8e*/
  a4[1] = bottom; /*0x775b90*/
  return 1; /*0x775b8d*/
}
} // namespace gamemd

// 0x775D70
namespace gamemd {
int sub_775D70()
{
  dword_B72F38 = 0; /*0x775d77*/
  dword_B72F3C = 0; /*0x775d7c*/
  dword_B72F40 = 0; /*0x775d81*/
  return atexit(sub_775D90); /*0x775d8c*/
}
} // namespace gamemd

// 0x775D90
namespace gamemd {
void sub_775D90()
{
  dword_B72F38 = 0; /*0x775d95*/
  RA2_OPDEL(dword_B72F40); /*0x775da0*/
}
} // namespace gamemd

// 0x776210
namespace gamemd {
int sub_776210()
{
  dword_B73088 = 0; /*0x776212*/
  dword_B7308C = 0; /*0x776217*/
  dword_B73090 = 0; /*0x77621c*/
  dword_B73094 = 0; /*0x776221*/
  return 0; /*0x776226*/
}
} // namespace gamemd

// 0x776670
namespace gamemd {
char ObjectClass::sub_776670(LPARAM lParam)
{

  int v2; // edx
  HCURSOR CursorA; // eax
  char v4; // bl
  HCURSOR v5; // eax
  struct tagRECT Rect; // [esp+4h] [ebp-60h] BYREF
  WPARAM wParam[10]; // [esp+14h] [ebp-50h] BYREF
  struct tagPOINT v9[5]; // [esp+3Ch] [ebp-28h] BYREF

  if ( !byte_B7309C ) /*0x77667d*/
    return 0; /*0x77673a*/
  ImageList_DragShowNolock(0); /*0x77668e*/
  qmemcpy(v9, HitDialogTest((unsigned int)lParam, v2, v9), sizeof(v9)); /*0x7766a8*/
  qmemcpy(wParam, v9, sizeof(wParam)); /*0x7766bb*/
  if ( SendMessageA((HWND)v9[0].y, 0x4C8u, (WPARAM)wParam, (LPARAM)lParam) ) /*0x7766c8*/
  {
    CursorA = LoadCursorA(0, (LPCSTR)0x7F00); /*0x7766d9*/
    SetCursor(CursorA); /*0x7766e0*/
    v4 = 1; /*0x7766e6*/
  }
  else
  {
    v5 = LoadCursorA(0, (LPCSTR)0x7F88); /*0x7766f1*/
    SetCursor(v5); /*0x7766f8*/
    v4 = 0; /*0x7766fe*/
  }
  ImageList_DragShowNolock(1); /*0x776702*/
  GetWindowRect((HWND)wParam[1], &Rect); /*0x77670e*/
  ImageList_DragMove(wParam[4] - Rect.left, wParam[5] - Rect.top); /*0x77672a*/
  return v4; /*0x776735*/

}
} // namespace gamemd

// 0x776750
namespace gamemd {
char sub_776750(HWND hWnd, int a2, int a3, int a4)
{
  LPARAM v4; // eax
  char v5; // bl
  int v6; // edx
  LPARAM lParam[6]; // [esp+4h] [ebp-28h] BYREF
  int v9; // [esp+1Ch] [ebp-10h]
  int v10; // [esp+20h] [ebp-Ch]

  v4 = *(unsigned int *)(a2 + 60); /*0x776753*/
  v5 = 0; /*0x77675a*/
  v6 = *(unsigned int *)(a2 + 12) - 1; /*0x77675c*/
  lParam[1] = v4; /*0x77675d*/
  lParam[0] = 50; /*0x776761*/
  if ( v6 ) /*0x776769*/
  {
    if ( v6 == 1 ) /*0x77676c*/
    {
      v5 = 1; /*0x776772*/
      v9 = a4; /*0x776774*/
      v10 = a4; /*0x776778*/
    }
  }
  else
  {
    v5 = 0; /*0x776782*/
    v9 = a3; /*0x776784*/
    v10 = a3; /*0x776788*/
  }
  SendMessageA(hWnd, 0x110Du, 0, (LPARAM)lParam); /*0x776799*/
  return v5; /*0x7767a1*/
}
} // namespace gamemd

// 0x7767B0
namespace gamemd {
HWND sub_7767B0(HWND hWnd, int a2, WPARAM wParam)
{
  HWND result; // eax

  result = (HWND)SendMessageA(hWnd, 0x110Fu, 0, 0); /*0x7767c7*/
  if ( result ) /*0x7767cb*/
  {
    result = (HWND)SendMessageA(result, 0xC5u, wParam, 0); /*0x7767da*/
    dword_B73080 = a2; /*0x7767dc*/
    qword_B730A0 = hWnd; /*0x7767e2*/
  }
  return result; /*0x7767e8*/
}
} // namespace gamemd

// 0x7767F0
namespace gamemd {
unsigned int E4Recv_7767F0::sub_7767F0()
{

  char *referenceCount; // edi
  LPARAM lParam[10]; // [esp+8h] [ebp-28h] BYREF

  referenceCount = (char *)((unsigned int *)this)[0]; /*0x7767f7*/
  if ( !referenceCount ) /*0x7767fc*/
    return 0; /*0x776873*/
  String::Trim(referenceCount); /*0x776801*/
  strcpy((char *)dword_B73080, referenceCount); /*0x77681e*/
  lParam[1] = ((unsigned int *)this)[0]; /*0x776835*/
  lParam[0] = 1; /*0x776847*/
  lParam[4] = dword_B73080; /*0x77684f*/
  SendMessageA(qword_B730A0, 0x110Du, 0, (LPARAM)lParam); /*0x776853*/
  return strlen((const char *)dword_B73080); /*0x77686a*/

}
} // namespace gamemd

// 0x7768F0
namespace gamemd {
bool sub_7768F0(HWND hWnd, LPARAM a2)
{
  int v3; // ebp
  LRESULT i; // esi
  uint8_t *v5; // ebp
  signed int j; // esi
  LRESULT v7; // eax
  unsigned int Int_Overwrite; // eax
  CHAR ClassName[64]; // [esp+10h] [ebp-40h] BYREF
  uint8_t *hWnda; // [esp+54h] [ebp+4h]

  GetClassNameA(hWnd, ClassName, 64); /*0x776903*/
  if ( !strcmp(ClassName, aSystreeview32) ) /*0x77691a*/
  {
    v3 = 0; /*0x77694e*/
    hWnda = (uint8_t *)dword_B73098; /*0x776958*/
    for ( i = SendMessageA(hWnd, 0x110Au, 0, 0); i; i = SendMessageA(hWnd, 0x110Au, 1u, i) ) /*0x776962*/
    {
      wsprintfA(ClassName, "TV%d", ++v3); /*0x776970*/
      if ( INIClass::ReadBool_Overwrite(a2, hWnda, (uint8_t *)ClassName, 0) ) /*0x776989*/
        SendMessageA(hWnd, 0x1102u, 2u, i); /*0x776995*/
      else
        SendMessageA(hWnd, 0x1102u, 1u, i); /*0x77699f*/
    }
  }
  GetClassNameA(hWnd, ClassName, 64); /*0x7769ba*/
  if ( !strcmp(ClassName, aSyslistview32) ) /*0x7769d2*/
  {
    v5 = (uint8_t *)dword_B73098; /*0x7769fb*/
    if ( hWnd ) /*0x776a03*/
    {
      for ( j = 0; j < 10; ++j ) /*0x776a05*/
      {
        wsprintfA(ClassName, "LV%d", j); /*0x776a12*/
        v7 = SendMessageA(hWnd, 0x101Du, j, 0); /*0x776a24*/
        Int_Overwrite = ((INIClass *)(a2))->ReadInt_Overwrite(v5, (uint8_t *)ClassName, v7); /*0x776a31*/
        if ( Int_Overwrite < 0x3E8 ) /*0x776a3b*/
          SendMessageA(hWnd, 0x101Eu, j, (uint16_t)Int_Overwrite); /*0x776a4a*/
      }
    }
  }
  return 1; /*0x776a52*/
}
} // namespace gamemd

// 0x776A70
namespace gamemd {
void SaveWOLLobbySettings(unsigned char * a1, HWND a2, LPARAM lParam)
{
  int Int_Overwrite; // esi
  int v6; // edi
  int SystemMetrics; // eax
  int v8; // eax
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  if ( a2 ) /*0x776a7b*/
  {
    GetWindowRect(a2, &Rect); /*0x776a89*/
    Int_Overwrite = ((INIClass *)(lParam))->ReadInt_Overwrite(a1, (uint8_t *)asc_84968C, Rect.left); /*0x776aa7*/
    v6 = ((INIClass *)(lParam))->ReadInt_Overwrite(a1, (uint8_t *)aY, Rect.top); /*0x776ab9*/
    SystemMetrics = GetSystemMetrics(0); /*0x776abd*/
    if ( Int_Overwrite + Rect.right - Rect.left > SystemMetrics ) /*0x776ad1*/
      Int_Overwrite = Rect.left + SystemMetrics - Rect.right; /*0x776ad9*/
    v8 = GetSystemMetrics(1); /*0x776add*/
    if ( v6 + Rect.bottom - Rect.top > v8 ) /*0x776af1*/
      v6 = Rect.top + v8 - Rect.bottom; /*0x776af9*/
    if ( Int_Overwrite < 0 ) /*0x776afd*/
      Int_Overwrite = 0; /*0x776aff*/
    if ( v6 < 0 ) /*0x776b03*/
      v6 = 0; /*0x776b05*/
    SetWindowPos(a2, 0, Int_Overwrite, v6, 0, 0, 5u); /*0x776b12*/
    dword_B73098 = a1; /*0x776b18*/
    EnumChildWindows(a2, LoadWOLSettings, (LPARAM)lParam); /*0x776b29*/
  }
}
} // namespace gamemd

// 0x776B40
namespace gamemd {
bool SaveWOLUISettings(HWND hWnd, char * a2)
{
  int v2; // edi
  LRESULT i; // esi
  uint8_t *v4; // edi
  signed int j; // esi
  unsigned int v6; // eax
  uint8_t *Block; // [esp+10h] [ebp-64h]
  CHAR v9[32]; // [esp+14h] [ebp-60h] BYREF
  CHAR ClassName[4]; // [esp+34h] [ebp-40h] BYREF
  LRESULT v11; // [esp+38h] [ebp-3Ch]
  char v12; // [esp+3Ch] [ebp-38h]
  int v13; // [esp+40h] [ebp-34h]

  GetClassNameA(hWnd, ClassName, 64); /*0x776b53*/
  if ( !strcmp(ClassName, aSystreeview32) ) /*0x776b68*/
  {
    v2 = 0; /*0x776b9e*/
    Block = (uint8_t *)dword_B73098; /*0x776ba8*/
    for ( i = SendMessageA(hWnd, 0x110Au, 0, 0); i; i = SendMessageA(hWnd, 0x110Au, 1u, i) ) /*0x776bb2*/
    {
      wsprintfA(v9, "TV%d", ++v2); /*0x776bc0*/
      *(unsigned int *)ClassName = 24; /*0x776bcd*/
      v13 = 32; /*0x776bd5*/
      v11 = i; /*0x776be6*/
      if ( SendMessageA(hWnd, 0x110Cu, 0, (LPARAM)ClassName) ) /*0x776bea*/
        INIClass::SetBool(a2, Block, v9, (v12 & 0x20) != 0); /*0x776c18*/
    }
  }
  GetClassNameA(hWnd, ClassName, 64); /*0x776c36*/
  if ( !strcmp(ClassName, aSyslistview32) ) /*0x776c4b*/
  {
    v4 = (uint8_t *)dword_B73098; /*0x776c72*/
    if ( hWnd ) /*0x776c7a*/
    {
      for ( j = 0; j < 10; ++j ) /*0x776c7c*/
      {
        wsprintfA(v9, "LV%d", j); /*0x776c89*/
        v6 = SendMessageA(hWnd, 0x101Du, j, 0); /*0x776c9b*/
        if ( v6 < 0x3E8 ) /*0x776ca2*/
          ((INIClass *)(a2))->SetInt(v4, v9, v6, 0); /*0x776cb4*/
      }
    }
  }
  return 1; /*0x776cbf*/
}
} // namespace gamemd

// 0x776CD0
namespace gamemd {
bool sub_776CD0(INIClass * Block, HWND hWndParent, char * lParam)
{
  BOOL result; // eax
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  if ( hWndParent ) /*0x776cdb*/
  {
    GetWindowRect(hWndParent, &Rect); /*0x776ce4*/
    ((INIClass *)(lParam))->SetInt(Block, asc_84968C, Rect.left, 0); /*0x776cfd*/
    ((INIClass *)(lParam))->SetInt(Block, aY, Rect.top, 0); /*0x776d11*/
    dword_B73098 = Block; /*0x776d16*/
    return EnumChildWindows(hWndParent, (WNDENUMPROC)SaveWOLUISettings, (LPARAM)lParam); /*0x776d23*/
  }
  return result; /*0x776d2a*/
}
} // namespace gamemd

// 0x776E10
namespace gamemd {
LRESULT FindListBoxItem(HWND hWnd, LRESULT wParam, int a3)
{
  LRESULT v6; // [esp+10h] [ebp-4h]

  v6 = SendMessageA(hWnd, 0x146u, 0, 0); /*0x776e2d*/
  if ( wParam >= v6 ) /*0x776e31*/
    return -1; /*0x776e4f*/
  while ( SendMessageA(hWnd, 0x150u, wParam, 0) != a3 ) /*0x776e44*/
  {
    if ( ++wParam >= v6 ) /*0x776e4d*/
      return -1; /*0x776e4d*/
  }
  return wParam; /*0x776e4f*/
}
} // namespace gamemd

// 0x776EA0
namespace gamemd {
void nullsub_261()
{
  ; /*0x776ea0*/
}
} // namespace gamemd

// 0x776EB0
namespace gamemd {
void * E4Recv_776EB0::sub_776EB0()
{

  void *dwBuildNumber; // eax
  void *dwMinorVersion; // edx
  DWORD dwPlatformId; // eax
  struct _OSVERSIONINFOA VersionInformation; // [esp+8h] [ebp-94h] BYREF

  this->AbstractClass = 0; /*0x776ec1*/
  ((unsigned int *)this)[0] = 0; /*0x776ec3*/
  ((unsigned int *)this)[0] = 0; /*0x776ec6*/
  this->onBridge = 0; /*0x776ec9*/
  this->isFallingDown = 0; /*0x776ecf*/
  VersionInformation.dwOSVersionInfoSize = 148; /*0x776ed5*/
  GetVersionExA(&VersionInformation); /*0x776edd*/
  dwBuildNumber = (void *)VersionInformation.dwBuildNumber; /*0x776ee7*/
  dwMinorVersion = (void *)VersionInformation.dwMinorVersion; /*0x776eeb*/
  this->AbstractClass = (void *)VersionInformation.dwMajorVersion; /*0x776eef*/
  ((unsigned int *)this)[0] = dwBuildNumber; /*0x776ef1*/
  dwPlatformId = VersionInformation.dwPlatformId; /*0x776ef4*/
  ((unsigned int *)this)[0] = dwMinorVersion; /*0x776efd*/
  if ( dwPlatformId == 1 ) /*0x776f02*/
  {
    this->onBridge = 1; /*0x776f04*/
  }
  else if ( dwPlatformId == 2 ) /*0x776f0f*/
  {
    this->isFallingDown = 1; /*0x776f11*/
  }
  strncpy((char *)&((unsigned int *)this)[0], VersionInformation.szCSDVersion, 0x7Fu); /*0x776f22*/
  HIBYTE(this->parachute) = 0; /*0x776f2a*/
  return this; /*0x776f32*/

}
} // namespace gamemd

// 0x7771B0
namespace gamemd {
int sub_7771B0()
{
  dword_B730B8 = 0; /*0x7771b2*/
  dword_B730BC = 0; /*0x7771b7*/
  dword_B730C0 = 0; /*0x7771bc*/
  dword_B730C4 = 0; /*0x7771c1*/
  return 0; /*0x7771c6*/
}
} // namespace gamemd

// 0x7771D0
namespace gamemd {
void sub_7771D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7771dc*/
  dbl_B730D0 = Math::Sqrt(v0 + v0); /*0x7771ee*/
}
} // namespace gamemd

// 0x777200
namespace gamemd {
void sub_777200()
{
  dbl_B73538 = dbl_B730D0 / 60.0; /*0x77720c*/
}
} // namespace gamemd

// 0x777220
namespace gamemd {
void sub_777220()
{
  dbl_B73520 = 1.0 / dbl_B73538; /*0x77722c*/
}
} // namespace gamemd

// 0x777240
namespace gamemd {
void sub_777240()
{
  dbl_B73310 = 0.0174532925199433 * 45.0; /*0x77724c*/
}
} // namespace gamemd

// 0x777260
namespace gamemd {
void sub_777260()
{
  dbl_B730D8 = 0.0174532925199433 * 60.0; /*0x77726c*/
}
} // namespace gamemd

// 0x777280
namespace gamemd {
void sub_777280()
{
  dbl_B730B0 = 0.0174532925199433 * 90.0; /*0x77728c*/
}
} // namespace gamemd

// 0x7772E0
namespace gamemd {
void sub_7772E0()
{
  dbl_B730E0 = Math::ArcTan((double)dword_B73540 * 0.00390625); /*0x7772f7*/
}
} // namespace gamemd

// 0x777310
namespace gamemd {
void sub_777310()
{
  dbl_B73308 = Math::ArcTan((double)(2 * dword_B73540) / dbl_B730D0); /*0x777332*/
}
} // namespace gamemd

// 0x777340
namespace gamemd {
long long sub_777340()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B73540) + 0.5); /*0x77735b*/
  dword_B73534 = result; /*0x777360*/
  return result; /*0x777366*/
}
} // namespace gamemd

// 0x777370
namespace gamemd {
int sub_777370()
{
  word_B730C8 = 0; /*0x777372*/
  word_B730CA = 0; /*0x777378*/
  return 0; /*0x77737e*/
}
} // namespace gamemd

// 0x777380
namespace gamemd {
int sub_777380()
{
  dword_B732F8 = 0; /*0x777382*/
  dword_B732FC = 0; /*0x777387*/
  dword_B73300 = 0; /*0x77738c*/
  return 0; /*0x777391*/
}
} // namespace gamemd

// 0x7773A0
namespace gamemd {
int sub_7773A0()
{
  dword_B73530 = 0; /*0x7773a5*/
  dword_B73528 = 128; /*0x7773af*/
  dword_B7352C = 128; /*0x7773b4*/
  return 128; /*0x7773b9*/
}
} // namespace gamemd

// 0x777AB0
namespace gamemd {
void nullsub_262()
{
  ; /*0x777ab0*/
}
} // namespace gamemd

// 0x777F90
namespace gamemd {
LONG ObjectClass::sub_777F90(HWND hWnd)
{

  LONG result; // eax
  WCHAR *v3; // esi
  LONG v4; // edi
  CHAR Buf[516]; // [esp+Ch] [ebp-408h] BYREF
  WCHAR WideCharStr[258]; // [esp+210h] [ebp-204h] BYREF

  result = (LONG)dword_B7355C; /*0x777f90*/
  if ( dword_B7355C ) /*0x777fa4*/
  {
    result = ImmGetCompositionStringA(dword_B7355C, 0x800u, Buf, 0x200u); /*0x777fb6*/
    if ( result > 0 ) /*0x777fbd*/
    {
      Buf[result] = 0; /*0x777fbf*/
      result = MultiByteToWideChar(0, 0, Buf, strlen(Buf), WideCharStr, 256); /*0x777fe6*/
      if ( result < 0 ) /*0x777fee*/
        result = 0; /*0x777ff0*/
      WideCharStr[result] = 0; /*0x777ff4*/
      if ( result > 0 ) /*0x777ffc*/
      {
        v3 = WideCharStr; /*0x778005*/
        v4 = result; /*0x77800c*/
        do /*0x778021*/
        {
          result = SendMessageA((HWND)hWnd, 0x4D9u, *v3, *v3); /*0x77801b*/
          ++v3; /*0x77801d*/
          --v4; /*0x778020*/
        }
        while ( v4 ); /*0x778021*/
      }
    }
  }
  return result; /*0x778024*/

}
} // namespace gamemd

// 0x778170
namespace gamemd {
void nullsub_48()
{
  ; /*0x778170*/
}
} // namespace gamemd

// 0x7781A0
namespace gamemd {
HIMC IME_Disable()
{
  return ImmAssociateContext(g_hWnd, 0); /*0x7781ad*/
}
} // namespace gamemd

// 0x7784D0
namespace gamemd {
int sub_7784D0()
{
  dword_B73580 = 0; /*0x7784d2*/
  dword_B73584 = 0; /*0x7784d7*/
  dword_B73588 = 0; /*0x7784dc*/
  dword_B7358C = 0; /*0x7784e1*/
  return 0; /*0x7784e6*/
}
} // namespace gamemd

// 0x7784F0
namespace gamemd {
void sub_7784F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7784fc*/
  dbl_B73598 = Math::Sqrt(v0 + v0); /*0x77850e*/
}
} // namespace gamemd

// 0x778520
namespace gamemd {
void sub_778520()
{
  dbl_B735E8 = dbl_B73598 / 60.0; /*0x77852c*/
}
} // namespace gamemd

// 0x778540
namespace gamemd {
void sub_778540()
{
  dbl_B735D0 = 1.0 / dbl_B735E8; /*0x77854c*/
}
} // namespace gamemd

// 0x778560
namespace gamemd {
void sub_778560()
{
  dbl_B735C8 = 0.0174532925199433 * 45.0; /*0x77856c*/
}
} // namespace gamemd

// 0x778580
namespace gamemd {
void sub_778580()
{
  dbl_B735A0 = 0.0174532925199433 * 60.0; /*0x77858c*/
}
} // namespace gamemd

// 0x7785A0
namespace gamemd {
void sub_7785A0()
{
  dbl_B73578 = 0.0174532925199433 * 90.0; /*0x7785ac*/
}
} // namespace gamemd

// 0x7785C0
namespace gamemd {
long long sub_7785C0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B73578 - dbl_B735A0); /*0x7785d2*/
  result = Math::RoundToInt(v0 * dbl_B73598 * 0.5); /*0x7785e6*/
  dword_B735F0 = result; /*0x7785eb*/
  return result; /*0x7785f0*/
}
} // namespace gamemd

// 0x778600
namespace gamemd {
void sub_778600()
{
  dbl_B735A8 = Math::ArcTan((double)dword_B735F0 * 0.00390625); /*0x778617*/
}
} // namespace gamemd

// 0x778630
namespace gamemd {
void sub_778630()
{
  dbl_B735C0 = Math::ArcTan((double)(2 * dword_B735F0) / dbl_B73598); /*0x778652*/
}
} // namespace gamemd

// 0x778660
namespace gamemd {
long long sub_778660()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B735F0) + 0.5); /*0x77867b*/
  dword_B735E4 = result; /*0x778680*/
  return result; /*0x778686*/
}
} // namespace gamemd

// 0x778690
namespace gamemd {
int sub_778690()
{
  word_B73594 = 0; /*0x778692*/
  word_B73596 = 0; /*0x778698*/
  return 0; /*0x77869e*/
}
} // namespace gamemd

// 0x7786A0
namespace gamemd {
int sub_7786A0()
{
  dword_B735B0 = 0; /*0x7786a2*/
  dword_B735B4 = 0; /*0x7786a7*/
  dword_B735B8 = 0; /*0x7786ac*/
  return 0; /*0x7786b1*/
}
} // namespace gamemd

// 0x7786C0
namespace gamemd {
int sub_7786C0()
{
  dword_B735E0 = 0; /*0x7786c5*/
  dword_B735D8 = 128; /*0x7786cf*/
  dword_B735DC = 128; /*0x7786d4*/
  return 128; /*0x7786d9*/
}
} // namespace gamemd

// 0x7786E0
namespace gamemd {
int sub_7786E0()
{
  ((String *)((char **)&stru_B73590))->Assign(aDefault_0); /*0x7786ea*/
  return atexit(unknown_libname_38); /*0x7786fa*/
}
} // namespace gamemd

// 0x778700
namespace gamemd {
int unknown_libname_38()
{
  DeleteAndZero((void **)&stru_B73590); /*0x778705*/
}
} // namespace gamemd

// 0x779730
namespace gamemd {
char sub_779730()
{
  char Bool_Overwrite; // bl
  void *v2[4]; // [esp+4h] [ebp-98h] BYREF
  unsigned int v3[3]; // [esp+14h] [ebp-88h] BYREF
  unsigned int v4[6]; // [esp+20h] [ebp-7Ch] BYREF
  char v5; // [esp+38h] [ebp-64h]
  int v6; // [esp+3Ch] [ebp-60h]
  int v7; // [esp+40h] [ebp-5Ch]
  unsigned int v8[22]; // [esp+44h] [ebp-58h] BYREF

  ((BufferIOFile *)(v8))->Constructor(g_Str_File_wolinfoMD_ini); /*0x779740*/
  if ( ((File *)(v8))->IsReady(0) ) /*0x77974c*/
  {
    v3[0] = (void*)&GenericNode_vftable; /*0x779779*/
    v4[0] = (void*)&GenericNode_vftable; /*0x77977d*/
    v2[1] = 0; /*0x779785*/
    v2[2] = 0; /*0x77978a*/
    v3[1] = 0; /*0x77978e*/
    v3[2] = 0; /*0x779792*/
    v4[1] = 0; /*0x779796*/
    v4[2] = 0; /*0x77979a*/
    LinkedList::Prepend(v3, (int)v4); /*0x7797a6*/
    v2[3] = (void*)&List_INIClass_INISection___vftable; /*0x7797af*/
    memset(&v4[3], 0, 12); /*0x7797bd*/
    v5 = 0; /*0x7797c9*/
    v6 = 0; /*0x7797cd*/
    v7 = 0; /*0x7797d1*/
    v2[0] = (void*)&INIClass_vftable; /*0x7797d5*/
    ((FileStraw *)(v2))->Open((int)v8, 0); /*0x7797dd*/
    ((CCFileClass *)(v8))->Close(); /*0x7797e6*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x779804*/
                       (int)v2,
                       (uint8_t *)&off_84A11C,
                       (uint8_t *)g_INI_Key_AutoLogin,
                       1);
    ((HashTable *)(v2))->DestroyHashTableINIClass(); /*0x779806*/
    v8[0] = (unsigned int)&off_7E1668; /*0x77980f*/
    ((BufferIOFileClass *)(v8))->Dtor(); /*0x779817*/
    return Bool_Overwrite; /*0x77981c*/
  }
  else
  {
    v8[0] = (unsigned int)&off_7E1668; /*0x779759*/
    ((BufferIOFileClass *)(v8))->Dtor(); /*0x779761*/
    return 0; /*0x779766*/
  }
}
} // namespace gamemd

// 0x779830
namespace gamemd {
int ReadWOLGameOption(INIClass * a1)
{
  void *v3[4]; // [esp+8h] [ebp-98h] BYREF
  unsigned int v4[3]; // [esp+18h] [ebp-88h] BYREF
  unsigned int v5[6]; // [esp+24h] [ebp-7Ch] BYREF
  char v6; // [esp+3Ch] [ebp-64h]
  int v7; // [esp+40h] [ebp-60h]
  int v8; // [esp+44h] [ebp-5Ch]
  unsigned int v9[22]; // [esp+48h] [ebp-58h] BYREF

  ((BufferIOFile *)(v9))->Constructor(g_Str_File_wolinfoMD_ini); /*0x779843*/
  if ( !((File *)(v9))->IsReady(0) ) /*0x77984f*/
  {
    ((FileClass *)(v9))->Close(); /*0x77985c*/
    ((CCFileClass *)(v9))->Close(); /*0x779865*/
    ((CCFileClass *)(v9))->Reopen(g_Str_File_wolinfoMD_ini, 1); /*0x779875*/
  }
  v4[0] = (void*)&GenericNode_vftable; /*0x779883*/
  v5[0] = (void*)&GenericNode_vftable; /*0x779887*/
  v3[1] = 0; /*0x77988f*/
  v3[2] = 0; /*0x779894*/
  v4[1] = 0; /*0x779898*/
  v4[2] = 0; /*0x77989c*/
  v5[1] = 0; /*0x7798a0*/
  v5[2] = 0; /*0x7798a4*/
  LinkedList::Prepend(v4, (int)v5); /*0x7798b0*/
  v3[3] = (void*)&List_INIClass_INISection___vftable; /*0x7798b9*/
  memset(&v5[3], 0, 12); /*0x7798c2*/
  v6 = 0; /*0x7798ce*/
  v7 = 0; /*0x7798d2*/
  v8 = 0; /*0x7798d6*/
  v3[0] = (void*)&INIClass_vftable; /*0x7798da*/
  if ( ((File *)(v9))->IsReady(0) ) /*0x7798e2*/
  {
    ((FileStraw *)(v3))->Open((int)v9, 0); /*0x7798f5*/
    INIClass::SetBool((char *)v3, (uint8_t *)&off_84A11C, g_INI_Key_AutoLogin, a1); /*0x779909*/
    INIClass::SaveToPipe(v3, (int)v9); /*0x779917*/
  }
  ((HashTable *)(v3))->DestroyHashTableINIClass(); /*0x779920*/
  v9[0] = (unsigned int)&off_7E1668; /*0x779929*/
// 0x431b80
  return ((BufferIOFileClass *)(v9))->Dtor(); /*0x779936*/
}
} // namespace gamemd

// 0x779940
namespace gamemd {
char sub_779940()
{
  char Bool_Overwrite; // bl
  void *v2[4]; // [esp+4h] [ebp-98h] BYREF
  unsigned int v3[3]; // [esp+14h] [ebp-88h] BYREF
  unsigned int v4[6]; // [esp+20h] [ebp-7Ch] BYREF
  char v5; // [esp+38h] [ebp-64h]
  int v6; // [esp+3Ch] [ebp-60h]
  int v7; // [esp+40h] [ebp-5Ch]
  unsigned int v8[22]; // [esp+44h] [ebp-58h] BYREF

  ((BufferIOFile *)(v8))->Constructor(g_Str_File_wolinfoMD_ini); /*0x779950*/
  if ( ((File *)(v8))->IsReady(0) ) /*0x77995c*/
  {
    v3[0] = (void*)&GenericNode_vftable; /*0x779989*/
    v4[0] = (void*)&GenericNode_vftable; /*0x77998d*/
    v2[1] = 0; /*0x779995*/
    v2[2] = 0; /*0x77999a*/
    v3[1] = 0; /*0x77999e*/
    v3[2] = 0; /*0x7799a2*/
    v4[1] = 0; /*0x7799a6*/
    v4[2] = 0; /*0x7799aa*/
    LinkedList::Prepend(v3, (int)v4); /*0x7799b6*/
    v2[3] = (void*)&List_INIClass_INISection___vftable; /*0x7799bf*/
    memset(&v4[3], 0, 12); /*0x7799cd*/
    v5 = 0; /*0x7799d9*/
    v6 = 0; /*0x7799dd*/
    v7 = 0; /*0x7799e1*/
    v2[0] = (void*)&INIClass_vftable; /*0x7799e5*/
    ((FileStraw *)(v2))->Open((int)v8, 0); /*0x7799ed*/
    ((CCFileClass *)(v8))->Close(); /*0x7799f6*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x779a14*/
                       (int)v2,
                       (uint8_t *)&off_84A11C,
                       (uint8_t *)aAddmatchbuddie,
                       1);
    ((HashTable *)(v2))->DestroyHashTableINIClass(); /*0x779a16*/
    v8[0] = (unsigned int)&off_7E1668; /*0x779a1f*/
    ((BufferIOFileClass *)(v8))->Dtor(); /*0x779a27*/
    return Bool_Overwrite; /*0x779a2c*/
  }
  else
  {
    v8[0] = (unsigned int)&off_7E1668; /*0x779969*/
    ((BufferIOFileClass *)(v8))->Dtor(); /*0x779971*/
    return 0; /*0x779976*/
  }
}
} // namespace gamemd

// 0x779A40
namespace gamemd {
int ReadWOLLobbyOption(INIClass * a1)
{
  void *v3[4]; // [esp+8h] [ebp-98h] BYREF
  unsigned int v4[3]; // [esp+18h] [ebp-88h] BYREF
  unsigned int v5[6]; // [esp+24h] [ebp-7Ch] BYREF
  char v6; // [esp+3Ch] [ebp-64h]
  int v7; // [esp+40h] [ebp-60h]
  int v8; // [esp+44h] [ebp-5Ch]
  unsigned int v9[22]; // [esp+48h] [ebp-58h] BYREF

  ((BufferIOFile *)(v9))->Constructor(g_Str_File_wolinfoMD_ini); /*0x779a53*/
  if ( !((File *)(v9))->IsReady(0) ) /*0x779a5f*/
  {
    ((FileClass *)(v9))->Close(); /*0x779a6c*/
    ((CCFileClass *)(v9))->Close(); /*0x779a75*/
    ((CCFileClass *)(v9))->Reopen(g_Str_File_wolinfoMD_ini, 1); /*0x779a85*/
  }
  v4[0] = (void*)&GenericNode_vftable; /*0x779a93*/
  v5[0] = (void*)&GenericNode_vftable; /*0x779a97*/
  v3[1] = 0; /*0x779a9f*/
  v3[2] = 0; /*0x779aa4*/
  v4[1] = 0; /*0x779aa8*/
  v4[2] = 0; /*0x779aac*/
  v5[1] = 0; /*0x779ab0*/
  v5[2] = 0; /*0x779ab4*/
  LinkedList::Prepend(v4, (int)v5); /*0x779ac0*/
  v3[3] = (void*)&List_INIClass_INISection___vftable; /*0x779ac9*/
  memset(&v5[3], 0, 12); /*0x779ad2*/
  v6 = 0; /*0x779ade*/
  v7 = 0; /*0x779ae2*/
  v8 = 0; /*0x779ae6*/
  v3[0] = (void*)&INIClass_vftable; /*0x779aea*/
  if ( ((File *)(v9))->IsReady(0) ) /*0x779af2*/
  {
    ((FileStraw *)(v3))->Open((int)v9, 0); /*0x779b05*/
    INIClass::SetBool((char *)v3, (uint8_t *)&off_84A11C, aAddmatchbuddie, a1); /*0x779b19*/
    INIClass::SaveToPipe(v3, (int)v9); /*0x779b27*/
  }
  ((HashTable *)(v3))->DestroyHashTableINIClass(); /*0x779b30*/
  v9[0] = (unsigned int)&off_7E1668; /*0x779b39*/
// 0x431b80
  return ((BufferIOFileClass *)(v9))->Dtor(); /*0x779b46*/
}
} // namespace gamemd

// 0x77B070
namespace gamemd {
int sub_77B070()
{
  dword_B73600 = 0; /*0x77b072*/
  dword_B73604 = 0; /*0x77b077*/
  dword_B73608 = 0; /*0x77b07c*/
  dword_B7360C = 0; /*0x77b081*/
  return 0; /*0x77b086*/
}
} // namespace gamemd

// 0x77B090
namespace gamemd {
void sub_77B090()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x77b09c*/
  dbl_B73618 = Math::Sqrt(v0 + v0); /*0x77b0ae*/
}
} // namespace gamemd

// 0x77B0C0
namespace gamemd {
void sub_77B0C0()
{
  dbl_B73668 = dbl_B73618 / 60.0; /*0x77b0cc*/
}
} // namespace gamemd

// 0x77B0E0
namespace gamemd {
void sub_77B0E0()
{
  dbl_B73650 = 1.0 / dbl_B73668; /*0x77b0ec*/
}
} // namespace gamemd

// 0x77B100
namespace gamemd {
void sub_77B100()
{
  dbl_B73648 = 0.0174532925199433 * 45.0; /*0x77b10c*/
}
} // namespace gamemd

// 0x77B120
namespace gamemd {
void sub_77B120()
{
  dbl_B73620 = 0.0174532925199433 * 60.0; /*0x77b12c*/
}
} // namespace gamemd

// 0x77B140
namespace gamemd {
void sub_77B140()
{
  dbl_B735F8 = 0.0174532925199433 * 90.0; /*0x77b14c*/
}
} // namespace gamemd

// 0x77B160
namespace gamemd {
long long sub_77B160()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B735F8 - dbl_B73620); /*0x77b172*/
  result = Math::RoundToInt(v0 * dbl_B73618 * 0.5); /*0x77b186*/
  dword_B73670 = result; /*0x77b18b*/
  return result; /*0x77b190*/
}
} // namespace gamemd

// 0x77B1A0
namespace gamemd {
void sub_77B1A0()
{
  dbl_B73628 = Math::ArcTan((double)dword_B73670 * 0.00390625); /*0x77b1b7*/
}
} // namespace gamemd

// 0x77B1D0
namespace gamemd {
void sub_77B1D0()
{
  dbl_B73640 = Math::ArcTan((double)(2 * dword_B73670) / dbl_B73618); /*0x77b1f2*/
}
} // namespace gamemd

// 0x77B200
namespace gamemd {
long long sub_77B200()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B73670) + 0.5); /*0x77b21b*/
  dword_B73664 = result; /*0x77b220*/
  return result; /*0x77b226*/
}
} // namespace gamemd

// 0x77B230
namespace gamemd {
int sub_77B230()
{
  word_B73610 = 0; /*0x77b232*/
  word_B73612 = 0; /*0x77b238*/
  return 0; /*0x77b23e*/
}
} // namespace gamemd

// 0x77B240
namespace gamemd {
int sub_77B240()
{
  dword_B73630 = 0; /*0x77b242*/
  dword_B73634 = 0; /*0x77b247*/
  dword_B73638 = 0; /*0x77b24c*/
  return 0; /*0x77b251*/
}
} // namespace gamemd

// 0x77B260
namespace gamemd {
int sub_77B260()
{
  dword_B73660 = 0; /*0x77b265*/
  dword_B73658 = 128; /*0x77b26f*/
  dword_B7365C = 128; /*0x77b274*/
  return 128; /*0x77b279*/
}
} // namespace gamemd

// 0x77B690
namespace gamemd {
void sub_77B690()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x77b69c*/
  dbl_B75F60 = Math::Sqrt(v0 + v0); /*0x77b6ae*/
}
} // namespace gamemd

// 0x77B6C0
namespace gamemd {
void sub_77B6C0()
{
  dbl_B77CD8 = dbl_B75F60 / 60.0; /*0x77b6cc*/
}
} // namespace gamemd

// 0x77B6E0
namespace gamemd {
void sub_77B6E0()
{
  dbl_B778E8 = 1.0 / dbl_B77CD8; /*0x77b6ec*/
}
} // namespace gamemd

// 0x77B700
namespace gamemd {
void sub_77B700()
{
  dbl_B778C0 = 0.0174532925199433 * 45.0; /*0x77b70c*/
}
} // namespace gamemd

// 0x77B720
namespace gamemd {
void sub_77B720()
{
  dbl_B761A0 = 0.0174532925199433 * 60.0; /*0x77b72c*/
}
} // namespace gamemd

// 0x77B740
namespace gamemd {
void sub_77B740()
{
  dbl_B73AC0 = 0.0174532925199433 * 90.0; /*0x77b74c*/
}
} // namespace gamemd

// 0x77B760
namespace gamemd {
long long sub_77B760()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B73AC0 - dbl_B761A0); /*0x77b772*/
  result = Math::RoundToInt(v0 * dbl_B75F60 * 0.5); /*0x77b786*/
  dword_B77D74 = result; /*0x77b78b*/
  return result; /*0x77b790*/
}
} // namespace gamemd

// 0x77B7A0
namespace gamemd {
void sub_77B7A0()
{
  dbl_B76460 = Math::ArcTan((double)dword_B77D74 * 0.00390625); /*0x77b7b7*/
}
} // namespace gamemd

// 0x77B7D0
namespace gamemd {
void sub_77B7D0()
{
  dbl_B76AF8 = Math::ArcTan((double)(2 * dword_B77D74) / dbl_B75F60); /*0x77b7f2*/
}
} // namespace gamemd

// 0x77B800
namespace gamemd {
long long sub_77B800()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B77D74) + 0.5); /*0x77b81b*/
  dword_B77CD0 = result; /*0x77b820*/
  return result; /*0x77b826*/
}
} // namespace gamemd

// 0x77B830
namespace gamemd {
int sub_77B830()
{
  word_B75F50 = 0; /*0x77b832*/
  word_B75F52 = 0; /*0x77b838*/
  return 0; /*0x77b83e*/
}
} // namespace gamemd

// 0x77B840
namespace gamemd {
int sub_77B840()
{
  dword_B76960 = 0; /*0x77b842*/
  dword_B76964 = 0; /*0x77b847*/
  dword_B76968 = 0; /*0x77b84c*/
  return 0; /*0x77b851*/
}
} // namespace gamemd

// 0x77B860
namespace gamemd {
int sub_77B860()
{
  dword_B77A00 = 0; /*0x77b865*/
  dword_B779F8 = 128; /*0x77b86f*/
  dword_B779FC = 128; /*0x77b874*/
  return 128; /*0x77b879*/
}
} // namespace gamemd

// 0x77B880
namespace gamemd {
int sub_77B880()
{
  dword_B73DF8 = 0; /*0x77b882*/
  dword_B73DFC = 0; /*0x77b887*/
  dword_B73E00 = 0; /*0x77b88c*/
  dword_B73E04 = 0; /*0x77b891*/
  return 0; /*0x77b896*/
}
} // namespace gamemd

// 0x77B8A0
namespace gamemd {
int sub_77B8A0()
{
  OleInitialize(0); /*0x77b8a2*/
  return atexit(OleUninitialize); /*0x77b8b3*/
}
} // namespace gamemd

// 0x77B8C0
namespace gamemd {
int OleUninitialize()
{
  __imp_OleUninitialize(); /*0x77b8c0*/
}
} // namespace gamemd

// 0x77B8D0
namespace gamemd {
int sub_77B8D0()
{
  unknown_libname_73(&unk_B73AE0); /*0x77b8d5*/
  return atexit(unknown_libname_39); /*0x77b8e5*/
}
} // namespace gamemd

// 0x77B8F0
namespace gamemd {
int unknown_libname_39()
{
  DeleteAndZero((void **)&unk_B73AE0); /*0x77b8f5*/
}
} // namespace gamemd

// 0x77B900
namespace gamemd {
int sub_77B900()
{
  g_WOL_UserList = 0; /*0x77b907*/
  dword_B778DC = 0; /*0x77b90c*/
  dword_B778E0 = 0; /*0x77b911*/
  return atexit(sub_77B920); /*0x77b91c*/
}
} // namespace gamemd

// 0x77B920
namespace gamemd {
void sub_77B920()
{
  g_WOL_UserList = 0; /*0x77b925*/
  RA2_OPDEL(dword_B778E0); /*0x77b930*/
}
} // namespace gamemd

// 0x77B940
namespace gamemd {
int sub_77B940()
{
  dword_B73E10 = 0; /*0x77b947*/
  dword_B73E14 = 0; /*0x77b94c*/
  dword_B73E18 = 0; /*0x77b951*/
  return atexit(sub_77B960); /*0x77b95c*/
}
} // namespace gamemd

// 0x77B960
namespace gamemd {
void sub_77B960()
{
  dword_B73E10 = 0; /*0x77b965*/
  RA2_OPDEL(dword_B73E18); /*0x77b970*/
}
} // namespace gamemd

// 0x77B980
namespace gamemd {
int sub_77B980()
{
  dword_B76AE0 = 0; /*0x77b987*/
  dword_B76AE4 = 0; /*0x77b98c*/
  dword_B76AE8 = 0; /*0x77b991*/
  return atexit(sub_77B9A0); /*0x77b99c*/
}
} // namespace gamemd

// 0x77B9A0
namespace gamemd {
void sub_77B9A0()
{
  dword_B76AE0 = 0; /*0x77b9a5*/
  RA2_OPDEL(dword_B76AE8); /*0x77b9b0*/
}
} // namespace gamemd

// 0x77B9C0
namespace gamemd {
int sub_77B9C0()
{
  dword_B77900 = 0; /*0x77b9c7*/
  dword_B77904 = 0; /*0x77b9cc*/
  dword_B77908 = 0; /*0x77b9d1*/
  return atexit(sub_77B9E0); /*0x77b9dc*/
}
} // namespace gamemd

// 0x77B9E0
namespace gamemd {
void sub_77B9E0()
{
  dword_B77900 = 0; /*0x77b9e5*/
  RA2_OPDEL(dword_B77908); /*0x77b9f0*/
}
} // namespace gamemd

// 0x77BA00
namespace gamemd {
int sub_77BA00()
{
  dword_B76520 = 0; /*0x77ba07*/
  dword_B76524 = 0; /*0x77ba0c*/
  dword_B76528 = 0; /*0x77ba11*/
  return atexit(sub_77BA20); /*0x77ba1c*/
}
} // namespace gamemd

// 0x77BA20
namespace gamemd {
void sub_77BA20()
{
  dword_B76520 = 0; /*0x77ba25*/
  RA2_OPDEL(dword_B76528); /*0x77ba30*/
}
} // namespace gamemd

// 0x77BA40
namespace gamemd {
int sub_77BA40()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77ba40*/
  dword_B768E0 = -1717986918; /*0x77ba47*/
  dword_B768E4 = 1070176665; /*0x77ba51*/
  dbl_B768E8 = 0.8; /*0x77ba5b*/
  dword_B768F0 = 128; /*0x77ba6f*/
  v1 = 0; /*0x77ba74*/
  do /*0x77ba79*/
  {
    ++v1; /*0x77ba76*/
    v0 >>= 1; /*0x77ba77*/
  }
  while ( v0 ); /*0x77ba79*/
  dword_B768D0 = 0; /*0x77ba7b*/
  dword_B768CC = v1 - 1; /*0x77ba89*/
  dword_B768C4 = 0; /*0x77ba8f*/
  byte_B768D4 = 0; /*0x77ba95*/
  dword_B768C8 = 1 << (v1 - 1); /*0x77ba9b*/
  g_WOL_ListParser = RA2_OPNEW(4 * (1 << (v1 - 1))); /*0x77bab3*/
  memset(g_WOL_ListParser, 0, 4 * dword_B768C8); /*0x77bab9*/
  dword_B768D8 = (int (*)(unsigned int))String::ComputeHash; /*0x77bac0*/
  return atexit(sub_77BAE0); /*0x77bad2*/
}
} // namespace gamemd

// 0x77BC10
namespace gamemd {
int sub_77BC10()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77bc10*/
  dword_B73B18 = -1717986918; /*0x77bc17*/
  dword_B73B1C = 1070176665; /*0x77bc21*/
  dbl_B73B20 = 0.8; /*0x77bc2b*/
  dword_B73B28 = 128; /*0x77bc3f*/
  v1 = 0; /*0x77bc44*/
  do /*0x77bc49*/
  {
    ++v1; /*0x77bc46*/
    v0 >>= 1; /*0x77bc47*/
  }
  while ( v0 ); /*0x77bc49*/
  dword_B73B08 = 0; /*0x77bc4b*/
  dword_B73B04 = v1 - 1; /*0x77bc59*/
  dword_B73AFC = 0; /*0x77bc5f*/
  byte_B73B0C = 0; /*0x77bc65*/
  dword_B73B00 = 1 << (v1 - 1); /*0x77bc6b*/
  dword_B73AF8 = RA2_OPNEW(4 * (1 << (v1 - 1))); /*0x77bc83*/
  memset(dword_B73AF8, 0, 4 * dword_B73B00); /*0x77bc89*/
  dword_B73B10 = (int (*)(unsigned int))String::ComputeHash; /*0x77bc90*/
  return atexit(sub_77BCB0); /*0x77bca2*/
}
} // namespace gamemd

// 0x77BDE0
namespace gamemd {
int sub_77BDE0()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77bde0*/
  dword_B77DA0 = -1717986918; /*0x77bde7*/
  dword_B77DA4 = 1070176665; /*0x77bdf1*/
  dbl_B77DA8 = 0.8; /*0x77bdfb*/
  dword_B77DB0 = 128; /*0x77be0f*/
  v1 = 0; /*0x77be14*/
  do /*0x77be19*/
  {
    ++v1; /*0x77be16*/
    v0 >>= 1; /*0x77be17*/
  }
  while ( v0 ); /*0x77be19*/
  dword_B77D90 = 0; /*0x77be1b*/
  dword_B77D8C = v1 - 1; /*0x77be29*/
  dword_B77D84 = 0; /*0x77be2f*/
  byte_B77D94 = 0; /*0x77be35*/
  dword_B77D88 = 1 << (v1 - 1); /*0x77be3b*/
  stru_B77D80 = RA2_OPNEW(4 * (1 << (v1 - 1))); /*0x77be53*/
  memset(stru_B77D80, 0, 4 * dword_B77D88); /*0x77be59*/
  dword_B77D98 = (int (*)(unsigned int))String::ComputeHash; /*0x77be60*/
  return atexit(sub_77BE80); /*0x77be72*/
}
} // namespace gamemd

// 0x77BFB0
namespace gamemd {
int sub_77BFB0()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77bfb0*/
  dbl_B76660 = 0.2; /*0x77bfb7*/
  dbl_B76668 = 0.8; /*0x77bfcb*/
  dword_B76670 = 128; /*0x77bfdf*/
  v1 = 0; /*0x77bfe4*/
  do /*0x77bfe9*/
  {
    ++v1; /*0x77bfe6*/
    v0 >>= 1; /*0x77bfe7*/
  }
  while ( v0 ); /*0x77bfe9*/
  dword_B76650 = 0; /*0x77bfeb*/
  dword_B7664C = v1 - 1; /*0x77bff9*/
  dword_B76644 = 0; /*0x77bfff*/
  byte_B76654 = 0; /*0x77c005*/
  dword_B76648 = 1 << (v1 - 1); /*0x77c00b*/
  dword_B76640 = RA2_OPNEW(4 * (1 << (v1 - 1))); /*0x77c023*/
  memset(dword_B76640, 0, 4 * dword_B76648); /*0x77c029*/
  dword_B76658 = (int (*)(unsigned int))String::ComputeHash; /*0x77c030*/
  return atexit(sub_77C050); /*0x77c042*/
}
} // namespace gamemd

// 0x77C180
namespace gamemd {
int sub_77C180()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77c180*/
  dbl_B766A0 = 0.2; /*0x77c187*/
  dbl_B766A8 = 0.8; /*0x77c19b*/
  dword_B766B0 = 128; /*0x77c1af*/
  v1 = 0; /*0x77c1b4*/
  do /*0x77c1b9*/
  {
    ++v1; /*0x77c1b6*/
    v0 >>= 1; /*0x77c1b7*/
  }
  while ( v0 ); /*0x77c1b9*/
  dword_B76690 = 0; /*0x77c1bb*/
  dword_B7668C = v1 - 1; /*0x77c1c9*/
  dword_B76684 = 0; /*0x77c1cf*/
  byte_B76694 = 0; /*0x77c1d5*/
  dword_B76688 = 1 << (v1 - 1); /*0x77c1db*/
  dword_B76680 = RA2_OPNEW(4 * (1 << (v1 - 1))); /*0x77c1f3*/
  memset(dword_B76680, 0, 4 * dword_B76688); /*0x77c1f9*/
  dword_B76698 = (int (*)(unsigned int))String::ComputeHash; /*0x77c200*/
  return atexit(sub_77C220); /*0x77c212*/
}
} // namespace gamemd

// 0x77C350
namespace gamemd {
int sub_77C350()
{
  dword_B777A0 = 0; /*0x77c357*/
  dword_B777A4 = 0; /*0x77c35c*/
  dword_B777A8 = 0; /*0x77c361*/
  return atexit(sub_77C370); /*0x77c36c*/
}
} // namespace gamemd

// 0x77C370
namespace gamemd {
void sub_77C370()
{
  int i; // esi

  for ( i = 0; i < dword_B777A0; ++i ) /*0x77c37a*/
    DeleteAndZero((void **)dword_B777A8 + i); /*0x77c384*/
  dword_B777A0 = 0; /*0x77c399*/
  RA2_OPDEL(dword_B777A8); /*0x77c3a4*/
}
} // namespace gamemd

// 0x77C3B0
namespace gamemd {
int sub_77C3B0()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77c3b0*/
  dbl_B76550 = 0.2; /*0x77c3b7*/
  dbl_B76558 = 0.8; /*0x77c3cb*/
  dword_B76560 = 128; /*0x77c3df*/
  v1 = 0; /*0x77c3e4*/
  do /*0x77c3e9*/
  {
    ++v1; /*0x77c3e6*/
    v0 >>= 1; /*0x77c3e7*/
  }
  while ( v0 ); /*0x77c3e9*/
  dword_B76540 = 0; /*0x77c3eb*/
  dword_B7653C = v1 - 1; /*0x77c3f9*/
  dword_B76534 = 0; /*0x77c3ff*/
  byte_B76544 = 0; /*0x77c405*/
  dword_B76538 = 1 << (v1 - 1); /*0x77c40b*/
  g_WOL_ConnectionPool = RA2_OPNEW(4 * (1 << (v1 - 1))); /*0x77c423*/
  memset(g_WOL_ConnectionPool, 0, 4 * dword_B76538); /*0x77c429*/
  dword_B76548 = (int (*)(unsigned int))String::ComputeHash; /*0x77c430*/
  return atexit(sub_77C450); /*0x77c442*/
}
} // namespace gamemd

// 0x77C580
namespace gamemd {
int sub_77C580()
{
  dword_B765F8 = 0; /*0x77c587*/
  dword_B765FC = 0; /*0x77c58c*/
  dword_B76600 = 0; /*0x77c591*/
  return atexit(sub_77C5A0); /*0x77c59c*/
}
} // namespace gamemd

// 0x77C5A0
namespace gamemd {
void sub_77C5A0()
{
  int i; // esi

  for ( i = 0; i < dword_B765F8; ++i ) /*0x77c5aa*/
    DeleteAndZero((void **)dword_B76600 + i); /*0x77c5b4*/
  dword_B765F8 = 0; /*0x77c5c9*/
  RA2_OPDEL(dword_B76600); /*0x77c5d4*/
}
} // namespace gamemd

// 0x77C5E0
namespace gamemd {
int sub_77C5E0()
{
  dword_B73BD8 = 0; /*0x77c5e7*/
  dword_B73BDC = 0; /*0x77c5ec*/
  dword_B73BE0 = 0; /*0x77c5f1*/
  return atexit(sub_77C600); /*0x77c5fc*/
}
} // namespace gamemd

// 0x77C600
namespace gamemd {
void sub_77C600()
{
  int i; // esi

  for ( i = 0; i < dword_B73BD8; ++i ) /*0x77c60a*/
    DeleteAndZero((void **)dword_B73BE0 + i); /*0x77c614*/
  dword_B73BD8 = 0; /*0x77c629*/
  RA2_OPDEL(dword_B73BE0); /*0x77c634*/
}
} // namespace gamemd

// 0x77C640
namespace gamemd {
int sub_77C640()
{
  stru_B736F8 = 0; /*0x77c647*/
  dword_B736FC = 0; /*0x77c64c*/
  dword_B73700 = 0; /*0x77c651*/
  return atexit(sub_77C660); /*0x77c65c*/
}
} // namespace gamemd

// 0x77C660
namespace gamemd {
void sub_77C660()
{
  int i; // esi

  for ( i = 0; i < stru_B736F8; ++i ) /*0x77c66a*/
    DeleteAndZero((void **)dword_B73700 + i); /*0x77c674*/
  stru_B736F8 = 0; /*0x77c689*/
  RA2_OPDEL(dword_B73700); /*0x77c694*/
}
} // namespace gamemd

// 0x77C6A0
namespace gamemd {
int sub_77C6A0()
{
  dword_B76B00 = 0; /*0x77c6a7*/
  dword_B76B04 = 0; /*0x77c6ac*/
  dword_B76B08 = 0; /*0x77c6b1*/
  return atexit(sub_77C6C0); /*0x77c6bc*/
}
} // namespace gamemd

// 0x77C6C0
namespace gamemd {
void sub_77C6C0()
{
  int i; // esi

  for ( i = 0; i < dword_B76B00; ++i ) /*0x77c6ca*/
    DeleteAndZero((void **)dword_B76B08 + i); /*0x77c6d4*/
  dword_B76B00 = 0; /*0x77c6e9*/
  RA2_OPDEL(dword_B76B08); /*0x77c6f4*/
}
} // namespace gamemd

// 0x77C700
namespace gamemd {
int sub_77C700()
{
  stru_B76510 = 0; /*0x77c707*/
  dword_B76514 = 0; /*0x77c70c*/
  dword_B76518 = 0; /*0x77c711*/
  return atexit(sub_77C720); /*0x77c71c*/
}
} // namespace gamemd

// 0x77C720
namespace gamemd {
void sub_77C720()
{
  int i; // esi

  for ( i = 0; i < stru_B76510; ++i ) /*0x77c72a*/
    DeleteAndZero((void **)dword_B76518 + i); /*0x77c734*/
  stru_B76510 = 0; /*0x77c749*/
  RA2_OPDEL(dword_B76518); /*0x77c754*/
}
} // namespace gamemd

// 0x77C760
namespace gamemd {
int sub_77C760()
{
  dword_B73AE8 = 0; /*0x77c767*/
  dword_B73AEC = 0; /*0x77c76c*/
  dword_B73AF0 = 0; /*0x77c771*/
  return atexit(sub_77C780); /*0x77c77c*/
}
} // namespace gamemd

// 0x77C780
namespace gamemd {
void sub_77C780()
{
  int i; // esi

  for ( i = 0; i < dword_B73AE8; ++i ) /*0x77c78a*/
    DeleteAndZero((void **)dword_B73AF0 + i); /*0x77c794*/
  dword_B73AE8 = 0; /*0x77c7a9*/
  RA2_OPDEL(dword_B73AF0); /*0x77c7b4*/
}
} // namespace gamemd

// 0x77C7C0
namespace gamemd {
int sub_77C7C0()
{
  dword_B77820 = 0; /*0x77c7c7*/
  dword_B77824 = 0; /*0x77c7cc*/
  dword_B77828 = 0; /*0x77c7d1*/
  return atexit(sub_77C7E0); /*0x77c7dc*/
}
} // namespace gamemd

// 0x77C7E0
namespace gamemd {
void sub_77C7E0()
{
  int i; // esi

  for ( i = 0; i < dword_B77820; ++i ) /*0x77c7ea*/
    DeleteAndZero((void **)dword_B77828 + i); /*0x77c7f4*/
  dword_B77820 = 0; /*0x77c809*/
  RA2_OPDEL(dword_B77828); /*0x77c814*/
}
} // namespace gamemd

// 0x77C820
namespace gamemd {
int sub_77C820()
{
  stru_B73708 = 0; /*0x77c827*/
  dword_B7370C = 0; /*0x77c82c*/
  dword_B73710 = 0; /*0x77c831*/
  return atexit(sub_77C840); /*0x77c83c*/
}
} // namespace gamemd

// 0x77C840
namespace gamemd {
void sub_77C840()
{
  int i; // esi

  for ( i = 0; i < stru_B73708; ++i ) /*0x77c84a*/
    DeleteAndZero((void **)dword_B73710 + i); /*0x77c854*/
  stru_B73708 = 0; /*0x77c869*/
  RA2_OPDEL(dword_B73710); /*0x77c874*/
}
} // namespace gamemd

// 0x77C880
namespace gamemd {
int sub_77C880()
{
  stru_B76188 = 0; /*0x77c887*/
  dword_B7618C = 0; /*0x77c88c*/
  dword_B76190 = 0; /*0x77c891*/
  return atexit(sub_77C8A0); /*0x77c89c*/
}
} // namespace gamemd

// 0x77C8A0
namespace gamemd {
void sub_77C8A0()
{
  int i; // esi

  for ( i = 0; i < stru_B76188; ++i ) /*0x77c8aa*/
    DeleteAndZero((void **)dword_B76190 + i); /*0x77c8b4*/
  stru_B76188 = 0; /*0x77c8c9*/
  RA2_OPDEL(dword_B76190); /*0x77c8d4*/
}
} // namespace gamemd

// 0x77C8E0
namespace gamemd {
int sub_77C8E0()
{
  g_WindowManager = 0; /*0x77c8e7*/
  dword_B73AAC = 0; /*0x77c8ec*/
  dword_B73AB0 = 0; /*0x77c8f1*/
  return atexit(sub_77C900); /*0x77c8fc*/
}
} // namespace gamemd

// 0x77C900
namespace gamemd {
void sub_77C900()
{
  int i; // esi

  for ( i = 0; i < g_WindowManager; ++i ) /*0x77c90a*/
    DeleteAndZero((void **)dword_B73AB0 + i); /*0x77c914*/
  g_WindowManager = 0; /*0x77c929*/
  RA2_OPDEL(dword_B73AB0); /*0x77c934*/
}
} // namespace gamemd

// 0x77C940
namespace gamemd {
int sub_77C940()
{
  dword_B76980 = 0; /*0x77c947*/
  dword_B76984 = 0; /*0x77c94c*/
  dword_B76988 = 0; /*0x77c951*/
  return atexit(sub_77C960); /*0x77c95c*/
}
} // namespace gamemd

// 0x77C960
namespace gamemd {
void sub_77C960()
{
  int i; // esi

  for ( i = 0; i < dword_B76980; ++i ) /*0x77c96a*/
    DeleteAndZero((void **)dword_B76988 + i); /*0x77c974*/
  dword_B76980 = 0; /*0x77c989*/
  RA2_OPDEL(dword_B76988); /*0x77c994*/
}
} // namespace gamemd

// 0x77C9A0
namespace gamemd {
int sub_77C9A0()
{
  g_WOL_BuddyList = 0; /*0x77c9a7*/
  dword_B779B4 = 0; /*0x77c9ac*/
  dword_B779B8 = 0; /*0x77c9b1*/
  return atexit(sub_77C9C0); /*0x77c9bc*/
}
} // namespace gamemd

// 0x77C9C0
namespace gamemd {
void sub_77C9C0()
{
  int i; // esi

  for ( i = 0; i < g_WOL_BuddyList; ++i ) /*0x77c9ca*/
    DeleteAndZero((void **)dword_B779B8 + i); /*0x77c9d4*/
  g_WOL_BuddyList = 0; /*0x77c9e9*/
  RA2_OPDEL(dword_B779B8); /*0x77c9f4*/
}
} // namespace gamemd

// 0x77CA00
namespace gamemd {
int sub_77CA00()
{
  unknown_libname_73(&unk_B73ACC); /*0x77ca05*/
  return atexit(unknown_libname_40); /*0x77ca15*/
}
} // namespace gamemd

// 0x77CA20
namespace gamemd {
int unknown_libname_40()
{
  DeleteAndZero((void **)&unk_B73ACC); /*0x77ca25*/
}
} // namespace gamemd

// 0x77CA30
namespace gamemd {
int sub_77CA30()
{
  unknown_libname_73(&g_WOL_LoginObject); /*0x77ca35*/
  return atexit(unknown_libname_41); /*0x77ca45*/
}
} // namespace gamemd

// 0x77CA50
namespace gamemd {
int unknown_libname_41()
{
  DeleteAndZero((void **)&g_WOL_LoginObject); /*0x77ca55*/
}
} // namespace gamemd

// 0x77CA60
namespace gamemd {
int sub_77CA60()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77ca60*/
  dbl_B769B0 = 0.2; /*0x77ca67*/
  dbl_B769B8 = 0.8; /*0x77ca7b*/
  dword_B769C0 = 128; /*0x77ca8f*/
  v1 = 0; /*0x77ca94*/
  do /*0x77ca99*/
  {
    ++v1; /*0x77ca96*/
    v0 >>= 1; /*0x77ca97*/
  }
  while ( v0 ); /*0x77ca99*/
  dword_B769A0 = 0; /*0x77ca9b*/
  dword_B7699C = v1 - 1; /*0x77caa9*/
  dword_B76994 = 0; /*0x77caaf*/
  byte_B769A4 = 0; /*0x77cab5*/
  dword_B76998 = 1 << (v1 - 1); /*0x77cabb*/
  dword_B76990 = RA2_OPNEW(4 * (1 << (v1 - 1))); /*0x77cad3*/
  memset(dword_B76990, 0, 4 * dword_B76998); /*0x77cad9*/
  dword_B769A8 = (int (*)(unsigned int))String::ComputeHash; /*0x77cae0*/
  return atexit(sub_77CB00); /*0x77caf2*/
}
} // namespace gamemd

// 0x77CC30
namespace gamemd {
int sub_77CC30()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x77cc30*/
  dbl_B76628 = 0.2; /*0x77cc37*/
  dbl_B76630 = 0.8; /*0x77cc4b*/
  dword_B76638 = 128; /*0x77cc5f*/
  v1 = 0; /*0x77cc64*/
  do /*0x77cc69*/
  {
    ++v1; /*0x77cc66*/
    v0 >>= 1; /*0x77cc67*/
  }
  while ( v0 ); /*0x77cc69*/
  dword_B76618 = 0; /*0x77cc6b*/
  dword_B76614 = v1 - 1; /*0x77cc79*/
  dword_B7660C = 0; /*0x77cc7f*/
  byte_B7661C = 0; /*0x77cc85*/
  dword_B76610 = 1 << (v1 - 1); /*0x77cc8b*/
  dword_B76608 = RA2_OPNEW(4 * (1 << (v1 - 1))); /*0x77cca3*/
  memset(dword_B76608, 0, 4 * dword_B76610); /*0x77cca9*/
  dword_B76620 = (int (*)(unsigned int))String::ComputeHash; /*0x77ccb0*/
  return atexit(sub_77CCD0); /*0x77ccc2*/
}
} // namespace gamemd

// 0x77CE10
namespace gamemd {
int sub_77CE10()
{
  int result; // eax

  result = dword_84A1C8 - dword_84A1C4 - 4; /*0x77ce1d*/
  dword_B765F0 = result; /*0x77ce20*/
  return result; /*0x77ce25*/
}
} // namespace gamemd

// 0x77CE30
namespace gamemd {
int sub_77CE30()
{
  int result; // eax

  result = dword_84A1D8 - dword_84A1D4 - 4; /*0x77ce3d*/
  dword_B73E3C = result; /*0x77ce40*/
  return result; /*0x77ce45*/
}
} // namespace gamemd

// 0x77CE50
namespace gamemd {
int sub_77CE50()
{
  dword_B76AD0 = 0; /*0x77ce57*/
  dword_B76AD4 = 0; /*0x77ce5c*/
  dword_B76AD8 = 0; /*0x77ce61*/
  return atexit(sub_77CE70); /*0x77ce6c*/
}
} // namespace gamemd

// 0x77CE70
namespace gamemd {
void sub_77CE70()
{
  int i; // esi

  for ( i = 0; i < dword_B76AD0; ++i ) /*0x77ce7a*/
    DeleteAndZero((void **)dword_B76AD8 + i); /*0x77ce84*/
  dword_B76AD0 = 0; /*0x77ce99*/
  RA2_OPDEL(dword_B76AD8); /*0x77cea4*/
}
} // namespace gamemd

// 0x77CEB0
namespace gamemd {
int sub_77CEB0()
{
  dword_B76970 = 0; /*0x77ceb7*/
  dword_B76974 = 0; /*0x77cebc*/
  dword_B76978 = 0; /*0x77cec1*/
  return atexit(sub_77CED0); /*0x77cecc*/
}
} // namespace gamemd

// 0x77CED0
namespace gamemd {
void sub_77CED0()
{
  int i; // esi

  for ( i = 0; i < dword_B76970; ++i ) /*0x77ceda*/
    DeleteAndZero((void **)dword_B76978 + i); /*0x77cee4*/
  dword_B76970 = 0; /*0x77cef9*/
  RA2_OPDEL(dword_B76978); /*0x77cf04*/
}
} // namespace gamemd

// 0x77CF10
namespace gamemd {
int sub_77CF10()
{
  unknown_libname_73(&stru_B76AC4); /*0x77cf15*/
  return atexit(unknown_libname_42); /*0x77cf25*/
}
} // namespace gamemd

// 0x77CF30
namespace gamemd {
int unknown_libname_42()
{
  DeleteAndZero((void **)&stru_B76AC4); /*0x77cf35*/
}
} // namespace gamemd

// 0x77CF70
namespace gamemd {
int sub_77CF70()
{
  unknown_libname_73(&unk_B76E34); /*0x77cf75*/
  return atexit(unknown_libname_43); /*0x77cf85*/
}
} // namespace gamemd

// 0x77CF90
namespace gamemd {
int unknown_libname_43()
{
  DeleteAndZero((void **)&unk_B76E34); /*0x77cf95*/
}
} // namespace gamemd

// 0x77CFA0
namespace gamemd {
int sub_77CFA0()
{
  unknown_libname_73(&unk_B73B30); /*0x77cfa5*/
  return atexit(unknown_libname_44); /*0x77cfb5*/
}
} // namespace gamemd

// 0x77CFC0
namespace gamemd {
int unknown_libname_44()
{
  DeleteAndZero((void **)&unk_B73B30); /*0x77cfc5*/
}
} // namespace gamemd

// 0x77CFD0
namespace gamemd {
int sub_77CFD0()
{
  unknown_libname_73(&stru_B7622C); /*0x77cfd5*/
  return atexit(unknown_libname_45); /*0x77cfe5*/
}
} // namespace gamemd

// 0x77CFF0
namespace gamemd {
int unknown_libname_45()
{
  DeleteAndZero((void **)&stru_B7622C); /*0x77cff5*/
}
} // namespace gamemd

// 0x77D000
namespace gamemd {
int sub_77D000()
{
  unknown_libname_73(&unk_B76908); /*0x77d005*/
  return atexit(unknown_libname_46); /*0x77d015*/
}
} // namespace gamemd

// 0x77D020
namespace gamemd {
int unknown_libname_46()
{
  DeleteAndZero((void **)&unk_B76908); /*0x77d025*/
}
} // namespace gamemd

// 0x77D030
namespace gamemd {
int sub_77D030()
{
  unknown_libname_73(&unk_B77794); /*0x77d035*/
  return atexit(unknown_libname_47); /*0x77d045*/
}
} // namespace gamemd

// 0x77D050
namespace gamemd {
int unknown_libname_47()
{
  DeleteAndZero((void **)&unk_B77794); /*0x77d055*/
}
} // namespace gamemd

// 0x77D060
namespace gamemd {
int sub_77D060()
{
  unknown_libname_73(&unk_B778F4); /*0x77d065*/
  return atexit(unknown_libname_48); /*0x77d075*/
}
} // namespace gamemd

// 0x77D080
namespace gamemd {
int unknown_libname_48()
{
  DeleteAndZero((void **)&unk_B778F4); /*0x77d085*/
}
} // namespace gamemd

// 0x77D090
namespace gamemd {
int sub_77D090()
{
  unknown_libname_73(&unk_B778FC); /*0x77d095*/
  return atexit(unknown_libname_49); /*0x77d0a5*/
}
} // namespace gamemd

// 0x77D0B0
namespace gamemd {
int unknown_libname_49()
{
  DeleteAndZero((void **)&unk_B778FC); /*0x77d0b5*/
}
} // namespace gamemd

// 0x77D0C0
namespace gamemd {
int sub_77D0C0()
{
  unknown_libname_73(&stru_B765EC); /*0x77d0c5*/
  return atexit(unknown_libname_50); /*0x77d0d5*/
}
} // namespace gamemd

// 0x77D0E0
namespace gamemd {
int unknown_libname_50()
{
  DeleteAndZero((void **)&stru_B765EC); /*0x77d0e5*/
}
} // namespace gamemd

// 0x77D0F0
namespace gamemd {
int sub_77D0F0()
{
  unknown_libname_73(&stru_B76900); /*0x77d0f5*/
  return atexit(unknown_libname_51); /*0x77d105*/
}
} // namespace gamemd

// 0x77D110
namespace gamemd {
int unknown_libname_51()
{
  DeleteAndZero(&stru_B76900); /*0x77d115*/
}
} // namespace gamemd

// 0x77D120
namespace gamemd {
int sub_77D120()
{
  ((ComPtr *)(&stru_B75E48))->Constructor(); /*0x77d125*/
  stru_B75E48 = (int)&rc_ptr_PlayerProfile_vftable; /*0x77d12f*/
  return atexit(sub_77D140); /*0x77d13f*/
}
} // namespace gamemd

// 0x77D140
namespace gamemd {
void sub_77D140()
{
  stru_B75E48 = (int)&rc_ptr_PlayerProfile_vftable; /*0x77d140*/
  ((ComPtr *)(&stru_B75E48))->Release(); /*0x77d14f*/
}
} // namespace gamemd

// 0x77D160
namespace gamemd {
int sub_77D160()
{
  dword_B76478 = TimerGetTicks(); /*0x77d16f*/
  dword_B76480 = 0; /*0x77d174*/
  return atexit(nullsub_263); /*0x77d184*/
}
} // namespace gamemd

// 0x77D190
namespace gamemd {
void nullsub_263()
{
  ; /*0x77d190*/
}
} // namespace gamemd

// 0x77D1A0
namespace gamemd {
int sub_77D1A0()
{
  unknown_libname_74(&unk_B76230); /*0x77d1a5*/
  return atexit(unknown_libname_53); /*0x77d1b5*/
}
} // namespace gamemd

// 0x77D1C0
namespace gamemd {
int unknown_libname_53()
{
  DeleteAndZero::Alt(&unk_B76230); /*0x77d1c5*/
}
} // namespace gamemd

// 0x77D240
namespace gamemd {
int E4Recv_77D240::sub_77D240()
{

  int owningHouseIndex; // eax
  char *v2; // ebx
  int v3; // esi
  int i; // edi
  char *v6; // eax

  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x77d240*/
  v2 = 0; /*0x77d248*/
  v3 = 0; /*0x77d24a*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x77d251*/
    return -1; /*0x77d28a*/
  for ( i = 0; ; i += 108 ) /*0x77d253*/
  {
    if ( i >= 0 && v3 < owningHouseIndex ) /*0x77d25b*/
      v2 = (char *)g_WOL_UserList.nextObject + i; /*0x77d262*/
    v6 = ((String *)((String *)this))->GetOrEmpty_Alt(); /*0x77d26b*/
    if ( !_strcmpi(v6, v2 + 36) ) /*0x77d271*/
      break; /*0x77d271*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x77d27d*/
    if ( ++v3 >= g_WOL_UserList.owningHouseIndex ) /*0x77d288*/
      return -1; /*0x77d288*/
  }
  return v3; /*0x77d28a*/

}
} // namespace gamemd

// 0x77D350
namespace gamemd {
bool ObjectClass::sub_77D350(ObjectClass * String1)
{

  wchar_t *StringCSF; // eax
  size_t v3; // eax
  const wchar_t *v5; // [esp+0h] [ebp-204h]
  wchar_t Buffer[256]; // [esp+4h] [ebp-200h] BYREF

  StringCSF = GetStringCSF(aTxtBuddyFilter, 0, g_Str_File_wonline_cpp, 873); /*0x77d36a*/
  swprintf(Buffer, (const size_t)StringCSF, v5); /*0x77d375*/
  v3 = wcslen(Buffer); /*0x77d37f*/
  return _wcsnicmp((const wchar_t *)String1, Buffer, v3) == 0; /*0x77d397*/

}
} // namespace gamemd

// 0x77D3A0
namespace gamemd {
bool ObjectClass::sub_77D3A0(ObjectClass * String1)
{

  wchar_t *StringCSF; // eax
  size_t v3; // eax
  const wchar_t *v5; // [esp+0h] [ebp-204h]
  wchar_t Buffer[256]; // [esp+4h] [ebp-200h] BYREF

  StringCSF = GetStringCSF(aTxtClanFilter, 0, g_Str_File_wonline_cpp, 879); /*0x77d3ba*/
  swprintf(Buffer, (const size_t)StringCSF, v5); /*0x77d3c5*/
  v3 = wcslen(Buffer); /*0x77d3cf*/
  return _wcsnicmp((const wchar_t *)String1, Buffer, v3) == 0; /*0x77d3e7*/

}
} // namespace gamemd

// 0x77D720
namespace gamemd {
unsigned int * sub_77D720(unsigned int * a1, int a2)
{
  u_long v3; // ecx
  u_long v4; // eax
  int v5; // eax
  int v6; // edx
  int v8; // [esp+4h] [ebp-18h] BYREF
  unsigned char v9[3]; // [esp+8h] [ebp-14h] BYREF
  int16_t v10; // [esp+Bh] [ebp-11h]
  char v11; // [esp+Dh] [ebp-Fh]
  unsigned int v12[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = *(unsigned int *)(a2 + 24); /*0x77d726*/
  v8 = 0; /*0x77d730*/
  v11 = 0; /*0x77d738*/
  v4 = ntohl(v3); /*0x77d73d*/
  v9[2] = IDA_BYTE1(v4); /*0x77d752*/
  v10 = (uint8_t)v4; /*0x77d752*/
  v9[0] = IDA_HIBYTE(v4); /*0x77d756*/
  v9[1] = IDA_BYTE2(v4); /*0x77d765*/
  NetworkAddress::Assign(v12, &v8, (int)v9, 0); /*0x77d76f*/
  v5 = v12[1]; /*0x77d77a*/
  *a1 = v12[0]; /*0x77d77e*/
  v6 = v12[2]; /*0x77d780*/
  a1[1] = v5; /*0x77d784*/
  a1[2] = v6; /*0x77d78a*/
  return a1; /*0x77d789*/
}
} // namespace gamemd

// 0x77D8C0
namespace gamemd {
int unknown_libname_54()
{
  return WebBrowser::ShowDialog(g_INI_Key_Battleclans);
}
} // namespace gamemd

// 0x77D8D0
namespace gamemd {
int unknown_libname_55()
{
  return WebBrowser::ShowDialog(g_INI_Key_Battleclans);
}
} // namespace gamemd

// 0x77D8E0
namespace gamemd {
int unknown_libname_56()
{
  return WebBrowser::ShowDialog(g_INI_Key_Ladder);
}
} // namespace gamemd

// 0x77D8F0
namespace gamemd {
int unknown_libname_57()
{
  return WebBrowser::ShowDialog(aNews);
}
} // namespace gamemd

// 0x77D900
namespace gamemd {
int unknown_libname_58()
{
  return WebBrowser::ShowDialog(g_INI_Key_Manage);
}
} // namespace gamemd

// 0x77D9F0
namespace gamemd {
int sub_77D9F0()
{
  unknown_libname_73(&dword_B73E40); /*0x77d9f5*/
  return atexit(unknown_libname_59); /*0x77da05*/
}
} // namespace gamemd

// 0x77DA10
namespace gamemd {
int unknown_libname_59()
{
  DeleteAndZero((void **)&dword_B73E40); /*0x77da15*/
}
} // namespace gamemd

// 0x77DA20
namespace gamemd {
int sub_77DA20()
{
  unknown_libname_73(&g_WebBrowserConfig); /*0x77da25*/
  return atexit(unknown_libname_60); /*0x77da35*/
}
} // namespace gamemd

// 0x77DA40
namespace gamemd {
int unknown_libname_60()
{
  DeleteAndZero((void **)&g_WebBrowserConfig); /*0x77da45*/
}
} // namespace gamemd

// 0x77DED0
namespace gamemd {
int sub_77DED0()
{
  int result; // eax

  dword_B76234 = INIClass::ReadInt_Overwrite( /*0x77deeb*/
                   (int)&dword_8870C0,
                   (uint8_t *)g_INI_Key_WOnline,
                   (uint8_t *)aAllowpage,
                   1);
  dword_B779F0 = INIClass::ReadInt_Overwrite( /*0x77df06*/
                   (int)&dword_8870C0,
                   (uint8_t *)g_INI_Key_WOnline,
                   (uint8_t *)aAllowfind,
                   1);
  dword_B779BC = INIClass::ReadInt_Overwrite( /*0x77df21*/
                   (int)&dword_8870C0,
                   (uint8_t *)g_INI_Key_WOnline,
                   (uint8_t *)aLangfilter,
                   1);
  dword_B7690C = INIClass::ReadInt_Overwrite( /*0x77df3c*/
                   (int)&dword_8870C0,
                   (uint8_t *)g_INI_Key_WOnline,
                   (uint8_t *)aLobmusic,
                   1);
  dword_B77784 = INIClass::ReadInt_Overwrite( /*0x77df57*/
                   (int)&dword_8870C0,
                   (uint8_t *)g_INI_Key_WOnline,
                   (uint8_t *)aShowall,
                   1);
  dword_B779DC = INIClass::ReadInt_Overwrite( /*0x77df72*/
                   (int)&dword_8870C0,
                   (uint8_t *)g_INI_Key_WOnline,
                   (uint8_t *)aDisplayasian,
                   1);
  dword_B779C0 = INIClass::ReadInt_Overwrite( /*0x77df8d*/
                   (int)&dword_8870C0,
                   (uint8_t *)g_INI_Key_WOnline,
                   (uint8_t *)aDisplaylatin,
                   1);
  byte_B76AF0 = INIClass::ReadBool_Overwrite( /*0x77dfa8*/
                  (int)&dword_8870C0,
                  (uint8_t *)g_INI_Key_WOnline,
                  (uint8_t *)aDisplaybuddies,
                  0);
  byte_B73AD0 = INIClass::ReadBool_Overwrite( /*0x77dfbe*/
                  (int)&dword_8870C0,
                  (uint8_t *)g_INI_Key_WOnline,
                  (uint8_t *)aDisplayclan,
                  0);
  result = INIClass::ReadInt_Overwrite( /*0x5ee1a1*/
             (int)&dword_8870C0,
             (uint8_t *)aMultiplayer,
             (uint8_t *)aObservermode,
             0);
  g_MenuStateFlags = result; /*0x5ee1a6*/
  return result; /*0x5ee1ab*/
}
} // namespace gamemd

// 0x77DFD0
namespace gamemd {
void sub_77DFD0()
{
  int v0[9]; // [esp+0h] [ebp-24h] BYREF

  RawFileClass::Construct(v0, (int)aRa2mdIni); /*0x77dfdc*/
  ((INIClass *)((char *)&dword_8870C0))->SetInt((uint8_t *)g_INI_Key_WOnline, aAllowpage, dword_B76234, 0); /*0x77dff8*/
  ((INIClass *)((char *)&dword_8870C0))->SetInt((uint8_t *)g_INI_Key_WOnline, aAllowfind, dword_B779F0, 0); /*0x77e015*/
  ((INIClass *)((char *)&dword_8870C0))->SetInt((uint8_t *)g_INI_Key_WOnline, aLangfilter, dword_B779BC, 0); /*0x77e032*/
  ((INIClass *)((char *)&dword_8870C0))->SetInt((uint8_t *)g_INI_Key_WOnline, aLobmusic, dword_B7690C, 0); /*0x77e04e*/
  ((INIClass *)((char *)&dword_8870C0))->SetInt((uint8_t *)g_INI_Key_WOnline, aShowall, dword_B77784, 0); /*0x77e06b*/
  ((INIClass *)((char *)&dword_8870C0))->SetInt((uint8_t *)g_INI_Key_WOnline, aDisplayasian, dword_B779DC, 0); /*0x77e088*/
  ((INIClass *)((char *)&dword_8870C0))->SetInt((uint8_t *)g_INI_Key_WOnline, aDisplaylatin, dword_B779C0, 0); /*0x77e0a4*/
  INIClass::SetBool((char *)&dword_8870C0, (uint8_t *)g_INI_Key_WOnline, aDisplaybuddies, byte_B76AF0); /*0x77e0bf*/
  INIClass::SetBool((char *)&dword_8870C0, (uint8_t *)g_INI_Key_WOnline, aDisplayclan, byte_B73AD0); /*0x77e0da*/
  INIClass::WriteDigest(&dword_8870C0, (int)v0, 0); /*0x77e0eb*/
  Config::SaveObserverMode(); /*0x77e0f0*/
  ((RawFileClass *)(v0))->Dtor(); /*0x77e0f9*/
}
} // namespace gamemd

// 0x77E780
namespace gamemd {
int sub_77E780()
{
  return CCINIClass_RulesHash ^ CCINIClass_AIHash ^ CCINIClass_ArtHash; /*0x77e795*/
}
} // namespace gamemd

// 0x77E820
namespace gamemd {
void ** ParseStringCommaInts(char * String, int * a2, int * a3, int * a4, int * a5, int * a6, void ** a7)
{
  char *v8; // eax
  int v9; // eax
  char *v10; // eax
  int v11; // eax
  char *v12; // eax
  int v13; // eax
  char *v14; // eax
  int v15; // eax
  char *v16; // eax
  int v17; // eax
  char *v18; // eax

  v8 = strtok(String, Str); /*0x77e829*/
  if ( v8 ) /*0x77e833*/
    v9 = atol(v8); /*0x77e836*/
  else
    v9 = 0; /*0x77e840*/
  *a2 = v9; /*0x77e849*/
  v10 = strtok(0, Str); /*0x77e84b*/
  if ( v10 ) /*0x77e856*/
    v11 = atol(v10); /*0x77e859*/
  else
    v11 = 0; /*0x77e863*/
  *a3 = v11; /*0x77e870*/
  v12 = strtok(0, Str); /*0x77e872*/
  if ( v12 ) /*0x77e87c*/
    v13 = atol(v12); /*0x77e87f*/
  else
    v13 = 0; /*0x77e889*/
  *a4 = v13; /*0x77e896*/
  v14 = strtok(0, Str); /*0x77e898*/
  if ( v14 ) /*0x77e8a2*/
    v15 = atol(v14); /*0x77e8a5*/
  else
    v15 = 0; /*0x77e8af*/
  *a5 = v15; /*0x77e8bc*/
  v16 = strtok(0, Str); /*0x77e8be*/
  if ( v16 ) /*0x77e8c8*/
    v17 = atol(v16); /*0x77e8cb*/
  else
    v17 = 0; /*0x77e8d5*/
  *a6 = v17; /*0x77e8e2*/
  v18 = strtok(0, Str); /*0x77e8e4*/
// 0x7b48d0
  return ((String *)(a7))->Assign_Alt(v18); /*0x77e8f6*/
}
} // namespace gamemd
