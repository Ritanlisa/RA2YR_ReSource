// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Tactical_42_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"

// 0x42A6D0
namespace gamemd {
char * Tactical::ConstructTacticalSurface()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall ConstructTacticalSurface(char *this)
{
  _DWORD *v2; // edi
  int v3; // ebp
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  void *v6; // eax
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // edi
  void *v11; // eax
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // ecx
  int v16; // edx
  _DWORD *v17; // eax
  int v18; // ecx
  int *v19; // eax
  _DWORD *v20; // eax
  int i; // ecx
  char *v22; // ecx
  _DWORD *v23; // ebp
  char *v25; // [esp+10h] [ebp-Ch]
  char *v26; // [esp+14h] [ebp-8h]
  int v27; // [esp+18h] [ebp-4h]

  *this = 0; /*0x42a6e0*/
  *(this + 1) = 0; /*0x42a6e2*/
  *(this + 2) = 0; /*0x42a6e5*/
  *(this + 3) = 1; /*0x42a6e8*/
  *((_DWORD *)this + 1) = 1065353216; /*0x42a6eb*/
  *(this + 8) = 1; /*0x42a6f2*/
  *((_DWORD *)this + 6) = 0; /*0x42a6f5*/
  *((_DWORD *)this + 7) = 0; /*0x42a6f8*/
  *((_DWORD *)this + 8) = 0; /*0x42a6fb*/
  *((_DWORD *)this + 9) = 0; /*0x42a6fe*/
  *((_DWORD *)this + 10) = -1; /*0x42a701*/
  *((_DWORD *)this + 11) = -1; /*0x42a704*/
  *(this + 56) = 1; /*0x42a707*/
  *((_DWORD *)this + 15) = 0; /*0x42a70a*/
  *((_DWORD *)this + 27) = -1; /*0x42a70d*/
  *((_WORD *)this + 56) = 0; /*0x42a710*/
  *((_WORD *)this + 57) = 0; /*0x42a714*/
  v2 = this + 116; /*0x42a718*/
  v3 = 3; /*0x42a71b*/
  do /*0x42a73d*/
  {
    VectorClassUInt::Constructor(0, 0); /*0x42a724*/
    *v2 = &vt_DynamicVectorClass_unsigned_int; /*0x42a729*/
    v2[5] = 10; /*0x42a72f*/
    v2[4] = 0; /*0x42a736*/
    v2 += 6; /*0x42a739*/
    --v3; /*0x42a73c*/
  }
  while ( v3 ); /*0x42a73d*/
  v4 = __2_YAPAXI_Z(0x14u); /*0x42a741*/
  v5 = v4; /*0x42a746*/
  if ( v4 ) /*0x42a74d*/
  {
    v4[3] = 0; /*0x42a754*/
    v4[4] = -1; /*0x42a757*/
    *v4 = 0; /*0x42a75e*/
    v4[1] = 0x10000; /*0x42a760*/
    v6 = __2_YAPAXI_Z(0x40004u); /*0x42a767*/
    v7 = v5[1]; /*0x42a76c*/
    v5[2] = v6; /*0x42a76f*/
    v8 = 0; /*0x42a775*/
    if ( v7 >= 0 ) /*0x42a779*/
    {
      do /*0x42a788*/
      {
        ++v8; /*0x42a77e*/
        *(_DWORD *)(v5[2] + 4 * v8 - 4) = 0; /*0x42a77f*/
      }
      while ( v8 <= v5[1] ); /*0x42a788*/
    }
  }
  else
  {
    v5 = 0; /*0x42a78c*/
  }
  *((_DWORD *)this + 5) = v5; /*0x42a790*/
  v9 = __2_YAPAXI_Z(0x14u); /*0x42a793*/
  v10 = v9; /*0x42a798*/
  if ( v9 ) /*0x42a79f*/
  {
    v9[3] = 0; /*0x42a7a6*/
    v9[4] = -1; /*0x42a7a9*/
    *v9 = 0; /*0x42a7b0*/
    v9[1] = 10000; /*0x42a7b2*/
    v11 = __2_YAPAXI_Z(0x9C44u); /*0x42a7b9*/
    v12 = v10[1]; /*0x42a7be*/
    v10[2] = v11; /*0x42a7c1*/
    v13 = 0; /*0x42a7c7*/
    if ( v12 >= 0 ) /*0x42a7cb*/
    {
      do /*0x42a7da*/
      {
        ++v13; /*0x42a7d0*/
        *(_DWORD *)(v10[2] + 4 * v13 - 4) = 0; /*0x42a7d1*/
      }
      while ( v13 <= v10[1] ); /*0x42a7da*/
    }
  }
  else
  {
    v10 = 0; /*0x42a7de*/
  }
  *((_DWORD *)this + 26) = v10; /*0x42a7e5*/
  v14 = __2_YAPAXI_Z(0x100004u); /*0x42a7e8*/
  if ( v14 ) /*0x42a7f2*/
  {
    v15 = v14 + 2; /*0x42a7f4*/
    v16 = 0x10000; /*0x42a7f7*/
    do /*0x42a808*/
    {
      v15[1] = 0; /*0x42a7fc*/
      *v15 = 0; /*0x42a7ff*/
      *(v15 - 1) = 0; /*0x42a801*/
      v15 += 4; /*0x42a804*/
      --v16; /*0x42a807*/
    }
    while ( v16 ); /*0x42a808*/
    v14[0x40000] = 0; /*0x42a80a*/
  }
  else
  {
    v14 = 0; /*0x42a812*/
  }
  *((_DWORD *)this + 4) = v14; /*0x42a819*/
  v17 = __2_YAPAXI_Z(0x180004u); /*0x42a81c*/
  if ( v17 ) /*0x42a826*/
    v17[393216] = 0; /*0x42a828*/
  else
    v17 = 0; /*0x42a830*/
  this->Tactical_field_0xC = v17; /*0x42a832*/
  v17[393216] = 0; /*0x42a835*/
  v18 = 0; /*0x42a83e*/
  *(_DWORD *)(*((_DWORD *)this + 4) + 0x100000) = 0; /*0x42a840*/
  v19 = (int *)*((_DWORD *)this + 5); /*0x42a846*/
  if ( *v19 >= 0 ) /*0x42a84b*/
  {
    do /*0x42a859*/
    {
      ++v18; /*0x42a850*/
      *(_DWORD *)(v19[2] + 4 * v18 - 4) = 0; /*0x42a851*/
    }
    while ( v18 <= *v19 ); /*0x42a859*/
  }
  *v19 = 0; /*0x42a85b*/
  v20 = (_DWORD *)*((_DWORD *)this + 26); /*0x42a85d*/
  for ( i = 0; i <= *v20; *(_DWORD *)(v20[2] + 4 * i - 4) = 0 ) /*0x42a864*/
    ++i; /*0x42a869*/
  *v20 = 0; /*0x42a874*/
  v22 = this + 116; /*0x42a87c*/
  v26 = this + 188; /*0x42a87f*/
  v25 = this + 116; /*0x42a883*/
  v23 = this + 76; /*0x42a887*/
  v27 = 3; /*0x42a88a*/
  while ( 1 ) /*0x42a898*/
  {
    *(v23 - 3) = 0; /*0x42a898*/
    *v23 = 0; /*0x42a89b*/
    v23[3] = 0; /*0x42a89e*/
    (*(void (__thiscall **)(char *))(*(_DWORD *)v22 + 12))(v22); /*0x42a8a3*/
    memset(v26, 0, 0x3E8u); /*0x42a8b5*/
    v23[778] = 0; /*0x42a8bf*/
    ++v23; /*0x42a8c5*/
    v25 += 24; /*0x42a8d2*/
    v26 += 1000; /*0x42a8d6*/
    if ( !--v27 ) /*0x42a8de*/
      break; /*0x42a8de*/
    v22 = v25; /*0x42a894*/
  }
  *((_DWORD *)this + 25) = __2_YAPAXI_Z(0x27100u); /*0x42a8ed*/
  return this; /*0x42a8f2*/
}
}
} // namespace gamemd

// 0x484050
namespace gamemd {
int * Tactical::CreateTacticalLightSurface(int * a2, int * a1, IUnknown * aP2, int * a3, int * a4, IUnknown * aP5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall Tactical::CreateTacticalLightSurface(
        int this,
        int *a2,
        int *a1,
        IUnknown *aP2,
        int *a3,
        int *a4,
        IUnknown *aP5)
{
  int *v7; // eax
  int *v8; // edx
  IUnknown *v9; // ebx
  IUnknown *v11; // ecx
  int *v12; // edi
  int v13; // esi
  int *result; // eax
  __int64 v15; // [esp-8h] [ebp-1Ch]
  int a6; // [esp+10h] [ebp-4h] BYREF

  v7 = a1; /*0x484051*/
  v8 = a3; /*0x484055*/
  v9 = aP5; /*0x48405a*/
  v11 = aP2; /*0x484063*/
  v12 = a4; /*0x484067*/
  *a1 = 0x10000; /*0x48406b*/
  v11->field_0 = 0; /*0x484071*/
  *v8 = 1000; /*0x484077*/
  *v12 = 1000; /*0x48407d*/
  v9->field_0 = 1000; /*0x484083*/
  if ( !*(_WORD *)(this + 36) && !*(_WORD *)(this + 38) /*0x4840a8*/
    || *(_WORD *)(this + 36) == 0xFFFF && *(_WORD *)(this + 38) == 0xFFFF )
  {
    result = (int *)CreateSurfaceClassPrimary(1000, 1000, 1000); /*0x484161*/
    *a2 = (int)result; /*0x48416d*/
  }
  else
  {
    HIDWORD(v15) = &a4; /*0x4840b2*/
    LODWORD(v15) = &aP5; /*0x4840b7*/
    Tactical::CalculateTacticalLighting((IUnknown *)this, v7, v11, v8, v12, v9, &a6, v15); /*0x4840c4*/
    if ( *(_DWORD *)(this + 52) /*0x484125*/
      && (a1 = (int *)a6,
          aP2 = aP5,
          a3 = a4,
          QuantizeColorRGB((int *)&a1, (int *)&aP2, (int *)&a3),
          v13 = *(_DWORD *)(this + 52),
          *(int **)(v13 + 408) == a1)
      && *(IUnknown **)(v13 + 412) == aP2
      && (result = *(int **)(v13 + 416), result == a3) )
    {
      *a2 = v13; /*0x48412c*/
    }
    else
    {
      result = (int *)CreateSurfaceClassPrimary(a6, (int)aP5, (int)a4); /*0x484142*/
      *a2 = (int)result; /*0x48414e*/
    }
  }
  return result; /*0x48412b*/
}
}
} // namespace gamemd

// 0x484180
namespace gamemd {
int Tactical::CalculateTacticalLighting(int * a1, IUnknown * aP2, int * a3, int * a4, IUnknown * aP5, int * a6, long long a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Tactical::CalculateTacticalLighting(
        IUnknown *this,
        int *a1,
        IUnknown *aP2,
        int *a3,
        int *a4,
        IUnknown *aP5,
        int *a6,
        __int64 a8)
{
  IUnknown *v8; // edi
  int *v9; // ebx
  int v10; // eax
  int v11; // esi
  int v12; // ebx
  int v13; // ebp
  int *v14; // eax
  int v15; // edx
  unsigned int v16; // edi
  int v17; // edx
  double v18; // st7
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int result; // eax
  int v28; // [esp+18h] [ebp-2Ch]
  int v29; // [esp+18h] [ebp-2Ch]
  int v30; // [esp+18h] [ebp-2Ch]
  int v32; // [esp+20h] [ebp-24h]
  _DWORD v33[2]; // [esp+24h] [ebp-20h] BYREF
  int v34; // [esp+2Ch] [ebp-18h]
  int v35; // [esp+30h] [ebp-14h]
  int v36; // [esp+34h] [ebp-10h]
  int v37; // [esp+38h] [ebp-Ch]
  int v38; // [esp+3Ch] [ebp-8h]
  int v39; // [esp+40h] [ebp-4h]

  v8 = this; /*0x484184*/
  if ( !LOWORD(this->field_24) && !HIWORD(this->field_24) /*0x4841a9*/
    || LOWORD(this->field_24) == 0xFFFF && HIWORD(this->field_24) == 0xFFFF )
  {
    *a1 = 0x10000; /*0x48462e*/
    aP2->field_0 = 0; /*0x484638*/
    *a3 = 1000; /*0x484642*/
    *a4 = 1000; /*0x48464c*/
    aP5->field_0 = 1000; /*0x484656*/
    *a6 = 1000; /*0x484660*/
    *(_DWORD *)a8 = 1000; /*0x484666*/
    *(_DWORD *)HIDWORD(a8) = 1000; /*0x48466c*/
    return HIDWORD(a8); /*0x48465c*/
  }
  v9 = a3; /*0x4841b5*/
  *a3 = 1000 * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13612) / 100; /*0x4841de*/
  *a6 = 1000 * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13620) / 100; /*0x48420d*/
  *(_DWORD *)a8 = 1000 * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13624) / 100; /*0x48423c*/
  v10 = 0; /*0x48426b*/
  *(_DWORD *)HIDWORD(a8) = 1000 * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13628) / 100; /*0x48426d*/
  v32 = 0; /*0x484273*/
  for ( aP2->field_0 = 0; v32 < g_BridgeCellPool; ++v32 ) /*0x484285*/
  {
    v11 = *(_DWORD *)&dword_ABCA14->__pad_0[4 * v10]; /*0x484291*/
    if ( *(_BYTE *)(v11 + 72) && *(int *)&HouseClass_Player.__pad_5568[22724] >= *(_DWORD *)(v11 + 52) ) /*0x4842aa*/
    {
      v28 = v8->field_24; /*0x4842b5*/
      v12 = ((__int16)v28 << 8) + 128; /*0x4842cc*/
      v13 = (SHIWORD(v28) << 8) + 128; /*0x4842ce*/
      v33[0] = 128; /*0x4842d0*/
      v33[1] = 128; /*0x4842d4*/
      Isometric::InitTables((int)v8, (IUnknown *)v33); /*0x4842dd*/
      v14 = (int *)(v11 + 56); /*0x4842e2*/
      v15 = *(_DWORD *)(v11 + 56); /*0x4842e7*/
      v38 = *(_DWORD *)(v11 + 60); /*0x4842ec*/
      v16 = *(_DWORD *)(v11 + 68); /*0x4842f0*/
      v39 = *(_DWORD *)(v11 + 64); /*0x4842f6*/
      v29 = v12 - v15; /*0x4842fe*/
      v37 = *(_DWORD *)(v11 + 56); /*0x484306*/
      v17 = *(_DWORD *)(v11 + 60); /*0x48430a*/
      v39 = *(_DWORD *)(v11 + 64); /*0x484310*/
      if ( v29 * v29 + (v13 - v17) * (v13 - v17) <= v16 * v16 ) /*0x48432d*/
      {
        v34 = *v14; /*0x48433a*/
        v35 = *(_DWORD *)(v11 + 60); /*0x484341*/
        v37 = *v14; /*0x48434d*/
        v30 = v13 - *(_DWORD *)(v11 + 60); /*0x48435e*/
        v36 = *(_DWORD *)(v11 + 64); /*0x484369*/
        v39 = *(_DWORD *)(v11 + 64); /*0x484370*/
        v18 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)v30 * (double)v30 + (double)(v12 - v34) /*0x484385*/
                                                                                          * (double)(v12 - v34)));
        v19 = Math::RoundToInt(v18); /*0x48438d*/
        if ( v19 <= v16 ) /*0x484394*/
        {
          v20 = (1000 * v16 - 1000 * v19) / v16; /*0x4843bd*/
          aP2->field_0 += (int)(v20 * *(_DWORD *)(v11 + 36)) / 1000; /*0x4843db*/
          *a6 += (int)(v20 * *(_DWORD *)(v11 + 40)) / 1000; /*0x4843fc*/
          *(_DWORD *)a8 += (int)(v20 * *(_DWORD *)(v11 + 44)) / 1000; /*0x48441d*/
          *(_DWORD *)HIDWORD(a8) += (int)(v20 * *(_DWORD *)(v11 + 48)) / 1000; /*0x48443e*/
        }
      }
      v8 = this; /*0x484440*/
      v9 = a3; /*0x484444*/
    }
    v10 = v32 + 1; /*0x484452*/
  }
  v21 = aP2->field_0 + *v9; /*0x48446b*/
  *v9 = v21; /*0x48446f*/
  aP5->field_0 = v21; /*0x484471*/
  if ( !LightningStorm::IsActive() ) /*0x48447a*/
  {
    if ( PsyDom::IsActive() ) /*0x4844c4*/
    {
      *v9 += SHIBYTE(v8->field_118) * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13684) /*0x4844ec*/
           - *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13708);
      v23 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13708); /*0x4844fa*/
      v24 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13712) * (SHIBYTE(v8->field_118) + 4); /*0x484503*/
    }
    else
    {
      if ( NukeFlash::IsActive() ) /*0x48450f*/
      {
        *v9 += SHIBYTE(v8->field_118) * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13684) /*0x484537*/
             - *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13680);
        v22 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13684) * (SHIBYTE(v8->field_118) + 4) /*0x484559*/
            - *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13680)
            + aP5->field_0;
        goto LABEL_21; /*0x48455b*/
      }
      *v9 += SHIBYTE(v8->field_118) * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13636) /*0x48457c*/
           - *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13632);
      v23 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13632); /*0x48458a*/
      v24 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13636) * (SHIBYTE(v8->field_118) + 4); /*0x484593*/
    }
    v22 = v24 - v23 + aP5->field_0; /*0x48459e*/
    goto LABEL_21; /*0x48459e*/
  }
  *v9 += SHIBYTE(v8->field_118) * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13660) /*0x48449b*/
       - *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13656);
  v22 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13660) * (SHIBYTE(v8->field_118) + 4) /*0x4844bd*/
      - *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13656)
      + aP5->field_0;
LABEL_21:
  aP5->field_0 = v22; /*0x4845a0*/
  v25 = *v9; /*0x4845a2*/
  if ( *v9 >= 2000 ) /*0x4845a9*/
    v25 = 2000; /*0x4845ab*/
  *v9 = v25; /*0x4845c0*/
  *a4 = v25; /*0x4845c2*/
  Map_Calc(a1, a4, a6, (int *)a8, (int *)HIDWORD(a8)); /*0x4845cf*/
  v26 = (*a1 * aP5->field_0) >> 16; /*0x4845da*/
  aP5->field_0 = v26; /*0x4845e2*/
  if ( v26 >= 2000 ) /*0x4845e4*/
    v26 = 2000; /*0x4845e6*/
  aP5->field_0 = v26; /*0x4845eb*/
  *v9 = *v9 <= 0 ? 0 : *v9;
  *a4 = *a4 <= 0 ? 0 : *a4;
  result = aP5->field_0 <= 0 ? 0 : aP5->field_0;
  aP5->field_0 = result; /*0x484615*/
  return result; /*0x48461a*/
}
}
} // namespace gamemd

// 0x4A91B0
namespace gamemd {
unsigned int * Tactical::MouseMove(MouseClass * aP1, MouseClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Tactical::MouseMove(int this, MouseClass *aP1, MouseClass *aP2)
{
  MouseClass *v3; // ebp
  bool v4; // zf
  MouseClass *v6; // eax
  IUnknown *v7; // edi
  int v8; // ebx
  MouseClass *v9; // ecx
  int v10; // eax
  void *v11; // ecx
  int *v12; // eax
  MouseClass *v13; // eax
  _DWORD *v14; // eax
  int v15; // ecx
  DisplayClass *v16; // eax
  int v17; // ecx
  __int16 v19; // dx
  _WORD *v20; // eax
  __int16 v21; // dx
  int v22; // ebx
  __int16 v23; // ax
  __int16 v24; // ax
  __int16 v25; // cx
  DisplayClass *v26; // edx
  __int16 v27; // ax
  MouseClass *v28; // [esp+10h] [ebp-14h] BYREF
  int v29; // [esp+14h] [ebp-10h] BYREF
  int v30; // [esp+18h] [ebp-Ch]
  _BYTE v31[8]; // [esp+1Ch] [ebp-8h] BYREF

  v3 = (MouseClass *)aP2->field_0; /*0x4a91ba*/
  v4 = (unsigned __int16)aP2->field_0 == *(_WORD *)&MEMORY[0x89F690].__pad_BC0[424]; /*0x4a91bd*/
  aP2 = (MouseClass *)aP2->field_0; /*0x4a91c6*/
  if ( v4 && HIWORD(aP2) == *(_WORD *)&MEMORY[0x89F690].__pad_BC0[426] ) /*0x4a91dc*/
  {
    v6 = (MouseClass *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 52))( /*0x4a91ef*/
                         *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
                         &v29);
    v7 = *(IUnknown **)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x4a91f2*/
    v8 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x4a91f8*/
    v9 = v6; /*0x4a91fe*/
    v10 = v6->field_0; /*0x4a9200*/
    v11 = v9->field_4; /*0x4a9204*/
    if ( v10 < *(int *)&MEMORY[0x87F8E4].__pad_5568[8532] /*0x4a9223*/
      || v10 >= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8540]
      || (int)v11 < *(int *)&MEMORY[0x87F8E4].__pad_5568[8536]
      || (int)v11 >= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8544] )
    {
      v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 52))( /*0x4a9284*/
                        *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
                        v31);
      v15 = v14[1]; /*0x4a9292*/
      v29 = *v14 - (_DWORD)v7; /*0x4a9295*/
      v30 = v15 - v8; /*0x4a929f*/
      v3 = (MouseClass *)*Tactical::PixelToCell( /*0x4a92af*/
                            *(int *)&MEMORY[0x87F8E4].__pad_5568[9432],
                            (AbstractClass *)&aP2,
                            (IUnknown *)&v29);
    }
    else
    {
      v12 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 52))( /*0x4a9232*/
                     *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
                     v31);
      v29 = *v12; /*0x4a9237*/
      v30 = v12[1]; /*0x4a924d*/
      v13 = (MouseClass *)*TacticalClass::PixelToCellCheck(&v28, &v29); /*0x4a9256*/
      v28 = v13; /*0x4a925f*/
      if ( v13 == *(MouseClass **)&MEMORY[0x89F690].__pad_BC0[424] ) /*0x4a9263*/
        goto LABEL_11; /*0x4a9263*/
      v3 = v13; /*0x4a9273*/
    }
    aP2 = v3; /*0x4a92b1*/
  }
LABEL_11:
  v16 = *(DisplayClass **)(this + 4476); /*0x4a92b5*/
  if ( v16 ) /*0x4a92bd*/
  {
    if ( !MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x4a92e3*/
    {
      v19 = HIWORD(aP2) + *(_WORD *)(this + 4474); /*0x4a92f3*/
      LOWORD(v28) = (_WORD)v3 + *(_WORD *)(this + 4472); /*0x4a92fb*/
      HIWORD(v28) = v19; /*0x4a9301*/
      v20 = UI_Move(&v29, &v28, (int)v16); /*0x4a931e*/
      v21 = v20[1] - *(_WORD *)(this + 4474); /*0x4a9331*/
      LOWORD(aP2) = *v20 - *(_WORD *)(this + 4472); /*0x4a9338*/
      HIWORD(aP2) = v21; /*0x4a933d*/
      v3 = aP2; /*0x4a9342*/
    }
    v4 = (_WORD)v3 == *(_WORD *)(this + 4468); /*0x4a9346*/
    aP2 = v3; /*0x4a934d*/
    if ( v4 && HIWORD(v3) == *(_WORD *)(this + 4470) ) /*0x4a935f*/
    {
      aP1->field_0 = (int)v3; /*0x4a9367*/
      return &aP1->field_0; /*0x4a9361*/
    }
    else
    {
      v22 = *(_DWORD *)(this + 4468); /*0x4a9377*/
      if ( *(_DWORD *)(this + 4476) ) /*0x4a9371*/
      {
        if ( v3 != *(MouseClass **)(this + 4468) /*0x4a93b0*/
          && (*(_WORD *)(this + 4468) != *(_WORD *)&MEMORY[0x89F690].__pad_BC0[424]
           || *(_WORD *)(this + 4470) != *(_WORD *)&MEMORY[0x89F690].__pad_BC0[426]) )
        {
          v23 = *(_WORD *)(this + 4470) + *(_WORD *)(this + 4474); /*0x4a93c7*/
          LOWORD(aP2) = *(_WORD *)(this + 4468) + *(_WORD *)(this + 4472); /*0x4a93d0*/
          HIWORD(aP2) = v23; /*0x4a93d5*/
          MapClass::SetCellFlagsAlongPath((__int16 **)this, (IUnknown *)&aP2, 0); /*0x4a93e9*/
        }
        if ( v3 != *(MouseClass **)&MEMORY[0x89F690].__pad_BC0[424] ) /*0x4a93f5*/
        {
          v24 = *(_WORD *)(this + 4472) + (_WORD)v3; /*0x4a940a*/
          HIWORD(aP2) = HIWORD(v3) + *(_WORD *)(this + 4474); /*0x4a9414*/
          LOWORD(aP2) = v24; /*0x4a941b*/
          MapClass::SetCellFlagsAlongPath((__int16 **)this, (IUnknown *)&aP2, (_WORD *)1); /*0x4a942f*/
        }
      }
      *(_DWORD *)(this + 4468) = v3; /*0x4a9434*/
      v25 = *(_WORD *)(this + 4472) + (_WORD)v3; /*0x4a944b*/
      HIWORD(aP2) = *(_WORD *)(this + 4470) + *(_WORD *)(this + 4474); /*0x4a9452*/
      v26 = *(DisplayClass **)(this + 4476); /*0x4a9457*/
      LOWORD(aP2) = v25; /*0x4a945d*/
      *(_BYTE *)(this + 4480) = GetBuildingPlacement( /*0x4a9485*/
                                  *(_DWORD **)(this + 4520),
                                  *(_DWORD *)(this + 4524),
                                  (int)v26,
                                  (__int16 *)&aP2);
      v27 = *(_WORD *)(this + 4474) + *(_WORD *)(this + 4470); /*0x4a94a0*/
      LOWORD(aP2) = *(_WORD *)(this + 4468) + *(_WORD *)(this + 4472); /*0x4a94a7*/
      HIWORD(aP2) = v27; /*0x4a94b0*/
      *(_BYTE *)(this + 4481) = ProcessDataBuildingTypeClass( /*0x4a94da*/
                                  *(_DWORD **)(this + 4520),
                                  *(_DWORD *)(this + 4524),
                                  *(_DWORD *)(this + 4476),
                                  (__int16 *)&aP2);
      aP1->field_0 = v22; /*0x4a94e6*/
      return &aP1->field_0; /*0x4a94e0*/
    }
  }
  else
  {
    v17 = *(_DWORD *)(this + 4468); /*0x4a92bf*/
    *(_DWORD *)(this + 4468) = v3; /*0x4a92c9*/
    aP1->field_0 = v17; /*0x4a92d2*/
    return &aP1->field_0; /*0x4a92c5*/
  }
}
}
} // namespace gamemd

// 0x568350
namespace gamemd {
bool Tactical::IsCellVisible(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Tactical::IsCellVisible(_DWORD *this, IUnknown *aP1)
{
  int v2; // edx
  int v3; // esi
  int v4; // eax

  v2 = *(this + 61); /*0x56836f*/
  v3 = (__int16)(aP1->field_0 / 256); /*0x56837b*/
  v4 = (__int16)(aP1->field_4 / 256); /*0x56837e*/
  return v4 + v3 > v2 && v3 - v4 < v2 && v4 - v3 < v2 && v4 + v3 <= v2 + 2 * *(this + 62); /*0x5683a5*/
}
}
} // namespace gamemd

// 0x58C2A0
namespace gamemd {
char * Tactical::GetCellData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall Tactical_GetCellData(__int16 *this)
{
  return (char *)g_MapTileArray + 80 * *this + 80 * unk_89C2DC * *(this + 1); /*0x58c2be*/
}
}
} // namespace gamemd

// 0x640A40
namespace gamemd {
int Tactical_Radar_Render()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__userpurge Tactical_Radar_Render@<eax>(
        int **a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5,
        char a6,
        int a7,
        int *a8)
{
  int *result; // eax
  int v9; // ebp
  int v10; // ebx
  int i; // eax
  _DWORD *v12; // esi
  int v13; // esi
  int v14; // edi
  int v15; // edx
  int v16; // esi
  int j; // edi
  int v18; // ebx
  int v19; // esi
  int v20; // edi
  int v21; // esi
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // esi
  int *v27; // ecx
  int *v28; // eax
  int v29; // edi
  int v30; // ebx
  int v31; // ebp
  char *v32; // eax
  char *v33; // esi
  _DWORD *v34; // edi
  int v35; // ebx
  int v36; // eax
  int v37; // ebx
  int v38; // ebp
  int v39; // edi
  int v40; // edx
  int v41; // edx
  int v42; // eax
  int v43; // eax
  int *v44; // edi
  int v45; // ebx
  int v46; // eax
  int v50; // [esp+2Ch] [ebp-88h]
  int k; // [esp+2Ch] [ebp-88h]
  int v53; // [esp+38h] [ebp-7Ch] BYREF
  _DWORD *v54; // [esp+3Ch] [ebp-78h]
  int v55; // [esp+40h] [ebp-74h] BYREF
  int v56; // [esp+44h] [ebp-70h]
  int v57; // [esp+48h] [ebp-6Ch] BYREF
  int v58; // [esp+4Ch] [ebp-68h]
  int v59; // [esp+50h] [ebp-64h]
  int v60; // [esp+54h] [ebp-60h] BYREF
  int v61; // [esp+58h] [ebp-5Ch] BYREF
  int v62; // [esp+5Ch] [ebp-58h]
  int v63; // [esp+60h] [ebp-54h] BYREF
  int v64; // [esp+64h] [ebp-50h] BYREF
  int v65; // [esp+68h] [ebp-4Ch]
  int v66; // [esp+6Ch] [ebp-48h] BYREF
  _DWORD v67[3]; // [esp+70h] [ebp-44h] BYREF
  int v68; // [esp+7Ch] [ebp-38h]
  int v69; // [esp+80h] [ebp-34h] BYREF
  int v70; // [esp+84h] [ebp-30h] BYREF
  int v71; // [esp+88h] [ebp-2Ch]
  int v72; // [esp+8Ch] [ebp-28h] BYREF
  _DWORD v73[2]; // [esp+90h] [ebp-24h] BYREF
  int v74; // [esp+98h] [ebp-1Ch] BYREF
  int v75; // [esp+9Ch] [ebp-18h]
  _DWORD v76[3]; // [esp+A0h] [ebp-14h] BYREF
  _BYTE v77[8]; // [esp+ACh] [ebp-8h] BYREF

  result = *a1; /*0x640a46*/
  if ( *a1 ) /*0x640a46*/
  {
    LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x640a5d*/
    v9 = 10000; /*0x640a62*/
    v62 = 10000; /*0x640a6c*/
    v56 = 10000; /*0x640a70*/
    v50 = 0; /*0x640a74*/
    v10 = 0; /*0x640a7c*/
    for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x640a85*/
    {
      v12 = (_DWORD *)(i + 36); /*0x640a8b*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea(i + 36, 0) ) /*0x640a96*/
      {
        v54 = (_DWORD *)*v12; /*0x640aa7*/
        v13 = (SHIWORD(v54) << 8) + 128; /*0x640ab9*/
        v14 = ((__int16)v54 << 8) + 128; /*0x640ac3*/
        Coord::Subtract(&v64, v14, v13, 0); /*0x640acb*/
        Coord::Subtract(&v69, v14, v13, 0); /*0x640ad8*/
        IsoCoord::ToScreenOffset(v69, v65, &v53, &v57); /*0x640af7*/
        v15 = v57 / 30; /*0x640b2a*/
        if ( v53 / 60 < v9 ) /*0x640b2e*/
        {
          v62 = v53 / 60; /*0x640b30*/
          v9 = v53 / 60; /*0x640b34*/
        }
        if ( v53 / 60 > v50 ) /*0x640b3a*/
          v50 = v53 / 60; /*0x640b3c*/
        if ( v15 < v56 ) /*0x640b44*/
          v56 = v57 / 30; /*0x640b46*/
        if ( v15 > v10 ) /*0x640b4c*/
          v10 = v57 / 30; /*0x640b4e*/
      }
    }
    v16 = 0; /*0x640b62*/
    for ( j = 0; j < 8; ++j ) /*0x640b64*/
    {
      if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid(j) ) /*0x640b71*/
        ++v16; /*0x640b7a*/
    }
    v18 = 0; /*0x640b81*/
    v57 = j; /*0x640b83*/
    for ( k = v16; v18 < v16; ++v18 ) /*0x640b8d*/
    {
      if ( (!v18 || v18 <= j) && (unsigned __int8)ScenarioClass::Is_Waypoint_Valid(v18) ) /*0x640ba6*/
      {
        v54 = *(_DWORD **)ScenarioClass::Get_Waypoint_Location(&v63, v18); /*0x640bc8*/
        v19 = (SHIWORD(v54) << 8) + 128; /*0x640bde*/
        v20 = ((__int16)v54 << 8) + 128; /*0x640be4*/
        Coord::Subtract(&v69, v20, v19, 0); /*0x640bec*/
        Coord::Subtract(&v64, v20, v19, 0); /*0x640bf9*/
        IsoCoord::ToScreenOffset(v64, v70, &v53, &v55); /*0x640c18*/
        v74 = 4; /*0x640c61*/
        v73[1] = v55 / 30 - v56 - 1; /*0x640c65*/
        v75 = 4; /*0x640c6d*/
        v73[0] = 2 * (v53 / 60 - v9) - 1; /*0x640c74*/
        v21 = **a1; /*0x640c8a*/
        v22 = (*(int (__thiscall **)(int *, _DWORD *, _DWORD *, _DWORD))(v21 + 120))(*a1, v76, v73, 0); /*0x640cc4*/
        (*(void (__thiscall **)(_DWORD, int))(v21 + 16))(*v54, v22); /*0x640cce*/
        v16 = k; /*0x640cd1*/
        j = v57; /*0x640cd5*/
      }
    }
    if ( MEMORY[0x8A00A4] == 800 ) /*0x640cef*/
    {
      v23 = 499; /*0x640cf1*/
      v24 = 379; /*0x640cf6*/
      v25 = 216; /*0x640cfb*/
      v26 = 166; /*0x640d00*/
    }
    else if ( MEMORY[0x8A00A4] == 1024 ) /*0x640d0d*/
    {
      v23 = 570; /*0x640d0f*/
      v24 = 424; /*0x640d14*/
      v25 = 300; /*0x640d19*/
      v26 = 260; /*0x640d1e*/
    }
    else
    {
      v25 = 200; /*0x640d25*/
      v23 = 385; /*0x640d2a*/
      v24 = 270; /*0x640d2f*/
      v26 = 200; /*0x640d34*/
    }
    v59 = v24; /*0x640d36*/
    v58 = v23; /*0x640d3e*/
    v60 = v25; /*0x640d42*/
    v27 = *a1; /*0x640d46*/
    v61 = v26; /*0x640d48*/
    v28 = (int *)(*(int (__thiscall **)(int *, _DWORD *, int, int, int))(*v27 + 120))(v27, v76, a4, a3, a2); /*0x640d56*/
    v75 = *v28; /*0x640d5f*/
    v76[0] = v28[1]; /*0x640d6a*/
    v29 = v28[2]; /*0x640d6e*/
    v30 = v28[3]; /*0x640d71*/
    v31 = 1000 * v64 / v30; /*0x640d83*/
    if ( v31 >= 1000 * v63 / v29 ) /*0x640d96*/
      v31 = 1000 * v63 / v29; /*0x640d98*/
    v68 = (v63 - v31 * v29 / 1000) / 2; /*0x640dd6*/
    v69 = (v64 - v31 * v30 / 1000) / 2; /*0x640ddf*/
    v70 = v63 - 2 * v68; /*0x640dea*/
    v71 = v64 - 2 * v69; /*0x640dee*/
    v32 = (char *)__2_YAPAXI_Z(0x24u); /*0x640df2*/
    if ( v32 ) /*0x640dfc*/
      v33 = DSurface::Construct(v32, v63, v64, 1, 0); /*0x640e13*/
    else
      v33 = 0; /*0x640e17*/
    v34 = (_DWORD *)v55; /*0x640e19*/
    v35 = *(_DWORD *)v33; /*0x640e1d*/
    v36 = (*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD, _DWORD))(**(_DWORD **)v55 + 120))(*(_DWORD *)v55, v77, 0, 0); /*0x640e2f*/
    (*(void (__thiscall **)(char *, int *, _DWORD, int))(v35 + 8))(v33, &v70, *v34, v36); /*0x640e3d*/
    HIBYTE(v54) = 0; /*0x640e49*/
    v55 = LoadFileSHP(MEMORY[0x836DF4]); /*0x640e53*/
    v37 = 0; /*0x640e5b*/
    v56 = 0; /*0x640e5f*/
    if ( v53 > 0 ) /*0x640e63*/
    {
      v38 = 4480; /*0x640e6f*/
      v57 = 4480; /*0x640e74*/
      do /*0x64106b*/
      {
        if ( v38 == 4480 || v37 <= v60 ) /*0x640e84*/
        {
          if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid(v37) ) /*0x640e8b*/
          {
            v58 = *(_DWORD *)ScenarioClass::Get_Waypoint_Location(&a6, v37); /*0x640eb0*/
            v39 = (SHIWORD(v58) << 8) + 128; /*0x640ec2*/
            Coord::Subtract(&v72, ((__int16)v58 << 8) + 128, v39, 0); /*0x640ed4*/
            IsoCoord::ToScreenOffset(v72, v39, &v74, &v66); /*0x640eef*/
            v40 = *(_DWORD *)((char *)MEMORY[0xA8B230] + v38); /*0x640f3a*/
            if ( v40 != -1 ) /*0x640f40*/
            {
              v41 = *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(*((_DWORD *)HouseClass_Array + v40) + 90196)) /*0x640f66*/
                              + 780);
              v58 = v41; /*0x640f6c*/
              if ( v55 ) /*0x640f70*/
              {
                if ( v41 ) /*0x640f78*/
                {
                  v67[0] = v70 * (1000000 * (v74 / 60 - v65) / *((_DWORD *)MEMORY[0xA8B230] + 1101)) / 1000000 + v68 - 3; /*0x640fd6*/
                  v42 = *(_DWORD *)v33; /*0x641015*/
                  v67[1] = v71 * (1000000 * (v66 / 30 - v59) / *((_DWORD *)MEMORY[0xA8B230] + 1102)) / 1000000 + v69 - 2; /*0x641025*/
                  v43 = (*(int (__thiscall **)(char *, _BYTE *))(v42 + 120))(v33, v77); /*0x641029*/
                  DrawToSurfaceSHP(v55, 0, v67, v43, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x64103e*/
                  v37 = v56; /*0x641049*/
                }
              }
            }
          }
        }
        ++v37; /*0x64105d*/
        v38 = v57 + 4; /*0x64105e*/
        v56 = v37; /*0x641063*/
        v57 += 4; /*0x641067*/
      }
      while ( v37 < v53 ); /*0x64106b*/
    }
    v44 = a8; /*0x641071*/
    (*(void (__thiscall **)(int *, int *, _DWORD))(*a8 + 20))(a8, &v61, 0); /*0x641083*/
    v45 = *v44; /*0x641088*/
    v46 = (*(int (__thiscall **)(char *, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)v33 + 120))(v33, v77, 0, 0); /*0x641098*/
    result = (int *)(*(int (__thiscall **)(int *, int *, char *, int))(v45 + 8))(v44, &v60, v33, v46); /*0x6410a4*/
    if ( v33 ) /*0x6410ac*/
      return (int *)(**(int (__thiscall ***)(char *, int))v33)(v33, 1); /*0x6410b4*/
  }
  return result; /*0x6410b6*/
}
}
} // namespace gamemd

// 0x692300
namespace gamemd {
char Tactical::MouseOver(MouseClass * aP0, MouseClass * aP1, MouseClass * aP2, MouseClass * aP3, MouseClass * aP4, MouseClass * aP5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall Tactical::MouseOver(
        MouseClass *aP0,
        MouseClass *aP1,
        MouseClass *aP2,
        MouseClass *aP3,
        MouseClass *aP4,
        MouseClass *aP5)
{
  MouseClass *v6; // edx
  MouseClass *v7; // esi
  MouseClass *v8; // edi
  MouseClass *v9; // ecx
  MouseClass *v10; // ebx
  char *v11; // eax
  MouseClass *v12; // ebx
  int *v13; // eax
  IUnknown *v14; // ecx
  MouseClass *v15; // edx
  int v16; // edx
  int GroundHeight; // eax
  int v18; // edx
  MouseClass *v19; // ecx
  bool v20; // al
  MouseClass *v21; // esi
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  bool v24; // al
  MouseClass *v25; // eax
  MouseClass *v26; // edi
  ObjectClass *v27; // eax
  ObjectClass *v28; // esi
  IUnknown *v29; // eax
  _WORD *v30; // eax
  int v31; // edi
  IUnknown *v32; // eax
  _WORD *v33; // eax
  MouseClass *v35; // [esp-4h] [ebp-2Ch]
  MouseClass *v36; // [esp-4h] [ebp-2Ch]
  IUnknown *v37; // [esp+10h] [ebp-18h] BYREF
  IUnknown *v38; // [esp+14h] [ebp-14h]
  int v39; // [esp+18h] [ebp-10h]
  _DWORD v40[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v6 = aP2; /*0x692307*/
  v7 = aP1; /*0x69230e*/
  aP3->field_0 = 0; /*0x692312*/
  v7->field_0 = *(_DWORD *)&stru_B05488.__pad_188[72]; /*0x69231e*/
  v6->field_0 = *(_DWORD *)&stru_B05488.__pad_1D8[24]; /*0x692329*/
  v8 = aP4; /*0x692332*/
  v6->field_4 = *(void **)&stru_B05488.__pad_1D8[28]; /*0x692336*/
  v9 = aP5; /*0x69233e*/
  v6->field_8 = *(void **)&stru_B05488.__pad_1D8[32]; /*0x692342*/
  LOBYTE(v8->field_0) = 0; /*0x692345*/
  LOBYTE(v9->field_0) = 0; /*0x692348*/
  if ( aP0->field_0 < 0 ) /*0x692350*/
    return 0; /*0x692350*/
  v10 = (MouseClass *)aP0->field_4; /*0x692356*/
  if ( (int)v10 < 0 ) /*0x69235b*/
    return 0; /*0x69235b*/
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22548] ) /*0x692369*/
  {
    v37 = (IUnknown *)(*(_DWORD *)&stru_87C374.__pad_579C[21648] + aP0->field_0); /*0x69237c*/
    v38 = (IUnknown *)((char *)v10 + *(_DWORD *)&stru_87C374.__pad_579C[21652]); /*0x692380*/
    v11 = (char *)Tactical::PixelToCell(*(int *)&stru_87C374.__pad_579C[22548], (AbstractClass *)&aP1, (IUnknown *)&v37); /*0x69238e*/
    v8 = aP4; /*0x692393*/
  }
  else
  {
    v11 = &stru_B05488.__pad_188[72]; /*0x692399*/
  }
  v7->field_0 = *(_DWORD *)v11; /*0x6923a0*/
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22548] ) /*0x6923aa*/
  {
    v12 = (MouseClass *)aP0->field_4; /*0x6923ba*/
    v37 = (IUnknown *)(*(_DWORD *)&stru_87C374.__pad_579C[21648] + aP0->field_0); /*0x6923c1*/
    v38 = (IUnknown *)((char *)v12 + *(_DWORD *)&stru_87C374.__pad_579C[21652]); /*0x6923c5*/
    v13 = TacticalClass::TransformPixel(*(int *)&stru_87C374.__pad_579C[22548], (IUnknown *)v40, (MouseClass *)&v37); /*0x6923d3*/
    v8 = aP4; /*0x6923d8*/
  }
  else
  {
    v13 = (int *)&stru_B05488.__pad_1D8[24]; /*0x6923de*/
  }
  v14 = (IUnknown *)aP2; /*0x6923e3*/
  v15 = aP2; /*0x6923e9*/
  aP2->field_0 = *v13; /*0x6923eb*/
  v15->field_4 = (void *)v13[1]; /*0x6923f0*/
  v15->field_8 = (void *)v13[2]; /*0x6923f6*/
  if ( !*(_DWORD *)&stru_87C374.__pad_579C[22548] || !Tactical::IsCellVisible(&stru_87C374.__pad_14B0[8132], v14) ) /*0x69240c*/
    return 0; /*0x6925ff*/
  v16 = SHIWORD(v7->field_0) << 8; /*0x69242d*/
  v40[0] = (SLOWORD(v7->field_0) << 8) + 128; /*0x692430*/
  v40[1] = v16 + 128; /*0x692440*/
  v40[2] = 0; /*0x692444*/
  GroundHeight = Cell::GetGroundHeight((IUnknown *)v40); /*0x69244c*/
  v18 = SHIWORD(v7->field_0); /*0x692454*/
  v19 = (MouseClass *)((SLOWORD(v7->field_0) << 8) + 128); /*0x69245b*/
  v39 = GroundHeight; /*0x692461*/
  v37 = (IUnknown *)v19; /*0x692465*/
  v38 = (IUnknown *)((v18 << 8) + 128); /*0x69247c*/
  v20 = Cell::IsPassable((IUnknown *)&v37) && g_hWnd; /*0x692492*/
  v21 = aP5; /*0x69249b*/
  LOBYTE(aP5->field_0) = v20; /*0x69249f*/
  LOBYTE(v8->field_0) = 0; /*0x6924a1*/
  if ( (**(_DWORD **)&HouseClass_Player.__pad_5568[8060] & 0x1000) != 0 ) /*0x6924af*/
  {
    v22 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v37); /*0x6924bb*/
    v23 = Cell::IsBridge(v22); /*0x6924c2*/
    if ( v23 ) /*0x6924c9*/
    {
      LOBYTE(v8->field_0) = *((_BYTE *)v23 + 1767); /*0x6924d1*/
    }
    else
    {
      v24 = Game::Stub3((IUnknown *)&v37) && g_hWnd; /*0x6924f1*/
      LOBYTE(v8->field_0) = v24; /*0x6924fa*/
    }
  }
  if ( !LOBYTE(v21->field_0) && !LOBYTE(v8->field_0) ) /*0x692505*/
  {
    v25 = TacticalClass::IsOccupiedByTechno(*(_DWORD **)&stru_87C374.__pad_579C[22548], aP0); /*0x692515*/
    v26 = aP3; /*0x69251a*/
    aP3->field_0 = (int)v25; /*0x692520*/
    v27 = (ObjectClass *)AbstractClass::IsTechnoType(v25); /*0x692522*/
    v28 = v27; /*0x692527*/
    if ( v27 && !BYTE2(v27[6].uniqueId) ) /*0x69252d*/
    {
      if ( v27[3].referenceCount == 2 /*0x692575*/
        && (v35 = *(MouseClass **)(HouseClass_Player.field_0 + 48),
            v29 = (IUnknown *)(*(int (__thiscall **)(ObjectClass *, _DWORD *))(*(_DWORD *)v27->__pad_0 + 72))(v27, v40),
            v30 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v29),
            !Cell::IsPassableOffset(v30, (IUnknown *)v35))
        || *(_BYTE *)((*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v28->__pad_0 + 132))(v28) + 3226) )
      {
        v26->field_0 = 0; /*0x69257f*/
      }
    }
    if ( v26->field_0 ) /*0x692585*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v26->field_0 + 44))(v26->field_0) == 6 ) /*0x692593*/
      {
        v31 = v26->field_0; /*0x692595*/
        if ( !*(_BYTE *)(v31 + 1050) ) /*0x692597*/
        {
          if ( *(_BYTE *)(v31 + 1773) == 15 /*0x6925dc*/
            && (v36 = *(MouseClass **)(HouseClass_Player.field_0 + 48),
                v32 = (IUnknown *)(*(int (__thiscall **)(ObjectClass *, _DWORD *))(*(_DWORD *)v28->__pad_0 + 72))(
                                    v28,
                                    v40),
                v33 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v32),
                !Cell::IsPassableOffset(v33, (IUnknown *)v36))
            || *(_BYTE *)(*(_DWORD *)(v31 + 1312) + 5889) )
          {
            aP3->field_0 = 0; /*0x6925ea*/
          }
        }
      }
    }
  }
  return 1; /*0x6925f0*/
}
}
} // namespace gamemd

// 0x6930A0
namespace gamemd {
char Tactical::HandleTacticalMouseInput(int _28, unsigned int * a2, int a4, MouseClass * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Tactical::HandleTacticalMouseInput(_BYTE *this, int _28, _DWORD *a2, int a4, MouseClass *aP4)
{
  int v5; // eax
  int v7; // eax
  int v8; // eax
  __int16 v10; // [esp+8h] [ebp-1Ch] BYREF
  MouseClass *aP2; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h]
  int v14[3]; // [esp+18h] [ebp-Ch] BYREF

  LOBYTE(v5) = MEMORY[0xA8D63C].__pad_BC0[380]; /*0x6930a0*/
  if ( MEMORY[0xA8D63C].__pad_BC0[380] && (MEMORY[0xA8D63C].__pad_14B0[624] || MEMORY[0xA8D63C].__pad_14B0[639]) ) /*0x6930c4*/
  {
    if ( MEMORY[0xA8D63C].__pad_1258[268] ) /*0x6930d0*/
    {
      if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] ) /*0x6930dc*/
      {
        if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228] ) /*0x6930e8*/
        {
          LOBYTE(v5) = (_BYTE)a2; /*0x6930f5*/
          if ( !MEMORY[0xA8D63C].__pad_14B0[688] || *a2 == 533 ) /*0x693101*/
          {
            v5 = *a2 - 513; /*0x693109*/
            switch ( *a2 ) /*0x69311f*/
            {
              case 0x201: /*0x69311f*/
                aP4 = (MouseClass *)aP4->field_0; /*0x693138*/
                v12 = (__int16)aP4 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x693148*/
                v13 = SHIWORD(aP4) - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x693150*/
                LOBYTE(v5) = Tactical::MouseOver(&v12, &v10, v14, &a2, (bool *)&aP4, (bool *)&aP2); /*0x693170*/
                if ( (_BYTE)v5 ) /*0x693177*/
                {
                  LOBYTE(v5) = HandlePlanningModeClick(v12, v13); /*0x693187*/
                  if ( !(_BYTE)v5 && !*(this + 21850) ) /*0x693194*/
                  {
                    v7 = Radar::ScanWaypoints((int)&v10, a2, 1); /*0x6931af*/
                    TacticalClass::HandlePlayerAction((char *)&MEMORY[0x87F7E8], (MouseClass *)&v10, aP2, a2, v7, 0); /*0x6931c9*/
                    DisplayClass::InitViewBounds((int)&MEMORY[0x87F7E8], &v12); /*0x6931d8*/
                    LOBYTE(v5) = (unsigned __int8)SetCapture((HWND)g_hWnd); /*0x6931e4*/
                    *(this + 21850) = 1; /*0x6931ea*/
                  }
                }
                break; /*0x6931f6*/
              case 0x202: /*0x69311f*/
                aP4 = (MouseClass *)aP4->field_0; /*0x69320b*/
                v12 = (__int16)aP4 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x69321b*/
                v13 = SHIWORD(aP4) - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x693221*/
                LOBYTE(v5) = ScriptAction::HitTest(v12, v13); /*0x693225*/
                if ( !(_BYTE)v5 && *(this + 21850) ) /*0x693232*/
                {
                  Tactical::MouseOver(&v12, &v10, v14, &a2, (bool *)&aP4, (bool *)&aP2); /*0x69325e*/
                  v8 = Radar::ScanWaypoints((int)&v10, a2, 0); /*0x693271*/
                  PlayerClass::ExecuteCommand((char *)&MEMORY[0x87F7E8], (MouseClass *)v14, &v10, a2, v8, 0); /*0x69328b*/
                  *(this + 21850) = 0; /*0x693290*/
                  LOBYTE(v5) = ReleaseCapture(); /*0x693296*/
                }
                break; /*0x6932a1*/
              case 0x204: /*0x69311f*/
                aP4 = (MouseClass *)aP4->field_0; /*0x6932b6*/
                v12 = (__int16)aP4 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x6932c6*/
                v13 = SHIWORD(aP4) - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x6932cc*/
                LOBYTE(v5) = UI_Handle(v12, v13); /*0x6932d0*/
                if ( !*(this + 21850) ) /*0x6932d5*/
                {
                  LOBYTE(v5) = Tactical::MouseOver(&v12, &v10, v14, &a2, (bool *)&aP4, (bool *)&aP2); /*0x693301*/
                  if ( (_BYTE)v5 ) /*0x693308*/
                  {
                    if ( !MEMORY[0xA8D63C].__pad_14B0[688] ) /*0x693314*/
                    {
                      DisplayClass::vt_entry_B0((int)&v12); /*0x693320*/
                      *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[16888] = v12; /*0x69332d*/
                      *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[16892] = v13; /*0x693339*/
                      MEMORY[0x87F8E4].__pad_125C[16896] = 0; /*0x69333f*/
                      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 16))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x693347*/
                    }
                    LOBYTE(v5) = (unsigned __int8)SetCapture((HWND)g_hWnd); /*0x693351*/
                    *(this + 21850) = 1; /*0x693357*/
                  }
                }
                break; /*0x693363*/
              case 0x205: /*0x69311f*/
                aP4 = (MouseClass *)aP4->field_0; /*0x693378*/
                LOBYTE(v5) = UI_Handle_63AB00( /*0x69338a*/
                               (__int16)aP4 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532],
                               SHIWORD(aP4) - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]);
                if ( *(this + 21850) ) /*0x69338f*/
                {
                  if ( MEMORY[0x87F8E4].__pad_125C[16896] ) /*0x69339d*/
                  {
                    LOBYTE(v5) = MEMORY[0x87F8E4].__pad_125C[16900]; /*0x69339f*/
                    (*(void (__thiscall **)(MouseClass **, _DWORD, int))&MEMORY[0x87F7E8]->__pad_3C[12])( /*0x6933b1*/
                      &MEMORY[0x87F7E8],
                      0,
                      v5);
                    MEMORY[0x87F8E4].__pad_125C[16896] = 0; /*0x6933b4*/
                  }
                  else
                  {
                    TacticalClass::DispatchMode((int *)&MEMORY[0x87F7E8], (MouseClass *)&v12); /*0x6933c6*/
                  }
                  DisplayClass::ExitMode(this); /*0x6933cd*/
                  *(this + 21850) = 0; /*0x6933d2*/
                  LOBYTE(v5) = ReleaseCapture(); /*0x6933d8*/
                }
                break; /*0x6933e3*/
              case 0x215: /*0x69311f*/
                LOBYTE(v5) = (_BYTE)g_hWnd; /*0x6933ea*/
                if ( (ObjectClass *)aP4->field_0 != g_hWnd && *(this + 21850) == 1 ) /*0x6933fc*/
                  LOBYTE(v5) = (*(char (__thiscall **)(_BYTE *))(*(_DWORD *)this + 140))(this); /*0x693402*/
                break; /*0x693402*/
              default:
                return v5;
            }
          }
        }
      }
    }
  }
  return v5; /*0x6931f1*/
}
}
} // namespace gamemd

// 0x6A6610
namespace gamemd {
int Tactical::UpdateUIVisibility()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Tactical_UpdateUIVisibility(_DWORD *this)
{
  int v1; // eax
  int result; // eax
  int v3; // eax

  if ( HouseClass_Player == (#375 *)MEMORY[0xAC1198] ) /*0x6a661d*/
  {
    v3 = 26; /*0x6a66f8*/
    if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6a66f0*/
      v3 = 18; /*0x6a66ff*/
    if ( 4 * MEMORY[0x884CF8] > 2 * ((MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v3 + MEMORY[0x886F94] - 7) / 50) ) /*0x6a6743*/
    {
      if ( !(unsigned __int8)DialogControl::IsHidden(MEMORY[0xB0B328]) ) /*0x6a6745*/
        DialogControl::Hide(MEMORY[0xB0B328]); /*0x6a6753*/
      result = DialogControl::IsHidden(MEMORY[0xB0B408]); /*0x6a675d*/
      if ( !(_BYTE)result ) /*0x6a6764*/
        return DialogControl::Hide(MEMORY[0xB0B408]); /*0x6a6764*/
      return result; /*0x6a6764*/
    }
    if ( (unsigned __int8)DialogControl::IsHidden(MEMORY[0xB0B328]) ) /*0x6a6770*/
      DialogControl::Show(MEMORY[0xB0B328]); /*0x6a677e*/
    result = DialogControl::IsHidden(MEMORY[0xB0B408]); /*0x6a6788*/
    if ( !(_BYTE)result ) /*0x6a678f*/
      return result; /*0x6a678f*/
    return DialogControl::Show(MEMORY[0xB0B408]); /*0x6a6796*/
  }
  v1 = 26; /*0x6a6631*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6a6629*/
    v1 = 18; /*0x6a6638*/
  if ( *(this + 997 * *(this + 5351) + 1382) <= 2 /*0x6a668a*/
                                              * ((MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v1 + MEMORY[0x886F94] - 7)
                                               / 50) )
  {
    if ( (unsigned __int8)DialogControl::IsHidden(MEMORY[0xB0B328]) ) /*0x6a66bb*/
      DialogControl::Show(MEMORY[0xB0B328]); /*0x6a66c9*/
    result = DialogControl::IsHidden(MEMORY[0xB0B408]); /*0x6a66d3*/
    if ( !(_BYTE)result ) /*0x6a66da*/
      return result; /*0x6a66da*/
    return DialogControl::Show(MEMORY[0xB0B408]); /*0x6a66da*/
  }
  if ( !(unsigned __int8)DialogControl::IsHidden(MEMORY[0xB0B328]) ) /*0x6a668c*/
    DialogControl::Hide(MEMORY[0xB0B328]); /*0x6a669a*/
  result = DialogControl::IsHidden(MEMORY[0xB0B408]); /*0x6a66a4*/
  if ( !(_BYTE)result ) /*0x6a66ab*/
    return DialogControl::Hide(MEMORY[0xB0B408]); /*0x6a66b1*/
  return result; /*0x6a679b*/
}
}
} // namespace gamemd

// 0x6D4E20
namespace gamemd {
void Tactical::DisplayTacticalOverlayText(wchar_t * String)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall DisplayTacticalOverlayText(signed int *this, wchar_t *String)
{
  signed int v3; // edi
  __int64 v4; // rax
  int v5; // kr00_4
  int v6; // ebx
  _BYTE *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // ebx
  int v11; // ebp
  int v12; // [esp+10h] [ebp-2Ch] BYREF
  int v13[2]; // [esp+14h] [ebp-28h] BYREF
  int v14; // [esp+1Ch] [ebp-20h]
  int v15; // [esp+20h] [ebp-1Ch]
  int v16; // [esp+24h] [ebp-18h]
  int v17; // [esp+28h] [ebp-14h]
  _DWORD v18[4]; // [esp+2Ch] [ebp-10h] BYREF

  if ( !MEMORY[0xA8ED6B] && (String && wcslen(String) || *(this + 41) != -1) ) /*0x6d4e52*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88731C] + 132))(MEMORY[0x88731C]) ) /*0x6d4e60*/
    {
      v3 = *(this + 41); /*0x6d4e6e*/
      if ( v3 != -1 && MEMORY[0xA8F798] && MEMORY[0xA8F794] && *((__int16 *)MEMORY[0xA8F794] + 3) > v3 ) /*0x6d4e93*/
      {
        v4 = MEMORY[0x886FAC] - *((__int16 *)MEMORY[0xA8F794] + 2); /*0x6d4ea0*/
        v5 = MEMORY[0x886FA8] - *((__int16 *)MEMORY[0xA8F794] + 1); /*0x6d4eb1*/
        v13[1] = ((int)v4 - HIDWORD(v4)) >> 1; /*0x6d4eb9*/
        v13[0] = v5 / 2; /*0x6d4ebd*/
        DrawToSurfaceSHP( /*0x6d4ee5*/
          MEMORY[0x88731C],
          MEMORY[0xA8F798],
          (int)MEMORY[0xA8F794],
          v3,
          v13,
          &MEMORY[0x886FA0],
          0,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
      }
      else if ( String ) /*0x6d4ef6*/
      {
        if ( wcslen(String) ) /*0x6d4efd*/
        {
          v15 = MEMORY[0x886FA4]; /*0x6d4f18*/
          v17 = MEMORY[0x886FAC]; /*0x6d4f35*/
          v6 = MEMORY[0x886FA8]; /*0x6d4f3e*/
          v7 = (_BYTE *)aP0; /*0x6d4f4c*/
          v8 = MEMORY[0x886FA0]; /*0x6d4f5a*/
          v14 = MEMORY[0x886FA0]; /*0x6d4f61*/
          v16 = MEMORY[0x886FA8]; /*0x6d4f65*/
          v9 = (255 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x6d4f89*/
             | (255 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
             | (255 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
          Text::Layout((_DWORD *)aP0, String, &v12, v13, MEMORY[0x886FA8]); /*0x6d4f90*/
          v18[0] = v14; /*0x6d4fbb*/
          v10 = v8 + (v6 - v12) / 2; /*0x6d4fc1*/
          v18[2] = v16 + v14; /*0x6d4fc9*/
          v18[1] = v15; /*0x6d4fd1*/
          v18[3] = v15 + v17; /*0x6d4fd9*/
          v11 = v15 + (v17 - v13[0]) / 2; /*0x6d4fdf*/
          Char::Swap(v7, 1); /*0x6d4fe1*/
          TextGroup::SetRect(v7, v18); /*0x6d4fed*/
          Property::Set(v7, v9); /*0x6d4ff5*/
          FontRenderer::DrawText((int)v7, MEMORY[0x88731C], (int)String, v10, v11, 0, 0); /*0x6d5013*/
        }
      }
    }
  }
}
}
} // namespace gamemd

// 0x6D6070
namespace gamemd {
unsigned int Tactical::SetTacticalPosition(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall Tactical::SetTacticalPosition(int this, IUnknown *aP1)
{
  int v3; // esi
  int v4; // ebx
  IUnknown *v5; // esi
  int v6; // ebx
  unsigned int result; // eax
  IUnknown *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  v3 = aP1->field_0; /*0x6d607d*/
  v9 = aP1->field_4; /*0x6d6083*/
  v8 = (IUnknown *)(-60 * v9 / 2 + 60 * v3 / 2); /*0x6d60c3*/
  v4 = 30 * v9 / 2 + 30 * v3 / 2; /*0x6d60de*/
  v5 = (IUnknown *)((int)v8 / 256); /*0x6d60e2*/
  v6 = v4 / 256 - ZCoordToScreenY(aP1->field_8); /*0x6d6118*/
  v8 = (IUnknown *)((int)v8 / 256); /*0x6d611d*/
  v9 = v6; /*0x6d6121*/
  if ( ClampCoordMap((int *)&v8) && !MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x6d6135*/
  {
    v5 = v8; /*0x6d6137*/
    v6 = v9; /*0x6d613b*/
  }
  *(_DWORD *)(this + 3428) = v5; /*0x6d613f*/
  *(_DWORD *)(this + 3444) = v5; /*0x6d6145*/
  *(_DWORD *)(this + 3432) = v6; /*0x6d614d*/
  *(_DWORD *)(this + 3448) = v6; /*0x6d6153*/
  result = TacticalClass::CalcViewportCells(this); /*0x6d6159*/
  *(_BYTE *)(this + 3453) = 1; /*0x6d615e*/
  return result; /*0x6d6165*/
}
}
} // namespace gamemd

// 0x6D6590
namespace gamemd {
unsigned int * Tactical::PixelToCell(AbstractClass * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Tactical::PixelToCell(int this, AbstractClass *aP1, IUnknown *aP2)
{
  int v3; // eax
  int v5; // eax
  int v6; // ecx
  float *v7; // eax
  BuildingTypeClass *v8; // esi
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  int v12; // ecx
  float *v13; // eax
  BuildingTypeClass *v14; // esi
  int v15; // eax
  VectorClass *v16; // esi
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  int v21; // ecx
  int *v22; // eax
  int v23; // ecx
  int v24; // ebx
  int v25; // ebp
  bool v26; // cc
  char v28; // [esp+13h] [ebp-69h]
  char v29; // [esp+14h] [ebp-68h]
  char v30; // [esp+15h] [ebp-67h]
  char v31; // [esp+16h] [ebp-66h]
  char v32; // [esp+17h] [ebp-65h]
  int v33; // [esp+18h] [ebp-64h]
  _DWORD *NeighbourContent; // [esp+1Ch] [ebp-60h]
  _DWORD *v35; // [esp+20h] [ebp-5Ch]
  int i; // [esp+24h] [ebp-58h]
  int v37; // [esp+28h] [ebp-54h]
  int v38; // [esp+2Ch] [ebp-50h] BYREF
  int v39; // [esp+34h] [ebp-48h]
  int v40; // [esp+38h] [ebp-44h]
  int v41; // [esp+3Ch] [ebp-40h]
  int v42; // [esp+40h] [ebp-3Ch]
  int v43[2]; // [esp+44h] [ebp-38h] BYREF
  float v44; // [esp+4Ch] [ebp-30h] BYREF
  float v45; // [esp+50h] [ebp-2Ch]
  int v46; // [esp+54h] [ebp-28h]
  float v47; // [esp+58h] [ebp-24h] BYREF
  float v48; // [esp+5Ch] [ebp-20h]
  int v49; // [esp+60h] [ebp-1Ch]
  float v50[3]; // [esp+64h] [ebp-18h] BYREF
  float v51[3]; // [esp+70h] [ebp-Ch] BYREF
  char aP2a; // [esp+84h] [ebp+8h]
  IUnknown *aP2b; // [esp+84h] [ebp+8h]

  v3 = aP2->field_0; /*0x6d659f*/
  v46 = 0; /*0x6d65ab*/
  v5 = *(_DWORD *)(this + 176) + v3; /*0x6d65bf*/
  v6 = aP2->field_4 + *(_DWORD *)(this + 180); /*0x6d65c6*/
  v41 = v5 - *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x6d65c8*/
  v42 = v6 - *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x6d65d2*/
  v44 = (float)(v5 - *(_DWORD *)&stru_87C374.__pad_579C[21648]); /*0x6d65e1*/
  v45 = (float)(v6 - *(_DWORD *)&stru_87C374.__pad_579C[21652]); /*0x6d65ed*/
  v7 = TransformMatrix3x4Point((AbstractClass *)v50, (IUnknown *)(this + 3556), (IUnknown *)&v44); /*0x6d65f1*/
  v44 = *v7; /*0x6d65f8*/
  v45 = v7[1]; /*0x6d6603*/
  v46 = *((_DWORD *)v7 + 2); /*0x6d660a*/
  v8 = (BuildingTypeClass *)Math::RoundToInt(v44); /*0x6d6617*/
  v9 = Math::RoundToInt(v45); /*0x6d6619*/
  LODWORD(v47) = (unsigned __int8)v8; /*0x6d6631*/
  LOWORD(v37) = (int)v8 / 256; /*0x6d6638*/
  LODWORD(v48) = (unsigned __int8)v9; /*0x6d664c*/
  HIWORD(v37) = v9 / 256; /*0x6d6663*/
  v49 = 0; /*0x6d6668*/
  Coord::To_ScreenRaw((AbstractClass *)v43, (IUnknown *)&v47); /*0x6d666c*/
  v10 = aP2->field_4 - *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x6d6684*/
  v41 = aP2->field_0 - *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x6d668a*/
  v11 = v10 + 180; /*0x6d668e*/
  v42 = v10; /*0x6d6694*/
  v39 = v41; /*0x6d6698*/
  v40 = v10 + 180; /*0x6d669c*/
  for ( i = 0; ; ++i )
  {
    v12 = *(_DWORD *)(this + 180); /*0x6d66b4*/
    v43[0] = v39 + *(_DWORD *)(this + 176); /*0x6d66bc*/
    v43[1] = v11 + v12; /*0x6d66c6*/
    v47 = (float)v43[0]; /*0x6d66d5*/
    v49 = 0; /*0x6d66e1*/
    v48 = (float)(v11 + v12); /*0x6d66e9*/
    v13 = TransformMatrix3x4Point((AbstractClass *)v51, (IUnknown *)(this + 3556), (IUnknown *)&v47); /*0x6d66ed*/
    v47 = *v13; /*0x6d66f4*/
    v48 = v13[1]; /*0x6d66ff*/
    v49 = *((_DWORD *)v13 + 2); /*0x6d6706*/
    v14 = (BuildingTypeClass *)Math::RoundToInt(v47); /*0x6d6713*/
    v15 = Math::RoundToInt(v48); /*0x6d6715*/
    LOWORD(v38) = (int)v14 / 256; /*0x6d672a*/
    HIWORD(v38) = v15 / 256; /*0x6d6747*/
    v16 = (VectorClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v38); /*0x6d6751*/
    v33 = v11 - 15 * SHIBYTE(v16[17].Capacity); /*0x6d6768*/
    if ( ((int)v16[20].vtable0 & 0x100) != 0 )
    {
      NeighbourContent = Cell::GetNeighbourContent(v16, 2u); /*0x6d6786*/
      v35 = Cell::GetNeighbourContent(v16, 4u); /*0x6d678f*/
      if ( ((int)v16[20].vtable0 & 0x800) == 0 /*0x6d67b7*/
        || (aP2a = 1, (*((_DWORD *)Cell::GetNeighbourContent(v16, 0) + 80) & 0x100) != 0) )
      {
        aP2a = 0; /*0x6d67b9*/
      }
      if ( ((int)v16[20].vtable0 & 0x800) != 0 /*0x6d67e2*/
        || (v28 = 1, (*((_DWORD *)Cell::GetNeighbourContent(v16, 6u) + 80) & 0x100) != 0) )
      {
        v28 = 0; /*0x6d67e4*/
      }
      v17 = (int)v16[20].vtable0 & 0x800; /*0x6d67ef*/
      if ( !v17 || (v29 = 1, (v35[80] & 0x100) != 0) ) /*0x6d6806*/
        v29 = 0; /*0x6d6808*/
      if ( v17 || (v31 = 1, (NeighbourContent[80] & 0x100) != 0) ) /*0x6d6820*/
        v31 = 0; /*0x6d6822*/
      if ( !v17 /*0x6d6858*/
        || (v18 = SHIBYTE(v16[17].Capacity) - *((char *)NeighbourContent + 283),
            (int)((HIDWORD(v18) ^ v18) - HIDWORD(v18)) > 1)
        || (v32 = 1, (NeighbourContent[80] & 0x100) != 0) )
      {
        v32 = 0; /*0x6d685a*/
      }
      if ( v17 /*0x6d688e*/
        || (v19 = SHIBYTE(v16[17].Capacity) - *((char *)v35 + 283), (int)((HIDWORD(v19) ^ v19) - HIDWORD(v19)) > 1)
        || (v30 = 1, (v35[80] & 0x100) != 0) )
      {
        v30 = 0; /*0x6d6890*/
      }
      v20 = SLOWORD(v16[2].Items); /*0x6d6899*/
      v21 = SHIWORD(v16[2].Items) << 8; /*0x6d68a8*/
      v50[2] = 0.0; /*0x6d68ab*/
      LODWORD(v50[1]) = v21; /*0x6d68b2*/
      LODWORD(v50[0]) = v20 << 8; /*0x6d68ca*/
      v22 = Coord::To_ScreenRaw((AbstractClass *)&v44, (IUnknown *)v50); /*0x6d68ce*/
      v23 = -30 * SHIBYTE(v16[17].Capacity) / 2 + v22[1] - *(_DWORD *)(this + 180); /*0x6d68ff*/
      if ( v23 <= v10 ) /*0x6d6903*/
      {
        if ( v29 || v30 ) /*0x6d6917*/
        {
          *(_DWORD *)aP1->__pad_0 = v38 + 0x10000; /*0x6d6a61*/
          return aP1->__pad_0; /*0x6d6a67*/
        }
        if ( v31 || v32 ) /*0x6d692f*/
        {
          HIWORD(aP2b) = HIWORD(v38); /*0x6d6a0c*/
          LOWORD(aP2b) = v38 + 1; /*0x6d6a1b*/
          *(_DWORD *)aP1->__pad_0 = aP2b; /*0x6d6a2d*/
          return aP1->__pad_0; /*0x6d6a33*/
        }
      }
      if ( aP2a || v28 )
      {
        v24 = v41 - (*v22 - *(_DWORD *)(this + 176)); /*0x6d6971*/
        v25 = v42 - v23; /*0x6d6977*/
        if ( aP2a && v25 - v24 / 2 > 15 || v28 && v25 + v24 / 2 > 15 )
          v33 -= ((int)v16[20].vtable0 & 0x100) != 0 ? 0x3C : 0;
        v10 = v42; /*0x6d69c0*/
      }
      else
      {
        v33 -= ((int)v16[20].vtable0 & 0x100) != 0 ? 0x3C : 0;
      }
    }
    if ( v33 <= v10 ) /*0x6d69c8*/
      break; /*0x6d69c8*/
    v26 = i + 1 < 180; /*0x6d69d8*/
    --v40; /*0x6d69dd*/
    if ( !v26 ) /*0x6d69e5*/
    {
      *(_DWORD *)aP1->__pad_0 = v37; /*0x6d69f9*/
      return aP1->__pad_0; /*0x6d69ff*/
    }
    v11 = v40; /*0x6d66a6*/
  }
  *(_DWORD *)aP1->__pad_0 = v38; /*0x6d6a78*/
  return aP1->__pad_0; /*0x6d69f6*/
}
}
} // namespace gamemd

// 0x6DA7D0
namespace gamemd {
int Tactical::AddCellToDrawList(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Tactical::AddCellToDrawList(int this, IUnknown *aP1)
{
  int result; // eax
  ObjectClass *Coords; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // edx
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // ebp
  int v12; // eax
  int v13; // esi
  int v14[3]; // [esp+Ch] [ebp-Ch] BYREF

  result = MEMORY[0x87F7F4]; /*0x6da7d0*/
  if ( !MEMORY[0x87F7F4] ) /*0x6da7df*/
  {
    result = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6da7e9*/
    if ( *(_DWORD *)&aP1->__pad_58[4] != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] /*0x6da800*/
      && ((aP1->__pad_11C[16] & 8) != 0 || aP1->__pad_134[4]) )
    {
      *(_DWORD *)&aP1->__pad_58[4] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6da80e*/
      Coords = (ObjectClass *)CellClass::GetCoords(aP1, v14); /*0x6da819*/
      v5 = *(_DWORD *)Coords->__pad_0; /*0x6da81e*/
      v6 = *(_DWORD *)&Coords->__pad_0[4]; /*0x6da820*/
      v7 = *(_DWORD *)&Coords->__pad_0[8]; /*0x6da823*/
      v8 = *(_DWORD *)&aP1->__pad_11C[16]; /*0x6da826*/
      v14[2] = v7; /*0x6da82e*/
      if ( (v8 & 8) != 0 && (v8 & 0x10) != 0 ) /*0x6da836*/
      {
        v9 = -60 * v6 / 2 + 60 * v5 / 2; /*0x6da866*/
        v14[0] = v9; /*0x6da870*/
        v10 = 30 * v6 / 2 + 30 * v5 / 2; /*0x6da87b*/
      }
      else
      {
        v9 = -60 * v6 / 2 + 60 * v5 / 2; /*0x6da8ad*/
        v14[0] = v9; /*0x6da8b7*/
        v10 = 30 * v6 / 2 + 30 * v5 / 2; /*0x6da8c2*/
      }
      v11 = v10; /*0x6da8c6*/
      v12 = ZCoordToScreenY(0); /*0x6da8d8*/
      v14[0] = v9 / 256; /*0x6da8e8*/
      v13 = v9 / 256 - *(_DWORD *)(this + 176); /*0x6da8ff*/
      result = v11 / 256 - v12 - *(_DWORD *)(this + 180); /*0x6da907*/
      if ( v13 >= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532] - 30 /*0x6da936*/
        && result >= -30
        && v13 <= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8540] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532] + 30
        && result <= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8544] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536] + 15 )
      {
        result = *(_DWORD *)(this + 224); /*0x6da938*/
        if ( result < 799 ) /*0x6da943*/
        {
          *(_DWORD *)(this + 4 * result + 228) = aP1; /*0x6da949*/
          result = *(_DWORD *)(this + 224) + 1; /*0x6da956*/
          *(_DWORD *)(this + 224) = result; /*0x6da957*/
        }
        aP1->__pad_134[4] = 0; /*0x6da961*/
        *(_BYTE *)(this + 3453) = 1; /*0x6da968*/
      }
    }
  }
  return result; /*0x6da96f*/
}
}
} // namespace gamemd

// 0x6DB210
namespace gamemd {
int Tactical::DrawTacticalConnectorLines()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Tactical::DrawTacticalConnectorLines(_DWORD *this)
{
  _DWORD *v2; // ebp
  int result; // eax
  int v4; // edi
  int v5; // ebx
  ObjectClass *Coords; // eax
  int *v7; // eax
  int v8; // edx
  int v9; // ecx
  _DWORD *v10; // eax
  int *v11; // eax
  int v12; // edx
  int *v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  ObjectClass *v17; // eax
  int *v18; // eax
  int v19; // edx
  int v20; // ebp
  int v21; // eax
  int *v22; // eax
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int i; // ebx
  _DWORD *v28; // edi
  int *v29; // eax
  int *v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  int *v34; // eax
  int v35; // [esp+44h] [ebp-D0h]
  int v36; // [esp+44h] [ebp-D0h]
  IUnknown *v37; // [esp+48h] [ebp-CCh] BYREF
  int v38; // [esp+4Ch] [ebp-C8h]
  int v39; // [esp+50h] [ebp-C4h] BYREF
  int v40; // [esp+54h] [ebp-C0h]
  int v41; // [esp+58h] [ebp-BCh] BYREF
  int v42; // [esp+5Ch] [ebp-B8h]
  int v43; // [esp+60h] [ebp-B4h] BYREF
  int v44; // [esp+64h] [ebp-B0h]
  _DWORD v45[2]; // [esp+68h] [ebp-ACh] BYREF
  int v46; // [esp+70h] [ebp-A4h] BYREF
  int v47; // [esp+74h] [ebp-A0h]
  int v48; // [esp+78h] [ebp-9Ch]
  int a1; // [esp+7Ch] [ebp-98h] BYREF
  int v50; // [esp+80h] [ebp-94h]
  int v51; // [esp+84h] [ebp-90h]
  int v52; // [esp+88h] [ebp-8Ch]
  _DWORD v53[3]; // [esp+8Ch] [ebp-88h] BYREF
  _DWORD v54[3]; // [esp+98h] [ebp-7Ch] BYREF
  _DWORD v55[4]; // [esp+A4h] [ebp-70h] BYREF
  _DWORD v56[4]; // [esp+B4h] [ebp-60h] BYREF
  int v57[2]; // [esp+C4h] [ebp-50h] BYREF
  int v58[3]; // [esp+CCh] [ebp-48h] BYREF
  _BYTE v59[12]; // [esp+D8h] [ebp-3Ch] BYREF
  int v60; // [esp+E4h] [ebp-30h] BYREF
  int v61; // [esp+ECh] [ebp-28h] BYREF
  int v62; // [esp+F4h] [ebp-20h] BYREF
  char v63[12]; // [esp+FCh] [ebp-18h] BYREF
  int v64[3]; // [esp+108h] [ebp-Ch] BYREF

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x6db221*/
  v2 = (_DWORD *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x6db236*/
  result = 255 >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672]; /*0x6db251*/
  v4 = result | (255 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]); /*0x6db283*/
  v52 = (255 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]) /*0x6db2b5*/
      | (255 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]);
  v5 = result | (255 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]); /*0x6db2c1*/
  if ( v2 ) /*0x6db2c5*/
  {
    do /*0x6db525*/
    {
      v35 = v2[57]; /*0x6db2d3*/
      if ( v35 ) /*0x6db2d7*/
      {
        Coords = (ObjectClass *)CellClass::GetCoords(v2, v64); /*0x6db2e7*/
        v53[0] = *(_DWORD *)Coords->__pad_0; /*0x6db2ee*/
        v53[1] = *(_DWORD *)&Coords->__pad_0[4]; /*0x6db2fa*/
        v53[2] = *(_DWORD *)&Coords->__pad_0[8]; /*0x6db30b*/
        v7 = Coord::To_ScreenRaw(&v61, v53); /*0x6db30f*/
        v8 = *(this + 44); /*0x6db314*/
        v41 = *v7; /*0x6db31e*/
        v9 = v7[1]; /*0x6db324*/
        v41 -= v8; /*0x6db327*/
        v42 = v9 - *(this + 45); /*0x6db33a*/
        v10 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v35 + 72))(v35, v63); /*0x6db345*/
        v54[0] = *v10; /*0x6db34a*/
        v54[1] = v10[1]; /*0x6db356*/
        v54[2] = v10[2]; /*0x6db367*/
        v11 = Coord::To_ScreenRaw(&v60, v54); /*0x6db36b*/
        v12 = *(this + 44); /*0x6db370*/
        v13 = v11; /*0x6db376*/
        v45[0] = *v11; /*0x6db37b*/
        v14 = v45[0] - v12; /*0x6db37f*/
        v15 = v13[1]; /*0x6db381*/
        v16 = *(this + 45); /*0x6db384*/
        v45[0] = v14; /*0x6db390*/
        v56[1] = v42 - 1; /*0x6db39a*/
        v45[1] = v15 - v16; /*0x6db3a6*/
        v56[2] = 3; /*0x6db3b0*/
        v56[3] = 3; /*0x6db3b7*/
        v56[0] = v41 - 1; /*0x6db3c5*/
        (*(void (__thiscall **)(_DWORD, char *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 16))( /*0x6db3d4*/
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
          &MEMORY[0x87F8E4].__pad_5568[8532],
          v56,
          v4);
        (*(void (__thiscall **)(_DWORD, char *, int *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] /*0x6db3ef*/
                                                                     + 44))(
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
          &MEMORY[0x87F8E4].__pad_5568[8532],
          &v41,
          v45,
          v4);
      }
      v36 = v2[58]; /*0x6db3fa*/
      if ( v36 ) /*0x6db3fe*/
      {
        v17 = (ObjectClass *)CellClass::GetCoords(v2, v58); /*0x6db40e*/
        a1 = *(_DWORD *)v17->__pad_0; /*0x6db415*/
        v50 = *(_DWORD *)&v17->__pad_0[4]; /*0x6db41c*/
        v51 = *(_DWORD *)&v17->__pad_0[8]; /*0x6db432*/
        v18 = Coord::To_ScreenRaw(&v62, &a1); /*0x6db436*/
        v19 = *(this + 44); /*0x6db43d*/
        v20 = *(this + 45); /*0x6db443*/
        v43 = *v18; /*0x6db449*/
        v21 = v18[1] - v20; /*0x6db452*/
        v43 -= v19; /*0x6db454*/
        v44 = v21 - 60; /*0x6db45f*/
        v22 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v36 + 72))(v36, v59); /*0x6db46d*/
        v46 = *v22; /*0x6db472*/
        v47 = v22[1]; /*0x6db47e*/
        v48 = v22[2]; /*0x6db48f*/
        v23 = Coord::To_ScreenRaw(v57, &v46); /*0x6db493*/
        v37 = (IUnknown *)*v23; /*0x6db49a*/
        v24 = *(this + 45); /*0x6db49e*/
        v25 = v23[1]; /*0x6db4a4*/
        v26 = *(this + 44); /*0x6db4a7*/
        v38 = v25; /*0x6db4ad*/
        v40 = v24; /*0x6db4b5*/
        v39 = v26; /*0x6db4be*/
        Vector2::Subtract(&v37, &v39); /*0x6db4c2*/
        v55[0] = v43 - 1; /*0x6db4d1*/
        v55[1] = v44 - 1; /*0x6db4da*/
        v55[2] = 3; /*0x6db4e4*/
        v55[3] = 3; /*0x6db4e8*/
        (*(void (__thiscall **)(_DWORD, char *, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] + 16))( /*0x6db4f9*/
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
          &MEMORY[0x87F8E4].__pad_5568[8532],
          v55,
          v5);
        (*(void (__thiscall **)(_DWORD, char *, int *, IUnknown **, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] /*0x6db514*/
                                                                        + 44))(
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
          &MEMORY[0x87F8E4].__pad_5568[8532],
          &v43,
          &v37,
          v5);
      }
      result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x6db51c*/
      v2 = (_DWORD *)result; /*0x6db521*/
    }
    while ( result ); /*0x6db525*/
  }
  for ( i = *(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[372] - 1; i >= 0; --i ) /*0x6db536*/
  {
    v28 = *(_DWORD **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[360] + 4 * i); /*0x6db542*/
    result = v28[12]; /*0x6db545*/
    if ( result ) /*0x6db54a*/
    {
      v29 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v28 + 72))(v28, v59); /*0x6db55c*/
      v46 = *v29; /*0x6db561*/
      v47 = v29[1]; /*0x6db568*/
      v48 = v29[2]; /*0x6db57e*/
      v30 = Coord::To_ScreenRaw(v57, &v46); /*0x6db582*/
      v31 = *(this + 44); /*0x6db589*/
      v37 = (IUnknown *)*v30; /*0x6db58f*/
      v32 = *(this + 45); /*0x6db593*/
      v33 = v30[1]; /*0x6db599*/
      v39 = v31; /*0x6db59c*/
      v38 = v33; /*0x6db5a0*/
      v40 = v32; /*0x6db5ad*/
      Vector2::Subtract(&v37, &v39); /*0x6db5b1*/
      v34 = (int *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)v28[12] + 72))(v28[12], v58); /*0x6db5c3*/
      a1 = *v34; /*0x6db5c8*/
      v50 = v34[1]; /*0x6db5d4*/
      v51 = v34[2]; /*0x6db5e2*/
      Coord::To_Screen(this, &a1, (IUnknown *)v45); /*0x6db5e6*/
      result = (*(int (__thiscall **)(_DWORD, char *, IUnknown **, _DWORD *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416] /*0x6db607*/
                                                                                 + 44))(
                 *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9416],
                 &MEMORY[0x87F8E4].__pad_5568[8532],
                 &v37,
                 v45,
                 v52);
    }
  }
  return result; /*0x6db611*/
}
}
} // namespace gamemd

// 0x6DBB60
namespace gamemd {
char Tactical::DrawOverlay(int * a1, BuildingTypeClass * aP2, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Tactical::DrawOverlay(_DWORD *this, int *a1, BuildingTypeClass *aP2, int a4, int a5)
{
  _DWORD *v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  Tactical *v14; // ecx
  _DWORD *v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  ObjectClass *v22; // esi
  int v23; // edi
  int v24; // edx
  int v26; // [esp-8h] [ebp-38h]
  int v27; // [esp-8h] [ebp-38h]
  int v28; // [esp+10h] [ebp-20h] BYREF
  int v29; // [esp+18h] [ebp-18h] BYREF
  int v30; // [esp+1Ch] [ebp-14h]
  _DWORD v31[2]; // [esp+20h] [ebp-10h] BYREF
  _DWORD v32[2]; // [esp+28h] [ebp-8h] BYREF
  BOOL aP2a; // [esp+38h] [ebp+8h]

  v6 = IsoCoord::ToPixel(&v29, *a1, (Tactical *)a1[1]); /*0x6dbb79*/
  v7 = v6[1]; /*0x6dbb83*/
  v8 = *v6 / 256; /*0x6dbb93*/
  v9 = ZCoordToScreenY(a1[2]); /*0x6dbb9b*/
  v10 = *(this + 45); /*0x6dbbac*/
  v11 = v7 / 256 - v9; /*0x6dbbb5*/
  v12 = *(this + 44); /*0x6dbbb7*/
  v32[0] = v8; /*0x6dbbbd*/
  v13 = v8 - v12; /*0x6dbbc3*/
  v14 = *(Tactical **)&aP2->vtable0[4]; /*0x6dbbc5*/
  v32[1] = v11 - v10; /*0x6dbbc8*/
  v26 = *(_DWORD *)aP2->vtable0; /*0x6dbbcf*/
  v32[0] = v13; /*0x6dbbd4*/
  v15 = IsoCoord::ToPixel(&v28, v26, v14); /*0x6dbbd8*/
  v16 = v15[1]; /*0x6dbbe1*/
  v17 = (int)*v15; /*0x6dbbe4*/
  v30 = v16; /*0x6dbbeb*/
  v18 = (BYTE4(v17) + (int)v17) >> 8; /*0x6dbbf6*/
  v19 = ZCoordToScreenY(*(_DWORD *)&aP2->vtable0[8]); /*0x6dbbf9*/
  v31[0] = v18; /*0x6dbc0b*/
  v20 = v18 - *(this + 44); /*0x6dbc22*/
  v31[1] = v30 / 256 - v19 - *(this + 45); /*0x6dbc28*/
  v21 = *(_DWORD *)&aP2->vtable0[8]; /*0x6dbc2c*/
  v31[0] = v20; /*0x6dbc34*/
  v28 = v21; /*0x6dbc38*/
  v29 = a1[2]; /*0x6dbc58*/
  aP2a = v29 >= 728; /*0x6dbc5e*/
  v22 = *(ObjectClass **)&MEMORY[0x87F8E4].__pad_5568[9416]; /*0x6dbc66*/
  v23 = **(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9416]; /*0x6dbc77*/
  v27 = 14 - Math::RoundToInt((double)v21 * *(double *)&MEMORY[0xB077F8].field_5550 + (double)(v21 >= 728) + 0.5); /*0x6dbc99*/
  v24 = 14 - Math::RoundToInt((double)v29 * *(double *)&MEMORY[0xB077F8].field_5550 + (double)aP2a + 0.5); /*0x6dbcb2*/
  (*(void (__thiscall **)(ObjectClass *, char *, _DWORD *, _DWORD *, int, int, int, int))(v23 + 52))( /*0x6dbcc7*/
    v22,
    &MEMORY[0x87F8E4].__pad_5568[8532],
    v32,
    v31,
    a4,
    v24,
    v27,
    a5);
  return 1; /*0x6dbcca*/
}
}
} // namespace gamemd

// 0x6DC470
namespace gamemd {
Tactical * Tactical::UpdateView(char a2)
{
{
    *(void**)this = vt_Tactical;
    *(this + 1) = (unsigned int)vt_Tactical;
    *(this + 2) = (unsigned int)vt_Tactical;
    *(this + 3) = &vt_Tactical;
    g_TacticalClass_Instance = 0;
    AbstractClass::DTOR(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (Tactical *)this;
}
}
} // namespace gamemd

// 0x6E4A80
namespace gamemd {
int Tactical_42::FindItem(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Tactical_42_::sub_6E4A80(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x6e4a80*/
  result = 0; /*0x6e4a83*/
  if ( v2 <= 0 ) /*0x6e4a88*/
    return -1; /*0x6e4a9f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x6e4a8e*/
  {
    if ( ++result >= v2 ) /*0x6e4a9d*/
      return -1; /*0x6e4a9d*/
  }
  return result; /*0x6e4aa2*/
}
}
} // namespace gamemd

// 0x4A35F0
namespace gamemd {
char * Tactical::SetCellTransform(int a2, CoordStruct * aP2, int a4, CoordStruct * aP4, int a6, int a7)
{
{
    char *result;
    result = this + 32 * a2;
    *(int *)result = aP2;
    *((int *)(result) + 1) = a4;
    *((int *)(result) + 2) = aP4;
    *((int *)(result) + 6) = a6;
    *((int *)(result) + 7) = a7;
    *((int *)(result) + 3) = 1065353216;
    return result;
}
}
} // namespace gamemd

// 0x4F4450
namespace gamemd {
char Tactical::SelectObject(int a2)
{
{
    char result;
    result = this->StubReturn56(a2);
    if ( result )
  {
    DataGlobal_A8EF54 = (*(int (__thiscall **)(int))(*(int *)(a2) + 36))(a2);
    return 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6DA560
namespace gamemd {
int * Tactical::ScrollMap(Tactical * aP0, int a2)
{
{
    int *result;
    result = (int *)&DataGlobal_B05488.__pad_579C[8868];
    do
  {
    if ( (Tactical *)*result == aP0 )
    *result = 0;
    result += 3;
  }
    while ( (int)result < (int)&DataGlobal_B05488.__pad_579C[14868] );
    if ( aP0 == *(Tactical **)&DataGlobal_87C374.__pad_14B0[12628] )
  {
    result = (int *)MIXClass::CopyHeader((int)&DataGlobal_87C374.__pad_14B0[8132], 0);
    *(int *)&DataGlobal_87C374.__pad_14B0[12628] = 0;
    *(int *)&DataGlobal_87C374.__pad_14B0[12632] = 0;
    *(int *)&DataGlobal_87C374.__pad_14B0[12636] = -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6DBCE0
namespace gamemd {
int Tactical::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -816401526;
  a2[1] = 298984461;
  a2[2] = 1610644609;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x6DBD20
namespace gamemd {
int Tactical::InitMap(int a1, int a2)
{
{
    int result;
    int v3;
    int v4;
    int *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    result = AbstractClass::SaveLoad_Prefix_0((int *)a1, a2);
    if ( result >= 0 )
  {
    if ( a1 )
    SmallFunc_6D1E30((int *)a1, (int)&a2);
    v3 = *(int *)(a1 + 224);
    v4 = 0;
    *(int *)(a1 + 3504) = 0;
    if ( v3 > 0 )
    {
    v5 = (int *)(a1 + 228);
    do
      {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v5);
    ++v4;
    ++v5;
      }
    while ( v4 < *(int *)(a1 + 224) );
    }
    v6 = *(int *)(a1 + 3432);
    v9 = *(int *)(a1 + 3428);
    v10 = v6;
    if ( !ClampCoordMap(&v9) || g_ArmageddonMode )
    {
    v7 = *(int *)(a1 + 3428);
    v8 = *(int *)(a1 + 3432);
    }
    else
    {
    v7 = v9;
    v8 = v10;
    }
    *(int *)(a1 + 3428) = v7;
    *(int *)(a1 + 3444) = v7;
    *(int *)(a1 + 3432) = v8;
    *(int *)(a1 + 3448) = v8;
    TacticalClass::CalcViewportCells(a1);
    *(char *)(a1 + 3453) = 1;
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x6DBE00
namespace gamemd {
int Tactical::UpdateMapView(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}
} // namespace gamemd

// 0x6DC450
namespace gamemd {
int Tactical::StubReturn56()
{
return 56;
}
} // namespace gamemd

// 0x6DC460
namespace gamemd {
int Tactical::StubReturn3608()
{
return 3608;
}
} // namespace gamemd

// 0x6E47F0
namespace gamemd {
void Tactical_42::ClearBuffer()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Tactical_42_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Tactical_42_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->Tactical_42_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x6E4820
namespace gamemd {
unsigned int Tactical_42::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->Tactical_42_field_0xC )
    return (unsigned int)(a2 - this->Tactical_42_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6E4840
namespace gamemd {
int Tactical_42::UpdateView(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x6E4850
namespace gamemd {
char Tactical_42::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x6E4890
namespace gamemd {
char Tactical_42::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Tactical_42_field_0x4 )
      {
    v6 = this->Tactical_42_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->Tactical_42_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Tactical_42_field_0x4 = 0;
        }
      }
    this->Tactical_42_field_0x4 = v4;
    this->Tactical_42_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->FindItem();
    return 1;
  }
}
}
} // namespace gamemd

// 0x6E4940
namespace gamemd {
void Tactical_42::ddtor()
{
{
    if ( this->Tactical_42_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->Tactical_42_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->Tactical_42_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x6E4970
namespace gamemd {
int Tactical::Init(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->Tactical_field_0xC )
    return 0;
    v3 = this->Tactical_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6E49B0
namespace gamemd {
unsigned int Tactical_42::InitMap(int a2)
{
{
    if ( (unsigned char)this->Tactical_42_field_0xC )
    return (unsigned int)(a2 - this->Tactical_42_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6E49D0
namespace gamemd {
char Tactical_42::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Tactical_42_field_0x4 )
    {
    v5 = this->Tactical_42_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->Tactical_42_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Tactical_42_field_0x4 = 0;
      }
    }
    this->Tactical_42_field_0x4 = v4;
    this->Tactical_42_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->FindItem();
  }
    v7 = this->Tactical_42_field_0x8;
    if ( v7 < this->Tactical_42_field_0x10 )
    this->Tactical_42_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x6E4AB0
namespace gamemd {
VectorClass * Tactical_42::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TActionClass;
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
