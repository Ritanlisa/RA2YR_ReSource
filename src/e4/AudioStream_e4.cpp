// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/RefCount_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/DListNode_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/Socket_e4.hpp"
#include "e4/classes/Voice_e4.hpp"
#include "e4/classes/AudioSample_e4.hpp"
#include "e4/classes/Struct_e4.hpp"

// 0x401910
namespace gamemd {
int MouseClass::ReleaseSubsystem()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00401910.json)
}
}
// 0x4026B0
namespace gamemd {
int AudioStream::Stop()
{

  return (*(int (**)(void))(this->AudioStream_field_0xD4[0] + 44))();

}
}
// 0x4026F0
namespace gamemd {
int MouseClass::ReleaseChannel()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004026F0.json)
}
// 0x4033C0
namespace gamemd {
void MouseClass::DestroyAll(void * Block)
{
    (void)Block;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004033C0.json)
}
}
// 0x403820
namespace gamemd {
int MouseClass::Reset()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00403820.json)
}
}
// 0x4038A0
namespace gamemd {
int MouseClass::ResetChannel(int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004038A0.json)
}
}
// 0x4038C0
namespace gamemd {
int MouseClass::ResetChannel2(int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004038C0.json)
}
}
// 0x404700
namespace gamemd {
int MouseClass::SetupPlayback()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00404700.json)
}
}
// 0x4047B0
namespace gamemd {
int MouseClass::SelectRandom()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004047B0.json)
}
}
// 0x404E70
namespace gamemd {
void MouseClass::CleanupChannels()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00404E70.json)
}
}
// 0x4079C0
namespace gamemd {
int MouseClass::ReadStreamAndSyncPosition()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004079C0.json)
}
}
// 0x407A30
namespace gamemd {
int MouseClass::SetPlaybackCallback()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00407A30.json)
}
}
// 0x407A60
namespace gamemd {
int MouseClass::ProcessCallback(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00407A60.json)
}
}
// 0x4084E0
namespace gamemd {
void MouseClass::InitNodeFields()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004084E0.json)
}
}
// 0x408D50
namespace gamemd {
int MouseClass::GetChannel()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00408D50.json)
}
}
// 0x409310
namespace gamemd {
int MouseClass::ReadStreamAndReturn(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00409310.json)
}
}
// 0x4A33A0
namespace gamemd {
int MouseClass::ReadSamples(const void * a2, void *a2_2)
{
    (void)a2; (void)a2_2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A33A0.json)
}
}
// 0x4BEAC0
namespace gamemd {
MouseClass * * MouseClass::DrawWaveform(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, int a6, int a7, int a8)
{
    (void)aP1; (void)aP2; (void)aP3; (void)aP4; (void)a6; (void)a7; (void)a8; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004BEAC0.json)
}
}
// 0x7BD270
namespace gamemd {
int MouseClass::SetFlag4C()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BD270.json)
}
}
// 0x7BD2D0
namespace gamemd {
int AudioStream::CalcReadPos()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BD2D0.json)
}
}
// 0x7BEA80
namespace gamemd {
int MouseClass::ProcessStream()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BEA80.json)
}
}
// 0x7C3960
namespace gamemd {
unsigned int MouseClass::GetPosition()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x007C3960.json)
}
}
// 0x402550
namespace gamemd {
void MouseClass::Destructor(unsigned int * Block)
{
    (void)Block;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00402550.json)
}
} // namespace gamemd

// 0x402800
namespace gamemd {
int MouseClass::CheckFormatChanged(int a1, const void * a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00402800.json)
}
} // namespace gamemd

// 0x4028B0
namespace gamemd {
int MouseClass::InitListAndCounters(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004028B0.json)
}
} // namespace gamemd

// 0x404FD0
namespace gamemd {
int MouseClass::UpdateTimers()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00404FD0.json)
}
} // namespace gamemd

// 0x405040
namespace gamemd {
int MouseClass::UpdateCountdowners()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00405040.json)
}
} // namespace gamemd

// 0x407860
namespace gamemd {
char * MouseClass::Constructor(uint64_t)
{
    (void)uint64_t; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00407860.json)
}
} // namespace gamemd
