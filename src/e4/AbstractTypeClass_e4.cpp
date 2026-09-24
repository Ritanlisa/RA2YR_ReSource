// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x410800
int AbstractTypeClass::Constructor(AbstractClass * aP1)
{
  char *v3; // ebx
  int v4; // eax
  char Buffer[16]; // [esp+10h] [ebp-44h] BYREF
  char Destination[48]; // [esp+20h] [ebp-34h] BYREF
  char v8; // [esp+50h] [ebp-4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x410809*/
  v3 = (char *)(&this->vtable46); /*0x410812*/
  this->q024 = 0; /*0x410817*/
  this->UINameLabel = 0; /*0x41081a*/
  this->Name = 0; /*0x41081e*/
  *(_DWORD *)this = &AbstractTypeClass::`vftable'; /*0x410822*/
  this->vtable2 = &AbstractTypeClass::`vftable'; /*0x410829*/
  this->vtable3 = &AbstractTypeClass::`vftable'; /*0x410830*/
  this->vtable4 = &AbstractTypeClass::`vftable'; /*0x410837*/
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
  if ( this == -36 ) /*0x4108ba*/
  {
    Destination[0] = 0; /*0x4108bc*/
  }
  else
  {
    strncpy(Destination, (const char *)(&this->vtable46), 0x30u); /*0x4108ca*/
    v8 = 0; /*0x4108d2*/
  }
  if ( Destination != (char *)(&this->u32_280) ) /*0x4108e0*/
  {
    qmemcpy((void *)(&this->u32_280), Destination, 0x30u); /*0x4108eb*/
    this->q094 = v8; /*0x4108ed*/
  }
  this->UIName = &g_TypeClass_DefaultString; /*0x4108ee*/
  if ( g_AbstractTypePool < dword_A8E970 /*0x410929*/
    || (byte_A8E975 || !dword_A8E970)
    && dword_A8E97C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E968 + 8))(
         &dword_A8E968,
         dword_A8E970 + dword_A8E97C,
         0) )
  {
    v4 = g_AbstractTypePool++; /*0x410936*/
    *((_DWORD *)dword_A8E96C + v4) = this; /*0x410945*/
  }
  return this; /*0x410948*/
}
// 0x4109C0
int AbstractTypeClass::Dtor()
{
  int v2; // eax
  _DWORD *v4; // [esp+4h] [ebp-4h] BYREF

  *this = &AbstractTypeClass::`vftable'; /*0x4109cd*/
  this->vtable2 = &AbstractTypeClass::`vftable'; /*0x4109d3*/
  this->vtable3 = &AbstractTypeClass::`vftable'; /*0x4109da*/
  this->vtable4 = &AbstractTypeClass::`vftable'; /*0x4109e1*/
  v4 = this; /*0x4109ef*/
  v2 = (*(int (__thiscall **)(int *, _DWORD **))(dword_A8E968 + 16))(&dword_A8E968, &v4); /*0x4109f3*/
  if ( v2 != -1 && v2 < g_AbstractTypePool && v2 < --g_AbstractTypePool ) /*0x410a0e*/
  {
    do /*0x410a26*/
    {
      ++v2; /*0x410a16*/
      *((_DWORD *)dword_A8E96C + v2 - 1) = *((_DWORD *)dword_A8E96C + v2); /*0x410a1a*/
    }
    while ( v2 < g_AbstractTypePool ); /*0x410a26*/
  }
  return AbstractClass::DTOR(this); /*0x410a2f*/
}
// 0x410A60
int AbstractTypeClass::LoadFromINI(AbstractTypeClass * aP1)
{
  char *v3; // edi
  char *v4; // ebp
  char Destination[48]; // [esp+Ch] [ebp-434h] BYREF
  char v7; // [esp+3Ch] [ebp-404h]
  char Source[1024]; // [esp+40h] [ebp-400h] BYREF

  INIClass::ResetSection(aP1); /*0x410a74*/
  if ( !INIClass::BinarySearchSection((int)aP1, (unsigned __int8 *)(&this->vtable46)) ) /*0x410a7f*/
    return 0; /*0x410b7f*/
  v3 = (char *)(&this->u32_280); /*0x410a91*/
  INIClass::GetString( /*0x410aa0*/
    aP1,
    (unsigned __int8 *)(&this->vtable46),
    (unsigned __int8 *)g_INI_Key_Name,
    (char *)(&this->u32_280),
    Source,
    49);
  if ( Source ) /*0x410aab*/
  {
    strncpy(Destination, Source, 0x30u); /*0x410abf*/
    v7 = 0; /*0x410ac7*/
  }
  else
  {
    Destination[0] = (unsigned __int8)Source; /*0x410aad*/
  }
  if ( Destination != v3 ) /*0x410ad2*/
  {
    qmemcpy(v3, Destination, 0x30u); /*0x410add*/
    this->q094 = v7; /*0x410adf*/
  }
  v4 = (char *)(&this->nextArrayIndex1); /*0x410aeb*/
  INIClass::GetString( /*0x410afb*/
    aP1,
    (unsigned __int8 *)(&this->vtable46),
    (unsigned __int8 *)g_INI_Key_UIName,
    (char *)(&this->nextArrayIndex1),
    Source,
    32);
  if ( Source ) /*0x410b06*/
  {
    strncpy(Destination, Source, 0x1Fu); /*0x410b1a*/
    Destination[31] = 0; /*0x410b22*/
  }
  else
  {
    Destination[0] = (unsigned __int8)Source; /*0x410b08*/
  }
  if ( Destination != v4 ) /*0x410b2d*/
    qmemcpy(v4, Destination, 0x20u); /*0x410b3a*/
  if ( *v4 ) /*0x410b3c*/
    this->UIName = GetStringCSF((wchar_t *)(&this->nextArrayIndex1), 0, aDRa2mdpostAbst, 215); /*0x410b58*/
  else
    this->UIName = &g_TypeClass_DefaultString; /*0x410b69*/
  return 1; /*0x410b57*/
}
// 0x410C30
AbstractTypeClass * AbstractTypeClass::ddtor(char a2)
{
  int v3; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  *this = &AbstractTypeClass::`vftable'; /*0x410c3d*/
  this->vtable2 = &AbstractTypeClass::`vftable'; /*0x410c43*/
  this->vtable3 = &AbstractTypeClass::`vftable'; /*0x410c4a*/
  this->vtable4 = &AbstractTypeClass::`vftable'; /*0x410c51*/
  v5 = this; /*0x410c5f*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(dword_A8E968 + 16))(&dword_A8E968, &v5); /*0x410c63*/
  if ( v3 != -1 && v3 < g_AbstractTypePool && v3 < --g_AbstractTypePool ) /*0x410c7e*/
  {
    do /*0x410c96*/
    {
      ++v3; /*0x410c86*/
      *((_DWORD *)dword_A8E96C + v3 - 1) = *((_DWORD *)dword_A8E96C + v3); /*0x410c8a*/
    }
    while ( v3 < g_AbstractTypePool ); /*0x410c96*/
  }
  AbstractClass::DTOR(this); /*0x410c9a*/
  if ( (a2 & 1) != 0 ) /*0x410ca4*/
    __3_YAXPAX_Z(this); /*0x410ca7*/
  return this; /*0x410cb1*/
}
// 0x410960
int AbstractTypeClass::Init(AbstractTypeClass * aP1)
{
  char v3; // al

  AbstractClass::InitVtables((_DWORD *)this, aP1); /*0x410968*/
  v3 = this->UINameLabel; /*0x41096d*/
  *(_DWORD *)this = &AbstractTypeClass::`vftable'; /*0x410975*/
  this->vtable2 = &AbstractTypeClass::`vftable'; /*0x41097b*/
  this->vtable3 = &AbstractTypeClass::`vftable'; /*0x410982*/
  this->vtable4 = &AbstractTypeClass::`vftable'; /*0x410989*/
  if ( v3 ) /*0x410990*/
    this->UIName = GetStringCSF((wchar_t *)(&this->nextArrayIndex1), 0, aDRa2mdpostAbst, 127); /*0x4109a0*/
  else
    this->UIName = &g_TypeClass_DefaultString; /*0x4109a9*/
  return this; /*0x4109a5*/
}
// 0x410A40
BOOL AbstractTypeClass::NameEquals(void * a2)
{
  return _strcmpi(a2, (const void *)(&this->vtable46)) == 0; /*0x410a56*/
}
// 0x410B90
char AbstractTypeClass::WriteINI(CCINIClass * aP1)
{
  unsigned __int8 *v3; // edi

  v3 = (unsigned __int8 *)(&this->vtable46); /*0x410b9b*/
  INIClass::ClearSection((int)aP1, (int)(&this->vtable46), 0); /*0x410ba1*/
  INIClass::SetString(aP1, v3, g_INI_Key_Name, &this->u32_280); /*0x410bb2*/
  if ( *(&this->nextArrayIndex1) ) /*0x410bb7*/
    INIClass::SetString(aP1, v3, g_INI_Key_UIName, &this->nextArrayIndex1); /*0x410bca*/
  return 1; /*0x410bcf*/
}
// 0x410BE0
int AbstractTypeClass::ProcessPower(AbstractClass * aP1)
{
  AbstractClass::ProcessPower((int)this, aP1); /*0x410be9*/
  Checksum::AddString(&this->vtable46); /*0x410bf4*/
  Checksum::AddString(&this->u32_280); /*0x410bff*/
  return Checksum::AddString(&this->nextArrayIndex1); /*0x410c0f*/
}
// 0x410C20
int AbstractTypeClass::StubReturnFalse()
{
  int result; // eax

  return result; /*0x410c20*/
}
// 0x5F75B0
int AbstractTypeClass::GetData()
{
  return 0; /*0x5f75b2*/
}
// 0x5F7610
int AbstractTypeClass::GetType(int a1)
{
  return 0; /*0x5f7612*/
}
// 0x5F7620
int AbstractTypeClass::SetType()
{
  return 0; /*0x5f7622*/
}
// 0x5F7630
int AbstractTypeClass::Validate()
{
  return 0; /*0x5f7632*/
}