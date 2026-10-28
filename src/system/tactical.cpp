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
    int DrawToSurfaceSHP(int p0, int p1, int p2, unsigned int p3, int* p4, int* p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, unsigned int p13, int p14, int p15);  // x4:signals@0x4aed70
} // namespace gamemd
// ---- g57b5 W6: TU-local globals (csp_canon 驱动) ----
extern int globalHelper_0D2ED0;  // 词表 (canon 无条目, int 兜底) L1087
// ---- g57b5 W6 end ----
// ---- g57b5 W5: qualified-call free-form vocab ----
namespace gamemd {
int Coord_To_ScreenRaw(int* p0, int* p1);  // x4:signals@0x6d1f10
int TacticalClass_RenderCellFogOfWar(unsigned int* p0, int* p1);  // x4:signals@0x4801f0
int Vector2_Subtract(int* p0);  // x4:signals@0x6dc4c0
int RenderAlphaShapes(ObjectClass *p_this);  // x4:ida@0x421350
int BuildingDebris_Init(int p0);  // x4:signals@0x631d40
int CellClass_GetScreenRect(int* p0);  // x4:signals@0x47ff80
int CellClass_GetTerrainFlag(int p0);  // x4:signals@0x5471f0
int CellClass_InitRandomOffsets(int p0, int p1);  // x4:signals@0x4814f0
int Coord3D_Set(int p0, int p1, int p2);  // x4:signals@0x437090
int Coord_Subtract(int p0, int p1, int p2);  // x4:signals@0x41c230
int Coord_To_Screen(int* p0, int* p1);  // x4:signals@0x6d2140
int LayerClass_CoordinatesLegal(int16_t* p0);  // x4:signals@0x568300
int PingPongBuffer_GetWriteOffset(void);  // g57b5 W6: 0 参调用修正   // g57b5 W5: raw 词表 (纯变参兜底)
int TacticalClass_CheckCellVisibility(int* p0, int* p1, char p2);  // x4:signals@0x480350
int TacticalClass_DecrementCounter(int p0);  // x4:signals@0x631ee0
int TacticalClass_DrawCellTerrainOverlay(int* p0, int* p1);  // x4:signals@0x4802a0
int TacticalClass_DrawTerrain(int* p0, int* p1);  // x4:signals@0x6d7c00
int TacticalClass_InterpolateColor(int p0);  // x4:signals@0x631e50
int TacticalClass_SetView(int p0, int p1, int16_t p2, int16_t p3, int16_t p4, int16_t p5);  // x4:signals@0x483e30
int TacticalClass_saveConfig(int p0);  // x4:signals@0x631e30
int TerrainClass_GenerateTexture(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, char p11, int p12, char p13, char p14, char p15, int p16);  // x4:signals@0x547cf0
int Triple_Set(int p0, int p1, int p2);  // x4:signals@0x43a0b0
int *ClipRectIntersection(int* p0, int* p1, int* p2, int* p3, int* p4);  // x4:signals@0x421b60 x144b: ida 返回 int*
} // namespace gamemd
// ---- g57b5 W5 end ----
// ---- g57b5 W3: TU-local 真形 vocab (declaration-only) ----
namespace gamemd {
    float *TransformMatrix3x4Point(float *a1, float *a2, float *a3);  // x144b ida 真值 float*(float*,float*,float*) 0x5AFB80
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
unsigned int *TacticalClass::AdjustForZShapeMove(unsigned int *dest, unsigned int *client)
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
int TacticalClass::RenderIsometric(int *viewRect, unsigned int *flags)
{

  int v3; // eax
  int v5; // eax
  int v6; // ecx
  float *v7; // eax
  unsigned __int16 *v8; // eax
  unsigned __int16 *v9; // esi
  unsigned __int16 *v10; // eax
  int v11; // ecx
  int v12; // ebp
  int v13; // edx
  int result; // eax
  int v15; // ecx
  int v16; // eax
  CellClass *v17; // esi
  int *ScreenRect; // eax
  int *v19; // eax
  int v20; // ebp
  __int16 v21[2]; // [esp+10h] [ebp-98h] BYREF
  float v22; // [esp+14h] [ebp-94h] BYREF
  float v23; // [esp+18h] [ebp-90h]
  int v24; // [esp+1Ch] [ebp-8Ch]
  int v25; // [esp+20h] [ebp-88h]
  int v26; // [esp+24h] [ebp-84h]
  int v27; // [esp+28h] [ebp-80h]
  int v28; // [esp+2Ch] [ebp-7Ch]
  __int16 v29; // [esp+30h] [ebp-78h]
  __int16 v30; // [esp+32h] [ebp-76h]
  int v31; // [esp+38h] [ebp-70h]
  int v32; // [esp+3Ch] [ebp-6Ch]
  int v33; // [esp+40h] [ebp-68h]
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
  v5 = this->visibleArea.X + v3; /*0x6d7595*/
  v6 = viewRect[1] + this->visibleArea.Y; /*0x6d759c*/
  v25 = v5 - DSurface_ViewBounds.field_0; /*0x6d759e*/
  v26 = v6 - dword_886FA4; /*0x6d75a8*/
  v22 = (float)(v5 - DSurface_ViewBounds.field_0); /*0x6d75b7*/
  v23 = (float)(v6 - dword_886FA4); /*0x6d75c3*/
  v7 = TransformMatrix3x4Point(v37, (float *)(float *)&this->TacticalClass_field_DE4, &v22); /*0x6d75c7*/
  v22 = *v7; /*0x6d75ce*/
  v23 = v7[1]; /*0x6d75d9*/
  v24 = *((unsigned int *)v7 + 2); /*0x6d75e0*/
  LOWORD(v8) = Math::RoundToInt(v22); /*0x6d75e4*/
  v9 = v8; /*0x6d75ed*/
  LOWORD(v10) = Math::RoundToInt(v23); /*0x6d75ef*/
  ((Coord *)v40)->Subtract((int)v9, (int)v10, 0); /*0x6d75ff*/
  v11 = viewRect[3]; /*0x6d7608*/
  v21[0] = v40[0] / 256; /*0x6d7617*/
  v21[1] = v40[1] / 256; /*0x6d762f*/
  v25 = *(unsigned int *)v21; /*0x6d764e*/
  v12 = v11 / 15 + 17; /*0x6d7655*/
  v13 = (unsigned __int64)(2290649225LL * viewRect[2]) >> 32; /*0x6d765e*/
  v31 = v12; /*0x6d7660*/
  v13 >>= 5; /*0x6d7664*/
  (v25) = ((v25) & ~0xFFFF) | ((v21[0] - 2) & 0xFFFF); /*0x6d7669*/
  result = (unsigned int)v13 >> 31; /*0x6d766e*/
  v32 = v13 + ((unsigned int)v13 >> 31) + 4; /*0x6d7675*/
  v15 = 0; /*0x6d7679*/
  while ( v15 < v12 ) /*0x6d767d*/
  {
    v16 = v15 / 2; /*0x6d7688*/
    ++v15; /*0x6d768a*/
    v29 = v16; /*0x6d768b*/
    v33 = v15; /*0x6d7692*/
    v30 = v15 / 2; /*0x6d769b*/
    (v28) = ((v28) & ~0xFFFF) | ((v25 + v16) & 0xFFFF); /*0x6d76ae*/
    (v28) = ((v28) & ~(0xFFFF << 16)) | (((v30 + (((v25) >> 16) & 0xFFFF)) & 0xFFFF) << 16); /*0x6d76b9*/
    result = v32; /*0x6d76be*/
    *(unsigned int *)v21 = v28; /*0x6d76c8*/
    if ( v32 > 0 ) /*0x6d76cc*/
    {
      v27 = v32; /*0x6d76d2*/
      do /*0x6d7817*/
      {
        if ( (unsigned __int8)LayerClass::CoordinatesLegal(v21) ) /*0x6d76e0*/
        {
          v17 = (CellClass *)((CellCoord *)&dword_87F7E8)->To_CellObj(v21); /*0x6d76fc*/
          ScreenRect = v17->GetScreenRect(v41); /*0x6d7708*/
          v34[0] = *ScreenRect; /*0x6d7711*/
          v34[1] = ScreenRect[1]; /*0x6d771a*/
          v35 = ScreenRect[2]; /*0x6d7721*/
          v36 = ScreenRect[3]; /*0x6d7733*/
          v19 = ClipRectIntersection(v42, viewRect, v34, 0, 0); /*0x6d773a*/
          v38[3] = *v19; /*0x6d7743*/
          v20 = v19[2]; /*0x6d774f*/
          v38[4] = v19[1]; /*0x6d7752*/
          v39 = v19[3]; /*0x6d7762*/
          ((Coord *)v38)->Subtract((((v21[0] << 8) + 128) / 256) << 8, (((v21[1] << 8) + 128) / 256) << 8, 0); /*0x6d7799*/
          v37[0] = *(float *)v38; /*0x6d77aa*/
          v37[1] = *(float *)&v38[1]; /*0x6d77ae*/
          v37[2] = *(float *)&v38[2]; /*0x6d77be*/
          ((Coord *)this)->To_Screen((unsigned int *)v37, (int *)&v22); /*0x6d77c2*/
          LODWORD(v22) -= 30; /*0x6d77d4*/
          if ( v35 > 0 && v36 > 0 && v20 > 0 && v39 > 0 ) /*0x6d77ec*/
            ((TacticalClass *)v17)->CheckCellVisibility((const unsigned int *)&v22, flags, 0); /*0x6d77ff*/
        }
        ++v21[0]; /*0x6d7804*/
        --v21[1]; /*0x6d780d*/
        result = --v27; /*0x6d7812*/
      }
      while ( v27 ); /*0x6d7817*/
      v15 = v33; /*0x6d781d*/
      v12 = v31; /*0x6d7821*/
    }
  }
  return result; /*0x6d782d*/

}
// 0x480350
int TacticalClass::CheckCellVisibility(const unsigned int *screen_pos, unsigned int *flags, bool unk)
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
  if ( !this->field34 ) /*0x480365*/
    this->SetView(0, 0x10000, 0, 1000, 1000, 1000); /*0x480384*/
  v6 = *(&this->field24); /*0x480389*/
  v16 = 0; /*0x48038c*/
  if ( v6 == 0xFFFF ) /*0x480395*/
  {
    v14 = 0; /*0x4803e9*/
    v7 = (int *)*((unsigned int *)dword_A8ED2C + dword_AA10B0); /*0x4803ed*/
    inited = ((CellClass *)this)->InitRandomOffsets(dword_AA10B0, v7[188]); /*0x4803fa*/
  LABEL_10:
    v16 = inited; /*0x4803ff*/
    goto LABEL_11; /*0x4803ff*/
  }
  v7 = (int *)*((unsigned int *)dword_A8ED2C + v6); /*0x48039d*/
  v14 = *((unsigned char *)this + 282); /*0x4803ae*/
  if ( v7[188] > 1 ) /*0x4803b5*/
  {
    if ( (uint8_t)((CellClass *)v7)->GetTerrainFlag(*((unsigned char *)this + 282)) ) /*0x4803ba*/
      inited = (*(unsigned int *)((char *)this + 320) >> 13) & 1; /*0x4803cc*/
    else
      inited = ((CellClass *)this)->InitRandomOffsets(this->field24, v7[188]); /*0x4803dc*/
    goto LABEL_10; /*0x4803cf*/
  }
  LABEL_11:
  ++dword_A83ECC; /*0x480403*/
  v9 = *((unsigned char *)this + 283); /*0x480416*/
  v10 = screen_pos[1]; /*0x48041d*/
  v15[0] = (int)(*screen_pos); /*0x480420*/
  v11 = v10 - 15 * v9; /*0x48042e*/
  result = ((ObjectClass *)v7)->COMStub_Return0_39(); /*0x480430*/
  if ( result ) /*0x48043c*/
    ((TerrainClass *)v7)->GenerateTexture( /*0x480499*/
      this->field34,
      v14,
      (int)g_DSurface_Hidden_2,
      v15[0],
      v11 + dword_886FA4,
      *flags,
      flags[1],
      flags[2],
      flags[3],
      *((unsigned char *)this + 283),
      *(short *)((char *)this + 268),
      1,
      v16,
      0,
      0,
      0,
      0);
  if ( this->field48 != -1 ) /*0x4804a2*/
  {
    v12 = flags[1]; /*0x4804b1*/
    v15[0] = v15[0] + 30 - *flags; /*0x4804bd*/
    v13 = this->field48; /*0x4804c1*/
    v15[1] = v11 + dword_886FA4 - v12; /*0x4804c4*/
    return (*(int (__thiscall **)(unsigned int, int *, unsigned int *, unsigned int, int, int *))(**((unsigned int **)dword_A8EC1C + v13) + 160))( /*0x4804f5*/
             *((unsigned int *)dword_A8EC1C + v13),
             v15,
             flags,
             *((unsigned char *)this + 287),
             dword_89E7C0 * *((unsigned char *)this + 283),
             (int *)((char *)this + 36));
  }
  return result; /*0x4804fb*/
}
// 0x6d7840
int TacticalClass::DrawMap(int *viewRect, int *bounds)
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
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // esi
  float v18; // ebx
  int v19; // ecx
  int v20; // esi
  int v21; // eax
  CellClass *v22; // esi
  int NthOfType; // edi
  BuildingDebris *v24; // ebp
  BOOL v25; // edi
  void *v26; // eax
  int *ScreenRect; // eax
  int v28; // esi
  int v29; // edi
  int v30; // eax
  __int16 v31[2]; // [esp+8h] [ebp-48h] BYREF
  int v32; // [esp+Ch] [ebp-44h]
  int v33; // [esp+10h] [ebp-40h]
  int v34; // [esp+14h] [ebp-3Ch]
  int v35; // [esp+18h] [ebp-38h]
  int v36; // [esp+1Ch] [ebp-34h]
  int v37; // [esp+20h] [ebp-30h]
  float v38; // [esp+24h] [ebp-2Ch]
  float v39; // [esp+28h] [ebp-28h] BYREF
  float v40; // [esp+2Ch] [ebp-24h]
  int v41; // [esp+30h] [ebp-20h]
  int v42; // [esp+34h] [ebp-1Ch] BYREF
  int v43; // [esp+38h] [ebp-18h]
  int v44[4]; // [esp+40h] [ebp-10h] BYREF
  unsigned int v45; // [esp+54h] [ebp+4h] x144b: LOWORD/HIWORD 值载体

  result = PingPongBuffer_GetWriteOffset(); /*0x6d7847*/
  if ( (unsigned int)dword_ABCD44 >= result ) /*0x6d7852*/
  {
    result = (*(int (**)(int *))(*(unsigned int **)g_DSurface_Hidden_2 + 28))((int *)g_DSurface_Hidden_2); /*0x6d7860*/
    if ( result == 2 ) /*0x6d7866*/
    {
      result = MEMORY[0xA8EB78]; /*0x6d786c*/
      if ( MEMORY[0xA8EB78] ) /*0x6d7873*/
      {
        result = (*(int (**)(int *, unsigned int, unsigned int))(*(unsigned int **)g_DSurface_Hidden_2 + 23))((int *)g_DSurface_Hidden_2, 0, 0); /*0x6d7887*/
        v35 = result; /*0x6d788c*/
        if ( result ) /*0x6d7890*/
        {
          Time = timeGetTime(); /*0x6d7896*/
          v6 = Time - dword_B0E640; /*0x6d78a4*/
          dword_B0E640 = Time; /*0x6d78a6*/
          v32 = v6; /*0x6d78b1*/
          if ( v6 > 0x3E8 ) /*0x6d78b5*/
            v32 = 1000; /*0x6d78b7*/
          v7 = (*(int (**)(int *))(*(unsigned int **)g_DSurface_Hidden_2 + 29))((int *)g_DSurface_Hidden_2); /*0x6d78c9*/
          v8 = this->visibleArea.X; /*0x6d78d0*/
          v34 = v7; /*0x6d78dc*/
          v9 = this->visibleArea.Y; /*0x6d78e2*/
          v10 = v8 + *viewRect; /*0x6d78ee*/
          v11 = viewRect[1]; /*0x6d78f0*/
          v42 = v10 - DSurface_ViewBounds.field_0; /*0x6d78f5*/
          v43 = v11 + v9 - dword_886FA4; /*0x6d7905*/
          v39 = (float)(v10 - DSurface_ViewBounds.field_0); /*0x6d790a*/
          v41 = 0; /*0x6d791c*/
          v40 = (float)v43; /*0x6d7924*/
          v12 = TransformMatrix3x4Point((float *)&v42, (float *)(float *)&this->TacticalClass_field_DE4, &v39); /*0x6d7928*/
          v39 = *v12; /*0x6d792f*/
          v40 = v12[1]; /*0x6d793a*/
          v41 = *((unsigned int *)v12 + 2); /*0x6d7941*/
          (v13) = ((v13) & ~0xFFFF) | ((Math::RoundToInt(v39)) & 0xFFFF); /*0x6d7945*/
          v14 = v13; /*0x6d794e*/
          (v15) = ((v15) & ~0xFFFF) | ((Math::RoundToInt(v40)) & 0xFFFF); /*0x6d7950*/
          v16 = viewRect[3]; /*0x6d796d*/
          v17 = viewRect[2]; /*0x6d7978*/
          (v42) = ((v42) & ~(0xFFFF << 16)) | (((v15 / 256) & 0xFFFF) << 16); /*0x6d799d*/
          LODWORD(v18) = v16 / 15 + 17; /*0x6d79a4*/
          v19 = 0; /*0x6d79ac*/
          v38 = v18; /*0x6d79b3*/
          v20 = v17 / 60 + 4; /*0x6d79bc*/
          (v42) = ((v42) & ~0xFFFF) | ((v14 / 256 - 2) & 0xFFFF); /*0x6d79c0*/
          v37 = v20; /*0x6d79c5*/
          while ( v19 < *(int *)&v18 ) /*0x6d79c9*/
          {
            v21 = v19 / 2; /*0x6d79d4*/
            ++v19; /*0x6d79d6*/
            LOWORD(v39) = v21; /*0x6d79d7*/
            v36 = v19; /*0x6d79de*/
            HIWORD(v39) = v19 / 2; /*0x6d79e7*/
            LOWORD(v45) = v42 + v21; /*0x6d79fa*/
            HIWORD(v45) = HIWORD(v39) + (((v42) >> 16) & 0xFFFF); /*0x6d7a05*/
            *(unsigned int *)v31 = v45; /*0x6d7a10*/
            if ( v20 > 0 ) /*0x6d7a14*/
            {
              v33 = v20; /*0x6d7a1a*/
              do /*0x6d7bcb*/
              {
                if ( (unsigned __int8)LayerClass::CoordinatesLegal(v31) ) /*0x6d7a28*/
                {
                  v22 = ((CellCoord *)(&dword_87F7E8))->To_CellObj(v31); /*0x6d7a44*/
                  NthOfType = ((Building *)v22)->GetNthOfType(); /*0x6d7a4d*/
                  if ( (v22->copyFlags & 0x10) != 0 /*0x6d7a94*/
                    && !v22->QuickPassable()
                    && ((int)v22->landType == 2 || NthOfType)
                    && !v22->u32_E4
                    && ((int)v22->flags & 0x1000) == 0 )
                  {
                    v24 = (BuildingDebris *)v22->CellClass_field_FC; /*0x6d7a9a*/
                    v25 = NthOfType != 0; /*0x6d7aa9*/
                    if ( v24 ) /*0x6d7aab*/
                    {
                      if ( (int)v24->u32_10 >= 0x2000 ) /*0x6d7ade*/
                        v24->Init(v25); /*0x6d7ae3*/
                    }
                    else
                    {
                      v26 = __2_YAPAXI_Z(0x3Cu); /*0x6d7aaf*/
                      if ( v26 ) /*0x6d7ab9*/
                      {
                        v24 = (BuildingDebris *)((TacticalClass *)v26)->saveConfig(v25); /*0x6d7ac3*/
                        v22->CellClass_field_FC = (unsigned int)v24; /*0x6d7ac5*/
                      }
                      else
                      {
                        v24 = 0; /*0x6d7acd*/
                        v22->CellClass_field_FC = 0; /*0x6d7acf*/
                      }
                    }
                    if ( v24 ) /*0x6d7aea*/
                    {
                      if ( (unsigned __int8)((TacticalClass *)v24)->DecrementCounter(v32) ) /*0x6d7af7*/
                      {
                        ScreenRect = v22->GetScreenRect(v44); /*0x6d7b0b*/
                        v28 = v24->u32_30 + *ScreenRect + ScreenRect[2] / 2; /*0x6d7b3b*/
                        v29 = v24->u32_34 + ScreenRect[1] + ScreenRect[3] / 2; /*0x6d7b3f*/
                        if ( v28 >= *bounds && v28 < *bounds + bounds[2] ) /*0x6d7b4c*/
                        {
                          v30 = bounds[1]; /*0x6d7b4e*/
                          if ( v29 >= v30 && v29 < v30 + bounds[3] ) /*0x6d7b5c*/
                          {
                            ((TacticalClass *)v24)->InterpolateColor(v32); /*0x6d7b65*/
                            *(unsigned short *)(v29 * v34 + v35 + 2 * v28) = ((int)v24->u32_4 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6d7bb4*/
                                                                  | ((int)v24->u32_8 >> g_BitMask_Blue << g_BitMask_Green)
                                                                  | ((int)v24->u32_C >> g_BitMask_Red << g_BitShift_Blue);
                          }
                        }
                      }
                    }
                  }
                }
                ++v31[0]; /*0x6d7bb8*/
                --v31[1]; /*0x6d7bc1*/
                --v33; /*0x6d7bc7*/
              }
              while ( v33 ); /*0x6d7bcb*/
              v19 = v36; /*0x6d7bd1*/
              v20 = v37; /*0x6d7bd5*/
              v18 = v38; /*0x6d7bd9*/
            }
          }
          return (*(int (**)(int *))(*(unsigned int **)g_DSurface_Hidden_2 + 24))((int *)g_DSurface_Hidden_2); /*0x6d7bed*/
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
  int v6; // ecx
  float *v7; // eax
  unsigned __int16 *v8; // eax
  unsigned __int16 *v9; // ebp
  unsigned __int16 *v10; // eax
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  int v14; // ecx
  float *v15; // eax
  unsigned __int16 *v16; // eax
  unsigned __int16 *v17; // ebx
  unsigned __int16 *v18; // eax
  int smudgeTypeIndex; // ecx
  int v20; // ebx
  int v21; // edi
  int v22; // ebx
  int v23; // ecx
  int result; // eax
  int v25; // edi
  int *v26; // ebp
  int v27; // eax
  __int16 v28; // dx
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
  int v39; // [esp+30h] [ebp-38h]
  int v40; // [esp+34h] [ebp-34h]
  Triple v41; // [esp+38h] [ebp-30h] BYREF
  float v42; // [esp+3Ch] [ebp-2Ch]
  int v43; // [esp+40h] [ebp-28h]
  int v44; // [esp+44h] [ebp-24h] BYREF
  int v45; // [esp+48h] [ebp-20h]
  int v46; // [esp+4Ch] [ebp-1Ch]
  float v47[3]; // [esp+50h] [ebp-18h] BYREF
  Coord3D v48; // [esp+5Ch] [ebp-Ch] BYREF

  v3 = a2; /*0x6d7c07*/
  v5 = this->TacticalClass_field_2C; /*0x6d7c19*/
  v6 = a2[1] + this->visibleArea.Y - dword_886FA4; /*0x6d7c32*/
  v38 = *a2 + v5 - DSurface_ViewBounds.field_0; /*0x6d7c34*/
  v39 = v6; /*0x6d7c38*/
  *(float *)&v33 = (float)v6; /*0x6d7c41*/
  *(float *)&v31 = (float)v38; /*0x6d7c4d*/
  v41.Set(v31, v33, 0); /*0x6d7c50*/
  v7 = TransformMatrix3x4Point(v47, (float *)&this->TacticalClass_field_DE4, (float *)&v41); /*0x6d7c66*/
  v41 = *(Triple *)v7; /*0x6d7c6d*/
  v42 = v7[1]; /*0x6d7c78*/
  v43 = *((unsigned int *)v7 + 2); /*0x6d7c7f*/
  LOWORD(v8) = Math::RoundToInt(*(float *)&v41); /*0x6d7c83*/
  v9 = v8; /*0x6d7c8c*/
  LOWORD(v10) = Math::RoundToInt(v42); /*0x6d7c8e*/
  ((Coord *)&v44)->Subtract((int)v9, (int)v10, 0); /*0x6d7c9b*/
  v11 = *(unsigned int *)((CellStruct *)&v36)->Set( v44 / 256, v45 / 256); /*0x6d7ccb*/
  v12 = this->TacticalClass_field_2C; /*0x6d7ccd*/
  HIWORD(v37[0]) = (((v11) >> 16) & 0xFFFF); /*0x6d7cd3*/
  LOWORD(v37[0]) = v11 - 2; /*0x6d7ce0*/
  v13 = *v3; /*0x6d7ce9*/
  a2 = (int *)v37[0]; /*0x6d7ceb*/
  v14 = v3[1] + this->visibleArea.Y - dword_886FA4; /*0x6d7d04*/
  v38 = v12 + v13 - DSurface_ViewBounds.field_0; /*0x6d7d06*/
  v39 = v14; /*0x6d7d0a*/
  *(float *)&v34 = (float)v14; /*0x6d7d15*/
  *(float *)&v32 = (float)v38; /*0x6d7d21*/
  v41.Set(v32, v34, 0); /*0x6d7d24*/
  v15 = TransformMatrix3x4Point(v47, (float *)&this->TacticalClass_field_DE4, (float *)&v41); /*0x6d7d34*/
  v41 = *(Triple *)v15; /*0x6d7d3b*/
  v42 = v15[1]; /*0x6d7d46*/
  v43 = *((unsigned int *)v15 + 2); /*0x6d7d4d*/
  LOWORD(v16) = Math::RoundToInt(*(float *)&v41); /*0x6d7d51*/
  v17 = v16; /*0x6d7d5a*/
  LOWORD(v18) = Math::RoundToInt(v42); /*0x6d7d5c*/
  ((Coord *)&v38)->Subtract((int)v17, (int)v18, 0); /*0x6d7d69*/
  v44 = v38; /*0x6d7d7a*/
  v45 = v39; /*0x6d7d82*/
  v46 = v40; /*0x6d7d8c*/
  smudgeTypeIndex = ((Coord *)&dword_87F7E8)->To_Cell((unsigned int *)&v44)->smudgeTypeIndex; /*0x6d7d95*/
  v20 = v3->ptr_C; /*0x6d7d98*/
  v21 = v3->ptr_8; /*0x6d7da0*/
  HIWORD(v37[0]) = (((smudgeTypeIndex) >> 16) & 0xFFFF) + 3; /*0x6d7db0*/
  v22 = v20 / 15 + 20; /*0x6d7dbc*/
  LOWORD(v37[0]) = smudgeTypeIndex - 2; /*0x6d7dc9*/
  v23 = 0; /*0x6d7dd3*/
  result = (unsigned int)((unsigned __int64)(2290649225LL * v21) >> 32) >> 31; /*0x6d7dd5*/
  v25 = v21 / 60 + 7; /*0x6d7dda*/
  if ( v22 > 0 ) /*0x6d7dde*/
  {
    v26 = (int *)a4; /*0x6d7de4*/
    do /*0x6d7f01*/
    {
      v27 = v23 / 2; /*0x6d7ded*/
      ++v23; /*0x6d7def*/
      (v38) = ((v38) & ~0xFFFF) | ((v27) & 0xFFFF); /*0x6d7df0*/
      v36 = v23; /*0x6d7df7*/
      (v38) = ((v38) & ~(0xFFFF << 16)) | (((v23 / 2) & 0xFFFF) << 16); /*0x6d7e00*/
      v28 = LOWORD(v37[0]) + v27; /*0x6d7e0d*/
      result = *(unsigned int *)((char *)v37 + 2); /*0x6d7e0f*/
      LOWORD(a4) = v28; /*0x6d7e13*/
      HIWORD(a4) = HIWORD(v37[0]) + (((v38) >> 16) & 0xFFFF); /*0x6d7e1e*/
      a2 = (int *)a4; /*0x6d7e29*/
      if ( v25 > 0 ) /*0x6d7e2d*/
      {
        v35 = v25; /*0x6d7e33*/
        do /*0x6d7ef5*/
        {
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((__int16 *)&a2) ) /*0x6d7e41*/
          {
            v29 = (float *)v48.Set( /*0x6d7e91*/
                             ((((__int16)a2 << 8) + 128) / 256) << 8,
                             (((SHIWORD(a2) << 8) + 128) / 256) << 8,
                             0);
            v47[0] = *v29; /*0x6d7e98*/
            v47[1] = v29->Coord3D_field_0x04; /*0x6d7ea4*/
            v47[2] = v29->q008; /*0x6d7eb2*/
            ((Coord *)this)->To_Screen((unsigned int *)v47, (int *)&v41); /*0x6d7eb6*/
            *(unsigned int *)&v41 -= 30; /*0x6d7ec7*/
            v30 = (TacticalClass *)((CellCoord *)&dword_87F7E8)->To_CellObj((__int16 *)&a2); /*0x6d7ed6*/
            v30->DrawCellTerrainOverlay((int *)&v41, (int *)v26); /*0x6d7edd*/
          }
          LOWORD(a2) = (unsigned short)a2 + 1; /*0x6d7ee2*/
          --HIWORD(a2); /*0x6d7eeb*/
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
int TacticalClass::DrawTerrainPartial(TacticalClass *rect, int *a2, int *a3, char a4)
{
  CellClass **visibleCells; // ebx
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
  int v27[4]; // [esp+50h] [ebp-10h] BYREF
  int v28; // [esp+6Ch] [ebp+Ch]

  if ( a4 ) /*0x6d304e*/
  {
    ((TacticalClass *)rect)->DrawTerrain((int *)&DSurface_ViewBounds.field_0, (unsigned int *)&DSurface_ViewBounds); /*0x6d305a*/
  }
  else
  {
    if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d306c*/
      ((TacticalClass *)rect)->DrawTerrain(a2, (unsigned int *)a2); /*0x6d3072*/
    if ( a3[2] > 0 && a3[3] > 0 ) /*0x6d3087*/
      ((TacticalClass *)rect)->DrawTerrain(a3, (unsigned int *)a3); /*0x6d308d*/
  }
  if ( rect->visibleCellCount > 0 && !a4 ) /*0x6d30a2*/
  {
    v28 = 0; /*0x6d30aa*/
    visibleCells = rect->visibleCells; /*0x6d30be*/
    do /*0x6d31d6*/
    {
      ((Coord *)v18)->Subtract( /*0x6d310e*/
        ((((int16_t)*(unsigned int *)(*visibleCells + 36) << 8) + 128) / 256) << 8,
        ((((int16_t)(*(((unsigned short *)&(*(unsigned int *)(*visibleCells + 36))) + 1)) << 8) + 128) / 256) << 8,
        0);
      v19 = v18[0]; /*0x6d311f*/
      v20 = v18[1]; /*0x6d3123*/
      v21 = v18[2]; /*0x6d3133*/
      v6 = Coord::To_ScreenRaw(&v17, (unsigned int *)&v19); /*0x6d3137*/
      v7 = rect->visibleArea.Y; /*0x6d3144*/
      v8 = *v6 - rect->visibleArea.X; /*0x6d314a*/
      v9 = v6[1]; /*0x6d314c*/
      v23[0] = v8 - 30; /*0x6d3152*/
      v23[3] = 30; /*0x6d315b*/
      v23[1] = (int)DSurface_ViewBounds.field_4 + v9 - v7; /*0x6d3175*/
      v23[2] = 60; /*0x6d3183*/
      v10 = ClipRectIntersection(v27, (int *)&DSurface_ViewBounds.field_0, v23, 0, 0); /*0x6d3187*/
      v24[0] = *v10; /*0x6d3190*/
      v24[1] = v10[1]; /*0x6d3197*/
      v25 = v10[2]; /*0x6d319e*/
      v11 = v10[3]; /*0x6d31a2*/
      v26 = v11; /*0x6d31a7*/
      if ( v25 > 0 && v11 > 0 ) /*0x6d31af*/
        ((TacticalClass *)rect)->DrawTerrain(v24, (unsigned int *)v24); /*0x6d31bd*/
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
        v15 = ClipRectIntersection(v27, (int *)&DSurface_ViewBounds.field_0, &v19, 0, 0); /*0x6d3243*/
        v19 = *v15; /*0x6d3247*/
        v20 = v15[1]; /*0x6d324e*/
        result = v15[2]; /*0x6d3252*/
        v21 = result; /*0x6d3255*/
        v16 = v15[3]; /*0x6d3259*/
        v22 = v16; /*0x6d325e*/
        if ( result > 0 && v16 > 0 ) /*0x6d3266*/
          result = ((TacticalClass *)rect)->DrawTerrain(&v19, (unsigned int *)&v19); /*0x6d3274*/
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

  int v2; // ecx
  int v3; // esi
  int v4; // eax
  float *v5; // eax
  int v6; // eax
  int v7; // edi
  unsigned __int16 *v8; // eax
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
  __int16 v27[2]; // [esp+1Ch] [ebp-C0h] BYREF
  Vector2 v28; // [esp+20h] [ebp-BCh] BYREF
  int smudgeTypeIndex; // [esp+28h] [ebp-B4h]
  int v30; // [esp+30h] [ebp-ACh]
  unsigned __int16 *v32; // [esp+34h] [ebp-A8h]
  __int16 varA4; // [esp+38h] [ebp-A4h]
  __int16 v33; // [esp+3Ah] [ebp-A2h]
  Triple v34; // [esp+40h] [ebp-9Ch] BYREF
  float v35; // [esp+44h] [ebp-98h]
  int v36; // [esp+48h] [ebp-94h]
  int v37; // [esp+4Ch] [ebp-90h]
  int v38; // [esp+50h] [ebp-8Ch]
  int v39; // [esp+54h] [ebp-88h]
  int v40; // [esp+58h] [ebp-84h] BYREF
  int v41; // [esp+5Ch] [ebp-80h]
  float v42[3]; // [esp+64h] [ebp-78h] BYREF
  unsigned int v43[2]; // [esp+70h] [ebp-6Ch] BYREF
  unsigned int v44[2]; // [esp+78h] [ebp-64h] BYREF
  unsigned int v45[3]; // [esp+80h] [ebp-5Ch] BYREF
  int v46[4]; // [esp+8Ch] [ebp-50h] BYREF
  int v47[2]; // [esp+9Ch] [ebp-40h] BYREF
  int v48; // [esp+A4h] [ebp-38h]
  int v49; // [esp+A8h] [ebp-34h]
  int v50[4]; // [esp+ACh] [ebp-30h] BYREF
  int v51[4]; // [esp+BCh] [ebp-20h] BYREF
  int v52[4]; // [esp+CCh] [ebp-10h] BYREF

  v3 = v2; /*0x6d71f2*/
  v4 = *this + *(unsigned int *)(v2 + 176) - DSurface_ViewBounds.field_0; /*0x6d7212*/
  v28.Vector2_field_0x04 = this->q001 + *(unsigned int *)(v2 + 180) - dword_886FA4; /*0x6d721b*/
  *(unsigned int *)v28.__pad_0 = v4; /*0x6d7224*/
  *(float *)&v26 = (float)v28.Vector2_field_0x04; /*0x6d7228*/
  *(float *)&v25 = (float)v4; /*0x6d7234*/
  v34.Set(v25, v26, 0); /*0x6d7237*/
  v5 = TransformMatrix3x4Point(v42, &v3->TacticalClass_field_DE4, (float *)&v34); /*0x6d724b*/
  v34 = *(Triple *)v5; /*0x6d7252*/
  v35 = v5[1]; /*0x6d725d*/
  v36 = *((unsigned int *)v5 + 2); /*0x6d7264*/
  (v6) = ((v6) & ~0xFFFF) | ((Math::RoundToInt(*(float *)&v34)) & 0xFFFF); /*0x6d7268*/
  v7 = v6; /*0x6d7271*/
  LOWORD(v8) = Math::RoundToInt(v35); /*0x6d7273*/
  ((Coord *)&v40)->Subtract(v7, (int)v8, 0); /*0x6d727f*/
  if ( v41 < 0 ) /*0x6d7288*/
    v41 = 0; /*0x6d728a*/
  if ( v40 < 0 ) /*0x6d7292*/
    v40 = 0; /*0x6d7294*/
  v9 = ((Coord *)&dword_87F7E8)->To_Cell((unsigned int *)&v40); /*0x6d72a2*/
  v10 = this->q003; /*0x6d72aa*/
  smudgeTypeIndex = v9->smudgeTypeIndex; /*0x6d72b2*/
  v11 = (unsigned __int64)(2290649225LL * v10) >> 32; /*0x6d72b8*/
  v12 = this->q002; /*0x6d72ba*/
  (smudgeTypeIndex) = ((smudgeTypeIndex) & ~0xFFFF) | ((smudgeTypeIndex - 2) & 0xFFFF); /*0x6d72c8*/
  v37 = (v11 >> 3) + ((unsigned int)v11 >> 31) + 17; /*0x6d72de*/
  *(unsigned int *)v27 = smudgeTypeIndex; /*0x6d72e7*/
  v13 = v12 / 60 + 4; /*0x6d72ee*/
  v38 = v13; /*0x6d72f9*/
  if ( g_hWnd ) /*0x6d72fd*/
  {
    v14 = 0; /*0x6d7303*/
    if ( (int)((v11 >> 3) + ((unsigned int)v11 >> 31) + 17) > 0 ) /*0x6d7307*/
    {
      do /*0x6d7544*/
      {
        v15 = v14 / 2; /*0x6d7317*/
        ++v14; /*0x6d7319*/
        varA4 = v15; /*0x6d731a*/
        v39 = v14; /*0x6d7321*/
        v33 = v14 / 2; /*0x6d732a*/
        LOWORD(v32) = smudgeTypeIndex + v15; /*0x6d733d*/
        HIWORD(v32) = v33 + (((smudgeTypeIndex) >> 16) & 0xFFFF); /*0x6d7348*/
        *(unsigned int *)v27 = v32; /*0x6d7353*/
        if ( v13 > 0 ) /*0x6d7357*/
        {
          v30 = v13; /*0x6d735d*/
          do /*0x6d7532*/
          {
            if ( (unsigned __int8)LayerClass::CoordinatesLegal(v27) ) /*0x6d736b*/
            {
              v16 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v27); /*0x6d7387*/
              ((Coord *)v45)->Subtract((((v27[0] << 8) + 128) / 256) << 8, (((v27[1] << 8) + 128) / 256) << 8, 0); /*0x6d73cc*/
              v42[0] = *(float *)v45; /*0x6d73dd*/
              v42[1] = *(float *)&v45[1]; /*0x6d73e1*/
              v42[2] = *(float *)&v45[2]; /*0x6d73ed*/
              v17 = Coord::To_ScreenRaw((int *)&v34, v42); /*0x6d73f5*/
              *(unsigned int *)v28.__pad_0 = *v17; /*0x6d73fc*/
              v18 = v3->ptr_46; /*0x6d7400*/
              v19 = v17[1]; /*0x6d7406*/
              v20 = v3->visibleArea; /*0x6d7409*/
              v28.Vector2_field_0x04 = v19; /*0x6d740f*/
              v43[1] = v18; /*0x6d7417*/
              v43[0] = v20; /*0x6d7420*/
              Vector2::Subtract(&v28, v43); /*0x6d7424*/
              *(unsigned int *)v28.__pad_0 -= 30; /*0x6d7436*/
              v50[0] = *(unsigned int *)v28.__pad_0; /*0x6d743a*/
              v50[1] = dword_886FA4 + v28.Vector2_field_0x04; /*0x6d744b*/
              v50[2] = 60; /*0x6d7460*/
              v50[3] = 30; /*0x6d7467*/
              v21 = ClipRectIntersection(v51, v50, this, 0, 0); /*0x6d7472*/
              v46[0] = *v21; /*0x6d747b*/
              v46[1] = v21->u32_4; /*0x6d7487*/
              v46[2] = v21->u32_8; /*0x6d7499*/
              v46[3] = v21->q00C; /*0x6d74af*/
              v22 = ClipRectIntersection(v52, &DSurface_ViewBounds.field_0, v46, 0, 0); /*0x6d74b6*/
              v47[0] = *v22; /*0x6d74bf*/
              v47[1] = v22->u32_4; /*0x6d74c9*/
              v48 = v22->u32_8; /*0x6d74d3*/
              v23 = v22->q00C; /*0x6d74da*/
              v49 = v23; /*0x6d74df*/
              if ( v48 > 0 && v23 > 0 ) /*0x6d74ea*/
              {
                v44[0] = *(unsigned int *)v28.__pad_0 + DSurface_ViewBounds.field_0; /*0x6d7501*/
                v44[1] = v28.Vector2_field_0x04 + dword_886FA4; /*0x6d750e*/
                TacticalClass::RenderCellFogOfWar((int)v16, v44, v47); /*0x6d751a*/
              }
            }
            ++v27[0]; /*0x6d751f*/
            --v27[1]; /*0x6d7528*/
            --v30; /*0x6d752e*/
          }
          while ( v30 ); /*0x6d7532*/
          v13 = v38; /*0x6d7538*/
          v14 = v39; /*0x6d753c*/
        }
      }
      while ( v14 < v37 ); /*0x6d7544*/
    }
  }
  return (Point2D *)RenderAlphaShapes((ObjectClass *)this); /*0x6d7551*/

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
  char *ptr_0; // ebp
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
  void *ptr_8; // [esp+78h] [ebp-D4h]
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
  void *ptr_0; // [esp+12Ch] [ebp-20h]
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
        v85 = v5->ptr_4; /*0x4d198c*/
        if ( v5->ptr_8 > 0 && v5->ptr_C > 0 ) /*0x4d19a0*/
        {
          switch ( *(unsigned int *)(v4 + 48) ) /*0x4d19bd*/
          {
            case 6: /*0x4d19bd*/
              for ( j = 0; j < *(unsigned int *)(v4 + 108); ++j ) /*0x4d1c57*/
              {
                v17 = *(unsigned int *)(v4 + 96); /*0x4d1c61*/
                v18 = *(unsigned char **)(v17 + 16 * j); /*0x4d1c6b*/
                v69 = *(unsigned int *)(v17 + 16 * j + 4); /*0x4d1c79*/
                v66 = v18->vt_slot_156(); /*0x4d1c86*/
                v70 = *(unsigned char *)(*(unsigned int *)(v4 + 96) + 16 * j + 8); /*0x4d1c97*/
                v64 = *(int **)(*(unsigned int *)(*(unsigned int *)&BuildingTypeClass_AnimTable /*0x4d1cb0*/
                                          + 4 * *(unsigned int *)(*(unsigned int *)(v4 + 40) + 90196))
                              + 780);
                if ( j ) /*0x4d1cb4*/
                {
                  if ( v18 /*0x4d207f*/
                    && v18->getAltitude() == 5
                    && v18->u32_2D4 <= stru_A8EB00.ptr_0[30]
                    && v66 )
                  {
                    v36 = (unsigned int *)(v4 + 52); /*0x4d2085*/
                    v37 = *(unsigned int *)(v4 + 56); /*0x4d208f*/
                    v100[0] = *(unsigned int *)(v4 + 52) - 128; /*0x4d2092*/
                    v38 = *(unsigned int *)(v4 + 60); /*0x4d20a0*/
                    v100[1] = v37 - 128; /*0x4d20a3*/
                    v100[2] = v38; /*0x4d20b9*/
                    ((Coord *)g_TacticalClass_Instance)->To_Screen((unsigned int *)v100, &v77); /*0x4d20c0*/
                    ptr_0 = viewRect->vfptr; /*0x4d20d2*/
                    v39 = (char *)DSurface_ViewBounds.field_4 - (char *)viewRect->vfptr1; /*0x4d20e3*/
                    v40 = 1000; /*0x4d20eb*/
                    v77 += DSurface_ViewBounds.field_0 - (unsigned int)ptr_0; /*0x4d20f0*/
                    v41 = v39 + v41; /*0x4d20f8*/
                    (*((unsigned char *)&(v39))) = v18[861]; /*0x4d20fa*/
                    v41 = v41; /*0x4d2102*/
                    if ( !(unsigned char)v39 ) /*0x4d2106*/
                    {
                      v102[0] = *v36; /*0x4d210c*/
                      v102[1] = *(unsigned int *)(v4 + 56); /*0x4d2123*/
                      v102[2] = *(unsigned int *)(v4 + 60); /*0x4d212d*/
                      v40 = *(int16_t *)((Coord *)&DataGlobal_87F7E8)->To_Cell( v102)->CellClass_field_10A; /*0x4d2139*/
                    }
                    if ( v64 && v18[860] ) /*0x4d2148*/
                      v59 = (int)v64; /*0x4d2152*/
                    else
                      v59 = *(unsigned int *)&DataGlobal_87F6C0; /*0x4d215e*/
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
                  ((Coord *)g_TacticalClass_Instance)->To_Screen((unsigned int *)v109, &v79); /*0x4d1cf5*/
                  v105[0] = *(unsigned int *)(v4 + 52); /*0x4d1cfe*/
                  v105[1] = *(unsigned int *)(v4 + 56); /*0x4d1d10*/
                  v105[2] = *(unsigned int *)(v4 + 60); /*0x4d1d1f*/
                  v60 = (int *)((Coord *)&DataGlobal_87F7E8)->To_Cell( v105); /*0x4d1d30*/
                  v22 = (char *)DSurface_ViewBounds.field_4 - (char *)viewRect->vfptr1; /*0x4d1d41*/
                  v23 = v18[5889]; /*0x4d1d49*/
                  v79 += DSurface_ViewBounds.field_0 - (unsigned int)viewRect->vfptr; /*0x4d1d4f*/
                  v24 = v22 + v80; /*0x4d1d57*/
                  v80 += v22; /*0x4d1d5b*/
                  if ( v23 ) /*0x4d1d5f*/
                    goto LABEL_49; /*0x4d1d5f*/
                  v71 = v18->q1520; /*0x4d1d6f*/
                  v83[0] = v79; /*0x4d1d77*/
                  v83[1] = v24; /*0x4d1d7b*/
                  v25 = (void *)(v24 + v66->ptr_4 / 2); /*0x4d1d88*/
                  v88[0] = (int)viewRect->vfptr; /*0x4d1d8e*/
                  v88[1] = (int)viewRect->vfptr1; /*0x4d1d95*/
                  v88[2] = (int)viewRect->vfptr2; /*0x4d1d9c*/
                  ptr_8 = viewRect->vfptr3; /*0x4d1da5*/
                  if ( (int)ptr_8 > (int)v25 ) /*0x4d1dac*/
                    ptr_8 = v25; /*0x4d1dae*/
                  v73 = v18->q1530 + 144; /*0x4d1dc4*/
                  v75 = v18->u32_1534 + 172; /*0x4d1dd3*/
                  v57 = (BuildingTypeClass::GetFoundationHeight((int *)v18, 0) << 8) - 256; /*0x4d1de6*/
                  v97[0] = (BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)v18) << 8) - 256; /*0x4d1dfe*/
                  v97[1] = v57; /*0x4d1e18*/
                  v26 = ((TacticalClass *)v111)->AdjustForZShapeMove((unsigned int *)v97); /*0x4d1e1f*/
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
                  v32 = ((Coord *)&DataGlobal_87F7E8)->To_Cell( v99); /*0x4d1e91*/
                  v33 = v60; /*0x4d1ea4*/
                  v34 = *((int16_t *)v18 + 2724) + *(int16_t *)v32->CellClass_field_10A; /*0x4d1ea8*/
                  if ( !v60[13] ) /*0x4d1eaa*/
                  {
                    TacticalClass::SetView(v60, 0, 0x10000, 0, 1000, 1000, 1000); /*0x4d1ec9*/
                    v33 = v60; /*0x4d1ece*/
                  }
                  if ( v18[5890] ) /*0x4d1ed2*/
                    v61 = v33->attachedTag; /*0x4d1edf*/
                  else
                    v61 = v64; /*0x4d1ee9*/
                  if ( (int)ptr_8 > 0 ) /*0x4d1ef6*/
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
                  v35 = *(&v18->u32_1518); /*0x4d2011*/
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
              v6 = ((Coord *)&DataGlobal_87F7E8)->To_Cell( v108); /*0x4d19fa*/
              v7 = *&v6->u32_44; /*0x4d1a00*/
              powerup = (uint8_t)v6->powerup; /*0x4d1a03*/
              *&v6->u32_44 = *(unsigned int *)(v4 + 36); /*0x4d1a09*/
              powerup = powerup; /*0x4d1a0f*/
              v6->powerup = *(unsigned char *)(v4 + 44); /*0x4d1a13*/
              (/*0x4d1a5b*/
                (Coord *)v106)->Subtract(
                ((((*((signed short *)&(v6->smudgeTypeIndex))) << 8) + 128) / 256) << 8,
                ((((*((signed short *)(((unsigned char *)&(v6->smudgeTypeIndex)) + 2))) << 8) + 128) / 256) << 8,
                0);
              v101[0] = v106[0]; /*0x4d1a75*/
              v101[1] = v106[1]; /*0x4d1a7c*/
              v101[2] = v106[2]; /*0x4d1a96*/
              ((Coord *)g_TacticalClass_Instance)->To_Screen((unsigned int *)v101, v87); /*0x4d1a9d*/
              v87[0] -= 30; /*0x4d1aaf*/
              BuildingClass::Draw_0((int)v6, v87, (int *)viewRect); /*0x4d1ab5*/
              TacticalClass::DrawBuildingPlacement((int)v6, v87, (int *)viewRect); /*0x4d1ac2*/
              *&v6->u32_44 = v7; /*0x4d1ac7*/
              v6->powerup = powerup; /*0x4d1ace*/
              break; /*0x4d1ad4*/
            case 0x1D: /*0x4d19bd*/
              ptr_0 = (char *)viewRect->vfptr1; /*0x4d220d*/
              v44 = viewRect->vfptr; /*0x4d2210*/
              v45 = g_TacticalClass_Instance[45]; /*0x4d2218*/
              v90 = g_TacticalClass_Instance[44]; /*0x4d221e*/
              v46 = *(unsigned int *)(v4 + 68); /*0x4d2225*/
              v45 = v45; /*0x4d2228*/
              v47 = *(unsigned int *)(v4 + 64) - *(unsigned int *)&v90 + DSurface_ViewBounds.field_0 + 30; /*0x4d2249*/
              v98[1] = (char *)DSurface_ViewBounds.field_4 + v46 - *(unsigned int *)&v45 - ptr_0; /*0x4d225f*/
              v48 = *(unsigned int *)(v4 + 84); /*0x4d2266*/
              v98[0] = v47 - (unsigned int)v44; /*0x4d2269*/
              v49 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[56] + 4 * v48) + 156))(*(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[56] + 4 * v48)); /*0x4d227b*/
              if ( v49 ) /*0x4d227f*/
              {
                v104[0] = *(unsigned int *)(v4 + 52); /*0x4d228c*/
                v104[1] = *(unsigned int *)(v4 + 56); /*0x4d229e*/
                v104[2] = *(unsigned int *)(v4 + 60); /*0x4d22a8*/
                v50 = ((Coord *)&DataGlobal_87F7E8)->To_Cell( v104); /*0x4d22b4*/
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
              v10 = ((Coord *)&DataGlobal_87F7E8)->To_Cell( v107); /*0x4d1b16*/
              v67 = *(unsigned int *)(*(unsigned int *)(v4 + 96) + 4); /*0x4d1b1e*/
              v11 = (*(int (__thiscall **)(int))(v63->Armor)(v63); /*0x4d1b2e*/
              v103[0] = *v9; /*0x4d1b34*/
              v103[1] = v9[1]; /*0x4d1b49*/
              v103[2] = v9[2]; /*0x4d1b5b*/
              ((Coord *)g_TacticalClass_Instance)->To_Screen((unsigned int *)v103, &v81); /*0x4d1b62*/
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
    operator delete((Block)); /*0x658790*/
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
  unsigned __int8 v13; // dl
  unsigned __int8 field40_high; // al
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
  __int16 v41; // [esp+58h] [ebp-3Ch] BYREF
  char v42; // [esp+5Ah] [ebp-3Ah]
  int TacticalClass_field_4C; // [esp+5Ch] [ebp-38h]
  int v44; // [esp+60h] [ebp-34h]
  int v45; // [esp+64h] [ebp-30h]
  unsigned int field30; // [esp+68h] [ebp-2Ch]
  unsigned __int8 *v47; // [esp+6Ch] [ebp-28h]
  unsigned __int8 *v48; // [esp+70h] [ebp-24h]
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
    if ( LOBYTE(this->NeedsSaveOrLink) )
    {
      return PrepareTacticalClassCellTransform(&this->vfptr); /*0x55027b*/
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
        result = atexit(nullsub_21); /*0x5503a6*/
      }
      LOBYTE(result) = BYTE1(_EBX->field50); /*0x5503ae*/
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
        (field30) = ((field30) & ~0xFFFF) | ((Math::RoundToInt(v1)) & 0xFFFF); /*0x550401*/
        v7 = (((field30 >> 12) + 1) >> 1) & 7; /*0x55041c*/
        ((Coord *)g_TacticalClass_Instance)->To_Screen((unsigned int *)&_EBX->field24, &v55); /*0x55041f*/
        ((Coord *)g_TacticalClass_Instance)->To_Screen((unsigned int *)&_EBX->field30, &v53); /*0x550430*/
        v8 = _EBX->TacticalClass_field_3C - ZCoordToScreenY(_EBX->TacticalClass_field_2C) - 2; /*0x550445*/
        v9 = ZCoordToScreenY(_EBX->field38); /*0x550448*/
        v41 = 0; /*0x550452*/
        v10 = -2 - v9; /*0x550457*/
        LOBYTE(v9) = _EBX->field44; /*0x550459*/
        v42 = 0; /*0x550463*/
        field30 = 0; /*0x550468*/
        v40 = 1; /*0x550470*/
        if ( (unsigned char)v9 || BYTE1(_EBX->field44) || BYTE2(_EBX->field44) )
        {
          field30 = Random::Range(&Randomizer_Global, -HIBYTE(_EBX->field44), HIBYTE(_EBX->field44)); /*0x5504a6*/
          TacticalClass_field_4C = Random::Range(&Randomizer_Global, -LOBYTE(_EBX->field48), LOBYTE(_EBX->field48)); /*0x5504bf*/
          *(float *)&v44 = COERCE_FLOAT(Random::Range(&Randomizer_Global, -BYTE1(_EBX->field48), BYTE1(_EBX->field48))); /*0x5504d8*/
          v11 = (int)(LOBYTE(_EBX->field44) + field30) < 0 ? 0 : LOBYTE(_EBX->field44) + field30;
          if ( v11 > 255 ) /*0x5504f6*/
            v11 = 255; /*0x5504f8*/
          TacticalClass_field_4C = BYTE1(_EBX->field44) + TacticalClass_field_4C < 0
                                 ? 0
                                 : BYTE1(_EBX->field44) + TacticalClass_field_4C;
          if ( TacticalClass_field_4C > 255 ) /*0x55051c*/
            TacticalClass_field_4C = 255; /*0x55051e*/
          v44 = BYTE2(_EBX->field44) + v44 < 0 ? 0 : BYTE2(_EBX->field44) + v44;
          v12 = v44; /*0x55053a*/
          if ( v44 > 255 ) /*0x550545*/
          {
            v12 = 255; /*0x550547*/
            v44 = 255; /*0x55054c*/
          }
          (v41) = ((v41) & ~0xFF) | ((v11) & 0xFF); /*0x550556*/
          v45 = (TacticalClass_field_4C >> g_BitMask_Blue << g_BitMask_Green) /*0x550584*/
              | (v12 >> g_BitMask_Red << g_BitShift_Blue);
          (v41) = ((v41) & ~(0xFF << 8)) | (((TacticalClass_field_4C) & 0xFF) << 8); /*0x55059a*/
          field30 = (v11 >> g_BitShift_Green_0 << g_BitShift_Red) | v45; /*0x5505aa*/
          v42 = v44; /*0x5505ae*/
        }
        else
        {
          v40 = 0; /*0x550485*/
        }
        v13 = BYTE2(_EBX->field40); /*0x5505b2*/
        v45 = (int)&_EBX->field40 + 1; /*0x5505b8*/
        *(float *)&v44 = 1.0; /*0x5505bc*/
        LOBYTE(v51) = BYTE1(_EBX->field40); /*0x5505cd*/
        (v49) = ((v49) & ~0xFF) | (((unsigned char)v51 != 0) & 0xFF); /*0x5505d1*/
        LOBYTE(v48) = v13 != 0; /*0x5505d8*/
        field40_high = HIBYTE(_EBX->field40); /*0x5505dc*/
        LOBYTE(v47) = field40_high != 0; /*0x5505e4*/
        if ( BYTE2(_EBX->field50) ) /*0x5505e8*/
        {
          __asm /*0x5505f2*/
          {
            fld dword ptr [ebx+54h]
            fsub dword ptr [ebx+58h]
          }
          TacticalClass_field_4C = _EBX->TacticalClass_field_4C; /*0x5505f8*/
          v44 = TacticalClass_field_4C - _EBX->ptr_0; /*0x5505fe*/
          __asm /*0x550602*/
          {
            fimul [esp+50h+var_34]
            fidiv [esp+50h+var_38]
            fadd dword ptr [ebx+58h]
            fstp [esp+50h+var_34]
          }
        }
        if ( *(unsigned int *)&stru_A8E960.random[4] ) /*0x550619*/
        {
          if ( LOBYTE(_EBX->field50) ) /*0x55061f*/
          {
            result = (*(int (**)(AudioStream *, CellStruct *, int *, int *, int, int, int, unsigned int, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x550655*/
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
            (result) = ((result) & ~0xFF) | ((v40) & 0xFF); /*0x550658*/
            if ( v40 ) /*0x55065e*/
            {
              v15 = 4 * v7; /*0x55066c*/
              v16 = dword_ABC73C[v15]; /*0x55067c*/
              v51 = v53 + dword_ABC738[v15]; /*0x550688*/
              v17 = v55 + dword_ABC738[v15]; /*0x550698*/
              v52 = v54 + v16; /*0x55069e*/
              v18 = dword_ABC73C[v15]; /*0x5506a2*/
              v49 = v17; /*0x5506a8*/
              v50 = v56 + v18; /*0x5506bb*/
              (*(void (**)(AudioStream *, CellStruct *, int *, int *, __int16 *, int, int, unsigned int, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x5506d2*/
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
              v19 = dword_ABC744[v15]; /*0x5506e9*/
              v51 = v53 + dword_ABC740[v15]; /*0x5506ef*/
              v20 = dword_ABC740[v15]; /*0x5506f3*/
              v21 = dword_ABC744[v15]; /*0x5506f9*/
              v49 = v55 + v20; /*0x55070e*/
              v52 = v54 + v19; /*0x550719*/
              v50 = v56 + v21; /*0x550734*/
              return (*(int (**)(AudioStream *, CellStruct *, int *, int *, __int16 *, int, int, unsigned int, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x550740*/
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
            v23 = dword_ABC73C[v22]; /*0x55076a*/
            v24 = dword_ABC738[v22]; /*0x550772*/
            v51 = v53 + v24; /*0x550778*/
            v25 = v24 + v55; /*0x550786*/
            v26 = v44; /*0x550788*/
            v52 = v54 + v23; /*0x55078c*/
            v27 = dword_ABC73C[v22]; /*0x550790*/
            v49 = v25; /*0x550796*/
            v50 = v56 + v27; /*0x5507a6*/
            (*(void (**)(AudioStream *, CellStruct *, int *, int *, __int16 *, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 64))( /*0x5507bd*/
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v49,
              &v51,
              &v41,
              v44,
              v8,
              v10);
            v28 = dword_ABC744[v22]; /*0x5507d0*/
            v51 = v53 + dword_ABC740[v22]; /*0x5507d6*/
            v29 = dword_ABC740[v22]; /*0x5507da*/
            v30 = dword_ABC744[v22]; /*0x5507e6*/
            v49 = v55 + v29; /*0x5507ef*/
            v52 = v54 + v28; /*0x5507f8*/
            v50 = v56 + v30; /*0x550813*/
            (*(void (**)(AudioStream *, CellStruct *, int *, int *, __int16 *, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 64))( /*0x55081f*/
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v49,
              &v51,
              &v41,
              v26,
              v8,
              v10);
            return (*(int (**)(AudioStream *, CellStruct *, int *, int *, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 64))( /*0x550841*/
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
            return (*(int (**)(AudioStream *, CellStruct *, int *, int *, int, int, int, unsigned int, int, unsigned __int8 *, unsigned __int8 *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x550880*/
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
          result = (*(int (**)(AudioStream *, CellStruct *, int *, int *, int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x5508f6*/
                     g_DSurface_Hidden_2,
                     &DSurface_ViewBounds,
                     &v55,
                     &v53,
                     ((unsigned __int8)v51 >> g_BitShift_Green_0 << g_BitShift_Red)
                   | (v13 >> g_BitMask_Blue << g_BitMask_Green)
                   | (field40_high >> g_BitMask_Red << g_BitShift_Blue),
                     v8,
                     v10,
                     0);
          (result) = ((result) & ~0xFF) | ((v40) & 0xFF); /*0x5508f9*/
          if ( v40 ) /*0x5508ff*/
          {
            v31 = 4 * v7; /*0x55090d*/
            v32 = v54 + dword_ABC73C[v31]; /*0x550925*/
            v51 = v53 + dword_ABC738[v31]; /*0x55092b*/
            v33 = dword_ABC738[v31]; /*0x55092f*/
            v52 = v32; /*0x550935*/
            v34 = dword_ABC73C[v31]; /*0x550939*/
            v49 = v55 + v33; /*0x550947*/
            v50 = v56 + v34; /*0x550950*/
            (*(void (**)(AudioStream *, CellStruct *, int *, int *, unsigned int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x550968*/
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v49,
              &v51,
              field30,
              v8,
              v10,
              0);
            v35 = dword_ABC744[v31]; /*0x55097b*/
            v51 = v53 + dword_ABC740[v31]; /*0x550981*/
            v36 = dword_ABC740[v31]; /*0x550985*/
            v37 = dword_ABC744[v31]; /*0x55098b*/
            v52 = v54 + v35; /*0x550999*/
            v49 = v55 + v36; /*0x5509a3*/
            v50 = v56 + v37; /*0x5509bb*/
            return (*(int (**)(AudioStream *, CellStruct *, int *, int *, unsigned int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x5509c7*/
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
  unsigned __int16 *v7; // eax
  unsigned __int16 *v8; // edi
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
  LODWORD(v11[0]) = this->visibleArea[0] - 60; /*0x6d8b80*/
  v4 = (double)SLODWORD(v11[0]); /*0x6d8b84*/
  v5 = TacticalClass_field_D68 - dword_B0CE34 / 2; /*0x6d8b88*/
  this->visibleArea[1] = v5; /*0x6d8b90*/
  v12 = v4; /*0x6d8b99*/
  LODWORD(v11[1]) = v5 - 30; /*0x6d8b9d*/
  v13 = (float)(v5 - 30); /*0x6d8bae*/
  v6 = TransformMatrix3x4Point(v11, (float *)this->TacticalClass_field_DE4, &v12); /*0x6d8bb2*/
  v12 = *v6; /*0x6d8bb9*/
  v13 = v6[1]; /*0x6d8bc4*/
  v14 = *((unsigned int *)v6 + 2); /*0x6d8bcb*/
  LOWORD(v7) = Math::RoundToInt(v12); /*0x6d8bcf*/
  v8 = v7; /*0x6d8bd8*/
  (v9) = ((v9) & ~0xFFFF) | ((Math::RoundToInt(v13)) & 0xFFFF); /*0x6d8bda*/
  this->TacticalClass_field_D80 = (int)v8 / 256; /*0x6d8bf0*/
  this->TacticalClass_field_D84 = v9 / 256; /*0x6d8c04*/
  this->TacticalClass_field_D88 = dword_B0CE30 / 60 + 2; /*0x6d8c2a*/
  result = (unsigned int)((unsigned __int64)(2290649225LL * dword_B0CE34) >> 32) >> 31; /*0x6d8c3f*/
  this->TacticalClass_field_D8C = dword_B0CE34 / 15 + 4; /*0x6d8c46*/
  return result; /*0x6d8bea*/

}
// 0x483e30
int TacticalClass::SetView(int a2, int a3, int16_t a4, int16_t a5, int16_t a6, int16_t a7)
{

  int v7; // eax
  int v9; // ecx
  unsigned __int64 *v10; // eax
  unsigned __int64 *v11; // eax
  int SurfaceClassPrimary; // eax
  __int16 v13; // cx
  __int16 v14; // dx
  __int16 v15; // cx
  __int16 v16; // dx
  int result; // eax
  __int16 v18; // cx
  __int64 v19; // [esp-8h] [ebp-20h]
  __int64 v20; // [esp+4h] [ebp-14h] BYREF
  int v21; // [esp+Ch] [ebp-Ch] BYREF
  __int64 v22; // [esp+10h] [ebp-8h] BYREF

  v7 = a2; /*0x483e30*/
  if ( a2 ) /*0x483e3c*/
  {
    v9 = this->qB738; /*0x483e3e*/
    if ( v9 ) /*0x483e43*/
    {
      if ( stru_A8E960.nextScenario[64] ) /*0x483e4d*/
        --v9->u32_194; /*0x483e4f*/
    }
    this->qB738 = v7; /*0x483e55*/
    ++v7->u32_194; /*0x483e5f*/
    v10 = (unsigned __int64 *)this->qB738; /*0x483e65*/
    a2 = v10->u32_198; /*0x483e6e*/
    v20 = *(unsigned __int64 *)(&v10->u32_19C); /*0x483e78*/
LABEL_19:
    HIWORD(result) = HIWORD(a3); /*0x483f7a*/
    v13 = a4; /*0x483f7e*/
    v14 = a5; /*0x483f83*/
    this->q39418 = a3; /*0x483f88*/
    LOWORD(result) = a6; /*0x483f8e*/
    this->visibleCells[36] = v13; /*0x483f93*/
    v15 = a7; /*0x483f9a*/
    this->visibleCells[38] = v14; /*0x483f9f*/
    v16 = a2; /*0x483fa6*/
    this->visibleCells[40] = result; /*0x483fab*/
    (result) = ((result) & ~0xFFFF) | ((v20) & 0xFFFF); /*0x483fb2*/
    this->visibleCells[42] = v15; /*0x483fb7*/
    v18 = (((v20) >> 32) & 0xFFFF); /*0x483fbe*/
    this->visibleCells[44] = v16; /*0x483fc3*/
    this->visibleCells[46] = result; /*0x483fca*/
    this->visibleCells[48] = v18; /*0x483fd1*/
    return result; /*0x483fdc*/
  }
  if ( (this->field24 || this->u16_26) /*0x483eaa*/
    && (this->field24 != 0xFFFF || this->u16_26 != 0xFFFF) )
  {
    HIDWORD(v19) = (char *)&v20 + 4; /*0x483eb8*/
    (v19) = ((v19) & 0xFFFFFFFF00000000ull) | ((&v20) & 0xFFFFFFFFull); /*0x483ebd*/
    Tactical::CalculateTacticalLighting((Tactical *)this, &a3, &a4, (int *)&a5, (int *)&a6, (int *)&a7, &a2, v19); /*0x483eda*/
    if ( !this->qB738 ) /*0x483edf*/
      goto LABEL_17; /*0x483edf*/
    v21 = a2; /*0x483ef2*/
    v22 = v20; /*0x483efa*/
    QuantizeColorRGB(&v21, (int *)&v22, (int *)&v22 + 1); /*0x483f0b*/
    v11 = (unsigned __int64 *)this->qB738; /*0x483f10*/
    if ( v11->u32_198 != v21 || *(unsigned __int64 *)(&v11->u32_19C) != v22 ) /*0x483f2d*/
    {
      if ( stru_A8E960.nextScenario[64] ) /*0x483f45*/
        --v11->u32_194; /*0x483f47*/
      this->qB738 = 0; /*0x483f4d*/
    }
    if ( !this->qB738 ) /*0x483f54*/
    {
LABEL_17:
      SurfaceClassPrimary = CreateSurfaceClassPrimary(a2, v20, (int)(((v20) >> 32) & 0xFFFFFFFFu)); /*0x483f68*/
      this->qB738 = SurfaceClassPrimary; /*0x483f6f*/
      if ( SurfaceClassPrimary ) /*0x483f72*/
        ++*(unsigned int *)(SurfaceClassPrimary + 404); /*0x483f74*/
    }
    goto LABEL_19; /*0x483f74*/
  }
  result = CreateSurfaceClassPrimary(1000, 1000, 1000); /*0x483fea*/
  this->qB738 = result; /*0x483ff1*/
  if ( result ) /*0x483ff4*/
    ++result->u32_194; /*0x483ff6*/
  this->visibleCells[38] = 1000; /*0x483ffc*/
  this->visibleCells[40] = 1000; /*0x484003*/
  this->visibleCells[42] = 1000; /*0x48400a*/
  this->visibleCells[44] = 1000; /*0x484011*/
  this->visibleCells[46] = 1000; /*0x484018*/
  this->visibleCells[48] = 1000; /*0x48401f*/
  this->q39418 = 0x10000; /*0x484026*/
  this->visibleCells[36] = 0; /*0x484030*/
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
  DSurface_ViewBounds.field_0 = (int)this->vfptr; /*0x4a8987*/
  DSurface_ViewBounds.field_4 = this->vfptr1; /*0x4a8990*/
  *(unsigned int *)g_Map_VisibleRectOffset = *(unsigned int *)this->vfptr2; /*0x4a8999*/
  *(unsigned int *)&g_DSurface_WindowOffset = this->vfptr3; /*0x4a89a1*/
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
        operator delete((v1)); /*0x4a89f4*/
      }
      g_ZBufferDescriptor = 0; /*0x4a89fc*/
    }
    v2 = (BSurface *)operator new(0x30u); /*0x4a8a04*/
    if ( v2 ) /*0x4a8a0e*/
      v3 = (Stream *)BSurface::ConstructEx( /*0x4a8a3a*/
                       v2,
                       DSurface_ViewBounds.field_0,
                       (int)DSurface_ViewBounds.field_4,
                       *(int *)g_Map_VisibleRectOffset,
                       *(int *)&g_DSurface_WindowOffset);
    else
      v3 = 0; /*0x4a8a41*/
    g_ZBufferDescriptor = v3; /*0x4a8a43*/
    v3[1].Stream_field_10 = 0x8000; /*0x4a8a48*/
    Debug::Log(); /*0x4a8a61*/
    if ( *(unsigned int *)&g_VisibleSurfaceDescriptor ) /*0x4a8a70*/
    {
      Debug::Log(); /*0x4a8a77*/
      v4 = *(void **)&g_VisibleSurfaceDescriptor; /*0x4a8a7c*/
      if ( *(unsigned int *)&g_VisibleSurfaceDescriptor ) /*0x4a8a87*/
      {
        StreamObj::Release(*(StreamObj **)&g_VisibleSurfaceDescriptor); /*0x4a8a8b*/
        operator delete((v4)); /*0x4a8a91*/
      }
      *(unsigned int *)&g_VisibleSurfaceDescriptor = 0; /*0x4a8a99*/
    }
    v5 = (BSurface *)operator new(0x30u); /*0x4a8aa1*/
    if ( v5 ) /*0x4a8aab*/
      *(unsigned int *)&g_VisibleSurfaceDescriptor = BSurface::Construct( /*0x4a8adc*/
                                               v5,
                                               DSurface_ViewBounds.field_0,
                                               (int)DSurface_ViewBounds.field_4,
                                               *(int *)g_Map_VisibleRectOffset,
                                               *(int *)&g_DSurface_WindowOffset);
    else
      *(unsigned int *)&g_VisibleSurfaceDescriptor = 0; /*0x4a8ae3*/
    Debug::Log(); /*0x4a8afb*/
    (*(void (__thiscall **)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4a8b0b*/
  }
  SidebarClass::LoadResources(v9); /*0x4a8b13*/
  v6 = DSurface_ViewBounds.field_0; /*0x4a8b1e*/
  v7 = DSurface_ViewBounds.field_4; /*0x4a8b24*/
  v8 = *(unsigned int *)g_Map_VisibleRectOffset; /*0x4a8b29*/
  stru_8A06F8.Width = DSurface_ViewBounds.field_0; /*0x4a8b37*/
  stru_8A06F8.Height = (int)DSurface_ViewBounds.field_4; /*0x4a8b3d*/
  *(unsigned int *)&stru_8A06F8.Visible = *(unsigned int *)g_Map_VisibleRectOffset; /*0x4a8b42*/
  stru_8A06F8.ID = *(unsigned int *)&g_DSurface_WindowOffset; /*0x4a8b48*/
  if ( *(unsigned int *)&g_TacticalRender ) /*0x4a8b4e*/
  {
    v11 = 0; /*0x4a8b55*/
    v10[0] = 500; /*0x4a8b59*/
    v10[5] = 0; /*0x4a8b61*/
    v10[1] = DSurface_ViewBounds.field_0; /*0x4a8b65*/
    v10[2] = (int)DSurface_ViewBounds.field_4; /*0x4a8b69*/
    v10[3] = *(unsigned int *)g_Map_VisibleRectOffset; /*0x4a8b6d*/
    v10[4] = *(unsigned int *)&g_DSurface_WindowOffset; /*0x4a8b71*/
    HashTable::Remove(*(HashTable **)&g_TacticalRender, 500); /*0x4a8b75*/
    CommandClass::AddAction(*(int **)&g_TacticalRender, (int)v10); /*0x4a8b85*/
    v7 = DSurface_ViewBounds.field_4; /*0x4a8b8a*/
    v6 = DSurface_ViewBounds.field_0; /*0x4a8b8f*/
    v8 = *(unsigned int *)g_Map_VisibleRectOffset; /*0x4a8b95*/
  }
  MessageListClass::Init( /*0x4a8bb8*/
    (MessageListClass *)&g_GameNetworkObject,
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
  TacticalClass::processInput((TacticalClass *)&g_GameNetworkObject, *(int *)g_Map_VisibleRectOffset); /*0x4a8bc9*/
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

  v1 = ((*((signed short *)&(dword_A8B230[374].ptr_4))) << 8) + 128; /*0x537648*/
  v4[0] = ((*((signed short *)(((unsigned char *)&(dword_A8B230[374].ptr_0)) + 2))) << 8) + 128; /*0x53764d*/
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
  int v8; // ebx
  int *v9; // ecx
  int v10; // eax
  int v11; // ecx
  int *v12; // eax
  unsigned int *v13; // eax
  unsigned int *v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  __int16 v19; // dx
  unsigned short *v20; // eax
  __int16 v21; // dx
  int v22; // ebx
  __int16 v23; // ax
  __int16 v24; // ax
  __int16 v25; // cx
  int v26; // edx
  __int16 v27; // ax
  unsigned int *v28; // [esp+10h] [ebp-14h] BYREF
  int v29; // [esp+14h] [ebp-10h] BYREF
  int v30; // [esp+18h] [ebp-Ch]
  unsigned char v31[8]; // [esp+1Ch] [ebp-8h] BYREF

  v3 = (unsigned int *)*a3; /*0x4a91ba*/
  v4 = (unsigned __int16)*a3 == (unsigned __int16)dword_8A03F8; /*0x4a91bd*/
  a3 = (unsigned int *)*a3; /*0x4a91c6*/
  if ( v4 && HIWORD(a3) == (((dword_8A03F8) >> 16) & 0xFFFF) ) /*0x4a91dc*/
  {
    v6 = (int *)(*(int (**)(MouseClass *, int *))(dword_887640->HandleClick_ph + 52))( /*0x4a91ef*/
                  dword_887640,
                  &v29);
    v7 = DSurface_ViewBounds.field_0; /*0x4a91f2*/
    v8 = dword_886FA4; /*0x4a91f8*/
    v9 = v6; /*0x4a91fe*/
    v10 = *v6; /*0x4a9200*/
    v11 = v9[1]; /*0x4a9204*/
    if ( v10 < DSurface_ViewBounds.field_0 /*0x4a9223*/
      || v10 >= DSurface_ViewBounds.field_0 + dword_886FA8
      || v11 < dword_886FA4
      || v11 >= dword_886FA4 + dword_886FAC )
    {
      v14 = (unsigned int *)(*(int (**)(MouseClass *, unsigned char *))(dword_887640->HandleClick_ph + 52))( /*0x4a9284*/
                        dword_887640,
                        v31);
      v15 = v14[1]; /*0x4a9292*/
      v29 = *v14 - v7; /*0x4a9295*/
      v30 = v15 - v8; /*0x4a929f*/
      v3 = (unsigned int *)*Tactical::PixelToCell((Tactical *)g_TacticalClass_Instance, &a3, &v29); /*0x4a92af*/
    }
    else
    {
      v12 = (int *)(*(int (**)(MouseClass *, unsigned char *))(dword_887640->HandleClick_ph + 52))( /*0x4a9232*/
                     dword_887640,
                     v31);
      v29 = *v12; /*0x4a9237*/
      v30 = v12[1]; /*0x4a924d*/
      v13 = (unsigned int *)*TacticalClass::PixelToCellCheck((RadarClass *)&v28, &v29); /*0x4a9256*/
      v28 = v13; /*0x4a925f*/
      if ( v13 == (unsigned int *)dword_8A03F8 ) /*0x4a9263*/
        goto LABEL_11; /*0x4a9263*/
      v3 = v13; /*0x4a9273*/
    }
    a3 = v3; /*0x4a92b1*/
  }
LABEL_11:
  v16 = this->u32_117C; /*0x4a92b5*/
  if ( v16 ) /*0x4a92bd*/
  {
    if ( !stru_A8E960.random[503] ) /*0x4a92e3*/
    {
      v19 = HIWORD(a3) + this->u32_117A; /*0x4a92f3*/
      LOWORD(v28) = (unsigned short)v3 + this->u32_1178; /*0x4a92fb*/
      HIWORD(v28) = v19; /*0x4a9301*/
      v20 = UI_Move(&v29, &v28, v16); /*0x4a931e*/
      v21 = v20[1] - this->u32_117A; /*0x4a9331*/
      LOWORD(a3) = *v20 - this->u32_1178; /*0x4a9338*/
      HIWORD(a3) = v21; /*0x4a933d*/
      v3 = a3; /*0x4a9342*/
    }
    v4 = (unsigned short)v3 == this->u32_1174; /*0x4a9346*/
    a3 = v3; /*0x4a934d*/
    if ( v4 && HIWORD(v3) == this->u32_1176 ) /*0x4a935f*/
    {
      *a2 = v3; /*0x4a9367*/
      return a2; /*0x4a9361*/
    }
    else
    {
      v22 = this->u32_1174; /*0x4a9377*/
      if ( this->u32_117C ) /*0x4a9371*/
      {
        if ( v3 != this->u32_1174 && this->u32_1174 != dword_8A03F8 ) /*0x4a93a0*/
        {
          v23 = this->u32_1176 + this->u32_117A; /*0x4a93c7*/
          LOWORD(a3) = this->u32_1174 + this->u32_1178; /*0x4a93d0*/
          HIWORD(a3) = v23; /*0x4a93d5*/
          MapClass::SetCellFlagsAlongPath((MapClass *)this, &a3, 0); /*0x4a93e9*/
        }
        if ( v3 != (unsigned int *)dword_8A03F8 ) /*0x4a93f5*/
        {
          v24 = this->u32_1178 + (unsigned short)v3; /*0x4a940a*/
          HIWORD(a3) = HIWORD(v3) + this->u32_117A; /*0x4a9414*/
          LOWORD(a3) = v24; /*0x4a941b*/
          MapClass::SetCellFlagsAlongPath((MapClass *)this, &a3, (unsigned short *)1); /*0x4a942f*/
        }
      }
      this->u32_1174 = v3; /*0x4a9434*/
      v25 = this->u32_1178 + (unsigned short)v3; /*0x4a944b*/
      HIWORD(a3) = this->u32_1176 + this->u32_117A; /*0x4a9452*/
      v26 = this->u32_117C; /*0x4a9457*/
      LOWORD(a3) = v25; /*0x4a945d*/
      this->u32_1180 = GetBuildingPlacement( /*0x4a9485*/
                                  this->u32_11A8,
                                  this->u32_11AC,
                                  v26,
                                  (__int16 *)&a3);
      v27 = this->u32_117A + this->u32_1176; /*0x4a94a0*/
      LOWORD(a3) = this->u32_1174 + this->u32_1178; /*0x4a94a7*/
      HIWORD(a3) = v27; /*0x4a94b0*/
      this->u32_1181 = ProcessDataBuildingTypeClass( /*0x4a94da*/
                                  this->u32_11A8,
                                  this->u32_11AC,
                                  this->u32_117C,
                                  (__int16 *)&a3);
      *a2 = v22; /*0x4a94e6*/
      return a2; /*0x4a94e0*/
    }
  }
  else
  {
    v17 = this->u32_1174; /*0x4a92bf*/
    this->u32_1174 = v3; /*0x4a92c9*/
    *a2 = v17; /*0x4a92d2*/
    return a2; /*0x4a92c5*/
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
  int v12; // edi
  int v13; // eax
  int RadarCombatFlashTime; // edi
  int Ticks; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v22; // [esp+8h] [ebp-14h] BYREF
  int v23; // [esp+Ch] [ebp-10h]
  char v24; // [esp+10h] [ebp-Ch] BYREF
  int v25; // [esp+14h] [ebp-8h]

  (v1) = ((v1) & ~0xFF) | ((dword_A8D5F8) & 0xFF); /*0x6d2540*/
  v2 = 0; /*0x6d2549*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x6d2550*/
    return v1; /*0x6d2550*/
  if ( this->TacticalClass_field_A8 != *(unsigned int *)&stru_A8E960.random[528] ) /*0x6d2565*/
  {
    if ( stru_A8E960.random[488] ) /*0x6d2573*/
    {
      v4 = &this->TacticalClass_field_D0; /*0x6d2584*/
      if ( (*&this->TacticalClass_field_D0 != dword_B0CE08 || *&this->TacticalClass_field_D4 != dword_B0CE0C) /*0x6d25af*/
        && *&this->TacticalClass_field_D8 != 0.0 )
      {
        v5 = *&this->TacticalClass_field_DC + *&this->TacticalClass_field_D8; /*0x6d25bb*/
        *&this->TacticalClass_field_DC = v5; /*0x6d25c1*/
        if ( v5 > 1.0 ) /*0x6d25d2*/
          *&this->TacticalClass_field_DC = 1065353216; /*0x6d25d4*/
        v6 = &this->TacticalClass_field_C8; /*0x6d25e4*/
        v7 = TacticalClass::CalcInverseAlpha( /*0x6d25f2*/
               (TacticalClass *)&v24,
               (int)&this->TacticalClass_field_D0,
               *&this->TacticalClass_field_DC);
        v8 = *&this->TacticalClass_field_DC; /*0x6d25f7*/
        v9 = *v7; /*0x6d2603*/
        v25 = v7->ptr_4; /*0x6d260a*/
        if ( v8 >= 1.0 ) /*0x6d2611*/
        {
          *(unsigned int *)v4 = 0; /*0x6d2617*/
          *(unsigned int *)v6 = 0; /*0x6d261a*/
          *&this->TacticalClass_field_D4 = 0; /*0x6d261c*/
          *&this->TacticalClass_field_CC = 0; /*0x6d261f*/
          *&this->TacticalClass_field_D8 = 0; /*0x6d2622*/
          *&this->TacticalClass_field_DC = 0; /*0x6d2628*/
        }
        v22 = v9; /*0x6d2639*/
        v23 = v25; /*0x6d263d*/
        if ( !ClampCoordMap(&v22) || stru_A8E960.random[503] ) /*0x6d2651*/
        {
          v11 = v25; /*0x6d265d*/
          v10 = v9; /*0x6d2661*/
        }
        else
        {
          v10 = v22; /*0x6d2653*/
          v11 = v23; /*0x6d2657*/
        }
        *&this->TacticalClass_field_D64 = v10; /*0x6d2663*/
        *&this->TacticalClass_field_D74 = v10; /*0x6d2669*/
        *&this->TacticalClass_field_D68 = v11; /*0x6d266f*/
        *&this->TacticalClass_field_D78 = v11; /*0x6d2675*/
        TacticalClass::CalcViewportCells((TacticalClass *)this); /*0x6d267d*/
        this->redrawing = 1; /*0x6d2682*/
        v2 = 1; /*0x6d2689*/
      }
    }
    v12 = *&this->TacticalClass_field_DAC; /*0x6d2691*/
    if ( this->startTime != -1 ) /*0x6d269b*/
    {
      v13 = Timer::GetTicks() - this->startTime; /*0x6d26a8*/
      if ( v13 >= v12 ) /*0x6d26b0*/
      {
LABEL_20:
        RadarCombatFlashTime = dword_8871E0->RadarCombatFlashTime; /*0x6d26b8*/
        Ticks = Timer::GetTicks(); /*0x6d26c5*/
        v16 = v25; /*0x6d26ca*/
        this->startTime = Ticks; /*0x6d26ce*/
        v17 = *&this->mouseFrameIndex; /*0x6d26d4*/
        *(unsigned int *)this->TacticalClass_field_DA8 = v16; /*0x6d26da*/
        *&this->TacticalClass_field_DAC = RadarCombatFlashTime; /*0x6d26e1*/
        *&this->mouseFrameIndex = v17 + 1; /*0x6d26e7*/
        goto LABEL_21; /*0x6d26e7*/
      }
      v12 -= v13; /*0x6d26b2*/
    }
    if ( v12 ) /*0x6d26b6*/
      goto LABEL_21; /*0x6d26b6*/
    goto LABEL_20; /*0x6d26b6*/
  }
LABEL_21:
  LOBYTE(v1) = stru_A8E960.random[528]; /*0x6d26ed*/
  this->TacticalClass_field_A8 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6d26f3*/
  if ( *&this->TacticalClass_field_D74 != *&this->TacticalClass_field_D64 /*0x6d2715*/
    || (v1 = *&this->TacticalClass_field_D68, *&this->TacticalClass_field_D78 != v1) )
  {
    if ( !v2 ) /*0x6d2719*/
    {
      v18 = *&this->TacticalClass_field_D74; /*0x6d2721*/
      v23 = *&this->TacticalClass_field_D78; /*0x6d272b*/
      v22 = v18; /*0x6d2732*/
      if ( !ClampCoordMap(&v22) || stru_A8E960.random[503] ) /*0x6d2746*/
      {
        v19 = *&this->TacticalClass_field_D74; /*0x6d2752*/
        v20 = *&this->TacticalClass_field_D78; /*0x6d2758*/
      }
      else
      {
        v19 = v22; /*0x6d2748*/
        v20 = v23; /*0x6d274c*/
      }
      *&this->TacticalClass_field_D64 = v19; /*0x6d275e*/
      *&this->TacticalClass_field_D74 = v19; /*0x6d2764*/
      *&this->TacticalClass_field_D68 = v20; /*0x6d276a*/
      *&this->TacticalClass_field_D78 = v20; /*0x6d2770*/
      LOBYTE(v1) = TacticalClass::CalcViewportCells((TacticalClass *)this); /*0x6d2778*/
      this->redrawing = 1; /*0x6d277d*/
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
    if ( !v3->waypointCount ) /*0x5090c9*/
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
    || screen_x > *(unsigned int *)g_Map_VisibleRectOffset + 32
    || screen_y < -32
    || screen_y > *(unsigned int *)&g_DSurface_WindowOffset + 32 )
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
int TacticalClass::InterpolateColor(int elapsed_ms)
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
int TacticalClass::DecrementCounter(int delta)
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
  v4 = (*((unsigned char *)&(stru_A8EB00.ptr_0[31]))) != 0 ? *(unsigned int *)g_Map_VisibleRectOffset : 0;
  if ( *buttons >= v4 + dword_B04A00 && *buttons < v4 + dword_B04A00 + dword_B04A08 ) /*0x653896*/
  {
    v5 = buttons[1]; /*0x653898*/
    if ( v5 >= dword_B04A04 && v5 < dword_B04A0C + dword_B04A04 ) /*0x6538a9*/
      Mouse::SetCursor((int)&DataGlobal_87F7E8, 0, 0); /*0x6538b4*/
  }
  if ( *buttons >= v4 + dword_B048C8 && *buttons < v4 + dword_B048C8 + dword_B048D0 ) /*0x6538d6*/
  {
    v6 = buttons[1]; /*0x6538d8*/
    if ( v6 >= dword_B048CC && v6 < dword_B048D4 + dword_B048CC ) /*0x6538e8*/
      Mouse::SetCursor((int)&DataGlobal_87F7E8, 0, 0); /*0x6538f3*/
  }
  if ( *y == 33010 ) /*0x653903*/
  {
    if ( !*(unsigned int *)&dword_A8B238 /*0x653933*/
      || (*(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4)
      && dword_A8B23C
      && (*((uint8_t (__thiscall **)(ObjectClass *))dword_A8B23C->ptr_0 + 2))(dword_A8B23C)
      && (*((uint8_t (__thiscall **)(ObjectClass *))dword_A8B23C->ptr_0 + 1))(dword_A8B23C) )
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
    RadarClass_field_0x14B0 = x->RadarViewMode; /*0x65396c*/
    if ( RadarClass_field_0x14B0 != 3 && RadarClass_field_0x14B0 != 4 ) /*0x65397a*/
    {
      x->RadarQueueViewMode = RadarClass_field_0x14B0; /*0x653982*/
      RadarClass::SetViewMode((int *)x, 4, 0); /*0x653988*/
      *(unsigned int *)x->u32_14B8 = 0; /*0x65398d*/
    }
  }
  if ( x->RadarViewMode == 4 ) /*0x65399e*/
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
      v4 = dword_887640->checkRegion(); /*0x653a32*/
      v5 = dword_887640->checkBounds(); /*0x653a36*/
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
            v24 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v27); /*0x653e75*/
            Coords = CellClass::GetCoords(v24, v37); /*0x653e7c*/
            v34 = *Coords; /*0x653e83*/
            v35 = Coords->ptr_4; /*0x653e95*/
            v36 = Coords->ptr_8; /*0x653e9c*/
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
                        v9 = ClosestEnemy->COMStub_29(/*0x653c83*/
                               ClosestEnemy, v28, 0);
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
} // namespace gamemd