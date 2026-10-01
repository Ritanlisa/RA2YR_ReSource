// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/FilePipe_38_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/ParticleTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/PsyDom_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/PlayerClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"

// 0x477900
namespace gamemd {
void ParticleTypeClass::GetClassIdentifier()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x477906*/
  this->m_10 = 0; /*0x477909*/
  if ( v2 && BYTE1(this->m_C) ) /*0x477910*/
  {
    __3_YAXPAX_Z(v2); /*0x477916*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x47791e*/
  }
  BYTE1(this->m_C) = 0; /*0x477921*/
  this->m_8 = 0; /*0x477924*/

}
}
// 0x4784F0
namespace gamemd {
AbstractClass * * ParticleTypeClass::Release(int a2, char * a3)
{
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */

  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  unsigned char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  int v13; // edx
  char *v14; // ebx
  AbstractClass ** v15;

  v3 = a2; /*0x4784f2*/
  if ( a2 ) /*0x4784fe*/
  {
    v5 = a3; /*0x478504*/
    LOBYTE(this->m_C) = 0; /*0x478508*/
    if ( a3 ) /*0x47850d*/
    {
      if ( a2 - 1 >= 0 ) /*0x478546*/
      {
        v9 = a3 + 2; /*0x478548*/
        v10 = a2; /*0x47854b*/
        do /*0x478558*/
        {
          *(v9 - 2) = 0; /*0x47854c*/
          *(v9 - 1) = 0; /*0x47854f*/
          *v9 = 0; /*0x478552*/
          v9 += 3; /*0x478554*/
          --v10; /*0x478557*/
        }
        while ( v10 ); /*0x478558*/
      }
    }
    else
    {
      v6 = (int)(__2_YAPAXI_Z(3 * a2)); /*0x478514*/
      if ( v6 ) /*0x47851e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478525*/
        {
          v7 = (unsigned char *)(v6 + 2); /*0x478527*/
          v8 = a2; /*0x47852a*/
          do /*0x478537*/
          {
            *(v7 - 2) = 0; /*0x47852b*/
            *(v7 - 1) = 0; /*0x47852e*/
            *v7 = 0; /*0x478531*/
            v7 += 3; /*0x478533*/
            --v8; /*0x478536*/
          }
          while ( v8 ); /*0x478537*/
        }
        v5 = (char *)v6; /*0x478539*/
      }
      else
      {
        v5 = 0; /*0x47853d*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x47855c*/
    if ( !v5 ) /*0x478560*/
      return 0; /*0x4785e2*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x478562*/
    {
      m_8 = this->m_8; /*0x478567*/
      if ( a2 < m_8 ) /*0x47856c*/
        m_8 = a2; /*0x47856e*/
      if ( m_8 > 0 ) /*0x478572*/
      {
        v12 = 0; /*0x478574*/
        do /*0x478590*/
        {
          v13 = *(unsigned int *)&this->m_1[3] + v12; /*0x47857b*/
          v14 = &v5[v12]; /*0x47857d*/
          v12 += 3; /*0x478580*/
          --m_8; /*0x478583*/
          *(unsigned short *)v14 = *(unsigned short *)v13; /*0x478587*/
          v14[2] = *(unsigned char *)(v13 + 2); /*0x47858d*/
        }
        while ( m_8 ); /*0x478590*/
        v3 = a2; /*0x478592*/
      }
      if ( BYTE1(this->m_C) ) /*0x478598*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4785a1*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x4785a9*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v5); /*0x4785b4*/
    this->m_8 = v3; /*0x4785ba*/
    BYTE1(this->m_C) = a3 == 0; /*0x4785bd*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_VRGBClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4785c6*/
  }
  v15 = (gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)(this->m_8)));
  if ( v15 < (gamemd::AbstractClass **)(this->m_10) ) /*0x4785d1*/
    this->m_10 = (unsigned int)(v15); /*0x4785d3*/
  return 1; /*0x4785d6*/

}
}
// 0x4788E0
namespace gamemd {
void ParticleTypeClass::EnsureCapacity(unsigned int * a2, void *a2)
{

  int v3; // edi
  char *v4; // eax
  unsigned char *v5; // ecx
  int v6; // edx
  void *BehavesLike; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  char *v11; // edi

  if ( this == (ParticleTypeClass *)a2 ) /*0x4788ec*/
    return &this->ArrayIndex; /*0x4788ec*/
  (*((void (**)(ParticleTypeClass *))this->ArrayIndex + 3))(this); /*0x4788f4*/
  v3 = a2[2]; /*0x4788f7*/
  this->BehavesLike = (unsigned int)((void *)v3); /*0x4788fe*/
  if ( !v3 ) /*0x478901*/
  {
    this->ParticleTypeClass_field_28C = 0; /*0x478974*/
    BYTE1(this->ParticleTypeClass_field_0xC) = 0; /*0x478977*/
    return &this->ArrayIndex; /*0x47897a*/
  }
  v4 = (char *)__2_YAPAXI_Z(3 * v3); /*0x478907*/
  if ( v4 ) /*0x478911*/
  {
    if ( v3 - 1 >= 0 ) /*0x478918*/
    {
      v5 = (unsigned char *)(v4 + 2);
      v6 = v3; /*0x47891d*/
      do /*0x47892a*/
      {
        *(v5 - 2) = 0; /*0x47891e*/
        *(v5 - 1) = 0; /*0x478921*/
        *v5 = 0; /*0x478924*/
        v5 += 3; /*0x478926*/
        --v6; /*0x478929*/
      }
      while ( v6 ); /*0x47892a*/
    }
  }
  else
  {
    v4 = 0; /*0x47892e*/
  }
  this->ParticleTypeClass_field_28C = (unsigned int)((void *)(v4));
  if ( !v4 ) /*0x478935*/
    return &this->ArrayIndex; /*0x478935*/
  BehavesLike = (void *)(this->BehavesLike); /*0x478937*/
  v8 = 0; /*0x47893a*/
  BYTE1(this->ParticleTypeClass_field_0xC) = 1; /*0x47893e*/
  if ( (int)BehavesLike <= 0 ) /*0x478942*/
    return &this->ArrayIndex; /*0x478942*/
  v9 = 0; /*0x478944*/
  do /*0x478969*/
  {
    v10 = a2[1] + v9; /*0x47894e*/
    v11 = (char *)this->ParticleTypeClass_field_28C + v9; /*0x478952*/
    ++v8; /*0x478954*/
    v9 += 3; /*0x478958*/
    *(unsigned short *)v11 = *(unsigned short *)v10; /*0x47895b*/
    v11[2] = *(unsigned char *)(v10 + 2); /*0x478961*/
  }
  while ( v8 < (int)this->BehavesLike ); /*0x478969*/
  return &this->ArrayIndex; /*0x47896d*/

}
}
// 0x644F50
namespace gamemd {
void ParticleTypeClass::ParticleTypeClass_LoadFromINI(uint8_t *** aP1)
{

  double v2; // st5
  double v3; // st6
  double v4; // st7
  uint8_t *inited; // eax
  int RGBColorList; // ebp
  int Int_Overwrite; // eax
  int v9; // eax
  void *ParticleTypeClass_field_0x2E4; // ebp
  void *v11; // eax
  int v12; // eax
  int ParticleTypeClass_field_0x2F4; // ecx
  int v14; // eax
  int v15; // eax
  double v16; // st4
  int ParticleTypeClass_field_0x304; // eax
  int v18; // eax
  char v19; // cl
  char Bool_Overwrite; // al
  char v21; // al
  char v22; // al
  char v23; // cl
  char v24; // al
  double v25; // rax
  IUnknown *ParticleTypeClass_field_0x2A0; // ecx
  IUnknown *v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int *Coord2; // eax
  int Coord; // eax
  int v33; // eax
  int16_t v34; // dx
  char v35; // al
  int v36; // ebp
  BuildingTypeClass *v37; // eax
  unsigned int *v38; // eax
  int v39; // ecx
  unsigned int *v40; // edx
  int v41; // ebx
  char **v42; // edi
  void **v44[2]; // [esp-14h] [ebp-F8h] BYREF
  uint8_t *v45; // [esp-Ch] [ebp-F0h]
  uint8_t *v46; // [esp-8h] [ebp-ECh]
  uint8_t *p_ParticleTypeClass_field_0x24; // [esp-4h] [ebp-E8h]
  uint8_t *v48; // [esp+0h] [ebp-E4h]
  int ParticleTypeClass_field_0x2F8; // [esp+4h] [ebp-E0h]
  int v50; // [esp+18h] [ebp-CCh] BYREF
  char Source[32]; // [esp+1Ch] [ebp-C8h] BYREF
  int v52[7]; // [esp+3Ch] [ebp-A8h] BYREF
  int v53[3]; // [esp+58h] [ebp-8Ch] BYREF
  char Destination[128]; // [esp+64h] [ebp-80h] BYREF

  INIClass::ResetSection((INIClass *)aP1); /*0x644f65*/
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)this, aP1) ) /*0x644f6d*/
    return 0; /*0x645417*/
  ParticleTypeClass::Constructor((ParticleTypeClass *)v44, 0, 0); /*0x644f85*/
  v44[0] = &vt_TypeList; /*0x644f8a*/
  inited = (uint8_t *)__0Iostream_init_QAE_XZ_4((Iostream_init *)&this->ParticleTypeClass_field_0x24); /*0x644f9a*/
  RGBColorList = INIClass::ReadRGBColorList( /*0x644fac*/
                   (INIClass *)aP1,
                   (int)v52,
                   inited,
                   aColorlist,
                   v44[0],
                   v44[1],
                   (int)v45,
                   (int16_t)v46,
                   (int)p_ParticleTypeClass_field_0x24,
                   (int)v48,
                   ParticleTypeClass_field_0x2F8);
  ParticleTypeClass::EnsureCapacity((ParticleTypeClass *)&this->ParticleTypeClass_field_0x2B8, (unsigned int *)RGBColorList); /*0x644fb5*/
  this->ParticleTypeClass_field_0x2C8 = *(VectorClass **)(RGBColorList + 16); /*0x644fbd*/
  this->ParticleTypeClass_field_0x2CC = *(VectorClass **)(RGBColorList + 20); /*0x644fc6*/
  *(unsigned int *)this->__pad_2D0 = *(unsigned int *)(RGBColorList + 24); /*0x644fd3*/
  v52[0] = (int)&vt_VectorClass; /*0x644fd9*/
  FilePipe_38::ddtor((int)v52); /*0x644fe1*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644ff5*/
                    (bool *)aP1,
                    (uint8_t *)&this->ParticleTypeClass_field_0x24,
                    aMaxdc,
                    this->ParticleTypeClass_field_0x2DC[0]);
  ParticleTypeClass_field_0x2F8 = this->ParticleTypeClass_field_0x2E0[0]; /*0x645002*/
  v48 = aMaxec; /*0x645003*/
  p_ParticleTypeClass_field_0x24 = (uint8_t *)&this->ParticleTypeClass_field_0x24; /*0x645008*/
  this->ParticleTypeClass_field_0x2DC[0] = Int_Overwrite; /*0x645009*/
  this->ParticleTypeClass_field_0x2E0[0] = INIClass::ReadInt_Overwrite( /*0x645014*/
                                             (bool *)aP1,
                                             p_ParticleTypeClass_field_0x24,
                                             v48,
                                             ParticleTypeClass_field_0x2F8);
  v9 = INIClass::ReadInt_Overwrite( /*0x645029*/
         (bool *)aP1,
         (uint8_t *)&this->ParticleTypeClass_field_0x24,
         g_INI_Key_Damage,
         this->ParticleTypeClass_field_0x2E8[0]);
  ParticleTypeClass_field_0x2E4 = this->ParticleTypeClass_field_0x2E4; /*0x64502e*/
  ParticleTypeClass_field_0x2F8 = 128; /*0x645038*/
  v48 = (uint8_t *)Destination; /*0x64503d*/
  p_ParticleTypeClass_field_0x24 = (uint8_t *)&g_INI_DefaultBuffer; /*0x64503e*/
  v46 = g_INI_Key_Warhead; /*0x645043*/
  v45 = (uint8_t *)&this->ParticleTypeClass_field_0x24; /*0x645048*/
  this->ParticleTypeClass_field_0x2E8[0] = v9; /*0x64504b*/
  if ( INIClass::GetString( /*0x645051*/
         (INIClass *)aP1,
         v45,
         v46,
         (char *)p_ParticleTypeClass_field_0x24,
         (char *)v48,
         ParticleTypeClass_field_0x2F8) )
  {
    v11 = (void *)WarheadTypeClass::FindOrCreate(Destination); /*0x64505e*/
  }
  else
  {
    v11 = ParticleTypeClass_field_0x2E4; /*0x645065*/
  }
  ParticleTypeClass_field_0x2F8 = this->ParticleTypeClass_field_0x2EC[0]; /*0x64506f*/
  v48 = aStartframe; /*0x645070*/
  p_ParticleTypeClass_field_0x24 = (uint8_t *)&this->ParticleTypeClass_field_0x24; /*0x645075*/
  this->ParticleTypeClass_field_0x2E4 = v11; /*0x645076*/
  this->ParticleTypeClass_field_0x2EC[0] = INIClass::ReadInt_Overwrite( /*0x645081*/
                                             (bool *)aP1,
                                             p_ParticleTypeClass_field_0x24,
                                             v48,
                                             ParticleTypeClass_field_0x2F8);
  v12 = INIClass::ReadInt_Overwrite( /*0x645096*/
          (bool *)aP1,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aNumloopframes,
          this->ParticleTypeClass_field_0x2F0[0]);
  ParticleTypeClass_field_0x2F4 = this->ParticleTypeClass_field_0x2F4; /*0x64509b*/
  this->ParticleTypeClass_field_0x2F0[0] = v12; /*0x6450a1*/
  v14 = INIClass::ReadInt_Overwrite( /*0x6450b0*/
          (bool *)aP1,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aTranslucency,
          ParticleTypeClass_field_0x2F4);
  ParticleTypeClass_field_0x2F8 = this->ParticleTypeClass_field_0x2F8; /*0x6450bd*/
  v48 = aWindeffect; /*0x6450be*/
  p_ParticleTypeClass_field_0x24 = (uint8_t *)&this->ParticleTypeClass_field_0x24; /*0x6450c3*/
  this->ParticleTypeClass_field_0x2F4 = v14; /*0x6450c4*/
  v15 = INIClass::ReadInt_Overwrite((bool *)aP1, p_ParticleTypeClass_field_0x24, v48, ParticleTypeClass_field_0x2F8); /*0x6450ca*/
  v16 = *(float *)this->__pad_2FC; /*0x6450cf*/
  this->ParticleTypeClass_field_0x2F8 = v15; /*0x6450da*/
  INIClass::ReadDouble_Overwrite((double *)aP1, (uint8_t *)&this->ParticleTypeClass_field_0x24, aVelocity, v16); /*0x6450e9*/
  *(float *)this->__pad_2FC = v2; /*0x6450ee*/
  INIClass::ReadDouble_Overwrite( /*0x645108*/
    (double *)aP1,
    (uint8_t *)&this->ParticleTypeClass_field_0x24,
    aDeacc,
    *(float *)&this->ParticleTypeClass_field_0x300);
  ParticleTypeClass_field_0x304 = this->ParticleTypeClass_field_0x304; /*0x64510d*/
  *(float *)&this->ParticleTypeClass_field_0x300 = v3; /*0x645115*/
  v18 = INIClass::ReadInt_Overwrite( /*0x645122*/
          (bool *)aP1,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aRadius,
          ParticleTypeClass_field_0x304);
  v19 = this->__pad_308[0]; /*0x645127*/
  this->ParticleTypeClass_field_0x304 = v18; /*0x64512d*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x64513c*/
                     (int *)aP1,
                     (uint8_t *)&this->ParticleTypeClass_field_0x24,
                     aDeleteonstatel,
                     v19);
  ParticleTypeClass_field_0x2F8 = this->__pad_308[1]; /*0x645148*/
  v48 = aEndstateai; /*0x645149*/
  p_ParticleTypeClass_field_0x24 = (uint8_t *)&this->ParticleTypeClass_field_0x24; /*0x64514e*/
  this->__pad_308[0] = Bool_Overwrite; /*0x645151*/
  this->__pad_308[1] = INIClass::ReadInt_Overwrite( /*0x64515c*/
                         (bool *)aP1,
                         p_ParticleTypeClass_field_0x24,
                         v48,
                         ParticleTypeClass_field_0x2F8);
  v21 = INIClass::ReadInt_Overwrite( /*0x645172*/
          (bool *)aP1,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aStartstateai,
          this->__pad_308[2]);
  ParticleTypeClass_field_0x2F8 = this->__pad_308[3]; /*0x64517e*/
  v48 = aStateaiadvance; /*0x64517f*/
  p_ParticleTypeClass_field_0x24 = (uint8_t *)&this->ParticleTypeClass_field_0x24; /*0x645184*/
  this->__pad_308[2] = v21; /*0x645187*/
  this->__pad_308[3] = INIClass::ReadInt_Overwrite( /*0x645192*/
                         (bool *)aP1,
                         p_ParticleTypeClass_field_0x24,
                         v48,
                         ParticleTypeClass_field_0x2F8);
  this->__pad_308[6] = INIClass::ReadInt_Overwrite( /*0x6451ae*/
                         (bool *)aP1,
                         (uint8_t *)&this->ParticleTypeClass_field_0x24,
                         aTranslucent50s,
                         (uint8_t)this->__pad_308[6]);
  v22 = INIClass::ReadInt_Overwrite( /*0x6451c5*/
          (bool *)aP1,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aTranslucent25s,
          (uint8_t)this->__pad_308[5]);
  v23 = this->__pad_308[7]; /*0x6451ca*/
  this->__pad_308[5] = v22; /*0x6451d0*/
  v24 = INIClass::ReadBool_Overwrite( /*0x6451df*/
          (int *)aP1,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          g_INI_Key_Normalized,
          v23);
  HIDWORD(v25) = this->ParticleTypeClass_field_0x2B4; /*0x6451e4*/
  this->__pad_308[7] = v24; /*0x6451ea*/
  LODWORD(v25) = this->ParticleTypeClass_field_0x2B0; /*0x6451f0*/
  INIClass::ReadDouble_Overwrite((double *)aP1, (uint8_t *)&this->ParticleTypeClass_field_0x24, aColorspeed, v25); /*0x645200*/
  ParticleTypeClass_field_0x2A0 = this->ParticleTypeClass_field_0x2A0; /*0x645205*/
  *(double *)&this->ParticleTypeClass_field_0x2B0 = v4; /*0x64520b*/
  v27 = (IUnknown *)INIClass::ReadInt_Overwrite( /*0x64521a*/
                      (bool *)aP1,
                      (uint8_t *)&this->ParticleTypeClass_field_0x24,
                      aXvelocity,
                      (int)ParticleTypeClass_field_0x2A0);
  ParticleTypeClass_field_0x2F8 = (int)this->ParticleTypeClass_field_0x2A4; /*0x645227*/
  v48 = aYvelocity; /*0x645228*/
  p_ParticleTypeClass_field_0x24 = (uint8_t *)&this->ParticleTypeClass_field_0x24; /*0x64522d*/
  this->ParticleTypeClass_field_0x2A0 = v27; /*0x64522e*/
  this->ParticleTypeClass_field_0x2A4 = (IUnknown *)INIClass::ReadInt_Overwrite( /*0x645239*/
                                                      (bool *)aP1,
                                                      p_ParticleTypeClass_field_0x24,
                                                      v48,
                                                      ParticleTypeClass_field_0x2F8);
  v28 = INIClass::ReadInt_Overwrite( /*0x64524e*/
          (bool *)aP1,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aMinzvelocity,
          this->ParticleTypeClass_field_0x2A8[0]);
  v29 = this->ParticleTypeClass_field_0x2AC[0]; /*0x645253*/
  this->ParticleTypeClass_field_0x2A8[0] = v28; /*0x645259*/
  v30 = INIClass::ReadInt_Overwrite( /*0x645268*/
          (bool *)aP1,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aZvelocityrange,
          v29);
  ParticleTypeClass_field_0x2F8 = (int)&this->__pad_248[76]; /*0x645277*/
  v48 = aNextparticleof; /*0x645278*/
  p_ParticleTypeClass_field_0x24 = (uint8_t *)&this->ParticleTypeClass_field_0x24; /*0x64527d*/
  v46 = (uint8_t *)v53; /*0x64527e*/
  this->ParticleTypeClass_field_0x2AC[0] = v30; /*0x645281*/
  Coord2 = INIClass::GetCoord2( /*0x645287*/
             (INIClass *)aP1,
             (int *)v46,
             p_ParticleTypeClass_field_0x24,
             v48,
             (int *)ParticleTypeClass_field_0x2F8);
  *(unsigned int *)&this->__pad_248[76] = *Coord2; /*0x64528e*/
  *(unsigned int *)&this->__pad_248[80] = Coord2[1]; /*0x645298*/
  *(unsigned int *)&this->__pad_248[84] = Coord2[2]; /*0x64529e*/
  Coord = INIClass::GetCoord( /*0x6452b1*/
            (INIClass *)aP1,
            (int)&v50,
            (uint8_t *)&this->ParticleTypeClass_field_0x24,
            aStartcolor1,
            (uint8_t *)&this->ParticleTypeClass_field_0x2D4);
  LOWORD(this->ParticleTypeClass_field_0x2D4) = *(unsigned short *)Coord; /*0x6452bd*/
  BYTE2(this->ParticleTypeClass_field_0x2D4) = *(unsigned char *)(Coord + 2); /*0x6452c4*/
  v33 = INIClass::GetCoord( /*0x6452d7*/
          (INIClass *)aP1,
          (int)&v50,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aStartcolor2,
          (uint8_t *)&this->ParticleTypeClass_field_0x2D4 + 3);
  v34 = *(unsigned short *)v33; /*0x6452e3*/
  ParticleTypeClass_field_0x2F8 = this->__pad_308[1]; /*0x6452e6*/
  *(unsigned short *)((char *)&this->ParticleTypeClass_field_0x2D4 + 3) = v34; /*0x6452e7*/
  v48 = aFinaldamagesta; /*0x6452eb*/
  LOBYTE(v33) = *(unsigned char *)(v33 + 2); /*0x6452f0*/
  p_ParticleTypeClass_field_0x24 = (uint8_t *)&this->ParticleTypeClass_field_0x24; /*0x6452f3*/
  this->__pad_2D8[1] = v33; /*0x6452f6*/
  v35 = INIClass::ReadInt_Overwrite((bool *)aP1, p_ParticleTypeClass_field_0x24, v48, ParticleTypeClass_field_0x2F8); /*0x6452f9*/
  ParticleTypeClass_field_0x2F8 = 32; /*0x645302*/
  v48 = (uint8_t *)Source; /*0x645304*/
  p_ParticleTypeClass_field_0x24 = 0; /*0x645305*/
  v46 = aNextparticle; /*0x645307*/
  v45 = (uint8_t *)&this->ParticleTypeClass_field_0x24; /*0x64530c*/
  this->__pad_308[4] = v35; /*0x64530f*/
  if ( INIClass::GetString( /*0x645315*/
         (INIClass *)aP1,
         v45,
         v46,
         (char *)p_ParticleTypeClass_field_0x24,
         (char *)v48,
         ParticleTypeClass_field_0x2F8) )
  {
    if ( _strcmpi(Source, g_Str__none_) ) /*0x64532c*/
    {
      v36 = 0; /*0x64533d*/
      if ( *(int *)&stru_A83D50.__pad_3C[28] <= 0 ) /*0x645341*/
      {
LABEL_10:
        v37 = (BuildingTypeClass *)__2_YAPAXI_Z(0x318u); /*0x64536b*/
        if ( v37 ) /*0x64537a*/
          v38 = BuildingTypeClass::Construct(v37, Source); /*0x645383*/
        else
          v38 = 0; /*0x64538a*/
        v39 = 0; /*0x645392*/
        if ( *(int *)&stru_A83D50.__pad_3C[28] <= 0 ) /*0x645396*/
        {
LABEL_17:
          v39 = -1; /*0x6453aa*/
        }
        else
        {
          v40 = *(unsigned int **)&stru_A83D50.__pad_3C[16]; /*0x645398*/
          while ( (unsigned int *)*v40 != v38 ) /*0x6453a0*/
          {
            ++v39; /*0x6453a2*/
            ++v40; /*0x6453a3*/
            if ( v39 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x6453a8*/
              goto LABEL_17; /*0x6453a8*/
          }
        }
        v36 = v39; /*0x6453ad*/
      }
      else
      {
        while ( _strcmpi(Source, (char *)(*(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_3C[16] + 4 * v36) + 36)) ) /*0x64535f*/
        {
          if ( ++v36 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x645369*/
            goto LABEL_10; /*0x645369*/
        }
      }
    }
    else
    {
      v36 = -1; /*0x6453b1*/
    }
    this->ParticleTypeClass_field_0x310 = v36; /*0x6453b4*/
  }
  Source[0] = 0; /*0x6453cb*/
  INIClass::GetString( /*0x6453d0*/
    (INIClass *)aP1,
    (uint8_t *)&this->ParticleTypeClass_field_0x24,
    aBehaveslike,
    0,
    Source,
    32);
  v41 = 0; /*0x6453d5*/
  v42 = off_8370BC; /*0x6453d7*/
  while ( _strcmpi(Source, *v42) ) /*0x6453ee*/
  {
    ++v42; /*0x6453f0*/
    ++v41; /*0x6453f3*/
    if ( (int)v42 >= (int)&ParticleTypeClass `RTTI Type Descriptor' ) /*0x6453fa*/
    {
      v41 = -1; /*0x6453fc*/
      break; /*0x6453fc*/
    }
  }
  this->ParticleTypeClass_field_0x314 = v41; /*0x6453ff*/
  return 1; /*0x645407*/

}
}
// 0x6454E0
namespace gamemd {
int ParticleTypeClass::ProcessPower(int * a2, void *a2)
{

  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6454e9*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2DC[0]); /*0x6454f7*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2E0[0]); /*0x645505*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2E8[0]); /*0x645513*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2EC[0]); /*0x645521*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2F0[0]); /*0x64552f*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2F4); /*0x64553d*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2F8); /*0x64554b*/
  Checksummer::Add_float((Checksummer *)a2, *(unsigned int *)this->__pad_2FC); /*0x645559*/
  Checksummer::Add_float((Checksummer *)a2, this->ParticleTypeClass_field_0x300); /*0x645567*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x304); /*0x645575*/
  LOBYTE(v3) = this->__pad_308[0]; /*0x64557a*/
  Power::FlagProcess((Power *)a2, v3); /*0x645583*/
  LOBYTE(v4) = this->__pad_308[1]; /*0x645588*/
  v5 = Power::FinalizeDrain((Power *)a2, v4); /*0x645591*/
  LOBYTE(v5) = this->__pad_308[2]; /*0x645596*/
  Power::FinalizeDrain((Power *)a2, v5); /*0x64559f*/
  LOBYTE(v6) = this->__pad_308[3]; /*0x6455a4*/
  Power::FinalizeDrain((Power *)a2, v6); /*0x6455ad*/
  Power::TimerProcess((uint8_t)this->__pad_308[5]); /*0x6455bd*/
  Power::TimerProcess((uint8_t)this->__pad_308[6]); /*0x6455cd*/
  LOBYTE(v7) = this->__pad_308[7]; /*0x6455d2*/
  Power::FlagProcess((Power *)a2, v7); /*0x6455db*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x310); /*0x6455e9*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x314); /*0x6455f7*/
  return Checksummer::Add_double( /*0x645611*/
           (Checksummer *)a2,
           (int)this->ParticleTypeClass_field_0x2B0,
           (int)this->ParticleTypeClass_field_0x2B4);

}
}
// 0x645660
namespace gamemd {
int ParticleTypeClass::SaveLoad_Prefix(int a1, int a2)
{

  int *v2; // ebp
  unsigned int v3;
  int result; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int ParticleTypeClass_field_0x2CC; // eax
  VectorClass *ParticleTypeClass_field_0x2C8; // eax
  VectorClass *v10; // ecx
  int v11; // edx
  CampaignClass *ParticleTypeClass_field_0x2BC; // eax
  char *v13; // edx
  int v14; // [esp+28h] [ebp-4h]

  v2 = (int *)((gamemd::ParticleTypeClass *)((int *)a2));
  v3 = a1; /*0x645669*/
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)a1, a2); /*0x64566f*/
  if ( result >= 0 ) /*0x645678*/
  {
    if ( v3 ) /*0x645680*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)v3, (int)&a2); /*0x645689*/
      ParticleTypeClass::Constructor((ParticleTypeClass *)&v3->ParticleTypeClass_field_0x2B8, 0, 0); /*0x645698*/
      v3->ParticleTypeClass_field_0x2B8 = (VectorClass *)&vt_TypeList; /*0x64569d*/
      v3->ArrayIndex = &vt_ParticleTypeClass; /*0x6456a3*/
      v3->ParticleTypeClass_field_28C = &vt_ParticleTypeClass; /*0x6456a9*/
      v3->BehavesLike = &vt_ParticleTypeClass; /*0x6456b0*/
      v3->ParticleTypeClass_field_0xC = &vt_ParticleTypeClass; /*0x6456b7*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->ParticleTypeClass_field_0x2E4); /*0x6456ca*/
    v5 = *v2; /*0x6456cf*/
    a1 = 0; /*0x6456db*/
    result = (*(int (**)(int *, ParticleTypeClass **, int, unsigned int))(v5 + 12))(v2, &a1, 4, 0); /*0x6456df*/
    if ( result >= 0 ) /*0x6456e4*/
    {
      v14 = 0; /*0x6456ee*/
      if ( (int)a1 <= 0 ) /*0x6456f4*/
      {
LABEL_14:
        ObjectTypeClass::Load2DArt((char *)v3); /*0x645783*/
        return 0; /*0x64578a*/
      }
      else
      {
        while ( 1 ) /*0x6456fa*/
        {
          v6 = *v2; /*0x6456fa*/
          LOWORD(a2) = 0; /*0x645706*/
          BYTE2(a2) = 0; /*0x64570e*/
          result = (*(int (**)(int *, int *, int, unsigned int))(v6 + 12))(v2, &a2, 3, 0); /*0x645712*/
          if ( result < 0 ) /*0x645717*/
            break; /*0x645717*/
          v7 = *(unsigned int *)v3->__pad_2C0; /*0x645719*/
          if ( (int)v3->ParticleTypeClass_field_0x2C8 < v7 /*0x645747*/
            || (v3->__pad_2C0[5] || !v7)
            && (ParticleTypeClass_field_0x2CC = (int)v3->ParticleTypeClass_field_0x2CC, ParticleTypeClass_field_0x2CC > 0)
            && ((uint8_t (*)(VectorClass **, int, unsigned int))v3->ParticleTypeClass_field_0x2B8->Capacity)(
                 &v3->ParticleTypeClass_field_0x2B8,
                 v7 + ParticleTypeClass_field_0x2CC,
                 0) )
          {
            ParticleTypeClass_field_0x2C8 = v3->ParticleTypeClass_field_0x2C8; /*0x64574e*/
            v10 = (VectorClass *)((char *)&ParticleTypeClass_field_0x2C8->vtable0 + 1); /*0x645751*/
            v11 = 3 * (unsigned int)ParticleTypeClass_field_0x2C8; /*0x645754*/
            ParticleTypeClass_field_0x2BC = v3->ParticleTypeClass_field_0x2BC; /*0x645757*/
            v3->ParticleTypeClass_field_0x2C8 = v10; /*0x64575a*/
            v13 = (char *)ParticleTypeClass_field_0x2BC + v11; /*0x64575d*/
            *(unsigned short *)v13 = a2; /*0x645764*/
            v13[2] = BYTE2(a2); /*0x64576b*/
          }
          if ( ++v14 >= (int)a1 ) /*0x64577d*/
            goto LABEL_14; /*0x64577d*/
        }
      }
    }
  }
  return result; /*0x64578c*/

}
}
// 0x6458B0
namespace gamemd {
int ParticleTypeClass::GetType(int a2, int a3)
{

  int result; // eax

  result = (int)this->ParticleTypeClass_field_0x2E4; /*0x6458b0*/
  if ( result == a2 ) /*0x6458bc*/
    this->ParticleTypeClass_field_0x2E4 = 0; /*0x6458be*/
  return result; /*0x6458c8*/

}
}
// 0x645950
namespace gamemd {
ParticleTypeClass * ParticleTypeClass::ddtor(void ** Block, char a2)
{

  int v3; // eax
  int v4; // eax
  CampaignClass *ParticleTypeClass_field_0x2BC; // eax
  ParticleTypeClass *v7; // [esp+4h] [ebp-4h] BYREF

  Block->ArrayIndex = &vt_ParticleTypeClass; /*0x645956*/
  Block->ParticleTypeClass_field_28C = &vt_ParticleTypeClass; /*0x64595c*/
  Block->BehavesLike = &vt_ParticleTypeClass; /*0x645963*/
  Block->ParticleTypeClass_field_0xC = &vt_ParticleTypeClass; /*0x64596a*/
  AbstractClass::AnnounceExpiredPointer(&Block->ArrayIndex, 1); /*0x645971*/
  v7 = (gamemd::ParticleTypeClass *)(Block); /*0x645986*/
  v3 = (*(int (**)(int *, ParticleTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x64598a*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v7);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x64599a*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x64599f*/
    for ( ; /*0x6459a5*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x6459ad*/
    }
  }
  v7 = (gamemd::ParticleTypeClass *)(Block); /*0x6459cf*/
  v4 = (*(int (**)(char *, ParticleTypeClass **))(*(unsigned int *)&stru_A83D50.__pad_3C[12] + 16))( /*0x6459d3*/
         &stru_A83D50.__pad_3C[12],
         &v7);
  if ( v4 != -1 && v4 < *(int *)&stru_A83D50.__pad_3C[28] ) /*0x6459e3*/
  {
    --*(unsigned int *)&stru_A83D50.__pad_3C[28]; /*0x6459e8*/
    for ( ; /*0x6459ee*/
          v4 < *(int *)&stru_A83D50.__pad_3C[28];
          *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_3C[16] + 4 * v4 - 4) = *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_3C[16]
                                                                                     + 4 * v4) )
    {
      ++v4; /*0x6459f6*/
    }
  }
  ParticleTypeClass_field_0x2BC = Block->ParticleTypeClass_field_0x2BC; /*0x645a08*/
  Block->ParticleTypeClass_field_0x2B8 = (VectorClass *)&vt_VectorClass; /*0x645a0e*/
  if ( ParticleTypeClass_field_0x2BC && Block->__pad_2C0[5] ) /*0x645a1c*/
  {
    __3_YAXPAX_Z(ParticleTypeClass_field_0x2BC); /*0x645a27*/
    Block->ParticleTypeClass_field_0x2BC = 0; /*0x645a2f*/
  }
  Block->__pad_2C0[5] = 0; /*0x645a3b*/
  *(unsigned int *)Block->__pad_2C0 = 0; /*0x645a42*/
  ObjectTypeClass::Destruct((int)Block); /*0x645a4c*/
  if ( (a2 & 1) != 0 ) /*0x645a56*/
    __3_YAXPAX_Z(Block); /*0x645a59*/
  return &Block->ArrayIndex; /*0x645a63*/

}
} // namespace gamemd

// 0x645A70
namespace gamemd {
unsigned int * ParticleTypeClass::Constructor(int a2, int a3, void *a3)
{

  unsigned char *v4; // eax
  int v5; // ecx
  char *v6; // eax
  unsigned char *v7; // ecx
  int v8; // edx

  this->ParticleTypeClass_field_28C = 0; /*0x645a7d*/
  this->BehavesLike = (unsigned int)((void *)a2); /*0x645a80*/
  LOBYTE(this->ParticleTypeClass_field_0xC) = 1; /*0x645a83*/
  BYTE1(this->ParticleTypeClass_field_0xC) = 0; /*0x645a87*/
  this->ArrayIndex = (unsigned int)(&vt_VectorClass); /*0x645a8a*/
  if ( a2 ) /*0x645a90*/
  {
    if ( a3 ) /*0x645a98*/
    {
      if ( a2 - 1 >= 0 ) /*0x645a9f*/
      {
        v4 = (unsigned char *)(a3 + 2); /*0x645aa1*/
        v5 = a2; /*0x645aa4*/
        do /*0x645ab1*/
        {
          *(v4 - 2) = 0; /*0x645aa5*/
          *(v4 - 1) = 0; /*0x645aa8*/
          *v4 = 0; /*0x645aab*/
          v4 += 3; /*0x645aad*/
          --v5; /*0x645ab0*/
        }
        while ( v5 ); /*0x645ab1*/
      }
      this->ParticleTypeClass_field_28C = (unsigned int)((void *)a3); /*0x645ab3*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x645abc*/
      if ( v6 ) /*0x645ac6*/
      {
        if ( a2 - 1 >= 0 ) /*0x645acd*/
        {
          v7 = (unsigned char *)(v6 + 2); /*0x645acf*/
          v8 = a2; /*0x645ad2*/
          do /*0x645adf*/
          {
            *(v7 - 2) = 0; /*0x645ad3*/
            *(v7 - 1) = 0; /*0x645ad6*/
            *v7 = 0; /*0x645ad9*/
            v7 += 3; /*0x645adb*/
            --v8; /*0x645ade*/
          }
          while ( v8 ); /*0x645adf*/
        }
      }
      else
      {
        v6 = 0; /*0x645ae3*/
      }
      this->ParticleTypeClass_field_28C = (unsigned int)(v6); /*0x645ae5*/
      BYTE1(this->ParticleTypeClass_field_0xC) = 1; /*0x645ae8*/
    }
  }
  this->ArrayIndex = (unsigned int)(&vt_DynamicVectorClass); /*0x645aec*/
  this->Damage = 10; /*0x645af2*/
  this->ParticleTypeClass_field_0x10 = 0; /*0x645af9*/
  return &this->ArrayIndex; /*0x645afe*/

}
}
// 0x477930
namespace gamemd {
unsigned int ParticleTypeClass::LoadTypeData(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x477930*/
    return (a2 - *(unsigned int *)&this->m_1[3]) / 3u; /*0x47794e*/
  else
    return 0; /*0x477937*/

}
} // namespace gamemd

// 0x477AC0
namespace gamemd {
TypeList_flat * ParticleTypeClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)Block + 1); /*0x477ac3*/
  *(unsigned int *)Block = (unsigned int)(&vt_VectorClass); /*0x477ac6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x477ad0*/
  {
    __3_YAXPAX_Z(v3); /*0x477ad8*/
    *((unsigned int *)Block + 1) = 0; /*0x477ae0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x477aeb*/
  *((unsigned int *)Block + 2) = 0; /*0x477af1*/
  if ( (a2 & 1) != 0 ) /*0x477af8*/
    __3_YAXPAX_Z(Block); /*0x477afb*/
  return Block; /*0x477b05*/

}
} // namespace gamemd

// 0x4785F0
namespace gamemd {
int ParticleTypeClass::Init(unsigned char * a2, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{

  int m_10; // esi
  int result; // eax
  unsigned char *i; // ecx

  m_10 = this->m_10; /*0x4785f2*/
  result = 0; /*0x4785f5*/
  if ( m_10 <= 0 ) /*0x4785fa*/
    return -1; /*0x478621*/
  for ( i = *(unsigned char **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x478600*/
  {
    if ( ++result >= m_10 ) /*0x47861f*/
      return -1; /*0x47861f*/
  }
  return result; /*0x478624*/

}
}
// 0x6457A0
namespace gamemd {
int ParticleTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int aP1, int aP2)
{

  int result; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // edi

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)aP0, aP1, aP2); /*0x6457b3*/
  if ( result >= 0 ) /*0x6457ba*/
  {
    v4 = *(unsigned int *)aP1; /*0x6457c2*/
    aP2 = (int)aP0->aP2; /*0x6457ce*/
    result = (*(int (**)(int, int *, int, unsigned int))(v4 + 16))(aP1, &aP2, 4, 0); /*0x6457d2*/
    if ( result >= 0 ) /*0x6457d7*/
    {
      v5 = 0; /*0x6457dd*/
      if ( aP2 > 0 ) /*0x6457e1*/
      {
        v6 = 0; /*0x6457e3*/
        do /*0x645806*/
        {
          if ( (*(int (**)(int, char *, int, unsigned int))(*(unsigned int *)aP1 + 16))( /*0x6457fa*/
                 aP1,
                 (char *)aP0->ParticleTypeClass_field_0x2BC + v6,
                 3,
                 0) < 0 )
            break; /*0x6457fa*/
          ++v5; /*0x645800*/
          v6 += 3; /*0x645801*/
        }
        while ( v5 < aP2 ); /*0x645806*/
      }
      return 0; /*0x645808*/
    }
  }
  return result; /*0x64580a*/

}
} // namespace gamemd

// 0x645910
namespace gamemd {
int ParticleTypeClass::GetObjectSize()
{

  return 792; /*0x645915*/

}
} // namespace gamemd

// 0x645920
namespace gamemd {
int ParticleTypeClass::GetTypeIdentifier()
{

  return 23; /*0x645925*/

}
} // namespace gamemd

// 0x645930
namespace gamemd {
char ParticleTypeClass::Stub(int a1, int a2)
{

  return 0; /*0x645932*/

}
} // namespace gamemd

// 0x645940
namespace gamemd {
int ParticleTypeClass::StubReturnFalse(int a1)
{

  return 0; /*0x645942*/

}
} // namespace gamemd
