// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Tactical_42_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/TaskForceClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TagTypeClass_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TacticalMap_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"

// 0x42A6D0
namespace gamemd {
void * Tactical::ConstructTacticalSurface()
{

  unsigned int *v2; // edi
  int v3; // ebp
  unsigned int *v4; // eax
  unsigned int *v5; // edi
  void *v6; // eax
  int v7; // ecx
  int v8; // eax
  unsigned int *v9; // eax
  unsigned int *v10; // edi
  void *v11; // eax
  int v12; // ecx
  int v13; // eax
  unsigned int *v14; // eax
  unsigned int *v15; // ecx
  int v16; // edx
  unsigned int *v17; // eax
  int v18; // ecx
  int *v19; // eax
  unsigned int *v20; // eax
  int i; // ecx
  char *v22; // ecx
  unsigned int *v23; // ebp
  char *v25; // [esp+10h] [ebp-Ch]
  char *v26; // [esp+14h] [ebp-8h]
  int v27; // [esp+18h] [ebp-4h]

  *(unsigned int *)this = (unsigned int *)(0);
  *((unsigned char *)this + 1) = 0; /*0x42a6e2*/
  *((unsigned char *)this + 2) = 0; /*0x42a6e5*/
  *((unsigned char *)this + 3) = 1; /*0x42a6e8*/
  *((unsigned int *)this + 1) = 1065353216; /*0x42a6eb*/
  *((unsigned char *)this + 8) = 1; /*0x42a6f2*/
  *((unsigned int *)this + 6) = 0; /*0x42a6f5*/
  *((unsigned int *)this + 7) = 0; /*0x42a6f8*/
  *((unsigned int *)this + 8) = 0; /*0x42a6fb*/
  *((unsigned int *)this + 9) = 0; /*0x42a6fe*/
  *((unsigned int *)this + 10) = -1; /*0x42a701*/
  *((unsigned int *)this + 11) = -1; /*0x42a704*/
  *((unsigned char *)this + 56) = 1; /*0x42a707*/
  *((unsigned int *)this + 15) = 0; /*0x42a70a*/
  *((unsigned int *)this + 27) = -1; /*0x42a70d*/
  *((unsigned short *)this + 56) = 0; /*0x42a710*/
  *((unsigned short *)this + 57) = 0; /*0x42a714*/
  v2 = (unsigned char *)this + 116; /*0x42a718*/
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
  v4 = RA2_OPNEW(0x14u); /*0x42a741*/
  v5 = v4; /*0x42a746*/
  if ( v4 ) /*0x42a74d*/
  {
    v4[3] = (unsigned int)(0);
    v4[4] = (unsigned int)(-1);
    *v4 = 0; /*0x42a75e*/
    v4[1] = 0x10000; /*0x42a760*/
    v6 = RA2_OPNEW(0x40004u); /*0x42a767*/
    v7 = v5[1]; /*0x42a76c*/
    v5[2] = v6; /*0x42a76f*/
    v8 = 0; /*0x42a775*/
    if ( v7 >= 0 ) /*0x42a779*/
    {
      do /*0x42a788*/
      {
        ++v8; /*0x42a77e*/
        *(unsigned int *)(v5[2] + 4 * v8 - 4) = 0; /*0x42a77f*/
      }
      while ( v8 <= v5[1] ); /*0x42a788*/
    }
  }
  else
  {
    v5 = 0; /*0x42a78c*/
  }
  *((unsigned int *)this + 5) = v5; /*0x42a790*/
  v9 = RA2_OPNEW(0x14u); /*0x42a793*/
  v10 = v9; /*0x42a798*/
  if ( v9 ) /*0x42a79f*/
  {
    v9[3] = (unsigned int)(0);
    v9[4] = (unsigned int)(-1);
    *v9 = 0; /*0x42a7b0*/
    v9[1] = 10000; /*0x42a7b2*/
    v11 = RA2_OPNEW(0x9C44u); /*0x42a7b9*/
    v12 = v10[1]; /*0x42a7be*/
    v10[2] = v11; /*0x42a7c1*/
    v13 = 0; /*0x42a7c7*/
    if ( v12 >= 0 ) /*0x42a7cb*/
    {
      do /*0x42a7da*/
      {
        ++v13; /*0x42a7d0*/
        *(unsigned int *)(v10[2] + 4 * v13 - 4) = 0; /*0x42a7d1*/
      }
      while ( v13 <= v10[1] ); /*0x42a7da*/
    }
  }
  else
  {
    v10 = 0; /*0x42a7de*/
  }
  *((unsigned int *)this + 26) = v10; /*0x42a7e5*/
  v14 = RA2_OPNEW(0x100004u); /*0x42a7e8*/
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
  *((unsigned int *)this + 4) = v14; /*0x42a819*/
  v17 = RA2_OPNEW(0x180004u); /*0x42a81c*/
  if ( v17 ) /*0x42a826*/
    v17[393216] = 0; /*0x42a828*/
  else
    v17 = 0; /*0x42a830*/
  *((unsigned int *)this + 3) = v17; /*0x42a832*/
  v17[393216] = 0; /*0x42a835*/
  v18 = 0; /*0x42a83e*/
  *(unsigned int *)(*((unsigned int *)this + 4) + 0x100000) = 0; /*0x42a840*/
  v19 = (int *)*((unsigned int *)this + 5); /*0x42a846*/
  if ( *v19 >= 0 ) /*0x42a84b*/
  {
    do /*0x42a859*/
    {
      ++v18; /*0x42a850*/
      *(unsigned int *)(v19[2] + 4 * v18 - 4) = 0; /*0x42a851*/
    }
    while ( v18 <= *v19 ); /*0x42a859*/
  }
  *v19 = (int)((unsigned int *)(0));
  v20 = (char *)((unsigned int *)*((unsigned int *)this + 26));
  for ( i = 0; i <= *v20; *(unsigned int *)(v20[2] + 4 * i - 4) = 0 ) /*0x42a864*/
    ++i; /*0x42a869*/
  *v20 = 0; /*0x42a874*/
  v22 = (unsigned char *)this + 116; /*0x42a87c*/
  v26 = (unsigned char *)this + 188; /*0x42a87f*/
  v25 = (unsigned char *)this + 116; /*0x42a883*/
  v23 = (unsigned char *)this + 76; /*0x42a887*/
  v27 = 3; /*0x42a88a*/
  while ( 1 ) /*0x42a898*/
  {
    *(v23 - 3) = 0; /*0x42a898*/
    *v23 = 0; /*0x42a89b*/
    v23[3] = 0; /*0x42a89e*/
    (*(void (**)(char *))(*(unsigned int *)v22 + 12))(v22); /*0x42a8a3*/
    memset(v26, 0, 0x3E8u); /*0x42a8b5*/
    v23[778] = 0; /*0x42a8bf*/
    ++v23; /*0x42a8c5*/
    v25 += 24; /*0x42a8d2*/
    v26 += 1000; /*0x42a8d6*/
    if ( !--v27 ) /*0x42a8de*/
      break; /*0x42a8de*/
    v22 = v25; /*0x42a894*/
  }
  *((unsigned int *)this + 25) = RA2_OPNEW(0x27100u); /*0x42a8ed*/
  return this; /*0x42a8f2*/

}
}
// 0x484050
namespace gamemd {
void * Tactical::CreateTacticalLightSurface(int * a2, int * a1, IUnknown * aP2, int * a3, int * a4, IUnknown * aP5)
{

  int *v7; // eax
  int *v8; // edx
  IUnknown *v9; // ebx
  IUnknown *v11; // ecx
  int *v12; // edi
  int v13; // esi
  int *result; // eax
  int64_t v15; // [esp-8h] [ebp-1Ch]
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
  if ( !*((unsigned short *)this + 18) && !*((unsigned short *)this + 19) /*0x4840a8*/
    || *((unsigned short *)this + 18) == 0xFFFF && *((unsigned short *)this + 19) == 0xFFFF )
  {
    result = (int *)CreateSurfaceClassPrimary(1000, 1000, 1000); /*0x484161*/
    *a2 = (int)result; /*0x48416d*/
  }
  else
  {
    IDA_HIDWORD(v15) = &a4; /*0x4840b2*/
    IDA_LODWORD(v15) = &aP5; /*0x4840b7*/
    Tactical::CalculateTacticalLighting((IUnknown *)this, v7, v11, v8, v12, v9, &a6, v15); /*0x4840c4*/
    if ( *((unsigned int *)this + 13) /*0x484125*/
      && (a1 = (int *)a6,
          aP2 = aP5,
          a3 = a4,
          QuantizeColorRGB((int *)&a1, (int *)&aP2, (int *)&a3),
          v13 = *((unsigned int *)this + 13),
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
// 0x484180
namespace gamemd {
ScenarioClass * * Tactical::CalculateTacticalLighting(int * a1, IUnknown * aP2, int * a3, int * a4, IUnknown * aP5, int * a6, long long a8)
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
  unsigned int v33[2]; // [esp+24h] [ebp-20h] BYREF
  int v34; // [esp+2Ch] [ebp-18h]
  int v35; // [esp+30h] [ebp-14h]
  int v36; // [esp+34h] [ebp-10h]
  int v37; // [esp+38h] [ebp-Ch]
  int v38; // [esp+3Ch] [ebp-8h]
  int v39; // [esp+40h] [ebp-4h]

  v8 = (IUnknown *)(this);
  if ( !IDA_LOWORD(this->field_24) && !IDA_HIWORD(this->field_24) /*0x4841a9*/
    || IDA_LOWORD(this->field_24) == 0xFFFF && IDA_HIWORD(this->field_24) == 0xFFFF )
  {
    *a1 = (int)((gamemd::ScenarioClass **)(0x10000));
    aP2->field_0 = (gamemd::ScenarioClass **)(0);
    *a3 = 1000; /*0x484642*/
    *a4 = 1000; /*0x48464c*/
    aP5->field_0 = 1000; /*0x484656*/
    *a6 = 1000; /*0x484660*/
    *(unsigned int *)a8 = 1000; /*0x484666*/
    *(unsigned int *)IDA_HIDWORD(a8) = 1000; /*0x48466c*/
    return IDA_HIDWORD(a8); /*0x48465c*/
  }
  v9 = a3; /*0x4841b5*/
  *a3 = 1000 * *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13612) / 100; /*0x4841de*/
  *a6 = 1000 * *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13620) / 100; /*0x48420d*/
  *(unsigned int *)a8 = 1000 * *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13624) / 100; /*0x48423c*/
  v10 = 0; /*0x48426b*/
  *(unsigned int *)IDA_HIDWORD(a8) = 1000 * *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13628) / 100; /*0x48426d*/
  v32 = 0; /*0x484273*/
  for ( aP2->field_0 = 0; v32 < g_BridgeCellPool; ++v32 ) /*0x484285*/
  {
    v11 = *(unsigned int *)&dword_ABCA14->__pad_0[4 * v10]; /*0x484291*/
    if ( *(unsigned char *)(v11 + 72) && *(int *)&HouseClass_Player.__pad_5568[22724] >= *(unsigned int *)(v11 + 52) ) /*0x4842aa*/
    {
      v28 = v8->field_24; /*0x4842b5*/
      v12 = ((int16_t)v28 << 8) + 128; /*0x4842cc*/
      v13 = (SHIWORD(v28) << 8) + 128; /*0x4842ce*/
      v33[0] = 128; /*0x4842d0*/
      v33[1] = 128; /*0x4842d4*/
      Isometric::InitTables((int)v8, (IUnknown *)v33); /*0x4842dd*/
      v14 = (int *)(v11 + 56); /*0x4842e2*/
      v15 = *(unsigned int *)(v11 + 56); /*0x4842e7*/
      v38 = *(unsigned int *)(v11 + 60); /*0x4842ec*/
      v16 = *(unsigned int *)(v11 + 68); /*0x4842f0*/
      v39 = *(unsigned int *)(v11 + 64); /*0x4842f6*/
      v29 = v12 - v15; /*0x4842fe*/
      v37 = *(unsigned int *)(v11 + 56); /*0x484306*/
      v17 = *(unsigned int *)(v11 + 60); /*0x48430a*/
      v39 = *(unsigned int *)(v11 + 64); /*0x484310*/
      if ( v29 * v29 + (v13 - v17) * (v13 - v17) <= v16 * v16 ) /*0x48432d*/
      {
        v34 = *v14; /*0x48433a*/
        v35 = *(unsigned int *)(v11 + 60); /*0x484341*/
        v37 = *v14; /*0x48434d*/
        v30 = v13 - *(unsigned int *)(v11 + 60); /*0x48435e*/
        v36 = *(unsigned int *)(v11 + 64); /*0x484369*/
        v39 = *(unsigned int *)(v11 + 64); /*0x484370*/
        v18 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)v30 * (double)v30 + (double)(v12 - v34) /*0x484385*/
                                                                                          * (double)(v12 - v34)));
        v19 = Math::RoundToInt(v18); /*0x48438d*/
        if ( v19 <= v16 ) /*0x484394*/
        {
          v20 = (1000 * v16 - 1000 * v19) / v16; /*0x4843bd*/
          aP2->field_0 += (int)(v20 * *(unsigned int *)(v11 + 36)) / 1000; /*0x4843db*/
          *a6 += (int)(v20 * *(unsigned int *)(v11 + 40)) / 1000; /*0x4843fc*/
          *(unsigned int *)a8 += (int)(v20 * *(unsigned int *)(v11 + 44)) / 1000; /*0x48441d*/
          *(unsigned int *)IDA_HIDWORD(a8) += (int)(v20 * *(unsigned int *)(v11 + 48)) / 1000; /*0x48443e*/
        }
      }
      v8 = (IUnknown *)(this);
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
      *v9 += SHIBYTE(v8->field_118) * *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13684) /*0x4844ec*/
           - *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13708);
      v23 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13708); /*0x4844fa*/
      v24 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13712) * (SHIBYTE(v8->field_118) + 4); /*0x484503*/
    }
    else
    {
      if ( NukeFlash::IsActive() ) /*0x48450f*/
      {
        *v9 += SHIBYTE(v8->field_118) * *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13684) /*0x484537*/
             - *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13680);
        v22 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13684) * (SHIBYTE(v8->field_118) + 4) /*0x484559*/
            - *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13680)
            + aP5->field_0;
        goto LABEL_21; /*0x48455b*/
      }
      *v9 += SHIBYTE(v8->field_118) * *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13636) /*0x48457c*/
           - *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13632);
      v23 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13632); /*0x48458a*/
      v24 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13636) * (SHIBYTE(v8->field_118) + 4); /*0x484593*/
    }
    v22 = v24 - v23 + aP5->field_0; /*0x48459e*/
    goto LABEL_21; /*0x48459e*/
  }
  *v9 += SHIBYTE(v8->field_118) * *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13660) /*0x48449b*/
       - *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13656);
  v22 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13660) * (SHIBYTE(v8->field_118) + 4) /*0x4844bd*/
      - *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13656)
      + aP5->field_0;
LABEL_21:
  aP5->field_0 = v22; /*0x4845a0*/
  v25 = *v9; /*0x4845a2*/
  if ( *v9 >= 2000 ) /*0x4845a9*/
    v25 = 2000; /*0x4845ab*/
  *v9 = v25; /*0x4845c0*/
  *a4 = v25; /*0x4845c2*/
  Map_Calc(a1, a4, a6, (int *)a8, (int *)IDA_HIDWORD(a8)); /*0x4845cf*/
  v26 = (*a1 * aP5->field_0) >> 16; /*0x4845da*/
  aP5->field_0 = v26; /*0x4845e2*/
  if ( v26 >= 2000 ) /*0x4845e4*/
    v26 = 2000; /*0x4845e6*/
  aP5->field_0 = v26; /*0x4845eb*/
  *v9 = *v9 <= 0 ? 0 : *v9;
  *a4 = *a4 <= 0 ? 0 : *a4;
  result = aP5->field_0 <= 0 ? 0 : aP5->field_0;
  aP5->field_0 = (gamemd::ScenarioClass **)(result);
  return (gamemd::ScenarioClass **)(result);

}
}
// 0x4A91B0
namespace gamemd {
unsigned int * Tactical::MouseMove(MouseClass * aP1, MouseClass * aP2)
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
  unsigned int *v14; // eax
  int v15; // ecx
  DisplayClass *v16; // eax
  int v17; // ecx
  int16_t v19; // dx
  unsigned short *v20; // eax
  int16_t v21; // dx
  int v22; // ebx
  int16_t v23; // ax
  int16_t v24; // ax
  int16_t v25; // cx
  DisplayClass *v26; // edx
  int16_t v27; // ax
  MouseClass *v28; // [esp+10h] [ebp-14h] BYREF
  int v29; // [esp+14h] [ebp-10h] BYREF
  int v30; // [esp+18h] [ebp-Ch]
  unsigned char v31[8]; // [esp+1Ch] [ebp-8h] BYREF

  v3 = (MouseClass *)aP2->field_0; /*0x4a91ba*/
  v4 = (uint16_t)aP2->field_0 == *(unsigned short *)&g_abs_89F690; /*0x4a91bd*/
  aP2 = (MouseClass *)aP2->field_0; /*0x4a91c6*/
  if ( v4 && IDA_HIWORD(aP2) == *(unsigned short *)&g_abs_89F690 ) /*0x4a91dc*/
  {
    v6 = (MouseClass *)(*(int (**)(unsigned int, int *))(**(unsigned int **)&g_abs_87F8E4 + 52))( /*0x4a91ef*/
                         *(unsigned int *)&g_abs_87F8E4,
                         &v29);
    v7 = *(IUnknown **)&g_abs_87F8E4; /*0x4a91f2*/
    v8 = *(unsigned int *)&g_abs_87F8E4; /*0x4a91f8*/
    v9 = v6; /*0x4a91fe*/
    v10 = v6->field_0; /*0x4a9200*/
    v11 = v9->field_4; /*0x4a9204*/
    if ( v10 < *(int *)&g_abs_87F8E4 /*0x4a9223*/
      || v10 >= *(unsigned int *)&g_abs_87F8E4 + *(unsigned int *)&g_abs_87F8E4
      || (int)v11 < *(int *)&g_abs_87F8E4
      || (int)v11 >= *(unsigned int *)&g_abs_87F8E4 + *(unsigned int *)&g_abs_87F8E4 )
    {
      v14 = (unsigned int *)(*(int (**)(unsigned int, unsigned char *))(**(unsigned int **)&g_abs_87F8E4 + 52))( /*0x4a9284*/
                        *(unsigned int *)&g_abs_87F8E4,
                        v31);
      v15 = v14[1]; /*0x4a9292*/
      v29 = *v14 - (unsigned int)v7; /*0x4a9295*/
      v30 = v15 - v8; /*0x4a929f*/
      v3 = (MouseClass *)*Tactical::PixelToCell( /*0x4a92af*/
                            *(int *)&g_abs_87F8E4,
                            (AbstractClass *)&aP2,
                            (IUnknown *)&v29);
    }
    else
    {
      v12 = (int *)(*(int (**)(unsigned int, unsigned char *))(**(unsigned int **)&g_abs_87F8E4 + 52))( /*0x4a9232*/
                     *(unsigned int *)&g_abs_87F8E4,
                     v31);
      v29 = *v12; /*0x4a9237*/
      v30 = v12[1]; /*0x4a924d*/
      v13 = (MouseClass *)*TacticalClass::PixelToCellCheck(&v28, &v29); /*0x4a9256*/
      v28 = v13; /*0x4a925f*/
      if ( v13 == *(MouseClass **)&g_abs_89F690 ) /*0x4a9263*/
        goto LABEL_11; /*0x4a9263*/
      v3 = v13; /*0x4a9273*/
    }
    aP2 = v3; /*0x4a92b1*/
  }
LABEL_11:
  v16 = *(DisplayClass **)((char *)this + 4476); /*0x4a92b5*/
  if ( v16 ) /*0x4a92bd*/
  {
    if ( !g_abs_A8D63C ) /*0x4a92e3*/
    {
      v19 = IDA_HIWORD(aP2) + *((unsigned short *)this + 2237); /*0x4a92f3*/
      IDA_LOWORD(v28) = (unsigned short)v3 + *((unsigned short *)this + 2236); /*0x4a92fb*/
      IDA_HIWORD(v28) = v19; /*0x4a9301*/
      v20 = UI_Move(&v29, &v28, (int)v16); /*0x4a931e*/
      v21 = v20[1] - *((unsigned short *)this + 2237); /*0x4a9331*/
      IDA_LOWORD(aP2) = *v20 - *((unsigned short *)this + 2236); /*0x4a9338*/
      IDA_HIWORD(aP2) = v21; /*0x4a933d*/
      v3 = aP2; /*0x4a9342*/
    }
    v4 = (unsigned short)v3 == *((unsigned short *)this + 2234); /*0x4a9346*/
    aP2 = v3; /*0x4a934d*/
    if ( v4 && IDA_HIWORD(v3) == *((unsigned short *)this + 2235) ) /*0x4a935f*/
    {
      aP1->field_0 = (int)v3; /*0x4a9367*/
      return &aP1->field_0; /*0x4a9361*/
    }
    else
    {
      v22 = *((unsigned int *)this + 1117); /*0x4a9377*/
      if ( *((unsigned int *)this + 1119) ) /*0x4a9371*/
      {
        if ( v3 != *(MouseClass **)((char *)this + 4468) /*0x4a93b0*/
          && (*((unsigned short *)this + 2234) != *(unsigned short *)&g_abs_89F690
           || *((unsigned short *)this + 2235) != *(unsigned short *)&g_abs_89F690) )
        {
          v23 = *((unsigned short *)this + 2235) + *((unsigned short *)this + 2237); /*0x4a93c7*/
          IDA_LOWORD(aP2) = *((unsigned short *)this + 2234) + *((unsigned short *)this + 2236); /*0x4a93d0*/
          IDA_HIWORD(aP2) = v23; /*0x4a93d5*/
          MapClass::SetCellFlagsAlongPath((int16_t **)this, (IUnknown *)&aP2, 0); /*0x4a93e9*/
        }
        if ( v3 != *(MouseClass **)&g_abs_89F690 ) /*0x4a93f5*/
        {
          v24 = *((unsigned short *)this + 2236) + (unsigned short)v3; /*0x4a940a*/
          IDA_HIWORD(aP2) = IDA_HIWORD(v3) + *((unsigned short *)this + 2237); /*0x4a9414*/
          IDA_LOWORD(aP2) = v24; /*0x4a941b*/
          MapClass::SetCellFlagsAlongPath((int16_t **)this, (IUnknown *)&aP2, (unsigned short *)1); /*0x4a942f*/
        }
      }
      *((unsigned int *)this + 1117) = v3; /*0x4a9434*/
      v25 = *((unsigned short *)this + 2236) + (unsigned short)v3; /*0x4a944b*/
      IDA_HIWORD(aP2) = *((unsigned short *)this + 2235) + *((unsigned short *)this + 2237); /*0x4a9452*/
      v26 = *(DisplayClass **)((char *)this + 4476); /*0x4a9457*/
      IDA_LOWORD(aP2) = v25; /*0x4a945d*/
      *((unsigned char *)this + 4480) = GetBuildingPlacement( /*0x4a9485*/
                                  *(unsigned int **)((char *)this + 4520),
                                  *((unsigned int *)this + 1131),
                                  (int)v26,
                                  (int16_t *)&aP2);
      v27 = *((unsigned short *)this + 2237) + *((unsigned short *)this + 2235); /*0x4a94a0*/
      IDA_LOWORD(aP2) = *((unsigned short *)this + 2234) + *((unsigned short *)this + 2236); /*0x4a94a7*/
      IDA_HIWORD(aP2) = v27; /*0x4a94b0*/
      *((unsigned char *)this + 4481) = ProcessDataBuildingTypeClass( /*0x4a94da*/
                                  *(unsigned int **)((char *)this + 4520),
                                  *((unsigned int *)this + 1131),
                                  *((unsigned int *)this + 1119),
                                  (int16_t *)&aP2);
      aP1->field_0 = v22; /*0x4a94e6*/
      return &aP1->field_0; /*0x4a94e0*/
    }
  }
  else
  {
    v17 = *((unsigned int *)this + 1117); /*0x4a92bf*/
    *((unsigned int *)this + 1117) = v3; /*0x4a92c9*/
    aP1->field_0 = v17; /*0x4a92d2*/
    return &aP1->field_0; /*0x4a92c5*/
  }

}
}
// 0x568350
namespace gamemd {
int Tactical::IsCellVisible(IUnknown * aP1)
{

  int v2; // edx
  int v3; // esi
  int v4; // eax

  v2 = *((unsigned int *)this + 61); /*0x56836f*/
  v3 = (int16_t)(aP1->field_0 / 256); /*0x56837b*/
  v4 = (int16_t)(aP1->field_4 / 256); /*0x56837e*/
  return v4 + v3 > v2 && v3 - v4 < v2 && v4 - v3 < v2 && v4 + v3 <= v2 + 2 * *((unsigned int *)this + 62); /*0x5683a5*/

}
}
// 0x58C2A0
namespace gamemd {
void * Tactical::GetCellData()
{

  return (char *)g_MapTileArray + 80 * *(unsigned int *)this + 160 * unk_89C2DC * *((unsigned short *)this + 1); /*0x58c2be*/

}
}
// 0x640A40
namespace gamemd {
void* Tactical_Radar_Render(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7, void * a8)
{
  int **v8; // ecx
  int *result; // eax
  int v10; // ebp
  int v11; // ebx
  int i; // eax
  unsigned int *v13; // esi
  int v14; // esi
  int v15; // edi
  int v16; // edx
  signed int v17; // esi
  signed int j; // edi
  signed int v19; // ebx
  int v20; // esi
  int v21; // edi
  int v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // esi
  int *v28; // ecx
  int *v29; // eax
  int v30; // edi
  int v31; // ebx
  int v32; // ebp
  char *v33; // eax
  char *v34; // esi
  unsigned int *v35; // edi
  int v36; // ebx
  int v37; // eax
  int v38; // ebx
  char *v39; // ecx
  int v40; // ebp
  int v41; // edi
  int v42; // edx
  int v43; // edx
  int v44; // eax
  int *v45; // eax
  int *v46; // edi
  int v47; // ebx
  int v48; // eax
  int v52; // [esp+2Ch] [ebp-88h]
  int v55; // [esp+38h] [ebp-7Ch] BYREF
  unsigned int *v56; // [esp+3Ch] [ebp-78h] BYREF
  int FileSHP; // [esp+40h] [ebp-74h] BYREF
  int v58; // [esp+44h] [ebp-70h]
  int v59; // [esp+48h] [ebp-6Ch] BYREF
  int v60; // [esp+4Ch] [ebp-68h]
  int v64; // [esp+5Ch] [ebp-58h]
  int v65; // [esp+60h] [ebp-54h] BYREF
  int v66; // [esp+64h] [ebp-50h] BYREF
  int v67; // [esp+68h] [ebp-4Ch]
  int v68; // [esp+6Ch] [ebp-48h] BYREF
  int v69[3]; // [esp+70h] [ebp-44h] BYREF
  int v70; // [esp+7Ch] [ebp-38h]
  int v71; // [esp+80h] [ebp-34h] BYREF
  int v72; // [esp+84h] [ebp-30h] BYREF
  int v73; // [esp+88h] [ebp-2Ch]
  int v74; // [esp+8Ch] [ebp-28h] BYREF
  unsigned int v75[2]; // [esp+90h] [ebp-24h] BYREF
  int v76; // [esp+98h] [ebp-1Ch] BYREF
  int v77; // [esp+9Ch] [ebp-18h]
  unsigned int v78[3]; // [esp+A0h] [ebp-14h] BYREF
  unsigned char v79[8]; // [esp+ACh] [ebp-8h] BYREF

  result = *v8; /*0x640a46*/
  v8 = v8; /*0x640a4b*/
  if ( *v8 ) /*0x640a46*/
  {
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x640a5d*/
    v10 = 10000; /*0x640a62*/
    v64 = 10000; /*0x640a6c*/
    v58 = 10000; /*0x640a70*/
    v52 = 0; /*0x640a74*/
    v11 = 0; /*0x640a7c*/
    for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x640a85*/
          i;
          i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
    {
      v13 = (unsigned int *)(i + 36); /*0x640a8b*/
      if ( (uint8_t)LayerClass::IsWithinUsableArea( /*0x640a96*/
                              (LayerClass *)&stru_87F5F0.__pad_58[416],
                              (int16_t *)(i + 36),
                              0) )
      {
        v56 = (unsigned int *)*v13; /*0x640aa7*/
        v14 = (IDA_SHIWORD(v56) << 8) + 128; /*0x640ab9*/
        v15 = ((int16_t)v56 << 8) + 128; /*0x640ac3*/
        Coord::Subtract((Coord *)&v66, v15, v14, 0); /*0x640acb*/
        Coord::Subtract((Coord *)&v71, v15, v14, 0); /*0x640ad8*/
        IsoCoord::ToScreenOffset(v71, v67, &v55, &v59); /*0x640af7*/
        v16 = v59 / 30; /*0x640b2a*/
        if ( v55 / 60 < v10 ) /*0x640b2e*/
        {
          v64 = v55 / 60; /*0x640b30*/
          v10 = v55 / 60; /*0x640b34*/
        }
        if ( v55 / 60 > v52 ) /*0x640b3a*/
          v52 = v55 / 60; /*0x640b3c*/
        if ( v16 < v58 ) /*0x640b44*/
          v58 = v59 / 30; /*0x640b46*/
        if ( v16 > v11 ) /*0x640b4c*/
          v11 = v59 / 30; /*0x640b4e*/
      }
    }
    v17 = 0; /*0x640b62*/
    for ( j = 0; j < 8; ++j ) /*0x640b64*/
    {
      if ( (uint8_t)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, j) ) /*0x640b71*/
        ++v17; /*0x640b7a*/
    }
    v19 = 0; /*0x640b81*/
    v59 = j; /*0x640b83*/
    for ( v17 = v17; v19 < v17; ++v19 ) /*0x640b8d*/
    {
      if ( (!v19 || v19 <= j) && (uint8_t)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, v19) ) /*0x640ba6*/
      {
        v56 = (unsigned int *)*ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v65, v19); /*0x640bc8*/
        v20 = (IDA_SHIWORD(v56) << 8) + 128; /*0x640bde*/
        v21 = ((int16_t)v56 << 8) + 128; /*0x640be4*/
        Coord::Subtract((Coord *)&v71, v21, v20, 0); /*0x640bec*/
        Coord::Subtract((Coord *)&v66, v21, v20, 0); /*0x640bf9*/
        IsoCoord::ToScreenOffset(v66, v72, &v55, &FileSHP); /*0x640c18*/
        v76 = 4; /*0x640c61*/
        v75[1] = FileSHP / 30 - v58 - 1; /*0x640c65*/
        v77 = 4; /*0x640c6d*/
        v75[0] = 2 * (v55 / 60 - v10) - 1; /*0x640c74*/
        v22 = **v8; /*0x640c8a*/
        v23 = (*(int (**)(int *, unsigned int *, unsigned int *, unsigned int))(v22 + 120))(*v8, v78, v75, 0); /*0x640cc4*/
        (*(void (**)(unsigned int, int))(v22 + 16))(*v56, v23); /*0x640cce*/
        v17 = v17; /*0x640cd1*/
        j = v59; /*0x640cd5*/
      }
    }
    if ( g_DisplayWidth == (LoadingScreen *)800 ) /*0x640cef*/
    {
      v24 = 499; /*0x640cf1*/
      v25 = 379; /*0x640cf6*/
      v26 = 216; /*0x640cfb*/
      v27 = 166; /*0x640d00*/
    }
    else if ( g_DisplayWidth == (LoadingScreen *)1024 ) /*0x640d0d*/
    {
      v24 = 570; /*0x640d0f*/
      v25 = 424; /*0x640d14*/
      v26 = 300; /*0x640d19*/
      v27 = 260; /*0x640d1e*/
    }
    else
    {
      v26 = 200; /*0x640d25*/
      v24 = 385; /*0x640d2a*/
      v25 = 270; /*0x640d2f*/
      v27 = 200; /*0x640d34*/
    }
    v25 = v25; /*0x640d36*/
    v60 = v24; /*0x640d3e*/
    v26 = v26; /*0x640d42*/
    v28 = *v8; /*0x640d46*/
    v27 = v27; /*0x640d48*/
    v29 = (int *)(*(int (**)(int *, unsigned int *, int, int, int))(*v28 + 120))(v28, v78, a4, a3, a2); /*0x640d56*/
    v77 = *v29; /*0x640d5f*/
    v78[0] = v29[1]; /*0x640d6a*/
    v30 = v29[2]; /*0x640d6e*/
    v31 = v29[3]; /*0x640d71*/
    v32 = 1000 * v66 / v31; /*0x640d83*/
    if ( v32 >= 1000 * v65 / v30 ) /*0x640d96*/
      v32 = 1000 * v65 / v30; /*0x640d98*/
    v70 = (v65 - v32 * v30 / 1000) / 2; /*0x640dd6*/
    v71 = (v66 - v32 * v31 / 1000) / 2; /*0x640ddf*/
    v72 = v65 - 2 * v70; /*0x640dea*/
    v73 = v66 - 2 * v71; /*0x640dee*/
    v33 = (char *)RA2_OPNEW(0x24u); /*0x640df2*/
    if ( v33 ) /*0x640dfc*/
      v34 = DSurface::Construct(v33, v65, v66, 1, 0); /*0x640e13*/
    else
      v34 = 0; /*0x640e17*/
    v35 = (unsigned int *)FileSHP; /*0x640e19*/
    v36 = *(unsigned int *)v34; /*0x640e1d*/
    v37 = (*(int (**)(unsigned int, unsigned char *, unsigned int, unsigned int))(**(unsigned int **)FileSHP + 120))( /*0x640e2f*/
            *(unsigned int *)FileSHP,
            v79,
            0,
            0);
    (*(void (**)(char *, int *, unsigned int, int))(v36 + 8))(v34, &v72, *v35, v37); /*0x640e3d*/
    IDA_HIBYTE(v56) = 0; /*0x640e49*/
    FileSHP = (int)LoadFileSHP(aMmpbShp, (bool *)&v56 + 3); /*0x640e53*/
    v38 = 0; /*0x640e5b*/
    v58 = 0; /*0x640e5f*/
    if ( v55 > 0 ) /*0x640e63*/
    {
      v39 = (char *)dword_A8B230; /*0x640e69*/
      v40 = 4480; /*0x640e6f*/
      v59 = 4480; /*0x640e74*/
      do /*0x64106b*/
      {
        if ( v40 == 4480 || v38 <= v26 ) /*0x640e84*/
        {
          if ( (uint8_t)ScenarioClass::Is_Waypoint_Valid(v39, v38) ) /*0x640e8b*/
          {
            v60 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a5, v38); /*0x640eb0*/
            v41 = (IDA_SHIWORD(v60) << 8) + 128; /*0x640ec2*/
            Coord::Subtract((Coord *)&v74, ((int16_t)v60 << 8) + 128, v41, 0); /*0x640ed4*/
            IsoCoord::ToScreenOffset(v74, v41, &v76, &v68); /*0x640eef*/
            v39 = (char *)dword_A8B230; /*0x640f32*/
            v42 = *(int *)((char *)&dword_A8B230->vtable0 + v40); /*0x640f3a*/
            if ( v42 != -1 ) /*0x640f40*/
            {
              v43 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] /*0x640f66*/
                                          + 4 * *(unsigned int *)(*((unsigned int *)stru_A80220.? + v42) + 90196))
                              + 780);
              v60 = v43; /*0x640f6c*/
              if ( FileSHP ) /*0x640f70*/
              {
                if ( v43 ) /*0x640f78*/
                {
                  v69[0] = v72 * (1000000 * (v76 / 60 - v67) / (int)dword_A8B230[122].vtable3) / 1000000 + v70 - 3; /*0x640fd6*/
                  v44 = *(unsigned int *)v34; /*0x641015*/
                  v69[1] = v73 * (1000000 * (v68 / 30 - v25) / dword_A8B230[122].uniqueId) / 1000000 + v71 - 2; /*0x641025*/
                  v45 = (int *)(*(int (**)(char *, unsigned char *))(v44 + 120))(v34, v79); /*0x641029*/
                  DrawToSurfaceSHP((int)v34, v60, FileSHP, 0, v69, v45, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x64103e*/
                  v39 = (char *)dword_A8B230; /*0x641043*/
                  v38 = v58; /*0x641049*/
                }
              }
            }
          }
          else
          {
            v39 = (char *)dword_A8B230; /*0x64104f*/
          }
        }
        ++v38; /*0x64105d*/
        v40 = v59 + 4; /*0x64105e*/
        v58 = v38; /*0x641063*/
        v59 += 4; /*0x641067*/
      }
      while ( v38 < v55 ); /*0x64106b*/
    }
    v46 = (int *)a7; /*0x641071*/
    (*(void (**)(int, int *, unsigned int))(*(unsigned int *)a7 + 20))(a7, &v27, 0); /*0x641083*/
    v47 = *v46; /*0x641088*/
    v48 = (*(int (**)(char *, unsigned char *, unsigned int, unsigned int))(v34->u32_78)(v34, v79, 0, 0); /*0x641098*/
    result = (int *)(*(int (**)(int *, int *, char *, int))(v47 + 8))(v46, &v26, v34, v48); /*0x6410a4*/
    if ( v34 ) /*0x6410ac*/
      return (**(int *(***)(char *, int))v34)(v34, 1); /*0x6410b4*/
  }
  return result; /*0x6410b6*/
}
}
// 0x692300
namespace gamemd {
int Tactical::MouseOver(MouseClass * aP0, MouseClass * aP1, MouseClass * aP2, MouseClass * aP3, MouseClass * aP4, MouseClass * aP5)
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
  unsigned int *v22; // eax
  unsigned int *v23; // eax
  bool v24; // al
  MouseClass *v25; // eax
  MouseClass *v26; // edi
  ObjectClass *v27; // eax
  ObjectClass *v28; // esi
  IUnknown *v29; // eax
  unsigned short *v30; // eax
  int v31; // edi
  IUnknown *v32; // eax
  unsigned short *v33; // eax
  MouseClass *v35; // [esp-4h] [ebp-2Ch]
  MouseClass *v36; // [esp-4h] [ebp-2Ch]
  IUnknown *v37; // [esp+10h] [ebp-18h] BYREF
  IUnknown *v38; // [esp+14h] [ebp-14h]
  int v39; // [esp+18h] [ebp-10h]
  unsigned int v40[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v6 = aP2; /*0x692307*/
  v7 = aP1; /*0x69230e*/
  aP3->field_0 = 0; /*0x692312*/
  v7->field_0 = *(unsigned int *)&stru_B05488.__pad_188[72]; /*0x69231e*/
  v6->field_0 = *(unsigned int *)&stru_B05488.__pad_1D8[24]; /*0x692329*/
  v8 = aP4; /*0x692332*/
  v6->field_4 = *(void **)&stru_B05488.__pad_1D8[28]; /*0x692336*/
  v9 = aP5; /*0x69233e*/
  v6->field_8 = *(void **)&stru_B05488.__pad_1D8[32]; /*0x692342*/
  IDA_LOBYTE(v8->field_0) = 0; /*0x692345*/
  IDA_LOBYTE(v9->field_0) = 0; /*0x692348*/
  if ( aP0->field_0 < 0 ) /*0x692350*/
    return 0; /*0x692350*/
  v10 = (MouseClass *)aP0->field_4; /*0x692356*/
  if ( (int)v10 < 0 ) /*0x69235b*/
    return 0; /*0x69235b*/
  if ( *(unsigned int *)&stru_87C374.__pad_579C[22548] ) /*0x692369*/
  {
    v37 = (IUnknown *)(*(unsigned int *)&stru_87C374.__pad_579C[21648] + aP0->field_0); /*0x69237c*/
    v38 = (IUnknown *)((char *)v10 + *(unsigned int *)&stru_87C374.__pad_579C[21652]); /*0x692380*/
    v11 = (char *)Tactical::PixelToCell(*(int *)&stru_87C374.__pad_579C[22548], (AbstractClass *)&aP1, (IUnknown *)&v37); /*0x69238e*/
    v8 = aP4; /*0x692393*/
  }
  else
  {
    v11 = &stru_B05488.__pad_188[72]; /*0x692399*/
  }
  v7->field_0 = *(unsigned int *)v11; /*0x6923a0*/
  if ( *(unsigned int *)&stru_87C374.__pad_579C[22548] ) /*0x6923aa*/
  {
    v12 = (MouseClass *)aP0->field_4; /*0x6923ba*/
    v37 = (IUnknown *)(*(unsigned int *)&stru_87C374.__pad_579C[21648] + aP0->field_0); /*0x6923c1*/
    v38 = (IUnknown *)((char *)v12 + *(unsigned int *)&stru_87C374.__pad_579C[21652]); /*0x6923c5*/
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
  if ( !*(unsigned int *)&stru_87C374.__pad_579C[22548] || !Tactical::IsCellVisible(&stru_87C374.__pad_14B0[8132], v14) ) /*0x69240c*/
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
  IDA_LOBYTE(aP5->field_0) = v20; /*0x69249f*/
  IDA_LOBYTE(v8->field_0) = 0; /*0x6924a1*/
  if ( (**(unsigned int **)&HouseClass_Player.__pad_5568[8060] & 0x1000) != 0 ) /*0x6924af*/
  {
    v22 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v37); /*0x6924bb*/
    v23 = Cell::IsBridge(v22); /*0x6924c2*/
    if ( v23 ) /*0x6924c9*/
    {
      IDA_LOBYTE(v8->field_0) = *((unsigned char *)v23 + 1767); /*0x6924d1*/
    }
    else
    {
      v24 = Game::Stub3((IUnknown *)&v37) && g_hWnd; /*0x6924f1*/
      IDA_LOBYTE(v8->field_0) = v24; /*0x6924fa*/
    }
  }
  if ( !IDA_LOBYTE(v21->field_0) && !IDA_LOBYTE(v8->field_0) ) /*0x692505*/
  {
    v25 = TacticalClass::IsOccupiedByTechno(*(unsigned int **)&stru_87C374.__pad_579C[22548], aP0); /*0x692515*/
    v26 = aP3; /*0x69251a*/
    aP3->field_0 = (int)v25; /*0x692520*/
    v27 = (ObjectClass *)AbstractClass::IsTechnoType(v25); /*0x692522*/
    v28 = v27; /*0x692527*/
    if ( v27 && !IDA_BYTE2(v27[6].uniqueId) ) /*0x69252d*/
    {
      if ( v27[3].referenceCount == 2 /*0x692575*/
        && (v35 = *(MouseClass **)(HouseClass_Player.field_0 + 48),
            v29 = (IUnknown *)(*(int (**)(ObjectClass *, unsigned int *))(*(unsigned int *)v27->__pad_0 + 72))(v27, v40),
            v30 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v29),
            !Cell::IsPassableOffset(v30, (IUnknown *)v35))
        || *(unsigned char *)((*(int (**)(ObjectClass *))(*(unsigned int *)v28->__pad_0 + 132))(v28) + 3226) )
      {
        v26->field_0 = 0; /*0x69257f*/
      }
    }
    if ( v26->field_0 ) /*0x692585*/
    {
      if ( (*(int (**)(int))(*(unsigned int *)v26->field_0 + 44))(v26->field_0) == 6 ) /*0x692593*/
      {
        v31 = v26->field_0; /*0x692595*/
        if ( !*(unsigned char *)(v31 + 1050) ) /*0x692597*/
        {
          if ( *(unsigned char *)(v31 + 1773) == 15 /*0x6925dc*/
            && (v36 = *(MouseClass **)(HouseClass_Player.field_0 + 48),
                v32 = (IUnknown *)(*(int (**)(ObjectClass *, unsigned int *))(*(unsigned int *)v28->__pad_0 + 72))(
                                    v28,
                                    v40),
                v33 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v32),
                !Cell::IsPassableOffset(v33, (IUnknown *)v36))
            || *(unsigned char *)(*(unsigned int *)(v31 + 1312) + 5889) )
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
// 0x6930A0
namespace gamemd {
MouseClass * * Tactical::HandleTacticalMouseInput(int _28, unsigned int * a2, int a4, MouseClass * aP4)
{

  int v5; // eax
  int v7; // eax
  int v8; // eax
  int16_t v10; // [esp+8h] [ebp-1Ch] BYREF
  MouseClass *aP2; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h]
  int v14[3]; // [esp+18h] [ebp-Ch] BYREF

  IDA_LOBYTE(v5) = g_abs_A8D63C; /*0x6930a0*/
  if ( g_abs_A8D63C && (g_abs_A8D63C || g_abs_A8D63C) ) /*0x6930c4*/
  {
    if ( g_abs_A8D63C ) /*0x6930d0*/
    {
      if ( *(unsigned int *)&g_abs_87F8E4 ) /*0x6930dc*/
      {
        if ( *(unsigned int *)&g_abs_87F8E4 ) /*0x6930e8*/
        {
          IDA_LOBYTE(v5) = (unsigned char)a2; /*0x6930f5*/
          if ( !g_abs_A8D63C || *a2 == 533 ) /*0x693101*/
          {
            v5 = *a2 - 513; /*0x693109*/
            switch ( *a2 ) /*0x69311f*/
            {
              case 0x201: /*0x69311f*/
                aP4 = (MouseClass *)aP4->field_0; /*0x693138*/
                v12 = (int16_t)aP4 - *(unsigned int *)&g_abs_87F8E4; /*0x693148*/
                v13 = SHIWORD(aP4) - *(unsigned int *)&g_abs_87F8E4; /*0x693150*/
                IDA_LOBYTE(v5) = Tactical::MouseOver(&v12, &v10, v14, &a2, (bool *)&aP4, (bool *)&aP2); /*0x693170*/
                if ( (unsigned char)v5 ) /*0x693177*/
                {
                  IDA_LOBYTE(v5) = HandlePlanningModeClick(v12, v13); /*0x693187*/
                  if ( !(unsigned char)v5 && !*((unsigned char *)this + 21850) ) /*0x693194*/
                  {
                    v7 = Radar::ScanWaypoints((int)&v10, a2, 1); /*0x6931af*/
                    TacticalClass::HandlePlayerAction((char *)&g_abs_87F7E8, (MouseClass *)&v10, aP2, a2, v7, 0); /*0x6931c9*/
                    DisplayClass::InitViewBounds((int)&g_abs_87F7E8, &v12); /*0x6931d8*/
                    IDA_LOBYTE(v5) = (uint8_t)SetCapture((HWND)g_hWnd); /*0x6931e4*/
                    *((unsigned char *)this + 21850) = 1; /*0x6931ea*/
                  }
                }
                break; /*0x6931f6*/
              case 0x202: /*0x69311f*/
                aP4 = (MouseClass *)aP4->field_0; /*0x69320b*/
                v12 = (int16_t)aP4 - *(unsigned int *)&g_abs_87F8E4; /*0x69321b*/
                v13 = SHIWORD(aP4) - *(unsigned int *)&g_abs_87F8E4; /*0x693221*/
                IDA_LOBYTE(v5) = ScriptAction::HitTest(v12, v13); /*0x693225*/
                if ( !(unsigned char)v5 && *((unsigned char *)this + 21850) ) /*0x693232*/
                {
                  Tactical::MouseOver(&v12, &v10, v14, &a2, (bool *)&aP4, (bool *)&aP2); /*0x69325e*/
                  v8 = Radar::ScanWaypoints((int)&v10, a2, 0); /*0x693271*/
                  PlayerClass::ExecuteCommand((char *)&g_abs_87F7E8, (MouseClass *)v14, &v10, a2, v8, 0); /*0x69328b*/
                  *((unsigned char *)this + 21850) = 0; /*0x693290*/
                  IDA_LOBYTE(v5) = ReleaseCapture(); /*0x693296*/
                }
                break; /*0x6932a1*/
              case 0x204: /*0x69311f*/
                aP4 = (MouseClass *)aP4->field_0; /*0x6932b6*/
                v12 = (int16_t)aP4 - *(unsigned int *)&g_abs_87F8E4; /*0x6932c6*/
                v13 = SHIWORD(aP4) - *(unsigned int *)&g_abs_87F8E4; /*0x6932cc*/
                IDA_LOBYTE(v5) = UI_Handle(v12, v13); /*0x6932d0*/
                if ( !*((unsigned char *)this + 21850) ) /*0x6932d5*/
                {
                  IDA_LOBYTE(v5) = Tactical::MouseOver(&v12, &v10, v14, &a2, (bool *)&aP4, (bool *)&aP2); /*0x693301*/
                  if ( (unsigned char)v5 ) /*0x693308*/
                  {
                    if ( !g_abs_A8D63C ) /*0x693314*/
                    {
                      DisplayClass::vt_entry_B0((int)&v12); /*0x693320*/
                      *(unsigned int *)&g_abs_87F8E4 = v12; /*0x69332d*/
                      *(unsigned int *)&g_abs_87F8E4 = v13; /*0x693339*/
                      g_abs_87F8E4 = 0; /*0x69333f*/
                      (*(void (**)(unsigned int))(**(unsigned int **)&g_abs_87F8E4 + 16))(*(unsigned int *)&g_abs_87F8E4); /*0x693347*/
                    }
                    IDA_LOBYTE(v5) = (uint8_t)SetCapture((HWND)g_hWnd); /*0x693351*/
                    *((unsigned char *)this + 21850) = 1; /*0x693357*/
                  }
                }
                break; /*0x693363*/
              case 0x205: /*0x69311f*/
                aP4 = (MouseClass *)aP4->field_0; /*0x693378*/
                IDA_LOBYTE(v5) = UI_Handle_63AB00( /*0x69338a*/
                               (int16_t)aP4 - *(unsigned int *)&g_abs_87F8E4,
                               SHIWORD(aP4) - *(unsigned int *)&g_abs_87F8E4);
                if ( *((unsigned char *)this + 21850) ) /*0x69338f*/
                {
                  if ( g_abs_87F8E4 ) /*0x69339d*/
                  {
                    IDA_LOBYTE(v5) = g_abs_87F8E4; /*0x69339f*/
                    (*(void (**)(MouseClass **, unsigned int, int))&g_abs_87F7E8->__pad_3C[12])( /*0x6933b1*/
                      &g_abs_87F7E8,
                      0,
                      v5);
                    g_abs_87F8E4 = 0; /*0x6933b4*/
                  }
                  else
                  {
                    TacticalClass::DispatchMode((int *)&g_abs_87F7E8, (MouseClass *)&v12); /*0x6933c6*/
                  }
                  DisplayClass::ExitMode(this); /*0x6933cd*/
                  *((unsigned char *)this + 21850) = 0; /*0x6933d2*/
                  IDA_LOBYTE(v5) = ReleaseCapture(); /*0x6933d8*/
                }
                break; /*0x6933e3*/
              case 0x215: /*0x69311f*/
                IDA_LOBYTE(v5) = (unsigned char)g_hWnd; /*0x6933ea*/
                if ( (ObjectClass *)aP4->field_0 != g_hWnd && *((unsigned char *)this + 21850) == 1 ) /*0x6933fc*/
                  IDA_LOBYTE(v5) = (*(char (**)(unsigned char *))(*(unsigned int *)this + 140))(this); /*0x693402*/
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
// 0x6A6610
namespace gamemd {
int Tactical::UpdateUIVisibility()
{

  int v1; // eax
  int result; // eax
  int v3; // eax

  if ( HouseClass_Player == (#375 *)g_abs_AC1198 ) /*0x6a661d*/
  {
    v3 = 26; /*0x6a66f8*/
    if ( *((unsigned int *)g_abs_A8B230 + 3374) ) /*0x6a66f0*/
      v3 = 18; /*0x6a66ff*/
    if ( 4 * g_abs_884CF8 > 2 * ((g_abs_886F9C - g_abs_B0B4F8 - v3 + g_abs_886F94 - 7) / 50) ) /*0x6a6743*/
    {
      if ( !(uint8_t)DialogControl::IsHidden(g_abs_B0B328) ) /*0x6a6745*/
        DialogControl::Hide(g_abs_B0B328); /*0x6a6753*/
      result = DialogControl::IsHidden(g_abs_B0B408); /*0x6a675d*/
      if ( !(unsigned char)result ) /*0x6a6764*/
        return DialogControl::Hide(g_abs_B0B408); /*0x6a6764*/
      return result; /*0x6a6764*/
    }
    if ( (uint8_t)DialogControl::IsHidden(g_abs_B0B328) ) /*0x6a6770*/
      DialogControl::Show(g_abs_B0B328); /*0x6a677e*/
    result = DialogControl::IsHidden(g_abs_B0B408); /*0x6a6788*/
    if ( !(unsigned char)result ) /*0x6a678f*/
      return result; /*0x6a678f*/
    return DialogControl::Show(g_abs_B0B408); /*0x6a6796*/
  }
  v1 = 26; /*0x6a6631*/
  if ( *((unsigned int *)g_abs_A8B230 + 3374) ) /*0x6a6629*/
    v1 = 18; /*0x6a6638*/
  if ( *((unsigned int *)this + 997 * *((unsigned int *)this + 5351) + 1382) <= 2 /*0x6a668a*/
                                              * ((g_abs_886F9C - g_abs_B0B4F8 - v1 + g_abs_886F94 - 7)
                                               / 50) )
  {
    if ( (uint8_t)DialogControl::IsHidden(g_abs_B0B328) ) /*0x6a66bb*/
      DialogControl::Show(g_abs_B0B328); /*0x6a66c9*/
    result = DialogControl::IsHidden(g_abs_B0B408); /*0x6a66d3*/
    if ( !(unsigned char)result ) /*0x6a66da*/
      return result; /*0x6a66da*/
    return DialogControl::Show(g_abs_B0B408); /*0x6a66da*/
  }
  if ( !(uint8_t)DialogControl::IsHidden(g_abs_B0B328) ) /*0x6a668c*/
    DialogControl::Hide(g_abs_B0B328); /*0x6a669a*/
  result = DialogControl::IsHidden(g_abs_B0B408); /*0x6a66a4*/
  if ( !(unsigned char)result ) /*0x6a66ab*/
    return DialogControl::Hide(g_abs_B0B408); /*0x6a66b1*/
  return result; /*0x6a679b*/

}
}
// 0x6D4E20
namespace gamemd {
void Tactical::DisplayTacticalOverlayText(wchar_t * String)
{

  signed int v3; // edi
  int64_t v4; // rax
  int v5; // kr00_4
  int v6; // ebx
  unsigned char *v7; // edi
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
  unsigned int v18[4]; // [esp+2Ch] [ebp-10h] BYREF

  if ( !g_abs_A8ED6B && (String && wcslen(String) || *((unsigned int *)this + 41) != -1) ) /*0x6d4e52*/
  {
    if ( (*(uint8_t (**)(int))(*(unsigned int *)g_abs_88731C + 132))(g_abs_88731C) ) /*0x6d4e60*/
    {
      v3 = *((unsigned int *)this + 41); /*0x6d4e6e*/
      if ( v3 != -1 && g_abs_A8F798 && g_abs_A8F794 && *((int16_t *)g_abs_A8F794 + 3) > v3 ) /*0x6d4e93*/
      {
        v4 = g_abs_886FAC - *((int16_t *)g_abs_A8F794 + 2); /*0x6d4ea0*/
        v5 = g_abs_886FA8 - *((int16_t *)g_abs_A8F794 + 1); /*0x6d4eb1*/
        v13[1] = ((int)v4 - IDA_HIDWORD(v4)) >> 1; /*0x6d4eb9*/
        v13[0] = v5 / 2; /*0x6d4ebd*/
        DrawToSurfaceSHP( /*0x6d4ee5*/
          g_abs_88731C,
          g_abs_A8F798,
          (int)g_abs_A8F794,
          v3,
          v13,
          &g_abs_886FA0,
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
          v15 = g_abs_886FA4; /*0x6d4f18*/
          v17 = g_abs_886FAC; /*0x6d4f35*/
          v6 = g_abs_886FA8; /*0x6d4f3e*/
          v7 = (unsigned char *)aP0; /*0x6d4f4c*/
          v8 = g_abs_886FA0; /*0x6d4f5a*/
          v14 = g_abs_886FA0; /*0x6d4f61*/
          v16 = g_abs_886FA8; /*0x6d4f65*/
          v9 = (255 >> g_abs_8A0DD4 << g_abs_8A0DD0) /*0x6d4f89*/
             | (255 >> g_abs_8A0DE4 << g_abs_8A0DE0)
             | (255 >> g_abs_8A0DDC << g_abs_8A0DD8);
          Text::Layout((unsigned int *)aP0, String, &v12, v13, g_abs_886FA8); /*0x6d4f90*/
          v18[0] = v14; /*0x6d4fbb*/
          v10 = v8 + (v6 - v12) / 2; /*0x6d4fc1*/
          v18[2] = v16 + v14; /*0x6d4fc9*/
          v18[1] = v15; /*0x6d4fd1*/
          v18[3] = v15 + v17; /*0x6d4fd9*/
          v11 = v15 + (v17 - v13[0]) / 2; /*0x6d4fdf*/
          Char::Swap(v7, 1); /*0x6d4fe1*/
          TextGroup::SetRect(v7, v18); /*0x6d4fed*/
          Property::Set(v7, v9); /*0x6d4ff5*/
          FontRenderer::DrawText((int)v7, g_abs_88731C, (int)String, v10, v11, 0, 0); /*0x6d5013*/
        }
      }
    }
  }

}
}
// 0x6D6070
namespace gamemd {
unsigned int Tactical::SetTacticalPosition(IUnknown * aP1)
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
  if ( ClampCoordMap((int *)&v8) && !g_abs_A8D63C ) /*0x6d6135*/
  {
    v5 = v8; /*0x6d6137*/
    v6 = v9; /*0x6d613b*/
  }
  *((unsigned int *)this + 857) = v5; /*0x6d613f*/
  *((unsigned int *)this + 861) = v5; /*0x6d6145*/
  *((unsigned int *)this + 858) = v6; /*0x6d614d*/
  *((unsigned int *)this + 862) = v6; /*0x6d6153*/
  result = TacticalClass::CalcViewportCells(this); /*0x6d6159*/
  *((unsigned char *)this + 3453) = 1; /*0x6d615e*/
  return result; /*0x6d6165*/

}
}
// 0x6D6590
namespace gamemd {
unsigned int * Tactical::PixelToCell(AbstractClass * aP1, IUnknown * aP2)
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
  int64_t v18; // rax
  int64_t v19; // rax
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
  unsigned int *NeighbourContent; // [esp+1Ch] [ebp-60h]
  unsigned int *v35; // [esp+20h] [ebp-5Ch]
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
  v5 = *((unsigned int *)this + 44) + v3; /*0x6d65bf*/
  v6 = aP2->field_4 + *((unsigned int *)this + 45); /*0x6d65c6*/
  v41 = v5 - *(unsigned int *)&stru_87C374.__pad_579C[21648]; /*0x6d65c8*/
  v42 = v6 - *(unsigned int *)&stru_87C374.__pad_579C[21652]; /*0x6d65d2*/
  v44 = (float)(v5 - *(unsigned int *)&stru_87C374.__pad_579C[21648]); /*0x6d65e1*/
  v45 = (float)(v6 - *(unsigned int *)&stru_87C374.__pad_579C[21652]); /*0x6d65ed*/
  v7 = TransformMatrix3x4Point((AbstractClass *)v50, (IUnknown *)((char *)this + 3556), (IUnknown *)&v44); /*0x6d65f1*/
  v44 = *v7; /*0x6d65f8*/
  v45 = v7[1]; /*0x6d6603*/
  v46 = *((unsigned int *)v7 + 2); /*0x6d660a*/
  v8 = (BuildingTypeClass *)Math::RoundToInt(v44); /*0x6d6617*/
  v9 = Math::RoundToInt(v45); /*0x6d6619*/
  IDA_LODWORD(v47) = (uint8_t)v8; /*0x6d6631*/
  IDA_LOWORD(v37) = (int)v8 / 256; /*0x6d6638*/
  IDA_LODWORD(v48) = (uint8_t)v9; /*0x6d664c*/
  IDA_HIWORD(v37) = v9 / 256; /*0x6d6663*/
  v49 = 0; /*0x6d6668*/
  Coord::To_ScreenRaw((AbstractClass *)v43, (IUnknown *)&v47); /*0x6d666c*/
  v10 = aP2->field_4 - *(unsigned int *)&stru_87C374.__pad_579C[21652]; /*0x6d6684*/
  v41 = aP2->field_0 - *(unsigned int *)&stru_87C374.__pad_579C[21648]; /*0x6d668a*/
  v11 = v10 + 180; /*0x6d668e*/
  v42 = v10; /*0x6d6694*/
  v39 = v41; /*0x6d6698*/
  v40 = v10 + 180; /*0x6d669c*/
  for ( i = 0; ; ++i )
  {
    v12 = *((unsigned int *)this + 45); /*0x6d66b4*/
    v43[0] = v39 + *((unsigned int *)this + 44); /*0x6d66bc*/
    v43[1] = v11 + v12; /*0x6d66c6*/
    v47 = (float)v43[0]; /*0x6d66d5*/
    v49 = 0; /*0x6d66e1*/
    v48 = (float)(v11 + v12); /*0x6d66e9*/
    v13 = TransformMatrix3x4Point((AbstractClass *)v51, (IUnknown *)((char *)this + 3556), (IUnknown *)&v47); /*0x6d66ed*/
    v47 = *v13; /*0x6d66f4*/
    v48 = v13[1]; /*0x6d66ff*/
    v49 = *((unsigned int *)v13 + 2); /*0x6d6706*/
    v14 = (BuildingTypeClass *)Math::RoundToInt(v47); /*0x6d6713*/
    v15 = Math::RoundToInt(v48); /*0x6d6715*/
    IDA_LOWORD(v38) = (int)v14 / 256; /*0x6d672a*/
    IDA_HIWORD(v38) = v15 / 256; /*0x6d6747*/
    v16 = (VectorClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&v38); /*0x6d6751*/
    v33 = v11 - 15 * SHIBYTE(v16[17].Capacity); /*0x6d6768*/
    if ( ((int)v16[20].vtable0 & 0x100) != 0 )
    {
      NeighbourContent = Cell::GetNeighbourContent(v16, 2u); /*0x6d6786*/
      v35 = Cell::GetNeighbourContent(v16, 4u); /*0x6d678f*/
      if ( ((int)v16[20].vtable0 & 0x800) == 0 /*0x6d67b7*/
        || (aP2a = 1, (*((unsigned int *)Cell::GetNeighbourContent(v16, 0) + 80) & 0x100) != 0) )
      {
        aP2a = 0; /*0x6d67b9*/
      }
      if ( ((int)v16[20].vtable0 & 0x800) != 0 /*0x6d67e2*/
        || (v28 = 1, (*((unsigned int *)Cell::GetNeighbourContent(v16, 6u) + 80) & 0x100) != 0) )
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
            (int)((IDA_HIDWORD(v18) ^ v18) - IDA_HIDWORD(v18)) > 1)
        || (v32 = 1, (NeighbourContent[80] & 0x100) != 0) )
      {
        v32 = 0; /*0x6d685a*/
      }
      if ( v17 /*0x6d688e*/
        || (v19 = SHIBYTE(v16[17].Capacity) - *((char *)v35 + 283), (int)((IDA_HIDWORD(v19) ^ v19) - IDA_HIDWORD(v19)) > 1)
        || (v30 = 1, (v35[80] & 0x100) != 0) )
      {
        v30 = 0; /*0x6d6890*/
      }
      v20 = SLOWORD(v16[2].Items); /*0x6d6899*/
      v21 = SHIWORD(v16[2].Items) << 8; /*0x6d68a8*/
      v50[2] = 0.0; /*0x6d68ab*/
      IDA_LODWORD(v50[1]) = v21; /*0x6d68b2*/
      IDA_LODWORD(v50[0]) = v20 << 8; /*0x6d68ca*/
      v22 = Coord::To_ScreenRaw((AbstractClass *)&v44, (IUnknown *)v50); /*0x6d68ce*/
      v23 = -30 * SHIBYTE(v16[17].Capacity) / 2 + v22[1] - *((unsigned int *)this + 45); /*0x6d68ff*/
      if ( v23 <= v10 ) /*0x6d6903*/
      {
        if ( v29 || v30 ) /*0x6d6917*/
        {
          *(unsigned int *)aP1->__pad_0 = v38 + 0x10000; /*0x6d6a61*/
          return aP1->__pad_0; /*0x6d6a67*/
        }
        if ( v31 || v32 ) /*0x6d692f*/
        {
          IDA_HIWORD(aP2b) = IDA_HIWORD(v38); /*0x6d6a0c*/
          IDA_LOWORD(aP2b) = v38 + 1; /*0x6d6a1b*/
          *(unsigned int *)aP1->__pad_0 = aP2b; /*0x6d6a2d*/
          return aP1->__pad_0; /*0x6d6a33*/
        }
      }
      if ( aP2a || v28 )
      {
        v24 = v41 - (*v22 - *((unsigned int *)this + 44)); /*0x6d6971*/
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
      *(unsigned int *)aP1->__pad_0 = v37; /*0x6d69f9*/
      return aP1->__pad_0; /*0x6d69ff*/
    }
    v11 = v40; /*0x6d66a6*/
  }
  *(unsigned int *)aP1->__pad_0 = v38; /*0x6d6a78*/
  return aP1->__pad_0; /*0x6d69f6*/

}
}
// 0x6DA7D0
namespace gamemd {
int Tactical::AddCellToDrawList(IUnknown * aP1)
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

  result = g_abs_87F7F4; /*0x6da7d0*/
  if ( !g_abs_87F7F4 ) /*0x6da7df*/
  {
    result = *(unsigned int *)&g_abs_A8D63C; /*0x6da7e9*/
    if ( *(unsigned int *)&aP1->__pad_58[4] != *(unsigned int *)&g_abs_A8D63C /*0x6da800*/
      && ((aP1->__pad_11C[16] & 8) != 0 || aP1->__pad_134[4]) )
    {
      *(unsigned int *)&aP1->__pad_58[4] = *(unsigned int *)&g_abs_A8D63C; /*0x6da80e*/
      Coords = (ObjectClass *)CellClass::GetCoords(aP1, v14); /*0x6da819*/
      v5 = *(unsigned int *)Coords->__pad_0; /*0x6da81e*/
      v6 = *(unsigned int *)&Coords->__pad_0[4]; /*0x6da820*/
      v7 = *(unsigned int *)&Coords->__pad_0[8]; /*0x6da823*/
      v8 = *(unsigned int *)&aP1->__pad_11C[16]; /*0x6da826*/
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
      v13 = v9 / 256 - *((unsigned int *)this + 44); /*0x6da8ff*/
      result = v11 / 256 - v12 - *((unsigned int *)this + 45); /*0x6da907*/
      if ( v13 >= *(unsigned int *)&g_abs_87F8E4 - 30 /*0x6da936*/
        && result >= -30
        && v13 <= *(unsigned int *)&g_abs_87F8E4 + *(unsigned int *)&g_abs_87F8E4 + 30
        && result <= *(unsigned int *)&g_abs_87F8E4 + *(unsigned int *)&g_abs_87F8E4 + 15 )
      {
        result = *((unsigned int *)this + 56); /*0x6da938*/
        if ( result < 799 ) /*0x6da943*/
        {
          *(unsigned int *)((char *)this + 4 * result + 228) = aP1; /*0x6da949*/
          result = *((unsigned int *)this + 56) + 1; /*0x6da956*/
          *((unsigned int *)this + 56) = result; /*0x6da957*/
        }
        aP1->__pad_134[4] = 0; /*0x6da961*/
        *((unsigned char *)this + 3453) = 1; /*0x6da968*/
      }
    }
  }
  return result; /*0x6da96f*/

}
}
// 0x6DB210
namespace gamemd {
void* Tactical::DrawTacticalConnectorLines()
{

  unsigned int *v2; // ebp
  int result; // eax
  int v4; // edi
  int v5; // ebx
  ObjectClass *Coords; // eax
  int *v7; // eax
  int v8; // edx
  int v9; // ecx
  unsigned int *v10; // eax
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
  unsigned int *v28; // edi
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
  unsigned int v45[2]; // [esp+68h] [ebp-ACh] BYREF
  int v46; // [esp+70h] [ebp-A4h] BYREF
  int v47; // [esp+74h] [ebp-A0h]
  int v48; // [esp+78h] [ebp-9Ch]
  int a1; // [esp+7Ch] [ebp-98h] BYREF
  int v50; // [esp+80h] [ebp-94h]
  int v51; // [esp+84h] [ebp-90h]
  int v52; // [esp+88h] [ebp-8Ch]
  unsigned int v53[3]; // [esp+8Ch] [ebp-88h] BYREF
  unsigned int v54[3]; // [esp+98h] [ebp-7Ch] BYREF
  unsigned int v55[4]; // [esp+A4h] [ebp-70h] BYREF
  unsigned int v56[4]; // [esp+B4h] [ebp-60h] BYREF
  int v57[2]; // [esp+C4h] [ebp-50h] BYREF
  int v58[3]; // [esp+CCh] [ebp-48h] BYREF
  unsigned char v59[12]; // [esp+D8h] [ebp-3Ch] BYREF
  int v60; // [esp+E4h] [ebp-30h] BYREF
  int v61; // [esp+ECh] [ebp-28h] BYREF
  int v62; // [esp+F4h] [ebp-20h] BYREF
  char v63[12]; // [esp+FCh] [ebp-18h] BYREF
  int v64[3]; // [esp+108h] [ebp-Ch] BYREF

  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x6db221*/
  v2 = (unsigned int *)LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x6db236*/
  result = 255 >> g_abs_89F690 << g_abs_89F690; /*0x6db251*/
  v4 = result | (255 >> g_abs_89F690 << g_abs_89F690); /*0x6db283*/
  v52 = (255 >> g_abs_89F690 << g_abs_89F690) /*0x6db2b5*/
      | (255 >> g_abs_89F690 << g_abs_89F690);
  v5 = result | (255 >> g_abs_89F690 << g_abs_89F690); /*0x6db2c1*/
  if ( v2 ) /*0x6db2c5*/
  {
    do /*0x6db525*/
    {
      v35 = v2[57]; /*0x6db2d3*/
      if ( v35 ) /*0x6db2d7*/
      {
        Coords = (ObjectClass *)CellClass::GetCoords(v2, v64); /*0x6db2e7*/
        v53[0] = *(unsigned int *)Coords->__pad_0; /*0x6db2ee*/
        v53[1] = *(unsigned int *)&Coords->__pad_0[4]; /*0x6db2fa*/
        v53[2] = *(unsigned int *)&Coords->__pad_0[8]; /*0x6db30b*/
        v7 = Coord::To_ScreenRaw(&v61, v53); /*0x6db30f*/
        v8 = *((unsigned int *)this + 44); /*0x6db314*/
        v41 = *v7; /*0x6db31e*/
        v9 = v7[1]; /*0x6db324*/
        v41 -= v8; /*0x6db327*/
        v42 = v9 - *((unsigned int *)this + 45); /*0x6db33a*/
        v10 = (unsigned int *)(*(int (**)(int, char *))(*(unsigned int *)v35 + 72))(v35, v63); /*0x6db345*/
        v54[0] = *v10; /*0x6db34a*/
        v54[1] = v10[1]; /*0x6db356*/
        v54[2] = v10[2]; /*0x6db367*/
        v11 = Coord::To_ScreenRaw(&v60, v54); /*0x6db36b*/
        v12 = *((unsigned int *)this + 44); /*0x6db370*/
        v13 = v11; /*0x6db376*/
        v45[0] = *v11; /*0x6db37b*/
        v14 = v45[0] - v12; /*0x6db37f*/
        v15 = v13[1]; /*0x6db381*/
        v16 = *((unsigned int *)this + 45); /*0x6db384*/
        v45[0] = v14; /*0x6db390*/
        v56[1] = v42 - 1; /*0x6db39a*/
        v45[1] = v15 - v16; /*0x6db3a6*/
        v56[2] = 3; /*0x6db3b0*/
        v56[3] = 3; /*0x6db3b7*/
        v56[0] = v41 - 1; /*0x6db3c5*/
        (*(void (**)(unsigned int, char *, unsigned int *, int))(**(unsigned int **)&g_abs_87F8E4 + 16))( /*0x6db3d4*/
          *(unsigned int *)&g_abs_87F8E4,
          &g_abs_87F8E4,
          v56,
          v4);
        (*(void (**)(unsigned int, char *, int *, unsigned int *, int))(**(unsigned int **)&g_abs_87F8E4 /*0x6db3ef*/
                                                                     + 44))(
          *(unsigned int *)&g_abs_87F8E4,
          &g_abs_87F8E4,
          &v41,
          v45,
          v4);
      }
      v36 = v2[58]; /*0x6db3fa*/
      if ( v36 ) /*0x6db3fe*/
      {
        v17 = (ObjectClass *)CellClass::GetCoords(v2, v58); /*0x6db40e*/
        a1 = *(unsigned int *)v17->__pad_0; /*0x6db415*/
        v50 = *(unsigned int *)&v17->__pad_0[4]; /*0x6db41c*/
        v51 = *(unsigned int *)&v17->__pad_0[8]; /*0x6db432*/
        v18 = Coord::To_ScreenRaw(&v62, &a1); /*0x6db436*/
        v19 = *((unsigned int *)this + 44); /*0x6db43d*/
        v20 = *((unsigned int *)this + 45); /*0x6db443*/
        v43 = *v18; /*0x6db449*/
        v21 = v18[1] - v20; /*0x6db452*/
        v43 -= v19; /*0x6db454*/
        v44 = v21 - 60; /*0x6db45f*/
        v22 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v36 + 72))(v36, v59); /*0x6db46d*/
        v46 = *v22; /*0x6db472*/
        v47 = v22[1]; /*0x6db47e*/
        v48 = v22[2]; /*0x6db48f*/
        v23 = Coord::To_ScreenRaw(v57, &v46); /*0x6db493*/
        v37 = (IUnknown *)*v23; /*0x6db49a*/
        v24 = *((unsigned int *)this + 45); /*0x6db49e*/
        v25 = v23[1]; /*0x6db4a4*/
        v26 = *((unsigned int *)this + 44); /*0x6db4a7*/
        v38 = v25; /*0x6db4ad*/
        v40 = v24; /*0x6db4b5*/
        v39 = v26; /*0x6db4be*/
        Vector2::Subtract(&v37, &v39); /*0x6db4c2*/
        v55[0] = v43 - 1; /*0x6db4d1*/
        v55[1] = v44 - 1; /*0x6db4da*/
        v55[2] = 3; /*0x6db4e4*/
        v55[3] = 3; /*0x6db4e8*/
        (*(void (**)(unsigned int, char *, unsigned int *, int))(**(unsigned int **)&g_abs_87F8E4 + 16))( /*0x6db4f9*/
          *(unsigned int *)&g_abs_87F8E4,
          &g_abs_87F8E4,
          v55,
          v5);
        (*(void (**)(unsigned int, char *, int *, IUnknown **, int))(**(unsigned int **)&g_abs_87F8E4 /*0x6db514*/
                                                                        + 44))(
          *(unsigned int *)&g_abs_87F8E4,
          &g_abs_87F8E4,
          &v43,
          &v37,
          v5);
      }
      result = LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x6db51c*/
      v2 = (unsigned int *)result; /*0x6db521*/
    }
    while ( result ); /*0x6db525*/
  }
  for ( i = *(unsigned int *)&g_abs_A8D63C - 1; i >= 0; --i ) /*0x6db536*/
  {
    v28 = *(unsigned int **)(*(unsigned int *)&g_abs_A8D63C + 4 * i); /*0x6db542*/
    result = v28[12]; /*0x6db545*/
    if ( result ) /*0x6db54a*/
    {
      v29 = (int *)(*(int (**)(unsigned int *, unsigned char *))(*v28 + 72))(v28, v59); /*0x6db55c*/
      v46 = *v29; /*0x6db561*/
      v47 = v29[1]; /*0x6db568*/
      v48 = v29[2]; /*0x6db57e*/
      v30 = Coord::To_ScreenRaw(v57, &v46); /*0x6db582*/
      v31 = *((unsigned int *)this + 44); /*0x6db589*/
      v37 = (IUnknown *)*v30; /*0x6db58f*/
      v32 = *((unsigned int *)this + 45); /*0x6db593*/
      v33 = v30[1]; /*0x6db599*/
      v39 = v31; /*0x6db59c*/
      v38 = v33; /*0x6db5a0*/
      v40 = v32; /*0x6db5ad*/
      Vector2::Subtract(&v37, &v39); /*0x6db5b1*/
      v34 = (int *)(*(int (**)(unsigned int, int *))(*(unsigned int *)v28[12] + 72))(v28[12], v58); /*0x6db5c3*/
      a1 = *v34; /*0x6db5c8*/
      v50 = v34[1]; /*0x6db5d4*/
      v51 = v34[2]; /*0x6db5e2*/
      Coord::To_Screen(this, &a1, (IUnknown *)v45); /*0x6db5e6*/
      result = (*(int (**)(unsigned int, char *, IUnknown **, unsigned int *, int))(**(unsigned int **)&g_abs_87F8E4 /*0x6db607*/
                                                                                 + 44))(
                 *(unsigned int *)&g_abs_87F8E4,
                 &g_abs_87F8E4,
                 &v37,
                 v45,
                 v52);
    }
  }
  return result; /*0x6db611*/

}
}
// 0x6DBB60
namespace gamemd {
int Tactical::DrawOverlay(int * a1, BuildingTypeClass * aP2, int a4, int a5)
{

  unsigned int *v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // esi
  Tactical *v14; // ecx
  unsigned int *v15; // eax
  int v16; // ecx
  int64_t v17; // rax
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
  unsigned int v31[2]; // [esp+20h] [ebp-10h] BYREF
  unsigned int v32[2]; // [esp+28h] [ebp-8h] BYREF
  BOOL aP2a; // [esp+38h] [ebp+8h]

  v6 = IsoCoord::ToPixel(&v29, *a1, (Tactical *)a1[1]); /*0x6dbb79*/
  v7 = v6[1]; /*0x6dbb83*/
  v8 = *v6 / 256; /*0x6dbb93*/
  v9 = ZCoordToScreenY(a1[2]); /*0x6dbb9b*/
  v10 = *((unsigned int *)this + 45); /*0x6dbbac*/
  v11 = v7 / 256 - v9; /*0x6dbbb5*/
  v12 = *((unsigned int *)this + 44); /*0x6dbbb7*/
  v32[0] = v8; /*0x6dbbbd*/
  v13 = v8 - v12; /*0x6dbbc3*/
  v14 = *(Tactical **)&aP2->vtable0[4]; /*0x6dbbc5*/
  v32[1] = v11 - v10; /*0x6dbbc8*/
  v26 = *(unsigned int *)aP2->vtable0; /*0x6dbbcf*/
  v32[0] = v13; /*0x6dbbd4*/
  v15 = IsoCoord::ToPixel(&v28, v26, v14); /*0x6dbbd8*/
  v16 = v15[1]; /*0x6dbbe1*/
  v17 = (int)*v15; /*0x6dbbe4*/
  v30 = v16; /*0x6dbbeb*/
  v18 = (BYTE4(v17) + (int)v17) >> 8; /*0x6dbbf6*/
  v19 = ZCoordToScreenY(*(unsigned int *)&aP2->vtable0[8]); /*0x6dbbf9*/
  v31[0] = v18; /*0x6dbc0b*/
  v20 = v18 - *((unsigned int *)this + 44); /*0x6dbc22*/
  v31[1] = v30 / 256 - v19 - *((unsigned int *)this + 45); /*0x6dbc28*/
  v21 = *(unsigned int *)&aP2->vtable0[8]; /*0x6dbc2c*/
  v31[0] = v20; /*0x6dbc34*/
  v28 = v21; /*0x6dbc38*/
  v29 = a1[2]; /*0x6dbc58*/
  aP2a = v29 >= 728; /*0x6dbc5e*/
  v22 = *(ObjectClass **)&g_abs_87F8E4; /*0x6dbc66*/
  v23 = **(unsigned int **)&g_abs_87F8E4; /*0x6dbc77*/
  v27 = 14 - Math::RoundToInt((double)v21 * *(double *)&g_abs_B077F8 + (double)(v21 >= 728) + 0.5); /*0x6dbc99*/
  v24 = 14 - Math::RoundToInt((double)v29 * *(double *)&g_abs_B077F8 + (double)aP2a + 0.5); /*0x6dbcb2*/
  (*(void (**)(ObjectClass *, char *, unsigned int *, unsigned int *, int, int, int, int))(v23 + 52))( /*0x6dbcc7*/
    v22,
    &g_abs_87F8E4,
    v32,
    v31,
    a4,
    v24,
    v27,
    a5);
  return 1; /*0x6dbcca*/

}
}
// 0x6E4A80
namespace gamemd {
int Tactical_42::FindItem(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x6e4a80*/
  result = 0; /*0x6e4a83*/
  if ( v2 <= 0 ) /*0x6e4a88*/
    return -1; /*0x6e4a9f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x6e4a8e*/
  {
    if ( ++result >= v2 ) /*0x6e4a9d*/
      return -1; /*0x6e4a9d*/
  }
  return result; /*0x6e4aa2*/

}
}
// 0x4A35F0
namespace gamemd {
char * Tactical::SetCellTransform(int a2, CoordStruct * aP2, int a4, CoordStruct * aP4, int a6, int a7)
{

  char *result; // eax

  result = (unsigned char *)this + 32 * a2; /*0x4a35fb*/
  *(unsigned int *)result = aP2; /*0x4a3601*/
  *((unsigned int *)result + 1) = a4; /*0x4a3607*/
  *((unsigned int *)result + 2) = aP4; /*0x4a360e*/
  *((unsigned int *)result + 6) = a6; /*0x4a3615*/
  *((unsigned int *)result + 7) = a7; /*0x4a3618*/
  *((unsigned int *)result + 3) = 1065353216; /*0x4a361b*/
  return result; /*0x4a3622*/

}
} // namespace gamemd

// 0x4F4450
namespace gamemd {
char Tactical::SelectObject(int a2)
{

  char result; // al

  result = (*(int (**)(void *, int))(*(unsigned int *)this + 44))(this, a2); /*0x4f4458*/
  if ( result ) /*0x4f445d*/
  {
    g_abs_A8EF54 = (*(int (**)(int))(*(unsigned int *)a2 + 36))(a2); /*0x4f446a*/
    return 1; /*0x4f446f*/
  }
  return result; /*0x4f445f*/

}
} // namespace gamemd

// 0x6DA560
namespace gamemd {
int * Tactical::ScrollMap(Tactical * aP0, int a2)
{

  int *result; // eax

  result = (int *)&stru_B05488.__pad_579C[8868]; /*0x6da564*/
  do /*0x6da57b*/
  {
    if ( (Tactical *)*result == aP0 ) /*0x6da56b*/
      *result = 0; /*0x6da56d*/
    result += 3; /*0x6da573*/
  }
  while ( (int)result < (int)&stru_B05488.__pad_579C[14868] ); /*0x6da57b*/
  if ( aP0 == *(Tactical **)&stru_87C374.__pad_14B0[12628] ) /*0x6da583*/
  {
    result = (int *)MIXClass::CopyHeader((int)&stru_87C374.__pad_14B0[8132], 0); /*0x6da58c*/
    *(unsigned int *)&stru_87C374.__pad_14B0[12628] = 0; /*0x6da591*/
    *(unsigned int *)&stru_87C374.__pad_14B0[12632] = 0; /*0x6da59b*/
    *(unsigned int *)&stru_87C374.__pad_14B0[12636] = -1; /*0x6da5a5*/
  }
  return result; /*0x6da5af*/

}
} // namespace gamemd

// 0x6DBCE0
namespace gamemd {
int Tactical::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6dbce6*/
    return -2147467261; /*0x6dbce8*/
  *a2 = -816401526; /*0x6dbcf6*/
  a2[1] = 298984461; /*0x6dbcfe*/
  a2[2] = 1610644609; /*0x6dbd07*/
  a2[3] = -1252326136; /*0x6dbd10*/
  return 0; /*0x6dbced*/

}
} // namespace gamemd

// 0x6DBD20
namespace gamemd {
int Tactical::InitMap(int a1, int a2)
{

  int result; // eax
  int v3; // eax
  int v4; // edi
  int *v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // [esp+4h] [ebp-8h] BYREF
  int v10; // [esp+8h] [ebp-4h]

  result = AbstractClass::SaveLoad_Prefix_0((unsigned int *)a1, a2); /*0x6dbd2e*/
  if ( result >= 0 ) /*0x6dbd35*/
  {
    if ( a1 ) /*0x6dbd3d*/
      SmallFunc_6D1E30((unsigned int *)a1, (int)&a2); /*0x6dbd46*/
    v3 = *(unsigned int *)(a1 + 224); /*0x6dbd4b*/
    v4 = 0; /*0x6dbd52*/
    *(unsigned int *)(a1 + 3504) = 0; /*0x6dbd54*/
    if ( v3 > 0 ) /*0x6dbd60*/
    {
      v5 = (int *)(a1 + 228); /*0x6dbd63*/
      do /*0x6dbd80*/
      {
        ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, v5); /*0x6dbd6f*/
        ++v4; /*0x6dbd7a*/
        ++v5; /*0x6dbd7b*/
      }
      while ( v4 < *(unsigned int *)(a1 + 224) ); /*0x6dbd80*/
    }
    v6 = *(unsigned int *)(a1 + 3432); /*0x6dbd89*/
    v9 = *(unsigned int *)(a1 + 3428); /*0x6dbd93*/
    v10 = v6; /*0x6dbd9a*/
    if ( !ClampCoordMap(&v9) || g_abs_A8ED6B ) /*0x6dbdaf*/
    {
      v7 = *(unsigned int *)(a1 + 3428); /*0x6dbdbb*/
      v8 = *(unsigned int *)(a1 + 3432); /*0x6dbdc1*/
    }
    else
    {
      v7 = v9; /*0x6dbdb1*/
      v8 = v10; /*0x6dbdb5*/
    }
    *(unsigned int *)(a1 + 3428) = v7; /*0x6dbdc7*/
    *(unsigned int *)(a1 + 3444) = v7; /*0x6dbdcd*/
    *(unsigned int *)(a1 + 3432) = v8; /*0x6dbdd3*/
    *(unsigned int *)(a1 + 3448) = v8; /*0x6dbdd9*/
    TacticalClass::CalcViewportCells(a1); /*0x6dbde1*/
    *(unsigned char *)(a1 + 3453) = 1; /*0x6dbde6*/
    return 0; /*0x6dbded*/
  }
  return result; /*0x6dbdef*/

}
} // namespace gamemd

// 0x6DBE00
namespace gamemd {
int Tactical::UpdateMapView(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6dbe0f*/
  if ( result >= 0 ) /*0x6dbe16*/
    return 0; /*0x6dbe18*/
  return result; /*0x6dbe1a*/

}
} // namespace gamemd

// 0x6DC450
namespace gamemd {
int Tactical::StubReturn56()
{

  return 56; /*0x6dc455*/

}
} // namespace gamemd

// 0x6DC460
namespace gamemd {
int Tactical::StubReturn3608()
{

  return 3608; /*0x6dc465*/

}
} // namespace gamemd

// 0x6DC470
namespace gamemd {
Tactical * Tactical::UpdateView(unsigned int * Block, char a2)
{

  *Block = &vt_Tactical; /*0x6dc473*/
  *(Block + 1) = &vt_Tactical; /*0x6dc479*/
  *(Block + 2) = &vt_Tactical; /*0x6dc480*/
  *(Block + 3) = &vt_Tactical; /*0x6dc487*/
  g_abs_887324 = 0; /*0x6dc48e*/
  AbstractClass::DTOR(Block); /*0x6dc498*/
  if ( (Block & 1) != 0 ) /*0x6dc4a2*/
    RA2_OPDEL(Block); /*0x6dc4a5*/
  return (Tactical *)Block; /*0x6dc4af*/

}
} // namespace gamemd

// 0x6E47F0
namespace gamemd {
void Tactical_42::ClearBuffer()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x6e47f6*/
  *((unsigned int *)this + 4) = 0; /*0x6e47f9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x6e4800*/
  {
    RA2_OPDEL(v2); /*0x6e4806*/
    *((unsigned int *)this + 1) = 0; /*0x6e480e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x6e4811*/
  *((unsigned int *)this + 2) = 0; /*0x6e4814*/

}
} // namespace gamemd

// 0x6E4820
namespace gamemd {
unsigned int Tactical_42::PointerToIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x6e4820*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x6e4835*/
  else
    return 0; /*0x6e4827*/

}
} // namespace gamemd

// 0x6E4840
namespace gamemd {
int Tactical_42::UpdateView(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x6e484a*/

}
} // namespace gamemd

// 0x6E4850
namespace gamemd {
char Tactical_42::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x6e4852*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x6e485d*/
  {
    v3 = 0; /*0x6e485f*/
    if ( v2 <= 0 ) /*0x6e4863*/
      return 1; /*0x6e4883*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x6e4865*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x6e486b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x6e4874*/
    {
      ++v3; /*0x6e4876*/
      ++v4; /*0x6e4877*/
      if ( v3 >= v2 ) /*0x6e487c*/
        return 1; /*0x6e487c*/
    }
  }
  return 0; /*0x6e487e*/

}
} // namespace gamemd

// 0x6E4890
namespace gamemd {
char Tactical_42::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x6e489c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x6e48a6*/
    if ( a3 ) /*0x6e48ac*/
      v4 = a3; /*0x6e48c2*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x6e48be*/
    *((unsigned char *)this + 12) = 1; /*0x6e48c6*/
    if ( v4 ) /*0x6e48ca*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x6e48d5*/
      {
        v6 = *((unsigned int *)this + 2); /*0x6e48dc*/
        if ( a2 < v6 ) /*0x6e48e1*/
          v6 = a2; /*0x6e48e3*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x6e48e9*/
          ++i; /*0x6e48ee*/
        if ( *((unsigned char *)this + 13) ) /*0x6e48fb*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x6e4906*/
          *((unsigned int *)this + 1) = 0; /*0x6e490e*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x6e4917*/
      *((unsigned int *)this + 2) = a2; /*0x6e491f*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x6e4922*/
      return 1; /*0x6e4928*/
    }
    else
    {
      return 0; /*0x6e48cf*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x6e4932*/
    return 1; /*0x6e4938*/
  }

}
} // namespace gamemd

// 0x6E4940
namespace gamemd {
void Tactical_42::ddtor()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x6e494d*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x6e4953*/
    *((unsigned int *)this + 1) = 0; /*0x6e495b*/
  }
  *((unsigned char *)this + 13) = 0; /*0x6e495e*/
  *((unsigned int *)this + 2) = 0; /*0x6e4961*/

}
} // namespace gamemd

// 0x6E4970
namespace gamemd {
int Tactical::Init(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x6e4970*/
    return 0; /*0x6e4978*/
  v3 = *((unsigned int *)this + 2); /*0x6e497e*/
  result = 0; /*0x6e4981*/
  if ( v3 <= 0 ) /*0x6e4985*/
    return -1; /*0x6e499c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x6e498b*/
  {
    if ( ++result >= v3 ) /*0x6e499a*/
      return -1; /*0x6e499a*/
  }
  return result; /*0x6e497a*/

}
} // namespace gamemd

// 0x6E49B0
namespace gamemd {
unsigned int Tactical_42::InitMap(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x6e49b0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x6e49c5*/
  else
    return 0; /*0x6e49b7*/

}
} // namespace gamemd

// 0x6E49D0
namespace gamemd {
char Tactical_42::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6e49dc*/
  {
    *((unsigned char *)this + 12) = 0; /*0x6e49e2*/
    if ( a3 ) /*0x6e49e8*/
      v4 = a3; /*0x6e49fe*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x6e49fa*/
    *((unsigned char *)this + 12) = 1; /*0x6e4a02*/
    if ( !v4 ) /*0x6e4a06*/
      return 0; /*0x6e4a7a*/
    if ( *((unsigned int *)this + 1) ) /*0x6e4a08*/
    {
      v5 = *((unsigned int *)this + 2); /*0x6e4a0f*/
      if ( a2 < v5 ) /*0x6e4a14*/
        v5 = a2; /*0x6e4a16*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x6e4a1c*/
        ++i; /*0x6e4a21*/
      if ( *((unsigned char *)this + 13) ) /*0x6e4a2e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x6e4a39*/
        *((unsigned int *)this + 1) = 0; /*0x6e4a41*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x6e4a4a*/
    *((unsigned int *)this + 2) = a2; /*0x6e4a52*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x6e4a55*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x6e4a5e*/
  }
  v7 = *((unsigned int *)this + 2); /*0x6e4a61*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x6e4a69*/
    *((unsigned int *)this + 4) = v7; /*0x6e4a6b*/
  return 1; /*0x6e4a6e*/

}
} // namespace gamemd

// 0x6E4AB0
namespace gamemd {
VectorClass_flat * Tactical_42::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6e4ab3*/
  *Block = &vt_VectorClass_TActionClass; /*0x6e4ab6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x6e4ac0*/
  {
    RA2_OPDEL(v3); /*0x6e4ac8*/
    *(Block + 1) = 0; /*0x6e4ad0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x6e4adb*/
  *(Block + 2) = 0; /*0x6e4ae1*/
  if ( (Block & 1) != 0 ) /*0x6e4ae8*/
    RA2_OPDEL(Block); /*0x6e4aeb*/
  return (VectorClass *)Block; /*0x6e4af5*/

}
} // namespace gamemd
