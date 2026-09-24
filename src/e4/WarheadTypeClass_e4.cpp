// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x474810
void * WarheadTypeClass::loadWarheadINI(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{
  int Int_Overwrite; // eax
  int result; // eax

  Int_Overwrite = INIClass::ReadInt_Overwrite((int)this, aP1, a2, -1); /*0x47481c*/
  if ( Int_Overwrite == -1 ) /*0x474824*/
    return aP3; /*0x474826*/
  if ( Int_Overwrite >= 100 ) /*0x474830*/
    Int_Overwrite = 100; /*0x474832*/
  result = ((Int_Overwrite <= 0 ? 0 : Int_Overwrite) << 8) / 100;
  if ( result >= 255 ) /*0x47485c*/
    return 255; /*0x47485e*/
  return result; /*0x47482a*/
}
// 0x525300
AbstractClass * * WarheadTypeClass::Release(int a2, unsigned int * a3)
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
// 0x52AB80
AbstractClass * * WarheadTypeClass::parseVerses()
{
  void *v2; // eax
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

  v2 = (void *)*((_DWORD *)this + 3); /*0x52ab84*/
  *(_DWORD *)this = &INIClass::INISection::`vftable'; /*0x52ab87*/
  free(v2); /*0x52ab8e*/
  *((_DWORD *)this + 3) = 0; /*0x52ab98*/
  while ( 1 ) /*0x52ab9b*/
  {
    v3 = *((_DWORD *)this + 6); /*0x52ab9b*/
    if ( !v3 || !*(_DWORD *)(v3 + 4) || !*(_DWORD *)(v3 + 8) ) /*0x52aba7*/
      break; /*0x52aba7*/
    (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x52abb4*/
  }
  __3_YAXPAX_Z(*((void **)this + 11)); /*0x52abbc*/
  *((_DWORD *)this + 11) = 0; /*0x52abc1*/
  *((_DWORD *)this + 12) = 0; /*0x52abc4*/
  *((_DWORD *)this + 13) = 0; /*0x52abc7*/
  *(this + 56) = 0; /*0x52abca*/
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
  __3_YAXPAX_Z(*((void **)this + 11)); /*0x52ac03*/
  *((_DWORD *)this + 11) = 0; /*0x52ac08*/
  *((_DWORD *)this + 12) = 0; /*0x52ac0b*/
  *((_DWORD *)this + 13) = 0; /*0x52ac0e*/
  *(this + 56) = 0; /*0x52ac11*/
  *((_DWORD *)this + 15) = 0; /*0x52ac14*/
  *((_DWORD *)this + 4) = &GenericList::`vftable'; /*0x52ac1a*/
  while ( 1 ) /*0x52ac21*/
  {
    v5 = *((_DWORD *)this + 6); /*0x52ac21*/
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
  *((_DWORD *)this + 8) = &GenericNode::`vftable'; /*0x52ac5c*/
  if ( this != (char *)-32 ) /*0x52ac62*/
  {
    v8 = *((_DWORD *)this + 9); /*0x52ac64*/
    if ( v8 ) /*0x52ac69*/
    {
      v9 = *((_DWORD *)this + 10); /*0x52ac6b*/
      if ( v9 ) /*0x52ac70*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x52ac72*/
        *(_DWORD *)(*((_DWORD *)this + 9) + 8) = *((_DWORD *)this + 10); /*0x52ac7b*/
        *((_DWORD *)this + 10) = 0; /*0x52ac7e*/
        *((_DWORD *)this + 9) = 0; /*0x52ac81*/
      }
    }
  }
  result = this + 20; /*0x52ac84*/
  *((_DWORD *)this + 5) = &GenericNode::`vftable'; /*0x52ac89*/
  if ( this != (char *)-20 ) /*0x52ac8f*/
  {
    v11 = *((_DWORD *)this + 6); /*0x52ac91*/
    if ( v11 ) /*0x52ac96*/
    {
      v12 = *((_DWORD *)this + 7); /*0x52ac98*/
      if ( v12 ) /*0x52ac9d*/
      {
        *(_DWORD *)(v12 + 4) = v11; /*0x52ac9f*/
        *(_DWORD *)(*((_DWORD *)this + 6) + 8) = *((_DWORD *)this + 7); /*0x52aca8*/
        *((_DWORD *)this + 7) = 0; /*0x52acab*/
        *((_DWORD *)this + 6) = 0; /*0x52acae*/
      }
    }
  }
  *(_DWORD *)this = &GenericNode::`vftable'; /*0x52acb3*/
  if ( this ) /*0x52acb9*/
  {
    v13 = *((_DWORD *)this + 1); /*0x52acbb*/
    if ( v13 ) /*0x52acc0*/
    {
      result = (char *)*((_DWORD *)this + 2); /*0x52acc2*/
      if ( result ) /*0x52acc7*/
      {
        *((_DWORD *)result + 1) = v13; /*0x52acc9*/
        result = (char *)*((_DWORD *)this + 1); /*0x52accc*/
        *((_DWORD *)result + 2) = *((_DWORD *)this + 2); /*0x52acd2*/
        *((_DWORD *)this + 2) = 0; /*0x52acd5*/
        *((_DWORD *)this + 1) = 0; /*0x52acd8*/
      }
    }
  }
  return result; /*0x52acdb*/
}
// 0x52AFC0
void * WarheadTypeClass::ReadParticleSystems(char a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx

  *this = &GenericList::`vftable'; /*0x52afc6*/
  while ( 1 ) /*0x52afcc*/
  {
    v3 = *(this + 2); /*0x52afcc*/
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
  *(this + 4) = &GenericNode::`vftable'; /*0x52b007*/
  if ( this != (_DWORD *)-16 ) /*0x52b00d*/
  {
    v6 = *(this + 5); /*0x52b00f*/
    if ( v6 ) /*0x52b014*/
    {
      v7 = *(this + 6); /*0x52b016*/
      if ( v7 ) /*0x52b01b*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x52b01d*/
        *(_DWORD *)(*(this + 5) + 8) = *(this + 6); /*0x52b026*/
        *(this + 6) = 0; /*0x52b029*/
        *(this + 5) = 0; /*0x52b02c*/
      }
    }
  }
  *(this + 1) = &GenericNode::`vftable'; /*0x52b034*/
  if ( this != (_DWORD *)-4 ) /*0x52b03a*/
  {
    v8 = *(this + 2); /*0x52b03c*/
    if ( v8 ) /*0x52b041*/
    {
      v9 = *(this + 3); /*0x52b043*/
      if ( v9 ) /*0x52b048*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x52b04a*/
        *(_DWORD *)(*(this + 2) + 8) = *(this + 3); /*0x52b053*/
        *(this + 3) = 0; /*0x52b056*/
        *(this + 2) = 0; /*0x52b059*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52b061*/
    __3_YAXPAX_Z(this); /*0x52b064*/
  return this; /*0x52b06e*/
}
// 0x644630
ParticleSystemTypeClass * * WarheadTypeClass::applyDamage()
{
  int v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v6; // ecx
  _DWORD *i; // edx

  if ( !_strcmpi(Source, g_Str__none_) || !strlen(Source) ) /*0x644649*/
    return -1; /*0x644653*/
  v2 = 0; /*0x64465a*/
  if ( g_InfantryTypeInitState <= 0 ) /*0x64465e*/
  {
  LABEL_6:
    v3 = __2_YAPAXI_Z(0x310u); /*0x644683*/
    if ( v3 ) /*0x644692*/
      v4 = OverlayTypeClass::Construct(v3, Source); /*0x644697*/
    else
      v4 = 0; /*0x6446a4*/
    v6 = 0; /*0x6446ac*/
    if ( g_InfantryTypeInitState > 0 ) /*0x6446b0*/
    {
      for ( i = dword_A83D6C; (_DWORD *)*i != v4; ++i ) /*0x6446b2*/
      {
        if ( ++v6 >= g_InfantryTypeInitState ) /*0x6446c2*/
          return -1; /*0x6446c2*/
      }
      return v6; /*0x6446cd*/
    }
    return -1; /*0x6446ca*/
  }
  while ( _strcmpi(Source, (const void *)(*((_DWORD *)dword_A83D6C + v2) + 36)) ) /*0x644677*/
  {
    if ( ++v2 >= g_InfantryTypeInitState ) /*0x644681*/
      goto LABEL_6; /*0x644681*/
  }
  return v2; /*0x6446a0*/
}
// 0x75CEC0
int WarheadTypeClass::Construct(ObjectClass * aP1)
{
  int v3; // eax
  int v4; // eax

  AbstractTypeClass::Constructor(this, aP1); /*0x75cecb*/
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
  *(_DWORD *)(this + 348) = 1247291207; /*0x75cfee*/
  *(_DWORD *)(this + 352) = 298948665; /*0x75cff9*/
  *(_DWORD *)(this + 356) = -1610610249; /*0x75d001*/
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
  if ( g_WarheadTypePool < dword_8874C8 /*0x75d11c*/
    || (byte_8874CD || !dword_8874C8)
    && dword_8874D4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(WarheadTypeClass_Array + 8))(
         &WarheadTypeClass_Array,
         dword_8874C8 + dword_8874D4,
         0) )
  {
    v3 = g_WarheadTypePool++; /*0x75d129*/
    *((_DWORD *)dword_8874C4 + v3) = this; /*0x75d138*/
  }
  if ( g_AnimManager < g_AnimTypePool /*0x75d16f*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v4 = g_AnimManager++; /*0x75d17c*/
    *((_DWORD *)g_AnimPoolCount + v4) = this; /*0x75d18b*/
  }
  *(_DWORD *)(this + 160) = 0; /*0x75d19b*/
  *(_DWORD *)(this + 164) = 1072693248; /*0x75d1a0*/
  qmemcpy((void *)(this + 168), (const void *)(this + 160), 0x50u); /*0x75d1a7*/
  return this; /*0x75d1a9*/
}
// 0x75DEC0
void* WarheadTypeClass::ProcessPower(int * a2)
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
// 0x75E0C0
int WarheadTypeClass::SaveLoad_Prefix(unsigned int * a1, int a2)
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
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2[66] + 4 * m)); /*0x75e260*/
    for ( n = 0; n < v2[103]; ++n ) /*0x75e27a*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2[100] + 4 * n)); /*0x75e28b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 80); /*0x75e2a7*/
    return 0; /*0x75e2ac*/
  }
  return result; /*0x75e2ae*/
}
// 0x75E2C0
namespace gamemd {
void WarheadTypeClass_SaveLoad_Prefix_0()
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
// 0x75E3B0
int WarheadTypeClass::FindOrCreate()
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x75e3cc*/
    return 0; /*0x75e42f*/
  v2 = 0; /*0x75e3dd*/
  if ( g_WarheadTypePool <= 0 ) /*0x75e3e1*/
  {
  LABEL_6:
    if ( __2_YAPAXI_Z(0x1D0u) ) /*0x75e40b*/
      return WarheadTypeClass::Construct(Source); /*0x75e421*/
    return 0; /*0x75e415*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_8874C4 + v2) + 36), Source) ) /*0x75e3fa*/
  {
    if ( ++v2 >= g_WarheadTypePool ) /*0x75e404*/
      goto LABEL_6; /*0x75e404*/
  }
  return *((_DWORD *)dword_8874C4 + v2); /*0x75e41f*/
}
// 0x75E440
int WarheadTypeClass::GetDamage(int a2, int a3)
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
// 0x75E510
CampaignClass * * WarheadTypeClass::Destructor(char a2)
{
  int v3; // eax
  int v4; // eax
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  void **v9; // [esp+4h] [ebp-4h] BYREF

  *this = &WarheadTypeClass::`vftable'; /*0x75e516*/
  *(this + 1) = &WarheadTypeClass::`vftable'; /*0x75e51c*/
  *(this + 2) = &WarheadTypeClass::`vftable'; /*0x75e523*/
  *(this + 3) = &WarheadTypeClass::`vftable'; /*0x75e52a*/
  AbstractClass::AnnounceExpiredPointer(this); /*0x75e531*/
  v9 = this; /*0x75e546*/
  v3 = (*(int (__thiscall **)(WarheadTypeClass **, void ***))&WarheadTypeClass_Array->gap0[16])( /*0x75e54a*/
         &WarheadTypeClass_Array,
         &v9);
  if ( v3 != -1 && v3 < g_WarheadTypePool && v3 < --g_WarheadTypePool ) /*0x75e565*/
  {
    do /*0x75e57d*/
    {
      ++v3; /*0x75e56d*/
      *((_DWORD *)dword_8874C4 + v3 - 1) = *((_DWORD *)dword_8874C4 + v3); /*0x75e571*/
    }
    while ( v3 < g_WarheadTypePool ); /*0x75e57d*/
  }
  v9 = this; /*0x75e58f*/
  v4 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v9); /*0x75e593*/
  if ( v4 != -1 && v4 < g_AnimManager && v4 < --g_AnimManager ) /*0x75e5ae*/
  {
    do /*0x75e5c6*/
    {
      ++v4; /*0x75e5b6*/
      *((_DWORD *)g_AnimPoolCount + v4 - 1) = *((_DWORD *)g_AnimPoolCount + v4); /*0x75e5ba*/
    }
    while ( v4 < g_AnimManager ); /*0x75e5c6*/
  }
  v5 = *(this + 107); /*0x75e5c8*/
  *(this + 106) = &VectorClass<int>::`vftable'; /*0x75e5d1*/
  if ( v5 && *((_BYTE *)this + 437) ) /*0x75e5df*/
  {
    __3_YAXPAX_Z(v5); /*0x75e5e8*/
    *(this + 107) = 0; /*0x75e5f0*/
  }
  *((_BYTE *)this + 437) = 0; /*0x75e5f6*/
  *(this + 108) = 0; /*0x75e5fc*/
  v6 = *(this + 100); /*0x75e602*/
  *(this + 99) = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x75e608*/
  if ( v6 && *((_BYTE *)this + 409) ) /*0x75e616*/
  {
    __3_YAXPAX_Z(v6); /*0x75e61f*/
    *(this + 100) = 0; /*0x75e627*/
  }
  *((_BYTE *)this + 409) = 0; /*0x75e62d*/
  *(this + 101) = 0; /*0x75e633*/
  v7 = *(this + 66); /*0x75e639*/
  *(this + 65) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x75e63f*/
  if ( v7 && *((_BYTE *)this + 273) ) /*0x75e64d*/
  {
    __3_YAXPAX_Z(v7); /*0x75e656*/
    *(this + 66) = 0; /*0x75e65e*/
  }
  *((_BYTE *)this + 273) = 0; /*0x75e666*/
  *(this + 67) = 0; /*0x75e66c*/
  AbstractTypeClass::Dtor(this); /*0x75e672*/
  if ( (a2 & 1) != 0 ) /*0x75e67e*/
    __3_YAXPAX_Z(this); /*0x75e681*/
  return this; /*0x75e68b*/
}
// 0x772080
namespace gamemd {
void* WarheadTypeClass_ReadINI()
{
  void ***v4; // eax
  unsigned __int8 *v5; // eax
  void ***v6; // eax
  void **v7; // edx
  void *v8; // eax
  void ***v9; // eax
  unsigned __int8 *v10; // eax
  void ***v11; // eax
  char *i; // eax
  int v13; // ecx
  int v14; // edx
  void *v15; // eax
  int v16; // ebp
  int v17; // eax
  int v18; // ebp
  int v19; // eax
  int v20; // ebp
  int v21; // eax
  char v22; // cl
  char Bool_Overwrite; // al
  char v24; // al
  char v25; // cl
  char v26; // al
  char v27; // al
  char v28; // cl
  char v29; // al
  char v30; // al
  char v31; // cl
  char v32; // al
  char v33; // al
  char v34; // cl
  char v35; // al
  int Coord; // eax
  int v37; // eax
  int v38; // eax
  char v39; // dl
  char Int_Overwrite; // al
  char v41; // cl
  char v42; // al
  char v43; // al
  char v44; // cl
  char v45; // al
  char v46; // al
  char v47; // cl
  char v48; // al
  char v49; // al
  int v50; // ecx
  int v51; // eax
  int v52; // eax
  int v53; // ebp
  int v54; // eax
  int v55; // ebp
  void **v57; // [esp-1Ch] [ebp-FCh] BYREF
  void *v58; // [esp-18h] [ebp-F8h]
  unsigned __int8 *v59; // [esp-14h] [ebp-F4h]
  char *p_IntList; // [esp-10h] [ebp-F0h]
  char *v61; // [esp-Ch] [ebp-ECh]
  char *v62; // [esp-8h] [ebp-E8h]
  int v63; // [esp-4h] [ebp-E4h]
  void ***IntList; // [esp+10h] [ebp-D0h] BYREF
  void **v65; // [esp+14h] [ebp-CCh] BYREF
  void *Block; // [esp+18h] [ebp-C8h]
  char v67; // [esp+21h] [ebp-BFh]
  _DWORD v68[3]; // [esp+30h] [ebp-B0h] BYREF
  char v69; // [esp+3Dh] [ebp-A3h]
  int v70; // [esp+40h] [ebp-A0h]
  int v71; // [esp+44h] [ebp-9Ch]
  int v72; // [esp+48h] [ebp-98h]
  char Source[20]; // [esp+4Ch] [ebp-94h] BYREF
  char String[128]; // [esp+60h] [ebp-80h] BYREF

  INIClass::ResetSection(a3); /*0x772095*/
  if ( !INIClass::BinarySearchSection((int)a3, (unsigned __int8 *)(a1 + 36)) ) /*0x7720a0*/
    return 0; /*0x7729d9*/
  *(_DWORD *)(a1 + 152) = INIClass::ReadInt_Overwrite(a1 + 36, aAmbientdamage, *(_DWORD *)(a1 + 152)); /*0x7720c6*/
  *(_BYTE *)(a1 + 304) = INIClass::ReadBool_Overwrite(a1 + 36, aIssonic, *(_BYTE *)(a1 + 304)); /*0x7720e0*/
  *(_BYTE *)(a1 + 305) = INIClass::ReadBool_Overwrite(a1 + 36, aSpawner, *(_BYTE *)(a1 + 305)); /*0x7720fa*/
  *(_BYTE *)(a1 + 306) = INIClass::ReadBool_Overwrite(a1 + 36, aLimbolaunch, *(_BYTE *)(a1 + 306)); /*0x772114*/
  *(_BYTE *)(a1 + 307) = INIClass::ReadBool_Overwrite(a1 + 36, aDecloaktofire, *(_BYTE *)(a1 + 307)); /*0x77212e*/
  *(_BYTE *)(a1 + 308) = INIClass::ReadBool_Overwrite(a1 + 36, aCellrangefindi, *(_BYTE *)(a1 + 308)); /*0x772148*/
  *(_BYTE *)(a1 + 309) = INIClass::ReadBool_Overwrite(a1 + 36, aFireonce, *(_BYTE *)(a1 + 309)); /*0x772162*/
  *(_BYTE *)(a1 + 310) = INIClass::ReadBool_Overwrite(a1 + 36, aNeveruse, *(_BYTE *)(a1 + 310)); /*0x77217c*/
  *(_BYTE *)(a1 + 311) = INIClass::ReadBool_Overwrite(a1 + 36, aRevealonfire, *(_BYTE *)(a1 + 311)); /*0x772196*/
  *(_BYTE *)(a1 + 312) = INIClass::ReadBool_Overwrite(a1 + 36, aTerrainfire, *(_BYTE *)(a1 + 312)); /*0x7721b0*/
  *(_BYTE *)(a1 + 313) = INIClass::ReadBool_Overwrite(a1 + 36, aSabotagecursor, *(_BYTE *)(a1 + 313)); /*0x7721ca*/
  *(_BYTE *)(a1 + 314) = INIClass::ReadBool_Overwrite(a1 + 36, aMigattackcurso, *(_BYTE *)(a1 + 314)); /*0x7721e4*/
  *(_BYTE *)(a1 + 315) = INIClass::ReadBool_Overwrite(a1 + 36, aDisguisefireon, *(_BYTE *)(a1 + 315)); /*0x7721fe*/
  *(_BYTE *)(a1 + 320) = INIClass::ReadBool_Overwrite(a1 + 36, aInfinitemindco, *(_BYTE *)(a1 + 320)); /*0x772218*/
  *(_BYTE *)(a1 + 321) = INIClass::ReadBool_Overwrite(a1 + 36, aFirewhilemovin, *(_BYTE *)(a1 + 321)); /*0x772232*/
  *(_BYTE *)(a1 + 322) = INIClass::ReadBool_Overwrite(a1 + 36, aDrainweapon, *(_BYTE *)(a1 + 322)); /*0x77224c*/
  *(_BYTE *)(a1 + 323) = INIClass::ReadBool_Overwrite(a1 + 36, aFireintranspor, *(_BYTE *)(a1 + 323)); /*0x772266*/
  *(_DWORD *)(a1 + 316) = INIClass::ReadInt_Overwrite(a1 + 36, aDisguisefakebl, *(_DWORD *)(a1 + 316)); /*0x772280*/
  *(_BYTE *)(a1 + 324) = INIClass::ReadBool_Overwrite(a1 + 36, g_INI_Key_Suicide, *(_BYTE *)(a1 + 324)); /*0x77229a*/
  *(_BYTE *)(a1 + 326) = INIClass::ReadBool_Overwrite(a1 + 36, aSupress, *(_BYTE *)(a1 + 326)); /*0x7722b4*/
  *(_DWORD *)(a1 + 156) = INIClass::ReadInt_Overwrite(a1 + 36, aBurst, *(_DWORD *)(a1 + 156)); /*0x7722ce*/
  *(_DWORD *)(a1 + 164) = INIClass::ReadInt_Overwrite(a1 + 36, g_INI_Key_Damage, *(_DWORD *)(a1 + 164)); /*0x7722e8*/
  *(_DWORD *)(a1 + 168) = WarheadTypeClass::loadWarheadINI(a1 + 36, g_INI_Key_Speed, *(_DWORD *)(a1 + 168)); /*0x772302*/
  *(_DWORD *)(a1 + 176) = INIClass::ReadInt_Overwrite(a1 + 36, &off_825478, *(_DWORD *)(a1 + 176)); /*0x77231c*/
  *(_DWORD *)(a1 + 180) = INIClass::ReadCoord(a2, a1 + 36, (int)g_INI_Key_Range, *(_DWORD *)(a1 + 180)); /*0x772336*/
  *(_DWORD *)(a1 + 184) = INIClass::ReadCoord(a2, a1 + 36, (int)aMinimumrange, *(_DWORD *)(a1 + 184)); /*0x77235b*/
  IntList = &v57; /*0x772362*/
  IntVector::Copy(&v57, (_DWORD *)(a1 + 188)); /*0x772366*/
  v4 = IntList; /*0x77236b*/
  IntList[4] = *(void ***)(a1 + 204); /*0x772377*/
  v4[5] = *(void ***)(a1 + 208); /*0x77237d*/
  *v4 = &TypeList<int>::`vftable'; /*0x772382*/
  v5 = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(a1 + 36)); /*0x772388*/
  IntList = (void ***)GetINIClassIntList( /*0x77239c*/
                        (int)&v65,
                        a3,
                        v5,
                        (unsigned __int8 *)aReport,
                        v57,
                        v58,
                        (int)v59,
                        (__int16)p_IntList,
                        (int)v61,
                        (int)v62,
                        v63);
  TypeList::Copy((_DWORD *)(a1 + 188), IntList); /*0x7723a0*/
  v6 = IntList; /*0x7723a5*/
  *(_DWORD *)(a1 + 204) = IntList[4]; /*0x7723ac*/
  *(_DWORD *)(a1 + 208) = v6[5]; /*0x7723b2*/
  v7 = v6[6]; /*0x7723b5*/
  v8 = Block; /*0x7723b8*/
  *(_DWORD *)(a1 + 212) = v7; /*0x7723bc*/
  v65 = &VectorClass<int>::`vftable'; /*0x7723c1*/
  if ( v8 && v67 ) /*0x7723d1*/
    __3_YAXPAX_Z(v8); /*0x7723d4*/
  IntList = &v57; /*0x7723e8*/
  IntVector::Copy(&v57, (_DWORD *)(a1 + 216)); /*0x7723ec*/
  v9 = IntList; /*0x7723f1*/
  IntList[4] = *(void ***)(a1 + 232); /*0x7723fd*/
  v9[5] = *(void ***)(a1 + 236); /*0x772405*/
  *v9 = &TypeList<int>::`vftable'; /*0x772408*/
  v10 = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(a1 + 36)); /*0x77240e*/
  IntList = (void ***)GetINIClassIntList( /*0x772422*/
                        (int)&v65,
                        a3,
                        v10,
                        (unsigned __int8 *)aDownreport,
                        v57,
                        v58,
                        (int)v59,
                        (__int16)p_IntList,
                        (int)v61,
                        (int)v62,
                        v63);
  TypeList::Copy((_DWORD *)(a1 + 216), IntList); /*0x772426*/
  v11 = IntList; /*0x77242b*/
  *(_DWORD *)(a1 + 232) = IntList[4]; /*0x772432*/
  *(_DWORD *)(a1 + 236) = v11[5]; /*0x772438*/
  *(_DWORD *)(a1 + 240) = v11[6]; /*0x77243e*/
  v65 = &VectorClass<int>::`vftable'; /*0x772447*/
  if ( Block && v67 ) /*0x772457*/
    __3_YAXPAX_Z(Block); /*0x77245a*/
  if ( INIClass::GetString( /*0x772479*/
         a3,
         (unsigned __int8 *)(a1 + 36),
         (unsigned __int8 *)aAnim_0,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(&v65, 0, 0); /*0x77248e*/
    v65 = &TypeList<AnimTypeClass const *>::`vftable'; /*0x77249d*/
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) ) /*0x7724af*/
    {
      if ( !*i ) /*0x7724b1*/
        break; /*0x7724b4*/
      IntList = (void ***)AnimTypeClass::FindOrCreate(i); /*0x7724bf*/
      if ( IntList ) /*0x7724c3*/
        DynamicVector::Add_Alt4(&v65, &IntList); /*0x7724ce*/
    }
    TypeList::AnimTypeCopy(v68, &v65); /*0x7724ef*/
    v65 = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x7724f8*/
    DynamicVectorClass::Destroy_Alt((int)&v65); /*0x772500*/
  }
  else
  {
    TypeList::AnimTypeCopy(v68, (_DWORD *)(a1 + 244)); /*0x772512*/
  }
  VectorClass::CopyDefault((_DWORD *)(a1 + 244), v68); /*0x772524*/
  v13 = v70; /*0x77252d*/
  v14 = v71; /*0x772531*/
  *(_DWORD *)(a1 + 268) = v72; /*0x772535*/
  v15 = (void *)v68[1]; /*0x772538*/
  *(_DWORD *)(a1 + 260) = v13; /*0x77253c*/
  *(_DWORD *)(a1 + 264) = v14; /*0x772541*/
  v68[0] = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x772544*/
  if ( v15 && v69 ) /*0x772554*/
    __3_YAXPAX_Z(v15); /*0x772557*/
  v16 = *(_DWORD *)(a1 + 276); /*0x77255f*/
  if ( INIClass::GetString( /*0x77257c*/
         a3,
         (unsigned __int8 *)(a1 + 36),
         (unsigned __int8 *)aAssaultanim,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    v17 = AnimTypeClass::FindOrCreate(String); /*0x772589*/
  }
  else
  {
    v17 = v16; /*0x772590*/
  }
  v63 = 128; /*0x772596*/
  v62 = String; /*0x77259b*/
  v61 = &g_INI_DefaultBuffer; /*0x77259c*/
  p_IntList = aOccupantanim; /*0x7725a1*/
  *(_DWORD *)(a1 + 276) = v17; /*0x7725a6*/
  v18 = *(_DWORD *)(a1 + 272); /*0x7725ac*/
  if ( INIClass::GetString(a3, (unsigned __int8 *)(a1 + 36), (unsigned __int8 *)p_IntList, v61, v62, v63) ) /*0x7725b5*/
    v19 = AnimTypeClass::FindOrCreate(String); /*0x7725c2*/
  else
    v19 = v18; /*0x7725c9*/
  *(_DWORD *)(a1 + 272) = v19; /*0x7725cb*/
  v20 = *(_DWORD *)(a1 + 280); /*0x7725d1*/
  if ( INIClass::GetString( /*0x7725ee*/
         a3,
         (unsigned __int8 *)(a1 + 36),
         (unsigned __int8 *)aOpentoppedanim,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    v21 = AnimTypeClass::FindOrCreate(String); /*0x7725fb*/
  }
  else
  {
    v21 = v20; /*0x772602*/
  }
  v22 = *(_BYTE *)(a1 + 327); /*0x772604*/
  *(_DWORD *)(a1 + 280) = v21; /*0x77260a*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, aCamera, v22); /*0x772619*/
  LOBYTE(v63) = *(_BYTE *)(a1 + 329); /*0x772626*/
  v62 = aIslaser; /*0x772627*/
  v61 = (char *)(a1 + 36); /*0x77262c*/
  *(_BYTE *)(a1 + 327) = Bool_Overwrite; /*0x77262d*/
  *(_BYTE *)(a1 + 329) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x772638*/
  v24 = INIClass::ReadBool_Overwrite(a1 + 36, aDisklaser, *(_BYTE *)(a1 + 330)); /*0x77264d*/
  v25 = *(_BYTE *)(a1 + 331); /*0x772652*/
  *(_BYTE *)(a1 + 330) = v24; /*0x772658*/
  v26 = INIClass::ReadBool_Overwrite(a1 + 36, aIsline, v25); /*0x772667*/
  LOBYTE(v63) = *(_BYTE *)(a1 + 333); /*0x772674*/
  v62 = aIshousecolor; /*0x772675*/
  v61 = (char *)(a1 + 36); /*0x77267a*/
  *(_BYTE *)(a1 + 331) = v26; /*0x77267b*/
  *(_BYTE *)(a1 + 333) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x772686*/
  v27 = INIClass::ReadBool_Overwrite(a1 + 36, aCharges, *(_BYTE *)(a1 + 328)); /*0x77269b*/
  v28 = *(_BYTE *)(a1 + 325); /*0x7726a0*/
  *(_BYTE *)(a1 + 328) = v27; /*0x7726a6*/
  v29 = INIClass::ReadBool_Overwrite(a1 + 36, aTurboboost, v28); /*0x7726b5*/
  LOBYTE(v63) = *(_BYTE *)(a1 + 297); /*0x7726c2*/
  v62 = aUsefireparticl; /*0x7726c3*/
  v61 = (char *)(a1 + 36); /*0x7726c8*/
  *(_BYTE *)(a1 + 325) = v29; /*0x7726c9*/
  *(_BYTE *)(a1 + 297) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x7726d4*/
  v30 = INIClass::ReadBool_Overwrite(a1 + 36, aUsesparkpartic, *(_BYTE *)(a1 + 298)); /*0x7726e9*/
  v31 = *(_BYTE *)(a1 + 299); /*0x7726ee*/
  *(_BYTE *)(a1 + 298) = v30; /*0x7726f4*/
  v32 = INIClass::ReadBool_Overwrite(a1 + 36, aOmnifire, v31); /*0x772703*/
  LOBYTE(v63) = *(_BYTE *)(a1 + 300); /*0x772710*/
  v62 = aDistributedwea; /*0x772711*/
  v61 = (char *)(a1 + 36); /*0x772716*/
  *(_BYTE *)(a1 + 299) = v32; /*0x772717*/
  *(_BYTE *)(a1 + 300) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x772722*/
  v33 = INIClass::ReadBool_Overwrite(a1 + 36, aIsrailgun, *(_BYTE *)(a1 + 301)); /*0x772737*/
  v34 = *(_BYTE *)(a1 + 302); /*0x77273c*/
  *(_BYTE *)(a1 + 301) = v33; /*0x772742*/
  v35 = INIClass::ReadBool_Overwrite(a1 + 36, aLobber, v34); /*0x772751*/
  v63 = a1 + 288; /*0x772760*/
  v62 = aLaserinnercolo; /*0x772761*/
  v61 = (char *)(a1 + 36); /*0x772766*/
  p_IntList = (char *)&IntList; /*0x772767*/
  *(_BYTE *)(a1 + 302) = v35; /*0x77276a*/
  Coord = INIClass::GetCoord(a3, (int)p_IntList, (unsigned __int8 *)v61, (unsigned __int8 *)v62, (unsigned __int8 *)v63); /*0x772770*/
  *(_WORD *)(a1 + 288) = *(_WORD *)Coord; /*0x772778*/
  *(_BYTE *)(a1 + 290) = *(_BYTE *)(Coord + 2); /*0x772785*/
  v37 = INIClass::GetCoord( /*0x772796*/
          a3,
          (int)&IntList,
          (unsigned __int8 *)(a1 + 36),
          (unsigned __int8 *)aLaseroutercolo,
          (unsigned __int8 *)(a1 + 291));
  *(_WORD *)(a1 + 291) = *(_WORD *)v37; /*0x77279e*/
  *(_BYTE *)(a1 + 293) = *(_BYTE *)(v37 + 2); /*0x7727ab*/
  v38 = INIClass::GetCoord( /*0x7727bc*/
          a3,
          (int)&IntList,
          (unsigned __int8 *)(a1 + 36),
          (unsigned __int8 *)aLaserouterspre,
          (unsigned __int8 *)(a1 + 294));
  *(_WORD *)(a1 + 294) = *(_WORD *)v38; /*0x7727c4*/
  v39 = *(_BYTE *)(v38 + 2); /*0x7727ca*/
  v63 = *(char *)(a1 + 334); /*0x7727d4*/
  v62 = aLaserduration; /*0x7727d5*/
  v61 = (char *)(a1 + 36); /*0x7727da*/
  *(_BYTE *)(a1 + 296) = v39; /*0x7727db*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(v61, v62, v63); /*0x7727de*/
  v41 = *(_BYTE *)(a1 + 332); /*0x7727e3*/
  *(_BYTE *)(a1 + 334) = Int_Overwrite; /*0x7727e9*/
  v42 = INIClass::ReadBool_Overwrite(a1 + 36, aIsbiglaser, v41); /*0x7727f8*/
  LOBYTE(v63) = *(_BYTE *)(a1 + 303); /*0x772805*/
  v62 = aBright; /*0x772806*/
  v61 = (char *)(a1 + 36); /*0x77280b*/
  *(_BYTE *)(a1 + 332) = v42; /*0x77280c*/
  *(_BYTE *)(a1 + 303) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x772817*/
  v43 = INIClass::ReadBool_Overwrite(a1 + 36, aIonsensitive, *(_BYTE *)(a1 + 335)); /*0x77282c*/
  v44 = *(_BYTE *)(a1 + 336); /*0x772831*/
  *(_BYTE *)(a1 + 335) = v43; /*0x772837*/
  v45 = INIClass::ReadBool_Overwrite(a1 + 36, aAreafire, v44); /*0x772846*/
  LOBYTE(v63) = *(_BYTE *)(a1 + 337); /*0x772853*/
  v62 = aIselectricbolt; /*0x772854*/
  v61 = (char *)(a1 + 36); /*0x772859*/
  *(_BYTE *)(a1 + 336) = v45; /*0x77285a*/
  *(_BYTE *)(a1 + 337) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x772865*/
  v46 = INIClass::ReadBool_Overwrite(a1 + 36, aDrawboltaslase, *(_BYTE *)(a1 + 338)); /*0x77287a*/
  v47 = *(_BYTE *)(a1 + 339); /*0x77287f*/
  *(_BYTE *)(a1 + 338) = v46; /*0x772885*/
  v48 = INIClass::ReadBool_Overwrite(a1 + 36, aIsalternatecol, v47); /*0x772894*/
  LOBYTE(v63) = *(_BYTE *)(a1 + 340); /*0x7728a1*/
  v62 = aIsradbeam; /*0x7728a2*/
  v61 = (char *)(a1 + 36); /*0x7728a7*/
  *(_BYTE *)(a1 + 339) = v48; /*0x7728a8*/
  *(_BYTE *)(a1 + 340) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x7728b3*/
  v49 = INIClass::ReadBool_Overwrite(a1 + 36, aIsraderuption, *(_BYTE *)(a1 + 341)); /*0x7728c8*/
  v50 = *(_DWORD *)(a1 + 344); /*0x7728cd*/
  *(_BYTE *)(a1 + 341) = v49; /*0x7728d3*/
  v51 = INIClass::ReadInt_Overwrite(a1 + 36, aRadlevel, v50); /*0x7728e2*/
  LOBYTE(v63) = *(_BYTE *)(a1 + 348); /*0x7728ef*/
  v62 = aIsmagbeam; /*0x7728f0*/
  v61 = (char *)(a1 + 36); /*0x7728f5*/
  *(_DWORD *)(a1 + 344) = v51; /*0x7728f6*/
  *(_BYTE *)(a1 + 348) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x772901*/
  Source[0] = 0; /*0x77291b*/
  INIClass::GetString(a3, (unsigned __int8 *)(a1 + 36), (unsigned __int8 *)aAttachedpartic, Source, Source, 20); /*0x772920*/
  v52 = WarheadTypeClass::applyDamage(Source); /*0x772929*/
  if ( v52 != -1 ) /*0x772931*/
    *(_DWORD *)(a1 + 284) = *((_DWORD *)dword_A83D6C + v52); /*0x77293c*/
  v53 = *(_DWORD *)(a1 + 172); /*0x772942*/
  if ( INIClass::GetString( /*0x77295f*/
         a3,
         (unsigned __int8 *)(a1 + 36),
         (unsigned __int8 *)g_INI_Key_Warhead,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    v54 = WarheadTypeClass::FindOrCreate(String); /*0x77296c*/
  }
  else
  {
    v54 = v53; /*0x772973*/
  }
  v55 = *(_DWORD *)(a1 + 160); /*0x772975*/
  v63 = 128; /*0x77297f*/
  v62 = String; /*0x772984*/
  v61 = &g_INI_DefaultBuffer; /*0x772985*/
  p_IntList = aProjectile; /*0x77298a*/
  v59 = (unsigned __int8 *)(a1 + 36); /*0x77298f*/
  *(_DWORD *)(a1 + 172) = v54; /*0x772992*/
  if ( INIClass::GetString(a3, v59, (unsigned __int8 *)p_IntList, v61, v62, v63) ) /*0x772998*/
    *(_DWORD *)(a1 + 160) = ObjectTypeClass::FindOrCreate(String); /*0x7729aa*/
  else
    *(_DWORD *)(a1 + 160) = v55; /*0x7729c1*/
  return 1; /*0x7729b2*/
}
}
// 0x524ED0
void WarheadTypeClass::GetClassIdentifier()
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
// 0x524F00
unsigned int WarheadTypeClass::LoadTypeData(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x524f00*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x524f15*/
  else
    return 0; /*0x524f07*/
}
// 0x524FB0
int WarheadTypeClass::SaveToINI(int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x524fba*/
}
// 0x524FC0
TypeList * WarheadTypeClass::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x524fc3*/
  *this = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x524fc6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x524fd0*/
  {
    __3_YAXPAX_Z(v3); /*0x524fd8*/
    *(this + 1) = 0; /*0x524fe0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x524feb*/
  *(this + 2) = 0; /*0x524ff1*/
  if ( (a2 & 1) != 0 ) /*0x524ff8*/
    __3_YAXPAX_Z(this); /*0x524ffb*/
  return this; /*0x525005*/
}
// 0x5250D0
char WarheadTypeClass::AddRef(int a2)
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
// 0x525400
int WarheadTypeClass::Init(unsigned int * a2)
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
// 0x52AD50
void * WarheadTypeClass::parseModifiers(char a2)
{
  void *v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  void *v9; // [esp-8h] [ebp-10h]

  v3 = (void *)*((_DWORD *)this + 3); /*0x52ad54*/
  *(_DWORD *)this = &INIClass::INIEntry::`vftable'; /*0x52ad57*/
  free(v3); /*0x52ad5e*/
  v9 = (void *)*((_DWORD *)this + 4); /*0x52ad68*/
  *((_DWORD *)this + 3) = 0; /*0x52ad69*/
  free(v9); /*0x52ad6c*/
  v4 = *((_DWORD *)this + 5); /*0x52ad71*/
  *((_DWORD *)this + 4) = 0; /*0x52ad79*/
  if ( v4 ) /*0x52ad7c*/
  {
    do /*0x52ada0*/
    {
      free(**((void ***)this + 5)); /*0x52ad85*/
      v5 = *(_DWORD *)(*((_DWORD *)this + 5) + 4); /*0x52ad8f*/
      __3_YAXPAX_Z(*((void **)this + 5)); /*0x52ad93*/
      *((_DWORD *)this + 5) = v5; /*0x52ad9d*/
    }
    while ( v5 ); /*0x52ada0*/
  }
  free(*((void **)this + 6)); /*0x52ada7*/
  *((_DWORD *)this + 6) = 0; /*0x52adb1*/
  *(_DWORD *)this = &GenericNode::`vftable'; /*0x52adb4*/
  if ( this ) /*0x52adba*/
  {
    v6 = *((_DWORD *)this + 1); /*0x52adbc*/
    if ( v6 ) /*0x52adc1*/
    {
      v7 = *((_DWORD *)this + 2); /*0x52adc3*/
      if ( v7 ) /*0x52adc8*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x52adca*/
        *(_DWORD *)(*((_DWORD *)this + 1) + 8) = *((_DWORD *)this + 2); /*0x52add3*/
        *((_DWORD *)this + 2) = 0; /*0x52add6*/
        *((_DWORD *)this + 1) = 0; /*0x52add9*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52ade1*/
    __3_YAXPAX_Z(this); /*0x52ade4*/
  return this; /*0x52adee*/
}
// 0x52AE00
WarheadTypeClass * WarheadTypeClass::parseAnimations(char a2)
{
  WarheadTypeClass::parseVerses(this); /*0x52ae03*/
  if ( (a2 & 1) != 0 ) /*0x52ae0d*/
    __3_YAXPAX_Z(this); /*0x52ae10*/
  return this; /*0x52ae1a*/
}
// 0x672990
int WarheadTypeClass::LoadType()
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)g_INI_Key_Warheads); /*0x6729a6*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6729ac*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)g_INI_Key_Warheads, i); /*0x6729c2*/
    if ( INIClass::GetString( /*0x6729cf*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)g_INI_Key_Warheads,
           StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           32) )
    {
      WarheadTypeClass::FindOrCreate(Destination); /*0x6729dc*/
    }
  }
  return KeyCount > 0; /*0x6729e8*/
}
// 0x75E4F0
int WarheadTypeClass::GetObjectSize()
{
  return 464; /*0x75e4f5*/
}
// 0x75E500
int WarheadTypeClass::GetTypeIdentifier()
{
  return 50; /*0x75e505*/
}
// 0x75E690
CCINIClass * WarheadTypeClass::checkImmunity(TypeList * aP1)
{
  *this = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x75e692*/
  return this; /*0x75e698*/
}
// 0x75E6A0
DynamicVector * WarheadTypeClass::calculateDamage(AbstractClass * aP1)
{
  *this = &TypeList<int>::`vftable'; /*0x75e6a2*/
  return this; /*0x75e6a8*/
}