// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/GenericList_e4.hpp"

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
#include "e4/classes/GameSettings_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/RAMFileClass_e4.hpp"
#include "e4/classes/VeterancyStruct_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"
#include "e4/classes/Hash_e4.hpp"
#include "e4/classes/InfantryTypeVector_e4.hpp"
#include "e4/classes/KeywordClass_e4.hpp"  // G57w10 D supply

// 0x679CC0
namespace gamemd {
int sub_679CC0()
{
  void *v1[3]; // [esp+4h] [ebp-C4h] BYREF
  unsigned int v2[10]; // [esp+10h] [ebp-B8h] BYREF
  char v3; // [esp+38h] [ebp-90h]
  int v4; // [esp+3Ch] [ebp-8Ch]
  unsigned int v5;
  char v6; // [esp+44h] [ebp-84h]
  unsigned int v7[22]; // [esp+5Ch] [ebp-6Ch] BYREF
  unsigned char v8[12]; // [esp+B4h] [ebp-14h] BYREF
  int v9; // [esp+C0h] [ebp-8h]

  if ( !byte_B053B8 ) /*0x679cd0*/
  {
    v1[1] = (void *)((unsigned int)(0));
    v1[2] = (void *)((unsigned int)((void *)((unsigned int)(0))));
    ((GenericList *)v2)->Constructor(); /*0x679ce2*/
    ((unsigned int *)(v2))[0] = (unsigned int)((void*)&List_INIClass_INISection___vftable); /*0x679ceb*/
    memset( (void *)(&((unsigned int *)(v2))[7]), 0, 12); /*0x679cf8*/
    v3 = 0; /*0x679d04*/
    v4 = 0; /*0x679d08*/
    v5 = 0; /*0x679d0c*/
    v6 = 0; /*0x679d10*/
    v1[0] = (void *)((unsigned int)&CCINIClass_Vtable); /*0x679d14*/
    ((CCFileClass*)v7)->Construct((char *)(void *)(g_Str_File_CoopCampMD_ini)); /*0x679d1c*/
    if ( ((CCINIClass *)((int)(v1)))->Load((int)v7, 0, 0) ) /*0x679d2c*/
      dword_B053B4 = ((Hash*)(int)v1)->ComputeHashSHA1(); /*0x679d3e*/
    byte_B053B8 = 1; /*0x679d4a*/
    v7[0] = (unsigned int)((void*)&CCFileClass_vftable); /*0x679d51*/
    v9 = 0; /*0x679d59*/
    ((Vector *)((int)v8))->Clear((int)((Vector *)((int)v8))); /*0x679d60*/
    v7[0] = (unsigned int)&off_7E1668; /*0x679d69*/
    ((BufferIOFileClass *)(v7))->Dtor(); /*0x679d71*/
    ((HashTable *)(v1))->DestroyHashTableINIClass(); /*0x679d7a*/
  }
  return dword_B053B4; /*0x679d84*/
}
}
// 0x67B550
namespace gamemd {
int ReadINIClassBuildingTypeList(INIClass * aP0, unsigned char *** edx0, VectorClass_flat * aP2, unsigned char * a3, unsigned int * a4)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  void *v9; // ecx
  void *Items; // eax
  bool v11; // zf
  int Capacity; // eax
  void * v14;
  int v15; // ecx
  int v16; // eax
  VectorClass v17; // [esp+Ch] [ebp-9Ch] BYREF
  int v18; // [esp+1Ch] [ebp-8Ch]
  int v19; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( ((INIClass*)(INIClass *)edx0)->GetString((unsigned char *)(aP2), (gamemd::INIClass *)(a3), (gamemd::INIClass *)(&g_INI_DefaultBuffer), (int)(String), 128) ) /*0x67b57c*/
  {
    ((VectorClass *)(&v17))->BuildingTypeConstructor(0, 0); /*0x67b591*/
    v19 = 10; /*0x67b59a*/
    v18 = 0; /*0x67b5a8*/
    v17.vtable0 = (void*)&TypeList_BuildingTypeClass_const___vftable; /*0x67b5ac*/
    for ( i = strtok(String, (char *)&::Delimiter); i; i = strtok(0, (char *)&::Delimiter) ) /*0x67b5be*/
    {
      if ( !*i ) /*0x67b5c0*/
        break; /*0x67b5c2*/
      v7 = (int)(((BuildingTypeClass *)i)->FindOrCreate()); /*0x67b5cb*/
      if ( v7 /*0x67b5fb*/
        && (v18 < v17.Capacity
         || (v17.IsAllocated || !v17.Capacity)
         && v19 > 0
&& (*((uint8_t (**)(VectorClass *, int, unsigned int))v17.vtable0 + 2))( (VectorClass *)(&v17), v19 + v17.Capacity, 0)) )



      {
        v8 = v18++; /*0x67b606*/
        *((unsigned int *)v17.Items + v8) = v7; /*0x67b611*/
      }
    }
    aP0->Items = (unsigned int)(0);
    aP0->Capacity = (unsigned int)(0);
    aP0->IsInitialized = (unsigned int)(1);
    aP0->IsAllocated = (unsigned int)(0);
    aP0->vtable1 = (void *)((unsigned int)((void*)&VectorClass_BuildingTypeClass_const___vftable));
    ((unsigned int *)(VectorClass *)(aP0))->CopyBuilding(&v17); /*0x67b640*/
    aP0->vtable1 = (void *)((unsigned int)((void*)&TypeList_BuildingTypeClass_const___vftable)); /*0x67b645*/
    v17.vtable0 = (void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x67b64b*/
    v9 = (void *)v19; /*0x67b657*/
    aP0[1].vtable0 = (unsigned int)((void *)v18); /*0x67b65b*/
    Items = v17.Items; /*0x67b65e*/
    v11 = v17.Items == 0; /*0x67b662*/
    aP0[1].Items = (unsigned int)(v9); /*0x67b664*/
    if ( !v11 && v17.IsAllocated ) /*0x67b671*/
    {
      RA2_OPDEL(Items); /*0x67b678*/
      return (int)(aP0); /*0x67b68b*/
    }
  }
  else
  {
    aP0->Items = (unsigned int)(0);
    aP0->Capacity = (unsigned int)(0);
    aP0->IsInitialized = (unsigned int)(1);
    aP0->IsAllocated = (unsigned int)(0);
    aP0->vtable1 = (void *)((unsigned int)((void*)&VectorClass_BuildingTypeClass_const___vftable));
    if ( aP0 != (gamemd::INIClass *)(a4) ) /*0x67b6ac*/
    {
      DynamicVectorClass::Destroy((HWND)((_VectorClass_PBVBuildingTypeClass *)aP0)); /*0x67b6b0*/
      Capacity = a4->Capacity; /*0x67b6b6*/
      aP0->Capacity = Capacity; /*0x67b6bb*/
      if ( Capacity ) /*0x67b6be*/
      {
        v14 = (void *)((unsigned int)(RA2_OPNEW(4 * Capacity)));
        aP0->Items = (unsigned int)((void *)v14);
        if ( v14 ) /*0x67b6d5*/
        {
          v15 = aP0->Capacity; /*0x67b6d7*/
          v16 = 0; /*0x67b6da*/
          aP0->IsAllocated = 1; /*0x67b6de*/
          if ( v15 > 0 ) /*0x67b6e2*/
          {
            do /*0x67b6f6*/
            {
              *((unsigned int *)aP0->Items + v16) = *((unsigned int *)a4->Items + v16); /*0x67b6ed*/
              ++v16; /*0x67b6f3*/
            }
            while ( v16 < aP0->Capacity ); /*0x67b6f6*/
          }
        }
      }
      else
      {
        aP0->Items = 0; /*0x67b6fa*/
        aP0->IsAllocated = 0; /*0x67b6fd*/
      }
    }
    aP0[1].vtable0 = (unsigned int)(a4[1].vtable0);
    aP0[1].Items = (unsigned int)(a4[1].Items);
    aP0->vtable1 = (void *)((unsigned int)((void*)&TypeList_BuildingTypeClass_const___vftable));
  }
  return (int)(aP0); /*0x67b682*/
}
}
// 0x67BB10
namespace gamemd {
void * ReadINIClassInfantryTypeList(INIClass * aP0, unsigned char *** edx0, INIClass * aP1, unsigned char * a3, unsigned int * a4)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  int InfantryTypeVector_field_0x14; // ecx
  void *InfantryTypeVector_field_0x04; // eax
  bool v11; // zf
  int v13; // eax
  void * v14;
  int v15; // ecx
  int v16; // eax
  InfantryTypeVector v17; // [esp+Ch] [ebp-9Ch] BYREF

  if ( /*0x67bb3c*/
         (unsigned char *)((INIClass*)((INIClass *)edx0))->GetString(/*0x67bb3c*/ aP1, a3, &g_INI_DefaultBuffer, (char *)&v17.q01C, 128) )
  {
    ((InfantryTypeVector *)(&v17))->Construct2(0, 0); /*0x67bb51*/
    v17.InfantryTypeVector_field_0x14 = 10; /*0x67bb5a*/
    v17.InfantryTypeVector_field_0x10 = 0; /*0x67bb68*/
    *(unsigned int *)v17.__pad_0 = (unsigned int)((void*)&TypeList_InfantryTypeClass_const___vftable); /*0x67bb6c*/
    for ( i = strtok((char *)&v17.q01C, (char *)&::Delimiter); i; i = strtok(0, (char *)&::Delimiter) ) /*0x67bb7e*/
    {
      if ( !*i ) /*0x67bb80*/
        break; /*0x67bb82*/
      v7 = KeywordType::FindOrCreate2(i); /*0x67bb8b*/
      if ( v7 /*0x67bbbb*/
        && (v17.InfantryTypeVector_field_0x10 < v17.InfantryTypeVector_field_0x08
         || (IDA_BYTE1(v17.InfantryTypeVector_field_0x0C) || !v17.InfantryTypeVector_field_0x08)
         && v17.InfantryTypeVector_field_0x14 > 0
&& (*(uint8_t (**)(InfantryTypeVector *, int, unsigned int))(*(unsigned int *)v17.__pad_0 + 8))( (InfantryTypeVector *)(&v17), v17.InfantryTypeVector_field_0x14 + v17.InfantryTypeVector_field_0x08, 0)) )



      {
        v8 = v17.InfantryTypeVector_field_0x10++; /*0x67bbc6*/
        *(unsigned int *)(v17.InfantryTypeVector_field_0x04 + 4 * v8) = v7; /*0x67bbd1*/
      }
    }
    *(unsigned int *)(aP0 + 4) = 0; /*0x67bbed*/
    *(unsigned int *)(aP0 + 8) = 0; /*0x67bbf0*/
    *(unsigned char *)(aP0 + 12) = 1; /*0x67bbf3*/
    *(unsigned char *)(aP0 + 13) = 0; /*0x67bbf7*/
    *(unsigned int *)aP0 = (unsigned int)((void*)&VectorClass_InfantryTypeClass_const___vftable); /*0x67bbfa*/
    ((HouseTypeClass *)((HouseTypeClass *)aP0))->readStartInfantry((unsigned int *)(&v17)); /*0x67bc00*/
    *(unsigned int *)aP0 = (unsigned int)((void*)&TypeList_InfantryTypeClass_const___vftable); /*0x67bc05*/
    *(unsigned int *)v17.__pad_0 = (unsigned int)((void*)&VectorClass_InfantryTypeClass_const___vftable); /*0x67bc0b*/
    InfantryTypeVector_field_0x14 = v17.InfantryTypeVector_field_0x14; /*0x67bc17*/
    *(unsigned int *)(aP0 + 16) = v17.InfantryTypeVector_field_0x10; /*0x67bc1b*/
    InfantryTypeVector_field_0x04 = (void *)v17.InfantryTypeVector_field_0x04; /*0x67bc1e*/
    v11 = v17.InfantryTypeVector_field_0x04 == 0; /*0x67bc22*/
    *(unsigned int *)(aP0 + 20) = InfantryTypeVector_field_0x14; /*0x67bc24*/
    if ( !v11 && IDA_BYTE1(v17.InfantryTypeVector_field_0x0C) ) /*0x67bc31*/
    {
      RA2_OPDEL(InfantryTypeVector_field_0x04); /*0x67bc38*/
      return aP0; /*0x67bc4b*/
    }
  }
  else
  {
    *(unsigned int *)(aP0 + 4) = 0; /*0x67bc59*/
    *(unsigned int *)(aP0 + 8) = 0; /*0x67bc5c*/
    *(unsigned char *)(aP0 + 12) = 1; /*0x67bc5f*/
    *(unsigned char *)(aP0 + 13) = 0; /*0x67bc63*/
    *(unsigned int *)aP0 = (unsigned int)((void*)&VectorClass_InfantryTypeClass_const___vftable); /*0x67bc66*/
    if ( (unsigned int *)aP0 != a4 ) /*0x67bc6c*/
    {
      ((Vector*)(_VectorClass_PBVInfantryTypeClass *)aP0)->Cleanup(); /*0x67bc70*/
      v13 = a4[2]; /*0x67bc76*/
      *(unsigned int *)(aP0 + 8) = v13; /*0x67bc7b*/
      if ( v13 ) /*0x67bc7e*/
      {
        v14 = (void *)((unsigned int)(RA2_OPNEW(4 * v13)));
        *(unsigned int *)(aP0 + 4) = (unsigned int)(v14); /*0x67bc92*/
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
    *(unsigned int *)aP0 = (unsigned int)((void*)&TypeList_InfantryTypeClass_const___vftable); /*0x67bccc*/
  }
  return aP0; /*0x67bc42*/
}
}
// 0x674500
namespace gamemd {  // G42.18c ns repair
int RulesClass::sub_674500()
{

  int result; // eax
  RulesClass *v2; // [esp+Ch] [ebp+4h]

  ((INIClass *)v2)->ReadDifficultyModifiers(); /*0x674515*/
  ((INIClass *)v2)->ReadDifficultyModifiers(); /*0x674527*/
  result = ((INIClass *)v2)->ReadDifficultyModifiers(); /*0x674539*/
  LOBYTE(result) = 1; /*0x67453f*/
  return result; /*0x67453e*/

}
}  // G42.18c ns repair
// 0x679EC0
namespace gamemd {
int unknown_libname_29()
{
  return ((Hash*)(int)&dword_887180)->ComputeHashSHA1();
}
} // namespace gamemd

// 0x679ED0
namespace gamemd {
int unknown_libname_30()
{
  return Hash::ComputeHashSHA1((int)&dword_887128);
}
} // namespace gamemd

// 0x679EE0
namespace gamemd {
int ArtINI_Load()
{
  unsigned int v1[22]; // [esp+0h] [ebp-6Ch] BYREF
  unsigned char v2[12]; // [esp+58h] [ebp-14h] BYREF
  int v3; // [esp+64h] [ebp-8h]

  INIClass::ClearSection((INIClass *)((int)&dword_887180), 0, 0); /*0x679eec*/
  ((CCFileClass *)(v1))->Construct((char *)aArtmdIni); /*0x679efa*/
  ((CCINIClass *)((int)(&dword_887180)))->Load((int)v1, 0, 0); /*0x679f0d*/
  v1[0] = (unsigned int)((void*)&CCFileClass_vftable); /*0x679f16*/
  v3 = 0; /*0x679f1e*/
  ((Vector *)((int)v2))->Clear((int)((Vector *)((int)v2))); /*0x679f26*/
  v1[0] = (unsigned int)&off_7E1668; /*0x679f2f*/
// 0x431b80
  return ((BufferIOFileClass *)(v1))->Dtor(); /*0x679f3c*/
}
} // namespace gamemd

// 0x67BAC0
namespace gamemd {
InfantryTypeClass * GetINIClassInt(unsigned char *** a0, INIClass * aP1, unsigned char * a2, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( ((::gamemd::INIClass*)(::gamemd::INIClass *)a0)->GetString((unsigned char *)(aP1), (gamemd::INIClass *)(a2), (gamemd::INIClass *)(&g_INI_DefaultBuffer), (int)(Destination), 128) ) /*0x67bade*/
// 0x524cb0
    return KeywordType::FindOrCreate2(Destination); /*0x67baeb*/
  else
    return (gamemd::InfantryTypeClass *)(a4); /*0x67baf9*/
}
} // namespace gamemd

// 0x67BD30
namespace gamemd {
AircraftTypeClass * GetINIClassKeyword(unsigned char *** a0, INIClass * aP1, unsigned char * a2, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( ((INIClass*)((INIClass *)a0))->GetString((unsigned char *)(aP1), (gamemd::INIClass *)(a2), (gamemd::INIClass *)(&g_INI_DefaultBuffer), (int)(Destination), 128) ) /*0x67bd4e*/
// 0x41cef0
    return (gamemd::AircraftTypeClass *)(KeywordClass::FindOrCreate(Destination); /*0x67bd5b*/);
  else
    return (gamemd::AircraftTypeClass *)(a4); /*0x67bd69*/
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
