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
#include "e4/classes/ObjectTypeClass_e4.hpp"

// 0x4A0760
namespace gamemd {
int ConnectionPointClass::GetConnectionInterface(unsigned int * a1, int a2)
{

  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  unsigned int *v8; // edx
  unsigned int *v9; // eax
  int i; // esi
  int v11; // [esp-Ch] [ebp-14h]

  if ( !a2 ) /*0x4a076a*/
    return -2147467261; /*0x4a076d*/
  v3 = (int)(__2_YAPAXI_Z(0x24u)); /*0x4a077d*/
  if ( !v3 ) /*0x4a0784*/
    return -2147024882; /*0x4a0864*/
  *(unsigned int *)(v3 + 8) = 0; /*0x4a0798*/
  *(unsigned int *)(v3 + 12) = 0; /*0x4a079b*/
  *(unsigned char *)(v3 + 16) = 1; /*0x4a079e*/
  *(unsigned char *)(v3 + 17) = 0; /*0x4a07a2*/
  *(unsigned int *)(v3 + 4) = (unsigned int)(&vt_VectorClass); /*0x4a07a5*/
  if ( (int *)(v3 + 4) != &a1->ConnectionPointClass_field_0x1C ) /*0x4a07ab*/
  {
    VectorClass::ClearAndFree2(v3 + 4); /*0x4a07af*/
    v4 = *((unsigned int *)a1 + 9); /*0x4a07b5*/
    *(unsigned int *)(v3 + 12) = v4; /*0x4a07ba*/
    if ( v4 ) /*0x4a07bd*/
    {
      v5 = (int)(__2_YAPAXI_Z(8 * v4)); /*0x4a07c7*/
      *(unsigned int *)(v3 + 8) = v5; /*0x4a07d1*/
      if ( v5 ) /*0x4a07d4*/
      {
        v6 = *(unsigned int *)(v3 + 12); /*0x4a07d6*/
        v7 = 0; /*0x4a07d9*/
        *(unsigned char *)(v3 + 17) = 1; /*0x4a07dd*/
        if ( v6 > 0 ) /*0x4a07e1*/
        {
          do /*0x4a0806*/
          {
            v8 = (unsigned int *)(a1->ConnectionPointClass_field_0x20 + 8 * v7); /*0x4a07ef*/
            v9 = (unsigned int *)(*(unsigned int *)(v3 + 8) + 8 * v7++); /*0x4a07f4*/
            *v9 = *v8; /*0x4a07f9*/
            v9[1] = v8[1]; /*0x4a07fe*/
          }
          while ( v7 < *(unsigned int *)(v3 + 12) ); /*0x4a0806*/
        }
      }
    }
    else
    {
      *(unsigned int *)(v3 + 8) = 0; /*0x4a080c*/
      *(unsigned char *)(v3 + 17) = 0; /*0x4a080f*/
    }
  }
  *(unsigned int *)(v3 + 20) = *((unsigned int *)a1 + 11); /*0x4a0815*/
  *(unsigned int *)(v3 + 24) = *((unsigned int *)a1 + 12); /*0x4a081b*/
  *(unsigned int *)(v3 + 4) = (unsigned int)(&vt_DynamicVectorClass); /*0x4a081e*/
  *(unsigned int *)(v3 + 28) = 0; /*0x4a0824*/
  *(unsigned int *)(v3 + 32) = 0; /*0x4a0827*/
  *(unsigned int *)v3 = (unsigned int)(&vt_EnumConnectionsClass); /*0x4a082a*/
  for ( i = 0; i < *(unsigned int *)(v3 + 20); ++i ) /*0x4a0837*/
  {
    v11 = *(unsigned int *)(*(unsigned int *)(v3 + 8) + 8 * i); /*0x4a083f*/
    (*(void (**)(int))(*(unsigned int *)v11 + 4))(v11); /*0x4a0842*/
  }
  return (**(int (***)(int, void *, int))v3)(v3, &unk_7F7CB0, a2); /*0x4a076c*/

}
} // namespace gamemd
// 0x4A0870
namespace gamemd {
unsigned int * ConnectionPointClass::Construct(unsigned int * a1, ConnectionPointClass * aP2)
{

  this->ConnectionPointClass_field_0x04 = *a1; /*0x4a087c*/
  this->ConnectionPointClass_field_0x08 = a1[1]; /*0x4a0881*/
  this->ConnectionPointClass_field_0x0C = a1[2]; /*0x4a0887*/
  this->ConnectionPointClass_field_0x10 = a1[3]; /*0x4a088d*/
  this->ConnectionPointClass_field_0x18 = aP2; /*0x4a0896*/
  this->ConnectionPointClass_field_0x14 = 0; /*0x4a0899*/
  this->ConnectionPointClass_field_0x20 = 0; /*0x4a089c*/
  *((unsigned int *)this + 9) = 0; /*0x4a089f*/
  *((unsigned char *)this + 40) = 1; /*0x4a08a2*/
  *((unsigned char *)this + 41) = 0; /*0x4a08a6*/
  this->ConnectionPointClass_field_0x1C = (int)&vt_DynamicVectorClass; /*0x4a08a9*/
  *((unsigned int *)this + 12) = 10; /*0x4a08b0*/
  *((unsigned int *)this + 11) = 0; /*0x4a08b7*/
  *(unsigned int *)this->__pad_0 = &vt_ConnectionPointClass; /*0x4a08ba*/
  (*(void (**)(int))(*(unsigned int *)aP2 + 4))(aP2); /*0x4a08c3*/
  return this->__pad_0; /*0x4a08c8*/

}
} // namespace gamemd
// 0x4A1280
namespace gamemd {
AbstractClass * * ConnectionPointClass_9::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4a128c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4a1296*/
    if ( a3 ) /*0x4a129c*/
      v4 = a3; /*0x4a12b2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4a12ae*/
    LOBYTE(this->m_C) = 1; /*0x4a12b6*/
    if ( v4 ) /*0x4a12ba*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x4a12c5*/
      {
        m_8 = this->m_8; /*0x4a12cc*/
        if ( a2 < m_8 ) /*0x4a12d1*/
          m_8 = a2; /*0x4a12d3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x4a12d9*/
          ++i; /*0x4a12de*/
        if ( BYTE1(this->m_C) ) /*0x4a12eb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a12f6*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x4a12fe*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x4a1307*/
      this->m_8 = a2; /*0x4a130f*/
      BYTE1(this->m_C) = a3 == 0; /*0x4a1312*/
      return 1; /*0x4a1318*/
    }
    else
    {
      return 0; /*0x4a12bf*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAUIConnectionPoint *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4a1322*/
    return 1; /*0x4a1328*/
  }

}
}
// 0x4A0630
int ConnectionPointClass::Unadvise(int a1, int (__stdcall ***a2)(unsigned int, int, int *) a2, int * updated)
{

  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int ConnectionPointClass_field_0x20; // edx
  int v8; // [esp+14h] [ebp-8h] BYREF
  int updated; // [esp+18h] [ebp-4h]

  if ( !a2 || !a3 ) /*0x4a0648*/
    return -2147467261; /*0x4a06ec*/
  updated = AbstractClass::updateAITimer(dword_A8B230); /*0x4a0661*/
  if ( (**a2)(a2, (int)&a1->ConnectionPointClass_field_0x04, &v8) < 0 ) /*0x4a0671*/
    return -2147220990; /*0x4a0675*/
  v4 = *((unsigned int *)a1 + 9); /*0x4a0681*/
  if ( *((unsigned int *)a1 + 11) >= v4 ) /*0x4a068c*/
  {
    if ( !*((unsigned char *)a1 + 41) && v4 ) /*0x4a0697*/
      return -2147220991; /*0x4a0697*/
    v5 = *((unsigned int *)a1 + 12); /*0x4a0699*/
    if ( v5 <= 0 /*0x4a06a9*/
      || !(*(uint8_t (**)(int *, int, unsigned int))(a1->ConnectionPointClass_field_0x1C + 8))(
            &a1->ConnectionPointClass_field_0x1C,
            v4 + v5,
            0) )
    {
      return -2147220991; /*0x4a06de*/
    }
  }
  v6 = *((unsigned int *)a1 + 11); /*0x4a06b0*/
  ConnectionPointClass_field_0x20 = a1->ConnectionPointClass_field_0x20; /*0x4a06b3*/
  *((unsigned int *)a1 + 11) = v6 + 1; /*0x4a06ba*/
  *(unsigned int *)(ConnectionPointClass_field_0x20 + 8 * v6) = v8; /*0x4a06c1*/
  *(unsigned int *)(ConnectionPointClass_field_0x20 + 8 * v6 + 4) = updated; /*0x4a06c9*/
  *a3 = updated; /*0x4a06d1*/
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
  int ConnectionPointClass_field_0x20; // ecx

  v2 = 0; /*0x4a0705*/
  v3 = *((unsigned int *)a1 + 11); /*0x4a0707*/
  if ( v3 <= 0 ) /*0x4a070d*/
    return -2147220992; /*0x4a0725*/
  for ( i = (unsigned int *)(a1->ConnectionPointClass_field_0x20 + 4); *i != a2; i += 2 ) /*0x4a0716*/
  {
    if ( ++v2 >= v3 ) /*0x4a0723*/
      return -2147220992; /*0x4a0723*/
  }
  v6 = *((unsigned int *)a1 + 11); /*0x4a072f*/
  if ( v2 < v6 ) /*0x4a0734*/
  {
    v7 = v6 - 1; /*0x4a0736*/
    for ( *((unsigned int *)a1 + 11) = v7; /*0x4a073c*/
          v2 < *((unsigned int *)a1 + 11);
          *(unsigned int *)(ConnectionPointClass_field_0x20 + 8 * v2 - 4) = *(unsigned int *)(ConnectionPointClass_field_0x20
                                                                                + 8 * v2
                                                                                + 4) )
    {
      ConnectionPointClass_field_0x20 = a1->ConnectionPointClass_field_0x20; /*0x4a073e*/
      ++v2; /*0x4a0741*/
      *(unsigned int *)(ConnectionPointClass_field_0x20 + 8 * v2 - 8) = *(unsigned int *)(ConnectionPointClass_field_0x20 + 8 * v2); /*0x4a0745*/
    }
  }
  return 0; /*0x4a0725*/

}
// 0x4A0F70
namespace gamemd {
int ConnectionPointClass_9::EnumConnections(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4a0f7a*/

}
} // namespace gamemd

// 0x4A1240
namespace gamemd {
char ConnectionPointClass_9::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4a1242*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4a124d*/
  {
    v3 = 0; /*0x4a124f*/
    if ( m_8 <= 0 ) /*0x4a1253*/
      return 1; /*0x4a1273*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x4a1255*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4a125b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4a1264*/
    {
      ++v3; /*0x4a1266*/
      ++v4; /*0x4a1267*/
      if ( v3 >= m_8 ) /*0x4a126c*/
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
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4a1360*/
    return 0; /*0x4a1368*/
  m_8 = this->m_8; /*0x4a136e*/
  result = 0; /*0x4a1371*/
  if ( m_8 <= 0 ) /*0x4a1375*/
    return -1; /*0x4a138c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x4a137b*/
  {
    if ( ++result >= m_8 ) /*0x4a138a*/
      return -1; /*0x4a138a*/
  }
  return result; /*0x4a136a*/

}
} // namespace gamemd

// 0x4A13A0
namespace gamemd {
unsigned int ConnectionPointClass_9::Unadvise(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x4a13a0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x4a13b5*/
  else
    return 0; /*0x4a13a7*/

}
} // namespace gamemd

// 0x4A14F0
namespace gamemd {
VectorClass_flat * ConnectionPointClass_9::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4a14f3*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x4a14f6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4a1500*/
  {
    __3_YAXPAX_Z(v3); /*0x4a1508*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4a1510*/
  }
  BYTE1(Block->m_C) = 0; /*0x4a151b*/
  Block->m_8 = 0; /*0x4a1521*/
  if ( (a2 & 1) != 0 ) /*0x4a1528*/
    __3_YAXPAX_Z(Block); /*0x4a152b*/
  return Block->__pad_0; /*0x4a1535*/

}
} // namespace gamemd
