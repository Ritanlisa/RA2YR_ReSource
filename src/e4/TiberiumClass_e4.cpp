// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5A0160
namespace gamemd {
char TiberiumClass::Spread(int a1, int a2, int a3, int a4, int a5, int a6, char a7, char a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall TiberiumClass_Spread(int a1, int a2, int a3, int a4, int a5, int a6, char a7, char a8)
{
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // ecx
  char v11; // dl
  _WORD *v12; // eax
  _WORD *v13; // edx
  __int16 v14; // cx
  int v15; // eax
  int v16; // edx
  char *v17; // esi
  int v18; // edi
  bool v19; // bl
  int *v20; // eax
  int *v21; // ebp
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // edx
  _DWORD *v28; // [esp+10h] [ebp-1Ch]
  _DWORD *v29; // [esp+14h] [ebp-18h]
  int v30; // [esp+18h] [ebp-14h] BYREF
  int v31; // [esp+1Ch] [ebp-10h]
  int v32; // [esp+20h] [ebp-Ch]
  int v33; // [esp+24h] [ebp-8h]
  int i; // [esp+28h] [ebp-4h]

  v28 = (_DWORD *)RandomMap::CellListAlloc(a1); /*0x5a0171*/
  for ( i = 0; i < a2; ++i ) /*0x5a0181*/
  {
    v8 = __2_YAPAXI_Z(0x18u); /*0x5a0189*/
    v9 = v8; /*0x5a018e*/
    if ( v8 ) /*0x5a0195*/
    {
      VectorClass::CellConstructor(v8, 0, 0); /*0x5a019b*/
      *v9 = &DynamicVectorClass<Cell>::`vftable'; /*0x5a01a0*/
      v9[5] = 10; /*0x5a01a6*/
      v9[4] = 0; /*0x5a01ad*/
      v29 = v9; /*0x5a01b0*/
    }
    else
    {
      v29 = 0; /*0x5a01b6*/
    }
    v10 = v28; /*0x5a01ba*/
    v31 = 0; /*0x5a01be*/
    v29[5] = 3 * v28[4]; /*0x5a01cc*/
    if ( (int)v28[4] > 0 ) /*0x5a01d4*/
    {
      while ( 2 ) /*0x5a01da*/
      {
        v11 = 0; /*0x5a01da*/
        v33 = 0; /*0x5a01dc*/
        while ( 1 ) /*0x5a01f3*/
        {
          v12 = (_WORD *)(v10[1] + 4 * v31); /*0x5a01f3*/
          v13 = (_WORD *)(4 * (v11 & 7) + 9041544); /*0x5a01fe*/
          v14 = *v13 + *v12; /*0x5a0205*/
          LOWORD(v13) = v12[1] + v13[1]; /*0x5a020c*/
          LOWORD(v32) = v14; /*0x5a0210*/
          HIWORD(v32) = (_WORD)v13; /*0x5a0215*/
          v30 = v32; /*0x5a021e*/
          v15 = (__int16)v13; /*0x5a0225*/
          v16 = (__int16)v13 + v14; /*0x5a0228*/
          if ( v16 > g_MapCellHeight_Value /*0x5a0285*/
            && v14 - v15 < g_MapCellHeight_Value
            && v15 - v14 < g_MapCellHeight_Value
            && v16 <= g_MapCellCount
            && v14 >= a3
            && v14 < a3 + a5
            && v15 >= a4
            && v15 < a6 + a4 )
          {
            v17 = (char *)g_MapTileArray + 80 * v14 + 80 * unk_89C2DC * v15; /*0x5a02a4*/
            v18 = *((_DWORD *)v17 + 14); /*0x5a02a8*/
            v19 = a7 && v18 == a1 - 1; /*0x5a02b6*/
            v20 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v30); /*0x5a02c6*/
            v21 = v20; /*0x5a02cd*/
            if ( (!v18 || v19) && (Cell::IsEmpty(v20) || v19 && Cell::IsGroundTypeRange(v21)) ) /*0x5a02e6*/
            {
              v22 = v29[2]; /*0x5a02ff*/
              if ( v29[4] < v22 /*0x5a0324*/
                || (*((_BYTE *)v29 + 13) || !v22)
                && (v23 = v29[5], v23 > 0)
                && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v29 + 8))(v29, v22 + v23, 0) )
              {
                v24 = v29[4]; /*0x5a032b*/
                v25 = v29[1]; /*0x5a032e*/
                v29[4] = v24 + 1; /*0x5a0334*/
                *(_DWORD *)(v25 + 4 * v24) = v30; /*0x5a033b*/
              }
              *((_DWORD *)v17 + 14) = a1; /*0x5a0348*/
              if ( a7 && Cell::IsEmpty(v21) ) /*0x5a034f*/
                *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v30) + 283) = a8; /*0x5a036b*/
            }
            else if ( v18 != a1 ) /*0x5a02f3*/
            {
              if ( v28 ) /*0x5a03e4*/
                (*(void (__thiscall **)(_DWORD *, int))*v28)(v28, 1); /*0x5a03ea*/
              if ( v29 ) /*0x5a03f2*/
                (*(void (__thiscall **)(_DWORD *, int))*v29)(v29, 1); /*0x5a03f8*/
              return 0; /*0x5a03fd*/
            }
          }
          v11 = ++v33; /*0x5a0375*/
          if ( v33 >= 8 ) /*0x5a037d*/
            break; /*0x5a037d*/
          v10 = v28; /*0x5a01e2*/
        }
        v10 = v28; /*0x5a0383*/
        v26 = v28[4]; /*0x5a038c*/
        if ( ++v31 < v26 ) /*0x5a0395*/
          continue; /*0x5a0395*/
        break;
      }
    }
    if ( v10 ) /*0x5a039f*/
      (*(void (__thiscall **)(_DWORD *, int))*v10)(v10, 1); /*0x5a03a5*/
    v28 = v29; /*0x5a03af*/
  }
  if ( v28 ) /*0x5a03ca*/
    (*(void (__thiscall **)(_DWORD *, int))*v28)(v28, 1); /*0x5a03d0*/
  return 1; /*0x5a03d2*/
}
}
} // namespace gamemd

// 0x7216C0
namespace gamemd {
unsigned int * TiberiumClass::TiberiumClass(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall TiberiumClass::TiberiumClass(_DWORD *this, ObjectClass *aP1)
{
  IUnknown *v3; // edx
  int v4; // eax
  int v5; // eax

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x7216ca*/
  *(this + 40) = -1717986918; /*0x7216dc*/
  *(this + 44) = -1717986918; /*0x7216e7*/
  *(this + 38) = -1; /*0x7216f1*/
  *(this + 39) = 0; /*0x7216fb*/
  *(this + 41) = 1069128089; /*0x721701*/
  *(this + 42) = 0; /*0x721707*/
  *(this + 45) = 1069128089; /*0x72170d*/
  *(this + 46) = 0; /*0x721713*/
  *(this + 47) = 0; /*0x721719*/
  *(this + 48) = 0; /*0x72171f*/
  AnimTypeVector::Constructor(this + 49, 0, 0); /*0x721725*/
  *(this + 54) = 10; /*0x72172a*/
  *(this + 53) = 0; /*0x721731*/
  *(this + 49) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x721734*/
  *(this + 56) = 0; /*0x72173a*/
  *(this + 57) = 0; /*0x721740*/
  *(this + 58) = 0; /*0x721746*/
  *(this + 59) = 0; /*0x72174c*/
  *(this + 60) = 0; /*0x721752*/
  *(this + 61) = 0; /*0x721758*/
  *(this + 62) = 0; /*0x72175e*/
  *(this + 63) = 0; /*0x721764*/
  *(this + 64) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x721770*/
  *(this + 66) = 0; /*0x721776*/
  *(this + 67) = 0; /*0x72177c*/
  *(this + 68) = 0; /*0x721782*/
  *(this + 69) = 0; /*0x721788*/
  *(this + 70) = 0; /*0x72178e*/
  v3 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x721794*/
  *(this + 73) = 0; /*0x72179a*/
  *(this + 71) = v3; /*0x7217a0*/
  *this = &TiberiumClass::`vftable'; /*0x7217a6*/
  *(this + 1) = &TiberiumClass::`vftable'; /*0x7217ac*/
  *(this + 2) = &TiberiumClass::`vftable'; /*0x7217b3*/
  *(this + 3) = &TiberiumClass::`vftable'; /*0x7217ba*/
  *(this + 38) = *(_DWORD *)&stru_B05488.__pad_579C[18644]; /*0x7217c6*/
  if ( *(int *)&stru_B05488.__pad_579C[18644] < *(int *)&stru_B05488.__pad_579C[18636] /*0x7217fe*/
    || (stru_B05488.__pad_579C[18641] || !*(_DWORD *)&stru_B05488.__pad_579C[18636])
    && *(int *)&stru_B05488.__pad_579C[18648] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[18628] + 8))(
         &stru_B05488.__pad_579C[18628],
         *(_DWORD *)&stru_B05488.__pad_579C[18636] + *(_DWORD *)&stru_B05488.__pad_579C[18648],
         0) )
  {
    v4 = (*(_DWORD *)&stru_B05488.__pad_579C[18644])++; /*0x72180b*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18632] + 4 * v4) = this; /*0x72181a*/
  }
  (*(void (__thiscall **)(_DWORD *))(*(this + 49) + 12))(this + 49); /*0x721821*/
  if ( *(int *)&stru_B05488.__pad_579C[19036] < *(int *)&stru_B05488.__pad_579C[19028] /*0x721857*/
    || (stru_B05488.__pad_579C[19033] || !*(_DWORD *)&stru_B05488.__pad_579C[19028])
    && *(int *)&stru_B05488.__pad_579C[19040] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19020] + 8))(
         &stru_B05488.__pad_579C[19020],
         *(_DWORD *)&stru_B05488.__pad_579C[19028] + *(_DWORD *)&stru_B05488.__pad_579C[19040],
         0) )
  {
    v5 = (*(_DWORD *)&stru_B05488.__pad_579C[19036])++; /*0x721864*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * v5) = this; /*0x721873*/
  }
  return this; /*0x721878*/
}
}
} // namespace gamemd

// 0x721A50
namespace gamemd {
char TiberiumClass::LoadFromINI(unsigned signed char *** aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TiberiumClass::LoadFromINI(int this, unsigned __int8 ***aP1)
{
  int Int_Overwrite; // eax
  double Double_Overwrite; // st7
  CCINIClass *v5; // eax
  int eax2a; // eax
  double v8; // st7
  CCINIClass *v7; // eax
  int v10; // eax
  INIClass *v11; // ecx
  int v12; // eax
  AbstractClass *i; // eax
  int ecx10; // ecx
  VectorClass *v13; // edx
  VectorClass *v14; // eax
  char result; // al
  INIClass *_FFFFFFF4; // [esp-Ch] [ebp-D0h]
  INIClass *v19; // [esp-Ch] [ebp-D0h]
  DynamicVector *v18; // [esp-8h] [ebp-CCh]
  AnimTypeClass *v21; // [esp+8h] [ebp-BCh] BYREF
  _DWORD v22[3]; // [esp+Ch] [ebp-B8h] BYREF
  char v23; // [esp+19h] [ebp-ABh]
  int v24; // [esp+1Ch] [ebp-A8h]
  int v25; // [esp+20h] [ebp-A4h]
  VectorClass *v26; // [esp+24h] [ebp-A0h]
  _DWORD v27[7]; // [esp+28h] [ebp-9Ch] BYREF
  INIClass String[2]; // [esp+44h] [ebp-80h] BYREF

  INIClass::ResetSection(aP1); /*0x721a63*/
  if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) ) /*0x721a6b*/
    return 0; /*0x721cea*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x721a8b*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[60264],
                    *(INIClass **)(this + 156));
  _FFFFFFF4 = *(INIClass **)(this + 160); /*0x721a9d*/
  *(_DWORD *)(this + 156) = Int_Overwrite; /*0x721aa6*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x721aac*/
                       (int)aP1,
                       (INIClass *)(this + 36),
                       (unsigned __int8 *)&stru_830620.__pad_579C[60244],
                       _FFFFFFF4);
  v5 = *(CCINIClass **)(this + 168); /*0x721ab1*/
  *(double *)(this + 160) = Double_Overwrite; /*0x721ab9*/
  eax2a = INIClass::ReadInt_Overwrite( /*0x721ac6*/
            (int)aP1,
            (unsigned __int8 *)(this + 36),
            (CCINIClass *)&stru_830620.__pad_579C[60236],
            (INIClass *)v5);
  v19 = *(INIClass **)(this + 176); /*0x721ad8*/
  this->lineTrailer = eax2a; /*0x721ae1*/
  v8 = INIClass::ReadDouble_Overwrite( /*0x721ae7*/
         (int)aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[60216],
         v19);
  v7 = *(CCINIClass **)(this + 184); /*0x721aec*/
  *(double *)(this + 176) = v8; /*0x721af4*/
  v10 = INIClass::ReadInt_Overwrite( /*0x721b01*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[60208],
          (INIClass *)v7);
  v11 = *(INIClass **)(this + 188); /*0x721b06*/
  *(_DWORD *)(this + 184) = v10; /*0x721b0c*/
  v12 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &stru_81938C, v11); /*0x721b1b*/
  v18 = *(DynamicVector **)(this + 192); /*0x721b28*/
  this->Growth = v12; /*0x721b2f*/
  *(_DWORD *)(this + 192) = BuildingTypeClass::FindAnimByName( /*0x721b3a*/
                              aP1,
                              (unsigned __int8 *)(this + 36),
                              (unsigned __int8 *)&stru_81B138,
                              (int)v18);
  if ( INIClass::GetString( /*0x721b57*/
         aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[60200],
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(v27, 0, 0); /*0x721b6c*/
    v27[0] = &TypeList<AnimTypeClass const *>::`vftable'; /*0x721b7b*/
    for ( i = (AbstractClass *)strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x721b8d*/
          i;
          i = (AbstractClass *)strtok(0, MEMORY[0x817F70].__pad_0) )
    {
      if ( !i->__pad_0[0] ) /*0x721b8f*/
        break; /*0x721b92*/
      v21 = AnimTypeClass::FindOrCreate(i); /*0x721b9d*/
      if ( v21 ) /*0x721ba1*/
        DynamicVector::Add_Alt4(v27, (VectorClass *)&v21); /*0x721bac*/
    }
    TypeList::AnimTypeCopy(v22, (VectorClass *)v27); /*0x721bcd*/
    v27[0] = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x721bd6*/
    DynamicVectorClass::Destroy_Alt((int)v27); /*0x721bde*/
  }
  else
  {
    TypeList::AnimTypeCopy(v22, (VectorClass *)(this + 196)); /*0x721bf0*/
  }
  VectorClass::CopyDefault((_DWORD *)(this + 196), (VectorClass *)v22); /*0x721c03*/
  ecx10 = v25; /*0x721c0c*/
  v13 = v26; /*0x721c10*/
  this->Debris = v24; /*0x721c14*/
  v14 = (VectorClass *)v22[1]; /*0x721c17*/
  this->Image = ecx10; /*0x721c1b*/
  this->NumFrames = v13; /*0x721c1e*/
  v22[0] = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x721c21*/
  if ( v14 && v23 ) /*0x721c34*/
    __3_YAXPAX_Z(v14); /*0x721c37*/
  switch ( INIClass::ReadInt_Overwrite( /*0x721c55*/
             (int)aP1,
             (unsigned __int8 *)(this + 36),
             &g_INI_Key_Image,
             (INIClass *)0xFFFFFFFF) )
  {
    case -1: /*0x721c55*/
      goto LABEL_19;
    case 2: /*0x721c55*/
      this->NumImages = MEMORY[0xA83D84][1].sectionHead[1]; /*0x721c69*/
      *(_DWORD *)(this + 228) = 12; /*0x721c6f*/
      *(_DWORD *)(this + 232) = 12; /*0x721c75*/
      return 1; /*0x721c85*/
    case 3: /*0x721c55*/
      this->NumImages = *(_DWORD *)&MEMORY[0xA83D84][5].__pad_41[3]; /*0x721c94*/
      goto LABEL_18; /*0x721c9a*/
    case 4: /*0x721c55*/
      this->NumImages = MEMORY[0xA83D84][6].INIClass_field_3C; /*0x721ca8*/
      goto LABEL_18; /*0x721cae*/
    default:
      this->NumImages = MEMORY[0xA83D84][4].unknown38; /*0x721cbb*/
LABEL_18:
      this->TiberiumClass_field_EC = 8; /*0x721cc1*/
      *(_DWORD *)(this + 228) = 12; /*0x721cd0*/
      *(_DWORD *)(this + 232) = 12; /*0x721cd6*/
LABEL_19:
      result = 1; /*0x721cdc*/
      break; /*0x721ce6*/
  }
  return result; /*0x721c7b*/
}
}
} // namespace gamemd

// 0x721E40
namespace gamemd {
int TiberiumClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -985803917;
  a2[1] = 298980638;
  a2[2] = 1610642817;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x721E80
namespace gamemd {
int TiberiumClass::SaveLoad_Prefix(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TiberiumClass::SaveLoad_Prefix(int a1, int a2)
{
  int v2; // esi
  int v3; // ebp
  _DWORD *v4; // eax
  int i; // ecx
  void **v6; // ecx
  _DWORD *v7; // eax
  int j; // ecx
  void **v9; // ecx
  int v10; // eax
  int v11; // ebx
  int result; // eax
  int v13; // edi

  v2 = a1; /*0x721e83*/
  v3 = 0; /*0x721e87*/
  v4 = *(_DWORD **)(a1 + 244); /*0x721e8a*/
  if ( v4 ) /*0x721e92*/
  {
    for ( i = 0; i <= *v4; *(_DWORD *)(v4[2] + 4 * i - 4) = 0 ) /*0x721e9a*/
      ++i; /*0x721e9f*/
    *v4 = 0; /*0x721eaa*/
    v6 = *(void ***)(v2 + 244); /*0x721eac*/
    if ( v6 ) /*0x721eb4*/
      Scalar::Dtor(v6, 1); /*0x721eb8*/
    *(_DWORD *)(v2 + 244) = 0; /*0x721ebd*/
  }
  if ( *(_DWORD *)(v2 + 252) ) /*0x721ec3*/
  {
    __3_YAXPAX_Z(*(void **)(v2 + 252)); /*0x721ece*/
    *(_DWORD *)(v2 + 252) = 0; /*0x721ed6*/
  }
  if ( *(_DWORD *)(v2 + 248) ) /*0x721edc*/
  {
    __3_YAXPAX_Z(*(void **)(v2 + 248)); /*0x721ee7*/
    *(_DWORD *)(v2 + 248) = 0; /*0x721eef*/
  }
  v7 = *(_DWORD **)(v2 + 272); /*0x721ef5*/
  *(_DWORD *)(v2 + 240) = 0; /*0x721efb*/
  if ( v7 ) /*0x721f03*/
  {
    for ( j = 0; j <= *v7; *(_DWORD *)(v7[2] + 4 * j - 4) = 0 ) /*0x721f0b*/
      ++j; /*0x721f10*/
    *v7 = 0; /*0x721f1b*/
    v9 = *(void ***)(v2 + 272); /*0x721f1d*/
    if ( v9 ) /*0x721f25*/
      Scalar::Dtor(v9, 1); /*0x721f29*/
    *(_DWORD *)(v2 + 272) = 0; /*0x721f2e*/
  }
  if ( *(_DWORD *)(v2 + 280) ) /*0x721f34*/
  {
    __3_YAXPAX_Z(*(void **)(v2 + 280)); /*0x721f3f*/
    *(_DWORD *)(v2 + 280) = 0; /*0x721f47*/
  }
  if ( *(_DWORD *)(v2 + 276) ) /*0x721f4d*/
  {
    __3_YAXPAX_Z(*(void **)(v2 + 276)); /*0x721f58*/
    *(_DWORD *)(v2 + 276) = 0; /*0x721f60*/
  }
  v10 = *(_DWORD *)(v2 + 196); /*0x721f66*/
  *(_DWORD *)(v2 + 268) = 0; /*0x721f74*/
  (*(void (__thiscall **)(int))(v10 + 12))(v2 + 196); /*0x721f7a*/
  v11 = a2; /*0x721f7d*/
  result = AbstractClass::SaveLoad_Prefix_0((_DWORD *)v2, a2); /*0x721f83*/
  if ( result >= 0 ) /*0x721f8a*/
  {
    if ( v2 ) /*0x721f92*/
    {
      AbstractTypeClass::Init(v2, (int)&a1); /*0x721f9b*/
      DynamicVectorClass::AnimTypeConstructor((_DWORD *)(v2 + 196), 0, 0); /*0x721fa4*/
      *(_DWORD *)(v2 + 196) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x721fb0*/
      Timer::Start((_DWORD *)(v2 + 256), 0); /*0x721fb6*/
      Timer::Start((_DWORD *)(v2 + 284), 0); /*0x721fc2*/
      *(_DWORD *)v2 = &TiberiumClass::`vftable'; /*0x721fc7*/
      *(_DWORD *)(v2 + 4) = &TiberiumClass::`vftable'; /*0x721fcd*/
      *(_DWORD *)(v2 + 8) = &TiberiumClass::`vftable'; /*0x721fd4*/
      *(_DWORD *)(v2 + 12) = &TiberiumClass::`vftable'; /*0x721fdb*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 224)); /*0x721fee*/
    if ( v2 != -196 ) /*0x721ff5*/
      AnimTypeList::Constructor((_DWORD *)(v2 + 196)); /*0x721ff9*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v11 + 12))(v11, &a1, 4, 0); /*0x722009*/
    result = 0; /*0x72200c*/
    if ( a1 > 0 ) /*0x722012*/
    {
      do /*0x722037*/
      {
        (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v11 + 12))(v11, &a2, 4, 0); /*0x722023*/
        DynamicVector::Add_Alt4((_DWORD *)(v2 + 196), &a2); /*0x72202d*/
        ++v3; /*0x722032*/
      }
      while ( v3 < a1 ); /*0x722037*/
      result = 0; /*0x722039*/
    }
    v13 = 0; /*0x722041*/
    if ( *(int *)(v2 + 212) > 0 ) /*0x722045*/
    {
      do /*0x722064*/
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(*(_DWORD *)(v2 + 200) + 4 * v13++)); /*0x722056*/
      while ( v13 < *(_DWORD *)(v2 + 212) ); /*0x722064*/
      result = 0; /*0x722066*/
    }
    *(_DWORD *)(v2 + 272) = 0; /*0x722068*/
    *(_DWORD *)(v2 + 276) = 0; /*0x72206e*/
    *(_DWORD *)(v2 + 280) = 0; /*0x722074*/
    *(_DWORD *)(v2 + 244) = 0; /*0x72207a*/
    *(_DWORD *)(v2 + 248) = 0; /*0x722080*/
    *(_DWORD *)(v2 + 252) = 0; /*0x722086*/
  }
  return result; /*0x72208c*/
}
}
} // namespace gamemd

// 0x7220D0
namespace gamemd {
int TiberiumClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TiberiumClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax
  int v4; // edx
  int i; // esi

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x7220e1*/
  if ( result >= 0 ) /*0x7220e8*/
  {
    v4 = *a1; /*0x7220f0*/
    aP2 = aP0->ChargerTurrets[6]; /*0x7220fd*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a1, &aP2, 4, 0); /*0x722101*/
    for ( i = 0; i < aP2; ++i ) /*0x72210c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, aP0->ChargerTurrets[3] + 4 * i, 4, 0); /*0x72211f*/
    return 0; /*0x722129*/
  }
  return result; /*0x72212c*/
}
}
} // namespace gamemd

// 0x7236E0
namespace gamemd {
int TiberiumClass::StubReturn296()
{
return 296;
}
} // namespace gamemd

// 0x7236F0
namespace gamemd {
int TiberiumClass::StubReturn46()
{
return 46;
}
} // namespace gamemd
