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

  v2 = *(void **)((char *)this + 4); /*0x477906*/
  *((unsigned int *)this + 4) = 0; /*0x477909*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x477910*/
  {
    RA2_OPDEL(v2); /*0x477916*/
    *((unsigned int *)this + 1) = 0; /*0x47791e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x477921*/
  *((unsigned int *)this + 2) = 0; /*0x477924*/

}
}
// 0x4784F0
namespace gamemd {
AbstractClass * * ParticleTypeClass::Release(int a2, char * a3)
{

  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  unsigned char *v7; // ecx
  int v8; // edx
  unsigned char *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  char *v14; // ebx
  AbstractClass ** v15;

  v3 = a2; /*0x4784f2*/
  if ( a2 ) /*0x4784fe*/
  {
    v5 = a3; /*0x478504*/
    *((unsigned char *)this + 12) = 0; /*0x478508*/
    if ( a3 ) /*0x47850d*/
    {
      if ( a2 - 1 >= 0 ) /*0x478546*/
      {
        v9 = (unsigned char *)(a3 + 2);
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
      v6 = (char *)RA2_OPNEW(3 * a2); /*0x478514*/
      if ( v6 ) /*0x47851e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478525*/
        {
          v7 = (unsigned char *)(v6 + 2);
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
        v5 = v6; /*0x478539*/
      }
      else
      {
        v5 = 0; /*0x47853d*/
      }
    }
    *((unsigned char *)this + 12) = 1; /*0x47855c*/
    if ( !v5 ) /*0x478560*/
      return 0; /*0x4785e2*/
    if ( *((unsigned int *)this + 1) ) /*0x478562*/
    {
      v11 = *((unsigned int *)this + 2); /*0x478567*/
      if ( a2 < v11 ) /*0x47856c*/
        v11 = a2; /*0x47856e*/
      if ( v11 > 0 ) /*0x478572*/
      {
        v12 = 0; /*0x478574*/
        do /*0x478590*/
        {
          v13 = *((unsigned int *)this + 1) + v12; /*0x47857b*/
          v14 = &v5[v12]; /*0x47857d*/
          v12 += 3; /*0x478580*/
          --v11; /*0x478583*/
          *(unsigned short *)v14 = *(unsigned short *)v13; /*0x478587*/
          v14[2] = *(unsigned char *)(v13 + 2); /*0x47858d*/
        }
        while ( v11 ); /*0x478590*/
        v3 = a2; /*0x478592*/
      }
      if ( *((unsigned char *)this + 13) ) /*0x478598*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x4785a1*/
        *((unsigned int *)this + 1) = 0; /*0x4785a9*/
      }
    }
    *((unsigned int *)this + 1) = v5; /*0x4785b4*/
    *((unsigned int *)this + 2) = v3; /*0x4785ba*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x4785bd*/
  }
  else
  {
    char ParticleTypeClass::Release(_DynamicVectorClass_VRGBClass *this, int a2, char *a3)
  }
  v15 = (gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)(*((unsigned int *)this + 2))));
  if ( v15 < *((unsigned int *)this + 4) ) /*0x4785d1*/
    *((unsigned int *)this + 4) = v15; /*0x4785d3*/
  return 1; /*0x4785d6*/

}
}
// 0x4788E0
namespace gamemd {
void ParticleTypeClass::EnsureCapacity(unsigned int * a2)
{

  int v3; // edi
  char *v4; // eax
  unsigned char *v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // edi

  if ( this == (gamemd::ParticleTypeClass *)(a2) ) /*0x4788ec*/
    return this; /*0x4788ec*/
  (*((void (**)(ParticleTypeClass *))this->ArrayIndex + 3))(this);;
  v3 = a2[2]; /*0x4788f7*/
  *((unsigned int *)this + 2) = v3; /*0x4788fe*/
  if ( !v3 ) /*0x478901*/
  {
    *((unsigned int *)this + 1) = 0; /*0x478974*/
    *((unsigned char *)this + 13) = 0; /*0x478977*/
    return this; /*0x47897a*/
  }
  v4 = (char *)RA2_OPNEW(3 * v3); /*0x478907*/
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
  *((unsigned int *)this + 1) = v4; /*0x478932*/
  if ( !v4 ) /*0x478935*/
    return this; /*0x478935*/
  v7 = *((unsigned int *)this + 2); /*0x478937*/
  v8 = 0; /*0x47893a*/
  *((unsigned char *)this + 13) = 1; /*0x47893e*/
  if ( v7 <= 0 ) /*0x478942*/
    return this; /*0x478942*/
  v9 = 0; /*0x478944*/
  do /*0x478969*/
  {
    v10 = a2[1] + v9; /*0x47894e*/
    v11 = *((unsigned int *)this + 1) + v9; /*0x478952*/
    ++v8; /*0x478954*/
    v9 += 3; /*0x478958*/
    *(unsigned short *)v11 = *(unsigned short *)v10; /*0x47895b*/
    *(unsigned char *)(v11 + 2) = *(unsigned char *)(v10 + 2); /*0x478961*/
  }
  while ( v8 < *((unsigned int *)this + 2) ); /*0x478969*/
  return this; /*0x47896d*/

}
}
// 0x644F50
namespace gamemd {
void ParticleTypeClass::ParticleTypeClass_LoadFromINI(uint8_t *** aP1)
{
    unsigned int v40 = 0;  /* G37 hoist */

  INIClass *inited; // eax
  unsigned int *RGBColorList; // ebp
  int Int_Overwrite; // eax
  int v6; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  CCINIClass *v10; // ecx
  int v11; // eax
  int v12; // eax
  double v13; // st7
  double Double_Overwrite; // st7
  CCINIClass *v15; // eax
  int v16; // eax
  char v17; // cl
  char Bool_Overwrite; // al
  char v19; // al
  char v20; // al
  char v21; // cl
  char v22; // al
  int *v23; // edx
  INIClass *eax5d; // eax
  double v25; // st7
  CCINIClass *v24; // ecx
  int eax5e; // eax
  int v28; // eax
  CCINIClass *v27; // ecx
  int v30; // eax
  int *Coord2; // eax
  int Coord; // eax
  int eax5j; // eax
  int16_t v34; // dx
  char al5d; // al
  int v36; // ebp
  unsigned int *v37; // eax
  ParticleTypeClass *v33; // eax
  int v39; // ecx
  ObjectClass *v35; // edx
  int v41; // ebx
  char **v42; // edi
  void **v44[2]; // [esp-14h] [ebp-F8h] BYREF
  VectorClass *v40; // [esp-Ch] [ebp-F0h]
  uint8_t *p_ownsFile; // [esp-8h] [ebp-ECh]
  INIClass *v47; // [esp-4h] [ebp-E8h]
  CCINIClass *v43; // [esp+0h] [ebp-E4h] OVERLAPPED
  int aP3_4; // [esp+4h] [ebp-E0h]
  CCINIClass v50; // [esp+18h] [ebp-CCh] BYREF

  INIClass::ResetSection(aP1); /*0x644f65*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x644f6d*/
    return 0; /*0x645417*/
  ParticleTypeClass::Constructor(v44, 0, 0); /*0x644f85*/
  v44[0] = &vt_TypeList_RGBClass; /*0x644f8a*/
  inited = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)((char *)this + 36)); /*0x644f9a*/
  RGBColorList = (unsigned int *)INIClass::ReadRGBColorList( /*0x644fac*/
                             aP1,
                             (int)&v50.__pad_20[4],
                             (uint8_t *)inited,
                             (uint8_t *)&stru_830620.__pad_579C[5252],
                             v44[0],
                             v44[1],
                             (int)v40,
                             (int16_t)p_ownsFile,
                             (int)v47,
                             (int)v43,
                             aP3_4);
  ParticleTypeClass::EnsureCapacity((unsigned int *)((char *)this + 696), RGBColorList); /*0x644fb5*/
  *((unsigned int *)this + 178) = RGBColorList[4]; /*0x644fbd*/
  *((unsigned int *)this + 179) = RGBColorList[5]; /*0x644fc6*/
  *((unsigned int *)this + 180) = RGBColorList[6]; /*0x644fd3*/
  *(unsigned int *)&v50.__pad_20[4] = &vt_VectorClass_RGBClass; /*0x644fd9*/
  FilePipe_38::ddtor((int)&v50.__pad_20[4]); /*0x644fe1*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644ff5*/
                    (int)aP1,
                    (uint8_t *)((char *)this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[5244],
                    *(INIClass **)((char *)this + 732));
  aP3_4 = *((unsigned int *)this + 184); /*0x645002*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5236]; /*0x645003*/
  v47 = (INIClass *)((char *)this + 36); /*0x645008*/
  *((unsigned int *)this + 183) = Int_Overwrite; /*0x645009*/
  *((unsigned int *)this + 184) = INIClass::ReadInt_Overwrite((int)aP1, (uint8_t *)v47, v43, (INIClass *)aP3_4); /*0x645014*/
  v6 = INIClass::ReadInt_Overwrite((int)aP1, (uint8_t *)((char *)this + 36), &stru_81859C, *(INIClass **)((char *)this + 744)); /*0x645029*/
  v7 = *((unsigned int *)this + 185); /*0x64502e*/
  aP3_4 = 128; /*0x645038*/
  v43 = (CCINIClass *)&v50.CCINIClass_field_4C; /*0x64503d*/
  v47 = (INIClass *)&g_abs_87F8E4; /*0x64503e*/
  p_ownsFile = &unk_8183B4; /*0x645043*/
  v40 = (VectorClass *)((char *)this + 36); /*0x645048*/
  *((unsigned int *)this + 186) = v6; /*0x64504b*/
  if ( INIClass::GetString(aP1, (INIClass *)v40, p_ownsFile, v47, (INIClass *)v43, aP3_4) ) /*0x645051*/
    v8 = WarheadTypeClass::FindOrCreate((char *)&v50.CCINIClass_field_4C); /*0x64505e*/
  else
    v8 = v7; /*0x645065*/
  aP3_4 = *((unsigned int *)this + 187); /*0x64506f*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5224]; /*0x645070*/
  v47 = (INIClass *)((char *)this + 36); /*0x645075*/
  *((unsigned int *)this + 185) = v8; /*0x645076*/
  *((unsigned int *)this + 187) = INIClass::ReadInt_Overwrite((int)aP1, (uint8_t *)v47, v43, (INIClass *)aP3_4); /*0x645081*/
  v9 = INIClass::ReadInt_Overwrite( /*0x645096*/
         (int)aP1,
         (uint8_t *)((char *)this + 36),
         (CCINIClass *)&stru_830620.__pad_579C[5208],
         *(INIClass **)((char *)this + 752));
  v10 = *(CCINIClass **)((char *)this + 756); /*0x64509b*/
  *((unsigned int *)this + 188) = v9; /*0x6450a1*/
  v11 = INIClass::ReadInt_Overwrite((int)aP1, (uint8_t *)((char *)this + 36), &unk_818524, (INIClass *)v10); /*0x6450b0*/
  aP3_4 = *((unsigned int *)this + 190); /*0x6450bd*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5196]; /*0x6450be*/
  v47 = (INIClass *)((char *)this + 36); /*0x6450c3*/
  *((unsigned int *)this + 189) = v11; /*0x6450c4*/
  v12 = INIClass::ReadInt_Overwrite((int)aP1, (uint8_t *)v47, v43, (INIClass *)aP3_4); /*0x6450ca*/
  v13 = *(float *)((char *)this + 764); /*0x6450cf*/
  *((unsigned int *)this + 190) = v12; /*0x6450da*/
  *(double *)&v43 = v13; /*0x6450e0*/
  *(float *)((char *)this + 764) = INIClass::ReadDouble_Overwrite( /*0x6450ee*/
                             (int)aP1,
                             (INIClass *)((char *)this + 36),
                             (uint8_t *)&stru_830620.__pad_579C[5184],
                             (INIClass *)IDA_LODWORD(v13));
  *(double *)&v43 = *(float *)((char *)this + 768); /*0x6450ff*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x645108*/
                       (int)aP1,
                       (INIClass *)((char *)this + 36),
                       (uint8_t *)&stru_830620.__pad_579C[5176],
                       (INIClass *)v43);
  v15 = *(CCINIClass **)((char *)this + 772); /*0x64510d*/
  *(float *)((char *)this + 768) = Double_Overwrite; /*0x645115*/
  v16 = INIClass::ReadInt_Overwrite( /*0x645122*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[5168],
          (INIClass *)v15);
  v17 = *((unsigned char *)this + 776); /*0x645127*/
  *((unsigned int *)this + 193) = v16; /*0x64512d*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x64513c*/
                     (int)aP1,
                     (uint8_t *)((char *)this + 36),
                     (CCINIClass *)&stru_830620.__pad_579C[5148],
                     v17);
  aP3_4 = *((char *)this + 777); /*0x645148*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5136]; /*0x645149*/
  v47 = (INIClass *)((char *)this + 36); /*0x64514e*/
  *((unsigned char *)this + 776) = Bool_Overwrite; /*0x645151*/
  *((unsigned char *)this + 777) = INIClass::ReadInt_Overwrite((int)aP1, (uint8_t *)v47, v43, (INIClass *)aP3_4); /*0x64515c*/
  v19 = INIClass::ReadInt_Overwrite( /*0x645172*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[5120],
          (INIClass *)*((char *)this + 778));
  aP3_4 = *((char *)this + 779); /*0x64517e*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5104]; /*0x64517f*/
  v47 = (INIClass *)((char *)this + 36); /*0x645184*/
  *((unsigned char *)this + 778) = v19; /*0x645187*/
  *((unsigned char *)this + 779) = INIClass::ReadInt_Overwrite((int)aP1, (uint8_t *)v47, v43, (INIClass *)aP3_4); /*0x645192*/
  *((unsigned char *)this + 782) = INIClass::ReadInt_Overwrite( /*0x6451ae*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[5084],
                             (INIClass *)*(uint8_t *)((char *)this + 782));
  v20 = INIClass::ReadInt_Overwrite( /*0x6451c5*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[5064],
          (INIClass *)*(uint8_t *)((char *)this + 781));
  v21 = *((unsigned char *)this + 783); /*0x6451ca*/
  *((unsigned char *)this + 781) = v20; /*0x6451d0*/
  v22 = INIClass::ReadBool_Overwrite((int)aP1, (uint8_t *)((char *)this + 36), &unk_818610, v21); /*0x6451df*/
  v23 = *(int **)((char *)this + 692); /*0x6451e4*/
  *((unsigned char *)this + 783) = v22; /*0x6451ea*/
  eax5d = *(INIClass **)((char *)this + 688); /*0x6451f0*/
  aP3_4 = (int)v23; /*0x6451f6*/
  v25 = INIClass::ReadDouble_Overwrite( /*0x645200*/
          (int)aP1,
          (INIClass *)((char *)this + 36),
          (uint8_t *)&stru_830620.__pad_579C[5052],
          eax5d);
  v24 = *(CCINIClass **)((char *)this + 672); /*0x645205*/
  *(double *)((char *)this + 688) = v25; /*0x64520b*/
  eax5e = INIClass::ReadInt_Overwrite( /*0x64521a*/
            (int)aP1,
            (uint8_t *)((char *)this + 36),
            (CCINIClass *)&stru_830620.__pad_579C[5040],
            (INIClass *)v24);
  aP3_4 = *((unsigned int *)this + 169); /*0x645227*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5028]; /*0x645228*/
  v47 = (INIClass *)((char *)this + 36); /*0x64522d*/
  *((unsigned int *)this + 168) = eax5e; /*0x64522e*/
  *((unsigned int *)this + 169) = INIClass::ReadInt_Overwrite((int)aP1, (uint8_t *)v47, v43, (INIClass *)aP3_4); /*0x645239*/
  v28 = INIClass::ReadInt_Overwrite( /*0x64524e*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[5012],
          *(INIClass **)((char *)this + 680));
  v27 = *(CCINIClass **)((char *)this + 684); /*0x645253*/
  *((unsigned int *)this + 170) = v28; /*0x645259*/
  v30 = INIClass::ReadInt_Overwrite( /*0x645268*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[4996],
          (INIClass *)v27);
  aP3_4 = (char *)this + 660; /*0x645277*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[4976]; /*0x645278*/
  v47 = (INIClass *)((char *)this + 36); /*0x64527d*/
  p_ownsFile = (uint8_t *)&v50.ownsFile; /*0x64527e*/
  *((unsigned int *)this + 171) = v30; /*0x645281*/
  Coord2 = INIClass::GetCoord2(aP1, (int *)p_ownsFile, (CCINIClass *)v47, (uint8_t *)v43, (int *)aP3_4); /*0x645287*/
  *((unsigned int *)this + 165) = *Coord2; /*0x64528e*/
  *((unsigned int *)this + 166) = Coord2[1]; /*0x645298*/
  *((unsigned int *)this + 167) = Coord2[2]; /*0x64529e*/
  Coord = INIClass::GetCoord( /*0x6452b1*/
            aP1,
            &v50,
            (INIClass *)((char *)this + 36),
            (Color *)&stru_830620.__pad_579C[4964],
            (Color *)((char *)this + 724));
  *((unsigned short *)this + 362) = *(unsigned short *)Coord; /*0x6452bd*/
  *((unsigned char *)this + 726) = *(unsigned char *)(Coord + 2); /*0x6452c4*/
  eax5j = INIClass::GetCoord( /*0x6452d7*/
            aP1,
            &v50,
            (INIClass *)((char *)this + 36),
            (Color *)&stru_830620.__pad_579C[4952],
            (Color *)((char *)this + 727));
  v34 = *(unsigned short *)eax5j; /*0x6452e3*/
  aP3_4 = *((char *)this + 777); /*0x6452e6*/
  *(unsigned short *)((char *)this + 727) = v34; /*0x6452e7*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[4932]; /*0x6452eb*/
  IDA_LOBYTE(eax5j) = *(unsigned char *)(eax5j + 2); /*0x6452f0*/
  v47 = (INIClass *)((char *)this + 36); /*0x6452f3*/
  *((unsigned char *)this + 729) = eax5j; /*0x6452f6*/
  al5d = INIClass::ReadInt_Overwrite((int)aP1, (uint8_t *)v47, v43, (INIClass *)aP3_4); /*0x6452f9*/
  aP3_4 = 32; /*0x645302*/
  v43 = (CCINIClass *)v50.headNode; /*0x645304*/
  v47 = 0; /*0x645305*/
  p_ownsFile = (uint8_t *)&stru_830620.__pad_579C[4916]; /*0x645307*/
  v40 = (VectorClass *)((char *)this + 36); /*0x64530c*/
  *((unsigned char *)this + 780) = al5d; /*0x64530f*/
  if ( INIClass::GetString(aP1, (INIClass *)v40, p_ownsFile, v47, (INIClass *)v43, aP3_4) ) /*0x645315*/
  {
    if ( _strcmpi((char *)v50.headNode, (char *)&stru_817460.sectionHead[1]) ) /*0x64532c*/
    {
      v36 = 0; /*0x64533d*/
      if ( (int)g_abs_A83DA8 <= 0 ) /*0x645341*/
      {
LABEL_10:
        v37 = (unsigned int *)RA2_OPNEW(0x318u); /*0x64536b*/
        if ( v37 ) /*0x64537a*/
          v33 = (ParticleTypeClass *)BuildingTypeClass::Construct(v37, (AbstractClass *)v50.headNode); /*0x645383*/
        else
          v33 = 0; /*0x64538a*/
        v39 = 0; /*0x645392*/
        if ( (int)g_abs_A83DA8 <= 0 ) /*0x645396*/
        {
LABEL_17:
          v39 = -1; /*0x6453aa*/
        }
        else
        {
          v35 = (ObjectClass *)g_abs_A83D9C; /*0x645398*/
          while ( *(ParticleTypeClass **)v35->__pad_0 != v33 ) /*0x6453a0*/
          {
            ++v39; /*0x6453a2*/
            v35 = (ObjectClass *)((char *)v35 + 4); /*0x6453a3*/
            if ( v39 >= (int)g_abs_A83DA8 ) /*0x6453a8*/
              goto LABEL_17; /*0x6453a8*/
          }
        }
        v36 = v39; /*0x6453ad*/
      }
      else
      {
        while ( _strcmpi((char *)v50.headNode, (char *)(*(unsigned int *)&g_abs_A83D9C->__pad_0[4 * v36] + 36)) ) /*0x64535f*/
        {
          if ( ++v36 >= (int)g_abs_A83DA8 ) /*0x645369*/
            goto LABEL_10; /*0x645369*/
        }
      }
    }
    else
    {
      v36 = -1; /*0x6453b1*/
    }
    *((unsigned int *)this + 196) = v36; /*0x6453b4*/
  }
  IDA_LOBYTE(v50.headNode[0]) = 0; /*0x6453cb*/
  INIClass::GetString( /*0x6453d0*/
    aP1,
    (INIClass *)((char *)this + 36),
    (uint8_t *)&stru_830620.__pad_579C[4744],
    0,
    (INIClass *)v50.headNode,
    32);
  v41 = 0; /*0x6453d5*/
  v42 = (char **)&stru_830620.__pad_579C[4864]; /*0x6453d7*/
  while ( _strcmpi((char *)v50.headNode, *v42) ) /*0x6453ee*/
  {
    ++v42; /*0x6453f0*/
    ++v41; /*0x6453f3*/
    if ( (int)v42 >= (int)&stru_830620.__pad_579C[4884] ) /*0x6453fa*/
    {
      v41 = -1; /*0x6453fc*/
      break; /*0x6453fc*/
    }
  }
  *((unsigned int *)this + 197) = v41; /*0x6453ff*/
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

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6454e9*/
  Power::TimerProcess(*((unsigned int *)this + 183)); /*0x6454f7*/
  Power::TimerProcess(*((unsigned int *)this + 184)); /*0x645505*/
  Power::TimerProcess(*((unsigned int *)this + 186)); /*0x645513*/
  Power::TimerProcess(*((unsigned int *)this + 187)); /*0x645521*/
  Power::TimerProcess(*((unsigned int *)this + 188)); /*0x64552f*/
  Power::TimerProcess(*((unsigned int *)this + 189)); /*0x64553d*/
  Power::TimerProcess(*((unsigned int *)this + 190)); /*0x64554b*/
  Checksummer::Add_float(*((unsigned int *)this + 191)); /*0x645559*/
  Checksummer::Add_float(*((unsigned int *)this + 192)); /*0x645567*/
  Power::TimerProcess(*((unsigned int *)this + 193)); /*0x645575*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 776); /*0x64557a*/
  Power::FlagProcess(a2, v3); /*0x645583*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 777); /*0x645588*/
  v5 = Power::FinalizeDrain(a2, v4); /*0x645591*/
  IDA_LOBYTE(v5) = *((unsigned char *)this + 778); /*0x645596*/
  Power::FinalizeDrain(a2, v5); /*0x64559f*/
  IDA_LOBYTE(v6) = *((unsigned char *)this + 779); /*0x6455a4*/
  Power::FinalizeDrain(a2, v6); /*0x6455ad*/
  Power::TimerProcess(*(uint8_t *)((char *)this + 781)); /*0x6455bd*/
  Power::TimerProcess(*(uint8_t *)((char *)this + 782)); /*0x6455cd*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 783); /*0x6455d2*/
  Power::FlagProcess(a2, v7); /*0x6455db*/
  Power::TimerProcess(*((unsigned int *)this + 196)); /*0x6455e9*/
  Power::TimerProcess(*((unsigned int *)this + 197)); /*0x6455f7*/
  return Checksummer::Add_double(*((unsigned int *)this + 172), *((unsigned int *)this + 173)); /*0x645611*/

}
}
// 0x645660
namespace gamemd {
int ParticleTypeClass::SaveLoad_Prefix(int a1, int a2)
{

  int *v2; // ebp
  int v3; // edi
  int result; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // [esp+28h] [ebp-4h]

  v2 = (int *)a2; /*0x645663*/
  v3 = a1; /*0x645669*/
  result = ObjectTypeClass::LoadCleanup(a1, a2); /*0x64566f*/
  if ( result >= 0 ) /*0x645678*/
  {
    if ( v3 ) /*0x645680*/
    {
      ObjectTypeClass::Construct((unsigned int *)v3, (int)&a2); /*0x645689*/
      ParticleTypeClass::Constructor((unsigned int *)(v3 + 696), 0, 0); /*0x645698*/
      *(unsigned int *)(v3 + 696) = &vt_TypeList_RGBClass; /*0x64569d*/
      *(unsigned int *)v3 = &vt_ParticleTypeClass; /*0x6456a3*/
      *(unsigned int *)(v3 + 4) = &vt_ParticleTypeClass; /*0x6456a9*/
      *(unsigned int *)(v3 + 8) = &vt_ParticleTypeClass; /*0x6456b0*/
      *(unsigned int *)(v3 + 12) = &vt_ParticleTypeClass; /*0x6456b7*/
    }
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v3 + 740)); /*0x6456ca*/
    v5 = *v2; /*0x6456cf*/
    a1 = 0; /*0x6456db*/
    result = (*(int (**)(int *, int *, int, unsigned int))(v5 + 12))(v2, &a1, 4, 0); /*0x6456df*/
    if ( result >= 0 ) /*0x6456e4*/
    {
      v14 = 0; /*0x6456ee*/
      if ( a1 <= 0 ) /*0x6456f4*/
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
          result = (*(int (**)(int *, int *, int, unsigned int))(v6 + 12))(v2, &a2, 3, 0); /*0x645712*/
          if ( result < 0 ) /*0x645717*/
            break; /*0x645717*/
          v7 = *(unsigned int *)(v3 + 704); /*0x645719*/
          if ( *(unsigned int *)(v3 + 712) < v7 /*0x645747*/
            || (*(unsigned char *)(v3 + 709) || !v7)
            && (v8 = *(unsigned int *)(v3 + 716), v8 > 0)
            && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v3 + 696) + 8))(v3 + 696, v7 + v8, 0) )
          {
            v9 = *(unsigned int *)(v3 + 712); /*0x64574e*/
            v10 = v9 + 1; /*0x645751*/
            v11 = 3 * v9; /*0x645754*/
            v12 = *(unsigned int *)(v3 + 700); /*0x645757*/
            *(unsigned int *)(v3 + 712) = v10; /*0x64575a*/
            v13 = v12 + v11; /*0x64575d*/
            *(unsigned short *)v13 = a2; /*0x645764*/
            *(unsigned char *)(v13 + 2) = IDA_BYTE2(a2); /*0x64576b*/
          }
          if ( ++v14 >= a1 ) /*0x64577d*/
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

  result = *((unsigned int *)this + 185); /*0x6458b0*/
  if ( result == a2 ) /*0x6458bc*/
    *((unsigned int *)this + 185) = 0; /*0x6458be*/
  return result; /*0x6458c8*/

}
}
// 0x645950
namespace gamemd {
ParticleTypeClass * ParticleTypeClass::ddtor(void ** Block, char a2)
{

  int v3; // eax
  int v4; // eax
  void *v5; // eax
  void **v7; // [esp+4h] [ebp-4h] BYREF

  *Block = &vt_ParticleTypeClass; /*0x645956*/
  *(Block + 1) = &vt_ParticleTypeClass; /*0x64595c*/
  *(Block + 2) = &vt_ParticleTypeClass; /*0x645963*/
  *(Block + 3) = &vt_ParticleTypeClass; /*0x64596a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x645971*/
  v7 = Block; /*0x645986*/
  v3 = (*(int (**)(int *, void ***))(g_abs_B0F670 + 16))(&g_abs_B0F670, &v7); /*0x64598a*/
  if ( v3 != -1 && v3 < (int)((int))((int))(g_abs_B0F680) && v3 < --g_abs_B0F680 ) /*0x6459a5*/
  {
    do /*0x6459bd*/
    {
      ++v3; /*0x6459ad*/
      *((unsigned int *)g_abs_B0F674 + v3 - 1) = *((unsigned int *)g_abs_B0F674 + v3); /*0x6459b1*/
    }
    while ( v3 < (int)((int))((int))(g_abs_B0F680) ); /*0x6459bd*/
  }
  v7 = Block; /*0x6459cf*/
  v4 = (*(int (**)(int *, void ***))(g_abs_A83D98 + 16))(&g_abs_A83D98, &v7); /*0x6459d3*/
  if ( v4 != -1 && v4 < (int)(g_abs_A83DA8) && v4 < (int)((int))(--g_abs_A83DA8) ) /*0x6459ee*/
  {
    do /*0x645a06*/
    {
      ++v4; /*0x6459f6*/
      *((unsigned int *)g_abs_A83D9C + v4 - 1) = *((unsigned int *)g_abs_A83D9C + v4); /*0x6459fa*/
    }
    while ( v4 < (int)((int))(g_abs_A83DA8) ); /*0x645a06*/
  }
  v5 = *(Block + 175); /*0x645a08*/
  *(Block + 174) = &vt_VectorClass_RGBClass; /*0x645a0e*/
  if ( v5 && *((unsigned char *)Block + 709) ) /*0x645a1c*/
  {
    OperatorDelete(v5); /*0x645a27*/
    *(Block + 175) = 0; /*0x645a2f*/
  }
  *((unsigned char *)Block + 709) = 0; /*0x645a3b*/
  *(Block + 176) = 0; /*0x645a42*/
  ObjectTypeClass::Destruct((int)Block); /*0x645a4c*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x645a56*/
    OperatorDelete(Block); /*0x645a59*/
  return (ParticleTypeClass *)Block; /*0x645a63*/

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

  *((unsigned int *)this + 1) = 0; /*0x645a7d*/
  *((unsigned int *)this + 2) = a2; /*0x645a80*/
  *((unsigned char *)this + 12) = 1; /*0x645a83*/
  *((unsigned char *)this + 13) = 0; /*0x645a87*/
  *this = &vt_VectorClass_RGBClass; /*0x645a8a*/
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
      *((unsigned int *)this + 1) = a3; /*0x645ab3*/
    }
    else
    {
      v6 = (char *)RA2_OPNEW(3 * a2); /*0x645abc*/
      if ( v6 ) /*0x645ac6*/
      {
        if ( a2 - 1 >= 0 ) /*0x645acd*/
        {
          v7 = (unsigned char *)(v6 + 2);
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
      *((unsigned int *)this + 1) = v6; /*0x645ae5*/
      *((unsigned char *)this + 13) = 1; /*0x645ae8*/
    }
  }
  *this = (unsigned int *)(&vt_DynamicVectorClass_RGBClass);
  *((unsigned int *)this + 5) = 10; /*0x645af2*/
  *((unsigned int *)this + 4) = 0; /*0x645af9*/
  return this; /*0x645afe*/

}
}
// 0x477930
namespace gamemd {
unsigned int ParticleTypeClass::LoadTypeData(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x477930*/
    return (a2 - *((unsigned int *)this + 1)) / 3u; /*0x47794e*/
  else
    return 0; /*0x477937*/

}
} // namespace gamemd

// 0x477AC0
namespace gamemd {
TypeList_flat * ParticleTypeClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (unsigned int)((void *)*(Block + 1));
  *Block = &vt_VectorClass_RGBClass; /*0x477ac6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x477ad0*/
  {
    RA2_OPDEL(v3); /*0x477ad8*/
    *(Block + 1) = 0; /*0x477ae0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x477aeb*/
  *(Block + 2) = 0; /*0x477af1*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x477af8*/
    RA2_OPDEL(Block); /*0x477afb*/
  return (TypeList *)Block; /*0x477b05*/

}
} // namespace gamemd

// 0x4785F0
namespace gamemd {
int ParticleTypeClass::Init(unsigned char * a2)
{

  int v2; // esi
  int result; // eax
  unsigned char *i; // ecx

  v2 = *((char *)this + 4); /*0x4785f2*/
  result = 0; /*0x4785f5*/
  if ( v2 <= 0 ) /*0x4785fa*/
    return -1; /*0x478621*/
  for ( i = (unsigned char *)*((char *)this + 1); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x478600*/
  {
    if ( ++result >= v2 ) /*0x47861f*/
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

  result = ((AbstractClass *)(aP0))->SaveLoad_PrefixWrapper((ObjectTypeClass *)aP1, (TechnoTypeClass *)aP2); /*0x6457b3*/
  if ( result >= 0 ) /*0x6457ba*/
  {
    v4 = *(unsigned int *)aP1; /*0x6457c2*/
    aP2 = aP0->MyEffectivenessCoefficient; /*0x6457ce*/
    result = (*(int (**)(int, int *, int, unsigned int))(v4 + 16))(aP1, &aP2, 4, 0); /*0x6457d2*/
    if ( result >= 0 ) /*0x6457d7*/
    {
      v5 = 0; /*0x6457dd*/
      if ( aP2 > 0 ) /*0x6457e1*/
      {
        v6 = 0; /*0x6457e3*/
        do /*0x645806*/
        {
          if ( (*(int (**)(int, int, int, unsigned int))(*(unsigned int *)aP1 + 16))(aP1, v6 + aP0->?, 3, 0) < 0 ) /*0x6457fa*/
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
