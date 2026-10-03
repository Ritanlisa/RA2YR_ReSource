// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/BinkMovie_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Bink_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BinkMovieHandle_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/BitTextClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/BlitTransLucent25Alpha_ushort_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/FileStraw_e4.hpp"
#include "e4/classes/Font_e4.hpp"
#include "e4/classes/Property_e4.hpp"
#include "e4/classes/TextGroup_e4.hpp"
#include "e4/classes/Text_e4.hpp"

// 0x432690
namespace gamemd {
unsigned int * Close(char *FullPath)
{
    (void)FullPath; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00432690.json)
}
}
// 0x4326C0
namespace gamemd {
wchar_t * Open(char *FullPath, int a3)
{
    (void)FullPath; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004326C0.json)
}
}
// 0x432700
namespace gamemd {
int Stop()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00432700.json)
}
}
// 0x432750
namespace gamemd {
AbstractClass * * InitFromFile(LPCSTR * FullPath, void *a2_1)
{
    (void)FullPath; (void)a2_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00432750.json)
}
}
// 0x432C30
namespace gamemd {
int BinkMovie::Pause(unsigned char a2)
{

  return BinkPause((void *)(this->BinkMovie_field_0x4[0]), a2); /*0x432c44*/

}
}
// 0x432C50
namespace gamemd {
int BinkMovie::IsAtEnd(void *a1_1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00432C50.json)
}
}
// 0x432C70
namespace gamemd {
int Play()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00432C70.json)
}
}
// 0x432E40
namespace gamemd {
int RenderLoop(int aP1, int a3, int a4)
{
    (void)aP1; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00432E40.json)
}
}
// 0x433040
namespace gamemd {
int RenderFrameToSurface()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00433040.json)
}
}
// 0x4331F0
namespace gamemd {
unsigned int * RenderSingleFrame(int aP1, int a3, int a4, char a5)
{
    (void)aP1; (void)a3; (void)a4; (void)a5; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004331F0.json)
}
}
// 0x433270
namespace gamemd {
unsigned int * BlitToTarget(int aP1)
{
    (void)aP1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00433270.json)
}
}
// 0x433330
namespace gamemd {
int AdjustSurfaceFormat(int aP1)
{
    (void)aP1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00433330.json)
}
}
// 0x5C01F0
namespace gamemd {
int Cleanup(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C01F0.json)
}
}
// 0x6033F0
namespace gamemd {
int HandleKeyboard(int a1, HWND a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006033F0.json)
}
}
// 0x6153E0
namespace gamemd {
AbstractClass * * WndProc(HWND hWnd, UINT Msg, int wParam, LPARAM lParam)
{
    (void)hWnd; (void)Msg; (void)wParam; (void)lParam; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006153E0.json)
}
} // namespace gamemd

// 0x6C9930
namespace gamemd {
int Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C9930.json)
}
}
// 0x6C9AE0
namespace gamemd {
int FreeSurfaceTracker(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C9AE0.json)
}
}
// 0x6C9B40
namespace gamemd {
int InitKeyframeTracking(char * Source)
{
    (void)Source; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C9B40.json)
}
}
// 0x6C9C60
namespace gamemd {
int CheckKeyframeTransition(unsigned int aP1)
{
    (void)aP1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C9C60.json)
}
}
// 0x6C9D40
namespace gamemd {
AbstractClass * * ProcessKeyframe(ObjectClass * aP1)
{
    (void)aP1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C9D40.json)
}
}
// 0x6C9EC0
namespace gamemd {
unsigned int * VtableDispatch(int a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C9EC0.json)
}
}
// 0x6C99D0
namespace gamemd {
int * CreateSurfaceTracker(char * FullPath)
{
    (void)FullPath; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C99D0.json)
}
} // namespace gamemd
