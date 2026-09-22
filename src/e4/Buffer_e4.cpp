// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CellStruct_e4.hpp"

// 0x7BCB50
char * Buffer::FillCircularBufferScroll2(int a2, MouseClass * aP2, unsigned short a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall Buffer::FillCircularBufferScroll2(signed int *this, int a2, MouseClass *aP2, unsigned __int16 a4)
{
  char *result; // eax
  unsigned __int16 *v28; // edi
  unsigned __int16 *v31; // edx
  unsigned __int16 *v33; // ecx
  unsigned __int16 *v37; // edx
  unsigned __int16 *v40; // ebx
  unsigned __int16 *v46; // edx
  unsigned __int16 *v48; // eax
  int v53; // [esp+14h] [ebp-10h] BYREF
  int v54; // [esp+18h] [ebp-Ch]
  int v55; // [esp+1Ch] [ebp-8h]
  int v56; // [esp+20h] [ebp-4h]
  int aP2a; // [esp+2Ch] [ebp+8h]
  char *v58; // [esp+30h] [ebp+Ch]

  signed int v5 = this->q028; /*0x7bcb60*/
  int v52 = this->Buffer_field_04 / 2 % v5; /*0x7bcb72*/
  if ( (int)abs32(a2) > v5 || (result = (char *)abs32((int)aP2), (int)result > this->q0B0) ) /*0x7bcb8e*/
  {
    int v50 = this->q0B0; /*0x7bcf06*/
    v53 = 0; /*0x7bcf0b*/
    v54 = 0; /*0x7bcf0f*/
    v56 = v50; /*0x7bcf17*/
    int v51 = this->Buffer_field_14; /*0x7bcf1b*/
    v55 = v5; /*0x7bcf24*/
    result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v51 + 20))(v51, &v53, a4); /*0x7bcf2f*/
    this->Buffer_field_24 = 0x8000; /*0x7bcf32*/
    return result; /*0x7bcf32*/
  }
  int v8 = a2 + this->Buffer_field_04 / 2 % v5; /*0x7bcb98*/
  if ( a2 ) /*0x7bcb9c*/
  {
    unsigned int v9 = this->Buffer_field_18; /*0x7bcba5*/
    int v10 = this->Buffer_field_04 + 2 * a2; /*0x7bcba8*/
    this->Buffer_field_04 = v10; /*0x7bcbab*/
    unsigned int v11 = v9 + v10; /*0x7bcbae*/
    if ( v11 < v9 ) /*0x7bcbb2*/
      v11 += this->Buffer_field_08; /*0x7bcbb4*/
    if ( v11 >= this->Buffer_field_1C ) /*0x7bcbba*/
      v11 -= this->Buffer_field_08; /*0x7bcbbc*/
    this->Buffer_field_04 = v11 - this->Buffer_field_18; /*0x7bcbc4*/
    if ( a2 >= 0 ) /*0x7bcbc7*/
    {
  int v22; // ecx
      v53 = v52; /*0x7bcc6e*/
      if ( v8 < v5 ) /*0x7bcc64*/
      {
        v54 = 0; /*0x7bcccf*/
        int v23 = this->q0B0; /*0x7bccd3*/
        v55 = a2; /*0x7bccd6*/
        v22 = this->Buffer_field_14; /*0x7bccda*/
        v56 = v23; /*0x7bcce3*/
      }
      else
      {
        int v18 = this->q0B0; /*0x7bcc72*/
        v55 = v5 - v52; /*0x7bcc75*/
        v54 = 0; /*0x7bcc79*/
        int v19 = this->Buffer_field_14; /*0x7bcc7d*/
        v56 = v18; /*0x7bcc82*/
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v19 + 20))(v19, &v53, a4); /*0x7bcc94*/
        int v20 = v8 - this->q028; /*0x7bcc9e*/
        int v21 = this->q0B0; /*0x7bcca0*/
        v54 = 0; /*0x7bcca3*/
        v22 = this->Buffer_field_14; /*0x7bcca7*/
        v53 = 0; /*0x7bccaa*/
        v55 = v20; /*0x7bccae*/
        v56 = v21; /*0x7bccb2*/
      }
      result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v22 + 20))(v22, &v53, a4); /*0x7bccbe*/
    }
    else if ( v8 >= 0 ) /*0x7bcbcf*/
    {
      v53 = v8; /*0x7bcc33*/
      v54 = 0; /*0x7bcc37*/
      v56 = this->q0B0; /*0x7bcc3e*/
      v55 = -a2; /*0x7bcc46*/
      result = (char *)(*(int (__thiscall **)(_DWORD, int *, _DWORD))(*(_DWORD *)this->Buffer_field_14 + 20))( /*0x7bcc5a*/
                         this->Buffer_field_14,
                         &v53,
                         a4);
    }
    else
    {
      v53 = 0; /*0x7bcbd5*/
      v55 = v52; /*0x7bcbdd*/
      int v12 = this->q0B0; /*0x7bcbe1*/
      v54 = 0; /*0x7bcbe4*/
      int v13 = this->Buffer_field_14; /*0x7bcbe8*/
      v56 = v12; /*0x7bcbed*/
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v13 + 20))(v13, &v53, a4); /*0x7bcbff*/
      int v14 = this->q028; /*0x7bcc02*/
      int v15 = this->q0B0; /*0x7bcc05*/
      int v16 = v14 + v8; /*0x7bcc08*/
      v54 = 0; /*0x7bcc0e*/
      int v17 = this->Buffer_field_14; /*0x7bcc12*/
      v55 = v14 - v16; /*0x7bcc15*/
      v53 = v16; /*0x7bcc19*/
      v56 = v15; /*0x7bcc1d*/
      result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v17 + 20))(v17, &v53, a4); /*0x7bcc29*/
    }
  }
  if ( aP2 ) /*0x7bccf8*/
  {
  unsigned int v49; // esi
  bool v43; // zf
  int v38; // ebx
    int v24 = this->Buffer_field_04; /*0x7bccfe*/
    int v25 = this->q028; /*0x7bcd01*/
    this->Buffer_field_24 -= (int)aP2; /*0x7bcd16*/
    signed int v26 = v24 + 2 * (_DWORD)aP2 * v25; /*0x7bcd19*/
    this->Buffer_field_04 = v26; /*0x7bcd1c*/
    char * v27 = (char *)aP2 + v24 / 2 / v25; /*0x7bcd1f*/
    v28 = (unsigned __int16 *)this->Buffer_field_18; /*0x7bcd21*/
    unsigned int v29 = (unsigned int)v28 + v26; /*0x7bcd24*/
    v58 = v27; /*0x7bcd26*/
    if ( v29 < (unsigned int)v28 ) /*0x7bcd2c*/
      v29 += this->Buffer_field_08; /*0x7bcd2e*/
    if ( v29 >= this->Buffer_field_1C ) /*0x7bcd34*/
      v29 -= this->Buffer_field_08; /*0x7bcd36*/
    unsigned int v30 = v29 - (_DWORD)v28; /*0x7bcd3f*/
    this->Buffer_field_04 = v29 - (_DWORD)v28; /*0x7bcd43*/
    if ( (int)aP2 >= 0 ) /*0x7bcd46*/
    {
      int v44 = this->q0B0; /*0x7bce1d*/
      if ( (int)v58 >= v44 ) /*0x7bce26*/
      {
        __int64 v45 = 2 * this->q028 * v44 - v24; /*0x7bce34*/
        LODWORD(v45) = v45 - HIDWORD(v45); /*0x7bce35*/
        v46 = (unsigned __int16 *)((char *)v28 + v24); /*0x7bce37*/
        int v47 = (int)v45 >> 1; /*0x7bce3c*/
        if ( (((_BYTE)v28 + (_BYTE)v24) & 2) != 0 && v47 ) /*0x7bce45*/
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
        v37 = (unsigned __int16 *)this->Buffer_field_18; /*0x7bce8b*/
        v38 = this->Buffer_field_04 / 2; /*0x7bce90*/
        if ( ((unsigned __int8)v37 & 2) != 0 && v38 ) /*0x7bce99*/
        {
          *v37++ = a4; /*0x7bce9b*/
          --v38; /*0x7bcea1*/
        }
        result = 0; /*0x7bcea4*/
        v49 = v38 >> 1; /*0x7bcea9*/
        if ( !(v38 >> 1) ) /*0x7bceab*/
          goto LABEL_54; /*0x7bceab*/
LABEL_53:
        memset32(v37, 65537 * a4, v49); /*0x7bcec0*/
        result = (char *)&v37[2 * v49]; /*0x7bcec2*/
LABEL_54:
        v43 = (v38 & 1) == 0; /*0x7bcec5*/
LABEL_55:
        if ( !v43 ) /*0x7bcec8*/
        {
          if ( result ) /*0x7bcecc*/
            *(_WORD *)result = a4; /*0x7bcecf*/
        }
        return result; /*0x7bced8*/
      }
      v37 = (unsigned __int16 *)((char *)v28 + v24); /*0x7bcee2*/
      v38 = (int)(v30 - v24) / 2; /*0x7bcee7*/
      if ( (((_BYTE)v28 + (_BYTE)v24) & 2) != 0 && v38 ) /*0x7bcef0*/
        goto LABEL_60; /*0x7bcef0*/
    }
    else
    {
      if ( (int)v27 >= 0 ) /*0x7bcd50*/
      {
        int v39 = v24 - v30; /*0x7bcdd7*/
        v40 = (unsigned __int16 *)v29; /*0x7bcdd9*/
        int v41 = v39 / 2; /*0x7bcde0*/
        if ( ((unsigned __int8)v40 & 2) != 0 && v41 ) /*0x7bcde9*/
        {
          *v40++ = a4; /*0x7bcdeb*/
          --v41; /*0x7bcdf1*/
        }
        result = 0; /*0x7bcdf4*/
        unsigned int v42 = v41 >> 1; /*0x7bcdf9*/
        if ( v41 >> 1 ) /*0x7bcdf9*/
        {
          memset32(v40, 65537 * a4, v42); /*0x7bce10*/
          result = (char *)&v40[2 * v42]; /*0x7bce12*/
        }
        v43 = (v41 & 1) == 0; /*0x7bce15*/
        goto LABEL_55; /*0x7bce18*/
      }
      v31 = v28; /*0x7bcd59*/
      int v32 = v24 / 2; /*0x7bcd5b*/
      aP2a = v24 / 2; /*0x7bcd60*/
      if ( ((unsigned __int8)v28 & 2) != 0 && v32 ) /*0x7bcd68*/
      {
        *v28 = a4; /*0x7bcd6a*/
        v31 = v28 + 1; /*0x7bcd6d*/
        LOBYTE(aP2a) = --v32; /*0x7bcd71*/
      }
      v33 = 0; /*0x7bcd77*/
      unsigned int v34 = v32 >> 1; /*0x7bcd7c*/
      if ( v32 >> 1 ) /*0x7bcd7c*/
      {
        memset32(v31, 65537 * a4, v34); /*0x7bcd93*/
        LOBYTE(v32) = aP2a; /*0x7bcd95*/
        v33 = &v31[2 * v34]; /*0x7bcd99*/
      }
      if ( (v32 & 1) != 0 && v33 ) /*0x7bcda2*/
        *v33 = a4; /*0x7bcda4*/
      int v35 = this->Buffer_field_04; /*0x7bcdaa*/
      __int64 v36 = 2 * this->q028 * this->q0B0 - v35; /*0x7bcdb5*/
      LODWORD(v36) = v36 - HIDWORD(v36); /*0x7bcdb6*/
      v37 = (unsigned __int16 *)(v35 + this->Buffer_field_18); /*0x7bcdbd*/
      v38 = (int)v36 >> 1; /*0x7bcdbf*/
      if ( ((unsigned __int8)v37 & 2) != 0 && v38 ) /*0x7bcdcc*/
      {
LABEL_60:
        *v37++ = a4; /*0x7bcef2*/
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
}

// 0x7C1730
int Buffer::AllocateCodecFrameBuffers()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void AllocateCodecFrameBuffers(int this)
{

  int v28; // [esp+28h] [ebp-8h] BYREF
  if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v28, 8) ) /*0x7c1743*/
    return -2; /*0x7c1759*/
  if ( v28 != 1212371789 ) /*0x7c1762*/
    return -4; /*0x7c1770*/
  unsigned int * v3 = (unsigned int *)(this + 1852); /*0x7c1775*/
  unsigned int v29; // [esp+2Ch] [ebp-4h]
  unsigned int v4 = ((((v29 << 16) | v29 & 0xFF00) << 8) | ((HIWORD(v29) | v29 & 0xFF0000) >> 8)) + 1; /*0x7c179e*/
  LOBYTE(v4) = (HIBYTE(v29) + 1) & 0xFE; /*0x7c179f*/
  if ( (*(int (__cdecl **)(int, int, int, unsigned int))(this + 64))(this, 5, this + 1852, v4) ) /*0x7c17a6*/
    return -4; /*0x7c17bc*/
  unsigned int v5 = *v3; /*0x7c17bd*/
  if ( !*v3 ) /*0x7c17bd*/
    goto LABEL_16; /*0x7c17bd*/
  int v6 = 16 * v5; /*0x7c17cc*/
  int v7 = (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 68))(this, 2, 0, 16 * v5); /*0x7c17d3*/
  *(_DWORD *)(this + 1860) = v7; /*0x7c17db*/
  if ( !v7 ) /*0x7c17e1*/
    return -8; /*0x7c17ef*/
  (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v7, v6); /*0x7c17f5*/
  this->Buffer_field_0C += v6; /*0x7c17ff*/
  if ( (*(int (__cdecl **)(int, int, int *, int))(this + 64))(this, 5, &v28, 8) ) /*0x7c180a*/
    return -2; /*0x7c1820*/
  if ( v28 != 1413698381 ) /*0x7c1829*/
    return -4; /*0x7c1837*/
  unsigned int v8 = ((((v29 << 16) | v29 & 0xFF00) << 8) | ((HIWORD(v29) | v29 & 0xFF0000) >> 8)) + 1; /*0x7c185f*/
  LOBYTE(v8) = (HIBYTE(v29) + 1) & 0xFE; /*0x7c1860*/
  if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 64))(this, 5, *(_DWORD *)(this + 1860), v8) ) /*0x7c186d*/
    return -4; /*0x7c187a*/
LABEL_16:
  unsigned int v9 = *v3; /*0x7c1884*/
  unsigned int v27 = v9; /*0x7c1888*/
  if ( !v9 ) /*0x7c188c*/
    return -1; /*0x7c19de*/
  int v10 = (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 68))(this, 2, 0, 12 * v9); /*0x7c189d*/
  *(_DWORD *)(this + 1864) = v10; /*0x7c18a5*/
  if ( v10 ) /*0x7c18ab*/
  {
    (*(void (__cdecl **)(int, int, int, unsigned int))(this + 68))(this, 4, v10, 12 * v9); /*0x7c18bf*/
    this->Buffer_field_0C += 12 * v9; /*0x7c18cc*/
    int v24 = 0; /*0x7c18cf*/
    int v11 = 0; /*0x7c18d9*/
    int v21 = 0; /*0x7c18db*/
    int v22 = 0; /*0x7c18df*/
    while ( 1 ) /*0x7c18ed*/
    {
      int v12 = *(_DWORD *)(this + 136); /*0x7c18ed*/
      int v13 = *(_DWORD *)(this + 1864); /*0x7c18f3*/
      int v25 = v13; /*0x7c18fd*/
      int v23 = *(_DWORD *)(v21 + *(_DWORD *)(this + 1860) + 4); /*0x7c1903*/
      if ( v12 > 0 ) /*0x7c1907*/
      {
        *(_DWORD *)(v11 + v13) = v12; /*0x7c1911*/
        *(_DWORD *)(v11 + v13 + 4) = 0; /*0x7c191d*/
        int v14 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, 12 * v12); /*0x7c1925*/
        int v15 = v14; /*0x7c1928*/
        if ( !v14 ) /*0x7c192f*/
          return -8; /*0x7c192f*/
        (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v14, 12 * v12); /*0x7c193a*/
        this->Buffer_field_0C += 12 * v12; /*0x7c194d*/
        unsigned int v16 = v12 * ((v23 + 1) & 0xFFFFFFFE); /*0x7c1957*/
        int * v26 = (int *)(v22 + v25 + 8); /*0x7c1964*/
        *v26 = v15; /*0x7c1968*/
        int v17 = (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 68))(this, 2, 0, v16); /*0x7c196a*/
        int v18 = v17; /*0x7c196d*/
        if ( !v17 ) /*0x7c1974*/
          return -8; /*0x7c1974*/
        (*(void (__cdecl **)(int, int, int, unsigned int))(this + 68))(this, 4, v17, v16); /*0x7c197f*/
        this->Buffer_field_0C += v16; /*0x7c198c*/
        int v19 = 0; /*0x7c1991*/
        do /*0x7c19b1*/
        {
          v19 += 12; /*0x7c199b*/
          *(_DWORD *)(*v26 + v19 - 12) = v18; /*0x7c19a0*/
          v18 += v23; /*0x7c19a6*/
          --v12; /*0x7c19a8*/
          *(_DWORD *)(*v26 + v19 - 4) = -1; /*0x7c19a9*/
        }
        while ( v12 ); /*0x7c19b1*/
        v9 = v27; /*0x7c19b3*/
        v11 = v22; /*0x7c19b7*/
      }
      v11 += 12; /*0x7c19c7*/
      bool v20 = ++v24 < v9; /*0x7c19ca*/
      v21 += 16; /*0x7c19d0*/
      v22 = v11; /*0x7c19d4*/
      if ( !v20 ) /*0x7c19d8*/
        return -1; /*0x7c19d8*/
    }
  }
  return -8; /*0x7c174d*/
}
}

// 0x43AD00
unsigned int * Buffer::Init(int a2, AbstractClass * aP2)
{
{
    *(void**)this = a2;
    this->Items = aP2;
    this->Capacity = 0;
    if ( !a2 && (int)aP2 > 0 )
  {
    *(void**)this = __2_YAPAXI_Z((size_t)aP2);
    this->Capacity = 1;
  }
    return this;
}
}

// 0x488030
DynamicVector * Buffer::Constructor_VectorClass_ObjectClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ObjectClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}

// 0x632B70
int * Buffer::RotateBufferCrypto(int * a2, int a3)
{
{
    int v4[64];
    qmemcpy(v4, this, sizeof(v4));
    RotateBitBufferLeft(v4, a3, 64);
    qmemcpy(a2, v4, 0x100u);
    return a2;
}
}

// 0x6C89E0
int Buffer::AppendCellData(AbstractClass * aP1, int a3)
{
{
    AbstractClass *v4;
    int *v7;
    AbstractClass *v8;
    int v9;
    unsigned int v10;
    char *v11;
    int v12;
    int v13;
    int v14;
    AbstractClass *v15;
    char *v16;
    v4 = (AbstractClass *)this->Capacity;
    if ( (unsigned int)&v4->__pad_0[12] > this->Items + *(void**)this )
    return 0;
    v15 = (AbstractClass *)this->Capacity;
    this->Capacity = &v4->__pad_0[12];
    if ( !v4 )
    return 0;
    *(short *)v4->__pad_0 = *(short *)a3;
    *(short *)&v4->__pad_0[2] = *(short *)(a3 + 4);
    *(short *)&v4->__pad_0[4] = *(short *)(a3 + 16);
    *(short *)&v4->__pad_0[6] = *(short *)(a3 + 20);
    *(int *)&v4->__pad_0[8] = this->Capacity;
    v7 = CellStruct::Copy((int *)(a3 + 8), (IUnknown *)&v14);
    v8 = aP1;
    v16 = (char *)(*(int (__thiscall **)(AbstractClass *, int, int))(*(int *)aP1->__pad_0 + 92))( aP1, *v7, v7[1]);
    v9 = *(int *)(a3 + 20);
    v14 = 0;
    if ( v9 > 0 )
  {
    while ( 1 )
    {
    v10 = Map_Append(v16, (int)&g_OverlayTypeConfig[17880], *(int *)(a3 + 16));
    v11 = (char *)this->Capacity;
    if ( (unsigned int)&v11[v10] > this->Items + *(void**)this || (this->Capacity = &v11[v10], !v11) )
      {
    (*(void (__thiscall **)(AbstractClass *))(*(int *)v8->__pad_0 + 96))(v8);
    return 0;
      }
    qmemcpy(v11, &g_OverlayTypeConfig[17880], v10);
    v13 = *(int *)aP1->__pad_0;
    v12 = ++v14;
    v16 += (*(int (__thiscall **)(AbstractClass *))(v13 + 116))(aP1);
    if ( v12 >= *(int *)(a3 + 20) )
    break;
    v8 = aP1;
    }
    v4 = v15;
    v8 = aP1;
  }
    (*(void (__thiscall **)(AbstractClass *))(*(int *)v8->__pad_0 + 96))(v8);
    return (int)v4->__pad_0;
}
}
