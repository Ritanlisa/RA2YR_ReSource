// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/ResultNode_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/FilePipe_30_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/FileSystem_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Matrix_e4.hpp"

// 0x431F10
namespace gamemd {
char File::IsReady(int a2)
{

  int result; // eax

  if ( !BYTE1(this->BufferSize) ) /*0x431f10*/
    return ((FileClass *)((RawFileClass *)this))->Open(0); /*0x431f1e*/
  LOBYTE(result) = 1; /*0x431f17*/
  return result; /*0x431f19*/

}
}
// 0x433990
namespace gamemd {
AbstractClass * File::LoadFont(char *Source)
{

  unsigned int v2; // ebp
  unsigned int *v3; // esi
  CCFileClass *v4; // eax
  unsigned int *v5; // eax
  unsigned int *v6; // ebx
  void *v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  unsigned int v12; // eax
  void **v13; // edi
  int v14; // eax
  unsigned int v15; // edx
  void **v16; // ecx
  int v17; // eax
  char *v18; // edx
  unsigned short *v19; // eax
  size_t v20; // edi
  int v21; // ecx
  int v22; // eax
  void **v24; // [esp+30h] [ebp-44h]
  unsigned int v25[7]; // [esp+34h] [ebp-40h] BYREF
  char v26[4]; // [esp+50h] [ebp-24h] BYREF
  int v27; // [esp+54h] [ebp-20h]
  int v28; // [esp+58h] [ebp-1Ch]
  int v29; // [esp+5Ch] [ebp-18h]
  int v30; // [esp+60h] [ebp-14h]
  unsigned int v31; // [esp+64h] [ebp-10h]
  int v32; // [esp+68h] [ebp-Ch]
  int v33; // [esp+6Ch] [ebp-8h]
  int v34; // [esp+70h] [ebp-4h]

  v2 = 0; /*0x43399b*/
  v3 = 0; /*0x43399d*/
  v4 = (CCFileClass *)__2_YAPAXI_Z(0x6Cu); /*0x43399f*/
  if ( v4 ) /*0x4339a9*/
  {
    v5 = (unsigned int *)(((CCFileClass *)(v4))->Construct(Source));
    v6 = v5; /*0x4339b7*/
    if ( v5 ) /*0x4339bb*/
    {
      if ( !(*(uint8_t (**)(unsigned int *, unsigned int))(*v5 + 20))(v5, 0) /*0x4339f0*/
        || !(*(int (**)(unsigned int *, int))(*v6 + 28))(v6, 1)
        || (v3 = (unsigned int *)__2_YAPAXI_Z(0x24u)) == 0 )
      {
LABEL_35:
        (*(void (**)(unsigned int *, int))*v6)(v6, 1); /*0x433bee*/
        return (gamemd::AbstractClass *)(v3); /*0x433bf4*/
      }
      memset(v3, 0, 0x24u); /*0x433a04*/
      v7 = (void *)__2_YAPAXI_Z(0x20000u); /*0x433a0b*/
      v3[6] = (unsigned int)(v7); /*0x433a12*/
      if ( v7 ) /*0x433a15*/
      {
        memset(v7, 0, 0x20000u); /*0x433a22*/
        if ( (*(int (**)(unsigned int *, unsigned int *, int))(*v6 + 36))(v6, v25, 28) == 28 ) /*0x433a35*/
        {
          if ( v25[0] == 1416523622 ) /*0x433a44*/
          {
            v3[2] = v25[3]; /*0x433a4f*/
            v3[3] = v25[4]; /*0x433a56*/
            v3[1] = v25[2]; /*0x433a5d*/
            *v3 = v25[1]; /*0x433a64*/
            v3[5] = v25[6]; /*0x433a6a*/
            v8 = v3[6]; /*0x433a71*/
            v3[4] = v25[5]; /*0x433a74*/
            if ( (*(int (**)(unsigned int *, int, int))(*v6 + 36))(v6, v8, 0x20000) == 0x20000 ) /*0x433a84*/
              goto LABEL_24; /*0x433a84*/
          }
          else if ( v25[0] == 1951297350 ) /*0x433a94*/
          {
            (*(void (**)(unsigned int *, unsigned int, unsigned int))(*v6 + 40))(v6, 0, 0); /*0x433aa0*/
            if ( (*(int (**)(unsigned int *, char *, int))(*v6 + 36))(v6, v26, 36) == 36 ) /*0x433ab4*/
            {
              v9 = v28; /*0x433abe*/
              v10 = v29; /*0x433ac2*/
              v3[3] = v30; /*0x433ac6*/
              v11 = v32; /*0x433ac9*/
              v3[1] = v9; /*0x433acd*/
              v3[5] = v11; /*0x433ad0*/
              v12 = v31; /*0x433ad3*/
              v3[2] = v10; /*0x433ad7*/
              *v3 = v27; /*0x433ae1*/
              v13 = (void **)malloc(12 * v12); /*0x433aec*/
              v24 = v13; /*0x433af3*/
              if ( v13 ) /*0x433af7*/
              {
                (*(void (**)(unsigned int *, int, unsigned int))(*v6 + 40))(v6, v33, 0); /*0x433b07*/
                v14 = (*(int (**)(unsigned int *, void **, unsigned int))(*v6 + 36))(v6, v13, 12 * v31); /*0x433b1a*/
                v15 = v31; /*0x433b1d*/
                if ( v14 == 12 * v31 ) /*0x433b29*/
                {
                  v3[4] = 0; /*0x433b31*/
                  if ( v15 ) /*0x433b34*/
                  {
                    v16 = v13 + 2; /*0x433b36*/
                    do /*0x433b67*/
                    {
                      v17 = (int)*(v16 - 1); /*0x433b39*/
                      if ( v17 <= (int)*v16 ) /*0x433b42*/
                      {
                        LOWORD(v13) = *((unsigned short *)v16 - 4); /*0x433b3c*/
                        v18 = (char *)v13 + 1; /*0x433b44*/
                        do /*0x433b5b*/
                        {
                          *(unsigned short *)(v3[6] + 2 * v17++) = (unsigned short)v18; /*0x433b4a*/
                          ++v3[4]; /*0x433b53*/
                          v13 = (void **)*v16; /*0x433b56*/
                          ++v18; /*0x433b58*/
                        }
                        while ( v17 <= (int)*v16 ); /*0x433b5b*/
                        v15 = v31; /*0x433b5d*/
                      }
                      ++v2; /*0x433b61*/
                      v16 += 3; /*0x433b62*/
                    }
                    while ( v2 < v15 ); /*0x433b67*/
                    v13 = v24; /*0x433b69*/
                  }
                  free(v13); /*0x433b6e*/
                  (*(void (**)(unsigned int *, int, unsigned int))(*v6 + 40))(v6, v34, 0); /*0x433b81*/
LABEL_24:
                  v19 = (unsigned short *)v3[6]; /*0x433b84*/
                  v20 = v3[5] * v3[4]; /*0x433b8a*/
                  v21 = 0x10000; /*0x433b90*/
                  v3[8] = 0; /*0x433b95*/
                  do /*0x433ba4*/
                  {
                    if ( *v19 ) /*0x433b98*/
                      ++v3[8]; /*0x433b9d*/
                    ++v19; /*0x433ba0*/
                    --v21; /*0x433ba3*/
                  }
                  while ( v21 ); /*0x433ba4*/
                  v22 = (int)(__2_YAPAXI_Z(v20)); /*0x433ba7*/
                  v3[7] = v22; /*0x433bb1*/
                  if ( v22 && (*(int (**)(unsigned int *, int, size_t))(*v6 + 36))(v6, v22, v20) == v20 ) /*0x433bc1*/
                    goto LABEL_35; /*0x433bc1*/
                }
              }
            }
          }
        }
      }
      if ( v3[6] ) /*0x433bc3*/
        __3_YAXPAX_Z((void *)v3[6]); /*0x433bcb*/
      if ( v3[7] ) /*0x433bd3*/
        __3_YAXPAX_Z((void *)v3[7]); /*0x433bdb*/
      __3_YAXPAX_Z(v3); /*0x433be4*/
      v3 = 0; /*0x433bec*/
      goto LABEL_35; /*0x433bec*/
    }
  }
  return (gamemd::AbstractClass *)(v3); /*0x433bf8*/

}
}
// 0x4CB920
namespace gamemd {
char File::Dispatch()
{

  int16_t v2; // ax
  u_short v3; // cx
  uint16_t v4; // ax
  int v5; // eax

  v2 = ntohs((void *)(*(unsigned short *)this->__pad_6)); /*0x4cb928*/
  v3 = *(unsigned short *)&this->File_field_0x2[2]; /*0x4cb92d*/
  *(unsigned short *)this->__pad_6 = v2; /*0x4cb931*/
  v4 = ntohs((void *)(v3)); /*0x4cb936*/
  *(unsigned short *)&this->File_field_0x2[2] = v4; /*0x4cb93b*/
  v5 = v4 - 3; /*0x4cb944*/
  switch ( v5 ) /*0x4cb94c*/
  {
    case 0: /*0x4cb94c*/
    case 1: /*0x4cb94c*/
      LOWORD(v5) = ntohs((void *)(**(unsigned short **)&this->__pad_6[2])); /*0x4cb95a*/
      **(unsigned short **)&this->__pad_6[2] = v5; /*0x4cb963*/
      break; /*0x4cb966*/
    case 2: /*0x4cb94c*/
    case 3: /*0x4cb94c*/
      v5 = ntohl((void *)(**(unsigned int **)&this->__pad_6[2])); /*0x4cb96d*/
      **(unsigned int **)&this->__pad_6[2] = v5; /*0x4cb975*/
      break; /*0x4cb975*/
    default:
      return v5;
  }
  return v5; /*0x4cb962*/

}
}
// 0x5BD570
namespace gamemd {
unsigned int * File::LoadFileHVA(int a2)
{

  this->__pad_0[0] = (unsigned int)((unsigned int *)(0));
  *(unsigned int *)&this->File_field_0x2[2] = 0; /*0x5bd577*/
  *(unsigned int *)&this->__pad_6[2] = 0; /*0x5bd57a*/
  *(unsigned int *)&this->__pad_6[6] = 0; /*0x5bd57d*/
  if ( !((File*)((int)this))->ParseFileHVA(a2) ) /*0x5bd585*/
    this->__pad_0[0] = 1; /*0x5bd58e*/
  return this->__pad_0; /*0x5bd593*/

}
}
// 0x5BD5C0
namespace gamemd {
AbstractClass * * File::ParseFileHVA(int a2, int aP1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5BD5C0)
}
}
// 0x625AF0
namespace gamemd {
File * * File::LoadPaletteData(unsigned short *aP1)
{

  u_short v3; // cx
  u_short v4; // ax
  u_short *v5; // esi
  uint16_t v6; // ax
  int v7; // eax
  int v8; // ecx
  int v9; // ebx
  unsigned int *v10; // esi
  size_t v11; // ebp
  void *v12; // eax
  int v13; // eax
  u_short *result; // eax
  int v15; // [esp+8h] [ebp-8h]
  u_short *v17; // [esp+14h] [ebp+4h]

  v3 = (gamemd::u_short)((gamemd::File **)(*aP1));
  *(unsigned short *)this->__pad_0 = (unsigned short)(*aP1); /*0x625b05*/
  *(unsigned short *)this->__pad_0 = ntohs((void *)(v3)); /*0x625b11*/
  v4 = (gamemd::u_short)(aP1[1]); /*0x625b17*/
  *(unsigned short *)this->File_field_0x2 = v4; /*0x625b1a*/
  v5 = (gamemd::u_short *)(aP1 + 2); /*0x625b1f*/
  *(unsigned short *)this->File_field_0x2 = ntohs((void *)(v4)); /*0x625b27*/
  v6 = *(unsigned short *)this->__pad_0; /*0x625b2d*/
  *(unsigned int *)&this->File_field_0x2[2] = 0; /*0x625b30*/
  v15 = v6 - 4; /*0x625b3c*/
  if ( v15 <= 0 ) /*0x625b40*/
    return (gamemd::File **)((u_short *)this); /*0x625bf4*/
  while ( 1 ) /*0x625b50*/
  {
    v7 = (unsigned int)(__2_YAPAXI_Z(0x10u));
    v8 = *(unsigned int *)v5; /*0x625b55*/
    v9 = v7; /*0x625b57*/
    v10 = (unsigned int *)(v5 + 4); /*0x625b5c*/
    *(unsigned int *)v7 = v8; /*0x625b5f*/
    *(unsigned int *)(v7 + 4) = *(v10 - 1); /*0x625b64*/
    v11 = (uint16_t)ntohs((void *)(*(unsigned short *)(v7 + 6))); /*0x625b78*/
    v12 = (void *)__2_YAPAXI_Z(v11); /*0x625b7f*/
    *(unsigned int *)(v9 + 8) = (unsigned int)(v12); /*0x625b8a*/
    qmemcpy(v12, v10, v11); /*0x625b90*/
    v13 = -(ntohs((void *)(*(unsigned short *)(v9 + 6))) & 3) & 3; /*0x625baf*/
    v17 = (u_short *)((char *)v10 + v13 + v11); /*0x625bbd*/
    v15 += -8 - v13 - v11; /*0x625bcc*/
    ((File *)((File *)v9))->Dispatch(); /*0x625bd0*/
    result = (u_short *)this; /*0x625bd5*/
    *(unsigned int *)(v9 + 12) = *(unsigned int *)&this->File_field_0x2[2]; /*0x625bde*/
    *(unsigned int *)&this->File_field_0x2[2] = v9; /*0x625be1*/
    if ( v15 <= 0 ) /*0x625be4*/
      break; /*0x625be4*/
    v5 = v17; /*0x625b4a*/
  }
  return (gamemd::File **)(result);

}
}
// 0x625DB0
namespace gamemd {
int File::FindByPrefix(char *Str1, unsigned char *a3)
{

  int v3; // esi
  BOOL v4; // eax

  v3 = *(unsigned int *)&this->File_field_0x2[2]; /*0x625db1*/
  if ( v3 ) /*0x625db7*/
  {
    while ( strncmp(Str1, (const char *)v3, 4u) ) /*0x625dcb*/
    {
      v3 = *(unsigned int *)(v3 + 12); /*0x625dcd*/
      if ( !v3 ) /*0x625dd2*/
        return 0; /*0x625dd2*/
    }
    *a3 = **(unsigned char **)(v3 + 8); /*0x625def*/
    LOBYTE(v4) = v3 != 0; /*0x625df5*/
  }
  else
  {
    return 0; /*0x625dd4*/
  }
  return v4; /*0x625dd6*/

}
}
// 0x734990
namespace gamemd {
AbstractClass * * File::ParseCSFString(char * Source)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x734990)
}
}
// 0x755CD0
namespace gamemd {
unsigned int * File::LoadFileVXL(int a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x755CD0)
}
}
// 0x76AC90
namespace gamemd {
AbstractClass * * File::LoadWDT(ObjectClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x76AC90)
}
}
// 0x76B0A0
namespace gamemd {
AbstractClass * * File::LoadWDTDecompress(int aP1, int a3)
{

  int v4; // eax
  unsigned int i; // edi
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  int v10; // eax
  int v11; // edx
  bool v12; // zf
  uint8_t v13; // dl
  char v14; // dl
  int v15; // edx
  int v16; // [esp+Ch] [ebp+8h]

  v4 = *(unsigned int *)&this->__pad_6[30]; /*0x76b0a7*/
  if ( 4 * a3 < (unsigned int)(v4 * *(unsigned int *)&this->__pad_6[26]) ) /*0x76b0b5*/
    return 0; /*0x76b0ba*/
  *((unsigned int *)this + 17) = (unsigned int)(__2_YAPAXI_Z(4 * v4)); /*0x76b0c7*/
  for ( i = 0; i < *(unsigned int *)&this->__pad_6[30]; ++i ) /*0x76b0ca*/
    *(unsigned int *)(*((unsigned int *)this + 17) + 4 * i) = (unsigned int)(__2_YAPAXI_Z(*(unsigned int *)&this->__pad_6[26])); /*0x76b0e5*/
  v7 = 0; /*0x76b0f3*/
  v8 = 0; /*0x76b0f5*/
  v9 = 0; /*0x76b0f7*/
  v16 = 0; /*0x76b0fb*/
  if ( *(unsigned int *)&this->__pad_6[30] ) /*0x76b0f0*/
  {
    while ( 1 ) /*0x76b10a*/
    {
      v10 = 0; /*0x76b10a*/
      if ( *(unsigned int *)&this->__pad_6[26] ) /*0x76b107*/
        break; /*0x76b107*/
LABEL_18:
      if ( v8 ) /*0x76b15e*/
      {
        v8 = 0; /*0x76b160*/
        ++v7; /*0x76b162*/
        v16 = 0; /*0x76b163*/
      }
      if ( (unsigned int)++v9 >= *(unsigned int *)&this->__pad_6[30] ) /*0x76b16d*/
        return (gamemd::AbstractClass **)(1); /*0x76b16d*/
    }
    while ( 1 ) /*0x76b110*/
    {
      if ( !v8 ) /*0x76b113*/
      {
        v15 = *(uint8_t *)(v7 + aP1); /*0x76b130*/
        goto LABEL_14; /*0x76b130*/
      }
      v11 = v8 - 1; /*0x76b115*/
      if ( !v11 ) /*0x76b116*/
        break; /*0x76b116*/
      v12 = v11 == 1; /*0x76b118*/
      v13 = *(unsigned char *)(v7 + aP1); /*0x76b119*/
      if ( v12 ) /*0x76b11c*/
      {
        LOBYTE(v15) = v13 >> 4; /*0x76b123*/
LABEL_14:
        v14 = v15 & 3; /*0x76b133*/
        goto LABEL_15; /*0x76b133*/
      }
      v14 = v13 >> 6; /*0x76b11e*/
LABEL_15:
      *(unsigned char *)(*(unsigned int *)(*((unsigned int *)this + 17) + 4 * v9) + v10) = v14; /*0x76b136*/
      v8 = ++v16; /*0x76b143*/
      if ( v16 == 4 ) /*0x76b14b*/
      {
        v8 = 0; /*0x76b14d*/
        ++v7; /*0x76b14f*/
        v16 = 0; /*0x76b150*/
      }
      if ( (unsigned int)++v10 >= *(unsigned int *)&this->__pad_6[26] ) /*0x76b15a*/
        goto LABEL_18; /*0x76b15a*/
    }
    LOBYTE(v15) = *(unsigned char *)(v7 + aP1) >> 2; /*0x76b12b*/
    goto LABEL_14; /*0x76b12e*/
  }
  return (gamemd::AbstractClass **)(1); /*0x76b0b9*/

}
}
// 0x7C12B0
namespace gamemd {
int File::ParseAudioFileRIFF()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7C12B0)
}
}