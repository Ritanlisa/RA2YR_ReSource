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
namespace gamemd {
ObjectClass * * INIClass::BinarySearchSection(INIClass * aP1, void *a2)
{
    unsigned int v13 = 0;  /* G37 hoist */
    unsigned int v13 = 0;  /* G37 hoist */
    unsigned int v13 = 0;  /* G37 hoist */
    unsigned int v13 = 0;  /* G37 hoist */
    unsigned int v13 = 0;  /* G37 hoist */

  int v3; // eax
  size_t v4; // ecx
  unsigned int v5; // edi
  unsigned int *v6; // eax
  int v7; // eax
  size_t v8; // eax
  unsigned int *v9; // ecx
  ObjectClass ** v10;
  ObjectClass ** v11;
  ObjectClass ** v12;
  ObjectClass ** v13;
  unsigned int v15[3]; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+1Ch] [ebp+4h]

  if ( !aP1 ) /*0x526820*/
    return 0; /*0x526820*/
  memset(v15, 0, sizeof(v15)); /*0x52682d*/
  v3 = Checksummer::Add_Buffer(v15, aP1, strlen((const char *)aP1)); /*0x526844*/
  v4 = *((unsigned int *)this + 11); /*0x526849*/
  v5 = v3; /*0x52684c*/
  v16 = v3; /*0x526850*/
  if ( !v4 ) /*0x526854*/
    return 0; /*0x526854*/
  v6 = *(unsigned int **)((char *)this + 56); /*0x52685a*/
  if ( v6 && *v6 == v5 ) /*0x526863*/
    goto LABEL_9; /*0x526863*/
  if ( !*((unsigned char *)this + 52) ) /*0x526865*/
  {
    qsort(*(void **)((char *)this + 40), v4, 8u, CompareFunc4Int); /*0x526876*/
    *((unsigned int *)this + 14) = 0; /*0x52687e*/
    *((unsigned char *)this + 52) = 1; /*0x526881*/
  }
  v15[0] = (unsigned int)((gamemd::ObjectClass **)(v5));
  v7 = (gamemd::ObjectClass **)(System_Search(v15));
  if ( !v7 ) /*0x52689b*/
    return 0; /*0x526938*/
  *((unsigned int *)this + 14) = v7; /*0x5268a1*/
LABEL_9:
  v8 = *((unsigned int *)this + 11); /*0x5268a4*/
  if ( !v8 ) /*0x5268aa*/
    return (gamemd::ObjectClass **)(unk_B7882C); /*0x5268aa*/
  v9 = *(unsigned int **)((char *)this + 56); /*0x5268ac*/
  if ( v9 && *v9 == v5 ) /*0x5268b5*/
    return (gamemd::ObjectClass **)(*(unsigned int *)(*((unsigned int *)this + 14) + 4)); /*0x526933*/
  if ( !*((unsigned char *)this + 52) ) /*0x5268b7*/
  {
    qsort(*(void **)((char *)this + 40), v8, 8u, CompareFunc4Int); /*0x5268c8*/
    *((unsigned int *)this + 14) = 0; /*0x5268d0*/
    *((unsigned char *)this + 52) = 1; /*0x5268d3*/
  }
  v10 = (gamemd::ObjectClass **)((int)((gamemd::ObjectClass **)(*((unsigned int *)this + 11))));
  v11 = (gamemd::ObjectClass **)((int)((gamemd::ObjectClass **)(*((unsigned int *)this + 10))));
  if ( v10 <= 0 ) /*0x5268df*/
    return (gamemd::ObjectClass **)(unk_B7882C); /*0x5268df*/
  while ( 1 ) /*0x5268ec*/
  {
    v12 = (gamemd::ObjectClass **)((int)((gamemd::ObjectClass **)(*(unsigned int *)(v11 + 8 * ((unsigned int)(v10)/ 2)))));
    v13 = (unsigned int)((gamemd::ObjectClass **)(v11 + 8 * ((unsigned int)(v10)/ 2)));
    if ( v12 <= (gamemd::ObjectClass **)(v16) ) /*0x5268f6*/
      break; /*0x5268f6*/
    (unsigned int)(v10)/= 2; /*0x5268f8*/
LABEL_19:
    if ( v10 <= 0 ) /*0x52690a*/
      return (gamemd::ObjectClass **)(unk_B7882C); /*0x52690a*/
  }
  if ( v12 != (gamemd::ObjectClass **)(v16) ) /*0x5268fc*/
  {
    v11 = (gamemd::ObjectClass **)(v13 + 8);
    v10 += -1 - (unsigned int)(v10)/ 2; /*0x526906*/
    goto LABEL_19; /*0x526906*/
  }
  if ( v13 ) /*0x52691f*/
  {
    *((unsigned int *)this + 14) = v13; /*0x526921*/
    return (gamemd::ObjectClass **)(*(unsigned int *)(*((unsigned int *)this + 14) + 4)); /*0x526921*/
  }
  return (gamemd::ObjectClass **)(unk_B7882C);

}
}
// 0x526960
namespace gamemd {
VoxelStruct * * INIClass::GetKeyCount(INIClass * aP1, void *a2)
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
  v2 = (char *)((unsigned char *)this + 40); /*0x5269a2*/
  v3 = Checksummer::Add_Buffer(v12, aP1, strlen((const char *)aP1)); /*0x5269a5*/
  aP1 = (gamemd::INIClass *)((uint8_t *)v3); /*0x5269a7*/
  if ( !*((unsigned int *)v2 + 1) ) /*0x5269ab*/
    return 0; /*0x5269b0*/
  v4 = (unsigned int *)*((unsigned int *)v2 + 4); /*0x5269b2*/
  if ( !v4 || *v4 != v3 ) /*0x5269bb*/
  {
    v5 = SortedArray::BinarySearch((int *)(&aP1)); /*0x5269c4*/
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
    v8 = SortedArray::BinarySearch((int *)(&aP1)); /*0x5269ed*/
    if ( v8 ) /*0x5269f4*/
    {
      *((unsigned int *)v2 + 4) = v8; /*0x5269f6*/
LABEL_12:
      v9 = (int *)(*((unsigned int *)v2 + 4) + 4); /*0x5269f9*/
      goto LABEL_14; /*0x5269ff*/
    }
  }
  v9 = (int *)((gamemd::VoxelStruct **)((int *)&unk_B7882C));
LABEL_14: v10 = (int)((gamemd::VoxelStruct **)(*v9));
  if ( v10 ) /*0x526a0a*/
    return (gamemd::VoxelStruct **)(*(unsigned int *)(v10 + 48)); /*0x526a14*/
  return 0; /*0x526a0f*/

}
}
// 0x528A10
namespace gamemd {
unsigned int INIClass::GetString(INIClass * aP1, unsigned char * a2, INIClass * aP3, INIClass * aP4, int Count, void *a6)
{

  char *v6; // edi
  uint8_t *v8; // ebx
  uint8_t *v9; // edx
  int v10; // esi
  uint8_t *v11; // eax
  int v12; // ecx
  HashTable *v13; // esi
  uint8_t **HashTable_field_0x10; // ecx
  int v15; // eax
  uint8_t **v16; // ecx
  int v17; // eax
  int *v18; // esi
  uint8_t *v19; // edi
  uint8_t **unknown38; // eax
  int v21; // eax
  int *v22; // esi
  char *v23; // ecx
  int v24; // esi
  unsigned char v26[12]; // [esp+Ch] [ebp-Ch] BYREF

  v6 = (char *)((unsigned char *)(aP4));
  if ( !aP4 ) /*0x528a20*/
    return 0; /*0x528a20*/
  if ( Count < 2 ) /*0x528a2b*/
    return 0; /*0x528a2b*/
  v8 = (uint8_t *)(aP1); /*0x528a31*/
  if ( !aP1 ) /*0x528a37*/
    return 0; /*0x528a37*/
  v9 = a2; /*0x528a3d*/
  if ( !a2 ) /*0x528a43*/
    return 0; /*0x528a43*/
  if ( aP1 == (gamemd::INIClass *)((uint8_t *))this->headNode[0] ) /*0x528a4f*/
  {
    v10 = this->headNode[1]; /*0x528a55*/
    goto LABEL_7; /*0x528a55*/
  }
  memset(v26, 0, sizeof(v26)); /*0x528af3*/
  v19 = (uint8_t *)Checksummer::Add_Buffer((Checksummer *)v26, aP1, strlen((const char *)aP1)); /*0x528b19*/
  aP1 = (gamemd::INIClass *)(v19); /*0x528b1b*/
  if ( !this->INIClass_field_2C ) /*0x528b1f*/
    goto LABEL_29; /*0x528b1f*/
  unknown38 = (uint8_t **)this->unknown38; /*0x528b26*/
  if ( unknown38 && *unknown38 == v19 ) /*0x528b2f*/
    goto LABEL_24; /*0x528b2f*/
  v21 = ((SortedArray *)((SortedArray *)&this->__pad_20[8]))->BinarySearch((int *)&aP1); /*0x528b38*/
  if ( !v21 ) /*0x528b3f*/
  {
LABEL_29: v23 = (char *)(aP3);
    v6 = (char *)(aP4);
    this->headNode[0] = 0; /*0x528b8a*/
    this->headNode[1] = 0; /*0x528b8d*/
    goto LABEL_36; /*0x528b90*/
  }
  this->unknown38 = (unsigned int)((char *)(v21));
LABEL_24: aP1 = (gamemd::INIClass *)((char *)(v19));
  if ( (uint8_t)((HashTable *)((int *)&this->__pad_20[8]))->BinarySearch((int *)&aP1) ) /*0x528b4f*/
    v22 = (int *)(this->unknown38 + 4); /*0x528b5b*/
  else
    v22 = (int *)&unk_B7882C; /*0x528b60*/
  v10 = *v22; /*0x528b65*/
  if ( !v10 ) /*0x528b69*/
    goto LABEL_29; /*0x528b69*/
  v9 = a2; /*0x528b6b*/
  v6 = (char *)(aP4); /*0x528b6f*/
  this->headNode[1] = v10; /*0x528b73*/
  this->headNode[0] = (int)v8; /*0x528b76*/
LABEL_7:
  if ( v10 ) /*0x528a5a*/
  {
    memset(v26, 0, sizeof(v26)); /*0x528a60*/
    v11 = (uint8_t *)Checksummer::Add_Buffer((Checksummer *)v26, v9, strlen((const char *)v9)); /*0x528a7e*/
    v12 = *(unsigned int *)(v10 + 48); /*0x528a83*/
    v13 = (HashTable *)(v10 + 44); /*0x528a86*/
    a2 = v11; /*0x528a8b*/
    if ( v12 ) /*0x528a8f*/
    {
      HashTable_field_0x10 = (uint8_t **)v13->HashTable_field_0x10; /*0x528a95*/
      if ( HashTable_field_0x10 && *HashTable_field_0x10 == v11 ) /*0x528a9e*/
      {
LABEL_13:
        if ( v13->HashTable_field_0x04 ) /*0x528abb*/
        {
          v16 = (uint8_t **)v13->HashTable_field_0x10; /*0x528ac6*/
          if ( v16 && *v16 == v11 ) /*0x528acf*/
            goto LABEL_18; /*0x528acf*/
          v17 = ((HashTable *)(v13))->BinarySearchAlt((int *)&a2); /*0x528ad8*/
          if ( v17 ) /*0x528adf*/
          {
            v13->HashTable_field_0x10 = v17; /*0x528ae5*/
LABEL_18:
            v18 = (int *)(v13->HashTable_field_0x10 + 4); /*0x528ae8*/
LABEL_31:
            v24 = *v18; /*0x528b97*/
            if ( v24 ) /*0x528b9b*/
            {
              v23 = *(char **)(v24 + 16); /*0x528b9d*/
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
      v15 = ((HashTable *)(v13))->BinarySearchAlt((int *)&a2); /*0x528aa7*/
      if ( v15 ) /*0x528aae*/
      {
        v13->HashTable_field_0x10 = v15; /*0x528ab4*/
        v11 = a2; /*0x528ab7*/
        goto LABEL_13; /*0x528ab7*/
      }
    }
LABEL_34: v6 = (char *)(aP4);
  }
  v23 = (char *)(aP3);
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

  unsigned int *result; // eax
  int *sectionHead; // ecx
  unsigned int *v3; // edx
  int v4; // edi
  int v5; // esi
  int v6; // esi
  int * v7;

  result = (unsigned int *)((int *)(this->__pad_0));
  sectionHead = (int *)(this->sectionHead);
  v3 = result + 7; /*0x535aa9*/
  result[1] = 0; /*0x535aac*/
  result[2] = 0; /*0x535aaf*/
  sectionHead[1] = 0; /*0x535ab2*/
  sectionHead[2] = 0; /*0x535ab5*/
  *sectionHead = (int)&vt_GenericNode; /*0x535ab8*/
  result[8] = 0; /*0x535abe*/
  result[9] = 0; /*0x535ac1*/
  result[7] = (unsigned int)(&vt_GenericNode); /*0x535ac4*/
  result[3] = (unsigned int)(&vt_GenericList); /*0x535acd*/
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
  v6 = (unsigned int)(sectionHead[1]);
  result[9] = (unsigned int)(sectionHead);
  result[8] = (unsigned int)(v6);
  v7 = (int *)((unsigned int)(sectionHead[1]));
  if ( v7 ) /*0x535b04*/
    *(unsigned int *)(v7 + 8) = (unsigned int)(v3); /*0x535b06*/
  sectionHead[1] = (int)v3; /*0x535b09*/
  result[3] = (unsigned int)(&vt_List); /*0x535b0c*/
  result[10] = 0; /*0x535b13*/
  result[11] = 0; /*0x535b16*/
  result[12] = 0; /*0x535b19*/
  *((unsigned char *)result + 52) = 0; /*0x535b1c*/
  result[14] = 0; /*0x535b1f*/
  result[15] = 0; /*0x535b23*/
  *result = (unsigned int)(&vt_INIClass); /*0x535b27*/
  return result; /*0x535b22*/

}
}
// 0x474620
namespace gamemd {
int INIClass::ReadCoord(double aP1, int a2, INIClass * aP2, int a4)
{

  int result; // eax

  INIClass::ReadDouble_Overwrite(a1, aP2, a4, -1.0); /*0x474631*/
  if ( a2 == -1.0 ) /*0x474641*/
    return a5; /*0x474645*/
  LOWORD(result) = Math::RoundToInt(a2 * 256.0); /*0x474652*/
  return result; /*0x474649*/

}
} // namespace gamemd

// 0x4757D0
namespace gamemd {
int INIClass::GetBool(uint8_t *aP1, uint8_t *a2, int a4)
{

  int result; // eax
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( !INIClass::GetString(this,(unsigned char *)(aP1),(gamemd::INIClass *)(a2),(gamemd::INIClass *)(&g_INI_DefaultBuffer),(int)(Destination), 128) ) /*0x4757f2*/
    return a4; /*0x4757f2*/
  result = LookupNameIndex((ObjectClass *)Destination); /*0x4757ff*/
  if ( result == -1 ) /*0x475807*/
    return a4; /*0x475809*/
  return result; /*0x475810*/

}
} // namespace gamemd

// 0x526CC0
namespace gamemd {
int INIClass::GetStringByIndex(CCINIClass * aP1, CCINIClass * aP2, void *a3)
{

  char *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edx
  unsigned int *v8; // eax
  unsigned int v10[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !aP1 ) /*0x526ccd*/
    return 0; /*0x526ccd*/
  memset(v10, 0, sizeof(v10)); /*0x526cda*/
  v3 = (char *)((unsigned char *)this + 40); /*0x526d02*/
  v4 = Checksummer::Add_Buffer(v10, aP1, strlen((const char *)aP1)); /*0x526d05*/
  aP1 = (gamemd::CCINIClass *)((uint8_t *)v4); /*0x526d07*/
  if ( !*((unsigned int *)v3 + 1) ) /*0x526d0b*/
    return 0; /*0x526d10*/
  if ( !(uint8_t)SortedArray::CheckCache(&aP1) ) /*0x526d19*/
  {
    v5 = SortedArray::BinarySearch((int *)(&aP1)); /*0x526d29*/
    if ( !v5 ) /*0x526d30*/
      return 0; /*0x526d30*/
    *((unsigned int *)v3 + 4) = v5; /*0x526d32*/
  }
  aP1 = (gamemd::CCINIClass *)((uint8_t *)v4); /*0x526d3c*/
  v6 = *(unsigned int *)SortedArray::FindValue(&aP1); /*0x526d45*/
  if ( v6 ) /*0x526d49*/
  {
    v7 = (int)(aP2); /*0x526d4b*/
    if ( aP2 < *(unsigned int *)(v6 + 48) ) /*0x526d54*/
    {
      v8 = *(unsigned int **)(v6 + 24); /*0x526d56*/
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
int INIClass::ReadInt(String *a2, String *a3, int a4)
{

  uint8_t *v5; // eax
  uint8_t *v7; // [esp-8h] [ebp-Ch]

  v7 = (uint8_t *)((String *)(aP2))->GetOrEmpty_Alt(); /*0x527905*/
  v5 = (uint8_t *)((String *)(aP1))->GetOrEmpty_Alt(); /*0x527906*/
  return ((INIClass *)(int a1))->ReadInt_Overwrite(v5, v7, aP3) ; /*0x527913*/

}
} // namespace gamemd

// 0x529820
namespace gamemd {
char INIClass::GetInt(char ** a2, char ** a3, unsigned int * a4)
{

  char *v5; // edi
  uint8_t *v6; // ebx
  char Buffer[56]; // [esp+Ch] [ebp-38h] BYREF

  v5 = ((String *)(a3))->GetOrEmpty_Alt(); /*0x529835*/
  v6 = (uint8_t *)((String *)(a2))->GetOrEmpty_Alt(); /*0x52983c*/
  sprintf(Buffer, "%d,%d", *a4, a4[1]); /*0x529853*/
  return INIClass::SetString(int a1,v6,v5,Buffer) ; /*0x529869*/

}
} // namespace gamemd
