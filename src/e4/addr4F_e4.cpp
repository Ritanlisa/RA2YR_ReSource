// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_4F2280_e4.hpp"
#include "e4/classes/E4Recv_4F2300_e4.hpp"
#include "e4/classes/E4Recv_4F2640_e4.hpp"
#include "e4/classes/E4Recv_4F26E0_e4.hpp"
#include "e4/classes/E4Recv_4F2770_e4.hpp"
#include "e4/classes/E4Recv_4F2C00_e4.hpp"
#include "e4/classes/E4Recv_4F2F10_e4.hpp"
#include "e4/classes/E4Recv_4F3460_e4.hpp"
#include "e4/classes/E4Recv_4F3AB0_e4.hpp"
#include "e4/classes/E4Recv_4F3C40_e4.hpp"
#include "e4/classes/E4Recv_4F3D40_e4.hpp"
#include "e4/classes/E4Recv_4F4D30_e4.hpp"
#include "e4/classes/E4Recv_4F7850_e4.hpp"
#include "e4/classes/E4Recv_4F9670_e4.hpp"
#include "e4/classes/E4Recv_4FA210_e4.hpp"
#include "e4/classes/E4Recv_4FBD00_e4.hpp"
#include "e4/classes/E4Recv_4FBD80_e4.hpp"
#include "e4/classes/E4Recv_4FCE00_e4.hpp"
#include "e4/classes/E4Recv_4FFD50_e4.hpp"
#include "e4/classes/E4Recv_4FFD90_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/MSEngine_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x4F10E0
namespace gamemd {
int InGameUI_Open()
{
  unsigned __int16 v0; // cx
  HWND v1; // eax
  HWND v2; // esi
  LONG dwNewLong; // [esp+0h] [ebp-4h] BYREF

  dwNewLong = 0; /*0x4f10e9*/
  if ( !g_GameMode_Current || g_GameMode_Current == 5 ) /*0x4f10f6*/
  {
    v0 = 181; /*0x4f1130*/
  }
  else
  {
    if ( g_GameMode_Current != 4 ) /*0x4f10fb*/
    {
      v1 = (HWND)CreateDialog(0xBBAu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))Options::DlgProc, 0); /*0x4f1127*/
      goto LABEL_10; /*0x4f1127*/
    }
    if ( MuteSWLaunches ) /*0x4f110b*/
      v0 = 3002; /*0x4f110d*/
    else
      v0 = 255; /*0x4f1114*/
  }
  v1 = (HWND)CreateDialog(v0, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))Options::DlgProc, 0); /*0x4f1135*/
  LABEL_10:
  v2 = v1; /*0x4f113a*/
  if ( v1 ) /*0x4f113e*/
  {
    SetWindowLongA(v1, 8, (LONG)&dwNewLong); /*0x4f1148*/
    Dialog::Show(v2); /*0x4f1150*/
    if ( !dwNewLong ) /*0x4f115b*/
    {
      while ( Dialog::PumpMessages() != 1 ) /*0x4f1164*/
      {
        if ( dwNewLong ) /*0x4f116c*/
          goto LABEL_16; /*0x4f116c*/
      }
      dwNewLong = 1; /*0x4f1170*/
    }
  LABEL_16:
    Dialog::Destroy(v2); /*0x4f1178*/
  }
  if ( dwNewLong == 1004 ) /*0x4f1189*/
    ScenarioClass::ShowMissionBriefing(g_ScenarioClass_Instance); /*0x4f1191*/
  return MapClass::MarkForRedraw(2); /*0x4f11a2*/
}
}
// 0x4F1840
namespace gamemd {
long sub_4F1840()
{
  HWND Dialog; // esi
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  dwNewLong = 0; /*0x4f184e*/
  Dialog = (HWND)CreateDialog(0xB6u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_4F18B0, 0); /*0x4f185b*/
  if ( Dialog ) /*0x4f185f*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x4f1869*/
    Dialog::Show(Dialog); /*0x4f1871*/
    if ( !dwNewLong ) /*0x4f187c*/
    {
      while ( Dialog::PumpMessages() != 1 ) /*0x4f1885*/
      {
        if ( dwNewLong ) /*0x4f188d*/
          goto LABEL_7; /*0x4f188d*/
      }
      dwNewLong = 1; /*0x4f1891*/
    }
  LABEL_7:
    Dialog::Destroy(Dialog); /*0x4f1899*/
  }
  return dwNewLong; /*0x4f18a4*/
}
}
// 0x4F18B0
namespace gamemd {
void sub_4F18B0(HWND hDlg, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  HWND DlgItem; // ebp
  wchar_t *StringCSF; // eax
  HWND v7; // esi
  int v8; // edi
  wchar_t *v9; // eax
  HouseClass *v10; // ecx
  int v11; // edx
  wchar_t *v12; // eax
  _DWORD *WindowLongA; // eax

  result = BaseDialogProc(hDlg, a2, a3, a4); /*0x4f18c9*/
  if ( !result ) /*0x4f18d0*/
  {
    if ( a2 == 273 ) /*0x4f18dc*/
    {
      WindowLongA = (_DWORD *)GetWindowLongA(hDlg, 8); /*0x4f1a3a*/
      if ( !HIWORD(a3) ) /*0x4f1a42*/
      {
        if ( (unsigned __int16)a3 > 0x6C9u ) /*0x4f1a55*/
        {
          if ( (unsigned __int16)a3 == 1810 ) /*0x4f1a88*/
            *WindowLongA = dword_A8EE80; /*0x4f1a90*/
        }
        else
        {
          if ( (unsigned __int16)a3 == 1737 ) /*0x4f1a57*/
          {
            *WindowLongA = dword_A8EE7C; /*0x4f1a79*/
            return 0; /*0x4f1a7f*/
          }
          if ( (unsigned __int16)a3 == 1 || (unsigned __int16)a3 == 1670 ) /*0x4f1a62*/
          {
            *WindowLongA = 1; /*0x4f1a65*/
            return 0; /*0x4f1a6f*/
          }
        }
      }
    }
    else if ( a2 == 1175 ) /*0x4f18e8*/
    {
      DlgItem = GetDlgItem(hDlg, 1737); /*0x4f190e*/
      StringCSF = GetStringCSF(aGuiLeave, 0, g_Str_File_GOptions_CPP, 547); /*0x4f1910*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)StringCSF); /*0x4f1924*/
      dword_A8EE7C = 2; /*0x4f192c*/
      v7 = GetDlgItem(hDlg, 1810); /*0x4f1938*/
      v8 = 0; /*0x4f193f*/
      dword_A8EE80 = 0; /*0x4f1943*/
      if ( g_GameMode_Current[0] ) /*0x4f1949*/
      {
        if ( g_GameMode_Current[0] == 5 ) /*0x4f197d*/
          goto LABEL_18; /*0x4f197d*/
        if ( g_GameMode_Current[0] != 3 && g_GameMode_Current[0] != 4 ) /*0x4f198d*/
          goto LABEL_19; /*0x4f198d*/
        if ( HouseClass_Count <= 0 ) /*0x4f199a*/
          goto LABEL_18; /*0x4f199a*/
        v10 = HouseClass_Array; /*0x4f199c*/
        v11 = HouseClass_Count; /*0x4f19a2*/
        do /*0x4f19bd*/
        {
          if ( *(_BYTE *)(*(_DWORD *)v10->gap0 + 492) && !*(_BYTE *)(*(_DWORD *)v10->gap0 + 501) ) /*0x4f19af*/
            ++v8; /*0x4f19b8*/
          v10 = (HouseClass *)((char *)v10 + 4); /*0x4f19b9*/
          --v11; /*0x4f19bc*/
        }
        while ( v11 ); /*0x4f19bd*/
        if ( v8 < 2 || *((_BYTE *)HouseClass_Player + 501) ) /*0x4f19ca*/
        {
  LABEL_18:
          ShowWindow(v7, 0); /*0x4f1a0e*/
        }
        else
        {
          dword_A8EE7C = 3; /*0x4f19e5*/
          v12 = GetStringCSF(g_Str_GUI_Observe, 0, g_Str_File_GOptions_CPP, 586); /*0x4f19ef*/
          SendMessageA(v7, 0x4B2u, 0, (LPARAM)v12); /*0x4f19fd*/
          dword_A8EE80 = 4; /*0x4f19ff*/
        }
      }
      else
      {
        v9 = GetStringCSF(aGuiRestart, 0, g_Str_File_GOptions_CPP, 558); /*0x4f195c*/
        SendMessageA(v7, 0x4B2u, 0, (LPARAM)v9); /*0x4f1969*/
        dword_A8EE80 = 5; /*0x4f196b*/
      }
  LABEL_19:
      sub_603E40((int)DlgItem, dword_A8EE7C); /*0x4f1a14*/
      sub_603E40((int)v7, dword_A8EE80); /*0x4f1a29*/
      return 0; /*0x4f1a34*/
    }
    return 0; /*0x4f1a92*/
  }
  return result; /*0x4f1a2f*/
}
}
// 0x4F1CA0
namespace gamemd {
void LoadFromINIGraphicMenu()
{
  unsigned __int8 *v4; // eax
  char **v6; // eax
  char **v7; // ebp
  _DWORD *v8; // edi
  bool v9; // bl
  int v10; // esi
  _DWORD *v11; // eax
  char v12; // bl
  _DWORD *v13; // eax
  char v14; // bl
  char *v15; // eax
  char v16; // bl
  char *v17; // eax
  int *v18; // eax
  int v19; // ecx
  int v20; // eax
  char **v21; // esi
  bool v22; // bl
  char *Int; // esi
  int v24; // ebp
  bool v25; // bl
  int v26; // esi
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  int v30; // edx
  void *v32; // [esp+Ch] [ebp-B4h] BYREF
  void *v33; // [esp+10h] [ebp-B0h] BYREF
  char Source[4]; // [esp+14h] [ebp-ACh] BYREF
  void *v35; // [esp+18h] [ebp-A8h] BYREF
  _DWORD *v36; // [esp+1Ch] [ebp-A4h] BYREF
  char **v37; // [esp+20h] [ebp-A0h]
  void *v38; // [esp+24h] [ebp-9Ch] BYREF
  char **v39; // [esp+28h] [ebp-98h] BYREF
  char **v40; // [esp+2Ch] [ebp-94h]
  int v41; // [esp+30h] [ebp-90h] BYREF
  int v42; // [esp+34h] [ebp-8Ch]
  _DWORD v43[3]; // [esp+3Ch] [ebp-84h] BYREF
  char Buffer[8]; // [esp+48h] [ebp-78h] BYREF
  int v45; // [esp+50h] [ebp-70h] BYREF
  _DWORD v46[22]; // [esp+54h] [ebp-6Ch] BYREF
  _DWORD v47[3]; // [esp+ACh] [ebp-14h] BYREF
  int v48; // [esp+B8h] [ebp-8h]
  int v49; // [esp+BCh] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+C0h] [ebp+0h]

  v37 = a1; /*0x4f1caf*/
  v36 = a2; /*0x4f1cb3*/
  v49 = 0; /*0x4f1cb7*/
  v4 = (unsigned __int8 *)String::GetOrEmpty_Alt(a1); /*0x4f1cbe*/
  if ( !INIClass::BinarySearchSection((int)a2, v4) ) /*0x4f1cc6*/
    return 0; /*0x4f1cc6*/
  v6 = (char **)__2_YAPAXI_Z(0x70u); /*0x4f1cdd*/
  v7 = v6; /*0x4f1ce2*/
  v40 = v6; /*0x4f1ce9*/
  if ( !v6 ) /*0x4f1ced*/
    return 0; /*0x4f1cda*/
  MSEngine::Construct(v6 + 1); /*0x4f1cf3*/
  String::Assign(v7 + 19, aTitlePcx); /*0x4f1d02*/
  v39 = v7 + 20; /*0x4f1d0f*/
  String::Assign(v7 + 20, g_INI_Key_Intro); /*0x4f1d13*/
  v8 = v7 + 22; /*0x4f1d18*/
  v7[21] = 0; /*0x4f1d1b*/
  sub_4F2C00(0, 0); /*0x4f1d22*/
  v7[22] = (char *)&DynamicVectorClass<GraphicMenuItem *>::`vftable'; /*0x4f1d27*/
  v7[27] = (char *)10; /*0x4f1d2d*/
  v7[26] = 0; /*0x4f1d34*/
  *v7 = (char *)&GraphicMenu::`vftable'; /*0x4f1d3b*/
  unknown_libname_73(Source); /*0x4f1d42*/
  String::Assign((char **)&v35, &g_INI_DefaultBuffer); /*0x4f1d50*/
  String::Assign((char **)&v32, aBackground); /*0x4f1d5e*/
  v9 = (int)INIClass::ReadString(v36, v37, (char **)&v32, (char **)&v35, (int)Source) > 0; /*0x4f1d86*/
  DeleteAndZero(&v32); /*0x4f1d89*/
  DeleteAndZero(&v35); /*0x4f1d92*/
  String::Concat2((const char **)Source, (char **)&v38, g_Str_File__PCX); /*0x4f1da5*/
  String::Reassign(v7 + 19, (const char **)&v38); /*0x4f1db1*/
  v10 = 0; /*0x4f1db6*/
  v41 = 0; /*0x4f1dba*/
  v42 = 0; /*0x4f1dbe*/
  if ( v9 ) /*0x4f1dc2*/
  {
    String::Concat2((const char **)Source, (char **)&v32, aVqa); /*0x4f1dd6*/
    v11 = CCFileClass::Construct2(&v45, (char **)&v32); /*0x4f1de4*/
    v12 = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v11 + 20))(v11, 0, a3); /*0x4f1df8*/
    v46[0] = &CCFileClass::`vftable'; /*0x4f1dfa*/
    v48 = 0; /*0x4f1e02*/
    Vector::Clear((int)v47); /*0x4f1e09*/
    v46[0] = &off_7E1668; /*0x4f1e12*/
    BufferIOFileClass::Dtor(v46); /*0x4f1e1a*/
    if ( v12 ) /*0x4f1e21*/
    {
      if ( __2_YAPAXI_Z(0x30u) ) /*0x4f1e25*/
      {
        v10 = MSVQAnim::ConstructMSVQAnimHidden(&v33, DSurface_Alternate, v7 + 7, 1); /*0x4f1e4e*/
        if ( v10 ) /*0x4f1e52*/
        {
  LABEL_18:
          v17 = v7[21]; /*0x4f1f6b*/
          if ( v17 ) /*0x4f1f71*/
            UI_Load_5D1C90(v17, v10); /*0x4f1f77*/
          else
            PriorityQueue::Add(v7 + 1, v10); /*0x4f1f81*/
          v7[21] = (char *)v10; /*0x4f1f86*/
          v18 = (int *)(*(int (__thiscall **)(int, _DWORD *))(v10->q018)(v10, v43); /*0x4f1f92*/
          v19 = *v18; /*0x4f1f95*/
          v20 = v18[1]; /*0x4f1f97*/
          v41 = v19; /*0x4f1f9a*/
          v42 = v20; /*0x4f1fa2*/
          DeleteAndZero(&v32); /*0x4f1fa6*/
          goto LABEL_22; /*0x4f1fa6*/
        }
      }
      else
      {
        v10 = 0; /*0x4f1f4d*/
      }
    }
    String::Concat2((const char **)&v35, (char **)&v36, aBik_0); /*0x4f1e66*/
    v13 = CCFileClass::Construct2(v46, (char **)&v36); /*0x4f1e74*/
    v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 20))(v13, 0); /*0x4f1e89*/
    v46[0] = &CCFileClass::`vftable'; /*0x4f1e8b*/
    v48 = 0; /*0x4f1e93*/
    Vector::Clear((int)v47); /*0x4f1e9e*/
    v46[0] = &off_7E1668; /*0x4f1ea7*/
    BufferIOFileClass::Dtor(v46); /*0x4f1eaf*/
    if ( v14 ) /*0x4f1eb6*/
    {
      v10 = 0; /*0x4f1ec3*/
      v43[0] = 0; /*0x4f1ec7*/
      v43[1] = 0; /*0x4f1ecb*/
      v43[2] = g_DisplayWidth; /*0x4f1ecf*/
      *(_DWORD *)Buffer = DataGlobal_8A00A8; /*0x4f1ed3*/
      if ( __2_YAPAXI_Z(0x3Cu) ) /*0x4f1ed7*/
        v10 = ArtConfig::loadConfig(&v36, DSurface_Alternate, v7 + 7, v43, 1); /*0x4f1f01*/
    }
    DeleteAndZero((void **)&v36); /*0x4f1f07*/
    if ( !v10 ) /*0x4f1f0e*/
    {
      if ( __2_YAPAXI_Z(0x3Cu) ) /*0x4f1f12*/
      {
        v15 = String::GetOrEmpty((char **)&v39); /*0x4f1f24*/
        String::Assign((char **)Source, v15); /*0x4f1f2e*/
        v16 = 1; /*0x4f1f33*/
        v10 = UI_Load(Source, v7 + 7, 1); /*0x4f1f49*/
      }
      else
      {
        v16 = (char)retaddr; /*0x4f1f54*/
        v10 = 0; /*0x4f1f5b*/
      }
      if ( (v16 & 1) != 0 ) /*0x4f1f60*/
        DeleteAndZero((void **)Source); /*0x4f1f66*/
    }
    goto LABEL_18; /*0x4f1f66*/
  }
  LABEL_22:
  String::Assign((char **)&v32, &g_INI_DefaultBuffer); /*0x4f1fab*/
  String::Assign((char **)&v33, g_INI_Key_Theme); /*0x4f1fc2*/
  v21 = v37; /*0x4f1fcf*/
  v22 = (int)INIClass::ReadString(v36, v37, (char **)&v33, (char **)&v32, (int)Source) > 0; /*0x4f1fec*/
  DeleteAndZero(&v33); /*0x4f1fef*/
  DeleteAndZero(&v32); /*0x4f1ff8*/
  if ( v22 ) /*0x4f1fff*/
    String::Reassign(v39, (const char **)Source); /*0x4f200a*/
  String::Assign((char **)&v33, aItemmax); /*0x4f2018*/
  Int = (char *)INIClass::ReadInt(v21, (char **)&v33, 100); /*0x4f202c*/
  v39 = (char **)Int; /*0x4f2032*/
  DeleteAndZero(&v33); /*0x4f2036*/
  v24 = 0; /*0x4f203b*/
  if ( (int)Int >= 0 ) /*0x4f203f*/
  {
    do /*0x4f210e*/
    {
      sprintf(Buffer, "%d", v24); /*0x4f2050*/
      String::Assign((char **)&v32, &g_INI_DefaultBuffer); /*0x4f2061*/
      String::Assign((char **)&v33, Buffer); /*0x4f206f*/
      v25 = (int)INIClass::ReadString(v36, v37, (char **)&v33, (char **)&v32, (int)Source) > 0; /*0x4f2099*/
      DeleteAndZero(&v33); /*0x4f209c*/
      DeleteAndZero(&v32); /*0x4f20a5*/
      if ( v25 ) /*0x4f20ac*/
      {
        v26 = sub_4F38B0(Source, (int)(v40 + 1), (int)&v41); /*0x4f20c6*/
        if ( v26 ) /*0x4f20ca*/
        {
          v27 = v8[2]; /*0x4f20cc*/
          if ( v8[4] < v27 /*0x4f20f1*/
            || (*((_BYTE *)v8 + 13) || !v27)
            && (v28 = v8[5], v28 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v8 + 8))(v8, v27 + v28, 0) )
          {
            v29 = v8[4]; /*0x4f20f8*/
            v30 = v8[1]; /*0x4f20fb*/
            v8[4] = v29 + 1; /*0x4f2101*/
            *(_DWORD *)(v30 + 4 * v29) = v26; /*0x4f2104*/
          }
        }
      }
      ++v24; /*0x4f210b*/
    }
    while ( v24 <= (int)v39 ); /*0x4f210e*/
  }
  DeleteAndZero(&v38); /*0x4f2118*/
  DeleteAndZero((void **)Source); /*0x4f2121*/
  return v40; /*0x4f1ccf*/
}
}
// 0x4F2300
namespace gamemd {
ObjectClass * * E4Recv_4F2300::ProcessGraphicMenu()
{
  char *v2; // eax
  int StringList; // eax
  _BYTE *v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // esi
  unsigned __int16 EventQueue; // ax
  int v9; // esi
  int v10; // ecx
  _BYTE *v11; // esi
  int v12; // ecx
  _BYTE *v13; // esi
  int v14; // ecx
  char v16; // [esp+1Dh] [ebp-31h]
  _DWORD v17[2]; // [esp+1Eh] [ebp-30h] BYREF
  void **v18; // [esp+26h] [ebp-28h] BYREF
  int v19; // [esp+2Ah] [ebp-24h]
  int v20; // [esp+2Eh] [ebp-20h]
  void **v21; // [esp+32h] [ebp-1Ch] BYREF
  int v22; // [esp+36h] [ebp-18h]
  int v23; // [esp+3Ah] [ebp-14h]
  void **v24; // [esp+3Eh] [ebp-10h] BYREF
  int v25; // [esp+42h] [ebp-Ch]
  int v26; // [esp+46h] [ebp-8h]

  v2 = String::GetOrEmpty((char **)(&this->u32_200)); /*0x4f230c*/
  StringList = StringList::Find(&g_BuildingTypeClass_Count, v2); /*0x4f2317*/
  ThemeClass::Play(&g_BuildingTypeClass_Count, StringList); /*0x4f2322*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)DSurface_Alternate + 24))(DSurface_Alternate, 0); /*0x4f2331*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)g_DSurface_Hidden + 24))(g_DSurface_Hidden, 0); /*0x4f233e*/
  (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 4))( /*0x4f2354*/
    g_DSurface_Primary,
    g_DSurface_Hidden,
    0,
    1);
  v16 = 0; /*0x4f235d*/
  v4 = 0; /*0x4f2362*/
  Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x4f2364*/
  v5 = this->M84; /*0x4f2369*/
  if ( v5 ) /*0x4f236e*/
    MSEngine::ProcessEvents((_DWORD *)(this + 4), v5, 300000); /*0x4f2379*/
  v6 = (*(int (__thiscall **)(int, void ***))(*(_DWORD *)DSurface_Alternate + 120))(DSurface_Alternate, &v24); /*0x4f238e*/
  Team::ReleaseAll((int *)(this + 4), v6); /*0x4f2394*/
  DSurface::Flip2(); /*0x4f239b*/
  do /*0x4f25fd*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x4f23a8*/
    DDraw::HandleSuspend((_DWORD *)(this + 4)); /*0x4f23ad*/
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x4f23ba*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 48))(g_WWMouseClass_Instance); /*0x4f23ce*/
    v17[0] = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 44))(g_WWMouseClass_Instance); /*0x4f23db*/
    v17[1] = v7; /*0x4f23df*/
    if ( EventQueue::Process(g_BinkMoviePlayer) ) /*0x4f23e3*/
    {
      EventQueue = EventQueue::Read(g_BinkMoviePlayer); /*0x4f23f7*/
      v9 = EventQueue; /*0x4f23ff*/
      if ( EventQueue == 1 || EventQueue == 13 ) /*0x4f2411*/
      {
        v11 = 0; /*0x4f24a7*/
        v22 = &this->u32_160; /*0x4f24a9*/
        v23 = 0; /*0x4f24b1*/
        v21 = &VectorCursor<GraphicMenuItem *,DynamicVectorClass<GraphicMenuItem *>>::`vftable'; /*0x4f24b5*/
        if ( Map::CanScroll(&v21) ) /*0x4f24bd*/
        {
          do /*0x4f24f6*/
          {
            v12 = *(_DWORD *)(*(_DWORD *)(v22 + 4) + 4 * v23); /*0x4f24d2*/
            if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)v12 + 8))(v12, v17) ) /*0x4f24dc*/
              break; /*0x4f24e1*/
            ((void (__thiscall *)(void ***))v21[2])(&v21); /*0x4f24eb*/
          }
          while ( ((unsigned __int8 (__thiscall *)(void ***))v21[1])(&v21) ); /*0x4f24f6*/
        }
        if ( ((unsigned __int8 (__thiscall *)(void ***))v21[1])(&v21) ) /*0x4f2505*/
          v11 = *(_BYTE **)(*(_DWORD *)(v22 + 4) + 4 * v23); /*0x4f2517*/
        v21 = &VectorCursor<GraphicMenuItem *,DynamicVectorClass<GraphicMenuItem *>>::`vftable'; /*0x4f251a*/
      }
      else
      {
        v19 = &this->u32_160; /*0x4f241e*/
        v20 = 0; /*0x4f2422*/
        v18 = &VectorCursor<GraphicMenuItem *,DynamicVectorClass<GraphicMenuItem *>>::`vftable'; /*0x4f242a*/
        if ( Map::CanScroll(&v18) ) /*0x4f2432*/
        {
          do /*0x4f2467*/
          {
            v10 = *(_DWORD *)(*(_DWORD *)(v19 + 4) + 4 * v20); /*0x4f2448*/
            if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v10 + 4))(v10, v9) ) /*0x4f244d*/
              break; /*0x4f2452*/
            ((void (__thiscall *)(void ***))v18[2])(&v18); /*0x4f245c*/
          }
          while ( ((unsigned __int8 (__thiscall *)(void ***))v18[1])(&v18) ); /*0x4f2467*/
        }
        if ( ((unsigned __int8 (__thiscall *)(void ***))v18[1])(&v18) ) /*0x4f2476*/
          v11 = *(_BYTE **)(*(_DWORD *)(v19 + 4) + 4 * v20); /*0x4f2488*/
        else
          v11 = 0; /*0x4f2498*/
        v18 = &VectorCursor<GraphicMenuItem *,DynamicVectorClass<GraphicMenuItem *>>::`vftable'; /*0x4f248b*/
      }
      if ( v11 ) /*0x4f2524*/
      {
        if ( v4 != v11 ) /*0x4f252c*/
        {
          if ( v4 ) /*0x4f2530*/
            State::SetIfChanged(v4, 0); /*0x4f2536*/
          v4 = v11; /*0x4f253f*/
          State::SetIfChanged(v11, 1); /*0x4f2541*/
        }
        v16 = 1; /*0x4f2546*/
      }
    }
    else
    {
      v13 = 0; /*0x4f2553*/
      v25 = &this->u32_160; /*0x4f2559*/
      v26 = 0; /*0x4f255d*/
      v24 = &VectorCursor<GraphicMenuItem *,DynamicVectorClass<GraphicMenuItem *>>::`vftable'; /*0x4f2561*/
      if ( Map::CanScroll(&v24) ) /*0x4f2569*/
      {
        do /*0x4f25a2*/
        {
          v14 = *(_DWORD *)(*(_DWORD *)(v25 + 4) + 4 * v26); /*0x4f257e*/
          if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)v14 + 8))(v14, v17) ) /*0x4f2588*/
            break; /*0x4f258d*/
          ((void (__thiscall *)(void ***))v24[2])(&v24); /*0x4f2597*/
        }
        while ( ((unsigned __int8 (__thiscall *)(void ***))v24[1])(&v24) ); /*0x4f25a2*/
      }
      if ( ((unsigned __int8 (__thiscall *)(void ***))v24[1])(&v24) ) /*0x4f25b1*/
        v13 = *(_BYTE **)(*(_DWORD *)(v25 + 4) + 4 * v26); /*0x4f25c3*/
      v24 = &VectorCursor<GraphicMenuItem *,DynamicVectorClass<GraphicMenuItem *>>::`vftable'; /*0x4f25c8*/
      if ( v13 != v4 ) /*0x4f25d0*/
      {
        if ( v4 ) /*0x4f25d4*/
          State::SetIfChanged(v4, 0); /*0x4f25da*/
        v4 = v13; /*0x4f25e1*/
        if ( v13 ) /*0x4f25e3*/
          State::SetIfChanged(v13, 1); /*0x4f25e9*/
      }
    }
    GameClass::FrameLoop((_DWORD *)(this + 4), 1); /*0x4f25f2*/
  }
  while ( !v16 ); /*0x4f25fd*/
  if ( v4 ) /*0x4f2605*/
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v4 + 12))(v4, this + 4); /*0x4f260c*/
  UI_Process(); /*0x4f260f*/
  Theme::QueueSong((int)&g_BuildingTypeClass_Count, -3); /*0x4f261b*/
  if ( v4 ) /*0x4f2622*/
    return *((_DWORD *)v4 + 1); /*0x4f2624*/
  else
    return -1; /*0x4f2632*/
}
}
// 0x4F2640
namespace gamemd {
int E4Recv_4F2640::sub_4F2640(int (__thiscall ***a2)(unsigned int, int) a1)
{
  int (__thiscall ***v3)(a1, int); // eax
  int result; // eax

  v3 = (int (__thiscall ***)(a1, int))*(int + 21); /*0x4f2648*/
  if ( v3 ) /*0x4f264e*/
    result = UI_Load_5D1C90(int + 1, v3, a2); /*0x4f2654*/
  else
    result = PriorityQueue::Add(int + 1, (int)a2); /*0x4f2664*/
  *(int + 21) = a2; /*0x4f2659*/
  return result; /*0x4f265c*/
}
}
// 0x4F2C70
namespace gamemd {
void ParseINIAnimGadgetDefinition()
{
  int IntINIClass; // ebx
  int v8; // ebp
  int *CoordPairINIClass; // eax
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // ebx
  int v13; // ecx
  int v14; // edx
  int *RectINIClass; // eax
  char *v16; // eax
  int v17; // esi
  void *v18; // [esp+Ch] [ebp-38h] BYREF
  void *v19; // [esp+10h] [ebp-34h] BYREF
  int v20[4]; // [esp+14h] [ebp-30h] BYREF
  int v21; // [esp+24h] [ebp-20h] BYREF
  int v22; // [esp+28h] [ebp-1Ch]
  int v23; // [esp+2Ch] [ebp-18h] BYREF
  int v24; // [esp+30h] [ebp-14h]
  int v25; // [esp+34h] [ebp-10h] BYREF
  int v26; // [esp+38h] [ebp-Ch]
  int v27; // [esp+3Ch] [ebp-8h]
  int v28; // [esp+40h] [ebp-4h]

  String::Assign((char **)v20, ValueName); /*0x4f2c83*/
  IntINIClass = INIClass::ReadInt(Source, (char **)v20, -1); /*0x4f2c97*/
  v22 = IntINIClass; /*0x4f2c9d*/
  DeleteAndZero((void **)v20); /*0x4f2ca1*/
  if ( IntINIClass == -1 ) /*0x4f2ca9*/
    return 0; /*0x4f2cad*/
  unknown_libname_73(&v18); /*0x4f2cba*/
  String::Assign((char **)&v21, &g_INI_DefaultBuffer); /*0x4f2cc8*/
  String::Assign((char **)v20, g_INI_Key_Image); /*0x4f2cd6*/
  INIClass::ReadString(a2, Source, (char **)v20, (char **)&v21, (int)&v18); /*0x4f2ced*/
  DeleteAndZero((void **)v20); /*0x4f2cf6*/
  DeleteAndZero((void **)&v21); /*0x4f2cff*/
  if ( String::Length((const char **)&v18) ) /*0x4f2d08*/
  {
    unknown_libname_73(&v19); /*0x4f2d29*/
    String::Assign((char **)v20, &g_INI_DefaultBuffer); /*0x4f2d37*/
    String::Assign((char **)&v21, g_INI_Key_Palette); /*0x4f2d45*/
    INIClass::ReadString(a2, Source, (char **)&v21, (char **)v20, (int)&v19); /*0x4f2d5c*/
    DeleteAndZero((void **)&v21); /*0x4f2d65*/
    DeleteAndZero((void **)v20); /*0x4f2d6e*/
    if ( String::Length((const char **)&v19) ) /*0x4f2d77*/
    {
      v8 = 0; /*0x4f2d9e*/
      v23 = 0; /*0x4f2da9*/
      v24 = 0; /*0x4f2dad*/
      String::Assign((char **)&v21, aOrigin); /*0x4f2db1*/
      CoordPairINIClass = INIClass::GetCoordPair(a2, v20, (char *)Source, (char **)&v21, &v23); /*0x4f2dc8*/
      v10 = *CoordPairINIClass; /*0x4f2dcd*/
      v11 = CoordPairINIClass[1]; /*0x4f2dcf*/
      v23 = v10; /*0x4f2dd2*/
      v24 = v11; /*0x4f2dda*/
      DeleteAndZero((void **)&v21); /*0x4f2dde*/
      v12 = a4; /*0x4f2de3*/
      v13 = *a4; /*0x4f2df4*/
      v25 = 0; /*0x4f2df6*/
      v23 += v13; /*0x4f2e00*/
      v14 = a4[1]; /*0x4f2e04*/
      v26 = 0; /*0x4f2e09*/
      v24 += v14; /*0x4f2e0d*/
      v27 = 0; /*0x4f2e11*/
      v28 = 0; /*0x4f2e15*/
      String::Assign((char **)&a4, aActiverect); /*0x4f2e19*/
      RectINIClass = INIClass::GetRect((int)a2, v20, Source, (char **)&a4, &v25); /*0x4f2e30*/
      v25 = *RectINIClass; /*0x4f2e37*/
      v26 = RectINIClass[1]; /*0x4f2e3e*/
      v27 = RectINIClass[2]; /*0x4f2e45*/
      v28 = RectINIClass[3]; /*0x4f2e50*/
      DeleteAndZero((void **)&a4); /*0x4f2e54*/
      v25 += *v12; /*0x4f2e65*/
      v26 += v12[1]; /*0x4f2e77*/
      v16 = String::GetOrEmpty_Alt(Source); /*0x4f2e7b*/
      LOBYTE(v21) = INIClass::ReadBool_Overwrite(v16, aLoop, 1); /*0x4f2e91*/
      String::Assign((char **)&a4, g_INI_Key_Rate); /*0x4f2e95*/
      v17 = INIClass::ReadInt(Source, (char **)&a4, 5); /*0x4f2ead*/
      DeleteAndZero((void **)&a4); /*0x4f2eaf*/
      if ( __2_YAPAXI_Z(0x28u) ) /*0x4f2eb6*/
        v8 = sub_4F2F10(v22, a3, &v23, &v25, &v18, &v19, v17, v21); /*0x4f2eed*/
      DeleteAndZero(&v19); /*0x4f2ef3*/
      DeleteAndZero(&v18); /*0x4f2efc*/
      return v8; /*0x4f2f01*/
    }
    else
    {
      DeleteAndZero(&v19); /*0x4f2d84*/
      DeleteAndZero(&v18); /*0x4f2d8d*/
      return 0; /*0x4f2d92*/
    }
  }
  else
  {
    DeleteAndZero(&v18); /*0x4f2d15*/
    return 0; /*0x4f2d1a*/
  }
}
}
// 0x4F3140
namespace gamemd {
ReferenceCounted * * ParseINIGadgetDefinition(ObjectClass * aP0, ObjectClass * edx0, unsigned int * a2, ObjectClass a4)
{
  int IntINIClass; // ebx
  int v8; // ebp
  int *CoordPairINIClass; // eax
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // ebx
  int v13; // ecx
  int v14; // edx
  int *RectINIClass; // eax
  void *v16; // [esp+Ch] [ebp-44h] BYREF
  void *v17; // [esp+10h] [ebp-40h] BYREF
  void *v18; // [esp+14h] [ebp-3Ch] BYREF
  void *v19; // [esp+18h] [ebp-38h] BYREF
  void *v20; // [esp+1Ch] [ebp-34h] BYREF
  int v21; // [esp+20h] [ebp-30h] BYREF
  int v22; // [esp+24h] [ebp-2Ch]
  int v23; // [esp+28h] [ebp-28h] BYREF
  int v24; // [esp+2Ch] [ebp-24h]
  int v25[4]; // [esp+30h] [ebp-20h] BYREF
  int v26; // [esp+40h] [ebp-10h] BYREF
  int v27; // [esp+44h] [ebp-Ch]
  int v28; // [esp+48h] [ebp-8h]
  int v29; // [esp+4Ch] [ebp-4h]

  String::Assign((char **)&v21, ValueName); /*0x4f3153*/
  IntINIClass = INIClass::ReadInt(aP0, (char **)&v21, -1); /*0x4f3167*/
  v22 = IntINIClass; /*0x4f316d*/
  DeleteAndZero((void **)&v21); /*0x4f3171*/
  if ( IntINIClass == -1 ) /*0x4f3179*/
    return 0; /*0x4f317d*/
  v8 = 0; /*0x4f3187*/
  v23 = 0; /*0x4f3192*/
  v24 = 0; /*0x4f3196*/
  String::Assign((char **)&v21, aOrigin); /*0x4f319a*/
  CoordPairINIClass = INIClass::GetCoordPair(edx0, v25, (char *)aP0, (char **)&v21, &v23); /*0x4f31b1*/
  v10 = *CoordPairINIClass; /*0x4f31b6*/
  v11 = CoordPairINIClass[1]; /*0x4f31b8*/
  v23 = v10; /*0x4f31bb*/
  v24 = v11; /*0x4f31c3*/
  DeleteAndZero((void **)&v21); /*0x4f31c7*/
  v12 = a4; /*0x4f31cc*/
  v13 = *a4; /*0x4f31dd*/
  v26 = 0; /*0x4f31df*/
  v23 += v13; /*0x4f31e9*/
  v14 = a4[1]; /*0x4f31ed*/
  v27 = 0; /*0x4f31f2*/
  v24 += v14; /*0x4f31f6*/
  v28 = 0; /*0x4f31fa*/
  v29 = 0; /*0x4f31fe*/
  String::Assign((char **)&a4, aActiverect); /*0x4f3202*/
  RectINIClass = INIClass::GetRect((int)edx0, v25, aP0, (char **)&a4, &v26); /*0x4f3219*/
  v26 = *RectINIClass; /*0x4f3220*/
  v27 = RectINIClass[1]; /*0x4f3227*/
  v28 = RectINIClass[2]; /*0x4f322e*/
  v29 = RectINIClass[3]; /*0x4f3239*/
  DeleteAndZero((void **)&a4); /*0x4f323d*/
  v26 += *v12; /*0x4f324e*/
  v27 += v12[1]; /*0x4f325b*/
  unknown_libname_73(&v20); /*0x4f325f*/
  unknown_libname_73(&v19); /*0x4f3268*/
  unknown_libname_73(&v18); /*0x4f3271*/
  String::Assign((char **)&v21, &g_INI_DefaultBuffer); /*0x4f327f*/
  String::Assign((char **)&a4, g_INI_Key_Image); /*0x4f328d*/
  INIClass::ReadString(edx0, aP0, (char **)&a4, (char **)&v21, (int)&v20); /*0x4f32a4*/
  DeleteAndZero((void **)&a4); /*0x4f32ad*/
  DeleteAndZero((void **)&v21); /*0x4f32b6*/
  String::Assign((char **)&v21, &g_INI_DefaultBuffer); /*0x4f32c4*/
  String::Assign((char **)&a4, aHighlighted); /*0x4f32d2*/
  INIClass::ReadString(edx0, aP0, (char **)&a4, (char **)&v21, (int)&v19); /*0x4f32e9*/
  DeleteAndZero((void **)&a4); /*0x4f32f2*/
  DeleteAndZero((void **)&v21); /*0x4f32fb*/
  String::Assign((char **)&v21, &g_INI_DefaultBuffer); /*0x4f3309*/
  String::Assign((char **)&a4, aDisabled); /*0x4f3317*/
  INIClass::ReadString(edx0, aP0, (char **)&a4, (char **)&v21, (int)&v18); /*0x4f332e*/
  DeleteAndZero((void **)&a4); /*0x4f3337*/
  DeleteAndZero((void **)&v21); /*0x4f3340*/
  unknown_libname_73(&v17); /*0x4f3349*/
  String::Assign((char **)&v21, &g_INI_DefaultBuffer); /*0x4f3357*/
  String::Assign((char **)&a4, aHighlightsound); /*0x4f3365*/
  INIClass::ReadString(edx0, aP0, (char **)&a4, (char **)&v21, (int)&v17); /*0x4f337c*/
  DeleteAndZero((void **)&a4); /*0x4f3385*/
  DeleteAndZero((void **)&v21); /*0x4f338e*/
  unknown_libname_73(&v16); /*0x4f3397*/
  String::Assign((char **)&v21, &g_INI_DefaultBuffer); /*0x4f33a5*/
  String::Assign((char **)&a4, aSelectvq); /*0x4f33b3*/
  INIClass::ReadString(edx0, aP0, (char **)&a4, (char **)&v21, (int)&v16); /*0x4f33ca*/
  DeleteAndZero((void **)&a4); /*0x4f33d3*/
  DeleteAndZero((void **)&v21); /*0x4f33dc*/
  if ( __2_YAPAXI_Z(0x38u) ) /*0x4f33e3*/
    v8 = sub_4F3460(v22, a2, &v23, &v26, &v20, &v19, &v18, &v17, &v16); /*0x4f3423*/
  DeleteAndZero(&v16); /*0x4f3429*/
  DeleteAndZero(&v17); /*0x4f3432*/
  DeleteAndZero(&v18); /*0x4f343b*/
  DeleteAndZero(&v19); /*0x4f3444*/
  DeleteAndZero(&v20); /*0x4f344d*/
  return v8; /*0x4f317b*/
}
}
// 0x4F3460
namespace gamemd {
MSAnim * * E4Recv_4F3460::sub_4F3460(int aP1, ReferenceCounted * aP2, unsigned int * a3, ReferenceCounted * aP4, const char ** a5, ReferenceCounted * aP6, const char ** a7, ReferenceCounted * aP8, const char ** a9)
{
  char v10; // bl
  _DWORD *v12; // edi
  _DWORD *v13; // edx
  int v14; // edx
  const char **v15; // ebp
  int v16; // eax
  const char **v17; // ebx
  unsigned int v18; // eax
  _DWORD *v19; // ebp
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  const char **v22; // ebx
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  const char **v25; // ebx
  _DWORD *v26; // eax
  _DWORD *v27; // eax

  v10 = 0; /*0x4f3469*/
  GraphicMenuItem::Constructor((_DWORD *)this, aP1); /*0x4f3472*/
  v12 = aP2; /*0x4f3477*/
  v13 = aP4; /*0x4f347b*/
  this->M16 = aP2; /*0x4f347f*/
  this->u32_14 = *v13; /*0x4f3487*/
  this->u32_18 = v13[1]; /*0x4f348c*/
  this->u32_1C = v13[2]; /*0x4f3492*/
  v14 = v13[3]; /*0x4f3495*/
  this->q024 = 0; /*0x4f3498*/
  this->q020 = v14; /*0x4f349b*/
  this->q028 = 0; /*0x4f34a1*/
  this->M44 = 0; /*0x4f34a4*/
  this->M48 = 0; /*0x4f34a7*/
  unknown_libname_73(&this->u32_142); /*0x4f34aa*/
  v15 = aP8; /*0x4f34af*/
  *(_DWORD *)this = &GraphicMenuImageItem::`vftable'; /*0x4f34b3*/
  if ( String::Length(v15) && (aP2 = __2_YAPAXI_Z(0x10u)) != 0 ) /*0x4f34d4*/
  {
    String::Assign((char **)&aP1, aHighlightsound); /*0x4f34df*/
    v10 = 1; /*0x4f34ee*/
    v16 = Audio::ParseVolume((int)aP2, (const char **)&aP1, v15); /*0x4f34f3*/
  }
  else
  {
    v16 = 0; /*0x4f34fa*/
  }
  this->M48 = v16; /*0x4f34ff*/
  if ( (v10 & 1) != 0 ) /*0x4f3502*/
    DeleteAndZero((void **)&aP1); /*0x4f3508*/
  String::Reassign((char **)(&this->u32_142), a9); /*0x4f3515*/
  v17 = aP6; /*0x4f351a*/
  v18 = String::Length(aP6); /*0x4f3520*/
  v19 = a3; /*0x4f3525*/
  if ( v18 )
  {
    v20 = __2_YAPAXI_Z(0x3Cu); /*0x4f352f*/
    v21 = v20 ? MSPCXAnim::Construct(v20, v17, (int)(v12 + 6), v19, 1) : 0;
    this->q028 = v21; /*0x4f3550*/
    if ( v21 ) /*0x4f3553*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v21 + 4))(v21, 0); /*0x4f355b*/
      PriorityQueue::Add(v12, this->q028); /*0x4f3564*/
    }
  }
  v22 = a5; /*0x4f3569*/
  if ( String::Length(a5) )
  {
    v23 = __2_YAPAXI_Z(0x3Cu); /*0x4f357a*/
    v24 = v23 ? MSPCXAnim::Construct(v23, v22, (int)(v12 + 6), v19, 1) : 0;
    this->q024 = v24; /*0x4f359b*/
    if ( v24 ) /*0x4f359e*/
      PriorityQueue::Add(v12, (int)v24); /*0x4f35a3*/
  }
  v25 = a7; /*0x4f35a8*/
  if ( String::Length(a7) ) /*0x4f35ae*/
  {
    v26 = __2_YAPAXI_Z(0x3Cu); /*0x4f35b9*/
    if ( v26 ) /*0x4f35c3*/
      v27 = MSPCXAnim::Construct(v26, v25, (int)(v12 + 6), v19, 1); /*0x4f35cf*/
    else
      v27 = 0; /*0x4f35d6*/
    this->M44 = v27; /*0x4f35da*/
    if ( v27 ) /*0x4f35dd*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v27 + 4))(v27, 0); /*0x4f35e5*/
      PriorityQueue::Add(v12, this->M44); /*0x4f35ee*/
    }
  }
  return this; /*0x4f35f5*/
}
}
// 0x4F38B0
namespace gamemd {
void sub_4F38B0()
{
  _DWORD *v6; // ebp
  _DWORD *v7; // eax
  bool v8; // bl
  void *v9; // esi
  char v10; // bl
  int v11; // eax
  void *v13; // [esp+Ch] [ebp-10h] BYREF
  void *v14; // [esp+10h] [ebp-Ch] BYREF
  void *v15; // [esp+14h] [ebp-8h] BYREF
  int v16; // [esp+18h] [ebp-4h]

  v16 = 0; /*0x4f38be*/
  unknown_libname_73(&v13); /*0x4f38c6*/
  String::Assign((char **)&v15, &g_INI_DefaultBuffer); /*0x4f38d4*/
  String::Assign((char **)&v14, g_INI_Key_Type); /*0x4f38e2*/
  INIClass::ReadString(a2, Source, (char **)&v14, (char **)&v15, (int)&v13); /*0x4f38f9*/
  DeleteAndZero(&v14); /*0x4f3902*/
  DeleteAndZero(&v15); /*0x4f390b*/
  v6 = 0; /*0x4f3914*/
  if ( String::Equals_Alt((const char **)&v13, g_INI_Key_Image) ) /*0x4f391b*/
  {
    v7 = (_DWORD *)ParseINIGadgetDefinition(Source, a2, a3, a4); /*0x4f3932*/
  }
  else if ( String::Equals_Alt((const char **)&v13, aShortcut) ) /*0x4f3942*/
  {
    v7 = sub_4F3B80(Source, a2); /*0x4f394f*/
  }
  else
  {
    if ( !String::Equals_Alt((const char **)&v13, aAnim_0) ) /*0x4f3966*/
      goto LABEL_15; /*0x4f3966*/
    v7 = (_DWORD *)ParseINIAnimGadgetDefinition(Source, a2, a3, a4); /*0x4f397a*/
  }
  v6 = v7; /*0x4f397f*/
  if ( v7 ) /*0x4f3983*/
  {
    unknown_libname_73(&a4); /*0x4f398e*/
    String::Assign((char **)&v15, &g_INI_DefaultBuffer); /*0x4f399c*/
    String::Assign((char **)&a3, aSelectsound); /*0x4f39aa*/
    v8 = (int)INIClass::ReadString(a2, Source, (char **)&a3, (char **)&v15, (int)&a4) > 0; /*0x4f39cc*/
    DeleteAndZero((void **)&a3); /*0x4f39cf*/
    DeleteAndZero(&v15); /*0x4f39d8*/
    if ( v8 ) /*0x4f39df*/
    {
      v9 = __2_YAPAXI_Z(0x10u); /*0x4f39e8*/
      if ( v9 ) /*0x4f39ef*/
      {
        String::Assign((char **)&a3, aSelectsound); /*0x4f39fa*/
        v10 = 1; /*0x4f3a0b*/
        v11 = Audio::ParseVolume((int)v9, (const char **)&a3, (const char **)&a4); /*0x4f3a10*/
      }
      else
      {
        v10 = v16; /*0x4f3a17*/
        v11 = 0; /*0x4f3a1b*/
      }
      v6[3] = v11; /*0x4f3a20*/
      if ( (v10 & 1) != 0 ) /*0x4f3a23*/
        DeleteAndZero((void **)&a3); /*0x4f3a29*/
    }
    DeleteAndZero((void **)&a4); /*0x4f3a32*/
  }
  LABEL_15:
  DeleteAndZero(&v13); /*0x4f3a38*/
  return v6; /*0x4f3a43*/
}
}
// 0x4F3AB0
namespace gamemd {
int E4Recv_4F3AB0::sub_4F3AB0(int a2)
{
  int result; // eax
  int v3; // edx

  result = a2; /*0x4f3ab0*/
  if ( (_BYTE)a2 != this->u32_24 ) /*0x4f3ab9*/
  {
    v3 = *(_DWORD *)this; /*0x4f3abb*/
    this->u32_24 = a2; /*0x4f3abe*/
    return (*(int (__stdcall **)(int))(v3 + 20))(a2); /*0x4f3ac1*/
  }
  return result; /*0x4f3ac4*/
}
}
// 0x4F3B80
namespace gamemd {
unsigned int * sub_4F3B80(ObjectClass * a1, ObjectClass * edx0)
{
  char **v4; // eax
  int Int; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  void *v9; // [esp+Ch] [ebp-Ch] BYREF
  void *v10; // [esp+10h] [ebp-8h] BYREF
  void *v11; // [esp+14h] [ebp-4h] BYREF

  v4 = String::Assign((char **)&v11, ValueName); /*0x4f3b95*/
  Int = INIClass::ReadInt(a1, v4, -1); /*0x4f3ba7*/
  DeleteAndZero(&v11); /*0x4f3ba9*/
  if ( Int == -1 ) /*0x4f3bb1*/
    return 0; /*0x4f3bb5*/
  unknown_libname_73(&v9); /*0x4f3bc0*/
  String::Assign((char **)&v11, &g_INI_DefaultBuffer); /*0x4f3bce*/
  String::Assign((char **)&v10, aKeys); /*0x4f3bdc*/
  INIClass::ReadString(edx0, a1, (char **)&v10, (char **)&v11, (int)&v9); /*0x4f3bf3*/
  DeleteAndZero(&v10); /*0x4f3bfc*/
  DeleteAndZero(&v11); /*0x4f3c05*/
  v7 = __2_YAPAXI_Z(0x28u); /*0x4f3c0c*/
  if ( v7 ) /*0x4f3c16*/
    v8 = sub_4F3C40(v7, Int, (const char **)&v9); /*0x4f3c25*/
  else
    v8 = 0; /*0x4f3c29*/
  DeleteAndZero(&v9); /*0x4f3c2f*/
  return v8; /*0x4f3bb3*/
}
}
// 0x4F3D40
namespace gamemd {
int E4Recv_4F3D40::sub_4F3D40()
{
  int v1; // ebx
  unsigned int v2; // eax
  int v3; // edi
  const char **v4; // esi
  int v5; // ebx
  int v7; // eax
  void *v8; // [esp+Ch] [ebp-8h] BYREF
  void *v9; // [esp+10h] [ebp-4h] BYREF

  v1 = 0; /*0x4f3d4b*/
  String::AssignFromPtr((char **)&v8, this); /*0x4f3d4d*/
  String::ToLower((const char **)&v8); /*0x4f3d56*/
  String::AssignFromPtr((char **)&v9, (const char **)&v8); /*0x4f3d64*/
  String::CopyTruncated(&v9, 5u); /*0x4f3d6f*/
  if ( String::Equals_Alt((const char **)&v9, aCtrl) ) /*0x4f3d7d*/
  {
    v1 = 512; /*0x4f3d8e*/
    String::Erase((const char **)&v8, 0, 5); /*0x4f3d93*/
  }
  String::Reassign((char **)&v9, (const char **)&v8); /*0x4f3da1*/
  String::CopyTruncated(&v9, 4u); /*0x4f3dac*/
  if ( String::Equals_Alt((const char **)&v9, aAlt) ) /*0x4f3dba*/
  {
    BYTE1(v1) |= 4u; /*0x4f3dcb*/
    String::Erase((const char **)&v8, 0, 4); /*0x4f3dce*/
  }
  String::Reassign((char **)&v9, (const char **)&v8); /*0x4f3ddc*/
  String::CopyTruncated(&v9, 6u); /*0x4f3de7*/
  if ( String::Equals_Alt((const char **)&v9, aShift) ) /*0x4f3df5*/
  {
    BYTE1(v1) |= 1u; /*0x4f3e06*/
    String::Erase((const char **)&v8, 0, 6); /*0x4f3e09*/
  }
  v2 = String::Length((const char **)&v8); /*0x4f3e12*/
  if ( v2 ) /*0x4f3e1a*/
  {
    if ( v2 == 1 ) /*0x4f3e1d*/
    {
      v7 = sub_7B5410((const char **)&v8, 0) - 32; /*0x4f3e7d*/
    }
    else
    {
      v3 = 1; /*0x4f3e1f*/
      v4 = (const char **)&off_824328; /*0x4f3e24*/
      while ( String::NotEquals((const char **)&v8, *v4) ) /*0x4f3e37*/
      {
        v4 -= 2; /*0x4f3e39*/
        --v3; /*0x4f3e3c*/
        if ( (int)v4 < (int)&off_824320 ) /*0x4f3e43*/
          goto LABEL_12; /*0x4f3e43*/
      }
      if ( v3 < 0 ) /*0x4f3e64*/
        goto LABEL_12; /*0x4f3e64*/
      v7 = dword_824324[2 * v3]; /*0x4f3e66*/
    }
    if ( v7 ) /*0x4f3e82*/
    {
      v5 = v7 | v1; /*0x4f3e84*/
      goto LABEL_13; /*0x4f3e86*/
    }
  }
  LABEL_12:
  v5 = 0; /*0x4f3e45*/
  LABEL_13:
  DeleteAndZero(&v9); /*0x4f3e47*/
  DeleteAndZero(&v8); /*0x4f3e54*/
  return v5; /*0x4f3e5b*/
}
}
// 0x4F4E53
namespace gamemd {
void sub_4F4E53()
{
  int v7; // edi
  __int16 v8; // cx
  int v9; // edx

  v7 = a2; /*0x4f4e5a*/
  do /*0x4f4ea3*/
  {
    v8 = 0; /*0x4f4e5e*/
    if ( !*result && !a7 ) /*0x4f4e66*/
      v8 = 0x8000; /*0x4f4e68*/
    LOBYTE(a3) = result[2]; /*0x4f4e70*/
    LOWORD(a2) = result[1] & 0xF8; /*0x4f4e77*/
    result += 4; /*0x4f4e7e*/
    LOWORD(a3) = a3 & 0xF8; /*0x4f4e81*/
    v9 = a3 | (32 * a2); /*0x4f4e88*/
    LOWORD(a3) = *(result - 1) >> 3; /*0x4f4e90*/
    a2 = a3 | (4 * v9); /*0x4f4e97*/
    a4 += 2; /*0x4f4e99*/
    --v7; /*0x4f4e9e*/
    *(_WORD *)(a4 - 2) = a2 | v8; /*0x4f4e9f*/
  }
  while ( v7 ); /*0x4f4ea3*/
  return result; /*0x4f4ea9*/
}
}
// 0x4FA210
namespace gamemd {
int E4Recv_4FA210::sub_4FA210(int a2, int a3)
{
  int v3; // eax
  bool v4; // zf
  void *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  void *v9; // eax
  void **v11; // [esp+8h] [ebp-1Ch] BYREF
  void *Block; // [esp+Ch] [ebp-18h]
  int v13; // [esp+10h] [ebp-14h]
  char v14; // [esp+15h] [ebp-Fh]
  int v15; // [esp+18h] [ebp-Ch]
  int v16; // [esp+1Ch] [ebp-8h]

  AISelectTeamHouseClass(&v11, (int)this, a3); /*0x4fa220*/
  *(_DWORD *)(a2 + 4) = 0; /*0x4fa231*/
  *(_DWORD *)(a2 + 8) = 0; /*0x4fa234*/
  *(_BYTE *)(a2 + 12) = 1; /*0x4fa237*/
  *(_BYTE *)(a2 + 13) = 0; /*0x4fa23b*/
  *(_DWORD *)a2 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x4fa23e*/
  if ( (void ***)a2 != &v11 ) /*0x4fa244*/
  {
    VectorClass::ClearAndFree3(a2); /*0x4fa248*/
    v3 = v13; /*0x4fa24e*/
    v4 = v13 == 0; /*0x4fa252*/
    *(_DWORD *)(a2 + 8) = v13; /*0x4fa254*/
    if ( v4 ) /*0x4fa257*/
    {
      *(_DWORD *)(a2 + 4) = 0; /*0x4fa294*/
      *(_BYTE *)(a2 + 13) = 0; /*0x4fa297*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(4 * v3); /*0x4fa261*/
      *(_DWORD *)(a2 + 4) = v5; /*0x4fa26b*/
      if ( v5 ) /*0x4fa26e*/
      {
        v6 = *(_DWORD *)(a2 + 8); /*0x4fa270*/
        v7 = 0; /*0x4fa273*/
        *(_BYTE *)(a2 + 13) = 1; /*0x4fa277*/
        if ( v6 > 0 ) /*0x4fa27b*/
        {
          do /*0x4fa290*/
          {
            *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v7) = *((_DWORD *)Block + v7); /*0x4fa287*/
            ++v7; /*0x4fa28d*/
          }
          while ( v7 < *(_DWORD *)(a2 + 8) ); /*0x4fa290*/
        }
      }
    }
  }
  v8 = v16; /*0x4fa29e*/
  *(_DWORD *)(a2 + 16) = v15; /*0x4fa2a2*/
  v9 = Block; /*0x4fa2a5*/
  v4 = Block == 0; /*0x4fa2a9*/
  *(_DWORD *)(a2 + 20) = v8; /*0x4fa2ab*/
  *(_DWORD *)a2 = &TypeList<TeamTypeClass const *>::`vftable'; /*0x4fa2ae*/
  v11 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x4fa2b4*/
  if ( !v4 && v14 ) /*0x4fa2c2*/
    __3_YAXPAX_Z(v9); /*0x4fa2c5*/
  return a2; /*0x4fa2cf*/
}
}
// 0x4FBD80
namespace gamemd {
AbstractClass * * E4Recv_4FBD80::sub_4FBD80(int a2, int a3)
{
  int v3; // ecx
  int result; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  switch ( a2 ) /*0x4fbd92*/
  {
    case 1: /*0x4fbd92*/
    case 40: /*0x4fbd92*/
      v5 = *(&this->u32_8A04); /*0x4fbdaf*/
      if ( v5 == -1 ) /*0x4fbdb8*/
        goto LABEL_10; /*0x4fbdb8*/
      result = *((_DWORD *)g_UnitTypeCount2 + v5); /*0x4fbdc0*/
      break; /*0x4fbdc3*/
    case 2: /*0x4fbd92*/
    case 3: /*0x4fbd92*/
      v3 = *(&this->u32_8A06); /*0x4fbd99*/
      if ( v3 == -1 ) /*0x4fbda2*/
        goto LABEL_10; /*0x4fbda2*/
      result = *((_DWORD *)g_AircraftTypeCount + v3); /*0x4fbda9*/
      break; /*0x4fbdac*/
    case 6: /*0x4fbd92*/
    case 7: /*0x4fbd92*/
      v7 = *(&this->u32_8A03); /*0x4fbddc*/
      if ( v7 == -1 ) /*0x4fbde5*/
        goto LABEL_10; /*0x4fbde5*/
      result = *((_DWORD *)g_TriggerTypeCount + v7); /*0x4fbded*/
      break; /*0x4fbdf0*/
    case 15: /*0x4fbd92*/
    case 16: /*0x4fbd92*/
      v6 = *(&this->u32_8A05); /*0x4fbdc6*/
      if ( v6 == -1 ) /*0x4fbdcf*/
        goto LABEL_10; /*0x4fbdcf*/
      result = *((_DWORD *)Factory_ExitCellTable + v6); /*0x4fbdd6*/
      break; /*0x4fbdd9*/
    default:
  LABEL_10:
      result = 0; /*0x4fbdf3*/
      break; /*0x4fbdf3*/
  }
  return result; /*0x4fbdac*/
}
}
// 0x4F0ED0
namespace gamemd {
int sub_4F0ED0()
{
  dword_A8EDE8 = 0; /*0x4f0ed2*/
  dword_A8EDEC = 0; /*0x4f0ed7*/
  dword_A8EDF0 = 0; /*0x4f0edc*/
  dword_A8EDF4 = 0; /*0x4f0ee1*/
  return 0; /*0x4f0ee6*/
}
} // namespace gamemd

// 0x4F0EF0
namespace gamemd {
void sub_4F0EF0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4f0efc*/
  dbl_A8EE00 = Math::Sqrt(v0 + v0); /*0x4f0f0e*/
}
} // namespace gamemd

// 0x4F0F20
namespace gamemd {
void sub_4F0F20()
{
  dbl_A8EE70 = dbl_A8EE00 / 60.0; /*0x4f0f2c*/
}
} // namespace gamemd

// 0x4F0F40
namespace gamemd {
void sub_4F0F40()
{
  dbl_A8EE58 = 1.0 / dbl_A8EE70; /*0x4f0f4c*/
}
} // namespace gamemd

// 0x4F0F60
namespace gamemd {
void sub_4F0F60()
{
  dbl_A8EE50 = 0.0174532925199433 * 45.0; /*0x4f0f6c*/
}
} // namespace gamemd

// 0x4F0F80
namespace gamemd {
void sub_4F0F80()
{
  dbl_A8EE08 = 0.0174532925199433 * 60.0; /*0x4f0f8c*/
}
} // namespace gamemd

// 0x4F0FA0
namespace gamemd {
void sub_4F0FA0()
{
  dbl_A8EDE0 = 0.0174532925199433 * 90.0; /*0x4f0fac*/
}
} // namespace gamemd

// 0x4F0FC0
namespace gamemd {
long long sub_4F0FC0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8EDE0 - dbl_A8EE08); /*0x4f0fd2*/
  result = Math::RoundToInt(v0 * dbl_A8EE00 * 0.5); /*0x4f0fe6*/
  dword_A8EE78 = result; /*0x4f0feb*/
  return result; /*0x4f0ff0*/
}
} // namespace gamemd

// 0x4F1000
namespace gamemd {
void sub_4F1000()
{
  dbl_A8EE10 = Math::ArcTan((double)dword_A8EE78 * 0.00390625); /*0x4f1017*/
}
} // namespace gamemd

// 0x4F1030
namespace gamemd {
void sub_4F1030()
{
  dbl_A8EE28 = Math::ArcTan((double)(2 * dword_A8EE78) / dbl_A8EE00); /*0x4f1052*/
}
} // namespace gamemd

// 0x4F1060
namespace gamemd {
long long sub_4F1060()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8EE78) + 0.5); /*0x4f107b*/
  dword_A8EE6C = result; /*0x4f1080*/
  return result; /*0x4f1086*/
}
} // namespace gamemd

// 0x4F1090
namespace gamemd {
int sub_4F1090()
{
  word_A8EDFC = 0; /*0x4f1092*/
  word_A8EDFE = 0; /*0x4f1098*/
  return 0; /*0x4f109e*/
}
} // namespace gamemd

// 0x4F10A0
namespace gamemd {
int sub_4F10A0()
{
  dword_A8EE18 = 0; /*0x4f10a2*/
  dword_A8EE1C = 0; /*0x4f10a7*/
  dword_A8EE20 = 0; /*0x4f10ac*/
  return 0; /*0x4f10b1*/
}
} // namespace gamemd

// 0x4F10C0
namespace gamemd {
int sub_4F10C0()
{
  dword_A8EE68 = 0; /*0x4f10c5*/
  dword_A8EE60 = 128; /*0x4f10cf*/
  dword_A8EE64 = 128; /*0x4f10d4*/
  return 128; /*0x4f10d9*/
}
} // namespace gamemd

// 0x4F1700
namespace gamemd {
void nullsub_13()
{
  ; /*0x4f1700*/
}
} // namespace gamemd

// 0x4F1710
namespace gamemd {
void nullsub_14()
{
  ; /*0x4f1710*/
}
} // namespace gamemd

// 0x4F1B60
namespace gamemd {
int sub_4F1B60()
{
  dword_A8EE88 = 0; /*0x4f1b62*/
  dword_A8EE8C = 0; /*0x4f1b67*/
  dword_A8EE90 = 0; /*0x4f1b6c*/
  dword_A8EE94 = 0; /*0x4f1b71*/
  return 0; /*0x4f1b76*/
}
} // namespace gamemd

// 0x4F1B80
namespace gamemd {
int sub_4F1B80()
{
  char **v5; // esi
  void *v6[4]; // [esp+8h] [ebp-ACh] BYREF
  _DWORD v7[3]; // [esp+18h] [ebp-9Ch] BYREF
  _DWORD v8[6]; // [esp+24h] [ebp-90h] BYREF
  char v9; // [esp+3Ch] [ebp-78h]
  int v10; // [esp+40h] [ebp-74h]
  int v11; // [esp+44h] [ebp-70h]
  _DWORD v12[22]; // [esp+48h] [ebp-6Ch] BYREF
  _BYTE v13[12]; // [esp+A0h] [ebp-14h] BYREF
  int v14; // [esp+ACh] [ebp-8h]

  CCFileClass::Construct2(v12, a2); /*0x4f1b8f*/
  if ( CCFileClass::Open(v12, 0) ) /*0x4f1b9b*/
  {
    v6[1] = 0; /*0x4f1bdf*/
    v6[2] = 0; /*0x4f1be3*/
    v7[1] = 0; /*0x4f1be7*/
    v7[2] = 0; /*0x4f1beb*/
    v7[0] = &GenericNode::`vftable'; /*0x4f1bef*/
    GenericNode::Constructor(v8); /*0x4f1bf7*/
    LinkedList::Prepend(v7, (int)v8); /*0x4f1c0d*/
    v6[3] = &List<INIClass::INISection *>::`vftable'; /*0x4f1c16*/
    memset(&v8[3], 0, 12); /*0x4f1c24*/
    v9 = 0; /*0x4f1c30*/
    v10 = 0; /*0x4f1c34*/
    v11 = 0; /*0x4f1c38*/
    v6[0] = &INIClass::`vftable'; /*0x4f1c3c*/
    if ( FileStraw::Open(v6, (int)v12, 0) <= 0 ) /*0x4f1c4b*/
      v5 = 0; /*0x4f1c5c*/
    else
      v5 = LoadFromINIGraphicMenu(a1, v6, a3); /*0x4f1c58*/
    HashTable::DestroyHashTableINIClass(v6); /*0x4f1c62*/
    v12[0] = &CCFileClass::`vftable'; /*0x4f1c6e*/
    v14 = 0; /*0x4f1c76*/
    Vector::Clear((int)v13); /*0x4f1c7d*/
    v12[0] = &off_7E1668; /*0x4f1c86*/
    BufferIOFileClass::Dtor(v12); /*0x4f1c8e*/
    return v5; /*0x4f1c93*/
  }
  else
  {
    v12[0] = &CCFileClass::`vftable'; /*0x4f1bab*/
    v14 = 0; /*0x4f1bb3*/
    Vector::Clear((int)v13); /*0x4f1bba*/
    v12[0] = &off_7E1668; /*0x4f1bc3*/
    BufferIOFileClass::Dtor(v12); /*0x4f1bcb*/
    return 0; /*0x4f1bd0*/
  }
}
} // namespace gamemd

// 0x4F2280
namespace gamemd {
int E4Recv_4F2280::sub_4F2280(int a2, int a3)
{
  int result; // eax
  void **v4; // [esp+0h] [ebp-Ch] BYREF
  char *v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  v6 = 0; /*0x4f2286*/
  v5 = &this->u32_160; /*0x4f228e*/
  v4 = &VectorCursor<GraphicMenuItem *,DynamicVectorClass<GraphicMenuItem *>>::`vftable'; /*0x4f2296*/
  for ( result = Map::CanScroll(&v4); (_BYTE)result; result = ((int (__thiscall *)(void ***))v4[1])(&v4) ) /*0x4f22a6*/
  {
    if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v5 + 1) + 4 * v6) + 4) == a2 ) /*0x4f22c3*/
      sub_4F3AB0(*(_BYTE **)(*((_DWORD *)v5 + 1) + 4 * v6), a3); /*0x4f22cc*/
    ((void (__thiscall *)(void ***))v4[2])(&v4); /*0x4f22d9*/
  }
  return result; /*0x4f22ed*/
}
} // namespace gamemd

// 0x4F26E0
namespace gamemd {
int E4Recv_4F26E0::sub_4F26E0(int a2)
{
  int v2; // ecx
  void **v4; // [esp+4h] [ebp-Ch] BYREF
  char *v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v5 = &this->u32_160; /*0x4f26e7*/
  v6 = 0; /*0x4f26ef*/
  v4 = &VectorCursor<GraphicMenuItem *,DynamicVectorClass<GraphicMenuItem *>>::`vftable'; /*0x4f26f7*/
  if ( Map::CanScroll(&v4) ) /*0x4f26ff*/
  {
    do /*0x4f2738*/
    {
      v2 = *(_DWORD *)(*((_DWORD *)v5 + 1) + 4 * v6); /*0x4f2719*/
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v2 + 8))(v2, a2) ) /*0x4f271e*/
        break; /*0x4f2723*/
      ((void (__thiscall *)(void ***))v4[2])(&v4); /*0x4f272d*/
    }
    while ( ((unsigned __int8 (__thiscall *)(void ***))v4[1])(&v4) ); /*0x4f2738*/
  }
  if ( ((unsigned __int8 (__thiscall *)(void ***))v4[1])(&v4) ) /*0x4f2747*/
    return *(_DWORD *)(*((_DWORD *)v5 + 1) + 4 * v6); /*0x4f275a*/
  else
    return 0; /*0x4f2763*/
}
} // namespace gamemd

// 0x4F2770
namespace gamemd {
int E4Recv_4F2770::sub_4F2770(int a2)
{
  int v2; // ecx
  void **v4; // [esp+4h] [ebp-Ch] BYREF
  char *v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v5 = &this->u32_160; /*0x4f2777*/
  v6 = 0; /*0x4f277f*/
  v4 = &VectorCursor<GraphicMenuItem *,DynamicVectorClass<GraphicMenuItem *>>::`vftable'; /*0x4f2787*/
  if ( Map::CanScroll(&v4) ) /*0x4f278f*/
  {
    do /*0x4f27c8*/
    {
      v2 = *(_DWORD *)(*((_DWORD *)v5 + 1) + 4 * v6); /*0x4f27a9*/
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(v2, a2) ) /*0x4f27ae*/
        break; /*0x4f27b3*/
      ((void (__thiscall *)(void ***))v4[2])(&v4); /*0x4f27bd*/
    }
    while ( ((unsigned __int8 (__thiscall *)(void ***))v4[1])(&v4) ); /*0x4f27c8*/
  }
  if ( ((unsigned __int8 (__thiscall *)(void ***))v4[1])(&v4) ) /*0x4f27d7*/
    return *(_DWORD *)(*((_DWORD *)v5 + 1) + 4 * v6); /*0x4f27ea*/
  else
    return 0; /*0x4f27f3*/
}
} // namespace gamemd

// 0x4F2C00
namespace gamemd {
unsigned int * E4Recv_4F2C00::sub_4F2C00(int a2, int a3)
{
  this->M4 = 0; /*0x4f2c0b*/
  this->M8 = a2; /*0x4f2c0e*/
  this->M12 = 1; /*0x4f2c11*/
  this->M13 = 0; /*0x4f2c15*/
  *this = &VectorClass<GraphicMenuItem *>::`vftable'; /*0x4f2c18*/
  if ( a2 ) /*0x4f2c1e*/
  {
    if ( a3 ) /*0x4f2c26*/
    {
      this->M4 = a3; /*0x4f2c28*/
      return this; /*0x4f2c2e*/
    }
    this->M4 = __2_YAPAXI_Z(4 * a2); /*0x4f2c3d*/
    this->M13 = 1; /*0x4f2c40*/
  }
  return this; /*0x4f2c2d*/
}
} // namespace gamemd

// 0x4F2C50
namespace gamemd {
int sub_4F2C50()
{
  dword_A8EE98 = 0; /*0x4f2c52*/
  dword_A8EE9C = 0; /*0x4f2c57*/
  dword_A8EEA0 = 0; /*0x4f2c5c*/
  dword_A8EEA4 = 0; /*0x4f2c61*/
  return 0; /*0x4f2c66*/
}
} // namespace gamemd

// 0x4F2F10
namespace gamemd {
int * E4Recv_4F2F10::sub_4F2F10(GraphicMenuAnimItem * aP1, unsigned int * a2, GraphicMenuAnimItem * aP3, int * a4, GraphicMenuAnimItem * aP5, char ** a6, GraphicMenuAnimItem * aP7, GraphicMenuAnimItem * aP8)
{
  int v10; // edx
  char *v11; // eax
  void *v12; // eax
  void *v13; // eax
  void *v15; // [esp+10h] [ebp-DCh] BYREF
  _DWORD v16[22]; // [esp+14h] [ebp-D8h] BYREF
  char v17[12]; // [esp+6Ch] [ebp-80h] BYREF
  int v18; // [esp+78h] [ebp-74h]
  _DWORD v19[22]; // [esp+80h] [ebp-6Ch] BYREF
  char v20[12]; // [esp+D8h] [ebp-14h] BYREF
  int v21; // [esp+E4h] [ebp-8h]

  GraphicMenuItem::Constructor(this, aP1); /*0x4f2f21*/
  this->M16 = *a4; /*0x4f2f3c*/
  this->M20 = a4[1]; /*0x4f2f41*/
  this->M24 = a4[2]; /*0x4f2f47*/
  v10 = a4[3]; /*0x4f2f4a*/
  this->q020 = 0; /*0x4f2f4d*/
  this->M28 = v10; /*0x4f2f50*/
  this->q024 = 0; /*0x4f2f5a*/
  *this = (int)&GraphicMenuAnimItem::`vftable'; /*0x4f2f5d*/
  CCFileClass::Construct2(v19, aP5); /*0x4f2f63*/
  CCFileClass::Construct2(v16, a6); /*0x4f2f74*/
  if ( CCFileClass::Open(v19, 0) ) /*0x4f2f81*/
  {
    if ( CCFileClass::Open(v16, 0) ) /*0x4f2f8f*/
    {
      v11 = String::GetOrEmpty_Alt(a6); /*0x4f2f9a*/
      String::Assign((char **)&v15, v11); /*0x4f2fa4*/
      this->q024 = (int)PaletteClass::Load((const char **)&v15); /*0x4f2fb6*/
      DeleteAndZero(&v15); /*0x4f2fb9*/
      v12 = __2_YAPAXI_Z(0x40u); /*0x4f2fc0*/
      if ( v12 ) /*0x4f2fca*/
      {
        v13 = MSShapeAnim::Constructor(v12, aP5, *aP3, aP3[1], this->q024, aP7, aP8, 0); /*0x4f2ff2*/
        if ( v13 ) /*0x4f2ff9*/
          PriorityQueue::Add(a2, (int)v13); /*0x4f3003*/
      }
    }
  }
  v16[0] = &CCFileClass::`vftable'; /*0x4f3011*/
  v18 = 0; /*0x4f3015*/
  Vector::Clear((int)v17); /*0x4f3019*/
  v16[0] = &off_7E1668; /*0x4f3027*/
  BufferIOFileClass::Dtor(v16); /*0x4f302b*/
  v19[0] = &CCFileClass::`vftable'; /*0x4f3037*/
  v21 = 0; /*0x4f303e*/
  Vector::Clear((int)v20); /*0x4f3045*/
  v19[0] = &off_7E1668; /*0x4f3051*/
  BufferIOFileClass::Dtor(v19); /*0x4f3058*/
  return this; /*0x4f305f*/
}
} // namespace gamemd

// 0x4F3120
namespace gamemd {
int sub_4F3120()
{
  dword_A8EEA8 = 0; /*0x4f3122*/
  dword_A8EEAC = 0; /*0x4f3127*/
  dword_A8EEB0 = 0; /*0x4f312c*/
  dword_A8EEB4 = 0; /*0x4f3131*/
  return 0; /*0x4f3136*/
}
} // namespace gamemd

// 0x4F3890
namespace gamemd {
int sub_4F3890()
{
  dword_A8EEB8 = 0; /*0x4f3892*/
  dword_A8EEBC = 0; /*0x4f3897*/
  dword_A8EEC0 = 0; /*0x4f389c*/
  dword_A8EEC4 = 0; /*0x4f38a1*/
  return 0; /*0x4f38a6*/
}
} // namespace gamemd

// 0x4F3B60
namespace gamemd {
int sub_4F3B60()
{
  dword_A8EEC8 = 0; /*0x4f3b62*/
  dword_A8EECC = 0; /*0x4f3b67*/
  dword_A8EED0 = 0; /*0x4f3b6c*/
  dword_A8EED4 = 0; /*0x4f3b71*/
  return 0; /*0x4f3b76*/
}
} // namespace gamemd

// 0x4F3C40
namespace gamemd {
unsigned int * E4Recv_4F3C40::sub_4F3C40(int a2, const char ** a3)
{
  _DWORD *v3; // ebp
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // ebp
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // edx

  v3 = this; /*0x4f3c49*/
  GraphicMenuItem::Constructor(this, a2); /*0x4f3c50*/
  v4 = v3 + 4; /*0x4f3c55*/
  v3[5] = 0; /*0x4f3c5e*/
  v3[6] = 0; /*0x4f3c61*/
  *((_BYTE *)v3 + 28) = 1; /*0x4f3c64*/
  *((_BYTE *)v3 + 29) = 0; /*0x4f3c68*/
  v3[4] = &DynamicVectorClass<unsigned int>::`vftable'; /*0x4f3c6b*/
  v3[9] = 10; /*0x4f3c71*/
  v3[8] = 0; /*0x4f3c78*/
  *v3 = &GraphicMenuShortcutItem::`vftable'; /*0x4f3c7b*/
  unknown_libname_73(&a2); /*0x4f3c82*/
  v5 = String::Tokenize(a3, 0, Delimiter, (void **)&a2); /*0x4f3c9f*/
  if ( String::Length((const char **)&a2) ) /*0x4f3ca1*/
  {
    do /*0x4f3d19*/
    {
      v6 = sub_4F3D40((const char **)&a2); /*0x4f3cb3*/
      if ( v6 ) /*0x4f3cb7*/
      {
        v7 = v4[2]; /*0x4f3cb9*/
        if ( v4[4] < v7 /*0x4f3cdb*/
          || (*((_BYTE *)v4 + 13) || !v7)
          && (v8 = v4[5], v8 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v7 + v8, 0) )
        {
          v9 = v4[4]; /*0x4f3ce2*/
          v10 = v4[1]; /*0x4f3ce5*/
          v4[4] = v9 + 1; /*0x4f3ceb*/
          *(_DWORD *)(v10 + 4 * v9) = v6; /*0x4f3cee*/
        }
      }
      v5 = String::Tokenize(a3, v5, asc_824370, (void **)&a2); /*0x4f3d05*/
      if ( v5 == -1 ) /*0x4f3d0a*/
        DeleteAndZero::Alt2((void **)&a2); /*0x4f3d10*/
    }
    while ( String::Length((const char **)&a2) ); /*0x4f3d19*/
    v3 = this; /*0x4f3d22*/
  }
  DeleteAndZero((void **)&a2); /*0x4f3d2a*/
  return v3; /*0x4f3d2f*/
}
} // namespace gamemd

// 0x4F4010
namespace gamemd {
int sub_4F4010()
{
  dword_A8EEE0 = 0; /*0x4f4012*/
  dword_A8EEE4 = 0; /*0x4f4017*/
  dword_A8EEE8 = 0; /*0x4f401c*/
  dword_A8EEEC = 0; /*0x4f4021*/
  return 0; /*0x4f4026*/
}
} // namespace gamemd

// 0x4F4030
namespace gamemd {
void sub_4F4030()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4f403c*/
  dbl_A8EEF8 = Math::Sqrt(v0 + v0); /*0x4f404e*/
}
} // namespace gamemd

// 0x4F4060
namespace gamemd {
void sub_4F4060()
{
  dbl_A8EF48 = dbl_A8EEF8 / 60.0; /*0x4f406c*/
}
} // namespace gamemd

// 0x4F4080
namespace gamemd {
void sub_4F4080()
{
  dbl_A8EF30 = 1.0 / dbl_A8EF48; /*0x4f408c*/
}
} // namespace gamemd

// 0x4F40A0
namespace gamemd {
void sub_4F40A0()
{
  dbl_A8EF28 = 0.0174532925199433 * 45.0; /*0x4f40ac*/
}
} // namespace gamemd

// 0x4F40C0
namespace gamemd {
void sub_4F40C0()
{
  dbl_A8EF00 = 0.0174532925199433 * 60.0; /*0x4f40cc*/
}
} // namespace gamemd

// 0x4F40E0
namespace gamemd {
void sub_4F40E0()
{
  dbl_A8EED8 = 0.0174532925199433 * 90.0; /*0x4f40ec*/
}
} // namespace gamemd

// 0x4F4100
namespace gamemd {
long long sub_4F4100()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8EED8 - dbl_A8EF00); /*0x4f4112*/
  result = Math::RoundToInt(v0 * dbl_A8EEF8 * 0.5); /*0x4f4126*/
  dword_A8EF50 = result; /*0x4f412b*/
  return result; /*0x4f4130*/
}
} // namespace gamemd

// 0x4F4140
namespace gamemd {
void sub_4F4140()
{
  dbl_A8EF08 = Math::ArcTan((double)dword_A8EF50 * 0.00390625); /*0x4f4157*/
}
} // namespace gamemd

// 0x4F4170
namespace gamemd {
void sub_4F4170()
{
  dbl_A8EF20 = Math::ArcTan((double)(2 * dword_A8EF50) / dbl_A8EEF8); /*0x4f4192*/
}
} // namespace gamemd

// 0x4F41A0
namespace gamemd {
long long sub_4F41A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8EF50) + 0.5); /*0x4f41bb*/
  dword_A8EF44 = result; /*0x4f41c0*/
  return result; /*0x4f41c6*/
}
} // namespace gamemd

// 0x4F41D0
namespace gamemd {
int sub_4F41D0()
{
  word_A8EEF0 = 0; /*0x4f41d2*/
  word_A8EEF2 = 0; /*0x4f41d8*/
  return 0; /*0x4f41de*/
}
} // namespace gamemd

// 0x4F41E0
namespace gamemd {
int sub_4F41E0()
{
  dword_A8EF10 = 0; /*0x4f41e2*/
  dword_A8EF14 = 0; /*0x4f41e7*/
  dword_A8EF18 = 0; /*0x4f41ec*/
  return 0; /*0x4f41f1*/
}
} // namespace gamemd

// 0x4F4200
namespace gamemd {
int sub_4F4200()
{
  dword_A8EF40 = 0; /*0x4f4205*/
  dword_A8EF38 = 128; /*0x4f420f*/
  dword_A8EF3C = 128; /*0x4f4214*/
  return 128; /*0x4f4219*/
}
} // namespace gamemd

// 0x4F4D30
namespace gamemd {
bool E4Recv_4F4D30::sub_4F4D30(const char * a2)
{
  return strcmp(this, a2) != 0; /*0x4f4d65*/
}
} // namespace gamemd

// 0x4F4D90
namespace gamemd {
void j_Stub_InfiniteLoop()
{
  Stub::InfiniteLoop(a1, a2); /*0x4f4d90*/
}
}
// 0x4F4EE0
namespace gamemd {
int sub_4F4EE0()
{
  dword_A8EF68 = 0; /*0x4f4ee2*/
  dword_A8EF6C = 0; /*0x4f4ee7*/
  dword_A8EF70 = 0; /*0x4f4eec*/
  dword_A8EF74 = 0; /*0x4f4ef1*/
  return 0; /*0x4f4ef6*/
}
} // namespace gamemd

// 0x4F4F00
namespace gamemd {
void sub_4F4F00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4f4f0c*/
  dbl_A8EFA0 = Math::Sqrt(v0 + v0); /*0x4f4f1e*/
}
} // namespace gamemd

// 0x4F4F30
namespace gamemd {
void sub_4F4F30()
{
  dbl_A8F030 = dbl_A8EFA0 / 60.0; /*0x4f4f3c*/
}
} // namespace gamemd

// 0x4F4F50
namespace gamemd {
void sub_4F4F50()
{
  dbl_A8F018 = 1.0 / dbl_A8F030; /*0x4f4f5c*/
}
} // namespace gamemd

// 0x4F4F70
namespace gamemd {
void sub_4F4F70()
{
  dbl_A8F010 = 0.0174532925199433 * 45.0; /*0x4f4f7c*/
}
} // namespace gamemd

// 0x4F4F90
namespace gamemd {
void sub_4F4F90()
{
  dbl_A8EFE0 = 0.0174532925199433 * 60.0; /*0x4f4f9c*/
}
} // namespace gamemd

// 0x4F4FB0
namespace gamemd {
void sub_4F4FB0()
{
  dbl_A8EF58 = 0.0174532925199433 * 90.0; /*0x4f4fbc*/
}
} // namespace gamemd

// 0x4F4FD0
namespace gamemd {
long long sub_4F4FD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8EF58 - dbl_A8EFE0); /*0x4f4fe2*/
  result = Math::RoundToInt(v0 * dbl_A8EFA0 * 0.5); /*0x4f4ff6*/
  dword_A8F038 = result; /*0x4f4ffb*/
  return result; /*0x4f5000*/
}
} // namespace gamemd

// 0x4F5010
namespace gamemd {
void sub_4F5010()
{
  dbl_A8EFF0 = Math::ArcTan((double)dword_A8F038 * 0.00390625); /*0x4f5027*/
}
} // namespace gamemd

// 0x4F5040
namespace gamemd {
void sub_4F5040()
{
  dbl_A8F008 = Math::ArcTan((double)(2 * dword_A8F038) / dbl_A8EFA0); /*0x4f5062*/
}
} // namespace gamemd

// 0x4F5070
namespace gamemd {
long long sub_4F5070()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F038) + 0.5); /*0x4f508b*/
  dword_A8F02C = result; /*0x4f5090*/
  return result; /*0x4f5096*/
}
} // namespace gamemd

// 0x4F50A0
namespace gamemd {
int sub_4F50A0()
{
  g_ControlGroupState = 0; /*0x4f50a2*/
  return 0; /*0x4f50ae*/
}
} // namespace gamemd

// 0x4F50B0
namespace gamemd {
int sub_4F50B0()
{
  g_ControlGroupPool = 0; /*0x4f50b2*/
  g_ControlGroupConfig = 0; /*0x4f50b7*/
  g_ControlGroupLimit = 0; /*0x4f50bc*/
  return 0; /*0x4f50c1*/
}
} // namespace gamemd

// 0x4F50D0
namespace gamemd {
int sub_4F50D0()
{
  dword_A8F028 = 0; /*0x4f50d5*/
  dword_A8F020 = 128; /*0x4f50df*/
  dword_A8F024 = 128; /*0x4f50e4*/
  return 128; /*0x4f50e9*/
}
} // namespace gamemd

// 0x4F50F0
namespace gamemd {
int sub_4F50F0()
{
  dword_A8EFCC = 0; /*0x4f50f7*/
  dword_A8EFD0 = 0; /*0x4f50fc*/
  byte_A8EFD4 = 1; /*0x4f5101*/
  byte_A8EFD5 = 0; /*0x4f5108*/
  dword_A8EFC8 = (int)&off_7EA7B4; /*0x4f510d*/
  dword_A8EFDC = 10; /*0x4f5117*/
  dword_A8EFD8 = 0; /*0x4f5121*/
  return atexit(sub_4F5130); /*0x4f512c*/
}
} // namespace gamemd

// 0x4F5130
namespace gamemd {
void sub_4F5130()
{
  if ( (byte_A8EF60 & 1) == 0 ) /*0x4f513a*/
  {
    dword_A8EFC8 = (int)&VectorClass<HouseClass::BuildChoiceClass *>::`vftable'; /*0x4f513e*/
    byte_A8EF60 |= 1u; /*0x4f5151*/
    if ( dword_A8EFCC ) /*0x4f5157*/
    {
      if ( byte_A8EFD5 ) /*0x4f5161*/
      {
        __3_YAXPAX_Z(dword_A8EFCC); /*0x4f5164*/
        dword_A8EFCC = 0; /*0x4f516c*/
      }
    }
    byte_A8EFD5 = 0; /*0x4f5176*/
    dword_A8EFD0 = 0; /*0x4f517d*/
  }
}
} // namespace gamemd

// 0x4F6EB0
namespace gamemd {
void nullsub_15()
{
  ; /*0x4f6eb0*/
}
} // namespace gamemd

// 0x4F7850
namespace gamemd {
unsigned int * E4Recv_4F7850::sub_4F7850()
{
  *this = 0; /*0x4f7854*/
  this->M4 = 1; /*0x4f7856*/
  this->M8 = 0; /*0x4f785d*/
  this->M12 = 0; /*0x4f7860*/
  this->M16 = -1; /*0x4f7863*/
  return this; /*0x4f786a*/
}
} // namespace gamemd

// 0x4F9670
namespace gamemd {
int E4Recv_4F9670::sub_4F9670()
{
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  double v5; // st7
  float v7; // [esp+Ch] [ebp-Ch]
  float v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h]

  v2 = 0; /*0x4f9678*/
  v3 = 0; /*0x4f967a*/
  v7 = 0.0; /*0x4f967f*/
  v9 = *(&this->u32_C0); /*0x4f9685*/
  if ( v9 <= 0 ) /*0x4f9689*/
    return 0; /*0x4f96f5*/
  do /*0x4f96e8*/
  {
    v4 = *(_DWORD *)(*(&this->u32_87) + 4 * v3); /*0x4f968f*/
    if ( v4 ) /*0x4f9694*/
    {
      if ( *(_BYTE *)(v4 + 116) ) /*0x4f9696*/
      {
        if ( *(int *)(*(_DWORD *)(v4 + 1312) + 2048) > 0 ) /*0x4f96af*/
        {
          v8 = (float)*(int *)(*(_DWORD *)(v4 + 1312) + 2048); /*0x4f96bb*/
          v5 = v8 - Float4::Sum((float *)(v4 + 828)); /*0x4f96c4*/
          if ( !v2 || v5 > v7 ) /*0x4f96d5*/
          {
            v7 = v5; /*0x4f96d7*/
            v2 = v4; /*0x4f96db*/
          }
        }
      }
    }
    ++v3; /*0x4f96e5*/
  }
  while ( v3 < v9 ); /*0x4f96e8*/
  return v2; /*0x4f96eb*/
}
} // namespace gamemd

// 0x4FBD00
namespace gamemd {
char E4Recv_4FBD00::sub_4FBD00(int a2)
{
  int v2; // edi
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = 0; /*0x4fbd08*/
  if ( HouseClass_Count <= 0 ) /*0x4fbd0e*/
    return 0; /*0x4fbd61*/
  while ( 1 ) /*0x4fbd19*/
  {
    v4 = *(_DWORD **)&HouseClass_Array->gap0[4 * v2]; /*0x4fbd19*/
    if ( v4 ) /*0x4fbd1e*/
    {
      if ( v4 != this ) /*0x4fbd22*/
      {
        v5 = v4[12]; /*0x4fbd24*/
        if ( v5 != *(&this->u32_42) /*0x4fbd55*/
          && (v5 == -1 || ((1 << v5) & *(&this->u32_8C02)) == 0)
          && DynamicVector::GetOrGrow(v4 + 5460, a2) > 0 )
        {
          break; /*0x4fbd55*/
        }
      }
    }
    if ( ++v2 >= HouseClass_Count ) /*0x4fbd5f*/
      return 0; /*0x4fbd5f*/
  }
  return 1; /*0x4fbd61*/
}
} // namespace gamemd

// 0x4FCE00
namespace gamemd {
int E4Recv_4FCE00::sub_4FCE00(ObjectClass * aP1, int a3, ObjectClass * aP3)
{
  int v4; // edx

  v4 = *(&this->u32_43); /*0x4fce04*/
  *(&this->u32_2C9) = aP3; /*0x4fce07*/
  *(&this->u32_4C5) = aP3; /*0x4fce0d*/
  *(_DWORD *)(v4 + 192) = aP1; /*0x4fce17*/
  *(&this->u32_23389) = aP1; /*0x4fce1d*/
  return aP1; /*0x4fce23*/
}
} // namespace gamemd

// 0x4FD120
namespace gamemd {
unsigned int * sub_4FD120(unsigned int * a1, int a2)
{
  *a1 = g_ControlGroupPool; /*0x4fd12c*/
  a1[1] = g_ControlGroupConfig; /*0x4fd134*/
  a1[2] = g_ControlGroupLimit; /*0x4fd13d*/
  return a1; /*0x4fd140*/
}
} // namespace gamemd

// 0x4FF540
namespace gamemd {
void nullsub_100(int a1)
{
  ; /*0x4ff540*/
}
} // namespace gamemd

// 0x4FFD50
namespace gamemd {
int E4Recv_4FFD50::sub_4FFD50(int a2)
{
  unsigned int *v4; // eax
  _BYTE v5[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x4ffd5c*/
    return -1; /*0x4ffd5e*/
  v4 = (unsigned int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v5); /*0x4ffd6f*/
  return PathfindingClass::FindPath(this, v4); /*0x4ffd61*/
}
} // namespace gamemd

// 0x4FFD90
namespace gamemd {
int E4Recv_4FFD90::sub_4FFD90(short * a2)
{
  int v2; // eax
  unsigned int v4[3]; // [esp+0h] [ebp-Ch] BYREF

  v4[2] = 0; /*0x4ffd97*/
  v2 = a2[1]; /*0x4ffda2*/
  v4[0] = (*a2 << 8) + 128; /*0x4ffdaf*/
  v4[1] = (v2 << 8) + 128; /*0x4ffdc0*/
  return PathfindingClass::FindPath(this, v4); /*0x4ffdc9*/
}
} // namespace gamemd
