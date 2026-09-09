// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x474810
namespace gamemd {
int WarheadTypeClass_loadWarheadINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *__thiscall WarheadTypeClass::loadWarheadINI(
        void *this,
        CCINIClass *aP1,
        unsigned __int8 *a2,
        CCINIClass *aP3)
{
  int Int_Overwrite; // eax
  CCINIClass *result; // eax

  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x47481c*/
                    (int)this,
                    (unsigned __int8 *)aP1,
                    (CCINIClass *)a2,
                    (INIClass *)0xFFFFFFFF);
  if ( Int_Overwrite == -1 ) /*0x474824*/
    return aP3; /*0x474826*/
  if ( Int_Overwrite >= 100 ) /*0x474830*/
    Int_Overwrite = 100; /*0x474832*/
  result = (CCINIClass *)(((Int_Overwrite <= 0 ? 0 : Int_Overwrite) << 8) / 100);
  if ( (int)result >= 255 ) /*0x47485c*/
    return (CCINIClass *)255; /*0x47485e*/
  return result; /*0x47482a*/
}
}
} // namespace gamemd

// 0x524ED0
void WarheadTypeClass::GetClassIdentifier()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall WarheadTypeClass::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x524ed6*/
  *(_DWORD *)(this + 16) = 0; /*0x524ed9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x524ee0*/
  {
    __3_YAXPAX_Z(v2); /*0x524ee6*/
    *(_DWORD *)(this + 4) = 0; /*0x524eee*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x524ef1*/
  *(_DWORD *)(this + 8) = 0; /*0x524ef4*/
}
}

// 0x524F00
unsigned int WarheadTypeClass::LoadTypeData(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall WarheadTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x524f00*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x524f15*/
  else
    return 0; /*0x524f07*/
}
}

// 0x524FB0
int WarheadTypeClass::SaveToINI(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WarheadTypeClass::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x524fba*/
}
}

// 0x524FC0
TypeList * WarheadTypeClass::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TypeList *__thiscall WarheadTypeClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x524fc3*/
  *Block = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x524fc6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x524fd0*/
  {
    __3_YAXPAX_Z(v3); /*0x524fd8*/
    *(Block + 1) = 0; /*0x524fe0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x524feb*/
  *(Block + 2) = 0; /*0x524ff1*/
  if ( (a2 & 1) != 0 ) /*0x524ff8*/
    __3_YAXPAX_Z(Block); /*0x524ffb*/
  return (TypeList *)Block; /*0x525005*/
}
}

// 0x5250D0
char WarheadTypeClass::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall WarheadTypeClass::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x5250d2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5250dd*/
  {
    v3 = 0; /*0x5250df*/
    if ( v2 <= 0 ) /*0x5250e3*/
      return 1; /*0x525103*/
    v4 = (_DWORD *)*(this + 1); /*0x5250e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5250eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5250f4*/
    {
      ++v3; /*0x5250f6*/
      ++v4; /*0x5250f7*/
      if ( v3 >= v2 ) /*0x5250fc*/
        return 1; /*0x5250fc*/
    }
  }
  return 0; /*0x5250fe*/
}
}

// 0x525300
char WarheadTypeClass::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall WarheadTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x52530c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x525312*/
    if ( a3 ) /*0x525318*/
      v4 = a3; /*0x52532e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x52532a*/
    *((_BYTE *)this + 12) = 1; /*0x525332*/
    if ( !v4 ) /*0x525336*/
      return 0; /*0x5253aa*/
    if ( *((_DWORD *)this + 1) ) /*0x525338*/
    {
      v5 = *((_DWORD *)this + 2); /*0x52533f*/
      if ( a2 < v5 ) /*0x525344*/
        v5 = a2; /*0x525346*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x52534c*/
        ++i; /*0x525351*/
      if ( *((_BYTE *)this + 13) ) /*0x52535e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x525369*/
        *((_DWORD *)this + 1) = 0; /*0x525371*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x52537a*/
    *((_DWORD *)this + 2) = a2; /*0x525382*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x525385*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x52538e*/
  }
  v7 = *((_DWORD *)this + 2); /*0x525391*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x525399*/
    *((_DWORD *)this + 4) = v7; /*0x52539b*/
  return 1; /*0x52539e*/
}
}

// 0x525400
int WarheadTypeClass::Init(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WarheadTypeClass::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x525400*/
  result = 0; /*0x525403*/
  if ( v2 <= 0 ) /*0x525408*/
    return -1; /*0x52541f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x52540e*/
  {
    if ( ++result >= v2 ) /*0x52541d*/
      return -1; /*0x52541d*/
  }
  return result; /*0x525422*/
}
}

// 0x52AB80
char * WarheadTypeClass::parseVerses()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall WarheadTypeClass::parseVerses(INISection_INIClass *this)
{
  CCINIClass *v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // edx
  int v9; // ecx
  char *result; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // ecx

  v2 = (CCINIClass *)this->field_C; /*0x52ab84*/
  this->field_0 = (int)&INIClass::INISection::`vftable'; /*0x52ab87*/
  free(v2); /*0x52ab8e*/
  this->field_C = 0; /*0x52ab98*/
  while ( 1 ) /*0x52ab9b*/
  {
    v3 = *(_DWORD *)&this->__pad_10[8]; /*0x52ab9b*/
    if ( !v3 || !*(_DWORD *)(v3 + 4) || !*(_DWORD *)(v3 + 8) ) /*0x52aba7*/
      break; /*0x52aba7*/
    (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x52abb4*/
  }
  __3_YAXPAX_Z((void *)this->field_2C); /*0x52abbc*/
  this->field_2C = 0; /*0x52abc1*/
  *((_DWORD *)this + 12) = 0; /*0x52abc4*/
  *((_DWORD *)this + 13) = 0; /*0x52abc7*/
  *((_BYTE *)this + 56) = 0; /*0x52abca*/
  *((_DWORD *)this + 15) = 0; /*0x52abcd*/
  if ( *((_DWORD *)this + 16) ) /*0x52abd0*/
  {
    do /*0x52abfc*/
    {
      free(**((void ***)this + 16)); /*0x52abe1*/
      v4 = *(_DWORD *)(*((_DWORD *)this + 16) + 4); /*0x52abeb*/
      __3_YAXPAX_Z(*((void **)this + 16)); /*0x52abef*/
      *((_DWORD *)this + 16) = v4; /*0x52abf9*/
    }
    while ( v4 ); /*0x52abfc*/
  }
  __3_YAXPAX_Z((void *)this->field_2C); /*0x52ac03*/
  this->field_2C = 0; /*0x52ac08*/
  *((_DWORD *)this + 12) = 0; /*0x52ac0b*/
  *((_DWORD *)this + 13) = 0; /*0x52ac0e*/
  *((_BYTE *)this + 56) = 0; /*0x52ac11*/
  *((_DWORD *)this + 15) = 0; /*0x52ac14*/
  *(_DWORD *)this->__pad_10 = &GenericList::`vftable'; /*0x52ac1a*/
  while ( 1 ) /*0x52ac21*/
  {
    v5 = *(_DWORD *)&this->__pad_10[8]; /*0x52ac21*/
    if ( !v5 ) /*0x52ac26*/
      break; /*0x52ac26*/
    if ( !*(_DWORD *)(v5 + 4) ) /*0x52ac28*/
      break; /*0x52ac28*/
    v6 = *(_DWORD *)(v5 + 8); /*0x52ac2d*/
    if ( !v6 ) /*0x52ac32*/
      break; /*0x52ac32*/
    v7 = *(_DWORD *)(v5 + 4); /*0x52ac38*/
    if ( v7 ) /*0x52ac3d*/
    {
      *(_DWORD *)(v6 + 4) = v7; /*0x52ac43*/
      *(_DWORD *)(*(_DWORD *)(v5 + 4) + 8) = *(_DWORD *)(v5 + 8); /*0x52ac4c*/
      *(_DWORD *)(v5 + 8) = 0; /*0x52ac4f*/
      *(_DWORD *)(v5 + 4) = 0; /*0x52ac52*/
    }
  }
  *(_DWORD *)&this->__pad_10[16] = &GenericNode::`vftable'; /*0x52ac5c*/
  if ( this != (INISection_INIClass *)-32 ) /*0x52ac62*/
  {
    v8 = *(_DWORD *)&this->__pad_10[20]; /*0x52ac64*/
    if ( v8 ) /*0x52ac69*/
    {
      v9 = *(_DWORD *)&this->__pad_10[24]; /*0x52ac6b*/
      if ( v9 ) /*0x52ac70*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x52ac72*/
        *(_DWORD *)(*(_DWORD *)&this->__pad_10[20] + 8) = *(_DWORD *)&this->__pad_10[24]; /*0x52ac7b*/
        *(_DWORD *)&this->__pad_10[24] = 0; /*0x52ac7e*/
        *(_DWORD *)&this->__pad_10[20] = 0; /*0x52ac81*/
      }
    }
  }
  result = &this->__pad_10[4]; /*0x52ac84*/
  *(_DWORD *)&this->__pad_10[4] = &GenericNode::`vftable'; /*0x52ac89*/
  if ( this != (INISection_INIClass *)-20 ) /*0x52ac8f*/
  {
    v11 = *(_DWORD *)&this->__pad_10[8]; /*0x52ac91*/
    if ( v11 ) /*0x52ac96*/
    {
      v12 = *(_DWORD *)&this->__pad_10[12]; /*0x52ac98*/
      if ( v12 ) /*0x52ac9d*/
      {
        *(_DWORD *)(v12 + 4) = v11; /*0x52ac9f*/
        *(_DWORD *)(*(_DWORD *)&this->__pad_10[8] + 8) = *(_DWORD *)&this->__pad_10[12]; /*0x52aca8*/
        *(_DWORD *)&this->__pad_10[12] = 0; /*0x52acab*/
        *(_DWORD *)&this->__pad_10[8] = 0; /*0x52acae*/
      }
    }
  }
  this->field_0 = (int)&GenericNode::`vftable'; /*0x52acb3*/
  if ( this ) /*0x52acb9*/
  {
    v13 = *(_DWORD *)this->__pad_4; /*0x52acbb*/
    if ( v13 ) /*0x52acc0*/
    {
      result = *(char **)&this->__pad_4[4]; /*0x52acc2*/
      if ( result ) /*0x52acc7*/
      {
        *((_DWORD *)result + 1) = v13; /*0x52acc9*/
        result = *(char **)this->__pad_4; /*0x52accc*/
        *((_DWORD *)result + 2) = *(_DWORD *)&this->__pad_4[4]; /*0x52acd2*/
        *(_DWORD *)&this->__pad_4[4] = 0; /*0x52acd5*/
        *(_DWORD *)this->__pad_4 = 0; /*0x52acd8*/
      }
    }
  }
  return result; /*0x52acdb*/
}
}

// 0x52AD50
void * WarheadTypeClass::parseModifiers(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall WarheadTypeClass::parseModifiers(INIEntry_INIClass *this, char a2)
{
  CCINIClass *v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  void *v9; // [esp-8h] [ebp-10h]

  v3 = (CCINIClass *)this->field_C; /*0x52ad54*/
  *(_DWORD *)this->__pad_0 = &INIClass::INIEntry::`vftable'; /*0x52ad57*/
  free(v3); /*0x52ad5e*/
  v9 = (void *)this->field_10; /*0x52ad68*/
  this->field_C = 0; /*0x52ad69*/
  free(v9); /*0x52ad6c*/
  v4 = *(_DWORD *)this->__pad_14; /*0x52ad71*/
  this->field_10 = 0; /*0x52ad79*/
  if ( v4 ) /*0x52ad7c*/
  {
    do /*0x52ada0*/
    {
      free(**(void ***)this->__pad_14); /*0x52ad85*/
      v5 = *(_DWORD *)(*(_DWORD *)this->__pad_14 + 4); /*0x52ad8f*/
      __3_YAXPAX_Z(*(void **)this->__pad_14); /*0x52ad93*/
      *(_DWORD *)this->__pad_14 = v5; /*0x52ad9d*/
    }
    while ( v5 ); /*0x52ada0*/
  }
  free((void *)this->field_18); /*0x52ada7*/
  this->field_18 = 0; /*0x52adb1*/
  *(_DWORD *)this->__pad_0 = &GenericNode::`vftable'; /*0x52adb4*/
  if ( this ) /*0x52adba*/
  {
    v6 = *(_DWORD *)&this->__pad_0[4]; /*0x52adbc*/
    if ( v6 ) /*0x52adc1*/
    {
      v7 = *(_DWORD *)&this->__pad_0[8]; /*0x52adc3*/
      if ( v7 ) /*0x52adc8*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x52adca*/
        *(_DWORD *)(*(_DWORD *)&this->__pad_0[4] + 8) = *(_DWORD *)&this->__pad_0[8]; /*0x52add3*/
        *(_DWORD *)&this->__pad_0[8] = 0; /*0x52add6*/
        *(_DWORD *)&this->__pad_0[4] = 0; /*0x52add9*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52ade1*/
    __3_YAXPAX_Z(this); /*0x52ade4*/
  return this; /*0x52adee*/
}
}

// 0x52AE00
WarheadTypeClass * WarheadTypeClass::parseAnimations(char * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
WarheadTypeClass *__thiscall WarheadTypeClass::parseAnimations(char *Block, char a2)
{
  WarheadTypeClass::parseVerses(Block); /*0x52ae03*/
  if ( (a2 & 1) != 0 ) /*0x52ae0d*/
    __3_YAXPAX_Z(Block); /*0x52ae10*/
  return (WarheadTypeClass *)Block; /*0x52ae1a*/
}
}

// 0x52AFC0
GenericList * WarheadTypeClass::ReadParticleSystems(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
GenericList *__thiscall WarheadTypeClass::ReadParticleSystems(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx

  *Block = &GenericList::`vftable'; /*0x52afc6*/
  while ( 1 ) /*0x52afcc*/
  {
    v3 = *(Block + 2); /*0x52afcc*/
    if ( !v3 ) /*0x52afd1*/
      break; /*0x52afd1*/
    if ( !*(_DWORD *)(v3 + 4) ) /*0x52afd3*/
      break; /*0x52afd3*/
    v4 = *(_DWORD *)(v3 + 8); /*0x52afd8*/
    if ( !v4 ) /*0x52afdd*/
      break; /*0x52afdd*/
    v5 = *(_DWORD *)(v3 + 4); /*0x52afe3*/
    if ( v5 ) /*0x52afe8*/
    {
      *(_DWORD *)(v4 + 4) = v5; /*0x52afee*/
      *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 8); /*0x52aff7*/
      *(_DWORD *)(v3 + 8) = 0; /*0x52affa*/
      *(_DWORD *)(v3 + 4) = 0; /*0x52affd*/
    }
  }
  *(Block + 4) = &GenericNode::`vftable'; /*0x52b007*/
  if ( Block != (_DWORD *)-16 ) /*0x52b00d*/
  {
    v6 = *(Block + 5); /*0x52b00f*/
    if ( v6 ) /*0x52b014*/
    {
      v7 = *(Block + 6); /*0x52b016*/
      if ( v7 ) /*0x52b01b*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x52b01d*/
        *(_DWORD *)(*(Block + 5) + 8) = *(Block + 6); /*0x52b026*/
        *(Block + 6) = 0; /*0x52b029*/
        *(Block + 5) = 0; /*0x52b02c*/
      }
    }
  }
  *(Block + 1) = &GenericNode::`vftable'; /*0x52b034*/
  if ( Block != (_DWORD *)-4 ) /*0x52b03a*/
  {
    v8 = *(Block + 2); /*0x52b03c*/
    if ( v8 ) /*0x52b041*/
    {
      v9 = *(Block + 3); /*0x52b043*/
      if ( v9 ) /*0x52b048*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x52b04a*/
        *(_DWORD *)(*(Block + 2) + 8) = *(Block + 3); /*0x52b053*/
        *(Block + 3) = 0; /*0x52b056*/
        *(Block + 2) = 0; /*0x52b059*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52b061*/
    __3_YAXPAX_Z(Block); /*0x52b064*/
  return (GenericList *)Block; /*0x52b06e*/
}
}

// 0x644630
int WarheadTypeClass::applyDamage(ObjectClass * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WarheadTypeClass::applyDamage(ObjectClass *Source)
{
  int v2; // esi
  _DWORD *v3; // eax
  ParticleSystemTypeClass *v4; // eax
  int v6; // ecx
  ParticleSystemTypeClass **i; // edx

  if ( !_strcmpi(Source, &stru_817460.sectionHead[1]) || !strlen(Source->__pad_0) ) /*0x644649*/
    return -1; /*0x644653*/
  v2 = 0; /*0x64465a*/
  if ( *(int *)HouseClass_Player.__pad_2C <= 0 ) /*0x64465e*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0x310u); /*0x644683*/
    if ( v3 ) /*0x644692*/
      v4 = (ParticleSystemTypeClass *)OverlayTypeClass::Construct(v3, Source); /*0x644697*/
    else
      v4 = 0; /*0x6446a4*/
    v6 = 0; /*0x6446ac*/
    if ( *(int *)HouseClass_Player.__pad_2C > 0 ) /*0x6446b0*/
    {
      for ( i = *(ParticleSystemTypeClass ***)&HouseClass_Player.__pad_18[8]; *i != v4; ++i ) /*0x6446b2*/
      {
        if ( ++v6 >= *(int *)HouseClass_Player.__pad_2C ) /*0x6446c2*/
          return -1; /*0x6446c2*/
      }
      return v6; /*0x6446cd*/
    }
    return -1; /*0x6446ca*/
  }
  while ( _strcmpi(Source, (const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_18[8] + 4 * v2) + 36)) ) /*0x644677*/
  {
    if ( ++v2 >= *(int *)HouseClass_Player.__pad_2C ) /*0x644681*/
      goto LABEL_6; /*0x644681*/
  }
  return v2; /*0x6446a0*/
}
}

// 0x672990
int WarheadTypeClass::LoadType()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_672990(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x83A0D0]); /*0x6729a6*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6729ac*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x83A0D0], i); /*0x6729c2*/
    if ( INIClass::GetString( /*0x6729cf*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x83A0D0],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      WarheadTypeClass::FindOrCreate(Destination); /*0x6729dc*/
    }
  }
  return KeyCount > 0; /*0x6729e8*/
}
}

// 0x75CEC0
int WarheadTypeClass::Construct(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WarheadTypeClass::Construct(int this, ObjectClass *aP1)
{
  int v3; // eax
  int v4; // eax

  AbstractTypeClass::Constructor(this, (AbstractClass *)aP1); /*0x75cecb*/
  *(_DWORD *)(this + 152) = 0; /*0x75ced8*/
  *(_DWORD *)(this + 156) = 0; /*0x75cede*/
  *(_DWORD *)(this + 248) = 0; /*0x75cee4*/
  *(_DWORD *)(this + 252) = 1072693248; /*0x75ceeb*/
  *(_DWORD *)(this + 256) = 0; /*0x75cef8*/
  AnimTypeVector::Constructor((_DWORD *)(this + 260), 0, 0); /*0x75cefe*/
  *(_DWORD *)(this + 276) = 0; /*0x75cf08*/
  *(_DWORD *)(this + 280) = 10; /*0x75cf0b*/
  *(_DWORD *)(this + 260) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x75cf0e*/
  *(_DWORD *)(this + 288) = 0; /*0x75cf14*/
  *(_DWORD *)(this + 292) = 0; /*0x75cf1a*/
  *(_DWORD *)(this + 296) = 0; /*0x75cf25*/
  *(_DWORD *)(this + 300) = 1065353216; /*0x75cf2b*/
  *(_BYTE *)(this + 304) = 0; /*0x75cf31*/
  *(_DWORD *)(this + 308) = 5; /*0x75cf37*/
  *(_DWORD *)(this + 312) = 1065353216; /*0x75cf41*/
  *(_DWORD *)(this + 316) = 0; /*0x75cf47*/
  *(_DWORD *)(this + 320) = 0; /*0x75cf4d*/
  *(_BYTE *)(this + 324) = 0; /*0x75cf53*/
  *(_BYTE *)(this + 325) = 0; /*0x75cf59*/
  *(_BYTE *)(this + 326) = 0; /*0x75cf5f*/
  *(_BYTE *)(this + 327) = 0; /*0x75cf65*/
  *(_BYTE *)(this + 328) = 0; /*0x75cf6b*/
  *(_BYTE *)(this + 329) = 0; /*0x75cf71*/
  *(_BYTE *)(this + 330) = 0; /*0x75cf77*/
  *(_BYTE *)(this + 331) = 0; /*0x75cf7d*/
  *(_BYTE *)(this + 332) = 0; /*0x75cf83*/
  *(_BYTE *)(this + 333) = 0; /*0x75cf89*/
  *(_BYTE *)(this + 334) = 0; /*0x75cf8f*/
  *(_BYTE *)(this + 335) = 0; /*0x75cf95*/
  *(_BYTE *)(this + 336) = 0; /*0x75cf9b*/
  *(_BYTE *)(this + 337) = 0; /*0x75cfa1*/
  *(_BYTE *)(this + 338) = 0; /*0x75cfa7*/
  *(_BYTE *)(this + 339) = 0; /*0x75cfad*/
  *(_BYTE *)(this + 340) = 0; /*0x75cfb3*/
  *(_BYTE *)(this + 341) = 0; /*0x75cfb9*/
  *(_BYTE *)(this + 342) = 0; /*0x75cfbf*/
  *(_BYTE *)(this + 343) = 0; /*0x75cfc5*/
  *(_BYTE *)(this + 344) = 0; /*0x75cfcb*/
  *(_BYTE *)(this + 345) = 0; /*0x75cfd1*/
  *(_BYTE *)(this + 346) = 0; /*0x75cfd7*/
  *(_BYTE *)(this + 347) = 0; /*0x75cfdd*/
  *(IID *)(this + 348) = g_CLSID_HoverLocomotion; /*0x75cfee*/
  *(_BYTE *)(this + 364) = 0; /*0x75d009*/
  *(_BYTE *)(this + 365) = 0; /*0x75d00f*/
  *(_DWORD *)(this + 360) = -777003740; /*0x75d015*/
  *(_BYTE *)(this + 366) = 0; /*0x75d01a*/
  *(_DWORD *)(this + 368) = 0; /*0x75d020*/
  *(_BYTE *)(this + 372) = 0; /*0x75d026*/
  *(_BYTE *)(this + 373) = 0; /*0x75d02c*/
  *(_BYTE *)(this + 374) = 0; /*0x75d032*/
  *(_BYTE *)(this + 375) = 0; /*0x75d038*/
  *(_BYTE *)(this + 376) = 0; /*0x75d03e*/
  *(_BYTE *)(this + 377) = 1; /*0x75d044*/
  *(_BYTE *)(this + 378) = 0; /*0x75d04a*/
  *(_BYTE *)(this + 379) = 0; /*0x75d050*/
  *(_DWORD *)(this + 380) = 0; /*0x75d056*/
  *(_DWORD *)(this + 384) = 0; /*0x75d05c*/
  *(_DWORD *)(this + 388) = 0; /*0x75d06e*/
  *(_DWORD *)(this + 392) = 0; /*0x75d074*/
  *(_DWORD *)(this + 400) = 0; /*0x75d07a*/
  *(_DWORD *)(this + 404) = 0; /*0x75d07d*/
  *(_BYTE *)(this + 408) = 1; /*0x75d080*/
  *(_BYTE *)(this + 409) = 0; /*0x75d083*/
  *(_DWORD *)(this + 416) = 10; /*0x75d086*/
  *(_DWORD *)(this + 412) = 0; /*0x75d089*/
  *(_DWORD *)(this + 396) = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x75d08c*/
  *(_BYTE *)(this + 436) = 1; /*0x75d092*/
  *(_DWORD *)(this + 428) = 0; /*0x75d098*/
  *(_DWORD *)(this + 432) = 0; /*0x75d09b*/
  *(_BYTE *)(this + 437) = 0; /*0x75d09e*/
  *(_DWORD *)(this + 444) = 10; /*0x75d0a1*/
  *(_DWORD *)(this + 440) = 0; /*0x75d0a4*/
  *(_DWORD *)(this + 424) = &TypeList<int>::`vftable'; /*0x75d0a7*/
  *(_DWORD *)(this + 452) = 0; /*0x75d0ae*/
  *(_DWORD *)(this + 456) = 0; /*0x75d0b4*/
  *(_DWORD *)this = &WarheadTypeClass::`vftable'; /*0x75d0ba*/
  *(_DWORD *)(this + 4) = &WarheadTypeClass::`vftable'; /*0x75d0c1*/
  *(_DWORD *)(this + 8) = &WarheadTypeClass::`vftable'; /*0x75d0c7*/
  *(_DWORD *)(this + 12) = &WarheadTypeClass::`vftable'; /*0x75d0ce*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x75d0d5*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 396) + 12))(this + 396); /*0x75d0de*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 424) + 12))(this + 424); /*0x75d0e5*/
  if ( *(int *)&MEMORY[0x87F8E4].__pad_5568[9860] < *(int *)&MEMORY[0x87F8E4].__pad_5568[9852] /*0x75d11c*/
    || (MEMORY[0x87F8E4].__pad_5568[9857] || !*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9852])
    && *(int *)&MEMORY[0x87F8E4].__pad_5568[9864] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9844] + 8))(
         &MEMORY[0x87F8E4].__pad_5568[9844],
         *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9852] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9864],
         0) )
  {
    v3 = (*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9860])++; /*0x75d129*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9848] + 4 * v3) = this; /*0x75d138*/
  }
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[9964] < *(int *)&MEMORY[0xB077F8].__pad_579C[9956] /*0x75d16f*/
    || (MEMORY[0xB077F8].__pad_579C[9961] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[9968] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9948] + 8))(
         &MEMORY[0xB077F8].__pad_579C[9948],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9968],
         0) )
  {
    v4 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9964])++; /*0x75d17c*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9952] + 4 * v4) = this; /*0x75d18b*/
  }
  *(_DWORD *)(this + 160) = 0; /*0x75d19b*/
  *(_DWORD *)(this + 164) = 1072693248; /*0x75d1a0*/
  qmemcpy((void *)(this + 168), (const void *)(this + 160), 0x50u); /*0x75d1a7*/
  return this; /*0x75d1a9*/
}
}

// 0x75DEC0
int WarheadTypeClass::ProcessPower(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WarheadTypeClass::ProcessPower(int this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  _DWORD *v18; // ebx
  int v20; // [esp+Ch] [ebp-4h]

  v3 = AbstractTypeClass::ProcessPower((char *)this, a2); /*0x75ded0*/
  LOBYTE(v3) = *(_BYTE *)(this + 324); /*0x75ded5*/
  Power::FlagProcess(a2, v3); /*0x75dede*/
  LOBYTE(v4) = *(_BYTE *)(this + 327); /*0x75dee3*/
  Power::FlagProcess(a2, v4); /*0x75deec*/
  LOBYTE(v5) = *(_BYTE *)(this + 328); /*0x75def1*/
  v6 = Power::FlagProcess(a2, v5); /*0x75defa*/
  LOBYTE(v6) = *(_BYTE *)(this + 329); /*0x75deff*/
  Power::FlagProcess(a2, v6); /*0x75df08*/
  LOBYTE(v7) = *(_BYTE *)(this + 330); /*0x75df0d*/
  Power::FlagProcess(a2, v7); /*0x75df16*/
  LOBYTE(v8) = *(_BYTE *)(this + 331); /*0x75df1b*/
  v9 = Power::FlagProcess(a2, v8); /*0x75df24*/
  LOBYTE(v9) = *(_BYTE *)(this + 332); /*0x75df29*/
  Power::FlagProcess(a2, v9); /*0x75df32*/
  LOBYTE(v10) = *(_BYTE *)(this + 333); /*0x75df37*/
  Power::FlagProcess(a2, v10); /*0x75df40*/
  LOBYTE(v11) = *(_BYTE *)(this + 334); /*0x75df45*/
  v12 = Power::FlagProcess(a2, v11); /*0x75df4e*/
  LOBYTE(v12) = *(_BYTE *)(this + 335); /*0x75df53*/
  Power::FlagProcess(a2, v12); /*0x75df5c*/
  LOBYTE(v13) = *(_BYTE *)(this + 336); /*0x75df61*/
  Power::FlagProcess(a2, v13); /*0x75df6a*/
  LOBYTE(v14) = *(_BYTE *)(this + 337); /*0x75df6f*/
  v15 = Power::FlagProcess(a2, v14); /*0x75df78*/
  LOBYTE(v15) = *(_BYTE *)(this + 338); /*0x75df7d*/
  Power::FlagProcess(a2, v15); /*0x75df86*/
  LOBYTE(v16) = *(_BYTE *)(this + 339); /*0x75df8b*/
  Power::FlagProcess(a2, v16); /*0x75df94*/
  Checksummer::Add_double(*(_DWORD *)(this + 152), *(_DWORD *)(this + 156)); /*0x75dfa9*/
  Power::TimerProcess(*(_DWORD *)(this + 256)); /*0x75dfb7*/
  Checksummer::Add_double(*(_DWORD *)(this + 248), *(_DWORD *)(this + 252)); /*0x75dfcc*/
  LOBYTE(v17) = *(_BYTE *)(this + 379); /*0x75dfd1*/
  Power::FlagProcess(a2, v17); /*0x75dfda*/
  Power::TimerProcess(*(_DWORD *)(this + 380)); /*0x75dfe8*/
  Power::TimerProcess(*(_DWORD *)(this + 384)); /*0x75dff6*/
  Power::TimerProcess(*(_DWORD *)(this + 388)); /*0x75e004*/
  Power::TimerProcess(*(_DWORD *)(this + 392)); /*0x75e012*/
  Checksummer::Add_Buffer((unsigned int *)a2, (unsigned __int8 *)(this + 348), 16); /*0x75e022*/
  v18 = (_DWORD *)(this + 160); /*0x75e027*/
  v20 = 11; /*0x75e02d*/
  do /*0x75e04f*/
  {
    Checksummer::Add_double(*v18, v18[1]); /*0x75e03e*/
    v18 += 2; /*0x75e047*/
    --v20; /*0x75e04b*/
  }
  while ( v20 ); /*0x75e04f*/
  Power::TimerProcess(*(_DWORD *)(this + 276)); /*0x75e05a*/
  return Power::TimerProcess(*(_DWORD *)(this + 288)); /*0x75e06d*/
}
}

// 0x75E0C0
int WarheadTypeClass::SaveLoad_Prefix(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall WarheadTypeClass::SaveLoad_Prefix(_DWORD *a1, int a2)
{
  _DWORD *v2; // edi
  _DWORD *v3; // ebp
  int v4; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // esi
  int n; // esi

  v2 = a1; /*0x75e0c4*/
  v3 = a1 + 99; /*0x75e0ce*/
  (*(void (__thiscall **)(_DWORD *))(a1[99] + 12))(a1 + 99); /*0x75e0d6*/
  (*(void (__thiscall **)(_DWORD *))(v2[106] + 12))(v2 + 106); /*0x75e0e7*/
  v4 = a2; /*0x75e0ea*/
  result = AbstractClass::SaveLoad_Prefix_0(v2, a2); /*0x75e0f0*/
  if ( result >= 0 ) /*0x75e0f7*/
  {
    if ( v2 ) /*0x75e0ff*/
    {
      AbstractTypeClass::Init((int)v2, (int)&a1); /*0x75e108*/
      DynamicVectorClass::AnimTypeConstructor(v2 + 65, 0, 0); /*0x75e117*/
      v2[65] = &TypeList<AnimTypeClass const *>::`vftable'; /*0x75e120*/
      WarheadTypeClass::checkImmunity(v3, (int)&a1); /*0x75e12d*/
      WarheadTypeClass::calculateDamage(v2 + 106, (int)&a1); /*0x75e139*/
      *v2 = &WarheadTypeClass::`vftable'; /*0x75e13e*/
      v2[1] = &WarheadTypeClass::`vftable'; /*0x75e144*/
      v2[2] = &WarheadTypeClass::`vftable'; /*0x75e14b*/
      v2[3] = &WarheadTypeClass::`vftable'; /*0x75e152*/
    }
    if ( v2 != (_DWORD *)-260 ) /*0x75e161*/
    {
      DynamicVectorClass::AnimTypeConstructor(v2 + 65, 0, 0); /*0x75e169*/
      v2[65] = &TypeList<AnimTypeClass const *>::`vftable'; /*0x75e16e*/
    }
    (*(void (__stdcall **)(int, _DWORD **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a1, 4, 0); /*0x75e180*/
    for ( i = 0; i < (int)a1; ++i ) /*0x75e18b*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x75e199*/
      DynamicVector::Add_Alt4(v2 + 65, &a2); /*0x75e1a7*/
    }
    if ( v3 ) /*0x75e1b5*/
      TypeList::VoxelAnimConstructor(v3); /*0x75e1b9*/
    (*(void (__stdcall **)(int, _DWORD **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a1, 4, 0); /*0x75e1ca*/
    for ( j = 0; j < (int)a1; ++j ) /*0x75e1d5*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x75e1e3*/
      DynamicVector::Add2(v3, &a2); /*0x75e1ed*/
    }
    if ( v2 != (_DWORD *)-424 ) /*0x75e201*/
      TypeList::Construct(v2 + 106); /*0x75e205*/
    (*(void (__stdcall **)(int, _DWORD **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a1, 4, 0); /*0x75e216*/
    for ( k = 0; k < (int)a1; ++k ) /*0x75e221*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x75e22f*/
      DynamicVector::Add_Alt(v2 + 106, &a2); /*0x75e239*/
    }
    for ( m = 0; m < v2[69]; ++m ) /*0x75e24f*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2[66] + 4 * m)); /*0x75e260*/
    for ( n = 0; n < v2[103]; ++n ) /*0x75e27a*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2[100] + 4 * n)); /*0x75e28b*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 80); /*0x75e2a7*/
    return 0; /*0x75e2ac*/
  }
  return result; /*0x75e2ae*/
}
}

// 0x75E2C0
namespace gamemd {
int WarheadTypeClass_SaveLoad_Prefix_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __userpurge WarheadTypeClass::SaveLoad_Prefix_0@<eax>(int a1@<ebx>, int *a2, int *a3, int a4, int a5)
{
  int result; // eax
  int v6; // edx
  int i; // ebx
  int v8; // edx
  int j; // ebx
  int v10; // edx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix(a2, a3, a4); /*0x75e2d1*/
  if ( result >= 0 ) /*0x75e2d8*/
  {
    v6 = *a3; /*0x75e2e4*/
    a4 = a2[69]; /*0x75e2f1*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD, int))(v6 + 16))(a3, &a4, 4, 0, a1); /*0x75e2f5*/
    for ( i = 0; i < a5; ++i ) /*0x75e300*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[66] + 4 * i, 4, 0); /*0x75e313*/
    v8 = *a3; /*0x75e323*/
    a5 = a2[103]; /*0x75e32f*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v8 + 16))(a3, &a5, 4, 0); /*0x75e333*/
    for ( j = 0; j < a5; ++j ) /*0x75e33e*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[100] + 4 * j, 4, 0); /*0x75e351*/
    v10 = *a3; /*0x75e361*/
    a5 = a2[110]; /*0x75e36d*/
    (*(void (__stdcall **)(int *, int *, int))(v10 + 16))(a3, &a5, 4); /*0x75e371*/
    for ( k = 0; k < a4; ++k ) /*0x75e37c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[107] + 4 * k, 4, 0); /*0x75e38f*/
    return 0; /*0x75e399*/
  }
  return result; /*0x75e39c*/
}
}
} // namespace gamemd

// 0x75E3B0
int WarheadTypeClass::FindOrCreate(ObjectClass * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WarheadTypeClass::FindOrCreate(ObjectClass *Source)
{
  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x75e3cc*/
    return 0; /*0x75e42f*/
  v2 = 0; /*0x75e3dd*/
  if ( *(int *)&stru_87C374.__pad_579C[22976] <= 0 ) /*0x75e3e1*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0x1D0u); /*0x75e406*/
    if ( v3 ) /*0x75e415*/
      return WarheadTypeClass::Construct(v3, Source); /*0x75e421*/
    return 0; /*0x75e415*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22964] + 4 * v2) + 36), Source) ) /*0x75e3fa*/
  {
    if ( ++v2 >= *(int *)&stru_87C374.__pad_579C[22976] ) /*0x75e404*/
      goto LABEL_6; /*0x75e404*/
  }
  return *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22964] + 4 * v2); /*0x75e41f*/
}
}

// 0x75E440
int WarheadTypeClass::GetDamage(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WarheadTypeClass::_vt10(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  _DWORD *v4; // esi
  int result; // eax
  int v6; // ecx
  int v7; // ecx

  v3 = a2; /*0x75e440*/
  if ( a2 == *(this + 80) ) /*0x75e44c*/
    *(this + 80) = 0; /*0x75e44e*/
  v4 = this + 65; /*0x75e459*/
  a2 = v3; /*0x75e463*/
  result = (*(int (__thiscall **)(_DWORD *, int *))(*(this + 65) + 16))(this + 65, &a2); /*0x75e46c*/
  if ( result != -1 ) /*0x75e472*/
  {
    v6 = v4[4]; /*0x75e474*/
    if ( result < v6 ) /*0x75e479*/
    {
      v7 = v6 - 1; /*0x75e47b*/
      for ( v4[4] = v7; result < v4[4]; *(_DWORD *)(v4[1] + 4 * result - 4) = *(_DWORD *)(v4[1] + 4 * result) ) /*0x75e481*/
        ++result; /*0x75e486*/
    }
  }
  return result; /*0x75e496*/
}
}

// 0x75E4F0
int WarheadTypeClass::GetObjectSize()
{
return 464;
}

// 0x75E500
int WarheadTypeClass::GetTypeIdentifier()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int WarheadTypeClass::_vt11()
{
  return 50; /*0x75e505*/
}
}

// 0x75E510
WarheadTypeClass * WarheadTypeClass::Destructor(void ** Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
WarheadTypeClass *__thiscall WarheadTypeClass::Destructor(void **Block, char a2)
{
  int v3; // eax
  int v4; // eax
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  void **v9; // [esp+4h] [ebp-4h] BYREF

  *Block = &WarheadTypeClass::`vftable'; /*0x75e516*/
  *(Block + 1) = &WarheadTypeClass::`vftable'; /*0x75e51c*/
  *(Block + 2) = &WarheadTypeClass::`vftable'; /*0x75e523*/
  *(Block + 3) = &WarheadTypeClass::`vftable'; /*0x75e52a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x75e531*/
  v9 = Block; /*0x75e546*/
  v3 = ((int (__thiscall *)(WarheadTypeClass **, void ***))MEMORY[0x8874C0]->field_10)(&MEMORY[0x8874C0], &v9); /*0x75e54a*/
  if ( v3 != -1 && v3 < MEMORY[0x8874D0] && v3 < --MEMORY[0x8874D0] ) /*0x75e565*/
  {
    do /*0x75e57d*/
    {
      ++v3; /*0x75e56d*/
      *((_DWORD *)MEMORY[0x8874C4] + v3 - 1) = *((_DWORD *)MEMORY[0x8874C4] + v3); /*0x75e571*/
    }
    while ( v3 < MEMORY[0x8874D0] ); /*0x75e57d*/
  }
  v9 = Block; /*0x75e58f*/
  v4 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v9); /*0x75e593*/
  if ( v4 != -1 && v4 < MEMORY[0xB0F680] && v4 < --MEMORY[0xB0F680] ) /*0x75e5ae*/
  {
    do /*0x75e5c6*/
    {
      ++v4; /*0x75e5b6*/
      *((_DWORD *)MEMORY[0xB0F674] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v4); /*0x75e5ba*/
    }
    while ( v4 < MEMORY[0xB0F680] ); /*0x75e5c6*/
  }
  v5 = *(Block + 107); /*0x75e5c8*/
  *(Block + 106) = &VectorClass<int>::`vftable'; /*0x75e5d1*/
  if ( v5 && *((_BYTE *)Block + 437) ) /*0x75e5df*/
  {
    __3_YAXPAX_Z(v5); /*0x75e5e8*/
    *(Block + 107) = 0; /*0x75e5f0*/
  }
  *((_BYTE *)Block + 437) = 0; /*0x75e5f6*/
  *(Block + 108) = 0; /*0x75e5fc*/
  v6 = *(Block + 100); /*0x75e602*/
  *(Block + 99) = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x75e608*/
  if ( v6 && *((_BYTE *)Block + 409) ) /*0x75e616*/
  {
    __3_YAXPAX_Z(v6); /*0x75e61f*/
    *(Block + 100) = 0; /*0x75e627*/
  }
  *((_BYTE *)Block + 409) = 0; /*0x75e62d*/
  *(Block + 101) = 0; /*0x75e633*/
  v7 = *(Block + 66); /*0x75e639*/
  *(Block + 65) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x75e63f*/
  if ( v7 && *((_BYTE *)Block + 273) ) /*0x75e64d*/
  {
    __3_YAXPAX_Z(v7); /*0x75e656*/
    *(Block + 66) = 0; /*0x75e65e*/
  }
  *((_BYTE *)Block + 273) = 0; /*0x75e666*/
  *(Block + 67) = 0; /*0x75e66c*/
  AbstractTypeClass::Dtor(Block); /*0x75e672*/
  if ( (a2 & 1) != 0 ) /*0x75e67e*/
    __3_YAXPAX_Z(Block); /*0x75e681*/
  return (WarheadTypeClass *)Block; /*0x75e68b*/
}
}

// 0x75E690
CCINIClass * WarheadTypeClass::checkImmunity(TypeList * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *__thiscall WarheadTypeClass::checkImmunity(_DWORD *this, TypeList *aP1)
{
  *this = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x75e692*/
  return (CCINIClass *)this; /*0x75e698*/
}
}

// 0x75E6A0
DynamicVector * WarheadTypeClass::calculateDamage(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall WarheadTypeClass::calculateDamage(_DWORD *this, AbstractClass *aP1)
{
  *this = &TypeList<int>::`vftable'; /*0x75e6a2*/
  return (DynamicVector *)this; /*0x75e6a8*/
}
}

// 0x772080
namespace gamemd {
int WarheadTypeClass_ReadINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// // local variable allocation has failed, the output may be wrong!
// char __fastcall WarheadTypeClass::ReadINI(int a1, _DWORD a2, unsigned __int8 ***a3)
// {
//   VectorClass *v4; // eax
//   INIClass *v5; // eax
//   VectorClass *v6; // eax
//   CCINIClass *v7; // edx
//   CCINIClass *v8; // eax
//   VectorClass *v9; // eax
//   INIClass *v10; // eax
//   VectorClass *v11; // eax
//   AbstractClass *i; // eax
//   CCINIClass *v13; // ecx
//   DynamicVector *v14; // edx
//   void *v15; // eax
//   AnimTypeClass *v16; // ebp
//   AnimTypeClass *v17; // eax
//   AnimTypeClass *v18; // ebp
//   AnimTypeClass *v19; // eax
//   AnimTypeClass *v20; // ebp
//   AnimTypeClass *v21; // eax
//   char v22; // cl
//   char Bool_Overwrite; // al
//   char v24; // al
//   char v25; // cl
//   char v26; // al
//   char v27; // al
//   char v28; // cl
//   char v29; // al
//   char v30; // al
//   char v31; // cl
//   char v32; // al
//   char v33; // al
//   char v34; // cl
//   char v35; // al
//   int Coord; // eax
//   int v37; // eax
//   int v38; // eax
//   char v39; // dl
//   char Int_Overwrite; // al
//   cha... [22980 chars total]
// end truncated pseudocode
}
} // namespace gamemd
