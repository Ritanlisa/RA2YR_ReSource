// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/DListNode_e4.hpp"
#include "e4/classes/AudioFile_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/E4Recv_5E9340_e4.hpp"
#include "e4/classes/E4Recv_6C6B00_e4.hpp"
#include "e4/classes/E4Recv_6C8870_e4.hpp"
#include "e4/classes/E4Recv_76BF00_e4.hpp"
#include "e4/classes/E4Recv_7BD170_e4.hpp"
#include "e4/classes/E4Recv_7BD290_e4.hpp"
#include "e4/classes/E4Recv_7BD2B0_e4.hpp"
#include "e4/classes/E4Recv_7BE4A0_e4.hpp"
#include "e4/classes/E4Recv_7BE660_e4.hpp"
#include "e4/classes/E4Recv_7BE670_e4.hpp"
#include "e4/classes/E4Recv_7C0490_e4.hpp"
#include "e4/classes/E4Recv_7C1150_e4.hpp"
#include "e4/classes/E4Recv_7C1A70_e4.hpp"
#include "e4/classes/E4Recv_7C1BE0_e4.hpp"
#include "e4/classes/E4Recv_7C3750_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/RefCount_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BSurface_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/BaseClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "app/cmdline.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Struct_e4.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/Voice_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/AudioSample_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/VtableStub_e4.hpp"

// 0x402720
namespace gamemd {
int GetChannelStatus(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00402720.json)
}
}
// 0x404D80
namespace gamemd {
int ReleaseChannelRefs()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00404D80.json)
}
}
// 0x4054A0
namespace gamemd {
int UpdatePlaybackPosition()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004054A0.json)
}
}
// 0x4063B0
namespace gamemd {
void * ProcessMixerOutput(char * Source)
{
    (void)Source; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004063B0.json)
}
}
// 0x406870
namespace gamemd {
int ApplyFormatFlags(int * a1, char * a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00406870.json)
}
}
// 0x4070B0
namespace gamemd {
int WaitForCallback()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004070B0.json)
}
}
// 0x407F40
namespace gamemd {
int Release()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00407F40.json)
}
}
// 0x408070
namespace gamemd {
int Audio::IsSoundPlaying()
{

  return this->Audio_field_0xC[0] & 1; /*0x408076*/

}
}
// 0x408540
namespace gamemd {
int Audio::CalcRate(int a2, int a3)
{

  return a2 * (int)this->Audio_field_0x14 / 1000; /*0x40855b*/

}
}
// 0x409320
namespace gamemd {
int Audio::GetSampleSize()
{

  return (char *)this->Audio_field_0x34 - (char *)this->Audio_field_0x38; /*0x409328*/

}
}
// 0x53E1D0
namespace gamemd {
void sub_53E1D0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053E1D0.json)
}
}
// 0x5D0470
namespace gamemd {
ObjectClass * * ParseVolume(const char ** a1, ObjectClass * aP2)
{
    (void)a1; (void)aP2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D0470.json)
}
}
// 0x5D5820
namespace gamemd {
char ** SetSoundFileName(char *Source, int a3)
{
    (void)Source; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D5820.json)
}
}
// 0x63F2E0
namespace gamemd {
int sub_63F2E0(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int ** a7)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063F2E0.json)
}
}
// 0x7207F0
namespace gamemd {
int LoadWAVFiles(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007207F0.json)
}
}
// 0x7510D0
namespace gamemd {
int Audio::InitFromINI(double a2, double a3, int a1, int aP1, int aP2, void * aControl, void * aLimit, void * aMinvolume, void * aPriority)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007510D0.json)
}
}
// 0x7513F0
namespace gamemd {
void * LoadSoundINI()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007513F0.json)
}
}
// 0x752590
namespace gamemd {
void sub_752590(int a1, int a2, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00752590.json)
}
}
// 0x7BD130
namespace gamemd {
unsigned int GetSamplePosition(int aP1, int aP2)
{
    (void)aP1; (void)aP2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BD130.json)
}
}
// 0x7C1E10
namespace gamemd {
int sub_7C1E10(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C1E10.json)
}
}
// 0x7C1F30
namespace gamemd {
int sub_7C1F30(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C1F30.json)
}
}
// 0x7C2250
namespace gamemd {
int sub_7C2250(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C2250.json)
}
}
// 0x7C7F20
namespace gamemd {
void Audio_Helper_7C7F20(void * a1, void * a2, void * a3, void * a4)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C7F20.json)
}
}
// 0x7BE830
namespace gamemd {
int sub_7BE830(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BE830.json)
}
}
// 0x7BEE20
namespace gamemd {
void int sub_7BEE20(int a1, int a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7BEE20)
}
}
// 0x7C0530
namespace gamemd {
int Audio_Process_7C0530(int a1, int edx0, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C0530.json)
}
}
// 0x7C06B0
namespace gamemd {
void Audio_Process_7C06B0(DSurface * aP0, int edx0, unsigned int * a2, unsigned int * a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C06B0.json)
}
}
// 0x7C19F0
namespace gamemd {
void Audio_Process_7C19F0(int a1, DSurface * aP1, unsigned int * a2, unsigned int * a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C19F0.json)
}
}
// 0x7C3270
namespace gamemd {
BuildingTypeClass * * Audio_Process_7C3270(int a1, int a2, unsigned int a3, ObjectClass * aP3, int a5, int a6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7C3270)
}
}
// 0x7DF7C0
namespace gamemd {
int sub_7DF7C0(int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007DF7C0.json)
}
}
// 0x7DF8C0
namespace gamemd {
int sub_7DF8C0(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007DF8C0.json)
}
}
// 0x7DFD00
namespace gamemd {
int sub_7DFD00(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007DFD00.json)
}
}
// 0x6C6D00
namespace gamemd {
AbstractClass * * sub_6C6D00()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C6D00)
}
}
// 0x6C6DE0
namespace gamemd {
AbstractClass * * sub_6C6DE0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C6DE0)
}
}
// 0x7C2410
namespace gamemd {
int sub_7C2410(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C2410.json)
}
}
// 0x7C3860
namespace gamemd {
int sub_7C3860(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C3860.json)
}
}
// 0x401080
namespace gamemd {
int InitChannels()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00401080.json)
}
} // namespace gamemd

// 0x404DD0
namespace gamemd {
int FlushChannel(unsigned int ** Block)
{
    (void)Block; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00404DD0.json)
}
} // namespace gamemd

// 0x406D40
namespace gamemd {
void Shutdown(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00406D40.json)
}
} // namespace gamemd

// 0x407000
namespace gamemd {
BOOL Audio::IsSoundEnabled()
{

  return g_Audio_Enabled != 0; /*0x40700d*/

}
} // namespace gamemd

// 0x407010
namespace gamemd {
void * GetEnabled()
{
     return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00407010.json)
}
} // namespace gamemd

// 0x407070
namespace gamemd {
int GetFlag()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00407070.json)
}
} // namespace gamemd

// 0x4093B0
namespace gamemd {
int Callback()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004093B0.json)
}
} // namespace gamemd

// 0x40A7A0
namespace gamemd {
LPDIRECTSOUND GetDirectSound()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0040A7A0.json)
}
} // namespace gamemd

// 0x5EF240
namespace gamemd {
unsigned int sub_5EF240(int a1, int a2)
{
  unsigned int result; // eax
  int i; // edi
  int v4; // esi

  result = 0; /*0x5ef242*/
  for ( i = 0; i < a2; result = v4 + 2 * result ) /*0x5ef24a*/
  {
    v4 = *(uint8_t *)(i + a1) + (result >> 31); /*0x5ef257*/
    ++i; /*0x5ef259*/
  }
  return result; /*0x5ef262*/
}
} // namespace gamemd

// 0x752290
namespace gamemd {
int sub_752290()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00752290.json)
}
} // namespace gamemd

// 0x752340
namespace gamemd {
void sub_752340()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00752340.json)
}
} // namespace gamemd

// 0x7529E0
namespace gamemd {
int IsPlaying(...)
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007529E0.json)
}
} // namespace gamemd

// 0x752AD0
namespace gamemd {
int sub_752AD0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00752AD0.json)
}
} // namespace gamemd

// 0x752B40
namespace gamemd {
void sub_752B40()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00752B40.json)
}
} // namespace gamemd

// 0x753D00
namespace gamemd {
char Audio_Render(unsigned int * a0, SomeVoxelCache * edx0, ObjectClass * aP2, float * a3, float * a4, float * a5, float a7)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00753D00.json)
}
} // namespace gamemd

// 0x764B30
namespace gamemd {
rc_ptr * Audio_Create(rc_ptr_base * a1, const char ** a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x764B30)
}
} // namespace gamemd

// 0x76ABA0
namespace gamemd {
rc_ptr * Audio_Set(rc_ptr_base * a1, void * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x76ABA0)
}
} // namespace gamemd

// 0x76BE90
namespace gamemd {
rc_ptr * Audio_Create_76BE90(rc_ptr_base * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x76BE90)
}
} // namespace gamemd

// 0x7B84D0
namespace gamemd {
int sub_7B84D0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B84D0.json)
}
} // namespace gamemd

// 0x7C04E0
namespace gamemd {
char sub_7C04E0(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C04E0.json)
}
} // namespace gamemd

// 0x7C1130
namespace gamemd {
int sub_7C1130(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C1130.json)
}
} // namespace gamemd

// 0x7C1D40
namespace gamemd {
int sub_7C1D40(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C1D40.json)
}
} // namespace gamemd

// 0x7C1D90
namespace gamemd {
int sub_7C1D90(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C1D90.json)
}
} // namespace gamemd

// 0x7C20B0
namespace gamemd {
int sub_7C20B0(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C20B0.json)
}
} // namespace gamemd

// 0x7C2180
namespace gamemd {
int sub_7C2180(int a1, unsigned int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C2180.json)
}
} // namespace gamemd

// 0x7C3430
namespace gamemd {
int Audio_Render_7C3430(DSurface * aP0, int a2, int a3, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C3430.json)
}
} // namespace gamemd

// 0x7C3950
namespace gamemd {
void sub_7C3950(int a1, int a2)
{
  *(unsigned int *)(a1 + 328) += a2; /*0x7c3950*/
}
} // namespace gamemd

// 0x7C7350
namespace gamemd {
int sub_7C7350(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C7350.json)
}
} // namespace gamemd

// 0x7C94BC
namespace gamemd {
size_t sub_7C94BC(void * Buffer, size_t ElementSize, size_t ElementCount, FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C94BC.json)
}
} // namespace gamemd

// 0x7C95D3
namespace gamemd {
size_t sub_7C95D3(void * Buffer, size_t ElementSize, size_t ElementCount, FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007C95D3.json)
}
} // namespace gamemd
