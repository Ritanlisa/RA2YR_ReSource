// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "core/utility_ext.hpp"
#include "object/abstract.hpp"
#include "object/techno.hpp"
// G42.33 批 3: house/house.hpp 摘除 -- HouseClass_e4 已定义 gamemd::HouseClass (C2011)
// G42.33 批 3: house/house.hpp 摘除 -- HouseClass_e4 已定义 gamemd::HouseClass (C2011)
#include "entity/anim.hpp"
#include "misc/audio_ext.hpp"
#include "misc/locomotion.hpp"
#include "misc/misc_ext.hpp"
#include "misc/movement_ext.hpp"  // G42.33 W3: 恢复 (Pathfinding 载体; MoveFeedback 双守卫已抑制)
#include "misc/super_weapon.hpp"
#include "system/ini_class.hpp"
#include "system/mix_file.hpp"
#include "type/anim_type.hpp"
#include "type/techno_type.hpp"
#include "ui/sidebar.hpp"
#include "ui/ui_ext.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Coord_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CellStruct_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Math_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Debug_e4.hpp"  // G42.36 C2027 supply
// G42.33 批 3: TU 本地载体块 (缺席全局 + 自由函数真形 + typed 宿主)
extern int g_AudioConfigState;          // data: 0x87E2A0
extern unsigned int dword_87DE30;       // data: 0x87DE30
extern unsigned int dword_87E294;       // data: 0x87E294 (int* 比较位)
extern unsigned int dword_816108;       // data: 0x816108
extern unsigned int dword_87E2A4;       // data: 0x87E2A4
extern unsigned int dword_87E2A8;       // data: 0x87E2A8 (LinkedList 池头)
extern unsigned int dword_87E28C;       // data: 0x87E28C
extern unsigned int dword_87E290;       // data: 0x87E290
extern unsigned int dword_81610C;       // data: 0x81610C
extern unsigned int dword_A83D4C;       // data: 0xA83D4C (Object* 全局)
// g_AudioStreamObject @ 0x87E180 -- DList 头 typed 宿主 (team TU 同款手法)
struct g_AudioStreamObject_host {
    void *pad_0;                        // +0x00 首链指针
    unsigned char __pad_rest[0x280 - 4];
};
extern g_AudioStreamObject_host g_AudioStreamObject;  // data: 0x87E180
// stru_87F5F0 -- Sidebar 域宿主 (需覆盖 +0x258 = 0x87F7E8 SidebarClass 单例)
struct stru_87F5F0_host {
    unsigned char __pad_0[0x58];
    unsigned char __pad_58[0x280 - 0x58];
};
extern stru_87F5F0_host stru_87F5F0;    // data: 0x87F5F0
// stru_87E790 -- 临界区宿主 (Enter/LeaveCriticalSection @ +0x68)
struct stru_87E790_host {
    unsigned char __pad_0[0x280];
};
extern stru_87E790_host stru_87E790;    // data: 0x87E790
namespace gamemd {
// LinkedList 自由函数族真形 (mix_file.hpp 的模板 LinkedList 是碰撞源, 不用)
int * LinkedList_Next(void *list);      // 0x407520 (IDA: LinkedList::Next)
int LinkedList_Init(void *list);        // 0x407450 (IDA: LinkedList::Init)
int InsertAfterDListNode(int a1, int a2);         // 0x407420
int PushFrontLinkedListAlt(unsigned int a1, int a2);  // 0x407530
int CellToTileIndexMap(void *a1, short *a2);          // 0x56D3F0 (G42.33 W2)
} // namespace gamemd

// 0x4AEBD0
namespace gamemd {
bool InputManager_ProcessEvents::StubReturnFalse() {
    ; /*0x4aebd0*/
}
} // namespace gamemd

// 0x6CE320
namespace gamemd {
char SuperClass::RemoveFromPointerArray(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6CE320)
}
} // namespace gamemd

// 0x6E1C40
namespace gamemd {
char SuperClass::Get(int a2, int a3, int a4, int a5) {
    int Status; // eax

    ((SuperClass *)*(unsigned int *)(*(unsigned int *)(a2 + 600) + 4 * *(unsigned int *)((char *)this + 144)))->StartTimer(0, 0, 0); /*0x6e1c5d 真值 [esi+90h]*/
    *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(a2 + 600) + 4 * *(unsigned int *)&this->__pad_80[16]) + 96) = 0; /*0x6e1c71*/
    if ( (Object *)dword_A83D4C == (Object *)(unsigned int)a2 ) /*0x6e1c7c*/
    {
      ((SidebarClass *)((char *)&stru_87F5F0 + 600))->AddCameo((AbstractType)31, *(unsigned int *)((char *)this + 144)); /*0x6e1c8c 真值 this=0x87F7E8*/
      Status = HouseClass::GetStatus((HouseClass *)0x1F, 0); /*0x6e1c9e e4 静态 varargs*/
      ((Sidebar *)((char *)&stru_87F5F0 + 600))->ActivateTab(Status); /*0x6e1ca9*/
    }
    return 1; /*0x6e1cae*/
}
} // namespace gamemd

// 0x4010A0
namespace gamemd {
int AudioChannel::IsActive()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4010A0)
}
} // namespace gamemd

// 0x401640
namespace gamemd {
unsigned int * AudioIndex::GetSampleInformation(unsigned int *a1, int a2, unsigned int *a3) {
    unsigned int *v3; // ecx
    unsigned int *result; // eax

    v3 = (unsigned int *)(*a1 + 36 * a2); /*0x401645*/
    result = a3; /*0x401648*/
    *a3 = 4; /*0x40164c*/
    a3[2] = v3[6]; /*0x401655*/
    a3[3] = ((v3[7] & 1) != 0) + 1; /*0x401665*/
    a3[6] = v3[8]; /*0x40166b*/
    if ( (v3[7] & 8) != 0 ) /*0x401674*/
    {
      a3[1] = 1; /*0x401676*/
      a3[4] = 2; /*0x40167d*/
    }
    else
    {
      a3[1] = 0; /*0x401687*/
      a3[4] = ((v3[7] & 4) != 0) + 1; /*0x40169b*/
    }
    return result; /*0x401684*/
}
} // namespace gamemd

// 0x4024A0
namespace gamemd {
int AudioSample::ResetState() {
    int v2; // eax
    int v3; // ecx
    int result; // eax

    if ( (*((unsigned char *)this + 164) & 8) != 0 ) /*0x4024aa*/
    {
      v2 = *((unsigned int *)this + 41); /*0x4024b1*/
      IDA_LOBYTE(v2) = v2 & 0xF7; /*0x4024b7*/
      *((unsigned int *)this + 41) = v2; /*0x4024b9*/
      *((unsigned int *)this + 87) = 0x4022C0; /*0x4024c1 回调地址真值 AudioController::AdvanceQueue*/
      *((unsigned int *)this + 88) = 0x402330; /*0x4024cb 回调地址真值 AudioController::UpdatePlayback*/
      *((unsigned int *)this + 89) = 0x4023F0; /*0x4024d5 回调地址真值 AudioController::CleanupStream*/
      *((unsigned int *)this + 44) = 0; /*0x4024df*/
      *((unsigned int *)this + 45) = 0; /*0x4024e5*/
      *((unsigned int *)this + 46) = 0; /*0x4024eb*/
      *((unsigned int *)this + 47) = 0; /*0x4024f1*/
      *((unsigned int *)this + 48) = 0; /*0x4024f7*/
      *(unsigned int *)((char *)this + 12) = 1; /*0x4024fd +0xC*/
      *((unsigned int *)this + 42) = 0; /*0x402504*/
      *((unsigned int *)this + 41) = 0; /*0x40250a*/
      *((unsigned int *)this + 40) = 0; /*0x402510*/
      v3 = dword_87DE30; /*0x402516*/
      *((unsigned int *)this + 36) = 0; /*0x40251c*/
      *((unsigned int *)this + 37) = v3; /*0x402522*/
      *((unsigned int *)this + 38) = 0; /*0x40252b*/
      *((unsigned int *)this + 39) = 0; /*0x402531*/
      result = (int)((AudioMixer *)((char *)this + 16))->Init(); /*0x402537 +0x10*/
      *((unsigned int *)this + 90) = 0; /*0x40253c*/
    }
    return result; /*0x402543*/
}
} // namespace gamemd

// 0x4025B0
int Voice::Stop()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4025B0)
}
} // namespace gamemd

// 0x402600
namespace gamemd {
int AudioChannel::DeactivatePlay()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x402600)
}
} // namespace gamemd

// 0x402650
namespace gamemd {
int AudioChannel::ActivatePlay()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x402650)
}
} // namespace gamemd

// 0x4026A0
namespace gamemd {
int AudioFile::GetCallback() {
    return (*(int (**)(void))(*((unsigned int *)this + 53) + 40))();
}
} // namespace gamemd

// 0x403920
namespace gamemd {
int AudioThread::UpdateStats(int64_t a2) {
    int result; // eax
    uint64_t v3; // kr00_8

    v3 = a2 - *((unsigned long long *)this + 5); /*0x403930*/
    result = IDA_HIDWORD(v3); /*0x403930*/
    *((unsigned long long *)this + 2) = v3; /*0x403938*/
    ++*((unsigned int *)this + 18); /*0x403942*/
    if ( *((unsigned long long *)this + 3) > *((unsigned long long *)this + 4) ) /*0x403957*/
    {
      *((unsigned int *)this + 6) = 0; /*0x40395b*/
      *((unsigned int *)this + 7) = 0; /*0x40395e*/
    }
    if ( v3 > *((unsigned long long *)this + 3) ) /*0x40396f*/
      *((unsigned long long *)this + 3) = v3; /*0x403971*/
    if ( v3 > *((unsigned long long *)this + 1) ) /*0x403985*/
      ++*((unsigned int *)this + 19); /*0x40398b*/
    if ( v3 > *((unsigned long long *)this + 6) ) /*0x40399c*/
      *((unsigned long long *)this + 6) = v3; /*0x40399e*/
    *((unsigned long long *)this + 5) = a2; /*0x4039a4*/
    return result; /*0x4039ae*/
}
} // namespace gamemd

// 0x405190
namespace gamemd {
int * AudioPool::ProcessQueue() {
    AudioPool *v1; // ebx
    int *v2; // esi
    void *v3; // esi (G42.33 W2: LinkedList 模板碰撞规避)
    void *v4; // edi (G42.33 W2)
    int v5; // eax

    v1 = this; /*0x40519a*/
    if ( !dword_816108 || !dword_87E2A4 || !*((unsigned int *)this + 3) ) /*0x4051b6*/
      return 0; /*0x4051b6*/
    v2 = LinkedList_Next((void *)dword_87E2A8); /*0x4051ca 0x407520 真形*/
    if ( !v2 ) /*0x4051ce*/
    {
      if ( g_AudioConfigState ) /*0x4051d6*/
      {
        v3 = *(void **)(char *)&g_AudioStreamObject; /*0x4051d8 +0 首链*/
        if ( *(void **)(char *)&g_AudioStreamObject != (void *)&g_AudioStreamObject ) /*0x4051e4*/
        {
          do /*0x40522b*/
          {
            v4 = *(void **)v3; /*0x4051e8 +0 首链*/
            if ( (*(unsigned char *)((char *)v3 + 8) & 1) != 0 ) /*0x4051ef +8 真值*/
            {
              LinkedList_Init(v3); /*0x4051f3 0x407450 真形*/
              *(unsigned int *)((char *)v3 + 104) = 0; /*0x4051f8 +0x68 真值*/
              if ( *(int *)((char *)v3 + 8) < 0 ) /*0x405203 +8 符号位*/
                RA2_OPDEL(v3); /*0x405206*/
              else
                PushFrontLinkedListAlt(dword_87E2A8, (int)v3); /*0x405218 本地真形*/
              --dword_87E28C; /*0x40521d*/
            }
            v3 = v4; /*0x405229*/
          }
          while ( v4 != (void *)&g_AudioStreamObject ); /*0x40522b*/
          v1 = this; /*0x40522d*/
        }
      }
      v2 = LinkedList_Next((void *)dword_87E2A8); /*0x40523c 0x407520 真形*/
      if ( !v2 ) /*0x405240*/
        return 0; /*0x4052ce*/
    }
    v5 = ++dword_87E28C; /*0x405251*/
    if ( dword_87E28C > dword_87E290 ) /*0x405259*/
      dword_87E290 = v5; /*0x40525b*/
    memset(v2, 0, 0x280u); /*0x405269*/
    v2[9] = (int)v1; /*0x40526d*/
    ((DListNode *)v2)->InitEmpty(); /*0x405270*/
    v2[7] = 0; /*0x405275*/
    v2[85] = 0; /*0x40527e*/
    v2[154] = 0; /*0x405284*/
    v2[120] = 0; /*0x40528a*/
    v2[42] = 0; /*0x405290*/
    ((AudioMixer *)(v2 + 46))->Init(); /*0x405296*/
    v2[86] = 0; /*0x40529b*/
    InsertAfterDListNode((int)&g_AudioStreamObject, (int)v2); /*0x4052a8 本地真形*/
    v2[78] = dword_81610C++; /*0x4052b2*/
    return v2; /*0x4052be*/
}
} // namespace gamemd

// 0x405C00
namespace gamemd {
unsigned int * AudioFileClass::Release()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x405C00)
}
} // namespace gamemd

// 0x406130
namespace gamemd {
int * AudioSource::Get()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x406130)
}
} // namespace gamemd

// 0x407480
namespace gamemd {
int AudioList::GetNextEntry()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x407480)
}
} // namespace gamemd

// 0x407A90
namespace gamemd {
int AudioSample::Destructor()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x407A90)
}
} // namespace gamemd

// 0x4080D0
namespace gamemd {
int AudioSample::IsBuffering() {
    return (*(unsigned int *)((char *)this + 12) & 1) != 0 /*0x4080e8 +0xC*/
        && *(unsigned int *)(*((unsigned int *)this + 5) + 20) != *(unsigned int *)(*((unsigned int *)this + 5) + 24);
}
} // namespace gamemd

// 0x408600
namespace gamemd {
int AudioNode::Release() {
    int result; // eax

    *((unsigned int *)this + 5) = 0; /*0x408600*/
    return result; /*0x408607*/
}
} // namespace gamemd

// 0x408840
namespace gamemd {
void AudioSample::InitLinkedList() {
    AudioSample *v1; // ebx
    int AudioSample_field_0x04; // esi
    int *p_AudioSample_field_0x04; // edi
    unsigned int *v4; // eax
    int v5; // edx
    int v6; // ebp
    int v7; // esi
    int *v8; // eax
    unsigned int *v9; // ecx
    int v10; // edx
    int *p_AudioSample_field_0x10; // ebx
    int v12; // edi
    int *v13; // esi

    v1 = this; /*0x408843*/
    AudioSample_field_0x04 = *(int *)((char *)this + 4); /*0x40884b +4 链指针*/
    p_AudioSample_field_0x04 = (int *)((char *)this + 4); /*0x40884e +4 链头*/
    if ( (int *)AudioSample_field_0x04 != (int *)((char *)this + 4) ) /*0x408853*/
    {
      do /*0x4088a0*/
      {
        LinkedList_Init((void *)AudioSample_field_0x04); /*0x40885c 0x407450 真形*/
        v4 = *(unsigned int **)(AudioSample_field_0x04 + 48); /*0x408861*/
        *(unsigned int *)(AudioSample_field_0x04 + 48) = 0; /*0x408864*/
        v5 = v4[5]; /*0x40886d*/
        --*v4; /*0x408871*/
        v4[5] = v5 - *(unsigned int *)(AudioSample_field_0x04 + 28); /*0x408878*/
        v4[4] &= ~2u; /*0x408880*/
        if ( *(unsigned int *)(AudioSample_field_0x04 + 16) ) /*0x408883*/
          RA2_OPDEL(*(void **)(AudioSample_field_0x04 + 16)); /*0x40888b*/
        RA2_OPDEL((void *)AudioSample_field_0x04); /*0x408894*/
        AudioSample_field_0x04 = *p_AudioSample_field_0x04; /*0x408899*/
      }
      while ( (int *)*p_AudioSample_field_0x04 != p_AudioSample_field_0x04 ); /*0x4088a0*/
    }
    v6 = *p_AudioSample_field_0x04; /*0x4088a2*/
    if ( (int *)*p_AudioSample_field_0x04 == p_AudioSample_field_0x04 ) /*0x4088a6*/
    {
      v6 = 0; /*0x4088a8*/
    }
    else if ( v6 ) /*0x4088ae*/
    {
      v7 = 0; /*0x4088b0*/
      v8 = (int *)*p_AudioSample_field_0x04; /*0x4088b2*/
      do /*0x4088d5*/
      {
        v9 =(unsigned int *)v8 + 9; /*0x4088b4*/
        v10 = 2; /*0x4088b7*/
        do /*0x4088cb*/
        {
          *(v9 - 1) = v8[6]; /*0x4088bf*/
          *v9 = v8[7]; /*0x4088c5*/
          v9 += 2; /*0x4088c7*/
          --v10; /*0x4088ca*/
        }
        while ( v10 ); /*0x4088cb*/
        v8[13] = v7; /*0x4088cd*/
        v8 = (int *)*v8; /*0x4088d0*/
        ++v7; /*0x4088d2*/
      }
      while ( v8 != p_AudioSample_field_0x04 ); /*0x4088d5*/
      v1 = this; /*0x4088d7*/
    }
    p_AudioSample_field_0x10 = (int *)((char *)v1 + 76); /*0x4088db 真值 add ebx,4Ch*/
    v12 = 2; /*0x4088de*/
    v13 = p_AudioSample_field_0x10; /*0x4088e3*/
    do /*0x408906*/
    {
      *(v13 - 3) = v6; /*0x4088e5*/
      *v13 = -1001; /*0x4088e8*/
      v13[1] = *v13; /*0x4088f0*/
      *(v13 - 1) = 0; /*0x4088f6*/
      ((AudioSample *)(v13 - 13))->SetField(); /*0x4088fd 实例真形*/
      v13 += 16; /*0x408902*/
      --v12; /*0x408905*/
    }
    while ( v12 ); /*0x408906*/
    *p_AudioSample_field_0x10 += *((unsigned int *)this + 5); /*0x408913*/
    RA2_OPDEL(this); /*0x408916*/
}
} // namespace gamemd

// 0x408930
namespace gamemd {
int AudioSample::SetField() {
    int result; // eax

    *(unsigned int *)((char *)this + 12) = result; /*0x40893a +0xC*/
    if ( result ) /*0x40893d*/
    {
      result = *(unsigned int *)(result + 8 * *((unsigned int *)this + 5) + 32); /*0x408943*/
    *(unsigned int *)((char *)this + 4) = result; /*0x408948 +4*/
    }
    else
    {
    *(unsigned int *)((char *)this + 4) = 0; /*0x408958 +4*/
    }
    *(unsigned int *)((char *)this + 8) = 0; /*0x40894b +8*/
    *(unsigned int *)((char *)this + 16) &= ~1u; /*0x408954 +0x10*/
    return result; /*0x408957*/
}
} // namespace gamemd

// 0x409C40
namespace gamemd {
unsigned int * AudioBuffer::InitializePlayback()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x409C40)
}
} // namespace gamemd

// 0x40B6D0
namespace gamemd {
unsigned int MoveFeedback::Update(int a2) {
    if ( this->m_IsAllocated ) /*0x40b6d0 真值 [ecx+0xC]*/
      return (unsigned int)(a2 - this->m_Capacity) >> 2; /*0x40b6e5 真值 [ecx+4]*/
    else
      return 0; /*0x40b6d7*/
}
} // namespace gamemd

// 0x40D230
namespace gamemd {
int InputManager_ProcessEvents::AddRef() {
    return 1; /*0x40d235*/
}
} // namespace gamemd

// 0x40D240
namespace gamemd {
int InputManager_ProcessEvents::Release() {
    return 1; /*0x40d245*/
}
} // namespace gamemd

// 0x42C290
namespace gamemd {
char Pathfinding::AStar(int16_t *a2, int16_t *a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x42C290)
}
} // namespace gamemd

// 0x42DCA0
namespace gamemd {
void Pathfinding::SiftDown(int a2)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x42DCA0)
}
} // namespace gamemd

// 0x4AEBE0
namespace gamemd {
char InputManager_ProcessEvents::Stub()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4AEBE0)
}
} // namespace gamemd

// 0x4AF720
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
namespace gamemd {
int DriveLocomotionClass::QueryInterface(const void *a2, int *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4AF720)
}
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x4B4CB0
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
namespace gamemd {
LONG DriveLocomotionClass::AddRef()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B4CB0)
}
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x4B4CC0
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
namespace gamemd {
LONG DriveLocomotionClass::Release()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B4CC0)
}
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x4B6470
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x4B66A0
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x4B66B0
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x4C9220
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
namespace gamemd {
int FacingClass::Update(unsigned short *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C9220)
}
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x4C9300
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
namespace gamemd {
int FacingClass::Set_SyncLog(unsigned int *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C9300)
}
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x4C9530
namespace gamemd {
unsigned int * MovementClass::CompareAbsCoords(unsigned int *a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C9530)
}
} // namespace gamemd

// 0x4CE840
namespace gamemd {
void DropPod::ProcessLanding()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CE840)
}
} // namespace gamemd

// 0x4FFB20
namespace gamemd {
int PathfindingClass::FindPath(unsigned int *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4FFB20)
}
} // namespace gamemd

// 0x54DC60
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x54DF50
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x54DF60
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x5FB160
namespace gamemd {
void AudioOptionsClass::ApplySettings()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5FB160)
}
} // namespace gamemd

// 0x69EE30
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x6A4260
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x6A4270
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x6E6E20
namespace gamemd {
void * BuildingLoadQueue::GetNext()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E6E20)
}
} // namespace gamemd

// 0x6E6F20
namespace gamemd {
void* BuildingLoadQueue::Find(int32_t index)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E6F20)
}
} // namespace gamemd

// 0x6E6FF0
namespace gamemd {
void* BuildingLoadQueue::FindObject(ObjectClass* obj)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E6FF0)
}
} // namespace gamemd

// 0x752DB0
namespace gamemd {
char AudioEvent::LoadFromINI(uint8_t ***a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x752DB0)
}
} // namespace gamemd

// 0x754BE0
namespace gamemd {
void * AudioConfig::InitDefault()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x754BE0)
}
} // namespace gamemd

// 0x756BB0
namespace gamemd {
void AudioOcclusion::ComputeBoundingVertices()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x756BB0)
}
} // namespace gamemd

// 0x75C7F0
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x75CB80
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x75CB90
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

