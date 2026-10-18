// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ResultNode_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
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
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int ParseWDTTerritories(int p0, int p1);  // x4:signals@0x76b180
} // namespace gamemd

// 0x431F10
namespace gamemd {  // G42.18 ns repair
char File::IsReady(int a2, void *a2_1)
{


  if ( !(((this->BufferSize) >> 8) & 0xFF) ) /*0x431f10*/
    return ((RawFileClass *)this)->Open(0); /*0x431f1e*/
  int result; // eax
  (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x431f17*/
  return result; /*0x431f19*/

}
}  // G42.18 ns repair
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
    v5 = CCFileClass::Construct(v4, Source); /*0x4339b2*/
    v6 = v5; /*0x4339b7*/
    if ( v5 ) /*0x4339bb*/
    {
      if ( !v5->vt_slot_20(0) /*0x4339f0*/
        || !v6->vt_slot_28(1)
        || (v3 = (unsigned int *)__2_YAPAXI_Z(0x24u)) == 0 )
      {
LABEL_35:
        (*(void (**)(unsigned int *, int))*v6)(v6, 1); /*0x433bee*/
        return v3; /*0x433bf4*/
      }
      memset(v3, 0, 0x24u); /*0x433a04*/
      v7 = (void *)__2_YAPAXI_Z(0x20000u); /*0x433a0b*/
      v3[6] = v7; /*0x433a12*/
      if ( v7 ) /*0x433a15*/
      {
        memset(v7, 0, 0x20000u); /*0x433a22*/
        if ( v6->vt_slot_36(v25, 28) == 28 ) /*0x433a35*/
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
            if ( v6->vt_slot_36(v8, 0x20000) == 0x20000 ) /*0x433a84*/
              goto LABEL_24; /*0x433a84*/
          }
          else if ( v25[0] == 1951297350 ) /*0x433a94*/
          {
            v6->vt_slot_40(0, 0); /*0x433aa0*/
            if ( v6->vt_slot_36(v26, 36) == 36 ) /*0x433ab4*/
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
                v6->vt_slot_40(v33, 0); /*0x433b07*/
                v14 = v6->vt_slot_36(v13, 12 * v31); /*0x433b1a*/
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
                        v18 = &v13->u8_1; /*0x433b44*/
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
                  v6->vt_slot_40(v34, 0); /*0x433b81*/
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
                  v22 = __2_YAPAXI_Z(v20); /*0x433ba7*/
                  v3[7] = v22; /*0x433bb1*/
                  if ( v22 && v6->vt_slot_36(v22, v20) == v20 ) /*0x433bc1*/
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
  return v3; /*0x433bf8*/

}
}
// 0x4CB920
namespace gamemd {
char File::Dispatch(void *a1, void *a2, void *a3, void *a4)
{

  u_short v3; // cx

  __int16 v2; // ax
  v2 = ntohs(*(unsigned short *)this->__pad_6); /*0x4cb928*/
  v3 = *&this->q004; /*0x4cb92d*/
  *(unsigned short *)this->__pad_6 = v2; /*0x4cb931*/
  unsigned __int16 v4; // ax
  v4 = ntohs(v3); /*0x4cb936*/
  *&this->q004 = v4; /*0x4cb93b*/
  int v5 = v4 - 3; // eax /*0x4cb944*/
  switch ( v5 ) /*0x4cb94c*/
  {
    case 0: /*0x4cb94c*/
    case 1: /*0x4cb94c*/
      LOWORD(v5) = ntohs(**&this->ptr_8); /*0x4cb95a*/
      **&this->ptr_8 = v5; /*0x4cb963*/
      break; /*0x4cb966*/
    case 2: /*0x4cb94c*/
    case 3: /*0x4cb94c*/
      v5 = ntohl(**&this->ptr_8); /*0x4cb96d*/
      **&this->ptr_8 = v5; /*0x4cb975*/
      break; /*0x4cb975*/
    default:
      return v5;
  }
  return v5; /*0x4cb962*/

}
}
// 0x5BD570
namespace gamemd {
unsigned int * File::LoadFileHVA(int a2, void *a2_1)
{

  this->__pad_0 = 0; /*0x5bd575*/
  *&this->q004 = 0; /*0x5bd577*/
  *&this->ptr_8 = 0; /*0x5bd57a*/
  *&this->__pad_00C = 0; /*0x5bd57d*/
  if ( !((int)this)->ParseFileHVA(a2) ) /*0x5bd585*/
    this->__pad_0 = 1; /*0x5bd58e*/
  return (unsigned int *)(&this->__pad_0); /*0x5bd593*/

}
}
// 0x5BD5C0
namespace gamemd {
AbstractClass * * File::ParseFileHVA(int a2, int aP1, int a3)
{

  int v3; // esi
  int result; // eax
  void *v5; // eax
  int v6; // edx
  void *v7; // eax
  unsigned int v8; // ebp
  const void *v9; // eax
  void *v10; // edi
  int v11; // [esp+1Ch] [ebp-7Ch]
  unsigned char v12[16]; // [esp+20h] [ebp-78h] BYREF
  int v13; // [esp+30h] [ebp-68h]
  int v14; // [esp+34h] [ebp-64h]
  unsigned char v15[48]; // [esp+38h] [ebp-60h] BYREF

  if ( aP1->__pad_00C ) /*0x5bd5c9*/
    __3_YAXPAX_Z(aP1->__pad_00C); /*0x5bd5d3*/
  v3 = aP1; /*0x5bd5db*/
  aP1->__pad_00C = 0; /*0x5bd5e2*/
  result = (*(int (**)(int, int))(*(unsigned int *)aP1 + 28))(aP1, 1); /*0x5bd5eb*/
  if ( result ) /*0x5bd5f0*/
  {
    (*(void (**)(int, unsigned char *, int))(*(unsigned int *)aP1 + 36))(aP1, v12, 24); /*0x5bd607*/
    v5 = aP1->__pad_00C; /*0x5bd60a*/
    v6 = v13; /*0x5bd611*/
    aP1->q004 = v14; /*0x5bd617*/
    aP1->ptr_8 = v6; /*0x5bd61a*/
    if ( v5 ) /*0x5bd61d*/
      __3_YAXPAX_Z(v5); /*0x5bd620*/
    v7 = __2_YAPAXI_Z(48 * aP1->q004 * aP1->ptr_8); /*0x5bd636*/
    if ( !v7 ) /*0x5bd640*/
      v7 = 0; /*0x5bd649*/
    aP1->__pad_00C = v7; /*0x5bd64d*/
    if ( v7 ) /*0x5bd650*/
    {
      (*(void (**)(int, int, int))(*(unsigned int *)aP1 + 40))(aP1, 16 * aP1->q004, 1); /*0x5bd675*/
      v11 = 0; /*0x5bd67b*/
      if ( aP1->ptr_8 ) /*0x5bd678*/
      {
        while ( 1 ) /*0x5bd686*/
        {
          v8 = 0; /*0x5bd686*/
          if ( aP1->q004 ) /*0x5bd683*/
            break; /*0x5bd683*/
          LABEL_14:
          if ( (unsigned int)++v11 >= aP1->ptr_8 ) /*0x5bd6e8*/
            goto LABEL_15; /*0x5bd6e8*/
        }
        while ( (*(int (**)(int, unsigned char *, int))(*(unsigned int *)v3 + 36))(v3, v15, 48) == 48 ) /*0x5bd69d*/
        {
          v9 = (const void *)Matrix::Copy12Float(v15); /*0x5bd6a8*/
          v10 = (void *)(aP1->__pad_00C + 48 * (v8 + v11 * *&aP1->q004)); /*0x5bd6c7*/
          ++v8; /*0x5bd6c9*/
          memcpy(v10, v9, 0x30u); /*0x5bd6ca*/
          v3 = aP1; /*0x5bd6cf*/
          if ( v8 >= aP1->q004 ) /*0x5bd6d8*/
            goto LABEL_14; /*0x5bd6d8*/
        }
        (*(void (**)(int))(*(unsigned int *)v3 + 52))(v3); /*0x5bd704*/
        if ( aP1->__pad_00C ) /*0x5bd707*/
          __3_YAXPAX_Z(aP1->__pad_00C); /*0x5bd70f*/
        aP1->__pad_00C = 0; /*0x5bd719*/
        return 0; /*0x5bd721*/
      }
      else
      {
        LABEL_15:
        (*(void (**)(int))(*(unsigned int *)v3 + 52))(v3); /*0x5bd6ea*/
        return (gamemd::AbstractClass **)(1); /*0x5bd6f4*/
      }
    }
    else
    {
      aP1->__pad_00C = 0; /*0x5bd652*/
      (*(void (**)(int))(*(unsigned int *)aP1 + 52))(aP1); /*0x5bd659*/
      return 0; /*0x5bd65f*/
    }
  }
  return (gamemd::AbstractClass **)(result); /*0x5bd5f2*/

}
}
// 0x625AF0
namespace gamemd {
File * * File::LoadPaletteData(unsigned short *aP1)
{

  u_short v3; // cx
  u_short v4; // ax
  unsigned int *v5; // esi
  unsigned __int16 v6; // ax
  unsigned int *v7; // eax
  unsigned int v8; // ecx
  File *v9; // ebx
  unsigned int *v10; // esi
  size_t v11; // ebp
  void *v12; // eax
  int v13; // eax
  u_short *result; // eax
  int v15; // [esp+8h] [ebp-8h]
  u_short *v17; // [esp+14h] [ebp+4h]

  v3 = *aP1; /*0x625b02*/
  *(unsigned short *)this->__pad_0 = *aP1; /*0x625b05*/
  *(unsigned short *)this->__pad_0 = ntohs(v3); /*0x625b11*/
  v4 = aP1[1]; /*0x625b17*/
  *(unsigned short *)this->File_field_0x2 = v4; /*0x625b1a*/
  v5 = (unsigned int *)(aP1 + 2); /*0x625b1f*/
  *(unsigned short *)this->File_field_0x2 = ntohs(v4); /*0x625b27*/
  v6 = *(unsigned short *)this->__pad_0; /*0x625b2d*/
  *&this->q004 = 0; /*0x625b30*/
  v15 = v6 - 4; /*0x625b3c*/
  if ( v15 <= 0 ) /*0x625b40*/
    return (u_short *)this; /*0x625bf4*/
  while ( 1 ) /*0x625b50*/
  {
    v7 = (unsigned int *)__2_YAPAXI_Z(0x10u); /*0x625b50*/
    v8 = *v5; /*0x625b55*/
    v9 = (File *)v7; /*0x625b57*/
    v10 = v5 + 2; /*0x625b5c*/
    *v7 = v8; /*0x625b5f*/
    v7[1] = *(v10 - 1); /*0x625b64*/
    v11 = (unsigned __int16)ntohs(*((unsigned short *)v7 + 3)); /*0x625b78*/
    v12 = (void *)__2_YAPAXI_Z(v11); /*0x625b7f*/
    *&v9->ptr_8 = v12; /*0x625b8a*/
    qmemcpy(v12, v10, v11); /*0x625b90*/
    v13 = -(ntohs(*(unsigned short *)v9->__pad_6) & 3) & 3; /*0x625baf*/
    v17 = (u_short *)((char *)v10 + v13 + v11); /*0x625bbd*/
    v15 += -8 - v13 - v11; /*0x625bcc*/
    File::Dispatch(v9); /*0x625bd0*/
    result = (u_short *)this; /*0x625bd5*/
    *&v9->__pad_00C = *&this->q004; /*0x625bde*/
    *&this->q004 = v9; /*0x625be1*/
    if ( v15 <= 0 ) /*0x625be4*/
      break; /*0x625be4*/
    v5 = (unsigned int *)v17; /*0x625b4a*/
  }
  return result; /*0x625bec*/

}
}
// 0x625DB0
namespace gamemd {
int File::FindByPrefix(char *Str1, unsigned char *a3)
{

  BOOL v4; // eax

  int v3 = *&this->q004; // esi /*0x625db1*/
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

  int v1; // ebp
  size_t v2; // eax
  char *v3; // ecx
  int v4; // ecx
  int v5; // eax
  int v6; // ebp
  size_t v7; // eax
  int v8; // eax
  wchar_t *v9; // ecx
  __int16 v10; // dx
  int v11; // esi
  wchar_t *v12; // ecx
  unsigned short *v13; // edi
  int v14; // eax
  size_t v15; // eax
  size_t Size; // [esp+10h] [ebp-9Ch] BYREF
  int v18; // [esp+14h] [ebp-98h] BYREF
  int v19; // [esp+18h] [ebp-94h]
  int v20; // [esp+1Ch] [ebp-90h] BYREF
  int v21; // [esp+20h] [ebp-8Ch]
  int v22; // [esp+24h] [ebp-88h]
  CCFileClass v23; // [esp+28h] [ebp-84h] BYREF
  int v24[3]; // [esp+80h] [ebp-2Ch] BYREF
  int v25; // [esp+8Ch] [ebp-20h]
  char Buffer[24]; // [esp+94h] [ebp-18h] BYREF

  CCFileClass::Construct(&v23, Source); /*0x73499f*/
  v19 = 0; /*0x7349ab*/
  if ( (unsigned __int8)CCFileClass::Open(&v23, 0) /*0x7349e5*/
    && FileClass::Load(&v23, (const CHAR *)1)
    && CCFileClass::Read(&v23, Buffer, 24) == 24 )
  {
    if ( CCFileClass::Read(&v23, &v18, 4) != 4 ) /*0x7349fe*/
    {
LABEL_42:
      /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x734cad*/
      v25 = 0; /*0x734cbc*/
      Vector::Clear((int)v24); /*0x734cc3*/
      *(unsigned int *)v23.__tail_0 = &off_7E1668; /*0x734ccc*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v23); /*0x734cd4*/
      return 1; /*0x734ce8*/
    }
    v1 = 0; /*0x734a04*/
    v21 = 0; /*0x734a06*/
    while ( v18 == 1279413280 ) /*0x734a12*/
    {
      CCFileClass::Read(&v23, &v20, 4); /*0x734a23*/
      CCFileClass::Read(&v23, &Size, 4); /*0x734a33*/
      v2 = Size; /*0x734a38*/
      if ( Size ) /*0x734a3e*/
      {
        CCFileClass::Read(&v23, byte_B1BF38, Size); /*0x734a4a*/
        v2 = Size; /*0x734a4f*/
      }
      v3 = (char *)dword_B1CF74; /*0x734a53*/
      byte_B1BF38[v2] = 0; /*0x734a59*/
      strcpy(&v3[v1], byte_B1BF38); /*0x734a7b*/
      if ( (int)Size > dword_B1CF58 ) /*0x734a90*/
        dword_B1CF58 = Size; /*0x734a92*/
      v4 = v19; /*0x734a9d*/
      v22 = 0; /*0x734aa1*/
      *(unsigned int *)((char *)dword_B1CF74 + v1 + 36) = v19; /*0x734aa5*/
      *(unsigned int *)((char *)dword_B1CF74 + v1 + 32) = v20; /*0x734ab3*/
      v5 = v20; /*0x734ab7*/
      if ( v20 > 0 ) /*0x734abd*/
      {
        v6 = 4 * v4; /*0x734ac3*/
        do /*0x734c79*/
        {
          CCFileClass::Read(&v23, &v18, 4); /*0x734ad5*/
          if ( v18 != 1398034976 && v18 != 1398035031 ) /*0x734aea*/
            goto LABEL_43; /*0x734aea*/
          CCFileClass::Read(&v23, &Size, 4); /*0x734afb*/
          v7 = Size; /*0x734b00*/
          if ( Size ) /*0x734b06*/
          {
            CCFileClass::Read(&v23, dword_B17F24, 2 * Size); /*0x734b15*/
            v7 = Size; /*0x734b1a*/
          }
          dword_B17F24[v7] = 0; /*0x734b1e*/
          v8 = *(unsigned int *)dword_B17F24; /*0x734b26*/
          v9 = dword_B17F24; /*0x734b2e*/
          if ( dword_B17F24[0] ) /*0x734b33*/
          {
            do /*0x734b44*/
            {
              v8 = ~v8; /*0x734b35*/
              *v9 = v8; /*0x734b37*/
              LOWORD(v8) = v9[1]; /*0x734b3a*/
              ++v9; /*0x734b3e*/
            }
            while ( (unsigned short)v8 ); /*0x734b44*/
            (v8) = ((v8) & ~0xFFFF) | ((dword_B17F24[0]) & 0xFFFF); /*0x734b46*/
          }
          v10 = 0; /*0x734b4b*/
          v11 = 1; /*0x734b50*/
          v12 = dword_B17F24; /*0x734b55*/
          v13 = dword_B17F24 + 2; /*0x734b5a*/
          if ( (unsigned short)v8 ) /*0x734b5f*/
          {
            while ( 1 ) /*0x734b61*/
            {
              if ( (unsigned short)v8 == 32 ) /*0x734b65*/
              {
                if ( v10 == 32 || v11 ) /*0x734b6e*/
                  goto LABEL_31; /*0x734b6e*/
              }
              else if ( (unsigned short)v8 == 10 || (unsigned short)v8 == 9 ) /*0x734b7c*/
              {
                if ( v10 == 32 ) /*0x734b8e*/
                  --v12; /*0x734b90*/
                *v12 = v8; /*0x734b93*/
                v11 = 1; /*0x734b96*/
                v10 = v8; /*0x734b9b*/
                ++v12; /*0x734b9d*/
                goto LABEL_31; /*0x734b9d*/
              }
              *v12++ = v8; /*0x734b7e*/
              v10 = v8; /*0x734b84*/
              v11 = 0; /*0x734b86*/
LABEL_31:
              LOWORD(v8) = *v13++; /*0x734ba0*/
              if ( !(unsigned short)v8 ) /*0x734ba9*/
              {
                if ( v10 == 32 ) /*0x734baf*/
                  --v12; /*0x734bb1*/
                break; /*0x734bb1*/
              }
            }
          }
          *v12 = 0; /*0x734bb4*/
          v14 = wcslen(dword_B17F24); /*0x734bbc*/
          *(unsigned int *)((char *)dword_B1CF78 + v6) = __2_YAPAXI_Z(2 * v14 + 2); /*0x734bd6*/
          wcscpy(*(wchar_t **)((char *)dword_B1CF78 + v6), dword_B17F24); /*0x734be3*/
          if ( v18 == 1398035031 ) /*0x734bf4*/
          {
            CCFileClass::Read(&v23, &Size, 4); /*0x734c01*/
            v15 = Size; /*0x734c06*/
            if ( Size ) /*0x734c0c*/
            {
              CCFileClass::Read(&v23, byte_B1BF38, Size); /*0x734c18*/
              v15 = Size; /*0x734c1d*/
            }
            byte_B1BF38[v15] = 0; /*0x734c23*/
            if ( v15 ) /*0x734c29*/
            {
              *(unsigned int *)((char *)dword_B1CF7C + v6) = __2_YAPAXI_Z(v15 + 1); /*0x734c43*/
              strcpy(*(char **)((char *)dword_B1CF7C + v6), byte_B1BF38); /*0x734c5e*/
            }
          }
          v5 = v20; /*0x734c6b*/
          v6 += 4; /*0x734c70*/
          ++v22; /*0x734c75*/
        }
        while ( v22 < v20 ); /*0x734c79*/
        v1 = v21; /*0x734c7f*/
      }
      v1 += 40; /*0x734c87*/
      v21 = v1; /*0x734c97*/
      v19 += v5; /*0x734c9b*/
      if ( CCFileClass::Read(&v23, &v18, 4) != 4 ) /*0x734ca7*/
        goto LABEL_42; /*0x734ca7*/
    }
  }
LABEL_43:
  /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x734ce9*/
  v25 = 0; /*0x734cf8*/
  Vector::Clear((int)v24); /*0x734cff*/
  *(unsigned int *)v23.__tail_0 = &off_7E1668; /*0x734d08*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v23); /*0x734d10*/
  return 0; /*0x734cde*/

}
}
// 0x755CD0
namespace gamemd {
unsigned int * File::LoadFileVXL(int a2, int a3, void *a3_1)
{

  this->__pad_0 = 0; /*0x755cd9*/
  *&this->q004 = 0; /*0x755cdb*/
  *&this->ptr_8 = 0; /*0x755cde*/
  *&this->__pad_00C = 0; /*0x755ce1*/
  *&this->ptr_10 = 0; /*0x755ce4*/
  *&this->__pad_014 = 0; /*0x755ce7*/
  *&this->ptr_18 = 0; /*0x755cea*/
  if ( !((int)this)->SortDepth(a2, a3) ) /*0x755cf5*/
    this->__pad_0 = 1; /*0x755cfe*/
  return (unsigned int *)(&this->__pad_0); /*0x755d03*/

}
}
// 0x76AC90
namespace gamemd {
AbstractClass * * File::LoadWDT(ObjectClass * aP1)
{

  File *v3; // eax
  u_short *PaletteData; // ebp
  AbstractClass **v5; // edi
  AbstractClass *v6; // eax
  int v7; // eax
  size_t v8; // ecx
  int v9; // eax
  size_t v10; // edx
  void *v11; // edi
  size_t v13; // [esp+10h] [ebp-1Ch] BYREF
  size_t v14; // [esp+14h] [ebp-18h] BYREF
  size_t Size; // [esp+18h] [ebp-14h] BYREF
  size_t v16; // [esp+1Ch] [ebp-10h] BYREF
  size_t v17; // [esp+20h] [ebp-Ch] BYREF
  void *Block; // [esp+24h] [ebp-8h]
  unsigned int v19; // [esp+28h] [ebp-4h] BYREF
  u_short *v20; // [esp+30h] [ebp+4h]

  this->q004 = 0; /*0x76ac9b*/
  this->u32_30 = 0; /*0x76ac9e*/
  this->u32_34 = 0; /*0x76aca1*/
  this->u8_38 = 1; /*0x76aca4*/
  this->u8_39 = 0; /*0x76aca8*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_DynamicVectorClass_rc_ptr_WDTTerritory) */  /*0x76acab*/
  this->q040 = 10; /*0x76acb2*/
  this->u32_3C = 0; /*0x76acb9*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_WDTState) */  /*0x76acbe*/
  v3 = (File *)__2_YAPAXI_Z(0xCu); /*0x76acc4*/
  if ( v3 ) /*0x76acce*/
    PaletteData = File::LoadPaletteData(v3, aP1); /*0x76acdc*/
  else
    PaletteData = 0; /*0x76ace0*/
  v5 = &this->__pad_01C; /*0x76ace6*/
  v13 = 0; /*0x76acf2*/
  v14 = 0; /*0x76acf6*/
  Size = 0; /*0x76acfa*/
  v16 = 0; /*0x76acfe*/
  v17 = 0; /*0x76ad02*/
  v19 = 0; /*0x76ad06*/
  this->ptr_8 = 0; /*0x76ad0a*/
  this->__pad_00C = 0; /*0x76ad0d*/
  this->ptr_10 = 0; /*0x76ad10*/
  this->__pad_014 = 0; /*0x76ad13*/
  this->ptr_18 = 0; /*0x76ad16*/
  this->__pad_01C = 0; /*0x76ad19*/
  this->q020 = 0; /*0x76ad1b*/
  this->ptr_24 = 0; /*0x76ad1e*/
  this->ptr_28 = 0; /*0x76ad21*/
  this->u32_44 = 0; /*0x76ad24*/
  if ( (unsigned __int8)HashTable::FindChunk((HashTable *)PaletteData, aNack, 0, &v19) ) /*0x76ad27*/
  {
    if ( PaletteData ) /*0x76ad32*/
    {
LABEL_25:
      ResultNode::CleanupList((ResultNode *)PaletteData); /*0x76afa4*/
      __3_YAXPAX_Z(PaletteData); /*0x76afac*/
    }
  }
  else
  {
    if ( (unsigned __int8)HashTable::FindString((HashTable *)PaletteData, aTotk, &this->__pad_01C) ) /*0x76ad45*/
    {
      v6 = *v5; /*0x76ad4e*/
      this->q048 = 1; /*0x76ad50*/
      v6 = (AbstractClass *)((char *)v6 + 1); /*0x76ad54*/
      *v5 = v6; /*0x76ad55*/
      this->ptr_24 = v6; /*0x76ad59*/
    }
    else
    {
      this->q048 = 0; /*0x76ad69*/
      HashTable::FindString((HashTable *)PaletteData, aCrtk, &this->ptr_24); /*0x76ad6c*/
      ++this->ptr_24; /*0x76ad7d*/
      HashTable::FindString((HashTable *)PaletteData, aCyln, &this->__pad_01C); /*0x76ad80*/
      *v5 = (AbstractClass *)((char *)*v5 + 1); /*0x76ad85*/
    }
    HashTable::FindChunk((HashTable *)PaletteData, aWurl, 0, &v17); /*0x76ad94*/
    HashTable::FindChunk((HashTable *)PaletteData, aSdsc, 0, &Size); /*0x76ada6*/
    HashTable::FindChunk((HashTable *)PaletteData, aLdsc, 0, &v16); /*0x76adb8*/
    if ( !this->q048 ) /*0x76adbd*/
      HashTable::FindChunk((HashTable *)PaletteData, aMpvc, 0, &v13); /*0x76adcf*/
    HashTable::FindChunk((HashTable *)PaletteData, aHsvc, 0, &v14); /*0x76ade1*/
    this->ptr_8 = __2_YAPAXI_Z(Size); /*0x76adf0*/
    v7 = __2_YAPAXI_Z(v16); /*0x76adf8*/
    v8 = v17; /*0x76adfd*/
    this->__pad_00C = v7; /*0x76ae01*/
    v9 = __2_YAPAXI_Z(v8); /*0x76ae05*/
    v10 = v14; /*0x76ae0a*/
    this->ptr_10 = v9; /*0x76ae0e*/
    Block = (void *)__2_YAPAXI_Z(v10); /*0x76ae17*/
    v20 = 0; /*0x76ae23*/
    if ( !this->q048 ) /*0x76ae1b*/
    {
      v20 = (u_short *)__2_YAPAXI_Z(v13); /*0x76ae40*/
      memset(v20, 0, v13); /*0x76ae47*/
    }
    memset(this->ptr_8, 0, Size); /*0x76ae5e*/
    memset(this->__pad_00C, 0, v16); /*0x76ae75*/
    memset(this->ptr_10, 0, v17); /*0x76ae8c*/
    memset(Block, 0, v14); /*0x76aea4*/
    File::FindByPrefix((File *)PaletteData, aCmid, &this->__pad_014); /*0x76aeb8*/
    HashTable::FindString((HashTable *)PaletteData, aCyid, &this->ptr_18); /*0x76aec8*/
    if ( this->q048 ) /*0x76aecd*/
      this->ptr_28 = 0; /*0x76aed2*/
    else
      HashTable::FindString((HashTable *)PaletteData, aTicc, &this->ptr_28); /*0x76aee2*/
    HashTable::FindChunk((HashTable *)PaletteData, aSdsc, this->ptr_8, &Size); /*0x76aef7*/
    HashTable::FindChunk((HashTable *)PaletteData, aLdsc, this->__pad_00C, &v16); /*0x76af0c*/
    HashTable::FindChunk((HashTable *)PaletteData, aWurl, this->ptr_10, &v17); /*0x76af21*/
    if ( !this->q048 ) /*0x76af26*/
      HashTable::FindChunk((HashTable *)PaletteData, aMpvc, v20, &v13); /*0x76af3c*/
    v11 = Block; /*0x76af41*/
    HashTable::FindChunk((HashTable *)PaletteData, aHsvc, Block, &v14); /*0x76af52*/
    if ( this->q048 ) /*0x76af57*/
      this->q020 = 30; /*0x76af6f*/
    else
      ParseWDTTerritories((int)this, (int)v20, v13); /*0x76af68*/
    File::LoadWDTDecompress((File *)this, (int)v11, v14); /*0x76af7e*/
    __3_YAXPAX_Z(v11); /*0x76af84*/
    if ( !this->q048 ) /*0x76af89*/
      __3_YAXPAX_Z(v20); /*0x76af98*/
    if ( PaletteData ) /*0x76afa2*/
      goto LABEL_25; /*0x76afa2*/
  }
  return this; /*0x76afb6*/

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

  v4 = *&this->ptr_24; /*0x76b0a7*/
  if ( 4 * a3 < (unsigned int)(v4 * *&this->q020) ) /*0x76b0b5*/
    return 0; /*0x76b0ba*/
  this->u32_44 = operator new(4 * v4); /*0x76b0c7*/
  for ( i = 0; i < *&this->ptr_24; ++i ) /*0x76b0ca*/
    *(unsigned int *)(this->u32_44 + 4 * i) = operator new(*&this->q020); /*0x76b0e5*/
  v7 = 0; /*0x76b0f3*/
  v8 = 0; /*0x76b0f5*/
  v9 = 0; /*0x76b0f7*/
  v16 = 0; /*0x76b0fb*/
  if ( *&this->ptr_24 ) /*0x76b0f0*/
  {
    while ( 1 ) /*0x76b10a*/
    {
      v10 = 0; /*0x76b10a*/
      if ( *&this->q020 ) /*0x76b107*/
        break; /*0x76b107*/
      LABEL_18:
      if ( v8 ) /*0x76b15e*/
      {
        v8 = 0; /*0x76b160*/
        ++v7; /*0x76b162*/
        v16 = 0; /*0x76b163*/
      }
      if ( (unsigned int)++v9 >= *&this->ptr_24 ) /*0x76b16d*/
        return 1; /*0x76b16d*/
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
        (*((unsigned char *)&(v15))) = v13 >> 4; /*0x76b123*/
        LABEL_14:
        v14 = v15 & 3; /*0x76b133*/
        goto LABEL_15; /*0x76b133*/
      }
      v14 = v13 >> 6; /*0x76b11e*/
      LABEL_15:
      *(unsigned char *)(*(unsigned int *)(this->u32_44 + 4 * v9) + v10) = v14; /*0x76b136*/
      v8 = ++v16; /*0x76b143*/
      if ( v16 == 4 ) /*0x76b14b*/
      {
        v8 = 0; /*0x76b14d*/
        ++v7; /*0x76b14f*/
        v16 = 0; /*0x76b150*/
      }
      if ( (unsigned int)++v10 >= *&this->q020 ) /*0x76b15a*/
        goto LABEL_18; /*0x76b15a*/
    }
    (*((unsigned char *)&(v15))) = *(unsigned char *)(v7 + aP1) >> 2; /*0x76b12b*/
    goto LABEL_14; /*0x76b12e*/
  }
  return 1; /*0x76b0b9*/
}
}
// 0x7C12B0
namespace gamemd {
int File::ParseAudioFileRIFF()
{

  File *v3; // edi
  unsigned __int8 *v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  unsigned __int8 *v8; // eax
  int v9; // edi
  int v10; // edi
  int v11; // eax
  unsigned __int8 *v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edx
  signed int v19; // ecx
  unsigned short *v20; // ebp
  int v21; // edi
  int v22; // eax
  unsigned int *v23; // ebx
  unsigned int v24; // ecx
  int v25; // edx
  unsigned __int16 *v26; // eax
  int v27; // edi
  int v28; // eax
  int v29; // ebx
  unsigned int v30; // edi
  int *v31; // ebp
  int v32; // eax
  int v33; // ebx
  int v34; // ecx
  int v35; // eax
  bool v36; // cf
  int v37; // [esp+10h] [ebp-40h]
  int v38; // [esp+14h] [ebp-3Ch]
  char *v39; // [esp+18h] [ebp-38h]
  int v40; // [esp+1Ch] [ebp-34h]
  unsigned int v41; // [esp+20h] [ebp-30h]
  unsigned int v42; // [esp+24h] [ebp-2Ch]
  int v43; // [esp+28h] [ebp-28h]
  int v44; // [esp+2Ch] [ebp-24h]
  int v45; // [esp+30h] [ebp-20h]
  int v46; // [esp+34h] [ebp-1Ch]
  int v47; // [esp+38h] [ebp-18h]
  unsigned int v48; // [esp+3Ch] [ebp-14h]
  unsigned int v49; // [esp+40h] [ebp-10h]
  unsigned int v50; // [esp+44h] [ebp-Ch]
  int v51; // [esp+48h] [ebp-8h] BYREF
  unsigned int v52; // [esp+4Ch] [ebp-4h]

  if ( (*((int (__cdecl **)(File *, int, int *, int))&this->q040))(this, 5, &v51, 8) ) /*0x7c12c3*/
    return -2; /*0x7c12d9*/
  if ( v51 != 1212368461 ) /*0x7c12e2*/
    return -4; /*0x7c12f0*/
  v3 = &this->u32_98; /*0x7c12f5*/
  v4 = (unsigned __int8 *)(((((v52 << 16) | v52 & 0xFF00) << 8) | (((((v52) >> 16) & 0xFFFF) | v52 & 0xFF0000) >> 8)) + 1); /*0x7c131e*/
  LOBYTE(v4) = (HIBYTE(v52) + 1) & 0xFE; /*0x7c131f*/
  if ( (*((int (__cdecl **)(File *, int, File *, unsigned __int8 *))&this->q040))(this, 5, &this->u32_98, v4) ) /*0x7c1326*/
    return -4; /*0x7c133c*/
  v5 = *(unsigned int *)v3->__pad_0; /*0x7c133d*/
  if ( *(unsigned int *)v3->__pad_0 ) /*0x7c133d*/
  {
    v6 = 24 * v5; /*0x7c134c*/
    v7 = (*((int (__cdecl **)(File *, int, unsigned int, int))&this->u32_44))(this, 2, 0, 24 * v5); /*0x7c1354*/
    this->u32_730 = v7; /*0x7c135c*/
    if ( !v7 ) /*0x7c1362*/
      return -8; /*0x7c1370*/
    (*((void (__cdecl **)(File *, int, int, int))&this->u32_44))(this, 4, v7, v6); /*0x7c1376*/
    this->u32_30 += v6; /*0x7c1388*/
    if ( (*((int (__cdecl **)(File *, int, int *, int))&this->q040))(this, 5, &v51, 8) ) /*0x7c138b*/
      return -2; /*0x7c13a1*/
    if ( v51 != 1145259597 ) /*0x7c13aa*/
      return -4; /*0x7c13b8*/
    v8 = (unsigned __int8 *)(((((v52 << 16) | v52 & 0xFF00) << 8) | (((((v52) >> 16) & 0xFFFF) | v52 & 0xFF0000) >> 8)) + 1); /*0x7c13e0*/
    LOBYTE(v8) = (HIBYTE(v52) + 1) & 0xFE; /*0x7c13e1*/
    if ( (*((int (__cdecl **)(File *, int, unsigned int, unsigned __int8 *))&this->q040))(this, 5, this->u32_730, v8) ) /*0x7c13ee*/
      return -4; /*0x7c1404*/
  }
  v9 = this->u32_724; /*0x7c1405*/
  if ( v9 ) /*0x7c140d*/
  {
    v10 = 16 * v9; /*0x7c1413*/
    v11 = (*((int (__cdecl **)(File *, int, unsigned int, int))&this->u32_44))(this, 2, 0, v10); /*0x7c141b*/
    this->u32_734 = v11; /*0x7c1423*/
    if ( !v11 ) /*0x7c1429*/
      return -8; /*0x7c1437*/
    (*((void (__cdecl **)(File *, int, int, int))&this->u32_44))(this, 4, v11, v10); /*0x7c143d*/
    this->u32_30 += v10; /*0x7c144f*/
    if ( (*((int (__cdecl **)(File *, int, int *, int))&this->q040))(this, 5, &v51, 8) ) /*0x7c1452*/
      return -2; /*0x7c1468*/
    if ( v51 != 1413695053 ) /*0x7c1471*/
      return -4; /*0x7c147f*/
    v12 = (unsigned __int8 *)(((((v52 << 16) | v52 & 0xFF00) << 8) | (((((v52) >> 16) & 0xFFFF) | v52 & 0xFF0000) >> 8)) + 1); /*0x7c14a7*/
    LOBYTE(v12) = (HIBYTE(v52) + 1) & 0xFE; /*0x7c14a8*/
    if ( (*((int (__cdecl **)(File *, int, unsigned int, unsigned __int8 *))&this->q040))(this, 5, this->u32_734, v12) ) /*0x7c14b5*/
      return -4; /*0x7c14cb*/
  }
  v13 = this->u32_724; /*0x7c14cc*/
  v50 = v13; /*0x7c14d4*/
  if ( !v13 ) /*0x7c14d8*/
    return -1; /*0x7c1728*/
  v14 = (*((int (__cdecl **)(File *, int, unsigned int, unsigned int))&this->u32_44))(this, 2, 0, 12 * v13); /*0x7c14e9*/
  this->u32_738 = v14; /*0x7c14f1*/
  if ( !v14 ) /*0x7c14f7*/
    return -8; /*0x7c14f7*/
  (*((void (__cdecl **)(File *, int, int, unsigned int))&this->u32_44))(this, 4, v14, 12 * v13); /*0x7c150b*/
  this->u32_30 += 12 * v13; /*0x7c1518*/
  v46 = 0; /*0x7c151b*/
  v15 = 0; /*0x7c1525*/
  v38 = 0; /*0x7c1527*/
  v40 = 0; /*0x7c152b*/
  while ( 2 ) /*0x7c152f*/
  {
    v16 = this->u32_734; /*0x7c152f*/
    v44 = this->u32_738; /*0x7c153b*/
    v17 = *(unsigned int *)(v15 + v16 + 4); /*0x7c153f*/
    v45 = *(unsigned int *)(v15 + v16 + 8); /*0x7c1549*/
    v48 = v17; /*0x7c154d*/
    if ( !v17 ) /*0x7c1551*/
      goto LABEL_53; /*0x7c1551*/
    v39 = 0; /*0x7c156a*/
    v18 = *((unsigned __int16 *)&this->u16_714); /*0x7c156e*/
    v42 = this->u32_720; /*0x7c1575*/
    v49 = (unsigned __int16)v18; /*0x7c1579*/
    v43 = 0; /*0x7c157d*/
    v19 = (this->u32_88 - 1) / v17 + 1; /*0x7c1589*/
    v37 = v19; /*0x7c158c*/
    if ( !(unsigned short)v18 ) /*0x7c1590*/
      goto LABEL_47; /*0x7c1590*/
    v20 = (unsigned short *)(this->u32_71C + 2); /*0x7c1596*/
    while ( 1 ) /*0x7c159d*/
    {
      v21 = -1; /*0x7c159d*/
      v41 = 0; /*0x7c15a2*/
      if ( v42 ) /*0x7c15aa*/
        break; /*0x7c15aa*/
LABEL_44:
      v20 += 2; /*0x7c1622*/
      if ( ++v43 >= v18 ) /*0x7c1630*/
        goto LABEL_47; /*0x7c1630*/
    }
    v22 = *(unsigned int *)(v15 + this->u32_734); /*0x7c15b2*/
    v23 = (unsigned int *)this->u32_730; /*0x7c15b5*/
    v47 = v22; /*0x7c15bb*/
    do /*0x7c1600*/
    {
      if ( v23[1] == v47 ) /*0x7c15c8*/
      {
        v24 = *v23; /*0x7c15ca*/
        v25 = (unsigned __int16)*(v20 - 1); /*0x7c15ce*/
        if ( *v23 >= (unsigned __int16)v25 ) /*0x7c15d4*/
        {
          HIWORD(v26) = 0; /*0x7c15d6*/
          if ( v24 > (unsigned __int16)*v20 ) /*0x7c15de*/
            break; /*0x7c15de*/
          if ( v21 < 0 ) /*0x7c15e2*/
            v21 = v24 - v25; /*0x7c15e6*/
          LOWORD(v26) = *v20; /*0x7c15d8*/
          v39 = (char *)v26 - v24; /*0x7c15ea*/
        }
      }
      v23 += 6; /*0x7c15f7*/
      ++v41; /*0x7c15fc*/
    }
    while ( v41 < v42 ); /*0x7c1600*/
    if ( v21 <= 0 || (unsigned int)&v39[v21 + 1] >= v48 ) /*0x7c1614*/
    {
      v15 = v40; /*0x7c1616*/
      v19 = v37; /*0x7c161a*/
      v18 = v49; /*0x7c161e*/
      goto LABEL_44; /*0x7c161e*/
    }
    v19 = ++v37; /*0x7c163c*/
LABEL_47:
    if ( v19 <= 0 ) /*0x7c1643*/
    {
LABEL_53:
      v15 = v40 + 16; /*0x7c16f7*/
      v36 = ++v46 < v50; /*0x7c170e*/
      v40 += 16; /*0x7c1714*/
      v38 += 12; /*0x7c1718*/
      if ( !v36 ) /*0x7c171c*/
        return -1; /*0x7c171c*/
      continue; /*0x7c171c*/
    }
    break;
  }
  v27 = 12 * v19; /*0x7c1654*/
  *(unsigned int *)(v38 + v44) = v19; /*0x7c165c*/
  *(unsigned int *)(v38 + v44 + 4) = 0; /*0x7c1660*/
  v28 = (*((int (__cdecl **)(File *, int, unsigned int, int))&this->u32_44))(this, 2, 0, 12 * v19); /*0x7c1668*/
  v29 = v28; /*0x7c166b*/
  if ( v28 ) /*0x7c1672*/
  {
    (*((void (__cdecl **)(File *, int, int, int))&this->u32_44))(this, 4, v28, v27); /*0x7c167d*/
    this->u32_30 += v27; /*0x7c1697*/
    v30 = v37 * ((v45 + 1) & 0xFFFFFFFE); /*0x7c169a*/
    v31 = (int *)(v38 + v44 + 8); /*0x7c16a0*/
    *v31 = v29; /*0x7c16a9*/
    v32 = (*((int (__cdecl **)(File *, int, unsigned int, unsigned int))&this->u32_44))(this, 2, 0, v30); /*0x7c16ac*/
    v33 = v32; /*0x7c16af*/
    if ( v32 ) /*0x7c16b6*/
    {
      (*((void (__cdecl **)(File *, int, int, unsigned int))&this->u32_44))(this, 4, v32, v30); /*0x7c16c1*/
      this->u32_30 += v30; /*0x7c16cc*/
      v34 = v37; /*0x7c16cf*/
      if ( v37 > 0 ) /*0x7c16d5*/
      {
        v35 = 0; /*0x7c16d7*/
        do /*0x7c16f5*/
        {
          v35 += 12; /*0x7c16dc*/
          *(unsigned int *)(v35 + *v31 - 12) = v33; /*0x7c16df*/
          *(unsigned int *)(v35 + *v31 - 4) = -1; /*0x7c16e6*/
          v33 += v45; /*0x7c16f2*/
          --v34; /*0x7c16f4*/
        }
        while ( v34 ); /*0x7c16f5*/
      }
      goto LABEL_53; /*0x7c16f5*/
    }
  }
  return -8; /*0x7c12cd*/

}
}