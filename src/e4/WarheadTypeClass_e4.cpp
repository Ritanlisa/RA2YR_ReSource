// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x474810
void * WarheadTypeClass::loadWarheadINI(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
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

// 0x525300
int WarheadTypeClass::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax

  if ( a2 ) /*0x52530c*/
  {
    this->vtable4 = 0; /*0x525312*/
    if ( a3 ) /*0x525318*/
      _DWORD * v4 = a3; /*0x52532e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x52532a*/
    this->vtable4 = 1; /*0x525332*/
    if ( !v4 ) /*0x525336*/
      return 0; /*0x5253aa*/
    if ( this->WarheadTypeClass_field_0x4 ) /*0x525338*/
    {
      int v5 = this->WarheadTypeClass_field_0x8; /*0x52533f*/
      if ( a2 < v5 ) /*0x525344*/
        v5 = a2; /*0x525346*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->WarheadTypeClass_field_0x4 + 4 * i - 4) ) /*0x52534c*/
        ++i; /*0x525351*/
      if ( this->CombatLightSize ) /*0x52535e*/
      {
        __3_YAXPAX_Z(this->vtable2); /*0x525369*/
        this->WarheadTypeClass_field_0x4 = 0; /*0x525371*/
      }
    }
    this->WarheadTypeClass_field_0x4 = v4; /*0x52537a*/
    this->WarheadTypeClass_field_0x8 = a2; /*0x525382*/
    this->CombatLightSize = a3 == 0; /*0x525385*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->vtable4)(this); /*0x52538e*/
  }
  int v7 = this->WarheadTypeClass_field_0x8; /*0x525391*/
  if ( v7 < this->WarheadTypeClass_field_0x10 ) /*0x525399*/
    this->WarheadTypeClass_field_0x10 = v7; /*0x52539b*/
  return 1; /*0x52539e*/
}
}

// 0x52AB80
void * WarheadTypeClass::parseVerses()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CCINIClass *v2; // eax
  char *result; // eax

  v2 = (CCINIClass *)this->field_C; /*0x52ab84*/
  this->field_0 = (int)&vt_INIClass_INISection; /*0x52ab87*/
  free(v2); /*0x52ab8e*/
  this->field_C = 0; /*0x52ab98*/
  while ( 1 ) /*0x52ab9b*/
  {
    int v3 = *(_DWORD *)&this->__pad_10[8]; /*0x52ab9b*/
    if ( !v3 || !*(_DWORD *)(v3 + 4) || !*(_DWORD *)(v3 + 8) ) /*0x52aba7*/
      break; /*0x52aba7*/
    (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x52abb4*/
  }
  __3_YAXPAX_Z((void *)this->field_2C); /*0x52abbc*/
  this->field_2C = 0; /*0x52abc1*/
  this->DelayKillAtMax = 0; /*0x52abc4*/
  this->CombatLightSize = 0; /*0x52abc7*/
  this->Particle = 0; /*0x52abca*/
  this->Wall = 0; /*0x52abcd*/
  if ( this->Tiberium ) /*0x52abd0*/
  {
  int v4; // edi
    do /*0x52abfc*/
    {
      free(*this->Tiberium); /*0x52abe1*/
      v4 = *(_DWORD *)(this->Tiberium + 4); /*0x52abeb*/
      __3_YAXPAX_Z(this->Tiberium); /*0x52abef*/
      this->Tiberium = v4; /*0x52abf9*/
    }
    while ( v4 ); /*0x52abfc*/
  }
  __3_YAXPAX_Z((void *)this->field_2C); /*0x52ac03*/
  this->field_2C = 0; /*0x52ac08*/
  this->DelayKillAtMax = 0; /*0x52ac0b*/
  this->CombatLightSize = 0; /*0x52ac0e*/
  this->Particle = 0; /*0x52ac11*/
  this->Wall = 0; /*0x52ac14*/
  *(_DWORD *)this->__pad_10 = &vt_GenericList; /*0x52ac1a*/
  while ( 1 ) /*0x52ac21*/
  {
    int v5 = *(_DWORD *)&this->__pad_10[8]; /*0x52ac21*/
    if ( !v5 ) /*0x52ac26*/
      break; /*0x52ac26*/
    if ( !*(_DWORD *)(v5 + 4) ) /*0x52ac28*/
      break; /*0x52ac28*/
    int v6 = *(_DWORD *)(v5 + 8); /*0x52ac2d*/
    if ( !v6 ) /*0x52ac32*/
      break; /*0x52ac32*/
    int v7 = *(_DWORD *)(v5 + 4); /*0x52ac38*/
    if ( v7 ) /*0x52ac3d*/
    {
      *(_DWORD *)(v6 + 4) = v7; /*0x52ac43*/
      *(_DWORD *)(*(_DWORD *)(v5 + 4) + 8) = *(_DWORD *)(v5 + 8); /*0x52ac4c*/
      *(_DWORD *)(v5 + 8) = 0; /*0x52ac4f*/
      *(_DWORD *)(v5 + 4) = 0; /*0x52ac52*/
    }
  }
  *(_DWORD *)&this->__pad_10[16] = &vt_GenericNode; /*0x52ac5c*/
  if ( this != (INISection_INIClass *)-32 ) /*0x52ac62*/
  {
    int v8 = *(_DWORD *)&this->__pad_10[20]; /*0x52ac64*/
    if ( v8 ) /*0x52ac69*/
    {
      int v9 = *(_DWORD *)&this->__pad_10[24]; /*0x52ac6b*/
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
  *(_DWORD *)&this->__pad_10[4] = &vt_GenericNode; /*0x52ac89*/
  if ( this != (INISection_INIClass *)-20 ) /*0x52ac8f*/
  {
    int v11 = *(_DWORD *)&this->__pad_10[8]; /*0x52ac91*/
    if ( v11 ) /*0x52ac96*/
    {
      int v12 = *(_DWORD *)&this->__pad_10[12]; /*0x52ac98*/
      if ( v12 ) /*0x52ac9d*/
      {
        *(_DWORD *)(v12 + 4) = v11; /*0x52ac9f*/
        *(_DWORD *)(*(_DWORD *)&this->__pad_10[8] + 8) = *(_DWORD *)&this->__pad_10[12]; /*0x52aca8*/
        *(_DWORD *)&this->__pad_10[12] = 0; /*0x52acab*/
        *(_DWORD *)&this->__pad_10[8] = 0; /*0x52acae*/
      }
    }
  }
  this->field_0 = (int)&vt_GenericNode; /*0x52acb3*/
  if ( this ) /*0x52acb9*/
  {
    int v13 = *(_DWORD *)this->__pad_4; /*0x52acbb*/
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

// 0x52AFC0
void * WarheadTypeClass::ReadParticleSystems(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  *this = &vt_GenericList; /*0x52afc6*/
  while ( 1 ) /*0x52afcc*/
  {
    int v3 = this->vtable3; /*0x52afcc*/
    if ( !v3 ) /*0x52afd1*/
      break; /*0x52afd1*/
    if ( !*(_DWORD *)(v3 + 4) ) /*0x52afd3*/
      break; /*0x52afd3*/
    int v4 = *(_DWORD *)(v3 + 8); /*0x52afd8*/
    if ( !v4 ) /*0x52afdd*/
      break; /*0x52afdd*/
    int v5 = *(_DWORD *)(v3 + 4); /*0x52afe3*/
    if ( v5 ) /*0x52afe8*/
    {
      *(_DWORD *)(v4 + 4) = v5; /*0x52afee*/
      *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 8); /*0x52aff7*/
      *(_DWORD *)(v3 + 8) = 0; /*0x52affa*/
      *(_DWORD *)(v3 + 4) = 0; /*0x52affd*/
    }
  }
  this->q010 = &vt_GenericNode; /*0x52b007*/
  if ( this != (_DWORD *)-16 ) /*0x52b00d*/
  {
    int v6 = this->AnimList; /*0x52b00f*/
    if ( v6 ) /*0x52b014*/
    {
      int v7 = this->InfDeath; /*0x52b016*/
      if ( v7 ) /*0x52b01b*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x52b01d*/
        *(_DWORD *)(this->AnimList + 8) = this->InfDeath; /*0x52b026*/
        this->InfDeath = 0; /*0x52b029*/
        this->AnimList = 0; /*0x52b02c*/
      }
    }
  }
  this->vtable2 = &vt_GenericNode; /*0x52b034*/
  if ( this != (_DWORD *)-4 ) /*0x52b03a*/
  {
    int v8 = this->vtable3; /*0x52b03c*/
    if ( v8 ) /*0x52b041*/
    {
      int v9 = this->vtable4; /*0x52b043*/
      if ( v9 ) /*0x52b048*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x52b04a*/
        *(_DWORD *)(this->vtable3 + 8) = this->vtable4; /*0x52b053*/
        this->vtable4 = 0; /*0x52b056*/
        this->vtable3 = 0; /*0x52b059*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52b061*/
    __3_YAXPAX_Z(this); /*0x52b064*/
  return (GenericList *)this; /*0x52b06e*/
}
}

// 0x644630
int WarheadTypeClass::applyDamage()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ParticleSystemTypeClass *v4; // eax
  ParticleSystemTypeClass **i; // edx

  if ( !_strcmpi(this, &stru_817460.sectionHead[1]) || !strlen(this->__pad_0) ) /*0x644649*/
    return -1; /*0x644653*/
  int v2 = 0; /*0x64465a*/
  if ( *(int *)HouseClass_Player[44] <= 0 ) /*0x64465e*/
  {
LABEL_6:
    _DWORD * v3 = (_DWORD *)__2_YAPAXI_Z(0x310u); /*0x644683*/
    if ( v3 ) /*0x644692*/
      v4 = (ParticleSystemTypeClass *)OverlayTypeClass::Construct(v3, this); /*0x644697*/
    ParticleSystemTypeClass *v4 = 0; /*0x6446a4*/
    int v6 = 0; /*0x6446ac*/
    if ( *(int *)HouseClass_Player[44] > 0 ) /*0x6446b0*/
    {
      for ( i = *(ParticleSystemTypeClass ***)&HouseClass_Player[32]; *i != v4; ++i ) /*0x6446b2*/
      {
        if ( ++v6 >= *(int *)HouseClass_Player[44] ) /*0x6446c2*/
          return -1; /*0x6446c2*/
      }
      return v6; /*0x6446cd*/
    }
    return -1; /*0x6446ca*/
  }
  while ( _strcmpi(this, (const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[32] + 4 * v2) + 36)) ) /*0x644677*/
  {
    if ( ++v2 >= *(int *)HouseClass_Player[44] ) /*0x644681*/
      goto LABEL_6; /*0x644681*/
  }
  return v2; /*0x6446a0*/
}
}

// 0x75CEC0
int WarheadTypeClass::Construct(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  AbstractTypeClass::Constructor(this, (AbstractClass *)aP1); /*0x75cecb*/
  *(_DWORD *)(this + 152) = 0; /*0x75ced8*/
  *(_DWORD *)(this + 156) = 0; /*0x75cede*/
  this->WarheadTypeClass_field_0xF8 = 0; /*0x75cee4*/
  this->q0FC = 1072693248; /*0x75ceeb*/
  this->WarheadTypeClass_field_0x100 = 0; /*0x75cef8*/
  AnimTypeVector::Constructor((_DWORD *)(this + 260), 0, 0); /*0x75cefe*/
  this->WarheadTypeClass_field_0x114 = 0; /*0x75cf08*/
  this->q118 = 10; /*0x75cf0b*/
  this->q104 = &vt_TypeList_AnimTypeClass_const; /*0x75cf0e*/
  this->WarheadTypeClass_field_0x120 = 0; /*0x75cf14*/
  this->q124 = 0; /*0x75cf1a*/
  this->q128 = 0; /*0x75cf25*/
  this->q12C = 1065353216; /*0x75cf2b*/
  this->q130 = 0; /*0x75cf31*/
  this->q134 = 5; /*0x75cf37*/
  this->q138 = 1065353216; /*0x75cf41*/
  this->q13C = 0; /*0x75cf47*/
  this->WarheadTypeClass_field_0x140 = 0; /*0x75cf4d*/
  this->q144 = 0; /*0x75cf53*/
  this->q514 = 0; /*0x75cf59*/
  this->q518 = 0; /*0x75cf5f*/
  *(_BYTE *)(this + 327) = 0; /*0x75cf65*/
  this->q148 = 0; /*0x75cf6b*/
  this->WarheadTypeClass_field_bool_149 = 0; /*0x75cf71*/
  this->Sparky = 0; /*0x75cf77*/
  this->Sonic = 0; /*0x75cf7d*/
  this->Fire = 0; /*0x75cf83*/
  this->Conventional = 0; /*0x75cf89*/
  this->Rocker = 0; /*0x75cf8f*/
  this->DirectRocker = 0; /*0x75cf95*/
  this->Bright = 0; /*0x75cf9b*/
  this->CLDisableRed = 0; /*0x75cfa1*/
  this->CLDisableGreen = 0; /*0x75cfa7*/
  this->CLDisableBlue = 0; /*0x75cfad*/
  this->EMEffect = 0; /*0x75cfb3*/
  this->MindControl = 0; /*0x75cfb9*/
  this->Poison = 0; /*0x75cfbf*/
  this->IvanBomb = 0; /*0x75cfc5*/
  this->ElectricAssault = 0; /*0x75cfcb*/
  this->Parasite = 0; /*0x75cfd1*/
  this->Temporal = 0; /*0x75cfd7*/
  this->IsLocomotor = 0; /*0x75cfdd*/
  this->Locomotor = g_CLSID_HoverLocomotion; /*0x75cfee*/
  this->Airstrike = 0; /*0x75d009*/
  this->Psychedelic = 0; /*0x75d00f*/
  *(_DWORD *)(this + 360) = -777003740; /*0x75d015*/
  this->BombDisarm = 0; /*0x75d01a*/
  this->Paralyzes = 0; /*0x75d020*/
  this->Culling = 0; /*0x75d026*/
  this->MakesDisguise = 0; /*0x75d02c*/
  this->NukeMaker = 0; /*0x75d032*/
  this->Radiation = 0; /*0x75d038*/
  this->PsychicDamage = 0; /*0x75d03e*/
  this->AffectsAllies = 1; /*0x75d044*/
  this->Bullets = 0; /*0x75d04a*/
  this->Veinhole = 0; /*0x75d050*/
  this->WarheadTypeClass_field_0x17C = 0; /*0x75d056*/
  this->WarheadTypeClass_field_0x180 = 0; /*0x75d05c*/
  this->WarheadTypeClass_field_0x184 = 0; /*0x75d06e*/
  this->WarheadTypeClass_field_0x188 = 0; /*0x75d074*/
  this->WarheadTypeClass_field_0x190 = 0; /*0x75d07a*/
  this->MaxDebris = 0; /*0x75d07d*/
  this->MinDebris = 1; /*0x75d080*/
  this->q199 = 0; /*0x75d083*/
  this->q1A0 = 10; /*0x75d086*/
  this->unused_1CC = 0; /*0x75d089*/
  this->DebrisTypes = &vt_TypeList_VoxelAnimTypeClass_const; /*0x75d08c*/
  *(_BYTE *)(this + 436) = 1; /*0x75d092*/
  this->WarheadTypeClass_field_0x1AC = 0; /*0x75d098*/
  this->q1B0 = 0; /*0x75d09b*/
  this->q1B5 = 0; /*0x75d09e*/
  this->WarheadTypeClass_field_0x1BC = 10; /*0x75d0a1*/
  *(_DWORD *)(this + 440) = 0; /*0x75d0a4*/
  *(_DWORD *)(this + 424) = &vt_TypeList_int; /*0x75d0a7*/
  this->WarheadTypeClass_field_0x1C4 = 0; /*0x75d0ae*/
  this->WarheadTypeClass_field_0x1C8 = 0; /*0x75d0b4*/
  *(_DWORD *)this = &WarheadTypeClass::`vftable'; /*0x75d0ba*/
  this->WarheadTypeClass_field_0x4 = &WarheadTypeClass::`vftable'; /*0x75d0c1*/
  this->WarheadTypeClass_field_0x8 = &WarheadTypeClass::`vftable'; /*0x75d0c7*/
  this->WarheadTypeClass_field_0xC = &vt_WarheadTypeClass; /*0x75d0ce*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x75d0d5*/
  (*(void (__thiscall **)(int))(this->DebrisTypes + 12))(this + 396); /*0x75d0de*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 424) + 12))(this + 424); /*0x75d0e5*/
  if ( *(int *)&DataGlobal_87F8E4[31724] < *(int *)&DataGlobal_87F8E4[31716] /*0x75d11c*/
    || (DataGlobal_87F8E4[31721] || !*(_DWORD *)&DataGlobal_87F8E4[31716])
    && *(int *)&DataGlobal_87F8E4[31728] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&DataGlobal_87F8E4[31708] + 8))(
         &DataGlobal_87F8E4[31708],
         *(_DWORD *)&DataGlobal_87F8E4[31716] + *(_DWORD *)&DataGlobal_87F8E4[31728],
         0) )
  {
    int v3 = (*(_DWORD *)&DataGlobal_87F8E4[31724])++; /*0x75d129*/
    *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[31712] + 4 * v3) = this; /*0x75d138*/
  }
  if ( *(int *)&g_OverlayTypeConfig[32392] < *(int *)&g_OverlayTypeConfig[32384] /*0x75d16f*/
    || (g_OverlayTypeConfig[32389] || !*(_DWORD *)&g_OverlayTypeConfig[32384])
    && *(int *)&g_OverlayTypeConfig[32396] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_OverlayTypeConfig[32376] + 8))(
         &g_OverlayTypeConfig[32376],
         *(_DWORD *)&g_OverlayTypeConfig[32384] + *(_DWORD *)&g_OverlayTypeConfig[32396],
         0) )
  {
    int v4 = (*(_DWORD *)&g_OverlayTypeConfig[32392])++; /*0x75d17c*/
    *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[32380] + 4 * v4) = this; /*0x75d18b*/
  }
  this->CausesDelayKill = 0; /*0x75d19b*/
  this->q0A4 = 1072693248; /*0x75d1a0*/
  qmemcpy((void *)(this + 168), (const void *)(this + 160), 0x50u); /*0x75d1a7*/
  return this; /*0x75d1a9*/
}
}

// 0x75DEC0
int WarheadTypeClass::ProcessPower(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3 = AbstractTypeClass::ProcessPower((char *)this, a2); /*0x75ded0*/
  LOBYTE(v3) = this->q144; /*0x75ded5*/
  Power::FlagProcess(a2, v3); /*0x75dede*/
  int v4; // ecx
  LOBYTE(v4) = *(_BYTE *)(this + 327); /*0x75dee3*/
  Power::FlagProcess(a2, v4); /*0x75deec*/
  int v5; // edx
  LOBYTE(v5) = this->q148; /*0x75def1*/
  int v6 = Power::FlagProcess(a2, v5); /*0x75defa*/
  LOBYTE(v6) = (unsigned char)this->WarheadTypeClass_field_bool_149; /*0x75deff*/
  Power::FlagProcess(a2, v6); /*0x75df08*/
  int v7; // ecx
  LOBYTE(v7) = (unsigned char)this->Sparky; /*0x75df0d*/
  Power::FlagProcess(a2, v7); /*0x75df16*/
  int v8; // edx
  LOBYTE(v8) = (unsigned char)this->Sonic; /*0x75df1b*/
  int v9 = Power::FlagProcess(a2, v8); /*0x75df24*/
  LOBYTE(v9) = (unsigned char)this->Fire; /*0x75df29*/
  Power::FlagProcess(a2, v9); /*0x75df32*/
  int v10; // ecx
  LOBYTE(v10) = (unsigned char)this->Conventional; /*0x75df37*/
  Power::FlagProcess(a2, v10); /*0x75df40*/
  int v11; // edx
  LOBYTE(v11) = (unsigned char)this->Rocker; /*0x75df45*/
  int v12 = Power::FlagProcess(a2, v11); /*0x75df4e*/
  LOBYTE(v12) = (unsigned char)this->DirectRocker; /*0x75df53*/
  Power::FlagProcess(a2, v12); /*0x75df5c*/
  int v13; // ecx
  LOBYTE(v13) = (unsigned char)this->Bright; /*0x75df61*/
  Power::FlagProcess(a2, v13); /*0x75df6a*/
  int v14; // edx
  LOBYTE(v14) = (unsigned char)this->CLDisableRed; /*0x75df6f*/
  int v15 = Power::FlagProcess(a2, v14); /*0x75df78*/
  LOBYTE(v15) = (unsigned char)this->CLDisableGreen; /*0x75df7d*/
  Power::FlagProcess(a2, v15); /*0x75df86*/
  int v16; // ecx
  LOBYTE(v16) = (unsigned char)this->CLDisableBlue; /*0x75df8b*/
  Power::FlagProcess(a2, v16); /*0x75df94*/
  Checksummer::Add_double(*(_DWORD *)(this + 152), *(_DWORD *)(this + 156)); /*0x75dfa9*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x100); /*0x75dfb7*/
  Checksummer::Add_double(this->WarheadTypeClass_field_0xF8, this->q0FC); /*0x75dfcc*/
  int v17; // ecx
  LOBYTE(v17) = (unsigned char)this->Veinhole; /*0x75dfd1*/
  Power::FlagProcess(a2, v17); /*0x75dfda*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x17C); /*0x75dfe8*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x180); /*0x75dff6*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x184); /*0x75e004*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x188); /*0x75e012*/
  Checksummer::Add_Buffer((unsigned int *)a2, (unsigned __int8 *)(this + 348), 16); /*0x75e022*/
  _DWORD * v18 = (_DWORD *)(this + 160); /*0x75e027*/
  int v20 = 11; /*0x75e02d*/
  do /*0x75e04f*/
  {
    Checksummer::Add_double(*v18, v18[1]); /*0x75e03e*/
    v18 += 2; /*0x75e047*/
    --v20; /*0x75e04b*/
  }
  while ( v20 ); /*0x75e04f*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x114); /*0x75e05a*/
  return Power::TimerProcess(this->WarheadTypeClass_field_0x120); /*0x75e06d*/
}
}

// 0x75E0C0
int WarheadTypeClass::SaveLoad_Prefix(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // esi
  int n; // esi

  _DWORD * v2 = a1; /*0x75e0c4*/
  _DWORD * v3 = a1 + 99; /*0x75e0ce*/
  (*(void (__thiscall **)(_DWORD *))(a1[99] + 12))(a1 + 99); /*0x75e0d6*/
  (*(void (__thiscall **)(_DWORD *))(v2[106] + 12))(v2 + 106); /*0x75e0e7*/
  int v4 = a2; /*0x75e0ea*/
  result = AbstractClass::SaveLoad_Prefix_0(v2, a2); /*0x75e0f0*/
  if ( result >= 0 ) /*0x75e0f7*/
  {
    if ( v2 ) /*0x75e0ff*/
    {
      AbstractTypeClass::Init((int)v2, (int)&a1); /*0x75e108*/
      DynamicVectorClass::AnimTypeConstructor(v2 + 65, 0, 0); /*0x75e117*/
      v2[65] = &vt_TypeList_AnimTypeClass_const; /*0x75e120*/
      WarheadTypeClass::checkImmunity(v3, (int)&a1); /*0x75e12d*/
      WarheadTypeClass::calculateDamage(v2 + 106, (int)&a1); /*0x75e139*/
      *v2 = &WarheadTypeClass::`vftable'; /*0x75e13e*/
      v2[1] = &WarheadTypeClass::`vftable'; /*0x75e144*/
      v2[2] = &WarheadTypeClass::`vftable'; /*0x75e14b*/
      v2[3] = &vt_WarheadTypeClass; /*0x75e152*/
    }
    if ( v2 != (_DWORD *)-260 ) /*0x75e161*/
    {
      DynamicVectorClass::AnimTypeConstructor(v2 + 65, 0, 0); /*0x75e169*/
      v2[65] = &vt_TypeList_AnimTypeClass_const; /*0x75e16e*/
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
}

// 0x75E2C0
namespace gamemd {
void WarheadTypeClass_SaveLoad_Prefix_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix(a2, a3, a4); /*0x75e2d1*/
  if ( result >= 0 ) /*0x75e2d8*/
  {
    int v6 = *a3; /*0x75e2e4*/
    a4 = a2[69]; /*0x75e2f1*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD, int))(v6 + 16))(a3, &a4, 4, 0, a1); /*0x75e2f5*/
    for ( i = 0; i < a5; ++i ) /*0x75e300*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[66] + 4 * i, 4, 0); /*0x75e313*/
    int v8 = *a3; /*0x75e323*/
    a5 = a2[103]; /*0x75e32f*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v8 + 16))(a3, &a5, 4, 0); /*0x75e333*/
    for ( j = 0; j < a5; ++j ) /*0x75e33e*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[100] + 4 * j, 4, 0); /*0x75e351*/
    int v10 = *a3; /*0x75e361*/
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
int WarheadTypeClass::FindOrCreate()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x75e3cc*/
    return 0; /*0x75e42f*/
  int v2 = 0; /*0x75e3dd*/
  if ( *(int *)&stru_87C374[45404] <= 0 ) /*0x75e3e1*/
  {
LABEL_6:
    int v3 = __2_YAPAXI_Z(0x1D0u); /*0x75e406*/
    if ( v3 ) /*0x75e415*/
      return WarheadTypeClass::Construct(v3, this); /*0x75e421*/
    return 0; /*0x75e415*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&stru_87C374[45392] + 4 * v2) + 36), this) ) /*0x75e3fa*/
  {
    if ( ++v2 >= *(int *)&stru_87C374[45404] ) /*0x75e404*/
      goto LABEL_6; /*0x75e404*/
  }
  return *(_DWORD *)(*(_DWORD *)&stru_87C374[45392] + 4 * v2); /*0x75e41f*/
}
}

// 0x75E440
int WarheadTypeClass::GetDamage(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  int v3 = a2; /*0x75e440*/
  if ( a2 == this->q140 ) /*0x75e44c*/
    this->q140 = 0; /*0x75e44e*/
  _DWORD * v4 = this + 65; /*0x75e459*/
  a2 = v3; /*0x75e463*/
  result = (*(int (__thiscall **)(_DWORD *, int *))(this->q104 + 16))(this + 65, &a2); /*0x75e46c*/
  if ( result != -1 ) /*0x75e472*/
  {
    int v6 = v4[4]; /*0x75e474*/
    if ( result < v6 ) /*0x75e479*/
    {
      int v7 = v6 - 1; /*0x75e47b*/
      for ( v4[4] = v7; result < v4[4]; *(_DWORD *)(v4[1] + 4 * result - 4) = *(_DWORD *)(v4[1] + 4 * result) ) /*0x75e481*/
        ++result; /*0x75e486*/
    }
  }
  return result; /*0x75e496*/
}
}

// 0x75E510
void * WarheadTypeClass::Destructor(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void **v9; // [esp+4h] [ebp-4h] BYREF

  *this = &WarheadTypeClass::`vftable'; /*0x75e516*/
  this->vtable2 = &WarheadTypeClass::`vftable'; /*0x75e51c*/
  this->vtable3 = &WarheadTypeClass::`vftable'; /*0x75e523*/
  this->vtable4 = &vt_WarheadTypeClass; /*0x75e52a*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x75e531*/
  v9 = this; /*0x75e546*/
  int v3 = ((int (__thiscall *)(WarheadTypeClass **, void ***))WarheadTypeClass_Array->field_10)(&WarheadTypeClass_Array, &v9); /*0x75e54a*/
  if ( v3 != -1 && v3 < g_WarheadTypePool && v3 < --g_WarheadTypePool ) /*0x75e565*/
  {
    do /*0x75e57d*/
    {
      ++v3; /*0x75e56d*/
      *((_DWORD *)DataGlobal_8874C4 + v3 - 1) = *((_DWORD *)DataGlobal_8874C4 + v3); /*0x75e571*/
    }
    while ( v3 < g_WarheadTypePool ); /*0x75e57d*/
  }
  v9 = this; /*0x75e58f*/
  int v4 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v9); /*0x75e593*/
  if ( v4 != -1 && v4 < g_AnimManager && v4 < --g_AnimManager ) /*0x75e5ae*/
  {
    do /*0x75e5c6*/
    {
      ++v4; /*0x75e5b6*/
      *((_DWORD *)g_AnimPoolCount + v4 - 1) = *((_DWORD *)g_AnimPoolCount + v4); /*0x75e5ba*/
    }
    while ( v4 < g_AnimManager ); /*0x75e5c6*/
  }
  void * v5 = this->q1AC; /*0x75e5c8*/
  *(this + 106) = &vt_VectorClass_int; /*0x75e5d1*/
  if ( v5 && this->q1B5 ) /*0x75e5df*/
  {
    __3_YAXPAX_Z(v5); /*0x75e5e8*/
    this->q1AC = 0; /*0x75e5f0*/
  }
  this->q1B5 = 0; /*0x75e5f6*/
  this->q1B0 = 0; /*0x75e5fc*/
  void * v6 = this->Name; /*0x75e602*/
  this->DebrisTypes = &vt_VectorClass_VoxelAnimTypeClass_const; /*0x75e608*/
  if ( v6 && this->q199 ) /*0x75e616*/
  {
    __3_YAXPAX_Z(v6); /*0x75e61f*/
    this->Name = 0; /*0x75e627*/
  }
  this->q199 = 0; /*0x75e62d*/
  this->MaxDebris = 0; /*0x75e633*/
  void * v7 = this->q042; /*0x75e639*/
  this->q104 = &vt_VectorClass_AnimTypeClass_const; /*0x75e63f*/
  if ( v7 && this->q111 ) /*0x75e64d*/
  {
    __3_YAXPAX_Z(v7); /*0x75e656*/
    this->q042 = 0; /*0x75e65e*/
  }
  this->q111 = 0; /*0x75e666*/
  this->q043 = 0; /*0x75e66c*/
  AbstractTypeClass::Dtor(this); /*0x75e672*/
  if ( (a2 & 1) != 0 ) /*0x75e67e*/
    __3_YAXPAX_Z(this); /*0x75e681*/
  return (WarheadTypeClass *)this; /*0x75e68b*/
}
}

// 0x772080
namespace gamemd {
void WarheadTypeClass_ReadINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
{
  VectorClass *v4; // eax
  INIClass *v5; // eax
  VectorClass *v6; // eax
  CCINIClass *v7; // edx
  CCINIClass *v8; // eax
  VectorClass *v9; // eax
  INIClass *v10; // eax
  VectorClass *v11; // eax
  AbstractClass *i; // eax
  CCINIClass *v13; // ecx
  DynamicVector *v14; // edx
  AnimTypeClass *v16; // ebp
  AnimTypeClass *v17; // eax
  AnimTypeClass *v18; // ebp
  AnimTypeClass *v19; // eax
  AnimTypeClass *v20; // ebp
  AnimTypeClass *v21; // eax
  char Bool_Overwrite; // al
  int Coord; // eax
  char Int_Overwrite; // al
  CCINIClass *v50; // ecx
  int v54; // eax
  int v55; // ebp
  void **v57; // [esp-1Ch] [ebp-FCh] BYREF
  void *v58; // [esp-18h] [ebp-F8h]
  CCINIClass *v59; // [esp-14h] [ebp-F4h]
  VectorClass *p_IntList; // [esp-10h] [ebp-F0h]
  CCINIClass *v61; // [esp-Ch] [ebp-ECh] OVERLAPPED
  CCINIClass *p_unknown50; // [esp-8h] [ebp-E8h]
  int v63; // [esp-4h] [ebp-E4h]
  INIClass *v64; // [esp+0h] [ebp-E0h]
  int v65; // [esp+4h] [ebp-DCh]
  CCINIClass aP1; // [esp+10h] [ebp-D0h] BYREF

  INIClass::ResetSection(a3);
  if ( !INIClass::BinarySearchSection((int)a3, (INIClass *)(a1 + 36)) )
    return 0;
  *(_DWORD *)(a1 + 152) = INIClass::ReadInt_Overwrite(
                            (int)a3,
                            (unsigned __int8 *)(a1 + 36),
                            &unk_849548,
                            *(INIClass **)(a1 + 152));
  *(_BYTE *)(a1 + 304) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_849540,
                           *(_BYTE *)(a1 + 304));
  *(_BYTE *)(a1 + 305) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_849538,
                           *(_BYTE *)(a1 + 305));
  *(_BYTE *)(a1 + 306) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_84952C,
                           *(_BYTE *)(a1 + 306));
  *(_BYTE *)(a1 + 307) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_84951C,
                           *(_BYTE *)(a1 + 307));
  *(_BYTE *)(a1 + 308) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_849508,
                           *(_BYTE *)(a1 + 308));
  *(_BYTE *)(a1 + 309) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_8494FC,
                           *(_BYTE *)(a1 + 309));
  *(_BYTE *)(a1 + 310) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_8494F0,
                           *(_BYTE *)(a1 + 310));
  *(_BYTE *)(a1 + 311) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_8494E0,
                           *(_BYTE *)(a1 + 311));
  *(_BYTE *)(a1 + 312) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_8494D4,
                           *(_BYTE *)(a1 + 312));
  *(_BYTE *)(a1 + 313) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_8494C4,
                           *(_BYTE *)(a1 + 313));
  *(_BYTE *)(a1 + 314) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_8494B4,
                           *(_BYTE *)(a1 + 314));
  *(_BYTE *)(a1 + 315) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_8494A0,
                           *(_BYTE *)(a1 + 315));
  *(_BYTE *)(a1 + 320) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_84948C,
                           *(_BYTE *)(a1 + 320));
  *(_BYTE *)(a1 + 321) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_84947C,
                           *(_BYTE *)(a1 + 321));
  *(_BYTE *)(a1 + 322) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_849470,
                           *(_BYTE *)(a1 + 322));
  *(_BYTE *)(a1 + 323) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_849460,
                           *(_BYTE *)(a1 + 323));
  *(_DWORD *)(a1 + 316) = INIClass::ReadInt_Overwrite(
                            (int)a3,
                            (unsigned __int8 *)(a1 + 36),
                            &unk_849448,
                            *(INIClass **)(a1 + 316));
  *(_BYTE *)(a1 + 324) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           (CCINIClass *)&stru_830620[76336],
                           *(_BYTE *)(a1 + 324));
  *(_BYTE *)(a1 + 326) = INIClass::ReadBool_Overwrite(
                           (int)a3,
                           (unsigned __int8 *)(a1 + 36),
                           &unk_849440,
                           *(_BYTE *)(a1 + 326));
  *(_DWORD *)(a1 + 156) = INIClass::ReadInt_Overwrite(
                            (int)a3,
                            (unsigned __int8 *)(a1 + 36),
                            &unk_849438,
                            *(INIClass **)(a1 + 156));
  *(_DWORD *)(a1 + 164) = INIClass::ReadInt_Overwrite(
                            (int)a3,
                            (unsigned __int8 *)(a1 + 36),
                            &stru_81859C,
                            *(INIClass **)(a1 + 164));
  *(_DWORD *)(a1 + 168) = WarheadTypeClass::loadWarheadINI(
                            a3,
                            (CCINIClass *)(a1 + 36),
                            (unsigned __int8 *)&g_INI_Key_Speed,
                            *(CCINIClass **)(a1 + 168));
  *(_DWORD *)(a1 + 176) = INIClass::ReadInt_Overwrite(
                            (int)a3,
                            (unsigned __int8 *)(a1 + 36),
                            (CCINIClass *)stru_825430[72],
                            *(INIClass **)(a1 + 176));
  v63 = *(_DWORD *)(a1 + 180);
  p_unknown50 = (CCINIClass *)&stru_830620[73840];
  v61 = (CCINIClass *)(a1 + 36);
  *(_DWORD *)(a1 + 180) = INIClass::ReadCoord(*(double *)&v61, v63, v64, v65);
  v63 = *(_DWORD *)(a1 + 184);
  p_unknown50 = (CCINIClass *)&unk_849428;
  v61 = (CCINIClass *)(a1 + 36);
  *(_DWORD *)(a1 + 184) = INIClass::ReadCoord(*(double *)&v61, v63, v64, v65);
  *(_DWORD *)aP1[0] = &v57;
  IntVector::Copy(&v57, (VectorClass *)(a1 + 188));
  v4 = *(VectorClass **)aP1[0];
  *(_DWORD *)(*(_DWORD *)aP1[0] + 16) = *(_DWORD *)(a1 + 204);
  v4[1].Items = *(void **)(a1 + 208);
  v4->vtable0 = &vt_TypeList_int;
  v5 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(a1 + 36));
  *(_DWORD *)aP1[0] = GetINIClassIntList(
                             (int)aP1.headNode,
                             a3,
                             v5,
                             &unk_818410,
                             v57,
                             v58,
                             (int)v59,
                             (__int16)p_IntList,
                             (int)v61,
                             (int)p_unknown50,
                             v63);
  TypeList::Copy((_DWORD *)(a1 + 188), *(_DWORD **)aP1[0]);
  v6 = *(VectorClass **)aP1[0];
  *(_DWORD *)(a1 + 204) = *(_DWORD *)(*(_DWORD *)aP1[0] + 16);
  *(_DWORD *)(a1 + 208) = v6[1].Items;
  v7 = (CCINIClass *)v6[1].Capacity;
  v8 = (CCINIClass *)aP1.headNode[1];
  *(_DWORD *)(a1 + 212) = v7;
  aP1.headNode[0] = (int)&vt_VectorClass_int;
  if ( v8 && BYTE1(aP1.sectionHead[0]) )
    __3_YAXPAX_Z(v8);
  *(_DWORD *)aP1[0] = &v57;
  IntVector::Copy(&v57, (VectorClass *)(a1 + 216));
  v9 = *(VectorClass **)aP1[0];
  *(_DWORD *)(*(_DWORD *)aP1[0] + 16) = *(_DWORD *)(a1 + 232);
  v9[1].Items = *(void **)(a1 + 236);
  v9->vtable0 = &vt_TypeList_int;
  v10 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(a1 + 36));
  *(_DWORD *)aP1[0] = GetINIClassIntList(
                             (int)aP1.headNode,
                             a3,
                             v10,
                             byte_84941C,
                             v57,
                             v58,
                             (int)v59,
                             (__int16)p_IntList,
                             (int)v61,
                             (int)p_unknown50,
                             v63);
  TypeList::Copy((_DWORD *)(a1 + 216), *(_DWORD **)aP1[0]);
  v11 = *(VectorClass **)aP1[0];
  *(_DWORD *)(a1 + 232) = *(_DWORD *)(*(_DWORD *)aP1[0] + 16);
  *(_DWORD *)(a1 + 236) = v11[1].Items;
  *(_DWORD *)(a1 + 240) = v11[1].Capacity;
  aP1.headNode[0] = (int)&vt_VectorClass_int;
  if ( aP1.headNode[1] && BYTE1(aP1.sectionHead[0]) )
    __3_YAXPAX_Z((void *)aP1.headNode[1]);
  if ( INIClass::GetString(
         a3,
         (INIClass *)(a1 + 36),
         aAnim_0,
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP1.unknown50,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(aP1.headNode, 0, 0);
    aP1.headNode[0] = (int)&vt_TypeList_AnimTypeClass_const;
    for ( i = (AbstractClass *)strtok((char *)&aP1.unknown50, (ObjectClass *)&stru_817F40.nextObject);
          i;
          i = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !i->__pad_0[0] )
        break;
      *(_DWORD *)aP1[0] = AnimTypeClass::FindOrCreate(i);
      if ( *(_DWORD *)aP1[0] )
        DynamicVector::Add_Alt4(aP1.headNode, (VectorClass *)&aP1);
    }
    TypeList::AnimTypeCopy(aP1[32], (VectorClass *)aP1.headNode);
    aP1.headNode[0] = (int)&vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass::Destroy_Alt((int)aP1.headNode);
  }
  else
  {
    TypeList::AnimTypeCopy(aP1[32], (VectorClass *)(a1 + 244));
  }
  VectorClass::CopyDefault((_DWORD *)(a1 + 244), (VectorClass *)aP1[32]);
  v13 = (CCINIClass *)aP1.unknown30;
  v14 = *(DynamicVector **)&aP1.needsSave_flag;
  *(_DWORD *)(a1 + 268) = aP1.unknown38;
  void * v15 = *(void **)&aP1[36];
  *(_DWORD *)(a1 + 260) = v13;
  *(_DWORD *)(a1 + 264) = v14;
  *(_DWORD *)aP1[32] = &vt_VectorClass_AnimTypeClass_const;
  if ( v15 && BYTE1(aP1.INIClass_field_2C) )
    __3_YAXPAX_Z(v15);
  v16 = *(AnimTypeClass **)(a1 + 276);
  if ( INIClass::GetString(
         a3,
         (INIClass *)(a1 + 36),
         &unk_849410,
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP1.unknown50,
         128) )
  {
    v17 = AnimTypeClass::FindOrCreate((AbstractClass *)&aP1.unknown50);
  }
  else
  {
    v17 = v16;
  }
  v63 = 128;
  p_unknown50 = (CCINIClass *)&aP1.unknown50;
  v61 = (CCINIClass *)&stru_87C374[56304];
  p_IntList = (VectorClass *)&unk_849400;
  *(_DWORD *)(a1 + 276) = v17;
  v18 = *(AnimTypeClass **)(a1 + 272);
  if ( INIClass::GetString(
         a3,
         (INIClass *)(a1 + 36),
         (unsigned __int8 *)p_IntList,
         (INIClass *)v61,
         (INIClass *)p_unknown50,
         v63) )
  {
    v19 = AnimTypeClass::FindOrCreate((AbstractClass *)&aP1.unknown50);
  }
  else
  {
    v19 = v18;
  }
  *(_DWORD *)(a1 + 272) = v19;
  v20 = *(AnimTypeClass **)(a1 + 280);
  if ( INIClass::GetString(
         a3,
         (INIClass *)(a1 + 36),
         &unk_8493F0,
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP1.unknown50,
         128) )
  {
    v21 = AnimTypeClass::FindOrCreate((AbstractClass *)&aP1.unknown50);
  }
  else
  {
    v21 = v20;
  }
  char v22 = *(_BYTE *)(a1 + 327);
  *(_DWORD *)(a1 + 280) = v21;
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_8493E8, v22);
  LOBYTE(v63) = *(_BYTE *)(a1 + 329);
  p_unknown50 = &unk_8493E0;
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 327) = Bool_Overwrite;
  *(_BYTE *)(a1 + 329) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  char v24 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &stru_817138, *(_BYTE *)(a1 + 330));
  char v25 = *(_BYTE *)(a1 + 331);
  *(_BYTE *)(a1 + 330) = v24;
  char v26 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_8493D8, v25);
  LOBYTE(v63) = *(_BYTE *)(a1 + 333);
  p_unknown50 = &unk_8493C8;
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 331) = v26;
  *(_BYTE *)(a1 + 333) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  char v27 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_8493C0, *(_BYTE *)(a1 + 328));
  char v28 = *(_BYTE *)(a1 + 325);
  *(_BYTE *)(a1 + 328) = v27;
  char v29; // al
  v29 = INIClass::ReadBool_Overwrite(
          (int)a3,
          (unsigned __int8 *)(a1 + 36),
          (CCINIClass *)&stru_830620[42912],
          v28);
  LOBYTE(v63) = *(_BYTE *)(a1 + 297);
  p_unknown50 = &unk_8493AC;
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 325) = v29;
  *(_BYTE *)(a1 + 297) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  char v30 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_849398, *(_BYTE *)(a1 + 298));
  char v31 = *(_BYTE *)(a1 + 299);
  *(_BYTE *)(a1 + 298) = v30;
  char v32 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_84938C, v31);
  LOBYTE(v63) = *(_BYTE *)(a1 + 300);
  p_unknown50 = &unk_849374;
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 299) = v32;
  *(_BYTE *)(a1 + 300) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  char v33 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_849368, *(_BYTE *)(a1 + 301));
  char v34 = *(_BYTE *)(a1 + 302);
  *(_BYTE *)(a1 + 301) = v33;
  char v35 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_849360, v34);
  v63 = a1 + 288;
  p_unknown50 = (CCINIClass *)&unk_849350;
  v61 = (CCINIClass *)(a1 + 36);
  p_IntList = (VectorClass *)&aP1;
  *(_BYTE *)(a1 + 302) = v35;
  Coord = INIClass::GetCoord(a3, (CCINIClass *)p_IntList, (INIClass *)v61, (Color *)p_unknown50, (Color *)v63);
  *(_WORD *)(a1 + 288) = *(_WORD *)Coord;
  *(_BYTE *)(a1 + 290) = *(_BYTE *)(Coord + 2);
  int v37 = INIClass::GetCoord(a3, &aP1, (INIClass *)(a1 + 36), &unk_849340, (Color *)(a1 + 291));
  *(_WORD *)(a1 + 291) = *(_WORD *)v37;
  *(_BYTE *)(a1 + 293) = *(_BYTE *)(v37 + 2);
  int v38 = INIClass::GetCoord(a3, &aP1, (INIClass *)(a1 + 36), &unk_84932C, (Color *)(a1 + 294));
  *(_WORD *)(a1 + 294) = *(_WORD *)v38;
  char v39 = *(_BYTE *)(v38 + 2);
  v63 = *(char *)(a1 + 334);
  p_unknown50 = &unk_84931C;
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 296) = v39;
  Int_Overwrite = INIClass::ReadInt_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, (INIClass *)v63);
  char v41 = *(_BYTE *)(a1 + 332);
  *(_BYTE *)(a1 + 334) = Int_Overwrite;
  char v42 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_849310, v41);
  LOBYTE(v63) = *(_BYTE *)(a1 + 303);
  p_unknown50 = &unk_847DD0;
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 332) = v42;
  *(_BYTE *)(a1 + 303) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  char v43 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_849300, *(_BYTE *)(a1 + 335));
  char v44 = *(_BYTE *)(a1 + 336);
  *(_BYTE *)(a1 + 335) = v43;
  char v45 = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)(a1 + 36), &unk_8492F4, v44);
  LOBYTE(v63) = *(_BYTE *)(a1 + 337);
  p_unknown50 = &unk_8492E4;
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 336) = v45;
  *(_BYTE *)(a1 + 337) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  char v46; // al
  v46 = INIClass::ReadBool_Overwrite(
          (int)a3,
          (unsigned __int8 *)(a1 + 36),
          (CCINIClass *)stru_84928C[72],
          *(_BYTE *)(a1 + 338));
  char v47 = *(_BYTE *)(a1 + 339);
  *(_BYTE *)(a1 + 338) = v46;
  char v48; // al
  v48 = INIClass::ReadBool_Overwrite(
          (int)a3,
          (unsigned __int8 *)(a1 + 36),
          (CCINIClass *)&stru_84928C.needsSave_flag,
          v47);
  LOBYTE(v63) = *(_BYTE *)(a1 + 340);
  p_unknown50 = (CCINIClass *)&stru_84928C[40];
  v61 = (CCINIClass *)(a1 + 36);
  *(_BYTE *)(a1 + 339) = v48;
  *(_BYTE *)(a1 + 340) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  char v49; // al
  v49 = INIClass::ReadBool_Overwrite(
          (int)a3,
          (unsigned __int8 *)(a1 + 36),
          (CCINIClass *)&stru_84928C.sectionHead[2],
          *(_BYTE *)(a1 + 341));
  v50 = *(CCINIClass **)(a1 + 344);
  *(_BYTE *)(a1 + 341) = v49;
  int v51; // eax
  v51 = INIClass::ReadInt_Overwrite(
          (int)a3,
          (unsigned __int8 *)(a1 + 36),
          (CCINIClass *)&stru_84928C.headNode[2],
          (INIClass *)v50);
  LOBYTE(v63) = *(_BYTE *)(a1 + 348);
  p_unknown50 = &stru_84928C;
  v61 = (CCINIClass *)(a1 + 36);
  *(_DWORD *)(a1 + 344) = v51;
  *(_BYTE *)(a1 + 348) = INIClass::ReadBool_Overwrite((int)a3, (unsigned __int8 *)v61, p_unknown50, v63);
  LOBYTE(aP1.INIClass_field_3C) = 0;
  INIClass::GetString(
    a3,
    (INIClass *)(a1 + 36),
    aAttachedpartic,
    (INIClass *)&aP1.INIClass_field_3C,
    (INIClass *)&aP1.INIClass_field_3C,
    20);
  int v52 = WarheadTypeClass::applyDamage((ObjectClass *)&aP1.INIClass_field_3C);
  if ( v52 != -1 )
    *(_DWORD *)(a1 + 284) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[32] + 4 * v52);
  int v53 = *(_DWORD *)(a1 + 172);
  if ( INIClass::GetString(
         a3,
         (INIClass *)(a1 + 36),
         &unk_8183B4,
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP1.unknown50,
         128) )
  {
    v54 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1.unknown50);
  }
  else
  {
    v54 = v53;
  }
  v55 = *(_DWORD *)(a1 + 160);
  v63 = 128;
  p_unknown50 = (CCINIClass *)&aP1.unknown50;
  v61 = (CCINIClass *)&stru_87C374[56304];
  p_IntList = (VectorClass *)aProjectile;
  v59 = (CCINIClass *)(a1 + 36);
  *(_DWORD *)(a1 + 172) = v54;
  if ( INIClass::GetString(
         a3,
         (INIClass *)v59,
         (unsigned __int8 *)p_IntList,
         (INIClass *)v61,
         (INIClass *)p_unknown50,
         v63) )
  {
    *(_DWORD *)(a1 + 160) = ObjectTypeClass::FindOrCreate((ObjectClass *)&aP1.unknown50);
  }
  else
  {
    *(_DWORD *)(a1 + 160) = v55;
  }
  return 1;
}
}
} // namespace gamemd

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

// 0x524F00
unsigned int WarheadTypeClass::LoadTypeData(int a2)
{
{
    if ( (unsigned char)this->WarheadTypeClass_field_0xC )
    return (unsigned int)(a2 - this->WarheadTypeClass_field_0x4) >> 2;
    else
    return 0;
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

}
// 0x52AD50
void * WarheadTypeClass::parseModifiers(char a2)
{
{
    CCINIClass *v3;
    int v4;
    int v5;
    int v6;
    int v7;
    void *v9;
    v3 = (CCINIClass *)this->field_C;
    *(int *)this->__pad_0 = &vt_INIClass_INIEntry;
    free(v3);
    v9 = (void *)this->field_10;
    this->field_C = 0;
    free(v9);
    v4 = *(int *)this->__pad_14;
    this->field_10 = 0;
    if ( v4 )
  {
    do
    {
    free(**(void ***)this->__pad_14);
    v5 = *(int *)(*(int *)this->__pad_14 + 4);
    __3_YAXPAX_Z(*(void **)this->__pad_14);
    *(int *)this->__pad_14 = v5;
    }
    while ( v5 );
  }
    free((void *)this->field_18);
    this->field_18 = 0;
    *(int *)this->__pad_0 = &vt_GenericNode;
    if ( this )
  {
    v6 = *(int *)&this->__pad_0[4];
    if ( v6 )
    {
    v7 = *(int *)&this->__pad_0[8];
    if ( v7 )
      {
    *(int *)(v7 + 4) = v6;
    *(int *)(*(int *)&this->__pad_0[4] + 8) = *(int *)&this->__pad_0[8];
    *(int *)&this->__pad_0[8] = 0;
    *(int *)&this->__pad_0[4] = 0;
      }
    }
  }
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x52AE00
WarheadTypeClass * WarheadTypeClass::parseAnimations(char a2)
{
{
    WarheadTypeClass::parseVerses(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (WarheadTypeClass *)this;
}
}

// 0x672990
int WarheadTypeClass::LoadType()
{
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)g_INI_Key_Warheads);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)g_INI_Key_Warheads, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)g_INI_Key_Warheads, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    WarheadTypeClass::FindOrCreate(Destination);
    }
  }
    return KeyCount > 0;
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
return 50;
}

// 0x75E690
CCINIClass * WarheadTypeClass::checkImmunity(TypeList * aP1)
{
{
    *(void**)this = &vt_TypeList_VoxelAnimTypeClass_const;
    return (CCINIClass *)this;
}
}

// 0x75E6A0
DynamicVector * WarheadTypeClass::calculateDamage(AbstractClass * aP1)
{
{
    *(void**)this = &vt_TypeList_int;
    return (DynamicVector *)this;
}
}
