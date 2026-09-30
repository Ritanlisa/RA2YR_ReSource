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

// 0x526810
namespace gamemd {
ObjectClass * * INIClass::BinarySearchSection(INIClass * aP1)
{

  int v3; // eax
  ObjectClass *v4; // ecx
  unsigned int v5; // edi
  ObjectClass *v6; // eax
  int v7; // edx
  int ecx7; // ecx
  int eax7; // eax
  ObjectClass *v8; // eax
  ObjectClass *v9; // ecx
  ObjectClass *v10; // ecx
  int v13; // ebp
  INIClass *v14; // edi
  int v15; // edx
  unsigned int v17[3]; // [esp+Ch] [ebp-Ch] BYREF
  INIClass *aP1a; // [esp+1Ch] [ebp+4h]

  if ( !aP1 ) /*0x526820*/
    return 0; /*0x526820*/
  memset(v17, 0, sizeof(v17)); /*0x52682d*/
  v3 = Checksummer::Add_Buffer(v17, (uint8_t *)aP1, (IUnknown *)strlen(aP1->__pad_0)); /*0x526844*/
  v4 = *(ObjectClass **)((char *)this + 44); /*0x526849*/
  v5 = v3; /*0x52684c*/
  aP1a = (INIClass *)v3; /*0x526850*/
  if ( !v4 ) /*0x526854*/
    return 0; /*0x526854*/
  v6 = *(ObjectClass **)((char *)this + 56); /*0x52685a*/
  if ( v6 && *(unsigned int *)v6->__pad_0 == v5 ) /*0x526863*/
    goto LABEL_9; /*0x526863*/
  if ( !*((unsigned char *)this + 52) ) /*0x526865*/
  {
    qsort(*(void **)((char *)this + 40), (size_t)v4, 8u, CompareFunc4Int); /*0x526876*/
    *((unsigned int *)this + 14) = 0; /*0x52687e*/
    *((unsigned char *)this + 52) = 1; /*0x526881*/
  }
  v7 = (gamemd::ObjectClass **)(*((unsigned int *)this + 11));
  ecx7 = *((unsigned int *)this + 10); /*0x52688d*/
  v17[0] = v5; /*0x526890*/
  eax7 = System_Search(ecx7, v7, (int *)v17); /*0x526894*/
  if ( !eax7 ) /*0x52689b*/
    return 0; /*0x526938*/
  *((unsigned int *)this + 14) = eax7; /*0x5268a1*/
LABEL_9:
  v8 = *(ObjectClass **)((char *)this + 44); /*0x5268a4*/
  if ( !v8 ) /*0x5268aa*/
    return unk_B7882C; /*0x5268aa*/
  v9 = *(ObjectClass **)((char *)this + 56); /*0x5268ac*/
  if ( v9 && *(unsigned int *)v9->__pad_0 == v5 ) /*0x5268b5*/
    return *(unsigned int *)(*((unsigned int *)this + 14) + 4); /*0x526933*/
  if ( !*((unsigned char *)this + 52) ) /*0x5268b7*/
  {
    qsort(*(void **)((char *)this + 40), (size_t)v8, 8u, CompareFunc4Int); /*0x5268c8*/
    *((unsigned int *)this + 14) = 0; /*0x5268d0*/
    *((unsigned char *)this + 52) = 1; /*0x5268d3*/
  }
  v10 = (gamemd::ObjectClass **)(*(ObjectClass **)((char *)this + 44));
  v13 = *((unsigned int *)this + 10); /*0x5268da*/
  if ( (int)v10 <= 0 ) /*0x5268df*/
    return unk_B7882C; /*0x5268df*/
  while ( 1 ) /*0x5268ec*/
  {
    v14 = (gamemd::ObjectClass **)(*(INIClass **)(v13 + 8 * ((int)v10 / 2)));
    v15 = v13 + 8 * ((int)v10 / 2); /*0x5268f0*/
    if ( (int)v14 <= (int)aP1a ) /*0x5268f6*/
      break; /*0x5268f6*/
    v10 = (ObjectClass *)((int)v10 / 2); /*0x5268f8*/
LABEL_19:
    if ( (int)v10 <= 0 ) /*0x52690a*/
      return unk_B7882C; /*0x52690a*/
  }
  if ( v14 != aP1a ) /*0x5268fc*/
  {
    v13 = v15 + 8; /*0x5268fe*/
    v10 = (ObjectClass *)((char *)v10 - 1 - (int)v10 / 2); /*0x526906*/
    goto LABEL_19; /*0x526906*/
  }
  if ( v15 ) /*0x52691f*/
  {
    *((unsigned int *)this + 14) = v15; /*0x526921*/
    return *(unsigned int *)(*((unsigned int *)this + 14) + 4); /*0x526921*/
  }
  return unk_B7882C; /*0x526912*/

}
}
// 0x526960
namespace gamemd {
VoxelStruct * * INIClass::GetKeyCount(INIClass * aP1)
{

  CCINIClass *v2; // esi
  INIClass *v3; // edi
  CCINIClass *v4; // eax
  size_t v5; // eax
  int v6; // eax
  CCINIClass *v7; // eax
  size_t v8; // eax
  int *v9; // esi
  int v10; // esi
  unsigned int v12[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !aP1 ) /*0x52696d*/
    return 0; /*0x52696d*/
  memset(v12, 0, sizeof(v12)); /*0x52697a*/
  v2 = (CCINIClass *)((unsigned char *)this + 40); /*0x5269a2*/
  v3 = (INIClass *)Checksummer::Add_Buffer(v12, (uint8_t *)aP1, (IUnknown *)strlen(aP1->__pad_0)); /*0x5269a5*/
  aP1 = v3; /*0x5269a7*/
  if ( !v2->headNode[0] ) /*0x5269ab*/
    return 0; /*0x5269b0*/
  v4 = (CCINIClass *)v2->sectionHead[0]; /*0x5269b2*/
  if ( !v4 || *(INIClass **)v4->__pad_0 != v3 ) /*0x5269bb*/
  {
    v5 = SortedArray::BinarySearch((char **)v2, (CCINIClass *)&aP1); /*0x5269c4*/
    if ( !v5 ) /*0x5269cb*/
      return 0; /*0x5269cb*/
    v2->sectionHead[0] = v5; /*0x5269cd*/
  }
  v6 = v2->headNode[0]; /*0x5269d0*/
  aP1 = v3; /*0x5269d3*/
  if ( v6 ) /*0x5269d9*/
  {
    v7 = (CCINIClass *)v2->sectionHead[0]; /*0x5269db*/
    if ( v7 && *(INIClass **)v7->__pad_0 == v3 ) /*0x5269e4*/
      goto LABEL_12; /*0x5269e4*/
    v8 = SortedArray::BinarySearch((char **)v2, (CCINIClass *)&aP1); /*0x5269ed*/
    if ( v8 ) /*0x5269f4*/
    {
      v2->sectionHead[0] = v8; /*0x5269f6*/
LABEL_12:
      v9 = (int *)(v2->sectionHead[0] + 4); /*0x5269f9*/
      goto LABEL_14; /*0x5269ff*/
    }
  }
  v9 = (gamemd::VoxelStruct **)((int *)&unk_B7882C);
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

  INIClass *v6; // edi
  uint8_t **v8; // ebx
  uint8_t *v9; // edx
  uint8_t *v10; // esi
  uint8_t *v11; // eax
  int v12; // ecx
  uint8_t *v13; // esi
  uint8_t **v14; // ecx
  size_t v15; // eax
  uint8_t **v16; // ecx
  size_t v17; // eax
  int *v18; // esi
  INIClass *v19; // edi
  INIClass **v20; // eax
  uint8_t **v21; // eax
  uint8_t **v22; // esi
  INIClass *v23; // ecx
  int v24; // esi
  WeaponTypeClass *v26; // [esp+Ch] [ebp-Ch] BYREF
  int v27; // [esp+10h] [ebp-8h]
  int v28; // [esp+14h] [ebp-4h]

  v6 = aP4; /*0x528a18*/
  if ( !aP4 ) /*0x528a20*/
    return 0; /*0x528a20*/
  if ( Count < 2 ) /*0x528a2b*/
    return 0; /*0x528a2b*/
  v8 = (uint8_t **)aP1; /*0x528a31*/
  if ( !aP1 ) /*0x528a37*/
    return 0; /*0x528a37*/
  v9 = a2; /*0x528a3d*/
  if ( !a2 ) /*0x528a43*/
    return 0; /*0x528a43*/
  if ( aP1 == (INIClass *)*((unsigned int *)this + 1) ) /*0x528a4f*/
  {
    v10 = (uint8_t *)*((unsigned int *)this + 2); /*0x528a55*/
    goto LABEL_7; /*0x528a55*/
  }
  v26 = 0; /*0x528af3*/
  v27 = 0; /*0x528af7*/
  v28 = 0; /*0x528afb*/
  v19 = (INIClass *)Checksummer::Add_Buffer( /*0x528b19*/
                      (unsigned int *)&v26,
                      (uint8_t *)aP1,
                      (IUnknown *)strlen(aP1->__pad_0));
  aP1 = v19; /*0x528b1b*/
  if ( !*((unsigned int *)this + 11) ) /*0x528b1f*/
    goto LABEL_29; /*0x528b1f*/
  v20 = (INIClass **)*((unsigned int *)this + 14); /*0x528b26*/
  if ( v20 && *v20 == v19 ) /*0x528b2f*/
    goto LABEL_24; /*0x528b2f*/
  v21 = (uint8_t **)SortedArray::BinarySearch((char **)this + 10, (CCINIClass *)&aP1); /*0x528b38*/
  if ( !v21 ) /*0x528b3f*/
  {
LABEL_29: v23 = (unsigned int)(aP3);
    v6 = aP4; /*0x528b84*/
    *((unsigned int *)this + 1) = 0; /*0x528b8a*/
    *((unsigned int *)this + 2) = 0; /*0x528b8d*/
    goto LABEL_36; /*0x528b90*/
  }
  *((unsigned int *)this + 14) = v21; /*0x528b41*/
LABEL_24:
  aP1 = v19; /*0x528b44*/
  if ( HashTable::BinarySearch((int)((unsigned int *)this + 10), (ObjectClass *)&aP1) ) /*0x528b4f*/
    v22 = *((unsigned int *)this + 14) + 1; /*0x528b5b*/
  else
    v22 = (uint8_t **)&unk_B7882C; /*0x528b60*/
  v10 = *v22; /*0x528b65*/
  if ( !v10 ) /*0x528b69*/
    goto LABEL_29; /*0x528b69*/
  v9 = a2; /*0x528b6b*/
  v6 = aP4; /*0x528b6f*/
  *((unsigned int *)this + 2) = (uint8_t **)v10; /*0x528b73*/
  *((unsigned int *)this + 1) = v8; /*0x528b76*/
LABEL_7:
  if ( v10 ) /*0x528a5a*/
  {
    v26 = 0; /*0x528a60*/
    v27 = 0; /*0x528a64*/
    v28 = 0; /*0x528a68*/
    v11 = (uint8_t *)Checksummer::Add_Buffer((unsigned int *)&v26, v9, (IUnknown *)strlen((const char *)v9)); /*0x528a7e*/
    v12 = *((unsigned int *)v10 + 12); /*0x528a83*/
    v13 = v10 + 44; /*0x528a86*/
    a2 = v11; /*0x528a8b*/
    if ( v12 ) /*0x528a8f*/
    {
      v14 = (uint8_t **)*((unsigned int *)v13 + 4); /*0x528a95*/
      if ( v14 && *v14 == v11 ) /*0x528a9e*/
      {
LABEL_13:
        if ( *((unsigned int *)v13 + 1) ) /*0x528abb*/
        {
          v16 = (uint8_t **)*((unsigned int *)v13 + 4); /*0x528ac6*/
          if ( v16 && *v16 == v11 ) /*0x528acf*/
            goto LABEL_18; /*0x528acf*/
          v17 = HashTable::BinarySearchAlt((char **)v13, (CCINIClass *)&a2); /*0x528ad8*/
          if ( v17 ) /*0x528adf*/
          {
            *((unsigned int *)v13 + 4) = v17; /*0x528ae5*/
LABEL_18:
            v18 = (int *)(*((unsigned int *)v13 + 4) + 4); /*0x528ae8*/
LABEL_31:
            v24 = *v18; /*0x528b97*/
            if ( v24 ) /*0x528b9b*/
            {
              v23 = *(INIClass **)(v24 + 16); /*0x528b9d*/
              if ( v23 ) /*0x528ba2*/
              {
                v6 = aP4; /*0x528ba4*/
                goto LABEL_36; /*0x528baa*/
              }
            }
            goto LABEL_34; /*0x528ba2*/
          }
        }
        v18 = (int *)&unk_B78830; /*0x528b92*/
        goto LABEL_31; /*0x528b92*/
      }
      v15 = HashTable::BinarySearchAlt((char **)v13, (CCINIClass *)&a2); /*0x528aa7*/
      if ( v15 ) /*0x528aae*/
      {
        *((unsigned int *)v13 + 4) = v15; /*0x528ab4*/
        v11 = a2; /*0x528ab7*/
        goto LABEL_13; /*0x528ab7*/
      }
    }
LABEL_34:
    v6 = aP4; /*0x528bac*/
  }
  v23 = aP3; /*0x528bb2*/
LABEL_36:
  if ( !v23 ) /*0x528bb9*/
  {
    v6-((unsigned int *)(>__pad_0))[0] = 0; /*0x528bbb*/
    return 0; /*0x528bc6*/
  }
  strncpy(v6->__pad_0, v23->__pad_0, Count); /*0x528bd0*/
  v6->__pad_0[Count - 1] = 0; /*0x528bde*/
  String::Trim(v6->__pad_0); /*0x528be3*/
  return strlen(v6->__pad_0); /*0x528bbe*/

}
}
// 0x535AA0
namespace gamemd {
INIClass::INIClass()
{

  unsigned int *result; // eax
  unsigned int *v2; // ecx
  unsigned int *v3; // edx
  int v4; // edi
  int v5; // esi
  int v6; // esi
  int v7; // esi
result = (unsigned int *)(this);
  v2 = (unsigned int *)this + 4; /*0x535aa6*/
  v3 = result + 7; /*0x535aa9*/
  result[1] = 0; /*0x535aac*/
  result[2] = 0; /*0x535aaf*/
  v2[1] = 0; /*0x535ab2*/
  v2[2] = 0; /*0x535ab5*/
  *v2 = &GenericNode::`vftable'; /*0x535ab8*/
  result[8] = 0; /*0x535abe*/
  result[9] = 0; /*0x535ac1*/
  result[7] = &GenericNode::`vftable'; /*0x535ac4*/
  result[3] = &GenericList::`vftable'; /*0x535acd*/
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
  result[9] = v2; /*0x535af9*/
  result[8] = v6; /*0x535afc*/
  v7 = v2[1]; /*0x535aff*/
  if ( v7 ) /*0x535b04*/
    *(unsigned int *)(v7 + 8) = v3; /*0x535b06*/
  v2[1] = v3; /*0x535b09*/
  result[3] = &List<INIClass::INISection *>::`vftable'; /*0x535b0c*/
  result[10] = 0; /*0x535b13*/
  result[11] = 0; /*0x535b16*/
  result[12] = 0; /*0x535b19*/
  *((unsigned char *)result + 52) = 0; /*0x535b1c*/
  result[14] = 0; /*0x535b1f*/
  result[15] = 0; /*0x535b23*/
  *result = &INIClass::`vftable'; /*0x535b27*/
  return result; /*0x535b22*/

}
}
// 0x474620
namespace gamemd {
int INIClass::ReadCoord(double aP1, int a2, INIClass * aP2, int a4)
{

  int v4; // ecx
  double Double_Overwrite; // st7

  Double_Overwrite = INIClass::ReadDouble_Overwrite(v4, (INIClass *)IDA_LODWORD(aP1), (uint8_t *)IDA_HIDWORD(aP1), 0); /*0x474631*/
  if ( Double_Overwrite == -1.0 ) /*0x474641*/
    return (INIClass *)a2; /*0x474645*/
  else
    return (INIClass *)Math::RoundToInt(Double_Overwrite * 256.0); /*0x474652*/

}
} // namespace gamemd

// 0x4757D0
namespace gamemd {
int INIClass::GetBool(INIClass * aP1, unsigned char * a2, int a4)
{

  int result; // eax
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( !INIClass::GetString(this, aP1, a2, (INIClass *)&g_abs_87F8E4, Destination, 128) ) /*0x4757f2*/
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

  CCINIClass *v3; // esi
  CCINIClass *v4; // edi
  size_t v5; // eax
  int v6; // eax
  CCINIClass *v7; // edx
  unsigned int *v8; // eax
  unsigned int v10[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !aP1 ) /*0x526ccd*/
    return 0; /*0x526ccd*/
  memset(v10, 0, sizeof(v10)); /*0x526cda*/
  v3 = (CCINIClass *)((unsigned char *)this + 40); /*0x526d02*/
  v4 = (CCINIClass *)Checksummer::Add_Buffer(v10, (uint8_t *)aP1, (IUnknown *)strlen(aP1->__pad_0)); /*0x526d05*/
  aP1 = v4; /*0x526d07*/
  if ( !v3-((unsigned int *)(>headNode))[0] ) /*0x526d0b*/
    return 0; /*0x526d10*/
  if ( !SortedArray::CheckCache(v3, &aP1) ) /*0x526d19*/
  {
    v5 = SortedArray::BinarySearch((char **)v3, (CCINIClass *)&aP1); /*0x526d29*/
    if ( !v5 ) /*0x526d30*/
      return 0; /*0x526d30*/
    v3-((unsigned int *)(>sectionHead))[0] = v5; /*0x526d32*/
  }
  aP1 = v4; /*0x526d3c*/
  v6 = *(unsigned int *)((SortedArray *)((int)v3))->FindValue((INIClass *)&aP1); /*0x526d45*/
  if ( v6 ) /*0x526d49*/
  {
    v7 = aP2; /*0x526d4b*/
    if ( (int)aP2 < *(unsigned int *)(v6 + 48) ) /*0x526d54*/
    {
      v8 = *(unsigned int **)(v6 + 24); /*0x526d56*/
      if ( v8 ) /*0x526d5b*/
      {
        while ( v8[1] && v8[2] ) /*0x526d69*/
        {
          if ( !v7 ) /*0x526d6d*/
            return v8[3]; /*0x526d80*/
          v8 = (unsigned int *)v8[1]; /*0x526d6f*/
          v7 = (CCINIClass *)((char *)v7 - 1); /*0x526d71*/
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

  uint8_t *eax1a; // eax
  ObjectClass *v5; // [esp-8h] [ebp-Ch]

  v5 = (ObjectClass *)((String *)((char **)aP2))->GetOrEmpty_Alt(); /*0x527905*/
  eax1a = (uint8_t *)((String *)((char **)aP1))->GetOrEmpty_Alt(); /*0x527906*/
  return INIClass::ReadInt_Overwrite((int)this, eax1a, (CCINIClass *)v5, aP3); /*0x527913*/

}
} // namespace gamemd

// 0x529820
namespace gamemd {
char INIClass::GetInt(char ** a2, char ** a3, unsigned int * a4)
{

  INIClass *v5; // edi
  INIClass *v6; // ebx
  char Buffer[56]; // [esp+Ch] [ebp-38h] BYREF

  v5 = (INIClass *)((String *)(a3))->GetOrEmpty_Alt(); /*0x529835*/
  v6 = (INIClass *)((String *)(a2))->GetOrEmpty_Alt(); /*0x52983c*/
  sprintf(Buffer, g_INI_Key_Digest.__pad_20, *a4, a4[1]); /*0x529853*/
  return INIClass::SetString(this, v6, v5, (INIClass *)Buffer); /*0x529869*/

}
} // namespace gamemd
