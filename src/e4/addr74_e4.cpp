// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7436E0_e4.hpp"
#include "e4/classes/E4Recv_7490C0_e4.hpp"
#include "e4/classes/E4Recv_74BBA0_e4.hpp"
#include "e4/classes/E4Recv_74BBF0_e4.hpp"
#include "e4/classes/E4Recv_74BCA0_e4.hpp"
#include "e4/classes/E4Recv_74BDC0_e4.hpp"
#include "e4/classes/E4Recv_74BF40_e4.hpp"
#include "e4/classes/E4Recv_74E1C0_e4.hpp"
#include "e4/classes/E4Recv_74EA70_e4.hpp"
#include "e4/classes/E4Recv_74F63A_e4.hpp"
#include "e4/classes/E4Recv_74F730_e4.hpp"
#include "e4/classes/E4Recv_74FAE0_e4.hpp"
#include "e4/classes/__e4.hpp"

// 0x743270
namespace gamemd {
int PlaceScenarioUnits()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x746EC0
namespace gamemd {
int sub_746EC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_746EC0()
{
  unk_B1D0C8 = 0; /*0x746ec2*/
  unk_B1D0CC = 0; /*0x746ec7*/
  unk_B1D0D0 = 0; /*0x746ecc*/
  unk_B1D0D4 = 0; /*0x746ed1*/
  return 0; /*0x746ed6*/
}
}
} // namespace gamemd

// 0x7483B0
namespace gamemd {
int CopySHPFrameToSurface(int a1, unsigned short * a2, int * a3, int a4, int a5, unsigned int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl CopySHPFrameToSurface(int a1, unsigned __int16 *a2, int *a3, int a4, int a5, unsigned int a6)
{
  unsigned int v6; // edi
  int result; // eax
  int *v9; // ebp
  char *v10; // ecx
  unsigned __int16 v11; // ax
  int v12; // esi
  int v13; // eax
  unsigned int v14; // esi
  int *v15; // eax
  int v16; // ecx
  int *v17; // eax
  int *v18; // edx
  unsigned int v19; // edi
  int v20; // ecx
  _DWORD *v21; // edx
  unsigned int v22; // edi
  unsigned __int16 v23; // ax
  unsigned int v24; // edx
  int v25; // eax
  __int16 *v26; // edi
  int *v27; // ebx
  __int16 v28; // cx
  int *v29; // eax
  unsigned int v30; // edx
  int v31; // esi
  _WORD *v32; // eax
  int *v33; // ebx
  int *v34; // edx
  int v35; // edi
  int v36; // edi
  unsigned int v37; // ebx
  int *v38; // edx
  unsigned __int16 *v39; // eax
  int v40; // esi
  unsigned __int16 v41; // cx
  unsigned __int16 v42; // bp
  unsigned __int16 *v43; // eax
  unsigned __int16 v44; // cx
  unsigned __int16 v45; // bp
  int v46; // edi
  unsigned __int16 v47; // cx
  int v48; // edx
  int v49; // eax
  int *v50; // ecx
  char *v51; // [esp+Ch] [ebp-Ch]
  char *v52; // [esp+10h] [ebp-8h]
  unsigned int v53; // [esp+14h] [ebp-4h]
  int v54; // [esp+20h] [ebp+8h]
  unsigned __int16 *v55; // [esp+24h] [ebp+Ch]
  unsigned __int16 *v56; // [esp+24h] [ebp+Ch]
  unsigned __int16 *v57; // [esp+24h] [ebp+Ch]
  char *v58; // [esp+2Ch] [ebp+14h]
  int v59; // [esp+2Ch] [ebp+14h]
  int v60; // [esp+2Ch] [ebp+14h]
  unsigned int v61; // [esp+2Ch] [ebp+14h]
  unsigned int v62; // [esp+30h] [ebp+18h]

  v6 = 2 * a6; /*0x7483be*/
  result = (int)a3; /*0x7483c4*/
  v9 = a3; /*0x7483d0*/
  v10 = (char *)&a3[2 * a6 * a5]; /*0x7483d2*/
  v62 = a6; /*0x7483da*/
  v53 = (unsigned int)v10; /*0x7483de*/
  v51 = (char *)a3; /*0x7483e2*/
  v52 = (char *)&a3[2 * a4]; /*0x7483e6*/
  v58 = (char *)a3; /*0x7483ea*/
  if ( a3 < (int *)v10 ) /*0x7483ee*/
  {
    do /*0x7483f5*/
    {
      v11 = *a2++; /*0x7483f5*/
      v55 = a2; /*0x748400*/
      v12 = v11; /*0x748404*/
      v13 = v11 & 0xF000; /*0x748406*/
      v14 = v12 & 0xFFFF0FFF; /*0x74840b*/
      if ( v13 > 12288 ) /*0x748416*/
      {
        if ( v13 == 20480 ) /*0x7485c6*/
        {
          if ( v14 ) /*0x7486c4*/
          {
            v46 = 4 * (v6 >> 2); /*0x7486c9*/
            do /*0x748703*/
            {
              v47 = *((_WORD *)unk_B1D14C + *a2); /*0x7486d6*/
              v48 = 4; /*0x7486da*/
              v49 = v47 | (v47 << 16); /*0x7486ea*/
              ++a2; /*0x7486ec*/
              v50 = v9; /*0x7486ef*/
              do /*0x7486f9*/
              {
                *v50 = v49; /*0x7486f1*/
                v50[1] = v49; /*0x7486f3*/
                v50 = (int *)((char *)v50 + v46); /*0x7486f6*/
                --v48; /*0x7486f8*/
              }
              while ( v48 ); /*0x7486f9*/
              v9 += 2; /*0x7486fb*/
              --v14; /*0x7486fe*/
              v58 = (char *)v9; /*0x7486ff*/
            }
            while ( v14 ); /*0x748703*/
          }
        }
        else if ( v13 == 24576 ) /*0x7485d1*/
        {
          if ( v14 ) /*0x748650*/
          {
            v36 = 4 * (v6 >> 2); /*0x748659*/
            v37 = v14; /*0x74865c*/
            do /*0x7486ba*/
            {
              v38 = v9; /*0x748668*/
              v39 = (unsigned __int16 *)(a1 + 32 * *v55++); /*0x748670*/
              v40 = 4; /*0x748679*/
              do /*0x7486ac*/
              {
                v41 = v39[1]; /*0x748682*/
                v42 = *v39; /*0x748686*/
                v43 = v39 + 2; /*0x74868e*/
                *v38 = v42 | (v41 << 16); /*0x748691*/
                v44 = v43[1]; /*0x748695*/
                v45 = *v43; /*0x74869b*/
                v39 = v43 + 2; /*0x74869e*/
                v38[1] = v45 | (v44 << 16); /*0x7486a6*/
                v38 = (int *)((char *)v38 + v36); /*0x7486a9*/
                --v40; /*0x7486ab*/
              }
              while ( v40 ); /*0x7486ac*/
              v9 = (int *)(v58 + 8); /*0x7486b2*/
              --v37; /*0x7486b5*/
              v58 += 8; /*0x7486b6*/
            }
            while ( v37 ); /*0x7486ba*/
            a2 = v55; /*0x7486bc*/
          }
        }
        else if ( v13 == 28672 && v14 ) /*0x7485e0*/
        {
          v61 = v14; /*0x7485e6*/
          while ( 1 ) /*0x7485f9*/
          {
            v31 = 4; /*0x7485f9*/
            v32 = (_WORD *)(a1 + 32 * *a2); /*0x748601*/
            v57 = a2 + 1; /*0x748606*/
            v33 = v9; /*0x74860a*/
            do /*0x748631*/
            {
              v34 = v33; /*0x74860c*/
              v35 = 4; /*0x74860e*/
              do /*0x748625*/
              {
                if ( (HIBYTE(*v32) & 0x80u) == 0 ) /*0x748619*/
                  *(_WORD *)v34 = *v32; /*0x74861b*/
                v34 = (int *)((char *)v34 + 2); /*0x74861e*/
                ++v32; /*0x748621*/
                --v35; /*0x748624*/
              }
              while ( v35 ); /*0x748625*/
              --v31; /*0x74862d*/
              v33 = (int *)((char *)v33 + 2 * ((v62 * 2) >> 1)); /*0x74862e*/
            }
            while ( v31 ); /*0x748631*/
            v9 += 2; /*0x748637*/
            if ( !--v61 ) /*0x74863f*/
              break; /*0x74863f*/
            a2 = v57; /*0x7485ec*/
          }
          a2 = v57; /*0x748641*/
          v58 = (char *)v9; /*0x748645*/
        }
        goto LABEL_55; /*0x748649*/
      }
      if ( v13 == 12288 ) /*0x74841c*/
      {
        v54 = 4; /*0x74854b*/
        v26 = (__int16 *)(a1 + 32 * *a2); /*0x748556*/
        v56 = a2 + 1; /*0x74855b*/
        do /*0x7485a2*/
        {
          v27 = v9; /*0x74855f*/
          v60 = 4; /*0x748561*/
          do /*0x748591*/
          {
            v28 = *v26; /*0x748569*/
            if ( (HIBYTE(*v26) & 0x80u) == 0 ) /*0x74856f*/
            {
              v29 = v27; /*0x748573*/
              if ( v14 ) /*0x748575*/
              {
                v30 = v14; /*0x748577*/
                do /*0x748580*/
                {
                  *(_WORD *)v29 = v28; /*0x748579*/
                  v29 += 2; /*0x74857c*/
                  --v30; /*0x74857f*/
                }
                while ( v30 ); /*0x748580*/
              }
            }
            v27 = (int *)((char *)v27 + 2); /*0x748586*/
            ++v26; /*0x748589*/
            --v60; /*0x74858d*/
          }
          while ( v60 ); /*0x748591*/
          v9 = (int *)((char *)v9 + v62 * 2); /*0x74859b*/
          --v54; /*0x74859e*/
        }
        while ( v54 ); /*0x7485a2*/
        a2 = v56; /*0x7485a6*/
        v9 = (int *)((char *)v9 + 8 * v14 - 2 * v62); /*0x7485b6*/
        v58 = (char *)v9; /*0x7485b8*/
        goto LABEL_55; /*0x7485bc*/
      }
      if ( v13 ) /*0x748424*/
      {
        if ( v13 != 4096 ) /*0x74842f*/
        {
          if ( v13 == 0x2000 ) /*0x74843a*/
          {
            v59 = 4; /*0x748449*/
            v15 = (int *)(a1 + 32 * *a2++); /*0x748454*/
            do /*0x7484af*/
            {
              v16 = *v15; /*0x748467*/
              v17 = v15 + 1; /*0x748469*/
              v18 = v9; /*0x74846e*/
              if ( v14 ) /*0x748470*/
              {
                v19 = v14; /*0x748472*/
                do /*0x74847a*/
                {
                  *v18 = v16; /*0x748474*/
                  v18 += 2; /*0x748476*/
                  --v19; /*0x748479*/
                }
                while ( v19 ); /*0x74847a*/
              }
              v20 = *v17; /*0x74848a*/
              v15 = v17 + 1; /*0x74848c*/
              v21 = v9 + 1; /*0x748491*/
              if ( v14 ) /*0x748494*/
              {
                v22 = v14; /*0x748496*/
                do /*0x74849e*/
                {
                  *v21 = v20; /*0x748498*/
                  v21 += 2; /*0x74849a*/
                  --v22; /*0x74849d*/
                }
                while ( v22 ); /*0x74849e*/
              }
              v9 = (int *)((char *)v9 + v62 * 2); /*0x7484a8*/
              --v59; /*0x7484ab*/
            }
            while ( v59 ); /*0x7484af*/
            v9 = (int *)((char *)v9 + 8 * v14 - 2 * v62); /*0x7484c3*/
            v58 = (char *)v9; /*0x7484c5*/
          }
          goto LABEL_55; /*0x7484c9*/
        }
      }
      else
      {
        v23 = *a2; /*0x7484d6*/
        v24 = 2 * v14; /*0x7484d9*/
        ++a2; /*0x7484dc*/
        v25 = *((unsigned __int16 *)unk_B1D14C + v23) | (*((unsigned __int16 *)unk_B1D14C + v23) << 16); /*0x7484ee*/
        if ( 2 * v14 ) /*0x7484d9*/
          memset32(v9, v25, v24); /*0x7484f8*/
        if ( v24 ) /*0x748503*/
        {
          memset32((char *)v9 + v62 * 2, v25, v24); /*0x748507*/
          memset32(&v9[v62], v25, v24); /*0x748517*/
          memset32((char *)&v9[v62] + v62 * 2, v25, v24); /*0x748533*/
        }
      }
      v9 += 2 * v14; /*0x748535*/
      v58 = (char *)v9; /*0x748539*/
LABEL_55:
      result = (int)v52; /*0x748705*/
      v6 = v62 * 2; /*0x748709*/
      if ( v9 == (int *)v52 ) /*0x74870f*/
      {
        result = 2 * v62; /*0x748719*/
        v9 = (int *)&v51[2 * v62]; /*0x748720*/
        v51 = (char *)v9; /*0x748722*/
        v58 = (char *)v9; /*0x748726*/
        v52 = (char *)&v9[2 * a4]; /*0x74872e*/
      }
    }
    while ( (unsigned int)v9 < v53 ); /*0x7483f5*/
  }
  return result; /*0x74873d*/
}
}
} // namespace gamemd

// 0x748AF0
namespace gamemd {
unsigned int sub_748AF0(int a1, unsigned short * a2, int * a3, unsigned int a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __cdecl sub_748AF0(int a1, _WORD *a2, int *a3, unsigned int a4, int a5, int a6)
{
  int *v6; // edx
  int v7; // ebp
  int v8; // ecx
  unsigned int result; // eax
  int v11; // ecx
  _WORD *v12; // eax
  int v13; // ebx
  int *v14; // esi
  int v15; // edi
  unsigned __int16 *v16; // eax
  int v17; // esi
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // bx
  unsigned __int16 *v20; // eax
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // bx
  unsigned int v23; // [esp+8h] [ebp-4h]
  _WORD *v24; // [esp+18h] [ebp+Ch]
  int *v25; // [esp+20h] [ebp+14h]
  int *v26; // [esp+24h] [ebp+18h]

  v6 = a3; /*0x748afa*/
  v7 = 2 * a6; /*0x748afe*/
  v8 = 2 * a6 * a5; /*0x748b02*/
  v26 = a3; /*0x748b09*/
  result = (unsigned int)&a3[v8]; /*0x748b0d*/
  v23 = result; /*0x748b16*/
  v25 = &a3[2 * a4]; /*0x748b1d*/
  if ( (unsigned int)a3 < result ) /*0x748b21*/
  {
    while ( 1 ) /*0x748b37*/
    {
      result = *a2 & 0x1FFF; /*0x748b37*/
      v11 = *a2 & 0xE000; /*0x748b3c*/
      v24 = a2 + 1; /*0x748b42*/
      if ( (*a2 & 0xE000) == 0 ) /*0x748b48*/
        break; /*0x748b48*/
      if ( v11 == 0x2000 ) /*0x748b50*/
      {
        v12 = (_WORD *)(a1 + 32 * (*a2 & 0x1FFF)); /*0x748b72*/
        v13 = 2; /*0x748b74*/
        do /*0x748b9b*/
        {
          v14 = v6; /*0x748b79*/
          v15 = 4; /*0x748b7b*/
          do /*0x748b92*/
          {
            if ( (HIBYTE(*v12) & 0x80u) == 0 ) /*0x748b86*/
              *(_WORD *)v14 = *v12; /*0x748b88*/
            v14 = (int *)((char *)v14 + 2); /*0x748b8b*/
            ++v12; /*0x748b8e*/
            --v15; /*0x748b91*/
          }
          while ( v15 ); /*0x748b92*/
          v12 += 4; /*0x748b94*/
          --v13; /*0x748b97*/
          v6 = (int *)((char *)v6 + 2 * v7); /*0x748b98*/
        }
        while ( v13 ); /*0x748b9b*/
        goto LABEL_17; /*0x748b9b*/
      }
      if ( v11 == 0x4000 ) /*0x748b58*/
        v6 += 2; /*0x748b5e*/
LABEL_18:
      if ( v6 == v25 ) /*0x748bfa*/
      {
        v6 = &v26[v7]; /*0x748c07*/
        result = a4; /*0x748c09*/
        v26 = v6; /*0x748c0d*/
        v25 = &v6[2 * a4]; /*0x748c14*/
      }
      if ( (unsigned int)v6 >= v23 ) /*0x748c1c*/
        return result; /*0x748c1c*/
      a2 = v24; /*0x748b2b*/
    }
    v16 = (unsigned __int16 *)(a1 + 32 * (*a2 & 0x1FFF)); /*0x748bab*/
    v17 = 2; /*0x748bb1*/
    do /*0x748be4*/
    {
      v18 = v16[1]; /*0x748bba*/
      v19 = *v16; /*0x748bbe*/
      v20 = v16 + 2; /*0x748bc6*/
      *v6 = v19 | (v18 << 16); /*0x748bc9*/
      v21 = v20[1]; /*0x748bcd*/
      v22 = *v20; /*0x748bd3*/
      v16 = v20 + 6; /*0x748bd6*/
      v6[1] = v22 | (v21 << 16); /*0x748bde*/
      v6 = (int *)((char *)v6 + 2 * v7); /*0x748be1*/
      --v17; /*0x748be3*/
    }
    while ( v17 ); /*0x748be4*/
LABEL_17:
    result = 4 * v7; /*0x748be6*/
    v6 = (int *)((char *)v6 + 8 - 4 * v7); /*0x748bf4*/
    goto LABEL_18; /*0x748bf4*/
  }
  return result; /*0x748c24*/
}
}
} // namespace gamemd

// 0x74BB20
namespace gamemd {
VoxelAnimTypeClass * globalHelper_04BB20(ObjectClass * Source, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VoxelAnimTypeClass *__fastcall globalHelper_04BB20(ObjectClass *Source, int a2)
{
  int v4; // esi
  _DWORD *v5; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x74bb3f*/
    return 0; /*0x74bb9c*/
  v4 = 0; /*0x74bb4e*/
  if ( *(int *)(a2 + 16) <= 0 ) /*0x74bb52*/
  {
LABEL_6:
    v5 = (_DWORD *)__2_YAPAXI_Z(0x308u); /*0x74bb73*/
    if ( v5 ) /*0x74bb82*/
      return (VoxelAnimTypeClass *)VoxelAnimTypeClass::Constructor(v5, Source); /*0x74bb8f*/
    return 0; /*0x74bb82*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v4) + 36), Source) ) /*0x74bb69*/
  {
    if ( ++v4 >= *(_DWORD *)(a2 + 16) ) /*0x74bb71*/
      goto LABEL_6; /*0x74bb71*/
  }
  return *(VoxelAnimTypeClass **)(*(_DWORD *)(a2 + 4) + 4 * v4); /*0x74bb8c*/
}
}
} // namespace gamemd

// 0x74BBF0
namespace gamemd {
unsigned int * E4Recv_74BBF0::sub_74BBF0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_74BBF0(_DWORD *this, int a2)
{
  char *v3; // esi
  size_t v4; // eax
  void *v5; // eax
  int v6; // ecx
  int v7; // eax

  v3 = (char *)(this + 3); /*0x74bbff*/
  *(this + 4) = 0; /*0x74bc04*/
  *(this + 5) = 0; /*0x74bc07*/
  *((_BYTE *)this + 24) = 1; /*0x74bc0a*/
  *((_BYTE *)this + 25) = 0; /*0x74bc0e*/
  *(this + 3) = &vt_VectorClass_unsigned_char_7F65F4; /*0x74bc11*/
  *(this + 2) = -1; /*0x74bc17*/
  *((_BYTE *)this + 4) = *(_BYTE *)(a2 + 4); /*0x74bc21*/
  *(this + 2) = *(_DWORD *)(a2 + 8); /*0x74bc27*/
  if ( this + 3 == (_DWORD *)(a2 + 12) ) /*0x74bc2a*/
    goto LABEL_8; /*0x74bc2a*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)v3 + 12))(v3); /*0x74bc30*/
  v4 = *(_DWORD *)(a2 + 20); /*0x74bc33*/
  *((_DWORD *)v3 + 2) = v4; /*0x74bc38*/
  if ( !v4 ) /*0x74bc3b*/
  {
    *((_DWORD *)v3 + 1) = 0; /*0x74bc7f*/
    v3[13] = 0; /*0x74bc82*/
LABEL_8:
    *this = *(_DWORD *)a2; /*0x74bc85*/
    return this; /*0x74bc8d*/
  }
  v5 = __2_YAPAXI_Z(v4); /*0x74bc3e*/
  *((_DWORD *)v3 + 1) = v5; /*0x74bc48*/
  if ( !v5 ) /*0x74bc4b*/
    goto LABEL_8; /*0x74bc4b*/
  v6 = *((_DWORD *)v3 + 2); /*0x74bc4d*/
  v7 = 0; /*0x74bc50*/
  v3[13] = 1; /*0x74bc54*/
  if ( v6 <= 0 ) /*0x74bc58*/
    goto LABEL_8; /*0x74bc58*/
  do /*0x74bc6c*/
  {
    *(_BYTE *)(v7 + *((_DWORD *)v3 + 1)) = *(_BYTE *)(*(_DWORD *)(a2 + 16) + v7); /*0x74bc63*/
    ++v7; /*0x74bc69*/
  }
  while ( v7 < *((_DWORD *)v3 + 2) ); /*0x74bc6c*/
  *this = *(_DWORD *)a2; /*0x74bc74*/
  return this; /*0x74bc78*/
}
}
} // namespace gamemd

// 0x74BCA0
namespace gamemd {
unsigned int * E4Recv_74BCA0::sub_74BCA0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_74BCA0(_DWORD *this, int a2)
{
  int v3; // edx
  size_t v4; // eax
  void *v5; // eax
  int v6; // ecx
  int v7; // eax

  v3 = *(this + 2); /*0x74bca6*/
  if ( v3 != -1 ) /*0x74bcac*/
  {
    SetBitfieldBit(*(this + 4), v3, *((unsigned __int8 *)this + 4)); /*0x74bcb7*/
    *(this + 2) = -1; /*0x74bcbc*/
  }
  *((_BYTE *)this + 4) = *(_BYTE *)(a2 + 4); /*0x74bcd0*/
  *(this + 2) = *(_DWORD *)(a2 + 8); /*0x74bcd8*/
  if ( this + 3 == (_DWORD *)(a2 + 12) ) /*0x74bcdb*/
    goto LABEL_10; /*0x74bcdb*/
  (*(void (__thiscall **)(_DWORD *))(*(this + 3) + 12))(this + 3); /*0x74bce1*/
  v4 = *(_DWORD *)(a2 + 20); /*0x74bce4*/
  *(this + 5) = v4; /*0x74bce9*/
  if ( !v4 ) /*0x74bcec*/
  {
    *(this + 4) = 0; /*0x74bd2c*/
    *((_BYTE *)this + 25) = 0; /*0x74bd33*/
LABEL_10:
    *this = *(_DWORD *)a2; /*0x74bd37*/
    return this; /*0x74bd39*/
  }
  v5 = __2_YAPAXI_Z(v4); /*0x74bcef*/
  *(this + 4) = v5; /*0x74bcf7*/
  if ( !v5 ) /*0x74bcfc*/
    goto LABEL_10; /*0x74bcfc*/
  v6 = *(this + 5); /*0x74bcfe*/
  v7 = 0; /*0x74bd01*/
  *((_BYTE *)this + 25) = 1; /*0x74bd05*/
  if ( v6 <= 0 ) /*0x74bd09*/
    goto LABEL_10; /*0x74bd09*/
  do /*0x74bd1d*/
  {
    *(_BYTE *)(*(this + 4) + v7) = *(_BYTE *)(v7 + *(_DWORD *)(a2 + 16)); /*0x74bd14*/
    ++v7; /*0x74bd1a*/
  }
  while ( v7 < *(this + 5) ); /*0x74bd1d*/
  *this = *(_DWORD *)a2; /*0x74bd23*/
  return this; /*0x74bd25*/
}
}
} // namespace gamemd

// 0x74BDC0
namespace gamemd {
int E4Recv_74BDC0::sub_74BDC0(unsigned int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_74BDC0(unsigned int *this, unsigned int a2)
{
  int v3; // edx
  unsigned int v5; // edi
  unsigned __int8 v6; // al
  int v7; // edx
  int v8; // ebp
  int v10; // edx
  int v11; // edx
  int v12; // [esp+10h] [ebp+4h]

  v3 = *(this + 2); /*0x74bdc8*/
  if ( v3 != -1 ) /*0x74bdcd*/
  {
    SetBitfieldBit(*(this + 4), v3, *((unsigned __int8 *)this + 4)); /*0x74bdd8*/
    *(this + 2) = -1; /*0x74bddd*/
  }
  if ( a2 ) /*0x74bde6*/
  {
    v5 = *this; /*0x74bdeb*/
    v6 = (*(int (__thiscall **)(unsigned int *, unsigned int, _DWORD))(*(this + 3) + 8))(this + 3, (a2 + 7) >> 3, 0); /*0x74bdf9*/
    *this = a2; /*0x74be01*/
    v12 = v6; /*0x74be03*/
    if ( v6 && v5 < a2 ) /*0x74be0b*/
    {
      do /*0x74be53*/
      {
        v7 = *(this + 2); /*0x74be0e*/
        if ( v7 != v5 ) /*0x74be13*/
        {
          v8 = v5; /*0x74be17*/
          if ( v5 >= *this ) /*0x74be1b*/
            v8 = -1; /*0x74be1d*/
          if ( v8 != v7 ) /*0x74be22*/
          {
            if ( v7 != -1 ) /*0x74be27*/
              SetBitfieldBit(*(this + 4), v7, *((unsigned __int8 *)this + 4)); /*0x74be32*/
            if ( v8 != -1 ) /*0x74be3a*/
              *((_BYTE *)this + 4) = BitArray::TestBit(*(this + 4), v8); /*0x74be46*/
            *(this + 2) = v8; /*0x74be49*/
          }
        }
        ++v5; /*0x74be4c*/
        *((_BYTE *)this + 4) = 0; /*0x74be4d*/
      }
      while ( v5 < a2 ); /*0x74be53*/
    }
    return v12; /*0x74be56*/
  }
  else
  {
    v10 = *(this + 2); /*0x74be60*/
    if ( v10 != -1 ) /*0x74be65*/
    {
      SetBitfieldBit(*(this + 4), v10, *((unsigned __int8 *)this + 4)); /*0x74be70*/
      *(this + 2) = -1; /*0x74be75*/
    }
    v11 = *(this + 3); /*0x74be78*/
    *this = 0; /*0x74be7e*/
    (*(void (__thiscall **)(unsigned int *))(v11 + 12))(this + 3); /*0x74be84*/
    return 1; /*0x74be89*/
  }
}
}
} // namespace gamemd

// 0x74D760
namespace gamemd {
void CleanupVeinholeSystem()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void CleanupVeinholeSystem()
{
  int i; // esi
  int v1; // ecx

  for ( i = MEMORY[0xB1D2A0] - 1; i >= 0; --i ) /*0x74d76e*/
  {
    v1 = *((_DWORD *)MEMORY[0xB1D294] + i); /*0x74d776*/
    if ( v1 ) /*0x74d77b*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 32))(v1, 1); /*0x74d781*/
  }
  MEMORY[0xB1D2A0] = 0; /*0x74d78c*/
  if ( MEMORY[0xB1D294] && MEMORY[0xB1D29D] ) /*0x74d79c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB1D294]); /*0x74d79f*/
    MEMORY[0xB1D294] = 0; /*0x74d7a7*/
  }
  MEMORY[0xB1D29D] = 0; /*0x74d7ad*/
  MEMORY[0xB1D298] = 0; /*0x74d7b3*/
}
}
} // namespace gamemd

// 0x74DE90
namespace gamemd {
int InitializeVeinholeSystem(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall InitializeVeinholeSystem(char a1)
{
  size_t v2; // edi
  int i; // esi
  void *v4; // eax
  int v5; // ebp
  void *v6; // eax
  _DWORD *v7; // esi
  int VeinholeShrinkRate; // eax
  void *v9; // eax
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // eax
  int j; // ecx
  int k; // eax
  int m; // esi
  int v16; // ecx
  int result; // eax
  int n; // esi
  size_t v19; // [esp+10h] [ebp-8h]

  v2 = Object::ComputeAllocationSize(); /*0x74de9e*/
  v19 = v2; /*0x74dea2*/
  if ( !a1 ) /*0x74dea6*/
  {
LABEL_17:
    v4 = MEMORY[0xB1D2F0]; /*0x74dffd*/
    goto LABEL_18; /*0x74dffd*/
  }
  for ( i = MEMORY[0xB1D2A0] - 1; i >= 0; --i ) /*0x74deb8*/
    System_Init_74E8A0(*((_DWORD *)MEMORY[0xB1D294] + i)); /*0x74dec3*/
  v4 = MEMORY[0xB1D2F0]; /*0x74decb*/
  if ( MEMORY[0xB1D2F0] ) /*0x74ded2*/
  {
    __3_YAXPAX_Z(MEMORY[0xB1D2F0]); /*0x74ded5*/
    v4 = 0; /*0x74dedd*/
    MEMORY[0xB1D2F0] = 0; /*0x74dedf*/
  }
  v5 = MEMORY[0xB1D2A0] - 1; /*0x74deea*/
  if ( MEMORY[0xB1D2A0] - 1 >= 0 ) /*0x74deef*/
  {
    do /*0x74dff7*/
    {
      v6 = __2_YAPAXI_Z(8 * MEMORY[0x8871E0]->AircraftFogReveal); /*0x74df08*/
      if ( !v6 ) /*0x74df12*/
        v6 = 0; /*0x74df1b*/
      *(_DWORD *)(*((_DWORD *)MEMORY[0xB1D294] + v5) + 180) = v6; /*0x74df28*/
      v7 = __2_YAPAXI_Z(0x14u); /*0x74df33*/
      if ( v7 ) /*0x74df3a*/
      {
        VeinholeShrinkRate = MEMORY[0x8871E0]->AircraftFogReveal; /*0x74df42*/
        v7[3] = 0; /*0x74df48*/
        v7[1] = VeinholeShrinkRate; /*0x74df4b*/
        v7[4] = -1; /*0x74df4e*/
        *v7 = 0; /*0x74df5c*/
        v9 = __2_YAPAXI_Z(4 * VeinholeShrinkRate + 4); /*0x74df5f*/
        v10 = v7[1]; /*0x74df64*/
        v7[2] = v9; /*0x74df67*/
        v11 = 0; /*0x74df6d*/
        if ( v10 >= 0 ) /*0x74df71*/
        {
          do /*0x74df80*/
          {
            ++v11; /*0x74df76*/
            *(_DWORD *)(v7[2] + 4 * v11 - 4) = 0; /*0x74df77*/
          }
          while ( v11 <= v7[1] ); /*0x74df80*/
        }
      }
      else
      {
        v7 = 0; /*0x74df84*/
      }
      *(_DWORD *)(*((_DWORD *)MEMORY[0xB1D294] + v5) + 176) = v7; /*0x74df90*/
      *(_DWORD *)(*((_DWORD *)MEMORY[0xB1D294] + v5) + 196) = __2_YAPAXI_Z(v2); /*0x74dfa9*/
      memset(*(void **)(*((_DWORD *)MEMORY[0xB1D294] + v5) + 196), 0, v2); /*0x74dfc5*/
      v12 = *(_DWORD **)(*((_DWORD *)MEMORY[0xB1D294] + v5) + 176); /*0x74dfd6*/
      for ( j = 0; j <= *v12; *(_DWORD *)(v12[2] + 4 * j - 4) = 0 ) /*0x74dfe0*/
        ++j; /*0x74dfe5*/
      v2 = v19; /*0x74dff0*/
      --v5; /*0x74dff4*/
      *v12 = 0; /*0x74dff5*/
    }
    while ( v5 >= 0 ); /*0x74dff7*/
    goto LABEL_17; /*0x74dff7*/
  }
LABEL_18:
  if ( !v4 ) /*0x74e004*/
    MEMORY[0xB1D2F0] = __2_YAPAXI_Z(v2); /*0x74e00f*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x74e019*/
  for ( k = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); k; k = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x74e02f*/
    *(_DWORD *)(k + 320) &= ~0x8000u; /*0x74e03e*/
  memset(MEMORY[0xB1D2F0], 0, v2); /*0x74e05c*/
  for ( m = MEMORY[0xB1D2A0] - 1; m >= 0; --m ) /*0x74e06f*/
  {
    v16 = *((_DWORD *)MEMORY[0xB1D294] + m); /*0x74e077*/
    if ( *(_BYTE *)(v16 + 256) ) /*0x74e07a*/
      RulesClass::Reset(); /*0x74e084*/
    else
      ProcessVeinholeMonster(v16); /*0x74e08b*/
  }
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x74e098*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x74e0a2*/
  for ( n = result; result; n = result ) /*0x74e0ab*/
  {
    if ( *(_DWORD *)(n + 68) == 126 && !*((_BYTE *)MEMORY[0xB1D2F0] + Cell::PosToIndex((__int16 *)(n + 36))) ) /*0x74e0c5*/
      *(_DWORD *)(n + 68) = -1; /*0x74e0cb*/
    *(_DWORD *)(n + 320) &= ~0x8000u; /*0x74e0da*/
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x74e0e5*/
  }
  return result; /*0x74e0f0*/
}
}
} // namespace gamemd

// 0x74F3C0
namespace gamemd {
char _::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall _::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x74f3c2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x74f3cd*/
  {
    v3 = 0; /*0x74f3cf*/
    if ( v2 <= 0 ) /*0x74f3d3*/
      return 1; /*0x74f3f3*/
    v4 = (_DWORD *)*(this + 1); /*0x74f3d5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x74f3db*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x74f3e4*/
    {
      ++v3; /*0x74f3e6*/
      ++v4; /*0x74f3e7*/
      if ( v3 >= v2 ) /*0x74f3ec*/
        return 1; /*0x74f3ec*/
    }
  }
  return 0; /*0x74f3ee*/
}
}
} // namespace gamemd

// 0x74F400
namespace gamemd {
char _::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall _::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x74f40c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x74f416*/
    if ( a3 ) /*0x74f41c*/
      v4 = a3; /*0x74f432*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x74f42e*/
    *((_BYTE *)this + 12) = 1; /*0x74f436*/
    if ( v4 ) /*0x74f43a*/
    {
      if ( *((_DWORD *)this + 1) ) /*0x74f445*/
      {
        v6 = *((_DWORD *)this + 2); /*0x74f44c*/
        if ( a2 < v6 ) /*0x74f451*/
          v6 = a2; /*0x74f453*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x74f459*/
          ++i; /*0x74f45e*/
        if ( *((_BYTE *)this + 13) ) /*0x74f46b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x74f476*/
          *((_DWORD *)this + 1) = 0; /*0x74f47e*/
        }
      }
      *((_DWORD *)this + 1) = v4; /*0x74f487*/
      *((_DWORD *)this + 2) = a2; /*0x74f48f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x74f492*/
      return 1; /*0x74f498*/
    }
    else
    {
      return 0; /*0x74f43f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x74f4a2*/
    return 1; /*0x74f4a8*/
  }
}
}
} // namespace gamemd

// 0x74F4B0
namespace gamemd {
void _::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall _::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x74f4bd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x74f4c3*/
    *(_DWORD *)(this + 4) = 0; /*0x74f4cb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x74f4ce*/
  *(_DWORD *)(this + 8) = 0; /*0x74f4d1*/
}
}
} // namespace gamemd

// 0x74F4E0
namespace gamemd {
int _::Read(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall _::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x74f4e0*/
    return 0; /*0x74f4e8*/
  v3 = *(_DWORD *)(this + 8); /*0x74f4ee*/
  result = 0; /*0x74f4f1*/
  if ( v3 <= 0 ) /*0x74f4f5*/
    return -1; /*0x74f50c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x74f4fb*/
  {
    if ( ++result >= v3 ) /*0x74f50a*/
      return -1; /*0x74f50a*/
  }
  return result; /*0x74f4ea*/
}
}
} // namespace gamemd

// 0x74F520
namespace gamemd {
unsigned int _::Write(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall _::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x74f520*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x74f535*/
  else
    return 0; /*0x74f527*/
}
}
} // namespace gamemd

// 0x74FAE0
namespace gamemd {
char * E4Recv_74FAE0::sub_74FAE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_74FAE0(int this)
{
  int v2; // eax
  int v3; // eax
  unsigned __int16 v4; // bp
  int v5; // eax
  unsigned __int16 v6; // ax
  char *v7; // esi
  _BYTE v9[36]; // [esp+10h] [ebp-24h] BYREF

  if ( ((unsigned char)this->M68 & 8) == 0 ) /*0x74faef*/
  {
    RawFileClass::Construct(MEMORY[0x84635C]); /*0x74fafa*/
    if ( (unsigned __int8)FileClass::Open(0) ) /*0x74fb04*/
    {
      FileClass::Read((LPVOID)(this + 42), 0x10u); /*0x74fb17*/
      for ( *(_BYTE *)(this + 57) = 0; /*0x74fb30*/
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) == 13;
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) = 0 )
      {
        ; /*0x74fb40*/
      }
    }
    else
    {
      *(_BYTE *)(this + 42) = 0; /*0x74fb55*/
    }
    RawFileClass::Dtor(v9); /*0x74fb5c*/
    v2 = this->M68; /*0x74fb61*/
    LOBYTE(v2) = v2 | 8; /*0x74fb64*/
    this->M68 = v2; /*0x74fb66*/
  }
  v3 = this->M68; /*0x74fb69*/
  if ( (v3 & 4) != 0 ) /*0x74fb6e*/
  {
    v4 = (unsigned short)this->M10; /*0x74fb70*/
  }
  else
  {
    v4 = 1; /*0x74fb76*/
    LOBYTE(v3) = v3 | 4; /*0x74fb7b*/
    *(_WORD *)(this + 10) = 1; /*0x74fb7d*/
    this->M68 = v3; /*0x74fb81*/
  }
  if ( (MEMORY[0xA8ED24] & 8) == 0 ) /*0x74fb8b*/
  {
    RawFileClass::Construct(MEMORY[0x84635C]); /*0x74fb9a*/
    if ( (unsigned __int8)FileClass::Open(0) ) /*0x74fba4*/
    {
      FileClass::Read(&MEMORY[0xA8ED0A], 0x10u); /*0x74fbb8*/
      for ( MEMORY[0xA8ED19] = 0; /*0x74fbd9*/
            MEMORY[0xA8ED09][strlen(&MEMORY[0xA8ED0A])] == 13;
            MEMORY[0xA8ED08][strlen(&MEMORY[0xA8ED0A]) + 1] = 0 )
      {
        ; /*0x74fbee*/
      }
    }
    else
    {
      MEMORY[0xA8ED0A] = 0; /*0x74fc07*/
    }
    RawFileClass::Dtor(v9); /*0x74fc11*/
    v5 = MEMORY[0xA8ED24]; /*0x74fc16*/
    LOBYTE(v5) = MEMORY[0xA8ED24] | 8; /*0x74fc1b*/
    MEMORY[0xA8ED24] = v5; /*0x74fc1d*/
  }
  if ( (MEMORY[0xA8ED24] & 2) != 0 ) /*0x74fc2f*/
  {
    v6 = MEMORY[0xA8ECE8]; /*0x74fc31*/
  }
  else
  {
    LOWORD(MEMORY[0xA8ECE8]) = 1; /*0x74fc3e*/
    v6 = 1; /*0x74fc49*/
    MEMORY[0xA8ED24] |= 2u; /*0x74fc4e*/
  }
  v7 = (char *)(this + 12); /*0x74fc60*/
  sprintf(v7, MEMORY[0x846368], v6, v4); /*0x74fc6a*/
  return v7; /*0x74fc74*/
}
}
} // namespace gamemd

// 0x74FF30
namespace gamemd {
int unknown_libname_35()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_35(_DWORD *this)
{
  *this = 0; /*0x74ff32*/
  return this; /*0x74ff38*/
}
}
} // namespace gamemd

// 0x746EE0
namespace gamemd {
void sub_746EE0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B1D0E0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x746F10
namespace gamemd {
void sub_746F10()
{
{
    DataGlobal_B1D130 = DataGlobal_B1D0E0 / 60.0;
}
}
} // namespace gamemd

// 0x746F30
namespace gamemd {
void sub_746F30()
{
{
    DataGlobal_B1D118 = 1.0 / DataGlobal_B1D130;
}
}
} // namespace gamemd

// 0x746F50
namespace gamemd {
void sub_746F50()
{
{
    DataGlobal_B1D110 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x746F70
namespace gamemd {
void sub_746F70()
{
{
    DataGlobal_B1D0E8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x746F90
namespace gamemd {
void sub_746F90()
{
{
    DataGlobal_B1D0C0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x746FB0
namespace gamemd {
long long sub_746FB0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B1D0C0 - DataGlobal_B1D0E8);
    result = Math::RoundToInt(v0 * DataGlobal_B1D0E0 * 0.5);
    DataGlobal_B1D138 = result;
    return result;
}
}
} // namespace gamemd

// 0x746FF0
namespace gamemd {
void sub_746FF0()
{
{
    DataGlobal_B1D0F0 = Math::ArcTan((double)DataGlobal_B1D138 * 0.00390625);
}
}
} // namespace gamemd

// 0x747020
namespace gamemd {
void sub_747020()
{
{
    DataGlobal_B1D108 = Math::ArcTan((double)(2 * DataGlobal_B1D138) / DataGlobal_B1D0E0);
}
}
} // namespace gamemd

// 0x747050
namespace gamemd {
long long sub_747050()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B1D138) + 0.5);
    DataGlobal_B1D12C = result;
    return result;
}
}
} // namespace gamemd

// 0x747080
namespace gamemd {
int sub_747080()
{
{
    DataGlobal_B1D0D8 = 0;
    DataGlobal_B1D0DA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x747090
namespace gamemd {
int sub_747090()
{
{
    DataGlobal_B1D0F8 = 0;
    DataGlobal_B1D0FC = 0;
    DataGlobal_B1D100 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7470B0
namespace gamemd {
int sub_7470B0()
{
{
    DataGlobal_B1D128 = 0;
    DataGlobal_B1D120 = 128;
    DataGlobal_B1D124 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x7473C0
namespace gamemd {
int UnitTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19_0()
{
    char __thiscall UnitTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19_0(std::codecvt_base *(void**)this)
{
    return AbstractClass::processWeaponFire(this);
}
}
} // namespace gamemd

// 0x7473E0
namespace gamemd {
int sub_7473E0()
{
{
    int *v0;
    int v1;
    int *v2;
    int result;
    if ( !DataGlobal_B1D13C )
  {
    v0 = __2_YAPAXI_Z(0x20u);
    if ( v0 )
    {
    v0[1] = 256;
    v0[2] = 256;
    v0[3] = 0;
    *v0 = &XSurface_Vtable;
    v0[4] = 1;
    Buffer::Init(v0 + 5, 0, 0x10000);
    *v0 = &BSurface_Vtable;
    v1 = (int)v0;
    }
    else
    {
    v1 = 0;
    }
    DataGlobal_B1D13C = v1;
    (*(void (__thiscall **)(int, int))(*(int *)(v1) + 24))(v1, 0);
  }
    if ( !DataGlobal_B1D140 )
  {
    v2 = __2_YAPAXI_Z(0x188u);
    if ( v2 )
    DataGlobal_B1D140 = (int)ConvertClass::Construct(v2, (int)&FileSystem_TEMPERAT_PAL, (int)&FileSystem_TEMPERAT_PAL, DataGlobal_B1D13C, 1, 0);
    else
    DataGlobal_B1D140 = 0;
  }
    DataGlobal_B1D144 = SearchMIXFile(DataGlobal_8459AC, 0);
    result = SearchMIXFile(DataGlobal_84599C, 0);
    DataGlobal_B1D148 = result;
    return result;
}
}
} // namespace gamemd

// 0x747600
namespace gamemd {
unsigned int * sub_747600(unsigned int * a1, int a2, unsigned int * a3)
{
{
    *a1 = *a3;
    *((int*)(a1) + 1) = *((int*)(a3) + 1);
    return a1;
}
}
} // namespace gamemd

// 0x748380
namespace gamemd {
int sub_748380(unsigned short * a1, int a2)
{
{
    int result;
    unsigned short v3;
    result = a2;
    if ( a2 > 0 )
  {
    do
    {
    v3 = *a1++;
    --result;
    *(a1 - 1) = *((short *)(DataGlobal_B1D14C) + v3);
    }
    while ( result );
  }
    return result;
}
}
} // namespace gamemd

// 0x749010
namespace gamemd {
void nullsub_143()
{
  ;
}
} // namespace gamemd

// 0x7490A0
namespace gamemd {
int Array_Sum(int * a1)
{
{
    int v1;
    int result;
    int v3;
    v1 = *((int*)(a1) + 512);
    result = 0;
    if ( v1 > 0 )
  {
    do
    {
    v3 = *a1++;
    result += v3;
    --v1;
    }
    while ( v1 );
  }
    return result;
}
}
} // namespace gamemd

// 0x7490C0
namespace gamemd {
Iostream_init * E4Recv_7490C0::__0Iostream_init_QAE_XZ_7()
{
{
    return this;
}
}
} // namespace gamemd

// 0x7491A0
namespace gamemd {
void sub_7491A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B1D170 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x7491D0
namespace gamemd {
void sub_7491D0()
{
{
    DataGlobal_B1D1C0 = DataGlobal_B1D170 / 60.0;
}
}
} // namespace gamemd

// 0x7491F0
namespace gamemd {
void sub_7491F0()
{
{
    DataGlobal_B1D1A8 = 1.0 / DataGlobal_B1D1C0;
}
}
} // namespace gamemd

// 0x749210
namespace gamemd {
void sub_749210()
{
{
    DataGlobal_B1D1A0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x749230
namespace gamemd {
void sub_749230()
{
{
    DataGlobal_B1D178 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x749250
namespace gamemd {
void sub_749250()
{
{
    DataGlobal_B1D150 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x749270
namespace gamemd {
long long sub_749270()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B1D150 - DataGlobal_B1D178);
    result = Math::RoundToInt(v0 * DataGlobal_B1D170 * 0.5);
    DataGlobal_B1D1C8 = result;
    return result;
}
}
} // namespace gamemd

// 0x7492E0
namespace gamemd {
void sub_7492E0()
{
{
    DataGlobal_B1D198 = Math::ArcTan((double)(2 * DataGlobal_B1D1C8) / DataGlobal_B1D170);
}
}
} // namespace gamemd

// 0x749310
namespace gamemd {
long long sub_749310()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B1D1C8) + 0.5);
    DataGlobal_B1D1BC = result;
    return result;
}
}
} // namespace gamemd

// 0x749340
namespace gamemd {
int sub_749340()
{
{
    DataGlobal_B1D168 = 0;
    DataGlobal_B1D16A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x749350
namespace gamemd {
int sub_749350()
{
{
    DataGlobal_B1D188 = 0;
    DataGlobal_B1D18C = 0;
    DataGlobal_B1D190 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x749370
namespace gamemd {
int sub_749370()
{
{
    DataGlobal_B1D1B8 = 0;
    DataGlobal_B1D1B0 = 128;
    DataGlobal_B1D1B4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x749390
namespace gamemd {
int sub_749390()
{
{
    DataGlobal_B1D158 = 0;
    DataGlobal_B1D15C = 0;
    DataGlobal_B1D160 = 0;
    DataGlobal_B1D164 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x74AB70
namespace gamemd {
void sub_74AB70()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B1D1F0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x74ABA0
namespace gamemd {
void sub_74ABA0()
{
{
    DataGlobal_B1D240 = DataGlobal_B1D1F0 / 60.0;
}
}
} // namespace gamemd

// 0x74ABC0
namespace gamemd {
void sub_74ABC0()
{
{
    DataGlobal_B1D228 = 1.0 / DataGlobal_B1D240;
}
}
} // namespace gamemd

// 0x74ABE0
namespace gamemd {
void sub_74ABE0()
{
{
    DataGlobal_B1D220 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x74AC00
namespace gamemd {
void sub_74AC00()
{
{
    DataGlobal_B1D1F8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x74AC20
namespace gamemd {
void sub_74AC20()
{
{
    DataGlobal_B1D1D0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x74AC40
namespace gamemd {
long long sub_74AC40()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B1D1D0 - DataGlobal_B1D1F8);
    result = Math::RoundToInt(v0 * DataGlobal_B1D1F0 * 0.5);
    DataGlobal_B1D248 = result;
    return result;
}
}
} // namespace gamemd

// 0x74AC80
namespace gamemd {
void sub_74AC80()
{
{
    DataGlobal_B1D200 = Math::ArcTan((double)DataGlobal_B1D248 * 0.00390625);
}
}
} // namespace gamemd

// 0x74ACB0
namespace gamemd {
void sub_74ACB0()
{
{
    DataGlobal_B1D218 = Math::ArcTan((double)(2 * DataGlobal_B1D248) / DataGlobal_B1D1F0);
}
}
} // namespace gamemd

// 0x74ACE0
namespace gamemd {
long long sub_74ACE0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B1D248) + 0.5);
    DataGlobal_B1D23C = result;
    return result;
}
}
} // namespace gamemd

// 0x74AD10
namespace gamemd {
int sub_74AD10()
{
{
    DataGlobal_B1D1E8 = 0;
    DataGlobal_B1D1EA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x74AD20
namespace gamemd {
int sub_74AD20()
{
{
    DataGlobal_B1D208 = 0;
    DataGlobal_B1D20C = 0;
    DataGlobal_B1D210 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x74AD40
namespace gamemd {
int sub_74AD40()
{
{
    DataGlobal_B1D238 = 0;
    DataGlobal_B1D230 = 128;
    DataGlobal_B1D234 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x74AD60
namespace gamemd {
int sub_74AD60()
{
{
    DataGlobal_B1D1D8 = 0;
    DataGlobal_B1D1DC = 0;
    DataGlobal_B1D1E0 = 0;
    DataGlobal_B1D1E4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x74BBA0
namespace gamemd {
char * E4Recv_74BBA0::sub_74BBA0(int a2, int a3)
{
{
    char *v4;
    *(int *)this = a2;
    v4 = this + 12;
    this->M4 = 0;
    this->M8 = -1;
    *((int *)(v4) + 1) = 0;
    *((int *)(v4) + 2) = 0;
    v4[12] = 1;
    v4[13] = 0;
    *(int *)v4 = &vt_VectorClass_unsigned_char_7F65F4;
    (*(void (__thiscall **)(char *, unsigned int, int))(*(int *)(v4) + 8))(v4, (unsigned int)(a2 + 7) >> 3, a3);
    return this;
}
}
} // namespace gamemd

// 0x74BF40
namespace gamemd {
void E4Recv_74BF40::sub_74BF40(unsigned int a2)
{
{
    int v3;
    int v4;
    v3 = a2;
    if ( a2 >= *(void**)this )
    v3 = -1;
    v4 = this->M8;
    if ( v3 != v4 )
  {
    if ( v4 != -1 )
    SetBitfieldBit(this->M16, v4, this->M4);
    if ( v3 != -1 )
    this->M4 = BitArray::TestBit(this->M16, v3);
    this->M8 = v3;
  }
}
}
} // namespace gamemd

// 0x74C170
namespace gamemd {
int sub_74C170()
{
{
    DataGlobal_B1D260 = 0;
    DataGlobal_B1D264 = 0;
    DataGlobal_B1D268 = 0;
    DataGlobal_B1D26C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x74C190
namespace gamemd {
void sub_74C190()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B1D278 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x74C1C0
namespace gamemd {
void sub_74C1C0()
{
{
    DataGlobal_B1D2E0 = DataGlobal_B1D278 / 60.0;
}
}
} // namespace gamemd

// 0x74C1E0
namespace gamemd {
void sub_74C1E0()
{
{
    DataGlobal_B1D2C8 = 1.0 / DataGlobal_B1D2E0;
}
}
} // namespace gamemd

// 0x74C200
namespace gamemd {
void sub_74C200()
{
{
    DataGlobal_B1D2C0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x74C220
namespace gamemd {
void sub_74C220()
{
{
    DataGlobal_B1D280 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x74C240
namespace gamemd {
void sub_74C240()
{
{
    DataGlobal_B1D258 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x74C260
namespace gamemd {
long long sub_74C260()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B1D258 - DataGlobal_B1D280);
    result = Math::RoundToInt(v0 * DataGlobal_B1D278 * 0.5);
    DataGlobal_B1D2E8 = result;
    return result;
}
}
} // namespace gamemd

// 0x74C2A0
namespace gamemd {
void sub_74C2A0()
{
{
    DataGlobal_B1D288 = Math::ArcTan((double)DataGlobal_B1D2E8 * 0.00390625);
}
}
} // namespace gamemd

// 0x74C2D0
namespace gamemd {
void sub_74C2D0()
{
{
    DataGlobal_B1D2B8 = Math::ArcTan((double)(2 * DataGlobal_B1D2E8) / DataGlobal_B1D278);
}
}
} // namespace gamemd

// 0x74C300
namespace gamemd {
long long sub_74C300()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B1D2E8) + 0.5);
    DataGlobal_B1D2DC = result;
    return result;
}
}
} // namespace gamemd

// 0x74C330
namespace gamemd {
int sub_74C330()
{
{
    DataGlobal_B1D270 = 0;
    DataGlobal_B1D272 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x74C340
namespace gamemd {
int sub_74C340()
{
{
    DataGlobal_B1D2A8 = 0;
    DataGlobal_B1D2AC = 0;
    DataGlobal_B1D2B0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x74C360
namespace gamemd {
int sub_74C360()
{
{
    DataGlobal_B1D2D8 = 0;
    DataGlobal_B1D2D0 = 128;
    DataGlobal_B1D2D4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x74C380
namespace gamemd {
int sub_74C380()
{
{
    g_VoxelDrawState = 0;
    DataGlobal_B1D298 = 0;
    DataGlobal_B1D29C = 1;
    DataGlobal_B1D29D = 0;
    DataGlobal_B1D290 = (int)&DataGlobal_7F663C;
    DataGlobal_B1D2A4 = 10;
    g_VeinholePool = 0;
    return atexit(sub_74C3C0);
}
}
} // namespace gamemd

// 0x74C3C0
namespace gamemd {
void sub_74C3C0()
{
{
    if ( (DataGlobal_B1D250 & 1) == 0 )
  {
    DataGlobal_B1D290 = (int)&vt_VectorClass_VeinholeMonsterClass;
    DataGlobal_B1D250 |= 1u;
    if ( g_VoxelDrawState )
    {
    if ( DataGlobal_B1D29D )
      {
    __3_YAXPAX_Z(g_VoxelDrawState);
    g_VoxelDrawState = 0;
      }
    }
    DataGlobal_B1D29D = 0;
    DataGlobal_B1D298 = 0;
  }
}
}
} // namespace gamemd

// 0x74F3B0
namespace gamemd {
int _::Seek(int a2)
{
{
    return *(int *)(*(this + 1) + 4 * a2);
}
}
} // namespace gamemd

// 0x74F63A
namespace gamemd {
void E4Recv_74F63A::__Release__NonReentrantLock_details_Concurrency__QAEXXZ_0()
{
{
    *(int *)this = 0;
}
}
} // namespace gamemd

// 0x74F650
namespace gamemd {
VectorClass * _::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_VeinholeMonsterClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x74F730
namespace gamemd {
unsigned int * E4Recv_74F730::sub_74F730()
{
{
    int v2;
    v2 = this->M68;
    *(int *)&this->__pad_0[4] = 0;
    *(short *)&this->__pad_0[8] = 0;
    *(short *)&this->__pad_0[10] = 0;
    this->field_3C = 0;
    this->M64 = 0;
    this->M68 = v2 & 0xFFFFFFF0;
    *(int *)this->__pad_0 = &vt_VersionClass;
    this->__pad_0[42] = 0;
    this->__pad_0[12] = 0;
    return this->__pad_0;
}
}
} // namespace gamemd

// 0x74FDC0
namespace gamemd {
char * sub_74FDC0()
{
{
    signed int FileVersionInfoSizeA;
    DWORD v1;
    void *v2;
    unsigned int puLen;
    LPVOID lpBuffer;
    DWORD dwHandle;
    CHAR SubBlock[128];
    CHAR Filename[260];
    if ( !DataGlobal_846358 )
    return DataGlobal_846158;
    DataGlobal_846358 = 0;
    if ( !GetModuleFileNameA(g_hInstance, Filename, 0x104u) )
    return DataGlobal_846158;
    dwHandle = 1;
    FileVersionInfoSizeA = GetFileVersionInfoSizeA(Filename, &dwHandle);
    v1 = FileVersionInfoSizeA;
    if ( FileVersionInfoSizeA <= 0 )
    return DataGlobal_846158;
    v2 = __2_YAPAXI_Z(FileVersionInfoSizeA);
    if ( GetFileVersionInfoA(Filename, dwHandle, v1, v2) )
  {
    VerQueryValueA(v2, SubBlock, &lpBuffer, &puLen);
    if ( puLen )
    {
    sprintf(SubBlock, DataGlobal_846374, *(unsigned short *)lpBuffer, *((unsigned short *)(lpBuffer) + 1));
    VerQueryValueA(v2, SubBlock, &lpBuffer, &puLen);
    if ( puLen )
    strcpy(DataGlobal_846158, (const char *)lpBuffer);
    }
  }
    __3_YAXPAX_Z(v2);
    return DataGlobal_846158;
}
}
} // namespace gamemd

// 0x74FF40
namespace gamemd {
void nullsub_69()
{
  ;
}
} // namespace gamemd
