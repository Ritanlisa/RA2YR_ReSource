// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x526810
namespace gamemd {
ObjectClass * * INIClass::BinarySearchSection(INIClass * aP1)
{
  int v3; // eax
  size_t v4; // ecx
  unsigned int *v6; // eax
  int v7; // eax
  size_t v8; // eax
  unsigned int *v9; // ecx
  void * v10;
  void * v11;
  int v12; // edi
  int v13; // edx
  unsigned int v15[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !aP1 ) /*0x526820*/
    return 0; /*0x526820*/
  memset(v15, 0, sizeof(v15)); /*0x52682d*/
  v3 = Checksummer::Add_Buffer(v15, aP1, strlen((const char *)aP1)); /*0x526844*/
  v4 = this->INIClass_field_2C; /*0x526849*/
  v3 = v3; /*0x52684c*/
  v3 = v3; /*0x526850*/
  if ( !v4 ) /*0x526854*/
    return 0; /*0x526854*/
  v6 = *(unsigned int **)(&this->q0146); /*0x52685a*/
  if ( v6 && *v6 == v3 ) /*0x526863*/
    goto LABEL_9; /*0x526863*/
  if ( !this->needsSave_flag ) /*0x526865*/
  {
    qsort(*(void **)(&this->sectionHead0), v4, 8u, CompareFunc4Int); /*0x526876*/
    this->unknown38 = 0; /*0x52687e*/
    this->needsSave_flag = 1; /*0x526881*/
  }
  v15[0] = (unsigned int)((gamemd::ObjectClass **)(v3));
  v7 = (gamemd::ObjectClass **)(System_Search(v15));
  if ( !v7 ) /*0x52689b*/
    return 0; /*0x526938*/
  this->unknown38 = v7; /*0x5268a1*/
  LABEL_9:
  v8 = this->INIClass_field_2C; /*0x5268a4*/
  if ( !v8 ) /*0x5268aa*/
    return unk_B7882C; /*0x5268aa*/
  v9 = *(unsigned int **)(&this->q0146); /*0x5268ac*/
  if ( v9 && *v9 == v3 ) /*0x5268b5*/
    return *(unsigned int *)(this->unknown38 + 4); /*0x526933*/
  if ( !this->needsSave_flag ) /*0x5268b7*/
  {
    qsort(*(void **)(&this->sectionHead0), v8, 8u, CompareFunc4Int); /*0x5268c8*/
    this->unknown38 = 0; /*0x5268d0*/
    this->needsSave_flag = 1; /*0x5268d3*/
  }
  v10 = (gamemd::ObjectClass **)(this->INIClass_field_2C);
  v11 = (gamemd::ObjectClass **)(this->q028);
  if ( v10 <= 0 ) /*0x5268df*/
    return unk_B7882C; /*0x5268df*/
  while ( 1 ) /*0x5268ec*/
  {
    v12 = (gamemd::ObjectClass **)(*(unsigned int *)(v11 + 8 * (v10 / 2)));
    v13 = (gamemd::ObjectClass **)(v11 + 8 * (v10 / 2));
    if ( v12 <= v3 ) /*0x5268f6*/
      break; /*0x5268f6*/
    v10 /= 2; /*0x5268f8*/
  LABEL_19:
    if ( v10 <= 0 ) /*0x52690a*/
      return unk_B7882C; /*0x52690a*/
  }
  if ( v12 != v3 ) /*0x5268fc*/
  {
    v11 = (void *)(v13 + 8);
    v10 += -1 - v10 / 2; /*0x526906*/
    goto LABEL_19; /*0x526906*/
  }
  if ( v13 ) /*0x52691f*/
  {
    this->unknown38 = (unsigned int)((gamemd::ObjectClass **)(v13));
    return (gamemd::ObjectClass **)(*(unsigned int *)(this->unknown38 + 4));
  }
  return (gamemd::ObjectClass **)(unk_B7882C);
}
}
// 0x526960
namespace gamemd {
VoxelStruct * * INIClass::GetKeyCount(INIClass * aP1)
{
  char *v2; // esi
  int v3; // edi
  unsigned int *v4; // eax
  int v5; // eax
  INIClass * v6;
  unsigned int *v7; // eax
  int v8; // eax
  int *v9; // esi
  int v10; // esi
  unsigned int v12[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !aP1 ) /*0x52696d*/
    return 0; /*0x52696d*/
  memset(v12, 0, sizeof(v12)); /*0x52697a*/
  v2 = &this->u32_28; /*0x5269a2*/
  v3 = Checksummer::Add_Buffer(v12, aP1, strlen((const char *)aP1)); /*0x5269a5*/
  aP1 = (uint8_t *)v3; /*0x5269a7*/
  if ( !*((unsigned int *)v2 + 1) ) /*0x5269ab*/
    return 0; /*0x5269b0*/
  v4 = (unsigned int *)*((unsigned int *)v2 + 4); /*0x5269b2*/
  if ( !v4 || *v4 != v3 ) /*0x5269bb*/
  {
    v5 = SortedArray::BinarySearch(&aP1); /*0x5269c4*/
    if ( !v5 ) /*0x5269cb*/
      return 0; /*0x5269cb*/
    *((unsigned int *)v2 + 4) = v5; /*0x5269cd*/
  }
  v6 = (gamemd::INIClass *)((int)((gamemd::INIClass *)(*((unsigned int *)v2 + 1))));
  aP1 = (gamemd::INIClass *)((uint8_t *)v3);
  if ( v6 ) /*0x5269d9*/
  {
    v7 = (unsigned int *)*((unsigned int *)v2 + 4); /*0x5269db*/
    if ( v7 && *v7 == v3 ) /*0x5269e4*/
      goto LABEL_12; /*0x5269e4*/
    v8 = SortedArray::BinarySearch(&aP1); /*0x5269ed*/
    if ( v8 ) /*0x5269f4*/
    {
      *((unsigned int *)v2 + 4) = v8; /*0x5269f6*/
  LABEL_12:
      v9 = (int *)(*((unsigned int *)v2 + 4) + 4); /*0x5269f9*/
      goto LABEL_14; /*0x5269ff*/
    }
  }
  v9 = (int *)&unk_B7882C; /*0x526a01*/
  LABEL_14:
  v10 = *v9; /*0x526a06*/
  if ( v10 ) /*0x526a0a*/
    return *(unsigned int *)(v10 + 48); /*0x526a14*/
  return 0; /*0x526a0f*/
}
}
// 0x528A10
namespace gamemd {
unsigned int INIClass::GetString(INIClass * aP1, unsigned char * a2, INIClass * aP3, INIClass * aP4, int Count)
{
  char *v6; // edi
  uint8_t *v9; // edx
  int v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  unsigned int *v14; // ecx
  int v15; // eax
  unsigned int *v16; // ecx
  int v17; // eax
  int *v18; // esi
  uint8_t *v19; // edi
  uint8_t **v20; // eax
  uint8_t **v21; // eax
  int *v22; // esi
  const char *v23; // ecx
  int v24; // esi
  uint8_t ** v26;
  uint8_t ** v27;
  uint8_t ** v28;

  v6 = (char *)(aP4);
  if ( !aP4 ) /*0x528a20*/
    return 0; /*0x528a20*/
  if ( Count < 2 ) /*0x528a2b*/
    return 0; /*0x528a2b*/
  aP1 = aP1; /*0x528a31*/
  if ( !aP1 ) /*0x528a37*/
    return 0; /*0x528a37*/
  v9 = a2; /*0x528a3d*/
  if ( !a2 ) /*0x528a43*/
    return 0; /*0x528a43*/
  if ( aP1 == (uint8_t *)this->u32_4 ) /*0x528a4f*/
  {
    v10 = (int)this->q008; /*0x528a55*/
    goto LABEL_7; /*0x528a55*/
  }
  v26 = (uint8_t **)((unsigned int)((uint8_t **)(0)));
  v27 = (uint8_t **)((int)((uint8_t **)(0)));
  v28 = (uint8_t **)((int)((uint8_t **)(0)));
  v19 = (gamemd::INIClass *)((uint8_t *)Checksummer::Add_Buffer(&v26, aP1, strlen((const char *)aP1)));
  aP1 = (gamemd::INIClass *)((uint8_t **)(v19));
  if ( !*(&this->u32_41) ) /*0x528b1f*/
    goto LABEL_29; /*0x528b1f*/
  v20 = *(&this->u32_44); /*0x528b26*/
  if ( v20 && *v20 == v19 ) /*0x528b2f*/
    goto LABEL_24; /*0x528b2f*/
  v21 = (uint8_t **)SortedArray::BinarySearch(&aP1); /*0x528b38*/
  if ( !v21 ) /*0x528b3f*/
  {
  LABEL_29: v23 = (char *)(aP3);
    v6 = (char *)(aP4);
    this->u32_4 = 0; /*0x528b8a*/
    this->q008 = 0; /*0x528b8d*/
    goto LABEL_36; /*0x528b90*/
  }
  *(&this->u32_44) = v21; /*0x528b41*/
  LABEL_24:
  aP1 = v19; /*0x528b44*/
  if ( (uint8_t)HashTable::BinarySearch(&aP1) ) /*0x528b4f*/
    v22 = (int *)(*(&this->u32_44) + 1); /*0x528b5b*/
  else
    v22 = (int *)&unk_B7882C; /*0x528b60*/
  v10 = *v22; /*0x528b65*/
  if ( !v10 ) /*0x528b69*/
    goto LABEL_29; /*0x528b69*/
  v9 = a2; /*0x528b6b*/
  v6 = aP4; /*0x528b6f*/
  this->q008 = (uint8_t **)v10; /*0x528b73*/
  this->u32_4 = (uint8_t **)aP1; /*0x528b76*/
  LABEL_7:
  if ( v10 ) /*0x528a5a*/
  {
    v26 = 0; /*0x528a60*/
    v27 = 0; /*0x528a64*/
    v28 = 0; /*0x528a68*/
    v11 = Checksummer::Add_Buffer(&v26, v9, strlen((const char *)v9)); /*0x528a7e*/
    v12 = *(unsigned int *)(v10 + 48); /*0x528a83*/
    v13 = v10 + 44; /*0x528a86*/
    a2 = (uint8_t *)v11; /*0x528a8b*/
    if ( v12 ) /*0x528a8f*/
    {
      v14 = *(unsigned int **)(v13 + 16); /*0x528a95*/
      if ( v14 && *v14 == v11 ) /*0x528a9e*/
      {
  LABEL_13:
        if ( *(unsigned int *)(v13 + 4) ) /*0x528abb*/
        {
          v16 = *(unsigned int **)(v13 + 16); /*0x528ac6*/
          if ( v16 && *v16 == v11 ) /*0x528acf*/
            goto LABEL_18; /*0x528acf*/
          v17 = HashTable::BinarySearchAlt(&a2); /*0x528ad8*/
          if ( v17 ) /*0x528adf*/
          {
            *(unsigned int *)(v13 + 16) = v17; /*0x528ae5*/
  LABEL_18:
            v18 = (int *)(*(unsigned int *)(v13 + 16) + 4); /*0x528ae8*/
  LABEL_31:
            v24 = *v18; /*0x528b97*/
            if ( v24 ) /*0x528b9b*/
            {
              v23 = *(const char **)(v24 + 16); /*0x528b9d*/
              if ( v23 ) /*0x528ba2*/
              {
                v6 = (char *)(aP4);
                goto LABEL_36; /*0x528baa*/
              }
            }
            goto LABEL_34; /*0x528ba2*/
          }
        }
        v18 = (int *)&unk_B78830; /*0x528b92*/
        goto LABEL_31; /*0x528b92*/
      }
      v15 = HashTable::BinarySearchAlt(&a2); /*0x528aa7*/
      if ( v15 ) /*0x528aae*/
      {
        *(unsigned int *)(v13 + 16) = v15; /*0x528ab4*/
        v11 = (int)a2; /*0x528ab7*/
        goto LABEL_13; /*0x528ab7*/
      }
    }
  LABEL_34: v6 = (char *)(aP4);
  }
  v23 = (const char *)(aP3);
  LABEL_36:
  if ( !v23 ) /*0x528bb9*/
  {
    *v6 = 0; /*0x528bbb*/
    return 0; /*0x528bc6*/
  }
  strncpy(v6, v23, Count); /*0x528bd0*/
  v6[Count - 1] = 0; /*0x528bde*/
  String::Trim(v6); /*0x528be3*/
  return strlen(v6); /*0x528bbe*/
}
}
// 0x535AA0
namespace gamemd {
INIClass::INIClass()
{
  void** result;
  unsigned int *v2; // ecx
  unsigned int *v3; // edx
  void * v4;
  void * v5;
  unsigned int * v6;
  int v7; // esi

  result = (void **)((unsigned int *)(this));
  v2 = (unsigned int *)(&this->sectionHead);
  v3 = (unsigned int *)(result + 7);
  result[1] = 0; /*0x535aac*/
  result[2] = 0; /*0x535aaf*/
  v2[1] = 0; /*0x535ab2*/
  v2[2] = 0; /*0x535ab5*/
  result[8] = 0; /*0x535abe*/
  result[9] = 0; /*0x535ac1*/
  if ( result != (unsigned int *)-28 ) /*0x535ad4*/
  {
    v4 = result[8]; /*0x535ad6*/
    if ( v4 ) /*0x535adb*/
    {
      v5 = result[9]; /*0x535add*/
      if ( v5 ) /*0x535ae2*/
      {
        *(unsigned int *)(v5 + 4) = v4; /*0x535ae4*/
        *(unsigned int *)(result[8] + 8) = result[9]; /*0x535aed*/
        result[9] = 0; /*0x535af0*/
        result[8] = 0; /*0x535af3*/
      }
    }
  }
  v6 = (unsigned int)(v2[1]);
  result[9] = (void *)((unsigned int)(v2));
  result[8] = (void *)((unsigned int)(v6));
  v7 = (unsigned int)(v2[1]);
  if ( v7 ) /*0x535b04*/
    this->v3 = v3; /*0x535b06*/
  v2[1] = v3; /*0x535b09*/
  result[10] = 0; /*0x535b13*/
  result[11] = 0; /*0x535b16*/
  result[12] = 0; /*0x535b19*/
  *((unsigned char *)result + 52) = 0; /*0x535b1c*/
  result[14] = 0; /*0x535b1f*/
  result[15] = 0; /*0x535b23*/
  *result = &(void*, unsigned int a3, unsigned int a1)(void*)&INIClass_vftable; /*0x535b27*/
  return result; /*0x535b22*/
}
}
// 0x474620
namespace gamemd {
INIClass * INIClass::ReadCoord(double aP1, int a2, INIClass * aP2, int a4, void * a1, void * a3)
{
  INIClass::ReadDouble_Overwrite(a2, a3, -1.0); /*0x474631*/
  if ( a1 == -1.0 ) /*0x474641*/
    return a4; /*0x474645*/
  else
    return Math::RoundToInt(a1 * 256.0); /*0x474652*/
}
} // namespace gamemd

// 0x4757D0
namespace gamemd {
int INIClass::GetBool(INIClass * aP1, unsigned char * a2, int a4)
{
  int result; // eax
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( !INIClass::GetString(this, aP1, a2, &g_INI_DefaultBuffer, Destination, 128) ) /*0x4757f2*/
    return a4; /*0x4757f2*/
  result = LookupNameIndex(Destination); /*0x4757ff*/
  if ( result == -1 ) /*0x475807*/
    return a4; /*0x475809*/
  return result; /*0x475810*/
}
} // namespace gamemd

// 0x526CC0
namespace gamemd {
int INIClass::GetStringByIndex(CCINIClass * aP1, CCINIClass * aP2)
{
  char *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  unsigned int *v8; // eax
  unsigned int v10[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !aP1 ) /*0x526ccd*/
    return 0; /*0x526ccd*/
  memset(v10, 0, sizeof(v10)); /*0x526cda*/
  v3 = &this->u32_28; /*0x526d02*/
  v4 = Checksummer::Add_Buffer(v10, aP1, strlen((const char *)aP1)); /*0x526d05*/
  aP1 = (uint8_t *)v4; /*0x526d07*/
  if ( !*((unsigned int *)v3 + 1) ) /*0x526d0b*/
    return 0; /*0x526d10*/
  if ( !(uint8_t)SortedArray::CheckCache(&aP1) ) /*0x526d19*/
  {
    v5 = SortedArray::BinarySearch(&aP1); /*0x526d29*/
    if ( !v5 ) /*0x526d30*/
      return 0; /*0x526d30*/
    *((unsigned int *)v3 + 4) = v5; /*0x526d32*/
  }
  aP1 = (gamemd::CCINIClass *)((uint8_t *)v4);
  v6 = *(unsigned int *)SortedArray::FindValue(&aP1); /*0x526d45*/
  if ( v6 ) /*0x526d49*/
  {
    aP2 = aP2; /*0x526d4b*/
    if ( aP2 < *(unsigned int *)(v6 + 48) ) /*0x526d54*/
    {
      v8 = *(unsigned int **)(v6 + 24); /*0x526d56*/
      if ( v8 ) /*0x526d5b*/
      {
        while ( v8[1] && v8[2] ) /*0x526d69*/
        {
          if ( !aP2 ) /*0x526d6d*/
            return v8[3]; /*0x526d80*/
          v8 = (unsigned int *)v8[1]; /*0x526d6f*/
          --aP2; /*0x526d71*/
        }
      }
    }
  }
  return 0; /*0x526d7b*/
}
} // namespace gamemd

// 0x5278F0
namespace gamemd {
int INIClass::ReadInt(ObjectClass * aP1, ReferenceCounted * aP2, INIClass * aP3)
{
  char *v3; // eax
  char *v5; // [esp-8h] [ebp-Ch]

  v5 = String::GetOrEmpty_Alt(aP2); /*0x527905*/
  v3 = String::GetOrEmpty_Alt(aP1); /*0x527906*/
  return INIClass::ReadInt_Overwrite(v3, v5, aP3); /*0x527913*/
}
} // namespace gamemd

// 0x529820
namespace gamemd {
char INIClass::GetInt(char ** a2, char ** a3, unsigned int * a4)
{
  char *v5; // edi
  uint8_t *v6; // ebx
  char Buffer[56]; // [esp+Ch] [ebp-38h] BYREF

  v5 = String::GetOrEmpty_Alt(a3); /*0x529835*/
  v6 = (uint8_t *)String::GetOrEmpty_Alt(a2); /*0x52983c*/
  sprintf(Buffer, "%d,%d", *a4, a4[1]); /*0x529853*/
  return INIClass::SetString(v6, v5, Buffer); /*0x529869*/
}
} // namespace gamemd
