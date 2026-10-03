// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/FilePipe_38_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/ParticleTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/PsyDom_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/PlayerClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x477900
namespace gamemd {
void ParticleTypeClass::GetClassIdentifier()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x477906*/
  this->m_10 = 0; /*0x477909*/
  if ( v2 && BYTE1(this->m_C) ) /*0x477910*/
  {
    __3_YAXPAX_Z(v2); /*0x477916*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x47791e*/
  }
  BYTE1(this->m_C) = 0; /*0x477921*/
  this->m_8 = 0; /*0x477924*/

}
}
// 0x4784F0
namespace gamemd {
AbstractClass * * ParticleTypeClass::Release(int a2, char * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4784F0)
}
}
// 0x4788E0
namespace gamemd {
_DWORD * ParticleTypeClass::EnsureCapacity(unsigned int * a2, void *a2_2)
{

  int v3; // edi
  char *v4; // eax
  unsigned char *v5; // ecx
  int v6; // edx
  void *BehavesLike; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  char *v11; // edi

  if ( this == (ParticleTypeClass *)a2 ) /*0x4788ec*/
    return &this->ArrayIndex; /*0x4788ec*/
  (*((void (**)(ParticleTypeClass *))this->ArrayIndex + 3))(this); /*0x4788f4*/
  v3 = a2[2]; /*0x4788f7*/
  this->BehavesLike = (unsigned int)((void *)v3); /*0x4788fe*/
  if ( !v3 ) /*0x478901*/
  {
    this->ParticleTypeClass_field_28C = 0; /*0x478974*/
    BYTE1(this->ParticleTypeClass_field_0xC) = 0; /*0x478977*/
    return &this->ArrayIndex; /*0x47897a*/
  }
  v4 = (char *)__2_YAPAXI_Z(3 * v3); /*0x478907*/
  if ( v4 ) /*0x478911*/
  {
    if ( v3 - 1 >= 0 ) /*0x478918*/
    {
      v5 = (unsigned char *)(v4 + 2);
      v6 = v3; /*0x47891d*/
      do /*0x47892a*/
      {
        *(v5 - 2) = 0; /*0x47891e*/
        *(v5 - 1) = 0; /*0x478921*/
        *v5 = 0; /*0x478924*/
        v5 += 3; /*0x478926*/
        --v6; /*0x478929*/
      }
      while ( v6 ); /*0x47892a*/
    }
  }
  else
  {
    v4 = 0; /*0x47892e*/
  }
  this->ParticleTypeClass_field_28C = (unsigned int)((void *)(v4));
  if ( !v4 ) /*0x478935*/
    return &this->ArrayIndex; /*0x478935*/
  BehavesLike = (void *)(this->BehavesLike); /*0x478937*/
  v8 = 0; /*0x47893a*/
  BYTE1(this->ParticleTypeClass_field_0xC) = 1; /*0x47893e*/
  if ( (int)BehavesLike <= 0 ) /*0x478942*/
    return &this->ArrayIndex; /*0x478942*/
  v9 = 0; /*0x478944*/
  do /*0x478969*/
  {
    v10 = a2[1] + v9; /*0x47894e*/
    v11 = (char *)this->ParticleTypeClass_field_28C + v9; /*0x478952*/
    ++v8; /*0x478954*/
    v9 += 3; /*0x478958*/
    *(unsigned short *)v11 = *(unsigned short *)v10; /*0x47895b*/
    v11[2] = *(unsigned char *)(v10 + 2); /*0x478961*/
  }
  while ( v8 < (int)this->BehavesLike ); /*0x478969*/
  return &this->ArrayIndex; /*0x47896d*/

}
}
// 0x644F50
namespace gamemd {
void ParticleTypeClass::ParticleTypeClass_LoadFromINI(uint8_t *** aP1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x644F50)
}
}
// 0x6454E0
namespace gamemd {
int ParticleTypeClass::ProcessPower(int *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6454E0)
}
}
// 0x645660
namespace gamemd {
int ParticleTypeClass::SaveLoad_Prefix(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x645660)
}
}
// 0x6458B0
namespace gamemd {
int ParticleTypeClass::GetType(int a2, int a3)
{

  int result; // eax

  result = (int)this->q2E4; /*0x6458b0*/
  if ( result == a2 ) /*0x6458bc*/
    this->q2E4 = 0; /*0x6458be*/
  return result; /*0x6458c8*/

}
}
// 0x645950
namespace gamemd {
ParticleTypeClass * ParticleTypeClass::ddtor(char a2, int a3, int a4, int a5, int a6, int a7, int a8, int aP0, int aP1, int aP2, int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x645950)
}
} // namespace gamemd

// 0x645A70
namespace gamemd {
unsigned int * ParticleTypeClass::Constructor(int a2, int a3, void *a3_2)
{

  unsigned char *v4; // eax
  int v5; // ecx
  char *v6; // eax
  unsigned char *v7; // ecx
  int v8; // edx

  this->ParticleTypeClass_field_28C = 0; /*0x645a7d*/
  this->BehavesLike = (unsigned int)((void *)a2); /*0x645a80*/
  LOBYTE(this->ParticleTypeClass_field_0xC) = 1; /*0x645a83*/
  BYTE1(this->ParticleTypeClass_field_0xC) = 0; /*0x645a87*/
  this->ArrayIndex = (unsigned int)(&vt_VectorClass); /*0x645a8a*/
  if ( a2 ) /*0x645a90*/
  {
    if ( a3 ) /*0x645a98*/
    {
      if ( a2 - 1 >= 0 ) /*0x645a9f*/
      {
        v4 = (unsigned char *)(a3 + 2); /*0x645aa1*/
        v5 = a2; /*0x645aa4*/
        do /*0x645ab1*/
        {
          *(v4 - 2) = 0; /*0x645aa5*/
          *(v4 - 1) = 0; /*0x645aa8*/
          *v4 = 0; /*0x645aab*/
          v4 += 3; /*0x645aad*/
          --v5; /*0x645ab0*/
        }
        while ( v5 ); /*0x645ab1*/
      }
      this->ParticleTypeClass_field_28C = (unsigned int)((void *)a3); /*0x645ab3*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x645abc*/
      if ( v6 ) /*0x645ac6*/
      {
        if ( a2 - 1 >= 0 ) /*0x645acd*/
        {
          v7 = (unsigned char *)(v6 + 2); /*0x645acf*/
          v8 = a2; /*0x645ad2*/
          do /*0x645adf*/
          {
            *(v7 - 2) = 0; /*0x645ad3*/
            *(v7 - 1) = 0; /*0x645ad6*/
            *v7 = 0; /*0x645ad9*/
            v7 += 3; /*0x645adb*/
            --v8; /*0x645ade*/
          }
          while ( v8 ); /*0x645adf*/
        }
      }
      else
      {
        v6 = 0; /*0x645ae3*/
      }
      this->ParticleTypeClass_field_28C = (unsigned int)(v6); /*0x645ae5*/
      BYTE1(this->ParticleTypeClass_field_0xC) = 1; /*0x645ae8*/
    }
  }
  this->ArrayIndex = (unsigned int)(&vt_DynamicVectorClass); /*0x645aec*/
  this->Damage = 10; /*0x645af2*/
  this->q010 = 0; /*0x645af9*/
  return &this->ArrayIndex; /*0x645afe*/

}
}
// 0x477930
namespace gamemd {
unsigned int ParticleTypeClass::LoadTypeData(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x477930*/
    return (a2 - *(unsigned int *)&this->m_1[3]) / 3u; /*0x47794e*/
  else
    return 0; /*0x477937*/

}
} // namespace gamemd

// 0x477AC0
namespace gamemd {
TypeList_flat * ParticleTypeClass::QueryInterface(char a2, int a3, int a4, int a5, int a6, int a7, int a8, int aP0, int aP1, int aP2, int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x477AC0)
}
} // namespace gamemd

// 0x4785F0
namespace gamemd {
int ParticleTypeClass::Init(unsigned char * a2)
{

  int m_10; // esi
  int result; // eax
  unsigned char *i; // ecx

  m_10 = this->m_10; /*0x4785f2*/
  result = 0; /*0x4785f5*/
  if ( m_10 <= 0 ) /*0x4785fa*/
    return -1; /*0x478621*/
  for ( i = *(unsigned char **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x478600*/
  {
    if ( ++result >= m_10 ) /*0x47861f*/
      return -1; /*0x47861f*/
  }
  return result; /*0x478624*/

}
}
// 0x6457A0
namespace gamemd {
int ParticleTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int aP1, int aP2)
{

  int result; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // edi

  result = AbstractClass::SaveLoad_PrefixWrapper((gamemd::TechnoTypeClass *)((AbstractClass *)aP0),(gamemd::ObjectTypeClass *)(aP1),(gamemd::TechnoTypeClass *)(aP2)); /*0x6457b3*/
  if ( result >= 0 ) /*0x6457ba*/
  {
    v4 = *(unsigned int *)aP1; /*0x6457c2*/
    aP2 = (int)aP0->aP2; /*0x6457ce*/
    result = (*(int (**)(int, int *, int, unsigned int))(v4 + 16))(aP1, &aP2, 4, 0); /*0x6457d2*/
    if ( result >= 0 ) /*0x6457d7*/
    {
      v5 = 0; /*0x6457dd*/
      if ( aP2 > 0 ) /*0x6457e1*/
      {
        v6 = 0; /*0x6457e3*/
        do /*0x645806*/
        {
          if ( (*(int (**)(int, char *, int, unsigned int))(*(unsigned int *)aP1 + 16))( /*0x6457fa*/
                 aP1,
                 (char *)aP0->strength + v6,
                 3,
                 0) < 0 )
            break; /*0x6457fa*/
          ++v5; /*0x645800*/
          v6 += 3; /*0x645801*/
        }
        while ( v5 < aP2 ); /*0x645806*/
      }
      return 0; /*0x645808*/
    }
  }
  return result; /*0x64580a*/

}
} // namespace gamemd

// 0x645910
namespace gamemd {
int ParticleTypeClass::GetObjectSize()
{

  return 792; /*0x645915*/

}
} // namespace gamemd

// 0x645920
namespace gamemd {
int ParticleTypeClass::GetTypeIdentifier()
{

  return 23; /*0x645925*/

}
} // namespace gamemd

// 0x645930
namespace gamemd {
char ParticleTypeClass::Stub(int a1, int a2)
{

  return 0; /*0x645932*/

}
} // namespace gamemd

// 0x645940
namespace gamemd {
int ParticleTypeClass::StubReturnFalse(int a1)
{

  return 0; /*0x645942*/

}
} // namespace gamemd
