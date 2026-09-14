// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x477900
namespace gamemd {
void ParticleTypeClass::GetClassIdentifier()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ParticleTypeClass::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x477906*/
  this->ParticleTypeClass_field_0x10 = 0; /*0x477909*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x477910*/
  {
    __3_YAXPAX_Z(v2); /*0x477916*/
    this->ParticleTypeClass_field_28C = 0; /*0x47791e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x477921*/
  this->BehavesLike = 0; /*0x477924*/
}
}
} // namespace gamemd

// 0x477AC0
namespace gamemd {
TypeList * ParticleTypeClass::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_RGBClass;
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
} // namespace gamemd

// 0x4784F0
namespace gamemd {
char ParticleTypeClass::Release(int a2, char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ParticleTypeClass::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx
  _BYTE *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x4784f2*/
  if ( a2 ) /*0x4784fe*/
  {
    v5 = a3; /*0x478504*/
    *((_BYTE *)this + 12) = 0; /*0x478508*/
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
      v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x478514*/
      if ( v6 ) /*0x47851e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478525*/
        {
          v7 = v6 + 2; /*0x478527*/
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
    *((_BYTE *)this + 12) = 1; /*0x47855c*/
    if ( !v5 ) /*0x478560*/
      return 0; /*0x4785e2*/
    if ( this->ParticleTypeClass_field_28C ) /*0x478562*/
    {
      v11 = this->BehavesLike; /*0x478567*/
      if ( a2 < v11 ) /*0x47856c*/
        v11 = a2; /*0x47856e*/
      if ( v11 > 0 ) /*0x478572*/
      {
        v12 = 0; /*0x478574*/
        do /*0x478590*/
        {
          v13 = this->ParticleTypeClass_field_28C + v12; /*0x47857b*/
          v14 = &v5[v12]; /*0x47857d*/
          v12 += 3; /*0x478580*/
          --v11; /*0x478583*/
          *(_WORD *)v14 = *(_WORD *)v13; /*0x478587*/
          v14[2] = *(_BYTE *)(v13 + 2); /*0x47858d*/
        }
        while ( v11 ); /*0x478590*/
        v3 = a2; /*0x478592*/
      }
      if ( *((_BYTE *)this + 13) ) /*0x478598*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4785a1*/
        this->ParticleTypeClass_field_28C = 0; /*0x4785a9*/
      }
    }
    this->ParticleTypeClass_field_28C = v5; /*0x4785b4*/
    this->BehavesLike = v3; /*0x4785ba*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x4785bd*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4785c6*/
  }
  v15 = this->BehavesLike; /*0x4785c9*/
  if ( v15 < this->ParticleTypeClass_field_0x10 ) /*0x4785d1*/
    this->ParticleTypeClass_field_0x10 = v15; /*0x4785d3*/
  return 1; /*0x4785d6*/
}
}
} // namespace gamemd

// 0x4785F0
namespace gamemd {
int ParticleTypeClass::Init(unsigned char * a2)
{
{
    int v2;
    int result;
    char *i;
    v2 = this->ImpactParticle;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (char *)this->ParticleTypeClass_field_28C; *i != *a2 || i[1] != *((int*)(a2) + 1) || i[2] != *((int*)(a2) + 2); i += 3 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

// 0x4788E0
namespace gamemd {
unsigned int * ParticleTypeClass::EnsureCapacity(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4788E0(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  char *v4; // eax
  _BYTE *v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // edi

  if ( this == a2 ) /*0x4788ec*/
    return this; /*0x4788ec*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x4788f4*/
  v3 = a2[2]; /*0x4788f7*/
  *(this + 2) = v3; /*0x4788fe*/
  if ( !v3 ) /*0x478901*/
  {
    *(this + 1) = 0; /*0x478974*/
    *((_BYTE *)this + 13) = 0; /*0x478977*/
    return this; /*0x47897a*/
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
  *(this + 1) = v4; /*0x478932*/
  if ( !v4 ) /*0x478935*/
    return this; /*0x478935*/
  v7 = *(this + 2); /*0x478937*/
  v8 = 0; /*0x47893a*/
  *((_BYTE *)this + 13) = 1; /*0x47893e*/
  if ( v7 <= 0 ) /*0x478942*/
    return this; /*0x478942*/
  v9 = 0; /*0x478944*/
  do /*0x478969*/
  {
    v10 = a2[1] + v9; /*0x47894e*/
    v11 = *(this + 1) + v9; /*0x478952*/
    ++v8; /*0x478954*/
    v9 += 3; /*0x478958*/
    *(_WORD *)v11 = *(_WORD *)v10; /*0x47895b*/
    *(_BYTE *)(v11 + 2) = *(_BYTE *)(v10 + 2); /*0x478961*/
  }
  while ( v8 < *(this + 2) ); /*0x478969*/
  return this; /*0x47896d*/
}
}
} // namespace gamemd

// 0x644F50
namespace gamemd {
int ParticleTypeClass_LoadFromINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
char __thiscall ParticleTypeClass::LoadFromINI(int this, unsigned __int8 ***aP1)
{
  INIClass *inited; // eax
  _DWORD *RGBColorList; // ebp
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
  __int16 v34; // dx
  char al5d; // al
  int v36; // ebp
  _DWORD *v37; // eax
  ParticleTypeClass *v33; // eax
  int v39; // ecx
  ObjectClass *v35; // edx
  int v41; // ebx
  char **v42; // edi
  void **v44[2]; // [esp-14h] [ebp-F8h] BYREF
  VectorClass *v40; // [esp-Ch] [ebp-F0h]
  unsigned __int8 *p_ownsFile; // [esp-8h] [ebp-ECh]
  INIClass *v47; // [esp-4h] [ebp-E8h]
  CCINIClass *v43; // [esp+0h] [ebp-E4h] OVERLAPPED
  int aP3_4; // [esp+4h] [ebp-E0h]
  CCINIClass v50; // [esp+18h] [ebp-CCh] BYREF

  INIClass::ResetSection(aP1); /*0x644f65*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x644f6d*/
    return 0; /*0x645417*/
  ParticleTypeClass::Constructor(v44, 0, 0); /*0x644f85*/
  v44[0] = &vt_TypeList_RGBClass; /*0x644f8a*/
  inited = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(this + 36)); /*0x644f9a*/
  RGBColorList = (_DWORD *)INIClass::ReadRGBColorList( /*0x644fac*/
                             aP1,
                             (int)&v50.__pad_20[4],
                             (unsigned __int8 *)inited,
                             (unsigned __int8 *)&stru_830620.__pad_579C[5252],
                             v44[0],
                             v44[1],
                             (int)v40,
                             (__int16)p_ownsFile,
                             (int)v47,
                             (int)v43,
                             aP3_4);
  ParticleTypeClass::EnsureCapacity((_DWORD *)(this + 696), RGBColorList); /*0x644fb5*/
  this->ParticleTypeClass_field_0x2C8 = RGBColorList[4]; /*0x644fbd*/
  this->ParticleTypeClass_field_0x2CC = RGBColorList[5]; /*0x644fc6*/
  *(_DWORD *)(this + 720) = RGBColorList[6]; /*0x644fd3*/
  *(_DWORD *)&v50.__pad_20[4] = &vt_VectorClass_RGBClass; /*0x644fd9*/
  FilePipe_38::ddtor((int)&v50.__pad_20[4]); /*0x644fe1*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x644ff5*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[5244],
                    *(INIClass **)(this + 732));
  aP3_4 = this->ParticleTypeClass_field_0x2E0; /*0x645002*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5236]; /*0x645003*/
  v47 = (INIClass *)(this + 36); /*0x645008*/
  this->ParticleTypeClass_field_0x2DC = Int_Overwrite; /*0x645009*/
  this->ParticleTypeClass_field_0x2E0 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4); /*0x645014*/
  v6 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &stru_81859C, *(INIClass **)(this + 744)); /*0x645029*/
  v7 = this->ParticleTypeClass_field_0x2E4; /*0x64502e*/
  aP3_4 = 128; /*0x645038*/
  v43 = (CCINIClass *)&v50.CCINIClass_field_4C; /*0x64503d*/
  v47 = (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760]; /*0x64503e*/
  p_ownsFile = &unk_8183B4; /*0x645043*/
  v40 = (VectorClass *)(this + 36); /*0x645048*/
  this->ParticleTypeClass_field_0x2E8 = v6; /*0x64504b*/
  if ( INIClass::GetString(aP1, (INIClass *)v40, p_ownsFile, v47, (INIClass *)v43, aP3_4) ) /*0x645051*/
    v8 = WarheadTypeClass::FindOrCreate((char *)&v50.CCINIClass_field_4C); /*0x64505e*/
  else
    v8 = v7; /*0x645065*/
  aP3_4 = this->ParticleTypeClass_field_0x2EC; /*0x64506f*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5224]; /*0x645070*/
  v47 = (INIClass *)(this + 36); /*0x645075*/
  this->ParticleTypeClass_field_0x2E4 = v8; /*0x645076*/
  this->ParticleTypeClass_field_0x2EC = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4); /*0x645081*/
  v9 = INIClass::ReadInt_Overwrite( /*0x645096*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620.__pad_579C[5208],
         *(INIClass **)(this + 752));
  v10 = *(CCINIClass **)(this + 756); /*0x64509b*/
  this->ParticleTypeClass_field_0x2F0 = v9; /*0x6450a1*/
  v11 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &unk_818524, (INIClass *)v10); /*0x6450b0*/
  aP3_4 = this->ParticleTypeClass_field_0x2F8; /*0x6450bd*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5196]; /*0x6450be*/
  v47 = (INIClass *)(this + 36); /*0x6450c3*/
  this->ParticleTypeClass_field_0x2F4 = v11; /*0x6450c4*/
  v12 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4); /*0x6450ca*/
  v13 = *(float *)(this + 764); /*0x6450cf*/
  this->ParticleTypeClass_field_0x2F8 = v12; /*0x6450da*/
  *(double *)&v43 = v13; /*0x6450e0*/
  *(float *)(this + 764) = INIClass::ReadDouble_Overwrite( /*0x6450ee*/
                             (int)aP1,
                             (INIClass *)(this + 36),
                             (unsigned __int8 *)&stru_830620.__pad_579C[5184],
                             (INIClass *)LODWORD(v13));
  *(double *)&v43 = *(float *)(this + 768); /*0x6450ff*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x645108*/
                       (int)aP1,
                       (INIClass *)(this + 36),
                       (unsigned __int8 *)&stru_830620.__pad_579C[5176],
                       (INIClass *)v43);
  v15 = *(CCINIClass **)(this + 772); /*0x64510d*/
  *(float *)(this + 768) = Double_Overwrite; /*0x645115*/
  v16 = INIClass::ReadInt_Overwrite( /*0x645122*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[5168],
          (INIClass *)v15);
  v17 = *(_BYTE *)(this + 776); /*0x645127*/
  this->ParticleTypeClass_field_0x304 = v16; /*0x64512d*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x64513c*/
                     (int)aP1,
                     (unsigned __int8 *)(this + 36),
                     (CCINIClass *)&stru_830620.__pad_579C[5148],
                     v17);
  aP3_4 = *(char *)(this + 777); /*0x645148*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5136]; /*0x645149*/
  v47 = (INIClass *)(this + 36); /*0x64514e*/
  *(_BYTE *)(this + 776) = Bool_Overwrite; /*0x645151*/
  *(_BYTE *)(this + 777) = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4); /*0x64515c*/
  v19 = INIClass::ReadInt_Overwrite( /*0x645172*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[5120],
          (INIClass *)*(char *)(this + 778));
  aP3_4 = *(char *)(this + 779); /*0x64517e*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5104]; /*0x64517f*/
  v47 = (INIClass *)(this + 36); /*0x645184*/
  *(_BYTE *)(this + 778) = v19; /*0x645187*/
  *(_BYTE *)(this + 779) = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4); /*0x645192*/
  *(_BYTE *)(this + 782) = INIClass::ReadInt_Overwrite( /*0x6451ae*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[5084],
                             (INIClass *)*(unsigned __int8 *)(this + 782));
  v20 = INIClass::ReadInt_Overwrite( /*0x6451c5*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[5064],
          (INIClass *)*(unsigned __int8 *)(this + 781));
  v21 = *(_BYTE *)(this + 783); /*0x6451ca*/
  *(_BYTE *)(this + 781) = v20; /*0x6451d0*/
  v22 = INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &unk_818610, v21); /*0x6451df*/
  v23 = *(int **)(this + 692); /*0x6451e4*/
  *(_BYTE *)(this + 783) = v22; /*0x6451ea*/
  eax5d = *(INIClass **)(this + 688); /*0x6451f0*/
  aP3_4 = (int)v23; /*0x6451f6*/
  v25 = INIClass::ReadDouble_Overwrite( /*0x645200*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[5052],
          eax5d);
  v24 = *(CCINIClass **)(this + 672); /*0x645205*/
  *(double *)(this + 688) = v25; /*0x64520b*/
  eax5e = INIClass::ReadInt_Overwrite( /*0x64521a*/
            (int)aP1,
            (unsigned __int8 *)(this + 36),
            (CCINIClass *)&stru_830620.__pad_579C[5040],
            (INIClass *)v24);
  aP3_4 = this->ParticleTypeClass_field_0x2A4; /*0x645227*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[5028]; /*0x645228*/
  v47 = (INIClass *)(this + 36); /*0x64522d*/
  this->ParticleTypeClass_field_0x2A0 = eax5e; /*0x64522e*/
  this->ParticleTypeClass_field_0x2A4 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4); /*0x645239*/
  v28 = INIClass::ReadInt_Overwrite( /*0x64524e*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[5012],
          *(INIClass **)(this + 680));
  v27 = *(CCINIClass **)(this + 684); /*0x645253*/
  this->ParticleTypeClass_field_0x2A8 = v28; /*0x645259*/
  v30 = INIClass::ReadInt_Overwrite( /*0x645268*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[4996],
          (INIClass *)v27);
  aP3_4 = this + 660; /*0x645277*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[4976]; /*0x645278*/
  v47 = (INIClass *)(this + 36); /*0x64527d*/
  p_ownsFile = (unsigned __int8 *)&v50.ownsFile; /*0x64527e*/
  this->ParticleTypeClass_field_0x2AC = v30; /*0x645281*/
  Coord2 = INIClass::GetCoord2(aP1, (int *)p_ownsFile, (CCINIClass *)v47, (unsigned __int8 *)v43, (int *)aP3_4); /*0x645287*/
  *(_DWORD *)(this + 660) = *Coord2; /*0x64528e*/
  *(_DWORD *)(this + 664) = Coord2[1]; /*0x645298*/
  *(_DWORD *)(this + 668) = Coord2[2]; /*0x64529e*/
  Coord = INIClass::GetCoord( /*0x6452b1*/
            aP1,
            &v50,
            (INIClass *)(this + 36),
            (Color *)&stru_830620.__pad_579C[4964],
            (Color *)(this + 724));
  *(_WORD *)(this + 724) = *(_WORD *)Coord; /*0x6452bd*/
  *(_BYTE *)(this + 726) = *(_BYTE *)(Coord + 2); /*0x6452c4*/
  eax5j = INIClass::GetCoord( /*0x6452d7*/
            aP1,
            &v50,
            (INIClass *)(this + 36),
            (Color *)&stru_830620.__pad_579C[4952],
            (Color *)(this + 727));
  v34 = *(_WORD *)eax5j; /*0x6452e3*/
  aP3_4 = *(char *)(this + 777); /*0x6452e6*/
  *(_WORD *)(this + 727) = v34; /*0x6452e7*/
  v43 = (CCINIClass *)&stru_830620.__pad_579C[4932]; /*0x6452eb*/
  LOBYTE(eax5j) = *(_BYTE *)(eax5j + 2); /*0x6452f0*/
  v47 = (INIClass *)(this + 36); /*0x6452f3*/
  *(_BYTE *)(this + 729) = eax5j; /*0x6452f6*/
  al5d = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v47, v43, (INIClass *)aP3_4); /*0x6452f9*/
  aP3_4 = 32; /*0x645302*/
  v43 = (CCINIClass *)v50.headNode; /*0x645304*/
  v47 = 0; /*0x645305*/
  p_ownsFile = (unsigned __int8 *)&stru_830620.__pad_579C[4916]; /*0x645307*/
  v40 = (VectorClass *)(this + 36); /*0x64530c*/
  *(_BYTE *)(this + 780) = al5d; /*0x64530f*/
  if ( INIClass::GetString(aP1, (INIClass *)v40, p_ownsFile, v47, (INIClass *)v43, aP3_4) ) /*0x645315*/
  {
    if ( _strcmpi((char *)v50.headNode, (char *)&stru_817460.sectionHead[1]) ) /*0x64532c*/
    {
      v36 = 0; /*0x64533d*/
      if ( (int)MEMORY[0xA83DA8] <= 0 ) /*0x645341*/
      {
LABEL_10:
        v37 = (_DWORD *)__2_YAPAXI_Z(0x318u); /*0x64536b*/
        if ( v37 ) /*0x64537a*/
          v33 = (ParticleTypeClass *)BuildingTypeClass::Construct(v37, (AbstractClass *)v50.headNode); /*0x645383*/
        else
          v33 = 0; /*0x64538a*/
        v39 = 0; /*0x645392*/
        if ( (int)MEMORY[0xA83DA8] <= 0 ) /*0x645396*/
        {
LABEL_17:
          v39 = -1; /*0x6453aa*/
        }
        else
        {
          v35 = (ObjectClass *)MEMORY[0xA83D9C]; /*0x645398*/
          while ( *(ParticleTypeClass **)v35->__pad_0 != v33 ) /*0x6453a0*/
          {
            ++v39; /*0x6453a2*/
            v35 = (ObjectClass *)((char *)v35 + 4); /*0x6453a3*/
            if ( v39 >= (int)MEMORY[0xA83DA8] ) /*0x6453a8*/
              goto LABEL_17; /*0x6453a8*/
          }
        }
        v36 = v39; /*0x6453ad*/
      }
      else
      {
        while ( _strcmpi((char *)v50.headNode, (char *)(*(_DWORD *)&MEMORY[0xA83D9C]->__pad_0[4 * v36] + 36)) ) /*0x64535f*/
        {
          if ( ++v36 >= (int)MEMORY[0xA83DA8] ) /*0x645369*/
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
  LOBYTE(v50.headNode[0]) = 0; /*0x6453cb*/
  INIClass::GetString( /*0x6453d0*/
    aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_830620.__pad_579C[4744],
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
  this->ParticleTypeClass_field_0x314 = v41; /*0x6453ff*/
  return 1; /*0x645407*/
}
}
} // namespace gamemd

// 0x6454E0
namespace gamemd {
int ParticleTypeClass::ProcessPower(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParticleTypeClass::ProcessPower(int this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6454e9*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2DC); /*0x6454f7*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2E0); /*0x645505*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2E8); /*0x645513*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2EC); /*0x645521*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2F0); /*0x64552f*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2F4); /*0x64553d*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x2F8); /*0x64554b*/
  Checksummer::Add_float(*(_DWORD *)(this + 764)); /*0x645559*/
  Checksummer::Add_float(this->ParticleTypeClass_field_0x300); /*0x645567*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x304); /*0x645575*/
  LOBYTE(v3) = *(_BYTE *)(this + 776); /*0x64557a*/
  Power::FlagProcess(a2, v3); /*0x645583*/
  LOBYTE(v4) = *(_BYTE *)(this + 777); /*0x645588*/
  v5 = Power::FinalizeDrain(a2, v4); /*0x645591*/
  LOBYTE(v5) = *(_BYTE *)(this + 778); /*0x645596*/
  Power::FinalizeDrain(a2, v5); /*0x64559f*/
  LOBYTE(v6) = *(_BYTE *)(this + 779); /*0x6455a4*/
  Power::FinalizeDrain(a2, v6); /*0x6455ad*/
  Power::TimerProcess(*(unsigned __int8 *)(this + 781)); /*0x6455bd*/
  Power::TimerProcess(*(unsigned __int8 *)(this + 782)); /*0x6455cd*/
  LOBYTE(v7) = *(_BYTE *)(this + 783); /*0x6455d2*/
  Power::FlagProcess(a2, v7); /*0x6455db*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x310); /*0x6455e9*/
  Power::TimerProcess(this->ParticleTypeClass_field_0x314); /*0x6455f7*/
  return Checksummer::Add_double(this->ParticleTypeClass_field_0x2B0, this->ParticleTypeClass_field_0x2B4); /*0x645611*/
}
}
} // namespace gamemd

// 0x645660
namespace gamemd {
int ParticleTypeClass::SaveLoad_Prefix(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall ParticleTypeClass::SaveLoad_Prefix(int a1, int a2)
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
      ObjectTypeClass::Construct((_DWORD *)v3, (int)&a2); /*0x645689*/
      ParticleTypeClass::Constructor((_DWORD *)(v3 + 696), 0, 0); /*0x645698*/
      *(_DWORD *)(v3 + 696) = &vt_TypeList_RGBClass; /*0x64569d*/
      *(_DWORD *)v3 = &ParticleTypeClass::`vftable'; /*0x6456a3*/
      *(_DWORD *)(v3 + 4) = &ParticleTypeClass::`vftable'; /*0x6456a9*/
      *(_DWORD *)(v3 + 8) = &ParticleTypeClass::`vftable'; /*0x6456b0*/
      *(_DWORD *)(v3 + 12) = &vt_ParticleTypeClass; /*0x6456b7*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v3 + 740)); /*0x6456ca*/
    v5 = *v2; /*0x6456cf*/
    a1 = 0; /*0x6456db*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v5 + 12))(v2, &a1, 4, 0); /*0x6456df*/
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
          LOWORD(a2) = 0; /*0x645706*/
          BYTE2(a2) = 0; /*0x64570e*/
          result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 12))(v2, &a2, 3, 0); /*0x645712*/
          if ( result < 0 ) /*0x645717*/
            break; /*0x645717*/
          v7 = *(_DWORD *)(v3 + 704); /*0x645719*/
          if ( *(_DWORD *)(v3 + 712) < v7 /*0x645747*/
            || (*(_BYTE *)(v3 + 709) || !v7)
            && (v8 = *(_DWORD *)(v3 + 716), v8 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v3 + 696) + 8))(v3 + 696, v7 + v8, 0) )
          {
            v9 = *(_DWORD *)(v3 + 712); /*0x64574e*/
            v10 = v9 + 1; /*0x645751*/
            v11 = 3 * v9; /*0x645754*/
            v12 = *(_DWORD *)(v3 + 700); /*0x645757*/
            *(_DWORD *)(v3 + 712) = v10; /*0x64575a*/
            v13 = v12 + v11; /*0x64575d*/
            *(_WORD *)v13 = a2; /*0x645764*/
            *(_BYTE *)(v13 + 2) = BYTE2(a2); /*0x64576b*/
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
} // namespace gamemd

// 0x6458B0
namespace gamemd {
int ParticleTypeClass::GetType(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParticleTypeClass::_vt10(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = *(this + 185); /*0x6458b0*/
  if ( result == a2 ) /*0x6458bc*/
    *(this + 185) = 0; /*0x6458be*/
  return result; /*0x6458c8*/
}
}
} // namespace gamemd

// 0x645950
namespace gamemd {
ParticleTypeClass * ParticleTypeClass::ddtor(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ParticleTypeClass *__thiscall ParticleTypeClass::ddtor(void **this, char a2)
{
  int v3; // eax
  int v4; // eax
  void *v5; // eax
  void **v7; // [esp+4h] [ebp-4h] BYREF

  *this = &ParticleTypeClass::`vftable'; /*0x645956*/
  *(this + 1) = &ParticleTypeClass::`vftable'; /*0x64595c*/
  *(this + 2) = &ParticleTypeClass::`vftable'; /*0x645963*/
  *(this + 3) = &vt_ParticleTypeClass; /*0x64596a*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x645971*/
  v7 = this; /*0x645986*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v7); /*0x64598a*/
  if ( v3 != -1 && v3 < MEMORY[0xB0F680] && v3 < --MEMORY[0xB0F680] ) /*0x6459a5*/
  {
    do /*0x6459bd*/
    {
      ++v3; /*0x6459ad*/
      *((_DWORD *)MEMORY[0xB0F674] + v3 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v3); /*0x6459b1*/
    }
    while ( v3 < MEMORY[0xB0F680] ); /*0x6459bd*/
  }
  v7 = this; /*0x6459cf*/
  v4 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA83D98] + 16))(&MEMORY[0xA83D98], &v7); /*0x6459d3*/
  if ( v4 != -1 && v4 < MEMORY[0xA83DA8] && v4 < --MEMORY[0xA83DA8] ) /*0x6459ee*/
  {
    do /*0x645a06*/
    {
      ++v4; /*0x6459f6*/
      *((_DWORD *)MEMORY[0xA83D9C] + v4 - 1) = *((_DWORD *)MEMORY[0xA83D9C] + v4); /*0x6459fa*/
    }
    while ( v4 < MEMORY[0xA83DA8] ); /*0x645a06*/
  }
  v5 = *(this + 175); /*0x645a08*/
  *(this + 174) = &vt_VectorClass_RGBClass; /*0x645a0e*/
  if ( v5 && *((_BYTE *)this + 709) ) /*0x645a1c*/
  {
    __3_YAXPAX_Z(v5); /*0x645a27*/
    *(this + 175) = 0; /*0x645a2f*/
  }
  *((_BYTE *)this + 709) = 0; /*0x645a3b*/
  *(this + 176) = 0; /*0x645a42*/
  ObjectTypeClass::Destruct((int)this); /*0x645a4c*/
  if ( (a2 & 1) != 0 ) /*0x645a56*/
    __3_YAXPAX_Z(this); /*0x645a59*/
  return (ParticleTypeClass *)this; /*0x645a63*/
}
}
} // namespace gamemd

// 0x645A70
namespace gamemd {
unsigned int * ParticleTypeClass::Constructor(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_645A70(_DWORD *this, int a2, int a3)
{
  _BYTE *v4; // eax
  int v5; // ecx
  char *v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx

  *(this + 1) = 0; /*0x645a7d*/
  *(this + 2) = a2; /*0x645a80*/
  *((_BYTE *)this + 12) = 1; /*0x645a83*/
  *((_BYTE *)this + 13) = 0; /*0x645a87*/
  *this = &vt_VectorClass_RGBClass; /*0x645a8a*/
  if ( a2 ) /*0x645a90*/
  {
    if ( a3 ) /*0x645a98*/
    {
      if ( a2 - 1 >= 0 ) /*0x645a9f*/
      {
        v4 = (_BYTE *)(a3 + 2); /*0x645aa1*/
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
      *(this + 1) = a3; /*0x645ab3*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x645abc*/
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
      *(this + 1) = v6; /*0x645ae5*/
      *((_BYTE *)this + 13) = 1; /*0x645ae8*/
    }
  }
  *this = &vt_DynamicVectorClass_RGBClass; /*0x645aec*/
  *(this + 5) = 10; /*0x645af2*/
  *(this + 4) = 0; /*0x645af9*/
  return this; /*0x645afe*/
}
}
} // namespace gamemd

// 0x477930
namespace gamemd {
unsigned int ParticleTypeClass::LoadTypeData(int a2)
{
{
    if ( (unsigned char)this->ParticleTypeClass_field_0xC )
    return (a2 - this->ParticleTypeClass_field_28C) / 3u;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6457A0
namespace gamemd {
int ParticleTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int aP1, int aP2)
{
{
    int result;
    int v4;
    int v5;
    int v6;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, (ObjectTypeClass *)aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
  {
    v4 = *(int *)aP1;
    aP2 = aP0->MyEffectivenessCoefficient;
    result = (*(int (__stdcall **)(int, int *, int, int))(v4 + 16))(aP1, &aP2, 4, 0);
    if ( result >= 0 )
    {
    v5 = 0;
    if ( aP2 > 0 )
      {
    v6 = 0;
    do
        {
    if ( (*(int (__stdcall **)(int, int, int, int))(*(int *)(aP1) + 16))(aP1, v6 + aP0->?, 3, 0) < 0 )
    break;
    ++v5;
    v6 += 3;
        }
    while ( v5 < aP2 );
      }
    return 0;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x645910
namespace gamemd {
int ParticleTypeClass::GetObjectSize()
{
return 792;
}
} // namespace gamemd

// 0x645920
namespace gamemd {
int ParticleTypeClass::GetTypeIdentifier()
{
return 23;
}
} // namespace gamemd

// 0x645930
namespace gamemd {
char ParticleTypeClass::Stub(int a1, int a2)
{
return 0;
}
} // namespace gamemd

// 0x645940
namespace gamemd {
int ParticleTypeClass::StubReturnFalse(int a1)
{
return 0;
}
} // namespace gamemd
