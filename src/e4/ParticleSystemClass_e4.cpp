// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ParticleSystemClass_16_e4.hpp"
#include "e4/classes/ParticleSystemClass_32__e4.hpp"
#include "e4/classes/ParticleSystemClass_32_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x62FE60
namespace gamemd {
int ParticleSystemClass::Draw()
{

  return this->__pad_E5[19] && !this->Owner; /*0x62fe79*/

}
}
// 0x630230
namespace gamemd {
unsigned int * ParticleSystemClass::ddtor(int a2, int a3)
{

  ParticleSystemClass *v4; // [esp+0h] [ebp-4h]

  DestructParticleSystemClass(v4, (int)a3); /*0x630233*/
  if ( (a3 & 1) != 0 ) /*0x63023d*/
    __3_YAXPAX_Z((void *)(a3)); /*0x630240*/
  return (unsigned int *)(a3); /*0x63024a*/

}
} // namespace gamemd

// 0x4E87D0
namespace gamemd {
int ParticleSystemClass_16::Write(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e87da*/

}
}
// 0x4E82F0
namespace gamemd {
void ParticleSystemClass_32::ClearBuffer(void *a1_1)
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e82f6*/
  this->m_10 = 0; /*0x4e82f9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4e8300*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8306*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x4e830e*/
  }
  BYTE1(this->m_C) = 0; /*0x4e8311*/
  this->m_8 = 0; /*0x4e8314*/

}
} // namespace gamemd

// 0x4E8320
namespace gamemd {
unsigned int ParticleSystemClass_32::PointerToIndex(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x4e8320*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x4e8335*/
  else
    return 0; /*0x4e8327*/

}
} // namespace gamemd

// 0x4E8470
namespace gamemd {
void ParticleSystemClass::GetClassIdentifier()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8476*/
  this->m_10 = 0; /*0x4e8479*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4e8480*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8486*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x4e848e*/
  }
  BYTE1(this->m_C) = 0; /*0x4e8491*/
  this->m_8 = 0; /*0x4e8494*/

}
} // namespace gamemd

// 0x4E84A0
namespace gamemd {
unsigned int ParticleSystemClass::LoadTypeData(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x4e84a0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x4e84b5*/
  else
    return 0; /*0x4e84a7*/

}
} // namespace gamemd

// 0x4E84C0
namespace gamemd {
int ParticleSystemClass::SaveToINI(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e84ca*/

}
} // namespace gamemd

// 0x4E8780
namespace gamemd {
void ParticleSystemClass::initParticleArray()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8786*/
  this->m_10 = 0; /*0x4e8789*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4e8790*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8796*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x4e879e*/
  }
  BYTE1(this->m_C) = 0; /*0x4e87a1*/
  this->m_8 = 0; /*0x4e87a4*/

}
} // namespace gamemd

// 0x4E87E0
namespace gamemd {
void ParticleSystemClass_32::Destroy()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e87e6*/
  this->m_10 = 0; /*0x4e87e9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4e87f0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e87f6*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x4e87fe*/
  }
  BYTE1(this->m_C) = 0; /*0x4e8801*/
  this->m_8 = 0; /*0x4e8804*/

}
} // namespace gamemd

// 0x4E8810
namespace gamemd {
unsigned int ParticleSystemClass_32::GetIndex2(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x4e8810*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x4e8825*/
  else
    return 0; /*0x4e8817*/

}
} // namespace gamemd

// 0x4E8830
namespace gamemd {
int ParticleSystemClass_32::Write(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4e883a*/

}
} // namespace gamemd

// 0x4E8840
namespace gamemd {
void ParticleSystemClass_32::ReleaseBuffer(void *a1_1, void *a2_1)
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x4e8846*/
  this->m_10 = 0; /*0x4e8849*/
  if ( v2 && BYTE1(this->m_C) ) /*0x4e8850*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8856*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x4e885e*/
  }
  BYTE1(this->m_C) = 0; /*0x4e8861*/
  this->m_8 = 0; /*0x4e8864*/

}
} // namespace gamemd

// 0x4E8870
namespace gamemd {
unsigned int ParticleSystemClass_32_::GetElementIndex(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x4e8870*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x4e8885*/
  else
    return 0; /*0x4e8877*/

}
} // namespace gamemd

// 0x4E95E0
namespace gamemd {
char ParticleSystemClass_32::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4e95ec*/
  {
    LOBYTE(this->m_C) = 0; /*0x4e95f2*/
    if ( a3 ) /*0x4e95f8*/
      v4 = a3; /*0x4e960e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4e960a*/
    LOBYTE(this->m_C) = 1; /*0x4e9612*/
    if ( !v4 ) /*0x4e9616*/
      return 0; /*0x4e968a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x4e9618*/
    {
      m_8 = this->m_8; /*0x4e961f*/
      if ( a2 < m_8 ) /*0x4e9624*/
        m_8 = a2; /*0x4e9626*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x4e962c*/
        ++i; /*0x4e9631*/
      if ( BYTE1(this->m_C) ) /*0x4e963e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4e9649*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x4e9651*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x4e965a*/
    this->m_8 = a2; /*0x4e9662*/
    BYTE1(this->m_C) = a3 == 0; /*0x4e9665*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4e966e*/
  }
  v7 = this->m_8; /*0x4e9671*/
  if ( v7 < this->m_10 ) /*0x4e9679*/
    this->m_10 = v7; /*0x4e967b*/
  return 1; /*0x4e967e*/

}
} // namespace gamemd

// 0x4E9690
namespace gamemd {
int ParticleSystemClass_32::FindItem(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x4e9690*/
  result = 0; /*0x4e9693*/
  if ( m_10 <= 0 ) /*0x4e9698*/
    return -1; /*0x4e96af*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x4e969e*/
  {
    if ( ++result >= m_10 ) /*0x4e96ad*/
      return -1; /*0x4e96ad*/
  }
  return result; /*0x4e96b2*/

}
}
// 0x4EB260
namespace gamemd {
char ParticleSystemClass_16::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4eb262*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4eb26d*/
  {
    v3 = 0; /*0x4eb26f*/
    if ( m_8 <= 0 ) /*0x4eb273*/
      return 1; /*0x4eb293*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x4eb275*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4eb27b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4eb284*/
    {
      ++v3; /*0x4eb286*/
      ++v4; /*0x4eb287*/
      if ( v3 >= m_8 ) /*0x4eb28c*/
        return 1; /*0x4eb28c*/
    }
  }
  return 0; /*0x4eb28e*/

}
} // namespace gamemd

// 0x4EB2A0
namespace gamemd {
char ParticleSystemClass_16::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4eb2ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x4eb2b6*/
    if ( a3 ) /*0x4eb2bc*/
      v4 = a3; /*0x4eb2d2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4eb2ce*/
    LOBYTE(this->m_C) = 1; /*0x4eb2d6*/
    if ( v4 ) /*0x4eb2da*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x4eb2e5*/
      {
        m_8 = this->m_8; /*0x4eb2ec*/
        if ( a2 < m_8 ) /*0x4eb2f1*/
          m_8 = a2; /*0x4eb2f3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x4eb2f9*/
          ++i; /*0x4eb2fe*/
        if ( BYTE1(this->m_C) ) /*0x4eb30b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4eb316*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x4eb31e*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x4eb327*/
      this->m_8 = a2; /*0x4eb32f*/
      BYTE1(this->m_C) = a3 == 0; /*0x4eb332*/
      return 1; /*0x4eb338*/
    }
    else
    {
      return 0; /*0x4eb2df*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4eb342*/
    return 1; /*0x4eb348*/
  }

}
} // namespace gamemd

// 0x4EB350
namespace gamemd {
void ParticleSystemClass_16::ddtor()
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4eb35d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4eb363*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x4eb36b*/
  }
  BYTE1(this->m_C) = 0; /*0x4eb36e*/
  this->m_8 = 0; /*0x4eb371*/

}
} // namespace gamemd

// 0x4EB380
namespace gamemd {
int ParticleSystemClass_16::Init(unsigned int * a2, void *a2_2, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7_1, void *a8_1)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4eb380*/
    return 0; /*0x4eb388*/
  m_8 = this->m_8; /*0x4eb38e*/
  result = 0; /*0x4eb391*/
  if ( m_8 <= 0 ) /*0x4eb395*/
    return -1; /*0x4eb3ac*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x4eb39b*/
  {
    if ( ++result >= m_8 ) /*0x4eb3aa*/
      return -1; /*0x4eb3aa*/
  }
  return result; /*0x4eb38a*/

}
} // namespace gamemd

// 0x4EB3C0
namespace gamemd {
unsigned int ParticleSystemClass_16::Read(int a2, void *a2_2)
{

  if ( LOBYTE(this->m_C) ) /*0x4eb3c0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x4eb3d5*/
  else
    return 0; /*0x4eb3c7*/

}
} // namespace gamemd

// 0x4EB4C0
namespace gamemd {
char ParticleSystemClass_32::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4eb4c2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4eb4cd*/
  {
    v3 = 0; /*0x4eb4cf*/
    if ( m_8 <= 0 ) /*0x4eb4d3*/
      return 1; /*0x4eb4f3*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x4eb4d5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4eb4db*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4eb4e4*/
    {
      ++v3; /*0x4eb4e6*/
      ++v4; /*0x4eb4e7*/
      if ( v3 >= m_8 ) /*0x4eb4ec*/
        return 1; /*0x4eb4ec*/
    }
  }
  return 0; /*0x4eb4ee*/

}
} // namespace gamemd

// 0x4EB500
namespace gamemd {
char ParticleSystemClass_32::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4eb50c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4eb516*/
    if ( a3 ) /*0x4eb51c*/
      v4 = a3; /*0x4eb532*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4eb52e*/
    LOBYTE(this->m_C) = 1; /*0x4eb536*/
    if ( v4 ) /*0x4eb53a*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x4eb545*/
      {
        m_8 = this->m_8; /*0x4eb54c*/
        if ( a2 < m_8 ) /*0x4eb551*/
          m_8 = a2; /*0x4eb553*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x4eb559*/
          ++i; /*0x4eb55e*/
        if ( BYTE1(this->m_C) ) /*0x4eb56b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4eb576*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x4eb57e*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x4eb587*/
      this->m_8 = a2; /*0x4eb58f*/
      BYTE1(this->m_C) = a3 == 0; /*0x4eb592*/
      return 1; /*0x4eb598*/
    }
    else
    {
      return 0; /*0x4eb53f*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4eb5a2*/
    return 1; /*0x4eb5a8*/
  }

}
} // namespace gamemd

// 0x4EB5B0
namespace gamemd {
void ParticleSystemClass_32::ddtor()
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4eb5bd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4eb5c3*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x4eb5cb*/
  }
  BYTE1(this->m_C) = 0; /*0x4eb5ce*/
  this->m_8 = 0; /*0x4eb5d1*/

}
} // namespace gamemd

// 0x4EB5E0
namespace gamemd {
int ParticleSystemClass_32::Init(unsigned int * a2, void *a2_2, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7_1, void *a8_1)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4eb5e0*/
    return 0; /*0x4eb5e8*/
  m_8 = this->m_8; /*0x4eb5ee*/
  result = 0; /*0x4eb5f1*/
  if ( m_8 <= 0 ) /*0x4eb5f5*/
    return -1; /*0x4eb60c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x4eb5fb*/
  {
    if ( ++result >= m_8 ) /*0x4eb60a*/
      return -1; /*0x4eb60a*/
  }
  return result; /*0x4eb5ea*/

}
} // namespace gamemd

// 0x4EB620
namespace gamemd {
unsigned int ParticleSystemClass_32::Read(int a2, void *a2_2)
{

  if ( LOBYTE(this->m_C) ) /*0x4eb620*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x4eb635*/
  else
    return 0; /*0x4eb627*/

}
} // namespace gamemd

// 0x4EB640
namespace gamemd {
char ParticleSystemClass_32::CopyParticles2(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eb64c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4eb652*/
    if ( a3 ) /*0x4eb658*/
      v4 = a3; /*0x4eb66e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4eb66a*/
    LOBYTE(this->m_C) = 1; /*0x4eb672*/
    if ( !v4 ) /*0x4eb676*/
      return 0; /*0x4eb6ea*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x4eb678*/
    {
      m_8 = this->m_8; /*0x4eb67f*/
      if ( a2 < m_8 ) /*0x4eb684*/
        m_8 = a2; /*0x4eb686*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x4eb68c*/
        ++i; /*0x4eb691*/
      if ( BYTE1(this->m_C) ) /*0x4eb69e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4eb6a9*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x4eb6b1*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x4eb6ba*/
    this->m_8 = a2; /*0x4eb6c2*/
    BYTE1(this->m_C) = a3 == 0; /*0x4eb6c5*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4eb6ce*/
  }
  v7 = this->m_8; /*0x4eb6d1*/
  if ( v7 < this->m_10 ) /*0x4eb6d9*/
    this->m_10 = v7; /*0x4eb6db*/
  return 1; /*0x4eb6de*/

}
} // namespace gamemd

// 0x4EB6F0
namespace gamemd {
int ParticleSystemClass_32::FindParticle2(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x4eb6f0*/
  result = 0; /*0x4eb6f3*/
  if ( m_10 <= 0 ) /*0x4eb6f8*/
    return -1; /*0x4eb70f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x4eb6fe*/
  {
    if ( ++result >= m_10 ) /*0x4eb70d*/
      return -1; /*0x4eb70d*/
  }
  return result; /*0x4eb712*/

}
}
// 0x4EB8A0
namespace gamemd {
char ParticleSystemClass_32_::ResizeDataArray(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eb8ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x4eb8b2*/
    if ( a3 ) /*0x4eb8b8*/
      v4 = a3; /*0x4eb8ce*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4eb8ca*/
    LOBYTE(this->m_C) = 1; /*0x4eb8d2*/
    if ( !v4 ) /*0x4eb8d6*/
      return 0; /*0x4eb94a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x4eb8d8*/
    {
      m_8 = this->m_8; /*0x4eb8df*/
      if ( a2 < m_8 ) /*0x4eb8e4*/
        m_8 = a2; /*0x4eb8e6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x4eb8ec*/
        ++i; /*0x4eb8f1*/
      if ( BYTE1(this->m_C) ) /*0x4eb8fe*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4eb909*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x4eb911*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x4eb91a*/
    this->m_8 = a2; /*0x4eb922*/
    BYTE1(this->m_C) = a3 == 0; /*0x4eb925*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4eb92e*/
  }
  v7 = this->m_8; /*0x4eb931*/
  if ( v7 < this->m_10 ) /*0x4eb939*/
    this->m_10 = v7; /*0x4eb93b*/
  return 1; /*0x4eb93e*/

}
} // namespace gamemd

// 0x4EB950
namespace gamemd {
int ParticleSystemClass_32_::FindElementByValue(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x4eb950*/
  result = 0; /*0x4eb953*/
  if ( m_10 <= 0 ) /*0x4eb958*/
    return -1; /*0x4eb96f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x4eb95e*/
  {
    if ( ++result >= m_10 ) /*0x4eb96d*/
      return -1; /*0x4eb96d*/
  }
  return result; /*0x4eb972*/

}
} // namespace gamemd

// 0x4EF5D0
namespace gamemd {
DynamicVector * VectorClass_flat::Constructor_VectorClass_BuildingClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004EF5D0.json)
}
} // namespace gamemd

// 0x4EFD50
namespace gamemd {
VectorClass_flat * ParticleSystemClass_16::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4EFD50)
}
} // namespace gamemd

// 0x4EFDF0
namespace gamemd {
VectorClass_flat * ParticleSystemClass_32::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4EFDF0)
}
} // namespace gamemd

// 0x4EFE40
namespace gamemd {
DynamicVector * ParticleSystemClass_32::Constructor_VectorClass_TerrainClass___(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4EFE40)
}
} // namespace gamemd

// 0x4EFEE0
namespace gamemd {
DynamicVector * ParticleSystemClass_32::Constructor_VectorClass_AircraftClass___(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4efee3*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x4efee6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4efef0*/
  {
    __3_YAXPAX_Z(v3); /*0x4efef8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4eff00*/
  }
  BYTE1(Block->m_C) = 0; /*0x4eff0b*/
  Block->m_8 = 0; /*0x4eff11*/
  if ( (a2 & 1) != 0 ) /*0x4eff18*/
    __3_YAXPAX_Z(Block); /*0x4eff1b*/
  return Block->__pad_0; /*0x4eff25*/

}
} // namespace gamemd

// 0x62FE80
namespace gamemd {
int ParticleSystemClass::StubReturn2()
{

  return 2; /*0x62fe85*/

}
} // namespace gamemd

// 0x630200
namespace gamemd {
int ParticleSystemClass::GetObjectSize()
{

  return 256; /*0x630205*/

}
} // namespace gamemd

// 0x630210
namespace gamemd {
int ParticleSystemClass::GetTypeIdentifier()
{

  return 24; /*0x630215*/

}
} // namespace gamemd
