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
    unsigned char q000[0x58];
    unsigned char __pad_58[0x280 - 0x58];
};
extern stru_87F5F0_host stru_87F5F0;    // data: 0x87F5F0
// stru_87E790 -- 临界区宿主 (Enter/LeaveCriticalSection @ +0x68)
struct stru_87E790_host {
    unsigned char q000[0x280];
};
extern unsigned char stru_87E790; // data: 0x87E790
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
char SuperClass::RemoveFromPointerArray(int a2) {
  char *SuperClass_field_0x10; // edx
  int v3; // eax
  char *v4; // edx

  SuperClass_field_0x10 = (char *)this->uniqueId; /*0x6ce320*/
  v3 = a2; /*0x6ce323*/
  if ( a2 >= (int)SuperClass_field_0x10 ) /*0x6ce329*/
    return 0; /*0x6ce34c*/
  v4 = SuperClass_field_0x10 - 1; /*0x6ce32b*/
  this->uniqueId = v4; /*0x6ce32e*/
  if ( a2 < (int)v4 ) /*0x6ce331*/
  {
    do /*0x6ce344*/
    {
      ++v3; /*0x6ce337*/
      *((unsigned int *)this->vtable2 + v3 - 1) = *((unsigned int *)this->vtable2 + v3); /*0x6ce33b*/
    }
    while ( v3 < (int)this->uniqueId ); /*0x6ce344*/
  }
  return 1; /*0x6ce349*/
}
} // namespace gamemd

// 0x6E1C40
namespace gamemd {
char SuperClass::Get(int a2, int a3, int a4, int a5) {
  int Status; // eax

  SuperClass::StartTimer(*(unsigned int *)(*(unsigned int *)(a2 + 600) + 4 * *&this->q090), 0, 0, 0); /*0x6e1c5d*/
  *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(a2 + 600) + 4 * *&this->q090) + 96) = 0; /*0x6e1c71*/
  if ( dword_A83D4C == (Object *)a2 ) /*0x6e1c7c*/
  {
    SidebarClass::AddCameo((SidebarClass *)&DataGlobal_87F7E8, 31, *&this->q090); /*0x6e1c8c*/
    Status = HouseClass::GetStatus((HouseClass *)0x1F, 0); /*0x6e1c9e*/
    Sidebar::ActivateTab((int *)&DataGlobal_87F7E8, Status); /*0x6e1ca9*/
  }
  return 1; /*0x6e1cae*/
}
} // namespace gamemd

// 0x4010A0
namespace gamemd {
int AudioChannel::IsActive() {
  return (this->__pad_000 & 2) != 0 || (this->u32_28 & 2) != 0 || (this->u32_50 & 2) != 0; /*0x4010b4*/
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
}
// 0x402600
namespace gamemd {
int AudioChannel::DeactivatePlay() {
  int v2; // eax

  (*(void (**)(void))(this->u32_D4 + 40))(); /*0x402609*/
  if ( (this->u32_A4 & 1) != 0 ) /*0x402613*/
  {
    this->u32_A4 &= ~1u; /*0x40261e*/
    this->u32_D4->vt_slot_20(); /*0x40262c*/
    v2 = this->u32_A4; /*0x40262f*/
    (*((unsigned char *)&(v2))) = v2 | 4; /*0x402635*/
    this->u32_A4 = v2; /*0x402637*/
  }
  return this->u32_D4->vt_slot_44();
}
}
// 0x402650
namespace gamemd {
int AudioChannel::ActivatePlay() {
  int v2; // eax

  (*(void (**)(void))(this->u32_D4 + 40))(); /*0x402659*/
  if ( (this->u32_A4 & 4) != 0 ) /*0x402663*/
  {
    this->u32_D4->vt_slot_24(); /*0x40266d*/
    v2 = this->u32_A4; /*0x402670*/
    (*((unsigned char *)&(v2))) = v2 & 0xFB; /*0x402676*/
    this->u32_A4 = v2; /*0x402678*/
    this->u32_A4 |= 1u; /*0x402687*/
  }
  return this->u32_D4->vt_slot_44();
}
}
// 0x4026A0
namespace gamemd {
int AudioFile::GetCallback() {
  return (*(int (**)(void))(this->u32_D4 + 40))();
}
} // namespace gamemd

// 0x403920
namespace gamemd {
int AudioThread::UpdateStats(int64_t a2) {

  int result; // eax
  unsigned __int64 v3; // kr00_8

  v3 = a2 - *((unsigned long long *)&this->q02C); /*0x403930*/
  result = (((v3) >> 32) & 0xFFFFFFFFu); /*0x403930*/
  *((unsigned long long *)&this->u32_10) = v3; /*0x403938*/
  ++this->q012; /*0x403942*/
  if ( *((unsigned long long *)&this->u32_1C) > *((unsigned long long *)&this->u32_1C) ) /*0x403957*/
  {
    this->u8_6 = 0; /*0x40395b*/
    this->u8_7 = 0; /*0x40395e*/
  }
  if ( v3 > *((unsigned long long *)&this->u32_1C) ) /*0x40396f*/
    *((unsigned long long *)&this->u32_18) = v3; /*0x403971*/
  if ( v3 > *((unsigned long long *)&this->q00C) ) /*0x403985*/
    ++this->u8_13; /*0x40398b*/
  if ( v3 > *((unsigned long long *)&this->q034) ) /*0x40399c*/
    *((unsigned long long *)&this->u32_30) = v3; /*0x40399e*/
  *((unsigned long long *)&this->u32_28) = a2; /*0x4039a4*/
  return result; /*0x4039ae*/

}
} // namespace gamemd

// 0x405190
namespace gamemd {
int * AudioPool::ProcessQueue() {
  int *v2; // esi
  LinkedList *v3; // esi
  DListNode *v4; // edi
  int v5; // eax

  if ( !dword_816108 || !dword_87E2A4 || !this->u32_C ) /*0x4051b6*/
    return 0; /*0x4051b6*/
  v2 = LinkedList::Next((LinkedList *)dword_87E2A8); /*0x4051ca*/
  if ( !v2 ) /*0x4051ce*/
  {
    if ( g_AudioConfigState ) /*0x4051d6*/
    {
      v3 = *(LinkedList **)g_AudioStreamObject; /*0x4051d8*/
      if ( *(DListNode **)g_AudioStreamObject != &g_AudioStreamObject ) /*0x4051e4*/
      {
        do /*0x40522b*/
        {
          v4 = *(DListNode **)v3->__pad_000; /*0x4051e8*/
          if ( (v3[2].__pad_0[0] & 1) != 0 ) /*0x4051ef*/
          {
            LinkedList::Init(v3); /*0x4051f3*/
            *v3->u32_68.__pad_0 = 0; /*0x4051f8*/
            if ( v3[2].__pad_0[0] < 0 ) /*0x405203*/
              operator delete((void *)(v3)); /*0x405206*/
            else
              PushFrontLinkedListAlt(dword_87E2A8, (int)v3); /*0x405218*/
            --dword_87E28C; /*0x40521d*/
          }
          v3 = (LinkedList *)v4; /*0x405229*/
        }
        while ( v4 != &g_AudioStreamObject ); /*0x40522b*/
      }
    }
    v2 = LinkedList::Next((LinkedList *)dword_87E2A8); /*0x40523c*/
    if ( !v2 ) /*0x405240*/
      return 0; /*0x4052ce*/
  }
  v5 = ++dword_87E28C; /*0x405251*/
  if ( dword_87E28C > v5 ) /*0x405259*/
    v5 = v5; /*0x40525b*/
  memset(v2, 0, 0x280u); /*0x405269*/
  v2[9] = (int)this; /*0x40526d*/
  DListNode::InitEmpty((DListNode *)v2); /*0x405270*/
  v2[7] = 0; /*0x405275*/
  v2[85] = 0; /*0x40527e*/
  v2[154] = 0; /*0x405284*/
  v2[120] = 0; /*0x40528a*/
  v2->u32_A8 = 0; /*0x405290*/
  AudioMixer::Init((AudioMixer *)(v2 + 46)); /*0x405296*/
  v2[86] = 0; /*0x40529b*/
  InsertAfterDListNode((int)&g_AudioStreamObject, v2); /*0x4052a8*/
  v2[78] = dword_81610C++; /*0x4052b2*/
  return v2; /*0x4052be*/
}
} // namespace gamemd

// 0x405C00
namespace gamemd {
unsigned int * AudioFileClass::Release() {
  unsigned int *result; // eax
  AudioFileClass v2; // esi
  int v3; // ecx
  int v4; // ebx
  RefCount **v5; // edi
  Voice *v6; // [esp+0h] [ebp-Ch]

  result = this; /*0x405c01*/
  if ( g_AudioConfigState ) /*0x405c13*/
  {
    if ( this->u32_C == &dword_87E294 ) /*0x405c20*/
    {
      v2 = *this; /*0x405c26*/
      if ( *this ) /*0x405c26*/
      {
        if ( this->u32_8 == *(unsigned int *)(*(unsigned int *)&v2 + 36) /*0x405c53*/
          && this->u32_4 == *(unsigned int *)(*(unsigned int *)&v2 + 312)
          && (*(unsigned char *)(*(unsigned int *)&v2 + 24) & 1) == 0 )
        {
          v3 = *(unsigned int *)(*(unsigned int *)&v2 + 176); /*0x405c59*/
          if ( v3 && v2 == *(unsigned int *)(v3 + 192) ) /*0x405c69*/
          {
            if ( (*(unsigned char *)(*(unsigned int *)&v2 + 24) & 2) != 0 ) /*0x405c6f*/
              Voice::Stop(v6); /*0x405c71*/
            AudioStream::ReleaseChannel(*(AudioStream **)(*(unsigned int *)&v2 + 176)); /*0x405c7c*/
            *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v2 + 176) + 192) = 0; /*0x405c87*/
            *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v2 + 176) + 188) = 0; /*0x405c93*/
            *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v2 + 176) + 180) = 0; /*0x405c9f*/
            *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v2 + 176) + 184) = 0; /*0x405cab*/
            *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v2 + 176) + 144) = 0; /*0x405cb7*/
            *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v2 + 176) + 152) = 0; /*0x405cc3*/
            *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&v2 + 176) + 156) = 0; /*0x405ccf*/
            result = this; /*0x405cd5*/
            *(unsigned int *)(*(unsigned int *)&v2 + 176) = 0; /*0x405cd9*/
          }
          v4 = 0; /*0x405ce6*/
          if ( *(int *)(*(unsigned int *)&v2 + 168) > 0 ) /*0x405cea*/
          {
            v5 = (RefCount **)(*(unsigned int *)&v2 + 40); /*0x405ced*/
            do /*0x405d05*/
            {
              RefCount::Decrement(*v5); /*0x405cf2*/
              *v5 = 0; /*0x405cf7*/
              ++v4; /*0x405cff*/
              ++v5; /*0x405d00*/
            }
            while ( v4 < *(unsigned int *)(*(unsigned int *)&v2 + 168) ); /*0x405d05*/
            result = this; /*0x405d07*/
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
  result->u32_8 = 0; /*0x405d31*/
  result->u32_C = 0; /*0x405d34*/
  return result; /*0x405d37*/
}
}
// 0x406130
namespace gamemd {
int * AudioSource::Get() {
  int *result; // eax

  if ( !g_AudioConfigState || this->u32_C != &dword_87E294 ) /*0x406140*/
    return 0; /*0x406166*/
  result = (int *)*this; /*0x406142*/
  if ( *(unsigned int *)this && (this->u32_8 != result[9] || this->u32_4 != result[78]) ) /*0x40615e*/
  {
    result = 0; /*0x406160*/
    *this = 0; /*0x406162*/
  }
  return result; /*0x406165*/
}
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

  if ( (AudioSample *)this->q004 != this ) /*0x407aa4*/
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&CriticalSection); /*0x407aab*/
    LinkedList::Init((LinkedList *)this); /*0x407aaf*/
    LeaveCriticalSection((LPCRITICAL_SECTION)&CriticalSection); /*0x407ab9*/
  }
  if ( !this->u32_88 && this->u32_14 ) /*0x407ac5*/
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&CriticalSection); /*0x407ad1*/
    Voice::Stop(v8); /*0x407ad6*/
    LeaveCriticalSection((LPCRITICAL_SECTION)&CriticalSection); /*0x407ae0*/
  }
  v2 = (Count *)this->u32_34; /*0x407ae2*/
  if ( v2 ) /*0x407ae7*/
  {
    Count::DecrementRefCountsAudio(v2); /*0x407ae9*/
    this->u32_34 = 0; /*0x407aee*/
  }
  v3 = (Count *)this->u32_38; /*0x407af5*/
  if ( v3 ) /*0x407afa*/
  {
    Count::DecrementRefCountsAudio(v3); /*0x407afc*/
    this->u32_38 = 0; /*0x407b01*/
  }
  v4 = (AudioSample *)this->u32_30; /*0x407b08*/
  if ( v4 ) /*0x407b0d*/
    AudioSample::InitLinkedList(v4); /*0x407b0f*/
  v5 = (AudioSample *)this->u32_14; /*0x407b14*/
  if ( v5 ) /*0x407b19*/
    AudioSample::ResetState(v5); /*0x407b1b*/
  v6 = (void (__thiscall ***)(unsigned int, int))this->u32_7C; /*0x407b20*/
  if ( v6 ) /*0x407b25*/
    (**v6)(v6, 1); /*0x407b2b*/
  operator delete((this)); /*0x407b2e*/
  return result; /*0x407b36*/
}
}
// 0x4080D0
namespace gamemd {
int AudioSample::IsBuffering() {
  return (this->AudioSample_field_0x0C & 1) != 0 /*0x4080e8*/
      && *(unsigned int *)(this->u32_14 + 20) != *(unsigned int *)(this->u32_14 + 24);
}
} // namespace gamemd

// 0x408600
namespace gamemd {
int AudioNode::Release() {
  int result; // eax

  this->u32_14 = 0; /*0x408600*/
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
  AudioSample_field_0x04 = this->AudioSample_field_0x04; /*0x40884b*/
  p_AudioSample_field_0x04 = &this->AudioSample_field_0x04; /*0x40884e*/
  if ( (int *)AudioSample_field_0x04 != &this->AudioSample_field_0x04 ) /*0x408853*/
  {
    do /*0x4088a0*/
    {
      LinkedList::Init((LinkedList *)AudioSample_field_0x04); /*0x40885c*/
      v4 = AudioSample_field_0x04->ptr_30; /*0x408861*/
      AudioSample_field_0x04->ptr_30 = 0; /*0x408864*/
      v5 = v4[5]; /*0x40886d*/
      --*v4; /*0x408871*/
      v4[5] = v5 - AudioSample_field_0x04->referenceCount; /*0x408878*/
      v4[4] &= ~2u; /*0x408880*/
      if ( AudioSample_field_0x04->uniqueId ) /*0x408883*/
        __3_YAXPAX_Z(*(void **)(AudioSample_field_0x04 + 16)); /*0x40888b*/
      __3_YAXPAX_Z((void *)AudioSample_field_0x04); /*0x408894*/
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
      v9 = v8 + 9; /*0x4088b4*/
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
  p_AudioSample_field_0x10 = &v1[3].AudioSample_field_0x10; /*0x4088db*/
  v12 = 2; /*0x4088de*/
  v13 = p_AudioSample_field_0x10; /*0x4088e3*/
  do /*0x408906*/
  {
    *(v13 - 3) = v6; /*0x4088e5*/
    *v13 = -1001; /*0x4088e8*/
    v13->vtable2 = *v13; /*0x4088f0*/
    *(v13 - 1) = 0; /*0x4088f6*/
    AudioSample::SetField((AudioSample *)(v13 - 13)); /*0x4088fd*/
    v13 += 16; /*0x408902*/
    --v12; /*0x408905*/
  }
  while ( v12 ); /*0x408906*/
  *p_AudioSample_field_0x10 += this->u32_14; /*0x408913*/
  __3_YAXPAX_Z(this); /*0x408916*/

}
} // namespace gamemd

// 0x408930
namespace gamemd {
int AudioSample::SetField() {
  int result; // eax

  result = this->u32_28; /*0x408930*/
  this->u32_2C = 0; /*0x408937*/
  this->AudioSample_field_0x0C = result; /*0x40893a*/
  if ( result ) /*0x40893d*/
  {
    result = *(unsigned int *)(result + 8 * this->u32_14 + 32); /*0x408943*/
    this->q004 = result; /*0x408948*/
  }
  else
  {
    this->q004 = 0; /*0x408958*/
  }
  this->q008 = 0; /*0x40894b*/
  this->q010 &= ~1u; /*0x408954*/
  return result; /*0x408957*/
}
} // namespace gamemd

// 0x409C40
namespace gamemd {
unsigned int * AudioBuffer::InitializePlayback() {

  AudioBuffer v2; // ecx
  unsigned int *result; // eax
  AudioBuffer *v4; // eax
  AudioBuffer v5; // ecx
  AudioBuffer v6; // ecx
  int v7; // ecx
  void *v8; // eax

  v2 = *this; /*0x409c46*/
  result = *(unsigned int **)(*(unsigned int *)&v2 + 360); /*0x409c48*/
  if ( result ) /*0x409c50*/
  {
    v4 = result->SessionClass_field_14; /*0x409c56*/
    if ( !v4 ) /*0x409c5b*/
      v4 = (AudioBuffer *)(*(unsigned int *)(*(unsigned int *)&v2 + 172) + 68); /*0x409c63*/
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
          this->u32_70 = AudioController::LoadThemeBank; /*0x409ca7*/
      }
      else
      {
        this->u32_70 = AudioController::LoadThemeBank; /*0x409cb0*/
        this->u32_B0 = ProcessAudioChannelMovement; /*0x409cb7*/
        this->u32_8C = v4[6]; /*0x409cc4*/
        this->u32_AC = v4[6]; /*0x409ccd*/
        this->u32_A0 = 4 * *(unsigned int *)&v4[6] + 128; /*0x409cdd*/
      }
    }
    else
    {
      this->u32_70 = sub_409D90; /*0x409ce5*/
    }
    if ( this->u32_88 < this->u32_8C ) /*0x409cfa*/
    {
      if ( this->u32_7C ) /*0x409cfc*/
        free(this->u32_7C); /*0x409d04*/
      v8 = malloc(this->u32_8C); /*0x409d13*/
      this->u32_7C = v8; /*0x409d1d*/
      if ( v8 ) /*0x409d20*/
        this->u32_88 = this->u32_8C; /*0x409d30*/
      else
        this->u32_88 = 0; /*0x409d22*/
    }
    result = (unsigned int *)this->u32_A0; /*0x409d3c*/
    if ( this->u32_9C < (int)result ) /*0x409d44*/
    {
      if ( this->u32_90 ) /*0x409d46*/
        free(this->u32_90); /*0x409d51*/
      result = malloc(this->u32_A0); /*0x409d60*/
      this->u32_90 = result; /*0x409d6a*/
      if ( result ) /*0x409d70*/
      {
        result = (unsigned int *)this->u32_A0; /*0x409d7b*/
        this->u32_9C = result; /*0x409d81*/
      }
      else
      {
        this->u32_9C = 0; /*0x409d72*/
      }
    }
  }
  return result; /*0x409d78*/

}
}
// 0x40B6D0
namespace gamemd {
unsigned int MoveFeedback::Update(int a2) {
  if ( (this->m_C) ) /*0x40b6d0*/
    return (unsigned int)(a2 - *&this->m_Capacity) >> 2; /*0x40b6e5*/
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
  unsigned int *v12; // eax
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
  unsigned int *v24; // ecx
  unsigned int v25; // edx
  int v26; // ecx
  unsigned __int16 *v28; // edx
  int v29; // esi
  unsigned __int16 *v31; // eax
  int Pathfinding_field_0x0C; // ecx
  unsigned __int16 v35; // cx
  unsigned __int16 v36; // ax
  int v37; // eax
  int v38; // ecx
  unsigned int *v39; // edx
  int v40; // eax
  unsigned int v41; // esi
  unsigned int *v42; // edi
  unsigned int v43; // ecx
  unsigned int v44; // edx
  unsigned int v46; // eax
  unsigned int *v47; // eax
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
  unsigned __int16 *v79; // [esp+18h] [ebp-50h]
  int v80; // [esp+18h] [ebp-50h]
  float v81; // [esp+18h] [ebp-50h]
  unsigned int *v83; // [esp+20h] [ebp-48h]
  unsigned int v84; // [esp+20h] [ebp-48h]
  unsigned int *v85; // [esp+24h] [ebp-44h]
  unsigned int *v86; // [esp+28h] [ebp-40h]
  int v87; // [esp+2Ch] [ebp-3Ch]
  int v88; // [esp+30h] [ebp-38h]
  int v89; // [esp+34h] [ebp-34h]
  unsigned int v90; // [esp+34h] [ebp-34h]
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
  unsigned int *v105; // [esp+5Ch] [ebp-Ch]
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
  LocomotionClass::GetSpeedMultiplier((LocomotionClass *)a5); /*0x42c2ba*/
  __asm { fst [esp+68h+var_8] } /*0x42c2c5*/
  v94 = *(unsigned int *)(a5 + 540); /*0x42c2c9*/
  __asm { fcomp ds:dbl_7E3810 } /*0x42c2e9*/
  v74 = 1; /*0x42c2ef*/
  __asm { fnstsw ax } /*0x42c2f4*/
  if ( (_AX & 0x4100) != 0 ) /*0x42c2f9*/
    goto LABEL_5; /*0x42c2f9*/
LABEL_6:
  v8 = 2; /*0x42c300*/
  v92 = 2; /*0x42c305*/
  while ( 2 ) /*0x42c309*/
  {
    Pathfinding_field_0x14 = v6->q00C.Pathfinding_field_0x14; /*0x42c309*/
    for ( i = 0; i <= *Pathfinding_field_0x14; *(unsigned int *)(Pathfinding_field_0x14[2] + 4 * i - 4) = 0 ) /*0x42c311*/
      ++i; /*0x42c316*/
    *Pathfinding_field_0x14 = 0; /*0x42c325*/
    v11 = *(__int16 *)(dword_87F858 + 10 * CellToTileIndexMap((ObjectClass *)&dword_87F7E8, a2) + 2 * v8); /*0x42c34a*/
    v89 = v11; /*0x42c351*/
    v93 = *(__int16 *)(dword_87F858 + 10 * CellToTileIndexMap((ObjectClass *)&dword_87F7E8, a3) + 2 * v8); /*0x42c36e*/
    v76 = v8 == 2; /*0x42c377*/
    if ( v8 == 2 ) /*0x42c37b*/
      v95 = 0; /*0x42c387*/
    else
      v95 = *(&v6[2].Pathfinding_field_0x0C + v8); /*0x42c381*/
    v12 = (unsigned int *)*(&v6[2].Pathfinding_field_0x08 + v8); /*0x42c393*/
    v85 = (unsigned int *)*(&v6[2].Pathfinding_field_0x14 + v8); /*0x42c39b*/
    v86 = *(unsigned int **)&v6[3].__pad_0[4 * v8 + 4]; /*0x42c3a2*/
    v12[v11] = v6[1].Pathfinding_field_0x0C; /*0x42c3aa*/
    v105 = v12; /*0x42c3b2*/
    v12[v93] = v6[1].Pathfinding_field_0x0C; /*0x42c3b6*/
    if ( v11 == v93 ) /*0x42c3b9*/
    {
      if ( !v8 ) /*0x42c3bd*/
      {
        Pathfinding_field_0x10 = v6[3].Pathfinding_field_0x10; /*0x42c3bf*/
        *(unsigned int *)(Pathfinding_field_0x10 + 12) = 0; /*0x42c3c2*/
        *(unsigned int *)(Pathfinding_field_0x10 + 4) = v11; /*0x42c3c5*/
      }
      *((unsigned short *)&v6[6].Pathfinding_field_0x14 + 500 * v8) = v11; /*0x42c3d1*/
      *(&v6[113].Pathfinding_field_0x18 + v8) = 1; /*0x42c3d9*/
      goto LABEL_85; /*0x42c3e4*/
    }
    v97 = v6->q00C.Pathfinding_field_0x10; /*0x42c3ee*/
    *v97 = -1; /*0x42c3f2*/
    v97[1] = v11; /*0x42c3f8*/
    v97[2] = 0; /*0x42c3fb*/
    v97[3] = 0; /*0x42c3fe*/
    v83 = v6->q00C.Pathfinding_field_0x14; /*0x42c404*/
    v14 = *v83 + 1; /*0x42c40a*/
    v15 = v14 >> 1; /*0x42c40d*/
    if ( v14 < v83->Items ) /*0x42c412*/
    {
      for ( ; v14 > 1; v15 >>= 1 ) /*0x42c417*/
      {
        v99 = v83->Capacity; /*0x42c420*/
        _EAX = *(unsigned int *)(v99 + 4 * v15); /*0x42c424*/
        __asm /*0x42c427*/
        {
          fld dword ptr [eax+8]
          fcomp ds:flt_7E1748
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x42c435*/
          break; /*0x42c435*/
        *(unsigned int *)(v99 + 4 * v14) = *(unsigned int *)(v99 + 4 * v15); /*0x42c43e*/
        v11 = v89; /*0x42c441*/
        v14 = v15; /*0x42c445*/
      }
      *(unsigned int *)(v83[2] + 4 * v14) = v97; /*0x42c459*/
      ++*v83; /*0x42c463*/
      if ( (unsigned int)v97 > v83->IsInitialized ) /*0x42c46a*/
        v83->IsInitialized = v97; /*0x42c46c*/
      if ( (unsigned int)v97 < v83->Count ) /*0x42c472*/
        v83->Count = v97; /*0x42c474*/
    }
    v87 = 1; /*0x42c482*/
    v85[v11] = v6[1].Pathfinding_field_0x0C; /*0x42c48a*/
    v86[v11] = 0; /*0x42c48d*/
    v17 = v6->q00C.Pathfinding_field_0x14; /*0x42c494*/
    if ( *(unsigned int *)v17->__pad_0 ) /*0x42c497*/
    {
      Pathfinding_field_0x08 = v17->Pathfinding_field_0x08; /*0x42c4a1*/
      v20 = *(unsigned int **)(Pathfinding_field_0x08 + 4); /*0x42c4a9*/
      *(unsigned int *)(Pathfinding_field_0x08 + 4) = *(unsigned int *)(Pathfinding_field_0x08 + 4 * *(unsigned int *)v17->__pad_0); /*0x42c4ac*/
      *(unsigned int *)(v17->Pathfinding_field_0x08 + 4 * (*(unsigned int *)v17->__pad_0)--) = 0; /*0x42c4b4*/
      Pathfinding::SiftDown(v17, 1); /*0x42c4c0*/
      v18 = v20; /*0x42c4c5*/
    }
    else
    {
      v18 = 0; /*0x42c49d*/
    }
    v78 = v18; /*0x42c4ca*/
    v21 = 24 * v8; /*0x42c4ce*/
    v84 = 24 * v8; /*0x42c4d1*/
    v77 = *(&v6[4].Pathfinding_field_0x14 + 6 * v8) == 0; /*0x42c4de*/
    if ( !v18 ) /*0x42c4e5*/
      return 0; /*0x42c8ea*/
    while ( 1 ) /*0x42c4eb*/
    {
      v22 = v18[1]; /*0x42c4eb*/
      v96 = v22; /*0x42c4f4*/
      if ( v22 == v93 ) /*0x42c4f8*/
        break; /*0x42c4f8*/
      v23 = 9 * v22; /*0x42c4fe*/
      v24 = *(unsigned int **)((char *)dword_87F878 + v21); /*0x42c501*/
      v25 = v24[v23 + 1]; /*0x42c507*/
      v26 = v24[v23 + 4]; /*0x42c50e*/
      if ( v26 > 0 ) /*0x42c513*/
      {
        v90 = v25; /*0x42c51d*/
        v88 = 16 * v87; /*0x42c524*/
        v100 = v26; /*0x42c528*/
        do /*0x42c73a*/
        {
          (v29) = ((v29) & ~(0xFFFF << 16)) | (((0) & 0xFFFF) << 16); /*0x42c534*/
          v79 = 0; /*0x42c536*/
          _EBX = *(unsigned int *)v90; /*0x42c53e*/
          v75 = *(unsigned char *)(v90 + 4); /*0x42c543*/
          v28 = (unsigned __int16 *)dword_87F878[v84 / 4]; /*0x42c547*/
          v98 = *(unsigned int *)v90; /*0x42c550*/
          LOWORD(v29) = v28[18 * *(unsigned int *)v90 + 12]; /*0x42c554*/
          _EDX = *(unsigned int *)&v28[18 * *(unsigned int *)v90 + 14]; /*0x42c55c*/
          v101 = _EDX; /*0x42c565*/
          if ( v74 ) /*0x42c569*/
          {
            v80 = InterpolateTerrainLighting(v94, v92, v96, _EBX); /*0x42c585*/
            __asm /*0x42c589*/
            {
              fild [esp+68h+var_50]
              fmul [esp+68h+var_8]
            }
            LOWORD(v31) = Math::RoundToInt(v5); /*0x42c591*/
            _EDX = v101; /*0x42c596*/
            v79 = v31; /*0x42c59a*/
          }
          if ( v75 ) /*0x42c5a4*/
            __asm { fld ds:dbl_7E3818 } /*0x42c5a6*/
          else
            __asm { fld ds:dbl_7E2800 } /*0x42c5ae*/
          _EAX = v78; /*0x42c5b4*/
          Pathfinding_field_0x0C = v6[1].Pathfinding_field_0x0C; /*0x42c5b8*/
          __asm /*0x42c5bb*/
          {
            fld ds:flt_7E3794[edx*4]
            fadd dword ptr [eax+8]
          }
          __asm { fiadd [esp+68h+var_50] }
          __asm
          {
            fadd st, st(1)
            fstp [esp+68h+var_50]
            fstp st
          }
          if ( v85[_EBX] != Pathfinding_field_0x0C ) /*0x42c5d8*/
            goto LABEL_41; /*0x42c5d8*/
          _EAX = v86; /*0x42c5da*/
          __asm /*0x42c5de*/
          {
            fld dword ptr [eax+ebx*4]
            fcomp [esp+68h+var_50]
            fnstsw ax
          }
          if ( (BYTE1(_EAX) & 0x41) == 0 ) /*0x42c5ea*/
          {
LABEL_41:
            if ( (v76 || *(unsigned int *)(v95 + 4 * v29) == Pathfinding_field_0x0C || _EDX == 1) /*0x42c612*/
              && dword_82A594[8 * a4 + _EDX] == 1 )
            {
              if ( v77 ) /*0x42c61e*/
                goto LABEL_49; /*0x42c61e*/
              v35 = _EBX; /*0x42c624*/
              v36 = v96; /*0x42c629*/
              if ( (unsigned __int16)_EBX < (unsigned __int16)v96 ) /*0x42c62b*/
              {
                v36 = _EBX; /*0x42c62d*/
                v35 = v96; /*0x42c62f*/
              }
              v37 = v35 | (v36 << 16); /*0x42c643*/
              v38 = *(int *)((char *)&v6[4].Pathfinding_field_0x14 + v84) - 1; /*0x42c64c*/
              if ( v38 < 0 ) /*0x42c64d*/
              {
LABEL_49:
                v40 = this->q064; /*0x42c666*/
                *(unsigned int *)(v40 + v88 + 4) = _EBX; /*0x42c671*/
                v41 = v40 + v88; /*0x42c675*/
                *(unsigned int *)v41 = ((int)v78 - v40) >> 4; /*0x42c687*/
                *(float *)(v41 + 8) = v81; /*0x42c689*/
                *(unsigned int *)(v41 + 12) = v78[3] + 1; /*0x42c690*/
                v42 = (unsigned int *)this->__pad_068; /*0x42c693*/
                v43 = *v42 + 1; /*0x42c69b*/
                v44 = v43 >> 1; /*0x42c69e*/
                if ( v43 < v42[1] ) /*0x42c6a2*/
                {
                  for ( ; v43 > 1; v44 >>= 1 ) /*0x42c6a7*/
                  {
                    v102 = *(unsigned int *)(v42[2] + 4 * v44); /*0x42c6af*/
                    __asm /*0x42c6b3*/
                    {
                      fld dword ptr [eax+8]
                      fcomp [esp+68h+var_50]
                      fnstsw ax
                    }
                    if ( (_AX & 0x4100) != 0 ) /*0x42c6bf*/
                      break; /*0x42c6bf*/
                    *(unsigned int *)(v42[2] + 4 * v43) = v102; /*0x42c6c8*/
                    _EBX = v98; /*0x42c6cb*/
                    v43 = v44; /*0x42c6cf*/
                  }
                  *(unsigned int *)(v42[2] + 4 * v43) = v41; /*0x42c6db*/
                  v46 = v42[3]; /*0x42c6e0*/
                  ++*v42; /*0x42c6e6*/
                  if ( v41 > v46 ) /*0x42c6e8*/
                    v42[3] = v41; /*0x42c6ea*/
                  if ( v41 < v42[4] ) /*0x42c6f0*/
                    v42[4] = v41; /*0x42c6f2*/
                }
                __asm { fld [esp+68h+var_50] } /*0x42c6fd*/
                v47 = v86; /*0x42c704*/
                v6 = this; /*0x42c708*/
                v85[_EBX] = this->q028; /*0x42c70c*/
                __asm { fstp dword ptr [eax+ebx*4] } /*0x42c70f*/
                *(float *)&v47[_EBX] = _ET1; /*0x42c70f*/
                ++v87; /*0x42c71e*/
                v88 += 16; /*0x42c722*/
              }
              else
              {
                v39 = (unsigned int *)(*(int *)((char *)&v6[4].Pathfinding_field_0x08 + v84) + 4 * v38); /*0x42c653*/
                while ( *v39 != v37 ) /*0x42c658*/
                {
                  --v38; /*0x42c65e*/
                  --v39; /*0x42c65f*/
                  if ( v38 < 0 ) /*0x42c664*/
                    goto LABEL_49; /*0x42c664*/
                }
              }
            }
          }
          v49 = v100 == 1; /*0x42c731*/
          v90 += 8; /*0x42c732*/
          --v100; /*0x42c736*/
        }
        while ( !v49 ); /*0x42c73a*/
      }
      v50 = v6->q00C.Pathfinding_field_0x14; /*0x42c740*/
      if ( !*v50 ) /*0x42c747*/
        return 0; /*0x42c747*/
      v51 = v50[2]; /*0x42c74d*/
      v52 = 1; /*0x42c750*/
      v53 = *(unsigned int **)(v51 + 4); /*0x42c758*/
      *(unsigned int *)(v51 + 4) = *(unsigned int *)(v51 + 4 * *v50); /*0x42c75b*/
      v103 = v53; /*0x42c763*/
      *(unsigned int *)(v50[2] + 4 * *v50) = 0; /*0x42c767*/
      v54 = *v50 - 1; /*0x42c771*/
      *v50 = v54; /*0x42c773*/
      if ( v54 < 2 ) /*0x42c778*/
        goto LABEL_62; /*0x42c778*/
      v55 = v50[2]; /*0x42c77a*/
      _EDX = *(unsigned int *)(v55 + 8); /*0x42c77d*/
      _EAX = *(unsigned int *)(v55 + 4); /*0x42c780*/
      __asm /*0x42c783*/
      {
        fld dword ptr [edx+8]
        fld dword ptr [eax+8]
        fcompp
      }
      v58 = 2; /*0x42c78b*/
      __asm { fnstsw ax } /*0x42c790*/
      if ( (_EAX & 0x4100) != 0 ) /*0x42c795*/
LABEL_62:
        v58 = 1; /*0x42c797*/
      if ( v54 < 3 ) /*0x42c79f*/
        goto LABEL_66; /*0x42c79f*/
      v59 = v50[2]; /*0x42c7a1*/
      _ESI = *(unsigned int *)(v59 + 12); /*0x42c7a4*/
      _EAX = *(unsigned int *)(v59 + 4 * v58); /*0x42c7a7*/
      __asm /*0x42c7aa*/
      {
        fld dword ptr [esi+8]
        fld dword ptr [eax+8]
        fcompp
        fnstsw ax
      }
      if ( (_EAX & 0x4100) != 0 ) /*0x42c7b7*/
      {
LABEL_66:
        if ( v58 == 1 ) /*0x42c7c3*/
          goto LABEL_75; /*0x42c7c3*/
      }
      else
      {
        v58 = 3; /*0x42c7b9*/
      }
      do /*0x42c82f*/
      {
        v62 = v50[2]; /*0x42c7c5*/
        v63 = *(unsigned int *)(v62 + 4 * v52); /*0x42c7cb*/
        *(unsigned int *)(v62 + 4 * v52) = *(unsigned int *)(v62 + 4 * v58); /*0x42c7ce*/
        v52 = v58; /*0x42c7d4*/
        *(unsigned int *)(v50[2] + 4 * v58) = v63; /*0x42c7d6*/
        v91 = 2 * v58 + 1; /*0x42c7e4*/
        if ( 2 * v58 <= *v50 ) /*0x42c7e8*/
        {
          _EAX = *(unsigned int *)(v50[2] + 8 * v58); /*0x42c7ed*/
          __asm { fld dword ptr [eax+8] } /*0x42c7f0*/
          _EAX = *(unsigned int *)(v50[2] + 4 * v58); /*0x42c7f6*/
          __asm /*0x42c7f9*/
          {
            fld dword ptr [eax+8]
            fcompp
            fnstsw ax
          }
          if ( (_EAX & 0x4100) == 0 ) /*0x42c803*/
            v58 *= 2; /*0x42c805*/
        }
        if ( v91 <= *v50 ) /*0x42c80b*/
        {
          v66 = v50[2]; /*0x42c80d*/
          _ESI = *(unsigned int *)(v66 + 4 * v91); /*0x42c814*/
          _EAX = *(unsigned int *)(v66 + 4 * v58); /*0x42c817*/
          __asm /*0x42c81a*/
          {
            fld dword ptr [esi+8]
            fld dword ptr [eax+8]
            fcompp
            fnstsw ax
          }
          if ( (_EAX & 0x4100) == 0 ) /*0x42c827*/
            v58 = v91; /*0x42c829*/
        }
      }
      while ( v58 != v52 ); /*0x42c82f*/
      v6 = this; /*0x42c831*/
LABEL_75:
      v18 = v103; /*0x42c835*/
      v78 = v103; /*0x42c83b*/
      if ( !v103 ) /*0x42c83f*/
        return 0; /*0x42c83f*/
      v8 = v92; /*0x42c845*/
      v21 = v84; /*0x42c849*/
    }
    if ( !v18 ) /*0x42c854*/
      return 0; /*0x42c854*/
    v69 = (int)v18; /*0x42c85c*/
    v104 = v18; /*0x42c861*/
    if ( *v18 != -1 ) /*0x42c865*/
    {
      do /*0x42c881*/
      {
        v105[v18[1]] = v6[1].Pathfinding_field_0x0C; /*0x42c871*/
        v18 = (unsigned int *)(v6[3].Pathfinding_field_0x10 + 16 * *v18); /*0x42c87c*/
      }
      while ( *v18 != -1 ); /*0x42c881*/
      v69 = (int)v104; /*0x42c883*/
    }
    v70 = *(unsigned int *)(v69 + 12) + 1; /*0x42c88a*/
    *(&v6[113].Pathfinding_field_0x18 + v8) = v70; /*0x42c88b*/
    v71 = v70 - 1; /*0x42c892*/
    if ( v71 > 0 ) /*0x42c895*/
    {
      v72 = (unsigned short *)&v6[6].Pathfinding_field_0x14 + 500 * v8 + v71; /*0x42c8a3*/
      do /*0x42c8bf*/
      {
        *v72-- = *(unsigned short *)(v69 + 4); /*0x42c8ae*/
        v69 = v6[3].Pathfinding_field_0x10 + 16 * *(unsigned int *)v69; /*0x42c8bc*/
        --v71; /*0x42c8be*/
      }
      while ( v71 ); /*0x42c8bf*/
    }
    *((unsigned short *)&v6[6].Pathfinding_field_0x14 + 500 * v8) = *(unsigned short *)(v69 + 4); /*0x42c8ce*/
LABEL_85:
    v92 = --v8; /*0x42c8d7*/
    if ( v8 >= 0 ) /*0x42c8db*/
      continue; /*0x42c8db*/
    return 1; /*0x42c8e4*/
  }

}
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
  if ( 2 * a2 > *(unsigned int *)this->__pad_000 /*0x42dccb*/
    || *(float *)(*(unsigned int *)(this->q008 + 4 * a2) + 8) <= (double)*(float *)(*(unsigned int *)(this->q008 + 8 * a2)
                                                                                              + 8) )
  {
    v3 = a2; /*0x42dccd*/
  }
  if ( v4 <= *(unsigned int *)this->__pad_000 /*0x42dce9*/
    && *(float *)(*(unsigned int *)(this->q008 + 4 * v3) + 8) > (double)*(float *)(*(unsigned int *)(this->q008 + 4 * v4)
                                                                                             + 8) )
  {
    v3 = 2 * a2 + 1; /*0x42dceb*/
  }
  if ( v3 != a2 ) /*0x42dcef*/
  {
    do /*0x42dd4f*/
    {
      Pathfinding_field_0x08 = this->q008; /*0x42dcf1*/
      v6 = 2 * v3 + 1; /*0x42dcf4*/
      v7 = *(unsigned int *)(Pathfinding_field_0x08 + 4 * v2); /*0x42dcfb*/
      *(unsigned int *)(Pathfinding_field_0x08 + 4 * v2) = *(unsigned int *)(Pathfinding_field_0x08 + 4 * v3); /*0x42dcfe*/
      v2 = v3; /*0x42dd04*/
      *(unsigned int *)(this->q008 + 4 * v3) = v7; /*0x42dd06*/
      if ( 2 * v3 <= *(unsigned int *)this->__pad_000 /*0x42dd2b*/
        && *(float *)(*(unsigned int *)(this->q008 + 4 * v3) + 8) > (double)*(float *)(*(unsigned int *)(this->q008 + 8 * v3)
                                                                                                 + 8) )
      {
        v3 *= 2; /*0x42dd2d*/
      }
      if ( v6 <= *(unsigned int *)this->__pad_000 /*0x42dd49*/
        && *(float *)(*(unsigned int *)(this->q008 + 4 * v3) + 8) > (double)*(float *)(*(unsigned int *)(this->q008 + 4 * v6)
                                                                                                 + 8) )
      {
        v3 = v6; /*0x42dd4b*/
      }
    }
    while ( v3 != v2 ); /*0x42dd4f*/
  }
}
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
        pad_18 = this->vtable3; /*0x4af754*/
      else
        pad_18 = 0; /*0x4af759*/
      *a3 = (int)pad_18; /*0x4af75b*/
    }
    if ( *a3 ) /*0x4af75e*/
    {
      (*(void (__stdcall **)(DriveLocomotionClass *))(*(unsigned int *)this->0 + 4))(this); /*0x4af772*/
      return 0; /*0x4af775*/
    }
    else
    {
      return -2147467262; /*0x4af766*/
    }
  }
  return result; /*0x4af764*/
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
        pad_18 = this->q018; /*0x4b64a4*/
      else
        pad_18 = 0; /*0x4b64a9*/
      *a3 = (int)pad_18; /*0x4b64ab*/
    }
    if ( *a3 ) /*0x4b64ae*/
    {
      (*(void (__stdcall **)(DropPodLocomotionClass *))(*(unsigned int *)this->0 + 4))(this); /*0x4b64c2*/
      return 0; /*0x4b64c5*/
    }
    else
    {
      return -2147467262; /*0x4b64b6*/
    }
  }
  return result; /*0x4b64b4*/
}
}

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

  (*((unsigned short *)&(result))) = *(unsigned short *)this; /*0x4c9224*/
  if ( *(unsigned short *)this == *a2 ) /*0x4c922d*/
  {
    (*((unsigned char *)&(result))) = 0; /*0x4c92f7*/
    return result; /*0x4c92f7*/
  }
  v3 = this->ROT; /*0x4c9235*/
  if ( v3 <= 0 ) /*0x4c923e*/
    goto LABEL_15; /*0x4c923e*/
  v4 = this->Timer; /*0x4c9240*/
  v5 = this->Initial; /*0x4c9243*/
  if ( v4 != -1 ) /*0x4c924f*/
  {
    if ( (int)dword_A8ED84 - v4 >= v5 ) /*0x4c9257*/
    {
  LABEL_15:
      v11 = *(unsigned int *)this; /*0x4c92af*/
      goto LABEL_16; /*0x4c92af*/
    }
    v5 -= (int)dword_A8ED84 - v4; /*0x4c9259*/
  }
  if ( !v5 ) /*0x4c925d*/
    goto LABEL_15; /*0x4c925d*/
  v6 = (int16_t)(result - this->Initial); /*0x4c9266*/
  v7 = abs16(result - this->Initial) / v3; /*0x4c9271*/
  v14 = *(unsigned int *)this; /*0x4c9275*/
  if ( (int16_t)v7 > 0 ) /*0x4c927c*/
  {
    v8 = this->Timer; /*0x4c927e*/
    v9 = this->Initial; /*0x4c9281*/
    if ( v8 != -1 ) /*0x4c9287*/
    {
      if ( (int)dword_A8ED84 - v8 >= v9 ) /*0x4c928f*/
      {
        v10 = 0; /*0x4c92ab*/
        goto LABEL_12; /*0x4c92ad*/
      }
      (*((unsigned short *)&(v9))) = v9 - ((unsigned short)dword_A8ED84 - v8); /*0x4c9291*/
    }
    v10 = v9; /*0x4c9293*/
  LABEL_12:
    (*((unsigned short *)&(v14))) = v14 - v10 * (v6 / (int16_t)v7); /*0x4c9295*/
  }
  v11 = v14; /*0x4c92a5*/
  LABEL_16:
  this->Initial = v11; /*0x4c92b1*/
  result = (int)a2; /*0x4c92b4*/
  v12 = *(unsigned int *)a2; /*0x4c92bb*/
  *(unsigned int *)this = *(unsigned int *)a2; /*0x4c92bd*/
  if ( v3 > 0 ) /*0x4c92bf*/
  {
    result = abs16(v12 - this->Initial) / v3; /*0x4c92da*/
    v13 = &this->Timer; /*0x4c92e0*/
    *(unsigned int *)v13 = dword_A8ED84; /*0x4c92e3*/
    *((unsigned int *)v13 + 1) = v15; /*0x4c92e5*/
    *((unsigned int *)v13 + 2) = result; /*0x4c92e8*/
  }
  (*((unsigned char *)&(result))) = 1; /*0x4c92ee*/
  return result; /*0x4c92f1*/
}
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

  if ( this->ROT) > 0 ) /*0x4c930c*/
  {
    v3 = &this->RotationTimer; /*0x4c930e*/
    if ( Locomotor::GetSpeed(&this->RotationTimer) ) /*0x4c9313*/
    {
      v4 = abs16(*(unsigned short *)this - this->StartFacing) / this->ROT); /*0x4c9333*/
      v11 = *(unsigned int *)this; /*0x4c9337*/
      if ( (int16_t)v4 <= 0 ) /*0x4c933e*/
      {
  LABEL_9:
        (*((unsigned short *)&(v8))) = v11; /*0x4c936a*/
        goto LABEL_12; /*0x4c936f*/
      }
      v5 = this->q010; /*0x4c9340*/
      v6 = *(unsigned int *)v3; /*0x4c9343*/
      if ( v6 != -1 ) /*0x4c9348*/
      {
        if ( (int)dword_A8ED84 - v6 >= v5 ) /*0x4c9354*/
        {
          v7 = 0; /*0x4c9371*/
          goto LABEL_8; /*0x4c9373*/
        }
        (*((unsigned short *)&(v5))) = v5 - ((unsigned short)dword_A8ED84 - v6); /*0x4c9356*/
      }
      v7 = v5; /*0x4c9358*/
  LABEL_8:
      (*((unsigned short *)&(v11))) = v11 - v7 * ((int16_t)(*(unsigned short *)this - this->StartFacing) / (int16_t)v4); /*0x4c935a*/
      goto LABEL_9; /*0x4c9365*/
    }
  }
  v8 = *(unsigned int *)this; /*0x4c9375*/
  LABEL_12:
  if ( (unsigned short)v8 == *(unsigned short *)a2 ) /*0x4c937e*/
  {
    v9 = &this->RotationTimer; /*0x4c93b3*/
    result = 0; /*0x4c93b6*/
    *(unsigned int *)v9 = dword_A8ED84; /*0x4c93b8*/
    v9->pad_04 = v12; /*0x4c93ba*/
  }
  else
  {
    *(unsigned int *)this = *a2; /*0x4c9382*/
    this->StartFacing = *a2; /*0x4c9386*/
    v9 = &this->RotationTimer; /*0x4c9390*/
    *(unsigned int *)v9 = dword_A8ED84; /*0x4c9393*/
    result = v12; /*0x4c9395*/
    v9->pad_04 = v12; /*0x4c9399*/
    (*((unsigned char *)&(result))) = 1; /*0x4c939c*/
  }
  v9->TimeLeft = 0; /*0x4c939e*/
  return result; /*0x4c93a1*/
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

  v2 = this->u32_14; /*0x4c9533*/
  if ( v2 <= 0 ) /*0x4c953b*/
    goto LABEL_14; /*0x4c953b*/
  v3 = this->u32_8; /*0x4c953d*/
  v4 = this->u32_10; /*0x4c9540*/
  if ( v3 != -1 ) /*0x4c954c*/
  {
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v3 >= v4 ) /*0x4c9554*/
    {
  LABEL_14:
      v7 = *(unsigned int *)this->__pad_000; /*0x4c95b1*/
      v11 = *(unsigned int *)this->__pad_000; /*0x4c95b3*/
      goto LABEL_15; /*0x4c95b3*/
    }
    v4 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v3; /*0x4c9556*/
  }
  if ( !v4 ) /*0x4c955a*/
    goto LABEL_14; /*0x4c955a*/
  v5 = (int16_t)(*(unsigned short *)this->__pad_000 - (this->q004)); /*0x4c9567*/
  v6 = abs16(*(unsigned short *)this->__pad_000 - (this->q004)) / v2; /*0x4c9572*/
  v7 = *(unsigned int *)this->__pad_000; /*0x4c9574*/
  v14 = *(unsigned int *)this->__pad_000; /*0x4c9576*/
  if ( (int16_t)v6 > 0 ) /*0x4c957d*/
  {
    v8 = this->u32_10; /*0x4c957f*/
    v9 = this->u32_8; /*0x4c9582*/
    if ( v9 != -1 ) /*0x4c9588*/
    {
      if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v9 >= v8 ) /*0x4c9590*/
      {
        v10 = 0; /*0x4c95ad*/
        goto LABEL_11; /*0x4c95af*/
      }
      (*((unsigned short *)&(v8))) = v8 - (*(unsigned short *)&((unsigned int *)&stru_A8EB00)[416] - v9); /*0x4c9592*/
    }
    v10 = v8; /*0x4c9594*/
  LABEL_11:
    (*((unsigned short *)&(v14))) = v14 - v10 * (v5 / (int16_t)v6); /*0x4c9596*/
  }
  (*((unsigned short *)&(v11))) = v14; /*0x4c95a6*/
  LABEL_15:
  v12 = v7 - v11; /*0x4c95b5*/
  (*((unsigned short *)&(v14))) = v12; /*0x4c95bb*/
  *v14 = v14; /*0x4c95c6*/
}
}
// 0x4CE840
namespace gamemd {
char DropPod::ProcessLanding() {

  int v3; // edi
  int *v4; // ecx
  float *v5; // ecx
  double v6; // st7
  int (***v7)(unsigned int, void *, int *); // eax
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
  unsigned int *v26; // eax
  unsigned __int16 *v27; // edi
  int v28; // ecx
  int *v29; // ecx
  int v30; // eax
  unsigned short *v31; // ecx
  int i; // edi
  __int16 v33; // cx
  unsigned char *v34; // eax
  int v35; // edi
  __int16 v36; // cx
  unsigned char *v37; // eax
  int v38; // edi
  __int16 v39; // cx
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
  unsigned __int16 *v53; // [esp+76h] [ebp-24h]
  __int16 v54[2]; // [esp+7Ah] [ebp-20h] BYREF
  int v55; // [esp+7Eh] [ebp-1Ch] BYREF
  int v56; // [esp+82h] [ebp-18h] BYREF
  int v57; // [esp+86h] [ebp-14h]
  int GroundHeight; // [esp+8Ah] [ebp-10h]
  char v59[12]; // [esp+8Eh] [ebp-Ch] BYREF

  if ( !this->u32_51 ) /*0x4ce849*/
    return 1; /*0x4ce859*/
  v48 = 0; /*0x4ce85d*/
  v3 = (*(int (**)(unsigned int))(*this->u32_C + 456))(this->u32_C); /*0x4ce86d*/
  v4 = (int *)(this->u32_C + 156); /*0x4ce86f*/
  v50 = v3; /*0x4ce875*/
  v56 = *v4; /*0x4ce87b*/
  v57 = v4[1]; /*0x4ce887*/
  GroundHeight = v4[2]; /*0x4ce88e*/
  if ( (Coord::To_Cell((Coord *)&dword_87F7E8, &v56)->flags & 0x100) != 0 && v3 >= dword_8B3CAC ) /*0x4ce8ae*/
  {
    v3 -= dword_8B3CAC; /*0x4ce8b0*/
    v50 = v3; /*0x4ce8b2*/
  }
  if ( *(unsigned char *)((*(int (**)(unsigned int))(*this->u32_C + 132))(this->u32_C) + 3221) ) /*0x4ce8c1*/
  {
    if ( !v3 ) /*0x4ce8cf*/
    {
      v5 = (float *)this->u32_C; /*0x4ce8d1*/
      if ( v5[186] > 0.0 ) /*0x4ce8e5*/
      {
        v6 = v5[186] - 0.02; /*0x4ce8ed*/
        if ( v6 < 0.0 ) /*0x4ce900*/
          v6 = 0.0; /*0x4ce904*/
        v5[186] = v6; /*0x4ce90a*/
      }
    }
    this->u32_40 = 0; /*0x4ce910*/
    this->u32_44 = 0; /*0x4ce913*/
  }
  else
  {
    this->u32_40 = 0; /*0x4ce91c*/
    this->u32_44 = 0; /*0x4ce91f*/
  }
  v7 = (int (***)(unsigned int, void *, int *))this->u32_C; /*0x4ce922*/
  v53 = 0; /*0x4ce925*/
  v49 = 0; /*0x4ce92b*/
  if ( v7 ) /*0x4ce92f*/
  {
    v8 = (**v7)(v7, &unk_822410, &v52); /*0x4ce940*/
    if ( v8 >= 0 ) /*0x4ce944*/
    {
      v10 = v52; /*0x4ce953*/
      Release3COM((ObjectClass *)&v49); /*0x4ce95b*/
      v9 = v10; /*0x4ce960*/
    }
    else
    {
      Release3COM((ObjectClass *)&v49); /*0x4ce94a*/
      v9 = 0; /*0x4ce94f*/
    }
    v49 = v9; /*0x4ce964*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4ce970*/
      sub_7DC720(v8); /*0x4ce973*/
    if ( v9 ) /*0x4ce97e*/
      v53 = (unsigned __int16 *)(*(int (**)(int))(*(unsigned int *)v9 + 12))(v9); /*0x4ce986*/
  }
  v11 = Coord::To_Cell((Coord *)&dword_87F7E8, &this->u32_1C); /*0x4ce998*/
  if ( !this->u32_18 ) /*0x4ce99f*/
    goto LABEL_26; /*0x4ce99f*/
  v12 = Cell::IsBridge((Cell *)v11); /*0x4ce9a3*/
  if ( (unsigned __int8)Array::Contains(this->u32_C, (int)v12) ) /*0x4ce9ac*/
  {
    if ( this->u32_18 ) /*0x4ce9b5*/
      goto LABEL_32; /*0x4ce9ba*/
LABEL_26:
    if ( !(*(int (**)(unsigned int, CellClass *, int, int, unsigned int, int))(*this->u32_C + 428))( /*0x4ce9d5*/
            this->u32_C,
            v11,
            -1,
            -1,
            0,
            1) )
      goto LABEL_32; /*0x4ce9d5*/
  }
  TechnoClass::GetData((TechnoClass *)this); /*0x4ce9db*/
  v13 = *(unsigned int *)(this->u32_C + 156); /*0x4ce9ee*/
  v14 = *(unsigned int *)(this->u32_C + 160); /*0x4ce9f0*/
  GroundHeight = *(unsigned int *)(this->u32_C + 164); /*0x4ce9f6*/
  (v51) = ((v51) & ~0xFFFF) | ((v13 / 256) & 0xFFFF); /*0x4cea06*/
  (v51) = ((v51) & ~(0xFFFF << 16)) | (((v14 / 256) & 0xFFFF) << 16); /*0x4cea1d*/
  *(unsigned int *)v54 = v51; /*0x4cea26*/
  v51 = 0; /*0x4cea4d*/
  v15 = *LayerClass::Pathfinding_Find( /*0x4cea5c*/
           (Type *)&dword_87F7E8,
           (int)&v51,
           &v55,
           v54,
           1,
           -1,
           9,
           0,
           1,
           1,
           0,
           0,
           0,
           1,
           (__int16 *)&v51,
           0,
           0);
  v52 = v15; /*0x4cea65*/
  if ( v15 == dword_8B3C58 ) /*0x4cea6e*/
  {
    (*(void (**)(unsigned int, int, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(*this->u32_C + 364))( /*0x4cebc7*/
      this->u32_C,
      this->u32_C + 108,
      0,
      *&dword_8871E0->u32_FA8,
      0,
      1,
      1,
      0);
    this->u32_1C = dword_8B3C78; /*0x4cebd3*/
    this->u32_20 = dword_8B3C7C; /*0x4cebda*/
    v21 = v49; /*0x4cebdd*/
    v22 = v49 == 0; /*0x4cebe7*/
    this->u32_24 = dword_8B3C80; /*0x4cebe9*/
    if ( !v22 ) /*0x4cebec*/
      (*(void (**)(int))(*(unsigned int *)v21 + 8))(v21); /*0x4cebf1*/
    return 0; /*0x4cebfd*/
  }
  GroundHeight = 0; /*0x4cea91*/
  v57 = ((short)(((v15) >> 16) & 0xFFFF) << 8) + 128; /*0x4cea9e*/
  v56 = ((__int16)v15 << 8) + 128; /*0x4ceaa8*/
  GroundHeight = Cell::GetGroundHeight(&v56); /*0x4ceab1*/
  if ( (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v52) + 80) & 0x100) != 0 ) /*0x4ceacd*/
    GroundHeight += dword_8B3CAC; /*0x4ceadb*/
  (*(void (**)(DropPod *, int, int, int))(this->u32_4 + 68))(&this->u32_4, v56, v57, GroundHeight); /*0x4ceaff*/
LABEL_32:
  if ( !this->u32_52 && v50 < 300 ) /*0x4ceb15*/
  {
    v16 = (int *)(this->u32_C + 156); /*0x4ceb1e*/
    v56 = *v16; /*0x4ceb25*/
    v57 = v16[1]; /*0x4ceb31*/
    GroundHeight = v16[2]; /*0x4ceb3d*/
    v17 = Cell::GetGroundHeight(&v56); /*0x4ceb41*/
    v18 = this->u32_C; /*0x4ceb46*/
    GroundHeight = v17; /*0x4ceb49*/
    this->u32_52 = 1; /*0x4ceb4d*/
    if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v18 + 132))(v18) + 3221) ) /*0x4ceb59*/
    {
      v19 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4ceb71*/
      if ( v19 ) /*0x4ceb78*/
      {
        Index = AnimTypeClass::FindIndex(aDropland); /*0x4ceb83*/
        AnimClass::ctor(v19, *((void **)dword_8B4154 + Index), &v56, 0, 1, (void *)0x600, 0, 0); /*0x4ceba3*/
      }
    }
    else if ( (*(int (**)(unsigned int))(*this->u32_C + 44))(this->u32_C) == 2 ) /*0x4cec09*/
    {
      if ( *(unsigned char *)(*(unsigned int *)(this->u32_C + 1732) + 3580) ) /*0x4cec14*/
      {
        v23 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4cec28*/
        if ( v23 ) /*0x4cec2f*/
        {
          v24 = AnimTypeClass::FindIndex(&stru_822420); /*0x4cec36*/
          AnimClass::ctor(v23, *((void **)dword_8B4154 + v24), &v56, 0, 1, (void *)0x600, 0, 0); /*0x4cec58*/
        }
      }
    }
    v25 = (int *)this->u32_C; /*0x4cec5d*/
    if ( v25[27] > 0 ) /*0x4cec63*/
    {
      v26 = (unsigned int *)(*(int (**)(int *))(*v25 + 132))(v25); /*0x4cec6c*/
      StartAudioControllerAt(v26[332], &v56, 0); /*0x4cec7a*/
    }
  }
  v27 = v53; /*0x4cec7f*/
  if ( v50 <= (int)v53 ) /*0x4cec89*/
  {
    v28 = this->u32_C; /*0x4cec8f*/
    if ( *(float *)(v28 + 744) <= 0.0 ) /*0x4ceca3*/
    {
      v29 = (int *)(v28 + 156); /*0x4ceca9*/
      v56 = *v29; /*0x4cecb1*/
      v57 = v29[1]; /*0x4cecbd*/
      GroundHeight = v29[2]; /*0x4cecc4*/
      if ( (Coord::To_Cell((Coord *)&dword_87F7E8, &v56)->flags & 0x100) != 0 ) /*0x4cecdb*/
      {
        v30 = Cell::GetGroundHeight(&v56); /*0x4cece7*/
        if ( GroundHeight >= dword_8B3CAC + v30 ) /*0x4cecfa*/
          *(unsigned char *)(this->u32_C + 140) = 1; /*0x4cecff*/
      }
      (*(void (**)(unsigned int, unsigned __int16 *))(*this->u32_C + 460))(this->u32_C, v27); /*0x4ced0c*/
      v47 = this->u32_C; /*0x4ced1a*/
      this->u32_51 = 0; /*0x4ced1b*/
      this->u32_50 = 0; /*0x4ced1f*/
      v48 = 1; /*0x4ced23*/
      GadgetGrid::RemoveItem((GadgetGrid *)&g_CellClassManager, v47); /*0x4ced28*/
      (*(void (**)(unsigned int, unsigned int, unsigned int))(*this->u32_C + 1348))(this->u32_C, 0, 0); /*0x4ced34*/
      v31 = (unsigned short *)this->u32_C; /*0x4ced3a*/
      this->u32_48 = 0; /*0x4ced3d*/
      this->u32_40 = 0; /*0x4ced40*/
      this->u32_4C = 0; /*0x4ced43*/
      this->u32_44 = 0; /*0x4ced46*/
      if ( v31[686] || v31[687] ) /*0x4ced52*/
      {
        for ( i = 0; i < 8; ++i ) /*0x4ced5f*/
        {
          v33 = *(unsigned short *)(this->u32_C + 1374) + HIWORD(dword_89F688[i & 7]); /*0x4ced7f*/
          LOWORD(v53) = LOWORD(dword_89F688[i & 7]) + *(unsigned short *)(this->u32_C + 1372); /*0x4ced87*/
          HIWORD(v53) = v33; /*0x4ced8d*/
          *(unsigned int *)v54 = v53; /*0x4ced9b*/
          v34 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v54); /*0x4ced9f*/
          --v34[290]; /*0x4cedb0*/
        }
        v35 = 0; /*0x4cedcd*/
        *(unsigned int *)(this->u32_C + 1372) = *(unsigned int *)(*(int (**)(unsigned int, int *))(*this->u32_C + 440))( /*0x4cedcf*/
                                                                 this->u32_C,
                                                                 &v55);
        do /*0x4cee2a*/
        {
          v36 = *(unsigned short *)(this->u32_C + 1374) + HIWORD(dword_89F688[v35 & 7]); /*0x4cedf3*/
          LOWORD(v53) = LOWORD(dword_89F688[v35 & 7]) + *(unsigned short *)(this->u32_C + 1372); /*0x4cedfb*/
          HIWORD(v53) = v36; /*0x4cee01*/
          *(unsigned int *)v54 = v53; /*0x4cee0f*/
          v37 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v54); /*0x4cee13*/
          ++v35; /*0x4cee20*/
          ++v37[290]; /*0x4cee24*/
        }
        while ( v35 < 8 ); /*0x4cee2a*/
      }
      else
      {
        v38 = 0; /*0x4cee40*/
        *(unsigned int *)(this->u32_C + 1372) = *(unsigned int *)(*(int (**)(unsigned short *, int *))(*(unsigned int *)v31 + 440))( /*0x4cee42*/
                                                                 v31,
                                                                 &v55);
        do /*0x4cee9d*/
        {
          v39 = *(unsigned short *)(this->u32_C + 1374) + HIWORD(dword_89F688[v38 & 7]); /*0x4cee66*/
          LOWORD(v53) = LOWORD(dword_89F688[v38 & 7]) + *(unsigned short *)(this->u32_C + 1372); /*0x4cee6e*/
          HIWORD(v53) = v39; /*0x4cee74*/
          *(unsigned int *)v54 = v53; /*0x4cee82*/
          v40 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v54); /*0x4cee86*/
          ++v38; /*0x4cee93*/
          ++v40[290]; /*0x4cee97*/
        }
        while ( v38 < 8 ); /*0x4cee9d*/
      }
      v41 = this->u32_1C / 256; /*0x4ceec5*/
      v42 = this->u32_20 / 256; /*0x4ceec8*/
      v43 = (unsigned int *)(*(int (**)(unsigned int, char *))(*this->u32_C + 72))(this->u32_C, v59); /*0x4ceece*/
      if ( (unsigned __int16)(*v43 / 256) == (unsigned short)v41 && (unsigned __int16)(v43[1] / 256) == (unsigned short)v42 /*0x4cef4d*/
        || (LOWORD(v53) = this->u32_1C / 256,
            HIWORD(v53) = this->u32_20 / 256,
            *(unsigned int *)v54 = v53,
            v44 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v54),
            v45 = Cell::IsBridge(v44),
            v45 == (unsigned int *)Team::GetMember(this->u32_C, 0)) )
      {
        v46 = this->u32_4; /*0x4cef52*/
        this->u32_34 = 0; /*0x4cef55*/
        (*(void (**)(DropPod *, int, int, int))(v46 + 68))(&this->u32_4, dword_8B3C78, dword_8B3C7C, dword_8B3C80); /*0x4cef7a*/
        (*(void (**)(unsigned int, unsigned int, int))(*this->u32_C + 1152))(this->u32_C, 0, 1); /*0x4cef88*/
      }
    }
  }
  if ( v49 ) /*0x4cef96*/
    (*(void (**)(int))(*(unsigned int *)v49 + 8))(v49); /*0x4cef9b*/
  return v48; /*0x4ce852*/

}
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

  v3 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1052]; /*0x4ffb23*/
  _ESI = a2; /*0x4ffb2c*/
  if ( *a2 == *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1044] /*0x4ffb4e*/
    && a2[1] == *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1048]
    && a2[2] == *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1052] )
  {
    return -1; /*0x4ffb53*/
  }
  v7 = &this->u32_5494; /*0x4ffb62*/
  if ( this->u32_5494 == *(unsigned short *)&((unsigned int *)&stru_A8EB00)[948] /*0x4ffb79*/
    && this->u32_5496 == *(unsigned short *)&((unsigned int *)&stru_A8EB00)[950] )
  {
    v8 = (PathfindingClass)this->u32_5490; /*0x4ffb7b*/
  }
  else
  {
    v8 = *v7; /*0x4ffb83*/
  }
  *(PathfindingClass *)v23 = v8; /*0x4ffb8d*/
  if ( v8 == *(unsigned int *)&((unsigned int *)&stru_A8EB00)[948] ) /*0x4ffb91*/
  {
    v9 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1044]; /*0x4ffba0*/
    v10 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1048]; /*0x4ffba2*/
  }
  else
  {
    v11 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v23); /*0x4ffbb4*/
    v12 = (int *)v11->vt_slot_72(v27); /*0x4ffbc5*/
    v9 = *v12; /*0x4ffbc7*/
    v10 = v12[1]; /*0x4ffbc9*/
    v3 = v12[2]; /*0x4ffbcc*/
  }
  v13 = v9 - *a2; /*0x4ffbd1*/
  v14 = a2[2]; /*0x4ffbd8*/
  v25 = v10 - a2[1]; /*0x4ffbdd*/
  v24 = v13; /*0x4ffbe5*/
  v26 = v3 - v14; /*0x4ffbe9*/
  v15 = Coord::Length((Coord *)&v24); /*0x4ffbed*/
  v16 = this->u32_5498; /*0x4ffbf2*/
  if ( v15 <= v16 ) /*0x4ffbfa*/
    return 0; /*0x4ffbff*/
  if ( v15 > 4 * v16 ) /*0x4ffc0d*/
    return -1; /*0x4ffc12*/
  if ( (uint8_t)CellStruct::Equals(&this->CellStruct_1525, &((unsigned int *)&stru_A8EB00)[948]) ) /*0x4ffc23*/
    v17 = (PathfindingClass)this->u32_5490; /*0x4ffc2c*/
  else
    v17 = *v7; /*0x4ffc34*/
  *(PathfindingClass *)v23 = v17; /*0x4ffc42*/
  if ( v17 == *(unsigned int *)&((unsigned int *)&stru_A8EB00)[948] ) /*0x4ffc46*/
  {
    v18 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1052]; /*0x4ffc61*/
    v24 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1044]; /*0x4ffc67*/
    v25 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1048]; /*0x4ffc6b*/
  }
  else
  {
    v19 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v23); /*0x4ffc7b*/
    v20 = (int *)v19->vt_slot_72(v27); /*0x4ffc89*/
    v24 = *v20; /*0x4ffc8e*/
    v25 = v20[1]; /*0x4ffc95*/
    v18 = v20[2]; /*0x4ffc99*/
  }
  v28 = *a2; /*0x4ffca1*/
  __asm { fild [esp+3Ch+arg_0] } /*0x4ffca8*/
  v26 = v18; /*0x4ffcac*/
  __asm /*0x4ffcb0*/
  {
    fisub [esp+3Ch+var_18]
    fstp [esp+3Ch+var_34]; double
    fild [esp+3Ch+var_14]
    fisub dword ptr [esi+4]
    fstp [esp+3Ch+var_3C]; double
  }
  Math::CalcAngle(v21, v22); /*0x4ffcc2*/
  __asm { fsub ds:dbl_7E2820 } /*0x4ffcc7*/
  __asm { fmul ds:dbl_7E2818 }
  (*((unsigned short *)&(v28))) = Math::RoundToInt(v2); /*0x4ffcdb*/
  if ( (uint8_t)(((v28 >> 7) + 1) >> 1) > 0x20u && (uint8_t)(((v28 >> 7) + 1) >> 1) < 0xE0u ) /*0x4ffcf9*/
    return 1; /*0x4ffcfe*/
  if ( (uint8_t)(((v28 >> 7) + 1) >> 1) > 0xA0u && (uint8_t)(((v28 >> 7) + 1) >> 1) < 0x60u ) /*0x4ffd14*/
    return 3; /*0x4ffd19*/
  if ( (uint8_t)(((v28 >> 7) + 1) >> 1) > 0x20u ) /*0x4ffd28*/
    return 4; /*0x4ffd28*/
  result = 2; /*0x4ffd2d*/
  if ( (uint8_t)(((v28 >> 7) + 1) >> 1) >= 0x60u ) /*0x4ffd32*/
    return 4; /*0x4ffd34*/
  return result; /*0x4ffb50*/
}
}
// 0x5FB160
namespace gamemd {
void AudioOptionsClass::ApplySettings() {

  double v2; // st7
  unsigned __int16 *v3; // eax
  double v4; // st7
  int v5; // eax
  unsigned __int16 *v6; // eax
  double v7; // st7
  unsigned __int16 *v8; // eax
  unsigned __int16 *v9; // eax
  int v10; // eax

  v2 = this->u32_38; /*0x5fb163*/
  if ( v2 >= 1.0 ) /*0x5fb171*/
    v2 = 1.0; /*0x5fb175*/
  this->u32_38 = v2; /*0x5fb17b*/
  LOWORD(v3) = Math::RoundToInt(v2 * 16384.0); /*0x5fb184*/
  EndBufferMixer(&g_MixerChannel_Score->vfptr, (int)v3); /*0x5fb191*/
  Debug::Log(); /*0x5fb1a4*/
  v4 = this->u32_3C; /*0x5fb1a9*/
  if ( v4 >= 1.0 ) /*0x5fb1ba*/
    v4 = 1.0; /*0x5fb1be*/
  this->u32_3C = v4; /*0x5fb1c4*/
  LOWORD(v5) = Math::RoundToInt(v4 * 255.0); /*0x5fb1cd*/
  ThemeClass::GetField(v5); /*0x5fb1d4*/
  LOWORD(v6) = Math::RoundToInt(this->u32_3C * 16384.0); /*0x5fb1e2*/
  EndBufferMixer(&g_MixerChannel_Voice->vfptr, (int)v6); /*0x5fb1ef*/
  Debug::Log(); /*0x5fb202*/
  v7 = this->u32_40; /*0x5fb207*/
  if ( v7 >= 1.0 ) /*0x5fb218*/
    v7 = 1.0; /*0x5fb21c*/
  this->u32_40 = v7; /*0x5fb222*/
  LOWORD(v8) = Math::RoundToInt(v7 * 16384.0); /*0x5fb22b*/
  EndBufferMixer(&g_MixerChannel_Theme->vfptr, (int)v8); /*0x5fb238*/
  LOWORD(v9) = Math::RoundToInt(this->u32_40 * 255.0); /*0x5fb246*/
  TechnoTypeClass::CheckFlag((TechnoTypeClass *)((char *)&stru_A83CD9.attachedTag + 3), (int)v9); /*0x5fb251*/
  Debug::Log(); /*0x5fb264*/
  HIBYTE(stru_A83CD9.ambientSoundController[2]) = this->u32_44; /*0x5fb26f*/
  Debug::Log(); /*0x5fb28b*/
  BYTE1(stru_A83CD9.ambientSoundController[3]) = this->u32_46; /*0x5fb296*/
  v10 = Debug::Log(); /*0x5fb2b2*/
  LOBYTE(v10) = this->u32_1D; /*0x5fb2b7*/
  nullsub_36(v10); /*0x5fb2c3*/
  SetGlobalFlag(this->u32_1E); /*0x5fb2cc*/

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
        pad_18 = this->vtable3; /*0x69ee64*/
      else
        pad_18 = 0; /*0x69ee69*/
      *a3 = (int)pad_18; /*0x69ee6b*/
    }
    if ( *a3 ) /*0x69ee6e*/
    {
      (*(void (__stdcall **)(ShipLocomotionClass *))(*(unsigned int *)this->0 + 4))(this); /*0x69ee82*/
      return 0; /*0x69ee85*/
    }
    else
    {
      return -2147467262; /*0x69ee76*/
    }
  }
  return result; /*0x69ee74*/
}
}
// 0x6E6E20
namespace gamemd {
void * BuildingLoadQueue::GetNext() {
  char BuildingLoadQueue_field_0x04; // al
  void *vtable1; // edx
  int uniqueId; // eax
  void ***v5; // eax
  int v7; // ecx
  int16_t v8[4]; // [esp+4h] [ebp-8h] BYREF

  BuildingLoadQueue_field_0x04 = this->m_Count; /*0x6e6e26*/
  if ( BuildingLoadQueue_field_0x04 == 52 ) /*0x6e6e2b*/
  {
    vtable1 = g_BuildingLoadQueue_Array.vfptr1; /*0x6e6e31*/
    if ( g_BuildingLoadQueue_Array.vfptr1 ) /*0x6e6e39*/
    {
      uniqueId = g_BuildingLoadQueue_Array.uniqueId; /*0x6e6e3b*/
      if ( g_BuildingLoadQueue_Array.uniqueId /*0x6e6e4c*/
        && *(unsigned int *)g_BuildingLoadQueue_Array.uniqueId == *(unsigned int *)this->m_Queue )
      {
        goto LABEL_10; /*0x6e6e4c*/
      }
      if ( g_BuildingLoadQueue_Array.vfptr1 ) /*0x6e6e50*/
      {
        if ( !(*((unsigned char *)&(g_BuildingLoadQueue_Array.vfptr3))) ) /*0x6e6e59*/
        {
          qsort( /*0x6e6e6a*/
            g_BuildingLoadQueue_Array.vfptr,
            (size_t)g_BuildingLoadQueue_Array.vfptr1,
            8u,
            (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
          vtable1 = g_BuildingLoadQueue_Array.vfptr1; /*0x6e6e6f*/
          g_BuildingLoadQueue_Array.uniqueId = 0; /*0x6e6e78*/
          (*((unsigned char *)&(g_BuildingLoadQueue_Array.vfptr3))) = 1; /*0x6e6e82*/
        }
        *(unsigned int *)v8 = *(unsigned int *)this->m_Queue; /*0x6e6e96*/
        uniqueId = BinaryArraySearch((int)g_BuildingLoadQueue_Array.vfptr, (int)vtable1, (int *)v8); /*0x6e6e9a*/
        if ( uniqueId ) /*0x6e6ea1*/
        {
          g_BuildingLoadQueue_Array.uniqueId = uniqueId; /*0x6e6ea3*/
  LABEL_10:
          v5 = &uniqueId->u32_4; /*0x6e6ea8*/
          return __RTDynamicCast( /*0x6e6ecf*/
                   *v5,
                   0,0,0,
                   0);
        }
      }
    }
    v5 = (void ***)&unk_B78828; /*0x6e6ead*/
    return __RTDynamicCast(*v5, 0,0,0, 0); /*0x6e6ead*/
  }
  if ( BuildingLoadQueue_field_0x04 != 11 ) /*0x6e6ed2*/
    return 0; /*0x6e6f0f*/
  v7 = *(unsigned int *)this->m_Queue; /*0x6e6ed4*/
  v8[0] = v7 % 1000; /*0x6e6ee5*/
  v8[1] = v7 / 1000; /*0x6e6f00*/
  return CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v8); /*0x6e6ecb*/
}
}
// 0x6E6F20
namespace gamemd {
void * BuildingLoadQueue::Find() {
  int vtable1; // ecx
  int uniqueId; // edx
  int v4; // ebx
  unsigned int *vtable0; // edi
  int v6; // esi

  if ( (this->m_Count) != 52 ) /*0x6e6f27*/
    return 0; /*0x6e6fe0*/
  vtable1 = (int)g_BuildingLoadQueue_Array.vfptr1; /*0x6e6f2d*/
  if ( !g_BuildingLoadQueue_Array.vfptr1 ) /*0x6e6f37*/
    return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6f37*/
  uniqueId = g_BuildingLoadQueue_Array.uniqueId; /*0x6e6f39*/
  if ( g_BuildingLoadQueue_Array.uniqueId && *(unsigned int *)g_BuildingLoadQueue_Array.uniqueId == *(unsigned int *)this->m_Queue ) /*0x6e6f49*/
    return AbstractClass::IsTechnoType(uniqueId->u32_4); /*0x6e6fdf*/
  if ( !(*((unsigned char *)&(g_BuildingLoadQueue_Array.vfptr3))) ) /*0x6e6f56*/
  {
    qsort( /*0x6e6f67*/
      g_BuildingLoadQueue_Array.vfptr,
      (size_t)g_BuildingLoadQueue_Array.vfptr1,
      8u,
      (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
    vtable1 = (int)g_BuildingLoadQueue_Array.vfptr1; /*0x6e6f6c*/
    g_BuildingLoadQueue_Array.uniqueId = 0; /*0x6e6f75*/
    (*((unsigned char *)&(g_BuildingLoadQueue_Array.vfptr3))) = 1; /*0x6e6f7f*/
  }
  v4 = *(unsigned int *)this->m_Queue; /*0x6e6f86*/
  vtable0 = g_BuildingLoadQueue_Array.vfptr; /*0x6e6f88*/
  if ( vtable1 <= 0 ) /*0x6e6f90*/
    return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6f90*/
  while ( 1 ) /*0x6e6f99*/
  {
    v6 = vtable0[2 * (vtable1 / 2)]; /*0x6e6f99*/
    uniqueId = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e6f9c*/
    if ( v6 <= v4 ) /*0x6e6fa1*/
      break; /*0x6e6fa1*/
    vtable1 /= 2; /*0x6e6fa3*/
  LABEL_12:
    if ( vtable1 <= 0 ) /*0x6e6fb5*/
      return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6fb5*/
  }
  if ( v6 != v4 ) /*0x6e6fa7*/
  {
    vtable0 = &uniqueId->u32_8; /*0x6e6fa9*/
    vtable1 += -1 - vtable1 / 2; /*0x6e6fb1*/
    goto LABEL_12; /*0x6e6fb1*/
  }
  if ( uniqueId ) /*0x6e6fc9*/
  {
    g_BuildingLoadQueue_Array.uniqueId = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e6fcb*/
    return AbstractClass::IsTechnoType(*(AbstractClass **)(uniqueId + 4)); /*0x6e6fcb*/
  }
  return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6fc5*/
}
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

  if ( (this->m_Count) != 52 ) /*0x6e6ff7*/
    return 0; /*0x6e70b8*/
  vtable1 = (int)g_BuildingLoadQueue_Array.vfptr1; /*0x6e6ffd*/
  if ( !g_BuildingLoadQueue_Array.vfptr1 ) /*0x6e7007*/
    goto LABEL_13; /*0x6e7007*/
  uniqueId = g_BuildingLoadQueue_Array.uniqueId; /*0x6e7009*/
  if ( g_BuildingLoadQueue_Array.uniqueId && *(unsigned int *)g_BuildingLoadQueue_Array.uniqueId == *(unsigned int *)this->m_Queue ) /*0x6e7019*/
  {
  LABEL_17:
    v7 = &uniqueId->u32_4; /*0x6e70b3*/
    return (int)__RTDynamicCast(*v7, 0,0,0, 0); /*0x6e70b6*/
  }
  if ( !(*((unsigned char *)&(g_BuildingLoadQueue_Array.vfptr3))) ) /*0x6e7026*/
  {
    qsort( /*0x6e7037*/
      g_BuildingLoadQueue_Array.vfptr,
      (size_t)g_BuildingLoadQueue_Array.vfptr1,
      8u,
      (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
    vtable1 = (int)g_BuildingLoadQueue_Array.vfptr1; /*0x6e703c*/
    g_BuildingLoadQueue_Array.uniqueId = 0; /*0x6e7045*/
    (*((unsigned char *)&(g_BuildingLoadQueue_Array.vfptr3))) = 1; /*0x6e704f*/
  }
  v4 = *(unsigned int *)this->m_Queue; /*0x6e7056*/
  vtable0 = g_BuildingLoadQueue_Array.vfptr; /*0x6e7058*/
  if ( vtable1 <= 0 ) /*0x6e7060*/
    goto LABEL_13; /*0x6e7060*/
  while ( 1 ) /*0x6e7069*/
  {
    v6 = vtable0[2 * (vtable1 / 2)]; /*0x6e7069*/
    uniqueId = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e706c*/
    if ( v6 <= v4 ) /*0x6e7071*/
      break; /*0x6e7071*/
    vtable1 /= 2; /*0x6e7073*/
  LABEL_12:
    if ( vtable1 <= 0 ) /*0x6e7085*/
      goto LABEL_13; /*0x6e7085*/
  }
  if ( v6 != v4 ) /*0x6e7077*/
  {
    vtable0 = &uniqueId->u32_8; /*0x6e7079*/
    vtable1 += -1 - vtable1 / 2; /*0x6e7081*/
    goto LABEL_12; /*0x6e7081*/
  }
  if ( uniqueId ) /*0x6e70ab*/
  {
    g_BuildingLoadQueue_Array.uniqueId = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e70ad*/
    goto LABEL_17; /*0x6e70ad*/
  }
  LABEL_13:
  v7 = (void ***)&unk_B78828; /*0x6e7087*/
  return (int)__RTDynamicCast(*v7, 0,0,0, 0); /*0x6e70a7*/
}
}
// 0x752DB0
namespace gamemd {
char AudioEvent::LoadFromINI(uint8_t ***a2) {
  double v5; // [esp+0h] [ebp-20Ch]
  char Source[500]; // [esp+18h] [ebp-1F4h] BYREF

  _ESI = this; /*0x752dc0*/
  INIClass::ResetSection((INIClass *)a2); /*0x752dc4*/
  _ESI->u32_28 = 1065353216; /*0x752dcc*/
  if ( !INIClass::BinarySearchSection((int)a2, (uint8_t *)_ESI) ) /*0x752dd3*/
    return 0; /*0x752fec*/
  __asm { fld dword ptr [esi+28h] } /*0x752de7*/
  __asm { fstp [esp+20Ch+var_20C] } /*; double*/
  INIClass::ReadDouble_Overwrite((double *)a2, (uint8_t *)_ESI, g_INI_Key_Volume, v5); /*0x752df9*/
  __asm { fstp dword ptr [esi+28h] } /*0x752dfe*/
  _ESI->u32_28 = _ET1; /*0x752dfe*/
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
            _ESI->u32_4C = 3; /*0x752e9c*/
        }
        else
        {
          _ESI->u32_4C = 2; /*0x752e7d*/
        }
      }
      else
      {
        _ESI->u32_4C = 0; /*0x752e62*/
      }
    }
    else
    {
      _ESI->u32_4C = 1; /*0x752e43*/
    }
  }
  INIClass::GetString( /*0x752eba*/
    (INIClass *)a2,
    (uint8_t *)_ESI,
    (uint8_t *)&g_INI_Key_TRUCKA.VoxelCaches[3],
    &g_INI_DefaultBuffer,
    Source,
    500);
  if ( strlen(Source) ) /*0x752ec3*/
  {
    if ( _strcmpi(Source, aLow) ) /*0x752eda*/
    {
      if ( _strcmpi(Source, g_INI_Key_NORMAL) ) /*0x752ef5*/
      {
        if ( _strcmpi(Source, aImportant) ) /*0x752f14*/
        {
          if ( !_strcmpi(Source, aCritical) ) /*0x752f33*/
            _ESI->u32_48 = 3; /*0x752f3f*/
        }
        else
        {
          _ESI->u32_48 = 2; /*0x752f20*/
        }
      }
      else
      {
        _ESI->u32_48 = 1; /*0x752f01*/
      }
    }
    else
    {
      _ESI->u32_48 = 0; /*0x752ee6*/
    }
  }
  INIClass::GetString((INIClass *)a2, (uint8_t *)_ESI, aYuri, &g_INI_DefaultBuffer, Source, 500); /*0x752f5d*/
  strncpy(&_ESI->u8_2C, Source, 9u); /*0x752f6d*/
  _ESI->u8_34 = 0; /*0x752f79*/
  INIClass::GetString((INIClass *)a2, (uint8_t *)_ESI, aRussian, &g_INI_DefaultBuffer, Source, 500); /*0x752f8f*/
  strncpy(&_ESI->u8_35, Source, 9u); /*0x752f9f*/
  _ESI->u8_3D = 0; /*0x752fab*/
  INIClass::GetString((INIClass *)a2, (uint8_t *)_ESI, aAllied, &g_INI_DefaultBuffer, Source, 500); /*0x752fc1*/
  strncpy(&_ESI->u8_3E, Source, 9u); /*0x752fd1*/
  _ESI->u8_46 = 0; /*0x752fd9*/
  return 1; /*0x752fde*/
}
}
// 0x754BE0
namespace gamemd {
void * AudioConfig::InitDefault() {
  memcpy(this, &stru_B44318, 0x30u); /*0x754bf0*/
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
  result = this->u32_8; /*0x756bb8*/
  if ( result ) /*0x756bbd*/
  {
    result = 0; /*0x756bc4*/
    v11 = 0; /*0x756bc8*/
    do /*0x756dc0*/
    {
      v4 = this->u32_14 + result; /*0x756bd1*/
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
    while ( v2 < this->u32_8 ); /*0x756dc0*/
  }
  return result; /*0x756dc9*/
}
}
// 0x4024A0
namespace gamemd::ra2::gamemd {
int AudioSample::ResetState() {
    int v2; // eax
    int v3; // ecx
    int result; // eax

    if ( (this->u32_A4 & 8) != 0 ) /*0x4024aa*/
    {
      v2 = this->u32_A4; /*0x4024b1*/
      (*((unsigned char *)&(v2))) = v2 & 0xF7; /*0x4024b7*/
      this->u32_A4 = v2; /*0x4024b9*/
      this->u32_15C = AudioController::AdvanceQueue; /*0x4024c1*/
      this->u32_160 = AudioController::UpdatePlayback; /*0x4024cb*/
      this->u32_164 = AudioController::CleanupStream; /*0x4024d5*/
      this->u32_B0 = 0; /*0x4024df*/
      this->u32_B4 = 0; /*0x4024e5*/
      this->u32_B8 = 0; /*0x4024eb*/
      this->u32_BC = 0; /*0x4024f1*/
      this->u32_C0 = 0; /*0x4024f7*/
      this->AudioSample_field_0x0C = 1; /*0x4024fd*/
      this->u32_A8 = 0; /*0x402504*/
      this->u32_A4 = 0; /*0x40250a*/
      this->u32_A0 = 0; /*0x402510*/
      dword_87DE30 = dword_87DE30; /*0x402516*/
      this->u32_90 = 0; /*0x40251c*/
      this->u32_94 = dword_87DE30; /*0x402522*/
      this->u32_98 = 0; /*0x40252b*/
      this->u32_9C = 0; /*0x402531*/
      result = AudioMixer::Init(&this->q010); /*0x402537*/
      this->u32_168 = 0; /*0x40253c*/
    }
    return result; /*0x402543*/
}
} // namespace gamemd::ra2::gamemd

// 0x4025B0
namespace gamemd::ra2::gamemd {
int Voice::Stop() {
    int v1; // ecx
    int result; // eax

    v1 = v1; /*0x4025b1*/
    (*(void (**)(void))(v1->u32_D4 + 40))(); /*0x4025b9*/
    if ( (v1->u32_A4 & 5) != 0 ) /*0x4025c3*/
      v1->u32_D4->vt_slot_16(); /*0x4025cd*/
    v1->u32_D4->vt_slot_44(); /*0x4025d8*/
    result = v1->q0BC; /*0x4025db*/
    if ( result ) /*0x4025e3*/
      result = result(v1); /*0x4025e7*/
    v1->u32_168 = 0; /*0x4025e9*/
    return result; /*0x4025f3*/
}
} // namespace gamemd::ra2::gamemd

// 0x48E520
namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd {
unsigned int * ControlClass::Construct(int a2, int a3, int a4, int a5, int a6, int a7, char a8) {
    GadgetClass::Construct((ShpButtonClass *)this, a3, a4, a5, a6, a7, a8); /*0x48e543*/
    this->u32_28 = 0; /*0x48e54c*/
    this->u32_24 = a2; /*0x48e553*/
    /* X11: vtable install elided (implicit via ControlClass virtuals 0x48e556) */
    return this->vtable1; /*0x48e55e*/
}
} // namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd

// 0x48E660
namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd {
unsigned int * ControlClass::QueryInterface(char a2) {
    GadgetClass::Dtor((GadgetClass *)this); /*0x48e663*/
    if ( (a2 & 1) != 0 ) /*0x48e66d*/
      operator delete((void *)(this)); /*0x48e670*/
    return this->vtable1; /*0x48e67a*/
}
} // namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd

// 0x4B4F40
namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd {
int DropListClass::Draw(int a2) {
    this->q050.Draw(a2); /*0x4b4f4f*/
    return LinkedList::Append((LinkClass *)this, a2); /*0x4b4f5a*/
}
} // namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd

// 0x4B66A0
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
LONG DropPodLocomotionClass::AddRef() {
    return COM::AddRef((LocomotionClass *)this); /*0x4b66aa*/
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x4B66B0
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
LONG DropPodLocomotionClass::Release() {
    return COM::ReleaseRef((LocomotionClass *)this); /*0x4b66ba*/
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x4E1340
namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd {
unsigned int * ControlClass::Constructor(int a2) {
    this->X = 0; /*0x4e1344*/
    this->Y = 0; /*0x4e1347*/
    /* X11: vtable install elided (implicit via LinkClass virtuals 0x4e134e) */
    this->Width = a2->Width; /*0x4e1357*/
    this->X = a2->Height; /*0x4e135d*/
    this->Visible = a2->Visible; /*0x4e1363*/
    this->vtable3 = a2->ID; /*0x4e1369*/
    this->IsOutOfMap = a2->q01C; /*0x4e136f*/
    this->u32_1D = a2->q01D; /*0x4e1375*/
    this->u32_1E = a2->q01E; /*0x4e137b*/
    this->DestinationCoords = a2->q020; /*0x4e1381*/
    /* X11: vtable install elided (implicit via GadgetClass virtuals 0x4e1384) */
    return this->vtable1; /*0x4e138a*/
}
} // namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd

// 0x52B390
namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd {
int HashTable::BinarySearch(int *a2) {
    int result; // eax
    size_t v4; // ecx
    int v5; // ecx
    int v6; // ebp
    int v7; // edi
    int v8; // esi
    int v9; // edx

    v4 = this->m_Next; /*0x52b395*/
    if ( !v4 ) /*0x52b39b*/
      goto LABEL_13; /*0x52b39b*/
    result = this->m_Next; /*0x52b39d*/
    if ( result ) /*0x52b3a6*/
    {
      result = *(unsigned int *)result; /*0x52b3a8*/
      if ( result == *a2 ) /*0x52b3ae*/
      {
        (*((unsigned char *)&(result))) = 1; /*0x52b3b3*/
        return result; /*0x52b3b6*/
      }
    }
    if ( !this->q00C ) /*0x52b3b9*/
    {
      result = qsort((void *)*this, v4, 8u, CompareFunc4Int); /*0x52b3cb*/
      this->u32_10 = 0; /*0x52b3d3*/
      this->q00C = 1; /*0x52b3da*/
    }
    v5 = this->HashTable_field_0x04; /*0x52b3de*/
    v6 = *a2; /*0x52b3e1*/
    v7 = *this; /*0x52b3e3*/
    if ( v5 <= 0 ) /*0x52b3e7*/
      goto LABEL_13; /*0x52b3e7*/
    while ( 1 ) /*0x52b3ee*/
    {
      result = v5 / 2; /*0x52b3ee*/
      v8 = *(unsigned int *)(v7 + 8 * (v5 / 2)); /*0x52b3f0*/
      v9 = v7 + 8 * (v5 / 2); /*0x52b3f3*/
      if ( v8 <= v6 ) /*0x52b3f8*/
        break; /*0x52b3f8*/
      v5 /= 2; /*0x52b3fa*/
  LABEL_12:
      if ( v5 <= 0 ) /*0x52b40c*/
        goto LABEL_13; /*0x52b40c*/
    }
    if ( v8 != v6 ) /*0x52b3fe*/
    {
      v7 = v9 + 8; /*0x52b400*/
      v5 += -1 - result; /*0x52b408*/
      goto LABEL_12; /*0x52b408*/
    }
    if ( !v9 ) /*0x52b419*/
    {
  LABEL_13:
      (*((unsigned char *)&(result))) = 0; /*0x52b40e*/
      return result; /*0x52b414*/
    }
    this->u32_10 = v9; /*0x52b41d*/
    (*((unsigned char *)&(result))) = 1; /*0x52b421*/
    return result; /*0x52b3b0*/
}
} // namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd

// 0x54DC60
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
int JumpjetLocomotionClass::QueryInterface(const void *a2, int *a3) {
    int result; // eax
    int *p_TurnRate; // eax

    result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x54dc72*/
    if ( result == -2147467262 ) /*0x54dc7c*/
    {
      if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x54dc8b*/
      {
        if ( this ) /*0x54dc92*/
          p_TurnRate = &this->TurnRate; /*0x54dc94*/
        else
          p_TurnRate = 0; /*0x54dc99*/
        *a3 = (int)p_TurnRate; /*0x54dc9b*/
      }
      if ( *a3 ) /*0x54dc9e*/
      {
        (*(void (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 4))(this); /*0x54dcb2*/
        return 0; /*0x54dcb5*/
      }
      else
      {
        return -2147467262; /*0x54dca6*/
      }
    }
    return result; /*0x54dca4*/
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x54DF50
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
LONG JumpjetLocomotionClass::AddRef() {
    return COM::AddRef((LocomotionClass *)this); /*0x54df5a*/
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x54DF60
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
LONG JumpjetLocomotionClass::Release() {
    return COM::ReleaseRef((LocomotionClass *)this); /*0x54df6a*/
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x558180
namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd {
unsigned int * SliderClass::QueryInterface(char a2) {
    SliderClass::Destructor(this); /*0x558183*/
    if ( (a2 & 1) != 0 ) /*0x55818d*/
      operator delete((void *)(this)); /*0x558190*/
    return this->vtable1; /*0x55819a*/
}
} // namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd

// 0x6A4260
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
LONG ShipLocomotionClass::AddRef() {
    return COM::AddRef((LocomotionClass *)this); /*0x6a426a*/
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x6A4270
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
LONG ShipLocomotionClass::Release() {
    return COM::ReleaseRef((LocomotionClass *)this); /*0x6a427a*/
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x6B1B20
namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd {
int * SliderClass::Constructor(int a2, int a3, int a4, int a5, int a6, int a7) {

  ShapeButtonClass *v8; // edi
  void *v9; // eax
  unsigned char *v10; // eax
  ShapeButtonClass *v11; // edi
  void *v12; // eax
  unsigned char *v13; // eax
  int v14; // ecx
  int v15; // ecx
  int SliderClass_field_0x30; // eax
  int v17; // edx
  char v18; // bl
  int SliderClass_field_0x14; // ebp
  double v20; // st7
  unsigned __int16 *v21; // eax
  int v22; // edi
  double v23; // st7
  int v24; // eax
  int SliderClass_field_0x18; // ebp
  unsigned __int16 *v26; // eax
  int v27; // edi
  int v28; // eax
  int v30; // [esp-14h] [ebp-34h]
  int v31; // [esp-14h] [ebp-34h]
  int SliderClass_field_0x10; // [esp-10h] [ebp-30h]
  int v33; // [esp-10h] [ebp-30h]

  ListClass::Constructor((int)this, a2, a3, a4, a5, a6); /*0x6b1b44*/
  *(unsigned int *)this->__pad_0 = &vt_SliderClass; /*0x6b1b51*/
  this->u32_44 = a7 != 0; /*0x6b1b5c*/
  this->u32_3C = 0; /*0x6b1b5f*/
  this->u32_40 = 0; /*0x6b1b62*/
  if ( !a7 ) /*0x6b1b65*/
  {
    v8 = (ShapeButtonClass *)__2_YAPAXI_Z(0x60u); /*0x6b1b72*/
    if ( v8 ) /*0x6b1b79*/
    {
      SliderClass_field_0x10 = this->Height; /*0x6b1b87*/
      v30 = this->Visible + this->Width + 2; /*0x6b1b8c*/
      v9 = SearchMIXFile(aBtnPlusShp, 0); /*0x6b1b94*/
      v10 = ShapeButtonClass::Constructor(v8, a2, (int)v9, v30, SliderClass_field_0x10, 0, 0, 0); /*0x6b1b9d*/
    }
    else
    {
      v10 = 0; /*0x6b1ba4*/
    }
    this->u32_3C = v10; /*0x6b1ba8*/
    v11 = (ShapeButtonClass *)__2_YAPAXI_Z(0x60u); /*0x6b1bb0*/
    if ( v11 ) /*0x6b1bb7*/
    {
      v33 = this->Height; /*0x6b1bc5*/
      v31 = this->Width - 6; /*0x6b1bc6*/
      v12 = SearchMIXFile(aBtnMinsShp, 0); /*0x6b1bce*/
      v13 = ShapeButtonClass::Constructor(v11, a2, (int)v12, v31, v33, 0, 0, 0); /*0x6b1bd7*/
    }
    else
    {
      v13 = 0; /*0x6b1bde*/
    }
    v14 = this->u32_3C; /*0x6b1be0*/
    this->u32_40 = v13; /*0x6b1be3*/
    if ( v14 ) /*0x6b1be8*/
    {
      (*(void (**)(int, SliderClass *))(*(unsigned int *)v14 + 132))(v14, this); /*0x6b1bed*/
      (*(void (**)(unsigned int, SliderClass *))(*this->u32_3C + 12))(this->u32_3C, this); /*0x6b1bf9*/
      (*(void (**)(unsigned int))(*this->u32_3C + 72))(this->u32_3C); /*0x6b1c01*/
    }
    v15 = this->u32_40; /*0x6b1c04*/
    if ( v15 ) /*0x6b1c09*/
    {
      (*(void (**)(int, SliderClass *))(*(unsigned int *)v15 + 132))(v15, this); /*0x6b1c0e*/
      (*(void (**)(unsigned int, SliderClass *))(*this->u32_40 + 12))(this->u32_40, this); /*0x6b1c1a*/
      (*(void (**)(unsigned int))(*this->u32_40 + 72))(this->u32_40); /*0x6b1c22*/
    }
  }
  SliderClass_field_0x30 = this->SliderClass_field_0x30; /*0x6b1c25*/
  if ( SliderClass_field_0x30 > 1 ) /*0x6b1c2b*/
    SliderClass_field_0x30 = 1; /*0x6b1c2d*/
  this->u32_48 = SliderClass_field_0x30; /*0x6b1c35*/
  v17 = *(unsigned int *)this->__pad_0; /*0x6b1c3f*/
  this->u32_48 = 1; /*0x6b1c43*/
  (*(void (**)(SliderClass *))(v17 + 72))(this); /*0x6b1c46*/
  v18 = BYTE2(this->SliderClass_field_0x2C); /*0x6b1c49*/
  if ( v18 ) /*0x6b1c4e*/
    SliderClass_field_0x14 = this->Visible; /*0x6b1c50*/
  else
    SliderClass_field_0x14 = this->ID; /*0x6b1c55*/
  v20 = (double)this->SliderClass_field_0x30; /*0x6b1c58*/
  LOWORD(v21) = Math::RoundToInt(v20); /*0x6b1c74*/
  v22 = (int)v21; /*0x6b1c7c*/
  if ( (int)v21 <= 4 ) /*0x6b1c7e*/
    v22 = 4; /*0x6b1c80*/
  v23 = (double)this->u32_34 / v20; /*0x6b1c85*/
  this->u32_4C = v22; /*0x6b1c88*/
  LOWORD(v24) = Math::RoundToInt(v23); /*0x6b1c91*/
  if ( v24 >= SliderClass_field_0x14 - v22 ) /*0x6b1c9c*/
    v24 = SliderClass_field_0x14 - v22; /*0x6b1c9e*/
  this->u32_50 = v24; /*0x6b1ca2*/
  if ( v18 ) /*0x6b1ca5*/
    SliderClass_field_0x18 = this->Visible; /*0x6b1ca7*/
  else
    SliderClass_field_0x18 = this->ID; /*0x6b1cac*/
  LOWORD(v26) = Math::RoundToInt(v23); /*0x6b1cbd*/
  v27 = (int)v26; /*0x6b1cc5*/
  if ( (int)v26 <= 4 ) /*0x6b1cc7*/
    v27 = 4; /*0x6b1cc9*/
  this->u32_4C = v27; /*0x6b1cd0*/
  LOWORD(v28) = Math::RoundToInt(v23); /*0x6b1cd3*/
  if ( v28 >= SliderClass_field_0x18 - v27 ) /*0x6b1ce0*/
    v28 = SliderClass_field_0x18 - v27; /*0x6b1ce2*/
  this->u32_50 = v28; /*0x6b1ce4*/
  LOBYTE(this->SliderClass_field_0x2C) = 0; /*0x6b1ce7*/
  return (int *)this->__pad_0; /*0x6b1ced*/

}
} // namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd

// 0x6B1D00
namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd {
int SliderClass::Destructor() {
    void (__thiscall ***v2)(unsigned int, int); // ecx
    void (__thiscall ***v3)(unsigned int, int); // ecx

    v2 = (void (__thiscall ***)(unsigned int, int))this->u32_3C; /*0x6b1d03*/
    /* X11: vtable install elided (implicit via SliderClass virtuals 0x6b1d06) */
    if ( v2 ) /*0x6b1d0e*/
    {
      (**v2)(v2, 1); /*0x6b1d14*/
      this->u32_3C = 0; /*0x6b1d16*/
    }
    v3 = (void (__thiscall ***)(unsigned int, int))this->u32_40; /*0x6b1d1d*/
    if ( v3 ) /*0x6b1d22*/
    {
      (**v3)(v3, 1); /*0x6b1d28*/
      this->u32_40 = 0; /*0x6b1d2a*/
    }
    return GadgetClass::Dtor((ShpButtonClass *)this); /*0x6b1d38*/
}
} // namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd

// 0x6B1D40
namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd {
int SliderClass::GetValue(int a2) {

  int SliderClass_field_0x14; // ebx
  double SliderClass_field_0x30; // st7
  unsigned __int16 *v5; // eax
  int v6; // edi
  int v7; // eax

  if ( !GaugeClass::SetValue((GaugeClass *)this, a2) ) /*0x6b1d48*/
    return 0; /*0x6b1db0*/
  if ( BYTE2(this->SliderClass_field_0x2C) ) /*0x6b1d51*/
    SliderClass_field_0x14 = this->Visible; /*0x6b1d5a*/
  else
    SliderClass_field_0x14 = this->ID; /*0x6b1d5f*/
  SliderClass_field_0x30 = (double)this->SliderClass_field_0x30; /*0x6b1d62*/
  LOWORD(v5) = Math::RoundToInt(SliderClass_field_0x30); /*0x6b1d74*/
  v6 = (int)v5; /*0x6b1d7c*/
  if ( (int)v5 <= 4 ) /*0x6b1d7e*/
    v6 = 4; /*0x6b1d80*/
  this->u32_4C = v6; /*0x6b1d88*/
  LOWORD(v7) = Math::RoundToInt(SliderClass_field_0x30); /*0x6b1d8f*/
  if ( v7 >= SliderClass_field_0x14 - v6 ) /*0x6b1da0*/
    v7 = SliderClass_field_0x14 - v6; /*0x6b1da2*/
  this->u32_50 = v7; /*0x6b1da4*/
  return 1; /*0x6b1dac*/

}
} // namespace ra2::gamemd::ra2::gamemd::ra2::gamemd::ra2::gamemd

// 0x75C7F0
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
int WalkLocomotionClass::QueryInterface(const void *a2, int *a3) {
    int result; // eax
    char *pad_18; // eax

    result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x75c802*/
    if ( result == -2147467262 ) /*0x75c80c*/
    {
      if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x75c81b*/
      {
        if ( this ) /*0x75c822*/
          pad_18 = this->vtable3; /*0x75c824*/
        else
          pad_18 = 0; /*0x75c829*/
        *a3 = (int)pad_18; /*0x75c82b*/
      }
      if ( *a3 ) /*0x75c82e*/
      {
        (*(void (__stdcall **)(WalkLocomotionClass *))(*(unsigned int *)this->LocomotionClass + 4))(this); /*0x75c842*/
        return 0; /*0x75c845*/
      }
      else
      {
        return -2147467262; /*0x75c836*/
      }
    }
    return result; /*0x75c834*/
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x75CB80
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
LONG WalkLocomotionClass::AddRef() {
    return COM::AddRef((LocomotionClass *)this); /*0x75cb8a*/
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

// 0x75CB90
namespace ra2::gamemd::LocomotorCLSID::ILocoVTable {
LONG WalkLocomotionClass::Release() {
    return COM::ReleaseRef((LocomotionClass *)this); /*0x75cb9a*/
}
} // namespace ra2::gamemd::LocomotorCLSID::ILocoVTable

