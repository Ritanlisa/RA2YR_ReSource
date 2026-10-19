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
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"

// 0x477900
namespace gamemd {  // G42.18 ns repair
void ParticleTypeClass::GetClassIdentifier()
{

  void *v2 = *&this->ptr_4; // eax /*0x477906*/
  *&this->uniqueId = 0; /*0x477909*/
  if ( v2 && (this->IsAllocated) ) /*0x477910*/
  {
    operator delete((v2)); /*0x477916*/
    *&this->ptr_4 = 0; /*0x47791e*/
  }
  (this->IsAllocated) = 0; /*0x477921*/
  *&this->m_8 = 0; /*0x477924*/
}
}  // G42.18 ns repair
// 0x4784F0
namespace gamemd {
AbstractClass * * ParticleTypeClass::Release(int a2, char * a3)
{

  void *v3; // ebp
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
  int v15; // eax

  v3 = (void *)a2; /*0x4784f2*/
  if ( a2 ) /*0x4784fe*/
  {
    v5 = a3; /*0x478504*/
    (this->ParticleTypeClass_field_0xC) = ((this->ParticleTypeClass_field_0xC) & ~0xFF) | ((0) & 0xFF); /*0x478508*/
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
      v6 = __2_YAPAXI_Z(3 * a2); /*0x478514*/
      if ( v6 ) /*0x47851e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478525*/
        {
          v7 = &v6->ptr_2; /*0x478527*/
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
    (this->ParticleTypeClass_field_0xC) = ((this->ParticleTypeClass_field_0xC) & ~0xFF) | ((1) & 0xFF); /*0x47855c*/
    if ( !v5 ) /*0x478560*/
      return 0; /*0x4785e2*/
    if ( *&this->ptr_4 ) /*0x478562*/
    {
      m_8 = this->m_8; /*0x478567*/
      if ( a2 < m_8 ) /*0x47856c*/
        m_8 = a2; /*0x47856e*/
      if ( m_8 > 0 ) /*0x478572*/
      {
        v12 = 0; /*0x478574*/
        do /*0x478590*/
        {
          v13 = *&this->ptr_4 + v12; /*0x47857b*/
          v14 = &v5[v12]; /*0x47857d*/
          v12 += 3; /*0x478580*/
          --m_8; /*0x478583*/
          *(unsigned short *)v14 = *(unsigned short *)v13; /*0x478587*/
          v14[2] = *(unsigned char *)(v13 + 2); /*0x47858d*/
        }
        while ( m_8 ); /*0x478590*/
        v3 = (void *)a2; /*0x478592*/
      }
      if ( (((this->ParticleTypeClass_field_0xC) >> 8) & 0xFF) ) /*0x478598*/
      {
        __3_YAXPAX_Z(*&this->ptr_4); /*0x4785a1*/
        *&this->ptr_4 = 0; /*0x4785a9*/
      }
    }
    *&this->ptr_4 = v5; /*0x4785b4*/
    this->m_8 = (int)v3; /*0x4785ba*/
    BYTE1(this->ParticleTypeClass_field_0xC) = a3 == 0; /*0x4785bd*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_VRGBClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4785c6*/
  }
  v15 = this->m_8; /*0x4785c9*/
  if ( v15 < this->uniqueId ) /*0x4785d1*/
    this->uniqueId = v15; /*0x4785d3*/
  return 1; /*0x4785d6*/

}
}
// 0x4788E0
namespace gamemd {
unsigned int * ParticleTypeClass::EnsureCapacity(unsigned int * a2, void *a2_2)
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
  v3 = a2->ptr_8; /*0x4788f7*/
  this->BehavesLike = (void *)v3; /*0x4788fe*/
  if ( !v3 ) /*0x478901*/
  {
    this->ParticleTypeClass_field_28C = 0; /*0x478974*/
    (this->ParticleTypeClass_field_0xC) = ((this->ParticleTypeClass_field_0xC) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x478977*/
    return &this->ArrayIndex; /*0x47897a*/
  }
  v4 = (char *)__2_YAPAXI_Z(3 * v3); /*0x478907*/
  if ( v4 ) /*0x478911*/
  {
    if ( v3 - 1 >= 0 ) /*0x478918*/
    {
      v5 = v4 + 2; /*0x47891a*/
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
  this->ParticleTypeClass_field_28C = v4; /*0x478932*/
  if ( !v4 ) /*0x478935*/
    return &this->ArrayIndex; /*0x478935*/
  BehavesLike = this->BehavesLike; /*0x478937*/
  v8 = 0; /*0x47893a*/
  (this->ParticleTypeClass_field_0xC) = ((this->ParticleTypeClass_field_0xC) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x47893e*/
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
  unsigned __int8 *inited; // eax
  unsigned int *RGBColorList; // ebp
  int Int_Overwrite; // eax
  int v9; // eax
  int ParticleTypeClass_field_0x2E4; // ebp
  int v11; // eax
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
  int ParticleTypeClass_field_0x2A0; // ecx
  int v27; // eax
  int v28; // eax
  int ParticleTypeClass_field_0x2AC; // ecx
  int v30; // eax
  int *Coord2; // eax
  int Coord; // eax
  unsigned __int16 *v33; // eax
  unsigned __int16 v34; // dx
  char v35; // al
  int v36; // ebp
  BuildingTypeClass *v37; // eax
  unsigned int *v38; // eax
  int v39; // ecx
  unsigned int *v40; // edx
  int v41; // ebx
  char **v42; // edi
  void **v44[2]; // [esp-14h] [ebp-F8h] BYREF
  unsigned __int8 *v45; // [esp-Ch] [ebp-F0h]
  unsigned __int8 *v46; // [esp-8h] [ebp-ECh]
  unsigned __int8 *p_ParticleTypeClass_field_0x24; // [esp-4h] [ebp-E8h]
  unsigned __int8 *v48; // [esp+0h] [ebp-E4h]
  int ParticleTypeClass_field_0x2E0; // [esp+4h] [ebp-E0h]
  int v50; // [esp+18h] [ebp-CCh] BYREF
  char Source[32]; // [esp+1Ch] [ebp-C8h] BYREF
  _VectorClass_VRGBClass v52; // [esp+3Ch] [ebp-A8h] BYREF
  int v53[3]; // [esp+58h] [ebp-8Ch] BYREF
  char Destination[128]; // [esp+64h] [ebp-80h] BYREF

  INIClass::ResetSection((INIClass *)aP1); /*0x644f65*/
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)this, aP1) ) /*0x644f6d*/
    return 0; /*0x645417*/
  ParticleTypeClass::Constructor((ParticleTypeClass *)v44, 0, 0); /*0x644f85*/
  v44[0] = &vt_TypeList_RGBClass; /*0x644f8a*/
  inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4this->BarrelVoxel); /*0x644f9a*/
  RGBColorList = (unsigned int *)INIClass::ReadRGBColorList( /*0x644fac*/
                             (INIClass *)aP1,
                             (int)&v52,
                             inited,
                             aColorlist,
                             v44[0],
                             v44[1],
                             (int)v45,
                             (__int16)v46,
                             (int)p_ParticleTypeClass_field_0x24,
                             (int)v48,
                             ParticleTypeClass_field_0x2E0);
  ParticleTypeClass::EnsureCapacity(&this->ParticleTypeClass_2B8, RGBColorList); /*0x644fb5*/
  this->ColorList = RGBColorList[4]; /*0x644fbd*/
  this->ParticleTypeClass_field_0x2CC = RGBColorList[5]; /*0x644fc6*/
  *(unsigned int *)this->__pad_2D0 = RGBColorList[6]; /*0x644fd3*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_RGBClass) */  /*0x644fd9*/
  FilePipe_38::ddtor(&v52); /*0x644fe1*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644ff5*/
                    (bool *)aP1,
                    (unsigned __int8 *)&this->BarrelVoxel,
                    aMaxdc,
                    this->MaxDC_d);
  ParticleTypeClass_field_0x2E0 = this->MaxEC_d; /*0x645002*/
  v48 = aMaxec; /*0x645003*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->BarrelVoxel; /*0x645008*/
  this->MaxDC_d = Int_Overwrite; /*0x645009*/
  this->MaxEC_d = INIClass::ReadInt_Overwrite( /*0x645014*/
                                          (bool *)aP1,
                                          p_ParticleTypeClass_field_0x24,
                                          v48,
                                          ParticleTypeClass_field_0x2E0);
  v9 = INIClass::ReadInt_Overwrite( /*0x645029*/
         (bool *)aP1,
         (unsigned __int8 *)&this->BarrelVoxel,
         g_INI_Key_Damage,
         this->Damage_d);
  ParticleTypeClass_field_0x2E4 = this->ParticleTypeClass_field_0x2E4; /*0x64502e*/
  ParticleTypeClass_field_0x2E0 = 128; /*0x645038*/
  v48 = (unsigned __int8 *)Destination; /*0x64503d*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&g_INI_DefaultBuffer; /*0x64503e*/
  v46 = g_INI_Key_Warhead; /*0x645043*/
  v45 = (unsigned __int8 *)&this->BarrelVoxel; /*0x645048*/
  this->Damage_d = v9; /*0x64504b*/
  if ( INIClass::GetString( /*0x645051*/
         (INIClass *)aP1,
         v45,
         v46,
         (char *)p_ParticleTypeClass_field_0x24,
         (char *)v48,
         ParticleTypeClass_field_0x2E0) )
  {
    v11 = WarheadTypeClass::FindOrCreate(Destination); /*0x64505e*/
  }
  else
  {
    v11 = ParticleTypeClass_field_0x2E4; /*0x645065*/
  }
  ParticleTypeClass_field_0x2E0 = this->StartFrame; /*0x64506f*/
  v48 = aStartframe; /*0x645070*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->BarrelVoxel; /*0x645075*/
  this->ParticleTypeClass_field_0x2E4 = v11; /*0x645076*/
  this->StartFrame = INIClass::ReadInt_Overwrite( /*0x645081*/
                                          (bool *)aP1,
                                          p_ParticleTypeClass_field_0x24,
                                          v48,
                                          ParticleTypeClass_field_0x2E0);
  v12 = INIClass::ReadInt_Overwrite( /*0x645096*/
          (bool *)aP1,
          (unsigned __int8 *)&this->BarrelVoxel,
          aNumloopframes,
          this->NumLoopFrames);
  ParticleTypeClass_field_0x2F4 = this->Translucency_d; /*0x64509b*/
  this->NumLoopFrames = v12; /*0x6450a1*/
  v14 = INIClass::ReadInt_Overwrite( /*0x6450b0*/
          (bool *)aP1,
          (unsigned __int8 *)&this->BarrelVoxel,
          aTranslucency,
          ParticleTypeClass_field_0x2F4);
  ParticleTypeClass_field_0x2E0 = this->WindEffect_d; /*0x6450bd*/
  v48 = aWindeffect; /*0x6450be*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->BarrelVoxel; /*0x6450c3*/
  this->Translucency_d = v14; /*0x6450c4*/
  v15 = INIClass::ReadInt_Overwrite((bool *)aP1, p_ParticleTypeClass_field_0x24, v48, ParticleTypeClass_field_0x2E0); /*0x6450ca*/
  v16 = *(float *)this->__pad_2FC; /*0x6450cf*/
  this->WindEffect_d = v15; /*0x6450da*/
  INIClass::ReadDouble_Overwrite((double *)aP1, (unsigned __int8 *)&this->BarrelVoxel, aVelocity, v16); /*0x6450e9*/
  *(float *)this->__pad_2FC = v2; /*0x6450ee*/
  INIClass::ReadDouble_Overwrite( /*0x645108*/
    (double *)aP1,
    (unsigned __int8 *)&this->BarrelVoxel,
    aDeacc,
    *&this->q300);
  ParticleTypeClass_field_0x304 = this->Deacc; /*0x64510d*/
  *&this->q300 = v3; /*0x645115*/
  v18 = INIClass::ReadInt_Overwrite( /*0x645122*/
          (bool *)aP1,
          (unsigned __int8 *)&this->BarrelVoxel,
          aRadius,
          ParticleTypeClass_field_0x304);
  v19 = this->DeleteOnStateLimit_d; /*0x645127*/
  this->Deacc = v18; /*0x64512d*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x64513c*/
                     (int *)aP1,
                     (unsigned __int8 *)&this->BarrelVoxel,
                     aDeleteonstatel,
                     v19);
  ParticleTypeClass_field_0x2E0 = this->EndStateAI_d; /*0x645148*/
  v48 = aEndstateai; /*0x645149*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->BarrelVoxel; /*0x64514e*/
  this->DeleteOnStateLimit_d = Bool_Overwrite; /*0x645151*/
  this->EndStateAI_d = INIClass::ReadInt_Overwrite( /*0x64515c*/
                         (bool *)aP1,
                         p_ParticleTypeClass_field_0x24,
                         v48,
                         ParticleTypeClass_field_0x2E0);
  v21 = INIClass::ReadInt_Overwrite( /*0x645172*/
          (bool *)aP1,
          (unsigned __int8 *)&this->BarrelVoxel,
          aStartstateai,
          this->StartStateAI_d);
  ParticleTypeClass_field_0x2E0 = this->StateAIAdvance_d; /*0x64517e*/
  v48 = aStateaiadvance; /*0x64517f*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->BarrelVoxel; /*0x645184*/
  this->StartStateAI_d = v21; /*0x645187*/
  this->StateAIAdvance_d = INIClass::ReadInt_Overwrite( /*0x645192*/
                         (bool *)aP1,
                         p_ParticleTypeClass_field_0x24,
                         v48,
                         ParticleTypeClass_field_0x2E0);
  this->Translucent50State = INIClass::ReadInt_Overwrite( /*0x6451ae*/
                         (bool *)aP1,
                         (unsigned __int8 *)&this->BarrelVoxel,
                         aTranslucent50s,
                         (unsigned __int8)this->Translucent50State);
  v22 = INIClass::ReadInt_Overwrite( /*0x6451c5*/
          (bool *)aP1,
          (unsigned __int8 *)&this->BarrelVoxel,
          aTranslucent25s,
          (unsigned __int8)this->Translucent25State);
  v23 = this->Normalized; /*0x6451ca*/
  this->Translucent25State = v22; /*0x6451d0*/
  v24 = INIClass::ReadBool_Overwrite( /*0x6451df*/
          (int *)aP1,
          (unsigned __int8 *)&this->BarrelVoxel,
          g_INI_Key_Normalized,
          v23);
  HIDWORD(v25) = this->ParticleTypeClass_field_0x2B4; /*0x6451e4*/
  this->Normalized = v24; /*0x6451ea*/
  LODWORD(v25) = this->ParticleTypeClass_field_0x2B0; /*0x6451f0*/
  INIClass::ReadDouble_Overwrite((double *)aP1, (unsigned __int8 *)&this->BarrelVoxel, aColorspeed, v25); /*0x645200*/
  ParticleTypeClass_field_0x2A0 = this->XVelocity; /*0x645205*/
  *&this->__pad_2B0 = v4; /*0x64520b*/
  v27 = INIClass::ReadInt_Overwrite( /*0x64521a*/
          (bool *)aP1,
          (unsigned __int8 *)&this->BarrelVoxel,
          aXvelocity,
          ParticleTypeClass_field_0x2A0);
  ParticleTypeClass_field_0x2E0 = this->YVelocity; /*0x645227*/
  v48 = aYvelocity; /*0x645228*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->BarrelVoxel; /*0x64522d*/
  this->XVelocity = v27; /*0x64522e*/
  this->YVelocity = INIClass::ReadInt_Overwrite( /*0x645239*/
                                          (bool *)aP1,
                                          p_ParticleTypeClass_field_0x24,
                                          v48,
                                          ParticleTypeClass_field_0x2E0);
  v28 = INIClass::ReadInt_Overwrite( /*0x64524e*/
          (bool *)aP1,
          (unsigned __int8 *)&this->BarrelVoxel,
          aMinzvelocity,
          this->MinZVelocity);
  ParticleTypeClass_field_0x2AC = this->ZVelocityRange; /*0x645253*/
  this->MinZVelocity = v28; /*0x645259*/
  v30 = INIClass::ReadInt_Overwrite( /*0x645268*/
          (bool *)aP1,
          (unsigned __int8 *)&this->BarrelVoxel,
          aZvelocityrange,
          ParticleTypeClass_field_0x2AC);
  ParticleTypeClass_field_0x2E0 = (int)&this->q294; /*0x645277*/
  v48 = aNextparticleof; /*0x645278*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->BarrelVoxel; /*0x64527d*/
  v46 = (unsigned __int8 *)v53; /*0x64527e*/
  this->ZVelocityRange = v30; /*0x645281*/
  Coord2 = INIClass::GetCoord2( /*0x645287*/
             (INIClass *)aP1,
             (int *)v46,
             p_ParticleTypeClass_field_0x24,
             v48,
             (int *)ParticleTypeClass_field_0x2E0);
  *&this->q294 = *Coord2; /*0x64528e*/
  *&this->q298 = Coord2[1]; /*0x645298*/
  *&this->q29C = Coord2[2]; /*0x64529e*/
  Coord = INIClass::GetCoord( /*0x6452b1*/
            (INIClass *)aP1,
            (int)&v50,
            (unsigned __int8 *)&this->BarrelVoxel,
            aStartcolor1,
            (unsigned __int8 *)&this->ParticleTypeClass_field_0x2D4);
  LOWORD(this->ParticleTypeClass_field_0x2D4) = *(unsigned short *)Coord; /*0x6452bd*/
  BYTE2(this->ParticleTypeClass_field_0x2D4) = *(unsigned char *)(Coord + 2); /*0x6452c4*/
  v33 = (unsigned __int16 *)INIClass::GetCoord( /*0x6452d7*/
                              (INIClass *)aP1,
                              (int)&v50,
                              (unsigned __int8 *)&this->BarrelVoxel,
                              aStartcolor2,
                              (unsigned __int8 *)&this->ParticleTypeClass_field_0x2D4 + 3);
  v34 = *v33; /*0x6452e3*/
  ParticleTypeClass_field_0x2E0 = this->EndStateAI_d; /*0x6452e6*/
  *(unsigned short *)this->q2D4 + 3) = v34; /*0x6452e7*/
  v48 = aFinaldamagesta; /*0x6452eb*/
  LOBYTE(v33) = v33->ptr_2; /*0x6452f0*/
  p_ParticleTypeClass_field_0x24 = (unsigned __int8 *)&this->BarrelVoxel; /*0x6452f3*/
  this->u8_2D9 = (char)v33; /*0x6452f6*/
  v35 = INIClass::ReadInt_Overwrite((bool *)aP1, p_ParticleTypeClass_field_0x24, v48, ParticleTypeClass_field_0x2E0); /*0x6452f9*/
  ParticleTypeClass_field_0x2E0 = 32; /*0x645302*/
  v48 = (unsigned __int8 *)Source; /*0x645304*/
  p_ParticleTypeClass_field_0x24 = 0; /*0x645305*/
  v46 = aNextparticle; /*0x645307*/
  v45 = (unsigned __int8 *)&this->BarrelVoxel; /*0x64530c*/
  this->FinalDamageState = v35; /*0x64530f*/
  if ( INIClass::GetString( /*0x645315*/
         (INIClass *)aP1,
         v45,
         v46,
         (char *)p_ParticleTypeClass_field_0x24,
         (char *)v48,
         ParticleTypeClass_field_0x2E0) )
  {
    if ( _strcmpi(Source, g_Str__none_) ) /*0x64532c*/
    {
      v36 = 0; /*0x64533d*/
      if ( dword_A83DA8 <= 0 ) /*0x645341*/
      {
LABEL_10:
        v37 = (BuildingTypeClass *)__2_YAPAXI_Z(0x318u); /*0x64536b*/
        if ( v37 ) /*0x64537a*/
          v38 = BuildingTypeClass::Construct(v37, Source); /*0x645383*/
        else
          v38 = 0; /*0x64538a*/
        v39 = 0; /*0x645392*/
        if ( dword_A83DA8 <= 0 ) /*0x645396*/
        {
LABEL_17:
          v39 = -1; /*0x6453aa*/
        }
        else
        {
          v40 = dword_A83D9C; /*0x645398*/
          while ( (unsigned int *)*v40 != v38 ) /*0x6453a0*/
          {
            ++v39; /*0x6453a2*/
            ++v40; /*0x6453a3*/
            if ( v39 >= dword_A83DA8 ) /*0x6453a8*/
              goto LABEL_17; /*0x6453a8*/
          }
        }
        v36 = v39; /*0x6453ad*/
      }
      else
      {
        while ( _strcmpi(Source, (char *)(*((unsigned int *)dword_A83D9C + v36) + 36)) ) /*0x64535f*/
        {
          if ( ++v36 >= dword_A83DA8 ) /*0x645369*/
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
    (unsigned __int8 *)&this->BarrelVoxel,
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
int ParticleTypeClass::ProcessPower(int *a2, void *a2_1)
{

  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6454e9*/
  Power::TimerProcess(this->MaxDC_d); /*0x6454f7*/
  Power::TimerProcess(this->MaxEC_d); /*0x645505*/
  Power::TimerProcess(this->Damage_d); /*0x645513*/
  Power::TimerProcess(this->StartFrame); /*0x645521*/
  Power::TimerProcess(this->NumLoopFrames); /*0x64552f*/
  Power::TimerProcess(this->Translucency_d); /*0x64553d*/
  Power::TimerProcess(this->WindEffect_d); /*0x64554b*/
  ((Checksummer *)a2)->Add_float(*(unsigned int *)this->u32_2FC); /*0x645559*/
  ((Checksummer *)a2)->Add_float(this->q300); /*0x645567*/
  Power::TimerProcess(this->Deacc); /*0x645575*/
  LOBYTE(v3) = this->DeleteOnStateLimit_d; /*0x64557a*/
  ((Power *)a2)->FlagProcess(v3); /*0x645583*/
  LOBYTE(v4) = this->EndStateAI_d; /*0x645588*/
  v5 = ((Power *)a2)->FinalizeDrain(v4); /*0x645591*/
  LOBYTE(v5) = this->StartStateAI_d; /*0x645596*/
  ((Power *)a2)->FinalizeDrain(v5); /*0x64559f*/
  LOBYTE(v6) = this->StateAIAdvance_d; /*0x6455a4*/
  ((Power *)a2)->FinalizeDrain(v6); /*0x6455ad*/
  Power::TimerProcess((unsigned __int8)this->Translucent25State); /*0x6455bd*/
  Power::TimerProcess((unsigned __int8)this->Translucent50State); /*0x6455cd*/
  LOBYTE(v7) = this->Normalized; /*0x6455d2*/
  ((Power *)a2)->FlagProcess(v7); /*0x6455db*/
  Power::TimerProcess(this->q310); /*0x6455e9*/
  Power::TimerProcess(this->q314); /*0x6455f7*/
  return (/*0x645611*/ (Checksummer *)a2)->Add_double((int)this->__pad_2B0, (int)this->q2B4);

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
  v3 = this; /*0x645669*/
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x64566f*/
  if ( result >= 0 ) /*0x645678*/
  {
    if ( v3 ) /*0x645680*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)v3, (int)&a2); /*0x645689*/
      ParticleTypeClass::Constructor(&v3->ParticleTypeClass_2B8, 0, 0); /*0x645698*/
      /* X11: vtable install elided (X67 recv-slot, RHS vt_TypeList_RGBClass) */  /*0x64569d*/
      /* X11: vtable install elided (X67 recv-slot, RHS vt_ParticleTypeClass_4) */  /*0x6456a3*/
      /* X11: vtable install elided (X67 recv-slot, RHS vt_ParticleTypeClass_4) */  /*0x6456a9*/
      /* X11: vtable install elided (X67 recv-slot, RHS vt_ParticleTypeClass_4) */  /*0x6456b0*/
      /* X11: vtable install elided (X67 recv-slot, RHS vt_ParticleTypeClass_4) */  /*0x6456b7*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v3->__pad_2E4); /*0x6456ca*/
    v5 = *v2; /*0x6456cf*/
    this = 0; /*0x6456db*/
    result = (*(int (**)(int *, ParticleTypeClass **, int, unsigned int))(v5 + 12))(v2, &this, 4, 0); /*0x6456df*/
    if ( result >= 0 ) /*0x6456e4*/
    {
      v14 = 0; /*0x6456ee*/
      if ( (int)this <= 0 ) /*0x6456f4*/
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
          if ( (int)v3->ColorList < v7 /*0x645747*/
            || (v3->u8_2C5 || !v7)
            && (ParticleTypeClass_field_0x2CC = (int)v3->ParticleTypeClass_field_0x2CC, ParticleTypeClass_field_0x2CC > 0)
            && ((unsigned __int8 (*)(VectorClass **, int, unsigned int))v3->ParticleTypeClass_2B8->Capacity)(
                 &v3->ParticleTypeClass_2B8,
                 v7 + ParticleTypeClass_field_0x2CC,
                 0) )
          {
            ParticleTypeClass_field_0x2C8 = v3->ColorList; /*0x64574e*/
            v10 = (VectorClass *)ParticleTypeClass_field_0x2C8->ClearAndFree2_ph + 1); /*0x645751*/
            v11 = 3 * (unsigned int)ParticleTypeClass_field_0x2C8; /*0x645754*/
            ParticleTypeClass_field_0x2BC = v3->ParticleTypeClass_field_0x2BC; /*0x645757*/
            v3->ColorList = v10; /*0x64575a*/
            v13 = (char *)ParticleTypeClass_field_0x2BC + v11; /*0x64575d*/
            *(unsigned short *)v13 = a2; /*0x645764*/
            v13[2] = BYTE2(a2); /*0x64576b*/
          }
          if ( ++v14 >= (int)this ) /*0x64577d*/
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
  result = (int)this->__pad_2E4; /*0x6458b0*/
  if ( result == a2 ) /*0x6458bc*/
    this->__pad_2E4 = 0; /*0x6458be*/
  return result; /*0x6458c8*/

}
}
// 0x645950
namespace gamemd {
ParticleTypeClass * ParticleTypeClass::ddtor(char a2, int a3, int a4, int a5, int a6, int a7, int a8, int aP0, int aP1, int aP2, int a1)
{


  /* X11: vtable install elided (X67 recv-slot, RHS vt_ParticleTypeClass) */  /*0x645956*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_ParticleTypeClass) */  /*0x64595c*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_ParticleTypeClass) */  /*0x645963*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_ParticleTypeClass) */  /*0x64596a*/
  AbstractClass::AnnounceExpiredPointer(&a3->ArrayIndex, 1); /*0x645971*/
  ParticleTypeClass *v7; // [esp+4h] [ebp-4h] BYREF
  v7 = a3; /*0x645986*/
  int v3; // eax
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
  v7 = a3; /*0x6459cf*/
  int v4; // eax
  v4 = (*(int (**)(char *, ParticleTypeClass **))(*(unsigned int *)&DataGlobal_A83D98 + 16))( /*0x6459d3*/
         &DataGlobal_A83D98,
         &v7);
  if ( v4 != -1 && v4 < *(int *)&g_BuildingTypeInitState ) /*0x6459e3*/
  {
    --*(unsigned int *)&g_BuildingTypeInitState; /*0x6459e8*/
    for ( ; /*0x6459ee*/
    v4 < *(int *)&g_BuildingTypeInitState;
    *(unsigned int *)(*(unsigned int *)&g_BuildingProductionQueue + 4 * v4 - 4) = *(unsigned int *)(*(unsigned int *)&g_BuildingProductionQueue
    + 4 * v4) )
    {
      ++v4; /*0x6459f6*/
    }
  }
  CampaignClass *ParticleTypeClass_field_0x2BC; // eax
  ParticleTypeClass_field_0x2BC = a3->ParticleTypeClass_field_0x2BC; /*0x645a08*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_VectorClass) */  /*0x645a0e*/
  if ( ParticleTypeClass_field_0x2BC && a3->__pad_2C0[5] ) /*0x645a1c*/
  {
    __3_YAXPAX_Z(ParticleTypeClass_field_0x2BC); /*0x645a27*/
    a3->ParticleTypeClass_field_0x2BC = 0; /*0x645a2f*/
  }
  a3->__pad_2C0[5] = 0; /*0x645a3b*/
  *(unsigned int *)a3->__pad_2C0 = 0; /*0x645a42*/
  ObjectTypeClass::Destruct((int)a3); /*0x645a4c*/
  if ( (a3 & 1) != 0 ) /*0x645a56*/
    __3_YAXPAX_Z(a3); /*0x645a59*/
  return &a3->ArrayIndex; /*0x645a63*/

}
} // namespace gamemd

// 0x645A70
namespace gamemd {
unsigned int * ParticleTypeClass::Constructor(int a2, int a3, void *a3_2, void *a4)
{

  a3_2->ParticleTypeClass_field_28C = 0; /*0x645a7d*/
  a3_2->BehavesLike = a3_2; /*0x645a80*/
  (*((unsigned char *)&(a3_2->ParticleTypeClass_field_0xC))) = 1; /*0x645a83*/
  (((unsigned char *)&(a3_2->ParticleTypeClass_field_0xC))[1]) = 0; /*0x645a87*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_VectorClass) */  /*0x645a8a*/
  if ( a3_2 ) /*0x645a90*/
  {
    if ( a3_2 ) /*0x645a98*/
    {
      if ( a3_2 - 1 >= 0 ) /*0x645a9f*/
      {
        unsigned char *v4; // eax
        v4 = (unsigned char *)(a3_2 + 2); /*0x645aa1*/
        int v5 = a3_2; // ecx /*0x645aa4*/
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
      a3_2->ParticleTypeClass_field_28C = a3_2; /*0x645ab3*/
    }
    else
    {
      char *v6; // eax
      v6 = (char *)operator new(3 * a3_2); /*0x645abc*/
      if ( v6 ) /*0x645ac6*/
      {
        if ( a3_2 - 1 >= 0 ) /*0x645acd*/
        {
          unsigned char *v7 = v6 + 2; // ecx /*0x645acf*/
          int v8 = a3_2; // edx /*0x645ad2*/
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
      a3_2->ParticleTypeClass_field_28C = v6; /*0x645ae5*/
      (((unsigned char *)&(a3_2->ParticleTypeClass_field_0xC))[1]) = 1; /*0x645ae8*/
    }
  }
  /* X11: vtable install elided (X67 recv-slot, RHS vt_DynamicVectorClass) */  /*0x645aec*/
  a3_2->Damage = 10; /*0x645af2*/
  a3_2->ParticleTypeClass_field_0x10 = 0; /*0x645af9*/
  return &a3_2->ArrayIndex; /*0x645afe*/
}
}
// 0x477930
namespace gamemd {
unsigned int ParticleTypeClass::LoadTypeData(int a2)
{
  if ( (this->ptr_C) ) /*0x477930*/
    return (a2 - *&this->ptr_4) / 3u; /*0x47794e*/
  else
    return 0; /*0x477937*/
}
} // namespace gamemd

// 0x477AC0
namespace gamemd {
TypeList_flat * ParticleTypeClass::QueryInterface(char a2, int a3, int a4, int a5, int a6, int a7, int a8, int aP0, int aP1, int aP2, int a1)
{

  void *v3 = this->ptr_4; // eax /*0x477ac3*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x477ac6) */
  if ( v3 && this->ParticleTypeClass_field_2BC ) /*0x477ad0*/
  {
    operator delete((v3)); /*0x477ad8*/
    this->ptr_4 = 0; /*0x477ae0*/
  }
  this->ParticleTypeClass_field_2BC = 0; /*0x477aeb*/
  this->ptr_8 = 0; /*0x477af1*/
  if ( (a2 & 1) != 0 ) /*0x477af8*/
    operator delete((this)); /*0x477afb*/
  return this; /*0x477b05*/
}
} // namespace gamemd

// 0x4785F0
namespace gamemd {
int ParticleTypeClass::Init(unsigned char * a2, void *a2_1)
{

  int m_10 = *&this->uniqueId; // esi /*0x4785f2*/
  int result = 0; // eax /*0x4785f5*/
  if ( m_10 <= 0 ) /*0x4785fa*/
    return -1; /*0x478621*/
  unsigned char *i; // ecx
  for ( i = *&this->ptr_4; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x478600*/
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
  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)aP0, aP1, aP2); /*0x6457b3*/
  if ( result >= 0 ) /*0x6457ba*/
  {
    int v4; // edx
    v4 = *(unsigned int *)aP1; /*0x6457c2*/
    aP2 = (int)aP0->aP2; /*0x6457ce*/
    result = (*(int (__stdcall **)(int, int *, int, unsigned int))(v4 + 16))(aP1, &aP2, 4, 0); /*0x6457d2*/
    if ( result >= 0 ) /*0x6457d7*/
    {
      int v5 = 0; // ebp /*0x6457dd*/
      if ( aP2 > 0 ) /*0x6457e1*/
      {
        int v6 = 0; // edi /*0x6457e3*/
        do /*0x645806*/
        {
          if ( (*(int (__stdcall **)(int, char *, int, unsigned int))(*(unsigned int *)aP1 + 16))( /*0x6457fa*/
                 aP1,
                 (char *)aP0->strength + v6,
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
