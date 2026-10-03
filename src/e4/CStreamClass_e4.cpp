// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CStreamClass_16_e4.hpp"
#include "e4/classes/CStreamClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"
#include "e4/classes/Camera_e4.hpp"
#include "e4/classes/IStream_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/CheckListClass_e4.hpp"

// 0x4A2CD0
namespace gamemd {
int CStreamClass::CopyStreamToBuffer(IStream *Src, signed int Size, size_t *a4, int a1, int a2, int a3, int a5, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A2CD0)
}
} // namespace gamemd
// 0x4A3110
namespace gamemd {
CStreamClass * CStreamClass::ddtor(int a2, char a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A3110)
}
} // namespace gamemd

// 0x4A2E00
namespace gamemd {  // G42.18c ns repair
int CStreamClass::Read(int a1, int a2, int a3, int a4, int a5)
{

  if ( LOBYTE(a1->CStreamClass_field_0x10) || BYTE1(a1->CStreamClass_field_0x10) ) /*0x4a2e0c*/
    return -2147467259; /*0x4a2e45*/
  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2e13*/
    WinAPI::Wrapper(-2147467261); /*0x4a2e1f*/
  return (*(int (**)(int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 20))( /*0x4a2e41*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5);

}
}  // G42.18c ns repair
// 0x4A2E50
namespace gamemd {  // G42.18c ns repair
int CStreamClass::Write(int a1, int a2, int a3)
{

  if ( LOBYTE(a1->CStreamClass_field_0x10) || BYTE1(a1->CStreamClass_field_0x10) ) /*0x4a2e5c*/
    return -2147467259; /*0x4a2e8b*/
  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2e63*/
    WinAPI::Wrapper(-2147467261); /*0x4a2e6f*/
  return (*(int (**)(int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 24))( /*0x4a2e87*/
           a1->CStreamClass_field_0x08,
           a2,
           a3);

}
}  // G42.18c ns repair
// 0x4A2EA0
namespace gamemd {  // G42.18c ns repair
int CStreamClass::Seek(int a1, int a2, int a3, int a4, int a5, int a6)
{

  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2ea5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2eb1*/
  return (*(int (**)(int, int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 28))( /*0x4a2ed8*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);

}
}  // G42.18c ns repair
// 0x4A2EE0
namespace gamemd {  // G42.18c ns repair
int CStreamClass::SetSize(int a1, int a2)
{

  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2ee5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2ef1*/
  return (*(int (**)(int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 32))( /*0x4a2f04*/
           a1->CStreamClass_field_0x08,
           a2);

}
}  // G42.18c ns repair
// 0x4A2F10
namespace gamemd {  // G42.18c ns repair
int CStreamClass::Commit(int a1)
{

  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2f15*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f21*/
  return (*(int (**)(int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 36))(a1->CStreamClass_field_0x08); /*0x4a2f2f*/

}
}  // G42.18c ns repair
// 0x4A2F40
namespace gamemd {  // G42.18c ns repair
int CStreamClass::Revert(int a1, int a2, int a3, int a4, int a5, int a6)
{

  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2f45*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f51*/
  return (*(int (**)(int, int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 40))( /*0x4a2f78*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);

}
}  // G42.18c ns repair
// 0x4A2F80
namespace gamemd {  // G42.18c ns repair
int CStreamClass::LockRegion(int a1, int a2, int a3, int a4, int a5, int a6)
{

  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2f85*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f91*/
  return (*(int (**)(int, int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 44))( /*0x4a2fb8*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);

}
}  // G42.18c ns repair
// 0x4A2FC0
namespace gamemd {  // G42.18c ns repair
int CStreamClass::UnlockRegion(int a1, int a2, int a3)
{

  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2fc5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2fd1*/
  return (*(int (**)(int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 48))( /*0x4a2fe9*/
           a1->CStreamClass_field_0x08,
           a2,
           a3);

}
}  // G42.18c ns repair
// 0x4A2FF0
namespace gamemd {  // G42.18c ns repair
int CStreamClass::Stat(int a1, int a2)
{

  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2ff5*/
    WinAPI::Wrapper(-2147467261); /*0x4a3001*/
  return (*(int (**)(int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 52))( /*0x4a3014*/
           a1->CStreamClass_field_0x08,
           a2);

}
}  // G42.18c ns repair
// 0x4A3220
namespace gamemd {  // G42.18c ns repair
int CStreamClass::IStreamQueryInterface(int a1, const void * a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A3220)
}
}  // G42.18c ns repair
// 0x4A3230
namespace gamemd {  // G42.18c ns repair
LONG CStreamClass::IStreamAddRef(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A3230)
}
}  // G42.18c ns repair
// 0x4A3240
namespace gamemd {  // G42.18c ns repair
LONG CStreamClass::IStreamRelease(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A3240)
}
}  // G42.18c ns repair
// 0x4A4B20
namespace gamemd {
int CStreamClass_16::Seek(int a2, void *a2_2, void *a3_1)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4a4b2a*/

}
} // namespace gamemd

// 0x4A4B30
namespace gamemd {
char CStreamClass_16::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4a4b32*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4a4b3d*/
  {
    v3 = 0; /*0x4a4b3f*/
    if ( m_8 <= 0 ) /*0x4a4b43*/
      return 1; /*0x4a4b63*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x4a4b45*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4a4b4b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4a4b54*/
    {
      ++v3; /*0x4a4b56*/
      ++v4; /*0x4a4b57*/
      if ( v3 >= m_8 ) /*0x4a4b5c*/
        return 1; /*0x4a4b5c*/
    }
  }
  return 0; /*0x4a4b5e*/

}
} // namespace gamemd

// 0x4A4B70
namespace gamemd {
char CStreamClass_16::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4a4b7c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4a4b86*/
    if ( a3 ) /*0x4a4b8c*/
      v4 = a3; /*0x4a4ba2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4a4b9e*/
    LOBYTE(this->m_C) = 1; /*0x4a4ba6*/
    if ( v4 ) /*0x4a4baa*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x4a4bb5*/
      {
        m_8 = this->m_8; /*0x4a4bbc*/
        if ( a2 < m_8 ) /*0x4a4bc1*/
          m_8 = a2; /*0x4a4bc3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x4a4bc9*/
          ++i; /*0x4a4bce*/
        if ( BYTE1(this->m_C) ) /*0x4a4bdb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a4be6*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x4a4bee*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x4a4bf7*/
      this->m_8 = a2; /*0x4a4bff*/
      BYTE1(this->m_C) = a3 == 0; /*0x4a4c02*/
      return 1; /*0x4a4c08*/
    }
    else
    {
      return 0; /*0x4a4baf*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4a4c12*/
    return 1; /*0x4a4c18*/
  }

}
} // namespace gamemd

// 0x4A4C20
namespace gamemd {
int CStreamClass_16::ddtor()
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4a4c2d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4a4c33*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x4a4c3b*/
  }
  BYTE1(this->m_C) = 0; /*0x4a4c3e*/
  this->m_8 = 0; /*0x4a4c41*/

}
} // namespace gamemd

// 0x4A4C50
namespace gamemd {
int CStreamClass_16::Read(unsigned int * a2, void *a2_2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4a4c50*/
    return 0; /*0x4a4c58*/
  m_8 = this->m_8; /*0x4a4c5e*/
  result = 0; /*0x4a4c61*/
  if ( m_8 <= 0 ) /*0x4a4c65*/
    return -1; /*0x4a4c7c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x4a4c6b*/
  {
    if ( ++result >= m_8 ) /*0x4a4c7a*/
      return -1; /*0x4a4c7a*/
  }
  return result; /*0x4a4c5a*/

}
} // namespace gamemd

// 0x4A4C90
namespace gamemd {
unsigned int CStreamClass_16::Write(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x4a4c90*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x4a4ca5*/
  else
    return 0; /*0x4a4c97*/

}
} // namespace gamemd

// 0x4A4D90
namespace gamemd {
VectorClass_flat * CStreamClass_16::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4a4d93*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x4a4d96*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4a4da0*/
  {
    __3_YAXPAX_Z(v3); /*0x4a4da8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4a4db0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4a4dbb*/
  Block->m_8 = 0; /*0x4a4dc1*/
  if ( (a2 & 1) != 0 ) /*0x4a4dc8*/
    __3_YAXPAX_Z(Block); /*0x4a4dcb*/
  return Block->__pad_0; /*0x4a4dd5*/

}
} // namespace gamemd
