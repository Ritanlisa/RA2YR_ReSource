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

// 0x42A6D0
namespace gamemd {
void * Tactical::ConstructTacticalSurface()
{

  unsigned int *v2; // edi
  int v3; // ebp
  unsigned int *v4; // eax
  unsigned int *v5; // edi
  void *v6; // eax
  void * v7;
  int v8; // eax
  unsigned int *v9; // eax
  unsigned int *v10; // edi
  void *v11; // eax
  void * v12;
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

  *(unsigned int *)this = (unsigned int)((unsigned int *)(0));
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
  v2 = (unsigned int *)((unsigned char *)this + 116); /*0x42a718*/
  v3 = 3; /*0x42a71b*/
  do /*0x42a73d*/
  {
    VectorClassUInt::Constructor(0, 0); /*0x42a724*/
    *v2 = (unsigned int)(&vt_DynamicVectorClass); /*0x42a729*/
    v2[5] = 10; /*0x42a72f*/
    v2[4] = 0; /*0x42a736*/
    v2 += 6; /*0x42a739*/
    --v3; /*0x42a73c*/
  }
  while ( v3 ); /*0x42a73d*/
  v4 = (unsigned int *)(__2_YAPAXI_Z(0x14u)); /*0x42a741*/
  v5 = v4; /*0x42a746*/
  if ( v4 ) /*0x42a74d*/
  {
    v4[3] = (unsigned int)(0);
    v4[4] = (unsigned int)(-1);
    *v4 = (unsigned int)(0);
    v4[1] = (unsigned int)(0x10000);
    v6 = (void *)((unsigned int)(__2_YAPAXI_Z(0x40004u)));
    v7 = (void *)(v5[1]); /*0x42a76c*/
    v5[2] = (unsigned int)(v6); /*0x42a76f*/
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
    v5 = (unsigned int *)((unsigned int)(0));
  }
  *((unsigned int *)this + 5) = (unsigned int)(v5); /*0x42a790*/
  v9 = (unsigned int *)(__2_YAPAXI_Z(0x14u)); /*0x42a793*/
  v10 = v9; /*0x42a798*/
  if ( v9 ) /*0x42a79f*/
  {
    v9[3] = (unsigned int)(0);
    v9[4] = (unsigned int)(-1);
    *v9 = (unsigned int)(0);
    v9[1] = (unsigned int)(10000);
    v11 = (void *)((unsigned int)(__2_YAPAXI_Z(0x9C44u)));
    v12 = (void *)(v10[1]); /*0x42a7be*/
    v10[2] = (unsigned int)(v11); /*0x42a7c1*/
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
    v10 = (unsigned int *)((unsigned int)(0));
  }
  *((unsigned int *)this + 26) = (unsigned int)(v10); /*0x42a7e5*/
  v14 = (unsigned int *)(__2_YAPAXI_Z(0x100004u)); /*0x42a7e8*/
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
    v14 = (unsigned int *)((unsigned int)(0));
  }
  *((unsigned int *)this + 4) = (unsigned int)(v14); /*0x42a819*/
  v17 = (unsigned int *)(__2_YAPAXI_Z(0x180004u)); /*0x42a81c*/
  if ( v17 ) /*0x42a826*/
    v17[393216] = 0; /*0x42a828*/
  else
    v17 = 0; /*0x42a830*/
  *((unsigned int *)this + 3) = (unsigned int)(v17); /*0x42a832*/
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
  v20 = (unsigned int *)((char *)((unsigned int *)*((unsigned int *)this + 26)));
  for ( i = 0; i <= *v20; *(unsigned int *)(v20[2] + 4 * i - 4) = 0 ) /*0x42a864*/
    ++i; /*0x42a869*/
  *v20 = 0; /*0x42a874*/
  v22 = (char *)((unsigned char *)this + 116); /*0x42a87c*/
  v26 = (char *)((unsigned char *)this + 188); /*0x42a87f*/
  v25 = (char *)((unsigned char *)this + 116); /*0x42a883*/
  v23 = (unsigned int *)((unsigned char *)this + 76); /*0x42a887*/
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
  *((unsigned int *)this + 25) = (unsigned int)(__2_YAPAXI_Z(0x27100u)); /*0x42a8ed*/
  return this; /*0x42a8f2*/

}
}
// 0x484050
namespace gamemd {
void * Tactical::CreateTacticalLightSurface(int * a2, int * a1, IUnknown * aP2, int * a3, int * a4, IUnknown * aP5, void *a7_1)
{

  unsigned int *v7; // eax
  int *v8; // edx
  int *v9; // ebx
  unsigned int *v11; // ecx
  int *v12; // edi
  int v13; // esi
  int result; // eax
  int64_t v15; // [esp-8h] [ebp-1Ch]
  int v16; // [esp+10h] [ebp-4h] BYREF

  v7 = (unsigned int *)((int *)((unsigned int *)(a1)));
  v8 = (int *)((unsigned int *)(a3));
  v9 = (int *)((unsigned int *)((int *)aP5));
  v11 = (unsigned int *)(aP2);
  v12 = (int *)a4; /*0x484067*/
  *a1 = 0x10000; /*0x48406b*/
  *v11 = 0; /*0x484071*/
  *v8 = 1000; /*0x484077*/
  *v12 = 1000; /*0x48407d*/
  *v9 = 1000; /*0x484083*/
  if ( !*(unsigned short *)&this->__pad_10[20] && !*(unsigned short *)&this->__pad_10[22] /*0x4840a8*/
    || *(unsigned short *)&this->__pad_10[20] == 0xFFFF && *(unsigned short *)&this->__pad_10[22] == 0xFFFF )
  {
    result = CreateSurfaceClassPrimary(1000, 1000, 1000); /*0x484161*/
    *a2 = result; /*0x48416d*/
  }
  else
  {
    HIDWORD(v15) = (unsigned int)(&a4); /*0x4840b2*/
    LODWORD(v15) = (unsigned int)(&aP5); /*0x4840b7*/
    Tactical::CalculateTacticalLighting( (int *)(this), (IUnknown *)(v7), (int *)(v11), v8, (IUnknown *)v12, v9, (long long)(&v16), v15); /*0x4840c4*/
    if ( *(unsigned int *)this->__pad_34 /*0x484125*/
      && (a1 = (unsigned int *)v16,
          aP2 =(IUnknown *)(unsigned int *)aP5,
          a3 = (int *)a4,
          QuantizeColorRGB((int *)&a1, (int *)&aP2, (int *)&a3),
          v13 = *(unsigned int *)this->__pad_34,
          *(unsigned int **)(v13 + 408) == (unsigned int *)(a1))
      && *(unsigned int **)(v13 + 412) == (unsigned int *)(aP2)
      && (result = *(unsigned int *)(v13 + 416), (int *)result == a3) )
    {
      *a2 =(int)(int *)(int)(int *)v13; /*0x48412c*/
    }
    else
    {
      result = CreateSurfaceClassPrimary(v16,(int)(aP5),(int)(a4)); /*0x484142*/
      *a2 = result; /*0x48414e*/
    }
  }
  return (void *)(result);

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

  v9 = this; /*0x484184*/
  if ( !*(unsigned short *)&this->__pad_10[20] && !*(unsigned short *)&this->__pad_10[22] /*0x4841a9*/
    || *(unsigned short *)&this->__pad_10[20] == 0xFFFF && *(unsigned short *)&this->__pad_10[22] == 0xFFFF )
  {
    *a1 = 0x10000; /*0x48462e*/
    *(unsigned int *)aP2 = 0; /*0x484638*/
    *a3 = 1000; /*0x484642*/
    *a4 = 1000; /*0x48464c*/
    *(unsigned int *)aP5 = 1000; /*0x484656*/
    *a6 = 1000; /*0x484660*/
    *(unsigned int *)a8 = 1000; /*0x484666*/
    *(unsigned int *)HIDWORD(a8) = 1000; /*0x48466c*/
    return HIDWORD(a8); /*0x48465c*/
  }
  v10 = a3; /*0x4841b5*/
  *a3 = 1000 * (int)((unsigned int *)(dword_A8B230))[378].vtable1 / 100; /*0x4841de*/
  *a6 = 1000 * (int)((unsigned int *)(dword_A8B230))[378].vtable3 / 100; /*0x48420d*/
  *(unsigned int *)a8 = 1000 * ((unsigned int *)(dword_A8B230))[378].uniqueId / 100; /*0x48423c*/
  v11 = 0; /*0x48426b*/
  *(unsigned int *)HIDWORD(a8) = 1000 * ((unsigned int *)(dword_A8B230))[378].abstractFlags / 100; /*0x48426d*/
  v34 = 0; /*0x484273*/
  for ( *aP2 = 0; v34 < g_MissionQueueFrame.random[133]; ++v34 ) /*0x484285*/
  {
    v12 = *(unsigned int *)(g_MissionQueueFrame.random[130] + 4 * v11); /*0x484291*/
    if ( *(unsigned char *)(v12 + 72) && stru_A8EB00.ObjectTypeClass[30] >= *(unsigned int *)(v12 + 52) ) /*0x4842aa*/
    {
      v29 = *(unsigned int *)&v9->__pad_10[20]; /*0x4842b5*/
      v13 = ((int16_t)v29 << 8) + 128; /*0x4842cc*/
      v14 = (SHIWORD(v29) << 8) + 128; /*0x4842ce*/
      v35[0] = 128; /*0x4842d0*/
      v35[1] = 128; /*0x4842d4*/
      ((Isometric*)(gamemd::IUnknown *)((int)v9))->InitTables(v35); /*0x4842dd*/
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
          *aP2 += (int)(v20 * *(unsigned int *)(v12 + 36)) / 1000; /*0x4843db*/
          *a6 += (int)(v20 * *(unsigned int *)(v12 + 40)) / 1000; /*0x4843fc*/
          *(unsigned int *)a8 += (int)(v20 * *(unsigned int *)(v12 + 44)) / 1000; /*0x48441d*/
          *(unsigned int *)HIDWORD(a8) += (int)(v20 * *(unsigned int *)(v12 + 48)) / 1000; /*0x48443e*/
        }
      }
      v9 = this; /*0x484440*/
      v10 = a3; /*0x484444*/
    }
    v11 = v34 + 1; /*0x484452*/
  }
  v21 = *aP2 + *v10; /*0x48446b*/
  *v10 = v21; /*0x48446f*/
  *(unsigned int *)aP5 = v21; /*0x484471*/
  if ( !(uint8_t)((LightningStorm *)this)->IsActive() ) /*0x48447a*/
  {
    if ( (uint8_t)((PsyDom *)this)->IsActive() ) /*0x4844c4*/
    {
      *v10 += v9->Tactical_field_0x11B[0] * (int)dword_A8B230[380].vtable1 - dword_A8B230[380].referenceCount; /*0x4844ec*/
      referenceCount = ((unsigned int *)(dword_A8B230))[380].referenceCount; /*0x4844fa*/
      v24 = (int)((unsigned int *)(dword_A8B230))[380].NeedsSaveOrLink * (v9->Tactical_field_0x11B[0] + 4); /*0x484503*/
    }
    else
    {
      if ( NukeFlash::IsActive() ) /*0x48450f*/
      {
        *v10 += v9->Tactical_field_0x11B[0] * (int)((unsigned int *)(dword_A8B230))[380].vtable1 - (unsigned int)dword_A8B230[380].vtable0; /*0x484537*/
        v22 = (int)((unsigned int *)(dword_A8B230))[380].vtable1 * (v9->Tactical_field_0x11B[0] + 4) /*0x484559*/
            - (unsigned int)((unsigned int *)(dword_A8B230))[380].vtable0
            + *aP5;
        goto LABEL_21; /*0x48455b*/
      }
      *v10 += v9->Tactical_field_0x11B[0] * dword_A8B230[378].referenceCount - dword_A8B230[378].nextArrayIndex; /*0x48457c*/
      referenceCount = ((unsigned int *)(dword_A8B230))[378].nextArrayIndex; /*0x48458a*/
      v24 = ((unsigned int *)(dword_A8B230))[378].referenceCount * (v9->Tactical_field_0x11B[0] + 4); /*0x484593*/
    }
    v22 = v24 - referenceCount + *aP5; /*0x48459e*/
    goto LABEL_21; /*0x48459e*/
  }
  *v10 += v9->Tactical_field_0x11B[0] * ((unsigned int *)(dword_A8B230))[379].uniqueId - (unsigned int)dword_A8B230[379].vtable3; /*0x48449b*/
  v22 = ((unsigned int *)(dword_A8B230))[379].uniqueId * (v9->Tactical_field_0x11B[0] + 4) - (unsigned int)dword_A8B230[379].vtable3 + *aP5; /*0x4844bd*/
LABEL_21:
  *aP5 = v22; /*0x4845a0*/
  v25 = *v10; /*0x4845a2*/
  if ( *v10 >= 2000 ) /*0x4845a9*/
    v25 = 2000; /*0x4845ab*/
  *v10 = v25; /*0x4845c0*/
  *a4 = v25; /*0x4845c2*/
  Map_Calc(a1, a4, a6, (int *)a8, (int *)HIDWORD(a8)); /*0x4845cf*/
  v26 = (*a1 * *aP5) >> 16; /*0x4845da*/
  *aP5 = v26; /*0x4845e2*/
  if ( v26 >= 2000 ) /*0x4845e4*/
    v26 = 2000; /*0x4845e6*/
  *aP5 = v26; /*0x4845eb*/
  *v10 = *v10 <= 0 ? 0 : *v10;
  *a4 = *a4 <= 0 ? 0 : *a4;
  result = *aP5 <= 0 ? 0 : *aP5;
  *aP5 = result; /*0x484615*/
  return (ScenarioClass * *)result; /*0x48461a*/

}
}
// 0x4A91B0
namespace gamemd {
unsigned int * Tactical::MouseMove(unsigned int *aP1, unsigned int *aP2)
{

  unsigned int *v3; // ebp
  bool v4; // zf
  int *v6; // eax
  int v7; // edi
  void *v8; // ebx
  int *v9; // ecx
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
  unsigned int *v28; // [esp+10h] [ebp-14h] BYREF
  int v29; // [esp+14h] [ebp-10h] BYREF
  int v30; // [esp+18h] [ebp-Ch]
  unsigned char v31[8]; // [esp+1Ch] [ebp-8h] BYREF

  v3 = (unsigned int *)*aP2; /*0x4a91ba*/
  v4 = (uint16_t)*aP2 == *(unsigned short *)&stru_8A0390.bombVisible; /*0x4a91bd*/
  aP2 = (unsigned int *)*aP2; /*0x4a91c6*/
  if ( v4 && HIWORD(aP2) == *(unsigned short *)&stru_8A0390.alignmentPadding69[1] ) /*0x4a91dc*/
  {
    v6 = (int *)(*(int (**)(void *, int *))(*(unsigned int *)&((MouseClass *)stru_887598.lineTrailer)->q_D0))(  /*0x4a91ef*/
                  stru_887598.lineTrailer,
                  &v29);
    v7 = DSurface_ViewBounds.field_0; /*0x4a91f2*/
    v8 = DSurface_ViewBounds.field_4; /*0x4a91f8*/
    v9 = v6; /*0x4a91fe*/
    v10 = *v6; /*0x4a9200*/
    v11 = v9[1]; /*0x4a9204*/
    if ( v10 < DSurface_ViewBounds.field_0 /*0x4a9223*/
      || v10 >= DSurface_ViewBounds.field_0 + *(unsigned int *)DSurface_ViewBounds.__pad_8
      || v11 < (int)DSurface_ViewBounds.field_4
      || v11 >= (int)DSurface_ViewBounds.field_4 + *(unsigned int *)&DSurface_ViewBounds.__pad_8[4] )
    {
      v14 = (unsigned int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)&((MouseClass *)stru_887598.lineTrailer)->q_D0))(  /*0x4a9284*/
                        stru_887598.lineTrailer,
                        v31);
      v15 = v14[1]; /*0x4a9292*/
      v29 = *v14 - v7; /*0x4a9295*/
      v30 = v15 - (unsigned int)v8; /*0x4a929f*/
      v3 = (unsigned int *)*((Tactical *)((Tactical *)g_TacticalClass_Instance))->PixelToCell(&aP2, &v29); /*0x4a92af*/
    }
    else
    {
      v12 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)&((MouseClass *)stru_887598.lineTrailer)->q_D0))(  /*0x4a9232*/
                     stru_887598.lineTrailer,
                     v31);
      v29 = *v12; /*0x4a9237*/
      v30 = v12[1]; /*0x4a924d*/
      v13 = (unsigned int *)*((TacticalClass *)(RadarClass *)&v28)->PixelToCellCheck( &v29); /*0x4a9256*/
      v28 = v13; /*0x4a925f*/
      if ( v13 == *(unsigned int **)&stru_8A0390.bombVisible ) /*0x4a9263*/
        goto LABEL_11; /*0x4a9263*/
      v3 = v13; /*0x4a9273*/
    }
    aP2 = (gamemd::MouseClass *)(v3); /*0x4a92b1*/
  }
LABEL_11:
  v16 = *((unsigned int *)this + 1119); /*0x4a92b5*/
  if ( v16 ) /*0x4a92bd*/
  {
    if ( !((unsigned int *)&stru_A8EB00)[391] ) /*0x4a92e3*/
    {
      v19 = HIWORD(aP2) + *((unsigned short *)this + 2237); /*0x4a92f3*/
      LOWORD(v28) = (unsigned short)v3 + *((unsigned short *)this + 2236); /*0x4a92fb*/
      HIWORD(v28) = v19; /*0x4a9301*/
      v20 = (unsigned short *)(UI_Move( (unsigned int *)(&v29), (MouseClass *)(&v28), v16)); /*0x4a931e*/
      v21 = v20[1] - *((unsigned short *)this + 2237); /*0x4a9331*/
      LOWORD(aP2) = *v20 - *((unsigned short *)this + 2236); /*0x4a9338*/
      HIWORD(aP2) = v21; /*0x4a933d*/
      v3 = (unsigned int *)(aP2); /*0x4a9342*/
    }
    v4 = (unsigned short)v3 == *((unsigned short *)this + 2234); /*0x4a9346*/
    aP2 = (gamemd::MouseClass *)(v3); /*0x4a934d*/
    if ( v4 && HIWORD(v3) == *((unsigned short *)this + 2235) ) /*0x4a935f*/
    {
      *aP1 = v3; /*0x4a9367*/
      return aP1; /*0x4a9361*/
    }
    else
    {
      v22 = *((unsigned int *)this + 1117); /*0x4a9377*/
      if ( *((unsigned int *)this + 1119) ) /*0x4a9371*/
      {
        if ( v3 != *((unsigned int **)this + 1117) /*0x4a93b0*/
          && (*((unsigned short *)this + 2234) != *(unsigned short *)&stru_8A0390.bombVisible
           || *((unsigned short *)this + 2235) != *(unsigned short *)&stru_8A0390.alignmentPadding69[1]) )
        {
          v23 = *((unsigned short *)this + 2235) + *((unsigned short *)this + 2237); /*0x4a93c7*/
          LOWORD(aP2) = *((unsigned short *)this + 2234) + *((unsigned short *)this + 2236); /*0x4a93d0*/
          HIWORD(aP2) = v23; /*0x4a93d5*/
          ((MapClass *)((MapClass *)this))->SetCellFlagsAlongPath(&aP2, 0); /*0x4a93e9*/
        }
        if ( v3 != *(unsigned int **)&stru_8A0390.bombVisible ) /*0x4a93f5*/
        {
          v24 = *((unsigned short *)this + 2236) + (unsigned short)v3; /*0x4a940a*/
          HIWORD(aP2) = HIWORD(v3) + *((unsigned short *)this + 2237); /*0x4a9414*/
          LOWORD(aP2) = v24; /*0x4a941b*/
          ((MapClass *)((MapClass *)this))->SetCellFlagsAlongPath(&aP2, (unsigned short *)1); /*0x4a942f*/
        }
      }
      *((unsigned int *)this + 1117) = v3; /*0x4a9434*/
      v25 = *((unsigned short *)this + 2236) + (unsigned short)v3; /*0x4a944b*/
      HIWORD(aP2) = *((unsigned short *)this + 2235) + *((unsigned short *)this + 2237); /*0x4a9452*/
      v26 = *((unsigned int *)this + 1119); /*0x4a9457*/
      LOWORD(aP2) = v25; /*0x4a945d*/
      *((unsigned char *)this + 4480) = GetBuildingPlacement( /*0x4a9485*/
                                  *((unsigned int **)this + 1130),
                                  *((unsigned int *)this + 1131),
                                  v26,
                                  (int16_t *)&aP2);
      v27 = *((unsigned short *)this + 2237) + *((unsigned short *)this + 2235); /*0x4a94a0*/
      LOWORD(aP2) = *((unsigned short *)this + 2234) + *((unsigned short *)this + 2236); /*0x4a94a7*/
      HIWORD(aP2) = v27; /*0x4a94b0*/
      *((unsigned char *)this + 4481) = ProcessDataBuildingTypeClass( /*0x4a94da*/
                                  *((unsigned int **)this + 1130),
                                  *((unsigned int *)this + 1131),
                                  *((unsigned int *)this + 1119),
                                  (int16_t *)&aP2);
      *aP1 = v22; /*0x4a94e6*/
      return aP1; /*0x4a94e0*/
    }
  }
  else
  {
    v17 = *((unsigned int *)this + 1117); /*0x4a92bf*/
    *((unsigned int *)this + 1117) = v3; /*0x4a92c9*/
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
  int v3; // esi
  int result; // eax
  int v5; // edi

  Tactical_field_0xF4 = this->Tactical_field_0xF4; /*0x56836f*/
  v3 = (int16_t)(*aP1 / 256); /*0x56837b*/
  result = (int16_t)(aP1[1] / 256); /*0x56837e*/
  v5 = result + v3; /*0x568381*/
  LOBYTE(result) = result + v3 > (int)Tactical_field_0xF4 /*0x5683ad*/
                && v3 - result < (int)Tactical_field_0xF4
                && (result -= v3, result < (int)Tactical_field_0xF4)
                && (result = (int)this->Tactical_field_0xF8, v5 <= (int)Tactical_field_0xF4 + 2 * result);
  return result; /*0x5683a5*/

}
}
// 0x58C2A0
namespace gamemd {
void * Tactical::GetCellData()
{

  return (char *)(g_MissionQueueFrame.localVariables[163] /*0x58c2be*/
                + 80 * (*(int16_t *)this->__pad_0 + g_MapCellWidth * *(int16_t *)this->Tactical_field_0x2));

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
    ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CellIteratorReset(); /*0x640a5d*/
    v10 = 10000; /*0x640a62*/
    v64 = 10000; /*0x640a6c*/
    v58 = 10000; /*0x640a70*/
    v52 = 0; /*0x640a74*/
    v11 = 0; /*0x640a7c*/
    for ( i = ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CellIteratorNext(); /*0x640a85*/
          i;
          i = ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CellIteratorNext() )
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
        ((Coord *)((Coord *)&v66))->Subtract(v15, v14, 0); /*0x640acb*/
        ((Coord *)((Coord *)&v71))->Subtract(v15, v14, 0); /*0x640ad8*/
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
      if ( (uint8_t)((ScenarioClass *)((char *)dword_A8B230))->Is_Waypoint_Valid(j) ) /*0x640b71*/
        ++v17; /*0x640b7a*/
    }
    v19 = 0; /*0x640b81*/
    v59 = j; /*0x640b83*/
    for ( v17 = v17; v19 < v17; ++v19 ) /*0x640b8d*/
    {
      if ( (!v19 || v19 <= j) && (uint8_t)((ScenarioClass *)((char *)dword_A8B230))->Is_Waypoint_Valid(v19) ) /*0x640ba6*/
      {
        v56 = (unsigned int *)*((ScenarioClass*)((char *)dword_A8B230))->Get_Waypoint_Location(&v65, v19); /*0x640bc8*/
        v20 = (IDA_SHIWORD(v56) << 8) + 128; /*0x640bde*/
        v21 = ((int16_t)v56 << 8) + 128; /*0x640be4*/
        ((Coord *)((Coord *)&v71))->Subtract(v21, v20, 0); /*0x640bec*/
        ((Coord *)((Coord *)&v66))->Subtract(v21, v20, 0); /*0x640bf9*/
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
    v29 = (int *)(*(int (**)(int *, unsigned int *, int, int, int))(*v28 + 120))( v28, v78, (int)(a4), (int)(a3), (int)(a2)); /*0x640d56*/
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
      v34 = ((DSurface*)v33)->Construct(v65, v66, 1, 0); /*0x640e13*/
    else
      v34 = 0; /*0x640e17*/
    v35 = (unsigned int *)FileSHP; /*0x640e19*/
    v36 = *(unsigned int *)v34; /*0x640e1d*/
    v37 = (*(int (**)(unsigned int, unsigned char *, unsigned int, unsigned int))(**(unsigned int **)FileSHP + 120))( /*0x640e2f*/
            *(unsigned int *)FileSHP,
            v79,
            0,
            0);
    (*(void (**)(char *, int *, unsigned int, int))(v36 + 8))( v34, (int *)(&v72), *v35, v37); /*0x640e3d*/
    IDA_HIBYTE(v56) = 0; /*0x640e49*/
    FileSHP = (int)LoadFileSHP( aMmpbShp, (ConvertClass *)((bool *)&v56 + 3)); /*0x640e53*/
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
          if ( (uint8_t)((ScenarioClass *)(v39))->Is_Waypoint_Valid(v38) ) /*0x640e8b*/
          {
            v60 = *((ScenarioClass*)((char *)dword_A8B230))->Get_Waypoint_Location(&a5, v38); /*0x640eb0*/
            v41 = (IDA_SHIWORD(v60) << 8) + 128; /*0x640ec2*/
            ((Coord *)((Coord *)&v74))->Subtract(((int16_t)v60 << 8) + 128, v41, 0); /*0x640ed4*/
            IsoCoord::ToScreenOffset(v74, v41, &v76, &v68); /*0x640eef*/
            v39 = (char *)dword_A8B230; /*0x640f32*/
            v42 = *(int *)((char *)&dword_A8B230->vtable1 + v40); /*0x640f3a*/
            if ( v42 != -1 ) /*0x640f40*/
            {
              v43 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] /*0x640f66*/
                                          + 4 * *(unsigned int *)(*((unsigned int *)((char *)&stru_A80220) + v42) + 90196))
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
    (*(void (**)(int, int *, unsigned int))(*(unsigned int *)a7 + 20))( (int)(a7), (int *)(&v27), 0); /*0x641083*/
    v47 = *v46; /*0x641088*/
    v48 = (*(int (**)(char *, unsigned char *, unsigned int, unsigned int))(v34->u32_78))(v34, v79, 0, 0);  /*0x641098*/
    result = (int *)(*(int (**)(int *, int *, char *, int))(v47 + 8))( v46, (int *)(&v26), v34, v48); /*0x6410a4*/
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
  v6[1] = dword_B0567C; /*0x692336*/
  v9 = aP5; /*0x69233e*/
  v6[2] = dword_B05680; /*0x692342*/
  *v8 = 0; /*0x692345*/
  *v9 = 0; /*0x692348*/
  result = *(unsigned int *)aP0;
  if ( *aP0 < 0 ) /*0x692350*/
    goto LABEL_39; /*0x692350*/
  v11 = aP0[1]; /*0x692356*/
  if ( v11 < 0 ) /*0x69235b*/
    goto LABEL_39; /*0x69235b*/
  if ( g_TacticalClass_Instance ) /*0x692369*/
  {
    v34 = DSurface_ViewBounds + result; /*0x69237c*/
    v35 = v11 + dword_886FA4; /*0x692380*/
    v12 = ((Tactical *)((int)g_TacticalClass_Instance))->PixelToCell(&aP1, &v34); /*0x69238e*/
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
  v16[1] = v14[1]; /*0x6923f0*/
  v16[2] = v14[2]; /*0x6923f6*/
  result = (int)g_TacticalClass_Instance; /*0x6923f9*/
  if ( g_TacticalClass_Instance && (result = ((Tactical *)&dword_87F7E8)->IsCellVisible( v15), (unsigned char)result) ) /*0x692413*/
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
    v21 = (uint8_t)Cell::IsPassable( (unsigned int)(&v34)) && g_hWnd; /*0x692492*/
    v22 = aP5; /*0x69249b*/
    *aP5 = v21; /*0x69249f*/
    *v8 = 0; /*0x6924a1*/
    result = *(unsigned int *)dword_A8B230; /*0x6924aa*/
    if ( (*(unsigned int *)dword_A8B230 & 0x1000) != 0 ) /*0x6924af*/
    {
      v23 = ((Coord *)(&dword_87F7E8))->To_Cell(&v34); /*0x6924bb*/
      result = (int)((Cell *)(v23))->IsBridge(); /*0x6924c2*/
      if ( result ) /*0x6924c9*/
      {
        *v8 = *(unsigned char *)(result + 1767); /*0x6924d1*/
      }
      else
      {
        result = (uint8_t)Game::Stub3((int)&v34) && g_hWnd; /*0x6924f1*/
        *v8 = result; /*0x6924fa*/
      }
    }
    if ( !*v22 && !*v8 ) /*0x692505*/
    {
      v24 = ((TacticalClass *)g_TacticalClass_Instance)->IsOccupiedByTechno( aP0); /*0x692515*/
      v25 = aP3; /*0x69251a*/
      *aP3 = v24; /*0x692520*/
      result = (int)AbstractClass::IsTechnoType(v24); /*0x692522*/
      v26 = result; /*0x692527*/
      if ( result && !*(unsigned char *)(result + 1050) ) /*0x69252d*/
      {
        if ( *(unsigned int *)(result + 544) == 2 /*0x692575*/
          && (v32 = *((unsigned int *)dword_A83D4C + 12),
              v27 = (unsigned int *)(*(int (**)(int, unsigned int *))(*(unsigned int *)result + 72))(result, v37),
              v28 = ((Coord *)(&dword_87F7E8))->To_Cell(v27),
              result = ((Cell *)(v28))->IsPassableOffset(v32),
              !(unsigned char)result)
          || (result = (*(int (**)(int))(*(unsigned int *)v26 + 132))(v26), *(unsigned char *)(result + 3226)) )
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
              && (v33 = *((unsigned int *)dword_A83D4C + 12),
                  v30 = (unsigned int *)(*(int (**)(int, unsigned int *))(*(unsigned int *)v26 + 72))(v26, v37),
                  v31 = ((Coord *)(&dword_87F7E8))->To_Cell(v30),
                  result = ((Cell *)(v31))->IsPassableOffset(v33),
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
    LOBYTE(result) = 1; /*0x6925f3*/
  }
  else
  {
LABEL_39:
    LOBYTE(result) = 0; /*0x6925ff*/
  }
  return result; /*0x6925f0*/

}
}
// 0x6930A0
namespace gamemd {
MouseClass * * Tactical::HandleTacticalMouseInput(int _28, unsigned int * a2, int a4, MouseClass * aP4, void *a5_1)
{

  int v5; // eax
  int v7; // eax
  int v8; // eax
  int16_t v10; // [esp+8h] [ebp-1Ch] BYREF
  bool v11[4]; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h]
  int v14[3]; // [esp+18h] [ebp-Ch] BYREF

  LOBYTE(v5) = byte_A8E378; /*0x6930a0*/
  if ( byte_A8E378 && (*((unsigned int *)((char *)&stru_A8EB00 + 376)) || *((unsigned int *)((char *)&stru_A8EB00 + 391))) ) /*0x6930c4*/
  {
    if ( byte_A8E9A0 ) /*0x6930d0*/
    {
      if ( g_TacticalClass_Instance ) /*0x6930dc*/
      {
        if ( stru_887598.lineTrailer ) /*0x6930e8*/
        {
          LOBYTE(v5) = (unsigned char)a2; /*0x6930f5*/
          if ( !((unsigned int *)&stru_A8EB00)[440] || *a2 == 533 ) /*0x693101*/
          {
            v5 = *a2 - 513; /*0x693109*/
            switch ( *a2 ) /*0x69311f*/
            {
              case 0x201: /*0x69311f*/
                aP4 = *(HWND *)aP4; /*0x693138*/
                v12 = (int16_t)aP4 - DSurface_ViewBounds.field_0; /*0x693148*/
                v13 = SHIWORD(aP4) - (unsigned int)DSurface_ViewBounds.field_4; /*0x693150*/
                LOBYTE(v5) = Tactical::MouseOver( (MouseClass *)(&v12), (MouseClass *)(&v10), v14, (MouseClass *)(&a2), (MouseClass *)((bool *)&aP4), v11); /*0x693170*/
                if ( (unsigned char)v5 ) /*0x693177*/
                {
                  LOBYTE(v5) = HandlePlanningModeClick(v12, v13); /*0x693187*/
                  if ( !(unsigned char)v5 && !*((unsigned char *)this + 21850) ) /*0x693194*/
                  {
                    v7 = Radar::ScanWaypoints( (int)&v10, (MouseClass *)(a2), 1); /*0x6931af*/
                    TacticalClass::HandlePlayerAction( /*0x6931c9*/
                      (DisplayClass *)&stru_87F5F0.__pad_58[416],
                      &v10,
                      v11[0],
                      a2,
                      v7,
                      0);
                    ((DisplayClass *)(DisplayClass *)&stru_87F5F0.__pad_58[416])->InitViewBounds( &v12); /*0x6931d8*/
                    LOBYTE(v5) = (uint8_t)SetCapture(g_hWnd); /*0x6931e4*/
                    *((unsigned char *)this + 21850) = 1; /*0x6931ea*/
                  }
                }
                break; /*0x6931f6*/
              case 0x202: /*0x69311f*/
                aP4 = *(HWND *)aP4; /*0x69320b*/
                v12 = (int16_t)aP4 - DSurface_ViewBounds.field_0; /*0x69321b*/
                v13 = SHIWORD(aP4) - (unsigned int)DSurface_ViewBounds.field_4; /*0x693221*/
                LOBYTE(v5) = ScriptAction::HitTest(v12, v13); /*0x693225*/
                if ( !(unsigned char)v5 && *((unsigned char *)this + 21850) ) /*0x693232*/
                {
                  Tactical::MouseOver( (MouseClass *)(&v12), (MouseClass *)(&v10), v14, (MouseClass *)(&a2), (MouseClass *)((bool *)&aP4), v11); /*0x69325e*/
                  v8 = Radar::ScanWaypoints( (int)&v10, (MouseClass *)(a2), 0); /*0x693271*/
                  PlayerClass::ExecuteCommand((DisplayClass *)&stru_87F5F0.__pad_58[416], (int)v14, &v10, a2, v8, 0); /*0x69328b*/
                  *((unsigned char *)this + 21850) = 0; /*0x693290*/
                  LOBYTE(v5) = ReleaseCapture(); /*0x693296*/
                }
                break; /*0x6932a1*/
              case 0x204: /*0x69311f*/
                aP4 = *(HWND *)aP4; /*0x6932b6*/
                v12 = (int16_t)aP4 - DSurface_ViewBounds.field_0; /*0x6932c6*/
                v13 = SHIWORD(aP4) - (unsigned int)DSurface_ViewBounds.field_4; /*0x6932cc*/
                LOBYTE(v5) = UI_Handle(v12, v13); /*0x6932d0*/
                if ( !*((unsigned char *)this + 21850) ) /*0x6932d5*/
                {
                  LOBYTE(v5) = Tactical::MouseOver( (MouseClass *)(&v12), (MouseClass *)(&v10), v14, (MouseClass *)(&a2), (MouseClass *)((bool *)&aP4), v11); /*0x693301*/
                  if ( (unsigned char)v5 ) /*0x693308*/
                  {
                    if ( !((unsigned int *)&stru_A8EB00)[440] ) /*0x693314*/
                    {
                      DisplayClass::vt_entry_B0((DisplayClass *)&v12); /*0x693320*/
                      dword_884D38 = v12; /*0x69332d*/
                      dword_884D3C = v13; /*0x693339*/
                      byte_884D40 = 0; /*0x69333f*/
                      (*(void (**)(void *))(*(unsigned int *)&((MouseClass *)stru_887598.lineTrailer)->q_40))(stru_887598.lineTrailer);  /*0x693347*/
                    }
                    LOBYTE(v5) = (uint8_t)SetCapture(g_hWnd); /*0x693351*/
                    *((unsigned char *)this + 21850) = 1; /*0x693357*/
                  }
                }
                break; /*0x693363*/
              case 0x205: /*0x69311f*/
                aP4 = *(HWND *)aP4; /*0x693378*/
                LOBYTE(v5) = UI_Handle_63AB00( /*0x69338a*/
                               (int16_t)aP4 - DSurface_ViewBounds.field_0,
                               SHIWORD(aP4) - (unsigned int)DSurface_ViewBounds.field_4);
                if ( *((unsigned char *)this + 21850) ) /*0x69338f*/
                {
                  if ( byte_884D40 ) /*0x69339d*/
                  {
                    LOBYTE(v5) = byte_884D44; /*0x69339f*/
                    (*(void (**)(char *, unsigned int, int))(*(unsigned int *)&stru_87F5F0.__pad_58[416] + 72))( /*0x6933b1*/
                      &stru_87F5F0.__pad_58[416],
                      0,
                      v5);
                    byte_884D40 = 0; /*0x6933b4*/
                  }
                  else
                  {
                    TacticalClass::DispatchMode((DisplayClass *)&stru_87F5F0.__pad_58[416], (int)&v12); /*0x6933c6*/
                  }
                  ((DisplayClass *)(DisplayClass *)this)->ExitMode(); /*0x6933cd*/
                  *((unsigned char *)this + 21850) = 0; /*0x6933d2*/
                  LOBYTE(v5) = ReleaseCapture(); /*0x6933d8*/
                }
                break; /*0x6933e3*/
              case 0x215: /*0x69311f*/
                LOBYTE(v5) = (unsigned char)g_hWnd; /*0x6933ea*/
                if ( *(HWND *)aP4 != g_hWnd && *((unsigned char *)this + 21850) == 1 ) /*0x6933fc*/
                  LOBYTE(v5) = (*(char (**)(Tactical *))(*(unsigned int *)this->__pad_0 + 140))(this); /*0x693402*/
                break; /*0x693402*/
              default:
                return (MouseClass * *)v5;
            }
          }
        }
      }
    }
  }
  return (MouseClass * *)v5; /*0x6931f1*/

}
// 0x6A6610
namespace gamemd {
int Tactical::UpdateUIVisibility(void *a1_1)
{

  int v1; // eax
  int result; // eax
  int v3; // eax

  if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a661d*/
  {
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
  v1 = 26; /*0x6a6631*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a6629*/
    v1 = 18; /*0x6a6638*/
  if ( *((unsigned int *)this + 997 * *((unsigned int *)this + 5351) + 1382) <= 2 /*0x6a668a*/
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

  signed int v3; // edi
  int64_t v4; // rax
  int v5; // kr00_4
  int v6; // ebx
  Char *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // ebx
  int v11; // ebp
  int v12; // [esp+10h] [ebp-2Ch] BYREF
  int v13[2]; // [esp+14h] [ebp-28h] BYREF
  int v14; // [esp+1Ch] [ebp-20h]
  char *v15; // [esp+20h] [ebp-1Ch]
  int v16; // [esp+24h] [ebp-18h]
  int v17; // [esp+28h] [ebp-14h]
  unsigned int v18[4]; // [esp+2Ch] [ebp-10h] BYREF

  if ( !((unsigned int *)&stru_A8EB00)[391] && (String && wcslen(String) || *(unsigned int *)&this->__pad_34[112] != -1) ) /*0x6d4e52*/
  {
    if ( (*(uint8_t (**)(AudioStream *))(*(unsigned int *)DSurface_Composite->__pad_0 + 132))( (AudioStream *)(DSurface_Composite)) ) /*0x6d4e60*/
    {
      v3 = *(unsigned int *)&this->__pad_34[112]; /*0x6d4e6e*/
      if ( v3 != -1 /*0x6d4e93*/
        && *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 2996)
        && *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 2992)
        && *(int16_t *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 2992) + 6) > v3 )
      {
        v4 = *(unsigned int *)&DSurface_ViewBounds.__pad_8[4] - *(int16_t *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 2992) + 4); /*0x6d4ea0*/
        v5 = *(unsigned int *)DSurface_ViewBounds.__pad_8 - *(int16_t *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 2992) + 2); /*0x6d4eb1*/
        v13[1] = ((int)v4 - HIDWORD(v4)) >> 1; /*0x6d4eb9*/
        v13[0] = v5 / 2; /*0x6d4ebd*/
        DrawToSurfaceSHP( /*0x6d4ee5*/
          (int)DSurface_Composite,
          *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 2996),
          *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 2992),
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
          v15 = (char *)DSurface_ViewBounds.field_4; /*0x6d4f18*/
          v17 = *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d4f35*/
          v6 = *(unsigned int *)DSurface_ViewBounds.__pad_8; /*0x6d4f3e*/
          v7 = (Char *)g_FogOfWarState; /*0x6d4f4c*/
          v8 = DSurface_ViewBounds.field_0; /*0x6d4f5a*/
          v14 = DSurface_ViewBounds.field_0; /*0x6d4f61*/
          v16 = *(unsigned int *)DSurface_ViewBounds.__pad_8; /*0x6d4f65*/
          v9 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6d4f89*/
             | (255 >> g_BitMask_Blue << g_BitMask_Green)
             | (255 >> g_BitMask_Red << g_BitShift_Blue);
          ((Text *)(g_FogOfWarState))->Layout(String, &v12, v13, *(int *)DSurface_ViewBounds.__pad_8); /*0x6d4f90*/
          v18[0] = v14; /*0x6d4fbb*/
          v10 = v8 + (v6 - v12) / 2; /*0x6d4fc1*/
          v18[2] = v16 + v14; /*0x6d4fc9*/
          v18[1] = v15; /*0x6d4fd1*/
          v18[3] = &v15[v17]; /*0x6d4fd9*/
          v11 = (int)&v15[(v17 - v13[0]) / 2]; /*0x6d4fdf*/
          ((Char *)(v7))->Swap(1); /*0x6d4fe1*/
          ((TextGroup *)((TextGroup *)v7))->SetRect(v18); /*0x6d4fed*/
          ((Property *)((Property *)v7))->Set(v9); /*0x6d4ff5*/
          FontRenderer::DrawText(v7, (int *)DSurface_Composite->__pad_0, String, v10, v11, 0, 0); /*0x6d5013*/
        }
      }
    }
  }

}
}
// 0x6D6070
namespace gamemd {
unsigned int Tactical::SetTacticalPosition(int *aP1)
{

  int v3; // esi
  int v4; // ebx
  int v5; // esi
  int v6; // ebx
  unsigned int result; // eax
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  v3 = *aP1; /*0x6d607d*/
  v9 = aP1[1]; /*0x6d6083*/
  v8 = -60 * v9 / 2 + 60 * v3 / 2; /*0x6d60c3*/
  v4 = 30 * v9 / 2 + 30 * v3 / 2; /*0x6d60de*/
  v5 = v8 / 256; /*0x6d60e2*/
  v6 = v4 / 256 - ZCoordToScreenY(aP1[2]); /*0x6d6118*/
  v8 /= 256; /*0x6d611d*/
  v9 = v6; /*0x6d6121*/
  if ( ClampCoordMap( (AbstractClass *)(&v8)) && !((unsigned int *)&stru_A8EB00)[391] ) /*0x6d6135*/
  {
    v5 = v8; /*0x6d6137*/
    v6 = v9; /*0x6d613b*/
  }
  this->TacticalClass_field_D64 = v5; /*0x6d613f*/
  this->TacticalClass_field_D74 = v5; /*0x6d6145*/
  this->TacticalClass_field_D68 = v6; /*0x6d614d*/
  this->TacticalClass_field_D78 = v6; /*0x6d6153*/
  result = TacticalClass::CalcViewportCells(this); /*0x6d6159*/
  this->redrawing = 1; /*0x6d615e*/
  return result; /*0x6d6165*/

}
}
// 0x6D6590
namespace gamemd {
unsigned int * Tactical::PixelToCell(unsigned int *aP1, int *aP2)
{

  int v3; // eax
  int v5; // eax
  int v6; // ecx
  float *v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  signed int v11; // ebx
  int v12; // ebp
  int v13; // ecx
  float *v14; // eax
  int v15; // eax
  int v16; // esi
  int v17; // eax
  Cell *v18; // esi
  int v19; // ecx
  int64_t v20; // rax
  int64_t v21; // rax
  int v22; // eax
  int v23; // ecx
  int *v24; // eax
  int v25; // ecx
  int v26; // ebx
  unsigned int v27; // ebp
  bool v28; // cc
  char v30; // [esp+13h] [ebp-69h]
  char v31; // [esp+14h] [ebp-68h]
  char v32; // [esp+15h] [ebp-67h]
  char v33; // [esp+16h] [ebp-66h]
  char v34; // [esp+17h] [ebp-65h]
  signed int v35; // [esp+18h] [ebp-64h]
  unsigned int *NeighbourContent; // [esp+1Ch] [ebp-60h]
  unsigned int *v37; // [esp+20h] [ebp-5Ch]
  int i; // [esp+24h] [ebp-58h]
  int v39; // [esp+28h] [ebp-54h]
  int16_t v40[4]; // [esp+2Ch] [ebp-50h] BYREF
  int v41; // [esp+34h] [ebp-48h]
  int v42; // [esp+38h] [ebp-44h]
  int v43; // [esp+3Ch] [ebp-40h]
  unsigned int v44; // [esp+40h] [ebp-3Ch]
  int v45[2]; // [esp+44h] [ebp-38h] BYREF
  float v46; // [esp+4Ch] [ebp-30h] BYREF
  float v47; // [esp+50h] [ebp-2Ch]
  int v48; // [esp+54h] [ebp-28h]
  float v49; // [esp+58h] [ebp-24h] BYREF
  float v50; // [esp+5Ch] [ebp-20h]
  int v51; // [esp+60h] [ebp-1Ch]
  float v52[3]; // [esp+64h] [ebp-18h] BYREF
  float v53[3]; // [esp+70h] [ebp-Ch] BYREF
  char v54; // [esp+84h] [ebp+8h]
  int *v55; // [esp+84h] [ebp+8h]

  v3 = *aP2; /*0x6d659f*/
  v48 = 0; /*0x6d65ab*/
  v5 = *(unsigned int *)&this->__pad_AC[4] + v3; /*0x6d65bf*/
  v6 = aP2[1] + *(unsigned int *)&this->__pad_AC[8]; /*0x6d65c6*/
  v43 = v5 - DSurface_ViewBounds.field_0; /*0x6d65c8*/
  v44 = v6 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d65d2*/
  v46 = (float)(v5 - DSurface_ViewBounds.field_0); /*0x6d65e1*/
  v47 = (float)(v6 - (unsigned int)DSurface_ViewBounds.field_4); /*0x6d65ed*/
  v7 = TransformMatrix3x4Point( v52, (IUnknown *)((float *)this + 889), (IUnknown *)(&v46)); /*0x6d65f1*/
  v46 = *v7; /*0x6d65f8*/
  v47 = v7[1]; /*0x6d6603*/
  v48 = *((unsigned int *)v7 + 2); /*0x6d660a*/
  LOWORD(v8) = Math::RoundToInt(v46); /*0x6d660e*/
  v9 = v8; /*0x6d6617*/
  LOWORD(v10) = Math::RoundToInt(v47); /*0x6d6619*/
  LODWORD(v49) = (uint8_t)v9; /*0x6d6631*/
  LOWORD(v39) = v9 / 256; /*0x6d6638*/
  LODWORD(v50) = (uint8_t)v10; /*0x6d664c*/
  HIWORD(v39) = v10 / 256; /*0x6d6663*/
  v51 = 0; /*0x6d6668*/
  Coord::To_ScreenRaw( v45, (unsigned int)(&v49)); /*0x6d666c*/
  v11 = aP2[1] - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d6684*/
  v43 = *aP2 - DSurface_ViewBounds.field_0; /*0x6d668a*/
  v12 = v11 + 180; /*0x6d668e*/
  v44 = v11; /*0x6d6694*/
  v41 = v43; /*0x6d6698*/
  v42 = v11 + 180; /*0x6d669c*/
  for ( i = 0; ; ++i )
  {
    v13 = *(unsigned int *)&this->__pad_AC[8]; /*0x6d66b4*/
    v45[0] = v41 + *(unsigned int *)&this->__pad_AC[4]; /*0x6d66bc*/
    v45[1] = v12 + v13; /*0x6d66c6*/
    v49 = (float)v45[0]; /*0x6d66d5*/
    v51 = 0; /*0x6d66e1*/
    v50 = (float)(v12 + v13); /*0x6d66e9*/
    v14 = TransformMatrix3x4Point( v53, (IUnknown *)((float *)this + 889), (IUnknown *)(&v49)); /*0x6d66ed*/
    v49 = *v14; /*0x6d66f4*/
    v50 = v14[1]; /*0x6d66ff*/
    v51 = *((unsigned int *)v14 + 2); /*0x6d6706*/
    LOWORD(v15) = Math::RoundToInt(v49); /*0x6d670a*/
    v16 = v15; /*0x6d6713*/
    LOWORD(v17) = Math::RoundToInt(v50); /*0x6d6715*/
    v40[0] = v16 / 256; /*0x6d672a*/
    v40[1] = v17 / 256; /*0x6d6747*/
    v18 = (Cell *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v40); /*0x6d6751*/
    v35 = v12 - 15 * v18->Cell_field_0x11B[0]; /*0x6d6768*/
    if ( ((int)v18->Cell_field_0x140 & 0x100) != 0 )
    {
      NeighbourContent = ((Cell *)(v18))->GetNeighbourContent(2u); /*0x6d6786*/
      v37 = ((Cell *)(v18))->GetNeighbourContent(4u); /*0x6d678f*/
      if ( ((int)v18->Cell_field_0x140 & 0x800) == 0 /*0x6d67b7*/
        || (v54 = 1, (*((unsigned int *)((Cell *)(v18))->GetNeighbourContent(0) + 80) & 0x100) != 0) )
      {
        v54 = 0; /*0x6d67b9*/
      }
      if ( ((int)v18->Cell_field_0x140 & 0x800) != 0 /*0x6d67e2*/
        || (v30 = 1, (*((unsigned int *)((Cell *)(v18))->GetNeighbourContent(6u) + 80) & 0x100) != 0) )
      {
        v30 = 0; /*0x6d67e4*/
      }
      v19 = (int)v18->Cell_field_0x140 & 0x800; /*0x6d67ef*/
      if ( !v19 || (v31 = 1, (v37[80] & 0x100) != 0) ) /*0x6d6806*/
        v31 = 0; /*0x6d6808*/
      if ( v19 || (v33 = 1, (NeighbourContent[80] & 0x100) != 0) ) /*0x6d6820*/
        v33 = 0; /*0x6d6822*/
      if ( !v19 /*0x6d6858*/
        || (v20 = v18->Cell_field_0x11B[0] - *((char *)NeighbourContent + 283),
            (int)((HIDWORD(v20) ^ v20) - HIDWORD(v20)) > 1)
        || (v34 = 1, (NeighbourContent[80] & 0x100) != 0) )
      {
        v34 = 0; /*0x6d685a*/
      }
      if ( v19 /*0x6d688e*/
        || (v21 = v18->Cell_field_0x11B[0] - *((char *)v37 + 283), (int)((HIDWORD(v21) ^ v21) - HIDWORD(v21)) > 1)
        || (v32 = 1, (v37[80] & 0x100) != 0) )
      {
        v32 = 0; /*0x6d6890*/
      }
      v22 = *(int16_t *)&v18->__pad_1C[8]; /*0x6d6899*/
      v23 = *(int16_t *)&v18->__pad_1C[10] << 8; /*0x6d68a8*/
      v52[2] = 0.0; /*0x6d68ab*/
      LODWORD(v52[1]) = v23; /*0x6d68b2*/
      LODWORD(v52[0]) = v22 << 8; /*0x6d68ca*/
      v24 = Coord::To_ScreenRaw( (int)((int *)&v46), v52); /*0x6d68ce*/
      v25 = -30 * v18->Cell_field_0x11B[0] / 2 + v24[1] - *(unsigned int *)&this->__pad_AC[8]; /*0x6d68ff*/
      if ( v25 <= v11 ) /*0x6d6903*/
      {
        if ( v31 || v32 ) /*0x6d6917*/
        {
          *aP1 = *(unsigned int *)v40 + 0x10000; /*0x6d6a61*/
          return aP1; /*0x6d6a67*/
        }
        if ( v33 || v34 ) /*0x6d692f*/
        {
          HIWORD(v55) = v40[1]; /*0x6d6a0c*/
          LOWORD(v55) = v40[0] + 1; /*0x6d6a1b*/
          *aP1 = v55; /*0x6d6a2d*/
          return aP1; /*0x6d6a33*/
        }
      }
      if ( v54 || v30 )
      {
        v26 = v43 - (*v24 - *(unsigned int *)&this->__pad_AC[4]); /*0x6d6971*/
        v27 = v44 - v25; /*0x6d6977*/
        if ( v54 && (int)(v27 - v26 / 2) > 15 || v30 && (int)(v27 + v26 / 2) > 15 )
          v35 -= ((int)v18->Cell_field_0x140 & 0x100) != 0 ? 0x3C : 0;
        v11 = v44; /*0x6d69c0*/
      }
      else
      {
        v35 -= ((int)v18->Cell_field_0x140 & 0x100) != 0 ? 0x3C : 0;
      }
    }
    if ( v35 <= v11 ) /*0x6d69c8*/
      break; /*0x6d69c8*/
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
int Tactical::AddCellToDrawList(int aP1)
{

  int result; // eax
  int *Coords; // eax
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

  result = dword_87F7F4; /*0x6da7d0*/
  if ( !dword_87F7F4 ) /*0x6da7df*/
  {
    result = (int)dword_A8ED84; /*0x6da7e9*/
    if ( *(wchar_t **)(aP1 + 92) != dword_A8ED84 && ((*(unsigned char *)(aP1 + 300) & 8) != 0 || *(unsigned char *)(aP1 + 312)) ) /*0x6da800*/
    {
      *(unsigned int *)(aP1 + 92) = dword_A8ED84; /*0x6da80e*/
      Coords = ((CellClass *)(unsigned int *)aP1)->GetCoords( v14); /*0x6da819*/
      v5 = *Coords; /*0x6da81e*/
      v6 = Coords[1]; /*0x6da820*/
      v7 = Coords[2]; /*0x6da823*/
      v8 = *(unsigned int *)(aP1 + 300); /*0x6da826*/
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
      v13 = v9 / 256 - *((char *)this + 44); /*0x6da8ff*/
      result = v11 / 256 - v12 - *((char *)this + 45); /*0x6da907*/
      if ( v13 >= DSurface_ViewBounds - 30 /*0x6da936*/
        && result >= -30
        && v13 <= dword_886FA8 + DSurface_ViewBounds + 30
        && result <= dword_886FAC + dword_886FA4 + 15 )
      {
        result = *((char *)this + 56); /*0x6da938*/
        if ( result < 799 ) /*0x6da943*/
        {
          *(this + result + 57) = aP1; /*0x6da949*/
          result = *((char *)this + 56) + 1; /*0x6da956*/
          *((char *)this + 56) = result; /*0x6da957*/
        }
        *(unsigned char *)(aP1 + 312) = 0; /*0x6da961*/
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

  CellClass *v2; // ebp
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int *Coords; // eax
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
  int *v17; // eax
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
  ObjectClass *firstObject; // [esp+44h] [ebp-D0h]
  ObjectClass *altObject; // [esp+44h] [ebp-D0h]
  Vector2 v37; // [esp+48h] [ebp-CCh] BYREF
  int v38; // [esp+50h] [ebp-C4h] BYREF
  int v39; // [esp+54h] [ebp-C0h]
  int v40; // [esp+58h] [ebp-BCh] BYREF
  int v41; // [esp+5Ch] [ebp-B8h]
  int v42; // [esp+60h] [ebp-B4h] BYREF
  int v43; // [esp+64h] [ebp-B0h]
  int v44[2]; // [esp+68h] [ebp-ACh] BYREF
  int v45; // [esp+70h] [ebp-A4h] BYREF
  int v46; // [esp+74h] [ebp-A0h]
  int v47; // [esp+78h] [ebp-9Ch]
  int v48; // [esp+7Ch] [ebp-98h] BYREF
  int v49; // [esp+80h] [ebp-94h]
  int v50; // [esp+84h] [ebp-90h]
  int v51; // [esp+88h] [ebp-8Ch]
  unsigned int v52[3]; // [esp+8Ch] [ebp-88h] BYREF
  unsigned int v53[3]; // [esp+98h] [ebp-7Ch] BYREF
  unsigned int v54[4]; // [esp+A4h] [ebp-70h] BYREF
  unsigned int v55[4]; // [esp+B4h] [ebp-60h] BYREF
  int v56[2]; // [esp+C4h] [ebp-50h] BYREF
  int v57[3]; // [esp+CCh] [ebp-48h] BYREF
  unsigned char v58[12]; // [esp+D8h] [ebp-3Ch] BYREF
  int v59; // [esp+E4h] [ebp-30h] BYREF
  int v60; // [esp+ECh] [ebp-28h] BYREF
  int v61; // [esp+F4h] [ebp-20h] BYREF
  char v62[12]; // [esp+FCh] [ebp-18h] BYREF
  int v63[3]; // [esp+108h] [ebp-Ch] BYREF

  ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CellIteratorReset(); /*0x6db221*/
  v2 = (CellClass *)((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CellIteratorNext(); /*0x6db236*/
  result = 255 >> g_BitMask_Blue << g_BitMask_Green; /*0x6db251*/
  v4 = result | (255 >> g_BitShift_Green_0 << g_BitShift_Red); /*0x6db283*/
  v51 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (255 >> g_BitMask_Red << g_BitShift_Blue); /*0x6db2b5*/
  v5 = result | (255 >> g_BitMask_Red << g_BitShift_Blue); /*0x6db2c1*/
  if ( v2 ) /*0x6db2c5*/
  {
    do /*0x6db525*/
    {
      firstObject = v2->firstObject; /*0x6db2d3*/
      if ( firstObject ) /*0x6db2d7*/
      {
        Coords = ((CellClass *)v2)->GetCoords( v63); /*0x6db2e7*/
        v52[0] = *Coords; /*0x6db2ee*/
        v52[1] = Coords[1]; /*0x6db2fa*/
        v52[2] = Coords[2]; /*0x6db30b*/
        v7 = Coord::To_ScreenRaw( (int)(&v60), v52); /*0x6db30f*/
        v8 = *(unsigned int *)&this->__pad_AC[4]; /*0x6db314*/
        v40 = *v7; /*0x6db31e*/
        v9 = v7[1]; /*0x6db324*/
        v40 -= v8; /*0x6db327*/
        v41 = v9 - *(unsigned int *)&this->__pad_AC[8]; /*0x6db33a*/
        v10 = (unsigned int *)(*((int (**)(ObjectClass *, char *))firstObject->vtable1 + 18))( /*0x6db345*/
                          firstObject,
                          v62);
        v53[0] = *v10; /*0x6db34a*/
        v53[1] = v10[1]; /*0x6db356*/
        v53[2] = v10[2]; /*0x6db367*/
        v11 = Coord::To_ScreenRaw( (int)(&v59), v53); /*0x6db36b*/
        v12 = *(unsigned int *)&this->__pad_AC[4]; /*0x6db370*/
        v13 = v11; /*0x6db376*/
        v44[0] = *v11; /*0x6db37b*/
        v14 = v44[0] - v12; /*0x6db37f*/
        v15 = v13[1]; /*0x6db381*/
        v16 = *(unsigned int *)&this->__pad_AC[8]; /*0x6db384*/
        v44[0] = v14; /*0x6db390*/
        v55[1] = v41 - 1; /*0x6db39a*/
        v44[1] = v15 - v16; /*0x6db3a6*/
        v55[2] = 3; /*0x6db3b0*/
        v55[3] = 3; /*0x6db3b7*/
        v55[0] = v40 - 1; /*0x6db3c5*/
        (*(void (**)(AudioStream *, CellStruct *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 16))( /*0x6db3d4*/
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          v55,
          v4);
        (*(void (**)(AudioStream *, CellStruct *, int *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 /*0x6db3ef*/
                                                                               + 44))(
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          &v40,
          v44,
          v4);
      }
      altObject = v2->altObject; /*0x6db3fa*/
      if ( altObject ) /*0x6db3fe*/
      {
        v17 = ((CellClass *)v2)->GetCoords( v57); /*0x6db40e*/
        v48 = *v17; /*0x6db415*/
        v49 = v17[1]; /*0x6db41c*/
        v50 = v17[2]; /*0x6db432*/
        v18 = Coord::To_ScreenRaw( (int)(&v61), (unsigned int)(&v48)); /*0x6db436*/
        v19 = *(unsigned int *)&this->__pad_AC[4]; /*0x6db43d*/
        v20 = *(unsigned int *)&this->__pad_AC[8]; /*0x6db443*/
        v42 = *v18; /*0x6db449*/
        v21 = v18[1] - v20; /*0x6db452*/
        v42 -= v19; /*0x6db454*/
        v43 = v21 - 60; /*0x6db45f*/
        v22 = (int *)(*((int (**)(ObjectClass *, unsigned char *))altObject->vtable1 + 18))(altObject, v58); /*0x6db46d*/
        v45 = *v22; /*0x6db472*/
        v46 = v22[1]; /*0x6db47e*/
        v47 = v22[2]; /*0x6db48f*/
        v23 = Coord::To_ScreenRaw( v56, (unsigned int)(&v45)); /*0x6db493*/
        *(unsigned int *)v37.__pad_0 = *v23; /*0x6db49a*/
        v24 = *(unsigned int *)&this->__pad_AC[8]; /*0x6db49e*/
        v25 = v23[1]; /*0x6db4a4*/
        v26 = *(unsigned int *)&this->__pad_AC[4]; /*0x6db4a7*/
        v37.Vector2_field_0x04 = v25; /*0x6db4ad*/
        v39 = v24; /*0x6db4b5*/
        v38 = v26; /*0x6db4be*/
        ((Vector2 *)&v37)->Subtract( &v38); /*0x6db4c2*/
        v54[0] = v42 - 1; /*0x6db4d1*/
        v54[1] = v43 - 1; /*0x6db4da*/
        v54[2] = 3; /*0x6db4e4*/
        v54[3] = 3; /*0x6db4e8*/
        (*(void (**)(AudioStream *, CellStruct *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 16))( /*0x6db4f9*/
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          v54,
          v5);
        (*(void (**)(AudioStream *, CellStruct *, int *, Vector2 *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 /*0x6db514*/
                                                                                   + 44))(
          g_DSurface_Hidden_2,
          &DSurface_ViewBounds,
          &v42,
          &v37,
          v5);
      }
      result = ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CellIteratorNext(); /*0x6db51c*/
      v2 = (CellClass *)result; /*0x6db521*/
    }
    while ( result ); /*0x6db525*/
  }
  for ( i = dword_A8E370 - 1; i >= 0; --i ) /*0x6db536*/
  {
    v28 = (unsigned int *)*((unsigned int *)dword_A8E364 + i); /*0x6db542*/
    result = v28[12]; /*0x6db545*/
    if ( result ) /*0x6db54a*/
    {
      v29 = (int *)(*(int (**)(unsigned int *, unsigned char *))(*v28 + 72))(v28, v58); /*0x6db55c*/
      v45 = *v29; /*0x6db561*/
      v46 = v29[1]; /*0x6db568*/
      v47 = v29[2]; /*0x6db57e*/
      v30 = Coord::To_ScreenRaw( v56, (unsigned int)(&v45)); /*0x6db582*/
      v31 = *(unsigned int *)&this->__pad_AC[4]; /*0x6db589*/
      *(unsigned int *)v37.__pad_0 = *v30; /*0x6db58f*/
      v32 = *(unsigned int *)&this->__pad_AC[8]; /*0x6db593*/
      v33 = v30[1]; /*0x6db599*/
      v38 = v31; /*0x6db59c*/
      v37.Vector2_field_0x04 = v33; /*0x6db5a0*/
      v39 = v32; /*0x6db5ad*/
      ((Vector2 *)&v37)->Subtract( &v38); /*0x6db5b1*/
      v34 = (int *)(*(int (**)(unsigned int, int *))(*(unsigned int *)v28[12] + 72))(v28[12], v57); /*0x6db5c3*/
      v48 = *v34; /*0x6db5c8*/
      v49 = v34[1]; /*0x6db5d4*/
      v50 = v34[2]; /*0x6db5e2*/
      ((Coord *)((Coord *)this))->To_Screen(&v48, v44); /*0x6db5e6*/
      result = (*(int (**)(AudioStream *, CellStruct *, Vector2 *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 /*0x6db607*/
                                                                                         + 44))(
                 g_DSurface_Hidden_2,
                 &DSurface_ViewBounds,
                 &v37,
                 v44,
                 v51);
    }
  }
  return (void*)result; /*0x6db611*/

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
  int v14; // ecx
  unsigned int *v15; // eax
  int v16; // ecx
  int64_t v17; // rax
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  AudioStream *v22; // esi
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v27; // [esp-8h] [ebp-38h]
  int v28; // [esp-8h] [ebp-38h]
  IsoCoord v29; // [esp+10h] [ebp-20h] BYREF
  IsoCoord v30; // [esp+18h] [ebp-18h] BYREF
  unsigned int v31[2]; // [esp+20h] [ebp-10h] BYREF
  unsigned int v32[2]; // [esp+28h] [ebp-8h] BYREF
  BOOL v33; // [esp+38h] [ebp+8h]

  v6 = IsoCoord::ToPixel(&v30, *a1, a1[1]); /*0x6dbb79*/
  v7 = v6[1]; /*0x6dbb83*/
  v8 = *v6 / 256; /*0x6dbb93*/
  v9 = ZCoordToScreenY(a1[2]); /*0x6dbb9b*/
  v10 = *(unsigned int *)&this->__pad_AC[8]; /*0x6dbbac*/
  v11 = v7 / 256 - v9; /*0x6dbbb5*/
  v12 = *(unsigned int *)&this->__pad_AC[4]; /*0x6dbbb7*/
  v32[0] = v8; /*0x6dbbbd*/
  v13 = v8 - v12; /*0x6dbbc3*/
  v14 = aP2[1]; /*0x6dbbc5*/
  v32[1] = v11 - v10; /*0x6dbbc8*/
  v27 = *(unsigned int *)aP2;
  v32[0] = v13; /*0x6dbbd4*/
  v15 = IsoCoord::ToPixel(&v29, v27, v14); /*0x6dbbd8*/
  v16 = v15[1]; /*0x6dbbe1*/
  v17 = (int)*v15; /*0x6dbbe4*/
  v30.IsoCoord_field_0x04 = v16; /*0x6dbbeb*/
  v18 = (BYTE4(v17) + (int)v17) >> 8; /*0x6dbbf6*/
  v19 = ZCoordToScreenY(aP2[2]); /*0x6dbbf9*/
  v31[0] = v18; /*0x6dbc0b*/
  v20 = v18 - *(unsigned int *)&this->__pad_AC[4]; /*0x6dbc22*/
  v31[1] = v30.IsoCoord_field_0x04 / 256 - v19 - *(unsigned int *)&this->__pad_AC[8]; /*0x6dbc28*/
  v21 = aP2[2]; /*0x6dbc2c*/
  v31[0] = v20; /*0x6dbc34*/
  *(unsigned int *)v29.__pad_0 = v21; /*0x6dbc38*/
  *(unsigned int *)v30.__pad_0 = a1[2]; /*0x6dbc58*/
  v33 = *(unsigned int *)v30.__pad_0 >= 728; /*0x6dbc5e*/
  v22 = g_DSurface_Hidden_2; /*0x6dbc66*/
  v23 = *(unsigned int *)g_DSurface_Hidden_2->__pad_0; /*0x6dbc77*/
  LOWORD(v24) = Math::RoundToInt((double)v21 * dbl_B0CD48 + (double)(v21 >= 728) + 0.5); /*0x6dbc83*/
  v28 = 14 - v24; /*0x6dbc99*/
  LOWORD(v25) = Math::RoundToInt((double)*(int *)v30.__pad_0 * dbl_B0CD48 + (double)v33 + 0.5); /*0x6dbca4*/
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
  int result; // eax
  unsigned int *i; // ecx

  v2 = *(unsigned int *)this->__pad_10; /*0x6e4a80*/
  result = 0; /*0x6e4a83*/
  if ( v2 <= 0 ) /*0x6e4a88*/
    return -1; /*0x6e4a9f*/
  for ( i = *(unsigned int **)&this->Tactical_field_0x2[2]; *i != *a2; ++i ) /*0x6e4a8e*/
  {
    if ( ++result >= v2 ) /*0x6e4a9d*/
      return -1; /*0x6e4a9d*/
  }
  return result; /*0x6e4aa2*/

}
}
// 0x4A35F0
namespace gamemd {
char * Tactical::SetCellTransform(int a2, CoordStruct * aP2, int a4, CoordStruct * aP4, int a6, int a7, void *a7_2)
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
char Tactical::SelectObject(int a2, void *a2_2)
{

  int result; // eax

  result = (*(int (**)(GScreenClass *, int))(this->vfptr[0] + 44))(this, a2); /*0x4f4458*/
  if ( (unsigned char)result ) /*0x4f445d*/
  {
    result = (*(int (**)(int))(*(unsigned int *)&a2->q_90))(a2);  /*0x4f4467*/
    *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 880) = result; /*0x4f446a*/
    LOBYTE(result) = 1; /*0x4f446f*/
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
  if ( aP0 == *(Tactical **)&stru_87F5F0.__pad_E12[1398] ) /*0x6da583*/
  {
    result = (int *)MIXClass::CopyHeader((int *)&stru_87F5F0.__pad_58[416], 0); /*0x6da58c*/
    *(unsigned int *)&stru_87F5F0.__pad_E12[1398] = 0; /*0x6da591*/
    *(unsigned int *)&stru_87F5F0.__pad_E12[1402] = 0; /*0x6da59b*/
    *(unsigned int *)&stru_87F5F0.__pad_E12[1406] = -1; /*0x6da5a5*/
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

  int result; // eax
  int v3; // eax
  int v4; // edi
  int *v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // [esp+4h] [ebp-8h] BYREF
  int v10; // [esp+8h] [ebp-4h]

  result = AbstractClass::SaveLoad_Prefix_0( (AbstractClass *)(a1), (AbstractClass *)(a2)); /*0x6dbd2e*/
  if ( result >= 0 ) /*0x6dbd35*/
  {
    if ( a1 ) /*0x6dbd3d*/
      SmallFunc_6D1E30(a1, (int)&a2); /*0x6dbd46*/
    v3 = *(unsigned int *)&a1->__pad_AC[52]; /*0x6dbd4b*/
    v4 = 0; /*0x6dbd52*/
    *(unsigned int *)&a1->__pad_DA8[8] = 0; /*0x6dbd54*/
    if ( v3 > 0 ) /*0x6dbd60*/
    {
      v5 = (int *)&a1->__pad_AC[56]; /*0x6dbd63*/
      do /*0x6dbd80*/
      {
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v5); /*0x6dbd6f*/
        ++v4; /*0x6dbd7a*/
        ++v5; /*0x6dbd7b*/
      }
      while ( v4 < *(unsigned int *)&a1->__pad_AC[52] ); /*0x6dbd80*/
    }
    v6 = *(unsigned int *)&a1->__pad_11F[3145]; /*0x6dbd89*/
    v9 = *(unsigned int *)&a1->__pad_11F[3141]; /*0x6dbd93*/
    v10 = v6; /*0x6dbd9a*/
    if ( !ClampCoordMap( (AbstractClass *)(&v9)) || *((unsigned int *)((char *)&stru_A8EB00 + 391)) ) /*0x6dbdaf*/
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

  result = AbstractClass::SaveLoad_Prefix( (ObjectTypeClass *)((int *)aP0->__pad_0), (ObjectTypeClass *)(a1), (ObjectTypeClass *)(aP2)); /*0x6dbe0f*/
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

  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_Tactical;
  *(unsigned int *)&this->Tactical_field_0x2[2] = (unsigned int)&vt_Tactical;
  this->Tactical_field_0x8[0] = (int)&vt_Tactical; /*0x6dc480*/
  this->Tactical_field_0xC[0] = (int)&vt_Tactical; /*0x6dc487*/
  g_TacticalClass_Instance = 0; /*0x6dc48e*/
  ((AbstractClass*)((AbstractClass *)this))->DTOR(); /*0x6dc498*/
  if ( (a2 & 1) != 0 ) /*0x6dc4a2*/
    __3_YAXPAX_Z(this); /*0x6dc4a5*/
  return this->__pad_0; /*0x6dc4af*/

}
} // namespace gamemd

// 0x6E47F0
namespace gamemd {
void Tactical_42::ClearBuffer(void *a1_1)
{

  void *v2; // eax

  v2 = *(void **)&this->Tactical_field_0x2[2]; /*0x6e47f6*/
  *(unsigned int *)this->__pad_10 = 0; /*0x6e47f9*/
  if ( v2 && BYTE1(this->Tactical_field_0xC) ) /*0x6e4800*/
  {
    __3_YAXPAX_Z(v2); /*0x6e4806*/
    *(unsigned int *)&this->Tactical_field_0x2[2] = 0; /*0x6e480e*/
  }
  BYTE1(this->Tactical_field_0xC) = 0; /*0x6e4811*/
  this->Tactical_field_0x8 = 0; /*0x6e4814*/

}
} // namespace gamemd

// 0x6E4820
namespace gamemd {
unsigned int Tactical_42::PointerToIndex(int a2)
{

  if ( LOBYTE(this->Tactical_field_0xC) ) /*0x6e4820*/
    return (unsigned int)(a2 - *(unsigned int *)&this->Tactical_field_0x2[2]) >> 2; /*0x6e4835*/
  else
    return 0; /*0x6e4827*/

}
} // namespace gamemd

// 0x6E4840
namespace gamemd {
int Tactical_42::UpdateView(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x6e484a*/

}
} // namespace gamemd

// 0x6E4850
namespace gamemd {
char Tactical_42::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6e4852*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x6e485d*/
  {
    v3 = 0; /*0x6e485f*/
    if ( m_8 <= 0 ) /*0x6e4863*/
      return 1; /*0x6e4883*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x6e4865*/
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

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6e489c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6e48a6*/
    if ( a3 ) /*0x6e48ac*/
      v4 = a3; /*0x6e48c2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x6e48be*/
    LOBYTE(this->m_C) = 1; /*0x6e48c6*/
    if ( v4 ) /*0x6e48ca*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x6e48d5*/
      {
        m_8 = this->m_8; /*0x6e48dc*/
        if ( a2 < m_8 ) /*0x6e48e1*/
          m_8 = a2; /*0x6e48e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x6e48e9*/
          ++i; /*0x6e48ee*/
        if ( BYTE1(this->m_C) ) /*0x6e48fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6e4906*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x6e490e*/
        }
      }
      *(unsigned int *)&this->m_1[3] = v4; /*0x6e4917*/
      this->m_8 = a2; /*0x6e491f*/
      BYTE1(this->m_C) = a3 == 0; /*0x6e4922*/
      return 1; /*0x6e4928*/
    }
    else
    {
      return 0; /*0x6e48cf*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x6e4932*/
    return 1; /*0x6e4938*/
  }

}
} // namespace gamemd

// 0x6E4940
namespace gamemd {
void Tactical_42::ddtor(void *a1_1, void *a2_1)
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6e494d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6e4953*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x6e495b*/
  }
  BYTE1(this->m_C) = 0; /*0x6e495e*/
  this->m_8 = 0; /*0x6e4961*/

}
} // namespace gamemd

// 0x6E4970
namespace gamemd {
int Tactical::Init(unsigned int * a2, void *a2_2, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7_1, void *a8_1)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6e4970*/
    return 0; /*0x6e4978*/
  m_8 = this->m_8; /*0x6e497e*/
  result = 0; /*0x6e4981*/
  if ( m_8 <= 0 ) /*0x6e4985*/
    return -1; /*0x6e499c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x6e498b*/
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

  if ( LOBYTE(this->m_C) ) /*0x6e49b0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x6e49c5*/
  else
    return 0; /*0x6e49b7*/

}
} // namespace gamemd

// 0x6E49D0
namespace gamemd {
char Tactical_42::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int Tactical_field_0x8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6e49dc*/
  {
    LOBYTE(this->Tactical_field_0xC) = 0; /*0x6e49e2*/
    if ( a3 ) /*0x6e49e8*/
      v4 = a3; /*0x6e49fe*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x6e49fa*/
    LOBYTE(this->Tactical_field_0xC) = 1; /*0x6e4a02*/
    if ( !v4 ) /*0x6e4a06*/
      return 0; /*0x6e4a7a*/
    if ( *(unsigned int *)&this->Tactical_field_0x2[2] ) /*0x6e4a08*/
    {
      Tactical_field_0x8 = this->Tactical_field_0x8; /*0x6e4a0f*/
      if ( a2 < Tactical_field_0x8 ) /*0x6e4a14*/
        Tactical_field_0x8 = a2; /*0x6e4a16*/
      for ( i = 0; i < Tactical_field_0x8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->Tactical_field_0x2[2] + 4 * i - 4) ) /*0x6e4a1c*/
        ++i; /*0x6e4a21*/
      if ( BYTE1(this->Tactical_field_0xC) ) /*0x6e4a2e*/
      {
        __3_YAXPAX_Z(*(void **)&this->Tactical_field_0x2[2]); /*0x6e4a39*/
        *(unsigned int *)&this->Tactical_field_0x2[2] = 0; /*0x6e4a41*/
      }
    }
    *(unsigned int *)&this->Tactical_field_0x2[2] = v4; /*0x6e4a4a*/
    this->Tactical_field_0x8 = a2; /*0x6e4a52*/
    BYTE1(this->Tactical_field_0xC) = a3 == 0; /*0x6e4a55*/
  }
  else
  {
    (*(void (**)(Tactical *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x6e4a5e*/
  }
  v7 = this->Tactical_field_0x8; /*0x6e4a61*/
  if ( v7 < *(unsigned int *)this->__pad_10 ) /*0x6e4a69*/
    *(unsigned int *)this->__pad_10 = v7; /*0x6e4a6b*/
  return 1; /*0x6e4a6e*/

}
} // namespace gamemd

// 0x6E4AB0
namespace gamemd {
VectorClass_flat * Tactical_42::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6e4ab3*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClass;
  if ( v3 && BYTE1(this->m_C) ) /*0x6e4ac0*/
  {
    __3_YAXPAX_Z(v3); /*0x6e4ac8*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x6e4ad0*/
  }
  BYTE1(this->m_C) = 0; /*0x6e4adb*/
  this->m_8 = 0; /*0x6e4ae1*/
  if ( (a2 & 1) != 0 ) /*0x6e4ae8*/
    __3_YAXPAX_Z(this); /*0x6e4aeb*/
  return this->__pad_0; /*0x6e4af5*/

}
} // namespace gamemd
