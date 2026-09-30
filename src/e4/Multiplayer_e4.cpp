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

  IUnknown *v1; // esi
  VectorClass *v2; // edi
  ScenarioClass *v3; // edx
  int v4; // ebx
  int v5; // eax
  char *waypoints; // ecx
  int v7; // ebp
  int v8; // ecx
  int v9; // edi
  IUnknown *v10; // ebp
  unsigned int i; // esi
  int v12; // edi
  IUnknown *v13; // eax
  int16_t v14; // si
  IUnknown *v15; // eax
  WinModemClass *v16; // eax
  IUnknown *v17; // edx
  int v19; // [esp+10h] [ebp-30h] BYREF
  IUnknown *v20; // [esp+14h] [ebp-2Ch]
  VectorClass *v21; // [esp+18h] [ebp-28h]
  int v22; // [esp+1Ch] [ebp-24h]
  int v23; // [esp+20h] [ebp-20h] BYREF
  int v24; // [esp+24h] [ebp-1Ch] BYREF
  void **v25; // [esp+28h] [ebp-18h] BYREF
  void *Block; // [esp+2Ch] [ebp-14h]
  int v27; // [esp+30h] [ebp-10h]
  char v28; // [esp+35h] [ebp-Bh]
  IUnknown *v29; // [esp+38h] [ebp-8h]
  int v30; // [esp+3Ch] [ebp-4h]

  v1 = 0; /*0x688387*/
  v2 = this; /*0x688389*/
  v21 = this; /*0x688391*/
  VectorClass::CellConstructor(&v25, 0, 0); /*0x688395*/
  v3 = *(ScenarioClass **)&HouseClass_Player.__pad_5568[8060]; /*0x68839a*/
  v4 = 10; /*0x6883a0*/
  v25 = (void **)&vt_DynamicVectorClass_Cell; /*0x6883a5*/
  v30 = 10; /*0x6883ad*/
  v29 = 0; /*0x6883b1*/
  v5 = 0; /*0x6883b5*/
  waypoints = (char *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 1586); /*0x6883b7*/
  do /*0x6883e9*/
  {
    if ( v5 < 0 ) /*0x6883c6*/
      break; /*0x6883c6*/
    if ( *(unsigned int *)waypoints == dword_B05458 ) /*0x6883d2*/
      break; /*0x6883d2*/
    v1 = (IUnknown *)((char *)v1 + 1); /*0x6883e1*/
    ++v5; /*0x6883e2*/
    waypoints += 4; /*0x6883e3*/
  }
  while ( v5 < 8 ); /*0x6883e9*/
  v7 = 0; /*0x6883f0*/
  if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x6883f4*/
  {
    v8 = *(unsigned int *)&HouseClass_Player.__pad_5568[18372]; /*0x6883f6*/
    v9 = *(unsigned int *)&HouseClass_Player.__pad_5568[18384]; /*0x6883fc*/
    do /*0x68840b*/
    {
      if ( *(unsigned int *)(*(unsigned int *)v8 + 107) == -1 ) /*0x688404*/
        ++v7; /*0x688406*/
      v8 += 4; /*0x688407*/
      --v9; /*0x68840a*/
    }
    while ( v9 ); /*0x68840b*/
    v4 = v30; /*0x68840d*/
    v2 = v21; /*0x688411*/
  }
  if ( (int)v1 <= *(unsigned int *)&HouseClass_Player.__pad_5568[8128] + *(unsigned int *)&HouseClass_Player.__pad_5568[18384] - v7 ) /*0x688421*/
  {
    v20 = (IUnknown *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8128] /*0x68842b*/
                     + *(unsigned int *)&HouseClass_Player.__pad_5568[18384]
                     - v7);
    v10 = v20; /*0x68842f*/
  }
  else
  {
    v10 = v1; /*0x688423*/
    v20 = v1; /*0x688425*/
  }
  for ( i = 0; (int)i < (int)v10; ++i ) /*0x688435*/
  {
    if ( i > 0x2BD || *(unsigned int *)&v3->waypoints[4 * i] == dword_B05458 ) /*0x68845d*/
      continue; /*0x68845d*/
    v12 = *(unsigned int *)&v3->waypoints[4 * i]; /*0x688478*/
    if ( (int)v29 < v27 ) /*0x688481*/
      goto LABEL_22; /*0x688481*/
    if ( !v28 && v27 || v4 <= 0 ) /*0x688491*/
      goto LABEL_24; /*0x688491*/
    if ( ((uint8_t (*)(void ***, int, unsigned int))v25[2])(&v25, v4 + v27, 0) ) /*0x6884a0*/
    {
LABEL_22:
      v13 = v29; /*0x6884ab*/
      v29 = (IUnknown *)((char *)v29 + 1); /*0x6884ae*/
      *((unsigned int *)Block + (unsigned int)v13) = v12; /*0x6884b6*/
    }
    v3 = *(ScenarioClass **)&HouseClass_Player.__pad_5568[8060]; /*0x6884b9*/
LABEL_24:
    v23 = *(unsigned int *)&v3->waypoints[4 * i]; /*0x6884bf*/
    Debug::Log(); /*0x6884d9*/
    v4 = v30; /*0x6884de*/
    v3 = *(ScenarioClass **)&HouseClass_Player.__pad_5568[8060]; /*0x6884e2*/
    v2 = v21; /*0x6884e8*/
  }
  if ( (char *)v10 - (char *)v29 > 0 ) /*0x688502*/
  {
    Debug::Log(); /*0x68850d*/
    if ( (int)v29 < (int)v10 ) /*0x68851b*/
    {
      do /*0x688643*/
      {
        v14 = Random::Range( /*0x688551*/
                (unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536),
                0,
                (IUnknown *)(*(unsigned int *)&stru_87C374.__pad_14B0[8436] - 10));
        IDA_LOWORD(v22) = *(unsigned short *)&stru_87C374.__pad_14B0[8424] /*0x688573*/
                    + Random::Range(
                        (unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536),
                        (IUnknown *)0xA,
                        (IUnknown *)(*(unsigned int *)&stru_87C374.__pad_14B0[8432] - 10));
        IDA_HIWORD(v22) = v14 + *(unsigned short *)&stru_87C374.__pad_14B0[8428] + 10; /*0x688588*/
        v19 = v22; /*0x688594*/
        v23 = 0; /*0x6885ab*/
        v19 = *LayerClass::Pathfinding_Find( /*0x6885c3*/
                 (IUnknown *)&stru_87C374.__pad_14B0[8132],
                 (IUnknown *)&v23,
                 (IUnknown *)&v24,
                 (IUnknown *)&v19,
                 (IUnknown *)1,
                 (IUnknown *)-1,
                 0,
                 0,
                 (IUnknown *)8,
                 (IUnknown *)8,
                 0,
                 0,
                 0,
                 (IUnknown *)1,
                 (IUnknown *)&v23,
                 0,
                 0);
        if ( v19 != dword_B05458 ) /*0x6885c7*/
        {
          if ( (int)v29 < v27 /*0x688603*/
            || (v28 || !v27)
            && v30 > 0
            && ((uint8_t (*)(void ***, int, unsigned int))v25[2])(&v25, v30 + v27, 0) )
          {
            v15 = v29; /*0x688612*/
            v29 = (IUnknown *)((char *)v29 + 1); /*0x688615*/
            *((unsigned int *)Block + (unsigned int)v15) = v19; /*0x68861d*/
          }
          Debug::Log(); /*0x688631*/
        }
      }
      while ( (int)v29 < (int)v20 ); /*0x688643*/
      v2 = v21; /*0x688649*/
    }
  }
  v2->Items = 0; /*0x688651*/
  v2->Capacity = 0; /*0x688654*/
  v2->IsAllocated = 0; /*0x688657*/
  v2->IsInitialized = 1; /*0x68865f*/
  v2->vtable0 = &vt_VectorClass_Cell; /*0x688663*/
  Multiplayer::CopyDataArray(v2, (ObjectClass *)&v25); /*0x688669*/
  v2->vtable0 = &vt_DynamicVectorClass_Cell; /*0x68866e*/
  v25 = (void **)&vt_VectorClass_Cell; /*0x688674*/
  v16 = (WinModemClass *)Block; /*0x68867c*/
  v17 = (IUnknown *)v30; /*0x688684*/
  v2[1].vtable0 = v29; /*0x688688*/
  v2[1].Items = v17; /*0x68868d*/
  if ( v16 && v28 ) /*0x688698*/
    RA2_OPDEL(v16); /*0x68869b*/
  return v2; /*0x6886a5*/

}
} // namespace gamemd
// 0x68C2B0
namespace gamemd {
unsigned int * Multiplayer::CopyDataArray(ObjectClass * aP1)
{

  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (unsigned int *)aP1 ) /*0x68c2bb*/
    return this; /*0x68c2bb*/
  (*(void (**)(unsigned int *))(*(unsigned int *)this + 48))(this); /*0x68c2bf*/
  v3 = *(unsigned int *)&aP1->__pad_0[8]; /*0x68c2c2*/
  *((unsigned int *)this + 2) = v3; /*0x68c2c7*/
  if ( !v3 ) /*0x68c2ca*/
  {
    *((unsigned int *)this + 1) = 0; /*0x68c319*/
    *((unsigned char *)this + 13) = 0; /*0x68c320*/
    return this; /*0x68c324*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x68c2d4*/
  if ( !v4 ) /*0x68c2de*/
    v4 = 0; /*0x68c2e7*/
  *((unsigned int *)this + 1) = v4; /*0x68c2eb*/
  if ( !v4 ) /*0x68c2ee*/
    return this; /*0x68c2ee*/
  v5 = *((unsigned int *)this + 2); /*0x68c2f0*/
  v6 = 0; /*0x68c2f3*/
  *((unsigned char *)this + 13) = 1; /*0x68c2f7*/
  if ( v5 <= 0 ) /*0x68c2fb*/
    return this; /*0x68c2fb*/
  do /*0x68c30f*/
  {
    *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v6) = *(unsigned int *)(*(unsigned int *)&aP1->__pad_0[4] + 4 * v6); /*0x68c306*/
    ++v6; /*0x68c30c*/
  }
  while ( v6 < *((unsigned int *)this + 2) ); /*0x68c30f*/
  return this; /*0x68c313*/

}
} // namespace gamemd
// 0x69AE90
namespace gamemd {
void Multiplayer::ShowProgress(int a2)
{

  double v3; // st7
  int i; // esi
  int v5; // esi
  int v6; // eax
  double v7; // st7
  int v8; // esi
  int v9; // eax
  DWORD Ticks; // [esp+8h] [ebp-1DCh]
  int v11; // [esp+14h] [ebp-1D0h]
  double v12; // [esp+14h] [ebp-1D0h]
  int v13[113]; // [esp+1Ch] [ebp-1C8h] BYREF
  int16_t v14; // [esp+1E0h] [ebp-4h]
  char v15; // [esp+1E2h] [ebp-2h]

  if ( !g_abs_A8ED6B ) /*0x69aea1*/
  {
    v11 = a2; /*0x69aeb4*/
    if ( *((unsigned char *)g_abs_A8B230 + 13501) ) /*0x69aeb8*/
      v11 = a2 / 2; /*0x69aec7*/
    v12 = (double)v11; /*0x69aed6*/
    if ( Progress::GetWeighted(0) * 100.0 < v12 ) /*0x69aef1*/
      Network::UpdateLatencyDisplay(0, v12, NAN); /*0x69af0a*/
    if ( *((unsigned int *)this + 2579) != 1 ) /*0x69af16*/
    {
      Ticks = Timer::GetTicks(); /*0x69af26*/
      switch ( *this ) /*0x69af3e*/
      {
        case 1: /*0x69af3e*/
        case 2: /*0x69af3e*/
          memset(v13, 0, 250); /*0x69b099*/
          v13[0] = 108; /*0x69b0a2*/
          v7 = Progress::GetWeighted(0); /*0x69b0aa*/
          *(int *)((char *)&v13[6] + 1) = Math::RoundToInt(v7 * 100.0); /*0x69b0c0*/
          IDA_LOBYTE(v13[6]) = g_abs_A8DB30; /*0x69b0d5*/
          Stream::WriteBlock(v13, 250, 0); /*0x69b0d9*/
          Stream::ReadPacket(&g_abs_A8EA70); /*0x69b0e3*/
          while ( Count::GetCountQueue(&g_abs_A8EA70) > 5 ) /*0x69b0f5*/
          {
            v8 = 240; /*0x69b101*/
            if ( Ticks != -1 ) /*0x69b107*/
            {
              v9 = Timer::GetTicks() - Ticks; /*0x69b112*/
              if ( v9 >= 240 ) /*0x69b118*/
                goto LABEL_25; /*0x69b118*/
              v8 = 240 - v9; /*0x69b11a*/
            }
            if ( v8 <= 0 ) /*0x69b11e*/
              break; /*0x69b11e*/
            Sleep(0x14u); /*0x69b122*/
            EventQueue::Process(g_abs_87F770); /*0x69b12a*/
            Stream::ReadPacket(&g_abs_A8EA70); /*0x69b134*/
          }
          break; /*0x69b146*/
        case 3: /*0x69af3e*/
        case 4: /*0x69af3e*/
          memset(v13, 0, sizeof(v13)); /*0x69af52*/
          v14 = 0; /*0x69af54*/
          v15 = 0; /*0x69af56*/
          v13[0] = 15; /*0x69af5c*/
          v3 = Progress::GetWeighted(0); /*0x69af64*/
          *(int *)((char *)&v13[11] + 3) = Math::RoundToInt(v3 * 100.0); /*0x69af7a*/
          strcpy((char *)&v13[1], ToWideStringChar(*(char **)g_abs_A8DA78)); /*0x69af9e*/
          if ( (double)*(int *)((char *)&v13[11] + 3) >= 99.95 ) /*0x69afb6*/
          {
            for ( i = 1; i < g_abs_A8DA84; ++i ) /*0x69afdf*/
            {
              Debug::Log(g_abs_83F674); /*0x69afe6*/
              Network::SendToPlayer((int)v13, 51, 1, *(wchar_t **)(g_abs_A8DA78 + 4 * i)); /*0x69b006*/
            }
          }
          else
          {
            Network::SendMessage(v13, 51, 0, 0, 0, 0); /*0x69afcc*/
          }
          Event::Dispatch(); /*0x69b015*/
          while ( Network::GetQueueCount(&g_abs_A8E9C0) > 5 ) /*0x69b027*/
          {
            v5 = 240; /*0x69b037*/
            if ( Ticks != -1 ) /*0x69b03d*/
            {
              v6 = Timer::GetTicks() - Ticks; /*0x69b048*/
              if ( v6 >= 240 ) /*0x69b04e*/
                goto LABEL_25; /*0x69b04e*/
              v5 = 240 - v6; /*0x69b054*/
            }
            if ( v5 <= 0 ) /*0x69b058*/
              break; /*0x69b058*/
            Sleep(0x14u); /*0x69b060*/
            MessageLoop(); /*0x69b062*/
            Event::Dispatch(); /*0x69b067*/
          }
          break; /*0x69b079*/
        default:
          break;
      }
LABEL_25:
      Event::Dispatch(); /*0x69b148*/
    }
  }

}
} // namespace gamemd
// 0x53F1F0
namespace gamemd {
void Multiplayer::Screen()
{

  dword_828140 = (int)this; /*0x53f1f0*/

}
} // namespace gamemd