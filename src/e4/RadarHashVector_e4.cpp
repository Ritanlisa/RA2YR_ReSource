// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RadarHashVector_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x658B10
namespace gamemd {
AbstractClass * * RadarHashVector::ComputeHashIndex(int a2, char * a3)
{

  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  unsigned int *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  unsigned int *v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x658b12*/
  if ( a2 ) /*0x658b1e*/
  {
    v5 = a3; /*0x658b24*/
    LOBYTE(this->m_C) = 0; /*0x658b28*/
    if ( a3 ) /*0x658b2d*/
    {
      if ( a2 - 1 >= 0 ) /*0x658b67*/
      {
        v9 = a3 + 4; /*0x658b69*/
        v10 = a2; /*0x658b6c*/
        do /*0x658b79*/
        {
          *((unsigned int *)v9 - 1) = 0; /*0x658b6d*/
          *(unsigned int *)v9 = 0; /*0x658b70*/
          *((unsigned int *)v9 + 1) = 0; /*0x658b72*/
          v9 += 16; /*0x658b75*/
          --v10; /*0x658b78*/
        }
        while ( v10 ); /*0x658b79*/
      }
    }
    else
    {
      v6 = (int)(__2_YAPAXI_Z(16 * a2)); /*0x658b35*/
      if ( v6 ) /*0x658b3f*/
      {
        if ( a2 - 1 >= 0 ) /*0x658b46*/
        {
          v7 = (unsigned int *)(v6 + 4); /*0x658b48*/
          v8 = a2; /*0x658b4b*/
          do /*0x658b58*/
          {
            *(v7 - 1) = 0; /*0x658b4c*/
            *v7 = 0; /*0x658b4f*/
            v7[1] = 0; /*0x658b51*/
            v7 += 4; /*0x658b54*/
            --v8; /*0x658b57*/
          }
          while ( v8 ); /*0x658b58*/
        }
        v5 = (char *)v6; /*0x658b5a*/
      }
      else
      {
        v5 = 0; /*0x658b5e*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x658b7d*/
    if ( !v5 ) /*0x658b81*/
      return 0; /*0x658c11*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x658b87*/
    {
      m_8 = this->m_8; /*0x658b8c*/
      if ( a2 < m_8 ) /*0x658b91*/
        m_8 = a2; /*0x658b93*/
      if ( m_8 > 0 ) /*0x658b97*/
      {
        v12 = 0; /*0x658b99*/
        do /*0x658bbf*/
        {
          v13 = (unsigned int *)(*(unsigned int *)&this->m_1[3] + v12); /*0x658ba0*/
          v14 = &v5[v12]; /*0x658ba2*/
          v12 += 16; /*0x658ba5*/
          --m_8; /*0x658ba8*/
          *(unsigned int *)v14 = *v13; /*0x658bab*/
          *((unsigned int *)v14 + 1) = v13[1]; /*0x658bb0*/
          *((unsigned int *)v14 + 2) = v13[2]; /*0x658bb6*/
          *((unsigned int *)v14 + 3) = v13[3]; /*0x658bbc*/
        }
        while ( m_8 ); /*0x658bbf*/
        v3 = a2; /*0x658bc1*/
      }
      if ( BYTE1(this->m_C) ) /*0x658bc7*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x658bd0*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x658bd8*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v5); /*0x658be3*/
    this->m_8 = v3; /*0x658be9*/
    BYTE1(this->m_C) = a3 == 0; /*0x658bec*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x658bf5*/
  }
  v15 = this->m_8; /*0x658bf8*/
  if ( v15 < this->m_10 ) /*0x658c00*/
    this->m_10 = v15; /*0x658c02*/
  return (gamemd::AbstractClass **)(1); /*0x658c05*/

}
} // namespace gamemd
// 0x658DE0
namespace gamemd {
unsigned int * RadarHashVector::Construct(MapClass * aP1, MapClass * aP2, void *a3, void *a4, void *a5, void *a6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x658DE0)
}
} // namespace gamemd
// 0x658A70
namespace gamemd {
void RadarHashVector::ddtor()
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x658a7d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x658a83*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x658a8b*/
  }
  BYTE1(this->m_C) = 0; /*0x658a8e*/
  this->m_8 = 0; /*0x658a91*/

}
} // namespace gamemd
// 0x658AA0
namespace gamemd {
int RadarHashVector::Read(unsigned int * a2, void *a2_2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x658aa0*/
    return 0; /*0x658aae*/
  m_8 = this->m_8; /*0x658ab4*/
  result = 0; /*0x658ab7*/
  if ( m_8 <= 0 ) /*0x658abb*/
    return -1; /*0x658ae6*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 4 ) /*0x658ac1*/
  {
    if ( ++result >= m_8 ) /*0x658ae4*/
      return -1; /*0x658ae4*/
  }
  return result; /*0x658aab*/

}
} // namespace gamemd
// 0x658AF0
namespace gamemd {
unsigned int RadarHashVector::Write(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x658af0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 4; /*0x658b05*/
  else
    return 0; /*0x658af7*/

}
} // namespace gamemd
// 0x658C20
namespace gamemd {
int RadarHashVector::FindItemIndex(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x658c20*/
  result = 0; /*0x658c25*/
  if ( m_10 <= 0 ) /*0x658c2b*/
    return -1; /*0x658c56*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 4 ) /*0x658c31*/
  {
    if ( ++result >= m_10 ) /*0x658c54*/
      return -1; /*0x658c54*/
  }
  return result; /*0x658c59*/

}
} // namespace gamemd
// 0x658C60
namespace gamemd {
char * RadarHashVector::Destructor(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x658C60)
}
} // namespace gamemd
// 0x658D10
namespace gamemd {
VectorClass_flat * RadarHashVector::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x658D10)
}
} // namespace gamemd