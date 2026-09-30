// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Init_e4.hpp"

// 0x410800
namespace gamemd {
int AbstractTypeClass::Constructor( AbstractClass * aP1)
{

  char *v3; // ebx
  int v4; // eax
  char Buffer[16]; // [esp+10h] [ebp-44h] BYREF
  char Destination[48]; // [esp+20h] [ebp-34h] BYREF
  char v8; // [esp+50h] [ebp-4h]

  ((AbstractClass *)((AbstractClass *)this))->Constructor(); /*0x410809*/
  v3 = (char *)((char *)this + 9); /*0x410812*/
  *((unsigned char *)this + 36) = 0; /*0x410817*/
  *((unsigned char *)this + 61) = 0; /*0x41081a*/
  *((unsigned char *)this + 100) = 0; /*0x41081e*/
  *this = (int)&AbstractTypeClass::`vftable'; /*0x410822*/
  *((char *)this + 1) = (int)&AbstractTypeClass::`vftable'; /*0x410829*/
  *((char *)this + 2) = (int)&AbstractTypeClass::`vftable'; /*0x410830*/
  *((char *)this + 3) = (int)&AbstractTypeClass::`vftable'; /*0x410837*/
  if ( aP1 ) /*0x41083e*/
  {
    strncpy(Destination, aP1, 0x18u); /*0x410895*/
    Destination[24] = 0; /*0x4108a3*/
    if ( Destination == v3 ) /*0x4108a8*/
      goto LABEL_9; /*0x4108a8*/
    goto LABEL_8; /*0x4108a8*/
  }
  sprintf(Buffer, "%08X", this); /*0x41084b*/
  if ( Buffer ) /*0x410859*/
  {
    strncpy(Destination, Buffer, 0x18u); /*0x41086d*/
    Destination[24] = 0; /*0x410875*/
  }
  else
  {
    Destination[0] = 0; /*0x41085b*/
  }
  if ( Destination != v3 ) /*0x410880*/
  {
LABEL_8:
    qmemcpy(v3, Destination, 0x18u); /*0x4108b5*/
    *((unsigned char *)this + 60) = Destination[24]; /*0x4108b7*/
  }
LABEL_9:
  if ( this == (gamemd::AbstractTypeClass *)((int *))-36 ) /*0x4108ba*/
  {
    Destination[0] = 0; /*0x4108bc*/
  }
  else
  {
    strncpy(Destination, (const char *)this + 36, 0x30u); /*0x4108ca*/
    v8 = 0; /*0x4108d2*/
  }
  if ( Destination != (char *)((char *)this + 25) ) /*0x4108e0*/
  {
    qmemcpy((char *)this + 25, Destination, 0x30u); /*0x4108eb*/
    *((unsigned char *)this + 148) = v8; /*0x4108ed*/
  }
  *((char *)this + 24) = (int)&g_TypeClass_DefaultString; /*0x4108ee*/
  if ( dword_A8E978 < dword_A8E970 /*0x410929*/
    || (byte_A8E975 || !dword_A8E970)
    && dword_A8E97C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_A8E968 + 8))(
         &dword_A8E968,
         dword_A8E970 + dword_A8E97C,
         0) )
  {
    v4 = (unsigned int)(dword_A8E978++);
    *((unsigned int *)dword_A8E96C + v4) = this; /*0x410945*/
  }
  return (int)this; /*0x410948*/

}
} // namespace gamemd
// 0x4109C0
namespace gamemd {
int AbstractTypeClass::Dtor()
{

  int v2; // eax
  AbstractTypeClass *v4; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &AbstractTypeClass::`vftable'; /*0x4109cd*/
  this->? = &AbstractTypeClass::`vftable'; /*0x4109d3*/
  this->? = &AbstractTypeClass::`vftable'; /*0x4109da*/
  this->? = &AbstractTypeClass::`vftable'; /*0x4109e1*/
  v4 = this; /*0x4109ef*/
  v2 = (*(int (**)(unsigned int *, AbstractTypeClass **))(dword_A8E968 + 16))(&dword_A8E968, &v4); /*0x4109f3*/
  if ( v2 != -1 && v2 < dword_A8E978 && v2 < --dword_A8E978 ) /*0x410a0e*/
  {
    do /*0x410a26*/
    {
      ++v2; /*0x410a16*/
      *((unsigned int *)dword_A8E96C + v2 - 1) = *((unsigned int *)dword_A8E96C + v2); /*0x410a1a*/
    }
    while ( v2 < dword_A8E978 ); /*0x410a26*/
  }
  return AbstractClass::DTOR((AbstractClass *)this); /*0x410a2f*/

}
} // namespace gamemd
// 0x410A60
namespace gamemd {
int AbstractTypeClass::LoadFromINI(AbstractTypeClass * aP1)
{

  int result; // eax
  char *Name; // edi
  char *UINameLabel; // ebp
  char Destination[48]; // [esp+Ch] [ebp-434h] BYREF
  char v7; // [esp+3Ch] [ebp-404h]
  char Source[1024]; // [esp+40h] [ebp-400h] BYREF

  INIClass::ResetSection((INIClass *)aP1); /*0x410a74*/
  result = INIClass::BinarySearchSection((int)aP1, (uint8_t *)this->__pad_24); /*0x410a7f*/
  if ( result ) /*0x410a86*/
  {
    Name = (char *)(this->Name);
    INIClass::GetString( /*0x410aa0*/
      (INIClass *)aP1,
      (uint8_t *)this->__pad_24,
      (uint8_t *)g_INI_Key_Name,
      this->Name,
      Source,
      49);
    if ( Source ) /*0x410aab*/
    {
      strncpy(Destination, Source, 0x30u); /*0x410abf*/
      v7 = 0; /*0x410ac7*/
    }
    else
    {
      Destination[0] = (uint8_t)Source; /*0x410aad*/
    }
    if ( Destination != Name ) /*0x410ad2*/
    {
      qmemcpy(Name, Destination, 0x30u); /*0x410add*/
      this-((unsigned int *)(>Name))[48] = v7; /*0x410adf*/
    }
    UINameLabel = (char *)(this->UINameLabel);
    INIClass::GetString( /*0x410afb*/
      (INIClass *)aP1,
      (uint8_t *)this->__pad_24,
      (uint8_t *)g_INI_Key_UIName,
      this->UINameLabel,
      Source,
      32);
    if ( Source ) /*0x410b06*/
    {
      strncpy(Destination, Source, 0x1Fu); /*0x410b1a*/
      Destination[31] = 0; /*0x410b22*/
    }
    else
    {
      Destination[0] = (uint8_t)Source; /*0x410b08*/
    }
    result = (int)Destination; /*0x410b27*/
    if ( Destination != UINameLabel ) /*0x410b2d*/
      qmemcpy(UINameLabel, Destination, 0x20u); /*0x410b3a*/
    if ( *UINameLabel ) /*0x410b3c*/
    {
      result = (unsigned int)((int)GetStringCSF((wchar_t *)this->UINameLabel, 0, aDRa2mdpostAbst, 215));
      this->UIName = (unsigned int)((void *)result);
    }
    else
    {
      this->UIName = (unsigned int)(&g_TypeClass_DefaultString);
    }
    LOBYTE(result) = 1; /*0x410b5c*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x410b7f*/
  }
  return result; /*0x410b57*/

}
} // namespace gamemd
// 0x410C30
namespace gamemd {
AbstractTypeClass * AbstractTypeClass::ddtor(unsigned int * Block, char a2)
{

  int v3; // eax
  AbstractTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  Block->AbstractClass = &AbstractTypeClass::`vftable'; /*0x410c3d*/
  Block->? = &AbstractTypeClass::`vftable'; /*0x410c43*/
  Block->? = &AbstractTypeClass::`vftable'; /*0x410c4a*/
  Block->? = &AbstractTypeClass::`vftable'; /*0x410c51*/
  v5 = Block; /*0x410c5f*/
  v3 = (*(int (**)(unsigned int *, AbstractTypeClass **))(dword_A8E968 + 16))(&dword_A8E968, &v5); /*0x410c63*/
  if ( v3 != -1 && v3 < dword_A8E978 && v3 < --dword_A8E978 ) /*0x410c7e*/
  {
    do /*0x410c96*/
    {
      ++v3; /*0x410c86*/
      *((unsigned int *)dword_A8E96C + v3 - 1) = *((unsigned int *)dword_A8E96C + v3); /*0x410c8a*/
    }
    while ( v3 < dword_A8E978 ); /*0x410c96*/
  }
  AbstractClass::DTOR((AbstractClass *)Block); /*0x410c9a*/
  if ( (a2 & 1) != 0 ) /*0x410ca4*/
    __3_YAXPAX_Z(Block); /*0x410ca7*/
  return &Block->AbstractClass; /*0x410cb1*/

}
} // namespace gamemd
// 0x410960
namespace gamemd {
int AbstractTypeClass::Init( AbstractTypeClass * aP1)
{

  char v3; // al

  AbstractClass::InitVtables((unsigned int *)this, aP1); /*0x410968*/
  v3 = *((unsigned char *)this + 61); /*0x41096d*/
  *(unsigned int *)this = &AbstractTypeClass::`vftable'; /*0x410975*/
  *((unsigned int *)this + 1) = &AbstractTypeClass::`vftable'; /*0x41097b*/
  *((unsigned int *)this + 2) = &AbstractTypeClass::`vftable'; /*0x410982*/
  *((unsigned int *)this + 3) = &AbstractTypeClass::`vftable'; /*0x410989*/
  if ( v3 ) /*0x410990*/
    *((unsigned int *)this + 24) = GetStringCSF((wchar_t *)((char *)this + 61), 0, aDRa2mdpostAbst, 127); /*0x4109a0*/
  else
    *((unsigned int *)this + 24) = &g_TypeClass_DefaultString; /*0x4109a9*/
  return this; /*0x4109a5*/

}
} // namespace gamemd
// 0x410A40
namespace gamemd {
BOOL AbstractTypeClass::NameEquals(void * a2)
{

  return _strcmpi(a2, (const void *)((char *)this + 36)) == 0; /*0x410a56*/

}
} // namespace gamemd
// 0x410B90
namespace gamemd {
char AbstractTypeClass::WriteINI(CCINIClass * aP1)
{

  uint8_t *pad_24; // edi

  pad_24 = (uint8_t *)this->__pad_24; /*0x410b9b*/
  INIClass::ClearSection((int *)aP1, (int)this->__pad_24, 0); /*0x410ba1*/
  INIClass::SetString(aP1, pad_24, g_INI_Key_Name, this->Name); /*0x410bb2*/
  if ( this->UINameLabel[0] ) /*0x410bb7*/
    INIClass::SetString(aP1, pad_24, g_INI_Key_UIName, this->UINameLabel); /*0x410bca*/
  return 1; /*0x410bcf*/

}
} // namespace gamemd
// 0x410BE0
namespace gamemd {
int AbstractTypeClass::ProcessPower( AbstractClass * aP1)
{

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x410be9*/
  Checksum::AddString((Checksum *)aP1, (uint8_t *)this->__pad_24); /*0x410bf4*/
  Checksum::AddString((Checksum *)aP1, (uint8_t *)this->Name); /*0x410bff*/
  return Checksum::AddString((Checksum *)aP1, (uint8_t *)this->UINameLabel); /*0x410c0f*/

}
} // namespace gamemd
// 0x410C20
namespace gamemd {
int AbstractTypeClass::StubReturnFalse()
{

  int result; // eax

  return result; /*0x410c20*/

}
} // namespace gamemd
// 0x5F75B0
namespace gamemd {
int AbstractTypeClass::GetData()
{

  return 0; /*0x5f75b2*/

}
} // namespace gamemd
// 0x5F7610
namespace gamemd {
int AbstractTypeClass::GetType(int a1)
{

  return 0; /*0x5f7612*/

}
} // namespace gamemd
// 0x5F7620
namespace gamemd {
int AbstractTypeClass::SetType()
{

  return 0; /*0x5f7622*/

}
} // namespace gamemd
// 0x5F7630
namespace gamemd {
int AbstractTypeClass::Validate()
{

  return 0; /*0x5f7632*/

}
} // namespace gamemd