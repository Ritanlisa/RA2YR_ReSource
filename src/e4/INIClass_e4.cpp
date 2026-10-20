// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include <new>  // W20L4 T2 placement-new Constructor forwarding

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
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/HoverLocomotionClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/TubeClass_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/GenericList_e4.hpp"

// 0x526810
namespace gamemd {  // G42.18 ns repair
ObjectClass * * INIClass::BinarySearchSection(INIClass * aP1, void *a2)
{

  int v3; // eax
  size_t v4; // ecx
  unsigned int v5; // edi
  unsigned int *v6; // eax
  int v7; // eax
  size_t v8; // eax
  unsigned int *v9; // ecx
  int v10; // ecx
  int v11; // ebp
  int v12; // edi
  int v13; // edx
  unsigned int v15[3]; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+1Ch] [ebp+4h]

  if ( !a2 ) /*0x526820*/
    return 0; /*0x526820*/
  memset(v15, 0, sizeof(v15)); /*0x52682d*/
  v3 = Checksummer::Add_Buffer(v15, a2, strlen((const char *)a2)); /*0x526844*/
  v4 = (size_t)(aP1->INIClass_field_2C); /*0x526849*/
  v5 = v3; /*0x52684c*/
  v16 = v3; /*0x526850*/
  if ( !v4 ) /*0x526854*/
    return 0; /*0x526854*/
  v6 = (unsigned int *)(aP1->unknown38); /*0x52685a*/
  if ( v6 && *v6 == v5 ) /*0x526863*/
    goto LABEL_9; /*0x526863*/
  if ( !aP1->needsSave_flag ) /*0x526865*/
  {
    qsort(aP1->needsSave_flag, v4, 8u, CompareFunc4Int); /*0x526876*/
    aP1->unknown38 = 0; /*0x52687e*/
    aP1->needsSave_flag = 1; /*0x526881*/
  }
  v15[0] = v5; /*0x526890*/
  v7 = System_Search(v15); /*0x526894*/
  if ( !v7 ) /*0x52689b*/
    return 0; /*0x526938*/
  aP1->unknown38 = v7; /*0x5268a1*/
  LABEL_9:
  v8 = (size_t)(aP1->INIClass_field_2C); /*0x5268a4*/
  if ( !v8 ) /*0x5268aa*/
    return (gamemd::ObjectClass **)(unk_B7882C); /*0x5268aa*/
  v9 = (unsigned int *)(aP1->unknown38); /*0x5268ac*/
  if ( v9 && *v9 == v5 ) /*0x5268b5*/
    return (gamemd::ObjectClass **)(*(unsigned int *)(aP1->unknown38 + 4)); /*0x526933*/
  if ( !aP1->needsSave_flag ) /*0x5268b7*/
  {
    qsort(aP1->needsSave_flag, v8, 8u, CompareFunc4Int); /*0x5268c8*/
    aP1->unknown38 = 0; /*0x5268d0*/
    aP1->needsSave_flag = 1; /*0x5268d3*/
  }
  v10 = (int)(aP1->INIClass_field_2C); /*0x5268d7*/
  v11 = aP1->needsSave_flag; /*0x5268da*/
  if ( v10 <= 0 ) /*0x5268df*/
    return (gamemd::ObjectClass **)(unk_B7882C); /*0x5268df*/
  while ( 1 ) /*0x5268ec*/
  {
    v12 = *(unsigned int *)(v11 + 8 * (v10 / 2)); /*0x5268ec*/
    v13 = v11 + 8 * (v10 / 2); /*0x5268f0*/
    if ( v12 <= v16 ) /*0x5268f6*/
      break; /*0x5268f6*/
    v10 /= 2; /*0x5268f8*/
    LABEL_19:
    if ( v10 <= 0 ) /*0x52690a*/
      return (gamemd::ObjectClass **)(unk_B7882C); /*0x52690a*/
  }
  if ( v12 != v16 ) /*0x5268fc*/
  {
    v11 = v13 + 8; /*0x5268fe*/
    v10 += -1 - v10 / 2; /*0x526906*/
    goto LABEL_19; /*0x526906*/
  }
  if ( v13 ) /*0x52691f*/
  {
    aP1->unknown38 = v13; /*0x526921*/
    return (gamemd::ObjectClass **)(*(unsigned int *)(aP1->unknown38 + 4)); /*0x526921*/
  }
  return (gamemd::ObjectClass **)(unk_B7882C); /*0x526912*/

}
}  // G42.18 ns repair
// 0x526960
namespace gamemd {
int INIClass::GetKeyCount(INIClass * aP1, void *a2)
{

  SortedArray *v2; // esi
  unsigned __int8 *v3; // edi
  unsigned __int8 **SortedArray_field_0x10; // eax
  int v5; // eax
  int SortedArray_field_0x04; // eax
  unsigned __int8 **v7; // eax
  int v8; // eax
  unsigned int **v9; // esi
  unsigned int *v10; // esi
  unsigned char v12[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x52696d*/
    return 0; /*0x52696d*/
  memset(v12, 0, sizeof(v12)); /*0x52697a*/
  v2 = &this->needsSave_flag; /*0x5269a2*/
  v3 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v12, a2, strlen((const char *)a2)); /*0x5269a5*/
  a2 = v3; /*0x5269a7*/
  if ( !v2->SortedArray_field_0x04 ) /*0x5269ab*/
    return 0; /*0x5269b0*/
  SortedArray_field_0x10 = (unsigned __int8 **)v2->SortedArray_field_0x10; /*0x5269b2*/
  if ( !SortedArray_field_0x10 || *SortedArray_field_0x10 != v3 ) /*0x5269bb*/
  {
    v5 = (v2)->BinarySearch((int *)&a2); /*0x5269c4*/
    if ( !v5 ) /*0x5269cb*/
      return 0; /*0x5269cb*/
    v2->SortedArray_field_0x10 = v5; /*0x5269cd*/
  }
  SortedArray_field_0x04 = v2->SortedArray_field_0x04; /*0x5269d0*/
  a2 = v3; /*0x5269d3*/
  if ( SortedArray_field_0x04 ) /*0x5269d9*/
  {
    v7 = (unsigned __int8 **)v2->SortedArray_field_0x10; /*0x5269db*/
    if ( v7 && *v7 == v3 ) /*0x5269e4*/
      goto LABEL_12; /*0x5269e4*/
    v8 = (v2)->BinarySearch((int *)&a2); /*0x5269ed*/
    if ( v8 ) /*0x5269f4*/
    {
      v2->SortedArray_field_0x10 = v8; /*0x5269f6*/
LABEL_12:
      v9 = (unsigned int **)(v2->SortedArray_field_0x10 + 4); /*0x5269f9*/
      goto LABEL_14; /*0x5269ff*/
    }
  }
  v9 = (unsigned int **)&unk_B7882C; /*0x526a01*/
LABEL_14:
  v10 = *v9; /*0x526a06*/
  if ( v10 ) /*0x526a0a*/
    return v10[12]; /*0x526a14*/
  return 0; /*0x526a0f*/

}
}
// 0x528A10
namespace gamemd {
unsigned int INIClass::GetString(uint8_t *a2, uint8_t *a3, char *Source, char *Destination, int Count, int aP4, int aP1, int aP3, int a1, int a4, int a5, int aP2)
{

  char *v6; // edi
  unsigned __int8 *v8; // ebx
  unsigned __int8 *v9; // edx
  HashTable *v10; // esi
  unsigned __int8 *v11; // eax
  int HashTable_field_0x30; // ecx
  HashTable *p_HashTable_field_0x2C; // esi
  unsigned __int8 **HashTable_field_0x10; // ecx
  int v15; // eax
  unsigned __int8 **v16; // ecx
  int v17; // eax
  char ***v18; // esi
  unsigned __int8 *v19; // edi
  unsigned __int8 **unknown38; // eax
  int v21; // eax
  HashTable **v22; // esi
  char *v23; // ecx
  char **v24; // esi
  unsigned char v26[12]; // [esp+Ch] [ebp-Ch] BYREF

  v6 = Destination; /*0x528a18*/
  if ( !Destination ) /*0x528a20*/
    return 0; /*0x528a20*/
  if ( Count < 2 ) /*0x528a2b*/
    return 0; /*0x528a2b*/
  v8 = a2; /*0x528a31*/
  if ( !a2 ) /*0x528a37*/
    return 0; /*0x528a37*/
  v9 = a3; /*0x528a3d*/
  if ( !a3 ) /*0x528a43*/
    return 0; /*0x528a43*/
  if ( a2 == (unsigned __int8 *)this->headNode[0] ) /*0x528a4f*/
  {
    v10 = (HashTable *)this->headNode[1]; /*0x528a55*/
    goto LABEL_7; /*0x528a55*/
  }
  memset(v26, 0, sizeof(v26)); /*0x528af3*/
  v19 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v26, a2, strlen((const char *)a2)); /*0x528b19*/
  a2 = v19; /*0x528b1b*/
  if ( !this->INIClass_field_2C ) /*0x528b1f*/
    goto LABEL_29; /*0x528b1f*/
  unknown38 = (unsigned __int8 **)this->unknown38; /*0x528b26*/
  if ( unknown38 && *unknown38 == v19 ) /*0x528b2f*/
    goto LABEL_24; /*0x528b2f*/
  v21 = SortedArray::BinarySearch(&this->needsSave_flag, (int *)&a2); /*0x528b38*/
  if ( !v21 ) /*0x528b3f*/
  {
LABEL_29:
    v23 = Source; /*0x528b80*/
    v6 = Destination; /*0x528b84*/
    this->headNode[0] = 0; /*0x528b8a*/
    this->headNode[1] = 0; /*0x528b8d*/
    goto LABEL_36; /*0x528b90*/
  }
  this->unknown38 = v21; /*0x528b41*/
LABEL_24:
  a2 = v19; /*0x528b44*/
  if ( (unsigned __int8)HashTable::BinarySearch(&this->needsSave_flag, (int *)&a2) ) /*0x528b4f*/
    v22 = (HashTable **)(this->unknown38 + 4); /*0x528b5b*/
  else
    v22 = (HashTable **)&unk_B7882C; /*0x528b60*/
  v10 = *v22; /*0x528b65*/
  if ( !v10 ) /*0x528b69*/
    goto LABEL_29; /*0x528b69*/
  v9 = a3; /*0x528b6b*/
  v6 = Destination; /*0x528b6f*/
  this->headNode[1] = (int)v10; /*0x528b73*/
  this->headNode[0] = (int)v8; /*0x528b76*/
LABEL_7:
  if ( v10 ) /*0x528a5a*/
  {
    memset(v26, 0, sizeof(v26)); /*0x528a60*/
    v11 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v26, v9, strlen((const char *)v9)); /*0x528a7e*/
    HashTable_field_0x30 = v10->HashTable_field_0x30; /*0x528a83*/
    p_HashTable_field_0x2C = &v10->q02C; /*0x528a86*/
    a3 = v11; /*0x528a8b*/
    if ( HashTable_field_0x30 ) /*0x528a8f*/
    {
      HashTable_field_0x10 = (unsigned __int8 **)p_HashTable_field_0x2C->HashTable_field_0x10; /*0x528a95*/
      if ( HashTable_field_0x10 && *HashTable_field_0x10 == v11 ) /*0x528a9e*/
      {
LABEL_13:
        if ( p_HashTable_field_0x2C->HashTable_field_0x04 ) /*0x528abb*/
        {
          v16 = (unsigned __int8 **)p_HashTable_field_0x2C->HashTable_field_0x10; /*0x528ac6*/
          if ( v16 && *v16 == v11 ) /*0x528acf*/
            goto LABEL_18; /*0x528acf*/
          v17 = HashTable::BinarySearchAlt(p_HashTable_field_0x2C, (int *)&a3); /*0x528ad8*/
          if ( v17 ) /*0x528adf*/
          {
            p_HashTable_field_0x2C->HashTable_field_0x10 = v17; /*0x528ae5*/
LABEL_18:
            v18 = (char ***)(p_HashTable_field_0x2C->HashTable_field_0x10 + 4); /*0x528ae8*/
LABEL_31:
            v24 = *v18; /*0x528b97*/
            if ( v24 ) /*0x528b9b*/
            {
              v23 = v24[4]; /*0x528b9d*/
              if ( v23 ) /*0x528ba2*/
              {
                v6 = Destination; /*0x528ba4*/
                goto LABEL_36; /*0x528baa*/
              }
            }
            goto LABEL_34; /*0x528ba2*/
          }
        }
        v18 = (char ***)&unk_B78830; /*0x528b92*/
        goto LABEL_31; /*0x528b92*/
      }
      v15 = HashTable::BinarySearchAlt(p_HashTable_field_0x2C, (int *)&a3); /*0x528aa7*/
      if ( v15 ) /*0x528aae*/
      {
        p_HashTable_field_0x2C->HashTable_field_0x10 = v15; /*0x528ab4*/
        v11 = a3; /*0x528ab7*/
        goto LABEL_13; /*0x528ab7*/
      }
    }
LABEL_34:
    v6 = Destination; /*0x528bac*/
  }
  v23 = Source; /*0x528bb2*/
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
// 0x535AA0 site-form Constructor supply (W20L4 T2; forwards to ctor def below)
namespace gamemd {
void * INIClass::Constructor(void *aP1) { return new (aP1) INIClass(); }
}
}
// 0x535AA0
namespace gamemd {
INIClass::INIClass()
{


  unsigned int *result; // eax
  result = (unsigned int *)(this->__pad_0); /*0x535aa0*/
  int *sectionHead; // ecx
  sectionHead = (int *)(this->sectionHead); /*0x535aa6*/
  unsigned int *v3 = result + 7; // edx /*0x535aa9*/
  result->headNode = 0; /*0x535aac*/
  result->q008 = 0; /*0x535aaf*/
  sectionHead->Prev = 0; /*0x535ab2*/
  sectionHead->Next = 0; /*0x535ab5*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E1B0C) */  /*0x535ab8*/
  result[8] = 0; /*0x535abe*/
  result[9] = 0; /*0x535ac1*/
  result[7] = (unsigned int)(&g_ptr_7E1B0C); /*0x535ac4*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E1B04) */  /*0x535acd*/
  if ( result != (unsigned int *)-28 ) /*0x535ad4*/
  {
    int v4; // edi
    v4 = result[8]; /*0x535ad6*/
    if ( v4 ) /*0x535adb*/
    {
      int v5; // esi
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
  int v6 = sectionHead->Prev; // esi /*0x535af6*/
  result[9] = (unsigned int)(sectionHead); /*0x535af9*/
  result[8] = v6; /*0x535afc*/
  int v7 = sectionHead->Prev; // esi /*0x535aff*/
  if ( v7 ) /*0x535b04*/
    v7->Next = v3; /*0x535b06*/
  sectionHead->Prev = (int)v3; /*0x535b09*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_a3009f) */  /*0x535b0c*/
  result->needsSave_flag = 0; /*0x535b13*/
  result->INIClass_field_2C = 0; /*0x535b16*/
  result->unknown30 = 0; /*0x535b19*/
  result->needsSave_flag = 0; /*0x535b1c*/
  result->unknown38 = 0; /*0x535b1f*/
  result->INIClass_field_3C = 0; /*0x535b23*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EA5F4) */  /*0x535b27*/
  return result; /*0x535b22*/

}
}
// 0x474620
namespace gamemd {
int INIClass::ReadCoord(double *a1, double a2, uint8_t *a3, uint8_t *a4, int a5, int aP2, int aP1, int aP3)
{

  INIClass::ReadDouble_Overwrite(a1, a3, a4, -1.0); /*0x474631*/
  if ( a2 == -1.0 ) /*0x474641*/
    return a5; /*0x474645*/
  int result; // eax
  (*((unsigned short *)&(result))) = Math::RoundToInt(a2 * 256.0); /*0x474652*/
  return result; /*0x474649*/
}
} // namespace gamemd

// 0x4757D0
namespace gamemd {
int INIClass::GetBool(uint8_t *aP1, uint8_t *a2, int a4)
{

  char Destination[128]; // [esp+0h] [ebp-80h] BYREF
  if ( !(this)->GetString(aP1, a2, &g_INI_DefaultBuffer, Destination, 128) ) /*0x4757f2*/
    return a4; /*0x4757f2*/
  int result; // eax
  result = ((ObjectClass *)(ObjectClass *)Destination)->LookupNameIndex(); /*0x4757ff*/
  if ( result == -1 ) /*0x475807*/
    return a4; /*0x475809*/
  return result; /*0x475810*/
}
} // namespace gamemd

// 0x526CC0
namespace gamemd {
int INIClass::GetStringByIndex(CCINIClass * aP1, CCINIClass * aP2, void *a3)
{

  SortedArray *v3; // esi
  unsigned __int8 *v4; // edi
  int v5; // eax
  unsigned int *v6; // eax
  int v7; // edx
  unsigned int *v8; // eax
  unsigned char v10[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( !aP2 ) /*0x526ccd*/
    return 0; /*0x526ccd*/
  memset(v10, 0, sizeof(v10)); /*0x526cda*/
  v3 = &this->needsSave_flag; /*0x526d02*/
  v4 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v10, aP2, strlen((const char *)aP2)); /*0x526d05*/
  aP2 = v4; /*0x526d07*/
  if ( !v3->SortedArray_field_0x04 ) /*0x526d0b*/
    return 0; /*0x526d10*/
  if ( !(unsigned __int8)SortedArray::CheckCache(v3, &aP2) ) /*0x526d19*/
  {
    v5 = (v3)->BinarySearch((int *)&aP2); /*0x526d29*/
    if ( !v5 ) /*0x526d30*/
      return 0; /*0x526d30*/
    v3->SortedArray_field_0x10 = v5; /*0x526d32*/
  }
  aP2 = v4; /*0x526d3c*/
  v6 = *(unsigned int **)(v3)->FindValue((int *)&aP2); /*0x526d45*/
  if ( v6 ) /*0x526d49*/
  {
    v7 = a3; /*0x526d4b*/
    if ( a3 < (int)v6[12] ) /*0x526d54*/
    {
      v8 = (unsigned int *)v6[6]; /*0x526d56*/
      if ( v8 ) /*0x526d5b*/
      {
        while ( v8[1] && v8[2] ) /*0x526d69*/
        {
          if ( !v7 ) /*0x526d6d*/
            return v8[3]; /*0x526d80*/
          v8 = (unsigned int *)v8[1]; /*0x526d6f*/
          --v7; /*0x526d71*/
        }
      }
    }
  }
  return 0; /*0x526d7b*/

}
} // namespace gamemd

// 0x5278F0
namespace gamemd {
int INIClass::ReadInt(String *a2, String *a3, int a4, int aP2, int aP1, int a1, int aP3)
{

  uint8_t *v7; // [esp-8h] [ebp-Ch]
  v7 = (uint8_t *)((String *)(a3))->GetOrEmpty_Alt(); /*0x527905*/
  uint8_t *v5; // eax
  v5 = (uint8_t *)((String *)(a2))->GetOrEmpty_Alt(); /*0x527906*/
  return INIClass::ReadInt_Overwrite(v5, v7, a4); /*0x527913*/
}
} // namespace gamemd

// 0x529820
namespace gamemd {
char INIClass::GetInt(char ** a2, char ** a3, unsigned int * a4)
{

  char *v5; // edi
  v5 = ((String *)(a3))->GetOrEmpty_Alt(); /*0x529835*/
  uint8_t *v6; // ebx
  v6 = (uint8_t *)((String *)(a2))->GetOrEmpty_Alt(); /*0x52983c*/
  char Buffer[56]; // [esp+Ch] [ebp-38h] BYREF
  sprintf(Buffer, "%d,%d", *a4, a4[1]); /*0x529853*/
  return INIClass::SetString(v6, v5, Buffer); /*0x529869*/
}
} // namespace gamemd
