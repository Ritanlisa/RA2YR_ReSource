// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x474810
CCINIClass * WarheadTypeClass::loadWarheadINI(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3)
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

// 0x524ED0
void WarheadTypeClass::GetClassIdentifier()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->WarheadTypeClass_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->WarheadTypeClass_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->WarheadTypeClass_field_0x8 = 0;
}
}

// 0x524FB0
int WarheadTypeClass::SaveToINI(int a2)
{
{
    return *(int *)(this->UIName + 4 * a2);
}
}

// 0x524FC0
TypeList * WarheadTypeClass::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AnimTypeClass_const;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TypeList *)this;
}
}

// 0x5250D0
char WarheadTypeClass::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->ProneDamage;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->UIName;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
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
    if ( this->WarheadTypeClass_field_0x4 ) /*0x525338*/
    {
      v5 = this->WarheadTypeClass_field_0x8; /*0x52533f*/
      if ( a2 < v5 ) /*0x525344*/
        v5 = a2; /*0x525346*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->WarheadTypeClass_field_0x4 + 4 * i - 4) ) /*0x52534c*/
        ++i; /*0x525351*/
      if ( *((_BYTE *)this + 13) ) /*0x52535e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x525369*/
        this->WarheadTypeClass_field_0x4 = 0; /*0x525371*/
      }
    }
    this->WarheadTypeClass_field_0x4 = v4; /*0x52537a*/
    this->WarheadTypeClass_field_0x8 = a2; /*0x525382*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x525385*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x52538e*/
  }
  v7 = this->WarheadTypeClass_field_0x8; /*0x525391*/
  if ( v7 < this->WarheadTypeClass_field_0x10 ) /*0x525399*/
    this->WarheadTypeClass_field_0x10 = v7; /*0x52539b*/
  return 1; /*0x52539e*/
}
}

// 0x525400
int WarheadTypeClass::Init(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->DeformTreshold;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->UIName; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}