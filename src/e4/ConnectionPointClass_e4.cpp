// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ConnectionPointClass_9_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConnectionPointClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/ConnectionClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4A0760
namespace gamemd {
int ConnectionPointClass::GetConnectionInterface(unsigned int * a1, int a2)
{
  void** v3;
  int v4; // eax
  void *v5; // eax
  void * v6;
  int v7; // ecx
  unsigned int *v8; // edx
  unsigned int *v9; // eax
  int i; // esi
  int v11; // [esp-Ch] [ebp-14h]

  if ( !a2 ) /*0x4a076a*/
    return -2147467261; /*0x4a076d*/
  v3 = operator new(0x24u); /*0x4a077d*/
  if ( !v3 ) /*0x4a0784*/
    return -2147024882; /*0x4a0864*/
  v3[2] = 0; /*0x4a0798*/
  v3[3] = 0; /*0x4a079b*/
  *((unsigned char *)v3 + 16) = 1; /*0x4a079e*/
  *((unsigned char *)v3 + 17) = 0; /*0x4a07a2*/
  if ( v3 + 1 != a1 + 7 ) /*0x4a07ab*/
  {
    VectorClass::ClearAndFree2((int)(v3 + 1)); /*0x4a07af*/
    v4 = a1[9]; /*0x4a07b5*/
    v3[3] = v4; /*0x4a07ba*/
    if ( v4 ) /*0x4a07bd*/
    {
      v5 = operator new(8 * v4); /*0x4a07c7*/
      v3[2] = v5; /*0x4a07d1*/
      if ( v5 ) /*0x4a07d4*/
      {
        v6 = v3[3]; /*0x4a07d6*/
        v7 = 0; /*0x4a07d9*/
        *((unsigned char *)v3 + 17) = 1; /*0x4a07dd*/
        if ( v6 > 0 ) /*0x4a07e1*/
        {
          do /*0x4a0806*/
          {
            v8 = (unsigned int *)(a1[8] + 8 * v7); /*0x4a07ef*/
            v9 = (unsigned int *)(v3[2] + 8 * v7++); /*0x4a07f4*/
            *v9 = *v8; /*0x4a07f9*/
            v9[1] = v8[1]; /*0x4a07fe*/
          }
          while ( v7 < v3[3] ); /*0x4a0806*/
        }
      }
    }
    else
    {
      v3[2] = 0; /*0x4a080c*/
      *((unsigned char *)v3 + 17) = 0; /*0x4a080f*/
    }
  }
  v3[5] = a1[11]; /*0x4a0815*/
  v3[6] = a1[12]; /*0x4a081b*/
  v3[7] = 0; /*0x4a0824*/
  v3[8] = 0; /*0x4a0827*/
  for ( i = 0; i < v3[5]; ++i ) /*0x4a0837*/
  {
    v11 = *(unsigned int *)(v3[2] + 8 * i); /*0x4a083f*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v11 + 4))(v11); /*0x4a0842*/
  }
  return (*(int (__stdcall **)(unsigned int *, void *, int))*v3)(v3, &unk_7F7CB0, a2); /*0x4a076c*/
}
} // namespace gamemd
// 0x4A0870
namespace gamemd {
unsigned int * ConnectionPointClass::Construct(unsigned int * a1, ConnectionPointClass * aP2)
{
  this->q004 = *a1; /*0x4a087c*/
  this->q008 = a1[1]; /*0x4a0881*/
  this->q00C = a1[2]; /*0x4a0887*/
  this->u32_10 = a1[3]; /*0x4a088d*/
  this->q018 = aP2; /*0x4a0896*/
  this->q014 = 0; /*0x4a0899*/
  this->q020 = 0; /*0x4a089c*/
  this->q024 = 0; /*0x4a089f*/
  this->u8_28 = 1; /*0x4a08a2*/
  this->u8_29 = 0; /*0x4a08a6*/
  *(&this->q0042) = 10; /*0x4a08b0*/
  *(&this->q0041) = 0; /*0x4a08b7*/
  (*(void (__stdcall **)(int))(aP2->q004)(aP2); /*0x4a08c3*/
  return this; /*0x4a08c8*/
}
} // namespace gamemd
// 0x4A1280
namespace gamemd {
AbstractClass * * ConnectionPointClass_9::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4a128c*/
  {
    this->q00C = 0; /*0x4a1296*/
    if ( a3 ) /*0x4a129c*/
      v4 = a3; /*0x4a12b2*/
    else
      v4 = operator new(4 * a2); /*0x4a12ae*/
    this->q00C = 1; /*0x4a12b6*/
    if ( v4 ) /*0x4a12ba*/
    {
      if ( this->q004 ) /*0x4a12c5*/
      {
        v6 = this->q008; /*0x4a12cc*/
        if ( a2 < v6 ) /*0x4a12d1*/
          v6 = a2; /*0x4a12d3*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(this->q004 + 4 * i - 4) ) /*0x4a12d9*/
          ++i; /*0x4a12de*/
        if ( this->IsAllocated ) /*0x4a12eb*/
        {
          RA2_OPDEL(this->q004); /*0x4a12f6*/
          this->q004 = 0; /*0x4a12fe*/
        }
      }
      this->q004 = v4; /*0x4a1307*/
      this->q008 = a2; /*0x4a130f*/
      this->IsAllocated = a3 == 0; /*0x4a1312*/
      return 1; /*0x4a1318*/
    }
    else
    {
      return 0; /*0x4a12bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(((unsigned int)(this->q0042))))(this); /*0x4a1322*/
    return 1; /*0x4a1328*/
  }
}
}
// 0x4A0630
int ConnectionPointClass::Unadvise(int a1, int (__stdcall ***a2)(unsigned int, int, int *) a2, int * a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // [esp+14h] [ebp-8h] BYREF
  int v9; // [esp+18h] [ebp-4h]

  if ( !a2 || !a3 ) /*0x4a0648*/
    return -2147467261; /*0x4a06ec*/
  v9 = AbstractClass::updateAITimer(g_ScenarioClass_Instance); /*0x4a0661*/
  if ( (**a2)(a2, a1 + 4, &v8) < 0 ) /*0x4a0671*/
    return -2147220990; /*0x4a0675*/
  v4 = *(unsigned int *)(a1 + 36); /*0x4a0681*/
  if ( *(unsigned int *)(a1 + 44) >= v4 ) /*0x4a068c*/
  {
    if ( !*(unsigned char *)(a1 + 41) && v4 ) /*0x4a0697*/
      return -2147220991; /*0x4a0697*/
    v5 = *(unsigned int *)(a1 + 48); /*0x4a0699*/
    if ( v5 <= 0 /*0x4a06a9*/
      || !(*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(a1 + 28) + 8))(a1 + 28, v4 + v5, 0) )
    {
      return -2147220991; /*0x4a06de*/
    }
  }
  v6 = *(unsigned int *)(a1 + 44); /*0x4a06b0*/
  v7 = *(unsigned int *)(a1 + 32); /*0x4a06b3*/
  *(unsigned int *)(a1 + 44) = v6 + 1; /*0x4a06ba*/
  *(unsigned int *)(v7 + 8 * v6) = v8; /*0x4a06c1*/
  *(unsigned int *)(v7 + 8 * v6 + 4) = v9; /*0x4a06c9*/
  *a3 = v9; /*0x4a06d1*/
  return 0; /*0x4a0673*/
}
// 0x4A0700
int ConnectionPointClass::EnumConnections(int a1, int a2)
{
  int v2; // eax
  int v3; // esi
  unsigned int *i; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v2 = 0; /*0x4a0705*/
  v3 = *(unsigned int *)(a1 + 44); /*0x4a0707*/
  if ( v3 <= 0 ) /*0x4a070d*/
    return -2147220992; /*0x4a0725*/
  for ( i = (unsigned int *)(*(unsigned int *)(a1 + 32) + 4); *i != a2; i += 2 ) /*0x4a0716*/
  {
    if ( ++v2 >= v3 ) /*0x4a0723*/
      return -2147220992; /*0x4a0723*/
  }
  v6 = *(unsigned int *)(a1 + 44); /*0x4a072f*/
  if ( v2 < v6 ) /*0x4a0734*/
  {
    v7 = v6 - 1; /*0x4a0736*/
    for ( *(unsigned int *)(a1 + 44) = v7; v2 < *(unsigned int *)(a1 + 44); *(unsigned int *)(v8 + 8 * v2 - 4) = *(unsigned int *)(v8 + 8 * v2 + 4) ) /*0x4a073c*/
    {
      v8 = *(unsigned int *)(a1 + 32); /*0x4a073e*/
      ++v2; /*0x4a0741*/
      *(unsigned int *)(v8 + 8 * v2 - 8) = *(unsigned int *)(v8 + 8 * v2); /*0x4a0745*/
    }
  }
  return 0; /*0x4a0725*/
}
// 0x4A0F70
namespace gamemd {
int ConnectionPointClass_9::EnumConnections(int a2)
{
  return *(unsigned int *)(this->q004 + 4 * a2); /*0x4a0f7a*/
}
} // namespace gamemd

// 0x4A1240
namespace gamemd {
char ConnectionPointClass_9::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = this->q008; /*0x4a1242*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x4a124d*/
  {
    v3 = 0; /*0x4a124f*/
    if ( v2 <= 0 ) /*0x4a1253*/
      return 1; /*0x4a1273*/
    v4 = (unsigned int *)this->q004; /*0x4a1255*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4a125b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4a1264*/
    {
      ++v3; /*0x4a1266*/
      ++v4; /*0x4a1267*/
      if ( v3 >= v2 ) /*0x4a126c*/
        return 1; /*0x4a126c*/
    }
  }
  return 0; /*0x4a126e*/
}
} // namespace gamemd

// 0x4A1360
namespace gamemd {
int ConnectionPointClass_9::Advise(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !this->q00C ) /*0x4a1360*/
    return 0; /*0x4a1368*/
  v3 = this->q008; /*0x4a136e*/
  result = 0; /*0x4a1371*/
  if ( v3 <= 0 ) /*0x4a1375*/
    return -1; /*0x4a138c*/
  for ( i = this->q004; *i != *a2; ++i ) /*0x4a137b*/
  {
    if ( ++result >= v3 ) /*0x4a138a*/
      return -1; /*0x4a138a*/
  }
  return result; /*0x4a136a*/
}
} // namespace gamemd

// 0x4A13A0
namespace gamemd {
unsigned int ConnectionPointClass_9::Unadvise(int a2)
{
  if ( this->q00C ) /*0x4a13a0*/
    return (unsigned int)(a2 - this->q004) >> 2; /*0x4a13b5*/
  else
    return 0; /*0x4a13a7*/
}
} // namespace gamemd

// 0x4A14F0
namespace gamemd {
VectorClass_flat * ConnectionPointClass_9::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x4a14f3*/
  if ( v3 && this->IsAllocated ) /*0x4a1500*/
  {
    RA2_OPDEL(v3); /*0x4a1508*/
    this->q004 = 0; /*0x4a1510*/
  }
  this->IsAllocated = 0; /*0x4a151b*/
  this->q008 = 0; /*0x4a1521*/
  if ( (a2 & 1) != 0 ) /*0x4a1528*/
    RA2_OPDEL(); /*0x4a152b*/
  return this; /*0x4a1535*/
}
} // namespace gamemd
