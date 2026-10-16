// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AnimTypeVector_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.35f: C2027 supply
#include "e4/classes/CampaignClass_e4.hpp"  // G42.35f: C2027 supply
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/RadSiteClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/WaypointPathClass_e4.hpp"
#include "e4/classes/WaypointClass_e4.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/GenericList_e4.hpp"
#include "e4/classes/OverlayTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/GenericNode_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TypeList_e4.hpp"  // G57w10 D supply (bare TypeList carrier)
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned char aAmbientdamage;  // data: 0x849548 truth(IDA G42.57w9)
extern unsigned char aDecloaktofire;  // data: 0x84951c truth(IDA G42.57w9)
extern unsigned char aIssonic;  // data: 0x849540 truth(IDA G42.57w9)
extern unsigned char aLimbolaunch;  // data: 0x84952c truth(IDA G42.57w9)
extern unsigned char aSpawner;  // data: 0x849538 truth(IDA G42.57w9)


// 0x474810
namespace gamemd {  // G42.18 ns repair
void * WarheadTypeClass::loadWarheadINI(uint8_t * a2, uint8_t * a3, int a4)
{


  int Int_Overwrite; // eax
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)this, a2, a3, -1); /*0x47481c*/
  if ( Int_Overwrite == -1 ) /*0x474824*/
    return (void *)(a4); /*0x474826*/
  if ( Int_Overwrite >= 100 ) /*0x474830*/
    Int_Overwrite = 100; /*0x474832*/
  int result; // eax
  result = ((Int_Overwrite <= 0 ? 0 : Int_Overwrite) << 8) / 100;
  if ( result >= 255 ) /*0x47485c*/
    return (void *)(255); /*0x47485e*/
  return (void *)(result); /*0x47482a*/

}
} // namespace gamemd
// 0x525300
namespace gamemd {
AbstractClass * * WarheadTypeClass::Release(int a2, unsigned int * a3)
{


  if ( a2 ) /*0x52530c*/
  {
    LOBYTE(this->vtable4) = 0; /*0x525312*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x525318*/
      v4 = a3; /*0x52532e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x52532a*/
    LOBYTE(this->vtable4) = 1; /*0x525332*/
    if ( !v4 ) /*0x525336*/
      return 0; /*0x5253aa*/
    if ( *&this->vtable2 ) /*0x525338*/
    {
      int m_8; // ecx
      m_8 = (int)(this->vtable3); /*0x52533f*/
      if ( a2 < m_8 ) /*0x525344*/
        m_8 = a2; /*0x525346*/
      int i; // eax
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->vtable2 + 4 * i - 4) ) /*0x52534c*/
        ++i; /*0x525351*/
      if ( BYTE1(this->vtable4) ) /*0x52535e*/
      {
        __3_YAXPAX_Z(*&this->vtable2); /*0x525369*/
        *&this->vtable2 = 0; /*0x525371*/
      }
    }
    *&this->vtable2 = v4; /*0x52537a*/
    this->vtable3 = (void *)(a2); /*0x525382*/
    BYTE1(this->vtable4) = a3 == 0; /*0x525385*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PBVAnimTypeClass *))(*(unsigned int *)this->vtable1 + 12))(this); /*0x52538e*/
  }
  int v7; // eax
  v7 = (int)(this->vtable3); /*0x525391*/
  if ( v7 < this->uniqueId ) /*0x525399*/
    this->uniqueId = v7; /*0x52539b*/
  return (gamemd::AbstractClass **)(1); /*0x52539e*/

}
} // namespace gamemd
// 0x52AB80
namespace gamemd {
AbstractClass * * WarheadTypeClass::parseVerses()
{

  int v4; // edi

  void *v2; // eax
  v2 = this->vtable4; /*0x52ab84*/
  /* X11: vtable install elided (implicit via INISection virtuals 0x52ab87) */
  free(v2); /*0x52ab8e*/
  this->vtable4 = 0; /*0x52ab98*/
  while ( 1 ) /*0x52ab9b*/
  {
    int v3; // ecx
    v3 = (int)(this->InfDeath); /*0x52ab9b*/
    if ( !v3 || !v3->ptr_4 || !v3->u32_8 ) /*0x52aba7*/
      break; /*0x52aba7*/
    (**(void (***)(int, int))v3)(v3, 1); /*0x52abb4*/
  }
  __3_YAXPAX_Z(this->InfDeath)); /*0x52abbc*/
  this->DelayKillFrames = 0; /*0x52abc1*/
  this->DelayKillAtMax = 0; /*0x52abc4*/
  this->CombatLightSize = 0; /*0x52abc7*/
  this->Particle = 0; /*0x52abca*/
  this->Wall = 0; /*0x52abcd*/
  if ( this->Tiberium ) /*0x52abd0*/
  {
    do /*0x52abfc*/
    {
      free(*this->Tiberium)); /*0x52abe1*/
      v4 = *(unsigned int *)(this->Tiberium + 4); /*0x52abeb*/
      __3_YAXPAX_Z(this->Tiberium)); /*0x52abef*/
      this->Tiberium = v4; /*0x52abf9*/
    }
    while ( v4 ); /*0x52abfc*/
  }
  __3_YAXPAX_Z(this->Tiberium)); /*0x52ac03*/
  this->DelayKillFrames = 0; /*0x52ac08*/
  this->DelayKillAtMax = 0; /*0x52ac0b*/
  this->CombatLightSize = 0; /*0x52ac0e*/
  this->Particle = 0; /*0x52ac11*/
  this->Wall = 0; /*0x52ac14*/
  this->uniqueId = &vt_GenericList; /*0x52ac1a*/
  while ( 1 ) /*0x52ac21*/
  {
    int v5; // eax
    v5 = (int)(this->InfDeath); /*0x52ac21*/
    if ( !v5 ) /*0x52ac26*/
      break; /*0x52ac26*/
    if ( !v5->ptr_4 ) /*0x52ac28*/
      break; /*0x52ac28*/
    int v6 = v5->u32_8; // ecx /*0x52ac2d*/
    if ( !v6 ) /*0x52ac32*/
      break; /*0x52ac32*/
    int v7 = v5->ptr_4; // edx /*0x52ac38*/
    if ( v7 ) /*0x52ac3d*/
    {
      *(unsigned int *)(v6 + 4) = v7; /*0x52ac43*/
      *(unsigned int *)(v5->ptr_4 + 8) = v5->u32_8; /*0x52ac4c*/
      v5->u32_8 = 0; /*0x52ac4f*/
      v5->ptr_4 = 0; /*0x52ac52*/
    }
  }
  this->CellInset = &vt_GenericNode; /*0x52ac5c*/
  if ( this != (char *)-32 ) /*0x52ac62*/
  {
    int v8 = this->__pad_024; // edx /*0x52ac64*/
    if ( v8 ) /*0x52ac69*/
    {
      int v9 = this->CausesDelayKill; // ecx /*0x52ac6b*/
      if ( v9 ) /*0x52ac70*/
      {
        *(unsigned int *)(v9 + 4) = v8; /*0x52ac72*/
        *(unsigned int *)&this->__pad_024->vtable3 = this->CausesDelayKill; /*0x52ac7b*/
        this->CausesDelayKill = 0; /*0x52ac7e*/
        this->__pad_024 = 0; /*0x52ac81*/
      }
    }
  }
  char *result; // eax
  result = &this->AnimList; /*0x52ac84*/
  this->AnimList = (unsigned int)(&vt_GenericNode); /*0x52ac89*/
  if ( this != (char *)-20 ) /*0x52ac8f*/
  {
    int v11; // edx
    v11 = (int)(this->InfDeath); /*0x52ac91*/
    if ( v11 ) /*0x52ac96*/
    {
      int v12 = this->CellSpread; // ecx /*0x52ac98*/
      if ( v12 ) /*0x52ac9d*/
      {
        *(unsigned int *)(v12 + 4) = v11; /*0x52ac9f*/
        *(unsigned int *)&this->InfDeath->u32_8 = this->CellSpread; /*0x52aca8*/
        this->CellSpread = 0; /*0x52acab*/
        this->InfDeath = 0; /*0x52acae*/
      }
    }
  }
  /* X11: vtable install elided (implicit via GenericNode virtuals 0x52acb3) */
  if ( this ) /*0x52acb9*/
  {
    int v13; // ecx
    v13 = (int)(this->vtable2); /*0x52acbb*/
    if ( v13 ) /*0x52acc0*/
    {
      result = (char *)this->vtable3; /*0x52acc2*/
      if ( result ) /*0x52acc7*/
      {
        *((unsigned int *)result + 1) = v13; /*0x52acc9*/
        result = (char *)this->vtable2; /*0x52accc*/
        *((unsigned int *)result + 2) = (unsigned int)(this->vtable3); /*0x52acd2*/
        this->vtable3 = 0; /*0x52acd5*/
        this->vtable2 = 0; /*0x52acd8*/
      }
    }
  }
  return (gamemd::AbstractClass **)(result); /*0x52acdb*/

}
} // namespace gamemd
// 0x52AFC0
namespace gamemd {
void * WarheadTypeClass::ReadParticleSystems(char a2, int aP1, int a3, int a4, int a5, int a6, int a1, int aP0)
{


  aP1->Deform = &vt_GenericList; /*0x52afc6*/
  while ( 1 ) /*0x52afcc*/
  {
    unsigned int *WarheadTypeClass_field_0x8; // eax
    WarheadTypeClass_field_0x8 = aP1->WarheadTypeClass_field_0x8; /*0x52afcc*/
    if ( !WarheadTypeClass_field_0x8 ) /*0x52afd1*/
      break; /*0x52afd1*/
    if ( !WarheadTypeClass_field_0x8[1] ) /*0x52afd3*/
      break; /*0x52afd3*/
    int v4; // ecx
    v4 = WarheadTypeClass_field_0x8[2]; /*0x52afd8*/
    if ( !v4 ) /*0x52afdd*/
      break; /*0x52afdd*/
    int v5; // edx
    v5 = WarheadTypeClass_field_0x8[1]; /*0x52afe3*/
    if ( v5 ) /*0x52afe8*/
    {
      *(unsigned int *)(v4 + 4) = v5; /*0x52afee*/
      *(unsigned int *)(WarheadTypeClass_field_0x8[1] + 8) = WarheadTypeClass_field_0x8[2]; /*0x52aff7*/
      WarheadTypeClass_field_0x8[2] = 0; /*0x52affa*/
      WarheadTypeClass_field_0x8[1] = 0; /*0x52affd*/
    }
  }
  aP1->WarheadTypeClass_field_0x10 = &vt_GenericNode; /*0x52b007*/
  if ( aP1 != (WarheadTypeClass *)-16 ) /*0x52b00d*/
  {
    int v6; // edx
    v6 = aP1->AnimList[0]; /*0x52b00f*/
    if ( v6 ) /*0x52b014*/
    {
      int v7; // ecx
      v7 = aP1->InfDeath[0]; /*0x52b016*/
      if ( v7 ) /*0x52b01b*/
      {
        *(unsigned int *)(v7 + 4) = v6; /*0x52b01d*/
        *(unsigned int *)(aP1->AnimList[0] + 8) = aP1->InfDeath[0]; /*0x52b026*/
        aP1->InfDeath[0] = 0; /*0x52b029*/
        aP1->AnimList[0] = 0; /*0x52b02c*/
      }
    }
  }
  aP1->WarheadTypeClass_field_0x4 = &vt_GenericNode; /*0x52b034*/
  if ( aP1 != (WarheadTypeClass *)-4 ) /*0x52b03a*/
  {
    void *v8 = aP1->WarheadTypeClass_field_0x8; // edx /*0x52b03c*/
    if ( v8 ) /*0x52b041*/
    {
      unsigned int *WarheadTypeClass_field_0xC; // ecx
      WarheadTypeClass_field_0xC = aP1->WarheadTypeClass_field_0xC; /*0x52b043*/
      if ( WarheadTypeClass_field_0xC ) /*0x52b048*/
      {
        WarheadTypeClass_field_0xC[1] = (unsigned int)(v8); /*0x52b04a*/
        *((unsigned int *)aP1->WarheadTypeClass_field_0x8 + 2) = aP1->WarheadTypeClass_field_0xC; /*0x52b053*/
        aP1->WarheadTypeClass_field_0xC = 0; /*0x52b056*/
        aP1->WarheadTypeClass_field_0x8 = 0; /*0x52b059*/
      }
    }
  }
  if ( (aP1 & 1) != 0 ) /*0x52b061*/
    __3_YAXPAX_Z(aP1); /*0x52b064*/
  return &aP1->Deform; /*0x52b06e*/

}
} // namespace gamemd
// 0x644630
namespace gamemd {
ParticleSystemTypeClass * * WarheadTypeClass::applyDamage(char *Source, int aP1, int a2, int a3, int a4, int a5, int a6, int a1, int aP0)
{

  int v2; // esi
  OverlayTypeClass *v3; // eax
  unsigned int *v4; // eax
  int v6; // ecx
  unsigned int *i; // edx

  if ( !_strcmpi(Source, g_Str__none_) || !strlen(Source) ) /*0x644649*/
    return (gamemd::ParticleSystemTypeClass **)(-1); /*0x644653*/
  v2 = 0; /*0x64465a*/
  if ( (int)g_InfantryTypeInitState <= 0 ) /*0x64465e*/
  {
    LABEL_6:
    v3 = (OverlayTypeClass *)__2_YAPAXI_Z(0x310u); /*0x644683*/
    if ( v3 ) /*0x644692*/
      v4 = OverlayTypeClass::Construct(v3, Source); /*0x644697*/
    else
      v4 = 0; /*0x6446a4*/
    v6 = 0; /*0x6446ac*/
    if ( (int)g_InfantryTypeInitState > 0 ) /*0x6446b0*/
    {
      for ( i = *(unsigned int **)&DataGlobal_A83D6C; (unsigned int *)*i != v4; ++i ) /*0x6446b2*/
      {
        if ( ++v6 >= (int)g_InfantryTypeInitState ) /*0x6446c2*/
          return (gamemd::ParticleSystemTypeClass **)(-1); /*0x6446c2*/
      }
      return (gamemd::ParticleSystemTypeClass **)(v6); /*0x6446cd*/
    }
    return (gamemd::ParticleSystemTypeClass **)(-1); /*0x6446ca*/
  }
  while ( _strcmpi(Source, (char *)(*(unsigned int *)(*(unsigned int *)&DataGlobal_A83D6C + 4 * v2) + 36)) ) /*0x644677*/
  {
    if ( ++v2 >= (int)g_InfantryTypeInitState ) /*0x644681*/
      goto LABEL_6; /*0x644681*/
  }
  return (gamemd::ParticleSystemTypeClass **)(v2); /*0x6446a0*/

}
} // namespace gamemd
// 0x75CEC0
namespace gamemd {
int WarheadTypeClass::Construct(ObjectClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{


  AbstractTypeClass::Constructor(aP1, a2); /*0x75cecb*/
  aP1->u32_98 = 0; /*0x75ced8*/
  aP1->Coord_9C = 0; /*0x75cede*/
  aP1->u32_F8 = 0; /*0x75cee4*/
  aP1->u32_FC = 1072693248; /*0x75ceeb*/
  aP1->q100 = 0; /*0x75cef8*/
  AnimTypeVector::Constructor(&aP1->q104, 0, 0); /*0x75cefe*/
  *(unsigned int *)(aP1 + 276) = 0; /*0x75cf08*/
  *&aP1->q118 = 10; /*0x75cf0b*/
  *(unsigned int *)(aP1 + 260) = (unsigned int)(&vt_TypeList); /*0x75cf0e*/
  aP1->q120 = 0; /*0x75cf14*/
  aP1->q124 = 0; /*0x75cf1a*/
  aP1->q128 = 0; /*0x75cf25*/
  aP1->q12C = 1065353216; /*0x75cf2b*/
  aP1->q130 = 0; /*0x75cf31*/
  aP1->q134 = 5; /*0x75cf37*/
  aP1->q138 = 1065353216; /*0x75cf41*/
  aP1->q13C = 0; /*0x75cf47*/
  aP1->q140 = 0; /*0x75cf4d*/
  aP1->u32_144 = 0; /*0x75cf53*/
  aP1->u8_145 = 0; /*0x75cf59*/
  aP1->q146 = 0; /*0x75cf5f*/
  aP1->u8_147 = 0; /*0x75cf65*/
  aP1->q148 = 0; /*0x75cf6b*/
  aP1->u8_149 = 0; /*0x75cf71*/
  aP1->u8_14A = 0; /*0x75cf77*/
  aP1->u8_14B = 0; /*0x75cf7d*/
  aP1->u32_14C = 0; /*0x75cf83*/
  aP1->__pad_14D = 0; /*0x75cf89*/
  aP1->u8_14E = 0; /*0x75cf8f*/
  aP1->u8_14F = 0; /*0x75cf95*/
  aP1->q150 = 0; /*0x75cf9b*/
  aP1->q151 = 0; /*0x75cfa1*/
  aP1->q152 = 0; /*0x75cfa7*/
  aP1->q153 = 0; /*0x75cfad*/
  aP1->q154 = 0; /*0x75cfb3*/
  aP1->u8_155 = 0; /*0x75cfb9*/
  aP1->q156 = 0; /*0x75cfbf*/
  aP1->u8_157 = 0; /*0x75cfc5*/
  aP1->q158 = 0; /*0x75cfcb*/
  aP1->u8_159 = 0; /*0x75cfd1*/
  aP1->u8_15A = 0; /*0x75cfd7*/
  aP1->u8_15B = 0; /*0x75cfdd*/
  aP1->q15C = 1247291207; /*0x75cfee*/
  *(unsigned int *)(aP1 + 352) = 298948665; /*0x75cff9*/
  *(unsigned int *)(aP1 + 356) = -1610610249; /*0x75d001*/
  aP1->q16C = 0; /*0x75d009*/
  aP1->q16D = 0; /*0x75d00f*/
  *(unsigned int *)(aP1 + 360) = -777003740; /*0x75d015*/
  aP1->u8_16E = 0; /*0x75d01a*/
  aP1->q170 = 0; /*0x75d020*/
  aP1->q174 = 0; /*0x75d026*/
  aP1->q175 = 0; /*0x75d02c*/
  aP1->q176 = 0; /*0x75d032*/
  aP1->u8_177 = 0; /*0x75d038*/
  aP1->u32_178 = 0; /*0x75d03e*/
  aP1->u8_179 = 1; /*0x75d044*/
  aP1->u8_17A = 0; /*0x75d04a*/
  aP1->u8_17B = 0; /*0x75d050*/
  aP1->u32_17C = 0; /*0x75d056*/
  aP1->u32_180 = 0; /*0x75d05c*/
  aP1->u32_184 = 0; /*0x75d06e*/
  aP1->u32_188 = 0; /*0x75d074*/
  *(unsigned int *)(aP1 + 400) = 0; /*0x75d07a*/
  *(unsigned int *)(aP1 + 404) = 0; /*0x75d07d*/
  *(unsigned char *)(aP1 + 408) = 1; /*0x75d080*/
  *(unsigned char *)(aP1 + 409) = 0; /*0x75d083*/
  *(unsigned int *)(aP1 + 416) = 10; /*0x75d086*/
  *(unsigned int *)(aP1 + 412) = 0; /*0x75d089*/
  *(unsigned int *)(aP1 + 396) = &vt_TypeList; /*0x75d08c*/
  *(unsigned char *)(aP1 + 436) = 1; /*0x75d092*/
  *(unsigned int *)(aP1 + 428) = 0; /*0x75d098*/
  *(unsigned int *)(aP1 + 432) = 0; /*0x75d09b*/
  *(unsigned char *)(aP1 + 437) = 0; /*0x75d09e*/
  *(unsigned int *)(aP1 + 444) = 10; /*0x75d0a1*/
  *(unsigned int *)(aP1 + 440) = 0; /*0x75d0a4*/
  *(unsigned int *)(aP1 + 424) = &vt_TypeList; /*0x75d0a7*/
  aP1->u32_1C4 = 0; /*0x75d0ae*/
  aP1->u32_1C8 = 0; /*0x75d0b4*/
  *(unsigned int *)aP1 = &vt_WarheadTypeClass; /*0x75d0ba*/
  *(unsigned int *)(aP1 + 4) = &vt_WarheadTypeClass; /*0x75d0c1*/
  /* X11: vtable install elided (implicit via WarheadTypeClass virtuals 0x75d0c7) */
  /* X11: vtable install elided (implicit via WarheadTypeClass virtuals 0x75d0ce) */
  (aP1 + 4)->GenerateUniqueID(); /*0x75d0d5*/
  (*(void (**)(int))(*(unsigned int *)(aP1 + 396) + 12))(aP1 + 396); /*0x75d0de*/
  (*(void (**)(int))(*(unsigned int *)(aP1 + 424) + 12))(aP1 + 424); /*0x75d0e5*/
  if ( g_WarheadTypePool < dword_8874C8 /*0x75d11c*/
    || (byte_8874CD || !dword_8874C8)
    && dword_8874D4 > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(WarheadTypeClass_Array + 8))(
         &WarheadTypeClass_Array,
         dword_8874C8 + dword_8874D4,
         0) )
  {
    int v3; // eax
    v3 = g_WarheadTypePool++; /*0x75d129*/
    *((unsigned int *)dword_8874C4 + v3) = aP1; /*0x75d138*/
  }
  if ( dword_B0F680 < dword_B0F678 /*0x75d16f*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F678 + dword_B0F684,
         0) )
  {
    int v4; // eax
    v4 = dword_B0F680++; /*0x75d17c*/
    *((unsigned int *)dword_B0F674 + v4) = aP1; /*0x75d18b*/
  }
  aP1->q0A0 = 0; /*0x75d19b*/
  *&aP1->u32_A4 = 1072693248; /*0x75d1a0*/
  memcpy((aP1 + 168), (aP1 + 160), 0x50u); /*0x75d1a7*/
  return aP1; /*0x75d1a9*/

}
} // namespace gamemd
// 0x75DEC0
namespace gamemd {
void* WarheadTypeClass::ProcessPower(int * a2, void *a2_2)
{

  int v3; // eax
  v3 = ((AbstractTypeClass *)((AbstractTypeClass *)a2_2))->ProcessPower(a2_2); /*0x75ded0*/
  (*((unsigned char *)&(v3))) = a2_2->pad_144[0]; /*0x75ded5*/
  ((Power *)a2_2)->FlagProcess(v3); /*0x75dede*/
  int v4; // ecx
  (*((unsigned char *)&(v4))) = a2_2->pad_144[3]; /*0x75dee3*/
  ((Power *)a2_2)->FlagProcess(v4); /*0x75deec*/
  int v5; // edx
  (*((unsigned char *)&(v5))) = a2_2->pad_144[4]; /*0x75def1*/
  int v6; // eax
  v6 = ((Power *)a2_2)->FlagProcess(v5); /*0x75defa*/
  (*((unsigned char *)&(v6))) = (&a2_2->pad_149)[0]; /*0x75deff*/
  ((Power *)a2_2)->FlagProcess(v6); /*0x75df08*/
  int v7; // ecx
  (*((unsigned char *)&(v7))) = (&a2_2->pad_149)[1]; /*0x75df0d*/
  ((Power *)a2_2)->FlagProcess(v7); /*0x75df16*/
  int v8; // edx
  (*((unsigned char *)&(v8))) = (&a2_2->pad_149)[2]; /*0x75df1b*/
  int v9; // eax
  v9 = ((Power *)a2_2)->FlagProcess(v8); /*0x75df24*/
  (*((unsigned char *)&(v9))) = (&a2_2->pad_149)[3]; /*0x75df29*/
  ((Power *)a2_2)->FlagProcess(v9); /*0x75df32*/
  int v10; // ecx
  (*((unsigned char *)&(v10))) = *(unsigned int *)&a2_2->Conventional; /*0x75df37*/
  ((Power *)a2_2)->FlagProcess(v10); /*0x75df40*/
  int v11; // edx
  (*((unsigned char *)&(v11))) = *(unsigned int *)&a2_2->Rocker; /*0x75df45*/
  int v12; // eax
  v12 = ((Power *)a2_2)->FlagProcess(v11); /*0x75df4e*/
  (*((unsigned char *)&(v12))) = *(unsigned int *)&a2_2->IonSensitive; /*0x75df53*/
  ((Power *)a2_2)->FlagProcess(v12); /*0x75df5c*/
  int v13; // ecx
  (*((unsigned char *)&(v13))) = *(unsigned int *)&a2_2->Bright; /*0x75df61*/
  ((Power *)a2_2)->FlagProcess(v13); /*0x75df6a*/
  int v14; // edx
  (*((unsigned char *)&(v14))) = *(unsigned int *)&a2_2->CLDisableRed; /*0x75df6f*/
  int v15; // eax
  v15 = ((Power *)a2_2)->FlagProcess(v14); /*0x75df78*/
  (*((unsigned char *)&(v15))) = *(unsigned int *)&a2_2->DrawBoltAsLaser; /*0x75df7d*/
  ((Power *)a2_2)->FlagProcess(v15); /*0x75df86*/
  int v16; // ecx
  (*((unsigned char *)&(v16))) = *(unsigned int *)&a2_2->CLDisableBlue; /*0x75df8b*/
  ((Power *)a2_2)->FlagProcess(v16); /*0x75df94*/
  ((Checksummer *)((Checksummer *)a2_2))->Add_double(*(unsigned int *)&a2_2->pad_44[84], *(unsigned int *)&a2_2->pad_44[88]); /*0x75dfa9*/
  Power::TimerProcess(a2_2->WarheadTypeClass_field_0x100); /*0x75dfb7*/
  ((Checksummer *)((Checksummer *)a2_2))->Add_double((int)a2_2->WarheadTypeClass_field_0xF8, *(unsigned int *)a2_2->__pad_FC); /*0x75dfcc*/
  int v17; // ecx
  (*((unsigned char *)&(v17))) = (*(((unsigned char *)&(a2_2->PsychicDamage)) + (sizeof(a2_2->PsychicDamage) - 1))); /*0x75dfd1*/
  ((Power *)a2_2)->FlagProcess(v17); /*0x75dfda*/
  Power::TimerProcess(a2_2->WarheadTypeClass_field_0x17C); /*0x75dfe8*/
  Power::TimerProcess(a2_2->WarheadTypeClass_field_0x180); /*0x75dff6*/
  Power::TimerProcess(a2_2->WarheadTypeClass_field_0x184); /*0x75e004*/
  Power::TimerProcess(a2_2->WarheadTypeClass_field_0x188); /*0x75e012*/
  Checksummer::Add_Buffer((Checksummer *)a2_2, (uint8_t *)&(&a2_2->Parasite)[3], 16); /*0x75e022*/
  int *v18; // ebx
  v18 = (int *)&a2_2->pad_44[92]; /*0x75e027*/
  int v20; // [esp+Ch] [ebp-4h]
  v20 = 11; /*0x75e02d*/
  do /*0x75e04f*/
  {
    ((Checksummer *)((Checksummer *)a2_2))->Add_double(*v18, v18[1]); /*0x75e03e*/
    v18 += 2; /*0x75e047*/
    --v20; /*0x75e04b*/
  }
  while ( v20 ); /*0x75e04f*/
  Power::TimerProcess(a2_2->WarheadTypeClass_field_0x114); /*0x75e05a*/
  return Power::TimerProcess(a2_2->WarheadTypeClass_field_0x120); /*0x75e06d*/
}
} // namespace gamemd
// 0x75E0C0
namespace gamemd {
int WarheadTypeClass::SaveLoad_Prefix(unsigned int * a1, int a2)
{

  WarheadTypeClass *v2 = a1; // edi /*0x75e0c4*/
  int *DebrisTypes; // ebp
  DebrisTypes = a1->DebrisTypes; /*0x75e0ce*/
  (*(void (**)(int *))(a1->DebrisTypes[0] + 12))(a1->DebrisTypes); /*0x75e0d6*/
  (*(void (**)(char *))(*&v2->vtable2 + 12))(&v2->WarheadTypeClass_1A8); /*0x75e0e7*/
  int v4 = a2; // esi /*0x75e0ea*/
  int result; // eax
  result = AbstractClass::SaveLoad_Prefix_0(v2, a2); /*0x75e0f0*/
  if ( result >= 0 ) /*0x75e0f7*/
  {
    if ( v2 ) /*0x75e0ff*/
    {
      AbstractTypeClass::Init((int)v2, (int)&a1); /*0x75e108*/
      ((DynamicVectorClass *)v2->q104)->AnimTypeConstructor(0, 0); /*0x75e117*/
      *(unsigned int *)v2->q104 = &vt_TypeList; /*0x75e120*/
      ((WarheadTypeClass *)DebrisTypes)->checkImmunity((int)&a1); /*0x75e12d*/
      (&v2->WarheadTypeClass_1A8)->calculateDamage((int)&a1); /*0x75e139*/
      v2->Deform = &vt_WarheadTypeClass; /*0x75e13e*/
      /* X11: vtable install elided (implicit via WarheadTypeClass virtuals 0x75e144) */
      /* X11: vtable install elided (implicit via WarheadTypeClass virtuals 0x75e14b) */
      /* X11: vtable install elided (implicit via WarheadTypeClass virtuals 0x75e152) */
    }
    if ( v2 != (WarheadTypeClass *)-260 ) /*0x75e161*/
    {
      ((DynamicVectorClass *)v2->q104)->AnimTypeConstructor(0, 0); /*0x75e169*/
      *(unsigned int *)v2->q104 = &vt_TypeList; /*0x75e16e*/
    }
    (*(void (__stdcall **)(int, WarheadTypeClass **, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a1, 4, 0); /*0x75e180*/
    int i; // ebx
    for ( i = 0; i < (int)a1; ++i ) /*0x75e18b*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a2, 4, 0); /*0x75e199*/
      DynamicVector::Add_Alt4((DynamicVector *)v2->q104, &a2); /*0x75e1a7*/
    }
    if ( DebrisTypes ) /*0x75e1b5*/
      TypeList::VoxelAnimConstructor((TypeList *)DebrisTypes); /*0x75e1b9*/
    (*(void (__stdcall **)(int, WarheadTypeClass **, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a1, 4, 0); /*0x75e1ca*/
    int j; // ebx
    for ( j = 0; j < (int)a1; ++j ) /*0x75e1d5*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a2, 4, 0); /*0x75e1e3*/
      DynamicVector::Add2((DynamicVector *)DebrisTypes, &a2); /*0x75e1ed*/
    }
    if ( v2 != (WarheadTypeClass *)-424 ) /*0x75e201*/
      TypeList::Construct(&v2->WarheadTypeClass_1A8); /*0x75e205*/
    (*(void (__stdcall **)(int, WarheadTypeClass **, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a1, 4, 0); /*0x75e216*/
    int k; // ebx
    for ( k = 0; k < (int)a1; ++k ) /*0x75e221*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a2, 4, 0); /*0x75e22f*/
      DynamicVector::Add_Alt(&v2->WarheadTypeClass_1A8, &a2); /*0x75e239*/
    }
    int m; // esi
    for ( m = 0; m < v2->q114; ++m ) /*0x75e24f*/
      ObjectPtr::RegisterForTracking( /*0x75e260*/
        (int)&SwizzleManagerClass_Instance,
        (int *)(v2->q108 + 4 * m));
    int n; // esi
    for ( n = 0; n < v2->unused_1CC[0]; ++n ) /*0x75e27a*/
      ObjectPtr::RegisterForTracking( /*0x75e28b*/
        (int)&SwizzleManagerClass_Instance,
        (int *)(v2->q190 + 4 * n));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->vtable2); /*0x75e2a7*/
    return 0; /*0x75e2ac*/
  }
  return result; /*0x75e2ae*/
}
} // namespace gamemd
// 0x75E2C0
namespace gamemd {
int WarheadTypeClass_SaveLoad_Prefix_0(WarheadTypeClass *aP0, WarheadTypeClass *aP0, unsigned int * a2, void * WarheadTypeClass_field_0x114)
{

  int result; // eax
  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a2, (int)WarheadTypeClass_field_0x114); /*0x75e2d1*/
  if ( result >= 0 ) /*0x75e2d8*/
  {
    int v7 = *a2; // edx /*0x75e2e4*/
    WarheadTypeClass_field_0x114 = (int *)aP0->u32_114;
    int v5; // ebx
    (*(void (__stdcall **)(int *, int **, int, unsigned int, int))(v7 + 16))(a2, &WarheadTypeClass_field_0x114, 4, 0, v5); /*0x75e2f5*/
    int i; // ebx
    for ( i = 0; i < a4; ++i ) /*0x75e300*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, aP0->u32_108 + 4 * i, 4, 0);
    int v9 = *a2; // edx /*0x75e323*/
    a4 = aP0->unused_1CC[0];
    (*(void (__stdcall **)(int *, int *, int, unsigned int))(v9 + 16))(a2, &a4, 4, 0); /*0x75e333*/
    int j; // ebx
    for ( j = 0; j < a4; ++j ) /*0x75e33e*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))( /*0x75e351*/
        a2,
        aP0->__pad_190 + 4 * j,
        4,
        0);
    int v11 = *a2; // edx /*0x75e361*/
    a4 = *&aP0->u32_1B8;
    (*(void (__stdcall **)(int *, int *, int))(v11 + 16))(a2, &a4, 4); /*0x75e371*/
    int k; // ebx
    for ( k = 0; k < (int)WarheadTypeClass_field_0x114; ++k ) /*0x75e37c*/
      (*(void (__stdcall **)(int *, char *, int, unsigned int))(*a2 + 16))( /*0x75e38f*/
        a2,
        &aP0->u32_1AC + 4 * k,
        4,
        0);
    return 0; /*0x75e399*/
  }
  return result; /*0x75e39c*/
}
} // namespace gamemd  // G42.35p: missing close restored
// 0x75E3B0
namespace gamemd {  // G42.18c ns repair
int WarheadTypeClass::FindOrCreate(ObjectClass * Source)
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x75e3cc*/
    return 0; /*0x75e42f*/
  v2 = 0; /*0x75e3dd*/
  if ( g_WarheadTypePool <= 0 ) /*0x75e3e1*/
  {
    LABEL_6:
    if ( operator new(0x1D0u) ) /*0x75e40b*/
      return WarheadTypeClass::Construct(Source); /*0x75e421*/
    return 0; /*0x75e415*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)dword_8874C4 + v2) + 36), Source) ) /*0x75e3fa*/
  {
    if ( ++v2 >= g_WarheadTypePool ) /*0x75e404*/
      goto LABEL_6; /*0x75e404*/
  }
  return *((unsigned int *)dword_8874C4 + v2); /*0x75e41f*/
}
}  // G42.18c ns repair
// 0x75E440
namespace gamemd {  // G42.18c ns repair
int WarheadTypeClass::GetDamage(int a2, int a3)
{


  int v3 = a2; // eax /*0x75e440*/
  if ( (void *)a2 == this->InfiniteMindControl ) /*0x75e44c*/
    this->InfiniteMindControl = 0; /*0x75e44e*/
  char *pad_104 = this->u32_104; // esi /*0x75e459*/
  a2 = v3; /*0x75e463*/
  int result; // eax
  result = (*(int (**)(char *, int *))(*(unsigned int *)this->u32_104 + 16))(this->u32_104, &a2); /*0x75e46c*/
  if ( result != -1 ) /*0x75e472*/
  {
    int v6; // ecx
    v6 = *((unsigned int *)pad_104 + 4); /*0x75e474*/
    if ( result < v6 ) /*0x75e479*/
    {
      int v7 = v6 - 1; // ecx /*0x75e47b*/
      for ( *((unsigned int *)pad_104 + 4) = v7; /*0x75e481*/
      result < *((unsigned int *)pad_104 + 4);
      *(unsigned int *)(*((unsigned int *)pad_104 + 1) + 4 * result - 4) = *(unsigned int *)(*((unsigned int *)pad_104 + 1) + 4 * result) )
      {
        ++result; /*0x75e486*/
      }
    }
  }
  return result; /*0x75e496*/

}
}  // G42.18c ns repair
// 0x75E510
namespace gamemd {  // G42.18c ns repair
CampaignClass * * WarheadTypeClass::Destructor(char a2, int a3, int a1)
{


  a3->Deform = &vt_WarheadTypeClass; /*0x75e516*/
  a3->WarheadTypeClass_field_0x4 = &vt_WarheadTypeClass; /*0x75e51c*/
  a3->WarheadTypeClass_field_0x8 = &vt_WarheadTypeClass; /*0x75e523*/
  a3->WarheadTypeClass_field_0xC = &vt_WarheadTypeClass; /*0x75e52a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)a3, 1); /*0x75e531*/
  WarheadTypeClass *v9; // [esp+4h] [ebp-4h] BYREF
  v9 = a3; /*0x75e546*/
  int v3; // eax
  v3 = ((int (*)(WarheadTypeClass **, WarheadTypeClass **))g_WarheadTypePool)( /*0x75e54a*/
         &WarheadTypeClass_Array,
         &v9);
  if ( v3 != -1 && v3 < g_WarheadTypePool && v3 < --g_WarheadTypePool ) /*0x75e565*/
  {
    do /*0x75e57d*/
    {
      ++v3; /*0x75e56d*/
      *((unsigned int *)dword_8874C4 + v3 - 1) = *((unsigned int *)dword_8874C4 + v3); /*0x75e571*/
    }
    while ( v3 < g_WarheadTypePool ); /*0x75e57d*/
  }
  v9 = a3; /*0x75e58f*/
  int v4; // eax
  v4 = (*(int (**)(int *, WarheadTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x75e593*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v9);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x75e5a3*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x75e5a8*/
    for ( ; /*0x75e5ae*/
    v4 < g_BuildingLoadQueue_Array.LightBlueTint;
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
    + 4 * v4) )
    {
      ++v4; /*0x75e5b6*/
    }
  }
  CampaignClass *WarheadTypeClass_field_0x1AC; // eax
  WarheadTypeClass_field_0x1AC = a3->WarheadTypeClass_field_0x1AC; /*0x75e5c8*/
  *(unsigned int *)&a3->__pad_1A0[8] = &vt_VectorClass; /*0x75e5d1*/
  if ( WarheadTypeClass_field_0x1AC && a3->__pad_1B0[5] ) /*0x75e5df*/
  {
    __3_YAXPAX_Z(WarheadTypeClass_field_0x1AC); /*0x75e5e8*/
    a3->WarheadTypeClass_field_0x1AC = 0; /*0x75e5f0*/
  }
  a3->__pad_1B0[5] = 0; /*0x75e5f6*/
  *(unsigned int *)a3->__pad_1B0 = 0; /*0x75e5fc*/
  void *v6; // eax
  v6 = (void *)a3->WarheadTypeClass_field_0x190[0]; /*0x75e602*/
  a3->DebrisTypes[0] = (int)&vt_VectorClass; /*0x75e608*/
  if ( v6 && BYTE1(a3->MinDebris) ) /*0x75e616*/
  {
    __3_YAXPAX_Z(v6); /*0x75e61f*/
    a3->WarheadTypeClass_field_0x190[0] = 0; /*0x75e627*/
  }
  BYTE1(a3->MinDebris) = 0; /*0x75e62d*/
  a3->MaxDebris = 0; /*0x75e633*/
  void *WarheadTypeClass_field_0x108; // eax
  WarheadTypeClass_field_0x108 = (void *)a3->WarheadTypeClass_field_0x108; /*0x75e639*/
  *(unsigned int *)a3->__pad_104 = &vt_VectorClass; /*0x75e63f*/
  if ( WarheadTypeClass_field_0x108 && a3->__pad_10C[5] ) /*0x75e64d*/
  {
    __3_YAXPAX_Z(WarheadTypeClass_field_0x108); /*0x75e656*/
    a3->WarheadTypeClass_field_0x108 = 0; /*0x75e65e*/
  }
  a3->__pad_10C[5] = 0; /*0x75e666*/
  *(unsigned int *)a3->__pad_10C = 0; /*0x75e66c*/
  ((AbstractTypeClass *)a3)->Dtor(); /*0x75e672*/
  if ( (a3 & 1) != 0 ) /*0x75e67e*/
    __3_YAXPAX_Z(a3); /*0x75e681*/
  return &a3->Deform; /*0x75e68b*/

}
}  // G42.18c ns repair
// 0x772080
namespace gamemd {
void* WarheadTypeClass_ReadINI(WarheadTypeClass *a1)
{
  unsigned int *v18; // eax
  unsigned int *v22; // eax
  int v55; // eax
  IntVector v58; // [esp-1Ch] [ebp-FCh] BYREF
  DynamicVector v65; // [esp+14h] [ebp-CCh] BYREF

  v3 = v3; /*0x772091*/
  INIClass::ResetSection( (INIClass *)a1); /*0x772095*/
  if ( !INIClass::BinarySearchSection( (INIClass *)((int)a1), &v3->__pad_024) ) /*0x7720a0*/
    return 0; /*0x7729d9*/
  v3->AmbientDamage = INIClass::ReadInt_Overwrite( /*0x7720c6*/
                              (bool *)a1,
                              &v3->__pad_024,
                              (unsigned char *)(aAmbientdamage),
                              v3->AmbientDamage);
  v3->IsSonic_d = INIClass::ReadBool_Overwrite( /*0x7720e0*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             aIssonic,
                             v3->IsSonic_d);
  v3->Spawner_d = INIClass::ReadBool_Overwrite( /*0x7720fa*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             aSpawner,
                             v3->Spawner_d);
  v3->LimboLaunch_d = INIClass::ReadBool_Overwrite( /*0x772114*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             aLimbolaunch,
                             v3->LimboLaunch_d);
  v3->DecloakToFire_d = INIClass::ReadBool_Overwrite( /*0x77212e*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             aDecloaktofire,
                             v3->DecloakToFire_d);
  v3->CellRangefinding_d = INIClass::ReadBool_Overwrite( /*0x772148*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             "CellRangefinding" /*w16g4 aCellrangefindi*/,
                             v3->CellRangefinding_d);
  v3->__pad_135 = INIClass::ReadBool_Overwrite( /*0x772162*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             "FireOnce" /*w16g4 aFireonce*/,
                             v3->__pad_135);
  v3->NeverUse_d = INIClass::ReadBool_Overwrite( /*0x77217c*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             "NeverUse" /*w16g4 aNeveruse*/,
                             v3->NeverUse_d);
  v3->RevealOnFire_d = INIClass::ReadBool_Overwrite( /*0x772196*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             "RevealOnFire" /*w16g4 aRevealonfire*/,
                             v3->RevealOnFire_d);
  v3->__pad_138 = INIClass::ReadBool_Overwrite( /*0x7721b0*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             "TerrainFire" /*w16g4 aTerrainfire*/,
                             v3->__pad_138);
  v3->q139 = INIClass::ReadBool_Overwrite( /*0x7721ca*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             "SabotageCursor" /*w16g4 aSabotagecursor*/,
                             v3->q139);
  *&v3->q13A = INIClass::ReadBool_Overwrite( /*0x7721e4*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             "MigAttackCursor" /*w16g4 aMigattackcurso*/,
                             v3->q13A);
  *&v3->q13B = INIClass::ReadBool_Overwrite( /*0x7721fe*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             "DisguiseFireOnly" /*w16g4 aDisguisefireon*/,
                             v3->q13B);
  v3->InfiniteMindControl_d = INIClass::ReadBool_Overwrite( /*0x772218*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             "InfiniteMindControl" /*w16g4 aInfinitemindco*/,
                             v3->InfiniteMindControl_d);
  v3->FireWhileMoving_d = INIClass::ReadBool_Overwrite( /*0x772232*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             "FireWhileMoving" /*w16g4 aFirewhilemovin*/,
                             v3->FireWhileMoving_d);
  v3->__pad_142 = INIClass::ReadBool_Overwrite( /*0x77224c*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             "DrainWeapon" /*w16g4 aDrainweapon*/,
                             v3->__pad_142);
  *&v3->q143 = INIClass::ReadBool_Overwrite( /*0x772266*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             "FireInTransport" /*w16g4 aFireintranspor*/,
                             v3->q143);
  *&v3->q13C = INIClass::ReadInt_Overwrite( /*0x772280*/
                              (bool *)a1,
                              &v3->__pad_024,
                              (unsigned char *)("DisguiseFakeBlinkTime" /*w16g4 aDisguisefakebl*/),
                              v3->q13C);
  v3->Suicide_d = INIClass::ReadBool_Overwrite( /*0x77229a*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             (uint8_t *)aSuicide,
                             v3->Suicide_d);
  v3->Supress_d = INIClass::ReadBool_Overwrite( /*0x7722b4*/
                             &a1->vtable0,
                             &v3->__pad_024,
                             "Supress" /*w16g4 aSupress*/,
                             v3->Supress_d);
  v3->Burst = INIClass::ReadInt_Overwrite( /*0x7722ce*/
                              (bool *)a1,
                              &v3->__pad_024,
                              (unsigned char *)("Burst" /*w16g4 aBurst*/),
                              v3->Burst);
  v3->Damage = INIClass::ReadInt_Overwrite( /*0x7722e8*/
                              (bool *)a1,
                              &v3->__pad_024,
                              (unsigned char *)(g_INI_Key_Damage),
                              v3->Damage);
  v3->Speed = WarheadTypeClass::loadWarheadINI( /*0x772302*/
                              (WarheadTypeClass *)a1,
                              &v3->__pad_024,
                              g_INI_Key_Speed,
                              v3->Speed);
  v3->ROF = INIClass::ReadInt_Overwrite( /*0x77231c*/
                              (bool *)a1,
                              &v3->__pad_024,
                              (unsigned char *)(&off_825478),
                              v3->ROF);
  v3->Range = INIClass::ReadCoord(&v3->__pad_024, g_INI_Key_Range, v3->Range); /*0x772336*/
  v3->MinimumRange = INIClass::ReadCoord( /*0x77235b*/
                              &v3->__pad_024,
                              (uint8_t *)"MinimumRange" /*w16g4 aMinimumrange*/,
                              v3->MinimumRange);
  int INIClassIntList; // [esp+10h] [ebp-D0h] BYREF
  INIClassIntList = (int)&v58; /*0x772362*/
  IntVector::Copy(&v58, &v3->Report); /*0x772366*/
  unsigned int *v5; // eax
  v5 = (unsigned int *)INIClassIntList; /*0x77236b*/
  INIClassIntList->uniqueId = v3->OpenToppedAnim; /*0x772377*/
  v5->u32_14 = v3->AttachedParticleSystem; /*0x77237d*/
  *v5 = (unsigned int)(void*)(void*)&TypeList_int_vftable; /*0x772382*/
  uint8_t *inited; // eax
  inited = (uint8_t *)__0Iostream_init_QAE_XZ_4(&v3->__pad_024); /*0x772388*/
  uint8_t *v59; // [esp-14h] [ebp-F4h]
  uint8_t *p_INIClassIntList; // [esp-10h] [ebp-F0h]
  char *v61; // [esp-Ch] [ebp-ECh]
  uint8_t *v62; // [esp-8h] [ebp-E8h]
  int v63; // [esp-4h] [ebp-E4h]
  INIClassIntList = (unsigned int)GetINIClassIntList( /*0x77239c*/
                        (int)&v65,
                        (uint8_t ***)a1,
                        inited,
                        aReport,
                        *(void ***)v58.__pad_000,
                        (void *)v58.q004,
                        (int)v59,
                        (int16_t)p_INIClassIntList,
                        (int)v61,
                        (int)v62,
                        v63);
  TypeList::Copy(&v3->Report, (unsigned int *)INIClassIntList); /*0x7723a0*/
  int v7 = INIClassIntList; // eax /*0x7723a5*/
  v3->OpenToppedAnim = INIClassIntList->uniqueId; /*0x7723ac*/
  v3->AttachedParticleSystem = v7->BarrelThickness; /*0x7723b2*/
  int v8 = v7->TurretLocked; // edx /*0x7723b5*/
  void *v9; // eax
  v9 = *(void **)&v65.FLH; /*0x7723b8*/
  v3->LaserInnerColor = v8; /*0x7723bc*/
  *(unsigned int *)v65.WeaponType = (unsigned int)(void*)(void*)&VectorClass_int_vftable; /*0x7723c1*/
  if ( v9 && v65.IsAllocated ) /*0x7723d1*/
    RA2_OPDEL(v9); /*0x7723d4*/
  INIClassIntList = (int)&v58; /*0x7723e8*/
  IntVector::Copy(&v58, &v3->DownReport); /*0x7723ec*/
  unsigned int *v10; // eax
  v10 = (unsigned int *)INIClassIntList; /*0x7723f1*/
  INIClassIntList->uniqueId = v3->CellRangefinding; /*0x7723fd*/
  v10->u32_14 = v3->TerrainFire; /*0x772405*/
  *v10 = (unsigned int)(void*)(void*)&TypeList_int_vftable; /*0x772408*/
  uint8_t *v11; // eax
  v11 = (uint8_t *)__0Iostream_init_QAE_XZ_4(&v3->__pad_024); /*0x77240e*/
  INIClassIntList = (unsigned int)GetINIClassIntList( /*0x772422*/
                        (int)&v65,
                        (uint8_t ***)a1,
                        v11,
                        (uint8_t *)aDownreport,
                        *(void ***)v58.__pad_000,
                        (void *)v58.q004,
                        (int)v59,
                        (int16_t)p_INIClassIntList,
                        (int)v61,
                        (int)v62,
                        v63);
  TypeList::Copy(&v3->DownReport, (unsigned int *)INIClassIntList); /*0x772426*/
  int v12 = INIClassIntList; // eax /*0x77242b*/
  v3->CellRangefinding = INIClassIntList->uniqueId; /*0x772432*/
  v3->TerrainFire = v12->BarrelThickness; /*0x772438*/
  v3->DisguiseFakeBlinkTime = v12->TurretLocked; /*0x77243e*/
  *(unsigned int *)v65.WeaponType = (unsigned int)(void*)(void*)&VectorClass_int_vftable; /*0x772447*/
  if ( *(unsigned int *)&v65.FLH && v65.IsAllocated ) /*0x772457*/
    RA2_OPDEL(*(void **)&v65.FLH); /*0x77245a*/
  char String[128]; // [esp+60h] [ebp-80h] BYREF
  if ( INIClass::GetString( /*0x772479*/
           (INIClass *)a1,
           &v3->__pad_024,
           (uint8_t *)aAnim_0,
           &g_INI_DefaultBuffer,
           String,
           128) )
  {
    ((DynamicVectorClass *)&v65)->AnimTypeConstructor( 0, 0); /*0x77248e*/
    *(unsigned int *)v65.WeaponType = (unsigned int)(void*)(void*)&TypeList_AnimTypeClass_const___vftable; /*0x77249d*/
    char *i; // eax
    for ( i = strtok(String, (char *)&::Delimiter); i; i = strtok(0, (char *)&::Delimiter) ) /*0x7724af*/
    {
      if ( !*i ) /*0x7724b1*/
        break; /*0x7724b4*/
      INIClassIntList = (int)AnimTypeClass::FindOrCreate(i); /*0x7724bf*/
      if ( INIClassIntList ) /*0x7724c3*/
        ((DynamicVector *)&v65)->Add_Alt4( (unsigned int *)(&INIClassIntList)); /*0x7724ce*/
    }
    TypeList::AnimTypeCopy((TypeList *)&v65.q01C, &v65); /*0x7724ef*/
    *(unsigned int *)v65.WeaponType = (unsigned int)(void*)(void*)&VectorClass_AnimTypeClass_const___vftable; /*0x7724f8*/
    DynamicVectorClass::Destroy_Alt(  (_VectorClass_PBVAnimTypeClass *)&v65); /*0x772500*/
  }
  else
  {
    TypeList::AnimTypeCopy((TypeList *)&v65.q01C, &v3->InfiniteMindControl); /*0x772512*/
  }
  (&v3->InfiniteMindControl)->CopyDefault( (unsigned int *)(&v65.q01C)); /*0x772524*/
  v66 = v66; /*0x77252d*/
  v67 = v67; /*0x772531*/
  int v68; // [esp+48h] [ebp-98h]
  v3->RadLevel = v68; /*0x772535*/
  void *v16; // eax
  v16 = *(void **)v65.q020; /*0x772538*/
  v3->AreaFire = v66; /*0x77253c*/
  v3->IsRadBeam = v67; /*0x772541*/
  v65.q01C = (int)(void*)(void*)&VectorClass_AnimTypeClass_const___vftable; /*0x772544*/
  if ( v16 && (((unsigned char *)&(v65.q028))[1]) ) /*0x772554*/
    RA2_OPDEL(v16); /*0x772557*/
  unsigned int *v17 = v3->AssaultAnim_d; // ebp /*0x77255f*/
  if ( INIClass::GetString( /*0x77257c*/
           (INIClass *)a1,
           &v3->__pad_024,
           aAssaultanim,
           &g_INI_DefaultBuffer,
           String,
           128) )
  {
    v18 = (unsigned int *)AnimTypeClass::FindOrCreate(String); /*0x772589*/
  }
  else
  {
    v18 = v17; /*0x772590*/
  }
  v63 = 128; /*0x772596*/
  v62 = (uint8_t *)String; /*0x77259b*/
  v61 = &g_INI_DefaultBuffer; /*0x77259c*/
  p_INIClassIntList = aOccupantanim; /*0x7725a1*/
  v3->AssaultAnim_d = (unsigned int)v18; /*0x7725a6*/
  unsigned int *v19 = v3->IsMagBeam; // ebp /*0x7725ac*/
  unsigned int *v20; // eax
  if ( INIClass::GetString((INIClass *)a1, &v3->__pad_024, p_INIClassIntList, v61, (char *)v62, v63) ) /*0x7725b5*/
    v20 = (unsigned int *)AnimTypeClass::FindOrCreate(String); /*0x7725c2*/
  else
    v20 = v19; /*0x7725c9*/
  v3->IsMagBeam = (unsigned int)v20; /*0x7725cb*/
  unsigned int *v21 = v3->OpenToppedAnim_d; // ebp /*0x7725d1*/
  if ( INIClass::GetString( /*0x7725ee*/
           (INIClass *)a1,
           &v3->__pad_024,
           aOpentoppedanim,
           &g_INI_DefaultBuffer,
           String,
           128) )
  {
    v22 = (unsigned int *)AnimTypeClass::FindOrCreate(String); /*0x7725fb*/
  }
  else
  {
    v22 = v21; /*0x772602*/
  }
  char v23 = v3->Camera_d; // cl /*0x772604*/
  v3->OpenToppedAnim_d = (unsigned int)v22; /*0x77260a*/
  char Bool_Overwrite; // al
  Bool_Overwrite = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)(v3 + 36), aCamera, v23); /*0x772619*/
  (*((unsigned char *)&(v63))) = v3->IsLaser_d; /*0x772626*/
  v62 = aIslaser; /*0x772627*/
  v61 = (char *)(v3 + 36); /*0x77262c*/
  v3->Camera_d = Bool_Overwrite; /*0x77262d*/
  v3->IsLaser_d = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)v61, v62, v63); /*0x772638*/
  char v25; // al
  v25 = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)(v3 + 36), aDisklaser, v3->__pad_14A); /*0x77264d*/
  char v26; // cl
  v26 = *(unsigned char *)(v3 + 331); /*0x772652*/
  v3->__pad_14A = v25; /*0x772658*/
  char v27; // al
  v27 = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)(v3 + 36), aIsline, v26); /*0x772667*/
  (*((unsigned char *)&(v63))) = *(unsigned char *)(v3 + 333); /*0x772674*/
  v62 = aIshousecolor; /*0x772675*/
  v61 = (char *)(v3 + 36); /*0x77267a*/
  *(unsigned char *)(v3 + 331) = v27; /*0x77267b*/
  *(unsigned char *)(v3 + 333) = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)v61, v62, v63); /*0x772686*/
  char v28; // al
  v28 = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)(v3 + 36), aCharges, v3->Charges_d); /*0x77269b*/
  char v29 = v3->__pad_145; // cl /*0x7726a0*/
  v3->Charges_d = v28; /*0x7726a6*/
  char v30; // al
  v30 = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)(v3 + 36), aTurboboost, v29); /*0x7726b5*/
  (*((unsigned char *)&(v63))) = v3->UseFireParticles_d; /*0x7726c2*/
  v62 = aUsefireparticl; /*0x7726c3*/
  v61 = (char *)(v3 + 36); /*0x7726c8*/
  v3->__pad_145 = v30; /*0x7726c9*/
  v3->UseFireParticles_d = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)v61, v62, v63); /*0x7726d4*/
  char v31; // al
  v31 = INIClass::ReadBool_Overwrite( /*0x7726e9*/
            &a1->vtable0,
            &v3->__pad_024,
            aUsesparkpartic,
            v3->q12A);
  char v32 = v3->__pad_12B; // cl /*0x7726ee*/
  *&v3->q12A = v31; /*0x7726f4*/
  char v33; // al
  v33 = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)(v3 + 36), aOmnifire, v32); /*0x772703*/
  (*((unsigned char *)&(v63))) = *(unsigned char *)(v3 + 300); /*0x772710*/
  v62 = aDistributedwea; /*0x772711*/
  v61 = (char *)(v3 + 36); /*0x772716*/
  v3->__pad_12B = v33; /*0x772717*/
  *(unsigned char *)(v3 + 300) = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)v61, v62, v63); /*0x772722*/
  char v34; // al
  v34 = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)(v3 + 36), aIsrailgun, *(unsigned char *)(v3 + 301)); /*0x772737*/
  char v35; // cl
  v35 = *(unsigned char *)(v3 + 302); /*0x77273c*/
  *(unsigned char *)(v3 + 301) = v34; /*0x772742*/
  char v36; // al
  v36 = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)(v3 + 36), aLobber, v35); /*0x772751*/
  v63 = v3 + 288; /*0x772760*/
  v62 = aLaserinnercolo; /*0x772761*/
  v61 = (char *)(v3 + 36); /*0x772766*/
  p_INIClassIntList = (uint8_t *)&INIClassIntList; /*0x772767*/
  *(unsigned char *)(v3 + 302) = v36; /*0x77276a*/
  int Coord; // eax
  Coord = INIClass::GetCoord( /*0x772770*/
              (INIClass *)a1,
              (int)p_INIClassIntList,
              (uint8_t *)v61,
              v62,
              (uint8_t *)v63);
  v3->LaserInnerColor_d = *(unsigned short *)Coord; /*0x772778*/
  v3->ptr_122 = *(unsigned char *)(Coord + 2); /*0x772785*/
  int v38; // eax
  v38 = INIClass::GetCoord( /*0x772796*/
            (INIClass *)a1,
            (int)&INIClassIntList,
            &v3->__pad_024,
            aLaseroutercolo,
            &v3->q123);
  *&v3->q123 = *(unsigned short *)v38; /*0x77279e*/
  v3->ptr_125 = *(unsigned char *)(v38 + 2); /*0x7727ab*/
  int v39; // eax
  v39 = INIClass::GetCoord( /*0x7727bc*/
            (INIClass *)a1,
            (int)&INIClassIntList,
            &v3->__pad_024,
            aLaserouterspre,
            &v3->q126);
  *&v3->q126 = *(unsigned short *)v39; /*0x7727c4*/
  char v40; // dl
  v40 = *(unsigned char *)(v39 + 2); /*0x7727ca*/
  v63 = *(char *)(v3 + 334); /*0x7727d4*/
  v62 = aLaserduration; /*0x7727d5*/
  v61 = (char *)(v3 + 36); /*0x7727da*/
  *(unsigned char *)(v3 + 296) = v40; /*0x7727db*/
  char Int_Overwrite; // al
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a1, (uint8_t *)v61, v62, v63); /*0x7727de*/
  char v42; // cl
  v42 = *(unsigned char *)(v3 + 332); /*0x7727e3*/
  *(unsigned char *)(v3 + 334) = Int_Overwrite; /*0x7727e9*/
  char v43; // al
  v43 = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)(v3 + 36), aIsbiglaser, v42); /*0x7727f8*/
  (*((unsigned char *)&(v63))) = *(unsigned char *)(v3 + 303); /*0x772805*/
  v62 = aBright; /*0x772806*/
  v61 = (char *)(v3 + 36); /*0x77280b*/
  *(unsigned char *)(v3 + 332) = v43; /*0x77280c*/
  *(unsigned char *)(v3 + 303) = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)v61, v62, v63); /*0x772817*/
  char v44; // al
  v44 = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)(v3 + 36), aIonsensitive, *(unsigned char *)(v3 + 335)); /*0x77282c*/
  char v45 = v3->AreaFire_d; // cl /*0x772831*/
  *(unsigned char *)(v3 + 335) = v44; /*0x772837*/
  char v46; // al
  v46 = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)(v3 + 36), aAreafire, v45); /*0x772846*/
  (*((unsigned char *)&(v63))) = v3->IsElectricBolt_d; /*0x772853*/
  v62 = aIselectricbolt; /*0x772854*/
  v61 = (char *)(v3 + 36); /*0x772859*/
  v3->AreaFire_d = v46; /*0x77285a*/
  v3->IsElectricBolt_d = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)v61, v62, v63); /*0x772865*/
  char v47; // al
  v47 = INIClass::ReadBool_Overwrite( /*0x77287a*/
            &a1->vtable0,
            &v3->__pad_024,
            aDrawboltaslase,
            v3->DrawBoltAsLaser_d);
  char v48 = v3->IsAlternateColor_d; // cl /*0x77287f*/
  v3->DrawBoltAsLaser_d = v47; /*0x772885*/
  char v49; // al
  v49 = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)(v3 + 36), aIsalternatecol, v48); /*0x772894*/
  (*((unsigned char *)&(v63))) = v3->__pad_154; /*0x7728a1*/
  v62 = aIsradbeam; /*0x7728a2*/
  v61 = (char *)(v3 + 36); /*0x7728a7*/
  v3->IsAlternateColor_d = v49; /*0x7728a8*/
  v3->__pad_154 = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)v61, v62, v63); /*0x7728b3*/
  char v50; // al
  v50 = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)(v3 + 36), aIsraderuption, *(unsigned char *)(v3 + 341)); /*0x7728c8*/
  int v51; // ecx
  v51 = *(unsigned int *)(v3 + 344); /*0x7728cd*/
  *(unsigned char *)(v3 + 341) = v50; /*0x7728d3*/
  int v52; // eax
  v52 = INIClass::ReadInt_Overwrite((bool *)a1, (uint8_t *)(v3 + 36), aRadlevel, v51); /*0x7728e2*/
  (*((unsigned char *)&(v63))) = *(unsigned char *)(v3 + 348); /*0x7728ef*/
  v62 = aIsmagbeam; /*0x7728f0*/
  v61 = (char *)(v3 + 36); /*0x7728f5*/
  *(unsigned int *)(v3 + 344) = v52; /*0x7728f6*/
  *(unsigned char *)(v3 + 348) = INIClass::ReadBool_Overwrite(&a1->vtable0, (uint8_t *)v61, v62, v63); /*0x772901*/
  char Source[20]; // [esp+4Ch] [ebp-94h] BYREF
  Source[0] = 0; /*0x77291b*/
  INIClass::GetString((INIClass *)a1, (uint8_t *)(v3 + 36), aAttachedpartic, Source, Source, 20); /*0x772920*/
  int v53; // eax
  v53 = WarheadTypeClass::applyDamage(Source); /*0x772929*/
  if ( v53 != -1 ) /*0x772931*/
    v3->__pad_11C = *((unsigned int *)dword_A83D6C + v53); /*0x77293c*/
  int v54 = v3->Warhead; // ebp /*0x772942*/
  if ( INIClass::GetString( /*0x77295f*/
           (INIClass *)a1,
           &v3->__pad_024,
           g_INI_Key_Warhead,
           &g_INI_DefaultBuffer,
           String,
           128) )
  {
    v55 = ((WarheadTypeClass *)(String))->FindOrCreate(); /*0x77296c*/
  }
  else
  {
    v55 = v54; /*0x772973*/
  }
  int v56 = v3->Projectile; // ebp /*0x772975*/
  v63 = 128; /*0x77297f*/
  v62 = (uint8_t *)String; /*0x772984*/
  v61 = &g_INI_DefaultBuffer; /*0x772985*/
  p_INIClassIntList = (uint8_t *)(aProjectile); /*0x77298a*/
  v59 = (uint8_t *)(v3 + 36); /*0x77298f*/
  v3->Warhead = v55; /*0x772992*/
  if ( INIClass::GetString((INIClass *)a1, v59, p_INIClassIntList, v61, (char *)v62, v63) ) /*0x772998*/
    v3->Projectile = ObjectTypeClass::FindOrCreate( (ObjectClass *)(String)); /*0x7729aa*/
  else
    v3->Projectile = v56; /*0x7729c1*/
  return 1; /*0x7729b2*/
}
}
// 0x524ED0
namespace gamemd {  // G42.18c ns repair
void WarheadTypeClass::GetClassIdentifier()
{

  void *v2 = *&this->vtable2; // eax /*0x524ed6*/
  *&this->uniqueId = 0; /*0x524ed9*/
  if ( v2 && (this->IsAllocated) ) /*0x524ee0*/
  {
    operator delete((v2)); /*0x524ee6*/
    *&this->vtable2 = 0; /*0x524eee*/
  }
  (this->IsAllocated) = 0; /*0x524ef1*/
  *&this->vtable3 = 0; /*0x524ef4*/
}
}  // G42.18c ns repair
// 0x524F00
namespace gamemd {  // G42.18c ns repair
unsigned int WarheadTypeClass::LoadTypeData(int a2)
{
  if ( (this->vtable4) ) /*0x524f00*/
    return (unsigned int)(a2 - *&this->vtable2) >> 2; /*0x524f15*/
  else
    return 0; /*0x524f07*/
}
}  // G42.18c ns repair
// 0x524FB0
namespace gamemd {  // G42.18c ns repair
int WarheadTypeClass::SaveToINI(int a2)
{
  return *(unsigned int *)(*&this->vtable2 + 4 * a2); /*0x524fba*/
}
}  // G42.18c ns repair
// 0x524FC0
namespace gamemd {  // G42.18c ns repair
TypeList_flat * WarheadTypeClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax
  v3 = (void *)*(Block + 1); /*0x524fc3*/
  *Block = &vt_VectorClass; /*0x524fc6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x524fd0*/
  {
    operator delete((v3)); /*0x524fd8*/
    *(Block + 1) = 0; /*0x524fe0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x524feb*/
  *(Block + 2) = 0; /*0x524ff1*/
  if ( (a2 & 1) != 0 ) /*0x524ff8*/
    operator delete((Block)); /*0x524ffb*/
  return Block; /*0x525005*/
}
}  // G42.18c ns repair
// 0x5250D0
namespace gamemd {  // G42.18c ns repair
char WarheadTypeClass::AddRef(int a2)
{

  int m_8 = *&this->vtable3; // esi /*0x5250d2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5250dd*/
  {
    int v3 = 0; // edx /*0x5250df*/
    if ( m_8 <= 0 ) /*0x5250e3*/
      return 1; /*0x525103*/
    unsigned int *v4 = *&this->vtable2; // eax /*0x5250e5*/
    int v5; // ecx
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5250eb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5250f4*/
    {
      ++v3; /*0x5250f6*/
      ++v4; /*0x5250f7*/
      if ( v3 >= m_8 ) /*0x5250fc*/
        return 1; /*0x5250fc*/
    }
  }
  return 0; /*0x5250fe*/
}
}  // G42.18c ns repair
// 0x525400
namespace gamemd {  // G42.18c ns repair
int WarheadTypeClass::Init(unsigned int * a2, void *a2_2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{

  int m_10 = *&this->uniqueId; // edx /*0x525400*/
  int result = 0; // eax /*0x525403*/
  if ( m_10 <= 0 ) /*0x525408*/
    return -1; /*0x52541f*/
  unsigned int *i; // ecx
  for ( i = *&this->vtable2; *i != *a2; ++i ) /*0x52540e*/
  {
    if ( ++result >= m_10 ) /*0x52541d*/
      return -1; /*0x52541d*/
  }
  return result; /*0x525422*/
}
}  // G42.18c ns repair
// 0x52AD50
namespace gamemd {  // G42.18c ns repair
void * WarheadTypeClass::parseModifiers(char a2)
{

  int v5; // edi

  void *WarheadTypeClass_field_0xC = this->vtable4; // eax /*0x52ad54*/
  this->Deform = &vt_INIClassINIEntry; /*0x52ad57*/
  free(WarheadTypeClass_field_0xC); /*0x52ad5e*/
  void *WarheadTypeClass_field_0x10; // [esp-8h] [ebp-10h]
  WarheadTypeClass_field_0x10 = this->uniqueId; /*0x52ad68*/
  this->WarheadTypeClass_field_0xC = 0; /*0x52ad69*/
  free(WarheadTypeClass_field_0x10); /*0x52ad6c*/
  int v4; // eax
  v4 = this->AnimList[0]; /*0x52ad71*/
  this->uniqueId = 0; /*0x52ad79*/
  if ( v4 ) /*0x52ad7c*/
  {
    do /*0x52ada0*/
    {
      free(*(void **)this->AnimList[0]); /*0x52ad85*/
      v5 = *(unsigned int *)(this->AnimList[0] + 4); /*0x52ad8f*/
      __3_YAXPAX_Z((void *)this->AnimList[0]); /*0x52ad93*/
      this->AnimList[0] = v5; /*0x52ad9d*/
    }
    while ( v5 ); /*0x52ada0*/
  }
  free((void *)this->InfDeath[0]); /*0x52ada7*/
  this->InfDeath[0] = 0; /*0x52adb1*/
  this->Deform = &vt_GenericNode; /*0x52adb4*/
  if ( this ) /*0x52adba*/
  {
    void *WarheadTypeClass_field_0x4 = this->vtable2; // ecx /*0x52adbc*/
    if ( WarheadTypeClass_field_0x4 ) /*0x52adc1*/
    {
      unsigned int *WarheadTypeClass_field_0x8 = this->vtable3; // eax /*0x52adc3*/
      if ( WarheadTypeClass_field_0x8 ) /*0x52adc8*/
      {
        WarheadTypeClass_field_0x8->ptr_4 = WarheadTypeClass_field_0x4; /*0x52adca*/
        *((unsigned int *)this->vtable2 + 2) = this->vtable3; /*0x52add3*/
        this->vtable3 = 0; /*0x52add6*/
        this->vtable2 = 0; /*0x52add9*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52ade1*/
    __3_YAXPAX_Z(this); /*0x52ade4*/
  return this; /*0x52adee*/

}
}  // G42.18c ns repair
// 0x52AE00
namespace gamemd {  // G42.18c ns repair
WarheadTypeClass * WarheadTypeClass::parseAnimations(char * Block, char a2)
{

  char *v2; // ecx
  WarheadTypeClass *v3; // esi
  v3 = (WarheadTypeClass *)v2; /*0x52ae01*/
  WarheadTypeClass::parseVerses(v2); /*0x52ae03*/
  if ( ((uint8_t)Block & 1) != 0 ) /*0x52ae0d*/
    operator delete((v3)); /*0x52ae10*/
  return v3; /*0x52ae1a*/
}
}  // G42.18c ns repair
// 0x672990
namespace gamemd {  // G42.18c ns repair
int WarheadTypeClass::LoadType()
{

  int KeyCount; // ebx
  INIClass *v6; // [esp+30h] [ebp+4h]
  KeyCount = INIClass::GetKeyCount(v6->__pad_0, g_INI_Key_Warheads); /*0x6729a6*/
  int i; // esi
  for ( i = 0; i < KeyCount; ++i ) /*0x6729ac*/
  {
    uint8_t *StringByIndex; // eax
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v6->__pad_0, g_INI_Key_Warheads, i); /*0x6729c2*/
    char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
    if ( INIClass::GetString(v6, g_INI_Key_Warheads, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x6729cf*/
      WarheadTypeClass::FindOrCreate(Destination); /*0x6729dc*/
  }
  return KeyCount > 0; /*0x6729e8*/
}
}  // G42.18c ns repair
// 0x75E4F0
namespace gamemd {  // G42.18c ns repair
int WarheadTypeClass::GetObjectSize()
{
  return 464; /*0x75e4f5*/
}
}  // G42.18c ns repair
// 0x75E500
namespace gamemd {  // G42.18c ns repair
int WarheadTypeClass::GetTypeIdentifier()
{
  return 50; /*0x75e505*/
}
}  // G42.18c ns repair
// 0x75E690
namespace gamemd {  // G42.18c ns repair
CCINIClass * WarheadTypeClass::checkImmunity(int aP1)
{
  this->Deform = &vt_TypeList; /*0x75e692*/
  return &this->Deform; /*0x75e698*/
}
}  // G42.18c ns repair
// 0x75E6A0
namespace gamemd {  
// G42.35f: def was outside namespace (pre-existing damage)
this->Deform =(unsigned int)(void*)&TypeList_int_vftable; /*0x75e6a2*/
return &this->Deform; /*0x75e6a8*/
}