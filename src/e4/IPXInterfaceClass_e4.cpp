// E4 materialized pending bodies (auto-generated from full_export v3)
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

// 0x7B0D90
namespace gamemd {
int IPXInterfaceClass::Construct()
{

  this->IPXInterfaceClass::bindSocket(); /*0x7b0d93*/
  *this = &vt_IPXInterfaceClass; /*0x7b0da4*/
  *((unsigned int *)this + 64703) = -1; /*0x7b0dad*/
  *((unsigned int *)this + 64704) = -1; /*0x7b0db3*/
  *((unsigned short *)this + 129410) = -1; /*0x7b0db8*/
  *(unsigned int *)((char *)this + 258822) = -1; /*0x7b0dc2*/
  *((unsigned short *)this + 129413) = -1; /*0x7b0dc8*/
  return this; /*0x7b0dce*/

}
} // namespace gamemd
// 0x7B0DD0
namespace gamemd {
int IPXInterfaceClass::initSocket( IUnknown * aP1, Color * aP2)
{
    unsigned int v4 = 0;  /* G37 hoist */

  SOCKET v4; // esi
  Color *v6; // ecx
  Color *v7; // ecx
  int v8; // eax
  int16_t v9; // dx
  char optval[4]; // [esp+Ch] [ebp-34h] BYREF
  int optlen; // [esp+10h] [ebp-30h] BYREF
  int v12; // [esp+14h] [ebp-2Ch] BYREF
  struct sockaddr name; // [esp+18h] [ebp-28h] BYREF
  char v14[24]; // [esp+28h] [ebp-18h] BYREF

  v4 = socket(6, 2, 1000); /*0x7b0de6*/
  if ( v4 == -1 ) /*0x7b0deb*/
    return 0; /*0x7b0df5*/
  memset(name.sa_data, 0, 12); /*0x7b0dfe*/
  name.sa_family = 6; /*0x7b0e13*/
  if ( bind(v4, &name, 14) == -1 ) /*0x7b0e22*/
  {
    closesocket(v6); /*0x7b0e25*/
    return 0; /*0x7b0e32*/
  }
  *(unsigned int *)optval = 1; /*0x7b0e44*/
  optlen = 4; /*0x7b0e4e*/
  if ( g_abs_87F8E4 /*0x7b0e63*/
    && *(unsigned int *)&g_abs_87F8E4 == 4
    && !*(unsigned int *)&g_abs_87F8E4 )
  {
    this->Debug::Log(); /*0x7b0eae*/
  }
  else if ( getsockopt(v4, 1000, 16397, optval, &optlen) ) /*0x7b0e7a*/
  {
    WSAGetLastError(); /*0x7b0e94*/
    this->Debug::Log(); /*0x7b0e9f*/
  }
  else if ( (int)aP1 >= *(int *)optval ) /*0x7b0e87*/
  {
    return 0; /*0x7b0e91*/
  }
  memset(v14, 0, sizeof(v14)); /*0x7b0ec2*/
  *(unsigned int *)v14 = aP1; /*0x7b0ed9*/
  v12 = 24; /*0x7b0edd*/
  if ( getsockopt(v4, 1000, 16391, v14, &v12) == -1 ) /*0x7b0eee*/
  {
    WSAGetLastError(); /*0x7b0ef0*/
    this->Debug::Log(); /*0x7b0efc*/
    closesocket(v7); /*0x7b0f05*/
    return 0; /*0x7b0f0c*/
  }
  else
  {
    v8 = *(unsigned int *)&v14[4]; /*0x7b0f19*/
    v9 = *(unsigned short *)&v14[12]; /*0x7b0f1d*/
    *(int *)((char *)&aP2->Color_field_00 + 2) = *(int *)&v14[4]; /*0x7b0f23*/
    *(this + 64703) = v8; /*0x7b0f26*/
    *(Color *)((char *)aP2 + 6) = *(Color *)&v14[8]; /*0x7b0f33*/
    IDA_HIWORD(aP2[2].Color_field_00) = v9; /*0x7b0f35*/
    closesocket((Color *)((char *)aP2 + 6)); /*0x7b0f39*/
    return 1; /*0x7b0f40*/
  }

}
} // namespace gamemd
// 0x7B13D0
namespace gamemd {
AbstractClass * * IPXInterfaceClass::SendPacket(ObjectClass * aP1, int a3, int a4, unsigned int fromlen)
{

  CCINIClass *v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  SOCKET v11; // eax
  int v12; // eax
  int v13; // ecx
  u_short *v14; // edi
  int *v15; // esi
  bool v16; // zf
  int v17; // esi
  CCINIClass *v18; // ebx
  int v19; // eax
  int v20; // ecx
  u_short *v21; // ebp
  int v22; // ecx
  int v23; // eax
  ObjectClass *v24; // edx
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
        (*(void (**)(u_short *, unsigned int))(*(unsigned int *)this + 36))(this, *((unsigned int *)this + 64539)); /*0x7b1411*/
        return 0; /*0x7b1429*/
      }
      if ( *((unsigned int *)this + 12) ) /*0x7b142c*/
      {
        while ( 1 ) /*0x7b1446*/
        {
          v25 = *((unsigned int *)this + 129414); /*0x7b1446*/
          v7 = (CCINIClass *)**((unsigned int **)this + 9); /*0x7b1447*/
          to.sa_family = 6; /*0x7b1449*/
          *(unsigned short *)&to.sa_data[10] = htons(v25); /*0x7b1453*/
          if ( LOBYTE(v7->sectionHead[1]) ) /*0x7b1458*/
          {
            *(unsigned int *)to.sa_data = *((unsigned int *)this + 64703); /*0x7b146b*/
            *(unsigned int *)&to.sa_data[4] = *((unsigned int *)this + 64704); /*0x7b1471*/
            *(unsigned short *)&to.sa_data[8] = *((unsigned int *)this + 129410); /*0x7b1479*/
          }
          else
          {
            Network::CopyAddress(v7, &a3, (int)&v27); /*0x7b148c*/
            *(unsigned int *)to.sa_data = a3; /*0x7b149e*/
            *(unsigned int *)&to.sa_data[4] = v27; /*0x7b14a2*/
            *(unsigned short *)&to.sa_data[8] = v28; /*0x7b14a6*/
          }
          if ( sendto(*((unsigned int *)this + 64539), (const char *)&v7->sectionCount, v7->sectionHead[0] + 4, 0, &to, 14) == -1 /*0x7b14da*/
            && WSAGetLastError() != 10035 )
          {
            break; /*0x7b14da*/
          }
          v8 = *((unsigned int *)this + 12); /*0x7b14e0*/
          if ( v8 > 0 ) /*0x7b14e5*/
          {
            v9 = v8 - 1; /*0x7b14e7*/
            v10 = 0; /*0x7b14ea*/
            for ( *((unsigned int *)this + 12) = v9; /*0x7b14f1*/
                  v10 < *((unsigned int *)this + 12);
                  *(unsigned int *)(*((unsigned int *)this + 9) + 4 * v10 - 4) = *(unsigned int *)(*((unsigned int *)this + 9) + 4 * v10) )
            {
              ++v10; /*0x7b14f6*/
            }
          }
          if ( BYTE2(v7->sectionHead[1]) ) /*0x7b1505*/
          {
            __3_YAXPAX_Z(v7); /*0x7b150d*/
          }
          else
          {
            BYTE1(v7->sectionHead[1]) = 0; /*0x7b1517*/
            --*((unsigned int *)this + 64536); /*0x7b1522*/
          }
          if ( !*((unsigned int *)this + 12) ) /*0x7b1528*/
            return 0; /*0x7b153c*/
        }
        goto LABEL_6; /*0x7b14da*/
      }
    }
    return 0; /*0x7b1431*/
  }
  if ( HIWORD(fromlen) ) /*0x7b153f*/
  {
    (*(void (**)(u_short *, unsigned int))(*(unsigned int *)this + 36))(this, *((unsigned int *)this + 64539)); /*0x7b1550*/
    return 0; /*0x7b155c*/
  }
  v11 = *((unsigned int *)this + 64539); /*0x7b1577*/
  fromlen = 14; /*0x7b157d*/
  v12 = recvfrom(v11, (char *)this + 258164, 640, 0, &to, (int *)&fromlen); /*0x7b1586*/
  v26 = v12; /*0x7b158e*/
  if ( v12 == -1 ) /*0x7b1592*/
  {
    if ( WSAGetLastError() != 10035 ) /*0x7b159e*/
    {
      (*(void (**)(u_short *, unsigned int))(*(unsigned int *)this + 36))(this, *((unsigned int *)this + 64539)); /*0x7b15b0*/
      return 0; /*0x7b15bc*/
    }
    return 0; /*0x7b159e*/
  }
  if ( !v12 ) /*0x7b15c1*/
    return 0; /*0x7b15c1*/
  v27 = *(unsigned int *)&to.sa_data[4]; /*0x7b15d4*/
  a3 = *(unsigned int *)to.sa_data; /*0x7b15d8*/
  v28 = *(unsigned short *)&to.sa_data[8]; /*0x7b15e6*/
  if ( *(unsigned int *)to.sa_data == *((unsigned int *)this + 64703) ) /*0x7b15ef*/
  {
    v13 = 3; /*0x7b15f1*/
    v14 = (unsigned int *)this + 129411; /*0x7b15f6*/
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
  if ( v17 > 0 && Random::Range(&MEMORY[0x87F8E4].__pad_5568[7484], 0, (IUnknown *)0x63) <= v17 ) /*0x7b1626*/
    return 0; /*0x7b1717*/
  v18 = (CCINIClass *)IPXInterfaceClass::processPacket(this); /*0x7b1633*/
  v18->sectionHead[0] = v26 - 4; /*0x7b1646*/
  v18->sectionCount = *((unsigned int *)this + 64541); /*0x7b1651*/
  qmemcpy(v18->__pad_20, (unsigned int *)this + 129084, v26 - 4); /*0x7b1657*/
  if ( (*(unsigned __int8 (**)(u_short *, CCINIClass *))(*(unsigned int *)this + 88))(this, v18) ) /*0x7b1665*/
  {
    NetworkID::Assign(v18, (IPXManagerClass *)&a3, (int)&v27, 0); /*0x7b16d0*/
    v19 = *((unsigned int *)this + 4); /*0x7b16d5*/
    v20 = *((unsigned int *)this + 6); /*0x7b16d8*/
    v21 = (unsigned int *)this + 4; /*0x7b16db*/
    if ( v20 < v19 /*0x7b16fe*/
      || (*((unsigned char *)v21 + 13) || !v19)
      && (v22 = *((unsigned int *)v21 + 5), v22 > 0)
      && (*(unsigned __int8 (**)(u_short *, int, unsigned int))(*(unsigned int *)v21 + 8))(v21, v19 + v22, 0) )
    {
      v23 = *((unsigned int *)v21 + 4); /*0x7b1705*/
      v24 = (ObjectClass *)*((unsigned int *)v21 + 1); /*0x7b1708*/
      *((unsigned int *)v21 + 4) = v23 + 1; /*0x7b170e*/
      *(unsigned int *)&v24->__pad_0[4 * v23] = v18; /*0x7b1711*/
    }
    return 0; /*0x7b1711*/
  }
  Debug::Log(); /*0x7b1671*/
  if ( !byte_B7801C ) /*0x7b1680*/
    byte_B7801C = 1; /*0x7b1682*/
  if ( BYTE2(v18->sectionHead[1]) ) /*0x7b1689*/
  {
    __3_YAXPAX_Z(v18); /*0x7b1691*/
  }
  else
  {
    BYTE1(v18->sectionHead[1]) = 0; /*0x7b16a5*/
    --*((unsigned int *)this + 64536); /*0x7b16b1*/
  }
  return 0; /*0x7b13e4*/

}
} // namespace gamemd
// 0x7B1760
namespace gamemd {
int IPXInterfaceClass::GetLocalAddress(int a2)
{

  *((unsigned int *)this + 64702) = a2; /*0x7b1764*/
  return a2; /*0x7b176a*/

}
} // namespace gamemd
// 0x7B19C0
namespace gamemd {
void * IPXInterfaceClass::bindSocket()
{

  unsigned char *v2; // eax
  int v3; // edx

  *((unsigned int *)this + 3) = 0; /*0x7b19d2*/
  *((unsigned int *)this + 4) = 0; /*0x7b19d5*/
  *((unsigned char *)this + 20) = 1; /*0x7b19d8*/
  *((unsigned char *)this + 21) = 0; /*0x7b19db*/
  *((unsigned int *)this + 2) = &vt_DynamicVectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b19de*/
  *((unsigned int *)this + 7) = 10; /*0x7b19e1*/
  *((unsigned int *)this + 6) = 0; /*0x7b19e4*/
  *((unsigned int *)this + 9) = 0; /*0x7b19e7*/
  *((unsigned int *)this + 10) = 0; /*0x7b19ea*/
  *((unsigned char *)this + 44) = 1; /*0x7b19ed*/
  *((unsigned char *)this + 45) = 0; /*0x7b19f0*/
  *((unsigned int *)this + 8) = &vt_DynamicVectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b19f3*/
  *((unsigned int *)this + 13) = 10; /*0x7b19f6*/
  *((unsigned int *)this + 12) = 0; /*0x7b19f9*/
  *((unsigned int *)this + 19) = 10; /*0x7b19fc*/
  *((unsigned int *)this + 15) = 0; /*0x7b1a02*/
  *((unsigned int *)this + 16) = 0; /*0x7b1a05*/
  *((unsigned char *)this + 68) = 1; /*0x7b1a08*/
  *((unsigned char *)this + 69) = 0; /*0x7b1a0b*/
  *((unsigned int *)this + 14) = &vt_DynamicVectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b1a0e*/
  *((unsigned int *)this + 18) = 0; /*0x7b1a11*/
  *((unsigned int *)this + 64539) = -1; /*0x7b1a14*/
  *((unsigned int *)this + 64540) = -1; /*0x7b1a1a*/
  *(unsigned int *)this = &vt_WinsockInterfaceClass; /*0x7b1a20*/
  *((unsigned char *)this + 258152) = 0; /*0x7b1a26*/
  v2 = (unsigned char *)this + 102; /*0x7b1a2c*/
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
  *((unsigned int *)this + 64535) = 0; /*0x7b1a76*/
  *((unsigned int *)this + 64536) = 0; /*0x7b1a7c*/
  *((unsigned int *)this + 64537) = 0; /*0x7b1a82*/
  *((unsigned int *)this + 64532) = 0; /*0x7b1a88*/
  *((unsigned int *)this + 64533) = 0; /*0x7b1a8e*/
  *((unsigned int *)this + 1) = 576; /*0x7b1a94*/
  this->Debug::Log(); /*0x7b1a9b*/
  return this; /*0x7b1aa5*/

}
} // namespace gamemd
// 0x7B1B80
namespace gamemd {
int IPXInterfaceClass::AddRef()
{

  int result; // eax

  if ( *((unsigned int *)this + 64539) != -1 ) /*0x7b1b8c*/
  {
    closesocket(*((unsigned int *)this + 64539)); /*0x7b1b8f*/
    *((unsigned int *)this + 64539) = -1; /*0x7b1b94*/
  }
  result = *((unsigned int *)this + 64540); /*0x7b1b9e*/
  if ( result != -1 ) /*0x7b1ba7*/
  {
    result = closesocket(*((unsigned int *)this + 64540)); /*0x7b1baa*/
    *((unsigned int *)this + 64540) = -1; /*0x7b1baf*/
  }
  return result; /*0x7b1bb9*/

}
} // namespace gamemd
// 0x7B1BC0
namespace gamemd {
AbstractClass * * IPXInterfaceClass::Receive()
{

  u_int v2; // eax
  int v4; // eax
  u_int v5; // eax

  v2 = (*(int (**)(SOCKET *, int))(*(unsigned int *)this + 224))(this, -1); /*0x7b1bc9*/
  if ( WSAAsyncSelect(*((unsigned int *)this + 64539), g_hWnd, v2, 3) != -1 ) /*0x7b1be3*/
  {
    v4 = *((unsigned int *)this + 64540); /*0x7b1bfc*/
    if ( v4 == -1 ) /*0x7b1c05*/
      return 1; /*0x7b1c05*/
    v5 = (*(int (**)(SOCKET *, int))(*(unsigned int *)this + 224))(this, v4); /*0x7b1c0e*/
    if ( WSAAsyncSelect(*((unsigned int *)this + 64540), g_hWnd, v5, 3) != -1 ) /*0x7b1c27*/
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

  while ( *((unsigned int *)this + 6) ) /*0x7b1ca6*/
  {
    v2 = **(unsigned int **)((char *)this + 12); /*0x7b1cae*/
    if ( *(unsigned char *)(v2 + 22) ) /*0x7b1cb0*/
    {
      RA2_OPDEL(**(void ***)((char *)this + 12)); /*0x7b1cb6*/
    }
    else
    {
      *(unsigned char *)(v2 + 21) = 0; /*0x7b1cc0*/
      --*((unsigned int *)this + 64535); /*0x7b1cca*/
    }
    v3 = *((unsigned int *)this + 6); /*0x7b1cd0*/
    if ( v3 > 0 ) /*0x7b1cd5*/
    {
      v4 = v3 - 1; /*0x7b1cd7*/
      v5 = 0; /*0x7b1cda*/
      for ( *((unsigned int *)this + 6) = v4; /*0x7b1ce1*/
            v5 < *((unsigned int *)this + 6);
            *(unsigned int *)(*((unsigned int *)this + 3) + 4 * v5 - 4) = *(unsigned int *)(*((unsigned int *)this + 3) + 4 * v5) )
      {
        ++v5; /*0x7b1ce6*/
      }
    }
  }
  *((unsigned int *)this + 64535) = 0; /*0x7b1cfa*/
  *((unsigned int *)this + 64532) = 0; /*0x7b1d00*/

}
} // namespace gamemd
// 0x7B2240
namespace gamemd {
unsigned char * IPXInterfaceClass::processPacket()
{

  unsigned char *result; // eax
  int v2; // edi
  int v3; // esi

  result = 0; /*0x7b2249*/
  if ( *((unsigned int *)this + 64535) == 128 ) /*0x7b2253*/
  {
    result = __2_YAPAXI_Z(0x2A0u); /*0x7b225a*/
    result[22] = 1; /*0x7b2264*/
    result[21] = 1; /*0x7b2267*/
  }
  else
  {
    v2 = 0; /*0x7b226c*/
    while ( 1 ) /*0x7b226e*/
    {
      v3 = *((unsigned int *)this + 64532); /*0x7b226e*/
      *((unsigned int *)this + 64532) = v3 + 1; /*0x7b227a*/
      if ( v3 + 1 > 127 ) /*0x7b2280*/
        *((unsigned int *)this + 64532) = 0; /*0x7b2282*/
      if ( !*((unsigned char *)this + 672 * v3 + 101) ) /*0x7b2297*/
        break; /*0x7b2297*/
      if ( ++v2 >= 128 ) /*0x7b22a4*/
        return result; /*0x7b22a4*/
    }
    result = (unsigned int *)this + 168 * v3 + 20; /*0x7b22b9*/
    *((unsigned char *)this + 672 * v3 + 101) = 1; /*0x7b22bd*/
    ++*((unsigned int *)this + 64535); /*0x7b22c8*/
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
AnimClass * * IPXInterfaceClass::Connect(const void * a1, unsigned int a3, UDPInterfaceClass * aP3)
{

  UDPInterfaceClass *v5; // ebx
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

  v5 = (UDPInterfaceClass *)AudioQueue::AllocBuffer((unsigned int *)this, (WinsockInterfaceClass *)aP3); /*0x7b24f4*/
  qmemcpy(&v5[4], a1, a3); /*0x7b2505*/
  v5[2].Socket = a3; /*0x7b250e*/
  (*(void (**)(int, UDPInterfaceClass *))(*(unsigned int *)this + 84))(this, v5); /*0x7b2516*/
  v5[2].Initialized = 1; /*0x7b251d*/
  if ( (unsigned char)aP3 ) /*0x7b2523*/
  {
    v6 = *((unsigned int *)this + 16); /*0x7b2525*/
    if ( *((unsigned int *)this + 18) < v6 /*0x7b254d*/
      || (*((unsigned char *)this + 69) || !v6)
      && (v7 = *((unsigned int *)this + 19), v7 > 0)
      && (*(unsigned __int8 (**)(int, int, unsigned int))(*((unsigned int *)this + 14) + 8))((char *)this + 56, v6 + v7, 0) )
    {
      v8 = *((unsigned int *)this + 18); /*0x7b2554*/
      v9 = *((unsigned int *)this + 15); /*0x7b2557*/
      *((unsigned int *)this + 18) = v8 + 1; /*0x7b255d*/
      *(unsigned int *)(v9 + 4 * v8) = v5; /*0x7b2560*/
    }
    v10 = *((unsigned int *)this + 64540); /*0x7b2563*/
  }
  else
  {
    v11 = *((unsigned int *)this + 10); /*0x7b256b*/
    if ( *((unsigned int *)this + 12) < v11 /*0x7b2593*/
      || (*((unsigned char *)this + 45) || !v11)
      && (v12 = *((unsigned int *)this + 13), v12 > 0)
      && (*(unsigned __int8 (**)(int, int, unsigned int))(*((unsigned int *)this + 8) + 8))((char *)this + 32, v11 + v12, 0) )
    {
      v13 = *((unsigned int *)this + 12); /*0x7b259a*/
      v14 = *((unsigned int *)this + 9); /*0x7b259d*/
      *((unsigned int *)this + 12) = v13 + 1; /*0x7b25a3*/
      *(unsigned int *)(v14 + 4 * v13) = v5; /*0x7b25a6*/
    }
    v10 = *((unsigned int *)this + 64539); /*0x7b25a9*/
  }
  v15 = (*(int (**)(int, int))(*(unsigned int *)this + 56))(this, v10); /*0x7b25b9*/
  SendMessageA((HWND)g_hWnd, v15, 0, 2); /*0x7b25c3*/
  return EventQueue::Process(MEMORY[0x87F770]); /*0x7b25d4*/

}
} // namespace gamemd
// 0x7B2A20
namespace gamemd {
AbstractClass * * IPXInterfaceClass::getSocketState(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7b2a2c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x7b2a32*/
    if ( a3 ) /*0x7b2a38*/
      v4 = a3; /*0x7b2a4e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x7b2a4a*/
    *((unsigned char *)this + 12) = 1; /*0x7b2a52*/
    if ( !v4 ) /*0x7b2a56*/
      return 0; /*0x7b2aca*/
    if ( *((unsigned int *)this + 1) ) /*0x7b2a58*/
    {
      v5 = *((unsigned int *)this + 2); /*0x7b2a5f*/
      if ( a2 < v5 ) /*0x7b2a64*/
        v5 = a2; /*0x7b2a66*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x7b2a6c*/
        ++i; /*0x7b2a71*/
      if ( *((unsigned char *)this + 13) ) /*0x7b2a7e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x7b2a89*/
        *((unsigned int *)this + 1) = 0; /*0x7b2a91*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x7b2a9a*/
    *((unsigned int *)this + 2) = a2; /*0x7b2aa2*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x7b2aa5*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x7b2aae*/
  }
  v7 = *((unsigned int *)this + 2); /*0x7b2ab1*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x7b2ab9*/
    *((unsigned int *)this + 4) = v7; /*0x7b2abb*/
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
int IPXInterfaceClass::Send(int a1)
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
IPXInterfaceClass * IPXInterfaceClass::QueryInterface(void * Block, char a2)
{

  WinsockInterfaceClass::WinsockInterfaceClass((int)Block); /*0x7b1793*/
  if ( (Block & 1) != 0 ) /*0x7b179d*/
    RA2_OPDEL(Block); /*0x7b17a0*/
  return (IPXInterfaceClass *)Block; /*0x7b17aa*/

}
} // namespace gamemd
// 0x7B1FD0
namespace gamemd {
int IPXInterfaceClass::SetAddress(unsigned int * a1)
{

  int v1; // ebx
  unsigned int *v2; // ebp
  int v3; // eax
  int *v4; // esi
  int result; // eax
  int v6; // edx
  int v7; // edi

  v1 = 0; /*0x7b1fd8*/
  v2 = a1 + 7; /*0x7b1fdd*/
  v3 = a1[4]; /*0x7b1fe0*/
  a1[7] = 0; /*0x7b1fe4*/
  v4 = a1 + 8; /*0x7b1fed*/
  result = v3 / 4; /*0x7b1ff0*/
  if ( result > 0 ) /*0x7b1ff5*/
  {
    do /*0x7b2012*/
    {
      v6 = *v4++; /*0x7b1ff7*/
      ComputeHash(v2, v6); /*0x7b1ffe*/
      ++v1; /*0x7b2006*/
      result = a1[4] / 4; /*0x7b200d*/
    }
    while ( v1 < result ); /*0x7b2012*/
  }
  v7 = a1[4] & 3; /*0x7b2017*/
  if ( v7 ) /*0x7b201a*/
    return ComputeHash(v2, *v4 & (0xFFFFFFFF >> (32 - 8 * v7))); /*0x7b2035*/
  return result; /*0x7b203a*/

}
} // namespace gamemd
// 0x7B25E0
namespace gamemd {
int IPXInterfaceClass::GetAddress(SOCKET s)
{

  SOCKET v1; // esi
  int optlen; // [esp+4h] [ebp-4h] BYREF

  v1 = s; /*0x7b25e6*/
  optlen = 4; /*0x7b25fb*/
  getsockopt(s, 0xFFFF, 4103, (char *)&s, &optlen); /*0x7b2603*/
  s = 0; /*0x7b261d*/
  return setsockopt(v1, 0xFFFF, 4103, (const char *)&s, optlen); /*0x7b262a*/

}
} // namespace gamemd
// 0x7B26D0
namespace gamemd {
char IPXInterfaceClass::ReceivePacket(char * name, AnimClass * aP1)
{

  if ( gethostname((IUnknown *)name, aP1) == -1 ) /*0x7b26e3*/
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

  v2 = *(void **)((char *)this + 4); /*0x7b2846*/
  *((unsigned int *)this + 4) = 0; /*0x7b2849*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x7b2850*/
  {
    RA2_OPDEL(v2); /*0x7b2856*/
    *((unsigned int *)this + 1) = 0; /*0x7b285e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x7b2861*/
  *((unsigned int *)this + 2) = 0; /*0x7b2864*/

}
} // namespace gamemd
// 0x7B2870
namespace gamemd {
unsigned int IPXInterfaceClass::resetSocket(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x7b2870*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x7b2885*/
  else
    return 0; /*0x7b2877*/

}
} // namespace gamemd
// 0x7B2AD0
namespace gamemd {
int IPXInterfaceClass::initSession(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x7b2ad0*/
  result = 0; /*0x7b2ad3*/
  if ( v2 <= 0 ) /*0x7b2ad8*/
    return -1; /*0x7b2aef*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x7b2ade*/
  {
    if ( ++result >= v2 ) /*0x7b2aed*/
      return -1; /*0x7b2aed*/
  }
  return result; /*0x7b2af2*/

}
} // namespace gamemd
// 0x7B2B50
namespace gamemd {
DynamicVector * IPXInterfaceClass::closeSession(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x7b2b53*/
  *Block = &vt_VectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b2b56*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x7b2b60*/
  {
    RA2_OPDEL(v3); /*0x7b2b68*/
    *(Block + 1) = 0; /*0x7b2b70*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x7b2b7b*/
  *(Block + 2) = 0; /*0x7b2b81*/
  if ( (Block & 1) != 0 ) /*0x7b2b88*/
    RA2_OPDEL(Block); /*0x7b2b8b*/
  return (DynamicVector *)Block; /*0x7b2b95*/

}
} // namespace gamemd