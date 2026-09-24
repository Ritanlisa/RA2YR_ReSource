#include "network/network_ext.hpp"
#include "e4/e4_globals.hpp"

namespace gamemd {

// --- IPXGlobalConnClass ---

// 0x53fbd0
void IPXGlobalConnClass::Flush() {}
  int v8; // eax
  int v9; // ecx
  _DWORD v11[3]; // [esp+Ch] [ebp-Ch] BYREF

  Waypoint::InitInvalid(v11); /*0x53fbdc*/
  *(_DWORD *)(*(_DWORD *)(this + 32) + 8) = 0; /*0x53fbe6*/
  *(_WORD *)(*(_DWORD *)(this + 32) + 12) = 0; /*0x53fbec*/
  **(_WORD **)(this + 32) = *(_WORD *)(this + 36); /*0x53fbf7*/
  *(_BYTE *)(*(_DWORD *)(this + 32) + 2) = !a5 || !a4; /*0x53fc0d*/
  *(_DWORD *)(*(_DWORD *)(this + 32) + 4) = *(_DWORD *)(*(_DWORD *)(this + 4) + 44); /*0x53fc22*/
  if ( a7 ) /*0x53fc2b*/
    *(_DWORD *)(*(_DWORD *)(this + 32) + 4) = a7; /*0x53fc30*/
  *(_WORD *)(*(_DWORD *)(this + 32) + 14) = *(_WORD *)(this + 184); /*0x53fc3f*/
  *(_BYTE *)(*(_DWORD *)(this + 32) + 3) = 0; /*0x53fc46*/
  if ( a4 ) /*0x53fc49*/
  {
    v8 = a4[1]; /*0x53fc4d*/
    v9 = a4[2]; /*0x53fc50*/
    v11[0] = *a4; /*0x53fc53*/
    v11[1] = v8; /*0x53fc57*/
    v11[2] = v9; /*0x53fc5b*/
  }
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket(*(int **)(this + 4), *(const void **)(this + 32), a3 + 16, v11, 12, a6); /*0x53fc99*/
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket(*(int **)(this + 4), *(const void **)(this + 32), a3 + 16, v11, 12, a6); /*0x53fc99*/
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket(*(int **)(this + 4), *(const void **)(this + 32), a3 + 16, v11, 12, a6); /*0x53fc99*/
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket(*(int **)(this + 4), *(const void **)(this + 32), a3 + 16, v11, 12, a6); /*0x53fc99*/
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket(*(int **)(this + 4), *(const void **)(this + 32), a3 + 16, v11, 12, a6); /*0x53fc99*/
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket(this->PlayerIndex, *(const void **)(&this->LastPacketTime2), a3 + 16, v11, 12, a6); /*0x53fc99*/
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket(this->PlayerIndex, *(const void **)(&this->LastPacketTime2), a3 + 16, v11, 12, a6); /*0x53fc99*/
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket(this->PlayerIndex, *(const void **)(&this->LastPacketTime2), a3 + 16, v11, 12, a6); /*0x53fc99*/
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket(this->PlayerIndex, *(const void **)(&this->LastPacketTime2), a3 + 16, v11, 12, a6); /*0x53fc99*/
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket(this->PlayerIndex, *(const void **)(&this->LastPacketTime2), a3 + 16, v11, 12, a6); /*0x53fc99*/
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket(this->PlayerIndex, *(const void **)(&this->LastPacketTime2), a3 + 16, v11, 12, a6); /*0x53fc99*/
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket(this->PlayerIndex, *(const void **)(&this->LastPacketTime2), a3 + 16, v11, 12, a6); /*0x53fc99*/
// 0x7b0f50
void NetworkOptions::ApplySettings() {}
  int v5; // eax
  int v6; // ebx
  _BYTE v7[6]; // [esp+8h] [ebp-110h] BYREF
  unsigned __int8 v8; // [esp+Eh] [ebp-10Ah]
  unsigned __int8 v9; // [esp+Fh] [ebp-109h]
  unsigned __int8 v10; // [esp+10h] [ebp-108h]
  unsigned __int8 v11; // [esp+11h] [ebp-107h]
  unsigned __int8 v12; // [esp+12h] [ebp-106h]
  int v13; // [esp+13h] [ebp-105h]
  char Buffer[256]; // [esp+18h] [ebp-100h] BYREF

  if ( !*(_BYTE *)(this + 258152) ) /*0x7b0f50*/
    return 0; /*0x7b0f6c*/
  v5 = IPXInterfaceClass::initSocket((_DWORD *)this, a2, (int)v7); /*0x7b0f7c*/
  v6 = v5; /*0x7b0f81*/
  if ( v5 )
  {
    if ( v5 == 2 )
      sprintf(Buffer, "?? ?? ?? ?? : %02x %02x %02x %02x %02x %02x", v8, v9, v10, v11, v12, (unsigned __int8)v13);
    else
      sprintf(
        Buffer,
        "%02x %02x %02x %02x : %02x %02x %02x %02x %02x %02x",
        v7[2],
        v7[3],
        v7[4],
        v7[5],
        v8,
        v9,
        v10,
        v11,
        v12,
        (unsigned __int8)v13);
    if ( (int)strlen(Buffer) >= a4 ) /*0x7b1078*/
      return 0; /*0x7b1084*/
    strcpy(a3, Buffer); /*0x7b10a5*/
  }
  return v6; /*0x7b0f62*/
  return v6; /*0x7b0f62*/
  return v6; /*0x7b0f62*/
  return v6; /*0x7b0f62*/
  return v6; /*0x7b0f62*/
