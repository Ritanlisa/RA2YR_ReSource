// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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

  v2 = this->q108 + (int16_t)(1000 * *((unsigned short *)g_ScenarioClass_Instance + 6806)) / 100; /*0x4846ab*/
  this->u16_10A = v2; /*0x4846b2*/
  this->u16_10E = v2; /*0x4846b9*/
  if ( LightningStorm::IsActive() ) /*0x4846c0*/
  {
    v3 = this->u32_11B; /*0x4846cf*/
    this->u16_10A += v3 * *((unsigned short *)g_ScenarioClass_Instance + 6830) /*0x4846ec*/
                            - *((unsigned short *)g_ScenarioClass_Instance + 6828);
    v4 = (v3 + 4) * *((unsigned short *)g_ScenarioClass_Instance + 6830) - *((unsigned short *)g_ScenarioClass_Instance + 6828); /*0x484703*/
  }
  else if ( PsyDom::IsActive() ) /*0x48470f*/
  {
    v5 = this->u32_11B; /*0x48471e*/
    this->u16_10A += v5 * *((unsigned short *)g_ScenarioClass_Instance + 6856) /*0x48473b*/
                            - *((unsigned short *)g_ScenarioClass_Instance + 6854);
    v4 = (v5 + 4) * *((unsigned short *)g_ScenarioClass_Instance + 6856) - *((unsigned short *)g_ScenarioClass_Instance + 6854); /*0x484752*/
  }
  else
  {
    v6 = !NukeFlash::IsActive(); /*0x484766*/
    v7 = this->u32_11B; /*0x484768*/
    if ( v6 ) /*0x484770*/
    {
      this->u16_10A += v7 * *((unsigned short *)g_ScenarioClass_Instance + 6818) /*0x4847bc*/
                              - *((unsigned short *)g_ScenarioClass_Instance + 6816);
      v4 = (v7 + 4) * *((unsigned short *)g_ScenarioClass_Instance + 6818) - *((unsigned short *)g_ScenarioClass_Instance + 6816); /*0x4847d3*/
    }
    else
    {
      this->u16_10A += v7 * *((unsigned short *)g_ScenarioClass_Instance + 6842) /*0x484787*/
                              - *((unsigned short *)g_ScenarioClass_Instance + 6840);
      v4 = (v7 + 4) * *((unsigned short *)g_ScenarioClass_Instance + 6842) - *((unsigned short *)g_ScenarioClass_Instance + 6840); /*0x48479e*/
    }
  }
  v8 = *(int16_t *)(&this->u32_686); /*0x4847da*/
  v9 = this->q104; /*0x4847e1*/
  this->u16_10E += v4; /*0x4847e7*/
  this->u16_10C = (unsigned int)(v9 * v8) >> 16; /*0x4847f4*/
  v10 = v9 * *(int16_t *)(&this->u32_6C0); /*0x484802*/
  v11 = this->u16_10A; /*0x484805*/
  v12 = v10 >> 16; /*0x48480c*/
  this->u16_10E = v12; /*0x484814*/
  if ( v11 >= 2000 ) /*0x48481e*/
    v11 = 2000; /*0x484820*/
  this->u16_10A = v11; /*0x484825*/
  v13 = this->u16_10C; /*0x484838*/
  if ( v13 >= 2000 ) /*0x48483b*/
    v13 = 2000; /*0x48483d*/
  this->u16_10C = v13; /*0x484846*/
  v14 = v12; /*0x48484d*/
  if ( (int16_t)v12 >= 2000 ) /*0x484850*/
    v14 = 2000; /*0x484852*/
  v15 = this->u16_10A; /*0x484857*/
  this->u16_10E = v14; /*0x48485e*/
  if ( v15 <= 0 ) /*0x484868*/
    v15 = 0; /*0x48486f*/
  this->u16_10A = v15; /*0x484874*/
  if ( v13 <= 0 ) /*0x48487b*/
    v16 = 0; /*0x484882*/
  else
    v16 = v13; /*0x48487d*/
  this->u16_10C = v16; /*0x484887*/
  if ( v14 <= 0 ) /*0x48488e*/
  {
    this->u16_10E = 0; /*0x48489e*/
    return 0; /*0x48489c*/
  }
  else
  {
    this->u16_10E = (unsigned int)((gamemd::ScenarioClass **)(v14));
    return (gamemd::ScenarioClass **)(v14);
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
  (*(void (__thiscall **)(void *, AudioStream *, unsigned int))(*(unsigned int *)stru_887598.lineTrailer + 64))( /*0x4f44a2*/
    stru_887598.lineTrailer,
    DSurface_Composite,
    0);
  v3 = this->vfptr[3]; /*0x4f44a5*/
  this->vfptr[3] = 0; /*0x4f44a8*/
  IDA_LOBYTE(v6) = v3 != 0; /*0x4f44b7*/
  v7 = v3 == 2; /*0x4f44be*/
  if ( !UI_Helper() ) /*0x4f44c2*/
  {
    TacticalMap::Render((int)g_TacticalClass_Instance, (int)DSurface_Composite, v6, 0); /*0x4f44df*/
    TacticalMap::Render((int)g_TacticalClass_Instance, (int)DSurface_Composite, v6, 1); /*0x4f44f4*/
    (*(void (__thiscall **)(GScreenClass *, bool))(this->vfptr[0] + 64))(this, v7); /*0x4f4502*/
    TacticalMap::Render((int)g_TacticalClass_Instance, (int)DSurface_Composite, v6, 2); /*0x4f4515*/
  }
  if ( byte_B0B519 && !stru_A8EB00.?[391] ) /*0x4f452b*/
  {
    (*(void (__thiscall **)(void *, DSurface *, int))(*(unsigned int *)stru_887598.lineTrailer + 64))( /*0x4f453d*/
      stru_887598.lineTrailer,
      DSurface_Sidebar,
      1);
    byte_B0B519 = 0; /*0x4f4540*/
  }
  if ( *(unsigned int *)&stru_A8EB00.?[880] ) /*0x4f454f*/
    (*(void (__thiscall **)(unsigned int, unsigned int))(**(unsigned int **)&stru_A8EB00.?[880] + 44))(*(unsigned int *)&stru_A8EB00.?[880], 0); /*0x4f4555*/
  TacticalMap::DrawCursor((TacticalMap *)&stru_A8BB1C.__pad_87[189]); /*0x4f455d*/
  if ( *(unsigned int *)&stru_88732C.__pad_1C[32] ) /*0x4f456a*/
    (*(void (__thiscall **)(unsigned int, unsigned int))(**(unsigned int **)&stru_88732C.__pad_1C[32] + 12))( /*0x4f4570*/
      *(unsigned int *)&stru_88732C.__pad_1C[32],
      0);
  if ( byte_A8B8B4 ) /*0x4f457a*/
    DrawHUD(v5); /*0x4f457e*/
  (*(void (__thiscall **)(void *, AudioStream *, unsigned int))(*(unsigned int *)stru_887598.lineTrailer + 60))( /*0x4f4593*/
    stru_887598.lineTrailer,
    DSurface_Composite,
    0);
  result = (*(int (__thiscall **)(GScreenClass *))(this->vfptr[0] + 68))(this); /*0x4f459a*/
  g_DSurface_Hidden_2 = v1; /*0x4f459d*/
  return result; /*0x4f45a3*/
}
} // namespace gamemd
// 0x5AEA10
namespace gamemd {
void TacticalMap::MultiplyByScalar(ObjectClass * aP1)
{
  *this = aP1 * *this; /*0x5aea16*/
  this->TacticalMap_field_10 = aP1 * this->TacticalMap_field_10; /*0x5aea1f*/
  this->TacticalMap_field_20 = aP1 * this->TacticalMap_field_20; /*0x5aea29*/
  this->TacticalMap_field_04 = aP1 * this->TacticalMap_field_04; /*0x5aea33*/
  this->u32_14 = aP1 * this->u32_14; /*0x5aea3d*/
  this->u32_24 = aP1 * this->u32_24; /*0x5aea47*/
  this->u32_8 = aP1 * this->u32_8; /*0x5aea51*/
  this->m_TintFactor = aP1 * this->m_TintFactor; /*0x5aea5b*/
  *(&this->TacticalMap_field_040) = aP1 * *(&this->TacticalMap_field_040); /*0x5aea65*/
}
} // namespace gamemd
// 0x5D49A0
namespace gamemd {
int TacticalMap::DrawCursor()
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
  result = IDA_BYTE1(this->m_TintFactor); /*0x5d49b4*/
  if ( result ) /*0x5d49b9*/
  {
    (*(void (__thiscall **)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x5d49c8*/
    (*(void (__thiscall **)(unsigned int, int))(**((unsigned int **)this + 9) + 108))(this->u32_24, 1); /*0x5d49d2*/
    TextRenderer::GetInstance(); /*0x5d49db*/
    v3 = Text::MeasureWidth(*(unsigned int *)(this->u32_24 + 48), 0); /*0x5d49f8*/
    if ( this->u32_2B8 /*0x5d4a1b*/
      && this->u32_2B0 - this->u32_2B4 < this->TacticalMap_field_10 - 1
      && (*(uint8_t (__thiscall **)(unsigned int))(**((unsigned int **)this + 9) + 88))(this->u32_24) )
    {
      IDA_LOWORD(v9) = this->u32_2B8; /*0x5d4a29*/
      v4 = (unsigned int *)this->u32_24; /*0x5d4a2e*/
      v5 = v4[3]; /*0x5d4a31*/
      v10[1] = v4[4]; /*0x5d4a39*/
      v10[0] = v3 + v5; /*0x5d4a3d*/
      v8 = v4[11]; /*0x5d4a4c*/
      v7 = *(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * v4[13]); /*0x5d4a56*/
      v6 = (unsigned int *)(*(int (__thiscall **)(AudioStream *, unsigned char *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x5d4a65*/
                       g_DSurface_Hidden_2,
                       v12);
      TextRenderer::DrawText(&v11, (size_t)&v9, (int)g_DSurface_Hidden_2, v6, (int)v10, v7, 0, v8); /*0x5d4a79*/
    }
    result = (*(int (__thiscall **)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x5d4a89*/
  }
  if ( this->TacticalMap_field_00 ) /*0x5d4a8d*/
    return (*(char (__thiscall **)(int, int))(*(unsigned int *)this->TacticalMap_field_00 + 44))( /*0x5d4a98*/
             this->TacticalMap_field_00,
             1);
  return result; /*0x5d4a8f*/
}
} // namespace gamemd
// 0x6D1C20
namespace gamemd {
int TacticalMap::Construct()
{
  float v5; // [esp+0h] [ebp-10h]

  AbstractClass::Constructor(); /*0x6d1c25*/
  this->Tactical_field_0xA8 = (IUnknown *)-1; /*0x6d1c2c*/
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
  this->Tactical_field_0xDA4 = (AbstractClass *)Timer::GetTicks(); /*0x6d1d35*/
  *(unsigned int *)&this->__pad_DA8[4] = 0; /*0x6d1d3b*/
  *(unsigned int *)&this->__pad_DA8[8] = 0; /*0x6d1d4e*/
  *(unsigned int *)this->__pad_0 = (void*)&Tactical_vftable; /*0x6d1d54*/
  *(unsigned int *)&this->Tactical_field_0x2[2] = (void*)&Tactical_vftable; /*0x6d1d5a*/
  this->Tactical_field_0x8[0] = (int)&Tactical_vftable; /*0x6d1d61*/
  this->Tactical_field_0xC[0] = (int)&Tactical_vftable; /*0x6d1d68*/
  memset(&this->__pad_AC[56], 0, 0xC80u); /*0x6d1d6f*/
  *(unsigned short *)&this->__pad_10[20] = 0; /*0x6d1d77*/
  *(unsigned int *)&this->__pad_34[112] = -1; /*0x6d1d7d*/
  Matrix3x4::Identity((Matrix3x4 *)&this->Tactical_field_0xDB4); /*0x6d1d87*/
  dbl_B0CD88 = dbl_B0CD88; /*0x6d1d95*/
  Matrix3x3::RotateX((int *)&this->Tactical_field_0xDB4, dbl_B0CD88); /*0x6d1d98*/
  dbl_B0CE98 = dbl_B0CE98; /*0x6d1da6*/
  Matrix2D::Rotate((int *)&this->Tactical_field_0xDB4, dbl_B0CE98); /*0x6d1da9*/
  v5 = 60.0 / dbl_B0CD78; /*0x6d1dbb*/
  TacticalMap::MultiplyByScalar((float *)&this->Tactical_field_0xDB4, v5); /*0x6d1dc0*/
  this->u32_DE4 = 1082689742; /*0x6d1dca*/
  this->u32_DE8 = 1091078350; /*0x6d1dd4*/
  this->u32_DEC = 0; /*0x6d1dda*/
  this->u32_DF0 = 0; /*0x6d1de0*/
  this->u32_DF4 = -1064793906; /*0x6d1de6*/
  this->u32_DF8 = 1091078350; /*0x6d1df0*/
  this->u32_DFC = 0; /*0x6d1df6*/
  this->u32_E00 = 0; /*0x6d1dfc*/
  this->u32_E04 = 0; /*0x6d1e02*/
  this->u32_E08 = 0; /*0x6d1e08*/
  this->u32_E0C = 1065353216; /*0x6d1e0e*/
  this->u32_E10 = 0; /*0x6d1e18*/
  g_TacticalClass_Instance = (LPPERSISTSTREAM)this; /*0x6d1e1e*/
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
  int * v11;
  char *v14; // esi
  char *v15; // edi
  int result; // eax
  int v17; // ebp
  unsigned int **v18; // edi
  int *Coords; // eax
  int *v20; // eax
  int v21; // ecx
  int v24; // [esp+10h] [ebp-60h]
  int v25; // [esp+14h] [ebp-5Ch] BYREF
  int v26; // [esp+18h] [ebp-58h]
  int v27; // [esp+1Ch] [ebp-54h]
  int v28; // [esp+20h] [ebp-50h] BYREF
  int v29; // [esp+24h] [ebp-4Ch]
  int v30[2]; // [esp+28h] [ebp-48h] BYREF
  int * v31;
  int * v32;
  int * v33;
  int * v34;
  int v35[4]; // [esp+40h] [ebp-30h] BYREF
  unsigned int v36[4]; // [esp+50h] [ebp-20h] BYREF
  unsigned int v37[4]; // [esp+60h] [ebp-10h] BYREF

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
          v31 = (int *)(*(unsigned int *)((char *)g_CraterPool + v7));
          v32 = (int *)(*(unsigned int *)((char *)g_CraterPool + v7 + 4));
          v33 = (int *)(*(unsigned int *)((char *)g_CraterPool + v7 + 8));
          v34 = (int *)(*(unsigned int *)((char *)g_CraterPool + v7 + 12));
          v31 += aP2; /*0x6d2bc7*/
          v32 += a4; /*0x6d2bd0*/
          v26 = (int)(g_Map_VisibleRect);
          v29 = (int)(g_Map_VisibleRect);
          v25 = (int)(DSurface_ViewBounds);
          v28 = (int)(DSurface_ViewBounds);
          g_DSurface_WindowOffset = (int)(g_DSurface_WindowOffset);
          g_Map_VisibleRectOffset = (int)(g_Map_VisibleRectOffset);
          v8 = (int)(Coord2D::Sub(&v28, v30, &v25));
          v9 = (int)(Rect::Construct(v36, v8, g_Map_VisibleRectOffset, g_DSurface_WindowOffset));
          v35[0] = (int)(*v9);
          v35[1] = (int)(v9[1]);
          v35[2] = (int)(v9[2]);
          v35[3] = (int)(v9[3]);
          v10 = (int)(ClipRectIntersection(v37, v35, &v31, 0, 0));
          v31 = (int)(*v10);
          v32 = v10[1]; /*0x6d2c50*/
          v33 = v10[2]; /*0x6d2c57*/
          v34 = v10[3]; /*0x6d2c64*/
          v11 = (char *)g_CraterPool + v7; /*0x6d2c68*/
          *v11 = v31; /*0x6d2c6b*/
          v11[1] = v32; /*0x6d2c72*/
          v11[2] = v33; /*0x6d2c79*/
          v11[3] = v34; /*0x6d2c80*/
          if ( v33 > 0 && v34 > 0 ) /*0x6d2c91*/
          {
            TacticalMap::FillScanlinesOpaque(v31, v32, v33, v34); /*0x6d2cee*/
          }
          else if ( v6 < g_CraterCreationState ) /*0x6d2c9a*/
          {
            v6 = v6; /*0x6d2c9d*/
            if ( v6 < --g_CraterCreationState ) /*0x6d2ca6*/
            {
              v7 = v7; /*0x6d2ca8*/
              do /*0x6d2cc8*/
              {
                ++v6; /*0x6d2cb0*/
                v14 = (char *)g_CraterPool + v7 + 20; /*0x6d2cb1*/
                v15 = (char *)g_CraterPool + v7; /*0x6d2cb5*/
                v7 += 20; /*0x6d2cbd*/
                qmemcpy(v15, v14, 0x14u); /*0x6d2cc0*/
              }
              while ( v6 < g_CraterCreationState ); /*0x6d2cc8*/
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
  result = *(&this->abstractFlags6); /*0x6d2d03*/
  if ( result > 0 && !arg0 ) /*0x6d2d17*/
  {
    v17 = 0; /*0x6d2d1d*/
    v18 = (unsigned int **)(&this->abstractFlags7); /*0x6d2d27*/
    do /*0x6d2dc2*/
    {
      Coords = CellClass::GetCoords(*v18, &v31); /*0x6d2d34*/
      v25 = *Coords; /*0x6d2d3b*/
      v26 = Coords[1]; /*0x6d2d47*/
      v27 = 0; /*0x6d2d59*/
      v20 = Coord::To_ScreenRaw(v30, &v25); /*0x6d2d61*/
      v21 = v20[1] - *(&this->uniqueId5); /*0x6d2d81*/
      v28 = *v20 - *(&this->uniqueId4) + DSurface_ViewBounds - 30; /*0x6d2d8d*/
      v29 = g_Map_VisibleRect + v21 - 15; /*0x6d2d9c*/
      if ( g_hWnd ) /*0x6d2da0*/
        DSurface::Process(&v28, a2); /*0x6d2db1*/
      result = *(&this->abstractFlags6); /*0x6d2db6*/
      ++v17; /*0x6d2dbc*/
      ++v18; /*0x6d2dbd*/
    }
    while ( v17 < result ); /*0x6d2dc2*/
  }
  return (void *)(result);
}
} // namespace gamemd
// 0x6D3D10
namespace gamemd {
AbstractClass * * TacticalMap_Render()
{
// (no pseudocode — ASM-only function)
} // namespace gamemd
}

// 0x6D8DB0
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
  int *v44; // ecx
  int v45; // eax
  int v46; // edx
  int v47; // ecx
  int v49; // eax
  IPersistStream v50; // eax
  int v51; // edx
  int v52; // ecx
  int v53; // ecx
  BuildingClass *v54; // ebx
  int *v55; // eax
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
  unsigned char v104[12]; // [esp+B8h] [ebp-5Ch] BYREF
  unsigned char v105[12]; // [esp+C4h] [ebp-50h] BYREF
  int v106; // [esp+D0h] [ebp-44h] BYREF
  char v107[12]; // [esp+D8h] [ebp-3Ch] BYREF
  char v108[12]; // [esp+E4h] [ebp-30h] BYREF
  char v109[12]; // [esp+F0h] [ebp-24h] BYREF
  char v110[12]; // [esp+FCh] [ebp-18h] BYREF
  char v111[12]; // [esp+108h] [ebp-Ch] BYREF

  v2 = *(unsigned int *)DSurface_ViewBounds.__pad_8; /*0x6d8db7*/
  v3 = this->u32_B0; /*0x6d8dc4*/
  v4 = this->u32_B4; /*0x6d8dd5*/
  v81 = v3 + *(unsigned int *)DSurface_ViewBounds.__pad_8 / 2; /*0x6d8ddb*/
  v77 = *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d8de5*/
  v5 = (float *)((char *)this + 3556); /*0x6d8deb*/
  *(float *)v83.__pad_0 = (float)v81; /*0x6d8df1*/
  v82 = v4 - *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]; /*0x6d8df5*/
  v84 = 0; /*0x6d8e08*/
  *(float *)&v83.IsoCoord_field_0x04 = (float)(v4 - *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]); /*0x6d8e10*/
  v6 = (IsoCoord *)TransformMatrix3x4Point((float *)v97.__pad_0, (float *)this + 889, (float *)v83.__pad_0); /*0x6d8e14*/
  v83 = *v6; /*0x6d8e1b*/
  v84 = *(unsigned int *)v6[1].__pad_0; /*0x6d8e2d*/
  IDA_LOWORD(v7) = Math::RoundToInt(*(float *)v83.__pad_0); /*0x6d8e31*/
  v86 = v7; /*0x6d8e3a*/
  IDA_LOWORD(v8) = Math::RoundToInt(*(float *)&v83.IsoCoord_field_0x04); /*0x6d8e3e*/
  v8 = v8; /*0x6d8e43*/
  v81 = v3 + 2 * v2; /*0x6d8e4a*/
  *(float *)v83.__pad_0 = (float)v81; /*0x6d8e62*/
  v78 = v77 / 2 + v4; /*0x6d8e74*/
  v82 = v78; /*0x6d8e66*/
  v84 = 0; /*0x6d8e78*/
  *(float *)&v83.IsoCoord_field_0x04 = (float)v78; /*0x6d8e80*/
  v9 = (IsoCoord *)TransformMatrix3x4Point((float *)v97.__pad_0, v5, (float *)v83.__pad_0); /*0x6d8e84*/
  v83 = *v9; /*0x6d8e8b*/
  v84 = *(unsigned int *)v9[1].__pad_0; /*0x6d8e9d*/
  IDA_LOWORD(v10) = Math::RoundToInt(*(float *)v83.__pad_0); /*0x6d8ea1*/
  v10 = v10; /*0x6d8ea8*/
  v81 = v3 - v2; /*0x6d8eae*/
  v82 = v78; /*0x6d8eb6*/
  *(float *)v83.__pad_0 = (float)(v3 - v2); /*0x6d8eba*/
  *(float *)&v83.IsoCoord_field_0x04 = (float)v78; /*0x6d8ecd*/
  v84 = 0; /*0x6d8ed1*/
  v12 = (IsoCoord *)TransformMatrix3x4Point((float *)v97.__pad_0, v5, (float *)v83.__pad_0); /*0x6d8ed9*/
  v83 = *v12; /*0x6d8ee0*/
  v84 = *(unsigned int *)v12[1].__pad_0; /*0x6d8ef2*/
  IDA_LOWORD(v13) = Math::RoundToInt(*(float *)&v83.IsoCoord_field_0x04); /*0x6d8ef6*/
  v14 = v86; /*0x6d8efb*/
  v95 = 2 * (v10 - v86); /*0x6d8f03*/
  v15 = v8; /*0x6d8f07*/
  v96 = 2 * (v13 - v8); /*0x6d8f0f*/
  v16 = 0; /*0x6d8f13*/
  v85 = 0; /*0x6d8f15*/
  do /*0x6d95a9*/
  {
    v88 = 0; /*0x6d8f1c*/
    v17 = 24 * v16; /*0x6d8f24*/
    v79 = 24 * v16; /*0x6d8f27*/
    if ( dword_8A0370[6 * v16] > 0 ) /*0x6d8f33*/
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
          (*(void (__thiscall **)(int *, char *, unsigned int))(*v18 + 76))(v18, v110, 0); /*0x6d8fc0*/
          if ( ((int)dword_A8B230->vtable0 & 0x1000) != 0 ) /*0x6d8fce*/
          {
            if ( (uint8_t)Game::Stub3((int)&v89) ) /*0x6d8fda*/
              goto LABEL_54; /*0x6d8fe1*/
          }
          v21 = (unsigned int *)(*(int (__thiscall **)(int *, char *))(*v18 + 72))(v18, v107); /*0x6d8ff3*/
          g_TacticalClass_Instance = g_TacticalClass_Instance; /*0x6d8ff6*/
          v23 = Coord::To_ScreenRaw(&v106, v21); /*0x6d9007*/
          v81 = *v23; /*0x6d9010*/
          v82 = v23[1]; /*0x6d9017*/
          v24 = v82 - *(unsigned int *)&g_TacticalClass_Instance[45]; /*0x6d9029*/
          v81 -= *(unsigned int *)&g_TacticalClass_Instance[44]; /*0x6d9030*/
          v82 = v24; /*0x6d9034*/
          if ( v81 >= -360 && v81 <= dword_B0CE30 + 360 && v24 >= -180 && v24 <= dword_B0CE34 + 180 ) /*0x6d906a*/
          {
            v25 = *v18; /*0x6d9070*/
            *((unsigned char *)v18 + 153) = 1; /*0x6d907e*/
            (*(void (__thiscall **)(int *, int *, CellStruct *))(v25 + 268))(v18, &v81, &DSurface_ViewBounds); /*0x6d9085*/
            (*(void (__thiscall **)(int *, CellStruct *, int, unsigned int))(*v18 + 260))(v18, &DSurface_ViewBounds, a2, 0); /*0x6d909e*/
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
          v29 = (unsigned int *)(*(int (__thiscall **)(int *, char *))(v28 + 72))(v18, v109); /*0x6d9118*/
          if ( Coord::To_Screen((Coord *)g_TacticalClass_Instance, v29, v102) ) /*0x6d9122*/
          {
            (*(void (__thiscall **)(int *, int *, CellStruct *))(*v18 + 268))(v18, v102, &DSurface_ViewBounds); /*0x6d913c*/
            (*(void (__thiscall **)(int *, int *, CellStruct *))(*v18 + 272))(v18, v102, &DSurface_ViewBounds); /*0x6d9153*/
          }
          v30 = *v18; /*0x6d9159*/
          v76 = 1; /*0x6d915b*/
        }
        else
        {
  LABEL_25:
          v31 = (*(int (__thiscall **)(int *))(*v18 + 44))(v18); /*0x6d917b*/
          if ( v31 == 4 ) /*0x6d9181*/
          {
            v32 = (int *)(*(int (__thiscall **)(int *, char *))(*v18 + 72))(v18, v111); /*0x6d9196*/
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
                v36 = (*(int (__thiscall **)(int *, char *))(*v18 + 72))(v18, v108); /*0x6d9205*/
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
              v41 = (int *)(*(int (__thiscall **)(int *, unsigned char *))(*v18 + 72))(v18, v104); /*0x6d9310*/
              g_TacticalClass_Instance = g_TacticalClass_Instance; /*0x6d9313*/
              v41 = v41; /*0x6d9319*/
              v44 = IsoCoord::ToPixel(&v97, *v41, v41[1]); /*0x6d932b*/
              v45 = *v44; /*0x6d932d*/
              v46 = v44[1]; /*0x6d932f*/
              v47 = v41[2]; /*0x6d9332*/
              v46 = v46; /*0x6d9335*/
              v45 = v45; /*0x6d9343*/
              v49 = ZCoordToScreenY(v47); /*0x6d934a*/
              *(unsigned int *)v94.__pad_0 = v45 / 256; /*0x6d935f*/
              v94.Vector2_field_0x04 = v46 / 256 - v49; /*0x6d936e*/
              v50 = g_TacticalClass_Instance[45]; /*0x6d9378*/
              v100[0] = g_TacticalClass_Instance[44]; /*0x6d9383*/
              v100[1] = v50; /*0x6d938a*/
              Vector2::Subtract(&v94, v100); /*0x6d9391*/
              if ( *(int *)v94.__pad_0 >= -360 /*0x6d93ca*/
                && *(int *)v94.__pad_0 <= dword_B0CE30 + 360
                && v94.Vector2_field_0x04 >= -180
                && v94.Vector2_field_0x04 <= dword_B0CE34 + 180 )
              {
                v51 = *v18; /*0x6d93cc*/
                *((unsigned char *)v18 + 153) = 1; /*0x6d93da*/
                (*(void (__thiscall **)(int *, Vector2 *, CellStruct *))(v51 + 268))(v18, &v94, &DSurface_ViewBounds); /*0x6d93e1*/
                (*(void (__thiscall **)(int *, CellStruct *, int, unsigned int))(*v18 + 260))( /*0x6d93fa*/
                  v18,
                  &DSurface_ViewBounds,
                  a2,
                  0);
              }
              v17 = v79; /*0x6d9400*/
              v14 = v86; /*0x6d9404*/
  LABEL_53:
              v15 = v8; /*0x6d9408*/
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
        (*(void (__thiscall **)(int *, CellStruct *, int, int))(v30 + 260))(v18, &DSurface_ViewBounds, a2, v76); /*0x6d916c*/
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
          if ( v54->? && v54->? ) /*0x6d9458*/
          {
            v55 = (int *)(*((int (__thiscall **)(BuildingClass *, unsigned char *))v54->TechnoClass + 43))(v54, v105); /*0x6d9472*/
            g_TacticalClass_Instance = g_TacticalClass_Instance; /*0x6d9478*/
            v55 = v55; /*0x6d947e*/
            v58 = IsoCoord::ToPixel(&v83, *v55, v55[1]); /*0x6d948b*/
            v59 = v58[1]; /*0x6d9494*/
            v60 = (int)*v58; /*0x6d9497*/
            v99 = v59; /*0x6d949e*/
            v61 = (IDA_BYTE4(v60) + (int)v60) >> 8; /*0x6d94a9*/
            v62 = ZCoordToScreenY(v55[2]); /*0x6d94ac*/
            v92 = v61; /*0x6d94be*/
            v93 = v99 / 256 - v62; /*0x6d94c9*/
            v63 = v61 - *(unsigned int *)&g_TacticalClass_Instance[44]; /*0x6d94d9*/
            v64 = v93 - *(unsigned int *)&g_TacticalClass_Instance[45]; /*0x6d94db*/
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
            v15 = v8; /*0x6d9583*/
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
  p_count = &stru_8A0360.count; /*0x6d95af*/
  v85 = &stru_8A0360.count; /*0x6d95b4*/
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
                || ((*(void (__thiscall **)(int, unsigned char *, unsigned int))(*(unsigned int *)v67 + 76))(v67, v105, 0), !g_hWnd)
                || stru_A8EB00.?[391]
                || ((int)dword_A8B230->vtable0 & 0x1000) == 0
                || (v97 = *(IsoCoord *)(v67 + 156),
                    v98 = *(unsigned int *)(v67 + 164),
                    !(uint8_t)Game::Stub3((int)&v97)) )
              {
                v68 = (int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v67 + 72))(v67, v104); /*0x6d9676*/
                v69 = *v68; /*0x6d9683*/
                v99 = v68[1]; /*0x6d9689*/
                v92 = v68[2]; /*0x6d9697*/
                *(unsigned int *)v83.__pad_0 = -60 * v99 / 2 + 60 * v69 / 2; /*0x6d96d0*/
                v70 = *(unsigned int *)v83.__pad_0 / 256; /*0x6d96f7*/
                v71 = (30 * v99 / 2 + 30 * v69 / 2) / 256; /*0x6d96fa*/
                IDA_LOWORD(v72) = Math::RoundToInt((double)v92 * dbl_B0CD48 + (double)(v92 >= 728) + 0.5); /*0x6d9721*/
                v81 = v70; /*0x6d972d*/
                v82 = v71 - v72; /*0x6d9731*/
                v73 = v70 - *(unsigned int *)&g_TacticalClass_Instance[44]; /*0x6d9741*/
                v74 = v71 - v72 - *(unsigned int *)&g_TacticalClass_Instance[45]; /*0x6d9743*/
                v81 = v73; /*0x6d974b*/
                v82 = v74; /*0x6d974f*/
                if ( v73 >= -360 && v73 <= dword_B0CE30 + 360 && v74 >= -180 && v74 <= dword_B0CE34 + 180 ) /*0x6d9779*/
                  (*(void (__thiscall **)(int, int *, CellStruct *))(*(unsigned int *)v67 + 272))( /*0x6d9789*/
                    v67,
                    &v81,
                    &DSurface_ViewBounds);
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
// 0x6DA180
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

  if ( this->u32_D90 || (result = this->u32_D94) != 0 ) /*0x6da195*/
  {
    v2 = this->u32_D90; /*0x6da19b*/
    v3 = this->u32_D98; /*0x6da1a1*/
    v4 = this->u32_D94; /*0x6da1a9*/
    v5 = this->u32_D9C; /*0x6da1af*/
    if ( v3 < v2 ) /*0x6da1b8*/
    {
      v2 = v2; /*0x6da1ba*/
      v2 = v3; /*0x6da1bc*/
      v3 = v2; /*0x6da1be*/
    }
    if ( v5 < v4 ) /*0x6da1c2*/
    {
      v4 = v4; /*0x6da1c4*/
      v4 = v5; /*0x6da1c6*/
      v5 = v4; /*0x6da1c8*/
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
    return (*(int (__thiscall **)(AudioStream *, CellStruct *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 /*0x6da21e*/
                                                                             + 84))(
             g_DSurface_Hidden_2,
             &DSurface_ViewBounds,
             v10,
             v9);
  }
  return result; /*0x6da224*/
}
// 0x7BCFB0
unsigned int TacticalMap::FillScanlinesOpaque(int a2, int a3, TacticalMap * aP3, int a5)
{
  TacticalMap *v5; // edi
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
  v6 = (*(int (__thiscall **)(int, int, int))(*(unsigned int *)this->TacticalMap_field_14 + 92))( /*0x7bcfd0*/
         this->TacticalMap_field_14,
         a2,
         a3);
  (*(void (__thiscall **)(int))(*(unsigned int *)v5->TacticalMap_field_14 + 96))(v5->TacticalMap_field_14); /*0x7bcfd4*/
  result = v5->TacticalMap_field_1C; /*0x7bcfda*/
  v8 = v6 + v5->TacticalMap_field_10; /*0x7bcfdd*/
  if ( v8 >= result ) /*0x7bcfe1*/
    v8 -= v5->TacticalMap_field_20; /*0x7bcfe3*/
  if ( a5 > 0 ) /*0x7bcfec*/
  {
    v26 = a5; /*0x7bcff4*/
    do /*0x7bd0cf*/
    {
      v9 = aP3; /*0x7bcff8*/
      if ( v8 + 2 * aP3 < result ) /*0x7bd001*/
      {
        v18 = aP3; /*0x7bd0e2*/
        v19 = (char *)v8; /*0x7bd0e4*/
        if ( (v8 & 2) != 0 && aP3 ) /*0x7bd0ea*/
        {
          *(unsigned short *)v8 = -1; /*0x7bd0ec*/
          v19 = (char *)(v8 + 2); /*0x7bd0f1*/
          v18 = aP3 - 1; /*0x7bd0f4*/
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
          v9 = aP3; /*0x7bd041*/
          v12 = &v10[4 * v13]; /*0x7bd045*/
        }
        if ( (v23 & 1) != 0 && v12 ) /*0x7bd052*/
          *(unsigned short *)v12 = -1; /*0x7bd054*/
        v14 = v9 - v11; /*0x7bd05f*/
        m_TintFactor = this->m_TintFactor; /*0x7bd061*/
        v25 = v14; /*0x7bd064*/
        v24 = m_TintFactor; /*0x7bd06b*/
        if ( (IDA_LOBYTE(m_TintFactor) & 2) != 0 && v14 ) /*0x7bd073*/
        {
          *(unsigned short *)IDA_LODWORD(m_TintFactor) = -1; /*0x7bd075*/
          IDA_LODWORD(m_TintFactor) += 2; /*0x7bd07a*/
          --v14; /*0x7bd07d*/
          v24 = m_TintFactor; /*0x7bd07e*/
          v25 = v14; /*0x7bd082*/
        }
        v16 = 0; /*0x7bd088*/
        v17 = v14 >> 1; /*0x7bd08d*/
        if ( v14 >> 1 ) /*0x7bd08d*/
        {
          memset((void *)IDA_LODWORD(m_TintFactor), 0xFFu, 4 * v17); /*0x7bd098*/
          v16 = (unsigned short *)(IDA_LODWORD(v24) + 4 * v17); /*0x7bd09e*/
          IDA_LOBYTE(v14) = v25; /*0x7bd0a1*/
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