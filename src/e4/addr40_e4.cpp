// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_VECTOR_TREE_TRUTH 1  // G57a2: G42.55 tree-truth bridge pulls core/vector.hpp templates
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DSurface_e4.hpp"  // W16G3 C2027 supply
#include "e4/classes/ScenarioClass_e4.hpp"  // W16G3 C2027 supply
#include "e4/classes/MixFileClass_e4.hpp"  // W16G3 C2027 supply
#include "e4/classes/SortedArray_e4.hpp"  // W16G3 C2027 supply
#include "e4/classes/Multiplayer_e4.hpp"  // W16G3 C2027 supply
#include "e4/classes/LightningStorm_e4.hpp"  // W16G3 C2027 supply
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/E4Recv_401F80_e4.hpp"
#include "e4/classes/E4Recv_4026C0_e4.hpp"
#include "e4/classes/E4Recv_402850_e4.hpp"
#include "e4/classes/E4Recv_402EF0_e4.hpp"
#include "e4/classes/E4Recv_403490_e4.hpp"
#include "e4/classes/E4Recv_4034A0_e4.hpp"
#include "e4/classes/E4Recv_404BB0_e4.hpp"
#include "e4/classes/E4Recv_405130_e4.hpp"
#include "e4/classes/E4Recv_405140_e4.hpp"
#include "e4/classes/E4Recv_405160_e4.hpp"
#include "e4/classes/E4Recv_4052E0_e4.hpp"
#include "e4/classes/E4Recv_4053E0_e4.hpp"
#include "e4/classes/E4Recv_405430_e4.hpp"
#include "e4/classes/E4Recv_4059F0_e4.hpp"
#include "e4/classes/E4Recv_405A00_e4.hpp"
#include "e4/classes/E4Recv_405AC0_e4.hpp"
#include "e4/classes/E4Recv_405E80_e4.hpp"
#include "e4/classes/E4Recv_4062C0_e4.hpp"
#include "e4/classes/E4Recv_406310_e4.hpp"
#include "e4/classes/E4Recv_406760_e4.hpp"
#include "e4/classes/E4Recv_406B10_e4.hpp"
#include "e4/classes/E4Recv_407060_e4.hpp"
#include "e4/classes/E4Recv_4072B0_e4.hpp"
#include "e4/classes/E4Recv_407F80_e4.hpp"
#include "e4/classes/E4Recv_4080A0_e4.hpp"
#include "e4/classes/E4Recv_4080B0_e4.hpp"
#include "e4/classes/E4Recv_4085B0_e4.hpp"
#include "e4/classes/E4Recv_408970_e4.hpp"
#include "e4/classes/E4Recv_408D30_e4.hpp"
#include "e4/classes/E4Recv_408D40_e4.hpp"
#include "e4/classes/E4Recv_408EC0_e4.hpp"
#include "e4/classes/E4Recv_408ED0_e4.hpp"
#include "e4/classes/E4Recv_4090F0_e4.hpp"
#include "e4/classes/E4Recv_409100_e4.hpp"
#include "e4/classes/E4Recv_409330_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/E4Recv_409470_e4.hpp"
#include "e4/classes/E4Recv_40A090_e4.hpp"
#include "e4/classes/E4Recv_40A2D0_e4.hpp"
#include "e4/classes/E4Recv_40E3E0_e4.hpp"
#include "e4/classes/E4Recv_40E4C0_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/GenericNode_e4.hpp"
#include "system/cc_file.hpp"  // X33-L2: G57a2-style tree-first bridge (C3668 twin-guard)
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Time_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/Struct_e4.hpp"
#include "e4/classes/AudioIndex_e4.hpp"
#include "e4/classes/AudioList_e4.hpp"
#include "e4/classes/AudioNode_e4.hpp"
#include "e4/classes/DListNode_e4.hpp"
#include "e4/classes/IDXContainer_e4.hpp"
#include "e4/classes/RefCount_e4.hpp"
#include "e4/classes/Voice_e4.hpp"
#include "e4/classes/Queue_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "classes/AudioIndex_e4.hpp"  // G42.57w9 method-carrier supply
#include "classes/AudioNode_e4.hpp"  // G42.57w9 method-carrier supply
#include "e4/classes/TechnoTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/VtableStub_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/CoordBounds_e4.hpp"  // G57w10 D supply
#include "e4/classes/TechnoClass_e4.hpp"
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int sub_402EF0(int p0); }  // x4:signals@0x402ef0
namespace gamemd { int sub_401B00(int p0); }  // x4:signals@0x401b00
namespace gamemd { int sub_4085B0(int p0); }  // x4:signals@0x4085b0
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { int ProcessAudioMixerFrame(ObjectClass *p_this); }  // x4:ida@0x402f60
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int ActivatePlay(AudioChannel *p_this); }  // x4:ida@0x402650
namespace AudioChannel { int ActivatePlay(); }  // w18j2 ns-supply raw 0x00402650

// 0x4011C0
namespace gamemd {  // G42.18 ns repair
AbstractClass * * LoadAudioFile(const char * a1, const char * a2)
{

  char *v3; // ebp
  char *v4; // eax
  char *v5; // eax
  unsigned int *v6; // eax
  unsigned int *v7; // eax
  void *v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // esi
  HANDLE FirstFileA; // esi
  void (***v14)(unsigned int, int); // ecx
  void (***v15)(unsigned int, int); // ecx
  unsigned int Buffer[2]; // [esp+14h] [ebp-2BCh] BYREF
  int v18; // [esp+1Ch] [ebp-2B4h]
  int v19[22]; // [esp+20h] [ebp-2B0h] BYREF
  unsigned char v20[12]; // [esp+78h] [ebp-258h] BYREF
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
  v3->AbstractClass_10C = v7; /*0x4012e4*/
  if ( !(*(unsigned __int8 (**)(unsigned int *, unsigned int))(*v7 + 20))(v7, 0) ) /*0x4012ef*/
    goto LABEL_30; /*0x4012ef*/
  FileClass::Load(v19, 1); /*0x401300*/
  (*(void (**)(unsigned int, int))(**((unsigned int **)v3 + 67) + 28))(*((unsigned int *)v3 + 67), 1); /*0x40130f*/
  if ( CCFileClass::Read(v19, Buffer, 12) != 12 ) /*0x401325*/
    goto LABEL_30; /*0x401325*/
  v3->vtable2 = v18; /*0x40132f*/
  if ( v18 <= 0 ) /*0x401338*/
    goto LABEL_17; /*0x401338*/
  v8 = __2_YAPAXI_Z(36 * v18); /*0x401346*/
  v9 = v3->vtable2; /*0x401348*/
  *(unsigned int *)v3 = v8; /*0x40134b*/
  memset(v8, 0, 4 * ((unsigned int)(36 * v9) >> 2)); /*0x40135e*/
  if ( Buffer[1] != 1 ) /*0x40136c*/
  {
    if ( CCFileClass::Read(v19, *(void **)v3, 36 * v3->vtable2) == 36 * v3->vtable2 ) /*0x401500*/
      goto LABEL_17; /*0x401500*/
LABEL_30:
    if ( v3 ) /*0x401508*/
    {
      v14 = (void (***)(unsigned int, int))v3->AbstractClass_10C; /*0x40150a*/
      if ( v14 ) /*0x401512*/
        (**v14)(v14, 1); /*0x401518*/
      v15 = (void (***)(unsigned int, int))v3->ParticleSystemClass_110; /*0x40151a*/
      if ( v15 ) /*0x401522*/
        (**v15)(v15, 1); /*0x401528*/
      if ( *(unsigned int *)v3 ) /*0x40152a*/
        __3_YAXPAX_Z(*(void **)v3); /*0x401532*/
      __3_YAXPAX_Z(v3); /*0x40153b*/
    }
    v19[0] = (int)&vt_CCFileClass; /*0x401547*/
    v21 = 0; /*0x40154f*/
    Vector::Clear((int)v20); /*0x401556*/
    v19[0] = (int)&off_7E1668; /*0x40155f*/
    BufferIOFileClass::Dtor(v19); /*0x401567*/
    return 0; /*0x40156c*/
  }
  v10 = 0; /*0x401375*/
  if ( v3->vtable2 > 0 ) /*0x401379*/
  {
    v11 = 0; /*0x40137b*/
    while ( CCFileClass::Read(v19, (void *)(*(unsigned int *)v3 + v11), 32) == 32 ) /*0x401393*/
    {
      ++v10; /*0x40139c*/
      *(unsigned int *)(v11 + *(unsigned int *)v3 + 32) = 0; /*0x40139d*/
      v11 += 36; /*0x4013a4*/
      if ( v10 >= v3->vtable2 ) /*0x4013a9*/
        goto LABEL_17; /*0x4013a9*/
    }
    goto LABEL_30; /*0x401393*/
  }
LABEL_17:
  qsort(*(void **)v3, v3->vtable2, 0x24u, _strcmpi); /*0x4013ab*/
  v3->u32_114 = 0; /*0x4013c8*/
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
        v3->u32_114 = 1; /*0x401458*/
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
  v19[0] = (int)&vt_CCFileClass; /*0x4014ac*/
  v21 = 0; /*0x4014b4*/
  Vector::Clear((int)v20); /*0x4014bb*/
  v19[0] = (int)&off_7E1668; /*0x4014c4*/
  BufferIOFileClass::Dtor(v19); /*0x4014cc*/
  return v3; /*0x4014d3*/

}
}  // G42.18 ns repair
// 0x401C00
namespace gamemd {
ObjectClass * * AudioMixer_LoadSample(unsigned int * a1, int a2)
{

  int *v2; // ebx
  LinkedList *v3; // esi
  int *v4; // edi
  int *v5; // ebp
  int NextEntry; // edi
  LinkedList *i; // esi
  int v9; // eax
  int *v10; // esi
  int v11; // esi
  LinkedList *j; // edi
  int v13; // eax
  LinkedList *k; // esi
  ObjectClass *v15; // [esp+0h] [ebp-1Ch]
  int v17; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]

  v2 = a1; /*0x401c05*/
  v3 = (LinkedList *)a1[3]; /*0x401c0d*/
  v4 = a1 + 3; /*0x401c10*/
  if ( v3 != (LinkedList *)(a1 + 3) ) /*0x401c19*/
  {
    while ( v3[1].Tail[1] != a2 || !*v3->ptr_8.__pad_0 ) /*0x401c25*/
    {
      v3 = *(LinkedList **)v3->__pad_0; /*0x401c27*/
      if ( v3 == (LinkedList *)v4 ) /*0x401c2b*/
        goto LABEL_5; /*0x401c2b*/
    }
    if ( v3 ) /*0x401c77*/
    {
      LinkedList::Init(v3); /*0x401c7b*/
      InsertBeforeLinkedList(v4, (int *)v3->__pad_0); /*0x401c84*/
      return (int *)v3; /*0x401c92*/
    }
  }
LABEL_5:
  if ( IDXContainer::LoadSample(*a1, a2) ) /*0x401c2f*/
  {
    v5 = LinkedList::Next(v2->q008); /*0x401c44*/
    if ( !v5 ) /*0x401c48*/
    {
      NextEntry = AudioList::GetNextEntry((AudioList *)v4); /*0x401c55*/
      if ( NextEntry ) /*0x401c59*/
      {
        while ( *(unsigned int *)(NextEntry + 12) ) /*0x401c64*/
        {
          NextEntry = AudioList::GetNextEntry((AudioList *)NextEntry); /*0x401c6d*/
          if ( !NextEntry ) /*0x401c71*/
            goto LABEL_18; /*0x401c71*/
        }
        if ( *(unsigned int *)(NextEntry + 4) != NextEntry ) /*0x401c96*/
          LinkedList::Init((LinkedList *)NextEntry); /*0x401c9a*/
        for ( i = (LinkedList *)Queue::GetNext((Queue *)(NextEntry + 36)); /*0x401cad*/
              i;
              i = (LinkedList *)Queue::GetNext((Queue *)(NextEntry + 36)) )
        {
          LinkedList::Init(i); /*0x401cb1*/
          AudioNode::Release((AudioNode *)i); /*0x401cb8*/
          PushFrontLinkedListAlt(*(unsigned int **)(*(unsigned int *)(NextEntry + 60) + 4), (int)i); /*0x401cc5*/
        }
        nullsub_2(v15); /*0x401cda*/
        PushFrontLinkedListAlt(*(unsigned int **)(*(unsigned int *)(NextEntry + 60) + 8), NextEntry); /*0x401ce7*/
      }
LABEL_18:
      v5 = LinkedList::Next(v2->q008); /*0x401cf4*/
      if ( !v5 ) /*0x401cf8*/
      {
        AudioStream::ReleaseSubsystem((AudioStream *)*v2); /*0x401cfc*/
        return 0; /*0x401d0a*/
      }
    }
    v5[5] = a2; /*0x401d11*/
    v5[15] = (int)v2; /*0x401d14*/
    DListNode::InitEmpty((DListNode *)v5); /*0x401d17*/
    v5[3] = 0; /*0x401d1c*/
    AudioStream::InitNodeFields((AudioStream *)(v5 + 7)); /*0x401d26*/
    Struct::ZeroInit32((Struct *)v5 + 16); /*0x401d30*/
    v5[12] = (int)(v5 + 16); /*0x401d35*/
    v9 = *(unsigned int *)(*v2 + 284); /*0x401d3a*/
    v19 = v9; /*0x401d42*/
    if ( !v9 ) /*0x401d46*/
    {
LABEL_37:
      AudioIndex::GetSampleInformation((unsigned int *)*v2, v5[5], v5 + 16); /*0x401e4f*/
      InsertBeforeLinkedList(v2 + 3, v5); /*0x401e62*/
      v5[6] = 1; /*0x401e67*/
      AudioStream::ReleaseSubsystem((AudioStream *)*v2); /*0x401e70*/
      return v5; /*0x401e7e*/
    }
    while ( 1 ) /*0x401d57*/
    {
      v17 = v2->u32_18; /*0x401d57*/
      if ( v17 > v9 ) /*0x401d5b*/
        v17 = v9; /*0x401d5d*/
      v10 = LinkedList::Next(v2->u8_4); /*0x401d69*/
      if ( !v10 ) /*0x401d6d*/
        break; /*0x401d6d*/
LABEL_35:
      sub_4085E0(v10, (int)(v10 + 7), v17); /*0x401e12*/
      sub_408500((int)(v5 + 7), v10); /*0x401e28*/
      v13 = sub_4018C0(*v2, (int)(v10 + 7), v17); /*0x401e36*/
      if ( v13 != v17 ) /*0x401e3d*/
        goto LABEL_38; /*0x401e3d*/
      v19 -= v13; /*0x401e45*/
      if ( !v19 ) /*0x401e49*/
        goto LABEL_37; /*0x401e49*/
      v9 = v19; /*0x401d4e*/
    }
    while ( 1 ) /*0x401d7b*/
    {
      v11 = AudioList::GetNextEntry(&v2->q00C); /*0x401d7b*/
      if ( !v11 ) /*0x401d7f*/
        break; /*0x401d7f*/
      while ( v11->u32_C ) /*0x401d8a*/
      {
        v11 = AudioList::GetNextEntry((AudioList *)v11); /*0x401d93*/
        if ( !v11 ) /*0x401d97*/
          goto LABEL_38; /*0x401d97*/
      }
      if ( v11->u32_4 != v11 ) /*0x401da2*/
        LinkedList::Init((LinkedList *)v11); /*0x401da6*/
      for ( j = (LinkedList *)Queue::GetNext(&v11->Queue_24); j; j = (LinkedList *)Queue::GetNext(&v11->Queue_24) ) /*0x401db9*/
      {
        LinkedList::Init(j); /*0x401dbd*/
        AudioNode::Release((AudioNode *)j); /*0x401dc4*/
        PushFrontLinkedListAlt(*(unsigned int **)(v11->u32_3C + 4), (int)j); /*0x401dd1*/
      }
      nullsub_2(v15); /*0x401de6*/
      PushFrontLinkedListAlt(*(unsigned int **)(v11->u32_3C + 8), v11); /*0x401df3*/
      v2 = a1; /*0x401e04*/
      v10 = LinkedList::Next((LinkedList *)a1[1]); /*0x401e08*/
      if ( v10 ) /*0x401e0c*/
        goto LABEL_35; /*0x401e0c*/
    }
LABEL_38:
    if ( (int *)v5[1] != v5 ) /*0x401e82*/
      LinkedList::Init((LinkedList *)v5); /*0x401e86*/
    for ( k = (LinkedList *)Queue::GetNext((Queue *)v5 + 36); k; k = (LinkedList *)Queue::GetNext((Queue *)v5 + 36) ) /*0x401e99*/
    {
      LinkedList::Init(k); /*0x401e9d*/
      AudioNode::Release((AudioNode *)k); /*0x401ea4*/
      PushFrontLinkedListAlt(*(unsigned int **)(v5[15] + 4), (int)k); /*0x401eb1*/
    }
    nullsub_2(v15); /*0x401ec6*/
    PushFrontLinkedListAlt(*(unsigned int **)(v5[15] + 8), (int)v5); /*0x401ed3*/
  }
  return 0; /*0x401c8b*/

}
}
// 0x401F80
namespace gamemd {
int E4Recv_401F80::_EnterCriticalRegionHelper_ContextBase_details_Concurrency__UAEHXZ()
{
  int result = this->M12 + 1; // eax /*0x401f83*/
  this->M12 = result; /*0x401f84*/
  return result; /*0x401f87*/
}
} // namespace gamemd

// 0x402990
namespace gamemd {
ObjectClass * * sub_402990()
{

  AudioQueue *Next; // edi
  AudioQueue *i; // esi
  int v3; // eax
  AudioStream *v4; // ebx
  int *v5; // edi
  unsigned int *v6; // eax
  signed int v7; // ecx
  int v8; // eax
  AudioQueue *v9; // edi
  LinkedList *j; // esi
  int NextAlt; // [esp+4h] [ebp-10h]
  int v12; // [esp+Ch] [ebp-8h] BYREF

  if ( dword_87DE2C ) /*0x40299d*/
  {
    ++*(unsigned int *)off_815E98[3].__pad_0; /*0x4029af*/
    Next = (AudioQueue *)AudioQueue::GetNext((AudioQueue *)&off_815E98[1].DListNode_field_0x04); /*0x4029c0*/
    for ( i = Next; Next; i = Next ) /*0x4029ca*/
    {
      NextAlt = AudioQueue::GetNextAlt(Next); /*0x4029d7*/
      Next = (AudioQueue *)NextAlt; /*0x4029db*/
      ++*(unsigned int *)off_815E98[3].__pad_0; /*0x4029e6*/
      LinkedList::Init((LinkedList *)i); /*0x4029eb*/
      v3 = *(unsigned int *)off_815E98[3].__pad_0 - 1; /*0x4029f9*/
      *(unsigned int *)off_815E98[3].__pad_0 = v3; /*0x4029fc*/
      if ( v3 < 0 ) /*0x4029ff*/
        *(unsigned int *)off_815E98[3].__pad_0 = 0; /*0x402a07*/
      v12 = AudioQueue::GetNext((AudioQueue *)((char *)i + 248)); /*0x402a17*/
      v4 = (AudioStream *)v12; /*0x402a1b*/
      if ( v12 ) /*0x402a1d*/
      {
        do /*0x402a35*/
        {
          v5 = AudioQueue::IteratorNext((AudioQueue *)&v12); /*0x402a2a*/
          AudioStream::Destructor(v4); /*0x402a2c*/
          v4 = (AudioStream *)v5; /*0x402a33*/
        }
        while ( v5 ); /*0x402a35*/
        Next = (AudioQueue *)NextAlt; /*0x402a37*/
      }
      (*(void (**)(AudioQueue *))(*(unsigned int *)(*(unsigned int *)i[1].__pad_0 + 12) + 32))(i); /*0x402a43*/
      *(unsigned int *)(*(unsigned int *)i[1].__pad_0 + 4 * *(unsigned int *)&i[1].__pad_0[4] + 28) = 0; /*0x402a4c*/
      v6 = *(unsigned int **)i[1].__pad_0; /*0x402a50*/
      v7 = v6[4] - 1; /*0x402a56*/
      v6[4] = v7; /*0x402a59*/
      if ( v7 < 0 ) /*0x402a5c*/
        *(unsigned int *)(*(unsigned int *)i[1].__pad_0 + 16) = 0; /*0x402a61*/
      __3_YAXPAX_Z(i); /*0x402a65*/
    }
    v8 = *(unsigned int *)off_815E98[3].__pad_0 - 1; /*0x402a80*/
    *(unsigned int *)off_815E98[3].__pad_0 = v8; /*0x402a83*/
    if ( v8 < 0 ) /*0x402a86*/
      *(unsigned int *)off_815E98[3].__pad_0 = 0; /*0x402a8d*/
    v9 = (AudioQueue *)AudioQueue::GetNext((AudioQueue *)off_815E98); /*0x402a9b*/
    for ( j = (LinkedList *)v9; v9; j = (LinkedList *)v9 ) /*0x402aa1*/
    {
      v9 = (AudioQueue *)AudioQueue::GetNextAlt(v9); /*0x402ab1*/
      LinkedList::Init(j); /*0x402ab5*/
      (*(void (**)(LinkedList *))(*j->Tail.__pad_0 + 24))(j); /*0x402abf*/
      *(unsigned int *)(*j->Tail.__pad_0 + 12) &= ~1u; /*0x402ac6*/
      __3_YAXPAX_Z(j); /*0x402ac9*/
      dword_87DE28 = 0; /*0x402ad3*/
    }
    dword_87DE2C = 0; /*0x402adf*/
  }

}
}
// 0x402C70
namespace gamemd {
ObjectClass * * CreateAudioChannel(int a1, const void * a2)
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
    v5 = NextAudioQueue->u32_18; /*0x402ca7*/
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
    v12 = v4->u32_C; /*0x402cef*/
    v8 = (int *)__2_YAPAXI_Z(0x1E8u); /*0x402cf8*/
    memset(v8, 0, 0x1E8u); /*0x402d03*/
    DListNode::InitEmpty(v8); /*0x402d0a*/
    v8[6] = (int)v4; /*0x402d13*/
    v8[7] = v10; /*0x402d16*/
    v8[4] = 0; /*0x402d19*/
    ++v4->u32_10; /*0x402d20*/
    v4[v10 + 7] = (int)v8; /*0x402d27*/
    v8[116] = *(unsigned int *)(v12 + 36); /*0x402d34*/
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
    *((unsigned long long *)v8 + 38) = 10LL * *((unsigned long long *)v8 + 34); /*0x402e06*/
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
    if ( (*(int (**)(int *))(v12 + 28))(v8) ) /*0x402e6c*/
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
    ++*((unsigned int *)off_815E98 + 6); /*0x402eab*/
    InsertAfterDListNode((int)off_815E98 + 12, v8); /*0x402eb8*/
    v9 = *((unsigned int *)off_815E98 + 6) - 1; /*0x402ec6*/
    *((unsigned int *)off_815E98 + 6) = v9; /*0x402ec9*/
    if ( v9 < 0 ) /*0x402ecc*/
      *((unsigned int *)off_815E98 + 6) = 0; /*0x402ed4*/
  }
  ++v7[4]; /*0x402edb*/
  return v7; /*0x402cc5*/

}
}
// 0x403210
namespace gamemd {
ObjectClass * * sub_403210()
{

  AudioQueue *Next; // eax
  AudioQueue *v2; // esi
  int v3; // eax
  AudioQueue *v4; // edi
  AudioStream *i; // ebx
  unsigned int *v6; // eax
  signed int v7; // ecx
  void *result; // eax
  int NextAlt; // [esp+8h] [ebp-8h]

  ++*(unsigned int *)off_815E98[3].__pad_0; /*0x40321e*/
  Next = (AudioQueue *)AudioQueue::GetNext((AudioQueue *)&off_815E98[1].DListNode_field_0x04); /*0x40322a*/
  v2 = Next; /*0x403237*/
  if ( Next ) /*0x403239*/
  {
    while ( 1 ) /*0x403252*/
    {
      NextAlt = AudioQueue::GetNextAlt(Next); /*0x403252*/
      ++*(unsigned int *)off_815E98[3].__pad_0; /*0x40325f*/
      LinkedList::Init((LinkedList *)v2); /*0x403264*/
      v3 = *(unsigned int *)off_815E98[3].__pad_0 - 1; /*0x403272*/
      *(unsigned int *)off_815E98[3].__pad_0 = v3; /*0x403275*/
      if ( v3 < 0 ) /*0x403278*/
        *(unsigned int *)off_815E98[3].__pad_0 = 0; /*0x403280*/
      v4 = (AudioQueue *)AudioQueue::GetNext(&v2->AudioQueue_F8); /*0x40328e*/
      for ( i = (AudioStream *)v4; v4; i = (AudioStream *)v4 ) /*0x403294*/
      {
        v4 = (AudioQueue *)AudioQueue::GetNextAlt(v4); /*0x40329f*/
        AudioStream::Destructor(i); /*0x4032a1*/
      }
      (*(void (**)(AudioQueue *))(*(unsigned int *)(*v2->q004.__pad_0 + 12) + 32))(v2); /*0x4032b4*/
      *(unsigned int *)(*v2->q004.__pad_0 + 4 * *(unsigned int *)&v2[1].__pad_0[4] + 28) = 0; /*0x4032bd*/
      v6 = *v2->q004.__pad_0; /*0x4032c1*/
      v7 = v6[4] - 1; /*0x4032c7*/
      v6[4] = v7; /*0x4032ca*/
      if ( v7 < 0 ) /*0x4032cd*/
        *(unsigned int *)(*v2->q004.__pad_0 + 16) = 0; /*0x4032d2*/
      __3_YAXPAX_Z(v2); /*0x4032d6*/
      v2 = (AudioQueue *)NextAlt; /*0x4032db*/
      if ( !NextAlt ) /*0x4032e4*/
        break; /*0x4032e4*/
      Next = (AudioQueue *)NextAlt; /*0x403243*/
    }
  }
  result = (void *)(*(unsigned int *)off_815E98[3].__pad_0 - 1); /*0x4032f5*/
  *(unsigned int *)off_815E98[3].__pad_0 = result; /*0x4032f8*/
  if ( (int)result < 0 ) /*0x4032fb*/
  {
    result = off_815E98; /*0x4032fd*/
    *(unsigned int *)off_815E98[3].__pad_0 = 0; /*0x403302*/
  }
  return result; /*0x403305*/

}
}
// 0x403FA0
namespace gamemd {
void sub_403FA0(ObjectClass * a1)
{
  int v1; // ebp
  int v2; // esi
  DListNode *v3; // ebx
  RefCount **v4; // edi
  int v5; // eax
  DListNode *v6; // edi
  LinkedList *i; // esi
  ObjectClass *v9; // [esp+0h] [ebp-Ch]

  v1 = 0; /*0x403fa6*/
  if ( g_AudioConfigState ) /*0x403fac*/
  {
    v2 = *(unsigned int *)g_AudioStreamObject; /*0x403fb2*/
    if ( *(DListNode **)g_AudioStreamObject != &g_AudioStreamObject ) /*0x403fbe*/
    {
      a1 = a1; /*0x403fc4*/
      do /*0x40405f*/
      {
        v3 = *(DListNode **)v2; /*0x403fc5*/
        if ( (v2->nextArrayIndex & 1) == 0 ) /*0x403fcc*/
        {
          ((Voice *)((Voice *)v2))->DetachChannel(); /*0x403fd0*/
          if ( v2->lineTrailer > 0 ) /*0x403fdb*/
          {
            v4 = &v2->owningHouseIndex; /*0x403fdd*/
            do /*0x403ff9*/
            {
              (*v4)->Decrement(); /*0x403fe2*/
              *v4 = 0; /*0x403fe7*/
              ++v1; /*0x403ff3*/
              ++v4; /*0x403ff4*/
            }
            while ( v1 < v2->lineTrailer ); /*0x403ff9*/
            v1 = 0; /*0x403ffb*/
          }
          v2->lineTrailer = 0; /*0x403ffd*/
          v2->referenceCount = 4; /*0x404003*/
          v2->q138 = 0; /*0x40400a*/
          v2->q278 = 0; /*0x404010*/
          v5 = v2->nextArrayIndex; /*0x404016*/
          (*((unsigned char *)&(v5))) = v5 | 1; /*0x404019*/
          v2->nextArrayIndex = v5; /*0x40401b*/
        }
        LinkedList::Init((LinkedList *)v2); /*0x404020*/
        v2->q138 = 0; /*0x404025*/
        if ( v2->nextArrayIndex >= 0 ) /*0x404030*/
          PushFrontLinkedListAlt(dword_87E2A8, v2); /*0x404045*/
        else
          operator delete(((void *)v2)); /*0x404033*/
        v2 = (int)v3; /*0x404050*/
        --dword_87E28C; /*0x404059*/
      }
      while ( v3 != &g_AudioStreamObject ); /*0x40405f*/
      v2 = *(unsigned int *)g_AudioStreamObject; /*0x404065*/
      a1 = a1; /*0x40406b*/
    }
    if ( g_AudioConfigState && (DListNode *)v2 != &g_AudioStreamObject ) /*0x40407a*/
    {
      do /*0x4040c3*/
      {
        v6 = *(DListNode **)v2; /*0x40407c*/
        if ( (v2->nextArrayIndex & 1) != 0 ) /*0x404083*/
        {
          LinkedList::Init((LinkedList *)v2); /*0x404087*/
          v2->q138 = 0; /*0x40408c*/
          if ( v2->nextArrayIndex >= 0 ) /*0x40409b*/
            PushFrontLinkedListAlt(dword_87E2A8, v2); /*0x4040b0*/
          else
            operator delete(((void *)v2)); /*0x40409e*/
          --dword_87E28C; /*0x4040b5*/
        }
        v2 = (int)v6; /*0x4040c1*/
      }
      while ( v6 != &g_AudioStreamObject ); /*0x4040c3*/
    }
  }
  for ( i = (LinkedList *)((AudioQueue *)((AudioQueue *)&stru_87E250))->GetNext(); /*0x4040d5*/
  i;
  i = (LinkedList *)((AudioQueue *)((AudioQueue *)&stru_87E250))->GetNext() )
  {
    LinkedList::Init(i); /*0x4040d9*/
    operator delete((i)); /*0x4040df*/
  }
  if ( dword_87E298 ) /*0x4040ff*/
  {
    sub_401B00(v9, a1); /*0x404101*/
    dword_87E298 = 0; /*0x404106*/
  }
  if ( dword_87E2A8 ) /*0x404114*/
  {
    VtableStub::Push_407510(dword_87E2A8); /*0x404116*/
    dword_87E2A8 = 0; /*0x40411b*/
  }
  dword_87E2A4 = 0; /*0x404122*/
  g_AudioConfigState = 0; /*0x404128*/
}
}
// 0x4041D0
namespace gamemd {
int Audio_Process()
{

  int result; // eax
  int v2; // esi
  DListNode *v3; // ebp
  int DListNode_field_0x04; // eax
  LinkedList **v5; // edi
  unsigned int DListNode_field_0x04_high; // ebx
  LinkedList *i; // esi
  int v8; // eax
  int v9; // eax
  LinkedList *v10; // eax
  LinkedList *v11; // esi
  LinkedList *v12; // esi
  int v13; // eax
  DListNode *v14; // edi
  int v15; // ebp
  int v16; // ebx
  int v17; // eax
  int v18; // ebx
  RefCount **v19; // edi
  int v20; // eax
  int v21; // ecx
  int v22; // edi
  int v23; // ebx
  int v24; // eax
  unsigned int v25; // esi
  int v26; // eax
  unsigned int *v27; // edi
  unsigned int *v28; // edi
  unsigned int *v29; // edx
  int v30; // ecx
  unsigned int v31; // edx
  DListNode *v32; // esi
  int v33; // eax
  int AudioQueue; // eax
  int v35; // ebx
  VocClass *v36; // edi
  DListNode *v37; // ebp
  int v38; // eax
  int v39; // eax
  DListNode *v40; // [esp+0h] [ebp-8h]
  DListNode *v41; // [esp+0h] [ebp-8h]
  int v42; // [esp+4h] [ebp-4h]
  int v43; // [esp+4h] [ebp-4h]

  result = g_AudioConfigState; /*0x4041d0*/
  if ( !g_AudioConfigState ) /*0x4041da*/
    return result; /*0x4041da*/
  result = dword_87E2B4; /*0x4041e0*/
  if ( dword_87E2B4 ) /*0x4041e7*/
    return result; /*0x4041e7*/
  v2 = *(unsigned int *)g_AudioStreamObject.__pad_0; /*0x4041f6*/
  dword_87E2B4 = 1; /*0x404204*/
  ++dword_87E2AC; /*0x40420e*/
  v3 = *(DListNode **)g_AudioStreamObject.__pad_0; /*0x404214*/
  if ( *(DListNode **)g_AudioStreamObject.__pad_0 != &g_AudioStreamObject ) /*0x404216*/
  {
    do /*0x404349*/
    {
      DListNode_field_0x04 = v3[4].DListNode_field_0x04; /*0x40421c*/
      if ( *(unsigned int *)(DListNode_field_0x04 + 152) != dword_87E2AC ) /*0x40422b*/
      {
        DListNode::Init((DListNode *)(DListNode_field_0x04 + 140)); /*0x404233*/
        *(unsigned int *)(v3[4].DListNode_field_0x04 + 68) = 0; /*0x40423b*/
        *(unsigned int *)(v3[4].DListNode_field_0x04 + 152) = dword_87E2AC; /*0x40424b*/
      }
      Audio::InitChannels(v3[23].__pad_0); /*0x404257*/
      if ( v3[3].DListNode_field_0x04 != 4 ) /*0x404262*/
      {
        v5 = (LinkedList **)v3[4].DListNode_field_0x04; /*0x404268*/
        DListNode_field_0x04_high = HIWORD(v3[23].DListNode_field_0x04); /*0x404271*/
        for ( i = v5[35]; i != (LinkedList *)(v5 + 35); i = *(LinkedList **)i->__pad_0 ) /*0x404282*/
        {
          v8 = HIWORD(i[14].Tail[1]) - DListNode_field_0x04_high; /*0x4042a3*/
          if ( v8 < 0 ) /*0x4042a5*/
            v8 = DListNode_field_0x04_high - HIWORD(i[14].Tail[1]); /*0x4042a7*/
          if ( v8 >= (int)((unsigned int)((3435973837u * (unsigned __int64)((unsigned int)v5[7] >> 16)) >> 32) >> 3) ) /*0x4042ad*/
          {
            if ( HIWORD(i[14].Tail[1]) < DListNode_field_0x04_high ) /*0x4042c6*/
              break; /*0x4042c6*/
          }
          else
          {
            v9 = i[1].Tail[0]; /*0x4042b3*/
            if ( ((unsigned char)v5[4] & 0x10) != 0 ) /*0x4042b6*/
            {
              if ( v9 ) /*0x4042ba*/
                break; /*0x4042ba*/
            }
            else if ( !v9 ) /*0x4042c0*/
            {
              break; /*0x4042c0*/
            }
          }
        }
        DListNode::InitEmpty((DListNode *)((char *)v3 + 12)); /*0x4042d4*/
        InsertAfterDListNode((int)i, &v3[1].DListNode_field_0x04); /*0x4042e2*/
        v10 = v5[18]; /*0x4042ea*/
        v11 = (LinkedList *)&v5[17]->__pad_0[1]; /*0x4042ed*/
        v5[17] = v11; /*0x4042f0*/
        if ( v10 && (int)v11 > (int)v10 ) /*0x4042f9*/
        {
          v12 = v5[36] - 1; /*0x404301*/
          LinkedList::Init(v5[36]); /*0x404307*/
          if ( (v12[2].__pad_0[0] & 1) == 0 ) /*0x404310*/
          {
            Voice::DetachChannel((Voice *)v12); /*0x404314*/
            Audio::ReleaseChannelRefs((Audio *)v12); /*0x40431b*/
            v12[2].Tail[0] = 4; /*0x404320*/
            *(unsigned int *)v12[26].__pad_0 = 0; /*0x404329*/
            v12[52].Tail[1] = 0; /*0x40432f*/
            v13 = *(unsigned int *)v12[2].__pad_0; /*0x404335*/
            (v13) = ((v13) & ~0xFF) | ((v13 | 1) & 0xFF); /*0x404338*/
            *(unsigned int *)v12[2].__pad_0 = v13; /*0x40433a*/
          }
          v5[17] = (LinkedList *)((char *)v5[17] - 1); /*0x40433d*/
        }
      }
      v3 = *(DListNode **)v3->__pad_0; /*0x404340*/
    }
    while ( v3 != &g_AudioStreamObject ); /*0x404349*/
    v2 = *(unsigned int *)g_AudioStreamObject.__pad_0; /*0x40434f*/
    if ( *(DListNode **)g_AudioStreamObject.__pad_0 != &g_AudioStreamObject ) /*0x40435b*/
    {
      do /*0x40436f*/
      {
        UpdateVoicePlayback((TechnoClass *)v2); /*0x404362*/
        v2 = *(unsigned int *)v2; /*0x404367*/
      }
      while ( (DListNode *)v2 != &g_AudioStreamObject ); /*0x40436f*/
      v2 = *(unsigned int *)g_AudioStreamObject.__pad_0; /*0x404371*/
    }
  }
  v42 = 0; /*0x404377*/
  v14 = &stru_87DE38; /*0x40437f*/
  v15 = 7; /*0x404384*/
  do /*0x40439c*/
  {
    v16 = 10; /*0x404389*/
    do /*0x404399*/
    {
      DListNode::Init(v14); /*0x404390*/
      v14 = (DListNode *)((char *)v14 + 12); /*0x404395*/
      --v16; /*0x404398*/
    }
    while ( v16 ); /*0x404399*/
    --v15; /*0x40439b*/
  }
  while ( v15 ); /*0x40439c*/
  ++dword_87E2B0; /*0x4043ab*/
  if ( (DListNode *)v2 == &g_AudioStreamObject ) /*0x4043b1*/
  {
LABEL_58:
    v31 = 0x4000; /*0x40457b*/
    goto LABEL_59; /*0x40457b*/
  }
  do /*0x40455f*/
  {
    v17 = v2->q_B0; /*0x4043b7*/
    v40 = *(DListNode **)v2; /*0x4043c1*/
    if ( !v17 || v2 != *(unsigned int *)(v17 + 192) ) /*0x4043cd*/
    {
      if ( (*(unsigned char *)(v2 + 24) & 1) != 0 ) /*0x4043d3*/
        goto LABEL_40; /*0x4043d3*/
      Voice::DetachChannel((Voice *)v2); /*0x4043d7*/
      v18 = 0; /*0x4043e4*/
      if ( v2->lineTrailer > 0 ) /*0x4043e8*/
      {
        v19 = &v2->owningHouseIndex; /*0x4043ea*/
        do /*0x404402*/
        {
          RefCount::Decrement(*v19); /*0x4043ef*/
          *v19 = 0; /*0x4043f4*/
          ++v18; /*0x4043fc*/
          ++v19; /*0x4043fd*/
        }
        while ( v18 < v2->lineTrailer ); /*0x404402*/
      }
      v2->lineTrailer = 0; /*0x404404*/
      v2->referenceCount = 4; /*0x40440a*/
      v2->q138 = 0; /*0x404411*/
      v2->q278 = 0; /*0x404417*/
      v20 = v2->nextArrayIndex; /*0x40441d*/
      (v20) = ((v20) & ~0xFF) | ((v20 | 1) & 0xFF); /*0x404420*/
      v2->nextArrayIndex = v20; /*0x404422*/
    }
    if ( (*(unsigned char *)(v2 + 24) & 1) != 0 ) /*0x404429*/
    {
LABEL_40:
      LinkedList::Init((LinkedList *)v2); /*0x40442b*/
      v2->q138 = 0; /*0x404432*/
      if ( v2->nextArrayIndex >= 0 ) /*0x404441*/
        PushFrontLinkedListAlt(dword_87E2A8, v2); /*0x404464*/
      else
        __3_YAXPAX_Z((void *)v2); /*0x404444*/
      --dword_87E28C; /*0x404452*/
      goto LABEL_55; /*0x404457*/
    }
    if ( !v2->q158 ) /*0x404474*/
      v42 += (unsigned int)(20 * HIWORD(*(unsigned int *)(v2->objectTypeFlags + 28))) >> 14; /*0x404496*/
    v21 = v2->objectTypeFlags; /*0x40449a*/
    v22 = v2->q154 + *(unsigned int *)(v21 + 64); /*0x4044ac*/
    v23 = 120 * v22 + 8904248; /*0x4044ca*/
    v24 = dword_87E2B0; /*0x4044d1*/
    v25 = (unsigned int)(((1075052865 * (unsigned __int64)HIWORD(*(unsigned int *)(v2 + 188))) >> 32) /*0x4044d6*/
                       + ((unsigned int)(HIWORD(v2->u32_BC)
                                       - ((1075052865 * (unsigned __int64)HIWORD(v2->u32_BC)) >> 32)) >> 1)) >> 10;
    if ( *(unsigned int *)(v21 + 156) != dword_87E2B0 ) /*0x4044db*/
    {
      *(unsigned int *)(v21 + 160) = v22; /*0x404529*/
      v27 = (unsigned int *)(v21 + 164); /*0x40452f*/
      *(unsigned int *)(v21 + 156) = v24; /*0x404535*/
      *(unsigned int *)(v21 + 176) = v25; /*0x40453b*/
      DListNode::InitEmpty((DListNode *)(v21 + 164)); /*0x404543*/
LABEL_53:
      v29 = v27; /*0x404548*/
      v30 = v23 + 12 * v25; /*0x40454d*/
LABEL_54:
      InsertAfterDListNode(v30, v29); /*0x404550*/
      goto LABEL_55; /*0x404550*/
    }
    v26 = *(unsigned int *)(v21 + 160); /*0x4044dd*/
    if ( v22 > v26 ) /*0x4044e5*/
    {
      *(unsigned int *)(v21 + 160) = v22; /*0x4044e7*/
      v27 = (unsigned int *)(v21 + 164); /*0x4044ed*/
      *(unsigned int *)(v21 + 176) = v25; /*0x4044f3*/
      LinkedList::Init((LinkedList *)(v21 + 164)); /*0x4044fb*/
      goto LABEL_53; /*0x404500*/
    }
    if ( v22 == v26 && v25 > *(unsigned int *)(v21 + 176) ) /*0x40450a*/
    {
      v28 = (unsigned int *)(v21 + 164); /*0x40450c*/
      *(unsigned int *)(v21 + 176) = v25; /*0x404512*/
      LinkedList::Init((LinkedList *)(v21 + 164)); /*0x40451a*/
      v29 = v28; /*0x404522*/
      v30 = v23 + 12 * v25; /*0x404524*/
      goto LABEL_54; /*0x404527*/
    }
LABEL_55:
    v2 = (int)v40; /*0x404555*/
  }
  while ( v40 != &g_AudioStreamObject ); /*0x40455f*/
  if ( v42 <= 100 ) /*0x40456c*/
    goto LABEL_58; /*0x40456c*/
  v31 = 0x190000u / v42; /*0x404577*/
LABEL_59:
  RequestBufferMixer((unsigned int *)&stru_87E1B8, v31); /*0x404580*/
  result = Audio::InitChannels((char *)&stru_87E1B8); /*0x40458f*/
  v32 = *(DListNode **)g_AudioStreamObject.__pad_0; /*0x404594*/
  if ( *(DListNode **)g_AudioStreamObject.__pad_0 == &g_AudioStreamObject ) /*0x4045a0*/
  {
    dword_87E2B4 = 0; /*0x4046e6*/
  }
  else
  {
    do /*0x4046d0*/
    {
      v41 = *(DListNode **)v32->__pad_0; /*0x4045aa*/
      result = v32[3].DListNode_field_0x04; /*0x4045ae*/
      if ( result == 1 ) /*0x4045b4*/
      {
        result = *v32->u32_AC.__pad_0; /*0x4045ba*/
        if ( !result ) /*0x4045c2*/
        {
          PrefetchAudioSamples((ObjectClass *)v32); /*0x4045ca*/
          v33 = AudioStream::SetupPlayback((AudioStream *)v32); /*0x4045d1*/
          *v32->q0A4.__pad_0 = v33; /*0x4045d8*/
          if ( !v33 ) /*0x4045de*/
          {
            do /*0x40466b*/
            {
              v43 = 0; /*0x4045ed*/
              AudioQueue = PollNextAudioQueue(v32[42].DListNode_field_0x04 + *(unsigned int *)(v32[4].DListNode_field_0x04 + 64)); /*0x4045fa*/
              v35 = AudioQueue; /*0x4045ff*/
              if ( !AudioQueue ) /*0x404603*/
                break; /*0x404603*/
              LinkedList::Init((LinkedList *)(AudioQueue + 164)); /*0x40460b*/
              v36 = *(VocClass **)g_AudioStreamObject.__pad_0; /*0x404610*/
              if ( *(DListNode **)g_AudioStreamObject.__pad_0 == &g_AudioStreamObject ) /*0x40461c*/
                break; /*0x40461c*/
              do /*0x404645*/
              {
                v37 = (DListNode *)v36->Header[0]; /*0x404621*/
                if ( v36->Volume[3] == v35 ) /*0x404625*/
                {
                  VocClass::Release(v36); /*0x404629*/
                  Audio::FlushChannel((Audio *)v36); /*0x404630*/
                  v43 = 1; /*0x404635*/
                }
                v36 = (VocClass *)v37; /*0x404643*/
              }
              while ( v37 != &g_AudioStreamObject ); /*0x404645*/
              if ( !v43 ) /*0x40464d*/
                break; /*0x40464d*/
              v41 = *(DListNode **)v32->__pad_0; /*0x404651*/
              PrefetchAudioSamples((ObjectClass *)v32); /*0x404657*/
              v38 = AudioStream::SetupPlayback((AudioStream *)v32); /*0x40465e*/
              *v32->q0A4.__pad_0 = v38; /*0x404665*/
            }
            while ( !v38 ); /*0x40466b*/
          }
          v39 = AudioStream::SetupPlayback((AudioStream *)v32); /*0x404673*/
          *v32->q0A4.__pad_0 = v39; /*0x40467a*/
          if ( !v39 || (result = Audio::UpdatePlaybackPosition((Audio *)v32)) == 0 ) /*0x40468d*/
          {
            if ( (v32[3].__pad_0[0] & 1) == 0 ) /*0x404693*/
            {
              Voice::DetachChannel((Voice *)v32); /*0x404697*/
              Audio::ReleaseChannelRefs((Audio *)v32); /*0x40469e*/
              v32[3].DListNode_field_0x04 = 4; /*0x4046a3*/
              *v32->location.__pad_0 = 0; /*0x4046aa*/
              *v32->q13C.__pad_0 = 0; /*0x4046b0*/
              *v32->vtable4.__pad_0 |= 1u; /*0x4046bc*/
            }
            result = Audio::FlushChannel((Audio *)v32); /*0x4046c1*/
          }
        }
      }
      v32 = v41; /*0x4046c6*/
    }
    while ( v41 != &g_AudioStreamObject ); /*0x4046d0*/
    dword_87E2B4 = 0; /*0x4046d6*/
  }
  return result; /*0x4046e0*/

}
}
// 0x404BB0
namespace gamemd {
TechnoTypeClass * ObjectClass::sub_404BB0()
{
  unsigned int *occupant; // edi
  int v3; // eax
  char v4; // bl
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int *v12; // ecx
  int temporalUsing; // eax
  int gapRadius; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  int *v19; // eax
  int v20; // eax
  int v21; // edi

  occupant = (unsigned int *)this->occupant; /*0x404bb6*/
  v3 = occupant[4]; /*0x404bc5*/
  v4 = v3; /*0x404bca*/
  if ( *(unsigned int *)this->gapSuperCharged == *(unsigned int *)this->isBeingWarpedOut ) /*0x404bcc*/
  {
    v5 = 0; /*0x404bd2*/
    v6 = v3 & 1; /*0x404bd4*/
    if ( !v6 && this->gapRadius == 1 ) /*0x404be0*/
      return -1; /*0x404be0*/
    if ( v6 ) /*0x404be4*/
    {
      v7 = occupant[19]; /*0x404be6*/
      if ( v7 ) /*0x404beb*/
      {
        if ( this->gapRadius >= v7 ) /*0x404bf3*/
          return -1; /*0x404bfc*/
      }
    }
    v9 = occupant[78]; /*0x404bfd*/
    if ( v9 && (this->nextArrayIndex & 8) == 0 ) /*0x404c0b*/
    {
      this->infantryBlinkTimer[2] = Random::Range(&Randomizer_Global, 0, v9 - 1); /*0x404c1b*/
      v5 = 1; /*0x404c21*/
    }
    v10 = occupant[4]; /*0x404c26*/
    if ( (v10 & 4) != 0 ) /*0x404c2b*/
    {
      v11 = occupant[78]; /*0x404c39*/
      if ( v11 < occupant[77] - occupant[79] ) /*0x404c43*/
      {
        v12 = &this->infantryBlinkTimer[v5 + 2]; /*0x404c45*/
        do /*0x404c61*/
        {
          *v12 = v11; /*0x404c4c*/
          ++v5; /*0x404c5a*/
          ++v12; /*0x404c5b*/
          ++v11; /*0x404c5e*/
        }
        while ( v11 < occupant[77] - occupant[79] ); /*0x404c61*/
      }
    }
    else
    {
      if ( (v10 & 2) != 0 ) /*0x404c67*/
      {
        if ( this->gapRadius ) /*0x404c69*/
        {
          temporalUsing = this->temporalUsing; /*0x404c9c*/
        }
        else
        {
          temporalUsing = Random::Range(&Randomizer_Global, occupant[78], occupant[77] - occupant[79] - 1); /*0x404c8f*/
          this->temporalUsing = temporalUsing; /*0x404c94*/
        }
      }
      else
      {
        temporalUsing = occupant[78]; /*0x404ca4*/
      }
      this->infantryBlinkTimer[v5++ + 2] = temporalUsing; /*0x404caa*/
    }
    gapRadius = this->gapRadius; /*0x404cb2*/
    *(unsigned int *)this->gapSuperCharged = v5; /*0x404cb8*/
    *(unsigned int *)this->isBeingWarpedOut = 0; /*0x404cbf*/
    this->gapRadius = gapRadius + 1; /*0x404cc9*/
  }
  if ( (v4 & 2) == 0 ) /*0x404cd2*/
    goto LABEL_34; /*0x404cd2*/
  if ( !occupant[78] ) /*0x404ce0*/
  {
  LABEL_29:
    v15 = 0; /*0x404d03*/
    goto LABEL_30; /*0x404d03*/
  }
  if ( (this->nextArrayIndex & 8) == 0 && *(int *)this->isBeingWarpedOut <= 0 ) /*0x404cf0*/
  {
  LABEL_34:
    v20 = *(unsigned int *)this->isBeingWarpedOut; /*0x404d5d*/
    v21 = this->infantryBlinkTimer[v20 + 2]; /*0x404d63*/
    *(unsigned int *)this->isBeingWarpedOut = v20 + 1; /*0x404d6b*/
    return v21; /*0x404d71*/
  }
  if ( (this->nextArrayIndex & 8) != 0 ) /*0x404cfa*/
    goto LABEL_29; /*0x404cfa*/
  v15 = 1; /*0x404cfc*/
  LABEL_30:
  v16 = Random::Range(&Randomizer_Global, v15, *(unsigned int *)this->gapSuperCharged - 1); /*0x404d05*/
    v17 = this->infantryBlinkTimer[v16 + 2]; /*0x404d1e*/
    v18 = v16; /*0x404d2f*/
    if ( v16 < *(unsigned int *)this->gapSuperCharged - 1 ) /*0x404d31*/
  {
    v19 = &this->infantryBlinkTimer[v16 + 2]; /*0x404d33*/
    do /*0x404d47*/
    {
      ++v18; /*0x404d38*/
      *v19 = v19[1]; /*0x404d39*/
      ++v19; /*0x404d41*/
    }
    while ( v18 < *(unsigned int *)this->gapSuperCharged - 1 ); /*0x404d47*/
  }
    --*(unsigned int *)this->gapSuperCharged; /*0x404d50*/
    return v17; /*0x404bf5*/
}
}
// 0x405AC0
namespace gamemd {
int E4Recv_405AC0::sub_405AC0()
{
  unsigned int *v2; // esi
  unsigned int *v3; // ebx
  int v5; // eax
  unsigned int v6; // eax

  v2 = (unsigned int *)this->nextObject; /*0x405ac5*/
  v3 = (unsigned int *)AudioStream::SelectRandom((int)v2); /*0x405ad2*/
  if ( *(unsigned int *)(v2[9] + 92) < 0x21u ) /*0x405adb*/
    goto LABEL_2; /*0x405adb*/
  BindChannelAudioStream(0); /*0x405af0*/
  v5 = v2->q024; /*0x405af5*/
  if ( (*(unsigned char *)(v5 + 16) & 0x88) == 0 || v3 || v2->q268 ) /*0x405b02*/
  {
    v6 = Random::Range(&Randomizer_Global, *(unsigned int *)(v5 + 88), *(unsigned int *)(v5 + 92)); /*0x405b19*/
    if ( v6 < 0x21 ) /*0x405b21*/
    {
  LABEL_2:
      BindChannelAudioStream(v3); /*0x405add*/
    return 0; /*0x405aeb*/
    }
    v2->q13C = v6; /*0x405b32*/
    v2[82] = v3; /*0x405b38*/
  }
  return 0; /*0x405ae8*/
}
}
// 0x405E80
namespace gamemd {
unsigned int * E4Recv_405E80::sub_405E80()
{

  unsigned int *result; // eax
  char *vtable0; // esi
  int v3; // ecx
  int v4; // ecx
  int v5; // ebp
  RefCount **v6; // edi
  Voice *v7; // [esp+0h] [ebp-10h]

  result = &this->AbstractClass; /*0x405e81*/
  if ( g_AudioConfigState ) /*0x405e94*/
  {
    if ( this->q018 == &dword_87E294 ) /*0x405ea1*/
    {
      vtable0 = (char *)this->AbstractClass; /*0x405ea7*/
      if ( this->AbstractClass ) /*0x405ea7*/
      {
        v3 = vtable0->u32_24; /*0x405eb1*/
        if ( result->vtable3 != v3 || result->vtable2 != vtable0->u32_138 ) /*0x405eca*/
        {
LABEL_19:
          *result = 0; /*0x405fc1*/
  goto LABEL_20; /*0x405fc1*/
        }
        if ( (*(unsigned char *)(v3 + 16) & 1) != 0 && !*(unsigned int *)(v3 + 76) ) /*0x405eda*/
        {
          if ( (vtable0[24] & 1) == 0 ) /*0x405ee7*/
          {
            v4 = vtable0->u32_B0; /*0x405eed*/
            if ( v4 && vtable0 == *(char **)(v4 + 192) ) /*0x405efd*/
            {
              if ( (vtable0[24] & 2) != 0 ) /*0x405f03*/
                Voice::Stop(v7); /*0x405f05*/
              AudioStream::ReleaseChannel(vtable0->u32_B0); /*0x405f10*/
              *(unsigned int *)(*(&vtable0->u32_B0) + 192) = 0; /*0x405f1b*/
              *(unsigned int *)(*((unsigned int *)vtable0 + 44) + 188) = 0; /*0x405f27*/
              *(unsigned int *)(*((unsigned int *)vtable0 + 44) + 180) = 0; /*0x405f33*/
              *(unsigned int *)(*((unsigned int *)vtable0 + 44) + 184) = 0; /*0x405f3f*/
              *(unsigned int *)(*((unsigned int *)vtable0 + 44) + 144) = 0; /*0x405f4b*/
              *(unsigned int *)(*((unsigned int *)vtable0 + 44) + 152) = 0; /*0x405f57*/
              *(unsigned int *)(*((unsigned int *)vtable0 + 44) + 156) = 0; /*0x405f63*/
              result = &this->AbstractClass; /*0x405f69*/
              vtable0->u32_B0 = 0; /*0x405f6d*/
            }
            v5 = 0; /*0x405f7a*/
            if ( vtable0->u32_A8 > 0 ) /*0x405f7e*/
            {
              v6 = &vtable0->ObjectClass_28; /*0x405f80*/
              do /*0x405f98*/
              {
                RefCount::Decrement(*v6); /*0x405f85*/
                *v6 = 0; /*0x405f8a*/
                ++v5; /*0x405f92*/
                ++v6; /*0x405f93*/
              }
              while ( v5 < vtable0->u32_A8 ); /*0x405f98*/
              result = &this->AbstractClass; /*0x405f9a*/
            }
            vtable0->u32_A8 = 0; /*0x405f9e*/
            vtable0->u32_1C = 4; /*0x405fa4*/
            vtable0->u32_138 = 0; /*0x405fab*/
            vtable0->u32_278 = 0; /*0x405fb1*/
            vtable0->u32_18 |= 1u; /*0x405fbd*/
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
// 0x406750
namespace gamemd {
int sub_406750()
{
  return dword_816108; /*0x406755*/
}
} // namespace gamemd

// 0x406760
namespace gamemd {
void * ObjectClass::sub_406760()
{

  void *result; // eax
  char Buffer[200]; // [esp+4h] [ebp-C8h] BYREF

  result = dword_87E298; /*0x406760*/
  if ( dword_87E298 )
  {
    sprintf(Buffer, "AudioEvents : %05d - Max: %05d", dword_87E28C, dword_87E290);
    ((void (*)(char *))this)(Buffer); /*0x406795*/
    sprintf(Buffer, "StaticSounds: %05d - Max: %05d", dword_B1D3A8, dword_B1D3AC);
    return ((void *(*)(char *))this)(Buffer); /*0x4067ba*/
  }
  return result; /*0x4067bc*/

}
}
// 0x406B10
namespace gamemd {
int E4Recv_406B10::InitializeAudioSubsystem()
{

  int *v2; // eax
  unsigned int *v3; // eax
  char v4; // bl
  MixFileClass *v5; // eax
  MixFileClass *v6; // eax
  ObjectClass *v8; // [esp+0h] [ebp-94h]
  Struct v9; // [esp+8h] [ebp-8Ch] BYREF
  int v10; // [esp+Ch] [ebp-88h]
  int v11; // [esp+10h] [ebp-84h]
  int v12; // [esp+14h] [ebp-80h]
  int v13; // [esp+18h] [ebp-7Ch]
  CCFileClass v14; // [esp+28h] [ebp-6Ch] BYREF
  int v15[3]; // [esp+80h] [ebp-14h] BYREF
  int v16; // [esp+8Ch] [ebp-8h]

  sub_409360(); /*0x406b1a*/
  AudioMixer::Init(&g_MixerBuffer1); /*0x406b24*/
  g_MixerChannel_SFX = (ObjectClass *)&g_MixerBuffer1; /*0x406b2e*/
  AudioMixer::Init(&g_MixerBuffer2); /*0x406b38*/
  g_MixerChannel_Theme = (ObjectClass *)&g_MixerBuffer2; /*0x406b42*/
  AudioMixer::Init(&g_MixerBuffer3); /*0x406b4c*/
  g_MixerChannel_Voice = (ObjectClass *)&g_MixerBuffer3; /*0x406b56*/
  AudioMixer::Init(&g_MixerBuffer4); /*0x406b60*/
  g_MixerChannel_Score = (ObjectClass *)&g_MixerBuffer4; /*0x406b6a*/
  AudioMixer::Init(&g_MixerBuffer5); /*0x406b74*/
  g_MixerChannel_Misc = (ObjectClass *)&g_MixerBuffer5; /*0x406b7e*/
  AudioMixer::Init(&g_MixerBuffer6); /*0x406b88*/
  g_MixerChannel_Stream = (ObjectClass *)&g_MixerBuffer6; /*0x406b92*/
  AudioMixer::Init(&g_MixerBuffer7); /*0x406b9c*/
  g_MixerChannel_Ambient = (ObjectClass *)&g_MixerBuffer7; /*0x406ba6*/
  AudioMixer::Init(&g_MixerBuffer8); /*0x406bb0*/
  g_MixerState = (ObjectClass *)&g_MixerBuffer8; /*0x406bb7*/
  if ( this ) /*0x406bc3*/
  {
    sub_402940(v8); /*0x406bc9*/
    AudioQueue::CreateNode(off_816514); /*0x406bd4*/
    Struct::ZeroInit32(&v9); /*0x406bdd*/
    v11 = 22050; /*0x406beb*/
    v10 = 0; /*0x406bf3*/
    v12 = 2; /*0x406bf7*/
    v13 = 2; /*0x406bfb*/
    v9.Struct_field_00 = 4; /*0x406bff*/
    sub_4085B0((ObjectClass *)&v9); /*0x406c07*/
    v2 = CreateAudioChannel(-1, &v9); /*0x406c13*/
    g_Audio_Enabled = (AudioStream *)v2; /*0x406c1a*/
    if ( !v2 || AudioQueue::PreallocateChannels((AudioController *)v2, 16) != 16 ) /*0x406c34*/
    {
LABEL_11:
      this = 0; /*0x406cf6*/
      goto LABEL_12; /*0x406cf6*/
    }
    g_MixerChannel_SFX = &g_Audio_Enabled->q068; /*0x406c4c*/
    v3 = CCFileClass::Construct(&v14, aAudiomdMix); /*0x406c51*/
    v4 = v3->vt_slot_20(0); /*0x406c65*/
    *(unsigned int *)v14.__tail_0 = &vt_CCFileClass; /*0x406c67*/
    v16 = 0; /*0x406c6f*/
    Vector::Clear((int)v15); /*0x406c76*/
    *(unsigned int *)v14.__tail_0 = &off_7E1668; /*0x406c7f*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x406c87*/
    if ( v4 ) /*0x406c91*/
    {
      v5 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x406c93*/
      if ( v5 ) /*0x406c9d*/
      {
        g_MixFile_AUDIO = (int)MixFileClass::FromFile(v5, aAudiomdMix, (int)dword_886980); /*0x406cb0*/
        goto LABEL_10; /*0x406cb5*/
      }
    }
    else
    {
      v6 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x406cb7*/
      if ( v6 ) /*0x406cc1*/
      {
        g_MixFile_AUDIO = (int)MixFileClass::FromFile(v6, aAudioMix, (int)dword_886980); /*0x406cd4*/
        goto LABEL_10; /*0x406cd9*/
      }
    }
    g_MixFile_AUDIO = 0; /*0x406cdb*/
LABEL_10:
    g_AudioFileData = (ObjectClass *)LoadAudioFile(aAudio, 0); /*0x406ce1*/
    if ( g_AudioFileData ) /*0x406cf4*/
      goto LABEL_12; /*0x406cf4*/
    goto LABEL_11; /*0x406cf4*/
  }
LABEL_12:
  sub_407550(); /*0x406cf8*/
  if ( !sub_403ED0((int)g_Audio_Enabled, (int)g_AudioFileData) ) /*0x406d09*/
    this = 0; /*0x406d12*/
  Audio_Init_752290(); /*0x406d14*/
  Audio_Init_752AD0(); /*0x406d19*/
  g_AudioInitialized = (int)this; /*0x406d1e*/
  return 1; /*0x406d29*/

}
}
// 0x406EC0
namespace gamemd {
int sub_406EC0()
{
  int i; // esi
  int result; // eax

  sub_751080(); /*0x406ec0*/
  result = AudioStream::UpdateCountdowners(); /*0x406ec5*/
  if ( g_Audio_Enabled ) /*0x406ed2*/
  {
    result = ((AudioQueue *)((AudioQueue *)&g_Audio_Enabled->__pad_D8[32]))->GetNext(); /*0x4037ca*/
    for ( i = result; result; i = result ) /*0x4037d3*/
    {
      if ( (*(unsigned char *)(i + 164) & 4) != 0 && *(unsigned int *)(i + 12) == 1 ) /*0x4037e6*/
        result = AudioChannel::ActivatePlay((AudioChannel *)i); /*0x4037ea*/
      if ( !i ) /*0x4037f1*/
        break; /*0x4037f1*/
      result = ((AudioQueue *)((AudioQueue *)i))->GetNextAlt(); /*0x4037f5*/
    }
  }
  return result; /*0x406ede*/
}
}
// 0x406F40
namespace gamemd {
int sub_406F40()
{
  int i; // esi
  int result; // eax

  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ_1(); /*0x406f40*/
  AudioMixer::Pump(); /*0x406f45*/
  sub_751080(); /*0x406f4a*/
  result = AudioStream::UpdateCountdowners(); /*0x406f4f*/
  if ( g_Audio_Enabled ) /*0x406f5c*/
  {
    result = ((AudioQueue *)((int *)g_Audio_Enabled + 62))->GetNext(); /*0x4037ca*/
    for ( i = result; result; i = result ) /*0x4037d3*/
    {
      if ( (*(unsigned char *)(i + 164) & 4) != 0 && *(unsigned int *)(i + 12) == 1 ) /*0x4037e6*/
        result = AudioChannel::ActivatePlay((unsigned int *)i); /*0x4037ea*/
      if ( !i ) /*0x4037f1*/
        break; /*0x4037f1*/
      result = ((AudioQueue *)((int *)i))->GetNextAlt(); /*0x4037f5*/
    }
  }
  return result; /*0x406f68*/
}
}
// 0x406F70
namespace gamemd {
void * AudioVideo_Update(ObjectClass * a1)
{
  AudioStream *result; // eax
  int v2; // esi
  unsigned int v3; // edx
  unsigned int v4; // edi

  result = (AudioStream *)dword_87E75C; /*0x406f70*/
  if ( !dword_87E75C ) /*0x406f7a*/
  {
    result = g_Audio_Enabled; /*0x406f7c*/
    if ( g_Audio_Enabled ) /*0x406f83*/
    {
      dword_87E75C = 1; /*0x406f87*/
      v2 = Audio::Callback(); /*0x406f9c*/
      v4 = v3; /*0x406f9e*/
      result = (AudioStream *)(v2 - qword_87E760); /*0x406fa6*/
      if ( (((unsigned long)(unsigned int)(v2)) | ((unsigned long)(unsigned int)(v3) << 32)) - qword_87E760 > 0x21 ) /*0x406fb5*/
      {
        ProcessAudioFrame(a1); /*0x406fb7*/
        UpdateVocClass(); /*0x406fbc*/
        UpdateThemes(); /*0x406fc1*/
        Movie::Update(&unk_A83D10); /*0x406fcb*/
        result = (AudioStream *)Audio_Update(); /*0x406fd0*/
        (*((unsigned int *)&(qword_87E760))) = v2; /*0x406fd5*/
        (*(((unsigned int *)&(qword_87E760)) + 1)) = v4; /*0x406fdb*/
      }
      dword_87E75C = 0; /*0x406fe2*/
    }
  }
  return result; /*0x406fed*/
}
}
// 0x407040
namespace gamemd {
int sub_407040(int a1)
{
  int result; // eax
  int v2; // [esp+Ch] [ebp-4h] BYREF

  result = dword_87E730; /*0x407040*/
  if ( dword_87E730 ) /*0x407047*/
  {
    result = dword_87E730 - 1; /*0x407049*/
    dword_87E730 = result; /*0x40704a*/
    if ( !result ) /*0x40704f*/
    {
      v2 = a1; /*0x40a950*/
      result = dword_87E8A0; /*0x40a951*/
      if ( dword_87E8A0 ) /*0x40a958*/
      {
        result = (*(int (__stdcall **)(int, int *))(*(unsigned int *)dword_87E8A0 + 36))(dword_87E8A0, &v2); /*0x40a962*/
        if ( (v2 & 2) != 0 ) /*0x40a96a*/
          result = (*(int (__stdcall **)(int))(*(unsigned int *)dword_87E8A0 + 80))(dword_87E8A0); /*0x40a974*/
        if ( (v2 & 1) == 0 ) /*0x40a97c*/
          return (*(int (__stdcall **)(int, unsigned int, unsigned int, int))(*(unsigned int *)dword_87E8A0 + 48))(dword_87E8A0, 0, 0, 1); /*0x40a98c*/
      }
    }
  }
  return result; /*0x407056*/
}
}
// 0x407B60
namespace gamemd {
RawFileClass * * ThreadAudioMixerMain(unsigned int * a1, RawFileClass * a2, int a3)
{
  void (__thiscall ***v5)(unsigned int, int); // ecx
  BufferIOFileClass *v6; // eax
  unsigned int *v7; // eax
  void (__thiscall ***v8)(unsigned int, int); // ecx
  CCFileClass *v9; // eax
  unsigned int *v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  Count *v14; // ecx
  Count *v15; // ecx
  ObjectClass *v16; // edi
  int v17; // ebp
  int *v18; // eax
  int v19; // eax
  unsigned int *v20; // ecx
  int v21; // eax
  int v22; // ecx
  uint64_t v23; // kr00_8
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
  Audio *v34; // ecx
  int v35; // eax
  Count *v36; // ecx
  Count *v37; // ecx
  Count *v38; // ecx
  Count *v39; // ecx
  int v41; // eax
  int v42; // edx
  void (__thiscall ***v43)(unsigned int, int); // ecx
  Voice *v44; // [esp+8h] [ebp-10h]

  if ( a1[34] ) /*0x407b6a*/
    return 0; /*0x407ef8*/
  if ( a1[5] ) /*0x407b78*/
  {
    EnterCriticalSection(&unk_87E7F8); /*0x407b82*/
    ((Voice *)(v44))->Stop(); /*0x407b8b*/
    LeaveCriticalSection(&unk_87E7F8); /*0x407b95*/
  }
  v5 = (void (__thiscall ***)(unsigned int, int))a1[31]; /*0x407b9b*/
  if ( v5 ) /*0x407ba0*/
  {
    (**v5)(v5, 1); /*0x407ba6*/
    a1[31] = 0; /*0x407ba8*/
  }
  if ( !a3 )
  {
    v6 = (BufferIOFileClass *)operator new(0x24u); /*0x407bb3*/
    v7 = v6 ? RawFileClass::Construct(v6, (int)a2) : 0;
    a1[31] = v7; /*0x407bcd*/
    if ( v7 ) /*0x407bd0*/
    {
      if ( !(*(uint8_t (__thiscall **)(unsigned int *, unsigned int))(*v7 + 20))(v7, 0) ) /*0x407bd7*/
      {
        v8 = (void (__thiscall ***)(unsigned int, int))a1[31]; /*0x407bde*/
        if ( v8 ) /*0x407be3*/
          (**v8)(v8, 1); /*0x407be9*/
        a1[31] = 0; /*0x407beb*/
      }
    }
  }
  if ( !a1[31] ) /*0x407bee*/
  {
    v9 = (CCFileClass *)operator new(0x6Cu); /*0x407bf5*/
    if ( v9 ) /*0x407bff*/
      v10 = CCFileClass::Construct(v9, a2); /*0x407c04*/
    else
      v10 = 0; /*0x407c0b*/
    a1[31] = v10; /*0x407c0d*/
  }
  v11 = a1[31]; /*0x407c10*/
  if ( !v11 ) /*0x407c15*/
    goto LABEL_51; /*0x407c15*/
  if ( !(*(uint8_t (__thiscall **)(int, unsigned int))(*(unsigned int *)v11 + 20))(v11, 0) /*0x407c30*/
    || !(*(int (__thiscall **)(unsigned int, int))(*(unsigned int *)a1[31] + 28))(a1[31], 1) )
  {
    v43 = (void (__thiscall ***)(unsigned int, int))a1[31]; /*0x407f23*/
    if ( v43 ) /*0x407f28*/
      (**v43)(v43, 1); /*0x407f2e*/
    a1[31] = 0; /*0x407f30*/
    goto LABEL_51; /*0x407f33*/
  }
  *(unsigned char *)(a1[31] + 4) = 1; /*0x407c48*/
  if ( !ParseWaveFileHeader(a1[31], a1 + 23, a1 + 37) ) /*0x407c51*/
    goto LABEL_51; /*0x407c51*/
  v12 = a1[31]; /*0x407c60*/
  a1[39] = a1[37]; /*0x407c63*/
  v13 = (*(int (__thiscall **)(int, unsigned int, int))(*(unsigned int *)v12 + 40))(v12, 0, 1); /*0x407c6e*/
  v14 = (Count *)a1[13]; /*0x407c71*/
  a1[38] = v13; /*0x407c74*/
  if ( v14 ) /*0x407c7c*/
  {
    Count::DecrementRefCountsAudio(v14); /*0x407c7e*/
    a1[13] = 0; /*0x407c83*/
  }
  v15 = (Count *)a1[14]; /*0x407c86*/
  if ( v15 ) /*0x407c8b*/
  {
    Count::DecrementRefCountsAudio(v15); /*0x407c8d*/
    a1[14] = 0; /*0x407c92*/
  }
  v16 = (ObjectClass *)a1[12]; /*0x407c9b*/
  v17 = Audio::CalcRate((Audio *)(a1 + 23), a1[6], a1[7]); /*0x407caa*/
  a1[40] = Audio::CalcRate((Audio *)(a1 + 23), 2 * *(unsigned int *)(a1[5] + 424), *(unsigned long long *)(a1[5] + 424) >> 31); /*0x407cce*/
  if ( AudioStream::GetChannel((AudioStream *)v16) != v17 ) /*0x407cdb*/
  {
    sub_408970(v16); /*0x407cdf*/
    v18 = sub_408D80(v17, 0); /*0x407ce8*/
    if ( v18 ) /*0x407cef*/
      sub_408B10(v16, v18); /*0x407cf5*/
  }
  if ( AudioStream::GetChannel((AudioStream *)v16) != v17 ) /*0x407d03*/
    goto LABEL_51; /*0x407d03*/
  AudioMixer::SetupChannels((AudioMixer *)a1[12]); /*0x407d0c*/
  v19 = AcquireAudioStreamBuffer((unsigned int *)a1[12], 0); /*0x407d16*/
  v20 = (unsigned int *)a1[12]; /*0x407d1b*/
  a1[13] = v19; /*0x407d23*/
  v21 = AcquireAudioStreamBuffer(v20, 1); /*0x407d26*/
  v22 = a1[13]; /*0x407d2b*/
  a1[14] = v21; /*0x407d2e*/
  if ( !v22 || !v21 ) /*0x407d3b*/
    goto LABEL_51; /*0x407d3b*/
  v23 = 2LL * *(unsigned long long *)(a1[5] + 432); /*0x407d5d*/
  if ( v23 <= 4LL * *(unsigned long long *)&qword_87E780 ) /*0x407d7e*/
    v23 = 4LL * *(unsigned long long *)&qword_87E780; /*0x407d98*/
  if ( v23 <= 0xFA0 ) /*0x407da6*/
    v23 = 4000; /*0x407dad*/
  EnterCriticalSection(&unk_87E7F8); /*0x407db4*/
  if ( v23 ) /*0x407dbe*/
  {
    v24 = Audio::CalcRate((Audio *)(a1 + 23), v23, (*((signed int *)(((unsigned char *)&(v23)) + 4)))); /*0x407dc4*/
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
    (*((unsigned char *)&(v27))) = v27 & 0xFB; /*0x407e20*/
    a1[3] = v27; /*0x407e22*/
  }
  LeaveCriticalSection(&unk_87E7F8); /*0x407e2a*/
  if ( !a3 ) /*0x407e36*/
  {
  LABEL_51:
    v38 = (Count *)a1[13]; /*0x407ed4*/
    if ( v38 ) /*0x407ed9*/
  {
      Count::DecrementRefCountsAudio(v38); /*0x407edb*/
      a1[13] = 0; /*0x407ee0*/
  }
    v39 = (Count *)a1[14]; /*0x407ee3*/
    if ( v39 ) /*0x407ee8*/
  {
      Count::DecrementRefCountsAudio(v39); /*0x407eea*/
      a1[14] = 0; /*0x407eef*/
  }
    return 0; /*0x407eef*/
  }
  AudioStream::ReadStreamAndReturn((AudioStream *)a1[14]); /*0x407e3f*/
  v28 = a1[5]; /*0x407e47*/
  a1[15] = *(unsigned int *)(a1[14] + 4); /*0x407e50*/
  v29 = Audio::CalcRate((Audio *)(a1 + 23), *(unsigned int *)(v28 + 424), *(unsigned int *)(v28 + 428)); /*0x407e62*/
  v30 = a1[14]; /*0x407e67*/
  a1[16] = v29; /*0x407e6a*/
  v31 = v30->u32_8; /*0x407e6d*/
  if ( v29 > v31 ) /*0x407e72*/
    a1[16] = v31; /*0x407e74*/
  v32 = a1[16]; /*0x407e7a*/
  v33 = (int *)(a1[5] + 16); /*0x407e82*/
  a1[20] = a1 + 23; /*0x407e85*/
  a1[36] = v32; /*0x407e88*/
  EndBufferMixer(v33, 0x4000); /*0x407e8e*/
  BindChannelAudioStream((unsigned int *)a1[5], a1 + 15); /*0x407e98*/
  v34 = (Audio *)a1[5]; /*0x407ea0*/
  a1[3] |= 1u; /*0x407ea6*/
  if ( Audio::GetChannelStatus(v34) ) /*0x407ea9*/
  {
    v35 = a1[3]; /*0x407eb2*/
    v36 = (Count *)a1[13]; /*0x407eb5*/
    (*((unsigned char *)&(v35))) = v35 & 0xFE; /*0x407eb8*/
    a1[3] = v35; /*0x407eba*/
    Count::DecrementRefCountsAudio(v36); /*0x407ebd*/
    v37 = (Count *)a1[14]; /*0x407ec2*/
    a1[13] = 0; /*0x407ec7*/
    Count::DecrementRefCountsAudio(v37); /*0x407eca*/
    a1[14] = 0; /*0x407ecf*/
    goto LABEL_51; /*0x407ecf*/
  }
  a1[10] = Audio::Callback(); /*0x407f00*/
  v41 = a1[3]; /*0x407f03*/
  a1[11] = v42; /*0x407f06*/
  (*((unsigned char *)&(v41))) = v41 | 4; /*0x407f0c*/
  a1[8] = a1[10]; /*0x407f0e*/
  a1[9] = v42; /*0x407f11*/
  a1[3] = v41; /*0x407f14*/
  return 1; /*0x407ef2*/
}
}
// 0x408610
namespace gamemd {
AbstractClass * * sub_408610(int a1, unsigned int * a2, size_t * a3)
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
  unsigned int v16[3]; // [esp+24h] [ebp-Ch] BYREF

  v3 = 0; /*0x40861b*/
  v4 = 0; /*0x40861d*/
  if ( a3 ) /*0x408629*/
    *a3 = 0; /*0x40862b*/
  if ( a1 ) /*0x40862f*/
  {
    (*(void (**)(int, unsigned int, unsigned int))(*(unsigned int *)a1 + 40))(a1, 0, 0); /*0x40863e*/
    if ( (*(int (**)(int, unsigned int *, int))(*(unsigned int *)a1 + 36))(a1, v16, 12) == 12 /*0x40867a*/
      && v16[0] == 1179011410
      && v16[2] == 1163280727
      && (*(unsigned __int8 (**)(int))(*(unsigned int *)a1 + 24))(a1) )
    {
      while ( (*(int (**)(int, int *, int))(*(unsigned int *)a1 + 36))(a1, &v14, 8) == 8 ) /*0x408697*/
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
            *(unsigned int *)v3 = 0; /*0x4086dd*/
            v3->ptr_4 = 0; /*0x4086df*/
            v3->ptr_8 = 0; /*0x4086e2*/
            v3->u32_C = 0; /*0x4086e5*/
            v3[8] = 0; /*0x4086e8*/
          }
          (*(void (**)(int, unsigned __int16 *, size_t))(*(unsigned int *)a1 + 36))(a1, v3, Size); /*0x40871e*/
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
            a2[5] = v3->ptr_8; /*0x408798*/
            v9 = v8 * a2[4]; /*0x40879e*/
            v10 = v3->ptr_4; /*0x4087a1*/
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
          (*(void (**)(int, size_t, int))(*(unsigned int *)a1 + 40))(a1, Size, 1); /*0x4086bf*/
        }
        if ( !(*(unsigned __int8 (**)(int))(*(unsigned int *)a1 + 24))(a1) ) /*0x40872f*/
          break; /*0x408734*/
      }
      if ( v3 ) /*0x4087d4*/
        free(v3); /*0x4087d7*/
    }
  }
  return v4; /*0x4087e1*/

}
}
// 0x408970
namespace gamemd {
int E4Recv_408970::sub_408970()
{

  ObjectClass *v1; // edx
  char *v2; // ebx
  void **vtable1; // esi
  void **p_vtable1; // edi
  unsigned int *v5; // eax
  int v6; // edx
  unsigned int *v7; // esi
  void **v8; // eax
  unsigned int *v9; // ecx
  int v10; // edx
  int *v11; // edi
  int v12; // ecx
  int *v13; // eax
  int result; // eax

  v1 = this; /*0x408973*/
  v2 = 0; /*0x408977*/
  vtable1 = (void **)this->M4; /*0x408979*/
  p_vtable1 = &this->M4; /*0x40897c*/
  if ( vtable1 != &this->M4 ) /*0x408985*/
  {
    do /*0x4089ce*/
    {
      LinkedList::Init((LinkedList *)vtable1); /*0x40898e*/
      v5 = vtable1[12]; /*0x408993*/
      vtable1[12] = 0; /*0x408996*/
      v6 = v5[5]; /*0x40899b*/
      --*v5; /*0x40899f*/
      v5[5] = v6 - (unsigned int)vtable1[7]; /*0x4089a6*/
      v5[4] &= ~2u; /*0x4089ae*/
      if ( vtable1[4] ) /*0x4089b1*/
        __3_YAXPAX_Z(vtable1[4]); /*0x4089b9*/
      __3_YAXPAX_Z(vtable1); /*0x4089c2*/
      vtable1 = (void **)*p_vtable1; /*0x4089c7*/
    }
    while ( *p_vtable1 != p_vtable1 ); /*0x4089ce*/
    v1 = this; /*0x4089d0*/
  }
  v7 = *p_vtable1; /*0x4089d4*/
  if ( *p_vtable1 == p_vtable1 ) /*0x4089d8*/
  {
    v7 = 0; /*0x4089da*/
  }
  else if ( v7 ) /*0x4089e0*/
  {
    v8 = (void **)*p_vtable1; /*0x4089e2*/
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
      v8 = (void **)*v8; /*0x408a00*/
      ++v2; /*0x408a02*/
    }
    while ( v8 != p_vtable1 ); /*0x408a05*/
    v1 = this; /*0x408a07*/
  }
  v11 = &v1->ambientSoundController[4]; /*0x408a0d*/
  v12 = 2; /*0x408a10*/
  v13 = &v1->ambientSoundController[4]; /*0x408a15*/
  do /*0x408a51*/
  {
    *(v13 - 3) = (int)v7; /*0x408a17*/
    *v13 = -1001; /*0x408a1a*/
    v13->AudioController_field_04 = *v13; /*0x408a22*/
    *(v13 - 1) = 0; /*0x408a27*/
    *(v13 - 2) = 0; /*0x408a2a*/
    *(v13 - 10) = (int)v7; /*0x408a2d*/
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
  *v11 += v1->?; /*0x408a5a*/
  return result; /*0x408a5c*/

}
}
// 0x408C30
namespace gamemd {
int AudioStream_AcquireBuffer(unsigned int * a1, int a2)
{
  int result; // eax
  int v3; // ebp
  unsigned int *v4; // ebx
  unsigned int *v5; // edx
  unsigned int *v6; // esi
  int v7; // edi
  int v8; // esi
  unsigned int *v9; // edx

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
      v4 = (unsigned int *)a1[1]; /*0x408c86*/
      if ( v4 == a1 + 1 ) /*0x408c8a*/
      {
        v4 = 0; /*0x408c8c*/
      }
      else if ( v4 ) /*0x408c92*/
      {
        v5 = (unsigned int *)a1[1]; /*0x408c94*/
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
          v5 = (unsigned int *)*v5; /*0x408cb2*/
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
    ++result->u32_1C; /*0x408d19*/
    ++a1[38]; /*0x408d23*/
  }
  return result; /*0x408c6d*/
}
}
// 0x408F80
namespace gamemd {
void sub_408F80(AudioStream * a1, int * a2, int a3, char * a4)
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
  *(unsigned int *)a4 = 0; /*0x408fa8*/
  do /*0x408fae*/
  {
    v7 = a1[2]; /*0x408fae*/
    if ( v7 > a3 ) /*0x408fb3*/
      v7 = a3; /*0x408fb5*/
    if ( !v7 ) /*0x408fb9*/
      break; /*0x408fb9*/
    v8 = *a2; /*0x408fbe*/
    v12 = a1[1]; /*0x408fc6*/
    if ( a1[5] ) /*0x408fbb*/
    {
      v9 = a2->vt_slot_48(v12, v7); /*0x408fce*/
      v10 = v9 == 0; /*0x408fd0*/
      if ( v9 < 0 ) /*0x408fd2*/
        goto LABEL_11; /*0x408fd2*/
    }
    else
    {
      v9 = a2->vt_slot_36(v12, v7); /*0x408fd9*/
      v10 = v9 == 0; /*0x408fdb*/
      if ( v9 < 0 ) /*0x408fdd*/
      {
  LABEL_11:
        a1[9] = -2147221504; /*0x408fdf*/
    v10 = v9 == 0; /*0x408fe6*/
      }
    }
    if ( v10 ) /*0x408fe8*/
      return 2; /*0x409014*/
    if ( v9 == -1 ) /*0x408fed*/
      return 0; /*0x40901e*/
    ReadAudioStream(a1, v9); /*0x408ff3*/
    a3 -= v9; /*0x408ffc*/
    *(unsigned int *)a4 += v9; /*0x409004*/
  }
  while ( a3 ); /*0x408fae*/
  return 1; /*0x40900a*/
}
}
// 0x409030
namespace gamemd {
int WriteAudioStreamToFile(int aP0, FILE *a1, signed int arg0, char *a3)
{

  signed int v7; // eax
  int v8; // esi
  bool v9; // zf
  char v11; // [esp+10h] [ebp-4h] BYREF

  ReadAudioStream((int *)aP0, 0); /*0x40903b*/
  if ( !a3 ) /*0x409046*/
    a3 = &v11; /*0x40904c*/
  *(unsigned int *)a3 = 0; /*0x409058*/
  do /*0x40905e*/
  {
    v7 = *(unsigned int *)(aP0 + 8); /*0x40905e*/
    if ( v7 > arg0 ) /*0x409063*/
      v7 = arg0; /*0x409065*/
    if ( !v7 ) /*0x409069*/
      break; /*0x409069*/
    if ( *(unsigned int *)(aP0 + 20) ) /*0x40906b*/
    {
      v8 = Audio_Write_7C95D3(*(void **)(aP0 + 4), 1u, v7, a1); /*0x40907f*/
      v9 = v8 == 0; /*0x409084*/
      if ( v8 < 0 ) /*0x409086*/
        goto LABEL_11; /*0x409086*/
    }
    else
    {
      v8 = Audio_Write(*(void **)(aP0 + 4), 1u, v7, a1); /*0x409093*/
      v9 = v8 == 0; /*0x409098*/
      if ( v8 < 0 ) /*0x40909a*/
      {
LABEL_11:
        *(unsigned int *)(aP0 + 36) = -2147221504; /*0x40909c*/
        v9 = v8 == 0; /*0x4090a3*/
      }
    }
    if ( v9 ) /*0x4090a5*/
      return 2; /*0x4090d1*/
    if ( v8 == -1 ) /*0x4090aa*/
      return 0; /*0x4090db*/
    ReadAudioStream((int *)aP0, v8); /*0x4090b0*/
    arg0 -= v8; /*0x4090b9*/
    *(unsigned int *)a3 += v8; /*0x4090c1*/
  }
  while ( arg0 ); /*0x40905e*/
  return 1; /*0x4090c7*/

}
}
// 0x409100
namespace gamemd {
int E4Recv_409100::sub_409100()
{

  int fallRate; // esi
  int v3; // eax
  char *v4; // eax
  unsigned int *owningHouseIndex; // eax
  int v6; // ebx
  int abstractFlags; // edx
  int v8; // edi
  unsigned int *v9; // edx
  int v10; // edx
  unsigned int *v11; // edx

  fallRate = this->fallRate; /*0x409101*/
  if ( !fallRate ) /*0x409106*/
    return 0; /*0x409108*/
  v3 = this->q018 + 1; /*0x40910f*/
  if ( this->q018 == 1 ) /*0x409113*/
    v3 = 0; /*0x409115*/
  v4 = (char *)this->AbstractClass + 64 * v3 + 24; /*0x40911e*/
  this->attachedBomb = (BombClass *)((char *)this->attachedBomb + fallRate); /*0x409127*/
  v4->u32_34 += fallRate; /*0x40912f*/
  owningHouseIndex = (unsigned int *)this->owningHouseIndex; /*0x409132*/
  v6 = fallRate; /*0x409135*/
  while ( 1 ) /*0x409137*/
  {
    abstractFlags = this->M20; /*0x409137*/
    v8 = owningHouseIndex[2 * abstractFlags + 9]; /*0x40913a*/
    v9 = &owningHouseIndex[2 * abstractFlags + 8]; /*0x40913e*/
    if ( v8 > fallRate ) /*0x409144*/
      break; /*0x409144*/
    fallRate -= v8; /*0x409146*/
    *v9 = owningHouseIndex[6]; /*0x40914b*/
    v9[1] = owningHouseIndex[7]; /*0x409150*/
    v10 = owningHouseIndex[12]; /*0x409153*/
    owningHouseIndex = (unsigned int *)*owningHouseIndex; /*0x409156*/
    v11 = (unsigned int *)(v10 + 4); /*0x409158*/
    if ( owningHouseIndex == v11 ) /*0x40915d*/
    {
      owningHouseIndex = (unsigned int *)*owningHouseIndex; /*0x40915f*/
      if ( owningHouseIndex == v11 ) /*0x409163*/
        owningHouseIndex = 0; /*0x409165*/
    }
    if ( !fallRate ) /*0x409169*/
      goto LABEL_13; /*0x409169*/
  }
  *v9 += fallRate; /*0x409171*/
  v9[1] -= fallRate; /*0x409178*/
  LABEL_13:
  this->owningHouseIndex = (int)owningHouseIndex; /*0x40917b*/
    this->fallRate = 0; /*0x409180*/
    this->M12 = owningHouseIndex; /*0x409187*/
    if ( owningHouseIndex ) /*0x40918a*/
      this->q018 = (void *)owningHouseIndex[2 * this->q018 + 8]; /*0x409193*/
    else
      this->M4 = 0; /*0x409198*/
    this->M8 = 0; /*0x40919f*/
    this->M16 &= ~1u; /*0x4091ac*/
    ReadAudioStream((int *)this, 0); /*0x4091b1*/
    return v6; /*0x40910a*/

}
}
// 0x4091C0
namespace gamemd {
void ReadAudioStream(AudioStream * aP0, int a2)
{

  int v2; // eax
  int v3; // ebp
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  unsigned int *v9; // eax
  unsigned int *v10; // esi
  unsigned int *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int *v15; // edx
  int v16; // edi
  int v17; // esi
  unsigned int v18; // eax
  unsigned int v19; // esi
  int v20; // [esp+Ch] [ebp-4h]

  v20 = 0; /*0x4091c6*/
  v2 = (char *)aP0[13] - (char *)aP0[14] - (unsigned int)aP0[11]; /*0x4091d2*/
  v3 = v2; /*0x4091d5*/
  if ( v2 ) /*0x4091d7*/
  {
    if ( v2 < a2 ) /*0x4091e5*/
      a2 = (char *)aP0[13] - (char *)aP0[14] - (unsigned int)aP0[11]; /*0x4091e7*/
    v5 = 8 * (unsigned int)aP0[5] + 32; /*0x4091ed*/
    while ( 1 ) /*0x4091f4*/
    {
      v6 = (int)aP0[3]; /*0x4091f4*/
      if ( ((unsigned char)aP0[4] & 1) != 0 || (v7 = *(unsigned int *)(v6 + v5) + *(unsigned int *)(v6 + v5 + 4) - (unsigned int)aP0[1], v7 >= v3) ) /*0x40920e*/
        aP0[2] = (unsigned int *)v3; /*0x409215*/
      else
        aP0[2] = (unsigned int *)v7; /*0x409210*/
      v8 = a2; /*0x40921a*/
      if ( !a2 ) /*0x40921c*/
        break; /*0x40921c*/
      if ( a2 < (int)aP0[2] ) /*0x409223*/
      {
        v14 = (int)aP0[1] + a2; /*0x40925a*/
      }
      else
      {
        v8 = (int)aP0[2]; /*0x409225*/
        v9 = *(unsigned int **)(v6 + 48); /*0x409227*/
        v10 = *(unsigned int **)v6; /*0x40922a*/
        v11 = v9 + 1; /*0x40922c*/
        if ( v10 == v11 ) /*0x409231*/
        {
          v10 = (unsigned int *)*v10; /*0x409233*/
          if ( v10 == v11 ) /*0x409237*/
            v10 = 0; /*0x409239*/
        }
        v12 = (int)aP0[10]; /*0x40923b*/
        aP0[3] = v10; /*0x40923e*/
        if ( v10 == (unsigned int *)v12 ) /*0x409243*/
        {
          v13 = (int)aP0[4]; /*0x409245*/
          (v13) = ((v13) & ~0xFF) | ((v13 | 1) & 0xFF); /*0x409248*/
          aP0[4] = (unsigned int *)v13; /*0x40924a*/
          v14 = v10[6]; /*0x40924d*/
        }
        else
        {
          v14 = *(unsigned int *)((char *)v10 + v5); /*0x409252*/
        }
      }
      a2 -= v8; /*0x409260*/
      aP0[1] = (unsigned int *)v14; /*0x409264*/
      v20 += v8; /*0x409267*/
      v3 -= v8; /*0x40926b*/
    }
    v15 = *aP0; /*0x409279*/
    v16 = (int)aP0[11] + v20; /*0x40927b*/
    v17 = (int)aP0[12] + v20; /*0x40927d*/
    aP0[11] = (unsigned int *)v16; /*0x40927f*/
    aP0[12] = (unsigned int *)v17; /*0x409282*/
    v18 = v17; /*0x409285*/
    v19 = v15[5]; /*0x409287*/
    if ( v18 >= v19 ) /*0x40928c*/
      aP0[12] = (unsigned int *)(v18 % v19); /*0x409292*/
    if ( v16 && !aP0[6] ) /*0x409299*/
      sub_409100((ObjectClass *)aP0); /*0x4092a0*/
    return v20; /*0x4092a5*/
  }
  else
  {
    aP0[2] = 0; /*0x4091d9*/
    return 0; /*0x4091de*/
  }

}
}
// 0x4093F0
namespace gamemd {
long long sub_4093F0()
{
  int v1; // esi
  int v2; // edi
  DWORD v3; // ebx
  DWORD Time; // eax

  v1 = ++DataGlobal_87E84C; /*0x4093ff*/
  v2 = (*(((unsigned int *)&(qword_816320)) + 1)); /*0x409411*/
  v3 = qword_816320; /*0x409413*/
  while ( 1 ) /*0x409433*/
  {
    Time = timeGetTime(); /*0x409433*/
    if ( Time < v3 ) /*0x409437*/
      ++v2; /*0x409439*/
    (*(((unsigned int *)&(qword_816320)) + 1)) = v2; /*0x409440*/
    (*((unsigned int *)&(qword_816320))) = Time; /*0x409448*/
    if ( v1 == DataGlobal_87E84C ) /*0x409451*/
      break; /*0x409451*/
    v1 = DataGlobal_87E84C; /*0x409453*/
  }
  return qword_816320; /*0x409466*/
}
}
// 0x4095B0
namespace gamemd {
void AudioStreamThreadProc(unsigned int * lpThreadParameter)
{

  unsigned int *v1; // esi
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
  void (*v18)(int *); // eax
  unsigned char v20[4]; // [esp+10h] [ebp-14h] BYREF
  unsigned int v21; // [esp+14h] [ebp-10h] BYREF
  ObjectClass *v22; // [esp+18h] [ebp-Ch]
  int v23[2]; // [esp+1Ch] [ebp-8h] BYREF

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
        EnterCriticalSection(&unk_87E880); /*0x4095f5*/
        LODWORD(v3) = Audio::Callback(); /*0x4095fb*/
        v4 = (((v3) >> 32) & 0xFFFFFFFFu); /*0x409600*/
        v5 = v3; /*0x409602*/
        AudioThread::UpdateStats(&v2[2].nextArrayIndex, v3); /*0x40960c*/
        for ( i = (int *)sub_4035B0((int)v2, v23); i; i = AudioQueue::IteratorNext((AudioQueue *)v23) ) /*0x409620*/
        {
          if ( (i[41] & 1) != 0 ) /*0x40962d*/
          {
            v7 = *(unsigned int *)(i[86] + 100); /*0x409639*/
            if ( v7 && !(*(int (**)(int, unsigned char *))(*(unsigned int *)v7 + 36))(v7, v20) && (v20[0] & 1) != 0 ) /*0x409660*/
            {
              *(unsigned long long *)(i[86] + 24) = (((v4 & 0xFFFFFFFFull)) << 32 | (v5 & 0xFFFFFFFFull)) - *(unsigned long long *)(i[86] + 16); /*0x40967a*/
              v8 = i[86]; /*0x409680*/
              *(unsigned int *)(v8 + 16) = v5; /*0x409686*/
              *(unsigned int *)(v8 + 20) = v4; /*0x409689*/
              v9 = i[86]; /*0x40968c*/
              (*(void (**)(unsigned int, unsigned int *, int))(**(unsigned int **)(v9 + 100) + 16))( /*0x4096a1*/
                *(unsigned int *)(v9 + 100),
                &v21,
                v9 + 52);
              v10 = v21 / *(unsigned int *)(v9 + 108) - *(unsigned int *)(v9 + 12); /*0x4096b2*/
              if ( v10 ) /*0x4096b4*/
              {
                v11 = v10 < 0; /*0x4096b6*/
                if ( v10 < 0 ) /*0x4096b8*/
                {
                  v10 = v21 / *(unsigned int *)(v9 + 108) - *(unsigned int *)(v9 + 12) + 4; /*0x4096c2*/
                  v11 = v10 <= 0; /*0x4096c4*/
                }
                if ( !v11 ) /*0x4096c6*/
                {
                  v12 = *(unsigned int *)(v9 + 12) + v10; /*0x4096cb*/
                  *(unsigned int *)(v9 + 12) = v12; /*0x4096d1*/
                  if ( v12 >= 4 ) /*0x4096d4*/
                    *(unsigned int *)(v9 + 12) &= 3u; /*0x4096dc*/
                  *(unsigned int *)(v9 + 212) += v10; /*0x4096e7*/
                  v13 = *(unsigned int *)(v9 + 108) * v10; /*0x4096f1*/
                  v14 = ProcessAudioStream((AudioBuffer *)v9, v13); /*0x4096f7*/
                  if ( *(unsigned int *)(v9 + 64) > v13 ) /*0x4096ff*/
                    *(unsigned int *)(v9 + 64) = v13; /*0x409701*/
                  v15 = *(unsigned int *)(v9 + 8) - v13; /*0x409707*/
                  v16 = *(unsigned int *)(v9 + 8) == v13; /*0x409709*/
                  *(unsigned int *)(v9 + 8) = v15; /*0x40970b*/
                  if ( v15 < 0 || v16 || !v14 ) /*0x409712*/
                    (*(void (**)(unsigned int))(**(unsigned int **)(v9 + 100) + 72))(*(unsigned int *)(v9 + 100)); /*0x40971a*/
                }
              }
              ++*(unsigned int *)(v9 + 208); /*0x409724*/
              v2 = v22; /*0x40972a*/
            }
            else
            {
              v17 = *(unsigned int *)(i[86] + 100); /*0x409736*/
              if ( v17 ) /*0x40973b*/
                (*(void (**)(unsigned int))(*(unsigned int *)v17 + 72))(*(unsigned int *)(i[86] + 100)); /*0x409740*/
              v18 = (void (*)(int *))i[89]; /*0x409743*/
              if ( v18 ) /*0x40974b*/
                v18(i); /*0x40974f*/
            }
          }
        }
        if ( v2 ) /*0x409766*/
        {
          Audio::InitChannels((char *)g_MixerChannel_Theme); /*0x409772*/
          Audio::InitChannels((char *)g_MixerChannel_Score); /*0x40977d*/
          Audio::InitChannels((char *)g_MixerChannel_Voice); /*0x409788*/
          Audio::InitChannels((char *)g_MixerChannel_SFX); /*0x409793*/
          Audio::InitChannels((char *)g_MixerChannel_Stream); /*0x40979e*/
          Audio::InitChannels((char *)g_MixerState); /*0x4097a9*/
          Audio::InitChannels((char *)g_MixerChannel_Ambient); /*0x4097b4*/
          Audio::InitChannels((char *)g_MixerChannel_Misc); /*0x4097bf*/
          sub_403810(v2); /*0x4097c6*/
          ObjectClass::ClearFlags2(g_MixerChannel_Score); /*0x4097d1*/
          ObjectClass::ClearFlags2(g_MixerChannel_Theme); /*0x4097dc*/
          ObjectClass::ClearFlags2(g_MixerChannel_Voice); /*0x4097e7*/
          ObjectClass::ClearFlags2(g_MixerChannel_SFX); /*0x4097f2*/
          ObjectClass::ClearFlags2(g_MixerChannel_Stream); /*0x4097fd*/
          ObjectClass::ClearFlags2(g_MixerState); /*0x409808*/
          ObjectClass::ClearFlags2(g_MixerChannel_Ambient); /*0x409813*/
          ObjectClass::ClearFlags2(g_MixerChannel_Misc); /*0x40981e*/
        }
        LeaveCriticalSection(&unk_87E880); /*0x409828*/
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
// 0x409880
namespace gamemd {
void ProcessAudioStream(int * a1, int a2)
{
  int v3; // ebp
  int v4; // ebx
  int v5; // edx
  int v6; // eax
  int v8; // ebp
  char *v9; // ebx
  int v10; // eax
  bool v11; // cc
  AudioBuffer v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char v16; // dl
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
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
  if ( (int)a2 <= 0 ) /*0x4098a9*/
  {
  LABEL_45:
    v31 = 1; /*0x409c03*/
  }
  else
  {
    while ( 1 ) /*0x4098af*/
    {
      if ( *(unsigned int *)&a1[14] <= 0 ) /*0x4098b4*/
      {
        a1[12] = 0; /*0x4098b6*/
        a1[14] = a1[26]; /*0x4098bc*/
      }
      v29 = 0; /*0x4098bf*/
      v23 = a2; /*0x4098c3*/
      if ( a2 > *(unsigned int *)&a1[14] ) /*0x4098cc*/
        v23 = (int)a1[14]; /*0x4098d1*/
      if ( v28 ) /*0x4098d9*/
      {
          (*(void (__stdcall **)(int, char *, int, int, int))(**(unsigned int **)&a1[25] + 76))( /*0x4098f5*/
          *(unsigned int *)&a1[25],
          v27,
          v26,
          v25,
          v24);
          v28 = 0; /*0x4098f8*/
      }
      v3 = (int)a1[12]; /*0x4098fc*/
      v4 = 3; /*0x409918*/
      if ( (*(int (__stdcall **)(int, int, int, char **, int *, int *, int *, unsigned int))(**(unsigned int **)&a1[25] + 44))( /*0x409925*/
             *(unsigned int *)&a1[25],
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
          v10 = (int)a1[11]; /*0x409a4b*/
          v11 = v10 <= 0; /*0x409a4e*/
          if ( !v10 ) /*0x409a50*/
          {
            a1[11] = (AudioBuffer)-1; /*0x409a56*/
            if ( !*(unsigned int *)&a1[51] ) /*0x409a5d*/
            {
              (*(void (**)(void))(*(unsigned int *)a1 + 348))(); /*0x409a69*/
              a1[51] = (AudioBuffer)1; /*0x409a6f*/
            }
            if ( !*(unsigned int *)(*(unsigned int *)a1 + 372) && !*(unsigned int *)&a1[42] ) /*0x409a83*/
            {
              (*(void (**)(void))(*(unsigned int *)a1 + 352))(); /*0x409a8b*/
              if ( *(unsigned int *)(*(unsigned int *)a1 + 372) ) /*0x409a93*/
                AudioBuffer::InitializePlayback(a1); /*0x409a9d*/
            }
            v12 = *a1; /*0x409aa2*/
            if ( *(unsigned int *)(*(unsigned int *)a1 + 372) ) /*0x409aa4*/
            {
              a1[51] = 0; /*0x409aac*/
              a1[10] = *(AudioBuffer *)(*(unsigned int *)&v12 + 368); /*0x409ab8*/
              a1[8] = *(AudioBuffer *)(*(unsigned int *)&v12 + 368); /*0x409ac1*/
              v13 = *(unsigned int *)(*(unsigned int *)&v12 + 372); /*0x409ac4*/
              a1[9] = (AudioBuffer)v13; /*0x409aca*/
              a1[11] = (AudioBuffer)v13; /*0x409acd*/
            }
            v14 = (int)a1[11]; /*0x409ad0*/
            v11 = v14 <= 0; /*0x409ad3*/
            if ( !v14 ) /*0x409ad5*/
            {
              a1[11] = (AudioBuffer)-1; /*0x409ad7*/
              v11 = *(unsigned int *)&a1[11] <= 0; /*0x409ae1*/
            }
          }
          if ( !v11 || *(unsigned int *)&a1[42] ) /*0x409ae5*/
          {
            v23 = (int)a1[11]; /*0x409b30*/
            if ( v23 > 0 ) /*0x409b34*/
            {
                      if ( !((int (__fastcall *)(AudioBuffer *, char *, unsigned int *, unsigned int, int *))a1[28])( /*0x409b6a*/
                      a1,
                      v9,
                      &v22,
                      *(unsigned int *)&a1[10],
                      &v23) )
                        goto LABEL_47; /*0x409b6a*/
                      v19 = v23; /*0x409b70*/
            }
            else
            {
                      if ( !((int (__fastcall *)(AudioBuffer *, char *, unsigned int *, unsigned int, unsigned int))a1[28])( /*0x409b46*/
                      a1,
                      v9,
                      &v22,
                      0,
                      0) )
                        goto LABEL_47; /*0x409b46*/
                      v19 = 0; /*0x409b4c*/
                      a1[11] = 0; /*0x409b4e*/
            }
            *(unsigned int *)&a1[10] += v19; /*0x409b79*/
            *(unsigned int *)&a1[11] -= v19; /*0x409b81*/
            v18 = v22; /*0x409b87*/
            *(unsigned int *)&a1[2] += v22; /*0x409b8d*/
          }
          else
          {
            if ( *(unsigned int *)(*(unsigned int *)a1 + 396) == 2 ) /*0x409afc*/
              v15 = 0; /*0x409afe*/
            else
              v15 = -2139062144; /*0x409b02*/
            v16 = v22; /*0x409b07*/
            v17 = v22 >> 2; /*0x409b0b*/
            memset32(v9, v15, v22 >> 2); /*0x409b0e*/
            memset(&v9[4 * v17], v15, v16 & 3); /*0x409b15*/
            v18 = v22; /*0x409b1a*/
            *(unsigned int *)&a1[15] -= v22; /*0x409b20*/
            v8 = v23; /*0x409b23*/
          }
          v9 += v18; /*0x409b90*/
          *(unsigned int *)&a1[12] += v18; /*0x409b97*/
          *(unsigned int *)&a1[14] -= v18; /*0x409b9f*/
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
    while ( !(*(int (__stdcall **)(int))(**(unsigned int **)&a1[25] + 80))(*(unsigned int *)&a1[25]) ) /*0x409934*/
    {
      a1[11] = 0; /*0x409945*/
      a1[2] = 0; /*0x409948*/
      a1[15] = (AudioBuffer)(4 * *(unsigned int *)&a1[27]); /*0x409951*/
      (*(void (__stdcall **)(int, unsigned int))(**(unsigned int **)&a1[25] + 52))(*(unsigned int *)&a1[25], 0); /*0x40995b*/
      (*(void (__stdcall **)(int, unsigned int *, AudioBuffer *))(**(unsigned int **)&a1[25] + 16))( /*0x40996d*/
        *(unsigned int *)&a1[25],
        &v32,
        a1 + 13);
      a1[3] = (AudioBuffer)(v32 / *(unsigned int *)&a1[27]); /*0x409979*/
      a1[4] = (AudioBuffer)Audio::Callback(); /*0x409981*/
      a1[5] = (AudioBuffer)v5; /*0x409984*/
      v6 = (int)a1[25]; /*0x40998a*/
      a1[16] = a1[26]; /*0x409991*/
      (*(void (__stdcall **)(int, AudioBuffer *, AudioBuffer *))(*(unsigned int *)v6 + 16))(v6, a1 + 12, a1 + 13); /*0x409998*/
      a1[14] = (AudioBuffer)(*(unsigned int *)&a1[26] - *(unsigned int *)&a1[12]); /*0x4099a2*/
      a1[52] = 0; /*0x4099a7*/
      a1[54] = a1[3]; /*0x4099b0*/
      a1[53] = 0; /*0x4099b6*/
      a1[55] = a1[12]; /*0x4099be*/
      Debug::Log(); /*0x4099c9*/
      if ( !v4-- ) /*0x4099d1*/
        break; /*0x4099d6*/
      if ( !(*(int (__stdcall **)(int, int, int, char **, int *, int *, int *, unsigned int))(**(unsigned int **)&a1[25] + 44))( /*0x4099fe*/
              *(unsigned int *)&a1[25],
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
    (*(void (__stdcall **)(int, char *, int, int, int))(**(unsigned int **)&a1[25] + 76))( /*0x409c11*/
      *(unsigned int *)&a1[25],
      v27,
      v26,
      v25,
      v24);
      return v31; /*0x409c32*/
}
}
// 0x40A090
namespace gamemd {
AudioController * * E4Recv_40A090::sub_40A090()
{

  AudioStream *v2; // edi
  __int16 v3; // cx
  int v4; // edx
  int v6; // [esp+10h] [ebp-88h] BYREF
  int v7; // [esp+14h] [ebp-84h]
  int v8; // [esp+18h] [ebp-80h]
  int v9; // [esp+1Ch] [ebp-7Ch]
  int v10; // [esp+20h] [ebp-78h]
  unsigned int v11[5]; // [esp+24h] [ebp-74h] BYREF
  unsigned int v12[24]; // [esp+38h] [ebp-60h] BYREF

  v2 = &this->CoordBounds_E8; /*0x40a09d*/
  this->flashing[1] = 100; /*0x40a0a8*/
  CoordBounds::Constructor(&this->CoordBounds_E8, 33, 0); /*0x40a0b2*/
  AudioStream::ResetChannel(v2, 1056, 0); /*0x40a0bf*/
  AudioStream::ResetChannel2(v2, 3168, 0); /*0x40a0cc*/
  dword_87E870 = (int)this; /*0x40a0d3*/
  v3 = this->customSound_controller[1]; /*0x40a0d9*/
  v6 = 0; /*0x40a0dd*/
  v7 = 0; /*0x40a0e1*/
  v8 = 0; /*0x40a0e7*/
  v4 = this->ambientSoundController[4]; /*0x40a0eb*/
  v9 = 0; /*0x40a0ee*/
  v7 = v4; /*0x40a0f2*/
  (v10) = ((v10) & ~0xFFFF) | ((0) & 0xFFFF); /*0x40a0f6*/
  HIWORD(v6) = this->customSound_controller[0]; /*0x40a102*/
  LOWORD(v9) = (((v6) >> 16) & 0xFFFF) * v3; /*0x40a107*/
  (v6) = ((v6) & ~0xFFFF) | ((1) & 0xFFFF); /*0x40a116*/
  v8 = v4 * (unsigned __int16)((((v6) >> 16) & 0xFFFF) * v3); /*0x40a122*/
  (v10) = ((v10) & ~0xFFFF) | ((0) & 0xFFFF); /*0x40a133*/
  v11[0] = 20; /*0x40a13c*/
  v11[1] = 1; /*0x40a148*/
  HIWORD(v9) = 8 * v3; /*0x40a15b*/
  memset(&v11[2], 0, 12); /*0x40a160*/
  if ( dword_87E89C->lpVtbl->CreateSoundBuffer( /*0x40a16d*/
         dword_87E89C,
         (LPCDSBUFFERDESC)v11,
         (LPDIRECTSOUNDBUFFER *)&dword_87E8A0,
         0) )
  {
    dword_87E8A0 = 0; /*0x40a175*/
    return -2147221504; /*0x40a17c*/
  }
  else
  {
    if ( (*(int (**)(int, int *))(*(unsigned int *)dword_87E8A0 + 56))(dword_87E8A0, &v6) ) /*0x40a196*/
      Debug::Log(); /*0x40a1a2*/
    memset(&v12[1], 0, 0x5Cu); /*0x40a1b9*/
    v12[0] = 96; /*0x40a1c0*/
    dword_87E89C->lpVtbl->GetCaps(dword_87E89C, (LPDSCAPS)v12); /*0x40a1cc*/
    (*(void (**)(int, unsigned int, unsigned int, int))(*(unsigned int *)dword_87E8A0 + 48))(dword_87E8A0, 0, 0, 1); /*0x40a1db*/
    *(unsigned int *)this->isDisguisedFlag = 4; /*0x40a1de*/
    this->disguiseCreationFrame = 8; /*0x40a1e8*/
    this->infantryBlinkTimer[0] = 0; /*0x40a1f2*/
    return 0; /*0x40a1fa*/
  }

}
}
// 0x40A7C0
namespace gamemd {
int DirectSound_CreateBuffer(int a1, int a2, short a3)
{
  int result; // eax
  unsigned short v4[2]; // [esp+8h] [ebp-14h] BYREF
  int v5; // [esp+Ch] [ebp-10h]
  int v6; // [esp+10h] [ebp-Ch]
  uint16_t v7; // [esp+14h] [ebp-8h]
  int16_t v8; // [esp+16h] [ebp-6h]
  int16_t v9; // [esp+18h] [ebp-4h]

  if ( dword_87E8A0 ) /*0x40a7cf*/
  {
    v4[0] = 1; /*0x40a7d8*/
    v4[1] = a3; /*0x40a7e3*/
    v5 = a1; /*0x40a7ea*/
    v7 = a3 * (a2 / 8); /*0x40a7f4*/
    v8 = a2; /*0x40a802*/
    v6 = a1 * v7; /*0x40a80a*/
    v9 = 0; /*0x40a80e*/
    (*(void (__stdcall **)(int))(*(unsigned int *)dword_87E8A0 + 72))(dword_87E8A0); /*0x40a818*/
    (*(void (__stdcall **)(int, unsigned short *))(*(unsigned int *)dword_87E8A0 + 56))(dword_87E8A0, v4); /*0x40a828*/
    return (*(int (__stdcall **)(int, unsigned int, unsigned int, int))(*(unsigned int *)dword_87E8A0 + 48))(dword_87E8A0, 0, 0, 1); /*0x40a839*/
  }
  return result; /*0x40a83d*/
}
}
// 0x40A850
namespace gamemd {
void sub_40A850()
{
  unsigned short *Enabled; // esi
  int result; // eax
  int16_t v3; // ax
  int v4; // ecx
  int16_t v5; // si
  unsigned short v6[2]; // [esp+4h] [ebp-14h] BYREF
  int v7; // [esp+8h] [ebp-10h]
  int v8; // [esp+Ch] [ebp-Ch]
  int16_t v9; // [esp+10h] [ebp-8h]
  int16_t v10; // [esp+12h] [ebp-6h]
  int16_t v11; // [esp+14h] [ebp-4h]

  Enabled = Audio::GetEnabled(); /*0x40a859*/
  result = *(unsigned int *)&DataGlobal_87E8A0; /*0x40a85b*/
  if ( *(unsigned int *)&DataGlobal_87E8A0 ) /*0x40a862*/
  {
    if ( Enabled ) /*0x40a86a*/
    {
      (*(void (__stdcall **)(unsigned int))(**(unsigned int **)&DataGlobal_87E8A0 + 72))(*(unsigned int *)&DataGlobal_87E8A0); /*0x40a873*/
      v3 = Enabled->customSound_controller; /*0x40a878*/
      v4 = Enabled->q04C; /*0x40a87c*/
      v5 = Enabled->q054; /*0x40a87f*/
      v6[1] = v3; /*0x40a887*/
      v7 = v4; /*0x40a890*/
      v6[0] = 1; /*0x40a898*/
      v9 = v3 * v5; /*0x40a8ad*/
      v11 = 0; /*0x40a8bb*/
      v8 = v4 * (uint16_t)(v3 * v5); /*0x40a8cc*/
      v10 = 8 * v5; /*0x40a8d5*/
      (*(void (__stdcall **)(unsigned int, unsigned short *))(**(unsigned int **)&DataGlobal_87E8A0 + 56))( /*0x40a8e2*/
        *(unsigned int *)&DataGlobal_87E8A0,
        v6);
      return (*(int (__stdcall **)(unsigned int, unsigned int, unsigned int, int))(**(unsigned int **)&DataGlobal_87E8A0 + 48))( /*0x40a8f3*/
               *(unsigned int *)&DataGlobal_87E8A0,
               0,
               0,
               1);
    }
  }
  return result; /*0x40a8f6*/
}
}
// 0x40A900
namespace gamemd {
int sub_40A900(int a1)
{
  int v1 = 100 * a1 / 256; // eax /*0x40a912*/
  if ( v1 > 100 ) /*0x40a918*/
    return dword_816510; /*0x40a91f*/
  if ( v1 < 0 ) /*0x40a929*/
    v1 = 0; /*0x40a92b*/
  return dword_816380[v1]; /*0x40a926*/
}
}
// 0x40A940
namespace gamemd {
void sub_40A940()
{
  int result; // eax

  result = *(unsigned int *)&DataGlobal_87E8A0; /*0x40a940*/
  if ( *(unsigned int *)&DataGlobal_87E8A0 ) /*0x40a947*/
    return (*(int (__stdcall **)(unsigned int))(**(unsigned int **)&DataGlobal_87E8A0 + 72))(*(unsigned int *)&DataGlobal_87E8A0); /*0x40a94c*/
  return result; /*0x40a94f*/
}
}
// 0x40D220
namespace gamemd {
void sub_40D220()
{
  if ( dword_87F7B8 ) /*0x40d227*/
    (*(void (__stdcall **)(int))(*(unsigned int *)dword_87F7B8 + 8))(dword_87F7B8); /*0x40d22c*/
}
}
// 0x40D330
namespace gamemd {
void unknown_libname_3()
{
  if ( (*((unsigned int *)&(dbl_884D88))) || (*(((unsigned int *)&(dbl_884D88)) + 1)) != 1072693248 ) /*0x5b1e2c*/
    timeEndPeriod(1u); /*0x5b1e30*/
}
}
// 0x40E3E0
namespace gamemd {
void * E4Recv_40E3E0::sub_40E3E0(unsigned int * Block, char a2)
{

  unsigned int *v3; // eax
  unsigned int *v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int *v7; // ecx
  unsigned int v8; // edx
  unsigned int *v9; // ecx

  this->vtable = (int)&vt_GenericList; /*0x40e3e6*/
  while ( 1 ) /*0x40e3ec*/
  {
    v3 = (unsigned int *)this->M8; /*0x40e3ec*/
    if ( !v3 ) /*0x40e3f1*/
      break; /*0x40e3f1*/
    if ( !v3[1] ) /*0x40e3f3*/
      break; /*0x40e3f3*/
    v4 = (unsigned int *)v3[2]; /*0x40e3f8*/
    if ( !v4 ) /*0x40e3fd*/
      break; /*0x40e3fd*/
    v5 = v3[1]; /*0x40e403*/
    if ( v5 ) /*0x40e408*/
    {
      v4[1] = v5; /*0x40e40e*/
      *(unsigned int *)(v3[1] + 8) = v3[2]; /*0x40e417*/
      v3[2] = 0; /*0x40e41a*/
      v3[1] = 0; /*0x40e41d*/
    }
  }
  this->M16 = &vt_GenericNode; /*0x40e427*/
  if ( this != (GenericList *)-16 ) /*0x40e42d*/
  {
    v6 = this->M20; /*0x40e42f*/
    if ( v6 ) /*0x40e434*/
    {
      v7 = (unsigned int *)this->q018; /*0x40e436*/
      if ( v7 ) /*0x40e43b*/
      {
        v7[1] = v6; /*0x40e43d*/
        *(GenericList *)(this->M20 + 8) = this->M8; /*0x40e446*/
        this->q018 = 0; /*0x40e449*/
        this->M20 = 0; /*0x40e44c*/
      }
    }
  }
  this->M4 = &vt_GenericNode; /*0x40e454*/
  if ( this != (GenericList *)-4 ) /*0x40e45a*/
  {
    v8 = this->M8; /*0x40e45c*/
    if ( v8 ) /*0x40e461*/
    {
      v9 = (unsigned int *)this->M12; /*0x40e463*/
      if ( v9 ) /*0x40e468*/
      {
        v9[1] = v8; /*0x40e46a*/
        *(GenericList *)(this->M8 + 8) = this->M8; /*0x40e473*/
        this->M12 = 0; /*0x40e476*/
        this->M8 = 0; /*0x40e479*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x40e481*/
    __3_YAXPAX_Z(this); /*0x40e484*/
  return &this->vtable; /*0x40e48e*/

}
}
// 0x40E4C0
namespace gamemd {
void * E4Recv_40E4C0::sub_40E4C0(unsigned int * Block, char a2)
{

  unsigned int *v3; // eax
  unsigned int *v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int *v7; // ecx
  unsigned int v8; // edx
  unsigned int *v9; // ecx

  this->vtable = (int)&vt_GenericList; /*0x40e4c6*/
  while ( 1 ) /*0x40e4cc*/
  {
    v3 = (unsigned int *)this->M8; /*0x40e4cc*/
    if ( !v3 ) /*0x40e4d1*/
      break; /*0x40e4d1*/
    if ( !v3[1] ) /*0x40e4d3*/
      break; /*0x40e4d3*/
    v4 = (unsigned int *)v3[2]; /*0x40e4d8*/
    if ( !v4 ) /*0x40e4dd*/
      break; /*0x40e4dd*/
    v5 = v3[1]; /*0x40e4e3*/
    if ( v5 ) /*0x40e4e8*/
    {
      v4[1] = v5; /*0x40e4ee*/
      *(unsigned int *)(v3[1] + 8) = v3[2]; /*0x40e4f7*/
      v3[2] = 0; /*0x40e4fa*/
      v3[1] = 0; /*0x40e4fd*/
    }
  }
  this->M16 = &vt_GenericNode; /*0x40e507*/
  if ( this != (GenericList *)-16 ) /*0x40e50d*/
  {
    v6 = this->M20; /*0x40e50f*/
    if ( v6 ) /*0x40e514*/
    {
      v7 = (unsigned int *)this->q018; /*0x40e516*/
      if ( v7 ) /*0x40e51b*/
      {
        v7[1] = v6; /*0x40e51d*/
        *(GenericList *)(this->M20 + 8) = this->M8; /*0x40e526*/
        this->q018 = 0; /*0x40e529*/
        this->M20 = 0; /*0x40e52c*/
      }
    }
  }
  this->M4 = &vt_GenericNode; /*0x40e534*/
  if ( this != (GenericList *)-4 ) /*0x40e53a*/
  {
    v8 = this->M8; /*0x40e53c*/
    if ( v8 ) /*0x40e541*/
    {
      v9 = (unsigned int *)this->M12; /*0x40e543*/
      if ( v9 ) /*0x40e548*/
      {
        v9[1] = v8; /*0x40e54a*/
        *(GenericList *)(this->M8 + 8) = this->M8; /*0x40e553*/
        this->M12 = 0; /*0x40e556*/
        this->M8 = 0; /*0x40e559*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x40e561*/
    __3_YAXPAX_Z(this); /*0x40e564*/
  return &this->vtable; /*0x40e56e*/

}
}
// 0x40F290
namespace gamemd {
void unknown_libname_11()
{
  if ( dword_887464 ) /*0x6c89d5*/
    operator delete((void *)((void *)dword_887464)); /*0x6c89d8*/
}
}
// 0x4010C0
namespace gamemd {
int AudioMixer_EndFrame(int * a1, unsigned int * a2)
{
  int v4; // edx

  EndBufferMixer(a1, (unsigned int)((*(((unsigned short *)&(a2[1])) + 1)) * (*(((unsigned short *)&(a1[1])) + 1))) >> 14); /*0x4010d9*/
  AudioMixer::PlaySample((AudioMixer *)a1); /*0x4010e0*/
  EndBufferMixer(a1 + 10, (int)((*(((unsigned short *)&(a2[11])) + 1)) * (*(((unsigned short *)&(a1[11])) + 1))) / 100); /*0x40110a*/
  AudioMixer::PlaySample((AudioMixer *)(a1 + 10)); /*0x401111*/
  if ( (*(((unsigned short *)&(a2[21])) + 1)) != 0x2000 ) /*0x401122*/
  {
    v4 = (*(((unsigned short *)&(a1[21])) + 1)) + (*(((unsigned short *)&(a2[21])) + 1)) - 0x2000; /*0x40112a*/
    if ( v4 < 0 ) /*0x40112c*/
    {
      EndBufferMixer(a1 + 20, 0); /*0x401133*/
      return AudioMixer::PlaySample((AudioMixer *)(a1 + 20)); /*0x401143*/
    }
    if ( (unsigned int)v4 > 0x4000 ) /*0x40114a*/
      v4 = 0x4000; /*0x40114c*/
    EndBufferMixer(a1 + 20, v4); /*0x401154*/
  }
  return AudioMixer::PlaySample((AudioMixer *)(a1 + 20)); /*0x401140*/
}
}
// 0x401190
namespace gamemd {
int sub_401190(unsigned int* a1, int a2)
{
  int v2; // edx

  v2 = (uint64_t)(1374389535LL * a2 * (*(((unsigned short *)&(*(unsigned int *)(a1 + 44))) + 1))) >> 32; /*0x40119e*/
  return ((unsigned int)v2 >> 31) + (v2 >> 5); /*0x4011ac*/
}
} // namespace gamemd

// 0x4011B0
namespace gamemd {
int sub_4011B0(unsigned int * a1, int a2)
{
  return *a1 + 36 * a2; /*0x4011b8*/
}
} // namespace gamemd

// 0x401580
namespace gamemd {
void ObjectClass::sub_401580(void ** Block)
{
  void (__thiscall ***v2)(unsigned int, int); // ecx
  void (__thiscall ***v3)(unsigned int, int); // ecx

  v2 = (void (__thiscall ***)(unsigned int, int))*((unsigned int *)Block + 67); /*0x401583*/
  if ( v2 ) /*0x40158b*/
    (**v2)(v2, 1); /*0x401591*/
  v3 = (void (__thiscall ***)(unsigned int, int))*((unsigned int *)Block + 68); /*0x401593*/
  if ( v3 ) /*0x40159b*/
    (**v3)(v3, 1); /*0x4015a1*/
  if ( Block->vfptr ) /*0x4015a3*/
    operator delete((void *)(Block->vfptr)); /*0x4015aa*/
  operator delete((Block)); /*0x4015b3*/
}
} // namespace gamemd

// 0x4015C0
namespace gamemd {
unsigned int sub_4015C0(int a1, const void * a2)
{

  void *v3; // eax

  v3 = bsearch(a2, *(const void **)a1, *(unsigned int *)(a1 + 4), 0x24u, _strcmpi); /*0x4015d2*/
  if ( v3 ) /*0x4015de*/
    return ((unsigned int)v3 - *(unsigned int *)a1) / 0x24; /*0x4015ee*/
  else
    return -1; /*0x4015f2*/

}
} // namespace gamemd

// 0x4018C0
namespace gamemd {
int sub_4018C0(int a1, int a2, int a3)
{
  int v4; // ecx
  int result; // eax
  int v6; // eax

  v4 = *(unsigned int *)(a1 + 280); /*0x4018c3*/
  if ( !v4 ) /*0x4018cb*/
    return 0; /*0x4018cd*/
  v6 = a3; /*0x4018d3*/
  if ( a3 > *(unsigned int *)(a1 + 284) ) /*0x4018e0*/
    v6 = *(unsigned int *)(a1 + 284); /*0x4018e2*/
  if ( v6 <= 0 || (result = (*(int (__thiscall **)(int, int, int))(*(unsigned int *)v4 + 36))(v4, a2, v6), result < 0) ) /*0x4018f1*/
    result = 0; /*0x4018f3*/
  *(unsigned int *)(a1 + 284) -= result; /*0x4018fe*/
  return result; /*0x4018cf*/
}
} // namespace gamemd

// 0x4019E0
namespace gamemd {
int * sub_4019E0(int a1, int a2, int a3, int a4)
{
  unsigned int *v6; // ebx
  int i; // edi
  LinkedList *j; // esi
  VtableStub *v9; // ecx
  VtableStub *v10; // ecx
  ObjectClass *v12; // [esp+0h] [ebp-10h]

  v6 = (unsigned int *)operator new(0xE8u); /*0x4019f2*/
  memset(v6, 0, 0xE8u); /*0x4019fd*/
  *v6 = a1; /*0x401a03*/
  v6[6] = a4; /*0x401a05*/
  v6[1] = AllocLinkedListMemory(a2 / (a4 + 28), a4 + 28); /*0x401a25*/
  v6[2] = AllocLinkedListMemory(a3, 100); /*0x401a30*/
  DListNode::Init(&v6->DListNode_3); /*0x401a35*/
  if ( v6[1] && v6[2] ) /*0x401a41*/
    return v6; /*0x401aec*/
  for ( i = Queue::GetNext(&v6->u32_30); i; i = Queue::GetNext(&v6->u32_30) ) /*0x401a57*/
  {
    if ( *(unsigned int *)(i + 4) != i ) /*0x401a5c*/
      LinkedList::Init((LinkedList *)i); /*0x401a60*/
    for ( j = (LinkedList *)Queue::GetNext((Queue *)(i + 36)); j; j = (LinkedList *)Queue::GetNext((Queue *)(i + 36)) ) /*0x401a73*/
    {
      LinkedList::Init(j); /*0x401a77*/
      AudioNode::Release((AudioNode *)j); /*0x401a7e*/
      PushFrontLinkedListAlt(*(unsigned int **)(*(unsigned int *)(i + 60) + 4), (int)j); /*0x401a8b*/
    }
    nullsub_2(v12); /*0x401aa0*/
    PushFrontLinkedListAlt(*(unsigned int **)(*(unsigned int *)(i + 60) + 8), i); /*0x401aad*/
  }
  v9 = v6->u32_4; /*0x401ac0*/
  if ( v9 ) /*0x401ac5*/
    VtableStub::Push_407510(v9); /*0x401ac7*/
  v10 = v6->VtableStub_8; /*0x401acc*/
  if ( v10 ) /*0x401ad1*/
    VtableStub::Push_407510(v10); /*0x401ad3*/
  operator delete((v6)); /*0x401ad9*/
  return 0; /*0x401ae3*/
}
} // namespace gamemd

// 0x401B00
namespace gamemd {
void ObjectClass::sub_401B00(int * a2)
{
  Queue *v2; // ecx
  Queue *v3; // esi
  Queue *v4; // ebp
  int Next; // edi
  LinkedList *i; // esi
  VtableStub *v7; // ecx
  VtableStub *v8; // ecx
  ObjectClass *v9; // [esp-4h] [ebp-14h]
  Queue *v10; // [esp+Ch] [ebp-4h]

  v3 = v2; /*0x401b03*/
  v10 = v2; /*0x401b06*/
  v4 = v2 + 12; /*0x401b0a*/
  Next = Queue::GetNext(v2 + 12); /*0x401b14*/
  if ( Next ) /*0x401b18*/
  {
    v9 = a2; /*0x401b1a*/
    do /*0x401b7f*/
    {
      if ( *(unsigned int *)(Next + 4) != Next ) /*0x401b1e*/
        LinkedList::Init((LinkedList *)Next); /*0x401b22*/
      for ( i = (LinkedList *)Queue::GetNext((Queue *)(Next + 36)); /*0x401b35*/
      i;
      i = (LinkedList *)Queue::GetNext((Queue *)(Next + 36)) )
      {
        LinkedList::Init(i); /*0x401b39*/
        AudioNode::Release((AudioNode *)i); /*0x401b40*/
        PushFrontLinkedListAlt(*(unsigned int **)(*(unsigned int *)(Next + 60) + 4), (int)i); /*0x401b4d*/
      }
      nullsub_2(v9); /*0x401b62*/
      PushFrontLinkedListAlt(*(unsigned int **)(*(unsigned int *)(Next + 60) + 8), Next); /*0x401b6f*/
      Next = Queue::GetNext(v4); /*0x401b7b*/
    }
    while ( Next ); /*0x401b7f*/
    v3 = v10; /*0x401b81*/
  }
  v7 = *(VtableStub **)&v3[4]; /*0x401b86*/
  if ( v7 ) /*0x401b8b*/
    VtableStub::Push_407510(v7); /*0x401b8d*/
  v8 = *(VtableStub **)&v3[8]; /*0x401b92*/
  if ( v8 ) /*0x401b97*/
    VtableStub::Push_407510(v8); /*0x401b99*/
  operator delete((v3)); /*0x401b9f*/
}
} // namespace gamemd

// 0x401FB0
namespace gamemd {
void ObjectClass::sub_401FB0()
{

  return (int)this->vtable4; /*0x401fb3*/

}
} // namespace gamemd

// 0x401FC0
namespace gamemd {
int ObjectClass::sub_401FC0()
{

  LinkedList *i; // esi
  ObjectClass *v4; // [esp+0h] [ebp-Ch]

  if ( this->vtable2 != this ) /*0x401fc8*/
    LinkedList::Init((LinkedList *)this); /*0x401fca*/
  for ( i = (LinkedList *)Queue::GetNext(&this->occupant); /*0x401fdd*/
  i;
  i = (LinkedList *)Queue::GetNext(&this->occupant) )
  {
    LinkedList::Init(i); /*0x401fe1*/
    AudioNode::Release((AudioNode *)i); /*0x401fe8*/
    PushFrontLinkedListAlt(*(unsigned int **)(this->ambientSoundController[0] + 4), (int)i); /*0x401ff5*/
  }
  nullsub_2(v4); /*0x40200a*/
  return PushFrontLinkedListAlt(*(unsigned int **)(this->ambientSoundController[0] + 8), (int)this); /*0x402014*/

}
} // namespace gamemd

// 0x402020
namespace gamemd {
void ObjectClass::sub_402020()
{

  return this->abstractFlags; /*0x402023*/

}
}
// 0x402430
namespace gamemd {
void ObjectClass::sub_402430()
{

  return this->location[2] & 8; /*0x402439*/

}
}
// 0x402440
namespace gamemd {
void * ObjectClass::sub_402440(int a1, int a2)
{
  int v1; // edx
  int v4; // eax
  int result; // eax

  v2 = v2; /*0x402441*/
  v4 = v2->u32_D4; /*0x402443*/
  v2->vtable4 = v1; /*0x402449*/
  (*(void (**)(void))(v4 + 40))(); /*0x40244c*/
  if ( (v2->q0A4 & 5) != 0 ) /*0x402456*/
    v2->u32_D4->IsClean(); /*0x402460*/
  v2->u32_D4->getAltitude(); /*0x40246b*/
  result = v2->u32_BC; /*0x40246e*/
  if ( result ) /*0x402476*/
    result = result(v2); /*0x40247a*/
  v2->u32_168 = 0; /*0x40247c*/
  v2->q0A4 |= 8u; /*0x40248f*/
  return result; /*0x402495*/
}
} // namespace gamemd

// 0x4026C0
namespace gamemd {
int E4Recv_4026C0::sub_4026C0()
{

  (*(void (**)(void))(this->M212 + 40))(); /*0x4026c9*/
  this->location[2] |= 0x10u; /*0x4026d5*/
  return (*(int (**)(ObjectClass *))(this->M212 + 44))(this);

}
} // namespace gamemd

// 0x402790
namespace gamemd {
int AudioStream_BindChannel(unsigned int * a1, unsigned int * a2)
{
  int result; // eax
  int Offset; // eax
  unsigned int *v6; // eax

  a1[90] = a2; /*0x402798*/
  if ( a2 ) /*0x40279e*/
  {
    Offset = AudioController::GetOffset((AudioController *)a2); /*0x4027a2*/
    a1[91] = Offset; /*0x4027a9*/
    if ( Offset ) /*0x4027af*/
    {
      a1[92] = *(unsigned int *)(Offset + 12); /*0x4027b4*/
      result = *(unsigned int *)(Offset + 16); /*0x4027ba*/
      a1[93] = result; /*0x4027bd*/
      a1[94] = result; /*0x4027c3*/
      *a2 = 0; /*0x4027c9*/
    }
    else
    {
      v6 = (unsigned int *)a1[90]; /*0x4027d2*/
      a1[92] = *v6; /*0x4027da*/
      result = v6->AudioController_field_04; /*0x4027e0*/
      a1[93] = result; /*0x4027e3*/
      a1[94] = result; /*0x4027e9*/
    }
  }
  return result; /*0x4027cf*/
}
} // namespace gamemd

// 0x402850
namespace gamemd {
int E4Recv_402850::sub_402850()
{

  this->M8 = 0; /*0x402852*/
  this->M4 = 0; /*0x402855*/
  return 0; /*0x402858*/

}
} // namespace gamemd

// 0x402940
namespace gamemd {
int sub_402940()
{
  DListNode::Init(off_815E98); /*0x402946*/
  DListNode::Init((DListNode *)((char *)off_815E98 + 12)); /*0x402953*/
  *(unsigned int *)off_815E98[3].__pad_0 = 0; /*0x40295e*/
  dword_87DE30 = (int)off_815E98[4].__pad_0; /*0x40296e*/
  AudioMixer::Init((AudioMixer *)&off_815E98[4]); /*0x402974*/
  dword_87DE2C = 1; /*0x402979*/
  return 0; /*0x402985*/
}
} // namespace gamemd

// 0x402EF0
namespace gamemd {
void E4Recv_402EF0::sub_402EF0(int * Block)
{
  AudioQueue *Next; // esi
  AudioStream *i; // ebx
  int nextArrayIndex; // eax
  int v5; // ecx

  Next = (AudioQueue *)((AudioQueue *)((AudioQueue *)((char *)Block + 248)))->GetNext(); /*0x402f00*/
  for ( i = (AudioStream *)Next; Next; i = (AudioStream *)Next ) /*0x402f06*/
  {
    Next = (AudioQueue *)((AudioQueue *)(Next))->GetNextAlt(); /*0x402f11*/
    AudioStream::Destructor(i); /*0x402f13*/
  }
  Block->vt_slot_32(); /*0x402f26*/
  *(unsigned int *)(Block->nextArrayIndex + 4 * Block->referenceCount + 28) = 0; /*0x402f2f*/
  nextArrayIndex = Block->nextArrayIndex; /*0x402f37*/
  v5 = nextArrayIndex->uniqueId - 1; /*0x402f3d*/
  nextArrayIndex->uniqueId = v5; /*0x402f40*/
  if ( v5 < 0 ) /*0x402f43*/
    *(unsigned int *)(Block->nextArrayIndex + 16) = 0; /*0x402f48*/
  operator delete((Block)); /*0x402f50*/
}
} // namespace gamemd

// 0x403460
namespace gamemd {
int sub_403460()
{
  return -2147221504; /*0x403465*/
}
} // namespace gamemd

// 0x403470
namespace gamemd {
int sub_403470(int a1, int a2)
{
  return EndBufferMixer((int *)(a1 + 104), a2);
}
} // namespace gamemd

// 0x403480
namespace gamemd {
int sub_403480(int a1, int a2)
{
  return RequestBufferMixer((unsigned int *)(a1 + 104), a2);
}
} // namespace gamemd

// 0x403490
namespace gamemd {
struct Concurrency::ISchedulerProxy * E4Recv_403490::_GetSchedulerProxy_SchedulerBase_details_Concurrency__QBEPAUISchedulerProxy_3_XZ()
{
  return (struct Concurrency::ISchedulerProxy *)this->M244; /*0x403496*/
}
} // namespace gamemd

// 0x4034A0
namespace gamemd {
struct Concurrency::IScheduler * E4Recv_4034A0::_GetIScheduler_SchedulerBase_details_Concurrency__QAEPAUIScheduler_3_XZ()
{
  return (struct Concurrency::IScheduler *)this->M240; /*0x4034a6*/
}
} // namespace gamemd

// 0x4035B0
namespace gamemd {
int sub_4035B0(int a1, int * a2)
{
  int result; // eax

  result = ((AudioQueue *)((int *)(a1 + 248)))->GetNext(); /*0x4035b9*/
  *a2 = result; /*0x4035be*/
  return result; /*0x4035c0*/
}
} // namespace gamemd

// 0x4036C0
namespace gamemd {
int sub_4036C0(int a1, int a2)
{
  int BestChannel; // esi
  ObjectClass *v4; // [esp+0h] [ebp-8h]

  BestChannel = AudioQueue::FindBestChannel(a1, 1); /*0x4036ce*/
  if ( BestChannel ) /*0x4036d2*/
    sub_402440(v4); /*0x4036d8*/
  return BestChannel; /*0x4036df*/
}
} // namespace gamemd

// 0x4036F0
namespace gamemd {
int sub_4036F0(int a1, int a2)
{
  int *Next; // esi
  int *i; // edi

  Next = (int *)((AudioQueue *)((int *)(a1 + 248)))->GetNext(); /*0x403700*/
  for ( i = Next; Next; i = Next ) /*0x403706*/
  {
    Next = (int *)((AudioQueue *)(Next))->GetNextAlt(); /*0x403712*/
    if ( a2 == -1 || i[3] == a2 ) /*0x403719*/
      AudioStream::Destructor(i); /*0x40371d*/
  }
  return 0; /*0x403728*/
}
} // namespace gamemd

// 0x403810
namespace gamemd {
void ObjectClass::sub_403810(int ()(void))
{
  return (*((int (**)(void))&this->nextArrayIndex7))();
}
}
// 0x4038E0
namespace gamemd {
void ObjectClass::sub_4038E0( int64_t a2)
{

  return (unsigned __int64)(a2 - *(unsigned long long *)&this->owningHouseIndex) >= *(unsigned long long *)&this->AbstractClass; /*0x403903*/

}
}
// 0x4039C0
namespace gamemd {
int sub_4039C0(int a1, char * a2)
{
  unsigned int v3; // edx
  int v4; // ebx
  unsigned int v5; // ecx
  int v6; // ecx

  v4 = Audio::Callback(); /*0x4039d0*/
  if ( *(unsigned int *)(a1 + 72) != *(unsigned int *)(a1 + 80) ) /*0x4039da*/
  {
    v5 = *(unsigned int *)(a1 + 84) + 1; /*0x4039e1*/
    *(unsigned int *)(a1 + 84) = v5; /*0x4039e2*/
    if ( v5 >= strlen(off_815E9C) ) /*0x4039f7*/
      *(unsigned int *)(a1 + 84) = 0; /*0x4039f9*/
    *(unsigned int *)(a1 + 80) = *(unsigned int *)(a1 + 72); /*0x4039ff*/
  }
  if ( *(unsigned long long *)(a1 + 56) + *(unsigned long long *)(a1 + 64) < (((unsigned long)(unsigned int)(v4)) | ((unsigned long)(unsigned int)(v3) << 32)) ) /*0x403a1a*/
  {
    v6 = *(unsigned int *)(a1 + 4); /*0x403a1e*/
    *(unsigned int *)(a1 + 48) = *(unsigned int *)a1; /*0x403a21*/
    *(unsigned int *)(a1 + 52) = v6; /*0x403a24*/
    *(unsigned int *)(a1 + 56) = v4; /*0x403a27*/
    *(unsigned int *)(a1 + 60) = v3; /*0x403a2a*/
  }
  return sprintf( /*0x403a6b*/
           a2,
           "%05dms (%04d,%04d,%04d,~%2d) %c \n",
           *(unsigned int *)a1,
           *(unsigned int *)(a1 + 16),
           *(unsigned int *)(a1 + 48),
           *(unsigned int *)(a1 + 24),
           *(unsigned int *)(a1 + 76),
           off_815E9C[*(unsigned int *)(a1 + 84)]);
}
} // namespace gamemd

// 0x403CE0
namespace gamemd {
void sub_403CE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x403cec*/
  dbl_87E1A0 = Math::Sqrt(v0 + v0); /*0x403cfe*/
}
} // namespace gamemd

// 0x403D10
namespace gamemd {
void sub_403D10()
{
  dbl_87E280 = dbl_87E1A0 / 60.0; /*0x403d1c*/
}
} // namespace gamemd

// 0x403D30
namespace gamemd {
void sub_403D30()
{
  dbl_87E268 = 1.0 / dbl_87E280; /*0x403d3c*/
}
} // namespace gamemd

// 0x403D50
namespace gamemd {
void sub_403D50()
{
  dbl_87E260 = 0.0174532925199433 * 45.0; /*0x403d5c*/
}
} // namespace gamemd

// 0x403D70
namespace gamemd {
void sub_403D70()
{
  dbl_87E1A8 = 0.0174532925199433 * 60.0; /*0x403d7c*/
}
} // namespace gamemd

// 0x403D90
namespace gamemd {
void sub_403D90()
{
  dbl_87E190 = 0.0174532925199433 * 90.0; /*0x403d9c*/
}
} // namespace gamemd

// 0x403DB0
namespace gamemd {
long long sub_403DB0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_87E190 - dbl_87E1A8); /*0x403dc2*/
  result = Math::RoundToInt(v0 * dbl_87E1A0 * 0.5); /*0x403dd6*/
  dword_87E288 = result; /*0x403ddb*/
  return result; /*0x403de0*/
}
} // namespace gamemd

// 0x403DF0
namespace gamemd {
void sub_403DF0()
{
  dbl_87E1B0 = Math::ArcTan((double)dword_87E288 * 0.00390625); /*0x403e07*/
}
} // namespace gamemd

// 0x403E20
namespace gamemd {
void sub_403E20()
{
  dbl_87E248 = Math::ArcTan((double)(2 * dword_87E288) / dbl_87E1A0); /*0x403e42*/
}
} // namespace gamemd

// 0x403E50
namespace gamemd {
long long sub_403E50()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_87E288) + 0.5); /*0x403e6b*/
  dword_87E27C = result; /*0x403e70*/
  return result; /*0x403e76*/
}
} // namespace gamemd

// 0x403E80
namespace gamemd {
int sub_403E80()
{
  word_87E198 = 0; /*0x403e82*/
  word_87E19A = 0; /*0x403e88*/
  return 0; /*0x403e8e*/
}
} // namespace gamemd

// 0x403E90
namespace gamemd {
int sub_403E90()
{
  dword_87E238 = 0; /*0x403e92*/
  dword_87E23C = 0; /*0x403e97*/
  dword_87E240 = 0; /*0x403e9c*/
  return 0; /*0x403ea1*/
}
} // namespace gamemd

// 0x403EB0
namespace gamemd {
int sub_403EB0()
{
  dword_87E278 = 0; /*0x403eb5*/
  dword_87E270 = 128; /*0x403ebf*/
  dword_87E274 = 128; /*0x403ec4*/
  return 128; /*0x403ec9*/
}
} // namespace gamemd

// 0x403ED0
namespace gamemd {
int sub_403ED0(int a1, int a2)
{
  int v4; // ecx

  DListNode::Init(&g_AudioStreamObject); /*0x403edb*/
  DListNode::Init(stru_87E250); /*0x403ee5*/
  dword_87E294 = a2; /*0x403eef*/
  dword_87E29C = a1; /*0x403ef5*/
  AudioMixer::Init(stru_87E1B8); /*0x403efb*/
  v4 = dword_87E294; /*0x403f00*/
  dword_87E290 = 0; /*0x403f0f*/
  dword_87E28C = 0; /*0x403f15*/
  g_AudioConfigState = 1; /*0x403f1b*/
  dword_816108 = 1; /*0x403f21*/
  if ( dword_87E294 ) /*0x403f27*/
  {
    dword_87E298 = sub_4019E0(dword_87E294, 0x100000, 200, 0x2000); /*0x403f47*/
    dword_87E2A8 = AllocLinkedListMemory(300, 640); /*0x403f51*/
    Debug::Log(); /*0x403f60*/
    v4 = dword_87E294; /*0x403f65*/
  }
  if ( !dword_87E298 || !v4 || !dword_87E29C || !dword_87E2A8 ) /*0x403f88*/
    return 0; /*0x403f96*/
  dword_87E2A4 = 1; /*0x403f8a*/
  return 1; /*0x403f92*/
}
} // namespace gamemd

// 0x404E20
namespace gamemd {
int sub_404E20(int a1)
{

  int v1; // ebp
  int *v2; // ebx
  int v3; // edi
  int *v4; // esi
  int Next; // eax

  v1 = 0; /*0x404e23*/
  v2 = (int *)&stru_87DE38; /*0x404e2d*/
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
} // namespace gamemd

// 0x405130
namespace gamemd {
int E4Recv_405130::sub_405130()
{

  if ( g_AudioConfigState ) /*0x405137*/
    return this->customSound_controller[0]; /*0x40513c*/
  else
    return 0; /*0x405139*/

}
} // namespace gamemd

// 0x405140
namespace gamemd {
double E4Recv_405140::sub_405140()
{
  if ( g_AudioConfigState ) /*0x405147*/
    return this->M84; /*0x405150*/
  else
    return 0.0; /*0x405149*/
}
} // namespace gamemd

// 0x405160
namespace gamemd {
int E4Recv_405160::sub_405160()
{

  if ( g_AudioConfigState ) /*0x405167*/
    return this->M20; /*0x40516c*/
  else
    return 0; /*0x405169*/

}
} // namespace gamemd

// 0x4052E0
namespace gamemd {
int E4Recv_4052E0::sub_4052E0()
{

  int result = this->M24; // eax /*0x4052e0*/
  (result) = ((result) & ~0xFF) | ((result | 8) & 0xFF); /*0x4052e3*/
  this->M24 = result; /*0x4052e5*/
  return result; /*0x4052e8*/

}
} // namespace gamemd

// 0x4053E0
namespace gamemd {
int E4Recv_4053E0::sub_4053E0()
{

  __int64 v2; // rax

  LODWORD(v2) = this->M344; /*0x4053e3*/
  if ( !(unsigned int)v2 ) /*0x4053eb*/
  {
    LODWORD(v2) = this->M28; /*0x4053ed*/
    if ( (unsigned int)v2 == 2 ) /*0x4053f3*/
    {
      LODWORD(v2) = Audio::Callback(); /*0x4053f6*/
      *((unsigned long long *)this + 40) -= v2; /*0x40540b*/
    }
  }
  ++this->M344; /*0x40541f*/
  return v2; /*0x405425*/

}
} // namespace gamemd

// 0x405430
namespace gamemd {
int E4Recv_405430::sub_405430()
{

  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rax

  LODWORD(v2) = this->M344; /*0x405433*/
  if ( (unsigned int)v2 ) /*0x40543b*/
  {
    v3 = this->M344 - 1; /*0x405443*/
    this->M344 = v3; /*0x405446*/
    if ( v3 < 0 ) /*0x40544c*/
      this->M344 = 0; /*0x40544e*/
    LODWORD(v2) = this->M344; /*0x405458*/
    if ( !(unsigned int)v2 ) /*0x405460*/
    {
      LODWORD(v2) = this->M28; /*0x405462*/
      if ( (unsigned int)v2 == 2 ) /*0x405468*/
      {
        LODWORD(v4) = Audio::Callback(); /*0x40546b*/
        v2 = *((unsigned long long *)this + 40) + v4; /*0x40547e*/
        *((unsigned long long *)this + 40) = v2; /*0x405480*/
      }
    }
  }
  return v2; /*0x40548d*/

}
} // namespace gamemd

// 0x405490
namespace gamemd {
int ObjectClass::sub_405490()
{
  return this->u32_158; /*0x405496*/
}
} // namespace gamemd

// 0x4059F0
namespace gamemd {
int E4Recv_4059F0::sub_4059F0()
{
  this->nextObject->referenceCount = 4; /*0x4059f6*/
  return 0; /*0x4059ff*/
}
} // namespace gamemd

// 0x405A00
namespace gamemd {
int E4Recv_405A00::sub_405A00()
{

  unsigned int *v1; // esi
  int v2; // eax
  int v3; // eax
  unsigned int v5; // edi
  __int64 v6; // rax

  v1 = (unsigned int *)this->M192; /*0x405a01*/
  v2 = v1->q018; /*0x405a07*/
  (v2) = ((v2) & ~0xFF) | ((v2 & 0xFD) & 0xFF); /*0x405a0a*/
  v1->q018 = v2; /*0x405a0c*/
  v3 = 4; /*0x405a0f*/
  if ( v1->u32_1C == 4 ) /*0x405a19*/
    return 0; /*0x405a1b*/
  if ( v1[82] || v1->q268 || v1->q13C ) /*0x405a34*/
    v3 = 1; /*0x405a46*/
  else
    v1->q13C = 0; /*0x405a3e*/
  if ( v1->q13C ) /*0x405a4b*/
  {
    v5 = v1->q13C; /*0x405a56*/
    v1->u32_20 = v3; /*0x405a5c*/
    if ( v1[86] ) /*0x405a5f*/
    {
      v1->u32_140 = v5; /*0x405a69*/
      v1[81] = 0; /*0x405a6f*/
    }
    else
    {
      LODWORD(v6) = Audio::Callback(); /*0x405a88*/
      *((unsigned long long *)v1 + 40) = v5 + v6; /*0x405a91*/
    }
    v1->u32_1C = 2; /*0x405a75*/
    v1->q13C = 0; /*0x405a7c*/
    return 0; /*0x405a84*/
  }
  else
  {
    v1->u32_1C = v3; /*0x405ab0*/
    return 0; /*0x405ab4*/
  }

}
} // namespace gamemd

// 0x405B50
namespace gamemd {
unsigned int * sub_405B50(int a1, char a2)
{
  unsigned int *v3; // esi
  int BestChannel; // eax
  Voice *v7; // [esp+0h] [ebp-Ch]

  v3 = 0; /*0x405b5b*/
  if ( dword_87E29C ) /*0x405b61*/
  {
    BestChannel = AudioQueue::FindBestChannel(dword_87E29C, 1); /*0x405b68*/
    v3 = (unsigned int *)BestChannel; /*0x405b6d*/
    if ( BestChannel ) /*0x405b71*/
    {
      if ( (*(unsigned char *)(BestChannel + 164) & 0x15) != 0 && *(unsigned int *)(BestChannel + 160) > a1 ) /*0x405b82*/
        return 0; /*0x405b89*/
      ((Voice *)(v7))->Stop(); /*0x405b8c*/
      v3[37] = g_MixerChannel_Score; /*0x405b96*/
      v3[39] = g_MixerState; /*0x405ba5*/
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
} // namespace gamemd

// 0x4060F0
namespace gamemd {
void SetAudioSource(AudioMixer * aP0, unsigned int * a1, int a3)
{
  int result; // eax

  if ( aP0->u32_C == &dword_87E294 ) /*0x4060f7*/
  {
    result = a3; /*0x4060f9*/
    *(unsigned int *)aP0 = a1; /*0x4060fd*/
    aP0->u32_8 = a3; /*0x406101*/
    if ( a1 ) /*0x406104*/
    {
      aP0->u32_4 = a1[78]; /*0x40610d*/
      if ( !a3 ) /*0x406113*/
      {
        result = a1[9]; /*0x406115*/
        aP0->u32_8 = result; /*0x406118*/
      }
      a1[158] = aP0; /*0x40611b*/
    }
  }
  return result; /*0x406121*/
}
} // namespace gamemd

// 0x4062C0
namespace gamemd {
int E4Recv_4062C0::sub_4062C0(unsigned int a2, int a3)
{
  SetRateMixerSamplethis->u32_B8, 0x4000, a2, a3); /*0x4062da*/
  SetRateMixerSamplethis->u32_E8, 0x4000, a2, a3); /*0x4062ec*/
  return SetRateMixerSamplethis->ptr_108, 0x4000, a2, a3); /*0x406303*/
}
} // namespace gamemd

// 0x406310
namespace gamemd {
int E4Recv_406310::sub_406310()
{

  return this->occupant; /*0x406313*/

}
} // namespace gamemd

// 0x4064A0
namespace gamemd {  // G42.18c ns repair
int AbstractTypeClass::AddSampleVocClass(int a1, unsigned char * a2)
{

  if ( *(unsigned int *)(a1 + 308) == 32 ) /*0x4064ad*/
    return 0; /*0x4064b3*/
  if ( g_AudioConfigState && dword_87E294 ) /*0x4064c5*/
  {
    while ( *a2 == 36 || *a2 == 35 ) /*0x4064cf*/
      ++a2; /*0x4064d1*/
    int v5; // eax
    v5 = sub_4015C0(); /*0x4064d6*/
    if ( v5 != -1 ) /*0x4064de*/
    {
      *(unsigned int *)(a1 + 4 * (*(unsigned int *)(a1 + 308))++ + 180) = v5; /*0x4064e6*/
      return 1; /*0x406501*/
    }
    Debug::Log(); /*0x406508*/
    *(unsigned int *)(a1 + 12) = 0; /*0x406510*/
  }
  return 1; /*0x4064af*/
}
}  // G42.18c ns repair
// 0x406520
namespace gamemd {  // G42.18c ns repair
void AbstractTypeClass::sub_406520(int a1, int a2)
{
  *(unsigned int *)(a1 + 312) = a2; /*0x406520*/
}
}  // G42.18c ns repair
// 0x406530
namespace gamemd {  // G42.18c ns repair
void AbstractTypeClass::sub_406530(int a1, int a2)
{
  *(unsigned int *)(a1 + 316) = a2; /*0x406530*/
}
}  // G42.18c ns repair
// 0x406540
namespace gamemd {  // G42.18c ns repair
void AbstractTypeClass::sub_406540(int a1, int a2)
{
  *(unsigned int *)(a1 + 64) = a2; /*0x406540*/
}
}  // G42.18c ns repair
// 0x406550
namespace gamemd {  // G42.18c ns repair
int AbstractTypeClass::sub_406550(int a1, int a2)
{

  unsigned int *v2; // esi
  v2 = (unsigned int *)(a1 + 24); /*0x406551*/
  EndBufferMixer((int *)(a1 + 24), a2); /*0x406556*/
  return AudioMixer::PlaySample(v2); /*0x40655d*/
}
}  // G42.18c ns repair
// 0x406570
namespace gamemd {  // G42.18c ns repair
int AbstractTypeClass::sub_406570(unsigned int * a1, int a2)
{

  a1[4] = a2; /*0x406573*/
  int result = 1; // eax /*0x406576*/
  if ( (a2 & 0x20) != 0 ) /*0x40657b*/
  {
    if ( !a1[78] ) /*0x40657e*/
      a1[78] = 1; /*0x406589*/
  }
  else
  {
    a1[78] = 0; /*0x406591*/
  }
  if ( (a2 & 0x40) != 0 ) /*0x40659e*/
  {
    if ( !a1[79] ) /*0x4065a0*/
      a1[79] = 1; /*0x4065aa*/
  }
  else
  {
    a1[79] = 0; /*0x4065b1*/
  }
  return result; /*0x4065b0*/
}
}  // G42.18c ns repair
// 0x4065C0
namespace gamemd {  // G42.18c ns repair
void AbstractTypeClass::sub_4065C0(int a1, int a2)
{
  *(unsigned int *)(a1 + 20) = a2; /*0x4065c0*/
}
}  // G42.18c ns repair
// 0x4065D0
namespace gamemd {  // G42.18c ns repair
void AbstractTypeClass::sub_4065D0(int a1, int a2)
{
  *(unsigned int *)(a1 + 72) = a2; /*0x4065d0*/
}
}  // G42.18c ns repair
// 0x4065E0
namespace gamemd {  // G42.18c ns repair
void AbstractTypeClass::sub_4065E0(int a1, int a2)
{
  *(unsigned int *)(a1 + 80) = a2; /*0x4065e0*/
}
}  // G42.18c ns repair
// 0x4065F0
namespace gamemd {  // G42.18c ns repair
int AbstractTypeClass::sub_4065F0(int a2)
{

  this->customSound_controller[1] = a2; /*0x4065f4*/
  return a2; /*0x4065f7*/

}
}  // G42.18c ns repair
// 0x406600
namespace gamemd {  // G42.18c ns repair
int AbstractTypeClass::sub_406600(int a1, int a2, int a3)
{
  a1->__pad_058 = a2; /*0x406604*/
  a1->u32_5C = a3; /*0x406607*/
  return a3; /*0x40660a*/
}
}  // G42.18c ns repair
// 0x406610
namespace gamemd {  // G42.18c ns repair
int AbstractTypeClass::sub_406610(int a1, int a2, int a3)
{
  a1->nextArrayIndex = a2; /*0x406614*/
  a1->customSound = a3; /*0x406617*/
  return a3; /*0x40661a*/
}
}  // G42.18c ns repair
// 0x406620
namespace gamemd {  // G42.18c ns repair
int AbstractTypeClass::sub_406620(int a1, int a2)
{

  if ( a2 <= 100 ) /*0x406623*/
  {
    if ( a2 >= 0 ) /*0x406630*/
    {
      *(unsigned int *)(a1 + 104) = a2; /*0x406638*/
    }
    else
    {
      *(unsigned int *)(a1 + 104) = 0; /*0x406634*/
      return 0; /*0x406632*/
    }
  }
  else
  {
    *(unsigned int *)(a1 + 104) = 100; /*0x40662a*/
    return 100; /*0x406625*/
  }
  int result; // eax
  return result; /*0x40662d*/
}
}  // G42.18c ns repair
// 0x406640
namespace gamemd {  // G42.18c ns repair
void AbstractTypeClass::sub_406640(int a1, int a2)
{
  *(unsigned int *)(a1 + 76) = a2; /*0x406640*/
}
}  // G42.18c ns repair
// 0x406670
namespace gamemd {
int * sub_406670(void * a1, int a2)
{

  int *result; // eax
  AudioQueue *v5; // esi
  int *v6; // edi
  __int64 v7; // rax

  result = (int *)g_AudioConfigState; /*0x406670*/
  if ( g_AudioConfigState ) /*0x40667e*/
  {
    result = (int *)AudioQueue::GetNext((AudioQueue *)&stru_87E250); /*0x406689*/
    v5 = (AudioQueue *)result; /*0x40668e*/
    if ( result ) /*0x406692*/
    {
      while ( 1 ) /*0x40669d*/
      {
        result = (int *)_strcmpi(a1, &v5[4].__pad_0[12]); /*0x40669d*/
        if ( !result ) /*0x4066a7*/
          break; /*0x4066a7*/
        result = (int *)AudioQueue::GetNextAlt(v5); /*0x4066ab*/
        v5 = (AudioQueue *)result; /*0x4066b0*/
        if ( !result ) /*0x4066b4*/
          return result; /*0x4066b4*/
      }
      if ( v5 ) /*0x4066bc*/
      {
        result = AudioPool::ProcessQueue((AudioPool *)v5); /*0x4066c0*/
        v6 = result; /*0x4066c5*/
        if ( result ) /*0x4066c9*/
        {
          v7 = ((__int64)a2 << 14) / 256; /*0x4066e5*/
          if ( (unsigned int)v7 > 0x4000 ) /*0x4066ef*/
            (v7) = ((v7) & 0xFFFFFFFF00000000ull) | ((0x4000) & 0xFFFFFFFFull); /*0x4066f1*/
          EndBufferMixer(v6 + 46, (unsigned int)(v7 * HIWORD(*(unsigned int *)(v6[9] + 28))) >> 14); /*0x406715*/
          return (int *)AudioMixer::PlaySample((AudioMixer *)(v6 + 46)); /*0x40671c*/
        }
      }
    }
  }
  return result; /*0x4066b6*/

}
} // namespace gamemd

// 0x406730
namespace gamemd {
void sub_406730()
{
  dword_816108 = 0; /*0x406730*/
}
} // namespace gamemd

// 0x406740
namespace gamemd {
void __setargv()
{
  dword_816108 = 1; /*0x406740*/
}
} // namespace gamemd

// 0x4067D0
namespace gamemd {
bool sub_4067D0(char * a1, unsigned int * a2)
{
  char *v5; // eax

  char **v4 = &off_816018; // esi /*0x4067de*/
  if ( off_816018 ) /*0x4067e3*/
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
} // namespace gamemd

// 0x406820
namespace gamemd {
bool sub_406820(unsigned int * a1, char * a2)
{
  void **v5; // eax

  const void **v4; // esi
  v4 = (const void **)&off_8160C0; /*0x40682e*/
  if ( off_8160C0 ) /*0x406833*/
  {
    do /*0x40684d*/
    {
      if ( !_strcmpi(a2, *v4) ) /*0x406839*/
        break; /*0x406843*/
      v5 = (void **)v4[2]; /*0x406845*/
      v4 += 2; /*0x406848*/
    }
    while ( v5 ); /*0x40684d*/
  }
  if ( a1 ) /*0x406851*/
    *a1 |= (unsigned int)v4[1]; /*0x40685a*/
  return *v4 != 0; /*0x406862*/
}
} // namespace gamemd

// 0x406920
namespace gamemd {
void sub_406920()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x40692c*/
  dbl_87E448 = Math::Sqrt(v0 + v0); /*0x40693e*/
}
} // namespace gamemd

// 0x406950
namespace gamemd {
void sub_406950()
{
  dbl_87E698 = dbl_87E448 / 60.0; /*0x40695c*/
}
} // namespace gamemd

// 0x406970
namespace gamemd {
void sub_406970()
{
  dbl_87E680 = 1.0 / dbl_87E698; /*0x40697c*/
}
} // namespace gamemd

// 0x406990
namespace gamemd {
void sub_406990()
{
  dbl_87E678 = 0.0174532925199433 * 45.0; /*0x40699c*/
}
} // namespace gamemd

// 0x4069B0
namespace gamemd {
void sub_4069B0()
{
  dbl_87E4D0 = 0.0174532925199433 * 60.0; /*0x4069bc*/
}
} // namespace gamemd

// 0x4069D0
namespace gamemd {
void sub_4069D0()
{
  dbl_87E2B8 = 0.0174532925199433 * 90.0; /*0x4069dc*/
}
} // namespace gamemd

// 0x4069F0
namespace gamemd {
long long sub_4069F0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_87E2B8 - dbl_87E4D0); /*0x406a02*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_87E448 * 0.5); /*0x406a16*/
  dword_87E720 = result; /*0x406a1b*/
  return result; /*0x406a20*/
}
} // namespace gamemd

// 0x406A30
namespace gamemd {
void sub_406A30()
{
  dbl_87E4D8 = Math::ArcTan((double)dword_87E720 * 0.00390625); /*0x406a47*/
}
} // namespace gamemd

// 0x406A60
namespace gamemd {
void sub_406A60()
{
  dbl_87E570 = Math::ArcTan((double)(2 * dword_87E720) / dbl_87E448); /*0x406a82*/
}
} // namespace gamemd

// 0x406A90
namespace gamemd {
long long sub_406A90()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_87E720) + 0.5); /*0x406aab*/
  dword_87E694 = result; /*0x406ab0*/
  return result; /*0x406ab6*/
}
} // namespace gamemd

// 0x406AC0
namespace gamemd {
int sub_406AC0()
{
  word_87E440 = 0; /*0x406ac2*/
  word_87E442 = 0; /*0x406ac8*/
  return 0; /*0x406ace*/
}
} // namespace gamemd

// 0x406AD0
namespace gamemd {
int sub_406AD0()
{
  dword_87E560 = 0; /*0x406ad2*/
  dword_87E564 = 0; /*0x406ad7*/
  dword_87E568 = 0; /*0x406adc*/
  return 0; /*0x406ae1*/
}
} // namespace gamemd

// 0x406AF0
namespace gamemd {
int sub_406AF0()
{
  dword_87E690 = 0; /*0x406af5*/
  dword_87E688 = 128; /*0x406aff*/
  dword_87E68C = 128; /*0x406b04*/
  return 128; /*0x406b09*/
}
} // namespace gamemd

// 0x406DE0
namespace gamemd {
bool sub_406DE0()
{

  AudioQueue::CreateNode((int)off_816514); /*0x406de9*/
  unsigned int v2[8]; // [esp+0h] [ebp-20h] BYREF
  Struct::ZeroInit32(v2); /*0x406df2*/
  v2[2] = 22050; /*0x406e00*/
  v2[1] = 0; /*0x406e08*/
  v2[3] = 2; /*0x406e10*/
  v2[4] = 2; /*0x406e14*/
  v2[0] = 4; /*0x406e18*/
  sub_4085B0(v2); /*0x406e20*/
  int *AudioChannel; // eax
  AudioChannel = CreateAudioChannel(-1, v2); /*0x406e2c*/
  g_Audio_Enabled = AudioChannel; /*0x406e33*/
  return AudioChannel && AudioQueue::PreallocateChannels(AudioChannel, 16) == 16; /*0x406e50*/
}
}
// 0x406EA0
namespace gamemd {
int sub_406EA0()
{
  if ( g_Audio_Enabled ) /*0x406ea8*/
    AudioQueue::DeactivateAllMatching((int)g_Audio_Enabled, 1); /*0x406eaf*/
  AudioStream::UpdateTimers(); /*0x406eb4*/
  return sub_751040();
}
} // namespace gamemd

// 0x406EE0
namespace gamemd {
int sub_406EE0()
{
  if ( g_Audio_Enabled ) /*0x406ee8*/
    AudioQueue::StopAllVoices((int)g_Audio_Enabled, 1); /*0x406eef*/
  AudioStream::CleanupChannels(); /*0x406ef4*/
  return AudioQueue::HaltVoices();
}
} // namespace gamemd

// 0x406F00
namespace gamemd {
int sub_406F00()
{

  if ( !ChronoScreen::IsActive() ) /*0x406f00*/
  {
    if ( g_Audio_Enabled ) /*0x406f11*/
      AudioQueue::DeactivateAllMatching((int)g_Audio_Enabled, 1); /*0x406f18*/
    AudioStream::UpdateTimers(); /*0x406f1d*/
    sub_751040(); /*0x406f22*/
  }
  int result; // eax
  result = AudioFrame::CounterInc(); /*0x406f27*/
  if ( dword_B1D4D8 ) /*0x753508*/
    return AudioFrame::ProcessAudioFrame((int)dword_B1D4D8); /*0x75350a*/
  return result; /*0x75350f*/
}
}
// 0x407020
namespace gamemd {
int sub_407020()
{

  int result = dword_87E730; // eax /*0x407020*/
  if ( !dword_87E730 ) /*0x407027*/
    result = sub_40A940(); /*0x407029*/
  ++dword_87E730; /*0x40702e*/
  return result; /*0x407034*/
}
} // namespace gamemd

// 0x407060
namespace gamemd {
int E4Recv_407060::sub_407060()
{
  return RequestBufferMixer(0x4000);
}
} // namespace gamemd

// 0x407080
namespace gamemd {
int j_Mixer_RequestBuffer(VolumeStruct* volume, int rate)
{
  return RequestBufferMixer(volume, rate);
}
} // namespace gamemd

// 0x407100
namespace gamemd {
int SetupSampleAudioMixer(int * a0, ObjectClass * aP1)
{

  a0->AudioMixer_field_00 = 0; /*0x407106*/
  int v4; // eax
  v4 = Audio::Callback(); /*0x40710c*/
  int AudioMixer_field_00; // ecx
  AudioMixer_field_00 = a0->AudioMixer_field_00; /*0x407111*/
  a0[1].AudioMixer_field_00 = v4; /*0x407113*/
  a0->AudioMixer_field_10 = 1000; /*0x407119*/
  a0->AudioMixer_field_00 = AudioMixer_field_00 | 1; /*0x407123*/
  a0->AudioMixer_field_08 = aP1 << 16; /*0x407125*/
  int v6; // edx
  a0[1].AudioMixer_field_04 = v6; /*0x407128*/
  a0->AudioMixer_field_0C = 1073741; /*0x40712b*/
  a0->AudioMixer_field_14 = 0; /*0x407132*/
  return AudioMixer::PlaySample(a0); /*0x40713b*/
}
}
// 0x407150
namespace gamemd {
int EndBufferMixer(VolumeStruct* volume, int scaledVolume)
{

  int result = *volume; // eax /*0x407150*/
  (*((unsigned char *)&(result))) = *volume | 1; /*0x407152*/
  *volume = result; /*0x407157*/
  volume[2] = scaledVolume << 16; /*0x407159*/
  return result; /*0x40715c*/
}
} // namespace gamemd

// 0x407160
namespace gamemd {
int ObjectClass::sub_407160()
{


  int result; // eax
  result = (int)this->AbstractClass; /*0x407160*/
  LOBYTE(result) = (int)this->AbstractClass | 1; /*0x407162*/
  this->AbstractClass = (void *)result; /*0x407164*/
  return result; /*0x407166*/

}
} // namespace gamemd

// 0x407170
namespace gamemd {
int RequestBufferMixer(VolumeStruct* volume, int rate)
{

  unsigned int v4 = *volume; // edx /*0x407176*/
  int result; // eax
  result = volume[2]; /*0x407178*/
  unsigned int v6; // ecx
  v6 = volume[1]; /*0x40717b*/
  *volume = v4 & 0xFFFFFFFE; /*0x407183*/
  if ( result == v6 ) /*0x407185*/
  {
    result = Audio::Callback(); /*0x407187*/
    volume[6] = result; /*0x40718c*/
    unsigned int v7; // edx
    volume[7] = v7; /*0x40718f*/
  }
  volume[2] = rate << 16; /*0x407195*/
  return result; /*0x407198*/
}
} // namespace gamemd

// 0x4071A0
namespace gamemd {
int SetRateMixerSample(unsigned int * a0, int a2, unsigned int a3, ObjectClass * aP3)
{
  a0->uniqueId = a3; /*0x4071ae*/
  a0->vtable4 = (a2 << 16) / a3; /*0x4071b2*/
  a0->abstractFlags = aP3; /*0x4071b9*/
  return aP3; /*0x4071b1*/
}
} // namespace gamemd

// 0x4072B0
namespace gamemd {
int E4Recv_4072B0::sub_4072B0()
{

  return (unsigned int)this->M8 >> 16; /*0x4072b6*/

}
} // namespace gamemd

// 0x4072E0
namespace gamemd {
int sub_4072E0(unsigned int * a1, unsigned int * a2)
{

  int result = 0; // eax /*0x4072e6*/
  unsigned int *v3 = a1; // esi /*0x4072e8*/
  while ( 1 ) /*0x4072ea*/
  {
    v3 = (unsigned int *)*v3; /*0x4072ea*/
    if ( !v3 ) /*0x4072ee*/
      break; /*0x4072ee*/
    unsigned int *v4; // ebx
    v4 = (unsigned int *)v3[2]; /*0x4072f0*/
    if ( v3 == v4 ) /*0x4072f5*/
      break; /*0x4072f5*/
    if ( a2[2] <= (int)v4 ) /*0x4072fd*/
    {
      int v5; // ecx
      v5 = v3[1]; /*0x407302*/
      *a2 = v3; /*0x407305*/
      a2[1] = v5; /*0x407307*/
      v3[1] = a2; /*0x40730a*/
      *(unsigned int *)a2[1] = a2; /*0x407313*/
      return result; /*0x407315*/
    }
    ++result; /*0x4072ff*/
  }
  int v6; // esi
  v6 = a1[1]; /*0x407316*/
  *a2 = a1; /*0x407319*/
  a2[1] = v6; /*0x40731b*/
  a1[1] = a2; /*0x40731e*/
  *(unsigned int *)a2[1] = a2; /*0x407327*/
  return result; /*0x407310*/
}
} // namespace gamemd

// 0x407420
namespace gamemd {
int DListNode_InsertAfter(int a1, unsigned int * a2)
{

  int result; // eax
  result = *(unsigned int *)(a1 + 4); /*0x407420*/
  *a2 = a1; /*0x407423*/
  a2[1] = result; /*0x407425*/
  *(unsigned int *)(a1 + 4) = a2; /*0x407428*/
  *(unsigned int *)a2[1] = a2; /*0x40742e*/
  return result; /*0x407430*/
}
} // namespace gamemd

// 0x407440
namespace gamemd {
int LinkedList_InsertBefore(int * a1, int * a2)
{

  a2[1] = (int)a1; /*0x407440*/
  int result = *a1; // eax /*0x407443*/
  *a2 = *a1; /*0x407445*/
  *a1 = (int)a2; /*0x407447*/
  *(unsigned int *)(*a2 + 4) = a2; /*0x40744b*/
  return result; /*0x40744e*/
}
} // namespace gamemd

// 0x4074D0
namespace gamemd {
unsigned int * Memory_AllocLinkedList(int a1, int a2)
{

  int v2; // edi
  unsigned int *result; // eax
  unsigned int *v5; // ecx
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
        v5 = (unsigned int *)((char *)v5 + v2); /*0x407500*/
      }
      while ( v6 ); /*0x407502*/
    }
    *v5 = 0; /*0x407504*/
  }
  return result; /*0x40750a*/

}
} // namespace gamemd

// 0x407530
namespace gamemd {
int LinkedList_PushFront_Alt(unsigned int * a1, int a2)
{
  *(unsigned int *)(a2 - 8) = *a1; /*0x407535*/
  *a1 = a2 - 8; /*0x407537*/
  return a2 - 8; /*0x407539*/
}
} // namespace gamemd

// 0x407550
namespace gamemd {
int sub_407550()
{

  DListNode::Init(unk_87E810); /*0x40755c*/
  InitializeCriticalSection(&unk_87E7F8); /*0x407566*/
  dword_87E770 = 0; /*0x40756e*/
  dword_87E778 = 0; /*0x407574*/
  dword_87E788 = 0; /*0x40757a*/
  qword_87E780 = 1000; /*0x407580*/
  dword_87E774 = 0; /*0x407590*/
  AudioStream::Reset(stru_87E790); /*0x40759b*/
  CoordBounds::Constructor(stru_87E790, qword_87E780, (*((signed int *)(((unsigned char *)&(qword_87E780)) + 4)))); /*0x4075b2*/
  AudioStream::ResetChannel(stru_87E790, 4 * qword_87E780, (uint64_t)qword_87E780 >> 30); /*0x4075d3*/
  AudioStream::ResetChannel2(stru_87E790, 4 * qword_87E780, (uint64_t)qword_87E780 >> 30); /*0x4075f5*/
  HANDLE Thread; // eax
  Thread = CreateThread(0, 0x1000u, (LPTHREAD_START_ROUTINE)StartAddress, &dword_87E770, 0, &unk_87E7F4); /*0x407610*/
  dword_87E7F0 = Thread; /*0x407618*/
  if ( !Thread ) /*0x40761d*/
    return 0; /*0x40761f*/
  if ( !SetThreadPriority(Thread, 2) ) /*0x40762c*/
  {
    DWORD LastError; // eax
    LastError = GetLastError(); /*0x407642*/
    CHAR Buffer[1024]; // [esp+4h] [ebp-400h] BYREF
    FormatMessageA(0x1000u, 0, LastError, 0, Buffer, 0x400u, 0); /*0x40764f*/
    Debug::Log(); /*0x40765f*/
  }
  dword_87E820 = 1; /*0x40766d*/
  dword_87E81C = 1; /*0x407672*/
  return 1; /*0x407621*/
}
} // namespace gamemd

// 0x407680
namespace gamemd {
DWORD StartAddress(unsigned int * lpThreadParameter)
{

  unsigned int *v1; // edi
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
      AudioThread::UpdateStats(v1 + 8, v2); /*0x4076af*/
      EnterCriticalSection(&CriticalSection); /*0x4076b9*/
      for ( i = AudioQueue::GetNext((AudioQueue *)&unk_87E810); i; i = AudioQueue::GetNextAlt((AudioQueue *)i) ) /*0x4076c9*/
      {
        if ( (*(unsigned char *)(i + 12) & 4) != 0 ) /*0x4076cf*/
        {
          EnterCriticalSection(&CriticalSection); /*0x4076d6*/
          v4 = *(unsigned int *)(i + 156); /*0x4076d8*/
          byte_B04BEC = 1; /*0x4076e2*/
          v5 = sub_408F80(*(int **)(i + 52), *(int **)(i + 124), v4, (char *)&lpThreadParameter); /*0x4076f1*/
          byte_B04BEC = 0; /*0x4076f6*/
          v6 = *(unsigned int *)(i + 156) - (unsigned int)lpThreadParameter; /*0x407706*/
          *(unsigned int *)(i + 156) = v6; /*0x40770a*/
          if ( v6 <= 0 || v5 == 2 || !v5 ) /*0x407719*/
          {
            v7 = *(unsigned int *)(i + 12); /*0x40771b*/
            (v7) = ((v7) & ~0xFF) | ((v7 & 0xFB) & 0xFF); /*0x40771e*/
            *(unsigned int *)(i + 12) = v7; /*0x407720*/
          }
          LeaveCriticalSection(&CriticalSection); /*0x407728*/
        }
      }
      LeaveCriticalSection(&CriticalSection); /*0x407740*/
      Sleep(v1[4]); /*0x40774d*/
      ++v1[1]; /*0x407757*/
    }
    while ( !*v1 ); /*0x40775e*/
    v1[2] = 1; /*0x407764*/
    return 0; /*0x40776e*/
  }

}
} // namespace gamemd

// 0x407780
namespace gamemd {
void sub_407780(Voice * a1)
{

  if ( *(unsigned int *)&DataGlobal_87E81C ) /*0x407787*/
  {
    if ( DataGlobal_87E820 ) /*0x407795*/
    {
      dword_87E770 = 1; /*0x407797*/
      while ( !dword_87E778 ) /*0x4077a8*/
        Sleep(0); /*0x4077b2*/
      WaitForSingleObject(*(HANDLE *)&hObject, 0x1388u); /*0x4077c8*/
      CloseHandle(*(HANDLE *)&hObject); /*0x4077d5*/
      DataGlobal_87E820 = 0; /*0x4077db*/
    }
    AudioSample *Next; // esi
    Next = (AudioSample *)((AudioQueue *)((AudioQueue *)&DataGlobal_87E810))->GetNext(); /*0x4077ef*/
    if ( Next ) /*0x4077f3*/
    {
      Voice *v2; // [esp-Ch] [ebp-Ch]
      v2 = a1; /*0x4077fc*/
      do /*0x40783f*/
      {
        if ( !Next[6].AudioSample_field_0x10 ) /*0x407803*/
        {
          if ( *Next->q004.__pad_0 ) /*0x40780d*/
          {
            EnterCriticalSection((LPCRITICAL_SECTION)&CriticalSection); /*0x407819*/
            ((Voice *)(v2))->Stop(); /*0x40781e*/
            LeaveCriticalSection((LPCRITICAL_SECTION)&CriticalSection); /*0x407828*/
          }
        }
        AudioSample::Destructor(Next); /*0x40782c*/
        Next = (AudioSample *)((AudioQueue *)((AudioQueue *)&DataGlobal_87E810))->GetNext(); /*0x40783b*/
      }
      while ( Next ); /*0x40783f*/
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&CriticalSection); /*0x407848*/
    *(unsigned int *)&DataGlobal_87E81C = 0; /*0x40784e*/
  }
}
} // namespace gamemd

// 0x407F80
namespace gamemd {
int E4Recv_407F80::sub_407F80()
{


  int result; // eax
  result = (int)&this->parachute->AnimClass_field_0x0 + 1; /*0x407f86*/
  this->parachute = (AnimClass *)result; /*0x407f87*/
  return result; /*0x407f8d*/

}
} // namespace gamemd

// 0x408080
namespace gamemd {
char * SetAudioFileName(int a1, const char * a2)
{

  char *result; // eax
  result = strncpy((char *)(a1 + 164), a2, 0x50u); /*0x40808d*/
  *(unsigned char *)(a1 + 243) = 0; /*0x408095*/
  return result; /*0x40809c*/
}
} // namespace gamemd

// 0x4080A0
namespace gamemd {
char * E4Recv_4080A0::sub_4080A0()
{

  return &this->u8_E8; /*0x4080a6*/

}
} // namespace gamemd

// 0x4080B0
namespace gamemd {
int E4Recv_4080B0::sub_4080B0()
{
  return RequestBufferMixer((unsigned int *)(this->abstractFlags + 16), 0x4000);
}
} // namespace gamemd

// 0x4082F0
namespace gamemd {
int AudioTimer_Process()
{

  int result; // eax
  result = *(unsigned int *)&DataGlobal_87E81C; /*0x4082f0*/
  if ( *(unsigned int *)&DataGlobal_87E81C ) /*0x4082f8*/
  {
    result = ((AudioQueue *)((AudioQueue *)&DataGlobal_87E810))->GetNext(); /*0x408303*/
    int i; // esi
    for ( i = result; result; i = result ) /*0x40830c*/
    {
      if ( i->q080 ) /*0x40831c*/
      {
        int v2 = i->q080 - 1; // eax /*0x40832c*/
        i->q080 = v2; /*0x40832f*/
        if ( v2 < 0 ) /*0x408335*/
          i->q080 = 0; /*0x408337*/
        if ( !*&i->q080 && i->u32_14 ) /*0x40834b*/
        {
          EnterCriticalSection((LPCRITICAL_SECTION)&CriticalSection); /*0x408357*/
          int v3 = i->u32_C; // eax /*0x408359*/
          if ( (v3 & 2) != 0 ) /*0x40835e*/
          {
            (*((unsigned char *)&(v3))) = v3 & 0xFC | 1; /*0x408362*/
            i->u32_C = v3; /*0x408364*/
          }
          AudioChannel::ActivatePlay(i->u32_14); /*0x40836a*/
          LeaveCriticalSection((LPCRITICAL_SECTION)&CriticalSection); /*0x408374*/
        }
      }
      result = ((AudioQueue *)((AudioQueue *)i))->GetNextAlt(); /*0x408378*/
    }
  }
  return result; /*0x408385*/
}
} // namespace gamemd

// 0x408390
namespace gamemd {
int sub_408390()
{

  int result = dword_87E81C; // eax /*0x408390*/
  if ( dword_87E81C ) /*0x408398*/
  {
    result = ((AudioQueue *)(unk_87E810))->GetNext(); /*0x40839f*/
    int *i; // esi
    for ( i = (int *)result; result; i = (int *)result ) /*0x4083a8*/
    {
      RequestBufferMixer((unsigned int *)(i[5] + 16), 0); /*0x4083b2*/
      result = ((AudioQueue *)(i))->GetNextAlt(); /*0x4083b9*/
    }
  }
  return result; /*0x4083c4*/
}
} // namespace gamemd

// 0x408410
namespace gamemd {
int sub_408410()
{

  if ( !*(unsigned int *)&DataGlobal_87E81C ) /*0x408418*/
    return 1; /*0x408418*/
  AudioQueue *Next; // eax
  Next = (AudioQueue *)((AudioQueue *)((AudioQueue *)&DataGlobal_87E810))->GetNext(); /*0x40841f*/
  if ( !Next ) /*0x408426*/
    return 1; /*0x40844c*/
  while ( (Next->u32_C & 1) == 0 /*0x408439*/
       || *(unsigned int *)(Next->u32_14 + 20) == *(unsigned int *)(Next->u32_14 + 24) )
  {
    Next = (AudioQueue *)((AudioQueue *)(Next))->GetNextAlt(); /*0x40843d*/
    if ( !Next ) /*0x408444*/
      return 1; /*0x408444*/
  }
  return 0; /*0x40844a*/
}
} // namespace gamemd

// 0x408460
namespace gamemd {
unsigned int * ObjectClass::sub_408460(size_t Size)
{

  DListNode *v2; // esi
  v2 = (DListNode *)operator new(0x20u); /*0x40846c*/
  memset(v2, 0, 0x20u); /*0x408477*/
  *(unsigned int *)v2->__pad_000 = 0; /*0x408481*/
  v2->q004 = 0; /*0x408483*/
  v2[2].DListNode_field_0x04 = 0; /*0x408486*/
  *v2->u32_C.__pad_0 = 0; /*0x408489*/
  DListNode::Init(v2 + 1); /*0x40848c*/
  v2->q004 = (int)Size; /*0x408491*/
  int v3; // eax
  v3 = operator new((size_t)Size); /*0x408495*/
  *(unsigned int *)v2->__pad_000 = v3; /*0x40849f*/
  if ( v3 ) /*0x4084a1*/
    return v2->__pad_000; /*0x4084b6*/
  if ( v2 ) /*0x4084a5*/
    operator delete((v2)); /*0x4084a8*/
  return 0; /*0x4084b0*/
}
} // namespace gamemd

// 0x408500
namespace gamemd {
int sub_408500(int a1, unsigned int * a2)
{

  InsertAfterDListNode(a1 + 8, a2); /*0x408509*/
  int result; // eax
  result = a2[4]; /*0x40850e*/
  *(unsigned int *)(a1 + 4) += result; /*0x408516*/
  a2[5] = a1; /*0x408519*/
  return result; /*0x40851c*/
}
} // namespace gamemd

// 0x408530
namespace gamemd {
void nullsub_2()
{

  int result; // eax
  return result; /*0x408530*/
}
} // namespace gamemd

// 0x408560
namespace gamemd {
unsigned long long sub_408560(int a1, int a2)
{

  int v2; // esi
  v2 = *(unsigned int *)(a1 + 20); /*0x408561*/
  if ( v2 ) /*0x408568*/
    return 1000LL * a2 / (uint64_t)v2; /*0x408585*/
  else
    return 0; /*0x40858d*/
}
} // namespace gamemd

// 0x4085B0
namespace gamemd {
int E4Recv_4085B0::sub_4085B0()
{


  void *vtable1 = this->M4; // edx /*0x4085b3*/
  int result; // eax
  result = (int)this->q018 * (int)this->q018 * this->q018; /*0x4085ba*/
  this->M20 = result; /*0x4085c1*/
  if ( vtable1 == 1 || vtable1 == 2 ) /*0x4085c9*/
  {
    result >>= 2; /*0x4085cb*/
    this->M20 = result; /*0x4085ce*/
  }
  return result; /*0x4085d1*/

}
} // namespace gamemd

// 0x4085E0
namespace gamemd {
void sub_4085E0(unsigned int * a1, int a2, int a3)
{
  a1[4] = a3; /*0x4085e7*/
  a1[3] = a2; /*0x4085ea*/
  DListNode::InitEmpty(a1); /*0x4085ed*/
  a1[5] = 0; /*0x4085f2*/
}
} // namespace gamemd

// 0x4087F0
namespace gamemd {
unsigned int * sub_4087F0()
{

  unsigned int *v0; // esi
  v0 = operator new(0xA4u); /*0x4087fc*/
  memset(v0, 0, 0xA4u); /*0x408807*/
  DListNode::Init(v0 + 1); /*0x40880f*/
  v0[38] = 0; /*0x408816*/
  int v1 = 0; // ecx /*0x40881c*/
  unsigned int *v2 = v0 + 15; // eax /*0x40881e*/
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
} // namespace gamemd

// 0x408B10
namespace gamemd {
char sub_408B10(unsigned int * a1, int * a2)
{

  int v4; // ecx
  int v5; // eax

  InsertBeforeLinkedList(a1 + 1, a2); /*0x408b19*/
  v4 = a1[5]; /*0x408b20*/
  ++*a1; /*0x408b24*/
  a1[5] = a2[7] + v4; /*0x408b2b*/
  a2[12] = (int)a1; /*0x408b2e*/
  v5 = a1[4]; /*0x408b31*/
  (v5) = ((v5) & ~0xFF) | ((v5 & 0xFD) & 0xFF); /*0x408b35*/
  a1[4] = v5; /*0x408b37*/
  return v5; /*0x408b34*/

}
} // namespace gamemd

// 0x408B40
namespace gamemd {
int sub_408B40(unsigned int * a1, int a2, int a3, size_t Size)
{
  unsigned int *v7; // esi

  int result = 0; // eax /*0x408b46*/
  int v11; // [esp+10h] [ebp-Ch]
  v11 = 0; /*0x408b50*/
  int v12; // [esp+14h] [ebp-8h]
  v12 = a2 - 1; /*0x408b54*/
  if ( a2 ) /*0x408b58*/
  {
    int v13; // [esp+18h] [ebp-4h]
    v13 = 1 << Size; /*0x408b6f*/
    size_t Sizea; // [esp+24h] [ebp+8h]
    Sizea = a3 + (1 << Size); /*0x408b75*/
    while ( 1 ) /*0x408b80*/
    {
      v7 = operator new(0x3Cu); /*0x408b80*/
      memset(v7, 0, 0x3Cu); /*0x408b8b*/
      DListNode::InitEmpty(v7); /*0x408b92*/
      void *v8; // eax
      v8 = operator new(Sizea); /*0x408b9c*/
      v7->u32_10 = v8; /*0x408ba4*/
      if ( !v8 ) /*0x408ba9*/
        break; /*0x408ba9*/
      v7->u32_14 = Size; /*0x408baf*/
      v7[7] = a3; /*0x408bc1*/
      v7->u32_18 = (-1 << Size) & ((unsigned int)v8 + v13 - 1); /*0x408bc8*/
      if ( v7 ) /*0x408bcb*/
      {
        InsertBeforeLinkedList(a1 + 1, v7); /*0x408bd2*/
        int v9; // eax
        v9 = a1[5]; /*0x408bd9*/
        ++*a1; /*0x408bdd*/
        a1[5] = v7[7] + v9; /*0x408be4*/
        int v10 = v12; // eax /*0x408be7*/
        v7->u32_30 = a1; /*0x408beb*/
        a1[4] &= ~2u; /*0x408bfc*/
        ++v11; /*0x408c01*/
        --v12; /*0x408c05*/
        if ( v10 ) /*0x408c09*/
          continue; /*0x408c09*/
      }
      return v11; /*0x408c09*/
    }
    if ( v7 ) /*0x408c12*/
      operator delete((v7)); /*0x408c15*/
    return v11; /*0x408c1d*/
  }
  return result; /*0x408c21*/
}
} // namespace gamemd

// 0x408D30
namespace gamemd {
int E4Recv_408D30::sub_408D30()
{

  return *&this->u32_E8 - *&this->u32_E8; /*0x408d3e*/

}
} // namespace gamemd

// 0x408D40
namespace gamemd {
int E4Recv_408D40::sub_408D40()
{

  return this->ambientSoundController[4] - this->customSound_controller[0]; /*0x408d48*/

}
} // namespace gamemd

// 0x408D80
namespace gamemd {
unsigned int * sub_408D80(int a1, int a2)
{

  unsigned int *v4; // esi
  v4 = operator new(0x3Cu); /*0x408d8f*/
  memset(v4, 0, 0x3Cu); /*0x408d9a*/
  DListNode::InitEmpty(v4); /*0x408da1*/
  void *v5; // eax
  v5 = operator new((1 << a2) + a1); /*0x408db3*/
  v4->u32_10 = v5; /*0x408dbb*/
  if ( v5 ) /*0x408dc0*/
  {
    v4->u32_14 = a2; /*0x408ddf*/
    v4[7] = a1; /*0x408de4*/
    v4->u32_18 = (-1 << a2) & ((unsigned int)v5 + (1 << a2) - 1); /*0x408dec*/
    return v4; /*0x408dea*/
  }
  else
  {
    if ( v4 ) /*0x408dc4*/
      operator delete((v4)); /*0x408dc7*/
    return 0; /*0x408dd2*/
  }
}
} // namespace gamemd

// 0x408EB0
namespace gamemd {
int sub_408EB0(int a1, int a2)
{
  *(unsigned int *)(a1 + 24) = a2; /*0x408eb0*/
  return 0; /*0x408eb5*/
}
} // namespace gamemd

// 0x408EC0
namespace gamemd {
int E4Recv_408EC0::sub_408EC0()
{

  return this->M24; /*0x408ec3*/

}
} // namespace gamemd

// 0x408ED0
namespace gamemd {
int E4Recv_408ED0::sub_408ED0()
{

  return this->M20; /*0x408ed3*/

}
} // namespace gamemd

// 0x408EE0
namespace gamemd {
int BufferedAudioStreamRead(AudioStream * a1, AudioStream * a2, signed int a3)
{
  const void *v6; // esi

  void *v3 = a2; // edi /*0x408ee7*/
  int v9; // [esp+10h] [ebp-8h]
  v9 = 0; /*0x408eed*/
  char *v10; // [esp+14h] [ebp-4h]
  v10 = a2; /*0x408ef5*/
  ReadAudioStream(a1, 0); /*0x408ef9*/
  while ( 1 ) /*0x408f04*/
  {
    signed int v5; // ebx
    v5 = a1[2]; /*0x408f04*/
    if ( v5 > a3 ) /*0x408f0d*/
      v5 = a3; /*0x408f0f*/
    if ( !v5 ) /*0x408f13*/
      break; /*0x408f13*/
    if ( a1[5] ) /*0x408f15*/
    {
      v6 = a1->u8_4; /*0x408f1e*/
    }
    else
    {
      v6 = v3; /*0x408f2e*/
      v3 = a1->u8_4; /*0x408f30*/
    }
    memcpy(v3, v6, v5); /*0x408f26*/
    ReadAudioStream(a1, v5); /*0x408f43*/
    bool v7; // zf
    v7 = a3 == v5; /*0x408f5a*/
    v10 += v5; /*0x408f5c*/
    a3 -= v5; /*0x408f60*/
    v9 += v5; /*0x408f64*/
    if ( v7 ) /*0x408f68*/
      break; /*0x408f68*/
    v3 = v10; /*0x408f00*/
  }
  return v9; /*0x408f6e*/
}
} // namespace gamemd

// 0x4090F0
namespace gamemd {
int E4Recv_4090F0::sub_4090F0()
{

  return this->occupant; /*0x4090f3*/

}
} // namespace gamemd

// 0x409330
namespace gamemd {
int E4Recv_409330::sub_409330()
{

  return (int)this->nextObject; /*0x409333*/

}
} // namespace gamemd

// 0x409360
namespace gamemd {
int sub_409360()
{

  LONGLONG v0; // rax
  LARGE_INTEGER Frequency; // [esp+0h] [ebp-8h] BYREF

  LODWORD(v0) = QueryPerformanceFrequency(&Frequency); /*0x409368*/
  if ( (unsigned int)v0 ) /*0x409370*/
  {
    v0 = Frequency.QuadPart / 1000; /*0x409383*/
    dword_87E828 = Frequency.QuadPart / 1000; /*0x409388*/
    dword_87E848 = (int (*)(void))sub_4093C0; /*0x409393*/
  }
  else
  {
    dword_87E848 = (int (*)(void))sub_4093F0; /*0x4093a1*/
  }
  return v0; /*0x40939d*/

}
} // namespace gamemd

// 0x4093C0
namespace gamemd {
LONGLONG sub_4093C0()
{
  LARGE_INTEGER PerformanceCount; // [esp+0h] [ebp-8h] BYREF

  QueryPerformanceCounter(&PerformanceCount); /*0x4093c8*/
  return PerformanceCount.QuadPart / dword_87E828; /*0x4093eb*/
}
} // namespace gamemd

// 0x409470
namespace gamemd {
int E4Recv_409470::sub_409470()
{


  InitializeCriticalSection((LPCRITICAL_SECTION)&DataGlobal_87E880); /*0x40947f*/
  if ( DirectSoundCreate(0, (LPDIRECTSOUND *)&DataGlobal_87E89C, 0) ) /*0x40948e*/
    return -2147221504; /*0x4094a4*/
  (*(void (**)(unsigned int, HWND, int))(**(unsigned int **)&DataGlobal_87E89C + 24))( /*0x4094b6*/
    *(unsigned int *)&DataGlobal_87E89C,
    g_hWnd,
    2);
  this->M24 = 1; /*0x4094b9*/
  if ( *(unsigned int *)&DataGlobal_87E898 ) /*0x4094c7*/
  {
    ++*(unsigned int *)&DataGlobal_87E878; /*0x409595*/
  }
  else
  {
    *(unsigned int *)&DataGlobal_87E878 = 0; /*0x4094cd*/
    DataGlobal_87E850 = 0; /*0x4094d3*/
    *(unsigned int *)&DataGlobal_87E858 = 0; /*0x4094d9*/
    *(unsigned int *)DataGlobal_87E868 = 0; /*0x4094df*/
    *(unsigned int *)&DataGlobal_87E860 = 33; /*0x4094e5*/
    DataGlobal_87E864 = 0; /*0x4094ef*/
    *(unsigned int *)DataGlobal_87E854 = 0; /*0x4094f5*/
    HANDLE Thread; // eax
    Thread = CreateThread( /*0x409511*/
               0,
               0x1000u,
               (LPTHREAD_START_ROUTINE)AudioStreamThreadProc,
               DataGlobal_87E850,
               0,
               (LPDWORD)&DataGlobal_87E874);
    *(unsigned int *)&DataGlobal_87E86C = Thread; /*0x409519*/
    if ( !Thread ) /*0x40951e*/
      return -2147221504; /*0x40952d*/
    ++*(unsigned int *)&DataGlobal_87E878; /*0x409535*/
    *(unsigned int *)&DataGlobal_87E898 = 1; /*0x40953e*/
    if ( !SetThreadPriority(Thread, 15) ) /*0x409548*/
    {
      DWORD LastError; // eax
      LastError = GetLastError(); /*0x40955e*/
      CHAR Buffer[1024]; // [esp+Ch] [ebp-400h] BYREF
      FormatMessageA(0x1000u, 0, LastError, 0, Buffer, 0x400u, 0); /*0x40956b*/
      Debug::Log(); /*0x40957b*/
      return 0; /*0x40958d*/
    }
  }
  return 0; /*0x409497*/

}
} // namespace gamemd

// 0x409D90
namespace gamemd {
int sub_409D90(int a1, void * a2, unsigned int * a3, const void * a4, unsigned int * a5)
{

  unsigned int v5 = *a3; // eax /*0x409d9a*/
  if ( (int)*a3 > (int)*a5 ) /*0x409da1*/
    v5 = *a5; /*0x409da3*/
  if ( v5 ) /*0x409da7*/
  {
    memcpy(a2, a4, v5); /*0x409db8*/
    *a3 = v5; /*0x409dc1*/
    *a5 = v5; /*0x409dc4*/
  }
  return 1; /*0x409dc8*/
}
} // namespace gamemd

// 0x40A2D0
namespace gamemd {
int E4Recv_40A2D0::sub_40A2D0()
{

  int v2 = this->M344; // esi /*0x40a2d5*/
  if ( v2 ) /*0x40a2df*/
  {
    if ( v2->q07C ) /*0x40a2e1*/
    {
      free(v2->q07C); /*0x40a2e9*/
      v2->q07C = 0; /*0x40a2f1*/
      v2->q088 = 0; /*0x40a2f4*/
    }
    if ( v2->q090 ) /*0x40a2fa*/
    {
      free(v2->q090); /*0x40a305*/
      v2->q090 = 0; /*0x40a30d*/
      v2->Coord_9C = 0; /*0x40a313*/
    }
    int v3 = v2->q064; // eax /*0x40a319*/
    if ( v3 ) /*0x40a31e*/
    {
      (*(void (__stdcall **)(unsigned int))(*(unsigned int *)v3 + 8))(*&v2->q064); /*0x40a323*/
      v2->q064 = 0; /*0x40a326*/
    }
    operator delete(((void *)v2)); /*0x40a32a*/
    this->M344 = 0; /*0x40a332*/
  }
  return 0; /*0x40a338*/
}
} // namespace gamemd

// 0x40A770
namespace gamemd {
int sub_40A770()
{
  return -2147221504; /*0x40a775*/
}
} // namespace gamemd

// 0x40A7B0
namespace gamemd {
int sub_40A7B0()
{
  return dword_87E8A0; /*0x40a7b5*/
}
} // namespace gamemd

// 0x40ACD0
namespace gamemd {
short Coord_MoveByDirection(unsigned char a1, int * a2)
{

  int v2; // esi
  v2 = dword_816558[a2[1]]; /*0x40acd5*/
  int v3 = v2 >> 3; // eax /*0x40acde*/
  if ( (a1 & 1) != 0 ) /*0x40ace4*/
    v3 += v2 >> 2; /*0x40aceb*/
  if ( (a1 & 2) != 0 ) /*0x40acf0*/
    v3 += v2 >> 1; /*0x40acf6*/
  if ( (a1 & 4) != 0 ) /*0x40acfb*/
    v3 += v2; /*0x40acfd*/
  if ( (a1 & 8) != 0 ) /*0x40ad02*/
    v3 = -v3; /*0x40ad04*/
  int v4 = v3 + *a2; // edi /*0x40ad08*/
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
  int v5; // eax
  v5 = a2[1]; /*0x40ad2c*/
  int v6; // ecx
  v6 = dword_816518[a1]; /*0x40ad35*/
  bool v7 = v6 + v5 < 0; // sf /*0x40ad3c*/
  int v8 = v6 + v5; // eax /*0x40ad3c*/
  a2[1] = v8; /*0x40ad3e*/
  if ( v7 ) /*0x40ad41*/
  {
    a2[1] = 0; /*0x40ad43*/
    return *(unsigned short *)a2; /*0x40ad4a*/
  }
  else
  {
    if ( v8 > 88 ) /*0x40ad51*/
      a2[1] = 88; /*0x40ad53*/
    return *(unsigned short *)a2; /*0x40ad5a*/
  }
}
} // namespace gamemd

// 0x40AD60
namespace gamemd {
int sub_40AD60()
{
  __0Iostream_init_QAE_XZ_0((Iostream_init *)&unk_87E8A8); /*0x40ad65*/
  return atexit(unknown_libname_1); /*0x40ad75*/
}
} // namespace gamemd

// 0x40AD80
namespace gamemd {
int unknown_libname_1()
{
  nullsub_53(&unk_87E8A8); /*0x40ad85*/
}
} // namespace gamemd

// 0x40AD90
namespace gamemd {
void sub_40AD90()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x40ad9c*/
  dbl_87F550 = Math::Sqrt(v0 + v0); /*0x40adae*/
}
} // namespace gamemd

// 0x40ADC0
namespace gamemd {
void sub_40ADC0()
{
  dbl_87F5A0 = dbl_87F550 / 60.0; /*0x40adcc*/
}
} // namespace gamemd

// 0x40ADE0
namespace gamemd {
void sub_40ADE0()
{
  dbl_87F588 = 1.0 / dbl_87F5A0; /*0x40adec*/
}
} // namespace gamemd

// 0x40AE00
namespace gamemd {
void sub_40AE00()
{
  dbl_87F580 = 0.0174532925199433 * 45.0; /*0x40ae0c*/
}
} // namespace gamemd

// 0x40AE20
namespace gamemd {
void sub_40AE20()
{
  dbl_87F558 = 0.0174532925199433 * 60.0; /*0x40ae2c*/
}
} // namespace gamemd

// 0x40AE40
namespace gamemd {
void sub_40AE40()
{
  dbl_87E8B0 = 0.0174532925199433 * 90.0; /*0x40ae4c*/
}
} // namespace gamemd

// 0x40AE60
namespace gamemd {
long long sub_40AE60()
{

  double v0; // st7
  v0 = Math::Sin(dbl_87E8B0 - dbl_87F558); /*0x40ae72*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_87F550 * 0.5); /*0x40ae86*/
  dword_87F5A8 = result; /*0x40ae8b*/
  return result; /*0x40ae90*/
}
} // namespace gamemd

// 0x40AEA0
namespace gamemd {
void sub_40AEA0()
{
  dbl_87F560 = Math::ArcTan((double)dword_87F5A8 * 0.00390625); /*0x40aeb7*/
}
} // namespace gamemd

// 0x40AED0
namespace gamemd {
void sub_40AED0()
{
  dbl_87F578 = Math::ArcTan((double)(2 * dword_87F5A8) / dbl_87F550); /*0x40aef2*/
}
} // namespace gamemd

// 0x40AF00
namespace gamemd {
long long sub_40AF00()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_87F5A8) + 0.5); /*0x40af1b*/
  dword_87F59C = result; /*0x40af20*/
  return result; /*0x40af26*/
}
} // namespace gamemd

// 0x40AF30
namespace gamemd {
int sub_40AF30()
{
  word_87F548 = 0; /*0x40af32*/
  word_87F54A = 0; /*0x40af38*/
  return 0; /*0x40af3e*/
}
} // namespace gamemd

// 0x40AF40
namespace gamemd {
int sub_40AF40()
{
  dword_87F568 = 0; /*0x40af42*/
  dword_87F56C = 0; /*0x40af47*/
  dword_87F570 = 0; /*0x40af4c*/
  return 0; /*0x40af51*/
}
} // namespace gamemd

// 0x40AF60
namespace gamemd {
int sub_40AF60()
{
  dword_87F598 = 0; /*0x40af65*/
  dword_87F590 = 128; /*0x40af6f*/
  dword_87F594 = 128; /*0x40af74*/
  return 128; /*0x40af79*/
}
} // namespace gamemd

// 0x40AF80
namespace gamemd {
int sub_40AF80()
{
  dword_87F538 = 0; /*0x40af82*/
  dword_87F53C = 0; /*0x40af87*/
  dword_87F540 = 0; /*0x40af8c*/
  dword_87F544 = 0; /*0x40af91*/
  return 0; /*0x40af96*/
}
} // namespace gamemd

// 0x40AFA0
namespace gamemd {
int sub_40AFA0()
{
  Tactical::ConstructTacticalSurface(unk_87E8B8); /*0x40afa5*/
  return atexit(unknown_libname_2); /*0x40afb5*/
}
} // namespace gamemd

// 0x40AFC0
namespace gamemd {
int unknown_libname_2()
{
  sub_42A900((int)unk_87E8B8); /*0x40afc5*/
}
} // namespace gamemd

// 0x40B010
namespace gamemd {
void ** ObjectClass::sub_40B010(void ** Block, char a2)
{

  int v3; // eax
  char *v4; // ebp
  ObjectClass *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x40b01b*/
  {
    v3 = *((unsigned int *)this - 1); /*0x40b01d*/
    v4 = (char *)this - 4; /*0x40b021*/
    v5 = (ObjectClass *)((char *)this + 4 * v3); /*0x40b024*/
    v6 = v3 - 1; /*0x40b027*/
    if ( v6 >= 0 ) /*0x40b028*/
    {
      v7 = v6 + 1; /*0x40b02b*/
      do /*0x40b039*/
      {
        v5 = (ObjectClass *)((char *)v5 - 4); /*0x40b02e*/
        DeleteAndZero(v5); /*0x40b033*/
        --v7; /*0x40b038*/
      }
      while ( v7 ); /*0x40b039*/
    }
    if ( (a2 & 1) != 0 ) /*0x40b03f*/
      __3_YAXPAX_Z(v4); /*0x40b042*/
    return (void **)v4; /*0x40b04a*/
  }
  else
  {
    DeleteAndZero(this); /*0x40b054*/
    if ( (a2 & 1) != 0 ) /*0x40b05c*/
      __3_YAXPAX_Z(this); /*0x40b05f*/
    return (void **)this; /*0x40b067*/
  }

}
} // namespace gamemd

// 0x40B350
namespace gamemd {
void sub_40B350()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x40b35c*/
  dbl_87F5C0 = Math::Sqrt(v0 + v0); /*0x40b36e*/
}
} // namespace gamemd

// 0x40B380
namespace gamemd {
void sub_40B380()
{
  dbl_87F648 = dbl_87F5C0 / 60.0; /*0x40b38c*/
}
} // namespace gamemd

// 0x40B3A0
namespace gamemd {
void sub_40B3A0()
{
  dbl_87F630 = 1.0 / dbl_87F648; /*0x40b3ac*/
}
} // namespace gamemd

// 0x40B3C0
namespace gamemd {
void sub_40B3C0()
{
  dbl_87F628 = 0.0174532925199433 * 45.0; /*0x40b3cc*/
}
} // namespace gamemd

// 0x40B3E0
namespace gamemd {
void sub_40B3E0()
{
  dbl_87F5C8 = 0.0174532925199433 * 60.0; /*0x40b3ec*/
}
} // namespace gamemd

// 0x40B400
namespace gamemd {
void sub_40B400()
{
  dbl_87F5B0 = 0.0174532925199433 * 90.0; /*0x40b40c*/
}
} // namespace gamemd

// 0x40B420
namespace gamemd {
long long sub_40B420()
{

  double v0; // st7
  v0 = Math::Sin(dbl_87F5B0 - dbl_87F5C8); /*0x40b432*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_87F5C0 * 0.5); /*0x40b446*/
  dword_87F650 = result; /*0x40b44b*/
  return result; /*0x40b450*/
}
} // namespace gamemd

// 0x40B460
namespace gamemd {
void sub_40B460()
{
  dbl_87F5D0 = Math::ArcTan((double)dword_87F650 * 0.00390625); /*0x40b477*/
}
} // namespace gamemd

// 0x40B490
namespace gamemd {
void sub_40B490()
{
  dbl_87F620 = Math::ArcTan((double)(2 * dword_87F650) / dbl_87F5C0); /*0x40b4b2*/
}
} // namespace gamemd

// 0x40B4C0
namespace gamemd {
long long sub_40B4C0()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_87F650) + 0.5); /*0x40b4db*/
  dword_87F644 = result; /*0x40b4e0*/
  return result; /*0x40b4e6*/
}
} // namespace gamemd

// 0x40B4F0
namespace gamemd {
int sub_40B4F0()
{
  word_87F5B8 = 0; /*0x40b4f2*/
  word_87F5BA = 0; /*0x40b4f8*/
  return 0; /*0x40b4fe*/
}
} // namespace gamemd

// 0x40B500
namespace gamemd {
int sub_40B500()
{
  dword_87F610 = 0; /*0x40b502*/
  dword_87F614 = 0; /*0x40b507*/
  dword_87F618 = 0; /*0x40b50c*/
  return 0; /*0x40b511*/
}
} // namespace gamemd

// 0x40B520
namespace gamemd {
int sub_40B520()
{
  dword_87F640 = 0; /*0x40b525*/
  dword_87F638 = 128; /*0x40b52f*/
  dword_87F63C = 128; /*0x40b534*/
  return 128; /*0x40b539*/
}
} // namespace gamemd

// 0x40B540
namespace gamemd {
int sub_40B540()
{
  dword_87F5DC = 0; /*0x40b54a*/
  dword_87F5E0 = 0; /*0x40b550*/
  byte_87F5E4 = 1; /*0x40b556*/
  byte_87F5E5 = 0; /*0x40b55d*/
  stru_87F5D8 = (int)&vt_DynamicVectorClass; /*0x40b563*/
  dword_87F5EC = 10; /*0x40b56d*/
  dword_87F5E8 = 0; /*0x40b577*/
  EventClass::resetEvent(&stru_87F5F0, 0, 0); /*0x40b57d*/
  stru_87F5F0 = (int)&vt_DynamicVectorClass; /*0x40b587*/
  dword_87F604 = 10; /*0x40b591*/
  dword_87F600 = 0; /*0x40b59b*/
  dword_87F608 = 100; /*0x40b5a1*/
  return atexit(sub_40B5C0); /*0x40b5b3*/
}
} // namespace gamemd

// 0x40B5C0
namespace gamemd {
void sub_40B5C0()
{
  Stream::FlushAndReset(&stru_87F5D8); /*0x40b5c6*/
  stru_87F5F0 = (int)&vt_VectorClass; /*0x40b5d4*/
  if ( dword_87F5F4 && byte_87F5FD ) /*0x40b5e6*/
  {
    operator delete((void *)(dword_87F5F4)); /*0x40b5e9*/
    dword_87F5F4 = 0; /*0x40b5f1*/
  }
  byte_87F5FD = 0; /*0x40b5fc*/
  dword_87F5F8 = 0; /*0x40b604*/
  stru_87F5D8 = (int)&vt_VectorClass; /*0x40b60a*/
  if ( dword_87F5DC && byte_87F5E5 ) /*0x40b61c*/
  {
    operator delete((void *)(dword_87F5DC)); /*0x40b61f*/
    dword_87F5DC = 0; /*0x40b627*/
  }
  byte_87F5E5 = 0; /*0x40b62d*/
  dword_87F5E0 = 0; /*0x40b633*/
}
} // namespace gamemd

// 0x40BD50
namespace gamemd {
int sub_40BD50()
{
  dword_87F670 = 0; /*0x40bd52*/
  dword_87F674 = 0; /*0x40bd57*/
  dword_87F678 = 0; /*0x40bd5c*/
  dword_87F67C = 0; /*0x40bd61*/
  return 0; /*0x40bd66*/
}
} // namespace gamemd

// 0x40BD70
namespace gamemd {
int sub_40BD70()
{
  dword_87F680 = 0; /*0x40bd77*/
  dword_87F684 = 0; /*0x40bd7c*/
  dword_87F688 = 0; /*0x40bd81*/
  byte_87F68C = 0; /*0x40bd86*/
  dword_87F690 = 0; /*0x40bd8b*/
  return atexit(sub_40BDA0); /*0x40bd96*/
}
} // namespace gamemd

// 0x40BDA0
namespace gamemd {
void sub_40BDA0()
{
  operator delete((void *)(dword_87F680)); /*0x40bda6*/
  dword_87F680 = 0; /*0x40bdb0*/
  dword_87F684 = 0; /*0x40bdb5*/
  dword_87F688 = 0; /*0x40bdba*/
  byte_87F68C = 0; /*0x40bdbf*/
  dword_87F690 = 0; /*0x40bdc4*/
}
} // namespace gamemd

// 0x40BDD0
namespace gamemd {
int sub_40BDD0()
{
  dword_87F65C = 0; /*0x40bdd7*/
  dword_87F660 = 0; /*0x40bddc*/
  byte_87F664 = 1; /*0x40bde1*/
  byte_87F665 = 0; /*0x40bde8*/
  dword_87F658 = (int)&vt_DynamicVectorClass; /*0x40bded*/
  dword_87F66C = 10; /*0x40bdf7*/
  dword_87F668 = 0; /*0x40be01*/
  return atexit(EventClass::finalizeEvent); /*0x40be0c*/
}
} // namespace gamemd

// 0x40C1B0
namespace gamemd {
int sub_40C1B0()
{
  dword_87F69C = 0; /*0x40c1b7*/
  dword_87F6A0 = 0; /*0x40c1bc*/
  byte_87F6A4 = 1; /*0x40c1c1*/
  byte_87F6A5 = 0; /*0x40c1c8*/
  dword_87F698 = (int)&vt_DynamicVectorClass; /*0x40c1cd*/
  dword_87F6AC = 10; /*0x40c1d7*/
  dword_87F6A8 = 0; /*0x40c1e1*/
  return atexit(sub_40C1F0); /*0x40c1ec*/
}
} // namespace gamemd

// 0x40C1F0
namespace gamemd {
void sub_40C1F0()
{
  dword_87F698 = (int)&vt_VectorClass; /*0x40c1f8*/
  if ( dword_87F69C && byte_87F6A5 ) /*0x40c20c*/
  {
    operator delete((void *)(dword_87F69C)); /*0x40c20f*/
    dword_87F69C = 0; /*0x40c217*/
  }
  byte_87F6A5 = 0; /*0x40c21d*/
  dword_87F6A0 = 0; /*0x40c223*/
}
} // namespace gamemd

// 0x40C5C0
namespace gamemd {
void sub_40C5C0()
{
  dbl_87F748 = dbl_87F6F8 / 60.0; /*0x40c5cc*/
}
} // namespace gamemd

// 0x40C5E0
namespace gamemd {
void sub_40C5E0()
{
  dbl_87F730 = 1.0 / dbl_87F748; /*0x40c5ec*/
}
} // namespace gamemd

// 0x40C600
namespace gamemd {
void sub_40C600()
{
  dbl_87F728 = 0.0174532925199433 * 45.0; /*0x40c60c*/
}
} // namespace gamemd

// 0x40C620
namespace gamemd {
void sub_40C620()
{
  dbl_87F700 = 0.0174532925199433 * 60.0; /*0x40c62c*/
}
} // namespace gamemd

// 0x40C640
namespace gamemd {
void sub_40C640()
{
  dbl_87F6D8 = 0.0174532925199433 * 90.0; /*0x40c64c*/
}
} // namespace gamemd

// 0x40C660
namespace gamemd {
long long sub_40C660()
{

  double v0; // st7
  v0 = Math::Sin(dbl_87F6D8 - dbl_87F700); /*0x40c672*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_87F6F8 * 0.5); /*0x40c686*/
  dword_87F768 = result; /*0x40c68b*/
  return result; /*0x40c690*/
}
} // namespace gamemd

// 0x40C6A0
namespace gamemd {
void sub_40C6A0()
{
  dbl_87F708 = Math::ArcTan((double)dword_87F768 * 0.00390625); /*0x40c6b7*/
}
} // namespace gamemd

// 0x40C6D0
namespace gamemd {
void sub_40C6D0()
{
  dbl_87F720 = Math::ArcTan((double)(2 * dword_87F768) / dbl_87F6F8); /*0x40c6f2*/
}
} // namespace gamemd

// 0x40C700
namespace gamemd {
long long sub_40C700()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_87F768) + 0.5); /*0x40c71b*/
  dword_87F744 = result; /*0x40c720*/
  return result; /*0x40c726*/
}
} // namespace gamemd

// 0x40C730
namespace gamemd {
int sub_40C730()
{
  word_87F6F0 = 0; /*0x40c732*/
  word_87F6F2 = 0; /*0x40c738*/
  return 0; /*0x40c73e*/
}
} // namespace gamemd

// 0x40C740
namespace gamemd {
int sub_40C740()
{
  dword_87F710 = 0; /*0x40c742*/
  dword_87F714 = 0; /*0x40c747*/
  dword_87F718 = 0; /*0x40c74c*/
  return 0; /*0x40c751*/
}
} // namespace gamemd

// 0x40C760
namespace gamemd {
int sub_40C760()
{
  dword_87F740 = 0; /*0x40c765*/
  dword_87F738 = 128; /*0x40c76f*/
  dword_87F73C = 128; /*0x40c774*/
  return 128; /*0x40c779*/
}
} // namespace gamemd

// 0x40C780
namespace gamemd {
int sub_40C780()
{
  dword_87F6E0 = 0; /*0x40c782*/
  dword_87F6E4 = 0; /*0x40c787*/
  dword_87F6E8 = 0; /*0x40c78c*/
  dword_87F6EC = 0; /*0x40c791*/
  return 0; /*0x40c796*/
}
} // namespace gamemd

// 0x40C7A0
namespace gamemd {
int sub_40C7A0()
{
  dword_87F754 = 0; /*0x40c7a7*/
  dword_87F758 = 0; /*0x40c7ac*/
  byte_87F75C = 1; /*0x40c7b1*/
  byte_87F75D = 0; /*0x40c7b8*/
  dword_87F750 = (int)&vt_DynamicVectorClass; /*0x40c7bd*/
  dword_87F764 = 10; /*0x40c7c7*/
  dword_87F760 = 0; /*0x40c7d1*/
  return atexit(sub_40C7E0); /*0x40c7dc*/
}
} // namespace gamemd

// 0x40C7E0
namespace gamemd {
void sub_40C7E0()
{
  dword_87F750 = (int)&vt_VectorClass; /*0x40c7e8*/
  if ( dword_87F754 && byte_87F75D ) /*0x40c7fc*/
  {
    operator delete((void *)(dword_87F754)); /*0x40c7ff*/
    dword_87F754 = 0; /*0x40c807*/
  }
  byte_87F75D = 0; /*0x40c80d*/
  dword_87F758 = 0; /*0x40c813*/
}
} // namespace gamemd

// 0x40CB80
namespace gamemd {
int sub_40CB80()
{
  dword_87F77C = 0; /*0x40cb87*/
  dword_87F780 = 0; /*0x40cb8c*/
  byte_87F784 = 1; /*0x40cb91*/
  byte_87F785 = 0; /*0x40cb98*/
  dword_87F78C = 10; /*0x40cb9d*/
  dword_87F788 = 0; /*0x40cba7*/
  dword_87F778 = (int)&vt_LogicClass; /*0x40cbac*/
  return atexit(sub_40CBC0); /*0x40cbbc*/
}
} // namespace gamemd

// 0x40CBC0
namespace gamemd {
void sub_40CBC0()
{
  dword_87F778 = (int)&vt_VectorClass; /*0x40cbc8*/
  if ( dword_87F77C && byte_87F785 ) /*0x40cbdc*/
  {
    operator delete((void *)(dword_87F77C)); /*0x40cbdf*/
    dword_87F77C = 0; /*0x40cbe7*/
  }
  byte_87F785 = 0; /*0x40cbed*/
  dword_87F780 = 0; /*0x40cbf3*/
}
} // namespace gamemd

// 0x40CF80
namespace gamemd {
int sub_40CF80()
{
  dword_87F798 = 0; /*0x40cf82*/
  dword_87F79C = 0; /*0x40cf87*/
  dword_87F7A0 = 0; /*0x40cf8c*/
  dword_87F7A4 = 0; /*0x40cf91*/
  return 0; /*0x40cf96*/
}
} // namespace gamemd

// 0x40CFA0
namespace gamemd {
void sub_40CFA0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x40cfac*/
  dbl_87F7B0 = Math::Sqrt(v0 + v0); /*0x40cfbe*/
}
} // namespace gamemd

// 0x40CFD0
namespace gamemd {
void sub_40CFD0()
{
  dbl_884D78 = dbl_87F7B0 / 60.0; /*0x40cfdc*/
}
} // namespace gamemd

// 0x40CFF0
namespace gamemd {
void sub_40CFF0()
{
  dbl_884D60 = 1.0 / dbl_884D78; /*0x40cffc*/
}
} // namespace gamemd

// 0x40D010
namespace gamemd {
void sub_40D010()
{
  dbl_884D58 = 0.0174532925199433 * 45.0; /*0x40d01c*/
}
} // namespace gamemd

// 0x40D030
namespace gamemd {
void sub_40D030()
{
  dbl_87F7C0 = 0.0174532925199433 * 60.0; /*0x40d03c*/
}
} // namespace gamemd

// 0x40D050
namespace gamemd {
void sub_40D050()
{
  dbl_87F790 = 0.0174532925199433 * 90.0; /*0x40d05c*/
}
} // namespace gamemd

// 0x40D070
namespace gamemd {
long long sub_40D070()
{

  double v0; // st7
  v0 = Math::Sin(dbl_87F790 - dbl_87F7C0); /*0x40d082*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_87F7B0 * 0.5); /*0x40d096*/
  dword_884D80 = result; /*0x40d09b*/
  return result; /*0x40d0a0*/
}
} // namespace gamemd

// 0x40D0B0
namespace gamemd {
void sub_40D0B0()
{
  dbl_87F7C8 = Math::ArcTan((double)dword_884D80 * 0.00390625); /*0x40d0c7*/
}
} // namespace gamemd

// 0x40D0E0
namespace gamemd {
void sub_40D0E0()
{
  dbl_87F7E0 = Math::ArcTan((double)(2 * dword_884D80) / dbl_87F7B0); /*0x40d102*/
}
} // namespace gamemd

// 0x40D110
namespace gamemd {
long long sub_40D110()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_884D80) + 0.5); /*0x40d12b*/
  dword_884D74 = result; /*0x40d130*/
  return result; /*0x40d136*/
}
} // namespace gamemd

// 0x40D140
namespace gamemd {
int sub_40D140()
{
  word_87F7A8 = 0; /*0x40d142*/
  word_87F7AA = 0; /*0x40d148*/
  return 0; /*0x40d14e*/
}
} // namespace gamemd

// 0x40D150
namespace gamemd {
int sub_40D150()
{
  dword_87F7D0 = 0; /*0x40d152*/
  dword_87F7D4 = 0; /*0x40d157*/
  dword_87F7D8 = 0; /*0x40d15c*/
  return 0; /*0x40d161*/
}
} // namespace gamemd

// 0x40D170
namespace gamemd {
int sub_40D170()
{
  dword_884D70 = 0; /*0x40d175*/
  dword_884D68 = 128; /*0x40d17f*/
  dword_884D6C = 128; /*0x40d184*/
  return 128; /*0x40d189*/
}
} // namespace gamemd

// 0x40D190
namespace gamemd {
int sub_40D190()
{
  sub_5BDA40(&dword_87F7E8); /*0x40d195*/
  return atexit(SmallFunc_40D1B0); /*0x40d1a5*/
}
} // namespace gamemd

// 0x40D200
namespace gamemd {
int sub_40D200()
{
  dword_87F7B8 = 0; /*0x40d205*/
  return atexit(sub_40D220); /*0x40d215*/
}
} // namespace gamemd

// 0x40D260
namespace gamemd {
void nullsub_56()
{
  ; /*0x40d260*/
}
} // namespace gamemd

// 0x40D300
namespace gamemd {
void ObjectClass::nullsub_57()
{
  ; /*0x40d300*/
}
} // namespace gamemd

// 0x40D310
namespace gamemd {
int sub_40D310()
{
  sub_5B1D90(&dbl_884D88); /*0x40d315*/
  return atexit(unknown_libname_3); /*0x40d325*/
}
} // namespace gamemd

// 0x40D340
namespace gamemd {
int sub_40D340()
{
  g_MixFilePool = 0; /*0x40d347*/
  g_MixFilePool_Capacity = 0; /*0x40d34c*/
  byte_884D9C = 1; /*0x40d351*/
  g_MixFilePool_Flag = 0; /*0x40d358*/
  g_MixFileArray = (int)&vt_DynamicVectorClass; /*0x40d35d*/
  g_MixFilePool_GrowSize = 10; /*0x40d367*/
  g_MixFilePool_Count = 0; /*0x40d371*/
  return atexit(sub_40D380); /*0x40d37c*/
}
} // namespace gamemd

// 0x40D380
namespace gamemd {
void sub_40D380()
{
  g_MixFileArray = (int)&vt_VectorClass; /*0x40d388*/
  if ( g_MixFilePool && g_MixFilePool_Flag ) /*0x40d39c*/
  {
    operator delete((void *)(g_MixFilePool)); /*0x40d39f*/
    g_MixFilePool = 0; /*0x40d3a7*/
  }
  g_MixFilePool_Flag = 0; /*0x40d3ad*/
  g_MixFilePool_Capacity = 0; /*0x40d3b3*/
}
} // namespace gamemd

// 0x40D3C0
namespace gamemd {
int sub_40D3C0()
{
  dword_884DC4 = 0; /*0x40d3c7*/
  dword_884DC8 = 0; /*0x40d3cc*/
  byte_884DCC = 1; /*0x40d3d1*/
  byte_884DCD = 0; /*0x40d3d8*/
  MixFileClass_Array_Alt = (int)&vt_DynamicVectorClass; /*0x40d3dd*/
  dword_884DD4 = 10; /*0x40d3e7*/
  dword_884DD0 = 0; /*0x40d3f1*/
  return atexit(sub_40D400); /*0x40d3fc*/
}
} // namespace gamemd

// 0x40D400
namespace gamemd {
void sub_40D400()
{
  MixFileClass_Array_Alt = (int)&vt_VectorClass; /*0x40d408*/
  if ( dword_884DC4 && byte_884DCD ) /*0x40d41c*/
  {
    operator delete((void *)(dword_884DC4)); /*0x40d41f*/
    dword_884DC4 = 0; /*0x40d427*/
  }
  byte_884DCD = 0; /*0x40d42d*/
  dword_884DC8 = 0; /*0x40d433*/
}
} // namespace gamemd

// 0x40D440
namespace gamemd {
int sub_40D440()
{
  dword_884DAC = 0; /*0x40d447*/
  dword_884DB0 = 0; /*0x40d44c*/
  byte_884DB4 = 1; /*0x40d451*/
  byte_884DB5 = 0; /*0x40d458*/
  g_MixFileArray_Maps = (int)&vt_DynamicVectorClass; /*0x40d45d*/
  dword_884DBC = 10; /*0x40d467*/
  dword_884DB8 = 0; /*0x40d471*/
  return atexit(sub_40D480); /*0x40d47c*/
}
} // namespace gamemd

// 0x40D480
namespace gamemd {
void sub_40D480()
{
  g_MixFileArray_Maps = (int)&vt_VectorClass; /*0x40d488*/
  if ( dword_884DAC && byte_884DB5 ) /*0x40d49c*/
  {
    operator delete((void *)(dword_884DAC)); /*0x40d49f*/
    dword_884DAC = 0; /*0x40d4a7*/
  }
  byte_884DB5 = 0; /*0x40d4ad*/
  dword_884DB0 = 0; /*0x40d4b3*/
}
} // namespace gamemd

// 0x40D4C0
namespace gamemd {
int sub_40D4C0()
{
  dword_884DE4 = 0; /*0x40d4c7*/
  dword_884DE8 = 0; /*0x40d4cc*/
  byte_884DEC = 1; /*0x40d4d1*/
  byte_884DED = 0; /*0x40d4d8*/
  g_MixFileArray_Movies = (int)&vt_DynamicVectorClass; /*0x40d4dd*/
  dword_884DF4 = 10; /*0x40d4e7*/
  dword_884DF0 = 0; /*0x40d4f1*/
  return atexit(sub_40D500); /*0x40d4fc*/
}
} // namespace gamemd

// 0x40D500
namespace gamemd {
void sub_40D500()
{
  g_MixFileArray_Movies = (int)&vt_VectorClass; /*0x40d508*/
  if ( dword_884DE4 && byte_884DED ) /*0x40d51c*/
  {
    operator delete((void *)(dword_884DE4)); /*0x40d51f*/
    dword_884DE4 = 0; /*0x40d527*/
  }
  byte_884DED = 0; /*0x40d52d*/
  dword_884DE8 = 0; /*0x40d533*/
}
} // namespace gamemd

// 0x40D8A0
namespace gamemd {
unsigned char * sub_40D8A0()
{

  unsigned char *result = &DataGlobal_886082; // eax /*0x40d8a0*/
  int v1 = 256; // ecx /*0x40d8a5*/
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
} // namespace gamemd

// 0x40D8C0
namespace gamemd {
char * sub_40D8C0()
{

  char *result = byte_885782; // eax /*0x40d8c0*/
  int v1 = 256; // ecx /*0x40d8c5*/
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
} // namespace gamemd

// 0x40D8E0
namespace gamemd {
char * sub_40D8E0()
{

  char *result = DataGlobal_886382; // eax /*0x40d8e0*/
  int v1 = 256; // ecx /*0x40d8e5*/
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
} // namespace gamemd

// 0x40D900
namespace gamemd {
char * sub_40D900(int a1)
{

  unsigned char v2[4]; // [esp+0h] [ebp-4h] BYREF
  v2[3] = (*(((unsigned char *)&(a1)) + (sizeof(a1) - 1))); /*0x40d900*/
  v2[0] = 0; /*0x40d908*/
  v2[1] = 0; /*0x40d90c*/
  v2[2] = 0; /*0x40d910*/
  return sub_626020((char *)&word_884E80, (int)v2); /*0x40d91f*/
}
} // namespace gamemd

// 0x40D920
namespace gamemd {
char * sub_40D920(int a1)
{

  unsigned char v2[4]; // [esp+0h] [ebp-4h] BYREF
  v2[3] = (*(((unsigned char *)&(a1)) + (sizeof(a1) - 1))); /*0x40d920*/
  v2[0] = -1; /*0x40d928*/
  v2[1] = -1; /*0x40d92c*/
  v2[2] = -1; /*0x40d930*/
  return sub_626020((char *)&word_885D80, (int)v2); /*0x40d93f*/
}
} // namespace gamemd

// 0x40D940
namespace gamemd {
unsigned char * sub_40D940()
{

  unsigned char *result = &DataGlobal_885A82; // eax /*0x40d940*/
  int v1 = 256; // ecx /*0x40d945*/
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
} // namespace gamemd

// 0x40D960
namespace gamemd {
unsigned char * sub_40D960()
{

  unsigned char *result = &unk_885482; // eax /*0x40d960*/
  int v1 = 256; // ecx /*0x40d965*/
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
} // namespace gamemd

// 0x40D980
namespace gamemd {
unsigned char * sub_40D980()
{

  unsigned char *result = &unk_886682; // eax /*0x40d980*/
  int v1 = 256; // ecx /*0x40d985*/
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
} // namespace gamemd

// 0x40D9A0
namespace gamemd {
char * sub_40D9A0()
{

  char *result = byte_885182; // eax /*0x40d9a0*/
  int v1 = 256; // ecx /*0x40d9a5*/
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
} // namespace gamemd

// 0x40D9C0
namespace gamemd {
int sub_40D9C0()
{

  InitArrayWithValue(dword_886980, 0, 64); /*0x40d9c9*/
  int result; // eax
  result = InitArrayWithValue(dword_886A80, 0, 64); /*0x40d9d7*/
  dword_886B80 = 0; /*0x40d9dc*/
  return result; /*0x40d9e6*/
}
} // namespace gamemd

// 0x40D9F0
namespace gamemd {
int unknown_libname_4()
{
  return SeedInitRNG(Randomizer_Global, 0); /*0x40d9fc*/
}
} // namespace gamemd

// 0x40DA00
namespace gamemd {
int sub_40DA00()
{
  dword_886F80 = 0; /*0x40da02*/
  dword_886F84 = 0; /*0x40da07*/
  dword_886F88 = 0; /*0x40da0c*/
  dword_886F8C = 0; /*0x40da11*/
  return 0; /*0x40da16*/
}
} // namespace gamemd

// 0x40DA20
namespace gamemd {
int sub_40DA20()
{
  dword_886FA8 = 640; /*0x40da22*/
  DSurface_ViewBounds = 0; /*0x40da2c*/
  dword_886FA4 = 0; /*0x40da31*/
  dword_886FAC = 400; /*0x40da36*/
  return 0; /*0x40da40*/
}
} // namespace gamemd

// 0x40DA50
namespace gamemd {
int sub_40DA50()
{
  dword_886FB8 = 640; /*0x40da52*/
  dword_886FB0 = 0; /*0x40da5c*/
  dword_886FB4 = 0; /*0x40da61*/
  dword_886FBC = 400; /*0x40da66*/
  return 0; /*0x40da70*/
}
} // namespace gamemd

// 0x40DA80
namespace gamemd {
int sub_40DA80()
{
  DSurface_SidebarBounds = 0; /*0x40da82*/
  g_DSurface_SidebarBounds = 0; /*0x40da87*/
  dword_886F98 = 0; /*0x40da8c*/
  g_DSurface_ViewBounds = 0; /*0x40da91*/
  return 0; /*0x40da96*/
}
} // namespace gamemd

// 0x40DAA0
namespace gamemd {
void sub_40DAA0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x40daac*/
  dbl_886FE0 = Math::Sqrt(v0 + v0); /*0x40dabe*/
}
} // namespace gamemd

// 0x40DAD0
namespace gamemd {
void sub_40DAD0()
{
  dbl_887030 = dbl_886FE0 / 60.0; /*0x40dadc*/
}
} // namespace gamemd

// 0x40DAF0
namespace gamemd {
void sub_40DAF0()
{
  dbl_887018 = 1.0 / dbl_887030; /*0x40dafc*/
}
} // namespace gamemd

// 0x40DB10
namespace gamemd {
void sub_40DB10()
{
  dbl_887010 = 0.0174532925199433 * 45.0; /*0x40db1c*/
}
} // namespace gamemd

// 0x40DB30
namespace gamemd {
void sub_40DB30()
{
  dbl_886FE8 = 0.0174532925199433 * 60.0; /*0x40db3c*/
}
} // namespace gamemd

// 0x40DB50
namespace gamemd {
void sub_40DB50()
{
  dbl_886FC0 = 0.0174532925199433 * 90.0; /*0x40db5c*/
}
} // namespace gamemd

// 0x40DB70
namespace gamemd {
long long sub_40DB70()
{

  double v0; // st7
  v0 = Math::Sin(dbl_886FC0 - dbl_886FE8); /*0x40db82*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_886FE0 * 0.5); /*0x40db96*/
  dword_887038 = result; /*0x40db9b*/
  return result; /*0x40dba0*/
}
} // namespace gamemd

// 0x40DBB0
namespace gamemd {
void sub_40DBB0()
{
  dbl_886FF0 = Math::ArcTan((double)dword_887038 * 0.00390625); /*0x40dbc7*/
}
} // namespace gamemd

// 0x40DBE0
namespace gamemd {
void sub_40DBE0()
{
  dbl_887008 = Math::ArcTan((double)(2 * dword_887038) / dbl_886FE0); /*0x40dc02*/
}
} // namespace gamemd

// 0x40DC10
namespace gamemd {
long long sub_40DC10()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_887038) + 0.5); /*0x40dc2b*/
  dword_88702C = result; /*0x40dc30*/
  return result; /*0x40dc36*/
}
} // namespace gamemd

// 0x40DC40
namespace gamemd {
int sub_40DC40()
{
  word_886FD8 = 0; /*0x40dc42*/
  word_886FDA = 0; /*0x40dc48*/
  return 0; /*0x40dc4e*/
}
} // namespace gamemd

// 0x40DC50
namespace gamemd {
int sub_40DC50()
{
  dword_886FF8 = 0; /*0x40dc52*/
  dword_886FFC = 0; /*0x40dc57*/
  dword_887000 = 0; /*0x40dc5c*/
  return 0; /*0x40dc61*/
}
} // namespace gamemd

// 0x40DC70
namespace gamemd {
int sub_40DC70()
{
  dword_887028 = 0; /*0x40dc75*/
  dword_887020 = 128; /*0x40dc7f*/
  dword_887024 = 128; /*0x40dc84*/
  return 128; /*0x40dc89*/
}
} // namespace gamemd

// 0x40DC90
namespace gamemd {
int sub_40DC90()
{
  dword_886FC8 = 0; /*0x40dc92*/
  dword_886FCC = 0; /*0x40dc97*/
  dword_886FD0 = 0; /*0x40dc9c*/
  dword_886FD4 = 0; /*0x40dca1*/
  return 0; /*0x40dca6*/
}
} // namespace gamemd

// 0x40DDC0
namespace gamemd {
void sub_40DDC0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x40ddcc*/
  dbl_887050 = Math::Sqrt(v0 + v0); /*0x40ddde*/
}
} // namespace gamemd

// 0x40DDF0
namespace gamemd {
void sub_40DDF0()
{
  dbl_887268 = dbl_887050 / 60.0; /*0x40ddfc*/
}
} // namespace gamemd

// 0x40DE10
namespace gamemd {
void sub_40DE10()
{
  dbl_8871F0 = 1.0 / dbl_887268; /*0x40de1c*/
}
} // namespace gamemd

// 0x40DE30
namespace gamemd {
void sub_40DE30()
{
  dbl_8871E8 = 0.0174532925199433 * 45.0; /*0x40de3c*/
}
} // namespace gamemd

// 0x40DE50
namespace gamemd {
void sub_40DE50()
{
  dbl_8870B0 = 0.0174532925199433 * 60.0; /*0x40de5c*/
}
} // namespace gamemd

// 0x40DE70
namespace gamemd {
void sub_40DE70()
{
  dbl_887040 = 0.0174532925199433 * 90.0; /*0x40de7c*/
}
} // namespace gamemd

// 0x40DE90
namespace gamemd {
long long sub_40DE90()
{

  double v0; // st7
  v0 = Math::Sin(dbl_887040 - dbl_8870B0); /*0x40dea2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_887050 * 0.5); /*0x40deb6*/
  dword_887270 = result; /*0x40debb*/
  return result; /*0x40dec0*/
}
} // namespace gamemd

// 0x40DED0
namespace gamemd {
void sub_40DED0()
{
  dbl_8870B8 = Math::ArcTan((double)dword_887270 * 0.00390625); /*0x40dee7*/
}
} // namespace gamemd

// 0x40DF00
namespace gamemd {
void sub_40DF00()
{
  dbl_8871D8 = Math::ArcTan((double)(2 * dword_887270) / dbl_887050); /*0x40df22*/
}
} // namespace gamemd

// 0x40DF30
namespace gamemd {
long long sub_40DF30()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_887270) + 0.5); /*0x40df4b*/
  dword_887260 = result; /*0x40df50*/
  return result; /*0x40df56*/
}
} // namespace gamemd

// 0x40DF60
namespace gamemd {
int sub_40DF60()
{
  word_88704C = 0; /*0x40df62*/
  word_88704E = 0; /*0x40df68*/
  return 0; /*0x40df6e*/
}
} // namespace gamemd

// 0x40DF70
namespace gamemd {
int sub_40DF70()
{
  dword_887118 = 0; /*0x40df72*/
  dword_88711C = 0; /*0x40df77*/
  dword_887120 = 0; /*0x40df7c*/
  return 0; /*0x40df81*/
}
} // namespace gamemd

// 0x40DF90
namespace gamemd {
int sub_40DF90()
{
  dword_887200 = 0; /*0x40df95*/
  dword_8871F8 = 128; /*0x40df9f*/
  dword_8871FC = 128; /*0x40dfa4*/
  return 128; /*0x40dfa9*/
}
} // namespace gamemd

// 0x40DFB0
namespace gamemd {
int sub_40DFB0()
{
  dword_887184 = 0; /*0x40dfb8*/
  dword_887188 = 0; /*0x40dfbe*/
  dword_887194 = 0; /*0x40dfc4*/
  dword_887198 = 0; /*0x40dfca*/
  dword_887190 = (int)&(void*)(void*)&GenericNode_vftable; /*0x40dfd0*/
  GenericNode::Constructor(stru_88719C); /*0x40dfda*/
  dword_88718C = (int)&(void*)(void*)&GenericList_vftable; /*0x40dfe9*/
  LinkedList::Prepend(&dword_887190, (int)stru_88719C); /*0x40dff3*/
  dword_88718C = (int)&(void*)(void*)&List_INIClass_INISection___vftable; /*0x40dffd*/
  DataGlobal_8871A8 = 0; /*0x40e007*/
  DataGlobal_8871AC = 0; /*0x40e00d*/
  DataGlobal_8871B0 = 0; /*0x40e013*/
  DataGlobal_8871B4 = 0; /*0x40e019*/
  DataGlobal_8871B8 = 0; /*0x40e01f*/
  DataGlobal_8871BC = 0; /*0x40e025*/
  DataGlobal_8871C0 = 0; /*0x40e02b*/
  dword_887180 = (int)&CCINIClass_Vtable; /*0x40e031*/
  return atexit(unknown_libname_5); /*0x40e043*/
}
} // namespace gamemd

// 0x40E050
namespace gamemd {
int unknown_libname_5()
{
  HashTable::DestroyHashTableINIClass((void **)&dword_887180); /*0x40e055*/
}
} // namespace gamemd

// 0x40E060
namespace gamemd {
int sub_40E060()
{
  dword_88720C = 0; /*0x40e068*/
  dword_887210 = 0; /*0x40e06e*/
  dword_88721C = 0; /*0x40e074*/
  dword_887220 = 0; /*0x40e07a*/
  dword_887218 = (int)&(void*)(void*)&GenericNode_vftable; /*0x40e080*/
  GenericNode::Constructor(stru_887224); /*0x40e08a*/
  dword_887214 = (int)&(void*)(void*)&GenericList_vftable; /*0x40e099*/
  LinkedList::Prepend(&dword_887218, (int)stru_887224); /*0x40e0a3*/
  dword_887214 = (int)&(void*)(void*)&List_INIClass_INISection___vftable; /*0x40e0ad*/
  DataGlobal_887230 = 0; /*0x40e0b7*/
  DataGlobal_887234 = 0; /*0x40e0bd*/
  DataGlobal_887238 = 0; /*0x40e0c3*/
  DataGlobal_88723C = 0; /*0x40e0c9*/
  DataGlobal_887240 = 0; /*0x40e0cf*/
  DataGlobal_887244 = 0; /*0x40e0d5*/
  DataGlobal_887248 = 0; /*0x40e0db*/
  dword_887208 = (int)&CCINIClass_Vtable; /*0x40e0e1*/
  return atexit(unknown_libname_6); /*0x40e0f3*/
}
} // namespace gamemd

// 0x40E100
namespace gamemd {
int unknown_libname_6()
{
  HashTable::DestroyHashTableINIClass((void **)&dword_887208); /*0x40e105*/
}
} // namespace gamemd

// 0x40E110
namespace gamemd {
int sub_40E110()
{
  dword_88712C = 0; /*0x40e118*/
  dword_887130 = 0; /*0x40e11e*/
  dword_88713C = 0; /*0x40e124*/
  dword_887140 = 0; /*0x40e12a*/
  dword_887138 = (int)&(void*)(void*)&GenericNode_vftable; /*0x40e130*/
  GenericNode::Constructor(stru_887144); /*0x40e13a*/
  dword_887134 = (int)&(void*)(void*)&GenericList_vftable; /*0x40e149*/
  LinkedList::Prepend(&dword_887138, (int)stru_887144); /*0x40e153*/
  dword_887134 = (int)&(void*)(void*)&List_INIClass_INISection___vftable; /*0x40e15d*/
  DataGlobal_887150 = 0; /*0x40e167*/
  DataGlobal_887154 = 0; /*0x40e16d*/
  DataGlobal_887158 = 0; /*0x40e173*/
  DataGlobal_88715C = 0; /*0x40e179*/
  DataGlobal_887160 = 0; /*0x40e17f*/
  DataGlobal_887164 = 0; /*0x40e185*/
  DataGlobal_887168 = 0; /*0x40e18b*/
  dword_887128 = (int)&CCINIClass_Vtable; /*0x40e191*/
  return atexit(unknown_libname_7); /*0x40e1a3*/
}
} // namespace gamemd

// 0x40E1B0
namespace gamemd {
int unknown_libname_7()
{
  HashTable::DestroyHashTableINIClass((void **)&dword_887128); /*0x40e1b5*/
}
} // namespace gamemd

// 0x40E1C0
namespace gamemd {
int sub_40E1C0()
{
  dword_88705C = 0; /*0x40e1c8*/
  dword_887060 = 0; /*0x40e1ce*/
  dword_88706C = 0; /*0x40e1d4*/
  dword_887070 = 0; /*0x40e1da*/
  dword_887068 = (int)&vt_GenericNode; /*0x40e1e0*/
  GenericNode::Constructor(unk_887074); /*0x40e1ea*/
  dword_887064 = (int)&vt_GenericList; /*0x40e1f9*/
  LinkedList::Prepend(&dword_887068, (int)unk_887074); /*0x40e203*/
  dword_887064 = (int)&vt_List; /*0x40e20d*/
  dword_887080 = 0; /*0x40e217*/
  dword_887084 = 0; /*0x40e21d*/
  dword_887088 = 0; /*0x40e223*/
  byte_88708C = 0; /*0x40e229*/
  dword_887090 = 0; /*0x40e22f*/
  dword_887094 = 0; /*0x40e235*/
  byte_887098 = 0; /*0x40e23b*/
  dword_887058 = (int)&CCINIClass_Vtable; /*0x40e241*/
  return atexit(unknown_libname_8); /*0x40e253*/
}
} // namespace gamemd

// 0x40E260
namespace gamemd {
int unknown_libname_8()
{
  HashTable::DestroyHashTableINIClass((void **)&dword_887058); /*0x40e265*/
}
} // namespace gamemd

// 0x40E270
namespace gamemd {
int sub_40E270()
{
  dword_8870C4 = 0; /*0x40e278*/
  dword_8870C8 = 0; /*0x40e27e*/
  dword_8870D4 = 0; /*0x40e284*/
  dword_8870D8 = 0; /*0x40e28a*/
  dword_8870D0 = (int)&(void*)(void*)&GenericNode_vftable; /*0x40e290*/
  GenericNode::Constructor(stru_8870DC); /*0x40e29a*/
  dword_8870CC = (int)&(void*)(void*)&GenericList_vftable; /*0x40e2a9*/
  LinkedList::Prepend(&dword_8870D0, (int)stru_8870DC); /*0x40e2b3*/
  dword_8870CC = (int)&(void*)(void*)&List_INIClass_INISection___vftable; /*0x40e2bd*/
  DataGlobal_8870E8 = 0; /*0x40e2c7*/
  DataGlobal_8870EC = 0; /*0x40e2cd*/
  DataGlobal_8870F0 = 0; /*0x40e2d3*/
  DataGlobal_8870F4 = 0; /*0x40e2d9*/
  DataGlobal_8870F8 = 0; /*0x40e2df*/
  DataGlobal_8870FC = 0; /*0x40e2e5*/
  DataGlobal_887100 = 0; /*0x40e2eb*/
  dword_8870C0 = (int)&CCINIClass_Vtable; /*0x40e2f1*/
  return atexit(unknown_libname_9); /*0x40e303*/
}
} // namespace gamemd

// 0x40E310
namespace gamemd {
int unknown_libname_9()
{
  HashTable::DestroyHashTableINIClass((void **)&dword_8870C0); /*0x40e315*/
}
} // namespace gamemd

// 0x40E390
namespace gamemd {  // G42.18c ns repair
GenericNode * GenericNode::sub_40E390(GenericNode ** Block, char a2)
{

  int Previous; // ecx
  unsigned int *v4; // eax

  *(unsigned int *)this->__pad_0 = &vt_GenericNode; /*0x40e397*/
  if ( this ) /*0x40e39d*/
  {
    Previous = this->Previous; /*0x40e39f*/
    if ( Previous ) /*0x40e3a4*/
    {
      v4 = *(unsigned int **)this->Blowfish; /*0x40e3a6*/
      if ( v4 ) /*0x40e3ab*/
      {
        v4[1] = Previous; /*0x40e3ad*/
        *(unsigned int *)&this->Previous->LinkedList_8 = *(unsigned int *)this->Blowfish; /*0x40e3b6*/
        *(unsigned int *)this->Blowfish = 0; /*0x40e3b9*/
        this->Previous = 0; /*0x40e3bc*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x40e3c4*/
    __3_YAXPAX_Z(this); /*0x40e3c7*/
  return this->__pad_0; /*0x40e3d1*/

}
}  // G42.18c ns repair
// 0x40E4A0
namespace gamemd {
ObjectClass *  ObjectClass::sub_40E4A0(void ** Block, char a2)
{
  HashTable::DestroyHashTableINIClass((INIClass *)Block); /*0x40e4a3*/
  if ( (a2 & 1) != 0 ) /*0x40e4ad*/
    operator delete((Block)); /*0x40e4b0*/
  return &Block->vfptr; /*0x40e4ba*/
}
} // namespace gamemd

// 0x40E580
namespace gamemd {
void sub_40E580()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x40e58c*/
  dbl_887288 = Math::Sqrt(v0 + v0); /*0x40e59e*/
}
} // namespace gamemd

// 0x40E5B0
namespace gamemd {
void sub_40E5B0()
{
  dbl_8872F0 = dbl_887288 / 60.0; /*0x40e5bc*/
}
} // namespace gamemd

// 0x40E5D0
namespace gamemd {
void sub_40E5D0()
{
  dbl_8872D8 = 1.0 / dbl_8872F0; /*0x40e5dc*/
}
} // namespace gamemd

// 0x40E5F0
namespace gamemd {
void sub_40E5F0()
{
  dbl_8872D0 = 0.0174532925199433 * 45.0; /*0x40e5fc*/
}
} // namespace gamemd

// 0x40E610
namespace gamemd {
void sub_40E610()
{
  dbl_887290 = 0.0174532925199433 * 60.0; /*0x40e61c*/
}
} // namespace gamemd

// 0x40E630
namespace gamemd {
void sub_40E630()
{
  dbl_887278 = 0.0174532925199433 * 90.0; /*0x40e63c*/
}
} // namespace gamemd

// 0x40E650
namespace gamemd {
long long sub_40E650()
{

  double v0; // st7
  v0 = Math::Sin(dbl_887278 - dbl_887290); /*0x40e662*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_887288 * 0.5); /*0x40e676*/
  dword_8872F8 = result; /*0x40e67b*/
  return result; /*0x40e680*/
}
} // namespace gamemd

// 0x40E690
namespace gamemd {
void sub_40E690()
{
  dbl_887298 = Math::ArcTan((double)dword_8872F8 * 0.00390625); /*0x40e6a7*/
}
} // namespace gamemd

// 0x40E6C0
namespace gamemd {
void sub_40E6C0()
{
  dbl_8872C8 = Math::ArcTan((double)(2 * dword_8872F8) / dbl_887288); /*0x40e6e2*/
}
} // namespace gamemd

// 0x40E6F0
namespace gamemd {
long long sub_40E6F0()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_8872F8) + 0.5); /*0x40e70b*/
  dword_8872EC = result; /*0x40e710*/
  return result; /*0x40e716*/
}
} // namespace gamemd

// 0x40E720
namespace gamemd {
int sub_40E720()
{
  word_887280 = 0; /*0x40e722*/
  word_887282 = 0; /*0x40e728*/
  return 0; /*0x40e72e*/
}
} // namespace gamemd

// 0x40E730
namespace gamemd {
int sub_40E730()
{
  dword_8872A0 = 0; /*0x40e732*/
  dword_8872A4 = 0; /*0x40e737*/
  dword_8872A8 = 0; /*0x40e73c*/
  return 0; /*0x40e741*/
}
} // namespace gamemd

// 0x40E750
namespace gamemd {
int sub_40E750()
{
  dword_8872E8 = 0; /*0x40e755*/
  dword_8872E0 = 128; /*0x40e75f*/
  dword_8872E4 = 128; /*0x40e764*/
  return 128; /*0x40e769*/
}
} // namespace gamemd

// 0x40E770
namespace gamemd {
int sub_40E770()
{
  dword_8872B4 = 0; /*0x40e777*/
  dword_8872B8 = 0; /*0x40e77c*/
  byte_8872BC = 1; /*0x40e781*/
  byte_8872BD = 0; /*0x40e788*/
  dword_8872B0 = (int)&vt_DynamicVectorClass; /*0x40e78d*/
  dword_8872C4 = 10; /*0x40e797*/
  dword_8872C0 = 0; /*0x40e7a1*/
  return atexit(sub_40E7B0); /*0x40e7ac*/
}
} // namespace gamemd

// 0x40E7B0
namespace gamemd {
void sub_40E7B0()
{
  dword_8872B0 = (int)&vt_VectorClass; /*0x40e7b8*/
  if ( dword_8872B4 && byte_8872BD ) /*0x40e7cc*/
  {
    operator delete((void *)(dword_8872B4)); /*0x40e7cf*/
    dword_8872B4 = 0; /*0x40e7d7*/
  }
  byte_8872BD = 0; /*0x40e7dd*/
  dword_8872B8 = 0; /*0x40e7e3*/
}
} // namespace gamemd

// 0x40EB50
namespace gamemd {
int sub_40EB50()
{
  dword_887348 = TimerGetTicks(); /*0x40eb5f*/
  dword_887350 = 0; /*0x40eb64*/
  return atexit(nullsub_59); /*0x40eb74*/
}
} // namespace gamemd

// 0x40EB80
namespace gamemd {
void nullsub_59()
{
  ; /*0x40eb80*/
}
} // namespace gamemd

// 0x40EB90
namespace gamemd {
int sub_40EB90()
{
  g_TacticalState = timeGetTime(); /*0x40eb9f*/
  Timer::EnableHighPrecision(&stru_88732C); /*0x40eba4*/
  dword_887330 = 0; /*0x40ebae*/
  return atexit(unknown_libname_10); /*0x40ebbe*/
}
} // namespace gamemd

// 0x40EBC0
namespace gamemd {
int unknown_libname_10()
{
  Timer::DisableHighPrecision(); /*0x40ebc5*/
}
} // namespace gamemd

// 0x40EBD0
namespace gamemd {
int sub_40EBD0()
{
  dword_887338 = TimerGetTicks(); /*0x40ebdf*/
  dword_887340 = 0; /*0x40ebe4*/
  return atexit(nullsub_60); /*0x40ebf4*/
}
} // namespace gamemd

// 0x40EC00
namespace gamemd {
void nullsub_60()
{
  ; /*0x40ec00*/
}
} // namespace gamemd

// 0x40EC10
namespace gamemd {
int sub_40EC10()
{
  dword_887358 = 0; /*0x40ec12*/
  dword_88735C = 0; /*0x40ec17*/
  dword_887360 = 0; /*0x40ec1c*/
  dword_887364 = 0; /*0x40ec21*/
  return 0; /*0x40ec26*/
}
} // namespace gamemd

// 0x40EC30
namespace gamemd {
void sub_40EC30()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x40ec3c*/
  dbl_8873A8 = Math::Sqrt(v0 + v0); /*0x40ec4e*/
}
} // namespace gamemd

// 0x40EC60
namespace gamemd {
void sub_40EC60()
{
  dbl_8873F8 = dbl_8873A8 / 60.0; /*0x40ec6c*/
}
} // namespace gamemd

// 0x40EC80
namespace gamemd {
void sub_40EC80()
{
  dbl_8873E0 = 1.0 / dbl_8873F8; /*0x40ec8c*/
}
} // namespace gamemd

// 0x40ECA0
namespace gamemd {
void sub_40ECA0()
{
  dbl_8873D8 = 0.0174532925199433 * 45.0; /*0x40ecac*/
}
} // namespace gamemd

// 0x40ECC0
namespace gamemd {
void sub_40ECC0()
{
  dbl_8873B0 = 0.0174532925199433 * 60.0; /*0x40eccc*/
}
} // namespace gamemd

// 0x40ECE0
namespace gamemd {
void sub_40ECE0()
{
  dbl_887370 = 0.0174532925199433 * 90.0; /*0x40ecec*/
}
} // namespace gamemd

// 0x40ED00
namespace gamemd {
long long sub_40ED00()
{

  double v0; // st7
  v0 = Math::Sin(dbl_887370 - dbl_8873B0); /*0x40ed12*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_8873A8 * 0.5); /*0x40ed26*/
  dword_887400 = result; /*0x40ed2b*/
  return result; /*0x40ed30*/
}
} // namespace gamemd

// 0x40ED40
namespace gamemd {
void sub_40ED40()
{
  dbl_8873B8 = Math::ArcTan((double)dword_887400 * 0.00390625); /*0x40ed57*/
}
} // namespace gamemd

// 0x40ED70
namespace gamemd {
void sub_40ED70()
{
  dbl_8873D0 = Math::ArcTan((double)(2 * dword_887400) / dbl_8873A8); /*0x40ed92*/
}
} // namespace gamemd

// 0x40EDA0
namespace gamemd {
long long sub_40EDA0()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_887400) + 0.5); /*0x40edbb*/
  dword_8873F4 = result; /*0x40edc0*/
  return result; /*0x40edc6*/
}
} // namespace gamemd

// 0x40EDD0
namespace gamemd {
int sub_40EDD0()
{
  word_8873A0 = 0; /*0x40edd2*/
  word_8873A2 = 0; /*0x40edd8*/
  return 0; /*0x40edde*/
}
} // namespace gamemd

// 0x40EDE0
namespace gamemd {
int sub_40EDE0()
{
  dword_8873C0 = 0; /*0x40ede2*/
  dword_8873C4 = 0; /*0x40ede7*/
  dword_8873C8 = 0; /*0x40edec*/
  return 0; /*0x40edf1*/
}
} // namespace gamemd

// 0x40EE00
namespace gamemd {
int sub_40EE00()
{
  dword_8873F0 = 0; /*0x40ee05*/
  dword_8873E8 = 128; /*0x40ee0f*/
  dword_8873EC = 128; /*0x40ee14*/
  return 128; /*0x40ee19*/
}
} // namespace gamemd

// 0x40EE20
namespace gamemd {
int sub_40EE20()
{
  dword_887378 = 0; /*0x40ee22*/
  dword_88737C = 0; /*0x40ee27*/
  dword_887380 = 0; /*0x40ee2c*/
  dword_887384 = 0; /*0x40ee31*/
  return 0; /*0x40ee36*/
}
} // namespace gamemd

// 0x40EE40
namespace gamemd {
int sub_40EE40()
{
  dword_88738C = 0; /*0x40ee47*/
  dword_887390 = 0; /*0x40ee4c*/
  byte_887394 = 1; /*0x40ee51*/
  byte_887395 = 0; /*0x40ee58*/
  dword_887388 = (int)&vt_DynamicVectorClass; /*0x40ee5d*/
  dword_88739C = 10; /*0x40ee67*/
  dword_887398 = 0; /*0x40ee71*/
  return atexit(sub_40EE80); /*0x40ee7c*/
}
} // namespace gamemd

// 0x40EE80
namespace gamemd {
void sub_40EE80()
{
  dword_887388 = (int)&vt_VectorClass; /*0x40ee88*/
  if ( dword_88738C && byte_887395 ) /*0x40ee9c*/
  {
    operator delete((void *)(dword_88738C)); /*0x40ee9f*/
    dword_88738C = 0; /*0x40eea7*/
  }
  byte_887395 = 0; /*0x40eead*/
  dword_887390 = 0; /*0x40eeb3*/
}
} // namespace gamemd

// 0x40F220
namespace gamemd {
int sub_40F220()
{
  dword_887408 = 0; /*0x40f222*/
  dword_88740C = 0; /*0x40f227*/
  dword_887410 = 0; /*0x40f22c*/
  dword_887414 = 0; /*0x40f231*/
  return 0; /*0x40f236*/
}
} // namespace gamemd

// 0x40F240
namespace gamemd {
void nullsub_61()
{
  ; /*0x40f240*/
}
} // namespace gamemd

// 0x40F250
namespace gamemd {
void nullsub_62()
{
  ; /*0x40f250*/
}
} // namespace gamemd

// 0x40F260
namespace gamemd {
void nullsub_63()
{
  ; /*0x40f260*/
}
} // namespace gamemd

// 0x40F270
namespace gamemd {
int sub_40F270()
{
  sub_6C89B0(&stru_887460, 0x3D0900u); /*0x40f27a*/
  return atexit(unknown_libname_11); /*0x40f28a*/
}
} // namespace gamemd

// 0x40F2A0
namespace gamemd {
void sub_40F2A0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x40f2ac*/
  dbl_887490 = Math::Sqrt(v0 + v0); /*0x40f2be*/
}
} // namespace gamemd

// 0x40F2D0
namespace gamemd {
void sub_40F2D0()
{
  dbl_8874F8 = dbl_887490 / 60.0; /*0x40f2dc*/
}
} // namespace gamemd

// 0x40F2F0
namespace gamemd {
void sub_40F2F0()
{
  dbl_8874E0 = 1.0 / dbl_8874F8; /*0x40f2fc*/
}
} // namespace gamemd

// 0x40F310
namespace gamemd {
void sub_40F310()
{
  dbl_8874D8 = 0.0174532925199433 * 45.0; /*0x40f31c*/
}
} // namespace gamemd

// 0x40F330
namespace gamemd {
void sub_40F330()
{
  dbl_887498 = 0.0174532925199433 * 60.0; /*0x40f33c*/
}
} // namespace gamemd

// 0x40F350
namespace gamemd {
void sub_40F350()
{
  dbl_887480 = 0.0174532925199433 * 90.0; /*0x40f35c*/
}
} // namespace gamemd

// 0x40F370
namespace gamemd {
long long sub_40F370()
{

  double v0; // st7
  v0 = Math::Sin(dbl_887480 - dbl_887498); /*0x40f382*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_887490 * 0.5); /*0x40f396*/
  dword_887500 = result; /*0x40f39b*/
  return result; /*0x40f3a0*/
}
} // namespace gamemd

// 0x40F3B0
namespace gamemd {
void sub_40F3B0()
{
  dbl_8874A0 = Math::ArcTan((double)dword_887500 * 0.00390625); /*0x40f3c7*/
}
} // namespace gamemd

// 0x40F3E0
namespace gamemd {
void sub_40F3E0()
{
  dbl_8874B8 = Math::ArcTan((double)(2 * dword_887500) / dbl_887490); /*0x40f402*/
}
} // namespace gamemd

// 0x40F410
namespace gamemd {
long long sub_40F410()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_887500) + 0.5); /*0x40f42b*/
  dword_8874F4 = result; /*0x40f430*/
  return result; /*0x40f436*/
}
} // namespace gamemd

// 0x40F440
namespace gamemd {
int sub_40F440()
{
  word_887488 = 0; /*0x40f442*/
  word_88748A = 0; /*0x40f448*/
  return 0; /*0x40f44e*/
}
} // namespace gamemd

// 0x40F450
namespace gamemd {
int sub_40F450()
{
  dword_8874A8 = 0; /*0x40f452*/
  dword_8874AC = 0; /*0x40f457*/
  dword_8874B0 = 0; /*0x40f45c*/
  return 0; /*0x40f461*/
}
} // namespace gamemd

// 0x40F470
namespace gamemd {
int sub_40F470()
{
  dword_8874F0 = 0; /*0x40f475*/
  dword_8874E8 = 128; /*0x40f47f*/
  dword_8874EC = 128; /*0x40f484*/
  return 128; /*0x40f489*/
}
} // namespace gamemd

// 0x40F490
namespace gamemd {
int sub_40F490()
{
  dword_8874C4 = 0; /*0x40f497*/
  dword_8874C8 = 0; /*0x40f49c*/
  byte_8874CC = 1; /*0x40f4a1*/
  byte_8874CD = 0; /*0x40f4a8*/
  WarheadTypeClass_Array = (WarheadTypeClass *)&vt_DynamicVectorClass; /*0x40f4ad*/
  dword_8874D4 = 10; /*0x40f4b7*/
  g_WarheadTypePool = 0; /*0x40f4c1*/
  return atexit(sub_40F4D0); /*0x40f4cc*/
}
} // namespace gamemd

// 0x40F4D0
namespace gamemd {
void sub_40F4D0()
{
  WarheadTypeClass_Array = (WarheadTypeClass *)&vt_VectorClass; /*0x40f4d8*/
  if ( dword_8874C4 && byte_8874CD ) /*0x40f4ec*/
  {
    operator delete((void *)(dword_8874C4)); /*0x40f4ef*/
    dword_8874C4 = 0; /*0x40f4f7*/
  }
  byte_8874CD = 0; /*0x40f4fd*/
  dword_8874C8 = 0; /*0x40f503*/
}
} // namespace gamemd

// 0x40F940
namespace gamemd {
void sub_40F940()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x40f94c*/
  dbl_887518 = Math::Sqrt(v0 + v0); /*0x40f95e*/
}
} // namespace gamemd

// 0x40F970
namespace gamemd {
void sub_40F970()
{
  dbl_887588 = dbl_887518 / 60.0; /*0x40f97c*/
}
} // namespace gamemd

// 0x40F990
namespace gamemd {
void sub_40F990()
{
  dbl_887550 = 1.0 / dbl_887588; /*0x40f99c*/
}
} // namespace gamemd

// 0x40F9B0
namespace gamemd {
void sub_40F9B0()
{
  dbl_887548 = 0.0174532925199433 * 45.0; /*0x40f9bc*/
}
} // namespace gamemd

// 0x40F9D0
namespace gamemd {
void sub_40F9D0()
{
  dbl_887520 = 0.0174532925199433 * 60.0; /*0x40f9dc*/
}
} // namespace gamemd

// 0x40F9F0
namespace gamemd {
void sub_40F9F0()
{
  dbl_887508 = 0.0174532925199433 * 90.0; /*0x40f9fc*/
}
} // namespace gamemd

// 0x40FA10
namespace gamemd {
long long sub_40FA10()
{

  double v0; // st7
  v0 = Math::Sin(dbl_887508 - dbl_887520); /*0x40fa22*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_887518 * 0.5); /*0x40fa36*/
  dword_887590 = result; /*0x40fa3b*/
  return result; /*0x40fa40*/
}
} // namespace gamemd

// 0x40FA50
namespace gamemd {
void sub_40FA50()
{
  dbl_887528 = Math::ArcTan((double)dword_887590 * 0.00390625); /*0x40fa67*/
}
} // namespace gamemd

// 0x40FA80
namespace gamemd {
void sub_40FA80()
{
  dbl_887540 = Math::ArcTan((double)(2 * dword_887590) / dbl_887518); /*0x40faa2*/
}
} // namespace gamemd

// 0x40FAB0
namespace gamemd {
long long sub_40FAB0()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_887590) + 0.5); /*0x40facb*/
  dword_887580 = result; /*0x40fad0*/
  return result; /*0x40fad6*/
}
} // namespace gamemd

// 0x40FAE0
namespace gamemd {
int sub_40FAE0()
{
  word_887510 = 0; /*0x40fae2*/
  word_887512 = 0; /*0x40fae8*/
  return 0; /*0x40faee*/
}
} // namespace gamemd

// 0x40FAF0
namespace gamemd {
int sub_40FAF0()
{
  dword_887530 = 0; /*0x40faf2*/
  dword_887534 = 0; /*0x40faf7*/
  dword_887538 = 0; /*0x40fafc*/
  return 0; /*0x40fb01*/
}
} // namespace gamemd

// 0x40FB10
namespace gamemd {
int sub_40FB10()
{
  dword_887560 = 0; /*0x40fb15*/
  dword_887558 = 128; /*0x40fb1f*/
  dword_88755C = 128; /*0x40fb24*/
  return 128; /*0x40fb29*/
}
} // namespace gamemd

// 0x40FB30
namespace gamemd {
int sub_40FB30()
{
  g_WeaponTypeConfig = 0; /*0x40fb37*/
  dword_887570 = 0; /*0x40fb3c*/
  byte_887574 = 1; /*0x40fb41*/
  byte_887575 = 0; /*0x40fb48*/
  WeaponTypeClass_Array = (WeaponTypeClass *)&vt_DynamicVectorClass; /*0x40fb4d*/
  dword_88757C = 10; /*0x40fb57*/
  g_WeaponTypePool = 0; /*0x40fb61*/
  return atexit(sub_40FB70); /*0x40fb6c*/
}
} // namespace gamemd

// 0x40FB70
namespace gamemd {
void sub_40FB70()
{
  WeaponTypeClass_Array = (WeaponTypeClass *)&vt_VectorClass; /*0x40fb78*/
  if ( g_WeaponTypeConfig && byte_887575 ) /*0x40fb8c*/
  {
    operator delete((void *)(g_WeaponTypeConfig)); /*0x40fb8f*/
    g_WeaponTypeConfig = 0; /*0x40fb97*/
  }
  byte_887575 = 0; /*0x40fb9d*/
  dword_887570 = 0; /*0x40fba3*/
}
} // namespace gamemd

// 0x40FF10
namespace gamemd {
int sub_40FF10()
{
  sub_776EB0(&stru_887598); /*0x40ff15*/
  return atexit(nullsub_64); /*0x40ff25*/
}
} // namespace gamemd

// 0x40FF30
namespace gamemd {
void nullsub_64()
{
  ; /*0x40ff30*/
}
} // namespace gamemd

// 0x40FF40
namespace gamemd {
int sub_40FF40()
{
  dword_887630 = 0; /*0x40ff42*/
  dword_887634 = 0; /*0x40ff47*/
  dword_887638 = 0; /*0x40ff4c*/
  dword_88763C = 0; /*0x40ff51*/
  return 0; /*0x40ff56*/
}
} // namespace gamemd

// 0x40FF60
namespace gamemd {
void sub_40FF60()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x40ff6c*/
  dbl_887668 = Math::Sqrt(v0 + v0); /*0x40ff7e*/
}
} // namespace gamemd

// 0x40FF90
namespace gamemd {
void sub_40FF90()
{
  dbl_8876B8 = dbl_887668 / 60.0; /*0x40ff9c*/
}
} // namespace gamemd

// 0x40FFB0
namespace gamemd {
void sub_40FFB0()
{
  dbl_8876A0 = 1.0 / dbl_8876B8; /*0x40ffbc*/
}
} // namespace gamemd

// 0x40FFD0
namespace gamemd {
void sub_40FFD0()
{
  dbl_887698 = 0.0174532925199433 * 45.0; /*0x40ffdc*/
}
} // namespace gamemd
