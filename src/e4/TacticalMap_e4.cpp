// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x484680
ScenarioClass * * TacticalMap::ComputeScreenTint()
{
{
  __int16 v2; // dx
  __int16 v3; // ax
  __int16 v4; // dx
  __int16 v5; // ax
  __int16 v7; // ax
  __int16 v11; // cx
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
    this->u16_10A += v3 * *((_WORD *)g_ScenarioClass_Instance + 6830) - *((_WORD *)g_ScenarioClass_Instance + 6828); /*0x4846ec*/
    v4 = (v3 + 4) * *((_WORD *)g_ScenarioClass_Instance + 6830) - *((_WORD *)g_ScenarioClass_Instance + 6828); /*0x484703*/
  }
  else if ( PsyDom::IsActive() ) /*0x48470f*/
  {
    v5 = this->u32_11B; /*0x48471e*/
    this->u16_10A += v5 * *((_WORD *)g_ScenarioClass_Instance + 6856) - *((_WORD *)g_ScenarioClass_Instance + 6854); /*0x48473b*/
    v4 = (v5 + 4) * *((_WORD *)g_ScenarioClass_Instance + 6856) - *((_WORD *)g_ScenarioClass_Instance + 6854); /*0x484752*/
  }
  else
  {
    bool v6 = !NukeFlash::IsActive(); /*0x484766*/
    v7 = this->u32_11B; /*0x484768*/
    if ( v6 ) /*0x484770*/
    {
      this->u16_10A += v7 * *((_WORD *)g_ScenarioClass_Instance + 6818) - *((_WORD *)g_ScenarioClass_Instance + 6816); /*0x4847bc*/
      v4 = (v7 + 4) * *((_WORD *)g_ScenarioClass_Instance + 6818) - *((_WORD *)g_ScenarioClass_Instance + 6816); /*0x4847d3*/
    }
    else
    {
      this->u16_10A += v7 * *((_WORD *)g_ScenarioClass_Instance + 6842) - *((_WORD *)g_ScenarioClass_Instance + 6840); /*0x484787*/
      v4 = (v7 + 4) * *((_WORD *)g_ScenarioClass_Instance + 6842) - *((_WORD *)g_ScenarioClass_Instance + 6840); /*0x48479e*/
    }
  }
  int v8 = *(__int16 *)(&this->u32_686); /*0x4847da*/
  int v9 = this->q104; /*0x4847e1*/
  this->u16_10E += v4; /*0x4847e7*/
  this->u16_10C = (unsigned int)(v9 * v8) >> 16; /*0x4847f4*/
  int v10 = v9 * *(__int16 *)(&this->u32_6C0); /*0x484802*/
  v11 = this->u16_10A; /*0x484805*/
  int v12 = v10 >> 16; /*0x48480c*/
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
}

// 0x4F4480
int TacticalMap::Redraw()
{
{
  int result; // eax

  int v1 = g_DSurface_Hidden_2; /*0x4f4489*/
  g_DSurface_Hidden_2 = DSurface_Composite; /*0x4f4492*/
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 64))(g_WWMouseClass_Instance, DSurface_Composite, 0); /*0x4f44a2*/
  int v3 = this->TacticalMap_field_0C; /*0x4f44a5*/
  this->TacticalMap_field_0C = 0; /*0x4f44a8*/
  int v6; // [esp+8h] [ebp-8h]
  LOBYTE(v6) = v3 != 0; /*0x4f44b7*/
  bool v7 = v3 == 2; /*0x4f44be*/
  if ( !(unsigned __int8)UI_Helper() ) /*0x4f44c2*/
  {
    TacticalMap::Render((int)g_TacticalClass_Instance, DSurface_Composite, v6, 0); /*0x4f44df*/
    TacticalMap::Render((int)g_TacticalClass_Instance, DSurface_Composite, v6, 1); /*0x4f44f4*/
    this->vt_slot_64(v7); /*0x4f4502*/
    TacticalMap::Render((int)g_TacticalClass_Instance, DSurface_Composite, v6, 2); /*0x4f4515*/
  }
  if ( DataGlobal_B0B519 && !ArmageddonMode ) /*0x4f452b*/
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)g_WWMouseClass_Instance + 64))(g_WWMouseClass_Instance, DSurface_Sidebar, 1); /*0x4f453d*/
    DataGlobal_B0B519 = 0; /*0x4f4540*/
  }
  if ( DataGlobal_A8EF54 ) /*0x4f454f*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)DataGlobal_A8EF54 + 44))(DataGlobal_A8EF54, 0); /*0x4f4555*/
  TacticalMap::DrawCursor(&g_GameNetworkObject); /*0x4f455d*/
  ToolTipManager *v4 = g_TacticalRender; /*0x4f4562*/
  if ( g_TacticalRender ) /*0x4f456a*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)g_TacticalRender + 12))(g_TacticalRender, 0); /*0x4f4570*/
  if ( DataGlobal_A8B8B4 ) /*0x4f457a*/
  {
    LOBYTE(v4) = 0; /*0x4f457c*/
    DrawHUD(v4); /*0x4f457e*/
  }
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 60))(g_WWMouseClass_Instance, DSurface_Composite, 0); /*0x4f4593*/
  result = this->vt_slot_68(); /*0x4f459a*/
  g_DSurface_Hidden_2 = v1; /*0x4f459d*/
  return result; /*0x4f45a3*/
}
}

// 0x5AEA10
void TacticalMap::MultiplyByScalar(ObjectClass * aP1)
{
{
  *this = *(float *)&aP1 * *this; /*0x5aea16*/
  this->TacticalMap_field_04 = *(float *)&aP1 * this->TacticalMap_field_04; /*0x5aea1f*/
  this->TacticalMap_field_08 = *(float *)&aP1 * this->TacticalMap_field_08; /*0x5aea29*/
  this->TacticalMap_field_04 = *(float *)&aP1 * this->TacticalMap_field_04; /*0x5aea33*/
  this->TacticalMap_field_14 = *(float *)&aP1 * this->TacticalMap_field_14; /*0x5aea3d*/
  this->q024 = *(float *)&aP1 * this->q024; /*0x5aea47*/
  this->TacticalMap_field_08 = *(float *)&aP1 * this->TacticalMap_field_08; /*0x5aea51*/
  this->m_TintFactor = *(float *)&aP1 * this->m_TintFactor; /*0x5aea5b*/
  this->q028 = *(float *)&aP1 * this->q028; /*0x5aea65*/
}
}

// 0x5D49A0
int TacticalMap::DrawCursor()
{
{
  char result; // al

  int v9 = 0; /*0x5d49a6*/
  result = this->u8_19; /*0x5d49b4*/
  if ( result ) /*0x5d49b9*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x5d49c8*/
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this->q024 + 108))(this->q024, 1); /*0x5d49d2*/
    TextRenderer::GetInstance(); /*0x5d49db*/
    CampaignScore *v3 = Text::MeasureWidth(*(_DWORD *)(this->q024 + 48), 0); /*0x5d49f8*/
    if ( this->u16_2B8 /*0x5d4a1b*/
      && *(&this->u32_442) - *(&this->u32_443) < this->TacticalMap_field_10 - 1
      && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)this->q024 + 88))(this->q024) )
    {
      LOWORD(v9) = this->u16_2B8; /*0x5d4a29*/
      CampaignScore *v4 = (_DWORD *)this->q024; /*0x5d4a2e*/
      int v5 = v4[3]; /*0x5d4a31*/
  _DWORD v10[2]; // [esp+Ch] [ebp-20h] BYREF
      v10[1] = v4[4]; /*0x5d4a39*/
      v10[0] = v3 + v5; /*0x5d4a3d*/
      int v8 = v4[11]; /*0x5d4a4c*/
      int v7 = *((_DWORD *)BuildingTypeClass_AnimTable + v4[13]); /*0x5d4a56*/
  _BYTE v12[16]; // [esp+1Ch] [ebp-10h] BYREF
      _DWORD * v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(g_DSurface_Hidden_2, v12); /*0x5d4a65*/
  int v11; // [esp+14h] [ebp-18h] BYREF
      TextRenderer::DrawText(&v11, (size_t)&v9, g_DSurface_Hidden_2, v6, (int)v10, v7, 0, v8); /*0x5d4a79*/
    }
    result = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x5d4a89*/
  }
  if ( *this ) /*0x5d4a8d*/
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*this + 44))(*this, 1); /*0x5d4a98*/
  return result; /*0x5d4a8f*/
}
}

// 0x6D1C20
int TacticalMap::Construct()
{
{

  AbstractClass::Constructor(this); /*0x6d1c25*/
  this->u32_A8 = -1; /*0x6d1c2c*/
  this->u8_AC = 0; /*0x6d1c36*/
  this->u8_AD = 0; /*0x6d1c3c*/
  this->q030 = 0; /*0x6d1c42*/
  this->q0B0 = 0; /*0x6d1c48*/
  this->q0B4 = 0; /*0x6d1c4e*/
  this->q0B8 = 0; /*0x6d1c54*/
  this->u32_BC = 0; /*0x6d1c5a*/
  this->u32_C4 = 1072693248; /*0x6d1c60*/
  this->u32_C8 = DataGlobal_B0CE08; /*0x6d1c6f*/
  this->u32_CC = DataGlobal_B0CE0C; /*0x6d1c7b*/
  this->q034 = DataGlobal_B0CE08; /*0x6d1c87*/
  this->u32_D4 = DataGlobal_B0CE0C; /*0x6d1c92*/
  this->u32_D8 = 0; /*0x6d1c98*/
  this->u32_DC = 0; /*0x6d1c9e*/
  this->q038 = 0; /*0x6d1ca4*/
  this->q3590 = 0; /*0x6d1caa*/
  this->u32_D68 = 0; /*0x6d1cb0*/
  this->u32_D6C = 0; /*0x6d1cb6*/
  this->u32_D70 = 0; /*0x6d1cbc*/
  this->u32_D74 = 0; /*0x6d1cc2*/
  this->u32_D78 = 0; /*0x6d1cc8*/
  this->u8_D7C = 1; /*0x6d1cce*/
  this->u8_D7D = 0; /*0x6d1cd5*/
  this->u8_D7E = 0; /*0x6d1cdb*/
  this->u32_D80 = DataGlobal_B0CD60; /*0x6d1ced*/
  this->u32_D84 = DataGlobal_B0CD64; /*0x6d1cf8*/
  this->u32_D88 = DataGlobal_B0CD68; /*0x6d1d01*/
  this->u32_D8C = DataGlobal_B0CD6C; /*0x6d1d09*/
  this->qD90 = 0; /*0x6d1d0c*/
  this->qD94 = 0; /*0x6d1d12*/
  this->qD98 = 0; /*0x6d1d18*/
  this->qD9C = 0; /*0x6d1d1e*/
  this->qDA0 = 0; /*0x6d1d2a*/
  this->u32_DA4 = ((Timer *)((char *)&this->u32_5746)).GetTicks(); /*0x6d1d35*/
  this->u32_DAC = 0; /*0x6d1d3b*/
  this->u32_DB0 = 0; /*0x6d1d4e*/
  *(_DWORD *)this = &Tactical::`vftable'; /*0x6d1d54*/
  this->TacticalMap_field_04 = &Tactical::`vftable'; /*0x6d1d5a*/
  this->TacticalMap_field_08 = &Tactical::`vftable'; /*0x6d1d61*/
  this->TacticalMap_field_0C = &vt_Tactical; /*0x6d1d68*/
  memset((void *)(&this->u32_588), 0, 0xC80u); /*0x6d1d6f*/
  this->q024 = 0; /*0x6d1d77*/
  this->u32_A4 = -1; /*0x6d1d7d*/
  ((Matrix3x4 *)((char *)&this->u32_5788)).Identity(); /*0x6d1d87*/
  float v3 = DataGlobal_B0CD88; /*0x6d1d95*/
  Matrix3x3::RotateX(v3); /*0x6d1d98*/
  float v4 = DataGlobal_B0CE98; /*0x6d1da6*/
  Matrix2D::Rotate(v4); /*0x6d1da9*/
  float v5 = 60.0 / DataGlobal_B0CD78; /*0x6d1dbb*/
  TacticalMap::MultiplyByScalar(v5); /*0x6d1dc0*/
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
  return this; /*0x6d1e26*/
}
}

// 0x6D2B60
void* TacticalMap::RenderCell(char arg0, AbstractClass * aP2, int a4, int a2)
{
{
  IUnknown *v8; // eax
  AbstractClass *v9; // eax
  int result; // eax
  ObjectClass *v18; // edi
  ObjectClass *Coords; // eax
  AbstractClass *v22; // [esp-8h] [ebp-78h]
  AbstractClass *v23; // [esp-4h] [ebp-74h]
  IUnknown *v24; // [esp+10h] [ebp-60h]
  int v25; // [esp+14h] [ebp-5Ch] BYREF
  int v26; // [esp+18h] [ebp-58h]
  AbstractClass *v27; // [esp+1Ch] [ebp-54h]
  ObjectClass *v28; // [esp+20h] [ebp-50h] BYREF
  int v29; // [esp+24h] [ebp-4Ch]
  AbstractClass aP1; // [esp+28h] [ebp-48h] BYREF

  if ( !arg0 ) /*0x6d2b6f*/
  {
    if ( *(_DWORD *)&g_OverlayTypeConfig[22160] ) /*0x6d2b7d*/
    {
      int v6 = *(_DWORD *)&g_OverlayTypeConfig[22160] - 1; /*0x6d2b83*/
      v24 = (IUnknown *)(*(_DWORD *)&g_OverlayTypeConfig[22160] - 1); /*0x6d2b86*/
      if ( *(_DWORD *)&g_OverlayTypeConfig[22160] - 1 >= 0 ) /*0x6d2b8a*/
      {
        int v7 = 20 * v6; /*0x6d2b93*/
        do /*0x6d2cfd*/
        {
          *(_DWORD *)&aP1[8] = *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[22148] + v7); /*0x6d2ba2*/
          *(_DWORD *)&aP1[12] = *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[22148] + v7 + 4); /*0x6d2ba9*/
          aP1.uniqueId = *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[22148] + v7 + 8); /*0x6d2bb0*/
          aP1.abstractFlags = *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[22148] + v7 + 12); /*0x6d2bbd*/
          *(_DWORD *)&aP1[8] += aP2; /*0x6d2bc7*/
          *(_DWORD *)&aP1[12] += a4; /*0x6d2bd0*/
          v26 = *(_DWORD *)&DataGlobal_87F8E4[30400]; /*0x6d2bda*/
          v29 = *(_DWORD *)&DataGlobal_87F8E4[30400]; /*0x6d2bde*/
          v25 = *(_DWORD *)&DataGlobal_87F8E4[30396]; /*0x6d2be7*/
          v28 = *(ObjectClass **)&DataGlobal_87F8E4[30396]; /*0x6d2beb*/
          v23 = *(AbstractClass **)&DataGlobal_87F8E4[30408]; /*0x6d2bf5*/
          v22 = *(AbstractClass **)&DataGlobal_87F8E4[30404]; /*0x6d2bfa*/
          v8 = (IUnknown *)Coord2D::Sub(&v28, &aP1, (IUnknown *)&v25); /*0x6d2c05*/
  _DWORD v32[4]; // [esp+50h] [ebp-20h] BYREF
          v9 = Rect::Construct(v32, v8, v22, v23); /*0x6d2c0f*/
          aP1.nextArrayIndex = *(_DWORD *)v9->__pad_0; /*0x6d2c18*/
          aP1.referenceCount = *(_DWORD *)&v9->__pad_0[4]; /*0x6d2c21*/
          aP1.NeedsSaveOrLink = *(void **)&v9->__pad_0[8]; /*0x6d2c28*/
          int v31 = *(_DWORD *)&v9->__pad_0[12]; /*0x6d2c37*/
  _DWORD v33[4]; // [esp+60h] [ebp-10h] BYREF
          _DWORD * v10 = ClipRectIntersection(v33, &aP1.nextArrayIndex, (int *)&aP1[8], 0, 0); /*0x6d2c40*/
          *(_DWORD *)&aP1[8] = *v10; /*0x6d2c49*/
          *(_DWORD *)&aP1[12] = v10[1]; /*0x6d2c50*/
          aP1.uniqueId = v10[2]; /*0x6d2c57*/
          aP1.abstractFlags = v10[3]; /*0x6d2c64*/
          _DWORD * v11 = (_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[22148] + v7); /*0x6d2c68*/
          *v11 = *(_DWORD *)&aP1[8]; /*0x6d2c6b*/
          v11[1] = *(_DWORD *)&aP1[12]; /*0x6d2c72*/
          v11[2] = aP1.uniqueId; /*0x6d2c79*/
          v11[3] = aP1.abstractFlags; /*0x6d2c80*/
          if ( aP1.uniqueId > 0 && aP1.abstractFlags > 0 ) /*0x6d2c91*/
          {
            TacticalMap::FillScanlinesOpaque( /*0x6d2cee*/
              *(int *)&DataGlobal_87F8E4[32096],
              *(int *)&aP1[8],
              *(int *)&aP1[12],
              aP1.uniqueId,
              aP1.abstractFlags);
          }
          else if ( v6 < *(int *)&g_OverlayTypeConfig[22160] ) /*0x6d2c9a*/
          {
            int v12 = v6; /*0x6d2c9d*/
            --*(_DWORD *)&g_OverlayTypeConfig[22160]; /*0x6d2ca1*/
            if ( v6 < *(int *)&g_OverlayTypeConfig[22160] ) /*0x6d2ca6*/
            {
              int v13 = v7; /*0x6d2ca8*/
              do /*0x6d2cc8*/
              {
                ++v12; /*0x6d2cb0*/
                const void * v14 = (const void *)(v13 + *(_DWORD *)&g_OverlayTypeConfig[22148] + 20); /*0x6d2cb1*/
                void * v15 = (void *)(v13 + *(_DWORD *)&g_OverlayTypeConfig[22148]); /*0x6d2cb5*/
                v13 += 20; /*0x6d2cbd*/
                qmemcpy(v15, v14, 0x14u); /*0x6d2cc0*/
              }
              while ( v12 < *(int *)&g_OverlayTypeConfig[22160] ); /*0x6d2cc8*/
              v6 = (int)v24; /*0x6d2cca*/
            }
          }
          --v6; /*0x6d2cf3*/
          v7 -= 20; /*0x6d2cf4*/
          v24 = (IUnknown *)v6; /*0x6d2cf9*/
        }
        while ( v6 >= 0 ); /*0x6d2cfd*/
      }
    }
  }
  result = this->q038; /*0x6d2d03*/
  if ( result > 0 && !arg0 ) /*0x6d2d17*/
  {
    int v17 = 0; /*0x6d2d1d*/
    v18 = (ObjectClass *)(this + 57); /*0x6d2d27*/
    do /*0x6d2dc2*/
    {
      Coords = (ObjectClass *)CellClass::GetCoords(*(_DWORD **)v18->__pad_0, (int *)&aP1[8]); /*0x6d2d34*/
      v25 = *(_DWORD *)Coords->__pad_0; /*0x6d2d3b*/
      v26 = *(_DWORD *)&Coords->__pad_0[4]; /*0x6d2d47*/
      v27 = 0; /*0x6d2d59*/
      int * v20 = Coord::To_ScreenRaw((int *)aP1[0], &v25); /*0x6d2d61*/
      int v21 = v20[1] - this->q0B4; /*0x6d2d81*/
      v28 = (ObjectClass *)(*v20 - this->q0B0 + *(_DWORD *)&DataGlobal_87F8E4[30396] - 30); /*0x6d2d8d*/
      v29 = *(_DWORD *)&DataGlobal_87F8E4[30400] + v21 - 15; /*0x6d2d9c*/
      if ( g_hWnd ) /*0x6d2da0*/
        DSurface::Process(*(_DWORD *)v18->__pad_0, (IUnknown *)&v28, (int *)a2); /*0x6d2db1*/
      result = this->q038; /*0x6d2db6*/
      ++v17; /*0x6d2dbc*/
      v18 = (ObjectClass *)((char *)v18 + 4); /*0x6d2dbd*/
    }
    while ( v17 < result ); /*0x6d2dc2*/
  }
  return result; /*0x6d2dc8*/
}
}

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
{
  AbstractClass *v19; // edi
  AbstractClass *v39; // ebx
  struct IPersistStreamVtbl *lpVtbl; // eax
  LPPERSISTSTREAM v53; // ebp
  int result; // eax
  int v85; // [esp+4Ch] [ebp-C8h]
  int v89; // [esp+5Ch] [ebp-B8h] BYREF
  int v96; // [esp+8Ch] [ebp-88h]
  _BYTE v101[12]; // [esp+B8h] [ebp-5Ch] BYREF
  _BYTE v102[12]; // [esp+C4h] [ebp-50h] BYREF

  IUnknown *v2 = g_Map_VisibleRectOffset; /*0x6d8db7*/
  int v3 = this->q0B0; /*0x6d8dc4*/
  IUnknown *v4 = this->q0B4; /*0x6d8dd5*/
  int v77 = v3 + g_Map_VisibleRectOffset / 2; /*0x6d8ddb*/
  int v73 = g_DSurface_WindowOffset; /*0x6d8de5*/
  float * v5 = (float *)(this + 3556); /*0x6d8deb*/
  float v79 = (float)v77; /*0x6d8df1*/
  int v78 = v4 - g_DSurface_WindowOffset; /*0x6d8df5*/
  int v81 = 0; /*0x6d8e08*/
  float v80 = (float)(v4 - g_DSurface_WindowOffset); /*0x6d8e10*/
  float v95[4]; // [esp+7Ch] [ebp-98h] BYREF
  float * v6 = TransformMatrix3x4Point(v95, (float *)(this + 3556), &v79); /*0x6d8e14*/
  v79 = *v6; /*0x6d8e1b*/
  v80 = v6[1]; /*0x6d8e26*/
  v81 = *((_DWORD *)v6 + 2); /*0x6d8e2d*/
  int v83 = Math::RoundToInt(v79); /*0x6d8e3a*/
  int v84 = Math::RoundToInt(v80); /*0x6d8e43*/
  v77 = v3 + 2 * v2; /*0x6d8e4a*/
  v79 = (float)v77; /*0x6d8e62*/
  int v74 = v73 / 2 + v4; /*0x6d8e74*/
  v78 = v74; /*0x6d8e66*/
  v81 = 0; /*0x6d8e78*/
  v80 = (float)v74; /*0x6d8e80*/
  float * v7 = TransformMatrix3x4Point(v95, v5, &v79); /*0x6d8e84*/
  v79 = *v7; /*0x6d8e8b*/
  v80 = v7[1]; /*0x6d8e96*/
  v81 = *((_DWORD *)v7 + 2); /*0x6d8e9d*/
  int v8 = Math::RoundToInt(v79); /*0x6d8ea8*/
  v77 = v3 - v2; /*0x6d8eae*/
  v78 = v74; /*0x6d8eb6*/
  v79 = (float)(v3 - v2); /*0x6d8eba*/
  v80 = (float)v74; /*0x6d8ecd*/
  v81 = 0; /*0x6d8ed1*/
  float * v9 = TransformMatrix3x4Point(v95, v5, &v79); /*0x6d8ed9*/
  v79 = *v9; /*0x6d8ee0*/
  v80 = v9[1]; /*0x6d8ee7*/
  v81 = *((_DWORD *)v9 + 2); /*0x6d8ef2*/
  int v10 = Math::RoundToInt(v80); /*0x6d8ef6*/
  int v11 = v83; /*0x6d8efb*/
  int v93 = 2 * (v8 - v83); /*0x6d8f03*/
  int v12 = v84; /*0x6d8f07*/
  int v94 = 2 * (v10 - v84); /*0x6d8f0f*/
  int v13 = 0; /*0x6d8f13*/
  int * v82 = 0; /*0x6d8f15*/
  do /*0x6d95a9*/
  {
    v85 = 0; /*0x6d8f1c*/
    int v14 = 24 * v13; /*0x6d8f24*/
    int v75 = 24 * v13; /*0x6d8f27*/
    if ( DataGlobal_8A0370[6 * v13] > 0 ) /*0x6d8f33*/
    {
      while ( 1 ) /*0x6d8f43*/
      {
  int v88; // [esp+58h] [ebp-BCh]
  int v87; // [esp+54h] [ebp-C0h]
  int v86; // [esp+50h] [ebp-C4h] BYREF
        int * v15 = *(int **)(*(int *)((char *)DataGlobal_8A0364 + v14) + 4 * v85); /*0x6d8f43*/
        *((_BYTE *)v15 + 153) = 0; /*0x6d8f48*/
        if ( v15 ) /*0x6d8f4f*/
        {
          if ( (v15[5] & 4) != 0 ) /*0x6d8f64*/
          {
            int v16 = v15[39]; /*0x6d8f72*/
            v86 = v16; /*0x6d8f74*/
            int v17 = v15[40]; /*0x6d8f7a*/
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
  char v107[12]; // [esp+FCh] [ebp-18h] BYREF
            (*(void (__thiscall **)(int *, char *, _DWORD))(*v15 + 76))(v15, v107, 0); /*0x6d8fc0*/
            if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) != 0 ) /*0x6d8fce*/
            {
              if ( Game::Stub3((int)&v86) ) /*0x6d8fda*/
                goto LABEL_53; /*0x6d8fe1*/
            }
  char v104[12]; // [esp+D8h] [ebp-3Ch] BYREF
            _DWORD * v18 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*v15 + 72))(v15, v104); /*0x6d8ff3*/
            v19 = g_TacticalClass_Instance; /*0x6d8ff6*/
  int v103; // [esp+D0h] [ebp-44h] BYREF
            int * v20 = Coord::To_ScreenRaw(&v103, v18); /*0x6d9007*/
            v77 = *v20; /*0x6d9010*/
            v78 = v20[1]; /*0x6d9017*/
            int v21 = v78 - (unsigned int)v19[45].__tail_0; /*0x6d9029*/
            v77 -= (int)v19[44].__tail_0; /*0x6d9030*/
            v78 = v21; /*0x6d9034*/
            if ( v77 >= -360 && v77 <= DataGlobal_B0CE30 + 360 && v21 >= -180 && v21 <= DataGlobal_B0CE34 + 180 ) /*0x6d906a*/
            {
              int v22 = *v15; /*0x6d9070*/
              *((_BYTE *)v15 + 153) = 1; /*0x6d907e*/
              (*(void (__thiscall **)(int *, int *, int *))(v22 + 268))(v15, &v77, &DSurface_ViewBounds); /*0x6d9085*/
              (*(void (__thiscall **)(int *, int *, int, _DWORD))(*v15 + 260))(v15, &DSurface_ViewBounds, a2, 0); /*0x6d909e*/
            }
            goto LABEL_52; /*0x6d90a4*/
          }
          if ( (v15[5] & 1) != 0 ) /*0x6d90af*/
          {
            int v23 = v15[39]; /*0x6d90bd*/
            v86 = v23; /*0x6d90bf*/
            int v24 = v15[40]; /*0x6d90c5*/
            v87 = v24; /*0x6d90c8*/
            v88 = v15[41]; /*0x6d90cf*/
            if ( v23 >= v11 && v23 < v11 + v93 && v24 >= v12 && v24 < v12 + v94 ) /*0x6d90f7*/
            {
              int v25 = *v15; /*0x6d90fd*/
              *((_BYTE *)v15 + 153) = 1; /*0x6d9111*/
  char v106[12]; // [esp+F0h] [ebp-24h] BYREF
              _DWORD * v26 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(v25 + 72))(v15, v106); /*0x6d9118*/
  int v99[3]; // [esp+A8h] [ebp-6Ch] BYREF
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
        int v27 = (*(int (__thiscall **)(int *))(*v15 + 44))(v15); /*0x6d917b*/
        if ( v27 == 4 ) /*0x6d9181*/
        {
  char v108[12]; // [esp+108h] [ebp-Ch] BYREF
          int * v28 = (int *)(*(int (__thiscall **)(int *, char *))(*v15 + 72))(v15, v108); /*0x6d9196*/
          int v29 = *v28; /*0x6d9198*/
          v86 = v29; /*0x6d919a*/
          int v30 = v28[1]; /*0x6d91a0*/
          v87 = v30; /*0x6d91a3*/
          v88 = v28[2]; /*0x6d91aa*/
          if ( v29 >= v11 && v29 < v11 + v93 && v30 >= v12 && v30 < v12 + v94 ) /*0x6d91d2*/
          {
            char v31 = *((_BYTE *)v15 + 280); /*0x6d91d8*/
            *((_BYTE *)v15 + 153) = 1; /*0x6d91de*/
            if ( v31 /*0x6d920e*/
              || !*(_BYTE *)(v15[50] + 884)
  int v32; // eax
  char v105[12]; // [esp+E4h] [ebp-30h] BYREF
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
            int v33 = v15[39]; /*0x6d9251*/
            v86 = v33; /*0x6d9257*/
            int v34 = v15[40]; /*0x6d925d*/
            v87 = v34; /*0x6d9260*/
            v88 = v15[41]; /*0x6d9267*/
            if ( v33 >= v11 && v33 < v11 + v93 && v34 >= v12 && v34 < v12 + v94 && !Game::Stub3((int)&v86) ) /*0x6d929f*/
            {
              int v35 = *v15; /*0x6d92ac*/
              *((_BYTE *)v15 + 153) = 1; /*0x6d92ae*/
              (*(void (__thiscall **)(int *, int *, int, _DWORD))(v35 + 260))(v15, &DSurface_ViewBounds, a2, 0); /*0x6d92b7*/
            }
          }
          goto LABEL_53; /*0x6d92b7*/
        }
        int v36 = v15[39]; /*0x6d92c4*/
        v86 = v36; /*0x6d92c6*/
        int v37 = v15[40]; /*0x6d92cc*/
        v87 = v37; /*0x6d92cf*/
        v88 = v15[41]; /*0x6d92d6*/
        if ( v36 >= v11 && v36 < v11 + v93 && v37 >= v12 && v37 < v12 + v94 ) /*0x6d92fe*/
        {
          int * v38 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(*v15 + 72))(v15, v101); /*0x6d9310*/
          v39 = g_TacticalClass_Instance; /*0x6d9313*/
          int * v40 = v38; /*0x6d9319*/
          int * v41 = IsoCoord::ToPixel(v95, *v38, v38[1]); /*0x6d932b*/
          int v42 = *v41; /*0x6d932d*/
          int v43 = v41[1]; /*0x6d932f*/
          int v44 = v40[2]; /*0x6d9332*/
          int v100 = v43; /*0x6d9335*/
          int v45 = v42; /*0x6d9343*/
          int v46 = ZCoordToScreenY(v44); /*0x6d934a*/
          int v91 = v45 / 256; /*0x6d935f*/
          int v92 = v100 / 256 - v46; /*0x6d936e*/
          lpVtbl = v39[45].__tail_0; /*0x6d9378*/
  _DWORD v97[2]; // [esp+90h] [ebp-84h] BYREF
          v97[0] = v39[44].__tail_0; /*0x6d9383*/
          v97[1] = lpVtbl; /*0x6d938a*/
          Vector2::Subtract(&v91, v97); /*0x6d9391*/
          if ( v91 >= -360 && v91 <= DataGlobal_B0CE30 + 360 && v92 >= -180 && v92 <= DataGlobal_B0CE34 + 180 ) /*0x6d93ca*/
          {
            int v48 = *v15; /*0x6d93cc*/
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
        int v49 = *(int *)((char *)DataGlobal_8A0370 + v14); /*0x6d940c*/
        if ( ++v85 >= v49 ) /*0x6d941d*/
        {
          v13 = (int)v82; /*0x6d9423*/
          break; /*0x6d9423*/
        }
      }
    }
    if ( v13 == 2 ) /*0x6d942a*/
    {
      int v50 = 0; /*0x6d9436*/
      int v76 = 0; /*0x6d943a*/
      if ( g_BuildingProductionState > 0 ) /*0x6d943e*/
      {
        do /*0x6d9597*/
        {
          _BYTE * v51 = (_BYTE *)*((_DWORD *)g_BuildingClass_InstanceCount + v50); /*0x6d944a*/
          if ( v51[116] && v51[153] ) /*0x6d9458*/
          {
            int * v52 = (int *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v51 + 172))(v51, v102); /*0x6d9472*/
            v53 = g_TacticalClass_Instance; /*0x6d9478*/
            int * v54 = v52; /*0x6d947e*/
            _DWORD * v55 = IsoCoord::ToPixel(&v79, *v52, v52[1]); /*0x6d948b*/
            int v56 = v55[1]; /*0x6d9494*/
            __int64 v57 = (int)*v55; /*0x6d9497*/
            v96 = v56; /*0x6d949e*/
            int v58 = (BYTE4(v57) + (int)v57) >> 8; /*0x6d94a9*/
            int v59 = ZCoordToScreenY(v54[2]); /*0x6d94ac*/
            v89 = v58; /*0x6d94be*/
            int v90 = v96 / 256 - v59; /*0x6d94c9*/
            int v60 = v58 - (unsigned int)v53[44].__tail_0; /*0x6d94d9*/
            int v61 = v90 - (unsigned int)v53[45].__tail_0; /*0x6d94db*/
            v89 = v60; /*0x6d94e3*/
            v90 = v61; /*0x6d94e7*/
            if ( v60 >= -360 && v60 <= DataGlobal_B0CE30 + 360 && v61 >= -180 && v61 <= DataGlobal_B0CE34 + 180 ) /*0x6d9516*/
            {
  _DWORD v98[4]; // [esp+98h] [ebp-7Ch] BYREF
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
  int * v62 = DataGlobal_8A0364; /*0x6d95af*/
  v82 = DataGlobal_8A0364; /*0x6d95b4*/
  do /*0x6d97b5*/
  {
    result = 0; /*0x6d95bb*/
    v83 = v62[3]; /*0x6d95bf*/
    v85 = 0; /*0x6d95c3*/
    if ( v83 > 0 ) /*0x6d95c7*/
    {
  bool v72; // cc
      do /*0x6d97a2*/
      {
        int v64 = *(_DWORD *)(*v62 + 4 * result); /*0x6d95cf*/
        if ( *(_BYTE *)(v64 + 153) ) /*0x6d95d2*/
        {
          if ( v64 ) /*0x6d95e2*/
          {
            if ( (*(_BYTE *)(v64 + 20) & 1) != 0 ) /*0x6d95f4*/
            {
              if ( (*(_BYTE *)(v64 + 20) & 4) == 0 /*0x6d965d*/
                || ((*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v64 + 76))(v64, v102, 0), !g_hWnd)
                || ArmageddonMode
                || (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) == 0
                || (v95[0] = *(float *)(v64 + 156),
                    v95[1] = *(float *)(v64 + 160),
                    v95[2] = *(float *)(v64 + 164),
                    !Game::Stub3((int)v95)) )
              {
                int * v65 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v64 + 72))(v64, v101); /*0x6d9676*/
                int v66 = *v65; /*0x6d9683*/
                v96 = v65[1]; /*0x6d9689*/
                v89 = v65[2]; /*0x6d9697*/
                LODWORD(v79) = -60 * v96 / 2 + 60 * v66 / 2; /*0x6d96d0*/
                int v67 = SLODWORD(v79) / 256; /*0x6d96f7*/
                int v68 = (30 * v96 / 2 + 30 * v66 / 2) / 256; /*0x6d96fa*/
                int v69 = Math::RoundToInt((double)v89 * DataGlobal_B0CD48 + (double)(v89 >= 728) + 0.5); /*0x6d9721*/
                v77 = v67; /*0x6d972d*/
                v78 = v68 - v69; /*0x6d9731*/
                int v70 = v67 - (unsigned int)g_TacticalClass_Instance[44].__tail_0; /*0x6d9741*/
                int v71 = v68 - v69 - (unsigned int)g_TacticalClass_Instance[45].__tail_0; /*0x6d9743*/
                v77 = v70; /*0x6d974b*/
                v78 = v71; /*0x6d974f*/
                if ( v70 >= -360 && v70 <= DataGlobal_B0CE30 + 360 && v71 >= -180 && v71 <= DataGlobal_B0CE34 + 180 ) /*0x6d9779*/
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
  while ( (int)v62 < (int)((int *)&DataGlobal_8A03D8 + 1) ); /*0x6d97b5*/
  return result; /*0x6d97bb*/
}
}

// 0x6DA180
int TacticalMap::DrawOccupiedRegion()
{
{
  int result; // eax

  if ( this->qD90 || (result = this->qD94) != 0 ) /*0x6da195*/
  {
    int v2 = this->qD90; /*0x6da19b*/
    int v3 = this->qD98; /*0x6da1a1*/
    int v4 = this->qD94; /*0x6da1a9*/
    int v5 = this->qD9C; /*0x6da1af*/
    if ( v3 < v2 ) /*0x6da1b8*/
    {
      int v6 = v2; /*0x6da1ba*/
      v2 = v3; /*0x6da1bc*/
      v3 = v6; /*0x6da1be*/
    }
    if ( v5 < v4 ) /*0x6da1c2*/
    {
      int v7 = v4; /*0x6da1c4*/
      v4 = v5; /*0x6da1c6*/
      v5 = v7; /*0x6da1c8*/
    }
    int v8 = v3 - v2 + 1; /*0x6da1ce*/
    if ( *(_DWORD *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x6da1dc*/
      int v9 = *(unsigned __int8 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 15); /*0x6da1ea*/
    else
      v9 = *(unsigned __int16 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 30); /*0x6da1f7*/
  _DWORD v10[4]; // [esp+0h] [ebp-10h] BYREF
    v10[2] = v8; /*0x6da201*/
    v10[0] = v2; /*0x6da209*/
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
}

// 0x7BCFB0
unsigned int TacticalMap::FillScanlinesOpaque(int a2, int a3, TacticalMap * aP3, int a5)
{
{
  TacticalMap *v5; // edi
  unsigned int result; // eax
  TacticalMap *v9; // ecx
  TacticalMap *v18; // ebx
  v5 = (TacticalMap *)this; /*0x7bcfbd*/
  int v6 = (*(int (__thiscall **)(_DWORD, int, int))(*this->TacticalMap_field_14 + 92))(this->TacticalMap_field_14, a2, a3); /*0x7bcfd0*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v5->TacticalMap_field_14 + 96))(v5->TacticalMap_field_14); /*0x7bcfd4*/
  result = v5->TacticalMap_field_1C; /*0x7bcfda*/
  unsigned int v8 = v6 + v5->TacticalMap_field_10; /*0x7bcfdd*/
  if ( v8 >= result ) /*0x7bcfe1*/
    v8 -= v5->TacticalMap_field_20; /*0x7bcfe3*/
  if ( a5 > 0 ) /*0x7bcfec*/
  {
    int v26 = a5; /*0x7bcff4*/
    do /*0x7bd0cf*/
    {
      v9 = aP3; /*0x7bcff8*/
      if ( v8 + 2 * (_DWORD)aP3 < result ) /*0x7bd001*/
      {
        v18 = aP3; /*0x7bd0e2*/
        char * v19 = (char *)v8; /*0x7bd0e4*/
        if ( (v8 & 2) != 0 && aP3 ) /*0x7bd0ea*/
        {
          *(_WORD *)v8 = -1; /*0x7bd0ec*/
          v19 = (char *)(v8 + 2); /*0x7bd0f1*/
          v18 = (TacticalMap *)((char *)aP3 - 1); /*0x7bd0f4*/
        }
        char * v20 = 0; /*0x7bd0f9*/
        int v21 = (int)v18 >> 1; /*0x7bd0fe*/
        if ( (int)v18 >> 1 ) /*0x7bd0fe*/
        {
          memset(v19, 0xFFu, 4 * v21); /*0x7bd109*/
          v5 = (TacticalMap *)this; /*0x7bd10b*/
          v20 = &v19[4 * v21]; /*0x7bd10f*/
        }
        if ( ((unsigned __int8)v18 & 1) != 0 && v20 ) /*0x7bd11a*/
          *(_WORD *)v20 = -1; /*0x7bd11c*/
      }
      else
      {
        char * v10 = (char *)v8; /*0x7bd009*/
        unsigned int v11 = (result - v8) >> 1; /*0x7bd00b*/
        int v23 = v11; /*0x7bd012*/
        if ( (v8 & 2) != 0 && v11 ) /*0x7bd01a*/
        {
          *(_WORD *)v8 = -1; /*0x7bd01f*/
          v10 = (char *)(v8 + 2); /*0x7bd024*/
          v23 = v11 - 1; /*0x7bd027*/
        }
        char * v12 = 0; /*0x7bd02f*/
        int v13 = v23 >> 1; /*0x7bd034*/
        if ( v23 >> 1 ) /*0x7bd034*/
        {
          memset(v10, 0xFFu, 4 * v13); /*0x7bd03f*/
          v9 = aP3; /*0x7bd041*/
          v12 = &v10[4 * v13]; /*0x7bd045*/
        }
        if ( (v23 & 1) != 0 && v12 ) /*0x7bd052*/
          *(_WORD *)v12 = -1; /*0x7bd054*/
        int v14 = (int)v9 - v11; /*0x7bd05f*/
        float v15 = this->m_TintFactor; /*0x7bd061*/
        char v25 = v14; /*0x7bd064*/
        _WORD * v24 = v15; /*0x7bd06b*/
        if ( ((unsigned __int8)v15 & 2) != 0 && v14 ) /*0x7bd073*/
        {
          *v15++ = -1; /*0x7bd075*/
          --v14; /*0x7bd07d*/
          v24 = v15; /*0x7bd07e*/
          v25 = v14; /*0x7bd082*/
        }
        _WORD * v16 = 0; /*0x7bd088*/
        int v17 = v14 >> 1; /*0x7bd08d*/
        if ( v14 >> 1 ) /*0x7bd08d*/
        {
          memset(v15, 0xFFu, 4 * v17); /*0x7bd098*/
          v16 = &v24[2 * v17]; /*0x7bd09e*/
          LOBYTE(v14) = v25; /*0x7bd0a1*/
        }
        if ( (v14 & 1) != 0 && v16 ) /*0x7bd0ab*/
          *v16 = -1; /*0x7bd0ad*/
        v5 = (TacticalMap *)this; /*0x7bd0b2*/
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
}
