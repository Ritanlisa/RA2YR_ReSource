// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
#include "system/tactical.hpp"
#include "e4/classes/Building_e4.hpp"
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
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "misc/misc_ext.hpp"
#include "render/render_ext.hpp"
#include "e4/classes/Math_e4.hpp"  // G42.36 C2027 supply
#include "system/minimal_carriers.hpp"  // G42.42q minimal carriers
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int DrawToSurfaceSHP(...);  // raw 004AED70: int __fastcall DrawToSurfaceSHP( int a1, int a2, int a3, unsigned int a4, int *a5, int *a6
} // namespace gamemd
// ---- g57b5 W6: TU-local globals (csp_canon 驱动) ----
extern int globalHelper_0D2ED0;  // 词表 (canon 无条目, int 兜底) L1087
// ---- g57b5 W6 end ----
// ---- g57b5 W5: qualified-call free-form vocab ----
namespace gamemd {
int Coord_To_ScreenRaw(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TacticalClass_RenderCellFogOfWar(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int Vector2_Subtract(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int RenderAlphaShapes(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int BuildingDebris_Init(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int CellClass_GetScreenRect(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int CellClass_GetTerrainFlag(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int CellClass_InitRandomOffsets(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int Coord3D_Set(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int Coord_Subtract(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int Coord_To_Screen(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int LayerClass_CoordinatesLegal(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int PingPongBuffer_GetWriteOffset(void);  // g57b5 W6: 0 参调用修正   // g57b5 W5: raw 词表 (纯变参兜底)
int TacticalClass_CheckCellVisibility(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TacticalClass_DecrementCounter(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TacticalClass_DrawCellTerrainOverlay(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TacticalClass_DrawTerrain(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TacticalClass_InterpolateColor(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TacticalClass_SetView(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TacticalClass_saveConfig(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TerrainClass_GenerateTexture(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int Triple_Set(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int ClipRectIntersection(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
} // namespace gamemd
// ---- g57b5 W5 end ----
// ---- g57b5 W3: TU-local 真形 vocab (declaration-only) ----
namespace gamemd {
    int *TransformMatrix3x4Point(void *a1, float *a2, void *a3);  // raw 0x435f4a;
} // namespace gamemd
// ---- g57b5 W3 end ----

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

// 0x6d7560
void* TacticalClass::RenderIsometric(const RectangleStruct& viewRect, int flags)
{
  int v3; // eax
  int v5; // eax
  int v6; // ecx
  float *v7; // eax
  int v8; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ebp
  int v13; // edx
  int result; // eax
  int v15; // ecx
  int v16; // eax
  CellClass *v17; // esi
  int *ScreenRect; // eax
  unsigned int *v19; // eax
  int v20; // ebp
  int16_t v28[2]; // [esp+10h] [ebp-98h] BYREF
  int v22; // [esp+14h] [ebp-94h] BYREF
  float v23; // [esp+18h] [ebp-90h]
  int v24; // [esp+1Ch] [ebp-8Ch]
  int v25; // [esp+20h] [ebp-88h]
  unsigned int v26; // [esp+24h] [ebp-84h]
  int v28; // [esp+2Ch] [ebp-7Ch]
  int16_t v30; // [esp+32h] [ebp-76h]
  int v32; // [esp+3Ch] [ebp-6Ch]
  int v34[2]; // [esp+44h] [ebp-64h] BYREF
  int v35; // [esp+4Ch] [ebp-5Ch]
  int v36; // [esp+50h] [ebp-58h]
  float v37[3]; // [esp+54h] [ebp-54h] BYREF
  unsigned int v38[6]; // [esp+60h] [ebp-48h] BYREF
  int v39; // [esp+78h] [ebp-30h]
  unsigned int v40[3]; // [esp+7Ch] [ebp-2Ch] BYREF
  int v41[4]; // [esp+88h] [ebp-20h] BYREF
  int v42[4]; // [esp+98h] [ebp-10h] BYREF

  v3 = *viewRect; /*0x6d7575*/
  v24 = 0; /*0x6d7581*/
  v5 = this->visibleArea + v3; /*0x6d7595*/
  v6 = viewRect[1] + this->u32_B4; /*0x6d759c*/
  v25 = v5 - DSurface_ViewBounds.field_0; /*0x6d759e*/
  v26 = v6 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d75a8*/
  *(float *)&v22 = (float)(v5 - DSurface_ViewBounds.field_0); /*0x6d75b7*/
  v23 = (float)(v6 - (unsigned int)DSurface_ViewBounds.field_4); /*0x6d75c3*/
  v7 = TransformMatrix3x4Point(v37, (float *)(this + 3556), (float *)&v22); /*0x6d75c7*/
  v22 = *(int *)v7; /*0x6d75ce*/
  v23 = v7[1]; /*0x6d75d9*/
  v24 = *((unsigned int *)v7 + 2); /*0x6d75e0*/
  (*((unsigned short *)&(v8))) = Math::RoundToInt(*(float *)&v22); /*0x6d75e4*/
  v8 = v8; /*0x6d75ed*/
  (*((unsigned short *)&(v10))) = Math::RoundToInt(v23); /*0x6d75ef*/
  Coord::Subtract((Coord *)v40, v8, v10, 0); /*0x6d75ff*/
  v11 = viewRect[3]; /*0x6d7608*/
  v28[0] = v40[0] / 256; /*0x6d7617*/
  v28[1] = v40[1] / 256; /*0x6d762f*/
  v25 = *(unsigned int *)v28; /*0x6d764e*/
  v12 = v11 / 15 + 17; /*0x6d7655*/
  v13 = (uint64_t)(2290649225LL * viewRect[2]) >> 32; /*0x6d765e*/
  v12 = v12; /*0x6d7660*/
  v13 >>= 5; /*0x6d7664*/
  (*((unsigned short *)&(v25))) = v28[0] - 2; /*0x6d7669*/
  result = (unsigned int)v13 >> 31; /*0x6d766e*/
  v32 = v13 + ((unsigned int)v13 >> 31) + 4; /*0x6d7675*/
  v15 = 0; /*0x6d7679*/
  while ( v15 < v12 ) /*0x6d767d*/
  {
    v16 = v15 / 2; /*0x6d7688*/
    ++v15; /*0x6d768a*/
    v16 = v16; /*0x6d768b*/
    v15 = v15; /*0x6d7692*/
    v30 = v15 / 2; /*0x6d769b*/
    (*((unsigned short *)&(v28))) = v25 + v16; /*0x6d76ae*/
    (*(((unsigned short *)&(v28)) + 1)) = v30 + (*(((unsigned short *)&(v25)) + 1)); /*0x6d76b9*/
    result = v32; /*0x6d76be*/
    *(unsigned int *)v28 = v28; /*0x6d76c8*/
    if ( v32 > 0 ) /*0x6d76cc*/
    {
      v32 = v32; /*0x6d76d2*/
      do /*0x6d7817*/
      {
        if ( (uint8_t)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v28) ) /*0x6d76e0*/
        {
          v17 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v28); /*0x6d76fc*/
          ScreenRect = CellClass::GetScreenRect(v17, v41); /*0x6d7708*/
          v34[0] = *ScreenRect; /*0x6d7711*/
          v34[1] = ScreenRect[1]; /*0x6d771a*/
          v35 = ScreenRect[2]; /*0x6d7721*/
          v36 = ScreenRect[3]; /*0x6d7733*/
          v19 = ClipRectIntersection(v42, viewRect, v34, 0, 0); /*0x6d773a*/
          v38[3] = *v19; /*0x6d7743*/
          v20 = v19[2]; /*0x6d774f*/
          v38[4] = v19[1]; /*0x6d7752*/
          v39 = v19[3]; /*0x6d7762*/
          Coord::Subtract((Coord *)v38, (((v28[0] << 8) + 128) / 256) << 8, (((v28[1] << 8) + 128) / 256) << 8, 0); /*0x6d7799*/
          v37[0] = *(float *)v38; /*0x6d77aa*/
          v37[1] = *(float *)&v38[1]; /*0x6d77ae*/
          v37[2] = *(float *)&v38[2]; /*0x6d77be*/
          Coord::To_Screen((Coord *)this, v37, &v22); /*0x6d77c2*/
          v22 -= 30; /*0x6d77d4*/
          if ( v35 > 0 && v36 > 0 && v20 > 0 && v39 > 0 ) /*0x6d77ec*/
            TacticalClass::CheckCellVisibility(v17->mapCoords, &v22, flags, 0); /*0x6d77ff*/
        }
        ++v28[0]; /*0x6d7804*/
        --v28[1]; /*0x6d780d*/
        result = --v32; /*0x6d7812*/
      }
      while ( v32 ); /*0x6d7817*/
      v15 = v15; /*0x6d781d*/
      v12 = v12; /*0x6d7821*/
    }
  }
  return result; /*0x6d782d*/
}
// 0x480350
int TacticalClass::CheckCellVisibility(const Point2D& screen_pos, int flags, bool unk)
{
  int result; // eax
  int v6; // eax
  int *v7; // edi
  unsigned int inited; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  int v14; // [esp+10h] [ebp-Ch]
  int v15[2]; // [esp+14h] [ebp-8h] BYREF
  int v16; // [esp+28h] [ebp+Ch]

  (*((unsigned char *)&(result))) = unk; /*0x480350*/
  if ( unk ) /*0x48035f*/
    return result; /*0x48035f*/
  if ( !*(&this->vtable23) ) /*0x480365*/
    TacticalClass::SetView(this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x480384*/
  v6 = *(&this->vtable24); /*0x480389*/
  v16 = 0; /*0x48038c*/
  if ( v6 == 0xFFFF ) /*0x480395*/
  {
    v14 = 0; /*0x4803e9*/
    v7 = (int *)*((unsigned int *)dword_A8ED2C + dword_AA10B0); /*0x4803ed*/
    inited = CellClass::InitRandomOffsets(this, dword_AA10B0, v7[188]); /*0x4803fa*/
  LABEL_10:
    v16 = inited; /*0x4803ff*/
    goto LABEL_11; /*0x4803ff*/
  }
  v7 = (int *)*((unsigned int *)dword_A8ED2C + v6); /*0x48039d*/
  v14 = *((uint8_t *)&this->unknown702); /*0x4803ae*/
  if ( v7[188] > 1 ) /*0x4803b5*/
  {
    if ( (uint8_t)CellClass::GetTerrainFlag(v7, *((uint8_t *)&this->unknown702)) ) /*0x4803ba*/
      inited = ((unsigned int)*(&this->overlayTypeIndex0) >> 13) & 1; /*0x4803cc*/
    else
      inited = CellClass::InitRandomOffsets(this, *(&this->vtable24), v7[188]); /*0x4803dc*/
    goto LABEL_10; /*0x4803cf*/
  }
  LABEL_11:
  ++dword_A83ECC; /*0x480403*/
  v9 = this->level; /*0x480416*/
  v10 = screen_pos[1]; /*0x48041d*/
  v15[0] = *screen_pos; /*0x480420*/
  v11 = v10 - 15 * v9; /*0x48042e*/
  result = (*(int (__thiscall **)(int *))(*v7 + 156))(v7); /*0x480430*/
  if ( result ) /*0x48043c*/
    TerrainClass::GenerateTexture( /*0x480499*/
      v7,
      *(&this->vtable23),
      v14,
      (int)g_DSurface_Hidden_2,
      v15[0],
      v11 + dword_886FA4,
      *flags,
      flags[1],
      flags[2],
      flags[3],
      this->level,
      *((int16_t *)&this->attached34),
      1,
      v16,
      0,
      0,
      0,
      0);
  if ( *(&this->vtable28) != -1 ) /*0x4804a2*/
  {
    v12 = flags[1]; /*0x4804b1*/
    v15[0] = v15[0] + 30 - *flags; /*0x4804bd*/
    v13 = *(&this->vtable28); /*0x4804c1*/
    v15[1] = v11 + dword_886FA4 - v12; /*0x4804c4*/
    return (*(int (__thiscall **)(unsigned int, int *, unsigned int *, unsigned int, int, int *))(**((unsigned int **)dword_A8EC1C + v13) + 160))( /*0x4804f5*/
             *((unsigned int *)dword_A8EC1C + v13),
             v15,
             flags,
             *((uint8_t *)&this->unknown707),
             dword_89E7C0 * this->level,
             this + 9);
  }
  return result; /*0x4804fb*/
}
// 0x6d7840
int TacticalClass::DrawMap(const RectangleStruct& viewRect, RectangleStruct* bounds)
{
  int result; // eax
  DWORD Time; // eax
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // eax
  int v11; // ebp
  float *v12; // eax
  int v13; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // esi
  float v18; // ebx
  int v19; // ecx
  int v20; // esi
  int v21; // eax
  unsigned int *v22; // esi
  int NthOfType; // edi
  unsigned int *v24; // ebp
  BOOL v25; // edi
  unsigned int *v26; // eax
  int *ScreenRect; // eax
  int v28; // esi
  int v29; // edi
  int v30; // eax
  int16_t v45[2]; // [esp+8h] [ebp-48h] BYREF
  int v32; // [esp+Ch] [ebp-44h]
  float v39; // [esp+28h] [ebp-28h] BYREF
  float v40; // [esp+2Ch] [ebp-24h]
  int v41; // [esp+30h] [ebp-20h]
  int v42; // [esp+34h] [ebp-1Ch] BYREF
  int v43; // [esp+38h] [ebp-18h]
  int v44[4]; // [esp+40h] [ebp-10h] BYREF
  unsigned int *v45; // [esp+54h] [ebp+4h]

  result = PingPongBuffer::GetWriteOffset(); /*0x6d7847*/
  if ( (unsigned int)dword_ABCD44 >= result ) /*0x6d7852*/
  {
    result = (*(int (__thiscall **)(int *))(*g_DSurface_Hidden_2 + 112))(g_DSurface_Hidden_2); /*0x6d7860*/
    if ( result == 2 ) /*0x6d7866*/
    {
      result = dword_A8EB78; /*0x6d786c*/
      if ( dword_A8EB78 ) /*0x6d7873*/
      {
        result = (*(int (__thiscall **)(int *, unsigned int, unsigned int))(*g_DSurface_Hidden_2 + 92))(g_DSurface_Hidden_2, 0, 0); /*0x6d7887*/
        result = result; /*0x6d788c*/
        if ( result ) /*0x6d7890*/
        {
          Time = timeGetTime(); /*0x6d7896*/
          v6 = Time - dword_B0E640; /*0x6d78a4*/
          dword_B0E640 = Time; /*0x6d78a6*/
          v32 = v6; /*0x6d78b1*/
          if ( v6 > 0x3E8 ) /*0x6d78b5*/
            v32 = 1000; /*0x6d78b7*/
          v7 = (*(int (__thiscall **)(int *))(*g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2); /*0x6d78c9*/
          v8 = this->u32_B0; /*0x6d78d0*/
          v7 = v7; /*0x6d78dc*/
          v9 = this->u32_B4; /*0x6d78e2*/
          v10 = v8 + *viewRect; /*0x6d78ee*/
          v11 = viewRect[1]; /*0x6d78f0*/
          v42 = v10 - DSurface_ViewBounds; /*0x6d78f5*/
          v43 = v11 + v9 - dword_886FA4; /*0x6d7905*/
          v39 = (float)(v10 - DSurface_ViewBounds); /*0x6d790a*/
          v41 = 0; /*0x6d791c*/
          v40 = (float)v43; /*0x6d7924*/
          v12 = TransformMatrix3x4Point((float *)&v42, (float *)(this + 3556), &v39); /*0x6d7928*/
          v39 = *v12; /*0x6d792f*/
          v40 = v12[1]; /*0x6d793a*/
          v41 = *((unsigned int *)v12 + 2); /*0x6d7941*/
          (*((unsigned short *)&(v13))) = Math::RoundToInt(v39); /*0x6d7945*/
          v13 = v13; /*0x6d794e*/
          (*((unsigned short *)&(v15))) = Math::RoundToInt(v40); /*0x6d7950*/
          v16 = viewRect[3]; /*0x6d796d*/
          v17 = viewRect[2]; /*0x6d7978*/
          (*(((unsigned short *)&(v42)) + 1)) = v15 / 256; /*0x6d799d*/
          (*((unsigned int *)&(v18))) = v16 / 15 + 17; /*0x6d79a4*/
          v19 = 0; /*0x6d79ac*/
          v18 = v18; /*0x6d79b3*/
          v20 = v17 / 60 + 4; /*0x6d79bc*/
          (*((unsigned short *)&(v42))) = v13 / 256 - 2; /*0x6d79c0*/
          v20 = v20; /*0x6d79c5*/
          while ( v19 < (*((signed int *)&(v18))) ) /*0x6d79c9*/
          {
            v21 = v19 / 2; /*0x6d79d4*/
            ++v19; /*0x6d79d6*/
            (*((unsigned short *)&(v39))) = v21; /*0x6d79d7*/
            v19 = v19; /*0x6d79de*/
            (*(((unsigned short *)&(v39)) + 1)) = v19 / 2; /*0x6d79e7*/
            (*((unsigned short *)&(v45))) = v42 + v21; /*0x6d79fa*/
            (*(((unsigned short *)&(v45)) + 1)) = (*(((unsigned short *)&(v39)) + 1)) + (*(((unsigned short *)&(v42)) + 1)); /*0x6d7a05*/
            *(unsigned int *)v45 = v45; /*0x6d7a10*/
            if ( v20 > 0 ) /*0x6d7a14*/
            {
              v20 = v20; /*0x6d7a1a*/
              do /*0x6d7bcb*/
              {
                if ( (uint8_t)LayerClass::CoordinatesLegal(&dword_87F7E8, v45) ) /*0x6d7a28*/
                {
                  v22 = CellCoord::To_CellObj(&dword_87F7E8, v45); /*0x6d7a44*/
                  NthOfType = Building::GetNthOfType((int)v22); /*0x6d7a4d*/
                  if ( (v22[75] & 0x10) != 0 /*0x6d7a94*/
                    && !(uint8_t)CellClass::QuickPassable(v22)
                    && (v22[59] == 2 || NthOfType)
                    && !v22[57]
                    && (v22[80] & 0x1000) == 0 )
                  {
                    v24 = (unsigned int *)v22[63]; /*0x6d7a9a*/
                    v25 = NthOfType != 0; /*0x6d7aa9*/
                    if ( v24 ) /*0x6d7aab*/
                    {
                      if ( (int)v24[4] >= 0x2000 ) /*0x6d7ade*/
                        BuildingDebris::Init(v24, v25); /*0x6d7ae3*/
                    }
                    else
                    {
                      v26 = operator new(0x3Cu); /*0x6d7aaf*/
                      if ( v26 ) /*0x6d7ab9*/
                      {
                        v24 = TacticalClass::saveConfig(v26, v25); /*0x6d7ac3*/
                        v22[63] = v24; /*0x6d7ac5*/
                      }
                      else
                      {
                        v24 = 0; /*0x6d7acd*/
                        v22[63] = 0; /*0x6d7acf*/
                      }
                    }
                    if ( v24 ) /*0x6d7aea*/
                    {
                      if ( (uint8_t)TacticalClass::DecrementCounter(v24, v32) ) /*0x6d7af7*/
                      {
                        ScreenRect = CellClass::GetScreenRect((int)v22, v44); /*0x6d7b0b*/
                        v28 = v24[12] + *ScreenRect + ScreenRect[2] / 2; /*0x6d7b3b*/
                        v29 = v24[13] + ScreenRect[1] + ScreenRect[3] / 2; /*0x6d7b3f*/
                        if ( v28 >= *bounds && v28 < *bounds + bounds[2] ) /*0x6d7b4c*/
                        {
                          v30 = bounds[1]; /*0x6d7b4e*/
                          if ( v29 >= v30 && v29 < v30 + bounds[3] ) /*0x6d7b5c*/
                          {
                            TacticalClass::InterpolateColor(v24, v32); /*0x6d7b65*/
                            *(unsigned short *)(v29 * v7 + result + 2 * v28) = ((int)v24[1] >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6d7bb4*/
                                                                  | ((int)v24[2] >> g_BitMask_Blue << g_BitMask_Green)
                                                                  | ((int)v24[3] >> g_BitMask_Red << g_BitShift_Blue);
                          }
                        }
                      }
                    }
                  }
                }
                ++v45[0]; /*0x6d7bb8*/
                --v45[1]; /*0x6d7bc1*/
                --v20; /*0x6d7bc7*/
              }
              while ( v20 ); /*0x6d7bcb*/
              v19 = v19; /*0x6d7bd1*/
              v20 = v20; /*0x6d7bd5*/
              v18 = v18; /*0x6d7bd9*/
            }
          }
          return (*(int (__thiscall **)(int *))(*g_DSurface_Hidden_2 + 96))(g_DSurface_Hidden_2); /*0x6d7bed*/
        }
      }
    }
  }
  return result; /*0x6d7bf2*/
}
// 0x6d7c00
int TacticalClass::DrawTerrain(int *a2, unsigned int *a4)
{
  int *v3; // edi
  int v5; // eax
  signed int v6; // ecx
  float *v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  signed int v14; // ecx
  float *v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int smudgeTypeIndex; // ecx
  int v20; // ebx
  int v21; // edi
  int v22; // ebx
  int v23; // ecx
  int result; // eax
  int v25; // edi
  int *v26; // ebp
  int v27; // eax
  int16_t v28; // dx
  float *v29; // eax
  TacticalClass *v30; // eax
  int v31; // [esp+0h] [ebp-68h]
  int v32; // [esp+0h] [ebp-68h]
  int v33; // [esp+4h] [ebp-64h]
  int v34; // [esp+4h] [ebp-64h]
  int v35; // [esp+1Ch] [ebp-4Ch]
  int v36; // [esp+20h] [ebp-48h] BYREF
  unsigned int v37[2]; // [esp+24h] [ebp-44h]
  int v38; // [esp+2Ch] [ebp-3Ch] BYREF
  signed int v39; // [esp+30h] [ebp-38h]
  int v40; // [esp+34h] [ebp-34h]
  Triple v41; // [esp+38h] [ebp-30h] BYREF
  float v42; // [esp+3Ch] [ebp-2Ch]
  int v43; // [esp+40h] [ebp-28h]
  int v44; // [esp+44h] [ebp-24h] BYREF
  signed int v45; // [esp+48h] [ebp-20h]
  int v46; // [esp+4Ch] [ebp-1Ch]
  float v47[3]; // [esp+50h] [ebp-18h] BYREF
  Coord3D v48; // [esp+5Ch] [ebp-Ch] BYREF

  v3 = a4; /*0x6d7c07*/
  v5 = *(a4 + 44); /*0x6d7c19*/
  v6 = a4[1] + *(a4 + 45) - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d7c32*/
  v38 = *a4 + v5 - DSurface_ViewBounds.field_0; /*0x6d7c34*/
  v39 = v6; /*0x6d7c38*/
  *(float *)&v33 = (float)v6; /*0x6d7c41*/
  *(float *)&v31 = (float)v38; /*0x6d7c4d*/
  Triple::Set(&v41, v31, v33, 0); /*0x6d7c50*/
  v7 = TransformMatrix3x4Point(v47, (float *)a4 + 889, (float *)&v41); /*0x6d7c66*/
  v41 = *(Triple *)v7; /*0x6d7c6d*/
  v42 = v7[1]; /*0x6d7c78*/
  v43 = *((unsigned int *)v7 + 2); /*0x6d7c7f*/
  (*((unsigned short *)&(v8))) = Math::RoundToInt(*(float *)&v41); /*0x6d7c83*/
  v9 = v8; /*0x6d7c8c*/
  (*((unsigned short *)&(v10))) = Math::RoundToInt(v42); /*0x6d7c8e*/
  Coord::Subtract((Coord *)&v44, v9, v10, 0); /*0x6d7c9b*/
  v11 = *(unsigned int *)CellStruct::Set((CellStruct *)&v36, v44 / 256, v45 / 256); /*0x6d7ccb*/
  v12 = *(a4 + 44); /*0x6d7ccd*/
  (*(((unsigned short *)&(v37[0])) + 1)) = (*(((unsigned short *)&(v11)) + 1)); /*0x6d7cd3*/
  (*((unsigned short *)&(v37[0]))) = v11 - 2; /*0x6d7ce0*/
  v13 = *v3; /*0x6d7ce9*/
  a4 = (int *)v37[0]; /*0x6d7ceb*/
  v14 = v3[1] + *(a4 + 45) - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d7d04*/
  v38 = v12 + v13 - DSurface_ViewBounds.field_0; /*0x6d7d06*/
  v39 = v14; /*0x6d7d0a*/
  *(float *)&v34 = (float)v14; /*0x6d7d15*/
  *(float *)&v32 = (float)v38; /*0x6d7d21*/
  Triple::Set(&v41, v32, v34, 0); /*0x6d7d24*/
  v15 = TransformMatrix3x4Point(v47, (float *)a4 + 889, (float *)&v41); /*0x6d7d34*/
  v41 = *(Triple *)v15; /*0x6d7d3b*/
  v42 = v15[1]; /*0x6d7d46*/
  v43 = *((unsigned int *)v15 + 2); /*0x6d7d4d*/
  (*((unsigned short *)&(v16))) = Math::RoundToInt(*(float *)&v41); /*0x6d7d51*/
  v17 = v16; /*0x6d7d5a*/
  (*((unsigned short *)&(v18))) = Math::RoundToInt(v42); /*0x6d7d5c*/
  Coord::Subtract((Coord *)&v38, v17, v18, 0); /*0x6d7d69*/
  v44 = v38; /*0x6d7d7a*/
  v45 = v39; /*0x6d7d82*/
  v46 = v40; /*0x6d7d8c*/
  smudgeTypeIndex = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v44)->smudgeTypeIndex; /*0x6d7d95*/
  v20 = v3[3]; /*0x6d7d98*/
  v21 = v3[2]; /*0x6d7da0*/
  (*(((unsigned short *)&(v37[0])) + 1)) = (*(((unsigned short *)&(smudgeTypeIndex)) + 1)) + 3; /*0x6d7db0*/
  v22 = v20 / 15 + 20; /*0x6d7dbc*/
  (*((unsigned short *)&(v37[0]))) = smudgeTypeIndex - 2; /*0x6d7dc9*/
  v23 = 0; /*0x6d7dd3*/
  result = (unsigned int)((uint64_t)(2290649225LL * v21) >> 32) >> 31; /*0x6d7dd5*/
  v25 = v21 / 60 + 7; /*0x6d7dda*/
  if ( v22 > 0 ) /*0x6d7dde*/
  {
    v26 = a4; /*0x6d7de4*/
    do /*0x6d7f01*/
    {
      v27 = v23 / 2; /*0x6d7ded*/
      ++v23; /*0x6d7def*/
      (*((unsigned short *)&(v38))) = v27; /*0x6d7df0*/
      v36 = v23; /*0x6d7df7*/
      (*(((unsigned short *)&(v38)) + 1)) = v23 / 2; /*0x6d7e00*/
      v28 = (*((unsigned short *)&(v37[0]))) + v27; /*0x6d7e0d*/
      result = *(unsigned int *)((char *)v37 + 2); /*0x6d7e0f*/
      (*((unsigned short *)&(a4))) = v28; /*0x6d7e13*/
      (*(((unsigned short *)&(a4)) + 1)) = (*(((unsigned short *)&(v37[0])) + 1)) + (*(((unsigned short *)&(v38)) + 1)); /*0x6d7e1e*/
      a4 = a4; /*0x6d7e29*/
      if ( v25 > 0 ) /*0x6d7e2d*/
      {
        v35 = v25; /*0x6d7e33*/
        do /*0x6d7ef5*/
        {
          if ( (uint8_t)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (int16_t *)&a4) ) /*0x6d7e41*/
          {
            v29 = (float *)Coord3D::Set( /*0x6d7e91*/
                             &v48,
                             ((((int16_t)a4 << 8) + 128) / 256) << 8,
                             ((((*((signed short *)(((unsigned char *)&(a4)) + 2))) << 8) + 128) / 256) << 8,
                             0);
            v47[0] = *v29; /*0x6d7e98*/
            v47[1] = v29[1]; /*0x6d7ea4*/
            v47[2] = v29[2]; /*0x6d7eb2*/
            Coord::To_Screen((Coord *)a4, v47, (int *)&v41); /*0x6d7eb6*/
            *(unsigned int *)&v41 -= 30; /*0x6d7ec7*/
            v30 = (TacticalClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a4); /*0x6d7ed6*/
            TacticalClass::DrawCellTerrainOverlay(v30, (int *)&v41, v26); /*0x6d7edd*/
          }
          (*((unsigned short *)&(a4))) = (unsigned short)a4 + 1; /*0x6d7ee2*/
          --(*(((unsigned short *)&(a4)) + 1)); /*0x6d7eeb*/
          result = --v35; /*0x6d7ef0*/
        }
        while ( v35 ); /*0x6d7ef5*/
        v23 = v36; /*0x6d7efb*/
      }
    }
    while ( v23 < v22 ); /*0x6d7f01*/
  }
  return result; /*0x6d7f07*/
}
// 0x6d3040
int TacticalClass::DrawTerrainPartial(const RectangleStruct& rect, int a2, int a3, char a4)  // g57b5 W4: raw 真值补参 (a2,a3,a4)
{
  int *visibleCells; // ebx
  int *v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int *v10; // eax
  int v11; // ecx
  int result; // eax
  int v13; // ebx
  int v14; // edi
  int *v15; // ecx
  int v16; // ecx
  int v17; // [esp+Ch] [ebp-54h] BYREF
  unsigned int v18[3]; // [esp+14h] [ebp-4Ch] BYREF
  int v19; // [esp+20h] [ebp-40h] BYREF
  int v20; // [esp+24h] [ebp-3Ch]
  int v21; // [esp+28h] [ebp-38h]
  int v22; // [esp+2Ch] [ebp-34h]
  int v23[4]; // [esp+30h] [ebp-30h] BYREF
  int v24[2]; // [esp+40h] [ebp-20h] BYREF
  int v25; // [esp+48h] [ebp-18h]
  int v26; // [esp+4Ch] [ebp-14h]
  unsigned int v27[4]; // [esp+50h] [ebp-10h] BYREF
  int v28; // [esp+6Ch] [ebp+Ch]

  if ( a4 ) /*0x6d304e*/
  {
    TacticalClass::DrawTerrain((int *)rect, &DSurface_ViewBounds.field_0, &DSurface_ViewBounds); /*0x6d305a*/
  }
  else
  {
    if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d306c*/
      TacticalClass::DrawTerrain((int *)rect, a2, a2); /*0x6d3072*/
    if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d3087*/
      TacticalClass::DrawTerrain((int *)rect, a3, a3); /*0x6d308d*/
  }
  if ( rect->visibleCellCount > 0 && !a4 ) /*0x6d30a2*/
  {
    v28 = 0; /*0x6d30aa*/
    visibleCells = rect->visibleCells; /*0x6d30be*/
    do /*0x6d31d6*/
    {
      Coord::Subtract( /*0x6d310e*/
        (Coord *)v18,
        ((((int16_t)*(unsigned int *)(*visibleCells + 36) << 8) + 128) / 256) << 8,
        ((((int16_t)(*(((unsigned short *)&(*(unsigned int *)(*visibleCells + 36))) + 1)) << 8) + 128) / 256) << 8,
        0);
      v19 = v18[0]; /*0x6d311f*/
      v20 = v18[1]; /*0x6d3123*/
      v21 = v18[2]; /*0x6d3133*/
      v6 = Coord::To_ScreenRaw(&v17, &v19); /*0x6d3137*/
      v7 = rect->visibleArea[1]; /*0x6d3144*/
      v8 = *v6 - rect->visibleArea[0]; /*0x6d314a*/
      v9 = v6[1]; /*0x6d314c*/
      v23[0] = v8 - 30; /*0x6d3152*/
      v23[3] = 30; /*0x6d315b*/
      v23[1] = (int)DSurface_ViewBounds.field_4 + v9 - v7; /*0x6d3175*/
      v23[2] = 60; /*0x6d3183*/
      v10 = ClipRectIntersection(v27, &DSurface_ViewBounds.field_0, v23, 0, 0); /*0x6d3187*/
      v24[0] = *v10; /*0x6d3190*/
      v24[1] = v10[1]; /*0x6d3197*/
      v25 = v10[2]; /*0x6d319e*/
      v11 = v10[3]; /*0x6d31a2*/
      v26 = v11; /*0x6d31a7*/
      if ( v25 > 0 && v11 > 0 ) /*0x6d31af*/
        TacticalClass::DrawTerrain((int *)rect, v24, v24); /*0x6d31bd*/
      ++visibleCells; /*0x6d31cd*/
      ++v28; /*0x6d31d2*/
    }
    while ( v28 < rect->visibleCellCount ); /*0x6d31d6*/
  }
  result = g_CraterCreationState; /*0x6d31dd*/
  if ( g_CraterCreationState ) /*0x6d31e4*/
  {
    result = g_CraterCreationState - 1; /*0x6d31ea*/
    if ( g_CraterCreationState - 1 >= 0 ) /*0x6d31ed*/
    {
      v13 = g_CraterCreationState; /*0x6d31f6*/
      v14 = 20 * result; /*0x6d31f9*/
      do /*0x6d327d*/
      {
        v19 = *(unsigned int *)((char *)g_CraterPool + v14); /*0x6d320b*/
        v20 = *(unsigned int *)((char *)g_CraterPool + v14 + 4); /*0x6d3212*/
        v21 = *(unsigned int *)((char *)g_CraterPool + v14 + 8); /*0x6d3219*/
        v22 = *(unsigned int *)((char *)g_CraterPool + v14 + 12); /*0x6d322c*/
        v20 += (int)DSurface_ViewBounds.field_4; /*0x6d323a*/
        v15 = ClipRectIntersection(v27, &DSurface_ViewBounds.field_0, &v19, 0, 0); /*0x6d3243*/
        v19 = *v15; /*0x6d3247*/
        v20 = v15[1]; /*0x6d324e*/
        result = v15[2]; /*0x6d3252*/
        v21 = result; /*0x6d3255*/
        v16 = v15[3]; /*0x6d3259*/
        v22 = v16; /*0x6d325e*/
        if ( result > 0 && v16 > 0 ) /*0x6d3266*/
          result = TacticalClass::DrawTerrain((int *)rect, &v19, &v19); /*0x6d3274*/
        v14 -= 20; /*0x6d3279*/
        --v13; /*0x6d327c*/
      }
      while ( v13 ); /*0x6d327d*/
    }
  }
  return result; /*0x6d3283*/
}
// 0x6d71e0
Point2D* TacticalClass::CalcBuildingDrawPos(Point2D* out, BuildingClass* building)
{
  int v4; // eax
  float *v5; // eax
  int v8; // eax
  CellClass *v9; // eax
  int v10; // edi
  int v11; // edx
  int v12; // edi
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  void *v16; // edi
  int *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int *v21; // eax
  int *v22; // eax
  int v23; // ecx
  int v25; // [esp+0h] [ebp-DCh]
  int v26; // [esp+4h] [ebp-D8h]
  int16_t v27[2]; // [esp+1Ch] [ebp-C0h] BYREF
  int v28; // [esp+20h] [ebp-BCh] BYREF
  int v29; // [esp+24h] [ebp-B8h]
  int smudgeTypeIndex; // [esp+28h] [ebp-B4h]
  int v32; // [esp+34h] [ebp-A8h]
  int16_t v34; // [esp+3Ah] [ebp-A2h]
  float v35; // [esp+40h] [ebp-9Ch] BYREF
  float v36; // [esp+44h] [ebp-98h]
  int v37; // [esp+48h] [ebp-94h]
  int v38; // [esp+4Ch] [ebp-90h]
  int v41; // [esp+58h] [ebp-84h] BYREF
  int v42; // [esp+5Ch] [ebp-80h]
  float v43[3]; // [esp+64h] [ebp-78h] BYREF
  unsigned int v44[2]; // [esp+70h] [ebp-6Ch] BYREF
  unsigned int v45[2]; // [esp+78h] [ebp-64h] BYREF
  unsigned int v46[3]; // [esp+80h] [ebp-5Ch] BYREF
  int v47[4]; // [esp+8Ch] [ebp-50h] BYREF
  int v48[2]; // [esp+9Ch] [ebp-40h] BYREF
  int v49; // [esp+A4h] [ebp-38h]
  int v51[4]; // [esp+ACh] [ebp-30h] BYREF
  int v52[4]; // [esp+BCh] [ebp-20h] BYREF
  int v53[4]; // [esp+CCh] [ebp-10h] BYREF

  v2 = v2; /*0x6d71f2*/
  v4 = *out + v2->visibleArea - DSurface_ViewBounds; /*0x6d7212*/
  v29 = out->u32_4 + *(unsigned int *)(v2 + 180) - dword_886FA4; /*0x6d721b*/
  v28 = v4; /*0x6d7224*/
  *(float *)&v26 = (float)v29; /*0x6d7228*/
  *(float *)&v25 = (float)v4; /*0x6d7234*/
  Triple::Set(&v35, v25, v26, 0); /*0x6d7237*/
  v5 = TransformMatrix3x4Point(v43, (float *)(v2 + 3556), &v35); /*0x6d724b*/
  v35 = *v5; /*0x6d7252*/
  v36 = v5[1]; /*0x6d725d*/
  v37 = *((unsigned int *)v5 + 2); /*0x6d7264*/
  (*((unsigned short *)&(v6))) = Math::RoundToInt(v35); /*0x6d7268*/
  v6 = v6; /*0x6d7271*/
  (*((unsigned short *)&(v8))) = Math::RoundToInt(v36); /*0x6d7273*/
  Coord::Subtract(&v41, v6, v8, 0); /*0x6d727f*/
  if ( v42 < 0 ) /*0x6d7288*/
    v42 = 0; /*0x6d728a*/
  if ( v41 < 0 ) /*0x6d7292*/
    v41 = 0; /*0x6d7294*/
  v9 = Coord::To_Cell(&dword_87F7E8, &v41); /*0x6d72a2*/
  v10 = out->ptr_30; /*0x6d72aa*/
  smudgeTypeIndex = v9->smudgeTypeIndex; /*0x6d72b2*/
  v11 = (uint64_t)(2290649225LL * v10) >> 32; /*0x6d72b8*/
  v12 = out->u32_8; /*0x6d72ba*/
  (*((unsigned short *)&(smudgeTypeIndex))) = smudgeTypeIndex - 2; /*0x6d72c8*/
  v38 = (v11 >> 3) + ((unsigned int)v11 >> 31) + 17; /*0x6d72de*/
  *(unsigned int *)v27 = smudgeTypeIndex; /*0x6d72e7*/
  v13 = v12 / 60 + 4; /*0x6d72ee*/
  v13 = v13; /*0x6d72f9*/
  if ( g_hWnd ) /*0x6d72fd*/
  {
    v14 = 0; /*0x6d7303*/
    if ( (int)((v11 >> 3) + ((unsigned int)v11 >> 31) + 17) > 0 ) /*0x6d7307*/
    {
      do /*0x6d7544*/
      {
        v15 = v14 / 2; /*0x6d7317*/
        ++v14; /*0x6d7319*/
        v15 = v15; /*0x6d731a*/
        v14 = v14; /*0x6d7321*/
        v34 = v14 / 2; /*0x6d732a*/
        (*((unsigned short *)&(v32))) = smudgeTypeIndex + v15; /*0x6d733d*/
        (*(((unsigned short *)&(v32)) + 1)) = v34 + (*(((unsigned short *)&(smudgeTypeIndex)) + 1)); /*0x6d7348*/
        *(unsigned int *)v27 = v32; /*0x6d7353*/
        if ( v13 > 0 ) /*0x6d7357*/
        {
          v13 = v13; /*0x6d735d*/
          do /*0x6d7532*/
          {
            if ( (uint8_t)LayerClass::CoordinatesLegal(&dword_87F7E8, v27) ) /*0x6d736b*/
            {
              v16 = CellCoord::To_CellObj(&dword_87F7E8, v27); /*0x6d7387*/
              Coord::Subtract(v46, (((v27[0] << 8) + 128) / 256) << 8, (((v27[1] << 8) + 128) / 256) << 8, 0); /*0x6d73cc*/
              v43[0] = *(float *)v46; /*0x6d73dd*/
              v43[1] = *(float *)&v46[1]; /*0x6d73e1*/
              v43[2] = *(float *)&v46[2]; /*0x6d73ed*/
              v17 = Coord::To_ScreenRaw((int *)&v35, v43); /*0x6d73f5*/
              v28 = *v17; /*0x6d73fc*/
              v18 = *(unsigned int *)(v2 + 180); /*0x6d7400*/
              v19 = v17[1]; /*0x6d7406*/
              v20 = v2->visibleArea; /*0x6d7409*/
              v29 = v19; /*0x6d740f*/
              v44[1] = v18; /*0x6d7417*/
              v44[0] = v20; /*0x6d7420*/
              Vector2::Subtract(&v28, v44); /*0x6d7424*/
              v28 -= 30; /*0x6d7436*/
              v51[0] = v28; /*0x6d743a*/
              v51[1] = dword_886FA4 + v29; /*0x6d744b*/
              v51[2] = 60; /*0x6d7460*/
              v51[3] = 30; /*0x6d7467*/
              v21 = ClipRectIntersection(v52, v51, out, 0, 0); /*0x6d7472*/
              v47[0] = *v21; /*0x6d747b*/
              v47[1] = v21[1]; /*0x6d7487*/
              v47[2] = v21[2]; /*0x6d7499*/
              v47[3] = v21[3]; /*0x6d74af*/
              v22 = ClipRectIntersection(v53, &DSurface_ViewBounds, v47, 0, 0); /*0x6d74b6*/
              v48[0] = *v22; /*0x6d74bf*/
              v48[1] = v22[1]; /*0x6d74c9*/
              v49 = v22[2]; /*0x6d74d3*/
              v23 = v22[3]; /*0x6d74da*/
              v23 = v23; /*0x6d74df*/
              if ( v49 > 0 && v23 > 0 ) /*0x6d74ea*/
              {
                v45[0] = v28 + DSurface_ViewBounds; /*0x6d7501*/
                v45[1] = v29 + dword_886FA4; /*0x6d750e*/
                TacticalClass::RenderCellFogOfWar((int)v16, v45, v48); /*0x6d751a*/
              }
            }
            ++v27[0]; /*0x6d751f*/
            --v27[1]; /*0x6d7528*/
            --v13; /*0x6d752e*/
          }
          while ( v13 ); /*0x6d7532*/
          v13 = v13; /*0x6d7538*/
          v14 = v14; /*0x6d753c*/
        }
      }
      while ( v14 < v38 ); /*0x6d7544*/
    }
  }
  return (Point2D *)RenderAlphaShapes(out); /*0x6d7551*/
}
// 0x4d1890
void* TacticalClass::DrawBuildings(const RectangleStruct& viewRect)
{
  int result; // eax
  int v3; // esi
  int v4; // ebx
  int *v5; // eax
  CellClass *v6; // esi
  int v7; // ebp
  int powerup; // eax
  unsigned int *v9; // esi
  CellClass *v10; // ebp
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
  void *v25; // eax
  int *v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // eax
  CellClass *v32; // eax
  int *v33; // ecx
  int v34; // ebp
  int v35; // esi
  unsigned int *v36; // ebp
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // ebp
  char *vtable1; // ebp
  void *v44; // edx
  IPersistStream v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // ebp
  CellClass *v50; // eax
  int v51; // esi
  int v52; // [esp-28h] [ebp-174h]
  int v53; // [esp-28h] [ebp-174h]
  int v54; // [esp-24h] [ebp-170h]
  int v55; // [esp-20h] [ebp-16Ch]
  int v56; // [esp-20h] [ebp-16Ch]
  int v57; // [esp+8h] [ebp-144h]
  int v58; // [esp+8h] [ebp-144h]
  int v59; // [esp+8h] [ebp-144h]
  int *v60; // [esp+Ch] [ebp-140h]
  int *v61; // [esp+Ch] [ebp-140h]
  int v63; // [esp+10h] [ebp-13Ch]
  int *v64; // [esp+10h] [ebp-13Ch]
  int v65; // [esp+10h] [ebp-13Ch]
  int v66; // [esp+14h] [ebp-138h]
  unsigned int v67; // [esp+18h] [ebp-134h]
  signed int j; // [esp+18h] [ebp-134h]
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
  void *vtable3; // [esp+78h] [ebp-D4h]
  IPersistStream v90; // [esp+7Ch] [ebp-D0h]
  int v92; // [esp+84h] [ebp-C8h]
  int v93; // [esp+88h] [ebp-C4h] BYREF
  char *v94; // [esp+8Ch] [ebp-C0h]
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
  void *vtable0; // [esp+12Ch] [ebp-20h]
  int v111[2]; // [esp+134h] [ebp-18h] BYREF
  unsigned int v112[4]; // [esp+13Ch] [ebp-10h] BYREF

  result = (int)g_hWnd; /*0x4d1890*/
  if ( g_hWnd ) /*0x4d18a1*/
  {
    result = g_MissionState; /*0x4d18a7*/
    v3 = 0; /*0x4d18ac*/
    for ( i = 0; i < (int)g_MissionState; ++i ) /*0x4d18b4*/
    {
      if ( !byte_8B3CCC ) /*0x4d18c4*/
      {
        qsort(g_MissionPool, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0D2ED0); /*0x4d18d4*/
        dword_8B3CD0 = 0; /*0x4d18dc*/
        byte_8B3CCC = 1; /*0x4d18e6*/
      }
      v4 = *((unsigned int *)g_MissionPool + 2 * v3 + 1); /*0x4d18f3*/
      if ( *(unsigned char *)(v4 + 116) ) /*0x4d18f7*/
      {
        v93 = *(unsigned int *)(v4 + 64); /*0x4d190d*/
        v94 = *(char **)(v4 + 68); /*0x4d1917*/
        v95 = *(unsigned int *)(v4 + 72); /*0x4d1921*/
        v96 = *(unsigned int *)(v4 + 76); /*0x4d192b*/
        v93 -= *(unsigned int *)&g_TacticalClass_Instance[44]; /*0x4d193e*/
        v94 = (char *)DSurface_ViewBounds.field_4 + (unsigned int)&v94[-*(unsigned int *)&g_TacticalClass_Instance[45]]; /*0x4d195d*/
        v93 += DSurface_ViewBounds.field_0; /*0x4d1964*/
        v5 = ClipRectIntersection(v112, (int *)viewRect, &v93, 0, 0); /*0x4d197c*/
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
                v66 = (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)v18 + 156))(v18); /*0x4d1c86*/
                v70 = *(unsigned char *)(*(unsigned int *)(v4 + 96) + 16 * j + 8); /*0x4d1c97*/
                v64 = *(int **)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] /*0x4d1cb0*/
                                          + 4 * *(unsigned int *)(*(unsigned int *)(v4 + 40) + 90196))
                              + 780);
                if ( j ) /*0x4d1cb4*/
                {
                  if ( v18 /*0x4d207f*/
                    && (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)v18 + 44))(v18) == 5
                    && *((unsigned int *)v18 + 181) <= stru_A8EB00.vfptr[30]
                    && v66 )
                  {
                    v36 = (unsigned int *)(v4 + 52); /*0x4d2085*/
                    v37 = *(unsigned int *)(v4 + 56); /*0x4d208f*/
                    v100[0] = *(unsigned int *)(v4 + 52) - 128; /*0x4d2092*/
                    v38 = *(unsigned int *)(v4 + 60); /*0x4d20a0*/
                    v100[1] = v37 - 128; /*0x4d20a3*/
                    v100[2] = v38; /*0x4d20b9*/
                    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v100, &v77); /*0x4d20c0*/
                    vtable0 = viewRect->vfptr; /*0x4d20d2*/
                    v39 = (char *)DSurface_ViewBounds.field_4 - (char *)viewRect->vfptr1; /*0x4d20e3*/
                    v40 = 1000; /*0x4d20eb*/
                    v77 += DSurface_ViewBounds.field_0 - (unsigned int)vtable0; /*0x4d20f0*/
                    v41 = v39 + v41; /*0x4d20f8*/
                    (*((unsigned char *)&(v39))) = v18[861]; /*0x4d20fa*/
                    v41 = v41; /*0x4d2102*/
                    if ( !(unsigned char)v39 ) /*0x4d2106*/
                    {
                      v102[0] = *v36; /*0x4d210c*/
                      v102[1] = *(unsigned int *)(v4 + 56); /*0x4d2123*/
                      v102[2] = *(unsigned int *)(v4 + 60); /*0x4d212d*/
                      v40 = *(int16_t *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v102)->CellClass_field_10A; /*0x4d2139*/
                    }
                    if ( v64 && v18[860] ) /*0x4d2148*/
                      v59 = (int)v64; /*0x4d2152*/
                    else
                      v59 = *(unsigned int *)&stru_87F5F0.__pad_58[120]; /*0x4d215e*/
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
                      (int)g_DSurface_Hidden_2,
                      v59,
                      v66,
                      v69,
                      &v77,
                      (int *)viewRect,
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
                  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v109, &v79); /*0x4d1cf5*/
                  v105[0] = *(unsigned int *)(v4 + 52); /*0x4d1cfe*/
                  v105[1] = *(unsigned int *)(v4 + 56); /*0x4d1d10*/
                  v105[2] = *(unsigned int *)(v4 + 60); /*0x4d1d1f*/
                  v60 = (int *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v105); /*0x4d1d30*/
                  v22 = (char *)DSurface_ViewBounds.field_4 - (char *)viewRect->vfptr1; /*0x4d1d41*/
                  v23 = v18[5889]; /*0x4d1d49*/
                  v79 += DSurface_ViewBounds.field_0 - (unsigned int)viewRect->vfptr; /*0x4d1d4f*/
                  v24 = v22 + v80; /*0x4d1d57*/
                  v80 += v22; /*0x4d1d5b*/
                  if ( v23 ) /*0x4d1d5f*/
                    goto LABEL_49; /*0x4d1d5f*/
                  v71 = *((unsigned int *)v18 + 1352); /*0x4d1d6f*/
                  v83[0] = v79; /*0x4d1d77*/
                  v83[1] = v24; /*0x4d1d7b*/
                  v25 = (void *)(v24 + v66->u32_4 / 2); /*0x4d1d88*/
                  v88[0] = (int)viewRect->vfptr; /*0x4d1d8e*/
                  v88[1] = (int)viewRect->vfptr1; /*0x4d1d95*/
                  v88[2] = (int)viewRect->vfptr2; /*0x4d1d9c*/
                  vtable3 = viewRect->vfptr3; /*0x4d1da5*/
                  if ( (int)vtable3 > (int)v25 ) /*0x4d1dac*/
                    vtable3 = v25; /*0x4d1dae*/
                  v73 = *((unsigned int *)v18 + 1356) + 144; /*0x4d1dc4*/
                  v75 = *((unsigned int *)v18 + 1357) + 172; /*0x4d1dd3*/
                  v57 = (BuildingTypeClass::GetFoundationHeight((int *)v18, 0) << 8) - 256; /*0x4d1de6*/
                  v97[0] = (BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)v18) << 8) - 256; /*0x4d1dfe*/
                  v97[1] = v57; /*0x4d1e18*/
                  v26 = TacticalClass::AdjustForZShapeMove(v111, v97); /*0x4d1e1f*/
                  v74 = v73 - *v26; /*0x4d1e2e*/
                  v27 = *v19; /*0x4d1e3b*/
                  v76 = v75 - v26[1]; /*0x4d1e3d*/
                  v92 = (int)dword_89DDBC; /*0x4d1e46*/
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
                  v32 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v99); /*0x4d1e91*/
                  v33 = v60; /*0x4d1ea4*/
                  v34 = *((int16_t *)v18 + 2724) + *(int16_t *)v32->CellClass_field_10A; /*0x4d1ea8*/
                  if ( !v60[13] ) /*0x4d1eaa*/
                  {
                    TacticalClass::SetView(v60, 0, 0x10000, 0, 1000, 1000, 1000); /*0x4d1ec9*/
                    v33 = v60; /*0x4d1ece*/
                  }
                  if ( v18[5890] ) /*0x4d1ed2*/
                    v61 = (int *)v33[13]; /*0x4d1edf*/
                  else
                    v61 = v64; /*0x4d1ee9*/
                  if ( (int)vtable3 > 0 ) /*0x4d1ef6*/
                  {
                    if ( v70 ) /*0x4d1f02*/
                      DrawToSurfaceSHP( /*0x4d1f3e*/
                        (int)g_DSurface_Hidden_2,
                        (int)v61,
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
                        (int)g_DSurface_Hidden_2,
                        (int)v61,
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
                        v92,
                        0,
                        v74,
                        v76);
                    DrawToSurfaceSHP( /*0x4d1f6e*/
                      (int)g_DSurface_Hidden_2,
                      (int)v61,
                      v66,
                      v69 + *(int16_t *)(v66 + 6) / 2,
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
                      (int)g_DSurface_Hidden_2,
                      (int)v61,
                      v35,
                      v69,
                      &v79,
                      (int *)viewRect,
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
              v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v108); /*0x4d19fa*/
              v7 = *(unsigned int *)&v6->__pad_28[28]; /*0x4d1a00*/
              powerup = (uint8_t)v6->powerup; /*0x4d1a03*/
              *(unsigned int *)&v6->__pad_28[28] = *(unsigned int *)(v4 + 36); /*0x4d1a09*/
              powerup = powerup; /*0x4d1a0f*/
              v6->powerup = *(unsigned char *)(v4 + 44); /*0x4d1a13*/
              Coord::Subtract( /*0x4d1a5b*/
                (Coord *)v106,
                ((((*((signed short *)&(v6->smudgeTypeIndex))) << 8) + 128) / 256) << 8,
                ((((*((signed short *)(((unsigned char *)&(v6->smudgeTypeIndex)) + 2))) << 8) + 128) / 256) << 8,
                0);
              v101[0] = v106[0]; /*0x4d1a75*/
              v101[1] = v106[1]; /*0x4d1a7c*/
              v101[2] = v106[2]; /*0x4d1a96*/
              Coord::To_Screen((Coord *)g_TacticalClass_Instance, v101, v87); /*0x4d1a9d*/
              v87[0] -= 30; /*0x4d1aaf*/
              BuildingClass::Draw_0((int)v6, v87, (int *)viewRect); /*0x4d1ab5*/
              TacticalClass::DrawBuildingPlacement((int)v6, v87, (int *)viewRect); /*0x4d1ac2*/
              *(unsigned int *)&v6->__pad_28[28] = v7; /*0x4d1ac7*/
              v6->powerup = powerup; /*0x4d1ace*/
              break; /*0x4d1ad4*/
            case 0x1D: /*0x4d19bd*/
              vtable1 = (char *)viewRect->vfptr1; /*0x4d220d*/
              v44 = viewRect->vfptr; /*0x4d2210*/
              v45 = g_TacticalClass_Instance[45]; /*0x4d2218*/
              v90 = g_TacticalClass_Instance[44]; /*0x4d221e*/
              v46 = *(unsigned int *)(v4 + 68); /*0x4d2225*/
              v45 = v45; /*0x4d2228*/
              v47 = *(unsigned int *)(v4 + 64) - *(unsigned int *)&v90 + DSurface_ViewBounds.field_0 + 30; /*0x4d2249*/
              v98[1] = (char *)DSurface_ViewBounds.field_4 + v46 - *(unsigned int *)&v45 - vtable1; /*0x4d225f*/
              v48 = *(unsigned int *)(v4 + 84); /*0x4d2266*/
              v98[0] = v47 - (unsigned int)v44; /*0x4d2269*/
              v49 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[56] + 4 * v48) + 156))(*(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[56] + 4 * v48)); /*0x4d227b*/
              if ( v49 ) /*0x4d227f*/
              {
                v104[0] = *(unsigned int *)(v4 + 52); /*0x4d228c*/
                v104[1] = *(unsigned int *)(v4 + 56); /*0x4d229e*/
                v104[2] = *(unsigned int *)(v4 + 60); /*0x4d22a8*/
                v50 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v104); /*0x4d22b4*/
                v84 = *(unsigned int *)(v4 + 52); /*0x4d22bd*/
                v51 = *(unsigned int *)(v4 + 60); /*0x4d22c4*/
                v85 = *(unsigned int *)(v4 + 56); /*0x4d22c7*/
                v50 = v50; /*0x4d22cd*/
                v56 = *(int16_t *)v50->CellClass_field_10C; /*0x4d22dd*/
                v53 = -ZCoordToScreenY(v51); /*0x4d22f4*/
                DrawToSurfaceSHP( /*0x4d230c*/
                  (int)g_DSurface_Hidden_2,
                  *(unsigned int *)&v50->__pad_28[12],
                  v49,
                  *(unsigned int *)(v4 + 88),
                  v98,
                  (int *)viewRect,
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
              v10 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v107); /*0x4d1b16*/
              v67 = *(unsigned int *)(*(unsigned int *)(v4 + 96) + 4); /*0x4d1b1e*/
              v11 = (*(int (__thiscall **)(int))(v63->Armor)(v63); /*0x4d1b2e*/
              v103[0] = *v9; /*0x4d1b34*/
              v103[1] = v9[1]; /*0x4d1b49*/
              v103[2] = v9[2]; /*0x4d1b5b*/
              Coord::To_Screen((Coord *)g_TacticalClass_Instance, v103, &v81); /*0x4d1b62*/
              v12 = (char *)DSurface_ViewBounds.field_4 - (char *)viewRect->vfptr1; /*0x4d1b79*/
              v13 = *v9; /*0x4d1b81*/
              v81 += DSurface_ViewBounds.field_0 - (unsigned int)viewRect->vfptr; /*0x4d1b83*/
              v14 = v12 + v14; /*0x4d1b8b*/
              v85 = v9[1]; /*0x4d1b90*/
              v15 = v9[2]; /*0x4d1b94*/
              v14 = v14; /*0x4d1b97*/
              v84 = v13; /*0x4d1b9b*/
              v16 = -ZCoordToScreenY(v15); /*0x4d1ba9*/
              if ( !*(unsigned int *)&v10->__pad_28[12] ) /*0x4d1ba6*/
                TacticalClass::SetView(v10->mapCoords, 0, 0x10000, 0, 1000, 1000, 1000); /*0x4d1bc9*/
              DrawToSurfaceSHP( /*0x4d1c00*/
                (int)g_DSurface_Hidden_2,
                *(unsigned int *)&v10->__pad_28[12],
                v11,
                v67,
                &v81,
                (int *)viewRect,
                19968,
                0,
                v16 - 4,
                2,
                *(int16_t *)v10->CellClass_field_10C,
                0,
                0,
                0,
                0,
                0);
              if ( byte_822CF1 ) /*0x4d1c0c*/
                DrawToSurfaceSHP( /*0x4d1c45*/
                  (int)g_DSurface_Hidden_2,
                  *(unsigned int *)&v10->__pad_28[12],
                  v11,
                  v67 + *(int16_t *)(v11 + 6) / 2,
                  &v81,
                  (int *)viewRect,
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
      result = g_MissionState; /*0x4d2311*/
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
    operator delete((void *)(Block)); /*0x658790*/
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

// 0x550260
int TacticalClass::RenderCells()
{
  double v1; // st7
  int result; // eax
  int field24; // eax
  unsigned int v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // ebp
  int v11; // edx
  int v12; // eax
  uint8_t v13; // dl
  uint8_t field40_high; // al
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  int v22; // esi
  int v23; // ecx
  int v24; // ebx
  int v25; // eax
  int v26; // ebx
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // esi
  int v31; // esi
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  int v37; // esi
  double v38; // [esp+34h] [ebp-60h]
  double v39; // [esp+3Ch] [ebp-58h]
  char v40; // [esp+57h] [ebp-3Dh]
  int16_t v41; // [esp+58h] [ebp-3Ch] BYREF
  char v42; // [esp+5Ah] [ebp-3Ah]
  int TacticalClass_field_4C; // [esp+5Ch] [ebp-38h]
  int v44; // [esp+60h] [ebp-34h]
  int v45; // [esp+64h] [ebp-30h]
  unsigned int field30; // [esp+68h] [ebp-2Ch]
  int v47; // [esp+6Ch] [ebp-28h]
  int v48; // [esp+70h] [ebp-24h]
  int v49; // [esp+74h] [ebp-20h] BYREF
  int v50; // [esp+78h] [ebp-1Ch]
  int v51; // [esp+7Ch] [ebp-18h] BYREF
  int v52; // [esp+80h] [ebp-14h]
  int v53; // [esp+84h] [ebp-10h] BYREF
  int v54; // [esp+88h] [ebp-Ch]
  int v55; // [esp+8Ch] [ebp-8h] BYREF
  int v56; // [esp+90h] [ebp-4h]

  _EBX = this; /*0x550264*/
  result = this->TacticalClass_field_4C; /*0x550268*/
  if ( result > 0 )
  {
    if ( (*((unsigned char *)&(this->NeedsSaveOrLink))) )
    {
      return PrepareTacticalClassCellTransform((int *)this); /*0x55027b*/
    }
    else
    {
      if ( (g_MissionQueueFrame.random[43] & 1) == 0 ) /*0x55028f*/
      {
        g_MissionQueueFrame.altNextScenario[16] = -1; /*0x55029c*/
        g_MissionQueueFrame.altNextScenario[15] = 0; /*0x5502a4*/
        g_MissionQueueFrame.altNextScenario[18] = 0; /*0x5502ae*/
        g_MissionQueueFrame.altNextScenario[17] = 1; /*0x5502b7*/
        g_MissionQueueFrame.altNextScenario[20] = -1; /*0x5502be*/
        g_MissionQueueFrame.altNextScenario[19] = 0; /*0x5502c9*/
        g_MissionQueueFrame.altNextScenario[21] = 0; /*0x5502ce*/
        g_MissionQueueFrame.altNextScenario[23] = 1; /*0x5502d5*/
        g_MissionQueueFrame.altNextScenario[25] = 0; /*0x5502dc*/
        g_MissionQueueFrame.altNextScenario[22] = 1; /*0x5502e4*/
        g_MissionQueueFrame.altNextScenario[27] = -1; /*0x5502ea*/
        g_MissionQueueFrame.altNextScenario[24] = 0; /*0x5502f6*/
        g_MissionQueueFrame.altNextScenario[29] = 1; /*0x5502fc*/
        g_MissionQueueFrame.altNextScenario[26] = 1; /*0x550309*/
        g_MissionQueueFrame.altNextScenario[31] = -1; /*0x55030f*/
        g_MissionQueueFrame.altNextScenario[28] = 0; /*0x550318*/
        g_MissionQueueFrame.altNextScenario[30] = 0; /*0x55031e*/
        g_MissionQueueFrame.altNextScenario[32] = 0; /*0x550324*/
        g_MissionQueueFrame.altNextScenario[33] = 0; /*0x55032a*/
        g_MissionQueueFrame.altNextScenario[35] = 0; /*0x55032f*/
        g_MissionQueueFrame.altNextScenario[34] = 1; /*0x55033e*/
        g_MissionQueueFrame.altNextScenario[37] = 1; /*0x550344*/
        g_MissionQueueFrame.altNextScenario[36] = -1; /*0x55034e*/
        g_MissionQueueFrame.altNextScenario[39] = 0; /*0x550354*/
        g_MissionQueueFrame.altNextScenario[38] = 0; /*0x55035e*/
        g_MissionQueueFrame.altNextScenario[41] = -1; /*0x550364*/
        g_MissionQueueFrame.altNextScenario[40] = -1; /*0x55036f*/
        g_MissionQueueFrame.altNextScenario[43] = -1; /*0x550375*/
        (*((unsigned char *)&(g_MissionQueueFrame.random[43]))) |= 1u; /*0x550389*/
        g_MissionQueueFrame.altNextScenario[42] = 0; /*0x55038f*/
        g_MissionQueueFrame.altNextScenario[44] = 0; /*0x550395*/
        g_MissionQueueFrame.altNextScenario[45] = 1; /*0x55039b*/
        g_MissionQueueFrame.altNextScenario[46] = 0; /*0x5503a0*/
        result = atexit(nullsub_21); /*0x5503a6*/
      }
      (*((unsigned char *)&(result))) = (((unsigned char *)&(_EBX->field50))[1]); /*0x5503ae*/
      if ( !(unsigned char)result )
      {
        field24 = _EBX->field24; /*0x5503bc*/
        _EDI = &_EBX->field30; /*0x5503bf*/
        _EBP = &_EBX->field24; /*0x5503c2*/
        field30 = _EBX->field30; /*0x5503c5*/
        v45 = field24; /*0x5503c9*/
        __asm { fild [esp+50h+var_2C] } /*0x5503cd*/
        __asm
        {
          fisub [esp+60h+var_30]
          fstp [esp+60h+var_58]; double
          fild dword ptr [ebp+4]
          fisub dword ptr [edi+4]
          fstp [esp+60h+var_60]; double
        }
        Math::CalcAngle(v38, v39); /*0x5503e8*/
        __asm { fsub ds:dbl_7E2820 } /*0x5503ed*/
        __asm { fmul ds:dbl_7E2818 }
        (*((unsigned short *)&(field30))) = Math::RoundToInt(v1); /*0x550401*/
        v7 = (((field30 >> 12) + 1) >> 1) & 7; /*0x55041c*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, &_EBX->field24, &v55); /*0x55041f*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, &_EBX->field30, &v53); /*0x550430*/
        v8 = _EBX->TacticalClass_field_3C - ZCoordToScreenY(_EBX->TacticalClass_field_2C) - 2; /*0x550445*/
        v9 = ZCoordToScreenY(_EBX->field38); /*0x550448*/
        v41 = 0; /*0x550452*/
        v10 = -2 - v9; /*0x550457*/
        (*((unsigned char *)&(v9))) = _EBX->field44; /*0x550459*/
        v42 = 0; /*0x550463*/
        field30 = 0; /*0x550468*/
        v40 = 1; /*0x550470*/
        if ( (unsigned char)v9 || (((unsigned char *)&(_EBX->field44))[1]) || (((unsigned char *)&(_EBX->field44))[2]) )
        {
          field30 = Random::Range(&Randomizer_Global, -(*(((unsigned char *)&(_EBX->field44)) + (sizeof(_EBX->field44) - 1))), (*(((unsigned char *)&(_EBX->field44)) + (sizeof(_EBX->field44) - 1)))); /*0x5504a6*/
          TacticalClass_field_4C = Random::Range(&Randomizer_Global, -(*((unsigned char *)&(_EBX->field48))), (*((unsigned char *)&(_EBX->field48)))); /*0x5504bf*/
          *(float *)&v44 = COERCE_FLOAT(Random::Range(&Randomizer_Global, -(((unsigned char *)&(_EBX->field48))[1]), (((unsigned char *)&(_EBX->field48))[1]))); /*0x5504d8*/
          v11 = (int)((*((unsigned char *)&(_EBX->field44))) + field30) < 0 ? 0 : (*((unsigned char *)&(_EBX->field44))) + field30;
          if ( v11 > 255 ) /*0x5504f6*/
            v11 = 255; /*0x5504f8*/
          TacticalClass_field_4C = (((unsigned char *)&(_EBX->field44))[1]) + TacticalClass_field_4C < 0
                                 ? 0
                                 : (((unsigned char *)&(_EBX->field44))[1]) + TacticalClass_field_4C;
          if ( TacticalClass_field_4C > 255 ) /*0x55051c*/
            TacticalClass_field_4C = 255; /*0x55051e*/
          v44 = (((unsigned char *)&(_EBX->field44))[2]) + v44 < 0 ? 0 : (((unsigned char *)&(_EBX->field44))[2]) + v44;
          v12 = v44; /*0x55053a*/
          if ( v44 > 255 ) /*0x550545*/
          {
            v12 = 255; /*0x550547*/
            v44 = 255; /*0x55054c*/
          }
          (*((unsigned char *)&(v41))) = v11; /*0x550556*/
          v45 = (TacticalClass_field_4C >> g_BitMask_Blue << g_BitMask_Green) /*0x550584*/
              | (v12 >> g_BitMask_Red << g_BitShift_Blue);
          (*(((unsigned char *)&(v41)) + (sizeof(v41) - 1))) = TacticalClass_field_4C; /*0x55059a*/
          field30 = (v11 >> g_BitShift_Green_0 << g_BitShift_Red) | v45; /*0x5505aa*/
          v42 = v44; /*0x5505ae*/
        }
        else
        {
          v40 = 0; /*0x550485*/
        }
        v13 = (((unsigned char *)&(_EBX->field40))[2]); /*0x5505b2*/
        v45 = (int)&_EBX->field40 + 1; /*0x5505b8*/
        *(float *)&v44 = 1.0; /*0x5505bc*/
        (*((unsigned char *)&(v51))) = (((unsigned char *)&(_EBX->field40))[1]); /*0x5505cd*/
        (*((unsigned char *)&(v49))) = (unsigned char)v51 != 0; /*0x5505d1*/
        (*((unsigned char *)&(v48))) = v13 != 0; /*0x5505d8*/
        field40_high = (*(((unsigned char *)&(_EBX->field40)) + (sizeof(_EBX->field40) - 1))); /*0x5505dc*/
        (*((unsigned char *)&(v47))) = field40_high != 0; /*0x5505e4*/
        if ( (((unsigned char *)&(_EBX->field50))[2]) ) /*0x5505e8*/
        {
          __asm /*0x5505f2*/
          {
            fld dword ptr [ebx+54h]
            fsub dword ptr [ebx+58h]
          }
          TacticalClass_field_4C = _EBX->TacticalClass_field_4C; /*0x5505f8*/
          v44 = TacticalClass_field_4C - (unsigned int)_EBX->vfptr; /*0x5505fe*/
          __asm /*0x550602*/
          {
            fimul [esp+50h+var_34]
            fidiv [esp+50h+var_38]
            fadd dword ptr [ebx+58h]
            fstp [esp+50h+var_34]
          }
        }
        if ( stru_A8EB00.vfptr[30] ) /*0x550619*/
        {
          if ( (*((unsigned char *)&(_EBX->field50))) ) /*0x55061f*/
          {
            result = (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int, int, int, unsigned int, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x550655*/
                       g_DSurface_Hidden_2,
                       &DSurface_ViewBounds,
                       &v55,
                       &v53,
                       v45,
                       v8,
                       v10,
                       0,
                       1,
                       1,
                       1,
                       v44);
            (*((unsigned char *)&(result))) = v40; /*0x550658*/
            if ( v40 ) /*0x55065e*/
            {
              v15 = 4 * v7; /*0x55066c*/
              v16 = g_MissionQueueFrame.altNextScenario[v15 + 16]; /*0x55067c*/
              v51 = v53 + g_MissionQueueFrame.altNextScenario[v15 + 15]; /*0x550688*/
              v17 = v55 + g_MissionQueueFrame.altNextScenario[v15 + 15]; /*0x550698*/
              v52 = v54 + v16; /*0x55069e*/
              v18 = g_MissionQueueFrame.altNextScenario[v15 + 16]; /*0x5506a2*/
              v49 = v17; /*0x5506a8*/
              v50 = v56 + v18; /*0x5506bb*/
              (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int16_t *, int, int, unsigned int, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x5506d2*/
                g_DSurface_Hidden_2,
                &DSurface_ViewBounds,
                &v49,
                &v51,
                &v41,
                v8,
                v10,
                0,
                1,
                1,
                1,
                1065353216);
              v19 = g_MissionQueueFrame.altNextScenario[v15 + 18]; /*0x5506e9*/
              v51 = v53 + g_MissionQueueFrame.altNextScenario[v15 + 17]; /*0x5506ef*/
              v20 = g_MissionQueueFrame.altNextScenario[v15 + 17]; /*0x5506f3*/
              v21 = g_MissionQueueFrame.altNextScenario[v15 + 18]; /*0x5506f9*/
              v49 = v55 + v20; /*0x55070e*/
              v52 = v54 + v19; /*0x550719*/
              v50 = v56 + v21; /*0x550734*/
              return (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int16_t *, int, int, unsigned int, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x550740*/
                       g_DSurface_Hidden_2,
                       &DSurface_ViewBounds,
                       &v49,
                       &v51,
                       &v41,
                       v8,
                       v10,
                       0,
                       1,
                       1,
                       1,
                       1065353216);
            }
          }
          else if ( v40 ) /*0x550751*/
          {
            v22 = 4 * v7; /*0x55075f*/
            v23 = g_MissionQueueFrame.altNextScenario[v22 + 16]; /*0x55076a*/
            v24 = g_MissionQueueFrame.altNextScenario[v22 + 15]; /*0x550772*/
            v51 = v53 + v24; /*0x550778*/
            v25 = v24 + v55; /*0x550786*/
            v26 = v44; /*0x550788*/
            v52 = v54 + v23; /*0x55078c*/
            v27 = g_MissionQueueFrame.altNextScenario[v22 + 16]; /*0x550790*/
            v49 = v25; /*0x550796*/
            v50 = v56 + v27; /*0x5507a6*/
            (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int16_t *, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 64))( /*0x5507bd*/
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v49,
              &v51,
              &v41,
              v44,
              v8,
              v10);
            v28 = g_MissionQueueFrame.altNextScenario[v22 + 18]; /*0x5507d0*/
            v51 = v53 + g_MissionQueueFrame.altNextScenario[v22 + 17]; /*0x5507d6*/
            v29 = g_MissionQueueFrame.altNextScenario[v22 + 17]; /*0x5507da*/
            v30 = g_MissionQueueFrame.altNextScenario[v22 + 18]; /*0x5507e6*/
            v49 = v55 + v29; /*0x5507ef*/
            v52 = v54 + v28; /*0x5507f8*/
            v50 = v56 + v30; /*0x550813*/
            (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int16_t *, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 64))( /*0x55081f*/
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v49,
              &v51,
              &v41,
              v26,
              v8,
              v10);
            return (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 64))( /*0x550841*/
                     g_DSurface_Hidden_2,
                     &DSurface_ViewBounds,
                     &v55,
                     &v53,
                     v45,
                     v26,
                     v8,
                     v10);
          }
          else
          {
            return (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int, int, int, unsigned int, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x550880*/
                     g_DSurface_Hidden_2,
                     &DSurface_ViewBounds,
                     &v55,
                     &v53,
                     v45,
                     v8,
                     v10,
                     0,
                     v49,
                     v48,
                     v47,
                     v44);
          }
        }
        else
        {
          result = (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x5508f6*/
                     g_DSurface_Hidden_2,
                     &DSurface_ViewBounds,
                     &v55,
                     &v53,
                     ((uint8_t)v51 >> g_BitShift_Green_0 << g_BitShift_Red)
                   | (v13 >> g_BitMask_Blue << g_BitMask_Green)
                   | (field40_high >> g_BitMask_Red << g_BitShift_Blue),
                     v8,
                     v10,
                     0);
          (*((unsigned char *)&(result))) = v40; /*0x5508f9*/
          if ( v40 ) /*0x5508ff*/
          {
            v31 = 4 * v7; /*0x55090d*/
            v32 = v54 + g_MissionQueueFrame.altNextScenario[v31 + 16]; /*0x550925*/
            v51 = v53 + g_MissionQueueFrame.altNextScenario[v31 + 15]; /*0x55092b*/
            v33 = g_MissionQueueFrame.altNextScenario[v31 + 15]; /*0x55092f*/
            v52 = v32; /*0x550935*/
            v34 = g_MissionQueueFrame.altNextScenario[v31 + 16]; /*0x550939*/
            v49 = v55 + v33; /*0x550947*/
            v50 = v56 + v34; /*0x550950*/
            (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, unsigned int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x550968*/
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v49,
              &v51,
              field30,
              v8,
              v10,
              0);
            v35 = g_MissionQueueFrame.altNextScenario[v31 + 18]; /*0x55097b*/
            v51 = v53 + g_MissionQueueFrame.altNextScenario[v31 + 17]; /*0x550981*/
            v36 = g_MissionQueueFrame.altNextScenario[v31 + 17]; /*0x550985*/
            v37 = g_MissionQueueFrame.altNextScenario[v31 + 18]; /*0x55098b*/
            v52 = v54 + v35; /*0x550999*/
            v49 = v55 + v36; /*0x5509a3*/
            v50 = v56 + v37; /*0x5509bb*/
            return (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, unsigned int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x5509c7*/
                     g_DSurface_Hidden_2,
                     &DSurface_ViewBounds,
                     &v49,
                     &v51,
                     field30,
                     v8,
                     v10,
                     0);
          }
        }
      }
    }
  }
  return result; /*0x550280*/
}
// 0x6d8b30
BuildingTypeClass * * TacticalClass::CalcViewportCells()
{
  int TacticalClass_field_D64; // ecx
  int TacticalClass_field_D68; // edi
  double v4; // st7
  int v5; // eax
  float *v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  unsigned int result; // eax
  float v11[3]; // [esp+8h] [ebp-18h] BYREF
  float v12; // [esp+14h] [ebp-Ch] BYREF
  float v13; // [esp+18h] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-4h]

  v14 = 0; /*0x6d8b37*/
  TacticalClass_field_D64 = this->TacticalClass_field_D64; /*0x6d8b3f*/
  TacticalClass_field_D68 = this->TacticalClass_field_D68; /*0x6d8b45*/
  this->visibleArea[0] = TacticalClass_field_D64; /*0x6d8b4b*/
  this->visibleArea[1] = TacticalClass_field_D68; /*0x6d8b51*/
  this->visibleArea[0] = TacticalClass_field_D64 - dword_B0CE30 / 2; /*0x6d8b63*/
  (*((unsigned int *)&(v11[0]))) = this->visibleArea[0] - 60; /*0x6d8b80*/
  v4 = (double)(*((signed int *)&(v11[0]))); /*0x6d8b84*/
  v5 = TacticalClass_field_D68 - dword_B0CE34 / 2; /*0x6d8b88*/
  this->visibleArea[1] = v5; /*0x6d8b90*/
  v12 = v4; /*0x6d8b99*/
  (*((unsigned int *)&(v11[1]))) = v5 - 30; /*0x6d8b9d*/
  v13 = (float)(v5 - 30); /*0x6d8bae*/
  v6 = TransformMatrix3x4Point(v11, (float *)this->TacticalClass_field_DE4, &v12); /*0x6d8bb2*/
  v12 = *v6; /*0x6d8bb9*/
  v13 = v6[1]; /*0x6d8bc4*/
  v14 = *((unsigned int *)v6 + 2); /*0x6d8bcb*/
  (*((unsigned short *)&(v7))) = Math::RoundToInt(v12); /*0x6d8bcf*/
  v8 = v7; /*0x6d8bd8*/
  (*((unsigned short *)&(v9))) = Math::RoundToInt(v13); /*0x6d8bda*/
  this->TacticalClass_field_D80 = v8 / 256; /*0x6d8bf0*/
  this->TacticalClass_field_D84 = v9 / 256; /*0x6d8c04*/
  this->TacticalClass_field_D88 = dword_B0CE30 / 60 + 2; /*0x6d8c2a*/
  result = (unsigned int)((uint64_t)(2290649225LL * dword_B0CE34) >> 32) >> 31; /*0x6d8c3f*/
  this->TacticalClass_field_D8C = dword_B0CE34 / 15 + 4; /*0x6d8c46*/
  return result; /*0x6d8bea*/
}
// 0x483e30
int TacticalClass::SetView(int a2, int a3, int16_t a4, int16_t a5, int16_t a6, int16_t a7)
{
  int v7; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int SurfaceClassPrimary; // eax
  int16_t v13; // cx
  int16_t v14; // dx
  int16_t v15; // cx
  int16_t v16; // dx
  int result; // eax
  int16_t v18; // cx
  int64_t v19; // [esp-8h] [ebp-20h]
  int64_t v20; // [esp+4h] [ebp-14h] BYREF
  int v21; // [esp+Ch] [ebp-Ch] BYREF
  int64_t v22; // [esp+10h] [ebp-8h] BYREF

  a2 = a2; /*0x483e30*/
  if ( a2 ) /*0x483e3c*/
  {
    v9 = this->ptr_34; /*0x483e3e*/
    if ( v9 ) /*0x483e43*/
    {
      if ( byte_A8E9A0 ) /*0x483e4d*/
        --*(unsigned int *)(v9 + 404); /*0x483e4f*/
    }
    this->ptr_34 = a2; /*0x483e55*/
    ++*(unsigned int *)(a2 + 404); /*0x483e5f*/
    v10 = this->ptr_34; /*0x483e65*/
    a2 = *(unsigned int *)(v10 + 408); /*0x483e6e*/
    v20 = *(unsigned long long *)(v10 + 412); /*0x483e78*/
  LABEL_19:
    (*(((unsigned short *)&(result)) + 1)) = (*(((unsigned short *)&(a3)) + 1)); /*0x483f7a*/
    a4 = a4; /*0x483f7e*/
    a5 = a5; /*0x483f83*/
    this->u32_104 = a3; /*0x483f88*/
    (*((unsigned short *)&(result))) = a6; /*0x483f8e*/
    this->u32_108 = a4; /*0x483f93*/
    a7 = a7; /*0x483f9a*/
    this->u32_10A = a5; /*0x483f9f*/
    a2 = a2; /*0x483fa6*/
    this->u32_10C = result; /*0x483fab*/
    (*((unsigned short *)&(result))) = v20; /*0x483fb2*/
    this->u32_10E = a7; /*0x483fb7*/
    v18 = (((unsigned short *)&(v20))[2]); /*0x483fbe*/
    this->u32_110 = a2; /*0x483fc3*/
    this->u32_112 = result; /*0x483fca*/
    this->u32_114 = v18; /*0x483fd1*/
    return result; /*0x483fdc*/
  }
  if ( (this->ptr_24 || this->u32_26) /*0x483eaa*/
    && (this->ptr_24 != 0xFFFF || this->u32_26 != 0xFFFF) )
  {
    (*(((unsigned int *)&(v19)) + 1)) = (char *)&v20 + 4; /*0x483eb8*/
    (*((unsigned int *)&(v19))) = &v20; /*0x483ebd*/
    Tactical::CalculateTacticalLighting((Tactical *)this, &a3, &a4, (int *)&a5, (int *)&a6, (int *)&a7, &a2, v19); /*0x483eda*/
    if ( !this->ptr_34 ) /*0x483edf*/
      goto LABEL_17; /*0x483edf*/
    a2 = a2; /*0x483ef2*/
    v20 = v20; /*0x483efa*/
    QuantizeColorRGB(&a2, (int *)&v20, (int *)&v20 + 1); /*0x483f0b*/
    v11 = this->ptr_34; /*0x483f10*/
    if ( *(unsigned int *)(v11 + 408) != a2 || *(unsigned long long *)(v11 + 412) != v20 ) /*0x483f2d*/
    {
      if ( byte_A8E9A0 ) /*0x483f45*/
        --*(unsigned int *)(v11 + 404); /*0x483f47*/
      this->ptr_34 = 0; /*0x483f4d*/
    }
    if ( !this->ptr_34 ) /*0x483f54*/
    {
  LABEL_17:
      SurfaceClassPrimary = CreateSurfaceClassPrimary(a2, v20, (*((signed int *)(((unsigned char *)&(v20)) + 4)))); /*0x483f68*/
      this->ptr_34 = SurfaceClassPrimary; /*0x483f6f*/
      if ( SurfaceClassPrimary ) /*0x483f72*/
        ++*(unsigned int *)(SurfaceClassPrimary + 404); /*0x483f74*/
    }
    goto LABEL_19; /*0x483f74*/
  }
  result = CreateSurfaceClassPrimary(1000, 1000, 1000); /*0x483fea*/
  this->ptr_34 = result; /*0x483ff1*/
  if ( result ) /*0x483ff4*/
    ++*(unsigned int *)(result + 404); /*0x483ff6*/
  this->u32_10A = 1000; /*0x483ffc*/
  this->u32_10C = 1000; /*0x484003*/
  this->u32_10E = 1000; /*0x48400a*/
  this->u32_110 = 1000; /*0x484011*/
  this->u32_112 = 1000; /*0x484018*/
  this->u32_114 = 1000; /*0x48401f*/
  this->u32_104 = 0x10000; /*0x484026*/
  this->u32_108 = 0; /*0x484030*/
  return result; /*0x483fd8*/
}
// 0x4a8960
AbstractClass * * TacticalClass::SetViewDimensions(int width, int height)
{
  Stream *v1; // esi
  BSurface *v2; // eax
  Stream *v3; // eax
  void *v4; // esi
  BSurface *v5; // eax
  int v6; // edx
  int v8; // esi
  SidebarClass *v9; // [esp+0h] [ebp-28h]
  int v10[6]; // [esp+Ch] [ebp-1Ch] BYREF
  char v11; // [esp+24h] [ebp-4h]

  Debug::Log(); /*0x4a897e*/
  DSurface_ViewBounds.field_0 = (int)this->DisplayClass_field_0x0; /*0x4a8987*/
  DSurface_ViewBounds.field_4 = this->ptr_4; /*0x4a8990*/
  *(unsigned int *)DSurface_ViewBounds.__pad_8 = *(unsigned int *)this->__pad_8; /*0x4a8999*/
  *(unsigned int *)&DSurface_ViewBounds.__pad_8[4] = this->DisplayClass_field_0xC[0]; /*0x4a89a1*/
  if ( g_TacticalClass_Instance ) /*0x4a89b2*/
  {
    TacticalClass::SetViewportPosition((int)g_TacticalClass_Instance, &DSurface_ViewBounds.field_0); /*0x4a89bd*/
    (*(void (__thiscall **)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x4a89ca*/
    if ( g_ZBufferDescriptor ) /*0x4a89d3*/
    {
      Debug::Log(); /*0x4a89da*/
      v1 = g_ZBufferDescriptor; /*0x4a89df*/
      if ( g_ZBufferDescriptor ) /*0x4a89ea*/
      {
        Stream::GetField(g_ZBufferDescriptor); /*0x4a89ee*/
        operator delete((void *)(v1)); /*0x4a89f4*/
      }
      g_ZBufferDescriptor = 0; /*0x4a89fc*/
    }
    v2 = (BSurface *)operator new(0x30u); /*0x4a8a04*/
    if ( v2 ) /*0x4a8a0e*/
      v3 = (Stream *)BSurface::ConstructEx( /*0x4a8a3a*/
                       v2,
                       DSurface_ViewBounds.field_0,
                       (int)DSurface_ViewBounds.field_4,
                       *(int *)DSurface_ViewBounds.__pad_8,
                       *(int *)&DSurface_ViewBounds.__pad_8[4]);
    else
      v3 = 0; /*0x4a8a41*/
    g_ZBufferDescriptor = v3; /*0x4a8a43*/
    v3[1].Stream_field_10 = 0x8000; /*0x4a8a48*/
    Debug::Log(); /*0x4a8a61*/
    if ( *(unsigned int *)&stru_87E790.__pad_D8[60] ) /*0x4a8a70*/
    {
      Debug::Log(); /*0x4a8a77*/
      v4 = *(void **)&stru_87E790.__pad_D8[60]; /*0x4a8a7c*/
      if ( *(unsigned int *)&stru_87E790.__pad_D8[60] ) /*0x4a8a87*/
      {
        StreamObj::Release(*(StreamObj **)&stru_87E790.__pad_D8[60]); /*0x4a8a8b*/
        operator delete((void *)(v4)); /*0x4a8a91*/
      }
      *(unsigned int *)&stru_87E790.__pad_D8[60] = 0; /*0x4a8a99*/
    }
    v5 = (BSurface *)operator new(0x30u); /*0x4a8aa1*/
    if ( v5 ) /*0x4a8aab*/
      *(unsigned int *)&stru_87E790.__pad_D8[60] = BSurface::Construct( /*0x4a8adc*/
                                               v5,
                                               DSurface_ViewBounds.field_0,
                                               (int)DSurface_ViewBounds.field_4,
                                               *(int *)DSurface_ViewBounds.__pad_8,
                                               *(int *)&DSurface_ViewBounds.__pad_8[4]);
    else
      *(unsigned int *)&stru_87E790.__pad_D8[60] = 0; /*0x4a8ae3*/
    Debug::Log(); /*0x4a8afb*/
    (*(void (__thiscall **)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4a8b0b*/
  }
  SidebarClass::LoadResources(v9); /*0x4a8b13*/
  v6 = DSurface_ViewBounds.field_0; /*0x4a8b1e*/
  v7 = DSurface_ViewBounds.field_4; /*0x4a8b24*/
  v8 = *(unsigned int *)DSurface_ViewBounds.__pad_8; /*0x4a8b29*/
  stru_8A06F8.Width = DSurface_ViewBounds.field_0; /*0x4a8b37*/
  stru_8A06F8.Height = (int)DSurface_ViewBounds.field_4; /*0x4a8b3d*/
  *(unsigned int *)&stru_8A06F8.Visible = *(unsigned int *)DSurface_ViewBounds.__pad_8; /*0x4a8b42*/
  stru_8A06F8.ID = *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]; /*0x4a8b48*/
  if ( *(unsigned int *)&stru_88732C.__pad_1C[32] ) /*0x4a8b4e*/
  {
    v11 = 0; /*0x4a8b55*/
    v10[0] = 500; /*0x4a8b59*/
    v10[5] = 0; /*0x4a8b61*/
    v10[1] = DSurface_ViewBounds.field_0; /*0x4a8b65*/
    v10[2] = (int)DSurface_ViewBounds.field_4; /*0x4a8b69*/
    v10[3] = *(unsigned int *)DSurface_ViewBounds.__pad_8; /*0x4a8b6d*/
    v10[4] = *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]; /*0x4a8b71*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 500); /*0x4a8b75*/
    CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)v10); /*0x4a8b85*/
    v7 = DSurface_ViewBounds.field_4; /*0x4a8b8a*/
    v6 = DSurface_ViewBounds.field_0; /*0x4a8b8f*/
    v8 = *(unsigned int *)DSurface_ViewBounds.__pad_8; /*0x4a8b95*/
  }
  MessageListClass::Init( /*0x4a8bb8*/
    (MessageListClass *)&stru_A8BB1C.__pad_87[189],
    v6 + 3,
    (int)v7,
    6,
    98,
    14,
    -1,
    -1,
    0,
    20,
    98,
    v8 - 6);
  TacticalClass::processInput((TacticalClass *)&stru_A8BB1C.__pad_87[189], *(int *)DSurface_ViewBounds.__pad_8); /*0x4a8bc9*/
  Debug::Log(); /*0x4a8bd3*/
}
// 0x537620
int TacticalClass::InitView()
{
  int v1; // eax
  unsigned int *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = ((*((signed short *)&(dword_A8B230[374].vfptr1))) << 8) + 128; /*0x537648*/
  v4[0] = ((*((signed short *)(((unsigned char *)&(dword_A8B230[374].vfptr)) + 2))) << 8) + 128; /*0x53764d*/
  v4[1] = v1; /*0x537656*/
  GroundHeight = 0; /*0x53765a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53766d*/
  Tactical::SetTacticalPosition((TacticalClass *)g_TacticalClass_Instance, v4); /*0x537676*/
  result = (unsigned int *)dword_880990; /*0x53767b*/
  if ( dword_880990 ) /*0x537682*/
    return Tactical::MouseMove((Tactical *)&dword_87F7E8, &v3, &word_A8F2F8); /*0x537693*/
  return result; /*0x537698*/
}
// 0x4a91b0
    return Tactical::MouseMove((Tactical *)&dword_87F7E8, &v3, &word_A8F2F8); /*0x537693*/
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

      v3 = (unsigned int *)*word_A8F2F8; /*0x4a91ba*/
      v4 = (uint16_t)*word_A8F2F8 == *(unsigned short *)&stru_8A0390.bombVisible; /*0x4a91bd*/
      word_A8F2F8 = (unsigned int *)*word_A8F2F8; /*0x4a91c6*/
      if ( v4 && (*(((unsigned short *)&(word_A8F2F8)) + 1)) == *(unsigned short *)&stru_8A0390.alignmentPadding69[1] ) /*0x4a91dc*/
      {
        v6 = (int *)(*(int (__thiscall **)(void *, int *))(*(unsigned int *)stru_887598.lineTrailer + 52))( /*0x4a91ef*/
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
          v14 = (unsigned int *)(*(int (__thiscall **)(void *, unsigned char *))(*(unsigned int *)stru_887598.lineTrailer + 52))( /*0x4a9284*/
                            stru_887598.lineTrailer,
                            v31);
          v15 = v14[1]; /*0x4a9292*/
          v29 = *v14 - v7; /*0x4a9295*/
          v30 = v15 - (unsigned int)v8; /*0x4a929f*/
          v3 = (unsigned int *)*Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &word_A8F2F8, &v29); /*0x4a92af*/
        }
        else
        {
          v12 = (int *)(*(int (__thiscall **)(void *, unsigned char *))(*(unsigned int *)stru_887598.lineTrailer + 52))( /*0x4a9232*/
                         stru_887598.lineTrailer,
                         v31);
          v29 = *v12; /*0x4a9237*/
          v30 = v12[1]; /*0x4a924d*/
          v13 = (unsigned int *)*TacticalClass::PixelToCellCheck((RadarClass *)&v28, &v29); /*0x4a9256*/
          v28 = v13; /*0x4a925f*/
          if ( v13 == *(unsigned int **)&stru_8A0390.bombVisible ) /*0x4a9263*/
            goto LABEL_11; /*0x4a9263*/
          v3 = v13; /*0x4a9273*/
        }
        word_A8F2F8 = v3; /*0x4a92b1*/
      }
      LABEL_11:
      v16 = *((unsigned int *)dword_87F7E8 + 1119); /*0x4a92b5*/
      if ( v16 ) /*0x4a92bd*/
      {
        if ( !((unsigned int *)&stru_A8EB00)[391] ) /*0x4a92e3*/
        {
          v19 = (*(((unsigned short *)&(word_A8F2F8)) + 1)) + *((unsigned short *)dword_87F7E8 + 2237); /*0x4a92f3*/
          (*((unsigned short *)&(v28))) = (unsigned short)v3 + *((unsigned short *)dword_87F7E8 + 2236); /*0x4a92fb*/
          (*(((unsigned short *)&(v28)) + 1)) = v19; /*0x4a9301*/
          v20 = UI_Move(&v29, &v28, v16); /*0x4a931e*/
          v21 = v20[1] - *((unsigned short *)dword_87F7E8 + 2237); /*0x4a9331*/
          (*((unsigned short *)&(word_A8F2F8))) = *v20 - *((unsigned short *)dword_87F7E8 + 2236); /*0x4a9338*/
          (*(((unsigned short *)&(word_A8F2F8)) + 1)) = v21; /*0x4a933d*/
          v3 = word_A8F2F8; /*0x4a9342*/
        }
        v4 = (unsigned short)v3 == *((unsigned short *)dword_87F7E8 + 2234); /*0x4a9346*/
        word_A8F2F8 = v3; /*0x4a934d*/
        if ( v4 && (*(((unsigned short *)&(v3)) + 1)) == *((unsigned short *)dword_87F7E8 + 2235) ) /*0x4a935f*/
        {
          *v3 = v3; /*0x4a9367*/
          return v3; /*0x4a9361*/
        }
        else
        {
          v22 = *((unsigned int *)dword_87F7E8 + 1117); /*0x4a9377*/
          if ( *((unsigned int *)dword_87F7E8 + 1119) ) /*0x4a9371*/
          {
            if ( v3 != *((unsigned int **)dword_87F7E8 + 1117) /*0x4a93b0*/
              && (*((unsigned short *)dword_87F7E8 + 2234) != *(unsigned short *)&stru_8A0390.bombVisible
               || *((unsigned short *)dword_87F7E8 + 2235) != *(unsigned short *)&stru_8A0390.alignmentPadding69[1]) )
            {
              v23 = *((unsigned short *)dword_87F7E8 + 2235) + *((unsigned short *)dword_87F7E8 + 2237); /*0x4a93c7*/
              (*((unsigned short *)&(word_A8F2F8))) = *((unsigned short *)dword_87F7E8 + 2234) + *((unsigned short *)dword_87F7E8 + 2236); /*0x4a93d0*/
              (*(((unsigned short *)&(word_A8F2F8)) + 1)) = v23; /*0x4a93d5*/
              MapClass::SetCellFlagsAlongPath((MapClass *)dword_87F7E8, &word_A8F2F8, 0); /*0x4a93e9*/
            }
            if ( v3 != *(unsigned int **)&stru_8A0390.bombVisible ) /*0x4a93f5*/
            {
              v24 = *((unsigned short *)dword_87F7E8 + 2236) + (unsigned short)v3; /*0x4a940a*/
              (*(((unsigned short *)&(word_A8F2F8)) + 1)) = (*(((unsigned short *)&(v3)) + 1)) + *((unsigned short *)dword_87F7E8 + 2237); /*0x4a9414*/
              (*((unsigned short *)&(word_A8F2F8))) = v24; /*0x4a941b*/
              MapClass::SetCellFlagsAlongPath((MapClass *)dword_87F7E8, &word_A8F2F8, (unsigned short *)1); /*0x4a942f*/
            }
          }
          *((unsigned int *)dword_87F7E8 + 1117) = v3; /*0x4a9434*/
          v25 = *((unsigned short *)dword_87F7E8 + 2236) + (unsigned short)v3; /*0x4a944b*/
          (*(((unsigned short *)&(word_A8F2F8)) + 1)) = *((unsigned short *)dword_87F7E8 + 2235) + *((unsigned short *)dword_87F7E8 + 2237); /*0x4a9452*/
          v26 = *((unsigned int *)dword_87F7E8 + 1119); /*0x4a9457*/
          (*((unsigned short *)&(word_A8F2F8))) = v25; /*0x4a945d*/
          *((unsigned char *)dword_87F7E8 + 4480) = GetBuildingPlacement( /*0x4a9485*/
                                      *((unsigned int **)dword_87F7E8 + 1130),
                                      *((unsigned int *)dword_87F7E8 + 1131),
                                      v26,
                                      (int16_t *)&word_A8F2F8);
          v27 = *((unsigned short *)dword_87F7E8 + 2237) + *((unsigned short *)dword_87F7E8 + 2235); /*0x4a94a0*/
          (*((unsigned short *)&(word_A8F2F8))) = *((unsigned short *)dword_87F7E8 + 2234) + *((unsigned short *)dword_87F7E8 + 2236); /*0x4a94a7*/
          (*(((unsigned short *)&(word_A8F2F8)) + 1)) = v27; /*0x4a94b0*/
          *((unsigned char *)dword_87F7E8 + 4481) = ProcessDataBuildingTypeClass( /*0x4a94da*/
                                      *((unsigned int **)dword_87F7E8 + 1130),
                                      *((unsigned int *)dword_87F7E8 + 1131),
                                      *((unsigned int *)dword_87F7E8 + 1119),
                                      (int16_t *)&word_A8F2F8);
          *v3 = v22; /*0x4a94e6*/
          return v3; /*0x4a94e0*/
        }
      }
      else
      {
        v17 = *((unsigned int *)dword_87F7E8 + 1117); /*0x4a92bf*/
        *((unsigned int *)dword_87F7E8 + 1117) = v3; /*0x4a92c9*/
        *v3 = v17; /*0x4a92d2*/
        return v3; /*0x4a92c5*/
      }
    }
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int result; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h]

  dword_B0CE28 = *y; /*0x6d5f6c*/
  dword_B0CE2C = y[1]; /*0x6d5f75*/
  dword_B0CE30 = y[2]; /*0x6d5f7e*/
  dword_B0CE34 = y[3]; /*0x6d5f87*/
  v3 = *(unsigned int *)(x + 3444); /*0x6d5f93*/
  v8 = *(unsigned int *)(x + 3448); /*0x6d5f9d*/
  v7 = v3; /*0x6d5fa4*/
  if ( !ClampCoordMap(&v7) || ((unsigned int *)&stru_A8EB00)[391] ) /*0x6d5fb8*/
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
  result = TacticalClass::CalcViewportCells((TacticalClass *)x); /*0x6d5fea*/
  *(unsigned char *)(x + 3453) = 1; /*0x6d5fef*/
  return result; /*0x6d5ff6*/
// 0x6d2540
AbstractClass * * TacticalClass::ScrollViewport(int dx, int dy)
{
  int v1; // eax
  char v2; // bl
  char *v4; // ebp
  double v5; // st7
  char *v6; // edi
  int *v7; // eax
  double v8; // st7
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  signed int v12; // edi
  signed int v13; // eax
  int v14; // edi
  AbstractClass *Ticks; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v22; // [esp+8h] [ebp-14h] BYREF
  int v23; // [esp+Ch] [ebp-10h]
  char v24; // [esp+10h] [ebp-Ch] BYREF
  int v25; // [esp+14h] [ebp-8h]

  (*((unsigned char *)&(v1))) = dword_A8D5F8; /*0x6d2540*/
  v2 = 0; /*0x6d2549*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x6d2550*/
    return v1; /*0x6d2550*/
  if ( this->Tactical_field_0xA8 != *(IUnknown **)&((unsigned int *)&stru_A8EB00)[416] ) /*0x6d2565*/
  {
    if ( ((unsigned int *)&stru_A8EB00)[376] ) /*0x6d2573*/
    {
      v4 = &this->__pad_AC[36]; /*0x6d2584*/
      if ( (*(unsigned int *)&this->__pad_AC[36] != dword_B0CE08 || *(unsigned int *)&this->__pad_AC[40] != dword_B0CE0C) /*0x6d25af*/
        && *(float *)&this->__pad_AC[44] != 0.0 )
      {
        v5 = *(float *)&this->__pad_AC[48] + *(float *)&this->__pad_AC[44]; /*0x6d25bb*/
        *(float *)&this->__pad_AC[48] = v5; /*0x6d25c1*/
        if ( v5 > 1.0 ) /*0x6d25d2*/
          *(unsigned int *)&this->__pad_AC[48] = 1065353216; /*0x6d25d4*/
        v6 = &this->__pad_AC[28]; /*0x6d25e4*/
        v7 = TacticalClass::CalcInverseAlpha( /*0x6d25f2*/
               (TacticalClass *)&v24,
               (int)&this->__pad_AC[36],
               *(float *)&this->__pad_AC[48]);
        v8 = *(float *)&this->__pad_AC[48]; /*0x6d25f7*/
        v9 = *v7; /*0x6d2603*/
        v25 = v7[1]; /*0x6d260a*/
        if ( v8 >= 1.0 ) /*0x6d2611*/
        {
          *(unsigned int *)v4 = 0; /*0x6d2617*/
          *(unsigned int *)v6 = 0; /*0x6d261a*/
          *(unsigned int *)&this->__pad_AC[40] = 0; /*0x6d261c*/
          *(unsigned int *)&this->__pad_AC[32] = 0; /*0x6d261f*/
          *(unsigned int *)&this->__pad_AC[44] = 0; /*0x6d2622*/
          *(unsigned int *)&this->__pad_AC[48] = 0; /*0x6d2628*/
        }
        v22 = v9; /*0x6d2639*/
        v23 = v25; /*0x6d263d*/
        if ( !ClampCoordMap(&v22) || ((unsigned int *)&stru_A8EB00)[391] ) /*0x6d2651*/
        {
          v11 = v25; /*0x6d265d*/
          v10 = v9; /*0x6d2661*/
        }
        else
        {
          v10 = v22; /*0x6d2653*/
          v11 = v23; /*0x6d2657*/
        }
        *(unsigned int *)&this->__pad_11F[3141] = v10; /*0x6d2663*/
        *(unsigned int *)&this->__pad_11F[3157] = v10; /*0x6d2669*/
        *(unsigned int *)&this->__pad_11F[3145] = v11; /*0x6d266f*/
        *(unsigned int *)&this->__pad_11F[3161] = v11; /*0x6d2675*/
        TacticalClass::CalcViewportCells((TacticalClass *)this); /*0x6d267d*/
        this->__pad_11F[3166] = 1; /*0x6d2682*/
        v2 = 1; /*0x6d2689*/
      }
    }
    v12 = *(unsigned int *)&this->__pad_DA8[4]; /*0x6d2691*/
    if ( this->Tactical_field_0xDA4 != (AbstractClass *)-1 ) /*0x6d269b*/
    {
      v13 = TimerGetTicks() - (unsigned int)this->Tactical_field_0xDA4; /*0x6d26a8*/
      if ( v13 >= v12 ) /*0x6d26b0*/
      {
  LABEL_20:
        v14 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 80); /*0x6d26b8*/
        Ticks = (AbstractClass *)TimerGetTicks(); /*0x6d26c5*/
        v16 = v25; /*0x6d26ca*/
        this->Tactical_field_0xDA4 = Ticks; /*0x6d26ce*/
        v17 = *(unsigned int *)&this->__pad_11F[3201]; /*0x6d26d4*/
        *(unsigned int *)this->__pad_DA8 = v16; /*0x6d26da*/
        *(unsigned int *)&this->__pad_DA8[4] = v14; /*0x6d26e1*/
        *(unsigned int *)&this->__pad_11F[3201] = v17 + 1; /*0x6d26e7*/
        goto LABEL_21; /*0x6d26e7*/
      }
      v12 -= v13; /*0x6d26b2*/
    }
    if ( v12 ) /*0x6d26b6*/
      goto LABEL_21; /*0x6d26b6*/
    goto LABEL_20; /*0x6d26b6*/
  }
  LABEL_21:
  (*((unsigned char *)&(v1))) = ((unsigned int *)&stru_A8EB00)[416]; /*0x6d26ed*/
  this->Tactical_field_0xA8 = *(IUnknown **)&((unsigned int *)&stru_A8EB00)[416]; /*0x6d26f3*/
  if ( *(unsigned int *)&this->__pad_11F[3157] != *(unsigned int *)&this->__pad_11F[3141] /*0x6d2715*/
    || (v1 = *(unsigned int *)&this->__pad_11F[3145], *(unsigned int *)&this->__pad_11F[3161] != v1) )
  {
    if ( !v2 ) /*0x6d2719*/
    {
      v18 = *(unsigned int *)&this->__pad_11F[3157]; /*0x6d2721*/
      v23 = *(unsigned int *)&this->__pad_11F[3161]; /*0x6d272b*/
      v22 = v18; /*0x6d2732*/
      if ( !ClampCoordMap(&v22) || ((unsigned int *)&stru_A8EB00)[391] ) /*0x6d2746*/
      {
        v19 = *(unsigned int *)&this->__pad_11F[3157]; /*0x6d2752*/
        v20 = *(unsigned int *)&this->__pad_11F[3161]; /*0x6d2758*/
      }
      else
      {
        v19 = v22; /*0x6d2748*/
        v20 = v23; /*0x6d274c*/
      }
      *(unsigned int *)&this->__pad_11F[3141] = v19; /*0x6d275e*/
      *(unsigned int *)&this->__pad_11F[3157] = v19; /*0x6d2764*/
      *(unsigned int *)&this->__pad_11F[3145] = v20; /*0x6d276a*/
      *(unsigned int *)&this->__pad_11F[3161] = v20; /*0x6d2770*/
      (*((unsigned char *)&(v1))) = TacticalClass::CalcViewportCells((TacticalClass *)this); /*0x6d2778*/
      this->__pad_11F[3166] = 1; /*0x6d277d*/
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
  WaypointPathClass *v4; // eax

  v1 = 0; /*0x5090a2*/
  for ( i = &this->visibleCells[75]; ; ++i ) /*0x5090a4*/
  {
    v3 = *i; /*0x5090aa*/
    if ( !*i ) /*0x5090aa*/
    {
      v4 = (WaypointPathClass *)operator new(0x40u); /*0x5090b2*/
      if ( v4 ) /*0x5090bc*/
        v3 = WaypointPathClass::Init(v4); /*0x5090c0*/
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
// 0x6d9ef0
int TacticalClass::AddToDrawQueue(ObjectClass* obj, int screen_x, int screen_y)
{
  int result; // eax
  int v5; // edx
  int v6; // eax

  result = this->floats[0]; /*0x6d9ef0*/
  if ( result == 500 /*0x6d9f29*/
    || screen_x < -32
    || screen_x > *(unsigned int *)DSurface_ViewBounds.__pad_8 + 32
    || screen_y < -32
    || screen_y > *(unsigned int *)&DSurface_ViewBounds.__pad_8[4] + 32 )
  {
    (*((unsigned char *)&(result))) = 0; /*0x6d9f75*/
  }
  else
  {
    dword_B0CEC8[3 * result] = obj; /*0x6d9f32*/
    v5 = this->visibleArea[1]; /*0x6d9f3f*/
    v6 = 3 * this->floats[0]; /*0x6d9f50*/
    dword_B0CECC[v6] = this->visibleArea[0] + screen_x; /*0x6d9f53*/
    dword_B0CED0[v6] = screen_y + v5; /*0x6d9f5b*/
    result = this->floats[0] + 1; /*0x6d9f68*/
    this->floats[0] = result; /*0x6d9f69*/
    (*((unsigned char *)&(result))) = 1; /*0x6d9f6f*/
  }
  return result; /*0x6d9f4f*/
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
    this->uniqueId = 0x2000; /*0x631e6b*/
  result = this->uniqueId & 0xFFF; /*0x631e77*/
  if ( (this->uniqueId & 0x1000) != 0 ) /*0x631e7f*/
    result = 4096 - result; /*0x631e88*/
  v4 = result * this->referenceCount; /*0x631ea5*/
  this->vfptr1 = (void *)((result * this->nextArrayIndex + (4096 - result) * this->field24) >> 12); /*0x631ea8*/
  this->vfptr2 = (void *)((v4 + (4096 - result) * this->field28) >> 12); /*0x631eb7*/
  this->vfptr3 = (void *)((result * (int)this->NeedsSaveOrLink + (4096 - result) * this->TacticalClass_field_2C) >> 12); /*0x631ecb*/
  return result; /*0x631eb3*/
}
// 0x631ee0
int TacticalClass::DecrementCounter(uint32_t delta)
{
  int result; // eax

  result = this->field38 - delta; /*0x631ee9*/
  this->field38 = result; /*0x631eeb*/
  if ( result > 0 ) /*0x631ef0*/
  {
    (*((unsigned char *)&(result))) = 0; /*0x631efe*/
  }
  else
  {
    this->field38 = 0; /*0x631ef2*/
    (*((unsigned char *)&(result))) = 1; /*0x631ef9*/
  }
  return result; /*0x631efb*/
}
// 0x653850
int TacticalClass::MouseInput(int x, int y, int buttons)
{
  int v4; // edi
  int v5; // eax
  int v6; // esi
  MapClass *RadarClass_field_0x14B0; // eax

  DisplayClass::Update((DisplayClass *)x, (int)y, (int)buttons); /*0x653860*/
  v4 = (*((unsigned char *)&(stru_A8EB00.vfptr[31]))) != 0 ? *(unsigned int *)DSurface_ViewBounds.__pad_8 : 0;
  if ( *buttons >= v4 + dword_B04A00 && *buttons < v4 + dword_B04A00 + dword_B04A08 ) /*0x653896*/
  {
    v5 = buttons[1]; /*0x653898*/
    if ( v5 >= dword_B04A04 && v5 < dword_B04A0C + dword_B04A04 ) /*0x6538a9*/
      Mouse::SetCursor((int)&stru_87F5F0.__pad_58[416], 0, 0); /*0x6538b4*/
  }
  if ( *buttons >= v4 + dword_B048C8 && *buttons < v4 + dword_B048C8 + dword_B048D0 ) /*0x6538d6*/
  {
    v6 = buttons[1]; /*0x6538d8*/
    if ( v6 >= dword_B048CC && v6 < dword_B048D4 + dword_B048CC ) /*0x6538e8*/
      Mouse::SetCursor((int)&stru_87F5F0.__pad_58[416], 0, 0); /*0x6538f3*/
  }
  if ( *y == 33010 ) /*0x653903*/
  {
    if ( !*(unsigned int *)&dword_A8B238 /*0x653933*/
      || (*(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4)
      && dword_A8B23C
      && (*((uint8_t (__thiscall **)(ObjectClass *))dword_A8B23C->vfptr + 2))(dword_A8B23C)
      && (*((uint8_t (__thiscall **)(ObjectClass *))dword_A8B23C->vfptr + 1))(dword_A8B23C) )
    {
      *(unsigned int *)&((unsigned int *)&stru_A8EB00)[444] = 9; /*0x653946*/
    }
    else
    {
      *(unsigned int *)&((unsigned int *)&stru_A8EB00)[444] = 8; /*0x65393a*/
    }
  }
  else if ( *y == 33011 ) /*0x653957*/
  {
    *(unsigned int *)&((unsigned int *)&stru_A8EB00)[444] = 1; /*0x653959*/
  }
  if ( g_AsyncIOState > 0 ) /*0x65396a*/
  {
    RadarClass_field_0x14B0 = x->RadarClass_field_0x14B0; /*0x65396c*/
    if ( RadarClass_field_0x14B0 != (MapClass *)3 && RadarClass_field_0x14B0 != (MapClass *)4 ) /*0x65397a*/
    {
      x->RadarClass_field_0x14B4 = RadarClass_field_0x14B0; /*0x653982*/
      RadarClass::SetViewMode((int *)x, 4, 0); /*0x653988*/
      *(unsigned int *)x->__pad_14B8 = 0; /*0x65398d*/
    }
  }
  if ( x->RadarClass_field_0x14B0 == (MapClass *)4 ) /*0x65399e*/
  {
    TacticalClass::ProcessChronoEffect((TacticalClass *)x); /*0x6539a2*/
  }
  else if ( !UI_Helper() ) /*0x6539ae*/
  {
    ChronoScreenEffect::DecrementCounter(); /*0x6539b7*/
  }
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
  unsigned int v31[2]; // [esp+20h] [ebp-2Ch] BYREF
  unsigned int v32[2]; // [esp+28h] [ebp-24h] BYREF
  int GroundHeight; // [esp+30h] [ebp-1Ch]
  int v34; // [esp+34h] [ebp-18h] BYREF
  int v35; // [esp+38h] [ebp-14h]
  int v36; // [esp+3Ch] [ebp-10h]
  int v37[3]; // [esp+40h] [ebp-Ch] BYREF

  if ( (a2 & 0x22) == 0 && (dword_880C98 != 3 || dword_880C94 != 1) && dword_880C98 == 1 && dword_880C94 == 1 )
  {
    if ( (a2 & 0x55) != 0 ) /*0x653a13*/
    {
      v4 = *(unsigned int *)dword_87F770; /*0x653a1a*/
      v5 = *((unsigned int *)dword_87F770 + 1); /*0x653a1c*/
    }
    else
    {
      v4 = (*(int (__thiscall **)(int))(*(unsigned int *)dword_887640 + 44))(dword_887640); /*0x653a32*/
      v5 = (*(int (__thiscall **)(int))(*(unsigned int *)dword_887640 + 48))(dword_887640); /*0x653a36*/
    }
    v6 = v4 - (byte_A8EB7C != 0 ? dword_886FA8 : 0);
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
        COMObject::ActivateThunk(this, 0, a3, 0); /*0x653ec3*/
        return 1; /*0x653edf*/
      }
      v32[0] = ((int16_t)v27 << 8) + 128; /*0x653af5*/
      v32[1] = ((*((signed short *)(((unsigned char *)&(v27)) + 2))) << 8) + 128; /*0x653afd*/
      GroundHeight = 0; /*0x653b07*/
      GroundHeight = Cell::GetGroundHeight(v32); /*0x653b14*/
      if ( !Cell::IsPassable(v32) || (v29 = 1, !g_hWnd) ) /*0x653b33*/
        v29 = 0; /*0x653b35*/
      if ( (a2 & 0x50) != 0 ) /*0x653b8b*/
      {
  LABEL_62:
        if ( (a2 & 0x11) != 0 ) /*0x653d74*/
        {
          v11 = (*(((unsigned short *)&(v27)) + 1)); /*0x653d7f*/
          v12 = v27; /*0x653d7f*/
          if ( v27 ) /*0x653d87*/
          {
            v13 = dword_886FA8 / 60 + 2; /*0x653dbc*/
            v14 = dword_87F8DC - v13 / 2 - 1; /*0x653dcb*/
            v15 = dword_886FAC / 60 + dword_87F8DC + 1; /*0x653ddf*/
            v16 = 2 * dword_87F8E0 - dword_886FAC / 60 + dword_87F8DC - 1; /*0x653de3*/
            v17 = (*((signed short *)(((unsigned char *)&(v27)) + 2))) - (int16_t)v27; /*0x653ded*/
            if ( v17 > v14 ) /*0x653df1*/
            {
              v18 = v17 - v14; /*0x653df3*/
              v11 = (*(((unsigned short *)&(v27)) + 1)) - v18; /*0x653df5*/
              v12 = v18 + v27; /*0x653df8*/
              (*(((unsigned short *)&(v27)) + 1)) -= v18; /*0x653dfb*/
              (*((unsigned short *)&(v27))) = v18 + v27; /*0x653e00*/
            }
            v19 = v12 - v11; /*0x653e0b*/
            if ( v19 > dword_87F8DC - v13 / 2 - 2 ) /*0x653e12*/
            {
              v20 = v19 - v14 + 1; /*0x653e16*/
              v11 += v20; /*0x653e17*/
              v12 -= v20; /*0x653e1a*/
              (*(((unsigned short *)&(v27)) + 1)) = v11; /*0x653e1d*/
              (*((unsigned short *)&(v27))) = v12; /*0x653e22*/
            }
            if ( v11 + v12 < v15 ) /*0x653e32*/
            {
              v21 = v15 - v11 - v12; /*0x653e36*/
              v12 += v21; /*0x653e38*/
              v11 += v21; /*0x653e3b*/
              (*((unsigned short *)&(v27))) = v12; /*0x653e3e*/
              (*(((unsigned short *)&(v27)) + 1)) = v11; /*0x653e43*/
            }
            v22 = v12 + v11; /*0x653e4e*/
            if ( v22 > v16 ) /*0x653e52*/
            {
              v23 = v22 - v16; /*0x653e54*/
              (*((unsigned short *)&(v27))) = v12 - v23; /*0x653e5c*/
              (*(((unsigned short *)&(v27)) + 1)) = v11 - v23; /*0x653e61*/
            }
            v24 = CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&v27); /*0x653e75*/
            Coords = CellClass::GetCoords(v24, v37); /*0x653e7c*/
            v34 = *Coords; /*0x653e83*/
            v35 = Coords[1]; /*0x653e95*/
            v36 = Coords[2]; /*0x653e9c*/
            Tactical::SetTacticalPosition(&v34); /*0x653ea0*/
            MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x653eac*/
            if ( g_ZBufferDescriptor ) /*0x653eb8*/
              *((unsigned int *)g_ZBufferDescriptor + 9) = 0x8000; /*0x653eba*/
          }
        }
        goto LABEL_74; /*0x653eba*/
      }
      if ( dword_A8ECC8 ) /*0x653b97*/
      {
        if ( dword_8809A0 ) /*0x653be5*/
        {
          if ( dword_8809A0 != 1 ) /*0x653bf3*/
          {
            if ( dword_8809A0 != 2 ) /*0x653c05*/
              goto LABEL_35; /*0x653c05*/
            goto LABEL_34; /*0x653c05*/
          }
  LABEL_32:
          v7 = 37; /*0x653bf5*/
          goto LABEL_51; /*0x653bfa*/
        }
      }
      else if ( dword_8809A0 ) /*0x653b9b*/
      {
        if ( dword_8809A0 != 1 ) /*0x653b9f*/
        {
          if ( dword_8809A0 != 2 ) /*0x653ba7*/
          {
            if ( dword_8809A0 != 5 ) /*0x653baf*/
            {
              if ( dword_8809A0 != 7 ) /*0x653bb7*/
              {
                if ( dword_8809A0 != 8 ) /*0x653bbf*/
                {
                  if ( dword_8809A0 != 9 ) /*0x653bc3*/
                  {
                    if ( dword_8809A0 != 11 ) /*0x653bcb*/
                    {
                      if ( dword_8809A0 != 6 ) /*0x653bd3*/
                      {
  LABEL_61:
                        Mission::SetAndCall((int *)&dword_87F7E8, 0, 1); /*0x653d62*/
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
                          TacticalClass::HandlePlayerAction((char *)&dword_87F7E8, (int16_t *)&v27, v29, v28, v7, 1); /*0x653cff*/
                        if ( (a2 & 4) != 0 && !byte_A8ED9D ) /*0x653d14*/
                        {
                          v34 = ((int16_t)v27 << 8) + 128; /*0x653d3b*/
                          v35 = ((*((signed short *)(((unsigned char *)&(v27)) + 2))) << 8) + 128; /*0x653d3f*/
                          v36 = 0; /*0x653d54*/
                          PlayerClass::ExecuteCommand( /*0x653d58*/
                            (char *)&dword_87F7E8,
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
            if ( dword_8809A0 != 7 ) /*0x653c17*/
            {
              if ( dword_8809A0 != 8 ) /*0x653c29*/
              {
                if ( dword_8809A0 != 9 ) /*0x653c34*/
                {
                  if ( dword_8809A0 != 11 ) /*0x653c43*/
                  {
                    if ( dword_8809A0 == 5 ) /*0x653c52*/
                    {
                      v7 = 41; /*0x653c54*/
                    }
                    else if ( dword_8809A0 == 6 ) /*0x653c61*/
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
                        v9 = (*(int (__thiscall **)(int, int *, unsigned int, unsigned int))(v10->estimatedHealth)(v10, &v27, 0, 0); /*0x653c9e*/
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
    Mouse::SetCursor((int)&dword_87F7E8, 0, 0); /*0x653eeb*/
  }
  return 0; /*0x653ed5*/
}