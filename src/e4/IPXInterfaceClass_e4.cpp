// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7B0D90
unsigned int * IPXInterfaceClass::Construct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall IPXInterfaceClass_Constructor(_DWORD *this)
{
  IPXInterfaceClass::bindSocket(); /*0x7b0d93*/
  *this = &vt_IPXInterfaceClass; /*0x7b0da4*/
  *(this + 64703) = -1; /*0x7b0dad*/
  *(this + 64704) = -1; /*0x7b0db3*/
  *((_WORD *)this + 129410) = -1; /*0x7b0db8*/
  *(_DWORD *)((char *)this + 258822) = -1; /*0x7b0dc2*/
  *((_WORD *)this + 129413) = -1; /*0x7b0dc8*/
  return this; /*0x7b0dce*/
}
}

// 0x7B0DD0
int IPXInterfaceClass::initSocket(IUnknown * aP1, Color * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall IPXInterfaceClass::initSocket(_DWORD *this, IUnknown *aP1, Color *aP2)
{
  SOCKET v4; // esi
  Color *v6; // ecx
  Color *v7; // ecx
  int v8; // eax
  __int16 v9; // dx
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
  *(_DWORD *)optval = 1; /*0x7b0e44*/
  optlen = 4; /*0x7b0e4e*/
  if ( MEMORY[0x87F8E4].__pad_5568[10200] /*0x7b0e63*/
    && *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10060] == 4
    && !*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10064] )
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
  memset(v14, 0, sizeof(v14)); /*0x7b0ec2*/
  *(_DWORD *)v14 = aP1; /*0x7b0ed9*/
  v12 = 24; /*0x7b0edd*/
  if ( getsockopt(v4, 1000, 16391, v14, &v12) == -1 ) /*0x7b0eee*/
  {
    WSAGetLastError(); /*0x7b0ef0*/
    Debug::Log(); /*0x7b0efc*/
    closesocket(v7); /*0x7b0f05*/
    return 0; /*0x7b0f0c*/
  }
  else
  {
    v8 = *(_DWORD *)&v14[4]; /*0x7b0f19*/
    v9 = *(_WORD *)&v14[12]; /*0x7b0f1d*/
    *(int *)((char *)&aP2->Color_field_00 + 2) = *(int *)&v14[4]; /*0x7b0f23*/
    *(this + 64703) = v8; /*0x7b0f26*/
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
int __thiscall IPXInterfaceClass::SendPacket(u_short *this, ObjectClass *aP1, int a3, int a4, unsigned int fromlen)
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
        (*(void (__thiscall **)(u_short *, _DWORD))(*(_DWORD *)this + 36))(this, *((_DWORD *)this + 64539)); /*0x7b1411*/
        return 0; /*0x7b1429*/
      }
      if ( *((_DWORD *)this + 12) ) /*0x7b142c*/
      {
        while ( 1 ) /*0x7b1446*/
        {
          v25 = *(this + 129414); /*0x7b1446*/
          v7 = (CCINIClass *)**((_DWORD **)this + 9); /*0x7b1447*/
          to.sa_family = 6; /*0x7b1449*/
          *(_WORD *)&to.sa_data[10] = htons(v25); /*0x7b1453*/
          if ( LOBYTE(v7->sectionHead[1]) ) /*0x7b1458*/
          {
            *(_DWORD *)to.sa_data = *((_DWORD *)this + 64703); /*0x7b146b*/
            *(_DWORD *)&to.sa_data[4] = *((_DWORD *)this + 64704); /*0x7b1471*/
            *(_WORD *)&to.sa_data[8] = *(this + 129410); /*0x7b1479*/
          }
          else
          {
            Network::CopyAddress(v7, &a3, (int)&v27); /*0x7b148c*/
            *(_DWORD *)to.sa_data = a3; /*0x7b149e*/
            *(_DWORD *)&to.sa_data[4] = v27; /*0x7b14a2*/
            *(_WORD *)&to.sa_data[8] = v28; /*0x7b14a6*/
          }
          if ( sendto(*((_DWORD *)this + 64539), (const char *)&v7->sectionCount, v7->sectionHead[0] + 4, 0, &to, 14) == -1 /*0x7b14da*/
            && WSAGetLastError() != 10035 )
          {
            break; /*0x7b14da*/
          }
          v8 = *((_DWORD *)this + 12); /*0x7b14e0*/
          if ( v8 > 0 ) /*0x7b14e5*/
          {
            v9 = v8 - 1; /*0x7b14e7*/
            v10 = 0; /*0x7b14ea*/
            for ( *((_DWORD *)this + 12) = v9; /*0x7b14f1*/
                  v10 < *((_DWORD *)this + 12);
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
            --*((_DWORD *)this + 64536); /*0x7b1522*/
          }
          if ( !*((_DWORD *)this + 12) ) /*0x7b1528*/
            return 0; /*0x7b153c*/
        }
        goto LABEL_6; /*0x7b14da*/
      }
    }
    return 0; /*0x7b1431*/
  }
  if ( HIWORD(fromlen) ) /*0x7b153f*/
  {
    (*(void (__thiscall **)(u_short *, _DWORD))(*(_DWORD *)this + 36))(this, *((_DWORD *)this + 64539)); /*0x7b1550*/
    return 0; /*0x7b155c*/
  }
  v11 = *((_DWORD *)this + 64539); /*0x7b1577*/
  fromlen = 14; /*0x7b157d*/
  v12 = recvfrom(v11, (char *)this + 258164, 640, 0, &to, (int *)&fromlen); /*0x7b1586*/
  v26 = v12; /*0x7b158e*/
  if ( v12 == -1 ) /*0x7b1592*/
  {
    if ( WSAGetLastError() != 10035 ) /*0x7b159e*/
    {
      (*(void (__thiscall **)(u_short *, _DWORD))(*(_DWORD *)this + 36))(this, *((_DWORD *)this + 64539)); /*0x7b15b0*/
      return 0; /*0x7b15bc*/
    }
    return 0; /*0x7b159e*/
  }
  if ( !v12 ) /*0x7b15c1*/
    return 0; /*0x7b15c1*/
  v27 = *(_DWORD *)&to.sa_data[4]; /*0x7b15d4*/
  a3 = *(_DWORD *)to.sa_data; /*0x7b15d8*/
  v28 = *(_WORD *)&to.sa_data[8]; /*0x7b15e6*/
  if ( *(_DWORD *)to.sa_data == *((_DWORD *)this + 64703) ) /*0x7b15ef*/
  {
    v13 = 3; /*0x7b15f1*/
    v14 = this + 129411; /*0x7b15f6*/
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
  if ( v17 > 0 && Random::Range(&MEMORY[0x87F8E4].__pad_5568[7484], 0, (IUnknown *)0x63) <= v17 ) /*0x7b1626*/
    return 0; /*0x7b1717*/
  v18 = (CCINIClass *)IPXInterfaceClass::processPacket(this); /*0x7b1633*/
  v18->sectionHead[0] = v26 - 4; /*0x7b1646*/
  v18->sectionCount = *((_DWORD *)this + 64541); /*0x7b1651*/
  qmemcpy(v18->__pad_20, this + 129084, v26 - 4); /*0x7b1657*/
  if ( (*(unsigned __int8 (__thiscall **)(u_short *, CCINIClass *))(*(_DWORD *)this + 88))(this, v18) ) /*0x7b1665*/
  {
    NetworkID::Assign(v18, (IPXManagerClass *)&a3, (int)&v27, 0); /*0x7b16d0*/
    v19 = *((_DWORD *)this + 4); /*0x7b16d5*/
    v20 = *((_DWORD *)this + 6); /*0x7b16d8*/
    v21 = this + 4; /*0x7b16db*/
    if ( v20 < v19 /*0x7b16fe*/
      || (*((_BYTE *)v21 + 13) || !v19)
      && (v22 = *((_DWORD *)v21 + 5), v22 > 0)
      && (*(unsigned __int8 (__thiscall **)(u_short *, int, _DWORD))(*(_DWORD *)v21 + 8))(v21, v19 + v22, 0) )
    {
      v23 = *((_DWORD *)v21 + 4); /*0x7b1705*/
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
    --*((_DWORD *)this + 64536); /*0x7b16b1*/
  }
  return 0; /*0x7b13e4*/
}
}

// 0x7B1760
int IPXInterfaceClass::GetLocalAddress(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall IPXInterfaceClass::_vt20(_DWORD *this, int a2)
{
  *(this + 64702) = a2; /*0x7b1764*/
  return a2; /*0x7b176a*/
}
}

// 0x7B19C0
char * IPXInterfaceClass::bindSocket()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_7B19C0(char *this)
{
  _BYTE *v2; // eax
  int v3; // edx

  this->LocalNode = 0; /*0x7b19d2*/
  *((_DWORD *)this + 4) = 0; /*0x7b19d5*/
  *(this + 20) = 1; /*0x7b19d8*/
  *(this + 21) = 0; /*0x7b19db*/
  this->LocalNetwork = &vt_DynamicVectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b19de*/
  *((_DWORD *)this + 7) = 10; /*0x7b19e1*/
  *((_DWORD *)this + 6) = 0; /*0x7b19e4*/
  *((_DWORD *)this + 9) = 0; /*0x7b19e7*/
  *((_DWORD *)this + 10) = 0; /*0x7b19ea*/
  *(this + 44) = 1; /*0x7b19ed*/
  *(this + 45) = 0; /*0x7b19f0*/
  *((_DWORD *)this + 8) = &vt_DynamicVectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b19f3*/
  *((_DWORD *)this + 13) = 10; /*0x7b19f6*/
  *((_DWORD *)this + 12) = 0; /*0x7b19f9*/
  *((_DWORD *)this + 19) = 10; /*0x7b19fc*/
  *((_DWORD *)this + 15) = 0; /*0x7b1a02*/
  *((_DWORD *)this + 16) = 0; /*0x7b1a05*/
  *(this + 68) = 1; /*0x7b1a08*/
  *(this + 69) = 0; /*0x7b1a0b*/
  *((_DWORD *)this + 14) = &vt_DynamicVectorClass_WinsockInterfaceClass_WinsockBufferType; /*0x7b1a0e*/
  *((_DWORD *)this + 18) = 0; /*0x7b1a11*/
  *((_DWORD *)this + 64539) = -1; /*0x7b1a14*/
  *((_DWORD *)this + 64540) = -1; /*0x7b1a1a*/
  *(_DWORD *)this = &vt_WinsockInterfaceClass; /*0x7b1a20*/
  *(this + 258152) = 0; /*0x7b1a26*/
  v2 = this + 102; /*0x7b1a2c*/
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
  *((_DWORD *)this + 64535) = 0; /*0x7b1a76*/
  *((_DWORD *)this + 64536) = 0; /*0x7b1a7c*/
  *((_DWORD *)this + 64537) = 0; /*0x7b1a82*/
  *((_DWORD *)this + 64532) = 0; /*0x7b1a88*/
  *((_DWORD *)this + 64533) = 0; /*0x7b1a8e*/
  *((_DWORD *)this + 1) = 576; /*0x7b1a94*/
  Debug::Log(); /*0x7b1a9b*/
  return this; /*0x7b1aa5*/
}
}

// 0x7B1B80
int IPXInterfaceClass::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall IPXInterfaceClass::_vt01(SOCKET *this)
{
  int result; // eax

  if ( *(this + 64539) != -1 ) /*0x7b1b8c*/
  {
    closesocket(*(this + 64539)); /*0x7b1b8f*/
    *(this + 64539) = -1; /*0x7b1b94*/
  }
  result = *(this + 64540); /*0x7b1b9e*/
  if ( result != -1 ) /*0x7b1ba7*/
  {
    result = closesocket(*(this + 64540)); /*0x7b1baa*/
    *(this + 64540) = -1; /*0x7b1baf*/
  }
  return result; /*0x7b1bb9*/
}
}

// 0x7B1BC0
char IPXInterfaceClass::Receive()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall IPXInterfaceClass::_vt07(SOCKET *this)
{
  u_int v2; // eax
  int v4; // eax
  u_int v5; // eax

  v2 = (*(int (__thiscall **)(SOCKET *, int))(*this + 56))(this, -1); /*0x7b1bc9*/
  if ( WSAAsyncSelect(*(this + 64539), g_hWnd, v2, 3) != -1 ) /*0x7b1be3*/
  {
    v4 = *(this + 64540); /*0x7b1bfc*/
    if ( v4 == -1 ) /*0x7b1c05*/
      return 1; /*0x7b1c05*/
    v5 = (*(int (__thiscall **)(SOCKET *, int))(*this + 56))(this, v4); /*0x7b1c0e*/
    if ( WSAAsyncSelect(*(this + 64540), g_hWnd, v5, 3) != -1 ) /*0x7b1c27*/
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
void __thiscall IPXInterfaceClass::_vt05(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // eax

  while ( *(_DWORD *)(this + 24) ) /*0x7b1ca6*/
  {
    v2 = **(_DWORD **)(this + 12); /*0x7b1cae*/
    if ( *(_BYTE *)(v2 + 22) ) /*0x7b1cb0*/
    {
      __3_YAXPAX_Z(**(void ***)(this + 12)); /*0x7b1cb6*/
    }
    else
    {
      *(_BYTE *)(v2 + 21) = 0; /*0x7b1cc0*/
      --*(_DWORD *)(this + 258140); /*0x7b1cca*/
    }
    v3 = *(_DWORD *)(this + 24); /*0x7b1cd0*/
    if ( v3 > 0 ) /*0x7b1cd5*/
    {
      v4 = v3 - 1; /*0x7b1cd7*/
      v5 = 0; /*0x7b1cda*/
      for ( *(_DWORD *)(this + 24) = v4; /*0x7b1ce1*/
            v5 < *(_DWORD *)(this + 24);
            *(_DWORD *)(this->LocalNode + 4 * v5 - 4) = *(_DWORD *)(this->LocalNode + 4 * v5) )
      {
        ++v5; /*0x7b1ce6*/
      }
    }
  }
  *(_DWORD *)(this + 258140) = 0; /*0x7b1cfa*/
  *(_DWORD *)(this + 258128) = 0; /*0x7b1d00*/
}
}

// 0x7B2240
unsigned char * IPXInterfaceClass::processPacket()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__thiscall sub_7B2240(_DWORD *this)
{
  _BYTE *result; // eax
  int v2; // edi
  int v3; // esi

  result = 0; /*0x7b2249*/
  if ( *(this + 64535) == 128 ) /*0x7b2253*/
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
      v3 = *(this + 64532); /*0x7b226e*/
      *(this + 64532) = v3 + 1; /*0x7b227a*/
      if ( v3 + 1 > 127 ) /*0x7b2280*/
        *(this + 64532) = 0; /*0x7b2282*/
      if ( !*((_BYTE *)this + 672 * v3 + 101) ) /*0x7b2297*/
        break; /*0x7b2297*/
      if ( ++v2 >= 128 ) /*0x7b22a4*/
        return result; /*0x7b22a4*/
    }
    result = this + 168 * v3 + 20; /*0x7b22b9*/
    *((_BYTE *)this + 672 * v3 + 101) = 1; /*0x7b22bd*/
    ++*(this + 64535); /*0x7b22c8*/
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

  v5 = (UDPInterfaceClass *)AudioQueue::AllocBuffer((_DWORD *)this, (WinsockInterfaceClass *)aP3); /*0x7b24f4*/
  qmemcpy(&v5[4], a1, a3); /*0x7b2505*/
  v5[2].Socket = a3; /*0x7b250e*/
  (*(void (__thiscall **)(int, UDPInterfaceClass *))(*(_DWORD *)this + 84))(this, v5); /*0x7b2516*/
  v5[2].Initialized = 1; /*0x7b251d*/
  if ( (_BYTE)aP3 ) /*0x7b2523*/
  {
    v6 = *(_DWORD *)(this + 64); /*0x7b2525*/
    if ( *(_DWORD *)(this + 72) < v6 /*0x7b254d*/
      || (*(_BYTE *)(this + 69) || !v6)
      && (v7 = *(_DWORD *)(this + 76), v7 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 56) + 8))(this + 56, v6 + v7, 0) )
    {
      v8 = *(_DWORD *)(this + 72); /*0x7b2554*/
      v9 = *(_DWORD *)(this + 60); /*0x7b2557*/
      *(_DWORD *)(this + 72) = v8 + 1; /*0x7b255d*/
      *(_DWORD *)(v9 + 4 * v8) = v5; /*0x7b2560*/
    }
    v10 = *(_DWORD *)(this + 258160); /*0x7b2563*/
  }
  else
  {
    v11 = *(_DWORD *)(this + 40); /*0x7b256b*/
    if ( *(_DWORD *)(this + 48) < v11 /*0x7b2593*/
      || (*(_BYTE *)(this + 45) || !v11)
      && (v12 = *(_DWORD *)(this + 52), v12 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 32) + 8))(this + 32, v11 + v12, 0) )
    {
      v13 = *(_DWORD *)(this + 48); /*0x7b259a*/
      v14 = *(_DWORD *)(this + 36); /*0x7b259d*/
      *(_DWORD *)(this + 48) = v13 + 1; /*0x7b25a3*/
      *(_DWORD *)(v14 + 4 * v13) = v5; /*0x7b25a6*/
    }
    v10 = *(_DWORD *)(this + 258156); /*0x7b25a9*/
  }
  v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 56))(this, v10); /*0x7b25b9*/
  SendMessageA((HWND)g_hWnd, v15, 0, 2); /*0x7b25c3*/
  return EventQueue::Process(MEMORY[0x87F770]); /*0x7b25d4*/
}
}

// 0x7B2A20
char IPXInterfaceClass::getSocketState(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall IPXInterfaceClass::sub_7B2A20(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7b2a2c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x7b2a32*/
    if ( a3 ) /*0x7b2a38*/
      v4 = a3; /*0x7b2a4e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x7b2a4a*/
    *((_BYTE *)this + 12) = 1; /*0x7b2a52*/
    if ( !v4 ) /*0x7b2a56*/
      return 0; /*0x7b2aca*/
    if ( *((_DWORD *)this + 1) ) /*0x7b2a58*/
    {
      v5 = this->LocalNetwork; /*0x7b2a5f*/
      if ( a2 < v5 ) /*0x7b2a64*/
        v5 = a2; /*0x7b2a66*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x7b2a6c*/
        ++i; /*0x7b2a71*/
      if ( *((_BYTE *)this + 13) ) /*0x7b2a7e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x7b2a89*/
        *((_DWORD *)this + 1) = 0; /*0x7b2a91*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x7b2a9a*/
    this->LocalNetwork = a2; /*0x7b2aa2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x7b2aa5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x7b2aae*/
  }
  v7 = this->LocalNetwork; /*0x7b2ab1*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x7b2ab9*/
    *((_DWORD *)this + 4) = v7; /*0x7b2abb*/
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
