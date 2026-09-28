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

// 0x410800
namespace gamemd {
int AbstractTypeClass::Constructor(AbstractClass * aP1)
{
  char *v3; // ebx
  int v4; // eax
  char Buffer[16]; // [esp+10h] [ebp-44h] BYREF
  char Destination[48]; // [esp+20h] [ebp-34h] BYREF
  char v8; // [esp+50h] [ebp-4h]

  AbstractClass::Constructor(); /*0x410809*/
  v3 = &this->q024; /*0x410812*/
  this->q024 = 0; /*0x410817*/
  this->UINameLabel = 0; /*0x41081a*/
  this->Name = 0; /*0x41081e*/
  *(unsigned int *)this = (int)&AbstractTypeClass_vftable; /*0x410822*/
  this->vtable2 = (int)&AbstractTypeClass_vftable; /*0x410829*/
  this->vtable3 = (int)&AbstractTypeClass_vftable; /*0x410830*/
  this->vtable4 = (int)&AbstractTypeClass_vftable; /*0x410837*/
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
    this->zero_3C = Destination[24]; /*0x4108b7*/
  }
  LABEL_9:
  if ( this == (int *)-36 ) /*0x4108ba*/
  {
    Destination[0] = 0; /*0x4108bc*/
  }
  else
  {
    strncpy(Destination, (const char *)&this->q090, 0x30u); /*0x4108ca*/
    v8 = 0; /*0x4108d2*/
  }
  if ( Destination != (char *)(&this->vtable35) ) /*0x4108e0*/
  {
    qmemcpy(&this->Name, Destination, 0x30u); /*0x4108eb*/
    this->q094 = v8; /*0x4108ed*/
  }
  *(&this->vtable34) = (int)&g_TypeClass_DefaultString; /*0x4108ee*/
  if ( g_AbstractTypePool < dword_A8E970 /*0x410929*/
    || (byte_A8E975 || !dword_A8E970)
    && dword_A8E97C > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_A8E968 + 8))(
         &dword_A8E968,
         dword_A8E970 + dword_A8E97C,
         0) )
  {
    v4 = (unsigned int)(g_AbstractTypePool++);
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

  this->vtable0 = (unsigned int)((void*)&AbstractTypeClass_vftable);
  this->vtable1 = (void*)&AbstractTypeClass_vftable; /*0x4109d3*/
  this->vtable2 = (void*)&AbstractTypeClass_vftable; /*0x4109da*/
  this->vtable3 = (void*)&AbstractTypeClass_vftable; /*0x4109e1*/
  v4 = this; /*0x4109ef*/
  v2 = (*(int (__thiscall **)(unsigned int *, AbstractTypeClass **))(dword_A8E968 + 16))(&dword_A8E968, &v4); /*0x4109f3*/
  if ( v2 != -1 && v2 < dword_A8E978 && v2 < --dword_A8E978 ) /*0x410a0e*/
  {
    do /*0x410a26*/
    {
      ++v2; /*0x410a16*/
      *((unsigned int *)unk_A8E96C + v2 - 1) = *((unsigned int *)unk_A8E96C + v2); /*0x410a1a*/
    }
    while ( v2 < dword_A8E978 ); /*0x410a26*/
  }
  return AbstractClass::DTOR(); /*0x410a2f*/
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
      this->Name[48] = v7; /*0x410adf*/
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
    IDA_LOBYTE(result) = 1; /*0x410b5c*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x410b7f*/
  }
  return result; /*0x410b57*/
}
} // namespace gamemd
// 0x410C30
namespace gamemd {
AbstractTypeClass * AbstractTypeClass::ddtor(char a2)
{
  int v3; // eax
  AbstractTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->vtable0 = (unsigned int)((void*)&AbstractTypeClass_vftable);
  this->vtable1 = (void*)&AbstractTypeClass_vftable; /*0x410c43*/
  this->vtable2 = (void*)&AbstractTypeClass_vftable; /*0x410c4a*/
  this->vtable3 = (void*)&AbstractTypeClass_vftable; /*0x410c51*/
  v5 = this; /*0x410c5f*/
  v3 = (*(int (__thiscall **)(unsigned int *, AbstractTypeClass **))(dword_A8E968 + 16))(&dword_A8E968, &v5); /*0x410c63*/
  if ( v3 != -1 && v3 < dword_A8E978 && v3 < --dword_A8E978 ) /*0x410c7e*/
  {
    do /*0x410c96*/
    {
      ++v3; /*0x410c86*/
      *((unsigned int *)unk_A8E96C + v3 - 1) = *((unsigned int *)unk_A8E96C + v3); /*0x410c8a*/
    }
    while ( v3 < dword_A8E978 ); /*0x410c96*/
  }
  AbstractClass::DTOR(); /*0x410c9a*/
  if ( (a2 & 1) != 0 ) /*0x410ca4*/
    RA2_OPDEL(); /*0x410ca7*/
  return &this->vtable0; /*0x410cb1*/
}
} // namespace gamemd
// 0x410960
namespace gamemd {
int AbstractTypeClass::Init(AbstractTypeClass * aP1)
{
  char v3; // al

  AbstractClass::InitVtables(aP1); /*0x410968*/
  v3 = this->UINameLabel; /*0x41096d*/
  *(unsigned int *)this = (void*)&AbstractTypeClass_vftable; /*0x410975*/
  this->vtable2 = (void*)&AbstractTypeClass_vftable; /*0x41097b*/
  this->vtable3 = (void*)&AbstractTypeClass_vftable; /*0x410982*/
  this->vtable4 = (void*)&AbstractTypeClass_vftable; /*0x410989*/
  if ( v3 ) /*0x410990*/
    this->UIName = GetStringCSF((wchar_t *)(&this->nextArrayIndex1), 0, aDRa2mdpostAbst, 127); /*0x4109a0*/
  else
    this->UIName = &g_TypeClass_DefaultString; /*0x4109a9*/
  return this; /*0x4109a5*/
}
} // namespace gamemd
// 0x410A40
namespace gamemd {
BOOL AbstractTypeClass::NameEquals(void * a2)
{
  return _strcmpi(a2, (const void *)(&this->vtable46)) == 0; /*0x410a56*/
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
int AbstractTypeClass::ProcessPower(AbstractClass * aP1)
{
  AbstractClass::ProcessPower(); /*0x410be9*/
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