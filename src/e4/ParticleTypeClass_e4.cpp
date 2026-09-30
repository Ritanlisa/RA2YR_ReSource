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

// 0x477900
namespace gamemd {
void ParticleTypeClass::GetClassIdentifier()
{
  void *v2; // eax

  v2 = *(void **)&this->vtable2; /*0x477906*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x477916*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
}
// 0x4784F0
namespace gamemd {
AbstractClass * * ParticleTypeClass::Release(int a2, char * a3)
{
  int v3; // ebp
  char *v5; // edi
  void * v6;
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
        *((unsigned char *)this + 12) = 0;
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
      v6 = (void *)((int)(RA2_OPNEW(3 * a2)));
      if ( v6 ) /*0x47851e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478525*/
        {
          v7 = (unsigned char *)((unsigned int)(v6)+ 2); /*0x478527*/
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
        *((unsigned char *)this + 12) = 1;
    if ( !v5 ) /*0x478560*/
      return 0; /*0x4785e2*/
        if ( *((unsigned int *)this + 1) )
    {
            v11 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x47856c*/
        m_8 = a2; /*0x47856e*/
      if ( m_8 > 0 ) /*0x478572*/
      {
        v12 = 0; /*0x478574*/
        do /*0x478590*/
        {
                    v13 = *((unsigned int *)this + 1) + v12;
          v14 = &v5[v12]; /*0x47857d*/
          v12 += 3; /*0x478580*/
          --m_8; /*0x478583*/
          *(unsigned short *)v14 = *(unsigned short *)v13; /*0x478587*/
          v14[2] = *(unsigned char *)(v13 + 2); /*0x47858d*/
        }
        while ( m_8 ); /*0x478590*/
        v3 = a2; /*0x478592*/
      }
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->vtable2); /*0x4785a1*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v5;
        *((unsigned int *)this + 2) = v3;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
  v15 = (gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)(*(unsigned short *)&this->vtable4)));
    if ( v15 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v15;
  return 1; /*0x4785d6*/
}
}
// 0x4788E0
namespace gamemd {
void ParticleTypeClass::EnsureCapacity(void* a1)
{
  void * v3;
  char *v4; // eax
  void * v5;
  void * v6;
  void *BehavesLike; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  char *v11; // edi

  if ( this == (ParticleTypeClass *)a2 ) /*0x4788ec*/
    return &this->ArrayIndex; /*0x4788ec*/
  (*((void (**)(ParticleTypeClass *))this->ArrayIndex + 3))(this); /*0x4788f4*/
  v3 = a2[2]; /*0x4788f7*/
    *((unsigned int *)this + 8) = v3;
  if ( !v3 ) /*0x478901*/
  {
        *((unsigned int *)this + 4) = 0;
        *((unsigned char *)this + 13) = 0;
    return &this->ArrayIndex; /*0x47897a*/
  }
  v4 = (char *)RA2_OPNEW(3 * v3); /*0x478907*/
  if ( v4 ) /*0x478911*/
  {
    if ( (unsigned int)(v3)- 1 >= 0 ) /*0x478918*/
    {
      v5 = (void *)((int)((unsigned char *)(v4 + 2)));
      v6 = (void *)((int)(v3));
      do /*0x47892a*/
      {
        *(unsigned int *)(((unsigned int)(v5)- 2)) = 0; /*0x47891e*/
        *(unsigned int *)(((unsigned int)(v5)- 1)) = 0; /*0x478921*/
        *(unsigned int *)(v5) = 0; /*0x478924*/
        (unsigned int)(v5)+= 3; /*0x478926*/
        --v6; /*0x478929*/
      }
      while ( v6 ); /*0x47892a*/
    }
  }
  else
  {
    v4 = (char *)((void *)(0));
  }
  this->ParticleTypeClass_field_28C = (unsigned int)((void *)(v4));
  if ( !v4 ) /*0x478935*/
    return &this->ArrayIndex; /*0x478935*/
    v7 = *((unsigned int *)this + 8);
  v8 = 0; /*0x47893a*/
    *((unsigned char *)this + 13) = 1;
  if ( (int)BehavesLike <= 0 ) /*0x478942*/
    return &this->ArrayIndex; /*0x478942*/
  v9 = 0; /*0x478944*/
  do /*0x478969*/
  {
    v10 = a2[1] + v9; /*0x47894e*/
        v11 = *((unsigned int *)this + 4) + v9;
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
void ParticleTypeClass::ParticleTypeClass_LoadFromINI(void * a2)
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
  uint8_t * v34;
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
  unsigned int v46;
  int * p_ParticleTypeClass_field_0x24;
  uint8_t *v48; // [esp+0h] [ebp-E4h]
  uint8_t * ParticleTypeClass_field_0x2F8;
  int v50; // [esp+18h] [ebp-CCh] BYREF
  char Source[32]; // [esp+1Ch] [ebp-C8h] BYREF
  int v52[7]; // [esp+3Ch] [ebp-A8h] BYREF
  int v53[3]; // [esp+58h] [ebp-8Ch] BYREF
  char Destination[128]; // [esp+64h] [ebp-80h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x644f65*/
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)this, a2) ) /*0x644f6d*/
    return 0; /*0x645417*/
  ParticleTypeClass::Constructor((ParticleTypeClass *)v44, 0, 0); /*0x644f85*/
  v44[0] = (void*)&TypeList_RGBClass_vftable; /*0x644f8a*/
    inited = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)((char *)this + 144));
  RGBColorList = INIClass::ReadRGBColorList( /*0x644fac*/
                   (INIClass *)a2,
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
    ParticleTypeClass::EnsureCapacity((unsigned int *)((char *)this + 2784), RGBColorList);
    *((unsigned int *)this + 2848) = RGBColorList[4];
    *((unsigned int *)this + 2864) = RGBColorList[5];
    *((unsigned int *)this + 2880) = RGBColorList[6];
  v52[0] = (int)&VectorClass_RGBClass_vftable; /*0x644fd9*/
  FilePipe_38::ddtor((int)v52); /*0x644fe1*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644ff5*/
                    (bool *)a2,
                    (uint8_t *)&this->ParticleTypeClass_field_0x24,
                    aMaxdc,
                    this->ParticleTypeClass_field_0x2DC[0]);
    aP3_4 = *((unsigned int *)this + 2944);
  v48 = aMaxec; /*0x645003*/
    v47 = (INIClass *)((char *)this + 144);
    *((unsigned int *)this + 2928) = Int_Overwrite;
    *((unsigned int *)this + 2944) = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4);
                                             (bool *)a2,
                                             p_ParticleTypeClass_field_0x24,
                                             v48,
                                             ParticleTypeClass_field_0x2F8);
    v6 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)((char *)this + 144), &stru_81859C, *(INIClass **)((char *)this + 2976));
  ParticleTypeClass_field_0x2E4 = (uint8_t *)((unsigned char *)(this->ParticleTypeClass_field_0x2E4));
  ParticleTypeClass_field_0x2F8 = (uint8_t *)((unsigned int)((uint8_t *)(128)));
  v48 = (int *)((uint8_t *)Destination);
  p_ParticleTypeClass_field_0x24 = (uint8_t *)&g_INI_DefaultBuffer; /*0x64503e*/
  v46 = g_INI_Key_Warhead; /*0x645043*/
    v40 = (VectorClass *)((char *)this + 144);
    *((unsigned int *)this + 2976) = v6;
  if ( INIClass::GetString( /*0x645051*/
         (INIClass *)a2,
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
    aP3_4 = *((unsigned int *)this + 2992);
  v48 = aStartframe; /*0x645070*/
    v47 = (INIClass *)((char *)this + 144);
    *((unsigned int *)this + 2960) = v8;
    *((unsigned int *)this + 2992) = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4);
                                             (bool *)a2,
                                             p_ParticleTypeClass_field_0x24,
                                             v48,
                                             ParticleTypeClass_field_0x2F8);
  v12 = INIClass::ReadInt_Overwrite( /*0x645096*/
          (bool *)a2,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aNumloopframes,
          this->ParticleTypeClass_field_0x2F0[0]);
    v10 = *(CCINIClass **)((char *)this + 3024);
    *((unsigned int *)this + 3008) = v9;
  v14 = INIClass::ReadInt_Overwrite( /*0x6450b0*/
          (bool *)a2,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aTranslucency,
          ParticleTypeClass_field_0x2F4);
    aP3_4 = *((unsigned int *)this + 3040);
  v48 = aWindeffect; /*0x6450be*/
    v47 = (INIClass *)((char *)this + 144);
    *((unsigned int *)this + 3024) = v11;
  v15 = INIClass::ReadInt_Overwrite((bool *)a2, p_ParticleTypeClass_field_0x24, v48, ParticleTypeClass_field_0x2F8); /*0x6450ca*/
    v13 = *(float *)((char *)this + 3056);
    *((unsigned int *)this + 3040) = v12;
  INIClass::ReadDouble_Overwrite((double *)a2, (uint8_t *)&this->ParticleTypeClass_field_0x24, aVelocity, v16); /*0x6450e9*/
    *(float *)((char *)this + 3056) = INIClass::ReadDouble_Overwrite(
  INIClass::ReadDouble_Overwrite( /*0x645108*/
    (double *)a2,
    (uint8_t *)&this->ParticleTypeClass_field_0x24,
    aDeacc,
    *(float *)&this->ParticleTypeClass_field_0x300);
    v15 = *(CCINIClass **)((char *)this + 3088);
    *(float *)((char *)this + 3072) = Double_Overwrite;
  v18 = INIClass::ReadInt_Overwrite( /*0x645122*/
          (bool *)a2,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aRadius,
          ParticleTypeClass_field_0x304);
    v17 = *((unsigned char *)this + 3104);
    *((unsigned int *)this + 3088) = v16;
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x64513c*/
                     (int *)a2,
                     (uint8_t *)&this->ParticleTypeClass_field_0x24,
                     aDeleteonstatel,
                     v19);
    aP3_4 = *((char *)this + 3108);
  v48 = aEndstateai; /*0x645149*/
    v47 = (INIClass *)((char *)this + 144);
    *((unsigned char *)this + 3104) = Bool_Overwrite;
    *((unsigned char *)this + 3108) = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4);
                         (bool *)a2,
                         p_ParticleTypeClass_field_0x24,
                         v48,
                         ParticleTypeClass_field_0x2F8);
  v21 = INIClass::ReadInt_Overwrite( /*0x645172*/
          (bool *)a2,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aStartstateai,
          this->__pad_308[2]);
    aP3_4 = *((char *)this + 3116);
  v48 = aStateaiadvance; /*0x64517f*/
    v47 = (INIClass *)((char *)this + 144);
    *((unsigned char *)this + 3112) = v19;
    *((unsigned char *)this + 3116) = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4);
                         (bool *)a2,
                         p_ParticleTypeClass_field_0x24,
                         v48,
                         ParticleTypeClass_field_0x2F8);
    *((unsigned char *)this + 3128) = INIClass::ReadInt_Overwrite(
                         (bool *)a2,
                         (uint8_t *)&this->ParticleTypeClass_field_0x24,
                         aTranslucent50s,
                         (uint8_t)this->__pad_308[6]);
  v22 = INIClass::ReadInt_Overwrite( /*0x6451c5*/
          (bool *)a2,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aTranslucent25s,
          (uint8_t)this->__pad_308[5]);
    v21 = *((unsigned char *)this + 3132);
    *((unsigned char *)this + 3124) = v20;
  v24 = INIClass::ReadBool_Overwrite( /*0x6451df*/
          (int *)a2,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          g_INI_Key_Normalized,
          v23);
    v23 = *(int **)((char *)this + 2768);
    *((unsigned char *)this + 3132) = v22;
    eax5d = *(INIClass **)((char *)this + 2752);
    v25 = INIClass::ReadDouble_Overwrite(
    v24 = *(CCINIClass **)((char *)this + 2688);
    *(double *)((char *)this + 2752) = v25;
  v27 = (IUnknown *)INIClass::ReadInt_Overwrite( /*0x64521a*/
                      (bool *)a2,
                      (uint8_t *)&this->ParticleTypeClass_field_0x24,
                      aXvelocity,
                      (int)ParticleTypeClass_field_0x2A0);
    aP3_4 = *((unsigned int *)this + 2704);
  v48 = aYvelocity; /*0x645228*/
    v47 = (INIClass *)((char *)this + 144);
    *((unsigned int *)this + 2688) = eax5e;
    *((unsigned int *)this + 2704) = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4);
                                                      (bool *)a2,
                                                      p_ParticleTypeClass_field_0x24,
                                                      v48,
                                                      ParticleTypeClass_field_0x2F8);
  v28 = INIClass::ReadInt_Overwrite( /*0x64524e*/
          (bool *)a2,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aMinzvelocity,
          this->ParticleTypeClass_field_0x2A8[0]);
  v29 = (unsigned int)(this->ParticleTypeClass_field_0x2AC[0]);
    *((unsigned int *)this + 2720) = v28;
  v30 = INIClass::ReadInt_Overwrite( /*0x645268*/
          (bool *)a2,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aZvelocityrange,
          v29);
  ParticleTypeClass_field_0x2F8 = (unsigned int)((int)&this->__pad_248[76]);
  v48 = (int *)(aNextparticleof);
  p_ParticleTypeClass_field_0x24 = (unsigned int)((uint8_t *)((int *)((uint8_t *)&this->ParticleTypeClass_field_0x24)));
  v46 = (int *)((unsigned int)((int *)((uint8_t *)v53)));
  this->ParticleTypeClass_field_0x2AC[0] = (int *)(v30);
  Coord2 = (int *)(INIClass::GetCoord2( /*0x645287*/ (INIClass *)a2, (int *)v46, p_ParticleTypeClass_field_0x24, v48, (int *)ParticleTypeClass_field_0x2F8));
    *((unsigned int *)this + 2640) = *Coord2;
    *((unsigned int *)this + 2656) = Coord2[1];
    *((unsigned int *)this + 2672) = Coord2[2];
  Coord = INIClass::GetCoord( /*0x6452b1*/
            (INIClass *)a2,
            (int)&v50,
            (uint8_t *)&this->ParticleTypeClass_field_0x24,
            aStartcolor1,
            (uint8_t *)&this->ParticleTypeClass_field_0x2D4);
    *((unsigned short *)this + 2896) = *(unsigned short *)Coord;
    *((unsigned char *)this + 2904) = *(unsigned char *)(Coord + 2);
  v33 = INIClass::GetCoord( /*0x6452d7*/
          (INIClass *)a2,
          (int)&v50,
          (uint8_t *)&this->ParticleTypeClass_field_0x24,
          aStartcolor2,
          (uint8_t *)&this->ParticleTypeClass_field_0x2D4 + 3);
  v34 = (uint8_t *)((int16_t)((uint8_t *)(*(unsigned short *)v33)));
  ParticleTypeClass_field_0x2F8 = (uint8_t *)(this->__pad_308[1]);
    *((unsigned short *)this + 2908) = v34;
  v48 = aFinaldamagesta; /*0x6452eb*/
  IDA_LOBYTE(v33) = *(unsigned char *)(v33 + 2); /*0x6452f0*/
    v47 = (INIClass *)((char *)this + 144);
    *((unsigned char *)this + 2916) = eax5j;
  v35 = INIClass::ReadInt_Overwrite((bool *)a2, p_ParticleTypeClass_field_0x24, v48, ParticleTypeClass_field_0x2F8); /*0x6452f9*/
  ParticleTypeClass_field_0x2F8 = 32; /*0x645302*/
  v48 = (uint8_t *)Source; /*0x645304*/
  p_ParticleTypeClass_field_0x24 = 0; /*0x645305*/
  v46 = aNextparticle; /*0x645307*/
    v40 = (VectorClass *)((char *)this + 144);
    *((unsigned char *)this + 3120) = al5d;
  if ( INIClass::GetString( /*0x645315*/
         (INIClass *)a2,
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
        v37 = (BuildingTypeClass *)RA2_OPNEW(0x318u); /*0x64536b*/
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
    this->ParticleTypeClass_field_0x310 = (char)(v36);
  }
  Source[0] = (char **)(0);
  INIClass::GetString( /*0x6453d0*/
    (INIClass *)a2,
    (uint8_t *)&this->ParticleTypeClass_field_0x24,
    aBehaveslike,
    0,
    Source,
    32);
  v41 = (char **)((int)((char **)(0)));
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
    *((unsigned int *)this + 3152) = v41;
  return 1; /*0x645407*/
}
}
// 0x6454E0
namespace gamemd {
int ParticleTypeClass::ProcessPower(int * a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx

  AbstractTypeClass::ProcessPower(a2); /*0x6454e9*/
    Power::TimerProcess(*((unsigned int *)this + 2928));
    Power::TimerProcess(*((unsigned int *)this + 2944));
    Power::TimerProcess(*((unsigned int *)this + 2976));
    Power::TimerProcess(*((unsigned int *)this + 2992));
    Power::TimerProcess(*((unsigned int *)this + 3008));
    Power::TimerProcess(*((unsigned int *)this + 3024));
    Power::TimerProcess(*((unsigned int *)this + 3040));
    Checksummer::Add_float(*((unsigned int *)this + 3056));
    Checksummer::Add_float(*((unsigned int *)this + 3072));
    Power::TimerProcess(*((unsigned int *)this + 3088));
    LOBYTE(v3) = *((unsigned char *)this + 3104);
  Power::FlagProcess((Power *)a2, v3); /*0x645583*/
    LOBYTE(v4) = *((unsigned char *)this + 3108);
  v5 = Power::FinalizeDrain((Power *)a2, v4); /*0x645591*/
    LOBYTE(v5) = *((unsigned char *)this + 3112);
  Power::FinalizeDrain((Power *)a2, v5); /*0x64559f*/
    LOBYTE(v6) = *((unsigned char *)this + 3116);
  Power::FinalizeDrain((Power *)a2, v6); /*0x6455ad*/
    Power::TimerProcess(*(unsigned __int8 *)((char *)this + 3124));
    Power::TimerProcess(*(unsigned __int8 *)((char *)this + 3128));
    LOBYTE(v7) = *((unsigned char *)this + 3132);
  Power::FlagProcess((Power *)a2, v7); /*0x6455db*/
    Power::TimerProcess(*((unsigned int *)this + 3136));
    Power::TimerProcess(*((unsigned int *)this + 3152));
// 0x4a1d90
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
  ParticleTypeClass *v3; // edi
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

  v2 = (int *)a2; /*0x645663*/
  v3 = a1; /*0x645669*/
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)a1, a2); /*0x64566f*/
  if ( result >= 0 ) /*0x645678*/
  {
    if ( v3 ) /*0x645680*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)v3, (int)&a2); /*0x645689*/
      ParticleTypeClass::Constructor((ParticleTypeClass *)&v3->ParticleTypeClass_field_0x2B8, 0, 0); /*0x645698*/
      v3->ParticleTypeClass_field_0x2B8 = (VectorClass *)(void*)&TypeList_RGBClass_vftable; /*0x64569d*/
      v3->ArrayIndex = (void*)&ParticleTypeClass_vftable; /*0x6456a3*/
      v3->ParticleTypeClass_field_28C = (void*)&ParticleTypeClass_vftable; /*0x6456a9*/
      v3->BehavesLike = (void*)&ParticleTypeClass_vftable; /*0x6456b0*/
      v3->ParticleTypeClass_field_0xC = (void*)&ParticleTypeClass_vftable; /*0x6456b7*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->ParticleTypeClass_field_0x2E4); /*0x6456ca*/
    v5 = *v2; /*0x6456cf*/
    a1 = 0; /*0x6456db*/
    result = (*(int (__stdcall **)(int *, ParticleTypeClass **, int, unsigned int))(v5 + 12))(v2, &a1, 4, 0); /*0x6456df*/
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
          IDA_LOWORD(a2) = 0; /*0x645706*/
          IDA_BYTE2(a2) = 0; /*0x64570e*/
          result = (*(int (__stdcall **)(int *, int *, int, unsigned int))(v6 + 12))(v2, &a2, 3, 0); /*0x645712*/
          if ( result < 0 ) /*0x645717*/
            break; /*0x645717*/
          v7 = *(unsigned int *)v3->__pad_2C0; /*0x645719*/
          if ( (int)v3->ParticleTypeClass_field_0x2C8 < v7 /*0x645747*/
            || (v3->__pad_2C0[5] || !v7)
            && (ParticleTypeClass_field_0x2CC = (int)v3->ParticleTypeClass_field_0x2CC, ParticleTypeClass_field_0x2CC > 0)
            && ((uint8_t (__thiscall *)(VectorClass **, int, unsigned int))v3->ParticleTypeClass_field_0x2B8->Capacity)(
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
            v13[2] = IDA_BYTE2(a2); /*0x64576b*/
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

    result = *((unsigned int *)this + 740);
  if ( result == a2 ) /*0x6458bc*/
        *((unsigned int *)this + 740) = 0;
  return result; /*0x6458c8*/
}
}
// 0x645950
namespace gamemd {
ParticleTypeClass * ParticleTypeClass::ddtor(char a2)
{
  int v3; // eax
  int v4; // eax
  CampaignClass *ParticleTypeClass_field_0x2BC; // eax
  ParticleTypeClass *v7; // [esp+4h] [ebp-4h] BYREF

  this->ArrayIndex = (void*)&ParticleTypeClass_vftable; /*0x645956*/
    *(Block + 1) = &ParticleTypeClass::`vftable';
    *(Block + 2) = &ParticleTypeClass::`vftable';
    *(Block + 3) = &vt_ParticleTypeClass;
    AbstractClass::AnnounceExpiredPointer(Block, 1);
  v7 = this; /*0x645986*/
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
  v7 = this; /*0x6459cf*/
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
    v5 = *(Block + 175);
    *(Block + 174) = &vt_VectorClass_RGBClass;
    if ( v5 && *((unsigned char *)Block + 709) )
  {
    RA2_OPDEL(ParticleTypeClass_field_0x2BC); /*0x645a27*/
        *(Block + 175) = 0;
  }
    *((unsigned char *)Block + 709) = 0;
    *(Block + 176) = 0;
  ObjectTypeClass::Destruct(); /*0x645a4c*/
  if ( (a2 & 1) != 0 ) /*0x645a56*/
    RA2_OPDEL(); /*0x645a59*/
    return (ParticleTypeClass *)Block;
}
} // namespace gamemd

// 0x645A70
namespace gamemd {
unsigned int * ParticleTypeClass::Constructor(int a2, int a3)
{
  unsigned char *v4; // eax
  int v5; // ecx
  char *v6; // eax
  unsigned char *v7; // ecx
  int v8; // edx

    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = a2;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
  this->ArrayIndex = (void*)&VectorClass_RGBClass_vftable; /*0x645a8a*/
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
            *((unsigned int *)this + 4) = a3;
    }
    else
    {
      v6 = (char *)RA2_OPNEW(3 * a2); /*0x645abc*/
      if ( v6 ) /*0x645ac6*/
      {
        if ( a2 - 1 >= 0 ) /*0x645acd*/
        {
          v7 = v6 + 2; /*0x645acf*/
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
            *((unsigned int *)this + 4) = v6;
            *((unsigned char *)this + 13) = 1;
    }
  }
  this->ArrayIndex = (void*)&DynamicVectorClass_RGBClass_vftable; /*0x645aec*/
    *((unsigned int *)this + 20) = 10;
    *((unsigned int *)this + 16) = 0;
  return &this->ArrayIndex; /*0x645afe*/
}
}
// 0x477930
namespace gamemd {
unsigned int ParticleTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (a2 - *((unsigned int *)this + 16)) / 3u;
  else
    return 0; /*0x477937*/
}
} // namespace gamemd

// 0x477AC0
namespace gamemd {
TypeList_flat * ParticleTypeClass::QueryInterface(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
  *(unsigned int *)this = (void*)&VectorClass_RGBClass_vftable; /*0x477ac6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x477ad8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x477af8*/
    RA2_OPDEL(); /*0x477afb*/
  return this; /*0x477b05*/
}
} // namespace gamemd

// 0x4785F0
namespace gamemd {
int ParticleTypeClass::Init(unsigned char * a2)
{
  int m_10; // esi
  int result; // eax
  unsigned char *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4785f5*/
  if ( m_10 <= 0 ) /*0x4785fa*/
    return -1; /*0x478621*/
    for ( i = (unsigned char *)*((unsigned int *)this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 )
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
    result = (*(int (__stdcall **)(int, int *, int, unsigned int))(v4 + 16))(aP1, &aP2, 4, 0); /*0x6457d2*/
    if ( result >= 0 ) /*0x6457d7*/
    {
      v5 = 0; /*0x6457dd*/
      if ( aP2 > 0 ) /*0x6457e1*/
      {
        v6 = 0; /*0x6457e3*/
        do /*0x645806*/
        {
          if ( (*(int (__stdcall **)(int, char *, int, unsigned int))(*(unsigned int *)aP1 + 16))( /*0x6457fa*/
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
