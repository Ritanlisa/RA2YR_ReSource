// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_VECTOR_TREE_TRUTH 1  // G57a2: G42.55 tree-truth bridge pulls core/vector.hpp templates
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/IPXInterfaceClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WinsockInterfaceClass_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/IPXManagerClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/IPXGlobalConnClass_e4.hpp"
#include "e4/classes/RadioClass_e4.hpp"
#include "e4/classes/Socket_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/NetworkAddress_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/NetworkID_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/EventQueue_e4.hpp"  // G42.40f-c supply (Process call @0x7b25d4)
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int gethostname(...);  // raw 007C89CE: // attributes: thunk int __stdcall gethostname(char *name, int namelen)
} // namespace gamemd

// 0x7B0D90
namespace gamemd {
int IPXInterfaceClass::Construct(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6)
{
  IPXInterfaceClass::bindSocket(); /*0x7b0d93*/
  this->Socket = (int)&(void*)(void*)&IPXInterfaceClass_vftable; /*0x7b0da4*/
  this->u32_3F2FC = -1; /*0x7b0dad*/
  this->u32_3F300 = -1; /*0x7b0db3*/
  this->u32_3F304 = -1; /*0x7b0db8*/
  *(_DWORD *)((char *)this + 258822) = -1; /*0x7b0dc2*/
  this->u32_3F30A = -1; /*0x7b0dc8*/
  return &this->Socket; /*0x7b0dce*/
}
} // namespace gamemd
// 0x7B0DD0
namespace gamemd {
int IPXInterfaceClass::initSocket(int aP1, int aP2)
{
  SOCKET v4; // esi
  int v6; // eax
  __int16 v7; // dx
  char optval[4]; // [esp+Ch] [ebp-34h] BYREF
  int optlen; // [esp+10h] [ebp-30h] BYREF
  int v10; // [esp+14h] [ebp-2Ch] BYREF
  struct sockaddr name; // [esp+18h] [ebp-28h] BYREF
  char aP1[24]; // [esp+28h] [ebp-18h] BYREF

  v4 = socket(6, 2, 1000); /*0x7b0de6*/
  if ( v4 == -1 ) /*0x7b0deb*/
    return 0; /*0x7b0df5*/
  memset(name.sa_data, 0, 12); /*0x7b0dfe*/
  name.sa_family = 6; /*0x7b0e13*/
  if ( bind(v4, &name, 14) == -1 ) /*0x7b0e22*/
  {
    closesocket(v4); /*0x7b0e25*/
    return 0; /*0x7b0e32*/
  }
  *(_DWORD *)optval = 1; /*0x7b0e44*/
  optlen = 4; /*0x7b0e4e*/
  if ( stru_887598.onBridge && stru_887598.vfptr == (void *)4 && !stru_887598.vfptr1 ) /*0x7b0e63*/
  {
    Debug::Log(); /*0x7b0eae*/
  }
  else if ( getsockopt(v4, 1000, 16397, optval, &optlen) ) /*0x7b0e7a*/
  {
    WSAGetLastError(); /*0x7b0e94*/
    Debug::Log(); /*0x7b0e9f*/
  }
  else if ( aP1 >= *(int *)optval ) /*0x7b0e87*/
  {
    return 0; /*0x7b0e91*/
  }
  memset(aP1, 0, sizeof(aP1)); /*0x7b0ec2*/
  *(_DWORD *)aP1 = aP1; /*0x7b0ed9*/
  v10 = 24; /*0x7b0edd*/
  if ( getsockopt(v4, 1000, 16391, aP1, &v10) == -1 ) /*0x7b0eee*/
  {
    WSAGetLastError(); /*0x7b0ef0*/
    Debug::Log(); /*0x7b0efc*/
    closesocket(v4); /*0x7b0f05*/
    return 0; /*0x7b0f0c*/
  }
  else
  {
    v6 = *(_DWORD *)&aP1[4]; /*0x7b0f19*/
    v7 = *(_WORD *)&aP1[12]; /*0x7b0f1d*/
    aP2->vtable3 = *(_DWORD *)&aP1[4]; /*0x7b0f23*/
    this->u32_3F2FC = v6; /*0x7b0f26*/
    aP2->nextArrayIndex = *(_DWORD *)&aP1[8]; /*0x7b0f33*/
    *(_WORD *)(aP2 + 10) = v7; /*0x7b0f35*/
    closesocket(v4); /*0x7b0f39*/
    return 1; /*0x7b0f40*/
  }
}
} // namespace gamemd
// 0x7B13D0
namespace gamemd {
AbstractClass * * IPXInterfaceClass::SendPacket(ObjectClass * aP1, int a3, int a4, unsigned int fromlen)
{
  Network *v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  SOCKET v11; // eax
  int v12; // eax
  int v13; // ecx
  _WORD *v14; // edi
  int *v15; // esi
  bool v16; // zf
  int v17; // esi
  NetworkID *v18; // ebx
  int v19; // eax
  int v20; // ecx
  int *p_LocalNetwork; // ebp
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  u_short v25; // [esp-4h] [ebp-30h]
  int v27; // [esp+14h] [ebp-18h] BYREF
  __int16 v28; // [esp+18h] [ebp-14h]
  struct sockaddr to; // [esp+1Ch] [ebp-10h] BYREF

  if ( a3 != 1139 ) /*0x7b13e2*/
    return 1; /*0x7b13f0*/
  if ( (unsigned __int16)fromlen != 1 ) /*0x7b13ff*/
  {
    if ( (unsigned __int16)fromlen == 2 ) /*0x7b1406*/
    {
      if ( IDA_HIWORD(fromlen) ) /*0x7b140c*/
      {
  LABEL_6:
        (*(void (__thiscall **)(IPXInterfaceClass *, _DWORD))(this->Socket + 36))(this, this->u32_3F06C); /*0x7b1411*/
        return 0; /*0x7b1429*/
      }
      if ( this->LocalNode ) /*0x7b142c*/
      {
        while ( 1 ) /*0x7b1446*/
        {
          v25 = this->u32_3F30C; /*0x7b1446*/
          v7 = (Network *)**((_DWORD **)this + 9); /*0x7b1447*/
          to.sa_family = 6; /*0x7b1449*/
          *(_WORD *)&to.sa_data[10] = htons(v25); /*0x7b1453*/
          if ( v7->q014[0] ) /*0x7b1458*/
          {
            *(_DWORD *)to.sa_data = this->u32_3F2FC; /*0x7b146b*/
            *(_DWORD *)&to.sa_data[4] = this->u32_3F300; /*0x7b1471*/
            *(_WORD *)&to.sa_data[8] = this->u32_3F304; /*0x7b1479*/
          }
          else
          {
            Network::CopyAddress(v7, &a3, (int)&v27); /*0x7b148c*/
            *(_DWORD *)to.sa_data = a3; /*0x7b149e*/
            *(_DWORD *)&to.sa_data[4] = v27; /*0x7b14a2*/
            *(_WORD *)&to.sa_data[8] = v28; /*0x7b14a6*/
          }
          if ( sendto(this->u32_3F06C, &v7->q014[8], (int)v7->q010 + 4, 0, &to, 14) == -1 /*0x7b14da*/
            && WSAGetLastError() != 10035 )
          {
            break; /*0x7b14da*/
          }
          v8 = this->LocalNode; /*0x7b14e0*/
          if ( v8 > 0 ) /*0x7b14e5*/
          {
            v9 = v8 - 1; /*0x7b14e7*/
            v10 = 0; /*0x7b14ea*/
            for ( this->LocalNode = v9; /*0x7b14f1*/
                  v10 < this->LocalNode;
                  *(_DWORD *)(this->u32_24 + 4 * v10 - 4) = *(_DWORD *)(this->u32_24 + 4 * v10) )
            {
              ++v10; /*0x7b14f6*/
            }
          }
          if ( v7->q014[2] ) /*0x7b1505*/
          {
            RA2_OPDEL(v7); /*0x7b150d*/
          }
          else
          {
            v7->q014[1] = 0; /*0x7b1517*/
            --this->u32_3F060; /*0x7b1522*/
          }
          if ( !this->LocalNode ) /*0x7b1528*/
            return 0; /*0x7b153c*/
        }
        goto LABEL_6; /*0x7b14da*/
      }
    }
    return 0; /*0x7b1431*/
  }
  if ( IDA_HIWORD(fromlen) ) /*0x7b153f*/
  {
    (*(void (__thiscall **)(IPXInterfaceClass *, _DWORD))(this->Socket + 36))(this, this->u32_3F06C); /*0x7b1550*/
    return 0; /*0x7b155c*/
  }
  v11 = this->u32_3F06C; /*0x7b1577*/
  fromlen = 14; /*0x7b157d*/
  v12 = recvfrom(v11, (char *)this + 258164, 640, 0, &to, (int *)&fromlen); /*0x7b1586*/
  v12 = v12; /*0x7b158e*/
  if ( v12 == -1 ) /*0x7b1592*/
  {
    if ( WSAGetLastError() != 10035 ) /*0x7b159e*/
    {
      (*(void (__thiscall **)(IPXInterfaceClass *, _DWORD))(this->Socket + 36))(this, this->u32_3F06C); /*0x7b15b0*/
      return 0; /*0x7b15bc*/
    }
    return 0; /*0x7b159e*/
  }
  if ( !v12 ) /*0x7b15c1*/
    return 0; /*0x7b15c1*/
  v27 = *(_DWORD *)&to.sa_data[4]; /*0x7b15d4*/
  a3 = *(_DWORD *)to.sa_data; /*0x7b15d8*/
  v28 = *(_WORD *)&to.sa_data[8]; /*0x7b15e6*/
  if ( *(_DWORD *)to.sa_data == this->u32_3F2FC ) /*0x7b15ef*/
  {
    v13 = 3; /*0x7b15f1*/
    v14 = (_WORD *)((char *)this + 258822); /*0x7b15f6*/
    v15 = &v27; /*0x7b15fc*/
    v16 = 1; /*0x7b1600*/
    do /*0x7b1602*/
    {
      if ( !v13 ) /*0x7b1602*/
        break; /*0x7b1602*/
      v16 = *(_WORD *)v15 == *v14; /*0x7b1602*/
      v15 = (int *)((char *)v15 + 2); /*0x7b1602*/
      ++v14; /*0x7b1602*/
      --v13; /*0x7b1602*/
    }
    while ( v16 ); /*0x7b1602*/
    if ( v16 ) /*0x7b1605*/
      return 0; /*0x7b1605*/
  }
  v17 = Network_Process_7B2730(); /*0x7b1610*/
  if ( v17 > 0 && Random::Range(&Randomizer_Global, 0, 99) <= v17 ) /*0x7b1626*/
    return 0; /*0x7b1717*/
  v18 = (NetworkID *)IPXInterfaceClass::processPacket(this); /*0x7b1633*/
  *(_DWORD *)v18[2].q000 = v12 - 4; /*0x7b1646*/
  v18[3].q004 = this->u32_3F074; /*0x7b1651*/
  qmemcpy(&v18[4], (char *)this + 258168, v12 - 4); /*0x7b1657*/
  if ( (*(unsigned __int8 (__thiscall **)(IPXInterfaceClass *, NetworkID *))(this->Socket + 88))(this, v18) ) /*0x7b1665*/
  {
    NetworkID::Assign(v18, &a3, (int)&v27, 0); /*0x7b16d0*/
    v19 = *(_DWORD *)&this->LocalNode[4]; /*0x7b16d5*/
    v20 = this->BoundSocket; /*0x7b16d8*/
    p_LocalNetwork = &this->LocalNetwork; /*0x7b16db*/
    if ( v20 < v19 /*0x7b16fe*/
      || (*((_BYTE *)p_LocalNetwork + 13) || !v19)
      && (v22 = p_LocalNetwork[5], v22 > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->Count)(p_LocalNetwork, v19 + v22, 0) )
    {
      v23 = p_LocalNetwork[4]; /*0x7b1705*/
      v24 = p_LocalNetwork[1]; /*0x7b1708*/
      p_LocalNetwork[4] = v23 + 1; /*0x7b170e*/
      *(_DWORD *)(v24 + 4 * v23) = v18; /*0x7b1711*/
    }
    return 0; /*0x7b1711*/
  }
  Debug::Log(); /*0x7b1671*/
  if ( !byte_B7801C ) /*0x7b1680*/
    byte_B7801C = 1; /*0x7b1682*/
  if ( IDA_BYTE2(v18[2].q004) ) /*0x7b1689*/
  {
    RA2_OPDEL(v18); /*0x7b1691*/
  }
  else
  {
    IDA_BYTE1(v18[2].q004) = 0; /*0x7b16a5*/
    --this->u32_3F060; /*0x7b16b1*/
  }
  return 0; /*0x7b13e4*/
}
} // namespace gamemd
// 0x7B1760
namespace gamemd {
int IPXInterfaceClass::GetLocalAddress(int a2)
{
  this->u32_3F2F8 = a2; /*0x7b1764*/
  return a2; /*0x7b176a*/
}
} // namespace gamemd
// 0x7B19C0
namespace gamemd {
void * IPXInterfaceClass::bindSocket(void *a1)
{
  _BYTE *v2; // eax
  int v3; // edx

  *((_DWORD *)a1 + 3) = 0; /*0x7b19d2*/
  *((_DWORD *)a1 + 4) = 0; /*0x7b19d5*/
  a1->u32_50 = 1; /*0x7b19d8*/
  a1->u32_54 = 0; /*0x7b19db*/
  *((_DWORD *)a1 + 2) = &(void*)(void*)&DynamicVectorClass_WinsockInterfaceClass_WinsockBufferType___vftable; /*0x7b19de*/
  *((_DWORD *)a1 + 7) = 10; /*0x7b19e1*/
  *((_DWORD *)a1 + 6) = 0; /*0x7b19e4*/
  *((_DWORD *)a1 + 9) = 0; /*0x7b19e7*/
  *((_DWORD *)a1 + 10) = 0; /*0x7b19ea*/
  a1->u32_B0 = 1; /*0x7b19ed*/
  a1->u32_B4 = 0; /*0x7b19f0*/
  *((_DWORD *)a1 + 8) = &(void*)(void*)&DynamicVectorClass_WinsockInterfaceClass_WinsockBufferType___vftable; /*0x7b19f3*/
  *((_DWORD *)a1 + 13) = 10; /*0x7b19f6*/
  *((_DWORD *)a1 + 12) = 0; /*0x7b19f9*/
  *((_DWORD *)a1 + 19) = 10; /*0x7b19fc*/
  *((_DWORD *)a1 + 15) = 0; /*0x7b1a02*/
  *((_DWORD *)a1 + 16) = 0; /*0x7b1a05*/
  a1->u32_110 = 1; /*0x7b1a08*/
  a1->u32_114 = 0; /*0x7b1a0b*/
  *((_DWORD *)a1 + 14) = &(void*)(void*)&DynamicVectorClass_WinsockInterfaceClass_WinsockBufferType___vftable; /*0x7b1a0e*/
  *((_DWORD *)a1 + 18) = 0; /*0x7b1a11*/
  *((_DWORD *)a1 + 64539) = -1; /*0x7b1a14*/
  *((_DWORD *)a1 + 64540) = -1; /*0x7b1a1a*/
  *(_DWORD *)a1 = &(void*)(void*)&WinsockInterfaceClass_vftable; /*0x7b1a20*/
  a1->u32_FC1A0 = 0; /*0x7b1a26*/
  v2 = a1 + 102; /*0x7b1a2c*/
  v3 = 128; /*0x7b1a2f*/
  do /*0x7b1a6f*/
  {
    *(v2 - 1) = 0; /*0x7b1a34*/
    *v2 = 0; /*0x7b1a37*/
    v2[86015] = 0; /*0x7b1a39*/
    v2[86016] = 0; /*0x7b1a3f*/
    v2[86017] = 0; /*0x7b1a45*/
    v2[86018] = 0; /*0x7b1a4b*/
    v2[172031] = 0; /*0x7b1a51*/
    v2[172032] = 0; /*0x7b1a57*/
    v2[172033] = 1; /*0x7b1a5d*/
    v2[172034] = 0; /*0x7b1a63*/
    v2 += 672; /*0x7b1a69*/
    --v3; /*0x7b1a6e*/
  }
  while ( v3 ); /*0x7b1a6f*/
  *((_DWORD *)a1 + 64535) = 0; /*0x7b1a76*/
  *((_DWORD *)a1 + 64536) = 0; /*0x7b1a7c*/
  *((_DWORD *)a1 + 64537) = 0; /*0x7b1a82*/
  *((_DWORD *)a1 + 64532) = 0; /*0x7b1a88*/
  *((_DWORD *)a1 + 64533) = 0; /*0x7b1a8e*/
  *((_DWORD *)a1 + 1) = 576; /*0x7b1a94*/
  Debug::Log(); /*0x7b1a9b*/
  return a1; /*0x7b1aa5*/
}
} // namespace gamemd
// 0x7B1B80
namespace gamemd {
int IPXInterfaceClass::AddRef(void *a1)
{
  int result; // eax

  if ( *((_DWORD *)a1 + 64539) != -1 ) /*0x7b1b8c*/
  {
    closesocket(*((_DWORD *)a1 + 64539)); /*0x7b1b8f*/
    *((_DWORD *)a1 + 64539) = -1; /*0x7b1b94*/
  }
  result = *((_DWORD *)a1 + 64540); /*0x7b1b9e*/
  if ( result != -1 ) /*0x7b1ba7*/
  {
    result = closesocket(*((_DWORD *)a1 + 64540)); /*0x7b1baa*/
    *((_DWORD *)a1 + 64540) = -1; /*0x7b1baf*/
  }
  return result; /*0x7b1bb9*/
}
} // namespace gamemd
// 0x7B1BC0
namespace gamemd {
AbstractClass * * IPXInterfaceClass::Receive()
{
  HWND v2; // eax
  int v4; // eax
  HWND v5; // eax
  int v6; // [esp+0h] [ebp-4h]
  int v7; // [esp+0h] [ebp-4h]

  v2 = (HWND)(*(int (__thiscall **)(WinsockInterfaceClass *, int))(this->Socket + 56))(this, -1); /*0x7b1bc9*/
  if ( WSAAsyncSelect(*((AnimClass **)this + 64539), (SOCKET)g_hWnd, v2, 3u, v6) != (AnimClass *)-1 ) /*0x7b1be3*/
  {
    v4 = this->u32_3F070; /*0x7b1bfc*/
    if ( v4 == -1 ) /*0x7b1c05*/
      return 1; /*0x7b1c05*/
    v5 = (HWND)(*(int (__thiscall **)(WinsockInterfaceClass *, int))(this->Socket + 56))(this, v4); /*0x7b1c0e*/
    if ( WSAAsyncSelect(*((AnimClass **)this + 64540), (SOCKET)g_hWnd, v5, 3u, v7) != (AnimClass *)-1 ) /*0x7b1c27*/
      return 1; /*0x7b1c40*/
  }
  WSAGetLastError(); /*0x7b1be5*/
  Debug::Log(); /*0x7b1bf0*/
  return 0; /*0x7b1bfa*/
}
} // namespace gamemd
// 0x7B1CA0
namespace gamemd {
void IPXInterfaceClass::Disconnect()
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // eax

  while ( this->BoundPort ) /*0x7b1ca6*/
  {
    v2 = **((_DWORD **)this + 3); /*0x7b1cae*/
    if ( *(_BYTE *)(v2 + 22) ) /*0x7b1cb0*/
    {
      RA2_OPDEL(**((void ***)this + 3)); /*0x7b1cb6*/
    }
    else
    {
      v2->u8_15 = 0; /*0x7b1cc0*/
      --this->u32_3F05C; /*0x7b1cca*/
    }
    v3 = this->BoundPort; /*0x7b1cd0*/
    if ( v3 > 0 ) /*0x7b1cd5*/
    {
      v4 = v3 - 1; /*0x7b1cd7*/
      v5 = 0; /*0x7b1cda*/
      for ( this->BoundPort = v4; /*0x7b1ce1*/
            v5 < this->BoundPort;
            *(_DWORD *)(this->u32_C + 4 * v5 - 4) = *(_DWORD *)(this->u32_C + 4 * v5) )
      {
        ++v5; /*0x7b1ce6*/
      }
    }
  }
  this->u32_3F05C = 0; /*0x7b1cfa*/
  this->u32_3F050 = 0; /*0x7b1d00*/
}
} // namespace gamemd
// 0x7B2240
namespace gamemd {
unsigned char * IPXInterfaceClass::processPacket(void *a1)
{
  _BYTE *result; // eax
  int v2; // edi
  int v3; // esi

  result = 0; /*0x7b2249*/
  if ( *((_DWORD *)a1 + 64535) == 128 ) /*0x7b2253*/
  {
    result = (_BYTE *)RA2_OPNEW(0x2A0u); /*0x7b225a*/
    result[22] = 1; /*0x7b2264*/
    result[21] = 1; /*0x7b2267*/
  }
  else
  {
    v2 = 0; /*0x7b226c*/
    while ( 1 ) /*0x7b226e*/
    {
      v3 = *((_DWORD *)a1 + 64532); /*0x7b226e*/
      *((_DWORD *)a1 + 64532) = v3 + 1; /*0x7b227a*/
      if ( v3 + 1 > 127 ) /*0x7b2280*/
        *((_DWORD *)a1 + 64532) = 0; /*0x7b2282*/
      if ( !*((_BYTE *)a1 + 672 * v3 + 101) ) /*0x7b2297*/
        break; /*0x7b2297*/
      if ( ++v2 >= 128 ) /*0x7b22a4*/
        return result; /*0x7b22a4*/
    }
    result = (char *)a1 + 672 * v3 + 80; /*0x7b22b9*/
    *((_BYTE *)a1 + 672 * v3 + 101) = 1; /*0x7b22bd*/
    ++*((_DWORD *)a1 + 64535); /*0x7b22c8*/
  }
  if ( result ) /*0x7b22d0*/
  {
    result[23] = 0; /*0x7b22d2*/
    result[24] = 0; /*0x7b22d5*/
  }
  return result; /*0x7b22a6*/
}
} // namespace gamemd
// 0x7B24E0
namespace gamemd {
__int16 IPXInterfaceClass::Connect(const void * a1, unsigned int a3, char aP3)  // G42.40f-d truth 0x7B24E0
{
  _BYTE *v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  UINT v15; // eax

  v5 = AudioQueue::AllocBuffer((AudioQueue *)this, aP3); /*0x7b24f4*/
  qmemcpy(v5 + 32, a1, a3); /*0x7b2505*/
  *((_DWORD *)v5 + 4) = a3; /*0x7b250e*/
  (*(void (__thiscall **)(WinsockInterfaceClass *, _BYTE *))(this->Socket + 84))(this, v5); /*0x7b2516*/
  v5[20] = 1; /*0x7b251d*/
  if ( aP3 ) /*0x7b2523*/
  {
    v6 = this->u32_40; /*0x7b2525*/
    if ( this->u32_48 < v6 /*0x7b254d*/
      || (this->u32_45 || !v6)
      && (v7 = this->u32_4C, v7 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(this->u32_38 + 8))(
           (char *)this + 56,
           v6 + v7,
           0) )
    {
      v8 = this->u32_48; /*0x7b2554*/
      v9 = this->u32_3C; /*0x7b2557*/
      this->u32_48 = v8 + 1; /*0x7b255d*/
      *(_DWORD *)(v9 + 4 * v8) = v5; /*0x7b2560*/
    }
    v10 = this->u32_3F070; /*0x7b2563*/
  }
  else
  {
    v11 = this->u32_28; /*0x7b256b*/
    if ( this->u32_30 < v11 /*0x7b2593*/
      || (this->u32_2D || !v11)
      && (v12 = this->u32_34, v12 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(this->u32_8 + 8))(
           (char *)this + 32,
           v11 + v12,
           0) )
    {
      v13 = this->u32_30; /*0x7b259a*/
      v14 = this->u32_24; /*0x7b259d*/
      this->u32_30 = v13 + 1; /*0x7b25a3*/
      *(_DWORD *)(v14 + 4 * v13) = v5; /*0x7b25a6*/
    }
    v10 = this->u32_3F06C; /*0x7b25a9*/
  }
  v15 = (*(int (__thiscall **)(WinsockInterfaceClass *, int))(this->Socket + 56))(this, v10); /*0x7b25b9*/
  SendMessageA(g_hWnd, v15, 0, 2); /*0x7b25c3*/
  return EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x7b25d4*/
}
} // namespace gamemd
// 0x7B2A20
namespace gamemd {
AbstractClass * * IPXInterfaceClass::getSocketState(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7b2a2c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x7b2a32*/
    if ( a3 ) /*0x7b2a38*/
      v4 = a3; /*0x7b2a4e*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x7b2a4a*/
    IDA_LOBYTE(this->m_C) = 1; /*0x7b2a52*/
    if ( !v4 ) /*0x7b2a56*/
      return 0; /*0x7b2aca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x7b2a58*/
    {
      m_8 = this->m_8; /*0x7b2a5f*/
      if ( a2 < m_8 ) /*0x7b2a64*/
        m_8 = a2; /*0x7b2a66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x7b2a6c*/
        ++i; /*0x7b2a71*/
      if ( IDA_BYTE1(this->m_C) ) /*0x7b2a7e*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x7b2a89*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x7b2a91*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x7b2a9a*/
    this->m_8 = a2; /*0x7b2aa2*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x7b2aa5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass *))(*(_DWORD *)this->q000 /*0x7b2aae*/
                                                                                             + 12))(this);
  }
  v7 = this->m_8; /*0x7b2ab1*/
  if ( v7 < this->m_10 ) /*0x7b2ab9*/
    this->m_10 = v7; /*0x7b2abb*/
  return 1; /*0x7b2abe*/
}
} // namespace gamemd
// 0x7B1720
namespace gamemd {
void IPXInterfaceClass::StubReturnFalse(int a1, int a2)
{
  ; /*0x7b1720*/
}
} // namespace gamemd
// 0x7B1730
namespace gamemd {
void IPXInterfaceClass::GetQueueSize()
{
  ; /*0x7b1730*/
}
} // namespace gamemd
// 0x7B1740
namespace gamemd {
int IPXInterfaceClass::COMStub_Return0()
{
  return 0; /*0x7b1742*/
}
} // namespace gamemd
// 0x7B1750
namespace gamemd {
int IPXInterfaceClass::Send(int a1, void *a2, void *a3, void *a4, void *a5)
{
  return 0; /*0x7b1752*/
}
} // namespace gamemd
// 0x7B1770
namespace gamemd {
int IPXInterfaceClass::COMStub_Return1()
{
  return 1; /*0x7b1775*/
}
} // namespace gamemd
// 0x7B1780
namespace gamemd {
int IPXInterfaceClass::COMStub_Ret1139(int a1)
{
  return 1139; /*0x7b1785*/
}
} // namespace gamemd
// 0x7B1790
namespace gamemd {
IPXInterfaceClass * IPXInterfaceClass::QueryInterface(char a2, int a1, int a3, int a4, int aP1)
{
  WinsockInterfaceClass::WinsockInterfaceClass(); /*0x7b1793*/
  if ( (a2 & 1) != 0 ) /*0x7b179d*/
    RA2_OPDEL(); /*0x7b17a0*/
  return this; /*0x7b17aa*/
}
} // namespace gamemd
// 0x7B1FD0
namespace gamemd {
int IPXInterfaceClass::SetAddress(unsigned int * a1)
{
  int v1; // ebx
  WinsockInterfaceClass *v2; // ebp
  int v3; // eax
  int *v4; // esi
  int result; // eax
  int v6; // edx
  int v7; // edi

  v1 = 0; /*0x7b1fd8*/
  v2 = (WinsockInterfaceClass *)((char *)a1 + 28); /*0x7b1fdd*/
  v3 = *((_DWORD *)a1 + 4); /*0x7b1fe0*/
  *((_DWORD *)a1 + 7) = 0; /*0x7b1fe4*/
  v4 = (int *)((char *)a1 + 32); /*0x7b1fed*/
  result = v3 / 4; /*0x7b1ff0*/
  if ( result > 0 ) /*0x7b1ff5*/
  {
    do /*0x7b2012*/
    {
      v6 = *v4++; /*0x7b1ff7*/
      ComputeHash(v2, v6); /*0x7b1ffe*/
      ++v1; /*0x7b2006*/
      result = *((_DWORD *)a1 + 4) / 4; /*0x7b200d*/
    }
    while ( v1 < result ); /*0x7b2012*/
  }
  v7 = *((_DWORD *)a1 + 4) & 3; /*0x7b2017*/
  if ( v7 ) /*0x7b201a*/
    return ComputeHash(v2, *v4 & (0xFFFFFFFF >> (32 - 8 * v7))); /*0x7b2035*/
  return result; /*0x7b203a*/
}
} // namespace gamemd
// 0x7B25E0
namespace gamemd {
int IPXInterfaceClass::GetAddress(SOCKET s, void *a2, void *a3, void *a4)
{
  WinsockInterfaceClass *v1; // esi
  int optlen; // [esp+4h] [ebp-4h] BYREF

  v1 = this; /*0x7b25e6*/
  optlen = 4; /*0x7b25fb*/
  getsockopt(0xFFFF, 4103, (char *)&this, &optlen); /*0x7b2603*/
  this = 0; /*0x7b261d*/
  return setsockopt((SOCKET)v1, 0xFFFF, 4103, (const char *)&this, optlen); /*0x7b262a*/
}
} // namespace gamemd
// 0x7B26D0
namespace gamemd {
char IPXInterfaceClass::ReceivePacket(char * name, AnimClass * aP1)
{
  if ( gethostname((char *)name, aP1) == -1 ) /*0x7b26e3*/
  {
    WSAGetLastError(); /*0x7b26e5*/
    Debug::Log(); /*0x7b26f0*/
    return 0; /*0x7b26f8*/
  }
  else
  {
    Debug::Log(); /*0x7b2704*/
    return 1; /*0x7b270c*/
  }
}
} // namespace gamemd
// 0x7B2840
namespace gamemd {
void IPXInterfaceClass::getSocketCount()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x7b2846*/
  this->m_10 = 0; /*0x7b2849*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x7b2850*/
  {
    RA2_OPDEL(v2); /*0x7b2856*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b285e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x7b2861*/
  this->m_8 = 0; /*0x7b2864*/
}
} // namespace gamemd
// 0x7B2870
namespace gamemd {
unsigned int IPXInterfaceClass::resetSocket(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x7b2870*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x7b2885*/
  else
    return 0; /*0x7b2877*/
}
} // namespace gamemd
// 0x7B2AD0
namespace gamemd {
int IPXInterfaceClass::initSession(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x7b2ad0*/
  result = 0; /*0x7b2ad3*/
  if ( m_10 <= 0 ) /*0x7b2ad8*/
    return -1; /*0x7b2aef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x7b2ade*/
  {
    if ( ++result >= m_10 ) /*0x7b2aed*/
      return -1; /*0x7b2aed*/
  }
  return result; /*0x7b2af2*/
}
} // namespace gamemd
// 0x7B2B50
namespace gamemd {
DynamicVector * IPXInterfaceClass::closeSession(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x7b2b53*/
  *(_DWORD *)this->q000 = &(void*)(void*)&VectorClass_WinsockInterfaceClass_WinsockBufferType___vftable; /*0x7b2b56*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x7b2b60*/
  {
    RA2_OPDEL(v3); /*0x7b2b68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x7b2b70*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x7b2b7b*/
  this->m_8 = 0; /*0x7b2b81*/
  if ( (a2 & 1) != 0 ) /*0x7b2b88*/
    RA2_OPDEL(); /*0x7b2b8b*/
  return this->q000; /*0x7b2b95*/
}
} // namespace gamemd