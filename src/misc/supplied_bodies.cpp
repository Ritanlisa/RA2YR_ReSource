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
    return false; /*0x4aebd0*/
}
} // namespace gamemd

// 0x6CE320
namespace gamemd {
char SuperClass::RemoveFromPointerArray(int a2) {
    char *SuperClass_field_0x10; // edx
    char *v4; // edx

    SuperClass_field_0x10 = (char *)*(unsigned int *)((char *)&this->vtable26); /*0x6ce320 真值 [ecx+10h] count*/
    a2 = a2; /*0x6ce323*/
    if ( a2 >= (int)SuperClass_field_0x10 ) /*0x6ce329*/
      return 0; /*0x6ce34c*/
    v4 = SuperClass_field_0x10 - 1; /*0x6ce32b*/
    *(unsigned int *)((char *)&this->vtable26) = (unsigned int)v4; /*0x6ce32e +0x10*/
    if ( a2 < (int)v4 ) /*0x6ce331*/
    {
      do /*0x6ce344*/
      {
        ++a2; /*0x6ce337*/
        *((unsigned int *)*(unsigned int *)&this->vtable2 + a2 - 1) = *((unsigned int *)*(unsigned int *)&this->vtable2 + a2); /*0x6ce33b 真值 [ecx+4] arr*/
      }
      while ( a2 < (int)*(unsigned int *)((char *)&this->vtable26) ); /*0x6ce344 +0x10*/
    }

// 0x6E1C40
namespace gamemd {
char SuperClass::Get(int a2, int a3, int a4, int a5) {
    int Status; // eax

    ((SuperClass *)*(unsigned int *)(*(unsigned int *)(a2 + 600) + 4 * *(unsigned int *)&this->q090))->StartTimer(0, 0, 0); /*0x6e1c5d 真值 [esi+90h]*/
    *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(a2 + 600) + 4 * *(unsigned int *)&this->__pad_80[16]) + 96) = 0; /*0x6e1c71*/
    if ( (Object *)dword_A83D4C == (Object *)(unsigned int)a2 ) /*0x6e1c7c*/
    {
      ((SidebarClass *)((char *)&stru_87F5F0 + 600))->AddCameo((AbstractType)31, *(unsigned int *)&this->q090); /*0x6e1c8c 真值 this=0x87F7E8*/
      Status = HouseClass::GetStatus((HouseClass *)0x1F, 0); /*0x6e1c9e e4 静态 varargs*/
      ((Sidebar *)((char *)&stru_87F5F0 + 600))->ActivateTab(Status); /*0x6e1ca9*/
    }
    return 1; /*0x6e1cae*/
}
} // namespace gamemd

// 0x4010A0
namespace gamemd {
int AudioChannel::IsActive() {
    return (*(unsigned char *)this & 2) != 0 || (this->u32_28 & 2) != 0 || (this->u32_50 & 2) != 0; /*0x4010b4 +0 真值*/
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
      *(unsigned int *)&this->q00C = 1; /*0x4024fd +0xC*/
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
int Voice::Stop() {
    int v1; // ecx
    int result; // eax

    v1 = v1; /*0x4025b1*/
    (*(void (**)(void))(*(unsigned int *)(v1 + 212) + 40))(); /*0x4025b9*/
    if ( (*(unsigned char *)(v1 + 164) & 5) != 0 ) /*0x4025c3*/
      (*(void (__thiscall **)(int))(*(unsigned int *)(v1 + 212) + 16))(v1); /*0x4025cd*/
    (*(void (__thiscall **)(int))(*(unsigned int *)(v1 + 212) + 44))(v1); /*0x4025d8*/
    result = *(unsigned int *)(v1 + 188); /*0x4025db*/
    if ( result ) /*0x4025e3*/
      result = result(v1); /*0x4025e7*/
    *(unsigned int *)(v1 + 360) = 0; /*0x4025e9*/
    return result; /*0x4025f3*/
}
} // namespace gamemd

// 0x402600
namespace gamemd {
int AudioChannel::DeactivatePlay() {
    int v2; // eax

    (*(void (**)(void))(this->u32_D4 + 40))(); /*0x402609*/
    if ( (this->u32_A4 & 1) != 0 ) /*0x402613*/
    {
      this->u32_A4 &= ~1u; /*0x40261e*/
      (*(void (__thiscall **)(AudioChannel *))(this->u32_D4 + 20))(this); /*0x40262c*/
      v2 = this->u32_A4; /*0x40262f*/
      IDA_LOBYTE(v2) = v2 | 4; /*0x402635*/
      this->u32_A4 = v2; /*0x402637*/
    }
// 0x402600
namespace gamemd {
int AudioChannel::DeactivatePlay() {
    int v2; // eax

    (*(void (**)(void))(this->u32_D4 + 40))(); /*0x402609*/
    if ( (this->u32_A4 & 1) != 0 ) /*0x402613*/
    {
      this->u32_A4 &= ~1u; /*0x40261e*/
      (*(void (__thiscall **)(AudioChannel *))(this->u32_D4 + 20))(this); /*0x40262c*/
      v2 = this->u32_A4; /*0x40262f*/
      IDA_LOBYTE(v2) = v2 | 4; /*0x402635*/
      this->u32_A4 = v2; /*0x402637*/
    }

// 0x402650
namespace gamemd {
int AudioChannel::ActivatePlay() {
    int v2; // eax

    (*(void (**)(void))(this->u32_D4 + 40))(); /*0x402659*/
    if ( (this->u32_A4 & 4) != 0 ) /*0x402663*/
    {
      (*(void (__thiscall **)(AudioChannel *))(this->u32_D4 + 24))(this); /*0x40266d*/
      v2 = this->u32_A4; /*0x402670*/
      IDA_LOBYTE(v2) = v2 & 0xFB; /*0x402676*/
      this->u32_A4 = v2; /*0x402678*/
      this->u32_A4 |= 1u; /*0x402687*/
    }

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
unsigned int * AudioFileClass::Release() {
    int v3; // ecx
    int v4; // ebx
    RefCount **v5; // edi
    Voice *v6; // [esp+0h] [ebp-Ch]

    result =(unsigned int *)this; /*0x405c01*/
    if ( g_AudioConfigState ) /*0x405c13*/
    {
      if ( *(int **)&this->vtable4 == (int *)&dword_87E294 ) /*0x405c20*/
      {
        v2 = *(unsigned int *)this; /*0x405c26*/
        if ( v2 ) /*0x405c26*/
        {
          if ( *((unsigned int *)this + 2) == *(unsigned int *)(*(unsigned int *)&v2 + 36) /*0x405c53*/
            && *((unsigned int *)this + 1) == *(unsigned int *)(*(unsigned int *)&v2 + 312)
            && (*(unsigned char *)(*(unsigned int *)&v2 + 24) & 1) == 0 )
          {
            v3 = *(unsigned int *)(*(unsigned int *)&v2 + 176); /*0x405c59*/
            if ( v3 && v2 == *(unsigned int *)(v3 + 192) ) /*0x405c69*/
            {
              if ( (*(unsigned char *)(*(unsigned int *)&v2 + 24) & 2) != 0 ) /*0x405c6f*/
                v6->Stop(); /*0x405c71 实例真形*/
              ((AudioStream *)*(void **)(*(unsigned int *)&v2 + 176))->ReleaseChannel(); /*0x405c7c*/
              *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v2 + 176) + 192) = 0; /*0x405c87*/
              *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v2 + 176) + 188) = 0; /*0x405c93*/
              *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v2 + 176) + 180) = 0; /*0x405c9f*/
              *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v2 + 176) + 184) = 0; /*0x405cab*/
              *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v2 + 176) + 144) = 0; /*0x405cb7*/
              *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v2 + 176) + 152) = 0; /*0x405cc3*/
              *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v2 + 176) + 156) = 0; /*0x405ccf*/
              result =(unsigned int *)this; /*0x405cd5*/
              *(unsigned int *)(*(unsigned int *)&v2 + 176) = 0; /*0x405cd9*/
            }
            v4 = 0; /*0x405ce6*/
            if ( *(int *)(*(unsigned int *)&v2 + 168) > 0 ) /*0x405cea*/
            {
              v5 = (RefCount **)(*(unsigned int *)&v2 + 40); /*0x405ced*/
              do /*0x405d05*/
              {
                ((RefCount *)*v5)->Decrement(); /*0x405cf2*/
                *v5 = 0; /*0x405cf7*/
                ++v4; /*0x405cff*/
                ++v5; /*0x405d00*/
              }
              while ( v4 < *(unsigned int *)(*(unsigned int *)&v2 + 168) ); /*0x405d05*/
              result =(unsigned int *)this; /*0x405d07*/
            }
            *(unsigned int *)(*(unsigned int *)&v2 + 168) = 0; /*0x405d0c*/
            *(unsigned int *)(*(unsigned int *)&v2 + 28) = 4; /*0x405d12*/
            *(unsigned int *)(*(unsigned int *)&v2 + 312) = 0; /*0x405d19*/
            *(unsigned int *)(*(unsigned int *)&v2 + 632) = 0; /*0x405d1f*/
            *(unsigned int *)(*(unsigned int *)&v2 + 24) |= 1u; /*0x405d2b*/
          }
          *result = 0; /*0x405d2f*/
        }
      }
    }

// 0x406130
namespace gamemd {
int * AudioSource::Get() {
    int *result; // eax

    if ( !g_AudioConfigState || *(int **)&this->vtable4 != (int *)&dword_87E294 ) /*0x406140*/
      return 0; /*0x406166*/
    result = *(int **)this; /*0x406142*/
    if ( *(unsigned int *)this && (this->u32_8 != (unsigned int)result[9] || this->u32_4 != (unsigned int)result[78]) ) /*0x40615e*/
    {
      result = 0; /*0x406160*/
      *(int **)this = 0; /*0x406162*/
    }

// 0x407480
namespace gamemd {
int AudioList::GetNextEntry() {
    return *(unsigned int *)(this->u32_4 + 8) != this->u32_4 ? this->u32_4 : 0;
}
} // namespace gamemd

// 0x407A90
namespace gamemd {
int AudioSample::Destructor() {
    Count *v2; // ecx
    Count *v3; // ecx
    AudioSample *v4; // ecx
    AudioSample *v5; // ecx
    void (__thiscall ***v6)(unsigned int, int); // ecx
    int result; // eax
    Voice *v8; // [esp+0h] [ebp-Ch]

    if ( (AudioSample *)this->AudioSample_field_0x04 != this ) /*0x407aa4*/
    {
      EnterCriticalSection((LPCRITICAL_SECTION)&stru_87E790.__pad_5C[12]); /*0x407aab*/
      LinkedList_Init((void *)this); /*0x407aaf 0x407450 真形*/
      LeaveCriticalSection((LPCRITICAL_SECTION)&stru_87E790.__pad_5C[12]); /*0x407ab9*/
    }

// 0x407A90
namespace gamemd {
int AudioSample::Destructor() {
    Count *v2; // ecx
    Count *v3; // ecx
    AudioSample *v4; // ecx
    AudioSample *v5; // ecx
    void (__thiscall ***v6)(unsigned int, int); // ecx
    int result; // eax
    Voice *v8; // [esp+0h] [ebp-Ch]

    if ( (AudioSample *)this->AudioSample_field_0x04 != this ) /*0x407aa4*/
    {
      EnterCriticalSection((LPCRITICAL_SECTION)&stru_87E790.__pad_5C[12]); /*0x407aab*/
      LinkedList_Init((void *)this); /*0x407aaf 0x407450 真形*/
      LeaveCriticalSection((LPCRITICAL_SECTION)&stru_87E790.__pad_5C[12]); /*0x407ab9*/
    }

// 0x4080D0
namespace gamemd {
int AudioSample::IsBuffering() {
    return (*(unsigned int *)&this->q00C & 1) != 0 /*0x4080e8 +0xC*/
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
    AudioSample_field_0x04 = *(int *)&this->q004; /*0x40884b +4 链指针*/
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

    *(unsigned int *)&this->q00C = result; /*0x40893a +0xC*/
    if ( result ) /*0x40893d*/
    {
      result = *(unsigned int *)(result + 8 * *((unsigned int *)this + 5) + 32); /*0x408943*/
    *(unsigned int *)&this->q004 = result; /*0x408948 +4*/
    }
    else
    {
    *(unsigned int *)&this->q004 = 0; /*0x408958 +4*/
    }
    *(unsigned int *)&this->q008 = 0; /*0x40894b +8*/
    *(unsigned int *)&this->q010 &= ~1u; /*0x408954 +0x10*/
    return result; /*0x408957*/
}
} // namespace gamemd

// 0x409C40
namespace gamemd {
unsigned int * AudioBuffer::InitializePlayback() {
    unsigned int v2; // ecx (G42.33 W2: 指针值语义)
    unsigned int *result; // eax
    unsigned int *v4; // eax (G42.33 W2)
    unsigned int v5; // ecx (G42.33 W2)
    unsigned int v6; // ecx (G42.33 W2)
    int v7; // ecx
    void *v8; // eax

    v2 = *(unsigned int *)this; /*0x409c46*/
    result = *(unsigned int **)(*(unsigned int *)&v2 + 360); /*0x409c48*/
    if ( result ) /*0x409c50*/
    {
      v4 = (unsigned int *)result[5]; /*0x409c56*/
      if ( !v4 ) /*0x409c5b*/
        v4 = (unsigned int *)(*(unsigned int *)(*(unsigned int *)&v2 + 172) + 68); /*0x409c63*/
      this->u32_98 = 0; /*0x409c66*/
      this->u32_84 = 0; /*0x409c6c*/
      this->u32_80 = 0; /*0x409c72*/
      this->u32_74 = 3; /*0x409c78*/
      this->u32_8C = 0; /*0x409c7f*/
      this->u32_A0 = 0; /*0x409c85*/
      v5 = v4[3]; /*0x409c8b*/
      this->u32_A8 = 0; /*0x409c8e*/
      this->u32_A4 = v5; /*0x409c94*/
      v6 = v4[1]; /*0x409c9a*/
      if ( v6 ) /*0x409c9f*/
      {
        v7 = *(unsigned int *)&v6 - 1; /*0x409ca1*/
        if ( v7 ) /*0x409ca2*/
        {
          if ( v7 == 1 ) /*0x409ca5*/
            this->u32_70 = 0x409DE0; /*0x409ca7 回调地址真值 AudioController::LoadThemeBank*/
        }
        else
        {
          this->u32_70 = 0x409DE0; /*0x409cb0 回调地址真值 AudioController::LoadThemeBank*/
          this->u32_B0 = 0x40AA70; /*0x409cb7 回调地址真值 ProcessAudioChannelMovement*/
          this->u32_8C = v4[6]; /*0x409cc4*/
          this->u32_AC = v4[6]; /*0x409ccd*/
          this->u32_A0 = 4 * *(unsigned int *)&v4[6] + 128; /*0x409cdd*/
        }
      }
      else
      {
        this->u32_70 = 0x409D90; /*0x409ce5 回调地址真值 sub_409D90*/
      }
      if ( this->u32_88 < this->u32_8C ) /*0x409cfa*/
      {
        if ( this->u32_7C ) /*0x409cfc*/
          free(*((void **)this + 31)); /*0x409d04*/
        v8 = malloc(this->u32_8C); /*0x409d13*/
        this->u32_7C = (unsigned int)v8; /*0x409d1d*/
        if ( v8 ) /*0x409d20*/
          this->u32_88 = this->u32_8C; /*0x409d30*/
        else
          this->u32_88 = 0; /*0x409d22*/
      }
      result = (unsigned int *)this->u32_A0; /*0x409d3c*/
      if ( this->u32_9C < (int)result ) /*0x409d44*/
      {
        if ( this->u32_90 ) /*0x409d46*/
          free(*((void **)this + 36)); /*0x409d51*/
        result = (unsigned int *)malloc(this->u32_A0); /*0x409d60*/
        this->u32_90 = (unsigned int)result; /*0x409d6a*/
        if ( result ) /*0x409d70*/
        {
          result = (unsigned int *)this->u32_A0; /*0x409d7b*/
          this->u32_9C = (unsigned int)result; /*0x409d81*/
        }
        else
        {
          this->u32_9C = 0; /*0x409d72*/
        }
      }
    }

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
char Pathfinding::AStar(int16_t *a2, int16_t *a3, int a4, int a5) {
    double v5; // st7
    Pathfinding *v6; // edi
    int v8; // esi
    unsigned int *Pathfinding_field_0x14; // eax
    int i; // ecx
    int v11; // ebx
    int v12; // eax
    int Pathfinding_field_0x10; // eax
    unsigned int v14; // ecx
    unsigned int v15; // edx
    Pathfinding *v17; // ecx
    unsigned int *v18; // eax
    int Pathfinding_field_0x08; // eax
    unsigned int *v20; // ebx
    int v21; // edx
    int v22; // ecx
    int v23; // eax
    int v24; // ecx
    int v25; // edx
    int v26; // ecx
    int v28; // edx
    int v29; // esi
    int v31; // eax
    int Pathfinding_field_0x0C; // ecx
    uint16_t v35; // cx
    uint16_t v36; // ax
    int v37; // eax
    int v38; // ecx
    unsigned int *v39; // edx
    int v40; // eax
    unsigned int v41; // esi
    unsigned int *v42; // edi
    unsigned int v43; // ecx
    unsigned int v44; // edx
    unsigned int v46; // eax
    int v47; // eax
    bool v49; // zf
    int *v50; // ecx
    int v51; // eax
    int v52; // ebx
    unsigned int *v53; // esi
    int v54; // esi
    int v55; // eax
    int v58; // edx
    int v59; // eax
    int v62; // eax
    int v63; // esi
    int v66; // eax
    int v69; // ecx
    int v70; // eax
    int v71; // eax
    unsigned short *v72; // edx
    char v74; // [esp+10h] [ebp-58h]
    char v75; // [esp+11h] [ebp-57h]
    bool v76; // [esp+12h] [ebp-56h]
    bool v77; // [esp+13h] [ebp-55h]
    unsigned int *v78; // [esp+14h] [ebp-54h]
    int v79; // [esp+18h] [ebp-50h]
    int v80; // [esp+18h] [ebp-50h]
    float v81; // [esp+18h] [ebp-50h]
    unsigned int *v83; // [esp+20h] [ebp-48h]
    int v84; // [esp+20h] [ebp-48h]
    int v85; // [esp+24h] [ebp-44h]
    int v86; // [esp+28h] [ebp-40h]
    int v87; // [esp+2Ch] [ebp-3Ch]
    int v88; // [esp+30h] [ebp-38h]
    int v89; // [esp+34h] [ebp-34h]
    int v90; // [esp+34h] [ebp-34h]
    int v91; // [esp+34h] [ebp-34h]
    int v92; // [esp+38h] [ebp-30h]
    int v93; // [esp+3Ch] [ebp-2Ch]
    int v94; // [esp+40h] [ebp-28h]
    int v95; // [esp+44h] [ebp-24h]
    int v96; // [esp+48h] [ebp-20h]
    unsigned int *v97; // [esp+4Ch] [ebp-1Ch]
    int v98; // [esp+4Ch] [ebp-1Ch]
    int v99; // [esp+50h] [ebp-18h]
    int v100; // [esp+50h] [ebp-18h]
    int v101; // [esp+54h] [ebp-14h]
    int v102; // [esp+54h] [ebp-14h]
    unsigned int *v103; // [esp+54h] [ebp-14h]
    unsigned int *v104; // [esp+54h] [ebp-14h]
    int v105; // [esp+5Ch] [ebp-Ch]
    double v106; // [esp+60h] [ebp-8h]

    v6 = this; /*0x42c2a5*/
    if ( !a5 ) /*0x42c2b6*/
    {
      v106 = 0.0; /*0x42c2cf*/
      v94 = 0; /*0x42c2df*/
  LABEL_5:
      v74 = 0; /*0x42c2fb*/
      goto LABEL_6; /*0x42c2fb*/
    }

// 0x42DCA0
namespace gamemd {
void Pathfinding::SiftDown(int a2) {
    int v2; // esi
    int v3; // edx
    int v4; // edi
    int Pathfinding_field_0x08; // eax
    int v6; // ebp
    int v7; // edi

    v2 = a2; /*0x42dca5*/
    v3 = 2 * a2; /*0x42dcaa*/
    v4 = 2 * a2 + 1; /*0x42dcad*/
    if ( 2 * a2 > *(unsigned int *)this->__pad_0 /*0x42dccb*/
      || *(float *)(*(unsigned int *)(this->Pathfinding_field_0x08 + 4 * a2) + 8) <= (double)*(float *)(*(unsigned int *)(this->Pathfinding_field_0x08 + 8 * a2)
                                                                                                + 8) )
    {
      v3 = a2; /*0x42dccd*/
    }

// 0x4AEBE0
namespace gamemd {
char InputManager_ProcessEvents::Stub() {
    return 0; /*0x4aebe2*/
}
} // namespace gamemd

// 0x4AF720
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
int DriveLocomotionClass::QueryInterface(const void *a2, int *a3) {
    int result; // eax
    char *pad_18; // eax

    result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x4af732*/
    if ( result == -2147467262 ) /*0x4af73c*/
    {
      if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x4af74b*/
      {
        if ( this ) /*0x4af752*/
          pad_18 = this->__pad_18; /*0x4af754*/
        else
          pad_18 = 0; /*0x4af759*/
        *a3 = (int)pad_18; /*0x4af75b*/
      }
      if ( *a3 ) /*0x4af75e*/
      {
        (*(void (__stdcall **)(DriveLocomotionClass *))(*(unsigned int *)this->LocomotionClass + 4))(this); /*0x4af772*/
        return 0; /*0x4af775*/
      }
      else
      {
        return -2147467262; /*0x4af766*/
      }
    }

// 0x4AF720
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
int DriveLocomotionClass::QueryInterface(const void *a2, int *a3) {
    int result; // eax
    char *pad_18; // eax

    result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x4af732*/
    if ( result == -2147467262 ) /*0x4af73c*/
    {
      if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x4af74b*/
      {
        if ( this ) /*0x4af752*/
          pad_18 = this->__pad_18; /*0x4af754*/
        else
          pad_18 = 0; /*0x4af759*/
        *a3 = (int)pad_18; /*0x4af75b*/
      }
      if ( *a3 ) /*0x4af75e*/
      {
        (*(void (__stdcall **)(DriveLocomotionClass *))(*(unsigned int *)this->LocomotionClass + 4))(this); /*0x4af772*/
        return 0; /*0x4af775*/
      }
      else
      {
        return -2147467262; /*0x4af766*/
      }
    }

// 0x4B4CB0
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
LONG DriveLocomotionClass::AddRef() {
    return COM::AddRef((LocomotionClass *)this); /*0x4b4cba*/
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x4B4CC0
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
LONG DriveLocomotionClass::Release() {
    return COM::ReleaseRef((LocomotionClass *)this); /*0x4b4cca*/
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x4B6470
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
int DropPodLocomotionClass::QueryInterface(const void *a2, int *a3) {
    int result; // eax
    char *pad_18; // eax

    result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x4b6482*/
    if ( result == -2147467262 ) /*0x4b648c*/
    {
      if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x4b649b*/
      {
        if ( this ) /*0x4b64a2*/
          pad_18 = this->__pad_18; /*0x4b64a4*/
        else
          pad_18 = 0; /*0x4b64a9*/
        *a3 = (int)pad_18; /*0x4b64ab*/
      }
      if ( *a3 ) /*0x4b64ae*/
      {
        (*(void (__stdcall **)(DropPodLocomotionClass *))(*(unsigned int *)this->LocomotionClass + 4))(this); /*0x4b64c2*/
        return 0; /*0x4b64c5*/
      }
      else
      {
        return -2147467262; /*0x4b64b6*/
      }
    }

// 0x4B4CC0
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
LONG DriveLocomotionClass::Release() {
    return COM::ReleaseRef((LocomotionClass *)this); /*0x4b4cca*/
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x4B6470
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
int DropPodLocomotionClass::QueryInterface(const void *a2, int *a3) {
    int result; // eax
    char *pad_18; // eax

    result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x4b6482*/
    if ( result == -2147467262 ) /*0x4b648c*/
    {
      if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x4b649b*/
      {
        if ( this ) /*0x4b64a2*/
          pad_18 = this->__pad_18; /*0x4b64a4*/
        else
          pad_18 = 0; /*0x4b64a9*/
        *a3 = (int)pad_18; /*0x4b64ab*/
      }
      if ( *a3 ) /*0x4b64ae*/
      {
        (*(void (__stdcall **)(DropPodLocomotionClass *))(*(unsigned int *)this->LocomotionClass + 4))(this); /*0x4b64c2*/
        return 0; /*0x4b64c5*/
      }
      else
      {
        return -2147467262; /*0x4b64b6*/
      }
    }

// 0x4B6470

// 0x4B66A0

// 0x4B66B0

// 0x4C9220
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
int FacingClass::Update(unsigned short *a2) {
    int result; // eax
    int16_t v3; // bp
    int v4; // edi
    int v5; // edx
    int v6; // esi
    int v7; // eax
    int v8; // edi
    int v9; // edx
    int16_t v10; // di
    int v11; // eax
    int v12; // edx
    char *v13; // ecx
    int v14; // [esp+0h] [ebp-10h]
    int v15; // [esp+8h] [ebp-8h]

    IDA_LOWORD(result) = *(unsigned short *)this; /*0x4c9224*/
    if ( *(unsigned short *)this == *a2 ) /*0x4c922d*/
    {
      IDA_LOBYTE(result) = 0; /*0x4c92f7*/
      return result; /*0x4c92f7*/
    }

// 0x4C9300
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
int FacingClass::Set_SyncLog(unsigned int *a2) {
    char *v3; // ebx
    int v4; // eax
    int v5; // edx
    int v6; // ebx
    int16_t v7; // cx
    int v8; // ecx
    char *v9; // esi
    int result; // eax
    int v11; // [esp+8h] [ebp-10h]
    int v12; // [esp+10h] [ebp-8h]

    if ( *((int16_t *)this + 10) > 0 ) /*0x4c930c*/
    {
      v3 = this + 8; /*0x4c930e*/
      if ( Locomotor::GetSpeed((int *)this + 2) ) /*0x4c9313*/
      {
        v4 = abs16(*(unsigned short *)this - *((unsigned short *)this + 2)) / *((int16_t *)this + 10); /*0x4c9333*/
        v11 = *(unsigned int *)this; /*0x4c9337*/
        if ( (int16_t)v4 <= 0 ) /*0x4c933e*/
        {
  LABEL_9:
          IDA_LOWORD(v8) = v11; /*0x4c936a*/
          goto LABEL_12; /*0x4c936f*/
        }
        v5 = *((unsigned int *)this + 4); /*0x4c9340*/
        v6 = *(unsigned int *)v3; /*0x4c9343*/
        if ( v6 != -1 ) /*0x4c9348*/
        {
          if ( (int)dword_A8ED84 - v6 >= v5 ) /*0x4c9354*/
          {
            v7 = 0; /*0x4c9371*/
            goto LABEL_8; /*0x4c9373*/
          }
          IDA_LOWORD(v5) = v5 - ((unsigned short)dword_A8ED84 - v6); /*0x4c9356*/
        }
        v7 = v5; /*0x4c9358*/
  LABEL_8:
        IDA_LOWORD(v11) = v11 - v7 * ((int16_t)(*(unsigned short *)this - *((unsigned short *)this + 2)) / (int16_t)v4); /*0x4c935a*/
        goto LABEL_9; /*0x4c9365*/
      }
    }

// 0x4C9530
namespace gamemd {
unsigned int * MovementClass::CompareAbsCoords(unsigned int *a2) {
    int16_t v2; // bp
    int v3; // esi
    int v4; // eax
    int v5; // edi
    int v6; // eax
    int v7; // esi
    int v8; // edx
    int v9; // ecx
    int16_t v10; // cx
    int v11; // eax
    int16_t v12; // si
    int v14; // [esp+Ch] [ebp-4h]

    v2 = *((unsigned short *)this + 10); /*0x4c9533*/
    if ( v2 <= 0 ) /*0x4c953b*/
      goto LABEL_14; /*0x4c953b*/
    v3 = *((unsigned int *)this + 2); /*0x4c953d*/
    v4 = *((unsigned int *)this + 4); /*0x4c9540*/
    if ( v3 != -1 ) /*0x4c954c*/
    {
      if ( *(unsigned int *)&(&stru_A8EB00)[416] - v3 >= v4 ) /*0x4c9554*/
      {
  LABEL_14:
        v7 = *(unsigned int *)this->__pad_0; /*0x4c95b1*/
        v11 = *(unsigned int *)this->__pad_0; /*0x4c95b3*/
        goto LABEL_15; /*0x4c95b3*/
      }
      v4 -= *(unsigned int *)&(&stru_A8EB00)[416] - v3; /*0x4c9556*/
    }

// 0x4CE840
namespace gamemd {
char DropPod::ProcessLanding() {
    int v3; // edi
    int *v4; // ecx
    int v5; // ecx
    double v6; // st7
    int (__stdcall ***v7)(unsigned int, void *, int *); // eax
    int v8; // edi
    int v9; // eax
    int v10; // ebx
    CellClass *v11; // ebx
    unsigned int *v12; // eax
    int v13; // eax
    int v14; // ecx
    int v15; // eax
    int *v16; // eax
    int v17; // eax
    int v18; // ecx
    AnimClass *v19; // edi
    int Index; // eax
    int v21; // eax
    bool v22; // zf
    AnimClass *v23; // edi
    int v24; // eax
    int *v25; // ecx
    int v26; // eax
    int v27; // edi
    int v28; // ecx
    int *v29; // ecx
    int v30; // eax
    unsigned short *v31; // ecx
    int i; // edi
    int16_t v33; // cx
    unsigned char *v34; // eax
    int v35; // edi
    int16_t v36; // cx
    unsigned char *v37; // eax
    int v38; // edi
    int16_t v39; // cx
    unsigned char *v40; // eax
    int v41; // edi
    int v42; // ebp
    unsigned int *v43; // ebx
    Cell *v44; // eax
    unsigned int *v45; // edi
    int v46; // ebx
    int v47; // [esp+4Eh] [ebp-4Ch]
    char v48; // [esp+65h] [ebp-35h]
    int v49; // [esp+66h] [ebp-34h] BYREF
    int v50; // [esp+6Ah] [ebp-30h]
    int v51; // [esp+6Eh] [ebp-2Ch] BYREF
    int v52; // [esp+72h] [ebp-28h] BYREF
    int v53; // [esp+76h] [ebp-24h]
    int16_t v54[2]; // [esp+7Ah] [ebp-20h] BYREF
    int v55; // [esp+7Eh] [ebp-1Ch] BYREF
    int v56; // [esp+82h] [ebp-18h] BYREF
    int v57; // [esp+86h] [ebp-14h]
    int GroundHeight; // [esp+8Ah] [ebp-10h]
    char v59[12]; // [esp+8Eh] [ebp-Ch] BYREF

    if ( !*((unsigned char *)this + 81) ) /*0x4ce849*/
      return 1; /*0x4ce859*/
    v48 = 0; /*0x4ce85d*/
    v3 = (*(int (__thiscall **)(unsigned int))(**((unsigned int **)this + 3) + 456))(*((unsigned int *)this + 3)); /*0x4ce86d*/
    v4 = (int *)(*((unsigned int *)this + 3) + 156); /*0x4ce86f*/
    v50 = v3; /*0x4ce875*/
    v56 = *v4; /*0x4ce87b*/
    v57 = v4[1]; /*0x4ce887*/
    GroundHeight = v4[2]; /*0x4ce88e*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v56)->flags[0] & 0x100) != 0 && v3 >= dword_8B3CAC ) /*0x4ce8ae*/
    {
      v3 -= dword_8B3CAC; /*0x4ce8b0*/
      v50 = v3; /*0x4ce8b2*/
    }

// 0x4FFB20
namespace gamemd {
int PathfindingClass::FindPath(unsigned int *a2) {
    double v2; // st7
    int v3; // edx
    int result; // eax
    PathfindingClass *v7; // ebp
    PathfindingClass v8; // edi
    int v9; // eax
    int v10; // ecx
    void *v11; // eax
    int *v12; // edx
    int v13; // eax
    unsigned int v14; // edi
    int v15; // eax
    int v16; // ecx
    PathfindingClass v17; // ebx
    int v18; // edx
    void *v19; // eax
    int *v20; // eax
    double v21; // [esp+8h] [ebp-3Ch]
    double v22; // [esp+10h] [ebp-34h]
    int16_t v23[2]; // [esp+28h] [ebp-1Ch] BYREF
    int v24; // [esp+2Ch] [ebp-18h] BYREF
    int v25; // [esp+30h] [ebp-14h]
    int v26; // [esp+34h] [ebp-10h]
    unsigned char v27[12]; // [esp+38h] [ebp-Ch] BYREF
    unsigned int v28; // [esp+48h] [ebp+4h]

    v3 = *(unsigned int *)&(&stru_A8EB00)[1052]; /*0x4ffb23*/
    _ESI = a2; /*0x4ffb2c*/
    if ( *a2 == *(unsigned int *)&(&stru_A8EB00)[1044] /*0x4ffb4e*/
      && a2[1] == *(unsigned int *)&(&stru_A8EB00)[1048]
      && a2[2] == *(unsigned int *)&(&stru_A8EB00)[1052] )
    {
      return -1; /*0x4ffb53*/
    }

// 0x54DC60

// 0x54DF50

// 0x54DF60

// 0x5FB160
namespace gamemd {
void AudioOptionsClass::ApplySettings() {
    double v2; // st7
    int v3; // eax
    double v4; // st7
    int v5; // eax
    int v6; // eax
    double v7; // st7
    int v8; // eax
    int v9; // eax
    int v10; // eax

    v2 = *((float *)this + 14); /*0x5fb163*/
    if ( v2 >= 1.0 ) /*0x5fb171*/
      v2 = 1.0; /*0x5fb175*/
    *((float *)this + 14) = v2; /*0x5fb17b*/
    IDA_LOWORD(v3) = Math::RoundToInt(v2 * 16384.0); /*0x5fb184*/
    EndBufferMixer((int *)g_MixerChannel_Score, v3); /*0x5fb191*/
    Debug::Log(); /*0x5fb1a4*/
    v4 = *((float *)this + 15); /*0x5fb1a9*/
    if ( v4 >= 1.0 ) /*0x5fb1ba*/
      v4 = 1.0; /*0x5fb1be*/
    *((float *)this + 15) = v4; /*0x5fb1c4*/
    IDA_LOWORD(v5) = Math::RoundToInt(v4 * 255.0); /*0x5fb1cd*/
    ThemeClass::GetField(v5); /*0x5fb1d4*/
    IDA_LOWORD(v6) = Math::RoundToInt(*((float *)this + 15) * 16384.0); /*0x5fb1e2*/
    EndBufferMixer((int *)g_MixerChannel_Voice, v6); /*0x5fb1ef*/
    Debug::Log(); /*0x5fb202*/
    v7 = *((float *)this + 16); /*0x5fb207*/
    if ( v7 >= 1.0 ) /*0x5fb218*/
      v7 = 1.0; /*0x5fb21c*/
    *((float *)this + 16) = v7; /*0x5fb222*/
    IDA_LOWORD(v8) = Math::RoundToInt(v7 * 16384.0); /*0x5fb22b*/
    EndBufferMixer((int *)g_MixerChannel_Theme, v8); /*0x5fb238*/
    IDA_LOWORD(v9) = Math::RoundToInt(*((float *)this + 16) * 255.0); /*0x5fb246*/
    TechnoTypeClass::CheckFlag((TechnoTypeClass *)&unk_A83D10, v9); /*0x5fb251*/
    Debug::Log(); /*0x5fb264*/
    byte_A83D20 = *((unsigned char *)this + 68); /*0x5fb26f*/
    Debug::Log(); /*0x5fb28b*/
    byte_A83D22 = *((unsigned char *)this + 70); /*0x5fb296*/
    v10 = Debug::Log(); /*0x5fb2b2*/
    IDA_LOBYTE(v10) = *((unsigned char *)this + 29); /*0x5fb2b7*/
    nullsub_36(v10); /*0x5fb2c3*/
    SetGlobalFlag(*((unsigned char *)this + 30)); /*0x5fb2cc*/
}
} // namespace gamemd

// 0x69EE30
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
int ShipLocomotionClass::QueryInterface(const void *a2, int *a3) {
    int result; // eax
    char *pad_18; // eax

    result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x69ee42*/
    if ( result == -2147467262 ) /*0x69ee4c*/
    {
      if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x69ee5b*/
      {
        if ( this ) /*0x69ee62*/
          pad_18 = this->__pad_18; /*0x69ee64*/
        else
          pad_18 = 0; /*0x69ee69*/
        *a3 = (int)pad_18; /*0x69ee6b*/
      }
      if ( *a3 ) /*0x69ee6e*/
      {
        (*(void (__stdcall **)(ShipLocomotionClass *))(*(unsigned int *)this->LocomotionClass + 4))(this); /*0x69ee82*/
        return 0; /*0x69ee85*/
      }
      else
      {
        return -2147467262; /*0x69ee76*/
      }
    }

// 0x69EE30

// 0x6A4260

// 0x6A4270

// 0x6E6E20
namespace gamemd {
void * BuildingLoadQueue::GetNext() {
    char BuildingLoadQueue_field_0x04; // al
    void *vtable1; // edx
    int uniqueId; // eax
    void ***v5; // eax
    int v7; // ecx
    int16_t v8[4]; // [esp+4h] [ebp-8h] BYREF

    BuildingLoadQueue_field_0x04 = this->BuildingLoadQueue_field_0x04; /*0x6e6e26*/
    if ( BuildingLoadQueue_field_0x04 == 52 ) /*0x6e6e2b*/
    {
      vtable1 = g_BuildingLoadQueue_Array; /*0x6e6e31*/
      if ( g_BuildingLoadQueue_Array ) /*0x6e6e39*/
      {
        uniqueId = g_BuildingLoadQueue_Array; /*0x6e6e3b*/
        if ( g_BuildingLoadQueue_Array && *(unsigned int *)g_BuildingLoadQueue_Array == *(unsigned int *)this->__pad_0 ) /*0x6e6e4c*/
          goto LABEL_10; /*0x6e6e4c*/
        if ( g_BuildingLoadQueue_Array ) /*0x6e6e50*/
        {
          if ( !IDA_LOBYTE(g_BuildingLoadQueue_Array) ) /*0x6e6e59*/
          {
            qsort( /*0x6e6e6a*/
              g_BuildingLoadQueue_Array.TechnoTypeClass,
              (size_t)g_BuildingLoadQueue_Array,
              8u,
              (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
            vtable1 = g_BuildingLoadQueue_Array; /*0x6e6e6f*/
            g_BuildingLoadQueue_Array = 0; /*0x6e6e78*/
            IDA_LOBYTE(g_BuildingLoadQueue_Array) = 1; /*0x6e6e82*/
          }
          *(unsigned int *)v8 = *(unsigned int *)this->__pad_0; /*0x6e6e96*/
          uniqueId = BinaryArraySearch((int)g_BuildingLoadQueue_Array.TechnoTypeClass, (int)vtable1, (int *)v8); /*0x6e6e9a*/
          if ( uniqueId ) /*0x6e6ea1*/
          {
            g_BuildingLoadQueue_Array = uniqueId; /*0x6e6ea3*/
  LABEL_10:
            v5 = (void ***)(uniqueId + 4); /*0x6e6ea8*/
            return __RTDynamicCast( /*0x6e6ecf*/
                     *v5,
                     0,
                     0,
                     0,
                     0);
          }
        }
      }
      v5 = (void ***)&unk_B78828; /*0x6e6ead*/
      return __RTDynamicCast(*v5, 0, 0, 0, 0); /*0x6e6ead*/
    }

// 0x6E6F20
namespace gamemd {
void * BuildingLoadQueue::Find() {
    int vtable1; // ecx
    int uniqueId; // edx
    int v4; // ebx
    unsigned int *vtable0; // edi
    int v6; // esi

    if ( IDA_LOBYTE(this->BuildingLoadQueue_field_0x04) != 52 ) /*0x6e6f27*/
      return 0; /*0x6e6fe0*/
    vtable1 = (int)g_BuildingLoadQueue_Array; /*0x6e6f2d*/
    if ( !g_BuildingLoadQueue_Array ) /*0x6e6f37*/
      return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6f37*/
    uniqueId = g_BuildingLoadQueue_Array; /*0x6e6f39*/
    if ( g_BuildingLoadQueue_Array && *(unsigned int *)g_BuildingLoadQueue_Array == *(unsigned int *)this->__pad_0 ) /*0x6e6f49*/
      return AbstractClass::IsTechnoType(*(AbstractClass **)(uniqueId + 4)); /*0x6e6fdf*/
    if ( !IDA_LOBYTE(g_BuildingLoadQueue_Array) ) /*0x6e6f56*/
    {
      qsort( /*0x6e6f67*/
        g_BuildingLoadQueue_Array.TechnoTypeClass,
        (size_t)g_BuildingLoadQueue_Array,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      vtable1 = (int)g_BuildingLoadQueue_Array; /*0x6e6f6c*/
      g_BuildingLoadQueue_Array = 0; /*0x6e6f75*/
      IDA_LOBYTE(g_BuildingLoadQueue_Array) = 1; /*0x6e6f7f*/
    }

// 0x6E6FF0
namespace gamemd {
int BuildingLoadQueue::FindObject() {
    int vtable1; // ecx
    int uniqueId; // edx
    int v4; // ebx
    unsigned int *vtable0; // edi
    int v6; // esi
    void ***v7; // eax

    if ( IDA_LOBYTE(this->BuildingLoadQueue_field_0x04) != 52 ) /*0x6e6ff7*/
      return 0; /*0x6e70b8*/
    vtable1 = (int)g_BuildingLoadQueue_Array; /*0x6e6ffd*/
    if ( !g_BuildingLoadQueue_Array ) /*0x6e7007*/
      goto LABEL_13; /*0x6e7007*/
    uniqueId = g_BuildingLoadQueue_Array; /*0x6e7009*/
    if ( g_BuildingLoadQueue_Array && *(unsigned int *)g_BuildingLoadQueue_Array == *(unsigned int *)this->__pad_0 ) /*0x6e7019*/
    {
  LABEL_17:
      v7 = (void ***)(uniqueId + 4); /*0x6e70b3*/
      return (int)__RTDynamicCast(*v7, 0, 0, 0, 0); /*0x6e70b6*/
    }

// 0x752DB0
namespace gamemd {
char AudioEvent::LoadFromINI(uint8_t ***a2) {
    double v5; // [esp+0h] [ebp-20Ch]
    char Source[500]; // [esp+18h] [ebp-1F4h] BYREF

    _ESI = this; /*0x752dc0*/
    INIClass::ResetSection((INIClass *)a2); /*0x752dc4*/
    *((unsigned int *)_ESI + 10) = 1065353216; /*0x752dcc*/
    if ( !INIClass::BinarySearchSection((int)a2, (uint8_t *)_ESI) ) /*0x752dd3*/
      return 0; /*0x752fec*/
    __asm { fld dword ptr [esi+28h] } /*0x752de7*/
    __asm { fstp [esp+20Ch+var_20C]; double }
    INIClass::ReadDouble_Overwrite((double *)a2, (uint8_t *)_ESI, g_INI_Key_Volume, v5); /*0x752df9*/
    __asm { fstp dword ptr [esi+28h] } /*0x752dfe*/
    *((float *)_ESI + 10) = _ET1; /*0x752dfe*/
    INIClass::GetString( /*0x752e18*/
      (INIClass *)a2,
      (uint8_t *)_ESI,
      (uint8_t *)g_INI_Key_Type,
      &g_INI_DefaultBuffer,
      Source,
      500);
    if ( strlen(Source) ) /*0x752e21*/
    {
      if ( _strcmpi(Source, aQueue) ) /*0x752e37*/
      {
        if ( _strcmpi(Source, aStandard) ) /*0x752e56*/
        {
          if ( _strcmpi(Source, aInterrupt) ) /*0x752e71*/
          {
            if ( !_strcmpi(Source, aQueuedInterrup) ) /*0x752e90*/
              *((unsigned int *)_ESI + 19) = 3; /*0x752e9c*/
          }
          else
          {
            *((unsigned int *)_ESI + 19) = 2; /*0x752e7d*/
          }
        }
        else
        {
          *((unsigned int *)_ESI + 19) = 0; /*0x752e62*/
        }
      }
      else
      {
        *((unsigned int *)_ESI + 19) = 1; /*0x752e43*/
      }
    }

// 0x754BE0
namespace gamemd {
void * AudioConfig::InitDefault() {
    qmemcpy(this, &stru_B44318, 0x30u); /*0x754bf0*/
    return this; /*0x754bf2*/
}
} // namespace gamemd

// 0x756BB0
namespace gamemd {
int AudioOcclusion::ComputeBoundingVertices() {
    unsigned int v2; // ecx
    int result; // eax
    int v4; // eax
    int v5; // ebx
    float *v6; // edx
    float v7; // [esp+4h] [ebp-78h]
    int v8; // [esp+8h] [ebp-74h]
    float v9; // [esp+8h] [ebp-74h]
    float v10; // [esp+Ch] [ebp-70h]
    int v11; // [esp+10h] [ebp-6Ch]
    int v12; // [esp+14h] [ebp-68h]
    float v13; // [esp+18h] [ebp-64h]
    float v14; // [esp+1Ch] [ebp-60h]
    float v15; // [esp+24h] [ebp-58h]

    v2 = 0; /*0x756bb6*/
    result = *((unsigned int *)this + 2); /*0x756bb8*/
    if ( result ) /*0x756bbd*/
    {
      result = 0; /*0x756bc4*/
      v11 = 0; /*0x756bc8*/
      do /*0x756dc0*/
      {
        v4 = *((unsigned int *)this + 5) + result; /*0x756bd1*/
        v5 = *(uint8_t *)(v4 + 161); /*0x756bdb*/
        v12 = *(uint8_t *)(v4 + 162); /*0x756bff*/
        v14 = (double)*(uint8_t *)(v4 + 160) * 0.5; /*0x756c05*/
        v8 = -*(uint8_t *)(v4 + 160); /*0x756c22*/
        v13 = (double)v5 * 0.5; /*0x756c29*/
        *(float *)(v4 + 64) = v14; /*0x756c39*/
        *(float *)(v4 + 68) = v13; /*0x756c48*/
        v15 = (double)-v12 * 0.5; /*0x756c4b*/
        *(float *)(v4 + 72) = v15; /*0x756c5d*/
        *(float *)(v4 + 76) = v14; /*0x756c64*/
        v10 = (double)-v5 * 0.5; /*0x756c6c*/
        *(float *)(v4 + 80) = v10; /*0x756c82*/
        *(float *)(v4 + 84) = v15; /*0x756c8f*/
        v7 = (double)v8 * 0.5; /*0x756c92*/
        *(float *)(v4 + 88) = v7; /*0x756ca2*/
        *(float *)(v4 + 92) = v10; /*0x756cae*/
        *(float *)(v4 + 96) = v15; /*0x756cb9*/
        *(float *)(v4 + 100) = v7; /*0x756cdd*/
        *(float *)(v4 + 104) = v13; /*0x756ce9*/
        *(float *)(v4 + 108) = v15; /*0x756cf0*/
        v9 = (double)v12 * 0.5; /*0x756cfa*/
        *(float *)(v4 + 112) = v14; /*0x756d02*/
        *(float *)(v4 + 116) = v13; /*0x756d0c*/
        *(float *)(v4 + 120) = v9; /*0x756d13*/
        *(float *)(v4 + 124) = v14; /*0x756d2d*/
        *(float *)(v4 + 128) = v10; /*0x756d34*/
        *(float *)(v4 + 132) = v9; /*0x756d3b*/
        v6 = (float *)(v4 + 136); /*0x756d5a*/
        v4 += 148; /*0x756d60*/
        ++v2; /*0x756d65*/
        *v6 = v7; /*0x756d66*/
        v6[1] = v10; /*0x756d6c*/
        v6[2] = v9; /*0x756d73*/
        *(float *)v4 = v7; /*0x756d98*/
        *(float *)(v4 + 4) = v13; /*0x756da1*/
        *(float *)(v4 + 8) = v9; /*0x756dab*/
        result = v11 + 164; /*0x756db5*/
        v11 += 164; /*0x756dbc*/
      }
      while ( v2 < *((unsigned int *)this + 2) ); /*0x756dc0*/
    }

// 0x756BB0
namespace gamemd {
int AudioOcclusion::ComputeBoundingVertices() {
    unsigned int v2; // ecx
    int result; // eax
    int v4; // eax
    int v5; // ebx
    float *v6; // edx
    float v7; // [esp+4h] [ebp-78h]
    int v8; // [esp+8h] [ebp-74h]
    float v9; // [esp+8h] [ebp-74h]
    float v10; // [esp+Ch] [ebp-70h]
    int v11; // [esp+10h] [ebp-6Ch]
    int v12; // [esp+14h] [ebp-68h]
    float v13; // [esp+18h] [ebp-64h]
    float v14; // [esp+1Ch] [ebp-60h]
    float v15; // [esp+24h] [ebp-58h]

    v2 = 0; /*0x756bb6*/
    result = *((unsigned int *)this + 2); /*0x756bb8*/
    if ( result ) /*0x756bbd*/
    {
      result = 0; /*0x756bc4*/
      v11 = 0; /*0x756bc8*/
      do /*0x756dc0*/
      {
        v4 = *((unsigned int *)this + 5) + result; /*0x756bd1*/
        v5 = *(uint8_t *)(v4 + 161); /*0x756bdb*/
        v12 = *(uint8_t *)(v4 + 162); /*0x756bff*/
        v14 = (double)*(uint8_t *)(v4 + 160) * 0.5; /*0x756c05*/
        v8 = -*(uint8_t *)(v4 + 160); /*0x756c22*/
        v13 = (double)v5 * 0.5; /*0x756c29*/
        *(float *)(v4 + 64) = v14; /*0x756c39*/
        *(float *)(v4 + 68) = v13; /*0x756c48*/
        v15 = (double)-v12 * 0.5; /*0x756c4b*/
        *(float *)(v4 + 72) = v15; /*0x756c5d*/
        *(float *)(v4 + 76) = v14; /*0x756c64*/
        v10 = (double)-v5 * 0.5; /*0x756c6c*/
        *(float *)(v4 + 80) = v10; /*0x756c82*/
        *(float *)(v4 + 84) = v15; /*0x756c8f*/
        v7 = (double)v8 * 0.5; /*0x756c92*/
        *(float *)(v4 + 88) = v7; /*0x756ca2*/
        *(float *)(v4 + 92) = v10; /*0x756cae*/
        *(float *)(v4 + 96) = v15; /*0x756cb9*/
        *(float *)(v4 + 100) = v7; /*0x756cdd*/
        *(float *)(v4 + 104) = v13; /*0x756ce9*/
        *(float *)(v4 + 108) = v15; /*0x756cf0*/
        v9 = (double)v12 * 0.5; /*0x756cfa*/
        *(float *)(v4 + 112) = v14; /*0x756d02*/
        *(float *)(v4 + 116) = v13; /*0x756d0c*/
        *(float *)(v4 + 120) = v9; /*0x756d13*/
        *(float *)(v4 + 124) = v14; /*0x756d2d*/
        *(float *)(v4 + 128) = v10; /*0x756d34*/
        *(float *)(v4 + 132) = v9; /*0x756d3b*/
        v6 = (float *)(v4 + 136); /*0x756d5a*/
        v4 += 148; /*0x756d60*/
        ++v2; /*0x756d65*/
        *v6 = v7; /*0x756d66*/
        v6[1] = v10; /*0x756d6c*/
        v6[2] = v9; /*0x756d73*/
        *(float *)v4 = v7; /*0x756d98*/
        *(float *)(v4 + 4) = v13; /*0x756da1*/
        *(float *)(v4 + 8) = v9; /*0x756dab*/
        result = v11 + 164; /*0x756db5*/
        v11 += 164; /*0x756dbc*/
      }
      while ( v2 < *((unsigned int *)this + 2) ); /*0x756dc0*/
    }

// 0x75C7F0

// 0x75CB80

// 0x75CB90

