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
  int result; // eax

  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)this, a2, a3, -1); /*0x47481c*/
  if ( Int_Overwrite == -1 ) /*0x474824*/
    return a4; /*0x474826*/
  if ( Int_Overwrite >= 100 ) /*0x474830*/
    Int_Overwrite = 100; /*0x474832*/
  result = ((Int_Overwrite <= 0 ? 0 : Int_Overwrite) << 8) / 100;
  if ( result >= 255 ) /*0x47485c*/
    return 255; /*0x47485e*/
  return result; /*0x47482a*/

}
} // namespace gamemd
// 0x525300
namespace gamemd {
AbstractClass * * WarheadTypeClass::Release(int a2, unsigned int * a3)
{


  if ( a2 ) /*0x52530c*/
  {
    LOBYTE(this->ptr_C) = 0; /*0x525312*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x525318*/
      v4 = a3; /*0x52532e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x52532a*/
    LOBYTE(this->ptr_C) = 1; /*0x525332*/
    if ( !v4 ) /*0x525336*/
      return 0; /*0x5253aa*/
    if ( *&this->ptr_4 ) /*0x525338*/
    {
      int m_8; // ecx
      m_8 = (int)(this->ptr_8); /*0x52533f*/
      if ( a2 < m_8 ) /*0x525344*/
        m_8 = a2; /*0x525346*/
      int i; // eax
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->ptr_4 + 4 * i - 4) ) /*0x52534c*/
        ++i; /*0x525351*/
      if ( BYTE1(this->ptr_C) ) /*0x52535e*/
      {
        __3_YAXPAX_Z(*&this->ptr_4); /*0x525369*/
        *&this->ptr_4 = 0; /*0x525371*/
      }
    }
    *&this->ptr_4 = v4; /*0x52537a*/
    this->m_8 = (void *)(a2); /*0x525382*/
    BYTE1(this->ptr_C) = a3 == 0; /*0x525385*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PBVAnimTypeClass *))(*(unsigned int *)this->q0 + 12))(this); /*0x52538e*/
  }
  int v7; // eax
  v7 = (int)(this->ptr_8); /*0x525391*/
  if ( v7 < this->uniqueId ) /*0x525399*/
    this->uniqueId = v7; /*0x52539b*/
  return (gamemd::AbstractClass **)(1); /*0x52539e*/

}
} // namespace gamemd
// 0x52AB80
namespace gamemd {
AbstractClass * * WarheadTypeClass::parseVerses()
{

  void *v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  unsigned int *v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int *v9; // ecx
  char *result; // eax
  unsigned int v11; // edx
  unsigned int *v12; // ecx
  int v13; // ecx

  v2 = (void *)this->m_C; /*0x52ab84*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_INIClass_INISection) */  /*0x52ab87*/
  free(v2); /*0x52ab8e*/
  this->m_C = 0; /*0x52ab98*/
  while ( 1 ) /*0x52ab9b*/
  {
    v3 = this->InfDeath; /*0x52ab9b*/
    if ( !v3 || !*(unsigned int *)(v3 + 4) || !v3->u32_8 ) /*0x52aba7*/
      break; /*0x52aba7*/
    (**(void (***)(int, int))v3)(v3, 1); /*0x52abb4*/
  }
  __3_YAXPAX_Z(this->DelayKillFrames); /*0x52abbc*/
  this->DelayKillFrames = 0; /*0x52abc1*/
  this->DelayKillAtMax = 0; /*0x52abc4*/
  this->CombatLightSize = 0; /*0x52abc7*/
  this->Particle = 0; /*0x52abca*/
  this->Wall = 0; /*0x52abcd*/
  if ( this->Tiberium ) /*0x52abd0*/
  {
    do /*0x52abfc*/
    {
      free(*this->Tiberium); /*0x52abe1*/
      v4 = *(unsigned int *)(this->Tiberium + 4); /*0x52abeb*/
      __3_YAXPAX_Z(this->Tiberium); /*0x52abef*/
      this->Tiberium = v4; /*0x52abf9*/
    }
    while ( v4 ); /*0x52abfc*/
  }
  __3_YAXPAX_Z(this->DelayKillFrames); /*0x52ac03*/
  this->DelayKillFrames = 0; /*0x52ac08*/
  this->DelayKillAtMax = 0; /*0x52ac0b*/
  this->CombatLightSize = 0; /*0x52ac0e*/
  this->Particle = 0; /*0x52ac11*/
  this->Wall = 0; /*0x52ac14*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_GenericList) */  /*0x52ac1a*/
  while ( 1 ) /*0x52ac21*/
  {
    v5 = this->InfDeath; /*0x52ac21*/
    if ( !v5 ) /*0x52ac26*/
      break; /*0x52ac26*/
    if ( !v5->ptr_4 ) /*0x52ac28*/
      break; /*0x52ac28*/
    v6 = v5->u32_8; /*0x52ac2d*/
    if ( !v6 ) /*0x52ac32*/
      break; /*0x52ac32*/
    v7 = v5->ptr_4; /*0x52ac38*/
    if ( v7 ) /*0x52ac3d*/
    {
      v6[1] = v7; /*0x52ac43*/
      *(unsigned int *)(v5->ptr_4 + 8) = v5->u32_8; /*0x52ac4c*/
      v5->u32_8 = 0; /*0x52ac4f*/
      v5->ptr_4 = 0; /*0x52ac52*/
    }
  }
  /* X11: vtable install elided (X67 recv-slot, RHS vt_GenericNode) */  /*0x52ac5c*/
  if ( this != (char *)-32 ) /*0x52ac62*/
  {
    v8 = this->__pad_024; /*0x52ac64*/
    if ( v8 ) /*0x52ac69*/
    {
      v9 = (unsigned int *)this->CausesDelayKill; /*0x52ac6b*/
      if ( v9 ) /*0x52ac70*/
      {
        v9[1] = v8; /*0x52ac72*/
        *(unsigned int *)&this->__pad_024->ptr_3 = this->CausesDelayKill; /*0x52ac7b*/
        this->CausesDelayKill = 0; /*0x52ac7e*/
        this->__pad_024 = 0; /*0x52ac81*/
      }
    }
  }
  result = &this->AnimList; /*0x52ac84*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_GenericNode) */  /*0x52ac89*/
  if ( this != (char *)-20 ) /*0x52ac8f*/
  {
    v11 = this->InfDeath; /*0x52ac91*/
    if ( v11 ) /*0x52ac96*/
    {
      v12 = (unsigned int *)this->CellSpread; /*0x52ac98*/
      if ( v12 ) /*0x52ac9d*/
      {
        v12[1] = v11; /*0x52ac9f*/
        *(unsigned int *)&this->InfDeath->u32_8 = this->CellSpread; /*0x52aca8*/
        this->CellSpread = 0; /*0x52acab*/
        this->InfDeath = 0; /*0x52acae*/
      }
    }
  }
  /* X11: vtable install elided (X67 star-deref, RHS vt_GenericNode) */  /*0x52acb3*/
  if ( this ) /*0x52acb9*/
  {
    v13 = this->ptr_4; /*0x52acbb*/
    if ( v13 ) /*0x52acc0*/
    {
      result = (char *)this->m_8; /*0x52acc2*/
      if ( result ) /*0x52acc7*/
      {
        *((unsigned int *)result + 1) = v13; /*0x52acc9*/
        result = (char *)this->ptr_4; /*0x52accc*/
        *((unsigned int *)result + 2) = this->ptr_8; /*0x52acd2*/
        this->m_8 = 0; /*0x52acd5*/
        this->ptr_4 = 0; /*0x52acd8*/
      }
    }
  }
  return result; /*0x52acdb*/

}
} // namespace gamemd
// 0x52AFC0
namespace gamemd {
void * WarheadTypeClass::ReadParticleSystems(char a2, int aP1, int a3, int a4, int a5, int a6, int a1, int aP0)
{


  /* X11: vtable install elided (X67 recv-slot, RHS vt_GenericList) */  /*0x52afc6*/
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
  /* X11: vtable install elided (X67 recv-slot, RHS vt_GenericNode) */  /*0x52b007*/
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
  /* X11: vtable install elided (X67 recv-slot, RHS vt_GenericNode) */  /*0x52b034*/
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
    return -1; /*0x644653*/
  v2 = 0; /*0x64465a*/
  if ( *(int *)((char *)stru_A83CD9.location + 3) <= 0 ) /*0x64465e*/
  {
LABEL_6:
    v3 = (OverlayTypeClass *)__2_YAPAXI_Z(0x310u); /*0x644683*/
    if ( v3 ) /*0x644692*/
      v4 = OverlayTypeClass::Construct(v3, Source); /*0x644697*/
    else
      v4 = 0; /*0x6446a4*/
    v6 = 0; /*0x6446ac*/
    if ( *(int *)((char *)stru_A83CD9.location + 3) > 0 ) /*0x6446b0*/
    {
      for ( i = *(unsigned int **)&stru_A83CD9.alignmentPadding91[2]; (unsigned int *)*i != v4; ++i ) /*0x6446b2*/
      {
        if ( ++v6 >= *(int *)((char *)stru_A83CD9.location + 3) ) /*0x6446c2*/
          return -1; /*0x6446c2*/
      }
      return v6; /*0x6446cd*/
    }
    return -1; /*0x6446ca*/
  }
  while ( _strcmpi(Source, (const void *)(*(unsigned int *)(*(unsigned int *)&stru_A83CD9.alignmentPadding91[2] + 4 * v2) + 36)) ) /*0x644677*/
  {
    if ( ++v2 >= *(int *)((char *)stru_A83CD9.location + 3) ) /*0x644681*/
      goto LABEL_6; /*0x644681*/
  }
  return v2; /*0x6446a0*/

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
  /* X11: vtable install elided (X68 star-arith-named, RHS vt_TypeList) */  /*0x75cf0e*/
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
  /* X11: vtable install elided (X68 star-arith-named, RHS vt_TypeList) */  /*0x75d08c*/
  *(unsigned char *)(aP1 + 436) = 1; /*0x75d092*/
  *(unsigned int *)(aP1 + 428) = 0; /*0x75d098*/
  *(unsigned int *)(aP1 + 432) = 0; /*0x75d09b*/
  *(unsigned char *)(aP1 + 437) = 0; /*0x75d09e*/
  *(unsigned int *)(aP1 + 444) = 10; /*0x75d0a1*/
  *(unsigned int *)(aP1 + 440) = 0; /*0x75d0a4*/
  /* X11: vtable install elided (X68 star-arith-named, RHS vt_TypeList) */  /*0x75d0a7*/
  aP1->u32_1C4 = 0; /*0x75d0ae*/
  aP1->u32_1C8 = 0; /*0x75d0b4*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_WarheadTypeClass) */  /*0x75d0ba*/
  /* X11: vtable install elided (X68 star-arith-named, RHS vt_WarheadTypeClass) */  /*0x75d0c1*/
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

  unsigned __int8 *v3; // eax
  unsigned __int8 *v4; // ecx
  unsigned __int8 *v5; // edx
  unsigned __int8 *v6; // eax
  unsigned __int8 *v7; // ecx
  unsigned __int8 *v8; // edx
  unsigned __int8 *v9; // eax
  unsigned __int8 *v10; // ecx
  unsigned __int8 *v11; // edx
  unsigned __int8 *v12; // eax
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  unsigned __int8 *v15; // eax
  unsigned __int8 *v16; // ecx
  unsigned __int8 *v17; // ecx
  int *v18; // ebx
  int v20; // [esp+Ch] [ebp-4h]

  v3 = (unsigned __int8 *)AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x75ded0*/
  LOBYTE(v3) = this->pad_144[0]; /*0x75ded5*/
  Power::FlagProcess((Power *)a2, (int)v3); /*0x75dede*/
  LOBYTE(v4) = this->pad_147; /*0x75dee3*/
  Power::FlagProcess((Power *)a2, (int)v4); /*0x75deec*/
  LOBYTE(v5) = this->Charges; /*0x75def1*/
  v6 = (unsigned __int8 *)Power::FlagProcess((Power *)a2, (int)v5); /*0x75defa*/
  LOBYTE(v6) = this->pad_149; /*0x75deff*/
  Power::FlagProcess((Power *)a2, (int)v6); /*0x75df08*/
  LOBYTE(v7) = this->DiskLaser; /*0x75df0d*/
  Power::FlagProcess((Power *)a2, (int)v7); /*0x75df16*/
  LOBYTE(v8) = this->pad_14B[0]; /*0x75df1b*/
  v9 = (unsigned __int8 *)Power::FlagProcess((Power *)a2, (int)v8); /*0x75df24*/
  LOBYTE(v9) = this->pad_14B[1]; /*0x75df29*/
  Power::FlagProcess((Power *)a2, (int)v9); /*0x75df32*/
  LOBYTE(v10) = this->IonSensitive[0]; /*0x75df37*/
  Power::FlagProcess((Power *)a2, (int)v10); /*0x75df40*/
  LOBYTE(v11) = this->IonSensitive[1]; /*0x75df45*/
  v12 = (unsigned __int8 *)Power::FlagProcess((Power *)a2, (int)v11); /*0x75df4e*/
  LOBYTE(v12) = this->IonSensitive[2]; /*0x75df53*/
  Power::FlagProcess((Power *)a2, (int)v12); /*0x75df5c*/
  LOBYTE(v13) = this->IonSensitive[3]; /*0x75df61*/
  Power::FlagProcess((Power *)a2, (int)v13); /*0x75df6a*/
  LOBYTE(v14) = this->DrawBoltAsLaser[0]; /*0x75df6f*/
  v15 = (unsigned __int8 *)Power::FlagProcess((Power *)a2, (int)v14); /*0x75df78*/
  LOBYTE(v15) = this->DrawBoltAsLaser[1]; /*0x75df7d*/
  Power::FlagProcess((Power *)a2, (int)v15); /*0x75df86*/
  LOBYTE(v16) = this->DrawBoltAsLaser[2]; /*0x75df8b*/
  Power::FlagProcess((Power *)a2, (int)v16); /*0x75df94*/
  Checksummer::Add_double((Checksummer *)a2, *&this->AmbientDamage, *&this->Burst); /*0x75dfa9*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x100); /*0x75dfb7*/
  Checksummer::Add_double((Checksummer *)a2, this->WarheadTypeClass_field_0xF8, *(unsigned int *)this->__pad_FC); /*0x75dfcc*/
  LOBYTE(v17) = HIBYTE(this->PsychicDamage); /*0x75dfd1*/
  Power::FlagProcess((Power *)a2, (int)v17); /*0x75dfda*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x17C); /*0x75dfe8*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x180); /*0x75dff6*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x184); /*0x75e004*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x188); /*0x75e012*/
  Checksummer::Add_Buffer((Checksummer *)a2, (unsigned __int8 *)&this->Parasite[3], 16); /*0x75e022*/
  v18 = &this->__pad_0A9; /*0x75e027*/
  v20 = 11; /*0x75e02d*/
  do /*0x75e04f*/
  {
    Checksummer::Add_double((Checksummer *)a2, *v18, v18[1]); /*0x75e03e*/
    v18 += 2; /*0x75e047*/
    --v20; /*0x75e04b*/
  }
  while ( v20 ); /*0x75e04f*/
  Power::TimerProcess(this->WarheadTypeClass_field_0x114); /*0x75e05a*/
  return Power::TimerProcess(this->WarheadTypeClass_field_0x120); /*0x75e06d*/

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
  (*(void (**)(char *))(*&v2->ptr_4 + 12))(&v2->WarheadTypeClass_1A8); /*0x75e0e7*/
  int v4 = a2; // esi /*0x75e0ea*/
  int result; // eax
  result = AbstractClass::SaveLoad_Prefix_0(v2, a2); /*0x75e0f0*/
  if ( result >= 0 ) /*0x75e0f7*/
  {
    if ( v2 ) /*0x75e0ff*/
    {
      AbstractTypeClass::Init((int)v2, (int)&a1); /*0x75e108*/
      ((DynamicVectorClass *)v2->q104)->AnimTypeConstructor(0, 0); /*0x75e117*/
      /* X11: vtable install elided (X67 star-deref, RHS vt_TypeList) */  /*0x75e120*/
      ((WarheadTypeClass *)DebrisTypes)->checkImmunity((int)&a1); /*0x75e12d*/
      (&v2->WarheadTypeClass_1A8)->calculateDamage((int)&a1); /*0x75e139*/
      /* X11: vtable install elided (X67 recv-slot, RHS vt_WarheadTypeClass) */  /*0x75e13e*/
      /* X11: vtable install elided (implicit via WarheadTypeClass virtuals 0x75e144) */
      /* X11: vtable install elided (implicit via WarheadTypeClass virtuals 0x75e14b) */
      /* X11: vtable install elided (implicit via WarheadTypeClass virtuals 0x75e152) */
    }
    if ( v2 != (WarheadTypeClass *)-260 ) /*0x75e161*/
    {
      ((DynamicVectorClass *)v2->q104)->AnimTypeConstructor(0, 0); /*0x75e169*/
      /* X11: vtable install elided (X67 star-deref, RHS vt_TypeList) */  /*0x75e16e*/
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
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->ptr_4); /*0x75e2a7*/
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


  /* X11: vtable install elided (X67 recv-slot, RHS vt_WarheadTypeClass) */  /*0x75e516*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_WarheadTypeClass) */  /*0x75e51c*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_WarheadTypeClass) */  /*0x75e523*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_WarheadTypeClass) */  /*0x75e52a*/
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
  /* X11: vtable install elided (X68 star-amp-named, RHS vt_VectorClass) */  /*0x75e5d1*/
  if ( WarheadTypeClass_field_0x1AC && a3->__pad_1B0[5] ) /*0x75e5df*/
  {
    __3_YAXPAX_Z(WarheadTypeClass_field_0x1AC); /*0x75e5e8*/
    a3->WarheadTypeClass_field_0x1AC = 0; /*0x75e5f0*/
  }
  a3->__pad_1B0[5] = 0; /*0x75e5f6*/
  *(unsigned int *)a3->__pad_1B0 = 0; /*0x75e5fc*/
  void *v6; // eax
  v6 = (void *)a3->WarheadTypeClass_field_0x190[0]; /*0x75e602*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_VectorClass) */  /*0x75e608*/
  if ( v6 && BYTE1(a3->MinDebris) ) /*0x75e616*/
  {
    __3_YAXPAX_Z(v6); /*0x75e61f*/
    a3->WarheadTypeClass_field_0x190[0] = 0; /*0x75e627*/
  }
  BYTE1(a3->MinDebris) = 0; /*0x75e62d*/
  a3->MaxDebris = 0; /*0x75e633*/
  void *WarheadTypeClass_field_0x108; // eax
  WarheadTypeClass_field_0x108 = (void *)a3->WarheadTypeClass_field_0x108; /*0x75e639*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x75e63f*/
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

  int v3; // ecx
  int v4; // esi
  int v5; // eax
  int v6; // eax
  unsigned int *v7; // eax
  unsigned __int8 *inited; // eax
  int v9; // eax
  int v10; // edx
  void *v11; // eax
  unsigned int *v12; // eax
  unsigned __int8 *v13; // eax
  int v14; // eax
  char *i; // eax
  int v16; // ecx
  int v17; // edx
  void *v18; // eax
  unsigned int *v19; // ebp
  unsigned int *v20; // eax
  unsigned int *v21; // ebp
  unsigned int *v22; // eax
  unsigned int *v23; // ebp
  unsigned int *v24; // eax
  char v25; // cl
  char Bool_Overwrite; // al
  char v27; // al
  char v28; // cl
  char v29; // al
  char v30; // al
  char v31; // cl
  char v32; // al
  char v33; // al
  char v34; // cl
  char v35; // al
  char v36; // al
  char v37; // cl
  char v38; // al
  int Coord; // eax
  int v40; // eax
  unsigned __int8 *v39; // eax
  unsigned __int8 v42; // dl
  char Int_Overwrite; // al
  char v44; // cl
  char v45; // al
  char v46; // al
  char v47; // cl
  char v48; // al
  char v49; // al
  char v50; // cl
  char v51; // al
  char v52; // al
  int v53; // ecx
  int v54; // eax
  int v55; // eax
  int v56; // ebp
  int v57; // eax
  int v58; // ebp
  IntVector v60; // [esp-1Ch] [ebp-FCh] BYREF
  unsigned __int8 *v61; // [esp-14h] [ebp-F4h]
  unsigned __int8 *p_INIClassIntList; // [esp-10h] [ebp-F0h]
  char *v63; // [esp-Ch] [ebp-ECh]
  unsigned __int8 *v64; // [esp-8h] [ebp-E8h]
  int v65; // [esp-4h] [ebp-E4h]
  int INIClassIntList; // [esp+10h] [ebp-D0h] BYREF
  DynamicVector v67; // [esp+14h] [ebp-CCh] BYREF
  int v68; // [esp+40h] [ebp-A0h]
  int v69; // [esp+44h] [ebp-9Ch]
  int v70; // [esp+48h] [ebp-98h]
  char Source[20]; // [esp+4Ch] [ebp-94h] BYREF
  char String[128]; // [esp+60h] [ebp-80h] BYREF

  v4 = v3; /*0x772091*/
  INIClass::ResetSection((INIClass *)this); /*0x772095*/
  if ( !INIClass::BinarySearchSection((int)this, (unsigned __int8 *)(v4 + 36)) ) /*0x7720a0*/
    return 0; /*0x7729d9*/
  v4->AmbientDamage = INIClass::ReadInt_Overwrite( /*0x7720c6*/
                            (bool *)this,
                            (unsigned __int8 *)(v4 + 36),
                            aAmbientdamage,
                            v4->AmbientDamage);
  v4->IsSonic_d = INIClass::ReadBool_Overwrite( /*0x7720e0*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aIssonic,
                           v4->IsSonic_d);
  v4->Spawner_d = INIClass::ReadBool_Overwrite( /*0x7720fa*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aSpawner,
                           v4->Spawner_d);
  v4->LimboLaunch_d = INIClass::ReadBool_Overwrite( /*0x772114*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aLimbolaunch,
                           v4->LimboLaunch_d);
  v4->DecloakToFire_d = INIClass::ReadBool_Overwrite( /*0x77212e*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aDecloaktofire,
                           v4->DecloakToFire_d);
  v4->CellRangefinding_d = INIClass::ReadBool_Overwrite( /*0x772148*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aCellrangefindi,
                           v4->CellRangefinding_d);
  v4->__pad_135 = INIClass::ReadBool_Overwrite( /*0x772162*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aFireonce,
                           v4->__pad_135);
  v4->NeverUse_d = INIClass::ReadBool_Overwrite( /*0x77217c*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aNeveruse,
                           v4->NeverUse_d);
  v4->RevealOnFire_d = INIClass::ReadBool_Overwrite( /*0x772196*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aRevealonfire,
                           v4->RevealOnFire_d);
  v4->__pad_138 = INIClass::ReadBool_Overwrite( /*0x7721b0*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aTerrainfire,
                           v4->__pad_138);
  v4->q139 = INIClass::ReadBool_Overwrite( /*0x7721ca*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aSabotagecursor,
                           v4->q139);
  v4->q13A = INIClass::ReadBool_Overwrite( /*0x7721e4*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aMigattackcurso,
                           v4->q13A);
  v4->q13B = INIClass::ReadBool_Overwrite( /*0x7721fe*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aDisguisefireon,
                           v4->q13B);
  v4->InfiniteMindControl_d = INIClass::ReadBool_Overwrite( /*0x772218*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aInfinitemindco,
                           v4->InfiniteMindControl_d);
  v4->FireWhileMoving_d = INIClass::ReadBool_Overwrite( /*0x772232*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aFirewhilemovin,
                           v4->FireWhileMoving_d);
  v4->__pad_142 = INIClass::ReadBool_Overwrite( /*0x77224c*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aDrainweapon,
                           v4->__pad_142);
  v4->q143 = INIClass::ReadBool_Overwrite( /*0x772266*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aFireintranspor,
                           v4->q143);
  v4->q13C = INIClass::ReadInt_Overwrite( /*0x772280*/
                            (bool *)this,
                            (unsigned __int8 *)(v4 + 36),
                            aDisguisefakebl,
                            v4->q13C);
  v4->Suicide_d = INIClass::ReadBool_Overwrite( /*0x77229a*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&stru_842DD4.VoxelCaches[14],
                           v4->Suicide_d);
  v4->Supress_d = INIClass::ReadBool_Overwrite( /*0x7722b4*/
                           &this->ptr_0,
                           (unsigned __int8 *)(v4 + 36),
                           aSupress,
                           v4->Supress_d);
  v4->Burst = INIClass::ReadInt_Overwrite( /*0x7722ce*/
                            (bool *)this,
                            (unsigned __int8 *)(v4 + 36),
                            aBurst,
                            v4->Burst);
  v4->Damage = INIClass::ReadInt_Overwrite( /*0x7722e8*/
                            (bool *)this,
                            (unsigned __int8 *)(v4 + 36),
                            g_INI_Key_Damage,
                            v4->Damage);
  v4->Speed = WarheadTypeClass::loadWarheadINI( /*0x772302*/
                            (WarheadTypeClass *)this,
                            (unsigned __int8 *)(v4 + 36),
                            g_INI_Key_Speed,
                            v4->Speed);
  v4->ROF = INIClass::ReadInt_Overwrite( /*0x77231c*/
                            (bool *)this,
                            (unsigned __int8 *)(v4 + 36),
                            &off_825478,
                            v4->ROF);
  INIClass::ReadCoord((unsigned __int8 *)(v4 + 36), g_INI_Key_Range, v4->Range); /*0x772331*/
  v4->Range = v5; /*0x772336*/
  INIClass::ReadCoord((unsigned __int8 *)(v4 + 36), (unsigned __int8 *)aMinimumrange, v4->MinimumRange); /*0x77234b*/
  v4->MinimumRange = v6; /*0x77235b*/
  INIClassIntList = (int)&v60; /*0x772362*/
  IntVector::Copy(&v60, &v4->Report); /*0x772366*/
  v7 = (unsigned int *)INIClassIntList; /*0x77236b*/
  INIClassIntList->uniqueId = *(unsigned int *)(v4 + 204); /*0x772377*/
  v7->u32_14 = *(unsigned int *)(v4 + 208); /*0x77237d*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_TypeList_int) */  /*0x772382*/
  inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4(&v4->__pad_024); /*0x772388*/
  INIClassIntList = GetINIClassIntList( /*0x77239c*/
                      (int)&v67,
                      (unsigned __int8 ***)this,
                      inited,
                      aReport,
                      *(void ***)v60.__pad_0,
                      (void *)v60.IntVector_field_0x04,
                      (int)v61,
                      (__int16)p_INIClassIntList,
                      (int)v63,
                      (int)v64,
                      v65);
  TypeList::Copy(&v4->Report, (unsigned int *)INIClassIntList); /*0x7723a0*/
  v9 = INIClassIntList; /*0x7723a5*/
  *(unsigned int *)(v4 + 204) = INIClassIntList->uniqueId; /*0x7723ac*/
  *(unsigned int *)(v4 + 208) = v9->u32_14; /*0x7723b2*/
  v10 = v9->VectorClass_18; /*0x7723b5*/
  v11 = *(void **)&v67.Items; /*0x7723b8*/
  *(unsigned int *)(v4 + 212) = v10; /*0x7723bc*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_int) */  /*0x7723c1*/
  if ( v11 && v67.IsAllocated ) /*0x7723d1*/
    __3_YAXPAX_Z(v11); /*0x7723d4*/
  INIClassIntList = (int)&v60; /*0x7723e8*/
  IntVector::Copy(&v60, &v4->DownReport); /*0x7723ec*/
  v12 = (unsigned int *)INIClassIntList; /*0x7723f1*/
  INIClassIntList->uniqueId = *(unsigned int *)(v4 + 232); /*0x7723fd*/
  v12->u32_14 = *(unsigned int *)(v4 + 236); /*0x772405*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_TypeList_int) */  /*0x772408*/
  v13 = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4(&v4->__pad_024); /*0x77240e*/
  INIClassIntList = GetINIClassIntList( /*0x772422*/
                      (int)&v67,
                      (unsigned __int8 ***)this,
                      v13,
                      (unsigned __int8 *)aDownreport,
                      *(void ***)v60.__pad_0,
                      (void *)v60.IntVector_field_0x04,
                      (int)v61,
                      (__int16)p_INIClassIntList,
                      (int)v63,
                      (int)v64,
                      v65);
  TypeList::Copy(&v4->DownReport, (unsigned int *)INIClassIntList); /*0x772426*/
  v14 = INIClassIntList; /*0x77242b*/
  *(unsigned int *)(v4 + 232) = INIClassIntList->uniqueId; /*0x772432*/
  *(unsigned int *)(v4 + 236) = v14->u32_14; /*0x772438*/
  *(unsigned int *)(v4 + 240) = v14->VectorClass_18; /*0x77243e*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_int) */  /*0x772447*/
  if ( *(unsigned int *)&v67.Items && v67.IsAllocated ) /*0x772457*/
    __3_YAXPAX_Z(*(void **)&v67.Items); /*0x77245a*/
  if ( INIClass::GetString( /*0x772479*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)aAnim_0,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v67, 0, 0); /*0x77248e*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_TypeList_AnimTypeClass_const) */  /*0x77249d*/
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) ) /*0x7724af*/
    {
      if ( !*i ) /*0x7724b1*/
        break; /*0x7724b4*/
      INIClassIntList = (int)AnimTypeClass::FindOrCreate(i); /*0x7724bf*/
      if ( INIClassIntList ) /*0x7724c3*/
        DynamicVector::Add_Alt4(&v67, &INIClassIntList); /*0x7724ce*/
    }
    TypeList::AnimTypeCopy((TypeList *)&v67.DynamicVector_field_0x1C, &v67); /*0x7724ef*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_AnimTypeClass_const) */  /*0x7724f8*/
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v67); /*0x772500*/
  }
  else
  {
    TypeList::AnimTypeCopy((TypeList *)&v67.DynamicVector_field_0x1C, &v4->InfiniteMindControl); /*0x772512*/
  }
  VectorClass::CopyDefault(&v4->InfiniteMindControl, &v67.DynamicVector_field_0x1C); /*0x772524*/
  v16 = v68; /*0x77252d*/
  v17 = v69; /*0x772531*/
  *(unsigned int *)(v4 + 268) = v70; /*0x772535*/
  v18 = *(void **)v67.__pad_20; /*0x772538*/
  *(unsigned int *)(v4 + 260) = v16; /*0x77253c*/
  *(unsigned int *)(v4 + 264) = v17; /*0x772541*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_VectorClass_AnimTypeClass_const) */  /*0x772544*/
  if ( v18 && BYTE1(v67.DynamicVector_field_0x28) ) /*0x772554*/
    __3_YAXPAX_Z(v18); /*0x772557*/
  v19 = v4->AssaultAnim_d; /*0x77255f*/
  if ( INIClass::GetString( /*0x77257c*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         aAssaultanim,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    v20 = AnimTypeClass::FindOrCreate(String); /*0x772589*/
  }
  else
  {
    v20 = v19; /*0x772590*/
  }
  v65 = 128; /*0x772596*/
  v64 = (unsigned __int8 *)String; /*0x77259b*/
  v63 = &g_INI_DefaultBuffer; /*0x77259c*/
  p_INIClassIntList = aOccupantanim; /*0x7725a1*/
  v4->AssaultAnim_d = v20; /*0x7725a6*/
  v21 = v4->IsMagBeam; /*0x7725ac*/
  if ( INIClass::GetString((INIClass *)this, (unsigned __int8 *)(v4 + 36), p_INIClassIntList, v63, (char *)v64, v65) ) /*0x7725b5*/
    v22 = AnimTypeClass::FindOrCreate(String); /*0x7725c2*/
  else
    v22 = v21; /*0x7725c9*/
  v4->IsMagBeam = v22; /*0x7725cb*/
  v23 = v4->OpenToppedAnim_d; /*0x7725d1*/
  if ( INIClass::GetString( /*0x7725ee*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         aOpentoppedanim,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    v24 = AnimTypeClass::FindOrCreate(String); /*0x7725fb*/
  }
  else
  {
    v24 = v23; /*0x772602*/
  }
  v25 = v4->Camera_d; /*0x772604*/
  v4->OpenToppedAnim_d = v24; /*0x77260a*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aCamera, v25); /*0x772619*/
  (v65) = ((v65) & ~0xFF) | ((*(unsigned char *)(v4 + 329)) & 0xFF); /*0x772626*/
  v64 = aIslaser; /*0x772627*/
  v63 = (char *)(v4 + 36); /*0x77262c*/
  *(unsigned char *)(v4 + 327) = Bool_Overwrite; /*0x77262d*/
  *(unsigned char *)(v4 + 329) = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)v63, v64, v65); /*0x772638*/
  v27 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aDisklaser, *(unsigned char *)(v4 + 330)); /*0x77264d*/
  v28 = *(unsigned char *)(v4 + 331); /*0x772652*/
  *(unsigned char *)(v4 + 330) = v27; /*0x772658*/
  v29 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aIsline, v28); /*0x772667*/
  (v65) = ((v65) & ~0xFF) | ((*(unsigned char *)(v4 + 333)) & 0xFF); /*0x772674*/
  v64 = aIshousecolor; /*0x772675*/
  v63 = (char *)(v4 + 36); /*0x77267a*/
  *(unsigned char *)(v4 + 331) = v29; /*0x77267b*/
  *(unsigned char *)(v4 + 333) = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)v63, v64, v65); /*0x772686*/
  v30 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aCharges, *(unsigned char *)(v4 + 328)); /*0x77269b*/
  v31 = *(unsigned char *)(v4 + 325); /*0x7726a0*/
  *(unsigned char *)(v4 + 328) = v30; /*0x7726a6*/
  v32 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aTurboboost, v31); /*0x7726b5*/
  (v65) = ((v65) & ~0xFF) | ((*(unsigned char *)(v4 + 297)) & 0xFF); /*0x7726c2*/
  v64 = aUsefireparticl; /*0x7726c3*/
  v63 = (char *)(v4 + 36); /*0x7726c8*/
  *(unsigned char *)(v4 + 325) = v32; /*0x7726c9*/
  *(unsigned char *)(v4 + 297) = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)v63, v64, v65); /*0x7726d4*/
  v33 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aUsesparkpartic, *(unsigned char *)(v4 + 298)); /*0x7726e9*/
  v34 = *(unsigned char *)(v4 + 299); /*0x7726ee*/
  *(unsigned char *)(v4 + 298) = v33; /*0x7726f4*/
  v35 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aOmnifire, v34); /*0x772703*/
  (v65) = ((v65) & ~0xFF) | ((*(unsigned char *)(v4 + 300)) & 0xFF); /*0x772710*/
  v64 = aDistributedwea; /*0x772711*/
  v63 = (char *)(v4 + 36); /*0x772716*/
  *(unsigned char *)(v4 + 299) = v35; /*0x772717*/
  *(unsigned char *)(v4 + 300) = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)v63, v64, v65); /*0x772722*/
  v36 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aIsrailgun, *(unsigned char *)(v4 + 301)); /*0x772737*/
  v37 = *(unsigned char *)(v4 + 302); /*0x77273c*/
  *(unsigned char *)(v4 + 301) = v36; /*0x772742*/
  v38 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aLobber, v37); /*0x772751*/
  v65 = v4 + 288; /*0x772760*/
  v64 = aLaserinnercolo; /*0x772761*/
  v63 = (char *)(v4 + 36); /*0x772766*/
  p_INIClassIntList = (unsigned __int8 *)&INIClassIntList; /*0x772767*/
  *(unsigned char *)(v4 + 302) = v38; /*0x77276a*/
  Coord = INIClass::GetCoord( /*0x772770*/
            (INIClass *)this,
            (int)p_INIClassIntList,
            (unsigned __int8 *)v63,
            v64,
            (unsigned __int8 *)v65);
  *(unsigned short *)(v4 + 288) = *(unsigned short *)Coord; /*0x772778*/
  *(unsigned char *)(v4 + 290) = *(unsigned char *)(Coord + 2); /*0x772785*/
  v40 = INIClass::GetCoord( /*0x772796*/
          (INIClass *)this,
          (int)&INIClassIntList,
          (unsigned __int8 *)(v4 + 36),
          aLaseroutercolo,
          (unsigned __int8 *)(v4 + 291));
  *(unsigned short *)(v4 + 291) = *(unsigned short *)v40; /*0x77279e*/
  *(unsigned char *)(v4 + 293) = *(unsigned char *)(v40 + 2); /*0x7727ab*/
  v39 = (unsigned __int8 *)INIClass::GetCoord( /*0x7727bc*/
                             (INIClass *)this,
                             (int)&INIClassIntList,
                             (unsigned __int8 *)(v4 + 36),
                             aLaserouterspre,
                             (unsigned __int8 *)(v4 + 294));
  *(unsigned short *)(v4 + 294) = *(unsigned short *)v39; /*0x7727c4*/
  v42 = v39[2]; /*0x7727ca*/
  v65 = *(char *)(v4 + 334); /*0x7727d4*/
  v64 = aLaserduration; /*0x7727d5*/
  v63 = (char *)(v4 + 36); /*0x7727da*/
  *(unsigned char *)(v4 + 296) = v42; /*0x7727db*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)v63, v64, v65); /*0x7727de*/
  v44 = *(unsigned char *)(v4 + 332); /*0x7727e3*/
  *(unsigned char *)(v4 + 334) = Int_Overwrite; /*0x7727e9*/
  v45 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aIsbiglaser, v44); /*0x7727f8*/
  (v65) = ((v65) & ~0xFF) | ((*(unsigned char *)(v4 + 303)) & 0xFF); /*0x772805*/
  v64 = aBright; /*0x772806*/
  v63 = (char *)(v4 + 36); /*0x77280b*/
  *(unsigned char *)(v4 + 332) = v45; /*0x77280c*/
  *(unsigned char *)(v4 + 303) = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)v63, v64, v65); /*0x772817*/
  v46 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aIonsensitive, *(unsigned char *)(v4 + 335)); /*0x77282c*/
  v47 = *(unsigned char *)(v4 + 336); /*0x772831*/
  *(unsigned char *)(v4 + 335) = v46; /*0x772837*/
  v48 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aAreafire, v47); /*0x772846*/
  (v65) = ((v65) & ~0xFF) | ((*(unsigned char *)(v4 + 337)) & 0xFF); /*0x772853*/
  v64 = aIselectricbolt; /*0x772854*/
  v63 = (char *)(v4 + 36); /*0x772859*/
  *(unsigned char *)(v4 + 336) = v48; /*0x77285a*/
  *(unsigned char *)(v4 + 337) = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)v63, v64, v65); /*0x772865*/
  v49 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aDrawboltaslase, *(unsigned char *)(v4 + 338)); /*0x77287a*/
  v50 = *(unsigned char *)(v4 + 339); /*0x77287f*/
  *(unsigned char *)(v4 + 338) = v49; /*0x772885*/
  v51 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aIsalternatecol, v50); /*0x772894*/
  (v65) = ((v65) & ~0xFF) | ((*(unsigned char *)(v4 + 340)) & 0xFF); /*0x7728a1*/
  v64 = aIsradbeam; /*0x7728a2*/
  v63 = (char *)(v4 + 36); /*0x7728a7*/
  *(unsigned char *)(v4 + 339) = v51; /*0x7728a8*/
  *(unsigned char *)(v4 + 340) = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)v63, v64, v65); /*0x7728b3*/
  v52 = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)(v4 + 36), aIsraderuption, *(unsigned char *)(v4 + 341)); /*0x7728c8*/
  v53 = *(unsigned int *)(v4 + 344); /*0x7728cd*/
  *(unsigned char *)(v4 + 341) = v52; /*0x7728d3*/
  v54 = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(v4 + 36), aRadlevel, v53); /*0x7728e2*/
  (v65) = ((v65) & ~0xFF) | ((*(unsigned char *)(v4 + 348)) & 0xFF); /*0x7728ef*/
  v64 = aIsmagbeam; /*0x7728f0*/
  v63 = (char *)(v4 + 36); /*0x7728f5*/
  *(unsigned int *)(v4 + 344) = v54; /*0x7728f6*/
  *(unsigned char *)(v4 + 348) = INIClass::ReadBool_Overwrite(&this->ptr_0, (unsigned __int8 *)v63, v64, v65); /*0x772901*/
  Source[0] = 0; /*0x77291b*/
  INIClass::GetString((INIClass *)this, (unsigned __int8 *)(v4 + 36), aAttachedpartic, Source, Source, 20); /*0x772920*/
  v55 = WarheadTypeClass::applyDamage(Source); /*0x772929*/
  if ( v55 != -1 ) /*0x772931*/
    *(unsigned int *)(v4 + 284) = *(unsigned int *)(*(unsigned int *)&stru_A83CD9.alignmentPadding91[2] + 4 * v55); /*0x77293c*/
  v56 = *(unsigned int *)(v4 + 172); /*0x772942*/
  if ( INIClass::GetString( /*0x77295f*/
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         g_INI_Key_Warhead,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    v57 = WarheadTypeClass::FindOrCreate(String); /*0x77296c*/
  }
  else
  {
    v57 = v56; /*0x772973*/
  }
  v58 = *(unsigned int *)(v4 + 160); /*0x772975*/
  v65 = 128; /*0x77297f*/
  v64 = (unsigned __int8 *)String; /*0x772984*/
  v63 = &g_INI_DefaultBuffer; /*0x772985*/
  p_INIClassIntList = aProjectile; /*0x77298a*/
  v61 = (unsigned __int8 *)(v4 + 36); /*0x77298f*/
  *(unsigned int *)(v4 + 172) = v57; /*0x772992*/
  if ( INIClass::GetString((INIClass *)this, v61, p_INIClassIntList, v63, (char *)v64, v65) ) /*0x772998*/
    *(unsigned int *)(v4 + 160) = ObjectTypeClass::FindOrCreate(String); /*0x7729aa*/
  else
    *(unsigned int *)(v4 + 160) = v58; /*0x7729c1*/
  return 1; /*0x7729b2*/

}
}
// 0x524ED0
namespace gamemd {  // G42.18c ns repair
void WarheadTypeClass::GetClassIdentifier()
{

  void *v2 = *&this->ptr_4; // eax /*0x524ed6*/
  *&this->uniqueId = 0; /*0x524ed9*/
  if ( v2 && (this->IsAllocated) ) /*0x524ee0*/
  {
    operator delete((v2)); /*0x524ee6*/
    *&this->ptr_4 = 0; /*0x524eee*/
  }
  (this->IsAllocated) = 0; /*0x524ef1*/
  *&this->ptr_8 = 0; /*0x524ef4*/
}
}  // G42.18c ns repair
// 0x524F00
namespace gamemd {  // G42.18c ns repair
unsigned int WarheadTypeClass::LoadTypeData(int a2)
{
  if ( (this->ptr_C) ) /*0x524f00*/
    return (unsigned int)(a2 - *&this->ptr_4) >> 2; /*0x524f15*/
  else
    return 0; /*0x524f07*/
}
}  // G42.18c ns repair
// 0x524FB0
namespace gamemd {  // G42.18c ns repair
int WarheadTypeClass::SaveToINI(int a2)
{
  return *(unsigned int *)(*&this->ptr_4 + 4 * a2); /*0x524fba*/
}
}  // G42.18c ns repair
// 0x524FC0
namespace gamemd {  // G42.18c ns repair
TypeList_flat * WarheadTypeClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax
  v3 = (void *)*(Block + 1); /*0x524fc3*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x524fc6*/
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

  int m_8 = *&this->ptr_8; // esi /*0x5250d2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5250dd*/
  {
    int v3 = 0; // edx /*0x5250df*/
    if ( m_8 <= 0 ) /*0x5250e3*/
      return 1; /*0x525103*/
    unsigned int *v4 = *&this->ptr_4; // eax /*0x5250e5*/
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
  for ( i = *&this->ptr_4; *i != *a2; ++i ) /*0x52540e*/
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

  void *WarheadTypeClass_field_0xC = this->ptr_C; // eax /*0x52ad54*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_INIClassINIEntry) */  /*0x52ad57*/
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
  /* X11: vtable install elided (X67 recv-slot, RHS vt_GenericNode) */  /*0x52adb4*/
  if ( this ) /*0x52adba*/
  {
    void *WarheadTypeClass_field_0x4 = this->ptr_4; // ecx /*0x52adbc*/
    if ( WarheadTypeClass_field_0x4 ) /*0x52adc1*/
    {
      unsigned int *WarheadTypeClass_field_0x8 = this->ptr_8; // eax /*0x52adc3*/
      if ( WarheadTypeClass_field_0x8 ) /*0x52adc8*/
      {
        WarheadTypeClass_field_0x8->ptr_4 = WarheadTypeClass_field_0x4; /*0x52adca*/
        *((unsigned int *)this->ptr_4 + 2) = this->ptr_8; /*0x52add3*/
        this->ptr_8 = 0; /*0x52add6*/
        this->ptr_4 = 0; /*0x52add9*/
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
  if ( ((unsigned __int8)this & 1) != 0 ) /*0x52ae0d*/
    __3_YAXPAX_Z(v3); /*0x52ae10*/
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
  /* X11: vtable install elided (X67 recv-slot, RHS vt_TypeList) */  /*0x75e692*/
  return &this->Deform; /*0x75e698*/
}
}  // G42.18c ns repair
// 0x75E6A0
namespace gamemd {  
// G42.35f: def was outside namespace (pre-existing damage)
/* X11: vtable install elided (X67 recv-slot, RHS TypeList_int_vftable) */  /*0x75e6a2*/
return &this->Deform; /*0x75e6a8*/
}