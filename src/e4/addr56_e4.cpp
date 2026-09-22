// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5654E0_e4.hpp"
#include "e4/classes/E4Recv_565610_e4.hpp"
#include "e4/classes/E4Recv_56AE40_e4.hpp"
#include "e4/classes/E4Recv_56AF40_e4.hpp"
#include "e4/classes/E4Recv_56B0F0_e4.hpp"
#include "e4/classes/E4Recv_56B250_e4.hpp"
#include "e4/classes/E4Recv_56DB70_e4.hpp"
#include "e4/classes/E4Recv_56E890_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"

// 0x560BF0
namespace gamemd {
char ChangeVideoMode(ObjectClass * xRight, int yBottom)
{
{
  IUnknown *v5; // edx
  LONG eax41; // eax
  ObjectClass *Viewport; // ecx
  AbstractClass *v8; // edx
  AbstractClass *v9; // eax
  IUnknown *v15; // edx
  int eax46; // eax
  MouseClass *i; // esi
  ObjectClass *v16; // [esp+4h] [ebp-78h]
  ObjectClass *WindowLongA; // [esp+8h] [ebp-74h]
  __int16 v20; // [esp+Ch] [ebp-70h]
  __int16 v22; // [esp+14h] [ebp-68h]
  ObjectClass *aP3; // [esp+1Ch] [ebp-60h]
  int BitMask_Red; // [esp+20h] [ebp-5Ch]
  char BitMask_Green; // [esp+24h] [ebp-58h]
  ObjectClass *aP0; // [esp+28h] [ebp-54h]
  int BitShift_Red; // [esp+2Ch] [ebp-50h] BYREF
  int v28; // [esp+30h] [ebp-4Ch]
  __int64 lParam; // [esp+34h] [ebp-48h]
  struct tagRECT rc; // [esp+3Ch] [ebp-40h] BYREF

  Debug::Log(); /*0x560c00*/
  lParam = *(_QWORD *)&stru_89E138[8044]; /*0x560c13*/
  GetBitShift_Green(); /*0x560c1b*/
  BitShift_Red = GetBitShift_Red(); /*0x560c27*/
  aP0 = (ObjectClass *)GetBitMask_Blue(); /*0x560c30*/
  BitMask_Green = GetBitMask_Green(); /*0x560c39*/
  BitMask_Red = GetBitMask_Red(); /*0x560c42*/
  aP3 = (ObjectClass *)GetBitShift_Blue(); /*0x560c51*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 12))(*(_DWORD *)&stru_87C374[45772]); /*0x560c57*/
  DDraw::WaitForIdle(); /*0x560c5a*/
  if ( stru_89E138[6208] == 1 ) /*0x560c66*/
  {
    *(_DWORD *)&stru_87C374[44092] = 0; /*0x560c73*/
    *(_DWORD *)&stru_87C374[44096] = 0; /*0x560c78*/
    *(_DWORD *)&stru_87C374[44100] = xRight; /*0x560c7e*/
    *(_DWORD *)&stru_87C374[44104] = yBottom; /*0x560c84*/
    *(_DWORD *)&stru_89E138[8044] = xRight; /*0x560c8a*/
    *(_DWORD *)&stru_89E138[8048] = yBottom; /*0x560c90*/
    Debug::Log(); /*0x560c96*/
LABEL_19:
    if ( *(_DWORD *)&stru_87C374[44956] ) /*0x560e07*/
    {
      Debug::Log(); /*0x560e0e*/
      if ( *(_DWORD *)&stru_87C374[44956] ) /*0x560e1e*/
        (***(void (__thiscall ****)(_DWORD, int))&stru_87C374[44956])( /*0x560e24*/
          *(_DWORD *)&stru_87C374[44956],
          1);
      *(_DWORD *)&stru_87C374[44956] = 0; /*0x560e26*/
    }
    if ( *(_DWORD *)&stru_87C374[44952] ) /*0x560e32*/
    {
      Debug::Log(); /*0x560e39*/
      if ( *(_DWORD *)&stru_87C374[44952] ) /*0x560e49*/
        (***(void (__thiscall ****)(_DWORD, int))&stru_87C374[44952])( /*0x560e4f*/
          *(_DWORD *)&stru_87C374[44952],
          1);
      *(_DWORD *)&stru_87C374[44952] = 0; /*0x560e51*/
    }
    if ( *(_DWORD *)&stru_87C374[44936] ) /*0x560e5d*/
    {
      Debug::Log(); /*0x560e64*/
      if ( *(_DWORD *)&stru_87C374[44936] ) /*0x560e74*/
        (***(void (__thiscall ****)(_DWORD, int))&stru_87C374[44936])( /*0x560e7a*/
          *(_DWORD *)&stru_87C374[44936],
          1);
      *(_DWORD *)&stru_87C374[44936] = 0; /*0x560e7c*/
    }
    if ( *(_DWORD *)&stru_87C374[44940] ) /*0x560e88*/
    {
      Debug::Log(); /*0x560e8f*/
      if ( *(_DWORD *)&stru_87C374[44940] ) /*0x560e9f*/
        (***(void (__thiscall ****)(_DWORD, int))&stru_87C374[44940])( /*0x560ea5*/
          *(_DWORD *)&stru_87C374[44940],
          1);
      *(_DWORD *)&stru_87C374[44940] = 0; /*0x560ea7*/
    }
    if ( *(_DWORD *)&stru_87C374[44968] ) /*0x560eb3*/
    {
      Debug::Log(); /*0x560eba*/
      if ( *(_DWORD *)&stru_87C374[44968] ) /*0x560eca*/
        (***(void (__thiscall ****)(_DWORD, int))&stru_87C374[44968])( /*0x560ed0*/
          *(_DWORD *)&stru_87C374[44968],
          1);
      *(_DWORD *)&stru_87C374[44968] = 0; /*0x560ed2*/
    }
    if ( stru_89E138[6208] ) /*0x560ee6*/
    {
      Debug::Log(); /*0x560f1f*/
      SetRect(&rc, 0, 0, (int)xRight, yBottom); /*0x560f30*/
      WindowLongA = (ObjectClass *)GetWindowLongA(g_hWnd, -20); /*0x560f4c*/
      v16 = (ObjectClass *)(GetMenu(g_hWnd) != 0); /*0x560f60*/
      eax41 = GetWindowLongA(g_hWnd, -16); /*0x560f64*/
      AdjustWindowRectEx(&rc, eax41, (BOOL)v16, (DWORD)WindowLongA); /*0x560f6c*/
      MoveWindow(g_hWnd, 0, 0, rc.right - rc.left, rc.bottom - rc.top, 1); /*0x560f92*/
    }
    else
    {
      Debug::Log(); /*0x560ee8*/
      SetWindowPos(g_hWnd, 0, 0, 0, (int)xRight, yBottom, 2u); /*0x560efe*/
      Debug::Log(); /*0x560f09*/
      *(_DWORD *)&stru_87C374[44948] = DSurface::CreatePrimary(0); /*0x560f18*/
    }
  int v32[4]; // [esp+5Ch] [ebp-20h] BYREF
    Viewport = (ObjectClass *)Display::GetViewport(v32); /*0x560fa1*/
    rc.left = 0; /*0x560fa3*/
    rc.top = 0; /*0x560fa8*/
    v8 = *(ObjectClass **)Viewport->__pad_0; /*0x560fac*/
  _DWORD v31[4]; // [esp+4Ch] [ebp-30h] BYREF
    v31[0] = 0; /*0x560fae*/
  _DWORD v33[4]; // [esp+6Ch] [ebp-10h] BYREF
    v33[0] = v8; /*0x560fb2*/
    v9 = *(ObjectClass **)&Viewport->__pad_0[4]; /*0x560fbc*/
    rc.right = 168; /*0x560fbf*/
    v33[1] = v9; /*0x560fc3*/
    AbstractClass *v12 = *(_DWORD *)&Viewport->__pad_0[8]; /*0x560fcb*/
    v31[1] = 0; /*0x560fce*/
    v33[2] = v12; /*0x560fd2*/
    v31[2] = v12; /*0x560fd6*/
    int v13 = *(_DWORD *)&Viewport->__pad_0[12]; /*0x560fda*/
    v32[2] = v12; /*0x560fdd*/
    v33[3] = v13; /*0x560fe1*/
    rc.bottom = *(_DWORD *)&stru_87C374[44104]; /*0x560feb*/
    v31[3] = *(_DWORD *)&stru_87C374[44104]; /*0x560fef*/
    v32[3] = *(_DWORD *)&stru_87C374[44104]; /*0x560ff3*/
    v32[0] = 0; /*0x561006*/
    v32[1] = 0; /*0x56100a*/
    AllocateSurfaceScreenSurfaces( /*0x56100e*/
      (int)&stru_87C374[44092],
      (ObjectClass *)v32,
      (ObjectClass *)v31,
      (int)&rc,
      0);
    *(_DWORD *)&stru_87C374[44960] = *(_DWORD *)&stru_87C374[44952]; /*0x56101e*/
    Debug::Log(); /*0x561024*/
  char v21; // [esp+10h] [ebp-6Ch]
    sub_491100(aP0, BitMask_Green, BitMask_Red, aP3, v20, v21, v22); /*0x561046*/
    if ( *(_DWORD *)&stru_87C374[45772] ) /*0x561053*/
    {
      MouseClass::CalcConfiningRect(*(HWND **)&stru_87C374[45772]); /*0x5610dd*/
    }
    else
    {
      _DWORD * v14 = (_DWORD *)__2_YAPAXI_Z(0x98u); /*0x56105e*/
      if ( v14 ) /*0x561068*/
        *(_DWORD *)&stru_87C374[45772] = MouseClass::Construct( /*0x56107f*/
                                                      v14,
                                                      *(ObjectClass **)&stru_87C374[44948],
                                                      (IUnknown *)g_hWnd);
      else
        *(_DWORD *)&stru_87C374[45772] = 0; /*0x561086*/
      LOBYTE(v15) = 0; /*0x56108c*/
      eax46 = SearchMIXFile(g_Str_File_MOUSE_SHA[0], v15); /*0x561093*/
      if ( eax46 ) /*0x56109a*/
      {
        BitShift_Red = 0; /*0x56109f*/
        v28 = 0; /*0x5610aa*/
        (*(void (__thiscall **)(_DWORD, int *, int, _DWORD))(**(_DWORD **)&stru_87C374[45772] + 4))( /*0x5610b5*/
          *(_DWORD *)&stru_87C374[45772],
          &BitShift_Red,
          eax46,
          0);
      }
      Mission::SetAndCall((int *)&stru_87C374[13428], 0, 0); /*0x5610bf*/
      Mouse::SetCursor((int)&stru_87C374[13428], 0, 0); /*0x5610cb*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 16))(*(_DWORD *)&stru_87C374[45772]); /*0x5610d8*/
    }
    TacticalClass::SetViewDimensions((MouseClass *)v33); /*0x5610ec*/
    ChangeVideoMode_Setup(*(int *)&stru_89E138[8044], *(int *)&stru_89E138[8048]); /*0x5610fd*/
    SidebarClass::InitButtons(&stru_87C374[13428]); /*0x561107*/
    TacticalClass::BuildCommandBar(&stru_87C374[13428], (int)xRight, 1); /*0x561113*/
    SidebarClass::LoadResources(); /*0x56111d*/
    MapClass::MarkForRedraw(&stru_87C374[13428], 2); /*0x561129*/
    for ( i = (MouseClass *)Dialog::GetCurrent(); i; i = (MouseClass *)Dialog::FindByPtr(i) ) /*0x561137*/
    {
      DestroyDialog(i); /*0x56113b*/
      ResizeDialogAndEnum((SkirmishDialog *)i); /*0x561146*/
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 16))(*(_DWORD *)&stru_87C374[45772]); /*0x561160*/
    Debug::Log(); /*0x561168*/
    return 1; /*0x561170*/
  }
  if ( *(_DWORD *)&stru_87C374[45772] ) /*0x560cac*/
  {
    Debug::Log(); /*0x560cb3*/
    if ( *(_DWORD *)&stru_87C374[45772] ) /*0x560cc3*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374[45772])( /*0x560cc9*/
        *(_DWORD *)&stru_87C374[45772],
        1);
    *(_DWORD *)&stru_87C374[45772] = 0; /*0x560ccb*/
  }
  if ( *(_DWORD *)&stru_87C374[44948] ) /*0x560cd7*/
  {
    Debug::Log(); /*0x560cde*/
    if ( *(_DWORD *)&stru_87C374[44948] ) /*0x560cee*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374[44948])( /*0x560cf4*/
        *(_DWORD *)&stru_87C374[44948],
        1);
    *(_DWORD *)&stru_87C374[44948] = 0; /*0x560cf6*/
  }
  if ( InitializeDDraw((int)g_hWnd, xRight, yBottom, 0x10u) ) /*0x560d07*/
  {
    Debug::Log(); /*0x560dd4*/
    *(_DWORD *)&stru_87C374[44092] = 0; /*0x560de2*/
    *(_DWORD *)&stru_87C374[44096] = 0; /*0x560de7*/
    *(_DWORD *)&stru_87C374[44100] = xRight; /*0x560ded*/
    *(_DWORD *)&stru_87C374[44104] = yBottom; /*0x560df3*/
    Debug::Log(); /*0x560df9*/
    goto LABEL_19; /*0x560df9*/
  }
  Debug::Log(); /*0x560d19*/
  Debug::Log(); /*0x560d23*/
  *(_DWORD *)&stru_87C374[44948] = DSurface::CreatePrimary(0); /*0x560d32*/
  Debug::Log(); /*0x560d3c*/
  _DWORD * v4 = (_DWORD *)__2_YAPAXI_Z(0x98u); /*0x560d46*/
  if ( v4 ) /*0x560d50*/
    *(_DWORD *)&stru_87C374[45772] = MouseClass::Construct( /*0x560d67*/
                                                  v4,
                                                  *(ObjectClass **)&stru_87C374[44948],
                                                  (IUnknown *)g_hWnd);
  else
    *(_DWORD *)&stru_87C374[45772] = 0; /*0x560d6e*/
  LOBYTE(v5) = 0; /*0x560d74*/
  int v6 = SearchMIXFile(g_Str_File_MOUSE_SHA[0], v5); /*0x560d7b*/
  if ( v6 ) /*0x560d82*/
  {
    BitShift_Red = 0; /*0x560d88*/
    v28 = 0; /*0x560d94*/
    (*(void (__thiscall **)(_DWORD, int *, int, _DWORD))(**(_DWORD **)&stru_87C374[45772] + 4))( /*0x560d9f*/
      *(_DWORD *)&stru_87C374[45772],
      &BitShift_Red,
      v6,
      0);
  }
  Mission::SetAndCall((int *)&stru_87C374[13428], 0, 0); /*0x560da9*/
  Mouse::SetCursor((int)&stru_87C374[13428], 0, 0); /*0x560db5*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 16))(*(_DWORD *)&stru_87C374[45772]); /*0x560dc2*/
  return 0; /*0x560dc7*/
}
} // namespace gamemd

// 0x561400
namespace gamemd {
void VideoSettingsDialogProc(INIClass * aP0, unsigned int a2, WPARAM wParam, unsigned int a4)
{
{
  int result; // eax
  _DWORD *WindowLongA; // esi
  ObjectClass *v6; // ebx
  LPARAM v8; // esi
  INIClass **v9; // ebp
  INIClass *v10; // eax
  INIClass *v11; // ecx
  LRESULT v12; // eax
  HWND v13; // esi
  HWND DlgItem; // eax
  HWND v16; // eax
  LRESULT v17; // eax
  HWND v18; // eax
  char Buffer[64]; // [esp+Ch] [ebp-40h] BYREF
  int wParama; // [esp+58h] [ebp+Ch]

  result = BaseDialogProc((SkirmishDialog *)aP0, a2, wParam, a4); /*0x56141c*/
  if ( result ) /*0x561423*/
    return result; /*0x561423*/
  WindowLongA = (_DWORD *)GetWindowLongA((HWND)aP0, 8); /*0x561439*/
  if ( a2 == 273 ) /*0x56143b*/
  {
    if ( (unsigned __int16)wParam > 0x686u ) /*0x5615c1*/
    {
      if ( (unsigned __int16)wParam != 1739 ) /*0x56162f*/
        return 0; /*0x5616d5*/
    }
    else
    {
      if ( (unsigned __int16)wParam == 1670 ) /*0x5615c3*/
      {
        __3_YAXPAX_Z(dword_ABCF5C); /*0x561606*/
        dword_ABCF5C = 0; /*0x56160e*/
        *WindowLongA = 2; /*0x561618*/
        return 0; /*0x561627*/
      }
      if ( (unsigned __int16)wParam != 1 ) /*0x5615c6*/
      {
        if ( (unsigned __int16)wParam == 1497 ) /*0x5615cd*/
        {
          DlgItem = GetDlgItem((HWND)aP0, 1497); /*0x5615d9*/
          dword_82A284 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x5615f1*/
          return 0; /*0x5615fd*/
        }
        return 0; /*0x5615cd*/
      }
    }
    if ( dword_82A288 != dword_82A284 ) /*0x56164e*/
    {
      SetDialogParent((HWND)aP0, g_hWnd); /*0x561658*/
      v16 = GetDlgItem((HWND)aP0, 1497); /*0x561663*/
      if ( v16 ) /*0x561667*/
      {
        v17 = SendMessageA(v16, 0x199u, dword_82A284, 0); /*0x561678*/
        dword_ABCE94 = *(_DWORD *)&dword_ABCF5C->__pad_0[8 * v17]; /*0x561683*/
        dword_ABCE98 = dword_ABCF5C->headNode[2 * v17]; /*0x56168d*/
      }
    }
    v18 = GetDlgItem((HWND)aP0, 1652); /*0x561698*/
    if ( v18 ) /*0x5616a1*/
      HouseClass_Player[44616] = SendMessageA(v18, 0xF0u, 0, 0) == 1; /*0x5616b4*/
    __3_YAXPAX_Z(dword_ABCF5C); /*0x5616c1*/
    dword_ABCF5C = 0; /*0x5616c6*/
    *WindowLongA = 1; /*0x5616d3*/
    return 0; /*0x5616d3*/
  }
  if ( a2 != 1175 ) /*0x561447*/
    return 0; /*0x561447*/
  v6 = GetDlgItem((HWND)aP0, 1497); /*0x561459*/
  if ( HouseClass_Player[44617] ) /*0x561464*/
    unsigned int * v7 = sub_4A4900(0x280u, 0x1E0u, 0x1000u, 0x1000u, 16); /*0x561470*/
  else
    v7 = sub_4A4900(0x280u, 0x1E0u, 0x400u, 0x300u, 16); /*0x561486*/
  v8 = 0; /*0x561491*/
  dword_ABCF5C = (CCINIClass *)v7; /*0x561495*/
  v9 = (INIClass **)v7; /*0x56149a*/
  wParama = -1; /*0x56149c*/
  unsigned int v21 = 0; /*0x5614a4*/
  if ( v7 && *v7 ) /*0x5614ae*/
  {
    do /*0x561527*/
    {
      v10 = *v9; /*0x5614b3*/
      v11 = v9[1]; /*0x5614b6*/
      v9 += 2; /*0x5614c2*/
      if ( HouseClass_Player[44617] /*0x5614dc*/
        || v10 == (INIClass *)640
        || v10 == (INIClass *)800
        || v10 == (INIClass *)1024 )
      {
        if ( v10 == (INIClass *)dword_ABCE94 && v11 == (INIClass *)dword_ABCE98 ) /*0x5614ec*/
          wParama = v21; /*0x5614f2*/
        sprintf(Buffer, &stru_82A2C4, v10); /*0x561502*/
        v12 = SendMessageA(v6, 0x4C8u, 0, (LPARAM)Buffer); /*0x561517*/
        SendMessageA(v6, 0x19Au, v12, v8); /*0x561521*/
        ++v21; /*0x561523*/
      }
      ++v8; /*0x56152a*/
    }
    while ( *v9 ); /*0x561527*/
  }
  SendMessageA(v6, 0x186u, wParama, 0); /*0x56153c*/
  byte_82A28C = 1; /*0x56154c*/
  dword_82A284 = wParama; /*0x561552*/
  dword_82A288 = wParama; /*0x561557*/
  v13 = GetDlgItem((HWND)aP0, 1652); /*0x561567*/
  if ( !v13 ) /*0x56156b*/
    return 0; /*0x56156b*/
  bool v14 = HouseClass_Player[44616] == 1 && stru_89E138[11446] == 1; /*0x561581*/
  SendMessageA(v13, 0xF1u, v14, 0); /*0x561597*/
  EnableWindow(v13, (unsigned __int8)stru_89E138[11446]); /*0x5615a3*/
  return 0; /*0x5615aa*/
}
} // namespace gamemd

// 0x568140
namespace gamemd {
void sub_568140(int * a1, int a2)
{
{
  int result; // eax
  __int16 v19; // [esp+14h] [ebp-8h]
  __int16 v20; // [esp+16h] [ebp-6h]
  WaveClass *v2 = *a1; /*0x56814a*/
  IUnknown *v3 = a1[1]; /*0x56814c*/
  IUnknown *v4 = a1[2]; /*0x56814f*/
  int v5 = ZCoordToScreenY(v4); /*0x568154*/
  int v6; // esi
  v6 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31) /*0x568173*/
       + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 4)) << 8)
     + v2;
  int v7 = ZCoordToScreenY(v4); /*0x568175*/
  int v8 = a2; /*0x568185*/
  v19 = v6 / 256; /*0x5681a6*/
  int v9 = -2 - a2; /*0x5681be*/
  v20 = (int)(((((unsigned int)(((unsigned __int64)(2004318071LL * v7) >> 32) - v7) >> 31) /*0x5681c0*/
              + ((int)(((unsigned __int64)(2004318071LL * v7) >> 32) - v7) >> 4)) << 8)
            + v3)
      / 256;
  int v10 = -2 - a2; /*0x5681c5*/
  for ( result = a2 + 2; v10 < result; ++v10 ) /*0x5681d0*/
  {
    if ( v9 < result ) /*0x5681db*/
    {
      int v12 = v10 * v10; /*0x5681e6*/
      int v13 = (v8 + 1) * (v8 + 1); /*0x5681e9*/
      do /*0x5682e1*/
      {
        if ( v12 + v9 * v9 < v13 ) /*0x5681f9*/
        {
  int v21; // [esp+20h] [ebp+4h]
          LOWORD(v21) = v10 + v19; /*0x56820c*/
          HIWORD(v21) = v9 + v20; /*0x568211*/
          unsigned int v14 = ((__int16)(v9 + v20) << 9) + (__int16)(v10 + v19); /*0x568223*/
  _DWORD *v15; // ecx
          if ( v14 >= 0x40000 || (v15 = *(_DWORD **)(g_Shroud_CellArray + 4 * v14)) == 0 ) /*0x56823b*/
          {
            g_Map_GlobalCellIndex = v21; /*0x56823d*/
            v15 = g_CellClassArray; /*0x568243*/
          }
          v15[76] = 0; /*0x56824a*/
  _DWORD *v16; // ecx
          if ( v14 >= 0x40000 || (v16 = *(_DWORD **)(g_Shroud_CellArray + 4 * v14)) == 0 ) /*0x568264*/
          {
            g_Map_GlobalCellIndex = v21; /*0x568266*/
            v16 = g_CellClassArray; /*0x56826c*/
          }
          v16[77] = 0; /*0x568273*/
  _DWORD *v17; // ecx
          if ( v14 >= 0x40000 || (v17 = *(_DWORD **)(g_Shroud_CellArray + 4 * v14)) == 0 ) /*0x56828d*/
          {
            g_Map_GlobalCellIndex = v21; /*0x56828f*/
            v17 = g_CellClassArray; /*0x568295*/
          }
          v17[75] |= 0x10u; /*0x56829a*/
  _DWORD *v18; // eax
          if ( v14 >= 0x40000 || (v18 = *(_DWORD **)(g_Shroud_CellArray + 4 * v14)) == 0 ) /*0x5682b7*/
          {
            g_Map_GlobalCellIndex = v21; /*0x5682b9*/
            v18 = g_CellClassArray; /*0x5682bf*/
          }
          v12 = v10 * v10; /*0x5682ca*/
          v18[75] |= 8u; /*0x5682d1*/
          v8 = a2; /*0x5682d7*/
        }
        ++v9; /*0x5682db*/
        result = v8 + 2; /*0x5682dc*/
      }
      while ( v9 < v8 + 2 ); /*0x5682e1*/
      v9 = -2 - a2; /*0x5682e7*/
    }
  }
  return result; /*0x5682f5*/
}
} // namespace gamemd

// 0x56AF40
namespace gamemd {
BombClass * * E4Recv_56AF40::sub_56AF40(int a2)
{
{
  int Src; // [esp+10h] [ebp-2Ch] BYREF

  E4Recv_56AF40 *v2 = this; /*0x56af45*/
  char * v3 = 0; /*0x56af47*/
  int v17[10]; // [esp+14h] [ebp-28h] BYREF
  LCWPipe::Constructor(v17, 0, 0x2000); /*0x56af57*/
  Pipe::SetDelegate(v17, a2); /*0x56af65*/
  int v4 = 0; /*0x56af70*/
  int v18 = 0; /*0x56af74*/
  if ( v2[80] > 0 ) /*0x56af78*/
  {
    do /*0x56b08b*/
    {
      int v5 = *(_DWORD *)(v2[79] + 4 * v4); /*0x56af88*/
      if ( v4 ) /*0x56af8b*/
      {
        if ( v5 ) /*0x56af93*/
        {
          int v6 = *(_DWORD *)(v5 + 36); /*0x56af99*/
          Src = v6; /*0x56afa0*/
          CampaignClass *v7 = *(this + 61); /*0x56afa9*/
          Src = SHIWORD(v6) + (__int16)v6; /*0x56afb7*/
          if ( Src > v7 /*0x56afea*/
            && (__int16)v6 - SHIWORD(v6) < v7
            && SHIWORD(v6) - (__int16)v6 < v7
            && Src <= v7 + 2 * *(this + 62) )
          {
            Src = v6; /*0x56aff7*/
            if ( v6 != g_MapSeedState /*0x56b028*/
              && (_DWORD *)v5 != g_CellClassArray
              && (*(_DWORD *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = v6; /*0x56b035*/
              char * v8 = &v3[(_DWORD)LCW::Compress((int)v17, (char *)&Src, 4)]; /*0x56b045*/
              char * v9 = &v8[(_DWORD)LCW::Compress((int)v17, (char *)(v5 + 56), 4)]; /*0x56b059*/
              char * v10 = &v9[(_DWORD)LCW::Compress((int)v17, (char *)(v5 + 282), 1)]; /*0x56b06d*/
              v3 = &v10[(_DWORD)LCW::Compress((int)v17, (char *)(v5 + 283), 1)]; /*0x56b074*/
            }
          }
        }
      }
      v2 = this; /*0x56b076*/
      v4 = v18 + 1; /*0x56b07e*/
      v18 = v4; /*0x56b085*/
    }
    while ( v4 < *(this + 80) ); /*0x56b08b*/
  }
  int v15 = g_MapSeedState; /*0x56b0a4*/
  char * v11 = &v3[(_DWORD)LCW::Compress((int)v17, (char *)&v15, 4)]; /*0x56b0ad*/
  int v12 = 100; /*0x56b0af*/
  do /*0x56b0c7*/
  {
    v11 = &v11[(_DWORD)LCW::Compress((int)v17, (char *)&v15, 4)]; /*0x56b0c4*/
    --v12; /*0x56b0c6*/
  }
  while ( v12 ); /*0x56b0c7*/
  (*(void (__thiscall **)(int *))(v17[0] + 4))(v17); /*0x56b0d1*/
  LCWPipe::Dtor(v17); /*0x56b0d8*/
  return v11; /*0x56b0df*/
}
} // namespace gamemd

// 0x56B250
namespace gamemd {
BombClass * * E4Recv_56B250::sub_56B250(int a2)
{
{
  int Src; // [esp+Ch] [ebp-30h] BYREF

  E4Recv_56B250 *v2 = this; /*0x56b255*/
  int v17[10]; // [esp+14h] [ebp-28h] BYREF
  LZOPipe::Constructor(v17, 0, 0x2000); /*0x56b266*/
  Pipe::SetDelegate(v17, a2); /*0x56b274*/
  int v3 = 0; /*0x56b27f*/
  int v4 = 0; /*0x56b281*/
  int v18 = 0; /*0x56b285*/
  if ( v2[80] > 0 ) /*0x56b289*/
  {
    do /*0x56b39c*/
    {
      int v5 = *(_DWORD *)(v2[79] + 4 * v4); /*0x56b299*/
      if ( v4 ) /*0x56b29c*/
      {
        if ( v5 ) /*0x56b2a4*/
        {
          int v6 = *(_DWORD *)(v5 + 36); /*0x56b2aa*/
          Src = v6; /*0x56b2b1*/
          CampaignClass *v7 = *(this + 61); /*0x56b2ba*/
          Src = SHIWORD(v6) + (__int16)v6; /*0x56b2c8*/
          if ( Src > v7 /*0x56b2fb*/
            && (__int16)v6 - SHIWORD(v6) < v7
            && SHIWORD(v6) - (__int16)v6 < v7
            && Src <= v7 + 2 * *(this + 62) )
          {
            Src = v6; /*0x56b308*/
            if ( v6 != g_MapSeedState /*0x56b339*/
              && (_DWORD *)v5 != g_CellClassArray
              && (*(_DWORD *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = v6; /*0x56b346*/
              int v8 = Compression::Read((int)v17, (int)&Src, 4) + v3; /*0x56b356*/
              int v9 = Compression::Read((int)v17, v5 + 56, 4) + v8; /*0x56b36a*/
              int v10 = Compression::Read((int)v17, v5 + 282, 1) + v9; /*0x56b37e*/
              v3 = Compression::Read((int)v17, v5 + 283, 1) + v10; /*0x56b385*/
            }
          }
        }
      }
      v2 = this; /*0x56b387*/
      v4 = v18 + 1; /*0x56b38f*/
      v18 = v4; /*0x56b396*/
    }
    while ( v4 < *(this + 80) ); /*0x56b39c*/
  }
  int v16 = g_MapSeedState; /*0x56b3b5*/
  int v11 = Compression::Read((int)v17, (int)&v16, 4) + v3; /*0x56b3c6*/
  BombClass *v12 = (*(int (__thiscall **)(int *))(v17[0] + 4))(v17); /*0x56b3cf*/
  LZOPipe::Destructor(v17); /*0x56b3d1*/
  return v12 + v11; /*0x56b3d9*/
}
} // namespace gamemd

// 0x561350
namespace gamemd {
int sub_561350(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
{
    int result;
    int *WindowLongA;
    wchar_t *StringCSF;
    HWND DlgItem;
    result = BaseDialogProc(hWnd, a2, a3, a4);
    if ( !result )
  {
    WindowLongA = (int *)GetWindowLongA(hWnd, 8);
    if ( a2 == 273 )
    {
    if ( (unsigned short)a3 == 1473 )
      {
    *WindowLongA = 1;
      }
    else if ( (unsigned short)a3 == 1738 )
      {
    *WindowLongA = 2;
    return 0;
      }
    }
    else if ( a2 == 1175 )
    {
    StringCSF = GetStringCSF(aGuiConfirmmode, 0, g_Str_File_MainOpt_cpp, 1501);
    DlgItem = GetDlgItem(hWnd, 1499);
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)StringCSF);
    return 0;
    }
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x5616F0
namespace gamemd {
int sub_5616F0()
{
{
    DataGlobal_ABD470 = 0;
    DataGlobal_ABD474 = 0;
    DataGlobal_ABD478 = 0;
    DataGlobal_ABD47C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x561710
namespace gamemd {
void sub_561710()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABD488 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x561740
namespace gamemd {
void sub_561740()
{
{
    DataGlobal_ABDDA0 = DataGlobal_ABD488 / DataGlobal_7ED3C0;
}
}
} // namespace gamemd

// 0x561760
namespace gamemd {
void sub_561760()
{
{
    DataGlobal_ABDC38 = 1.0 / DataGlobal_ABDDA0;
}
}
} // namespace gamemd

// 0x561780
namespace gamemd {
void sub_561780()
{
{
    DataGlobal_ABDC30 = DataGlobal_7ED3C8 * 45.0;
}
}
} // namespace gamemd

// 0x5617A0
namespace gamemd {
void sub_5617A0()
{
{
    DataGlobal_ABDA58 = DataGlobal_7ED3C8 * 60.0;
}
}
} // namespace gamemd

// 0x5617C0
namespace gamemd {
void sub_5617C0()
{
{
    DataGlobal_ABD458 = DataGlobal_7ED3C8 * 90.0;
}
}
} // namespace gamemd

// 0x5617E0
namespace gamemd {
long long sub_5617E0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABD458 - DataGlobal_ABDA58);
    result = Math::RoundToInt(v0 * DataGlobal_ABD488 * 0.5);
    g_MapRenderState = result;
    return result;
}
}
} // namespace gamemd

// 0x561820
namespace gamemd {
void sub_561820()
{
{
    DataGlobal_ABDA60 = Math::ArcTan((double)g_MapRenderState * 0.00390625);
}
}
} // namespace gamemd

// 0x561850
namespace gamemd {
void sub_561850()
{
{
    DataGlobal_ABDC20 = Math::ArcTan((double)(2 * g_MapRenderState) / DataGlobal_ABD488);
}
}
} // namespace gamemd

// 0x561880
namespace gamemd {
long long sub_561880()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * g_MapRenderState) + 0.5);
    DataGlobal_ABDD98 = result;
    return result;
}
}
} // namespace gamemd

// 0x5618B0
namespace gamemd {
int sub_5618B0()
{
  g_MapSeedState = 0;
  return 0;
}
} // namespace gamemd

// 0x5618C0
namespace gamemd {
int sub_5618C0()
{
{
    DataGlobal_ABDC10 = 0;
    DataGlobal_ABDC14 = 0;
    DataGlobal_ABDC18 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5618E0
namespace gamemd {
int sub_5618E0()
{
{
    DataGlobal_ABDC48 = 0;
    DataGlobal_ABDC40 = 128;
    DataGlobal_ABDC44 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x561900
namespace gamemd {
int j_CoordinateTables_Init()
{
    int *j_CoordinateTables_Init()
{
    return CoordinateTables::Init();
}
}
} // namespace gamemd

// 0x565080
namespace gamemd {
int unknown_libname_22()
{
    void __cdecl unknown_libname_22()
{
    CellClass::DTOR(g_CellClassArray);
}
}
} // namespace gamemd

// 0x5654E0
namespace gamemd {
unsigned int * E4Recv_5654E0::sub_5654E0(unsigned int * a2, int * a3)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    v3 = this->M244;
    v4 = *((int*)(a3) + 1);
    v5 = *a3;
    if ( (v3 & 1) != 0 )
    v6 = v5 - v4 + 1;
    else
    v6 = v5 - v4;
    v7 = *a3 + v4 - v3;
    *a2 = v3 / 2 + (v6 >> 1);
    *((int*)(a2) + 1) = v7;
    return a2;
}
}
} // namespace gamemd

// 0x565610
namespace gamemd {
unsigned int * E4Recv_565610::sub_565610(unsigned int * a2, short * a3)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    short v7;
    int v9;
    v3 = this->M244;
    v4 = *((int*)(a3) + 1);
    v5 = *a3;
    if ( (v3 & 1) != 0 )
    v6 = v5 - v4 + 1;
    else
    v6 = v5 - v4;
    v7 = *a3 + v4 - v3;
    LOWORD(v9) = v3 / 2 + (v6 >> 1);
    HIWORD(v9) = v7;
    *a2 = v9;
    return a2;
}
}
} // namespace gamemd

// 0x56AE40
namespace gamemd {
int E4Recv_56AE40::sub_56AE40(int a2)
{
{
    int v3;
    int i;
    int v5;
    char *v6;
    int j;
    int v8;
    char *v9;
    int k;
    int v11;
    char *v12;
    int v14[10];
    v3 = 0;
    LCWPipe::Constructor(v14, 0, 0x2000);
    Pipe::SetDelegate(v14, a2);
    for ( i = 0; i < this->M320; ++i )
  {
    v5 = *(int *)(this->M316 + 4 * i);
    if ( v5 )
    v6 = LCW::Compress((int)v14, (char *)(v5 + 56), 2);
    else
    v6 = LCW::Compress((int)v14, DataGlobal_ABDC88, 2);
    v3 += (int)v6;
  }
    for ( j = 0; j < this->M320; ++j )
  {
    v8 = *(int *)(this->M316 + 4 * j);
    if ( v8 )
    v9 = LCW::Compress((int)v14, (char *)(v8 + 282), 1);
    else
    v9 = LCW::Compress((int)v14, (char *)&DataGlobal_ABDD6A, 1);
    v3 += (int)v9;
  }
    for ( k = 0; k < this->M320; ++k )
  {
    v11 = *(int *)(this->M316 + 4 * k);
    if ( v11 )
    v12 = LCW::Compress((int)v14, (char *)(v11 + 283), 1);
    else
    v12 = LCW::Compress((int)v14, DataGlobal_ABDD6B, 1);
    v3 += (int)v12;
  }
    LCWPipe::Dtor(v14);
    return v3;
}
}
} // namespace gamemd

// 0x56B0F0
namespace gamemd {
int E4Recv_56B0F0::sub_56B0F0(int * a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int i;
    int *v16;
    int v17;
    v2 = 0;
    v3 = 0;
    v4 = a2;
    v16 = this;
    for ( i = 0; v3 < v16[80]; i = v3 )
  {
    v5 = *(int *)(this->M316 + 4 * v3);
    if ( v3 )
    {
    if ( v5 )
      {
    v6 = *(int *)(v5 + 36);
    v7 = this->M244;
    HIWORD(a2) = HIWORD(v6);
    v8 = (short)v6;
    v9 = SHIWORD(v6);
    a2 = (int *)(SHIWORD(a2) + v8);
    if ( (int)a2 > v7 && v8 - v9 < v7 && v9 - v8 < v7 && (int)a2 <= v7 + 2 * v16[62] )
        {
    a2 = *(int **)(v5 + 36);
    if ( a2 != (int *)g_MapSeedState && (int *)v5 != g_CellClassArray && (*(int *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
          {
    v10 = (*(int (__thiscall **)(int *, int **, int))(*v4 + 16))(v4, &a2, 4) + v2;
    v11 = (*(int (__thiscall **)(int *, int, int))(*v4 + 16))(v4, v5 + 56, 4) + v10;
    v12 = (*(int (__thiscall **)(int *, int, int))(*v4 + 16))(v4, v5 + 282, 1) + v11;
    v2 = (*(int (__thiscall **)(int *, int, int))(*v4 + 16))(v4, v5 + 283, 1) + v12;
          }
        }
      }
    }
    this = v16;
    v3 = i + 1;
  }
    v13 = *v4;
    v17 = g_MapSeedState;
    return v2 + (*(int (__thiscall **)(int *, int *, int))(v13 + 16))(v4, &v17, 4);
}
}
} // namespace gamemd

// 0x56C200
namespace gamemd {
int sub_56C200()
{
return 1;
}
} // namespace gamemd

// 0x56C500
namespace gamemd {
void nullsub_167()
{
  ;
}
} // namespace gamemd

// 0x56ED40
namespace gamemd {
char globalHelper_06ED40(IUnknown * aP0, int a2)
{
{
    int v2;
    short v3;
    unsigned int v4;
    int *v5;
    unsigned char v6;
    int v7;
    v2 = a2 & 7;
    v3 = *(short *)&DataGlobal_89E138[5296][4 * v2 + 160];
    LOWORD(v2) = HIWORD(aP0->field_0) + *(short *)&DataGlobal_89E138[5296][4 * v2 + 162];
    LOWORD(a2) = LOWORD(aP0->field_0) + v3;
    HIWORD(a2) = v2;
    v4 = (short)a2 + ((short)v2 << 9);
    if ( v4 >= 0x40000 || (v5 = *(int **)(*(int *)&DataGlobal_87C374[13744] + 4 * v4)) == 0 )
  {
    g_Map_GlobalCellIndex = (IUnknown *)a2;
    v5 = g_CellClassArray;
  }
    if ( *((char *)(v5) + 320) < 0 )
  {
    v6 = *((char *)(v5) + 286);
    if ( v6 <= 3u )
    {
    *((char *)(v5) + 286) = 4;
    }
    else if ( v6 == 5 )
    {
    *((char *)(v5) + 286) = 6;
    }
  }
    v7 = v5[14] - g_TerrainBridgeIndex + 1;
    if ( v7 == DataGlobal_ABC1E8 || v7 == DataGlobal_AA0E38 )
  {
    LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&a2, (IUnknown *)1, 0);
  }
    else if ( v7 == g_TerrainSoundTable2 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_TerrainBridgeIndex + g_TerrainSoundTable2), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    else if ( v7 == g_TerrainSoundTable2 + 2 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    return v7;
}
}
} // namespace gamemd

// 0x56EE40
namespace gamemd {
char globalHelper_06EE40(IUnknown * aP0, int a2)
{
{
    int v2;
    short v3;
    unsigned int v4;
    int *v5;
    unsigned char v6;
    int v7;
    v2 = a2 & 7;
    v3 = *(short *)&DataGlobal_89E138[5296][4 * v2 + 160];
    LOWORD(v2) = HIWORD(aP0->field_0) + *(short *)&DataGlobal_89E138[5296][4 * v2 + 162];
    LOWORD(a2) = LOWORD(aP0->field_0) + v3;
    HIWORD(a2) = v2;
    v4 = (short)a2 + ((short)v2 << 9);
    if ( v4 >= 0x40000 || (v5 = *(int **)(*(int *)&DataGlobal_87C374[13744] + 4 * v4)) == 0 )
  {
    g_Map_GlobalCellIndex = (IUnknown *)a2;
    v5 = g_CellClassArray;
  }
    if ( *((char *)(v5) + 320) < 0 )
  {
    v6 = *((char *)(v5) + 286);
    if ( v6 <= 3u )
    {
    *((char *)(v5) + 286) = 5;
    }
    else if ( v6 == 4 )
    {
    *((char *)(v5) + 286) = 6;
    }
  }
    v7 = v5[14] - g_TerrainBridgeIndex + 1;
    if ( v7 == DataGlobal_ABC2B4 || v7 == DataGlobal_AA1130 )
  {
    LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&a2, (IUnknown *)1, 0);
  }
    else if ( v7 == g_TerrainSoundTable2 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 1), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    else if ( v7 == g_TerrainSoundTable2 + 1 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    return v7;
}
}
} // namespace gamemd

// 0x56F690
namespace gamemd {
char globalHelper_06F690(IUnknown * aP0, IUnknown * aP1)
{
{
    int v2;
    short v3;
    unsigned int v4;
    int *v5;
    unsigned char v6;
    int v7;
    v2 = (unsigned char)aP1 & 7;
    v3 = *(short *)&DataGlobal_89E138[5296][4 * v2 + 160];
    LOWORD(v2) = HIWORD(aP0->field_0) + *(short *)&DataGlobal_89E138[5296][4 * v2 + 162];
    LOWORD(aP1) = LOWORD(aP0->field_0) + v3;
    HIWORD(aP1) = v2;
    v4 = (short)aP1 + ((short)v2 << 9);
    if ( v4 >= 0x40000 || (v5 = *(int **)(*(int *)&DataGlobal_87C374[13744] + 4 * v4)) == 0 )
  {
    g_Map_GlobalCellIndex = aP1;
    v5 = g_CellClassArray;
  }
    if ( *((char *)(v5) + 320) < 0 )
  {
    v6 = *((char *)(v5) + 286);
    if ( v6 >= 9u )
    {
    if ( v6 <= 0xCu )
      {
    *((char *)(v5) + 286) = 14;
      }
    else if ( v6 == 13 )
      {
    *((char *)(v5) + 286) = 15;
      }
    }
  }
    v7 = v5[14] - g_TerrainBridgeIndex + 1;
    if ( v7 == DataGlobal_ABC1D0 || v7 == DataGlobal_AA1540 )
  {
    LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&aP1, (IUnknown *)1, 0);
  }
    else if ( v7 == g_TerrainSoundConfig )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&aP1, (IUnknown *)(g_TerrainBridgeIndex + g_TerrainSoundConfig), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    else if ( v7 == g_TerrainSoundConfig + 2 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&aP1, (IUnknown *)(g_TerrainSoundConfig + g_TerrainBridgeIndex + 2), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    return v7;
}
}
} // namespace gamemd

// 0x56F7A0
namespace gamemd {
char sub_56F7A0(unsigned short * a1, int a2)
{
{
    int v2;
    short v3;
    unsigned int v4;
    int *v5;
    unsigned char v6;
    int v7;
    v2 = a2 & 7;
    v3 = Direction_X_Offsets[v2];
    LOWORD(v2) = *((int*)(a1) + 1) + HIWORD(Direction_X_Offsets[v2]);
    LOWORD(a2) = *a1 + v3;
    HIWORD(a2) = v2;
    v4 = (short)a2 + ((short)v2 << 9);
    if ( v4 >= 0x40000 || (v5 = *(int **)(g_Shroud_CellArray + 4 * v4)) == 0 )
  {
    g_Map_GlobalCellIndex = a2;
    v5 = g_CellClassArray;
  }
    if ( *((char *)(v5) + 320) < 0 )
  {
    v6 = *((char *)(v5) + 286);
    if ( v6 >= 9u )
    {
    if ( v6 <= 0xCu )
      {
    *((char *)(v5) + 286) = 13;
      }
    else if ( v6 == 14 )
      {
    *((char *)(v5) + 286) = 15;
      }
    }
  }
    v7 = v5[14] - g_TerrainBridgeIndex + 1;
    if ( v7 == DataGlobal_AA1548 || v7 == DataGlobal_AA0740 )
  {
    LOBYTE(v7) = Cell::UpdateTileType((short *)&a2, 1, 0);
  }
    else if ( v7 == g_TerrainSoundConfig )
  {
    LOBYTE(v7) = Cell::SetTileType((short *)&a2, g_TerrainSoundConfig + g_TerrainBridgeIndex + 1, -1, -1, 0);
  }
    else if ( v7 == g_TerrainSoundConfig + 1 )
  {
    LOBYTE(v7) = Cell::SetTileType((short *)&a2, g_TerrainSoundConfig + g_TerrainBridgeIndex + 2, -1, -1, 0);
  }
    return v7;
}
}
} // namespace gamemd
