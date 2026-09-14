// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_724000_e4.hpp"

// 0x777420
namespace gamemd {
HWND sub_777420()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND sub_777420()
{
  int v0; // ecx
  void *v1; // ecx
  HWND result; // eax
  HWND Current; // eax
  HWND v4; // eax

  Debug::Log(); /*0x777425*/
  sub_407040(v0); /*0x77742d*/
  Debug::Log(); /*0x77744b*/
  if ( MEMORY[0x887640] && byte_B73560 == 1 && !MEMORY[0xA8ED6B] ) /*0x77746d*/
    (*(void (**)(void))(*(_DWORD *)MEMORY[0x887640] + 24))(); /*0x777471*/
  if ( !MEMORY[0x89F978] ) /*0x77747c*/
  {
    if ( MEMORY[0x887310] ) /*0x77748a*/
      DSurface::RestoreIfLost((int *)MEMORY[0x887310]); /*0x77748c*/
    if ( MEMORY[0x88730C] ) /*0x777499*/
      DSurface::RestoreIfLost((int *)MEMORY[0x88730C]); /*0x77749b*/
    if ( MEMORY[0x88731C] /*0x7774c7*/
      && DSurface::RestoreIfLost((int *)MEMORY[0x88731C])
      && (!MEMORY[0xA8ED5C] || (int)MEMORY[0xA8ED84] > 16) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x88731C] + 24))(MEMORY[0x88731C], 0); /*0x7774d3*/
    }
    if ( MEMORY[0x8872FC] /*0x7774f8*/
      && DSurface::RestoreIfLost((int *)MEMORY[0x8872FC])
      && (!MEMORY[0xA8ED5C] || (int)MEMORY[0xA8ED84] > 16) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x8872FC] + 24))(MEMORY[0x8872FC], 0); /*0x777504*/
    }
    if ( MEMORY[0x887300] ) /*0x77750f*/
    {
      if ( DSurface::RestoreIfLost((int *)MEMORY[0x887300]) ) /*0x777511*/
      {
        MEMORY[0x884B8F] = 1; /*0x77751f*/
        if ( !MEMORY[0xA8ED5C] || (int)MEMORY[0xA8ED84] > 16 ) /*0x777530*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x887300] + 24))(MEMORY[0x887300], 0); /*0x77753c*/
      }
    }
    if ( MEMORY[0x887308] /*0x777561*/
      && DSurface::RestoreIfLost((int *)MEMORY[0x887308])
      && (!MEMORY[0xA8ED5C] || (int)MEMORY[0xA8ED84] > 16) )
    {
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)MEMORY[0x887308] + 20))( /*0x777572*/
        MEMORY[0x887308],
        &MEMORY[0x886FB0],
        0);
    }
  }
  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x77757c*/
  InvalidateRect(g_hWnd, 0, 0); /*0x77758c*/
  LOBYTE(v1) = 0; /*0x777592*/
  AsyncIO::Read(v1); /*0x777594*/
  result = Dialog::GetCurrent(); /*0x777599*/
  if ( result ) /*0x7775a1*/
  {
    Current = Dialog::GetCurrent(); /*0x7775a3*/
    SetActiveWindow(Current); /*0x7775a9*/
    v4 = Dialog::GetCurrent(); /*0x7775af*/
    return SetFocus(v4); /*0x7775b5*/
  }
  return result; /*0x7775bb*/
}
}
} // namespace gamemd

// 0x5C09A0
namespace gamemd {
int sub_5C09A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5C09A0()
{
  int result; // eax

  if ( MEMORY[0xABF3F8] ) /*0x5c09a8*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xABF3F8] + 40))(MEMORY[0xABF3F8]); /*0x5c09ac*/
  return result; /*0x5c09af*/
}
}
} // namespace gamemd

// 0x724000
namespace gamemd {
char * E4Recv_724000::sub_724000(int a2)
{
{
    char *v3;
    int v4;
    v3 = this + 564;
    this->M4 = 0;
    this->M8 = a2;
    this->M12 = 0;
    this->M552 = 1000;
    this->M560 = 10000;
    *((int *)(v3) + 1) = 0;
    *((int *)(v3) + 2) = 0;
    v3[12] = 1;
    v3[13] = 0;
    *(int *)v3 = &vt_DynamicVectorClass_ToolTip_const;
    *((int *)(v3) + 5) = 10;
    *((int *)(v3) + 4) = 0;
    this->M588 = 0;
    this->M592 = 0;
    this->M596 = 0;
    this->M600 = 0;
    this->M604 = 0;
    v4 = *(int *)v3;
    *(int *)this = &vt_ToolTipManager;
    (*(void (__thiscall **)(char *))(v4 + 12))(v3);
    __3_YAXPAX_Z(*((void **)(this) + 147));
    this->M588 = 0;
    this->M592 = 0;
    this->M596 = 0;
    this->M600 = 0;
    this->M604 = 0;
    return this;
}
}
} // namespace gamemd

// 0x5C0980
namespace gamemd {
BOOL sub_5C0980()
{
{
    return g_BigIntPool || DataGlobal_ABF3F8;
}
}
} // namespace gamemd
