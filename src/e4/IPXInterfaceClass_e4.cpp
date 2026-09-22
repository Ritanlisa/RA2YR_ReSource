// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Network_e4.hpp"

// 0x7B0D90
unsigned int * IPXInterfaceClass::Construct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall IPXInterfaceClass_Constructor(_DWORD *this)
{
  IPXInterfaceClass::bindSocket(); /*0x7b0d93*/
  *this = &vt_IPXInterfaceClass; /*0x7b0da4*/
  this->qFCBF = -1; /*0x7b0dad*/
  this->qFCC0 = -1; /*0x7b0db3*/
  this->q1F982 = -1; /*0x7b0db8*/
  *(_DWORD *)((char *)this + 258822) = -1; /*0x7b0dc2*/
  *((_WORD *)this + 129413) = -1; /*0x7b0dc8*/
  return this; /*0x7b0dce*/
}
}

// 0x7B0DD0
int IPXInterfaceClass::initSocket(IUnknown * aP1, Color * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void IPXInterfaceClass::initSocket(IUnknown *aP1, Color *aP2)
{
  SOCKET v4; // esi
  Color *v6; // ecx
  Color *v7; // ecx
  __int16 v9; // dx
  char optval[4]; // [esp+Ch] [ebp-34h] BYREF
  int optlen; // [esp+10h] [ebp-30h] BYREF
  struct sockaddr name; // [esp+18h] [ebp-28h] BYREF

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
  *(_DWORD *)optval = 1; /*0x7b0e44*/
  optlen = 4; /*0x7b0e4e*/
  if ( DataGlobal_87F8E4[32064] /*0x7b0e63*/
    && *(_DWORD *)&DataGlobal_87F8E4[31924] == 4
    && !*(_DWORD *)&DataGlobal_87F8E4[31928] )
  {
    Debug::Log(); /*0x7b0eae*/
  }
  else if ( getsockopt(v4, 1000, 16397, optval, &optlen) ) /*0x7b0e7a*/
  {
    WSAGetLastError(); /*0x7b0e94*/
    Debug::Log(); /*0x7b0e9f*/
  }
  else if ( (int)aP1 >= *(int *)optval ) /*0x7b0e87*/
  {
    return 0; /*0x7b0e91*/
  }
  char v14[24]; // [esp+28h] [ebp-18h] BYREF
  memset(v14, 0, sizeof(v14)); /*0x7b0ec2*/
  *(_DWORD *)v14 = aP1; /*0x7b0ed9*/
  int v12 = 24; /*0x7b0edd*/
  if ( getsockopt(v4, 1000, 16391, v14, &v12) == -1 ) /*0x7b0eee*/
  {
    WSAGetLastError(); /*0x7b0ef0*/
    Debug::Log(); /*0x7b0efc*/
    closesocket(v7); /*0x7b0f05*/
    return 0; /*0x7b0f0c*/
  }
  else
  {
    int v8 = *(_DWORD *)&v14[4]; /*0x7b0f19*/
    v9 = *(_WORD *)&v14[12]; /*0x7b0f1d*/
    *(int *)((char *)&aP2->Color_field_00 + 2) = *(int *)&v14[4]; /*0x7b0f23*/
    this->qFCBF = v8; /*0x7b0f26*/
    *(Color *)((char *)aP2 + 6) = *(Color *)&v14[8]; /*0x7b0f33*/
    HIWORD(aP2[2].Color_field_00) = v9; /*0x7b0f35*/
    closesocket((Color *)((char *)aP2 + 6)); /*0x7b0f39*/
    return 1; /*0x7b0f40*/
  }
}
}

// 0x7B13D0
int IPXInterfaceClass::SendPacket(ObjectClass * aP1, int a3, int a4, unsigned int fromlen)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void IPXInterfaceClass::SendPacket(ObjectClass *aP1, int a3, int a4, unsigned int fromlen)
{
  CCINIClass *v7; // esi
  SOCKET v11; // eax
  u_short *v14; // edi
  CCINIClass *v18; // ebx
  u_short *v21; // ebp
  ObjectClass *v24; // edx
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
      if ( HIWORD(fromlen) ) /*0x7b140c*/
      {
LABEL_6:
        (*(void (__thiscall **)(u_short *, _DWORD))(*(_DWORD *)this + 36))(this, this->q3F06C); /*0x7b1411*/
        return 0; /*0x7b1429*/
      }
      if ( this->LocalNode ) /*0x7b142c*/
      {
        while ( 1 ) /*0x7b1446*/
        {
          v25 = this->q1F986; /*0x7b1446*/
          v7 = (CCINIClass *)**((_DWORD **)this + 9); /*0x7b1447*/
          to.sa_family = 6; /*0x7b1449*/
          *(_WORD *)&to.sa_data[10] = htons(v25); /*0x7b1453*/
          if ( LOBYTE(v7->sectionHead[1]) ) /*0x7b1458*/
          {
            *(_DWORD *)to.sa_data = this->qFCBF; /*0x7b146b*/
            *(_DWORD *)&to.sa_data[4] = this->qFCC0; /*0x7b1471*/
            *(_WORD *)&to.sa_data[8] = this->q1F982; /*0x7b1479*/
          }
          else
          {
            Network::CopyAddress(v7, &a3, (int)&v27); /*0x7b148c*/
            *(_DWORD *)to.sa_data = a3; /*0x7b149e*/
            *(_DWORD *)&to.sa_data[4] = v27; /*0x7b14a2*/
            *(_WORD *)&to.sa_data[8] = v28; /*0x7b14a6*/
          }
          if ( sendto(this->q3F06C, (const char *)&v7->sectionCount, v7->sectionHead[0] + 4, 0, &to, 14) == -1 /*0x7b14da*/
            && WSAGetLastError() != 10035 )
          {
            break; /*0x7b14da*/
          }
          int v8 = this->LocalNode; /*0x7b14e0*/
          if ( v8 > 0 ) /*0x7b14e5*/
          {
            int v9 = v8 - 1; /*0x7b14e7*/
            int v10 = 0; /*0x7b14ea*/
            for ( this->LocalNode = v9; /*0x7b14f1*/
                  v10 < this->LocalNode;
                  *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v10 - 4) = *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v10) )
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
            --this->qFC18; /*0x7b1522*/
          }
          if ( !this->LocalNode ) /*0x7b1528*/
            return 0; /*0x7b153c*/
        }
        goto LABEL_6; /*0x7b14da*/
      }
    }
    return 0; /*0x7b1431*/
  }
  if ( HIWORD(fromlen) ) /*0x7b153f*/
  {
    (*(void (__thiscall **)(u_short *, _DWORD))(*(_DWORD *)this + 36))(this, this->q3F06C); /*0x7b1550*/
    return 0; /*0x7b155c*/
  }
  v11 = this->q3F06C; /*0x7b1577*/
  fromlen = 14; /*0x7b157d*/
  int v12 = recvfrom(v11, (char *)this + 258164, 640, 0, &to, (int *)&fromlen); /*0x7b1586*/
  int v26 = v12; /*0x7b158e*/
  if ( v12 == -1 ) /*0x7b1592*/
  {
    if ( WSAGetLastError() != 10035 ) /*0x7b159e*/
    {
      (*(void (__thiscall **)(u_short *, _DWORD))(*(_DWORD *)this + 36))(this, this->q3F06C); /*0x7b15b0*/
      return 0; /*0x7b15bc*/
    }
    return 0; /*0x7b159e*/
  }
  if ( !v12 ) /*0x7b15c1*/
    return 0; /*0x7b15c1*/
  v27 = *(_DWORD *)&to.sa_data[4]; /*0x7b15d4*/
  a3 = *(_DWORD *)to.sa_data; /*0x7b15d8*/
  v28 = *(_WORD *)&to.sa_data[8]; /*0x7b15e6*/
  if ( *(_DWORD *)to.sa_data == this->qFCBF ) /*0x7b15ef*/
  {
    int v13 = 3; /*0x7b15f1*/
    v14 = this + 129411; /*0x7b15f6*/
    int * v15 = &v27; /*0x7b15fc*/
    bool v16 = 1; /*0x7b1600*/
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
  int v17 = Network_Process_7B2730(); /*0x7b1610*/
  if ( v17 > 0 && Random::Range(&DataGlobal_87F8E4[29348], 0, (IUnknown *)0x63) <= v17 ) /*0x7b1626*/
    return 0; /*0x7b1717*/
  v18 = (CCINIClass *)IPXInterfaceClass::processPacket(this); /*0x7b1633*/
  v18->sectionHead[0] = v26 - 4; /*0x7b1646*/
  v18->sectionCount = this->qFC1D; /*0x7b1651*/
  qmemcpy(v18->__pad_20, this + 129084, v26 - 4); /*0x7b1657*/
  if ( (*(unsigned __int8 (__thiscall **)(u_short *, CCINIClass *))(*(_DWORD *)this + 88))(this, v18) ) /*0x7b1665*/
  {
    NetworkID::Assign(v18, (IPXManagerClass *)&a3, (int)&v27, 0); /*0x7b16d0*/
    int v19 = this->Initialized; /*0x7b16d5*/
    int v20 = this->BoundSocket; /*0x7b16d8*/
    v21 = this + 4; /*0x7b16db*/
    if ( v20 < v19 /*0x7b16fe*/
      || (*((_BYTE *)v21 + 13) || !v19)
  int v22; // ecx
      && (v22 = *((_DWORD *)v21 + 5), v22 > 0)
      && (*(unsigned __int8 (__thiscall **)(u_short *, int, _DWORD))(*(_DWORD *)v21 + 8))(v21, v19 + v22, 0) )
    {
      int v23 = *((_DWORD *)v21 + 4); /*0x7b1705*/
      v24 = (ObjectClass *)*((_DWORD *)v21 + 1); /*0x7b1708*/
      *((_DWORD *)v21 + 4) = v23 + 1; /*0x7b170e*/
      *(_DWORD *)&v24->__pad_0[4 * v23] = v18; /*0x7b1711*/
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
    --this->qFC18; /*0x7b16b1*/
  }
  return 0; /*0x7b13e4*/
}
}

// 0x7B1760
int IPXInterfaceClass::GetLocalAddress(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void IPXInterfaceClass::_vt20(int a2)
{
  this->q3F2F8 = a2; /*0x7b1764*/
  return a2; /*0x7b176a*/
}
}

// 0x7B19C0
char * IPXInterfaceClass::bindSocket()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_7B19C0(char *this)
{

  this->LocalNode = 0; /*0x7b19d2*/
  this->Initialized = 0; /*0x7b19d5*/
  this->q014 = 1; /*0x7b19d8*/
  this->q015 = 0; /*0x7b19db*/
  this->LocalNetwork = &vt_DynamicVectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b19de*/
  *((_DWORD *)this + 7) = 10; /*0x7b19e1*/
  this->BoundSocket = 0; /*0x7b19e4*/
  *((_DWORD *)this + 9) = 0; /*0x7b19e7*/
  *((_DWORD *)this + 10) = 0; /*0x7b19ea*/
  this->q02C = 1; /*0x7b19ed*/
  this->q02D = 0; /*0x7b19f0*/
  this->LocalNetwork = &vt_DynamicVectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b19f3*/
  this->IsAllocated = 10; /*0x7b19f6*/
  this->LocalNode = 0; /*0x7b19f9*/
  *((_DWORD *)this + 19) = 10; /*0x7b19fc*/
  *((_DWORD *)this + 15) = 0; /*0x7b1a02*/
  this->Count = 0; /*0x7b1a05*/
  this->q044 = 1; /*0x7b1a08*/
  this->q045 = 0; /*0x7b1a0b*/
  *((_DWORD *)this + 14) = &vt_DynamicVectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b1a0e*/
  this->tail_12 = 0; /*0x7b1a11*/
  this->q3F06C = -1; /*0x7b1a14*/
  this->q3F070 = -1; /*0x7b1a1a*/
  *(_DWORD *)this = &vt_WinsockInterfaceClass; /*0x7b1a20*/
  this->q3F068 = 0; /*0x7b1a26*/
  _BYTE * v2 = this + 102; /*0x7b1a2c*/
  int v3 = 128; /*0x7b1a2f*/
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
  this->q3F05C = 0; /*0x7b1a76*/
  this->qFC18 = 0; /*0x7b1a7c*/
  this->qFC19 = 0; /*0x7b1a82*/
  this->q3F050 = 0; /*0x7b1a88*/
  this->qFC15 = 0; /*0x7b1a8e*/
  this->Initialized = 576; /*0x7b1a94*/
  Debug::Log(); /*0x7b1a9b*/
  return this; /*0x7b1aa5*/
}
}

// 0x7B1B80
int IPXInterfaceClass::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void IPXInterfaceClass::_vt01()
{
  int result; // eax

  if ( this->q3F06C != -1 ) /*0x7b1b8c*/
  {
    closesocket(this->q3F06C); /*0x7b1b8f*/
    this->q3F06C = -1; /*0x7b1b94*/
  }
  result = this->q3F070; /*0x7b1b9e*/
  if ( result != -1 ) /*0x7b1ba7*/
  {
    result = closesocket(this->q3F070); /*0x7b1baa*/
    this->q3F070 = -1; /*0x7b1baf*/
  }
  return result; /*0x7b1bb9*/
}
}

// 0x7B1BC0
char IPXInterfaceClass::Receive()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void IPXInterfaceClass::_vt07()
{
  u_int v2; // eax
  u_int v5; // eax
  v2 = (*(int (__thiscall **)(SOCKET *, int))(*this + 56))(this, -1); /*0x7b1bc9*/
  if ( WSAAsyncSelect(this->q3F06C, g_hWnd, v2, 3) != -1 ) /*0x7b1be3*/
  {
    int v4 = this->q3F070; /*0x7b1bfc*/
    if ( v4 == -1 ) /*0x7b1c05*/
      return 1; /*0x7b1c05*/
    v5 = (*(int (__thiscall **)(SOCKET *, int))(*this + 56))(this, v4); /*0x7b1c0e*/
    if ( WSAAsyncSelect(this->q3F070, g_hWnd, v5, 3) != -1 ) /*0x7b1c27*/
      return 1; /*0x7b1c40*/
  }
  WSAGetLastError(); /*0x7b1be5*/
  Debug::Log(); /*0x7b1bf0*/
  return 0; /*0x7b1bfa*/
}
}

// 0x7B1CA0
void IPXInterfaceClass::Disconnect()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void IPXInterfaceClass::_vt05(int this)
{

  while ( this->BoundSocket ) /*0x7b1ca6*/
  {
    int v2 = *this->LocalNode; /*0x7b1cae*/
    if ( *(_BYTE *)(v2 + 22) ) /*0x7b1cb0*/
    {
      __3_YAXPAX_Z(*this->LocalNode); /*0x7b1cb6*/
    }
    else
    {
      *(_BYTE *)(v2 + 21) = 0; /*0x7b1cc0*/
      --this->q3F05C; /*0x7b1cca*/
    }
    int v3 = this->BoundSocket; /*0x7b1cd0*/
    if ( v3 > 0 ) /*0x7b1cd5*/
    {
      int v4 = v3 - 1; /*0x7b1cd7*/
      int v5 = 0; /*0x7b1cda*/
      for ( this->BoundSocket = v4; /*0x7b1ce1*/
            v5 < this->BoundSocket;
            *(_DWORD *)(this->LocalNode + 4 * v5 - 4) = *(_DWORD *)(this->LocalNode + 4 * v5) )
      {
        ++v5; /*0x7b1ce6*/
      }
    }
  }
  this->q3F05C = 0; /*0x7b1cfa*/
  this->q3F050 = 0; /*0x7b1d00*/
}
}

// 0x7B2240
unsigned char * IPXInterfaceClass::processPacket()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__thiscall sub_7B2240(_DWORD *this)
{
  _BYTE *result; // eax

  result = 0; /*0x7b2249*/
  if ( this->q3F05C == 128 ) /*0x7b2253*/
  {
    result = __2_YAPAXI_Z(0x2A0u); /*0x7b225a*/
    result[22] = 1; /*0x7b2264*/
    result[21] = 1; /*0x7b2267*/
  }
  else
  {
  int v3; // esi
    int v2 = 0; /*0x7b226c*/
    while ( 1 ) /*0x7b226e*/
    {
      v3 = this->q3F050; /*0x7b226e*/
      this->q3F050 = v3 + 1; /*0x7b227a*/
      if ( v3 + 1 > 127 ) /*0x7b2280*/
        this->q3F050 = 0; /*0x7b2282*/
      if ( !*((_BYTE *)this + 672 * v3 + 101) ) /*0x7b2297*/
        break; /*0x7b2297*/
      if ( ++v2 >= 128 ) /*0x7b22a4*/
        return result; /*0x7b22a4*/
    }
    result = this + 168 * v3 + 20; /*0x7b22b9*/
    *((_BYTE *)this + 672 * v3 + 101) = 1; /*0x7b22bd*/
    ++this->q3F05C; /*0x7b22c8*/
  }
  if ( result ) /*0x7b22d0*/
  {
    result[23] = 0; /*0x7b22d2*/
    result[24] = 0; /*0x7b22d5*/
  }
  return result; /*0x7b22a6*/
}
}

// 0x7B24E0
short IPXInterfaceClass::Connect(const void * a1, unsigned int a3, UDPInterfaceClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __thiscall IPXInterfaceClass::Connect(int this, const void *a1, unsigned int a3, UDPInterfaceClass *aP3)
{
  UDPInterfaceClass *v5; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  UINT v15; // eax
  v5 = (UDPInterfaceClass *)AudioQueue::AllocBuffer((_DWORD *)this, (WinsockInterfaceClass *)aP3); /*0x7b24f4*/
  qmemcpy(&v5[4], a1, a3); /*0x7b2505*/
  v5[2].Socket = a3; /*0x7b250e*/
  (*(void (__thiscall **)(int, UDPInterfaceClass *))(this->q015)(this, v5); /*0x7b2516*/
  v5[2].Initialized = 1; /*0x7b251d*/
  if ( (_BYTE)aP3 ) /*0x7b2523*/
  {
    int v6 = this->Count; /*0x7b2525*/
    if ( this->tail_12 < v6 /*0x7b254d*/
      || (this->q045 || !v6)
  int v7; // eax
      && (v7 = *(_DWORD *)(this + 76), v7 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 56) + 8))(this + 56, v6 + v7, 0) )
    {
      int v8 = this->tail_12; /*0x7b2554*/
      int v9 = *(_DWORD *)(this + 60); /*0x7b2557*/
      this->tail_12 = v8 + 1; /*0x7b255d*/
      *(_DWORD *)(v9 + 4 * v8) = v5; /*0x7b2560*/
    }
    v10 = this->q3F070; /*0x7b2563*/
  }
  else
  {
    v11 = *(_DWORD *)(this + 40); /*0x7b256b*/
    if ( this->LocalNode < v11 /*0x7b2593*/
      || (this->q02D || !v11)
      && (v12 = this->IsAllocated, v12 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->LocalNetwork + 8))(this + 32, v11 + v12, 0) )
    {
      v13 = this->LocalNode; /*0x7b259a*/
      v14 = *(_DWORD *)(this + 36); /*0x7b259d*/
      this->LocalNode = v13 + 1; /*0x7b25a3*/
      *(_DWORD *)(v14 + 4 * v13) = v5; /*0x7b25a6*/
    }
    v10 = this->q3F06C; /*0x7b25a9*/
  }
  v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 56))(this, v10); /*0x7b25b9*/
  SendMessageA((HWND)g_hWnd, v15, 0, 2); /*0x7b25c3*/
  return EventQueue::Process(g_BinkMoviePlayer); /*0x7b25d4*/
}
}

// 0x7B2A20
char IPXInterfaceClass::getSocketState(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void IPXInterfaceClass::sub_7B2A20(int a2, _DWORD *a3)
{
  int i; // eax

  if ( a2 ) /*0x7b2a2c*/
  {
    this->LocalNode = 0; /*0x7b2a32*/
    if ( a3 ) /*0x7b2a38*/
      _DWORD * v4 = a3; /*0x7b2a4e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x7b2a4a*/
    this->LocalNode = 1; /*0x7b2a52*/
    if ( !v4 ) /*0x7b2a56*/
      return 0; /*0x7b2aca*/
    if ( this->Initialized ) /*0x7b2a58*/
    {
      AbstractClass *v5 = this->LocalNetwork; /*0x7b2a5f*/
      if ( a2 < v5 ) /*0x7b2a64*/
        v5 = a2; /*0x7b2a66*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Initialized + 4 * i - 4) ) /*0x7b2a6c*/
        ++i; /*0x7b2a71*/
      if ( this->IsAllocated ) /*0x7b2a7e*/
      {
        __3_YAXPAX_Z(this->Initialized); /*0x7b2a89*/
        this->Initialized = 0; /*0x7b2a91*/
      }
    }
    this->Initialized = v4; /*0x7b2a9a*/
    this->LocalNetwork = a2; /*0x7b2aa2*/
    this->IsAllocated = a3 == 0; /*0x7b2aa5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->LocalNode)(this); /*0x7b2aae*/
  }
  AbstractClass *v7 = this->LocalNetwork; /*0x7b2ab1*/
  if ( v7 < this->Initialized ) /*0x7b2ab9*/
    this->Initialized = v7; /*0x7b2abb*/
  return 1; /*0x7b2abe*/
}
}

// 0x7B1720
void IPXInterfaceClass::StubReturnFalse(int a1, int a2)
{
  ;
}

// 0x7B1730
void IPXInterfaceClass::GetQueueSize()
{
  ;
}

// 0x7B1740
int IPXInterfaceClass::COMStub_Return0()
{
return 0;
}

// 0x7B1750
int IPXInterfaceClass::Send(int a1)
{
return 0;
}

// 0x7B1770
int IPXInterfaceClass::COMStub_Return1()
{
return 1;
}

// 0x7B1780
int IPXInterfaceClass::COMStub_Ret1139(int a1)
{
return 1139;
}

// 0x7B1790
IPXInterfaceClass * IPXInterfaceClass::QueryInterface(char a2)
{
{
    WinsockInterfaceClass::WinsockInterfaceClass((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (IPXInterfaceClass *)this;
}
}

// 0x7B1FD0
int IPXInterfaceClass::SetAddress(unsigned int * a1)
{
{
    int v1;
    int *v2;
    int v3;
    int *v4;
    int result;
    int v6;
    int v7;
    v1 = 0;
    v2 = a1 + 7;
    v3 = *((int*)(a1) + 4);
    *((int*)(a1) + 7) = 0;
    v4 = a1 + 8;
    result = v3 / 4;
    if ( result > 0 )
  {
    do
    {
    v6 = *v4++;
    ComputeHash(v2, v6);
    ++v1;
    result = *((int*)(a1) + 4) / 4;
    }
    while ( v1 < result );
  }
    v7 = *((int*)(a1) + 4) & 3;
    if ( v7 )
    return ComputeHash(v2, *v4 & (0xFFFFFFFF >> (32 - 8 * v7)));
    return result;
}
}

// 0x7B25E0
int IPXInterfaceClass::GetAddress(SOCKET s)
{
{
    SOCKET v1;
    int optlen;
    v1 = s;
    optlen = 4;
    getsockopt(s, 0xFFFF, 4103, (char *)&s, &optlen);
    s = 0;
    return setsockopt(v1, 0xFFFF, 4103, (const char *)&s, optlen);
}
}

// 0x7B26D0
char IPXInterfaceClass::ReceivePacket(char * name, AnimClass * aP1)
{
{
    if ( gethostname((IUnknown *)name, aP1) == -1 )
  {
    WSAGetLastError();
    Debug::Log();
    return 0;
  }
    else
  {
    Debug::Log();
    return 1;
  }
}
}

// 0x7B2840
void IPXInterfaceClass::getSocketCount()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Initialized = 0;
  }
    this->IsAllocated = 0;
    this->LocalNetwork = 0;
}
}

// 0x7B2870
unsigned int IPXInterfaceClass::resetSocket(int a2)
{
{
    if ( (unsigned char)this->LocalNode )
    return (unsigned int)(a2 - this->Initialized) >> 2;
    else
    return 0;
}
}

// 0x7B2AD0
int IPXInterfaceClass::initSession(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Initialized; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}

}
// 0x7B2B50
DynamicVector * IPXInterfaceClass::closeSession(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
