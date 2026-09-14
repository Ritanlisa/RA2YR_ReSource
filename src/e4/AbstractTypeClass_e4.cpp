// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x410800
int AbstractTypeClass::Constructor(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AbstractTypeClass::Constructor(int this, AbstractClass *aP1)
{
  RandomStruct *v3; // ebx
  int v4; // eax
  char Buffer[16]; // [esp+10h] [ebp-44h] BYREF
  char Destination[48]; // [esp+20h] [ebp-34h] BYREF
  char v8; // [esp+50h] [ebp-4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x410809*/
  v3 = (RandomStruct *)(this + 36); /*0x410812*/
  *(_BYTE *)(this + 36) = 0; /*0x410817*/
  *(_BYTE *)(this + 61) = 0; /*0x41081a*/
  *(_BYTE *)(this + 100) = 0; /*0x41081e*/
  *(_DWORD *)this = &AbstractTypeClass::`vftable'; /*0x410822*/
  this->vtable1 = &AbstractTypeClass::`vftable'; /*0x410829*/
  this->vtable2 = &AbstractTypeClass::`vftable'; /*0x410830*/
  this->vtable3 = &vt_AbstractTypeClass; /*0x410837*/
  if ( aP1 ) /*0x41083e*/
  {
    strncpy(Destination, aP1->__pad_0, (IUnknown *)0x18); /*0x410895*/
    Destination[24] = 0; /*0x4108a3*/
    if ( Destination == (char *)v3 ) /*0x4108a8*/
      goto LABEL_9; /*0x4108a8*/
    goto LABEL_8; /*0x4108a8*/
  }
  sprintf(Buffer, &stru_817828, (INIClass *)this); /*0x41084b*/
  if ( Buffer ) /*0x410859*/
  {
    strncpy(Destination, Buffer, (IUnknown *)0x18); /*0x41086d*/
    Destination[24] = 0; /*0x410875*/
  }
  else
  {
    Destination[0] = 0; /*0x41085b*/
  }
  if ( Destination != (char *)v3 ) /*0x410880*/
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
    strncpy(Destination, (const char *)(this + 36), (IUnknown *)0x30); /*0x4108ca*/
    v8 = 0; /*0x4108d2*/
  }
  if ( Destination != (char *)(this + 100) ) /*0x4108e0*/
  {
    qmemcpy((void *)(this + 100), Destination, 0x30u); /*0x4108eb*/
    *(_BYTE *)(this + 148) = v8; /*0x4108ed*/
  }
  this->UIName = &stru_87C374.__pad_579C[23588]; /*0x4108ee*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22212] < *(int *)&HouseClass_Player.__pad_5568[22204] /*0x410929*/
    || (HouseClass_Player.__pad_5568[22209] || !*(_DWORD *)&HouseClass_Player.__pad_5568[22204])
    && *(int *)&HouseClass_Player.__pad_5568[22216] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[22196] + 8))(
         &HouseClass_Player.__pad_5568[22196],
         *(_DWORD *)&HouseClass_Player.__pad_5568[22204] + *(_DWORD *)&HouseClass_Player.__pad_5568[22216],
         0) )
  {
    v4 = (*(_DWORD *)&HouseClass_Player.__pad_5568[22212])++; /*0x410936*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22200] + 4 * v4) = this; /*0x410945*/
  }
  return this; /*0x410948*/
}
}

// 0x410960
int AbstractTypeClass::Init(AbstractTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AbstractTypeClass::Init(int this, AbstractTypeClass *aP1)
{
  char v3; // al

  AbstractClass::InitVtables((_DWORD *)this, (int)aP1); /*0x410968*/
  v3 = (unsigned char)this->UINameLabel; /*0x41096d*/
  *(_DWORD *)this = &AbstractTypeClass::`vftable'; /*0x410975*/
  this->vtable1 = &AbstractTypeClass::`vftable'; /*0x41097b*/
  this->vtable2 = &AbstractTypeClass::`vftable'; /*0x410982*/
  this->vtable3 = &vt_AbstractTypeClass; /*0x410989*/
  if ( v3 ) /*0x410990*/
    this->UIName = GetStringCSF((wchar_t *)(this + 61), 0, MEMORY[0x817830], 127); /*0x4109a0*/
  else
    this->UIName = &MEMORY[0x87F8E4].__pad_5568[10472]; /*0x4109a9*/
  return this; /*0x4109a5*/
}
}

// 0x4109C0
int AbstractTypeClass::Dtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AbstractTypeClass_Dtor(_DWORD *this)
{
  int v2; // eax
  _DWORD *v4; // [esp+4h] [ebp-4h] BYREF

  *this = &AbstractTypeClass::`vftable'; /*0x4109cd*/
  *(this + 1) = &AbstractTypeClass::`vftable'; /*0x4109d3*/
  *(this + 2) = &AbstractTypeClass::`vftable'; /*0x4109da*/
  *(this + 3) = &vt_AbstractTypeClass; /*0x4109e1*/
  v4 = this; /*0x4109ef*/
  v2 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xA8E968] + 16))(&MEMORY[0xA8E968], &v4); /*0x4109f3*/
  if ( v2 != -1 && v2 < MEMORY[0xA8E978] && v2 < --MEMORY[0xA8E978] ) /*0x410a0e*/
  {
    do /*0x410a26*/
    {
      ++v2; /*0x410a16*/
      *((_DWORD *)MEMORY[0xA8E96C] + v2 - 1) = *((_DWORD *)MEMORY[0xA8E96C] + v2); /*0x410a1a*/
    }
    while ( v2 < MEMORY[0xA8E978] ); /*0x410a26*/
  }
  return AbstractClass::DTOR(this); /*0x410a2f*/
}
}

// 0x410A40
BOOL AbstractTypeClass::NameEquals(void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall AbstractTypeClass::NameEquals(int this, void *a2)
{
  return _strcmpi(a2, (const void *)(this + 36)) == 0; /*0x410a56*/
}
}

// 0x410A60
char AbstractTypeClass::LoadFromINI(AbstractTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall AbstractTypeClass::LoadFromINI(int this, AbstractTypeClass *aP1)
{
  CCINIClass *v3; // edi
  char *v4; // ebp
  char Destination[48]; // [esp+Ch] [ebp-434h] BYREF
  char v7; // [esp+3Ch] [ebp-404h]
  INIClass Source[16]; // [esp+40h] [ebp-400h] BYREF

  INIClass::ResetSection(aP1); /*0x410a74*/
  if ( !INIClass::BinarySearchSection((int)aP1, (INIClass *)(this + 36)) ) /*0x410a7f*/
    return 0; /*0x410b7f*/
  v3 = (CCINIClass *)(this + 100); /*0x410a91*/
  INIClass::GetString( /*0x410aa0*/
    (unsigned __int8 ***)aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&MEMORY[0x81784C].headNode[1],
    (INIClass *)(this + 100),
    Source,
    49);
  if ( Source ) /*0x410aab*/
  {
    strncpy(Destination, Source[0].__pad_0, 0x30u); /*0x410abf*/
    v7 = 0; /*0x410ac7*/
  }
  else
  {
    Destination[0] = (unsigned __int8)Source; /*0x410aad*/
  }
  if ( Destination != (char *)v3 ) /*0x410ad2*/
  {
    qmemcpy(v3, Destination, 0x30u); /*0x410add*/
    *(_BYTE *)(this + 148) = v7; /*0x410adf*/
  }
  v4 = (char *)(this + 61); /*0x410aeb*/
  INIClass::GetString( /*0x410afb*/
    (unsigned __int8 ***)aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&MEMORY[0x81784C],
    (INIClass *)(this + 61),
    Source,
    32);
  if ( Source ) /*0x410b06*/
  {
    strncpy(Destination, Source[0].__pad_0, 0x1Fu); /*0x410b1a*/
    Destination[31] = 0; /*0x410b22*/
  }
  else
  {
    Destination[0] = (unsigned __int8)Source; /*0x410b08*/
  }
  if ( Destination != v4 ) /*0x410b2d*/
    qmemcpy(v4, Destination, 0x20u); /*0x410b3a*/
  if ( *v4 ) /*0x410b3c*/
    this->UIName = GetStringCSF((wchar_t *)(this + 61), 0, MEMORY[0x817830], 215); /*0x410b58*/
  else
    this->UIName = &MEMORY[0x87F8E4].__pad_5568[10472]; /*0x410b69*/
  return 1; /*0x410b57*/
}
}

// 0x410B90
char AbstractTypeClass::WriteINI(CCINIClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall AbstractTypeClass::WriteINI(char *this, CCINIClass *aP1)
{
  INIClass *v3; // edi

  v3 = (INIClass *)(this + 36); /*0x410b9b*/
  INIClass::ClearSection((int)aP1, (INIClass *)(this + 36), 0); /*0x410ba1*/
  INIClass::SetString(aP1->__pad_0, v3, (INIClass *)&stru_817828.fallRate, (INIClass *)(this + 100)); /*0x410bb2*/
  if ( *(this + 61) ) /*0x410bb7*/
    INIClass::SetString(aP1->__pad_0, v3, (INIClass *)&stru_817828.objectTypeFlags, (INIClass *)(this + 61)); /*0x410bca*/
  return 1; /*0x410bcf*/
}
}

// 0x410BE0
int AbstractTypeClass::ProcessPower(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AbstractTypeClass::ProcessPower(char *this, AbstractClass *aP1)
{
  AbstractClass::ProcessPower((#378 *)this); /*0x410be9*/
  Checksum::AddString((unsigned int *)aP1, (AbstractClass *)this + 1); /*0x410bf4*/
  Checksum::AddString((unsigned int *)aP1, (AbstractClass *)(this + 100)); /*0x410bff*/
  return Checksum::AddString((unsigned int *)aP1, (AbstractClass *)(this + 61)); /*0x410c0f*/
}
}

// 0x410C30
AbstractTypeClass * AbstractTypeClass::ddtor(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
AbstractTypeClass *__thiscall AbstractTypeClass::ddtor(_DWORD *this, char a2)
{
  int v3; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  *this = &AbstractTypeClass::`vftable'; /*0x410c3d*/
  *(this + 1) = &AbstractTypeClass::`vftable'; /*0x410c43*/
  *(this + 2) = &AbstractTypeClass::`vftable'; /*0x410c4a*/
  *(this + 3) = &vt_AbstractTypeClass; /*0x410c51*/
  v5 = this; /*0x410c5f*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xA8E968] + 16))(&MEMORY[0xA8E968], &v5); /*0x410c63*/
  if ( v3 != -1 && v3 < MEMORY[0xA8E978] && v3 < --MEMORY[0xA8E978] ) /*0x410c7e*/
  {
    do /*0x410c96*/
    {
      ++v3; /*0x410c86*/
      *((_DWORD *)MEMORY[0xA8E96C] + v3 - 1) = *((_DWORD *)MEMORY[0xA8E96C] + v3); /*0x410c8a*/
    }
    while ( v3 < MEMORY[0xA8E978] ); /*0x410c96*/
  }
  AbstractClass::DTOR(this); /*0x410c9a*/
  if ( (a2 & 1) != 0 ) /*0x410ca4*/
    __3_YAXPAX_Z(this); /*0x410ca7*/
  return (AbstractTypeClass *)this; /*0x410cb1*/
}
}

// 0x410C20
int AbstractTypeClass::StubReturnFalse()
{
{
    int result;
    return result;
}
}

// 0x5F75B0
int AbstractTypeClass::GetData()
{
return 0;
}

// 0x5F7610
int AbstractTypeClass::GetType(int a1)
{
return 0;
}

// 0x5F7620
int AbstractTypeClass::SetType()
{
return 0;
}

// 0x5F7630
int AbstractTypeClass::Validate()
{
return 0;
}
