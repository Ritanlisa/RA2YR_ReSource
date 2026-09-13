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

// 0x4F10E0
namespace gamemd {
int InGameUI_Open()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int InGameUI_Open()
{
  unsigned __int16 v0; // cx
  HWND v1; // eax
  HWND v2; // esi
  LONG dwNewLong; // [esp+0h] [ebp-4h] BYREF

  dwNewLong = 0; /*0x4f10e9*/
  if ( !MEMORY[0xA8B238] || MEMORY[0xA8B238] == 5 ) /*0x4f10f6*/
  {
    v0 = 181; /*0x4f1130*/
  }
  else
  {
    if ( MEMORY[0xA8B238] != 4 ) /*0x4f10fb*/
    {
      v1 = (HWND)CreateDialog(0xBBAu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))Options::DlgProc, 0); /*0x4f1127*/
      goto LABEL_10; /*0x4f1127*/
    }
    if ( MEMORY[0xA8B538] ) /*0x4f110b*/
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
    ScenarioClass::ShowMissionBriefing(MEMORY[0xA8B230]); /*0x4f1191*/
  return MapClass::MarkForRedraw(2); /*0x4f11a2*/
}
}
} // namespace gamemd

// 0x4F1840
namespace gamemd {
LONG sub_4F1840()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG sub_4F1840()
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
} // namespace gamemd

// 0x4F18B0
namespace gamemd {
int sub_4F18B0(HWND hDlg, unsigned int a2, unsigned int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_4F18B0(HWND hDlg, unsigned int a2, unsigned int a3, unsigned int a4)
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
            *WindowLongA = MEMORY[0xA8EE80]; /*0x4f1a90*/
        }
        else
        {
          if ( (unsigned __int16)a3 == 1737 ) /*0x4f1a57*/
          {
            *WindowLongA = MEMORY[0xA8EE7C]; /*0x4f1a79*/
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
      MEMORY[0xA8EE7C] = 2; /*0x4f192c*/
      v7 = GetDlgItem(hDlg, 1810); /*0x4f1938*/
      v8 = 0; /*0x4f193f*/
      MEMORY[0xA8EE80] = 0; /*0x4f1943*/
      if ( MEMORY[0xA8B238][0] ) /*0x4f1949*/
      {
        if ( MEMORY[0xA8B238][0] == 5 ) /*0x4f197d*/
          goto LABEL_18; /*0x4f197d*/
        if ( MEMORY[0xA8B238][0] != 3 && MEMORY[0xA8B238][0] != 4 ) /*0x4f198d*/
          goto LABEL_19; /*0x4f198d*/
        if ( HouseClass_Count <= 0 ) /*0x4f199a*/
          goto LABEL_18; /*0x4f199a*/
        v10 = HouseClass_Array; /*0x4f199c*/
        v11 = HouseClass_Count; /*0x4f19a2*/
        do /*0x4f19bd*/
        {
          if ( *(_BYTE *)(*(_DWORD *)v10->__pad_0 + 492) && !*(_BYTE *)(*(_DWORD *)v10->__pad_0 + 501) ) /*0x4f19af*/
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
          MEMORY[0xA8EE7C] = 3; /*0x4f19e5*/
          v12 = GetStringCSF(g_Str_GUI_Observe, 0, g_Str_File_GOptions_CPP, 586); /*0x4f19ef*/
          SendMessageA(v7, 0x4B2u, 0, (LPARAM)v12); /*0x4f19fd*/
          MEMORY[0xA8EE80] = 4; /*0x4f19ff*/
        }
      }
      else
      {
        v9 = GetStringCSF(aGuiRestart, 0, g_Str_File_GOptions_CPP, 558); /*0x4f195c*/
        SendMessageA(v7, 0x4B2u, 0, (LPARAM)v9); /*0x4f1969*/
        MEMORY[0xA8EE80] = 5; /*0x4f196b*/
      }
LABEL_19:
      sub_603E40((int)DlgItem, MEMORY[0xA8EE7C]); /*0x4f1a14*/
      sub_603E40((int)v7, MEMORY[0xA8EE80]); /*0x4f1a29*/
      return 0; /*0x4f1a34*/
    }
    return 0; /*0x4f1a92*/
  }
  return result; /*0x4f1a2f*/
}
}
} // namespace gamemd

// 0x4F1CA0
namespace gamemd {
int LoadFromINIGraphicMenu()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char **__usercall LoadFromINIGraphicMenu@<eax>(char **edx0@<edx>, ObjectClass *ecx0@<ecx>, int edi0@<edi>)
{
  INIClass *v4; // eax
  int v6; // eax
  int v7; // ebp
  VectorClass *v8; // edi
  bool v9; // bl
  _DWORD *Config; // esi
  CCFileClass *v11; // eax
  char v12; // bl
  _DWORD *v13; // eax
  CCFileClass *v14; // eax
  char v15; // bl
  _DWORD *v16; // eax
  ObjectClass *v17; // esi
  char *v18; // eax
  char v19; // bl
  int (__thiscall ***eax18)(_DWORD, int); // eax
  int eax21; // eax
  int v22; // ecx
  SessionClass *v20; // eax
  ObjectClass *v21; // esi
  bool v25; // bl
  int Int; // esi
  int v27; // ebp
  ObjectClass *v28; // esi
  bool v29; // bl
  _DWORD *v30; // esi
  char *v31; // ecx
  int v32; // eax
  void *vtable0; // eax
  _DWORD *v34; // edx
  ObjectClass *a2; // [esp+Ch] [ebp-B4h] BYREF
  ObjectClass *v33; // [esp+10h] [ebp-B0h] BYREF
  AbstractClass aP2_4; // [esp+14h] [ebp-ACh] BYREF
  int aP2_44[3]; // [esp+3Ch] [ebp-84h] BYREF
  _DWORD aP2_56[2]; // [esp+48h] [ebp-78h] BYREF
  int aP2_64; // [esp+50h] [ebp-70h] BYREF
  _DWORD aP2_68[22]; // [esp+54h] [ebp-6Ch] BYREF
  _BYTE aP2_156[12]; // [esp+ACh] [ebp-14h] BYREF
  int aP2_168; // [esp+B8h] [ebp-8h]
  int v45; // [esp+BCh] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+C0h] [ebp+0h]

  *(_DWORD *)&aP2_4.__pad_0[12] = edx0; /*0x4f1caf*/
  *(_DWORD *)&aP2_4.__pad_0[8] = ecx0; /*0x4f1cb3*/
  v45 = 0; /*0x4f1cb7*/
  v4 = (INIClass *)String::GetOrEmpty_Alt(edx0); /*0x4f1cbe*/
  if ( !INIClass::BinarySearchSection((int)ecx0, v4) ) /*0x4f1cc6*/
    return 0; /*0x4f1cc6*/
  v6 = __2_YAPAXI_Z(0x70u); /*0x4f1cdd*/
  v7 = v6; /*0x4f1ce2*/
  aP2_4.nextArrayIndex = v6; /*0x4f1ce9*/
  if ( !v6 ) /*0x4f1ced*/
    return 0; /*0x4f1cda*/
  MSEngine::Construct((_DWORD *)(v6 + 4)); /*0x4f1cf3*/
  String::Assign((char **)(v7 + 76), (const char *)&g_INI_Key_Intro.headNode[1]); /*0x4f1d02*/
  aP2_4.abstractFlags = v7 + 80; /*0x4f1d0f*/
  String::Assign((char **)(v7 + 80), g_INI_Key_Intro.__pad_0); /*0x4f1d13*/
  v8 = (VectorClass *)(v7 + 88); /*0x4f1d18*/
  *(_DWORD *)(v7 + 84) = 0; /*0x4f1d1b*/
  sub_4F2C00((_DWORD *)(v7 + 88), 0, 0); /*0x4f1d22*/
  *(_DWORD *)(v7 + 88) = &vt_DynamicVectorClass_GraphicMenuItem; /*0x4f1d27*/
  *(_DWORD *)(v7 + 108) = 10; /*0x4f1d2d*/
  *(_DWORD *)(v7 + 104) = 0; /*0x4f1d34*/
  *(_DWORD *)v7 = &vt_GraphicMenu; /*0x4f1d3b*/
  unknown_libname_73(&aP2_4); /*0x4f1d42*/
  String::Assign((char **)&aP2_4.__pad_0[4], &stru_87C374.__pad_579C[33876]); /*0x4f1d50*/
  String::Assign((char **)&a2, aBackground); /*0x4f1d5e*/
  v9 = (int)INIClass::ReadString( /*0x4f1d86*/
              *(ObjectClass **)&aP2_4.__pad_0[8],
              *(ObjectClass **)&aP2_4.__pad_0[12],
              (ObjectClass *)&a2,
              (ReferenceCounted *)&aP2_4.__pad_0[4],
              (int)&aP2_4) > 0;
  DeleteAndZero((void **)&a2); /*0x4f1d89*/
  DeleteAndZero((void **)&aP2_4.__pad_0[4]); /*0x4f1d92*/
  String::Concat2((const char **)&aP2_4, (char **)&aP2_4.uniqueId, g_Str_File__PCX); /*0x4f1da5*/
  String::Reassign((char **)(v7 + 76), (AbstractClass *)&aP2_4.uniqueId); /*0x4f1db1*/
  Config = 0; /*0x4f1db6*/
  aP2_4.referenceCount = 0; /*0x4f1dba*/
  aP2_4.NeedsSaveOrLink = 0; /*0x4f1dbe*/
  if ( v9 ) /*0x4f1dc2*/
  {
    String::Concat2((const char **)&aP2_4, (char **)&a2, aVqa); /*0x4f1dd6*/
    v11 = CCFileClass::Construct2(&aP2_64, (char **)&a2); /*0x4f1de4*/
    v12 = (*(int (__thiscall **)(CCFileClass *, _DWORD, int))(*(_DWORD *)v11->__pad_0 + 20))(v11, 0, edi0); /*0x4f1df8*/
    aP2_68[0] = &vt_CCFileClass; /*0x4f1dfa*/
    aP2_168 = 0; /*0x4f1e02*/
    Vector::Clear((int)aP2_156); /*0x4f1e09*/
    aP2_68[0] = &off_7E1668; /*0x4f1e12*/
    BufferIOFileClass::Dtor(aP2_68); /*0x4f1e1a*/
    if ( v12 ) /*0x4f1e21*/
    {
      v13 = (_DWORD *)__2_YAPAXI_Z(0x30u); /*0x4f1e25*/
      if ( v13 ) /*0x4f1e2f*/
      {
        Config = MSVQAnim::ConstructMSVQAnimHidden( /*0x4f1e4e*/
                   v13,
                   (MSVQAnim *)&v33,
                   *(ObjectClass **)&stru_87C374.__pad_579C[22528],
                   (MSVQAnim *)(v7 + 28),
                   1);
        if ( Config ) /*0x4f1e52*/
        {
LABEL_18:
          eax18 = *(int (__thiscall ****)(_DWORD, int))(v7 + 84); /*0x4f1f6b*/
          if ( eax18 ) /*0x4f1f71*/
            UI_Load_5D1C90((_DWORD *)(v7 + 4), eax18, (int (__thiscall ***)(_DWORD, int))Config); /*0x4f1f77*/
          else
            PriorityQueue::Add((Selection_WorldDominationTour *)(v7 + 4), (MSAnim *)Config); /*0x4f1f81*/
          *(_DWORD *)(v7 + 84) = Config; /*0x4f1f86*/
          eax21 = (*(int (__thiscall **)(_DWORD *, int *))(*Config + 24))(Config, aP2_44); /*0x4f1f92*/
          v22 = *(_DWORD *)eax21; /*0x4f1f95*/
          v20 = *(SessionClass **)(eax21 + 4); /*0x4f1f97*/
          aP2_4.referenceCount = v22; /*0x4f1f9a*/
          aP2_4.NeedsSaveOrLink = v20; /*0x4f1fa2*/
          DeleteAndZero((void **)&a2); /*0x4f1fa6*/
          goto LABEL_22; /*0x4f1fa6*/
        }
      }
      else
      {
        Config = 0; /*0x4f1f4d*/
      }
    }
    String::Concat2((const char **)&aP2_4.__pad_0[4], (char **)&aP2_4.__pad_0[8], aBik_0); /*0x4f1e66*/
    v14 = CCFileClass::Construct2(aP2_68, (char **)&aP2_4.__pad_0[8]); /*0x4f1e74*/
    v15 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v14->__pad_0 + 20))(v14, 0); /*0x4f1e89*/
    aP2_68[0] = &vt_CCFileClass; /*0x4f1e8b*/
    aP2_168 = 0; /*0x4f1e93*/
    Vector::Clear((int)aP2_156); /*0x4f1e9e*/
    aP2_68[0] = &off_7E1668; /*0x4f1ea7*/
    BufferIOFileClass::Dtor(aP2_68); /*0x4f1eaf*/
    if ( v15 ) /*0x4f1eb6*/
    {
      Config = 0; /*0x4f1ec3*/
      aP2_44[0] = 0; /*0x4f1ec7*/
      aP2_44[1] = 0; /*0x4f1ecb*/
      aP2_44[2] = *(_DWORD *)&stru_89E138.__pad_14B0[2748]; /*0x4f1ecf*/
      aP2_56[0] = *(_DWORD *)&stru_89E138.__pad_14B0[2752]; /*0x4f1ed3*/
      v16 = (_DWORD *)__2_YAPAXI_Z(0x3Cu); /*0x4f1ed7*/
      if ( v16 ) /*0x4f1ee1*/
        Config = ArtConfig::loadConfig( /*0x4f1f01*/
                   v16,
                   (ObjectClass *)&aP2_4.__pad_0[8],
                   *(ObjectClass **)&stru_87C374.__pad_579C[22528],
                   (ObjectClass *)(v7 + 28),
                   (ObjectClass *)aP2_44,
                   (ObjectClass *)1);
    }
    DeleteAndZero((void **)&aP2_4.__pad_0[8]); /*0x4f1f07*/
    if ( !Config ) /*0x4f1f0e*/
    {
      v17 = (ObjectClass *)__2_YAPAXI_Z(0x3Cu); /*0x4f1f17*/
      if ( v17 ) /*0x4f1f1e*/
      {
        v18 = String::GetOrEmpty((char **)&aP2_4.abstractFlags); /*0x4f1f24*/
        String::Assign((char **)&aP2_4, v18); /*0x4f1f2e*/
        v19 = 1; /*0x4f1f33*/
        Config = UI_Load(v17, (const char **)&aP2_4, v7 + 28, 1); /*0x4f1f49*/
      }
      else
      {
        v19 = (char)retaddr; /*0x4f1f54*/
        Config = 0; /*0x4f1f5b*/
      }
      if ( (v19 & 1) != 0 ) /*0x4f1f60*/
        DeleteAndZero((void **)&aP2_4); /*0x4f1f66*/
    }
    goto LABEL_18; /*0x4f1f66*/
  }
LABEL_22:
  String::Assign((char **)&a2, &stru_87C374.__pad_579C[33876]); /*0x4f1fab*/
  String::Assign((char **)&v33, g_INI_Key_Theme); /*0x4f1fc2*/
  v21 = *(ObjectClass **)&aP2_4.__pad_0[12]; /*0x4f1fcf*/
  v25 = (int)INIClass::ReadString( /*0x4f1fec*/
               *(ObjectClass **)&aP2_4.__pad_0[8],
               *(ObjectClass **)&aP2_4.__pad_0[12],
               (ObjectClass *)&v33,
               (ReferenceCounted *)&a2,
               (int)&aP2_4) > 0;
  DeleteAndZero((void **)&v33); /*0x4f1fef*/
  DeleteAndZero((void **)&a2); /*0x4f1ff8*/
  if ( v25 ) /*0x4f1fff*/
    String::Reassign((char **)aP2_4.abstractFlags, &aP2_4); /*0x4f200a*/
  String::Assign((char **)&v33, aItemmax); /*0x4f2018*/
  Int = ((int (__stdcall *)(char **, char **, int))INIClass::ReadInt)((char **)v21, (char **)&v33, 100); /*0x4f202c*/
  aP2_4.abstractFlags = Int; /*0x4f2032*/
  DeleteAndZero((void **)&v33); /*0x4f2036*/
  v27 = 0; /*0x4f203b*/
  if ( Int >= 0 ) /*0x4f203f*/
  {
    do /*0x4f210e*/
    {
      ((void (*)(char *const, const char *const, ...))sprintf)( /*0x4f2050*/
        (char *const)aP2_56,
        (const char *const)&stru_817F40.fallRate,
        v27);
      String::Assign((char **)&a2, &stru_87C374.__pad_579C[33876]); /*0x4f2061*/
      String::Assign((char **)&v33, (const char *)aP2_56); /*0x4f206f*/
      v28 = *(ObjectClass **)&aP2_4.__pad_0[8]; /*0x4f207c*/
      v29 = (int)INIClass::ReadString( /*0x4f2099*/
                   *(ObjectClass **)&aP2_4.__pad_0[8],
                   *(ObjectClass **)&aP2_4.__pad_0[12],
                   (ObjectClass *)&v33,
                   (ReferenceCounted *)&a2,
                   (int)&aP2_4) > 0;
      DeleteAndZero((void **)&v33); /*0x4f209c*/
      DeleteAndZero((void **)&a2); /*0x4f20a5*/
      if ( v29 ) /*0x4f20ac*/
      {
        v30 = sub_4F38B0((char **)&aP2_4, v28, (char *)(aP2_4.nextArrayIndex + 4), (char *)&aP2_4.referenceCount); /*0x4f20c6*/
        if ( v30 ) /*0x4f20ca*/
        {
          v31 = (char *)v8->Capacity; /*0x4f20cc*/
          if ( (int)v8[1].vtable0 < (int)v31 /*0x4f20f1*/
            || (v8->IsAllocated || !v31)
            && (v32 = (int)v8[1].Items, v32 > 0)
            && (*((unsigned __int8 (__thiscall **)(VectorClass *, char *, _DWORD))v8->vtable0 + 2))(v8, &v31[v32], 0) )
          {
            vtable0 = v8[1].vtable0; /*0x4f20f8*/
            v34 = v8->Items; /*0x4f20fb*/
            v8[1].vtable0 = (char *)vtable0 + 1; /*0x4f2101*/
            v34[(_DWORD)vtable0] = v30; /*0x4f2104*/
          }
        }
      }
      ++v27; /*0x4f210b*/
    }
    while ( v27 <= aP2_4.abstractFlags ); /*0x4f210e*/
  }
  DeleteAndZero((void **)&aP2_4.uniqueId); /*0x4f2118*/
  DeleteAndZero((void **)&aP2_4); /*0x4f2121*/
  return (char **)aP2_4.nextArrayIndex; /*0x4f1ccf*/
}
}
} // namespace gamemd

// 0x4F2300
namespace gamemd {
int E4Recv_4F2300::ProcessGraphicMenu()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ProcessGraphicMenu(int this)
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

  v2 = String::GetOrEmpty((char **)(this + 80)); /*0x4f230c*/
  StringList = StringList::Find(&g_BuildingTypeClass_Count, v2); /*0x4f2317*/
  ThemeClass::Play(&g_BuildingTypeClass_Count, StringList); /*0x4f2322*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 24))(MEMORY[0x887310], 0); /*0x4f2331*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x88730C] + 24))(MEMORY[0x88730C], 0); /*0x4f233e*/
  (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 4))( /*0x4f2354*/
    MEMORY[0x887308],
    MEMORY[0x88730C],
    0,
    1);
  v16 = 0; /*0x4f235d*/
  v4 = 0; /*0x4f2362*/
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x4f2364*/
  v5 = this->M84; /*0x4f2369*/
  if ( v5 ) /*0x4f236e*/
    MSEngine::ProcessEvents((_DWORD *)(this + 4), v5, 300000); /*0x4f2379*/
  v6 = (*(int (__thiscall **)(int, void ***))(*(_DWORD *)MEMORY[0x887310] + 120))(MEMORY[0x887310], &v24); /*0x4f238e*/
  Team::ReleaseAll((int *)(this + 4), v6); /*0x4f2394*/
  DSurface::Flip2(); /*0x4f239b*/
  do /*0x4f25fd*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x4f23a8*/
    DDraw::HandleSuspend((_DWORD *)(this + 4)); /*0x4f23ad*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x4f23ba*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640]); /*0x4f23ce*/
    v17[0] = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 44))(MEMORY[0x887640]); /*0x4f23db*/
    v17[1] = v7; /*0x4f23df*/
    if ( EventQueue::Process(MEMORY[0x87F770]) ) /*0x4f23e3*/
    {
      EventQueue = EventQueue::Read(MEMORY[0x87F770]); /*0x4f23f7*/
      v9 = EventQueue; /*0x4f23ff*/
      if ( EventQueue == 1 || EventQueue == 13 ) /*0x4f2411*/
      {
        v11 = 0; /*0x4f24a7*/
        v22 = this + 88; /*0x4f24a9*/
        v23 = 0; /*0x4f24b1*/
        v21 = &vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem; /*0x4f24b5*/
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
        v21 = &vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem; /*0x4f251a*/
      }
      else
      {
        v19 = this + 88; /*0x4f241e*/
        v20 = 0; /*0x4f2422*/
        v18 = &vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem; /*0x4f242a*/
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
        v18 = &vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem; /*0x4f248b*/
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
      v25 = this + 88; /*0x4f2559*/
      v26 = 0; /*0x4f255d*/
      v24 = &vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem; /*0x4f2561*/
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
      v24 = &vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem; /*0x4f25c8*/
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
} // namespace gamemd

// 0x4F2640
namespace gamemd {
int E4Recv_4F2640::sub_4F2640(int (__thiscall ***a2)(unsigned int, int) a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4F2640(_DWORD *this, int (__thiscall ***a2)(_DWORD, int))
{
  int (__thiscall ***v3)(_DWORD, int); // eax
  int result; // eax

  v3 = (int (__thiscall ***)(_DWORD, int))*(this + 21); /*0x4f2648*/
  if ( v3 ) /*0x4f264e*/
    result = UI_Load_5D1C90(this + 1, v3, a2); /*0x4f2654*/
  else
    result = PriorityQueue::Add(this + 1, (int)a2); /*0x4f2664*/
  *(this + 21) = a2; /*0x4f2659*/
  return result; /*0x4f265c*/
}
}
} // namespace gamemd

// 0x4F26E0
namespace gamemd {
int E4Recv_4F26E0::sub_4F26E0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4F26E0(char *this, int a2)
{
  int v2; // ecx
  void **v4; // [esp+4h] [ebp-Ch] BYREF
  char *v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v5 = this + 88; /*0x4f26e7*/
  v6 = 0; /*0x4f26ef*/
  v4 = &vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem; /*0x4f26f7*/
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
}
} // namespace gamemd

// 0x4F2770
namespace gamemd {
int E4Recv_4F2770::sub_4F2770(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4F2770(char *this, int a2)
{
  int v2; // ecx
  void **v4; // [esp+4h] [ebp-Ch] BYREF
  char *v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v5 = this + 88; /*0x4f2777*/
  v6 = 0; /*0x4f277f*/
  v4 = &vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem; /*0x4f2787*/
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
}
} // namespace gamemd

// 0x4F2C00
namespace gamemd {
unsigned int * E4Recv_4F2C00::sub_4F2C00(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4F2C00(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x4f2c0b*/
  *(this + 2) = a2; /*0x4f2c0e*/
  *((_BYTE *)this + 12) = 1; /*0x4f2c11*/
  *((_BYTE *)this + 13) = 0; /*0x4f2c15*/
  *this = &vt_VectorClass_GraphicMenuItem; /*0x4f2c18*/
  if ( a2 ) /*0x4f2c1e*/
  {
    if ( a3 ) /*0x4f2c26*/
    {
      *(this + 1) = a3; /*0x4f2c28*/
      return this; /*0x4f2c2e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x4f2c3d*/
    *((_BYTE *)this + 13) = 1; /*0x4f2c40*/
  }
  return this; /*0x4f2c2d*/
}
}
} // namespace gamemd

// 0x4F2C70
namespace gamemd {
int ParseINIAnimGadgetDefinition()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__userpurge ParseINIAnimGadgetDefinition@<eax>(
        ObjectClass *Source@<ecx>,
        ObjectClass *edx0@<edx>,
        _DWORD *arg0,
        CCINIClass aP3)
{
  ReferenceCounted *IntINIClass; // ebx
  int *v8; // ebp
  Selection_WorldDominationTour **CoordPair; // eax
  Selection_WorldDominationTour *v10; // ecx
  SessionClass *v11; // eax
  Selection_WorldDominationTour *v12; // ebx
  int v13; // ecx
  int v14; // edx
  int *Rect; // eax
  unsigned __int8 *v16; // eax
  GraphicMenuAnimItem *Int; // esi
  int *v18; // eax
  GraphicMenuAnimItem aP5; // [esp+Ch] [ebp-38h] BYREF
  char *a3; // [esp+24h] [ebp-20h] BYREF
  GraphicMenuAnimItem *aP1; // [esp+28h] [ebp-1Ch]
  Selection_WorldDominationTour *var18; // [esp+2Ch] [ebp-18h] BYREF
  ReferenceCounted *v24; // [esp+30h] [ebp-14h]
  int var18_8; // [esp+34h] [ebp-10h] BYREF
  int v25; // [esp+38h] [ebp-Ch]
  int v26; // [esp+3Ch] [ebp-8h]
  int v27; // [esp+40h] [ebp-4h]

  String::Assign((char **)&aP5.GraphicMenuAnimItem_field_0x08, ValueName); /*0x4f2c83*/
  IntINIClass = (ReferenceCounted *)INIClass::ReadInt( /*0x4f2c97*/
                                      edx0,
                                      Source,
                                      (ReferenceCounted *)&aP5.GraphicMenuAnimItem_field_0x08,
                                      (INIClass *)0xFFFFFFFF);
  aP1 = (GraphicMenuAnimItem *)IntINIClass; /*0x4f2c9d*/
  DeleteAndZero((int)&aP5.GraphicMenuAnimItem_field_0x08); /*0x4f2ca1*/
  if ( IntINIClass == (ReferenceCounted *)-1 ) /*0x4f2ca9*/
    return 0; /*0x4f2cad*/
  unknown_libname_73(&aP5); /*0x4f2cba*/
  String::Assign(&a3, &stru_87C374.__pad_579C[33876]); /*0x4f2cc8*/
  String::Assign((char **)&aP5.GraphicMenuAnimItem_field_0x08, g_INI_Key_Image.__pad_0); /*0x4f2cd6*/
  INIClass::ReadString( /*0x4f2ced*/
    edx0,
    Source,
    (ObjectClass *)&aP5.GraphicMenuAnimItem_field_0x08,
    (ReferenceCounted *)&a3,
    (int)&aP5);
  DeleteAndZero((int)&aP5.GraphicMenuAnimItem_field_0x08); /*0x4f2cf6*/
  DeleteAndZero((int)&a3); /*0x4f2cff*/
  if ( String::Length((const char **)&aP5) ) /*0x4f2d08*/
  {
    unknown_libname_73(&aP5.GraphicMenuAnimItem_field_0x04); /*0x4f2d29*/
    String::Assign((char **)&aP5.GraphicMenuAnimItem_field_0x08, &stru_87C374.__pad_579C[33876]); /*0x4f2d37*/
    String::Assign(&a3, (const char *)&stru_824238.sectionCount); /*0x4f2d45*/
    INIClass::ReadString( /*0x4f2d5c*/
      edx0,
      Source,
      (ObjectClass *)&a3,
      (ReferenceCounted *)&aP5.GraphicMenuAnimItem_field_0x08,
      (int)&aP5.GraphicMenuAnimItem_field_0x04);
    DeleteAndZero((int)&a3); /*0x4f2d65*/
    DeleteAndZero((int)&aP5.GraphicMenuAnimItem_field_0x08); /*0x4f2d6e*/
    if ( String::Length((const char **)&aP5.GraphicMenuAnimItem_field_0x04) ) /*0x4f2d77*/
    {
      v8 = 0; /*0x4f2d9e*/
      var18 = 0; /*0x4f2da9*/
      v24 = 0; /*0x4f2dad*/
      String::Assign(&a3, (const char *)&stru_824238.sectionHead[1]); /*0x4f2db1*/
      CoordPair = (Selection_WorldDominationTour **)INIClass::GetCoordPair( /*0x4f2dc8*/
                                                      edx0,
                                                      (CCINIClass *)&aP5.GraphicMenuAnimItem_field_0x08,
                                                      Source,
                                                      &a3,
                                                      (CCINIClass *)&var18);
      v10 = *CoordPair; /*0x4f2dcd*/
      v11 = (SessionClass *)CoordPair[1]; /*0x4f2dcf*/
      var18 = v10; /*0x4f2dd2*/
      v24 = (ReferenceCounted *)v11; /*0x4f2dda*/
      DeleteAndZero((int)&a3); /*0x4f2dde*/
      v12 = *(Selection_WorldDominationTour **)aP3.__pad_0; /*0x4f2de3*/
      v13 = **(_DWORD **)aP3.__pad_0; /*0x4f2df4*/
      var18_8 = 0; /*0x4f2df6*/
      var18 = (Selection_WorldDominationTour *)((char *)var18 + v13); /*0x4f2e00*/
      v14 = *(_DWORD *)(*(_DWORD *)aP3.__pad_0 + 4); /*0x4f2e04*/
      v25 = 0; /*0x4f2e09*/
      v24 = (ReferenceCounted *)((char *)v24 + v14); /*0x4f2e0d*/
      v26 = 0; /*0x4f2e11*/
      v27 = 0; /*0x4f2e15*/
      String::Assign((char **)&aP3, (const char *)&stru_824238.headNode[1]); /*0x4f2e19*/
      Rect = INIClass::GetRect( /*0x4f2e30*/
               (int)edx0,
               (MSAnim *)&aP5.GraphicMenuAnimItem_field_0x08,
               Source,
               &aP3,
               (ObjectClass *)&var18_8);
      var18_8 = *Rect; /*0x4f2e37*/
      v25 = Rect[1]; /*0x4f2e3e*/
      v26 = Rect[2]; /*0x4f2e45*/
      v27 = Rect[3]; /*0x4f2e50*/
      DeleteAndZero((int)&aP3); /*0x4f2e54*/
      var18_8 += v12->field_0; /*0x4f2e65*/
      v25 += *(_DWORD *)v12->__pad_4; /*0x4f2e77*/
      v16 = (unsigned __int8 *)String::GetOrEmpty_Alt((char **)Source); /*0x4f2e7b*/
      LOBYTE(a3) = INIClass::ReadBool_Overwrite((int)edx0, v16, &stru_824238, 1); /*0x4f2e91*/
      String::Assign((char **)&aP3, (const char *)&stru_81859C.headNode[1]); /*0x4f2e95*/
      Int = (GraphicMenuAnimItem *)INIClass::ReadInt(edx0, Source, (ReferenceCounted *)&aP3, (INIClass *)5); /*0x4f2ead*/
      DeleteAndZero((int)&aP3); /*0x4f2eaf*/
      v18 = (int *)__2_YAPAXI_Z(0x28u); /*0x4f2eb6*/
      if ( v18 ) /*0x4f2ec0*/
        v8 = sub_4F2F10( /*0x4f2eed*/
               v18,
               aP1,
               arg0,
               (GraphicMenuAnimItem *)&var18,
               &var18_8,
               &aP5,
               (char **)&aP5.GraphicMenuAnimItem_field_0x04,
               Int,
               (GraphicMenuAnimItem *)a3);
      DeleteAndZero((int)&aP5.GraphicMenuAnimItem_field_0x04); /*0x4f2ef3*/
      DeleteAndZero((int)&aP5); /*0x4f2efc*/
      return v8; /*0x4f2f01*/
    }
    else
    {
      DeleteAndZero((int)&aP5.GraphicMenuAnimItem_field_0x04); /*0x4f2d84*/
      DeleteAndZero((int)&aP5); /*0x4f2d8d*/
      return 0; /*0x4f2d92*/
    }
  }
  else
  {
    DeleteAndZero((int)&aP5); /*0x4f2d15*/
    return 0; /*0x4f2d1a*/
  }
}
}
} // namespace gamemd

// 0x4F2F10
namespace gamemd {
int * E4Recv_4F2F10::sub_4F2F10(GraphicMenuAnimItem * aP1, unsigned int * a2, GraphicMenuAnimItem * aP3, int * a4, GraphicMenuAnimItem * aP5, char ** a6, GraphicMenuAnimItem * aP7, GraphicMenuAnimItem * aP8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall sub_4F2F10(
        int *this,
        GraphicMenuAnimItem *aP1,
        _DWORD *a2,
        GraphicMenuAnimItem *aP3,
        int *a4,
        GraphicMenuAnimItem *aP5,
        char **a6,
        GraphicMenuAnimItem *aP7,
        GraphicMenuAnimItem *aP8)
{
  int v10; // edx
  char *v11; // eax
  void *v12; // eax
  MSShapeAnim *v13; // eax
  int v15; // [esp+10h] [ebp-DCh] BYREF
  _DWORD v16[22]; // [esp+14h] [ebp-D8h] BYREF
  char v17[12]; // [esp+6Ch] [ebp-80h] BYREF
  int v18; // [esp+78h] [ebp-74h]
  _DWORD v19[22]; // [esp+80h] [ebp-6Ch] BYREF
  char v20[12]; // [esp+D8h] [ebp-14h] BYREF
  int v21; // [esp+E4h] [ebp-8h]

  GraphicMenuItem::Constructor(this, aP1); /*0x4f2f21*/
  *(this + 4) = *a4; /*0x4f2f3c*/
  *(this + 5) = a4[1]; /*0x4f2f41*/
  *(this + 6) = a4[2]; /*0x4f2f47*/
  v10 = a4[3]; /*0x4f2f4a*/
  *(this + 8) = 0; /*0x4f2f4d*/
  *(this + 7) = v10; /*0x4f2f50*/
  *(this + 9) = 0; /*0x4f2f5a*/
  *this = (int)&vt_GraphicMenuAnimItem; /*0x4f2f5d*/
  CCFileClass::Construct2(v19, (char **)aP5); /*0x4f2f63*/
  CCFileClass::Construct2(v16, a6); /*0x4f2f74*/
  if ( CCFileClass::Open(v19, 0) ) /*0x4f2f81*/
  {
    if ( CCFileClass::Open(v16, 0) ) /*0x4f2f8f*/
    {
      v11 = String::GetOrEmpty_Alt(a6); /*0x4f2f9a*/
      String::Assign((char **)&v15, v11); /*0x4f2fa4*/
      *(this + 9) = (int)PaletteClass::Load((const char **)&v15); /*0x4f2fb6*/
      DeleteAndZero((int)&v15); /*0x4f2fb9*/
      v12 = (void *)__2_YAPAXI_Z(0x40u); /*0x4f2fc0*/
      if ( v12 ) /*0x4f2fca*/
      {
        v13 = (MSShapeAnim *)MSShapeAnim::Constructor( /*0x4f2ff2*/
                               v12,
                               (MSShapeAnim *)aP5,
                               *(MSShapeAnim **)aP3->__pad_0,
                               aP3->GraphicMenuAnimItem_field_0x04,
                               (MSShapeAnim *)*(this + 9),
                               (int)aP7,
                               (MSShapeAnim *)aP8,
                               0);
        if ( v13 ) /*0x4f2ff9*/
          PriorityQueue::Add((Selection_WorldDominationTour *)a2, (MSAnim *)v13); /*0x4f3003*/
      }
    }
  }
  v16[0] = &vt_CCFileClass; /*0x4f3011*/
  v18 = 0; /*0x4f3015*/
  Vector::Clear((int)v17); /*0x4f3019*/
  v16[0] = &off_7E1668; /*0x4f3027*/
  BufferIOFileClass::Dtor(v16); /*0x4f302b*/
  v19[0] = &vt_CCFileClass; /*0x4f3037*/
  v21 = 0; /*0x4f303e*/
  Vector::Clear((int)v20); /*0x4f3045*/
  v19[0] = &off_7E1668; /*0x4f3051*/
  BufferIOFileClass::Dtor(v19); /*0x4f3058*/
  return this; /*0x4f305f*/
}
}
} // namespace gamemd

// 0x4F3140
namespace gamemd {
int ParseINIGadgetDefinition(ObjectClass * aP0, ObjectClass * edx0, unsigned int * a2, ObjectClass a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int ParseINIGadgetDefinition(ObjectClass *aP0, ObjectClass *edx0, _DWORD *a2, ObjectClass a4)
{
  ObjectClass *v4; // edx
  ObjectClass *v5; // ecx
  ObjectClass *v6; // edi
  ObjectClass *v7; // esi
  ReferenceCounted *IntINIClass; // ebx
  int v10; // ebp
  ObjectClass **CoordPair; // eax
  ObjectClass *ecx3; // ecx
  SessionClass *v11; // eax
  Selection_WorldDominationTour *v12; // ebx
  int v15; // ecx
  int edx3; // edx
  ReferenceCounted *Rect; // eax
  int v18; // eax
  ObjectClass *v16; // [esp+Ch] [ebp-44h] BYREF
  ReferenceCounted aP8; // [esp+10h] [ebp-40h] BYREF
  char *a7; // [esp+14h] [ebp-3Ch] BYREF
  ReferenceCounted aP6; // [esp+18h] [ebp-38h] BYREF
  char *a5; // [esp+1Ch] [ebp-34h] BYREF
  ObjectClass *v21; // [esp+20h] [ebp-30h] BYREF
  ObjectClass *v22; // [esp+24h] [ebp-2Ch]
  ObjectClass *v23; // [esp+28h] [ebp-28h] BYREF
  ObjectClass *v27; // [esp+2Ch] [ebp-24h]
  MSAnim aP1; // [esp+30h] [ebp-20h] BYREF
  ReferenceCounted aP4; // [esp+40h] [ebp-10h] BYREF
  ReferenceCounted v30; // [esp+44h] [ebp-Ch]
  ReferenceCounted v31; // [esp+48h] [ebp-8h]
  ReferenceCounted v32; // [esp+4Ch] [ebp-4h]

  v6 = v5; /*0x4f3146*/
  v7 = v4; /*0x4f3148*/
  String::Assign((char **)&v21, ValueName); /*0x4f3153*/
  IntINIClass = (ReferenceCounted *)INIClass::ReadInt(v7, v6, (ReferenceCounted *)&v21, (INIClass *)0xFFFFFFFF); /*0x4f3167*/
  v22 = (ObjectClass *)IntINIClass; /*0x4f316d*/
  DeleteAndZero((int)&v21); /*0x4f3171*/
  if ( IntINIClass == (ReferenceCounted *)-1 ) /*0x4f3179*/
    return 0; /*0x4f317d*/
  v10 = 0; /*0x4f3187*/
  v23 = 0; /*0x4f3192*/
  v27 = 0; /*0x4f3196*/
  String::Assign((char **)&v21, (const char *)&stru_824238.sectionHead[1]); /*0x4f319a*/
  CoordPair = (ObjectClass **)INIClass::GetCoordPair(v7, (CCINIClass *)&aP1, v6, (char **)&v21, (CCINIClass *)&v23); /*0x4f31b1*/
  ecx3 = *CoordPair; /*0x4f31b6*/
  v11 = (SessionClass *)CoordPair[1]; /*0x4f31b8*/
  v23 = ecx3; /*0x4f31bb*/
  v27 = (ObjectClass *)v11; /*0x4f31c3*/
  DeleteAndZero((int)&v21); /*0x4f31c7*/
  v12 = (Selection_WorldDominationTour *)edx0; /*0x4f31cc*/
  v15 = *(_DWORD *)edx0->__pad_0; /*0x4f31dd*/
  aP4 = 0; /*0x4f31df*/
  v23 = (ObjectClass *)((char *)v23 + v15); /*0x4f31e9*/
  edx3 = *(_DWORD *)&edx0->__pad_0[4]; /*0x4f31ed*/
  v30 = 0; /*0x4f31f2*/
  v27 = (ObjectClass *)((char *)v27 + edx3); /*0x4f31f6*/
  v31 = 0; /*0x4f31fa*/
  v32 = 0; /*0x4f31fe*/
  String::Assign((char **)&edx0, (const char *)&stru_824238.headNode[1]); /*0x4f3202*/
  Rect = (ReferenceCounted *)INIClass::GetRect((int)v7, &aP1, v6, (CCINIClass *)&edx0, (ObjectClass *)&aP4); /*0x4f3219*/
  aP4 = *Rect; /*0x4f3220*/
  v30 = Rect[1]; /*0x4f3227*/
  v31 = Rect[2]; /*0x4f322e*/
  v32 = Rect[3]; /*0x4f3239*/
  DeleteAndZero((int)&edx0); /*0x4f323d*/
  *(_DWORD *)&aP4 += v12->field_0; /*0x4f324e*/
  *(_DWORD *)&v30 += *(_DWORD *)v12->__pad_4; /*0x4f325b*/
  unknown_libname_73(&a5); /*0x4f325f*/
  unknown_libname_73(&aP6); /*0x4f3268*/
  unknown_libname_73(&a7); /*0x4f3271*/
  String::Assign((char **)&v21, &stru_87C374.__pad_579C[33876]); /*0x4f327f*/
  String::Assign((char **)&edx0, g_INI_Key_Image.__pad_0); /*0x4f328d*/
  INIClass::ReadString(v7, v6, (ObjectClass *)&edx0, (ReferenceCounted *)&v21, (int)&a5); /*0x4f32a4*/
  DeleteAndZero((int)&edx0); /*0x4f32ad*/
  DeleteAndZero((int)&v21); /*0x4f32b6*/
  String::Assign((char **)&v21, &stru_87C374.__pad_579C[33876]); /*0x4f32c4*/
  String::Assign((char **)&edx0, aHighlighted); /*0x4f32d2*/
  INIClass::ReadString(v7, v6, (ObjectClass *)&edx0, (ReferenceCounted *)&v21, (int)&aP6); /*0x4f32e9*/
  DeleteAndZero((int)&edx0); /*0x4f32f2*/
  DeleteAndZero((int)&v21); /*0x4f32fb*/
  String::Assign((char **)&v21, &stru_87C374.__pad_579C[33876]); /*0x4f3309*/
  String::Assign((char **)&edx0, aDisabled); /*0x4f3317*/
  INIClass::ReadString(v7, v6, (ObjectClass *)&edx0, (ReferenceCounted *)&v21, (int)&a7); /*0x4f332e*/
  DeleteAndZero((int)&edx0); /*0x4f3337*/
  DeleteAndZero((int)&v21); /*0x4f3340*/
  unknown_libname_73(&aP8); /*0x4f3349*/
  String::Assign((char **)&v21, &stru_87C374.__pad_579C[33876]); /*0x4f3357*/
  String::Assign((char **)&edx0, aHighlightsound); /*0x4f3365*/
  INIClass::ReadString(v7, v6, (ObjectClass *)&edx0, (ReferenceCounted *)&v21, (int)&aP8); /*0x4f337c*/
  DeleteAndZero((int)&edx0); /*0x4f3385*/
  DeleteAndZero((int)&v21); /*0x4f338e*/
  unknown_libname_73(&v16); /*0x4f3397*/
  String::Assign((char **)&v21, &stru_87C374.__pad_579C[33876]); /*0x4f33a5*/
  String::Assign((char **)&edx0, aSelectvq); /*0x4f33b3*/
  INIClass::ReadString(v7, v6, (ObjectClass *)&edx0, (ReferenceCounted *)&v21, (int)&v16); /*0x4f33ca*/
  DeleteAndZero((int)&edx0); /*0x4f33d3*/
  DeleteAndZero((int)&v21); /*0x4f33dc*/
  v18 = __2_YAPAXI_Z(0x38u); /*0x4f33e3*/
  if ( v18 ) /*0x4f33ed*/
    v10 = sub_4F3460( /*0x4f3423*/
            v18,
            (int)v22,
            (ReferenceCounted *)aP0,
            &v23,
            &aP4,
            (const char **)&a5,
            &aP6,
            (const char **)&a7,
            &aP8,
            (const char **)&v16);
  DeleteAndZero((int)&v16); /*0x4f3429*/
  DeleteAndZero((int)&aP8); /*0x4f3432*/
  DeleteAndZero((int)&a7); /*0x4f343b*/
  DeleteAndZero((int)&aP6); /*0x4f3444*/
  DeleteAndZero((int)&a5); /*0x4f344d*/
  return v10; /*0x4f317b*/
}
}
} // namespace gamemd

// 0x4F3460
namespace gamemd {
int E4Recv_4F3460::sub_4F3460(int aP1, ReferenceCounted * aP2, unsigned int * a3, ReferenceCounted * aP4, const char ** a5, ReferenceCounted * aP6, const char ** a7, ReferenceCounted * aP8, const char ** a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4F3460(
        int this,
        int aP1,
        ReferenceCounted *aP2,
        _DWORD *a3,
        ReferenceCounted *aP4,
        const char **a5,
        ReferenceCounted *aP6,
        const char **a7,
        ReferenceCounted *aP8,
        const char **a9)
{
  char v10; // bl
  Selection_WorldDominationTour *v12; // edi
  ReferenceCounted *v13; // edx
  ReferenceCounted v14; // edx
  ObjectClass *v15; // ebp
  int v16; // eax
  ObjectClass *v17; // ebx
  unsigned int v18; // eax
  _DWORD *v19; // ebp
  _DWORD *v20; // eax
  MSAnim *v21; // eax
  ObjectClass *v22; // ebx
  _DWORD *v23; // eax
  MSAnim *v24; // eax
  ObjectClass *v25; // ebx
  _DWORD *v26; // eax
  MSAnim *v27; // eax

  v10 = 0; /*0x4f3469*/
  GraphicMenuItem::Constructor((_DWORD *)this, (GraphicMenuAnimItem *)aP1); /*0x4f3472*/
  v12 = (Selection_WorldDominationTour *)aP2; /*0x4f3477*/
  v13 = aP4; /*0x4f347b*/
  this->M16 = aP2; /*0x4f347f*/
  *(ReferenceCounted *)(this + 20) = *v13; /*0x4f3487*/
  *(ReferenceCounted *)(this + 24) = v13[1]; /*0x4f348c*/
  *(ReferenceCounted *)(this + 28) = v13[2]; /*0x4f3492*/
  v14 = v13[3]; /*0x4f3495*/
  this->M36 = 0; /*0x4f3498*/
  *(ReferenceCounted *)(this + 32) = v14; /*0x4f349b*/
  this->M40 = 0; /*0x4f34a1*/
  this->M44 = 0; /*0x4f34a4*/
  this->M48 = 0; /*0x4f34a7*/
  unknown_libname_73((_DWORD *)(this + 52)); /*0x4f34aa*/
  v15 = (ObjectClass *)aP8; /*0x4f34af*/
  *(_DWORD *)this = &vt_GraphicMenuImageItem; /*0x4f34b3*/
  if ( String::Length((const char **)v15) && (aP2 = (ReferenceCounted *)__2_YAPAXI_Z(0x10u)) != 0 ) /*0x4f34d4*/
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
    DeleteAndZero((int)&aP1); /*0x4f3508*/
  String::Reassign((char **)(this + 52), (AbstractClass *)a9); /*0x4f3515*/
  v17 = (ObjectClass *)aP6; /*0x4f351a*/
  v18 = String::Length((const char **)aP6); /*0x4f3520*/
  v19 = a3; /*0x4f3525*/
  if ( v18 )
  {
    v20 = (_DWORD *)__2_YAPAXI_Z(0x3Cu); /*0x4f352f*/
    v21 = v20 ? (MSAnim *)MSPCXAnim::Construct(v20, v17, (MSAnim *)&v12->__pad_4[20], v19, 1) : 0;
    this->M40 = v21; /*0x4f3550*/
    if ( v21 ) /*0x4f3553*/
    {
      (*(void (__thiscall **)(MSAnim *, _DWORD))(*(_DWORD *)v21->__pad_0 + 4))(v21, 0); /*0x4f355b*/
      PriorityQueue::Add(v12, *(MSAnim **)(this + 40)); /*0x4f3564*/
    }
  }
  v22 = (ObjectClass *)a5; /*0x4f3569*/
  if ( String::Length(a5) )
  {
    v23 = (_DWORD *)__2_YAPAXI_Z(0x3Cu); /*0x4f357a*/
    v24 = v23 ? (MSAnim *)MSPCXAnim::Construct(v23, v22, (MSAnim *)&v12->__pad_4[20], v19, 1) : 0;
    this->M36 = v24; /*0x4f359b*/
    if ( v24 ) /*0x4f359e*/
      PriorityQueue::Add(v12, v24); /*0x4f35a3*/
  }
  v25 = (ObjectClass *)a7; /*0x4f35a8*/
  if ( String::Length(a7) ) /*0x4f35ae*/
  {
    v26 = (_DWORD *)__2_YAPAXI_Z(0x3Cu); /*0x4f35b9*/
    if ( v26 ) /*0x4f35c3*/
      v27 = (MSAnim *)MSPCXAnim::Construct(v26, v25, (MSAnim *)&v12->__pad_4[20], v19, 1); /*0x4f35cf*/
    else
      v27 = 0; /*0x4f35d6*/
    this->M44 = v27; /*0x4f35da*/
    if ( v27 ) /*0x4f35dd*/
    {
      (*(void (__thiscall **)(MSAnim *, _DWORD))(*(_DWORD *)v27->__pad_0 + 4))(v27, 0); /*0x4f35e5*/
      PriorityQueue::Add(v12, *(MSAnim **)(this + 44)); /*0x4f35ee*/
    }
  }
  return this; /*0x4f35f5*/
}
}
} // namespace gamemd

// 0x4F38B0
namespace gamemd {
int sub_4F38B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x4F3AB0
namespace gamemd {
int E4Recv_4F3AB0::sub_4F3AB0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4F3AB0(_BYTE *this, int a2)
{
  int result; // eax
  int v3; // edx

  result = a2; /*0x4f3ab0*/
  if ( (_BYTE)a2 != *(this + 9) ) /*0x4f3ab9*/
  {
    v3 = *(_DWORD *)this; /*0x4f3abb*/
    *(this + 9) = a2; /*0x4f3abe*/
    return (*(int (__stdcall **)(int))(v3 + 20))(a2); /*0x4f3ac1*/
  }
  return result; /*0x4f3ac4*/
}
}
} // namespace gamemd

// 0x4F3B80
namespace gamemd {
unsigned int * sub_4F3B80(ObjectClass * a1, ObjectClass * edx0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall sub_4F3B80(ObjectClass *a1, ObjectClass *edx0)
{
  ReferenceCounted *v4; // eax
  ReferenceCounted *Int; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // [esp+Ch] [ebp-Ch] BYREF
  char *a2; // [esp+10h] [ebp-8h] BYREF
  char *a3; // [esp+14h] [ebp-4h] BYREF

  v4 = (ReferenceCounted *)String::Assign(&a3, ValueName); /*0x4f3b95*/
  Int = (ReferenceCounted *)INIClass::ReadInt(edx0, a1, v4, (INIClass *)0xFFFFFFFF); /*0x4f3ba7*/
  DeleteAndZero((int)&a3); /*0x4f3ba9*/
  if ( Int == (ReferenceCounted *)-1 ) /*0x4f3bb1*/
    return 0; /*0x4f3bb5*/
  unknown_libname_73(&v9); /*0x4f3bc0*/
  String::Assign(&a3, &stru_87C374.__pad_579C[33876]); /*0x4f3bce*/
  String::Assign(&a2, (const char *)&g_INI_Key_Type.INIClass_field_2C); /*0x4f3bdc*/
  INIClass::ReadString(edx0, a1, (ObjectClass *)&a2, (ReferenceCounted *)&a3, (int)&v9); /*0x4f3bf3*/
  DeleteAndZero((int)&a2); /*0x4f3bfc*/
  DeleteAndZero((int)&a3); /*0x4f3c05*/
  v7 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x4f3c0c*/
  if ( v7 ) /*0x4f3c16*/
    v8 = sub_4F3C40(v7, (int)Int, (const char **)&v9); /*0x4f3c25*/
  else
    v8 = 0; /*0x4f3c29*/
  DeleteAndZero((int)&v9); /*0x4f3c2f*/
  return v8; /*0x4f3bb3*/
}
}
} // namespace gamemd

// 0x4F3C40
namespace gamemd {
unsigned int * E4Recv_4F3C40::sub_4F3C40(int a2, const char ** a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4F3C40(_DWORD *this, int a2, const char **a3)
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
  v3[4] = &vt_DynamicVectorClass_unsigned_int; /*0x4f3c6b*/
  v3[9] = 10; /*0x4f3c71*/
  v3[8] = 0; /*0x4f3c78*/
  *v3 = &vt_GraphicMenuShortcutItem; /*0x4f3c7b*/
  unknown_libname_73(&a2); /*0x4f3c82*/
  v5 = String::Tokenize(a3, 0, MEMORY[0x817F70], (void **)&a2); /*0x4f3c9f*/
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
      v5 = String::Tokenize(a3, v5, stru_824370, (void **)&a2); /*0x4f3d05*/
      if ( v5 == -1 ) /*0x4f3d0a*/
        DeleteAndZero::Alt2((void **)&a2); /*0x4f3d10*/
    }
    while ( String::Length((const char **)&a2) ); /*0x4f3d19*/
    v3 = this; /*0x4f3d22*/
  }
  DeleteAndZero((void **)&a2); /*0x4f3d2a*/
  return v3; /*0x4f3d2f*/
}
}
} // namespace gamemd

// 0x4F3D40
namespace gamemd {
int E4Recv_4F3D40::sub_4F3D40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4F3D40(const char **this)
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
  if ( String::Equals_Alt((const char **)&v9, MEMORY[0x824384]) ) /*0x4f3d7d*/
  {
    v1 = 512; /*0x4f3d8e*/
    String::Erase((const char **)&v8, 0, 5); /*0x4f3d93*/
  }
  String::Reassign((char **)&v9, (const char **)&v8); /*0x4f3da1*/
  String::CopyTruncated(&v9, 4u); /*0x4f3dac*/
  if ( String::Equals_Alt((const char **)&v9, MEMORY[0x82437C]) ) /*0x4f3dba*/
  {
    BYTE1(v1) |= 4u; /*0x4f3dcb*/
    String::Erase((const char **)&v8, 0, 4); /*0x4f3dce*/
  }
  String::Reassign((char **)&v9, (const char **)&v8); /*0x4f3ddc*/
  String::CopyTruncated(&v9, 6u); /*0x4f3de7*/
  if ( String::Equals_Alt((const char **)&v9, MEMORY[0x824374]) ) /*0x4f3df5*/
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
      v4 = (const char **)&MEMORY[0x824328]; /*0x4f3e24*/
      while ( String::NotEquals((const char **)&v8, *v4) ) /*0x4f3e37*/
      {
        v4 -= 2; /*0x4f3e39*/
        --v3; /*0x4f3e3c*/
        if ( (int)v4 < (int)&MEMORY[0x824320] ) /*0x4f3e43*/
          goto LABEL_12; /*0x4f3e43*/
      }
      if ( v3 < 0 ) /*0x4f3e64*/
        goto LABEL_12; /*0x4f3e64*/
      v7 = MEMORY[0x824324][2 * v3]; /*0x4f3e66*/
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
} // namespace gamemd

// 0x4F4E53
namespace gamemd {
int sub_4F4E53()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// positive sp value has been detected, the output may be wrong!
_BYTE *__userpurge sub_4F4E53@<eax>(
        _BYTE *result@<eax>,
        int a2@<edx>,
        int a3@<ebx>,
        int a4@<esi>,
        int a5,
        int a6,
        int a7)
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
} // namespace gamemd

// 0x4F5130
namespace gamemd {
void sub_4F5130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4F5130()
{
  if ( (MEMORY[0xA8EF60] & 1) == 0 ) /*0x4f513a*/
  {
    MEMORY[0xA8EFC8] = (int)&vt_VectorClass_HouseClass_BuildChoiceClass; /*0x4f513e*/
    MEMORY[0xA8EF60] |= 1u; /*0x4f5151*/
    if ( MEMORY[0xA8EFCC] ) /*0x4f5157*/
    {
      if ( MEMORY[0xA8EFD5] ) /*0x4f5161*/
      {
        __3_YAXPAX_Z(MEMORY[0xA8EFCC]); /*0x4f5164*/
        MEMORY[0xA8EFCC] = 0; /*0x4f516c*/
      }
    }
    MEMORY[0xA8EFD5] = 0; /*0x4f5176*/
    MEMORY[0xA8EFD0] = 0; /*0x4f517d*/
  }
}
}
} // namespace gamemd

// 0x4F7850
namespace gamemd {
unsigned int * E4Recv_4F7850::sub_4F7850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4F7850(_DWORD *this)
{
  *this = 0; /*0x4f7854*/
  *(this + 1) = 1; /*0x4f7856*/
  *(this + 2) = 0; /*0x4f785d*/
  *(this + 3) = 0; /*0x4f7860*/
  *(this + 4) = -1; /*0x4f7863*/
  return this; /*0x4f786a*/
}
}
} // namespace gamemd

// 0x4F9670
namespace gamemd {
int E4Recv_4F9670::sub_4F9670()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4F9670(int *this)
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
  v9 = *(this + 30); /*0x4f9685*/
  if ( v9 <= 0 ) /*0x4f9689*/
    return 0; /*0x4f96f5*/
  do /*0x4f96e8*/
  {
    v4 = *(_DWORD *)(*(this + 27) + 4 * v3); /*0x4f968f*/
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
}
} // namespace gamemd

// 0x4FA210
namespace gamemd {
int E4Recv_4FA210::sub_4FA210(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4FA210(void *this, int a2, int a3)
{
  int v3; // eax
  bool v4; // zf
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  CCINIClass *v9; // eax
  CCINIClass *v11; // [esp+8h] [ebp-1Ch] BYREF
  void *Block; // [esp+Ch] [ebp-18h]
  int v13; // [esp+10h] [ebp-14h]
  char v14; // [esp+15h] [ebp-Fh]
  int v15; // [esp+18h] [ebp-Ch]
  int v16; // [esp+1Ch] [ebp-8h]

  AISelectTeamHouseClass((IUnknown *)&v11, (int)this, a3); /*0x4fa220*/
  *(_DWORD *)(a2 + 4) = 0; /*0x4fa231*/
  *(_DWORD *)(a2 + 8) = 0; /*0x4fa234*/
  *(_BYTE *)(a2 + 12) = 1; /*0x4fa237*/
  *(_BYTE *)(a2 + 13) = 0; /*0x4fa23b*/
  *(_DWORD *)a2 = &vt_VectorClass_TeamTypeClass_const; /*0x4fa23e*/
  if ( (CCINIClass **)a2 != &v11 ) /*0x4fa244*/
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
  v9 = (CCINIClass *)Block; /*0x4fa2a5*/
  v4 = Block == 0; /*0x4fa2a9*/
  *(_DWORD *)(a2 + 20) = v8; /*0x4fa2ab*/
  *(_DWORD *)a2 = &vt_TypeList_TeamTypeClass_const; /*0x4fa2ae*/
  v11 = (CCINIClass *)&vt_VectorClass_TeamTypeClass_const; /*0x4fa2b4*/
  if ( !v4 && v14 ) /*0x4fa2c2*/
    __3_YAXPAX_Z(v9); /*0x4fa2c5*/
  return a2; /*0x4fa2cf*/
}
}
} // namespace gamemd

// 0x4FBD00
namespace gamemd {
char E4Recv_4FBD00::sub_4FBD00(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_4FBD00(_DWORD *this, int a2)
{
  int v2; // edi
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = 0; /*0x4fbd08*/
  if ( HouseClass_Count <= 0 ) /*0x4fbd0e*/
    return 0; /*0x4fbd61*/
  while ( 1 ) /*0x4fbd19*/
  {
    v4 = *(_DWORD **)&HouseClass_Array->__pad_0[4 * v2]; /*0x4fbd19*/
    if ( v4 ) /*0x4fbd1e*/
    {
      if ( v4 != this ) /*0x4fbd22*/
      {
        v5 = v4[12]; /*0x4fbd24*/
        if ( v5 != *(this + 12) /*0x4fbd55*/
          && (v5 == -1 || ((1 << v5) & *(this + 5602)) == 0)
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
}
} // namespace gamemd

// 0x4FBD80
namespace gamemd {
int E4Recv_4FBD80::sub_4FBD80(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4FBD80(_DWORD *this, int a2, int a3)
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
      v5 = *(this + 5524); /*0x4fbdaf*/
      if ( v5 == -1 ) /*0x4fbdb8*/
        goto LABEL_10; /*0x4fbdb8*/
      result = *((_DWORD *)g_UnitTypeCount2 + v5); /*0x4fbdc0*/
      break; /*0x4fbdc3*/
    case 2: /*0x4fbd92*/
    case 3: /*0x4fbd92*/
      v3 = *(this + 5526); /*0x4fbd99*/
      if ( v3 == -1 ) /*0x4fbda2*/
        goto LABEL_10; /*0x4fbda2*/
      result = *((_DWORD *)MEMORY[0xA8B21C] + v3); /*0x4fbda9*/
      break; /*0x4fbdac*/
    case 6: /*0x4fbd92*/
    case 7: /*0x4fbd92*/
      v7 = *(this + 5523); /*0x4fbddc*/
      if ( v7 == -1 ) /*0x4fbde5*/
        goto LABEL_10; /*0x4fbde5*/
      result = *((_DWORD *)g_TriggerTypeCount + v7); /*0x4fbded*/
      break; /*0x4fbdf0*/
    case 15: /*0x4fbd92*/
    case 16: /*0x4fbd92*/
      v6 = *(this + 5525); /*0x4fbdc6*/
      if ( v6 == -1 ) /*0x4fbdcf*/
        goto LABEL_10; /*0x4fbdcf*/
      result = *((_DWORD *)MEMORY[0xA8E34C] + v6); /*0x4fbdd6*/
      break; /*0x4fbdd9*/
    default:
LABEL_10:
      result = 0; /*0x4fbdf3*/
      break; /*0x4fbdf3*/
  }
  return result; /*0x4fbdac*/
}
}
} // namespace gamemd

// 0x4F0ED0
namespace gamemd {
int sub_4F0ED0()
{
{
    DataGlobal_A8EDE8 = 0;
    DataGlobal_A8EDEC = 0;
    DataGlobal_A8EDF0 = 0;
    DataGlobal_A8EDF4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4F0EF0
namespace gamemd {
void sub_4F0EF0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_A8EE00 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4F0F20
namespace gamemd {
void sub_4F0F20()
{
{
    DataGlobal_A8EE70 = DataGlobal_A8EE00 / 60.0;
}
}
} // namespace gamemd

// 0x4F0F40
namespace gamemd {
void sub_4F0F40()
{
{
    DataGlobal_A8EE58 = 1.0 / DataGlobal_A8EE70;
}
}
} // namespace gamemd

// 0x4F0F60
namespace gamemd {
void sub_4F0F60()
{
{
    DataGlobal_A8EE50 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4F0F80
namespace gamemd {
void sub_4F0F80()
{
{
    DataGlobal_A8EE08 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4F0FA0
namespace gamemd {
void sub_4F0FA0()
{
{
    DataGlobal_A8EDE0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4F0FC0
namespace gamemd {
long long sub_4F0FC0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_A8EDE0 - DataGlobal_A8EE08);
    result = Math::RoundToInt(v0 * DataGlobal_A8EE00 * 0.5);
    DataGlobal_A8EE78 = result;
    return result;
}
}
} // namespace gamemd

// 0x4F1000
namespace gamemd {
void sub_4F1000()
{
{
    DataGlobal_A8EE10 = Math::ArcTan((double)DataGlobal_A8EE78 * 0.00390625);
}
}
} // namespace gamemd

// 0x4F1030
namespace gamemd {
void sub_4F1030()
{
{
    DataGlobal_A8EE28 = Math::ArcTan((double)(2 * DataGlobal_A8EE78) / DataGlobal_A8EE00);
}
}
} // namespace gamemd

// 0x4F1060
namespace gamemd {
long long sub_4F1060()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_A8EE78) + 0.5);
    DataGlobal_A8EE6C = result;
    return result;
}
}
} // namespace gamemd

// 0x4F1090
namespace gamemd {
int sub_4F1090()
{
{
    DataGlobal_A8EDFC = 0;
    DataGlobal_A8EDFE = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4F10A0
namespace gamemd {
int sub_4F10A0()
{
{
    DataGlobal_A8EE18 = 0;
    DataGlobal_A8EE1C = 0;
    DataGlobal_A8EE20 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4F10C0
namespace gamemd {
int sub_4F10C0()
{
{
    DataGlobal_A8EE68 = 0;
    DataGlobal_A8EE60 = 128;
    DataGlobal_A8EE64 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4F1700
namespace gamemd {
void nullsub_13()
{
  ;
}
} // namespace gamemd

// 0x4F1710
namespace gamemd {
void nullsub_14()
{
  ;
}
} // namespace gamemd

// 0x4F1B60
namespace gamemd {
int sub_4F1B60()
{
{
    DataGlobal_A8EE88 = 0;
    DataGlobal_A8EE8C = 0;
    DataGlobal_A8EE90 = 0;
    DataGlobal_A8EE94 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4F1B80
namespace gamemd {
int sub_4F1B80()
{
{
    char **v5;
    void *v6[4];
    int v7[3];
    int v8[6];
    char v9;
    int v10;
    int v11;
    int v12[22];
    char v13[12];
    int v14;
    CCFileClass::Construct2(v12, a2);
    if ( CCFileClass::Open(v12, 0) )
  {
    v6[1] = 0;
    v6[2] = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[0] = (unsigned int)vt_GenericNode;
    GenericNode::Constructor(v8);
    LinkedList::Prepend(v7, (int)v8);
    v6[3] = (unsigned int)vt_List_INIClass_INISection;
    memset(&v8[3], 0, 12);
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v6[0] = (unsigned int)vt_INIClass;
    if ( FileStraw::Open(v6, (int)v12, 0) <= 0 )
    v5 = 0;
    else
    v5 = LoadFromINIGraphicMenu(a1, v6, a3);
    HashTable::DestroyHashTableINIClass(v6);
    v12[0] = (unsigned int)vt_CCFileClass;
    v14 = 0;
    Vector::Clear((int)v13);
    v12[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v12);
    return v5;
  }
    else
  {
    v12[0] = (unsigned int)vt_CCFileClass;
    v14 = 0;
    Vector::Clear((int)v13);
    v12[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v12);
    return 0;
  }
}
}
} // namespace gamemd

// 0x4F2280
namespace gamemd {
int E4Recv_4F2280::sub_4F2280(int a2, int a3)
{
{
    int result;
    void **v4;
    char *v5;
    int v6;
    v6 = 0;
    v5 = this + 88;
    v4 = (unsigned int)vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem;
    for ( result = Map::CanScroll(&v4); (char)result; result = ((int (__thiscall *)(void ***))v4[1])(&v4) )
  {
    if ( *(int *)(*(int *)(*((int *)(v5) + 1) + 4 * v6) + 4) == a2 )
    sub_4F3AB0(*(char **)(*((int *)(v5) + 1) + 4 * v6), a3);
    ((void (__thiscall *)(void ***))v4[2])(&v4);
  }
    return result;
}
}
} // namespace gamemd

// 0x4F2C50
namespace gamemd {
int sub_4F2C50()
{
{
    DataGlobal_A8EE98 = 0;
    DataGlobal_A8EE9C = 0;
    DataGlobal_A8EEA0 = 0;
    DataGlobal_A8EEA4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4F3120
namespace gamemd {
int sub_4F3120()
{
{
    DataGlobal_A8EEA8 = 0;
    DataGlobal_A8EEAC = 0;
    DataGlobal_A8EEB0 = 0;
    DataGlobal_A8EEB4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4F3890
namespace gamemd {
int sub_4F3890()
{
{
    DataGlobal_A8EEB8 = 0;
    DataGlobal_A8EEBC = 0;
    DataGlobal_A8EEC0 = 0;
    DataGlobal_A8EEC4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4F3B60
namespace gamemd {
int sub_4F3B60()
{
{
    DataGlobal_A8EEC8 = 0;
    DataGlobal_A8EECC = 0;
    DataGlobal_A8EED0 = 0;
    DataGlobal_A8EED4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4F4010
namespace gamemd {
int sub_4F4010()
{
{
    DataGlobal_A8EEE0 = 0;
    DataGlobal_A8EEE4 = 0;
    DataGlobal_A8EEE8 = 0;
    DataGlobal_A8EEEC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4F4030
namespace gamemd {
void sub_4F4030()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_A8EEF8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4F4060
namespace gamemd {
void sub_4F4060()
{
{
    DataGlobal_A8EF48 = DataGlobal_A8EEF8 / 60.0;
}
}
} // namespace gamemd

// 0x4F4080
namespace gamemd {
void sub_4F4080()
{
{
    DataGlobal_A8EF30 = 1.0 / DataGlobal_A8EF48;
}
}
} // namespace gamemd

// 0x4F40A0
namespace gamemd {
void sub_4F40A0()
{
{
    DataGlobal_A8EF28 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4F40C0
namespace gamemd {
void sub_4F40C0()
{
{
    DataGlobal_A8EF00 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4F40E0
namespace gamemd {
void sub_4F40E0()
{
{
    DataGlobal_A8EED8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4F4100
namespace gamemd {
long long sub_4F4100()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_A8EED8 - DataGlobal_A8EF00);
    result = Math::RoundToInt(v0 * DataGlobal_A8EEF8 * 0.5);
    DataGlobal_A8EF50 = result;
    return result;
}
}
} // namespace gamemd

// 0x4F4140
namespace gamemd {
void sub_4F4140()
{
{
    DataGlobal_A8EF08 = Math::ArcTan((double)DataGlobal_A8EF50 * 0.00390625);
}
}
} // namespace gamemd

// 0x4F4170
namespace gamemd {
void sub_4F4170()
{
{
    DataGlobal_A8EF20 = Math::ArcTan((double)(2 * DataGlobal_A8EF50) / DataGlobal_A8EEF8);
}
}
} // namespace gamemd

// 0x4F41A0
namespace gamemd {
long long sub_4F41A0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_A8EF50) + 0.5);
    DataGlobal_A8EF44 = result;
    return result;
}
}
} // namespace gamemd

// 0x4F41D0
namespace gamemd {
int sub_4F41D0()
{
{
    DataGlobal_A8EEF0 = 0;
    DataGlobal_A8EEF2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4F41E0
namespace gamemd {
int sub_4F41E0()
{
{
    DataGlobal_A8EF10 = 0;
    DataGlobal_A8EF14 = 0;
    DataGlobal_A8EF18 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4F4200
namespace gamemd {
int sub_4F4200()
{
{
    DataGlobal_A8EF40 = 0;
    DataGlobal_A8EF38 = 128;
    DataGlobal_A8EF3C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4F4D30
namespace gamemd {
bool E4Recv_4F4D30::sub_4F4D30(const char * a2)
{
{
    return strcmp(this, a2) != 0;
}
}
} // namespace gamemd

// 0x4F4D90
namespace gamemd {
int j_Stub_InfiniteLoop()
{
    void __fastcall __noreturn j_Stub_InfiniteLoop(int a1, int a2)
{
    Stub::InfiniteLoop(a1, a2);
}
}
} // namespace gamemd

// 0x4F4EE0
namespace gamemd {
int sub_4F4EE0()
{
{
    DataGlobal_A8EF68 = 0;
    DataGlobal_A8EF6C = 0;
    DataGlobal_A8EF70 = 0;
    DataGlobal_A8EF74 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4F4F00
namespace gamemd {
void sub_4F4F00()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_A8EFA0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4F4F30
namespace gamemd {
void sub_4F4F30()
{
{
    DataGlobal_A8F030 = DataGlobal_A8EFA0 / 60.0;
}
}
} // namespace gamemd

// 0x4F4F50
namespace gamemd {
void sub_4F4F50()
{
{
    DataGlobal_A8F018 = 1.0 / DataGlobal_A8F030;
}
}
} // namespace gamemd

// 0x4F4F70
namespace gamemd {
void sub_4F4F70()
{
{
    DataGlobal_A8F010 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4F4F90
namespace gamemd {
void sub_4F4F90()
{
{
    DataGlobal_A8EFE0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4F4FB0
namespace gamemd {
void sub_4F4FB0()
{
{
    DataGlobal_A8EF58 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4F4FD0
namespace gamemd {
long long sub_4F4FD0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_A8EF58 - DataGlobal_A8EFE0);
    result = Math::RoundToInt(v0 * DataGlobal_A8EFA0 * 0.5);
    DataGlobal_A8F038 = result;
    return result;
}
}
} // namespace gamemd

// 0x4F5010
namespace gamemd {
void sub_4F5010()
{
{
    DataGlobal_A8EFF0 = Math::ArcTan((double)DataGlobal_A8F038 * 0.00390625);
}
}
} // namespace gamemd

// 0x4F5040
namespace gamemd {
void sub_4F5040()
{
{
    DataGlobal_A8F008 = Math::ArcTan((double)(2 * DataGlobal_A8F038) / DataGlobal_A8EFA0);
}
}
} // namespace gamemd

// 0x4F5070
namespace gamemd {
long long sub_4F5070()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_A8F038) + 0.5);
    DataGlobal_A8F02C = result;
    return result;
}
}
} // namespace gamemd

// 0x4F50A0
namespace gamemd {
int sub_4F50A0()
{
{
    g_ControlGroupState = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4F50B0
namespace gamemd {
int sub_4F50B0()
{
{
    g_ControlGroupPool = 0;
    g_ControlGroupConfig = 0;
    g_ControlGroupLimit = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4F50D0
namespace gamemd {
int sub_4F50D0()
{
{
    DataGlobal_A8F028 = 0;
    DataGlobal_A8F020 = 128;
    DataGlobal_A8F024 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4F50F0
namespace gamemd {
int sub_4F50F0()
{
{
    DataGlobal_A8EFCC = 0;
    DataGlobal_A8EFD0 = 0;
    DataGlobal_A8EFD4 = 1;
    DataGlobal_A8EFD5 = 0;
    DataGlobal_A8EFC8 = (int)&DataGlobal_7EA7B4;
    DataGlobal_A8EFDC = 10;
    DataGlobal_A8EFD8 = 0;
    return atexit(sub_4F5130);
}
}
} // namespace gamemd

// 0x4F6EB0
namespace gamemd {
void nullsub_15()
{
  ;
}
} // namespace gamemd

// 0x4FCE00
namespace gamemd {
int E4Recv_4FCE00::sub_4FCE00(ObjectClass * aP1, int a3, ObjectClass * aP3)
{
{
    int v4;
    v4 = this->M52;
    this->M476 = aP3;
    this->M780 = aP3;
    *(int *)(v4 + 192) = aP1;
    this->M90196 = aP1;
    return (int)aP1->__pad_0;
}
}
} // namespace gamemd

// 0x4FD120
namespace gamemd {
unsigned int * sub_4FD120(unsigned int * a1, int a2)
{
{
    *a1 = g_ControlGroupPool;
    *((int*)(a1) + 1) = g_ControlGroupConfig;
    *((int*)(a1) + 2) = g_ControlGroupLimit;
    return a1;
}
}
} // namespace gamemd

// 0x4FF540
namespace gamemd {
void nullsub_100(int a1)
{
  ;
}
} // namespace gamemd

// 0x4FFD50
namespace gamemd {
int E4Recv_4FFD50::sub_4FFD50(int a2)
{
{
    ObjectClass *v4;
    char v5[12];
    if ( !a2 )
    return -1;
    v4 = (ObjectClass *)(*(int (__thiscall **)(int, char *))(*(int *)(a2) + 72))(a2, v5);
    return PathfindingClass::FindPath(this, v4);
}
}
} // namespace gamemd

// 0x4FFD90
namespace gamemd {
int E4Recv_4FFD90::sub_4FFD90(short * a2)
{
{
    int v2;
    unsigned int v4[3];
    v4[2] = 0;
    v2 = *((int*)(a2) + 1);
    v4[0] = (*a2 << 8) + 128;
    v4[1] = (v2 << 8) + 128;
    return PathfindingClass::FindPath(this, v4);
}
}
} // namespace gamemd
