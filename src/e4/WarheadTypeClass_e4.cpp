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
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned char aAmbientdamage;  // data: 0x849548 truth(IDA G42.57w9)
extern unsigned char aDecloaktofire;  // data: 0x84951c truth(IDA G42.57w9)
extern unsigned char aIssonic;  // data: 0x849540 truth(IDA G42.57w9)
extern unsigned char aLimbolaunch;  // data: 0x84952c truth(IDA G42.57w9)
extern unsigned char aSpawner;  // data: 0x849538 truth(IDA G42.57w9)


// 0x474810
namespace gamemd {
void * WarheadTypeClass::loadWarheadINI(uint8_t * a2, uint8_t * a3, int a4)
{
    int Int_Overwrite; // eax
    int result; // eax

    Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)this, a2, a3, -1); /*0x47481c*/
    if ( Int_Overwrite == -1 ) /*0x474824*/
      return (void *)a4; /*0x474826*/
    if ( Int_Overwrite >= 100 ) /*0x474830*/
      Int_Overwrite = 100; /*0x474832*/
    result = ((Int_Overwrite <= 0 ? 0 : Int_Overwrite) << 8) / 100;
    if ( result >= 255 ) /*0x47485c*/
      return (void *)(255); /*0x47485e*/
    return (void *)result; /*0x47482a*/
}
} // namespace gamemd
// 0x525300
namespace gamemd {
AbstractClass * * WarheadTypeClass::Release(int a2, unsigned int * a3)
{
    unsigned int *v4; // edi
    int m_8; // ecx
    int i; // eax
    int v7; // eax

    if ( a2 ) /*0x52530c*/
    {
      IDA_LOBYTE(this->m_C) = 0; /*0x525312*/
      if ( a3 ) /*0x525318*/
        v4 = a3; /*0x52532e*/
      else
        v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x52532a*/
      IDA_LOBYTE(this->m_C) = 1; /*0x525332*/
      if ( !v4 ) /*0x525336*/
        return 0; /*0x5253aa*/
      if ( *(unsigned int *)&this->m_1[3] ) /*0x525338*/
      {
        m_8 = this->m_8; /*0x52533f*/
        if ( a2 < m_8 ) /*0x525344*/
          m_8 = a2; /*0x525346*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x52534c*/
          ++i; /*0x525351*/
        if ( IDA_BYTE1(this->m_C) ) /*0x52535e*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x525369*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x525371*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)v4; /*0x52537a*/
      this->m_8 = a2; /*0x525382*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x525385*/
    }
    else
    {
      (*(void (**)(_DynamicVectorClass_PBVAnimTypeClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x52538e*/
    }
    v7 = this->m_8; /*0x525391*/
    if ( v7 < this->m_10 ) /*0x525399*/
      this->m_10 = v7; /*0x52539b*/
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
    int v6; // ecx
    int v7; // edx
    int v8; // edx
    int v9; // ecx
    char *result; // eax
    int v11; // edx
    int v12; // ecx
    int v13; // ecx

    v2 = (void *)*((unsigned int *)this + 3); /*0x52ab84*/
    *(unsigned int *)this = (unsigned int)(void*)&INIClass_INISection_vftable; /*0x52ab87*/
    free( (void *)(v2)); /*0x52ab8e*/
    *((unsigned int *)this + 3) = 0; /*0x52ab98*/
    while ( 1 ) /*0x52ab9b*/
    {
      v3 = *((unsigned int *)this + 6); /*0x52ab9b*/
      if ( !v3 || !*(unsigned int *)(v3 + 4) || !*(unsigned int *)(v3 + 8) ) /*0x52aba7*/
        break; /*0x52aba7*/
      (**(void (***)(int, int))v3)(v3, 1); /*0x52abb4*/
    }
    RA2_OPDEL(*((void **)this + 11)); /*0x52abbc*/
    *((unsigned int *)this + 11) = 0; /*0x52abc1*/
    *((unsigned int *)this + 12) = 0; /*0x52abc4*/
    *((unsigned int *)this + 13) = 0; /*0x52abc7*/
    *(this + 56) = 0; /*0x52abca*/
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
    RA2_OPDEL(*((void **)this + 11)); /*0x52ac03*/
    *((unsigned int *)this + 11) = 0; /*0x52ac08*/
    *((unsigned int *)this + 12) = 0; /*0x52ac0b*/
    *((unsigned int *)this + 13) = 0; /*0x52ac0e*/
    *(this + 56) = 0; /*0x52ac11*/
    *((unsigned int *)this + 15) = 0; /*0x52ac14*/
    *((unsigned int *)this + 4) = (unsigned int)(void*)&GenericList_vftable; /*0x52ac1a*/
    while ( 1 ) /*0x52ac21*/
    {
      v5 = *((unsigned int *)this + 6); /*0x52ac21*/
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
    *((unsigned int *)this + 8) = (unsigned int)(void*)&GenericNode_vftable; /*0x52ac5c*/
    if ( this != (gamemd::WarheadTypeClass *)-32 ) /*0x52ac62*/
    {
      v8 = *((unsigned int *)this + 9); /*0x52ac64*/
      if ( v8 ) /*0x52ac69*/
      {
        v9 = *((unsigned int *)this + 10); /*0x52ac6b*/
        if ( v9 ) /*0x52ac70*/
        {
          *(unsigned int *)(v9 + 4) = v8; /*0x52ac72*/
          *(unsigned int *)(*((unsigned int *)this + 9) + 8) = *((unsigned int *)this + 10); /*0x52ac7b*/
          *((unsigned int *)this + 10) = 0; /*0x52ac7e*/
          *((unsigned int *)this + 9) = 0; /*0x52ac81*/
        }
      }
    }
    result = (char *)(this + 20); /*0x52ac84*/
    *((unsigned int *)this + 5) = (unsigned int)(void*)&GenericNode_vftable; /*0x52ac89*/
    if ( this != (gamemd::WarheadTypeClass *)-20 ) /*0x52ac8f*/
    {
      v11 = *((unsigned int *)this + 6); /*0x52ac91*/
      if ( v11 ) /*0x52ac96*/
      {
        v12 = *((unsigned int *)this + 7); /*0x52ac98*/
        if ( v12 ) /*0x52ac9d*/
        {
          *(unsigned int *)(v12 + 4) = v11; /*0x52ac9f*/
          *(unsigned int *)(*((unsigned int *)this + 6) + 8) = *((unsigned int *)this + 7); /*0x52aca8*/
          *((unsigned int *)this + 7) = 0; /*0x52acab*/
          *((unsigned int *)this + 6) = 0; /*0x52acae*/
        }
      }
    }
    *(unsigned int *)this = (unsigned int)(void*)&GenericNode_vftable; /*0x52acb3*/
    if ( this ) /*0x52acb9*/
    {
      v13 = *((unsigned int *)this + 1); /*0x52acbb*/
      if ( v13 ) /*0x52acc0*/
      {
        result = (char *)*((unsigned int *)this + 2); /*0x52acc2*/
        if ( result ) /*0x52acc7*/
        {
          *((unsigned int *)result + 1) = v13; /*0x52acc9*/
          result = (char *)*((unsigned int *)this + 1); /*0x52accc*/
          *((unsigned int *)result + 2) = *((unsigned int *)this + 2); /*0x52acd2*/
          *((unsigned int *)this + 2) = 0; /*0x52acd5*/
          *((unsigned int *)this + 1) = 0; /*0x52acd8*/
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
    unsigned int *WarheadTypeClass_field_0x8; // eax
    int v4; // ecx
    int v5; // edx
    int v6; // edx
    int v7; // ecx
    void *v8; // edx
    unsigned int *WarheadTypeClass_field_0xC; // ecx

    this->Deform = (unsigned int)((void*)&GenericList_vftable); /*0x52afc6*/
    while ( 1 ) /*0x52afcc*/
    {
      WarheadTypeClass_field_0x8 = (unsigned int *)(this->WarheadTypeClass_field_0x8); /*0x52afcc*/
      if ( !WarheadTypeClass_field_0x8 ) /*0x52afd1*/
        break; /*0x52afd1*/
      if ( !WarheadTypeClass_field_0x8[1] ) /*0x52afd3*/
        break; /*0x52afd3*/
      v4 = WarheadTypeClass_field_0x8[2]; /*0x52afd8*/
      if ( !v4 ) /*0x52afdd*/
        break; /*0x52afdd*/
      v5 = WarheadTypeClass_field_0x8[1]; /*0x52afe3*/
      if ( v5 ) /*0x52afe8*/
      {
        *(unsigned int *)(v4 + 4) = v5; /*0x52afee*/
        *(unsigned int *)(WarheadTypeClass_field_0x8[1] + 8) = WarheadTypeClass_field_0x8[2]; /*0x52aff7*/
        WarheadTypeClass_field_0x8[2] = 0; /*0x52affa*/
        WarheadTypeClass_field_0x8[1] = 0; /*0x52affd*/
      }
    }
    this->WarheadTypeClass_field_0x10 = (unsigned int)((void*)&GenericNode_vftable); /*0x52b007*/
    if ( this != (WarheadTypeClass *)-16 ) /*0x52b00d*/
    {
      v6 = (&this->AnimList)[0]; /*0x52b00f*/
      if ( v6 ) /*0x52b014*/
      {
        v7 = this->InfDeath[0]; /*0x52b016*/
        if ( v7 ) /*0x52b01b*/
        {
          *(unsigned int *)(v7 + 4) = v6; /*0x52b01d*/
          *(unsigned int *)((&this->AnimList)[0] + 8) = ((unsigned int *)&this->InfDeath)[0]; /*0x52b026*/
          this->InfDeath[0] = 0; /*0x52b029*/
          (&this->AnimList)[0] = 0; /*0x52b02c*/
        }
      }
    }
    this->WarheadTypeClass_field_0x4 = (unsigned int)((void*)&GenericNode_vftable); /*0x52b034*/
    if ( this != (WarheadTypeClass *)-4 ) /*0x52b03a*/
    {
      v8 = (void *)(this->WarheadTypeClass_field_0x8); /*0x52b03c*/
      if ( v8 ) /*0x52b041*/
      {
        WarheadTypeClass_field_0xC = (unsigned int *)(this->WarheadTypeClass_field_0xC); /*0x52b043*/
        if ( WarheadTypeClass_field_0xC ) /*0x52b048*/
        {
          WarheadTypeClass_field_0xC[1] = (unsigned int)(v8); /*0x52b04a*/
          *((unsigned int *)this->WarheadTypeClass_field_0x8 + 2) = this->WarheadTypeClass_field_0xC; /*0x52b053*/
          this->WarheadTypeClass_field_0xC = 0; /*0x52b056*/
          this->WarheadTypeClass_field_0x8 = 0; /*0x52b059*/
        }
      }
    }
    if ( (a2 & 1) != 0 ) /*0x52b061*/
      RA2_OPDEL(this); /*0x52b064*/
    return &this->Deform; /*0x52b06e*/
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

    if ( !_strcmpi(Source, g_Str__none_) || !strlen( (const char *)(Source)) ) /*0x644649*/
      return (gamemd::ParticleSystemTypeClass **)(-1); /*0x644653*/
    v2 = 0; /*0x64465a*/
    if ( (int)stru_A83D50.SuperClass_field_0x28 <= 0 ) /*0x64465e*/
    {
  LABEL_6:
      v3 = (OverlayTypeClass *)RA2_OPNEW(0x310u); /*0x644683*/
      if ( v3 ) /*0x644692*/
        v4 = ((OverlayTypeClass *)v3)->Construct( (char *)(Source)); /*0x644697*/
      else
        v4 = (unsigned int *)(0); /*0x6446a4*/
      v6 = 0; /*0x6446ac*/
      if ( (int)stru_A83D50.SuperClass_field_0x28 > 0 ) /*0x6446b0*/
      {
        for ( i = *(unsigned int **)&stru_A83D50.__pad_14[8]; (unsigned int *)*i != v4; ++i ) /*0x6446b2*/
        {
          if ( ++v6 >= (int)stru_A83D50.SuperClass_field_0x28 ) /*0x6446c2*/
            return (gamemd::ParticleSystemTypeClass **)(-1); /*0x6446c2*/
        }
        return (ParticleSystemTypeClass * *)v6; /*0x6446cd*/
      }
      return (gamemd::ParticleSystemTypeClass **)(-1); /*0x6446ca*/
    }
    while ( _strcmpi(Source, (char *)(*(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_14[8] + 4 * v2) + 36)) ) /*0x644677*/
    {
      if ( ++v2 >= (int)stru_A83D50.SuperClass_field_0x28 ) /*0x644681*/
        goto LABEL_6; /*0x644681*/
    }
    return (ParticleSystemTypeClass * *)v2; /*0x6446a0*/
}
} // namespace gamemd
// 0x75CEC0
namespace gamemd {
int WarheadTypeClass::Construct(ObjectClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6)
{
    int v3; // eax
    int v4; // eax

    ((AbstractTypeClass *)this)->Constructor( (char *)(Source)); /*0x75cecb*/
    *(unsigned int *)(this + 152) = 0; /*0x75ced8*/
    *(unsigned int *)(this + 156) = 0; /*0x75cede*/
    *(unsigned int *)(this + 248) = 0; /*0x75cee4*/
    *(unsigned int *)(this + 252) = 1072693248; /*0x75ceeb*/
    *(unsigned int *)(this + 256) = 0; /*0x75cef8*/
    ((AnimTypeVector *)((int)((unsigned int *)(this + 260))))->Constructor((int)((AnimTypeVector *)((int)((unsigned int *)(this + 260)))), 0, 0); /*0x75cefe*/
    *(unsigned int *)(this + 276) = 0; /*0x75cf08*/
    *(unsigned int *)(this + 280) = 10; /*0x75cf0b*/
    *(unsigned int *)(this + 260) = (unsigned int)(void*)&TypeList_AnimTypeClass_const___vftable; /*0x75cf0e*/
    *(unsigned int *)(this + 288) = 0; /*0x75cf14*/
    *(unsigned int *)(this + 292) = 0; /*0x75cf1a*/
    *(unsigned int *)(this + 296) = 0; /*0x75cf25*/
    *(unsigned int *)(this + 300) = 1065353216; /*0x75cf2b*/
    *(unsigned char *)(this + 304) = 0; /*0x75cf31*/
    *(unsigned int *)(this + 308) = 5; /*0x75cf37*/
    *(unsigned int *)(this + 312) = 1065353216; /*0x75cf41*/
    *(unsigned int *)(this + 316) = 0; /*0x75cf47*/
    *(unsigned int *)(this + 320) = 0; /*0x75cf4d*/
    *(unsigned char *)(this + 324) = 0; /*0x75cf53*/
    *(unsigned char *)(this + 325) = 0; /*0x75cf59*/
    *(unsigned char *)(this + 326) = 0; /*0x75cf5f*/
    *(unsigned char *)(this + 327) = 0; /*0x75cf65*/
    *(unsigned char *)(this + 328) = 0; /*0x75cf6b*/
    *(unsigned char *)(this + 329) = 0; /*0x75cf71*/
    *(unsigned char *)(this + 330) = 0; /*0x75cf77*/
    *(unsigned char *)(this + 331) = 0; /*0x75cf7d*/
    *(unsigned char *)(this + 332) = 0; /*0x75cf83*/
    *(unsigned char *)(this + 333) = 0; /*0x75cf89*/
    *(unsigned char *)(this + 334) = 0; /*0x75cf8f*/
    *(unsigned char *)(this + 335) = 0; /*0x75cf95*/
    *(unsigned char *)(this + 336) = 0; /*0x75cf9b*/
    *(unsigned char *)(this + 337) = 0; /*0x75cfa1*/
    *(unsigned char *)(this + 338) = 0; /*0x75cfa7*/
    *(unsigned char *)(this + 339) = 0; /*0x75cfad*/
    *(unsigned char *)(this + 340) = 0; /*0x75cfb3*/
    *(unsigned char *)(this + 341) = 0; /*0x75cfb9*/
    *(unsigned char *)(this + 342) = 0; /*0x75cfbf*/
    *(unsigned char *)(this + 343) = 0; /*0x75cfc5*/
    *(unsigned char *)(this + 344) = 0; /*0x75cfcb*/
    *(unsigned char *)(this + 345) = 0; /*0x75cfd1*/
    *(unsigned char *)(this + 346) = 0; /*0x75cfd7*/
    *(unsigned char *)(this + 347) = 0; /*0x75cfdd*/
    *(unsigned int *)(this + 348) = 1247291207; /*0x75cfee*/
    *(unsigned int *)(this + 352) = 298948665; /*0x75cff9*/
    *(unsigned int *)(this + 356) = -1610610249; /*0x75d001*/
    *(unsigned char *)(this + 364) = 0; /*0x75d009*/
    *(unsigned char *)(this + 365) = 0; /*0x75d00f*/
    *(unsigned int *)(this + 360) = -777003740; /*0x75d015*/
    *(unsigned char *)(this + 366) = 0; /*0x75d01a*/
    *(unsigned int *)(this + 368) = 0; /*0x75d020*/
    *(unsigned char *)(this + 372) = 0; /*0x75d026*/
    *(unsigned char *)(this + 373) = 0; /*0x75d02c*/
    *(unsigned char *)(this + 374) = 0; /*0x75d032*/
    *(unsigned char *)(this + 375) = 0; /*0x75d038*/
    *(unsigned char *)(this + 376) = 0; /*0x75d03e*/
    *(unsigned char *)(this + 377) = 1; /*0x75d044*/
    *(unsigned char *)(this + 378) = 0; /*0x75d04a*/
    *(unsigned char *)(this + 379) = 0; /*0x75d050*/
    *(unsigned int *)(this + 380) = 0; /*0x75d056*/
    *(unsigned int *)(this + 384) = 0; /*0x75d05c*/
    *(unsigned int *)(this + 388) = 0; /*0x75d06e*/
    *(unsigned int *)(this + 392) = 0; /*0x75d074*/
    *(unsigned int *)(this + 400) = 0; /*0x75d07a*/
    *(unsigned int *)(this + 404) = 0; /*0x75d07d*/
    *(unsigned char *)(this + 408) = 1; /*0x75d080*/
    *(unsigned char *)(this + 409) = 0; /*0x75d083*/
    *(unsigned int *)(this + 416) = 10; /*0x75d086*/
    *(unsigned int *)(this + 412) = 0; /*0x75d089*/
    *(unsigned int *)(this + 396) = (unsigned int)(void*)&TypeList_VoxelAnimTypeClass_const___vftable; /*0x75d08c*/
    *(unsigned char *)(this + 436) = 1; /*0x75d092*/
    *(unsigned int *)(this + 428) = 0; /*0x75d098*/
    *(unsigned int *)(this + 432) = 0; /*0x75d09b*/
    *(unsigned char *)(this + 437) = 0; /*0x75d09e*/
    *(unsigned int *)(this + 444) = 10; /*0x75d0a1*/
    *(unsigned int *)(this + 440) = 0; /*0x75d0a4*/
    *(unsigned int *)(this + 424) = (unsigned int)(void*)&TypeList_int_vftable; /*0x75d0a7*/
    *(unsigned int *)(this + 452) = 0; /*0x75d0ae*/
    *(unsigned int *)(this + 456) = 0; /*0x75d0b4*/
    *(unsigned int *)this = (unsigned int)(void*)&WarheadTypeClass_vftable; /*0x75d0ba*/
    *(unsigned int *)(this + 4) = (unsigned int)(void*)&WarheadTypeClass_vftable; /*0x75d0c1*/
    *(unsigned int *)(this + 8) = (unsigned int)(void*)&WarheadTypeClass_vftable; /*0x75d0c7*/
    *(unsigned int *)(this + 12) = (unsigned int)(void*)&WarheadTypeClass_vftable; /*0x75d0ce*/
    AbstractClass::GenerateUniqueID((int)(this + 4)); /*0x75d0d5*/
    (*(void ((int)(**))(int))(*(unsigned int *)(this + 396) + 12))(this + 396); /*0x75d0de*/
    (*(void ((int)(**))(int))(*(unsigned int *)(this + 424) + 12))(this + 424); /*0x75d0e5*/
    if ( g_WarheadTypePool < dword_8874C8 /*0x75d11c*/
      || (byte_8874CD || !dword_8874C8)
      && dword_8874D4 > 0
&& (*(unsigned __int8 (**)(int *, int, unsigned int))(WarheadTypeClass_Array + 8))( (int *)(&WarheadTypeClass_Array), dword_8874C8 + dword_8874D4, 0) )



    {
      v3 = g_WarheadTypePool++; /*0x75d129*/
      *((unsigned int *)dword_8874C4 + v3) = (unsigned int)this;
    }
    if ( dword_B0F680 < dword_B0F678 /*0x75d16f*/
      || (byte_B0F67D || !dword_B0F678)
      && dword_B0F684 > 0
&& (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_B0F670 + 8))( (int *)(&dword_B0F670), dword_B0F678 + dword_B0F684, 0) )



    {
      v4 = dword_B0F680++; /*0x75d17c*/
      *((unsigned int *)dword_B0F674 + v4) = (unsigned int)this;
    }
    *(unsigned int *)(this + 160) = 0; /*0x75d19b*/
    *(unsigned int *)(this + 164) = 1072693248; /*0x75d1a0*/
    qmemcpy((void *)(this + 168), (const void *)(this + 160), 0x50u); /*0x75d1a7*/
    return (int)(this); /*0x75d1a9*/
}
} // namespace gamemd
// 0x75DEC0
namespace gamemd {
void* WarheadTypeClass::ProcessPower(int * a2, void *a2_2)
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
    int *v18; // ebx
    int v20; // [esp+Ch] [ebp-4h]

    v3 = ((AbstractTypeClass *)this)->ProcessPower( (int *)(a2)); /*0x75ded0*/
    IDA_LOBYTE(v3) = this->__pad_144[0]; /*0x75ded5*/
    Power::FlagProcess((Power *)a2, v3); /*0x75dede*/
    IDA_LOBYTE(v4) = this->__pad_144[3]; /*0x75dee3*/
    Power::FlagProcess((Power *)a2, v4); /*0x75deec*/
    IDA_LOBYTE(v5) = this->__pad_144[4]; /*0x75def1*/
    v6 = Power::FlagProcess((Power *)a2, v5); /*0x75defa*/
    IDA_LOBYTE(v6) = (&this->WarheadTypeClass_field_bool_149)[0]; /*0x75deff*/
    Power::FlagProcess((Power *)a2, v6); /*0x75df08*/
    IDA_LOBYTE(v7) = (&this->WarheadTypeClass_field_bool_149)[1]; /*0x75df0d*/
    Power::FlagProcess((Power *)a2, v7); /*0x75df16*/
    IDA_LOBYTE(v8) = (&this->WarheadTypeClass_field_bool_149)[2]; /*0x75df1b*/
    v9 = Power::FlagProcess((Power *)a2, v8); /*0x75df24*/
    IDA_LOBYTE(v9) = (&this->WarheadTypeClass_field_bool_149)[3]; /*0x75df29*/
    Power::FlagProcess((Power *)a2, v9); /*0x75df32*/
    IDA_LOBYTE(v10) = (&this->Conventional)[0]; /*0x75df37*/
    Power::FlagProcess((Power *)a2, v10); /*0x75df40*/
    IDA_LOBYTE(v11) = (&this->Conventional)[1]; /*0x75df45*/
    v12 = Power::FlagProcess((Power *)a2, v11); /*0x75df4e*/
    IDA_LOBYTE(v12) = (&this->Conventional)[2]; /*0x75df53*/
    Power::FlagProcess((Power *)a2, v12); /*0x75df5c*/
    IDA_LOBYTE(v13) = (&this->Conventional)[3]; /*0x75df61*/
    Power::FlagProcess((Power *)a2, v13); /*0x75df6a*/
    IDA_LOBYTE(v14) = (&this->CLDisableRed)[0]; /*0x75df6f*/
    v15 = Power::FlagProcess((Power *)a2, v14); /*0x75df78*/
    IDA_LOBYTE(v15) = (&this->CLDisableRed)[1]; /*0x75df7d*/
    Power::FlagProcess((Power *)a2, v15); /*0x75df86*/
    IDA_LOBYTE(v16) = (&this->CLDisableRed)[2]; /*0x75df8b*/
    Power::FlagProcess((Power *)a2, v16); /*0x75df94*/
    ((Checksummer *)a2)->Add_double( *(unsigned int *)&this->__pad_44[84], *(unsigned int *)&this->__pad_44[88]); /*0x75dfa9*/
    Power::TimerProcess(this->WarheadTypeClass_field_0x100); /*0x75dfb7*/
    ((Checksummer *)a2)->Add_double( (int)this->WarheadTypeClass_field_0xF8, *(unsigned int *)this->__pad_FC); /*0x75dfcc*/
    IDA_LOBYTE(v17) = IDA_HIBYTE(this->PsychicDamage); /*0x75dfd1*/
    Power::FlagProcess((Power *)a2, v17); /*0x75dfda*/
    Power::TimerProcess(this->WarheadTypeClass_field_0x17C); /*0x75dfe8*/
    Power::TimerProcess(this->WarheadTypeClass_field_0x180); /*0x75dff6*/
    Power::TimerProcess(this->WarheadTypeClass_field_0x184); /*0x75e004*/
    Power::TimerProcess(this->WarheadTypeClass_field_0x188); /*0x75e012*/
    Checksummer::Add_Buffer( (Checksummer *)a2, (unsigned char *)((unsigned char)((unsigned __int8 *)&(&this->Parasite)[3])), 16); /*0x75e022*/
    v18 = (int *)&this->__pad_44[92]; /*0x75e027*/
    v20 = 11; /*0x75e02d*/
    do /*0x75e04f*/
    {
      ((Checksummer *)a2)->Add_double( *v18, v18[1]); /*0x75e03e*/
      v18 += 2; /*0x75e047*/
      --v20; /*0x75e04b*/
    }
    while ( v20 ); /*0x75e04f*/
    Power::TimerProcess(this->WarheadTypeClass_field_0x114); /*0x75e05a*/
    return (void*)Power::TimerProcess(this->WarheadTypeClass_field_0x120); /*0x75e06d*/
}
} // namespace gamemd
// 0x75E0C0
namespace gamemd {
int WarheadTypeClass::SaveLoad_Prefix(unsigned int * a1, int a2)
{
    WarheadTypeClass *v2; // edi
    int *DebrisTypes; // ebp
    int v4; // esi
    int result; // eax
    int i; // ebx
    int j; // ebx
    int k; // ebx
    int m; // esi
    int n; // esi

    v2 = this; /*0x75e0c4*/
    DebrisTypes = (int *)(this->DebrisTypes); /*0x75e0ce*/
    (*(void (**)(int *))((&this->DebrisTypes)[0] + 12))( (int *)(this->DebrisTypes)); /*0x75e0d6*/
    (*(void (**)(char *))(*(unsigned int *)&v2->__pad_1A0[8] + 12))( (char *)(&v2->__pad_1A0[8])); /*0x75e0e7*/
    v4 = a2; /*0x75e0ea*/
    result = AbstractClass::SaveLoad_Prefix_0( (AbstractClass *)(v2), (AbstractClass *)(a2)); /*0x75e0f0*/
    if ( result >= 0 ) /*0x75e0f7*/
    {
      if ( v2 ) /*0x75e0ff*/
      {
        ((AbstractTypeClass *)(int)v2)->Init( (int)&this); /*0x75e108*/
        ((DynamicVectorClass *)v2->__pad_104)->AnimTypeConstructor( 0, 0); /*0x75e117*/
        *(unsigned int *)v2->__pad_104 = (unsigned int)(void*)&TypeList_AnimTypeClass_const___vftable; /*0x75e120*/
        ((WarheadTypeClass *)DebrisTypes)->checkImmunity( (int)&this); /*0x75e12d*/
        ((WarheadTypeClass *)&v2->__pad_1A0[8])->calculateDamage( (int)&this); /*0x75e139*/
        v2->Deform = (unsigned int)((void*)&WarheadTypeClass_vftable); /*0x75e13e*/
        v2->WarheadTypeClass_field_0x4 = (unsigned int)((void*)&WarheadTypeClass_vftable); /*0x75e144*/
        v2->WarheadTypeClass_field_0x8 = (unsigned int)((void*)&WarheadTypeClass_vftable); /*0x75e14b*/
        v2->WarheadTypeClass_field_0xC = (unsigned int)((void*)&WarheadTypeClass_vftable); /*0x75e152*/
      }
      if ( v2 != (WarheadTypeClass *)-260 ) /*0x75e161*/
      {
        ((DynamicVectorClass *)v2->__pad_104)->AnimTypeConstructor( 0, 0); /*0x75e169*/
        *(unsigned int *)v2->__pad_104 = (unsigned int)(void*)&TypeList_AnimTypeClass_const___vftable; /*0x75e16e*/
      }
      (*(void (__stdcall **)(int, WarheadTypeClass **, int, unsigned int))(*(unsigned int *)&v4->u32_30))(v4, &this, 4, 0);  /*0x75e180*/
      for ( i = 0; i < (int)this; ++i ) /*0x75e18b*/
      {
        (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)&v4->u32_30))(v4, &a2, 4, 0);  /*0x75e199*/
        ((DynamicVector *)v2->__pad_104)->Add_Alt4( (unsigned int *)(&a2)); /*0x75e1a7*/
      }
      if ( DebrisTypes ) /*0x75e1b5*/
        TypeList::VoxelAnimConstructor((TypeList *)DebrisTypes); /*0x75e1b9*/
      (*(void (__stdcall **)(int, WarheadTypeClass **, int, unsigned int))(*(unsigned int *)&v4->u32_30))(v4, &this, 4, 0);  /*0x75e1ca*/
      for ( j = 0; j < (int)this; ++j ) /*0x75e1d5*/
      {
        (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)&v4->u32_30))(v4, &a2, 4, 0);  /*0x75e1e3*/
        ((DynamicVector *)DebrisTypes)->Add2( (unsigned int *)(&a2)); /*0x75e1ed*/
      }
      if ( v2 != (WarheadTypeClass *)-424 ) /*0x75e201*/
        TypeList::Construct((TypeList *)&v2->__pad_1A0[8]); /*0x75e205*/
      (*(void (__stdcall **)(int, WarheadTypeClass **, int, unsigned int))(*(unsigned int *)&v4->u32_30))(v4, &this, 4, 0);  /*0x75e216*/
      for ( k = 0; k < (int)this; ++k ) /*0x75e221*/
      {
        (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)&v4->u32_30))(v4, &a2, 4, 0);  /*0x75e22f*/
        ((DynamicVector *)&v2->__pad_1A0[8])->Add_Alt( (unsigned int *)(&a2)); /*0x75e239*/
      }
      for ( m = 0; m < v2->WarheadTypeClass_field_0x114; ++m ) /*0x75e24f*/
        ObjectPtr::RegisterForTracking( /*0x75e260*/
          (int)&SwizzleManagerClass_Instance,
          (int *)(v2->WarheadTypeClass_field_0x108 + 4 * m));
      for ( n = 0; n < v2->unused_1CC[0]; ++n ) /*0x75e27a*/
        ObjectPtr::RegisterForTracking( /*0x75e28b*/
          (int)&SwizzleManagerClass_Instance,
          (int *)(v2->WarheadTypeClass_field_0x190[0] + 4 * n));
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->WarheadTypeClass_field_0x140); /*0x75e2a7*/
      return 0; /*0x75e2ac*/
    }
    return result; /*0x75e2ae*/
}
} // namespace gamemd
// 0x75E2C0
namespace gamemd {
int WarheadTypeClass_SaveLoad_Prefix_0(WarheadTypeClass *aP0, void * a2, void * a4)
{
    int v5; // ebx
    int result; // eax
    int v7; // edx
    int i; // ebx
    int v9; // edx
    int j; // ebx
    int v11; // edx
    int k; // ebx

    result = AbstractClass::SaveLoad_Prefix( (ObjectTypeClass *)((int *)this), (ObjectTypeClass *)(a2), (ObjectTypeClass *)((int)WarheadTypeClass_field_0x114)); /*0x75e2d1*/
    if ( result >= 0 ) /*0x75e2d8*/
    {
      v7 = (int)(*a2); /*0x75e2e4*/
      WarheadTypeClass_field_0x114 = (int *)this->WarheadTypeClass_field_0x114; /*0x75e2f1*/
      (*(void (__stdcall **)(int *, int **, int, unsigned int, int))(v7 + 16))(a2, &WarheadTypeClass_field_0x114, 4, 0, v5); /*0x75e2f5*/
      for ( i = 0; i   <   (int)((int)(a4)); ++i ) /*0x75e300*/
        (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, this->WarheadTypeClass_field_0x108 + 4 * i, 4, 0); /*0x75e313*/
      v9 = (int)(*a2); /*0x75e323*/
      a4 = this->unused_1CC[0]; /*0x75e32f*/
      (*(void ((int *)(__stdcall **))(int *, int *, int, unsigned int))(v9 + 16))(a2, &a4, 4, 0); /*0x75e333*/
      for ( j = 0; j   <   (int)((int)(a4)); ++j ) /*0x75e33e*/
        (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))( /*0x75e351*/
          a2,
          this->WarheadTypeClass_field_0x190[0] + 4 * j,
          4,
          0);
      v11 = (int)(*a2); /*0x75e361*/
      a4 = *(unsigned int *)&this->__pad_1B0[8]; /*0x75e36d*/
      (*(void ((int *)(__stdcall **))(int *, int *, int))(v11 + 16))(a2, &a4, 4); /*0x75e371*/
      for ( k = 0; k < (int)WarheadTypeClass_field_0x114; ++k ) /*0x75e37c*/
        (*(void (__stdcall **)(int *, char *, int, unsigned int))(*a2 + 16))( /*0x75e38f*/
          a2,
          (char *)&this->WarheadTypeClass_field_0x1AC->AbstractClass + 4 * k,
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

    if ( !_strcmpi(g_Str__none_,(const char *)( Source)) || !_strcmpi(g_Str_none, Source) ) /*0x75e3cc*/
      return 0; /*0x75e42f*/
    v2 = 0; /*0x75e3dd*/
    if ( g_WarheadTypePool <= 0 ) /*0x75e3e1*/
    {
  LABEL_6:
      if ( RA2_OPNEW(0x1D0u) ) /*0x75e40b*/
        return WarheadTypeClass::Construct(Source); /*0x75e421*/
      return 0; /*0x75e415*/
    }
    while ( _strcmpi((const char *)((const void *)(*((unsigned int *)dword_8874C4 + v2) + 36)),(const char *)( Source)) ) /*0x75e3fa*/
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
    int v3; // eax
    char *pad_104; // esi
    int result; // eax
    int v6; // ecx
    int v7; // ecx

    v3 = a2; /*0x75e440*/
    if ( (void *)a2 == this->WarheadTypeClass_field_0x140 ) /*0x75e44c*/
      this->WarheadTypeClass_field_0x140 = 0; /*0x75e44e*/
    pad_104 = (char *)(this->__pad_104); /*0x75e459*/
    a2 = v3; /*0x75e463*/
    result = (*(int (**)(char *, int *))(*(unsigned int *)this->__pad_104 + 16))( (char *)(this->__pad_104), (int *)(&a2)); /*0x75e46c*/
    if ( result != -1 ) /*0x75e472*/
    {
      v6 = *((unsigned int *)pad_104 + 4); /*0x75e474*/
      if ( result < v6 ) /*0x75e479*/
      {
        v7 = v6 - 1; /*0x75e47b*/
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
    int v3; // eax
    int v4; // eax
    CampaignClass *WarheadTypeClass_field_0x1AC; // eax
    void *v6; // eax
    void *WarheadTypeClass_field_0x108; // eax
    WarheadTypeClass *v9; // [esp+4h] [ebp-4h] BYREF

    this->Deform = (unsigned int)((void*)&WarheadTypeClass_vftable); /*0x75e516*/
    this->WarheadTypeClass_field_0x4 = (unsigned int)((void*)&WarheadTypeClass_vftable); /*0x75e51c*/
    this->WarheadTypeClass_field_0x8 = (unsigned int)((void*)&WarheadTypeClass_vftable); /*0x75e523*/
    this->WarheadTypeClass_field_0xC = (unsigned int)((void*)&WarheadTypeClass_vftable); /*0x75e52a*/
    AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x75e531*/
    v9 = this; /*0x75e546*/
    v3 = ((int (*)(WarheadTypeClass **, WarheadTypeClass **))WarheadTypeClass_Array->WarheadTypeClass_field_0x10)( /*0x75e54a*/
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
    v9 = this; /*0x75e58f*/
v4 = (*(int (**)(int *, WarheadTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x75e593*/ &g_BuildingLoadQueue_Array.LightVisibility, (WarheadTypeClass **)(&v9));


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
    WarheadTypeClass_field_0x1AC = this->WarheadTypeClass_field_0x1AC; /*0x75e5c8*/
    *(unsigned int *)&this->__pad_1A0[8] = (unsigned int)(void*)&VectorClass_int_vftable; /*0x75e5d1*/
    if ( WarheadTypeClass_field_0x1AC && this->__pad_1B0[5] ) /*0x75e5df*/
    {
      RA2_OPDEL(WarheadTypeClass_field_0x1AC); /*0x75e5e8*/
      this->WarheadTypeClass_field_0x1AC = 0; /*0x75e5f0*/
    }
    this->__pad_1B0[5] = 0; /*0x75e5f6*/
    *(unsigned int *)this->__pad_1B0 = 0; /*0x75e5fc*/
    v6 = (void *)this->WarheadTypeClass_field_0x190[0]; /*0x75e602*/
    this->DebrisTypes[0] = (int)(void*)&VectorClass_VoxelAnimTypeClass_const___vftable; /*0x75e608*/
    if ( v6 && IDA_BYTE1(this->MinDebris) ) /*0x75e616*/
    {
      RA2_OPDEL(v6); /*0x75e61f*/
      this->WarheadTypeClass_field_0x190[0] = 0; /*0x75e627*/
    }
    IDA_BYTE1(this->MinDebris) = 0; /*0x75e62d*/
    this->MaxDebris = 0; /*0x75e633*/
    WarheadTypeClass_field_0x108 = (void *)this->WarheadTypeClass_field_0x108; /*0x75e639*/
    *(unsigned int *)this->__pad_104 = (unsigned int)(void*)&VectorClass_AnimTypeClass_const___vftable; /*0x75e63f*/
    if ( WarheadTypeClass_field_0x108 && this->__pad_10C[5] ) /*0x75e64d*/
    {
      RA2_OPDEL(WarheadTypeClass_field_0x108); /*0x75e656*/
      this->WarheadTypeClass_field_0x108 = 0; /*0x75e65e*/
    }
    this->__pad_10C[5] = 0; /*0x75e666*/
    *(unsigned int *)this->__pad_10C = 0; /*0x75e66c*/
    ((AbstractTypeClass *)this)->Dtor(); /*0x75e672*/
    if ( (a2 & 1) != 0 ) /*0x75e67e*/
      RA2_OPDEL(this); /*0x75e681*/
    return (gamemd::CampaignClass **)(&this->Deform); /*0x75e68b*/
}
}  // G42.18c ns repair
// 0x772080
namespace gamemd {
void* WarheadTypeClass_ReadINI()
{
    int v3; // ecx
    int v4; // esi
    unsigned int *v5; // eax
    unsigned __int8 *inited; // eax
    int v7; // eax
    int v8; // edx
    void *v9; // eax
    unsigned int *v10; // eax
    unsigned __int8 *v11; // eax
    int v12; // eax
    char *i; // eax
    int v14; // ecx
    int v15; // edx
    void *v16; // eax
    unsigned int *v17; // ebp
    unsigned int *v18; // eax
    unsigned int *v19; // ebp
    unsigned int *v20; // eax
    unsigned int *v21; // ebp
    unsigned int *v22; // eax
    char v23; // cl
    char Bool_Overwrite; // al
    char v25; // al
    char v26; // cl
    char v27; // al
    char v28; // al
    char v29; // cl
    char v30; // al
    char v31; // al
    char v32; // cl
    char v33; // al
    char v34; // al
    char v35; // cl
    char v36; // al
    int Coord; // eax
    int v38; // eax
    int v39; // eax
    char v40; // dl
    char Int_Overwrite; // al
    char v42; // cl
    char v43; // al
    char v44; // al
    char v45; // cl
    char v46; // al
    char v47; // al
    char v48; // cl
    char v49; // al
    char v50; // al
    int v51; // ecx
    int v52; // eax
    int v53; // eax
    int v54; // ebp
    int v55; // eax
    int v56; // ebp
    IntVector v58; // [esp-1Ch] [ebp-FCh] BYREF
    unsigned __int8 *v59; // [esp-14h] [ebp-F4h]
    unsigned __int8 *p_INIClassIntList; // [esp-10h] [ebp-F0h]
    char *v61; // [esp-Ch] [ebp-ECh]
    unsigned __int8 *v62; // [esp-8h] [ebp-E8h]
    int v63; // [esp-4h] [ebp-E4h]
    int INIClassIntList; // [esp+10h] [ebp-D0h] BYREF
    DynamicVector v65; // [esp+14h] [ebp-CCh] BYREF
    int v66; // [esp+40h] [ebp-A0h]
    int v67; // [esp+44h] [ebp-9Ch]
    int v68; // [esp+48h] [ebp-98h]
    char Source[20]; // [esp+4Ch] [ebp-94h] BYREF
    char String[128]; // [esp+60h] [ebp-80h] BYREF

    v4 = v3; /*0x772091*/
    INIClass::ResetSection( (INIClass *)this); /*0x772095*/
    if ( !INIClass::BinarySearchSection( (INIClass *)((int)this), (unsigned __int8 *)(v4 + 36)) ) /*0x7720a0*/
      return 0; /*0x7729d9*/
    *(unsigned int *)(v4 + 152) = INIClass::ReadInt_Overwrite( /*0x7720c6*/
                              (bool *)this,
                              (unsigned __int8 *)(v4 + 36),
                              aAmbientdamage,
                              *(unsigned int *)(v4 + 152));
    *(unsigned char *)(v4 + 304) = INIClass::ReadBool_Overwrite( /*0x7720e0*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aIssonic,
                             *(unsigned char *)(v4 + 304));
    *(unsigned char *)(v4 + 305) = INIClass::ReadBool_Overwrite( /*0x7720fa*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aSpawner,
                             *(unsigned char *)(v4 + 305));
    *(unsigned char *)(v4 + 306) = INIClass::ReadBool_Overwrite( /*0x772114*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aLimbolaunch,
                             *(unsigned char *)(v4 + 306));
    *(unsigned char *)(v4 + 307) = INIClass::ReadBool_Overwrite( /*0x77212e*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aDecloaktofire,
                             *(unsigned char *)(v4 + 307));
    *(unsigned char *)(v4 + 308) = INIClass::ReadBool_Overwrite( /*0x772148*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aCellrangefindi,
                             *(unsigned char *)(v4 + 308));
    *(unsigned char *)(v4 + 309) = INIClass::ReadBool_Overwrite( /*0x772162*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aFireonce,
                             *(unsigned char *)(v4 + 309));
    *(unsigned char *)(v4 + 310) = INIClass::ReadBool_Overwrite( /*0x77217c*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aNeveruse,
                             *(unsigned char *)(v4 + 310));
    *(unsigned char *)(v4 + 311) = INIClass::ReadBool_Overwrite( /*0x772196*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aRevealonfire,
                             *(unsigned char *)(v4 + 311));
    *(unsigned char *)(v4 + 312) = INIClass::ReadBool_Overwrite( /*0x7721b0*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aTerrainfire,
                             *(unsigned char *)(v4 + 312));
    *(unsigned char *)(v4 + 313) = INIClass::ReadBool_Overwrite( /*0x7721ca*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aSabotagecursor,
                             *(unsigned char *)(v4 + 313));
    *(unsigned char *)(v4 + 314) = INIClass::ReadBool_Overwrite( /*0x7721e4*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aMigattackcurso,
                             *(unsigned char *)(v4 + 314));
    *(unsigned char *)(v4 + 315) = INIClass::ReadBool_Overwrite( /*0x7721fe*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aDisguisefireon,
                             *(unsigned char *)(v4 + 315));
    *(unsigned char *)(v4 + 320) = INIClass::ReadBool_Overwrite( /*0x772218*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aInfinitemindco,
                             *(unsigned char *)(v4 + 320));
    *(unsigned char *)(v4 + 321) = INIClass::ReadBool_Overwrite( /*0x772232*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aFirewhilemovin,
                             *(unsigned char *)(v4 + 321));
    *(unsigned char *)(v4 + 322) = INIClass::ReadBool_Overwrite( /*0x77224c*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aDrainweapon,
                             *(unsigned char *)(v4 + 322));
    *(unsigned char *)(v4 + 323) = INIClass::ReadBool_Overwrite( /*0x772266*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aFireintranspor,
                             *(unsigned char *)(v4 + 323));
    *(unsigned int *)(v4 + 316) = INIClass::ReadInt_Overwrite( /*0x772280*/
                              (bool *)this,
                              (unsigned __int8 *)(v4 + 36),
                              aDisguisefakebl,
                              *(unsigned int *)(v4 + 316));
    *(unsigned char *)(v4 + 324) = INIClass::ReadBool_Overwrite( /*0x77229a*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             (unsigned __int8 *)aSuicide,
                             *(unsigned char *)(v4 + 324));
    *(unsigned char *)(v4 + 326) = INIClass::ReadBool_Overwrite( /*0x7722b4*/
                             &this->vtable0,
                             (unsigned __int8 *)(v4 + 36),
                             aSupress,
                             *(unsigned char *)(v4 + 326));
    *(unsigned int *)(v4 + 156) = INIClass::ReadInt_Overwrite( /*0x7722ce*/
                              (bool *)this,
                              (unsigned __int8 *)(v4 + 36),
                              aBurst,
                              *(unsigned int *)(v4 + 156));
    *(unsigned int *)(v4 + 164) = INIClass::ReadInt_Overwrite( /*0x7722e8*/
                              (bool *)this,
                              (unsigned __int8 *)(v4 + 36),
                              g_INI_Key_Damage,
                              *(unsigned int *)(v4 + 164));
    *(unsigned int *)(v4 + 168) = WarheadTypeClass::loadWarheadINI( /*0x772302*/
                              (WarheadTypeClass *)this,
                              (unsigned __int8 *)(v4 + 36),
                              g_INI_Key_Speed,
                              *(unsigned int *)(v4 + 168));
    *(unsigned int *)(v4 + 176) = INIClass::ReadInt_Overwrite( /*0x77231c*/
                              (bool *)this,
                              (unsigned __int8 *)(v4 + 36),
                              &off_825478,
                              *(unsigned int *)(v4 + 176));
    *(unsigned int *)(v4 + 180) = INIClass::ReadCoord((unsigned __int8 *)(v4 + 36), g_INI_Key_Range, *(unsigned int *)(v4 + 180)); /*0x772336*/
    *(unsigned int *)(v4 + 184) = INIClass::ReadCoord( /*0x77235b*/
                              (unsigned __int8 *)(v4 + 36),
                              (unsigned __int8 *)aMinimumrange,
                              *(unsigned int *)(v4 + 184));
    INIClassIntList = (int)&v58; /*0x772362*/
    IntVector::Copy(&v58, (unsigned int *)(v4 + 188)); /*0x772366*/
    v5 = (unsigned int *)INIClassIntList; /*0x77236b*/
    *(unsigned int *)(INIClassIntList + 16) = *(unsigned int *)(v4 + 204); /*0x772377*/
    v5[5] = *(unsigned int *)(v4 + 208); /*0x77237d*/
    *v5 = (unsigned int)(void*)&TypeList_int_vftable; /*0x772382*/
    inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36)); /*0x772388*/
    INIClassIntList = (unsigned int)GetINIClassIntList( /*0x77239c*/
                        (int)&v65,
                        (unsigned __int8 ***)this,
                        inited,
                        aReport,
                        *(void ***)v58.__pad_0,
                        (void *)v58.IntVector_field_0x04,
                        (int)v59,
                        (__int16)p_INIClassIntList,
                        (int)v61,
                        (int)v62,
                        v63);
    TypeList::Copy((TypeList *)(v4 + 188), (unsigned int *)INIClassIntList); /*0x7723a0*/
    v7 = INIClassIntList; /*0x7723a5*/
    *(unsigned int *)(v4 + 204) = *(unsigned int *)(INIClassIntList + 16); /*0x7723ac*/
    *(unsigned int *)(v4 + 208) = *(unsigned int *)(v7 + 20); /*0x7723b2*/
    v8 = *(unsigned int *)(v7 + 24); /*0x7723b5*/
    v9 = *(void **)&v65.DynamicVector_field_0x1[3]; /*0x7723b8*/
    *(unsigned int *)(v4 + 212) = v8; /*0x7723bc*/
    *(unsigned int *)v65.__pad_0 = (unsigned int)(void*)&VectorClass_int_vftable; /*0x7723c1*/
    if ( v9 && v65.__pad_C[1] ) /*0x7723d1*/
      RA2_OPDEL(v9); /*0x7723d4*/
    INIClassIntList = (int)&v58; /*0x7723e8*/
    IntVector::Copy(&v58, (unsigned int *)(v4 + 216)); /*0x7723ec*/
    v10 = (unsigned int *)INIClassIntList; /*0x7723f1*/
    *(unsigned int *)(INIClassIntList + 16) = *(unsigned int *)(v4 + 232); /*0x7723fd*/
    v10[5] = *(unsigned int *)(v4 + 236); /*0x772405*/
    *v10 = (unsigned int)(void*)&TypeList_int_vftable; /*0x772408*/
    v11 = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36)); /*0x77240e*/
    INIClassIntList = (unsigned int)GetINIClassIntList( /*0x772422*/
                        (int)&v65,
                        (unsigned __int8 ***)this,
                        v11,
                        (unsigned __int8 *)aDownreport,
                        *(void ***)v58.__pad_0,
                        (void *)v58.IntVector_field_0x04,
                        (int)v59,
                        (__int16)p_INIClassIntList,
                        (int)v61,
                        (int)v62,
                        v63);
    TypeList::Copy((TypeList *)(v4 + 216), (unsigned int *)INIClassIntList); /*0x772426*/
    v12 = INIClassIntList; /*0x77242b*/
    *(unsigned int *)(v4 + 232) = *(unsigned int *)(INIClassIntList + 16); /*0x772432*/
    *(unsigned int *)(v4 + 236) = *(unsigned int *)(v12 + 20); /*0x772438*/
    *(unsigned int *)(v4 + 240) = *(unsigned int *)(v12 + 24); /*0x77243e*/
    *(unsigned int *)v65.__pad_0 = (unsigned int)(void*)&VectorClass_int_vftable; /*0x772447*/
    if ( *(unsigned int *)&v65.DynamicVector_field_0x1[3] && v65.__pad_C[1] ) /*0x772457*/
      RA2_OPDEL(*(void **)&v65.DynamicVector_field_0x1[3]); /*0x77245a*/
    if ( INIClass::GetString( /*0x772479*/
           (INIClass *)this,
           (unsigned __int8 *)(v4 + 36),
           (unsigned __int8 *)aAnim_0,
           &g_INI_DefaultBuffer,
           String,
           128) )
    {
      ((DynamicVectorClass *)&v65)->AnimTypeConstructor( 0, 0); /*0x77248e*/
      *(unsigned int *)v65.__pad_0 = (unsigned int)(void*)&TypeList_AnimTypeClass_const___vftable; /*0x77249d*/
      for ( i = strtok(String, (char *)&::Delimiter); i; i = strtok(0, (char *)&::Delimiter) ) /*0x7724af*/
      {
        if ( !*i ) /*0x7724b1*/
          break; /*0x7724b4*/
        INIClassIntList = (int)AnimTypeClass::FindOrCreate(i); /*0x7724bf*/
        if ( INIClassIntList ) /*0x7724c3*/
          ((DynamicVector *)&v65)->Add_Alt4( (unsigned int *)(&INIClassIntList)); /*0x7724ce*/
      }
      TypeList::AnimTypeCopy((TypeList *)&v65.DynamicVector_field_0x1C, &v65); /*0x7724ef*/
      *(unsigned int *)v65.__pad_0 = (unsigned int)(void*)&VectorClass_AnimTypeClass_const___vftable; /*0x7724f8*/
      DynamicVectorClass::Destroy_Alt(  (_VectorClass_PBVAnimTypeClass *)&v65); /*0x772500*/
    }
    else
    {
      TypeList::AnimTypeCopy((TypeList *)&v65.DynamicVector_field_0x1C, (unsigned int *)(v4 + 244)); /*0x772512*/
    }
    ((VectorClass *)(v4 + 244))->CopyDefault( (unsigned int *)(&v65.DynamicVector_field_0x1C)); /*0x772524*/
    v14 = v66; /*0x77252d*/
    v15 = v67; /*0x772531*/
    *(unsigned int *)(v4 + 268) = v68; /*0x772535*/
    v16 = *(void **)v65.__pad_20; /*0x772538*/
    *(unsigned int *)(v4 + 260) = v14; /*0x77253c*/
    *(unsigned int *)(v4 + 264) = v15; /*0x772541*/
    v65.DynamicVector_field_0x1C = (int)(void*)&VectorClass_AnimTypeClass_const___vftable; /*0x772544*/
    if ( v16 && IDA_BYTE1(v65.DynamicVector_field_0x28) ) /*0x772554*/
      RA2_OPDEL(v16); /*0x772557*/
    v17 = *(unsigned int **)(v4 + 276); /*0x77255f*/
    if ( INIClass::GetString( /*0x77257c*/
           (INIClass *)this,
           (unsigned __int8 *)(v4 + 36),
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
    v62 = (unsigned __int8 *)String; /*0x77259b*/
    v61 = &g_INI_DefaultBuffer; /*0x77259c*/
    p_INIClassIntList = aOccupantanim; /*0x7725a1*/
    *(unsigned int *)(v4 + 276) = (unsigned int)v18; /*0x7725a6*/
    v19 = *(unsigned int **)(v4 + 272); /*0x7725ac*/
    if ( INIClass::GetString((INIClass *)this, (unsigned __int8 *)(v4 + 36), p_INIClassIntList, v61, (char *)v62, v63) ) /*0x7725b5*/
      v20 = (unsigned int *)AnimTypeClass::FindOrCreate(String); /*0x7725c2*/
    else
      v20 = v19; /*0x7725c9*/
    *(unsigned int *)(v4 + 272) = (unsigned int)v20; /*0x7725cb*/
    v21 = *(unsigned int **)(v4 + 280); /*0x7725d1*/
    if ( INIClass::GetString( /*0x7725ee*/
           (INIClass *)this,
           (unsigned __int8 *)(v4 + 36),
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
    v23 = *(unsigned char *)(v4 + 327); /*0x772604*/
    *(unsigned int *)(v4 + 280) = (unsigned int)v22; /*0x77260a*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)(v4 + 36), aCamera, v23); /*0x772619*/
    IDA_LOBYTE(v63) = *(unsigned char *)(v4 + 329); /*0x772626*/
    v62 = aIslaser; /*0x772627*/
    v61 = (char *)(v4 + 36); /*0x77262c*/
    *(unsigned char *)(v4 + 327) = Bool_Overwrite; /*0x77262d*/
    *(unsigned char *)(v4 + 329) = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)v61, v62, v63); /*0x772638*/
    v25 = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)(v4 + 36), aDisklaser, *(unsigned char *)(v4 + 330)); /*0x77264d*/
    v26 = *(unsigned char *)(v4 + 331); /*0x772652*/
    *(unsigned char *)(v4 + 330) = v25; /*0x772658*/
    v27 = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)(v4 + 36), aIsline, v26); /*0x772667*/
    IDA_LOBYTE(v63) = *(unsigned char *)(v4 + 333); /*0x772674*/
    v62 = aIshousecolor; /*0x772675*/
    v61 = (char *)(v4 + 36); /*0x77267a*/
    *(unsigned char *)(v4 + 331) = v27; /*0x77267b*/
    *(unsigned char *)(v4 + 333) = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)v61, v62, v63); /*0x772686*/
    v28 = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)(v4 + 36), aCharges, *(unsigned char *)(v4 + 328)); /*0x77269b*/
    v29 = *(unsigned char *)(v4 + 325); /*0x7726a0*/
    *(unsigned char *)(v4 + 328) = v28; /*0x7726a6*/
    v30 = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)(v4 + 36), aTurboboost, v29); /*0x7726b5*/
    IDA_LOBYTE(v63) = *(unsigned char *)(v4 + 297); /*0x7726c2*/
    v62 = aUsefireparticl; /*0x7726c3*/
    v61 = (char *)(v4 + 36); /*0x7726c8*/
    *(unsigned char *)(v4 + 325) = v30; /*0x7726c9*/
    *(unsigned char *)(v4 + 297) = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)v61, v62, v63); /*0x7726d4*/
    v31 = INIClass::ReadBool_Overwrite( /*0x7726e9*/
            &this->vtable0,
            (unsigned __int8 *)(v4 + 36),
            aUsesparkpartic,
            *(unsigned char *)(v4 + 298));
    v32 = *(unsigned char *)(v4 + 299); /*0x7726ee*/
    *(unsigned char *)(v4 + 298) = v31; /*0x7726f4*/
    v33 = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)(v4 + 36), aOmnifire, v32); /*0x772703*/
    IDA_LOBYTE(v63) = *(unsigned char *)(v4 + 300); /*0x772710*/
    v62 = aDistributedwea; /*0x772711*/
    v61 = (char *)(v4 + 36); /*0x772716*/
    *(unsigned char *)(v4 + 299) = v33; /*0x772717*/
    *(unsigned char *)(v4 + 300) = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)v61, v62, v63); /*0x772722*/
    v34 = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)(v4 + 36), aIsrailgun, *(unsigned char *)(v4 + 301)); /*0x772737*/
    v35 = *(unsigned char *)(v4 + 302); /*0x77273c*/
    *(unsigned char *)(v4 + 301) = v34; /*0x772742*/
    v36 = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)(v4 + 36), aLobber, v35); /*0x772751*/
    v63 = v4 + 288; /*0x772760*/
    v62 = aLaserinnercolo; /*0x772761*/
    v61 = (char *)(v4 + 36); /*0x772766*/
    p_INIClassIntList = (unsigned __int8 *)&INIClassIntList; /*0x772767*/
    *(unsigned char *)(v4 + 302) = v36; /*0x77276a*/
    Coord = INIClass::GetCoord( /*0x772770*/
              (INIClass *)this,
              (int)p_INIClassIntList,
              (unsigned __int8 *)v61,
              v62,
              (unsigned __int8 *)v63);
    *(unsigned short *)(v4 + 288) = *(unsigned short *)Coord; /*0x772778*/
    *(unsigned char *)(v4 + 290) = *(unsigned char *)(Coord + 2); /*0x772785*/
    v38 = INIClass::GetCoord( /*0x772796*/
            (INIClass *)this,
            (int)&INIClassIntList,
            (unsigned __int8 *)(v4 + 36),
            aLaseroutercolo,
            (unsigned __int8 *)(v4 + 291));
    *(unsigned short *)(v4 + 291) = *(unsigned short *)v38; /*0x77279e*/
    *(unsigned char *)(v4 + 293) = *(unsigned char *)(v38 + 2); /*0x7727ab*/
    v39 = INIClass::GetCoord( /*0x7727bc*/
            (INIClass *)this,
            (int)&INIClassIntList,
            (unsigned __int8 *)(v4 + 36),
            aLaserouterspre,
            (unsigned __int8 *)(v4 + 294));
    *(unsigned short *)(v4 + 294) = *(unsigned short *)v39; /*0x7727c4*/
    v40 = *(unsigned char *)(v39 + 2); /*0x7727ca*/
    v63 = *(char *)(v4 + 334); /*0x7727d4*/
    v62 = aLaserduration; /*0x7727d5*/
    v61 = (char *)(v4 + 36); /*0x7727da*/
    *(unsigned char *)(v4 + 296) = v40; /*0x7727db*/
    Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)v61, v62, v63); /*0x7727de*/
    v42 = *(unsigned char *)(v4 + 332); /*0x7727e3*/
    *(unsigned char *)(v4 + 334) = Int_Overwrite; /*0x7727e9*/
    v43 = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)(v4 + 36), aIsbiglaser, v42); /*0x7727f8*/
    IDA_LOBYTE(v63) = *(unsigned char *)(v4 + 303); /*0x772805*/
    v62 = aBright; /*0x772806*/
    v61 = (char *)(v4 + 36); /*0x77280b*/
    *(unsigned char *)(v4 + 332) = v43; /*0x77280c*/
    *(unsigned char *)(v4 + 303) = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)v61, v62, v63); /*0x772817*/
    v44 = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)(v4 + 36), aIonsensitive, *(unsigned char *)(v4 + 335)); /*0x77282c*/
    v45 = *(unsigned char *)(v4 + 336); /*0x772831*/
    *(unsigned char *)(v4 + 335) = v44; /*0x772837*/
    v46 = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)(v4 + 36), aAreafire, v45); /*0x772846*/
    IDA_LOBYTE(v63) = *(unsigned char *)(v4 + 337); /*0x772853*/
    v62 = aIselectricbolt; /*0x772854*/
    v61 = (char *)(v4 + 36); /*0x772859*/
    *(unsigned char *)(v4 + 336) = v46; /*0x77285a*/
    *(unsigned char *)(v4 + 337) = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)v61, v62, v63); /*0x772865*/
    v47 = INIClass::ReadBool_Overwrite( /*0x77287a*/
            &this->vtable0,
            (unsigned __int8 *)(v4 + 36),
            aDrawboltaslase,
            *(unsigned char *)(v4 + 338));
    v48 = *(unsigned char *)(v4 + 339); /*0x77287f*/
    *(unsigned char *)(v4 + 338) = v47; /*0x772885*/
    v49 = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)(v4 + 36), aIsalternatecol, v48); /*0x772894*/
    IDA_LOBYTE(v63) = *(unsigned char *)(v4 + 340); /*0x7728a1*/
    v62 = aIsradbeam; /*0x7728a2*/
    v61 = (char *)(v4 + 36); /*0x7728a7*/
    *(unsigned char *)(v4 + 339) = v49; /*0x7728a8*/
    *(unsigned char *)(v4 + 340) = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)v61, v62, v63); /*0x7728b3*/
    v50 = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)(v4 + 36), aIsraderuption, *(unsigned char *)(v4 + 341)); /*0x7728c8*/
    v51 = *(unsigned int *)(v4 + 344); /*0x7728cd*/
    *(unsigned char *)(v4 + 341) = v50; /*0x7728d3*/
    v52 = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(v4 + 36), aRadlevel, v51); /*0x7728e2*/
    IDA_LOBYTE(v63) = *(unsigned char *)(v4 + 348); /*0x7728ef*/
    v62 = aIsmagbeam; /*0x7728f0*/
    v61 = (char *)(v4 + 36); /*0x7728f5*/
    *(unsigned int *)(v4 + 344) = v52; /*0x7728f6*/
    *(unsigned char *)(v4 + 348) = INIClass::ReadBool_Overwrite(&this->vtable0, (unsigned __int8 *)v61, v62, v63); /*0x772901*/
    Source[0] = 0; /*0x77291b*/
    INIClass::GetString((INIClass *)this, (unsigned __int8 *)(v4 + 36), aAttachedpartic, Source, Source, 20); /*0x772920*/
    v53 = WarheadTypeClass::applyDamage(Source); /*0x772929*/
    if ( v53 != -1 ) /*0x772931*/
      *(unsigned int *)(v4 + 284) = *((unsigned int *)dword_A83D6C + v53); /*0x77293c*/
    v54 = *(unsigned int *)(v4 + 172); /*0x772942*/
    if ( INIClass::GetString( /*0x77295f*/
           (INIClass *)this,
           (unsigned __int8 *)(v4 + 36),
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
    v56 = *(unsigned int *)(v4 + 160); /*0x772975*/
    v63 = 128; /*0x77297f*/
    v62 = (unsigned __int8 *)String; /*0x772984*/
    v61 = &g_INI_DefaultBuffer; /*0x772985*/
    p_INIClassIntList = (unsigned __int8 *)(aProjectile); /*0x77298a*/
    v59 = (unsigned __int8 *)(v4 + 36); /*0x77298f*/
    *(unsigned int *)(v4 + 172) = v55; /*0x772992*/
    if ( INIClass::GetString((INIClass *)this, v59, p_INIClassIntList, v61, (char *)v62, v63) ) /*0x772998*/
      *(unsigned int *)(v4 + 160) = ObjectTypeClass::FindOrCreate( (ObjectClass *)(String)); /*0x7729aa*/
    else
      *(unsigned int *)(v4 + 160) = v56; /*0x7729c1*/
    return 1; /*0x7729b2*/
}
}
// 0x524ED0
namespace gamemd {  // G42.18c ns repair
void WarheadTypeClass::GetClassIdentifier()
{
    void *v2; // eax

    v2 = *(void **)&this->m_1[3]; /*0x524ed6*/
    this->m_10 = 0; /*0x524ed9*/
    if ( v2 && IDA_BYTE1(this->m_C) ) /*0x524ee0*/
    {
      RA2_OPDEL(v2); /*0x524ee6*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x524eee*/
    }
    IDA_BYTE1(this->m_C) = 0; /*0x524ef1*/
    this->m_8 = 0; /*0x524ef4*/
}
}  // G42.18c ns repair
// 0x524F00
namespace gamemd {  // G42.18c ns repair
unsigned int WarheadTypeClass::LoadTypeData(int a2)
{
    if ( IDA_LOBYTE(this->m_C) ) /*0x524f00*/
      return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x524f15*/
    else
      return 0; /*0x524f07*/
}
}  // G42.18c ns repair
// 0x524FB0
namespace gamemd {  // G42.18c ns repair
int WarheadTypeClass::SaveToINI(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x524fba*/

}
}  // G42.18c ns repair
// 0x524FC0
namespace gamemd {  // G42.18c ns repair
TypeList_flat * WarheadTypeClass::QueryInterface(unsigned int * Block, char a2)
{
    void *v3; // eax

    v3 = (void *)*(Block + 1); /*0x524fc3*/
    *Block = (unsigned int)(void*)&VectorClass_AnimTypeClass_const___vftable; /*0x524fc6*/
    if ( v3 && *((unsigned char *)Block + 13) ) /*0x524fd0*/
    {
      RA2_OPDEL(v3); /*0x524fd8*/
      *(Block + 1) = 0; /*0x524fe0*/
    }
    *((unsigned char *)Block + 13) = 0; /*0x524feb*/
    *(Block + 2) = 0; /*0x524ff1*/
    if ( (a2 & 1) != 0 ) /*0x524ff8*/
      RA2_OPDEL(Block); /*0x524ffb*/
    return Block; /*0x525005*/
}
}  // G42.18c ns repair
// 0x5250D0
namespace gamemd {  // G42.18c ns repair
char WarheadTypeClass::AddRef(int a2)
{
    int m_8; // esi
    int v3; // edx
    unsigned int *v4; // eax
    int v5; // ecx

    m_8 = this->m_8; /*0x5250d2*/
    if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x5250dd*/
    {
      v3 = 0; /*0x5250df*/
      if ( m_8 <= 0 ) /*0x5250e3*/
        return 1; /*0x525103*/
      v4 = *(unsigned int **)&this->m_1[3]; /*0x5250e5*/
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
    int m_10; // edx
    int result; // eax
    unsigned int *i; // ecx

    m_10 = this->m_10; /*0x525400*/
    result = 0; /*0x525403*/
    if ( m_10 <= 0 ) /*0x525408*/
      return -1; /*0x52541f*/
    for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x52540e*/
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
    void *WarheadTypeClass_field_0xC; // eax
    int v4; // eax
    int v5; // edi
    void *WarheadTypeClass_field_0x4; // ecx
    unsigned int *WarheadTypeClass_field_0x8; // eax
    void *WarheadTypeClass_field_0x10; // [esp-8h] [ebp-10h]

    WarheadTypeClass_field_0xC = (void *)(this->WarheadTypeClass_field_0xC); /*0x52ad54*/
    this->Deform = (void*)&INIClass_INIEntry_vftable; /*0x52ad57*/
    free( (void *)(WarheadTypeClass_field_0xC)); /*0x52ad5e*/
    WarheadTypeClass_field_0x10 = (void *)(this->WarheadTypeClass_field_0x10); /*0x52ad68*/
    this->WarheadTypeClass_field_0xC = 0; /*0x52ad69*/
    free( (void *)(WarheadTypeClass_field_0x10)); /*0x52ad6c*/
    v4 = this->AnimList[0]; /*0x52ad71*/
    this->WarheadTypeClass_field_0x10 = 0; /*0x52ad79*/
    if ( v4 ) /*0x52ad7c*/
    {
      do /*0x52ada0*/
      {
        free(*(void **)this->AnimList[0]); /*0x52ad85*/
        v5 = *(unsigned int *)(this->AnimList[0] + 4); /*0x52ad8f*/
        RA2_OPDEL((void *)this->AnimList[0]); /*0x52ad93*/
        this->AnimList[0] = v5; /*0x52ad9d*/
      }
      while ( v5 ); /*0x52ada0*/
    }
    free((void *)this->InfDeath[0]); /*0x52ada7*/
    this->InfDeath[0] = 0; /*0x52adb1*/
    this->Deform = (void*)&GenericNode_vftable; /*0x52adb4*/
    if ( this ) /*0x52adba*/
    {
      WarheadTypeClass_field_0x4 = (void *)(this->WarheadTypeClass_field_0x4); /*0x52adbc*/
      if ( WarheadTypeClass_field_0x4 ) /*0x52adc1*/
      {
        WarheadTypeClass_field_0x8 = (unsigned int *)(this->WarheadTypeClass_field_0x8); /*0x52adc3*/
        if ( WarheadTypeClass_field_0x8 ) /*0x52adc8*/
        {
          WarheadTypeClass_field_0x8[1] = WarheadTypeClass_field_0x4; /*0x52adca*/
          *((unsigned int *)this->WarheadTypeClass_field_0x4 + 2) = this->WarheadTypeClass_field_0x8; /*0x52add3*/
          this->WarheadTypeClass_field_0x8 = 0; /*0x52add6*/
          this->WarheadTypeClass_field_0x4 = 0; /*0x52add9*/
        }
      }
    }
    if ( (a2 & 1) != 0 ) /*0x52ade1*/
      RA2_OPDEL(this); /*0x52ade4*/
    return (void *)this; /*0x52adee*/
}
}  // G42.18c ns repair
// 0x52AE00
namespace gamemd {  // G42.18c ns repair
WarheadTypeClass * WarheadTypeClass::parseAnimations(char * Block, char a2)
{
    char *v2; // ecx
    WarheadTypeClass *v3; // esi

    v3 = (WarheadTypeClass *)v2; /*0x52ae01*/
    ((WarheadTypeClass *)v2)->parseVerses(); /*0x52ae03*/
    if ( ((unsigned __int8)this & 1) != 0 ) /*0x52ae0d*/
      RA2_OPDEL(v3); /*0x52ae10*/
    return v3; /*0x52ae1a*/
}
}  // G42.18c ns repair
// 0x672990
namespace gamemd {  // G42.18c ns repair
int WarheadTypeClass::LoadType()
{
    int KeyCount; // ebx
    int i; // esi
    unsigned __int8 *StringByIndex; // eax
    char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
    INIClass *v6; // [esp+30h] [ebp+4h]

    KeyCount = INIClass::GetKeyCount( (INIClass *)(v6->__pad_0), (void *)(g_INI_Key_Warheads)); /*0x6729a6*/
    for ( i = 0; i < KeyCount; ++i ) /*0x6729ac*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( (CCINIClass *)(v6->__pad_0), (CCINIClass *)(g_INI_Key_Warheads), (void *)(i)); /*0x6729c2*/
      if ( INIClass::GetString(v6, g_INI_Key_Warheads, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x6729cf*/
        ((WarheadTypeClass *)(Destination))->FindOrCreate(); /*0x6729dc*/
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
    this->Deform = (void*)&TypeList_VoxelAnimTypeClass_const___vftable; /*0x75e692*/
    return &this->Deform; /*0x75e698*/
}
}  // G42.18c ns repair
// 0x75E6A0
namespace gamemd {  // G42.35f: def was outside namespace (pre-existing damage)
DynamicVector * WarheadTypeClass::calculateDamage(int aP1)
{
    this->Deform = (void*)&TypeList_int_vftable; /*0x75e6a2*/
    return &this->Deform; /*0x75e6a8*/
}
} // namespace gamemd
