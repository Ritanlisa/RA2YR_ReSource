// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/ConnectionClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Connection_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConnectionPointClass_9_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Conflict_WorldDominationTour_12_e4.hpp"

// 0x48B750
namespace gamemd {
int ConnectionClass::allocPacketSlot(const void * a2, signed int a3, const void * a4, signed int a5)
{
  int v6; // edx
  int v8; // ebx
  unsigned char *v9; // eax
  int v12; // ebx
  int v14; // eax

  v6 = this->Active; /*0x48b755*/
  if ( *(&this->PlayerIndex4) == v6 || a3 > this->LastPacketTime ) /*0x48b768*/
    return 0; /*0x48b768*/
  v8 = 0; /*0x48b76a*/
  if ( v6 <= 0 ) /*0x48b772*/
    goto LABEL_9; /*0x48b772*/
  v9 = (unsigned char *)*(&this->PlayerIndex3); /*0x48b774*/
  v9 = v9; /*0x48b777*/
  while ( (*v9 & 1) != 0 ) /*0x48b77c*/
  {
    ++v8; /*0x48b77e*/
    v9 += 24; /*0x48b77f*/
    if ( v8 >= v6 ) /*0x48b784*/
      goto LABEL_9; /*0x48b784*/
  }
  v8 = v8; /*0x48b78f*/
  if ( v8 == -1 ) /*0x48b793*/
  {
  LABEL_9:
    Debug::Log(); /*0x48b795*/
    return 0; /*0x48b7a7*/
  }
  v12 = 24 * v8; /*0x48b7ae*/
  *(unsigned int *)&v9[v12] |= 1u; /*0x48b7b7*/
  *(unsigned int *)(v12 + *(&this->PlayerIndex3)) &= ~2u; /*0x48b7c4*/
  *(unsigned int *)(*(&this->PlayerIndex3) + v12) &= ~4u; /*0x48b7d2*/
  g_PerformanceTickOffset = g_PerformanceTickOffset; /*0x48b7d9*/
  if ( g_LastPerformanceTick != -1 ) /*0x48b7e2*/
    g_PerformanceTickOffset += Timer::GetTicks() - g_LastPerformanceTick; /*0x48b7f4*/
  *(unsigned int *)(*(&this->PlayerIndex3) + v12 + 4) = g_PerformanceTickOffset; /*0x48b7fb*/
  *(unsigned int *)(*(&this->PlayerIndex3) + v12 + 8) = a3; /*0x48b806*/
  qmemcpy(*(void **)(*(&this->PlayerIndex3) + v12 + 12), a2, a3); /*0x48b816*/
  if ( a4 && a5 > 0 && a5 <= this->PacketsSent ) /*0x48b832*/
  {
    qmemcpy(*(void **)(*(&this->PlayerIndex3) + v12 + 20), a4, a5); /*0x48b842*/
    *(unsigned int *)(*(&this->PlayerIndex3) + v12 + 16) = a5; /*0x48b84e*/
  }
  else
  {
    *(unsigned int *)(*(&this->PlayerIndex3) + v12 + 16) = 0; /*0x48b857*/
  }
  *(unsigned int *)(*(&this->PlayerIndex6) + 4 * *(&this->PlayerIndex4)) = v8; /*0x48b86a*/
  v14 = *(&this->PlayerIndex5) + 1; /*0x48b874*/
  ++*(&this->PlayerIndex4); /*0x48b875*/
  *(&this->PlayerIndex5) = v14; /*0x48b878*/
  return 1; /*0x48b7a2*/
}
} // namespace gamemd
// 0x48BA10
namespace gamemd {
unsigned int ConnectionClass::initQueue(unsigned int a2)
{
  void * v2;
  unsigned int v3; // esi
  int v4; // eax
  void * v5;
  unsigned int v6; // eax
  void * result;

  v2 = (void *)(this->q018);
  if ( v2 == 256 ) /*0x48ba1c*/
  {
    v3 = a2 - this->q01C + this->PacketsReceived; /*0x48ba2c*/
    this->PacketsReceived = v3; /*0x48ba2e*/
    v4 = ((uint8_t)v3 > 0x7Fu) + (v3 >> 8); /*0x48ba46*/
  }
  else
  {
    v5 = (void *)((unsigned int)(v2 + 1));
    v6 = (unsigned int)(a2 + this->PacketsReceived);
    this->q018 = (unsigned int)(v5);
    this->PacketsReceived = v6; /*0x48ba5b*/
    v4 = v6 / v5; /*0x48ba5e*/
  }
  this->q01C = (unsigned int)(v4);
  result = (void *)((unsigned int)(this->q020));
  if ( a2 > result ) /*0x48ba68*/
    this->q020 = a2; /*0x48ba6a*/
  return result; /*0x48ba6d*/
}
} // namespace gamemd
// 0x48BEE0
namespace gamemd {
void ConnectionClass::dtor()
{
  void *v2; // eax
  void (__thiscall ***v3)(unsigned int, int); // ecx

  v2 = (void *)this->q020; /*0x48bee3*/
  RA2_OPDEL(v2); /*0x48beed*/
  v3 = (void (__thiscall ***)(unsigned int, int))this->PlayerIndex; /*0x48bef2*/
  if ( v3 ) /*0x48befb*/
    (**v3)(v3, 1); /*0x48bf01*/
}
} // namespace gamemd
// 0x48BF40
namespace gamemd {
AbstractClass * * ConnectionClass::sendAck(AnimClass * aP1, AnimClass * aP2, AnimClass * aP3, AnimClass * aP4)
{
  **(unsigned short *)&this->q040 = *(unsigned short *)&this->q048; /*0x48bf4b*/
  if ( aP3 ) /*0x48bf54*/
  {
    *(unsigned char *)(this->q020 + 2) = 0; /*0x48bf59*/
    *(unsigned int *)(this->q020 + 4) = this->q040; /*0x48bf63*/
    Debug::Log(); /*0x48bf6f*/
  }
  else
  {
    *(unsigned char *)(this->q020 + 2) = 1; /*0x48bf7c*/
    *(unsigned int *)(this->q020 + 4) = this->q03C; /*0x48bf86*/
  }
  if ( g_GameMode_Current[0] == 4 && g_Network_IsHosting ) /*0x48bf99*/
    *(unsigned char *)(this->q020 + 3) = aP4; /*0x48bfa2*/
  if ( this->q01C < aP2 ) /*0x48bfae*/
  {
    Debug::Log(); /*0x48bfb6*/
    Debug::Log(); /*0x48bfc1*/
    return 0; /*0x48bfcd*/
  }
  qmemcpy((void *)(this->q020 + 14), aP1, aP2); /*0x48bfe5*/
  if ( !ConnectionClass::queueSendPacket(this->q020, aP2 + 14, 0, 0, 0) ) /*0x48c006*/
    return 0; /*0x48c006*/
  if ( aP3 ) /*0x48c00e*/
    ++this->q040; /*0x48c015*/
  else
    ++this->q03C; /*0x48c026*/
  return 1; /*0x48bfc9*/
}
} // namespace gamemd
// 0x48C040
namespace gamemd {
int ConnectionClass::receivePacket(int a2, int a3)
{
  char v5; // al
  unsigned int *v6; // ecx
  int v7; // edi
  unsigned int *TileIndex; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int *v13; // ecx
  int v14; // edi
  int TileType; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  unsigned int *v19; // ecx
  int v20; // edi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  void * v25;
  char v26; // [esp+12h] [ebp-Eh]
  unsigned char v27[13]; // [esp+13h] [ebp-Dh]

  if ( *(unsigned short *)a2 != this->q024 ) /*0x48c054*/
  {
    ++this->q018; /*0x48c05b*/
    return 0; /*0x48c066*/
  }
  v5 = *(unsigned char *)(a2 + 2); /*0x48c069*/
  if ( v5 != 2 ) /*0x48c06e*/
  {
    if ( v5 == 1 ) /*0x48c0d5*/
    {
      if ( *(unsigned int *)(this->PlayerIndex + 8) - *(unsigned int *)(this->PlayerIndex + 56) > 1 ) /*0x48c0e9*/
      {
        if ( ConnectionClass::allocPacketSlot(a2, a3, 0, 0) ) /*0x48c115*/
        {
          v10 = *(&this->PlayerIndex3) + 1; /*0x48c14b*/
          *(&this->PlayerIndex3) = v10; /*0x48c14c*/
          this->LastPacketTime = *(unsigned int *)(a2 + 4) - v10 + 1; /*0x48c155*/
          v11 = *(unsigned int *)(a2 + 4); /*0x48c158*/
          if ( v11 ) /*0x48c15d*/
            this->PacketsSent = 100 - 100 * v10 / (unsigned int)(v11 + 1); /*0x48c174*/
          return 1; /*0x48c17a*/
        }
        else
        {
          Debug::Log(); /*0x48c12d*/
          ++this->PacketsReceived; /*0x48c139*/
          return 0; /*0x48c13f*/
        }
      }
      else
      {
        ++this->PacketsReceived; /*0x48c0f4*/
        Debug::Log(); /*0x48c0f7*/
        return 0; /*0x48c0ff*/
      }
    }
    if ( !v5 ) /*0x48c188*/
    {
      v12 = *(&this->PlayerIndex7); /*0x48c18e*/
      if ( *(unsigned int *)(a2 + 4) <= v12 && v12 != -1 ) /*0x48c19b*/
      {
  LABEL_40:
        v23 = *(unsigned int *)(a2 + 4); /*0x48c288*/
        v25 = this->q024; /*0x48c28f*/
        v26 = 2; /*0x48c29c*/
        *(unsigned int *)&v27[1] = v23; /*0x48c2a1*/
        if ( g_Network_IsHosting ) /*0x48c2a5*/
          v27[0] = *(unsigned char *)(a2 + 3); /*0x48c2aa*/
        else
          v27[0] = 0; /*0x48c2b0*/
        Debug::Log(); /*0x48c2c6*/
        dword_A8EA0C = dword_A8EA0C; /*0x48c2cb*/
        IDA_LOBYTE(dword_A8EA0C) = this == (unsigned int *)dword_A8EA0C; /*0x48c2d7*/
        (*(void (__thiscall **)(unsigned int *, int16_t *, int, unsigned int, unsigned int, int, unsigned int))(*&this->q024))( /*0x48c2ea*/
          this,
          &v25,
          14,
          0,
          0,
          dword_A8EA0C,
          0);
        return 1; /*0x48c2f9*/
      }
      v13 = (unsigned int *)this->PlayerIndex; /*0x48c1a1*/
      v14 = 0; /*0x48c1a4*/
      if ( (int)v13[14] > 0 ) /*0x48c1ab*/
      {
        do /*0x48c1ae*/
        {
          TileType = Terrain::GetTileType(v13, v14); /*0x48c1ae*/
          if ( TileType ) /*0x48c1b5*/
          {
            v16 = *(unsigned int *)(TileType + 12); /*0x48c1b7*/
            if ( !*(unsigned char *)(v16 + 2) && *(unsigned int *)(v16 + 4) == *(unsigned int *)(a2 + 4) ) /*0x48c1c9*/
              goto LABEL_40; /*0x48c1c9*/
          }
          v13 = (unsigned int *)this->PlayerIndex; /*0x48c1cf*/
        }
        while ( ++v14 < v13[14] ); /*0x48c1ae*/
      }
      if ( (*(unsigned int *)(this->PlayerIndex + 8) - *(unsigned int *)(this->PlayerIndex + 56) > 1 || *(unsigned int *)(a2 + 4) == *(&this->PlayerIndex7) + 1) /*0x48c216*/
        && ConnectionClass::allocPacketSlot(a2, a3, 0, 0) )
      {
        v17 = *(&this->PlayerIndex7) + 1; /*0x48c23f*/
        ++*(&this->PlayerIndex4); /*0x48c240*/
        v18 = *(unsigned int *)(a2 + 4); /*0x48c243*/
        if ( v18 == v17 ) /*0x48c248*/
        {
          while ( 1 ) /*0x48c24a*/
          {
            v19 = (unsigned int *)this->PlayerIndex; /*0x48c24a*/
            *(&this->PlayerIndex7) = v18; /*0x48c24d*/
            v20 = 0; /*0x48c250*/
            if ( (int)v19[14] <= 0 ) /*0x48c257*/
              break; /*0x48c257*/
            while ( 1 ) /*0x48c25a*/
            {
              v21 = Terrain::GetTileType(v19, v20); /*0x48c25a*/
              if ( v21 ) /*0x48c261*/
              {
                v22 = *(unsigned int *)(v21 + 12); /*0x48c263*/
                if ( !*(unsigned char *)(v22 + 2) && *(unsigned int *)(v22 + 4) == *(&this->PlayerIndex7) + 1 ) /*0x48c276*/
                  break; /*0x48c276*/
              }
              v19 = (unsigned int *)this->PlayerIndex; /*0x48c278*/
              if ( ++v20 >= v19[14] ) /*0x48c27f*/
                goto LABEL_40; /*0x48c27f*/
            }
            v18 = *(unsigned int *)(v22 + 4); /*0x48c283*/
          }
        }
        goto LABEL_40; /*0x48c257*/
      }
    }
    Debug::Log(); /*0x48c301*/
    return 0; /*0x48c309*/
  }
  Debug::Log(); /*0x48c079*/
  v6 = (unsigned int *)this->PlayerIndex; /*0x48c07e*/
  v7 = 0; /*0x48c084*/
  if ( (int)v6[10] > 0 ) /*0x48c08b*/
  {
    while ( 1 ) /*0x48c08e*/
    {
      TileIndex = (unsigned int *)Terrain::GetTileIndex(v6, v7); /*0x48c08e*/
      if ( TileIndex ) /*0x48c095*/
      {
        v9 = TileIndex[5]; /*0x48c097*/
        if ( *(unsigned int *)(a2 + 4) == *(unsigned int *)(v9 + 4) && !*(unsigned char *)(v9 + 2) ) /*0x48c0a2*/
          break; /*0x48c0a2*/
      }
      v6 = (unsigned int *)this->PlayerIndex; /*0x48c0a9*/
      if ( ++v7 >= v6[10] ) /*0x48c0b0*/
        return 1; /*0x48c0be*/
    }
    *TileIndex |= 2u; /*0x48c0c1*/
  }
  return 1; /*0x48c059*/
}
} // namespace gamemd
// 0x48C320
namespace gamemd {
int ConnectionClass::processTileUpdate(void * a2, signed int * a3)
{
  int v4; // esi
  unsigned int *v5; // ecx
  int TileType; // eax
  int v7; // ecx
  char v8; // dl
  signed int v10; // edx
  bool v11; // zf

  v4 = 0; /*0x48c326*/
  v5 = (unsigned int *)this->PlayerIndex; /*0x48c328*/
  if ( (int)v5[14] <= 0 ) /*0x48c330*/
    return 0; /*0x48c36a*/
  while ( 1 ) /*0x48c333*/
  {
    TileType = Terrain::GetTileType(v5, v4); /*0x48c333*/
    if ( !TileType || (*(unsigned char *)TileType & 2) != 0 ) /*0x48c33f*/
      goto LABEL_7; /*0x48c33f*/
    v7 = *(unsigned int *)(TileType + 12); /*0x48c341*/
    v8 = *(unsigned char *)(v7 + 2); /*0x48c344*/
    if ( !v8 && *(unsigned int *)(v7 + 4) == *(&this->PlayerIndex8) + 1 ) /*0x48c354*/
      break; /*0x48c354*/
    if ( v8 == 1 ) /*0x48c359*/
      goto LABEL_10; /*0x48c359*/
  LABEL_7:
    v5 = (unsigned int *)this->PlayerIndex; /*0x48c35b*/
    if ( ++v4 >= v5[14] ) /*0x48c362*/
      return 0; /*0x48c362*/
  }
  *(&this->PlayerIndex8) = *(unsigned int *)(v7 + 4); /*0x48c370*/
  LABEL_10:
  v10 = *(unsigned int *)(TileType + 8) - 14; /*0x48c373*/
  v11 = *(unsigned int *)(TileType + 8) == 14; /*0x48c37e*/
  *(unsigned int *)TileType |= 2u; /*0x48c380*/
  if ( v10 >= 0 && !v11 ) /*0x48c382*/
    qmemcpy(a2, (const void *)(*(unsigned int *)(TileType + 12) + 14), v10); /*0x48c395*/
  *v10 = v10; /*0x48c3a5*/
  return 1; /*0x48c364*/
}
} // namespace gamemd
// 0x48C3E0
namespace gamemd {
int ConnectionClass::serviceSendQueue()
{
  int v2; // esi
  unsigned int *v3; // ecx
  int TileIndex; // eax
  int v5; // ebx
  int v7; // ebx
  int v8; // esi
  int v10; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ebp
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  int v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+1Ch] [ebp-4h]

  v2 = 0; /*0x48c3e9*/
  v21 = 0; /*0x48c3eb*/
  v3 = (unsigned int *)this->PlayerIndex; /*0x48c3f3*/
  if ( (int)v3[10] > 0 ) /*0x48c3fb*/
  {
    do /*0x48c45f*/
    {
      TileIndex = Terrain::GetTileIndex(v3, v2); /*0x48c3fe*/
      v5 = TileIndex; /*0x48c403*/
      if ( (*(unsigned char *)TileIndex & 2) != 0 ) /*0x48c408*/
      {
        if ( !*(unsigned char *)(*(unsigned int *)(TileIndex + 20) + 2) ) /*0x48c40d*/
        {
          g_PerformanceTickOffset = g_PerformanceTickOffset; /*0x48c419*/
          if ( g_LastPerformanceTick != -1 ) /*0x48c422*/
            g_PerformanceTickOffset += Timer::GetTicks() - g_LastPerformanceTick; /*0x48c434*/
          ConnectionClass::initQueue(g_PerformanceTickOffset - *(unsigned int *)(v5 + 4)); /*0x48c43f*/
        }
        PacketQueue::ExtractEntry(0, 0, v2--, 0, 0, 0); /*0x48c452*/
      }
      v3 = (unsigned int *)this->PlayerIndex; /*0x48c458*/
      ++v2; /*0x48c45b*/
    }
    while ( v2 < v3[10] ); /*0x48c45f*/
  }
  v7 = 0; /*0x48c464*/
  v22 = *(unsigned int *)(this->PlayerIndex + 40); /*0x48c46b*/
  if ( v22 <= 0 ) /*0x48c46f*/
    return 1; /*0x48c46f*/
  do /*0x48c552*/
  {
    v8 = Terrain::GetTileIndex((unsigned int *)this->PlayerIndex, v7); /*0x48c47e*/
    if ( (*(unsigned char *)v8 & 2) == 0 ) /*0x48c483*/
    {
      g_PerformanceTickOffset = g_PerformanceTickOffset; /*0x48c48e*/
      if ( g_LastPerformanceTick != -1 ) /*0x48c497*/
        g_PerformanceTickOffset += Timer::GetTicks() - g_LastPerformanceTick; /*0x48c4a9*/
      v10 = *(unsigned int *)(v8 + 8); /*0x48c4ab*/
      if ( g_PerformanceTickOffset - v10 > *(&this->PlayerIndex0) ) /*0x48c4b7*/
      {
        dword_A8EA0C = dword_A8EA0C; /*0x48c4bd*/
        IDA_LOWORD(v10) = *(unsigned short *)(v8 + 32); /*0x48c4c3*/
        IDA_LOBYTE(dword_A8EA0C) = this == (unsigned int *)dword_A8EA0C; /*0x48c4cb*/
        (*(void (__thiscall **)(unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int, int, int))(*&this->q024))( /*0x48c4e2*/
          this,
          *(unsigned int *)(v8 + 20),
          *(unsigned int *)(v8 + 16),
          *(unsigned int *)(v8 + 28),
          *(unsigned int *)(v8 + 24),
          dword_A8EA0C,
          v10);
        v12 = *(unsigned int *)(v8 + 12); /*0x48c4e5*/
        *(unsigned int *)(v8 + 8) = g_PerformanceTickOffset; /*0x48c4e8*/
        if ( v12 ) /*0x48c4ed*/
        {
          ++this->Active; /*0x48c503*/
        }
        else
        {
          v13 = *(unsigned int *)(v8 + 20); /*0x48c4ef*/
          *(unsigned int *)(v8 + 4) = g_PerformanceTickOffset; /*0x48c4f2*/
          if ( *(unsigned char *)(v13 + 2) == 1 ) /*0x48c4f9*/
          {
            v14 = *(unsigned int *)v8; /*0x48c4fb*/
            IDA_LOBYTE(v14) = *(unsigned int *)v8 | 2; /*0x48c4fd*/
            *(unsigned int *)v8 = v14; /*0x48c4ff*/
          }
        }
        v15 = *(unsigned int *)(v8 + 12) + 1; /*0x48c509*/
        *(unsigned int *)(v8 + 12) = v15; /*0x48c50a*/
        v16 = *(&this->PlayerIndex1); /*0x48c50d*/
        if ( v16 != -1 && v15 > v16 ) /*0x48c519*/
        {
          v17 = *(unsigned int *)v8; /*0x48c51b*/
          v21 = 1; /*0x48c51d*/
          IDA_LOBYTE(v17) = *(unsigned int *)v8 | 4; /*0x48c525*/
          *(unsigned int *)v8 = v17; /*0x48c527*/
        }
        v18 = *(&this->PlayerIndex2); /*0x48c529*/
        if ( v18 != -1 && *(unsigned int *)(v8 + 8) - *(unsigned int *)(v8 + 4) > v18 ) /*0x48c53b*/
        {
          v19 = *(unsigned int *)v8; /*0x48c53d*/
          v21 = 1; /*0x48c53f*/
          IDA_LOBYTE(v19) = *(unsigned int *)v8 | 4; /*0x48c547*/
          *(unsigned int *)v8 = v19; /*0x48c549*/
        }
      }
    }
    ++v7; /*0x48c54f*/
  }
  while ( v7 < v22 ); /*0x48c552*/
  if ( !v21 ) /*0x48c55e*/
    return 1; /*0x48c57a*/
  Debug::Log(); /*0x48c565*/
  return 0; /*0x48c56f*/
}
} // namespace gamemd
// 0x48C590
namespace gamemd {
int ConnectionClass::StubReturnFalse()
{
  return 0; /*0x48c592*/
}
} // namespace gamemd