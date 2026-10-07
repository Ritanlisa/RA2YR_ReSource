// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Checksum_e4.hpp"
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
int AbstractTypeClass::Constructor(char *aP1)
{

  char *v3; // ebx
  int v4; // eax
  char Buffer[16]; // [esp+10h] [ebp-44h] BYREF
  char Destination[48]; // [esp+20h] [ebp-34h] BYREF
  char v8; // [esp+50h] [ebp-4h]

  ((gamemd::AbstractClass*)((gamemd::AbstractClass*)this))->Constructor(); /*0x410809*/
  v3 = (char *)((char *)this + 9); /*0x410812*/
  *((unsigned char *)this + 36) = 0; /*0x410817*/
  *((unsigned char *)this + 61) = 0; /*0x41081a*/
  *((unsigned char *)this + 100) = 0; /*0x41081e*/
  *this = (int)&vt_AbstractTypeClass; /*0x410822*/
  *((char *)this + 1) = (unsigned int)(int)&vt_AbstractTypeClass;
  *((char *)this + 2) = (unsigned int)(int)&vt_AbstractTypeClass;
  *((char *)this + 3) = (unsigned int)(int)&vt_AbstractTypeClass;
  if ( aP1 ) /*0x41083e*/
  {
    strncpy( (char *)(Destination), (const char *)(aP1), 0x18u); 
    Destination[24] = 0; /*0x4108a3*/
    if ( Destination == v3 ) /*0x4108a8*/
      goto LABEL_9; /*0x4108a8*/
    goto LABEL_8; /*0x4108a8*/
  }
  sprintf(Buffer, "%08X", this); /*0x41084b*/
  if ( Buffer ) /*0x410859*/
  {
    strncpy( (char *)(Destination), (const char *)(Buffer), 0x18u); /*0x41086d*/
    Destination[24] = 0; /*0x410875*/
  }
  else
  {
    Destination[0] = 0; /*0x41085b*/
  }
  if ( Destination != v3 ) /*0x410880*/
  {
LABEL_8:
    qmemcpy( (void *)(v3), (const void *)(Destination), 0x18u); /*0x4108b5*/
    *((unsigned char *)this + 60) = Destination[24]; /*0x4108b7*/
  }
LABEL_9:
  if ( this == (gamemd::AbstractTypeClass *)(int *)-36 ) /*0x4108ba*/
  {
    Destination[0] = 0; /*0x4108bc*/
  }
  else
  {
    strncpy( (char *)(Destination), (const char *)this + 36, 0x30u); /*0x4108ca*/
    v8 = 0; /*0x4108d2*/
  }
  if ( Destination != (char *)((char *)this + 25) ) /*0x4108e0*/
  {
    qmemcpy( (char *)this + 25, (const void *)(Destination), 0x30u); /*0x4108eb*/
    *((unsigned char *)this + 148) = v8; /*0x4108ed*/
  }
  *((char *)this + 24) = (int)&g_TypeClass_DefaultString; /*0x4108ee*/
  if ( dword_A8E978 < dword_A8E970 /*0x410929*/
    || (byte_A8E975 || !dword_A8E970)
    && dword_A8E97C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_A8E968 + 8))(
         (int *)&dword_A8E968,
         dword_A8E970 + dword_A8E97C,
         0) )
  {
    v4 = (unsigned int)(dword_A8E978++);
    *((unsigned int *)dword_A8E96C + v4) = (unsigned int)(this); /*0x410945*/
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

  this->vtable1 = &vt_AbstractTypeClass; /*0x4109cd*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_AbstractTypeClass); /*0x4109d3*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_AbstractTypeClass); /*0x4109da*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_AbstractTypeClass); /*0x4109e1*/
  v4 = this; /*0x4109ef*/
  v2 = (*(int (**)(unsigned int *, AbstractTypeClass **))(dword_A8E968 + 16))( (unsigned int *)(&dword_A8E968), (AbstractTypeClass **)(&v4)); /*0x4109f3*/
  if ( v2 != -1 && v2 < dword_A8E978 && v2 < --dword_A8E978 ) /*0x410a0e*/
  {
    do /*0x410a26*/
    {
      ++v2; /*0x410a16*/
      *((unsigned int *)dword_A8E96C + v2 - 1) = *((unsigned int *)dword_A8E96C + v2); /*0x410a1a*/
    }
    while ( v2 < dword_A8E978 ); /*0x410a26*/
  }
  return ((gamemd::AbstractClass*)this)->DTOR(); /*0x410a2f*/

}
} // namespace gamemd
// 0x410A60
namespace gamemd {
int AbstractTypeClass::LoadFromINI(unsigned __int8 ***aP1)
{

  int result; // eax
  char *Name; // edi
  char *UINameLabel; // ebp
  char Destination[48]; // [esp+Ch] [ebp-434h] BYREF
  char v7; // [esp+3Ch] [ebp-404h]
  char Source[1024]; // [esp+40h] [ebp-400h] BYREF

  INIClass::ResetSection(((INIClass*)((INIClass *)aP1))); /*0x410a74*/
  result = (unsigned int)(gamemd::INIClass *)(int)(INIClass::BinarySearchSection( (INIClass *)((int)aP1), (uint8_t *)this->__pad_24)); 
  if ( result ) /*0x410a86*/
  {
    Name = (char *)(this->Name);
    /*0x410aa0*/
      ((INIClass*)((INIClass *)aP1))->GetString(/*0x410aa0*/ (uint8_t *)this->__pad_24, (uint8_t *)g_INI_Key_Name, this->Name, Source, 49);
    if ( Source ) /*0x410aab*/
    {
      strncpy( (char *)(Destination), (const char *)(Source), 0x30u); /*0x410abf*/
      v7 = 0; /*0x410ac7*/
    }
    else
    {
      Destination[0] = (uint8_t)Source; /*0x410aad*/
    }
    if ( Destination != Name ) /*0x410ad2*/
    {
      qmemcpy( (void *)(Name), (const void *)(Destination), 0x30u); /*0x410add*/
      (&this->Name)[48] = v7; /*0x410adf*/
    }
    UINameLabel = (char *)(this->UINameLabel);
    /*0x410afb*/
      ((INIClass*)((INIClass *)aP1))->GetString(/*0x410afb*/ (uint8_t *)this->__pad_24, (uint8_t *)g_INI_Key_UIName, this->UINameLabel, Source, 32);
    if ( Source ) /*0x410b06*/
    {
      strncpy( (char *)(Destination), (const char *)(Source), 0x1Fu); /*0x410b1a*/
      Destination[31] = 0; /*0x410b22*/
    }
    else
    {
      Destination[0] = (uint8_t)Source; /*0x410b08*/
    }
    result = (int)Destination; /*0x410b27*/
    if ( Destination != UINameLabel ) /*0x410b2d*/
      qmemcpy( (void *)(UINameLabel), (const void *)(Destination), 0x20u); /*0x410b3a*/
    if ( *UINameLabel ) /*0x410b3c*/
    {
      result = (unsigned int)((int)GetStringCSF( (wchar_t *)this->UINameLabel, 0, (const char *)(aDRa2mdpostAbst), 215));
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
AbstractTypeClass * AbstractTypeClass::ddtor(char a2, int aP1, int a3, int a4, int a5, int a6, int a7, int a8, int a1)
{

  int v3; // eax
  AbstractTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->vtable1 = &vt_AbstractTypeClass; /*0x410c3d*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_AbstractTypeClass); /*0x410c43*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_AbstractTypeClass); /*0x410c4a*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_AbstractTypeClass); /*0x410c51*/
  v5 = (gamemd::AbstractTypeClass *)(this); /*0x410c5f*/
  v3 = (*(int (**)(unsigned int *, AbstractTypeClass **))(dword_A8E968 + 16))( (unsigned int *)(&dword_A8E968), (AbstractTypeClass **)(&v5)); /*0x410c63*/
  if ( v3 != -1 && v3 < dword_A8E978 && v3 < --dword_A8E978 ) /*0x410c7e*/
  {
    do /*0x410c96*/
    {
      ++v3; /*0x410c86*/
      *((unsigned int *)dword_A8E96C + v3 - 1) = *((unsigned int *)dword_A8E96C + v3); /*0x410c8a*/
    }
    while ( v3 < dword_A8E978 ); /*0x410c96*/
  }
  ((gamemd::AbstractClass*)((gamemd::AbstractClass*)this))->DTOR(); /*0x410c9a*/
  if ( (a2 & 1) != 0 ) /*0x410ca4*/
    __3_YAXPAX_Z(this); /*0x410ca7*/
  return (AbstractTypeClass *)this; /*0x410cb1*/

}
} // namespace gamemd
// 0x410960
namespace gamemd {
int AbstractTypeClass::Init(int aP1)
{

  char v3; // al

  AbstractClass::InitVtables(((gamemd::AbstractClass*)(unsigned int *)this), aP1); /*0x410968*/
  v3 = this->UINameLabel; /*0x41096d*/
  *(unsigned int *)this = (unsigned int)(&vt_AbstractTypeClass); /*0x410975*/
  this->vtable2 = (void *)(&vt_AbstractTypeClass);
  this->vtable3 = (void *)(&vt_AbstractTypeClass);
  this->vtable4 = (void *)(&vt_AbstractTypeClass);
  if ( v3 ) /*0x410990*/
    this->UIName = (unsigned int)(GetStringCSF( (wchar_t *)((char *)&this->nextArrayIndex1), 0, (const char *)(aDRa2mdpostAbst), 127)); /*0x4109a0*/
  else
    this->UIName = (unsigned int)(&g_TypeClass_DefaultString); /*0x4109a9*/
  return (int)(this); /*0x4109a5*/

}
} // namespace gamemd
// 0x410A40
namespace gamemd {
BOOL AbstractTypeClass::NameEquals(void *a2)
{

  return _strcmpi((const char *)(a2),(const char *)((const void *)((char *)this + 36))) == 0; 

}
} // namespace gamemd
// 0x410B90
namespace gamemd {
char AbstractTypeClass::WriteINI(char *aP1)
{

  uint8_t *pad_24; // edi

  pad_24 = (uint8_t *)this->__pad_24; /*0x410b9b*/
  INIClass::ClearSection((INIClass *)((int *)aP1), (int)this->__pad_24, 0); /*0x410ba1*/
  ((INIClass *)aP1)->SetString( (unsigned __int8 *)(pad_24), (char *)g_INI_Key_Name, (char *)(&this->Name)); /*0x410bb2*/
  if ( (&this->UINameLabel)[0] ) /*0x410bb7*/
    ((INIClass *)aP1)->SetString( (unsigned __int8 *)(pad_24), (char *)g_INI_Key_UIName, (char *)(&this->UINameLabel)); /*0x410bca*/
  return 1; /*0x410bcf*/

}
} // namespace gamemd
// 0x410BE0
namespace gamemd {
int AbstractTypeClass::ProcessPower(int *aP1)
{

  ((gamemd::AbstractClass*)this)->ProcessPower(); /*0x410be9*/
  ((Checksum *)((Checksum *)aP1))->AddString((uint8_t *)this->__pad_24); /*0x410bf4*/
  ((Checksum *)((Checksum *)aP1))->AddString((uint8_t *)this->Name); /*0x410bff*/
  return ((Checksum *)((Checksum *)aP1))->AddString((uint8_t *)this->UINameLabel); /*0x410c0f*/

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
int AbstractTypeClass::GetData(void *a1)
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
