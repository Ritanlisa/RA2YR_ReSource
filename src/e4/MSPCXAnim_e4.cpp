// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSPCXAnim_26_e4.hpp"
#include "e4/classes/MSPCXAnim_42_e4.hpp"
#include "e4/classes/MSPCXAnim_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5CEAB0
namespace gamemd {
int MSPCXAnim::Stub()
{

  return *((unsigned char *)this + 41); /*0x5ceab3*/

}
} // namespace gamemd
// 0x5D09C0
namespace gamemd {
AbstractClass * * MSPCXAnim_42::AllocCopyData_8B(int a2, unsigned int * a3)
{

  unsigned int *v4; // ebx
  unsigned int *v5; // eax
  unsigned int *v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax

  if ( a2 ) /*0x5d09cc*/
  {
    v4 = a3; /*0x5d09d2*/
    *((unsigned char *)this + 12) = 0; /*0x5d09d6*/
    if ( a3 ) /*0x5d09dc*/
    {
      v6 = a3; /*0x5d0a04*/
    }
    else
    {
      v5 = (unsigned int *)(RA2_OPNEW(8 * a2));
      if ( v5 ) /*0x5d09f0*/
        v6 = v5; /*0x5d09f5*/
      else
        v6 = 0; /*0x5d09fd*/
    }
    *((unsigned char *)this + 12) = 1; /*0x5d0a0c*/
    if ( !v6 ) /*0x5d0a10*/
      return 0; /*0x5d0a90*/
    if ( *((unsigned int *)this + 1) ) /*0x5d0a12*/
    {
      v7 = *((unsigned int *)this + 2); /*0x5d0a19*/
      if ( a2 < v7 ) /*0x5d0a1e*/
        v7 = a2; /*0x5d0a20*/
      v8 = 0; /*0x5d0a22*/
      if ( v7 > 0 ) /*0x5d0a26*/
      {
        do /*0x5d0a3e*/
        {
          v9 = *((unsigned int *)this + 1); /*0x5d0a28*/
          ++v8; /*0x5d0a2b*/
          v6[2 * v8 - 2] = *(unsigned int *)(v9 + 8 * v8 - 8); /*0x5d0a32*/
          v6[2 * v8 - 1] = *(unsigned int *)(v9 + 8 * v8 - 4); /*0x5d0a3a*/
        }
        while ( v8 < v7 ); /*0x5d0a3e*/
        v4 = a3; /*0x5d0a40*/
      }
      if ( *((unsigned char *)this + 13) ) /*0x5d0a44*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x5d0a4f*/
        *((unsigned int *)this + 1) = 0; /*0x5d0a57*/
      }
    }
    *((unsigned int *)this + 1) = v6; /*0x5d0a60*/
    *((unsigned int *)this + 2) = a2; /*0x5d0a68*/
    *((unsigned char *)this + 13) = v4 == 0; /*0x5d0a6b*/
  }
  else
  {
    char MSPCXAnim_42::AllocCopyData_8B(_DynamicVectorClass_VPoint2D *this, int a2, unsigned int *a3)
  }
  v10 = *((unsigned int *)this + 2); /*0x5d0a77*/
  if ( v10 < *((unsigned int *)this + 4) ) /*0x5d0a7f*/
    *((unsigned int *)this + 4) = v10; /*0x5d0a81*/
  return 1; /*0x5d0a84*/

}
}
// 0x5CED70
MSPCXAnim * MSPCXAnim::QueryInterface(unsigned int * Block, char a2)
{

  void (***v3)(unsigned int, int); // ecx

  v3 = (void (***)(unsigned int, int))*(Block + 9); /*0x5ced73*/
  *Block = &vt_MSPCXAnim; /*0x5ced76*/
  if ( v3 ) /*0x5ced7e*/
    (**v3)(v3, 1); /*0x5ced84*/
  *Block = &vt_MSAnim; /*0x5ced8a*/
  if ( (Block & 1) != 0 ) /*0x5ced92*/
    RA2_OPDEL(Block); /*0x5ced95*/
  return (MSPCXAnim *)Block; /*0x5ced9f*/

}
// 0x5D05A0
namespace gamemd {
void MSPCXAnim_42::FreeData()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x5d05a6*/
  *((unsigned int *)this + 4) = 0; /*0x5d05a9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x5d05b0*/
  {
    RA2_OPDEL(v2); /*0x5d05b6*/
    *((unsigned int *)this + 1) = 0; /*0x5d05be*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5d05c1*/
  *((unsigned int *)this + 2) = 0; /*0x5d05c4*/

}
} // namespace gamemd

// 0x5D05D0
namespace gamemd {
unsigned int MSPCXAnim_42::GetCount_8B(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5d05d0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 3; /*0x5d05e5*/
  else
    return 0; /*0x5d05d7*/

}
} // namespace gamemd

// 0x5D0610
namespace gamemd {
void MSPCXAnim_42::FreeData_0()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x5d0616*/
  *((unsigned int *)this + 4) = 0; /*0x5d0619*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x5d0620*/
  {
    RA2_OPDEL(v2); /*0x5d0626*/
    *((unsigned int *)this + 1) = 0; /*0x5d062e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5d0631*/
  *((unsigned int *)this + 2) = 0; /*0x5d0634*/

}
} // namespace gamemd

// 0x5D0640
namespace gamemd {
unsigned int MSPCXAnim_42::GetCount(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5d0640*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5d0655*/
  else
    return 0; /*0x5d0647*/

}
} // namespace gamemd

// 0x5D0670
namespace gamemd {
void MSPCXAnim_42::FreeData_1()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x5d0676*/
  *((unsigned int *)this + 4) = 0; /*0x5d0679*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x5d0680*/
  {
    RA2_OPDEL(v2); /*0x5d0686*/
    *((unsigned int *)this + 1) = 0; /*0x5d068e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5d0691*/
  *((unsigned int *)this + 2) = 0; /*0x5d0694*/

}
} // namespace gamemd

// 0x5D06A0
namespace gamemd {
unsigned int MSPCXAnim_42::GetCount_0(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5d06a0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5d06b5*/
  else
    return 0; /*0x5d06a7*/

}
} // namespace gamemd

// 0x5D06D0
namespace gamemd {
void MSPCXAnim_26::ddtor()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x5d06d6*/
  *((unsigned int *)this + 4) = 0; /*0x5d06d9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x5d06e0*/
  {
    RA2_OPDEL(v2); /*0x5d06e6*/
    *((unsigned int *)this + 1) = 0; /*0x5d06ee*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5d06f1*/
  *((unsigned int *)this + 2) = 0; /*0x5d06f4*/

}
} // namespace gamemd

// 0x5D0700
namespace gamemd {
unsigned int MSPCXAnim_26::Draw(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5d0700*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5d0715*/
  else
    return 0; /*0x5d0707*/

}
} // namespace gamemd

// 0x5D0720
namespace gamemd {
int MSPCXAnim_26::GetFrame(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x5d072a*/

}
} // namespace gamemd

// 0x5D0730
namespace gamemd {
void MSPCXAnim_26::FreeData()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x5d0736*/
  *((unsigned int *)this + 4) = 0; /*0x5d0739*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x5d0740*/
  {
    RA2_OPDEL(v2); /*0x5d0746*/
    *((unsigned int *)this + 1) = 0; /*0x5d074e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5d0751*/
  *((unsigned int *)this + 2) = 0; /*0x5d0754*/

}
} // namespace gamemd

// 0x5D0760
namespace gamemd {
unsigned int MSPCXAnim_26::GetCount(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5d0760*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5d0775*/
  else
    return 0; /*0x5d0767*/

}
} // namespace gamemd

// 0x5D0780
namespace gamemd {
int MSPCXAnim_42::GetFrame(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x5d078a*/

}
} // namespace gamemd

// 0x5D0790
namespace gamemd {
void MSPCXAnim_26::FreeData_0()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x5d0796*/
  *((unsigned int *)this + 4) = 0; /*0x5d0799*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x5d07a0*/
  {
    RA2_OPDEL(v2); /*0x5d07a6*/
    *((unsigned int *)this + 1) = 0; /*0x5d07ae*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5d07b1*/
  *((unsigned int *)this + 2) = 0; /*0x5d07b4*/

}
} // namespace gamemd

// 0x5D07C0
namespace gamemd {
unsigned int MSPCXAnim_26::GetCount_0(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5d07c0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5d07d5*/
  else
    return 0; /*0x5d07c7*/

}
} // namespace gamemd

// 0x5D0AA0
namespace gamemd {
int MSPCXAnim_42::FindIndex_Pair(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x5d0aa0*/
  result = 0; /*0x5d0aa5*/
  if ( v2 <= 0 ) /*0x5d0aab*/
    return -1; /*0x5d0acc*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d0ab1*/
  {
    if ( ++result >= v2 ) /*0x5d0aca*/
      return -1; /*0x5d0aca*/
  }
  return result; /*0x5d0acf*/

}
}
// 0x5D0C60
namespace gamemd {
char MSPCXAnim_42::AllocCopyData_4B(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d0c6c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x5d0c72*/
    if ( a3 ) /*0x5d0c78*/
      v4 = a3; /*0x5d0c8e*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x5d0c8a*/
    *((unsigned char *)this + 12) = 1; /*0x5d0c92*/
    if ( !v4 ) /*0x5d0c96*/
      return 0; /*0x5d0d0a*/
    if ( *((unsigned int *)this + 1) ) /*0x5d0c98*/
    {
      v5 = *((unsigned int *)this + 2); /*0x5d0c9f*/
      if ( a2 < v5 ) /*0x5d0ca4*/
        v5 = a2; /*0x5d0ca6*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x5d0cac*/
        ++i; /*0x5d0cb1*/
      if ( *((unsigned char *)this + 13) ) /*0x5d0cbe*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x5d0cc9*/
        *((unsigned int *)this + 1) = 0; /*0x5d0cd1*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x5d0cda*/
    *((unsigned int *)this + 2) = a2; /*0x5d0ce2*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x5d0ce5*/
  }
  else
  {
    char MSPCXAnim_42::AllocCopyData_4B(_DynamicVectorClass_PAVMSTextEntry *this, int a2, unsigned int *a3)
  }
  v7 = *((unsigned int *)this + 2); /*0x5d0cf1*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x5d0cf9*/
    *((unsigned int *)this + 4) = v7; /*0x5d0cfb*/
  return 1; /*0x5d0cfe*/

}
} // namespace gamemd

// 0x5D0D10
namespace gamemd {
int MSPCXAnim_42::FindIndex(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x5d0d10*/
  result = 0; /*0x5d0d13*/
  if ( v2 <= 0 ) /*0x5d0d18*/
    return -1; /*0x5d0d2f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x5d0d1e*/
  {
    if ( ++result >= v2 ) /*0x5d0d2d*/
      return -1; /*0x5d0d2d*/
  }
  return result; /*0x5d0d32*/

}
}
// 0x5D0EC0
namespace gamemd {
char MSPCXAnim_42::AllocCopyData_4B_0(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d0ecc*/
  {
    *((unsigned char *)this + 12) = 0; /*0x5d0ed2*/
    if ( a3 ) /*0x5d0ed8*/
      v4 = a3; /*0x5d0eee*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x5d0eea*/
    *((unsigned char *)this + 12) = 1; /*0x5d0ef2*/
    if ( !v4 ) /*0x5d0ef6*/
      return 0; /*0x5d0f6a*/
    if ( *((unsigned int *)this + 1) ) /*0x5d0ef8*/
    {
      v5 = *((unsigned int *)this + 2); /*0x5d0eff*/
      if ( a2 < v5 ) /*0x5d0f04*/
        v5 = a2; /*0x5d0f06*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x5d0f0c*/
        ++i; /*0x5d0f11*/
      if ( *((unsigned char *)this + 13) ) /*0x5d0f1e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x5d0f29*/
        *((unsigned int *)this + 1) = 0; /*0x5d0f31*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x5d0f3a*/
    *((unsigned int *)this + 2) = a2; /*0x5d0f42*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x5d0f45*/
  }
  else
  {
    char MSPCXAnim_42::AllocCopyData_4B_0(_DynamicVectorClass_PAVMapSelection *this, int a2, unsigned int *a3)
  }
  v7 = *((unsigned int *)this + 2); /*0x5d0f51*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x5d0f59*/
    *((unsigned int *)this + 4) = v7; /*0x5d0f5b*/
  return 1; /*0x5d0f5e*/

}
} // namespace gamemd

// 0x5D0F70
namespace gamemd {
int MSPCXAnim_42::FindIndex_0(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x5d0f70*/
  result = 0; /*0x5d0f73*/
  if ( v2 <= 0 ) /*0x5d0f78*/
    return -1; /*0x5d0f8f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x5d0f7e*/
  {
    if ( ++result >= v2 ) /*0x5d0f8d*/
      return -1; /*0x5d0f8d*/
  }
  return result; /*0x5d0f92*/

}
} // namespace gamemd

// 0x5D0FA0
namespace gamemd {
char MSPCXAnim_26::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x5d0fa2*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x5d0fad*/
  {
    v3 = 0; /*0x5d0faf*/
    if ( v2 <= 0 ) /*0x5d0fb3*/
      return 1; /*0x5d0fd3*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x5d0fb5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5d0fbb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5d0fc4*/
    {
      ++v3; /*0x5d0fc6*/
      ++v4; /*0x5d0fc7*/
      if ( v3 >= v2 ) /*0x5d0fcc*/
        return 1; /*0x5d0fcc*/
    }
  }
  return 0; /*0x5d0fce*/

}
} // namespace gamemd

// 0x5D0FE0
namespace gamemd {
char MSPCXAnim_26::AllocCopyData_4B(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d0fec*/
  {
    *((unsigned char *)this + 12) = 0; /*0x5d0ff6*/
    if ( a3 ) /*0x5d0ffc*/
      v4 = a3; /*0x5d1012*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x5d100e*/
    *((unsigned char *)this + 12) = 1; /*0x5d1016*/
    if ( v4 ) /*0x5d101a*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x5d1025*/
      {
        v6 = *((unsigned int *)this + 2); /*0x5d102c*/
        if ( a2 < v6 ) /*0x5d1031*/
          v6 = a2; /*0x5d1033*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x5d1039*/
          ++i; /*0x5d103e*/
        if ( *((unsigned char *)this + 13) ) /*0x5d104b*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x5d1056*/
          *((unsigned int *)this + 1) = 0; /*0x5d105e*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x5d1067*/
      *((unsigned int *)this + 2) = a2; /*0x5d106f*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x5d1072*/
      return 1; /*0x5d1078*/
    }
    else
    {
      return 0; /*0x5d101f*/
    }
  }
  else
  {
    char MSPCXAnim_26::AllocCopyData_4B(_VectorClass_PAVMapStage *this, int a2, unsigned int *a3)
    return 1; /*0x5d1088*/
  }

}
} // namespace gamemd

// 0x5D1090
namespace gamemd {
void MSPCXAnim_26::FreeData_1()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x5d109d*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x5d10a3*/
    *((unsigned int *)this + 1) = 0; /*0x5d10ab*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5d10ae*/
  *((unsigned int *)this + 2) = 0; /*0x5d10b1*/

}
} // namespace gamemd

// 0x5D10C0
namespace gamemd {
int MSPCXAnim_26::FindIndex(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x5d10c0*/
    return 0; /*0x5d10c8*/
  v3 = *((unsigned int *)this + 2); /*0x5d10ce*/
  result = 0; /*0x5d10d1*/
  if ( v3 <= 0 ) /*0x5d10d5*/
    return -1; /*0x5d10ec*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x5d10db*/
  {
    if ( ++result >= v3 ) /*0x5d10ea*/
      return -1; /*0x5d10ea*/
  }
  return result; /*0x5d10ca*/

}
} // namespace gamemd

// 0x5D1100
namespace gamemd {
unsigned int MSPCXAnim_26::GetCount_1(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5d1100*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5d1115*/
  else
    return 0; /*0x5d1107*/

}
} // namespace gamemd

// 0x5D1120
namespace gamemd {
char MSPCXAnim_26::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d112c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x5d1132*/
    if ( a3 ) /*0x5d1138*/
      v4 = a3; /*0x5d114e*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x5d114a*/
    *((unsigned char *)this + 12) = 1; /*0x5d1152*/
    if ( !v4 ) /*0x5d1156*/
      return 0; /*0x5d11ca*/
    if ( *((unsigned int *)this + 1) ) /*0x5d1158*/
    {
      v5 = *((unsigned int *)this + 2); /*0x5d115f*/
      if ( a2 < v5 ) /*0x5d1164*/
        v5 = a2; /*0x5d1166*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x5d116c*/
        ++i; /*0x5d1171*/
      if ( *((unsigned char *)this + 13) ) /*0x5d117e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x5d1189*/
        *((unsigned int *)this + 1) = 0; /*0x5d1191*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x5d119a*/
    *((unsigned int *)this + 2) = a2; /*0x5d11a2*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x5d11a5*/
  }
  else
  {
    char MSPCXAnim_26::Release(_DynamicVectorClass_PAVMapStage *this, int a2, unsigned int *a3)
  }
  v7 = *((unsigned int *)this + 2); /*0x5d11b1*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x5d11b9*/
    *((unsigned int *)this + 4) = v7; /*0x5d11bb*/
  return 1; /*0x5d11be*/

}
} // namespace gamemd

// 0x5D11D0
namespace gamemd {
int MSPCXAnim_26::Load(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x5d11d0*/
  result = 0; /*0x5d11d3*/
  if ( v2 <= 0 ) /*0x5d11d8*/
    return -1; /*0x5d11ef*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x5d11de*/
  {
    if ( ++result >= v2 ) /*0x5d11ed*/
      return -1; /*0x5d11ed*/
  }
  return result; /*0x5d11f2*/

}
} // namespace gamemd

// 0x5D1200
namespace gamemd {
char MSPCXAnim_42::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x5d1202*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x5d120d*/
  {
    v3 = 0; /*0x5d120f*/
    if ( v2 <= 0 ) /*0x5d1213*/
      return 1; /*0x5d1233*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x5d1215*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5d121b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5d1224*/
    {
      ++v3; /*0x5d1226*/
      ++v4; /*0x5d1227*/
      if ( v3 >= v2 ) /*0x5d122c*/
        return 1; /*0x5d122c*/
    }
  }
  return 0; /*0x5d122e*/

}
} // namespace gamemd

// 0x5D1240
namespace gamemd {
char MSPCXAnim_42::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d124c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x5d1256*/
    if ( a3 ) /*0x5d125c*/
      v4 = a3; /*0x5d1272*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x5d126e*/
    *((unsigned char *)this + 12) = 1; /*0x5d1276*/
    if ( v4 ) /*0x5d127a*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x5d1285*/
      {
        v6 = *((unsigned int *)this + 2); /*0x5d128c*/
        if ( a2 < v6 ) /*0x5d1291*/
          v6 = a2; /*0x5d1293*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x5d1299*/
          ++i; /*0x5d129e*/
        if ( *((unsigned char *)this + 13) ) /*0x5d12ab*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x5d12b6*/
          *((unsigned int *)this + 1) = 0; /*0x5d12be*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x5d12c7*/
      *((unsigned int *)this + 2) = a2; /*0x5d12cf*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x5d12d2*/
      return 1; /*0x5d12d8*/
    }
    else
    {
      return 0; /*0x5d127f*/
    }
  }
  else
  {
    char MSPCXAnim_42::Release(_VectorClass_PAVMSAnimEntry *this, int a2, unsigned int *a3)
    return 1; /*0x5d12e8*/
  }

}
} // namespace gamemd

// 0x5D12F0
namespace gamemd {
void MSPCXAnim_42::ddtor()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x5d12fd*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x5d1303*/
    *((unsigned int *)this + 1) = 0; /*0x5d130b*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5d130e*/
  *((unsigned int *)this + 2) = 0; /*0x5d1311*/

}
} // namespace gamemd

// 0x5D1320
namespace gamemd {
int MSPCXAnim_42::Load(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x5d1320*/
    return 0; /*0x5d1328*/
  v3 = *((unsigned int *)this + 2); /*0x5d132e*/
  result = 0; /*0x5d1331*/
  if ( v3 <= 0 ) /*0x5d1335*/
    return -1; /*0x5d134c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x5d133b*/
  {
    if ( ++result >= v3 ) /*0x5d134a*/
      return -1; /*0x5d134a*/
  }
  return result; /*0x5d132a*/

}
} // namespace gamemd

// 0x5D1360
namespace gamemd {
unsigned int MSPCXAnim_42::Draw(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5d1360*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5d1375*/
  else
    return 0; /*0x5d1367*/

}
} // namespace gamemd

// 0x5D1380
namespace gamemd {
char MSPCXAnim_26::AllocCopyData_4B_0(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d138c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x5d1392*/
    if ( a3 ) /*0x5d1398*/
      v4 = a3; /*0x5d13ae*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x5d13aa*/
    *((unsigned char *)this + 12) = 1; /*0x5d13b2*/
    if ( !v4 ) /*0x5d13b6*/
      return 0; /*0x5d142a*/
    if ( *((unsigned int *)this + 1) ) /*0x5d13b8*/
    {
      v5 = *((unsigned int *)this + 2); /*0x5d13bf*/
      if ( a2 < v5 ) /*0x5d13c4*/
        v5 = a2; /*0x5d13c6*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x5d13cc*/
        ++i; /*0x5d13d1*/
      if ( *((unsigned char *)this + 13) ) /*0x5d13de*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x5d13e9*/
        *((unsigned int *)this + 1) = 0; /*0x5d13f1*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x5d13fa*/
    *((unsigned int *)this + 2) = a2; /*0x5d1402*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x5d1405*/
  }
  else
  {
    char MSPCXAnim_26::AllocCopyData_4B_0(_DynamicVectorClass_PAVMSAnimEntry *this, int a2, unsigned int *a3)
  }
  v7 = *((unsigned int *)this + 2); /*0x5d1411*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x5d1419*/
    *((unsigned int *)this + 4) = v7; /*0x5d141b*/
  return 1; /*0x5d141e*/

}
} // namespace gamemd

// 0x5D1430
namespace gamemd {
int MSPCXAnim_26::FindIndex_0(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x5d1430*/
  result = 0; /*0x5d1433*/
  if ( v2 <= 0 ) /*0x5d1438*/
    return -1; /*0x5d144f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x5d143e*/
  {
    if ( ++result >= v2 ) /*0x5d144d*/
      return -1; /*0x5d144d*/
  }
  return result; /*0x5d1452*/

}
} // namespace gamemd

// 0x5D15E0
namespace gamemd {
char MSPCXAnim_26::AllocCopyData_4B_1(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d15ec*/
  {
    *((unsigned char *)this + 12) = 0; /*0x5d15f2*/
    if ( a3 ) /*0x5d15f8*/
      v4 = a3; /*0x5d160e*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x5d160a*/
    *((unsigned char *)this + 12) = 1; /*0x5d1612*/
    if ( !v4 ) /*0x5d1616*/
      return 0; /*0x5d168a*/
    if ( *((unsigned int *)this + 1) ) /*0x5d1618*/
    {
      v5 = *((unsigned int *)this + 2); /*0x5d161f*/
      if ( a2 < v5 ) /*0x5d1624*/
        v5 = a2; /*0x5d1626*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x5d162c*/
        ++i; /*0x5d1631*/
      if ( *((unsigned char *)this + 13) ) /*0x5d163e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x5d1649*/
        *((unsigned int *)this + 1) = 0; /*0x5d1651*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x5d165a*/
    *((unsigned int *)this + 2) = a2; /*0x5d1662*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x5d1665*/
  }
  else
  {
    char MSPCXAnim_26::AllocCopyData_4B_1(_DynamicVectorClass_PAVMSSfxEntry *this, int a2, unsigned int *a3)
  }
  v7 = *((unsigned int *)this + 2); /*0x5d1671*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x5d1679*/
    *((unsigned int *)this + 4) = v7; /*0x5d167b*/
  return 1; /*0x5d167e*/

}
} // namespace gamemd

// 0x5D1690
namespace gamemd {
int MSPCXAnim_26::FindIndex_1(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x5d1690*/
  result = 0; /*0x5d1693*/
  if ( v2 <= 0 ) /*0x5d1698*/
    return -1; /*0x5d16af*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x5d169e*/
  {
    if ( ++result >= v2 ) /*0x5d16ad*/
      return -1; /*0x5d16ad*/
  }
  return result; /*0x5d16b2*/

}
} // namespace gamemd

// 0x5D1710
namespace gamemd {
DynamicVector * MSPCXAnim_42::Constructor_VectorClass_Point2D_(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_Point2D);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5d1720*/
  {
    RA2_OPDEL(v3); /*0x5d1728*/
    *(Block + 1) = 0; /*0x5d1730*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5d173b*/
  *(Block + 2) = 0; /*0x5d1741*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x5d1748*/
    RA2_OPDEL(Block); /*0x5d174b*/
  return (DynamicVector *)Block; /*0x5d1755*/

}
} // namespace gamemd

// 0x5D17B0
namespace gamemd {
DynamicVector * MSPCXAnim_42::Constructor_VectorClass_MSTextEntry___(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_MSTextEntry);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5d17c0*/
  {
    RA2_OPDEL(v3); /*0x5d17c8*/
    *(Block + 1) = 0; /*0x5d17d0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5d17db*/
  *(Block + 2) = 0; /*0x5d17e1*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x5d17e8*/
    RA2_OPDEL(Block); /*0x5d17eb*/
  return (DynamicVector *)Block; /*0x5d17f5*/

}
} // namespace gamemd

// 0x5D1850
namespace gamemd {
DynamicVector * MSPCXAnim_42::Constructor_VectorClass_MapSelection___(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_MapSelection);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5d1860*/
  {
    RA2_OPDEL(v3); /*0x5d1868*/
    *(Block + 1) = 0; /*0x5d1870*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5d187b*/
  *(Block + 2) = 0; /*0x5d1881*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x5d1888*/
    RA2_OPDEL(Block); /*0x5d188b*/
  return (DynamicVector *)Block; /*0x5d1895*/

}
} // namespace gamemd

// 0x5D18A0
namespace gamemd {
VectorClass_flat * MSPCXAnim_26::Constructor_VectorClass_MapStage___(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_MapStage);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5d18b0*/
  {
    RA2_OPDEL(v3); /*0x5d18b8*/
    *(Block + 1) = 0; /*0x5d18c0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5d18cb*/
  *(Block + 2) = 0; /*0x5d18d1*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x5d18d8*/
    RA2_OPDEL(Block); /*0x5d18db*/
  return (VectorClass *)Block; /*0x5d18e5*/

}
} // namespace gamemd

// 0x5D18F0
namespace gamemd {
DynamicVector * MSPCXAnim_26::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_MapStage);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5d1900*/
  {
    RA2_OPDEL(v3); /*0x5d1908*/
    *(Block + 1) = 0; /*0x5d1910*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5d191b*/
  *(Block + 2) = 0; /*0x5d1921*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x5d1928*/
    RA2_OPDEL(Block); /*0x5d192b*/
  return (DynamicVector *)Block; /*0x5d1935*/

}
} // namespace gamemd

// 0x5D1940
namespace gamemd {
VectorClass_flat * MSPCXAnim_42::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_MSAnimEntry);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5d1950*/
  {
    RA2_OPDEL(v3); /*0x5d1958*/
    *(Block + 1) = 0; /*0x5d1960*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5d196b*/
  *(Block + 2) = 0; /*0x5d1971*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x5d1978*/
    RA2_OPDEL(Block); /*0x5d197b*/
  return (VectorClass *)Block; /*0x5d1985*/

}
} // namespace gamemd

// 0x5D1990
namespace gamemd {
DynamicVector * MSPCXAnim_26::Constructor_VectorClass_MSAnimEntry___(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_MSAnimEntry);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5d19a0*/
  {
    RA2_OPDEL(v3); /*0x5d19a8*/
    *(Block + 1) = 0; /*0x5d19b0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5d19bb*/
  *(Block + 2) = 0; /*0x5d19c1*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x5d19c8*/
    RA2_OPDEL(Block); /*0x5d19cb*/
  return (DynamicVector *)Block; /*0x5d19d5*/

}
} // namespace gamemd

// 0x5D1A30
namespace gamemd {
DynamicVector * MSPCXAnim_26::Constructor_VectorClass_MSSfxEntry___(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_MSSfxEntry);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5d1a40*/
  {
    RA2_OPDEL(v3); /*0x5d1a48*/
    *(Block + 1) = 0; /*0x5d1a50*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5d1a5b*/
  *(Block + 2) = 0; /*0x5d1a61*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x5d1a68*/
    RA2_OPDEL(Block); /*0x5d1a6b*/
  return (DynamicVector *)Block; /*0x5d1a75*/

}
} // namespace gamemd
