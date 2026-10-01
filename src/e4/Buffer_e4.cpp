// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/BufferIOFile_e4.hpp"

// 0x7BCB50
namespace gamemd {
void * Buffer::FillCircularBufferScroll2(int a2, MouseClass * aP2, unsigned short a4)
{

  signed int v5; // ebx
  char *result; // eax
  int v8; // edi
  unsigned int Buffer_field_18; // edx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // edi
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int Buffer_field_10; // ecx
  int v25; // ebx
  int v26; // edx
  MouseClass * v27;
  unsigned int v28; // edi
  unsigned int v29; // edx
  unsigned int v30; // ebx
  char *v31; // edx
  int v32; // eax
  uint16_t *v33; // ecx
  unsigned int v34; // ebx
  int v35; // ecx
  int64_t v36; // rax
  int v37; // edx
  int v38; // ebx
  signed int v39; // eax
  uint16_t *v40; // ebx
  int v41; // edx
  unsigned int v42; // esi
  bool v43; // zf
  int v44; // eax
  int64_t v45; // rax
  uint16_t *v46; // edx
  int v47; // ebx
  uint16_t *v48; // eax
  unsigned int v49; // esi
  int v50; // ecx
  int Buffer_field_14; // ecx
  int v52; // [esp+10h] [ebp-14h]
  int v53; // [esp+14h] [ebp-10h] BYREF
  int v54; // [esp+18h] [ebp-Ch]
  int v55; // [esp+1Ch] [ebp-8h]
  int v56; // [esp+20h] [ebp-4h]
  int v57; // [esp+2Ch] [ebp+8h]
  MouseClass * v58;

  v5 = *((unsigned int *)this + 10); /*0x7bcb60*/
  v52 = this->Buffer_field_10 / 2 % v5; /*0x7bcb72*/
  if ( (int)abs32(a2) > v5 || (result = (char *)abs32(aP2), (int)result > *((unsigned int *)this + 11)) ) /*0x7bcb8e*/
  {
    v50 = *((unsigned int *)this + 11); /*0x7bcf06*/
    v53 = 0; /*0x7bcf0b*/
    v54 = 0; /*0x7bcf0f*/
    v56 = v50; /*0x7bcf17*/
    Buffer_field_14 = this->Buffer_field_14; /*0x7bcf1b*/
    v55 = v5; /*0x7bcf24*/
    result = (char *)(*(int (**)(int, int *, unsigned int))(*(unsigned int *)Buffer_field_14 + 20))( /*0x7bcf2f*/
                       Buffer_field_14,
                       &v53,
                       a4);
    this->Buffer_field_24 = 0x8000; /*0x7bcf32*/
    return result; /*0x7bcf32*/
  }
  v8 = a2 + this->Buffer_field_10 / 2 % v5; /*0x7bcb98*/
  if ( a2 ) /*0x7bcb9c*/
  {
    Buffer_field_18 = this->Buffer_field_18; /*0x7bcba5*/
    v10 = this->Buffer_field_10 + 2 * a2; /*0x7bcba8*/
    this->Buffer_field_10 = v10; /*0x7bcbab*/
    v11 = Buffer_field_18 + v10; /*0x7bcbae*/
    if ( v11 < Buffer_field_18 ) /*0x7bcbb2*/
      v11 += this->Buffer_field_20; /*0x7bcbb4*/
    if ( v11 >= this->Buffer_field_1C ) /*0x7bcbba*/
      v11 -= this->Buffer_field_20; /*0x7bcbbc*/
    this->Buffer_field_10 = v11 - this->Buffer_field_18; /*0x7bcbc4*/
    if ( a2 >= 0 ) /*0x7bcbc7*/
    {
      v53 = v52; /*0x7bcc6e*/
      if ( v8 < v5 ) /*0x7bcc64*/
      {
        v54 = 0; /*0x7bcccf*/
        v23 = *((unsigned int *)this + 11); /*0x7bccd3*/
        v55 = a2; /*0x7bccd6*/
        v22 = this->Buffer_field_14; /*0x7bccda*/
        v56 = v23; /*0x7bcce3*/
      }
      else
      {
        v18 = *((unsigned int *)this + 11); /*0x7bcc72*/
        v55 = v5 - v52; /*0x7bcc75*/
        v54 = 0; /*0x7bcc79*/
        v19 = this->Buffer_field_14; /*0x7bcc7d*/
        v56 = v18; /*0x7bcc82*/
        (*(void (**)(int, int *, unsigned int))(*(unsigned int *)v19 + 20))(v19, &v53, a4); /*0x7bcc94*/
        v20 = v8 - *((unsigned int *)this + 10); /*0x7bcc9e*/
        v21 = *((unsigned int *)this + 11); /*0x7bcca0*/
        v54 = 0; /*0x7bcca3*/
        v22 = this->Buffer_field_14; /*0x7bcca7*/
        v53 = 0; /*0x7bccaa*/
        v55 = v20; /*0x7bccae*/
        v56 = v21; /*0x7bccb2*/
      }
      result = (char *)(*(int (**)(int, int *, unsigned int))(*(unsigned int *)v22 + 20))(v22, &v53, a4); /*0x7bccbe*/
    }
    else if ( v8 >= 0 ) /*0x7bcbcf*/
    {
      v53 = v8; /*0x7bcc33*/
      v54 = 0; /*0x7bcc37*/
      v56 = *((unsigned int *)this + 11); /*0x7bcc3e*/
      v55 = -a2; /*0x7bcc46*/
      result = (char *)(*(int (**)(int, int *, unsigned int))(*(unsigned int *)this->Buffer_field_14 + 20))( /*0x7bcc5a*/
                         this->Buffer_field_14,
                         &v53,
                         a4);
    }
    else
    {
      v53 = 0; /*0x7bcbd5*/
      v55 = v52; /*0x7bcbdd*/
      v12 = *((unsigned int *)this + 11); /*0x7bcbe1*/
      v54 = 0; /*0x7bcbe4*/
      v13 = this->Buffer_field_14; /*0x7bcbe8*/
      v56 = v12; /*0x7bcbed*/
      (*(void (**)(int, int *, unsigned int))(*(unsigned int *)v13 + 20))(v13, &v53, a4); /*0x7bcbff*/
      v14 = *((unsigned int *)this + 10); /*0x7bcc02*/
      v15 = *((unsigned int *)this + 11); /*0x7bcc05*/
      v16 = v14 + v8; /*0x7bcc08*/
      v54 = 0; /*0x7bcc0e*/
      v17 = this->Buffer_field_14; /*0x7bcc12*/
      v55 = v14 - v16; /*0x7bcc15*/
      v53 = v16; /*0x7bcc19*/
      v56 = v15; /*0x7bcc1d*/
      result = (char *)(*(int (**)(int, int *, unsigned int))(*(unsigned int *)v17 + 20))(v17, &v53, a4); /*0x7bcc29*/
    }
  }
  if ( aP2 ) /*0x7bccf8*/
  {
    Buffer_field_10 = (int)(this->Buffer_field_10);
    v25 = (int)(*((unsigned int *)this + 10));
    this->Buffer_field_24 -= aP2; /*0x7bcd16*/
    v26 = Buffer_field_10 + 2 * aP2 * v25; /*0x7bcd19*/
    this->Buffer_field_10 = v26; /*0x7bcd1c*/
    v27 = aP2 + Buffer_field_10 / 2 / v25; /*0x7bcd1f*/
    v28 = this->Buffer_field_18; /*0x7bcd21*/
    v29 = v28 + v26; /*0x7bcd24*/
    v58 = v27; /*0x7bcd26*/
    if ( v29 < v28 ) /*0x7bcd2c*/
      v29 += this->Buffer_field_20; /*0x7bcd2e*/
    if ( v29 >= this->Buffer_field_1C ) /*0x7bcd34*/
      v29 -= this->Buffer_field_20; /*0x7bcd36*/
    v30 = v29 - v28; /*0x7bcd3f*/
    this->Buffer_field_10 = v29 - v28; /*0x7bcd43*/
    if ( aP2 >= 0 ) /*0x7bcd46*/
    {
      v44 = *((unsigned int *)this + 11); /*0x7bce1d*/
      if ( v58 >= (gamemd::MouseClass *)(v44) ) /*0x7bce26*/
      {
        v45 = 2 * *((unsigned int *)this + 10) * v44 - Buffer_field_10; /*0x7bce34*/
        LODWORD(v45) = v45 - HIDWORD(v45); /*0x7bce35*/
        v46 = (uint16_t *)(v28 + Buffer_field_10); /*0x7bce37*/
        v47 = (int)v45 >> 1; /*0x7bce3c*/
        if ( (((unsigned char)v28 + (unsigned char)Buffer_field_10) & 2) != 0 && v47 ) /*0x7bce45*/
        {
          *v46++ = a4; /*0x7bce47*/
          --v47; /*0x7bce4d*/
        }
        v48 = 0; /*0x7bce50*/
        if ( v47 >> 1 ) /*0x7bce55*/
        {
          memset32(v46, 65537 * a4, v47 >> 1); /*0x7bce70*/
          v48 = &v46[2 * (v47 >> 1)]; /*0x7bce76*/
        }
        if ( (v47 & 1) != 0 && v48 ) /*0x7bce80*/
          *v48 = a4; /*0x7bce82*/
        v37 = this->Buffer_field_18; /*0x7bce8b*/
        v38 = this->Buffer_field_10 / 2; /*0x7bce90*/
        if ( (v37 & 2) != 0 && v38 ) /*0x7bce99*/
        {
          *(unsigned short *)v37 = a4; /*0x7bce9b*/
          v37 += 2; /*0x7bce9e*/
          --v38; /*0x7bcea1*/
        }
        result = 0; /*0x7bcea4*/
        v49 = v38 >> 1; /*0x7bcea9*/
        if ( !(v38 >> 1) ) /*0x7bceab*/
          goto LABEL_54; /*0x7bceab*/
LABEL_53:
        memset32((void *)v37, 65537 * a4, v49); /*0x7bcec0*/
        result = (char *)(v37 + 4 * v49); /*0x7bcec2*/
LABEL_54:
        v43 = (v38 & 1) == 0; /*0x7bcec5*/
LABEL_55:
        if ( !v43 ) /*0x7bcec8*/
        {
          if ( result ) /*0x7bcecc*/
            *(unsigned short *)result = a4; /*0x7bcecf*/
        }
        return result; /*0x7bced8*/
      }
      v37 = v28 + Buffer_field_10; /*0x7bcee2*/
      v38 = (int)(v30 - Buffer_field_10) / 2; /*0x7bcee7*/
      if ( (((unsigned char)v28 + (unsigned char)Buffer_field_10) & 2) != 0 && v38 ) /*0x7bcef0*/
        goto LABEL_60; /*0x7bcef0*/
    }
    else
    {
      if ( v27 >= 0 ) /*0x7bcd50*/
      {
        v39 = Buffer_field_10 - v30; /*0x7bcdd7*/
        v40 = (uint16_t *)v29; /*0x7bcdd9*/
        v41 = v39 / 2; /*0x7bcde0*/
        if ( ((uint8_t)v40 & 2) != 0 && v41 ) /*0x7bcde9*/
        {
          *v40++ = a4; /*0x7bcdeb*/
          --v41; /*0x7bcdf1*/
        }
        result = 0; /*0x7bcdf4*/
        v42 = v41 >> 1; /*0x7bcdf9*/
        if ( v41 >> 1 ) /*0x7bcdf9*/
        {
          memset32(v40, 65537 * a4, v42); /*0x7bce10*/
          result = (char *)&v40[2 * v42]; /*0x7bce12*/
        }
        v43 = (v41 & 1) == 0; /*0x7bce15*/
        goto LABEL_55; /*0x7bce18*/
      }
      v31 = (char *)v28; /*0x7bcd59*/
      v32 = Buffer_field_10 / 2; /*0x7bcd5b*/
      v57 = Buffer_field_10 / 2; /*0x7bcd60*/
      if ( (v28 & 2) != 0 && v32 ) /*0x7bcd68*/
      {
        *(unsigned short *)v28 = a4; /*0x7bcd6a*/
        v31 = (char *)(v28 + 2); /*0x7bcd6d*/
        LOBYTE(v57) = --v32; /*0x7bcd71*/
      }
      v33 = 0; /*0x7bcd77*/
      v34 = v32 >> 1; /*0x7bcd7c*/
      if ( v32 >> 1 ) /*0x7bcd7c*/
      {
        memset32(v31, 65537 * a4, v34); /*0x7bcd93*/
        LOBYTE(v32) = v57; /*0x7bcd95*/
        v33 = (uint16_t *)&v31[4 * v34]; /*0x7bcd99*/
      }
      if ( (v32 & 1) != 0 && v33 ) /*0x7bcda2*/
        *v33 = a4; /*0x7bcda4*/
      v35 = this->Buffer_field_10; /*0x7bcdaa*/
      v36 = 2 * *((unsigned int *)this + 10) * *((unsigned int *)this + 11) - v35; /*0x7bcdb5*/
      LODWORD(v36) = v36 - HIDWORD(v36); /*0x7bcdb6*/
      v37 = v35 + this->Buffer_field_18; /*0x7bcdbd*/
      v38 = (int)v36 >> 1; /*0x7bcdbf*/
      if ( (v37 & 2) != 0 && v38 ) /*0x7bcdcc*/
      {
LABEL_60:
        *(unsigned short *)v37 = a4; /*0x7bcef2*/
        v37 += 2; /*0x7bcef5*/
        --v38; /*0x7bcef8*/
      }
    }
    result = 0; /*0x7bcef9*/
    v49 = v38 >> 1; /*0x7bcf00*/
    if ( !(v38 >> 1) ) /*0x7bcf02*/
      goto LABEL_54; /*0x7bcf02*/
    goto LABEL_53; /*0x7bcf02*/
  }
  return result; /*0x7bcece*/

}
} // namespace gamemd
// 0x7C1730
namespace gamemd {
int Buffer::AllocateCodecFrameBuffers(void *a1)
{

  unsigned int *v3; // ebx
  unsigned int v4; // eax
  unsigned int v5; // eax
  int v6; // edi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  unsigned int v16; // edi
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  bool v20; // cf
  int v21; // [esp+10h] [ebp-20h]
  int v22; // [esp+14h] [ebp-1Ch]
  int v23; // [esp+18h] [ebp-18h]
  int v24; // [esp+1Ch] [ebp-14h]
  int v25; // [esp+20h] [ebp-10h]
  int *v26; // [esp+20h] [ebp-10h]
  unsigned int v27; // [esp+24h] [ebp-Ch]
  int v28; // [esp+28h] [ebp-8h] BYREF
  unsigned int v29; // [esp+2Ch] [ebp-4h]

  if ( (*((int (**)(Buffer *, int, int *, int))(unsigned int *)this + 16))(this, 5, &v28, 8) ) /*0x7c1743*/
    return -2; /*0x7c1759*/
  if ( v28 != 1212371789 ) /*0x7c1762*/
    return -4; /*0x7c1770*/
  v3 = (unsigned int *)((char *)this + 1852); /*0x7c1775*/
  v4 = ((((v29 << 16) | v29 & 0xFF00) << 8) | ((HIWORD(v29) | v29 & 0xFF0000) >> 8)) + 1; /*0x7c179e*/
  LOBYTE(v4) = (HIBYTE(v29) + 1) & 0xFE; /*0x7c179f*/
  if ( (*((int (**)(Buffer *, int, char *, unsigned int))(unsigned int *)this + 16))(this, 5, (char *)this + 1852, v4) ) /*0x7c17a6*/
    return -4; /*0x7c17bc*/
  v5 = *v3; /*0x7c17bd*/
  if ( !*v3 ) /*0x7c17bd*/
    goto LABEL_16; /*0x7c17bd*/
  v6 = 16 * v5; /*0x7c17cc*/
  v7 = (*((int (**)(Buffer *, int, unsigned int, unsigned int))(unsigned int *)this + 17))(this, 2, 0, 16 * v5); /*0x7c17d3*/
  *((unsigned int *)this + 465) = v7; /*0x7c17db*/
  if ( !v7 ) /*0x7c17e1*/
    return -8; /*0x7c17ef*/
  (*((void (**)(Buffer *, int, int, int))(unsigned int *)this + 17))(this, 4, v7, v6); /*0x7c17f5*/
  *((unsigned int *)this + 12) += v6; /*0x7c17ff*/
  if ( (*((int (**)(Buffer *, int, int *, int))(unsigned int *)this + 16))(this, 5, &v28, 8) ) /*0x7c180a*/
    return -2; /*0x7c1820*/
  if ( v28 != 1413698381 ) /*0x7c1829*/
    return -4; /*0x7c1837*/
  v8 = ((((v29 << 16) | v29 & 0xFF00) << 8) | ((HIWORD(v29) | v29 & 0xFF0000) >> 8)) + 1; /*0x7c185f*/
  LOBYTE(v8) = (HIBYTE(v29) + 1) & 0xFE; /*0x7c1860*/
  if ( (*((int (**)(Buffer *, int, unsigned int, unsigned int))(unsigned int *)this + 16))(this, 5, *((unsigned int *)this + 465), v8) ) /*0x7c186d*/
    return -4; /*0x7c187a*/
LABEL_16:
  v9 = *v3; /*0x7c1884*/
  v27 = v9; /*0x7c1888*/
  if ( !v9 ) /*0x7c188c*/
    return -1; /*0x7c19de*/
  v10 = (*((int (**)(Buffer *, int, unsigned int, unsigned int))(unsigned int *)this + 17))(this, 2, 0, 12 * v9); /*0x7c189d*/
  *((unsigned int *)this + 466) = v10; /*0x7c18a5*/
  if ( v10 ) /*0x7c18ab*/
  {
    (*((void (**)(Buffer *, int, int, unsigned int))(unsigned int *)this + 17))(this, 4, v10, 12 * v9); /*0x7c18bf*/
    *((unsigned int *)this + 12) += 12 * v9; /*0x7c18cc*/
    v24 = 0; /*0x7c18cf*/
    v11 = 0; /*0x7c18d9*/
    v21 = 0; /*0x7c18db*/
    v22 = 0; /*0x7c18df*/
    while ( 1 ) /*0x7c18ed*/
    {
      v12 = *((unsigned int *)this + 34); /*0x7c18ed*/
      v13 = *((unsigned int *)this + 466); /*0x7c18f3*/
      v25 = v13; /*0x7c18fd*/
      v23 = *(unsigned int *)(v21 + *((unsigned int *)this + 465) + 4); /*0x7c1903*/
      if ( v12 > 0 ) /*0x7c1907*/
      {
        *(unsigned int *)(v11 + v13) = v12; /*0x7c1911*/
        *(unsigned int *)(v11 + v13 + 4) = 0; /*0x7c191d*/
        v14 = (*((int (**)(Buffer *, int, unsigned int, int))(unsigned int *)this + 17))(this, 2, 0, 12 * v12); /*0x7c1925*/
        v15 = v14; /*0x7c1928*/
        if ( !v14 ) /*0x7c192f*/
          return -8; /*0x7c192f*/
        (*((void (**)(Buffer *, int, int, int))(unsigned int *)this + 17))(this, 4, v14, 12 * v12); /*0x7c193a*/
        *((unsigned int *)this + 12) += 12 * v12; /*0x7c194d*/
        v16 = v12 * ((v23 + 1) & 0xFFFFFFFE); /*0x7c1957*/
        v26 = (int *)(v22 + v25 + 8); /*0x7c1964*/
        *v26 = v15; /*0x7c1968*/
        v17 = (*((int (**)(Buffer *, int, unsigned int, unsigned int))(unsigned int *)this + 17))(this, 2, 0, v16); /*0x7c196a*/
        v18 = v17; /*0x7c196d*/
        if ( !v17 ) /*0x7c1974*/
          return -8; /*0x7c1974*/
        (*((void (**)(Buffer *, int, int, unsigned int))(unsigned int *)this + 17))(this, 4, v17, v16); /*0x7c197f*/
        *((unsigned int *)this + 12) += v16; /*0x7c198c*/
        v19 = 0; /*0x7c1991*/
        do /*0x7c19b1*/
        {
          v19 += 12; /*0x7c199b*/
          *(unsigned int *)(*v26 + v19 - 12) = v18; /*0x7c19a0*/
          v18 += v23; /*0x7c19a6*/
          --v12; /*0x7c19a8*/
          *(unsigned int *)(*v26 + v19 - 4) = -1; /*0x7c19a9*/
        }
        while ( v12 ); /*0x7c19b1*/
        v9 = v27; /*0x7c19b3*/
        v11 = v22; /*0x7c19b7*/
      }
      v11 += 12; /*0x7c19c7*/
      v20 = ++v24 < v9; /*0x7c19ca*/
      v21 += 16; /*0x7c19d0*/
      v22 = v11; /*0x7c19d4*/
      if ( !v20 ) /*0x7c19d8*/
        return -1; /*0x7c19d8*/
    }
  }
  return -8; /*0x7c174d*/

}
} // namespace gamemd
// 0x43AD00
namespace gamemd {
_DWORD * Buffer::Init(int a2, int aP2)
{

  this->Buffer_field_00 = (unsigned int)(a2);
  this->Buffer_field_04 = (unsigned int)(aP2);
  LOBYTE(this->Buffer_field_08) = 0; /*0x43ad12*/
  if ( !a2 && aP2 > 0 ) /*0x43ad1a*/
  {
    this->Buffer_field_00 = (unsigned int)(__2_YAPAXI_Z((unsigned int)(aP2))); /*0x43ad25*/
    LOBYTE(this->Buffer_field_08) = 1; /*0x43ad27*/
  }
  return &this->Buffer_field_00; /*0x43ad2d*/

}
} // namespace gamemd
// 0x488030
namespace gamemd {
DynamicVector * Buffer::Constructor_VectorClass_ObjectClass___(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)Block + 1); /*0x488033*/
  *(unsigned int *)Block = (unsigned int)(&vt_VectorClass); /*0x488036*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x488040*/
  {
    __3_YAXPAX_Z(v3); /*0x488048*/
    *((unsigned int *)Block + 1) = 0; /*0x488050*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x48805b*/
  *((unsigned int *)Block + 2) = 0; /*0x488061*/
  if ( (a2 & 1) != 0 ) /*0x488068*/
    __3_YAXPAX_Z(Block); /*0x48806b*/
  return Block; /*0x488075*/

}
} // namespace gamemd
// 0x632B70
namespace gamemd {
int * Buffer::RotateBufferCrypto(int * a2, int a3)
{

  int v4[64]; // [esp+8h] [ebp-100h] BYREF

  qmemcpy(v4, this, sizeof(v4)); /*0x632b8c*/
  RotateBitBufferLeft(v4, a3, 64); /*0x632b92*/
  qmemcpy(a2, v4, 0x100u); /*0x632ba9*/
  return a2; /*0x632bab*/

}
} // namespace gamemd
// 0x6C89E0
namespace gamemd {
int Buffer::AppendCellData(AbstractClass * aP1, int a3)
{

  int * Buffer_field_08;
  unsigned int *v7; // eax
  int *v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  char *v11; // edi
  int v12; // esi
  int v13; // edx
  int v14; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+18h] [ebp-8h]
  unsigned char *v16; // [esp+28h] [ebp+8h]

  Buffer_field_08 = (int *)(this->Buffer_field_08);
  if ( Buffer_field_08 + 12 > (unsigned int)(this->Buffer_field_04 + this->Buffer_field_00) ) /*0x6c89f9*/
    return 0; /*0x6c89f9*/
  v15 = this->Buffer_field_08; /*0x6c89fd*/
  this->Buffer_field_08 = (unsigned int)(Buffer_field_08 + 12); /*0x6c8a01*/
  if ( !Buffer_field_08 ) /*0x6c8a04*/
    return 0; /*0x6c8a06*/
  *(unsigned short *)Buffer_field_08 = *(unsigned short *)a3; /*0x6c8a19*/
  *(unsigned short *)(Buffer_field_08 + 2) = *(unsigned short *)(a3 + 4); /*0x6c8a20*/
  *(unsigned short *)(Buffer_field_08 + 4) = *(unsigned short *)(a3 + 16); /*0x6c8a28*/
  *(unsigned short *)(Buffer_field_08 + 6) = *(unsigned short *)(a3 + 20); /*0x6c8a34*/
  *(unsigned int *)(Buffer_field_08 + 8) = this->Buffer_field_08; /*0x6c8a3f*/
  v7 = CellStruct::Copy((CellStruct *)(a3 + 8), &v14); /*0x6c8a42*/
  v8 = (int *)(aP1); /*0x6c8a49*/
  v16 = (unsigned char *)(*(int (**)(int *, unsigned int, unsigned int))(*aP1 + 92))(aP1, *v7, v7[1]); /*0x6c8a61*/
  v9 = *(unsigned int *)(a3 + 20); /*0x6c8a65*/
  v14 = 0; /*0x6c8a6a*/
  if ( v9 > 0 ) /*0x6c8a72*/
  {
    while ( 1 ) /*0x6c8a8a*/
    {
      v10 = Map_Append(v16, (int)&g_SidebarButtonState.needsRedraw, *(unsigned int *)(a3 + 16)); /*0x6c8a8a*/
      v11 = (char *)this->Buffer_field_08; /*0x6c8a8f*/
      if ( (unsigned int)&v11[v10] > this->Buffer_field_04 + this->Buffer_field_00 /*0x6c8aa4*/
        || (this->Buffer_field_08 = (int)&v11[v10], !v11) )
      {
        (*(void (**)(int *))(*v8 + 96))(v8); /*0x6c8ae6*/
        return 0; /*0x6c8af2*/
      }
      qmemcpy(v11, &g_SidebarButtonState.needsRedraw, v10); /*0x6c8ab0*/
      v13 = (int)(*aP1); /*0x6c8ac2*/
      v12 = ++v14; /*0x6c8ac1*/
      v16 += (*(int ((int *)(**))(int *))(v13 + 116))(aP1); /*0x6c8ad6*/
      if ( v12 >= *(unsigned int *)(a3 + 20) ) /*0x6c8ada*/
        break; /*0x6c8ada*/
      v8 = (int *)(aP1); /*0x6c8adc*/
    }
    Buffer_field_08 = (int *)(v15);
    v8 = (int *)(aP1);
  }
  (*(void (**)(int *))(*v8 + 96))(v8); /*0x6c8b01*/
  return Buffer_field_08; /*0x6c8a08*/

}
} // namespace gamemd