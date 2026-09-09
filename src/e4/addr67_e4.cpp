// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x674500
namespace gamemd {
int sub_674500()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_674500(RulesClass *this)
{
  int result; // eax
  RulesClass *v2; // [esp+Ch] [ebp+4h]

  INIClass::ReadDifficultyModifiers(v2); /*0x674515*/
  INIClass::ReadDifficultyModifiers(v2); /*0x674527*/
  result = INIClass::ReadDifficultyModifiers(v2); /*0x674539*/
  LOBYTE(result) = 1; /*0x67453f*/
  return result; /*0x67453e*/
}
}
} // namespace gamemd

// 0x679CC0
namespace gamemd {
int sub_679CC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_679CC0()
{
  void *v1[3]; // [esp+4h] [ebp-C4h] BYREF
  _DWORD v2[10]; // [esp+10h] [ebp-B8h] BYREF
  char v3; // [esp+38h] [ebp-90h]
  int v4; // [esp+3Ch] [ebp-8Ch]
  int v5; // [esp+40h] [ebp-88h]
  char v6; // [esp+44h] [ebp-84h]
  _DWORD v7[22]; // [esp+5Ch] [ebp-6Ch] BYREF
  _BYTE v8[12]; // [esp+B4h] [ebp-14h] BYREF
  int v9; // [esp+C0h] [ebp-8h]

  if ( !byte_B053B8 ) /*0x679cd0*/
  {
    v1[1] = 0; /*0x679cda*/
    v1[2] = 0; /*0x679cde*/
    GenericList::Constructor(v2); /*0x679ce2*/
    v2[0] = &List<INIClass::INISection *>::`vftable'; /*0x679ceb*/
    memset(&v2[7], 0, 12); /*0x679cf8*/
    v3 = 0; /*0x679d04*/
    v4 = 0; /*0x679d08*/
    v5 = 0; /*0x679d0c*/
    v6 = 0; /*0x679d10*/
    v1[0] = &CCINIClass_Vtable; /*0x679d14*/
    CCFileClass::Construct(v7, unk_81F3C0); /*0x679d1c*/
    if ( CCINIClass::Load(v1, (int)v7, 0, 0) ) /*0x679d2c*/
      dword_B053B4 = Hash::ComputeHashSHA1((int)v1); /*0x679d3e*/
    byte_B053B8 = 1; /*0x679d4a*/
    v7[0] = &CCFileClass::`vftable'; /*0x679d51*/
    v9 = 0; /*0x679d59*/
    Vector::Clear((int)v8); /*0x679d60*/
    v7[0] = &off_7E1668; /*0x679d69*/
    BufferIOFileClass::Dtor(v7); /*0x679d71*/
    HashTable::DestroyHashTableINIClass(v1); /*0x679d7a*/
  }
  return dword_B053B4; /*0x679d84*/
}
}
} // namespace gamemd

// 0x679EC0
namespace gamemd {
int unknown_libname_29()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
int unknown_libname_29()
{
  return Hash::ComputeHashSHA1((int)&MEMORY[0x887180]);
}
}
} // namespace gamemd

// 0x679ED0
namespace gamemd {
int unknown_libname_30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
int unknown_libname_30()
{
  return Hash::ComputeHashSHA1((int)&MEMORY[0x887128]);
}
}
} // namespace gamemd

// 0x679EE0
namespace gamemd {
int ArtINI_Load()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int ArtINI_Load()
{
  _DWORD v1[22]; // [esp+0h] [ebp-6Ch] BYREF
  _BYTE v2[12]; // [esp+58h] [ebp-14h] BYREF
  int v3; // [esp+64h] [ebp-8h]

  INIClass::ClearSection((int)&MEMORY[0x887180], 0, 0); /*0x679eec*/
  CCFileClass::Construct(v1, aArtmdIni); /*0x679efa*/
  CCINIClass::Load(&MEMORY[0x887180], (int)v1, 0, 0); /*0x679f0d*/
  v1[0] = &CCFileClass::`vftable'; /*0x679f16*/
  v3 = 0; /*0x679f1e*/
  Vector::Clear((int)v2); /*0x679f26*/
  v1[0] = &off_7E1668; /*0x679f2f*/
  return BufferIOFileClass::Dtor(v1); /*0x679f3c*/
}
}
} // namespace gamemd

// 0x67B550
namespace gamemd {
int ReadINIClassBuildingTypeList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall ReadINIClassBuildingTypeList(
        INIClass *aP0,
        unsigned __int8 ***edx0,
        VectorClass *aP2,
        unsigned __int8 *a3,
        _DWORD *a4)
{
  char *i; // eax
  INIClass *v7; // edi
  int v8; // eax
  VectorClass *v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  VectorClass *v15; // ecx
  int v16; // eax
  VectorClass *v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  INIClass String[2]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, (INIClass *)aP2, a3, (INIClass *)&stru_87C374.__pad_579C[33876], String, 128) ) /*0x67b57c*/
  {
    VectorClass::BuildingTypeConstructor(&v17, 0, 0); /*0x67b591*/
    v22 = 10; /*0x67b59a*/
    v21 = 0; /*0x67b5a8*/
    v17 = (VectorClass *)&TypeList<BuildingTypeClass const *>::`vftable'; /*0x67b5ac*/
    for ( i = strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject); /*0x67b5be*/
          i;
          i = strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !*i ) /*0x67b5c0*/
        break; /*0x67b5c2*/
      v7 = (INIClass *)BuildingTypeClass::FindOrCreate(i); /*0x67b5cb*/
      if ( v7 /*0x67b5fb*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))v17->field_8)(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67b606*/
        *((_DWORD *)Block + v8) = v7; /*0x67b611*/
      }
    }
    aP0->headNode[0] = 0; /*0x67b62d*/
    aP0->headNode[1] = 0; /*0x67b630*/
    LOBYTE(aP0->headNode[2]) = 1; /*0x67b633*/
    BYTE1(aP0->headNode[2]) = 0; /*0x67b637*/
    *(_DWORD *)aP0->__pad_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x67b63a*/
    VectorClass::CopyBuilding(aP0, (VectorClass *)&v17); /*0x67b640*/
    *(_DWORD *)aP0->__pad_0 = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x67b645*/
    v17 = (VectorClass *)&VectorClass<BuildingTypeClass const *>::`vftable'; /*0x67b64b*/
    v9 = (VectorClass *)v22; /*0x67b657*/
    aP0->sectionHead[0] = v21; /*0x67b65b*/
    v10 = Block; /*0x67b65e*/
    v11 = Block == 0; /*0x67b662*/
    aP0->sectionHead[1] = (int)v9; /*0x67b664*/
    if ( !v11 && v20 ) /*0x67b671*/
    {
      __3_YAXPAX_Z(v10); /*0x67b678*/
      return (int)aP0->__pad_0; /*0x67b68b*/
    }
  }
  else
  {
    aP0->headNode[0] = 0; /*0x67b699*/
    aP0->headNode[1] = 0; /*0x67b69c*/
    LOBYTE(aP0->headNode[2]) = 1; /*0x67b69f*/
    BYTE1(aP0->headNode[2]) = 0; /*0x67b6a3*/
    *(_DWORD *)aP0->__pad_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x67b6a6*/
    if ( aP0 != (INIClass *)a4 ) /*0x67b6ac*/
    {
      DynamicVectorClass::Destroy((int)aP0); /*0x67b6b0*/
      v13 = a4[2]; /*0x67b6b6*/
      aP0->headNode[1] = v13; /*0x67b6bb*/
      if ( v13 ) /*0x67b6be*/
      {
        v14 = __2_YAPAXI_Z(4 * v13); /*0x67b6c8*/
        aP0->headNode[0] = v14; /*0x67b6d2*/
        if ( v14 ) /*0x67b6d5*/
        {
          v15 = (VectorClass *)aP0->headNode[1]; /*0x67b6d7*/
          v16 = 0; /*0x67b6da*/
          BYTE1(aP0->headNode[2]) = 1; /*0x67b6de*/
          if ( (int)v15 > 0 ) /*0x67b6e2*/
          {
            do /*0x67b6f6*/
            {
              *(_DWORD *)(aP0->headNode[0] + 4 * v16) = *(_DWORD *)(a4[1] + 4 * v16); /*0x67b6ed*/
              ++v16; /*0x67b6f3*/
            }
            while ( v16 < aP0->headNode[1] ); /*0x67b6f6*/
          }
        }
      }
      else
      {
        aP0->headNode[0] = 0; /*0x67b6fa*/
        BYTE1(aP0->headNode[2]) = 0; /*0x67b6fd*/
      }
    }
    aP0->sectionHead[0] = a4[4]; /*0x67b703*/
    aP0->sectionHead[1] = a4[5]; /*0x67b709*/
    *(_DWORD *)aP0->__pad_0 = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x67b70c*/
  }
  return (int)aP0->__pad_0; /*0x67b682*/
}
}
} // namespace gamemd

// 0x67BAC0
namespace gamemd {
InfantryTypeClass * GetINIClassInt(unsigned signed char *** a0, INIClass * aP1, unsigned signed char * a2, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
InfantryTypeClass *__fastcall GetINIClassInt(unsigned __int8 ***a0, INIClass *aP1, unsigned __int8 *a2, int a4)
{
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(a0, aP1, a2, (INIClass *)&stru_87C374.__pad_579C[33876], Destination, 128) ) /*0x67bade*/
    return KeywordType::FindOrCreate2((ObjectClass *)Destination); /*0x67baeb*/
  else
    return (InfantryTypeClass *)a4; /*0x67baf9*/
}
}
} // namespace gamemd

// 0x67BB10
namespace gamemd {
int ReadINIClassInfantryTypeList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
InfantryTypeClass *__fastcall ReadINIClassInfantryTypeList(
        INIClass *aP0,
        unsigned __int8 ***edx0,
        INIClass *aP1,
        unsigned __int8 *a3,
        _DWORD *a4)
{
  ObjectClass *i; // eax
  INIClass *v7; // edi
  int v8; // eax
  VectorClass *v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  VectorClass *v15; // ecx
  int v16; // eax
  VectorClass *v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  INIClass String[2]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, aP1, a3, (INIClass *)&stru_87C374.__pad_579C[33876], String, 128) ) /*0x67bb3c*/
  {
    InfantryTypeVector::Construct2(&v17, 0, 0); /*0x67bb51*/
    v22 = 10; /*0x67bb5a*/
    v21 = 0; /*0x67bb68*/
    v17 = (VectorClass *)&TypeList<InfantryTypeClass const *>::`vftable'; /*0x67bb6c*/
    for ( i = (ObjectClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject); /*0x67bb7e*/
          i;
          i = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !i->__pad_0[0] ) /*0x67bb80*/
        break; /*0x67bb82*/
      v7 = (INIClass *)KeywordType::FindOrCreate2(i); /*0x67bb8b*/
      if ( v7 /*0x67bbbb*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))v17->field_8)(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67bbc6*/
        *((_DWORD *)Block + v8) = v7; /*0x67bbd1*/
      }
    }
    aP0->headNode[0] = 0; /*0x67bbed*/
    aP0->headNode[1] = 0; /*0x67bbf0*/
    LOBYTE(aP0->headNode[2]) = 1; /*0x67bbf3*/
    BYTE1(aP0->headNode[2]) = 0; /*0x67bbf7*/
    *(_DWORD *)aP0->__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x67bbfa*/
    HouseTypeClass::readStartInfantry(aP0, (InfantryTypeClass *)&v17); /*0x67bc00*/
    *(_DWORD *)aP0->__pad_0 = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x67bc05*/
    v17 = (VectorClass *)&VectorClass<InfantryTypeClass const *>::`vftable'; /*0x67bc0b*/
    v9 = (VectorClass *)v22; /*0x67bc17*/
    aP0->sectionHead[0] = v21; /*0x67bc1b*/
    v10 = Block; /*0x67bc1e*/
    v11 = Block == 0; /*0x67bc22*/
    aP0->sectionHead[1] = (int)v9; /*0x67bc24*/
    if ( !v11 && v20 ) /*0x67bc31*/
    {
      __3_YAXPAX_Z(v10); /*0x67bc38*/
      return (InfantryTypeClass *)aP0; /*0x67bc4b*/
    }
  }
  else
  {
    aP0->headNode[0] = 0; /*0x67bc59*/
    aP0->headNode[1] = 0; /*0x67bc5c*/
    LOBYTE(aP0->headNode[2]) = 1; /*0x67bc5f*/
    BYTE1(aP0->headNode[2]) = 0; /*0x67bc63*/
    *(_DWORD *)aP0->__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x67bc66*/
    if ( aP0 != (INIClass *)a4 ) /*0x67bc6c*/
    {
      Vector::Cleanup((int)aP0); /*0x67bc70*/
      v13 = a4[2]; /*0x67bc76*/
      aP0->headNode[1] = v13; /*0x67bc7b*/
      if ( v13 ) /*0x67bc7e*/
      {
        v14 = __2_YAPAXI_Z(4 * v13); /*0x67bc88*/
        aP0->headNode[0] = v14; /*0x67bc92*/
        if ( v14 ) /*0x67bc95*/
        {
          v15 = (VectorClass *)aP0->headNode[1]; /*0x67bc97*/
          v16 = 0; /*0x67bc9a*/
          BYTE1(aP0->headNode[2]) = 1; /*0x67bc9e*/
          if ( (int)v15 > 0 ) /*0x67bca2*/
          {
            do /*0x67bcb6*/
            {
              *(_DWORD *)(aP0->headNode[0] + 4 * v16) = *(_DWORD *)(a4[1] + 4 * v16); /*0x67bcad*/
              ++v16; /*0x67bcb3*/
            }
            while ( v16 < aP0->headNode[1] ); /*0x67bcb6*/
          }
        }
      }
      else
      {
        aP0->headNode[0] = 0; /*0x67bcba*/
        BYTE1(aP0->headNode[2]) = 0; /*0x67bcbd*/
      }
    }
    aP0->sectionHead[0] = a4[4]; /*0x67bcc3*/
    aP0->sectionHead[1] = a4[5]; /*0x67bcc9*/
    *(_DWORD *)aP0->__pad_0 = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x67bccc*/
  }
  return (InfantryTypeClass *)aP0; /*0x67bc42*/
}
}
} // namespace gamemd

// 0x67BD30
namespace gamemd {
AircraftTypeClass * GetINIClassKeyword(unsigned signed char *** a0, INIClass * aP1, unsigned signed char * a2, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
AircraftTypeClass *__fastcall GetINIClassKeyword(unsigned __int8 ***a0, INIClass *aP1, unsigned __int8 *a2, int a4)
{
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(a0, aP1, a2, (INIClass *)&stru_87C374.__pad_579C[33876], Destination, 128) ) /*0x67bd4e*/
    return KeywordClass::FindOrCreate((ObjectClass *)Destination); /*0x67bd5b*/
  else
    return (AircraftTypeClass *)a4; /*0x67bd69*/
}
}
} // namespace gamemd

// 0x67C480
namespace gamemd {
int sub_67C480()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_67C480()
{
  dword_B053C8 = 0; /*0x67c482*/
  dword_B053CC = 0; /*0x67c487*/
  dword_B053D0 = 0; /*0x67c48c*/
  dword_B053D4 = 0; /*0x67c491*/
  return 0; /*0x67c496*/
}
}
} // namespace gamemd

// 0x67C4A0
namespace gamemd {
void sub_67C4A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_67C4A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x67c4ac*/
  dbl_B053E0 = Math::Sqrt(v0 + v0); /*0x67c4be*/
}
}
} // namespace gamemd

// 0x67C4D0
namespace gamemd {
void sub_67C4D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_67C4D0()
{
  dbl_B05430 = dbl_B053E0 / 60.0; /*0x67c4dc*/
}
}
} // namespace gamemd

// 0x67C4F0
namespace gamemd {
void sub_67C4F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_67C4F0()
{
  dbl_B05418 = 1.0 / dbl_B05430; /*0x67c4fc*/
}
}
} // namespace gamemd

// 0x67C510
namespace gamemd {
void sub_67C510()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_67C510()
{
  dbl_B05410 = 0.0174532925199433 * 45.0; /*0x67c51c*/
}
}
} // namespace gamemd

// 0x67C530
namespace gamemd {
void sub_67C530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_67C530()
{
  dbl_B053E8 = 0.0174532925199433 * 60.0; /*0x67c53c*/
}
}
} // namespace gamemd

// 0x67C550
namespace gamemd {
void sub_67C550()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_67C550()
{
  dbl_B053C0 = 0.0174532925199433 * 90.0; /*0x67c55c*/
}
}
} // namespace gamemd

// 0x67C570
namespace gamemd {
long long sub_67C570()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_67C570()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B053C0 - dbl_B053E8); /*0x67c582*/
  result = Math::RoundToInt(v0 * dbl_B053E0 * 0.5); /*0x67c596*/
  dword_B05438 = result; /*0x67c59b*/
  return result; /*0x67c5a0*/
}
}
} // namespace gamemd

// 0x67C5B0
namespace gamemd {
void sub_67C5B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_67C5B0()
{
  dbl_B053F0 = Math::ArcTan((double)dword_B05438 * 0.00390625); /*0x67c5c7*/
}
}
} // namespace gamemd

// 0x67C5E0
namespace gamemd {
void sub_67C5E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_67C5E0()
{
  dbl_B05408 = Math::ArcTan((double)(2 * dword_B05438) / dbl_B053E0); /*0x67c602*/
}
}
} // namespace gamemd

// 0x67C610
namespace gamemd {
long long sub_67C610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_67C610()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B05438) + 0.5); /*0x67c62b*/
  dword_B0542C = result; /*0x67c630*/
  return result; /*0x67c636*/
}
}
} // namespace gamemd

// 0x67C640
namespace gamemd {
int sub_67C640()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_67C640()
{
  word_B053D8 = 0; /*0x67c642*/
  word_B053DA = 0; /*0x67c648*/
  return 0; /*0x67c64e*/
}
}
} // namespace gamemd

// 0x67C650
namespace gamemd {
int sub_67C650()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_67C650()
{
  dword_B053F8 = 0; /*0x67c652*/
  dword_B053FC = 0; /*0x67c657*/
  dword_B05400 = 0; /*0x67c65c*/
  return 0; /*0x67c661*/
}
}
} // namespace gamemd

// 0x67C670
namespace gamemd {
int sub_67C670()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_67C670()
{
  dword_B05428 = 0; /*0x67c675*/
  dword_B05420 = 128; /*0x67c67f*/
  dword_B05424 = 128; /*0x67c684*/
  return 128; /*0x67c689*/
}
}
} // namespace gamemd

// 0x67FDC0
namespace gamemd {
void nullsub_225()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void nullsub_225()
{
  ; /*0x67fdc0*/
}
}
} // namespace gamemd
