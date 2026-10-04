// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CursorPositionCommandClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"

// 0x4A3370
namespace gamemd {
int DDraw::ReleaseSurfaces()
{

  int v2; // eax
  int result; // eax

  v2 = this->u32_74; /*0x4a3373*/
  if ( v2 ) /*0x4a3378*/
  {
    (*(void (**)(int))(*(unsigned int *)v2 + 8))(v2); /*0x4a337d*/
    this->u32_74 = 0; /*0x4a3380*/
  }
  result = this->u32_70; /*0x4a3387*/
  if ( result ) /*0x4a338c*/
  {
    result = (*(int (**)(unsigned int))(*(unsigned int *)result + 8))(this->u32_70); /*0x4a3391*/
    this->u32_70 = 0; /*0x4a3394*/
  }
  return result; /*0x4a339b*/

}
} // namespace gamemd
// 0x4A3640
namespace gamemd {
void DDraw::Init()
{

  this->q18000 = 0; /*0x4a3640*/

}
} // namespace gamemd
// 0x4A3E40
namespace gamemd {
int DDraw::CapabilityCheck()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A3E40)
}
} // namespace gamemd
// 0x4A4830
namespace gamemd {
int DDraw::WaitForIdle()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A4830)
}
} // namespace gamemd
// 0x4C19B0
namespace gamemd {
int DDraw::CleanupSurfaces()
{

  StructTable *v1; // esi
  DDraw *v2; // esi
  DDraw *v3; // esi
  AudioStream *v4; // esi
  int result; // eax

  v1 = (gamemd::StructTable *)(dword_8A0E10);
  if ( dword_8A0E10 ) /*0x4c19bc*/
  {
    ((DDraw*)((DDraw *)dword_8A0E10))->Init(); /*0x4c19c0*/
    __3_YAXPAX_Z(v1); /*0x4c19c6*/
    dword_8A0E10 = 0; /*0x4c19ce*/
  }
  v2 = (gamemd::DDraw *)(dword_8A0E0C);
  if ( dword_8A0E0C ) /*0x4c19dc*/
  {
    ((DDraw *)(dword_8A0E0C))->ReleaseSurfaces(); /*0x4c19e0*/
    __3_YAXPAX_Z(v2); /*0x4c19e6*/
    dword_8A0E0C = 0; /*0x4c19ee*/
  }
  v3 = (gamemd::DDraw *)(dword_8A0E08);
  if ( dword_8A0E08 ) /*0x4c19fc*/
  {
    ((DDraw *)(dword_8A0E08))->ReleaseSurfaces(); /*0x4c1a00*/
    __3_YAXPAX_Z(v3); /*0x4c1a06*/
    dword_8A0E08 = 0; /*0x4c1a0e*/
  }
  v4 = (gamemd::AudioStream *)(dword_8A0E04);
  if ( dword_8A0E04 ) /*0x4c1a1c*/
  {
    ((DDraw *)((DDraw *)dword_8A0E04))->ReleaseSurfaces(); /*0x4c1a20*/
    __3_YAXPAX_Z(v4); /*0x4c1a26*/
    dword_8A0E04 = 0; /*0x4c1a2e*/
  }
  if ( HIDWORD(g_DrawColorState) ) /*0x4c1a3b*/
  {
    (*(void (**)(unsigned int))(*(unsigned int *)HIDWORD(g_DrawColorState) + 8))(HIDWORD(g_DrawColorState)); /*0x4c1a40*/
    HIDWORD(g_DrawColorState) = 0; /*0x4c1a43*/
  }
  if ( (unsigned int)g_DrawColorState ) /*0x4c1a50*/
  {
    (*(void (**)(unsigned int))(*(unsigned int *)g_DrawColorState + 8))(g_DrawColorState); /*0x4c1a55*/
    LODWORD(g_DrawColorState) = 0; /*0x4c1a58*/
  }
  if ( dword_8A0DF4 ) /*0x4c1a65*/
  {
    (*(void (**)(int))(*(unsigned int *)dword_8A0DF4 + 8))(dword_8A0DF4); /*0x4c1a6a*/
    dword_8A0DF4 = 0; /*0x4c1a6d*/
  }
  result = dword_8A0E00; /*0x4c1a73*/
  if ( dword_8A0E00 ) /*0x4c1a7a*/
  {
    result = (*(int (**)(int))(*(unsigned int *)dword_8A0E00 + 8))(dword_8A0E00); /*0x4c1a7f*/
    dword_8A0E00 = 0; /*0x4c1a82*/
  }
  return result; /*0x4c1a88*/

}
} // namespace gamemd
// 0x5D2530
namespace gamemd {
int DDraw::HandleSuspend()
{

  int result; // eax
  int i; // edi
  int v4; // ecx
  int j; // edi
  int v6; // ecx

  LOBYTE(result) = *((unsigned int *)((char *)&stru_A8EB00 + 412)); /*0x5d2530*/
  if ( *((unsigned int *)((char *)&stru_A8EB00 + 412)) != 1 ) /*0x5d253b*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x5d2546*/
    for ( i = 0; i < this->u32_28; ++i ) /*0x5d2555*/
    {
      v4 = *(unsigned int *)(this->u32_1C + 4 * i); /*0x5d255a*/
      (*(void (**)(int))(*(unsigned int *)v4 + 8))(v4); /*0x5d255f*/
    }
    while ( !((unsigned int *)&stru_A8EB00)[412] ) /*0x5d2571*/
    {
      ((gamemd::Debug *)this)->Log(); /*0x5d257e*/
      Sleep(0x1F4u); /*0x5d258b*/
      MessageLoop(); /*0x5d258d*/
    }
    ((gamemd::Debug *)this)->Log(); /*0x5d25a0*/
    result = this->u32_28; /*0x5d25a5*/
    for ( j = 0; j < result; ++j ) /*0x5d25af*/
    {
      v6 = *(unsigned int *)(this->u32_1C + 4 * j); /*0x5d25b4*/
      (*(void (**)(int))(*(unsigned int *)v6 + 12))(v6); /*0x5d25b9*/
      result = this->u32_28; /*0x5d25bc*/
    }
  }
  return result; /*0x5d25c4*/

}
} // namespace gamemd
// 0x4A3DD0
namespace gamemd {
void DDraw::LogError(UINT, int a2)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A3DD0)
}
} // namespace gamemd
// 0x4A4620
namespace gamemd {
char DDraw::CheckCapabilities()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A4620)
}
} // namespace gamemd
// 0x4BBC90
namespace gamemd {
int DDraw_GetStatus()
{

  return dword_8205D0; /*0x4bbc95*/

}
} // namespace gamemd