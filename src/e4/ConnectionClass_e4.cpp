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
#include "e4/classes/ConnectionPointClass_e4.hpp"
#include "e4/classes/PacketQueue_e4.hpp"

// 0x48B750
namespace gamemd {  // G42.18 ns repair
int ConnectionClass::allocPacketSlot(const void *a2, signed int a3, const void *a4, signed int a5, int aP1, int aP2, int aP3, int aP4)
{

  int v6; // edx
  signed int v8; // ebx
  int v9; // eax
  unsigned char *v10; // ecx
  int v12; // ebx
  int v13; // esi
  int v14; // eax
  signed int v15; // [esp+14h] [ebp+8h]

  v6 = *(unsigned int *)aP1->Active; /*0x48b755*/
  if ( aP1->PhoneNumber[8] == v6 || aP1 > aP1->LastPacketTime ) /*0x48b768*/
    return 0; /*0x48b768*/
  v8 = 0; /*0x48b76a*/
  if ( v6 <= 0 ) /*0x48b772*/
    goto LABEL_9; /*0x48b772*/
  v9 = aP1->PhoneNumber[7]; /*0x48b774*/
  v10 = (unsigned char *)v9; /*0x48b777*/
  while ( (*v10 & 1) != 0 ) /*0x48b77c*/
  {
    ++v8; /*0x48b77e*/
    v10 += 24; /*0x48b77f*/
    if ( v8 >= v6 ) /*0x48b784*/
      goto LABEL_9; /*0x48b784*/
  }
  v15 = v8; /*0x48b78f*/
  if ( v8 == -1 ) /*0x48b793*/
  {
LABEL_9:
    Debug::Log(); /*0x48b795*/
    return 0; /*0x48b7a7*/
  }
  v12 = 24 * v8; /*0x48b7ae*/
  *(unsigned int *)(v9 + v12) |= 1u; /*0x48b7b7*/
  *(unsigned int *)(v12 + aP1->PhoneNumber[7]) &= ~2u; /*0x48b7c4*/
  *(unsigned int *)(aP1->PhoneNumber[7] + v12) &= ~4u; /*0x48b7d2*/
  v13 = dword_887340; /*0x48b7d9*/
  if ( dword_887338 != -1 ) /*0x48b7e2*/
    v13 += Timer::GetTicks() - dword_887338; /*0x48b7f4*/
  *(unsigned int *)(aP1->PhoneNumber[7] + v12 + 4) = v13; /*0x48b7fb*/
  *(unsigned int *)(aP1->PhoneNumber[7] + v12 + 8) = aP1; /*0x48b806*/
  qmemcpy(*(void **)(aP1->PhoneNumber[7] + v12 + 12), aP1, aP1); /*0x48b816*/
  if ( aP1 && aP1 > 0 && aP1 <= aP1->PacketsSent ) /*0x48b832*/
  {
    qmemcpy(*(void **)(aP1->PhoneNumber[7] + v12 + 20), aP1, aP1); /*0x48b842*/
    *(unsigned int *)(aP1->PhoneNumber[7] + v12 + 16) = aP1; /*0x48b84e*/
  }
  else
  {
    *(unsigned int *)(aP1->PhoneNumber[7] + v12 + 16) = 0; /*0x48b857*/
  }
  *(unsigned int *)(aP1->PhoneNumber[10] + 4 * aP1->PhoneNumber[8]) = v15; /*0x48b86a*/
  v14 = aP1->PhoneNumber[9] + 1; /*0x48b874*/
  ++aP1->PhoneNumber[8]; /*0x48b875*/
  aP1->PhoneNumber[9] = v14; /*0x48b878*/
  return 1; /*0x48b7a2*/

}
} // namespace gamemd
// 0x48BA10
namespace gamemd {
int ConnectionClass::initQueue(unsigned int a2)
{

  int v2; // eax
  unsigned int v3; // esi
  int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int result; // eax

  v2 = this->u32_18; /*0x48ba10*/
  if ( v2 == 256 ) /*0x48ba1c*/
  {
    v3 = a2 - this->u32_1C + this->PacketsReceived; /*0x48ba2c*/
    this->PacketsReceived = v3; /*0x48ba2e*/
    v4 = ((unsigned __int8)v3 > 0x7Fu) + (v3 >> 8); /*0x48ba46*/
  }
  else
  {
    v5 = v2 + 1; /*0x48ba4e*/
    v6 = a2 + this->PacketsReceived; /*0x48ba56*/
    this->u32_18 = v5; /*0x48ba58*/
    this->PacketsReceived = v6; /*0x48ba5b*/
    v4 = v6 / v5; /*0x48ba5e*/
  }
  this->u32_1C = v4; /*0x48ba60*/
  result = this->q020; /*0x48ba63*/
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
  void (***PlayerIndex)(unsigned int, int); // ecx

  v2 = (void *)this->q020; /*0x48bee3*/
  /* X11: vtable install elided (implicit via ConnectionClass virtuals 0x48bee6) */
  __3_YAXPAX_Z(v2); /*0x48beed*/
  PlayerIndex = (void (***)(unsigned int, int))this->PlayerIndex; /*0x48bef2*/
  if ( PlayerIndex ) /*0x48befb*/
    (**PlayerIndex)(PlayerIndex, 1); /*0x48bf01*/

}
} // namespace gamemd
// 0x48BF40
namespace gamemd {
AbstractClass * * ConnectionClass::sendAck(AnimClass * aP1, AnimClass * aP2, AnimClass * aP3, AnimClass * aP4, void *a5)
{
  *aP1->needsRedraw = aP1->objectTypeFlags; /*0x48bf4b*/
  if ( aP4 ) /*0x48bf54*/
  {
    *(unsigned char *)(aP1->needsRedraw + 2) = 0; /*0x48bf59*/
    *(unsigned int *)(aP1->needsRedraw + 4) = aP1->uniqueId; /*0x48bf63*/
    Debug::Log(); /*0x48bf6f*/
  }
  else
  {
    *(unsigned char *)(aP1->needsRedraw + 2) = 1; /*0x48bf7c*/
    *(unsigned int *)(aP1->needsRedraw + 4) = aP1->ambientSoundController; /*0x48bf86*/
  }
  if ( ((unsigned int *)(dword_A8B238))[0] == 4 && byte_A8DBA0 ) /*0x48bf99*/
    *(unsigned char *)(aP1->needsRedraw + 3) = a5; /*0x48bfa2*/
  if ( aP1->estimatedHealth < (char [4])(aP3) ) /*0x48bfae*/
  {
    Debug::Log(); /*0x48bfb6*/
    Debug::Log(); /*0x48bfc1*/
    return 0; /*0x48bfcd*/
  }
  memcpy((void *)(aP1->needsRedraw + 14), aP2, aP3); /*0x48bfe5*/
  if ( !ConnectionClass::queueSendPacket(aP1->needsRedraw, aP3 + 14, 0, 0, 0) ) /*0x48c006*/
    return 0; /*0x48c006*/
  if ( aP4 ) /*0x48c00e*/
    ++aP1->uniqueId; /*0x48c015*/
  else
    ++aP1->ambientSoundController; /*0x48c026*/
  return (gamemd::AbstractClass **)(1); /*0x48bfc9*/
}
} // namespace gamemd
// 0x48C040
namespace gamemd {
int ConnectionClass::receivePacket(int a2, int a3)
{

  char v5; // al
  int v6; // ecx
  int v7; // edi
  unsigned int *TileIndex; // eax
  int v9; // ecx
  int PlayerIndex; // ecx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  Terrain *v14; // ecx
  int v15; // edi
  int TileType; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  Terrain *v21; // ecx
  int v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int16 v27; // [esp+10h] [ebp-10h] BYREF
  char v28; // [esp+12h] [ebp-Eh]
  unsigned char v29[13]; // [esp+13h] [ebp-Dh]

  if ( *(unsigned short *)a2 != LOWORD(this->PhoneNumber[3]) ) /*0x48c054*/
  {
    ++this->PhoneNumber[0]; /*0x48c05b*/
    return 0; /*0x48c066*/
  }
  v5 = *(unsigned char *)(a2 + 2); /*0x48c069*/
  if ( v5 != 2 ) /*0x48c06e*/
  {
    if ( v5 == 1 ) /*0x48c0d5*/
    {
      PlayerIndex = this->PlayerIndex; /*0x48c0db*/
      if ( *(unsigned int *)(PlayerIndex + 8) - *(unsigned int *)(PlayerIndex + 56) > 1 ) /*0x48c0e9*/
      {
        if ( ConnectionClass::allocPacketSlot((ModemConnectionClass *)PlayerIndex, (const void *)a2, a3, 0, 0) ) /*0x48c115*/
        {
          v11 = this->PhoneNumber[7] + 1; /*0x48c14b*/
          this->PhoneNumber[7] = v11; /*0x48c14c*/
          this->LastPacketTime = *(unsigned int *)(a2 + 4) - v11 + 1; /*0x48c155*/
          v12 = *(unsigned int *)(a2 + 4); /*0x48c158*/
          if ( v12 ) /*0x48c15d*/
            this->PacketsSent = 100 - 100 * v11 / (unsigned int)(v12 + 1); /*0x48c174*/
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
      v13 = this->PhoneNumber[11]; /*0x48c18e*/
      if ( *(unsigned int *)(a2 + 4) <= v13 && v13 != -1 ) /*0x48c19b*/
      {
LABEL_40:
        v25 = *(unsigned int *)(a2 + 4); /*0x48c288*/
        v27 = this->PhoneNumber[3]; /*0x48c28f*/
        v28 = 2; /*0x48c29c*/
        *(unsigned int *)&v29[1] = v25; /*0x48c2a1*/
        if ( byte_A8DBA0 ) /*0x48c2a5*/
          v29[0] = *(unsigned char *)(a2 + 3); /*0x48c2aa*/
        else
          v29[0] = 0; /*0x48c2b0*/
        Debug::Log(); /*0x48c2c6*/
        v26 = dword_A8EA0C; /*0x48c2cb*/
        LOBYTE(v26) = this == (ModemConnectionClass *)dword_A8EA0C; /*0x48c2d7*/
        (*(void (**)(ModemConnectionClass *, __int16 *, int, unsigned int, unsigned int, int, unsigned int))(*(unsigned int *)this->vtable1 + 36))( /*0x48c2ea*/
          this,
          &v27,
          14,
          0,
          0,
          v26,
          0);
        return 1; /*0x48c2f9*/
      }
      v14 = (Terrain *)this->PlayerIndex; /*0x48c1a1*/
      v15 = 0; /*0x48c1a4*/
      if ( v14->q038 > 0 ) /*0x48c1ab*/
      {
        do /*0x48c1ae*/
        {
          TileType = Terrain::GetTileType(v14, v15); /*0x48c1ae*/
          if ( TileType ) /*0x48c1b5*/
          {
            v17 = *(unsigned int *)(TileType + 12); /*0x48c1b7*/
            if ( !*(unsigned char *)(v17 + 2) && *(unsigned int *)(v17 + 4) == *(unsigned int *)(a2 + 4) ) /*0x48c1c9*/
              goto LABEL_40; /*0x48c1c9*/
          }
          v14 = (Terrain *)this->PlayerIndex; /*0x48c1cf*/
        }
        while ( ++v15 < v14->q038 ); /*0x48c1ae*/
      }
      v18 = this->PlayerIndex; /*0x48c1d8*/
      if ( (*(unsigned int *)(v18 + 8) - *(unsigned int *)(v18 + 56) > 1 || *(unsigned int *)(a2 + 4) == this->PhoneNumber[11] + 1) /*0x48c216*/
        && ConnectionClass::allocPacketSlot((ModemConnectionClass *)v18, (const void *)a2, a3, 0, 0) )
      {
        v19 = this->PhoneNumber[11] + 1; /*0x48c23f*/
        ++this->PhoneNumber[8]; /*0x48c240*/
        v20 = *(unsigned int *)(a2 + 4); /*0x48c243*/
        if ( v20 == v19 ) /*0x48c248*/
        {
          while ( 1 ) /*0x48c24a*/
          {
            v21 = (Terrain *)this->PlayerIndex; /*0x48c24a*/
            this->PhoneNumber[11] = v20; /*0x48c24d*/
            v22 = 0; /*0x48c250*/
            if ( v21->q038 <= 0 ) /*0x48c257*/
              break; /*0x48c257*/
            while ( 1 ) /*0x48c25a*/
            {
              v23 = Terrain::GetTileType(v21, v22); /*0x48c25a*/
              if ( v23 ) /*0x48c261*/
              {
                v24 = *(unsigned int *)(v23 + 12); /*0x48c263*/
                if ( !*(unsigned char *)(v24 + 2) && *(unsigned int *)(v24 + 4) == this->PhoneNumber[11] + 1 ) /*0x48c276*/
                  break; /*0x48c276*/
              }
              v21 = (Terrain *)this->PlayerIndex; /*0x48c278*/
              if ( ++v22 >= v21->q038 ) /*0x48c27f*/
                goto LABEL_40; /*0x48c27f*/
            }
            v20 = *(unsigned int *)(v24 + 4); /*0x48c283*/
          }
        }
        goto LABEL_40; /*0x48c257*/
      }
    }
    Debug::Log(); /*0x48c301*/
    return 0; /*0x48c309*/
  }
  Debug::Log(); /*0x48c079*/
  v6 = this->PlayerIndex; /*0x48c07e*/
  v7 = 0; /*0x48c084*/
  if ( *(int *)(v6 + 40) > 0 ) /*0x48c08b*/
  {
    while ( 1 ) /*0x48c08e*/
    {
      TileIndex = (unsigned int *)Terrain::GetTileIndex((Terrain *)v6, v7); /*0x48c08e*/
      if ( TileIndex ) /*0x48c095*/
      {
        v9 = TileIndex[5]; /*0x48c097*/
        if ( *(unsigned int *)(a2 + 4) == *(unsigned int *)(v9 + 4) && !*(unsigned char *)(v9 + 2) ) /*0x48c0a2*/
          break; /*0x48c0a2*/
      }
      v6 = this->PlayerIndex; /*0x48c0a9*/
      if ( ++v7 >= *(unsigned int *)(v6 + 40) ) /*0x48c0b0*/
        return 1; /*0x48c0be*/
    }
    *TileIndex |= 2u; /*0x48c0c1*/
  }
  return 1; /*0x48c059*/

}
} // namespace gamemd
// 0x48C320
namespace gamemd {
int ConnectionClass::processTileUpdate(void *a2, signed int *a3)
{

  int v4; // esi
  Terrain *PlayerIndex; // ecx
  int TileType; // eax
  int v7; // ecx
  char v8; // dl
  int v10; // edx
  bool v11; // zf

  v4 = 0; /*0x48c326*/
  PlayerIndex = (Terrain *)this->PlayerIndex; /*0x48c328*/
  if ( PlayerIndex->u32_38 <= 0 ) /*0x48c330*/
    return 0; /*0x48c36a*/
  while ( 1 ) /*0x48c333*/
  {
    TileType = Terrain::GetTileType(PlayerIndex, v4); /*0x48c333*/
    if ( !TileType || (*(unsigned char *)TileType & 2) != 0 ) /*0x48c33f*/
      goto LABEL_7; /*0x48c33f*/
    v7 = *(unsigned int *)(TileType + 12); /*0x48c341*/
    v8 = *(unsigned char *)(v7 + 2); /*0x48c344*/
    if ( !v8 && *(unsigned int *)(v7 + 4) == this->PhoneNumber[12] + 1 ) /*0x48c354*/
      break; /*0x48c354*/
    if ( v8 == 1 ) /*0x48c359*/
      goto LABEL_10; /*0x48c359*/
LABEL_7:
    PlayerIndex = (Terrain *)this->PlayerIndex; /*0x48c35b*/
    if ( ++v4 >= PlayerIndex->u32_38 ) /*0x48c362*/
      return 0; /*0x48c362*/
  }
  this->PhoneNumber[12] = *(unsigned int *)(v7 + 4); /*0x48c370*/
LABEL_10:
  v10 = *(unsigned int *)(TileType + 8) - 14; /*0x48c373*/
  v11 = *(unsigned int *)(TileType + 8) == 14; /*0x48c37e*/
  *(unsigned int *)TileType |= 2u; /*0x48c380*/
  if ( v10 >= 0 && !v11 ) /*0x48c382*/
    qmemcpy(a2, (const void *)(*(unsigned int *)(TileType + 12) + 14), v10); /*0x48c395*/
  *a3 = v10; /*0x48c3a5*/
  return 1; /*0x48c364*/

}
} // namespace gamemd
// 0x48C3E0
namespace gamemd {
int ConnectionClass::serviceSendQueue()
{

  int v2; // esi
  int PlayerIndex; // ecx
  int TileIndex; // eax
  int v5; // ebx
  int v6; // ebp
  int v7; // ebx
  int v8; // esi
  int v9; // ebp
  int v10; // ecx
  int v11; // edx
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
  PlayerIndex = this->PlayerIndex; /*0x48c3f3*/
  if ( *(int *)(PlayerIndex + 40) > 0 ) /*0x48c3fb*/
  {
    do /*0x48c45f*/
    {
      TileIndex = Terrain::GetTileIndex((Terrain *)PlayerIndex, v2); /*0x48c3fe*/
      v5 = TileIndex; /*0x48c403*/
      if ( (*(unsigned char *)TileIndex & 2) != 0 ) /*0x48c408*/
      {
        if ( !*(unsigned char *)(*(unsigned int *)(TileIndex + 20) + 2) ) /*0x48c40d*/
        {
          v6 = dword_887340; /*0x48c419*/
          if ( dword_887338 != -1 ) /*0x48c422*/
            v6 += Timer::GetTicks() - dword_887338; /*0x48c434*/
          ConnectionClass::initQueue((ConnectionClass *)this->PlayerIndex, v6 - *(unsigned int *)(v5 + 4)); /*0x48c43f*/
        }
        PacketQueue::ExtractEntry((PacketQueue *)this->PlayerIndex, 0, 0, v2--, 0, 0, 0); /*0x48c452*/
      }
      PlayerIndex = this->PlayerIndex; /*0x48c458*/
      ++v2; /*0x48c45b*/
    }
    while ( v2 < *(unsigned int *)(PlayerIndex + 40) ); /*0x48c45f*/
  }
  v7 = 0; /*0x48c464*/
  v22 = *(unsigned int *)(this->PlayerIndex + 40); /*0x48c46b*/
  if ( v22 <= 0 ) /*0x48c46f*/
    return 1; /*0x48c46f*/
  do /*0x48c552*/
  {
    v8 = Terrain::GetTileIndex((Terrain *)this->PlayerIndex, v7); /*0x48c47e*/
    if ( (*(unsigned char *)v8 & 2) == 0 ) /*0x48c483*/
    {
      v9 = dword_887340; /*0x48c48e*/
      if ( dword_887338 != -1 ) /*0x48c497*/
        v9 += Timer::GetTicks() - dword_887338; /*0x48c4a9*/
      v10 = *(unsigned int *)(v8 + 8); /*0x48c4ab*/
      if ( (unsigned int)(v9 - v10) > this->PhoneNumber[4] ) /*0x48c4b7*/
      {
        v11 = dword_A8EA0C; /*0x48c4bd*/
        LOWORD(v10) = *(unsigned short *)(v8 + 32); /*0x48c4c3*/
        LOBYTE(v11) = this == (ModemConnectionClass *)dword_A8EA0C; /*0x48c4cb*/
        (*(void (**)(ModemConnectionClass *, unsigned int, unsigned int, unsigned int, unsigned int, int, int))(*(unsigned int *)this->vtable1 /*0x48c4e2*/
                                                                                                 + 36))(
          this,
          *(unsigned int *)(v8 + 20),
          *(unsigned int *)(v8 + 16),
          *(unsigned int *)(v8 + 28),
          *(unsigned int *)(v8 + 24),
          v11,
          v10);
        v12 = *(unsigned int *)(v8 + 12); /*0x48c4e5*/
        *(unsigned int *)(v8 + 8) = v9; /*0x48c4e8*/
        if ( v12 ) /*0x48c4ed*/
        {
          ++*(unsigned int *)this->Active; /*0x48c503*/
        }
        else
        {
          v13 = *(unsigned int *)(v8 + 20); /*0x48c4ef*/
          *(unsigned int *)(v8 + 4) = v9; /*0x48c4f2*/
          if ( *(unsigned char *)(v13 + 2) == 1 ) /*0x48c4f9*/
          {
            v14 = *(unsigned int *)v8; /*0x48c4fb*/
            LOBYTE(v14) = *(unsigned int *)v8 | 2; /*0x48c4fd*/
            *(unsigned int *)v8 = v14; /*0x48c4ff*/
          }
        }
        v15 = *(unsigned int *)(v8 + 12) + 1; /*0x48c509*/
        *(unsigned int *)(v8 + 12) = v15; /*0x48c50a*/
        v16 = this->PhoneNumber[5]; /*0x48c50d*/
        if ( v16 != -1 && v15 > v16 ) /*0x48c519*/
        {
          v17 = *(unsigned int *)v8; /*0x48c51b*/
          v21 = 1; /*0x48c51d*/
          LOBYTE(v17) = *(unsigned int *)v8 | 4; /*0x48c525*/
          *(unsigned int *)v8 = v17; /*0x48c527*/
        }
        v18 = this->PhoneNumber[6]; /*0x48c529*/
        if ( v18 != -1 && *(unsigned int *)(v8 + 8) - *(unsigned int *)(v8 + 4) > v18 ) /*0x48c53b*/
        {
          v19 = *(unsigned int *)v8; /*0x48c53d*/
          v21 = 1; /*0x48c53f*/
          LOBYTE(v19) = *(unsigned int *)v8 | 4; /*0x48c547*/
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