// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Delegate_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/DamageArea_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"

// 0x480180
namespace gamemd {
AbstractClass * * DSurface::Process(void* aP1, int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x480180)
}
} // namespace gamemd
// 0x4BA5A0
namespace gamemd {
AbstractClass * DSurface::Construct(int aP1, int aP2, char aP3, char a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BA5A0.json)
}
} // namespace gamemd
// 0x4BA6B0
namespace gamemd {
AbstractClass * * DSurface::Destroy()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BA6B0.json)
}
} // namespace gamemd
// 0x4BA770
namespace gamemd {
AbstractClass * * DSurface::CreatePrimary()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BA770.json)
}
} // namespace gamemd
// 0x4BAC60
namespace gamemd {
unsigned int * DSurface::CreateBackBuffer(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BAC60.json)
}
} // namespace gamemd
// 0x4BAD60
namespace gamemd {
int DSurface::GetBytesPerPixel()
{

  return (int)this->DSurface_field_0x10; /*0x4bad63*/

}
} // namespace gamemd
// 0x4BB000
namespace gamemd {
int DSurface::RestoreIfLost()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BB000.json)
}
} // namespace gamemd
// 0x4BB0D0
namespace gamemd {
DSurface * * DSurface::Blit(int * a1, int * a2, unsigned int * a3, int * a4, DSurface * aP5, int a7, char a8)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BB0D0.json)
}
} // namespace gamemd
// 0x4BB620
namespace gamemd {
void* DSurface::FillRectEx(int a2, int a3, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BB620.json)
}
} // namespace gamemd
// 0x4BB830
namespace gamemd {
void DSurface_FillRectWithFlags(DSurface *aP0)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BB830.json)
}
}
// 0x4BBB00
namespace gamemd {  // G42.18c ns repair
void DSurface::BlitStretch(int a1, int a2, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BBB00.json)
}
}  // G42.18c ns repair
// 0x4BBCA0
namespace gamemd {  // G42.18c ns repair
Coord * * DSurface::DrawLineModulated(int * a1, int a2, int a3, unsigned int * a4, unsigned int * a5, int a6, int a7, int a8, char a9)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BBCA0.json)
}
}  // G42.18c ns repair
// 0x4BC750
namespace gamemd {  // G42.18c ns repair
Coord * * DSurface::DrawLineFaded(int a2, unsigned int * a3, int * a4, unsigned char * a5, int a6, int a7, char a8, float a9, char a10, char a11, float a12)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BC750.json)
}
}  // G42.18c ns repair

// 0x4BDF00
namespace gamemd {  // G42.18c ns repair
void* DSurface::DrawLineZBufColored(int a2, unsigned int * a3, unsigned int * a4, unsigned char * a5, float a6, int a7, int a8)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BDF00.json)
}
}  // G42.18c ns repair
// 0x4BF750
namespace gamemd {  // G42.18c ns repair
void* DSurface::DrawGradientLine(int a2, unsigned int * a3, unsigned int * a4, int a5, int a6, float * a7, float * a8)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BF750.json)
}
}  // G42.18c ns repair
// 0x4BFD30
namespace gamemd {  // G42.18c ns repair
int DSurface::DrawLineZBuf(int a1, int a2, int a3, unsigned int * a4, unsigned int * a5, unsigned short a6, int a7, int a8, char a9)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BFD30.json)
}
}  // G42.18c ns repair
// 0x4C0750
namespace gamemd {  // G42.18c ns repair
int DSurface::DrawDashedLineStipple(int * a2, int * a3, int16_t a4, int a5, int a6, char a7)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C0750.json)
}
}  // G42.18c ns repair
// 0x4C0E30
namespace gamemd {  // G42.18c ns repair
MouseClass * * DSurface::DrawStippledRect(unsigned int * a2, unsigned int * a3, int16_t a4, char a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C0E30.json)
}
}  // G42.18c ns repair
// 0x4C1AC0
namespace gamemd {  // G42.18c ns repair
void * DSurface::loc_4C1AC0(std::codecvt_base *a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C1AC0)
}
}  // G42.18c ns repair

// 0x5D1E70
namespace gamemd {  // G42.18c ns repair
ObjectClass * *  DSurface::RenderToSurface(int *aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D1E70.json)
}
}  // G42.18c ns repair
// 0x621B80
namespace gamemd {  // G42.18c ns repair
int  DSurface::FillRectWithColor(int * a0, ObjectClass * aP1, int16_t a3, uint8_t a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00621B80.json)
}
}  // G42.18c ns repair
// 0x7BD210
namespace gamemd {  // G42.18c ns repair
int DSurface::LockAndPrepareRect()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BD210.json)
}
}  // G42.18c ns repair
// 0x7BDF80
namespace gamemd {  // G42.18c ns repair
int DSurface::CommitBuffers()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BDF80.json)
}
}  // G42.18c ns repair
// 0x7C2C60
namespace gamemd {  // G42.18c ns repair
int DSurface::Flip()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C2C60.json)
}
}  // G42.18c ns repair
// 0x4BA480
namespace gamemd {  // G42.18c ns repair
long long DSurface::ConstructFromHandle()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BA480.json)
}
}  // G42.18c ns repair
// 0x4BB080
namespace gamemd {  // G42.18c ns repair
int DSurface::BlitPart(int a2, int a3, int a4, int a5, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BB080.json)
}
}  // G42.18c ns repair
// 0x4C1AB0
namespace gamemd {  // G42.18c ns repair
char DSurface::IsDSurface()
{

  return 1; /*0x4c1ab2*/

}
}  // G42.18c ns repair
// 0x5D1E50
namespace gamemd {  // G42.18c ns repair
int DSurface::Flip2()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D1E50.json)
}
}  // G42.18c ns repair
// 0x63D400
namespace gamemd {  // G42.18c ns repair
int DSurface::DrawMarker(AbstractClass * aP1, ObjectClass * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063D400.json)
}
}  // G42.18c ns repair
// 0x759E60
char DSurface::FlipIfNeeded()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00759E60.json)
}