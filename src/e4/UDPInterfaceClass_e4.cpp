// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_VECTOR_TREE_TRUTH 1  // G57a2: G42.55 tree-truth bridge pulls core/vector.hpp templates
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Random_e4.hpp"
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
#include "e4/classes/WinsockInterfaceClass_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/IPXInterfaceClass_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int gethostbyname(const char* p0);  // x4:signals@0x7c8980
    int gethostname(char* p0, int p1);  // x4:signals@0x7c89ce
} // namespace gamemd

// 0x7B1B50
namespace gamemd {  // G42.18 ns repair
int UDPInterfaceClass::connect(void *a1)
{
  char result; // al

  result = *((unsigned char *)a1 + 258152); /*0x7b1b53*/
  if ( result ) /*0x7b1b5b*/
  {
    a1->CheckStatus(); /*0x7b1b5f*/
    a1->AddRef(); /*0x7b1b66*/
    result = WSACleanup(); /*0x7b1b69*/
    *((unsigned char *)a1 + 258152) = 0; /*0x7b1b6e*/
  }
  return result; /*0x7b1b75*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x7B3310
namespace gamemd {
void UDPInterfaceClass::CheckStatus(short a2)
{
  int v3; // ecx
  int v4; // edi
  UDPInterfaceClass *i; // eax
  SOCKET *v6; // ebx
  unsigned short *v8; // ecx
  unsigned int *v9; // eax

  if ( a2 ) /*0x7b331c*/
  {
    v3 = this->u32_3F330; /*0x7b3322*/
    v4 = 0; /*0x7b3328*/
    if ( v3 > 0 ) /*0x7b332c*/
    {
      for ( i = this->__pad_644 + 30752); (i->u32_3F320) != a2; i = (UDPInterfaceClass *)((char *)i + 2) ) /*0x7b3332*/
      {
        if ( ++v4 >= v3 ) /*0x7b3343*/
          return; /*0x7b3343*/
      }
      v6 = (SOCKET *)this + v4 + 64704; /*0x7b3352*/
      Debug::Log(); /*0x7b335f*/
      closesocket(*v6); /*0x7b336a*/
      if ( *v6 == this->u32_3F334 ) /*0x7b3379*/
        this->u32_3F334 = -1; /*0x7b337b*/
      v4 = v4; /*0x7b338b*/
      if ( v4 < this->u32_3F330 - 1 ) /*0x7b3390*/
      {
        v8 = (unsigned short *)this + v4 + 129424; /*0x7b3392*/
        v9 = (unsigned int *)this + v4 + 64704; /*0x7b3399*/
        do /*0x7b33b7*/
        {
          ++v4; /*0x7b339e*/
          *v9 = v9->vtable2; /*0x7b339f*/
          *v8 = v8[1]; /*0x7b33a5*/
          ++v9; /*0x7b33ae*/
          ++v8; /*0x7b33b1*/
        }
        while ( v4 < this->u32_3F330 - 1 ); /*0x7b33b7*/
      }
      --this->u32_3F330; /*0x7b33c1*/
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

  if ( !a2 || a2 == *(unsigned int *)&hostshort || (v2 = this->u32_3F330, v3 = 0, v2 <= 0) ) /*0x7b33f6*/
  {
  LABEL_7:
    this->u32_3F334 = -1; /*0x7b340b*/
  }
  else
  {
    v4 = this->__pad_644 + 30752); /*0x7b33f8*/
    while ( (v4->u32_3F330) != a2 ) /*0x7b3401*/
    {
      ++v3; /*0x7b3403*/
      v4 = (UDPInterfaceClass *)((char *)v4 + 2); /*0x7b3404*/
      if ( v3 >= v2 ) /*0x7b3409*/
        goto LABEL_7; /*0x7b3409*/
    }
    this->u32_3F334 = *((unsigned int *)this + v3 + 64704); /*0x7b3422*/
  }
}
} // namespace gamemd
// 0x7B3A20
namespace gamemd {
AbstractClass * * UDPInterfaceClass::Flush(void *a1)
{
  int v1; // esi
  int v3; // ebx
  int result; // eax
  AnimClass **v5; // esi

  v3 = 0; /*0x7b3a24*/
  result = this->u32_3F330; /*0x7b3a26*/
  if ( result <= 0 ) /*0x7b3a2e*/
  {
    this->u32_3F330 = 0; /*0x7b3a88*/
    this->u32_3F334 = -1; /*0x7b3a92*/
  }
  else
  {
    v1 = v1; /*0x7b3a30*/
    v5 = (AnimClass **)this->u32_3F330 + 2); /*0x7b3a31*/
    do /*0x7b3a6e*/
    {
      Debug::Log(); /*0x7b3a3f*/
      WSAAsyncSelect(*v5, (SOCKET)g_hWnd, 0, 0, v1); /*0x7b3a55*/
      closesocket((SOCKET)*v5); /*0x7b3a5d*/
      result = this->u32_3F330; /*0x7b3a62*/
      ++v3; /*0x7b3a68*/
      ++v5; /*0x7b3a69*/
    }
    while ( v3 < result ); /*0x7b3a6e*/
    this->u32_3F330 = 0; /*0x7b3a70*/
    this->u32_3F334 = -1; /*0x7b3a7a*/
  }
  return result; /*0x7b3a85*/
}
} // namespace gamemd
// 0x7B3AA0
namespace gamemd {
AbstractClass * * UDPInterfaceClass::ProcessSocketIO(int a2, void * s, int a4, unsigned int a5, int a3, int aP1, int aP5, int a7, int a8)
{

  SOCKET v6; // ebx
  int v7; // edx
  int v8; // eax
  UDPInterfaceClass *v9; // ecx
  int v11; // edi
  UDPInterfaceClass *v12; // esi
  unsigned char *v13; // ebx
  u_short v14; // ax
  __int16 v15; // ax
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
  int v27; // esi
  int v28; // ecx
  int v29; // eax
  unsigned int **v30; // edx
  int v31; // edi
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  UDPInterfaceClass *v35; // ebp
  int v36; // eax
  int Socket; // eax
  int v38; // edx
  char v39; // [esp+13h] [ebp-1Dh]
  int fromlen; // [esp+14h] [ebp-1Ch] BYREF
  int v41; // [esp+18h] [ebp-18h]
  struct sockaddr netshort; // [esp+20h] [ebp-10h] BYREF
  SOCKET sa; // [esp+38h] [ebp+8h]
  __int16 v44; // [esp+3Ch] [ebp+Ch]
  unsigned int v45; // [esp+40h] [ebp+10h]

  v39 = 0; /*0x7b3ab2*/
  if ( a3 == 1140 ) /*0x7b3ab7*/
  {
    v6 = *((unsigned int *)a3 + 64539); /*0x7b3ab9*/
    sa = v6; /*0x7b3ac5*/
    if ( a3 != v6 ) /*0x7b3ac9*/
    {
      v7 = *((unsigned int *)a3 + 64716); /*0x7b3acb*/
      v8 = 0; /*0x7b3ad1*/
      if ( v7 > 0 ) /*0x7b3ad5*/
      {
        v9 = (gamemd::UDPInterfaceClass *)(a3 + 32352); /*0x7b3ad7*/
        while ( v9->Socket != a3 ) /*0x7b3adf*/
        {
          ++v8; /*0x7b3ae1*/
          v9 = (gamemd::UDPInterfaceClass *)(&v9->Initialized); /*0x7b3ae2*/
          if ( v8 >= v7 ) /*0x7b3ae7*/
            goto LABEL_11; /*0x7b3ae7*/
        }
        v6 = *((unsigned int *)a3 + v8 + 64704); /*0x7b3aeb*/
        sa = v6; /*0x7b3af2*/
      }
    }
  }
  else
  {
    if ( a3 != 1141 ) /*0x7b3afd*/
      return (gamemd::AbstractClass **)(1); /*0x7b40dd*/
    v6 = *((unsigned int *)a3 + 64540); /*0x7b3b03*/
    v39 = 1; /*0x7b3b09*/
    sa = v6; /*0x7b3b0e*/
  }
LABEL_11:
  if ( (unsigned __int16)a3 == 1 ) /*0x7b3b1e*/
  {
    if ( HIWORD(a3) ) /*0x7b3ebb*/
    {
LABEL_22:
      Debug::Log(); /*0x7b3b8b*/
      (*(void (**)(UDPInterfaceClass *, SOCKET))(a3->Socket + 36))(a3, v6); /*0x7b3b99*/
      return 0; /*0x7b3ba5*/
    }
    fromlen = 16; /*0x7b3ee4*/
    v26 = recvfrom(v6, (char *)a3 + 258164, 640, 0, &netshort, &fromlen); /*0x7b3eec*/
    v27 = v26; /*0x7b3ef1*/
    if ( v26 == -1 ) /*0x7b3ef6*/
    {
      (*(void (**)(UDPInterfaceClass *, SOCKET))(a3->Socket + 36))(a3, v6); /*0x7b3efe*/
      return 0; /*0x7b3f0a*/
    }
    if ( v26 ) /*0x7b3f0f*/
    {
      if ( !v39 && !byte_A8DBA0 ) /*0x7b3f24*/
      {
        v28 = *((unsigned int *)a3 + 64856); /*0x7b3f26*/
        v29 = 0; /*0x7b3f2c*/
        if ( v28 > 0 ) /*0x7b3f30*/
        {
          v30 = (unsigned int **)*((unsigned int *)a3 + 64853); /*0x7b3f32*/
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
      if ( v31 > 0 && Random::Range(&Randomizer_Global, 0, 99) <= v31 ) /*0x7b3f6b*/
        return 0; /*0x7b3f76*/
      v13 = IPXInterfaceClass::processPacket((IPXInterfaceClass *)a3); /*0x7b3f80*/
      v13->uniqueId = v27 - 4; /*0x7b3f8f*/
      v13->referenceCount = *((unsigned int *)a3 + 64541); /*0x7b3f98*/
      v13->q017 = v39; /*0x7b3fa0*/
      v13->nextArrayIndex = 0; /*0x7b3fa6*/
      memcpy(v13 + 32, a3 + 32271, v27 - 4); /*0x7b3fab*/
      if ( !(*(unsigned __int8 (**)(UDPInterfaceClass *, unsigned char *))(a3->Socket + 88))(a3, v13) ) /*0x7b3fb9*/
      {
        v13->vtable2 = *(unsigned int *)&netshort.sa_data[2]; /*0x7b3fc4*/
        ntohs(*(u_short *)netshort.sa_data); /*0x7b3fd4*/
        Debug::Log(); /*0x7b4000*/
        if ( !byte_B78124 ) /*0x7b400f*/
          byte_B78124 = 1; /*0x7b4011*/
        if ( v13->q016 ) /*0x7b4018*/
        {
          __3_YAXPAX_Z(v13); /*0x7b4024*/
          return 0; /*0x7b4035*/
        }
LABEL_60:
        v13->u8_15 = 0; /*0x7b3e9e*/
        --*((unsigned int *)a3 + 64536); /*0x7b3eaa*/
        return 0; /*0x7b3eb8*/
      }
      *(unsigned int *)v13 = 0; /*0x7b4041*/
      v13->vtable2 = 0; /*0x7b4043*/
      v13->vtable3 = 0; /*0x7b4046*/
      v13->vtable4 = 0; /*0x7b4049*/
      v32 = htonl(0x7F000001u); /*0x7b404c*/
      if ( *(unsigned int *)&netshort.sa_data[2] == v32 ) /*0x7b4055*/
      {
        v13->u8_1A = 0; /*0x7b4057*/
        *(NetworkID *)v13 = qword_A8DBB0; /*0x7b4065*/
        v13->vtable3 = dword_A8DBB8; /*0x7b4075*/
      }
      else
      {
        v13->u8_1A = ntohs(*(u_short *)netshort.sa_data); /*0x7b4084*/
        v13->vtable2 = *(unsigned int *)&netshort.sa_data[2]; /*0x7b408c*/
      }
      v33 = *((unsigned int *)a3 + 4); /*0x7b408f*/
      v34 = *((unsigned int *)a3 + 6); /*0x7b4092*/
      v35 = (gamemd::UDPInterfaceClass *)(a3 + 1); /*0x7b4095*/
      if ( v34 < v33 /*0x7b40b8*/
        || (v35[1].__pad_5[0] || !v33)
        && (v36 = *(unsigned int *)&v35[2].Initialized, v36 > 0)
        && (*(unsigned __int8 (**)(UDPInterfaceClass *, int, unsigned int))(v35->Socket + 8))(v35, v33 + v36, 0) )
      {
        Socket = v35[2].Socket; /*0x7b40bf*/
        v38 = *(unsigned int *)&v35->Initialized; /*0x7b40c2*/
        v35[2].Socket = Socket + 1; /*0x7b40c8*/
        *(unsigned int *)(v38 + 4 * Socket) = (unsigned int)(v13); /*0x7b40cb*/
      }
    }
    return 0; /*0x7b40d7*/
  }
  if ( (unsigned __int16)a3 != 2 ) /*0x7b3b25*/
    return 0; /*0x7b3b30*/
  if ( *((unsigned int *)a3 + 64717) != -1 ) /*0x7b3b3a*/
  {
    v11 = 0; /*0x7b3b42*/
    if ( *((int *)a3 + 64716) > 0 ) /*0x7b3b46*/
    {
      v12 = (gamemd::UDPInterfaceClass *)(a3 + 32352); /*0x7b3b48*/
      do /*0x7b3b76*/
      {
        if ( v12->Socket == *((unsigned int *)a3 + 64717) ) /*0x7b3b58*/
        {
          v6 = *((unsigned int *)a3 + 64717); /*0x7b3b5a*/
          Debug::Log(); /*0x7b3b62*/
        }
        ++v11; /*0x7b3b70*/
        v12 = (gamemd::UDPInterfaceClass *)(&v12->Initialized); /*0x7b3b71*/
      }
      while ( v11 < *((unsigned int *)a3 + 64716) ); /*0x7b3b76*/
      sa = v6; /*0x7b3b78*/
    }
  }
  if ( HIWORD(a3) ) /*0x7b3b80*/
    goto LABEL_22; /*0x7b3b83*/
  if ( v39 ) /*0x7b3bae*/
  {
    if ( !*((unsigned int *)a3 + 18) ) /*0x7b3bb0*/
    {
LABEL_25:
      Debug::Log(); /*0x7b3bb7*/
      return 0; /*0x7b3bcd*/
    }
    v13 = (unsigned char *)**((unsigned int **)a3 + 15); /*0x7b3bd3*/
  }
  else
  {
    if ( !*((unsigned int *)a3 + 12) ) /*0x7b3bdc*/
      goto LABEL_25; /*0x7b3bdc*/
    v13 = (unsigned char *)**((unsigned int **)a3 + 9); /*0x7b3bfa*/
  }
  v45 = (unsigned int)v13; /*0x7b3bff*/
  *(unsigned int *)&netshort.sa_data[2] = v13->vtable2; /*0x7b3c03*/
  *(unsigned short *)netshort.sa_data = htons(v13->u8_1A); /*0x7b3c11*/
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
    v14 = v13->u8_1A; /*0x7b3c5b*/
    if ( !v14 ) /*0x7b3c62*/
      v14 = hostshort; /*0x7b3c64*/
    *(unsigned short *)netshort.sa_data = htons(v14); /*0x7b3c75*/
    if ( v13->vtable2 == qword_A8DBB0.NetworkID_field_0x04 /*0x7b3c9a*/
      && (!dword_A8DA84 || (unsigned __int8)GUID::Compare(qword_A8DBB0.__pad_0, *dword_A8DA78 + 40)) )
    {
      *(unsigned int *)&netshort.sa_data[2] = htonl(0x7F000001u); /*0x7b3cb4*/
      *(unsigned short *)netshort.sa_data = htons(dword_841F3C); /*0x7b3cbe*/
    }
  }
  v41 = *(unsigned int *)&netshort.sa_data[2]; /*0x7b3ccc*/
  v15 = ntohs(*(u_short *)netshort.sa_data); /*0x7b3cd0*/
  v16 = *((unsigned int *)a3 + 64858); /*0x7b3cd5*/
  v17 = 0; /*0x7b3cdb*/
  v44 = v15; /*0x7b3cdf*/
  if ( v16 <= 0 ) /*0x7b3ce3*/
  {
LABEL_43:
    ntohs(*(u_short *)netshort.sa_data); /*0x7b3d18*/
    Debug::Log(); /*0x7b3d54*/
    if ( sendto(sa, v13 + 28, v13->uniqueId + 4, 0, &netshort, 16) == -1 && WSAGetLastError() != 10035 ) /*0x7b3d89*/
    {
      WSAGetLastError(); /*0x7b3d8b*/
      Debug::Log(); /*0x7b3d96*/
      (*(void (**)(UDPInterfaceClass *, SOCKET))(a3->Socket + 36))(a3, sa); /*0x7b3da4*/
      return 0; /*0x7b3db0*/
    }
  }
  else
  {
    v18 = (unsigned int *)a3 + 64859; /*0x7b3ce5*/
    v19 = (unsigned short *)a3 + 129750; /*0x7b3ceb*/
    while ( v44 != *v19 || v41 != *v18 ) /*0x7b3d03*/
    {
      v13 = (unsigned char *)v45; /*0x7b3d09*/
      ++v17; /*0x7b3d0d*/
      ++v19; /*0x7b3d0e*/
      ++v18; /*0x7b3d11*/
      if ( v17 >= v16 ) /*0x7b3d16*/
        goto LABEL_43; /*0x7b3d16*/
    }
    ntohs(*(u_short *)netshort.sa_data); /*0x7b3db8*/
    Debug::Log(); /*0x7b3def*/
    v13 = (unsigned char *)v45; /*0x7b3df4*/
  }
  if ( !v39 ) /*0x7b3e01*/
  {
    v23 = *((unsigned int *)a3 + 12); /*0x7b3e5f*/
    if ( v23 > 0 ) /*0x7b3e64*/
    {
      v24 = v23 - 1; /*0x7b3e66*/
      v25 = 0; /*0x7b3e67*/
      for ( *((unsigned int *)a3 + 12) = v24; /*0x7b3e6e*/
            v25 < *((unsigned int *)a3 + 12);
            *(unsigned int *)(*((unsigned int *)a3 + 9) + 4 * v25 - 4) = *(unsigned int *)(*((unsigned int *)a3 + 9) + 4 * v25) )
      {
        ++v25; /*0x7b3e73*/
      }
    }
    if ( v13->q016 ) /*0x7b3e82*/
    {
      __3_YAXPAX_Z(v13); /*0x7b3e8a*/
      return 0; /*0x7b3e9b*/
    }
    goto LABEL_60; /*0x7b3e87*/
  }
  v20 = *((unsigned int *)a3 + 18); /*0x7b3e03*/
  if ( v20 > 0 ) /*0x7b3e08*/
  {
    v21 = v20 - 1; /*0x7b3e0a*/
    v22 = 0; /*0x7b3e0b*/
    for ( *((unsigned int *)a3 + 18) = v21; /*0x7b3e12*/
          v22 < *((unsigned int *)a3 + 18);
          *(unsigned int *)(*((unsigned int *)a3 + 15) + 4 * v22 - 4) = *(unsigned int *)(*((unsigned int *)a3 + 15) + 4 * v22) )
    {
      ++v22; /*0x7b3e17*/
    }
  }
  if ( v13->q016 ) /*0x7b3e26*/
  {
    __3_YAXPAX_Z(v13); /*0x7b3e2e*/
  }
  else
  {
    v13->u8_15 = 0; /*0x7b3e42*/
    --*((unsigned int *)a3 + 64537); /*0x7b3e4e*/
  }
  return 0; /*0x7b3b27*/

}
} // namespace gamemd
// 0x7B4150
namespace gamemd {
int UDPInterfaceClass::Connect(int a2)
{
  return *(unsigned int *)(this->u32_3F554 + 4 * a2); /*0x7b415d*/
}
} // namespace gamemd
// 0x7B4160
namespace gamemd {
int UDPInterfaceClass::Receive()
{
  return this->u32_3F2FC; /*0x7b4167*/
}
} // namespace gamemd
// 0x7B4170
namespace gamemd {
CampaignClass * * UDPInterfaceClass::Destructor(char a2, int a3, int aP1, int a5, int aP5, int a7, int a8, int a4)
{

  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  void *v9; // eax
  void *v10; // eax

  a3->Socket = (int)&vt_UDPInterfaceClass; /*0x7b4176*/
  while ( *((unsigned int *)a3 + 64722) ) /*0x7b417c*/
  {
    __3_YAXPAX_Z(**((void ***)a3 + 64719)); /*0x7b418f*/
    v3 = *((unsigned int *)a3 + 64722); /*0x7b4194*/
    if ( v3 > 0 ) /*0x7b419f*/
    {
      v4 = v3 - 1; /*0x7b41a1*/
      v5 = 0; /*0x7b41a4*/
      for ( *((unsigned int *)a3 + 64722) = v4; /*0x7b41ae*/
            v5 < *((unsigned int *)a3 + 64722);
            *(unsigned int *)(*((unsigned int *)a3 + 64719) + 4 * v5 - 4) = *(unsigned int *)(*((unsigned int *)a3 + 64719) + 4 * v5) )
      {
        ++v5; /*0x7b41b6*/
      }
    }
  }
  while ( *((unsigned int *)a3 + 64856) ) /*0x7b41d0*/
  {
    __3_YAXPAX_Z(**((void ***)a3 + 64853)); /*0x7b41e1*/
    v6 = *((unsigned int *)a3 + 64856); /*0x7b41e6*/
    if ( v6 > 0 ) /*0x7b41f1*/
    {
      v7 = v6 - 1; /*0x7b41f3*/
      v8 = 0; /*0x7b41f6*/
      for ( *((unsigned int *)a3 + 64856) = v7; /*0x7b4200*/
            v8 < *((unsigned int *)a3 + 64856);
            *(unsigned int *)(*((unsigned int *)a3 + 64853) + 4 * v8 - 4) = *(unsigned int *)(*((unsigned int *)a3 + 64853) + 4 * v8) )
      {
        ++v8; /*0x7b4208*/
      }
    }
  }
  UDPInterfaceClass::connect(a3); /*0x7b4224*/
  v9 = (void *)*((unsigned int *)a3 + 64853); /*0x7b4229*/
  *((unsigned int *)a3 + 64852) = (unsigned int)(&vt_VectorClass); /*0x7b422f*/
  if ( v9 && *((unsigned char *)a3 + 259421) ) /*0x7b423d*/
  {
    __3_YAXPAX_Z(v9); /*0x7b4246*/
    *((unsigned int *)a3 + 64853) = 0; /*0x7b424e*/
  }
  *((unsigned char *)a3 + 259421) = 0; /*0x7b4254*/
  *((unsigned int *)a3 + 64854) = 0; /*0x7b425a*/
  v10 = (void *)*((unsigned int *)a3 + 64719); /*0x7b4260*/
  *((unsigned int *)a3 + 64718) = (unsigned int)(&vt_VectorClass); /*0x7b4266*/
  if ( v10 && *((unsigned char *)a3 + 258885) ) /*0x7b4274*/
  {
    __3_YAXPAX_Z(v10); /*0x7b427d*/
    *((unsigned int *)a3 + 64719) = 0; /*0x7b4285*/
  }
  *((unsigned char *)a3 + 258885) = 0; /*0x7b428d*/
  *((unsigned int *)a3 + 64720) = 0; /*0x7b4293*/
  WinsockInterfaceClass::WinsockInterfaceClass((int)a3); /*0x7b4299*/
  if ( (a3 & 1) != 0 ) /*0x7b42a3*/
    __3_YAXPAX_Z(a3); /*0x7b42a6*/
  return (gamemd::CampaignClass **)((void ***)a3); /*0x7b42b0*/

}
} // namespace gamemd
// 0x7B42C0
namespace gamemd {
void UDPInterfaceClass::disconnect()
{

  void *v2; // eax

  v2 = (void *)(*&this->Initialized); /*0x7b42c6*/
  this->q010 = 0; /*0x7b42c9*/
  if ( v2 && BYTE1(this->q00C) ) /*0x7b42d0*/
  {
    __3_YAXPAX_Z(v2); /*0x7b42d6*/
    *&this->Initialized = 0; /*0x7b42de*/
  }
  BYTE1(this->q00C) = 0; /*0x7b42e1*/
  this->__pad_008 = 0; /*0x7b42e4*/

}
} // namespace gamemd
// 0x7B42F0
namespace gamemd {
unsigned int UDPInterfaceClass::reset(int a2)
{

  if ( LOBYTE(this->q00C) ) /*0x7b42f0*/
    return (unsigned int)(a2 - *&this->Initialized) >> 2; /*0x7b4305*/
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
    LOBYTE(this->q00C) = 0; /*0x7b44b2*/
    if ( a3 ) /*0x7b44b8*/
      v4 = a3; /*0x7b44ce*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x7b44ca*/
    LOBYTE(this->q00C) = 1; /*0x7b44d2*/
    if ( !v4 ) /*0x7b44d6*/
      return 0; /*0x7b454a*/
    if ( *&this->Initialized ) /*0x7b44d8*/
    {
      m_8 = this->__pad_008; /*0x7b44df*/
      if ( a2 < m_8 ) /*0x7b44e4*/
        m_8 = a2; /*0x7b44e6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Initialized + 4 * i - 4) ) /*0x7b44ec*/
        ++i; /*0x7b44f1*/
      if ( BYTE1(this->q00C) ) /*0x7b44fe*/
      {
        __3_YAXPAX_Z(*&this->Initialized); /*0x7b4509*/
        *&this->Initialized = 0; /*0x7b4511*/
      }
    }
    *&this->Initialized = v4; /*0x7b451a*/
    this->__pad_008 = a2; /*0x7b4522*/
    BYTE1(this->q00C) = a3 == 0; /*0x7b4525*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAE *))(*(unsigned int *)this->vtable1 + 12))(this); /*0x7b452e*/
  }
  v7 = this->__pad_008; /*0x7b4531*/
  if ( v7 < this->q010 ) /*0x7b4539*/
    this->q010 = (void *)(v7); /*0x7b453b*/
  return (gamemd::AbstractClass **)(1); /*0x7b453e*/

}
} // namespace gamemd
// 0x7B4550
namespace gamemd {
int UDPInterfaceClass::sendPacket(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = (int)(this->q010); /*0x7b4550*/
  result = 0; /*0x7b4553*/
  if ( m_10 <= 0 ) /*0x7b4558*/
    return -1; /*0x7b456f*/
  for ( i = *&this->Initialized; *i != *a2; ++i ) /*0x7b455e*/
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
  int v14; // eax
  SOCKET v15; // [esp-10h] [ebp-B8h]
  char **h_addr_list; // [esp+Ch] [ebp-9Ch]
  char optval[4]; // [esp+10h] [ebp-98h] BYREF
  int v18; // [esp+14h] [ebp-94h]
  struct sockaddr v19; // [esp+18h] [ebp-90h] BYREF
  char name[128]; // [esp+28h] [ebp-80h] BYREF

  if ( this->u32_3F068 /*0x7b346b*/
    || (result = (*(int (**)(UDPInterfaceClass *))(this->Socket + 100))(this)) != 0 )
  {
    (*(void (**)(UDPInterfaceClass *, u_short))(this->Socket + 92))(this, hostshort); /*0x7b3483*/
    Debug::Log(); /*0x7b348b*/
    if ( gethostname(name, 128) ) /*0x7b349d*/
      Debug::Log(); /*0x7b34b0*/
    Debug::Log(); /*0x7b34bd*/
    v4 = (gamemd::UDPInterfaceClass_Destru::Bind::hostent *)(gethostbyname(name)); /*0x7b34cf*/
    if ( !v4 ) /*0x7b34d3*/
    {
      WSAGetLastError(); /*0x7b34d5*/
      Debug::Log(); /*0x7b34e0*/
    }
    while ( this->u32_3F560 ) /*0x7b34e8*/
    {
      __3_YAXPAX_Z(*this->u32_3F5543)); /*0x7b34fb*/
      v5 = this->u32_3F560; /*0x7b3500*/
      if ( v5 > 0 ) /*0x7b350b*/
      {
        v6 = v5 - 1; /*0x7b350d*/
        v7 = 0; /*0x7b3510*/
        for ( this->u32_3F560 = v6; /*0x7b351a*/
              v7 < this->u32_3F560;
              *(unsigned int *)(this->u32_3F554 + 4 * v7 - 4) = *(unsigned int *)(this->u32_3F554 + 4 * v7) )
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
      v9 = (unsigned int *)__2_YAPAXI_Z(4u); /*0x7b3593*/
      *v9 = v18; /*0x7b3598*/
      v10 = this->u32_3F558; /*0x7b359b*/
      if ( this->u32_3F560 >= v10 ) /*0x7b35a1*/
      {
        if ( !this->u32_3F55D && v10 ) /*0x7b35ac*/
          continue; /*0x7b35ac*/
        v11 = this->u32_3F564; /*0x7b35ae*/
        if ( v11 <= 0 /*0x7b35be*/
          || !(*(unsigned __int8 (**)(UDPInterfaceClass *, int, unsigned int))(this->u32_3F550 + 8))(
                &this->u32_1FAA8,
                v10 + v11,
                0) )
        {
          continue; /*0x7b35be*/
        }
      }
      v12 = this->u32_3F560; /*0x7b35c5*/
      v13 = this->u32_3F554; /*0x7b35c8*/
      this->u32_3F560 = v12 + 1; /*0x7b35ce*/
      *(unsigned int *)(v13 + 4 * v12) = (unsigned int)(v9); /*0x7b35d1*/
    }
    Debug::Log(); /*0x7b35e9*/
    v14 = socket(2, 2, 0); /*0x7b35f8*/
    this->u32_3F070 = v14; /*0x7b3600*/
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
      if ( bind(this->u32_3F070, &v19, 16) == -1 ) /*0x7b365b*/
      {
        (*(void (**)(UDPInterfaceClass *))(this->Socket + 4))(this); /*0x7b3661*/
        return 0; /*0x7b3665*/
      }
      else
      {
        v15 = this->u32_3F070; /*0x7b3688*/
        memset(optval, 0, sizeof(optval)); /*0x7b3689*/
        setsockopt(v15, 0xFFFF, 128, optval, 4); /*0x7b3693*/
        Socket::ConfigureBuffers((WinsockInterfaceClass *)this, this->u32_3F070); /*0x7b36a1*/
        Debug::Log(); /*0x7b36ab*/
        return (gamemd::AbstractClass **)(1); /*0x7b36b3*/
      }
    }
  }
  return (gamemd::AbstractClass **)(result); /*0x7b346d*/

}
} // namespace gamemd
// 0x7B36C0
namespace gamemd {
short UDPInterfaceClass_Destru::ddtor(WinsockInterfaceClass * aP1, unsigned int arg4, unsigned char * a3, unsigned int a5, WinsockInterfaceClass * aP5, char a7, short a8)
{

  if ( a3 && ((Network *)a3)->IsBroadcastAddr() ) /*0x7b36ce*/
    return (*(__int16 (**)(UDPInterfaceClass *, const void *, unsigned int, int))(this->Socket + 16))( /*0x7b36ea*/
             this,
             aP1,
             arg4,
             aP5);
  else
    return ((WinsockInterfaceClass *)this)->WriteBuffer(aP1, arg4, a3, a5, aP5, a7, a8); /*0x7b3713*/

}
} // namespace gamemd
// 0x7B3720
namespace gamemd {
int UDPInterfaceClass_Destru_Connect(int a2, const void * a3, unsigned int a4, char a5, char a6)
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
      v9 = ((AudioQueue *)v7)->AllocBuffer(a4); /*0x7b3759*/
      memcpy(v9 + 32, a2, (unsigned int)a3); /*0x7b376a*/
      *((unsigned int *)v9 + 4) = a3; /*0x7b3773*/
      v9[20] = 1; /*0x7b377a*/
      *(unsigned int *)v9 = 0; /*0x7b377e*/
      v10 = v24; /*0x7b3780*/
      *((unsigned int *)v9 + 1) = 0; /*0x7b3784*/
      *((unsigned int *)v9 + 2) = 0; /*0x7b3787*/
      *((unsigned int *)v9 + 3) = 0; /*0x7b378a*/
      *((unsigned int *)v9 + 1) = **(unsigned int **)(v7->u32_3F33C + 4 * v24); /*0x7b379c*/
      *((unsigned short *)v9 + 13) = *v23; /*0x7b37a2*/
      v7->SetAddress(v9, a2); /*0x7b37aa*/
      if ( a5 ) /*0x7b37b3*/
      {
        v11 = v7->q040; /*0x7b37b5*/
        if ( v7->u32_48 < v11 /*0x7b37dd*/
          || (v7->q045 || !v11)
          && (v12 = v7->q04C, v12 > 0)
          && v7->q038->ReadBuffer(v7 + 56, v11 + v12, 0) )
        {
          v13 = *&v7->u32_48; /*0x7b37e4*/
          v14 = *(unsigned int *)(v7 + 60); /*0x7b37e7*/
          *(unsigned int *)(v7 + 72) = v13 + 1; /*0x7b37ed*/
          *(unsigned int *)(v14 + 4 * v13) = v9; /*0x7b37f0*/
        }
        v15 = v7->u32_3F070; /*0x7b37f3*/
      }
      else
      {
        v16 = v7->q028; /*0x7b37fb*/
        if ( *&v7->u32_30 < v16 /*0x7b3823*/
          || (v7->q02D || !v16)
          && (v17 = v7->q034, v17 > 0)
          && v7->q020->ReadBuffer(v7 + 32, v16 + v17, 0) )
        {
          v18 = *&v7->u32_30; /*0x7b382a*/
          v19 = *&v7->u32_24; /*0x7b382d*/
          *&v7->u32_30 = v18 + 1; /*0x7b3833*/
          *(unsigned int *)(v19 + 4 * v18) = v9; /*0x7b3836*/
        }
        v15 = v7->u32_3F06C; /*0x7b3839*/
      }
      a2 = 2; /*0x7b3841*/
      v21 = v15; /*0x7b3845*/
      v20 = v7->GetStatistics(); /*0x7b3848*/
      SendMessageA(g_hWnd, v20, v21, 0); /*0x7b3852*/
      MessageLoop(); /*0x7b3858*/
      result = v7->u32_3F348; /*0x7b3861*/
      ++v24; /*0x7b386d*/
      ++v23; /*0x7b3871*/
    }
    while ( v10 + 1 < result ); /*0x7b3875*/
  }
  return result; /*0x7b387e*/
}
}
// 0x7B3890
namespace gamemd {  // G42.18c ns repair
int UDPInterfaceClass_Destru::Receive()
{

  int v2; // ebx
  AnimClass **v3; // edi
  HWND v4; // eax
  int result; // eax
  int v6; // [esp+0h] [ebp-Ch]

  if ( ((WinsockInterfaceClass *)this)->Receive() && (v2 = 0, this->u32_3F330 > 0) ) /*0x7b38a8*/
  {
    v3 = &this->u32_1F980; /*0x7b38aa*/
    while ( 1 ) /*0x7b38b8*/
    {
      v4 = (HWND)(*(int (**)(UDPInterfaceClass *, int))(this->Socket + 56))(this, -1); /*0x7b38b8*/
      if ( WSAAsyncSelect(*v3, (SOCKET)g_hWnd, v4, 3u, v6) == (AnimClass *)-1 ) /*0x7b38ce*/
        break; /*0x7b38ce*/
      ++v2; /*0x7b38d6*/
      ++v3; /*0x7b38d7*/
      if ( v2 >= this->u32_3F330 ) /*0x7b38dc*/
        goto LABEL_6; /*0x7b38dc*/
    }
    result = Debug::Log(); /*0x7b38ee*/
    LOBYTE(result) = 0; /*0x7b38f6*/
  }
  else
  {
LABEL_6:
    result = (int)MessageLoop(); /*0x7b38de*/
    LOBYTE(result) = 1; /*0x7b38e5*/
  }
  return result; /*0x7b38e3*/

}
}  // G42.18c ns repair
// 0x7B3900
namespace gamemd {  // G42.18c ns repair
int UDPInterfaceClass_Destru::CheckStatus()
{
  NetworkClass::UnregisterAsync(); /*0x7b3903*/
  return (); /*0x7b390f*/
}
}  // G42.18c ns repair
// 0x7B3920
namespace gamemd {  // G42.18c ns repair
void UDPInterfaceClass_Destru::Reset(unsigned int * a2, short a3)
{
  int v4; // edi
  int16_t v5; // bp
  int v6; // eax
  unsigned int *v7; // edx
  unsigned short *v8; // ecx

  v4 = this->u32_3F568; /*0x7b3926*/
  if ( v4 < 16 ) /*0x7b392f*/
  {
    v5 = a3; /*0x7b3939*/
    v6 = 0; /*0x7b393d*/
    if ( v4 > 0 ) /*0x7b3941*/
    {
      v7 = (unsigned int *)this->u32_3F560 + 12); /*0x7b3943*/
      v8 = (unsigned short *)this->__pad_3F580 + 44); /*0x7b3949*/
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
    *((unsigned int *)this + this->u32_3F568 + 64859) = *a2; /*0x7b399d*/
    *((unsigned short *)this + (this->u32_3F568)++ + 129750) = v5; /*0x7b39aa*/
  }
}
}  // G42.18c ns repair
// 0x7B4100
namespace gamemd {  // G42.18c ns repair
int UDPInterfaceClass_Destru::GetStatistics(int a2)
{
  if ( a2 == this->u32_3F06C || a2 == -1 )
    return 1140; /*0x7b412e*/
  else
    return a2 != this->u32_3F070 ? 0 : 0x475;
}
}  // G42.18c ns repair
// 0x7B4140
namespace gamemd {  // G42.18c ns repair
int UDPInterfaceClass_Destru::COMStub()
{
  return this->u32_3F560; /*0x7b4146*/
}
}  // G42.18c ns repair
// 0x7B40F0
namespace gamemd {  // G42.18c ns repair
int UDPInterfaceClass_Destru::COMStub_Ret2()
{
  return 2; /*0x7b40f5*/
}
}
// 0x7B45D0
DynamicVector * UDPInterfaceClass::receivePacket(unsigned int * Block, char a2, void *a3)
{

  void *v3; // eax

  v3 = *&Block->__pad_004; /*0x7b45d3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x7b45d6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x7b45e0*/
  {
    __3_YAXPAX_Z(v3); /*0x7b45e8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x7b45f0*/
  }
  BYTE1(Block->m_C) = 0; /*0x7b45fb*/
  Block->m_8 = 0; /*0x7b4601*/
  if ( (a2 & 1) != 0 ) /*0x7b4608*/
    __3_YAXPAX_Z(Block); /*0x7b460b*/
  return Block->__pad_0; /*0x7b4615*/

}