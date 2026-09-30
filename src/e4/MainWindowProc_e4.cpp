// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_724000_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/AsyncIO_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/Main_e4.hpp"
#include "app/cmdline.hpp"

// 0x777420
namespace gamemd {
AbstractClass * * sub_777420()
{
  int v1; // ecx
  AsyncIO *v2; // ecx
  int result; // eax
  HWND Current; // eax
  HWND v5; // eax

    Debug::Log();
  sub_407040(v1); /*0x77742d*/
    Debug::Log();
  if ( stru_887598.lineTrailer && byte_B73560 == 1 && !stru_A8EB00.?[391] ) /*0x77746d*/
    (*(void (**)(void))(*(unsigned int *)stru_887598.lineTrailer + 24))(); /*0x777471*/
  if ( !g_DDraw_Initialized ) /*0x77747c*/
  {
    if ( DSurface_Alternate ) /*0x77748a*/
      DSurface::RestoreIfLost(DSurface_Alternate); /*0x77748c*/
    if ( g_DSurface_Hidden ) /*0x777499*/
      DSurface::RestoreIfLost((DSurface *)g_DSurface_Hidden); /*0x77749b*/
    if ( DSurface_Composite /*0x7774c7*/
// 0x4bb000
      && DSurface::RestoreIfLost((DSurface *)DSurface_Composite)
      && (!stru_A8EB00.?[376] || *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) > 16) )
    {
      (*(void (**)(AudioStream *, unsigned int))(*(unsigned int *)DSurface_Composite->__pad_0 + 24))( /*0x7774d3*/
        DSurface_Composite,
        0);
    }
    if ( DSurface_Tile /*0x7774f8*/
// 0x4bb000
      && DSurface::RestoreIfLost(DSurface_Tile)
      && (!stru_A8EB00.?[376] || *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) > 16) )
    {
      (*((void (**)(DSurface *, unsigned int))DSurface_Tile->DSurface_field_0x0 + 6))(DSurface_Tile, 0); /*0x777504*/
    }
    if ( DSurface_Sidebar ) /*0x77750f*/
    {
      if ( DSurface::RestoreIfLost(DSurface_Sidebar) ) /*0x777511*/
      {
        g_CameoRenderFlag = 1; /*0x77751f*/
        if ( !stru_A8EB00.?[376] || *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) > 16 ) /*0x777530*/
          (*((void (**)(DSurface *, unsigned int))DSurface_Sidebar->DSurface_field_0x0 + 6))(DSurface_Sidebar, 0); /*0x77753c*/
      }
    }
    if ( g_DSurface_Primary /*0x777561*/
// 0x4bb000
      && DSurface::RestoreIfLost(g_DSurface_Primary)
      && (!stru_A8EB00.?[376] || *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) > 16) )
    {
      (*((void (**)(DSurface *, char *, unsigned int))g_DSurface_Primary->DSurface_field_0x0 + 5))( /*0x777572*/
        g_DSurface_Primary,
        &DSurface_ViewBounds.__pad_8[8],
        0);
    }
  }
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x77757c*/
  InvalidateRect(g_hWnd, 0, 0); /*0x77758c*/
  IDA_LOBYTE(v2) = 0; /*0x777592*/
  AsyncIO::Read(v2); /*0x777594*/
    result = Dialog::GetCurrent();
  if ( result ) /*0x7775a1*/
  {
        Current = Dialog::GetCurrent();
    SetActiveWindow(Current); /*0x7775a9*/
        v4 = Dialog::GetCurrent();
    return (int)SetFocus(v5); /*0x7775b5*/
  }
  return result; /*0x7775bb*/
}
}
// 0x5C09A0
namespace gamemd {
void sub_5C09A0()
{
  int result; // eax

  if ( g_MissionQueueFrame.localVariables[605] ) /*0x5c09a8*/
    return (*(int (**)(int))(*(unsigned int *)g_MissionQueueFrame.localVariables[605] + 40))(g_MissionQueueFrame.localVariables[605]); /*0x5c09ac*/
  return result; /*0x5c09af*/
}
}
// 0x5C0980
namespace gamemd {
bool sub_5C0980()
{
  return dword_ABF3F4 || dword_ABF3F8; /*0x5c0994*/
}
} // namespace gamemd

// 0x724000
namespace gamemd {
char * E4Recv_724000::sub_724000(int a2)
{
  char *v3; // ecx
  int v4; // edx

  v3 = (char *)(&this->u32_8D0);
  this->M4 = (unsigned int)(0);
  this->M8 = (unsigned int)(a2);
    *((unsigned int *)this + 48) = 0;
    *((unsigned int *)this + 138) = 1000;
  this->M560 = (char *)(10000);
  *((unsigned int *)v3 + 1) = 0; /*0x72402d*/
  *((unsigned int *)v3 + 2) = 0; /*0x724030*/
  v3[12] = 1; /*0x724033*/
  v3[13] = 0; /*0x724037*/
  *((unsigned int *)v3 + 5) = 10; /*0x724040*/
  *((unsigned int *)v3 + 4) = 0; /*0x724047*/
    *((unsigned int *)this + 147) = 0;
    *((unsigned int *)this + 148) = 0;
    *((unsigned int *)this + 149) = 0;
    *((unsigned int *)this + 2400) = 0;
    *((unsigned int *)this + 151) = 0;
  v4 = *(unsigned int *)v3; /*0x724068*/
  (*(void (**)(char *))(v4 + 12))(v3); /*0x724070*/
  RA2_OPDEL(this->M588); /*0x72407a*/
    *((unsigned int *)this + 147) = 0;
    *((unsigned int *)this + 148) = 0;
    *((unsigned int *)this + 149) = 0;
    *((unsigned int *)this + 2400) = 0;
    *((unsigned int *)this + 151) = 0;
  return this; /*0x7240a2*/
}
} // namespace gamemd
