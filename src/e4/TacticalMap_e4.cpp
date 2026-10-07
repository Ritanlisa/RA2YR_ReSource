// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Matrix2D_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/TacticalMap_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Render_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "app/cmdline.hpp"
#include "e4/classes/ColorStruct_e4.hpp"
#include "e4/classes/LightningStorm_e4.hpp"
#include "e4/classes/LoadScreen_e4.hpp"
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/PsyDom_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/Text_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/NukeFlash_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/Coord2D_e4.hpp"
#include "e4/classes/Matrix3x3_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "classes/TacticalMap_e4.hpp"  // G42.57w9 method-carrier supply
#include "e4/classes/Vector2_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/BuildingClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/IsoCoord_e4.hpp"  // G57w10 D supply

// 0x484680
namespace gamemd {
ScenarioClass * * TacticalMap::ComputeScreenTint()
{

  int16_t v2; // dx
  int16_t v3; // ax
  int16_t v4; // dx
  int16_t v5; // ax
  bool v6; // zf
  int16_t v7; // ax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int16_t v11; // cx
  int v12; // eax
  int16_t v13; // dx
  int16_t v14; // cx
  int16_t v15; // ax
  int16_t v16; // ax

  v2 = *((unsigned short *)this + 132) + (int16_t)(1000 * LOWORD(((AbstractClass *)dword_A8B230)[378].vtable1)) / 100; /*0x4846ab*/
  *((unsigned short *)this + 133) = v2; /*0x4846b2*/
  *((unsigned short *)this + 135) = v2; /*0x4846b9*/
  if ( (uint8_t)((LightningStorm *)this)->IsActive() ) /*0x4846c0*/
  {
    v3 = *((char *)this + 283); /*0x4846cf*/
    *((unsigned short *)this + 133) += v3 * LOWORD(((AbstractClass *)dword_A8B230)[379].uniqueId) - LOWORD(((AbstractClass *)dword_A8B230)[379].vtable3); /*0x4846ec*/
    v4 = (v3 + 4) * LOWORD(((AbstractClass *)dword_A8B230)[379].uniqueId) - LOWORD(((AbstractClass *)dword_A8B230)[379].vtable3); /*0x484703*/
  }
  else if ( (uint8_t)((PsyDom *)this)->IsActive() ) /*0x48470f*/
  {
    v5 = *((char *)this + 283); /*0x48471e*/
    *((unsigned short *)this + 133) += v5 * LOWORD(((AbstractClass *)dword_A8B230)[380].NeedsSaveOrLink) - LOWORD(((AbstractClass *)dword_A8B230)[380].referenceCount); /*0x48473b*/
    v4 = (v5 + 4) * LOWORD(((AbstractClass *)dword_A8B230)[380].NeedsSaveOrLink) - LOWORD(((AbstractClass *)dword_A8B230)[380].referenceCount); /*0x484752*/
  }
  else
  {
    v6 = !NukeFlash::IsActive(); /*0x484766*/
    v7 = *((char *)this + 283); /*0x484768*/
    if ( v6 ) /*0x484770*/
    {
      *((unsigned short *)this + 133) += v7 * LOWORD(((AbstractClass *)dword_A8B230)[378].referenceCount) - LOWORD(((AbstractClass *)dword_A8B230)[378].nextArrayIndex); /*0x4847bc*/
      v4 = (v7 + 4) * LOWORD(((AbstractClass *)dword_A8B230)[378].referenceCount) - LOWORD(((AbstractClass *)dword_A8B230)[378].nextArrayIndex); /*0x4847d3*/
    }
    else
    {
      *((unsigned short *)this + 133) += v7 * LOWORD(((AbstractClass *)dword_A8B230)[380].vtable1) - LOWORD(((AbstractClass *)dword_A8B230)[380].vtable0); /*0x484787*/
      v4 = (v7 + 4) * LOWORD(((AbstractClass *)dword_A8B230)[380].vtable1) - LOWORD(((AbstractClass *)dword_A8B230)[380].vtable0); /*0x48479e*/
    }
  }
  v8 = *((int16_t *)this + 133); /*0x4847da*/
  v9 = *((unsigned int *)this + 65); /*0x4847e1*/
  *((unsigned short *)this + 135) += v4; /*0x4847e7*/
  *((unsigned short *)this + 134) = (unsigned int)(v9 * v8) >> 16; /*0x4847f4*/
  v10 = v9 * *((int16_t *)this + 135); /*0x484802*/
  v11 = *((unsigned short *)this + 133); /*0x484805*/
  v12 = v10 >> 16; /*0x48480c*/
  *((unsigned short *)this + 135) = v12; /*0x484814*/
  if ( v11 >= 2000 ) /*0x48481e*/
    v11 = 2000; /*0x484820*/
  *((unsigned short *)this + 133) = v11; /*0x484825*/
  v13 = *((unsigned short *)this + 134); /*0x484838*/
  if ( v13 >= 2000 ) /*0x48483b*/
    v13 = 2000; /*0x48483d*/
  *((unsigned short *)this + 134) = v13; /*0x484846*/
  v14 = v12; /*0x48484d*/
  if ( (int16_t)v12 >= 2000 ) /*0x484850*/
    v14 = 2000; /*0x484852*/
  v15 = *((unsigned short *)this + 133); /*0x484857*/
  *((unsigned short *)this + 135) = v14; /*0x48485e*/
  if ( v15 <= 0 ) /*0x484868*/
    v15 = 0; /*0x48486f*/
  *((unsigned short *)this + 133) = v15; /*0x484874*/
  if ( v13 <= 0 ) /*0x48487b*/
    v16 = 0; /*0x484882*/
  else
    v16 = v13; /*0x48487d*/
  *((unsigned short *)this + 134) = v16; /*0x484887*/
  if ( v14 <= 0 ) /*0x48488e*/
  {
    *((unsigned short *)this + 135) = 0; /*0x48489e*/
    return 0; /*0x48489c*/
  }
  else
  {
    *((unsigned short *)this + 135) = v14; /*0x484893*/
    return (gamemd::ScenarioClass **)(v14); /*0x484890*/
  }

}
} // namespace gamemd
// 0x4F4480
namespace gamemd {
int TacticalMap::Redraw()
{

  AudioStream *v1; // ebp
  int v3; // eax
  int result; // eax
  ObjectClass *v5; // [esp+0h] [ebp-10h]
  int v6; // [esp+8h] [ebp-8h]
  bool v7; // [esp+Ch] [ebp-4h]

  v1 = (gamemd::AudioStream *)(g_DSurface_Hidden_2);
  g_DSurface_Hidden_2 = DSurface_Composite; /*0x4f4492*/
(*(void (**)(void *, AudioStream *, unsigned int))(*(unsigned int *)&((MouseClass *)dword_887640)->q_100))( /*0x4f44a2*/ dword_887640, (AudioStream *)(DSurface_Composite), 0);



  v3 = ((unsigned int *)&this->vfptr)[3]; /*0x4f44a5*/
  ((unsigned int *)&this->vfptr)[3] = 0; /*0x4f44a8*/
  LOBYTE(v6) = v3 != 0; /*0x4f44b7*/
  v7 = v3 == 2; /*0x4f44be*/
  if ( !UI_Helper() ) /*0x4f44c2*/
  {
    TacticalMap::Render((int)g_TacticalClass_Instance, (int)DSurface_Composite, v6, 0); /*0x4f44df*/
    TacticalMap::Render((int)g_TacticalClass_Instance, (int)DSurface_Composite, v6, 1); /*0x4f44f4*/
    (*(void ((gamemd::GScreenClass *)(**))(GScreenClass *, bool))(((unsigned int *)&this->vfptr)[0] + 64))(this, v7); /*0x4f4502*/
    TacticalMap::Render((int)g_TacticalClass_Instance, (int)DSurface_Composite, v6, 2); /*0x4f4515*/
  }
  if ( byte_B0B519 && !((unsigned int *)&stru_A8EB00)[391] ) /*0x4f452b*/
  {
(*(void (**)(void *, DSurface *, int))(*(unsigned int *)&((MouseClass *)dword_887640)->q_100))( /*0x4f453d*/ dword_887640, (DSurface *)(DSurface_Sidebar), 1);



    byte_B0B519 = 0; /*0x4f4540*/
  }
  if ( *(unsigned int *)((char *)&stru_A8EB00 + 880) ) /*0x4f454f*/
    (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)&stru_A8EB00 + 880) + 44))(*(unsigned int *)((char *)&stru_A8EB00 + 880), 0); /*0x4f4555*/
  TacticalMap::DrawCursor((TacticalMap *)&stru_A8BB1C.__pad_87[189]); /*0x4f455d*/
  if ( *(unsigned int *)&stru_88732C.__pad_1C[32] ) /*0x4f456a*/
    (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)&stru_88732C.__pad_1C[32] + 12))( /*0x4f4570*/
      *(unsigned int *)&stru_88732C.__pad_1C[32],
      0);
  if ( byte_A8B8B4 ) /*0x4f457a*/
    DrawHUD( (void *)(v5)); /*0x4f457e*/
(*(void (**)(void *, AudioStream *, unsigned int))(*(unsigned int *)&((MouseClass *)dword_887640)->q0F0))( /*0x4f4593*/ dword_887640, (AudioStream *)(DSurface_Composite), 0);



  result = (*(int (**)(GScreenClass *))(((unsigned int *)&this->vfptr)[0] + 68))((GScreenClass *)(this)); /*0x4f459a*/
  g_DSurface_Hidden_2 = (int)(v1); /*0x4f459d*/
  return result; /*0x4f45a3*/

}
} // namespace gamemd
// 0x5AEA10
namespace gamemd {
void TacticalMap::MultiplyByScalar(ObjectClass * aP1, void *a2)
{

  *this = aP1 * *this; /*0x5aea16*/
  *((unsigned int *)this + 4) = (unsigned int)(aP1)* *((unsigned int *)this + 4); /*0x5aea1f*/
  *((unsigned int *)this + 8) = (unsigned int)(aP1)* *((unsigned int *)this + 8); /*0x5aea29*/
  *((unsigned int *)this + 1) = (unsigned int)(aP1)* *((unsigned int *)this + 1); /*0x5aea33*/
  *((unsigned int *)this + 5) = (unsigned int)(aP1)* *((unsigned int *)this + 5); /*0x5aea3d*/
  *((unsigned int *)this + 9) = (unsigned int)(aP1)* *((unsigned int *)this + 9); /*0x5aea47*/
  *((unsigned int *)this + 2) = (unsigned int)(aP1)* *((unsigned int *)this + 2); /*0x5aea51*/
  *((unsigned int *)this + 6) = (unsigned int)(aP1)* *((unsigned int *)this + 6); /*0x5aea5b*/
  *((unsigned int *)this + 10) = (unsigned int)(aP1)* *((unsigned int *)this + 10); /*0x5aea65*/

}
} // namespace gamemd
// 0x5D49A0
namespace gamemd {
char TacticalMap::DrawCursor(void *a1, void *a2, void *a3, void *a4)
{

  char result; // al
  int v3; // edi
  unsigned int *v4; // eax
  int v5; // edx
  unsigned int *v6; // eax
  int v7; // [esp-Ch] [ebp-38h]
  int v8; // [esp-4h] [ebp-30h]
  int v9; // [esp+8h] [ebp-24h] BYREF
  unsigned int v10[2]; // [esp+Ch] [ebp-20h] BYREF
  int v11; // [esp+14h] [ebp-18h] BYREF
  unsigned char v12[16]; // [esp+1Ch] [ebp-10h] BYREF

  v9 = 0; /*0x5d49a6*/
  result = BYTE1(this->m_TintFactor); /*0x5d49b4*/
  if ( result ) /*0x5d49b9*/
  {
    (*(void (**)(void *))(*(unsigned int *)&((MouseClass *)dword_887640)->q_30))(dword_887640);  /*0x5d49c8*/
    (*(void (**)(unsigned int, int))(**((unsigned int **)this + 9) + 108))(*((unsigned int *)this + 9), 1); /*0x5d49d2*/
    ((TextRenderer *)this)->GetInstance(); /*0x5d49db*/
    v3 = Text::MeasureWidth(*(unsigned int *)(*((unsigned int *)this + 9) + 48), 0); /*0x5d49f8*/
    if ( *((unsigned short *)this + 348) /*0x5d4a1b*/
      && *((unsigned int *)this + 172) - *((unsigned int *)this + 173) < (unsigned int)(this->TacticalMap_field_10) - 1
      && (*(uint8_t (**)(unsigned int))(**((unsigned int **)this + 9) + 88))(*((unsigned int *)this + 9)) )
    {
      LOWORD(v9) = *((unsigned short *)this + 348); /*0x5d4a29*/
      v4 = (unsigned int *)*((unsigned int *)this + 9); /*0x5d4a2e*/
      v5 = v4[3]; /*0x5d4a31*/
      v10[1] = v4[4]; /*0x5d4a39*/
      v10[0] = v3 + v5; /*0x5d4a3d*/
      v8 = v4[11]; /*0x5d4a4c*/
      v7 = *(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * v4[13]); /*0x5d4a56*/
v6 = (unsigned int *)(*(int (**)(AudioStream *, unsigned char *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x5d4a65*/ g_DSurface_Hidden_2, (unsigned char *)(v12));


      TextRenderer::DrawText(&v11, (size_t)&v9, (int)g_DSurface_Hidden_2, v6, (int)v10, v7, 0, v8); /*0x5d4a79*/
    }
    result = (*(int (**)(void *))(*(unsigned int *)&((MouseClass *)dword_887640)->q_40))(dword_887640);  /*0x5d4a89*/
  }
  if ( this->TacticalMap_field_00 ) /*0x5d4a8d*/
    return (*(char (**)(int, int))(*(unsigned int *)this->TacticalMap_field_00 + 44))( /*0x5d4a98*/
             this->TacticalMap_field_00,
             1);
  return result; /*0x5d4a8f*/

}
} // namespace gamemd
// 0x6D1C20
namespace gamemd {
void TacticalMap::Construct(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6)
{

  float v3; // [esp+0h] [ebp-10h]
  float v4; // [esp+0h] [ebp-10h]
  float v5; // [esp+0h] [ebp-10h]

  ((AbstractClass *)((AbstractClass *)this))->Constructor(); /*0x6d1c25*/
  this->Tactical_field_0xA8 = (unsigned int)((IUnknown *)-1); /*0x6d1c2c*/
  this->__pad_AC[0] = 0; /*0x6d1c36*/
  this->__pad_AC[1] = 0; /*0x6d1c3c*/
  *(unsigned int *)&this->__pad_AC[20] = 0; /*0x6d1c42*/
  *(unsigned int *)&this->__pad_AC[4] = 0; /*0x6d1c48*/
  *(unsigned int *)&this->__pad_AC[8] = 0; /*0x6d1c4e*/
  *(unsigned int *)&this->__pad_AC[12] = 0; /*0x6d1c54*/
  *(unsigned int *)&this->__pad_AC[16] = 0; /*0x6d1c5a*/
  *(unsigned int *)&this->__pad_AC[24] = 1072693248; /*0x6d1c60*/
  *(unsigned int *)&this->__pad_AC[28] = dword_B0CE08; /*0x6d1c6f*/
  *(unsigned int *)&this->__pad_AC[32] = dword_B0CE0C; /*0x6d1c7b*/
  *(unsigned int *)&this->__pad_AC[36] = dword_B0CE08; /*0x6d1c87*/
  *(unsigned int *)&this->__pad_AC[40] = dword_B0CE0C; /*0x6d1c92*/
  *(unsigned int *)&this->__pad_AC[44] = 0; /*0x6d1c98*/
  *(unsigned int *)&this->__pad_AC[48] = 0; /*0x6d1c9e*/
  *(unsigned int *)&this->__pad_AC[52] = 0; /*0x6d1ca4*/
  *(unsigned int *)&this->__pad_11F[3141] = 0; /*0x6d1caa*/
  *(unsigned int *)&this->__pad_11F[3145] = 0; /*0x6d1cb0*/
  *(unsigned int *)&this->__pad_11F[3149] = 0; /*0x6d1cb6*/
  *(unsigned int *)&this->__pad_11F[3153] = 0; /*0x6d1cbc*/
  *(unsigned int *)&this->__pad_11F[3157] = 0; /*0x6d1cc2*/
  *(unsigned int *)&this->__pad_11F[3161] = 0; /*0x6d1cc8*/
  this->__pad_11F[3165] = 1; /*0x6d1cce*/
  this->__pad_11F[3166] = 0; /*0x6d1cd5*/
  this->__pad_11F[3167] = 0; /*0x6d1cdb*/
  *(unsigned int *)&this->__pad_11F[3169] = dword_B0CD60; /*0x6d1ced*/
  *(unsigned int *)&this->__pad_11F[3173] = dword_B0CD64; /*0x6d1cf8*/
  *(unsigned int *)&this->__pad_11F[3177] = dword_B0CD68; /*0x6d1d01*/
  *(unsigned int *)&this->__pad_11F[3181] = dword_B0CD6C; /*0x6d1d09*/
  *(unsigned int *)&this->__pad_11F[3185] = 0; /*0x6d1d0c*/
  *(unsigned int *)&this->__pad_11F[3189] = 0; /*0x6d1d12*/
  *(unsigned int *)&this->__pad_11F[3193] = 0; /*0x6d1d18*/
  *(unsigned int *)&this->__pad_11F[3197] = 0; /*0x6d1d1e*/
  *(unsigned int *)&this->__pad_11F[3201] = 0; /*0x6d1d2a*/
  this->Tactical_field_0xDA4 = (unsigned int)((AbstractClass *)TimerGetTicks()); /*0x6d1d35*/
  *(unsigned int *)&this->__pad_DA8[4] = 0; /*0x6d1d3b*/
  *(unsigned int *)&this->__pad_DA8[8] = 0; /*0x6d1d4e*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_Tactical); /*0x6d1d54*/
  *(unsigned int *)&this->Tactical_field_0x2[2] = (unsigned int)(&vt_Tactical); /*0x6d1d5a*/
  this->Tactical_field_0x8[0] = (int)&vt_Tactical; /*0x6d1d61*/
  this->Tactical_field_0xC[0] = (int)&vt_Tactical; /*0x6d1d68*/
  memset( (void *)(&this->__pad_AC[56]), 0, 0xC80u); /*0x6d1d6f*/
  *(unsigned short *)&this->__pad_10[20] = 0; /*0x6d1d77*/
  *(unsigned int *)&this->__pad_34[112] = -1; /*0x6d1d7d*/
  ((Matrix3x4*)((Matrix3x4 *)&this->Tactical_field_0xDB4))->Identity(); /*0x6d1d87*/
  v3 = dbl_B0CD88; /*0x6d1d95*/
  ((Matrix3x3 *)((int *)&this->Tactical_field_0xDB4))->RotateX(v3); /*0x6d1d98*/
  v4 = dbl_B0CE98; /*0x6d1da6*/
  ((Matrix2D *)((int *)&this->Tactical_field_0xDB4))->Rotate(v4); /*0x6d1da9*/
  v5 = 60.0 / dbl_B0CD78; /*0x6d1dbb*/
  TacticalMap::MultiplyByScalar( (ObjectClass *)((float *)&this->Tactical_field_0xDB4), (void *)(v5)); /*0x6d1dc0*/
  *((unsigned int *)this + 889) = 1082689742; /*0x6d1dca*/
  *((unsigned int *)this + 890) = 1091078350; /*0x6d1dd4*/
  *((unsigned int *)this + 891) = 0; /*0x6d1dda*/
  *((unsigned int *)this + 892) = 0; /*0x6d1de0*/
  *((unsigned int *)this + 893) = -1064793906; /*0x6d1de6*/
  *((unsigned int *)this + 894) = 1091078350; /*0x6d1df0*/
  *((unsigned int *)this + 895) = 0; /*0x6d1df6*/
  *((unsigned int *)this + 896) = 0; /*0x6d1dfc*/
  *((unsigned int *)this + 897) = 0; /*0x6d1e02*/
  *((unsigned int *)this + 898) = 0; /*0x6d1e08*/
  *((unsigned int *)this + 899) = 1065353216; /*0x6d1e0e*/
  *((unsigned int *)this + 900) = 0; /*0x6d1e18*/
  g_TacticalClass_Instance = (int)((LPPERSISTSTREAM)this); /*0x6d1e1e*/
  return (int)this->__pad_0; /*0x6d1e26*/

}
} // namespace gamemd
// 0x6D2B60
namespace gamemd {
void* TacticalMap::RenderCell(char arg0, AbstractClass * aP2, int a4, int a2)
{

  int v6; // esi
  int v7; // ebp
  int *v8; // eax
  int *v9; // eax
  int *v10; // eax
  int *v11; // ecx
  int v12; // edx
  int v13; // eax
  char *v14; // esi
  char *v15; // edi
  int result; // eax
  int v17; // ebp
  CellClass **v18; // edi
  int *Coords; // eax
  int *v20; // eax
  int v21; // ecx
  int v22; // [esp-8h] [ebp-78h]
  int v23; // [esp-4h] [ebp-74h]
  int v24; // [esp+10h] [ebp-60h]
  int v25; // [esp+14h] [ebp-5Ch] BYREF
  void *v26; // [esp+18h] [ebp-58h]
  int v27; // [esp+1Ch] [ebp-54h]
  Coord2D v28; // [esp+20h] [ebp-50h] BYREF
  int v29[2]; // [esp+28h] [ebp-48h] BYREF
  int v30; // [esp+30h] [ebp-40h] BYREF
  int v31; // [esp+34h] [ebp-3Ch]
  int v32; // [esp+38h] [ebp-38h]
  int v33; // [esp+3Ch] [ebp-34h]
  int v34[4]; // [esp+40h] [ebp-30h] BYREF
  Rect v35; // [esp+50h] [ebp-20h] BYREF
  unsigned int v36[4]; // [esp+60h] [ebp-10h] BYREF

  if ( !arg0 ) /*0x6d2b6f*/
  {
    if ( g_CraterCreationState ) /*0x6d2b7d*/
    {
      v6 = g_CraterCreationState - 1; /*0x6d2b83*/
      v24 = g_CraterCreationState - 1; /*0x6d2b86*/
      if ( g_CraterCreationState - 1 >= 0 ) /*0x6d2b8a*/
      {
        v7 = 20 * v6; /*0x6d2b93*/
        do /*0x6d2cfd*/
        {
          v30 = *(unsigned int *)((char *)g_CraterPool + v7); /*0x6d2ba2*/
          v31 = *(unsigned int *)((char *)g_CraterPool + v7 + 4); /*0x6d2ba9*/
          v32 = *(unsigned int *)((char *)g_CraterPool + v7 + 8); /*0x6d2bb0*/
          v33 = *(unsigned int *)((char *)g_CraterPool + v7 + 12); /*0x6d2bbd*/
          v30 += aP2; /*0x6d2bc7*/
          v31 += a4; /*0x6d2bd0*/
          v26 = (void *)(DSurface_ViewBounds.field_4); /*0x6d2bda*/
          v28 = *(Coord2D *)&DSurface_ViewBounds.field_0; /*0x6d2bde*/
          v25 = DSurface_ViewBounds.field_0; /*0x6d2be7*/
          v23 = *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d2bf5*/
          v22 = *(unsigned int *)DSurface_ViewBounds.__pad_8; /*0x6d2bfa*/
          v8 = ((Coord2D *)(&v28))->Sub( (int *)(v29), (unsigned int *)(&v25)); /*0x6d2c05*/
          v9 = (int *)((Rect*)&v35)->Construct( (unsigned int *)(v8), v22, v23); /*0x6d2c0f*/
          v34[0] = *v9; /*0x6d2c18*/
          v34[1] = v9[1]; /*0x6d2c21*/
          v34[2] = v9[2]; /*0x6d2c28*/
          v34[3] = v9[3]; /*0x6d2c37*/
          v10 = (int *)(ClipRectIntersection((RectangleStruct *)(v36),(const RectangleStruct *)(v34),(const RectangleStruct *)(&v30), 0, 0)); /*0x6d2c40*/
          v30 = *v10; /*0x6d2c49*/
          v31 = v10[1]; /*0x6d2c50*/
          v32 = v10[2]; /*0x6d2c57*/
          v33 = v10[3]; /*0x6d2c64*/
          v11 = (int *)((char *)g_CraterPool + v7); /*0x6d2c68*/
          *v11 = v30; /*0x6d2c6b*/
          v11[1] = v31; /*0x6d2c72*/
          v11[2] = v32; /*0x6d2c79*/
          v11[3] = v33; /*0x6d2c80*/
          if ( v32 > 0 && v33 > 0 ) /*0x6d2c91*/
          {
            ((TacticalMap *)((TacticalMap *)g_ZBufferDescriptor))->FillScanlinesOpaque(v30, v31, v32, v33); /*0x6d2cee*/
          }
          else if ( v6 < g_CraterCreationState ) /*0x6d2c9a*/
          {
            v12 = v6; /*0x6d2c9d*/
            if ( v6 < --g_CraterCreationState ) /*0x6d2ca6*/
            {
              v13 = v7; /*0x6d2ca8*/
              do /*0x6d2cc8*/
              {
                ++v12; /*0x6d2cb0*/
                v14 = (char *)g_CraterPool + v13 + 20; /*0x6d2cb1*/
                v15 = (char *)g_CraterPool + v13; /*0x6d2cb5*/
                v13 += 20; /*0x6d2cbd*/
                qmemcpy( (void *)(v15), (const void *)(v14), 0x14u); /*0x6d2cc0*/
              }
              while ( v12 < g_CraterCreationState ); /*0x6d2cc8*/
              v6 = v24; /*0x6d2cca*/
            }
          }
          --v6; /*0x6d2cf3*/
          v7 -= 20; /*0x6d2cf4*/
          v24 = v6; /*0x6d2cf9*/
        }
        while ( v6 >= 0 ); /*0x6d2cfd*/
      }
    }
  }
  result = *((unsigned int *)this + 56); /*0x6d2d03*/
  if ( result > 0 && !arg0 ) /*0x6d2d17*/
  {
    v17 = 0; /*0x6d2d1d*/
    v18 = (CellClass **)((char *)this + 228); /*0x6d2d27*/
    do /*0x6d2dc2*/
    {
      Coords = CellClass::GetCoords(((CellClass *)*v18), &v30); /*0x6d2d34*/
      v25 = *Coords; /*0x6d2d3b*/
      v26 = (void *)Coords[1]; /*0x6d2d47*/
      v27 = 0; /*0x6d2d59*/
      v20 = Coord::To_ScreenRaw( (int *)((int)((gamemd::AbstractClass *)(v29))), (unsigned int *)((unsigned int)((IUnknown *)(&v25)))); /*0x6d2d61*/
      v21 = v20[1] - *((unsigned int *)this + 45); /*0x6d2d81*/
      *(unsigned int *)v28.__pad_0 = *v20 - *((unsigned int *)this + 44) + DSurface_ViewBounds.field_0 - 30; /*0x6d2d8d*/
      v28.Coord2D_field_0x04 = (int)DSurface_ViewBounds.field_4 + v21 - 15; /*0x6d2d9c*/
      if ( g_hWnd ) /*0x6d2da0*/
        ((DSurface *)(void *)((int)*v18))->Process( (int *)v28.__pad_0, (int *)a2); /*0x6d2db1*/
      result = *((unsigned int *)this + 56); /*0x6d2db6*/
      ++v17; /*0x6d2dbc*/
      ++v18; /*0x6d2dbd*/
    }
    while ( v17 < result ); /*0x6d2dc2*/
  }
  return (void *)(result); /*0x6d2dc8*/

}
} // namespace gamemd
// 0x6D3D10
namespace gamemd {
AbstractClass * * TacticalMap::TacticalMap_Render( int a2)
{

  char v5; // al
  int v6; // edi
  int v7; // ebx
  unsigned int v8; // esi
  unsigned int v9; // edi
  int v10; // eax
  int result; // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  bool v16; // bl
  bool v17; // sf
  bool v18; // of
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int *v22; // eax
  int v23; // edx
  int v24; // edx
  int v25; // ecx
  int v26; // ebx
  int v27; // eax
  int v28; // edx
  char *v29; // esi
  char *v30; // edi
  int v31; // edx
  int v32; // ecx
  int v33; // ebx
  unsigned char *v34; // esi
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // edi
  DWORD v39; // ebx
  int *v40; // eax
  int v41; // ecx
  int v42; // edi
  int v43; // edx
  double v44; // st7
  int v45; // ebx
  double v46; // st7
  unsigned int *v47; // eax
  int v48; // eax
  int v49; // esi
  int v50; // ecx
  int v51; // ebx
  int v52; // edi
  unsigned int *v53; // eax
  int v... [22877 chars total]
}
}

// 0x6D8DB0
namespace gamemd {  // G42.18c ns repair
int TacticalMap::RenderAllObjects(int a2)
{

  int v2; // ebx
  int v3; // esi
  int v4; // edi
  float *v5; // ebp
  IsoCoord *v6; // eax
  int v7; // eax
  int v8; // eax
  IsoCoord *v9; // eax
  int v10; // eax
  int v11; // edi
  IsoCoord *v12; // eax
  int v13; // eax
  int v14; // ebp
  int v15; // edi
  int v16; // eax
  int v17; // ebx
  int *v18; // esi
  int v19; // eax
  int v20; // ecx
  unsigned int *v21; // eax
  LPPERSISTSTREAM v22; // edi
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  unsigned int *v29; // eax
  int v30; // edx
  int v31; // eax
  int *v32; // edx
  int v33; // eax
  int v34; // ecx
  char v35; // al
  int v36; // eax
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int *v41; // eax
  LPPERSISTSTREAM v42; // ebx
  int *v43; // edi
  int *v44; // ecx
  int v45; // eax
  int v46; // edx
  int v47; // ecx
  int v48; // kr18_4
  int v49; // eax
  IPersistStream v50; // eax
  int v51; // edx
  int v52; // ecx
  int v53; // ecx
  BuildingClass *v54; // ebx
  int *v55; // eax
  LPPERSISTSTREAM v56; // ebp
  int *v57; // edi
  unsigned int *v58; // eax
  int v59; // ecx
  int64_t v60; // rax
  int v61; // esi
  int v62; // eax
  int v63; // esi
  int v64; // eax
  int *p_count; // ecx
  int result; // eax
  int v67; // ebx
  int *v68; // eax
  int v69; // esi
  int v70; // edi
  int v71; // esi
  int v72; // eax
  int v73; // edi
  int v74; // esi
  bool v75; // cc
  int v76; // [esp+10h] [ebp-104h]
  int v77; // [esp+28h] [ebp-ECh]
  int v78; // [esp+28h] [ebp-ECh]
  int v79; // [esp+28h] [ebp-ECh]
  int v80; // [esp+28h] [ebp-ECh]
  int v81; // [esp+2Ch] [ebp-E8h] BYREF
  int v82; // [esp+30h] [ebp-E4h]
  IsoCoord v83; // [esp+34h] [ebp-E0h] BYREF
  int v84; // [esp+3Ch] [ebp-D8h]
  int *v85; // [esp+40h] [ebp-D4h]
  int v86; // [esp+44h] [ebp-D0h]
  int v87; // [esp+48h] [ebp-CCh]
  int v88; // [esp+4Ch] [ebp-C8h]
  int v89; // [esp+50h] [ebp-C4h] BYREF
  int v90; // [esp+54h] [ebp-C0h]
  int v91; // [esp+58h] [ebp-BCh]
  int v92; // [esp+5Ch] [ebp-B8h] BYREF
  int v93; // [esp+60h] [ebp-B4h]
  Vector2 v94; // [esp+64h] [ebp-B0h] BYREF
  int v95; // [esp+74h] [ebp-A0h]
  int v96; // [esp+78h] [ebp-9Ch]
  IsoCoord v97; // [esp+7Ch] [ebp-98h] BYREF
  int v98; // [esp+84h] [ebp-90h]
  int v99; // [esp+8Ch] [ebp-88h]
  unsigned int v100[2]; // [esp+90h] [ebp-84h] BYREF
  int v101[4]; // [esp+98h] [ebp-7Ch] BYREF
  int v102[3]; // [esp+A8h] [ebp-6Ch] BYREF
  int v103; // [esp+B4h] [ebp-60h]
  unsigned char v104[12]; // [esp+B8h] [ebp-5Ch] BYREF
  unsigned char v105[12]; // [esp+C4h] [ebp-50h] BYREF
  int v106; // [esp+D0h] [ebp-44h] BYREF
  char v107[12]; // [esp+D8h] [ebp-3Ch] BYREF
  char v108[12]; // [esp+E4h] [ebp-30h] BYREF
  char v109[12]; // [esp+F0h] [ebp-24h] BYREF
  char v110[12]; // [esp+FCh] [ebp-18h] BYREF
  char v111[12]; // [esp+108h] [ebp-Ch] BYREF

  v2 = *(unsigned int *)DSurface_ViewBounds.__pad_8; /*0x6d8db7*/
  v3 = *((unsigned int *)this + 44); /*0x6d8dc4*/
  v4 = *((unsigned int *)this + 45); /*0x6d8dd5*/
  v81 = v3 + *(unsigned int *)DSurface_ViewBounds.__pad_8 / 2; /*0x6d8ddb*/
  v77 = *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d8de5*/
  v5 = (float *)((char *)this + 3556); /*0x6d8deb*/
  *(float *)v83.__pad_0 = (float)v81; /*0x6d8df1*/
  v82 = v4 - *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d8df5*/
  v84 = 0; /*0x6d8e08*/
  *(float *)&v83.IsoCoord_field_0x04 = (float)(v4 - *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]); /*0x6d8e10*/
  v6 = (IsoCoord *)TransformMatrix3x4Point( (AbstractClass *)((float *)v97.__pad_0), (IUnknown *)((float *)this + 889), (IUnknown *)((float *)v83.__pad_0)); /*0x6d8e14*/
  v83 = *(unsigned int *)v6;
  v84 = *(unsigned int *)v6[1].__pad_0; /*0x6d8e2d*/
  LOWORD(v7) = Math::RoundToInt(*(float *)v83.__pad_0); /*0x6d8e31*/
  v86 = v7; /*0x6d8e3a*/
  LOWORD(v8) = Math::RoundToInt(*(float *)&v83.IsoCoord_field_0x04); /*0x6d8e3e*/
  v87 = v8; /*0x6d8e43*/
  v81 = v3 + 2 * v2; /*0x6d8e4a*/
  *(float *)v83.__pad_0 = (float)v81; /*0x6d8e62*/
  v78 = v77 / 2 + v4; /*0x6d8e74*/
  v82 = v78; /*0x6d8e66*/
  v84 = 0; /*0x6d8e78*/
  *(float *)&v83.IsoCoord_field_0x04 = (float)v78; /*0x6d8e80*/
  v9 = (IsoCoord *)TransformMatrix3x4Point( (AbstractClass *)((float *)v97.__pad_0), (IUnknown *)(v5), (IUnknown *)((float *)v83.__pad_0)); /*0x6d8e84*/
  v83 = *(unsigned int *)v9;
  v84 = *(unsigned int *)v9[1].__pad_0; /*0x6d8e9d*/
  LOWORD(v10) = Math::RoundToInt(*(float *)v83.__pad_0); /*0x6d8ea1*/
  v11 = v10; /*0x6d8ea8*/
  v81 = v3 - v2; /*0x6d8eae*/
  v82 = v78; /*0x6d8eb6*/
  *(float *)v83.__pad_0 = (float)(v3 - v2); /*0x6d8eba*/
  *(float *)&v83.IsoCoord_field_0x04 = (float)v78; /*0x6d8ecd*/
  v84 = 0; /*0x6d8ed1*/
  v12 = (IsoCoord *)TransformMatrix3x4Point( (AbstractClass *)((float *)v97.__pad_0), (IUnknown *)(v5), (IUnknown *)((float *)v83.__pad_0)); /*0x6d8ed9*/
  v83 = *(unsigned int *)v12;
  v84 = *(unsigned int *)v12[1].__pad_0; /*0x6d8ef2*/
  LOWORD(v13) = Math::RoundToInt(*(float *)&v83.IsoCoord_field_0x04); /*0x6d8ef6*/
  v14 = v86; /*0x6d8efb*/
  v95 = 2 * (v11 - v86); /*0x6d8f03*/
  v15 = v87; /*0x6d8f07*/
  v96 = 2 * (v13 - v87); /*0x6d8f0f*/
  v16 = 0; /*0x6d8f13*/
  v85 = (int *)(0); /*0x6d8f15*/
  do /*0x6d95a9*/
  {
    v88 = 0; /*0x6d8f1c*/
    v17 = 24 * v16; /*0x6d8f24*/
    v79 = 24 * v16; /*0x6d8f27*/
    if ( (&dword_8A0370)[6 * v16] > 0 ) /*0x6d8f33*/
    {
      while ( 1 ) /*0x6d8f43*/
      {
        v18 = *(int **)(*(int *)((char *)&stru_8A0360.items[1] + v17) + 4 * v88); /*0x6d8f43*/
        *((unsigned char *)v18 + 153) = 0; /*0x6d8f48*/
        if ( !v18 ) /*0x6d8f4f*/
          goto LABEL_25; /*0x6d8f4f*/
        if ( (v18[5] & 4) != 0 ) /*0x6d8f64*/
        {
          v19 = v18[39]; /*0x6d8f72*/
          v89 = v19; /*0x6d8f74*/
          v20 = v18[40]; /*0x6d8f7a*/
          v90 = v20; /*0x6d8f7d*/
          v91 = v18[41]; /*0x6d8f84*/
          if ( v19 < v14 ) /*0x6d8f88*/
            goto LABEL_54; /*0x6d8f88*/
          if ( v19 >= v14 + v95 ) /*0x6d8f96*/
            goto LABEL_54; /*0x6d8f96*/
          if ( v20 < v15 ) /*0x6d8f9e*/
            goto LABEL_54; /*0x6d8f9e*/
          if ( v20 >= v15 + v96 ) /*0x6d8fac*/
            goto LABEL_54; /*0x6d8fac*/
          (*(void (**)(int *, char *, unsigned int))(*v18 + 76))( (int *)(v18), (char *)(v110), 0); /*0x6d8fc0*/
          if ( ((int)dword_A8B230->vtable1 & 0x1000) != 0 ) /*0x6d8fce*/
          {
            if ( (uint8_t)Game::Stub3((int)&v89) ) /*0x6d8fda*/
              goto LABEL_54; /*0x6d8fe1*/
          }
          v21 = (unsigned int *)(*(int (**)(int *, char *))(*v18 + 72))( (int *)(v18), (char *)(v107)); /*0x6d8ff3*/
          v22 = (LPPERSISTSTREAM)(g_TacticalClass_Instance); /*0x6d8ff6*/
          v23 = Coord::To_ScreenRaw( (int *)((int)(&v106)), (unsigned int *)(v21)); /*0x6d9007*/
          v81 = *v23; /*0x6d9010*/
          v82 = v23[1]; /*0x6d9017*/
          v24 = v82 - *(unsigned int *)&v22[45]; /*0x6d9029*/
          v81 -= *(unsigned int *)&v22[44]; /*0x6d9030*/
          v82 = v24; /*0x6d9034*/
          if ( v81 >= -360 && v81 <= dword_B0CE30 + 360 && v24 >= -180 && v24 <= dword_B0CE34 + 180 ) /*0x6d906a*/
          {
            v25 = *v18; /*0x6d9070*/
            *((unsigned char *)v18 + 153) = 1; /*0x6d907e*/
            (*(void (**)(int *, int *, CellStruct *))(v25 + 268))( (int *)(v18), (int *)(&v81), (CellStruct *)(&DSurface_ViewBounds)); /*0x6d9085*/
            (*(void (**)(int *, CellStruct *, int, unsigned int))(*v18 + 260))( (int *)(v18), (CellStruct *)(&DSurface_ViewBounds), a2, 0); /*0x6d909e*/
          }
          goto LABEL_53; /*0x6d90a4*/
        }
        if ( (v18[5] & 1) != 0 ) /*0x6d90af*/
        {
          v26 = v18[39]; /*0x6d90bd*/
          v89 = v26; /*0x6d90bf*/
          v27 = v18[40]; /*0x6d90c5*/
          v90 = v27; /*0x6d90c8*/
          v91 = v18[41]; /*0x6d90cf*/
          if ( v26 < v14 || v26 >= v14 + v95 || v27 < v15 || v27 >= v15 + v96 ) /*0x6d90f7*/
            goto LABEL_54; /*0x6d90f7*/
          v28 = *v18; /*0x6d90fd*/
          *((unsigned char *)v18 + 153) = 1; /*0x6d9111*/
          v29 = (unsigned int *)(*(int (**)(int *, char *))(v28 + 72))( (int *)(v18), (char *)(v109)); /*0x6d9118*/
          if ( ((Coord *)((Coord *)g_TacticalClass_Instance))->To_Screen( (unsigned int *)(v29), (int *)(v102)) ) /*0x6d9122*/
          {
            (*(void (**)(int *, int *, CellStruct *))(*v18 + 268))( (int *)(v18), (int *)(v102), (CellStruct *)(&DSurface_ViewBounds)); /*0x6d913c*/
            (*(void (**)(int *, int *, CellStruct *))(*v18 + 272))( (int *)(v18), (int *)(v102), (CellStruct *)(&DSurface_ViewBounds)); /*0x6d9153*/
          }
          v30 = *v18; /*0x6d9159*/
          v76 = 1; /*0x6d915b*/
        }
        else
        {
LABEL_25:
          v31 = (*(int (**)(int *))(*v18 + 44))( (int *)(v18)); /*0x6d917b*/
          if ( v31 == 4 ) /*0x6d9181*/
          {
            v32 = (int *)(*(int (**)(int *, char *))(*v18 + 72))( (int *)(v18), (char *)(v111)); /*0x6d9196*/
            v33 = *v32; /*0x6d9198*/
            v89 = v33; /*0x6d919a*/
            v34 = v32[1]; /*0x6d91a0*/
            v90 = v34; /*0x6d91a3*/
            v91 = v32[2]; /*0x6d91aa*/
            if ( v33 < v14 ) /*0x6d91ae*/
              goto LABEL_54; /*0x6d91ae*/
            if ( v33 >= v14 + v95 ) /*0x6d91bc*/
              goto LABEL_54; /*0x6d91bc*/
            if ( v34 < v15 ) /*0x6d91c4*/
              goto LABEL_54; /*0x6d91c4*/
            if ( v34 >= v15 + v96 ) /*0x6d91d2*/
              goto LABEL_54; /*0x6d91d2*/
            v35 = *((unsigned char *)v18 + 280); /*0x6d91d8*/
            *((unsigned char *)v18 + 153) = 1; /*0x6d91de*/
            if ( !v35 ) /*0x6d91e7*/
            {
              if ( *(unsigned char *)(v18[50] + 884) ) /*0x6d91ef*/
              {
                v36 = (*(int (**)(int *, char *))(*v18 + 72))( (int *)(v18), (char *)(v108)); /*0x6d9205*/
                if ( (uint8_t)Game::Stub3(v36) ) /*0x6d920e*/
                  goto LABEL_54; /*0x6d9215*/
              }
            }
            v30 = *v18; /*0x6d921b*/
            v76 = 0; /*0x6d921d*/
          }
          else
          {
            if ( v31 != 36 ) /*0x6d9227*/
            {
              v39 = v18[39]; /*0x6d92c4*/
              v89 = v39; /*0x6d92c6*/
              v40 = v18[40]; /*0x6d92cc*/
              v90 = v40; /*0x6d92cf*/
              v91 = v18[41]; /*0x6d92d6*/
              if ( v39 < v14 || v39 >= v14 + v95 || v40 < v15 || v40 >= v15 + v96 ) /*0x6d92fe*/
                goto LABEL_54; /*0x6d92fe*/
              v41 = (int *)(*(int (**)(int *, unsigned char *))(*v18 + 72))( (int *)(v18), (unsigned char *)(v104)); /*0x6d9310*/
              v42 = (LPPERSISTSTREAM)(g_TacticalClass_Instance); /*0x6d9313*/
 v43 = (int *)(v41); /*0x6d9319*/
              v44 = IsoCoord::ToPixel(&v97, *v41, v41[1]); /*0x6d932b*/
              v45 = *v44; /*0x6d932d*/
              v46 = v44[1]; /*0x6d932f*/
              v47 = v43[2]; /*0x6d9332*/
              v103 = v46; /*0x6d9335*/
              v48 = v45; /*0x6d9343*/
              v49 = ZCoordToScreenY(v47); /*0x6d934a*/
              *(unsigned int *)v94.__pad_0 = v48 / 256; /*0x6d935f*/
              v94.Vector2_field_0x04 = v103 / 256 - v49; /*0x6d936e*/
              v50 = v42[45]; /*0x6d9378*/
              v100[0] = v42[44]; /*0x6d9383*/
              v100[1] = v50; /*0x6d938a*/
              ((Vector2 *)&v94)->Subtract( (unsigned int *)(v100)); /*0x6d9391*/
              if ( *(int *)v94.__pad_0 >= -360 /*0x6d93ca*/
                && *(int *)v94.__pad_0 <= dword_B0CE30 + 360
                && v94.Vector2_field_0x04 >= -180
                && v94.Vector2_field_0x04 <= dword_B0CE34 + 180 )
              {
                v51 = *v18; /*0x6d93cc*/
                *((unsigned char *)v18 + 153) = 1; /*0x6d93da*/
                (*(void (**)(int *, Vector2 *, CellStruct *))(v51 + 268))( (int *)(v18), (Vector2 *)(&v94), (CellStruct *)(&DSurface_ViewBounds)); /*0x6d93e1*/
(*(void (**)(int *, CellStruct *, int, unsigned int))(*v18 + 260))( /*0x6d93fa*/ v18, (CellStruct *)(&DSurface_ViewBounds), a2, 0);




              }
              v17 = v79; /*0x6d9400*/
              v14 = v86; /*0x6d9404*/
LABEL_53:
              v15 = v87; /*0x6d9408*/
              goto LABEL_54; /*0x6d9408*/
            }
            if ( !*(unsigned char *)(v18[50] + 691) && !*((unsigned char *)v18 + 205) ) /*0x6d923d*/
              goto LABEL_54; /*0x6d923d*/
            v37 = v18[39]; /*0x6d9251*/
            v89 = v37; /*0x6d9257*/
            v38 = v18[40]; /*0x6d925d*/
            v90 = v38; /*0x6d9260*/
            v91 = v18[41]; /*0x6d9267*/
            if ( v37 < v14 /*0x6d929f*/
              || v37 >= v14 + v95
              || v38 < v15
              || v38 >= v15 + v96
              || (uint8_t)Game::Stub3((int)&v89) )
            {
              goto LABEL_54; /*0x6d92a6*/
            }
            v30 = *v18; /*0x6d92ac*/
            *((unsigned char *)v18 + 153) = 1; /*0x6d92ae*/
            v76 = 0; /*0x6d92b5*/
          }
        }
        (*(void (**)(int *, CellStruct *, int, int))(v30 + 260))( (int *)(v18), (CellStruct *)(&DSurface_ViewBounds), a2, v76); /*0x6d916c*/
LABEL_54:
        v52 = *(int *)((char *)dword_8A0370 + v17); /*0x6d940c*/
        if ( ++v88 >= v52 ) /*0x6d941d*/
        {
          v16 = (int)v85; /*0x6d9423*/
          break; /*0x6d9423*/
        }
      }
    }
    if ( v16 == 2 ) /*0x6d942a*/
    {
      v53 = 0; /*0x6d9436*/
      v80 = 0; /*0x6d943a*/
      if ( stru_A8EB00.ObjectTypeClass[20] > 0 ) /*0x6d943e*/
      {
        do /*0x6d9597*/
        {
          v54 = *(BuildingClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * v53); /*0x6d944a*/
          if ( ((unsigned int *)v54)[0] && ((unsigned int *)v54)[0] ) /*0x6d9458*/
          {
            v55 = (int *)(*((int (**)(BuildingClass *, unsigned char *))v54->vtable1 + 43))( (BuildingClass *)(v54), (unsigned char *)(v105)); /*0x6d9472*/
            v56 = (LPPERSISTSTREAM)(g_TacticalClass_Instance); /*0x6d9478*/
            v57 = v55; /*0x6d947e*/
            v58 = IsoCoord::ToPixel(&v83, *v55, v55[1]); /*0x6d948b*/
            v59 = v58[1]; /*0x6d9494*/
            v60 = (int)*v58; /*0x6d9497*/
            v99 = v59; /*0x6d949e*/
            v61 = (BYTE4(v60) + (int)v60) >> 8; /*0x6d94a9*/
            v62 = ZCoordToScreenY(v57[2]); /*0x6d94ac*/
            v92 = v61; /*0x6d94be*/
            v93 = v99 / 256 - v62; /*0x6d94c9*/
            v63 = v61 - *(unsigned int *)&v56[44]; /*0x6d94d9*/
            v64 = v93 - *(unsigned int *)&v56[45]; /*0x6d94db*/
            v92 = v63; /*0x6d94e3*/
            v93 = v64; /*0x6d94e7*/
            if ( v63 >= -360 && v63 <= dword_B0CE30 + 360 && v64 >= -180 && v64 <= dword_B0CE34 + 180 ) /*0x6d9516*/
            {
              v101[2] = *(unsigned int *)DSurface_ViewBounds.__pad_8; /*0x6d952a*/
              v101[0] = DSurface_ViewBounds.field_0; /*0x6d9539*/
              v101[1] = (int)DSurface_ViewBounds.field_4; /*0x6d9540*/
              v101[3] = *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d9547*/
              BuildingClass::DrawVisible(v54, &v92, v101); /*0x6d957a*/
            }
            v14 = v86; /*0x6d957f*/
            v15 = v87; /*0x6d9583*/
          }
          v53 = ++v80; /*0x6d9590*/
        }
        while ( v80 < stru_A8EB00.ObjectTypeClass[20] ); /*0x6d9597*/
        v16 = (int)v85; /*0x6d959d*/
      }
    }
    v85 = (int *)++v16; /*0x6d95a5*/
  }
  while ( v16 < 5 ); /*0x6d95a9*/
 p_count = (int *)(&dword_8A0364); /*0x6d95af*/
  v85 = &dword_8A0364; /*0x6d95b4*/
  do /*0x6d97b5*/
  {
    result = 0; /*0x6d95bb*/
    v86 = p_count[3]; /*0x6d95bf*/
    v88 = 0; /*0x6d95c3*/
    if ( v86 > 0 ) /*0x6d95c7*/
    {
      do /*0x6d97a2*/
      {
        v67 = *(unsigned int *)(*p_count + 4 * result); /*0x6d95cf*/
        if ( *(unsigned char *)(v67 + 153) ) /*0x6d95d2*/
        {
          if ( v67 ) /*0x6d95e2*/
          {
            if ( (*(unsigned char *)(v67 + 20) & 1) != 0 ) /*0x6d95f4*/
            {
              if ( (*(unsigned char *)(v67 + 20) & 4) == 0 /*0x6d965d*/
                || ((*(void (**)(int, unsigned char *, unsigned int))(*(unsigned int *)v67 + 76))( v67, (unsigned char *)(v105), 0), !g_hWnd)
                || *((unsigned int *)((char *)&stru_A8EB00 + 391))
                || ((int)dword_A8B230->vtable1 & 0x1000) == 0
                || (v97 = *(IsoCoord *)(v67 + 156),
                    v98 = *(unsigned int *)(v67 + 164),
                    !(uint8_t)Game::Stub3((int)&v97)) )
              {
                v68 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v67 + 72))( v67, (unsigned char *)(v104)); /*0x6d9676*/
                v69 = *v68; /*0x6d9683*/
                v99 = v68[1]; /*0x6d9689*/
                v92 = v68[2]; /*0x6d9697*/
                *(unsigned int *)v83.__pad_0 = -60 * v99 / 2 + 60 * v69 / 2; /*0x6d96d0*/
                v70 = *(unsigned int *)v83.__pad_0 / 256; /*0x6d96f7*/
                v71 = (30 * v99 / 2 + 30 * v69 / 2) / 256; /*0x6d96fa*/
                LOWORD(v72) = Math::RoundToInt((double)v92 * dbl_B0CD48 + (double)(v92 >= 728) + 0.5); /*0x6d9721*/
                v81 = v70; /*0x6d972d*/
                v82 = v71 - v72; /*0x6d9731*/
                v73 = v70 - *(unsigned int *)&(&g_TacticalClass_Instance)[44; /*0x6d9741*/
                v74 = v71 - v72 - *(unsigned int *)&(&g_TacticalClass_Instance)[45; /*0x6d9743*/
                v81 = v73; /*0x6d974b*/
                v82 = v74; /*0x6d974f*/
                if ( v73 >= -360 && v73 <= dword_B0CE30 + 360 && v74 >= -180 && v74 <= dword_B0CE34 + 180 ) /*0x6d9779*/
(*(void (**)(int, int *, CellStruct *))(*(unsigned int *)v67 + 272))( /*0x6d9789*/ v67, (int *)(&v81), (CellStruct *)(&DSurface_ViewBounds));



              }
            }
          }
        }
        result = v88 + 1; /*0x6d9797*/
        v75 = v88 + 1 < v86; /*0x6d9798*/
        p_count = v85; /*0x6d979a*/
        ++v88; /*0x6d979e*/
      }
      while ( v75 ); /*0x6d97a2*/
    }
    p_count += 6; /*0x6d97a8*/
    v85 = p_count; /*0x6d97b1*/
  }
  while ( (int)p_count < (int)&stru_8A0390.ambientSoundController[4] ); /*0x6d97b5*/
  return result; /*0x6d97bb*/

}
}  // G42.18c ns repair
// 0x6DA180
namespace gamemd {  // G42.18c ns repair
int TacticalMap::DrawOccupiedRegion()
{

  int result; // eax
  int v2; // edx
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // edi
  int v8; // eax
  int v9; // edi
  unsigned int v10[4]; // [esp+0h] [ebp-10h] BYREF

  if ( *((unsigned int *)this + 868) || (result = *((unsigned int *)this + 869)) != 0 ) /*0x6da195*/
  {
    v2 = *((unsigned int *)this + 868); /*0x6da19b*/
    v3 = *((unsigned int *)this + 870); /*0x6da1a1*/
    v4 = *((unsigned int *)this + 869); /*0x6da1a9*/
    v5 = *((unsigned int *)this + 871); /*0x6da1af*/
    if ( v3 < v2 ) /*0x6da1b8*/
    {
      v6 = v2; /*0x6da1ba*/
      v2 = v3; /*0x6da1bc*/
      v3 = v6; /*0x6da1be*/
    }
    if ( v5 < v4 ) /*0x6da1c2*/
    {
      v7 = v4; /*0x6da1c4*/
      v4 = v5; /*0x6da1c6*/
      v5 = v7; /*0x6da1c8*/
    }
    v8 = v3 - v2 + 1; /*0x6da1ce*/
    if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x6da1dc*/
      v9 = *(uint8_t *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 15); /*0x6da1ea*/
    else
      v9 = *(uint16_t *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 30); /*0x6da1f7*/
    v10[2] = v8; /*0x6da201*/
    v10[0] = v2; /*0x6da209*/
    v10[1] = v4; /*0x6da20d*/
    v10[3] = v5 - v4 + 1; /*0x6da211*/
return (*(int (**)(AudioStream *, CellStruct *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 /*0x6da21e*/ + 84))( (AudioStream *)(g_DSurface_Hidden_2), (CellStruct *)(&DSurface_ViewBounds), (unsigned int *)(v10), v9);





  }
  return result; /*0x6da224*/

}
// 0x7BCFB0
unsigned int TacticalMap::FillScanlinesOpaque(int a2, int a3, int a4, int a5)
{

  TacticalMap *v5; // edi
  int v6; // esi
  unsigned int result; // eax
  unsigned int v8; // edx
  int v9; // ecx
  char *v10; // ebp
  unsigned int v11; // eax
  char *v12; // edi
  int v13; // esi
  int v14; // eax
  float m_TintFactor; // ebx
  unsigned short *v16; // ecx
  int v17; // esi
  int v18; // ebx
  char *v19; // ebp
  char *v20; // eax
  int v21; // esi
  int v23; // [esp+Ch] [ebp-Ch]
  float v24; // [esp+Ch] [ebp-Ch]
  char v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  v5 = this; /*0x7bcfbd*/
  v6 = (*(int (**)(int, int, int))(*(unsigned int *)this->TacticalMap_field_14 + 92))( /*0x7bcfd0*/
         this->TacticalMap_field_14,
         a2,
         a3);
  (*(void (**)(int))(*(unsigned int *)v5->TacticalMap_field_14 + 96))(v5->TacticalMap_field_14); /*0x7bcfd4*/
  result = (unsigned int)(v5->TacticalMap_field_1C); /*0x7bcfda*/
  v8 = v6 + v5->TacticalMap_field_10; /*0x7bcfdd*/
  if ( v8 >= result ) /*0x7bcfe1*/
    v8 -= v5->TacticalMap_field_20; /*0x7bcfe3*/
  if ( a5 > 0 ) /*0x7bcfec*/
  {
    v26 = a5; /*0x7bcff4*/
    do /*0x7bd0cf*/
    {
      v9 = a4; /*0x7bcff8*/
      if ( v8 + 2 * a4 < result ) /*0x7bd001*/
      {
        v18 = a4; /*0x7bd0e2*/
        v19 = (char *)v8; /*0x7bd0e4*/
        if ( (v8 & 2) != 0 && a4 ) /*0x7bd0ea*/
        {
          *(unsigned short *)v8 = -1; /*0x7bd0ec*/
          v19 = (char *)(v8 + 2); /*0x7bd0f1*/
          v18 = a4 - 1; /*0x7bd0f4*/
        }
        v20 = 0; /*0x7bd0f9*/
        v21 = v18 >> 1; /*0x7bd0fe*/
        if ( v18 >> 1 ) /*0x7bd0fe*/
        {
          memset(v19, 0xFFu, 4 * v21); /*0x7bd109*/
          v5 = this; /*0x7bd10b*/
          v20 = &v19[4 * v21]; /*0x7bd10f*/
        }
        if ( (v18 & 1) != 0 && v20 ) /*0x7bd11a*/
          *(unsigned short *)v20 = -1; /*0x7bd11c*/
      }
      else
      {
        v10 = (char *)v8; /*0x7bd009*/
        v11 = (result - v8) >> 1; /*0x7bd00b*/
        v23 = v11; /*0x7bd012*/
        if ( (v8 & 2) != 0 && v11 ) /*0x7bd01a*/
        {
          *(unsigned short *)v8 = -1; /*0x7bd01f*/
          v10 = (char *)(v8 + 2); /*0x7bd024*/
          v23 = v11 - 1; /*0x7bd027*/
        }
        v12 = 0; /*0x7bd02f*/
        v13 = v23 >> 1; /*0x7bd034*/
        if ( v23 >> 1 ) /*0x7bd034*/
        {
          memset(v10, 0xFFu, 4 * v13); /*0x7bd03f*/
          v9 = a4; /*0x7bd041*/
          v12 = &v10[4 * v13]; /*0x7bd045*/
        }
        if ( (v23 & 1) != 0 && v12 ) /*0x7bd052*/
          *(unsigned short *)v12 = -1; /*0x7bd054*/
        v14 = v9 - v11; /*0x7bd05f*/
        m_TintFactor = this->m_TintFactor; /*0x7bd061*/
        v25 = v14; /*0x7bd064*/
        v24 = m_TintFactor; /*0x7bd06b*/
        if ( (LOBYTE(m_TintFactor) & 2) != 0 && v14 ) /*0x7bd073*/
        {
          *(unsigned short *)LODWORD(m_TintFactor) = -1; /*0x7bd075*/
          LODWORD(m_TintFactor) += 2; /*0x7bd07a*/
          --v14; /*0x7bd07d*/
          v24 = m_TintFactor; /*0x7bd07e*/
          v25 = v14; /*0x7bd082*/
        }
        v16 = 0; /*0x7bd088*/
        v17 = v14 >> 1; /*0x7bd08d*/
        if ( v14 >> 1 ) /*0x7bd08d*/
        {
          memset((void *)LODWORD(m_TintFactor), 0xFFu, 4 * v17); /*0x7bd098*/
          v16 = (unsigned int)((unsigned short *)(LODWORD(v24) + 4 * v17)); /*0x7bd09e*/
          LOBYTE(v14) = v25; /*0x7bd0a1*/
        }
        if ( (v14 & 1) != 0 && v16 ) /*0x7bd0ab*/
          *v16 = -1; /*0x7bd0ad*/
        v5 = this; /*0x7bd0b2*/
      }
      result = v5->TacticalMap_field_1C; /*0x7bd0b9*/
      v8 += 2 * v5[1].TacticalMap_field_04; /*0x7bd0bc*/
      if ( v8 >= result ) /*0x7bd0c1*/
        v8 -= v5->TacticalMap_field_20; /*0x7bd0c3*/
      --v26; /*0x7bd0cb*/
    }
    while ( v26 ); /*0x7bd0cf*/
  }
  return result; /*0x7bd0d7*/

}
}  // G42.18c ns repair