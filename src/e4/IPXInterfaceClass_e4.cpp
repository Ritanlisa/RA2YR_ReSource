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
int gethostname(char* p0, int p1);  // x4:signals@0x7c89ce
} // namespace gamemd

// 0x7B0D90
namespace gamemd {  // G42.18 ns repair
int IPXInterfaceClass::Construct(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{

  IPXInterfaceClass::bindSocket((char *)a1); /*0x7b0d93*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F794C) */  /*0x7b0da4*/
  *((unsigned int *)a1 + 64703) = -1; /*0x7b0dad*/
  *((unsigned int *)a1 + 64704) = -1; /*0x7b0db3*/
  *((unsigned short *)a1 + 129410) = -1; /*0x7b0db8*/
  *(unsigned int *)((char *)a1 + 258822) = -1; /*0x7b0dc2*/
  *((unsigned short *)a1 + 129413) = -1; /*0x7b0dc8*/
  return &a1->Socket; /*0x7b0dce*/

}
} // namespace gamemd
// 0x7B0DD0
namespace gamemd {
int IPXInterfaceClass::initSocket(int aP1, int aP2, void *a3)
{
  SOCKET v4; // esi
  struct sockaddr name; // [esp+18h] [ebp-28h] BYREF

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
  char optval[4]; // [esp+Ch] [ebp-34h] BYREF
  *(unsigned int *)optval = 1; /*0x7b0e44*/
  int optlen; // [esp+10h] [ebp-30h] BYREF
  optlen = 4; /*0x7b0e4e*/
  if ( stru_887598.onBridge && stru_887598.ptr_0 == 4 && !stru_887598.ptr_4 ) /*0x7b0e63*/
  {
    Debug::Log(); /*0x7b0eae*/
  }
  else if ( getsockopt(v4, 1000, 16397, optval, &optlen) ) /*0x7b0e7a*/
  {
    WSAGetLastError(); /*0x7b0e94*/
    Debug::Log(); /*0x7b0e9f*/
  }
  char aP1[24]; // [esp+28h] [ebp-18h] BYREF
  else if ( aP1 >= *(int *)optval ) /*0x7b0e87*/
  {
    return 0; /*0x7b0e91*/
  }
  memset(aP1, 0, sizeof(aP1)); /*0x7b0ec2*/
  *(unsigned int *)aP1 = aP1; /*0x7b0ed9*/
  int v10; // [esp+14h] [ebp-2Ch] BYREF
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
    int v6; // eax
    v6 = *(unsigned int *)&aP1[4]; /*0x7b0f19*/
    int16_t v7; // dx
    v7 = *(unsigned short *)&aP1[12]; /*0x7b0f1d*/
    aP2->ptr_3 = *(unsigned int *)&aP1[4]; /*0x7b0f23*/
    this->u32_3F2FC = v6; /*0x7b0f26*/
    aP2->nextArrayIndex = *(unsigned int *)&aP1[8]; /*0x7b0f33*/
    aP2->owningHouseIndex = v7; /*0x7b0f35*/
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
  unsigned short *v14; // edi
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
  int v26; // [esp+10h] [ebp-1Ch]
  int v27; // [esp+14h] [ebp-18h] BYREF
  __int16 v28; // [esp+18h] [ebp-14h]
  struct sockaddr to; // [esp+1Ch] [ebp-10h] BYREF

  if ( a3 != 1139 ) /*0x7b13e2*/
    return 1; /*0x7b13f0*/
  if ( (unsigned __int16)fromlen != 1 ) /*0x7b13ff*/
  {
    if ( (unsigned __int16)fromlen == 2 ) /*0x7b1406*/
    {
      if ( HIWORD(fromlen) ) /*0x7b140c*/
      {
LABEL_6:
        (*(void (**)(IPXInterfaceClass *, unsigned int))(this->Socket + 36))(this, this->u32_3F06C); /*0x7b1411*/
        return 0; /*0x7b1429*/
      }
      if ( this->q030 ) /*0x7b142c*/
      {
        while ( 1 ) /*0x7b1446*/
        {
          v25 = this->u32_3F30C; /*0x7b1446*/
          v7 = (Network *)*this->u32_24; /*0x7b1447*/
          to.sa_family = 6; /*0x7b1449*/
          *(unsigned short *)&to.sa_data[10] = htons(v25); /*0x7b1453*/
          if ( v7->__pad_14 ) /*0x7b1458*/
          {
            *(unsigned int *)to.sa_data = this->u32_3F2FC; /*0x7b146b*/
            *(unsigned int *)&to.sa_data[4] = this->u32_3F300; /*0x7b1471*/
            *(unsigned short *)&to.sa_data[8] = this->u32_3F304; /*0x7b1479*/
          }
          else
          {
            Network::CopyAddress(v7, &a3, (int)&v27); /*0x7b148c*/
            *(unsigned int *)to.sa_data = a3; /*0x7b149e*/
            *(unsigned int *)&to.sa_data[4] = v27; /*0x7b14a2*/
            *(unsigned short *)&to.sa_data[8] = v28; /*0x7b14a6*/
          }
          if ( sendto(this->u32_3F06C, &v7->u32_3F06C, v7->u32_3F06C + 4, 0, &to, 14) == -1 /*0x7b14da*/
            && WSAGetLastError() != 10035 )
          {
            break; /*0x7b14da*/
          }
          v8 = this->q030; /*0x7b14e0*/
          if ( v8 > 0 ) /*0x7b14e5*/
          {
            v9 = v8 - 1; /*0x7b14e7*/
            v10 = 0; /*0x7b14ea*/
            for ( this->q030 = v9; /*0x7b14f1*/
                  v10 < this->q030;
                  *(unsigned int *)(this->u32_24 + 4 * v10 - 4) = *(unsigned int *)(this->u32_24 + 4 * v10) )
            {
              ++v10; /*0x7b14f6*/
            }
          }
          if ( v7->q016 ) /*0x7b1505*/
          {
            __3_YAXPAX_Z(v7); /*0x7b150d*/
          }
          else
          {
            v7->__pad_14[1] = 0; /*0x7b1517*/
            --this->u32_3F060; /*0x7b1522*/
          }
          if ( !this->q030 ) /*0x7b1528*/
            return 0; /*0x7b153c*/
        }
        goto LABEL_6; /*0x7b14da*/
      }
    }
    return 0; /*0x7b1431*/
  }
  if ( HIWORD(fromlen) ) /*0x7b153f*/
  {
    (*(void (**)(IPXInterfaceClass *, unsigned int))(this->Socket + 36))(this, this->u32_3F06C); /*0x7b1550*/
    return 0; /*0x7b155c*/
  }
  v11 = this->u32_3F06C; /*0x7b1577*/
  fromlen = 14; /*0x7b157d*/
  v12 = recvfrom(v11, &this->q3F074, 640, 0, &to, (int *)&fromlen); /*0x7b1586*/
  v26 = v12; /*0x7b158e*/
  if ( v12 == -1 ) /*0x7b1592*/
  {
    if ( WSAGetLastError() != 10035 ) /*0x7b159e*/
    {
      (*(void (**)(IPXInterfaceClass *, unsigned int))(this->Socket + 36))(this, this->u32_3F06C); /*0x7b15b0*/
      return 0; /*0x7b15bc*/
    }
    return 0; /*0x7b159e*/
  }
  if ( !v12 ) /*0x7b15c1*/
    return 0; /*0x7b15c1*/
  v27 = *(unsigned int *)&to.sa_data[4]; /*0x7b15d4*/
  a3 = *(unsigned int *)to.sa_data; /*0x7b15d8*/
  v28 = *(unsigned short *)&to.sa_data[8]; /*0x7b15e6*/
  if ( *(unsigned int *)to.sa_data == this->u32_3F2FC ) /*0x7b15ef*/
  {
    v13 = 3; /*0x7b15f1*/
    v14 = &this->u32_3F306; /*0x7b15f6*/
    v15 = &v27; /*0x7b15fc*/
    v16 = 1; /*0x7b1600*/
    do /*0x7b1602*/
    {
      if ( !v13 ) /*0x7b1602*/
        break; /*0x7b1602*/
      v16 = *(unsigned short *)v15 == *v14; /*0x7b1602*/
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
  *v18->u32_8.__pad_0 = v26 - 4; /*0x7b1646*/
  v18[3].NetworkID_field_0x04 = this->q3F074; /*0x7b1651*/
  memcpy(&v18[4], &this->q3F078, v26 - 4); /*0x7b1657*/
  if ( (*(unsigned __int8 (**)(IPXInterfaceClass *, NetworkID *))(this->Socket + 88))(this, v18) ) /*0x7b1665*/
  {
    NetworkID::Assign(v18, &a3, (int)&v27, 0); /*0x7b16d0*/
    v19 = *&this->q014; /*0x7b16d5*/
    v20 = this->u32_18; /*0x7b16d8*/
    p_LocalNetwork = &this->LocalNetwork; /*0x7b16db*/
    if ( v20 < v19 /*0x7b16fe*/
      || (*((unsigned char *)p_LocalNetwork + 13) || !v19)
      && (v22 = p_LocalNetwork[5], v22 > 0)
      && (*(unsigned __int8 (**)(int *, int, unsigned int))(*p_LocalNetwork + 8))(p_LocalNetwork, v19 + v22, 0) )
    {
      v23 = p_LocalNetwork[4]; /*0x7b1705*/
      v24 = p_LocalNetwork[1]; /*0x7b1708*/
      p_LocalNetwork[4] = v23 + 1; /*0x7b170e*/
      *(unsigned int *)(v24 + 4 * v23) = v18; /*0x7b1711*/
    }
    return 0; /*0x7b1711*/
  }
  Debug::Log(); /*0x7b1671*/
  if ( !byte_B7801C ) /*0x7b1680*/
    byte_B7801C = 1; /*0x7b1682*/
  if ( BYTE2(v18[2].NetworkID_field_0x04) ) /*0x7b1689*/
  {
    __3_YAXPAX_Z(v18); /*0x7b1691*/
  }
  else
  {
    BYTE1(v18[2].NetworkID_field_0x04) = 0; /*0x7b16a5*/
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

  a1->LocalNode[0] = 0; /*0x7b19d2*/
  a1->LocalNode[4] = 0; /*0x7b19d5*/
  a1->q014 = 1; /*0x7b19d8*/
  a1->q015 = 0; /*0x7b19db*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3238) */  /*0x7b19de*/
  a1->q01C = 10; /*0x7b19e1*/
  a1->u32_18 = 0; /*0x7b19e4*/
  a1->u32_24 = 0; /*0x7b19e7*/
  a1->u32_28 = 0; /*0x7b19ea*/
  a1->q02C = 1; /*0x7b19ed*/
  a1->q02D = 0; /*0x7b19f0*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3238) */  /*0x7b19f3*/
  a1->q034 = 10; /*0x7b19f6*/
  a1->q030 = 0; /*0x7b19f9*/
  a1->q04C = 10; /*0x7b19fc*/
  a1->u32_3C = 0; /*0x7b1a02*/
  a1->q040 = 0; /*0x7b1a05*/
  a1->q044 = 1; /*0x7b1a08*/
  a1->q045 = 0; /*0x7b1a0b*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3238) */  /*0x7b1a0e*/
  a1->__pad_48 = 0; /*0x7b1a11*/
  a1->u32_3F06C = -1; /*0x7b1a14*/
  a1->u32_3F070 = -1; /*0x7b1a1a*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7F79BC) */  /*0x7b1a20*/
  a1->q3F068 = 0; /*0x7b1a26*/
  unsigned char *v2 = &a1->q066; // eax /*0x7b1a2c*/
  int v3 = 128; // edx /*0x7b1a2f*/
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
  a1->u32_3F05C = 0; /*0x7b1a76*/
  a1->u32_3F060 = 0; /*0x7b1a7c*/
  a1->q3F064 = 0; /*0x7b1a82*/
  a1->u32_3F050 = 0; /*0x7b1a88*/
  a1->q3F054 = 0; /*0x7b1a8e*/
  a1->Initialized = 576; /*0x7b1a94*/
  Debug::Log(); /*0x7b1a9b*/
  return a1; /*0x7b1aa5*/
}
} // namespace gamemd
// 0x7B1B80
namespace gamemd {
int IPXInterfaceClass::AddRef(void *a1)
{

  if ( *((unsigned int *)a1 + 64539) != -1 ) /*0x7b1b8c*/
  {
    closesocket(*((unsigned int *)a1 + 64539)); /*0x7b1b8f*/
    *((unsigned int *)a1 + 64539) = -1; /*0x7b1b94*/
  }
  int result; // eax
  result = *((unsigned int *)a1 + 64540); /*0x7b1b9e*/
  if ( result != -1 ) /*0x7b1ba7*/
  {
    result = closesocket(*((unsigned int *)a1 + 64540)); /*0x7b1baa*/
    *((unsigned int *)a1 + 64540) = -1; /*0x7b1baf*/
  }
  return result; /*0x7b1bb9*/
}
} // namespace gamemd
// 0x7B1BC0
namespace gamemd {
AbstractClass * * IPXInterfaceClass::Receive()
{


  HWND v2; // eax
  v2 = (HWND)(*(int (**)(WinsockInterfaceClass *, int))(this->Socket + 56))(this, -1); /*0x7b1bc9*/
  int v6; // [esp+0h] [ebp-4h]
  if ( WSAAsyncSelect(this->u32_3F06C), (SOCKET)g_hWnd, v2, 3u, v6) != (AnimClass *)-1 ) /*0x7b1be3*/
  {
    int v4 = this->u32_3F070; // eax /*0x7b1bfc*/
    if ( v4 == -1 ) /*0x7b1c05*/
      return (gamemd::AbstractClass **)(1); /*0x7b1c05*/
    HWND v5; // eax
    v5 = (HWND)(*(int (**)(WinsockInterfaceClass *, int))(this->Socket + 56))(this, v4); /*0x7b1c0e*/
    int v7; // [esp+0h] [ebp-4h]
    if ( WSAAsyncSelect(this->u32_3F070), (SOCKET)g_hWnd, v5, 3u, v7) != (AnimClass *)-1 ) /*0x7b1c27*/
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

  while ( this->u32_18 ) /*0x7b1ca6*/
  {
    int v2 = **&this->LocalNode[0]; // eax /*0x7b1cae*/
    if ( v2->q016 ) /*0x7b1cb0*/
    {
      operator delete((void *)(**&this->LocalNode[0])); /*0x7b1cb6*/
    }
    else
    {
      v2->u8_15 = 0; /*0x7b1cc0*/
      --this->u32_3F05C; /*0x7b1cca*/
    }
    int v3 = this->u32_18; // eax /*0x7b1cd0*/
    if ( v3 > 0 ) /*0x7b1cd5*/
    {
      int v4 = v3 - 1; // ecx /*0x7b1cd7*/
      int v5 = 0; // eax /*0x7b1cda*/
      for ( this->u32_18 = v4; /*0x7b1ce1*/
  v5 < this->u32_18;
  *(unsigned int *)(this->LocalNode[0] + 4 * v5 - 4) = *(unsigned int *)(this->LocalNode[0] + 4 * v5) )
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
  int v3; // esi

  unsigned char *result = 0; // eax /*0x7b2249*/
  if ( *((unsigned int *)a1 + 64535) == 128 ) /*0x7b2253*/
  {
    result = (unsigned char *)operator new(0x2A0u); /*0x7b225a*/
    result[22] = 1; /*0x7b2264*/
    result[21] = 1; /*0x7b2267*/
  }
  else
  {
    int v2 = 0; // edi /*0x7b226c*/
    while ( 1 ) /*0x7b226e*/
    {
      v3 = *((unsigned int *)a1 + 64532); /*0x7b226e*/
      *((unsigned int *)a1 + 64532) = v3 + 1; /*0x7b227a*/
      if ( v3 + 1 > 127 ) /*0x7b2280*/
        *((unsigned int *)a1 + 64532) = 0; /*0x7b2282*/
      if ( !*((unsigned char *)a1 + 672 * v3 + 101) ) /*0x7b2297*/
        break; /*0x7b2297*/
      if ( ++v2 >= 128 ) /*0x7b22a4*/
        return result; /*0x7b22a4*/
    }
    result = (unsigned char *)((char *)a1 + 672 * v3 + 80); /*0x7b22b9*/
    *((unsigned char *)a1 + 672 * v3 + 101) = 1; /*0x7b22bd*/
    ++*((unsigned int *)a1 + 64535); /*0x7b22c8*/
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
int16_t IPXInterfaceClass::Connect(const void * a1, unsigned int a3, char aP3)  // G42.40f-d truth 0x7B24E0
{

  unsigned char *v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  unsigned int *v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  UINT v15; // eax

  v5 = AudioQueue::AllocBuffer((AudioQueue *)this, aP3); /*0x7b24f4*/
  memcpy(v5 + 32, a1, a3); /*0x7b2505*/
  v5->q010 = a3; /*0x7b250e*/
  (*(void (**)(WinsockInterfaceClass *, unsigned char *))(this->Socket + 84))(this, v5); /*0x7b2516*/
  v5->q014 = 1; /*0x7b251d*/
  if ( aP3 ) /*0x7b2523*/
  {
    v6 = this->q040; /*0x7b2525*/
    if ( this->__pad_48 < v6 /*0x7b254d*/
      || (this->q045 || !v6)
      && (v7 = this->q04C, v7 > 0)
      && (*(unsigned __int8 (**)(char *, int, unsigned int))(this->q038 + 8))(
           &this->q038,
           v6 + v7,
           0) )
    {
      v8 = this->__pad_48; /*0x7b2554*/
      v9 = (unsigned int *)this->u32_3C; /*0x7b2557*/
      this->__pad_48 = v8 + 1; /*0x7b255d*/
      v9[v8] = (unsigned int)v5; /*0x7b2560*/
    }
    v10 = this->u32_3F070; /*0x7b2563*/
  }
  else
  {
    v11 = this->u32_28; /*0x7b256b*/
    if ( this->q030 < v11 /*0x7b2593*/
      || (this->q02D || !v11)
      && (v12 = this->q034, v12 > 0)
      && (*(unsigned __int8 (**)(char *, int, unsigned int))(this->q020 + 8))(
           &this->q020,
           v11 + v12,
           0) )
    {
      v13 = this->q030; /*0x7b259a*/
      v14 = this->u32_24; /*0x7b259d*/
      this->q030 = v13 + 1; /*0x7b25a3*/
      *(unsigned int *)(v14 + 4 * v13) = v5; /*0x7b25a6*/
    }
    v10 = this->u32_3F06C; /*0x7b25a9*/
  }
  v15 = (*(int (**)(WinsockInterfaceClass *, int))(this->Socket + 56))(this, v10); /*0x7b25b9*/
  SendMessageA(g_hWnd, v15, 0, 2); /*0x7b25c3*/
  return EventQueue::Process((EventQueue *)dword_87F770); /*0x7b25d4*/

}
} // namespace gamemd
// 0x7B2A20
namespace gamemd {
AbstractClass * * IPXInterfaceClass::getSocketState(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x7b2a2c*/
  {
    (this->LocalNode[0]) = ((this->LocalNode[0]) & ~0xFF) | ((0) & 0xFF); /*0x7b2a32*/
    if ( a3 ) /*0x7b2a38*/
      v4 = a3; /*0x7b2a4e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x7b2a4a*/
    (this->LocalNode[0]) = ((this->LocalNode[0]) & ~0xFF) | ((1) & 0xFF); /*0x7b2a52*/
    if ( !v4 ) /*0x7b2a56*/
      return 0; /*0x7b2aca*/
    if ( *&this->Initialized ) /*0x7b2a58*/
    {
      m_8 = this->LocalNetwork; /*0x7b2a5f*/
      if ( a2 < m_8 ) /*0x7b2a64*/
        m_8 = a2; /*0x7b2a66*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Initialized + 4 * i - 4) ) /*0x7b2a6c*/
        ++i; /*0x7b2a71*/
      if ( (((this->LocalNode[0]) >> 8) & 0xFF) ) /*0x7b2a7e*/
      {
        __3_YAXPAX_Z(*&this->Initialized); /*0x7b2a89*/
        *&this->Initialized = 0; /*0x7b2a91*/
      }
    }
    *&this->Initialized = v4; /*0x7b2a9a*/
    this->LocalNetwork = a2; /*0x7b2aa2*/
    this->LocalNode[1] = a3 == 0; /*0x7b2aa5*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAUWinsockBufferType_WinsockInterfaceClass *))(*(unsigned int *)this->Socket /*0x7b2aae*/
                                                                                             + 12))(this);
  }
  v7 = (void *)this->LocalNetwork; /*0x7b2ab1*/
  if ( (int)v7 < this->LocalNode[4] ) /*0x7b2ab9*/
    this->LocalNode[4] = (int)v7; /*0x7b2abb*/
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
    operator delete((this)); /*0x7b17a0*/
  return this; /*0x7b17aa*/
}
} // namespace gamemd
// 0x7B1FD0
namespace gamemd {
int IPXInterfaceClass::SetAddress(unsigned int * a1)
{

  int v1 = 0; // ebx /*0x7b1fd8*/
  WinsockInterfaceClass *v2; // ebp
  v2 = (WinsockInterfaceClass *)((char *)a1 + 28); /*0x7b1fdd*/
  int v3; // eax
  v3 = *((unsigned int *)a1 + 4); /*0x7b1fe0*/
  *((unsigned int *)a1 + 7) = 0; /*0x7b1fe4*/
  int *v4; // esi
  v4 = (int *)((char *)a1 + 32); /*0x7b1fed*/
  int result = v3 / 4; // eax /*0x7b1ff0*/
  if ( result > 0 ) /*0x7b1ff5*/
  {
    do /*0x7b2012*/
    {
      int v6; // edx
      v6 = *v4++; /*0x7b1ff7*/
      ComputeHash(v2, v6); /*0x7b1ffe*/
      ++v1; /*0x7b2006*/
      result = *((unsigned int *)a1 + 4) / 4; /*0x7b200d*/
    }
    while ( v1 < result ); /*0x7b2012*/
  }
  int v7; // edi
  v7 = *((unsigned int *)a1 + 4) & 3; /*0x7b2017*/
  if ( v7 ) /*0x7b201a*/
    return ComputeHash(v2, *v4 & (0xFFFFFFFF >> (32 - 8 * v7))); /*0x7b2035*/
  return result; /*0x7b203a*/
}
} // namespace gamemd
// 0x7B25E0
namespace gamemd {
int IPXInterfaceClass::GetAddress(unsigned int s, void *a2, void *a3, void *a4)
{

  WinsockInterfaceClass *v1; // esi
  v1 = (gamemd::WinsockInterfaceClass *)(this); /*0x7b25e6*/
  int optlen; // [esp+4h] [ebp-4h] BYREF
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


  void *v2 = *&this->Initialized; // eax /*0x7b2846*/
  this->LocalNode[4] = 0; /*0x7b2849*/
  if ( v2 && (((this->LocalNode[0]) >> 8) & 0xFF) ) /*0x7b2850*/
  {
    __3_YAXPAX_Z(v2); /*0x7b2856*/
    *&this->Initialized = 0; /*0x7b285e*/
  }
  (this->LocalNode[0]) = ((this->LocalNode[0]) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x7b2861*/
  this->LocalNetwork = 0; /*0x7b2864*/

}
} // namespace gamemd
// 0x7B2870
namespace gamemd {
unsigned int IPXInterfaceClass::resetSocket(int a2)
{

  if ( ((this->LocalNode[0]) & 0xFF) ) /*0x7b2870*/
    return (unsigned int)(a2 - *&this->Initialized) >> 2; /*0x7b2885*/
  else
    return 0; /*0x7b2877*/

}
} // namespace gamemd
// 0x7B2AD0
namespace gamemd {
int IPXInterfaceClass::initSession(unsigned int * a2)
{


  int m_10 = this->LocalNode[4]; // edx /*0x7b2ad0*/
  int result = 0; // eax /*0x7b2ad3*/
  if ( m_10 <= 0 ) /*0x7b2ad8*/
    return -1; /*0x7b2aef*/
  unsigned int *i; // ecx
  for ( i = *&this->Initialized; *i != *a2; ++i ) /*0x7b2ade*/
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


  void *v3 = *&this->LocalNode[1]; // eax /*0x7b2b53*/
  /* X11: ptr_0 install elided (implicit via VectorClass virtuals 0x7b2b56) */
  if ( v3 && (((this->LocalNode[0]) >> 8) & 0xFF) ) /*0x7b2b60*/
  {
    __3_YAXPAX_Z(v3); /*0x7b2b68*/
    *&this->Initialized = 0; /*0x7b2b70*/
  }
  (this->LocalNode[0]) = ((this->LocalNode[0]) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x7b2b7b*/
  this->LocalNetwork = 0; /*0x7b2b81*/
  if ( (a2 & 1) != 0 ) /*0x7b2b88*/
    __3_YAXPAX_Z(this); /*0x7b2b8b*/
  return this->Socket; /*0x7b2b95*/

}
} // namespace gamemd