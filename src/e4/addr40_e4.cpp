// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Audio_e4.hpp"

// 0x4011C0
namespace gamemd {
char * LoadAudioFile(const char * a1, const char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall LoadAudioFile(const char *a1, const char *a2)
{
  char *v3; // ebp
  char *v4; // eax
  char *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  void *v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // esi
  HANDLE FirstFileA; // esi
  void (__thiscall ***v14)(_DWORD, int); // ecx
  void (__thiscall ***v15)(_DWORD, int); // ecx
  _DWORD Buffer[2]; // [esp+14h] [ebp-2BCh] BYREF
  int v18; // [esp+1Ch] [ebp-2B4h]
  int v19[22]; // [esp+20h] [ebp-2B0h] BYREF
  _BYTE v20[12]; // [esp+78h] [ebp-258h] BYREF
  int v21; // [esp+84h] [ebp-24Ch]
  char Str[260]; // [esp+8Ch] [ebp-244h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+190h] [ebp-140h] BYREF

  v3 = (char *)__2_YAPAXI_Z(0x124u); /*0x4011da*/
  memset(v3, 0, 0x124u); /*0x4011e5*/
  strcpy(Str, a1); /*0x401204*/
  v4 = strrchr(Str, 46); /*0x401215*/
  if ( v4 ) /*0x401221*/
    *v4 = 0; /*0x401223*/
  strcat(Str, aIdx); /*0x40124d*/
  CCFileClass::Construct(v19, Str); /*0x401262*/
  if ( !CCFileClass::Open(v19, 0) ) /*0x40126c*/
    goto LABEL_30; /*0x40126c*/
  v5 = strrchr(Str, 46); /*0x401283*/
  if ( v5 ) /*0x40128d*/
    *v5 = 0; /*0x40128f*/
  strcat(Str, aBag); /*0x4012bc*/
  v6 = __2_YAPAXI_Z(0x6Cu); /*0x4012c5*/
  v7 = v6 ? CCFileClass::Construct(v6, Str) : 0;
  *((_DWORD *)v3 + 67) = v7; /*0x4012e4*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v7 + 20))(v7, 0) ) /*0x4012ef*/
    goto LABEL_30; /*0x4012ef*/
  FileClass::Load(v19, 1); /*0x401300*/
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)v3 + 67) + 28))(*((_DWORD *)v3 + 67), 1); /*0x40130f*/
  if ( CCFileClass::Read(v19, Buffer, 12) != 12 ) /*0x401325*/
    goto LABEL_30; /*0x401325*/
  *((_DWORD *)v3 + 1) = v18; /*0x40132f*/
  if ( v18 <= 0 ) /*0x401338*/
    goto LABEL_17; /*0x401338*/
  v8 = __2_YAPAXI_Z(36 * v18); /*0x401346*/
  v9 = *((_DWORD *)v3 + 1); /*0x401348*/
  *(_DWORD *)v3 = v8; /*0x40134b*/
  memset(v8, 0, 4 * ((unsigned int)(36 * v9) >> 2)); /*0x40135e*/
  if ( Buffer[1] != 1 ) /*0x40136c*/
  {
    if ( CCFileClass::Read(v19, *(void **)v3, 36 * *((_DWORD *)v3 + 1)) == 36 * *((_DWORD *)v3 + 1) ) /*0x401500*/
      goto LABEL_17; /*0x401500*/
LABEL_30:
    if ( v3 ) /*0x401508*/
    {
      v14 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)v3 + 67); /*0x40150a*/
      if ( v14 ) /*0x401512*/
        (**v14)(v14, 1); /*0x401518*/
      v15 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)v3 + 68); /*0x40151a*/
      if ( v15 ) /*0x401522*/
        (**v15)(v15, 1); /*0x401528*/
      if ( *(_DWORD *)v3 ) /*0x40152a*/
        __3_YAXPAX_Z(*(void **)v3); /*0x401532*/
      __3_YAXPAX_Z(v3); /*0x40153b*/
    }
    v19[0] = (int)&CCFileClass::`vftable'; /*0x401547*/
    v21 = 0; /*0x40154f*/
    Vector::Clear((int)v20); /*0x401556*/
    v19[0] = (int)&off_7E1668; /*0x40155f*/
    BufferIOFileClass::Dtor(v19); /*0x401567*/
    return 0; /*0x40156c*/
  }
  v10 = 0; /*0x401375*/
  if ( *((int *)v3 + 1) > 0 ) /*0x401379*/
  {
    v11 = 0; /*0x40137b*/
    while ( CCFileClass::Read(v19, (void *)(*(_DWORD *)v3 + v11), 32) == 32 ) /*0x401393*/
    {
      ++v10; /*0x40139c*/
      *(_DWORD *)(v11 + *(_DWORD *)v3 + 32) = 0; /*0x40139d*/
      v11 += 36; /*0x4013a4*/
      if ( v10 >= *((_DWORD *)v3 + 1) ) /*0x4013a9*/
        goto LABEL_17; /*0x4013a9*/
    }
    goto LABEL_30; /*0x401393*/
  }
LABEL_17:
  qsort(*(void **)v3, *((_DWORD *)v3 + 1), 0x24u, _strcmpi); /*0x4013ab*/
  *((_DWORD *)v3 + 69) = 0; /*0x4013c8*/
  if ( a2 ) /*0x4013ce*/
  {
    strcpy(v3 + 8, a2); /*0x4013ed*/
    if ( v3[strlen(v3 + 8) + 8] == 92 ) /*0x401407*/
      v3[strlen(v3 + 8) + 8] = 0; /*0x401415*/
    FirstFileA = FindFirstFileA(v3 + 8, &FindFileData); /*0x401428*/
    if ( FirstFileA != (HANDLE)-1 ) /*0x40142d*/
    {
      if ( (FindFileData.dwFileAttributes & 0x10) != 0 ) /*0x401437*/
      {
LABEL_24:
        *((_DWORD *)v3 + 69) = 1; /*0x401458*/
      }
      else
      {
        while ( FindNextFileA(FirstFileA, &FindFileData) ) /*0x40144c*/
        {
          if ( (FindFileData.dwFileAttributes & 0x10) != 0 ) /*0x401456*/
            goto LABEL_24; /*0x401456*/
        }
      }
      FindClose(FirstFileA); /*0x401463*/
    }
    if ( v3[strlen(v3 + 8) + 8] != 92 ) /*0x40147a*/
      strcat(v3 + 8, asc_815E74); /*0x40149d*/
  }
  v19[0] = (int)&CCFileClass::`vftable'; /*0x4014ac*/
  v21 = 0; /*0x4014b4*/
  Vector::Clear((int)v20); /*0x4014bb*/
  v19[0] = (int)&off_7E1668; /*0x4014c4*/
  BufferIOFileClass::Dtor(v19); /*0x4014cc*/
  return v3; /*0x4014d3*/
}
}
} // namespace gamemd

// 0x401C00
namespace gamemd {
int * AudioMixer_LoadSample(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__fastcall AudioMixer_LoadSample(_DWORD *a1, int a2)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  int *v5; // ebp
  int v6; // edi
  _DWORD **i; // esi
  int v9; // eax
  int *v10; // esi
  int v11; // esi
  _DWORD **j; // edi
  int v13; // eax
  _DWORD **k; // esi
  int v16; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h]

  v2 = a1; /*0x401c05*/
  v3 = (_DWORD *)a1[3]; /*0x401c0d*/
  v4 = a1 + 3; /*0x401c10*/
  if ( v3 != a1 + 3 ) /*0x401c19*/
  {
    while ( v3[5] != a2 || !v3[6] ) /*0x401c25*/
    {
      v3 = (_DWORD *)*v3; /*0x401c27*/
      if ( v3 == v4 ) /*0x401c2b*/
        goto LABEL_5; /*0x401c2b*/
    }
    if ( v3 ) /*0x401c77*/
    {
      LinkedList::Init((_DWORD **)v3); /*0x401c7b*/
      InsertBeforeLinkedList(v4, v3); /*0x401c84*/
      return v3; /*0x401c92*/
    }
  }
LABEL_5:
  if ( IDXContainer::LoadSample(*a1) ) /*0x401c2f*/
  {
    v5 = LinkedList::Next((int **)v2[2]); /*0x401c44*/
    if ( !v5 ) /*0x401c48*/
    {
      v6 = AudioList::GetNextEntry(v4); /*0x401c55*/
      if ( v6 ) /*0x401c59*/
      {
        while ( *(_DWORD *)(v6 + 12) ) /*0x401c64*/
        {
          v6 = AudioList::GetNextEntry(v6); /*0x401c6d*/
          if ( !v6 ) /*0x401c71*/
            goto LABEL_18; /*0x401c71*/
        }
        if ( *(_DWORD *)(v6 + 4) != v6 ) /*0x401c96*/
          LinkedList::Init((_DWORD **)v6); /*0x401c9a*/
        for ( i = (_DWORD **)Queue::GetNext((int *)(v6 + 36)); i; i = (_DWORD **)Queue::GetNext((int *)(v6 + 36)) ) /*0x401cad*/
        {
          LinkedList::Init(i); /*0x401cb1*/
          AudioNode::Release(i); /*0x401cb8*/
          PushFrontLinkedListAlt(*(_DWORD **)(*(_DWORD *)(v6 + 60) + 4), (int)i); /*0x401cc5*/
        }
        nullsub_2(v6 + 28); /*0x401cda*/
        PushFrontLinkedListAlt(*(_DWORD **)(*(_DWORD *)(v6 + 60) + 8), v6); /*0x401ce7*/
      }
LABEL_18:
      v5 = LinkedList::Next((int **)v2[2]); /*0x401cf4*/
      if ( !v5 ) /*0x401cf8*/
      {
        AudioStream::ReleaseSubsystem(*v2); /*0x401cfc*/
        return 0; /*0x401d0a*/
      }
    }
    v5[5] = a2; /*0x401d11*/
    v5[15] = (int)v2; /*0x401d14*/
    DListNode::InitEmpty(v5); /*0x401d17*/
    v5[3] = 0; /*0x401d1c*/
    AudioStream::InitNodeFields(v5 + 7); /*0x401d26*/
    Struct::ZeroInit32(v5 + 16); /*0x401d30*/
    v5[12] = (int)(v5 + 16); /*0x401d35*/
    v9 = *(_DWORD *)(*v2 + 284); /*0x401d3a*/
    v18 = v9; /*0x401d42*/
    if ( !v9 ) /*0x401d46*/
    {
LABEL_37:
      AudioIndex::GetSampleInformation(v5 + 16); /*0x401e4f*/
      InsertBeforeLinkedList(v2 + 3, v5); /*0x401e62*/
      v5[6] = 1; /*0x401e67*/
      AudioStream::ReleaseSubsystem(*v2); /*0x401e70*/
      return v5; /*0x401e7e*/
    }
    while ( 1 ) /*0x401d57*/
    {
      v16 = v2[6]; /*0x401d57*/
      if ( v16 > v9 ) /*0x401d5b*/
        v16 = v9; /*0x401d5d*/
      v10 = LinkedList::Next((int **)v2[1]); /*0x401d69*/
      if ( !v10 ) /*0x401d6d*/
        break; /*0x401d6d*/
LABEL_35:
      sub_4085E0(v16); /*0x401e12*/
      sub_408500(v5 + 7, v10); /*0x401e28*/
      v13 = sub_4018C0(v16); /*0x401e36*/
      if ( v13 != v16 ) /*0x401e3d*/
        goto LABEL_38; /*0x401e3d*/
      v18 -= v13; /*0x401e45*/
      if ( !v18 ) /*0x401e49*/
        goto LABEL_37; /*0x401e49*/
      v9 = v18; /*0x401d4e*/
    }
    while ( 1 ) /*0x401d7b*/
    {
      v11 = AudioList::GetNextEntry(v2 + 3); /*0x401d7b*/
      if ( !v11 ) /*0x401d7f*/
        break; /*0x401d7f*/
      while ( *(_DWORD *)(v11 + 12) ) /*0x401d8a*/
      {
        v11 = AudioList::GetNextEntry(v11); /*0x401d93*/
        if ( !v11 ) /*0x401d97*/
          goto LABEL_38; /*0x401d97*/
      }
      if ( *(_DWORD *)(v11 + 4) != v11 ) /*0x401da2*/
        LinkedList::Init((_DWORD **)v11); /*0x401da6*/
      for ( j = (_DWORD **)Queue::GetNext((int *)(v11 + 36)); j; j = (_DWORD **)Queue::GetNext((int *)(v11 + 36)) ) /*0x401db9*/
      {
        LinkedList::Init(j); /*0x401dbd*/
        AudioNode::Release(j); /*0x401dc4*/
        PushFrontLinkedListAlt(*(_DWORD **)(*(_DWORD *)(v11 + 60) + 4), (int)j); /*0x401dd1*/
      }
      nullsub_2(v11 + 28); /*0x401de6*/
      PushFrontLinkedListAlt(*(_DWORD **)(*(_DWORD *)(v11 + 60) + 8), v11); /*0x401df3*/
      v2 = a1; /*0x401e04*/
      v10 = LinkedList::Next((int **)a1[1]); /*0x401e08*/
      if ( v10 ) /*0x401e0c*/
        goto LABEL_35; /*0x401e0c*/
    }
LABEL_38:
    if ( (int *)v5[1] != v5 ) /*0x401e82*/
      LinkedList::Init((_DWORD **)v5); /*0x401e86*/
    for ( k = (_DWORD **)Queue::GetNext(v5 + 9); k; k = (_DWORD **)Queue::GetNext(v5 + 9) ) /*0x401e99*/
    {
      LinkedList::Init(k); /*0x401e9d*/
      AudioNode::Release(k); /*0x401ea4*/
      PushFrontLinkedListAlt(*(_DWORD **)(v5[15] + 4), (int)k); /*0x401eb1*/
    }
    nullsub_2(v5 + 7); /*0x401ec6*/
    PushFrontLinkedListAlt(*(_DWORD **)(v5[15] + 8), (int)v5); /*0x401ed3*/
  }
  return 0; /*0x401c8b*/
}
}
} // namespace gamemd

// 0x401F80
namespace gamemd {
int _EnterCriticalRegionHelper_ContextBase_details_Concurrency__UAEHXZ()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall _EnterCriticalRegionHelper_ContextBase_details_Concurrency__UAEHXZ(
        Concurrency::details::ContextBase *this)
{
  int result; // eax

  result = *((_DWORD *)this + 3) + 1; /*0x401f83*/
  *((_DWORD *)this + 3) = result; /*0x401f84*/
  return result; /*0x401f87*/
}
}
} // namespace gamemd

// 0x4026C0
namespace gamemd {
int sub_4026C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4026C0(_DWORD *this)
{
  (*(void (**)(void))(*(this + 53) + 40))(); /*0x4026c9*/
  *(this + 41) |= 0x10u; /*0x4026d5*/
  return (*(int (__thiscall **)(_DWORD *))(*(this + 53) + 44))(this);
}
}
} // namespace gamemd

// 0x402790
namespace gamemd {
void AudioStream_BindChannel(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall AudioStream_BindChannel(_DWORD *a1, _DWORD *a2)
{
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // eax

  a1[90] = a2; /*0x402798*/
  if ( a2 ) /*0x40279e*/
  {
    v4 = AudioController::GetOffset(a2); /*0x4027a2*/
    a1[91] = v4; /*0x4027a9*/
    if ( v4 ) /*0x4027af*/
    {
      a1[92] = *(_DWORD *)(v4 + 12); /*0x4027b4*/
      v5 = *(_DWORD *)(v4 + 16); /*0x4027ba*/
      a1[93] = v5; /*0x4027bd*/
      a1[94] = v5; /*0x4027c3*/
      *a2 = 0; /*0x4027c9*/
    }
    else
    {
      v6 = (_DWORD *)a1[90]; /*0x4027d2*/
      a1[92] = *v6; /*0x4027da*/
      v7 = v6[1]; /*0x4027e0*/
      a1[93] = v7; /*0x4027e3*/
      a1[94] = v7; /*0x4027e9*/
    }
  }
}
}
} // namespace gamemd

// 0x402850
namespace gamemd {
int sub_402850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_402850(_DWORD *this)
{
  *(this + 2) = 0; /*0x402852*/
  *(this + 1) = 0; /*0x402855*/
  return 0; /*0x402858*/
}
}
} // namespace gamemd

// 0x402940
namespace gamemd {
int sub_402940()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_402940()
{
  DListNode::Init(off_815E98); /*0x402946*/
  DListNode::Init((_DWORD *)off_815E98 + 3); /*0x402953*/
  *((_DWORD *)off_815E98 + 6) = 0; /*0x40295e*/
  MEMORY[0x87DE30] = (int)off_815E98 + 32; /*0x40296e*/
  AudioMixer::Init((int *)off_815E98 + 8); /*0x402974*/
  MEMORY[0x87DE2C] = 1; /*0x402979*/
  return 0; /*0x402985*/
}
}
} // namespace gamemd

// 0x402990
namespace gamemd {
void sub_402990()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_402990()
{
  int *Next; // edi
  int *i; // esi
  int v2; // eax
  int *v3; // ebx
  int *v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int *v8; // edi
  int *j; // esi
  int NextAlt; // [esp+4h] [ebp-10h]
  int *v11; // [esp+Ch] [ebp-8h] BYREF

  if ( MEMORY[0x87DE2C] ) /*0x40299d*/
  {
    ++*((_DWORD *)off_815E98 + 6); /*0x4029af*/
    Next = (int *)AudioQueue::GetNext((int *)off_815E98 + 3); /*0x4029c0*/
    for ( i = Next; Next; i = Next ) /*0x4029ca*/
    {
      NextAlt = AudioQueue::GetNextAlt(Next); /*0x4029d7*/
      Next = (int *)NextAlt; /*0x4029db*/
      ++*((_DWORD *)off_815E98 + 6); /*0x4029e6*/
      LinkedList::Init((_DWORD **)i); /*0x4029eb*/
      v2 = *((_DWORD *)off_815E98 + 6) - 1; /*0x4029f9*/
      *((_DWORD *)off_815E98 + 6) = v2; /*0x4029fc*/
      if ( v2 < 0 ) /*0x4029ff*/
        *((_DWORD *)off_815E98 + 6) = 0; /*0x402a07*/
      v11 = (int *)AudioQueue::GetNext(i + 62); /*0x402a17*/
      v3 = v11; /*0x402a1b*/
      if ( v11 ) /*0x402a1d*/
      {
        do /*0x402a35*/
        {
          v4 = AudioQueue::IteratorNext(&v11); /*0x402a2a*/
          AudioStream::Destructor(v3); /*0x402a2c*/
          v3 = v4; /*0x402a33*/
        }
        while ( v4 ); /*0x402a35*/
        Next = (int *)NextAlt; /*0x402a37*/
      }
      (*(void (__thiscall **)(int *))(*(_DWORD *)(i[6] + 12) + 32))(i); /*0x402a43*/
      *(_DWORD *)(i[6] + 4 * i[7] + 28) = 0; /*0x402a4c*/
      v5 = i[6]; /*0x402a50*/
      v6 = *(_DWORD *)(v5 + 16) - 1; /*0x402a56*/
      *(_DWORD *)(v5 + 16) = v6; /*0x402a59*/
      if ( v6 < 0 ) /*0x402a5c*/
        *(_DWORD *)(i[6] + 16) = 0; /*0x402a61*/
      __3_YAXPAX_Z(i); /*0x402a65*/
    }
    v7 = *((_DWORD *)off_815E98 + 6) - 1; /*0x402a80*/
    *((_DWORD *)off_815E98 + 6) = v7; /*0x402a83*/
    if ( v7 < 0 ) /*0x402a86*/
      *((_DWORD *)off_815E98 + 6) = 0; /*0x402a8d*/
    v8 = (int *)AudioQueue::GetNext((int *)off_815E98); /*0x402a9b*/
    for ( j = v8; v8; j = v8 ) /*0x402aa1*/
    {
      v8 = (int *)AudioQueue::GetNextAlt(v8); /*0x402ab1*/
      LinkedList::Init((_DWORD **)j); /*0x402ab5*/
      (*(void (__thiscall **)(int *))(j[3] + 24))(j); /*0x402abf*/
      *(_DWORD *)(j[3] + 12) &= ~1u; /*0x402ac6*/
      __3_YAXPAX_Z(j); /*0x402ac9*/
      MEMORY[0x87DE28] = 0; /*0x402ad3*/
    }
    MEMORY[0x87DE2C] = 0; /*0x402adf*/
  }
}
}
} // namespace gamemd

// 0x402C70
namespace gamemd {
int * CreateAudioChannel(int a1, const void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__fastcall CreateAudioChannel(int a1, const void *a2)
{
  int v2; // edi
  int *NextAudioQueue; // eax
  int *v4; // esi
  int v5; // ecx
  int *v7; // edi
  int *v8; // ebx
  int v9; // eax
  int v10; // [esp+10h] [ebp-10h]
  int v11; // [esp+14h] [ebp-Ch]
  int v12; // [esp+18h] [ebp-8h]

  v11 = a1; /*0x402c80*/
  if ( a1 == -1 ) /*0x402c84*/
  {
    v11 = 0; /*0x402c86*/
    a1 = 0; /*0x402c8a*/
  }
  v2 = a1; /*0x402c8c*/
  NextAudioQueue = (int *)AudioQueue::GetNext((int *)off_815E98); /*0x402c98*/
  v4 = NextAudioQueue; /*0x402c9f*/
  if ( !NextAudioQueue ) /*0x402ca1*/
    return 0; /*0x402ca1*/
  while ( 1 ) /*0x402ca7*/
  {
    v5 = NextAudioQueue[6]; /*0x402ca7*/
    if ( v2 < v5 ) /*0x402cac*/
      break; /*0x402cac*/
    v2 -= v5; /*0x402cae*/
    NextAudioQueue = (int *)AudioQueue::GetNextAlt(NextAudioQueue); /*0x402cb6*/
    v4 = NextAudioQueue; /*0x402cbd*/
    if ( !NextAudioQueue ) /*0x402cbf*/
      return 0; /*0x402cce*/
  }
  v10 = v2; /*0x402cd1*/
  if ( !v4 ) /*0x402cd5*/
    return 0; /*0x402cd5*/
  v7 = (int *)v4[v2 + 7]; /*0x402cdb*/
  if ( !v7 ) /*0x402ce1*/
  {
    v12 = v4[3]; /*0x402cef*/
    v8 = (int *)__2_YAPAXI_Z(0x1E8u); /*0x402cf8*/
    memset(v8, 0, 0x1E8u); /*0x402d03*/
    DListNode::InitEmpty(v8); /*0x402d0a*/
    v8[6] = (int)v4; /*0x402d13*/
    v8[7] = v10; /*0x402d16*/
    v8[4] = 0; /*0x402d19*/
    ++v4[4]; /*0x402d20*/
    v4[v10 + 7] = (int)v8; /*0x402d27*/
    v8[116] = *(_DWORD *)(v12 + 36); /*0x402d34*/
    DListNode::Init(v8 + 62); /*0x402d3a*/
    AudioMixer::Init(v8 + 26); /*0x402d42*/
    v8[65] = 0; /*0x402d47*/
    v8[67] = (int)ProcessAudioMixerFrame; /*0x402d4d*/
    v8[68] = 0; /*0x402d57*/
    v8[69] = 0; /*0x402d5d*/
    v8[70] = 0; /*0x402d63*/
    v8[71] = 0; /*0x402d69*/
    v8[72] = 0; /*0x402d6f*/
    v8[73] = 0; /*0x402d75*/
    v8[74] = 0; /*0x402d7b*/
    v8[75] = 0; /*0x402d81*/
    v8[78] = 0; /*0x402d87*/
    v8[79] = 0; /*0x402d8d*/
    v8[86] = 0; /*0x402d93*/
    v8[88] = 0; /*0x402d99*/
    v8[84] = 5000; /*0x402d9f*/
    v8[85] = 0; /*0x402da9*/
    v8[80] = 0; /*0x402daf*/
    v8[81] = 0; /*0x402db5*/
    v8[82] = 0; /*0x402dbb*/
    v8[83] = 0; /*0x402dc1*/
    v8[89] = 0; /*0x402dc7*/
    v8[87] = 0; /*0x402dcd*/
    v8[68] = 33; /*0x402dd8*/
    v8[69] = 0; /*0x402dde*/
    v8[70] = 33; /*0x402de4*/
    v8[71] = 0; /*0x402dea*/
    *((_QWORD *)v8 + 38) = 10LL * *((_QWORD *)v8 + 34); /*0x402e06*/
    v8[70] = 165; /*0x402e17*/
    v8[71] = 0; /*0x402e1d*/
    v8[76] = 165; /*0x402e23*/
    v8[77] = 0; /*0x402e29*/
    AudioStream::Reset(v8 + 92); /*0x402e37*/
    CoordBounds::Constructor(v8 + 92, 33, 0); /*0x402e40*/
    Struct::ZeroInit32(v8 + 17); /*0x402e4a*/
    Struct::ZeroInit32(v8 + 9); /*0x402e52*/
    if ( a2 ) /*0x402e5d*/
      qmemcpy(v8 + 17, a2, 0x20u); /*0x402e64*/
    if ( (*(int (__thiscall **)(int *))(v12 + 28))(v8) ) /*0x402e6c*/
    {
      if ( v8 ) /*0x402e75*/
      {
        sub_402EF0(v8); /*0x402e79*/
        return 0; /*0x402e87*/
      }
      return 0; /*0x402e75*/
    }
    v7 = v8; /*0x402e8a*/
    if ( !v8 ) /*0x402e8c*/
      return 0; /*0x402e97*/
    v8[59] = v11; /*0x402e9c*/
    ++*((_DWORD *)off_815E98 + 6); /*0x402eab*/
    InsertAfterDListNode((int)off_815E98 + 12, v8); /*0x402eb8*/
    v9 = *((_DWORD *)off_815E98 + 6) - 1; /*0x402ec6*/
    *((_DWORD *)off_815E98 + 6) = v9; /*0x402ec9*/
    if ( v9 < 0 ) /*0x402ecc*/
      *((_DWORD *)off_815E98 + 6) = 0; /*0x402ed4*/
  }
  ++v7[4]; /*0x402edb*/
  return v7; /*0x402cc5*/
}
}
} // namespace gamemd

// 0x402EF0
namespace gamemd {
void sub_402EF0(int * Block)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_402EF0(int *Block)
{
  int *Next; // esi
  int *i; // ebx
  int v4; // eax
  int v5; // ecx

  Next = (int *)AudioQueue::GetNext(Block + 62); /*0x402f00*/
  for ( i = Next; Next; i = Next ) /*0x402f06*/
  {
    Next = (int *)AudioQueue::GetNextAlt(Next); /*0x402f11*/
    AudioStream::Destructor(i); /*0x402f13*/
  }
  (*(void (__thiscall **)(int *))(*(_DWORD *)(*(Block + 6) + 12) + 32))(Block); /*0x402f26*/
  *(_DWORD *)(*(Block + 6) + 4 * *(Block + 7) + 28) = 0; /*0x402f2f*/
  v4 = *(Block + 6); /*0x402f37*/
  v5 = *(_DWORD *)(v4 + 16) - 1; /*0x402f3d*/
  *(_DWORD *)(v4 + 16) = v5; /*0x402f40*/
  if ( v5 < 0 ) /*0x402f43*/
    *(_DWORD *)(*(Block + 6) + 16) = 0; /*0x402f48*/
  __3_YAXPAX_Z(Block); /*0x402f50*/
}
}
} // namespace gamemd

// 0x403210
namespace gamemd {
void * sub_403210()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *sub_403210()
{
  int *Next; // eax
  int *v1; // esi
  int v2; // eax
  int *v3; // edi
  int *i; // ebx
  int v5; // eax
  int v6; // ecx
  void *result; // eax
  int NextAlt; // [esp+8h] [ebp-8h]

  ++*((_DWORD *)off_815E98 + 6); /*0x40321e*/
  Next = (int *)AudioQueue::GetNext((int *)off_815E98 + 3); /*0x40322a*/
  v1 = Next; /*0x403237*/
  if ( Next ) /*0x403239*/
  {
    while ( 1 ) /*0x403252*/
    {
      NextAlt = AudioQueue::GetNextAlt(Next); /*0x403252*/
      ++*((_DWORD *)off_815E98 + 6); /*0x40325f*/
      LinkedList::Init((_DWORD **)v1); /*0x403264*/
      v2 = *((_DWORD *)off_815E98 + 6) - 1; /*0x403272*/
      *((_DWORD *)off_815E98 + 6) = v2; /*0x403275*/
      if ( v2 < 0 ) /*0x403278*/
        *((_DWORD *)off_815E98 + 6) = 0; /*0x403280*/
      v3 = (int *)AudioQueue::GetNext(v1 + 62); /*0x40328e*/
      for ( i = v3; v3; i = v3 ) /*0x403294*/
      {
        v3 = (int *)AudioQueue::GetNextAlt(v3); /*0x40329f*/
        AudioStream::Destructor(i); /*0x4032a1*/
      }
      (*(void (__thiscall **)(int *))(*(_DWORD *)(v1[6] + 12) + 32))(v1); /*0x4032b4*/
      *(_DWORD *)(v1[6] + 4 * v1[7] + 28) = 0; /*0x4032bd*/
      v5 = v1[6]; /*0x4032c1*/
      v6 = *(_DWORD *)(v5 + 16) - 1; /*0x4032c7*/
      *(_DWORD *)(v5 + 16) = v6; /*0x4032ca*/
      if ( v6 < 0 ) /*0x4032cd*/
        *(_DWORD *)(v1[6] + 16) = 0; /*0x4032d2*/
      __3_YAXPAX_Z(v1); /*0x4032d6*/
      v1 = (int *)NextAlt; /*0x4032db*/
      if ( !NextAlt ) /*0x4032e4*/
        break; /*0x4032e4*/
      Next = (int *)NextAlt; /*0x403243*/
    }
  }
  result = (void *)(*((_DWORD *)off_815E98 + 6) - 1); /*0x4032f5*/
  *((_DWORD *)off_815E98 + 6) = result; /*0x4032f8*/
  if ( (int)result < 0 ) /*0x4032fb*/
  {
    result = off_815E98; /*0x4032fd*/
    *((_DWORD *)off_815E98 + 6) = 0; /*0x403302*/
  }
  return result; /*0x403305*/
}
}
} // namespace gamemd

// 0x403480
namespace gamemd {
int sub_403480(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_403480(int a1, int a2)
{
  return RequestBufferMixer((unsigned int *)(a1 + 104), a2);
}
}
} // namespace gamemd

// 0x403490
namespace gamemd {
int _GetSchedulerProxy_SchedulerBase_details_Concurrency__QBEPAUISchedulerProxy_3_XZ()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
struct Concurrency::ISchedulerProxy *__thiscall _GetSchedulerProxy_SchedulerBase_details_Concurrency__QBEPAUISchedulerProxy_3_XZ(
        Concurrency::details::SchedulerBase *this)
{
  return (struct Concurrency::ISchedulerProxy *)*((_DWORD *)this + 61); /*0x403496*/
}
}
} // namespace gamemd

// 0x4034A0
namespace gamemd {
int _GetIScheduler_SchedulerBase_details_Concurrency__QAEPAUIScheduler_3_XZ()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
struct Concurrency::IScheduler *__thiscall _GetIScheduler_SchedulerBase_details_Concurrency__QAEPAUIScheduler_3_XZ(
        Concurrency::details::SchedulerBase *this)
{
  return (struct Concurrency::IScheduler *)*((_DWORD *)this + 60); /*0x4034a6*/
}
}
} // namespace gamemd

// 0x4035B0
namespace gamemd {
int sub_4035B0(int a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_4035B0(int a1, int *a2)
{
  int result; // eax

  result = AudioQueue::GetNext((int *)(a1 + 248)); /*0x4035b9*/
  *a2 = result; /*0x4035be*/
  return result; /*0x4035c0*/
}
}
} // namespace gamemd

// 0x4036F0
namespace gamemd {
int sub_4036F0(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_4036F0(int a1, int a2)
{
  int *Next; // esi
  int *i; // edi

  Next = (int *)AudioQueue::GetNext((int *)(a1 + 248)); /*0x403700*/
  for ( i = Next; Next; i = Next ) /*0x403706*/
  {
    Next = (int *)AudioQueue::GetNextAlt(Next); /*0x403712*/
    if ( a2 == -1 || i[3] == a2 ) /*0x403719*/
      AudioStream::Destructor(i); /*0x40371d*/
  }
  return 0; /*0x403728*/
}
}
} // namespace gamemd

// 0x4039C0
namespace gamemd {
int sub_4039C0(int a1, char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_4039C0(int a1, char *a2)
{
  unsigned int v3; // edx
  int v4; // ebx
  unsigned int v5; // ecx
  int v6; // ecx

  v4 = Audio::Callback(); /*0x4039d0*/
  if ( *(_DWORD *)(a1 + 72) != *(_DWORD *)(a1 + 80) ) /*0x4039da*/
  {
    v5 = *(_DWORD *)(a1 + 84) + 1; /*0x4039e1*/
    *(_DWORD *)(a1 + 84) = v5; /*0x4039e2*/
    if ( v5 >= strlen(off_815E9C) ) /*0x4039f7*/
      *(_DWORD *)(a1 + 84) = 0; /*0x4039f9*/
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 72); /*0x4039ff*/
  }
  if ( *(_QWORD *)(a1 + 56) + *(_QWORD *)(a1 + 64) < __PAIR64__(v3, v4) ) /*0x403a1a*/
  {
    v6 = *(_DWORD *)(a1 + 4); /*0x403a1e*/
    *(_DWORD *)(a1 + 48) = *(_DWORD *)a1; /*0x403a21*/
    *(_DWORD *)(a1 + 52) = v6; /*0x403a24*/
    *(_DWORD *)(a1 + 56) = v4; /*0x403a27*/
    *(_DWORD *)(a1 + 60) = v3; /*0x403a2a*/
  }
  return sprintf( /*0x403a6b*/
           a2,
           stru_815EA8,
           *(_DWORD *)a1,
           *(_DWORD *)(a1 + 16),
           *(_DWORD *)(a1 + 48),
           *(_DWORD *)(a1 + 24),
           *(_DWORD *)(a1 + 76),
           off_815E9C[*(_DWORD *)(a1 + 84)]);
}
}
} // namespace gamemd

// 0x403CE0
namespace gamemd {
void sub_403CE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_403CE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x403cec*/
  MEMORY[0x87E1A0] = Math::Sqrt(v0 + v0); /*0x403cfe*/
}
}
} // namespace gamemd

// 0x403D10
namespace gamemd {
void sub_403D10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_403D10()
{
  MEMORY[0x87E280] = MEMORY[0x87E1A0] / 60.0; /*0x403d1c*/
}
}
} // namespace gamemd

// 0x403D30
namespace gamemd {
void sub_403D30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_403D30()
{
  MEMORY[0x87E268] = 1.0 / MEMORY[0x87E280]; /*0x403d3c*/
}
}
} // namespace gamemd

// 0x403D50
namespace gamemd {
void sub_403D50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_403D50()
{
  MEMORY[0x87E260] = 0.0174532925199433 * 45.0; /*0x403d5c*/
}
}
} // namespace gamemd

// 0x403D70
namespace gamemd {
void sub_403D70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_403D70()
{
  MEMORY[0x87E1A8] = 0.0174532925199433 * 60.0; /*0x403d7c*/
}
}
} // namespace gamemd

// 0x403D90
namespace gamemd {
void sub_403D90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_403D90()
{
  MEMORY[0x87E190] = 0.0174532925199433 * 90.0; /*0x403d9c*/
}
}
} // namespace gamemd

// 0x403DB0
namespace gamemd {
long long sub_403DB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_403DB0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x87E190] - MEMORY[0x87E1A8]); /*0x403dc2*/
  result = Math::RoundToInt(v0 * MEMORY[0x87E1A0] * 0.5); /*0x403dd6*/
  MEMORY[0x87E288] = result; /*0x403ddb*/
  return result; /*0x403de0*/
}
}
} // namespace gamemd

// 0x403DF0
namespace gamemd {
void sub_403DF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_403DF0()
{
  MEMORY[0x87E1B0] = Math::ArcTan((double)MEMORY[0x87E288] * 0.00390625); /*0x403e07*/
}
}
} // namespace gamemd

// 0x403E20
namespace gamemd {
void sub_403E20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_403E20()
{
  MEMORY[0x87E248] = Math::ArcTan((double)(2 * MEMORY[0x87E288]) / MEMORY[0x87E1A0]); /*0x403e42*/
}
}
} // namespace gamemd

// 0x403E50
namespace gamemd {
long long sub_403E50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_403E50()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x87E288]) + 0.5); /*0x403e6b*/
  MEMORY[0x87E27C] = result; /*0x403e70*/
  return result; /*0x403e76*/
}
}
} // namespace gamemd

// 0x403E80
namespace gamemd {
int sub_403E80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_403E80()
{
  MEMORY[0x87E198] = 0; /*0x403e82*/
  MEMORY[0x87E19A] = 0; /*0x403e88*/
  return 0; /*0x403e8e*/
}
}
} // namespace gamemd

// 0x403E90
namespace gamemd {
int sub_403E90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_403E90()
{
  MEMORY[0x87E238] = 0; /*0x403e92*/
  MEMORY[0x87E23C] = 0; /*0x403e97*/
  MEMORY[0x87E240] = 0; /*0x403e9c*/
  return 0; /*0x403ea1*/
}
}
} // namespace gamemd

// 0x403EB0
namespace gamemd {
int sub_403EB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_403EB0()
{
  MEMORY[0x87E278] = 0; /*0x403eb5*/
  MEMORY[0x87E270] = 128; /*0x403ebf*/
  MEMORY[0x87E274] = 128; /*0x403ec4*/
  return 128; /*0x403ec9*/
}
}
} // namespace gamemd

// 0x403ED0
namespace gamemd {
int sub_403ED0(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_403ED0(int a1, int a2)
{
  int v4; // ecx

  DListNode::Init(&MEMORY[0x87E180]); /*0x403edb*/
  DListNode::Init(MEMORY[0x87E250]); /*0x403ee5*/
  MEMORY[0x87E294] = a2; /*0x403eef*/
  MEMORY[0x87E29C] = a1; /*0x403ef5*/
  AudioMixer::Init(MEMORY[0x87E1B8]); /*0x403efb*/
  v4 = MEMORY[0x87E294]; /*0x403f00*/
  MEMORY[0x87E290] = 0; /*0x403f0f*/
  MEMORY[0x87E28C] = 0; /*0x403f15*/
  MEMORY[0x87E2A0] = 1; /*0x403f1b*/
  dword_816108 = 1; /*0x403f21*/
  if ( MEMORY[0x87E294] ) /*0x403f27*/
  {
    MEMORY[0x87E298] = sub_4019E0(MEMORY[0x87E294], 0x100000, 200, 0x2000); /*0x403f47*/
    MEMORY[0x87E2A8] = AllocLinkedListMemory(300, 640); /*0x403f51*/
    Debug::Log(); /*0x403f60*/
    v4 = MEMORY[0x87E294]; /*0x403f65*/
  }
  if ( !MEMORY[0x87E298] || !v4 || !MEMORY[0x87E29C] || !MEMORY[0x87E2A8] ) /*0x403f88*/
    return 0; /*0x403f96*/
  MEMORY[0x87E2A4] = 1; /*0x403f8a*/
  return 1; /*0x403f92*/
}
}
} // namespace gamemd

// 0x403FA0
namespace gamemd {
void sub_403FA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_403FA0()
{
  int v0; // ebp
  void **v1; // esi
  void **v2; // ebx
  _DWORD **v3; // edi
  void *v4; // eax
  void **v5; // edi
  _DWORD **i; // esi

  v0 = 0; /*0x403fa6*/
  if ( MEMORY[0x87E2A0] ) /*0x403fac*/
  {
    v1 = (void **)MEMORY[0x87E180]; /*0x403fb2*/
    if ( MEMORY[0x87E180] != &MEMORY[0x87E180] ) /*0x403fbe*/
    {
      do /*0x40405f*/
      {
        v2 = (void **)*v1; /*0x403fc5*/
        if ( ((_BYTE)v1[6] & 1) == 0 ) /*0x403fcc*/
        {
          Voice::DetachChannel((int)v1); /*0x403fd0*/
          if ( (int)v1[42] > 0 ) /*0x403fdb*/
          {
            v3 = (_DWORD **)(v1 + 10); /*0x403fdd*/
            do /*0x403ff9*/
            {
              RefCount::Decrement(*v3); /*0x403fe2*/
              *v3 = 0; /*0x403fe7*/
              ++v0; /*0x403ff3*/
              ++v3; /*0x403ff4*/
            }
            while ( v0 < (int)v1[42] ); /*0x403ff9*/
            v0 = 0; /*0x403ffb*/
          }
          v1[42] = 0; /*0x403ffd*/
          v1[7] = (void *)4; /*0x404003*/
          v1[78] = 0; /*0x40400a*/
          v1[158] = 0; /*0x404010*/
          v4 = v1[6]; /*0x404016*/
          LOBYTE(v4) = (unsigned __int8)v4 | 1; /*0x404019*/
          v1[6] = v4; /*0x40401b*/
        }
        LinkedList::Init((_DWORD **)v1); /*0x404020*/
        v1[78] = 0; /*0x404025*/
        if ( *((char *)v1 + 24) >= 0 ) /*0x404030*/
          PushFrontLinkedListAlt(MEMORY[0x87E2A8], (int)v1); /*0x404045*/
        else
          __3_YAXPAX_Z(v1); /*0x404033*/
        v1 = v2; /*0x404050*/
        --MEMORY[0x87E28C]; /*0x404059*/
      }
      while ( v2 != &MEMORY[0x87E180] ); /*0x40405f*/
      v1 = (void **)MEMORY[0x87E180]; /*0x404065*/
    }
    if ( MEMORY[0x87E2A0] && v1 != &MEMORY[0x87E180] ) /*0x40407a*/
    {
      do /*0x4040c3*/
      {
        v5 = (void **)*v1; /*0x40407c*/
        if ( ((_BYTE)v1[6] & 1) != 0 ) /*0x404083*/
        {
          LinkedList::Init((_DWORD **)v1); /*0x404087*/
          v1[78] = 0; /*0x40408c*/
          if ( *((char *)v1 + 24) >= 0 ) /*0x40409b*/
            PushFrontLinkedListAlt(MEMORY[0x87E2A8], (int)v1); /*0x4040b0*/
          else
            __3_YAXPAX_Z(v1); /*0x40409e*/
          --MEMORY[0x87E28C]; /*0x4040b5*/
        }
        v1 = v5; /*0x4040c1*/
      }
      while ( v5 != &MEMORY[0x87E180] ); /*0x4040c3*/
    }
  }
  for ( i = (_DWORD **)AudioQueue::GetNext(MEMORY[0x87E250]); i; i = (_DWORD **)AudioQueue::GetNext(MEMORY[0x87E250]) ) /*0x4040d5*/
  {
    LinkedList::Init(i); /*0x4040d9*/
    __3_YAXPAX_Z(i); /*0x4040df*/
  }
  if ( MEMORY[0x87E298] ) /*0x4040ff*/
  {
    sub_401B00((int *)MEMORY[0x87E298]); /*0x404101*/
    MEMORY[0x87E298] = 0; /*0x404106*/
  }
  if ( MEMORY[0x87E2A8] ) /*0x404114*/
  {
    VtableStub::Push_407510(MEMORY[0x87E2A8]); /*0x404116*/
    MEMORY[0x87E2A8] = 0; /*0x40411b*/
  }
  MEMORY[0x87E2A4] = 0; /*0x404122*/
  MEMORY[0x87E2A0] = 0; /*0x404128*/
}
}
} // namespace gamemd

// 0x4041D0
namespace gamemd {
int Audio_Process()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int Audio_Process()
{
  int result; // eax
  void **v1; // esi
  void **v2; // ebp
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  unsigned int v5; // ebx
  _DWORD *i; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // esi
  _DWORD *v11; // esi
  int v12; // eax
  char *v13; // edi
  int v14; // ebp
  int v15; // ebx
  void ***v16; // eax
  int v17; // ebx
  _DWORD *v18; // edi
  void *v19; // eax
  _DWORD *v20; // ecx
  int v21; // edi
  int v22; // ebx
  int v23; // eax
  unsigned int v24; // esi
  int v25; // eax
  _DWORD *v26; // edi
  _DWORD *v27; // edi
  _DWORD *v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // edx
  void **v31; // esi
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  void **v35; // edi
  void **v36; // ebp
  int v37; // eax
  int v38; // eax
  void **v39; // [esp+0h] [ebp-8h]
  void **v40; // [esp+0h] [ebp-8h]
  int v41; // [esp+4h] [ebp-4h]
  int v42; // [esp+4h] [ebp-4h]

  result = MEMORY[0x87E2A0]; /*0x4041d0*/
  if ( !MEMORY[0x87E2A0] ) /*0x4041da*/
    return result; /*0x4041da*/
  result = MEMORY[0x87E2B4]; /*0x4041e0*/
  if ( MEMORY[0x87E2B4] ) /*0x4041e7*/
    return result; /*0x4041e7*/
  v1 = (void **)MEMORY[0x87E180]; /*0x4041f6*/
  MEMORY[0x87E2B4] = 1; /*0x404204*/
  ++MEMORY[0x87E2AC]; /*0x40420e*/
  v2 = (void **)MEMORY[0x87E180]; /*0x404214*/
  if ( MEMORY[0x87E180] != &MEMORY[0x87E180] ) /*0x404216*/
  {
    do /*0x404349*/
    {
      v3 = v2[9]; /*0x40421c*/
      if ( v3[38] != MEMORY[0x87E2AC] ) /*0x40422b*/
      {
        DListNode::Init(v3 + 35); /*0x404233*/
        *((_DWORD *)v2[9] + 17) = 0; /*0x40423b*/
        *((_DWORD *)v2[9] + 38) = MEMORY[0x87E2AC]; /*0x40424b*/
      }
      Audio::InitChannels(v2 + 46); /*0x404257*/
      if ( v2[7] != (void *)4 ) /*0x404262*/
      {
        v4 = v2[9]; /*0x404268*/
        v5 = (unsigned int)v2[47] >> 16; /*0x404271*/
        for ( i = (_DWORD *)v4[35]; i != v4 + 35; i = (_DWORD *)*i ) /*0x404282*/
        {
          v7 = HIWORD(i[44]) - v5; /*0x4042a3*/
          if ( v7 < 0 ) /*0x4042a5*/
            v7 = v5 - HIWORD(i[44]); /*0x4042a7*/
          if ( v7 >= (int)((unsigned int)((3435973837u * (unsigned __int64)HIWORD(v4[7])) >> 32) >> 3) ) /*0x4042ad*/
          {
            if ( HIWORD(i[44]) < v5 ) /*0x4042c6*/
              break; /*0x4042c6*/
          }
          else
          {
            v8 = i[4]; /*0x4042b3*/
            if ( (v4[4] & 0x10) != 0 ) /*0x4042b6*/
            {
              if ( v8 ) /*0x4042ba*/
                break; /*0x4042ba*/
            }
            else if ( !v8 ) /*0x4042c0*/
            {
              break; /*0x4042c0*/
            }
          }
        }
        DListNode::InitEmpty(v2 + 3); /*0x4042d4*/
        InsertAfterDListNode(i, v2 + 3); /*0x4042e2*/
        v9 = v4[18]; /*0x4042ea*/
        v10 = v4[17] + 1; /*0x4042ed*/
        v4[17] = v10; /*0x4042f0*/
        if ( v9 && v10 > v9 ) /*0x4042f9*/
        {
          v11 = (_DWORD *)(v4[36] - 12); /*0x404301*/
          LinkedList::Init(v4[36]); /*0x404307*/
          if ( (v11[6] & 1) == 0 ) /*0x404310*/
          {
            Voice::DetachChannel(v11); /*0x404314*/
            Audio::ReleaseChannelRefs(v11); /*0x40431b*/
            v11[7] = 4; /*0x404320*/
            v11[78] = 0; /*0x404329*/
            v11[158] = 0; /*0x40432f*/
            v12 = v11[6]; /*0x404335*/
            LOBYTE(v12) = v12 | 1; /*0x404338*/
            v11[6] = v12; /*0x40433a*/
          }
          --v4[17]; /*0x40433d*/
        }
      }
      v2 = (void **)*v2; /*0x404340*/
    }
    while ( v2 != &MEMORY[0x87E180] ); /*0x404349*/
    v1 = (void **)MEMORY[0x87E180]; /*0x40434f*/
    if ( MEMORY[0x87E180] != &MEMORY[0x87E180] ) /*0x40435b*/
    {
      do /*0x40436f*/
      {
        UpdateVoicePlayback(v1); /*0x404362*/
        v1 = (void **)*v1; /*0x404367*/
      }
      while ( v1 != &MEMORY[0x87E180] ); /*0x40436f*/
      v1 = (void **)MEMORY[0x87E180]; /*0x404371*/
    }
  }
  v41 = 0; /*0x404377*/
  v13 = (char *)&MEMORY[0x87DE38]; /*0x40437f*/
  v14 = 7; /*0x404384*/
  do /*0x40439c*/
  {
    v15 = 10; /*0x404389*/
    do /*0x404399*/
    {
      DListNode::Init(v13); /*0x404390*/
      v13 += 12; /*0x404395*/
      --v15; /*0x404398*/
    }
    while ( v15 ); /*0x404399*/
    --v14; /*0x40439b*/
  }
  while ( v14 ); /*0x40439c*/
  ++MEMORY[0x87E2B0]; /*0x4043ab*/
  if ( v1 == &MEMORY[0x87E180] ) /*0x4043b1*/
  {
LABEL_58:
    v30 = 0x4000; /*0x40457b*/
    goto LABEL_59; /*0x40457b*/
  }
  do /*0x40455f*/
  {
    v16 = (void ***)v1[44]; /*0x4043b7*/
    v39 = (void **)*v1; /*0x4043c1*/
    if ( !v16 || v1 != v16[48] ) /*0x4043cd*/
    {
      if ( ((_BYTE)v1[6] & 1) != 0 ) /*0x4043d3*/
        goto LABEL_40; /*0x4043d3*/
      Voice::DetachChannel(v1); /*0x4043d7*/
      v17 = 0; /*0x4043e4*/
      if ( (int)v1[42] > 0 ) /*0x4043e8*/
      {
        v18 = v1 + 10; /*0x4043ea*/
        do /*0x404402*/
        {
          RefCount::Decrement(*v18); /*0x4043ef*/
          *v18 = 0; /*0x4043f4*/
          ++v17; /*0x4043fc*/
          ++v18; /*0x4043fd*/
        }
        while ( v17 < (int)v1[42] ); /*0x404402*/
      }
      v1[42] = 0; /*0x404404*/
      v1[7] = (void *)4; /*0x40440a*/
      v1[78] = 0; /*0x404411*/
      v1[158] = 0; /*0x404417*/
      v19 = v1[6]; /*0x40441d*/
      LOBYTE(v19) = (unsigned __int8)v19 | 1; /*0x404420*/
      v1[6] = v19; /*0x404422*/
    }
    if ( ((_BYTE)v1[6] & 1) != 0 ) /*0x404429*/
    {
LABEL_40:
      LinkedList::Init(v1); /*0x40442b*/
      v1[78] = 0; /*0x404432*/
      if ( *((char *)v1 + 24) >= 0 ) /*0x404441*/
        PushFrontLinkedListAlt(MEMORY[0x87E2A8], v1); /*0x404464*/
      else
        __3_YAXPAX_Z(v1); /*0x404444*/
      --MEMORY[0x87E28C]; /*0x404452*/
      goto LABEL_55; /*0x404457*/
    }
    if ( !v1[86] ) /*0x404474*/
      v41 += (unsigned int)(20 * HIWORD(*((_DWORD *)v1[9] + 7))) >> 14; /*0x404496*/
    v20 = v1[9]; /*0x40449a*/
    v21 = (int)v1[85] + v20[16]; /*0x4044ac*/
    v22 = 120 * v21 + 8904248; /*0x4044ca*/
    v23 = MEMORY[0x87E2B0]; /*0x4044d1*/
    v24 = (unsigned int)(((1075052865 * (unsigned __int64)((unsigned int)v1[47] >> 16)) >> 32) /*0x4044d6*/
                       + ((unsigned int)(((unsigned int)v1[47] >> 16)
                                       - ((1075052865 * (unsigned __int64)((unsigned int)v1[47] >> 16)) >> 32)) >> 1)) >> 10;
    if ( v20[39] != MEMORY[0x87E2B0] ) /*0x4044db*/
    {
      v20[40] = v21; /*0x404529*/
      v26 = v20 + 41; /*0x40452f*/
      v20[39] = v23; /*0x404535*/
      v20[44] = v24; /*0x40453b*/
      DListNode::InitEmpty(v20 + 41); /*0x404543*/
LABEL_53:
      v28 = v26; /*0x404548*/
      v29 = v22 + 12 * v24; /*0x40454d*/
LABEL_54:
      InsertAfterDListNode(v29, v28); /*0x404550*/
      goto LABEL_55; /*0x404550*/
    }
    v25 = v20[40]; /*0x4044dd*/
    if ( v21 > v25 ) /*0x4044e5*/
    {
      v20[40] = v21; /*0x4044e7*/
      v26 = v20 + 41; /*0x4044ed*/
      v20[44] = v24; /*0x4044f3*/
      LinkedList::Init(v20 + 41); /*0x4044fb*/
      goto LABEL_53; /*0x404500*/
    }
    if ( v21 == v25 && v24 > v20[44] ) /*0x40450a*/
    {
      v27 = v20 + 41; /*0x40450c*/
      v20[44] = v24; /*0x404512*/
      LinkedList::Init(v20 + 41); /*0x40451a*/
      v28 = v27; /*0x404522*/
      v29 = v22 + 12 * v24; /*0x404524*/
      goto LABEL_54; /*0x404527*/
    }
LABEL_55:
    v1 = v39; /*0x404555*/
  }
  while ( v39 != &MEMORY[0x87E180] ); /*0x40455f*/
  if ( v41 <= 100 ) /*0x40456c*/
    goto LABEL_58; /*0x40456c*/
  v30 = 0x190000u / v41; /*0x404577*/
LABEL_59:
  RequestBufferMixer(&MEMORY[0x87E1B8], v30); /*0x404580*/
  result = Audio::InitChannels(&MEMORY[0x87E1B8]); /*0x40458f*/
  v31 = (void **)MEMORY[0x87E180]; /*0x404594*/
  if ( MEMORY[0x87E180] == &MEMORY[0x87E180] ) /*0x4045a0*/
  {
    MEMORY[0x87E2B4] = 0; /*0x4046e6*/
  }
  else
  {
    do /*0x4046d0*/
    {
      v40 = (void **)*v31; /*0x4045aa*/
      result = (int)v31[7]; /*0x4045ae*/
      if ( result == 1 ) /*0x4045b4*/
      {
        result = (int)v31[86]; /*0x4045ba*/
        if ( !result ) /*0x4045c2*/
        {
          PrefetchAudioSamples(v31); /*0x4045ca*/
          v32 = AudioStream::SetupPlayback(v31); /*0x4045d1*/
          v31[82] = (void *)v32; /*0x4045d8*/
          if ( !v32 ) /*0x4045de*/
          {
            do /*0x40466b*/
            {
              v42 = 0; /*0x4045ed*/
              v33 = PollNextAudioQueue((char *)v31[85] + *((_DWORD *)v31[9] + 16)); /*0x4045fa*/
              v34 = v33; /*0x4045ff*/
              if ( !v33 ) /*0x404603*/
                break; /*0x404603*/
              LinkedList::Init(v33 + 164); /*0x40460b*/
              v35 = (void **)MEMORY[0x87E180]; /*0x404610*/
              if ( MEMORY[0x87E180] == &MEMORY[0x87E180] ) /*0x40461c*/
                break; /*0x40461c*/
              do /*0x404645*/
              {
                v36 = (void **)*v35; /*0x404621*/
                if ( v35[9] == (void *)v34 ) /*0x404625*/
                {
                  VocClass::Release(v35); /*0x404629*/
                  Audio::FlushChannel(v35); /*0x404630*/
                  v42 = 1; /*0x404635*/
                }
                v35 = v36; /*0x404643*/
              }
              while ( v36 != &MEMORY[0x87E180] ); /*0x404645*/
              if ( !v42 ) /*0x40464d*/
                break; /*0x40464d*/
              v40 = (void **)*v31; /*0x404651*/
              PrefetchAudioSamples(v31); /*0x404657*/
              v37 = AudioStream::SetupPlayback(v31); /*0x40465e*/
              v31[82] = (void *)v37; /*0x404665*/
            }
            while ( !v37 ); /*0x40466b*/
          }
          v38 = AudioStream::SetupPlayback(v31); /*0x404673*/
          v31[82] = (void *)v38; /*0x40467a*/
          if ( !v38 || (result = Audio::UpdatePlaybackPosition(v31)) == 0 ) /*0x40468d*/
          {
            if ( ((_BYTE)v31[6] & 1) == 0 ) /*0x404693*/
            {
              Voice::DetachChannel(v31); /*0x404697*/
              Audio::ReleaseChannelRefs(v31); /*0x40469e*/
              v31[7] = (void *)4; /*0x4046a3*/
              v31[78] = 0; /*0x4046aa*/
              v31[158] = 0; /*0x4046b0*/
              v31[6] = (void *)((unsigned int)v31[6] | 1); /*0x4046bc*/
            }
            result = Audio::FlushChannel(v31); /*0x4046c1*/
          }
        }
      }
      v31 = v40; /*0x4046c6*/
    }
    while ( v40 != &MEMORY[0x87E180] ); /*0x4046d0*/
    MEMORY[0x87E2B4] = 0; /*0x4046d6*/
  }
  return result; /*0x4046e0*/
}
}
} // namespace gamemd

// 0x404BB0
namespace gamemd {
int sub_404BB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_404BB0(int this)
{
  _DWORD *v2; // edi
  int v3; // eax
  char v4; // bl
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int *v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  _DWORD *v19; // eax
  int v20; // eax
  int v21; // edi

  v2 = *(_DWORD **)(this + 36); /*0x404bb6*/
  v3 = v2[4]; /*0x404bc5*/
  v4 = v3; /*0x404bca*/
  if ( *(_DWORD *)(this + 616) == *(_DWORD *)(this + 624) ) /*0x404bcc*/
  {
    v5 = 0; /*0x404bd2*/
    v6 = v3 & 1; /*0x404bd4*/
    if ( !v6 && *(_DWORD *)(this + 620) == 1 ) /*0x404be0*/
      return -1; /*0x404be0*/
    if ( v6 ) /*0x404be4*/
    {
      v7 = v2[19]; /*0x404be6*/
      if ( v7 ) /*0x404beb*/
      {
        if ( *(_DWORD *)(this + 620) >= v7 ) /*0x404bf3*/
          return -1; /*0x404bfc*/
      }
    }
    v9 = v2[78]; /*0x404bfd*/
    if ( v9 && ((unsigned char)this->nextArrayIndex & 8) == 0 ) /*0x404c0b*/
    {
      *(_DWORD *)(this + 488) = Random::Range(MEMORY[0x886B88], 0, v9 - 1); /*0x404c1b*/
      v5 = 1; /*0x404c21*/
    }
    v10 = v2[4]; /*0x404c26*/
    if ( (v10 & 4) != 0 ) /*0x404c2b*/
    {
      v11 = v2[78]; /*0x404c39*/
      if ( v11 < v2[77] - v2[79] ) /*0x404c43*/
      {
        v12 = (int *)(this + 4 * v5 + 488); /*0x404c45*/
        do /*0x404c61*/
        {
          *v12 = v11; /*0x404c4c*/
          ++v5; /*0x404c5a*/
          ++v12; /*0x404c5b*/
          ++v11; /*0x404c5e*/
        }
        while ( v11 < v2[77] - v2[79] ); /*0x404c61*/
      }
    }
    else
    {
      if ( (v10 & 2) != 0 ) /*0x404c67*/
      {
        if ( *(_DWORD *)(this + 620) ) /*0x404c69*/
        {
          v13 = *(_DWORD *)(this + 628); /*0x404c9c*/
        }
        else
        {
          v13 = Random::Range(MEMORY[0x886B88], v2[78], v2[77] - v2[79] - 1); /*0x404c8f*/
          *(_DWORD *)(this + 628) = v13; /*0x404c94*/
        }
      }
      else
      {
        v13 = v2[78]; /*0x404ca4*/
      }
      *(_DWORD *)(this + 4 * v5++ + 488) = v13; /*0x404caa*/
    }
    v14 = *(_DWORD *)(this + 620); /*0x404cb2*/
    *(_DWORD *)(this + 616) = v5; /*0x404cb8*/
    *(_DWORD *)(this + 624) = 0; /*0x404cbf*/
    *(_DWORD *)(this + 620) = v14 + 1; /*0x404cc9*/
  }
  if ( (v4 & 2) == 0 ) /*0x404cd2*/
    goto LABEL_34; /*0x404cd2*/
  if ( !v2[78] ) /*0x404ce0*/
  {
LABEL_29:
    v15 = 0; /*0x404d03*/
    goto LABEL_30; /*0x404d03*/
  }
  if ( ((unsigned char)this->nextArrayIndex & 8) == 0 && *(int *)(this + 624) <= 0 ) /*0x404cf0*/
  {
LABEL_34:
    v20 = *(_DWORD *)(this + 624); /*0x404d5d*/
    v21 = *(_DWORD *)(this + 4 * v20 + 488); /*0x404d63*/
    *(_DWORD *)(this + 624) = v20 + 1; /*0x404d6b*/
    return v21; /*0x404d71*/
  }
  if ( ((unsigned char)this->nextArrayIndex & 8) != 0 ) /*0x404cfa*/
    goto LABEL_29; /*0x404cfa*/
  v15 = 1; /*0x404cfc*/
LABEL_30:
  v16 = Random::Range(MEMORY[0x886B88], v15, *(_DWORD *)(this + 616) - 1); /*0x404d05*/
  v17 = *(_DWORD *)(this + 4 * v16 + 488); /*0x404d1e*/
  v18 = v16; /*0x404d2f*/
  if ( v16 < *(_DWORD *)(this + 616) - 1 ) /*0x404d31*/
  {
    v19 = (_DWORD *)(this + 4 * v16 + 488); /*0x404d33*/
    do /*0x404d47*/
    {
      ++v18; /*0x404d38*/
      *v19 = v19[1]; /*0x404d39*/
      ++v19; /*0x404d41*/
    }
    while ( v18 < *(_DWORD *)(this + 616) - 1 ); /*0x404d47*/
  }
  --*(_DWORD *)(this + 616); /*0x404d50*/
  return v17; /*0x404bf5*/
}
}
} // namespace gamemd

// 0x404E20
namespace gamemd {
int sub_404E20(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_404E20(int a1)
{
  int v1; // ebp
  int *v2; // ebx
  int v3; // edi
  int *v4; // esi
  int Next; // eax

  v1 = 0; /*0x404e23*/
  v2 = (int *)&MEMORY[0x87DE38]; /*0x404e2d*/
  if ( a1 > 0 ) /*0x404e32*/
  {
    while ( 2 ) /*0x404e34*/
    {
      v3 = 0; /*0x404e34*/
      v4 = v2; /*0x404e36*/
      do /*0x404e4a*/
      {
        Next = AudioQueue::GetNext(v4); /*0x404e3a*/
        if ( Next ) /*0x404e41*/
          return Next - 164; /*0x404e63*/
        ++v3; /*0x404e43*/
        v4 += 3; /*0x404e44*/
      }
      while ( v3 < 10 ); /*0x404e4a*/
      ++v1; /*0x404e50*/
      v2 += 30; /*0x404e51*/
      if ( v1 < a1 ) /*0x404e56*/
        continue; /*0x404e56*/
      break;
    }
  }
  return 0; /*0x404e58*/
}
}
} // namespace gamemd

// 0x405130
namespace gamemd {
int sub_405130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_405130(_DWORD *this)
{
  if ( MEMORY[0x87E2A0] ) /*0x405137*/
    return *(this + 20); /*0x40513c*/
  else
    return 0; /*0x405139*/
}
}
} // namespace gamemd

// 0x405140
namespace gamemd {
double sub_405140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __thiscall sub_405140(float *this)
{
  if ( MEMORY[0x87E2A0] ) /*0x405147*/
    return *(this + 21); /*0x405150*/
  else
    return 0.0; /*0x405149*/
}
}
} // namespace gamemd

// 0x405160
namespace gamemd {
int sub_405160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_405160(_DWORD *this)
{
  if ( MEMORY[0x87E2A0] ) /*0x405167*/
    return *(this + 5); /*0x40516c*/
  else
    return 0; /*0x405169*/
}
}
} // namespace gamemd

// 0x4052E0
namespace gamemd {
int sub_4052E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4052E0(_DWORD *this)
{
  int result; // eax

  result = *(this + 6); /*0x4052e0*/
  LOBYTE(result) = result | 8; /*0x4052e3*/
  *(this + 6) = result; /*0x4052e5*/
  return result; /*0x4052e8*/
}
}
} // namespace gamemd

// 0x4053E0
namespace gamemd {
int sub_4053E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4053E0(int this)
{
  __int64 v2; // rax

  LODWORD(v2) = *(_DWORD *)(this + 344); /*0x4053e3*/
  if ( !(_DWORD)v2 ) /*0x4053eb*/
  {
    LODWORD(v2) = this->referenceCount; /*0x4053ed*/
    if ( (_DWORD)v2 == 2 ) /*0x4053f3*/
    {
      LODWORD(v2) = Audio::Callback(); /*0x4053f6*/
      *(_QWORD *)(this + 320) -= v2; /*0x40540b*/
    }
  }
  ++*(_DWORD *)(this + 344); /*0x40541f*/
  return v2; /*0x405425*/
}
}
} // namespace gamemd

// 0x405430
namespace gamemd {
int sub_405430()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_405430(int this)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rax

  LODWORD(v2) = *(_DWORD *)(this + 344); /*0x405433*/
  if ( (_DWORD)v2 ) /*0x40543b*/
  {
    v3 = *(_DWORD *)(this + 344) - 1; /*0x405443*/
    *(_DWORD *)(this + 344) = v3; /*0x405446*/
    if ( v3 < 0 ) /*0x40544c*/
      *(_DWORD *)(this + 344) = 0; /*0x40544e*/
    LODWORD(v2) = *(_DWORD *)(this + 344); /*0x405458*/
    if ( !(_DWORD)v2 ) /*0x405460*/
    {
      LODWORD(v2) = this->referenceCount; /*0x405462*/
      if ( (_DWORD)v2 == 2 ) /*0x405468*/
      {
        LODWORD(v4) = Audio::Callback(); /*0x40546b*/
        v2 = *(_QWORD *)(this + 320) + v4; /*0x40547e*/
        *(_QWORD *)(this + 320) = v2; /*0x405480*/
      }
    }
  }
  return v2; /*0x40548d*/
}
}
} // namespace gamemd

// 0x4059F0
namespace gamemd {
int sub_4059F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4059F0(_DWORD *this)
{
  *(_DWORD *)(*(this + 48) + 28) = 4; /*0x4059f6*/
  return 0; /*0x4059ff*/
}
}
} // namespace gamemd

// 0x405A00
namespace gamemd {
int sub_405A00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_405A00(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // eax
  unsigned int v5; // edi
  __int64 v6; // rax

  v1 = (_DWORD *)*(this + 48); /*0x405a01*/
  v2 = v1[6]; /*0x405a07*/
  LOBYTE(v2) = v2 & 0xFD; /*0x405a0a*/
  v1[6] = v2; /*0x405a0c*/
  v3 = 4; /*0x405a0f*/
  if ( v1[7] == 4 ) /*0x405a19*/
    return 0; /*0x405a1b*/
  if ( v1[82] || v1[154] || v1[79] ) /*0x405a34*/
    v3 = 1; /*0x405a46*/
  else
    v1[79] = 0; /*0x405a3e*/
  if ( v1[79] ) /*0x405a4b*/
  {
    v5 = v1[79]; /*0x405a56*/
    v1[8] = v3; /*0x405a5c*/
    if ( v1[86] ) /*0x405a5f*/
    {
      v1[80] = v5; /*0x405a69*/
      v1[81] = 0; /*0x405a6f*/
    }
    else
    {
      LODWORD(v6) = Audio::Callback(); /*0x405a88*/
      *((_QWORD *)v1 + 40) = v5 + v6; /*0x405a91*/
    }
    v1[7] = 2; /*0x405a75*/
    v1[79] = 0; /*0x405a7c*/
    return 0; /*0x405a84*/
  }
  else
  {
    v1[7] = v3; /*0x405ab0*/
    return 0; /*0x405ab4*/
  }
}
}
} // namespace gamemd

// 0x405AC0
namespace gamemd {
int sub_405AC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_405AC0(_DWORD *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // ebx
  int v5; // eax
  unsigned int v6; // eax

  v2 = (_DWORD *)*(this + 48); /*0x405ac5*/
  v3 = (_DWORD *)AudioStream::SelectRandom((int)v2); /*0x405ad2*/
  if ( *(_DWORD *)(v2[9] + 92) < 0x21u ) /*0x405adb*/
    goto LABEL_2; /*0x405adb*/
  BindChannelAudioStream(this, 0); /*0x405af0*/
  v5 = v2[9]; /*0x405af5*/
  if ( (*(_BYTE *)(v5 + 16) & 0x88) == 0 || v3 || v2[154] ) /*0x405b02*/
  {
    v6 = Random::Range(MEMORY[0x886B88], *(_DWORD *)(v5 + 88), *(_DWORD *)(v5 + 92)); /*0x405b19*/
    if ( v6 < 0x21 ) /*0x405b21*/
    {
LABEL_2:
      BindChannelAudioStream(this, v3); /*0x405add*/
      return 0; /*0x405aeb*/
    }
    v2[79] = v6; /*0x405b32*/
    v2[82] = v3; /*0x405b38*/
  }
  return 0; /*0x405ae8*/
}
}
} // namespace gamemd

// 0x405B50
namespace gamemd {
unsigned int * sub_405B50(int a1, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall sub_405B50(int a1, char a2)
{
  _DWORD *v3; // esi
  int v5; // eax

  v3 = 0; /*0x405b5b*/
  if ( MEMORY[0x87E29C] ) /*0x405b61*/
  {
    v5 = AudioQueue::FindBestChannel(MEMORY[0x87E29C], 1); /*0x405b68*/
    v3 = (_DWORD *)v5; /*0x405b6d*/
    if ( v5 ) /*0x405b71*/
    {
      if ( (*(_BYTE *)(v5 + 164) & 0x15) != 0 && *(_DWORD *)(v5 + 160) > a1 ) /*0x405b82*/
        return 0; /*0x405b89*/
      Voice::Stop(v5); /*0x405b8c*/
      v3[37] = MEMORY[0x87E748]; /*0x405b96*/
      v3[39] = MEMORY[0x87E758]; /*0x405ba5*/
      v3[40] = a1; /*0x405bab*/
      if ( (a2 & 1) != 0 ) /*0x405bb1*/
      {
        v3[42] = -1; /*0x405bb3*/
        return v3; /*0x405bc2*/
      }
      v3[42] = 0; /*0x405bc3*/
    }
  }
  return v3; /*0x405b84*/
}
}
} // namespace gamemd

// 0x405E80
namespace gamemd {
unsigned int * sub_405E80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_405E80(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // ecx
  int v5; // ebp
  _DWORD **v6; // edi

  result = this; /*0x405e81*/
  if ( MEMORY[0x87E2A0] ) /*0x405e94*/
  {
    if ( (int *)*(this + 3) == &MEMORY[0x87E294] ) /*0x405ea1*/
    {
      v2 = *this; /*0x405ea7*/
      if ( *this ) /*0x405ea7*/
      {
        v3 = *(_DWORD *)(v2 + 36); /*0x405eb1*/
        if ( result[2] != v3 || result[1] != *(_DWORD *)(v2 + 312) ) /*0x405eca*/
        {
LABEL_19:
          *result = 0; /*0x405fc1*/
          goto LABEL_20; /*0x405fc1*/
        }
        if ( (*(_BYTE *)(v3 + 16) & 1) != 0 && !*(_DWORD *)(v3 + 76) ) /*0x405eda*/
        {
          if ( (*(_BYTE *)(v2 + 24) & 1) == 0 ) /*0x405ee7*/
          {
            v4 = *(_DWORD *)(v2 + 176); /*0x405eed*/
            if ( v4 && v2 == *(_DWORD *)(v4 + 192) ) /*0x405efd*/
            {
              if ( (*(_BYTE *)(v2 + 24) & 2) != 0 ) /*0x405f03*/
                Voice::Stop(v4); /*0x405f05*/
              AudioStream::ReleaseChannel(*(_DWORD **)(v2 + 176)); /*0x405f10*/
              *(_DWORD *)(*(_DWORD *)(v2 + 176) + 192) = 0; /*0x405f1b*/
              *(_DWORD *)(*(_DWORD *)(v2 + 176) + 188) = 0; /*0x405f27*/
              *(_DWORD *)(*(_DWORD *)(v2 + 176) + 180) = 0; /*0x405f33*/
              *(_DWORD *)(*(_DWORD *)(v2 + 176) + 184) = 0; /*0x405f3f*/
              *(_DWORD *)(*(_DWORD *)(v2 + 176) + 144) = 0; /*0x405f4b*/
              *(_DWORD *)(*(_DWORD *)(v2 + 176) + 152) = 0; /*0x405f57*/
              *(_DWORD *)(*(_DWORD *)(v2 + 176) + 156) = 0; /*0x405f63*/
              result = this; /*0x405f69*/
              *(_DWORD *)(v2 + 176) = 0; /*0x405f6d*/
            }
            v5 = 0; /*0x405f7a*/
            if ( *(int *)(v2 + 168) > 0 ) /*0x405f7e*/
            {
              v6 = (_DWORD **)(v2 + 40); /*0x405f80*/
              do /*0x405f98*/
              {
                RefCount::Decrement(*v6); /*0x405f85*/
                *v6 = 0; /*0x405f8a*/
                ++v5; /*0x405f92*/
                ++v6; /*0x405f93*/
              }
              while ( v5 < *(_DWORD *)(v2 + 168) ); /*0x405f98*/
              result = this; /*0x405f9a*/
            }
            *(_DWORD *)(v2 + 168) = 0; /*0x405f9e*/
            *(_DWORD *)(v2 + 28) = 4; /*0x405fa4*/
            *(_DWORD *)(v2 + 312) = 0; /*0x405fab*/
            *(_DWORD *)(v2 + 632) = 0; /*0x405fb1*/
            *(_DWORD *)(v2 + 24) |= 1u; /*0x405fbd*/
          }
          goto LABEL_19; /*0x405fbd*/
        }
      }
    }
  }
LABEL_20:
  result[2] = 0; /*0x405fc3*/
  return result; /*0x405fc3*/
}
}
} // namespace gamemd

// 0x4060F0
namespace gamemd {
void SetAudioSource(AudioMixer * aP0, unsigned int * a1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall SetAudioSource(AudioMixer *aP0, _DWORD *a1, int a3)
{
  if ( (char *)aP0->AudioMixer_field_0C == &stru_87C374.__pad_14B0[2672] ) /*0x4060f7*/
  {
    aP0->AudioMixer_field_00 = (int)a1; /*0x4060fd*/
    aP0->AudioMixer_field_08 = a3; /*0x406101*/
    if ( a1 ) /*0x406104*/
    {
      aP0->AudioMixer_field_04 = a1[78]; /*0x40610d*/
      if ( !a3 ) /*0x406113*/
        aP0->AudioMixer_field_08 = a1[9]; /*0x406118*/
      a1[158] = aP0; /*0x40611b*/
    }
  }
}
}
} // namespace gamemd

// 0x4062C0
namespace gamemd {
int sub_4062C0(unsigned int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4062C0(_DWORD *this, unsigned int a2, int a3)
{
  SetRateMixerSample(this + 46, 0x4000, a2, a3); /*0x4062da*/
  SetRateMixerSample(this + 56, 0x4000, a2, a3); /*0x4062ec*/
  return SetRateMixerSample(this + 66, 0x4000, a2, a3); /*0x406303*/
}
}
} // namespace gamemd

// 0x406310
namespace gamemd {
int sub_406310()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_406310(_DWORD *this)
{
  return *(this + 9); /*0x406313*/
}
}
} // namespace gamemd

// 0x4064A0
namespace gamemd {
int AddSampleVocClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AddSampleVocClass(AbstractTypeClass *this)
{
  _BYTE *v1; // edx
  _BYTE *v3; // esi
  unsigned int v5; // eax

  v3 = v1; /*0x4064a4*/
  if ( *((_DWORD *)this + 77) == 32 ) /*0x4064ad*/
    return 0; /*0x4064b3*/
  if ( MEMORY[0x87E2A0] && MEMORY[0x87E294] ) /*0x4064c5*/
  {
    while ( *v3 == 36 || *v3 == 35 ) /*0x4064cf*/
      ++v3; /*0x4064d1*/
    v5 = sub_4015C0(MEMORY[0x87E294], v3); /*0x4064d6*/
    if ( v5 != -1 ) /*0x4064de*/
    {
      *((_DWORD *)this + (*((_DWORD *)this + 77))++ + 45) = v5; /*0x4064e6*/
      return 1; /*0x406501*/
    }
    Debug::Log(); /*0x406508*/
    *(_DWORD *)&this->__pad_0[12] = 0; /*0x406510*/
  }
  return 1; /*0x4064af*/
}
}
} // namespace gamemd

// 0x406520
namespace gamemd {
void sub_406520()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_406520(AbstractTypeClass *this)
{
  int v1; // edx

  *((_DWORD *)this + 78) = v1; /*0x406520*/
}
}
} // namespace gamemd

// 0x406530
namespace gamemd {
void sub_406530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_406530(AbstractTypeClass *this)
{
  int v1; // edx

  *((_DWORD *)this + 79) = v1; /*0x406530*/
}
}
} // namespace gamemd

// 0x406540
namespace gamemd {
void sub_406540()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_406540(AbstractTypeClass *this)
{
  int v1; // edx

  *(_DWORD *)&this->UINameLabel[3] = v1; /*0x406540*/
}
}
} // namespace gamemd

// 0x406550
namespace gamemd {
int sub_406550()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_406550(AbstractTypeClass *this)
{
  int v1; // edx
  int *p_nextArrayIndex; // esi

  p_nextArrayIndex = &this->nextArrayIndex; /*0x406551*/
  EndBufferMixer(&this->nextArrayIndex, v1); /*0x406556*/
  return AudioMixer::PlaySample(p_nextArrayIndex); /*0x40655d*/
}
}
} // namespace gamemd

// 0x406570
namespace gamemd {
int sub_406570()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_406570(AbstractTypeClass *this)
{
  int v1; // edx
  int result; // eax

  this->uniqueId = v1; /*0x406573*/
  result = 1; /*0x406576*/
  if ( (v1 & 0x20) != 0 ) /*0x40657b*/
  {
    if ( !*((_DWORD *)this + 78) ) /*0x40657e*/
      *((_DWORD *)this + 78) = 1; /*0x406589*/
  }
  else
  {
    *((_DWORD *)this + 78) = 0; /*0x406591*/
  }
  if ( (v1 & 0x40) != 0 ) /*0x40659e*/
  {
    if ( !*((_DWORD *)this + 79) ) /*0x4065a0*/
      *((_DWORD *)this + 79) = 1; /*0x4065aa*/
  }
  else
  {
    *((_DWORD *)this + 79) = 0; /*0x4065b1*/
  }
  return result; /*0x4065b0*/
}
}
} // namespace gamemd

// 0x4065C0
namespace gamemd {
void sub_4065C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_4065C0(AbstractTypeClass *this)
{
  int v1; // edx

  this->abstractFlags = v1; /*0x4065c0*/
}
}
} // namespace gamemd

// 0x4065D0
namespace gamemd {
void sub_4065D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_4065D0(AbstractTypeClass *this)
{
  int v1; // edx

  *(_DWORD *)&this->UINameLabel[11] = v1; /*0x4065d0*/
}
}
} // namespace gamemd

// 0x4065E0
namespace gamemd {
void sub_4065E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_4065E0(AbstractTypeClass *this)
{
  int v1; // edx

  *(_DWORD *)&this->UINameLabel[19] = v1; /*0x4065e0*/
}
}
} // namespace gamemd

// 0x4065F0
namespace gamemd {
int sub_4065F0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4065F0(AbstractTypeClass *this, int a2)
{
  *(_DWORD *)&this->UINameLabel[23] = a2; /*0x4065f4*/
  return a2; /*0x4065f7*/
}
}
} // namespace gamemd

// 0x406600
namespace gamemd {
int sub_406600()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_406600(AbstractTypeClass *this)
{
  int v1; // edx
  int v3; // [esp+4h] [ebp+4h]

  *(_DWORD *)&this->UINameLabel[27] = v1; /*0x406604*/
  *(_DWORD *)&this->UINameLabel[31] = v3; /*0x406607*/
  return v3; /*0x40660a*/
}
}
} // namespace gamemd

// 0x406610
namespace gamemd {
int sub_406610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_406610(AbstractTypeClass *this)
{
  void *v1; // edx
  int v3; // [esp+4h] [ebp+4h]

  this->UIName = v1; /*0x406614*/
  *(_DWORD *)this->Name = v3; /*0x406617*/
  return v3; /*0x40661a*/
}
}
} // namespace gamemd

// 0x406620
namespace gamemd {
int sub_406620()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_406620(AbstractTypeClass *this)
{
  int v1; // edx
  int result; // eax

  if ( v1 <= 100 ) /*0x406623*/
  {
    if ( v1 >= 0 ) /*0x406630*/
    {
      *(_DWORD *)&this->Name[4] = v1; /*0x406638*/
    }
    else
    {
      *(_DWORD *)&this->Name[4] = 0; /*0x406634*/
      return 0; /*0x406632*/
    }
  }
  else
  {
    *(_DWORD *)&this->Name[4] = 100; /*0x40662a*/
    return 100; /*0x406625*/
  }
  return result; /*0x40662d*/
}
}
} // namespace gamemd

// 0x406640
namespace gamemd {
void sub_406640()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_406640(AbstractTypeClass *this)
{
  int v1; // edx

  *(_DWORD *)&this->UINameLabel[15] = v1; /*0x406640*/
}
}
} // namespace gamemd

// 0x406670
namespace gamemd {
int * sub_406670(void * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__fastcall sub_406670(void *a1, int a2)
{
  int *result; // eax
  int *v5; // esi
  int *v6; // edi
  __int64 v7; // rax

  result = *(int **)&stru_87C374.__pad_14B0[2684]; /*0x406670*/
  if ( *(_DWORD *)&stru_87C374.__pad_14B0[2684] ) /*0x40667e*/
  {
    result = (int *)AudioQueue::GetNext((int *)&stru_87C374.__pad_14B0[2604]); /*0x406689*/
    v5 = result; /*0x40668e*/
    if ( result ) /*0x406692*/
    {
      while ( 1 ) /*0x40669d*/
      {
        result = (int *)_strcmpi(a1, v5 + 27); /*0x40669d*/
        if ( !result ) /*0x4066a7*/
          break; /*0x4066a7*/
        result = (int *)AudioQueue::GetNextAlt(v5); /*0x4066ab*/
        v5 = result; /*0x4066b0*/
        if ( !result ) /*0x4066b4*/
          return result; /*0x4066b4*/
      }
      if ( v5 ) /*0x4066bc*/
      {
        result = AudioPool::ProcessQueue(v5); /*0x4066c0*/
        v6 = result; /*0x4066c5*/
        if ( result ) /*0x4066c9*/
        {
          v7 = ((__int64)a2 << 14) / 256; /*0x4066e5*/
          if ( (unsigned int)v7 > 0x4000 ) /*0x4066ef*/
            LODWORD(v7) = 0x4000; /*0x4066f1*/
          EndBufferMixer(v6 + 46, (unsigned int)(v7 * HIWORD(*(_DWORD *)(v6[9] + 28))) >> 14); /*0x406715*/
          return (int *)AudioMixer::PlaySample(v6 + 46); /*0x40671c*/
        }
      }
    }
  }
  return result; /*0x4066b6*/
}
}
} // namespace gamemd

// 0x406730
namespace gamemd {
void sub_406730()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_406730()
{
  dword_816108 = 0; /*0x406730*/
}
}
} // namespace gamemd

// 0x406740
namespace gamemd {
void __setargv()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __setargv()
{
  dword_816108 = 1; /*0x406740*/
}
}
} // namespace gamemd

// 0x406750
namespace gamemd {
int sub_406750()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_406750()
{
  return dword_816108; /*0x406755*/
}
}
} // namespace gamemd

// 0x406760
namespace gamemd {
void * sub_406760(void (__thiscall *this)(char *) a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall sub_406760(void (__thiscall *this)(char *))
{
  void *result; // eax
  char Buffer[200]; // [esp+4h] [ebp-C8h] BYREF

  result = MEMORY[0x87E298]; /*0x406760*/
  if ( MEMORY[0x87E298] ) /*0x406770*/
  {
    sprintf(Buffer, MEMORY[0x81624C], MEMORY[0x87E28C], MEMORY[0x87E290]); /*0x406789*/
    this(Buffer); /*0x406795*/
    sprintf(Buffer, stru_81622C, MEMORY[0xB1D3A8], MEMORY[0xB1D3AC]); /*0x4067ae*/
    return (void *)((int (__thiscall *)(char *))this)(Buffer); /*0x4067ba*/
  }
  return result; /*0x4067bc*/
}
}
} // namespace gamemd

// 0x4067D0
namespace gamemd {
BOOL sub_4067D0(char * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __fastcall sub_4067D0(char *a1, _DWORD *a2)
{
  const void **v4; // esi
  const void *v5; // eax

  v4 = (const void **)dword_816018; /*0x4067de*/
  if ( dword_816018[0] ) /*0x4067e3*/
  {
    do /*0x4067fd*/
    {
      if ( !_strcmpi(a1, *v4) ) /*0x4067e9*/
        break; /*0x4067f3*/
      v5 = v4[2]; /*0x4067f5*/
      v4 += 2; /*0x4067f8*/
    }
    while ( v5 ); /*0x4067fd*/
  }
  if ( a2 ) /*0x406801*/
    *a2 = v4[1]; /*0x406806*/
  return *v4 != 0; /*0x40680e*/
}
}
} // namespace gamemd

// 0x406820
namespace gamemd {
BOOL sub_406820(unsigned int * a1, char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __fastcall sub_406820(_DWORD *a1, char *a2)
{
  const void **v4; // esi
  _UNKNOWN **v5; // eax

  v4 = (const void **)&off_8160C0; /*0x40682e*/
  if ( off_8160C0 ) /*0x406833*/
  {
    do /*0x40684d*/
    {
      if ( !_strcmpi(a2, *v4) ) /*0x406839*/
        break; /*0x406843*/
      v5 = (_UNKNOWN **)v4[2]; /*0x406845*/
      v4 += 2; /*0x406848*/
    }
    while ( v5 ); /*0x40684d*/
  }
  if ( a1 ) /*0x406851*/
    *a1 |= (unsigned int)v4[1]; /*0x40685a*/
  return *v4 != 0; /*0x406862*/
}
}
} // namespace gamemd

// 0x406920
namespace gamemd {
void sub_406920()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_406920()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40692c*/
  MEMORY[0x87E448] = Math::Sqrt(v0 + v0); /*0x40693e*/
}
}
} // namespace gamemd

// 0x406950
namespace gamemd {
void sub_406950()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_406950()
{
  MEMORY[0x87E698] = MEMORY[0x87E448] / 60.0; /*0x40695c*/
}
}
} // namespace gamemd

// 0x406970
namespace gamemd {
void sub_406970()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_406970()
{
  MEMORY[0x87E680] = 1.0 / MEMORY[0x87E698]; /*0x40697c*/
}
}
} // namespace gamemd

// 0x406990
namespace gamemd {
void sub_406990()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_406990()
{
  MEMORY[0x87E678] = 0.0174532925199433 * 45.0; /*0x40699c*/
}
}
} // namespace gamemd

// 0x4069B0
namespace gamemd {
void sub_4069B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4069B0()
{
  MEMORY[0x87E4D0] = 0.0174532925199433 * 60.0; /*0x4069bc*/
}
}
} // namespace gamemd

// 0x4069D0
namespace gamemd {
void sub_4069D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4069D0()
{
  MEMORY[0x87E2B8] = 0.0174532925199433 * 90.0; /*0x4069dc*/
}
}
} // namespace gamemd

// 0x4069F0
namespace gamemd {
long long sub_4069F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4069F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x87E2B8] - MEMORY[0x87E4D0]); /*0x406a02*/
  result = Math::RoundToInt(v0 * MEMORY[0x87E448] * 0.5); /*0x406a16*/
  MEMORY[0x87E720] = result; /*0x406a1b*/
  return result; /*0x406a20*/
}
}
} // namespace gamemd

// 0x406A30
namespace gamemd {
void sub_406A30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_406A30()
{
  MEMORY[0x87E4D8] = Math::ArcTan((double)MEMORY[0x87E720] * 0.00390625); /*0x406a47*/
}
}
} // namespace gamemd

// 0x406A60
namespace gamemd {
void sub_406A60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_406A60()
{
  MEMORY[0x87E570] = Math::ArcTan((double)(2 * MEMORY[0x87E720]) / MEMORY[0x87E448]); /*0x406a82*/
}
}
} // namespace gamemd

// 0x406A90
namespace gamemd {
long long sub_406A90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_406A90()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x87E720]) + 0.5); /*0x406aab*/
  MEMORY[0x87E694] = result; /*0x406ab0*/
  return result; /*0x406ab6*/
}
}
} // namespace gamemd

// 0x406AC0
namespace gamemd {
int sub_406AC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_406AC0()
{
  MEMORY[0x87E440] = 0; /*0x406ac2*/
  MEMORY[0x87E442] = 0; /*0x406ac8*/
  return 0; /*0x406ace*/
}
}
} // namespace gamemd

// 0x406AD0
namespace gamemd {
int sub_406AD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_406AD0()
{
  MEMORY[0x87E560] = 0; /*0x406ad2*/
  MEMORY[0x87E564] = 0; /*0x406ad7*/
  MEMORY[0x87E568] = 0; /*0x406adc*/
  return 0; /*0x406ae1*/
}
}
} // namespace gamemd

// 0x406AF0
namespace gamemd {
int sub_406AF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_406AF0()
{
  MEMORY[0x87E690] = 0; /*0x406af5*/
  MEMORY[0x87E688] = 128; /*0x406aff*/
  MEMORY[0x87E68C] = 128; /*0x406b04*/
  return 128; /*0x406b09*/
}
}
} // namespace gamemd

// 0x406B10
namespace gamemd {
int InitializeAudioSubsystem()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall InitializeAudioSubsystem(void *this)
{
  int *v2; // eax
  _DWORD *v3; // eax
  char v4; // bl
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD v8[8]; // [esp+8h] [ebp-8Ch] BYREF
  _DWORD v9[22]; // [esp+28h] [ebp-6Ch] BYREF
  _BYTE v10[12]; // [esp+80h] [ebp-14h] BYREF
  int v11; // [esp+8Ch] [ebp-8h]

  sub_409360(); /*0x406b1a*/
  AudioMixer::Init(MEMORY[0x87E2C0]); /*0x406b24*/
  MEMORY[0x87E73C] = (int)MEMORY[0x87E2C0]; /*0x406b2e*/
  AudioMixer::Init(MEMORY[0x87E4E0]); /*0x406b38*/
  MEMORY[0x87E744] = (int)MEMORY[0x87E4E0]; /*0x406b42*/
  AudioMixer::Init(MEMORY[0x87E578]); /*0x406b4c*/
  MEMORY[0x87E740] = (int)MEMORY[0x87E578]; /*0x406b56*/
  AudioMixer::Init(MEMORY[0x87E450]); /*0x406b60*/
  MEMORY[0x87E748] = (int)MEMORY[0x87E450]; /*0x406b6a*/
  AudioMixer::Init(MEMORY[0x87E340]); /*0x406b74*/
  MEMORY[0x87E74C] = (int)MEMORY[0x87E340]; /*0x406b7e*/
  AudioMixer::Init(MEMORY[0x87E6A0]); /*0x406b88*/
  MEMORY[0x87E754] = (int)MEMORY[0x87E6A0]; /*0x406b92*/
  AudioMixer::Init(MEMORY[0x87E5F8]); /*0x406b9c*/
  MEMORY[0x87E750] = (int)MEMORY[0x87E5F8]; /*0x406ba6*/
  AudioMixer::Init(MEMORY[0x87E3C0]); /*0x406bb0*/
  MEMORY[0x87E758] = (int)MEMORY[0x87E3C0]; /*0x406bb7*/
  if ( this ) /*0x406bc3*/
  {
    sub_402940(); /*0x406bc9*/
    AudioQueue::CreateNode(off_816514); /*0x406bd4*/
    Struct::ZeroInit32(v8); /*0x406bdd*/
    v8[2] = 22050; /*0x406beb*/
    v8[1] = 0; /*0x406bf3*/
    v8[3] = 2; /*0x406bf7*/
    v8[4] = 2; /*0x406bfb*/
    v8[0] = 4; /*0x406bff*/
    sub_4085B0(v8); /*0x406c07*/
    v2 = CreateAudioChannel(-1, v8); /*0x406c13*/
    MEMORY[0x87E728] = v2; /*0x406c1a*/
    if ( !v2 || AudioQueue::PreallocateChannels(v2, 16) != 16 ) /*0x406c34*/
    {
LABEL_11:
      this = 0; /*0x406cf6*/
      goto LABEL_12; /*0x406cf6*/
    }
    MEMORY[0x87E73C] = (int)MEMORY[0x87E728] + 104; /*0x406c4c*/
    v3 = CCFileClass::Construct(v9, MEMORY[0x816280]); /*0x406c51*/
    v4 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v3 + 20))(v3, 0); /*0x406c65*/
    v9[0] = &CCFileClass::`vftable'; /*0x406c67*/
    v11 = 0; /*0x406c6f*/
    Vector::Clear((int)v10); /*0x406c76*/
    v9[0] = &off_7E1668; /*0x406c7f*/
    BufferIOFileClass::Dtor(v9); /*0x406c87*/
    if ( v4 ) /*0x406c91*/
    {
      v5 = __2_YAPAXI_Z(0x28u); /*0x406c93*/
      if ( v5 ) /*0x406c9d*/
      {
        MEMORY[0x87E734] = (int)MixFileClass::FromFile(v5, MEMORY[0x816280], (int)&MEMORY[0x886980]); /*0x406cb0*/
        goto LABEL_10; /*0x406cb5*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(0x28u); /*0x406cb7*/
      if ( v6 ) /*0x406cc1*/
      {
        MEMORY[0x87E734] = (int)MixFileClass::FromFile(v6, MEMORY[0x816274], (int)&MEMORY[0x886980]); /*0x406cd4*/
        goto LABEL_10; /*0x406cd9*/
      }
    }
    MEMORY[0x87E734] = 0; /*0x406cdb*/
LABEL_10:
    MEMORY[0x87E724] = (void *)LoadAudioFile(MEMORY[0x81626C], 0); /*0x406ce1*/
    if ( MEMORY[0x87E724] ) /*0x406cf4*/
      goto LABEL_12; /*0x406cf4*/
    goto LABEL_11; /*0x406cf4*/
  }
LABEL_12:
  sub_407550(); /*0x406cf8*/
  if ( !sub_403ED0(MEMORY[0x87E728], MEMORY[0x87E724]) ) /*0x406d09*/
    this = 0; /*0x406d12*/
  Audio_Init_752290(); /*0x406d14*/
  Audio_Init_752AD0(); /*0x406d19*/
  MEMORY[0x87E72C] = (int)this; /*0x406d1e*/
  return 1; /*0x406d29*/
}
}
} // namespace gamemd

// 0x406DE0
namespace gamemd {
BOOL sub_406DE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL sub_406DE0()
{
  int *AudioChannel; // eax
  _DWORD v2[8]; // [esp+0h] [ebp-20h] BYREF

  AudioQueue::CreateNode((int)off_816514); /*0x406de9*/
  Struct::ZeroInit32(v2); /*0x406df2*/
  v2[2] = 22050; /*0x406e00*/
  v2[1] = 0; /*0x406e08*/
  v2[3] = 2; /*0x406e10*/
  v2[4] = 2; /*0x406e14*/
  v2[0] = 4; /*0x406e18*/
  sub_4085B0(v2); /*0x406e20*/
  AudioChannel = CreateAudioChannel(-1, v2); /*0x406e2c*/
  MEMORY[0x87E728] = AudioChannel; /*0x406e33*/
  return AudioChannel && AudioQueue::PreallocateChannels(AudioChannel, 16) == 16; /*0x406e50*/
}
}
} // namespace gamemd

// 0x406EA0
namespace gamemd {
int sub_406EA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_406EA0()
{
  if ( MEMORY[0x87E728] ) /*0x406ea8*/
    AudioQueue::DeactivateAllMatching((int)MEMORY[0x87E728], 1); /*0x406eaf*/
  AudioStream::UpdateTimers(); /*0x406eb4*/
  return sub_751040();
}
}
} // namespace gamemd

// 0x406EC0
namespace gamemd {
int sub_406EC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_406EC0()
{
  int i; // esi
  int result; // eax

  sub_751080(); /*0x406ec0*/
  result = AudioStream::UpdateCountdowners(); /*0x406ec5*/
  if ( MEMORY[0x87E728] ) /*0x406ed2*/
  {
    result = AudioQueue::GetNext((int *)MEMORY[0x87E728] + 62); /*0x4037ca*/
    for ( i = result; result; i = result ) /*0x4037d3*/
    {
      if ( (*(_BYTE *)(i + 164) & 4) != 0 && *(_DWORD *)(i + 12) == 1 ) /*0x4037e6*/
        result = AudioChannel::ActivatePlay((_DWORD *)i); /*0x4037ea*/
      if ( !i ) /*0x4037f1*/
        break; /*0x4037f1*/
      result = AudioQueue::GetNextAlt((int *)i); /*0x4037f5*/
    }
  }
  return result; /*0x406ede*/
}
}
} // namespace gamemd

// 0x406EE0
namespace gamemd {
int sub_406EE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_406EE0()
{
  if ( MEMORY[0x87E728] ) /*0x406ee8*/
    AudioQueue::StopAllVoices((int)MEMORY[0x87E728], 1); /*0x406eef*/
  AudioStream::CleanupChannels(); /*0x406ef4*/
  return AudioQueue::HaltVoices();
}
}
} // namespace gamemd

// 0x406F00
namespace gamemd {
int sub_406F00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_406F00()
{
  int result; // eax

  if ( !ChronoScreen::IsActive() ) /*0x406f00*/
  {
    if ( MEMORY[0x87E728] ) /*0x406f11*/
      AudioQueue::DeactivateAllMatching((int)MEMORY[0x87E728], 1); /*0x406f18*/
    AudioStream::UpdateTimers(); /*0x406f1d*/
    sub_751040(); /*0x406f22*/
  }
  result = AudioFrame::CounterInc(); /*0x406f27*/
  if ( MEMORY[0xB1D4D8] ) /*0x753508*/
    return AudioFrame::ProcessAudioFrame((int)MEMORY[0xB1D4D8]); /*0x75350a*/
  return result; /*0x75350f*/
}
}
} // namespace gamemd

// 0x406F40
namespace gamemd {
int sub_406F40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_406F40()
{
  int i; // esi
  int result; // eax

  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ_1(); /*0x406f40*/
  AudioMixer::Pump(); /*0x406f45*/
  sub_751080(); /*0x406f4a*/
  result = AudioStream::UpdateCountdowners(); /*0x406f4f*/
  if ( MEMORY[0x87E728] ) /*0x406f5c*/
  {
    result = AudioQueue::GetNext((int *)MEMORY[0x87E728] + 62); /*0x4037ca*/
    for ( i = result; result; i = result ) /*0x4037d3*/
    {
      if ( (*(_BYTE *)(i + 164) & 4) != 0 && *(_DWORD *)(i + 12) == 1 ) /*0x4037e6*/
        result = AudioChannel::ActivatePlay((_DWORD *)i); /*0x4037ea*/
      if ( !i ) /*0x4037f1*/
        break; /*0x4037f1*/
      result = AudioQueue::GetNextAlt((int *)i); /*0x4037f5*/
    }
  }
  return result; /*0x406f68*/
}
}
} // namespace gamemd

// 0x406F70
namespace gamemd {
void * AudioVideo_Update()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *AudioVideo_Update()
{
  void *result; // eax
  __int64 v1; // kr00_8

  result = (void *)MEMORY[0x87E75C]; /*0x406f70*/
  if ( !MEMORY[0x87E75C] ) /*0x406f7a*/
  {
    result = MEMORY[0x87E728]; /*0x406f7c*/
    if ( MEMORY[0x87E728] ) /*0x406f83*/
    {
      MEMORY[0x87E75C] = 1; /*0x406f87*/
      v1 = Audio::Callback(); /*0x406f9e*/
      result = (void *)(v1 - MEMORY[0x87E760]); /*0x406fa6*/
      if ( (unsigned __int64)(v1 - MEMORY[0x87E760]) > 0x21 ) /*0x406fb5*/
      {
        ProcessAudioFrame(); /*0x406fb7*/
        UpdateVocClass(); /*0x406fbc*/
        UpdateThemes(); /*0x406fc1*/
        Movie::Update(&g_BuildingTypeClass_Count); /*0x406fcb*/
        result = (void *)Audio_Update(); /*0x406fd0*/
        MEMORY[0x87E760] = v1; /*0x406fd5*/
      }
      MEMORY[0x87E75C] = 0; /*0x406fe2*/
    }
  }
  return result; /*0x406fed*/
}
}
} // namespace gamemd

// 0x407020
namespace gamemd {
int sub_407020()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_407020()
{
  int result; // eax

  result = MEMORY[0x87E730]; /*0x407020*/
  if ( !MEMORY[0x87E730] ) /*0x407027*/
    result = sub_40A940(); /*0x407029*/
  ++MEMORY[0x87E730]; /*0x40702e*/
  return result; /*0x407034*/
}
}
} // namespace gamemd

// 0x407040
namespace gamemd {
int sub_407040(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_407040(int a1)
{
  int result; // eax
  int v2; // [esp+Ch] [ebp-4h] BYREF

  result = MEMORY[0x87E730]; /*0x407040*/
  if ( MEMORY[0x87E730] ) /*0x407047*/
  {
    result = MEMORY[0x87E730] - 1; /*0x407049*/
    MEMORY[0x87E730] = result; /*0x40704a*/
    if ( !result ) /*0x40704f*/
    {
      v2 = a1; /*0x40a950*/
      result = MEMORY[0x87E8A0]; /*0x40a951*/
      if ( MEMORY[0x87E8A0] ) /*0x40a958*/
      {
        result = (*(int (__stdcall **)(int, int *))(*(_DWORD *)MEMORY[0x87E8A0] + 36))(MEMORY[0x87E8A0], &v2); /*0x40a962*/
        if ( (v2 & 2) != 0 ) /*0x40a96a*/
          result = (*(int (__stdcall **)(int))(*(_DWORD *)MEMORY[0x87E8A0] + 80))(MEMORY[0x87E8A0]); /*0x40a974*/
        if ( (v2 & 1) == 0 ) /*0x40a97c*/
          return (*(int (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)MEMORY[0x87E8A0] + 48))( /*0x40a98c*/
                   MEMORY[0x87E8A0],
                   0,
                   0,
                   1);
      }
    }
  }
  return result; /*0x407056*/
}
}
} // namespace gamemd

// 0x407060
namespace gamemd {
int sub_407060()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_407060(unsigned int *this)
{
  return RequestBufferMixer(this, 0x4000);
}
}
} // namespace gamemd

// 0x407100
namespace gamemd {
int SetupSampleAudioMixer(int * a0, ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall SetupSampleAudioMixer(int *a0, ObjectClass *aP1)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx

  *a0 = 0; /*0x407106*/
  v4 = Audio::Callback(); /*0x40710c*/
  v5 = *a0; /*0x407111*/
  a0[6] = v4; /*0x407113*/
  a0[4] = 1000; /*0x407119*/
  *a0 = v5 | 1; /*0x407123*/
  a0[2] = (_DWORD)aP1 << 16; /*0x407125*/
  a0[7] = v6; /*0x407128*/
  a0[3] = 1073741; /*0x40712b*/
  a0[5] = 0; /*0x407132*/
  return AudioMixer::PlaySample(a0); /*0x40713b*/
}
}
} // namespace gamemd

// 0x4071A0
namespace gamemd {
int SetRateMixerSample(unsigned int * a0, int a2, unsigned int a3, ObjectClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall SetRateMixerSample(_DWORD *a0, int a2, unsigned int a3, ObjectClass *aP3)
{
  a0[4] = a3; /*0x4071ae*/
  a0[3] = (a2 << 16) / a3; /*0x4071b2*/
  a0[5] = aP3; /*0x4071b9*/
  return (int)aP3->__pad_0; /*0x4071b1*/
}
}
} // namespace gamemd

// 0x4072B0
namespace gamemd {
int sub_4072B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4072B0(_DWORD *this)
{
  return HIWORD(*(this + 2)); /*0x4072b6*/
}
}
} // namespace gamemd

// 0x4072E0
namespace gamemd {
int sub_4072E0(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_4072E0(_DWORD *a1, _DWORD *a2)
{
  int result; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // ebx
  int v5; // ecx
  int v6; // esi

  result = 0; /*0x4072e6*/
  v3 = a1; /*0x4072e8*/
  while ( 1 ) /*0x4072ea*/
  {
    v3 = (_DWORD *)*v3; /*0x4072ea*/
    if ( !v3 ) /*0x4072ee*/
      break; /*0x4072ee*/
    v4 = (_DWORD *)v3[2]; /*0x4072f0*/
    if ( v3 == v4 ) /*0x4072f5*/
      break; /*0x4072f5*/
    if ( a2[2] <= (int)v4 ) /*0x4072fd*/
    {
      v5 = v3[1]; /*0x407302*/
      *a2 = v3; /*0x407305*/
      a2[1] = v5; /*0x407307*/
      v3[1] = a2; /*0x40730a*/
      *(_DWORD *)a2[1] = a2; /*0x407313*/
      return result; /*0x407315*/
    }
    ++result; /*0x4072ff*/
  }
  v6 = a1[1]; /*0x407316*/
  *a2 = a1; /*0x407319*/
  a2[1] = v6; /*0x40731b*/
  a1[1] = a2; /*0x40731e*/
  *(_DWORD *)a2[1] = a2; /*0x407327*/
  return result; /*0x407310*/
}
}
} // namespace gamemd

// 0x407420
namespace gamemd {
int DListNode_InsertAfter(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall DListNode_InsertAfter(int a1, _DWORD *a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 4); /*0x407420*/
  *a2 = a1; /*0x407423*/
  a2[1] = result; /*0x407425*/
  *(_DWORD *)(a1 + 4) = a2; /*0x407428*/
  *(_DWORD *)a2[1] = a2; /*0x40742e*/
  return result; /*0x407430*/
}
}
} // namespace gamemd

// 0x407440
namespace gamemd {
int LinkedList_InsertBefore(int * a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall LinkedList_InsertBefore(int *a1, int *a2)
{
  int result; // eax

  a2[1] = (int)a1; /*0x407440*/
  result = *a1; /*0x407443*/
  *a2 = *a1; /*0x407445*/
  *a1 = (int)a2; /*0x407447*/
  *(_DWORD *)(*a2 + 4) = a2; /*0x40744b*/
  return result; /*0x40744e*/
}
}
} // namespace gamemd

// 0x4074D0
namespace gamemd {
unsigned int * Memory_AllocLinkedList(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall Memory_AllocLinkedList(int a1, int a2)
{
  int v2; // edi
  _DWORD *result; // eax
  _DWORD *v5; // ecx
  int v6; // esi

  v2 = a2 + 8; /*0x4074d2*/
  result = __2_YAPAXI_Z(a1 * (a2 + 8) + 8); /*0x4074e0*/
  if ( result ) /*0x4074ea*/
  {
    v5 = result + 2; /*0x4074ef*/
    *result = result + 2; /*0x4074f4*/
    if ( a1 != 1 ) /*0x4074f6*/
    {
      v6 = a1 - 1; /*0x4074f8*/
      do /*0x407502*/
      {
        --v6; /*0x4074fd*/
        *v5 = (char *)v5 + v2; /*0x4074fe*/
        v5 = (_DWORD *)((char *)v5 + v2); /*0x407500*/
      }
      while ( v6 ); /*0x407502*/
    }
    *v5 = 0; /*0x407504*/
  }
  return result; /*0x40750a*/
}
}
} // namespace gamemd

// 0x407530
namespace gamemd {
int LinkedList_PushFront_Alt(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall LinkedList_PushFront_Alt(_DWORD *a1, int a2)
{
  *(_DWORD *)(a2 - 8) = *a1; /*0x407535*/
  *a1 = a2 - 8; /*0x407537*/
  return a2 - 8; /*0x407539*/
}
}
} // namespace gamemd

// 0x407550
namespace gamemd {
int sub_407550()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_407550()
{
  HANDLE Thread; // eax
  DWORD LastError; // eax
  CHAR Buffer[1024]; // [esp+4h] [ebp-400h] BYREF

  DListNode::Init(MEMORY[0x87E810]); /*0x40755c*/
  InitializeCriticalSection(&MEMORY[0x87E7F8]); /*0x407566*/
  MEMORY[0x87E770] = 0; /*0x40756e*/
  MEMORY[0x87E778] = 0; /*0x407574*/
  MEMORY[0x87E788] = 0; /*0x40757a*/
  MEMORY[0x87E780] = 1000; /*0x407580*/
  MEMORY[0x87E774] = 0; /*0x407590*/
  AudioStream::Reset(MEMORY[0x87E790]); /*0x40759b*/
  CoordBounds::Constructor(MEMORY[0x87E790], MEMORY[0x87E780], SHIDWORD(MEMORY[0x87E780])); /*0x4075b2*/
  AudioStream::ResetChannel(MEMORY[0x87E790], 4 * MEMORY[0x87E780], (unsigned __int64)MEMORY[0x87E780] >> 30); /*0x4075d3*/
  AudioStream::ResetChannel2(MEMORY[0x87E790], 4 * MEMORY[0x87E780], (unsigned __int64)MEMORY[0x87E780] >> 30); /*0x4075f5*/
  Thread = CreateThread(0, 0x1000u, (LPTHREAD_START_ROUTINE)StartAddress, &MEMORY[0x87E770], 0, &MEMORY[0x87E7F4]); /*0x407610*/
  MEMORY[0x87E7F0] = Thread; /*0x407618*/
  if ( !Thread ) /*0x40761d*/
    return 0; /*0x40761f*/
  if ( !SetThreadPriority(Thread, 2) ) /*0x40762c*/
  {
    LastError = GetLastError(); /*0x407642*/
    FormatMessageA(0x1000u, 0, LastError, 0, Buffer, 0x400u, 0); /*0x40764f*/
    Debug::Log(); /*0x40765f*/
  }
  MEMORY[0x87E820] = 1; /*0x40766d*/
  MEMORY[0x87E81C] = 1; /*0x407672*/
  return 1; /*0x407621*/
}
}
} // namespace gamemd

// 0x407680
namespace gamemd {
DWORD StartAddress(unsigned int * lpThreadParameter)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DWORD __stdcall StartAddress(_DWORD *lpThreadParameter)
{
  _DWORD *v1; // edi
  __int64 v2; // rax
  int i; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  v1 = lpThreadParameter; /*0x407682*/
  lpThreadParameter[6] = 1; /*0x40768b*/
  v1[2] = 0; /*0x407690*/
  if ( *v1 ) /*0x407693*/
  {
    v1[2] = 1; /*0x407774*/
    return 0; /*0x407778*/
  }
  else
  {
    do /*0x40775e*/
    {
      LODWORD(v2) = Audio::Callback(); /*0x4076a5*/
      AudioThread::UpdateStats((int)(v1 + 8), v2); /*0x4076af*/
      EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x4076b9*/
      for ( i = AudioQueue::GetNext(MEMORY[0x87E810]); i; i = AudioQueue::GetNextAlt((int *)i) ) /*0x4076c9*/
      {
        if ( (*(_BYTE *)(i + 12) & 4) != 0 ) /*0x4076cf*/
        {
          EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x4076d6*/
          v4 = *(_DWORD *)(i + 156); /*0x4076d8*/
          byte_B04BEC = 1; /*0x4076e2*/
          v5 = sub_408F80(*(int **)(i + 52), *(int **)(i + 124), v4, (char *)&lpThreadParameter); /*0x4076f1*/
          byte_B04BEC = 0; /*0x4076f6*/
          v6 = *(_DWORD *)(i + 156) - (_DWORD)lpThreadParameter; /*0x407706*/
          *(_DWORD *)(i + 156) = v6; /*0x40770a*/
          if ( v6 <= 0 || v5 == 2 || !v5 ) /*0x407719*/
          {
            v7 = *(_DWORD *)(i + 12); /*0x40771b*/
            LOBYTE(v7) = v7 & 0xFB; /*0x40771e*/
            *(_DWORD *)(i + 12) = v7; /*0x407720*/
          }
          LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407728*/
        }
      }
      LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407740*/
      Sleep(v1[4]); /*0x40774d*/
      ++v1[1]; /*0x407757*/
    }
    while ( !*v1 ); /*0x40775e*/
    v1[2] = 1; /*0x407764*/
    return 0; /*0x40776e*/
  }
}
}
} // namespace gamemd

// 0x407780
namespace gamemd {
void sub_407780()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_407780()
{
  int *i; // esi

  if ( MEMORY[0x87E81C] ) /*0x407787*/
  {
    if ( MEMORY[0x87E820] ) /*0x407795*/
    {
      MEMORY[0x87E770] = 1; /*0x407797*/
      while ( !MEMORY[0x87E778] ) /*0x4077a8*/
        Sleep(0); /*0x4077b2*/
      WaitForSingleObject(MEMORY[0x87E7F0], 0x1388u); /*0x4077c8*/
      CloseHandle(MEMORY[0x87E7F0]); /*0x4077d5*/
      MEMORY[0x87E820] = 0; /*0x4077db*/
    }
    for ( i = (int *)AudioQueue::GetNext(MEMORY[0x87E810]); i; i = (int *)AudioQueue::GetNext(MEMORY[0x87E810]) ) /*0x4077f3*/
    {
      if ( !i[34] ) /*0x407803*/
      {
        if ( i[5] ) /*0x40780d*/
        {
          EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x407819*/
          Voice::Stop(i[5]); /*0x40781e*/
          LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407828*/
        }
      }
      AudioSample::Destructor(i); /*0x40782c*/
    }
    DeleteCriticalSection(&MEMORY[0x87E7F8]); /*0x407848*/
    MEMORY[0x87E81C] = 0; /*0x40784e*/
  }
}
}
} // namespace gamemd

// 0x407B60
namespace gamemd {
int ThreadAudioMixerMain(unsigned int * a1, RawFileClass * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall ThreadAudioMixerMain(_DWORD *a1, RawFileClass *a2, int a3)
{
  void (__thiscall ***v5)(_DWORD, int); // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ecx
  _DWORD *v15; // ecx
  _DWORD *v16; // edi
  int v17; // ebp
  int *v18; // eax
  int v19; // eax
  _DWORD *v20; // ecx
  int v21; // eax
  int v22; // ecx
  unsigned __int64 v23; // kr00_8
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // eax
  int *v33; // ecx
  int v34; // ecx
  int v35; // eax
  _DWORD *v36; // ecx
  _DWORD *v37; // ecx
  _DWORD *v38; // ecx
  _DWORD *v39; // ecx
  int v41; // eax
  int v42; // edx
  void (__thiscall ***v43)(_DWORD, int); // ecx

  if ( a1[34] ) /*0x407b6a*/
    return 0; /*0x407ef8*/
  if ( a1[5] ) /*0x407b78*/
  {
    EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x407b82*/
    Voice::Stop(a1[5]); /*0x407b8b*/
    LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407b95*/
  }
  v5 = (void (__thiscall ***)(_DWORD, int))a1[31]; /*0x407b9b*/
  if ( v5 ) /*0x407ba0*/
  {
    (**v5)(v5, 1); /*0x407ba6*/
    a1[31] = 0; /*0x407ba8*/
  }
  if ( !a3 )
  {
    v6 = (_DWORD *)__2_YAPAXI_Z(0x24u); /*0x407bb3*/
    v7 = v6 ? RawFileClass::Construct(v6, a2) : 0;
    a1[31] = v7; /*0x407bcd*/
    if ( v7 ) /*0x407bd0*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v7 + 20))(v7, 0) ) /*0x407bd7*/
      {
        v8 = (void (__thiscall ***)(_DWORD, int))a1[31]; /*0x407bde*/
        if ( v8 ) /*0x407be3*/
          (**v8)(v8, 1); /*0x407be9*/
        a1[31] = 0; /*0x407beb*/
      }
    }
  }
  if ( !a1[31] ) /*0x407bee*/
  {
    v9 = (_DWORD *)__2_YAPAXI_Z(0x6Cu); /*0x407bf5*/
    if ( v9 ) /*0x407bff*/
      v10 = CCFileClass::Construct(v9, a2->__pad_0); /*0x407c04*/
    else
      v10 = 0; /*0x407c0b*/
    a1[31] = v10; /*0x407c0d*/
  }
  v11 = a1[31]; /*0x407c10*/
  if ( !v11 ) /*0x407c15*/
    goto LABEL_51; /*0x407c15*/
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 20))(v11, 0) /*0x407c30*/
    || !(*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)a1[31] + 28))(a1[31], 1) )
  {
    v43 = (void (__thiscall ***)(_DWORD, int))a1[31]; /*0x407f23*/
    if ( v43 ) /*0x407f28*/
      (**v43)(v43, 1); /*0x407f2e*/
    a1[31] = 0; /*0x407f30*/
    goto LABEL_51; /*0x407f33*/
  }
  *(_BYTE *)(a1[31] + 4) = 1; /*0x407c48*/
  if ( !ParseWaveFileHeader(a1[31], a1 + 23, a1 + 37) ) /*0x407c51*/
    goto LABEL_51; /*0x407c51*/
  v12 = a1[31]; /*0x407c60*/
  a1[39] = a1[37]; /*0x407c63*/
  v13 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v12 + 40))(v12, 0, 1); /*0x407c6e*/
  v14 = (_DWORD *)a1[13]; /*0x407c71*/
  a1[38] = v13; /*0x407c74*/
  if ( v14 ) /*0x407c7c*/
  {
    Count::DecrementRefCountsAudio(v14); /*0x407c7e*/
    a1[13] = 0; /*0x407c83*/
  }
  v15 = (_DWORD *)a1[14]; /*0x407c86*/
  if ( v15 ) /*0x407c8b*/
  {
    Count::DecrementRefCountsAudio(v15); /*0x407c8d*/
    a1[14] = 0; /*0x407c92*/
  }
  v16 = (_DWORD *)a1[12]; /*0x407c9b*/
  v17 = Audio::CalcRate(a1 + 23, a1[6], a1[7]); /*0x407caa*/
  a1[40] = Audio::CalcRate(a1 + 23, 2 * *(_DWORD *)(a1[5] + 424), *(_QWORD *)(a1[5] + 424) >> 31); /*0x407cce*/
  if ( AudioStream::GetChannel(v16) != v17 ) /*0x407cdb*/
  {
    sub_408970(v16); /*0x407cdf*/
    v18 = sub_408D80(v17, 0); /*0x407ce8*/
    if ( v18 ) /*0x407cef*/
      sub_408B10(v16, v18); /*0x407cf5*/
  }
  if ( AudioStream::GetChannel(v16) != v17 ) /*0x407d03*/
    goto LABEL_51; /*0x407d03*/
  AudioMixer::SetupChannels((int *)a1[12]); /*0x407d0c*/
  v19 = AcquireAudioStreamBuffer((_DWORD *)a1[12], 0); /*0x407d16*/
  v20 = (_DWORD *)a1[12]; /*0x407d1b*/
  a1[13] = v19; /*0x407d23*/
  v21 = AcquireAudioStreamBuffer(v20, 1); /*0x407d26*/
  v22 = a1[13]; /*0x407d2b*/
  a1[14] = v21; /*0x407d2e*/
  if ( !v22 || !v21 ) /*0x407d3b*/
    goto LABEL_51; /*0x407d3b*/
  v23 = 2LL * *(_QWORD *)(a1[5] + 432); /*0x407d5d*/
  if ( v23 <= 4 * MEMORY[0x87E780] ) /*0x407d7e*/
    v23 = 4 * MEMORY[0x87E780]; /*0x407d98*/
  if ( v23 <= 0xFA0 ) /*0x407da6*/
    v23 = 4000; /*0x407dad*/
  EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x407db4*/
  if ( v23 ) /*0x407dbe*/
  {
    v24 = Audio::CalcRate(a1 + 23, v23, SHIDWORD(v23)); /*0x407dc4*/
    if ( v24 > a1[39] ) /*0x407dd1*/
      v24 = a1[39]; /*0x407dd3*/
  }
  else
  {
    v24 = a1[39]; /*0x407dd7*/
  }
  byte_B04BEC = 1; /*0x407de1*/
  v25 = sub_408F80((int *)a1[13], (int *)a1[31], v24, (char *)&a3); /*0x407df0*/
  byte_B04BEC = 0; /*0x407df5*/
  v26 = a1[39] - a3; /*0x407e08*/
  a1[39] = v26; /*0x407e0a*/
  if ( v26 <= 0 || v25 == 2 || !v25 ) /*0x407e1b*/
  {
    v27 = a1[3]; /*0x407e1d*/
    LOBYTE(v27) = v27 & 0xFB; /*0x407e20*/
    a1[3] = v27; /*0x407e22*/
  }
  LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407e2a*/
  if ( !a3 ) /*0x407e36*/
  {
LABEL_51:
    v38 = (_DWORD *)a1[13]; /*0x407ed4*/
    if ( v38 ) /*0x407ed9*/
    {
      Count::DecrementRefCountsAudio(v38); /*0x407edb*/
      a1[13] = 0; /*0x407ee0*/
    }
    v39 = (_DWORD *)a1[14]; /*0x407ee3*/
    if ( v39 ) /*0x407ee8*/
    {
      Count::DecrementRefCountsAudio(v39); /*0x407eea*/
      a1[14] = 0; /*0x407eef*/
    }
    return 0; /*0x407eef*/
  }
  AudioStream::ReadStreamAndReturn((int *)a1[14]); /*0x407e3f*/
  v28 = a1[5]; /*0x407e47*/
  a1[15] = *(_DWORD *)(a1[14] + 4); /*0x407e50*/
  v29 = Audio::CalcRate(a1 + 23, *(_DWORD *)(v28 + 424), *(_DWORD *)(v28 + 428)); /*0x407e62*/
  v30 = a1[14]; /*0x407e67*/
  a1[16] = v29; /*0x407e6a*/
  v31 = *(_DWORD *)(v30 + 8); /*0x407e6d*/
  if ( v29 > v31 ) /*0x407e72*/
    a1[16] = v31; /*0x407e74*/
  v32 = a1[16]; /*0x407e7a*/
  v33 = (int *)(a1[5] + 16); /*0x407e82*/
  a1[20] = a1 + 23; /*0x407e85*/
  a1[36] = v32; /*0x407e88*/
  EndBufferMixer(v33, 0x4000); /*0x407e8e*/
  BindChannelAudioStream((_DWORD *)a1[5], a1 + 15); /*0x407e98*/
  v34 = a1[5]; /*0x407ea0*/
  a1[3] |= 1u; /*0x407ea6*/
  if ( Audio::GetChannelStatus(v34) ) /*0x407ea9*/
  {
    v35 = a1[3]; /*0x407eb2*/
    v36 = (_DWORD *)a1[13]; /*0x407eb5*/
    LOBYTE(v35) = v35 & 0xFE; /*0x407eb8*/
    a1[3] = v35; /*0x407eba*/
    Count::DecrementRefCountsAudio(v36); /*0x407ebd*/
    v37 = (_DWORD *)a1[14]; /*0x407ec2*/
    a1[13] = 0; /*0x407ec7*/
    Count::DecrementRefCountsAudio(v37); /*0x407eca*/
    a1[14] = 0; /*0x407ecf*/
    goto LABEL_51; /*0x407ecf*/
  }
  a1[10] = Audio::Callback(); /*0x407f00*/
  v41 = a1[3]; /*0x407f03*/
  a1[11] = v42; /*0x407f06*/
  LOBYTE(v41) = v41 | 4; /*0x407f0c*/
  a1[8] = a1[10]; /*0x407f0e*/
  a1[9] = v42; /*0x407f11*/
  a1[3] = v41; /*0x407f14*/
  return 1; /*0x407ef2*/
}
}
} // namespace gamemd

// 0x407F80
namespace gamemd {
int sub_407F80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_407F80(_DWORD *this)
{
  int result; // eax

  result = *(this + 34) + 1; /*0x407f86*/
  *(this + 34) = result; /*0x407f87*/
  return result; /*0x407f8d*/
}
}
} // namespace gamemd

// 0x408080
namespace gamemd {
char * SetAudioFileName(int a1, const char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall SetAudioFileName(int a1, const char *a2)
{
  char *result; // eax

  result = strncpy((char *)(a1 + 164), a2, (IUnknown *)0x50); /*0x40808d*/
  *(_BYTE *)(a1 + 243) = 0; /*0x408095*/
  return result; /*0x40809c*/
}
}
} // namespace gamemd

// 0x4080A0
namespace gamemd {
char * sub_4080A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_4080A0(char *this)
{
  return this + 164; /*0x4080a6*/
}
}
} // namespace gamemd

// 0x4080B0
namespace gamemd {
int sub_4080B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4080B0(_DWORD *this)
{
  return RequestBufferMixer((unsigned int *)(*(this + 5) + 16), 0x4000);
}
}
} // namespace gamemd

// 0x4082F0
namespace gamemd {
int AudioTimer_Process()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int AudioTimer_Process()
{
  int result; // eax
  int *i; // esi
  int v2; // eax
  int v3; // eax

  result = MEMORY[0x87E81C]; /*0x4082f0*/
  if ( MEMORY[0x87E81C] ) /*0x4082f8*/
  {
    result = AudioQueue::GetNext(MEMORY[0x87E810]); /*0x408303*/
    for ( i = (int *)result; result; i = (int *)result ) /*0x40830c*/
    {
      if ( i[32] ) /*0x40831c*/
      {
        v2 = i[32] - 1; /*0x40832c*/
        i[32] = v2; /*0x40832f*/
        if ( v2 < 0 ) /*0x408335*/
          i[32] = 0; /*0x408337*/
        if ( !i[32] && i[5] ) /*0x40834b*/
        {
          EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x408357*/
          v3 = i[3]; /*0x408359*/
          if ( (v3 & 2) != 0 ) /*0x40835e*/
          {
            LOBYTE(v3) = v3 & 0xFC | 1; /*0x408362*/
            i[3] = v3; /*0x408364*/
          }
          AudioChannel::ActivatePlay(i[5]); /*0x40836a*/
          LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x408374*/
        }
      }
      result = AudioQueue::GetNextAlt(i); /*0x408378*/
    }
  }
  return result; /*0x408385*/
}
}
} // namespace gamemd

// 0x408390
namespace gamemd {
int sub_408390()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_408390()
{
  int result; // eax
  int *i; // esi

  result = MEMORY[0x87E81C]; /*0x408390*/
  if ( MEMORY[0x87E81C] ) /*0x408398*/
  {
    result = AudioQueue::GetNext(MEMORY[0x87E810]); /*0x40839f*/
    for ( i = (int *)result; result; i = (int *)result ) /*0x4083a8*/
    {
      RequestBufferMixer((unsigned int *)(i[5] + 16), 0); /*0x4083b2*/
      result = AudioQueue::GetNextAlt(i); /*0x4083b9*/
    }
  }
  return result; /*0x4083c4*/
}
}
} // namespace gamemd

// 0x408410
namespace gamemd {
int sub_408410()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_408410()
{
  int Next; // eax

  if ( !MEMORY[0x87E81C] ) /*0x408418*/
    return 1; /*0x408418*/
  Next = AudioQueue::GetNext(MEMORY[0x87E810]); /*0x40841f*/
  if ( !Next ) /*0x408426*/
    return 1; /*0x40844c*/
  while ( (*(_BYTE *)(Next + 12) & 1) == 0 /*0x408439*/
       || *(_DWORD *)(*(_DWORD *)(Next + 20) + 20) == *(_DWORD *)(*(_DWORD *)(Next + 20) + 24) )
  {
    Next = AudioQueue::GetNextAlt((int *)Next); /*0x40843d*/
    if ( !Next ) /*0x408444*/
      return 1; /*0x408444*/
  }
  return 0; /*0x40844a*/
}
}
} // namespace gamemd

// 0x408460
namespace gamemd {
unsigned int * sub_408460(size_t Size)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_408460(size_t Size)
{
  _DWORD *v2; // esi
  void *v3; // eax

  v2 = __2_YAPAXI_Z(0x20u); /*0x40846c*/
  memset(v2, 0, 0x20u); /*0x408477*/
  *v2 = 0; /*0x408481*/
  v2[1] = 0; /*0x408483*/
  v2[5] = 0; /*0x408486*/
  v2[6] = 0; /*0x408489*/
  DListNode::Init(v2 + 2); /*0x40848c*/
  v2[1] = Size; /*0x408491*/
  v3 = __2_YAPAXI_Z(Size); /*0x408495*/
  *v2 = v3; /*0x40849f*/
  if ( v3 ) /*0x4084a1*/
    return v2; /*0x4084b6*/
  if ( v2 ) /*0x4084a5*/
    __3_YAXPAX_Z(v2); /*0x4084a8*/
  return 0; /*0x4084b0*/
}
}
} // namespace gamemd

// 0x408500
namespace gamemd {
int sub_408500(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_408500(int a1, _DWORD *a2)
{
  int result; // eax

  InsertAfterDListNode(a1 + 8, a2); /*0x408509*/
  result = a2[4]; /*0x40850e*/
  *(_DWORD *)(a1 + 4) += result; /*0x408516*/
  a2[5] = a1; /*0x408519*/
  return result; /*0x40851c*/
}
}
} // namespace gamemd

// 0x408560
namespace gamemd {
unsigned long long sub_408560(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int64 __fastcall sub_408560(int a1, int a2)
{
  int v2; // esi

  v2 = *(_DWORD *)(a1 + 20); /*0x408561*/
  if ( v2 ) /*0x408568*/
    return 1000LL * a2 / (unsigned __int64)v2; /*0x408585*/
  else
    return 0; /*0x40858d*/
}
}
} // namespace gamemd

// 0x4085B0
namespace gamemd {
int sub_4085B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4085B0(_DWORD *this)
{
  int v1; // edx
  int result; // eax

  v1 = *(this + 1); /*0x4085b3*/
  result = *(this + 2) * *(this + 3) * *(this + 4); /*0x4085ba*/
  *(this + 5) = result; /*0x4085c1*/
  if ( v1 == 1 || v1 == 2 ) /*0x4085c9*/
  {
    result >>= 2; /*0x4085cb*/
    *(this + 5) = result; /*0x4085ce*/
  }
  return result; /*0x4085d1*/
}
}
} // namespace gamemd

// 0x4085E0
namespace gamemd {
void sub_4085E0(unsigned int * a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall sub_4085E0(_DWORD *a1, int a2, int a3)
{
  a1[4] = a3; /*0x4085e7*/
  a1[3] = a2; /*0x4085ea*/
  DListNode::InitEmpty(a1); /*0x4085ed*/
  a1[5] = 0; /*0x4085f2*/
}
}
} // namespace gamemd

// 0x408610
namespace gamemd {
int sub_408610(int a1, unsigned int * a2, size_t * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_408610(int a1, _DWORD *a2, size_t *a3)
{
  unsigned __int16 *v3; // esi
  int v4; // edi
  int v7; // eax
  unsigned __int16 v8; // dx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v14; // [esp+1Ch] [ebp-14h] BYREF
  size_t Size; // [esp+20h] [ebp-10h]
  _DWORD v16[3]; // [esp+24h] [ebp-Ch] BYREF

  v3 = 0; /*0x40861b*/
  v4 = 0; /*0x40861d*/
  if ( a3 ) /*0x408629*/
    *a3 = 0; /*0x40862b*/
  if ( a1 ) /*0x40862f*/
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 40))(a1, 0, 0); /*0x40863e*/
    if ( (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 36))(a1, v16, 12) == 12 /*0x40867a*/
      && v16[0] == 1179011410
      && v16[2] == 1163280727
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 24))(a1) )
    {
      while ( (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 36))(a1, &v14, 8) == 8 ) /*0x408697*/
      {
        if ( v14 == 544501094 ) /*0x4086a6*/
        {
          if ( Size >= 0x12 ) /*0x4086cb*/
          {
            v3 = (unsigned __int16 *)malloc(Size); /*0x4086f8*/
            memset(v3, 0, Size); /*0x408706*/
            v4 = 0; /*0x40870f*/
          }
          else
          {
            v3 = (unsigned __int16 *)malloc(0x12u); /*0x4086d4*/
            *(_DWORD *)v3 = 0; /*0x4086dd*/
            *((_DWORD *)v3 + 1) = 0; /*0x4086df*/
            *((_DWORD *)v3 + 2) = 0; /*0x4086e2*/
            *((_DWORD *)v3 + 3) = 0; /*0x4086e5*/
            v3[8] = 0; /*0x4086e8*/
          }
          (*(void (__thiscall **)(int, unsigned __int16 *, size_t))(*(_DWORD *)a1 + 36))(a1, v3, Size); /*0x40871e*/
          v3[8] = Size; /*0x408726*/
        }
        else
        {
          if ( v14 == 1635017060 ) /*0x4086ad*/
          {
            *a3 = Size; /*0x408749*/
            if ( !v3 ) /*0x40874b*/
              return v4; /*0x40874b*/
            if ( *v3 == 17 ) /*0x408758*/
            {
              v7 = v3[6]; /*0x40875c*/
              a2[1] = 1; /*0x408760*/
              a2[6] = v7; /*0x408767*/
              a2[4] = 2; /*0x40876a*/
            }
            else
            {
              if ( *v3 != 1 ) /*0x408777*/
                break; /*0x408777*/
              a2[1] = 0; /*0x40877b*/
              a2[4] = v3[7] >> 3; /*0x408789*/
            }
            v8 = v3[1]; /*0x40878e*/
            a2[3] = v8; /*0x408792*/
            a2[5] = *((_DWORD *)v3 + 2); /*0x408798*/
            v9 = v8 * a2[4]; /*0x40879e*/
            v10 = *((_DWORD *)v3 + 1); /*0x4087a1*/
            *a2 = 4; /*0x4087a4*/
            v11 = v10 * v9; /*0x4087aa*/
            a2[2] = v10; /*0x4087ad*/
            v12 = a2[1]; /*0x4087b0*/
            a2[5] = v11; /*0x4087b6*/
            if ( v12 == 1 || v12 == 2 ) /*0x4087be*/
              a2[5] = v11 >> 2; /*0x4087c3*/
            v4 = 1; /*0x4087ce*/
            break; /*0x4087ce*/
          }
          (*(void (__thiscall **)(int, size_t, int))(*(_DWORD *)a1 + 40))(a1, Size, 1); /*0x4086bf*/
        }
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 24))(a1) ) /*0x40872f*/
          break; /*0x408734*/
      }
      if ( v3 ) /*0x4087d4*/
        free(v3); /*0x4087d7*/
    }
  }
  return v4; /*0x4087e1*/
}
}
} // namespace gamemd

// 0x4087F0
namespace gamemd {
unsigned int * sub_4087F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *sub_4087F0()
{
  _DWORD *v0; // esi
  int v1; // ecx
  _DWORD *v2; // eax

  v0 = __2_YAPAXI_Z(0xA4u); /*0x4087fc*/
  memset(v0, 0, 0xA4u); /*0x408807*/
  DListNode::Init(v0 + 1); /*0x40880f*/
  v0[38] = 0; /*0x408816*/
  v1 = 0; /*0x40881c*/
  v2 = v0 + 15; /*0x40881e*/
  do /*0x408836*/
  {
    *(v2 - 9) = v0; /*0x408821*/
    *(v2 - 2) = 0; /*0x408824*/
    *(v2 - 4) = v1; /*0x408827*/
    *v2 = 0; /*0x40882a*/
    *(v2 - 3) = 0; /*0x40882c*/
    ++v1; /*0x40882f*/
    v2 += 16; /*0x408830*/
  }
  while ( v1 < 2 ); /*0x408836*/
  return v0; /*0x40883a*/
}
}
} // namespace gamemd

// 0x408970
namespace gamemd {
int sub_408970()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_408970(_DWORD *this)
{
  _DWORD *v1; // edx
  int v2; // ebx
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  int v6; // edx
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  int v10; // edx
  int *v11; // edi
  int v12; // ecx
  _DWORD *v13; // eax
  int result; // eax

  v1 = this; /*0x408973*/
  v2 = 0; /*0x408977*/
  v3 = (_DWORD *)*(this + 1); /*0x408979*/
  v4 = this + 1; /*0x40897c*/
  if ( v3 != this + 1 ) /*0x408985*/
  {
    do /*0x4089ce*/
    {
      LinkedList::Init((_DWORD **)v3); /*0x40898e*/
      v5 = (_DWORD *)v3[12]; /*0x408993*/
      v3[12] = 0; /*0x408996*/
      v6 = v5[5]; /*0x40899b*/
      --*v5; /*0x40899f*/
      v5[5] = v6 - v3[7]; /*0x4089a6*/
      v5[4] &= ~2u; /*0x4089ae*/
      if ( v3[4] ) /*0x4089b1*/
        __3_YAXPAX_Z((void *)v3[4]); /*0x4089b9*/
      __3_YAXPAX_Z(v3); /*0x4089c2*/
      v3 = (_DWORD *)*v4; /*0x4089c7*/
    }
    while ( (_DWORD *)*v4 != v4 ); /*0x4089ce*/
    v1 = this; /*0x4089d0*/
  }
  v7 = (_DWORD *)*v4; /*0x4089d4*/
  if ( (_DWORD *)*v4 == v4 ) /*0x4089d8*/
  {
    v7 = 0; /*0x4089da*/
  }
  else if ( v7 ) /*0x4089e0*/
  {
    v8 = (_DWORD *)*v4; /*0x4089e2*/
    do /*0x408a05*/
    {
      v9 = v8 + 9; /*0x4089e4*/
      v10 = 2; /*0x4089e7*/
      do /*0x4089fb*/
      {
        *(v9 - 1) = v8[6]; /*0x4089ef*/
        *v9 = v8[7]; /*0x4089f5*/
        v9 += 2; /*0x4089f7*/
        --v10; /*0x4089fa*/
      }
      while ( v10 ); /*0x4089fb*/
      v8[13] = v2; /*0x4089fd*/
      v8 = (_DWORD *)*v8; /*0x408a00*/
      ++v2; /*0x408a02*/
    }
    while ( v8 != v4 ); /*0x408a05*/
    v1 = this; /*0x408a07*/
  }
  v11 = v1 + 19; /*0x408a0d*/
  v12 = 2; /*0x408a10*/
  v13 = v1 + 19; /*0x408a15*/
  do /*0x408a51*/
  {
    *(v13 - 3) = v7; /*0x408a17*/
    *v13 = -1001; /*0x408a1a*/
    v13[1] = *v13; /*0x408a22*/
    *(v13 - 1) = 0; /*0x408a27*/
    *(v13 - 2) = 0; /*0x408a2a*/
    *(v13 - 10) = v7; /*0x408a2d*/
    if ( v7 ) /*0x408a30*/
      *(v13 - 12) = v7[2 * *(v13 - 8) + 8]; /*0x408a39*/
    else
      *(v13 - 12) = 0; /*0x408a3e*/
    *(v13 - 11) = 0; /*0x408a41*/
    *(v13 - 9) &= ~1u; /*0x408a4a*/
    v13 += 16; /*0x408a4d*/
    --v12; /*0x408a50*/
  }
  while ( v12 ); /*0x408a51*/
  result = *v11; /*0x408a53*/
  *v11 += v1[5]; /*0x408a5a*/
  return result; /*0x408a5c*/
}
}
} // namespace gamemd

// 0x408B10
namespace gamemd {
char sub_408B10(unsigned int * a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_408B10(_DWORD *a1, int *a2)
{
  int v4; // ecx
  int v5; // eax

  InsertBeforeLinkedList(a1 + 1, a2); /*0x408b19*/
  v4 = a1[5]; /*0x408b20*/
  ++*a1; /*0x408b24*/
  a1[5] = a2[7] + v4; /*0x408b2b*/
  a2[12] = (int)a1; /*0x408b2e*/
  v5 = a1[4]; /*0x408b31*/
  LOBYTE(v5) = v5 & 0xFD; /*0x408b35*/
  a1[4] = v5; /*0x408b37*/
  return v5; /*0x408b34*/
}
}
} // namespace gamemd

// 0x408B40
namespace gamemd {
int sub_408B40(unsigned int * a1, int a2, int a3, size_t Size)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_408B40(_DWORD *a1, int a2, int a3, size_t Size)
{
  int result; // eax
  _DWORD *v7; // esi
  void *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // [esp+10h] [ebp-Ch]
  int v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h]
  size_t Sizea; // [esp+24h] [ebp+8h]

  result = 0; /*0x408b46*/
  v11 = 0; /*0x408b50*/
  v12 = a2 - 1; /*0x408b54*/
  if ( a2 ) /*0x408b58*/
  {
    v13 = 1 << Size; /*0x408b6f*/
    Sizea = a3 + (1 << Size); /*0x408b75*/
    while ( 1 ) /*0x408b80*/
    {
      v7 = __2_YAPAXI_Z(0x3Cu); /*0x408b80*/
      memset(v7, 0, 0x3Cu); /*0x408b8b*/
      DListNode::InitEmpty(v7); /*0x408b92*/
      v8 = __2_YAPAXI_Z(Sizea); /*0x408b9c*/
      v7[4] = v8; /*0x408ba4*/
      if ( !v8 ) /*0x408ba9*/
        break; /*0x408ba9*/
      v7[5] = Size; /*0x408baf*/
      v7[7] = a3; /*0x408bc1*/
      v7[6] = (-1 << Size) & ((unsigned int)v8 + v13 - 1); /*0x408bc8*/
      if ( v7 ) /*0x408bcb*/
      {
        InsertBeforeLinkedList(a1 + 1, v7); /*0x408bd2*/
        v9 = a1[5]; /*0x408bd9*/
        ++*a1; /*0x408bdd*/
        a1[5] = v7[7] + v9; /*0x408be4*/
        v10 = v12; /*0x408be7*/
        v7[12] = a1; /*0x408beb*/
        a1[4] &= ~2u; /*0x408bfc*/
        ++v11; /*0x408c01*/
        --v12; /*0x408c05*/
        if ( v10 ) /*0x408c09*/
          continue; /*0x408c09*/
      }
      return v11; /*0x408c09*/
    }
    if ( v7 ) /*0x408c12*/
      __3_YAXPAX_Z(v7); /*0x408c15*/
    return v11; /*0x408c1d*/
  }
  return result; /*0x408c21*/
}
}
} // namespace gamemd

// 0x408C30
namespace gamemd {
int AudioStream_AcquireBuffer(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall AudioStream_AcquireBuffer(_DWORD *a1, int a2)
{
  int result; // eax
  int v3; // ebp
  _DWORD *v4; // ebx
  _DWORD *v5; // edx
  _DWORD *v6; // esi
  int v7; // edi
  int v8; // esi
  _DWORD *v9; // edx

  result = (int)&a1[16 * a2 + 6]; /*0x408c3b*/
  v3 = 0; /*0x408c3f*/
  if ( a1[16 * a2 + 13] ) /*0x408c45*/
  {
    Debug::Log(); /*0x408c63*/
    return 0; /*0x408c6b*/
  }
  else
  {
    if ( !a1[38] ) /*0x408c72*/
    {
      v4 = (_DWORD *)a1[1]; /*0x408c86*/
      if ( v4 == a1 + 1 ) /*0x408c8a*/
      {
        v4 = 0; /*0x408c8c*/
      }
      else if ( v4 ) /*0x408c92*/
      {
        v5 = (_DWORD *)a1[1]; /*0x408c94*/
        do /*0x408cb7*/
        {
          v6 = v5 + 9; /*0x408c96*/
          v7 = 2; /*0x408c99*/
          do /*0x408cad*/
          {
            *(v6 - 1) = v5[6]; /*0x408ca1*/
            *v6 = v5[7]; /*0x408ca7*/
            v6 += 2; /*0x408ca9*/
            --v7; /*0x408cac*/
          }
          while ( v7 ); /*0x408cad*/
          v5[13] = v3; /*0x408caf*/
          v5 = (_DWORD *)*v5; /*0x408cb2*/
          ++v3; /*0x408cb4*/
        }
        while ( v5 != a1 + 1 ); /*0x408cb7*/
      }
      v8 = 2; /*0x408cc2*/
      v9 = a1 + 19; /*0x408cc7*/
      do /*0x408d03*/
      {
        *(v9 - 3) = v4; /*0x408cc9*/
        *v9 = -1001; /*0x408ccc*/
        v9[1] = *v9; /*0x408cd4*/
        *(v9 - 1) = 0; /*0x408cd9*/
        *(v9 - 2) = 0; /*0x408cdc*/
        *(v9 - 10) = v4; /*0x408cdf*/
        if ( v4 ) /*0x408ce2*/
          *(v9 - 12) = v4[2 * *(v9 - 8) + 8]; /*0x408ceb*/
        else
          *(v9 - 12) = 0; /*0x408cf0*/
        *(v9 - 11) = 0; /*0x408cf3*/
        *(v9 - 9) &= ~1u; /*0x408cfc*/
        v9 += 16; /*0x408cff*/
        --v8; /*0x408d02*/
      }
      while ( v8 ); /*0x408d03*/
      a1[19] += a1[5]; /*0x408d0c*/
    }
    ++*(_DWORD *)(result + 28); /*0x408d19*/
    ++a1[38]; /*0x408d23*/
  }
  return result; /*0x408c6d*/
}
}
} // namespace gamemd

// 0x408D30
namespace gamemd {
int sub_408D30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_408D30(_DWORD *this)
{
  return *(this + 35) - *(this + 36); /*0x408d3e*/
}
}
} // namespace gamemd

// 0x408D40
namespace gamemd {
int sub_408D40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_408D40(_DWORD *this)
{
  return *(this + 19) - *(this + 20); /*0x408d48*/
}
}
} // namespace gamemd

// 0x408D80
namespace gamemd {
unsigned int * sub_408D80(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall sub_408D80(int a1, int a2)
{
  _DWORD *v4; // esi
  void *v5; // eax

  v4 = __2_YAPAXI_Z(0x3Cu); /*0x408d8f*/
  memset(v4, 0, 0x3Cu); /*0x408d9a*/
  DListNode::InitEmpty(v4); /*0x408da1*/
  v5 = __2_YAPAXI_Z((1 << a2) + a1); /*0x408db3*/
  v4[4] = v5; /*0x408dbb*/
  if ( v5 ) /*0x408dc0*/
  {
    v4[5] = a2; /*0x408ddf*/
    v4[7] = a1; /*0x408de4*/
    v4[6] = (-1 << a2) & ((unsigned int)v5 + (1 << a2) - 1); /*0x408dec*/
    return v4; /*0x408dea*/
  }
  else
  {
    if ( v4 ) /*0x408dc4*/
      __3_YAXPAX_Z(v4); /*0x408dc7*/
    return 0; /*0x408dd2*/
  }
}
}
} // namespace gamemd

// 0x408EB0
namespace gamemd {
int sub_408EB0(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_408EB0(int a1, int a2)
{
  *(_DWORD *)(a1 + 24) = a2; /*0x408eb0*/
  return 0; /*0x408eb5*/
}
}
} // namespace gamemd

// 0x408EC0
namespace gamemd {
int sub_408EC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_408EC0(_DWORD *this)
{
  return *(this + 6); /*0x408ec3*/
}
}
} // namespace gamemd

// 0x408ED0
namespace gamemd {
int sub_408ED0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_408ED0(_DWORD *this)
{
  return *(this + 5); /*0x408ed3*/
}
}
} // namespace gamemd

// 0x408EE0
namespace gamemd {
int BufferedAudioStreamRead(AudioStream * a1, AudioStream * a2, signed int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall BufferedAudioStreamRead(AudioStream *a1, AudioStream *a2, signed int a3)
{
  AudioStream *v3; // edi
  int v5; // ebx
  AudioStream *v6; // esi
  bool v7; // zf
  int v9; // [esp+10h] [ebp-8h]
  AudioStream *v10; // [esp+14h] [ebp-4h]

  v3 = a2; /*0x408ee7*/
  v9 = 0; /*0x408eed*/
  v10 = a2; /*0x408ef5*/
  ReadAudioStream(a1, 0); /*0x408ef9*/
  while ( 1 ) /*0x408f04*/
  {
    v5 = (int)a1->field_8; /*0x408f04*/
    if ( v5 > a3 ) /*0x408f0d*/
      v5 = a3; /*0x408f0f*/
    if ( !v5 ) /*0x408f13*/
      break; /*0x408f13*/
    if ( a1->field_14 ) /*0x408f15*/
    {
      v6 = (AudioStream *)a1->field_4; /*0x408f1e*/
    }
    else
    {
      v6 = v3; /*0x408f2e*/
      v3 = (AudioStream *)a1->field_4; /*0x408f30*/
    }
    qmemcpy(v3, v6, v5); /*0x408f26*/
    ReadAudioStream(a1, v5); /*0x408f43*/
    v7 = a3 == v5; /*0x408f5a*/
    v10 = (AudioStream *)((char *)v10 + v5); /*0x408f5c*/
    a3 -= v5; /*0x408f60*/
    v9 += v5; /*0x408f64*/
    if ( v7 ) /*0x408f68*/
      break; /*0x408f68*/
    v3 = v10; /*0x408f00*/
  }
  return v9; /*0x408f6e*/
}
}
} // namespace gamemd

// 0x408F80
namespace gamemd {
int sub_408F80(AudioStream * a1, int * a2, int a3, char * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_408F80(AudioStream *a1, int *a2, int a3, char *a4)
{
  int v7; // eax
  int v8; // edx
  int v9; // esi
  bool v10; // zf
  int v12; // [esp-8h] [ebp-1Ch]
  char v13; // [esp+10h] [ebp-4h] BYREF

  ReadAudioStream(a1, 0); /*0x408f8b*/
  if ( !a4 ) /*0x408f96*/
    a4 = &v13; /*0x408f9c*/
  *(_DWORD *)a4 = 0; /*0x408fa8*/
  do /*0x408fae*/
  {
    v7 = (int)a1->field_8; /*0x408fae*/
    if ( v7 > a3 ) /*0x408fb3*/
      v7 = a3; /*0x408fb5*/
    if ( !v7 ) /*0x408fb9*/
      break; /*0x408fb9*/
    v8 = *a2; /*0x408fbe*/
    v12 = (int)a1->field_4; /*0x408fc6*/
    if ( a1->field_14 ) /*0x408fbb*/
    {
      v9 = (*(int (__thiscall **)(int *, int, int))(v8 + 48))(a2, v12, v7); /*0x408fce*/
      v10 = v9 == 0; /*0x408fd0*/
      if ( v9 < 0 ) /*0x408fd2*/
        goto LABEL_11; /*0x408fd2*/
    }
    else
    {
      v9 = (*(int (__thiscall **)(int *, int, int))(v8 + 36))(a2, v12, v7); /*0x408fd9*/
      v10 = v9 == 0; /*0x408fdb*/
      if ( v9 < 0 ) /*0x408fdd*/
      {
LABEL_11:
        a1->field_24 = (void *)-2147221504; /*0x408fdf*/
        v10 = v9 == 0; /*0x408fe6*/
      }
    }
    if ( v10 ) /*0x408fe8*/
      return 2; /*0x409014*/
    if ( v9 == -1 ) /*0x408fed*/
      return 0; /*0x40901e*/
    ReadAudioStream(a1, v9); /*0x408ff3*/
    a3 -= v9; /*0x408ffc*/
    *(_DWORD *)a4 += v9; /*0x409004*/
  }
  while ( a3 ); /*0x408fae*/
  return 1; /*0x40900a*/
}
}
} // namespace gamemd

// 0x409030
namespace gamemd {
int WriteAudioStreamToFile(MouseClass * aP0, FILE * a1, signed int arg0, char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall WriteAudioStreamToFile(MouseClass *aP0, FILE *a1, signed int arg0, char *a3)
{
  void *v7; // eax
  signed int v8; // esi
  bool v9; // zf
  char v11; // [esp+10h] [ebp-4h] BYREF

  ReadAudioStream((AudioStream *)aP0, 0); /*0x40903b*/
  if ( !a3 ) /*0x409046*/
    a3 = &v11; /*0x40904c*/
  *(_DWORD *)a3 = 0; /*0x409058*/
  do /*0x40905e*/
  {
    v7 = aP0->field_8; /*0x40905e*/
    if ( (int)v7 > arg0 ) /*0x409063*/
      v7 = (void *)arg0; /*0x409065*/
    if ( !v7 ) /*0x409069*/
      break; /*0x409069*/
    if ( aP0->field_14 ) /*0x40906b*/
    {
      v8 = Audio_Write_7C95D3(aP0->field_4, 1u, (size_t)v7, a1); /*0x40907f*/
      v9 = v8 == 0; /*0x409084*/
      if ( v8 < 0 ) /*0x409086*/
        goto LABEL_11; /*0x409086*/
    }
    else
    {
      v8 = Audio_Write(aP0->field_4, 1u, (size_t)v7, a1); /*0x409093*/
      v9 = v8 == 0; /*0x409098*/
      if ( v8 < 0 ) /*0x40909a*/
      {
LABEL_11:
        *(_DWORD *)&aP0->__pad_18[12] = -2147221504; /*0x40909c*/
        v9 = v8 == 0; /*0x4090a3*/
      }
    }
    if ( v9 ) /*0x4090a5*/
      return 2; /*0x4090d1*/
    if ( v8 == -1 ) /*0x4090aa*/
      return 0; /*0x4090db*/
    ReadAudioStream((AudioStream *)aP0, v8); /*0x4090b0*/
    arg0 -= v8; /*0x4090b9*/
    *(_DWORD *)a3 += v8; /*0x4090c1*/
  }
  while ( arg0 ); /*0x40905e*/
  return 1; /*0x4090c7*/
}
}
} // namespace gamemd

// 0x4090F0
namespace gamemd {
int sub_4090F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4090F0(_DWORD *this)
{
  return *(this + 9); /*0x4090f3*/
}
}
} // namespace gamemd

// 0x409100
namespace gamemd {
int sub_409100()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_409100(int *this)
{
  int v1; // esi
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // ebx
  int v7; // edx
  int v8; // edi
  _DWORD *v9; // edx
  int v10; // edx
  _DWORD *v11; // edx

  v1 = *(this + 11); /*0x409101*/
  if ( !v1 ) /*0x409106*/
    return 0; /*0x409108*/
  v3 = *(this + 5) + 1; /*0x40910f*/
  if ( *(this + 5) == 1 ) /*0x409113*/
    v3 = 0; /*0x409115*/
  v4 = (v3 << 6) + *this + 24; /*0x40911e*/
  *(this + 14) += v1; /*0x409127*/
  *(_DWORD *)(v4 + 52) += v1; /*0x40912f*/
  v5 = (_DWORD *)*(this + 10); /*0x409132*/
  v6 = v1; /*0x409135*/
  while ( 1 ) /*0x409137*/
  {
    v7 = *(this + 5); /*0x409137*/
    v8 = v5[2 * v7 + 9]; /*0x40913a*/
    v9 = &v5[2 * v7 + 8]; /*0x40913e*/
    if ( v8 > v1 ) /*0x409144*/
      break; /*0x409144*/
    v1 -= v8; /*0x409146*/
    *v9 = v5[6]; /*0x40914b*/
    v9[1] = v5[7]; /*0x409150*/
    v10 = v5[12]; /*0x409153*/
    v5 = (_DWORD *)*v5; /*0x409156*/
    v11 = (_DWORD *)(v10 + 4); /*0x409158*/
    if ( v5 == v11 ) /*0x40915d*/
    {
      v5 = (_DWORD *)*v5; /*0x40915f*/
      if ( v5 == v11 ) /*0x409163*/
        v5 = 0; /*0x409165*/
    }
    if ( !v1 ) /*0x409169*/
      goto LABEL_13; /*0x409169*/
  }
  *v9 += v1; /*0x409171*/
  v9[1] -= v1; /*0x409178*/
LABEL_13:
  *(this + 10) = (int)v5; /*0x40917b*/
  *(this + 11) = 0; /*0x409180*/
  *(this + 3) = (int)v5; /*0x409187*/
  if ( v5 ) /*0x40918a*/
    *(this + 1) = v5[2 * *(this + 5) + 8]; /*0x409193*/
  else
    *(this + 1) = 0; /*0x409198*/
  *(this + 2) = 0; /*0x40919f*/
  *(this + 4) &= ~1u; /*0x4091ac*/
  ReadAudioStream(this, 0); /*0x4091b1*/
  return v6; /*0x40910a*/
}
}
} // namespace gamemd

// 0x4091C0
namespace gamemd {
int ReadAudioStream(AudioStream * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall ReadAudioStream(AudioStream *aP0, int a2)
{
  int v2; // eax
  void *v3; // ebp
  int v5; // ebx
  _DWORD *v6; // esi
  void *v7; // eax
  void *v8; // edi
  int v9; // eax
  _DWORD *v10; // esi
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  void *v13; // eax
  char *v14; // eax
  int v15; // edx
  char *v16; // edi
  char *v17; // esi
  unsigned int v18; // eax
  unsigned int v19; // esi
  int v20; // [esp+Ch] [ebp-4h]

  v20 = 0; /*0x4091c6*/
  v2 = (char *)aP0->field_34 - (char *)aP0->field_38 - (unsigned int)aP0->field_2C; /*0x4091d2*/
  v3 = (void *)v2; /*0x4091d5*/
  if ( v2 ) /*0x4091d7*/
  {
    if ( v2 < a2 ) /*0x4091e5*/
      a2 = (char *)aP0->field_34 - (char *)aP0->field_38 - (unsigned int)aP0->field_2C; /*0x4091e7*/
    v5 = 8 * (int)aP0->field_14 + 32; /*0x4091ed*/
    while ( 1 ) /*0x4091f4*/
    {
      v6 = aP0->field_C; /*0x4091f4*/
      if ( ((int)aP0->field_10 & 1) != 0 /*0x40920e*/
        || (v7 = (void *)(*(_DWORD *)((char *)v6 + v5) + *(_DWORD *)((char *)v6 + v5 + 4) - (unsigned int)aP0->field_4),
            (int)v7 >= (int)v3) )
      {
        aP0->field_8 = v3; /*0x409215*/
      }
      else
      {
        aP0->field_8 = v7; /*0x409210*/
      }
      v8 = (void *)a2; /*0x40921a*/
      if ( !a2 ) /*0x40921c*/
        break; /*0x40921c*/
      if ( a2 < (int)aP0->field_8 ) /*0x409223*/
      {
        v14 = (char *)aP0->field_4 + a2; /*0x40925a*/
      }
      else
      {
        v8 = aP0->field_8; /*0x409225*/
        v9 = v6[12]; /*0x409227*/
        v10 = (_DWORD *)*v6; /*0x40922a*/
        v11 = (_DWORD *)(v9 + 4); /*0x40922c*/
        if ( v10 == v11 ) /*0x409231*/
        {
          v10 = (_DWORD *)*v10; /*0x409233*/
          if ( v10 == v11 ) /*0x409237*/
            v10 = 0; /*0x409239*/
        }
        v12 = aP0->field_28; /*0x40923b*/
        aP0->field_C = v10; /*0x40923e*/
        if ( v10 == v12 ) /*0x409243*/
        {
          v13 = aP0->field_10; /*0x409245*/
          LOBYTE(v13) = (unsigned __int8)v13 | 1; /*0x409248*/
          aP0->field_10 = v13; /*0x40924a*/
          v14 = (char *)v10[6]; /*0x40924d*/
        }
        else
        {
          v14 = *(char **)((char *)v10 + v5); /*0x409252*/
        }
      }
      a2 -= (int)v8; /*0x409260*/
      aP0->field_4 = v14; /*0x409264*/
      v20 += (int)v8; /*0x409267*/
      v3 = (void *)((_BYTE *)v3 - (_BYTE *)v8); /*0x40926b*/
    }
    v15 = *(_DWORD *)aP0->__pad_0; /*0x409279*/
    v16 = (char *)aP0->field_2C + v20; /*0x40927b*/
    v17 = (char *)aP0->field_30 + v20; /*0x40927d*/
    aP0->field_2C = v16; /*0x40927f*/
    aP0->field_30 = v17; /*0x409282*/
    v18 = (unsigned int)v17; /*0x409285*/
    v19 = *(_DWORD *)(v15 + 20); /*0x409287*/
    if ( v18 >= v19 ) /*0x40928c*/
      aP0->field_30 = (void *)(v18 % v19); /*0x409292*/
    if ( v16 && !aP0->field_18 ) /*0x409299*/
      sub_409100((int *)aP0->__pad_0); /*0x4092a0*/
    return v20; /*0x4092a5*/
  }
  else
  {
    aP0->field_8 = 0; /*0x4091d9*/
    return 0; /*0x4091de*/
  }
}
}
} // namespace gamemd

// 0x409330
namespace gamemd {
int sub_409330()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_409330(_DWORD *this)
{
  return *(this + 12); /*0x409333*/
}
}
} // namespace gamemd

// 0x409360
namespace gamemd {
int sub_409360()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_409360()
{
  LONGLONG v0; // rax
  LARGE_INTEGER Frequency; // [esp+0h] [ebp-8h] BYREF

  LODWORD(v0) = QueryPerformanceFrequency(&Frequency); /*0x409368*/
  if ( (_DWORD)v0 ) /*0x409370*/
  {
    v0 = Frequency.QuadPart / 1000; /*0x409383*/
    MEMORY[0x87E828] = Frequency.QuadPart / 1000; /*0x409388*/
    MEMORY[0x87E848] = (int (*)(void))sub_4093C0; /*0x409393*/
  }
  else
  {
    MEMORY[0x87E848] = (int (*)(void))sub_4093F0; /*0x4093a1*/
  }
  return v0; /*0x40939d*/
}
}
} // namespace gamemd

// 0x4093C0
namespace gamemd {
LONGLONG sub_4093C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONGLONG sub_4093C0()
{
  LARGE_INTEGER PerformanceCount; // [esp+0h] [ebp-8h] BYREF

  QueryPerformanceCounter(&PerformanceCount); /*0x4093c8*/
  return PerformanceCount.QuadPart / MEMORY[0x87E828]; /*0x4093eb*/
}
}
} // namespace gamemd

// 0x4093F0
namespace gamemd {
long long sub_4093F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4093F0()
{
  int v0; // esi
  int v1; // edi
  DWORD v2; // ebx
  DWORD Time; // eax

  v0 = ++MEMORY[0x87E84C]; /*0x4093ff*/
  v1 = HIDWORD(qword_816320); /*0x409411*/
  v2 = qword_816320; /*0x409413*/
  while ( 1 ) /*0x409433*/
  {
    Time = timeGetTime(); /*0x409433*/
    if ( Time < v2 ) /*0x409437*/
      ++v1; /*0x409439*/
    HIDWORD(qword_816320) = v1; /*0x409440*/
    LODWORD(qword_816320) = Time; /*0x409448*/
    if ( v0 == MEMORY[0x87E84C] ) /*0x409451*/
      break; /*0x409451*/
    v0 = MEMORY[0x87E84C]; /*0x409453*/
  }
  return qword_816320; /*0x409466*/
}
}
} // namespace gamemd

// 0x409470
namespace gamemd {
int sub_409470()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_409470(_DWORD *this)
{
  HANDLE Thread; // eax
  DWORD LastError; // eax
  CHAR Buffer[1024]; // [esp+Ch] [ebp-400h] BYREF

  InitializeCriticalSection(&MEMORY[0x87E880]); /*0x40947f*/
  if ( DirectSoundCreate(0, &MEMORY[0x87E89C], 0) ) /*0x40948e*/
    return -2147221504; /*0x4094a4*/
  MEMORY[0x87E89C]->lpVtbl->SetCooperativeLevel(MEMORY[0x87E89C], g_hWnd, 2); /*0x4094b6*/
  *(this + 6) = 1; /*0x4094b9*/
  if ( MEMORY[0x87E898] ) /*0x4094c7*/
  {
    ++MEMORY[0x87E878]; /*0x409595*/
  }
  else
  {
    MEMORY[0x87E878] = 0; /*0x4094cd*/
    MEMORY[0x87E850] = 0; /*0x4094d3*/
    MEMORY[0x87E858] = 0; /*0x4094d9*/
    MEMORY[0x87E868] = 0; /*0x4094df*/
    MEMORY[0x87E860] = 33; /*0x4094e5*/
    MEMORY[0x87E864] = 0; /*0x4094ef*/
    MEMORY[0x87E854] = 0; /*0x4094f5*/
    Thread = CreateThread( /*0x409511*/
               0,
               0x1000u,
               (LPTHREAD_START_ROUTINE)AudioStreamThreadProc,
               &MEMORY[0x87E850],
               0,
               &MEMORY[0x87E874]);
    MEMORY[0x87E86C] = (int)Thread; /*0x409519*/
    if ( !Thread ) /*0x40951e*/
      return -2147221504; /*0x40952d*/
    ++MEMORY[0x87E878]; /*0x409535*/
    MEMORY[0x87E898] = 1; /*0x40953e*/
    if ( !SetThreadPriority(Thread, 15) ) /*0x409548*/
    {
      LastError = GetLastError(); /*0x40955e*/
      FormatMessageA(0x1000u, 0, LastError, 0, Buffer, 0x400u, 0); /*0x40956b*/
      Debug::Log(); /*0x40957b*/
      return 0; /*0x40958d*/
    }
  }
  return 0; /*0x409497*/
}
}
} // namespace gamemd

// 0x4095B0
namespace gamemd {
DWORD AudioStreamThreadProc(unsigned int * lpThreadParameter)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DWORD __stdcall AudioStreamThreadProc(_DWORD *lpThreadParameter)
{
  _DWORD *v1; // esi
  ObjectClass *v2; // edi
  __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  int *i; // esi
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // ecx
  bool v11; // cc
  unsigned int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  bool v16; // zf
  int v17; // eax
  void (__thiscall *v18)(int *); // eax
  _BYTE v20[4]; // [esp+10h] [ebp-14h] BYREF
  unsigned int v21; // [esp+14h] [ebp-10h] BYREF
  ObjectClass *v22; // [esp+18h] [ebp-Ch]
  int *v23[2]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = lpThreadParameter; /*0x4095b5*/
  lpThreadParameter[6] = 1; /*0x4095be*/
  lpThreadParameter[2] = 0; /*0x4095c1*/
  if ( !*lpThreadParameter ) /*0x4095c8*/
  {
    while ( 1 ) /*0x4095d8*/
    {
      v22 = (ObjectClass *)v1[8]; /*0x4095d8*/
      v2 = v22; /*0x4095d3*/
      if ( v22 ) /*0x4095dc*/
      {
        if ( v22[1].customSound_controller[2] ) /*0x4095e2*/
        {
          Sleep(5u); /*0x409866*/
          goto LABEL_30; /*0x409866*/
        }
        EnterCriticalSection(&MEMORY[0x87E880]); /*0x4095f5*/
        LODWORD(v3) = Audio::Callback(); /*0x4095fb*/
        v4 = HIDWORD(v3); /*0x409600*/
        v5 = v3; /*0x409602*/
        AudioThread::UpdateStats((int)&v2[2].nextArrayIndex, v3); /*0x40960c*/
        for ( i = (int *)sub_4035B0((int)v2, (int *)v23); i; i = AudioQueue::IteratorNext(v23) ) /*0x409620*/
        {
          if ( (i[41] & 1) != 0 ) /*0x40962d*/
          {
            v7 = *(_DWORD *)(i[86] + 100); /*0x409639*/
            if ( v7 && !(*(int (__stdcall **)(int, _BYTE *))(*(_DWORD *)v7 + 36))(v7, v20) && (v20[0] & 1) != 0 ) /*0x409660*/
            {
              *(_QWORD *)(i[86] + 24) = __PAIR64__(v4, v5) - *(_QWORD *)(i[86] + 16); /*0x40967a*/
              v8 = i[86]; /*0x409680*/
              *(_DWORD *)(v8 + 16) = v5; /*0x409686*/
              *(_DWORD *)(v8 + 20) = v4; /*0x409689*/
              v9 = i[86]; /*0x40968c*/
              (*(void (__stdcall **)(_DWORD, unsigned int *, int))(**(_DWORD **)(v9 + 100) + 16))( /*0x4096a1*/
                *(_DWORD *)(v9 + 100),
                &v21,
                v9 + 52);
              v10 = v21 / *(_DWORD *)(v9 + 108) - *(_DWORD *)(v9 + 12); /*0x4096b2*/
              if ( v10 ) /*0x4096b4*/
              {
                v11 = v10 < 0; /*0x4096b6*/
                if ( v10 < 0 ) /*0x4096b8*/
                {
                  v10 = v21 / *(_DWORD *)(v9 + 108) - *(_DWORD *)(v9 + 12) + 4; /*0x4096c2*/
                  v11 = v10 <= 0; /*0x4096c4*/
                }
                if ( !v11 ) /*0x4096c6*/
                {
                  v12 = *(_DWORD *)(v9 + 12) + v10; /*0x4096cb*/
                  *(_DWORD *)(v9 + 12) = v12; /*0x4096d1*/
                  if ( v12 >= 4 ) /*0x4096d4*/
                    *(_DWORD *)(v9 + 12) &= 3u; /*0x4096dc*/
                  *(_DWORD *)(v9 + 212) += v10; /*0x4096e7*/
                  v13 = *(_DWORD *)(v9 + 108) * v10; /*0x4096f1*/
                  v14 = ProcessAudioStream((int *)v9, v13); /*0x4096f7*/
                  if ( *(_DWORD *)(v9 + 64) > v13 ) /*0x4096ff*/
                    *(_DWORD *)(v9 + 64) = v13; /*0x409701*/
                  v15 = *(_DWORD *)(v9 + 8) - v13; /*0x409707*/
                  v16 = *(_DWORD *)(v9 + 8) == v13; /*0x409709*/
                  *(_DWORD *)(v9 + 8) = v15; /*0x40970b*/
                  if ( v15 < 0 || v16 || !v14 ) /*0x409712*/
                    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v9 + 100) + 72))(*(_DWORD *)(v9 + 100)); /*0x40971a*/
                }
              }
              ++*(_DWORD *)(v9 + 208); /*0x409724*/
              v2 = v22; /*0x40972a*/
            }
            else
            {
              v17 = *(_DWORD *)(i[86] + 100); /*0x409736*/
              if ( v17 ) /*0x40973b*/
                (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v17 + 72))(*(_DWORD *)(i[86] + 100)); /*0x409740*/
              v18 = (void (__thiscall *)(int *))i[89]; /*0x409743*/
              if ( v18 ) /*0x40974b*/
                v18(i); /*0x40974f*/
            }
          }
        }
        if ( v2 ) /*0x409766*/
        {
          Audio::InitChannels((char *)MEMORY[0x87E744]); /*0x409772*/
          Audio::InitChannels((char *)MEMORY[0x87E748]); /*0x40977d*/
          Audio::InitChannels((char *)MEMORY[0x87E740]); /*0x409788*/
          Audio::InitChannels((char *)MEMORY[0x87E73C]); /*0x409793*/
          Audio::InitChannels((char *)MEMORY[0x87E754]); /*0x40979e*/
          Audio::InitChannels((char *)MEMORY[0x87E758]); /*0x4097a9*/
          Audio::InitChannels((char *)MEMORY[0x87E750]); /*0x4097b4*/
          Audio::InitChannels((char *)MEMORY[0x87E74C]); /*0x4097bf*/
          sub_403810((int (**)(void))v2); /*0x4097c6*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E748]); /*0x4097d1*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E744]); /*0x4097dc*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E740]); /*0x4097e7*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E73C]); /*0x4097f2*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E754]); /*0x4097fd*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E758]); /*0x409808*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E750]); /*0x409813*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E74C]); /*0x40981e*/
        }
        LeaveCriticalSection(&MEMORY[0x87E880]); /*0x409828*/
        v1 = lpThreadParameter; /*0x409833*/
      }
      Sleep(v1[4]); /*0x40983e*/
LABEL_30:
      ++v1[1]; /*0x409844*/
      if ( *v1 ) /*0x40984b*/
      {
        v1[2] = 1; /*0x409855*/
        return 0; /*0x409861*/
      }
    }
  }
  lpThreadParameter[2] = 1; /*0x409868*/
  return 0; /*0x40985a*/
}
}
} // namespace gamemd

// 0x409880
namespace gamemd {
int ProcessAudioStream(int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall ProcessAudioStream(int *a1, int a2)
{
  int v3; // ebp
  int v4; // ebx
  int v5; // edx
  int v6; // eax
  int v8; // ebp
  char *v9; // ebx
  int v10; // eax
  bool v11; // cc
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char v16; // dl
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned int v22; // [esp+84h] [ebp-2Ch] BYREF
  int v23; // [esp+88h] [ebp-28h] BYREF
  int v24; // [esp+8Ch] [ebp-24h] BYREF
  int v25; // [esp+90h] [ebp-20h] BYREF
  int v26; // [esp+94h] [ebp-1Ch] BYREF
  char *v27; // [esp+98h] [ebp-18h] BYREF
  int v28; // [esp+9Ch] [ebp-14h]
  int v29; // [esp+A0h] [ebp-10h]
  int v30; // [esp+A4h] [ebp-Ch]
  int v31; // [esp+A8h] [ebp-8h]
  unsigned int v32; // [esp+ACh] [ebp-4h] BYREF

  v30 = a2; /*0x409889*/
  v27 = 0; /*0x409891*/
  v25 = 0; /*0x409895*/
  v26 = 0; /*0x409899*/
  v24 = 0; /*0x40989d*/
  v28 = 0; /*0x4098a1*/
  v31 = 0; /*0x4098a5*/
  if ( a2 <= 0 ) /*0x4098a9*/
  {
LABEL_45:
    v31 = 1; /*0x409c03*/
  }
  else
  {
    while ( 1 ) /*0x4098af*/
    {
      if ( a1[14] <= 0 ) /*0x4098b4*/
      {
        a1[12] = 0; /*0x4098b6*/
        a1[14] = a1[26]; /*0x4098bc*/
      }
      v29 = 0; /*0x4098bf*/
      v23 = a2; /*0x4098c3*/
      if ( a2 > (unsigned int)a1[14] ) /*0x4098cc*/
        v23 = a1[14]; /*0x4098d1*/
      if ( v28 ) /*0x4098d9*/
      {
        (*(void (__stdcall **)(int, char *, int, int, int))(*(_DWORD *)a1[25] + 76))(a1[25], v27, v26, v25, v24); /*0x4098f5*/
        v28 = 0; /*0x4098f8*/
      }
      v3 = a1[12]; /*0x4098fc*/
      v4 = 3; /*0x409918*/
      if ( (*(int (__stdcall **)(int, int, int, char **, int *, int *, int *, _DWORD))(*(_DWORD *)a1[25] + 44))( /*0x409925*/
             a1[25],
             v3,
             v23,
             &v27,
             &v26,
             &v25,
             &v24,
             0) )
      {
        break; /*0x409925*/
      }
LABEL_12:
      v28 = 1; /*0x409a0b*/
      if ( v25 || (v8 = v23, v26 != v23) || v24 ) /*0x409a35*/
      {
        Debug::Log(); /*0x409bf9*/
        goto LABEL_47; /*0x409c01*/
      }
      v9 = v27; /*0x409a3b*/
      if ( v23 ) /*0x409a41*/
      {
        do /*0x409bb4*/
        {
          v22 = v8; /*0x409a47*/
          v10 = a1[11]; /*0x409a4b*/
          v11 = v10 <= 0; /*0x409a4e*/
          if ( !v10 ) /*0x409a50*/
          {
            a1[11] = -1; /*0x409a56*/
            if ( !a1[51] ) /*0x409a5d*/
            {
              (*(void (**)(void))(*a1 + 348))(); /*0x409a69*/
              a1[51] = 1; /*0x409a6f*/
            }
            if ( !*(_DWORD *)(*a1 + 372) && !a1[42] ) /*0x409a83*/
            {
              (*(void (**)(void))(*a1 + 352))(); /*0x409a8b*/
              if ( *(_DWORD *)(*a1 + 372) ) /*0x409a93*/
                AudioBuffer::InitializePlayback(a1); /*0x409a9d*/
            }
            v12 = *a1; /*0x409aa2*/
            if ( *(_DWORD *)(*a1 + 372) ) /*0x409aa4*/
            {
              a1[51] = 0; /*0x409aac*/
              a1[10] = *(_DWORD *)(v12 + 368); /*0x409ab8*/
              a1[8] = *(_DWORD *)(v12 + 368); /*0x409ac1*/
              v13 = *(_DWORD *)(v12 + 372); /*0x409ac4*/
              a1[9] = v13; /*0x409aca*/
              a1[11] = v13; /*0x409acd*/
            }
            v14 = a1[11]; /*0x409ad0*/
            v11 = v14 <= 0; /*0x409ad3*/
            if ( !v14 ) /*0x409ad5*/
            {
              a1[11] = -1; /*0x409ad7*/
              v11 = a1[11] <= 0; /*0x409ae1*/
            }
          }
          if ( !v11 || a1[42] ) /*0x409ae5*/
          {
            v23 = a1[11]; /*0x409b30*/
            if ( v23 > 0 ) /*0x409b34*/
            {
              if ( !((int (__fastcall *)(int *, char *, unsigned int *, int, int *))a1[28])(a1, v9, &v22, a1[10], &v23) ) /*0x409b6a*/
                goto LABEL_47; /*0x409b6a*/
              v19 = v23; /*0x409b70*/
            }
            else
            {
              if ( !((int (__fastcall *)(int *, char *, unsigned int *, _DWORD, _DWORD))a1[28])(a1, v9, &v22, 0, 0) ) /*0x409b46*/
                goto LABEL_47; /*0x409b46*/
              v19 = 0; /*0x409b4c*/
              a1[11] = 0; /*0x409b4e*/
            }
            a1[10] += v19; /*0x409b79*/
            a1[11] -= v19; /*0x409b81*/
            v18 = v22; /*0x409b87*/
            a1[2] += v22; /*0x409b8d*/
          }
          else
          {
            if ( *(_DWORD *)(*a1 + 396) == 2 ) /*0x409afc*/
              v15 = 0; /*0x409afe*/
            else
              v15 = -2139062144; /*0x409b02*/
            v16 = v22; /*0x409b07*/
            v17 = v22 >> 2; /*0x409b0b*/
            memset32(v9, v15, v22 >> 2); /*0x409b0e*/
            memset(&v9[4 * v17], v15, v16 & 3); /*0x409b15*/
            v18 = v22; /*0x409b1a*/
            a1[15] -= v22; /*0x409b20*/
            v8 = v23; /*0x409b23*/
          }
          v9 += v18; /*0x409b90*/
          a1[12] += v18; /*0x409b97*/
          a1[14] -= v18; /*0x409b9f*/
          v8 -= v18; /*0x409ba6*/
          v23 = v8; /*0x409bac*/
          v29 += v18; /*0x409bb0*/
        }
        while ( v8 ); /*0x409bb4*/
      }
      v20 = v30 - v29; /*0x409bc2*/
      v30 -= v29; /*0x409bc6*/
      if ( v30 <= 0 ) /*0x409bca*/
        goto LABEL_45; /*0x409bca*/
      a2 = v20; /*0x409bcc*/
    }
    while ( !(*(int (__stdcall **)(int))(*(_DWORD *)a1[25] + 80))(a1[25]) ) /*0x409934*/
    {
      a1[11] = 0; /*0x409945*/
      a1[2] = 0; /*0x409948*/
      a1[15] = 4 * a1[27]; /*0x409951*/
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)a1[25] + 52))(a1[25], 0); /*0x40995b*/
      (*(void (__stdcall **)(int, unsigned int *, int *))(*(_DWORD *)a1[25] + 16))(a1[25], &v32, a1 + 13); /*0x40996d*/
      a1[3] = v32 / a1[27]; /*0x409979*/
      a1[4] = Audio::Callback(); /*0x409981*/
      a1[5] = v5; /*0x409984*/
      v6 = a1[25]; /*0x40998a*/
      a1[16] = a1[26]; /*0x409991*/
      (*(void (__stdcall **)(int, int *, int *))(*(_DWORD *)v6 + 16))(v6, a1 + 12, a1 + 13); /*0x409998*/
      a1[14] = a1[26] - a1[12]; /*0x4099a2*/
      a1[52] = 0; /*0x4099a7*/
      a1[54] = a1[3]; /*0x4099b0*/
      a1[53] = 0; /*0x4099b6*/
      a1[55] = a1[12]; /*0x4099be*/
      Debug::Log(); /*0x4099c9*/
      if ( !v4-- ) /*0x4099d1*/
        break; /*0x4099d6*/
      if ( !(*(int (__stdcall **)(int, int, int, char **, int *, int *, int *, _DWORD))(*(_DWORD *)a1[25] + 44))( /*0x4099fe*/
              a1[25],
              v3,
              v23,
              &v27,
              &v26,
              &v25,
              &v24,
              0) )
        goto LABEL_12; /*0x409a03*/
    }
    Debug::Log(); /*0x409bd8*/
  }
  if ( v28 ) /*0x409c0f*/
LABEL_47:
    (*(void (__stdcall **)(int, char *, int, int, int))(*(_DWORD *)a1[25] + 76))(a1[25], v27, v26, v25, v24); /*0x409c11*/
  return v31; /*0x409c32*/
}
}
} // namespace gamemd

// 0x409D90
namespace gamemd {
int sub_409D90(int a1, void * a2, unsigned int * a3, const void * a4, unsigned int * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_409D90(int a1, void *a2, unsigned int *a3, const void *a4, unsigned int *a5)
{
  unsigned int v5; // eax

  v5 = *a3; /*0x409d9a*/
  if ( (int)*a3 > (int)*a5 ) /*0x409da1*/
    v5 = *a5; /*0x409da3*/
  if ( v5 ) /*0x409da7*/
  {
    qmemcpy(a2, a4, v5); /*0x409db8*/
    *a3 = v5; /*0x409dc1*/
    *a5 = v5; /*0x409dc4*/
  }
  return 1; /*0x409dc8*/
}
}
} // namespace gamemd

// 0x40A090
namespace gamemd {
int sub_40A090()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_40A090(int this)
{
  _DWORD *v2; // edi
  __int16 v3; // cx
  int v4; // edx
  int v6; // [esp+10h] [ebp-88h] BYREF
  int v7; // [esp+14h] [ebp-84h]
  int v8; // [esp+18h] [ebp-80h]
  int v9; // [esp+1Ch] [ebp-7Ch]
  int v10; // [esp+20h] [ebp-78h]
  _DWORD v11[5]; // [esp+24h] [ebp-74h] BYREF
  _DWORD v12[24]; // [esp+38h] [ebp-60h] BYREF

  v2 = (_DWORD *)(this + 368); /*0x40a09d*/
  *(_DWORD *)(this + 244) = 100; /*0x40a0a8*/
  CoordBounds::Constructor((_DWORD *)(this + 368), 33, 0); /*0x40a0b2*/
  AudioStream::ResetChannel(v2, 1056, 0); /*0x40a0bf*/
  AudioStream::ResetChannel2(v2, 3168, 0); /*0x40a0cc*/
  MEMORY[0x87E870] = this; /*0x40a0d3*/
  v3 = *(_WORD *)(this + 84); /*0x40a0d9*/
  v6 = 0; /*0x40a0dd*/
  v7 = 0; /*0x40a0e1*/
  v8 = 0; /*0x40a0e7*/
  v4 = *(_DWORD *)(this + 76); /*0x40a0eb*/
  v9 = 0; /*0x40a0ee*/
  v7 = v4; /*0x40a0f2*/
  LOWORD(v10) = 0; /*0x40a0f6*/
  HIWORD(v6) = (unsigned short)this->customSound_controller; /*0x40a102*/
  LOWORD(v9) = HIWORD(v6) * v3; /*0x40a107*/
  LOWORD(v6) = 1; /*0x40a116*/
  v8 = v4 * (unsigned __int16)(HIWORD(v6) * v3); /*0x40a122*/
  LOWORD(v10) = 0; /*0x40a133*/
  v11[0] = 20; /*0x40a13c*/
  v11[1] = 1; /*0x40a148*/
  HIWORD(v9) = 8 * v3; /*0x40a15b*/
  memset(&v11[2], 0, 12); /*0x40a160*/
  if ( MEMORY[0x87E89C]->lpVtbl->CreateSoundBuffer( /*0x40a16d*/
         MEMORY[0x87E89C],
         (LPCDSBUFFERDESC)v11,
         (LPDIRECTSOUNDBUFFER *)&MEMORY[0x87E8A0],
         0) )
  {
    MEMORY[0x87E8A0] = 0; /*0x40a175*/
    return -2147221504; /*0x40a17c*/
  }
  else
  {
    if ( (*(int (__stdcall **)(int, int *))(*(_DWORD *)MEMORY[0x87E8A0] + 56))(MEMORY[0x87E8A0], &v6) ) /*0x40a196*/
      Debug::Log(); /*0x40a1a2*/
    memset(&v12[1], 0, 0x5Cu); /*0x40a1b9*/
    v12[0] = 96; /*0x40a1c0*/
    MEMORY[0x87E89C]->lpVtbl->GetCaps(MEMORY[0x87E89C], (LPDSCAPS)v12); /*0x40a1cc*/
    (*(void (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)MEMORY[0x87E8A0] + 48))(MEMORY[0x87E8A0], 0, 0, 1); /*0x40a1db*/
    *(_DWORD *)(this + 472) = 4; /*0x40a1de*/
    *(_DWORD *)(this + 476) = 8; /*0x40a1e8*/
    *(_DWORD *)(this + 480) = 0; /*0x40a1f2*/
    return 0; /*0x40a1fa*/
  }
}
}
} // namespace gamemd

// 0x40A2D0
namespace gamemd {
int sub_40A2D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_40A2D0(_DWORD *this)
{
  int v2; // esi
  int v3; // eax

  v2 = *(this + 86); /*0x40a2d5*/
  if ( v2 ) /*0x40a2df*/
  {
    if ( *(_DWORD *)(v2 + 124) ) /*0x40a2e1*/
    {
      free(*(void **)(v2 + 124)); /*0x40a2e9*/
      *(_DWORD *)(v2 + 124) = 0; /*0x40a2f1*/
      *(_DWORD *)(v2 + 136) = 0; /*0x40a2f4*/
    }
    if ( *(_DWORD *)(v2 + 144) ) /*0x40a2fa*/
    {
      free(*(void **)(v2 + 144)); /*0x40a305*/
      *(_DWORD *)(v2 + 144) = 0; /*0x40a30d*/
      *(_DWORD *)(v2 + 156) = 0; /*0x40a313*/
    }
    v3 = *(_DWORD *)(v2 + 100); /*0x40a319*/
    if ( v3 ) /*0x40a31e*/
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*(_DWORD *)(v2 + 100)); /*0x40a323*/
      *(_DWORD *)(v2 + 100) = 0; /*0x40a326*/
    }
    __3_YAXPAX_Z((void *)v2); /*0x40a32a*/
    *(this + 86) = 0; /*0x40a332*/
  }
  return 0; /*0x40a338*/
}
}
} // namespace gamemd

// 0x40A7B0
namespace gamemd {
int sub_40A7B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40A7B0()
{
  return MEMORY[0x87E8A0]; /*0x40a7b5*/
}
}
} // namespace gamemd

// 0x40A7C0
namespace gamemd {
int DirectSound_CreateBuffer(int a1, int a2, short a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall DirectSound_CreateBuffer(int a1, int a2, __int16 a3)
{
  int result; // eax
  _WORD v4[2]; // [esp+8h] [ebp-14h] BYREF
  int v5; // [esp+Ch] [ebp-10h]
  int v6; // [esp+10h] [ebp-Ch]
  unsigned __int16 v7; // [esp+14h] [ebp-8h]
  __int16 v8; // [esp+16h] [ebp-6h]
  __int16 v9; // [esp+18h] [ebp-4h]

  if ( MEMORY[0x87E8A0] ) /*0x40a7cf*/
  {
    v4[0] = 1; /*0x40a7d8*/
    v4[1] = a3; /*0x40a7e3*/
    v5 = a1; /*0x40a7ea*/
    v7 = a3 * (a2 / 8); /*0x40a7f4*/
    v8 = a2; /*0x40a802*/
    v6 = a1 * v7; /*0x40a80a*/
    v9 = 0; /*0x40a80e*/
    (*(void (__stdcall **)(int))(*(_DWORD *)MEMORY[0x87E8A0] + 72))(MEMORY[0x87E8A0]); /*0x40a818*/
    (*(void (__stdcall **)(int, _WORD *))(*(_DWORD *)MEMORY[0x87E8A0] + 56))(MEMORY[0x87E8A0], v4); /*0x40a828*/
    return (*(int (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)MEMORY[0x87E8A0] + 48))( /*0x40a839*/
             MEMORY[0x87E8A0],
             0,
             0,
             1);
  }
  return result; /*0x40a83d*/
}
}
} // namespace gamemd

// 0x40A850
namespace gamemd {
int sub_40A850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40A850()
{
  _WORD *Enabled; // esi
  int result; // eax
  __int16 v2; // ax
  int v3; // ecx
  __int16 v4; // si
  _WORD v5[2]; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  int v7; // [esp+Ch] [ebp-Ch]
  __int16 v8; // [esp+10h] [ebp-8h]
  __int16 v9; // [esp+12h] [ebp-6h]
  __int16 v10; // [esp+14h] [ebp-4h]

  Enabled = Audio::GetEnabled(); /*0x40a859*/
  result = MEMORY[0x87E8A0]; /*0x40a85b*/
  if ( MEMORY[0x87E8A0] ) /*0x40a862*/
  {
    if ( Enabled ) /*0x40a86a*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)MEMORY[0x87E8A0] + 72))(MEMORY[0x87E8A0]); /*0x40a873*/
      v2 = Enabled[40]; /*0x40a878*/
      v3 = *((_DWORD *)Enabled + 19); /*0x40a87c*/
      v4 = Enabled[42]; /*0x40a87f*/
      v5[1] = v2; /*0x40a887*/
      v6 = v3; /*0x40a890*/
      v5[0] = 1; /*0x40a898*/
      v8 = v2 * v4; /*0x40a8ad*/
      v10 = 0; /*0x40a8bb*/
      v7 = v3 * (unsigned __int16)(v2 * v4); /*0x40a8cc*/
      v9 = 8 * v4; /*0x40a8d5*/
      (*(void (__stdcall **)(int, _WORD *))(*(_DWORD *)MEMORY[0x87E8A0] + 56))(MEMORY[0x87E8A0], v5); /*0x40a8e2*/
      return (*(int (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)MEMORY[0x87E8A0] + 48))( /*0x40a8f3*/
               MEMORY[0x87E8A0],
               0,
               0,
               1);
    }
  }
  return result; /*0x40a8f6*/
}
}
} // namespace gamemd

// 0x40A900
namespace gamemd {
int sub_40A900(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_40A900(int a1)
{
  int v1; // eax

  v1 = 100 * a1 / 256; /*0x40a912*/
  if ( v1 > 100 ) /*0x40a918*/
    return dword_816510; /*0x40a91f*/
  if ( v1 < 0 ) /*0x40a929*/
    v1 = 0; /*0x40a92b*/
  return dword_816380[v1]; /*0x40a926*/
}
}
} // namespace gamemd

// 0x40A940
namespace gamemd {
int sub_40A940()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40A940()
{
  int result; // eax

  result = MEMORY[0x87E8A0]; /*0x40a940*/
  if ( MEMORY[0x87E8A0] ) /*0x40a947*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)MEMORY[0x87E8A0] + 72))(MEMORY[0x87E8A0]); /*0x40a94c*/
  return result; /*0x40a94f*/
}
}
} // namespace gamemd

// 0x40ACD0
namespace gamemd {
short Coord_MoveByDirection(unsigned signed char a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __fastcall Coord_MoveByDirection(unsigned __int8 a1, int *a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  bool v7; // sf
  int v8; // eax

  v2 = dword_816558[a2[1]]; /*0x40acd5*/
  v3 = v2 >> 3; /*0x40acde*/
  if ( (a1 & 1) != 0 ) /*0x40ace4*/
    v3 += v2 >> 2; /*0x40aceb*/
  if ( (a1 & 2) != 0 ) /*0x40acf0*/
    v3 += v2 >> 1; /*0x40acf6*/
  if ( (a1 & 4) != 0 ) /*0x40acfb*/
    v3 += v2; /*0x40acfd*/
  if ( (a1 & 8) != 0 ) /*0x40ad02*/
    v3 = -v3; /*0x40ad04*/
  v4 = v3 + *a2; /*0x40ad08*/
  *a2 = v4; /*0x40ad0c*/
  if ( v4 <= 0x7FFF ) /*0x40ad15*/
  {
    if ( v4 < -32768 ) /*0x40ad24*/
      *a2 = -32768; /*0x40ad26*/
  }
  else
  {
    *a2 = 0x7FFF; /*0x40ad17*/
  }
  v5 = a2[1]; /*0x40ad2c*/
  v6 = dword_816518[a1]; /*0x40ad35*/
  v7 = v6 + v5 < 0; /*0x40ad3c*/
  v8 = v6 + v5; /*0x40ad3c*/
  a2[1] = v8; /*0x40ad3e*/
  if ( v7 ) /*0x40ad41*/
  {
    a2[1] = 0; /*0x40ad43*/
    return *(_WORD *)a2; /*0x40ad4a*/
  }
  else
  {
    if ( v8 > 88 ) /*0x40ad51*/
      a2[1] = 88; /*0x40ad53*/
    return *(_WORD *)a2; /*0x40ad5a*/
  }
}
}
} // namespace gamemd

// 0x40AD60
namespace gamemd {
int sub_40AD60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40AD60()
{
  __0Iostream_init_QAE_XZ_0((Iostream_init *)&MEMORY[0x87E8A8]); /*0x40ad65*/
  return atexit(unknown_libname_1); /*0x40ad75*/
}
}
} // namespace gamemd

// 0x40AD80
namespace gamemd {
int unknown_libname_1()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_1()
{
  nullsub_53(); /*0x40ad85*/
}
}
} // namespace gamemd

// 0x40AD90
namespace gamemd {
void sub_40AD90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40AD90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40ad9c*/
  MEMORY[0x87F550] = Math::Sqrt(v0 + v0); /*0x40adae*/
}
}
} // namespace gamemd

// 0x40ADC0
namespace gamemd {
void sub_40ADC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40ADC0()
{
  MEMORY[0x87F5A0] = MEMORY[0x87F550] / 60.0; /*0x40adcc*/
}
}
} // namespace gamemd

// 0x40ADE0
namespace gamemd {
void sub_40ADE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40ADE0()
{
  MEMORY[0x87F588] = 1.0 / MEMORY[0x87F5A0]; /*0x40adec*/
}
}
} // namespace gamemd

// 0x40AE00
namespace gamemd {
void sub_40AE00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40AE00()
{
  MEMORY[0x87F580] = 0.0174532925199433 * 45.0; /*0x40ae0c*/
}
}
} // namespace gamemd

// 0x40AE20
namespace gamemd {
void sub_40AE20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40AE20()
{
  MEMORY[0x87F558] = 0.0174532925199433 * 60.0; /*0x40ae2c*/
}
}
} // namespace gamemd

// 0x40AE40
namespace gamemd {
void sub_40AE40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40AE40()
{
  MEMORY[0x87E8B0] = 0.0174532925199433 * 90.0; /*0x40ae4c*/
}
}
} // namespace gamemd

// 0x40AE60
namespace gamemd {
long long sub_40AE60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40AE60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x87E8B0] - MEMORY[0x87F558]); /*0x40ae72*/
  result = Math::RoundToInt(v0 * MEMORY[0x87F550] * 0.5); /*0x40ae86*/
  MEMORY[0x87F5A8] = result; /*0x40ae8b*/
  return result; /*0x40ae90*/
}
}
} // namespace gamemd

// 0x40AEA0
namespace gamemd {
void sub_40AEA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40AEA0()
{
  MEMORY[0x87F560] = Math::ArcTan((double)MEMORY[0x87F5A8] * 0.00390625); /*0x40aeb7*/
}
}
} // namespace gamemd

// 0x40AED0
namespace gamemd {
void sub_40AED0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40AED0()
{
  MEMORY[0x87F578] = Math::ArcTan((double)(2 * MEMORY[0x87F5A8]) / MEMORY[0x87F550]); /*0x40aef2*/
}
}
} // namespace gamemd

// 0x40AF00
namespace gamemd {
long long sub_40AF00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40AF00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x87F5A8]) + 0.5); /*0x40af1b*/
  MEMORY[0x87F59C] = result; /*0x40af20*/
  return result; /*0x40af26*/
}
}
} // namespace gamemd

// 0x40AF30
namespace gamemd {
int sub_40AF30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40AF30()
{
  MEMORY[0x87F548] = 0; /*0x40af32*/
  MEMORY[0x87F54A] = 0; /*0x40af38*/
  return 0; /*0x40af3e*/
}
}
} // namespace gamemd

// 0x40AF40
namespace gamemd {
int sub_40AF40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40AF40()
{
  MEMORY[0x87F568] = 0; /*0x40af42*/
  MEMORY[0x87F56C] = 0; /*0x40af47*/
  MEMORY[0x87F570] = 0; /*0x40af4c*/
  return 0; /*0x40af51*/
}
}
} // namespace gamemd

// 0x40AF60
namespace gamemd {
int sub_40AF60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40AF60()
{
  MEMORY[0x87F598] = 0; /*0x40af65*/
  MEMORY[0x87F590] = 128; /*0x40af6f*/
  MEMORY[0x87F594] = 128; /*0x40af74*/
  return 128; /*0x40af79*/
}
}
} // namespace gamemd

// 0x40AF80
namespace gamemd {
int sub_40AF80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40AF80()
{
  MEMORY[0x87F538] = 0; /*0x40af82*/
  MEMORY[0x87F53C] = 0; /*0x40af87*/
  MEMORY[0x87F540] = 0; /*0x40af8c*/
  MEMORY[0x87F544] = 0; /*0x40af91*/
  return 0; /*0x40af96*/
}
}
} // namespace gamemd

// 0x40AFA0
namespace gamemd {
int sub_40AFA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40AFA0()
{
  Tactical::ConstructTacticalSurface(MEMORY[0x87E8B8]); /*0x40afa5*/
  return atexit(unknown_libname_2); /*0x40afb5*/
}
}
} // namespace gamemd

// 0x40AFC0
namespace gamemd {
int unknown_libname_2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_2()
{
  sub_42A900((int)MEMORY[0x87E8B8]); /*0x40afc5*/
}
}
} // namespace gamemd

// 0x40B010
namespace gamemd {
void ** sub_40B010(void ** Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void **__thiscall sub_40B010(void **Block, char a2)
{
  int v3; // eax
  void **v4; // ebp
  void **v5; // esi
  int v6; // eax
  SessionClass *v7; // edi

  if ( (a2 & 2) != 0 ) /*0x40b01b*/
  {
    v3 = (int)*(Block - 1); /*0x40b01d*/
    v4 = Block - 1; /*0x40b021*/
    v5 = Block + v3; /*0x40b024*/
    v6 = v3 - 1; /*0x40b027*/
    if ( v6 >= 0 ) /*0x40b028*/
    {
      v7 = (SessionClass *)(v6 + 1); /*0x40b02b*/
      do /*0x40b039*/
      {
        DeleteAndZero((int)--v5); /*0x40b033*/
        v7 = (SessionClass *)((char *)v7 - 1); /*0x40b038*/
      }
      while ( v7 ); /*0x40b039*/
    }
    if ( (a2 & 1) != 0 ) /*0x40b03f*/
      __3_YAXPAX_Z(v4); /*0x40b042*/
    return v4; /*0x40b04a*/
  }
  else
  {
    DeleteAndZero((int)Block); /*0x40b054*/
    if ( (a2 & 1) != 0 ) /*0x40b05c*/
      __3_YAXPAX_Z(Block); /*0x40b05f*/
    return Block; /*0x40b067*/
  }
}
}
} // namespace gamemd

// 0x40B350
namespace gamemd {
void sub_40B350()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40B350()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40b35c*/
  MEMORY[0x87F5C0] = Math::Sqrt(v0 + v0); /*0x40b36e*/
}
}
} // namespace gamemd

// 0x40B380
namespace gamemd {
void sub_40B380()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40B380()
{
  MEMORY[0x87F648] = MEMORY[0x87F5C0] / 60.0; /*0x40b38c*/
}
}
} // namespace gamemd

// 0x40B3A0
namespace gamemd {
void sub_40B3A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40B3A0()
{
  MEMORY[0x87F630] = 1.0 / MEMORY[0x87F648]; /*0x40b3ac*/
}
}
} // namespace gamemd

// 0x40B3C0
namespace gamemd {
void sub_40B3C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40B3C0()
{
  MEMORY[0x87F628] = 0.0174532925199433 * 45.0; /*0x40b3cc*/
}
}
} // namespace gamemd

// 0x40B3E0
namespace gamemd {
void sub_40B3E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40B3E0()
{
  MEMORY[0x87F5C8] = 0.0174532925199433 * 60.0; /*0x40b3ec*/
}
}
} // namespace gamemd

// 0x40B400
namespace gamemd {
void sub_40B400()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40B400()
{
  MEMORY[0x87F5B0] = 0.0174532925199433 * 90.0; /*0x40b40c*/
}
}
} // namespace gamemd

// 0x40B420
namespace gamemd {
long long sub_40B420()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40B420()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x87F5B0] - MEMORY[0x87F5C8]); /*0x40b432*/
  result = Math::RoundToInt(v0 * MEMORY[0x87F5C0] * 0.5); /*0x40b446*/
  MEMORY[0x87F650] = result; /*0x40b44b*/
  return result; /*0x40b450*/
}
}
} // namespace gamemd

// 0x40B460
namespace gamemd {
void sub_40B460()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40B460()
{
  MEMORY[0x87F5D0] = Math::ArcTan((double)MEMORY[0x87F650] * 0.00390625); /*0x40b477*/
}
}
} // namespace gamemd

// 0x40B490
namespace gamemd {
void sub_40B490()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40B490()
{
  MEMORY[0x87F620] = Math::ArcTan((double)(2 * MEMORY[0x87F650]) / MEMORY[0x87F5C0]); /*0x40b4b2*/
}
}
} // namespace gamemd

// 0x40B4C0
namespace gamemd {
long long sub_40B4C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40B4C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x87F650]) + 0.5); /*0x40b4db*/
  MEMORY[0x87F644] = result; /*0x40b4e0*/
  return result; /*0x40b4e6*/
}
}
} // namespace gamemd

// 0x40B4F0
namespace gamemd {
int sub_40B4F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40B4F0()
{
  MEMORY[0x87F5B8] = 0; /*0x40b4f2*/
  MEMORY[0x87F5BA] = 0; /*0x40b4f8*/
  return 0; /*0x40b4fe*/
}
}
} // namespace gamemd

// 0x40B500
namespace gamemd {
int sub_40B500()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40B500()
{
  MEMORY[0x87F610] = 0; /*0x40b502*/
  MEMORY[0x87F614] = 0; /*0x40b507*/
  MEMORY[0x87F618] = 0; /*0x40b50c*/
  return 0; /*0x40b511*/
}
}
} // namespace gamemd

// 0x40B520
namespace gamemd {
int sub_40B520()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40B520()
{
  MEMORY[0x87F640] = 0; /*0x40b525*/
  MEMORY[0x87F638] = 128; /*0x40b52f*/
  MEMORY[0x87F63C] = 128; /*0x40b534*/
  return 128; /*0x40b539*/
}
}
} // namespace gamemd

// 0x40B540
namespace gamemd {
int sub_40B540()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40B540()
{
  MEMORY[0x87F5DC] = 0; /*0x40b54a*/
  MEMORY[0x87F5E0] = 0; /*0x40b550*/
  MEMORY[0x87F5E4] = 1; /*0x40b556*/
  MEMORY[0x87F5E5] = 0; /*0x40b55d*/
  MEMORY[0x87F5D8] = (int)&DynamicVectorClass<BombClass *>::`vftable'; /*0x40b563*/
  MEMORY[0x87F5EC] = 10; /*0x40b56d*/
  MEMORY[0x87F5E8] = 0; /*0x40b577*/
  EventClass::resetEvent(&MEMORY[0x87F5F0], 0, 0); /*0x40b57d*/
  MEMORY[0x87F5F0] = (int)&DynamicVectorClass<TechnoClass *>::`vftable'; /*0x40b587*/
  MEMORY[0x87F604] = 10; /*0x40b591*/
  MEMORY[0x87F600] = 0; /*0x40b59b*/
  MEMORY[0x87F608] = 100; /*0x40b5a1*/
  return atexit(sub_40B5C0); /*0x40b5b3*/
}
}
} // namespace gamemd

// 0x40B5C0
namespace gamemd {
void sub_40B5C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40B5C0()
{
  Stream::FlushAndReset(&MEMORY[0x87F5D8]); /*0x40b5c6*/
  MEMORY[0x87F5F0] = (int)&VectorClass<TechnoClass *>::`vftable'; /*0x40b5d4*/
  if ( MEMORY[0x87F5F4] && MEMORY[0x87F5FD] ) /*0x40b5e6*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F5F4]); /*0x40b5e9*/
    MEMORY[0x87F5F4] = 0; /*0x40b5f1*/
  }
  MEMORY[0x87F5FD] = 0; /*0x40b5fc*/
  MEMORY[0x87F5F8] = 0; /*0x40b604*/
  MEMORY[0x87F5D8] = (int)&VectorClass<BombClass *>::`vftable'; /*0x40b60a*/
  if ( MEMORY[0x87F5DC] && MEMORY[0x87F5E5] ) /*0x40b61c*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F5DC]); /*0x40b61f*/
    MEMORY[0x87F5DC] = 0; /*0x40b627*/
  }
  MEMORY[0x87F5E5] = 0; /*0x40b62d*/
  MEMORY[0x87F5E0] = 0; /*0x40b633*/
}
}
} // namespace gamemd

// 0x40BD50
namespace gamemd {
int sub_40BD50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40BD50()
{
  MEMORY[0x87F670] = 0; /*0x40bd52*/
  MEMORY[0x87F674] = 0; /*0x40bd57*/
  MEMORY[0x87F678] = 0; /*0x40bd5c*/
  MEMORY[0x87F67C] = 0; /*0x40bd61*/
  return 0; /*0x40bd66*/
}
}
} // namespace gamemd

// 0x40BD70
namespace gamemd {
int sub_40BD70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40BD70()
{
  MEMORY[0x87F680] = 0; /*0x40bd77*/
  MEMORY[0x87F684] = 0; /*0x40bd7c*/
  MEMORY[0x87F688] = 0; /*0x40bd81*/
  MEMORY[0x87F68C] = 0; /*0x40bd86*/
  MEMORY[0x87F690] = 0; /*0x40bd8b*/
  return atexit(sub_40BDA0); /*0x40bd96*/
}
}
} // namespace gamemd

// 0x40BDA0
namespace gamemd {
void sub_40BDA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40BDA0()
{
  __3_YAXPAX_Z(MEMORY[0x87F680]); /*0x40bda6*/
  MEMORY[0x87F680] = 0; /*0x40bdb0*/
  MEMORY[0x87F684] = 0; /*0x40bdb5*/
  MEMORY[0x87F688] = 0; /*0x40bdba*/
  MEMORY[0x87F68C] = 0; /*0x40bdbf*/
  MEMORY[0x87F690] = 0; /*0x40bdc4*/
}
}
} // namespace gamemd

// 0x40BDD0
namespace gamemd {
int sub_40BDD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40BDD0()
{
  MEMORY[0x87F65C] = 0; /*0x40bdd7*/
  MEMORY[0x87F660] = 0; /*0x40bddc*/
  MEMORY[0x87F664] = 1; /*0x40bde1*/
  MEMORY[0x87F665] = 0; /*0x40bde8*/
  MEMORY[0x87F658] = (int)&DynamicVectorClass<CommandClass const *>::`vftable'; /*0x40bded*/
  MEMORY[0x87F66C] = 10; /*0x40bdf7*/
  MEMORY[0x87F668] = 0; /*0x40be01*/
  return atexit(EventClass::finalizeEvent); /*0x40be0c*/
}
}
} // namespace gamemd

// 0x40C1B0
namespace gamemd {
int sub_40C1B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40C1B0()
{
  MEMORY[0x87F69C] = 0; /*0x40c1b7*/
  MEMORY[0x87F6A0] = 0; /*0x40c1bc*/
  MEMORY[0x87F6A4] = 1; /*0x40c1c1*/
  MEMORY[0x87F6A5] = 0; /*0x40c1c8*/
  MEMORY[0x87F698] = (int)&DynamicVectorClass<LightConvertClass *>::`vftable'; /*0x40c1cd*/
  MEMORY[0x87F6AC] = 10; /*0x40c1d7*/
  MEMORY[0x87F6A8] = 0; /*0x40c1e1*/
  return atexit(sub_40C1F0); /*0x40c1ec*/
}
}
} // namespace gamemd

// 0x40C1F0
namespace gamemd {
void sub_40C1F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40C1F0()
{
  MEMORY[0x87F698] = (int)&VectorClass<LightConvertClass *>::`vftable'; /*0x40c1f8*/
  if ( MEMORY[0x87F69C] && MEMORY[0x87F6A5] ) /*0x40c20c*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F69C]); /*0x40c20f*/
    MEMORY[0x87F69C] = 0; /*0x40c217*/
  }
  MEMORY[0x87F6A5] = 0; /*0x40c21d*/
  MEMORY[0x87F6A0] = 0; /*0x40c223*/
}
}
} // namespace gamemd

// 0x40C5C0
namespace gamemd {
void sub_40C5C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40C5C0()
{
  MEMORY[0x87F748] = MEMORY[0x87F6F8] / 60.0; /*0x40c5cc*/
}
}
} // namespace gamemd

// 0x40C5E0
namespace gamemd {
void sub_40C5E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40C5E0()
{
  MEMORY[0x87F730] = 1.0 / MEMORY[0x87F748]; /*0x40c5ec*/
}
}
} // namespace gamemd

// 0x40C600
namespace gamemd {
void sub_40C600()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40C600()
{
  MEMORY[0x87F728] = 0.0174532925199433 * 45.0; /*0x40c60c*/
}
}
} // namespace gamemd

// 0x40C620
namespace gamemd {
void sub_40C620()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40C620()
{
  MEMORY[0x87F700] = 0.0174532925199433 * 60.0; /*0x40c62c*/
}
}
} // namespace gamemd

// 0x40C640
namespace gamemd {
void sub_40C640()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40C640()
{
  MEMORY[0x87F6D8] = 0.0174532925199433 * 90.0; /*0x40c64c*/
}
}
} // namespace gamemd

// 0x40C660
namespace gamemd {
long long sub_40C660()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40C660()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x87F6D8] - MEMORY[0x87F700]); /*0x40c672*/
  result = Math::RoundToInt(v0 * MEMORY[0x87F6F8] * 0.5); /*0x40c686*/
  MEMORY[0x87F768] = result; /*0x40c68b*/
  return result; /*0x40c690*/
}
}
} // namespace gamemd

// 0x40C6A0
namespace gamemd {
void sub_40C6A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40C6A0()
{
  MEMORY[0x87F708] = Math::ArcTan((double)MEMORY[0x87F768] * 0.00390625); /*0x40c6b7*/
}
}
} // namespace gamemd

// 0x40C6D0
namespace gamemd {
void sub_40C6D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40C6D0()
{
  MEMORY[0x87F720] = Math::ArcTan((double)(2 * MEMORY[0x87F768]) / MEMORY[0x87F6F8]); /*0x40c6f2*/
}
}
} // namespace gamemd

// 0x40C700
namespace gamemd {
long long sub_40C700()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40C700()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x87F768]) + 0.5); /*0x40c71b*/
  MEMORY[0x87F744] = result; /*0x40c720*/
  return result; /*0x40c726*/
}
}
} // namespace gamemd

// 0x40C730
namespace gamemd {
int sub_40C730()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40C730()
{
  MEMORY[0x87F6F0] = 0; /*0x40c732*/
  MEMORY[0x87F6F2] = 0; /*0x40c738*/
  return 0; /*0x40c73e*/
}
}
} // namespace gamemd

// 0x40C740
namespace gamemd {
int sub_40C740()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40C740()
{
  MEMORY[0x87F710] = 0; /*0x40c742*/
  MEMORY[0x87F714] = 0; /*0x40c747*/
  MEMORY[0x87F718] = 0; /*0x40c74c*/
  return 0; /*0x40c751*/
}
}
} // namespace gamemd

// 0x40C760
namespace gamemd {
int sub_40C760()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40C760()
{
  MEMORY[0x87F740] = 0; /*0x40c765*/
  MEMORY[0x87F738] = 128; /*0x40c76f*/
  MEMORY[0x87F73C] = 128; /*0x40c774*/
  return 128; /*0x40c779*/
}
}
} // namespace gamemd

// 0x40C780
namespace gamemd {
int sub_40C780()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40C780()
{
  MEMORY[0x87F6E0] = 0; /*0x40c782*/
  MEMORY[0x87F6E4] = 0; /*0x40c787*/
  MEMORY[0x87F6E8] = 0; /*0x40c78c*/
  MEMORY[0x87F6EC] = 0; /*0x40c791*/
  return 0; /*0x40c796*/
}
}
} // namespace gamemd

// 0x40C7A0
namespace gamemd {
int sub_40C7A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40C7A0()
{
  MEMORY[0x87F754] = 0; /*0x40c7a7*/
  MEMORY[0x87F758] = 0; /*0x40c7ac*/
  MEMORY[0x87F75C] = 1; /*0x40c7b1*/
  MEMORY[0x87F75D] = 0; /*0x40c7b8*/
  MEMORY[0x87F750] = (int)&DynamicVectorClass<IsometricTileClass *>::`vftable'; /*0x40c7bd*/
  MEMORY[0x87F764] = 10; /*0x40c7c7*/
  MEMORY[0x87F760] = 0; /*0x40c7d1*/
  return atexit(sub_40C7E0); /*0x40c7dc*/
}
}
} // namespace gamemd

// 0x40C7E0
namespace gamemd {
void sub_40C7E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40C7E0()
{
  MEMORY[0x87F750] = (int)&VectorClass<IsometricTileClass *>::`vftable'; /*0x40c7e8*/
  if ( MEMORY[0x87F754] && MEMORY[0x87F75D] ) /*0x40c7fc*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F754]); /*0x40c7ff*/
    MEMORY[0x87F754] = 0; /*0x40c807*/
  }
  MEMORY[0x87F75D] = 0; /*0x40c80d*/
  MEMORY[0x87F758] = 0; /*0x40c813*/
}
}
} // namespace gamemd

// 0x40CB80
namespace gamemd {
int sub_40CB80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40CB80()
{
  MEMORY[0x87F77C] = 0; /*0x40cb87*/
  MEMORY[0x87F780] = 0; /*0x40cb8c*/
  MEMORY[0x87F784] = 1; /*0x40cb91*/
  MEMORY[0x87F785] = 0; /*0x40cb98*/
  MEMORY[0x87F78C] = 10; /*0x40cb9d*/
  MEMORY[0x87F788] = 0; /*0x40cba7*/
  MEMORY[0x87F778] = (int)&LogicClass::`vftable'; /*0x40cbac*/
  return atexit(sub_40CBC0); /*0x40cbbc*/
}
}
} // namespace gamemd

// 0x40CBC0
namespace gamemd {
void sub_40CBC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40CBC0()
{
  MEMORY[0x87F778] = (int)&VectorClass<ObjectClass *>::`vftable'; /*0x40cbc8*/
  if ( MEMORY[0x87F77C] && MEMORY[0x87F785] ) /*0x40cbdc*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F77C]); /*0x40cbdf*/
    MEMORY[0x87F77C] = 0; /*0x40cbe7*/
  }
  MEMORY[0x87F785] = 0; /*0x40cbed*/
  MEMORY[0x87F780] = 0; /*0x40cbf3*/
}
}
} // namespace gamemd

// 0x40CF80
namespace gamemd {
int sub_40CF80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40CF80()
{
  MEMORY[0x87F798] = 0; /*0x40cf82*/
  MEMORY[0x87F79C] = 0; /*0x40cf87*/
  MEMORY[0x87F7A0] = 0; /*0x40cf8c*/
  MEMORY[0x87F7A4] = 0; /*0x40cf91*/
  return 0; /*0x40cf96*/
}
}
} // namespace gamemd

// 0x40CFA0
namespace gamemd {
void sub_40CFA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40CFA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40cfac*/
  MEMORY[0x87F7B0] = Math::Sqrt(v0 + v0); /*0x40cfbe*/
}
}
} // namespace gamemd

// 0x40CFD0
namespace gamemd {
void sub_40CFD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40CFD0()
{
  MEMORY[0x884D78] = MEMORY[0x87F7B0] / 60.0; /*0x40cfdc*/
}
}
} // namespace gamemd

// 0x40CFF0
namespace gamemd {
void sub_40CFF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40CFF0()
{
  MEMORY[0x884D60] = 1.0 / MEMORY[0x884D78]; /*0x40cffc*/
}
}
} // namespace gamemd

// 0x40D010
namespace gamemd {
void sub_40D010()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40D010()
{
  MEMORY[0x884D58] = 0.0174532925199433 * 45.0; /*0x40d01c*/
}
}
} // namespace gamemd

// 0x40D030
namespace gamemd {
void sub_40D030()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40D030()
{
  MEMORY[0x87F7C0] = 0.0174532925199433 * 60.0; /*0x40d03c*/
}
}
} // namespace gamemd

// 0x40D050
namespace gamemd {
void sub_40D050()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40D050()
{
  MEMORY[0x87F790] = 0.0174532925199433 * 90.0; /*0x40d05c*/
}
}
} // namespace gamemd

// 0x40D070
namespace gamemd {
long long sub_40D070()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40D070()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x87F790] - MEMORY[0x87F7C0]); /*0x40d082*/
  result = Math::RoundToInt(v0 * MEMORY[0x87F7B0] * 0.5); /*0x40d096*/
  MEMORY[0x884D80] = result; /*0x40d09b*/
  return result; /*0x40d0a0*/
}
}
} // namespace gamemd

// 0x40D0B0
namespace gamemd {
void sub_40D0B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40D0B0()
{
  MEMORY[0x87F7C8] = Math::ArcTan((double)MEMORY[0x884D80] * 0.00390625); /*0x40d0c7*/
}
}
} // namespace gamemd

// 0x40D0E0
namespace gamemd {
void sub_40D0E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40D0E0()
{
  MEMORY[0x87F7E0] = Math::ArcTan((double)(2 * MEMORY[0x884D80]) / MEMORY[0x87F7B0]); /*0x40d102*/
}
}
} // namespace gamemd

// 0x40D110
namespace gamemd {
long long sub_40D110()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40D110()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x884D80]) + 0.5); /*0x40d12b*/
  MEMORY[0x884D74] = result; /*0x40d130*/
  return result; /*0x40d136*/
}
}
} // namespace gamemd

// 0x40D140
namespace gamemd {
int sub_40D140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40D140()
{
  MEMORY[0x87F7A8] = 0; /*0x40d142*/
  MEMORY[0x87F7AA] = 0; /*0x40d148*/
  return 0; /*0x40d14e*/
}
}
} // namespace gamemd

// 0x40D150
namespace gamemd {
int sub_40D150()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40D150()
{
  MEMORY[0x87F7D0] = 0; /*0x40d152*/
  MEMORY[0x87F7D4] = 0; /*0x40d157*/
  MEMORY[0x87F7D8] = 0; /*0x40d15c*/
  return 0; /*0x40d161*/
}
}
} // namespace gamemd

// 0x40D170
namespace gamemd {
int sub_40D170()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40D170()
{
  MEMORY[0x884D70] = 0; /*0x40d175*/
  MEMORY[0x884D68] = 128; /*0x40d17f*/
  MEMORY[0x884D6C] = 128; /*0x40d184*/
  return 128; /*0x40d189*/
}
}
} // namespace gamemd

// 0x40D190
namespace gamemd {
int sub_40D190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40D190()
{
  sub_5BDA40(&MEMORY[0x87F7E8]); /*0x40d195*/
  return atexit(SmallFunc_40D1B0); /*0x40d1a5*/
}
}
} // namespace gamemd

// 0x40D200
namespace gamemd {
int sub_40D200()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40D200()
{
  MEMORY[0x87F7B8] = 0; /*0x40d205*/
  return atexit(sub_40D220); /*0x40d215*/
}
}
} // namespace gamemd

// 0x40D220
namespace gamemd {
void sub_40D220()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40D220()
{
  if ( MEMORY[0x87F7B8] ) /*0x40d227*/
    (*(void (__stdcall **)(int))(*(_DWORD *)MEMORY[0x87F7B8] + 8))(MEMORY[0x87F7B8]); /*0x40d22c*/
}
}
} // namespace gamemd

// 0x40D310
namespace gamemd {
int sub_40D310()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40D310()
{
  sub_5B1D90(&MEMORY[0x884D88]); /*0x40d315*/
  return atexit(unknown_libname_3); /*0x40d325*/
}
}
} // namespace gamemd

// 0x40D330
namespace gamemd {
int unknown_libname_3()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_3()
{
  if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[16968] || *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[16972] != 1072693248 ) /*0x5b1e2c*/
    timeEndPeriod(1u); /*0x5b1e30*/
}
}
} // namespace gamemd

// 0x40D340
namespace gamemd {
int sub_40D340()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40D340()
{
  MEMORY[0x884D94] = 0; /*0x40d347*/
  MEMORY[0x884D98] = 0; /*0x40d34c*/
  MEMORY[0x884D9C] = 1; /*0x40d351*/
  MEMORY[0x884D9D] = 0; /*0x40d358*/
  MEMORY[0x884D90] = (int)&DynamicVectorClass<MixFileClass *>::`vftable'; /*0x40d35d*/
  MEMORY[0x884DA4] = 10; /*0x40d367*/
  MEMORY[0x884DA0] = 0; /*0x40d371*/
  return atexit(sub_40D380); /*0x40d37c*/
}
}
} // namespace gamemd

// 0x40D380
namespace gamemd {
void sub_40D380()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40D380()
{
  MEMORY[0x884D90] = (int)&VectorClass<MixFileClass *>::`vftable'; /*0x40d388*/
  if ( MEMORY[0x884D94] && MEMORY[0x884D9D] ) /*0x40d39c*/
  {
    __3_YAXPAX_Z(MEMORY[0x884D94]); /*0x40d39f*/
    MEMORY[0x884D94] = 0; /*0x40d3a7*/
  }
  MEMORY[0x884D9D] = 0; /*0x40d3ad*/
  MEMORY[0x884D98] = 0; /*0x40d3b3*/
}
}
} // namespace gamemd

// 0x40D3C0
namespace gamemd {
int sub_40D3C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40D3C0()
{
  MEMORY[0x884DC4] = 0; /*0x40d3c7*/
  MEMORY[0x884DC8] = 0; /*0x40d3cc*/
  MEMORY[0x884DCC] = 1; /*0x40d3d1*/
  MEMORY[0x884DCD] = 0; /*0x40d3d8*/
  MEMORY[0x884DC0] = (int)&DynamicVectorClass<MixFileClass *>::`vftable'; /*0x40d3dd*/
  MEMORY[0x884DD4] = 10; /*0x40d3e7*/
  MEMORY[0x884DD0] = 0; /*0x40d3f1*/
  return atexit(sub_40D400); /*0x40d3fc*/
}
}
} // namespace gamemd

// 0x40D400
namespace gamemd {
void sub_40D400()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40D400()
{
  MEMORY[0x884DC0] = (int)&VectorClass<MixFileClass *>::`vftable'; /*0x40d408*/
  if ( MEMORY[0x884DC4] && MEMORY[0x884DCD] ) /*0x40d41c*/
  {
    __3_YAXPAX_Z(MEMORY[0x884DC4]); /*0x40d41f*/
    MEMORY[0x884DC4] = 0; /*0x40d427*/
  }
  MEMORY[0x884DCD] = 0; /*0x40d42d*/
  MEMORY[0x884DC8] = 0; /*0x40d433*/
}
}
} // namespace gamemd

// 0x40D440
namespace gamemd {
int sub_40D440()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40D440()
{
  MEMORY[0x884DAC] = 0; /*0x40d447*/
  MEMORY[0x884DB0] = 0; /*0x40d44c*/
  MEMORY[0x884DB4] = 1; /*0x40d451*/
  MEMORY[0x884DB5] = 0; /*0x40d458*/
  MEMORY[0x884DA8] = (int)&DynamicVectorClass<MixFileClass *>::`vftable'; /*0x40d45d*/
  MEMORY[0x884DBC] = 10; /*0x40d467*/
  MEMORY[0x884DB8] = 0; /*0x40d471*/
  return atexit(sub_40D480); /*0x40d47c*/
}
}
} // namespace gamemd

// 0x40D480
namespace gamemd {
void sub_40D480()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40D480()
{
  MEMORY[0x884DA8] = (int)&VectorClass<MixFileClass *>::`vftable'; /*0x40d488*/
  if ( MEMORY[0x884DAC] && MEMORY[0x884DB5] ) /*0x40d49c*/
  {
    __3_YAXPAX_Z(MEMORY[0x884DAC]); /*0x40d49f*/
    MEMORY[0x884DAC] = 0; /*0x40d4a7*/
  }
  MEMORY[0x884DB5] = 0; /*0x40d4ad*/
  MEMORY[0x884DB0] = 0; /*0x40d4b3*/
}
}
} // namespace gamemd

// 0x40D4C0
namespace gamemd {
int sub_40D4C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40D4C0()
{
  MEMORY[0x884DE4] = 0; /*0x40d4c7*/
  MEMORY[0x884DE8] = 0; /*0x40d4cc*/
  MEMORY[0x884DEC] = 1; /*0x40d4d1*/
  MEMORY[0x884DED] = 0; /*0x40d4d8*/
  MEMORY[0x884DE0] = (int)&DynamicVectorClass<MixFileClass *>::`vftable'; /*0x40d4dd*/
  MEMORY[0x884DF4] = 10; /*0x40d4e7*/
  MEMORY[0x884DF0] = 0; /*0x40d4f1*/
  return atexit(sub_40D500); /*0x40d4fc*/
}
}
} // namespace gamemd

// 0x40D500
namespace gamemd {
void sub_40D500()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40D500()
{
  MEMORY[0x884DE0] = (int)&VectorClass<MixFileClass *>::`vftable'; /*0x40d508*/
  if ( MEMORY[0x884DE4] && MEMORY[0x884DED] ) /*0x40d51c*/
  {
    __3_YAXPAX_Z(MEMORY[0x884DE4]); /*0x40d51f*/
    MEMORY[0x884DE4] = 0; /*0x40d527*/
  }
  MEMORY[0x884DED] = 0; /*0x40d52d*/
  MEMORY[0x884DE8] = 0; /*0x40d533*/
}
}
} // namespace gamemd

// 0x40D8A0
namespace gamemd {
unsigned char * sub_40D8A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *sub_40D8A0()
{
  _BYTE *result; // eax
  int v1; // ecx

  result = &MEMORY[0x886082]; /*0x40d8a0*/
  v1 = 256; /*0x40d8a5*/
  do /*0x40d8b8*/
  {
    *(result - 2) = 0; /*0x40d8ac*/
    *(result - 1) = 0; /*0x40d8af*/
    *result = 0; /*0x40d8b2*/
    result += 3; /*0x40d8b4*/
    --v1; /*0x40d8b7*/
  }
  while ( v1 ); /*0x40d8b8*/
  return result; /*0x40d8ba*/
}
}
} // namespace gamemd

// 0x40D8C0
namespace gamemd {
char * sub_40D8C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *sub_40D8C0()
{
  char *result; // eax
  int v1; // ecx

  result = MEMORY[0x885782]; /*0x40d8c0*/
  v1 = 256; /*0x40d8c5*/
  do /*0x40d8d8*/
  {
    *(result - 2) = 0; /*0x40d8cc*/
    *(result - 1) = 0; /*0x40d8cf*/
    *result = 0; /*0x40d8d2*/
    result += 3; /*0x40d8d4*/
    --v1; /*0x40d8d7*/
  }
  while ( v1 ); /*0x40d8d8*/
  return result; /*0x40d8da*/
}
}
} // namespace gamemd

// 0x40D8E0
namespace gamemd {
char * sub_40D8E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *sub_40D8E0()
{
  char *result; // eax
  int v1; // ecx

  result = MEMORY[0x886382]; /*0x40d8e0*/
  v1 = 256; /*0x40d8e5*/
  do /*0x40d8f8*/
  {
    *(result - 2) = 0; /*0x40d8ec*/
    *(result - 1) = 0; /*0x40d8ef*/
    *result = 0; /*0x40d8f2*/
    result += 3; /*0x40d8f4*/
    --v1; /*0x40d8f7*/
  }
  while ( v1 ); /*0x40d8f8*/
  return result; /*0x40d8fa*/
}
}
} // namespace gamemd

// 0x40D900
namespace gamemd {
char * sub_40D900(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall sub_40D900(int a1)
{
  _BYTE v2[4]; // [esp+0h] [ebp-4h] BYREF

  v2[3] = HIBYTE(a1); /*0x40d900*/
  v2[0] = 0; /*0x40d908*/
  v2[1] = 0; /*0x40d90c*/
  v2[2] = 0; /*0x40d910*/
  return sub_626020((char *)&MEMORY[0x884E80], (int)v2); /*0x40d91f*/
}
}
} // namespace gamemd

// 0x40D920
namespace gamemd {
char * sub_40D920(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall sub_40D920(int a1)
{
  _BYTE v2[4]; // [esp+0h] [ebp-4h] BYREF

  v2[3] = HIBYTE(a1); /*0x40d920*/
  v2[0] = -1; /*0x40d928*/
  v2[1] = -1; /*0x40d92c*/
  v2[2] = -1; /*0x40d930*/
  return sub_626020((char *)&MEMORY[0x885D80], (int)v2); /*0x40d93f*/
}
}
} // namespace gamemd

// 0x40D940
namespace gamemd {
unsigned char * sub_40D940()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *sub_40D940()
{
  _BYTE *result; // eax
  int v1; // ecx

  result = &MEMORY[0x885A82]; /*0x40d940*/
  v1 = 256; /*0x40d945*/
  do /*0x40d958*/
  {
    *(result - 2) = 0; /*0x40d94c*/
    *(result - 1) = 0; /*0x40d94f*/
    *result = 0; /*0x40d952*/
    result += 3; /*0x40d954*/
    --v1; /*0x40d957*/
  }
  while ( v1 ); /*0x40d958*/
  return result; /*0x40d95a*/
}
}
} // namespace gamemd

// 0x40D960
namespace gamemd {
unsigned char * sub_40D960()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *sub_40D960()
{
  _BYTE *result; // eax
  int v1; // ecx

  result = &MEMORY[0x885482]; /*0x40d960*/
  v1 = 256; /*0x40d965*/
  do /*0x40d978*/
  {
    *(result - 2) = 0; /*0x40d96c*/
    *(result - 1) = 0; /*0x40d96f*/
    *result = 0; /*0x40d972*/
    result += 3; /*0x40d974*/
    --v1; /*0x40d977*/
  }
  while ( v1 ); /*0x40d978*/
  return result; /*0x40d97a*/
}
}
} // namespace gamemd

// 0x40D980
namespace gamemd {
unsigned char * sub_40D980()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *sub_40D980()
{
  _BYTE *result; // eax
  int v1; // ecx

  result = &MEMORY[0x886682]; /*0x40d980*/
  v1 = 256; /*0x40d985*/
  do /*0x40d998*/
  {
    *(result - 2) = 0; /*0x40d98c*/
    *(result - 1) = 0; /*0x40d98f*/
    *result = 0; /*0x40d992*/
    result += 3; /*0x40d994*/
    --v1; /*0x40d997*/
  }
  while ( v1 ); /*0x40d998*/
  return result; /*0x40d99a*/
}
}
} // namespace gamemd

// 0x40D9A0
namespace gamemd {
char * sub_40D9A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *sub_40D9A0()
{
  char *result; // eax
  int v1; // ecx

  result = MEMORY[0x885182]; /*0x40d9a0*/
  v1 = 256; /*0x40d9a5*/
  do /*0x40d9b8*/
  {
    *(result - 2) = 0; /*0x40d9ac*/
    *(result - 1) = 0; /*0x40d9af*/
    *result = 0; /*0x40d9b2*/
    result += 3; /*0x40d9b4*/
    --v1; /*0x40d9b7*/
  }
  while ( v1 ); /*0x40d9b8*/
  return result; /*0x40d9ba*/
}
}
} // namespace gamemd

// 0x40D9C0
namespace gamemd {
int sub_40D9C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40D9C0()
{
  int result; // eax

  InitArrayWithValue(MEMORY[0x886980], 0, 64); /*0x40d9c9*/
  result = InitArrayWithValue(MEMORY[0x886A80], 0, 64); /*0x40d9d7*/
  MEMORY[0x886B80] = 0; /*0x40d9dc*/
  return result; /*0x40d9e6*/
}
}
} // namespace gamemd

// 0x40D9F0
namespace gamemd {
int unknown_libname_4()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
_DWORD *unknown_libname_4()
{
  return SeedInitRNG(&MEMORY[0x87F8E4].__pad_5568[7484], 0); /*0x40d9fc*/
}
}
} // namespace gamemd

// 0x40DA00
namespace gamemd {
int sub_40DA00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40DA00()
{
  MEMORY[0x886F80] = 0; /*0x40da02*/
  MEMORY[0x886F84] = 0; /*0x40da07*/
  MEMORY[0x886F88] = 0; /*0x40da0c*/
  MEMORY[0x886F8C] = 0; /*0x40da11*/
  return 0; /*0x40da16*/
}
}
} // namespace gamemd

// 0x40DA20
namespace gamemd {
int sub_40DA20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40DA20()
{
  MEMORY[0x886FA8] = 640; /*0x40da22*/
  MEMORY[0x886FA0] = 0; /*0x40da2c*/
  MEMORY[0x886FA4] = 0; /*0x40da31*/
  MEMORY[0x886FAC] = 400; /*0x40da36*/
  return 0; /*0x40da40*/
}
}
} // namespace gamemd

// 0x40DA50
namespace gamemd {
int sub_40DA50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40DA50()
{
  MEMORY[0x886FB8] = 640; /*0x40da52*/
  MEMORY[0x886FB0] = 0; /*0x40da5c*/
  MEMORY[0x886FB4] = 0; /*0x40da61*/
  MEMORY[0x886FBC] = 400; /*0x40da66*/
  return 0; /*0x40da70*/
}
}
} // namespace gamemd

// 0x40DA80
namespace gamemd {
int sub_40DA80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40DA80()
{
  MEMORY[0x886F90] = 0; /*0x40da82*/
  MEMORY[0x886F94] = 0; /*0x40da87*/
  MEMORY[0x886F98] = 0; /*0x40da8c*/
  MEMORY[0x886F9C] = 0; /*0x40da91*/
  return 0; /*0x40da96*/
}
}
} // namespace gamemd

// 0x40DAA0
namespace gamemd {
void sub_40DAA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DAA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40daac*/
  MEMORY[0x886FE0] = Math::Sqrt(v0 + v0); /*0x40dabe*/
}
}
} // namespace gamemd

// 0x40DAD0
namespace gamemd {
void sub_40DAD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DAD0()
{
  MEMORY[0x887030] = MEMORY[0x886FE0] / 60.0; /*0x40dadc*/
}
}
} // namespace gamemd

// 0x40DAF0
namespace gamemd {
void sub_40DAF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DAF0()
{
  MEMORY[0x887018] = 1.0 / MEMORY[0x887030]; /*0x40dafc*/
}
}
} // namespace gamemd

// 0x40DB10
namespace gamemd {
void sub_40DB10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DB10()
{
  MEMORY[0x887010] = 0.0174532925199433 * 45.0; /*0x40db1c*/
}
}
} // namespace gamemd

// 0x40DB30
namespace gamemd {
void sub_40DB30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DB30()
{
  MEMORY[0x886FE8] = 0.0174532925199433 * 60.0; /*0x40db3c*/
}
}
} // namespace gamemd

// 0x40DB50
namespace gamemd {
void sub_40DB50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DB50()
{
  MEMORY[0x886FC0] = 0.0174532925199433 * 90.0; /*0x40db5c*/
}
}
} // namespace gamemd

// 0x40DB70
namespace gamemd {
long long sub_40DB70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40DB70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x886FC0] - MEMORY[0x886FE8]); /*0x40db82*/
  result = Math::RoundToInt(v0 * MEMORY[0x886FE0] * 0.5); /*0x40db96*/
  MEMORY[0x887038] = result; /*0x40db9b*/
  return result; /*0x40dba0*/
}
}
} // namespace gamemd

// 0x40DBB0
namespace gamemd {
void sub_40DBB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DBB0()
{
  MEMORY[0x886FF0] = Math::ArcTan((double)MEMORY[0x887038] * 0.00390625); /*0x40dbc7*/
}
}
} // namespace gamemd

// 0x40DBE0
namespace gamemd {
void sub_40DBE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DBE0()
{
  MEMORY[0x887008] = Math::ArcTan((double)(2 * MEMORY[0x887038]) / MEMORY[0x886FE0]); /*0x40dc02*/
}
}
} // namespace gamemd

// 0x40DC10
namespace gamemd {
long long sub_40DC10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40DC10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x887038]) + 0.5); /*0x40dc2b*/
  MEMORY[0x88702C] = result; /*0x40dc30*/
  return result; /*0x40dc36*/
}
}
} // namespace gamemd

// 0x40DC40
namespace gamemd {
int sub_40DC40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40DC40()
{
  MEMORY[0x886FD8] = 0; /*0x40dc42*/
  MEMORY[0x886FDA] = 0; /*0x40dc48*/
  return 0; /*0x40dc4e*/
}
}
} // namespace gamemd

// 0x40DC50
namespace gamemd {
int sub_40DC50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40DC50()
{
  MEMORY[0x886FF8] = 0; /*0x40dc52*/
  MEMORY[0x886FFC] = 0; /*0x40dc57*/
  MEMORY[0x887000] = 0; /*0x40dc5c*/
  return 0; /*0x40dc61*/
}
}
} // namespace gamemd

// 0x40DC70
namespace gamemd {
int sub_40DC70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40DC70()
{
  MEMORY[0x887028] = 0; /*0x40dc75*/
  MEMORY[0x887020] = 128; /*0x40dc7f*/
  MEMORY[0x887024] = 128; /*0x40dc84*/
  return 128; /*0x40dc89*/
}
}
} // namespace gamemd

// 0x40DC90
namespace gamemd {
int sub_40DC90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40DC90()
{
  MEMORY[0x886FC8] = 0; /*0x40dc92*/
  MEMORY[0x886FCC] = 0; /*0x40dc97*/
  MEMORY[0x886FD0] = 0; /*0x40dc9c*/
  MEMORY[0x886FD4] = 0; /*0x40dca1*/
  return 0; /*0x40dca6*/
}
}
} // namespace gamemd

// 0x40DDC0
namespace gamemd {
void sub_40DDC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DDC0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40ddcc*/
  MEMORY[0x887050] = Math::Sqrt(v0 + v0); /*0x40ddde*/
}
}
} // namespace gamemd

// 0x40DDF0
namespace gamemd {
void sub_40DDF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DDF0()
{
  MEMORY[0x887268] = MEMORY[0x887050] / 60.0; /*0x40ddfc*/
}
}
} // namespace gamemd

// 0x40DE10
namespace gamemd {
void sub_40DE10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DE10()
{
  MEMORY[0x8871F0] = 1.0 / MEMORY[0x887268]; /*0x40de1c*/
}
}
} // namespace gamemd

// 0x40DE30
namespace gamemd {
void sub_40DE30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DE30()
{
  MEMORY[0x8871E8] = 0.0174532925199433 * 45.0; /*0x40de3c*/
}
}
} // namespace gamemd

// 0x40DE50
namespace gamemd {
void sub_40DE50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DE50()
{
  MEMORY[0x8870B0] = 0.0174532925199433 * 60.0; /*0x40de5c*/
}
}
} // namespace gamemd

// 0x40DE70
namespace gamemd {
void sub_40DE70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DE70()
{
  MEMORY[0x887040] = 0.0174532925199433 * 90.0; /*0x40de7c*/
}
}
} // namespace gamemd

// 0x40DE90
namespace gamemd {
long long sub_40DE90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40DE90()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x887040] - MEMORY[0x8870B0]); /*0x40dea2*/
  result = Math::RoundToInt(v0 * MEMORY[0x887050] * 0.5); /*0x40deb6*/
  MEMORY[0x887270] = result; /*0x40debb*/
  return result; /*0x40dec0*/
}
}
} // namespace gamemd

// 0x40DED0
namespace gamemd {
void sub_40DED0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DED0()
{
  MEMORY[0x8870B8] = Math::ArcTan((double)MEMORY[0x887270] * 0.00390625); /*0x40dee7*/
}
}
} // namespace gamemd

// 0x40DF00
namespace gamemd {
void sub_40DF00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40DF00()
{
  MEMORY[0x8871D8] = Math::ArcTan((double)(2 * MEMORY[0x887270]) / MEMORY[0x887050]); /*0x40df22*/
}
}
} // namespace gamemd

// 0x40DF30
namespace gamemd {
long long sub_40DF30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40DF30()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x887270]) + 0.5); /*0x40df4b*/
  MEMORY[0x887260] = result; /*0x40df50*/
  return result; /*0x40df56*/
}
}
} // namespace gamemd

// 0x40DF60
namespace gamemd {
int sub_40DF60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40DF60()
{
  MEMORY[0x88704C] = 0; /*0x40df62*/
  MEMORY[0x88704E] = 0; /*0x40df68*/
  return 0; /*0x40df6e*/
}
}
} // namespace gamemd

// 0x40DF70
namespace gamemd {
int sub_40DF70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40DF70()
{
  MEMORY[0x887118] = 0; /*0x40df72*/
  MEMORY[0x88711C] = 0; /*0x40df77*/
  MEMORY[0x887120] = 0; /*0x40df7c*/
  return 0; /*0x40df81*/
}
}
} // namespace gamemd

// 0x40DF90
namespace gamemd {
int sub_40DF90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40DF90()
{
  MEMORY[0x887200] = 0; /*0x40df95*/
  MEMORY[0x8871F8] = 128; /*0x40df9f*/
  MEMORY[0x8871FC] = 128; /*0x40dfa4*/
  return 128; /*0x40dfa9*/
}
}
} // namespace gamemd

// 0x40DFB0
namespace gamemd {
int sub_40DFB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40DFB0()
{
  MEMORY[0x887184] = 0; /*0x40dfb8*/
  MEMORY[0x887188] = 0; /*0x40dfbe*/
  MEMORY[0x887194] = 0; /*0x40dfc4*/
  MEMORY[0x887198] = 0; /*0x40dfca*/
  MEMORY[0x887190] = (int)&GenericNode::`vftable'; /*0x40dfd0*/
  GenericNode::Constructor(MEMORY[0x88719C]); /*0x40dfda*/
  MEMORY[0x88718C] = (int)&GenericList::`vftable'; /*0x40dfe9*/
  LinkedList::Prepend(&MEMORY[0x887190], (int)MEMORY[0x88719C]); /*0x40dff3*/
  MEMORY[0x88718C] = (int)&List<INIClass::INISection *>::`vftable'; /*0x40dffd*/
  MEMORY[0x8871A8] = 0; /*0x40e007*/
  MEMORY[0x8871AC] = 0; /*0x40e00d*/
  MEMORY[0x8871B0] = 0; /*0x40e013*/
  MEMORY[0x8871B4] = 0; /*0x40e019*/
  MEMORY[0x8871B8] = 0; /*0x40e01f*/
  MEMORY[0x8871BC] = 0; /*0x40e025*/
  MEMORY[0x8871C0] = 0; /*0x40e02b*/
  MEMORY[0x887180] = (int)&CCINIClass_Vtable; /*0x40e031*/
  return atexit(unknown_libname_5); /*0x40e043*/
}
}
} // namespace gamemd

// 0x40E050
namespace gamemd {
int unknown_libname_5()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_5()
{
  HashTable::DestroyHashTableINIClass((void **)&MEMORY[0x887180]); /*0x40e055*/
}
}
} // namespace gamemd

// 0x40E060
namespace gamemd {
int sub_40E060()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40E060()
{
  MEMORY[0x88720C] = 0; /*0x40e068*/
  MEMORY[0x887210] = 0; /*0x40e06e*/
  MEMORY[0x88721C] = 0; /*0x40e074*/
  MEMORY[0x887220] = 0; /*0x40e07a*/
  MEMORY[0x887218] = (int)&GenericNode::`vftable'; /*0x40e080*/
  GenericNode::Constructor(MEMORY[0x887224]); /*0x40e08a*/
  MEMORY[0x887214] = (int)&GenericList::`vftable'; /*0x40e099*/
  LinkedList::Prepend(&MEMORY[0x887218], (int)MEMORY[0x887224]); /*0x40e0a3*/
  MEMORY[0x887214] = (int)&List<INIClass::INISection *>::`vftable'; /*0x40e0ad*/
  MEMORY[0x887230] = 0; /*0x40e0b7*/
  MEMORY[0x887234] = 0; /*0x40e0bd*/
  MEMORY[0x887238] = 0; /*0x40e0c3*/
  MEMORY[0x88723C] = 0; /*0x40e0c9*/
  MEMORY[0x887240] = 0; /*0x40e0cf*/
  MEMORY[0x887244] = 0; /*0x40e0d5*/
  MEMORY[0x887248] = 0; /*0x40e0db*/
  MEMORY[0x887208] = (int)&CCINIClass_Vtable; /*0x40e0e1*/
  return atexit(unknown_libname_6); /*0x40e0f3*/
}
}
} // namespace gamemd

// 0x40E100
namespace gamemd {
int unknown_libname_6()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_6()
{
  HashTable::DestroyHashTableINIClass((void **)&MEMORY[0x887208]); /*0x40e105*/
}
}
} // namespace gamemd

// 0x40E110
namespace gamemd {
int sub_40E110()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40E110()
{
  MEMORY[0x88712C] = 0; /*0x40e118*/
  MEMORY[0x887130] = 0; /*0x40e11e*/
  MEMORY[0x88713C] = 0; /*0x40e124*/
  MEMORY[0x887140] = 0; /*0x40e12a*/
  MEMORY[0x887138] = (int)&GenericNode::`vftable'; /*0x40e130*/
  GenericNode::Constructor(MEMORY[0x887144]); /*0x40e13a*/
  MEMORY[0x887134] = (int)&GenericList::`vftable'; /*0x40e149*/
  LinkedList::Prepend(&MEMORY[0x887138], (int)MEMORY[0x887144]); /*0x40e153*/
  MEMORY[0x887134] = (int)&List<INIClass::INISection *>::`vftable'; /*0x40e15d*/
  MEMORY[0x887150] = 0; /*0x40e167*/
  MEMORY[0x887154] = 0; /*0x40e16d*/
  MEMORY[0x887158] = 0; /*0x40e173*/
  MEMORY[0x88715C] = 0; /*0x40e179*/
  MEMORY[0x887160] = 0; /*0x40e17f*/
  MEMORY[0x887164] = 0; /*0x40e185*/
  MEMORY[0x887168] = 0; /*0x40e18b*/
  MEMORY[0x887128] = (int)&CCINIClass_Vtable; /*0x40e191*/
  return atexit(unknown_libname_7); /*0x40e1a3*/
}
}
} // namespace gamemd

// 0x40E1B0
namespace gamemd {
int unknown_libname_7()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_7()
{
  HashTable::DestroyHashTableINIClass((void **)&MEMORY[0x887128]); /*0x40e1b5*/
}
}
} // namespace gamemd

// 0x40E1C0
namespace gamemd {
int sub_40E1C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40E1C0()
{
  MEMORY[0x88705C] = 0; /*0x40e1c8*/
  MEMORY[0x887060] = 0; /*0x40e1ce*/
  MEMORY[0x88706C] = 0; /*0x40e1d4*/
  MEMORY[0x887070] = 0; /*0x40e1da*/
  MEMORY[0x887068] = (int)&GenericNode::`vftable'; /*0x40e1e0*/
  GenericNode::Constructor(MEMORY[0x887074]); /*0x40e1ea*/
  MEMORY[0x887064] = (int)&GenericList::`vftable'; /*0x40e1f9*/
  LinkedList::Prepend(&MEMORY[0x887068], (int)MEMORY[0x887074]); /*0x40e203*/
  MEMORY[0x887064] = (int)&List<INIClass::INISection *>::`vftable'; /*0x40e20d*/
  MEMORY[0x887080] = 0; /*0x40e217*/
  MEMORY[0x887084] = 0; /*0x40e21d*/
  MEMORY[0x887088] = 0; /*0x40e223*/
  MEMORY[0x88708C] = 0; /*0x40e229*/
  MEMORY[0x887090] = 0; /*0x40e22f*/
  MEMORY[0x887094] = 0; /*0x40e235*/
  MEMORY[0x887098] = 0; /*0x40e23b*/
  MEMORY[0x887058] = (int)&CCINIClass_Vtable; /*0x40e241*/
  return atexit(unknown_libname_8); /*0x40e253*/
}
}
} // namespace gamemd

// 0x40E260
namespace gamemd {
int unknown_libname_8()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_8()
{
  HashTable::DestroyHashTableINIClass((void **)&MEMORY[0x887058]); /*0x40e265*/
}
}
} // namespace gamemd

// 0x40E270
namespace gamemd {
int sub_40E270()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40E270()
{
  MEMORY[0x8870C4] = 0; /*0x40e278*/
  MEMORY[0x8870C8] = 0; /*0x40e27e*/
  MEMORY[0x8870D4] = 0; /*0x40e284*/
  MEMORY[0x8870D8] = 0; /*0x40e28a*/
  MEMORY[0x8870D0] = (int)&GenericNode::`vftable'; /*0x40e290*/
  GenericNode::Constructor(MEMORY[0x8870DC]); /*0x40e29a*/
  MEMORY[0x8870CC] = (int)&GenericList::`vftable'; /*0x40e2a9*/
  LinkedList::Prepend(&MEMORY[0x8870D0], (int)MEMORY[0x8870DC]); /*0x40e2b3*/
  MEMORY[0x8870CC] = (int)&List<INIClass::INISection *>::`vftable'; /*0x40e2bd*/
  MEMORY[0x8870E8] = 0; /*0x40e2c7*/
  MEMORY[0x8870EC] = 0; /*0x40e2cd*/
  MEMORY[0x8870F0] = 0; /*0x40e2d3*/
  MEMORY[0x8870F4] = 0; /*0x40e2d9*/
  MEMORY[0x8870F8] = 0; /*0x40e2df*/
  MEMORY[0x8870FC] = 0; /*0x40e2e5*/
  MEMORY[0x887100] = 0; /*0x40e2eb*/
  MEMORY[0x8870C0] = (int)&CCINIClass_Vtable; /*0x40e2f1*/
  return atexit(unknown_libname_9); /*0x40e303*/
}
}
} // namespace gamemd

// 0x40E310
namespace gamemd {
int unknown_libname_9()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_9()
{
  HashTable::DestroyHashTableINIClass((void **)&MEMORY[0x8870C0]); /*0x40e315*/
}
}
} // namespace gamemd

// 0x40E390
namespace gamemd {
GenericNode * sub_40E390(GenericNode ** Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
GenericNode *__thiscall sub_40E390(GenericNode **Block, char a2)
{
  GenericNode *v3; // ecx
  GenericNode *v4; // eax

  *Block = (GenericNode *)&GenericNode::`vftable'; /*0x40e397*/
  if ( Block ) /*0x40e39d*/
  {
    v3 = *(Block + 1); /*0x40e39f*/
    if ( v3 ) /*0x40e3a4*/
    {
      v4 = *(Block + 2); /*0x40e3a6*/
      if ( v4 ) /*0x40e3ab*/
      {
        v4->Previous = v3; /*0x40e3ad*/
        *(_DWORD *)(*(Block + 1))[1].__pad_0 = *(Block + 2); /*0x40e3b6*/
        *(Block + 2) = 0; /*0x40e3b9*/
        *(Block + 1) = 0; /*0x40e3bc*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x40e3c4*/
    __3_YAXPAX_Z(Block); /*0x40e3c7*/
  return (GenericNode *)Block; /*0x40e3d1*/
}
}
} // namespace gamemd

// 0x40E3E0
namespace gamemd {
GenericList * sub_40E3E0(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
GenericList *__thiscall sub_40E3E0(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx

  *Block = &GenericList::`vftable'; /*0x40e3e6*/
  while ( 1 ) /*0x40e3ec*/
  {
    v3 = *(Block + 2); /*0x40e3ec*/
    if ( !v3 ) /*0x40e3f1*/
      break; /*0x40e3f1*/
    if ( !*(_DWORD *)(v3 + 4) ) /*0x40e3f3*/
      break; /*0x40e3f3*/
    v4 = *(_DWORD *)(v3 + 8); /*0x40e3f8*/
    if ( !v4 ) /*0x40e3fd*/
      break; /*0x40e3fd*/
    v5 = *(_DWORD *)(v3 + 4); /*0x40e403*/
    if ( v5 ) /*0x40e408*/
    {
      *(_DWORD *)(v4 + 4) = v5; /*0x40e40e*/
      *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 8); /*0x40e417*/
      *(_DWORD *)(v3 + 8) = 0; /*0x40e41a*/
      *(_DWORD *)(v3 + 4) = 0; /*0x40e41d*/
    }
  }
  *(Block + 4) = &GenericNode::`vftable'; /*0x40e427*/
  if ( Block != (_DWORD *)-16 ) /*0x40e42d*/
  {
    v6 = *(Block + 5); /*0x40e42f*/
    if ( v6 ) /*0x40e434*/
    {
      v7 = *(Block + 6); /*0x40e436*/
      if ( v7 ) /*0x40e43b*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x40e43d*/
        *(_DWORD *)(*(Block + 5) + 8) = *(Block + 6); /*0x40e446*/
        *(Block + 6) = 0; /*0x40e449*/
        *(Block + 5) = 0; /*0x40e44c*/
      }
    }
  }
  *(Block + 1) = &GenericNode::`vftable'; /*0x40e454*/
  if ( Block != (_DWORD *)-4 ) /*0x40e45a*/
  {
    v8 = *(Block + 2); /*0x40e45c*/
    if ( v8 ) /*0x40e461*/
    {
      v9 = *(Block + 3); /*0x40e463*/
      if ( v9 ) /*0x40e468*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x40e46a*/
        *(_DWORD *)(*(Block + 2) + 8) = *(Block + 3); /*0x40e473*/
        *(Block + 3) = 0; /*0x40e476*/
        *(Block + 2) = 0; /*0x40e479*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x40e481*/
    __3_YAXPAX_Z(Block); /*0x40e484*/
  return (GenericList *)Block; /*0x40e48e*/
}
}
} // namespace gamemd

// 0x40E4A0
namespace gamemd {
ObjectClass * sub_40E4A0(void ** Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall sub_40E4A0(void **Block, char a2)
{
  HashTable::DestroyHashTableINIClass(Block); /*0x40e4a3*/
  if ( (a2 & 1) != 0 ) /*0x40e4ad*/
    __3_YAXPAX_Z(Block); /*0x40e4b0*/
  return (ObjectClass *)Block; /*0x40e4ba*/
}
}
} // namespace gamemd

// 0x40E4C0
namespace gamemd {
GenericList * sub_40E4C0(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
GenericList *__thiscall sub_40E4C0(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx

  *Block = &GenericList::`vftable'; /*0x40e4c6*/
  while ( 1 ) /*0x40e4cc*/
  {
    v3 = *(Block + 2); /*0x40e4cc*/
    if ( !v3 ) /*0x40e4d1*/
      break; /*0x40e4d1*/
    if ( !*(_DWORD *)(v3 + 4) ) /*0x40e4d3*/
      break; /*0x40e4d3*/
    v4 = *(_DWORD *)(v3 + 8); /*0x40e4d8*/
    if ( !v4 ) /*0x40e4dd*/
      break; /*0x40e4dd*/
    v5 = *(_DWORD *)(v3 + 4); /*0x40e4e3*/
    if ( v5 ) /*0x40e4e8*/
    {
      *(_DWORD *)(v4 + 4) = v5; /*0x40e4ee*/
      *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 8); /*0x40e4f7*/
      *(_DWORD *)(v3 + 8) = 0; /*0x40e4fa*/
      *(_DWORD *)(v3 + 4) = 0; /*0x40e4fd*/
    }
  }
  *(Block + 4) = &GenericNode::`vftable'; /*0x40e507*/
  if ( Block != (_DWORD *)-16 ) /*0x40e50d*/
  {
    v6 = *(Block + 5); /*0x40e50f*/
    if ( v6 ) /*0x40e514*/
    {
      v7 = *(Block + 6); /*0x40e516*/
      if ( v7 ) /*0x40e51b*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x40e51d*/
        *(_DWORD *)(*(Block + 5) + 8) = *(Block + 6); /*0x40e526*/
        *(Block + 6) = 0; /*0x40e529*/
        *(Block + 5) = 0; /*0x40e52c*/
      }
    }
  }
  *(Block + 1) = &GenericNode::`vftable'; /*0x40e534*/
  if ( Block != (_DWORD *)-4 ) /*0x40e53a*/
  {
    v8 = *(Block + 2); /*0x40e53c*/
    if ( v8 ) /*0x40e541*/
    {
      v9 = *(Block + 3); /*0x40e543*/
      if ( v9 ) /*0x40e548*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x40e54a*/
        *(_DWORD *)(*(Block + 2) + 8) = *(Block + 3); /*0x40e553*/
        *(Block + 3) = 0; /*0x40e556*/
        *(Block + 2) = 0; /*0x40e559*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x40e561*/
    __3_YAXPAX_Z(Block); /*0x40e564*/
  return (GenericList *)Block; /*0x40e56e*/
}
}
} // namespace gamemd

// 0x40E580
namespace gamemd {
void sub_40E580()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40E580()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40e58c*/
  MEMORY[0x887288] = Math::Sqrt(v0 + v0); /*0x40e59e*/
}
}
} // namespace gamemd

// 0x40E5B0
namespace gamemd {
void sub_40E5B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40E5B0()
{
  MEMORY[0x8872F0] = MEMORY[0x887288] / 60.0; /*0x40e5bc*/
}
}
} // namespace gamemd

// 0x40E5D0
namespace gamemd {
void sub_40E5D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40E5D0()
{
  MEMORY[0x8872D8] = 1.0 / MEMORY[0x8872F0]; /*0x40e5dc*/
}
}
} // namespace gamemd

// 0x40E5F0
namespace gamemd {
void sub_40E5F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40E5F0()
{
  MEMORY[0x8872D0] = 0.0174532925199433 * 45.0; /*0x40e5fc*/
}
}
} // namespace gamemd

// 0x40E610
namespace gamemd {
void sub_40E610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40E610()
{
  MEMORY[0x887290] = 0.0174532925199433 * 60.0; /*0x40e61c*/
}
}
} // namespace gamemd

// 0x40E630
namespace gamemd {
void sub_40E630()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40E630()
{
  MEMORY[0x887278] = 0.0174532925199433 * 90.0; /*0x40e63c*/
}
}
} // namespace gamemd

// 0x40E650
namespace gamemd {
long long sub_40E650()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40E650()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x887278] - MEMORY[0x887290]); /*0x40e662*/
  result = Math::RoundToInt(v0 * MEMORY[0x887288] * 0.5); /*0x40e676*/
  MEMORY[0x8872F8] = result; /*0x40e67b*/
  return result; /*0x40e680*/
}
}
} // namespace gamemd

// 0x40E690
namespace gamemd {
void sub_40E690()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40E690()
{
  MEMORY[0x887298] = Math::ArcTan((double)MEMORY[0x8872F8] * 0.00390625); /*0x40e6a7*/
}
}
} // namespace gamemd

// 0x40E6C0
namespace gamemd {
void sub_40E6C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40E6C0()
{
  MEMORY[0x8872C8] = Math::ArcTan((double)(2 * MEMORY[0x8872F8]) / MEMORY[0x887288]); /*0x40e6e2*/
}
}
} // namespace gamemd

// 0x40E6F0
namespace gamemd {
long long sub_40E6F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40E6F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8872F8]) + 0.5); /*0x40e70b*/
  MEMORY[0x8872EC] = result; /*0x40e710*/
  return result; /*0x40e716*/
}
}
} // namespace gamemd

// 0x40E720
namespace gamemd {
int sub_40E720()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40E720()
{
  MEMORY[0x887280] = 0; /*0x40e722*/
  MEMORY[0x887282] = 0; /*0x40e728*/
  return 0; /*0x40e72e*/
}
}
} // namespace gamemd

// 0x40E730
namespace gamemd {
int sub_40E730()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40E730()
{
  MEMORY[0x8872A0] = 0; /*0x40e732*/
  MEMORY[0x8872A4] = 0; /*0x40e737*/
  MEMORY[0x8872A8] = 0; /*0x40e73c*/
  return 0; /*0x40e741*/
}
}
} // namespace gamemd

// 0x40E750
namespace gamemd {
int sub_40E750()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40E750()
{
  MEMORY[0x8872E8] = 0; /*0x40e755*/
  MEMORY[0x8872E0] = 128; /*0x40e75f*/
  MEMORY[0x8872E4] = 128; /*0x40e764*/
  return 128; /*0x40e769*/
}
}
} // namespace gamemd

// 0x40E770
namespace gamemd {
int sub_40E770()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40E770()
{
  MEMORY[0x8872B4] = 0; /*0x40e777*/
  MEMORY[0x8872B8] = 0; /*0x40e77c*/
  MEMORY[0x8872BC] = 1; /*0x40e781*/
  MEMORY[0x8872BD] = 0; /*0x40e788*/
  MEMORY[0x8872B0] = (int)&DynamicVectorClass<ScriptClass *>::`vftable'; /*0x40e78d*/
  MEMORY[0x8872C4] = 10; /*0x40e797*/
  MEMORY[0x8872C0] = 0; /*0x40e7a1*/
  return atexit(sub_40E7B0); /*0x40e7ac*/
}
}
} // namespace gamemd

// 0x40E7B0
namespace gamemd {
void sub_40E7B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40E7B0()
{
  MEMORY[0x8872B0] = (int)&VectorClass<ScriptClass *>::`vftable'; /*0x40e7b8*/
  if ( MEMORY[0x8872B4] && MEMORY[0x8872BD] ) /*0x40e7cc*/
  {
    __3_YAXPAX_Z(MEMORY[0x8872B4]); /*0x40e7cf*/
    MEMORY[0x8872B4] = 0; /*0x40e7d7*/
  }
  MEMORY[0x8872BD] = 0; /*0x40e7dd*/
  MEMORY[0x8872B8] = 0; /*0x40e7e3*/
}
}
} // namespace gamemd

// 0x40EB50
namespace gamemd {
int sub_40EB50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40EB50()
{
  MEMORY[0x887348] = Timer::GetTicks(); /*0x40eb5f*/
  MEMORY[0x887350] = 0; /*0x40eb64*/
  return atexit(nullsub_59); /*0x40eb74*/
}
}
} // namespace gamemd

// 0x40EB90
namespace gamemd {
int sub_40EB90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40EB90()
{
  MEMORY[0x887328] = timeGetTime(); /*0x40eb9f*/
  Timer::EnableHighPrecision(&MEMORY[0x88732C]); /*0x40eba4*/
  MEMORY[0x887330] = 0; /*0x40ebae*/
  return atexit(unknown_libname_10); /*0x40ebbe*/
}
}
} // namespace gamemd

// 0x40EBC0
namespace gamemd {
int unknown_libname_10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_10()
{
  Timer::DisableHighPrecision(); /*0x40ebc5*/
}
}
} // namespace gamemd

// 0x40EBD0
namespace gamemd {
int sub_40EBD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40EBD0()
{
  MEMORY[0x887338] = Timer::GetTicks(); /*0x40ebdf*/
  MEMORY[0x887340] = 0; /*0x40ebe4*/
  return atexit(nullsub_60); /*0x40ebf4*/
}
}
} // namespace gamemd

// 0x40EC10
namespace gamemd {
int sub_40EC10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40EC10()
{
  MEMORY[0x887358] = 0; /*0x40ec12*/
  MEMORY[0x88735C] = 0; /*0x40ec17*/
  MEMORY[0x887360] = 0; /*0x40ec1c*/
  MEMORY[0x887364] = 0; /*0x40ec21*/
  return 0; /*0x40ec26*/
}
}
} // namespace gamemd

// 0x40EC30
namespace gamemd {
void sub_40EC30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40EC30()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40ec3c*/
  MEMORY[0x8873A8] = Math::Sqrt(v0 + v0); /*0x40ec4e*/
}
}
} // namespace gamemd

// 0x40EC60
namespace gamemd {
void sub_40EC60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40EC60()
{
  MEMORY[0x8873F8] = MEMORY[0x8873A8] / 60.0; /*0x40ec6c*/
}
}
} // namespace gamemd

// 0x40EC80
namespace gamemd {
void sub_40EC80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40EC80()
{
  MEMORY[0x8873E0] = 1.0 / MEMORY[0x8873F8]; /*0x40ec8c*/
}
}
} // namespace gamemd

// 0x40ECA0
namespace gamemd {
void sub_40ECA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40ECA0()
{
  MEMORY[0x8873D8] = 0.0174532925199433 * 45.0; /*0x40ecac*/
}
}
} // namespace gamemd

// 0x40ECC0
namespace gamemd {
void sub_40ECC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40ECC0()
{
  MEMORY[0x8873B0] = 0.0174532925199433 * 60.0; /*0x40eccc*/
}
}
} // namespace gamemd

// 0x40ECE0
namespace gamemd {
void sub_40ECE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40ECE0()
{
  MEMORY[0x887370] = 0.0174532925199433 * 90.0; /*0x40ecec*/
}
}
} // namespace gamemd

// 0x40ED00
namespace gamemd {
long long sub_40ED00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40ED00()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x887370] - MEMORY[0x8873B0]); /*0x40ed12*/
  result = Math::RoundToInt(v0 * MEMORY[0x8873A8] * 0.5); /*0x40ed26*/
  MEMORY[0x887400] = result; /*0x40ed2b*/
  return result; /*0x40ed30*/
}
}
} // namespace gamemd

// 0x40ED40
namespace gamemd {
void sub_40ED40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40ED40()
{
  MEMORY[0x8873B8] = Math::ArcTan((double)MEMORY[0x887400] * 0.00390625); /*0x40ed57*/
}
}
} // namespace gamemd

// 0x40ED70
namespace gamemd {
void sub_40ED70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40ED70()
{
  MEMORY[0x8873D0] = Math::ArcTan((double)(2 * MEMORY[0x887400]) / MEMORY[0x8873A8]); /*0x40ed92*/
}
}
} // namespace gamemd

// 0x40EDA0
namespace gamemd {
long long sub_40EDA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40EDA0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x887400]) + 0.5); /*0x40edbb*/
  MEMORY[0x8873F4] = result; /*0x40edc0*/
  return result; /*0x40edc6*/
}
}
} // namespace gamemd

// 0x40EDD0
namespace gamemd {
int sub_40EDD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40EDD0()
{
  MEMORY[0x8873A0] = 0; /*0x40edd2*/
  MEMORY[0x8873A2] = 0; /*0x40edd8*/
  return 0; /*0x40edde*/
}
}
} // namespace gamemd

// 0x40EDE0
namespace gamemd {
int sub_40EDE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40EDE0()
{
  MEMORY[0x8873C0] = 0; /*0x40ede2*/
  MEMORY[0x8873C4] = 0; /*0x40ede7*/
  MEMORY[0x8873C8] = 0; /*0x40edec*/
  return 0; /*0x40edf1*/
}
}
} // namespace gamemd

// 0x40EE00
namespace gamemd {
int sub_40EE00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40EE00()
{
  MEMORY[0x8873F0] = 0; /*0x40ee05*/
  MEMORY[0x8873E8] = 128; /*0x40ee0f*/
  MEMORY[0x8873EC] = 128; /*0x40ee14*/
  return 128; /*0x40ee19*/
}
}
} // namespace gamemd

// 0x40EE20
namespace gamemd {
int sub_40EE20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40EE20()
{
  MEMORY[0x887378] = 0; /*0x40ee22*/
  MEMORY[0x88737C] = 0; /*0x40ee27*/
  MEMORY[0x887380] = 0; /*0x40ee2c*/
  MEMORY[0x887384] = 0; /*0x40ee31*/
  return 0; /*0x40ee36*/
}
}
} // namespace gamemd

// 0x40EE40
namespace gamemd {
int sub_40EE40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40EE40()
{
  MEMORY[0x88738C] = 0; /*0x40ee47*/
  MEMORY[0x887390] = 0; /*0x40ee4c*/
  MEMORY[0x887394] = 1; /*0x40ee51*/
  MEMORY[0x887395] = 0; /*0x40ee58*/
  MEMORY[0x887388] = (int)&DynamicVectorClass<VoxelAnimClass *>::`vftable'; /*0x40ee5d*/
  MEMORY[0x88739C] = 10; /*0x40ee67*/
  MEMORY[0x887398] = 0; /*0x40ee71*/
  return atexit(sub_40EE80); /*0x40ee7c*/
}
}
} // namespace gamemd

// 0x40EE80
namespace gamemd {
void sub_40EE80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40EE80()
{
  MEMORY[0x887388] = (int)&VectorClass<VoxelAnimClass *>::`vftable'; /*0x40ee88*/
  if ( MEMORY[0x88738C] && MEMORY[0x887395] ) /*0x40ee9c*/
  {
    __3_YAXPAX_Z(MEMORY[0x88738C]); /*0x40ee9f*/
    MEMORY[0x88738C] = 0; /*0x40eea7*/
  }
  MEMORY[0x887395] = 0; /*0x40eead*/
  MEMORY[0x887390] = 0; /*0x40eeb3*/
}
}
} // namespace gamemd

// 0x40F220
namespace gamemd {
int sub_40F220()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40F220()
{
  MEMORY[0x887408] = 0; /*0x40f222*/
  MEMORY[0x88740C] = 0; /*0x40f227*/
  MEMORY[0x887410] = 0; /*0x40f22c*/
  MEMORY[0x887414] = 0; /*0x40f231*/
  return 0; /*0x40f236*/
}
}
} // namespace gamemd

// 0x40F270
namespace gamemd {
int sub_40F270()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40F270()
{
  sub_6C89B0(&MEMORY[0x887460], 0x3D0900u); /*0x40f27a*/
  return atexit(unknown_libname_11); /*0x40f28a*/
}
}
} // namespace gamemd

// 0x40F290
namespace gamemd {
int unknown_libname_11()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_11()
{
  if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9752] ) /*0x6c89d0*/
    __3_YAXPAX_Z(*(void **)&MEMORY[0x87F8E4].__pad_5568[9752]); /*0x6c89d8*/
}
}
} // namespace gamemd

// 0x40F2A0
namespace gamemd {
void sub_40F2A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40F2A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40f2ac*/
  MEMORY[0x887490] = Math::Sqrt(v0 + v0); /*0x40f2be*/
}
}
} // namespace gamemd

// 0x40F2D0
namespace gamemd {
void sub_40F2D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40F2D0()
{
  MEMORY[0x8874F8] = MEMORY[0x887490] / 60.0; /*0x40f2dc*/
}
}
} // namespace gamemd

// 0x40F2F0
namespace gamemd {
void sub_40F2F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40F2F0()
{
  MEMORY[0x8874E0] = 1.0 / MEMORY[0x8874F8]; /*0x40f2fc*/
}
}
} // namespace gamemd

// 0x40F310
namespace gamemd {
void sub_40F310()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40F310()
{
  MEMORY[0x8874D8] = 0.0174532925199433 * 45.0; /*0x40f31c*/
}
}
} // namespace gamemd

// 0x40F330
namespace gamemd {
void sub_40F330()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40F330()
{
  MEMORY[0x887498] = 0.0174532925199433 * 60.0; /*0x40f33c*/
}
}
} // namespace gamemd

// 0x40F350
namespace gamemd {
void sub_40F350()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40F350()
{
  MEMORY[0x887480] = 0.0174532925199433 * 90.0; /*0x40f35c*/
}
}
} // namespace gamemd

// 0x40F370
namespace gamemd {
long long sub_40F370()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40F370()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x887480] - MEMORY[0x887498]); /*0x40f382*/
  result = Math::RoundToInt(v0 * MEMORY[0x887490] * 0.5); /*0x40f396*/
  MEMORY[0x887500] = result; /*0x40f39b*/
  return result; /*0x40f3a0*/
}
}
} // namespace gamemd

// 0x40F3B0
namespace gamemd {
void sub_40F3B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40F3B0()
{
  MEMORY[0x8874A0] = Math::ArcTan((double)MEMORY[0x887500] * 0.00390625); /*0x40f3c7*/
}
}
} // namespace gamemd

// 0x40F3E0
namespace gamemd {
void sub_40F3E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40F3E0()
{
  MEMORY[0x8874B8] = Math::ArcTan((double)(2 * MEMORY[0x887500]) / MEMORY[0x887490]); /*0x40f402*/
}
}
} // namespace gamemd

// 0x40F410
namespace gamemd {
long long sub_40F410()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40F410()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x887500]) + 0.5); /*0x40f42b*/
  MEMORY[0x8874F4] = result; /*0x40f430*/
  return result; /*0x40f436*/
}
}
} // namespace gamemd

// 0x40F440
namespace gamemd {
int sub_40F440()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40F440()
{
  MEMORY[0x887488] = 0; /*0x40f442*/
  MEMORY[0x88748A] = 0; /*0x40f448*/
  return 0; /*0x40f44e*/
}
}
} // namespace gamemd

// 0x40F450
namespace gamemd {
int sub_40F450()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40F450()
{
  MEMORY[0x8874A8] = 0; /*0x40f452*/
  MEMORY[0x8874AC] = 0; /*0x40f457*/
  MEMORY[0x8874B0] = 0; /*0x40f45c*/
  return 0; /*0x40f461*/
}
}
} // namespace gamemd

// 0x40F470
namespace gamemd {
int sub_40F470()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40F470()
{
  MEMORY[0x8874F0] = 0; /*0x40f475*/
  MEMORY[0x8874E8] = 128; /*0x40f47f*/
  MEMORY[0x8874EC] = 128; /*0x40f484*/
  return 128; /*0x40f489*/
}
}
} // namespace gamemd

// 0x40F490
namespace gamemd {
int sub_40F490()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40F490()
{
  MEMORY[0x8874C4] = 0; /*0x40f497*/
  MEMORY[0x8874C8] = 0; /*0x40f49c*/
  MEMORY[0x8874CC] = 1; /*0x40f4a1*/
  MEMORY[0x8874CD] = 0; /*0x40f4a8*/
  MEMORY[0x8874C0] = (WarheadTypeClass *)&DynamicVectorClass<WarheadTypeClass *>::`vftable'; /*0x40f4ad*/
  MEMORY[0x8874D4] = 10; /*0x40f4b7*/
  MEMORY[0x8874D0] = 0; /*0x40f4c1*/
  return atexit(sub_40F4D0); /*0x40f4cc*/
}
}
} // namespace gamemd

// 0x40F4D0
namespace gamemd {
void sub_40F4D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40F4D0()
{
  MEMORY[0x8874C0] = (WarheadTypeClass *)&VectorClass<WarheadTypeClass *>::`vftable'; /*0x40f4d8*/
  if ( MEMORY[0x8874C4] && MEMORY[0x8874CD] ) /*0x40f4ec*/
  {
    __3_YAXPAX_Z(MEMORY[0x8874C4]); /*0x40f4ef*/
    MEMORY[0x8874C4] = 0; /*0x40f4f7*/
  }
  MEMORY[0x8874CD] = 0; /*0x40f4fd*/
  MEMORY[0x8874C8] = 0; /*0x40f503*/
}
}
} // namespace gamemd

// 0x40F940
namespace gamemd {
void sub_40F940()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40F940()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40f94c*/
  MEMORY[0x887518] = Math::Sqrt(v0 + v0); /*0x40f95e*/
}
}
} // namespace gamemd

// 0x40F970
namespace gamemd {
void sub_40F970()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40F970()
{
  MEMORY[0x887588] = MEMORY[0x887518] / 60.0; /*0x40f97c*/
}
}
} // namespace gamemd

// 0x40F990
namespace gamemd {
void sub_40F990()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40F990()
{
  MEMORY[0x887550] = 1.0 / MEMORY[0x887588]; /*0x40f99c*/
}
}
} // namespace gamemd

// 0x40F9B0
namespace gamemd {
void sub_40F9B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40F9B0()
{
  MEMORY[0x887548] = 0.0174532925199433 * 45.0; /*0x40f9bc*/
}
}
} // namespace gamemd

// 0x40F9D0
namespace gamemd {
void sub_40F9D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40F9D0()
{
  MEMORY[0x887520] = 0.0174532925199433 * 60.0; /*0x40f9dc*/
}
}
} // namespace gamemd

// 0x40F9F0
namespace gamemd {
void sub_40F9F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40F9F0()
{
  MEMORY[0x887508] = 0.0174532925199433 * 90.0; /*0x40f9fc*/
}
}
} // namespace gamemd

// 0x40FA10
namespace gamemd {
long long sub_40FA10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40FA10()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x887508] - MEMORY[0x887520]); /*0x40fa22*/
  result = Math::RoundToInt(v0 * MEMORY[0x887518] * 0.5); /*0x40fa36*/
  MEMORY[0x887590] = result; /*0x40fa3b*/
  return result; /*0x40fa40*/
}
}
} // namespace gamemd

// 0x40FA50
namespace gamemd {
void sub_40FA50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40FA50()
{
  MEMORY[0x887528] = Math::ArcTan((double)MEMORY[0x887590] * 0.00390625); /*0x40fa67*/
}
}
} // namespace gamemd

// 0x40FA80
namespace gamemd {
void sub_40FA80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40FA80()
{
  MEMORY[0x887540] = Math::ArcTan((double)(2 * MEMORY[0x887590]) / MEMORY[0x887518]); /*0x40faa2*/
}
}
} // namespace gamemd

// 0x40FAB0
namespace gamemd {
long long sub_40FAB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_40FAB0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x887590]) + 0.5); /*0x40facb*/
  MEMORY[0x887580] = result; /*0x40fad0*/
  return result; /*0x40fad6*/
}
}
} // namespace gamemd

// 0x40FAE0
namespace gamemd {
int sub_40FAE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40FAE0()
{
  MEMORY[0x887510] = 0; /*0x40fae2*/
  MEMORY[0x887512] = 0; /*0x40fae8*/
  return 0; /*0x40faee*/
}
}
} // namespace gamemd

// 0x40FAF0
namespace gamemd {
int sub_40FAF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40FAF0()
{
  MEMORY[0x887530] = 0; /*0x40faf2*/
  MEMORY[0x887534] = 0; /*0x40faf7*/
  MEMORY[0x887538] = 0; /*0x40fafc*/
  return 0; /*0x40fb01*/
}
}
} // namespace gamemd

// 0x40FB10
namespace gamemd {
int sub_40FB10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40FB10()
{
  MEMORY[0x887560] = 0; /*0x40fb15*/
  MEMORY[0x887558] = 128; /*0x40fb1f*/
  MEMORY[0x88755C] = 128; /*0x40fb24*/
  return 128; /*0x40fb29*/
}
}
} // namespace gamemd

// 0x40FB30
namespace gamemd {
int sub_40FB30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40FB30()
{
  MEMORY[0x88756C] = 0; /*0x40fb37*/
  MEMORY[0x887570] = 0; /*0x40fb3c*/
  MEMORY[0x887574] = 1; /*0x40fb41*/
  MEMORY[0x887575] = 0; /*0x40fb48*/
  MEMORY[0x887568] = (WeaponTypeClass *)&DynamicVectorClass<WeaponTypeClass *>::`vftable'; /*0x40fb4d*/
  MEMORY[0x88757C] = 10; /*0x40fb57*/
  MEMORY[0x887578] = 0; /*0x40fb61*/
  return atexit(sub_40FB70); /*0x40fb6c*/
}
}
} // namespace gamemd

// 0x40FB70
namespace gamemd {
void sub_40FB70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_40FB70()
{
  MEMORY[0x887568] = (WeaponTypeClass *)&VectorClass<WeaponTypeClass *>::`vftable'; /*0x40fb78*/
  if ( MEMORY[0x88756C] && MEMORY[0x887575] ) /*0x40fb8c*/
  {
    __3_YAXPAX_Z(MEMORY[0x88756C]); /*0x40fb8f*/
    MEMORY[0x88756C] = 0; /*0x40fb97*/
  }
  MEMORY[0x887575] = 0; /*0x40fb9d*/
  MEMORY[0x887570] = 0; /*0x40fba3*/
}
}
} // namespace gamemd

// 0x40FF10
namespace gamemd {
int sub_40FF10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40FF10()
{
  sub_776EB0(&MEMORY[0x887598]); /*0x40ff15*/
  return atexit(nullsub_64); /*0x40ff25*/
}
}
} // namespace gamemd

// 0x40FF40
namespace gamemd {
int sub_40FF40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_40FF40()
{
  MEMORY[0x887630] = 0; /*0x40ff42*/
  MEMORY[0x887634] = 0; /*0x40ff47*/
  MEMORY[0x887638] = 0; /*0x40ff4c*/
  MEMORY[0x88763C] = 0; /*0x40ff51*/
  return 0; /*0x40ff56*/
}
}
} // namespace gamemd

// 0x40FF60
namespace gamemd {
void sub_40FF60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40FF60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40ff6c*/
  MEMORY[0x887668] = Math::Sqrt(v0 + v0); /*0x40ff7e*/
}
}
} // namespace gamemd

// 0x40FF90
namespace gamemd {
void sub_40FF90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40FF90()
{
  MEMORY[0x8876B8] = MEMORY[0x887668] / 60.0; /*0x40ff9c*/
}
}
} // namespace gamemd

// 0x40FFB0
namespace gamemd {
void sub_40FFB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40FFB0()
{
  MEMORY[0x8876A0] = 1.0 / MEMORY[0x8876B8]; /*0x40ffbc*/
}
}
} // namespace gamemd

// 0x40FFD0
namespace gamemd {
void sub_40FFD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_40FFD0()
{
  MEMORY[0x887698] = 0.0174532925199433 * 45.0; /*0x40ffdc*/
}
}
} // namespace gamemd

// 0x4010C0
namespace gamemd {
int AudioMixer_EndFrame(int * a1, unsigned int * a2)
{
{
    int v4;
    EndBufferMixer(a1, (unsigned int)((a2[1] >> 16) * (((unsigned int)a1[1]) >> 16)) >> 14);
    AudioMixer::PlaySample(a1);
    EndBufferMixer(a1 + 10, (int)((a2[11] >> 16) * (((unsigned int)a1[11]) >> 16)) / 100);
    AudioMixer::PlaySample(a1 + 10);
    if ( (a2[21] >> 16) != 0x2000 )
    {
        v4 = (int)(((unsigned int)a1[21]) >> 16) + (int)(a2[21] >> 16) - 0x2000;
        if ( v4 < 0 )
        {
            EndBufferMixer(a1 + 20, 0);
            return AudioMixer::PlaySample(a1 + 20);
        }
        if ( (unsigned int)v4 > 0x4000 )
            v4 = 0x4000;
        EndBufferMixer(a1 + 20, v4);
    }
    return AudioMixer::PlaySample(a1 + 20);
}
}
} // namespace gamemd

// 0x401190
namespace gamemd {
int sub_401190(unsigned int* a1, int a2)
{
long long product = 1374389535LL * a2 * (a1[11] >> 16);
int v2 = (int)((unsigned long long)product >> 32);
return ((unsigned int)v2 >> 31) + (v2 >> 5);
}
} // namespace gamemd

// 0x4011B0
namespace gamemd {
int sub_4011B0(unsigned int * a1, int a2)
{
  return *a1 + 36 * a2;
}
} // namespace gamemd

// 0x401580
namespace gamemd {
void sub_401580(void ** Block)
{
{
    void (__thiscall ***v2)(void *, int);
    void (__thiscall ***v3)(void *, int);
    v2 = (void (__thiscall ***)(void *, int))*(Block + 67);
    if ( v2 )
        (**v2)(v2, 1);
    v3 = (void (__thiscall ***)(void *, int))*(Block + 68);
    if ( v3 )
        (**v3)(v3, 1);
    if ( *Block )
        __3_YAXPAX_Z(*Block);
    __3_YAXPAX_Z(Block);
}
}
} // namespace gamemd

// 0x4015C0
namespace gamemd {
unsigned int sub_4015C0(int a1, const void * a2)
{
{
    void *v3;
    v3 = bsearch(a2, *(const void **)(a1), *(const void **)(a1 + 4), 0x24u, (int (*)(const void *, const void *))_strcmpi);
    if ( v3 )
        return ((unsigned int)v3 - *(unsigned int *)(a1)) / 0x24;
    else
        return -1;
}
}
} // namespace gamemd

// 0x4018C0
namespace gamemd {
int sub_4018C0(int a1, int a2, int a3)
{
{
    int v4;
    int result;
    int v6;
    v4 = *(int *)(a1 + 280);
    if ( !v4 )
        return 0;
    v6 = a3;
    if ( a3 > *(int *)(a1 + 284) )
        v6 = *(int *)(a1 + 284);
    if ( v6 <= 0 || (result = ((int (__thiscall **)(int, int, int)) *(int **)v4)[9](v4, a2, v6), result < 0) )
        result = 0;
    *(int *)(a1 + 284) -= result;
    return result;
}
}
} // namespace gamemd

// 0x4019E0
namespace gamemd {
int * sub_4019E0(int a1, int a2, int a3, int a4)
{
{
    int *v6;
    int i;
    int **j;
    void *v9;
    void *v10;
    v6 = (int *)__2_YAPAXI_Z(0xE8u);
    memset(v6, 0, 0xE8u);
    *v6 = a1;
    v6[6] = a4;
    v6[1] = (int)AllocLinkedListMemory(a2 / (a4 + 28), a4 + 28);
    v6[2] = (int)AllocLinkedListMemory(a3, 100);
    DListNode::Init(v6 + 3);
    if ( v6[1] && v6[2] )
        return v6;
    for ( i = Queue::GetNext(v6 + 3); i; i = Queue::GetNext(v6 + 3) )
    {
        if ( *(int *)(i + 4) != i )
            LinkedList::Init((int **)i);
        for ( j = (int **)Queue::GetNext((int *)(i + 36)); j; j = (int **)Queue::GetNext((int *)(i + 36)) )
        {
            LinkedList::Init(j);
            AudioNode::Release(j);
            PushFrontLinkedListAlt(*(_DWORD **)(*(int *)(i + 60) + 4), (int)j);
        }
        nullsub_2(i + 28);
        PushFrontLinkedListAlt(*(_DWORD **)(*(int *)(i + 60) + 8), i);
    }
    v9 = (void *)v6[1];
    if ( v9 )
        VtableStub::Push_407510(v9);
    v10 = (void *)v6[2];
    if ( v10 )
        VtableStub::Push_407510(v10);
    __3_YAXPAX_Z(v6);
    return 0;
}
}
} // namespace gamemd

// 0x401B00
namespace gamemd {
void sub_401B00(int * Block)
{
{
    int *v1;
    int *v2;
    ObjectClass *Next;
    ObjectClass *i;
    void *v5;
    void *v6;
    v1 = Block;
    v2 = Block + 3;
    Next = (ObjectClass *)Queue::GetNext(Block + 3);
    if ( Next )
    {
        do
        {
            if ( *(ObjectClass **)&Next->__pad_0[4] != Next )
                LinkedList::Init(Next);
            for ( i = (ObjectClass *)Queue::GetNext(&Next->objectTypeFlags);
                  i;
                  i = (ObjectClass *)Queue::GetNext(&Next->objectTypeFlags) )
            {
                LinkedList::Init(i);
                AudioNode::Release(i);
                PushFrontLinkedListAlt(*(_DWORD **)(Next->ambientSoundController[0] + 4), (int)i);
            }
            nullsub_2();
            PushFrontLinkedListAlt(*(_DWORD **)(Next->ambientSoundController[0] + 8), (int)Next);
            Next = (ObjectClass *)Queue::GetNext(v2);
        }
        while ( Next );
        v1 = Block;
    }
    v5 = (void *)v1[1];
    if ( v5 )
        VtableStub::Push_407510(v5);
    v6 = (void *)v1[2];
    if ( v6 )
        VtableStub::Push_407510(v6);
    __3_YAXPAX_Z(v1);
}
}
} // namespace gamemd

// 0x401FB0
namespace gamemd {
int sub_401FB0(unsigned int* a1)
{
return a1[3];
}
} // namespace gamemd

// 0x401FC0
namespace gamemd {
int sub_401FC0(int * Block)
{
{
    int **i;
    if ( ((int **)Block)[28] != (int **)Block )
        LinkedList::Init((int **)Block);
    for ( i = (int **)Queue::GetNext((int *)Block + 9); i; i = (int **)Queue::GetNext((int *)Block + 9) )
    {
        LinkedList::Init(i);
        AudioNode::Release(i);
        PushFrontLinkedListAlt(*(int **)(((int *)Block)[36] + 4), (int)i);
    }
    nullsub_2((int *)Block + 7);
    return PushFrontLinkedListAlt(*(int **)(((int *)Block)[36] + 8), (int)Block);
}
}
} // namespace gamemd

// 0x402020
namespace gamemd {
int sub_402020(unsigned int* a1)
{
return a1[5];
}
} // namespace gamemd

// 0x402430
namespace gamemd {
int sub_402430(unsigned int* a1)
{
return a1[41] & 8;
}
} // namespace gamemd

// 0x402440
namespace gamemd {
void * sub_402440(int a1, int a2)
{
{
    int v3;
    void *result;
    v3 = *(int *)(a1 + 212);
    *(int *)(a1 + 12) = a2;
    (*(void (**)(void))(v3 + 40))();
    if ( (*(char *)(a1 + 164) & 5) != 0 )
        (*(void (**)(int))(*(int *)(a1 + 212) + 16))(a1);
    (*(void (**)(int))(*(int *)(a1 + 212) + 44))(a1);
    result = *(void **)(a1 + 188);
    if ( result )
        result = (void *)((int (*)(int))result)(a1);
    *(int *)(a1 + 360) = 0;
    *(int *)(a1 + 164) |= 8u;
    return result;
}
}
} // namespace gamemd

// 0x403460
namespace gamemd {
int sub_403460()
{
return -2147221504;
}
} // namespace gamemd

// 0x403470
namespace gamemd {
int sub_403470(int a1, int a2)
{
return EndBufferMixer((int *)(a1 + 104), a2);
}
} // namespace gamemd

// 0x4036C0
namespace gamemd {
int sub_4036C0(int a1, int a2)
{
int channel = AudioQueue::FindBestChannel(a1, 1);
if ( channel )
    sub_402440(channel, a2);
return channel;
}

} // namespace gamemd

// 0x403810
namespace gamemd {
int sub_403810(int (**a1)(void))
{
return a1[67]();
}
} // namespace gamemd

// 0x4038E0
namespace gamemd {
int sub_4038E0(unsigned long long* a1, unsigned long long a2)
{
return a2 - a1[5] >= *a1;
}
} // namespace gamemd

// 0x405490
namespace gamemd {
int sub_405490()
{
int sub_405490(unsigned int * this_)
{
return this_[86];
}
}
} // namespace gamemd

// 0x407080
namespace gamemd {
int j_Mixer_RequestBuffer(VolumeStruct* volume, int rate)
{
return RequestBufferMixer(volume, rate);
}

} // namespace gamemd

// 0x407150
namespace gamemd {
int EndBufferMixer(VolumeStruct* volume, int scaledVolume)
{
int result = volume->Volume | 1;
volume->Volume = result;
volume->ScaledVolume = scaledVolume << 16;
return result;
}

} // namespace gamemd

// 0x407160
namespace gamemd {
int sub_407160(VolumeStruct* volume)
{
int result = volume->Volume | 1;
volume->Volume = result;
return result;
}

} // namespace gamemd

// 0x407170
namespace gamemd {
int RequestBufferMixer(VolumeStruct* volume, int rate)
{
int result = volume->ScaledVolume;
unsigned int flags = volume->Volume;
int audioState = volume->AudioState;
volume->Volume = flags & 0xFFFFFFFE;
if ( result == audioState )
{
    unsigned long long now = Audio::Callback();
    volume->hBuffer = (uint32_t)now;
    volume->MaxVolume = (int)((now >> 32) & 0xFFFFFFFF);
    result = (int)now;
}
volume->ScaledVolume = rate << 16;
return result;
}

} // namespace gamemd

// 0x408530
namespace gamemd {
void nullsub_2()
{
  ;
}
} // namespace gamemd

// 0x40A770
namespace gamemd {
int sub_40A770()
{
return -2147221504;
}
} // namespace gamemd

// 0x40D260
namespace gamemd {
void nullsub_56()
{
  ;
}
} // namespace gamemd

// 0x40D300
namespace gamemd {
void nullsub_57()
{
  ;
}
} // namespace gamemd

// 0x40EB80
namespace gamemd {
void nullsub_59()
{
  ;
}
} // namespace gamemd

// 0x40EC00
namespace gamemd {
void nullsub_60()
{
  ;
}
} // namespace gamemd

// 0x40F240
namespace gamemd {
void nullsub_61()
{
  ;
}
} // namespace gamemd

// 0x40F250
namespace gamemd {
void nullsub_62()
{
  ;
}
} // namespace gamemd

// 0x40F260
namespace gamemd {
void nullsub_63()
{
  ;
}
} // namespace gamemd

// 0x40FF30
namespace gamemd {
void nullsub_64()
{
  ;
}
} // namespace gamemd
