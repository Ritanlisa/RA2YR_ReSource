// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"

// 0x431F10
namespace gamemd {
void File::IsReady(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  if ( this->__pad_029 ) /*0x431f10*/
    return 1; /*0x431f17*/
  else
    return FileClass::Open(0); /*0x431f1e*/
}
}
} // namespace gamemd

// 0x433990
namespace gamemd {
unsigned int * File::LoadFont()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void **v13; // edi
  void **v16; // ecx
  size_t v20; // edi
  void **v24; // [esp+30h] [ebp-44h]

  unsigned int v2 = 0; /*0x43399b*/
  _DWORD * v3 = 0; /*0x43399d*/
  _DWORD * v4 = __2_YAPAXI_Z(0x6Cu); /*0x43399f*/
  if ( v4 ) /*0x4339a9*/
  {
    _DWORD * v5 = CCFileClass::Construct(v4, this); /*0x4339b2*/
    _DWORD * v6 = v5; /*0x4339b7*/
    if ( v5 ) /*0x4339bb*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v5 + 20))(v5, 0) /*0x4339f0*/
        || !(*(int (__thiscall **)(_DWORD *, int))(*v6 + 28))(v6, 1)
        || (v3 = __2_YAPAXI_Z(0x24u)) == 0 )
      {
LABEL_35:
        (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1); /*0x433bee*/
        return v3; /*0x433bf4*/
      }
      memset(v3, 0, 0x24u); /*0x433a04*/
      void * v7 = __2_YAPAXI_Z(0x20000u); /*0x433a0b*/
      v3[6] = v7; /*0x433a12*/
      if ( v7 ) /*0x433a15*/
      {
        memset(v7, 0, 0x20000u); /*0x433a22*/
  _DWORD v25[7]; // [esp+34h] [ebp-40h] BYREF
        if ( (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*v6 + 36))(v6, v25, 28) == 28 ) /*0x433a35*/
        {
          if ( v25[0] == 1416523622 ) /*0x433a44*/
          {
            v3[2] = v25[3]; /*0x433a4f*/
            v3[3] = v25[4]; /*0x433a56*/
            v3[1] = v25[2]; /*0x433a5d*/
            *v3 = v25[1]; /*0x433a64*/
            v3[5] = v25[6]; /*0x433a6a*/
            int v8 = v3[6]; /*0x433a71*/
            v3[4] = v25[5]; /*0x433a74*/
            if ( (*(int (__thiscall **)(_DWORD *, int, int))(*v6 + 36))(v6, v8, 0x20000) == 0x20000 ) /*0x433a84*/
              goto LABEL_24; /*0x433a84*/
          }
          else if ( v25[0] == 1951297350 ) /*0x433a94*/
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v6 + 40))(v6, 0, 0); /*0x433aa0*/
  char v26[4]; // [esp+50h] [ebp-24h] BYREF
            if ( (*(int (__thiscall **)(_DWORD *, char *, int))(*v6 + 36))(v6, v26, 36) == 36 ) /*0x433ab4*/
            {
  int v28; // [esp+58h] [ebp-1Ch]
              int v9 = v28; /*0x433abe*/
  int v29; // [esp+5Ch] [ebp-18h]
              int v10 = v29; /*0x433ac2*/
              int v30 = v30; /*0x433ac6*/
  int v32; // [esp+68h] [ebp-Ch]
              int v11 = v32; /*0x433ac9*/
              v3[1] = v9; /*0x433acd*/
              v3[5] = v11; /*0x433ad0*/
  unsigned int v31; // [esp+64h] [ebp-10h]
              unsigned int v12 = v31; /*0x433ad3*/
              v3[2] = v10; /*0x433ad7*/
  int v27; // [esp+54h] [ebp-20h]
              *v3 = v27; /*0x433ae1*/
              v13 = (void **)malloc(12 * v12); /*0x433aec*/
              v24 = v13; /*0x433af3*/
              if ( v13 ) /*0x433af7*/
              {
  int v33; // [esp+6Ch] [ebp-8h]
                (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 40))(v6, v33, 0); /*0x433b07*/
                int v14 = (*(int (__thiscall **)(_DWORD *, void **, unsigned int))(*v6 + 36))(v6, v13, 12 * v31); /*0x433b1a*/
                unsigned int v15 = v31; /*0x433b1d*/
                if ( v14 == 12 * v31 ) /*0x433b29*/
                {
                  v3[4] = 0; /*0x433b31*/
                  if ( v15 ) /*0x433b34*/
                  {
                    v16 = v13 + 2; /*0x433b36*/
                    do /*0x433b67*/
                    {
                      int v17 = (int)*(v16 - 1); /*0x433b39*/
                      if ( v17 <= (int)*v16 ) /*0x433b42*/
                      {
                        LOWORD(v13) = *((_WORD *)v16 - 4); /*0x433b3c*/
                        char * v18 = (char *)v13 + 1; /*0x433b44*/
                        do /*0x433b5b*/
                        {
                          *(_WORD *)(v3[6] + 2 * v17++) = (_WORD)v18; /*0x433b4a*/
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
  int v34; // [esp+70h] [ebp-4h]
                  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 40))(v6, v34, 0); /*0x433b81*/
LABEL_24:
                  _WORD * v19 = (_WORD *)v3[6]; /*0x433b84*/
                  v20 = v3[5] * v3[4]; /*0x433b8a*/
                  int v21 = 0x10000; /*0x433b90*/
                  v3[8] = 0; /*0x433b95*/
                  do /*0x433ba4*/
                  {
                    if ( *v19 ) /*0x433b98*/
                      ++v3[8]; /*0x433b9d*/
                    ++v19; /*0x433ba0*/
                    --v21; /*0x433ba3*/
                  }
                  while ( v21 ); /*0x433ba4*/
                  void * v22 = __2_YAPAXI_Z(v20); /*0x433ba7*/
                  v3[7] = v22; /*0x433bb1*/
                  if ( v22 && (*(int (__thiscall **)(_DWORD *, void *, size_t))(*v6 + 36))(v6, v22, v20) == v20 ) /*0x433bc1*/
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
} // namespace gamemd

// 0x4CB920
namespace gamemd {
void File::Dispatch()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  u_short v2; // ax
  u_short v3; // cx
  u_short v4; // ax
  u_long v5; // eax

  v2 = ntohs(*(_WORD *)(this + 6)); /*0x4cb928*/
  v3 = this->q004; /*0x4cb92d*/
  *(_WORD *)(this + 6) = v2; /*0x4cb931*/
  v4 = ntohs(v3); /*0x4cb936*/
  this->q004 = v4; /*0x4cb93b*/
  v5 = v4 - 3; /*0x4cb944*/
  switch ( v5 ) /*0x4cb94c*/
  {
    case 0u: /*0x4cb94c*/
    case 1u: /*0x4cb94c*/
      LOWORD(v5) = ntohs(*this->q008); /*0x4cb95a*/
      *this->q008 = v5; /*0x4cb963*/
      break; /*0x4cb966*/
    case 2u: /*0x4cb94c*/
    case 3u: /*0x4cb94c*/
      v5 = ntohl(*this->q008); /*0x4cb96d*/
      *this->q008 = v5; /*0x4cb975*/
      break; /*0x4cb975*/
    default:
      return v5;
  }
  return v5; /*0x4cb962*/
}
}
} // namespace gamemd

// 0x5BD570
namespace gamemd {
unsigned int * File::LoadFileHVA(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  *(_BYTE *)this = 0; /*0x5bd575*/
  this->q004 = 0; /*0x5bd577*/
  this->q008 = 0; /*0x5bd57a*/
  *(this + 3) = 0; /*0x5bd57d*/
  if ( !File::ParseFileHVA((int)this, (int)aP1) ) /*0x5bd585*/
    *(_BYTE *)this = 1; /*0x5bd58e*/
  return this; /*0x5bd593*/
}
}
} // namespace gamemd

// 0x5BD5C0
namespace gamemd {
void File::ParseFileHVA(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  if ( *(_DWORD *)(this + 12) ) /*0x5bd5c9*/
    __3_YAXPAX_Z(*(void **)(this + 12)); /*0x5bd5d3*/
  int v3 = a2; /*0x5bd5db*/
  *(_DWORD *)(this + 12) = 0; /*0x5bd5e2*/
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 28))(a2, 1); /*0x5bd5eb*/
  if ( result ) /*0x5bd5f0*/
  {
  _BYTE v12[16]; // [esp+20h] [ebp-78h] BYREF
    (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 36))(a2, v12, 24); /*0x5bd607*/
    void * v5 = *(void **)(this + 12); /*0x5bd60a*/
  int v13; // [esp+30h] [ebp-68h]
    int v6 = v13; /*0x5bd611*/
  int v14; // [esp+34h] [ebp-64h]
    this->q004 = v14; /*0x5bd617*/
    this->q008 = v6; /*0x5bd61a*/
    if ( v5 ) /*0x5bd61d*/
      __3_YAXPAX_Z(v5); /*0x5bd620*/
    void * v7 = __2_YAPAXI_Z(48 * this->q004 * this->q008); /*0x5bd636*/
    if ( !v7 ) /*0x5bd640*/
      v7 = 0; /*0x5bd649*/
    *(_DWORD *)(this + 12) = v7; /*0x5bd64d*/
    if ( v7 ) /*0x5bd650*/
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 40))(a2, 16 * this->q004, 1); /*0x5bd675*/
      int v11 = 0; /*0x5bd67b*/
      if ( this->q008 ) /*0x5bd678*/
      {
  unsigned int v8; // ebp
        while ( 1 ) /*0x5bd686*/
        {
          v8 = 0; /*0x5bd686*/
          if ( this->q004 ) /*0x5bd683*/
            break; /*0x5bd683*/
LABEL_14:
          if ( (unsigned int)++v11 >= this->q008 ) /*0x5bd6e8*/
            goto LABEL_15; /*0x5bd6e8*/
        }
  _BYTE v15[48]; // [esp+38h] [ebp-60h] BYREF
        while ( (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v3 + 36))(v3, v15, 48) == 48 ) /*0x5bd69d*/
        {
          const void * v9 = (const void *)Matrix::Copy12Float(v15); /*0x5bd6a8*/
          void * v10 = (void *)(*(_DWORD *)(this + 12) + 48 * (v8 + v11 * this->q004)); /*0x5bd6c7*/
          ++v8; /*0x5bd6c9*/
          qmemcpy(v10, v9, 0x30u); /*0x5bd6ca*/
          v3 = a2; /*0x5bd6cf*/
          if ( v8 >= this->q004 ) /*0x5bd6d8*/
            goto LABEL_14; /*0x5bd6d8*/
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3); /*0x5bd704*/
        if ( *(_DWORD *)(this + 12) ) /*0x5bd707*/
          __3_YAXPAX_Z(*(void **)(this + 12)); /*0x5bd70f*/
        *(_DWORD *)(this + 12) = 0; /*0x5bd719*/
        return 0; /*0x5bd721*/
      }
      else
      {
LABEL_15:
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3); /*0x5bd6ea*/
        return 1; /*0x5bd6f4*/
      }
    }
    else
    {
      *(_DWORD *)(this + 12) = 0; /*0x5bd652*/
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x5bd659*/
      return 0; /*0x5bd65f*/
    }
  }
  return result; /*0x5bd5f2*/
}
}
} // namespace gamemd

// 0x625AF0
namespace gamemd {
void * File::LoadPaletteData(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  u_short v3; // cx
  u_short v4; // ax
  u_short v6; // ax
  ObjectClass *v9; // ebx
  size_t v11; // ebp
  u_short *result; // eax
  ObjectClass *aP1a; // [esp+14h] [ebp+4h]

  v3 = *(_WORD *)aP1->__pad_0; /*0x625b02*/
  *this = *(_WORD *)aP1->__pad_0; /*0x625b05*/
  *this = ntohs(v3); /*0x625b11*/
  v4 = *(_WORD *)&aP1->__pad_0[2]; /*0x625b17*/
  this->q004 = v4; /*0x625b1a*/
  ObjectClass *v5 = &aP1->__pad_0[4]; /*0x625b1f*/
  this->q004 = ntohs(v4); /*0x625b27*/
  v6 = *this; /*0x625b2d*/
  this->q004 = 0; /*0x625b30*/
  int v15 = v6 - 4; /*0x625b3c*/
  if ( v15 <= 0 ) /*0x625b40*/
    return this; /*0x625bf4*/
  while ( 1 ) /*0x625b50*/
  {
    int v7 = __2_YAPAXI_Z(0x10u); /*0x625b50*/
    int v8 = *(_DWORD *)v5; /*0x625b55*/
    v9 = (ObjectClass *)v7; /*0x625b57*/
    _DWORD * v10 = v5 + 8; /*0x625b5c*/
    *(_DWORD *)v7 = v8; /*0x625b5f*/
    *(_DWORD *)(v7 + 4) = *(v10 - 1); /*0x625b64*/
    v11 = ntohs(*(_WORD *)(v7 + 6)); /*0x625b78*/
    void * v12 = (void *)__2_YAPAXI_Z(v11); /*0x625b7f*/
    *(_DWORD *)&v9->__pad_0[8] = v12; /*0x625b8a*/
    qmemcpy(v12, v10, v11); /*0x625b90*/
    int v13 = -(ntohs(*(_WORD *)&v9->__pad_0[6]) & 3) & 3; /*0x625baf*/
    aP1a = (ObjectClass *)((char *)v10 + v13 + v11); /*0x625bbd*/
    v15 += -8 - v13 - v11; /*0x625bcc*/
    File::Dispatch((int)v9); /*0x625bd0*/
    result = this; /*0x625bd5*/
    *(_DWORD *)&v9->__pad_0[12] = this->q004; /*0x625bde*/
    this->q004 = v9; /*0x625be1*/
    if ( v15 <= 0 ) /*0x625be4*/
      break; /*0x625be4*/
    v5 = (char *)aP1a; /*0x625b4a*/
  }
  return result; /*0x625bec*/
}
}
} // namespace gamemd

// 0x625DB0
namespace gamemd {
void File::FindByPrefix(char * Str1, unsigned char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3 = this->q004; /*0x625db1*/
  if ( !v3 ) /*0x625db7*/
    return 0; /*0x625dd4*/
  while ( strncmp(Str1, (const char *)v3, 4u) ) /*0x625dcb*/
  {
    v3 = *(_DWORD *)(v3 + 12); /*0x625dcd*/
    if ( !v3 ) /*0x625dd2*/
      return 0; /*0x625dd2*/
  }
  *a3 = **(_BYTE **)(v3 + 8); /*0x625def*/
  return v3 != 0; /*0x625dd6*/
}
}
} // namespace gamemd

// 0x734990
namespace gamemd {
void File::ParseCSFString()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  size_t v2; // eax
  size_t v7; // eax
  wchar_t *v9; // ecx
  __int16 v10; // dx
  wchar_t *v12; // ecx
  size_t v14; // eax
  size_t v15; // eax
  size_t Size; // [esp+10h] [ebp-9Ch] BYREF
  _BYTE v24[12]; // [esp+80h] [ebp-2Ch] BYREF
  int v25; // [esp+8Ch] [ebp-20h]
  char Buffer[24]; // [esp+94h] [ebp-18h] BYREF

  int v23[22]; // [esp+28h] [ebp-84h] BYREF
  CCFileClass::Construct(v23, this); /*0x73499f*/
  int v19 = 0; /*0x7349ab*/
  if ( CCFileClass::Open(v23, 0) && FileClass::Load(v23, 1) && CCFileClass::Read(v23, Buffer, 24) == 24 ) /*0x7349e5*/
  {
  int v18; // [esp+14h] [ebp-98h] BYREF
    if ( CCFileClass::Read(v23, &v18, 4) != 4 ) /*0x7349fe*/
    {
LABEL_42:
      v23[0] = (int)&vt_CCFileClass; /*0x734cad*/
      v25 = 0; /*0x734cbc*/
      Vector::Clear((int)v24); /*0x734cc3*/
      v23[0] = (int)&off_7E1668; /*0x734ccc*/
      BufferIOFileClass::Dtor(v23); /*0x734cd4*/
      return 1; /*0x734ce8*/
    }
    int v1 = 0; /*0x734a04*/
    int v21 = 0; /*0x734a06*/
    while ( v18 == 1279413280 ) /*0x734a12*/
    {
  int v20; // [esp+1Ch] [ebp-90h] BYREF
      CCFileClass::Read(v23, &v20, 4); /*0x734a23*/
      CCFileClass::Read(v23, &Size, 4); /*0x734a33*/
      v2 = Size; /*0x734a38*/
      if ( Size ) /*0x734a3e*/
      {
        CCFileClass::Read(v23, unk_B1BF38, Size); /*0x734a4a*/
        v2 = Size; /*0x734a4f*/
      }
      char * v3 = (char *)dword_B1CF74; /*0x734a53*/
      unk_B1BF38[v2] = 0; /*0x734a59*/
      strcpy(&v3[v1], unk_B1BF38); /*0x734a7b*/
      if ( (int)Size > unk_B1CF58 ) /*0x734a90*/
        unk_B1CF58 = Size; /*0x734a92*/
      int v4 = v19; /*0x734a9d*/
      int v22 = 0; /*0x734aa1*/
      *(_DWORD *)((char *)dword_B1CF74 + v1 + 36) = v19; /*0x734aa5*/
      *(_DWORD *)((char *)dword_B1CF74 + v1 + 32) = v20; /*0x734ab3*/
      int v5 = v20; /*0x734ab7*/
      if ( v20 > 0 ) /*0x734abd*/
      {
        int v6 = 4 * v4; /*0x734ac3*/
        do /*0x734c79*/
        {
          CCFileClass::Read(v23, &v18, 4); /*0x734ad5*/
          if ( v18 != 1398034976 && v18 != 1398035031 ) /*0x734aea*/
            goto LABEL_43; /*0x734aea*/
          CCFileClass::Read(v23, &Size, 4); /*0x734afb*/
          v7 = Size; /*0x734b00*/
          if ( Size ) /*0x734b06*/
          {
            CCFileClass::Read(v23, DataGlobal_B17F24, 2 * Size); /*0x734b15*/
            v7 = Size; /*0x734b1a*/
          }
          DataGlobal_B17F24[v7] = 0; /*0x734b1e*/
          int v8 = *(_DWORD *)DataGlobal_B17F24; /*0x734b26*/
          v9 = DataGlobal_B17F24; /*0x734b2e*/
          if ( DataGlobal_B17F24[0] ) /*0x734b33*/
          {
            do /*0x734b44*/
            {
              v8 = ~v8; /*0x734b35*/
              *v9 = v8; /*0x734b37*/
              LOWORD(v8) = v9[1]; /*0x734b3a*/
              ++v9; /*0x734b3e*/
            }
            while ( (_WORD)v8 ); /*0x734b44*/
            LOWORD(v8) = DataGlobal_B17F24[0]; /*0x734b46*/
          }
          v10 = 0; /*0x734b4b*/
          int v11 = 1; /*0x734b50*/
          v12 = DataGlobal_B17F24; /*0x734b55*/
          _WORD * v13 = DataGlobal_B17F24 + 2; /*0x734b5a*/
          if ( (_WORD)v8 ) /*0x734b5f*/
          {
            while ( 1 ) /*0x734b61*/
            {
              if ( (_WORD)v8 == 32 ) /*0x734b65*/
              {
                if ( v10 == 32 || v11 ) /*0x734b6e*/
                  goto LABEL_31; /*0x734b6e*/
              }
              else if ( (_WORD)v8 == 10 || (_WORD)v8 == 9 ) /*0x734b7c*/
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
              if ( !(_WORD)v8 ) /*0x734ba9*/
              {
                if ( v10 == 32 ) /*0x734baf*/
                  --v12; /*0x734bb1*/
                break; /*0x734bb1*/
              }
            }
          }
          *v12 = 0; /*0x734bb4*/
          v14 = wcslen(DataGlobal_B17F24); /*0x734bbc*/
          *(_DWORD *)((char *)unk_B1CF78 + v6) = __2_YAPAXI_Z(2 * v14 + 2); /*0x734bd6*/
          wcscpy(*(wchar_t **)((char *)unk_B1CF78 + v6), DataGlobal_B17F24); /*0x734be3*/
          if ( v18 == 1398035031 ) /*0x734bf4*/
          {
            CCFileClass::Read(v23, &Size, 4); /*0x734c01*/
            v15 = Size; /*0x734c06*/
            if ( Size ) /*0x734c0c*/
            {
              CCFileClass::Read(v23, unk_B1BF38, Size); /*0x734c18*/
              v15 = Size; /*0x734c1d*/
            }
            unk_B1BF38[v15] = 0; /*0x734c23*/
            if ( v15 ) /*0x734c29*/
            {
              *(_DWORD *)((char *)unk_B1CF7C + v6) = __2_YAPAXI_Z(v15 + 1); /*0x734c43*/
              strcpy(*(char **)((char *)unk_B1CF7C + v6), unk_B1BF38); /*0x734c5e*/
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
      if ( CCFileClass::Read(v23, &v18, 4) != 4 ) /*0x734ca7*/
        goto LABEL_42; /*0x734ca7*/
    }
  }
LABEL_43:
  v23[0] = (int)&vt_CCFileClass; /*0x734ce9*/
  v25 = 0; /*0x734cf8*/
  Vector::Clear((int)v24); /*0x734cff*/
  v23[0] = (int)&off_7E1668; /*0x734d08*/
  BufferIOFileClass::Dtor(v23); /*0x734d10*/
  return 0; /*0x734cde*/
}
}
} // namespace gamemd

// 0x755CD0
namespace gamemd {
unsigned int * File::LoadFileVXL(ObjectClass * aP1, SomeVoxelCache * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->__pad_0[0] = 0; /*0x755cd9*/
  *(_DWORD *)&this->__pad_0[4] = 0; /*0x755cdb*/
  *(_DWORD *)&this->__pad_0[8] = 0; /*0x755cde*/
  *(_DWORD *)&this->__pad_0[12] = 0; /*0x755ce1*/
  this->uniqueId = 0; /*0x755ce4*/
  this->abstractFlags = 0; /*0x755ce7*/
  this->nextArrayIndex = 0; /*0x755cea*/
  if ( !Voxel::SortDepth(this, aP1, (int)aP2) ) /*0x755cf5*/
    this->__pad_0[0] = 1; /*0x755cfe*/
  return this->__pad_0; /*0x755d03*/
}
}
} // namespace gamemd

// 0x76AC90
namespace gamemd {
void * File::LoadWDT(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  u_short *v3; // eax
  u_short *PaletteData; // ebp
  int eax12; // eax
  IUnknown *v7; // ecx
  int eax12a; // eax
  IUnknown *v9; // edx
  CCINIClass *v10; // edi
  IUnknown *v12; // [esp+10h] [ebp-1Ch] BYREF
  IUnknown *v13; // [esp+14h] [ebp-18h] BYREF
  IUnknown *Size; // [esp+18h] [ebp-14h] BYREF
  IUnknown *v15; // [esp+1Ch] [ebp-10h] BYREF
  size_t v17; // [esp+20h] [ebp-Ch] BYREF
  IUnknown *Block; // [esp+24h] [ebp-8h]
  WDTState *aP1a; // [esp+30h] [ebp+4h]

  this->q004 = 0; /*0x76ac9b*/
  *((_DWORD *)this + 12) = 0; /*0x76ac9e*/
  *((_DWORD *)this + 13) = 0; /*0x76aca1*/
  *(this + 56) = 1; /*0x76aca4*/
  *(this + 57) = 0; /*0x76aca8*/
  *((_DWORD *)this + 11) = &vt_DynamicVectorClass_rc_ptr_WDTTerritory; /*0x76acab*/
  this->q004 = 10; /*0x76acb2*/
  *((_DWORD *)this + 15) = 0; /*0x76acb9*/
  *(_DWORD *)this = &vt_WDTState; /*0x76acbe*/
  v3 = (u_short *)__2_YAPAXI_Z(0xCu); /*0x76acc4*/
  if ( v3 ) /*0x76acce*/
    PaletteData = File::LoadPaletteData(v3, aP1); /*0x76acdc*/
  else
    PaletteData = 0; /*0x76ace0*/
  char * v5 = this + 28; /*0x76ace6*/
  v12 = 0; /*0x76acf2*/
  v13 = 0; /*0x76acf6*/
  Size = 0; /*0x76acfa*/
  v15 = 0; /*0x76acfe*/
  v17 = 0; /*0x76ad02*/
  int v19 = 0; /*0x76ad06*/
  this->__pad_002 = 0; /*0x76ad0a*/
  *((_DWORD *)this + 3) = 0; /*0x76ad0d*/
  this->q004 = 0; /*0x76ad10*/
  *(this + 20) = 0; /*0x76ad13*/
  *((_DWORD *)this + 6) = 0; /*0x76ad16*/
  *((_DWORD *)this + 7) = 0; /*0x76ad19*/
  this->q008 = 0; /*0x76ad1b*/
  *((_DWORD *)this + 9) = 0; /*0x76ad1e*/
  *((_DWORD *)this + 10) = 0; /*0x76ad21*/
  *((_DWORD *)this + 17) = 0; /*0x76ad24*/
  if ( HashTable::FindChunk(PaletteData, aNack, 0, (CCINIClass *)&v19) ) /*0x76ad27*/
  {
    if ( PaletteData ) /*0x76ad32*/
    {
LABEL_25:
      ResultNode::CleanupList(PaletteData); /*0x76afa4*/
      __3_YAXPAX_Z(PaletteData); /*0x76afac*/
    }
  }
  else
  {
    if ( HashTable::FindString(PaletteData, aTotk, (IUnknown *)(this + 28)) ) /*0x76ad45*/
    {
      int v6 = *(_DWORD *)v5; /*0x76ad4e*/
      *(this + 72) = 1; /*0x76ad50*/
      *(_DWORD *)v5 = ++v6; /*0x76ad55*/
      *((_DWORD *)this + 9) = v6; /*0x76ad59*/
    }
    else
    {
      *(this + 72) = 0; /*0x76ad69*/
      HashTable::FindString(PaletteData, aCrtk, (IUnknown *)(this + 36)); /*0x76ad6c*/
      ++*((_DWORD *)this + 9); /*0x76ad7d*/
      HashTable::FindString(PaletteData, aCyln, (IUnknown *)(this + 28)); /*0x76ad80*/
      ++*(_DWORD *)v5; /*0x76ad85*/
    }
    HashTable::FindChunk(PaletteData, aWurl, 0, (CCINIClass *)&v17); /*0x76ad94*/
    HashTable::FindChunk(PaletteData, aSdsc, 0, (CCINIClass *)&Size); /*0x76ada6*/
    HashTable::FindChunk(PaletteData, aLdsc, 0, (CCINIClass *)&v15); /*0x76adb8*/
    if ( !*(this + 72) ) /*0x76adbd*/
      HashTable::FindChunk(PaletteData, aMpvc, 0, (CCINIClass *)&v12); /*0x76adcf*/
    HashTable::FindChunk(PaletteData, aHsvc, 0, (CCINIClass *)&v13); /*0x76ade1*/
    this->__pad_002 = __2_YAPAXI_Z((size_t)Size); /*0x76adf0*/
    eax12 = __2_YAPAXI_Z((size_t)v15); /*0x76adf8*/
    v7 = (IUnknown *)v17; /*0x76adfd*/
    *((_DWORD *)this + 3) = eax12; /*0x76ae01*/
    eax12a = __2_YAPAXI_Z((size_t)v7); /*0x76ae05*/
    v9 = v13; /*0x76ae0a*/
    this->q004 = eax12a; /*0x76ae0e*/
    Block = (IUnknown *)__2_YAPAXI_Z((size_t)v9); /*0x76ae17*/
    aP1a = 0; /*0x76ae23*/
    if ( !*(this + 72) ) /*0x76ae1b*/
    {
      aP1a = (WDTState *)__2_YAPAXI_Z((size_t)v12); /*0x76ae40*/
      memset(aP1a, 0, (unsigned int)v12); /*0x76ae47*/
    }
    memset(this->__pad_002, 0, (unsigned int)Size); /*0x76ae5e*/
    memset(*((void **)this + 3), 0, (unsigned int)v15); /*0x76ae75*/
    memset(this->q004, 0, v17); /*0x76ae8c*/
    memset(Block, 0, (unsigned int)v13); /*0x76aea4*/
    File::FindByPrefix(PaletteData, aCmid, this + 20); /*0x76aeb8*/
    HashTable::FindString(PaletteData, aCyid, (IUnknown *)(this + 24)); /*0x76aec8*/
    if ( *(this + 72) ) /*0x76aecd*/
      *((_DWORD *)this + 10) = 0; /*0x76aed2*/
    else
      HashTable::FindString(PaletteData, aTicc, (IUnknown *)(this + 40)); /*0x76aee2*/
    HashTable::FindChunk(PaletteData, aSdsc, this->__pad_002, (CCINIClass *)&Size); /*0x76aef7*/
    HashTable::FindChunk(PaletteData, aLdsc, *((void **)this + 3), (CCINIClass *)&v15); /*0x76af0c*/
    HashTable::FindChunk(PaletteData, aWurl, this->q004, (CCINIClass *)&v17); /*0x76af21*/
    if ( !*(this + 72) ) /*0x76af26*/
      HashTable::FindChunk(PaletteData, aMpvc, aP1a, (CCINIClass *)&v12); /*0x76af3c*/
    v10 = (CCINIClass *)Block; /*0x76af41*/
    HashTable::FindChunk(PaletteData, aHsvc, Block, (CCINIClass *)&v13); /*0x76af52*/
    if ( *(this + 72) ) /*0x76af57*/
      this->q008 = 30; /*0x76af6f*/
    else
      ParseWDTTerritories((int)this, aP1a, (int)v12); /*0x76af68*/
    File::LoadWDTDecompress((size_t *)this, v10, (int)v13); /*0x76af7e*/
    __3_YAXPAX_Z(v10); /*0x76af84*/
    if ( !*(this + 72) ) /*0x76af89*/
      __3_YAXPAX_Z(aP1a); /*0x76af98*/
    if ( PaletteData ) /*0x76afa2*/
      goto LABEL_25; /*0x76afa2*/
  }
  return (WDTState *)this; /*0x76afb6*/
}
}
} // namespace gamemd

// 0x76B0A0
namespace gamemd {
void File::LoadWDTDecompress(CCINIClass * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  size_t i; // edi
  unsigned __int8 v13; // dl
  int v4 = *(this + 9); /*0x76b0a7*/
  if ( 4 * a3 < v4 * this->q008 ) /*0x76b0b5*/
    return 0; /*0x76b0ba*/
  *(this + 17) = __2_YAPAXI_Z(4 * v4); /*0x76b0c7*/
  for ( i = 0; i < *(this + 9); ++i ) /*0x76b0ca*/
    *(_DWORD *)(*(this + 17) + 4 * i) = __2_YAPAXI_Z(this->q008); /*0x76b0e5*/
  int v7 = 0; /*0x76b0f3*/
  int v8 = 0; /*0x76b0f5*/
  int v9 = 0; /*0x76b0f7*/
  int v16 = 0; /*0x76b0fb*/
  if ( *(this + 9) ) /*0x76b0f0*/
  {
  int v15; // edx
  int v10; // eax
    while ( 1 ) /*0x76b10a*/
    {
      v10 = 0; /*0x76b10a*/
      if ( this->q008 ) /*0x76b107*/
        break; /*0x76b107*/
LABEL_18:
      if ( v8 ) /*0x76b15e*/
      {
        v8 = 0; /*0x76b160*/
        ++v7; /*0x76b162*/
        v16 = 0; /*0x76b163*/
      }
      if ( ++v9 >= *(this + 9) ) /*0x76b16d*/
        return 1; /*0x76b16d*/
    }
    while ( 1 ) /*0x76b110*/
    {
  char v14; // dl
      if ( !v8 ) /*0x76b113*/
      {
        v15 = (unsigned __int8)aP1->__pad_0[v7]; /*0x76b130*/
        goto LABEL_14; /*0x76b130*/
      }
      int v11 = v8 - 1; /*0x76b115*/
      if ( !v11 ) /*0x76b116*/
        break; /*0x76b116*/
      bool v12 = v11 == 1; /*0x76b118*/
      v13 = aP1->__pad_0[v7]; /*0x76b119*/
      if ( v12 ) /*0x76b11c*/
      {
        LOBYTE(v15) = v13 >> 4; /*0x76b123*/
LABEL_14:
        v14 = v15 & 3; /*0x76b133*/
        goto LABEL_15; /*0x76b133*/
      }
      v14 = v13 >> 6; /*0x76b11e*/
LABEL_15:
      *(_BYTE *)(*(_DWORD *)(*(this + 17) + 4 * v9) + v10) = v14; /*0x76b136*/
      v8 = ++v16; /*0x76b143*/
      if ( v16 == 4 ) /*0x76b14b*/
      {
        v8 = 0; /*0x76b14d*/
        ++v7; /*0x76b14f*/
        v16 = 0; /*0x76b150*/
      }
      if ( ++v10 >= this->q008 ) /*0x76b15a*/
        goto LABEL_18; /*0x76b15a*/
    }
    LOBYTE(v15) = (unsigned __int8)aP1->__pad_0[v7] >> 2; /*0x76b12b*/
    goto LABEL_14; /*0x76b12e*/
  }
  return 1; /*0x76b0b9*/
}
}
} // namespace gamemd

// 0x7C12B0
namespace gamemd {
void File::ParseAudioFileRIFF()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  signed int v19; // ecx
  _WORD *v20; // ebp
  int v21; // edi
  int v22; // eax
  unsigned int *v23; // ebx
  unsigned int v24; // ecx
  int v25; // edx
  int v26; // eax
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
  int v39; // [esp+18h] [ebp-38h]
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
  if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v51, 8) ) /*0x7c12c3*/
    return -2; /*0x7c12d9*/
  if ( v51 != 1212368461 ) /*0x7c12e2*/
    return -4; /*0x7c12f0*/
  int * v3 = (int *)(this + 1824); /*0x7c12f5*/
  unsigned int v4 = ((((v52 << 16) | v52 & 0xFF00) << 8) | ((HIWORD(v52) | v52 & 0xFF0000) >> 8)) + 1; /*0x7c131e*/
  LOBYTE(v4) = (HIBYTE(v52) + 1) & 0xFE; /*0x7c131f*/
  if ( (*(int (__cdecl **)(int, int, int, unsigned int))(this + 64))(this, 5, this + 1824, v4) ) /*0x7c1326*/
    return -4; /*0x7c133c*/
  int v5 = *v3; /*0x7c133d*/
  if ( *v3 ) /*0x7c133d*/
  {
    int v6 = 24 * v5; /*0x7c134c*/
    int v7 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, 24 * v5); /*0x7c1354*/
    *(_DWORD *)(this + 1840) = v7; /*0x7c135c*/
    if ( !v7 ) /*0x7c1362*/
      return -8; /*0x7c1370*/
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v7, v6); /*0x7c1376*/
    *(_DWORD *)(this + 48) += v6; /*0x7c1388*/
    if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v51, 8) ) /*0x7c138b*/
      return -2; /*0x7c13a1*/
    if ( v51 != 1145259597 ) /*0x7c13aa*/
      return -4; /*0x7c13b8*/
    unsigned int v8 = ((((v52 << 16) | v52 & 0xFF00) << 8) | ((HIWORD(v52) | v52 & 0xFF0000) >> 8)) + 1; /*0x7c13e0*/
    LOBYTE(v8) = (HIBYTE(v52) + 1) & 0xFE; /*0x7c13e1*/
    if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 64))(this, 5, *(_DWORD *)(this + 1840), v8) ) /*0x7c13ee*/
      return -4; /*0x7c1404*/
  }
  int v9 = *(_DWORD *)(this + 1828); /*0x7c1405*/
  if ( v9 ) /*0x7c140d*/
  {
    int v10 = 16 * v9; /*0x7c1413*/
    int v11 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, v10); /*0x7c141b*/
    *(_DWORD *)(this + 1844) = v11; /*0x7c1423*/
    if ( !v11 ) /*0x7c1429*/
      return -8; /*0x7c1437*/
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v11, v10); /*0x7c143d*/
    *(_DWORD *)(this + 48) += v10; /*0x7c144f*/
    if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v51, 8) ) /*0x7c1452*/
      return -2; /*0x7c1468*/
    if ( v51 != 1413695053 ) /*0x7c1471*/
      return -4; /*0x7c147f*/
    unsigned int v12 = ((((v52 << 16) | v52 & 0xFF00) << 8) | ((HIWORD(v52) | v52 & 0xFF0000) >> 8)) + 1; /*0x7c14a7*/
    LOBYTE(v12) = (HIBYTE(v52) + 1) & 0xFE; /*0x7c14a8*/
    if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 64))(this, 5, *(_DWORD *)(this + 1844), v12) ) /*0x7c14b5*/
      return -4; /*0x7c14cb*/
  }
  unsigned int v13 = *(_DWORD *)(this + 1828); /*0x7c14cc*/
  v50 = v13; /*0x7c14d4*/
  if ( !v13 ) /*0x7c14d8*/
    return -1; /*0x7c1728*/
  int v14 = (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 68))(this, 2, 0, 12 * v13); /*0x7c14e9*/
  *(_DWORD *)(this + 1848) = v14; /*0x7c14f1*/
  if ( !v14 ) /*0x7c14f7*/
    return -8; /*0x7c14f7*/
  (*(void (__cdecl **)(int, int, int, unsigned int))(this + 68))(this, 4, v14, 12 * v13); /*0x7c150b*/
  *(_DWORD *)(this + 48) += 12 * v13; /*0x7c1518*/
  v46 = 0; /*0x7c151b*/
  int v15 = 0; /*0x7c1525*/
  v38 = 0; /*0x7c1527*/
  v40 = 0; /*0x7c152b*/
  while ( 2 ) /*0x7c152f*/
  {
    int v16 = *(_DWORD *)(this + 1844); /*0x7c152f*/
    v44 = *(_DWORD *)(this + 1848); /*0x7c153b*/
    unsigned int v17 = *(_DWORD *)(v15 + v16 + 4); /*0x7c153f*/
    v45 = *(_DWORD *)(v15 + v16 + 8); /*0x7c1549*/
    v48 = v17; /*0x7c154d*/
    if ( !v17 ) /*0x7c1551*/
      goto LABEL_53; /*0x7c1551*/
    v39 = 0; /*0x7c156a*/
    unsigned int v18 = *(unsigned __int16 *)(this + 1812); /*0x7c156e*/
    v42 = *(_DWORD *)(this + 1824); /*0x7c1575*/
    v49 = (unsigned __int16)v18; /*0x7c1579*/
    v43 = 0; /*0x7c157d*/
    v19 = (*(_DWORD *)(this + 136) - 1) / v17 + 1; /*0x7c1589*/
    v37 = v19; /*0x7c158c*/
    if ( !(_WORD)v18 ) /*0x7c1590*/
      goto LABEL_47; /*0x7c1590*/
    v20 = (_WORD *)(*(_DWORD *)(this + 1820) + 2); /*0x7c1596*/
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
    v22 = *(_DWORD *)(v15 + *(_DWORD *)(this + 1844)); /*0x7c15b2*/
    v23 = *(unsigned int **)(this + 1840); /*0x7c15b5*/
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
          v39 = v26 - v24; /*0x7c15ea*/
        }
      }
      v23 += 6; /*0x7c15f7*/
      ++v41; /*0x7c15fc*/
    }
    while ( v41 < v42 ); /*0x7c1600*/
    if ( v21 <= 0 || v21 + v39 + 1 >= v48 ) /*0x7c1614*/
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
  *(_DWORD *)(v38 + v44) = v19; /*0x7c165c*/
  *(_DWORD *)(v38 + v44 + 4) = 0; /*0x7c1660*/
  v28 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, 12 * v19); /*0x7c1668*/
  v29 = v28; /*0x7c166b*/
  if ( v28 ) /*0x7c1672*/
  {
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v28, v27); /*0x7c167d*/
    *(_DWORD *)(this + 48) += v27; /*0x7c1697*/
    v30 = v37 * ((v45 + 1) & 0xFFFFFFFE); /*0x7c169a*/
    v31 = (int *)(v38 + v44 + 8); /*0x7c16a0*/
    *v31 = v29; /*0x7c16a9*/
    v32 = (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 68))(this, 2, 0, v30); /*0x7c16ac*/
    v33 = v32; /*0x7c16af*/
    if ( v32 ) /*0x7c16b6*/
    {
      (*(void (__cdecl **)(int, int, int, unsigned int))(this + 68))(this, 4, v32, v30); /*0x7c16c1*/
      *(_DWORD *)(this + 48) += v30; /*0x7c16cc*/
      v34 = v37; /*0x7c16cf*/
      if ( v37 > 0 ) /*0x7c16d5*/
      {
        v35 = 0; /*0x7c16d7*/
        do /*0x7c16f5*/
        {
          v35 += 12; /*0x7c16dc*/
          *(_DWORD *)(v35 + *v31 - 12) = v33; /*0x7c16df*/
          *(_DWORD *)(v35 + *v31 - 4) = -1; /*0x7c16e6*/
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
} // namespace gamemd
