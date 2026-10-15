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
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Isometric_e4.hpp"
#include "e4/classes/LightningStorm_e4.hpp"
#include "e4/classes/LoadScreen_e4.hpp"
#include "e4/classes/PsyDom_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/VectorClassUInt_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/LayerClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/DSurface_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/DisplayClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/DialogControl_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Text_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Char_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TextGroup_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Property_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/FontRenderer_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CellClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/BuildingTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/ObjectPtr_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/NukeFlash_e4.hpp"
#include "e4/classes/IsoCoord_e4.hpp"

// 0x42A6D0
namespace gamemd {  // G42.18 ns repair
void * Tactical::ConstructTacticalSurface()
{


  *this = 0; /*0x42a6e0*/
  this->AbstractClass_1 = 0; /*0x42a6e2*/
  this->Tactical_field_0x2 = 0; /*0x42a6e5*/
  this->ptr_3 = (gamemd::CellClass *)(1); /*0x42a6e8*/
  this->vtable2 = (void *)(1065353216); /*0x42a6eb*/
  this->vtable3 = (void *)(1); /*0x42a6f2*/
  this->nextArrayIndex = 0; /*0x42a6f5*/
  this->referenceCount = 0; /*0x42a6f8*/
  this->needsSave = 0; /*0x42a6fb*/
  this->u32_24 = 0; /*0x42a6fe*/
  this->u32_28 = -1; /*0x42a701*/
  this->u32_2C = -1; /*0x42a704*/
  this->u32_38 = 1; /*0x42a707*/
  this->u32_3C = 0; /*0x42a70a*/
  this->HouseClass_6C = -1; /*0x42a70d*/
  this->q070 = 0; /*0x42a710*/
  this->u32_72 = 0; /*0x42a714*/
  unsigned int *v2; // edi
  v2 = (unsigned int *)(&this->q074); /*0x42a718*/
  int v3; // ebp
  v3 = 3; /*0x42a71b*/
  do /*0x42a73d*/
  {
    VectorClassUInt::Constructor(0, 0); /*0x42a724*/
    *v2 = (unsigned int)(&vt_DynamicVectorClass); /*0x42a729*/
    v2->u32_14 = 10; /*0x42a72f*/
    v2->q010 = 0; /*0x42a736*/
    v2 += 6; /*0x42a739*/
    --v3; /*0x42a73c*/
  }
  while ( v3 ); /*0x42a73d*/
  unsigned int *v4; // eax
  v4 = (unsigned int *)(__2_YAPAXI_Z(0x14u)); /*0x42a741*/
  unsigned int *v5; // edi
  v5 = v4; /*0x42a746*/
  if ( v4 ) /*0x42a74d*/
  {
    v4[3] = 0; /*0x42a754*/
    v4[4] = -1; /*0x42a757*/
    *v4 = 0; /*0x42a75e*/
    v4[1] = 0x10000; /*0x42a760*/
  void *v6; // eax
    v6 = __2_YAPAXI_Z(0x40004u); /*0x42a767*/
  int v7; // ecx
    v7 = v5[1]; /*0x42a76c*/
    v5[2] = (unsigned int)(v6); /*0x42a76f*/
  int v8; // eax
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
  this->abstractFlags = v5; /*0x42a790*/
  unsigned int *v9; // eax
  v9 = (unsigned int *)(__2_YAPAXI_Z(0x14u)); /*0x42a793*/
  unsigned int *v10; // edi
  v10 = v9; /*0x42a798*/
  if ( v9 ) /*0x42a79f*/
  {
    v9[3] = 0; /*0x42a7a6*/
    v9[4] = -1; /*0x42a7a9*/
    *v9 = 0; /*0x42a7b0*/
    v9[1] = 10000; /*0x42a7b2*/
  void *v11; // eax
    v11 = __2_YAPAXI_Z(0x9C44u); /*0x42a7b9*/
  int v12; // ecx
    v12 = v10[1]; /*0x42a7be*/
    v10[2] = (unsigned int)(v11); /*0x42a7c1*/
  int v13; // eax
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
  this->u32_68 = (unsigned int)(v10); /*0x42a7e5*/
  unsigned int *v14; // eax
  v14 = (unsigned int *)(__2_YAPAXI_Z(0x100004u)); /*0x42a7e8*/
  if ( v14 ) /*0x42a7f2*/
  {
  unsigned int *v15; // ecx
    v15 = v14 + 2; /*0x42a7f4*/
  int v16; // edx
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
  this->uniqueId = v14; /*0x42a819*/
  unsigned int *v17; // eax
  v17 = (unsigned int *)(__2_YAPAXI_Z(0x180004u)); /*0x42a81c*/
  if ( v17 ) /*0x42a826*/
    v17[393216] = 0; /*0x42a828*/
  else
    v17 = 0; /*0x42a830*/
  this->vtable4 = v17; /*0x42a832*/
  v17[393216] = 0; /*0x42a835*/
  int v18; // ecx
  v18 = 0; /*0x42a83e*/
  *(unsigned int *)(this->uniqueId + 0x100000) = 0; /*0x42a840*/
  int *v19; // eax
  v19 = (int *)this->abstractFlags; /*0x42a846*/
  if ( *v19 >= 0 ) /*0x42a84b*/
  {
    do /*0x42a859*/
    {
      ++v18; /*0x42a850*/
      *(unsigned int *)(v19[2] + 4 * v18 - 4) = 0; /*0x42a851*/
    }
    while ( v18 <= *v19 ); /*0x42a859*/
  }
  *v19 = 0; /*0x42a85b*/
  unsigned int *v20; // eax
  v20 = (unsigned int *)this->u32_68; /*0x42a85d*/
  int i; // ecx
  for ( i = 0; i <= *v20; *(unsigned int *)(v20[2] + 4 * i - 4) = 0 ) /*0x42a864*/
    ++i; /*0x42a869*/
  *v20 = 0; /*0x42a874*/
  char *v22; // ecx
  v22 = (char *)(&this->q074); /*0x42a87c*/
  char *v26; // [esp+14h] [ebp-8h]
  v26 = &this->u32_BC; /*0x42a87f*/
  char *v25; // [esp+10h] [ebp-Ch]
  v25 = (char *)(&this->q074); /*0x42a883*/
  unsigned int *v23; // ebp
  v23 = &this->q04C; /*0x42a887*/
  int v27; // [esp+18h] [ebp-4h]
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
  this->u32_64 = __2_YAPAXI_Z(0x27100u); /*0x42a8ed*/
  return this; /*0x42a8f2*/

}
}  // G42.18 ns repair
// 0x484050
namespace gamemd {
int Tactical::CreateTacticalLightSurface(Tactical *aP1, int *a2, unsigned int *a3, unsigned int *a4, int *a5, int a6, int a7)
{
  int result; // eax

  unsigned int *v7; // eax
  v7 = a3; /*0x484051*/
  int *v8; // edx
  v8 = a5; /*0x484055*/
  int *v9; // ebx
  v9 = (int *)a7; /*0x48405a*/
  unsigned int *v11; // ecx
  v11 = a4; /*0x484063*/
  int *v12; // edi
  v12 = (int *)a6; /*0x484067*/
  *a3 = 0x10000; /*0x48406b*/
  *v11 = 0; /*0x484071*/
  *v8 = 1000; /*0x484077*/
  *v12 = 1000; /*0x48407d*/
  *v9 = 1000; /*0x484083*/
  if ( !*&aP1->u32_24 && !*&aP1->u16_26 /*0x4840a8*/
    || *&aP1->u32_24 == 0xFFFF && *&aP1->u16_26 == 0xFFFF )
  {
    result = CreateSurfaceClassPrimary(1000, 1000, 1000); /*0x484161*/
    *a2 = result; /*0x48416d*/
  }
  else
  {
  int64_t v15; // [esp-8h] [ebp-1Ch]
    (*(((unsigned int *)&(v15)) + 1)) = (unsigned int)(&a6); /*0x4840b2*/
    (*((unsigned int *)&(v15))) = (unsigned int)(&a7); /*0x4840b7*/
  int v16; // [esp+10h] [ebp-4h] BYREF
    Tactical::CalculateTacticalLighting(aP1, v7, v11, v8, v12, v9, &v16, v15); /*0x4840c4*/
  int v13; // esi
    if ( *(unsigned int *)aP1->q034 /*0x484125*/
      && (a3 = (unsigned int *)v16,
          a4 = (unsigned int *)a7,
          a5 = (int *)a6,
          QuantizeColorRGB((int *)&a3, (int *)&a4, (int *)&a5),
          v13 = *(unsigned int *)aP1->q034,
          *(unsigned int **)(v13 + 408) == a3)
      && *(unsigned int **)(v13 + 412) == a4
      && (result = *(unsigned int *)(v13 + 416), (int *)result == a5) )
    {
      *a2 = v13; /*0x48412c*/
    }
    else
    {
      result = CreateSurfaceClassPrimary(v16, a7, a6); /*0x484142*/
      *a2 = result; /*0x48414e*/
    }
  }
  return result; /*0x48412b*/
}
}
// 0x484180
namespace gamemd {
ScenarioClass * * Tactical::CalculateTacticalLighting(int * a1, IUnknown * aP2, int * a3, int * a4, IUnknown * aP5, int * a6, long long a8, void *a8_2)
{

  double v8; // st7
  Tactical *v9; // edi
  int *v10; // ebx
  int v11; // eax
  int v12; // esi
  int v13; // ebx
  int v14; // ebp
  int *v15; // eax
  int v16; // edx
  unsigned int v17; // edi
  int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int v21; // edx
  int v22; // eax
  int referenceCount; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int result; // eax
  double v28; // [esp+0h] [ebp-44h]
  int v29; // [esp+18h] [ebp-2Ch]
  int v30; // [esp+18h] [ebp-2Ch]
  int v31; // [esp+18h] [ebp-2Ch]
  int v32; // [esp+18h] [ebp-2Ch]
  int v34; // [esp+20h] [ebp-24h]
  unsigned int v35[2]; // [esp+24h] [ebp-20h] BYREF
  int v36; // [esp+2Ch] [ebp-18h]
  int v37; // [esp+30h] [ebp-14h]
  int v38; // [esp+34h] [ebp-10h]
  int v39; // [esp+38h] [ebp-Ch]
  int v40; // [esp+3Ch] [ebp-8h]
  int v41; // [esp+40h] [ebp-4h]

  v9 = (gamemd::Tactical *)(a1); /*0x484184*/
  if ( !*&a1->q024 && !*&a1->u16_26 /*0x4841a9*/
    || *&a1->q024 == 0xFFFF && *&a1->u16_26 == 0xFFFF )
  {
    *aP2 = 0x10000; /*0x48462e*/
    *a3 = 0; /*0x484638*/
    *a4 = 1000; /*0x484642*/
    *aP5 = 1000; /*0x48464c*/
    *a6 = 1000; /*0x484656*/
    *a8_2 = (void *)(1000); /*0x484660*/
    *(unsigned int *)a8_2 = 1000; /*0x484666*/
    *(unsigned int *)HIDWORD(a8_2) = 1000; /*0x48466c*/
    return (gamemd::ScenarioClass **)(HIDWORD(a8_2)); /*0x48465c*/
  }
  v10 = a4; /*0x4841b5*/
  *a4 = 1000 * (int)dword_A8B230[378].vtable1 / 100; /*0x4841de*/
  *a8_2 = 1000 * (int)dword_A8B230[378].vtable3 / 100; /*0x48420d*/
  *(unsigned int *)a8_2 = 1000 * dword_A8B230[378].uniqueId / 100; /*0x48423c*/
  v11 = 0; /*0x48426b*/
  *(unsigned int *)HIDWORD(a8_2) = 1000 * dword_A8B230[378].abstractFlags / 100; /*0x48426d*/
  v34 = 0; /*0x484273*/
  for ( *a3 = 0; v34 < g_MissionQueueFrame.random[133]; ++v34 ) /*0x484285*/
  {
    v12 = *(unsigned int *)(g_MissionQueueFrame.random[130] + 4 * v11); /*0x484291*/
    if ( *(unsigned char *)(v12 + 72) && stru_A8EB00.ObjectTypeClass[30] >= *(unsigned int *)(v12 + 52) ) /*0x4842aa*/
    {
      v29 = *&v9->u32_24; /*0x4842b5*/
      v13 = ((__int16)v29 << 8) + 128; /*0x4842cc*/
      v14 = (SHIWORD(v29) << 8) + 128; /*0x4842ce*/
      v35[0] = 128; /*0x4842d0*/
      v35[1] = 128; /*0x4842d4*/
      Isometric::InitTables((int)v9, v35); /*0x4842dd*/
      v15 = (int *)(v12 + 56); /*0x4842e2*/
      v16 = *(unsigned int *)(v12 + 56); /*0x4842e7*/
      v40 = *(unsigned int *)(v12 + 60); /*0x4842ec*/
      v17 = *(unsigned int *)(v12 + 68); /*0x4842f0*/
      v41 = *(unsigned int *)(v12 + 64); /*0x4842f6*/
      v30 = v13 - v16; /*0x4842fe*/
      v39 = *(unsigned int *)(v12 + 56); /*0x484306*/
      v18 = *(unsigned int *)(v12 + 60); /*0x48430a*/
      v41 = *(unsigned int *)(v12 + 64); /*0x484310*/
      if ( v30 * v30 + (v14 - v18) * (v14 - v18) <= v17 * v17 ) /*0x48432d*/
      {
        v36 = *v15; /*0x48433a*/
        v37 = *(unsigned int *)(v12 + 60); /*0x484341*/
        v39 = *v15; /*0x48434d*/
        v31 = v13 - v36; /*0x484354*/
        __asm { fild [esp+44h+var_2C] } /*0x48435a*/
        v32 = v14 - *(unsigned int *)(v12 + 60); /*0x48435e*/
        __asm { fild [esp+44h+var_2C] } /*0x484365*/
        v38 = *(unsigned int *)(v12 + 64); /*0x484369*/
        v41 = *(unsigned int *)(v12 + 64); /*0x484370*/
        __asm /*0x484374*/
        {
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+44h+var_44]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v28); /*0x484385*/
        LOWORD(v19) = Math::RoundToInt(v8); /*0x48438d*/
        if ( v19 <= v17 ) /*0x484394*/
        {
          v20 = (1000 * v17 - 1000 * v19) / v17; /*0x4843bd*/
          *a3 += (int)(v20 * *(unsigned int *)(v12 + 36)) / 1000; /*0x4843db*/
          *a8_2 += (int)(v20 * *(unsigned int *)(v12 + 40)) / 1000; /*0x4843fc*/
          *(unsigned int *)a8_2 += (int)(v20 * *(unsigned int *)(v12 + 44)) / 1000; /*0x48441d*/
          *(unsigned int *)HIDWORD(a8_2) += (int)(v20 * *(unsigned int *)(v12 + 48)) / 1000; /*0x48443e*/
        }
      }
      v9 = (gamemd::Tactical *)(a1); /*0x484440*/
      v10 = a4; /*0x484444*/
    }
    v11 = v34 + 1; /*0x484452*/
  }
  v21 = *a3 + *v10; /*0x48446b*/
  *v10 = v21; /*0x48446f*/
  *a6 = v21; /*0x484471*/
  if ( !(unsigned __int8)LightningStorm::IsActive() ) /*0x48447a*/
  {
    if ( (unsigned __int8)PsyDom::IsActive() ) /*0x4844c4*/
    {
      *v10 += v9->Tactical_field_0x11B * (int)dword_A8B230[380].vtable1 - dword_A8B230[380].referenceCount; /*0x4844ec*/
      referenceCount = dword_A8B230[380].referenceCount; /*0x4844fa*/
      v24 = (int)dword_A8B230[380].NeedsSaveOrLink * (v9->Tactical_field_0x11B + 4); /*0x484503*/
    }
    else
    {
      if ( NukeFlash::IsActive() ) /*0x48450f*/
      {
        *v10 += v9->Tactical_field_0x11B * (int)dword_A8B230[380].vtable1 - (unsigned int)dword_A8B230[380].vtable0; /*0x484537*/
        v22 = (int)dword_A8B230[380].vtable1 * (v9->Tactical_field_0x11B + 4) /*0x484559*/
            - (unsigned int)dword_A8B230[380].vtable0
            + *a6;
        goto LABEL_21; /*0x48455b*/
      }
      *v10 += v9->Tactical_field_0x11B * dword_A8B230[378].referenceCount - dword_A8B230[378].nextArrayIndex; /*0x48457c*/
      referenceCount = dword_A8B230[378].nextArrayIndex; /*0x48458a*/
      v24 = dword_A8B230[378].referenceCount * (v9->dominatorRed + 4); /*0x484593*/
    }
    v22 = v24 - referenceCount + *a6; /*0x48459e*/
    goto LABEL_21; /*0x48459e*/
  }
  *v10 += v9->Tactical_field_0x11B * dword_A8B230[379].uniqueId - (unsigned int)dword_A8B230[379].vtable3; /*0x48449b*/
  v22 = dword_A8B230[379].uniqueId * (v9->Tactical_field_0x11B + 4) - (unsigned int)dword_A8B230[379].vtable3 + *a6; /*0x4844bd*/
LABEL_21:
  *a6 = v22; /*0x4845a0*/
  v25 = *v10; /*0x4845a2*/
  if ( *v10 >= 2000 ) /*0x4845a9*/
    v25 = 2000; /*0x4845ab*/
  *v10 = v25; /*0x4845c0*/
  *aP5 = v25; /*0x4845c2*/
  Map_Calc(aP2, aP5, a8_2, (int *)a8_2, (int *)HIDWORD(a8_2)); /*0x4845cf*/
  v26 = (*aP2 * *a6) >> 16; /*0x4845da*/
  *a6 = v26; /*0x4845e2*/
  if ( v26 >= 2000 ) /*0x4845e4*/
    v26 = 2000; /*0x4845e6*/
  *a6 = v26; /*0x4845eb*/
  *v10 = *v10 <= 0 ? 0 : *v10;
  *aP5 = *aP5 <= 0 ? 0 : *aP5;
  result = *a6 <= 0 ? 0 : *a6;
  *a6 = result; /*0x484615*/
  return (gamemd::ScenarioClass **)(result); /*0x48461a*/

}
}
// 0x4A91B0
namespace gamemd {
unsigned int * Tactical::MouseMove(unsigned int *aP1, unsigned int *aP2, void *a3)
{
  unsigned int *v3; // ebp
  bool v4; // zf
  int *v6; // eax
  int v7; // edi
  void *v8; // ebx
  int v10; // eax
  int v11; // ecx
  int *v12; // eax
  unsigned int *v13; // eax
  unsigned int *v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int16_t v19; // dx
  unsigned short *v20; // eax
  int16_t v21; // dx
  int v22; // ebx
  int16_t v23; // ax
  int16_t v24; // ax
  int16_t v25; // cx
  int v26; // edx
  int16_t v27; // ax
  int v29; // [esp+14h] [ebp-10h] BYREF
  int v30; // [esp+18h] [ebp-Ch]
  unsigned char v31[8]; // [esp+1Ch] [ebp-8h] BYREF

  v3 = (unsigned int *)*aP2; /*0x4a91ba*/
  v4 = (uint16_t)*aP2 == *(unsigned short *)&stru_8A0390.bombVisible; /*0x4a91bd*/
  aP2 = (unsigned int *)*aP2; /*0x4a91c6*/
  if ( v4 && (*(((unsigned short *)&(aP2)) + 1)) == *(unsigned short *)&stru_8A0390.alignmentPadding69[1] ) /*0x4a91dc*/
  {
    v6 = (int *)(*(int (**)(void *, int *))(*(unsigned int *)stru_887598.lineTrailer + 52))( /*0x4a91ef*/
                  stru_887598.lineTrailer,
                  &v29);
    v7 = DSurface_ViewBounds.field_0; /*0x4a91f2*/
    v8 = (void *)(DSurface_ViewBounds.field_4); /*0x4a91f8*/
    v6 = v6; /*0x4a91fe*/
    v10 = *v6; /*0x4a9200*/
    v11 = v6[1]; /*0x4a9204*/
    if ( v10 < DSurface_ViewBounds.field_0 /*0x4a9223*/
      || v10 >= DSurface_ViewBounds.field_0 + *(unsigned int *)g_Map_VisibleRectOffset
      || v11 < (int)DSurface_ViewBounds.field_4
      || v11 >= (int)DSurface_ViewBounds.field_4 + *(unsigned int *)&g_DSurface_WindowOffset )
    {
      v14 = (unsigned int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)stru_887598.lineTrailer + 52))( /*0x4a9284*/
                        stru_887598.lineTrailer,
                        v31);
      v15 = v14[1]; /*0x4a9292*/
      v29 = *v14 - v7; /*0x4a9295*/
      v30 = v15 - (unsigned int)v8; /*0x4a929f*/
      v3 = (unsigned int *)*((Tactical *)g_TacticalClass_Instance)->PixelToCell(&aP2, &v29); /*0x4a92af*/
    }
    else
    {
      v12 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)stru_887598.lineTrailer + 52))( /*0x4a9232*/
                     stru_887598.lineTrailer,
                     v31);
      v29 = *v12; /*0x4a9237*/
      v30 = v12[1]; /*0x4a924d*/
      v13 = (unsigned int *)*TacticalClass::PixelToCellCheck((RadarClass *)&v13, &v29); /*0x4a9256*/
      v13 = v13; /*0x4a925f*/
      if ( v13 == *(unsigned int **)&stru_8A0390.bombVisible ) /*0x4a9263*/
        goto LABEL_11; /*0x4a9263*/
      v3 = v13; /*0x4a9273*/
    }
    aP2 = v3; /*0x4a92b1*/
  }
  LABEL_11:
  v16 = this->u32_117C; /*0x4a92b5*/
  if ( v16 ) /*0x4a92bd*/
  {
    if ( !((unsigned int *)&stru_A8EB00)[391] ) /*0x4a92e3*/
    {
      v19 = (*(((unsigned short *)&(aP2)) + 1)) + this->u32_117A; /*0x4a92f3*/
      (*((unsigned short *)&(v13))) = (unsigned short)v3 + this->u32_1178; /*0x4a92fb*/
      (*(((unsigned short *)&(v13)) + 1)) = v19; /*0x4a9301*/
      v20 = (unsigned short *)(UI_Move(&v29, &v13, v16)); /*0x4a931e*/
      v21 = v20[1] - this->u32_117A; /*0x4a9331*/
      (*((unsigned short *)&(aP2))) = *v20 - this->u32_1178; /*0x4a9338*/
      (*(((unsigned short *)&(aP2)) + 1)) = v21; /*0x4a933d*/
      v3 = aP2; /*0x4a9342*/
    }
    v4 = (unsigned short)v3 == this->u32_1174; /*0x4a9346*/
    aP2 = v3; /*0x4a934d*/
    if ( v4 && (*(((unsigned short *)&(v3)) + 1)) == this->u32_1176 ) /*0x4a935f*/
    {
      *aP1 = (unsigned int)(v3); /*0x4a9367*/
      return aP1; /*0x4a9361*/
    }
    else
    {
      v22 = this->u32_1174; /*0x4a9377*/
      if ( this->u32_117C ) /*0x4a9371*/
      {
        if ( v3 != this->u32_1174 /*0x4a93b0*/
          && (this->u32_1174 != *(unsigned short *)&stru_8A0390.bombVisible
           || this->u32_1176 != *(unsigned short *)&stru_8A0390.alignmentPadding69[1]) )
        {
          v23 = this->u32_1176 + this->u32_117A; /*0x4a93c7*/
          (*((unsigned short *)&(aP2))) = this->u32_1174 + this->u32_1178; /*0x4a93d0*/
          (*(((unsigned short *)&(aP2)) + 1)) = v23; /*0x4a93d5*/
          MapClass::SetCellFlagsAlongPath(&aP2, 0); /*0x4a93e9*/
        }
        if ( v3 != *(unsigned int **)&stru_8A0390.bombVisible ) /*0x4a93f5*/
        {
          v24 = this->u32_1178 + (unsigned short)v3; /*0x4a940a*/
          (*(((unsigned short *)&(aP2)) + 1)) = (*(((unsigned short *)&(v3)) + 1)) + this->u32_117A; /*0x4a9414*/
          (*((unsigned short *)&(aP2))) = v24; /*0x4a941b*/
          MapClass::SetCellFlagsAlongPath(&aP2, (unsigned short *)1); /*0x4a942f*/
        }
      }
      this->u32_1174 = (unsigned int)(v3); /*0x4a9434*/
      v25 = this->u32_1178 + (unsigned short)v3; /*0x4a944b*/
      (*(((unsigned short *)&(aP2)) + 1)) = this->u32_1176 + this->u32_117A; /*0x4a9452*/
      v26 = this->u32_117C; /*0x4a9457*/
      (*((unsigned short *)&(aP2))) = v25; /*0x4a945d*/
      this->u32_1180 = GetBuildingPlacement( /*0x4a9485*/
                                  *(unsigned int *)this->q1198 + 16),
                                  this->u32_11AC,
                                  v26,
                                  (int16_t *)&aP2);
      v27 = this->u32_117A + this->u32_1176; /*0x4a94a0*/
      (*((unsigned short *)&(aP2))) = this->u32_1174 + this->u32_1178; /*0x4a94a7*/
      (*(((unsigned short *)&(aP2)) + 1)) = v27; /*0x4a94b0*/
      this->u32_1181 = ProcessDataBuildingTypeClass( /*0x4a94da*/
                                  *(unsigned int *)this->q1198 + 16),
                                  this->u32_11AC,
                                  this->u32_117C,
                                  (int16_t *)&aP2);
      *aP1 = v22; /*0x4a94e6*/
      return aP1; /*0x4a94e0*/
    }
  }
  else
  {
    v17 = this->u32_1174; /*0x4a92bf*/
    this->u32_1174 = (unsigned int)(v3); /*0x4a92c9*/
    *aP1 = v17; /*0x4a92d2*/
    return aP1; /*0x4a92c5*/
  }
}
}
// 0x568350
namespace gamemd {
int Tactical::IsCellVisible(IUnknown * aP1)
{


  void *Tactical_field_0xF4; // edx
  Tactical_field_0xF4 = (void *)(this->q0F4); /*0x56836f*/
  int v3; // esi
  v3 = (__int16)(*aP1 / 256); /*0x56837b*/
  int result; // eax
  result = (__int16)(aP1[1] / 256); /*0x56837e*/
  int v5; // edi
  v5 = result + v3; /*0x568381*/
  LOBYTE(result) = result + v3 > (int)Tactical_field_0xF4 /*0x5683ad*/
                && v3 - result < (int)Tactical_field_0xF4
                && (result -= v3, result < (int)Tactical_field_0xF4)
                && (result = (int)this->q0F8, v5 <= (int)Tactical_field_0xF4 + 2 * result);
  return result; /*0x5683a5*/

}
}
// 0x58C2A0
namespace gamemd {
void * Tactical::GetCellData(void *a1)
{
  return (char *)(g_MissionQueueFrame.localVariables[163] /*0x58c2be*/
                + 80 * (*(int16_t *)this->vtable1 + g_MapCellWidth * *(int16_t *)this->Tactical_field_0x2));
}
}
// 0x640A40
namespace gamemd {
void* Tactical_Radar_Render(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7, void * a8)
{
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // esi
  int v55; // [esp+38h] [ebp-7Ch] BYREF
  unsigned int *v56; // [esp+3Ch] [ebp-78h] BYREF
  int FileSHP; // [esp+40h] [ebp-74h] BYREF
  int v59; // [esp+48h] [ebp-6Ch] BYREF
  int v65; // [esp+60h] [ebp-54h] BYREF
  int v66; // [esp+64h] [ebp-50h] BYREF
  int v67; // [esp+68h] [ebp-4Ch]
  int v71; // [esp+80h] [ebp-34h] BYREF
  int v72; // [esp+84h] [ebp-30h] BYREF
  int v76; // [esp+98h] [ebp-1Ch] BYREF
  int v77; // [esp+9Ch] [ebp-18h]
  unsigned int v78[3]; // [esp+A0h] [ebp-14h] BYREF

  int **v8; // ecx
  int *result; // eax
  result = *v8; /*0x640a46*/
  int **v54; // [esp+34h] [ebp-80h]
  v54 = v8; /*0x640a4b*/
  if ( *v8 ) /*0x640a46*/
  {
    ((LayerClass *)&DataGlobal_87F7E8)->CellIteratorReset(); /*0x640a5d*/
  int v10; // ebp
    v10 = 10000; /*0x640a62*/
  int v64; // [esp+5Ch] [ebp-58h]
    v64 = 10000; /*0x640a6c*/
  int v58; // [esp+44h] [ebp-70h]
    v58 = 10000; /*0x640a70*/
  int v52; // [esp+2Ch] [ebp-88h]
    v52 = 0; /*0x640a74*/
  int v11; // ebx
    v11 = 0; /*0x640a7c*/
  int i; // eax
    for ( i = ((LayerClass *)&DataGlobal_87F7E8)->CellIteratorNext(); /*0x640a85*/
          i;
          i = ((LayerClass *)&DataGlobal_87F7E8)->CellIteratorNext() )
    {
  unsigned int *v13; // esi
      v13 = (unsigned int *)(i + 36); /*0x640a8b*/
      if ( (uint8_t)LayerClass::IsWithinUsableArea( /*0x640a96*/
                              (LayerClass *)&DataGlobal_87F7E8,
                              (int16_t *)(i + 36),
                              0) )
      {
        v56 = (unsigned int *)*v13; /*0x640aa7*/
  int v14; // esi
        v14 = ((*((signed short *)(((unsigned char *)&(v56)) + 2))) << 8) + 128; /*0x640ab9*/
  int v15; // edi
        v15 = ((int16_t)v56 << 8) + 128; /*0x640ac3*/
        ((Coord *)((Coord *)&v66))->Subtract(v15, v14, 0); /*0x640acb*/
        ((Coord *)((Coord *)&v71))->Subtract(v15, v14, 0); /*0x640ad8*/
        IsoCoord::ToScreenOffset(v71, v67, &v55, &v59); /*0x640af7*/
  int v16; // edx
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
  signed int v17; // esi
    v17 = 0; /*0x640b62*/
  signed int j; // edi
    for ( j = 0; j < 8; ++j ) /*0x640b64*/
    {
      if ( (uint8_t)((char *)dword_A8B230)->Is_Waypoint_Valid(j) ) /*0x640b71*/
        ++v17; /*0x640b7a*/
    }
  signed int v19; // ebx
    v19 = 0; /*0x640b81*/
    v59 = j; /*0x640b83*/
  signed int k; // [esp+2Ch] [ebp-88h]
    for ( k = v17; v19 < v17; ++v19 ) /*0x640b8d*/
    {
      if ( (!v19 || v19 <= j) && (uint8_t)((char *)dword_A8B230)->Is_Waypoint_Valid(v19) ) /*0x640ba6*/
      {
        v56 = (unsigned int *)*((ScenarioClass *)((char *)dword_A8B230))->Get_Waypoint_Location(&v65, v19); /*0x640bc8*/
  int v20; // esi
        v20 = ((*((signed short *)(((unsigned char *)&(v56)) + 2))) << 8) + 128; /*0x640bde*/
  int v21; // edi
        v21 = ((int16_t)v56 << 8) + 128; /*0x640be4*/
        ((Coord *)((Coord *)&v71))->Subtract(v21, v20, 0); /*0x640bec*/
        ((Coord *)((Coord *)&v66))->Subtract(v21, v20, 0); /*0x640bf9*/
        IsoCoord::ToScreenOffset(v66, v72, &v55, &FileSHP); /*0x640c18*/
        v76 = 4; /*0x640c61*/
  unsigned int v75[2]; // [esp+90h] [ebp-24h] BYREF
        v75[1] = FileSHP / 30 - v58 - 1; /*0x640c65*/
        v77 = 4; /*0x640c6d*/
        v75[0] = 2 * (v55 / 60 - v10) - 1; /*0x640c74*/
  int v22; // esi
        v22 = **v54; /*0x640c8a*/
  int v23; // eax
        v23 = (*(int (**)(int *, unsigned int *, unsigned int *, unsigned int))(v22 + 120))(*v54, v78, v75, 0); /*0x640cc4*/
        (*(void (**)(unsigned int, int))(v22 + 16))(*v56, v23); /*0x640cce*/
        v17 = k; /*0x640cd1*/
        j = v59; /*0x640cd5*/
      }
    }
    if ( g_DisplayWidth == 800 ) /*0x640cef*/
    {
      v24 = 499; /*0x640cf1*/
      v25 = 379; /*0x640cf6*/
      v26 = 216; /*0x640cfb*/
      v27 = 166; /*0x640d00*/
    }
    else if ( g_DisplayWidth == 1024 ) /*0x640d0d*/
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
  int v61; // [esp+50h] [ebp-64h]
    v61 = v25; /*0x640d36*/
  int v60; // [esp+4Ch] [ebp-68h]
    v60 = v24; /*0x640d3e*/
  int v62; // [esp+54h] [ebp-60h] BYREF
    v62 = v26; /*0x640d42*/
  int *v28; // ecx
    v28 = *v54; /*0x640d46*/
  int v63; // [esp+58h] [ebp-5Ch] BYREF
    v63 = v27; /*0x640d48*/
  int *v29; // eax
    v29 = (int *)v28->checkBuildingPlacement(v78, a4, a3, a2); /*0x640d56*/
    v77 = *v29; /*0x640d5f*/
    v78[0] = v29[1]; /*0x640d6a*/
  int v30; // edi
    v30 = v29[2]; /*0x640d6e*/
  int v31; // ebx
    v31 = v29[3]; /*0x640d71*/
  int v32; // ebp
    v32 = 1000 * v66 / v31; /*0x640d83*/
    if ( v32 >= 1000 * v65 / v30 ) /*0x640d96*/
      v32 = 1000 * v65 / v30; /*0x640d98*/
  int v70; // [esp+7Ch] [ebp-38h]
    v70 = (v65 - v32 * v30 / 1000) / 2; /*0x640dd6*/
    v71 = (v66 - v32 * v31 / 1000) / 2; /*0x640ddf*/
    v72 = v65 - 2 * v70; /*0x640dea*/
  int v73; // [esp+88h] [ebp-2Ch]
    v73 = v66 - 2 * v71; /*0x640dee*/
  char *v33; // eax
    v33 = (char *)operator new(0x24u); /*0x640df2*/
  char *v34; // esi
    if ( v33 ) /*0x640dfc*/
      v34 = DSurface::Construct(v33, v65, v66, 1, 0); /*0x640e13*/
    else
      v34 = 0; /*0x640e17*/
  unsigned int *v35; // edi
    v35 = (unsigned int *)FileSHP; /*0x640e19*/
  int v36; // ebx
    v36 = *(unsigned int *)v34; /*0x640e1d*/
  int v37; // eax
  unsigned char v79[8]; // [esp+ACh] [ebp-8h] BYREF
    v37 = (*(int (**)(unsigned int, unsigned char *, unsigned int, unsigned int))(**(unsigned int **)FileSHP + 120))( /*0x640e2f*/
            *(unsigned int *)FileSHP,
            v79,
            0,
            0);
    (*(void (**)(char *, int *, unsigned int, int))(v36 + 8))(v34, &v72, *v35, v37); /*0x640e3d*/
    (*(((unsigned char *)&(v56)) + (sizeof(v56) - 1))) = 0; /*0x640e49*/
    FileSHP = (int)LoadFileSHP(aMmpbShp, (bool *)&v56 + 3); /*0x640e53*/
  int v38; // ebx
    v38 = 0; /*0x640e5b*/
    v58 = 0; /*0x640e5f*/
    if ( v55 > 0 ) /*0x640e63*/
    {
  char *v39; // ecx
      v39 = (char *)dword_A8B230; /*0x640e69*/
  int v40; // ebp
      v40 = 4480; /*0x640e6f*/
      v59 = 4480; /*0x640e74*/
      do /*0x64106b*/
      {
        if ( v40 == 4480 || v38 <= v62 ) /*0x640e84*/
        {
          if ( (uint8_t)(v39)->Is_Waypoint_Valid(v38) ) /*0x640e8b*/
          {
            v60 = *((ScenarioClass *)((char *)dword_A8B230))->Get_Waypoint_Location(&a5, v38); /*0x640eb0*/
  int v41; // edi
            v41 = ((*((signed short *)(((unsigned char *)&(v60)) + 2))) << 8) + 128; /*0x640ec2*/
  int v74; // [esp+8Ch] [ebp-28h] BYREF
            ((Coord *)((Coord *)&v74))->Subtract(((int16_t)v60 << 8) + 128, v41, 0); /*0x640ed4*/
  int v68; // [esp+6Ch] [ebp-48h] BYREF
            IsoCoord::ToScreenOffset(v74, v41, &v76, &v68); /*0x640eef*/
            v39 = (char *)dword_A8B230; /*0x640f32*/
  int v42; // edx
            v42 = *(int *)dword_A8B230[3].abstractFlags + v40); /*0x640f3a*/
            if ( v42 != -1 ) /*0x640f40*/
            {
  int v43; // edx
              v43 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&BuildingTypeClass_AnimTable /*0x640f66*/
                                          + 4 * *(unsigned int *)(*((unsigned int *)stru_A80220.vfptr3 + v42) + 90196))
                              + 780);
              v60 = v43; /*0x640f6c*/
              if ( FileSHP ) /*0x640f70*/
              {
                if ( v43 ) /*0x640f78*/
                {
  int v69[3]; // [esp+70h] [ebp-44h] BYREF
                  v69[0] = v72 * (1000000 * (v76 / 60 - v67) / (int)dword_A8B230[122].vfptr3) / 1000000 + v70 - 3; /*0x640fd6*/
  int v44; // eax
                  v44 = *(unsigned int *)v34; /*0x641015*/
                  v69[1] = v73 * (1000000 * (v68 / 30 - v61) / dword_A8B230[122].uniqueId) / 1000000 + v71 - 2; /*0x641025*/
  int *v45; // eax
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
  int *v46; // edi
    v46 = (int *)a7; /*0x641071*/
    (*(void (**)(int, int *, unsigned int))(*(unsigned int *)a7 + 20))(a7, &v63, 0); /*0x641083*/
  int v47; // ebx
    v47 = *v46; /*0x641088*/
  int v48; // eax
    v48 = (*(int (**)(char *, unsigned char *, unsigned int, unsigned int))(*(unsigned int *)v34 + 120))(v34, v79, 0, 0); /*0x641098*/
    result = (int *)(*(int (**)(int *, int *, char *, int))(v47 + 8))(v46, &v62, v34, v48); /*0x6410a4*/
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
  int *v6; // edx
  int16_t *v7; // esi
  bool *v8; // edi
  bool *v9; // ecx
  int result; // eax
  int v11; // ebx
  int *v12; // eax
  int v13; // ebx
  int *v14; // eax
  int *v15; // ecx
  int *v16; // edx
  int v17; // edx
  int GroundHeight; // eax
  int v19; // edx
  int v20; // ecx
  bool v21; // al
  bool *v22; // esi
  unsigned int *v23; // eax
  unsigned char *v24; // eax
  unsigned int *v25; // edi
  int v26; // esi
  unsigned int *v27; // eax
  unsigned short *v28; // eax
  int v29; // edi
  unsigned int *v30; // eax
  unsigned short *v31; // eax
  int v32; // [esp-4h] [ebp-2Ch]
  int v33; // [esp-4h] [ebp-2Ch]
  int v34; // [esp+10h] [ebp-18h] BYREF
  int v35; // [esp+14h] [ebp-14h]
  int v36; // [esp+18h] [ebp-10h]
  unsigned int v37[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v6 = aP2; /*0x692307*/
  v7 = aP1; /*0x69230e*/
  *aP3 = 0; /*0x692312*/
  *(unsigned int *)v7 = dword_B05658; /*0x69231e*/
  *v6 = dword_B05678; /*0x692329*/
  v8 = aP4; /*0x692332*/
  v6->u32_4 = dword_B0567C; /*0x692336*/
  v9 = aP5; /*0x69233e*/
  v6->u32_8 = dword_B05680; /*0x692342*/
  *v8 = 0; /*0x692345*/
  *v9 = 0; /*0x692348*/
  result = *aP0; /*0x69234b*/
  if ( *aP0 < 0 ) /*0x692350*/
    goto LABEL_39; /*0x692350*/
  v11 = aP0[1]; /*0x692356*/
  if ( v11 < 0 ) /*0x69235b*/
    goto LABEL_39; /*0x69235b*/
  if ( g_TacticalClass_Instance ) /*0x692369*/
  {
    v34 = DSurface_ViewBounds + result; /*0x69237c*/
    v35 = v11 + dword_886FA4; /*0x692380*/
    v12 = ((int)g_TacticalClass_Instance)->PixelToCell(&aP1, &v34); /*0x69238e*/
    v8 = aP4; /*0x692393*/
  }
  else
  {
    v12 = &dword_B05658; /*0x692399*/
  }
  *(unsigned int *)v7 = *v12; /*0x6923a0*/
  if ( g_TacticalClass_Instance ) /*0x6923aa*/
  {
    v13 = aP0[1]; /*0x6923ba*/
    v34 = DSurface_ViewBounds + *aP0; /*0x6923c1*/
    v35 = v13 + dword_886FA4; /*0x6923c5*/
    v14 = TacticalClass::TransformPixel((int)g_TacticalClass_Instance, v37, &v34); /*0x6923d3*/
    v8 = aP4; /*0x6923d8*/
  }
  else
  {
    v14 = &dword_B05678; /*0x6923de*/
  }
  v15 = aP2; /*0x6923e3*/
  v16 = aP2; /*0x6923e9*/
  *aP2 = *v14; /*0x6923eb*/
  v16->u32_4 = v14->vtable2; /*0x6923f0*/
  v16->u32_8 = v14->vtable3; /*0x6923f6*/
  result = (int)g_TacticalClass_Instance; /*0x6923f9*/
  if ( g_TacticalClass_Instance && (result = (&dword_87F7E8)->IsCellVisible(v15), (unsigned char)result) ) /*0x692413*/
  {
    v17 = v7[1] << 8; /*0x69242d*/
    v37[0] = (*v7 << 8) + 128; /*0x692430*/
    v37[1] = v17 + 128; /*0x692440*/
    v37[2] = 0; /*0x692444*/
    GroundHeight = Cell::GetGroundHeight(v37); /*0x69244c*/
    v19 = v7[1]; /*0x692454*/
    v20 = (*v7 << 8) + 128; /*0x69245b*/
    v36 = GroundHeight; /*0x692461*/
    v34 = v20; /*0x692465*/
    v35 = (v19 << 8) + 128; /*0x69247c*/
    v21 = (uint8_t)Cell::IsPassable(&v34) && g_hWnd; /*0x692492*/
    v22 = aP5; /*0x69249b*/
    *aP5 = v21; /*0x69249f*/
    *v8 = 0; /*0x6924a1*/
    result = *(unsigned int *)dword_A8B230; /*0x6924aa*/
    if ( (*(unsigned int *)dword_A8B230 & 0x1000) != 0 ) /*0x6924af*/
    {
      v23 = (&dword_87F7E8)->To_Cell(&v34); /*0x6924bb*/
      result = (int)((Cell *)(v23))->IsBridge(); /*0x6924c2*/
      if ( result ) /*0x6924c9*/
      {
        *v8 = result->u32_6E7; /*0x6924d1*/
      }
      else
      {
        result = (uint8_t)Game::Stub3((int)&v34) && g_hWnd; /*0x6924f1*/
        *v8 = result; /*0x6924fa*/
      }
    }
    if ( !*v22 && !*v8 ) /*0x692505*/
    {
      v24 = (g_TacticalClass_Instance)->IsOccupiedByTechno(aP0); /*0x692515*/
      v25 = aP3; /*0x69251a*/
      *aP3 = v24; /*0x692520*/
      result = (int)AbstractClass::IsTechnoType(v24); /*0x692522*/
      v26 = result; /*0x692527*/
      if ( result && !result->u32_41A ) /*0x69252d*/
      {
        if ( result->q220 == 2 /*0x692575*/
          && (v32 = dword_A83D4C->relatedTagsCount,
              v27 = (unsigned int *)(*(int (**)(int, unsigned int *))(*&result->q120))(result, v37),
              v28 = (&dword_87F7E8)->To_Cell(v27),
              result = (v28)->IsPassableOffset(v32),
              !(unsigned char)result)
          || (result = (*(int (**)(int))(*&v26->q210))(v26), result->u32_C9A) )
        {
          *v25 = 0; /*0x69257f*/
        }
      }
      if ( *v25 ) /*0x692585*/
      {
        result = (*(int (**)(unsigned int))(*(unsigned int *)*v25 + 44))(*v25); /*0x69258d*/
        if ( result == 6 ) /*0x692593*/
        {
          v29 = *v25; /*0x692595*/
          if ( !*(unsigned char *)(v29 + 1050) ) /*0x692597*/
          {
            if ( *(unsigned char *)(v29 + 1773) == 15 /*0x6925dc*/
              && (v33 = dword_A83D4C->relatedTagsCount,
                  v30 = (unsigned int *)(*(int (**)(int, unsigned int *))(*&v26->q120))(v26, v37),
                  v31 = (&dword_87F7E8)->To_Cell(v30),
                  result = (v31)->IsPassableOffset(v33),
                  !(unsigned char)result)
              || *(unsigned char *)(*(unsigned int *)(v29 + 1312) + 5889) )
            {
              result = (int)aP3; /*0x6925e6*/
              *aP3 = 0; /*0x6925ea*/
            }
          }
        }
      }
    }
    (*((unsigned char *)&(result))) = 1; /*0x6925f3*/
  }
  else
  {
  LABEL_39:
    (*((unsigned char *)&(result))) = 0; /*0x6925ff*/
  }
  return result; /*0x6925f0*/
}
}
// 0x6930A0
namespace gamemd {
MouseClass * * Tactical::HandleTacticalMouseInput(int _28, unsigned int * a2, int a4, MouseClass * aP4, void *a5_1)
{

  int v5; // eax
  (*((unsigned char *)&(v5))) = byte_A8E378; /*0x6930a0*/
  if ( byte_A8E378 && (((unsigned int *)&stru_A8EB00)[376] || ((unsigned int *)&stru_A8EB00)[391]) ) /*0x6930c4*/
  {
    if ( byte_A8E9A0 ) /*0x6930d0*/
    {
      if ( g_TacticalClass_Instance ) /*0x6930dc*/
      {
        if ( stru_887598.lineTrailer ) /*0x6930e8*/
        {
          (*((unsigned char *)&(v5))) = (unsigned char)aP4; /*0x6930f5*/
          if ( !((unsigned int *)&stru_A8EB00)[440] || *aP4 == 533 ) /*0x693101*/
          {
            v5 = *aP4 - 513; /*0x693109*/
            switch ( *aP4 ) /*0x69311f*/
            {
              case 0x201: /*0x69311f*/
                a5_1 = *(HWND *)a5_1; /*0x693138*/
  int v12; // [esp+10h] [ebp-14h] BYREF
                v12 = (int16_t)a5_1 - DSurface_ViewBounds.field_0; /*0x693148*/
  int v13; // [esp+14h] [ebp-10h]
                v13 = (*((signed short *)(((unsigned char *)&(a5_1)) + 2))) - (unsigned int)DSurface_ViewBounds.field_4; /*0x693150*/
  int16_t v10; // [esp+8h] [ebp-1Ch] BYREF
  bool v11[4]; // [esp+Ch] [ebp-18h] BYREF
  int v14[3]; // [esp+18h] [ebp-Ch] BYREF
                (*((unsigned char *)&(v5))) = Tactical::MouseOver(&v12, &v10, v14, &aP4, (bool *)&a5_1, v11); /*0x693170*/
                if ( (unsigned char)v5 ) /*0x693177*/
                {
                  (*((unsigned char *)&(v5))) = HandlePlanningModeClick(v12, v13); /*0x693187*/
                  if ( !(unsigned char)v5 && !*((unsigned char *)_28 + 21850) ) /*0x693194*/
                  {
  int v7; // eax
                    v7 = Radar::ScanWaypoints((int)&v10, aP4, 1); /*0x6931af*/
                    TacticalClass::HandlePlayerAction( /*0x6931c9*/
                      (DisplayClass *)&DataGlobal_87F7E8,
                      &v10,
                      v11[0],
                      aP4,
                      v7,
                      0);
                    DisplayClass::InitViewBounds((DisplayClass *)&DataGlobal_87F7E8, &v12); /*0x6931d8*/
                    (*((unsigned char *)&(v5))) = (uint8_t)SetCapture(g_hWnd); /*0x6931e4*/
                    *((unsigned char *)_28 + 21850) = 1; /*0x6931ea*/
                  }
                }
                break; /*0x6931f6*/
              case 0x202: /*0x69311f*/
                a5_1 = *(HWND *)a5_1; /*0x69320b*/
                v12 = (int16_t)a5_1 - DSurface_ViewBounds.field_0; /*0x69321b*/
                v13 = (*((signed short *)(((unsigned char *)&(a5_1)) + 2))) - (unsigned int)DSurface_ViewBounds.field_4; /*0x693221*/
                (*((unsigned char *)&(v5))) = ScriptAction::HitTest(v12, v13); /*0x693225*/
                if ( !(unsigned char)v5 && *((unsigned char *)_28 + 21850) ) /*0x693232*/
                {
                  Tactical::MouseOver(&v12, &v10, v14, &aP4, (bool *)&a5_1, v11); /*0x69325e*/
  int v8; // eax
                  v8 = Radar::ScanWaypoints((int)&v10, aP4, 0); /*0x693271*/
                  PlayerClass::ExecuteCommand((DisplayClass *)&DataGlobal_87F7E8, (int)v14, &v10, aP4, v8, 0); /*0x69328b*/
                  *((unsigned char *)_28 + 21850) = 0; /*0x693290*/
                  (*((unsigned char *)&(v5))) = ReleaseCapture(); /*0x693296*/
                }
                break; /*0x6932a1*/
              case 0x204: /*0x69311f*/
                a5_1 = *(HWND *)a5_1; /*0x6932b6*/
                v12 = (int16_t)a5_1 - DSurface_ViewBounds.field_0; /*0x6932c6*/
                v13 = (*((signed short *)(((unsigned char *)&(a5_1)) + 2))) - (unsigned int)DSurface_ViewBounds.field_4; /*0x6932cc*/
                (*((unsigned char *)&(v5))) = UI_Handle(v12, v13); /*0x6932d0*/
                if ( !*((unsigned char *)_28 + 21850) ) /*0x6932d5*/
                {
                  (*((unsigned char *)&(v5))) = Tactical::MouseOver(&v12, &v10, v14, &aP4, (bool *)&a5_1, v11); /*0x693301*/
                  if ( (unsigned char)v5 ) /*0x693308*/
                  {
                    if ( !((unsigned int *)&stru_A8EB00)[440] ) /*0x693314*/
                    {
                      DisplayClass::vt_entry_B0((DisplayClass *)&v12); /*0x693320*/
                      dword_884D38 = v12; /*0x69332d*/
                      dword_884D3C = v13; /*0x693339*/
                      byte_884D40 = 0; /*0x69333f*/
                      (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x693347*/
                    }
                    (*((unsigned char *)&(v5))) = (uint8_t)SetCapture(g_hWnd); /*0x693351*/
                    *((unsigned char *)_28 + 21850) = 1; /*0x693357*/
                  }
                }
                break; /*0x693363*/
              case 0x205: /*0x69311f*/
                a5_1 = *(HWND *)a5_1; /*0x693378*/
                (*((unsigned char *)&(v5))) = UI_Handle_63AB00( /*0x69338a*/
                               (int16_t)a5_1 - DSurface_ViewBounds.field_0,
                               (*((signed short *)(((unsigned char *)&(a5_1)) + 2))) - (unsigned int)DSurface_ViewBounds.field_4);
                if ( *((unsigned char *)_28 + 21850) ) /*0x69338f*/
                {
                  if ( byte_884D40 ) /*0x69339d*/
                  {
                    (*((unsigned char *)&(v5))) = byte_884D44; /*0x69339f*/
                    (*(void (**)(char *, unsigned int, int))(*(unsigned int *)&DataGlobal_87F7E8 + 72))( /*0x6933b1*/
                      &DataGlobal_87F7E8,
                      0,
                      v5);
                    byte_884D40 = 0; /*0x6933b4*/
                  }
                  else
                  {
                    TacticalClass::DispatchMode((DisplayClass *)&DataGlobal_87F7E8, (int)&v12); /*0x6933c6*/
                  }
                  DisplayClass::ExitMode((DisplayClass *)_28); /*0x6933cd*/
                  *((unsigned char *)_28 + 21850) = 0; /*0x6933d2*/
                  (*((unsigned char *)&(v5))) = ReleaseCapture(); /*0x6933d8*/
                }
                break; /*0x6933e3*/
              case 0x215: /*0x69311f*/
                (*((unsigned char *)&(v5))) = (unsigned char)g_hWnd; /*0x6933ea*/
                if ( *(HWND *)a5_1 != g_hWnd && *((unsigned char *)_28 + 21850) == 1 ) /*0x6933fc*/
                  (*((unsigned char *)&(v5))) = (*(char (**)(Tactical *))(*(unsigned int *)_28->__pad_0 + 140))(_28); /*0x693402*/
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
// 0x6A6610
namespace gamemd {
int Tactical::UpdateUIVisibility(void *a1_1)
{
  int result; // eax

  if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a661d*/
  {
  int v3; // eax
    v3 = 26; /*0x6a66f8*/
    if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a66f0*/
      v3 = 18; /*0x6a66ff*/
    if ( 4 * dword_884CF8 > 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v3 + g_DSurface_SidebarBounds - 7) / 50) ) /*0x6a6743*/
    {
      if ( !(uint8_t)((DialogControl *)((DialogControl *)&stru_B0B328))->IsHidden() ) /*0x6a6745*/
        ((DialogControl *)((GadgetClass *)&stru_B0B328))->Hide(); /*0x6a6753*/
      result = ((DialogControl *)((DialogControl *)&g_SidebarFlag))->IsHidden(); /*0x6a675d*/
      if ( !(unsigned char)result ) /*0x6a6764*/
        return ((DialogControl *)((GadgetClass *)&g_SidebarFlag))->Hide(); /*0x6a6764*/
      return result; /*0x6a6764*/
    }
    if ( (uint8_t)((DialogControl *)((DialogControl *)&stru_B0B328))->IsHidden() ) /*0x6a6770*/
      DialogControl::Show((GadgetClass *)&stru_B0B328); /*0x6a677e*/
    result = ((DialogControl *)((DialogControl *)&g_SidebarFlag))->IsHidden(); /*0x6a6788*/
    if ( !(unsigned char)result ) /*0x6a678f*/
      return result; /*0x6a678f*/
    return DialogControl::Show((GadgetClass *)&g_SidebarFlag); /*0x6a6796*/
  }
  int v1; // eax
  v1 = 26; /*0x6a6631*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a6629*/
    v1 = 18; /*0x6a6638*/
  if ( *((unsigned int *)a1_1 + 997 * *((unsigned int *)a1_1 + 5351) + 1382) <= 2 /*0x6a668a*/
                                                                  * ((g_DSurface_ViewBounds
                                                                    - g_SidebarBounds
                                                                    - v1
                                                                    + g_DSurface_SidebarBounds
                                                                    - 7)
                                                                   / 50) )
  {
    if ( (uint8_t)((DialogControl *)((DialogControl *)&stru_B0B328))->IsHidden() ) /*0x6a66bb*/
      DialogControl::Show((GadgetClass *)&stru_B0B328); /*0x6a66c9*/
    result = ((DialogControl *)((DialogControl *)&g_SidebarFlag))->IsHidden(); /*0x6a66d3*/
    if ( !(unsigned char)result ) /*0x6a66da*/
      return result; /*0x6a66da*/
    return DialogControl::Show((GadgetClass *)&g_SidebarFlag); /*0x6a66da*/
  }
  if ( !(uint8_t)((DialogControl *)((DialogControl *)&stru_B0B328))->IsHidden() ) /*0x6a668c*/
    ((DialogControl *)((GadgetClass *)&stru_B0B328))->Hide(); /*0x6a669a*/
  result = ((DialogControl *)((DialogControl *)&g_SidebarFlag))->IsHidden(); /*0x6a66a4*/
  if ( !(unsigned char)result ) /*0x6a66ab*/
    return ((DialogControl *)((GadgetClass *)&g_SidebarFlag))->Hide(); /*0x6a66b1*/
  return result; /*0x6a679b*/
}
}
// 0x6D4E20
namespace gamemd {
void Tactical::DisplayTacticalOverlayText(wchar_t * String)
{

  int v13[2]; // [esp+14h] [ebp-28h] BYREF

  if ( !DataGlobal_A8EB00[619] && (String && wcslen(String) || *&this->q0A4 != -1) ) /*0x6d4e52*/
  {
    if ( (*(unsigned __int8 (**)(AudioStream *))(*(unsigned int *)DSurface_Composite->__pad_0 + 132))(DSurface_Composite) ) /*0x6d4e60*/
    {
  signed int v3; // edi
      v3 = *&this->q0A4; /*0x6d4e6e*/
      if ( v3 != -1 /*0x6d4e93*/
        && *(unsigned int *)&DataGlobal_A8EB00[3224]
        && *(unsigned int *)&DataGlobal_A8EB00[3220]
        && *(__int16 *)(*(unsigned int *)&DataGlobal_A8EB00[3220] + 6) > v3 )
      {
  __int64 v4; // rax
        v4 = *(unsigned int *)&g_DSurface_WindowOffset - *(__int16 *)(*(unsigned int *)&DataGlobal_A8EB00[3220] + 4); /*0x6d4ea0*/
  int v5; // kr00_4
        v5 = *(unsigned int *)g_Map_VisibleRectOffset - *(__int16 *)(*(unsigned int *)&DataGlobal_A8EB00[3220] + 2); /*0x6d4eb1*/
        v13[1] = ((int)v4 - HIDWORD(v4)) >> 1; /*0x6d4eb9*/
        v13[0] = v5 / 2; /*0x6d4ebd*/
        DrawToSurfaceSHP( /*0x6d4ee5*/
          (int)DSurface_Composite,
          *(int *)&DataGlobal_A8EB00[3224],
          *(int *)&DataGlobal_A8EB00[3220],
          v3,
          v13,
          &DSurface_ViewBounds.field_0,
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
  char *v15; // [esp+20h] [ebp-1Ch]
          v15 = (char *)DSurface_ViewBounds.field_4; /*0x6d4f18*/
  int v17; // [esp+28h] [ebp-14h]
          v17 = *(unsigned int *)&g_DSurface_WindowOffset; /*0x6d4f35*/
  int v6; // ebx
          v6 = *(unsigned int *)g_Map_VisibleRectOffset; /*0x6d4f3e*/
  Char *v7; // edi
          v7 = (Char *)g_FogOfWarState; /*0x6d4f4c*/
  int v8; // ebp
          v8 = DSurface_ViewBounds.field_0; /*0x6d4f5a*/
  int v14; // [esp+1Ch] [ebp-20h]
          v14 = DSurface_ViewBounds.field_0; /*0x6d4f61*/
  int v16; // [esp+24h] [ebp-18h]
          v16 = *(unsigned int *)g_Map_VisibleRectOffset; /*0x6d4f65*/
  int v9; // esi
          v9 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6d4f89*/
             | (255 >> g_BitMask_Blue << g_BitMask_Green)
             | (255 >> g_BitMask_Red << g_BitShift_Blue);
  int v12; // [esp+10h] [ebp-2Ch] BYREF
          Text::Layout(g_FogOfWarState, String, &v12, v13, *(int *)g_Map_VisibleRectOffset); /*0x6d4f90*/
  unsigned int v18[4]; // [esp+2Ch] [ebp-10h] BYREF
          v18[0] = v14; /*0x6d4fbb*/
  int v10; // ebx
          v10 = v8 + (v6 - v12) / 2; /*0x6d4fc1*/
          v18[2] = v16 + v14; /*0x6d4fc9*/
          v18[1] = v15; /*0x6d4fd1*/
          v18[3] = &v15[v17]; /*0x6d4fd9*/
  int v11; // ebp
          v11 = (int)&v15[(v17 - v13[0]) / 2]; /*0x6d4fdf*/
          Char::Swap(v7, 1); /*0x6d4fe1*/
          TextGroup::SetRect((TextGroup *)v7, v18); /*0x6d4fed*/
          Property::Set((Property *)v7, v9); /*0x6d4ff5*/
          FontRenderer::DrawText(v7, (int *)DSurface_Composite->__pad_0, String, v10, v11, 0, 0); /*0x6d5013*/
        }
      }
    }
  }

}
}
// 0x6D6070
namespace gamemd {
unsigned int Tactical::SetTacticalPosition(int *aP1, void *a2)
{


  int v3; // esi
  v3 = *aP1; /*0x6d607d*/
  int v9; // [esp+14h] [ebp-4h]
  v9 = aP1->u32_4; /*0x6d6083*/
  int v8; // [esp+10h] [ebp-8h] BYREF
  v8 = -60 * v9 / 2 + 60 * v3 / 2; /*0x6d60c3*/
  int v4; // ebx
  v4 = 30 * v9 / 2 + 30 * v3 / 2; /*0x6d60de*/
  int v5; // esi
  v5 = v8 / 256; /*0x6d60e2*/
  int v6; // ebx
  v6 = v4 / 256 - ZCoordToScreenY(aP1[2]); /*0x6d6118*/
  v8 /= 256; /*0x6d611d*/
  v9 = v6; /*0x6d6121*/
  if ( ClampCoordMap(&v8) && !DataGlobal_A8EB00[619] ) /*0x6d6135*/
  {
    v5 = v8; /*0x6d6137*/
    v6 = v9; /*0x6d613b*/
  }
  this->TacticalClass_field_D64 = v5; /*0x6d613f*/
  this->TacticalClass_field_D74 = v5; /*0x6d6145*/
  this->TacticalClass_field_D68 = v6; /*0x6d614d*/
  this->TacticalClass_field_D78 = v6; /*0x6d6153*/
  unsigned int result; // eax
  result = TacticalClass::CalcViewportCells(this); /*0x6d6159*/
  this->redrawing = 1; /*0x6d615e*/
  return result; /*0x6d6165*/

}
}
// 0x6D6590
namespace gamemd {
unsigned int * Tactical::PixelToCell(unsigned int *aP1, int *aP2)
{

  __int16 v40[4]; // [esp+2Ch] [ebp-50h] BYREF

  int v3; // eax
  v3 = *aP2; /*0x6d659f*/
  int v48; // [esp+54h] [ebp-28h]
  v48 = 0; /*0x6d65ab*/
  int v5; // eax
  v5 = *&this->u32_B0 + v3; /*0x6d65bf*/
  int v6; // ecx
  v6 = aP2[1] + *&this->u32_B4; /*0x6d65c6*/
  int v43; // [esp+3Ch] [ebp-40h]
  v43 = v5 - DSurface_ViewBounds.field_0; /*0x6d65c8*/
  unsigned int v44; // [esp+40h] [ebp-3Ch]
  v44 = v6 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d65d2*/
  float v46; // [esp+4Ch] [ebp-30h] BYREF
  v46 = (float)(v5 - DSurface_ViewBounds.field_0); /*0x6d65e1*/
  float v47; // [esp+50h] [ebp-2Ch]
  v47 = (float)(v6 - (unsigned int)DSurface_ViewBounds.field_4); /*0x6d65ed*/
  float *v7; // eax
  float v52[3]; // [esp+64h] [ebp-18h] BYREF
  v7 = TransformMatrix3x4Point(v52, &this->u32_DE4, &v46); /*0x6d65f1*/
  v46 = *v7; /*0x6d65f8*/
  v47 = v7[1]; /*0x6d6603*/
  v48 = *((unsigned int *)v7 + 2); /*0x6d660a*/
  int v8; // eax
  LOWORD(v8) = Math::RoundToInt(v46); /*0x6d660e*/
  int v9; // esi
  v9 = v8; /*0x6d6617*/
  int v10; // eax
  LOWORD(v10) = Math::RoundToInt(v47); /*0x6d6619*/
  float v49; // [esp+58h] [ebp-24h] BYREF
  LODWORD(v49) = (unsigned __int8)v9; /*0x6d6631*/
  int v39; // [esp+28h] [ebp-54h]
  LOWORD(v39) = v9 / 256; /*0x6d6638*/
  float v50; // [esp+5Ch] [ebp-20h]
  LODWORD(v50) = (unsigned __int8)v10; /*0x6d664c*/
  HIWORD(v39) = v10 / 256; /*0x6d6663*/
  int v51; // [esp+60h] [ebp-1Ch]
  v51 = 0; /*0x6d6668*/
  int v45[2]; // [esp+44h] [ebp-38h] BYREF
  Coord::To_ScreenRaw(v45, &v49); /*0x6d666c*/
  signed int v11; // ebx
  v11 = aP2[1] - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d6684*/
  v43 = *aP2 - DSurface_ViewBounds.field_0; /*0x6d668a*/
  int v12; // ebp
  v12 = v11 + 180; /*0x6d668e*/
  v44 = v11; /*0x6d6694*/
  int v41; // [esp+34h] [ebp-48h]
  v41 = v43; /*0x6d6698*/
  int v42; // [esp+38h] [ebp-44h]
  v42 = v11 + 180; /*0x6d669c*/
  int i; // [esp+24h] [ebp-58h]
  for ( i = 0; ; ++i )
  {
  int v13; // ecx
    v13 = *&this->u32_B4; /*0x6d66b4*/
    v45[0] = v41 + *&this->u32_B0; /*0x6d66bc*/
    v45[1] = v12 + v13; /*0x6d66c6*/
    v49 = (float)v45[0]; /*0x6d66d5*/
    v51 = 0; /*0x6d66e1*/
    v50 = (float)(v12 + v13); /*0x6d66e9*/
  float *v14; // eax
  float v53[3]; // [esp+70h] [ebp-Ch] BYREF
    v14 = TransformMatrix3x4Point(v53, &this->u32_DE4, &v49); /*0x6d66ed*/
    v49 = *v14; /*0x6d66f4*/
    v50 = v14[1]; /*0x6d66ff*/
    v51 = *((unsigned int *)v14 + 2); /*0x6d6706*/
  int v15; // eax
    LOWORD(v15) = Math::RoundToInt(v49); /*0x6d670a*/
  int v16; // esi
    v16 = v15; /*0x6d6713*/
  int v17; // eax
    LOWORD(v17) = Math::RoundToInt(v50); /*0x6d6715*/
    v40[0] = v16 / 256; /*0x6d672a*/
    v40[1] = v17 / 256; /*0x6d6747*/
  Cell *v18; // esi
    v18 = (Cell *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v40); /*0x6d6751*/
  signed int v35; // [esp+18h] [ebp-64h]
    v35 = v12 - 15 * v18->u32_11B; /*0x6d6768*/
    if ( ((int)v18->u32_140 & 0x100) != 0 )
    {
  unsigned int *NeighbourContent; // [esp+1Ch] [ebp-60h]
      NeighbourContent = Cell::GetNeighbourContent(v18, 2u); /*0x6d6786*/
  unsigned int *v37; // [esp+20h] [ebp-5Ch]
      v37 = Cell::GetNeighbourContent(v18, 4u); /*0x6d678f*/
  char v54; // [esp+84h] [ebp+8h]
      if ( ((int)v18->u32_140 & 0x800) == 0 /*0x6d67b7*/
        || (v54 = 1, (*((unsigned int *)Cell::GetNeighbourContent(v18, 0) + 80) & 0x100) != 0) )
      {
        v54 = 0; /*0x6d67b9*/
      }
  char v30; // [esp+13h] [ebp-69h]
      if ( ((int)v18->u32_140 & 0x800) != 0 /*0x6d67e2*/
        || (v30 = 1, (*((unsigned int *)Cell::GetNeighbourContent(v18, 6u) + 80) & 0x100) != 0) )
      {
        v30 = 0; /*0x6d67e4*/
      }
  int v19; // ecx
      v19 = (int)v18->u32_140 & 0x800; /*0x6d67ef*/
  char v31; // [esp+14h] [ebp-68h]
      if ( !v19 || (v31 = 1, (v37->u32_140 & 0x100) != 0) ) /*0x6d6806*/
        v31 = 0; /*0x6d6808*/
  char v33; // [esp+16h] [ebp-66h]
      if ( v19 || (v33 = 1, (NeighbourContent[80] & 0x100) != 0) ) /*0x6d6820*/
        v33 = 0; /*0x6d6822*/
  __int64 v20; // rax
  char v34; // [esp+17h] [ebp-65h]
      if ( !v19 /*0x6d6858*/
        || (v20 = v18->u32_11B - *((char *)NeighbourContent + 283),
            (int)((HIDWORD(v20) ^ v20) - HIDWORD(v20)) > 1)
        || (v34 = 1, (NeighbourContent[80] & 0x100) != 0) )
      {
        v34 = 0; /*0x6d685a*/
      }
  __int64 v21; // rax
  char v32; // [esp+15h] [ebp-67h]
      if ( v19 /*0x6d688e*/
        || (v21 = v18->u32_11B - v37->u32_11B, (int)((HIDWORD(v21) ^ v21) - HIDWORD(v21)) > 1)
        || (v32 = 1, (v37->u32_140 & 0x100) != 0) )
      {
        v32 = 0; /*0x6d6890*/
      }
  int v22; // eax
      v22 = *&v18->u32_24; /*0x6d6899*/
  int v23; // ecx
      v23 = *&v18->u32_26 << 8; /*0x6d68a8*/
      v52[2] = 0.0; /*0x6d68ab*/
      LODWORD(v52[1]) = v23; /*0x6d68b2*/
      LODWORD(v52[0]) = v22 << 8; /*0x6d68ca*/
  int *v24; // eax
      v24 = Coord::To_ScreenRaw((int *)&v46, v52); /*0x6d68ce*/
  int v25; // ecx
      v25 = -30 * v18->u32_11B / 2 + v24[1] - *&this->u32_B4; /*0x6d68ff*/
      if ( v25 <= v11 ) /*0x6d6903*/
      {
        if ( v31 || v32 ) /*0x6d6917*/
        {
          *aP1 = *&v40->u32_40000; /*0x6d6a61*/
          return aP1; /*0x6d6a67*/
        }
        if ( v33 || v34 ) /*0x6d692f*/
        {
  int *v55; // [esp+84h] [ebp+8h]
          HIWORD(v55) = v40[1]; /*0x6d6a0c*/
          LOWORD(v55) = v40[0] + 1; /*0x6d6a1b*/
          *aP1 = v55; /*0x6d6a2d*/
          return aP1; /*0x6d6a33*/
        }
      }
      if ( v54 || v30 )
      {
  int v26; // ebx
        v26 = v43 - (*v24 - *&this->u32_B0); /*0x6d6971*/
  unsigned int v27; // ebp
        v27 = v44 - v25; /*0x6d6977*/
        if ( v54 && (int)(v27 - v26 / 2) > 15 || v30 && (int)(v27 + v26 / 2) > 15 )
          v35 -= ((int)v18->u32_140 & 0x100) != 0 ? 0x3C : 0;
        v11 = v44; /*0x6d69c0*/
      }
      else
      {
        v35 -= ((int)v18->u32_140 & 0x100) != 0 ? 0x3C : 0;
      }
    }
    if ( v35 <= v11 ) /*0x6d69c8*/
      break; /*0x6d69c8*/
  bool v28; // cc
    v28 = i + 1 < 180; /*0x6d69d8*/
    --v42; /*0x6d69dd*/
    if ( !v28 ) /*0x6d69e5*/
    {
      *aP1 = v39; /*0x6d69f9*/
      return aP1; /*0x6d69ff*/
    }
    v12 = v42; /*0x6d66a6*/
  }
  *aP1 = *(unsigned int *)v40; /*0x6d6a78*/
  return aP1; /*0x6d69f6*/

}
}
// 0x6DA7D0
namespace gamemd {
int Tactical::AddCellToDrawList(int aP1, void *a2)
{
  int v9; // edi
  int v10; // ecx

  int result; // eax
  result = dword_87F7F4; /*0x6da7d0*/
  if ( !dword_87F7F4 ) /*0x6da7df*/
  {
    result = (int)dword_A8ED84; /*0x6da7e9*/
    if ( aP1->q05C != dword_A8ED84 && ((aP1->q12C & 8) != 0 || aP1->q138) ) /*0x6da800*/
    {
      aP1->q05C = dword_A8ED84; /*0x6da80e*/
  int *Coords; // eax
  int v14[3]; // [esp+Ch] [ebp-Ch] BYREF
      Coords = CellClass::GetCoords((unsigned int *)aP1, v14); /*0x6da819*/
  int v5; // ecx
      v5 = *Coords; /*0x6da81e*/
  int v6; // esi
      v6 = Coords->vtable2; /*0x6da820*/
  int v7; // edx
      v7 = Coords->vtable3; /*0x6da823*/
  int v8; // eax
      v8 = aP1->q12C; /*0x6da826*/
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
      v10 = v10; /*0x6da8c6*/
  int v12; // eax
      v12 = ZCoordToScreenY(0); /*0x6da8d8*/
      v14[0] = v9 / 256; /*0x6da8e8*/
  int v13; // esi
      v13 = v9 / 256 - *(&this->u32_68); /*0x6da8ff*/
      result = v10 / 256 - v12 - *(&this->q105); /*0x6da907*/
      if ( v13 >= DSurface_ViewBounds - 30 /*0x6da936*/
        && result >= -30
        && v13 <= dword_886FA8 + DSurface_ViewBounds + 30
        && result <= dword_886FAC + dword_886FA4 + 15 )
      {
        result = this->FootClass_E0; /*0x6da938*/
        if ( result < 799 ) /*0x6da943*/
        {
          *(this + result + 57) = aP1; /*0x6da949*/
          result = this->FootClass_E0 + 1; /*0x6da956*/
          this->FootClass_E0 = result; /*0x6da957*/
        }
        aP1->q138 = 0; /*0x6da961*/
        this->u32_D7D = 1; /*0x6da968*/
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

  Vector2 v37; // [esp+48h] [ebp-CCh] BYREF
  int v38; // [esp+50h] [ebp-C4h] BYREF
  int v39; // [esp+54h] [ebp-C0h]
  int v44[2]; // [esp+68h] [ebp-ACh] BYREF
  int v45; // [esp+70h] [ebp-A4h] BYREF
  int v46; // [esp+74h] [ebp-A0h]
  int v47; // [esp+78h] [ebp-9Ch]
  int v48; // [esp+7Ch] [ebp-98h] BYREF
  int v49; // [esp+80h] [ebp-94h]
  int v50; // [esp+84h] [ebp-90h]
  int v56[2]; // [esp+C4h] [ebp-50h] BYREF
  int v57[3]; // [esp+CCh] [ebp-48h] BYREF
  unsigned char v58[12]; // [esp+D8h] [ebp-3Ch] BYREF

  LayerClass::CellIteratorReset((LayerClass *)&DataGlobal_87F7E8); /*0x6db221*/
  CellClass *v2; // ebp
  v2 = (CellClass *)LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x6db236*/
  int result; // eax
  result = 255 >> g_BitMask_Blue << g_BitMask_Green; /*0x6db251*/
  int v4; // edi
  v4 = result | (255 >> g_BitShift_Green_0 << g_BitShift_Red); /*0x6db283*/
  int v51; // [esp+88h] [ebp-8Ch]
  v51 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (255 >> g_BitMask_Red << g_BitShift_Blue); /*0x6db2b5*/
  int v5; // ebx
  v5 = result | (255 >> g_BitMask_Red << g_BitShift_Blue); /*0x6db2c1*/
  if ( v2 ) /*0x6db2c5*/
  {
    do /*0x6db525*/
    {
  ObjectClass *firstObject; // [esp+44h] [ebp-D0h]
      firstObject = v2->firstObject; /*0x6db2d3*/
      if ( firstObject ) /*0x6db2d7*/
      {
  int *Coords; // eax
  int v63[3]; // [esp+108h] [ebp-Ch] BYREF
        Coords = CellClass::GetCoords(v2, v63); /*0x6db2e7*/
  unsigned int v52[3]; // [esp+8Ch] [ebp-88h] BYREF
        v52[0] = *Coords; /*0x6db2ee*/
        v52[1] = Coords->vtable2; /*0x6db2fa*/
        v52[2] = Coords->vtable3; /*0x6db30b*/
  int *v7; // eax
  int v60; // [esp+ECh] [ebp-28h] BYREF
        v7 = Coord::To_ScreenRaw(&v60, v52); /*0x6db30f*/
  int v8; // edx
        v8 = *&this->u32_B0; /*0x6db314*/
  int v40; // [esp+58h] [ebp-BCh] BYREF
        v40 = *v7; /*0x6db31e*/
  int v9; // ecx
        v9 = v7[1]; /*0x6db324*/
        v40 -= v8; /*0x6db327*/
  int v41; // [esp+5Ch] [ebp-B8h]
        v41 = v9 - *&this->u32_B4; /*0x6db33a*/
  unsigned int *v10; // eax
  char v62[12]; // [esp+FCh] [ebp-18h] BYREF
        v10 = (unsigned int *)(*((int (**)(ObjectClass *, char *))firstObject->AbstractClass + 18))( /*0x6db345*/
                          firstObject,
                          v62);
  unsigned int v53[3]; // [esp+98h] [ebp-7Ch] BYREF
        v53[0] = *v10; /*0x6db34a*/
        v53[1] = v10[1]; /*0x6db356*/
        v53[2] = v10[2]; /*0x6db367*/
  int *v11; // eax
  int v59; // [esp+E4h] [ebp-30h] BYREF
        v11 = Coord::To_ScreenRaw(&v59, v53); /*0x6db36b*/
  int v12; // edx
        v12 = *&this->u32_B0; /*0x6db370*/
  int *v13; // ecx
        v13 = v11; /*0x6db376*/
        v44[0] = *v11; /*0x6db37b*/
  int v14; // eax
        v14 = v44[0] - v12; /*0x6db37f*/
  int v15; // ecx
        v15 = v13[1]; /*0x6db381*/
  int v16; // edx
        v16 = *&this->u32_B4; /*0x6db384*/
        v44[0] = v14; /*0x6db390*/
  unsigned int v55[4]; // [esp+B4h] [ebp-60h] BYREF
        v55[1] = v41 - 1; /*0x6db39a*/
        v44[1] = v15 - v16; /*0x6db3a6*/
        v55[2] = 3; /*0x6db3b0*/
        v55[3] = 3; /*0x6db3b7*/
        v55[0] = v40 - 1; /*0x6db3c5*/
        (*(void (**)(AudioStream *, CellStruct *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 16))( /*0x6db3d4*/
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          v55,
          v4);
        (*(void (**)(AudioStream *, CellStruct *, int *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2 /*0x6db3ef*/
                                                                               + 44))(
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          &v40,
          v44,
          v4);
      }
  ObjectClass *altObject; // [esp+44h] [ebp-D0h]
      altObject = v2->altObject; /*0x6db3fa*/
      if ( altObject ) /*0x6db3fe*/
      {
  int *v17; // eax
        v17 = CellClass::GetCoords(v2, v57); /*0x6db40e*/
        v48 = *v17; /*0x6db415*/
        v49 = v17->vtable2; /*0x6db41c*/
        v50 = v17->vtable3; /*0x6db432*/
  int *v18; // eax
  int v61; // [esp+F4h] [ebp-20h] BYREF
        v18 = Coord::To_ScreenRaw(&v61, &v48); /*0x6db436*/
  int v19; // edx
        v19 = *&this->u32_B0; /*0x6db43d*/
  int v20; // ebp
        v20 = *&this->u32_B4; /*0x6db443*/
  int v42; // [esp+60h] [ebp-B4h] BYREF
        v42 = *v18; /*0x6db449*/
  int v21; // eax
        v21 = v18[1] - v20; /*0x6db452*/
        v42 -= v19; /*0x6db454*/
  int v43; // [esp+64h] [ebp-B0h]
        v43 = v21 - 60; /*0x6db45f*/
  int *v22; // eax
        v22 = (int *)(*((int (**)(ObjectClass *, unsigned char *))altObject->AbstractClass + 18))(altObject, v58); /*0x6db46d*/
        v45 = *v22; /*0x6db472*/
        v46 = v22[1]; /*0x6db47e*/
        v47 = v22[2]; /*0x6db48f*/
  int *v23; // eax
        v23 = Coord::To_ScreenRaw(v56, &v45); /*0x6db493*/
        *(unsigned int *)v37.__pad_000 = *v23; /*0x6db49a*/
  int v24; // ecx
        v24 = *&this->u32_B4; /*0x6db49e*/
  int v25; // edx
        v25 = v23[1]; /*0x6db4a4*/
  int v26; // eax
        v26 = *&this->u32_B0; /*0x6db4a7*/
        v37.q004 = v25; /*0x6db4ad*/
        v39 = v24; /*0x6db4b5*/
        v38 = v26; /*0x6db4be*/
        Vector2::Subtract(&v37, &v38); /*0x6db4c2*/
  unsigned int v54[4]; // [esp+A4h] [ebp-70h] BYREF
        v54[0] = v42 - 1; /*0x6db4d1*/
        v54[1] = v43 - 1; /*0x6db4da*/
        v54[2] = 3; /*0x6db4e4*/
        v54[3] = 3; /*0x6db4e8*/
        (*(void (**)(AudioStream *, CellStruct *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 16))( /*0x6db4f9*/
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          v54,
          v5);
        (*(void (**)(AudioStream *, CellStruct *, int *, Vector2 *, int))(*(unsigned int *)g_DSurface_Hidden_2 /*0x6db514*/
                                                                                   + 44))(
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          &v42,
          &v37,
          v5);
      }
      result = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x6db51c*/
      v2 = (CellClass *)result; /*0x6db521*/
    }
    while ( result ); /*0x6db525*/
  }
  int i; // ebx
  for ( i = dword_A8E370 - 1; i >= 0; --i ) /*0x6db536*/
  {
  unsigned int *v28; // edi
    v28 = (unsigned int *)*((unsigned int *)dword_A8E364 + i); /*0x6db542*/
    result = v28[12]; /*0x6db545*/
    if ( result ) /*0x6db54a*/
    {
  int *v29; // eax
      v29 = (int *)(*(int (**)(unsigned int *, unsigned char *))(*v28 + 72))(v28, v58); /*0x6db55c*/
      v45 = *v29; /*0x6db561*/
      v46 = v29[1]; /*0x6db568*/
      v47 = v29[2]; /*0x6db57e*/
  int *v30; // eax
      v30 = Coord::To_ScreenRaw(v56, &v45); /*0x6db582*/
  int v31; // ecx
      v31 = *&this->u32_B0; /*0x6db589*/
      *(unsigned int *)v37.__pad_000 = *v30; /*0x6db58f*/
  int v32; // edx
      v32 = *&this->u32_B4; /*0x6db593*/
  int v33; // eax
      v33 = v30[1]; /*0x6db599*/
      v38 = v31; /*0x6db59c*/
      v37.q004 = v33; /*0x6db5a0*/
      v39 = v32; /*0x6db5ad*/
      Vector2::Subtract(&v37, &v38); /*0x6db5b1*/
  int *v34; // eax
      v34 = (int *)(*(int (**)(unsigned int, int *))(*(unsigned int *)v28[12] + 72))(v28[12], v57); /*0x6db5c3*/
      v48 = *v34; /*0x6db5c8*/
      v49 = v34[1]; /*0x6db5d4*/
      v50 = v34[2]; /*0x6db5e2*/
      Coord::To_Screen((Coord *)this, &v48, v44); /*0x6db5e6*/
      result = (*(int (**)(AudioStream *, CellStruct *, Vector2 *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2 /*0x6db607*/
                                                                                         + 44))(
                 g_DSurface_Hidden_2,
                 &DSurface_ViewBounds,
                 &v37,
                 v44,
                 v51);
    }
  }
  return result; /*0x6db611*/

}
}
// 0x6DBB60
namespace gamemd {
int Tactical::DrawOverlay(int * a1, BuildingTypeClass * aP2, int a4, int a5)
{

  IsoCoord v29; // [esp+10h] [ebp-20h] BYREF
  IsoCoord v30; // [esp+18h] [ebp-18h] BYREF

  unsigned int *v6; // eax
  v6 = IsoCoord::ToPixel(&v30, *a1, a1->IsoCoord_field_0x04); /*0x6dbb79*/
  int v7; // ebx
  v7 = v6->IsoCoord_field_0x04; /*0x6dbb83*/
  int v8; // esi
  v8 = *v6 / 256; /*0x6dbb93*/
  int v9; // ecx
  v9 = ZCoordToScreenY(a1[2]); /*0x6dbb9b*/
  int v10; // edx
  v10 = *&this->u32_B4; /*0x6dbbac*/
  int v11; // eax
  v11 = v7 / 256 - v9; /*0x6dbbb5*/
  int v12; // ecx
  v12 = *&this->u32_B0; /*0x6dbbb7*/
  unsigned int v32[2]; // [esp+28h] [ebp-8h] BYREF
  v32[0] = v8; /*0x6dbbbd*/
  int v13; // esi
  v13 = v8 - v12; /*0x6dbbc3*/
  int v14; // ecx
  v14 = aP2[1]; /*0x6dbbc5*/
  v32[1] = v11 - v10; /*0x6dbbc8*/
  int v27; // [esp-8h] [ebp-38h]
  v27 = *aP2; /*0x6dbbcf*/
  v32[0] = v13; /*0x6dbbd4*/
  unsigned int *v15; // eax
  v15 = IsoCoord::ToPixel(&v29, v27, v14); /*0x6dbbd8*/
  int v16; // ecx
  v16 = v15->IsoCoord_field_0x04; /*0x6dbbe1*/
  __int64 v17; // rax
  v17 = (int)*v15; /*0x6dbbe4*/
  v30.IsoCoord_field_0x04 = v16; /*0x6dbbeb*/
  int v18; // esi
  v18 = (BYTE4(v17) + (int)v17) >> 8; /*0x6dbbf6*/
  int v19; // eax
  v19 = ZCoordToScreenY(aP2[2]); /*0x6dbbf9*/
  unsigned int v31[2]; // [esp+20h] [ebp-10h] BYREF
  v31[0] = v18; /*0x6dbc0b*/
  int v20; // esi
  v20 = v18 - *&this->u32_B0; /*0x6dbc22*/
  v31[1] = v30.IsoCoord_field_0x04 / 256 - v19 - *&this->u32_B4; /*0x6dbc28*/
  int v21; // eax
  v21 = aP2[2]; /*0x6dbc2c*/
  v31[0] = v20; /*0x6dbc34*/
  *(unsigned int *)v29.__pad_000 = v21; /*0x6dbc38*/
  *(unsigned int *)v30.__pad_000 = a1->u32_8; /*0x6dbc58*/
  BOOL v33; // [esp+38h] [ebp+8h]
  v33 = *(unsigned int *)v30.__pad_000 >= 728; /*0x6dbc5e*/
  AudioStream *v22; // esi
  v22 = g_DSurface_Hidden_2; /*0x6dbc66*/
  int v23; // edi
  v23 = *(unsigned int *)g_DSurface_Hidden_2; /*0x6dbc77*/
  int v24; // eax
  LOWORD(v24) = Math::RoundToInt((double)v21 * dbl_B0CD48 + (double)(v21 >= 728) + 0.5); /*0x6dbc83*/
  int v28; // [esp-8h] [ebp-38h]
  v28 = 14 - v24; /*0x6dbc99*/
  int v25; // eax
  LOWORD(v25) = Math::RoundToInt((double)*(int *)v30.__pad_000 * dbl_B0CD48 + (double)v33 + 0.5); /*0x6dbca4*/
  (*(void (**)(AudioStream *, CellStruct *, unsigned int *, unsigned int *, int, int, int, int))(v23 + 52))( /*0x6dbcc7*/
    v22,
    &DSurface_ViewBounds,
    v32,
    v31,
    a4,
    14 - v25,
    v28,
    a5);
  return 1; /*0x6dbcca*/

}
}
// 0x6E4A80
namespace gamemd {
int Tactical_42::FindItem(unsigned int * a2)
{


  int v2; // edx
  v2 = *(unsigned int *)this->q010; /*0x6e4a80*/
  int result; // eax
  result = 0; /*0x6e4a83*/
  if ( v2 <= 0 ) /*0x6e4a88*/
    return -1; /*0x6e4a9f*/
  unsigned int *i; // ecx
  for ( i = *&this->q004; *i != *a2; ++i ) /*0x6e4a8e*/
  {
    if ( ++result >= v2 ) /*0x6e4a9d*/
      return -1; /*0x6e4a9d*/
  }
  return result; /*0x6e4aa2*/

}
}
// 0x4A35F0
namespace gamemd {
char * Tactical::SetCellTransform(int a2, int aP2, int a4, int aP4, int a6, int a7, void *a7_1)
{

  char *result; // eax
  result = &this->needsSave * a2; /*0x4a35fb*/
  *(unsigned int *)result = aP2; /*0x4a3601*/
  result->u32_4 = a4; /*0x4a3607*/
  result->u32_8 = aP4; /*0x4a360e*/
  result->q018 = a6; /*0x4a3615*/
  result->u32_1C = a7; /*0x4a3618*/
  result->q00C = 1065353216; /*0x4a361b*/
  return result; /*0x4a3622*/
}
} // namespace gamemd

// 0x4F4450
namespace gamemd {
char Tactical::SelectObject(int a2, void *a2_2)
{

  int result; // eax
  result = (*(int (**)(GScreenClass *, int))(a2_2->vfptr[0] + 44))(a2_2, a2_2); /*0x4f4458*/
  if ( (unsigned char)result ) /*0x4f445d*/
  {
    result = (*(int (**)(int))(*&a2_2->q090))(a2_2); /*0x4f4467*/
    *(unsigned int *)&((unsigned int *)&stru_A8EB00)[880] = result; /*0x4f446a*/
    (*((unsigned char *)&(result))) = 1; /*0x4f446f*/
  }
  return result; /*0x4f445f*/
}
} // namespace gamemd

// 0x6DA560
namespace gamemd {
int * Tactical::ScrollMap(Tactical * aP0, int a2)
{

  int *result; // eax
  result = dword_B0CEC8; /*0x6da564*/
  do /*0x6da57b*/
  {
    if ( (Tactical *)*result == aP0 ) /*0x6da56b*/
      *result = 0; /*0x6da56d*/
    result += 3; /*0x6da573*/
  }
  while ( (int)result < (int)&dword_B0E638 ); /*0x6da57b*/
  if ( aP0 == *(Tactical **)&dword_880978 ) /*0x6da583*/
  {
    result = (int *)MIXClass::CopyHeader((int *)&DataGlobal_87F7E8, 0); /*0x6da58c*/
    *(unsigned int *)&dword_880978 = 0; /*0x6da591*/
    *(unsigned int *)&DataGlobal_88097C = 0; /*0x6da59b*/
    *(unsigned int *)&dword_880980 = -1; /*0x6da5a5*/
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
  a2[3] = unk_7E995C; /*0x6dbd10*/
  return 0; /*0x6dbced*/
}
} // namespace gamemd

// 0x6DBD20
namespace gamemd {
int Tactical::InitMap(int a1, int a2)
{
  int v7; // eax
  int v8; // ecx

  int result; // eax
  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x6dbd2e*/
  if ( result >= 0 ) /*0x6dbd35*/
  {
    if ( a1 ) /*0x6dbd3d*/
      SmallFunc_6D1E30(a1, (int)&a2); /*0x6dbd46*/
  int v3; // eax
    v3 = *(unsigned int *)&a1->__pad_AC[52]; /*0x6dbd4b*/
  int v4; // edi
    v4 = 0; /*0x6dbd52*/
    *(unsigned int *)&a1->__pad_DA8[8] = 0; /*0x6dbd54*/
    if ( v3 > 0 ) /*0x6dbd60*/
    {
  int *v5; // ebx
      v5 = (int *)&a1->__pad_AC[56]; /*0x6dbd63*/
      do /*0x6dbd80*/
      {
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v5); /*0x6dbd6f*/
        ++v4; /*0x6dbd7a*/
        ++v5; /*0x6dbd7b*/
      }
      while ( v4 < *(unsigned int *)&a1->__pad_AC[52] ); /*0x6dbd80*/
    }
  int v6; // eax
    v6 = *(unsigned int *)&a1->__pad_11F[3145]; /*0x6dbd89*/
  int v9; // [esp+4h] [ebp-8h] BYREF
    v9 = *(unsigned int *)&a1->__pad_11F[3141]; /*0x6dbd93*/
  int v10; // [esp+8h] [ebp-4h]
    v10 = v6; /*0x6dbd9a*/
    if ( !ClampCoordMap(&v9) || ((unsigned int *)&stru_A8EB00)[391] ) /*0x6dbdaf*/
    {
      v7 = *(unsigned int *)&a1->__pad_11F[3141]; /*0x6dbdbb*/
      v8 = *(unsigned int *)&a1->__pad_11F[3145]; /*0x6dbdc1*/
    }
    else
    {
      v7 = v9; /*0x6dbdb1*/
      v8 = v10; /*0x6dbdb5*/
    }
    *(unsigned int *)&a1->__pad_11F[3141] = v7; /*0x6dbdc7*/
    *(unsigned int *)&a1->__pad_11F[3157] = v7; /*0x6dbdcd*/
    *(unsigned int *)&a1->__pad_11F[3145] = v8; /*0x6dbdd3*/
    *(unsigned int *)&a1->__pad_11F[3161] = v8; /*0x6dbdd9*/
    TacticalClass::CalcViewportCells((TacticalClass *)a1); /*0x6dbde1*/
    a1->__pad_11F[3166] = 1; /*0x6dbde6*/
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
  result = AbstractClass::SaveLoad_Prefix((int *)aP0->vtable1, a1, aP2); /*0x6dbe0f*/
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
  *(unsigned int *)Block->tail_0 = &vt_Tactical; /*0x6dc473*/
  *&Block->__pad_004 = &vt_Tactical; /*0x6dc479*/
  Block->u32_8 = (int)&vt_Tactical; /*0x6dc480*/
  Block->u32_C = (int)&vt_Tactical; /*0x6dc487*/
  g_TacticalClass_Instance = 0; /*0x6dc48e*/
  AbstractClass::DTOR((AbstractClass *)Block); /*0x6dc498*/
  if ( (a2 & 1) != 0 ) /*0x6dc4a2*/
    operator delete((void *)(Block)); /*0x6dc4a5*/
  return Block->tail_0; /*0x6dc4af*/
}
} // namespace gamemd

// 0x6E47F0
namespace gamemd {
void Tactical_42::ClearBuffer(void *a1_1)
{

  void *v2; // eax
  v2 = *(void **)&a1_1->Tactical_field_0x2[2]; /*0x6e47f6*/
  *(unsigned int *)a1_1->__pad_10 = 0; /*0x6e47f9*/
  if ( v2 && (((unsigned char *)&(a1_1->Tactical_field_0xC))[1]) ) /*0x6e4800*/
  {
    operator delete((void *)(v2)); /*0x6e4806*/
    *(unsigned int *)&a1_1->Tactical_field_0x2[2] = 0; /*0x6e480e*/
  }
  (((unsigned char *)&(a1_1->Tactical_field_0xC))[1]) = 0; /*0x6e4811*/
  a1_1->Tactical_field_0x8 = 0; /*0x6e4814*/
}
} // namespace gamemd

// 0x6E4820
namespace gamemd {
unsigned int Tactical_42::PointerToIndex(int a2)
{

  if ( LOBYTE(this->q00C) ) /*0x6e4820*/
    return (unsigned int)(a2 - *&this->q004) >> 2; /*0x6e4835*/
  else
    return 0; /*0x6e4827*/

}
} // namespace gamemd

// 0x6E4840
namespace gamemd {
int Tactical_42::UpdateView(int a2)
{

  return *(unsigned int *)(*&this->q004 + 4 * a2); /*0x6e484a*/

}
} // namespace gamemd

// 0x6E4850
namespace gamemd {
char Tactical_42::AddRef(int a2)
{


  int m_8; // esi
  m_8 = this->q008; /*0x6e4852*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x6e485d*/
  {
  int v3; // edx
    v3 = 0; /*0x6e485f*/
    if ( m_8 <= 0 ) /*0x6e4863*/
      return 1; /*0x6e4883*/
  unsigned int *v4; // eax
    v4 = *&this->q004; /*0x6e4865*/
  int v5; // ecx
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x6e486b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x6e4874*/
    {
      ++v3; /*0x6e4876*/
      ++v4; /*0x6e4877*/
      if ( v3 >= m_8 ) /*0x6e487c*/
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


  if ( a2 ) /*0x6e489c*/
  {
    LOBYTE(this->q00C) = 0; /*0x6e48a6*/
  unsigned int *v4; // edi
    if ( a3 ) /*0x6e48ac*/
      v4 = a3; /*0x6e48c2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x6e48be*/
    LOBYTE(this->q00C) = 1; /*0x6e48c6*/
    if ( v4 ) /*0x6e48ca*/
    {
      if ( *&this->q004 ) /*0x6e48d5*/
      {
  int m_8; // ecx
        m_8 = this->q008; /*0x6e48dc*/
        if ( a2 < m_8 ) /*0x6e48e1*/
          m_8 = a2; /*0x6e48e3*/
  int i; // eax
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->q004 + 4 * i - 4) ) /*0x6e48e9*/
          ++i; /*0x6e48ee*/
        if ( BYTE1(this->q00C) ) /*0x6e48fb*/
        {
          __3_YAXPAX_Z(*&this->q004); /*0x6e4906*/
          *&this->q004 = 0; /*0x6e490e*/
        }
      }
      *&this->q004 = v4; /*0x6e4917*/
      this->q008 = a2; /*0x6e491f*/
      BYTE1(this->q00C) = a3 == 0; /*0x6e4922*/
      return 1; /*0x6e4928*/
    }
    else
    {
      return 0; /*0x6e48cf*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAVTActionClass *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x6e4932*/
    return 1; /*0x6e4938*/
  }

}
} // namespace gamemd

// 0x6E4940
namespace gamemd {
void Tactical_42::ddtor(void *a1_1, void *a2_1)
{

  if ( *(unsigned int *)&a1_1->m_1[3] && BYTE1(a1_1->m_C) ) /*0x6e494d*/
  {
    __3_YAXPAX_Z(*(void **)&a1_1->m_1[3]); /*0x6e4953*/
    *(unsigned int *)&a1_1->m_1[3] = 0; /*0x6e495b*/
  }
  BYTE1(a1_1->m_C) = 0; /*0x6e495e*/
  a1_1->m_8 = 0; /*0x6e4961*/

}
} // namespace gamemd

// 0x6E4970
namespace gamemd {
int Tactical::Init(unsigned int * a2, void *a2_2, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7_1, void *a8_1)
{


  if ( !LOBYTE(a2_2->m_C) ) /*0x6e4970*/
    return 0; /*0x6e4978*/
  int m_8; // edx
  m_8 = a2_2->m_8; /*0x6e497e*/
  int result; // eax
  result = 0; /*0x6e4981*/
  if ( m_8 <= 0 ) /*0x6e4985*/
    return -1; /*0x6e499c*/
  unsigned int *i; // ecx
  for ( i = *(unsigned int **)&a2_2->m_1[3]; *i != *a2_2; ++i ) /*0x6e498b*/
  {
    if ( ++result >= m_8 ) /*0x6e499a*/
      return -1; /*0x6e499a*/
  }
  return result; /*0x6e497a*/

}
} // namespace gamemd

// 0x6E49B0
namespace gamemd {
unsigned int Tactical_42::InitMap(int a2)
{

  if ( LOBYTE(this->q00C) ) /*0x6e49b0*/
    return (unsigned int)(a2 - *&this->q004) >> 2; /*0x6e49c5*/
  else
    return 0; /*0x6e49b7*/

}
} // namespace gamemd

// 0x6E49D0
namespace gamemd {
char Tactical_42::SetCapacity(int a2, unsigned int * a3)
{


  if ( a2 ) /*0x6e49dc*/
  {
    LOBYTE(this->q00C) = 0; /*0x6e49e2*/
  unsigned int *v4; // edi
    if ( a3 ) /*0x6e49e8*/
      v4 = a3; /*0x6e49fe*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x6e49fa*/
    LOBYTE(this->q00C) = 1; /*0x6e4a02*/
    if ( !v4 ) /*0x6e4a06*/
      return 0; /*0x6e4a7a*/
    if ( *&this->q004 ) /*0x6e4a08*/
    {
  int Tactical_field_0x8; // ecx
      Tactical_field_0x8 = this->q008; /*0x6e4a0f*/
      if ( a2 < Tactical_field_0x8 ) /*0x6e4a14*/
        Tactical_field_0x8 = a2; /*0x6e4a16*/
  int i; // eax
      for ( i = 0; i < Tactical_field_0x8; v4[i - 1] = *(unsigned int *)(*&this->q004 + 4 * i - 4) ) /*0x6e4a1c*/
        ++i; /*0x6e4a21*/
      if ( BYTE1(this->q00C) ) /*0x6e4a2e*/
      {
        __3_YAXPAX_Z(*&this->q004); /*0x6e4a39*/
        *&this->q004 = 0; /*0x6e4a41*/
      }
    }
    *&this->q004 = v4; /*0x6e4a4a*/
    this->q008 = a2; /*0x6e4a52*/
    BYTE1(this->q00C) = a3 == 0; /*0x6e4a55*/
  }
  else
  {
    (*(void (**)(Tactical *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x6e4a5e*/
  }
  int v7; // eax
  v7 = this->q008; /*0x6e4a61*/
  if ( v7 < *(unsigned int *)this->q010 ) /*0x6e4a69*/
    *(unsigned int *)this->q010 = v7; /*0x6e4a6b*/
  return 1; /*0x6e4a6e*/

}
} // namespace gamemd

// 0x6E4AB0
namespace gamemd {
VectorClass_flat * Tactical_42::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax
  v3 = *&Block->__pad_004; /*0x6e4ab3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x6e4ab6*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x6e4ac0*/
  {
    operator delete((void *)(v3)); /*0x6e4ac8*/
    *&Block->__pad_004 = 0; /*0x6e4ad0*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x6e4adb*/
  Block->u32_8 = 0; /*0x6e4ae1*/
  if ( (a2 & 1) != 0 ) /*0x6e4ae8*/
    operator delete((void *)(Block)); /*0x6e4aeb*/
  return Block->tail_0; /*0x6e4af5*/
}
} // namespace gamemd
