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
#include "e4/classes/AudioStream_e4.hpp"

// 0x484680
namespace gamemd {
ScenarioClass * * TacticalMap::ComputeScreenTint()
{
  __int16 v2; // dx
  __int16 v3; // ax
  __int16 v4; // dx
  __int16 v5; // ax
  bool v6; // zf
  __int16 v7; // ax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  __int16 v11; // cx
  int v12; // eax
  __int16 v13; // dx
  __int16 v14; // cx
  __int16 v15; // ax
  __int16 v16; // ax

  v2 = this->q108 + (__int16)(1000 * *((_WORD *)g_ScenarioClass_Instance + 6806)) / 100; /*0x4846ab*/
  this->u16_10A = v2; /*0x4846b2*/
  this->u16_10E = v2; /*0x4846b9*/
  if ( LightningStorm::IsActive() ) /*0x4846c0*/
  {
    v3 = this->u32_11B; /*0x4846cf*/
    this->u16_10A += v3 * *((_WORD *)g_ScenarioClass_Instance + 6830) /*0x4846ec*/
                            - *((_WORD *)g_ScenarioClass_Instance + 6828);
    v4 = (v3 + 4) * *((_WORD *)g_ScenarioClass_Instance + 6830) - *((_WORD *)g_ScenarioClass_Instance + 6828); /*0x484703*/
  }
  else if ( PsyDom::IsActive() ) /*0x48470f*/
  {
    v5 = this->u32_11B; /*0x48471e*/
    this->u16_10A += v5 * *((_WORD *)g_ScenarioClass_Instance + 6856) /*0x48473b*/
                            - *((_WORD *)g_ScenarioClass_Instance + 6854);
    v4 = (v5 + 4) * *((_WORD *)g_ScenarioClass_Instance + 6856) - *((_WORD *)g_ScenarioClass_Instance + 6854); /*0x484752*/
  }
  else
  {
    v6 = !NukeFlash::IsActive(); /*0x484766*/
    v7 = this->u32_11B; /*0x484768*/
    if ( v6 ) /*0x484770*/
    {
      this->u16_10A += v7 * *((_WORD *)g_ScenarioClass_Instance + 6818) /*0x4847bc*/
                              - *((_WORD *)g_ScenarioClass_Instance + 6816);
      v4 = (v7 + 4) * *((_WORD *)g_ScenarioClass_Instance + 6818) - *((_WORD *)g_ScenarioClass_Instance + 6816); /*0x4847d3*/
    }
    else
    {
      this->u16_10A += v7 * *((_WORD *)g_ScenarioClass_Instance + 6842) /*0x484787*/
                              - *((_WORD *)g_ScenarioClass_Instance + 6840);
      v4 = (v7 + 4) * *((_WORD *)g_ScenarioClass_Instance + 6842) - *((_WORD *)g_ScenarioClass_Instance + 6840); /*0x48479e*/
    }
  }
  v8 = *(__int16 *)(&this->u32_686); /*0x4847da*/
  v9 = this->q104; /*0x4847e1*/
  this->u16_10E += v4; /*0x4847e7*/
  this->u16_10C = (unsigned int)(v9 * v8) >> 16; /*0x4847f4*/
  v10 = v9 * *(__int16 *)(&this->u32_6C0); /*0x484802*/
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
  if ( (__int16)v12 >= 2000 ) /*0x484850*/
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
    this->u16_10E = v14; /*0x484893*/
    return v14; /*0x484890*/
  }
}
} // namespace gamemd
// 0x4F4480
namespace gamemd {
int TacticalMap::Redraw()
{
  int v3; // eax
  int result; // eax
  int v6; // [esp+8h] [ebp-8h]
  bool v7; // [esp+Ch] [ebp-4h]

  g_DSurface_Hidden_2 = g_DSurface_Hidden_2; /*0x4f4489*/
  g_DSurface_Hidden_2 = DSurface_Composite; /*0x4f4492*/
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 64))( /*0x4f44a2*/
    g_WWMouseClass_Instance,
    DSurface_Composite,
    0);
  v3 = this->TacticalMap_field_0C; /*0x4f44a5*/
  this->TacticalMap_field_0C = 0; /*0x4f44a8*/
  IDA_LOBYTE(v6) = v3 != 0; /*0x4f44b7*/
  v7 = v3 == 2; /*0x4f44be*/
  if ( !(unsigned __int8)UI_Helper() ) /*0x4f44c2*/
  {
    TacticalMap::Render((int)g_TacticalClass_Instance, DSurface_Composite, v6, 0); /*0x4f44df*/
    TacticalMap::Render((int)g_TacticalClass_Instance, DSurface_Composite, v6, 1); /*0x4f44f4*/
    this->vt_slot_64(v7); /*0x4f4502*/
    TacticalMap::Render((int)g_TacticalClass_Instance, DSurface_Composite, v6, 2); /*0x4f4515*/
  }
  if ( byte_B0B519 && !g_ArmageddonMode ) /*0x4f452b*/
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)g_WWMouseClass_Instance + 64))( /*0x4f453d*/
      g_WWMouseClass_Instance,
      DSurface_Sidebar,
      1);
    byte_B0B519 = 0; /*0x4f4540*/
  }
  if ( dword_A8EF54 ) /*0x4f454f*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_A8EF54 + 44))(dword_A8EF54, 0); /*0x4f4555*/
  TacticalMap::DrawCursor(&g_GameNetworkObject); /*0x4f455d*/
  g_TacticalRender = g_TacticalRender; /*0x4f4562*/
  if ( g_TacticalRender ) /*0x4f456a*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)g_TacticalRender + 12))(g_TacticalRender, 0); /*0x4f4570*/
  if ( byte_A8B8B4 ) /*0x4f457a*/
  {
    IDA_LOBYTE(g_TacticalRender) = 0; /*0x4f457c*/
    DrawHUD(g_TacticalRender); /*0x4f457e*/
  }
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 60))( /*0x4f4593*/
    g_WWMouseClass_Instance,
    DSurface_Composite,
    0);
  result = this->vt_slot_68(); /*0x4f459a*/
  g_DSurface_Hidden_2 = g_DSurface_Hidden_2; /*0x4f459d*/
  return result; /*0x4f45a3*/
}
} // namespace gamemd
// 0x5AEA10
namespace gamemd {
void TacticalMap::MultiplyByScalar(ObjectClass * aP1)
{
  *this = aP1 * *this; /*0x5aea16*/
  this->uniqueId = aP1 * this->uniqueId; /*0x5aea1f*/
  this->NeedsSaveOrLink = aP1 * this->NeedsSaveOrLink; /*0x5aea29*/
  this->vtable2 = aP1 * this->vtable2; /*0x5aea33*/
  this->abstractFlags = aP1 * this->abstractFlags; /*0x5aea3d*/
  this->objectTypeFlags = aP1 * this->objectTypeFlags; /*0x5aea47*/
  this->vtable3 = aP1 * this->vtable3; /*0x5aea51*/
  this->nextArrayIndex = aP1 * this->nextArrayIndex; /*0x5aea5b*/
  *(&this->vtable20) = aP1 * *(&this->vtable20); /*0x5aea65*/
}
} // namespace gamemd
// 0x5D49A0
namespace gamemd {
int TacticalMap::DrawCursor()
{
  char result; // al
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // edx
  _DWORD *v6; // eax
  int v7; // [esp-Ch] [ebp-38h]
  int v8; // [esp-4h] [ebp-30h]
  int v9; // [esp+8h] [ebp-24h] BYREF
  _DWORD v10[2]; // [esp+Ch] [ebp-20h] BYREF
  int v11; // [esp+14h] [ebp-18h] BYREF
  _BYTE v12[16]; // [esp+1Ch] [ebp-10h] BYREF

  v9 = 0; /*0x5d49a6*/
  result = *((_BYTE *)this + 25); /*0x5d49b4*/
  if ( result ) /*0x5d49b9*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x5d49c8*/
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 9) + 108))(*(this + 9), 1); /*0x5d49d2*/
    TextRenderer::GetInstance(); /*0x5d49db*/
    v3 = Text::MeasureWidth(*(_DWORD *)(*(this + 9) + 48), 0); /*0x5d49f8*/
    if ( *((_WORD *)this + 348) /*0x5d4a1b*/
      && *(this + 172) - *(this + 173) < *(this + 4) - 1
      && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 9) + 88))(*(this + 9)) )
    {
      IDA_LOWORD(v9) = *((_WORD *)this + 348); /*0x5d4a29*/
      v4 = (_DWORD *)*(this + 9); /*0x5d4a2e*/
      v5 = v4[3]; /*0x5d4a31*/
      v10[1] = v4[4]; /*0x5d4a39*/
      v10[0] = v3 + v5; /*0x5d4a3d*/
      v8 = v4[11]; /*0x5d4a4c*/
      v7 = *((_DWORD *)BuildingTypeClass_AnimTable + v4[13]); /*0x5d4a56*/
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2 + 120))( /*0x5d4a65*/
                       g_DSurface_Hidden_2,
                       v12);
      TextRenderer::DrawText(&v11, (size_t)&v9, g_DSurface_Hidden_2, v6, (int)v10, v7, 0, v8); /*0x5d4a79*/
    }
    result = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x5d4a89*/
  }
  if ( *this ) /*0x5d4a8d*/
    return (1); /*0x5d4a98*/
  return result; /*0x5d4a8f*/
}
} // namespace gamemd
// 0x6D1C20
namespace gamemd {
int TacticalMap::Construct()
{
  float v5; // [esp+0h] [ebp-10h]

  AbstractClass::Constructor(); /*0x6d1c25*/
  this->q0A8 = -1; /*0x6d1c2c*/
  this->q0AC = 0; /*0x6d1c36*/
  this->q2B4 = 0; /*0x6d1c3c*/
  this->q300 = 0; /*0x6d1c42*/
  this->q0B0 = 0; /*0x6d1c48*/
  this->q02D = 0; /*0x6d1c4e*/
  this->q0B8 = 0; /*0x6d1c54*/
  this->u32_2F0 = 0; /*0x6d1c5a*/
  this->q0C4 = 1072693248; /*0x6d1c60*/
  this->q0C8 = dword_B0CE08; /*0x6d1c6f*/
  this->q0CC = dword_B0CE0C; /*0x6d1c7b*/
  this->q0D0 = dword_B0CE08; /*0x6d1c87*/
  this->q0D4 = dword_B0CE0C; /*0x6d1c92*/
  this->q0D8 = 0; /*0x6d1c98*/
  this->q0DC = 0; /*0x6d1c9e*/
  this->q0E0 = 0; /*0x6d1ca4*/
  this->u32_D64 = 0; /*0x6d1caa*/
  this->u32_D68 = 0; /*0x6d1cb0*/
  this->qD6C = 0; /*0x6d1cb6*/
  this->qD70 = 0; /*0x6d1cbc*/
  this->u32_D74 = 0; /*0x6d1cc2*/
  this->u32_D78 = 0; /*0x6d1cc8*/
  this->qD7C = 1; /*0x6d1cce*/
  this->u8_D7D = 0; /*0x6d1cd5*/
  this->u32_D7E = 0; /*0x6d1cdb*/
  this->qD80 = dword_B0CD60; /*0x6d1ced*/
  this->qD84 = dword_B0CD64; /*0x6d1cf8*/
  this->u32_D88 = dword_B0CD68; /*0x6d1d01*/
  this->u32_D8C = dword_B0CD6C; /*0x6d1d09*/
  this->q364 = 0; /*0x6d1d0c*/
  this->u32_D94 = 0; /*0x6d1d12*/
  this->q3660 = 0; /*0x6d1d18*/
  this->qD9C = 0; /*0x6d1d1e*/
  this->qDA0 = 0; /*0x6d1d2a*/
  this->qDA4 = this->qDA8.GetTicks(); /*0x6d1d35*/
  this->q36B = 0; /*0x6d1d3b*/
  this->qDB0 = 0; /*0x6d1d4e*/
  *(_DWORD *)this = &(void*)(void*)&Tactical_vftable; /*0x6d1d54*/
  this->vtable2 = &(void*)(void*)&Tactical_vftable; /*0x6d1d5a*/
  this->vtable3 = &(void*)(void*)&Tactical_vftable; /*0x6d1d61*/
  this->vtable4 = &(void*)(void*)&Tactical_vftable; /*0x6d1d68*/
  memset((void *)(&this->q0588), 0, 0xC80u); /*0x6d1d6f*/
  this->q024 = 0; /*0x6d1d77*/
  this->q0A4 = -1; /*0x6d1d7d*/
  this->qDB4.Identity(); /*0x6d1d87*/
  dbl_B0CD88 = dbl_B0CD88; /*0x6d1d95*/
  Matrix3x3::RotateX(dbl_B0CD88); /*0x6d1d98*/
  dbl_B0CE98 = dbl_B0CE98; /*0x6d1da6*/
  Matrix2D::Rotate(dbl_B0CE98); /*0x6d1da9*/
  v5 = 60.0 / dbl_B0CD78; /*0x6d1dbb*/
  TacticalMap::MultiplyByScalar(v5); /*0x6d1dc0*/
  this->u32_DE4 = 1082689742; /*0x6d1dca*/
  this->u32_DE8 = 1091078350; /*0x6d1dd4*/
  this->u32_DEC = 0; /*0x6d1dda*/
  this->qDF0 = 0; /*0x6d1de0*/
  this->qDF4 = -1064793906; /*0x6d1de6*/
  this->qDF8 = 1091078350; /*0x6d1df0*/
  this->u32_DFC = 0; /*0x6d1df6*/
  this->qE00 = 0; /*0x6d1dfc*/
  this->qE04 = 0; /*0x6d1e02*/
  this->qE08 = 0; /*0x6d1e08*/
  this->qE0C = 1065353216; /*0x6d1e0e*/
  this->qE10 = 0; /*0x6d1e18*/
  g_TacticalClass_Instance = (LPPERSISTSTREAM)this; /*0x6d1e1e*/
  return this; /*0x6d1e26*/
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
  _DWORD *v11; // ecx
  char *v14; // esi
  char *v15; // edi
  int result; // eax
  int v17; // ebp
  _DWORD **v18; // edi
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
  int v31; // [esp+30h] [ebp-40h] BYREF
  int v32; // [esp+34h] [ebp-3Ch]
  int v33; // [esp+38h] [ebp-38h]
  int v34; // [esp+3Ch] [ebp-34h]
  int v35[4]; // [esp+40h] [ebp-30h] BYREF
  _DWORD v36[4]; // [esp+50h] [ebp-20h] BYREF
  _DWORD v37[4]; // [esp+60h] [ebp-10h] BYREF

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
          v31 = *(_DWORD *)((char *)g_CraterPool + v7); /*0x6d2ba2*/
          v32 = *(_DWORD *)((char *)g_CraterPool + v7 + 4); /*0x6d2ba9*/
          v33 = *(_DWORD *)((char *)g_CraterPool + v7 + 8); /*0x6d2bb0*/
          v34 = *(_DWORD *)((char *)g_CraterPool + v7 + 12); /*0x6d2bbd*/
          v31 += aP2; /*0x6d2bc7*/
          v32 += a4; /*0x6d2bd0*/
          v26 = g_Map_VisibleRect; /*0x6d2bda*/
          v29 = g_Map_VisibleRect; /*0x6d2bde*/
          v25 = DSurface_ViewBounds; /*0x6d2be7*/
          v28 = DSurface_ViewBounds; /*0x6d2beb*/
          g_DSurface_WindowOffset = g_DSurface_WindowOffset; /*0x6d2bf5*/
          g_Map_VisibleRectOffset = g_Map_VisibleRectOffset; /*0x6d2bfa*/
          v8 = Coord2D::Sub(&v28, v30, &v25); /*0x6d2c05*/
          v9 = Rect::Construct(v36, v8, g_Map_VisibleRectOffset, g_DSurface_WindowOffset); /*0x6d2c0f*/
          v35[0] = *v9; /*0x6d2c18*/
          v35[1] = v9[1]; /*0x6d2c21*/
          v35[2] = v9[2]; /*0x6d2c28*/
          v35[3] = v9[3]; /*0x6d2c37*/
          v10 = ClipRectIntersection(v37, v35, &v31, 0, 0); /*0x6d2c40*/
          v31 = *v10; /*0x6d2c49*/
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
    v18 = (_DWORD **)(&this->abstractFlags7); /*0x6d2d27*/
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
  return result; /*0x6d2dc8*/
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
  float *v6; // eax
  float *v7; // eax
  int v8; // edi
  float *v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // edi
  int v13; // eax
  int v14; // ebx
  int *v15; // esi
  int v16; // eax
  int v17; // ecx
  _DWORD *v18; // eax
  int *v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  _DWORD *v26; // eax
  int v27; // eax
  int *v28; // edx
  int v29; // eax
  int v30; // ecx
  char v31; // al
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  int v37; // ecx
  int *v38; // eax
  int *v41; // ecx
  int v42; // eax
  int v43; // edx
  int v44; // ecx
  int v46; // eax
  struct IPersistStreamVtbl *lpVtbl; // eax
  int v48; // edx
  int v49; // ecx
  int v50; // ecx
  _BYTE *v51; // ebx
  int *v52; // eax
  _DWORD *v55; // eax
  int v56; // ecx
  __int64 v57; // rax
  int v58; // esi
  int v59; // eax
  int v60; // esi
  int v61; // eax
  int *v62; // ecx
  int result; // eax
  int v64; // ebx
  int *v65; // eax
  int v66; // esi
  int v67; // edi
  int v68; // esi
  int v69; // eax
  int v70; // edi
  int v71; // esi
  bool v72; // cc
  int v74; // [esp+28h] [ebp-ECh]
  int v75; // [esp+28h] [ebp-ECh]
  int v76; // [esp+28h] [ebp-ECh]
  int v77; // [esp+2Ch] [ebp-E8h] BYREF
  int v78; // [esp+30h] [ebp-E4h]
  float v79; // [esp+34h] [ebp-E0h] BYREF
  float v80; // [esp+38h] [ebp-DCh]
  int v81; // [esp+3Ch] [ebp-D8h]
  int *v82; // [esp+40h] [ebp-D4h]
  int v83; // [esp+44h] [ebp-D0h]
  int v84; // [esp+48h] [ebp-CCh]
  int v85; // [esp+4Ch] [ebp-C8h]
  int v86; // [esp+50h] [ebp-C4h] BYREF
  int v87; // [esp+54h] [ebp-C0h]
  int v88; // [esp+58h] [ebp-BCh]
  int v89; // [esp+5Ch] [ebp-B8h] BYREF
  int v90; // [esp+60h] [ebp-B4h]
  int v91; // [esp+64h] [ebp-B0h] BYREF
  int v92; // [esp+68h] [ebp-ACh]
  int v93; // [esp+74h] [ebp-A0h]
  int v94; // [esp+78h] [ebp-9Ch]
  float v95[4]; // [esp+7Ch] [ebp-98h] BYREF
  int v96; // [esp+8Ch] [ebp-88h]
  _DWORD v97[2]; // [esp+90h] [ebp-84h] BYREF
  _DWORD v98[4]; // [esp+98h] [ebp-7Ch] BYREF
  int v99[3]; // [esp+A8h] [ebp-6Ch] BYREF
  _BYTE v101[12]; // [esp+B8h] [ebp-5Ch] BYREF
  _BYTE v102[12]; // [esp+C4h] [ebp-50h] BYREF
  int v103; // [esp+D0h] [ebp-44h] BYREF
  char v104[12]; // [esp+D8h] [ebp-3Ch] BYREF
  char v105[12]; // [esp+E4h] [ebp-30h] BYREF
  char v106[12]; // [esp+F0h] [ebp-24h] BYREF
  char v107[12]; // [esp+FCh] [ebp-18h] BYREF
  char v108[12]; // [esp+108h] [ebp-Ch] BYREF

  g_Map_VisibleRectOffset = g_Map_VisibleRectOffset; /*0x6d8db7*/
  v3 = this->q0B0; /*0x6d8dc4*/
  v4 = this->q0B4; /*0x6d8dd5*/
  v77 = v3 + g_Map_VisibleRectOffset / 2; /*0x6d8ddb*/
  g_DSurface_WindowOffset = g_DSurface_WindowOffset; /*0x6d8de5*/
  v5 = (float *)(&this->u32_58C6); /*0x6d8deb*/
  v79 = (float)v77; /*0x6d8df1*/
  v78 = v4 - g_DSurface_WindowOffset; /*0x6d8df5*/
  v81 = 0; /*0x6d8e08*/
  v80 = (float)(v4 - g_DSurface_WindowOffset); /*0x6d8e10*/
  v6 = TransformMatrix3x4Point(v95, (float *)(&this->u32_58C6), &v79); /*0x6d8e14*/
  v79 = *v6; /*0x6d8e1b*/
  v80 = v6[1]; /*0x6d8e26*/
  v81 = *((_DWORD *)v6 + 2); /*0x6d8e2d*/
  v83 = Math::RoundToInt(v79); /*0x6d8e3a*/
  v84 = Math::RoundToInt(v80); /*0x6d8e43*/
  v77 = v3 + 2 * g_Map_VisibleRectOffset; /*0x6d8e4a*/
  v79 = (float)v77; /*0x6d8e62*/
  v74 = g_DSurface_WindowOffset / 2 + v4; /*0x6d8e74*/
  v78 = v74; /*0x6d8e66*/
  v81 = 0; /*0x6d8e78*/
  v80 = (float)v74; /*0x6d8e80*/
  v7 = TransformMatrix3x4Point(v95, v5, &v79); /*0x6d8e84*/
  v79 = *v7; /*0x6d8e8b*/
  v80 = v7[1]; /*0x6d8e96*/
  v81 = *((_DWORD *)v7 + 2); /*0x6d8e9d*/
  v8 = Math::RoundToInt(v79); /*0x6d8ea8*/
  v77 = v3 - g_Map_VisibleRectOffset; /*0x6d8eae*/
  v78 = v74; /*0x6d8eb6*/
  v79 = (float)(v3 - g_Map_VisibleRectOffset); /*0x6d8eba*/
  v80 = (float)v74; /*0x6d8ecd*/
  v81 = 0; /*0x6d8ed1*/
  v9 = TransformMatrix3x4Point(v95, v5, &v79); /*0x6d8ed9*/
  v79 = *v9; /*0x6d8ee0*/
  v80 = v9[1]; /*0x6d8ee7*/
  v81 = *((_DWORD *)v9 + 2); /*0x6d8ef2*/
  v10 = Math::RoundToInt(v80); /*0x6d8ef6*/
  v11 = v83; /*0x6d8efb*/
  v93 = 2 * (v8 - v83); /*0x6d8f03*/
  v12 = v84; /*0x6d8f07*/
  v94 = 2 * (v10 - v84); /*0x6d8f0f*/
  v13 = 0; /*0x6d8f13*/
  v82 = 0; /*0x6d8f15*/
  do /*0x6d95a9*/
  {
    v85 = 0; /*0x6d8f1c*/
    v14 = 24 * v13; /*0x6d8f24*/
    v75 = 24 * v13; /*0x6d8f27*/
    if ( dword_8A0370[6 * v13] > 0 ) /*0x6d8f33*/
    {
      while ( 1 ) /*0x6d8f43*/
      {
        v15 = *(int **)(*(int *)((char *)dword_8A0364 + v14) + 4 * v85); /*0x6d8f43*/
        *((_BYTE *)v15 + 153) = 0; /*0x6d8f48*/
        if ( v15 ) /*0x6d8f4f*/
        {
          if ( (v15[5] & 4) != 0 ) /*0x6d8f64*/
          {
            v16 = v15[39]; /*0x6d8f72*/
            v86 = v16; /*0x6d8f74*/
            v17 = v15[40]; /*0x6d8f7a*/
            v87 = v17; /*0x6d8f7d*/
            v88 = v15[41]; /*0x6d8f84*/
            if ( v16 < v11 ) /*0x6d8f88*/
              goto LABEL_53; /*0x6d8f88*/
            if ( v16 >= v11 + v93 ) /*0x6d8f96*/
              goto LABEL_53; /*0x6d8f96*/
            if ( v17 < v12 ) /*0x6d8f9e*/
              goto LABEL_53; /*0x6d8f9e*/
            if ( v17 >= v12 + v94 ) /*0x6d8fac*/
              goto LABEL_53; /*0x6d8fac*/
            (*(void (__thiscall **)(int *, char *, _DWORD))(*v15 + 76))(v15, v107, 0); /*0x6d8fc0*/
            if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) != 0 ) /*0x6d8fce*/
            {
              if ( Game::Stub3((int)&v86) ) /*0x6d8fda*/
                goto LABEL_53; /*0x6d8fe1*/
            }
            v18 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*v15 + 72))(v15, v104); /*0x6d8ff3*/
            g_TacticalClass_Instance = g_TacticalClass_Instance; /*0x6d8ff6*/
            v20 = Coord::To_ScreenRaw(&v103, v18); /*0x6d9007*/
            v77 = *v20; /*0x6d9010*/
            v78 = v20[1]; /*0x6d9017*/
            v21 = v78 - (unsigned int)g_TacticalClass_Instance[45].lpVtbl; /*0x6d9029*/
            v77 -= (int)g_TacticalClass_Instance[44].lpVtbl; /*0x6d9030*/
            v78 = v21; /*0x6d9034*/
            if ( v77 >= -360 && v77 <= dword_B0CE30 + 360 && v21 >= -180 && v21 <= dword_B0CE34 + 180 ) /*0x6d906a*/
            {
              v22 = *v15; /*0x6d9070*/
              *((_BYTE *)v15 + 153) = 1; /*0x6d907e*/
              (*(void (__thiscall **)(int *, int *, int *))(v22 + 268))(v15, &v77, &DSurface_ViewBounds); /*0x6d9085*/
              (*(void (__thiscall **)(int *, int *, int, _DWORD))(*v15 + 260))(v15, &DSurface_ViewBounds, a2, 0); /*0x6d909e*/
            }
            goto LABEL_52; /*0x6d90a4*/
          }
          if ( (v15[5] & 1) != 0 ) /*0x6d90af*/
          {
            v23 = v15[39]; /*0x6d90bd*/
            v86 = v23; /*0x6d90bf*/
            v24 = v15[40]; /*0x6d90c5*/
            v87 = v24; /*0x6d90c8*/
            v88 = v15[41]; /*0x6d90cf*/
            if ( v23 >= v11 && v23 < v11 + v93 && v24 >= v12 && v24 < v12 + v94 ) /*0x6d90f7*/
            {
              v25 = *v15; /*0x6d90fd*/
              *((_BYTE *)v15 + 153) = 1; /*0x6d9111*/
              v26 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(v25 + 72))(v15, v106); /*0x6d9118*/
              if ( Coord::To_Screen(g_TacticalClass_Instance, v26, v99) ) /*0x6d9122*/
              {
                (*(void (__thiscall **)(int *, int *, int *))(*v15 + 268))(v15, v99, &DSurface_ViewBounds); /*0x6d913c*/
                (*(void (__thiscall **)(int *, int *, int *))(*v15 + 272))(v15, v99, &DSurface_ViewBounds); /*0x6d9153*/
              }
              (*(void (__thiscall **)(int *, int *, int, int))(*v15 + 260))(v15, &DSurface_ViewBounds, a2, 1); /*0x6d916c*/
            }
            goto LABEL_53; /*0x6d9172*/
          }
        }
        v27 = (*(int (__thiscall **)(int *))(*v15 + 44))(v15); /*0x6d917b*/
        if ( v27 == 4 ) /*0x6d9181*/
        {
          v28 = (int *)(*(int (__thiscall **)(int *, char *))(*v15 + 72))(v15, v108); /*0x6d9196*/
          v29 = *v28; /*0x6d9198*/
          v86 = v29; /*0x6d919a*/
          v30 = v28[1]; /*0x6d91a0*/
          v87 = v30; /*0x6d91a3*/
          v88 = v28[2]; /*0x6d91aa*/
          if ( v29 >= v11 && v29 < v11 + v93 && v30 >= v12 && v30 < v12 + v94 ) /*0x6d91d2*/
          {
            v31 = *((_BYTE *)v15 + 280); /*0x6d91d8*/
            *((_BYTE *)v15 + 153) = 1; /*0x6d91de*/
            if ( v31 /*0x6d920e*/
              || !*(_BYTE *)(v15[50] + 884)
              || (v32 = (*(int (__thiscall **)(int *, char *))(*v15 + 72))(v15, v105), !Game::Stub3(v32)) )
            {
              (*(void (__thiscall **)(int *, int *, int, _DWORD))(*v15 + 260))(v15, &DSurface_ViewBounds, a2, 0); /*0x6d921f*/
            }
          }
          goto LABEL_53; /*0x6d921f*/
        }
        if ( v27 == 36 ) /*0x6d9227*/
        {
          if ( *(_BYTE *)(v15[50] + 691) || *((_BYTE *)v15 + 205) ) /*0x6d923d*/
          {
            v33 = v15[39]; /*0x6d9251*/
            v86 = v33; /*0x6d9257*/
            v34 = v15[40]; /*0x6d925d*/
            v87 = v34; /*0x6d9260*/
            v88 = v15[41]; /*0x6d9267*/
            if ( v33 >= v11 && v33 < v11 + v93 && v34 >= v12 && v34 < v12 + v94 && !Game::Stub3((int)&v86) ) /*0x6d929f*/
            {
              v35 = *v15; /*0x6d92ac*/
              *((_BYTE *)v15 + 153) = 1; /*0x6d92ae*/
              (*(void (__thiscall **)(int *, int *, int, _DWORD))(v35 + 260))(v15, &DSurface_ViewBounds, a2, 0); /*0x6d92b7*/
            }
          }
          goto LABEL_53; /*0x6d92b7*/
        }
        v36 = v15[39]; /*0x6d92c4*/
        v86 = v36; /*0x6d92c6*/
        v37 = v15[40]; /*0x6d92cc*/
        v87 = v37; /*0x6d92cf*/
        v88 = v15[41]; /*0x6d92d6*/
        if ( v36 >= v11 && v36 < v11 + v93 && v37 >= v12 && v37 < v12 + v94 ) /*0x6d92fe*/
        {
          v38 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(*v15 + 72))(v15, v101); /*0x6d9310*/
          g_TacticalClass_Instance = g_TacticalClass_Instance; /*0x6d9313*/
          v38 = v38; /*0x6d9319*/
          v41 = IsoCoord::ToPixel(v95, *v38, v38[1]); /*0x6d932b*/
          v42 = *v41; /*0x6d932d*/
          v43 = v41[1]; /*0x6d932f*/
          v44 = v38[2]; /*0x6d9332*/
          v43 = v43; /*0x6d9335*/
          v42 = v42; /*0x6d9343*/
          v46 = ZCoordToScreenY(v44); /*0x6d934a*/
          v91 = v42 / 256; /*0x6d935f*/
          v92 = v43 / 256 - v46; /*0x6d936e*/
          lpVtbl = g_TacticalClass_Instance[45].lpVtbl; /*0x6d9378*/
          v97[0] = g_TacticalClass_Instance[44].lpVtbl; /*0x6d9383*/
          v97[1] = lpVtbl; /*0x6d938a*/
          Vector2::Subtract(&v91, v97); /*0x6d9391*/
          if ( v91 >= -360 && v91 <= dword_B0CE30 + 360 && v92 >= -180 && v92 <= dword_B0CE34 + 180 ) /*0x6d93ca*/
          {
            v48 = *v15; /*0x6d93cc*/
            *((_BYTE *)v15 + 153) = 1; /*0x6d93da*/
            (*(void (__thiscall **)(int *, int *, int *))(v48 + 268))(v15, &v91, &DSurface_ViewBounds); /*0x6d93e1*/
            (*(void (__thiscall **)(int *, int *, int, _DWORD))(*v15 + 260))(v15, &DSurface_ViewBounds, a2, 0); /*0x6d93fa*/
          }
          v14 = v75; /*0x6d9400*/
          v11 = v83; /*0x6d9404*/
  LABEL_52:
          v12 = v84; /*0x6d9408*/
        }
  LABEL_53:
        v49 = *(int *)((char *)dword_8A0370 + v14); /*0x6d940c*/
        if ( ++v85 >= v49 ) /*0x6d941d*/
        {
          v13 = (int)v82; /*0x6d9423*/
          break; /*0x6d9423*/
        }
      }
    }
    if ( v13 == 2 ) /*0x6d942a*/
    {
      v50 = 0; /*0x6d9436*/
      v76 = 0; /*0x6d943a*/
      if ( g_BuildingProductionState > 0 ) /*0x6d943e*/
      {
        do /*0x6d9597*/
        {
          v51 = (_BYTE *)*((_DWORD *)g_BuildingClass_InstanceCount + v50); /*0x6d944a*/
          if ( v51[116] && v51[153] ) /*0x6d9458*/
          {
            v52 = (int *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v51 + 172))(v51, v102); /*0x6d9472*/
            g_TacticalClass_Instance = g_TacticalClass_Instance; /*0x6d9478*/
            v52 = v52; /*0x6d947e*/
            v55 = IsoCoord::ToPixel(&v79, *v52, v52[1]); /*0x6d948b*/
            v56 = v55[1]; /*0x6d9494*/
            v57 = (int)*v55; /*0x6d9497*/
            v96 = v56; /*0x6d949e*/
            v58 = (IDA_BYTE4(v57) + (int)v57) >> 8; /*0x6d94a9*/
            v59 = ZCoordToScreenY(v52[2]); /*0x6d94ac*/
            v89 = v58; /*0x6d94be*/
            v90 = v96 / 256 - v59; /*0x6d94c9*/
            v60 = v58 - (unsigned int)g_TacticalClass_Instance[44].lpVtbl; /*0x6d94d9*/
            v61 = v90 - (unsigned int)g_TacticalClass_Instance[45].lpVtbl; /*0x6d94db*/
            v89 = v60; /*0x6d94e3*/
            v90 = v61; /*0x6d94e7*/
            if ( v60 >= -360 && v60 <= dword_B0CE30 + 360 && v61 >= -180 && v61 <= dword_B0CE34 + 180 ) /*0x6d9516*/
            {
              v98[2] = g_Map_VisibleRectOffset; /*0x6d952a*/
              v98[0] = DSurface_ViewBounds; /*0x6d9539*/
              v98[1] = g_Map_VisibleRect; /*0x6d9540*/
              v98[3] = g_DSurface_WindowOffset; /*0x6d9547*/
              BuildingClass::DrawVisible(&v89, v98); /*0x6d957a*/
            }
            v11 = v83; /*0x6d957f*/
            v12 = v84; /*0x6d9583*/
          }
          v50 = ++v76; /*0x6d9590*/
        }
        while ( v76 < g_BuildingProductionState ); /*0x6d9597*/
        v13 = (int)v82; /*0x6d959d*/
      }
    }
    v82 = (int *)++v13; /*0x6d95a5*/
  }
  while ( v13 < 5 ); /*0x6d95a9*/
  v62 = dword_8A0364; /*0x6d95af*/
  v82 = dword_8A0364; /*0x6d95b4*/
  do /*0x6d97b5*/
  {
    result = 0; /*0x6d95bb*/
    v83 = v62[3]; /*0x6d95bf*/
    v85 = 0; /*0x6d95c3*/
    if ( v83 > 0 ) /*0x6d95c7*/
    {
      do /*0x6d97a2*/
      {
        v64 = *(_DWORD *)(*v62 + 4 * result); /*0x6d95cf*/
        if ( *(_BYTE *)(v64 + 153) ) /*0x6d95d2*/
        {
          if ( v64 ) /*0x6d95e2*/
          {
            if ( (*(_BYTE *)(v64 + 20) & 1) != 0 ) /*0x6d95f4*/
            {
              if ( (*(_BYTE *)(v64 + 20) & 4) == 0 /*0x6d965d*/
                || ((*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v64 + 76))(v64, v102, 0), !g_hWnd)
                || g_ArmageddonMode
                || (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) == 0
                || (v95[0] = *(float *)(v64 + 156),
                    v95[1] = *(float *)(v64 + 160),
                    v95[2] = *(float *)(v64 + 164),
                    !Game::Stub3((int)v95)) )
              {
                v65 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v64 + 72))(v64, v101); /*0x6d9676*/
                v66 = *v65; /*0x6d9683*/
                v96 = v65[1]; /*0x6d9689*/
                v89 = v65[2]; /*0x6d9697*/
                IDA_LODWORD(v79) = -60 * v96 / 2 + 60 * v66 / 2; /*0x6d96d0*/
                v67 = SLODWORD(v79) / 256; /*0x6d96f7*/
                v68 = (30 * v96 / 2 + 30 * v66 / 2) / 256; /*0x6d96fa*/
                v69 = Math::RoundToInt((double)v89 * dbl_B0CD48 + (double)(v89 >= 728) + 0.5); /*0x6d9721*/
                v77 = v67; /*0x6d972d*/
                v78 = v68 - v69; /*0x6d9731*/
                v70 = v67 - (unsigned int)g_TacticalClass_Instance[44].lpVtbl; /*0x6d9741*/
                v71 = v68 - v69 - (unsigned int)g_TacticalClass_Instance[45].lpVtbl; /*0x6d9743*/
                v77 = v70; /*0x6d974b*/
                v78 = v71; /*0x6d974f*/
                if ( v70 >= -360 && v70 <= dword_B0CE30 + 360 && v71 >= -180 && v71 <= dword_B0CE34 + 180 ) /*0x6d9779*/
                  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v64 + 272))(v64, &v77, &DSurface_ViewBounds); /*0x6d9789*/
              }
            }
          }
        }
        result = v85 + 1; /*0x6d9797*/
        v72 = v85 + 1 < v83; /*0x6d9798*/
        v62 = v82; /*0x6d979a*/
        ++v85; /*0x6d979e*/
      }
      while ( v72 ); /*0x6d97a2*/
    }
    v62 += 6; /*0x6d97a8*/
    v82 = v62; /*0x6d97b1*/
  }
  while ( (int)v62 < (int)((int *)&dbl_8A03D8 + 1) ); /*0x6d97b5*/
  return result; /*0x6d97bb*/
}
// 0x6DA180
int TacticalMap::DrawOccupiedRegion()
{
  int result; // eax
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // edi
  int v8; // eax
  int v9; // edi
  _DWORD v10[4]; // [esp+0h] [ebp-10h] BYREF

  if ( *(this + 868) || (result = *(this + 869)) != 0 ) /*0x6da195*/
  {
    v2 = *(this + 868); /*0x6da19b*/
    v3 = *(this + 870); /*0x6da1a1*/
    v4 = *(&this->q1589); /*0x6da1a9*/
    v5 = *(&this->q15C1); /*0x6da1af*/
    if ( v3 < v3 ) /*0x6da1b8*/
    {
      v3 = v3; /*0x6da1ba*/
      v3 = v3; /*0x6da1bc*/
      v3 = v3; /*0x6da1be*/
    }
    if ( v5 < v4 ) /*0x6da1c2*/
    {
      v4 = v4; /*0x6da1c4*/
      v4 = v5; /*0x6da1c6*/
      v5 = v4; /*0x6da1c8*/
    }
    v8 = v3 - v3 + 1; /*0x6da1ce*/
    if ( *(_DWORD *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x6da1dc*/
      v9 = *(unsigned __int8 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 15); /*0x6da1ea*/
    else
      v9 = *(unsigned __int16 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 30); /*0x6da1f7*/
    v10[2] = v8; /*0x6da201*/
    v10[0] = v3; /*0x6da209*/
    v10[1] = v4; /*0x6da20d*/
    v10[3] = v5 - v4 + 1; /*0x6da211*/
    return (*(int (__thiscall **)(int, int *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 84))( /*0x6da21e*/
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
  int v5; // edi
  unsigned int result; // eax
  char *v8; // edx
  int v9; // ecx
  char *v10; // ebp
  unsigned int v11; // eax
  char *v12; // edi
  int v13; // esi
  int v14; // eax
  _WORD *v15; // ebx
  _WORD *v16; // ecx
  int v17; // esi
  int v18; // ebx
  char *v19; // ebp
  char *v20; // eax
  int v21; // esi
  int v23; // [esp+Ch] [ebp-Ch]
  _WORD *v24; // [esp+Ch] [ebp-Ch]
  char v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  v5 = this; /*0x7bcfbd*/
  v6 = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 20) + 92))(*(_DWORD *)(this + 20), a2, a3); /*0x7bcfd0*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 20) + 96))(*(_DWORD *)(v5 + 20)); /*0x7bcfd4*/
  result = *(_DWORD *)(v5 + 28); /*0x7bcfda*/
  v8 = (char *)(v6 + *(_DWORD *)(v5 + 16)); /*0x7bcfdd*/
  if ( (unsigned int)v8 >= result ) /*0x7bcfe1*/
    v8 -= *(_DWORD *)(v5 + 32); /*0x7bcfe3*/
  if ( a5 > 0 ) /*0x7bcfec*/
  {
    v26 = a5; /*0x7bcff4*/
    do /*0x7bd0cf*/
    {
      v9 = aP3; /*0x7bcff8*/
      if ( (unsigned int)&v8[2 * aP3] < result ) /*0x7bd001*/
      {
        v18 = aP3; /*0x7bd0e2*/
        v19 = v8; /*0x7bd0e4*/
        if ( ((unsigned __int8)v8 & 2) != 0 && aP3 ) /*0x7bd0ea*/
        {
          *(_WORD *)v8 = -1; /*0x7bd0ec*/
          v19 = v8 + 2; /*0x7bd0f1*/
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
          *(_WORD *)v20 = -1; /*0x7bd11c*/
      }
      else
      {
        v10 = v8; /*0x7bd009*/
        v11 = (result - (unsigned int)v8) >> 1; /*0x7bd00b*/
        v23 = v11; /*0x7bd012*/
        if ( ((unsigned __int8)v8 & 2) != 0 && v11 ) /*0x7bd01a*/
        {
          *(_WORD *)v8 = -1; /*0x7bd01f*/
          v10 = v8 + 2; /*0x7bd024*/
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
          *(_WORD *)v12 = -1; /*0x7bd054*/
        v14 = v9 - v11; /*0x7bd05f*/
        v15 = *(_WORD **)(this + 24); /*0x7bd061*/
        v25 = v14; /*0x7bd064*/
        v24 = v15; /*0x7bd06b*/
        if ( ((unsigned __int8)v15 & 2) != 0 && v14 ) /*0x7bd073*/
        {
          *v15++ = -1; /*0x7bd075*/
          --v14; /*0x7bd07d*/
          v24 = v15; /*0x7bd07e*/
          v25 = v14; /*0x7bd082*/
        }
        v16 = 0; /*0x7bd088*/
        v17 = v14 >> 1; /*0x7bd08d*/
        if ( v14 >> 1 ) /*0x7bd08d*/
        {
          memset(v15, 0xFFu, 4 * v17); /*0x7bd098*/
          v16 = &v24[2 * v17]; /*0x7bd09e*/
          IDA_LOBYTE(v14) = v25; /*0x7bd0a1*/
        }
        if ( (v14 & 1) != 0 && v16 ) /*0x7bd0ab*/
          *v16 = -1; /*0x7bd0ad*/
        v5 = this; /*0x7bd0b2*/
      }
      result = *(_DWORD *)(v5 + 28); /*0x7bd0b9*/
      v8 += 2 * *(_DWORD *)(v5 + 40); /*0x7bd0bc*/
      if ( (unsigned int)v8 >= result ) /*0x7bd0c1*/
        v8 -= *(_DWORD *)(v5 + 32); /*0x7bd0c3*/
      --v26; /*0x7bd0cb*/
    }
    while ( v26 ); /*0x7bd0cf*/
  }
  return result; /*0x7bd0d7*/
}