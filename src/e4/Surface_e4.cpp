// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/StringVector_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5B6CD0_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/Surface_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SwizzleManagerClass_19_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/TaskForceClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/SyncDelay_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/FileSystem_e4.hpp"
#include "e4/classes/LightConvertClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/Char_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/Font_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/Property_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/TextGroup_e4.hpp"

// 0x411580
namespace gamemd {
int Surface::IsLocked()
{

  return this->LockCount != 0; /*0x41158a*/

}
} // namespace gamemd
// 0x5D1FD0
namespace gamemd {
unsigned int * Surface::CopyRect(int *aP1, void * a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D1FD0.json)
}
} // namespace gamemd
// 0x626C60
namespace gamemd {
int sub_626C60()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00626C60.json)
}
}
// 0x641DB0
namespace gamemd {  // G42.18c ns repair
AbstractClass * * Surface::LoadToSurfaceSHP(char *Source)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00641DB0.json)
}
}  // G42.18c ns repair
// 0x655250
namespace gamemd {  // G42.18c ns repair
int Surface::RenderRadar()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00655250.json)
}
}  // G42.18c ns repair
// 0x6BA3E0
namespace gamemd {  // G42.18c ns repair
int  Surface::TileBlit(INIClass * aP0, ObjectClass * aP1, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BA3E0.json)
}
}  // G42.18c ns repair
// 0x6BA580
namespace gamemd {  // G42.18c ns repair
int Surface::BlitTransparent(int * a0, ObjectClass * aP1, int a3, ObjectClass * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BA580.json)
}
}  // G42.18c ns repair
// 0x6BA690
namespace gamemd {  // G42.18c ns repair
int Surface::AlphaBlend(unsigned int * a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006BA690.json)
}
}  // G42.18c ns repair
// 0x707480
namespace gamemd {  // G42.18c ns repair
TechnoClass * * Surface::BlitTechnoTo(short * a1, TechnoClass * aP2, TechnoClass * aP3, TechnoClass * aP4, AbstractClass * aP5, TechnoClass * aP6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00707480.json)
}
}  // G42.18c ns repair
// 0x7602E0
namespace gamemd {  // G42.18c ns repair
void   Surface::RenderToSurfaceVoxel(unsigned int * a2, int * a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007602E0.json)
}
}  // G42.18c ns repair
// 0x769330
namespace gamemd {  // G42.18c ns repair
int Surface::PixelToIndex(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00769330.json)
}
}  // G42.18c ns repair
// 0x7BD690
namespace gamemd {  // G42.18c ns repair
int Surface::CommitSurfaceBuffersAudio()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BD690.json)
}
}  // G42.18c ns repair
// 0x411510
namespace gamemd {  // G42.18c ns repair
unsigned int *  Surface::GetRect(unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00411510.json)
}
}  // G42.18c ns repair
// 0x411540
namespace gamemd {  // G42.18c ns repair
int Surface::GetWidth()
{

  return this->Width; /*0x411543*/

}
}  // G42.18c ns repair
// 0x411550
namespace gamemd {  // G42.18c ns repair
int Surface::GetHeight()
{

  return this->Height; /*0x411553*/

}
}  // G42.18c ns repair
// 0x4115C0
namespace gamemd {  // G42.18c ns repair
char Surface::StubReturnFalse()
{

  return 0; /*0x4115c2*/

}
}  // G42.18c ns repair
// 0x4A4780
namespace gamemd {  // G42.18c ns repair
LPDIRECTDRAW Surface::CreateSurfacePalette(AbstractClass * Src)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A4780.json)
}
}  // G42.18c ns repair
// 0x4AEC60
namespace gamemd {  // G42.18c ns repair
unsigned int * Surface::Construct(ObjectClass * aP1, IUnknown * aP2, void *a3, void *a4, void *a5, void *a6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AEC60.json)
}
}  // G42.18c ns repair
// 0x620F60
namespace gamemd {
int Surface_Render(ObjectClass * aP0, unsigned short * a1, int * yTop, unsigned char * a3, int aP1, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00620F60.json)
}
} // namespace gamemd
