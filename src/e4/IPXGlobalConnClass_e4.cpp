// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"

// 0x540110
void IPXGlobalConnClass::ReceivePacket(int a2)
{
  int v2; // esi
  _DWORD *v3; // ecx
  int i; // ebp
  int TileType; // edi
  int v6; // eax
  int v7; // ebx
  DWORD Ticks; // edx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // edx

  v2 = this; /*0x540113*/
  Debug::Log(); /*0x540132*/
  v3 = *(_DWORD **)(v2 + 4); /*0x540137*/
  for ( i = 0; i < v3[14]; ++i ) /*0x540144*/
  {
    TileType = Terrain::GetTileType(v3, i); /*0x540158*/
    Debug::Log(); /*0x54015a*/
    if ( TileType ) /*0x540164*/
    {
      Debug::Log(); /*0x540170*/
      v6 = g_LastPerformanceTick; /*0x540175*/
      v7 = g_PerformanceTickOffset; /*0x540186*/
      if ( g_LastPerformanceTick != -1 ) /*0x540188*/
      {
        Ticks = Timer::GetTicks(); /*0x54019a*/
        v6 = g_LastPerformanceTick; /*0x54019c*/
        v7 += Ticks - g_LastPerformanceTick; /*0x5401a3*/
      }
      if ( a2 + *(_DWORD *)(TileType + 4) >= v7 ) /*0x5401b0*/
      {
        if ( v6 != -1 ) /*0x54023d*/
          Timer::GetTicks(); /*0x540244*/
        Debug::Log(); /*0x54026f*/
      }
      else
      {
        if ( v6 != -1 ) /*0x5401b9*/
          Timer::GetTicks(); /*0x5401c0*/
        Debug::Log(); /*0x5401eb*/
        v9 = 0; /*0x5401fa*/
        v10 = *(_DWORD *)(this + 212); /*0x5401ff*/
        if ( v10 > 0 ) /*0x540207*/
        {
          v11 = *(_DWORD **)(this + 208); /*0x54020f*/
          while ( *v11 != *(_DWORD *)(*(_DWORD *)(TileType + 12) + 4) ) /*0x540213*/
          {
            ++v9; /*0x540215*/
            ++v11; /*0x540216*/
            if ( v9 >= v10 ) /*0x54021b*/
              goto LABEL_14; /*0x54021b*/
          }
          *(_DWORD *)(*(_DWORD *)(this + 208) + 4 * v9) = -1; /*0x54021f*/
        }
  LABEL_14:
        PacketQueue::ReleaseEntry(*(_DWORD **)(this + 4), 0, 0, i--, 0, 0); /*0x540226*/
      }
      v2 = this; /*0x540277*/
    }
    v3 = *(_DWORD **)(v2 + 4); /*0x54027b*/
  }
  Debug::Log(); /*0x540296*/
}
// 0x5403F0
HashTable * * IPXGlobalConnClass::SetAddress(int a2, int arg4, int * a3, IPXGlobalConnClass * aP4, int a6, int aP3)
{
  _BYTE *v7; // ebp
  int v8; // esi
  int v9; // ebp
  int v10; // edi
  char LinkedIndex; // al
  int v12; // edi
  int v13; // edx
  int v15; // [esp+Ch] [ebp-28h] BYREF
  _BYTE *v16; // [esp+10h] [ebp-24h]
  _BYTE v17[8]; // [esp+14h] [ebp-20h] BYREF
  int v18; // [esp+1Ch] [ebp-18h] BYREF
  int v19; // [esp+20h] [ebp-14h]
  int v20; // [esp+24h] [ebp-10h]
  _DWORD v21[3]; // [esp+28h] [ebp-Ch] BYREF

  v7 = this; /*0x5403f4*/
  v16 = this; /*0x5403fc*/
  Waypoint::InitInvalid(&v18); /*0x540400*/
  v18 = *a3; /*0x540413*/
  v19 = a3[1]; /*0x54041a*/
  v20 = a3[2]; /*0x540421*/
  if ( aP4 ) /*0x540425*/
  {
    Network::CopyAddress(a3, &v15, (int)v17); /*0x540431*/
    v15 = *aP4; /*0x540442*/
    NetworkID::Assign(&v18, &v15, (int)v17, 0); /*0x54044c*/
  }
  if ( g_GameMode_Current[0] == 4 && !(_BYTE)a6 && g_Network_IsHosting && v7[200] ) /*0x540477*/
  {
    v8 = a2; /*0x540485*/
    if ( !*(_BYTE *)(a2 + 3) ) /*0x540489*/
    {
      v21[0] = v18; /*0x5404a0*/
      v21[1] = v19; /*0x5404a4*/
      v21[2] = v20; /*0x5404b6*/
      Network::CopyAddress(v21, &v15, (int)v17); /*0x5404ba*/
      NetworkID::Assign(v21, &v15, (int)v17, aP3); /*0x5404d2*/
      v9 = -1; /*0x5404dc*/
      v10 = 0; /*0x5404df*/
      if ( Game_PlayerCount > 0 ) /*0x5404e3*/
      {
        while ( !GUID::Compare((char *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * v10) + 40), (int)v21) ) /*0x5404fd*/
        {
          if ( ++v10 >= Game_PlayerCount ) /*0x540507*/
            goto LABEL_13; /*0x540507*/
        }
        v9 = *(_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * v10) + 111); /*0x540514*/
      }
  LABEL_13:
      LinkedIndex = Factory::GetLinkedIndex(&g_NetworkEventQueue, v9); /*0x540517*/
      if ( !LinkedIndex ) /*0x540524*/
        LinkedIndex = 1; /*0x540526*/
      v7 = v16; /*0x540528*/
      *(_BYTE *)(a2 + 3) = LinkedIndex; /*0x54052c*/
    }
    v18 = dword_A8DBA4; /*0x540540*/
    v12 = *(_DWORD *)&dword_841F3C; /*0x54054a*/
    v19 = dword_A8DBA8; /*0x540550*/
    v20 = dword_A8DBAC; /*0x540554*/
    if ( GUID::Compare((char *)&dword_A8DBB0, *(_DWORD *)Game_PlayerInfoArray + 40) /*0x54057b*/
      && NetworkID::Compare((int)&v18, *(_DWORD *)Game_PlayerInfoArray + 40) )
    {
      v13 = a2 + 8; /*0x540584*/
      *(_WORD *)(a2 + 12) = 0; /*0x540587*/
      *(_DWORD *)(a2 + 8) = 0; /*0x54058d*/
    }
    else
    {
      v12 = dword_A8DBBC; /*0x54059b*/
      *(_WORD *)(a2 + 12) = dword_841F3C; /*0x5405a4*/
      *(_DWORD *)(a2 + 8) = 0; /*0x5405a8*/
    }
  }
  else
  {
    v8 = a2; /*0x5405b0*/
    v12 = aP3; /*0x5405b4*/
    v13 = a2 + 8; /*0x5405b8*/
    *(_WORD *)(a2 + 12) = 0; /*0x5405bb*/
    *(_DWORD *)(a2 + 8) = 0; /*0x5405c1*/
  }
  if ( g_NetworkInterface ) /*0x5405cf*/
  {
    LOBYTE(v13) = v7[200] == 0; /*0x5405da*/
    (*(void (__thiscall **)(int, int, int, int *, int, int, int, int))(*(_DWORD *)g_NetworkInterface + 12))( /*0x5405f2*/
      g_NetworkInterface,
      v8,
      arg4,
      &v18,
      12,
      a6,
      v13,
      v12);
  }
  return 1; /*0x5405f5*/
}
// 0x5400D0
int IPXGlobalConnClass::CheckStatus()
{
  int v2; // esi
  _DWORD *v3; // ecx

  v2 = 0; /*0x5400d4*/
  v3 = (_DWORD *)*(this + 1); /*0x5400d6*/
  if ( (int)v3[14] > 0 ) /*0x5400de*/
  {
    do /*0x540104*/
    {
      if ( (*(_BYTE *)Terrain::GetTileType(v3, v2) & 2) != 0 ) /*0x5400e9*/
        PacketQueue::ReleaseEntry((_DWORD *)*(this + 1), 0, 0, v2--, 0, 0); /*0x5400f7*/
      v3 = (_DWORD *)*(this + 1); /*0x5400fd*/
      ++v2; /*0x540100*/
    }
    while ( v2 < v3[14] ); /*0x540104*/
  }
  return 1; /*0x540106*/
}
// 0x5402D0
int IPXGlobalConnClass::Send()
{
  int v2; // ebx
  int v3; // esi
  _DWORD *v4; // ecx
  int v5; // eax
  _DWORD *v6; // ecx
  int v8; // [esp+Ch] [ebp-414h] BYREF
  int v9; // [esp+10h] [ebp-410h] BYREF
  _BYTE v10[12]; // [esp+14h] [ebp-40Ch] BYREF
  _BYTE v11[1024]; // [esp+20h] [ebp-400h] BYREF

  v2 = 0; /*0x5402db*/
  v3 = 0; /*0x5402dd*/
  v4 = (_DWORD *)*(this + 1); /*0x5402df*/
  if ( (int)v4[10] > 0 ) /*0x5402e7*/
  {
    do /*0x540332*/
    {
      v5 = *(_DWORD *)Terrain::GetTileIndex(v4, v3); /*0x5402ef*/
      if ( (v5 & 4) != 0 && (v5 & 2) == 0 ) /*0x5402f7*/
      {
        Waypoint::InitInvalid(v10); /*0x5402fd*/
        v6 = (_DWORD *)*(this + 1); /*0x54030e*/
        v8 = 12; /*0x54031c*/
        PacketQueue::ExtractEntry(v6, v11, &v9, v3--, v10, &v8, 0); /*0x540324*/
        ++v2; /*0x54032a*/
      }
      v4 = (_DWORD *)*(this + 1); /*0x54032b*/
      ++v3; /*0x54032e*/
    }
    while ( v3 < v4[10] ); /*0x540332*/
  }
  return v2; /*0x540334*/
}
// 0x540340
int IPXGlobalConnClass::SendPacket(int a2, short a3)
{
  _DWORD *v4; // ecx
  int v5; // ebp
  int v6; // esi
  int TileIndex; // eax
  int v8; // edi
  _DWORD *v9; // ecx
  int v11; // [esp+Ch] [ebp-414h] BYREF
  int v12; // [esp+10h] [ebp-410h] BYREF
  _BYTE v13[12]; // [esp+14h] [ebp-40Ch] BYREF
  _BYTE v14[1024]; // [esp+20h] [ebp-400h] BYREF

  v4 = (_DWORD *)*(this + 1); /*0x54034b*/
  v5 = 0; /*0x54034e*/
  v6 = 0; /*0x540350*/
  if ( (int)v4[10] <= 0 ) /*0x540357*/
    return 0; /*0x5403de*/
  do /*0x5403cd*/
  {
    TileIndex = Terrain::GetTileIndex(v4, v6); /*0x54035f*/
    v8 = TileIndex; /*0x540364*/
    if ( (*(_BYTE *)TileIndex & 2) == 0 /*0x540392*/
      && *(_DWORD *)(TileIndex + 24)
      && NetworkID::Compare(*(_DWORD *)(TileIndex + 28), a2)
      && *(_WORD *)(v8 + 32) == a3 )
    {
      Waypoint::InitInvalid(v13); /*0x540398*/
      v9 = (_DWORD *)*(this + 1); /*0x5403b3*/
      v11 = 12; /*0x5403b7*/
      PacketQueue::ExtractEntry(v9, v14, &v12, v6--, v13, &v11, 0); /*0x5403bf*/
      ++v5; /*0x5403c5*/
    }
    v4 = (_DWORD *)*(this + 1); /*0x5403c6*/
    ++v6; /*0x5403c9*/
  }
  while ( v6 < v4[10] ); /*0x5403cd*/
  return v5; /*0x5403d2*/
}
// 0x540610
int IPXGlobalConnClass::Release(const void * a1, AnimClass * aP2, int aP3, char aP4)
{
  return ConnectionClass::sendAck((int)this, a1, aP2, aP3, aP4); /*0x540629*/
}
// 0x540630
int IPXGlobalConnClass::ddtor(int a2, int a3)
{
  return ConnectionClass::receivePacket(this, a2, a3); /*0x54063f*/
}
// 0x540650
int IPXGlobalConnClass::Connect(void * a2, signed int * a3)
{
  return ConnectionClass::processTileUpdate(this, a2, a3); /*0x54065f*/
}
// 0x540670
IPXGlobalConnClass * IPXGlobalConnClass::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 52); /*0x540673*/
  *this = &IPXGlobalConnClass::`vftable'; /*0x540679*/
  if ( v3 ) /*0x540681*/
  {
    __3_YAXPAX_Z(v3); /*0x540684*/
    *(this + 52) = 0; /*0x54068c*/
  }
  if ( *(this + 51) ) /*0x540696*/
  {
    __3_YAXPAX_Z((void *)*(this + 51)); /*0x5406a1*/
    *(this + 51) = 0; /*0x5406a9*/
  }
  *this = &IPXConnClass::`vftable'; /*0x5406b5*/
  ConnectionClass::dtor(this); /*0x5406bb*/
  if ( (a2 & 1) != 0 ) /*0x5406c5*/
    __3_YAXPAX_Z(this); /*0x5406c8*/
  return this; /*0x5406d2*/
}