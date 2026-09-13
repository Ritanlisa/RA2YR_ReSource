// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x48B750
int ConnectionClass::allocPacketSlot(const void * a2, signed int a3, const void * a4, signed int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ConnectionClass_AllocPacketSlot(int *this, const void *a2, signed int a3, const void *a4, signed int a5)
{
  int v6; // edx
  int v8; // ebx
  _BYTE *v9; // eax
  _BYTE *v10; // ecx
  int v12; // ebx
  int v13; // esi
  int v14; // eax
  int v15; // [esp+14h] [ebp+8h]

  v6 = *(this + 2); /*0x48b755*/
  if ( *(this + 14) == v6 || a3 > *(this + 3) ) /*0x48b768*/
    return 0; /*0x48b768*/
  v8 = 0; /*0x48b76a*/
  if ( v6 <= 0 ) /*0x48b772*/
    goto LABEL_9; /*0x48b772*/
  v9 = (_BYTE *)*(this + 13); /*0x48b774*/
  v10 = v9; /*0x48b777*/
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
  *(_DWORD *)&v9[v12] |= 1u; /*0x48b7b7*/
  *(_DWORD *)(v12 + *(this + 13)) &= ~2u; /*0x48b7c4*/
  *(_DWORD *)(*(this + 13) + v12) &= ~4u; /*0x48b7d2*/
  v13 = MEMORY[0x887340]; /*0x48b7d9*/
  if ( MEMORY[0x887338] != -1 ) /*0x48b7e2*/
    v13 += Timer::GetTicks() - MEMORY[0x887338]; /*0x48b7f4*/
  *(_DWORD *)(*(this + 13) + v12 + 4) = v13; /*0x48b7fb*/
  *(_DWORD *)(*(this + 13) + v12 + 8) = a3; /*0x48b806*/
  qmemcpy(*(void **)(*(this + 13) + v12 + 12), a2, a3); /*0x48b816*/
  if ( a4 && a5 > 0 && a5 <= *(this + 4) ) /*0x48b832*/
  {
    qmemcpy(*(void **)(*(this + 13) + v12 + 20), a4, a5); /*0x48b842*/
    *(_DWORD *)(*(this + 13) + v12 + 16) = a5; /*0x48b84e*/
  }
  else
  {
    *(_DWORD *)(*(this + 13) + v12 + 16) = 0; /*0x48b857*/
  }
  *(_DWORD *)(*(this + 16) + 4 * *(this + 14)) = v15; /*0x48b86a*/
  v14 = *(this + 15) + 1; /*0x48b874*/
  ++*(this + 14); /*0x48b875*/
  *(this + 15) = v14; /*0x48b878*/
  return 1; /*0x48b7a2*/
}
}

// 0x48BA10
unsigned int ConnectionClass::initQueue(unsigned int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall sub_48BA10(unsigned int *this, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int result; // eax

  v2 = *(this + 6); /*0x48ba10*/
  if ( v2 == 256 ) /*0x48ba1c*/
  {
    v3 = a2 - *(this + 7) + *(this + 5); /*0x48ba2c*/
    *(this + 5) = v3; /*0x48ba2e*/
    v4 = ((unsigned __int8)v3 > 0x7Fu) + (v3 >> 8); /*0x48ba46*/
  }
  else
  {
    v5 = v2 + 1; /*0x48ba4e*/
    v6 = a2 + *(this + 5); /*0x48ba56*/
    *(this + 6) = v5; /*0x48ba58*/
    *(this + 5) = v6; /*0x48ba5b*/
    v4 = v6 / v5; /*0x48ba5e*/
  }
  *(this + 7) = v4; /*0x48ba60*/
  result = *(this + 8); /*0x48ba63*/
  if ( a2 > result ) /*0x48ba68*/
    *(this + 8) = a2; /*0x48ba6a*/
  return result; /*0x48ba6d*/
}
}

// 0x48BEE0
void ConnectionClass::dtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ConnectionClass_Dtor(_DWORD *this)
{
  void *v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = (void *)*(this + 8); /*0x48bee3*/
  *this = &vt_ConnectionClass; /*0x48bee6*/
  __3_YAXPAX_Z(v2); /*0x48beed*/
  v3 = (void (__thiscall ***)(_DWORD, int))*(this + 1); /*0x48bef2*/
  if ( v3 ) /*0x48befb*/
    (**v3)(v3, 1); /*0x48bf01*/
}
}

// 0x48BF40
int ConnectionClass::sendAck(AnimClass * aP1, AnimClass * aP2, AnimClass * aP3, AnimClass * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ConnectionClass::sendAck(int this, AnimClass *aP1, AnimClass *aP2, AnimClass *aP3, AnimClass *aP4)
{
  **(_WORD **)(this + 32) = *(_WORD *)(this + 36); /*0x48bf4b*/
  if ( aP3 ) /*0x48bf54*/
  {
    *(_BYTE *)(*(_DWORD *)(this + 32) + 2) = 0; /*0x48bf59*/
    *(_DWORD *)(*(_DWORD *)(this + 32) + 4) = *(_DWORD *)(this + 64); /*0x48bf63*/
    Debug::Log(); /*0x48bf6f*/
  }
  else
  {
    *(_BYTE *)(*(_DWORD *)(this + 32) + 2) = 1; /*0x48bf7c*/
    *(_DWORD *)(*(_DWORD *)(this + 32) + 4) = *(_DWORD *)(this + 60); /*0x48bf86*/
  }
  if ( MEMORY[0xA8B238] == (CellStruct *)4 && MEMORY[0xA8D63C].__pad_524[64] ) /*0x48bf99*/
    *(_BYTE *)(*(_DWORD *)(this + 32) + 3) = (_BYTE)aP4; /*0x48bfa2*/
  if ( *(_DWORD *)(this + 28) < (int)aP2 ) /*0x48bfae*/
  {
    Debug::Log(); /*0x48bfb6*/
    Debug::Log(); /*0x48bfc1*/
    return 0; /*0x48bfcd*/
  }
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 14), aP1, (unsigned int)aP2); /*0x48bfe5*/
  if ( !ConnectionClass::queueSendPacket( /*0x48c006*/
          *(int **)(this + 4),
          *(const void **)(this + 32),
          (signed int)&aP2->__pad_C[2],
          0,
          0,
          0) )
    return 0; /*0x48c006*/
  if ( aP3 ) /*0x48c00e*/
    ++*(_DWORD *)(this + 64); /*0x48c015*/
  else
    ++*(_DWORD *)(this + 60); /*0x48c026*/
  return 1; /*0x48bfc9*/
}
}

// 0x48C040
int ConnectionClass::receivePacket(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ConnectionClass_ReceivePacket(_DWORD *this, int a2, int a3)
{
  char v5; // al
  _DWORD *v6; // ecx
  int v7; // edi
  _DWORD *TileIndex; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  _DWORD *v13; // ecx
  int v14; // edi
  int TileType; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  _DWORD *v19; // ecx
  int v20; // edi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int16 v25; // [esp+10h] [ebp-10h] BYREF
  char v26; // [esp+12h] [ebp-Eh]
  _BYTE v27[13]; // [esp+13h] [ebp-Dh]

  if ( *(_WORD *)a2 != *((_WORD *)this + 18) ) /*0x48c054*/
  {
    ++*(this + 6); /*0x48c05b*/
    return 0; /*0x48c066*/
  }
  v5 = *(_BYTE *)(a2 + 2); /*0x48c069*/
  if ( v5 != 2 ) /*0x48c06e*/
  {
    if ( v5 == 1 ) /*0x48c0d5*/
    {
      if ( *(_DWORD *)(*(this + 1) + 8) - *(_DWORD *)(*(this + 1) + 56) > 1 ) /*0x48c0e9*/
      {
        if ( ConnectionClass::allocPacketSlot(a2, a3, 0, 0) ) /*0x48c115*/
        {
          v10 = *(this + 13) + 1; /*0x48c14b*/
          *(this + 13) = v10; /*0x48c14c*/
          *(this + 3) = *(_DWORD *)(a2 + 4) - v10 + 1; /*0x48c155*/
          v11 = *(_DWORD *)(a2 + 4); /*0x48c158*/
          if ( v11 ) /*0x48c15d*/
            *(this + 4) = 100 - 100 * v10 / (unsigned int)(v11 + 1); /*0x48c174*/
          return 1; /*0x48c17a*/
        }
        else
        {
          Debug::Log(); /*0x48c12d*/
          ++*(this + 5); /*0x48c139*/
          return 0; /*0x48c13f*/
        }
      }
      else
      {
        ++*(this + 5); /*0x48c0f4*/
        Debug::Log(); /*0x48c0f7*/
        return 0; /*0x48c0ff*/
      }
    }
    if ( !v5 ) /*0x48c188*/
    {
      v12 = *(this + 17); /*0x48c18e*/
      if ( *(_DWORD *)(a2 + 4) <= v12 && v12 != -1 ) /*0x48c19b*/
      {
LABEL_40:
        v23 = *(_DWORD *)(a2 + 4); /*0x48c288*/
        v25 = *((_WORD *)this + 18); /*0x48c28f*/
        v26 = 2; /*0x48c29c*/
        *(_DWORD *)&v27[1] = v23; /*0x48c2a1*/
        if ( MEMORY[0xA8DBA0] ) /*0x48c2a5*/
          v27[0] = *(_BYTE *)(a2 + 3); /*0x48c2aa*/
        else
          v27[0] = 0; /*0x48c2b0*/
        Debug::Log(); /*0x48c2c6*/
        v24 = MEMORY[0xA8EA0C]; /*0x48c2cb*/
        LOBYTE(v24) = this == (_DWORD *)MEMORY[0xA8EA0C]; /*0x48c2d7*/
        (*(void (__thiscall **)(_DWORD *, __int16 *, int, _DWORD, _DWORD, int, _DWORD))(*this + 36))( /*0x48c2ea*/
          this,
          &v25,
          14,
          0,
          0,
          v24,
          0);
        return 1; /*0x48c2f9*/
      }
      v13 = (_DWORD *)*(this + 1); /*0x48c1a1*/
      v14 = 0; /*0x48c1a4*/
      if ( (int)v13[14] > 0 ) /*0x48c1ab*/
      {
        do /*0x48c1ae*/
        {
          TileType = Terrain::GetTileType(v13, v14); /*0x48c1ae*/
          if ( TileType ) /*0x48c1b5*/
          {
            v16 = *(_DWORD *)(TileType + 12); /*0x48c1b7*/
            if ( !*(_BYTE *)(v16 + 2) && *(_DWORD *)(v16 + 4) == *(_DWORD *)(a2 + 4) ) /*0x48c1c9*/
              goto LABEL_40; /*0x48c1c9*/
          }
          v13 = (_DWORD *)*(this + 1); /*0x48c1cf*/
        }
        while ( ++v14 < v13[14] ); /*0x48c1ae*/
      }
      if ( (*(_DWORD *)(*(this + 1) + 8) - *(_DWORD *)(*(this + 1) + 56) > 1 || *(_DWORD *)(a2 + 4) == *(this + 17) + 1) /*0x48c216*/
        && ConnectionClass::allocPacketSlot(a2, a3, 0, 0) )
      {
        v17 = *(this + 17) + 1; /*0x48c23f*/
        ++*(this + 14); /*0x48c240*/
        v18 = *(_DWORD *)(a2 + 4); /*0x48c243*/
        if ( v18 == v17 ) /*0x48c248*/
        {
          while ( 1 ) /*0x48c24a*/
          {
            v19 = (_DWORD *)*(this + 1); /*0x48c24a*/
            *(this + 17) = v18; /*0x48c24d*/
            v20 = 0; /*0x48c250*/
            if ( (int)v19[14] <= 0 ) /*0x48c257*/
              break; /*0x48c257*/
            while ( 1 ) /*0x48c25a*/
            {
              v21 = Terrain::GetTileType(v19, v20); /*0x48c25a*/
              if ( v21 ) /*0x48c261*/
              {
                v22 = *(_DWORD *)(v21 + 12); /*0x48c263*/
                if ( !*(_BYTE *)(v22 + 2) && *(_DWORD *)(v22 + 4) == *(this + 17) + 1 ) /*0x48c276*/
                  break; /*0x48c276*/
              }
              v19 = (_DWORD *)*(this + 1); /*0x48c278*/
              if ( ++v20 >= v19[14] ) /*0x48c27f*/
                goto LABEL_40; /*0x48c27f*/
            }
            v18 = *(_DWORD *)(v22 + 4); /*0x48c283*/
          }
        }
        goto LABEL_40; /*0x48c257*/
      }
    }
    Debug::Log(); /*0x48c301*/
    return 0; /*0x48c309*/
  }
  Debug::Log(); /*0x48c079*/
  v6 = (_DWORD *)*(this + 1); /*0x48c07e*/
  v7 = 0; /*0x48c084*/
  if ( (int)v6[10] > 0 ) /*0x48c08b*/
  {
    while ( 1 ) /*0x48c08e*/
    {
      TileIndex = (_DWORD *)Terrain::GetTileIndex(v6, v7); /*0x48c08e*/
      if ( TileIndex ) /*0x48c095*/
      {
        v9 = TileIndex[5]; /*0x48c097*/
        if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)(v9 + 4) && !*(_BYTE *)(v9 + 2) ) /*0x48c0a2*/
          break; /*0x48c0a2*/
      }
      v6 = (_DWORD *)*(this + 1); /*0x48c0a9*/
      if ( ++v7 >= v6[10] ) /*0x48c0b0*/
        return 1; /*0x48c0be*/
    }
    *TileIndex |= 2u; /*0x48c0c1*/
  }
  return 1; /*0x48c059*/
}
}

// 0x48C320
int ConnectionClass::processTileUpdate(void * a2, signed int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ConnectionClass_ProcessTileUpdate(_DWORD *this, void *a2, signed int *a3)
{
  int v4; // esi
  _DWORD *v5; // ecx
  int TileType; // eax
  int v7; // ecx
  char v8; // dl
  signed int v10; // edx
  bool v11; // zf

  v4 = 0; /*0x48c326*/
  v5 = (_DWORD *)*(this + 1); /*0x48c328*/
  if ( (int)v5[14] <= 0 ) /*0x48c330*/
    return 0; /*0x48c36a*/
  while ( 1 ) /*0x48c333*/
  {
    TileType = Terrain::GetTileType(v5, v4); /*0x48c333*/
    if ( !TileType || (*(_BYTE *)TileType & 2) != 0 ) /*0x48c33f*/
      goto LABEL_7; /*0x48c33f*/
    v7 = *(_DWORD *)(TileType + 12); /*0x48c341*/
    v8 = *(_BYTE *)(v7 + 2); /*0x48c344*/
    if ( !v8 && *(_DWORD *)(v7 + 4) == *(this + 18) + 1 ) /*0x48c354*/
      break; /*0x48c354*/
    if ( v8 == 1 ) /*0x48c359*/
      goto LABEL_10; /*0x48c359*/
LABEL_7:
    v5 = (_DWORD *)*(this + 1); /*0x48c35b*/
    if ( ++v4 >= v5[14] ) /*0x48c362*/
      return 0; /*0x48c362*/
  }
  *(this + 18) = *(_DWORD *)(v7 + 4); /*0x48c370*/
LABEL_10:
  v10 = *(_DWORD *)(TileType + 8) - 14; /*0x48c373*/
  v11 = *(_DWORD *)(TileType + 8) == 14; /*0x48c37e*/
  *(_DWORD *)TileType |= 2u; /*0x48c380*/
  if ( v10 >= 0 && !v11 ) /*0x48c382*/
    qmemcpy(a2, (const void *)(*(_DWORD *)(TileType + 12) + 14), v10); /*0x48c395*/
  *a3 = v10; /*0x48c3a5*/
  return 1; /*0x48c364*/
}
}

// 0x48C3E0
int ConnectionClass::serviceSendQueue()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ConnectionClass_ServiceSendQueue(unsigned int *this)
{
  int v2; // esi
  _DWORD *v3; // ecx
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
  v3 = (_DWORD *)*(this + 1); /*0x48c3f3*/
  if ( (int)v3[10] > 0 ) /*0x48c3fb*/
  {
    do /*0x48c45f*/
    {
      TileIndex = Terrain::GetTileIndex(v3, v2); /*0x48c3fe*/
      v5 = TileIndex; /*0x48c403*/
      if ( (*(_BYTE *)TileIndex & 2) != 0 ) /*0x48c408*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)(TileIndex + 20) + 2) ) /*0x48c40d*/
        {
          v6 = MEMORY[0x887340]; /*0x48c419*/
          if ( MEMORY[0x887338] != -1 ) /*0x48c422*/
            v6 += Timer::GetTicks() - MEMORY[0x887338]; /*0x48c434*/
          ConnectionClass::initQueue(v6 - *(_DWORD *)(v5 + 4)); /*0x48c43f*/
        }
        PacketQueue::ExtractEntry(0, 0, v2--, 0, 0, 0); /*0x48c452*/
      }
      v3 = (_DWORD *)*(this + 1); /*0x48c458*/
      ++v2; /*0x48c45b*/
    }
    while ( v2 < v3[10] ); /*0x48c45f*/
  }
  v7 = 0; /*0x48c464*/
  v22 = *(_DWORD *)(*(this + 1) + 40); /*0x48c46b*/
  if ( v22 <= 0 ) /*0x48c46f*/
    return 1; /*0x48c46f*/
  do /*0x48c552*/
  {
    v8 = Terrain::GetTileIndex((_DWORD *)*(this + 1), v7); /*0x48c47e*/
    if ( (*(_BYTE *)v8 & 2) == 0 ) /*0x48c483*/
    {
      v9 = MEMORY[0x887340]; /*0x48c48e*/
      if ( MEMORY[0x887338] != -1 ) /*0x48c497*/
        v9 += Timer::GetTicks() - MEMORY[0x887338]; /*0x48c4a9*/
      v10 = *(_DWORD *)(v8 + 8); /*0x48c4ab*/
      if ( v9 - v10 > *(this + 10) ) /*0x48c4b7*/
      {
        v11 = MEMORY[0xA8EA0C]; /*0x48c4bd*/
        LOWORD(v10) = *(_WORD *)(v8 + 32); /*0x48c4c3*/
        LOBYTE(v11) = this == (unsigned int *)MEMORY[0xA8EA0C]; /*0x48c4cb*/
        (*(void (__thiscall **)(unsigned int *, _DWORD, _DWORD, _DWORD, _DWORD, int, int))(*this + 36))( /*0x48c4e2*/
          this,
          *(_DWORD *)(v8 + 20),
          *(_DWORD *)(v8 + 16),
          *(_DWORD *)(v8 + 28),
          *(_DWORD *)(v8 + 24),
          v11,
          v10);
        v12 = *(_DWORD *)(v8 + 12); /*0x48c4e5*/
        *(_DWORD *)(v8 + 8) = v9; /*0x48c4e8*/
        if ( v12 ) /*0x48c4ed*/
        {
          ++*(this + 2); /*0x48c503*/
        }
        else
        {
          v13 = *(_DWORD *)(v8 + 20); /*0x48c4ef*/
          *(_DWORD *)(v8 + 4) = v9; /*0x48c4f2*/
          if ( *(_BYTE *)(v13 + 2) == 1 ) /*0x48c4f9*/
          {
            v14 = *(_DWORD *)v8; /*0x48c4fb*/
            LOBYTE(v14) = *(_DWORD *)v8 | 2; /*0x48c4fd*/
            *(_DWORD *)v8 = v14; /*0x48c4ff*/
          }
        }
        v15 = *(_DWORD *)(v8 + 12) + 1; /*0x48c509*/
        *(_DWORD *)(v8 + 12) = v15; /*0x48c50a*/
        v16 = *(this + 11); /*0x48c50d*/
        if ( v16 != -1 && v15 > v16 ) /*0x48c519*/
        {
          v17 = *(_DWORD *)v8; /*0x48c51b*/
          v21 = 1; /*0x48c51d*/
          LOBYTE(v17) = *(_DWORD *)v8 | 4; /*0x48c525*/
          *(_DWORD *)v8 = v17; /*0x48c527*/
        }
        v18 = *(this + 12); /*0x48c529*/
        if ( v18 != -1 && *(_DWORD *)(v8 + 8) - *(_DWORD *)(v8 + 4) > v18 ) /*0x48c53b*/
        {
          v19 = *(_DWORD *)v8; /*0x48c53d*/
          v21 = 1; /*0x48c53f*/
          LOBYTE(v19) = *(_DWORD *)v8 | 4; /*0x48c547*/
          *(_DWORD *)v8 = v19; /*0x48c549*/
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
}

// 0x48C590
int ConnectionClass::StubReturnFalse()
{
return 0;
}
