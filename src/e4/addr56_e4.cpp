// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/LCWPipe_e4.hpp"
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
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/E4Recv_583AD0_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "app/cmdline.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/Pipe_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/LZOPipe_e4.hpp"  // G57w10 D supply

// 0x560BF0
namespace gamemd {
char ChangeVideoMode(unsigned int xRight, unsigned int yBottom)
{
  uint64_t v2; // rdi
  char BitShift_Green; // bp
  MouseClass *v4; // eax
  int v5; // eax
  LONG v7; // eax
  int *Viewport; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  MouseClass *v13; // eax
  int v14; // eax
  Dialog *i; // esi
  BOOL v16; // [esp+4h] [ebp-78h]
  LONG WindowLongA; // [esp+8h] [ebp-74h]
  DDraw *v18; // [esp+Ch] [ebp-70h]
  int v19; // [esp+Ch] [ebp-70h]
  SidebarClass *v20; // [esp+Ch] [ebp-70h]
  XSurface * BitShift_Blue;
  char BitMask_Red; // [esp+20h] [ebp-5Ch]
  int16_t BitMask_Green; // [esp+24h] [ebp-58h]
  char BitMask_Blue; // [esp+28h] [ebp-54h]
  int BitShift_Red; // [esp+2Ch] [ebp-50h] BYREF
  int v26; // [esp+30h] [ebp-4Ch]
  int64_t lParam; // [esp+34h] [ebp-48h] BYREF
  struct tagRECT rc; // [esp+3Ch] [ebp-40h] BYREF
  unsigned int v29[4]; // [esp+4Ch] [ebp-30h] BYREF
  int v30[4]; // [esp+5Ch] [ebp-20h] BYREF
  unsigned int v31[4]; // [esp+6Ch] [ebp-10h] BYREF

  v2 = IDA___PAIR64__(yBottom, xRight); /*0x560bf9*/
    Debug::Log("About to set video mode\n") /*G57c1: IDA 0x560c00 push offset aAboutToSetVide*/;
  lParam = *(unsigned long long *)&g_DisplayWidth; /*0x560c13*/
  BitShift_Green = GetBitShift_Green(); /*0x560c20*/
  BitShift_Red = GetBitShift_Red(); /*0x560c27*/
  BitMask_Blue = GetBitMask_Blue(); /*0x560c30*/
  BitMask_Green = GetBitMask_Green(); /*0x560c39*/
  BitMask_Red = GetBitMask_Red(); /*0x560c42*/
  BitShift_Blue = GetBitShift_Blue(); /*0x560c51*/
  (*(void (**)(void *))(*(unsigned int *)&((MouseClass *)dword_887640)->q_30))((void *)(dword_887640));  /*0x560c57*/
  ((DDraw *)v18)->WaitForIdle(); /*0x560c5a*/
  if ( g_DDraw_Initialized == 1 ) /*0x560c66*/
  {
    *(unsigned int *)&DSurface_ViewBounds.__pad_8[8] = 0; /*0x560c73*/
    *(unsigned int *)&DSurface_ViewBounds.__pad_8[12] = 0; /*0x560c78*/
    *(unsigned long long *)&DSurface_ViewBounds.__pad_8[16] = v2; /*0x560c7e*/
    *(unsigned long long *)&g_DisplayWidth = v2; /*0x560c8a*/
        Debug::Log("VisibleRect: %dx%d\n") /*G57c1: IDA 0x560c96 push offset aVisiblerectDxD*/;
  LABEL_19:
    if ( DSurface_Alternate ) /*0x560e07*/
    {
            Debug::Log("Deleting AlternateSurface\n") /*G57c1: IDA 0x560e0e push offset aDeletingAltern*/;
      if ( DSurface_Alternate ) /*0x560e1e*/
        (*(void (**)(DSurface *, int))DSurface_Alternate->DSurface_field_0x0)( (DSurface *)(DSurface_Alternate), 1); /*0x560e24*/
      DSurface_Alternate = 0; /*0x560e26*/
    }
    if ( g_DSurface_Hidden ) /*0x560e32*/
    {
            Debug::Log("Deleting HiddenSurface\n") /*G57c1: IDA 0x560e39 push offset aDeletingHidden*/;
      if ( g_DSurface_Hidden ) /*0x560e49*/
        (*(void (**)(ObjectClass *, int))g_DSurface_Hidden->AbstractClass)( (ObjectClass *)(g_DSurface_Hidden), 1); /*0x560e4f*/
      g_DSurface_Hidden = 0; /*0x560e51*/
    }
    if ( DSurface_Tile ) /*0x560e5d*/
    {
            Debug::Log("Deleting TileSurface\n") /*G57c1: IDA 0x560e64 push offset aDeletingTilesu*/;
      if ( DSurface_Tile ) /*0x560e74*/
        (*(void (**)(DSurface *, int))DSurface_Tile->DSurface_field_0x0)( (DSurface *)(DSurface_Tile), 1); /*0x560e7a*/
      DSurface_Tile = 0; /*0x560e7c*/
    }
    if ( DSurface_Sidebar ) /*0x560e88*/
    {
            Debug::Log("Deleting SidebarSurface\n") /*G57c1: IDA 0x560e8f push offset aDeletingSideba*/;
      if ( DSurface_Sidebar ) /*0x560e9f*/
        (*(void (**)(DSurface *, int))DSurface_Sidebar->DSurface_field_0x0)( (DSurface *)(DSurface_Sidebar), 1); /*0x560ea5*/
      DSurface_Sidebar = 0; /*0x560ea7*/
    }
    if ( DSurface_Composite ) /*0x560eb3*/
    {
            Debug::Log("Deleting CompositeSurface\n") /*G57c1: IDA 0x560eba push offset aDeletingCompos*/;
      if ( DSurface_Composite ) /*0x560eca*/
        (**(void (***)(AudioStream *, int))DSurface_Composite->__pad_0)(DSurface_Composite, 1); /*0x560ed0*/
      DSurface_Composite = 0; /*0x560ed2*/
    }
    if ( g_DDraw_Initialized ) /*0x560ee6*/
    {
            Debug::Log("Setting new window size to %dx%d\n") /*G57c1: IDA 0x560f1f push offset aSettingNewWind*/;
      SetRect(&rc, 0, 0, v2, IDA_SHIDWORD(v2)); /*0x560f30*/
      WindowLongA = GetWindowLongA((HWND)(g_hWnd), -20); /*0x560f4c*/
      v16 = GetMenu((HWND)(g_hWnd)) != 0; /*0x560f60*/
      v7 = GetWindowLongA((HWND)(g_hWnd), -16); /*0x560f64*/
      AdjustWindowRectEx(&rc, v7, v16, WindowLongA); /*0x560f6c*/
      MoveWindow((HWND)(g_hWnd), 0, 0, rc.right - rc.left, rc.bottom - rc.top, 1); /*0x560f92*/
    }
    else
    {
            Debug::Log("Setting new window size to %dx%d\n") /*G57c1: IDA 0x560ee8 push offset aSettingNewWind*/;
      SetWindowPos((HWND)(g_hWnd), 0, 0, 0, v2, IDA_SHIDWORD(v2), 2u); /*0x560efe*/
            Debug::Log("Creating primary surface\n") /*G57c1: IDA 0x560f09 push offset aCreatingPrimar*/;
      g_DSurface_Primary = (int)((DSurface *)((DSurface*)0)->CreatePrimary()); /*0x560f18*/
    }
    Viewport = (int *)(((Display*)v30)->GetViewport()); /*0x560fa1*/
    rc.left = 0; /*0x560fa3*/
    rc.top = (int)(0);
    v9 = (int)(*Viewport);
    v29[0] = (int)(0);
    v31[0] = (int)(v9);
    v10 = (int)(Viewport[1]);
    rc.right = (int)(168);
    v31[1] = (int)(v10);
    v11 = (int)(Viewport[2]);
    v29[1] = (int)(0);
    v31[2] = v11; /*0x560fd2*/
    v29[2] = v11; /*0x560fd6*/
    v12 = Viewport[3]; /*0x560fda*/
    v30[2] = v11; /*0x560fdd*/
    v31[3] = v12; /*0x560fe1*/
    rc.bottom = *(unsigned int *)&DSurface_ViewBounds.__pad_8[20]; /*0x560feb*/
    v29[3] = *(unsigned int *)&DSurface_ViewBounds.__pad_8[20]; /*0x560fef*/
    v30[3] = *(unsigned int *)&DSurface_ViewBounds.__pad_8[20]; /*0x560ff3*/
    v30[0] = 0; /*0x561006*/
    v30[1] = 0; /*0x56100a*/
    AllocateSurfaceScreenSurfaces((int)&DSurface_ViewBounds.__pad_8[8],(gamemd::ObjectClass *)((int)v30),(gamemd::ObjectClass *)((int)v29), (int)&rc, 0); /*0x56100e*/
    g_DSurface_Hidden_2 = (int)((AudioStream *)g_DSurface_Hidden); /*0x56101e*/
        Debug::Log("Recalc color remap tables\n") /*G57c1: IDA 0x561024 push offset aRecalcColorRem*/;
    sub_491100((gamemd::ObjectClass *)(BitShift_Red), BitShift_Green, 0,(gamemd::ObjectClass *)(BitMask_Blue), BitMask_Green, BitMask_Red,(short)(BitShift_Blue)); /*0x561046*/
    if ( dword_887640) /*0x561053*/
    {
      MouseClass::CalcConfiningRect( (MouseClass *)dword_887640); /*0x5610dd*/
    }
    else
    {
      v13 = (gamemd::MouseClass *)((int)((MouseClass *)RA2_OPNEW(0x98u)));
      if ( v13 ) /*0x561068*/
        dword_887640= ((MouseClass *)(v13))->Construct((int)g_DSurface_Primary, (int)g_hWnd); /*0x56107f*/
      else
        dword_887640= 0; /*0x561086*/
      v14 = (int)(SearchMIXFile((char *)(g_Str_File_MOUSE_SHA), 0)); /*0x561093*/
      if ( v14 ) /*0x56109a*/
      {
        BitShift_Red = 0; /*0x56109f*/
        v26 = 0; /*0x5610aa*/
(*(void (**)(void *, int *, int, unsigned int))(*(unsigned int *)&((MouseClass *)dword_887640)->q_10))( /*0x5610b5*/ dword_887640, (int *)((void *)((void *)((void *)(&BitShift_Red)))), v14, 0);




      }
      Mission_e4::SetAndCall( (int)((MouseClass *)&stru_87F5F0.__pad_58[416]), 0, 0); /*0x5610bf*/
      ((Mouse *)((int)&stru_87F5F0.__pad_58[416]))->SetCursor(0, 0); /*0x5610cb*/
      (*(void (**)(void *))(*(unsigned int *)&((MouseClass *)dword_887640)->q_40))((void *)(dword_887640));  /*0x5610d8*/
    }
    TacticalClass::SetViewDimensions( (DisplayClass *)v31); /*0x5610ec*/
    ChangeVideoMode_Setup((int)g_DisplayWidth, (int)*(&g_DisplayWidth + 1)); /*0x5610fd*/
    SidebarClass::InitButtons((TabClass *)&stru_87F5F0.__pad_58[416]); /*0x561107*/
    TacticalClass::BuildCommandBar((gamemd::TacticalClass *)((TabClass *)1), v2, v19); /*0x561113*/
    SidebarClass::LoadResources(v20); /*0x56111d*/
    ((MapClass *)((int)((GScreenClass *)&stru_87F5F0.__pad_58[416])))->MarkForRedraw((int)((MapClass *)((int)((GScreenClass *)&stru_87F5F0.__pad_58[416]))), 2); /*0x561129*/
        for ( i = (MouseClass *)Dialog::GetCurrent(); i; i = (MouseClass *)((Dialog*)i)->FindByPtr() )
    {
      DestroyDialog( (void *)((ObjectClass *)i)); /*0x56113b*/
      ResizeDialogAndEnum( (HWND)i, (void *)((void *)((LPARAM)&lParam))); /*0x561146*/
    }
    (*(void (**)(void *))(*(unsigned int *)&((MouseClass *)dword_887640)->q_40))((void *)(dword_887640));  /*0x561160*/
        Debug::Log("Mode change complete.\n") /*G57c1: IDA 0x561168 push offset aModeChangeComp*/;
    return 1; /*0x561170*/
  }
  if ( dword_887640) /*0x560cac*/
  {
        Debug::Log("Removing mouse handler\n") /*G57c1: IDA 0x560cb3 push offset aRemovingMouseH*/;
    if ( dword_887640) /*0x560cc3*/
      (**(void (***)(void *, int))dword_887640)((void *)(dword_887640), 1); /*0x560cc9*/
    dword_887640= 0; /*0x560ccb*/
  }
  if ( g_DSurface_Primary ) /*0x560cd7*/
  {
        Debug::Log("Deleting primary surface\n") /*G57c1: IDA 0x560cde push offset aDeletingPrimar*/;
    if ( g_DSurface_Primary ) /*0x560cee*/
      (*(void (**)(DSurface *, int))g_DSurface_Primary->DSurface_field_0x0)( (DSurface *)(g_DSurface_Primary), 1); /*0x560cf4*/
    g_DSurface_Primary = 0; /*0x560cf6*/
  }
  if ( InitializeDDraw((int)g_hWnd, v2, IDA_HIDWORD(v2), 0x10u) ) /*0x560d07*/
  {
        Debug::Log("Mode apparently set OK\n") /*G57c1: IDA 0x560dd4 push offset aModeApparently*/;
    *(unsigned int *)&DSurface_ViewBounds.__pad_8[8] = 0; /*0x560de2*/
    *(unsigned int *)&DSurface_ViewBounds.__pad_8[12] = 0; /*0x560de7*/
    *(unsigned long long *)&DSurface_ViewBounds.__pad_8[16] = v2; /*0x560ded*/
        Debug::Log("VisibleRect: %dx%d\n") /*G57c1: IDA 0x560df9 push offset aVisiblerectDxD*/;
    goto LABEL_19; /*0x560df9*/
  }
    Debug::Log("Set_Video_Mode failed.\n") /*G57c1: IDA 0x560d19 push offset aSetVideoModeFa*/;
    Debug::Log("Restoring primary surface\n") /*G57c1: IDA 0x560d23 push offset aRestoringPrima*/;
  g_DSurface_Primary = (int)((DSurface *)((DSurface*)0)->CreatePrimary()); /*0x560d32*/
    Debug::Log("Restoring mouse handler\n") /*G57c1: IDA 0x560d3c push offset aRestoringMouse*/;
  v4 = (MouseClass *)RA2_OPNEW(0x98u); /*0x560d46*/
  if ( v4 ) /*0x560d50*/
    dword_887640= ((MouseClass *)(v4))->Construct((int)g_DSurface_Primary, (int)g_hWnd); /*0x560d67*/
  else
    dword_887640= 0; /*0x560d6e*/
  v5 = (int)(SearchMIXFile((char *)(g_Str_File_MOUSE_SHA), 0)); /*0x560d7b*/
  if ( v5 ) /*0x560d82*/
  {
    BitShift_Red = 0; /*0x560d88*/
    v26 = 0; /*0x560d94*/
(*(void (**)(void *, int *, int, unsigned int))(*(unsigned int *)&((MouseClass *)dword_887640)->q_10))( /*0x560d9f*/ dword_887640, (int *)((void *)((void *)((void *)(&BitShift_Red)))), v5, 0);




  }
  Mission_e4::SetAndCall( (int)((MouseClass *)&stru_87F5F0.__pad_58[416]), 0, 0); /*0x560da9*/
  ((Mouse *)((int)&stru_87F5F0.__pad_58[416]))->SetCursor(0, 0); /*0x560db5*/
  (*(void (**)(void *))(*(unsigned int *)&((MouseClass *)dword_887640)->q_40))((void *)(dword_887640));  /*0x560dc2*/
  return 0; /*0x560dc7*/
}
}
// 0x561400
namespace gamemd {
int VideoSettingsDialogProc(INIClass * aP0, unsigned int a2, WPARAM wParam, unsigned int a4)
{
  int result; // eax
  unsigned int *WindowLongA; // esi
  HWND v6; // ebx
  unsigned int *v7; // eax
  unsigned int * v8;
  int *v9; // ebp
  int v10; // eax
  int v11; // ecx
  LRESULT v12; // eax
  HWND v13; // esi
  bool v14; // al
  HWND DlgItem; // eax
  HWND v16; // eax
  LRESULT v17; // eax
  HWND v18; // eax
  char Buffer[64]; // [esp+Ch] [ebp-40h] BYREF
  int wParama; // [esp+58h] [ebp+Ch]
  int v21; // [esp+5Ch] [ebp+10h]

  result = (int)(BaseDialogProc((gamemd::SkirmishDialog *)(aP0), a2, wParam, a4));
  if ( result ) /*0x561423*/
    return result; /*0x561423*/
  WindowLongA = (unsigned int *)GetWindowLongA((HWND)(aP0), 8); /*0x561439*/
  if ( a2 == 273 ) /*0x56143b*/
  {
    if ( (uint16_t)wParam > 0x686u ) /*0x5615c1*/
    {
      if ( (uint16_t)wParam != 1739 ) /*0x56162f*/
        return 0; /*0x5616d5*/
    }
    else
    {
      if ( (uint16_t)wParam == 1670 ) /*0x5615c3*/
      {
        RA2_OPDEL(dword_ABCF5C); /*0x561606*/
        dword_ABCF5C = 0; /*0x56160e*/
        *WindowLongA = 2; /*0x561618*/
        return 0; /*0x561627*/
      }
      if ( (uint16_t)wParam != 1 ) /*0x5615c6*/
      {
        if ( (uint16_t)wParam == 1497 ) /*0x5615cd*/
        {
          DlgItem = GetDlgItem((HWND)(aP0), 1497); /*0x5615d9*/
          dword_82A284 = SendMessageA( (HWND)(DlgItem), 0x188u, 0, 0); /*0x5615f1*/
          return 0; /*0x5615fd*/
        }
        return 0; /*0x5615cd*/
      }
    }
    if ( dword_82A288 != dword_82A284 ) /*0x56164e*/
    {
      SetDialogParent((HWND)(aP0),(HWND)(g_hWnd)); /*0x561658*/
      v16 = GetDlgItem((HWND)(aP0), 1497); /*0x561663*/
      if ( v16 ) /*0x561667*/
      {
        v17 = SendMessageA( (HWND)(v16), 0x199u, dword_82A284, 0); /*0x561678*/
        dword_ABCE94 = *((unsigned int *)dword_ABCF5C + 2 * v17); /*0x561683*/
        dword_ABCE98 = *((unsigned int *)dword_ABCF5C + 2 * v17 + 1); /*0x56168d*/
      }
    }
    v18 = GetDlgItem((HWND)(aP0), 1652); /*0x561698*/
    if ( v18 ) /*0x5616a1*/
      byte_A8EB94 = SendMessageA( (HWND)(v18), 0xF0u, 0, 0) == 1; /*0x5616b4*/
    RA2_OPDEL(dword_ABCF5C); /*0x5616c1*/
    dword_ABCF5C = 0; /*0x5616c6*/
    *WindowLongA = 1; /*0x5616d3*/
    return 0; /*0x5616d3*/
  }
  if ( a2 != 1175 ) /*0x561447*/
    return 0; /*0x561447*/
  v6 = GetDlgItem((HWND)(aP0), 1497); /*0x561459*/
  if ( byte_A8EB95 ) /*0x561464*/
    v7 = (unsigned int *)sub_4A4900(4096, 4096, 16); /*0x561470*/
  else
    v7 = (unsigned int *)sub_4A4900(1024, 768, 16); /*0x561486*/
  v8 = (unsigned int *)(0); /*0x561491*/
  dword_ABCF5C = (unsigned int)(v7); /*0x561495*/
  v9 = (int *)(v7); /*0x56149a*/
  wParama = -1; /*0x56149c*/
  v21 = 0; /*0x5614a4*/
  if ( v7 && *v7 ) /*0x5614ae*/
  {
    do /*0x561527*/
    {
      v10 = *v9; /*0x5614b3*/
      v11 = v9[1]; /*0x5614b6*/
      v9 += 2; /*0x5614c2*/
      if ( byte_A8EB95 || v10 == 640 || v10 == 800 || v10 == 1024 ) /*0x5614dc*/
      {
        if ( v10 == dword_ABCE94 && v11 == dword_ABCE98 ) /*0x5614ec*/
          wParama = v21; /*0x5614f2*/
        sprintf(Buffer, "%d x %d x 16", v10, v11); /*0x561502*/
        v12 = SendMessageA( (HWND)(v6), 0x4C8u, 0, (LPARAM)((LPARAM)((LPARAM)Buffer))); /*0x561517*/
        SendMessageA( (HWND)(v6), 0x19Au, v12, (LPARAM)((LPARAM)((LPARAM)(v8)))); /*0x561521*/
        ++v21; /*0x561523*/
      }
      ++v8; /*0x56152a*/
    }
    while ( *v9 ); /*0x561527*/
  }
  SendMessageA( (HWND)(v6), 0x186u, wParama, 0); /*0x56153c*/
  byte_82A28C = 1; /*0x56154c*/
  dword_82A284 = wParama; /*0x561552*/
  dword_82A288 = wParama; /*0x561557*/
  v13 = GetDlgItem((HWND)(aP0), 1652); /*0x561567*/
  if ( !v13 ) /*0x56156b*/
    return 0; /*0x56156b*/
  v14 = byte_A8EB94 == 1 && g_DDraw_AllowStretchBlits == 1; /*0x561581*/
  SendMessageA( (HWND)(v13), 0xF1u, v14, 0); /*0x561597*/
  EnableWindow(v13, (uint8_t)g_DDraw_AllowStretchBlits); /*0x5615a3*/
  return 0; /*0x5615aa*/
}
}
// 0x568140
namespace gamemd {
int sub_568140(int * a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  int result; // eax
  int v12; // esi
  int v13; // ebp
  unsigned int * v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int16_t v19; // [esp+14h] [ebp-8h]
  int16_t v20; // [esp+16h] [ebp-6h]
  int v21; // [esp+20h] [ebp+4h]

  v2 = *a1; /*0x56814a*/
  v3 = a1[1]; /*0x56814c*/
  v4 = a1[2]; /*0x56814f*/
  v5 = ZCoordToScreenY(v4); /*0x568154*/
  v6 = ((((unsigned int)(((uint64_t)(2004318071LL * v5) >> 32) - v5) >> 31) /*0x568173*/
       + ((int)(((uint64_t)(2004318071LL * v5) >> 32) - v5) >> 4)) << 8)
     + v2;
  v7 = ZCoordToScreenY(v4); /*0x568175*/
  v8 = a2; /*0x568185*/
  v19 = v6 / 256; /*0x5681a6*/
  v9 = -2 - a2; /*0x5681be*/
  v20 = (int)(((((unsigned int)(((uint64_t)(2004318071LL * v7) >> 32) - v7) >> 31) /*0x5681c0*/
              + ((int)(((uint64_t)(2004318071LL * v7) >> 32) - v7) >> 4)) << 8)
            + v3)
      / 256;
  v10 = -2 - a2; /*0x5681c5*/
  for ( result = a2 + 2; v10 < result; ++v10 ) /*0x5681d0*/
  {
    if ( v9 < result ) /*0x5681db*/
    {
      v12 = v10 * v10; /*0x5681e6*/
      v13 = (v8 + 1) * (v8 + 1); /*0x5681e9*/
      do /*0x5682e1*/
      {
        if ( v12 + v9 * v9 < v13 ) /*0x5681f9*/
        {
          IDA_LOWORD(v21) = v10 + v19; /*0x56820c*/
          IDA_HIWORD(v21) = v9 + v20; /*0x568211*/
          v14 = (unsigned int *)(((int16_t)(v9 + v20) << 9) + (int16_t)(v10 + v19)); /*0x568223*/
          if ( v14 >= (unsigned int *)(0x40000) || (v15 = *(unsigned int **)(dword_87F924 + 4 * v14)) == 0 ) /*0x56823b*/
          {
            dword_ABDC74 = v21; /*0x56823d*/
            v15 = unk_ABDC50; /*0x568243*/
          }
          ((unsigned int *)(v15))[76] = (unsigned int)(0);
          if ( v14 >= (unsigned int *)(0x40000) || (v16 = *(unsigned int **)(dword_87F924 + 4 * v14)) == 0 ) /*0x568264*/
          {
            dword_ABDC74 = v21; /*0x568266*/
            v16 = unk_ABDC50; /*0x56826c*/
          }
          ((unsigned int *)(v16))[77] = (unsigned int)(0);
          if ( v14 >= (unsigned int *)(0x40000) || (v17 = *(unsigned int **)(dword_87F924 + 4 * v14)) == 0 ) /*0x56828d*/
          {
            dword_ABDC74 = v21; /*0x56828f*/
            v17 = unk_ABDC50; /*0x568295*/
          }
          ((unsigned int *)(v17))[75] |= 0x10u; /*0x56829a*/
          if ( v14 >= (unsigned int *)(0x40000) || (v18 = *(unsigned int **)(dword_87F924 + 4 * v14)) == 0 ) /*0x5682b7*/
          {
            dword_ABDC74 = v21; /*0x5682b9*/
            v18 = unk_ABDC50; /*0x5682bf*/
          }
          v12 = v10 * v10; /*0x5682ca*/
          ((unsigned int *)(v18))[75] |= 8u; /*0x5682d1*/
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
}
// 0x56AF40
namespace gamemd {
BombClass * * E4Recv_56AF40::sub_56AF40(int a2)
{

  ObjectClass *v2; // esi
  char *v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // ecx
  char *v8; // edi
  char *v9; // edi
  char *v10; // edi
  char *v11; // edi
  int v12; // esi
  char v15[4]; // [esp+Ch] [ebp-30h] BYREF
  int Src; // [esp+10h] [ebp-2Ch] BYREF
  Pipe v17; // [esp+14h] [ebp-28h] BYREF
  int v18; // [esp+40h] [ebp+4h]

  v2 = (gamemd::ObjectClass *)(this); /*0x56af45*/
  v3 = (char *)(0); /*0x56af47*/
  ((LCWPipe *)((LCWPipe *)&v17))->Constructor(0, 0x2000); /*0x56af57*/
  ((Pipe *)(&v17))->SetDelegate(a2); /*0x56af65*/
  v4 = 0; /*0x56af70*/
  v18 = 0; /*0x56af74*/
  if ( v2[1].lastLayer > 0 ) /*0x56af78*/
  {
    do /*0x56b08b*/
    {
      v5 = *(unsigned int *)(*(unsigned int *)&v2[1].isAliveFlag + 4 * v4); /*0x56af88*/
      if ( v4 ) /*0x56af8b*/
      {
        if ( v5 ) /*0x56af93*/
        {
          v6 = *(unsigned int *)(v5 + 36); /*0x56af99*/
          Src = v6; /*0x56afa0*/
          v7 = *((unsigned int *)this + 61); /*0x56afa9*/
          Src = SHIWORD(v6) + (int16_t)v6; /*0x56afb7*/
          if ( Src > v7 /*0x56afea*/
            && (int16_t)v6 - SHIWORD(v6) < v7
            && SHIWORD(v6) - (int16_t)v6 < v7
            && Src <= v7 + 2 * *((unsigned int *)this + 62) )
          {
            Src = v6; /*0x56aff7*/
            if ( v6 != *(unsigned int *)&g_MissionQueueFrame.waypoints[2134] /*0x56b028*/
              && (int *)v5 != &g_MissionQueueFrame.briefing[130]
              && (*(unsigned int *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = v6; /*0x56b035*/
              v8 = &v3[(unsigned int)LCW::Compress((LCWPipe *)&v17, (char *)&Src, 4)]; /*0x56b045*/
              v9 = &v8[(unsigned int)LCW::Compress((LCWPipe *)&v17, (char *)(v5 + 56), 4)]; /*0x56b059*/
              v10 = &v9[(unsigned int)LCW::Compress((LCWPipe *)&v17, (char *)(v5 + 282), 1)]; /*0x56b06d*/
              v3 = &v10[(unsigned int)LCW::Compress((LCWPipe *)&v17, (char *)(v5 + 283), 1)]; /*0x56b074*/
            }
          }
        }
      }
      v2 = (gamemd::ObjectClass *)(this); /*0x56b076*/
      v4 = v18 + 1; /*0x56b07e*/
      v18 = v4; /*0x56b085*/
    }
    while ( v4 < *((unsigned int *)this + 80) ); /*0x56b08b*/
  }
  *(unsigned int *)v15 = *(unsigned int *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b0a4*/
  v11 = &v3[(unsigned int)LCW::Compress((LCWPipe *)&v17, v15, 4)]; /*0x56b0ad*/
  v12 = 100; /*0x56b0af*/
  do /*0x56b0c7*/
  {
    v11 = &v11[(unsigned int)LCW::Compress((LCWPipe *)&v17, v15, 4)]; /*0x56b0c4*/
    --v12; /*0x56b0c6*/
  }
  while ( v12 ); /*0x56b0c7*/
  (*(void (**)(Pipe *))(*(unsigned int *)v17.__pad_0 + 4))( (Pipe *)(&v17)); /*0x56b0d1*/
  ((LCWPipe *)((LCWPipe *)&v17))->Dtor(); /*0x56b0d8*/
  return (gamemd::BombClass **)(v11); /*0x56b0df*/

}
}
// 0x56B250
namespace gamemd {
BombClass * * E4Recv_56B250::sub_56B250(int a2)
{

  ObjectClass *v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // ecx
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // esi
  int Src; // [esp+Ch] [ebp-30h] BYREF
  int v16; // [esp+10h] [ebp-2Ch] BYREF
  Pipe v17; // [esp+14h] [ebp-28h] BYREF
  int v18; // [esp+40h] [ebp+4h]

  v2 = (gamemd::ObjectClass *)(this); /*0x56b255*/
  LZOPipe::Constructor((LZOPipe *)&v17, 0, 0x2000); /*0x56b266*/
  ((Pipe *)(&v17))->SetDelegate(a2); /*0x56b274*/
  v3 = 0; /*0x56b27f*/
  v4 = 0; /*0x56b281*/
  v18 = 0; /*0x56b285*/
  if ( v2[1].lastLayer > 0 ) /*0x56b289*/
  {
    do /*0x56b39c*/
    {
      v5 = *(unsigned int *)(*(unsigned int *)&v2[1].isAliveFlag + 4 * v4); /*0x56b299*/
      if ( v4 ) /*0x56b29c*/
      {
        if ( v5 ) /*0x56b2a4*/
        {
          v6 = *(unsigned int *)(v5 + 36); /*0x56b2aa*/
          Src = v6; /*0x56b2b1*/
          v7 = *((unsigned int *)this + 61); /*0x56b2ba*/
          Src = SHIWORD(v6) + (int16_t)v6; /*0x56b2c8*/
          if ( Src > v7 /*0x56b2fb*/
            && (int16_t)v6 - SHIWORD(v6) < v7
            && SHIWORD(v6) - (int16_t)v6 < v7
            && Src <= v7 + 2 * *((unsigned int *)this + 62) )
          {
            Src = v6; /*0x56b308*/
            if ( v6 != *(unsigned int *)&g_MissionQueueFrame.waypoints[2134] /*0x56b339*/
              && (int *)v5 != &g_MissionQueueFrame.briefing[130]
              && (*(unsigned int *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
            {
              Src = v6; /*0x56b346*/
              v8 = Compression::Read((int *)v17.__pad_0, (int)&Src, 4) + v3; /*0x56b356*/
              v9 = Compression::Read((int *)v17.__pad_0, v5 + 56, 4) + v8; /*0x56b36a*/
              v10 = Compression::Read((int *)v17.__pad_0, v5 + 282, 1) + v9; /*0x56b37e*/
              v3 = Compression::Read((int *)v17.__pad_0, v5 + 283, 1) + v10; /*0x56b385*/
            }
          }
        }
      }
      v2 = (gamemd::ObjectClass *)(this); /*0x56b387*/
      v4 = v18 + 1; /*0x56b38f*/
      v18 = v4; /*0x56b396*/
    }
    while ( v4 < *((unsigned int *)this + 80) ); /*0x56b39c*/
  }
  v16 = *(unsigned int *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b3b5*/
  v11 = Compression::Read((int *)v17.__pad_0, (int)&v16, 4) + v3; /*0x56b3c6*/
  v12 = (unsigned int)(gamemd::BombClass **)((*(int (**)(Pipe *))(*(unsigned int *)v17.__pad_0 + 4))( (Pipe *)(&v17))); /*0x56b3cf*/
  LZOPipe::Destructor((LZOPipe *)&v17); /*0x56b3d1*/
  return (gamemd::BombClass **)(v12 + v11); /*0x56b3d9*/

}
}
// 0x561350
namespace gamemd {
int sub_561350(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  unsigned int *WindowLongA; // eax
  wchar_t *StringCSF; // edi
  HWND DlgItem; // eax

  result = (int)(BaseDialogProc((gamemd::SkirmishDialog *)(hWnd), a2, a3, a4)); /*0x561369*/
  if ( !result ) /*0x561370*/
  {
    WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x561379*/
    if ( a2 == 273 ) /*0x561385*/
    {
      if ( (uint16_t)a3 == 1473 ) /*0x5613d8*/
      {
        *WindowLongA = 1; /*0x5613f0*/
      }
      else if ( (uint16_t)a3 == 1738 ) /*0x5613e0*/
      {
        *WindowLongA = 2; /*0x5613e3*/
        return 0; /*0x5613ed*/
      }
    }
    else if ( a2 == 1175 ) /*0x56138d*/
    {
      StringCSF = GetStringCSF((wchar_t *)(aGuiConfirmmode), 0,(const char *)(g_Str_File_MainOpt_cpp), 1501); /*0x5613ab*/
      DlgItem = GetDlgItem(hWnd, 1499); /*0x5613ad*/
      SendMessageA( (HWND)(DlgItem), 0x4B2u, 0, (LPARAM)((LPARAM)((LPARAM)StringCSF))); /*0x5613bc*/
      return 0; /*0x5613c7*/
    }
    return 0; /*0x5613f6*/
  }
  return result; /*0x5613c2*/
}
} // namespace gamemd

// 0x5616F0
namespace gamemd {
int sub_5616F0()
{
  dword_ABD470 = 0; /*0x5616f2*/
  dword_ABD474 = 0; /*0x5616f7*/
  dword_ABD478 = 0; /*0x5616fc*/
  dword_ABD47C = 0; /*0x561701*/
  return 0; /*0x561706*/
}
} // namespace gamemd

// 0x561710
namespace gamemd {
void sub_561710()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x56171c*/
  dbl_ABD488 = Math::Sqrt(v0 + v0); /*0x56172e*/
}
} // namespace gamemd

// 0x561740
namespace gamemd {
void sub_561740()
{
  dbl_ABDDA0 = dbl_ABD488 / unk_7ED3C0; /*0x56174c*/
}
} // namespace gamemd

// 0x561760
namespace gamemd {
void sub_561760()
{
  dbl_ABDC38 = 1.0 / dbl_ABDDA0; /*0x56176c*/
}
} // namespace gamemd

// 0x561780
namespace gamemd {
void sub_561780()
{
  dbl_ABDC30 = unk_7ED3C8 * 45.0; /*0x56178c*/
}
} // namespace gamemd

// 0x5617A0
namespace gamemd {
void sub_5617A0()
{
  dbl_ABDA58 = unk_7ED3C8 * 60.0; /*0x5617ac*/
}
} // namespace gamemd

// 0x5617C0
namespace gamemd {
void sub_5617C0()
{
  dbl_ABD458 = unk_7ED3C8 * 90.0; /*0x5617cc*/
}
} // namespace gamemd

// 0x5617E0
namespace gamemd {
long long sub_5617E0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABD458 - dbl_ABDA58); /*0x5617f2*/
  result = Math::RoundToInt(v0 * dbl_ABD488 * 0.5); /*0x561806*/
  dword_ABDE88 = result; /*0x56180b*/
  return result; /*0x561810*/
}
} // namespace gamemd

// 0x561820
namespace gamemd {
void sub_561820()
{
  dbl_ABDA60 = Math::ArcTan((double)dword_ABDE88 * 0.00390625); /*0x561837*/
}
} // namespace gamemd

// 0x561850
namespace gamemd {
void sub_561850()
{
  dbl_ABDC20 = Math::ArcTan((double)(2 * dword_ABDE88) / dbl_ABD488); /*0x561872*/
}
} // namespace gamemd

// 0x561880
namespace gamemd {
long long sub_561880()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABDE88) + 0.5); /*0x56189b*/
  dword_ABDD98 = result; /*0x5618a0*/
  return result; /*0x5618a6*/
}
} // namespace gamemd

// 0x5618B0
namespace gamemd {
int sub_5618B0()
{
  dword_ABD480 = 0; /*0x5618b2*/
  return 0; /*0x5618be*/
}
} // namespace gamemd

// 0x5618C0
namespace gamemd {
int sub_5618C0()
{
  dword_ABDC10 = 0; /*0x5618c2*/
  dword_ABDC14 = 0; /*0x5618c7*/
  dword_ABDC18 = 0; /*0x5618cc*/
  return 0; /*0x5618d1*/
}
} // namespace gamemd

// 0x5618E0
namespace gamemd {
int sub_5618E0()
{
  dword_ABDC48 = 0; /*0x5618e5*/
  dword_ABDC40 = 128; /*0x5618ef*/
  dword_ABDC44 = 128; /*0x5618f4*/
  return 128; /*0x5618f9*/
}
} // namespace gamemd

// 0x561900
namespace gamemd {
int j_CoordinateTables_Init()
{
  return (int)(CoordinateTables::Init());
}
} // namespace gamemd

// 0x565080
namespace gamemd {
int unknown_libname_22()
{
  ((CellClass *)(&unk_ABDC50))->DTOR(); /*0x565085*/
}
} // namespace gamemd

// 0x5654E0
namespace gamemd {
unsigned int * E4Recv_5654E0::sub_5654E0(unsigned int * a2, int * a3)
{

  int v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // esi

  v3 = *((unsigned int *)this + 61); /*0x5654e5*/
  v4 = a3[1]; /*0x5654ec*/
  v5 = *a3; /*0x5654f5*/
  if ( (v3 & 1) != 0 ) /*0x5654f7*/
    v6 = v5 - v4 + 1; /*0x5654fb*/
  else
    v6 = v5 - v4; /*0x5654fe*/
  v7 = *a3 + v4 - v3; /*0x565507*/
  *a2 = v3 / 2 + (v6 >> 1); /*0x565514*/
  a2[1] = v7; /*0x565516*/
  return a2; /*0x565513*/

}
} // namespace gamemd

// 0x565610
namespace gamemd {
unsigned int * E4Recv_565610::sub_565610(unsigned int * a2, short * a3)
{

  int v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  int16_t v7; // si
  int16_t *v9; // [esp+14h] [ebp+8h]

  v3 = *((unsigned int *)this + 61); /*0x565615*/
  v4 = a3[1]; /*0x56561c*/
  v5 = *a3; /*0x565627*/
  if ( (v3 & 1) != 0 ) /*0x565629*/
    v6 = v5 - v4 + 1; /*0x56562d*/
  else
    v6 = v5 - v4; /*0x565630*/
  v7 = *a3 + v4 - v3; /*0x565639*/
  LOWORD(v9) = (unsigned int)(v3 / 2 + (v6 >> 1)); /*0x565645*/
  HIWORD(v9) = v7; /*0x56564a*/
  *a2 = (unsigned int)(v9); /*0x565655*/
  return a2; /*0x565653*/

}
} // namespace gamemd

// 0x56AE40
namespace gamemd {
int E4Recv_56AE40::sub_56AE40(int a2)
{

  int v3; // edi
  int i; // ebx
  int v5; // eax
  char *v6; // eax
  int j; // ebx
  int v8; // eax
  char *v9; // eax
  int k; // ebx
  int v11; // eax
  char *v12; // eax
  Pipe v14[2]; // [esp+Ch] [ebp-28h] BYREF

  v3 = 0; /*0x56ae48*/
  ((LCWPipe *)((LCWPipe *)v14))->Constructor(0, 0x2000); /*0x56ae54*/
  ((Pipe *)(v14))->SetDelegate(a2); /*0x56ae62*/
  for ( i = 0; i < *((unsigned int *)this + 80); ++i ) /*0x56ae71*/
  {
    v5 = *(unsigned int *)(*((unsigned int *)this + 79) + 4 * i); /*0x56ae7b*/
    if ( v5 ) /*0x56ae80*/
      v6 = LCW::Compress((LCWPipe *)v14, (char *)(v5 + 56), 2); /*0x56ae86*/
    else
      v6 = LCW::Compress((LCWPipe *)v14, (char *)&g_MissionQueueFrame.briefing[144], 2); /*0x56ae91*/
    v3 += (int)v6; /*0x56ae96*/
  }
  for ( j = 0; j < *((unsigned int *)this + 80); ++j ) /*0x56aead*/
  {
    v8 = *(unsigned int *)(*((unsigned int *)this + 79) + 4 * j); /*0x56aeb7*/
    if ( v8 ) /*0x56aebc*/
      v9 = LCW::Compress((LCWPipe *)v14, (char *)(v8 + 282), 1); /*0x56aec4*/
    else
      v9 = LCW::Compress((LCWPipe *)v14, (char *)&g_MissionQueueFrame.briefing[200] + 2, 1); /*0x56aecf*/
    v3 += (int)v9; /*0x56aed4*/
  }
  for ( k = 0; k < *((unsigned int *)this + 80); ++k ) /*0x56aeeb*/
  {
    v11 = *(unsigned int *)(*((unsigned int *)this + 79) + 4 * k); /*0x56aef5*/
    if ( v11 ) /*0x56aefa*/
      v12 = LCW::Compress((LCWPipe *)v14, (char *)(v11 + 283), 1); /*0x56af02*/
    else
      v12 = LCW::Compress((LCWPipe *)v14, (char *)&g_MissionQueueFrame.briefing[200] + 3, 1); /*0x56af0d*/
    v3 += (int)v12; /*0x56af12*/
  }
  ((LCWPipe *)((LCWPipe *)v14))->Dtor(); /*0x56af23*/
  return v3; /*0x56af2a*/

}
} // namespace gamemd

// 0x56B0F0
namespace gamemd {
int E4Recv_56B0F0::sub_56B0F0(int * a2)
{

  int v2; // ebx
  int v3; // eax
  int *v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // edx
  int i; // [esp+20h] [ebp-Ch]
  ObjectClass *v16; // [esp+24h] [ebp-8h]
  int v17; // [esp+28h] [ebp-4h] BYREF

  v2 = 0; /*0x56b0fa*/
  v3 = 0; /*0x56b0fc*/
  v4 = a2; /*0x56b0ff*/
  v16 = (gamemd::ObjectClass *)(this); /*0x56b105*/
  for ( i = 0; v3 < v16[1].lastLayer; i = v3 ) /*0x56b10d*/
  {
    v5 = *(unsigned int *)(*((unsigned int *)this + 79) + 4 * v3); /*0x56b11d*/
    if ( v3 ) /*0x56b120*/
    {
      if ( v5 ) /*0x56b128*/
      {
        v6 = *(unsigned int *)(v5 + 36); /*0x56b12e*/
        v7 = *((unsigned int *)this + 61); /*0x56b131*/
        HIWORD(a2) = HIWORD(v6); /*0x56b137*/
        v8 = (int16_t)v6; /*0x56b13b*/
        v9 = SHIWORD(v6); /*0x56b13e*/
        a2 = (int *)(SHIWORD(a2) + v8); /*0x56b148*/
        if ( (int)a2 > v7 && v8 - v9 < v7 && v9 - v8 < v7 && (int)a2 <= v7 + 2 * v16[1].ambientSoundController[4] ) /*0x56b17b*/
        {
          a2 = *(int **)(v5 + 36); /*0x56b18b*/
          if ( a2 != *(int **)&g_MissionQueueFrame.waypoints[2134] /*0x56b1bd*/
            && (int *)v5 != &g_MissionQueueFrame.briefing[130]
            && (*(unsigned int *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
          {
            v10 = (*(int (**)(int *, int **, int))(*v4 + 16))( (int *)(v4), (int **)(&a2), 4) + v2; /*0x56b1d8*/
            v11 = (*(int (**)(int *, int, int))(*v4 + 16))( (int *)(v4), v5 + 56, 4) + v10; /*0x56b1e3*/
            v12 = (*(int (**)(int *, int, int))(*v4 + 16))( (int *)(v4), v5 + 282, 1) + v11; /*0x56b1fc*/
            v2 = (*(int (**)(int *, int, int))(*v4 + 16))( (int *)(v4), v5 + 283, 1) + v12; /*0x56b201*/
          }
        }
      }
    }
    this = (gamemd::E4Recv_56B0F0 *)(v16); /*0x56b203*/
    v3 = i + 1; /*0x56b20b*/
  }
  v13 = *v4; /*0x56b225*/
  v17 = *(unsigned int *)&g_MissionQueueFrame.waypoints[2134]; /*0x56b227*/
  return v2 + (*(int (**)(int *, int *, int))(v13 + 16))( (int *)(v4), (int *)(&v17), 4); /*0x56b239*/

}
} // namespace gamemd

// 0x56C200
namespace gamemd {
int sub_56C200()
{
  return 1; /*0x56c205*/
}
} // namespace gamemd

// 0x56C500
namespace gamemd {
void nullsub_167()
{
  ; /*0x56c500*/
}
} // namespace gamemd

// 0x56ED40
namespace gamemd {
char globalHelper_06ED40(IUnknown * aP0, int a2)
{
  int v2; // eax
  int16_t v3; // dx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  uint8_t v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x56ed49*/
  v3 = (&dword_89F688)[v2]; /*0x56ed4c*/
  IDA_LOWORD(v2) = ((short *)aP0)[1] + IDA_HIWORD((&dword_89F688)[v2]); /*0x56ed62*/
  IDA_LOWORD(a2) = *(short *)aP0 + v3; /*0x56ed66*/
  IDA_HIWORD(a2) = v2; /*0x56ed6e*/
  v4 = (int16_t)a2 + ((int16_t)v2 << 9); /*0x56ed7d*/
  if ( v4 >= 0x40000 || (v5 = *(unsigned int **)(dword_87F924 + 4 * v4)) == 0 ) /*0x56ed97*/
  {
    dword_ABDC74 = a2; /*0x56ed99*/
    v5 = (unsigned int *)(unk_ABDC50); /*0x56ed9f*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x56edab*/
  {
    v6 = *((unsigned char *)v5 + 286); /*0x56edad*/
    if ( v6 <= 3u ) /*0x56edb6*/
    {
      *((unsigned char *)v5 + 286) = 4; /*0x56edc6*/
    }
    else if ( v6 == 5 ) /*0x56edbb*/
    {
      *((unsigned char *)v5 + 286) = 6; /*0x56edbd*/
    }
  }
  v7 = v5[14] - g_TerrainBridgeIndex + 1; /*0x56edde*/
  if ( v7 == dword_ABC1E8 || v7 == dword_AA0E38 ) /*0x56ede9*/
  {
    IDA_LOBYTE(v7) = (unsigned char)(Cell::UpdateTileType((short *)((IUnknown *)((int16_t *)&a2)), (int)((IUnknown *)( 1)), 0)); /*0x56ee37*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x56edf3*/
  {
    IDA_LOBYTE(v7) = (unsigned char)(Cell::SetTileType((short *)((IUnknown *)((int16_t *)&a2)), (int)((IUnknown *)( g_TerrainBridgeIndex + g_TerrainSoundTable2)), (int)((IUnknown *)( -1)),(int)(-1), 0)); /*0x56ee03*/
  }
  else if ( v7 == g_TerrainSoundTable2 + 2 ) /*0x56ee13*/
  {
    IDA_LOBYTE(v7) = (unsigned char)(Cell::SetTileType((short *)((IUnknown *)((int16_t *)&a2)), (int)((IUnknown *)( g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2)), (int)((IUnknown *)( -1)),(int)(-1), 0)); /*0x56ee25*/
  }
  return v7; /*0x56ee08*/
}
} // namespace gamemd

// 0x56EE40
namespace gamemd {
char globalHelper_06EE40(IUnknown * aP0, int a2)
{
  int v2; // eax
  int16_t v3; // dx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  uint8_t v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x56ee49*/
  v3 = (&dword_89F688)[v2]; /*0x56ee4c*/
  IDA_LOWORD(v2) = ((short *)aP0)[1] + IDA_HIWORD((&dword_89F688)[v2]); /*0x56ee62*/
  IDA_LOWORD(a2) = *(short *)aP0 + v3; /*0x56ee66*/
  IDA_HIWORD(a2) = v2; /*0x56ee6e*/
  v4 = (int16_t)a2 + ((int16_t)v2 << 9); /*0x56ee7d*/
  if ( v4 >= 0x40000 || (v5 = *(unsigned int **)(dword_87F924 + 4 * v4)) == 0 ) /*0x56ee97*/
  {
    dword_ABDC74 = a2; /*0x56ee99*/
    v5 = (unsigned int *)(unk_ABDC50); /*0x56ee9f*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x56eeab*/
  {
    v6 = *((unsigned char *)v5 + 286); /*0x56eead*/
    if ( v6 <= 3u ) /*0x56eeb6*/
    {
      *((unsigned char *)v5 + 286) = 5; /*0x56eec6*/
    }
    else if ( v6 == 4 ) /*0x56eebb*/
    {
      *((unsigned char *)v5 + 286) = 6; /*0x56eebd*/
    }
  }
  v7 = v5[14] - g_TerrainBridgeIndex + 1; /*0x56eede*/
  if ( v7 == dword_ABC2B4 || v7 == dword_AA1130 ) /*0x56eee9*/
  {
    IDA_LOBYTE(v7) = (unsigned char)(Cell::UpdateTileType((short *)((IUnknown *)((int16_t *)&a2)), (int)((IUnknown *)( 1)), 0)); /*0x56ef39*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x56eef3*/
  {
    IDA_LOBYTE(v7) = (unsigned char)(Cell::SetTileType((short *)((IUnknown *)((int16_t *)&a2)), (int)((IUnknown *)( g_TerrainSoundTable2 + g_TerrainBridgeIndex + 1)), (int)((IUnknown *)( -1)),(int)(-1), 0)); /*0x56ef05*/
  }
  else if ( v7 == g_TerrainSoundTable2 + 1 ) /*0x56ef15*/
  {
    IDA_LOBYTE(v7) = (unsigned char)(Cell::SetTileType((short *)((IUnknown *)((int16_t *)&a2)), (int)((IUnknown *)( g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2)), (int)((IUnknown *)( -1)),(int)(-1), 0)); /*0x56ef27*/
  }
  return v7; /*0x56ef0a*/
}
} // namespace gamemd

// 0x56F690
namespace gamemd {
char globalHelper_06F690(IUnknown * aP0, IUnknown * aP1)
{
  int v2; // eax
  int16_t v3; // dx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  uint8_t v6; // dl
  int v7; // eax

  v2 = aP1 & 7; /*0x56f699*/
  v3 = (&dword_89F688)[v2]; /*0x56f69c*/
  IDA_LOWORD(v2) = ((short *)aP0)[1] + IDA_HIWORD((&dword_89F688)[v2]); /*0x56f6b2*/
  IDA_LOWORD(aP1) = *(short *)aP0 + v3; /*0x56f6b6*/
  IDA_HIWORD(aP1) = v2; /*0x56f6be*/
  v4 = (int16_t)aP1 + ((int16_t)v2 << 9); /*0x56f6cd*/
  if ( v4 >= 0x40000 || (v5 = *(unsigned int **)(dword_87F924 + 4 * v4)) == 0 ) /*0x56f6e7*/
  {
    dword_ABDC74 = (unsigned int)(aP1); /*0x56f6e9*/
    v5 = (unsigned int *)(unk_ABDC50); /*0x56f6ef*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x56f6fb*/
  {
    v6 = *((unsigned char *)v5 + 286); /*0x56f6fd*/
    if ( v6 >= 9u ) /*0x56f706*/
    {
      if ( v6 <= 0xCu ) /*0x56f70b*/
      {
        *((unsigned char *)v5 + 286) = 14; /*0x56f71b*/
      }
      else if ( v6 == 13 ) /*0x56f710*/
      {
        *((unsigned char *)v5 + 286) = 15; /*0x56f712*/
      }
    }
  }
  v7 = v5[14] - g_TerrainBridgeIndex + 1; /*0x56f733*/
  if ( v7 == dword_ABC1D0 || v7 == dword_AA1540 ) /*0x56f73e*/
  {
    IDA_LOBYTE(v7) = (unsigned char)(Cell::UpdateTileType((short *)((IUnknown *)((int16_t *)&aP1)), (int)((IUnknown *)( 1)), 0)); /*0x56f78c*/
  }
  else if ( v7 == g_TerrainSoundConfig ) /*0x56f748*/
  {
    IDA_LOBYTE(v7) = (unsigned char)(Cell::SetTileType((short *)((IUnknown *)((int16_t *)&aP1)), (int)((IUnknown *)( g_TerrainBridgeIndex + g_TerrainSoundConfig)), (int)((IUnknown *)( -1)),(int)(-1), 0)); /*0x56f758*/
  }
  else if ( v7 == g_TerrainSoundConfig + 2 ) /*0x56f768*/
  {
    IDA_LOBYTE(v7) = (unsigned char)(Cell::SetTileType((short *)((IUnknown *)((int16_t *)&aP1)), (int)((IUnknown *)( g_TerrainSoundConfig + g_TerrainBridgeIndex + 2)), (int)((IUnknown *)( -1)),(int)(-1), 0)); /*0x56f77a*/
  }
  return v7; /*0x56f75d*/
}
} // namespace gamemd

// 0x56F7A0
namespace gamemd {
char sub_56F7A0(unsigned short * a1, int a2)
{
  int v2; // eax
  int16_t v3; // dx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  uint8_t v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x56f7a9*/
  v3 = (&dword_89F688)[v2]; /*0x56f7ac*/
  IDA_LOWORD(v2) = a1[1] + IDA_HIWORD((&dword_89F688)[v2]); /*0x56f7c2*/
  IDA_LOWORD(a2) = *a1 + v3; /*0x56f7c6*/
  IDA_HIWORD(a2) = v2; /*0x56f7ce*/
  v4 = (int16_t)a2 + ((int16_t)v2 << 9); /*0x56f7dd*/
  if ( v4 >= 0x40000 || (v5 = *(unsigned int **)(dword_87F924 + 4 * v4)) == 0 ) /*0x56f7f7*/
  {
    dword_ABDC74 = a2; /*0x56f7f9*/
    v5 = (unsigned int *)(unk_ABDC50); /*0x56f7ff*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x56f80b*/
  {
    v6 = *((unsigned char *)v5 + 286); /*0x56f80d*/
    if ( v6 >= 9u ) /*0x56f816*/
    {
      if ( v6 <= 0xCu ) /*0x56f81b*/
      {
        *((unsigned char *)v5 + 286) = 13; /*0x56f82b*/
      }
      else if ( v6 == 14 ) /*0x56f820*/
      {
        *((unsigned char *)v5 + 286) = 15; /*0x56f822*/
      }
    }
  }
  v7 = v5[14] - g_TerrainBridgeIndex + 1; /*0x56f843*/
  if ( v7 == dword_AA1548 || v7 == dword_AA0740 ) /*0x56f84e*/
  {
    IDA_LOBYTE(v7) = (unsigned char)(Cell::UpdateTileType((short *)((IUnknown *)((int16_t *)&a2)), (int)((IUnknown *)( 1)), 0)); /*0x56f89e*/
  }
  else if ( v7 == g_TerrainSoundConfig ) /*0x56f858*/
  {
    IDA_LOBYTE(v7) = (unsigned char)(Cell::SetTileType((short *)((IUnknown *)((int16_t *)&a2)), (int)((IUnknown *)( g_TerrainSoundConfig + g_TerrainBridgeIndex + 1)), (int)((IUnknown *)( -1)),(int)(-1), 0)); /*0x56f86a*/
  }
  else if ( v7 == g_TerrainSoundConfig + 1 ) /*0x56f87a*/
  {
    IDA_LOBYTE(v7) = (unsigned char)(Cell::SetTileType((short *)((IUnknown *)((int16_t *)&a2)), (int)((IUnknown *)( g_TerrainSoundConfig + g_TerrainBridgeIndex + 2)), (int)((IUnknown *)( -1)),(int)(-1), 0)); /*0x56f88c*/
  }
  return v7; /*0x56f86f*/
}
} // namespace gamemd
