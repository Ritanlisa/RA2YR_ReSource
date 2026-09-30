// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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

// 0x474810
namespace gamemd {
void * WarheadTypeClass::loadWarheadINI(uint8_t * a2, uint8_t * a3, int a4)
{

  int Int_Overwrite; // eax
  int result; // eax

  Int_Overwrite = (void *)(INIClass::ReadInt_Overwrite((int)this, a2, a3, -1));
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

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  AbstractClass ** v7;

  if ( a2 ) /*0x52530c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x525312*/
    if ( a3 ) /*0x525318*/
      v4 = a3; /*0x52532e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x52532a*/
    *((unsigned char *)this + 12) = 1; /*0x525332*/
    if ( !v4 ) /*0x525336*/
      return 0; /*0x5253aa*/
    if ( *((unsigned int *)this + 1) ) /*0x525338*/
    {
      v5 = *((unsigned int *)this + 2); /*0x52533f*/
      if ( a2 < v5 ) /*0x525344*/
        v5 = a2; /*0x525346*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x52534c*/
        ++i; /*0x525351*/
      if ( *((unsigned char *)this + 13) ) /*0x52535e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x525369*/
        *((unsigned int *)this + 1) = 0; /*0x525371*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x52537a*/
    *((unsigned int *)this + 2) = a2; /*0x525382*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x525385*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x52538e*/
  }
  v7 = (int)((gamemd::AbstractClass **)(*((unsigned int *)this + 2)));
  if ( v7 < *((unsigned int *)this + 4) ) /*0x525399*/
    *((unsigned int *)this + 4) = v7; /*0x52539b*/
  return 1; /*0x52539e*/

}
} // namespace gamemd
// 0x52AB80
namespace gamemd {
AbstractClass * * WarheadTypeClass::parseVerses()
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
  this->field_0 = (int)&vt_INIClass_INISection; /*0x52ab87*/
  free(v2); /*0x52ab8e*/
  this->field_C = 0; /*0x52ab98*/
  while ( 1 ) /*0x52ab9b*/
  {
    v3 = *(unsigned int *)&this-((unsigned int *)(>__pad_10))[8]; /*0x52ab9b*/
    if ( !v3 || !*(unsigned int *)(v3 + 4) || !*(unsigned int *)(v3 + 8) ) /*0x52aba7*/
      break; /*0x52aba7*/
    (**(void (***)(int, int))v3)(v3, 1); /*0x52abb4*/
  }
  RA2_OPDEL((void *)this->field_2C); /*0x52abbc*/
  this->field_2C = 0; /*0x52abc1*/
  *((unsigned int *)this + 12) = 0; /*0x52abc4*/
  *((unsigned int *)this + 13) = 0; /*0x52abc7*/
  *((unsigned char *)this + 56) = 0; /*0x52abca*/
  *((unsigned int *)this + 15) = 0; /*0x52abcd*/
  if ( *((unsigned int *)this + 16) ) /*0x52abd0*/
  {
    do /*0x52abfc*/
    {
      free(**((void ***)this + 16)); /*0x52abe1*/
      v4 = *(unsigned int *)(*((unsigned int *)this + 16) + 4); /*0x52abeb*/
      RA2_OPDEL(*((void **)this + 16)); /*0x52abef*/
      *((unsigned int *)this + 16) = v4; /*0x52abf9*/
    }
    while ( v4 ); /*0x52abfc*/
  }
  RA2_OPDEL((void *)this->field_2C); /*0x52ac03*/
  this->field_2C = 0; /*0x52ac08*/
  *((unsigned int *)this + 12) = 0; /*0x52ac0b*/
  *((unsigned int *)this + 13) = 0; /*0x52ac0e*/
  *((unsigned char *)this + 56) = 0; /*0x52ac11*/
  *((unsigned int *)this + 15) = 0; /*0x52ac14*/
  *(unsigned int *)this->__pad_10 = &vt_GenericList; /*0x52ac1a*/
  while ( 1 ) /*0x52ac21*/
  {
    v5 = *(unsigned int *)&this-((unsigned int *)(>__pad_10))[8]; /*0x52ac21*/
    if ( !v5 ) /*0x52ac26*/
      break; /*0x52ac26*/
    if ( !*(unsigned int *)(v5 + 4) ) /*0x52ac28*/
      break; /*0x52ac28*/
    v6 = *(unsigned int *)(v5 + 8); /*0x52ac2d*/
    if ( !v6 ) /*0x52ac32*/
      break; /*0x52ac32*/
    v7 = *(unsigned int *)(v5 + 4); /*0x52ac38*/
    if ( v7 ) /*0x52ac3d*/
    {
      *(unsigned int *)(v6 + 4) = v7; /*0x52ac43*/
      *(unsigned int *)(*(unsigned int *)(v5 + 4) + 8) = *(unsigned int *)(v5 + 8); /*0x52ac4c*/
      *(unsigned int *)(v5 + 8) = 0; /*0x52ac4f*/
      *(unsigned int *)(v5 + 4) = 0; /*0x52ac52*/
    }
  }
  *(unsigned int *)&this-((unsigned int *)(>__pad_10))[16] = &vt_GenericNode; /*0x52ac5c*/
  if ( this != (INISection_INIClass *)-32 ) /*0x52ac62*/
  {
    v8 = *(unsigned int *)&this-((unsigned int *)(>__pad_10))[20]; /*0x52ac64*/
    if ( v8 ) /*0x52ac69*/
    {
      v9 = *(unsigned int *)&this-((unsigned int *)(>__pad_10))[24]; /*0x52ac6b*/
      if ( v9 ) /*0x52ac70*/
      {
        *(unsigned int *)(v9 + 4) = v8; /*0x52ac72*/
        *(unsigned int *)(*(unsigned int *)&this-((unsigned int *)(>__pad_10))[20] + 8) = *(unsigned int *)&this->__pad_10[24]; /*0x52ac7b*/
        *(unsigned int *)&this-((unsigned int *)(>__pad_10))[24] = 0; /*0x52ac7e*/
        *(unsigned int *)&this-((unsigned int *)(>__pad_10))[20] = 0; /*0x52ac81*/
      }
    }
  }
  result = &this-((unsigned int *)(>__pad_10))[4]; /*0x52ac84*/
  *(unsigned int *)&this-((unsigned int *)(>__pad_10))[4] = &vt_GenericNode; /*0x52ac89*/
  if ( this != (INISection_INIClass *)-20 ) /*0x52ac8f*/
  {
    v11 = *(unsigned int *)&this-((unsigned int *)(>__pad_10))[8]; /*0x52ac91*/
    if ( v11 ) /*0x52ac96*/
    {
      v12 = *(unsigned int *)&this-((unsigned int *)(>__pad_10))[12]; /*0x52ac98*/
      if ( v12 ) /*0x52ac9d*/
      {
        *(unsigned int *)(v12 + 4) = v11; /*0x52ac9f*/
        *(unsigned int *)(*(unsigned int *)&this-((unsigned int *)(>__pad_10))[8] + 8) = *(unsigned int *)&this->__pad_10[12]; /*0x52aca8*/
        *(unsigned int *)&this-((unsigned int *)(>__pad_10))[12] = 0; /*0x52acab*/
        *(unsigned int *)&this-((unsigned int *)(>__pad_10))[8] = 0; /*0x52acae*/
      }
    }
  }
  this->field_0 = (int)&vt_GenericNode; /*0x52acb3*/
  if ( this ) /*0x52acb9*/
  {
    v13 = *(unsigned int *)this->__pad_4; /*0x52acbb*/
    if ( v13 ) /*0x52acc0*/
    {
      result = *(char **)&this-((unsigned int *)(>__pad_4))[4]; /*0x52acc2*/
      if ( result ) /*0x52acc7*/
      {
        *((unsigned int *)result + 1) = v13; /*0x52acc9*/
        result = *(char **)this->__pad_4; /*0x52accc*/
        *((unsigned int *)result + 2) = *(unsigned int *)&this-((unsigned int *)(>__pad_4))[4]; /*0x52acd2*/
        *(unsigned int *)&this-((unsigned int *)(>__pad_4))[4] = 0; /*0x52acd5*/
        *(unsigned int *)this->__pad_4 = 0; /*0x52acd8*/
      }
    }
  }
  return result; /*0x52acdb*/

}
} // namespace gamemd
// 0x52AFC0
namespace gamemd {
void * WarheadTypeClass::ReadParticleSystems(unsigned int * Block, char a2)
{

  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx

  *Block = (unsigned int)(&vt_GenericList);
  while ( 1 ) /*0x52afcc*/
  {
    v3 = *(Block + 2); /*0x52afcc*/
    if ( !v3 ) /*0x52afd1*/
      break; /*0x52afd1*/
    if ( !*(unsigned int *)(v3 + 4) ) /*0x52afd3*/
      break; /*0x52afd3*/
    v4 = *(unsigned int *)(v3 + 8); /*0x52afd8*/
    if ( !v4 ) /*0x52afdd*/
      break; /*0x52afdd*/
    v5 = *(unsigned int *)(v3 + 4); /*0x52afe3*/
    if ( v5 ) /*0x52afe8*/
    {
      *(unsigned int *)(v4 + 4) = v5; /*0x52afee*/
      *(unsigned int *)(*(unsigned int *)(v3 + 4) + 8) = *(unsigned int *)(v3 + 8); /*0x52aff7*/
      *(unsigned int *)(v3 + 8) = 0; /*0x52affa*/
      *(unsigned int *)(v3 + 4) = 0; /*0x52affd*/
    }
  }
  *(Block + 4) = &vt_GenericNode; /*0x52b007*/
  if ( Block != (unsigned int *)-16 ) /*0x52b00d*/
  {
    v6 = *(Block + 5); /*0x52b00f*/
    if ( v6 ) /*0x52b014*/
    {
      v7 = *(Block + 6); /*0x52b016*/
      if ( v7 ) /*0x52b01b*/
      {
        *(unsigned int *)(v7 + 4) = v6; /*0x52b01d*/
        *(unsigned int *)(*(Block + 5) + 8) = *(Block + 6); /*0x52b026*/
        *(Block + 6) = 0; /*0x52b029*/
        *(Block + 5) = 0; /*0x52b02c*/
      }
    }
  }
  *(Block + 1) = &vt_GenericNode; /*0x52b034*/
  if ( Block != (unsigned int *)-4 ) /*0x52b03a*/
  {
    v8 = *(Block + 2); /*0x52b03c*/
    if ( v8 ) /*0x52b041*/
    {
      v9 = *(Block + 3); /*0x52b043*/
      if ( v9 ) /*0x52b048*/
      {
        *(unsigned int *)(v9 + 4) = v8; /*0x52b04a*/
        *(unsigned int *)(*(Block + 2) + 8) = *(Block + 3); /*0x52b053*/
        *(Block + 3) = 0; /*0x52b056*/
        *(Block + 2) = 0; /*0x52b059*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52b061*/
    __3_YAXPAX_Z(Block); /*0x52b064*/
  return (GenericList *)Block; /*0x52b06e*/

}
} // namespace gamemd
// 0x644630
namespace gamemd {
ParticleSystemTypeClass * * WarheadTypeClass::applyDamage(ObjectClass * Source)
{

  int v2; // esi
  unsigned int *v3; // eax
  ParticleSystemTypeClass *v4; // eax
  int v6; // ecx
  ParticleSystemTypeClass **i; // edx

  if ( !_strcmpi(Source, &stru_817460.sectionHead[1]) || !strlen(Source->__pad_0) ) /*0x644649*/
    return -1; /*0x644653*/
  v2 = 0; /*0x64465a*/
  if ( *(int *)HouseClass_Player.__pad_2C <= 0 ) /*0x64465e*/
  {
LABEL_6:
    v3 = (unsigned int *)RA2_OPNEW(0x310u); /*0x644683*/
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
  while ( _strcmpi(Source, (const void *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_18[8] + 4 * v2) + 36)) ) /*0x644677*/
  {
    if ( ++v2 >= *(int *)HouseClass_Player.__pad_2C ) /*0x644681*/
      goto LABEL_6; /*0x644681*/
  }
  return v2; /*0x6446a0*/

}
} // namespace gamemd
// 0x75CEC0
namespace gamemd {
void WarheadTypeClass::Construct(ObjectClass * aP1)
{

  int v3; // eax
  int v4; // eax

  AbstractTypeClass::Constructor(this, (AbstractClass *)aP1); /*0x75cecb*/
  *((unsigned int *)this + 38) = 0; /*0x75ced8*/
  *((unsigned int *)this + 39) = 0; /*0x75cede*/
  *((unsigned int *)this + 62) = 0; /*0x75cee4*/
  *((unsigned int *)this + 63) = 1072693248; /*0x75ceeb*/
  *((unsigned int *)this + 64) = 0; /*0x75cef8*/
  AnimTypeVector::Constructor((unsigned int *)((char *)this + 260), 0, 0); /*0x75cefe*/
  *((unsigned int *)this + 69) = 0; /*0x75cf08*/
  *((unsigned int *)this + 70) = 10; /*0x75cf0b*/
  *((unsigned int *)this + 65) = &vt_TypeList_AnimTypeClass_const; /*0x75cf0e*/
  *((unsigned int *)this + 72) = 0; /*0x75cf14*/
  *((unsigned int *)this + 73) = 0; /*0x75cf1a*/
  *((unsigned int *)this + 74) = 0; /*0x75cf25*/
  *((unsigned int *)this + 75) = 1065353216; /*0x75cf2b*/
  *((unsigned char *)this + 304) = 0; /*0x75cf31*/
  *((unsigned int *)this + 77) = 5; /*0x75cf37*/
  *((unsigned int *)this + 78) = 1065353216; /*0x75cf41*/
  *((unsigned int *)this + 79) = 0; /*0x75cf47*/
  *((unsigned int *)this + 80) = 0; /*0x75cf4d*/
  *((unsigned char *)this + 324) = 0; /*0x75cf53*/
  *((unsigned char *)this + 325) = 0; /*0x75cf59*/
  *((unsigned char *)this + 326) = 0; /*0x75cf5f*/
  *((unsigned char *)this + 327) = 0; /*0x75cf65*/
  *((unsigned char *)this + 328) = 0; /*0x75cf6b*/
  *((unsigned char *)this + 329) = 0; /*0x75cf71*/
  *((unsigned char *)this + 330) = 0; /*0x75cf77*/
  *((unsigned char *)this + 331) = 0; /*0x75cf7d*/
  *((unsigned char *)this + 332) = 0; /*0x75cf83*/
  *((unsigned char *)this + 333) = 0; /*0x75cf89*/
  *((unsigned char *)this + 334) = 0; /*0x75cf8f*/
  *((unsigned char *)this + 335) = 0; /*0x75cf95*/
  *((unsigned char *)this + 336) = 0; /*0x75cf9b*/
  *((unsigned char *)this + 337) = 0; /*0x75cfa1*/
  *((unsigned char *)this + 338) = 0; /*0x75cfa7*/
  *((unsigned char *)this + 339) = 0; /*0x75cfad*/
  *((unsigned char *)this + 340) = 0; /*0x75cfb3*/
  *((unsigned char *)this + 341) = 0; /*0x75cfb9*/
  *((unsigned char *)this + 342) = 0; /*0x75cfbf*/
  *((unsigned char *)this + 343) = 0; /*0x75cfc5*/
  *((unsigned char *)this + 344) = 0; /*0x75cfcb*/
  *((unsigned char *)this + 345) = 0; /*0x75cfd1*/
  *((unsigned char *)this + 346) = 0; /*0x75cfd7*/
  *((unsigned char *)this + 347) = 0; /*0x75cfdd*/
  *(IID *)((char *)this + 348) = g_CLSID_HoverLocomotion; /*0x75cfee*/
  *((unsigned char *)this + 364) = 0; /*0x75d009*/
  *((unsigned char *)this + 365) = 0; /*0x75d00f*/
  *((unsigned int *)this + 90) = -777003740; /*0x75d015*/
  *((unsigned char *)this + 366) = 0; /*0x75d01a*/
  *((unsigned int *)this + 92) = 0; /*0x75d020*/
  *((unsigned char *)this + 372) = 0; /*0x75d026*/
  *((unsigned char *)this + 373) = 0; /*0x75d02c*/
  *((unsigned char *)this + 374) = 0; /*0x75d032*/
  *((unsigned char *)this + 375) = 0; /*0x75d038*/
  *((unsigned char *)this + 376) = 0; /*0x75d03e*/
  *((unsigned char *)this + 377) = 1; /*0x75d044*/
  *((unsigned char *)this + 378) = 0; /*0x75d04a*/
  *((unsigned char *)this + 379) = 0; /*0x75d050*/
  *((unsigned int *)this + 95) = 0; /*0x75d056*/
  *((unsigned int *)this + 96) = 0; /*0x75d05c*/
  *((unsigned int *)this + 97) = 0; /*0x75d06e*/
  *((unsigned int *)this + 98) = 0; /*0x75d074*/
  *((unsigned int *)this + 100) = 0; /*0x75d07a*/
  *((unsigned int *)this + 101) = 0; /*0x75d07d*/
  *((unsigned char *)this + 408) = 1; /*0x75d080*/
  *((unsigned char *)this + 409) = 0; /*0x75d083*/
  *((unsigned int *)this + 104) = 10; /*0x75d086*/
  *((unsigned int *)this + 103) = 0; /*0x75d089*/
  *((unsigned int *)this + 99) = &vt_TypeList_VoxelAnimTypeClass_const; /*0x75d08c*/
  *((unsigned char *)this + 436) = 1; /*0x75d092*/
  *((unsigned int *)this + 107) = 0; /*0x75d098*/
  *((unsigned int *)this + 108) = 0; /*0x75d09b*/
  *((unsigned char *)this + 437) = 0; /*0x75d09e*/
  *((unsigned int *)this + 111) = 10; /*0x75d0a1*/
  *((unsigned int *)this + 110) = 0; /*0x75d0a4*/
  *((unsigned int *)this + 106) = &vt_TypeList_int; /*0x75d0a7*/
  *((unsigned int *)this + 113) = 0; /*0x75d0ae*/
  *((unsigned int *)this + 114) = 0; /*0x75d0b4*/
  *(unsigned int *)this = &vt_WarheadTypeClass; /*0x75d0ba*/
  *((unsigned int *)this + 1) = &vt_WarheadTypeClass; /*0x75d0c1*/
  *((unsigned int *)this + 2) = &vt_WarheadTypeClass; /*0x75d0c7*/
  *((unsigned int *)this + 3) = &vt_WarheadTypeClass; /*0x75d0ce*/
  AbstractClass::GenerateUniqueID((char *)this + 4); /*0x75d0d5*/
  (*(void (**)(int))(*((unsigned int *)this + 99) + 12))((char *)this + 396); /*0x75d0de*/
  (*(void (**)(int))(*((unsigned int *)this + 106) + 12))((char *)this + 424); /*0x75d0e5*/
  if ( *(int *)&g_abs_87F8E4 < *(int *)&g_abs_87F8E4 /*0x75d11c*/
    || (g_abs_87F8E4 || !*(unsigned int *)&g_abs_87F8E4)
    && *(int *)&g_abs_87F8E4 > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&g_abs_87F8E4 + 8))(
         &g_abs_87F8E4,
         *(unsigned int *)&g_abs_87F8E4 + *(unsigned int *)&g_abs_87F8E4,
         0) )
  {
    v3 = (*(unsigned int *)&g_abs_87F8E4)++; /*0x75d129*/
    *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 4 * v3) = this; /*0x75d138*/
  }
  if ( *(int *)&g_abs_B077F8 < *(int *)&g_abs_B077F8 /*0x75d16f*/
    || (g_abs_B077F8 || !*(unsigned int *)&g_abs_B077F8)
    && *(int *)&g_abs_B077F8 > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&g_abs_B077F8 + 8))(
         &g_abs_B077F8,
         *(unsigned int *)&g_abs_B077F8 + *(unsigned int *)&g_abs_B077F8,
         0) )
  {
    v4 = (*(unsigned int *)&g_abs_B077F8)++; /*0x75d17c*/
    *(unsigned int *)(*(unsigned int *)&g_abs_B077F8 + 4 * v4) = this; /*0x75d18b*/
  }
  *((unsigned int *)this + 40) = 0; /*0x75d19b*/
  *((unsigned int *)this + 41) = 1072693248; /*0x75d1a0*/
  qmemcpy((void *)((char *)this + 168), (const void *)((char *)this + 160), 0x50u); /*0x75d1a7*/
  return this; /*0x75d1a9*/

}
} // namespace gamemd
// 0x75DEC0
namespace gamemd {
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
  unsigned int *v18; // ebx
  int v20; // [esp+Ch] [ebp-4h]

  v3 = AbstractTypeClass::ProcessPower((char *)this, a2); /*0x75ded0*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 324); /*0x75ded5*/
  Power::FlagProcess(a2, v3); /*0x75dede*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 327); /*0x75dee3*/
  Power::FlagProcess(a2, v4); /*0x75deec*/
  IDA_LOBYTE(v5) = *((unsigned char *)this + 328); /*0x75def1*/
  v6 = Power::FlagProcess(a2, v5); /*0x75defa*/
  IDA_LOBYTE(v6) = *((unsigned char *)this + 329); /*0x75deff*/
  Power::FlagProcess(a2, v6); /*0x75df08*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 330); /*0x75df0d*/
  Power::FlagProcess(a2, v7); /*0x75df16*/
  IDA_LOBYTE(v8) = *((unsigned char *)this + 331); /*0x75df1b*/
  v9 = Power::FlagProcess(a2, v8); /*0x75df24*/
  IDA_LOBYTE(v9) = *((unsigned char *)this + 332); /*0x75df29*/
  Power::FlagProcess(a2, v9); /*0x75df32*/
  IDA_LOBYTE(v10) = *((unsigned char *)this + 333); /*0x75df37*/
  Power::FlagProcess(a2, v10); /*0x75df40*/
  IDA_LOBYTE(v11) = *((unsigned char *)this + 334); /*0x75df45*/
  v12 = Power::FlagProcess(a2, v11); /*0x75df4e*/
  IDA_LOBYTE(v12) = *((unsigned char *)this + 335); /*0x75df53*/
  Power::FlagProcess(a2, v12); /*0x75df5c*/
  IDA_LOBYTE(v13) = *((unsigned char *)this + 336); /*0x75df61*/
  Power::FlagProcess(a2, v13); /*0x75df6a*/
  IDA_LOBYTE(v14) = *((unsigned char *)this + 337); /*0x75df6f*/
  v15 = Power::FlagProcess(a2, v14); /*0x75df78*/
  IDA_LOBYTE(v15) = *((unsigned char *)this + 338); /*0x75df7d*/
  Power::FlagProcess(a2, v15); /*0x75df86*/
  IDA_LOBYTE(v16) = *((unsigned char *)this + 339); /*0x75df8b*/
  Power::FlagProcess(a2, v16); /*0x75df94*/
  Checksummer::Add_double(*((unsigned int *)this + 38), *((unsigned int *)this + 39)); /*0x75dfa9*/
  Power::TimerProcess(*((unsigned int *)this + 64)); /*0x75dfb7*/
  Checksummer::Add_double(*((unsigned int *)this + 62), *((unsigned int *)this + 63)); /*0x75dfcc*/
  IDA_LOBYTE(v17) = *((unsigned char *)this + 379); /*0x75dfd1*/
  Power::FlagProcess(a2, v17); /*0x75dfda*/
  Power::TimerProcess(*((unsigned int *)this + 95)); /*0x75dfe8*/
  Power::TimerProcess(*((unsigned int *)this + 96)); /*0x75dff6*/
  Power::TimerProcess(*((unsigned int *)this + 97)); /*0x75e004*/
  Power::TimerProcess(*((unsigned int *)this + 98)); /*0x75e012*/
  Checksummer::Add_Buffer((unsigned int *)a2, (uint8_t *)((char *)this + 348), 16); /*0x75e022*/
  v18 = (unsigned int *)((char *)this + 160); /*0x75e027*/
  v20 = 11; /*0x75e02d*/
  do /*0x75e04f*/
  {
    Checksummer::Add_double(*v18, v18[1]); /*0x75e03e*/
    v18 += 2; /*0x75e047*/
    --v20; /*0x75e04b*/
  }
  while ( v20 ); /*0x75e04f*/
  Power::TimerProcess(*((unsigned int *)this + 69)); /*0x75e05a*/
  return Power::TimerProcess(*((unsigned int *)this + 72)); /*0x75e06d*/

}
} // namespace gamemd
// 0x75E0C0
namespace gamemd {
int WarheadTypeClass::SaveLoad_Prefix(unsigned int * a1, int a2)
{

  unsigned int *v2; // edi
  unsigned int *v3; // ebp
  int v4; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // esi
  int n; // esi

  v2 = a1; /*0x75e0c4*/
  v3 = a1 + 99; /*0x75e0ce*/
  (*(void (**)(unsigned int *))(a1[99] + 12))(a1 + 99); /*0x75e0d6*/
  (*(void (**)(unsigned int *))(v2[106] + 12))(v2 + 106); /*0x75e0e7*/
  v4 = a2; /*0x75e0ea*/
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
      *v2 = &vt_WarheadTypeClass; /*0x75e13e*/
      v2[1] = &vt_WarheadTypeClass; /*0x75e144*/
      v2[2] = &vt_WarheadTypeClass; /*0x75e14b*/
      v2[3] = &vt_WarheadTypeClass; /*0x75e152*/
    }
    if ( v2 != (unsigned int *)-260 ) /*0x75e161*/
    {
      DynamicVectorClass::AnimTypeConstructor(v2 + 65, 0, 0); /*0x75e169*/
      v2[65] = &vt_TypeList_AnimTypeClass_const; /*0x75e16e*/
    }
    (*(void (**)(int, unsigned int **, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a1, 4, 0); /*0x75e180*/
    for ( i = 0; i < (int)a1; ++i ) /*0x75e18b*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a2, 4, 0); /*0x75e199*/
      DynamicVector::Add_Alt4(v2 + 65, &a2); /*0x75e1a7*/
    }
    if ( v3 ) /*0x75e1b5*/
      TypeList::VoxelAnimConstructor(v3); /*0x75e1b9*/
    (*(void (**)(int, unsigned int **, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a1, 4, 0); /*0x75e1ca*/
    for ( j = 0; j < (int)a1; ++j ) /*0x75e1d5*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a2, 4, 0); /*0x75e1e3*/
      DynamicVector::Add2(v3, &a2); /*0x75e1ed*/
    }
    if ( v2 != (unsigned int *)-424 ) /*0x75e201*/
      TypeList::Construct(v2 + 106); /*0x75e205*/
    (*(void (**)(int, unsigned int **, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a1, 4, 0); /*0x75e216*/
    for ( k = 0; k < (int)a1; ++k ) /*0x75e221*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a2, 4, 0); /*0x75e22f*/
      DynamicVector::Add_Alt(v2 + 106, &a2); /*0x75e239*/
    }
    for ( m = 0; m < v2[69]; ++m ) /*0x75e24f*/
      ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v2[66] + 4 * m)); /*0x75e260*/
    for ( n = 0; n < v2[103]; ++n ) /*0x75e27a*/
      ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v2[100] + 4 * n)); /*0x75e28b*/
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, v2 + 80); /*0x75e2a7*/
    return 0; /*0x75e2ac*/
  }
  return result; /*0x75e2ae*/

}
} // namespace gamemd
// 0x75E2C0
namespace gamemd {
void WarheadTypeClass_SaveLoad_Prefix_0(WarheadTypeClass *aP0)
{
  int v5; // ebx
  int result; // eax
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a2, (int)WarheadTypeClass_field_0x114); /*0x75e2d1*/
  if ( result >= 0 ) /*0x75e2d8*/
  {
    v7 = *a2; /*0x75e2e4*/
    WarheadTypeClass_field_0x114 = (int *)aP0->WarheadTypeClass_field_0x114; /*0x75e2f1*/
    (*(void (__stdcall **)(int *, int **, int, unsigned int, int))(v7 + 16))(a2, &WarheadTypeClass_field_0x114, 4, 0, v5); /*0x75e2f5*/
    for ( i = 0; i < a4; ++i ) /*0x75e300*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, aP0->WarheadTypeClass_field_0x108 + 4 * i, 4, 0); /*0x75e313*/
    v9 = *a2; /*0x75e323*/
    a4 = aP0->unused_1CC[0]; /*0x75e32f*/
    (*(void (__stdcall **)(int *, int *, int, unsigned int))(v9 + 16))(a2, &a4, 4, 0); /*0x75e333*/
    for ( j = 0; j < a4; ++j ) /*0x75e33e*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))( /*0x75e351*/
        a2,
        aP0->WarheadTypeClass_field_0x190[0] + 4 * j,
        4,
        0);
    v11 = *a2; /*0x75e361*/
    a4 = *(unsigned int *)&aP0->__pad_1B0[8]; /*0x75e36d*/
    (*(void (__stdcall **)(int *, int *, int))(v11 + 16))(a2, &a4, 4); /*0x75e371*/
    for ( k = 0; k < (int)WarheadTypeClass_field_0x114; ++k ) /*0x75e37c*/
      (*(void (__stdcall **)(int *, char *, int, unsigned int))(*a2 + 16))( /*0x75e38f*/
        a2,
        (char *)&aP0->WarheadTypeClass_field_0x1AC->AbstractClass + 4 * k,
        4,
        0);
    return 0; /*0x75e399*/
  }
  return result; /*0x75e39c*/
}
}
// 0x75E3B0
int WarheadTypeClass::FindOrCreate(ObjectClass * Source)
{

  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x75e3cc*/
    return 0; /*0x75e42f*/
  v2 = 0; /*0x75e3dd*/
  if ( *(int *)&stru_87C374.__pad_579C[22976] <= 0 ) /*0x75e3e1*/
  {
LABEL_6:
    v3 = RA2_OPNEW(0x1D0u); /*0x75e406*/
    if ( v3 ) /*0x75e415*/
      return WarheadTypeClass::Construct(v3, Source); /*0x75e421*/
    return 0; /*0x75e415*/
  }
  while ( _strcmpi((const void *)(*(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22964] + 4 * v2) + 36), Source) ) /*0x75e3fa*/
  {
    if ( ++v2 >= *(int *)&stru_87C374.__pad_579C[22976] ) /*0x75e404*/
      goto LABEL_6; /*0x75e404*/
  }
  return *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22964] + 4 * v2); /*0x75e41f*/

}
// 0x75E440
int WarheadTypeClass::GetDamage(int a2, int a3)
{

  int v3; // eax
  unsigned int *v4; // esi
  int result; // eax
  int v6; // ecx
  int v7; // ecx

  v3 = a2; /*0x75e440*/
  if ( a2 == *((unsigned int *)this + 80) ) /*0x75e44c*/
    *((unsigned int *)this + 80) = 0; /*0x75e44e*/
  v4 = (unsigned int *)this + 65; /*0x75e459*/
  a2 = v3; /*0x75e463*/
  result = (*(int (**)(unsigned int *, int *))(*((unsigned int *)this + 65) + 16))((unsigned int *)this + 65, &a2); /*0x75e46c*/
  if ( result != -1 ) /*0x75e472*/
  {
    v6 = v4[4]; /*0x75e474*/
    if ( result < v6 ) /*0x75e479*/
    {
      v7 = v6 - 1; /*0x75e47b*/
      for ( v4[4] = v7; result < v4[4]; *(unsigned int *)(v4[1] + 4 * result - 4) = *(unsigned int *)(v4[1] + 4 * result) ) /*0x75e481*/
        ++result; /*0x75e486*/
    }
  }
  return result; /*0x75e496*/

}
// 0x75E510
CampaignClass * * WarheadTypeClass::Destructor(void ** Block, char a2)
{

  int v3; // eax
  int v4; // eax
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  void **v9; // [esp+4h] [ebp-4h] BYREF

  *Block = &vt_WarheadTypeClass; /*0x75e516*/
  *(Block + 1) = &vt_WarheadTypeClass; /*0x75e51c*/
  *(Block + 2) = &vt_WarheadTypeClass; /*0x75e523*/
  *(Block + 3) = &vt_WarheadTypeClass; /*0x75e52a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x75e531*/
  v9 = Block; /*0x75e546*/
  v3 = ((int (*)(WarheadTypeClass **, void ***))g_abs_8874C0->field_10)(&g_abs_8874C0, &v9); /*0x75e54a*/
  if ( v3 != -1 && v3 < g_abs_8874D0 && v3 < --g_abs_8874D0 ) /*0x75e565*/
  {
    do /*0x75e57d*/
    {
      ++v3; /*0x75e56d*/
      *((unsigned int *)g_abs_8874C4 + v3 - 1) = *((unsigned int *)g_abs_8874C4 + v3); /*0x75e571*/
    }
    while ( v3 < g_abs_8874D0 ); /*0x75e57d*/
  }
  v9 = Block; /*0x75e58f*/
  v4 = (*(int (**)(int *, void ***))(g_abs_B0F670 + 16))(&g_abs_B0F670, &v9); /*0x75e593*/
  if ( v4 != -1 && v4 < g_abs_B0F680 && v4 < --g_abs_B0F680 ) /*0x75e5ae*/
  {
    do /*0x75e5c6*/
    {
      ++v4; /*0x75e5b6*/
      *((unsigned int *)g_abs_B0F674 + v4 - 1) = *((unsigned int *)g_abs_B0F674 + v4); /*0x75e5ba*/
    }
    while ( v4 < g_abs_B0F680 ); /*0x75e5c6*/
  }
  v5 = *(Block + 107); /*0x75e5c8*/
  *(Block + 106) = &vt_VectorClass_int; /*0x75e5d1*/
  if ( v5 && *((unsigned char *)Block + 437) ) /*0x75e5df*/
  {
    RA2_OPDEL(v5); /*0x75e5e8*/
    *(Block + 107) = 0; /*0x75e5f0*/
  }
  *((unsigned char *)Block + 437) = 0; /*0x75e5f6*/
  *(Block + 108) = 0; /*0x75e5fc*/
  v6 = *(Block + 100); /*0x75e602*/
  *(Block + 99) = &vt_VectorClass_VoxelAnimTypeClass_const; /*0x75e608*/
  if ( v6 && *((unsigned char *)Block + 409) ) /*0x75e616*/
  {
    RA2_OPDEL(v6); /*0x75e61f*/
    *(Block + 100) = 0; /*0x75e627*/
  }
  *((unsigned char *)Block + 409) = 0; /*0x75e62d*/
  *(Block + 101) = 0; /*0x75e633*/
  v7 = *(Block + 66); /*0x75e639*/
  *(Block + 65) = &vt_VectorClass_AnimTypeClass_const; /*0x75e63f*/
  if ( v7 && *((unsigned char *)Block + 273) ) /*0x75e64d*/
  {
    RA2_OPDEL(v7); /*0x75e656*/
    *(Block + 66) = 0; /*0x75e65e*/
  }
  *((unsigned char *)Block + 273) = 0; /*0x75e666*/
  *(Block + 67) = 0; /*0x75e66c*/
  AbstractTypeClass::Dtor(Block); /*0x75e672*/
  if ( (Block & 1) != 0 ) /*0x75e67e*/
    RA2_OPDEL(Block); /*0x75e681*/
  return (WarheadTypeClass *)Block; /*0x75e68b*/

}
// 0x772080
namespace gamemd {
void* WarheadTypeClass_ReadINI()
{
  void ***v4; // eax
  uint8_t *v5; // eax
  void ***v6; // eax
  void **v7; // edx
  void *v8; // eax
  void ***v9; // eax
  uint8_t *v10; // eax
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
  uint8_t *v59; // [esp-14h] [ebp-F4h]
  char *p_IntList; // [esp-10h] [ebp-F0h]
  char *v61; // [esp-Ch] [ebp-ECh]
  char *v62; // [esp-8h] [ebp-E8h]
  int v63; // [esp-4h] [ebp-E4h]
  void ***IntList; // [esp+10h] [ebp-D0h] BYREF
  void **v65; // [esp+14h] [ebp-CCh] BYREF
  void *Block; // [esp+18h] [ebp-C8h]
  char v67; // [esp+21h] [ebp-BFh]
  unsigned int v68[3]; // [esp+30h] [ebp-B0h] BYREF
  char v69; // [esp+3Dh] [ebp-A3h]
  int v70; // [esp+40h] [ebp-A0h]
  int v71; // [esp+44h] [ebp-9Ch]
  int v72; // [esp+48h] [ebp-98h]
  char Source[20]; // [esp+4Ch] [ebp-94h] BYREF
  char String[128]; // [esp+60h] [ebp-80h] BYREF

  INIClass::ResetSection(a3); /*0x772095*/
  if ( !INIClass::BinarySearchSection((int)a3, (uint8_t *)(a1 + 36)) ) /*0x7720a0*/
    return 0; /*0x7729d9*/
  *(unsigned int *)(a1 + 152) = INIClass::ReadInt_Overwrite(a1 + 36, aAmbientdamage, *(unsigned int *)(a1 + 152)); /*0x7720c6*/
  *(unsigned char *)(a1 + 304) = INIClass::ReadBool_Overwrite(a1 + 36, aIssonic, *(unsigned char *)(a1 + 304)); /*0x7720e0*/
  *(unsigned char *)(a1 + 305) = INIClass::ReadBool_Overwrite(a1 + 36, aSpawner, *(unsigned char *)(a1 + 305)); /*0x7720fa*/
  *(unsigned char *)(a1 + 306) = INIClass::ReadBool_Overwrite(a1 + 36, aLimbolaunch, *(unsigned char *)(a1 + 306)); /*0x772114*/
  *(unsigned char *)(a1 + 307) = INIClass::ReadBool_Overwrite(a1 + 36, aDecloaktofire, *(unsigned char *)(a1 + 307)); /*0x77212e*/
  *(unsigned char *)(a1 + 308) = INIClass::ReadBool_Overwrite(a1 + 36, aCellrangefindi, *(unsigned char *)(a1 + 308)); /*0x772148*/
  *(unsigned char *)(a1 + 309) = INIClass::ReadBool_Overwrite(a1 + 36, aFireonce, *(unsigned char *)(a1 + 309)); /*0x772162*/
  *(unsigned char *)(a1 + 310) = INIClass::ReadBool_Overwrite(a1 + 36, aNeveruse, *(unsigned char *)(a1 + 310)); /*0x77217c*/
  *(unsigned char *)(a1 + 311) = INIClass::ReadBool_Overwrite(a1 + 36, aRevealonfire, *(unsigned char *)(a1 + 311)); /*0x772196*/
  *(unsigned char *)(a1 + 312) = INIClass::ReadBool_Overwrite(a1 + 36, aTerrainfire, *(unsigned char *)(a1 + 312)); /*0x7721b0*/
  *(unsigned char *)(a1 + 313) = INIClass::ReadBool_Overwrite(a1 + 36, aSabotagecursor, *(unsigned char *)(a1 + 313)); /*0x7721ca*/
  *(unsigned char *)(a1 + 314) = INIClass::ReadBool_Overwrite(a1 + 36, aMigattackcurso, *(unsigned char *)(a1 + 314)); /*0x7721e4*/
  *(unsigned char *)(a1 + 315) = INIClass::ReadBool_Overwrite(a1 + 36, aDisguisefireon, *(unsigned char *)(a1 + 315)); /*0x7721fe*/
  *(unsigned char *)(a1 + 320) = INIClass::ReadBool_Overwrite(a1 + 36, aInfinitemindco, *(unsigned char *)(a1 + 320)); /*0x772218*/
  *(unsigned char *)(a1 + 321) = INIClass::ReadBool_Overwrite(a1 + 36, aFirewhilemovin, *(unsigned char *)(a1 + 321)); /*0x772232*/
  *(unsigned char *)(a1 + 322) = INIClass::ReadBool_Overwrite(a1 + 36, aDrainweapon, *(unsigned char *)(a1 + 322)); /*0x77224c*/
  *(unsigned char *)(a1 + 323) = INIClass::ReadBool_Overwrite(a1 + 36, aFireintranspor, *(unsigned char *)(a1 + 323)); /*0x772266*/
  *(unsigned int *)(a1 + 316) = INIClass::ReadInt_Overwrite(a1 + 36, aDisguisefakebl, *(unsigned int *)(a1 + 316)); /*0x772280*/
  *(unsigned char *)(a1 + 324) = INIClass::ReadBool_Overwrite(a1 + 36, g_INI_Key_Suicide, *(unsigned char *)(a1 + 324)); /*0x77229a*/
  *(unsigned char *)(a1 + 326) = INIClass::ReadBool_Overwrite(a1 + 36, aSupress, *(unsigned char *)(a1 + 326)); /*0x7722b4*/
  *(unsigned int *)(a1 + 156) = INIClass::ReadInt_Overwrite(a1 + 36, aBurst, *(unsigned int *)(a1 + 156)); /*0x7722ce*/
  *(unsigned int *)(a1 + 164) = INIClass::ReadInt_Overwrite(a1 + 36, g_INI_Key_Damage, *(unsigned int *)(a1 + 164)); /*0x7722e8*/
  *(unsigned int *)(a1 + 168) = WarheadTypeClass::loadWarheadINI(a1 + 36, g_INI_Key_Speed, *(unsigned int *)(a1 + 168)); /*0x772302*/
  *(unsigned int *)(a1 + 176) = INIClass::ReadInt_Overwrite(a1 + 36, &off_825478, *(unsigned int *)(a1 + 176)); /*0x77231c*/
  *(unsigned int *)(a1 + 180) = INIClass::ReadCoord(a2, a1 + 36, (int)g_INI_Key_Range, *(unsigned int *)(a1 + 180)); /*0x772336*/
  *(unsigned int *)(a1 + 184) = INIClass::ReadCoord(a2, a1 + 36, (int)aMinimumrange, *(unsigned int *)(a1 + 184)); /*0x77235b*/
  IntList = &v57; /*0x772362*/
  IntVector::Copy(&v57, (unsigned int *)(a1 + 188)); /*0x772366*/
  v4 = IntList; /*0x77236b*/
  IntList[4] = *(void ***)(a1 + 204); /*0x772377*/
  v4[5] = *(void ***)(a1 + 208); /*0x77237d*/
  *v4 = (void*)&TypeList_int_vftable; /*0x772382*/
  v5 = (uint8_t *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(a1 + 36)); /*0x772388*/
  IntList = (void ***)GetINIClassIntList( /*0x77239c*/
                        (int)&v65,
                        a3,
                        v5,
                        (uint8_t *)aReport,
                        v57,
                        v58,
                        (int)v59,
                        (int16_t)p_IntList,
                        (int)v61,
                        (int)v62,
                        v63);
  TypeList::Copy((unsigned int *)(a1 + 188), IntList); /*0x7723a0*/
  v6 = IntList; /*0x7723a5*/
  *(unsigned int *)(a1 + 204) = IntList[4]; /*0x7723ac*/
  *(unsigned int *)(a1 + 208) = v6[5]; /*0x7723b2*/
  v7 = v6[6]; /*0x7723b5*/
  v8 = Block; /*0x7723b8*/
  *(unsigned int *)(a1 + 212) = v7; /*0x7723bc*/
  v65 = (void*)&VectorClass_int_vftable; /*0x7723c1*/
  if ( v8 && v67 ) /*0x7723d1*/
    RA2_OPDEL(v8); /*0x7723d4*/
  IntList = &v57; /*0x7723e8*/
  IntVector::Copy(&v57, (unsigned int *)(a1 + 216)); /*0x7723ec*/
  v9 = IntList; /*0x7723f1*/
  IntList[4] = *(void ***)(a1 + 232); /*0x7723fd*/
  v9[5] = *(void ***)(a1 + 236); /*0x772405*/
  *v9 = (void*)&TypeList_int_vftable; /*0x772408*/
  v10 = (uint8_t *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(a1 + 36)); /*0x77240e*/
  IntList = (void ***)GetINIClassIntList( /*0x772422*/
                        (int)&v65,
                        a3,
                        v10,
                        (uint8_t *)aDownreport,
                        v57,
                        v58,
                        (int)v59,
                        (int16_t)p_IntList,
                        (int)v61,
                        (int)v62,
                        v63);
  TypeList::Copy((unsigned int *)(a1 + 216), IntList); /*0x772426*/
  v11 = IntList; /*0x77242b*/
  *(unsigned int *)(a1 + 232) = IntList[4]; /*0x772432*/
  *(unsigned int *)(a1 + 236) = v11[5]; /*0x772438*/
  *(unsigned int *)(a1 + 240) = v11[6]; /*0x77243e*/
  v65 = (void*)&VectorClass_int_vftable; /*0x772447*/
  if ( Block && v67 ) /*0x772457*/
    RA2_OPDEL(Block); /*0x77245a*/
  if ( INIClass::GetString( /*0x772479*/
         a3,
         (uint8_t *)(a1 + 36),
         (uint8_t *)aAnim_0,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(&v65, 0, 0); /*0x77248e*/
    v65 = (void*)&TypeList_AnimTypeClass_const___vftable; /*0x77249d*/
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) ) /*0x7724af*/
    {
      if ( !*i ) /*0x7724b1*/
        break; /*0x7724b4*/
      IntList = (void ***)AnimTypeClass::FindOrCreate(i); /*0x7724bf*/
      if ( IntList ) /*0x7724c3*/
        DynamicVector::Add_Alt4(&v65, &IntList); /*0x7724ce*/
    }
    TypeList::AnimTypeCopy(v68, &v65); /*0x7724ef*/
    v65 = (void*)&VectorClass_AnimTypeClass_const___vftable; /*0x7724f8*/
    DynamicVectorClass::Destroy_Alt((int)&v65); /*0x772500*/
  }
  else
  {
    TypeList::AnimTypeCopy(v68, (unsigned int *)(a1 + 244)); /*0x772512*/
  }
  VectorClass::CopyDefault((unsigned int *)(a1 + 244), v68); /*0x772524*/
  v13 = v70; /*0x77252d*/
  v14 = v71; /*0x772531*/
  *(unsigned int *)(a1 + 268) = v72; /*0x772535*/
  v15 = (void *)v68[1]; /*0x772538*/
  *(unsigned int *)(a1 + 260) = v13; /*0x77253c*/
  *(unsigned int *)(a1 + 264) = v14; /*0x772541*/
  v68[0] = (void*)&VectorClass_AnimTypeClass_const___vftable; /*0x772544*/
  if ( v15 && v69 ) /*0x772554*/
    RA2_OPDEL(v15); /*0x772557*/
  v16 = *(unsigned int *)(a1 + 276); /*0x77255f*/
  if ( INIClass::GetString( /*0x77257c*/
         a3,
         (uint8_t *)(a1 + 36),
         (uint8_t *)aAssaultanim,
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
  *(unsigned int *)(a1 + 276) = v17; /*0x7725a6*/
  v18 = *(unsigned int *)(a1 + 272); /*0x7725ac*/
  if ( INIClass::GetString(a3, (uint8_t *)(a1 + 36), (uint8_t *)p_IntList, v61, v62, v63) ) /*0x7725b5*/
    v19 = AnimTypeClass::FindOrCreate(String); /*0x7725c2*/
  else
    v19 = v18; /*0x7725c9*/
  *(unsigned int *)(a1 + 272) = v19; /*0x7725cb*/
  v20 = *(unsigned int *)(a1 + 280); /*0x7725d1*/
  if ( INIClass::GetString( /*0x7725ee*/
         a3,
         (uint8_t *)(a1 + 36),
         (uint8_t *)aOpentoppedanim,
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
  v22 = *(unsigned char *)(a1 + 327); /*0x772604*/
  *(unsigned int *)(a1 + 280) = v21; /*0x77260a*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, aCamera, v22); /*0x772619*/
  IDA_LOBYTE(v63) = *(unsigned char *)(a1 + 329); /*0x772626*/
  v62 = aIslaser; /*0x772627*/
  v61 = (char *)(a1 + 36); /*0x77262c*/
  *(unsigned char *)(a1 + 327) = Bool_Overwrite; /*0x77262d*/
  *(unsigned char *)(a1 + 329) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x772638*/
  v24 = INIClass::ReadBool_Overwrite(a1 + 36, aDisklaser, *(unsigned char *)(a1 + 330)); /*0x77264d*/
  v25 = *(unsigned char *)(a1 + 331); /*0x772652*/
  *(unsigned char *)(a1 + 330) = v24; /*0x772658*/
  v26 = INIClass::ReadBool_Overwrite(a1 + 36, aIsline, v25); /*0x772667*/
  IDA_LOBYTE(v63) = *(unsigned char *)(a1 + 333); /*0x772674*/
  v62 = aIshousecolor; /*0x772675*/
  v61 = (char *)(a1 + 36); /*0x77267a*/
  *(unsigned char *)(a1 + 331) = v26; /*0x77267b*/
  *(unsigned char *)(a1 + 333) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x772686*/
  v27 = INIClass::ReadBool_Overwrite(a1 + 36, aCharges, *(unsigned char *)(a1 + 328)); /*0x77269b*/
  v28 = *(unsigned char *)(a1 + 325); /*0x7726a0*/
  *(unsigned char *)(a1 + 328) = v27; /*0x7726a6*/
  v29 = INIClass::ReadBool_Overwrite(a1 + 36, aTurboboost, v28); /*0x7726b5*/
  IDA_LOBYTE(v63) = *(unsigned char *)(a1 + 297); /*0x7726c2*/
  v62 = aUsefireparticl; /*0x7726c3*/
  v61 = (char *)(a1 + 36); /*0x7726c8*/
  *(unsigned char *)(a1 + 325) = v29; /*0x7726c9*/
  *(unsigned char *)(a1 + 297) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x7726d4*/
  v30 = INIClass::ReadBool_Overwrite(a1 + 36, aUsesparkpartic, *(unsigned char *)(a1 + 298)); /*0x7726e9*/
  v31 = *(unsigned char *)(a1 + 299); /*0x7726ee*/
  *(unsigned char *)(a1 + 298) = v30; /*0x7726f4*/
  v32 = INIClass::ReadBool_Overwrite(a1 + 36, aOmnifire, v31); /*0x772703*/
  IDA_LOBYTE(v63) = *(unsigned char *)(a1 + 300); /*0x772710*/
  v62 = aDistributedwea; /*0x772711*/
  v61 = (char *)(a1 + 36); /*0x772716*/
  *(unsigned char *)(a1 + 299) = v32; /*0x772717*/
  *(unsigned char *)(a1 + 300) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x772722*/
  v33 = INIClass::ReadBool_Overwrite(a1 + 36, aIsrailgun, *(unsigned char *)(a1 + 301)); /*0x772737*/
  v34 = *(unsigned char *)(a1 + 302); /*0x77273c*/
  *(unsigned char *)(a1 + 301) = v33; /*0x772742*/
  v35 = INIClass::ReadBool_Overwrite(a1 + 36, aLobber, v34); /*0x772751*/
  v63 = a1 + 288; /*0x772760*/
  v62 = aLaserinnercolo; /*0x772761*/
  v61 = (char *)(a1 + 36); /*0x772766*/
  p_IntList = (char *)&IntList; /*0x772767*/
  *(unsigned char *)(a1 + 302) = v35; /*0x77276a*/
  Coord = INIClass::GetCoord(a3, (int)p_IntList, (uint8_t *)v61, (uint8_t *)v62, (uint8_t *)v63); /*0x772770*/
  *(unsigned short *)(a1 + 288) = *(unsigned short *)Coord; /*0x772778*/
  *(unsigned char *)(a1 + 290) = *(unsigned char *)(Coord + 2); /*0x772785*/
  v37 = INIClass::GetCoord( /*0x772796*/
          a3,
          (int)&IntList,
          (uint8_t *)(a1 + 36),
          (uint8_t *)aLaseroutercolo,
          (uint8_t *)(a1 + 291));
  *(unsigned short *)(a1 + 291) = *(unsigned short *)v37; /*0x77279e*/
  *(unsigned char *)(a1 + 293) = *(unsigned char *)(v37 + 2); /*0x7727ab*/
  v38 = INIClass::GetCoord( /*0x7727bc*/
          a3,
          (int)&IntList,
          (uint8_t *)(a1 + 36),
          (uint8_t *)aLaserouterspre,
          (uint8_t *)(a1 + 294));
  *(unsigned short *)(a1 + 294) = *(unsigned short *)v38; /*0x7727c4*/
  v39 = *(unsigned char *)(v38 + 2); /*0x7727ca*/
  v63 = *(char *)(a1 + 334); /*0x7727d4*/
  v62 = aLaserduration; /*0x7727d5*/
  v61 = (char *)(a1 + 36); /*0x7727da*/
  *(unsigned char *)(a1 + 296) = v39; /*0x7727db*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(v61, v62, v63); /*0x7727de*/
  v41 = *(unsigned char *)(a1 + 332); /*0x7727e3*/
  *(unsigned char *)(a1 + 334) = Int_Overwrite; /*0x7727e9*/
  v42 = INIClass::ReadBool_Overwrite(a1 + 36, aIsbiglaser, v41); /*0x7727f8*/
  IDA_LOBYTE(v63) = *(unsigned char *)(a1 + 303); /*0x772805*/
  v62 = aBright; /*0x772806*/
  v61 = (char *)(a1 + 36); /*0x77280b*/
  *(unsigned char *)(a1 + 332) = v42; /*0x77280c*/
  *(unsigned char *)(a1 + 303) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x772817*/
  v43 = INIClass::ReadBool_Overwrite(a1 + 36, aIonsensitive, *(unsigned char *)(a1 + 335)); /*0x77282c*/
  v44 = *(unsigned char *)(a1 + 336); /*0x772831*/
  *(unsigned char *)(a1 + 335) = v43; /*0x772837*/
  v45 = INIClass::ReadBool_Overwrite(a1 + 36, aAreafire, v44); /*0x772846*/
  IDA_LOBYTE(v63) = *(unsigned char *)(a1 + 337); /*0x772853*/
  v62 = aIselectricbolt; /*0x772854*/
  v61 = (char *)(a1 + 36); /*0x772859*/
  *(unsigned char *)(a1 + 336) = v45; /*0x77285a*/
  *(unsigned char *)(a1 + 337) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x772865*/
  v46 = INIClass::ReadBool_Overwrite(a1 + 36, aDrawboltaslase, *(unsigned char *)(a1 + 338)); /*0x77287a*/
  v47 = *(unsigned char *)(a1 + 339); /*0x77287f*/
  *(unsigned char *)(a1 + 338) = v46; /*0x772885*/
  v48 = INIClass::ReadBool_Overwrite(a1 + 36, aIsalternatecol, v47); /*0x772894*/
  IDA_LOBYTE(v63) = *(unsigned char *)(a1 + 340); /*0x7728a1*/
  v62 = aIsradbeam; /*0x7728a2*/
  v61 = (char *)(a1 + 36); /*0x7728a7*/
  *(unsigned char *)(a1 + 339) = v48; /*0x7728a8*/
  *(unsigned char *)(a1 + 340) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x7728b3*/
  v49 = INIClass::ReadBool_Overwrite(a1 + 36, aIsraderuption, *(unsigned char *)(a1 + 341)); /*0x7728c8*/
  v50 = *(unsigned int *)(a1 + 344); /*0x7728cd*/
  *(unsigned char *)(a1 + 341) = v49; /*0x7728d3*/
  v51 = INIClass::ReadInt_Overwrite(a1 + 36, aRadlevel, v50); /*0x7728e2*/
  IDA_LOBYTE(v63) = *(unsigned char *)(a1 + 348); /*0x7728ef*/
  v62 = aIsmagbeam; /*0x7728f0*/
  v61 = (char *)(a1 + 36); /*0x7728f5*/
  *(unsigned int *)(a1 + 344) = v51; /*0x7728f6*/
  *(unsigned char *)(a1 + 348) = INIClass::ReadBool_Overwrite(v61, v62, v63); /*0x772901*/
  Source[0] = 0; /*0x77291b*/
  INIClass::GetString(a3, (uint8_t *)(a1 + 36), (uint8_t *)aAttachedpartic, Source, Source, 20); /*0x772920*/
  v52 = WarheadTypeClass::applyDamage(Source); /*0x772929*/
  if ( v52 != -1 ) /*0x772931*/
    *(unsigned int *)(a1 + 284) = *((unsigned int *)dword_A83D6C + v52); /*0x77293c*/
  v53 = *(unsigned int *)(a1 + 172); /*0x772942*/
  if ( INIClass::GetString( /*0x77295f*/
         a3,
         (uint8_t *)(a1 + 36),
         (uint8_t *)g_INI_Key_Warhead,
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
  v55 = *(unsigned int *)(a1 + 160); /*0x772975*/
  v63 = 128; /*0x77297f*/
  v62 = String; /*0x772984*/
  v61 = &g_INI_DefaultBuffer; /*0x772985*/
  p_IntList = aProjectile; /*0x77298a*/
  v59 = (uint8_t *)(a1 + 36); /*0x77298f*/
  *(unsigned int *)(a1 + 172) = v54; /*0x772992*/
  if ( INIClass::GetString(a3, v59, (uint8_t *)p_IntList, v61, v62, v63) ) /*0x772998*/
    *(unsigned int *)(a1 + 160) = ObjectTypeClass::FindOrCreate(String); /*0x7729aa*/
  else
    *(unsigned int *)(a1 + 160) = v55; /*0x7729c1*/
  return 1; /*0x7729b2*/
}
}
// 0x524ED0
void WarheadTypeClass::GetClassIdentifier()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x524ed6*/
  *((unsigned int *)this + 4) = 0; /*0x524ed9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x524ee0*/
  {
    RA2_OPDEL(v2); /*0x524ee6*/
    *((unsigned int *)this + 1) = 0; /*0x524eee*/
  }
  *((unsigned char *)this + 13) = 0; /*0x524ef1*/
  *((unsigned int *)this + 2) = 0; /*0x524ef4*/

}
// 0x524F00
unsigned int WarheadTypeClass::LoadTypeData(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x524f00*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x524f15*/
  else
    return 0; /*0x524f07*/

}
// 0x524FB0
int WarheadTypeClass::SaveToINI(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x524fba*/

}
// 0x524FC0
TypeList_flat * WarheadTypeClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x524fc3*/
  *Block = &vt_VectorClass_AnimTypeClass_const; /*0x524fc6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x524fd0*/
  {
    RA2_OPDEL(v3); /*0x524fd8*/
    *(Block + 1) = 0; /*0x524fe0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x524feb*/
  *(Block + 2) = 0; /*0x524ff1*/
  if ( (Block & 1) != 0 ) /*0x524ff8*/
    RA2_OPDEL(Block); /*0x524ffb*/
  return (TypeList *)Block; /*0x525005*/

}
// 0x5250D0
char WarheadTypeClass::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x5250d2*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x5250dd*/
  {
    v3 = 0; /*0x5250df*/
    if ( v2 <= 0 ) /*0x5250e3*/
      return 1; /*0x525103*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x5250e5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5250eb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5250f4*/
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
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x525400*/
  result = 0; /*0x525403*/
  if ( v2 <= 0 ) /*0x525408*/
    return -1; /*0x52541f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x52540e*/
  {
    if ( ++result >= v2 ) /*0x52541d*/
      return -1; /*0x52541d*/
  }
  return result; /*0x525422*/

}
// 0x52AD50
void * WarheadTypeClass::parseModifiers(char a2)
{

  CCINIClass *v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  void *v9; // [esp-8h] [ebp-10h]

  v3 = (CCINIClass *)this->field_C; /*0x52ad54*/
  *(unsigned int *)this->__pad_0 = &vt_INIClass_INIEntry; /*0x52ad57*/
  free(v3); /*0x52ad5e*/
  v9 = (void *)this->field_10; /*0x52ad68*/
  this->field_C = 0; /*0x52ad69*/
  free(v9); /*0x52ad6c*/
  v4 = *(unsigned int *)this->__pad_14; /*0x52ad71*/
  this->field_10 = 0; /*0x52ad79*/
  if ( v4 ) /*0x52ad7c*/
  {
    do /*0x52ada0*/
    {
      free(**(void ***)this->__pad_14); /*0x52ad85*/
      v5 = *(unsigned int *)(*(unsigned int *)this->__pad_14 + 4); /*0x52ad8f*/
      RA2_OPDEL(*(void **)this->__pad_14); /*0x52ad93*/
      *(unsigned int *)this->__pad_14 = v5; /*0x52ad9d*/
    }
    while ( v5 ); /*0x52ada0*/
  }
  free((void *)this->field_18); /*0x52ada7*/
  this->field_18 = 0; /*0x52adb1*/
  *(unsigned int *)this->__pad_0 = &vt_GenericNode; /*0x52adb4*/
  if ( this ) /*0x52adba*/
  {
    v6 = *(unsigned int *)&this->__pad_0[4]; /*0x52adbc*/
    if ( v6 ) /*0x52adc1*/
    {
      v7 = *(unsigned int *)&this->__pad_0[8]; /*0x52adc3*/
      if ( v7 ) /*0x52adc8*/
      {
        *(unsigned int *)(v7 + 4) = v6; /*0x52adca*/
        *(unsigned int *)(*(unsigned int *)&this->__pad_0[4] + 8) = *(unsigned int *)&this->__pad_0[8]; /*0x52add3*/
        *(unsigned int *)&this->__pad_0[8] = 0; /*0x52add6*/
        *(unsigned int *)&this->__pad_0[4] = 0; /*0x52add9*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52ade1*/
    RA2_OPDEL(this); /*0x52ade4*/
  return this; /*0x52adee*/

}
// 0x52AE00
WarheadTypeClass * WarheadTypeClass::parseAnimations(char * Block, char a2)
{

  WarheadTypeClass::parseVerses(Block); /*0x52ae03*/
  if ( (Block & 1) != 0 ) /*0x52ae0d*/
    RA2_OPDEL(Block); /*0x52ae10*/
  return (WarheadTypeClass *)Block; /*0x52ae1a*/

}
// 0x672990
int WarheadTypeClass::LoadType()
{

  int KeyCount; // ebx
  int i; // esi
  uint8_t *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (uint8_t *)g_abs_83A0D0); /*0x6729a6*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6729ac*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v6, (uint8_t *)g_abs_83A0D0, i); /*0x6729c2*/
    if ( INIClass::GetString( /*0x6729cf*/
           (uint8_t ***)v6,
           (uint8_t *)g_abs_83A0D0,
           StringByIndex,
           &g_abs_889F64,
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
CCINIClass * WarheadTypeClass::checkImmunity(TypeList_flat * aP1)
{

  *this = &vt_TypeList_VoxelAnimTypeClass_const; /*0x75e692*/
  return (CCINIClass *)this; /*0x75e698*/

}
// 0x75E6A0
DynamicVector * WarheadTypeClass::calculateDamage(AbstractClass * aP1)
{

  *this = &vt_TypeList_int; /*0x75e6a2*/
  return (DynamicVector *)this; /*0x75e6a8*/

}