// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/AircraftTypeClass_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/E4Recv_690400_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x679CC0
namespace gamemd {
int sub_679CC0()
{
  void *v1[3]; // [esp+4h] [ebp-C4h] BYREF
  unsigned int v2[10]; // [esp+10h] [ebp-B8h] BYREF
  char v3; // [esp+38h] [ebp-90h]
  int v4; // [esp+3Ch] [ebp-8Ch]
  int v5; // [esp+40h] [ebp-88h]
  char v6; // [esp+44h] [ebp-84h]
  unsigned int v7[22]; // [esp+5Ch] [ebp-6Ch] BYREF
  unsigned char v8[12]; // [esp+B4h] [ebp-14h] BYREF
  void ** v9;

  if ( !byte_B053B8 ) /*0x679cd0*/
  {
    v1[1] = (void *)((unsigned int)(0));
    v1[2] = (void *)((unsigned int)(0));
    GenericList::Constructor(v2); /*0x679ce2*/
    memset(&v2[7], 0, 12); /*0x679cf8*/
    v3 = 0; /*0x679d04*/
    v4 = 0; /*0x679d08*/
    v5 = 0; /*0x679d0c*/
    v6 = 0; /*0x679d10*/
    v1[0] = &CCINIClass_Vtable; /*0x679d14*/
    CCFileClass::Construct(v7, g_Str_File_CoopCampMD_ini); /*0x679d1c*/
    if ( CCINIClass::Load(v1, (int)v7, 0, 0) ) /*0x679d2c*/
      dword_B053B4 = Hash::ComputeHashSHA1((int)v1); /*0x679d3e*/
    byte_B053B8 = 1; /*0x679d4a*/
    v9 = 0; /*0x679d59*/
    Vector::Clear((int)v8); /*0x679d60*/
    v7[0] = &off_7E1668; /*0x679d69*/
    BufferIOFileClass::Dtor(v7); /*0x679d71*/
    HashTable::DestroyHashTableINIClass(v1); /*0x679d7a*/
  }
  return dword_B053B4; /*0x679d84*/
}
}
// 0x67B550
namespace gamemd {
void ReadINIClassBuildingTypeList(INIClass * aP0, unsigned char *** edx0, VectorClass_flat * aP2, unsigned char * a3, unsigned int * a4)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  void *v14; // eax
  void * v15;
  int v16; // eax
  void* v17;
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, aP2, a3, &g_INI_DefaultBuffer, String, 128) ) /*0x67b57c*/
  {
    VectorClass::BuildingTypeConstructor(&v17, 0, 0); /*0x67b591*/
    v22 = 10; /*0x67b59a*/
    v21 = 0; /*0x67b5a8*/
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) ) /*0x67b5be*/
    {
      if ( !*i ) /*0x67b5c0*/
        break; /*0x67b5c2*/
      v7 = BuildingTypeClass::FindOrCreate(i); /*0x67b5cb*/
      if ( v7 /*0x67b5fb*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v17[2])(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67b606*/
        *((unsigned int *)Block + v8) = v7; /*0x67b611*/
      }
    }
    aP0->u32_4 = (unsigned int)((void *)(0));
    aP0->q008 = (void *)(0);
    aP0->q00C = (void *)(1);
    aP0->u8_D = 0; /*0x67b637*/
    VectorClass::CopyBuilding(&v17); /*0x67b640*/
    v22 = v22; /*0x67b657*/
    aP0->q010 = v21; /*0x67b65b*/
    v10 = Block; /*0x67b65e*/
    v11 = Block == 0; /*0x67b662*/
    aP0->u32_14 = v22; /*0x67b664*/
    if ( !v11 && v20 ) /*0x67b671*/
    {
      RA2_OPDEL(v10); /*0x67b678*/
      return aP0; /*0x67b68b*/
    }
  }
  else
  {
    aP0->u32_4 = (unsigned int)((void *)(0));
    aP0->q008 = (void *)((unsigned char)((void *)(0)));
    aP0->q00C = (void *)(1);
    aP0->u8_D = (unsigned char)((void *)(0));
    if ( (unsigned int *)aP0 != a4 ) /*0x67b6ac*/
    {
      DynamicVectorClass::Destroy(aP0); /*0x67b6b0*/
      v13 = a4[2]; /*0x67b6b6*/
      aP0->q008 = v13; /*0x67b6bb*/
      if ( v13 ) /*0x67b6be*/
      {
        v14 = (void *)((unsigned int)(operator new(4 * v13)));
        aP0->u32_4 = (unsigned int)(v14);
        if ( v14 ) /*0x67b6d5*/
        {
          v15 = aP0->q008; /*0x67b6d7*/
          v16 = 0; /*0x67b6da*/
          aP0->u8_D = 1; /*0x67b6de*/
          if ( v15 > 0 ) /*0x67b6e2*/
          {
            do /*0x67b6f6*/
            {
              *(unsigned int *)(aP0->u32_4 + 4 * v16) = *(unsigned int *)(a4[1] + 4 * v16); /*0x67b6ed*/
              ++v16; /*0x67b6f3*/
            }
            while ( v16 < aP0->q008 ); /*0x67b6f6*/
          }
        }
      }
      else
      {
        aP0->u32_4 = 0; /*0x67b6fa*/
        aP0->u8_D = 0; /*0x67b6fd*/
      }
    }
    aP0->q010 = a4[4]; /*0x67b703*/
    aP0->u32_14 = a4[5]; /*0x67b709*/
  }
  return aP0; /*0x67b682*/
}
}
// 0x67BB10
namespace gamemd {
void * ReadINIClassInfantryTypeList(INIClass * aP0, unsigned char *** edx0, INIClass * aP1, unsigned char * a3, unsigned int * a4)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  void *v14; // eax
  int v15; // ecx
  int v16; // eax
  void* v17;
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, aP1, a3, &g_INI_DefaultBuffer, String, 128) ) /*0x67bb3c*/
  {
    InfantryTypeVector::Construct2(&v17, 0, 0); /*0x67bb51*/
    v22 = 10; /*0x67bb5a*/
    v21 = 0; /*0x67bb68*/
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) ) /*0x67bb7e*/
    {
      if ( !*i ) /*0x67bb80*/
        break; /*0x67bb82*/
      v7 = KeywordType::FindOrCreate2(i); /*0x67bb8b*/
      if ( v7 /*0x67bbbb*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v17[2])(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67bbc6*/
        *((unsigned int *)Block + v8) = v7; /*0x67bbd1*/
      }
    }
    *(unsigned int *)(aP0 + 4) = 0; /*0x67bbed*/
    *(unsigned int *)(aP0 + 8) = 0; /*0x67bbf0*/
    *(unsigned char *)(aP0 + 12) = 1; /*0x67bbf3*/
    *(unsigned char *)(aP0 + 13) = 0; /*0x67bbf7*/
    HouseTypeClass::readStartInfantry(&v17); /*0x67bc00*/
    v9 = v22; /*0x67bc17*/
    *(unsigned int *)(aP0 + 16) = v21; /*0x67bc1b*/
    v10 = Block; /*0x67bc1e*/
    v11 = Block == 0; /*0x67bc22*/
    *(unsigned int *)(aP0 + 20) = v9; /*0x67bc24*/
    if ( !v11 && v20 ) /*0x67bc31*/
    {
      RA2_OPDEL(v10); /*0x67bc38*/
      return aP0; /*0x67bc4b*/
    }
  }
  else
  {
    *(unsigned int *)(aP0 + 4) = 0; /*0x67bc59*/
    *(unsigned int *)(aP0 + 8) = 0; /*0x67bc5c*/
    *(unsigned char *)(aP0 + 12) = 1; /*0x67bc5f*/
    *(unsigned char *)(aP0 + 13) = 0; /*0x67bc63*/
    if ( (unsigned int *)aP0 != a4 ) /*0x67bc6c*/
    {
      Vector::Cleanup(aP0); /*0x67bc70*/
      v13 = a4[2]; /*0x67bc76*/
      *(unsigned int *)(aP0 + 8) = v13; /*0x67bc7b*/
      if ( v13 ) /*0x67bc7e*/
      {
        v14 = (void *)((unsigned int)(operator new(4 * v13)));
        *(unsigned int *)(aP0 + 4) = v14; /*0x67bc92*/
        if ( v14 ) /*0x67bc95*/
        {
          v15 = *(unsigned int *)(aP0 + 8); /*0x67bc97*/
          v16 = 0; /*0x67bc9a*/
          *(unsigned char *)(aP0 + 13) = 1; /*0x67bc9e*/
          if ( v15 > 0 ) /*0x67bca2*/
          {
            do /*0x67bcb6*/
            {
              *(unsigned int *)(*(unsigned int *)(aP0 + 4) + 4 * v16) = *(unsigned int *)(a4[1] + 4 * v16); /*0x67bcad*/
              ++v16; /*0x67bcb3*/
            }
            while ( v16 < *(unsigned int *)(aP0 + 8) ); /*0x67bcb6*/
          }
        }
      }
      else
      {
        *(unsigned int *)(aP0 + 4) = 0; /*0x67bcba*/
        *(unsigned char *)(aP0 + 13) = 0; /*0x67bcbd*/
      }
    }
    *(unsigned int *)(aP0 + 16) = a4[4]; /*0x67bcc3*/
    *(unsigned int *)(aP0 + 20) = a4[5]; /*0x67bcc9*/
  }
  return aP0; /*0x67bc42*/
}
}
// 0x674500
int RulesClass::sub_674500()
{
  int result; // eax
  RulesClass *v2; // [esp+Ch] [ebp+4h]

  INIClass::ReadDifficultyModifiers(v2); /*0x674515*/
  INIClass::ReadDifficultyModifiers(v2); /*0x674527*/
  result = INIClass::ReadDifficultyModifiers(v2); /*0x674539*/
  IDA_LOBYTE(result) = 1; /*0x67453f*/
  return result; /*0x67453e*/
}
// 0x679EC0
namespace gamemd {
int unknown_libname_29()
{
  return Hash::ComputeHashSHA1((int)&CCINIClass_INI_Art);
}
} // namespace gamemd

// 0x679ED0
namespace gamemd {
int unknown_libname_30()
{
  return Hash::ComputeHashSHA1((int)&CCINIClass_INI_AI);
}
} // namespace gamemd

// 0x679EE0
namespace gamemd {
int ArtINI_Load()
{
  unsigned int v1[22]; // [esp+0h] [ebp-6Ch] BYREF
  unsigned char v2[12]; // [esp+58h] [ebp-14h] BYREF
  void ** v3;

  INIClass::ClearSection((int)&CCINIClass_INI_Art, 0, 0); /*0x679eec*/
  CCFileClass::Construct(v1, aArtmdIni); /*0x679efa*/
  CCINIClass::Load(&CCINIClass_INI_Art, (int)v1, 0, 0); /*0x679f0d*/
  v3 = 0; /*0x679f1e*/
  Vector::Clear((int)v2); /*0x679f26*/
  v1[0] = &off_7E1668; /*0x679f2f*/
  return BufferIOFileClass::Dtor(v1); /*0x679f3c*/
}
} // namespace gamemd

// 0x67BAC0
namespace gamemd {
InfantryTypeClass * GetINIClassInt(unsigned char *** a0, INIClass * aP1, unsigned char * a2, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(a0, aP1, a2, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67bade*/
    return KeywordType::FindOrCreate2(Destination); /*0x67baeb*/
  else
    return a4; /*0x67baf9*/
}
} // namespace gamemd

// 0x67BD30
namespace gamemd {
AircraftTypeClass * GetINIClassKeyword(unsigned char *** a0, INIClass * aP1, unsigned char * a2, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(a0, aP1, a2, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67bd4e*/
    return KeywordClass::FindOrCreate(Destination); /*0x67bd5b*/
  else
    return a4; /*0x67bd69*/
}
} // namespace gamemd

// 0x67C480
namespace gamemd {
int sub_67C480()
{
  dword_B053C8 = 0; /*0x67c482*/
  dword_B053CC = 0; /*0x67c487*/
  dword_B053D0 = 0; /*0x67c48c*/
  dword_B053D4 = 0; /*0x67c491*/
  return 0; /*0x67c496*/
}
} // namespace gamemd

// 0x67C4A0
namespace gamemd {
void sub_67C4A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x67c4ac*/
  dbl_B053E0 = Math::Sqrt(v0 + v0); /*0x67c4be*/
}
} // namespace gamemd

// 0x67C4D0
namespace gamemd {
void sub_67C4D0()
{
  dbl_B05430 = dbl_B053E0 / 60.0; /*0x67c4dc*/
}
} // namespace gamemd

// 0x67C4F0
namespace gamemd {
void sub_67C4F0()
{
  dbl_B05418 = 1.0 / dbl_B05430; /*0x67c4fc*/
}
} // namespace gamemd

// 0x67C510
namespace gamemd {
void sub_67C510()
{
  dbl_B05410 = 0.0174532925199433 * 45.0; /*0x67c51c*/
}
} // namespace gamemd

// 0x67C530
namespace gamemd {
void sub_67C530()
{
  dbl_B053E8 = 0.0174532925199433 * 60.0; /*0x67c53c*/
}
} // namespace gamemd

// 0x67C550
namespace gamemd {
void sub_67C550()
{
  dbl_B053C0 = 0.0174532925199433 * 90.0; /*0x67c55c*/
}
} // namespace gamemd

// 0x67C570
namespace gamemd {
long long sub_67C570()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B053C0 - dbl_B053E8); /*0x67c582*/
  result = Math::RoundToInt(v0 * dbl_B053E0 * 0.5); /*0x67c596*/
  dword_B05438 = result; /*0x67c59b*/
  return result; /*0x67c5a0*/
}
} // namespace gamemd

// 0x67C5B0
namespace gamemd {
void sub_67C5B0()
{
  dbl_B053F0 = Math::ArcTan((double)dword_B05438 * 0.00390625); /*0x67c5c7*/
}
} // namespace gamemd

// 0x67C5E0
namespace gamemd {
void sub_67C5E0()
{
  dbl_B05408 = Math::ArcTan((double)(2 * dword_B05438) / dbl_B053E0); /*0x67c602*/
}
} // namespace gamemd

// 0x67C610
namespace gamemd {
long long sub_67C610()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B05438) + 0.5); /*0x67c62b*/
  dword_B0542C = result; /*0x67c630*/
  return result; /*0x67c636*/
}
} // namespace gamemd

// 0x67C640
namespace gamemd {
int sub_67C640()
{
  word_B053D8 = 0; /*0x67c642*/
  word_B053DA = 0; /*0x67c648*/
  return 0; /*0x67c64e*/
}
} // namespace gamemd

// 0x67C650
namespace gamemd {
int sub_67C650()
{
  dword_B053F8 = 0; /*0x67c652*/
  dword_B053FC = 0; /*0x67c657*/
  dword_B05400 = 0; /*0x67c65c*/
  return 0; /*0x67c661*/
}
} // namespace gamemd

// 0x67C670
namespace gamemd {
int sub_67C670()
{
  dword_B05428 = 0; /*0x67c675*/
  dword_B05420 = 128; /*0x67c67f*/
  dword_B05424 = 128; /*0x67c684*/
  return 128; /*0x67c689*/
}
} // namespace gamemd

// 0x67FDC0
namespace gamemd {
void nullsub_225()
{
  ; /*0x67fdc0*/
}
} // namespace gamemd
