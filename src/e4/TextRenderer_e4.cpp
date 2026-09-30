// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Territory_WorldDominationTour_8_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/ThemeManager_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x4A60D0
namespace gamemd {
void * TextRenderer::GetInstance()
{

  return aP0; /*0x4a60d5*/

}
}
// 0x4B96A0
namespace gamemd {
void TextRenderer::RenderCentered(int a1, int a2, ObjectClass * aP2, int * a3, wchar_t * Format, char a6, int a7, int _6C, int * a8)
{

  CampaignScore *v9; // edx
  CampaignScore *v10; // ecx
  CampaignScore *v11; // esi
  CampaignScore *v12; // edi
  AbstractClass *v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // edx
  int v21; // edi
  int BuildingAnimByName; // eax
  unsigned int *v23; // eax
  int v25; // [esp-10h] [ebp-5Ch]
  ObjectClass *v26; // [esp-Ch] [ebp-58h]
  int _FFFFFFF8; // [esp-8h] [ebp-54h]
  int v28; // [esp-4h] [ebp-50h]
  AbstractClass *v27; // [esp+14h] [ebp-38h] BYREF
  int v30; // [esp+18h] [ebp-34h]
  AbstractClass *v29; // [esp+1Ch] [ebp-30h]
  int v32; // [esp+20h] [ebp-2Ch]
  int v33; // [esp+24h] [ebp-28h]
  int v34; // [esp+28h] [ebp-24h]
  AbstractClass *v35; // [esp+2Ch] [ebp-20h]
  int v36; // [esp+30h] [ebp-1Ch]
  int v37; // [esp+34h] [ebp-18h]
  int v38; // [esp+38h] [ebp-14h]
  char v39[12]; // [esp+40h] [ebp-Ch] BYREF

  v11 = v10; /*0x4b96aa*/
  v12 = v9; /*0x4b96b2*/
  this->TextRenderer::GetInstance(); /*0x4b96c5*/
  swprintf( /*0x4b96dc*/
    (wchar_t *const)&stru_89E138.__pad_14B0[4744],
    (const size_t)&stru_820524.__pad_0[8],
    (const wchar_t *const)a3,
    v11);
  swprintf( /*0x4b96ed*/
    (wchar_t *const)&stru_89E138.__pad_14B0[4824],
    (const size_t)&stru_820524.__pad_0[8],
    (const wchar_t *const)a3,
    v12);
  if ( (unsigned char)a3 ) /*0x4b96f7*/
  {
    v13 = (AbstractClass *)(*(unsigned int *)a2 - Text::MeasureWidth((CampaignScore *)&stru_89E138.__pad_14B0[4744], 0) / 2); /*0x4b971b*/
    v14 = *(unsigned int *)a2 - Text::MeasureWidth((CampaignScore *)&stru_89E138.__pad_14B0[4824], 0) / 2; /*0x4b972b*/
  }
  else
  {
    v13 = *(AbstractClass **)a2; /*0x4b9733*/
    v14 = *(unsigned int *)a2; /*0x4b9735*/
  }
  v15 = *(unsigned int *)(a2 + 4); /*0x4b9737*/
  v16 = 110; /*0x4b9740*/
  if ( (int)v13 > v14 ) /*0x4b974a*/
  {
    v16 = (int)&v13[3].__pad_0[-v14 + 2]; /*0x4b9750*/
    v13 = (AbstractClass *)v14; /*0x4b9752*/
  }
  if ( (int)&v13-((unsigned int *)(>__pad_0))[v16] < v14 + 110 ) /*0x4b9766*/
    v16 = v14 - (unsigned int)v13 + 111; /*0x4b976d*/
  v35 = v13; /*0x4b9784*/
  v29 = v13; /*0x4b9788*/
  v37 = v16; /*0x4b9790*/
  v33 = v16; /*0x4b9794*/
  v36 = v15; /*0x4b9798*/
  v17 = *(unsigned int *)a1; /*0x4b979c*/
  v32 = v15; /*0x4b979e*/
  v38 = 15; /*0x4b97a4*/
  v34 = 15; /*0x4b97a8*/
  v18 = (*(int (**)(int))(v17 + 124))(a1); /*0x4b97b5*/
  v19 = (*(int (**)(unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[22524] + 124))(*(unsigned int *)&stru_87C374.__pad_579C[22524]); /*0x4b97b9*/
  v20 = *(unsigned int *)a1; /*0x4b97c5*/
  v32 += (v19 - v18) / -2; /*0x4b97cd*/
  v21 = (*(int (**)(int))(v20 + 128))(a1); /*0x4b97df*/
  v33 += ((*(int (**)(unsigned int))(**(unsigned int **)&stru_87C374.__pad_579C[22524] + 128))(*(unsigned int *)&stru_87C374.__pad_579C[22524]) /*0x4b97fc*/
        - v21)
       / -2;
  v30 = 0; /*0x4b982a*/
  v29 = 0; /*0x4b982e*/
  BlitterDrawSHP(*(IUnknown **)&stru_87C374.__pad_579C[22524]); /*0x4b9832*/
  BuildingAnimByName = FindBuildingAnimByName(&stru_820524, 1); /*0x4b9847*/
  v23 = (unsigned int *)(*(int (**)(unsigned int, char *, ObjectClass *, int, unsigned int, AbstractClass *))(**(unsigned int **)&stru_87C374.__pad_579C[22524] + 120))( /*0x4b985f*/
                    *(unsigned int *)&stru_87C374.__pad_579C[22524],
                    v39,
                    a3,
                    BuildingAnimByName,
                    0,
                    v27);
  return TextRenderer::DrawText( /*0x4b987c*/
           (int *)&v27,
           (size_t)&stru_89E138.__pad_14B0[4744],
           *(IUnknown **)&stru_87C374.__pad_579C[22524],
           v23,
           v25,
           v26,
           _FFFFFFF8,
           v28);

}
}
// 0x642C80
namespace gamemd {
int TextRenderer::MeasureBuilding(int a2, ProgressScreenClass * aP2, ProgressScreenClass * aP3, ProgressScreenClass * aP4, char a6)
{

  unsigned int *FoundationSize; // eax
  int v8; // ebx
  int Default; // edi
  int *v10; // ebp
  int v11; // eax
  int v12; // ebp
  int v13; // edi
  int *Viewport; // eax
  int v15; // kr04_4
  int v16; // eax
  AbstractClass *Instance; // [esp+4h] [ebp-3Ch]
  int v19; // [esp+8h] [ebp-38h]
  int v20; // [esp+Ch] [ebp-34h]
  int v21; // [esp+18h] [ebp-28h]
  int v22[7]; // [esp+20h] [ebp-20h] BYREF
  __int16 v23; // [esp+3Eh] [ebp-2h]
  int v24; // [esp+44h] [ebp+4h]

  if ( a2 == -1 && aP2 == (ProgressScreenClass *)-1 ) /*0x642c9a*/
  {
    v20 = *((char *)this + 97); /*0x642cb1*/
    FoundationSize = Building::GetFoundationSize(v22, 0); /*0x642cb5*/
    v8 = 0; /*0x642cbc*/
    Default = 0; /*0x642cc2*/
    v21 = FoundationSize[2]; /*0x642cce*/
    v19 = FoundationSize[3] + 6; /*0x642cd8*/
    if ( (unsigned char)aP4 ) /*0x642ce2*/
    {
      Default = BuildingType::FindDefault(0); /*0x642ceb*/
      if ( Default ) /*0x642cef*/
      {
        v8 = (*(int (**)(int))(*(unsigned int *)Default + 124))(Default); /*0x642cfc*/
        Default = (*(int (**)(int))(*(unsigned int *)Default + 128))(Default); /*0x642d04*/
      }
    }
    Instance = TextRenderer::GetInstance(); /*0x642d10*/
    v10 = v22; /*0x642d14*/
    v24 = 15; /*0x642d18*/
    do /*0x642d3d*/
    {
      *(unsigned short *)v10 = *(unsigned short *)CharToWideString(MEMORY[0x8258C0]); /*0x642d2d*/
      v10 = (int *)((char *)v10 + 2); /*0x642d35*/
      --v24; /*0x642d39*/
    }
    while ( v24 ); /*0x642d3d*/
    v23 = 0; /*0x642d4c*/
    v11 = Text::MeasureWidth((int)v22, 0); /*0x642d53*/
    if ( v19 > Default ) /*0x642d6b*/
      Default = v19; /*0x642d6d*/
    if ( Default <= Instance->referenceCount ) /*0x642d71*/
      Default = Instance->referenceCount; /*0x642d73*/
    v12 = v8 + v11 + v21 + 36; /*0x642d79*/
    v13 = Default + 4; /*0x642d7c*/
    if ( v20 > 1 ) /*0x642d82*/
      v13 *= v20; /*0x642d87*/
    Viewport = Display::GetViewport(v22); /*0x642d8d*/
    v15 = Viewport[2] - v12; /*0x642dac*/
    v16 = Viewport[3] - v13; /*0x642db0*/
    *((unsigned int *)this + 26) = v15 / 2; /*0x642dbb*/
    *((unsigned int *)this + 27) = v16 / 2; /*0x642dbe*/
  }
  else
  {
    *((unsigned int *)this + 26) = a2; /*0x642dc4*/
    *((unsigned int *)this + 27) = aP2; /*0x642dc7*/
  }
  *(unsigned int *)&this->__pad_4C[4] = aP3; /*0x642dd6*/
  *((unsigned char *)this + 112) = (unsigned char)aP4; /*0x642dd9*/
  *((unsigned char *)this + 113) = a6; /*0x642ddc*/
  return a6; /*0x642ddf*/

}
}
// 0x642EF0
namespace gamemd {
void * TextRenderer::MeasureBuilding2()
{

  unsigned int *FoundationSize; // eax
  int v2; // ebp
  int v3; // edi
  int Default; // eax
  int v5; // esi
  AbstractClass *Instance; // ebx
  CampaignScore *v10; // esi
  int v8; // eax
  int referenceCount; // ebx
  int *result; // eax
  int v11; // edi
  int v12; // [esp+10h] [ebp-34h]
  CampaignScore *v16; // [esp+1Ch] [ebp-28h]
  unsigned int v14[7]; // [esp+24h] [ebp-20h] BYREF
  __int16 v15; // [esp+42h] [ebp-2h]
  unsigned int *arg0; // [esp+48h] [ebp+4h]
  int *v17; // [esp+4Ch] [ebp+8h]
  int v18; // [esp+50h] [ebp+Ch]
  char v19; // [esp+54h] [ebp+10h]
  int v20; // [esp+54h] [ebp+10h]

  FoundationSize = Building::GetFoundationSize(v14, 0); /*0x642f01*/
  v2 = 0; /*0x642f08*/
  v3 = 0; /*0x642f0e*/
  v16 = (CampaignScore *)FoundationSize[2]; /*0x642f1a*/
  v12 = FoundationSize[3] + 6; /*0x642f24*/
  if ( v19 ) /*0x642f2e*/
  {
    Default = BuildingType::FindDefault(0); /*0x642f32*/
    v5 = Default; /*0x642f37*/
    if ( Default ) /*0x642f3b*/
    {
      v2 = (*(int (**)(int))(*(unsigned int *)Default + 124))(Default); /*0x642f44*/
      v3 = (*(int (**)(int))(*(unsigned int *)v5 + 128))(v5); /*0x642f50*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x642f5c*/
  v10 = (CampaignScore *)v14; /*0x642f5e*/
  v20 = 15; /*0x642f62*/
  do /*0x642f86*/
  {
    *(unsigned short *)v10->__pad_0 = *(unsigned short *)CharToWideString(MEMORY[0x8258C0]); /*0x642f7b*/
    v10 = (CampaignScore *)((char *)v10 + 2); /*0x642f7e*/
    --v20; /*0x642f82*/
  }
  while ( v20 ); /*0x642f86*/
  v15 = 0; /*0x642f91*/
  v8 = Text::MeasureWidth((int)v14, 0); /*0x642f98*/
  referenceCount = Instance->referenceCount; /*0x642fa1*/
  *arg0 = (char *)&v16->CampaignScore_field_0x18 + v2 + v8 + 2; /*0x642fb4*/
  if ( v12 > v3 ) /*0x642fb6*/
    v3 = v12; /*0x642fb8*/
  result = v17; /*0x642fba*/
  *v17 = v3; /*0x642fc0*/
  if ( v3 <= referenceCount ) /*0x642fc2*/
    v3 = referenceCount; /*0x642fc4*/
  *v17 = v3; /*0x642fc6*/
  *arg0 += 10; /*0x642fd1*/
  v11 = *v17 + 4; /*0x642fd5*/
  *v17 = v11; /*0x642fdb*/
  if ( v18 > 1 ) /*0x642fe3*/
    *v17 = v18 * v11; /*0x642fe8*/
  return result; /*0x642fdf*/

}
}
// 0x4A60E0
namespace gamemd {
unsigned int * TextRenderer::Printf(ConvertClass * aP0, size_t BufferCount, ObjectClass * aP2, ConvertClass * aP3, int a2, int a6, int a7, int a8, CampaignScore * aP8)
{

  wchar_t *v9; // ecx
  AbstractClass *v11; // edx
  AbstractClass v12[29]; // [esp-10h] [ebp-418h] BYREF

  if ( BufferCount ) /*0x4a60ec*/
  {
    vswprintf( /*0x4a60fc*/
      (wchar_t *const)&v12[0].nextArrayIndex,
      (CampaignScore *)BufferCount,
      (ObjectClass *)&aP8,
      (SessionClass *)((unsigned int *)(v12))[0].uniqueId);
    *(unsigned int *)&v12[((unsigned int *)(0].__pad_0))[12] = 1; /*0x4a6119*/
    *(unsigned int *)&v12[((unsigned int *)(0].__pad_0))[8] = a8; /*0x4a611b*/
    *(unsigned int *)&v12[((unsigned int *)(0].__pad_0))[4] = a7; /*0x4a6123*/
    *(unsigned int *)v12[0].__pad_0 = a6; /*0x4a612b*/
    v9 = (wchar_t *)RenderTextLabel((int *)aP2->__pad_0, (AbstractClass *)aP3, (int *)a2, v12[0]); /*0x4a6143*/
    *(unsigned int *)aP0->__pad_0 = *(unsigned int *)v9; /*0x4a614e*/
    *(unsigned int *)&aP0-((unsigned int *)(>field_2))[2] = *((unsigned int *)v9 + 1); /*0x4a6153*/
    return aP0->__pad_0; /*0x4a6145*/
  }
  else
  {
    *(unsigned int *)&v12[((unsigned int *)(0].__pad_0))[12] = 1; /*0x4a6172*/
    *(unsigned int *)&v12[((unsigned int *)(0].__pad_0))[8] = a8; /*0x4a6174*/
    *(unsigned int *)&v12[((unsigned int *)(0].__pad_0))[4] = a7; /*0x4a617c*/
    *(unsigned int *)v12[0].__pad_0 = a6; /*0x4a6184*/
    v11 = (AbstractClass *)RenderTextLabel((int *)aP2->__pad_0, (AbstractClass *)aP3, (int *)a2, v12[0]); /*0x4a619a*/
    *(unsigned int *)aP0->__pad_0 = *(unsigned int *)v11->__pad_0; /*0x4a61a5*/
    *(unsigned int *)&aP0-((unsigned int *)(>field_2))[2] = *(unsigned int *)&v11->__pad_0[4]; /*0x4a61aa*/
    return aP0->__pad_0; /*0x4a619c*/
  }

}
} // namespace gamemd

// 0x727CD0
namespace gamemd {
TriggerTypeClass * TextRenderer::Destructor(void * Block, char a2)
{

  TriggerClass::ProcessEvents((int)Block); /*0x727cd3*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x727cdd*/
    RA2_OPDEL(Block); /*0x727ce0*/
  return (TriggerTypeClass *)Block; /*0x727cea*/

}
} // namespace gamemd
