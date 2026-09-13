// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7B1B50
char UDPInterfaceClass::connect()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_7B1B50(_BYTE *this)
{
  char result; // al

  result = *(this + 258152); /*0x7b1b53*/
  if ( result ) /*0x7b1b5b*/
  {
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 32))(this); /*0x7b1b5f*/
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 4))(this); /*0x7b1b66*/
    result = WSACleanup(); /*0x7b1b69*/
    *(this + 258152) = 0; /*0x7b1b6e*/
  }
  return result; /*0x7b1b75*/
}
}

// 0x7B3310
void UDPInterfaceClass::CheckStatus(short a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall UDPInterfaceClass_Destru::_vt27(_DWORD *this, __int16 a2)
{
  int v3; // ecx
  int v4; // edi
  _WORD *i; // eax
  SOCKET *v6; // ebx
  int v7; // edx
  _WORD *v8; // ecx
  _DWORD *v9; // eax

  if ( a2 ) /*0x7b331c*/
  {
    v3 = *(this + 64716); /*0x7b3322*/
    v4 = 0; /*0x7b3328*/
    if ( v3 > 0 ) /*0x7b332c*/
    {
      for ( i = this + 64712; *i != a2; ++i ) /*0x7b3332*/
      {
        if ( ++v4 >= v3 ) /*0x7b3343*/
          return; /*0x7b3343*/
      }
      v6 = this + v4 + 64704; /*0x7b3352*/
      Debug::Log(); /*0x7b335f*/
      closesocket(*v6); /*0x7b336a*/
      if ( *v6 == *(this + 64717) ) /*0x7b3379*/
        *(this + 64717) = -1; /*0x7b337b*/
      v7 = v4; /*0x7b338b*/
      if ( v4 < *(this + 64716) - 1 ) /*0x7b3390*/
      {
        v8 = (_WORD *)this + v4 + 129424; /*0x7b3392*/
        v9 = this + v4 + 64704; /*0x7b3399*/
        do /*0x7b33b7*/
        {
          ++v7; /*0x7b339e*/
          *v9 = v9[1]; /*0x7b339f*/
          *v8 = v8[1]; /*0x7b33a5*/
          ++v9; /*0x7b33ae*/
          ++v8; /*0x7b33b1*/
        }
        while ( v7 < *(this + 64716) - 1 ); /*0x7b33b7*/
      }
      --*(this + 64716); /*0x7b33c1*/
    }
  }
}
}

// 0x7B33D0
void UDPInterfaceClass::GetStatistics(unsigned short a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall UDPInterfaceClass_Destru::_vt29(_DWORD *this, unsigned __int16 a2)
{
  int v2; // esi
  int v3; // eax
  _WORD *v4; // edx

  if ( !a2 || a2 == *(_DWORD *)&MEMORY[0x841F30] || (v2 = *(this + 64716), v3 = 0, v2 <= 0) ) /*0x7b33f6*/
  {
LABEL_7:
    *(this + 64717) = -1; /*0x7b340b*/
  }
  else
  {
    v4 = this + 64712; /*0x7b33f8*/
    while ( *v4 != a2 ) /*0x7b3401*/
    {
      ++v3; /*0x7b3403*/
      ++v4; /*0x7b3404*/
      if ( v3 >= v2 ) /*0x7b3409*/
        goto LABEL_7; /*0x7b3409*/
    }
    *(this + 64717) = *(this + v3 + 64704); /*0x7b3422*/
  }
}
}

// 0x7B3A20
int UDPInterfaceClass::Flush()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall UDPInterfaceClass_Destru::_vt28(_DWORD *this)
{
  int v2; // ebx
  int result; // eax
  SOCKET *v4; // esi

  v2 = 0; /*0x7b3a24*/
  result = *(this + 64716); /*0x7b3a26*/
  if ( result <= 0 ) /*0x7b3a2e*/
  {
    *(this + 64716) = 0; /*0x7b3a88*/
    *(this + 64717) = -1; /*0x7b3a92*/
  }
  else
  {
    v4 = this + 64704; /*0x7b3a31*/
    do /*0x7b3a6e*/
    {
      Debug::Log(); /*0x7b3a3f*/
      WSAAsyncSelect(*v4, g_hWnd, 0, 0); /*0x7b3a55*/
      closesocket(*v4); /*0x7b3a5d*/
      result = *(this + 64716); /*0x7b3a62*/
      ++v2; /*0x7b3a68*/
      ++v4; /*0x7b3a69*/
    }
    while ( v2 < result ); /*0x7b3a6e*/
    *(this + 64716) = 0; /*0x7b3a70*/
    *(this + 64717) = -1; /*0x7b3a7a*/
  }
  return result; /*0x7b3a85*/
}
}

// 0x7B3AA0
int UDPInterfaceClass::ProcessSocketIO(int a2, SOCKET s, int a4, unsigned int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall UDPInterfaceClass::ProcessSocketIO(char *this, int a2, SOCKET s, int a4, unsigned int a5)
{
  SOCKET v6; // ebx
  int v7; // edx
  int v8; // eax
  _DWORD *v9; // ecx
  int v11; // edi
  _DWORD *v12; // esi
  _DWORD *v13; // ebx
  u_short v14; // ax
  u_short v15; // ax
  int v16; // edx
  int v17; // ecx
  _DWORD *v18; // eax
  _WORD *v19; // edi
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // esi
  int v28; // ecx
  int v29; // eax
  _DWORD **v30; // edx
  int v31; // edi
  u_long v32; // eax
  int v33; // ecx
  int v34; // eax
  char *v35; // ebp
  int v36; // eax
  int v37; // eax
  int v38; // edx
  char v39; // [esp+13h] [ebp-1Dh]
  int fromlen; // [esp+14h] [ebp-1Ch] BYREF
  int v41; // [esp+18h] [ebp-18h]
  struct sockaddr netshort; // [esp+20h] [ebp-10h] BYREF
  SOCKET sa; // [esp+38h] [ebp+8h]
  u_short v44; // [esp+3Ch] [ebp+Ch]
  int v45; // [esp+40h] [ebp+10h]

  v39 = 0; /*0x7b3ab2*/
  if ( s == 1140 ) /*0x7b3ab7*/
  {
    v6 = *((_DWORD *)this + 64539); /*0x7b3ab9*/
    sa = v6; /*0x7b3ac5*/
    if ( a4 != v6 ) /*0x7b3ac9*/
    {
      v7 = *((_DWORD *)this + 64716); /*0x7b3acb*/
      v8 = 0; /*0x7b3ad1*/
      if ( v7 > 0 ) /*0x7b3ad5*/
      {
        v9 = this + 258816; /*0x7b3ad7*/
        while ( *v9 != a4 ) /*0x7b3adf*/
        {
          ++v8; /*0x7b3ae1*/
          ++v9; /*0x7b3ae2*/
          if ( v8 >= v7 ) /*0x7b3ae7*/
            goto LABEL_11; /*0x7b3ae7*/
        }
        v6 = *((_DWORD *)this + v8 + 64704); /*0x7b3aeb*/
        sa = v6; /*0x7b3af2*/
      }
    }
  }
  else
  {
    if ( s != 1141 ) /*0x7b3afd*/
      return 1; /*0x7b40dd*/
    v6 = *((_DWORD *)this + 64540); /*0x7b3b03*/
    v39 = 1; /*0x7b3b09*/
    sa = v6; /*0x7b3b0e*/
  }
LABEL_11:
  if ( (unsigned __int16)a5 == 1 ) /*0x7b3b1e*/
  {
    if ( HIWORD(a5) ) /*0x7b3ebb*/
    {
LABEL_22:
      Debug::Log(); /*0x7b3b8b*/
      (*(void (__thiscall **)(char *, SOCKET))(*(_DWORD *)this + 36))(this, v6); /*0x7b3b99*/
      return 0; /*0x7b3ba5*/
    }
    fromlen = 16; /*0x7b3ee4*/
    v26 = recvfrom(v6, this + 258164, 640, 0, &netshort, &fromlen); /*0x7b3eec*/
    v27 = v26; /*0x7b3ef1*/
    if ( v26 == -1 ) /*0x7b3ef6*/
    {
      (*(void (__thiscall **)(char *, SOCKET))(*(_DWORD *)this + 36))(this, v6); /*0x7b3efe*/
      return 0; /*0x7b3f0a*/
    }
    if ( v26 ) /*0x7b3f0f*/
    {
      if ( !v39 && !MEMORY[0xA8DBA0] ) /*0x7b3f24*/
      {
        v28 = *((_DWORD *)this + 64856); /*0x7b3f26*/
        v29 = 0; /*0x7b3f2c*/
        if ( v28 > 0 ) /*0x7b3f30*/
        {
          v30 = (_DWORD **)*((_DWORD *)this + 64853); /*0x7b3f32*/
          while ( **v30 != *(_DWORD *)&netshort.sa_data[2] ) /*0x7b3f42*/
          {
            ++v29; /*0x7b3f48*/
            ++v30; /*0x7b3f49*/
            if ( v29 >= v28 ) /*0x7b3f4e*/
              goto LABEL_71; /*0x7b3f4e*/
          }
          return 0; /*0x7b3f42*/
        }
      }
LABEL_71:
      v31 = Network_Process_7B2730(); /*0x7b3f50*/
      if ( v31 > 0 && Random::Range(MEMORY[0x886B88], 0, 99) <= v31 ) /*0x7b3f6b*/
        return 0; /*0x7b3f76*/
      v13 = (_DWORD *)IPXInterfaceClass::processPacket(this); /*0x7b3f80*/
      v13[4] = v27 - 4; /*0x7b3f8f*/
      v13[7] = *((_DWORD *)this + 64541); /*0x7b3f98*/
      *((_BYTE *)v13 + 23) = v39; /*0x7b3fa0*/
      *((_BYTE *)v13 + 24) = 0; /*0x7b3fa6*/
      qmemcpy(v13 + 8, this + 258168, v27 - 4); /*0x7b3fab*/
      if ( !(*(unsigned __int8 (__thiscall **)(char *, _DWORD *))(*(_DWORD *)this + 88))(this, v13) ) /*0x7b3fb9*/
      {
        v13[1] = *(_DWORD *)&netshort.sa_data[2]; /*0x7b3fc4*/
        ntohs(*(u_short *)netshort.sa_data); /*0x7b3fd4*/
        Debug::Log(); /*0x7b4000*/
        if ( !byte_B78124 ) /*0x7b400f*/
          byte_B78124 = 1; /*0x7b4011*/
        if ( *((_BYTE *)v13 + 22) ) /*0x7b4018*/
        {
          __3_YAXPAX_Z(v13); /*0x7b4024*/
          return 0; /*0x7b4035*/
        }
LABEL_60:
        *((_BYTE *)v13 + 21) = 0; /*0x7b3e9e*/
        --*((_DWORD *)this + 64536); /*0x7b3eaa*/
        return 0; /*0x7b3eb8*/
      }
      *v13 = 0; /*0x7b4041*/
      v13[1] = 0; /*0x7b4043*/
      v13[2] = 0; /*0x7b4046*/
      v13[3] = 0; /*0x7b4049*/
      v32 = htonl(0x7F000001u); /*0x7b404c*/
      if ( *(_DWORD *)&netshort.sa_data[2] == v32 ) /*0x7b4055*/
      {
        *((_WORD *)v13 + 13) = 0; /*0x7b4057*/
        *v13 = MEMORY[0xA8DBB0]; /*0x7b4065*/
        v13[1] = MEMORY[0xA8DBB4]; /*0x7b406c*/
        v13[2] = MEMORY[0xA8DBB8]; /*0x7b4075*/
      }
      else
      {
        *((_WORD *)v13 + 13) = ntohs(*(u_short *)netshort.sa_data); /*0x7b4084*/
        v13[1] = *(_DWORD *)&netshort.sa_data[2]; /*0x7b408c*/
      }
      v33 = *((_DWORD *)this + 4); /*0x7b408f*/
      v34 = *((_DWORD *)this + 6); /*0x7b4092*/
      v35 = this + 8; /*0x7b4095*/
      if ( v34 < v33 /*0x7b40b8*/
        || (v35[13] || !v33)
        && (v36 = *((_DWORD *)v35 + 5), v36 > 0)
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v35 + 8))(v35, v33 + v36, 0) )
      {
        v37 = *((_DWORD *)v35 + 4); /*0x7b40bf*/
        v38 = *((_DWORD *)v35 + 1); /*0x7b40c2*/
        *((_DWORD *)v35 + 4) = v37 + 1; /*0x7b40c8*/
        *(_DWORD *)(v38 + 4 * v37) = v13; /*0x7b40cb*/
      }
    }
    return 0; /*0x7b40d7*/
  }
  if ( (unsigned __int16)a5 != 2 ) /*0x7b3b25*/
    return 0; /*0x7b3b30*/
  if ( *((_DWORD *)this + 64717) != -1 ) /*0x7b3b3a*/
  {
    v11 = 0; /*0x7b3b42*/
    if ( *((int *)this + 64716) > 0 ) /*0x7b3b46*/
    {
      v12 = this + 258816; /*0x7b3b48*/
      do /*0x7b3b76*/
      {
        if ( *v12 == *((_DWORD *)this + 64717) ) /*0x7b3b58*/
        {
          v6 = *((_DWORD *)this + 64717); /*0x7b3b5a*/
          Debug::Log(); /*0x7b3b62*/
        }
        ++v11; /*0x7b3b70*/
        ++v12; /*0x7b3b71*/
      }
      while ( v11 < *((_DWORD *)this + 64716) ); /*0x7b3b76*/
      sa = v6; /*0x7b3b78*/
    }
  }
  if ( HIWORD(a5) ) /*0x7b3b80*/
    goto LABEL_22; /*0x7b3b83*/
  if ( v39 ) /*0x7b3bae*/
  {
    if ( !*((_DWORD *)this + 18) ) /*0x7b3bb0*/
    {
LABEL_25:
      Debug::Log(); /*0x7b3bb7*/
      return 0; /*0x7b3bcd*/
    }
    v13 = (_DWORD *)**((_DWORD **)this + 15); /*0x7b3bd3*/
  }
  else
  {
    if ( !*((_DWORD *)this + 12) ) /*0x7b3bdc*/
      goto LABEL_25; /*0x7b3bdc*/
    v13 = (_DWORD *)**((_DWORD **)this + 9); /*0x7b3bfa*/
  }
  v45 = (int)v13; /*0x7b3bff*/
  *(_DWORD *)&netshort.sa_data[2] = v13[1]; /*0x7b3c03*/
  *(_WORD *)netshort.sa_data = htons(*((_WORD *)v13 + 13)); /*0x7b3c11*/
  netshort.sa_family = 2; /*0x7b3c1c*/
  if ( v39 ) /*0x7b3c23*/
  {
    if ( *(_DWORD *)&netshort.sa_data[2] != htonl(0x7F000001u) ) /*0x7b3c33*/
    {
      *(_WORD *)netshort.sa_data = htons(MEMORY[0x841F34]); /*0x7b3c4b*/
      *(_DWORD *)&netshort.sa_data[2] = htonl(0x7F000001u); /*0x7b3c55*/
    }
  }
  else
  {
    v14 = *((_WORD *)v13 + 13); /*0x7b3c5b*/
    if ( !v14 ) /*0x7b3c62*/
      v14 = MEMORY[0x841F30]; /*0x7b3c64*/
    *(_WORD *)netshort.sa_data = htons(v14); /*0x7b3c75*/
    if ( v13[1] == MEMORY[0xA8DBB4] /*0x7b3c9a*/
      && (!MEMORY[0xA8DA84] || GUID::Compare((char *)&MEMORY[0xA8DBB0], *(_DWORD *)MEMORY[0xA8DA78] + 40)) )
    {
      *(_DWORD *)&netshort.sa_data[2] = htonl(0x7F000001u); /*0x7b3cb4*/
      *(_WORD *)netshort.sa_data = htons(MEMORY[0x841F3C]); /*0x7b3cbe*/
    }
  }
  v41 = *(_DWORD *)&netshort.sa_data[2]; /*0x7b3ccc*/
  v15 = ntohs(*(u_short *)netshort.sa_data); /*0x7b3cd0*/
  v16 = *((_DWORD *)this + 64858); /*0x7b3cd5*/
  v17 = 0; /*0x7b3cdb*/
  v44 = v15; /*0x7b3cdf*/
  if ( v16 <= 0 ) /*0x7b3ce3*/
  {
LABEL_43:
    ntohs(*(u_short *)netshort.sa_data); /*0x7b3d18*/
    Debug::Log(); /*0x7b3d54*/
    if ( sendto(sa, (const char *)v13 + 28, v13[4] + 4, 0, &netshort, 16) == -1 && WSAGetLastError() != 10035 ) /*0x7b3d89*/
    {
      WSAGetLastError(); /*0x7b3d8b*/
      Debug::Log(); /*0x7b3d96*/
      (*(void (__thiscall **)(char *, SOCKET))(*(_DWORD *)this + 36))(this, sa); /*0x7b3da4*/
      return 0; /*0x7b3db0*/
    }
  }
  else
  {
    v18 = this + 259436; /*0x7b3ce5*/
    v19 = this + 259500; /*0x7b3ceb*/
    while ( v44 != *v19 || v41 != *v18 ) /*0x7b3d03*/
    {
      v13 = (_DWORD *)v45; /*0x7b3d09*/
      ++v17; /*0x7b3d0d*/
      ++v19; /*0x7b3d0e*/
      ++v18; /*0x7b3d11*/
      if ( v17 >= v16 ) /*0x7b3d16*/
        goto LABEL_43; /*0x7b3d16*/
    }
    ntohs(*(u_short *)netshort.sa_data); /*0x7b3db8*/
    Debug::Log(); /*0x7b3def*/
    v13 = (_DWORD *)v45; /*0x7b3df4*/
  }
  if ( !v39 ) /*0x7b3e01*/
  {
    v23 = *((_DWORD *)this + 12); /*0x7b3e5f*/
    if ( v23 > 0 ) /*0x7b3e64*/
    {
      v24 = v23 - 1; /*0x7b3e66*/
      v25 = 0; /*0x7b3e67*/
      for ( *((_DWORD *)this + 12) = v24; /*0x7b3e6e*/
            v25 < *((_DWORD *)this + 12);
            *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v25 - 4) = *(_DWORD *)(*((_DWORD *)this + 9) + 4 * v25) )
      {
        ++v25; /*0x7b3e73*/
      }
    }
    if ( *((_BYTE *)v13 + 22) ) /*0x7b3e82*/
    {
      __3_YAXPAX_Z(v13); /*0x7b3e8a*/
      return 0; /*0x7b3e9b*/
    }
    goto LABEL_60; /*0x7b3e87*/
  }
  v20 = *((_DWORD *)this + 18); /*0x7b3e03*/
  if ( v20 > 0 ) /*0x7b3e08*/
  {
    v21 = v20 - 1; /*0x7b3e0a*/
    v22 = 0; /*0x7b3e0b*/
    for ( *((_DWORD *)this + 18) = v21; /*0x7b3e12*/
          v22 < *((_DWORD *)this + 18);
          *(_DWORD *)(*((_DWORD *)this + 15) + 4 * v22 - 4) = *(_DWORD *)(*((_DWORD *)this + 15) + 4 * v22) )
    {
      ++v22; /*0x7b3e17*/
    }
  }
  if ( *((_BYTE *)v13 + 22) ) /*0x7b3e26*/
  {
    __3_YAXPAX_Z(v13); /*0x7b3e2e*/
  }
  else
  {
    *((_BYTE *)v13 + 21) = 0; /*0x7b3e42*/
    --*((_DWORD *)this + 64537); /*0x7b3e4e*/
  }
  return 0; /*0x7b3b27*/
}
}

// 0x7B4150
int UDPInterfaceClass::Connect(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall UDPInterfaceClass_Destru::_vt19(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 64853) + 4 * a2); /*0x7b415d*/
}
}

// 0x7B4160
short UDPInterfaceClass::Receive()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __thiscall UDPInterfaceClass_Destru::_vt24(_WORD *this)
{
  return *(this + 129406); /*0x7b4167*/
}
}

// 0x7B4170
UDPInterfaceClass * UDPInterfaceClass::Destructor(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
UDPInterfaceClass *__thiscall UDPInterfaceClass::Destructor(void ***this, char a2)
{
  int v3; // eax
  void **v4; // ecx
  int v5; // eax
  int v6; // eax
  void **v7; // ecx
  int v8; // eax
  void *v9; // eax
  void *v10; // eax

  *this = &vt_UDPInterfaceClass; /*0x7b4176*/
  while ( *(this + 64722) ) /*0x7b417c*/
  {
    __3_YAXPAX_Z(**(this + 64719)); /*0x7b418f*/
    v3 = (int)*(this + 64722); /*0x7b4194*/
    if ( v3 > 0 ) /*0x7b419f*/
    {
      v4 = (void **)(v3 - 1); /*0x7b41a1*/
      v5 = 0; /*0x7b41a4*/
      for ( *(this + 64722) = v4; v5 < (int)*(this + 64722); (*(this + 64719))[v5 - 1] = (*(this + 64719))[v5] ) /*0x7b41ae*/
        ++v5; /*0x7b41b6*/
    }
  }
  while ( *(this + 64856) ) /*0x7b41d0*/
  {
    __3_YAXPAX_Z(**(this + 64853)); /*0x7b41e1*/
    v6 = (int)*(this + 64856); /*0x7b41e6*/
    if ( v6 > 0 ) /*0x7b41f1*/
    {
      v7 = (void **)(v6 - 1); /*0x7b41f3*/
      v8 = 0; /*0x7b41f6*/
      for ( *(this + 64856) = v7; v8 < (int)*(this + 64856); (*(this + 64853))[v8 - 1] = (*(this + 64853))[v8] ) /*0x7b4200*/
        ++v8; /*0x7b4208*/
    }
  }
  UDPInterfaceClass::connect(this); /*0x7b4224*/
  v9 = *(this + 64853); /*0x7b4229*/
  *(this + 64852) = &vt_VectorClass_unsigned_char; /*0x7b422f*/
  if ( v9 && *((_BYTE *)this + 259421) ) /*0x7b423d*/
  {
    __3_YAXPAX_Z(v9); /*0x7b4246*/
    *(this + 64853) = 0; /*0x7b424e*/
  }
  *((_BYTE *)this + 259421) = 0; /*0x7b4254*/
  *(this + 64854) = 0; /*0x7b425a*/
  v10 = *(this + 64719); /*0x7b4260*/
  *(this + 64718) = &vt_VectorClass_unsigned_char; /*0x7b4266*/
  if ( v10 && *((_BYTE *)this + 258885) ) /*0x7b4274*/
  {
    __3_YAXPAX_Z(v10); /*0x7b427d*/
    *(this + 64719) = 0; /*0x7b4285*/
  }
  *((_BYTE *)this + 258885) = 0; /*0x7b428d*/
  *(this + 64720) = 0; /*0x7b4293*/
  WinsockInterfaceClass::WinsockInterfaceClass((int)this); /*0x7b4299*/
  if ( (a2 & 1) != 0 ) /*0x7b42a3*/
    __3_YAXPAX_Z(this); /*0x7b42a6*/
  return (UDPInterfaceClass *)this; /*0x7b42b0*/
}
}

// 0x7B42C0
void UDPInterfaceClass::disconnect()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall UDPInterfaceClass_Destru::sub_7B42C0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x7b42c6*/
  *(_DWORD *)(this + 16) = 0; /*0x7b42c9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x7b42d0*/
  {
    __3_YAXPAX_Z(v2); /*0x7b42d6*/
    *(_DWORD *)(this + 4) = 0; /*0x7b42de*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x7b42e1*/
  *(_DWORD *)(this + 8) = 0; /*0x7b42e4*/
}
}

// 0x7B42F0
unsigned int UDPInterfaceClass::reset(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall UDPInterfaceClass_Destru::sub_7B42F0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x7b42f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x7b4305*/
  else
    return 0; /*0x7b42f7*/
}
}

// 0x7B44A0
char UDPInterfaceClass::flush(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall UDPInterfaceClass_Destru::sub_7B44A0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7b44ac*/
  {
    *((_BYTE *)this + 12) = 0; /*0x7b44b2*/
    if ( a3 ) /*0x7b44b8*/
      v4 = a3; /*0x7b44ce*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x7b44ca*/
    *((_BYTE *)this + 12) = 1; /*0x7b44d2*/
    if ( !v4 ) /*0x7b44d6*/
      return 0; /*0x7b454a*/
    if ( *((_DWORD *)this + 1) ) /*0x7b44d8*/
    {
      v5 = *((_DWORD *)this + 2); /*0x7b44df*/
      if ( a2 < v5 ) /*0x7b44e4*/
        v5 = a2; /*0x7b44e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x7b44ec*/
        ++i; /*0x7b44f1*/
      if ( *((_BYTE *)this + 13) ) /*0x7b44fe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x7b4509*/
        *((_DWORD *)this + 1) = 0; /*0x7b4511*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x7b451a*/
    *((_DWORD *)this + 2) = a2; /*0x7b4522*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x7b4525*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x7b452e*/
  }
  v7 = *((_DWORD *)this + 2); /*0x7b4531*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x7b4539*/
    *((_DWORD *)this + 4) = v7; /*0x7b453b*/
  return 1; /*0x7b453e*/
}
}

// 0x7B4550
int UDPInterfaceClass::sendPacket(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall UDPInterfaceClass_Destru::sub_7B4550(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x7b4550*/
  result = 0; /*0x7b4553*/
  if ( v2 <= 0 ) /*0x7b4558*/
    return -1; /*0x7b456f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x7b455e*/
  {
    if ( ++result >= v2 ) /*0x7b456d*/
      return -1; /*0x7b456d*/
  }
  return result; /*0x7b4572*/
}
}

// 0x7B45D0
DynamicVector * UDPInterfaceClass::receivePacket(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall UDPInterfaceClass::receivePacket(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x7b45d3*/
  *this = &vt_VectorClass_unsigned_char; /*0x7b45d6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x7b45e0*/
  {
    __3_YAXPAX_Z(v3); /*0x7b45e8*/
    *(this + 1) = 0; /*0x7b45f0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x7b45fb*/
  *(this + 2) = 0; /*0x7b4601*/
  if ( (a2 & 1) != 0 ) /*0x7b4608*/
    __3_YAXPAX_Z(this); /*0x7b460b*/
  return (DynamicVector *)this; /*0x7b4615*/
}
}

// 0x7B3450
char UDPInterfaceClass_Destru::Bind(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall UDPInterfaceClass_Destru::Bind(void ***this, int a2)
{
  char result; // al
  IUnknown *v4; // esi
  int v5; // eax
  void **v6; // ecx
  int v7; // eax
  int *i; // eax
  _DWORD *v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  SOCKET v14; // eax
  SOCKET v15; // [esp-10h] [ebp-B8h]
  IUnknown *h_addr_list; // [esp+Ch] [ebp-9Ch]
  char optval[4]; // [esp+10h] [ebp-98h] BYREF
  int v18; // [esp+14h] [ebp-94h]
  struct sockaddr v19; // [esp+18h] [ebp-90h] BYREF
  char name[128]; // [esp+28h] [ebp-80h] BYREF

  if ( *((_BYTE *)this + 258152) || (result = ((int (__thiscall *)(void ***))(*this)[25])(this)) != 0 ) /*0x7b346b*/
  {
    ((void (__thiscall *)(void ***, _WORD))(*this)[23])(this, *(_WORD *)&stru_830620.__pad_579C[49524]); /*0x7b3483*/
    Debug::Log(); /*0x7b348b*/
    if ( gethostname(name, 128) ) /*0x7b349d*/
      Debug::Log(); /*0x7b34b0*/
    Debug::Log(); /*0x7b34bd*/
    v4 = (IUnknown *)gethostbyname(name); /*0x7b34cf*/
    if ( !v4 ) /*0x7b34d3*/
    {
      WSAGetLastError(); /*0x7b34d5*/
      Debug::Log(); /*0x7b34e0*/
    }
    while ( *(this + 64856) ) /*0x7b34e8*/
    {
      __3_YAXPAX_Z(**(this + 64853)); /*0x7b34fb*/
      v5 = (int)*(this + 64856); /*0x7b3500*/
      if ( v5 > 0 ) /*0x7b350b*/
      {
        v6 = (void **)(v5 - 1); /*0x7b350d*/
        v7 = 0; /*0x7b3510*/
        for ( *(this + 64856) = v6; v7 < (int)*(this + 64856); (*(this + 64853))[v7 - 1] = (*(this + 64853))[v7] ) /*0x7b351a*/
          ++v7; /*0x7b3522*/
      }
    }
    h_addr_list = (IUnknown *)v4->field_C; /*0x7b3541*/
    for ( i = (int *)h_addr_list->field_0; h_addr_list->field_0; i = (int *)h_addr_list->field_0 ) /*0x7b3545*/
    {
      v18 = *i; /*0x7b3565*/
      h_addr_list = (IUnknown *)((char *)h_addr_list + 4); /*0x7b3569*/
      Debug::Log(); /*0x7b3587*/
      v9 = (_DWORD *)__2_YAPAXI_Z(4u); /*0x7b3593*/
      *v9 = v18; /*0x7b3598*/
      v10 = (int)*(this + 64854); /*0x7b359b*/
      if ( (int)*(this + 64856) >= v10 ) /*0x7b35a1*/
      {
        if ( !*((_BYTE *)this + 259421) && v10 ) /*0x7b35ac*/
          continue; /*0x7b35ac*/
        v11 = (int)*(this + 64857); /*0x7b35ae*/
        if ( v11 <= 0 /*0x7b35be*/
          || !((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))(*(this + 64852))[2])(this + 64852, v10 + v11, 0) )
        {
          continue; /*0x7b35be*/
        }
      }
      v12 = (int)*(this + 64856); /*0x7b35c5*/
      v13 = (int)*(this + 64853); /*0x7b35c8*/
      *(this + 64856) = (void **)(v12 + 1); /*0x7b35ce*/
      *(_DWORD *)(v13 + 4 * v12) = v9; /*0x7b35d1*/
    }
    Debug::Log(); /*0x7b35e9*/
    v14 = socket(2, 2, 0); /*0x7b35f8*/
    *(this + 64540) = (void **)v14; /*0x7b3600*/
    if ( v14 == -1 ) /*0x7b3606*/
    {
      return 0; /*0x7b3609*/
    }
    else
    {
      v19.sa_family = 2; /*0x7b361c*/
      *(_WORD *)v19.sa_data = htons(*(u_short *)&stru_830620.__pad_579C[49532]); /*0x7b362a*/
      *(_DWORD *)&v19.sa_data[2] = htonl(0); /*0x7b3639*/
      Debug::Log(); /*0x7b363d*/
      if ( bind((SOCKET)*(this + 64540), &v19, 16) == -1 ) /*0x7b365b*/
      {
        ((void (__thiscall *)(void ***))(*this)[1])(this); /*0x7b3661*/
        return 0; /*0x7b3665*/
      }
      else
      {
        v15 = (SOCKET)*(this + 64540); /*0x7b3688*/
        memset(optval, 0, sizeof(optval)); /*0x7b3689*/
        setsockopt(v15, 0xFFFF, 128, optval, 4); /*0x7b3693*/
        Socket::ConfigureBuffers((SOCKET *)this, (AnimClass *)*(this + 64540)); /*0x7b36a1*/
        Debug::Log(); /*0x7b36ab*/
        return 1; /*0x7b36b3*/
      }
    }
  }
  return result; /*0x7b346d*/
}
}

// 0x7B36C0
short UDPInterfaceClass_Destru::ddtor(WinsockInterfaceClass * aP1, unsigned int arg4, unsigned char * a3, unsigned int a5, WinsockInterfaceClass * aP5, char a7, short a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __thiscall UDPInterfaceClass_Destru::ddtor(
        void *this,
        WinsockInterfaceClass *aP1,
        unsigned int arg4,
        _BYTE *a3,
        unsigned int a5,
        WinsockInterfaceClass *aP5,
        char a7,
        __int16 a8)
{
  if ( a3 && Network::IsBroadcastAddr(a3) ) /*0x7b36ce*/
    return (*(__int16 (__thiscall **)(void *, WinsockInterfaceClass *, unsigned int, WinsockInterfaceClass *))(*(_DWORD *)this + 16))( /*0x7b36ea*/
             this,
             aP1,
             arg4,
             aP5);
  else
    return AudioQueue::WriteBuffer((int)this, aP1, arg4, a3, a5, aP5, a7, a8); /*0x7b3713*/
}
}

// 0x7B3720
namespace gamemd {
int UDPInterfaceClass_Destru_Connect()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __userpurge UDPInterfaceClass_Destru::Connect@<eax>(
        int a1@<ecx>,
        int a2@<edi>,
        const void *a3,
        unsigned int a4,
        WinsockInterfaceClass *aP1,
        char a6)
{
  int result; // eax
  _BYTE *v8; // ebp
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  WPARAM v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // edx
  UINT v19; // eax
  WPARAM v20; // [esp-8h] [ebp-20h]
  _WORD *v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+14h] [ebp-4h]

  v23 = 0; /*0x7b3726*/
  result = *(_DWORD *)(a1 + 258888); /*0x7b372e*/
  if ( result > 0 ) /*0x7b3736*/
  {
    v22 = (_WORD *)(a1 + 258896); /*0x7b3745*/
    do /*0x7b3875*/
    {
      v8 = AudioQueue::AllocBuffer((_DWORD *)a1, aP1); /*0x7b3759*/
      qmemcpy(v8 + 32, a3, a4); /*0x7b376a*/
      *((_DWORD *)v8 + 4) = a4; /*0x7b3773*/
      v8[20] = 1; /*0x7b377a*/
      *(_DWORD *)v8 = 0; /*0x7b377e*/
      v9 = v23; /*0x7b3780*/
      *((_DWORD *)v8 + 1) = 0; /*0x7b3784*/
      *((_DWORD *)v8 + 2) = 0; /*0x7b3787*/
      *((_DWORD *)v8 + 3) = 0; /*0x7b378a*/
      *((_DWORD *)v8 + 1) = **(_DWORD **)(*(_DWORD *)(a1 + 258876) + 4 * v23); /*0x7b379c*/
      *((_WORD *)v8 + 13) = *v22; /*0x7b37a2*/
      (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 84))(a1, v8, a2); /*0x7b37aa*/
      if ( a6 ) /*0x7b37b3*/
      {
        v10 = *(_DWORD *)(a1 + 64); /*0x7b37b5*/
        if ( *(_DWORD *)(a1 + 72) < v10 /*0x7b37dd*/
          || (*(_BYTE *)(a1 + 69) || !v10)
          && (v11 = *(_DWORD *)(a1 + 76), v11 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(a1 + 56) + 8))(a1 + 56, v10 + v11, 0) )
        {
          v12 = *(_DWORD *)(a1 + 72); /*0x7b37e4*/
          v13 = *(_DWORD *)(a1 + 60); /*0x7b37e7*/
          *(_DWORD *)(a1 + 72) = v12 + 1; /*0x7b37ed*/
          *(_DWORD *)(v13 + 4 * v12) = v8; /*0x7b37f0*/
        }
        v14 = *(_DWORD *)(a1 + 258160); /*0x7b37f3*/
      }
      else
      {
        v15 = *(_DWORD *)(a1 + 40); /*0x7b37fb*/
        if ( *(_DWORD *)(a1 + 48) < v15 /*0x7b3823*/
          || (*(_BYTE *)(a1 + 45) || !v15)
          && (v16 = *(_DWORD *)(a1 + 52), v16 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(a1 + 32) + 8))(a1 + 32, v15 + v16, 0) )
        {
          v17 = *(_DWORD *)(a1 + 48); /*0x7b382a*/
          v18 = *(_DWORD *)(a1 + 36); /*0x7b382d*/
          *(_DWORD *)(a1 + 48) = v17 + 1; /*0x7b3833*/
          *(_DWORD *)(v18 + 4 * v17) = v8; /*0x7b3836*/
        }
        v14 = *(_DWORD *)(a1 + 258156); /*0x7b3839*/
      }
      a2 = 2; /*0x7b3841*/
      v20 = v14; /*0x7b3845*/
      v19 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 56))(a1); /*0x7b3848*/
      SendMessageA((HWND)g_hWnd, v19, v20, 0); /*0x7b3852*/
      MessageLoop(); /*0x7b3858*/
      result = *(_DWORD *)(a1 + 258888); /*0x7b3861*/
      ++v23; /*0x7b386d*/
      ++v22; /*0x7b3871*/
    }
    while ( v9 + 1 < result ); /*0x7b3875*/
  }
  return result; /*0x7b387e*/
}
}
} // namespace gamemd

// 0x7B3890
char UDPInterfaceClass_Destru::Receive()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall UDPInterfaceClass_Destru::_vt07(SOCKET *this)
{
  signed int v2; // ebx
  SOCKET *v3; // edi
  u_int v4; // eax

  if ( IPXInterfaceClass::Receive(this) && (v2 = 0, (int)*(this + 64716) > 0) ) /*0x7b38a8*/
  {
    v3 = this + 64704; /*0x7b38aa*/
    while ( 1 ) /*0x7b38b8*/
    {
      v4 = (*(int (__thiscall **)(SOCKET *, int))(*this + 56))(this, -1); /*0x7b38b8*/
      if ( WSAAsyncSelect(*v3, g_hWnd, v4, 3) == -1 ) /*0x7b38ce*/
        break; /*0x7b38ce*/
      ++v2; /*0x7b38d6*/
      ++v3; /*0x7b38d7*/
      if ( v2 >= (int)*(this + 64716) ) /*0x7b38dc*/
        goto LABEL_6; /*0x7b38dc*/
    }
    Debug::Log(); /*0x7b38ee*/
    return 0; /*0x7b38f6*/
  }
  else
  {
LABEL_6:
    MessageLoop(); /*0x7b38de*/
    return 1; /*0x7b38e5*/
  }
}
}

// 0x7B3900
int UDPInterfaceClass_Destru::CheckStatus()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall UDPInterfaceClass_Destru::_vt08(SOCKET *this)
{
  NetworkClass::UnregisterAsync(this); /*0x7b3903*/
  return (*(int (__thiscall **)(SOCKET *))(*this + 112))(this); /*0x7b390f*/
}
}

// 0x7B3920
void UDPInterfaceClass_Destru::Reset(unsigned int * a2, short a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall UDPInterfaceClass_Destru::_vt30(_DWORD *this, _DWORD *a2, __int16 a3)
{
  int v4; // edi
  __int16 v5; // bp
  int v6; // eax
  _DWORD *v7; // edx
  _WORD *v8; // ecx

  v4 = *(this + 64858); /*0x7b3926*/
  if ( v4 < 16 ) /*0x7b392f*/
  {
    v5 = a3; /*0x7b3939*/
    v6 = 0; /*0x7b393d*/
    if ( v4 > 0 ) /*0x7b3941*/
    {
      v7 = this + 64859; /*0x7b3943*/
      v8 = this + 64875; /*0x7b3949*/
      do /*0x7b3967*/
      {
        if ( v5 == *v8 ) /*0x7b3952*/
        {
          if ( *a2 == *v7 ) /*0x7b3958*/
            return; /*0x7b3958*/
          v5 = a3; /*0x7b395a*/
        }
        ++v6; /*0x7b395e*/
        ++v8; /*0x7b395f*/
        ++v7; /*0x7b3962*/
      }
      while ( v6 < v4 ); /*0x7b3967*/
    }
    Debug::Log(); /*0x7b398d*/
    *(this + *(this + 64858) + 64859) = *a2; /*0x7b399d*/
    *((_WORD *)this + (*(this + 64858))++ + 129750) = v5; /*0x7b39aa*/
  }
}
}

// 0x7B4100
int UDPInterfaceClass_Destru::GetStatistics(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall UDPInterfaceClass_Destru::_vt14(_DWORD *this, int a2)
{
  if ( a2 == *(this + 64539) || a2 == -1 )
    return 1140; /*0x7b412e*/
  else
    return a2 != *(this + 64540) ? 0 : 0x475;
}
}

// 0x7B4140
int UDPInterfaceClass_Destru::COMStub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall UDPInterfaceClass_Destru::_vt18(_DWORD *this)
{
  return *(this + 64856); /*0x7b4146*/
}
}

// 0x7B40F0
int UDPInterfaceClass_Destru::COMStub_Ret2()
{
return 2;
}
