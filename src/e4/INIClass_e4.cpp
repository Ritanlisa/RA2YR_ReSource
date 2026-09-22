// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x526810
namespace gamemd {
ObjectClass * * INIClass::BinarySearchSection(INIClass * aP1)
{
{
  ObjectClass *v4; // ecx
  ObjectClass *v6; // eax
  int ecx7; // ecx
  int eax7; // eax
  ObjectClass *v8; // eax
  ObjectClass *v9; // ecx
  ObjectClass *v10; // ecx
  INIClass *v14; // edi
  int v15; // edx
  unsigned int v17[3]; // [esp+Ch] [ebp-Ch] BYREF
  INIClass *aP1a; // [esp+1Ch] [ebp+4h]

  if ( !aP1 ) /*0x526820*/
    return 0; /*0x526820*/
  memset(v17, 0, sizeof(v17)); /*0x52682d*/
  int v3 = Checksummer::Add_Buffer(v17, (unsigned __int8 *)aP1, (IUnknown *)strlen(aP1->__pad_0)); /*0x526844*/
  v4 = this->INIClass_field_2C; /*0x526849*/
  unsigned int v5 = v3; /*0x52684c*/
  aP1a = (INIClass *)v3; /*0x526850*/
  if ( !v4 ) /*0x526854*/
    return 0; /*0x526854*/
  v6 = this->unknown38; /*0x52685a*/
  if ( v6 && *(_DWORD *)v6->__pad_0 == v5 ) /*0x526863*/
    goto LABEL_9; /*0x526863*/
  if ( !this->needsSave_flag ) /*0x526865*/
  {
    qsort(this->q028, (size_t)v4, 8u, CompareFunc4Int); /*0x526876*/
    this->unknown38 = 0; /*0x52687e*/
    this->needsSave_flag = 1; /*0x526881*/
  }
  ObjectClass *v7 = this->INIClass_field_2C; /*0x526885*/
  ecx7 = this->q028; /*0x52688d*/
  v17[0] = v5; /*0x526890*/
  eax7 = System_Search(ecx7, v7, (int *)v17); /*0x526894*/
  if ( !eax7 ) /*0x52689b*/
    return 0; /*0x526938*/
  this->unknown38 = eax7; /*0x5268a1*/
LABEL_9:
  v8 = this->INIClass_field_2C; /*0x5268a4*/
  if ( !v8 ) /*0x5268aa*/
    return unk_B7882C; /*0x5268aa*/
  v9 = this->unknown38; /*0x5268ac*/
  if ( v9 && *(_DWORD *)v9->__pad_0 == v5 ) /*0x5268b5*/
    return *(_DWORD *)(this->unknown38 + 4); /*0x526933*/
  if ( !this->needsSave_flag ) /*0x5268b7*/
  {
    qsort(this->q028, (size_t)v8, 8u, CompareFunc4Int); /*0x5268c8*/
    this->unknown38 = 0; /*0x5268d0*/
    this->needsSave_flag = 1; /*0x5268d3*/
  }
  v10 = this->INIClass_field_2C; /*0x5268d7*/
  ObjectClass *v13 = this->q028; /*0x5268da*/
  if ( (int)v10 <= 0 ) /*0x5268df*/
    return unk_B7882C; /*0x5268df*/
  while ( 1 ) /*0x5268ec*/
  {
    v14 = *(INIClass **)(v13 + 8 * ((int)v10 / 2)); /*0x5268ec*/
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
    this->unknown38 = v15; /*0x526921*/
    return *(_DWORD *)(this->unknown38 + 4); /*0x526921*/
  }
  return unk_B7882C; /*0x526912*/
}
} // namespace gamemd

// 0x526960
namespace gamemd {
VoxelStruct * * INIClass::GetKeyCount(INIClass * aP1)
{
{
  CCINIClass *v2; // esi
  INIClass *v3; // edi
  CCINIClass *v4; // eax
  size_t v5; // eax
  CCINIClass *v7; // eax
  size_t v8; // eax
  VoxelStruct *v9; // esi
  int v10; // esi
  unsigned int v12[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !aP1 ) /*0x52696d*/
    return 0; /*0x52696d*/
  memset(v12, 0, sizeof(v12)); /*0x52697a*/
  v2 = (CCINIClass *)(this + 40); /*0x5269a2*/
  v3 = (INIClass *)Checksummer::Add_Buffer(v12, (unsigned __int8 *)aP1, (IUnknown *)strlen(aP1->__pad_0)); /*0x5269a5*/
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
  int v6 = v2->headNode[0]; /*0x5269d0*/
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
  v9 = (int *)&unk_B7882C; /*0x526a01*/
LABEL_14:
  v10 = *v9; /*0x526a06*/
  if ( v10 ) /*0x526a0a*/
    return *(_DWORD *)(v10 + 48); /*0x526a14*/
  return 0; /*0x526a0f*/
}
} // namespace gamemd

// 0x528A10
namespace gamemd {
unsigned int INIClass::GetString(INIClass * aP1, unsigned char * a2, INIClass * aP3, INIClass * aP4, int Count)
{
{
  INIClass *v6; // edi
  unsigned __int8 **v8; // ebx
  unsigned __int8 *v9; // edx
  unsigned __int8 *v10; // esi
  unsigned __int8 *v11; // eax
  unsigned __int8 *v13; // esi
  unsigned __int8 **v14; // ecx
  size_t v15; // eax
  unsigned __int8 **v16; // ecx
  size_t v17; // eax
  INIClass *v19; // edi
  INIClass **v20; // eax
  unsigned __int8 **v21; // eax
  unsigned __int8 **v22; // esi
  INIClass *v23; // ecx
  WeaponTypeClass *v26; // [esp+Ch] [ebp-Ch] BYREF
  v6 = aP4; /*0x528a18*/
  if ( !aP4 ) /*0x528a20*/
    return 0; /*0x528a20*/
  if ( Count < 2 ) /*0x528a2b*/
    return 0; /*0x528a2b*/
  v8 = (unsigned __int8 **)aP1; /*0x528a31*/
  if ( !aP1 ) /*0x528a37*/
    return 0; /*0x528a37*/
  v9 = a2; /*0x528a3d*/
  if ( !a2 ) /*0x528a43*/
    return 0; /*0x528a43*/
  if ( aP1 == (INIClass *)this->headNode ) /*0x528a4f*/
  {
    v10 = (unsigned __int8 *)this->q008; /*0x528a55*/
    goto LABEL_7; /*0x528a55*/
  }
  v26 = 0; /*0x528af3*/
  int v27 = 0; /*0x528af7*/
  int v28 = 0; /*0x528afb*/
  v19 = (INIClass *)Checksummer::Add_Buffer( /*0x528b19*/
                      (unsigned int *)&v26,
                      (unsigned __int8 *)aP1,
                      (IUnknown *)strlen(aP1->__pad_0));
  aP1 = v19; /*0x528b1b*/
  if ( !this->INIClass_field_2C ) /*0x528b1f*/
    goto LABEL_29; /*0x528b1f*/
  v20 = (INIClass **)this->unknown38; /*0x528b26*/
  if ( v20 && *v20 == v19 ) /*0x528b2f*/
    goto LABEL_24; /*0x528b2f*/
  v21 = (unsigned __int8 **)SortedArray::BinarySearch((char **)this + 10, (CCINIClass *)&aP1); /*0x528b38*/
  if ( !v21 ) /*0x528b3f*/
  {
LABEL_29:
    v23 = aP3; /*0x528b80*/
    v6 = aP4; /*0x528b84*/
    this->headNode = 0; /*0x528b8a*/
    this->q008 = 0; /*0x528b8d*/
    goto LABEL_36; /*0x528b90*/
  }
  this->unknown38 = v21; /*0x528b41*/
LABEL_24:
  aP1 = v19; /*0x528b44*/
  if ( HashTable::BinarySearch((int)(this + 10), (ObjectClass *)&aP1) ) /*0x528b4f*/
    v22 = this->unknown38 + 1; /*0x528b5b*/
  else
    v22 = (unsigned __int8 **)&unk_B7882C; /*0x528b60*/
  v10 = *v22; /*0x528b65*/
  if ( !v10 ) /*0x528b69*/
    goto LABEL_29; /*0x528b69*/
  v9 = a2; /*0x528b6b*/
  v6 = aP4; /*0x528b6f*/
  this->q008 = (unsigned __int8 **)v10; /*0x528b73*/
  this->headNode = v8; /*0x528b76*/
LABEL_7:
  if ( v10 ) /*0x528a5a*/
  {
    v26 = 0; /*0x528a60*/
    v27 = 0; /*0x528a64*/
    v28 = 0; /*0x528a68*/
    v11 = (unsigned __int8 *)Checksummer::Add_Buffer((unsigned int *)&v26, v9, (IUnknown *)strlen((const char *)v9)); /*0x528a7e*/
    int v12 = *((_DWORD *)v10 + 12); /*0x528a83*/
    v13 = v10 + 44; /*0x528a86*/
    a2 = v11; /*0x528a8b*/
    if ( v12 ) /*0x528a8f*/
    {
      v14 = (unsigned __int8 **)*((_DWORD *)v13 + 4); /*0x528a95*/
      if ( v14 && *v14 == v11 ) /*0x528a9e*/
      {
  int *v18; // esi
LABEL_13:
        if ( *((_DWORD *)v13 + 1) ) /*0x528abb*/
        {
          v16 = (unsigned __int8 **)*((_DWORD *)v13 + 4); /*0x528ac6*/
          if ( v16 && *v16 == v11 ) /*0x528acf*/
            goto LABEL_18; /*0x528acf*/
          v17 = HashTable::BinarySearchAlt((char **)v13, (CCINIClass *)&a2); /*0x528ad8*/
          if ( v17 ) /*0x528adf*/
          {
            *((_DWORD *)v13 + 4) = v17; /*0x528ae5*/
LABEL_18:
            v18 = (int *)(*((_DWORD *)v13 + 4) + 4); /*0x528ae8*/
LABEL_31:
            int v24 = *v18; /*0x528b97*/
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
        *((_DWORD *)v13 + 4) = v15; /*0x528ab4*/
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
    v6->__pad_0[0] = 0; /*0x528bbb*/
    return 0; /*0x528bc6*/
  }
  strncpy(v6->__pad_0, v23->__pad_0, Count); /*0x528bd0*/
  v6->__pad_0[Count - 1] = 0; /*0x528bde*/
  String::Trim(v6->__pad_0); /*0x528be3*/
  return strlen(v6->__pad_0); /*0x528bbe*/
}
} // namespace gamemd

// 0x535AA0
namespace gamemd {
unsigned int * INIClass::INIClass()
{
{
  _DWORD *result; // eax

  result = this; /*0x535aa0*/
  INILinkNode *v2 = this + 4; /*0x535aa6*/
  INILinkNode *v3 = result + 7; /*0x535aa9*/
  result[1] = 0; /*0x535aac*/
  result[2] = 0; /*0x535aaf*/
  v2[1] = 0; /*0x535ab2*/
  v2[2] = 0; /*0x535ab5*/
  *v2 = &vt_GenericNode; /*0x535ab8*/
  result[8] = 0; /*0x535abe*/
  result[9] = 0; /*0x535ac1*/
  result[7] = &vt_GenericNode; /*0x535ac4*/
  result[3] = &vt_GenericList; /*0x535acd*/
  if ( result != (_DWORD *)-28 ) /*0x535ad4*/
  {
    int v4 = result[8]; /*0x535ad6*/
    if ( v4 ) /*0x535adb*/
    {
      int v5 = result[9]; /*0x535add*/
      if ( v5 ) /*0x535ae2*/
      {
        *(_DWORD *)(v5 + 4) = v4; /*0x535ae4*/
        *(_DWORD *)(result[8] + 8) = result[9]; /*0x535aed*/
        result[9] = 0; /*0x535af0*/
        result[8] = 0; /*0x535af3*/
      }
    }
  }
  INILinkNode *v6 = v2[1]; /*0x535af6*/
  result[9] = v2; /*0x535af9*/
  result[8] = v6; /*0x535afc*/
  INILinkNode *v7 = v2[1]; /*0x535aff*/
  if ( v7 ) /*0x535b04*/
    v7->Next = v3; /*0x535b06*/
  v2[1] = v3; /*0x535b09*/
  result[3] = &vt_List_INIClass_INISection; /*0x535b0c*/
  result[10] = 0; /*0x535b13*/
  result[11] = 0; /*0x535b16*/
  result[12] = 0; /*0x535b19*/
  result->needsSave_flag = 0; /*0x535b1c*/
  result[14] = 0; /*0x535b1f*/
  result[15] = 0; /*0x535b23*/
  *result = &vt_INIClass; /*0x535b27*/
  return result; /*0x535b22*/
}
} // namespace gamemd

// 0x474620
namespace gamemd {
INIClass * INIClass::ReadCoord(double aP1, int a2, INIClass * aP2, int a4)
{
{
    int v4;
    double Double_Overwrite;
    Double_Overwrite = INIClass::ReadDouble_Overwrite(v4, (INIClass *)LODWORD(aP1), (unsigned char *)HIDWORD(aP1), 0);
    if ( Double_Overwrite == -1.0 )
    return (INIClass *)a2;
    else
    return (INIClass *)Math::RoundToInt(Double_Overwrite * 256.0);
}
}
} // namespace gamemd

// 0x4757D0
namespace gamemd {
int INIClass::GetBool(INIClass * aP1, unsigned char * a2, int a4)
{
{
    int result;
    INIClass Destination[2];
    if ( !INIClass::GetString(this, aP1, a2, (INIClass *)&DataGlobal_87F8E4[42624], Destination, 128) )
    return a4;
    result = LookupNameIndex(Destination);
    if ( result == -1 )
    return a4;
    return result;
}
}
} // namespace gamemd

// 0x526CC0
namespace gamemd {
int INIClass::GetStringByIndex(CCINIClass * aP1, CCINIClass * aP2)
{
{
    CCINIClass *v3;
    CCINIClass *v4;
    size_t v5;
    int v6;
    CCINIClass *v7;
    int *v8;
    unsigned int v10[3];
    if ( !aP1 )
    return 0;
    memset(v10, 0, sizeof(v10));
    v3 = (CCINIClass *)(this + 40);
    v4 = (CCINIClass *)Checksummer::Add_Buffer(v10, (unsigned char *)aP1, (IUnknown *)strlen(aP1->__pad_0));
    aP1 = v4;
    if ( !v3->headNode[0] )
    return 0;
    if ( !SortedArray::CheckCache(v3, &aP1) )
  {
    v5 = SortedArray::BinarySearch((char **)v3, (CCINIClass *)&aP1);
    if ( !v5 )
    return 0;
    v3->sectionHead[0] = v5;
  }
    aP1 = v4;
    v6 = *(int *)SortedArray::FindValue((int)v3, (INIClass *)&aP1);
    if ( v6 )
  {
    v7 = aP2;
    if ( (int)aP2 < *(int *)(v6 + 48) )
    {
    v8 = *(int **)(v6 + 24);
    if ( v8 )
      {
    while ( v8[1] && v8[2] )
        {
    if ( !v7 )
    return v8[3];
    v8 = (int *)v8[1];
    v7 = (CCINIClass *)((char *)v7 - 1);
        }
      }
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x5278F0
namespace gamemd {
int INIClass::ReadInt(ObjectClass * aP1, ReferenceCounted * aP2, INIClass * aP3)
{
{
    unsigned char *eax1a;
    ObjectClass *v5;
    v5 = (ObjectClass *)String::GetOrEmpty_Alt((char **)aP2);
    eax1a = (unsigned char *)String::GetOrEmpty_Alt((char **)aP1);
    return INIClass::ReadInt_Overwrite((int)this, eax1a, (CCINIClass *)v5, aP3);
}
}
} // namespace gamemd

// 0x529820
namespace gamemd {
char INIClass::GetInt(char ** a2, char ** a3, unsigned int * a4)
{
{
    INIClass *v5;
    INIClass *v6;
    char Buffer[56];
    v5 = (INIClass *)String::GetOrEmpty_Alt(a3);
    v6 = (INIClass *)String::GetOrEmpty_Alt(a2);
    sprintf(Buffer, g_INI_Key_Digest[32], *a4, *((int*)(a4) + 1));
    return INIClass::SetString(this, v6, v5, (INIClass *)Buffer);
}
}
} // namespace gamemd
