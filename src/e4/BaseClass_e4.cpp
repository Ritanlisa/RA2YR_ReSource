// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"

// 0x42EE30
namespace gamemd {
int BaseClass::LoadBaseNodeClass(VectorClass * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v2 = a2; /*0x42ee3a*/
  if ( (*(int (__stdcall **)(int, VectorClass *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, aP0, 120, 0) >= 0 ) /*0x42ee4b*/
  {
    if ( aP0 ) /*0x42ee53*/
    {
      BaseNodeClass::Vector_Constructor(&aP0->Items, 0, 0); /*0x42ee5e*/
      aP0->Items = &vt_DynamicVectorClass_BaseNodeClass; /*0x42ee6a*/
      aP0[1].Capacity = 10; /*0x42ee70*/
      aP0[1].Items = 0; /*0x42ee77*/
      DynamicVector::Constructor_Cell(&aP0[2].vtable0, 0, 0); /*0x42ee7e*/
      DynamicVector::Constructor_Cell(&aP0[3].Capacity, 0, 0); /*0x42ee8a*/
      aP0->vtable0 = &vt_BaseClass; /*0x42ee8f*/
    }
    int v3 = *(_DWORD *)v2; /*0x42ee96*/
    a2 = 0; /*0x42eea2*/
    if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v3 + 12))(v2, &a2, 4, 0) >= 0 ) /*0x42eeaf*/
    {
      int v4 = 0; /*0x42eeb9*/
      if ( a2 <= 0 ) /*0x42eebd*/
      {
LABEL_14:
        if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0) >= 0 ) /*0x42ef4f*/
        {
  int v21; // [esp+88h] [ebp-14h] BYREF
          int v10 = 0; /*0x42ef59*/
          if ( a2 <= 0 ) /*0x42ef5d*/
          {
LABEL_24:
            if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0) >= 0 ) /*0x42efd6*/
            {
              int v15 = 0; /*0x42efdc*/
              if ( a2 <= 0 ) /*0x42efe0*/
              {
LABEL_34:
                ObjectPtr::RegisterForTracking( /*0x42f044*/
                  (SwizzleManagerClass *)&stru_B05488[27784],
                  (MouseClass *)&aP0[7].Items);
              }
              else
              {
                while ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v21, 4, 0) >= 0 ) /*0x42eff3*/
                {
                  int v16 = (int)aP0[4].vtable0; /*0x42eff9*/
                  if ( aP0[4].Capacity < v16 /*0x42f021*/
                    || (BYTE1(aP0[4].Items) || !v16)
  int v17; // eax
                    && (v17 = *(_DWORD *)&aP0[4].IsInitialized, v17 > 0)
                    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(aP0[3].Capacity + 8))(
                         &aP0[3].Capacity,
                         v16 + v17,
                         0) )
                  {
                    int v18 = aP0[4].Capacity; /*0x42f028*/
                    int v19 = *(_DWORD *)&aP0[3].IsInitialized; /*0x42f02b*/
                    aP0[4].Capacity = v18 + 1; /*0x42f031*/
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
              int v11 = aP0[2].Capacity; /*0x42ef7a*/
              if ( (int)aP0[3].vtable0 < v11 /*0x42efa2*/
                || (aP0[2].IsAllocated || !v11)
  int v12; // eax
                && (v12 = (int)aP0[3].Items, v12 > 0)
                && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))aP0[2].vtable0 + 2))(
                     aP0 + 2,
                     v11 + v12,
                     0) )
              {
                int v13 = (int)aP0[3].vtable0; /*0x42efa9*/
                _DWORD * v14 = aP0[2].Items; /*0x42efac*/
                aP0[3].vtable0 = (void *)(v13 + 1); /*0x42efb2*/
                v14[v13] = v21; /*0x42efb9*/
              }
              if ( ++v10 >= a2 ) /*0x42efc3*/
                goto LABEL_24; /*0x42efc3*/
            }
          }
        }
      }
      else
      {
  _DWORD v22[4]; // [esp+8Ch] [ebp-10h] BYREF
        while ( (*(int (__stdcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, v22, 16, 0) >= 0 ) /*0x42eed0*/
        {
          char * v5 = *(char **)&aP0->IsInitialized; /*0x42eeda*/
          if ( (int)aP0[1].Items < (int)v5 /*0x42ef02*/
            || (BYTE1(aP0[1].vtable0) || !v5)
  int v6; // eax
            && (v6 = aP0[1].Capacity, v6 > 0)
            && (*((unsigned __int8 (__thiscall **)(void **, char *, _DWORD))aP0->Items + 2))(&aP0->Items, &v5[v6], 0) )
          {
            int v7 = (int)aP0[1].Items; /*0x42ef09*/
            int v8 = v22[0]; /*0x42ef0c*/
            aP0[1].Items = (void *)(v7 + 1); /*0x42ef13*/
            _DWORD * v9 = (_DWORD *)(aP0->Capacity + 16 * v7); /*0x42ef1c*/
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
{
  int result; // eax

  int v2 = a2; /*0x42f073*/
  if ( (*(int (__stdcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)a2 + 16))(a2, a1, 120, 0) >= 0 ) /*0x42f089*/
  {
    int v3 = *(_DWORD *)v2; /*0x42f092*/
    a2 = a1[5]; /*0x42f09e*/
    if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v3 + 16))(v2, &a2, 4, 0) >= 0 ) /*0x42f0a7*/
    {
      int v4 = 0; /*0x42f0b1*/
      if ( a2 <= 0 ) /*0x42f0b5*/
      {
LABEL_7:
        int v6 = *(_DWORD *)v2; /*0x42f0dd*/
        a2 = a1[12]; /*0x42f0ec*/
        if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v6 + 16))(v2, &a2, 4, 0) >= 0 ) /*0x42f0f5*/
        {
          int v7 = 0; /*0x42f0fb*/
          if ( a2 <= 0 ) /*0x42f0ff*/
          {
LABEL_11:
            int v8 = *(_DWORD *)v2; /*0x42f11f*/
            a2 = a1[18]; /*0x42f12e*/
            result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v8 + 16))(v2, &a2, 4, 0); /*0x42f132*/
            if ( result >= 0 ) /*0x42f137*/
            {
              int v10 = 0; /*0x42f13d*/
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
        int v5 = 0; /*0x42f0b7*/
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
