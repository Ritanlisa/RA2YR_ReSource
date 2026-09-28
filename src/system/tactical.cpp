#include "system/tactical.hpp"
#include "system/cell.hpp"
#include "system/map.hpp"
#include "object/object.hpp"
#include "object/techno.hpp"
#include "structure/building.hpp"
#include "type/building_type.hpp"
#include "render/surface.hpp"
#include "core/math.hpp"
#include "core/coordinate.hpp"
#include "core/reverse_marker.hpp"

#include <cstring>
#include <cmath>
#include "e4/e4_globals.hpp"

namespace gamemd
{

TacticalClass::TacticalClass() noexcept
    : field24(0)
    , field28(0)
    , TacticalClass_field_2C(0)
    , field30(0)
    , field34(0)
    , field38(0)
    , TacticalClass_field_3C(0)
    , field40(0)
    , field44(0)
    , field48(0)
    , TacticalClass_field_4C(0)
    , field50(0)
    , field54(0)
    , field58(0)
    , TacticalClass_field_5C(0)
    , field60(0)
    , field64(0)
    , field68(0)
    , TacticalClass_field_6C(0)
    , field70(0)
    , field74(0)
    , field78(0)
    , TacticalClass_field_7C(0)
    , field80(0)
    , field84(0)
    , field88(0)
    , TacticalClass_field_8C(0)
    , field90(0)
    , field94(0)
    , field98(0)
    , TacticalClass_field_9C(0)
    , TacticalClass_field_A0(0)
    , TacticalClass_field_A4(0)
    , TacticalClass_field_A8(0)
    , TacticalClass_field_AC(false)
    , TacticalClass_field_AD(false)
    , zoomInFactor(1.0)
    , TacticalClass_field_C8(0)
    , TacticalClass_field_CC(0)
    , TacticalClass_field_D0(0)
    , TacticalClass_field_D4(0)
    , TacticalClass_field_D8(0)
    , TacticalClass_field_DC(0)
    , visibleCellCount(0)
    , TacticalClass_field_D64(0)
    , TacticalClass_field_D68(0)
    , TacticalClass_field_D6C(0)
    , TacticalClass_field_D70(0)
    , TacticalClass_field_D74(0)
    , TacticalClass_field_D78(0)
    , TacticalClass_field_D7C(false)
    , redrawing(false)
    , TacticalClass_field_D80(0)
    , TacticalClass_field_D84(0)
    , TacticalClass_field_D88(0)
    , TacticalClass_field_D8C(0)
    , TacticalClass_field_D90(0)
    , TacticalClass_field_D94(0)
    , TacticalClass_field_D98(0)
    , TacticalClass_field_D9C(0)
    , mouseFrameIndex(0)
    , startTime(0)
    , TacticalClass_field_DA8(0)
    , TacticalClass_field_DAC(0)
    , TacticalClass_field_DF4(0)
    , TacticalClass_field_DF8(0.0)
    , TacticalClass_field_E00(0)
    , TacticalClass_field_E04(0)
    , TacticalClass_field_E08(0.0)
    , TacticalClass_field_E10(0)
    , TacticalClass_field_E14(0)
{
    std::memset(&visibleArea, 0, sizeof(visibleArea));
    std::memset(visibleCells, 0, sizeof(visibleCells));
    std::memset(floats, 0, sizeof(floats));
    std::memset(&TacticalClass_field_DE4, 0, sizeof(TacticalClass_field_DE4));
}

// ============================================================
// Coordinate conversion functions
// ============================================================

// IDA: 0x6D2140 -- Coord::To_Screen
// Converts world coordinates to screen pixel coordinates using tactical view matrix.
// Uses the transform matrix at this+3556 (field D94 region) to apply inverse view transform.
// Output: screen X, Y in Point2D
static CoordStruct* Coord_To_Screen_Impl(const TacticalClass* tac, const CoordStruct& world, Point2D* out)
{
    // The transform matrix at TacticalClass+0xD94 (floats[0..11]) is a 3x4 matrix
    // that transforms world-space coords to screen-space coords.
    // Standard isometric projection:
    // screen_x = (world.X - world.Y) * cos(angle) + tac->viewOffsetX
    // screen_y = (world.X + world.Y) * sin(angle) - world.Z + tac->viewOffsetY

    // Use the stored transform matrix for accurate projection
    const float* m = tac->floats; // 12 floats = 3x4 matrix

    float wx = (float)(world.X);
    float wy = (float)(world.Y);
    float wz = (float)(world.Z);

    float sx = m[0] * wx + m[1] * wy + m[2]  * wz + m[3];
    float sy = m[4] * wx + m[5] * wy + m[6]  * wz + m[7];
    // m[8]*wx + m[9]*wy + m[10]*wz + m[11] = transformed Z (depth)

    out->X = (int)(sx);
    out->Y = (int)(sy);
    return (CoordStruct*)(out); // Point2D and CoordStruct are binary-compatible at offset 0,4
}

// IDA: 0x6D2140 wrapper
CoordStruct* TacticalClass::Coord_To_Screen(const CoordStruct& world, Point2D* out) const
{
    Coord_To_Screen_Impl(this, world, out);
    return (CoordStruct*)(out);
}

// IDA: 0x6D1FE0 -- AdjustForZShapeMove
// Adjusts draw rectangle for z-shaped building movement (foundation offset)
// 0x6d1fe0
Point2D* TacticalClass::AdjustForZShapeMove(Point2D* dest, Point2D* client)
{
  int v2; // kr08_4

  v2 = 30 * client[1] / 2 + 30 * *client / 2; /*0x6d204b*/
  *dest = (-60 * client[1] / 2 + 60 * *client / 2) / 256; /*0x6d2057*/
  dest[1] = v2 / 256; /*0x6d2059*/
  return dest; /*0x6d202f*/
}
// IDA: 0x6D20E0 -- ZCoordToScreenY
// Converts world Z coordinate to screen Y offset
int ZCoordToScreenY(int z_world)
{
    // Standard isometric: each unit of Z maps to -1 pixel on screen Y
    return -z_world;
}

// ============================================================
// Isometric rendering -- core pipeline
// ============================================================

// IDA: 0x6D7560 -- TacticalClass::RenderIsometric
// Iterates over visible cell rows and checks visibility per cell.
// Uses the isometric row/column scan pattern:
//   For each row (0 to viewHeight in cells):
//     start_cell = viewOrigin + (row/2, row/2)
//     For each column (0 to viewWidth):
//       cell = (start_col, start_row) where col in [0, viewWidth]
// Each cell is checked for screen bounds intersection.
// 0x6d7560
void* TacticalClass::RenderIsometric(const RectangleStruct& viewRect, int flags)
{
  int v3; // eax
  int v5; // eax
  int v6; // ecx
  float *v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // ebp
  int v12; // edx
  unsigned int result; // eax
  int v14; // ecx
  int v15; // eax
  void *v16; // eax
  int *ScreenRect; // eax
  unsigned int *v18; // eax
  int v19; // ebp
  float v21; // [esp+14h] [ebp-94h] BYREF
  float v22; // [esp+18h] [ebp-90h]
  int v23; // [esp+1Ch] [ebp-8Ch]
  int v24; // [esp+20h] [ebp-88h]
  int v25; // [esp+24h] [ebp-84h]
  int v27; // [esp+2Ch] [ebp-7Ch]
  int16_t v29; // [esp+32h] [ebp-76h]
  int v31; // [esp+3Ch] [ebp-6Ch]
  int v33[2]; // [esp+44h] [ebp-64h] BYREF
  int v34; // [esp+4Ch] [ebp-5Ch]
  int v35; // [esp+50h] [ebp-58h]
  float v36[3]; // [esp+54h] [ebp-54h] BYREF
  unsigned int v37[6]; // [esp+60h] [ebp-48h] BYREF
  int v38; // [esp+78h] [ebp-30h]
  unsigned int v39[3]; // [esp+7Ch] [ebp-2Ch] BYREF
  int v40[4]; // [esp+88h] [ebp-20h] BYREF
  int v41[4]; // [esp+98h] [ebp-10h] BYREF

  v3 = (int)(*viewRect);
  v23 = 0; /*0x6d7581*/
  v5 = this->visibleArea + v3; /*0x6d7595*/
  v6 = viewRect[1] + this->q0B4; /*0x6d759c*/
  v24 = v5 - DSurface_ViewBounds; /*0x6d759e*/
  v25 = v6 - g_Map_VisibleRect; /*0x6d75a8*/
  v21 = (float)(v5 - DSurface_ViewBounds); /*0x6d75b7*/
  v22 = (float)(v6 - g_Map_VisibleRect); /*0x6d75c3*/
  v7 = TransformMatrix3x4Point(v36, (float *)(&this->u32_58C6), &v21); /*0x6d75c7*/
  v21 = *v7; /*0x6d75ce*/
  v22 = v7[1]; /*0x6d75d9*/
  v23 = *((unsigned int *)v7 + 2); /*0x6d75e0*/
  v8 = Math::RoundToInt(v21); /*0x6d75ed*/
  v9 = Math::RoundToInt(v22); /*0x6d75ef*/
  Coord::Subtract(v39, v8, v9, 0); /*0x6d75ff*/
  v10 = viewRect[3]; /*0x6d7608*/
  IDA_LOWORD(v27) = v39[0] / 256; /*0x6d7617*/
  IDA_HIWORD(v27) = v39[1] / 256; /*0x6d762f*/
  v24 = v27; /*0x6d764e*/
  v11 = v10 / 15 + 17; /*0x6d7655*/
  v12 = (uint64_t)(2290649225LL * viewRect[2]) >> 32; /*0x6d765e*/
  v11 = v11; /*0x6d7660*/
  v12 >>= 5; /*0x6d7664*/
  IDA_LOWORD(v24) = v27 - 2; /*0x6d7669*/
  result = (unsigned int)v12 >> 31; /*0x6d766e*/
  v31 = v12 + ((unsigned int)v12 >> 31) + 4; /*0x6d7675*/
  v14 = 0; /*0x6d7679*/
  while ( v14 < v11 ) /*0x6d767d*/
  {
    v15 = v14 / 2; /*0x6d7688*/
    ++v14; /*0x6d768a*/
    v15 = v15; /*0x6d768b*/
    v14 = v14; /*0x6d7692*/
    v29 = v14 / 2; /*0x6d769b*/
    IDA_LOWORD(v27) = v24 + v15; /*0x6d76ae*/
    IDA_HIWORD(v27) = v29 + IDA_HIWORD(v24); /*0x6d76b9*/
    result = v31; /*0x6d76be*/
    v27 = v27; /*0x6d76c8*/
    if ( v31 > 0 ) /*0x6d76cc*/
    {
      v31 = v31; /*0x6d76d2*/
      do /*0x6d7817*/
      {
        if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (int16_t *)&v27) ) /*0x6d76e0*/
        {
          v16 = (int *)(CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v27));
          ScreenRect = (int *)(CellClass::GetScreenRect((int)v16, v40));
          v33[0] = *ScreenRect; /*0x6d7711*/
          v33[1] = ScreenRect[1]; /*0x6d771a*/
          v34 = ScreenRect[2]; /*0x6d7721*/
          v35 = ScreenRect[3]; /*0x6d7733*/
          v18 = ClipRectIntersection(v41, viewRect, v33, 0, 0); /*0x6d773a*/
          v37[3] = *v18; /*0x6d7743*/
          v19 = v18[2]; /*0x6d774f*/
          v37[4] = v18[1]; /*0x6d7752*/
          v38 = v18[3]; /*0x6d7762*/
          Coord::Subtract(v37, ((((int16_t)v27 << 8) + 128) / 256) << 8, (((IDA_SHIWORD(v27) << 8) + 128) / 256) << 8, 0); /*0x6d7799*/
          v36[0] = *(float *)v37; /*0x6d77aa*/
          v36[1] = *(float *)&v37[1]; /*0x6d77ae*/
          v36[2] = *(float *)&v37[2]; /*0x6d77be*/
          Coord::To_Screen((unsigned int *)this, v36, (int *)&v21); /*0x6d77c2*/
          IDA_LODWORD(v21) -= 30; /*0x6d77d4*/
          if ( v34 > 0 && v35 > 0 && v19 > 0 && v38 > 0 ) /*0x6d77ec*/
            TacticalClass::CheckCellVisibility(&v21, flags, 0); /*0x6d77ff*/
        }
        IDA_LOWORD(v27) = v27 + 1; /*0x6d7804*/
        --IDA_HIWORD(v27); /*0x6d780d*/
        result = --v31; /*0x6d7812*/
      }
      while ( v31 ); /*0x6d7817*/
      v14 = v14; /*0x6d781d*/
      v11 = v11; /*0x6d7821*/
    }
  }
  return result; /*0x6d782d*/
}
// 0x480350
int TacticalClass::CheckCellVisibility(const Point2D& screen_pos, int flags, bool unk)
{
  int v4; // eax
  int v6; // eax
  int *v7; // edi
  int inited; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  unsigned int v16[2]; // [esp+14h] [ebp-8h] BYREF
  int v17; // [esp+28h] [ebp+Ch]

  IDA_LOBYTE(v4) = unk; /*0x480350*/
  if ( unk ) /*0x48035f*/
    return v4; /*0x48035f*/
  if ( !this->ptr_34 ) /*0x480365*/
    TacticalClass::SetView(this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x480384*/
  v6 = this->u32_38; /*0x480389*/
  v17 = 0; /*0x48038c*/
  if ( v6 == 0xFFFF ) /*0x480395*/
  {
    v15 = 0; /*0x4803e9*/
    v7 = (int *)*((unsigned int *)g_FrameCounter + dword_AA10B0); /*0x4803ed*/
    inited = CellClass::InitRandomOffsets(this, dword_AA10B0, v7[188]); /*0x4803fa*/
  LABEL_10:
    v17 = inited; /*0x4803ff*/
    goto LABEL_11; /*0x4803ff*/
  }
  v7 = (int *)*((unsigned int *)g_FrameCounter + v6); /*0x48039d*/
  v15 = *(uint8_t *)(&this->q0702); /*0x4803ae*/
  if ( v7[188] > 1 ) /*0x4803b5*/
  {
    if ( CellClass::GetTerrainFlag(v7, *(uint8_t *)(&this->q0702)) ) /*0x4803ba*/
      inited = (this->q140 >> 13) & 1; /*0x4803cc*/
    else
      inited = CellClass::InitRandomOffsets(this, this->u32_38, v7[188]); /*0x4803dc*/
    goto LABEL_10; /*0x4803cf*/
  }
  LABEL_11:
  ++dword_A83ECC; /*0x480403*/
  v9 = this->u32_11B; /*0x480416*/
  v10 = screen_pos[1]; /*0x48041d*/
  v16[0] = *screen_pos; /*0x480420*/
  v11 = v10 - 15 * v9; /*0x48042e*/
  v4 = (*(int (__thiscall **)(int *))(*v7 + 156))(v7); /*0x480430*/
  if ( v4 ) /*0x48043c*/
    IDA_LOBYTE(v4) = TerrainClass::GenerateTexture( /*0x480499*/
                   this->ptr_34,
                   v15,
                   g_DSurface_Hidden_2,
                   v16[0],
                   v11 + g_Map_VisibleRect,
                   *flags,
                   flags[1],
                   flags[2],
                   flags[3],
                   this->u32_11B,
                   *(int16_t *)(&this->q0688),
                   1,
                   v17,
                   0,
                   0,
                   0,
                   0);
  if ( this->q048 != -1 ) /*0x4804a2*/
  {
    v12 = flags[1]; /*0x4804b1*/
    v16[0] = v16[0] + 30 - *flags; /*0x4804bd*/
    v13 = this->q048; /*0x4804c1*/
    v16[1] = v11 + g_Map_VisibleRect - v12; /*0x4804c4*/
    IDA_LOBYTE(v4) = (*(int (__thiscall **)(unsigned int, unsigned int *, unsigned int *, unsigned int, int, int))(**((unsigned int **)FactoryClass_Array /*0x4804f5*/
                                                                                        + v13)
                                                                                     + 160))(
                   *((unsigned int *)FactoryClass_Array + v13),
                   v16,
                   flags,
                   *(uint8_t *)(&this->q0707),
                   dword_89E7C0 * this->u32_11B,
                   &this->q00C6);
  }
  return v4; /*0x4804fb*/
}
// 0x6d7840
int TacticalClass::DrawMap(const RectangleStruct& viewRect, RectangleStruct* bounds)
{
  unsigned int result; // eax
  DWORD Time; // eax
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // eax
  int v11; // ebp
  float *v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // esi
  float v17; // ebx
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  unsigned int *v21; // esi
  int NthOfType; // edi
  int *v23; // ebp
  BOOL v24; // edi
  int *ScreenRect; // eax
  int v26; // esi
  int v27; // edi
  int v28; // eax
  int v30; // [esp+Ch] [ebp-44h]
  float v37; // [esp+28h] [ebp-28h] BYREF
  float v38; // [esp+2Ch] [ebp-24h]
  int v39; // [esp+30h] [ebp-20h]
  int v40; // [esp+34h] [ebp-1Ch] BYREF
  int v41; // [esp+38h] [ebp-18h]
  int v42[4]; // [esp+40h] [ebp-10h] BYREF
  int v43; // [esp+54h] [ebp+4h]

  result = PingPongBuffer::GetWriteOffset(); /*0x6d7847*/
  if ( (unsigned int)dword_ABCD44 >= result ) /*0x6d7852*/
  {
    result = (*(int (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 112))(g_DSurface_Hidden_2); /*0x6d7860*/
    if ( result == 2 ) /*0x6d7866*/
    {
      result = g_lParam; /*0x6d786c*/
      if ( g_lParam ) /*0x6d7873*/
      {
        result = (*(int (__thiscall **)(int, unsigned int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2 + 92))( /*0x6d7887*/
                   g_DSurface_Hidden_2,
                   0,
                   0);
        result = result; /*0x6d788c*/
        if ( result ) /*0x6d7890*/
        {
          Time = timeGetTime(); /*0x6d7896*/
          v6 = Time - dword_B0E640; /*0x6d78a4*/
          dword_B0E640 = Time; /*0x6d78a6*/
          v30 = v6; /*0x6d78b1*/
          if ( v6 > 0x3E8 ) /*0x6d78b5*/
            v30 = 1000; /*0x6d78b7*/
          v7 = (*(int (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2); /*0x6d78c9*/
          v8 = this->q0B0; /*0x6d78d0*/
          v7 = v7; /*0x6d78dc*/
          v9 = this->q0B4; /*0x6d78e2*/
          v10 = v8 + *viewRect; /*0x6d78ee*/
          v11 = viewRect[1]; /*0x6d78f0*/
          v40 = v10 - DSurface_ViewBounds; /*0x6d78f5*/
          v41 = v11 + v9 - g_Map_VisibleRect; /*0x6d7905*/
          v37 = (float)(v10 - DSurface_ViewBounds); /*0x6d790a*/
          v39 = 0; /*0x6d791c*/
          v38 = (float)v41; /*0x6d7924*/
          v12 = TransformMatrix3x4Point((float *)&v40, (float *)(&this->q58C6), &v37); /*0x6d7928*/
          v37 = *v12; /*0x6d792f*/
          v38 = v12[1]; /*0x6d793a*/
          v39 = *((unsigned int *)v12 + 2); /*0x6d7941*/
          v13 = Math::RoundToInt(v37); /*0x6d794e*/
          v14 = Math::RoundToInt(v38); /*0x6d7950*/
          v15 = viewRect[3]; /*0x6d796d*/
          v16 = viewRect[2]; /*0x6d7978*/
          IDA_HIWORD(v40) = v14 / 256; /*0x6d799d*/
          IDA_LODWORD(v17) = v15 / 15 + 17; /*0x6d79a4*/
          v18 = 0; /*0x6d79ac*/
          v17 = v17; /*0x6d79b3*/
          v19 = v16 / 60 + 4; /*0x6d79bc*/
          IDA_LOWORD(v40) = v13 / 256 - 2; /*0x6d79c0*/
          v19 = v19; /*0x6d79c5*/
          while ( v18 < IDA_SLODWORD(v17) ) /*0x6d79c9*/
          {
            v20 = v18 / 2; /*0x6d79d4*/
            ++v18; /*0x6d79d6*/
            IDA_LOWORD(v37) = v20; /*0x6d79d7*/
            v18 = v18; /*0x6d79de*/
            IDA_HIWORD(v37) = v18 / 2; /*0x6d79e7*/
            IDA_LOWORD(v43) = v40 + v20; /*0x6d79fa*/
            IDA_HIWORD(v43) = IDA_HIWORD(v37) + IDA_HIWORD(v40); /*0x6d7a05*/
            v43 = v43; /*0x6d7a10*/
            if ( v19 > 0 ) /*0x6d7a14*/
            {
              v19 = v19; /*0x6d7a1a*/
              do /*0x6d7bcb*/
              {
                if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (int16_t *)&v43) ) /*0x6d7a28*/
                {
                  v21 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v43); /*0x6d7a44*/
                  NthOfType = Building::GetNthOfType((int)v21); /*0x6d7a4d*/
                  if ( (v21[75] & 0x10) != 0 /*0x6d7a94*/
                    && !CellClass::QuickPassable(v21)
                    && (v21[59] == 2 || NthOfType)
                    && !v21[57]
                    && (v21[80] & 0x1000) == 0 )
                  {
                    v23 = (int *)v21[63]; /*0x6d7a9a*/
                    v24 = NthOfType != 0; /*0x6d7aa9*/
                    if ( v23 ) /*0x6d7aab*/
                    {
                      if ( v23[4] >= 0x2000 ) /*0x6d7ade*/
                        BuildingDebris::Init(v24); /*0x6d7ae3*/
                    }
                    else if ( RA2_OPNEW(0x3Cu) ) /*0x6d7aaf*/
                    {
                      v23 = (int *)TacticalClass::saveConfig(v24); /*0x6d7ac3*/
                      v21[63] = v23; /*0x6d7ac5*/
                    }
                    else
                    {
                      v23 = 0; /*0x6d7acd*/
                      v21[63] = 0; /*0x6d7acf*/
                    }
                    if ( v23 ) /*0x6d7aea*/
                    {
                      if ( (uint8_t)TacticalClass::DecrementCounter(v30) ) /*0x6d7af7*/
                      {
                        ScreenRect = CellClass::GetScreenRect((int)v21, v42); /*0x6d7b0b*/
                        v26 = v23[12] + *ScreenRect + ScreenRect[2] / 2; /*0x6d7b3b*/
                        v27 = v23[13] + ScreenRect[1] + ScreenRect[3] / 2; /*0x6d7b3f*/
                        if ( v26 >= *bounds && v26 < *bounds + bounds[2] ) /*0x6d7b4c*/
                        {
                          v28 = bounds[1]; /*0x6d7b4e*/
                          if ( v27 >= v28 && v27 < v28 + bounds[3] ) /*0x6d7b5c*/
                          {
                            TacticalClass::InterpolateColor(v30); /*0x6d7b65*/
                            *(unsigned short *)(v27 * v7 + result + 2 * v26) = (v23[1] >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6d7bb4*/
                                                                  | (v23[2] >> g_BitMask_Blue << g_BitMask_Green)
                                                                  | (v23[3] >> g_BitMask_Red << g_BitShift_Blue);
                          }
                        }
                      }
                    }
                  }
                }
                IDA_LOWORD(v43) = v43 + 1; /*0x6d7bb8*/
                --IDA_HIWORD(v43); /*0x6d7bc1*/
                --v19; /*0x6d7bc7*/
              }
              while ( v19 ); /*0x6d7bcb*/
              v18 = v18; /*0x6d7bd1*/
              v19 = v19; /*0x6d7bd5*/
              v17 = v17; /*0x6d7bd9*/
            }
          }
          return (*(int (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 96))(g_DSurface_Hidden_2); /*0x6d7bed*/
        }
      }
    }
  }
  return result; /*0x6d7bf2*/
}
// 0x6d7c00
int TacticalClass::DrawTerrain(const RectangleStruct& viewRect)
{
  int *v3; // edi
  int v5; // eax
  int v6; // ecx
  float *v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ecx
  float *v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // ecx
  int v18; // ebx
  int v19; // edi
  int v20; // ebx
  int v21; // ecx
  unsigned int result; // eax
  int v23; // edi
  int v25; // eax
  int16_t v26; // dx
  float *v27; // eax
  int v28; // [esp+0h] [ebp-68h]
  int v29; // [esp+0h] [ebp-68h]
  int v30; // [esp+4h] [ebp-64h]
  int v31; // [esp+4h] [ebp-64h]
  unsigned int v34[2]; // [esp+24h] [ebp-44h]
  int v35; // [esp+2Ch] [ebp-3Ch] BYREF
  int v36; // [esp+30h] [ebp-38h]
  int v37; // [esp+34h] [ebp-34h]
  float v38; // [esp+38h] [ebp-30h] BYREF
  float v39; // [esp+3Ch] [ebp-2Ch]
  int v40; // [esp+40h] [ebp-28h]
  float v44[3]; // [esp+50h] [ebp-18h] BYREF
  int v45[3]; // [esp+5Ch] [ebp-Ch] BYREF

  a2 = a2; /*0x6d7c07*/
  v5 = this->q0B0; /*0x6d7c19*/
  v6 = a2[1] + this->q0B4 - g_Map_VisibleRect; /*0x6d7c32*/
  v35 = *a2 + v5 - DSurface_ViewBounds; /*0x6d7c34*/
  v36 = v6; /*0x6d7c38*/
  *(float *)&v30 = (float)v6; /*0x6d7c41*/
  *(float *)&v28 = (float)v35; /*0x6d7c4d*/
  Triple::Set(&v38, v28, v30, 0); /*0x6d7c50*/
  v7 = TransformMatrix3x4Point(v44, (float *)(&this->q58C6), &v38); /*0x6d7c66*/
  v38 = *v7; /*0x6d7c6d*/
  v39 = v7[1]; /*0x6d7c78*/
  v40 = *((unsigned int *)v7 + 2); /*0x6d7c7f*/
  v8 = Math::RoundToInt(v38); /*0x6d7c8c*/
  v9 = Math::RoundToInt(v39); /*0x6d7c8e*/
  Coord::Subtract(&v35, v8, v9, 0); /*0x6d7c9b*/
  v10 = *(unsigned int *)CellStruct::Set(&v21, v35 / 256, v36 / 256); /*0x6d7ccb*/
  v11 = this->q0B0; /*0x6d7ccd*/
  IDA_HIWORD(v34[0]) = IDA_HIWORD(v10); /*0x6d7cd3*/
  IDA_LOWORD(v34[0]) = v10 - 2; /*0x6d7ce0*/
  v12 = *a2; /*0x6d7ce9*/
  a2 = (int *)v34[0]; /*0x6d7ceb*/
  v13 = a2[1] + this->q0B4 - g_Map_VisibleRect; /*0x6d7d04*/
  v35 = v11 + v12 - DSurface_ViewBounds; /*0x6d7d06*/
  v36 = v13; /*0x6d7d0a*/
  *(float *)&v31 = (float)v13; /*0x6d7d15*/
  *(float *)&v29 = (float)v35; /*0x6d7d21*/
  Triple::Set(&v38, v29, v31, 0); /*0x6d7d24*/
  v14 = TransformMatrix3x4Point(v44, (float *)(&this->q58C6), &v38); /*0x6d7d34*/
  v38 = *v14; /*0x6d7d3b*/
  v39 = v14[1]; /*0x6d7d46*/
  v40 = *((unsigned int *)v14 + 2); /*0x6d7d4d*/
  v15 = Math::RoundToInt(v38); /*0x6d7d5a*/
  v16 = Math::RoundToInt(v39); /*0x6d7d5c*/
  Coord::Subtract(&v35, v15, v16, 0); /*0x6d7d69*/
  v35 = v35; /*0x6d7d7a*/
  v36 = v36; /*0x6d7d82*/
  v37 = v37; /*0x6d7d8c*/
  v17 = *((unsigned int *)Coord::To_Cell(&MapClass_Instance, &v35) + 9); /*0x6d7d95*/
  v18 = a2[3]; /*0x6d7d98*/
  v19 = a2[2]; /*0x6d7da0*/
  IDA_HIWORD(v34[0]) = IDA_HIWORD(v17) + 3; /*0x6d7db0*/
  v20 = v18 / 15 + 20; /*0x6d7dbc*/
  IDA_LOWORD(v34[0]) = v17 - 2; /*0x6d7dc9*/
  v21 = 0; /*0x6d7dd3*/
  result = (unsigned int)((uint64_t)(2290649225LL * v19) >> 32) >> 31; /*0x6d7dd5*/
  v23 = v19 / 60 + 7; /*0x6d7dda*/
  if ( v20 > 0 ) /*0x6d7dde*/
  {
    a3 = a3; /*0x6d7de4*/
    do /*0x6d7f01*/
    {
      v25 = v21 / 2; /*0x6d7ded*/
      ++v21; /*0x6d7def*/
      IDA_LOWORD(v35) = v25; /*0x6d7df0*/
      v21 = v21; /*0x6d7df7*/
      IDA_HIWORD(v35) = v21 / 2; /*0x6d7e00*/
      v26 = IDA_LOWORD(v34[0]) + v25; /*0x6d7e0d*/
      result = *(unsigned int *)((char *)v34 + 2); /*0x6d7e0f*/
      IDA_LOWORD(a3) = v26; /*0x6d7e13*/
      IDA_HIWORD(a3) = IDA_HIWORD(v34[0]) + IDA_HIWORD(v35); /*0x6d7e1e*/
      a2 = a3; /*0x6d7e29*/
      if ( v23 > 0 ) /*0x6d7e2d*/
      {
        v23 = v23; /*0x6d7e33*/
        do /*0x6d7ef5*/
        {
          if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (int16_t *)&a2) ) /*0x6d7e41*/
          {
            v27 = (float *)Coord3D::Set( /*0x6d7e91*/
                             v45,
                             ((((int16_t)a2 << 8) + 128) / 256) << 8,
                             (((IDA_SHIWORD(a2) << 8) + 128) / 256) << 8,
                             0);
            v44[0] = *v27; /*0x6d7e98*/
            v44[1] = v27[1]; /*0x6d7ea4*/
            v44[2] = v27[2]; /*0x6d7eb2*/
            Coord::To_Screen((unsigned int *)this, v44, (int *)&v38); /*0x6d7eb6*/
            IDA_LODWORD(v38) -= 30; /*0x6d7ec7*/
            CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&a2); /*0x6d7ed6*/
            TacticalClass::DrawCellTerrainOverlay(&v38, a3); /*0x6d7edd*/
          }
          IDA_LOWORD(a2) = (unsigned short)a2 + 1; /*0x6d7ee2*/
          --IDA_HIWORD(a2); /*0x6d7eeb*/
          result = --v23; /*0x6d7ef0*/
        }
        while ( v23 ); /*0x6d7ef5*/
        v21 = v21; /*0x6d7efb*/
      }
    }
    while ( v21 < v20 ); /*0x6d7f01*/
  }
  return result; /*0x6d7f07*/
}
// 0x6d3040
int TacticalClass::DrawTerrainPartial(const RectangleStruct& rect)
{
  unsigned int *v5; // ebx
  int *v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int *v10; // eax
  int v11; // ecx
  signed int result; // eax
  int v13; // ebx
  int v14; // edi
  int *v15; // ecx
  int v16; // ecx
  int v17; // [esp+Ch] [ebp-54h] BYREF
  unsigned int v18[3]; // [esp+14h] [ebp-4Ch] BYREF
  int v19; // [esp+20h] [ebp-40h] BYREF
  int v20; // [esp+24h] [ebp-3Ch]
  signed int v21; // [esp+28h] [ebp-38h]
  int v22; // [esp+2Ch] [ebp-34h]
  int v23[4]; // [esp+30h] [ebp-30h] BYREF
  int v24[2]; // [esp+40h] [ebp-20h] BYREF
  int v25; // [esp+48h] [ebp-18h]
  unsigned int v27[4]; // [esp+50h] [ebp-10h] BYREF
  int v28; // [esp+6Ch] [ebp+Ch]

  if ( a4 ) /*0x6d304e*/
  {
    TacticalClass::DrawTerrain((int)this, &DSurface_ViewBounds, &DSurface_ViewBounds); /*0x6d305a*/
  }
  else
  {
    if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d306c*/
      TacticalClass::DrawTerrain((int)this, a2, a2); /*0x6d3072*/
    if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d3087*/
      TacticalClass::DrawTerrain((int)this, a3, a3); /*0x6d308d*/
  }
  if ( (int)*(&this->abstractFlags6) > 0 && !a4 ) /*0x6d30a2*/
  {
    v28 = 0; /*0x6d30aa*/
    v5 = &this->q0E4; /*0x6d30be*/
    do /*0x6d31d6*/
    {
      Coord::Subtract( /*0x6d310e*/
        v18,
        ((((int16_t)*(unsigned int *)(this->q174 << 8) + 128) / 256) << 8,
        ((((int16_t)IDA_HIWORD(*(unsigned int *)(this->q174) << 8) + 128) / 256) << 8,
        0);
      v19 = v18[0]; /*0x6d311f*/
      v20 = v18[1]; /*0x6d3123*/
      v21 = v18[2]; /*0x6d3133*/
      v6 = Coord::To_ScreenRaw(&v17, &v19); /*0x6d3137*/
      v7 = *(&this->uniqueId5); /*0x6d3144*/
      v8 = *v6 - *(&this->uniqueId4); /*0x6d314a*/
      v9 = v6[1]; /*0x6d314c*/
      v23[0] = v8 - 30; /*0x6d3152*/
      v23[3] = 30; /*0x6d315b*/
      v23[1] = v9 - v7 + g_Map_VisibleRect; /*0x6d3175*/
      v23[2] = 60; /*0x6d3183*/
      v10 = ClipRectIntersection(v27, &DSurface_ViewBounds, v23, 0, 0); /*0x6d3187*/
      v24[0] = *v10; /*0x6d3190*/
      v24[1] = v10[1]; /*0x6d3197*/
      v25 = v10[2]; /*0x6d319e*/
      v11 = v10[3]; /*0x6d31a2*/
      v11 = v11; /*0x6d31a7*/
      if ( v25 > 0 && v11 > 0 ) /*0x6d31af*/
        TacticalClass::DrawTerrain((int)this, v24, v24); /*0x6d31bd*/
      ++v5; /*0x6d31cd*/
      ++v28; /*0x6d31d2*/
    }
    while ( v28 < *(&this->abstractFlags6) ); /*0x6d31d6*/
  }
  result = g_CraterCreationState; /*0x6d31dd*/
  if ( g_CraterCreationState ) /*0x6d31e4*/
  {
    result = g_CraterCreationState - 1; /*0x6d31ea*/
    if ( g_CraterCreationState - 1 >= 0 ) /*0x6d31ed*/
    {
      g_CraterCreationState = g_CraterCreationState; /*0x6d31f6*/
      v14 = 20 * result; /*0x6d31f9*/
      do /*0x6d327d*/
      {
        v19 = *(unsigned int *)((char *)g_CraterPool + v14); /*0x6d320b*/
        v20 = *(unsigned int *)((char *)g_CraterPool + v14 + 4); /*0x6d3212*/
        v21 = *(unsigned int *)((char *)g_CraterPool + v14 + 8); /*0x6d3219*/
        v22 = *(unsigned int *)((char *)g_CraterPool + v14 + 12); /*0x6d322c*/
        v20 += g_Map_VisibleRect; /*0x6d323a*/
        v15 = ClipRectIntersection(v27, &DSurface_ViewBounds, &v19, 0, 0); /*0x6d3243*/
        v19 = *v15; /*0x6d3247*/
        v20 = v15[1]; /*0x6d324e*/
        result = v15[2]; /*0x6d3252*/
        v21 = result; /*0x6d3255*/
        v16 = v15[3]; /*0x6d3259*/
        v22 = v16; /*0x6d325e*/
        if ( result > 0 && v16 > 0 ) /*0x6d3266*/
          result = TacticalClass::DrawTerrain((int)this, &v19, &v19); /*0x6d3274*/
        v14 -= 20; /*0x6d3279*/
        --g_CraterCreationState; /*0x6d327c*/
      }
      while ( g_CraterCreationState ); /*0x6d327d*/
    }
  }
  return result; /*0x6d3283*/
}
// 0x6d71e0
Point2D* TacticalClass::CalcBuildingDrawPos(Point2D* out, BuildingClass* building)
{
  int v3; // eax
  float *v4; // eax
  int v5; // edi
  int v6; // eax
  unsigned int *v7; // eax
  int v8; // edi
  int v9; // edx
  int v10; // edi
  int v11; // edi
  int v12; // ecx
  int *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int *v18; // eax
  unsigned int *v19; // edx
  int v20; // ecx
  int v22; // [esp+0h] [ebp-DCh]
  int v23; // [esp+4h] [ebp-D8h]
  int v24; // [esp+1Ch] [ebp-C0h] BYREF
  int v25; // [esp+20h] [ebp-BCh] BYREF
  int v26; // [esp+24h] [ebp-B8h]
  int v27; // [esp+28h] [ebp-B4h]
  int v28; // [esp+30h] [ebp-ACh]
  int v29; // [esp+34h] [ebp-A8h]
  int16_t v30; // [esp+38h] [ebp-A4h]
  int16_t v31; // [esp+3Ah] [ebp-A2h]
  float v32; // [esp+40h] [ebp-9Ch] BYREF
  float v33; // [esp+44h] [ebp-98h]
  int v34; // [esp+48h] [ebp-94h]
  int v35; // [esp+4Ch] [ebp-90h]
  int v36; // [esp+50h] [ebp-8Ch]
  int v37; // [esp+54h] [ebp-88h]
  int v38; // [esp+58h] [ebp-84h] BYREF
  int v39; // [esp+5Ch] [ebp-80h]
  float v40[3]; // [esp+64h] [ebp-78h] BYREF
  unsigned int v41[2]; // [esp+70h] [ebp-6Ch] BYREF
  unsigned int v42[2]; // [esp+78h] [ebp-64h] BYREF
  unsigned int v43[3]; // [esp+80h] [ebp-5Ch] BYREF
  int v44[4]; // [esp+8Ch] [ebp-50h] BYREF
  unsigned int v45[2]; // [esp+9Ch] [ebp-40h] BYREF
  int v46; // [esp+A4h] [ebp-38h]
  int v47; // [esp+A8h] [ebp-34h]
  int v48[4]; // [esp+ACh] [ebp-30h] BYREF
  int v49[4]; // [esp+BCh] [ebp-20h] BYREF
  int v50[4]; // [esp+CCh] [ebp-10h] BYREF

  v3 = *building + *(unsigned int *)(out + 176) - DSurface_ViewBounds; /*0x6d7212*/
  v26 = building[1] + *(unsigned int *)(out + 180) - g_Map_VisibleRect; /*0x6d721b*/
  v25 = v3; /*0x6d7224*/
  *(float *)&v23 = (float)v26; /*0x6d7228*/
  *(float *)&v22 = (float)v3; /*0x6d7234*/
  Triple::Set(&v32, v22, v23, 0); /*0x6d7237*/
  v4 = TransformMatrix3x4Point(v40, (float *)(out + 3556), &v32); /*0x6d724b*/
  v32 = *v4; /*0x6d7252*/
  v33 = v4[1]; /*0x6d725d*/
  v34 = *((unsigned int *)v4 + 2); /*0x6d7264*/
  v5 = Math::RoundToInt(v32); /*0x6d7271*/
  v6 = Math::RoundToInt(v33); /*0x6d7273*/
  Coord::Subtract(&v38, v5, v6, 0); /*0x6d727f*/
  if ( v39 < 0 ) /*0x6d7288*/
    v39 = 0; /*0x6d728a*/
  if ( v38 < 0 ) /*0x6d7292*/
    v38 = 0; /*0x6d7294*/
  v7 = Coord::To_Cell(&MapClass_Instance, &v38); /*0x6d72a2*/
  v8 = building[3]; /*0x6d72aa*/
  v27 = v7[9]; /*0x6d72b2*/
  v9 = (uint64_t)(2290649225LL * v8) >> 32; /*0x6d72b8*/
  v10 = building[2]; /*0x6d72ba*/
  IDA_LOWORD(v27) = v27 - 2; /*0x6d72c8*/
  v35 = (v9 >> 3) + ((unsigned int)v9 >> 31) + 17; /*0x6d72de*/
  v24 = v27; /*0x6d72e7*/
  v11 = v10 / 60 + 4; /*0x6d72ee*/
  v36 = v11; /*0x6d72f9*/
  if ( g_hWnd ) /*0x6d72fd*/
  {
    v12 = 0; /*0x6d7303*/
    if ( (int)((v9 >> 3) + ((unsigned int)v9 >> 31) + 17) > 0 ) /*0x6d7307*/
    {
      do /*0x6d7544*/
      {
        v13 = v12 / 2; /*0x6d7317*/
        ++v12; /*0x6d7319*/
        v30 = v13; /*0x6d731a*/
        v37 = v12; /*0x6d7321*/
        v31 = v12 / 2; /*0x6d732a*/
        IDA_LOWORD(v29) = v27 + v13; /*0x6d733d*/
        IDA_HIWORD(v29) = v31 + IDA_HIWORD(v27); /*0x6d7348*/
        v24 = v29; /*0x6d7353*/
        if ( v11 > 0 ) /*0x6d7357*/
        {
          v28 = v11; /*0x6d735d*/
          do /*0x6d7532*/
          {
            if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (int16_t *)&v24) ) /*0x6d736b*/
            {
              CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v24); /*0x6d7382*/
              Coord::Subtract( /*0x6d73cc*/
                v43,
                ((((int16_t)v24 << 8) + 128) / 256) << 8,
                (((IDA_SHIWORD(v24) << 8) + 128) / 256) << 8,
                0);
              v40[0] = *(float *)v43; /*0x6d73dd*/
              v40[1] = *(float *)&v43[1]; /*0x6d73e1*/
              v40[2] = *(float *)&v43[2]; /*0x6d73ed*/
              v14 = Coord::To_ScreenRaw((int *)&v32, v40); /*0x6d73f5*/
              v25 = *v14; /*0x6d73fc*/
              v15 = *(unsigned int *)(out + 180); /*0x6d7400*/
              v16 = v14[1]; /*0x6d7406*/
              v17 = *(unsigned int *)(out + 176); /*0x6d7409*/
              v26 = v16; /*0x6d740f*/
              v41[1] = v15; /*0x6d7417*/
              v41[0] = v17; /*0x6d7420*/
              Vector2::Subtract(&v25, v41); /*0x6d7424*/
              v25 -= 30; /*0x6d7436*/
              v48[0] = v25; /*0x6d743a*/
              v48[1] = g_Map_VisibleRect + v26; /*0x6d744b*/
              v48[2] = 60; /*0x6d7460*/
              v48[3] = 30; /*0x6d7467*/
              v18 = ClipRectIntersection(v49, v48, building, 0, 0); /*0x6d7472*/
              v44[0] = *v18; /*0x6d747b*/
              v44[1] = v18[1]; /*0x6d7487*/
              v44[2] = v18[2]; /*0x6d7499*/
              v44[3] = v18[3]; /*0x6d74af*/
              v19 = ClipRectIntersection(v50, &DSurface_ViewBounds, v44, 0, 0); /*0x6d74bb*/
              v45[0] = *v19; /*0x6d74bf*/
              v45[1] = v19[1]; /*0x6d74c9*/
              v46 = v19[2]; /*0x6d74d3*/
              v20 = v19[3]; /*0x6d74da*/
              v47 = v20; /*0x6d74df*/
              if ( v46 > 0 && v20 > 0 ) /*0x6d74ea*/
              {
                v42[0] = v25 + DSurface_ViewBounds; /*0x6d7501*/
                v42[1] = v26 + g_Map_VisibleRect; /*0x6d750e*/
                TacticalClass::RenderCellFogOfWar(v42, v45); /*0x6d751a*/
              }
            }
            IDA_LOWORD(v24) = v24 + 1; /*0x6d751f*/
            --IDA_HIWORD(v24); /*0x6d7528*/
            --v28; /*0x6d752e*/
          }
          while ( v28 ); /*0x6d7532*/
          v11 = v36; /*0x6d7538*/
          v12 = v37; /*0x6d753c*/
        }
      }
      while ( v12 < v35 ); /*0x6d7544*/
    }
  }
  return RenderAlphaShapes(building); /*0x6d7551*/
}
// IDA: 0x4D1890 -- TacticalClass::DrawBuildings
// Draws all buildings in sorted order (Y-sort for isometric depth).
// 0x4d1890
void* TacticalClass::DrawBuildings(const RectangleStruct& viewRect)
{
  HWND result; // eax
  int v3; // esi
  int v4; // ebx
  int *v5; // eax
  int16_t *v6; // esi
  int v7; // ebp
  char v8; // al
  unsigned int *v9; // esi
  unsigned int *v10; // ebp
  int v11; // ebx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // esi
  int v17; // ecx
  unsigned char *v18; // esi
  int *v19; // ebp
  int v20; // ecx
  int v21; // edx
  int v22; // edx
  char v23; // al
  int v24; // ecx
  int v25; // eax
  unsigned int *v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // eax
  int16_t *v32; // eax
  unsigned int *v33; // ecx
  int v34; // ebp
  int v35; // esi
  unsigned int *v36; // ebp
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // ebp
  int v43; // ebp
  int v44; // edx
  struct IPersistStreamVtbl *lpVtbl; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // ebp
  int16_t *v50; // eax
  int v51; // esi
  int v52; // [esp-28h] [ebp-174h]
  int v53; // [esp-28h] [ebp-174h]
  int v54; // [esp-24h] [ebp-170h]
  int v55; // [esp-20h] [ebp-16Ch]
  int v56; // [esp-20h] [ebp-16Ch]
  int v57; // [esp+8h] [ebp-144h]
  int v58; // [esp+8h] [ebp-144h]
  int v59; // [esp+8h] [ebp-144h]
  unsigned int *v60; // [esp+Ch] [ebp-140h]
  int v61; // [esp+Ch] [ebp-140h]
  int v63; // [esp+10h] [ebp-13Ch]
  int v64; // [esp+10h] [ebp-13Ch]
  int v65; // [esp+10h] [ebp-13Ch]
  int v66; // [esp+14h] [ebp-138h]
  unsigned int v67; // [esp+18h] [ebp-134h]
  int j; // [esp+18h] [ebp-134h]
  unsigned int v69; // [esp+1Ch] [ebp-130h]
  char v70; // [esp+23h] [ebp-129h]
  int v71; // [esp+24h] [ebp-128h]
  int v73; // [esp+28h] [ebp-124h]
  int v74; // [esp+28h] [ebp-124h]
  int v75; // [esp+2Ch] [ebp-120h]
  int v76; // [esp+2Ch] [ebp-120h]
  int v77; // [esp+30h] [ebp-11Ch] BYREF
  int v79; // [esp+38h] [ebp-114h] BYREF
  int v80; // [esp+3Ch] [ebp-110h]
  int v81; // [esp+40h] [ebp-10Ch] BYREF
  int v83[2]; // [esp+48h] [ebp-104h] BYREF
  int v84; // [esp+50h] [ebp-FCh]
  int v85; // [esp+54h] [ebp-F8h]
  signed int i; // [esp+60h] [ebp-ECh]
  int v87[2]; // [esp+64h] [ebp-E8h] BYREF
  int v88[3]; // [esp+6Ch] [ebp-E0h] BYREF
  int v89; // [esp+78h] [ebp-D4h]
  struct IPersistStreamVtbl *v90; // [esp+7Ch] [ebp-D0h]
  int v93; // [esp+88h] [ebp-C4h] BYREF
  unsigned int v94; // [esp+8Ch] [ebp-C0h]
  int v95; // [esp+90h] [ebp-BCh]
  int v96; // [esp+94h] [ebp-B8h]
  unsigned int v97[2]; // [esp+98h] [ebp-B4h] BYREF
  int v98[2]; // [esp+A0h] [ebp-ACh] BYREF
  unsigned int v99[3]; // [esp+A8h] [ebp-A4h] BYREF
  unsigned int v100[3]; // [esp+B4h] [ebp-98h] BYREF
  unsigned int v101[3]; // [esp+C0h] [ebp-8Ch] BYREF
  unsigned int v102[3]; // [esp+CCh] [ebp-80h] BYREF
  unsigned int v103[3]; // [esp+D8h] [ebp-74h] BYREF
  unsigned int v104[3]; // [esp+E4h] [ebp-68h] BYREF
  unsigned int v105[3]; // [esp+F0h] [ebp-5Ch] BYREF
  unsigned int v106[3]; // [esp+FCh] [ebp-50h] BYREF
  unsigned int v107[3]; // [esp+108h] [ebp-44h] BYREF
  unsigned int v108[3]; // [esp+114h] [ebp-38h] BYREF
  unsigned int v109[3]; // [esp+120h] [ebp-2Ch] BYREF
  int v110; // [esp+12Ch] [ebp-20h]
  unsigned char v111[8]; // [esp+134h] [ebp-18h] BYREF
  unsigned int v112[4]; // [esp+13Ch] [ebp-10h] BYREF

  result = g_hWnd; /*0x4d1890*/
  if ( g_hWnd ) /*0x4d18a1*/
  {
    result = (HWND)g_MissionState; /*0x4d18a7*/
    v3 = 0; /*0x4d18ac*/
    for ( i = 0; i < (int)g_MissionState; ++i ) /*0x4d18b4*/
    {
      if ( !byte_8B3CCC ) /*0x4d18c4*/
      {
        qsort(g_MissionPool, (size_t)result, 8u, globalHelper_0D2ED0); /*0x4d18d4*/
        dword_8B3CD0 = 0; /*0x4d18dc*/
        byte_8B3CCC = 1; /*0x4d18e6*/
      }
      v4 = *((unsigned int *)g_MissionPool + 2 * v3 + 1); /*0x4d18f3*/
      if ( *(unsigned char *)(v4 + 116) ) /*0x4d18f7*/
      {
        v93 = *(unsigned int *)(v4 + 64); /*0x4d190d*/
        v94 = *(unsigned int *)(v4 + 68); /*0x4d1917*/
        v95 = *(unsigned int *)(v4 + 72); /*0x4d1921*/
        v96 = *(unsigned int *)(v4 + 76); /*0x4d192b*/
        v93 -= (int)g_TacticalClass_Instance[44].lpVtbl; /*0x4d193e*/
        v94 = g_Map_VisibleRect + v94 - (unsigned int)g_TacticalClass_Instance[45].lpVtbl; /*0x4d195d*/
        v93 += DSurface_ViewBounds; /*0x4d1964*/
        v5 = ClipRectIntersection(v112, viewRect, &v93, 0, 0); /*0x4d197c*/
        v84 = *v5; /*0x4d1985*/
        v85 = v5[1]; /*0x4d198c*/
        if ( v5[2] > 0 && v5[3] > 0 ) /*0x4d19a0*/
        {
          switch ( *(unsigned int *)(v4 + 48) ) /*0x4d19bd*/
          {
            case 6: /*0x4d19bd*/
              for ( j = 0; j < *(unsigned int *)(v4 + 108); ++j ) /*0x4d1c57*/
              {
                v17 = *(unsigned int *)(v4 + 96); /*0x4d1c61*/
                v18 = *(unsigned char **)(v17 + 16 * j); /*0x4d1c6b*/
                v69 = *(unsigned int *)(v17 + 16 * j + 4); /*0x4d1c79*/
                v66 = (*(int (__thiscall **)(unsigned char *))(v18->q09C)(v18); /*0x4d1c86*/
                v70 = *(unsigned char *)(*(unsigned int *)(v4 + 96) + 16 * j + 8); /*0x4d1c97*/
                v64 = *(unsigned int *)(*((unsigned int *)BuildingTypeClass_AnimTable + *(unsigned int *)(*(unsigned int *)(v4 + 40) + 90196)) /*0x4d1cb0*/
                                + 780);
                if ( j ) /*0x4d1cb4*/
                {
                  if ( v18 /*0x4d207f*/
                    && (*(int (__thiscall **)(unsigned char *))(v18->q02C)(v18) == 5
                    && *((unsigned int *)v18 + 181) <= g_lParam
                    && v66 )
                  {
                    v36 = (unsigned int *)(v4 + 52); /*0x4d2085*/
                    v37 = *(unsigned int *)(v4 + 56); /*0x4d208f*/
                    v100[0] = *(unsigned int *)(v4 + 52) - 128; /*0x4d2092*/
                    v38 = *(unsigned int *)(v4 + 60); /*0x4d20a0*/
                    v100[1] = v37 - 128; /*0x4d20a3*/
                    v100[2] = v38; /*0x4d20b9*/
                    Coord::To_Screen(g_TacticalClass_Instance, v100, &v77); /*0x4d20c0*/
                    v110 = *viewRect; /*0x4d20d2*/
                    v39 = g_Map_VisibleRect - *(viewRect + 1); /*0x4d20e3*/
                    v40 = 1000; /*0x4d20eb*/
                    v77 += DSurface_ViewBounds - v110; /*0x4d20f0*/
                    v41 = v39 + v41; /*0x4d20f8*/
                    IDA_LOBYTE(v39) = v18[861]; /*0x4d20fa*/
                    v41 = v41; /*0x4d2102*/
                    if ( !(unsigned char)v39 ) /*0x4d2106*/
                    {
                      v102[0] = *v36; /*0x4d210c*/
                      v102[1] = *(unsigned int *)(v4 + 56); /*0x4d2123*/
                      v102[2] = *(unsigned int *)(v4 + 60); /*0x4d212d*/
                      v40 = *((int16_t *)Coord::To_Cell(&MapClass_Instance, v102) + 133); /*0x4d2139*/
                    }
                    if ( v64 && v18[860] ) /*0x4d2148*/
                      v59 = v64; /*0x4d2152*/
                    else
                      v59 = FileSystem_ANIM_PAL; /*0x4d215e*/
                    v65 = *(unsigned int *)(*(unsigned int *)(v4 + 96) + 16 * j + 12); /*0x4d216d*/
                    if ( v18[873] ) /*0x4d2171*/
                    {
                      v84 = *v36; /*0x4d2182*/
                      v42 = *(unsigned int *)(v4 + 60); /*0x4d2189*/
                      v55 = v40; /*0x4d2191*/
                      v85 = *(unsigned int *)(v4 + 56); /*0x4d2192*/
                      v54 = 0; /*0x4d2196*/
                    }
                    else
                    {
                      v84 = *v36; /*0x4d21a0*/
                      v42 = *(unsigned int *)(v4 + 60); /*0x4d21a7*/
                      v55 = v40; /*0x4d21af*/
                      v85 = *(unsigned int *)(v4 + 56); /*0x4d21b0*/
                      v54 = 2; /*0x4d21b4*/
                    }
                    v52 = v65 - ZCoordToScreenY(v42) - 2; /*0x4d21d0*/
                    DrawToSurfaceSHP( /*0x4d21ea*/
                      g_DSurface_Hidden_2,
                      v59,
                      v66,
                      v69,
                      &v77,
                      viewRect,
                      11776,
                      0,
                      v52,
                      v54,
                      v55,
                      0,
                      0,
                      0,
                      0,
                      0);
                  }
                }
                else
                {
                  v19 = (int *)(v4 + 52); /*0x4d1cba*/
                  v20 = *(unsigned int *)(v4 + 56); /*0x4d1cc4*/
                  v109[0] = *(unsigned int *)(v4 + 52) - 128; /*0x4d1cc7*/
                  v21 = *(unsigned int *)(v4 + 60); /*0x4d1cd5*/
                  v109[1] = v20 - 128; /*0x4d1cd8*/
                  v109[2] = v21; /*0x4d1cee*/
                  Coord::To_Screen(g_TacticalClass_Instance, v109, &v79); /*0x4d1cf5*/
                  v105[0] = *(unsigned int *)(v4 + 52); /*0x4d1cfe*/
                  v105[1] = *(unsigned int *)(v4 + 56); /*0x4d1d10*/
                  v105[2] = *(unsigned int *)(v4 + 60); /*0x4d1d1f*/
                  v60 = Coord::To_Cell(&MapClass_Instance, v105); /*0x4d1d30*/
                  v22 = g_Map_VisibleRect - *(viewRect + 1); /*0x4d1d41*/
                  v23 = v18[5889]; /*0x4d1d49*/
                  v79 += DSurface_ViewBounds - *viewRect; /*0x4d1d4f*/
                  v24 = v22 + v80; /*0x4d1d57*/
                  v80 += v22; /*0x4d1d5b*/
                  if ( v23 ) /*0x4d1d5f*/
                    goto LABEL_49; /*0x4d1d5f*/
                  v71 = *((unsigned int *)v18 + 1352); /*0x4d1d6f*/
                  v83[0] = v79; /*0x4d1d77*/
                  v83[1] = v24; /*0x4d1d7b*/
                  v25 = v24 + v66->u32_4 / 2; /*0x4d1d88*/
                  v88[0] = *viewRect; /*0x4d1d8e*/
                  v88[1] = *(viewRect + 1); /*0x4d1d95*/
                  v88[2] = *(viewRect + 2); /*0x4d1d9c*/
                  v89 = *(viewRect + 3); /*0x4d1da5*/
                  if ( v89 > v25 ) /*0x4d1dac*/
                    v89 = v25; /*0x4d1dae*/
                  v73 = *((unsigned int *)v18 + 1356) + 144; /*0x4d1dc4*/
                  v75 = *((unsigned int *)v18 + 1357) + 172; /*0x4d1dd3*/
                  v57 = (BuildingTypeClass::GetFoundationHeight((int)v18, 0) << 8) - 256; /*0x4d1de6*/
                  v97[0] = (BuildingTypeClass::GetFoundationWidth(v18) << 8) - 256; /*0x4d1dfe*/
                  v97[1] = v57; /*0x4d1e18*/
                  v26 = (unsigned int *)TacticalClass::AdjustForZShapeMove(v111, v97); /*0x4d1e1f*/
                  v74 = v73 - *v26; /*0x4d1e2e*/
                  v27 = *v19; /*0x4d1e3b*/
                  v76 = v75 - v26[1]; /*0x4d1e3d*/
                  dword_89DDBC = dword_89DDBC; /*0x4d1e46*/
                  v28 = *(unsigned int *)(v4 + 56); /*0x4d1e4d*/
                  v84 = v27; /*0x4d1e50*/
                  v85 = v28; /*0x4d1e54*/
                  v29 = ZCoordToScreenY(*(unsigned int *)(v4 + 60)); /*0x4d1e5b*/
                  v30 = *(unsigned int *)(v4 + 56); /*0x4d1e63*/
                  v99[0] = *v19; /*0x4d1e68*/
                  v58 = -v29; /*0x4d1e76*/
                  v31 = *(unsigned int *)(v4 + 60); /*0x4d1e7a*/
                  v99[1] = v30; /*0x4d1e83*/
                  v99[2] = v31; /*0x4d1e8a*/
                  v32 = (int16_t *)Coord::To_Cell(&MapClass_Instance, v99); /*0x4d1e91*/
                  v33 = v60; /*0x4d1ea4*/
                  v34 = *((int16_t *)v18 + 2724) + v32[133]; /*0x4d1ea8*/
                  if ( !v60[13] ) /*0x4d1eaa*/
                  {
                    TacticalClass::SetView((int)v60, 0, 0x10000, 0, 1000, 1000, 1000); /*0x4d1ec9*/
                    v33 = v60; /*0x4d1ece*/
                  }
                  if ( v18[5890] ) /*0x4d1ed2*/
                    v61 = v33[13]; /*0x4d1edf*/
                  else
                    v61 = v64; /*0x4d1ee9*/
                  if ( v89 > 0 ) /*0x4d1ef6*/
                  {
                    if ( v70 ) /*0x4d1f02*/
                      DrawToSurfaceSHP( /*0x4d1f3e*/
                        g_DSurface_Hidden_2,
                        v61,
                        v66,
                        v69,
                        v83,
                        v88,
                        19968,
                        0,
                        v58 - 2,
                        0,
                        v34,
                        0,
                        0,
                        0,
                        0,
                        0);
                    else
                      DrawToSurfaceSHP( /*0x4d1fbe*/
                        g_DSurface_Hidden_2,
                        v61,
                        v66,
                        v69,
                        v83,
                        v88,
                        19968,
                        0,
                        v58 + v71 - 2,
                        2,
                        v34,
                        0,
                        (int)dword_89DDBC,
                        0,
                        v74,
                        v76);
                    DrawToSurfaceSHP( /*0x4d1f6e*/
                      g_DSurface_Hidden_2,
                      v61,
                      v66,
                      v69 + v66->u32_6 / 2,
                      v83,
                      v88,
                      19969,
                      0,
                      v58 - 2,
                      0,
                      1000,
                      0,
                      0,
                      0,
                      0,
                      0);
                  }
                  v35 = *((unsigned int *)v18 + 1350); /*0x4d2011*/
                  if ( v35 ) /*0x4d2019*/
                    DrawToSurfaceSHP( /*0x4d2048*/
                      g_DSurface_Hidden_2,
                      v61,
                      v35,
                      v69,
                      &v79,
                      viewRect,
                      19968,
                      0,
                      v58 - 3,
                      0,
                      v34,
                      0,
                      0,
                      0,
                      0,
                      0);
                }
              }
              break; /*0x4d21fd*/
            case 0x14: /*0x4d19bd*/
              v108[0] = *(unsigned int *)(v4 + 52); /*0x4d19ca*/
              v108[1] = *(unsigned int *)(v4 + 56); /*0x4d19dc*/
              v108[2] = *(unsigned int *)(v4 + 60); /*0x4d19eb*/
              v6 = (int16_t *)Coord::To_Cell(&MapClass_Instance, v108); /*0x4d19fa*/
              v7 = *((unsigned int *)v6 + 17); /*0x4d1a00*/
              v8 = *((unsigned char *)v6 + 286); /*0x4d1a03*/
              *((unsigned int *)v6 + 17) = *(unsigned int *)(v4 + 36); /*0x4d1a09*/
              v8 = v8; /*0x4d1a0f*/
              *((unsigned char *)v6 + 286) = *(unsigned char *)(v4 + 44); /*0x4d1a13*/
              Coord::Subtract(v106, (((v6[18] << 8) + 128) / 256) << 8, (((v6[19] << 8) + 128) / 256) << 8, 0); /*0x4d1a5b*/
              v101[0] = v106[0]; /*0x4d1a75*/
              v101[1] = v106[1]; /*0x4d1a7c*/
              v101[2] = v106[2]; /*0x4d1a96*/
              Coord::To_Screen(g_TacticalClass_Instance, v101, v87); /*0x4d1a9d*/
              v87[0] -= 30; /*0x4d1aaf*/
              BuildingClass::Draw_0((int)v6, v87, viewRect); /*0x4d1ab5*/
              TacticalClass::DrawBuildingPlacement(v87, viewRect); /*0x4d1ac2*/
              *((unsigned int *)v6 + 17) = v7; /*0x4d1ac7*/
              *((unsigned char *)v6 + 286) = v8; /*0x4d1ace*/
              break; /*0x4d1ad4*/
            case 0x1D: /*0x4d19bd*/
              v43 = *(viewRect + 1); /*0x4d220d*/
              v44 = *viewRect; /*0x4d2210*/
              lpVtbl = g_TacticalClass_Instance[45].lpVtbl; /*0x4d2218*/
              v90 = g_TacticalClass_Instance[44].lpVtbl; /*0x4d221e*/
              v46 = *(unsigned int *)(v4 + 68); /*0x4d2225*/
              lpVtbl = lpVtbl; /*0x4d2228*/
              v47 = *(unsigned int *)(v4 + 64) - (unsigned int)v90 + DSurface_ViewBounds + 30; /*0x4d2249*/
              v98[1] = g_Map_VisibleRect + v46 - (unsigned int)lpVtbl - v43; /*0x4d225f*/
              v48 = *(unsigned int *)(v4 + 84); /*0x4d2266*/
              v98[0] = v47 - v44; /*0x4d2269*/
              v49 = (*(int (__thiscall **)(unsigned int))(**((unsigned int **)FactoryClass_Array + v48) + 156))(*((unsigned int *)FactoryClass_Array + v48)); /*0x4d227b*/
              if ( v49 ) /*0x4d227f*/
              {
                v104[0] = *(unsigned int *)(v4 + 52); /*0x4d228c*/
                v104[1] = *(unsigned int *)(v4 + 56); /*0x4d229e*/
                v104[2] = *(unsigned int *)(v4 + 60); /*0x4d22a8*/
                v50 = (int16_t *)Coord::To_Cell(&MapClass_Instance, v104); /*0x4d22b4*/
                v84 = *(unsigned int *)(v4 + 52); /*0x4d22bd*/
                v51 = *(unsigned int *)(v4 + 60); /*0x4d22c4*/
                v85 = *(unsigned int *)(v4 + 56); /*0x4d22c7*/
                v50 = v50; /*0x4d22cd*/
                v56 = v50[134]; /*0x4d22dd*/
                v53 = -(int)ZCoordToScreenY(v51); /*0x4d22f4*/
                DrawToSurfaceSHP( /*0x4d230c*/
                  g_DSurface_Hidden_2,
                  *((unsigned int *)v50 + 13),
                  v49,
                  *(unsigned int *)(v4 + 88),
                  v98,
                  viewRect,
                  3584,
                  0,
                  v53,
                  2,
                  v56,
                  0,
                  0,
                  0,
                  0,
                  0);
              }
              break; /*0x4d230c*/
            case 0x24: /*0x4d19bd*/
              v9 = (unsigned int *)(v4 + 52); /*0x4d1adc*/
              v63 = **(unsigned int **)(v4 + 96); /*0x4d1ae5*/
              v107[0] = *(unsigned int *)(v4 + 52); /*0x4d1ae9*/
              v107[1] = *(unsigned int *)(v4 + 56); /*0x4d1afb*/
              v107[2] = *(unsigned int *)(v4 + 60); /*0x4d1b05*/
              v10 = Coord::To_Cell(&MapClass_Instance, v107); /*0x4d1b16*/
              v67 = *(unsigned int *)(*(unsigned int *)(v4 + 96) + 4); /*0x4d1b1e*/
              v11 = (*(int (__thiscall **)(int))(v63->q09C)(v63); /*0x4d1b2e*/
              v103[0] = *v9; /*0x4d1b34*/
              v103[1] = v9[1]; /*0x4d1b49*/
              v103[2] = v9[2]; /*0x4d1b5b*/
              Coord::To_Screen(g_TacticalClass_Instance, v103, &v81); /*0x4d1b62*/
              v12 = g_Map_VisibleRect - *(viewRect + 1); /*0x4d1b79*/
              v13 = *v9; /*0x4d1b81*/
              v81 += DSurface_ViewBounds - *viewRect; /*0x4d1b83*/
              v14 = v12 + v14; /*0x4d1b8b*/
              v85 = v9[1]; /*0x4d1b90*/
              v15 = v9[2]; /*0x4d1b94*/
              v14 = v14; /*0x4d1b97*/
              v84 = v13; /*0x4d1b9b*/
              v16 = -(int)ZCoordToScreenY(v15); /*0x4d1ba9*/
              if ( !v10[13] ) /*0x4d1ba6*/
                TacticalClass::SetView((int)v10, 0, 0x10000, 0, 1000, 1000, 1000); /*0x4d1bc9*/
              DrawToSurfaceSHP( /*0x4d1c00*/
                g_DSurface_Hidden_2,
                v10[13],
                v11,
                v67,
                &v81,
                viewRect,
                19968,
                0,
                v16 - 4,
                2,
                *((int16_t *)v10 + 134),
                0,
                0,
                0,
                0,
                0);
              if ( byte_822CF1 ) /*0x4d1c0c*/
                DrawToSurfaceSHP( /*0x4d1c45*/
                  g_DSurface_Hidden_2,
                  v10[13],
                  v11,
                  v67 + *(int16_t *)(v11 + 6) / 2,
                  &v81,
                  viewRect,
                  17921,
                  0,
                  v16 - 2,
                  0,
                  1000,
                  0,
                  0,
                  0,
                  0,
                  0);
              break; /*0x4d1c45*/
            default:
              break;
          }
        }
      }
  LABEL_49:
      result = (HWND)g_MissionState; /*0x4d2311*/
      v3 = i + 1; /*0x4d231a*/
    }
  }
  return result; /*0x4d2329*/
}
// 0x658780
void TacticalClass::renderOverlay(int * Block, char a2)
{
  GadgetClass::Dtor(Block); /*0x658783*/
  if ( (a2 & 1) != 0 ) /*0x65878d*/
    RA2_OPDEL(Block); /*0x658790*/
  return Block; /*0x65879a*/
}
// ============================================================
// Cell rendering
// ============================================================

// IDA: 0x4801F0 -- TacticalClass::RenderCellFogOfWar
// Draws fog of war shading over a cell.
void TacticalClass::RenderCellFogOfWar(int cx, int cy)
{
    (void)cx;
    (void)cy;
}

// IDA: 0x550260 -- TacticalClass::RenderCells
// Renders all cells in the current viewport.
// 0x550260
int TacticalClass::RenderCells()
{
  int v2; // eax
  int v3; // eax
  double v4; // st7
  unsigned int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // edx
  int v10; // eax
  uint8_t v11; // dl
  uint8_t v12; // al
  double v13; // st7
  int v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // esi
  int v21; // esi
  int v22; // ecx
  int v23; // ebx
  int v24; // eax
  int v25; // ebx
  int v26; // ecx
  int v27; // ecx
  int v28; // eax
  int v29; // esi
  int v30; // esi
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  int v36; // esi
  char v38; // [esp+57h] [ebp-3Dh]
  int16_t v39; // [esp+58h] [ebp-3Ch] BYREF
  char v40; // [esp+5Ah] [ebp-3Ah]
  int v41; // [esp+5Ch] [ebp-38h]
  int v42; // [esp+60h] [ebp-34h]
  int v43; // [esp+64h] [ebp-30h]
  int v44; // [esp+68h] [ebp-2Ch]
  int v45; // [esp+6Ch] [ebp-28h]
  int v46; // [esp+70h] [ebp-24h]
  int v47; // [esp+74h] [ebp-20h] BYREF
  int v48; // [esp+78h] [ebp-1Ch]
  int v49; // [esp+7Ch] [ebp-18h] BYREF
  int v50; // [esp+80h] [ebp-14h]
  int v51; // [esp+84h] [ebp-10h] BYREF
  int v52; // [esp+88h] [ebp-Ch]
  int v53; // [esp+8Ch] [ebp-8h] BYREF
  int v54; // [esp+90h] [ebp-4h]

  v2 = this->TacticalClass_field_4C; /*0x550268*/
  if ( v2 > 0 )
  {
    if ( this->NeedsSaveOrLink )
    {
      IDA_LOBYTE(v2) = PrepareTacticalClassCellTransform((int *)this); /*0x55027b*/
    }
    else
    {
      if ( (byte_ABC8B8 & 1) == 0 ) /*0x55028f*/
      {
        dword_ABC73C[0] = -1; /*0x55029c*/
        dword_ABC738[0] = 0; /*0x5502a4*/
        dword_ABC744[0] = 0; /*0x5502ae*/
        dword_ABC740[0] = 1; /*0x5502b7*/
        dword_ABC74C = -1; /*0x5502be*/
        dword_ABC748 = 0; /*0x5502c9*/
        dword_ABC750 = 0; /*0x5502ce*/
        dword_ABC758 = 1; /*0x5502d5*/
        dword_ABC760 = 0; /*0x5502dc*/
        dword_ABC754 = 1; /*0x5502e4*/
        dword_ABC768 = -1; /*0x5502ea*/
        dword_ABC75C = 0; /*0x5502f6*/
        dword_ABC770 = 1; /*0x5502fc*/
        dword_ABC764 = 1; /*0x550309*/
        dword_ABC778 = -1; /*0x55030f*/
        dword_ABC76C = 0; /*0x550318*/
        dword_ABC774 = 0; /*0x55031e*/
        dword_ABC77C = 0; /*0x550324*/
        dword_ABC780 = 0; /*0x55032a*/
        dword_ABC788 = 0; /*0x55032f*/
        dword_ABC784 = 1; /*0x55033e*/
        dword_ABC790 = 1; /*0x550344*/
        dword_ABC78C = -1; /*0x55034e*/
        dword_ABC798 = 0; /*0x550354*/
        dword_ABC794 = 0; /*0x55035e*/
        dword_ABC7A0 = -1; /*0x550364*/
        dword_ABC79C = -1; /*0x55036f*/
        dword_ABC7A8 = -1; /*0x550375*/
        byte_ABC8B8 |= 1u; /*0x550389*/
        dword_ABC7A4 = 0; /*0x55038f*/
        dword_ABC7AC = 0; /*0x550395*/
        dword_ABC7B0 = 1; /*0x55039b*/
        dword_ABC7B4 = 0; /*0x5503a0*/
        atexit(nullsub_21); /*0x5503a6*/
      }
      IDA_LOBYTE(v2) = this->u8_51; /*0x5503ae*/
      if ( !(unsigned char)v2 )
      {
        v3 = this->field24; /*0x5503bc*/
        v44 = this->field30; /*0x5503c5*/
        v43 = v3; /*0x5503c9*/
        v4 = Math::CalcAngle((double)this->field28 - (double)this->field34, (double)v44 - (double)v3); /*0x5503e8*/
        IDA_LOWORD(v44) = Math::RoundToInt((v4 - 1.570796326794897) * -10430.06004058427); /*0x550401*/
        v5 = ((((unsigned int)v44 >> 12) + 1) >> 1) & 7; /*0x55041c*/
        Coord::To_Screen(g_TacticalClass_Instance, (unsigned int *)(&this->q00C6), &v53); /*0x55041f*/
        Coord::To_Screen(g_TacticalClass_Instance, (unsigned int *)(&this->uniqueId8), &v51); /*0x550430*/
        v6 = this->TacticalClass_field_3C - ZCoordToScreenY(this->TacticalClass_field_2C) - 2; /*0x550445*/
        v7 = ZCoordToScreenY(this->field38); /*0x550448*/
        v39 = 0; /*0x550452*/
        v8 = -2 - v7; /*0x550457*/
        IDA_LOBYTE(v7) = this->field44; /*0x550459*/
        v40 = 0; /*0x550463*/
        v44 = 0; /*0x550468*/
        v38 = 1; /*0x550470*/
        if ( (unsigned char)v7 || this->u8_45 || this->u8_46 )
        {
          v44 = Random::Range(Randomizer_Global, -*(uint8_t *)(&this->referenceCount1), *(uint8_t *)(&this->referenceCount1)); /*0x5504a6*/
          v41 = Random::Range(Randomizer_Global, -*(uint8_t *)(&this->referenceCount2), *(uint8_t *)(&this->referenceCount2)); /*0x5504bf*/
          *(float *)&v42 = COERCE_FLOAT( /*0x5504d8*/
                             Random::Range(
                               Randomizer_Global,
                               -*(uint8_t *)(&this->referenceCount3),
                               *(uint8_t *)(&this->referenceCount3)));
          v9 = *(uint8_t *)(&this->nextArrayIndex8) + v44 < 0 ? 0 : *(uint8_t *)(&this->nextArrayIndex8) + v44;
          if ( v9 > 255 ) /*0x5504f6*/
            v9 = 255; /*0x5504f8*/
          v41 = *(uint8_t *)(&this->nextArrayIndex9) + v41 < 0 ? 0 : *(uint8_t *)(&this->nextArrayIndex9) + v41;
          if ( v41 > 255 ) /*0x55051c*/
            v41 = 255; /*0x55051e*/
          v42 = *(uint8_t *)(&this->referenceCount0) + v42 < 0 ? 0 : *(uint8_t *)(&this->referenceCount0) + v42;
          v10 = v42; /*0x55053a*/
          if ( v42 > 255 ) /*0x550545*/
          {
            v10 = 255; /*0x550547*/
            v42 = 255; /*0x55054c*/
          }
          IDA_LOBYTE(v39) = v9; /*0x550556*/
          v43 = (v41 >> g_BitMask_Blue << g_BitMask_Green) | (v10 >> g_BitMask_Red << g_BitShift_Blue); /*0x550584*/
          IDA_HIBYTE(v39) = v41; /*0x55059a*/
          v44 = (v9 >> g_BitShift_Green_0 << g_BitShift_Red) | v43; /*0x5505aa*/
          v40 = v42; /*0x5505ae*/
        }
        else
        {
          v38 = 0; /*0x550485*/
        }
        v11 = this->u8_42; /*0x5505b2*/
        v43 = &this->q104; /*0x5505b8*/
        *(float *)&v42 = 1.0; /*0x5505bc*/
        IDA_LOBYTE(v49) = this->u8_41; /*0x5505cd*/
        IDA_LOBYTE(v47) = (unsigned char)v49 != 0; /*0x5505d1*/
        IDA_LOBYTE(v46) = v11 != 0; /*0x5505d8*/
        v12 = this->u8_43; /*0x5505dc*/
        IDA_LOBYTE(v45) = v12 != 0; /*0x5505e4*/
        if ( this->u8_52 ) /*0x5505e8*/
        {
          v13 = this->field54 - this->field58; /*0x5505f5*/
          v41 = this->TacticalClass_field_4C; /*0x5505f8*/
          *(float *)&v42 = v13 * (double)(v41 - *(unsigned int *)this) / (double)v41 + this->field58; /*0x55060d*/
        }
        if ( g_lParam ) /*0x550619*/
        {
          if ( this->field50 ) /*0x55061f*/
          {
            (*(void (__thiscall **)(int, int *, int *, int *, int, int, int, unsigned int, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2 + 60))( /*0x550655*/
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v53,
              &v51,
              v43,
              v6,
              v8,
              0,
              1,
              1,
              1,
              v42);
            IDA_LOBYTE(v2) = v38; /*0x550658*/
            if ( v38 ) /*0x55065e*/
            {
              v14 = 4 * v5; /*0x55066c*/
              v15 = dword_ABC73C[v14]; /*0x55067c*/
              v49 = v51 + dword_ABC738[v14]; /*0x550688*/
              v16 = v53 + dword_ABC738[v14]; /*0x550698*/
              v50 = v52 + v15; /*0x55069e*/
              v17 = dword_ABC73C[v14]; /*0x5506a2*/
              v47 = v16; /*0x5506a8*/
              v48 = v54 + v17; /*0x5506bb*/
              (*(void (__thiscall **)(int, int *, int *, int *, int16_t *, int, int, unsigned int, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2 + 60))( /*0x5506d2*/
                g_DSurface_Hidden_2,
                &DSurface_ViewBounds,
                &v47,
                &v49,
                &v39,
                v6,
                v8,
                0,
                1,
                1,
                1,
                1065353216);
              v18 = dword_ABC744[v14]; /*0x5506e9*/
              v49 = v51 + dword_ABC740[v14]; /*0x5506ef*/
              v19 = dword_ABC740[v14]; /*0x5506f3*/
              v20 = dword_ABC744[v14]; /*0x5506f9*/
              v47 = v53 + v19; /*0x55070e*/
              v50 = v52 + v18; /*0x550719*/
              v48 = v54 + v20; /*0x550734*/
              IDA_LOBYTE(v2) = (*(int (__thiscall **)(int, int *, int *, int *, int16_t *, int, int, unsigned int, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2 + 60))( /*0x550740*/
                             g_DSurface_Hidden_2,
                             &DSurface_ViewBounds,
                             &v47,
                             &v49,
                             &v39,
                             v6,
                             v8,
                             0,
                             1,
                             1,
                             1,
                             1065353216);
            }
          }
          else if ( v38 ) /*0x550751*/
          {
            v21 = 4 * v5; /*0x55075f*/
            v22 = dword_ABC73C[v21]; /*0x55076a*/
            v23 = dword_ABC738[v21]; /*0x550772*/
            v49 = v51 + v23; /*0x550778*/
            v24 = v23 + v53; /*0x550786*/
            v42 = v42; /*0x550788*/
            v50 = v52 + v22; /*0x55078c*/
            v26 = dword_ABC73C[v21]; /*0x550790*/
            v47 = v24; /*0x550796*/
            v48 = v54 + v26; /*0x5507a6*/
            (*(void (__thiscall **)(int, int *, int *, int *, int16_t *, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2 /*0x5507bd*/
                                                                                       + 64))(
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v47,
              &v49,
              &v39,
              v42,
              v6,
              v8);
            v27 = dword_ABC744[v21]; /*0x5507d0*/
            v49 = v51 + dword_ABC740[v21]; /*0x5507d6*/
            v28 = dword_ABC740[v21]; /*0x5507da*/
            v29 = dword_ABC744[v21]; /*0x5507e6*/
            v47 = v53 + v28; /*0x5507ef*/
            v50 = v52 + v27; /*0x5507f8*/
            v48 = v54 + v29; /*0x550813*/
            (*(void (__thiscall **)(int, int *, int *, int *, int16_t *, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2 /*0x55081f*/
                                                                                       + 64))(
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v47,
              &v49,
              &v39,
              v42,
              v6,
              v8);
            IDA_LOBYTE(v2) = (*(int (__thiscall **)(int, int *, int *, int *, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2 /*0x550841*/
                                                                                             + 64))(
                           g_DSurface_Hidden_2,
                           &DSurface_ViewBounds,
                           &v53,
                           &v51,
                           v43,
                           v42,
                           v6,
                           v8);
          }
          else
          {
            IDA_LOBYTE(v2) = (*(int (__thiscall **)(int, int *, int *, int *, int, int, int, unsigned int, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2 + 60))( /*0x550880*/
                           g_DSurface_Hidden_2,
                           &DSurface_ViewBounds,
                           &v53,
                           &v51,
                           v43,
                           v6,
                           v8,
                           0,
                           v47,
                           v46,
                           v45,
                           v42);
          }
        }
        else
        {
          (*(void (__thiscall **)(int, int *, int *, int *, int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2 + 52))( /*0x5508f6*/
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v53,
            &v51,
            ((uint8_t)v49 >> g_BitShift_Green_0 << g_BitShift_Red)
          | (v11 >> g_BitMask_Blue << g_BitMask_Green)
          | (v12 >> g_BitMask_Red << g_BitShift_Blue),
            v6,
            v8,
            0);
          IDA_LOBYTE(v2) = v38; /*0x5508f9*/
          if ( v38 ) /*0x5508ff*/
          {
            v30 = 4 * v5; /*0x55090d*/
            v31 = v52 + dword_ABC73C[v30]; /*0x550925*/
            v49 = v51 + dword_ABC738[v30]; /*0x55092b*/
            v32 = dword_ABC738[v30]; /*0x55092f*/
            v50 = v31; /*0x550935*/
            v33 = dword_ABC73C[v30]; /*0x550939*/
            v47 = v53 + v32; /*0x550947*/
            v48 = v54 + v33; /*0x550950*/
            (*(void (__thiscall **)(int, int *, int *, int *, int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2 + 52))( /*0x550968*/
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v47,
              &v49,
              v44,
              v6,
              v8,
              0);
            v34 = dword_ABC744[v30]; /*0x55097b*/
            v49 = v51 + dword_ABC740[v30]; /*0x550981*/
            v35 = dword_ABC740[v30]; /*0x550985*/
            v36 = dword_ABC744[v30]; /*0x55098b*/
            v50 = v52 + v34; /*0x550999*/
            v47 = v53 + v35; /*0x5509a3*/
            v48 = v54 + v36; /*0x5509bb*/
            IDA_LOBYTE(v2) = (*(int (__thiscall **)(int, int *, int *, int *, int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2 /*0x5509c7*/
                                                                                                + 52))(
                           g_DSurface_Hidden_2,
                           &DSurface_ViewBounds,
                           &v47,
                           &v49,
                           v44,
                           v6,
                           v8,
                           0);
          }
        }
      }
    }
  }
  return v2; /*0x550280*/
}
// 0x6d8b30
BuildingTypeClass * * TacticalClass::CalcViewportCells()
{
  int v2; // ecx
  int v3; // edi
  double v4; // st7
  int v5; // eax
  float *v6; // eax
  int v7; // edi
  int v8; // eax
  unsigned int result; // eax
  float v10[3]; // [esp+8h] [ebp-18h] BYREF
  float v11; // [esp+14h] [ebp-Ch] BYREF
  float v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h]

  v13 = 0; /*0x6d8b37*/
  v2 = this->TacticalClass_field_D64; /*0x6d8b3f*/
  v3 = this->TacticalClass_field_D68; /*0x6d8b45*/
  this->visibleArea = v2; /*0x6d8b4b*/
  this->q0B4 = v3; /*0x6d8b51*/
  this->visibleArea = v2 - dword_B0CE30 / 2; /*0x6d8b63*/
  IDA_LODWORD(v10[0]) = this->visibleArea - 60; /*0x6d8b80*/
  v4 = (double)IDA_SLODWORD(v10[0]); /*0x6d8b84*/
  v5 = v3 - dword_B0CE34 / 2; /*0x6d8b88*/
  this->q0B4 = v5; /*0x6d8b90*/
  v11 = v4; /*0x6d8b99*/
  IDA_LODWORD(v10[1]) = v5 - 30; /*0x6d8b9d*/
  v12 = (float)(v5 - 30); /*0x6d8bae*/
  v6 = TransformMatrix3x4Point(v10, (float *)(&this->u32_58C6), &v11); /*0x6d8bb2*/
  v11 = *v6; /*0x6d8bb9*/
  v12 = v6[1]; /*0x6d8bc4*/
  v13 = *((unsigned int *)v6 + 2); /*0x6d8bcb*/
  v7 = Math::RoundToInt(v11); /*0x6d8bd8*/
  v8 = Math::RoundToInt(v12); /*0x6d8bda*/
  this->TacticalClass_field_D80 = v7 / 256; /*0x6d8bf0*/
  this->TacticalClass_field_D84 = v8 / 256; /*0x6d8c04*/
  this->TacticalClass_field_D88 = dword_B0CE30 / 60 + 2; /*0x6d8c2a*/
  result = (unsigned int)((uint64_t)(2290649225LL * dword_B0CE34) >> 32) >> 31; /*0x6d8c3f*/
  this->TacticalClass_field_D8C = dword_B0CE34 / 15 + 4; /*0x6d8c46*/
  return result; /*0x6d8bea*/
}
// 0x483e30
int TacticalClass::SetView(int view_x, int view_y, int view_width, int view_height)
{
  int v7; // eax
  int v9; // ecx
  unsigned int *v10; // eax
  unsigned int *v11; // eax
  int v12; // eax
  int16_t v13; // cx
  int16_t v14; // dx
  int16_t v15; // ax
  int16_t v16; // cx
  int16_t v17; // dx
  int v18; // eax
  int16_t v19; // cx
  int v21; // [esp+4h] [ebp-14h] BYREF
  int v22; // [esp+8h] [ebp-10h] BYREF
  int v23; // [esp+Ch] [ebp-Ch]
  int v24; // [esp+10h] [ebp-8h]
  int v25; // [esp+14h] [ebp-4h] BYREF

  v7 = a2; /*0x483e30*/
  if ( a2 ) /*0x483e3c*/
  {
    v9 = this->field34; /*0x483e3e*/
    if ( v9 && g_WTFMode ) /*0x483e4d*/
      --*(unsigned int *)(v9 + 404); /*0x483e4f*/
    this->ptr_34 = v7; /*0x483e55*/
    ++*(unsigned int *)(v7 + 404); /*0x483e5f*/
    v10 = *(unsigned int **)(&this->u32_142); /*0x483e65*/
    a2 = v10[102]; /*0x483e6e*/
    v21 = v10[103]; /*0x483e78*/
    v22 = v10[104]; /*0x483e82*/
  LABEL_20:
    a4 = a4; /*0x483f7a*/
    a5 = a5; /*0x483f83*/
    this->q104 = a3; /*0x483f88*/
    a6 = a6; /*0x483f8e*/
    this->q108 = a4; /*0x483f93*/
    a7 = a7; /*0x483f9a*/
    this->u32_428 = a5; /*0x483f9f*/
    a2 = a2; /*0x483fa6*/
    this->u32_10C = a6; /*0x483fab*/
    IDA_LOWORD(v18) = v21; /*0x483fb2*/
    this->u32_10E = a7; /*0x483fb7*/
    v22 = v22; /*0x483fbe*/
    this->q440 = a2; /*0x483fc3*/
    this->q448 = v18; /*0x483fca*/
    this->q114 = v22; /*0x483fd1*/
    return v18; /*0x483fdc*/
  }
  if ( (this->ptr_24 || this->u8_98) /*0x483eaa*/
    && (this->ptr_24 != 0xFFFF || this->u8_98 != 0xFFFF) )
  {
    Tactical::CalculateTacticalLighting(&a3, &a4, &a5, &a6, &a7, &a2, &v21, &v22); /*0x483eda*/
    if ( !this->ptr_34 ) /*0x483edf*/
      goto LABEL_18; /*0x483edf*/
    a2 = a2; /*0x483ef2*/
    v21 = v21; /*0x483efa*/
    v22 = v22; /*0x483efe*/
    QuantizeColorRGB(&v22); /*0x483f0b*/
    v11 = *(unsigned int **)(&this->u32_142); /*0x483f10*/
    if ( v11[102] != a2 || v11[103] != v21 || v11[104] != v22 ) /*0x483f3b*/
    {
      if ( g_WTFMode ) /*0x483f45*/
        --v11[101]; /*0x483f47*/
      this->ptr_34 = 0; /*0x483f4d*/
    }
    if ( !this->ptr_34 ) /*0x483f54*/
    {
  LABEL_18:
      v12 = CreateSurfaceClassPrimary(v22); /*0x483f68*/
      this->ptr_34 = v12; /*0x483f6f*/
      if ( v12 ) /*0x483f72*/
        ++v12->q194; /*0x483f74*/
    }
    goto LABEL_20; /*0x483f74*/
  }
  v18 = CreateSurfaceClassPrimary(1000); /*0x483fea*/
  this->ptr_34 = v18; /*0x483ff1*/
  if ( v18 ) /*0x483ff4*/
    ++v18->q194; /*0x483ff6*/
  this->u32_428 = 1000; /*0x483ffc*/
  this->u32_10C = 1000; /*0x484003*/
  this->u32_10E = 1000; /*0x48400a*/
  this->q440 = 1000; /*0x484011*/
  this->q448 = 1000; /*0x484018*/
  this->q114 = 1000; /*0x48401f*/
  this->q104 = 0x10000; /*0x484026*/
  this->q108 = 0; /*0x484030*/
  return v18; /*0x483fd8*/
}
// 0x4a8960
AbstractClass * * TacticalClass::SetViewDimensions(int width, int height)
{
  unsigned int *v2; // eax
  void *v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // esi
  unsigned int v7[6]; // [esp+Ch] [ebp-1Ch] BYREF
  char v8; // [esp+24h] [ebp-4h]

  Debug::Log(); /*0x4a897e*/
  DSurface_ViewBounds = *a1; /*0x4a8987*/
  g_Map_VisibleRect = a1[1]; /*0x4a8990*/
  g_Map_VisibleRectOffset = a1[2]; /*0x4a8999*/
  g_DSurface_WindowOffset = a1[3]; /*0x4a89a1*/
  if ( g_TacticalClass_Instance ) /*0x4a89b2*/
  {
    TacticalClass::SetViewportPosition(&DSurface_ViewBounds); /*0x4a89bd*/
    (*(void (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x4a89ca*/
    if ( g_ZBufferDescriptor ) /*0x4a89d3*/
    {
      Debug::Log(); /*0x4a89da*/
      g_ZBufferDescriptor = g_ZBufferDescriptor; /*0x4a89df*/
      if ( g_ZBufferDescriptor ) /*0x4a89ea*/
      {
        Stream::GetField(g_ZBufferDescriptor); /*0x4a89ee*/
        RA2_OPDEL(v1); /*0x4a89f4*/
      }
      g_ZBufferDescriptor = 0; /*0x4a89fc*/
    }
    if ( RA2_OPNEW(0x30u) ) /*0x4a8a04*/
      v2 = (unsigned int *)BSurface::ConstructEx( /*0x4a8a3a*/
                       DSurface_ViewBounds,
                       g_Map_VisibleRect,
                       g_Map_VisibleRectOffset,
                       g_DSurface_WindowOffset);
    else
      v2 = 0; /*0x4a8a41*/
    g_ZBufferDescriptor = v2; /*0x4a8a43*/
    v2[9] = 0x8000; /*0x4a8a48*/
    Debug::Log(); /*0x4a8a61*/
    if ( g_VisibleSurfaceDescriptor ) /*0x4a8a70*/
    {
      Debug::Log(); /*0x4a8a77*/
      v3 = g_VisibleSurfaceDescriptor; /*0x4a8a7c*/
      if ( g_VisibleSurfaceDescriptor ) /*0x4a8a87*/
      {
        StreamObj::Release(g_VisibleSurfaceDescriptor); /*0x4a8a8b*/
        RA2_OPDEL(v3); /*0x4a8a91*/
      }
      g_VisibleSurfaceDescriptor = 0; /*0x4a8a99*/
    }
    if ( RA2_OPNEW(0x30u) ) /*0x4a8aa1*/
      g_VisibleSurfaceDescriptor = (void *)BSurface::Construct( /*0x4a8adc*/
                                             DSurface_ViewBounds,
                                             g_Map_VisibleRect,
                                             g_Map_VisibleRectOffset,
                                             g_DSurface_WindowOffset);
    else
      g_VisibleSurfaceDescriptor = 0; /*0x4a8ae3*/
    Debug::Log(); /*0x4a8afb*/
    (*(void (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x4a8b0b*/
  }
  SidebarClass::LoadResources(&MapClass_Instance); /*0x4a8b13*/
  v4 = DSurface_ViewBounds; /*0x4a8b1e*/
  v5 = g_Map_VisibleRect; /*0x4a8b24*/
  v6 = g_Map_VisibleRectOffset; /*0x4a8b29*/
  dword_8A0704 = DSurface_ViewBounds; /*0x4a8b37*/
  dword_8A0708 = g_Map_VisibleRect; /*0x4a8b3d*/
  dword_8A070C = g_Map_VisibleRectOffset; /*0x4a8b42*/
  dword_8A0710 = g_DSurface_WindowOffset; /*0x4a8b48*/
  if ( g_TacticalRender ) /*0x4a8b4e*/
  {
    v8 = 0; /*0x4a8b55*/
    v7[0] = 500; /*0x4a8b59*/
    v7[5] = 0; /*0x4a8b61*/
    v7[1] = DSurface_ViewBounds; /*0x4a8b65*/
    v7[2] = g_Map_VisibleRect; /*0x4a8b69*/
    v7[3] = g_Map_VisibleRectOffset; /*0x4a8b6d*/
    v7[4] = g_DSurface_WindowOffset; /*0x4a8b71*/
    HashTable::Remove((int *)g_TacticalRender, 500); /*0x4a8b75*/
    CommandClass::AddAction(g_TacticalRender, (int)v7); /*0x4a8b85*/
    v5 = g_Map_VisibleRect; /*0x4a8b8a*/
    v4 = DSurface_ViewBounds; /*0x4a8b8f*/
    v6 = g_Map_VisibleRectOffset; /*0x4a8b95*/
  }
  MessageListClass::Init(v4 + 3, v5, 6, 98, 14, -1, -1, 0, 20, 98, v6 - 6); /*0x4a8bb8*/
  TacticalClass::processInput(g_Map_VisibleRectOffset); /*0x4a8bc9*/
  Debug::Log(); /*0x4a8bd3*/
}
// 0x537620
int TacticalClass::InitView()
{
  int v1; // eax
  unsigned int *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  unsigned int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (*((int16_t *)g_ScenarioClass_Instance + 6734) << 8) + 128; /*0x537648*/
  v4[0] = (*((int16_t *)g_ScenarioClass_Instance + 6733) << 8) + 128; /*0x53764d*/
  v4[1] = v1; /*0x537656*/
  GroundHeight = 0; /*0x53765a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53766d*/
  Tactical::SetTacticalPosition(v4); /*0x537676*/
  result = (unsigned int *)g_RadarBlipManager; /*0x53767b*/
  if ( g_RadarBlipManager ) /*0x537682*/
    return Tactical::MouseMove((int)&MapClass_Instance, &v3, &word_A8F2F8); /*0x537693*/
  return result; /*0x537698*/
}
// 0x6d5f60
int TacticalClass::SetViewportPosition(int x, int y)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  unsigned int result; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h]

  dword_B0CE28 = *y; /*0x6d5f6c*/
  dword_B0CE2C = y[1]; /*0x6d5f75*/
  dword_B0CE30 = y[2]; /*0x6d5f7e*/
  dword_B0CE34 = y[3]; /*0x6d5f87*/
  v3 = *(unsigned int *)(x + 3444); /*0x6d5f93*/
  v8 = *(unsigned int *)(x + 3448); /*0x6d5f9d*/
  v7 = v3; /*0x6d5fa4*/
  if ( !ClampCoordMap(&v7) || g_ArmageddonMode ) /*0x6d5fb8*/
  {
    v4 = *(unsigned int *)(x + 3444); /*0x6d5fc4*/
    v5 = *(unsigned int *)(x + 3448); /*0x6d5fca*/
  }
  else
  {
    v4 = v7; /*0x6d5fba*/
    v5 = v8; /*0x6d5fbe*/
  }
  *(unsigned int *)(x + 3428) = v4; /*0x6d5fd0*/
  *(unsigned int *)(x + 3444) = v4; /*0x6d5fd6*/
  *(unsigned int *)(x + 3432) = v5; /*0x6d5fdc*/
  *(unsigned int *)(x + 3448) = v5; /*0x6d5fe2*/
  result = TacticalClass::CalcViewportCells(x); /*0x6d5fea*/
  *(unsigned char *)(x + 3453) = 1; /*0x6d5fef*/
  return result; /*0x6d5ff6*/
}
// 0x6d2540
AbstractClass * * TacticalClass::ScrollViewport(int dx, int dy)
{
  int v1; // eax
  char v2; // bl
  unsigned int *v4; // ebp
  double v5; // st7
  unsigned int *v6; // edi
  int *v7; // eax
  double v8; // st7
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  signed int v12; // edi
  signed int v13; // eax
  int WaypointAnimationSpeed; // edi
  DWORD Ticks; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v22; // [esp+8h] [ebp-14h] BYREF
  int v23; // [esp+Ch] [ebp-10h]
  int v24; // [esp+14h] [ebp-8h]

  IDA_LOBYTE(v1) = g_NetworkEventPending; /*0x6d2540*/
  v2 = 0; /*0x6d2549*/
  if ( (g_NetworkEventPending & 2) != 0 ) /*0x6d2550*/
    return v1; /*0x6d2550*/
  if ( *(wchar_t **)(&this->q0408) != g_CurrentFrame ) /*0x6d2565*/
  {
    if ( g_BounceClassInit ) /*0x6d2573*/
    {
      v4 = (unsigned int *)(&this->q0508); /*0x6d2584*/
      if ( (this->q0D0 != dword_B0CE08 || this->q0D4 != dword_B0CE0C) /*0x6d25af*/
        && this->q0D8 != 0.0 )
      {
        v5 = this->q0DC + this->q0D8; /*0x6d25bb*/
        this->q0DC = v5; /*0x6d25c1*/
        if ( v5 > 1.0 ) /*0x6d25d2*/
          this->q0DC = 1065353216; /*0x6d25d4*/
        v6 = (unsigned int *)(&this->q0500); /*0x6d25e4*/
        v7 = (int *)TacticalClass::CalcInverseAlpha(&this->q340, this->q0DC); /*0x6d25f2*/
        v8 = this->q0DC; /*0x6d25f7*/
        v9 = *v7; /*0x6d2603*/
        v24 = v7[1]; /*0x6d260a*/
        if ( v8 >= 1.0 ) /*0x6d2611*/
        {
          *v4 = 0; /*0x6d2617*/
          *v6 = 0; /*0x6d261a*/
          this->q0D4 = 0; /*0x6d261c*/
          this->q0CC = 0; /*0x6d261f*/
          this->q0D8 = 0; /*0x6d2622*/
          this->q0DC = 0; /*0x6d2628*/
        }
        v22 = v9; /*0x6d2639*/
        v23 = v24; /*0x6d263d*/
        if ( !ClampCoordMap(&v22) || g_ArmageddonMode ) /*0x6d2651*/
        {
          v11 = v24; /*0x6d265d*/
          v10 = v9; /*0x6d2661*/
        }
        else
        {
          v10 = v22; /*0x6d2653*/
          v11 = v23; /*0x6d2657*/
        }
        this->u32_D64 = v10; /*0x6d2663*/
        this->u32_D74 = v10; /*0x6d2669*/
        this->u32_D68 = v11; /*0x6d266f*/
        this->u32_D78 = v11; /*0x6d2675*/
        TacticalClass::CalcViewportCells(this); /*0x6d267d*/
        this->u8_D7D = 1; /*0x6d2682*/
        v2 = 1; /*0x6d2689*/
      }
    }
    v12 = this->q36B; /*0x6d2691*/
    if ( this->qDA4 != -1 ) /*0x6d269b*/
    {
      v13 = Timer::GetTicks() - this->qDA4; /*0x6d26a8*/
      if ( v13 >= v12 ) /*0x6d26b0*/
      {
  LABEL_20:
        WaypointAnimationSpeed = g_RulesClass_Instance->WaypointAnimationSpeed; /*0x6d26b8*/
        Ticks = Timer::GetTicks(); /*0x6d26c5*/
        v24 = v24; /*0x6d26ca*/
        this->qDA4 = Ticks; /*0x6d26ce*/
        v17 = this->qDA0; /*0x6d26d4*/
        this->qDA8 = v24; /*0x6d26da*/
        this->q36B = WaypointAnimationSpeed; /*0x6d26e1*/
        this->qDA0 = v17 + 1; /*0x6d26e7*/
        goto LABEL_21; /*0x6d26e7*/
      }
      v12 -= v13; /*0x6d26b2*/
    }
    if ( v12 ) /*0x6d26b6*/
      goto LABEL_21; /*0x6d26b6*/
    goto LABEL_20; /*0x6d26b6*/
  }
  LABEL_21:
  IDA_LOBYTE(v1) = (unsigned char)g_CurrentFrame; /*0x6d26ed*/
  this->q0A8 = g_CurrentFrame; /*0x6d26f3*/
  if ( this->u32_D74 != this->u32_D64 /*0x6d2715*/
    || (v1 = this->u32_D68, this->u32_D78 != v1) )
  {
    if ( !v2 ) /*0x6d2719*/
    {
      v18 = this->u32_D74; /*0x6d2721*/
      v23 = this->u32_D78; /*0x6d272b*/
      v22 = v18; /*0x6d2732*/
      if ( !ClampCoordMap(&v22) || g_ArmageddonMode ) /*0x6d2746*/
      {
        v19 = this->u32_D74; /*0x6d2752*/
        v20 = this->u32_D78; /*0x6d2758*/
      }
      else
      {
        v19 = v22; /*0x6d2748*/
        v20 = v23; /*0x6d274c*/
      }
      this->u32_D64 = v19; /*0x6d275e*/
      this->u32_D74 = v19; /*0x6d2764*/
      this->u32_D68 = v20; /*0x6d276a*/
      this->u32_D78 = v20; /*0x6d2770*/
      IDA_LOBYTE(v1) = TacticalClass::CalcViewportCells(this); /*0x6d2778*/
      this->u8_D7D = 1; /*0x6d277d*/
    }
  }
  return v1; /*0x6d2784*/
}
// 0x5090a0
void TacticalClass::updateVisibility()
{
  int v1; // esi
  int *i; // edi
  int v3; // eax
  void *v4; // eax

  v1 = 0; /*0x5090a2*/
  for ( i = &this->q210; ; ++i ) /*0x5090a4*/
  {
    v3 = *i; /*0x5090aa*/
    if ( !*i ) /*0x5090aa*/
    {
      v4 = RA2_OPNEW(0x40u); /*0x5090b2*/
      if ( v4 ) /*0x5090bc*/
        v3 = WaypointPathClass::Init((int)v4); /*0x5090c0*/
      else
        v3 = 0; /*0x5090c7*/
    }
    if ( !*(unsigned int *)(v3 + 56) ) /*0x5090c9*/
      break; /*0x5090c9*/
    if ( ++v1 >= 12 ) /*0x5090d7*/
      return -1; /*0x5090de*/
  }
  return v1; /*0x5090d9*/
}
// 0x5090a0
    int __thiscall TacticalClass::updateVisibility(int *(void**)this)
    {
      int v1; // esi
      int *i; // edi
      int v3; // eax
      void *v4; // eax

      v1 = 0; /*0x5090a2*/
      for ( i = &this->u32_210; ; ++i ) /*0x5090a4*/
      {
        v3 = *i; /*0x5090aa*/
        if ( !*i ) /*0x5090aa*/
        {
          v4 = RA2_OPNEW(0x40u); /*0x5090b2*/
          if ( v4 ) /*0x5090bc*/
            v3 = WaypointPathClass::Init((int)v4); /*0x5090c0*/
          else
            v3 = 0; /*0x5090c7*/
        }
        if ( !v3->q038 ) /*0x5090c9*/
          break; /*0x5090c9*/
        if ( ++v1 >= 12 ) /*0x5090d7*/
          return -1; /*0x5090de*/
      }
      return v1; /*0x5090d9*/
    }
/* ASM:
push    esi
push    edi
xor     esi, esi
lea     edi, [ecx+210h]

loc_5090AA:                             ; CODE XREF: TacticalClass__updateVisibility+37↓j
mov     eax, [edi]
test    eax, eax
jnz     short loc_5090C9
push    40h ; '@'       ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_5090C7
mov     ecx, eax
call    WaypointPathClass__Init
jmp     short loc_5090C9
; ---------------------------------------------------------------------------

loc_5090C7:                             ; CODE XREF: TacticalClass__updateVisibility+1C↑j
xor     eax, eax

loc_5090C9:                             ; CODE XREF: TacticalClass__updateVisibility+E↑j
; TacticalClass__updateVisibility+25↑j
mov     ecx, [eax+38h]
test    ecx, ecx
jz      short loc_5090DF
inc     esi
add     edi, 4
cmp     esi, 0Ch
jl      short loc_5090AA
pop     edi
or      eax, 0FFFFFFFFh
pop     esi
retn
; ---------------------------------------------------------------------------

loc_5090DF:                             ; CODE XREF: TacticalClass__updateVisibility+2E↑j
mov     eax, esi
pop     edi
pop     esi
retn
*/

// ============================================================
// Main render loop
// ============================================================

// IDA: 0x74D490 -- TacticalClass::Render
// Main render entry point. Draws a single object into the tactical view.
// 0x74d490
void TacticalClass::Render(ObjectClass* obj)
{
  int v2; // eax
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // esi
  int v7; // edi
  int16_t *v8; // eax
  int v9; // [esp+4h] [ebp-14h] BYREF
  int v10; // [esp+8h] [ebp-10h]
  unsigned int v11[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !obj->q100 ) /*0x74d496*/
  {
    v2 = obj->q0F8; /*0x74d4a4*/
    dword_B1D2EC = dword_B1D2EC; /*0x74d4bb*/
    v4 = obj->q0FC; /*0x74d4c1*/
    v5 = obj->q3E8 << 8; /*0x74d4d1*/
    v11[0] = (v2 << 8) + 128; /*0x74d4da*/
    v11[1] = v5 + 128; /*0x74d4e2*/
    v11[2] = 0; /*0x74d4ec*/
    if ( (*((unsigned int *)Coord::To_Cell(&MapClass_Instance, v11) + 80) & 0x400000) != 0 ) /*0x74d4ff*/
      v4 = 0; /*0x74d501*/
    Coord::To_Screen(g_TacticalClass_Instance, v11, &v9); /*0x74d513*/
    v6 = 15 * *((char *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)(obj + 248)) + 283); /*0x74d538*/
    v10 += -58 - v6; /*0x74d547*/
    TacticalClass::AddToDrawQueue(g_TacticalClass_Instance, obj, v9, g_Map_VisibleRect + v10 + 58); /*0x74d558*/
    v7 = *(unsigned int *)(*((unsigned int *)BuildingTypeClass_AnimTable + *((unsigned int *)HouseClass_Player + 22549)) + 780); /*0x74d574*/
    v8 = (int16_t *)Coord::To_Cell(&MapClass_Instance, v11); /*0x74d58a*/
    DrawToSurfaceSHP( /*0x74d5bc*/
      g_DSurface_Hidden_2,
      v7,
      v3,
      v4,
      &v9,
      &DSurface_ViewBounds,
      11776,
      0,
      -17 - v6,
      0,
      v8[134],
      0,
      0,
      0,
      0,
      0);
  }
}
// 0x6d9ef0
int TacticalClass::AddToDrawQueue(ObjectClass* obj, int screen_x, int screen_y)
{
  int v4; // eax
  int v5; // edx
  int v6; // eax

  v4 = *(&this->u32_15C6); /*0x6d9ef0*/
  if ( v4 == 500 || screen_x < -32 || screen_x > g_Map_VisibleRectOffset + 32 || screen_y < -32 || screen_y > g_DSurface_WindowOffset + 32 ) /*0x6d9f29*/
    return 0; /*0x6d9f75*/
  dword_B0CEC8[3 * v4] = obj; /*0x6d9f32*/
  v5 = screen_y + *(&this->uniqueId5); /*0x6d9f4d*/
  v6 = 3 * *(&this->u32_15C6); /*0x6d9f50*/
  dword_B0CECC[v6] = *(&this->uniqueId4) + screen_x; /*0x6d9f53*/
  dword_B0CED0[v6] = v5; /*0x6d9f5b*/
  ++*(&this->u32_15C6); /*0x6d9f69*/
  return 1; /*0x6d9f4f*/
}
// 0x631e50
int TacticalClass::InterpolateColor(uint32_t elapsed_ms)
{
  int v2; // eax
  int result; // eax
  int v4; // edi

  v2 = elapsed_ms * this->abstractFlags + this->uniqueId; /*0x631e5f*/
  this->uniqueId = v2; /*0x631e61*/
  if ( v2 > 0x2000 ) /*0x631e69*/
    *(this + 4) = 0x2000; /*0x631e6b*/
  result = this->uniqueId & 0xFFF; /*0x631e77*/
  if ( (this->uniqueId & 0x1000) != 0 ) /*0x631e7f*/
    result = 4096 - result; /*0x631e88*/
  v4 = result * this->referenceCount; /*0x631ea5*/
  this->vtable2 = (result * this->nextArrayIndex + (4096 - result) * this->q024) >> 12; /*0x631ea8*/
  this->vtable3 = (v4 + (4096 - result) * *(&this->vtable20)) >> 12; /*0x631eb7*/
  this->vtable4 = (result * this->needsSave + (4096 - result) * *(&this->vtable21)) >> 12; /*0x631ecb*/
  return result; /*0x631eb3*/
}
// 0x631ee0
int TacticalClass::DecrementCounter(uint32_t delta)
{
  int v2; // eax

  v2 = *(&this->vtable24) - delta; /*0x631ee9*/
  *(&this->vtable24) = v2; /*0x631eeb*/
  if ( v2 > 0 ) /*0x631ef0*/
    return 0; /*0x631efe*/
  *(this + 14) = 0; /*0x631ef2*/
  return 1; /*0x631efb*/
}
// 0x653850
int TacticalClass::MouseInput(int x, int y, int buttons)
{
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int result; // eax

  DisplayClass::Update(y, buttons); /*0x653860*/
  v4 = byte_A8EB7C != 0 ? g_Map_VisibleRectOffset : 0;
  if ( *buttons >= v4 + dword_B04A00 && *buttons < v4 + dword_B04A00 + dword_B04A08 ) /*0x653896*/
  {
    v5 = buttons[1]; /*0x653898*/
    if ( v5 >= dword_B04A04 && v5 < dword_B04A0C + dword_B04A04 ) /*0x6538a9*/
      Mouse::SetCursor((int)&MapClass_Instance, 0, 0); /*0x6538b4*/
  }
  if ( *buttons >= v4 + dword_B048C8 && *buttons < v4 + dword_B048C8 + dword_B048D0 ) /*0x6538d6*/
  {
    v6 = buttons[1]; /*0x6538d8*/
    if ( v6 >= dword_B048CC && v6 < dword_B048D4 + dword_B048CC ) /*0x6538e8*/
      Mouse::SetCursor((int)&MapClass_Instance, 0, 0); /*0x6538f3*/
  }
  if ( *y == 33010 ) /*0x653903*/
  {
    if ( !g_GameMode_Current /*0x653933*/
      || (g_GameMode_Current == 3 || g_GameMode_Current == 4)
      && g_GameStateFlags
      && (*(uint8_t (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 8))(g_GameStateFlags)
      && (*(uint8_t (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 4))(g_GameStateFlags) )
    {
      g_MainGameState = 9; /*0x653946*/
    }
    else
    {
      g_MainGameState = 8; /*0x65393a*/
    }
  }
  else if ( *y == 33011 ) /*0x653957*/
  {
    g_MainGameState = 1; /*0x653959*/
  }
  if ( g_AsyncIOState > 0 ) /*0x65396a*/
  {
    v7 = *(x + 1324); /*0x65396c*/
    if ( v7 != 3 && v7 != 4 ) /*0x65397a*/
    {
      *(x + 1325) = v7; /*0x653982*/
      RadarClass::SetViewMode(4, 0); /*0x653988*/
      *(x + 1326) = 0; /*0x65398d*/
    }
  }
  if ( *(x + 1324) == 4 ) /*0x65399e*/
    return TacticalClass::ProcessChronoEffect(x); /*0x6539a2*/
  result = UI_Helper(); /*0x6539ae*/
  if ( !(unsigned char)result ) /*0x6539b5*/
    return ChronoScreenEffect::DecrementCounter(); /*0x6539b7*/
  return result; /*0x6539a7*/
}
// 0x6539d0
int TacticalClass::ProcessMouseClick(int x, int y)
{
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // esi
  int ClosestEnemy; // eax
  int v9; // eax
  int v10; // eax
  int16_t v11; // di
  int16_t v12; // si
  int v13; // kr0C_4
  int v14; // ecx
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  int16_t v18; // ax
  int v19; // eax
  int16_t v20; // ax
  int16_t v21; // bx
  int v22; // eax
  int16_t v23; // ax
  unsigned int *v24; // eax
  int *Coords; // eax
  int v27; // [esp+10h] [ebp-3Ch] BYREF
  void *v28; // [esp+14h] [ebp-38h] BYREF
  char v29; // [esp+18h] [ebp-34h]
  unsigned char *v30; // [esp+1Ch] [ebp-30h]
  unsigned int v31[2]; // [esp+20h] [ebp-2Ch] BYREF
  unsigned int v32[2]; // [esp+28h] [ebp-24h] BYREF
  int GroundHeight; // [esp+30h] [ebp-1Ch]
  int v34; // [esp+34h] [ebp-18h] BYREF
  int v35; // [esp+38h] [ebp-14h]
  int v36; // [esp+3Ch] [ebp-10h]
  int v37[3]; // [esp+40h] [ebp-Ch] BYREF

  v30 = this; /*0x6539dc*/
  if ( (a2 & 0x22) == 0 && (dword_880C98 != 3 || dword_880C94 != 1) && dword_880C98 == 1 && dword_880C94 == 1 )
  {
    if ( (a2 & 0x55) != 0 ) /*0x653a13*/
    {
      v4 = *(unsigned int *)g_BinkMoviePlayer; /*0x653a1a*/
      v5 = *((unsigned int *)g_BinkMoviePlayer + 1); /*0x653a1c*/
    }
    else
    {
      v4 = (*(int (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 44))(g_WWMouseClass_Instance); /*0x653a32*/
      v5 = (*(int (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 48))(g_WWMouseClass_Instance); /*0x653a36*/
    }
    v6 = v4 - (byte_A8EB7C != 0 ? g_Map_VisibleRectOffset : 0);
    if ( v6 >= dword_880C84 /*0x653a83*/
      && v6 < dword_880C84 + dword_880C8C
      && v5 >= dword_880C88
      && v5 < dword_880C88 + dword_880C90 )
    {
      v31[1] = v5; /*0x653a89*/
      v31[0] = v6; /*0x653aa5*/
      v27 = 0; /*0x653aa9*/
      v28 = 0; /*0x653ab3*/
      TacticalClass::ScreenToCellLookup(v31, &v27, &v28); /*0x653ab7*/
      if ( v27 == dword_B048C0 ) /*0x653acd*/
      {
  LABEL_74:
        COMObject::ActivateThunk(v30, 0, a3, 0); /*0x653ec3*/
        return 1; /*0x653edf*/
      }
      v32[0] = ((int16_t)v27 << 8) + 128; /*0x653af5*/
      v32[1] = (IDA_SHIWORD(v27) << 8) + 128; /*0x653afd*/
      GroundHeight = 0; /*0x653b07*/
      GroundHeight = Cell::GetGroundHeight(v32); /*0x653b14*/
      if ( !Cell::IsPassable(v32) || (v29 = 1, !g_hWnd) ) /*0x653b33*/
        v29 = 0; /*0x653b35*/
      if ( (a2 & 0x50) != 0 ) /*0x653b8b*/
      {
  LABEL_62:
        if ( (a2 & 0x11) != 0 ) /*0x653d74*/
        {
          v11 = IDA_HIWORD(v27); /*0x653d7f*/
          v12 = v27; /*0x653d7f*/
          if ( v27 ) /*0x653d87*/
          {
            v13 = g_Map_VisibleRectOffset / 60 + 2; /*0x653dbc*/
            v14 = g_Cell_PositionLUT - v13 / 2 - 1; /*0x653dcb*/
            v15 = g_DSurface_WindowOffset / 60 + g_Cell_PositionLUT + 1; /*0x653ddf*/
            v16 = 2 * g_CellPositionOffset - g_DSurface_WindowOffset / 60 + g_Cell_PositionLUT - 1; /*0x653de3*/
            v17 = IDA_SHIWORD(v27) - (int16_t)v27; /*0x653ded*/
            if ( v17 > v14 ) /*0x653df1*/
            {
              v18 = v17 - v14; /*0x653df3*/
              v11 = IDA_HIWORD(v27) - v18; /*0x653df5*/
              v12 = v18 + v27; /*0x653df8*/
              IDA_HIWORD(v27) -= v18; /*0x653dfb*/
              IDA_LOWORD(v27) = v18 + v27; /*0x653e00*/
            }
            v19 = v12 - v11; /*0x653e0b*/
            if ( v19 > g_Cell_PositionLUT - v13 / 2 - 2 ) /*0x653e12*/
            {
              v20 = v19 - v14 + 1; /*0x653e16*/
              v11 += v20; /*0x653e17*/
              v12 -= v20; /*0x653e1a*/
              IDA_HIWORD(v27) = v11; /*0x653e1d*/
              IDA_LOWORD(v27) = v12; /*0x653e22*/
            }
            if ( v11 + v12 < v15 ) /*0x653e32*/
            {
              v21 = v15 - v11 - v12; /*0x653e36*/
              v12 += v21; /*0x653e38*/
              v11 += v21; /*0x653e3b*/
              IDA_LOWORD(v27) = v12; /*0x653e3e*/
              IDA_HIWORD(v27) = v11; /*0x653e43*/
            }
            v22 = v12 + v11; /*0x653e4e*/
            if ( v22 > v16 ) /*0x653e52*/
            {
              v23 = v22 - v16; /*0x653e54*/
              IDA_LOWORD(v27) = v12 - v23; /*0x653e5c*/
              IDA_HIWORD(v27) = v11 - v23; /*0x653e61*/
            }
            v24 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v27); /*0x653e75*/
            Coords = CellClass::GetCoords(v24, v37); /*0x653e7c*/
            v34 = *Coords; /*0x653e83*/
            v35 = Coords[1]; /*0x653e95*/
            v36 = Coords[2]; /*0x653e9c*/
            Tactical::SetTacticalPosition(&v34); /*0x653ea0*/
            MapClass::MarkForRedraw(&MapClass_Instance, 1); /*0x653eac*/
            if ( g_ZBufferDescriptor ) /*0x653eb8*/
              *((unsigned int *)g_ZBufferDescriptor + 9) = 0x8000; /*0x653eba*/
          }
        }
        goto LABEL_74; /*0x653eba*/
      }
      if ( g_SelectionManager ) /*0x653b97*/
      {
        if ( g_BuildingPlacementState ) /*0x653be5*/
        {
          if ( g_BuildingPlacementState != 1 ) /*0x653bf3*/
          {
            if ( g_BuildingPlacementState != 2 ) /*0x653c05*/
              goto LABEL_35; /*0x653c05*/
            goto LABEL_34; /*0x653c05*/
          }
  LABEL_32:
          v7 = 37; /*0x653bf5*/
          goto LABEL_51; /*0x653bfa*/
        }
      }
      else if ( g_BuildingPlacementState ) /*0x653b9b*/
      {
        if ( g_BuildingPlacementState != 1 ) /*0x653b9f*/
        {
          if ( g_BuildingPlacementState != 2 ) /*0x653ba7*/
          {
            if ( g_BuildingPlacementState != 5 ) /*0x653baf*/
            {
              if ( g_BuildingPlacementState != 7 ) /*0x653bb7*/
              {
                if ( g_BuildingPlacementState != 8 ) /*0x653bbf*/
                {
                  if ( g_BuildingPlacementState != 9 ) /*0x653bc3*/
                  {
                    if ( g_BuildingPlacementState != 11 ) /*0x653bcb*/
                    {
                      if ( g_BuildingPlacementState != 6 ) /*0x653bd3*/
                      {
  LABEL_61:
                        Mission::SetAndCall((int *)&MapClass_Instance, 0, 1); /*0x653d62*/
                        goto LABEL_62; /*0x653d6a*/
                      }
                      v7 = 65; /*0x653bd9*/
  LABEL_51:
                      switch ( v7 ) /*0x653cb3*/
                      {
                        case 1: /*0x653cb3*/
                        case 2: /*0x653cb3*/
                        case 3: /*0x653cb3*/
                        case 5: /*0x653cb3*/
                        case 6: /*0x653cb3*/
                        case 9: /*0x653cb3*/
                        case 16: /*0x653cb3*/
                        case 20: /*0x653cb3*/
                        case 26: /*0x653cb3*/
                        case 38: /*0x653cb3*/
                        case 41: /*0x653cb3*/
                        case 65: /*0x653cb3*/
                        case 66: /*0x653cb3*/
                        case 67: /*0x653cb3*/
                        case 72: /*0x653cb3*/
                          break;
                        default:
                          v7 = 0; /*0x653cba*/
                          v28 = 0; /*0x653cbc*/
                          break; /*0x653cbc*/
                      }
                      if ( (!FactoryClass::GetFlag() || UI_Process_639DA0() == -1) && v7 ) /*0x653cd9*/
                      {
                        if ( (a2 & 8) != 0 ) /*0x653ce6*/
                          TacticalClass::HandlePlayerAction( /*0x653cff*/
                            (char *)&MapClass_Instance,
                            (int16_t *)&v27,
                            v29,
                            v28,
                            v7,
                            1);
                        if ( (a2 & 4) != 0 && !byte_A8ED9D ) /*0x653d14*/
                        {
                          v34 = ((int16_t)v27 << 8) + 128; /*0x653d3b*/
                          v35 = (IDA_SHIWORD(v27) << 8) + 128; /*0x653d3f*/
                          v36 = 0; /*0x653d54*/
                          PlayerClass::ExecuteCommand( /*0x653d58*/
                            (char *)&MapClass_Instance,
                            (int)&v34,
                            (int16_t *)&v27,
                            (void **)v28,
                            v7,
                            1);
                        }
                        goto LABEL_74; /*0x653d5d*/
                      }
                      goto LABEL_61; /*0x653cd9*/
                    }
                    goto LABEL_42; /*0x653bcb*/
                  }
                  goto LABEL_40; /*0x653bc3*/
                }
                goto LABEL_38; /*0x653bbf*/
              }
              goto LABEL_36; /*0x653bb7*/
            }
  LABEL_35:
            if ( g_BuildingPlacementState != 7 ) /*0x653c17*/
            {
              if ( g_BuildingPlacementState != 8 ) /*0x653c29*/
              {
                if ( g_BuildingPlacementState != 9 ) /*0x653c34*/
                {
                  if ( g_BuildingPlacementState != 11 ) /*0x653c43*/
                  {
                    if ( g_BuildingPlacementState == 5 ) /*0x653c52*/
                    {
                      v7 = 41; /*0x653c54*/
                    }
                    else if ( g_BuildingPlacementState == 6 ) /*0x653c61*/
                    {
                      v7 = 65; /*0x653c63*/
                    }
                    else
                    {
                      if ( v28 ) /*0x653c70*/
                      {
                        ClosestEnemy = FindRadarClosestEnemy(0, (int)v28); /*0x653c74*/
                        v9 = (*(int (__thiscall **)(int, void *, unsigned int))(*(unsigned int *)ClosestEnemy + 116))( /*0x653c83*/
                               ClosestEnemy,
                               v28,
                               0);
                      }
                      else
                      {
                        v10 = FindRadarClosestEnemy((int16_t *)&v27, 0); /*0x653c8e*/
                        v9 = (*(int (__thiscall **)(int, int *, unsigned int, unsigned int))(*(unsigned int *)v10 + 112))(v10, &v27, 0, 0); /*0x653c9e*/
                      }
                      v7 = v9; /*0x653ca1*/
                    }
                    goto LABEL_51; /*0x653c59*/
                  }
  LABEL_42:
                  v7 = 72; /*0x653c45*/
                  goto LABEL_51; /*0x653c4a*/
                }
  LABEL_40:
                v7 = 68; /*0x653c36*/
                goto LABEL_51; /*0x653c3b*/
              }
  LABEL_38:
              v7 = 67; /*0x653c2b*/
              goto LABEL_51; /*0x653c30*/
            }
  LABEL_36:
            v7 = 66; /*0x653c19*/
            goto LABEL_51; /*0x653c1e*/
          }
  LABEL_34:
          v7 = 38; /*0x653c07*/
          goto LABEL_51; /*0x653c0c*/
        }
        goto LABEL_32; /*0x653b9f*/
      }
      v7 = 20; /*0x653be7*/
      goto LABEL_51; /*0x653bec*/
    }
    Mouse::SetCursor((int)&MapClass_Instance, 0, 0); /*0x653eeb*/
  }
  return 0; /*0x653ed5*/
}
}
