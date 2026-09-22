// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x688380
VectorClass * Multiplayer::FindStartPositions()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall Multiplayer::FindStartPositions(VectorClass *this)
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
  __int16 v14; // si
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
  v3 = *(ScenarioClass **)&HouseClass_Player[29924]; /*0x68839a*/
  v4 = 10; /*0x6883a0*/
  v25 = (void **)&vt_DynamicVectorClass_Cell; /*0x6883a5*/
  v30 = 10; /*0x6883ad*/
  v29 = 0; /*0x6883b1*/
  v5 = 0; /*0x6883b5*/
  waypoints = (char *)(*(_DWORD *)&HouseClass_Player[29924] + 1586); /*0x6883b7*/
  do /*0x6883e9*/
  {
    if ( v5 < 0 ) /*0x6883c6*/
      break; /*0x6883c6*/
    if ( *(_DWORD *)waypoints == dword_B05458 ) /*0x6883d2*/
      break; /*0x6883d2*/
    v1 = (IUnknown *)((char *)v1 + 1); /*0x6883e1*/
    ++v5; /*0x6883e2*/
    waypoints += 4; /*0x6883e3*/
  }
  while ( v5 < 8 ); /*0x6883e9*/
  v7 = 0; /*0x6883f0*/
  if ( *(int *)&HouseClass_Player[40248] > 0 ) /*0x6883f4*/
  {
    v8 = *(_DWORD *)&HouseClass_Player[40236]; /*0x6883f6*/
    v9 = *(_DWORD *)&HouseClass_Player[40248]; /*0x6883fc*/
    do /*0x68840b*/
    {
      if ( *(_DWORD *)(*(_DWORD *)v8 + 107) == -1 ) /*0x688404*/
        ++v7; /*0x688406*/
      v8 += 4; /*0x688407*/
      --v9; /*0x68840a*/
    }
    while ( v9 ); /*0x68840b*/
    v4 = v30; /*0x68840d*/
    v2 = v21; /*0x688411*/
  }
  if ( (int)v1 <= *(_DWORD *)&HouseClass_Player[29992] + *(_DWORD *)&HouseClass_Player[40248] - v7 ) /*0x688421*/
  {
    v20 = (IUnknown *)(*(_DWORD *)&HouseClass_Player[29992] /*0x68842b*/
                     + *(_DWORD *)&HouseClass_Player[40248]
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
    if ( i > 0x2BD || *(_DWORD *)&v3->waypoints[4 * i] == dword_B05458 ) /*0x68845d*/
      continue; /*0x68845d*/
    v12 = *(_DWORD *)&v3->waypoints[4 * i]; /*0x688478*/
    if ( (int)v29 < v27 ) /*0x688481*/
      goto LABEL_22; /*0x688481*/
    if ( !v28 && v27 || v4 <= 0 ) /*0x688491*/
      goto LABEL_24; /*0x688491*/
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v25[2])(&v25, v4 + v27, 0) ) /*0x6884a0*/
    {
LABEL_22:
      v13 = v29; /*0x6884ab*/
      v29 = (IUnknown *)((char *)v29 + 1); /*0x6884ae*/
      *((_DWORD *)Block + (_DWORD)v13) = v12; /*0x6884b6*/
    }
    v3 = *(ScenarioClass **)&HouseClass_Player[29924]; /*0x6884b9*/
LABEL_24:
    v23 = *(_DWORD *)&v3->waypoints[4 * i]; /*0x6884bf*/
    Debug::Log(); /*0x6884d9*/
    v4 = v30; /*0x6884de*/
    v3 = *(ScenarioClass **)&HouseClass_Player[29924]; /*0x6884e2*/
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
                (_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536),
                0,
                (IUnknown *)(*(_DWORD *)&stru_87C374[13732] - 10));
        LOWORD(v22) = *(_WORD *)&stru_87C374[13720] /*0x688573*/
                    + Random::Range(
                        (_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536),
                        (IUnknown *)0xA,
                        (IUnknown *)(*(_DWORD *)&stru_87C374[13728] - 10));
        HIWORD(v22) = v14 + *(_WORD *)&stru_87C374[13724] + 10; /*0x688588*/
        v19 = v22; /*0x688594*/
        v23 = 0; /*0x6885ab*/
        v19 = *LayerClass::Pathfinding_Find( /*0x6885c3*/
                 (IUnknown *)&stru_87C374[13428],
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
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v25[2])(&v25, v30 + v27, 0) )
          {
            v15 = v29; /*0x688612*/
            v29 = (IUnknown *)((char *)v29 + 1); /*0x688615*/
            *((_DWORD *)Block + (_DWORD)v15) = v19; /*0x68861d*/
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
    __3_YAXPAX_Z(v16); /*0x68869b*/
  return v2; /*0x6886a5*/
}
}

// 0x68C2B0
unsigned int * Multiplayer::CopyDataArray(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Multiplayer::CopyDataArray(_DWORD *this, ObjectClass *aP1)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x68c2bb*/
    return this; /*0x68c2bb*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x68c2bf*/
  v3 = *(_DWORD *)&aP1->__pad_0[8]; /*0x68c2c2*/
  this->q002 = v3; /*0x68c2c7*/
  if ( !v3 ) /*0x68c2ca*/
  {
    this->q001 = 0; /*0x68c319*/
    *((_BYTE *)this + 13) = 0; /*0x68c320*/
    return this; /*0x68c324*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x68c2d4*/
  if ( !v4 ) /*0x68c2de*/
    v4 = 0; /*0x68c2e7*/
  this->q001 = v4; /*0x68c2eb*/
  if ( !v4 ) /*0x68c2ee*/
    return this; /*0x68c2ee*/
  v5 = this->q002; /*0x68c2f0*/
  v6 = 0; /*0x68c2f3*/
  *((_BYTE *)this + 13) = 1; /*0x68c2f7*/
  if ( v5 <= 0 ) /*0x68c2fb*/
    return this; /*0x68c2fb*/
  do /*0x68c30f*/
  {
    *(_DWORD *)(this->q001 + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->__pad_0[4] + 4 * v6); /*0x68c306*/
    ++v6; /*0x68c30c*/
  }
  while ( v6 < this->q002 ); /*0x68c30f*/
  return this; /*0x68c313*/
}
}

// 0x69AE90
void Multiplayer::ShowProgress(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Multiplayer_ShowProgress(_DWORD *this, int a2)
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
  __int16 v14; // [esp+1E0h] [ebp-4h]
  char v15; // [esp+1E2h] [ebp-2h]

  if ( !ArmageddonMode ) /*0x69aea1*/
  {
    v11 = a2; /*0x69aeb4*/
    if ( *((_BYTE *)g_ScenarioClass_Instance + 13501) ) /*0x69aeb8*/
      v11 = a2 / 2; /*0x69aec7*/
    v12 = (double)v11; /*0x69aed6*/
    if ( Progress::GetWeighted(0) * 100.0 < v12 ) /*0x69aef1*/
      Network::UpdateLatencyDisplay(0, v12, NAN); /*0x69af0a*/
    if ( this->qA13 != 1 ) /*0x69af16*/
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
          LOBYTE(v13[6]) = g_EventDispatchState; /*0x69b0d5*/
          Stream::WriteBlock(v13, 250, 0); /*0x69b0d9*/
          Stream::ReadPacket(&g_EventManager); /*0x69b0e3*/
          while ( Count::GetCountQueue(&g_EventManager) > 5 ) /*0x69b0f5*/
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
            EventQueue::Process(g_BinkMoviePlayer); /*0x69b12a*/
            Stream::ReadPacket(&g_EventManager); /*0x69b134*/
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
          strcpy((char *)&v13[1], ToWideStringChar(*(char **)Game_PlayerInfoArray)); /*0x69af9e*/
          if ( (double)*(int *)((char *)&v13[11] + 3) >= 99.95 ) /*0x69afb6*/
          {
            for ( i = 1; i < Game_PlayerCount; ++i ) /*0x69afdf*/
            {
              Debug::Log(DataGlobal_83F674); /*0x69afe6*/
              Network::SendToPlayer((int)v13, 51, 1, *(wchar_t **)(Game_PlayerInfoArray + 4 * i)); /*0x69b006*/
            }
          }
          else
          {
            Network::SendMessage(v13, 51, 0, 0, 0, 0); /*0x69afcc*/
          }
          Event::Dispatch(); /*0x69b015*/
          while ( Network::GetQueueCount(&g_NetworkManager) > 5 ) /*0x69b027*/
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
}

// 0x53F1F0
void Multiplayer::Screen()
{
{
    DataGlobal_828140 = (int)this;
}
}
