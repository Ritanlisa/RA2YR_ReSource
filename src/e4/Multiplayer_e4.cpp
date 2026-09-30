// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Multiplayer_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/NetworkGameSetup_e4.hpp"
#include "e4/classes/NetworkAddress_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/PlayerClass_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/MultiplayerSiege_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/NetworkClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x688380
namespace gamemd {
void * Multiplayer::FindStartPositions()
{
    unsigned int v25 = 0;  /* G37 hoist */
  AbstractClass * v1;
  Multiplayer * v2;
  AbstractClass * v3;
  unsigned int v4;
  int v5; // eax
  unsigned int *v6; // ecx
  int v7; // ebp
  unsigned int *v8; // ecx
  int v9; // edi
  AbstractClass * v10;
  unsigned int i; // esi
  int v12; // edi
  int v13; // eax
  int16_t v14; // si
  int v15; // eax
  void *Items; // eax
  int v17; // edx
  int v19; // [esp+10h] [ebp-30h] BYREF
  AbstractClass * v20;
  Multiplayer *v21; // [esp+18h] [ebp-28h]
  int v22; // [esp+1Ch] [ebp-24h]
  int v23; // [esp+20h] [ebp-20h] BYREF
  int v24; // [esp+24h] [ebp-1Ch] BYREF
  VectorClass v25; // [esp+28h] [ebp-18h] BYREF
  int v26; // [esp+38h] [ebp-8h]
  int v27; // [esp+3Ch] [ebp-4h]

  v1 = (gamemd::gamemd::AbstractClass *)((int)((gamemd::gamemd::AbstractClass *)(0)));
  v2 = (gamemd::Multiplayer *)((unsigned int)((gamemd::gamemd::AbstractClass *)(this)));
  v21 = (gamemd::Multiplayer *)(this);
  VectorClass::CellConstructor(&v25, 0, 0); /*0x688395*/
  v3 = dword_A8B230; /*0x68839a*/
  v4 = 10; /*0x6883a0*/
  v25.vtable0 = (void*)&DynamicVectorClass_Cell_vftable; /*0x6883a5*/
  v27 = 10; /*0x6883ad*/
  v26 = 0; /*0x6883b1*/
  v5 = 0; /*0x6883b5*/
  v6 = (void **)((char *)&((unsigned int *)(dword_A8B230))[44].vtable0 + 2); /*0x6883b7*/
  do /*0x6883e9*/
  {
    if ( v5 < 0 ) /*0x6883c6*/
      break; /*0x6883c6*/
    if ( *v6 == dword_B05458 ) /*0x6883d2*/
      break; /*0x6883d2*/
    ++v1; /*0x6883e1*/
    ++v5; /*0x6883e2*/
    ++v6; /*0x6883e3*/
  }
  while ( v5 < 8 ); /*0x6883e9*/
  v7 = 0; /*0x6883f0*/
  if ( dword_A8DA84 > 0 ) /*0x6883f4*/
  {
    v8 = (unsigned int *)(dword_A8DA78);
    v9 = dword_A8DA84; /*0x6883fc*/
    do /*0x68840b*/
    {
      if ( *(unsigned int *)(*v8 + 107) == -1 ) /*0x688404*/
        ++v7; /*0x688406*/
      ++v8; /*0x688407*/
      --v9; /*0x68840a*/
    }
    while ( v9 ); /*0x68840b*/
    v4 = v27; /*0x68840d*/
    v2 = v21; /*0x688411*/
  }
  if ( v1 <= *(unsigned int *)&stru_A8B250.__pad_0[36] + dword_A8DA84 - v7 ) /*0x688421*/
  {
    v20 = (gamemd::AbstractClass *)(*(unsigned int *)&stru_A8B250.__pad_0[36] + dword_A8DA84 - v7);
    v10 = v20; /*0x68842f*/
  }
  else
  {
    v10 = (gamemd::AbstractClass *)((int)(v1));
    v20 = v1; /*0x688425*/
  }
  for ( i = 0; (int)i < (int)(v10); ++i ) /*0x688435*/
  {
    if ( i > 0x2BD || *(void **)((char *)&((unsigned int *)(v3))[44].vtable0 + 4 * i + 2) == (void *)dword_B05458 ) /*0x68845d*/
      continue; /*0x68845d*/
    v12 = *(int *)((char *)&((unsigned int *)(v3))[44].vtable0 + 4 * i + 2); /*0x688478*/
    if ( v26 < v25.Capacity ) /*0x688481*/
      goto LABEL_22; /*0x688481*/
    if ( !v25.IsAllocated && v25.Capacity || v4 <= 0 ) /*0x688491*/
      goto LABEL_24; /*0x688491*/
    if ( (*((uint8_t (**)(VectorClass *, int, unsigned int))v25.vtable0 + 2))(&v25, v4 + v25.Capacity, 0) ) /*0x6884a0*/
    {
  LABEL_22: v13 = (unsigned int)(v26++);
      *((unsigned int *)v25.Items + v13) = v12; /*0x6884b6*/
    }
    v3 = (unsigned int)((gamemd::AbstractClass *)((unsigned int)((gamemd::AbstractClass *)((unsigned int)((gamemd::AbstractClass *)((unsigned int)((gamemd::gamemd::AbstractClass *)((unsigned int)((gamemd::gamemd::AbstractClass *)(dword_A8B230))))))))));
  LABEL_24: v23 = (gamemd::gamemd::AbstractClass *)(*(int *)((char *)&((unsigned int *)(v3))[44].vtable0 + 4 * i + 2));
        Debug::Log();
    v4 = v27; /*0x6884de*/
    v3 = dword_A8B230; /*0x6884e2*/
    v2 = v21; /*0x6884e8*/
  }
  if ( v10 - v26 > 0 ) /*0x688502*/
  {
        Debug::Log();
    if ( v26 < (int)(v10) ) /*0x68851b*/
    {
      do /*0x688643*/
      {
        v14 = Random::Range((Random *)&((unsigned int *)(dword_A8B230))[14].NeedsSaveOrLink, 0, *(unsigned int *)&stru_87F5F0.__pad_58[720] - 10); /*0x688551*/
        IDA_LOWORD(v22) = *(unsigned short *)&((unsigned int *)(stru_87F5F0.__pad_58))[708] /*0x688573*/
                    + Random::Range(
                        (Random *)&((unsigned int *)(dword_A8B230))[14].NeedsSaveOrLink,
                        10,
                        *(unsigned int *)&stru_87F5F0.__pad_58[716] - 10);
        IDA_HIWORD(v22) = v14 + *(unsigned short *)&stru_87F5F0.__pad_58[712] + 10; /*0x688588*/
        v19 = v22; /*0x688594*/
        v23 = 0; /*0x6885ab*/
        v19 = *LayerClass::Pathfinding_Find( /*0x6885c3*/
                 (Type *)&stru_87F5F0.__pad_58[416],
                 (int)&v23,
                 &v24,
                 (int16_t *)&v19,
                 1,
                 -1,
                 0,
                 0,
                 8,
                 8,
                 0,
                 0,
                 0,
                 1,
                 (int16_t *)&v23,
                 0,
                 0);
        if ( v19 != dword_B05458 ) /*0x6885c7*/
        {
          if ( v26 < v25.Capacity /*0x688603*/
            || (v25.IsAllocated || !v25.Capacity)
            && v27 > 0
            && (*((uint8_t (**)(VectorClass *, int, unsigned int))v25.vtable0 + 2))(
                 &v25,
                 v27 + v25.Capacity,
                 0) )
          {
            v15 = v26++; /*0x688612*/
            *((unsigned int *)v25.Items + v15) = v19; /*0x68861d*/
          }
                    Debug::Log();
        }
      }
      while ( v26 < (int)(v20) ); /*0x688643*/
      v2 = v21; /*0x688649*/
    }
  }
  *(unsigned int *)&((unsigned int *)(v2))[4] = 0; /*0x688651*/
  *(unsigned int *)&((unsigned int *)(v2))[8] = 0; /*0x688654*/
  ((unsigned int *)(v2))[13] = 0; /*0x688657*/
  ((unsigned int *)(v2))[12] = (Multiplayer)1; /*0x68865f*/
  *(unsigned int *)v2 = (void*)&VectorClass_Cell_vftable; /*0x688663*/
  Multiplayer::CopyDataArray(v2, &v25); /*0x688669*/
  *(unsigned int *)v2 = (void*)&DynamicVectorClass_Cell_vftable; /*0x68866e*/
  v25.vtable0 = (void*)&VectorClass_Cell_vftable; /*0x688674*/
  Items = v25.Items; /*0x68867c*/
  v17 = v27; /*0x688684*/
  *(unsigned int *)&((unsigned int *)(v2))[16] = v26; /*0x688688*/
  *(unsigned int *)&((unsigned int *)(v2))[20] = v17; /*0x68868d*/
  if ( Items && v25.IsAllocated ) /*0x688698*/
    RA2_OPDEL(Items); /*0x68869b*/
  return v2; /*0x6886a5*/
}
} // namespace gamemd
// 0x68C2B0
namespace gamemd {
unsigned int * Multiplayer::CopyDataArray(ObjectClass * aP1)
{
  int v3; // edi
  void * v4;
  int v5; // ecx
  int v6; // eax

  if ( this == (Multiplayer *)aP1 ) /*0x68c2bb*/
    return this; /*0x68c2bb*/
  /*0x68c2bb*/
  (*(void (**)(unsigned int *))(*this + 12))(this);
  v3 = aP1[2]; /*0x68c2c2*/
    *((unsigned int *)this + 8) = v3;
  if ( !v3 ) /*0x68c2ca*/
  {
    this->u32_4 = (unsigned int *)(0);
    this->u8_D = (unsigned int *)(0);
    return (unsigned int *)(this);
  }
  v4 = (void *)((int)(RA2_OPNEW(4 * v3)));
  if ( !v4 ) /*0x68c2de*/
    v4 = 0; /*0x68c2e7*/
    *((unsigned int *)this + 4) = v4;
  if ( !v4 ) /*0x68c2ee*/
    return this; /*0x68c2ee*/
    v5 = *((unsigned int *)this + 8);
  v6 = 0; /*0x68c2f3*/
    *((unsigned char *)this + 13) = 1;
  if ( v5 <= 0 ) /*0x68c2fb*/
    return this; /*0x68c2fb*/
  do /*0x68c30f*/
  {
        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *(unsigned int *)(*(unsigned int *)&aP1->__pad_0[4] + 4 * v6);
    ++v6; /*0x68c30c*/
  }
  while ( v6 < this->u32_8 ); /*0x68c30f*/
  return this; /*0x68c313*/
}
} // namespace gamemd
// 0x69AE90
namespace gamemd {
void Multiplayer::ShowProgress(int a2)
{
  int result; // eax
  double v3; // st7
  int v5; // eax
  int i; // esi
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int Ticks; // [esp+8h] [ebp-1DCh]
  int v14; // [esp+14h] [ebp-1D0h]
  double v15; // [esp+14h] [ebp-1D0h]
  int v16[113]; // [esp+1Ch] [ebp-1C8h] BYREF
  int16_t v17; // [esp+1E0h] [ebp-4h]
  char v18; // [esp+1E2h] [ebp-2h]

  IDA_LOBYTE(result) = *((unsigned int *)((char *)&stru_A8EB00 + 391)); /*0x69ae90*/
  if ( !stru_A8EB00.?[391] ) /*0x69aea1*/
  {
    v14 = a2; /*0x69aeb4*/
    if ( IDA_BYTE1(dword_A8B230[375].vtable0) ) /*0x69aeb8*/
      v14 = a2 / 2; /*0x69aec7*/
    __asm { fild dword ptr [esp+1E4h+var_1D0] } /*0x69aecb*/
    __asm { fstp [esp+1E8h+var_1D0] }
    result = Progress::GetWeighted((int)&stru_AC4B30.__pad_EC[828], 0); /*0x69aeda*/
    __asm { fmul ds:dbl_7E2AC0 } /*0x69aedf*/
    __asm
    {
      fcomp [esp+1E4h+var_1D0]
      fnstsw ax
    }
    if ( (result & 0x100) != 0 ) /*0x69aef1*/
      result = Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, v15, NAN); /*0x69af0a*/
        if ( *((unsigned int *)this + 10316) != 1 )
    {
            Ticks = Timer::GetTicks();
      switch ( *(unsigned int *)this ) /*0x69af3e*/
      {
        case 1: /*0x69af3e*/
        case 2: /*0x69af3e*/
          memset(v16, 0, 250); /*0x69b099*/
          v16[0] = 108; /*0x69b0a2*/
          Progress::GetWeighted((int)&stru_AC4B30.__pad_EC[828], 0); /*0x69b0aa*/
          __asm { fmul ds:dbl_7E2AC0 } /*0x69b0af*/
          IDA_LOWORD(v10) = Math::RoundToInt(v3); /*0x69b0b5*/
          *(int *)((char *)&v16[6] + 1) = v10; /*0x69b0c0*/
          IDA_LOBYTE(v16[6]) = dword_A8DB30; /*0x69b0d5*/
          Stream::WriteBlock((int *)&unk_A8EA70, (int)v16, 250, 0); /*0x69b0d9*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x69b0e3*/
          while ( Count::GetCountQueue((Count *)&unk_A8EA70) > 5 ) /*0x69b0f5*/
          {
            v11 = 240; /*0x69b101*/
            if ( Ticks != -1 ) /*0x69b107*/
            {
                            v9 = Timer::GetTicks() - Ticks;
              if ( v12 >= 240 ) /*0x69b118*/
                              if ( v9 >= 240 )
              v11 = 240 - v12; /*0x69b11a*/
            }
            if ( v11 <= 0 ) /*0x69b11e*/
              break; /*0x69b11e*/
            Sleep(0x14u); /*0x69b122*/
            EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x69b12a*/
            Stream::ReadPacket((int)&unk_A8EA70); /*0x69b134*/
          }
          break; /*0x69b146*/
        case 3: /*0x69af3e*/
        case 4: /*0x69af3e*/
          memset(v16, 0, sizeof(v16)); /*0x69af52*/
          v17 = 0; /*0x69af54*/
          v18 = 0; /*0x69af56*/
          v16[0] = 15; /*0x69af5c*/
          Progress::GetWeighted((int)&stru_AC4B30.__pad_EC[828], 0); /*0x69af64*/
          __asm { fmul ds:dbl_7E2AC0 } /*0x69af69*/
          IDA_LOWORD(v5) = Math::RoundToInt(v3); /*0x69af6f*/
          *(int *)((char *)&v16[11] + 3) = v5; /*0x69af7a*/
          strcpy((char *)&v16[1], ToWideStringChar((char *)*(unsigned int *)(dword_A8DA78))); /*0x69af9e*/
          __asm /*0x69afa7*/
          {
            fild [esp+1E8h+var_199]
            fcomp ds:dbl_7F12F0
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 ) /*0x69afb6*/
          {
            Network::SendMessage(&unk_A8E9C0.Socket, (int)v16, 51, 0, 0, 0, 0); /*0x69afcc*/
          }
          else
          {
            for ( i = 1; i < dword_A8DA84; ++i ) /*0x69afdf*/
            {
                            Debug::Log(MEMORY[0x83F674]);
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v16, 51, 1, (wchar_t *)((unsigned int *)(dword_A8DA78))[i]); /*0x69b006*/
            }
          }
                    Event::Dispatch();
          while ( Network::GetQueueCount(&unk_A8E9C0) > 5 ) /*0x69b027*/
          {
            v8 = 240; /*0x69b037*/
            if ( Ticks != -1 ) /*0x69b03d*/
            {
                            v6 = Timer::GetTicks() - Ticks;
              if ( v9 >= 240 ) /*0x69b04e*/
                              if ( v6 >= 240 )
              v8 = 240 - v9; /*0x69b054*/
            }
            if ( v8 <= 0 ) /*0x69b058*/
              break; /*0x69b058*/
            Sleep(0x14u); /*0x69b060*/
            MessageLoop(); /*0x69b062*/
                        Event::Dispatch();
          }
          break; /*0x69b079*/
        default:
          return this->Event::Dispatch();
      }
            Event::Dispatch();
    }
  }
  return result; /*0x69b081*/
}
} // namespace gamemd
// 0x53F1F0
namespace gamemd {
void Multiplayer::Screen()
{
  int result; // eax

  dword_828140 = (int)this; /*0x53f1f0*/
  return result; /*0x53f1f6*/
}
} // namespace gamemd