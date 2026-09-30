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

// 0x48B750
namespace gamemd {
int ConnectionClass::allocPacketSlot(void* a1, void* a2, void* a3)
{
  int v6; // edx
  signed int v8; // ebx
  int v9; // eax
  unsigned char *v10; // ecx
  int v12; // ebx
  int v13; // esi
  int v14; // eax
  signed int v15; // [esp+14h] [ebp+8h]

    v6 = *((unsigned int *)this + 8);
    if ( *((unsigned int *)this + 56) == v6 || a3 > *((unsigned int *)this + 12) )
    return 0; /*0x48b768*/
  v8 = 0; /*0x48b76a*/
  if ( v6 <= 0 ) /*0x48b772*/
    goto LABEL_9; /*0x48b772*/
  v9 = this-((unsigned int *)(>PhoneNumber))[7]; /*0x48b774*/
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
        Debug::Log();
    return 0; /*0x48b7a7*/
  }
  v12 = 24 * v8; /*0x48b7ae*/
  *(unsigned int *)(v9 + v12) |= 1u; /*0x48b7b7*/
  *(unsigned int *)(v12 + this-((unsigned int *)(>PhoneNumber))[7]) &= ~2u; /*0x48b7c4*/
  *(unsigned int *)(this-((unsigned int *)(>PhoneNumber))[7] + v12) &= ~4u; /*0x48b7d2*/
  v13 = dword_887340; /*0x48b7d9*/
  if ( dword_887338 != -1 ) /*0x48b7e2*/
        v13 += Timer::GetTicks() - MEMORY[0x887338];
  *(unsigned int *)(this-((unsigned int *)(>PhoneNumber))[7] + v12 + 4) = v13; /*0x48b7fb*/
  *(unsigned int *)(this-((unsigned int *)(>PhoneNumber))[7] + v12 + 8) = a3; /*0x48b806*/
  qmemcpy(*(void **)(this-((unsigned int *)(>PhoneNumber))[7] + v12 + 12), a2, a3); /*0x48b816*/
    if ( a4 && a5 > 0 && a5 <= *((unsigned int *)this + 16) )
  {
    qmemcpy(*(void **)(this-((unsigned int *)(>PhoneNumber))[7] + v12 + 20), a4, a5); /*0x48b842*/
    *(unsigned int *)(this-((unsigned int *)(>PhoneNumber))[7] + v12 + 16) = a5; /*0x48b84e*/
  }
  else
  {
    *(unsigned int *)(this-((unsigned int *)(>PhoneNumber))[7] + v12 + 16) = 0; /*0x48b857*/
  }
    *(unsigned int *)(*((unsigned int *)this + 64) + 4 * *((unsigned int *)this + 56)) = v15;
  v14 = this-((unsigned int *)(>PhoneNumber))[9] + 1; /*0x48b874*/
  ++this-((unsigned int *)(>PhoneNumber))[8]; /*0x48b875*/
  this-((unsigned int *)(>PhoneNumber))[9] = v14; /*0x48b878*/
  return 1; /*0x48b7a2*/
}
} // namespace gamemd
// 0x48BA10
namespace gamemd {
int ConnectionClass::initQueue(void* a1, void* a2, void* a3)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int result; // eax

    v2 = *((unsigned int *)this + 24);
  if ( v2 == 256 ) /*0x48ba1c*/
  {
        v3 = a2 - *((unsigned int *)this + 28) + *((unsigned int *)this + 20);
        *((unsigned int *)this + 20) = v3;
    v4 = ((uint8_t)v3 > 0x7Fu) + (v3 >> 8); /*0x48ba46*/
  }
  else
  {
    v5 = v2 + 1; /*0x48ba4e*/
        v6 = a2 + *((unsigned int *)this + 20);
        *((unsigned int *)this + 24) = v5;
        *((unsigned int *)this + 20) = v6;
    v4 = v6 / v5; /*0x48ba5e*/
  }
    *((unsigned int *)this + 28) = v4;
    result = *((unsigned int *)this + 32);
  if ( a2 > result ) /*0x48ba68*/
        *((unsigned int *)this + 32) = a2;
  return result; /*0x48ba6d*/
}
} // namespace gamemd
// 0x48BEE0
namespace gamemd {
void ConnectionClass::dtor()
{
  void *v2; // eax
  void (***PlayerIndex)(unsigned int, int); // ecx

  v2 = (void *)((unsigned int)((void *)this->Active));
  *(unsigned int *)this->__pad_0 = (void*)&ConnectionClass_vftable; /*0x48bee6*/
  RA2_OPDEL(v2); /*0x48beed*/
    v3 = (void (***)(unsigned int, int))*((unsigned int *)this + 4);
  if ( PlayerIndex ) /*0x48befb*/
    (**PlayerIndex)(PlayerIndex, 1); /*0x48bf01*/
}
} // namespace gamemd
// 0x48BF40
namespace gamemd {
AbstractClass * * ConnectionClass::sendAck(AnimClass * aP1, AnimClass * aP2, AnimClass * aP3, AnimClass * aP4)
{
    **(unsigned short **)((char *)this + 128) = *((unsigned short *)this + 144);
  if ( aP3 ) /*0x48bf54*/
  {
        *(unsigned char *)(*((unsigned int *)this + 128) + 2) = 0;
        *(unsigned int *)(*((unsigned int *)this + 128) + 4) = *((unsigned int *)this + 256);
        Debug::Log();
  }
  else
  {
        *(unsigned char *)(*((unsigned int *)this + 128) + 2) = 1;
        *(unsigned int *)(*((unsigned int *)this + 128) + 4) = *((unsigned int *)this + 240);
  }
  if ( ((unsigned int *)(dword_A8B238))[0] == 4 && byte_A8DBA0 ) /*0x48bf99*/
        *(unsigned char *)(*((unsigned int *)this + 128) + 3) = (unsigned char)aP4;
    if ( *((unsigned int *)this + 112) < (int)aP2 )
  {
        Debug::Log();
        Debug::Log();
    return 0; /*0x48bfcd*/
  }
    qmemcpy((void *)(*((unsigned int *)this + 128) + 14), aP1, (unsigned int)aP2);
  if ( !ConnectionClass::queueSendPacket(this->Active, aP2 + 14, 0, 0, 0) ) /*0x48c006*/
    return 0; /*0x48c006*/
  if ( aP3 ) /*0x48c00e*/
        ++*((unsigned int *)this + 256);
  else
        ++*((unsigned int *)this + 240);
  return 1; /*0x48bfc9*/
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
  int v21; // ecx
  int v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int16_t v27; // [esp+10h] [ebp-10h] BYREF
  char v28; // [esp+12h] [ebp-Eh]
  unsigned char v29[13]; // [esp+13h] [ebp-Dh]

    if ( *(unsigned short *)a2 != *((unsigned short *)this + 18) )
  {
        ++*((unsigned int *)this + 24);
    return 0; /*0x48c066*/
  }
  v5 = *(unsigned char *)(a2 + 2); /*0x48c069*/
  if ( v5 != 2 ) /*0x48c06e*/
  {
    if ( v5 == 1 ) /*0x48c0d5*/
    {
      PlayerIndex = (int)(this->PlayerIndex);
      if ( *(unsigned int *)(PlayerIndex + 8) - *(unsigned int *)(PlayerIndex + 56) > 1 ) /*0x48c0e9*/
      {
        if ( ConnectionClass::allocPacketSlot((ConnectionClass *)PlayerIndex, (const void *)a2, a3, 0, 0) ) /*0x48c115*/
        {
                    v10 = *((unsigned int *)this + 52) + 1;
                    *((unsigned int *)this + 52) = v10;
                    *((unsigned int *)this + 12) = *(unsigned int *)(a2 + 4) - v10 + 1;
          v12 = *(unsigned int *)(a2 + 4); /*0x48c158*/
          if ( v12 ) /*0x48c15d*/
                        *((unsigned int *)this + 16) = 100 - 100 * v10 / (unsigned int)(v11 + 1);
          return 1; /*0x48c17a*/
        }
        else
        {
                    Debug::Log();
                    ++*((unsigned int *)this + 20);
          return 0; /*0x48c13f*/
        }
      }
      else
      {
                ++*((unsigned int *)this + 20);
                Debug::Log();
        return 0; /*0x48c0ff*/
      }
    }
    if ( !v5 ) /*0x48c188*/
    {
            v12 = *((unsigned int *)this + 68);
      if ( *(unsigned int *)(a2 + 4) <= v13 && v13 != -1 ) /*0x48c19b*/
      {
  LABEL_40:
        v25 = *(unsigned int *)(a2 + 4); /*0x48c288*/
                v25 = *((unsigned short *)this + 18);
        v28 = 2; /*0x48c29c*/
        *(unsigned int *)&v29[1] = v25; /*0x48c2a1*/
        if ( unk_A8DBA0 ) /*0x48c2a5*/
          v29[0] = *(unsigned char *)(a2 + 3); /*0x48c2aa*/
        else
          v29[0] = 0; /*0x48c2b0*/
                Debug::Log();
        unk_A8EA0C = unk_A8EA0C; /*0x48c2cb*/
        IDA_LOBYTE(unk_A8EA0C) = this == (ConnectionClass *)unk_A8EA0C; /*0x48c2d7*/
                (*(void (**)(unsigned int *, __int16 *, int, unsigned int, unsigned int, int, unsigned int))(*(char *)this + 144))(
                                                                                               + 36))(
          this,
          &v27,
          14,
          0,
          0,
          unk_A8EA0C,
          0);
        return 1; /*0x48c2f9*/
      }
            v13 = (unsigned int *)*((unsigned int *)this + 4);
      v15 = 0; /*0x48c1a4*/
      if ( (int)v14->Terrain_field_0x38 > 0 ) /*0x48c1ab*/
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
                    v13 = (unsigned int *)*((unsigned int *)this + 4);
        }
        while ( ++v15 < (int)v14->Terrain_field_0x38 ); /*0x48c1ae*/
      }
      v18 = (int)(this->PlayerIndex);
            if ( (*(unsigned int *)(*((unsigned int *)this + 4) + 8) - *(unsigned int *)(*((unsigned int *)this + 4) + 56) > 1 || *(unsigned int *)(a2 + 4) == *((unsigned int *)this + 68) + 1)
// 0x48b750
        && ConnectionClass::allocPacketSlot((ConnectionClass *)v18, (const void *)a2, a3, 0, 0) )
      {
                v17 = *((unsigned int *)this + 68) + 1;
                ++*((unsigned int *)this + 56);
        v20 = *(unsigned int *)(a2 + 4); /*0x48c243*/
        if ( v20 == v19 ) /*0x48c248*/
        {
          while ( 1 ) /*0x48c24a*/
          {
            v21 = (int)(this->PlayerIndex);
                        *((unsigned int *)this + 68) = v18;
            v22 = 0; /*0x48c250*/
            if ( this->u32_3C <= 0 ) /*0x48c257*/
              break; /*0x48c257*/
            while ( 1 ) /*0x48c25a*/
            {
              v23 = Terrain::GetTileType((Terrain *)v21, v22); /*0x48c25a*/
              if ( v23 ) /*0x48c261*/
              {
                v24 = (int)(*(unsigned int *)(v23 + 12));
                                if ( !*(unsigned char *)(v22 + 2) && *(unsigned int *)(v22 + 4) == *((unsigned int *)this + 68) + 1 )
                  break; /*0x48c276*/
              }
              v21 = (int)(this->PlayerIndex);
                            if ( ++v20 >= v19[14] )
                goto LABEL_40; /*0x48c27f*/
            }
            v20 = *(unsigned int *)(v24 + 4); /*0x48c283*/
          }
        }
        goto LABEL_40; /*0x48c257*/
      }
    }
        Debug::Log();
    return 0; /*0x48c309*/
  }
    Debug::Log();
    v6 = (unsigned int *)*((unsigned int *)this + 4);
  v7 = 0; /*0x48c084*/
    if ( (int)v6[10] > 0 )
  {
    while ( 1 ) /*0x48c08e*/
    {
      TileIndex = (unsigned int *)Terrain::GetTileIndex((Terrain *)v6, v7); /*0x48c08e*/
      if ( TileIndex ) /*0x48c095*/
      {
        v9 = (int)(TileIndex[5]);
        if ( *(unsigned int *)(a2 + 4) == *(unsigned int *)(v9 + 4) && !*(unsigned char *)(v9 + 2) ) /*0x48c0a2*/
          break; /*0x48c0a2*/
      }
      v6 = (int)(this->PlayerIndex);
            if ( ++v7 >= v6[10] )
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
  Terrain *PlayerIndex; // ecx
  int TileType; // eax
  int v7; // ecx
  char v8; // dl
  int v10; // edx
  bool v11; // zf

  v4 = 0; /*0x48c326*/
    v5 = (unsigned int *)*((unsigned int *)this + 4);
  if ( PlayerIndex->Terrain_field_0x38 <= 0 ) /*0x48c330*/
    return 0; /*0x48c36a*/
  while ( 1 ) /*0x48c333*/
  {
    TileType = Terrain::GetTileType(PlayerIndex, v4); /*0x48c333*/
    if ( !TileType || (*(unsigned char *)TileType & 2) != 0 ) /*0x48c33f*/
      goto LABEL_7; /*0x48c33f*/
    v7 = *(unsigned int *)(TileType + 12); /*0x48c341*/
    v8 = *(unsigned char *)(v7 + 2); /*0x48c344*/
    if ( !v8 && *(unsigned int *)(v7 + 4) == this-((unsigned int *)(>PhoneNumber))[12] + 1 ) /*0x48c354*/
      break; /*0x48c354*/
    if ( v8 == 1 ) /*0x48c359*/
      goto LABEL_10; /*0x48c359*/
  LABEL_7:
        v5 = (unsigned int *)*((unsigned int *)this + 4);
    if ( ++v4 >= PlayerIndex->Terrain_field_0x38 ) /*0x48c362*/
      return 0; /*0x48c362*/
  }
  this-((unsigned int *)(>PhoneNumber))[12] = *(unsigned int *)(v7 + 4); /*0x48c370*/
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

  v2 = (int)(0);
  v21 = (int)(0);
  PlayerIndex = (int)(this->PlayerIndex);
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
                        v6 += Timer::GetTicks() - MEMORY[0x887338];
          ConnectionClass::initQueue((ConnectionClass *)this->PlayerIndex, v6 - *(unsigned int *)(v5 + 4)); /*0x48c43f*/
        }
        PacketQueue::ExtractEntry((PacketQueue *)this->PlayerIndex, 0, 0, v2--, 0, 0, 0); /*0x48c452*/
      }
      PlayerIndex = (int)(this->PlayerIndex);
      ++v2; /*0x48c45b*/
    }
    while ( v2 < *(unsigned int *)(PlayerIndex + 40) ); /*0x48c45f*/
  }
  v7 = 0; /*0x48c464*/
    v22 = *(unsigned int *)(*((unsigned int *)this + 4) + 40);
  if ( v22 <= 0 ) /*0x48c46f*/
    return 1; /*0x48c46f*/
  do /*0x48c552*/
  {
        v8 = Terrain::GetTileIndex((unsigned int *)*((unsigned int *)this + 4), v7);
    if ( (*(unsigned char *)v8 & 2) == 0 ) /*0x48c483*/
    {
      v9 = dword_887340; /*0x48c48e*/
      if ( dword_887338 != -1 ) /*0x48c497*/
                v9 += Timer::GetTicks() - MEMORY[0x887338];
      v10 = *(unsigned int *)(v8 + 8); /*0x48c4ab*/
      if ( (unsigned int)(v9 - v10) > this-((unsigned int *)(>PhoneNumber))[4] ) /*0x48c4b7*/
      {
        v11 = dword_A8EA0C; /*0x48c4bd*/
        IDA_LOWORD(v10) = *(unsigned short *)(v8 + 32); /*0x48c4c3*/
        IDA_LOBYTE(v11) = this == (gamemd::ConnectionClass *)((ModemConnectionClass *))dword_A8EA0C; /*0x48c4cb*/
        (*(void (**)(ModemConnectionClass *, unsigned int, unsigned int, unsigned int, unsigned int, int, int))(*(unsigned int *)this->__pad_0 /*0x48c4e2*/
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
                    ++*((unsigned int *)this + 8);
        }
        else
        {
          v13 = *(unsigned int *)(v8 + 20); /*0x48c4ef*/
          *(unsigned int *)(v8 + 4) = v9; /*0x48c4f2*/
          if ( *(unsigned char *)(v13 + 2) == 1 ) /*0x48c4f9*/
          {
            v14 = *(unsigned int *)v8; /*0x48c4fb*/
            IDA_LOBYTE(v14) = *(unsigned int *)v8 | 2; /*0x48c4fd*/
            *(unsigned int *)v8 = v14; /*0x48c4ff*/
          }
        }
        v15 = *(unsigned int *)(v8 + 12) + 1; /*0x48c509*/
        *(unsigned int *)(v8 + 12) = v15; /*0x48c50a*/
        v16 = this-((unsigned int *)(>PhoneNumber))[5]; /*0x48c50d*/
        if ( v16 != -1 && v15 > v16 ) /*0x48c519*/
        {
          v17 = *(unsigned int *)v8; /*0x48c51b*/
          v21 = 1; /*0x48c51d*/
          IDA_LOBYTE(v17) = *(unsigned int *)v8 | 4; /*0x48c525*/
          *(unsigned int *)v8 = v17; /*0x48c527*/
        }
        v18 = this-((unsigned int *)(>PhoneNumber))[6]; /*0x48c529*/
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
    Debug::Log();
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