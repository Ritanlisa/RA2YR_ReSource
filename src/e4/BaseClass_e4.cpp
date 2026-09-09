// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x42EE30
namespace gamemd {
int BaseClass::LoadBaseNodeClass(VectorClass * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall BaseClass::LoadBaseNodeClass(VectorClass *aP0, int a2)
{
  int v2; // edi
  int v3; // ecx
  int v4; // ebp
  void *v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ebp
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // ebp
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v21; // [esp+88h] [ebp-14h] BYREF
  _DWORD v22[4]; // [esp+8Ch] [ebp-10h] BYREF

  v2 = a2; /*0x42ee3a*/
  if ( (*(int (__stdcall **)(int, VectorClass *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, aP0, 120, 0) >= 0 ) /*0x42ee4b*/
  {
    if ( aP0 ) /*0x42ee53*/
    {
      BaseNodeClass::Vector_Constructor(&aP0->field_1[3], 0, 0); /*0x42ee5e*/
      *(_DWORD *)&aP0->field_1[3] = &DynamicVectorClass<BaseNodeClass>::`vftable'; /*0x42ee6a*/
      *(_DWORD *)aP0->__pad_18 = 10; /*0x42ee70*/
      aP0->field_14 = 0; /*0x42ee77*/
      DynamicVector::Constructor_Cell(&aP0->__pad_18[8], 0, 0); /*0x42ee7e*/
      DynamicVector::Constructor_Cell(&aP0->__pad_34[4], 0, 0); /*0x42ee8a*/
      *(_DWORD *)aP0->__pad_0 = &BaseClass::`vftable'; /*0x42ee8f*/
    }
    v3 = *(_DWORD *)v2; /*0x42ee96*/
    a2 = 0; /*0x42eea2*/
    if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v3 + 12))(v2, &a2, 4, 0) >= 0 ) /*0x42eeaf*/
    {
      v4 = 0; /*0x42eeb9*/
      if ( a2 <= 0 ) /*0x42eebd*/
      {
LABEL_14:
        if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0) >= 0 ) /*0x42ef4f*/
        {
          v10 = 0; /*0x42ef59*/
          if ( a2 <= 0 ) /*0x42ef5d*/
          {
LABEL_24:
            if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0) >= 0 ) /*0x42efd6*/
            {
              v15 = 0; /*0x42efdc*/
              if ( a2 <= 0 ) /*0x42efe0*/
              {
LABEL_34:
                ObjectPtr::RegisterForTracking( /*0x42f044*/
                  (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
                  (MouseClass *)&aP0->__pad_4C[40]);
              }
              else
              {
                while ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v21, 4, 0) >= 0 ) /*0x42eff3*/
                {
                  v16 = *(_DWORD *)&aP0->__pad_34[12]; /*0x42eff9*/
                  if ( aP0->field_48 < v16 /*0x42f021*/
                    || (aP0->__pad_34[17] || !v16)
                    && (v17 = *(_DWORD *)aP0->__pad_4C, v17 > 0)
                    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&aP0->__pad_34[4] + 8))(
                         &aP0->__pad_34[4],
                         v16 + v17,
                         0) )
                  {
                    v18 = aP0->field_48; /*0x42f028*/
                    v19 = *(_DWORD *)&aP0->__pad_34[8]; /*0x42f02b*/
                    aP0->field_48 = v18 + 1; /*0x42f031*/
                    *(_DWORD *)(v19 + 4 * v18) = v21; /*0x42f038*/
                  }
                  if ( ++v15 >= a2 ) /*0x42f042*/
                    goto LABEL_34; /*0x42f042*/
                }
              }
            }
          }
          else
          {
            while ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v21, 4, 0) >= 0 ) /*0x42ef70*/
            {
              v11 = aP0->field_28; /*0x42ef7a*/
              if ( aP0->field_30 < v11 /*0x42efa2*/
                || (aP0->__pad_2C[1] || !v11)
                && (v12 = *(_DWORD *)aP0->__pad_34, v12 > 0)
                && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&aP0->__pad_18[8] + 8))(
                     &aP0->__pad_18[8],
                     v11 + v12,
                     0) )
              {
                v13 = aP0->field_30; /*0x42efa9*/
                v14 = *(_DWORD *)&aP0->__pad_18[12]; /*0x42efac*/
                aP0->field_30 = v13 + 1; /*0x42efb2*/
                *(_DWORD *)(v14 + 4 * v13) = v21; /*0x42efb9*/
              }
              if ( ++v10 >= a2 ) /*0x42efc3*/
                goto LABEL_24; /*0x42efc3*/
            }
          }
        }
      }
      else
      {
        while ( (*(int (__stdcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, v22, 16, 0) >= 0 ) /*0x42eed0*/
        {
          v5 = aP0->field_C; /*0x42eeda*/
          if ( aP0->field_14 < (int)v5 /*0x42ef02*/
            || (BYTE1(aP0->field_10) || !v5)
            && (v6 = *(_DWORD *)aP0->__pad_18, v6 > 0)
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&aP0->field_1[3] + 8))(
                 &aP0->field_1[3],
                 (int)v5 + v6,
                 0) )
          {
            v7 = aP0->field_14; /*0x42ef09*/
            v8 = v22[0]; /*0x42ef0c*/
            aP0->field_14 = v7 + 1; /*0x42ef13*/
            v9 = (char *)aP0->field_8 + 16 * v7; /*0x42ef1c*/
            *v9 = v8; /*0x42ef1e*/
            v9[1] = v22[1]; /*0x42ef24*/
            v9[2] = v22[2]; /*0x42ef2b*/
            v9[3] = v22[3]; /*0x42ef32*/
          }
          if ( ++v4 >= a2 ) /*0x42ef3c*/
            goto LABEL_14; /*0x42ef3c*/
        }
      }
    }
  }
  return 0; /*0x42f056*/
}
}
} // namespace gamemd

// 0x42F070
namespace gamemd {
int BaseClass::LoadArrayFields(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall BaseClass::sub_42F070(_DWORD *a1, int a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // ebp
  int v5; // ebx
  int v6; // ecx
  int v7; // ebx
  int v8; // ecx
  int result; // eax
  int v10; // ebx

  v2 = a2; /*0x42f073*/
  if ( (*(int (__stdcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, a1, 120, 0) >= 0 ) /*0x42f089*/
  {
    v3 = *(_DWORD *)v2; /*0x42f092*/
    a2 = a1[5]; /*0x42f09e*/
    if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v3 + 16))(v2, &a2, 4, 0) >= 0 ) /*0x42f0a7*/
    {
      v4 = 0; /*0x42f0b1*/
      if ( a2 <= 0 ) /*0x42f0b5*/
      {
LABEL_7:
        v6 = *(_DWORD *)v2; /*0x42f0dd*/
        a2 = a1[12]; /*0x42f0ec*/
        if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v6 + 16))(v2, &a2, 4, 0) >= 0 ) /*0x42f0f5*/
        {
          v7 = 0; /*0x42f0fb*/
          if ( a2 <= 0 ) /*0x42f0ff*/
          {
LABEL_11:
            v8 = *(_DWORD *)v2; /*0x42f11f*/
            a2 = a1[18]; /*0x42f12e*/
            result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v8 + 16))(v2, &a2, 4, 0); /*0x42f132*/
            if ( result >= 0 ) /*0x42f137*/
            {
              v10 = 0; /*0x42f13d*/
              if ( a2 <= 0 ) /*0x42f141*/
                return result; /*0x42f141*/
              while ( 1 ) /*0x42f151*/
              {
                result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, a1[15] + 4 * v10, 4, 0); /*0x42f151*/
                if ( result < 0 ) /*0x42f156*/
                  break; /*0x42f156*/
                if ( ++v10 >= a2 ) /*0x42f15f*/
                  return result; /*0x42f15f*/
              }
            }
          }
          else
          {
            while ( (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, a1[9] + 4 * v7, 4, 0) >= 0 ) /*0x42f114*/
            {
              if ( ++v7 >= a2 ) /*0x42f11d*/
                goto LABEL_11; /*0x42f11d*/
            }
          }
        }
      }
      else
      {
        v5 = 0; /*0x42f0b7*/
        while ( (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, v5 + a1[2], 16, 0) >= 0 ) /*0x42f0cb*/
        {
          ++v4; /*0x42f0d5*/
          v5 += 16; /*0x42f0d6*/
          if ( v4 >= a2 ) /*0x42f0db*/
            goto LABEL_7; /*0x42f0db*/
        }
      }
    }
  }
  return 0; /*0x42f161*/
}
}
} // namespace gamemd
