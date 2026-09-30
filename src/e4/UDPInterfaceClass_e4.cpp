// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/NetworkClass_e4.hpp"
#include "e4/classes/UDPInterfaceClass_e4.hpp"
#include "e4/classes/UDPInterfaceClass_Destru_e4.hpp"
#include "e4/classes/SOCKET_e4.hpp"
#include "e4/classes/TypeList_flat_e4.hpp"
#include "e4/classes/TypeList_TechnoType_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/TypeList_Infantry_e4.hpp"
#include "e4/classes/Socket_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/TypeList_Particle_e4.hpp"
#include "e4/classes/TypeList_cptr_ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"

// 0x7B1B50
namespace gamemd {
int UDPInterfaceClass::connect()
{
  char result; // al

    result = *((unsigned int *)this + 1032608);
  if ( result ) /*0x7b1b5b*/
  {
        (*(void (**)(unsigned char *))(*(unsigned int *)this + 32))(this);
        (*(void (**)(unsigned char *))(*(unsigned int *)this + 4))(this);
    result = WSACleanup(); /*0x7b1b69*/
        *((unsigned int *)this + 1032608) = 0;
  }
  return result; /*0x7b1b75*/
}
} // namespace gamemd
// 0x7B3310
namespace gamemd {
void UDPInterfaceClass::CheckStatus(short a2)
{
    unsigned int v6 = 0;  /* G37 hoist */
    unsigned int v4 = 0;  /* G37 hoist */
    unsigned int v6 = 0;  /* G37 hoist */
    unsigned int v4 = 0;  /* G37 hoist */
    unsigned int v6 = 0;  /* G37 hoist */
    unsigned int v4 = 0;  /* G37 hoist */
    unsigned int v6 = 0;  /* G37 hoist */
    unsigned int v4 = 0;  /* G37 hoist */
    unsigned int v6 = 0;  /* G37 hoist */
    unsigned int v4 = 0;  /* G37 hoist */
    unsigned int v6 = 0;  /* G37 hoist */
    unsigned int v4 = 0;  /* G37 hoist */
    unsigned int v6 = 0;  /* G37 hoist */
    unsigned int v4 = 0;  /* G37 hoist */
    unsigned int v6 = 0;  /* G37 hoist */
    unsigned int v4 = 0;  /* G37 hoist */
    unsigned int v6 = 0;  /* G37 hoist */
    unsigned int v4 = 0;  /* G37 hoist */
  int v3; // ecx
  int v4; // edi
  UDPInterfaceClass *i; // eax
  SOCKET *v6; // ebx
  unsigned short *v8; // ecx
  unsigned int *v9; // eax

  if ( a2 ) /*0x7b331c*/
  {
        v3 = *((unsigned int *)this + 258864);
    v4 = 0; /*0x7b3328*/
    if ( v3 > 0 ) /*0x7b332c*/
    {
      for ( i = this + 32356; IDA_LOWORD(i->Socket) != a2; i = (UDPInterfaceClass *)((char *)i + 2) ) /*0x7b3332*/
      {
        if ( ++v4 >= v3 ) /*0x7b3343*/
          return; /*0x7b3343*/
      }
      v6 = (SOCKET *)this + v4 + 64704; /*0x7b3352*/
            Debug::Log();
      closesocket(*(unsigned int *)(v6)); /*0x7b336a*/
            if ( *v6 == *((unsigned int *)this + 258868) )
                *((unsigned int *)this + 258868) = -1;
      v4 = v4; /*0x7b338b*/
            if ( v4 < *((unsigned int *)this + 258864) - 1 )
      {
        v8 = (unsigned short *)this + v4 + 129424; /*0x7b3392*/
        v9 = (unsigned int *)this + v4 + 64704; /*0x7b3399*/
        do /*0x7b33b7*/
        {
          ++v4; /*0x7b339e*/
          *v9 = v9[1]; /*0x7b339f*/
          *v8 = v8[1]; /*0x7b33a5*/
          ++v9; /*0x7b33ae*/
          ++v8; /*0x7b33b1*/
        }
                do
      }
            --*((unsigned int *)this + 258864);
    }
  }
}
} // namespace gamemd
// 0x7B33D0
namespace gamemd {
void UDPInterfaceClass::GetStatistics(unsigned short a2)
{
  int v2; // esi
  int v3; // eax
  UDPInterfaceClass *v4; // edx

    if ( !a2 || a2 == *(unsigned int *)&MEMORY[0x841F30] || (v2 = *((unsigned int *)this + 258864), v3 = 0, v2 <= 0) )
  {
  LABEL_7:
        *((unsigned int *)this + 258868) = -1;
  }
  else
  {
    v4 = this + 32356; /*0x7b33f8*/
    while ( IDA_LOWORD(v4->Socket) != a2 ) /*0x7b3401*/
    {
      ++v3; /*0x7b3403*/
      v4 = (UDPInterfaceClass *)((char *)v4 + 2); /*0x7b3404*/
      if ( v3 >= v2 ) /*0x7b3409*/
        goto LABEL_7; /*0x7b3409*/
    }
        *((unsigned int *)this + 258868) = *(this + v3 + 64704);
  }
}
} // namespace gamemd
// 0x7B3A20
namespace gamemd {
AbstractClass * * UDPInterfaceClass::Flush()
{
  void * v2;
  int result; // eax
  SOCKET *v4; // esi

  v2 = 0; /*0x7b3a24*/
    result = *((unsigned int *)this + 258864);
  if ( result <= 0 ) /*0x7b3a2e*/
  {
        *((unsigned int *)this + 258864) = 0;
        *((unsigned int *)this + 258868) = -1;
  }
  else
  {
    v4 = &this->u32_3F300; /*0x7b3a31*/
    do /*0x7b3a6e*/
    {
            Debug::Log();
      WSAAsyncSelect(*v4, g_hWnd, 0, 0); /*0x7b3a55*/
      closesocket(*v4); /*0x7b3a5d*/
            result = *((unsigned int *)this + 258864);
      ++v2; /*0x7b3a68*/
      ++v4; /*0x7b3a69*/
    }
    while (v2 < (void *)(result), unsigned int a4); /*0x7b3a6e*/
        *((unsigned int *)this + 258864) = 0;
        *((unsigned int *)this + 258868) = -1;
  }
  return (gamemd::AbstractClass **, unsigned int a4)(result);
}
} // namespace gamemd
// 0x7B3AA0
namespace gamemd {
AbstractClass * * UDPInterfaceClass::ProcessSocketIO(int a2, SOCKET s, int a4, unsigned int a5, void * a1, void * a3)
{
    unsigned int v32 = 0;  /* G37 hoist */
    unsigned int v15 = 0;  /* G37 hoist */
    unsigned int v14 = 0;  /* G37 hoist */
    unsigned int v13 = 0;  /* G37 hoist */
  SOCKET v6; // ebx
  int v7; // edx
  int v8; // eax
  unsigned int *v9; // ecx
  int v11; // edi
  unsigned int *v12; // esi
  unsigned int *v13; // ebx
  u_short v14; // ax
  u_short v15; // ax
  int v16; // edx
  int v17; // ecx
  unsigned int *v18; // eax
  unsigned short *v19; // edi
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v28; // ecx
  int v29; // eax
  unsigned int **v30; // edx
  int v31; // edi
  u_long v32; // eax
  void * v33;
  void * v34;
  char *v35; // ebp
  int v36; // eax
  int v37; // eax
  int v38; // edx
  char v39; // [esp+13h] [ebp-1Dh]
  int fromlen; // [esp+14h] [ebp-1Ch] BYREF
  int v41; // [esp+18h] [ebp-18h]
  struct sockaddr netshort; // [esp+20h] [ebp-10h] BYREF
  SOCKET sa; // [esp+38h] [ebp+8h]
  int v45; // [esp+40h] [ebp+10h]

  v39 = 0; /*0x7b3ab2*/
  if ( s == 1140 ) /*0x7b3ab7*/
  {
        v6 = *((unsigned int *)this + 64539);
    sa = v6; /*0x7b3ac5*/
    if ( a4 != v6 ) /*0x7b3ac9*/
    {
            v7 = *((unsigned int *)this + 64716);
      v8 = 0; /*0x7b3ad1*/
      if ( v7 > 0 ) /*0x7b3ad5*/
      {
        v9 = &this->u32_FCC00; /*0x7b3ad7*/
        while ( *v9 != a4 ) /*0x7b3adf*/
        {
          ++v8; /*0x7b3ae1*/
          ++v9; /*0x7b3ae2*/
          if ( v8 >= v7 ) /*0x7b3ae7*/
            goto LABEL_11; /*0x7b3ae7*/
        }
        v6 = *((unsigned int *)this + v8 + 64704); /*0x7b3aeb*/
        sa = v6; /*0x7b3af2*/
      }
    }
  }
  else
  {
    if (s != 1141, unsigned int a5) /*0x7b3afd*/
      return 1; /*0x7b40dd*/
        v6 = *((unsigned int *)this + 64540);
    v39 = 1; /*0x7b3b09*/
    sa = v6; /*0x7b3b0e*/
  }
  LABEL_11:
  if ( (uint16_t)a5 == 1 ) /*0x7b3b1e*/
  {
    if ( IDA_HIWORD(a5) ) /*0x7b3ebb*/
    {
  LABEL_22:
            Debug::Log();
      /*0x7b3b8b*/
      (*(void (**)(char *, SOCKET))(*(unsigned int *)this + 36))(this, v6);
      return 0; /*0x7b3ba5*/
    }
    fromlen = 16; /*0x7b3ee4*/
        v26 = recvfrom(v6, (char *)this + 1032656, 640, 0, &netshort, &fromlen);
    v26 = v26; /*0x7b3ef1*/
    if ( v26 == -1 ) /*0x7b3ef6*/
    {
      (*(void (**)(char *, SOCKET))(*(unsigned int *)this + 36))(this, v6);
      return 0; /*0x7b3f0a*/
    }
    if ( v26 ) /*0x7b3f0f*/
    {
      if ( !v39 && !g_Network_IsHosting ) /*0x7b3f24*/
      {
                v28 = *((unsigned int *)this + 64856);
        v29 = 0; /*0x7b3f2c*/
        if ( v28 > 0 ) /*0x7b3f30*/
        {
                    v30 = (unsigned int **)*((unsigned int *)this + 64853);
          while ( **v30 != *(unsigned int *)&netshort.sa_data[2] ) /*0x7b3f42*/
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
      if ( v31 > 0 && Random::Range(Randomizer_Global, 0, 99) <= v31 ) /*0x7b3f6b*/
        return 0; /*0x7b3f76*/
      v13 = (unsigned int *)IPXInterfaceClass::processPacket(this); /*0x7b3f80*/
      ((unsigned int *)(v13))[4] = v26 - 4; /*0x7b3f8f*/
            v13[7] = *((unsigned int *)this + 64541);
      *((unsigned char *)v13 + 23) = v39; /*0x7b3fa0*/
      *((unsigned char *)v13 + 24) = 0; /*0x7b3fa6*/
            qmemcpy(v13 + 8, (char *)this + 1032672, v27 - 4);
      /*0x7b3fab*/
      if ( !(*(unsigned __int8 (**)(char *, unsigned int *))(*(unsigned int *)this + 88))(this, v13) );
      {
        ((unsigned int *)(v13))[1] = *(unsigned int *)&netshort.sa_data[2]; /*0x7b3fc4*/
        ntohs(*(u_short *)netshort.sa_data); /*0x7b3fd4*/
        Debug::Log(); /*0x7b4000*/
        if ( !byte_B78124 ) /*0x7b400f*/
          byte_B78124 = 1; /*0x7b4011*/
        if ( *((unsigned char *)v13 + 22) ) /*0x7b4018*/
        {
          RA2_OPDEL(v13); /*0x7b4024*/
          return 0; /*0x7b4035*/
        }
  LABEL_60:
        *((unsigned char *)v13 + 21) = 0; /*0x7b3e9e*/
                --*((unsigned int *)this + 64536);
        return 0; /*0x7b3eb8*/
      }
      *(unsigned int *)(v13) = 0; /*0x7b4041*/
      ((unsigned int *)(v13))[1] = 0; /*0x7b4043*/
      ((unsigned int *)(v13))[2] = 0; /*0x7b4046*/
      ((unsigned int *)(v13))[3] = 0; /*0x7b4049*/
      v32 = htonl(0x7F000001u); /*0x7b404c*/
      if ( *(unsigned int *)&netshort.sa_data[2] == v32 ) /*0x7b4055*/
      {
        *((unsigned short *)v13 + 13) = 0; /*0x7b4057*/
        *(unsigned int *)(v13) = dword_A8DBB0; /*0x7b4065*/
        ((unsigned int *)(v13))[1] = dword_A8DBB4; /*0x7b406c*/
        ((unsigned int *)(v13))[2] = dword_A8DBB8; /*0x7b4075*/
      }
      else
      {
        *((unsigned short *)v13 + 13) = ntohs(*(u_short *)netshort.sa_data); /*0x7b4084*/
        ((unsigned int *)(v13))[1] = *(unsigned int *)&netshort.sa_data[2]; /*0x7b408c*/
      }
      v33 = (char *)(this->q010);
      v34 = (char *)(this->q018);
      v35 = (char *)(&this->q020);
      if ( v34 < v33 /*0x7b40b8*/
        || (v35[13] || !v33)
        && (v36 = *((unsigned int *)v35 + 5), v36 > 0)
        && (*(uint8_t (**)(char *, int, unsigned int))(this->q010)(v35, (unsigned int)(v33)+ v36, 0) )
      {
        v37 = *((unsigned int *)v35 + 4); /*0x7b40bf*/
        v38 = *((unsigned int *)v35 + 1); /*0x7b40c2*/
        *((unsigned int *)v35 + 4) = v37 + 1; /*0x7b40c8*/
        *(unsigned int *)(v38 + 4 * v37) = v13; /*0x7b40cb*/
      }
    }
    return 0; /*0x7b40d7*/
  }
  if ( (uint16_t)a5 != 2 ) /*0x7b3b25*/
    return 0; /*0x7b3b30*/
    if ( *((unsigned int *)this + 64717) != -1 )
  {
    v11 = 0; /*0x7b3b42*/
        if ( *((int *)this + 64716) > 0 )
    {
            v12 = (char *)this + 1035264;
      do /*0x7b3b76*/
      {
                if ( *v12 == *((unsigned int *)this + 64717) )
        {
                    v6 = *((unsigned int *)this + 64717);
          Debug::Log(); /*0x7b3b62*/
        }
        ++v11; /*0x7b3b70*/
        ++v12; /*0x7b3b71*/
      }
            do
      sa = v6; /*0x7b3b78*/
    }
  }
  if ( IDA_HIWORD(a5) ) /*0x7b3b80*/
    goto LABEL_22; /*0x7b3b83*/
  if ( v39 ) /*0x7b3bae*/
  {
        if ( !*((unsigned int *)this + 18) )
    {
  LABEL_25:
      Debug::Log(); /*0x7b3bb7*/
      return 0; /*0x7b3bcd*/
    }
        v13 = (unsigned int *)**((unsigned int **)this + 15);
  }
  else
  {
        if ( !*((unsigned int *)this + 12) )
      goto LABEL_25; /*0x7b3bdc*/
        v13 = (unsigned int *)**((unsigned int **)this + 9);
  }
  v45 = (int)v13; /*0x7b3bff*/
  *(unsigned int *)&netshort.sa_data[2] = v13[1]; /*0x7b3c03*/
  *(unsigned short *)netshort.sa_data = htons(*((unsigned short *)v13 + 13)); /*0x7b3c11*/
  netshort.sa_family = 2; /*0x7b3c1c*/
  if ( v39 ) /*0x7b3c23*/
  {
    if ( *(unsigned int *)&netshort.sa_data[2] != htonl(0x7F000001u) ) /*0x7b3c33*/
    {
      *(unsigned short *)netshort.sa_data = htons(dword_841F34); /*0x7b3c4b*/
      *(unsigned int *)&netshort.sa_data[2] = htonl(0x7F000001u); /*0x7b3c55*/
    }
  }
  else
  {
    v14 = *((unsigned short *)v13 + 13); /*0x7b3c5b*/
    if ( !v14 ) /*0x7b3c62*/
      v14 = hostshort; /*0x7b3c64*/
    *(unsigned short *)netshort.sa_data = htons(v14); /*0x7b3c75*/
    if ( v13[1] == dword_A8DBB4 /*0x7b3c9a*/
      && (!Game_PlayerCount || GUID::Compare((char *)&dword_A8DBB0, *(unsigned int *)Game_PlayerInfoArray + 40)) )
    {
      *(unsigned int *)&netshort.sa_data[2] = htonl(0x7F000001u); /*0x7b3cb4*/
      *(unsigned short *)netshort.sa_data = htons(dword_841F3C); /*0x7b3cbe*/
    }
  }
  v41 = *(unsigned int *)&netshort.sa_data[2]; /*0x7b3ccc*/
  v15 = ntohs(*(u_short *)netshort.sa_data); /*0x7b3cd0*/
    v16 = *((unsigned int *)this + 64858);
  v17 = 0; /*0x7b3cdb*/
  v15 = v15; /*0x7b3cdf*/
  if ( v16 <= 0 ) /*0x7b3ce3*/
  {
  LABEL_43:
    ntohs(*(u_short *)netshort.sa_data); /*0x7b3d18*/
    Debug::Log(); /*0x7b3d54*/
    if ( sendto(sa, (const char *)v13 + 28, v13[4] + 4, 0, &netshort, 16) == -1 && WSAGetLastError() != 10035 ) /*0x7b3d89*/
    {
      WSAGetLastError(); /*0x7b3d8b*/
      Debug::Log(); /*0x7b3d96*/
      /*0x7b3d96*/
      (*(void (**)(char *, SOCKET))(*(unsigned int *)this + 36))(this, sa);
      return 0; /*0x7b3db0*/
    }
  }
  else
  {
        v18 = (char *)this + 1037744;
        v19 = (char *)this + 1038000;
    while ( v15 != *v19 || v41 != *v18 ) /*0x7b3d03*/
    {
      v13 = (unsigned int *)v45; /*0x7b3d09*/
      ++v17; /*0x7b3d0d*/
      ++v19; /*0x7b3d0e*/
      ++v18; /*0x7b3d11*/
      if ( v17 >= v16 ) /*0x7b3d16*/
        goto LABEL_43; /*0x7b3d16*/
    }
    ntohs(*(u_short *)netshort.sa_data); /*0x7b3db8*/
    Debug::Log(); /*0x7b3def*/
    v13 = (unsigned int *)v45; /*0x7b3df4*/
  }
  if ( !v39 ) /*0x7b3e01*/
  {
        v23 = *((unsigned int *)this + 12);
    if ( v23 > 0 ) /*0x7b3e64*/
    {
      v24 = v23 - 1; /*0x7b3e66*/
      v25 = 0; /*0x7b3e67*/
            for ( *((unsigned int *)this + 12) = v24;
            v25 < this->q00C;
            *(unsigned int *)(this->q024 + 4 * v25 - 4) = *(unsigned int *)(this->q024 + 4 * v25) )
      {
        ++v25; /*0x7b3e73*/
      }
    }
    if ( *((unsigned char *)v13 + 22) ) /*0x7b3e82*/
    {
      RA2_OPDEL(v13); /*0x7b3e8a*/
      return 0; /*0x7b3e9b*/
    }
    goto LABEL_60; /*0x7b3e87*/
  }
    v20 = *((unsigned int *)this + 18);
  if ( v20 > 0 ) /*0x7b3e08*/
  {
    v21 = v20 - 1; /*0x7b3e0a*/
    v22 = 0; /*0x7b3e0b*/
        for ( *((unsigned int *)this + 18) = v21;
          v22 < this->u32_48;
          *(unsigned int *)(this->q03C + 4 * v22 - 4) = *(unsigned int *)(this->q03C + 4 * v22) )
    {
      ++v22; /*0x7b3e17*/
    }
  }
  if ( *((unsigned char *)v13 + 22) ) /*0x7b3e26*/
  {
    RA2_OPDEL(v13); /*0x7b3e2e*/
  }
  else
  {
    *((unsigned char *)v13 + 21) = 0; /*0x7b3e42*/
        --*((unsigned int *)this + 64537);
  }
  return 0; /*0x7b3b27*/
}
} // namespace gamemd
// 0x7B4150
namespace gamemd {
int UDPInterfaceClass::Connect(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 259412) + 4 * a2);
}
} // namespace gamemd
// 0x7B4160
namespace gamemd {
int UDPInterfaceClass::Receive()
{
    return *((unsigned int *)this + 517624);
}
} // namespace gamemd
// 0x7B4170
namespace gamemd {
CampaignClass * * UDPInterfaceClass::Destructor(char a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  void *v9; // eax
  void *v10; // eax

  this->Socket = (int)&UDPInterfaceClass_vftable; /*0x7b4176*/
    while ( *(Block + 64722) )
  {
    RA2_OPDEL(**((void ***)this + 64719)); /*0x7b418f*/
        v3 = (int)*(Block + 64722);
    if ( v3 > 0 ) /*0x7b419f*/
    {
      v4 = v3 - 1; /*0x7b41a1*/
      v5 = 0; /*0x7b41a4*/
            for ( *(Block + 64722) = v4; v5 < (int)*(Block + 64722); (*(Block + 64719))[v5 - 1] = (*(Block + 64719))[v5] )
            v5 < this->u32_3F348;
            *(unsigned int *)(this->u32_3F33C + 4 * v5 - 4) = *(unsigned int *)(this->u32_3F33C + 4 * v5) )
      {
        ++v5; /*0x7b41b6*/
      }
    }
  }
    while ( *(Block + 64856) )
  {
    RA2_OPDEL(**((void ***)this + 64853)); /*0x7b41e1*/
        v6 = (int)*(Block + 64856);
    if ( v6 > 0 ) /*0x7b41f1*/
    {
      v7 = v6 - 1; /*0x7b41f3*/
      v8 = 0; /*0x7b41f6*/
            for ( *(Block + 64856) = v7; v8 < (int)*(Block + 64856); (*(Block + 64853))[v8 - 1] = (*(Block + 64853))[v8] )
            v8 < this->u32_3F560;
            *(unsigned int *)(this->u32_3F554 + 4 * v8 - 4) = *(unsigned int *)(this->u32_3F554 + 4 * v8) )
      {
        ++v8; /*0x7b4208*/
      }
    }
  }
  UDPInterfaceClass::connect(); /*0x7b4224*/
    v9 = *(Block + 64853);
    *(Block + 64852) = &vt_VectorClass_unsigned_char;
    if ( v9 && *((unsigned char *)Block + 259421) )
  {
    RA2_OPDEL(v9); /*0x7b4246*/
        *(Block + 64853) = 0;
  }
    *((unsigned char *)Block + 259421) = 0;
    *(Block + 64854) = 0;
    v10 = *(Block + 64719);
    *(Block + 64718) = &vt_VectorClass_unsigned_char;
    if ( v10 && *((unsigned char *)Block + 258885) )
  {
    RA2_OPDEL(v10); /*0x7b427d*/
        *(Block + 64719) = 0;
  }
    *((unsigned char *)Block + 258885) = 0;
    *(Block + 64720) = 0;
  WinsockInterfaceClass::WinsockInterfaceClass(); /*0x7b4299*/
  if ( (a2 & 1) != 0 ) /*0x7b42a3*/
    RA2_OPDEL(); /*0x7b42a6*/
  return (void ***)this; /*0x7b42b0*/
}
} // namespace gamemd
// 0x7B42C0
namespace gamemd {
void UDPInterfaceClass::disconnect()
{
  void *v2; // eax

  v2 = *(void **)&this->Initialized; /*0x7b42c6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x7b42d6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd
// 0x7B42F0
namespace gamemd {
unsigned int UDPInterfaceClass::reset(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x7b42f7*/
}
} // namespace gamemd
// 0x7B44A0
namespace gamemd {
AbstractClass * * UDPInterfaceClass::flush(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x7b44ac*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x7b44b8*/
      v4 = a3; /*0x7b44ce*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x7b44ca*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x7b44d6*/
      return 0; /*0x7b454a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x7b44e4*/
        m_8 = a2; /*0x7b44e6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x7b44f1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Initialized); /*0x7b4509*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x7b453e*/
}
} // namespace gamemd
// 0x7B4550
namespace gamemd {
int UDPInterfaceClass::sendPacket(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x7b4553*/
  if ( m_10 <= 0 ) /*0x7b4558*/
    return -1; /*0x7b456f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x7b456d*/
      return -1; /*0x7b456d*/
  }
  return result; /*0x7b4572*/
}
} // namespace gamemd
// 0x7B3450
namespace gamemd {
AbstractClass * * UDPInterfaceClass_Destru::Bind(int a2)
{
  char result; // al
  struct hostent *v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  char *i; // eax
  unsigned int *v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  SOCKET v14; // eax
  SOCKET v15; // [esp-10h] [ebp-B8h]
  char **h_addr_list; // [esp+Ch] [ebp-9Ch]
  char optval[4]; // [esp+10h] [ebp-98h] BYREF
  int v18; // [esp+14h] [ebp-94h]
  struct sockaddr v19; // [esp+18h] [ebp-90h] BYREF
  char name[128]; // [esp+28h] [ebp-80h] BYREF

    if ( *((unsigned char *)this + 258152) || (result = ((int (*)(void ***))(*this)[25])(this)) != 0 )
  {
    this->Send(hostshort); /*0x7b3483*/
    Debug::Log(); /*0x7b348b*/
    if ( gethostname(name, 128) ) /*0x7b349d*/
      Debug::Log(); /*0x7b34b0*/
    Debug::Log(); /*0x7b34bd*/
    v4 = gethostbyname(name); /*0x7b34cf*/
    if ( !v4 ) /*0x7b34d3*/
    {
      WSAGetLastError(); /*0x7b34d5*/
      Debug::Log(); /*0x7b34e0*/
    }
        while ( *((unsigned int *)this + 259424) )
    {
      RA2_OPDEL(*(void **)this->q3F554); /*0x7b34fb*/
            v5 = (int)*((unsigned int *)this + 259424);
      if ( v5 > 0 ) /*0x7b350b*/
      {
        v6 = v5 - 1; /*0x7b350d*/
        v7 = 0; /*0x7b3510*/
                for ( *((unsigned int *)this + 259424) = v6; v7 < (int)*((unsigned int *)this + 259424); (*((unsigned int *)this + 259412))[v7 - 1] = (*((unsigned int *)this + 259412))[v7] )
              v7 < this->q3F560;
              *(unsigned int *)(this->q3F554 + 4 * v7 - 4) = *(unsigned int *)(this->q3F554 + 4 * v7) )
        {
          ++v7; /*0x7b3522*/
        }
      }
    }
    h_addr_list = v4->h_addr_list; /*0x7b3541*/
    for ( i = *h_addr_list; *h_addr_list; i = *h_addr_list ) /*0x7b3545*/
    {
      v18 = *(unsigned int *)i; /*0x7b3565*/
      ++h_addr_list; /*0x7b3569*/
      Debug::Log(); /*0x7b3587*/
      v9 = operator new(4u); /*0x7b3593*/
      *v9 = v18; /*0x7b3598*/
            v10 = (int)*((unsigned int *)this + 259416);
            if ( (int)*((unsigned int *)this + 259424) >= v10 )
      {
                if ( !*((unsigned char *)this + 259421) && v10 )
          continue; /*0x7b35ac*/
                v11 = (int)*((unsigned int *)this + 259428);
        if ( v11 <= 0 /*0x7b35be*/
          || !(*(uint8_t (**)(unsigned int *, int, unsigned int))(this->qFD54 + 8))(
                &this->qFD54,
                v10 + v11,
                0) )
        {
          continue; /*0x7b35be*/
        }
      }
            v12 = (int)*((unsigned int *)this + 259424);
            v13 = (int)*((unsigned int *)this + 259412);
            *((unsigned int *)this + 259424) = (void **)(v12 + 1);
      *(unsigned int *)(v13 + 4 * v12) = v9; /*0x7b35d1*/
    }
    Debug::Log(); /*0x7b35e9*/
    v14 = socket(2, 2, 0); /*0x7b35f8*/
        *((unsigned int *)this + 258160) = (void **)v14;
    if ( v14 == -1 ) /*0x7b3606*/
    {
      return 0; /*0x7b3609*/
    }
    else
    {
      v19.sa_family = 2; /*0x7b361c*/
      *(unsigned short *)v19.sa_data = htons(dword_841F38); /*0x7b362a*/
      *(unsigned int *)&v19.sa_data[2] = htonl(0); /*0x7b3639*/
      Debug::Log(); /*0x7b363d*/
            if ( bind((SOCKET)*((unsigned int *)this + 258160), &v19, 16) == -1 )
      {
        this->AddRef(); /*0x7b3661*/
        return 0; /*0x7b3665*/
      }
      else
      {
                v15 = (SOCKET)*((unsigned int *)this + 258160);
        memset(optval, 0, sizeof(optval)); /*0x7b3689*/
        setsockopt(v15, 0xFFFF, 128, optval, 4); /*0x7b3693*/
                Socket::ConfigureBuffers((SOCKET *)this, (AnimClass *)*((unsigned int *)this + 258160));
        Debug::Log(); /*0x7b36ab*/
        return 1; /*0x7b36b3*/
      }
    }
  }
  return result; /*0x7b346d*/
}
} // namespace gamemd
// 0x7B36C0
namespace gamemd {
short UDPInterfaceClass_Destru::ddtor(WinsockInterfaceClass * aP1, unsigned int arg4, unsigned char * a3, unsigned int a5, WinsockInterfaceClass * aP5, char a7, short a8)
{
  if ( a3 && Network::IsBroadcastAddr((Network *)a3) ) /*0x7b36ce*/
        return (*(__int16 (**)(void *, WinsockInterfaceClass *, unsigned int, WinsockInterfaceClass *))(*(unsigned int *)this + 16))(
             this,
             aP1,
             arg4,
             aP5);
  else
// 0x7b23b0
    return AudioQueue::WriteBuffer(aP1, arg4, a3, a5, aP5, a7, a8); /*0x7b3713*/
}
} // namespace gamemd
// 0x7B3720
namespace gamemd {
void UDPInterfaceClass_Destru_Connect()
{
  int v6; // ecx
  int v7; // ebx
  int result; // eax
  unsigned char *v9; // ebp
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  WPARAM v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  UINT v20; // eax
  WPARAM v21; // [esp-8h] [ebp-20h]
  unsigned short *v23; // [esp+10h] [ebp-8h]
  int v24; // [esp+14h] [ebp-4h]

  v7 = v6; /*0x7b3724*/
  v24 = 0; /*0x7b3726*/
  result = *(unsigned int *)(v6 + 258888); /*0x7b372e*/
  if ( result > 0 ) /*0x7b3736*/
  {
    v23 = (unsigned short *)(v6 + 258896); /*0x7b3745*/
    do /*0x7b3875*/
    {
      v9 = AudioQueue::AllocBuffer((AudioQueue *)v7, a4); /*0x7b3759*/
      qmemcpy(v9 + 32, this, (unsigned int)a3); /*0x7b376a*/
      *((unsigned int *)v9 + 4) = a3; /*0x7b3773*/
      v9[20] = 1; /*0x7b377a*/
      *(unsigned int *)v9 = 0; /*0x7b377e*/
      v10 = v24; /*0x7b3780*/
      *((unsigned int *)v9 + 1) = 0; /*0x7b3784*/
      *((unsigned int *)v9 + 2) = 0; /*0x7b3787*/
      *((unsigned int *)v9 + 3) = 0; /*0x7b378a*/
      *((unsigned int *)v9 + 1) = **(unsigned int **)(*(unsigned int *)(v7 + 258876) + 4 * v24); /*0x7b379c*/
      *((unsigned short *)v9 + 13) = *v23; /*0x7b37a2*/
      (*(void (**)(int, unsigned char *, int))(*(unsigned int *)v7 + 84))(v7, v9, a2); /*0x7b37aa*/
      if ( a5 ) /*0x7b37b3*/
      {
        v11 = *(unsigned int *)(v7 + 64); /*0x7b37b5*/
        if ( *(unsigned int *)(v7 + 72) < v11 /*0x7b37dd*/
          || (*(unsigned char *)(v7 + 69) || !v11)
          && (v12 = *(unsigned int *)(v7 + 76), v12 > 0)
          && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v7 + 56) + 8))(v7 + 56, v11 + v12, 0) )
        {
          v13 = *(unsigned int *)(v7 + 72); /*0x7b37e4*/
          v14 = *(unsigned int *)(v7 + 60); /*0x7b37e7*/
          *(unsigned int *)(v7 + 72) = v13 + 1; /*0x7b37ed*/
          *(unsigned int *)(v14 + 4 * v13) = v9; /*0x7b37f0*/
        }
        v15 = *(unsigned int *)(v7 + 258160); /*0x7b37f3*/
      }
      else
      {
        v16 = *(unsigned int *)(v7 + 40); /*0x7b37fb*/
        if ( *(unsigned int *)(v7 + 48) < v16 /*0x7b3823*/
          || (*(unsigned char *)(v7 + 45) || !v16)
          && (v17 = *(unsigned int *)(v7 + 52), v17 > 0)
          && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v7 + 32) + 8))(v7 + 32, v16 + v17, 0) )
        {
          v18 = *(unsigned int *)(v7 + 48); /*0x7b382a*/
          v19 = *(unsigned int *)(v7 + 36); /*0x7b382d*/
          *(unsigned int *)(v7 + 48) = v18 + 1; /*0x7b3833*/
          *(unsigned int *)(v19 + 4 * v18) = v9; /*0x7b3836*/
        }
        v15 = *(unsigned int *)(v7 + 258156); /*0x7b3839*/
      }
      a2 = 2; /*0x7b3841*/
      v21 = v15; /*0x7b3845*/
      v20 = (*(int (**)(int))(*(unsigned int *)v7 + 56))(v7); /*0x7b3848*/
      SendMessageA(g_hWnd, v20, v21, 0); /*0x7b3852*/
      MessageLoop(); /*0x7b3858*/
      result = *(unsigned int *)(v7 + 258888); /*0x7b3861*/
      ++v24; /*0x7b386d*/
      ++v23; /*0x7b3871*/
    }
    while ( v10 + 1 < result ); /*0x7b3875*/
  }
  return result; /*0x7b387e*/
}
}
// 0x7B3890
int UDPInterfaceClass_Destru::Receive()
{
  signed int v2; // ebx
  SOCKET *v3; // edi
  u_int v4; // eax

    if ( IPXInterfaceClass::Receive(this) && (v2 = 0, (int)*((unsigned int *)this + 258864) > 0) )
  {
    v3 = &this->u32_3F300; /*0x7b38aa*/
    while ( 1 ) /*0x7b38b8*/
    {
      v4 = this->GetStatistics(-1); /*0x7b38b8*/
      if ( WSAAsyncSelect(*v3, g_hWnd, v4, 3) == -1 ) /*0x7b38ce*/
        break; /*0x7b38ce*/
      ++v2; /*0x7b38d6*/
      ++v3; /*0x7b38d7*/
            if ( v2 >= (int)*((unsigned int *)this + 258864) )
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
// 0x7B3900
int UDPInterfaceClass_Destru::CheckStatus()
{
  NetworkClass::UnregisterAsync((WinsockInterfaceClass *)this); /*0x7b3903*/
    return (*(int (**)(SOCKET *))(*(char *)this + 448))(this);
}
// 0x7B3920
void UDPInterfaceClass_Destru::Reset(unsigned int * a2, short a3)
{
  int v4; // edi
  int16_t v5; // bp
  int v6; // eax
  unsigned int *v7; // edx
  unsigned short *v8; // ecx

    v4 = *((unsigned int *)this + 259432);
  if ( v4 < 16 ) /*0x7b392f*/
  {
    v5 = a3; /*0x7b3939*/
    v6 = 0; /*0x7b393d*/
    if ( v4 > 0 ) /*0x7b3941*/
    {
            v7 = (char *)this + 259436;
            v8 = (char *)this + 259500;
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
        *(this + *((unsigned int *)this + 259432) + 64859) = *a2;
        *((unsigned short *)this + (*((unsigned int *)this + 259432))++ + 129750) = v5;
  }
}
// 0x7B4100
int UDPInterfaceClass_Destru::GetStatistics(int a2)
{
  if ( a2 == this->u32_3F06C || a2 == -1 )
    return 1140; /*0x7b412e*/
  else
    return a2 != this->u32_3F070 ? 0 : 0x475;
}
// 0x7B4140
int UDPInterfaceClass_Destru::COMStub()
{
    return *((unsigned int *)this + 259424);
}
// 0x7B40F0
int UDPInterfaceClass_Destru::COMStub_Ret2()
{
  return 2; /*0x7b40f5*/
}
// 0x7B45D0
DynamicVector * UDPInterfaceClass::receivePacket(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_unsigned_char;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x7b45e8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x7b4608*/
    RA2_OPDEL(); /*0x7b460b*/
  return this; /*0x7b4615*/
}