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
#include "e4/classes/E4Recv_4AF2A0_e4.hpp"
#include "e4/classes/MSEngine_e4.hpp"
#include "e4/classes/Text_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"

// 0x4A60D0
namespace gamemd {  // G42.18 ns repair
void * TextRenderer::GetInstance()
{

  return (void *)(g_FogOfWarState); /*0x4a60d5*/

}
}  // G42.18 ns repair
// 0x4B96A0
namespace gamemd {
int * TextRenderer::RenderCentered(int a1, int a2, ObjectClass * aP2, int * a3, wchar_t * Format, char a6, int a7, int _6C, int * a8, void * aSD, void * aYellow)
{
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // edx
  int v16; // edi
  int v17; // eax
  int v18; // edx
  int v19; // edi
  int v20; // eax
  unsigned int *v21; // eax
  int v23; // [esp-10h] [ebp-5Ch]
  int v24; // [esp-Ch] [ebp-58h]
  int v25; // [esp-8h] [ebp-54h]
  int v26; // [esp-4h] [ebp-50h]
  int v27; // [esp+14h] [ebp-38h] BYREF
  int v28; // [esp+18h] [ebp-34h] BYREF
  int v29; // [esp+1Ch] [ebp-30h]
  int v30; // [esp+20h] [ebp-2Ch] BYREF
  int v31; // [esp+24h] [ebp-28h]
  int v32; // [esp+28h] [ebp-24h]
  int v33; // [esp+2Ch] [ebp-20h]
  unsigned int v34[4]; // [esp+30h] [ebp-1Ch] BYREF
  char v35[12]; // [esp+40h] [ebp-Ch] BYREF

  TextRenderer::GetInstance(); /*0x4b96c5*/
  swprintf(&word_8A0870, (const size_t)&aSD, Format, a2); /*0x4b96dc*/
  swprintf(&word_8A08C0, (const size_t)&aSD, Format, a1); /*0x4b96ed*/
  if ( a6 ) /*0x4b96f7*/
  {
    v11 = *a4 - Text::MeasureWidth((int)&word_8A0870, 0) / 2; /*0x4b971b*/
    v12 = *a4 - Text::MeasureWidth((int)&word_8A08C0, 0) / 2; /*0x4b972b*/
  }
  else
  {
    v11 = *a4; /*0x4b9733*/
    v12 = *a4; /*0x4b9735*/
  }
  v13 = a4[1]; /*0x4b9737*/
  v14 = 110; /*0x4b9740*/
  if ( v11 > v12 ) /*0x4b974a*/
  {
    v14 = v11 - v12 + 110; /*0x4b9750*/
    v11 = v12; /*0x4b9752*/
  }
  if ( v14 + v11 < v12 + 110 ) /*0x4b9766*/
    v14 = v12 - v11 + 111; /*0x4b976d*/
  v33 = v11; /*0x4b9784*/
  v29 = v11; /*0x4b9788*/
  v34[1] = v14; /*0x4b9790*/
  v31 = v14; /*0x4b9794*/
  v34[0] = v13; /*0x4b9798*/
  v15 = *a3; /*0x4b979c*/
  v30 = v13; /*0x4b979e*/
  v34[2] = 15; /*0x4b97a4*/
  v32 = 15; /*0x4b97a8*/
  v16 = (*(int (**)(int *))(v15 + 124))(a3); /*0x4b97b5*/
  v17 = (*(int (**)(int))(*(unsigned int *)g_DSurface_Hidden + 124))(g_DSurface_Hidden); /*0x4b97b9*/
  v18 = *a3; /*0x4b97c5*/
  v30 += (v17 - v16) / -2; /*0x4b97cd*/
  v19 = (*(int (**)(int *))(v18 + 128))(a3); /*0x4b97df*/
  v31 += ((*(int (**)(int))(*(unsigned int *)g_DSurface_Hidden + 128))(g_DSurface_Hidden) - v19) / -2; /*0x4b97fc*/
  v28 = 0; /*0x4b982a*/
  v29 = 0; /*0x4b982e*/
  BlitterDrawSHP((int *)g_DSurface_Hidden, a8, a3, &v30, &v28, v34, 0, a9, 0, 0, 1000, 0, 0); /*0x4b9832*/
  v20 = FindBuildingAnimByName(aYellow, 1); /*0x4b9847*/
  v21 = (unsigned int *)(*(int (**)(int, char *, wchar_t *, int, unsigned int, int))(*(unsigned int *)g_DSurface_Hidden + 120))( /*0x4b985f*/
                    g_DSurface_Hidden,
                    v35,
                    Format,
                    v20,
                    0,
                    v27);
  return TextRenderer::DrawText(&v27, (size_t)&word_8A0870, g_DSurface_Hidden, v21, v23, v24, v25, v26); /*0x4b987c*/
}
}
// 0x642C80
namespace gamemd {
int TextRenderer::MeasureBuilding(int a2, int aP2, int aP3, char aP4, char a6, void *a6_1)
{

  int result; // eax
  unsigned int *FoundationSize; // eax
  int v9; // ebx
  int Default; // edi
  int *v11; // ebp
  int v12; // eax
  int v13; // ebp
  int v14; // edi
  int *Viewport; // eax
  int v16; // kr04_4
  int Instance; // [esp+4h] [ebp-3Ch]
  int v18; // [esp+8h] [ebp-38h]
  int v19; // [esp+Ch] [ebp-34h]
  int v20; // [esp+18h] [ebp-28h]
  int v21[7]; // [esp+20h] [ebp-20h] BYREF
  __int16 v22; // [esp+3Eh] [ebp-2h]
  int v23; // [esp+44h] [ebp+4h]

  result = a2; /*0x642c80*/
  if ( a2 == -1 && aP2 == -1 ) /*0x642c9a*/
  {
    v19 = this->u32_61; /*0x642cb1*/
    FoundationSize = Building::GetFoundationSize(v21, 0); /*0x642cb5*/
    v9 = 0; /*0x642cbc*/
    Default = 0; /*0x642cc2*/
    v20 = FoundationSize[2]; /*0x642cce*/
    v18 = FoundationSize[3] + 6; /*0x642cd8*/
    if ( aP4 ) /*0x642ce2*/
    {
      Default = BuildingType::FindDefault(0); /*0x642ceb*/
      if ( Default ) /*0x642cef*/
      {
        v9 = (*(int (**)(int))(*(unsigned int *)Default + 124))(Default); /*0x642cfc*/
        Default = (*(int (**)(int))(*(unsigned int *)Default + 128))(Default); /*0x642d04*/
      }
    }
    Instance = (int)(TextRenderer::GetInstance()); /*0x642d10*/
    v11 = v21; /*0x642d14*/
    v23 = 15; /*0x642d18*/
    do /*0x642d3d*/
    {
      *(unsigned short *)v11 = *(unsigned short *)CharToWideString(g_Str_W); /*0x642d2d*/
      v11 = (int *)((char *)v11 + 2); /*0x642d35*/
      --v23; /*0x642d39*/
    }
    while ( v23 ); /*0x642d3d*/
    v22 = 0; /*0x642d4c*/
    v12 = Text::MeasureWidth((int)v21, 0); /*0x642d53*/
    if ( v18 > Default ) /*0x642d6b*/
      Default = v18; /*0x642d6d*/
    if ( Default <= *(unsigned int *)(Instance + 28) ) /*0x642d71*/
      Default = *(unsigned int *)(Instance + 28); /*0x642d73*/
    v13 = v9 + v12 + v20 + 36; /*0x642d79*/
    v14 = Default + 4; /*0x642d7c*/
    if ( v19 > 1 ) /*0x642d82*/
      v14 *= v19; /*0x642d87*/
    Viewport = (int *)(Display::GetViewport(v21)); /*0x642d8d*/
    v16 = Viewport[2] - v13; /*0x642dac*/
    result = (Viewport[3] - v14) / 2; /*0x642db9*/
    this->u32_1A = v16 / 2; /*0x642dbb*/
    this->u32_1B = result; /*0x642dbe*/
  }
  else
  {
    this->u32_1A = a2; /*0x642dc4*/
    this->u32_1B = aP2; /*0x642dc7*/
  }
  LOBYTE(result) = a6; /*0x642dd2*/
  this->u32_14 = aP3; /*0x642dd6*/
  this->u32_70 = aP4; /*0x642dd9*/
  this->u32_71 = a6; /*0x642ddc*/
  return result; /*0x642ddf*/

}
}
// 0x642EF0
namespace gamemd {
void * TextRenderer::MeasureBuilding2(unsigned int *a1, int *a2, int a3, char a4, int aP0, int aP2, int aP3, int a6, int a7, int a8, int aP8)
{

  unsigned int *FoundationSize; // eax
  int v5; // ebp
  int v6; // edi
  int Default; // eax
  int v8; // esi
  int Instance; // ebx
  unsigned short *v10; // esi
  int v11; // eax
  int v12; // ebx
  int *result; // eax
  int v14; // edi
  int v15; // [esp+10h] [ebp-34h]
  int v16; // [esp+1Ch] [ebp-28h]
  unsigned int v17[7]; // [esp+24h] [ebp-20h] BYREF
  __int16 v18; // [esp+42h] [ebp-2h]
  int v19; // [esp+54h] [ebp+10h]

  FoundationSize = Building::GetFoundationSize(v17, 0); /*0x642f01*/
  v5 = 0; /*0x642f08*/
  v6 = 0; /*0x642f0e*/
  v16 = FoundationSize->vtable3; /*0x642f1a*/
  v15 = FoundationSize[3] + 6; /*0x642f24*/
  if ( a4 ) /*0x642f2e*/
  {
    Default = BuildingType::FindDefault(0); /*0x642f32*/
    v8 = Default; /*0x642f37*/
    if ( Default ) /*0x642f3b*/
    {
      v5 = (*(int (**)(int))(*(unsigned int *)Default + 124))(Default); /*0x642f44*/
      v6 = (*(int (**)(int))(*(unsigned int *)v8 + 128))(v8); /*0x642f50*/
    }
  }
  Instance = (int)(TextRenderer::GetInstance()); /*0x642f5c*/
  v10 = (unsigned short *)(v17); /*0x642f5e*/
  v19 = 15; /*0x642f62*/
  do /*0x642f86*/
  {
    *v10++ = *(unsigned short *)CharToWideString(g_Str_W); /*0x642f7b*/
    --v19; /*0x642f82*/
  }
  while ( v19 ); /*0x642f86*/
  v18 = 0; /*0x642f91*/
  v11 = Text::MeasureWidth((int)v17, 0); /*0x642f98*/
  v12 = *(unsigned int *)(Instance + 28); /*0x642fa1*/
  *a1 = v5 + v11 + v16 + 26; /*0x642fb4*/
  if ( v15 > v6 ) /*0x642fb6*/
    v6 = v15; /*0x642fb8*/
  result = a2; /*0x642fba*/
  *a2 = v6; /*0x642fc0*/
  if ( v6 <= v12 ) /*0x642fc2*/
    v6 = v12; /*0x642fc4*/
  *a2 = v6; /*0x642fc6*/
  *a1 += 10; /*0x642fd1*/
  v14 = *a2 + 4; /*0x642fd5*/
  *a2 = v14; /*0x642fdb*/
  if ( a3 > 1 ) /*0x642fe3*/
    *a2 = a3 * v14; /*0x642fe8*/
  return result; /*0x642fdf*/

}
}
// 0x4A60E0
namespace gamemd {
unsigned int * TextRenderer::Printf(ConvertClass * aP0, size_t BufferCount, ObjectClass * aP2, ConvertClass * aP3, int a2, int a6, int a7, int a8, CampaignScore * aP8)
{
  unsigned int *v9; // ecx
  unsigned int *v11; // edx
  va_list v12; // [esp+0h] [ebp-408h]
  wchar_t Buffer[512]; // [esp+8h] [ebp-400h] BYREF

  if ( BufferCount ) /*0x4a60ec*/
  {
    vswprintf(Buffer, BufferCount, &aP8, v12); /*0x4a60fc*/
    v9 = (unsigned int *)RenderTextLabel(aP2, aP3, a2, a6, a7, a8, 1); /*0x4a6143*/
    *(_DWORD *)aP0 = *v9; /*0x4a614e*/
    aP0[1] = v9[1]; /*0x4a6153*/
    return (unsigned int *)(aP0); /*0x4a6145*/
  }
  else
  {
    v11 = (unsigned int *)RenderTextLabel(aP2, aP3, a2, a6, a7, a8, 1); /*0x4a619a*/
    *(_DWORD *)aP0 = *v11; /*0x4a61a5*/
    aP0[1] = v11[1]; /*0x4a61aa*/
    return (unsigned int *)(aP0); /*0x4a619c*/
  }
}
} // namespace gamemd

// 0x727CD0
namespace gamemd {
TriggerTypeClass * TextRenderer::Destructor(char a2)
{
  this->TriggerClass::ProcessEvents(); /*0x727cd3*/
  if ( (a2 & 1) != 0 ) /*0x727cdd*/
    operator delete((void *)(this)); /*0x727ce0*/
  return (gamemd::TriggerTypeClass *)(this); /*0x727cea*/
}
} // namespace gamemd
